#!/usr/bin/env python3
"""Survey MSL donor candidates across reference projects."""

from __future__ import annotations

import argparse
import hashlib
import re
from dataclasses import dataclass
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
REF_ROOT = ROOT / "reference_projects"
SECTION_RE = re.compile(r"\.(?P<section>text|rodata|data|sdata|sdata2)\s+start:(0x[0-9A-Fa-f]+)\s+end:(0x[0-9A-Fa-f]+)")
SYMBOL_RE = re.compile(
    r"^(?P<name>.+?) = \.text:(?P<address>0x[0-9A-Fa-f]+); // type:function size:(?P<size>0x[0-9A-Fa-f]+|\d+)\b"
)
STATE_RANKS = {
    "Matching": 0,
    "MatchingFor": 1,
    "Linked": 2,
    "NonMatching": 3,
    "absent": 4,
}


@dataclass(frozen=True)
class DonorRecord:
    project: str
    config: str | None
    object_path: str | None
    state: str | None
    line: str | None
    project_linker_version: str | None
    lib_kind: str | None
    lib_name: str | None
    lib_extra_cflags: str | None
    mw_version: str | None
    cflags: str | None
    extra_cflags: str | None
    source_path: Path | None
    sha1: str | None
    size: int | None
    text_size: int
    text_spans: int
    text_ranges: tuple[tuple[int, int], ...]
    rodata_size: int
    sdata2_size: int
    target_path: str | None
    target_text_size: int
    target_text_ranges: tuple[tuple[int, int], ...]
    target_rodata_size: int
    target_sdata2_size: int
    functions: tuple[tuple[str, int], ...]
    target_functions: tuple[tuple[str, int], ...]
    notes: tuple[str, ...]

    @property
    def text_delta(self) -> int:
        return self.text_size - self.target_text_size

    @property
    def rodata_delta(self) -> int:
        return self.rodata_size - self.target_rodata_size

    @property
    def sdata2_delta(self) -> int:
        return self.sdata2_size - self.target_sdata2_size

    @property
    def section_distance(self) -> int:
        return abs(self.text_delta) + abs(self.rodata_delta) + abs(self.sdata2_delta)

    @property
    def function_layout_matches(self) -> bool:
        return self.functions == self.target_functions

    @property
    def function_names_match(self) -> bool:
        return tuple(name for name, _ in self.functions) == tuple(name for name, _ in self.target_functions)


@dataclass(frozen=True)
class ObjectEntry:
    object_path: str | None
    state: str | None
    line: str | None
    project_linker_version: str | None
    lib_kind: str | None
    lib_name: str | None
    lib_extra_cflags: str | None
    mw_version: str | None
    cflags: str | None
    extra_cflags: str | None


def normalize_text(data: bytes) -> bytes:
    return data.replace(b"\r\n", b"\n")


def sha1_path(path: Path) -> str:
    return hashlib.sha1(normalize_text(path.read_bytes())).hexdigest()


def state_sort_key(state: str | None) -> tuple[int, str]:
    if state is None:
        return (STATE_RANKS["absent"], "absent")
    for prefix, rank in STATE_RANKS.items():
        if state.startswith(prefix):
            return (rank, state)
    return (len(STATE_RANKS), state)


def iter_configs(project_root: Path) -> list[str]:
    config_root = project_root / "config"
    if not config_root.is_dir():
        return []
    return sorted(p.name for p in config_root.iterdir() if p.is_dir())


def iter_object_calls(text: str) -> list[str]:
    return iter_named_calls(text, "Object(")


def iter_named_calls(text: str, needle: str) -> list[str]:
    calls: list[str] = []
    start = 0
    while True:
        index = text.find(needle, start)
        if index == -1:
            break
        i = index + len(needle)
        depth = 1
        in_string = False
        while i < len(text) and depth > 0:
            ch = text[i]
            prev = text[i - 1] if i > 0 else ""
            if ch == '"' and prev != "\\":
                in_string = not in_string
            elif not in_string:
                if ch == "(":
                    depth += 1
                elif ch == ")":
                    depth -= 1
            i += 1
        calls.append(text[index:i])
        start = i
    return calls


def _normalize_line(text: str | None) -> str | None:
    if text is None:
        return None
    return " ".join(part.strip() for part in text.strip().splitlines())


def _project_linker_version(text: str) -> str | None:
    match = re.search(r'config\.linker_version\s*=\s*"([^"]+)"', text)
    return match.group(1) if match else None


def _helper_defaults(text: str, helper_name: str) -> tuple[str | None, str | None]:
    pattern = re.compile(rf"def {re.escape(helper_name)}\b.*?return\s*\{{(.*?)\n\s*\}}", re.S)
    match = pattern.search(text)
    if not match:
        return None, None
    body = match.group(1)
    mw_match = re.search(r'"mw_version"\s*:\s*"([^"]+)"', body)
    cflags_match = re.search(r'"cflags"\s*:\s*([^,\n]+)', body)
    return (mw_match.group(1) if mw_match else None, cflags_match.group(1).strip() if cflags_match else None)


def _split_call_args(call: str) -> list[str]:
    body = call[call.find("(") + 1 : -1]
    parts: list[str] = []
    depth = 0
    current: list[str] = []
    in_string = False
    prev = ""
    for ch in body:
        if ch == '"' and prev != "\\":
            in_string = not in_string
        elif not in_string:
            if ch in "([{":
                depth += 1
            elif ch in ")]}":
                depth -= 1
            elif ch == "," and depth == 0:
                parts.append("".join(current).strip())
                current = []
                prev = ch
                continue
        current.append(ch)
        prev = ch
    if current:
        parts.append("".join(current).strip())
    return parts


def _parse_object_entry(
    call: str,
    linker_version: str | None,
    lib_kind: str | None,
    lib_name: str | None,
    lib_extra_cflags: str | None,
    lib_default_mw_version: str | None,
    lib_default_cflags: str | None,
) -> ObjectEntry | None:
    args = _split_call_args(call)
    if len(args) < 2:
        return None
    strings = re.findall(r'"([^"]+)"', call)
    if not strings:
        return None
    path_string = next((item for item in strings if item.endswith((".c", ".C", ".cpp", ".s"))), strings[0])
    keywords: dict[str, str] = {}
    for arg in args[2:]:
        if "=" not in arg:
            continue
        key, value = arg.split("=", 1)
        keywords[key.strip()] = value.strip()
    cflags = keywords.get("cflags")
    if cflags is None and lib_default_cflags is not None and lib_extra_cflags is not None:
        cflags = lib_default_cflags.replace("extra_cflags", lib_extra_cflags)
    return ObjectEntry(
        object_path=path_string.replace("\\", "/"),
        state=args[0],
        line=_normalize_line(call),
        project_linker_version=linker_version,
        lib_kind=lib_kind,
        lib_name=lib_name,
        lib_extra_cflags=lib_extra_cflags,
        mw_version=keywords.get("mw_version") or lib_default_mw_version,
        cflags=cflags,
        extra_cflags=keywords.get("extra_cflags"),
    )


def find_object_entry(configure_path: Path, basename: str) -> ObjectEntry:
    text = configure_path.read_text(encoding="utf-8", errors="ignore")
    linker_version = _project_linker_version(text)
    msl_mw_version, msl_cflags = _helper_defaults(text, "mslLib")
    matches: list[ObjectEntry] = []

    for lib_call in iter_named_calls(text, "mslLib("):
        if basename not in lib_call:
            continue
        lib_args = _split_call_args(lib_call)
        lib_name = None
        if lib_args:
            lib_match = re.match(r'"([^"]+)"', lib_args[0])
            if lib_match:
                lib_name = lib_match.group(1)
        lib_extra_cflags = lib_args[1] if len(lib_args) > 1 else None
        for object_call in iter_object_calls(lib_call):
            entry = _parse_object_entry(
                object_call,
                linker_version,
                "mslLib",
                lib_name,
                lib_extra_cflags,
                msl_mw_version,
                msl_cflags,
            )
            if entry and entry.object_path and Path(entry.object_path).name == basename:
                matches.append(entry)

    if not matches:
        for call in iter_object_calls(text):
            entry = _parse_object_entry(call, linker_version, None, None, None, None, None)
            if entry and entry.object_path and Path(entry.object_path).name == basename:
                matches.append(entry)

    if not matches:
        return ObjectEntry(
            object_path=None,
            state=None,
            line=None,
            project_linker_version=None,
            lib_kind=None,
            lib_name=None,
            lib_extra_cflags=None,
            mw_version=None,
            cflags=None,
            extra_cflags=None,
        )

    return next((entry for entry in matches if entry.object_path and ("MSL" in entry.object_path or "libc" not in entry.object_path)), matches[0])


def format_config_summary(record: DonorRecord | ObjectEntry) -> str:
    parts: list[str] = []
    if record.project_linker_version:
        parts.append(f"linker={record.project_linker_version}")
    if record.lib_name:
        parts.append(f"lib={record.lib_name}")
    if record.lib_extra_cflags and record.lib_extra_cflags != "[]":
        parts.append(f"lib_extra={record.lib_extra_cflags}")
    if record.mw_version:
        parts.append(f"mw={record.mw_version}")
    if record.cflags:
        parts.append(f"cflags={record.cflags}")
    if record.extra_cflags:
        parts.append(f"extra={record.extra_cflags}")
    return " ".join(parts) if parts else "-"


def find_source_file(project_root: Path, basename: str, object_path: str | None) -> Path | None:
    candidates = sorted(project_root.rglob(basename))
    if not candidates:
        return None
    if object_path is None:
        return candidates[0]
    object_norm = object_path.replace("\\", "/").lower()
    ranked: list[tuple[int, int, str, Path]] = []
    for candidate in candidates:
        rel = candidate.relative_to(project_root).as_posix().lower()
        score = 0
        if rel.endswith(object_norm):
            score += 100
        obj_parts = set(Path(object_norm).parts)
        rel_parts = set(Path(rel).parts)
        score += len(obj_parts & rel_parts)
        ranked.append((-score, len(rel), rel, candidate))
    ranked.sort()
    return ranked[0][3]


def normalize_object_path(path: str | None) -> str | None:
    return path.replace("\\", "/").lower() if path else None


def collect_split_info(
    project_root: Path, basename: str, object_path: str | None
) -> tuple[str | None, int, int, tuple[tuple[int, int], ...], int, int]:
    configs = iter_configs(project_root)
    best_config = None
    best_size = 0
    best_spans = 0
    best_ranges: tuple[tuple[int, int], ...] = ()
    best_rodata = 0
    best_sdata2 = 0
    object_norm = normalize_object_path(object_path)
    for config in configs:
        splits = project_root / "config" / config / "splits.txt"
        if not splits.is_file():
            continue
        current = None
        total = 0
        spans = 0
        ranges: list[tuple[int, int]] = []
        rodata = 0
        sdata2 = 0
        text = splits.read_text(encoding="utf-8", errors="ignore").splitlines()
        for line in text:
            if line and not line.startswith((" ", "\t")) and line.endswith(":"):
                current = line[:-1].replace("\\", "/")
                continue
            if current is None or Path(current).name != basename:
                continue
            current_norm = current.lower()
            if object_norm is not None and current_norm != object_norm and current_norm.endswith("/" + basename.lower()):
                continue
            match = SECTION_RE.search(line)
            if not match:
                continue
            start = int(match.group(2), 16)
            end = int(match.group(3), 16)
            size = end - start
            section = match.group("section")
            if section == "text":
                spans += 1
                total += size
                ranges.append((start, end))
            elif section == "rodata":
                rodata += size
            elif section == "sdata2":
                sdata2 += size
        if spans and (best_config is None or total > best_size):
            best_config = config
            best_size = total
            best_spans = spans
            best_ranges = tuple(ranges)
            best_rodata = rodata
            best_sdata2 = sdata2
    return best_config, best_size, best_spans, best_ranges, best_rodata, best_sdata2


def build_notes(basename: str, source_path: Path | None) -> tuple[str, ...]:
    if source_path is None:
        return ()
    text = source_path.read_text(encoding="utf-8", errors="ignore")
    notes: list[str] = []
    if basename == "printf.c":
        if "volatile const unsigned char" in text:
            notes.append("head=volatile")
        elif "if ((c = *++s) == '%')" in text:
            notes.append("head=preinc")
        if "__ctype_map" in text:
            notes.append("digits=table")
        elif "while (isdigit(c))" in text:
            notes.append("digits=ctype")
    if basename == "strtold.c":
        if 'char nan_arg[32] = "";' in text:
            notes.append("nan_arg=yes")
        if 'char nan_pad[3] = "";' in text:
            notes.append("nan_pad=yes")
        if "#include \"float.h\"" in text:
            notes.append("float_h=yes")
        if "#include \"stl/limits.h\"" in text:
            notes.append("limits=stl")
        elif "#include \"limits.h\"" in text:
            notes.append("limits=plain")
    return tuple(notes)


def load_target_split_sizes(basename: str) -> tuple[str | None, int, tuple[tuple[int, int], ...], int, int]:
    splits = ROOT / "config" / "GQPE78" / "splits.txt"
    if not splits.is_file():
        return None, 0, (), 0, 0
    current = None
    text_size = 0
    text_ranges: list[tuple[int, int]] = []
    rodata_size = 0
    sdata2_size = 0
    target_path = None
    for line in splits.read_text(encoding="utf-8", errors="ignore").splitlines():
        if line and not line.startswith((" ", "\t")) and line.endswith(":"):
            current = line[:-1].replace("\\", "/")
            continue
        if current is None or Path(current).name != basename:
            continue
        match = SECTION_RE.search(line)
        if not match:
            continue
        target_path = current
        start = int(match.group(2), 16)
        end = int(match.group(3), 16)
        size = end - start
        section = match.group("section")
        if section == "text":
            text_size += size
            text_ranges.append((start, end))
        elif section == "rodata":
            rodata_size += size
        elif section == "sdata2":
            sdata2_size += size
    return target_path, text_size, tuple(text_ranges), rodata_size, sdata2_size


def load_functions_for_ranges(symbols_path: Path, ranges: tuple[tuple[int, int], ...]) -> tuple[tuple[str, int], ...]:
    if not symbols_path.is_file() or not ranges:
        return ()
    functions: list[tuple[int, str, int]] = []
    for line in symbols_path.read_text(encoding="utf-8", errors="ignore").splitlines():
        match = SYMBOL_RE.match(line)
        if not match:
            continue
        address = int(match.group("address"), 16)
        size = int(match.group("size"), 0)
        end = address + size
        if any(start <= address and end <= stop for start, stop in ranges):
            functions.append((address, match.group("name"), size))
    functions.sort()
    return tuple((name, size) for _, name, size in functions)


def survey(basename: str, compare_to: Path | None) -> list[DonorRecord]:
    records: list[DonorRecord] = []
    compare_hash = sha1_path(compare_to) if compare_to and compare_to.is_file() else None
    target_path, target_text, target_ranges, target_rodata, target_sdata2 = load_target_split_sizes(basename)
    target_functions = load_functions_for_ranges(ROOT / "config" / "GQPE78" / "symbols.txt", target_ranges)
    for project_root in sorted(p for p in REF_ROOT.iterdir() if p.is_dir()):
        configure_path = project_root / "configure.py"
        if not configure_path.is_file():
            continue
        object_entry = find_object_entry(configure_path, basename)
        object_path = object_entry.object_path
        state = object_entry.state
        line = object_entry.line
        source_path = find_source_file(project_root, basename, object_path)
        split_config, text_size, text_spans, text_ranges, rodata_size, sdata2_size = collect_split_info(
            project_root, basename, object_path
        )
        functions = ()
        if split_config:
            functions = load_functions_for_ranges(project_root / "config" / split_config / "symbols.txt", text_ranges)
        sha1 = sha1_path(source_path) if source_path else None
        notes = list(build_notes(basename, source_path))
        if compare_hash and sha1 == compare_hash:
            notes.append("same_as_ours")
        records.append(
            DonorRecord(
                project=project_root.name,
                config=split_config,
                object_path=object_path,
                state=state,
                line=line,
                project_linker_version=object_entry.project_linker_version,
                lib_kind=object_entry.lib_kind,
                lib_name=object_entry.lib_name,
                lib_extra_cflags=object_entry.lib_extra_cflags,
                mw_version=object_entry.mw_version,
                cflags=object_entry.cflags,
                extra_cflags=object_entry.extra_cflags,
                source_path=source_path.relative_to(project_root) if source_path else None,
                sha1=sha1,
                size=len(normalize_text(source_path.read_bytes())) if source_path else None,
                text_size=text_size,
                text_spans=text_spans,
                text_ranges=text_ranges,
                rodata_size=rodata_size,
                sdata2_size=sdata2_size,
                target_path=target_path,
                target_text_size=target_text,
                target_text_ranges=target_ranges,
                target_rodata_size=target_rodata,
                target_sdata2_size=target_sdata2,
                functions=functions,
                target_functions=target_functions,
                notes=tuple(notes),
            )
        )
    records.sort(
        key=lambda rec: (
            state_sort_key(rec.state),
            rec.section_distance,
            abs(rec.text_delta),
            abs(rec.rodata_delta),
            abs(rec.sdata2_delta),
            rec.project,
        )
    )
    return records


def make_parser() -> argparse.ArgumentParser:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("basename", help="MSL basename to survey, e.g. printf.c or strtold.c")
    parser.add_argument(
        "--compare-to",
        type=Path,
        default=None,
        help="Optional local file to hash against donor sources",
    )
    return parser


def main() -> int:
    args = make_parser().parse_args()
    rows = survey(args.basename, args.compare_to)
    if rows:
        first = rows[0]
        target_path = first.target_path or args.basename
        target_functions = ",".join(f"{name}:0x{size:X}" for name, size in first.target_functions) or "-"
        print(
            f"target={target_path} text=0x{first.target_text_size:X} "
            f"rodata=0x{first.target_rodata_size:X} sdata2=0x{first.target_sdata2_size:X}"
        )
        print(f"target_funcs={target_functions}")
    for row in rows:
        state = row.state or "absent"
        config = row.config or "-"
        obj = row.object_path or "-"
        src = row.source_path.as_posix() if row.source_path else "-"
        sha1 = row.sha1 or "-"
        size = f"{row.size}" if row.size is not None else "-"
        notes = ",".join(row.notes) if row.notes else "-"
        functions = ",".join(f"{name}:0x{size:X}" for name, size in row.functions) if row.functions else "-"
        function_match = (
            "exact"
            if row.function_layout_matches
            else "names"
            if row.function_names_match
            else "no"
        )
        print(
            f"project={row.project} state={state} config={config} text=0x{row.text_size:X} spans={row.text_spans} "
            f"rodata=0x{row.rodata_size:X} sdata2=0x{row.sdata2_size:X} "
            f"dtext={row.text_delta:+#x} drodata={row.rodata_delta:+#x} dsdata2={row.sdata2_delta:+#x} "
            f"dist=0x{row.section_distance:X} fmatch={function_match} "
            f"size={size} sha1={sha1} obj={obj} src={src} notes={notes}"
        )
        print(f"  funcs: {functions}")
        config_summary = format_config_summary(row)
        if config_summary != "-":
            print(f"  cfg: {config_summary}")
        if row.line:
            print(f"  line: {row.line}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
