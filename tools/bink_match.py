#!/usr/bin/env python3
"""Small helpers for mining Bink objdiff artifacts.

This is intentionally narrow: it compares existing objdiff JSON probes against a
fresh current diff so we can find source-real changes that were previously
measured, then inspect the first assembly-shape divergence.
"""

from __future__ import annotations

import argparse
import base64
import glob
import json
import os
import re
import shutil
import subprocess
import sys
import time
from contextlib import contextmanager
from pathlib import Path
from typing import Any, Dict, Iterable, List, Optional, Tuple


ROOT = Path(__file__).resolve().parents[1]
BUILD = ROOT / "build" / "GQPE78"
OBJDIFF = ROOT / "build" / "tools" / "objdiff-cli.exe"
SYMBOLS = ROOT / "config" / "GQPE78" / "symbols.txt"
GHIDRA = ROOT / "reference_projects" / "bfbb_ghidra"
BINK_REFERENCE_ROOTS = [
    ROOT / "reference_projects" / "bink_references",
    ROOT / "reference_projects" / "RatDecomp" / "src" / "3rdParty" / "bink",
]
BINK_HEADER_ROOTS = [
    ROOT / "src" / "bink" / "src" / "sdk",
    ROOT / "src" / "bink" / "include",
]
LOCKS = BUILD / ".bink_match_locks"
LOCK_TIMEOUT_SECONDS = 600.0

UNITS = {
    "binkread": {
        "unit": "main/bink/src/sdk/decode/binkread",
        "object": r"build\GQPE78\src\bink\src\sdk\decode\binkread.o",
    },
    "binkacd": {
        "unit": "main/bink/src/sdk/decode/binkacd",
        "object": r"build\GQPE78\src\bink\src\sdk\decode\binkacd.o",
    },
    "expand": {
        "unit": "main/bink/src/sdk/decode/expand",
        "object": r"build\GQPE78\src\bink\src\sdk\decode\expand.o",
    },
    "yuv": {
        "unit": "main/bink/src/sdk/decode/yuv",
        "object": r"build\GQPE78\src\bink\src\sdk\decode\yuv.o",
    },
    "binkngc": {
        "unit": "main/bink/src/sdk/decode/ngc/binkngc",
        "object": r"build\GQPE78\src\bink\src\sdk\decode\ngc\binkngc.o",
    },
    "ngcsnd": {
        "unit": "main/bink/src/sdk/decode/ngc/ngcsnd",
        "object": r"build\GQPE78\src\bink\src\sdk\decode\ngc\ngcsnd.o",
    },
    "ngcfile": {
        "unit": "main/bink/src/sdk/decode/ngc/ngcfile",
        "object": r"build\GQPE78\src\bink\src\sdk\decode\ngc\ngcfile.o",
    },
    "ngcrgb": {
        "unit": "main/bink/src/sdk/decode/ngc/ngcrgb",
        "object": r"build\GQPE78\src\bink\src\sdk\decode\ngc\ngcrgb.o",
    },
    "ngcyuy2": {
        "unit": "main/bink/src/sdk/decode/ngc/ngcyuy2",
        "object": r"build\GQPE78\src\bink\src\sdk\decode\ngc\ngcyuy2.o",
    },
    "varbits": {
        "unit": "main/bink/src/sdk/varbits",
        "object": r"build\GQPE78\src\bink\src\sdk\varbits.o",
    },
    "fft": {
        "unit": "main/bink/src/sdk/fft",
        "object": r"build\GQPE78\src\bink\src\sdk\fft.o",
    },
    "dct": {
        "unit": "main/bink/src/sdk/dct",
        "object": r"build\GQPE78\src\bink\src\sdk\dct.o",
    },
    "bitplane": {
        "unit": "main/bink/src/sdk/bitplane",
        "object": r"build\GQPE78\src\bink\src\sdk\bitplane.o",
    },
}

TargetFingerprint = Tuple[Tuple[Tuple[str, str, str], ...], Tuple[Tuple[Any, ...], ...]]


def load_json(path: Path) -> Optional[Dict[str, Any]]:
    try:
        with path.open("r", encoding="utf-8") as f:
            return json.load(f)
    except Exception:
        return None


def section_score(data: Dict[str, Any]) -> Optional[float]:
    try:
        return data["left"]["sections"][0].get("match_percent")
    except Exception:
        return None


def section_size(data: Dict[str, Any]) -> Optional[int]:
    try:
        size = data["left"]["sections"][0].get("size")
        return None if size is None else int(size)
    except Exception:
        return None


def target_fingerprint(data: Dict[str, Any]) -> Optional[TargetFingerprint]:
    try:
        right = data["right"]
        sections = tuple(
            (str(section.get("name")), str(section.get("size")), str(section.get("kind")))
            for section in right.get("sections", [])
        )
        syms = tuple(
            (
                str(sym.get("name")),
                str(sym.get("size")),
                str(sym.get("kind")),
                tuple(
                    instr.get("instruction", {}).get("formatted", "")
                    for instr in sym.get("instructions", [])
                ),
                tuple(
                    (chunk.get("size"), chunk.get("data"))
                    for chunk in sym.get("data_diff", [])
                ),
            )
            for sym in right.get("symbols", [])
            if sym.get("name")
        )
        return sections, syms
    except Exception:
        return None


def side_symbols(data: Dict[str, Any], side: str) -> Dict[str, Dict[str, Any]]:
    out: Dict[str, Dict[str, Any]] = {}
    for sym in data.get(side, {}).get("symbols", []):
        name = sym.get("name")
        if name:
            out[name] = sym
    return out


def symbols(data: Dict[str, Any]) -> Dict[str, Dict[str, Any]]:
    return side_symbols(data, "left")


def target_symbols(data: Dict[str, Any]) -> Dict[str, Dict[str, Any]]:
    return side_symbols(data, "right")


def is_function(sym: Dict[str, Any]) -> bool:
    return sym.get("kind") == "SYMBOL_FUNCTION"


def symbol_score(data: Dict[str, Any], name: str) -> Optional[float]:
    sym = symbols(data).get(name)
    return None if sym is None else sym.get("match_percent")


@contextmanager
def unit_lock(unit: str) -> Iterable[None]:
    LOCKS.mkdir(parents=True, exist_ok=True)
    lock = LOCKS / unit
    start = time.monotonic()
    while True:
        try:
            lock.mkdir()
            (lock / "pid").write_text(str(os.getpid()), encoding="utf-8")
            break
        except FileExistsError:
            if time.monotonic() - start > LOCK_TIMEOUT_SECONDS:
                raise TimeoutError(f"timed out waiting for Bink match lock: {lock}")
            time.sleep(0.1)

    try:
        yield
    finally:
        try:
            (lock / "pid").unlink(missing_ok=True)
            lock.rmdir()
        except OSError:
            pass


def current_json(unit: str, rebuild: bool, refresh: bool) -> Path:
    info = UNITS[unit]
    out = BUILD / f"{unit}_current_fresh.json"
    if not refresh:
        warn_if_object_stale(unit)
        warn_if_current_json_stale(unit, out)
        return out
    with unit_lock(unit):
        if rebuild:
            if object_stale_inputs(unit):
                unit_object(unit).unlink(missing_ok=True)
            subprocess.run(["ninja", info["object"]], cwd=ROOT, check=True)
        else:
            warn_if_object_stale(unit)
        subprocess.run(
            [
                str(OBJDIFF),
                "diff",
                "-p",
                ".",
                "-u",
                info["unit"],
                "-o",
                str(out),
                "--format",
                "json",
            ],
            cwd=ROOT,
            check=True,
        )
    return out


def unit_object(unit: str) -> Path:
    return ROOT / UNITS[unit]["object"]


def unit_source_candidates(unit: str) -> List[Path]:
    obj = unit_object(unit)
    try:
        rel = obj.relative_to(BUILD)
    except ValueError:
        return []
    src_base = (ROOT / rel).with_suffix("")
    return [src_base.with_suffix(ext) for ext in (".c", ".cpp")]


def unit_header_candidates() -> Iterable[Path]:
    for root in BINK_HEADER_ROOTS:
        if not root.exists():
            continue
        yield from root.rglob("*.h")


def unit_input_candidates(unit: str) -> List[Path]:
    return unit_source_candidates(unit) + list(unit_header_candidates())


def source_anchor(unit: str, symbol: str) -> Optional[str]:
    names = [symbol]
    if "__" in symbol:
        names.append(symbol.split("__", 1)[0])

    for src in unit_source_candidates(unit):
        if not src.exists():
            continue
        try:
            lines = src.read_text(encoding="utf-8").splitlines()
        except UnicodeDecodeError:
            lines = src.read_text(errors="ignore").splitlines()
        for index, line in enumerate(lines, 1):
            for name in names:
                if re.search(rf"\b{re.escape(name)}\s*\(", line) and not line.rstrip().endswith(";"):
                    rel = src.relative_to(ROOT)
                    return f"{rel}:{index}  {line.strip()}"
    return None


def symbol_address(symbol: str) -> Optional[str]:
    if not SYMBOLS.exists():
        return None
    pattern = re.compile(rf"^{re.escape(symbol)} = \.text:0x([0-9A-Fa-f]+);")
    with SYMBOLS.open("r", encoding="utf-8", errors="ignore") as f:
        for line in f:
            match = pattern.match(line)
            if match:
                return match.group(1).lower()
    return None


def ghidra_anchor(symbol: str) -> Optional[str]:
    address = symbol_address(symbol)
    if address is None:
        return None
    path = GHIDRA / f"{address}_FUN_{address}.c"
    if not path.exists():
        return None
    return str(path.relative_to(ROOT))


def reference_terms(symbol: str) -> List[str]:
    terms = [symbol]
    if "__" in symbol:
        terms.append(symbol.split("__", 1)[0])
    if symbol.startswith("_") and len(symbol) > 1:
        terms.append(symbol[1:])

    out = []
    seen = set()
    for term in terms:
        if not term or term.startswith("["):
            continue
        if term not in seen:
            out.append(term)
            seen.add(term)
    return out


def reference_hits(symbol: str, limit: int) -> List[str]:
    roots = [root for root in BINK_REFERENCE_ROOTS if root.exists()]
    if limit <= 0 or not roots:
        return []

    hits: List[str] = []
    seen = set()
    for term in reference_terms(symbol):
        pattern = rf"\b{re.escape(term)}\b"
        for root in roots:
            try:
                result = subprocess.run(
                    [
                        "rg",
                        "--line-number",
                        "--no-heading",
                        "--color",
                        "never",
                        "--field-match-separator",
                        "\t",
                        pattern,
                        str(root.relative_to(ROOT)),
                    ],
                    cwd=ROOT,
                    text=True,
                    stdout=subprocess.PIPE,
                    stderr=subprocess.DEVNULL,
                    check=False,
                )
            except FileNotFoundError:
                return hits

            for line in result.stdout.splitlines():
                parts = line.split("\t", 2)
                if len(parts) != 3:
                    continue
                path_text, line_no, text = parts
                try:
                    rel = (ROOT / path_text).resolve().relative_to(ROOT)
                except ValueError:
                    rel = Path(path_text)
                rendered = f"{rel}:{line_no}  {text.strip()}"
                if rendered in seen:
                    continue
                hits.append(rendered)
                seen.add(rendered)
                if len(hits) >= limit:
                    return hits
    return hits


def warn_if_object_stale(unit: str) -> None:
    stale_sources = object_stale_inputs(unit)
    if stale_sources:
        names = ", ".join(str(src.relative_to(ROOT)) for src in stale_sources[:8])
        if len(stale_sources) > 8:
            names += f", ... (+{len(stale_sources) - 8} more)"
        print(
            f"warning: {UNITS[unit]['object']} is older than {names}; "
            "rerun without --no-rebuild before trusting this diff",
            file=sys.stderr,
        )


def object_stale_inputs(unit: str) -> List[Path]:
    obj = unit_object(unit)
    if not obj.exists():
        return []
    obj_mtime = obj.stat().st_mtime
    return [src for src in unit_input_candidates(unit) if src.exists() and src.stat().st_mtime > obj_mtime]


def warn_if_current_json_stale(unit: str, current: Path) -> None:
    obj = unit_object(unit)
    if not obj.exists() or not current.exists():
        return
    if current.stat().st_mtime >= obj.stat().st_mtime:
        return
    print(
        f"warning: {current.relative_to(ROOT)} is older than {UNITS[unit]['object']}; "
        "rerun without --cached before trusting this diff",
        file=sys.stderr,
    )


def artifact_paths(unit: str, wide: bool) -> Iterable[Path]:
    if wide:
        patterns = [f"*{unit}*.json"]
    else:
        patterns = [f"{unit}*.json", f"tmp_{unit}*.json", f"report_{unit}*.json"]

    seen = set()
    for pattern in patterns:
        for path in glob.glob(str(BUILD / pattern)):
            resolved = Path(path).resolve()
            if resolved not in seen:
                seen.add(resolved)
                yield Path(path)


def json_arg(unit: str, value: str) -> Path:
    path = Path(value)
    if path.suffix == ".json" or path.parent != Path("."):
        return path
    return BUILD / f"{unit}_{value}.json"


def mine(args: argparse.Namespace) -> int:
    units = args.units or list(UNITS)
    for unit in units:
        base_path = current_json(unit, not args.no_rebuild, not args.cached)
        base = load_json(base_path)
        if base is None:
            continue
        base_unit = section_score(base)
        base_size = section_size(base)
        base_target_fingerprint = target_fingerprint(base)
        base_syms = symbols(base)
        rows: List[Tuple[float, str, List[str]]] = []
        best_by_symbol: Dict[str, Tuple[float, float, str]] = {}

        for path in artifact_paths(unit, args.wide):
            if path.resolve() == base_path.resolve():
                continue
            data = load_json(path)
            if data is None:
                continue
            if not args.include_stale_target and target_fingerprint(data) != base_target_fingerprint:
                continue
            score = section_score(data)
            if score is None or base_unit is None:
                continue
            comparable_section = args.include_partial_section or section_size(data) == base_size

            improvements: List[str] = []
            for name, sym in symbols(data).items():
                if not args.include_data and not is_function(sym):
                    continue
                if args.symbol and name != args.symbol:
                    continue
                old = base_syms.get(name, {}).get("match_percent")
                new = sym.get("match_percent")
                if old is not None and new is not None and new > old + args.epsilon:
                    improvements.append(f"{name}:{old:.6g}->{new:.6g}")
                    best = best_by_symbol.get(name)
                    if best is None or new > best[1] + args.epsilon:
                        best_by_symbol[name] = (old, new, path.name)

            section_improved = comparable_section and score > base_unit + args.epsilon
            if improvements or (section_improved and args.include_section_only):
                rows.append((score, path.name, improvements[: args.symbol_limit]))

        rows.sort(reverse=True, key=lambda row: row[0])
        print(f"\n## {unit} current {base_unit:.6g} ({base_path.name})")
        for score, name, improvements in rows[: args.limit]:
            suffix = ""
            if improvements:
                suffix = "  " + "; ".join(improvements)
            print(f"{score:9.6g}  {name}{suffix}")

        if args.per_symbol and best_by_symbol:
            print("  per-symbol:")
            ranked = sorted(
                best_by_symbol.items(),
                key=lambda item: (item[1][1] - item[1][0], item[1][1]),
                reverse=True,
            )
            for name, (old, new, path) in ranked[: args.symbol_limit]:
                print(f"    {name}: {old:.6g}->{new:.6g}  {path}")
    return 0


def snapshot(args: argparse.Namespace) -> int:
    src = current_json(args.unit, not args.no_rebuild, True)
    dest = json_arg(args.unit, args.label)
    shutil.copyfile(src, dest)
    print(dest)
    return 0


def delta(args: argparse.Namespace) -> int:
    before_path = json_arg(args.unit, args.before)
    if args.after is None:
        after_path = current_json(args.unit, not args.no_rebuild, not args.cached)
    else:
        after_path = json_arg(args.unit, args.after)

    before = load_json(before_path)
    after = load_json(after_path)
    if before is None or after is None:
        raise SystemExit("could not load delta JSON")

    before_score = section_score(before)
    after_score = section_score(after)
    if before_score is not None and after_score is not None:
        print(f"## {args.unit} {before_score:.6g}->{after_score:.6g} ({after_score - before_score:+.6g})")

    before_syms = symbols(before)
    after_syms = symbols(after)
    rows = []
    for name, after_sym in after_syms.items():
        if not args.include_data and not is_function(after_sym):
            continue
        before_sym = before_syms.get(name)
        if before_sym is None:
            continue
        old = before_sym.get("match_percent")
        new = after_sym.get("match_percent")
        if old is None or new is None:
            continue
        change = new - old
        if abs(change) <= args.epsilon:
            continue
        rows.append((change, new, old, int(after_sym.get("size") or 0), name))

    rows.sort(key=lambda row: (abs(row[0]), row[3]), reverse=True)
    for change, new, old, size, name in rows[: args.limit]:
        print(f"{change:+10.6g}  {old:9.6g}->{new:<9.6g} size={size:<5} {name}")
    return 0


def best_artifact_symbols(
    unit: str,
    base_path: Path,
    base_syms: Dict[str, Dict[str, Any]],
    base_target_fingerprint: Optional[TargetFingerprint],
    wide: bool,
    include_data: bool,
    include_stale_target: bool,
    epsilon: float,
    base_unit_score: Optional[float] = None,
    min_unit_gain: Optional[float] = None,
) -> Dict[str, Tuple[float, float, str]]:
    best_by_symbol: Dict[str, Tuple[float, float, str]] = {}
    for path in artifact_paths(unit, wide):
        if path.resolve() == base_path.resolve():
            continue
        data = load_json(path)
        if data is None:
            continue
        if not include_stale_target and target_fingerprint(data) != base_target_fingerprint:
            continue
        if min_unit_gain is not None:
            artifact_unit_score = section_score(data)
            if (
                base_unit_score is None
                or artifact_unit_score is None
                or artifact_unit_score < base_unit_score + min_unit_gain
            ):
                continue
        for name, sym in symbols(data).items():
            if not include_data and not is_function(sym):
                continue
            old = base_syms.get(name, {}).get("match_percent")
            new = sym.get("match_percent")
            if old is None or new is None or new <= old + epsilon:
                continue
            best = best_by_symbol.get(name)
            if best is None or new > best[1] + epsilon:
                best_by_symbol[name] = (old, new, path.name)
    return best_by_symbol


def left_symbol(data: Dict[str, Any], symbol: str) -> Dict[str, Any]:
    sym = symbols(data).get(symbol)
    if sym is None:
        raise SystemExit(f"symbol not found: {symbol}")
    return sym


def right_symbol(data: Dict[str, Any], left: Dict[str, Any]) -> Dict[str, Any]:
    target = left.get("target_symbol")
    if target is None:
        raise SystemExit("left symbol has no target_symbol")
    return data.get("right", {}).get("symbols", [])[target]


def instr_text(ins: Dict[str, Any], ignore_relocs: bool) -> str:
    if not ignore_relocs:
        return ins.get("formatted", "")

    parts = ins.get("parts")
    if not parts:
        return ins.get("formatted", "")

    out = []
    first_arg = False
    mnemonic = ""
    for part in parts:
        opcode = part.get("opcode")
        if opcode:
            mnemonic = opcode.get("mnemonic", "")
            out.append(mnemonic)
            first_arg = True
            continue

        if part.get("separator"):
            out.append(", ")
            continue

        basic = part.get("basic")
        if basic is not None:
            out.append(str(basic))
            continue

        arg = part.get("arg")
        if arg:
            if first_arg:
                out.append(" ")
                first_arg = False
            if arg.get("reloc"):
                out.append("<branch>" if mnemonic.startswith("b") and mnemonic != "bl" else "<reloc>")
            elif "opaque" in arg:
                out.append(str(arg["opaque"]))
            elif "signed" in arg:
                out.append(str(arg["signed"]))
            elif "unsigned" in arg:
                out.append(str(arg["unsigned"]))
            elif "branch_dest" in arg:
                out.append("<branch>")
            else:
                out.append(str(arg))
    return "".join(out)


def instrs(sym: Dict[str, Any], include_diff: bool, ignore_relocs: bool) -> List[str]:
    out: List[str] = []
    for item in sym.get("instructions", []):
        ins = item.get("instruction")
        prefix = ""
        if include_diff and item.get("diff_kind"):
            prefix = f"{item.get('diff_kind')}:"
        if ins is None:
            out.append(f"{prefix}<{item.get('diff_kind', 'gap')}>")
        else:
            arg = ""
            if include_diff and item.get("arg_diff"):
                arg = f":{item.get('arg_diff')}"
            reloc = ""
            if include_diff and ins.get("relocation"):
                rel = ins["relocation"]
                reloc = f":reloc={rel.get('target_symbol')}+{rel.get('addend', '')}"
            out.append(f"{prefix}{instr_text(ins, ignore_relocs)}{arg}{reloc}")
    return out


def data_diff_rows(sym: Dict[str, Any]) -> List[str]:
    rows: List[str] = []
    for item in sym.get("data_diff", []):
        kind = item.get("kind") or "DATA"
        size = item.get("size", "?")
        raw = b""
        if item.get("data"):
            try:
                raw = base64.b64decode(item["data"])
            except Exception:
                raw = b""
        hex_text = raw.hex().upper()
        if len(hex_text) > 48:
            hex_text = hex_text[:48] + "..."
        ascii_text = "".join(chr(ch) if 32 <= ch < 127 else "." for ch in raw)
        if len(ascii_text) > 24:
            ascii_text = ascii_text[:24] + "..."
        rows.append(f"{kind}:size={size}:hex={hex_text}:ascii={ascii_text}")
    return rows


def data_item_bytes(item: Dict[str, Any]) -> bytes:
    if not item.get("data"):
        return b""
    try:
        return base64.b64decode(item["data"])
    except Exception:
        return b""


def data_item_size(item: Dict[str, Any]) -> int:
    try:
        return int(item.get("size") or len(data_item_bytes(item)))
    except Exception:
        return len(data_item_bytes(item))


def data_gap_stats(left: Dict[str, Any], right: Optional[Dict[str, Any]]) -> Tuple[int, int, int, int, Optional[int], str]:
    left_rows = left.get("data_diff", [])
    right_rows = [] if right is None else right.get("data_diff", [])
    if right is None:
        current_only = sum(data_item_size(item) for item in left_rows)
        first = 0 if left_rows else None
        return 0, current_only, 0, 0, first, "unmatched-current"

    equal_bytes = 0
    current_only = 0
    target_only = 0
    changed = 0
    first: Optional[int] = None
    first_kind = ""

    for index in range(max(len(left_rows), len(right_rows))):
        left_item = left_rows[index] if index < len(left_rows) else {}
        right_item = right_rows[index] if index < len(right_rows) else {}
        left_kind = left_item.get("kind") or "DATA"
        right_kind = right_item.get("kind") or "DATA"
        left_data = data_item_bytes(left_item)
        right_data = data_item_bytes(right_item)
        size = max(data_item_size(left_item), data_item_size(right_item))

        if left_kind == "DATA" and right_kind == "DATA" and left_data == right_data:
            equal_bytes += size
            continue

        if left_kind == "DIFF_DELETE" and not right_data:
            current_only += size
            kind = "current-only"
        elif right_kind == "DIFF_INSERT" and not left_data:
            target_only += size
            kind = "target-only"
        elif left_data or right_data:
            changed += size
            kind = "changed"
        else:
            changed += size
            kind = f"{left_kind.lower()}/{right_kind.lower()}"

        if first is None:
            first = index
            first_kind = kind

    return equal_bytes, current_only, target_only, changed, first, first_kind


def diff_count(sym: Dict[str, Any]) -> int:
    return sum(1 for item in sym.get("instructions", []) if item.get("diff_kind"))


def first_diff_index(sym: Dict[str, Any]) -> Optional[int]:
    for index, item in enumerate(sym.get("instructions", [])):
        if item.get("diff_kind"):
            return index
    return None


def first_formatted_diff(left: Dict[str, Any], right: Dict[str, Any], ignore_relocs: bool) -> Tuple[Optional[int], str, str]:
    left_i = instrs(left, False, ignore_relocs)
    right_i = instrs(right, False, ignore_relocs)
    for index, (left_text, right_text) in enumerate(zip(left_i, right_i)):
        if left_text != right_text:
            return index, left_text, right_text
    if len(left_i) != len(right_i):
        index = min(len(left_i), len(right_i))
        left_text = left_i[index] if index < len(left_i) else "<missing>"
        right_text = right_i[index] if index < len(right_i) else "<missing>"
        return index, left_text, right_text
    return None, "", ""


def formatted_distance(left: Dict[str, Any], right: Dict[str, Any], ignore_relocs: bool) -> Tuple[int, Optional[int], str, str]:
    left_i = instrs(left, False, ignore_relocs)
    right_i = instrs(right, False, ignore_relocs)
    diffs = 0
    first = None
    first_left = ""
    first_right = ""
    limit = max(len(left_i), len(right_i))
    for index in range(limit):
        left_text = left_i[index] if index < len(left_i) else "<missing>"
        right_text = right_i[index] if index < len(right_i) else "<missing>"
        if left_text == right_text:
            continue
        diffs += 1
        if first is None:
            first = index
            first_left = left_text
            first_right = right_text
    return diffs, first, first_left, first_right


def gaps(args: argparse.Namespace) -> int:
    units = args.units or list(UNITS)
    for unit in units:
        base_path = current_json(unit, not args.no_rebuild, not args.cached)
        data = load_json(base_path)
        if data is None:
            continue
        print(f"\n## {unit} current {section_score(data):.6g} ({base_path.name})")
        rows = []
        for name, sym in symbols(data).items():
            score = sym.get("match_percent")
            if score is None:
                continue
            if not args.include_data and not is_function(sym):
                continue
            if not args.include_matched and score >= 100.0 - args.epsilon:
                continue
            if args.min_score is not None and score < args.min_score:
                continue
            if args.max_score is not None and score > args.max_score:
                continue
            target_first: Optional[int] = None
            left_text = ""
            right_text = ""
            if args.target:
                try:
                    target_first, left_text, right_text = first_formatted_diff(
                        sym, right_symbol(data, sym), args.ignore_relocs
                    )
                except Exception:
                    pass
            if args.reloc_only and target_first is not None:
                continue
            if args.shape_only and target_first is None:
                continue
            rows.append(
                (
                    score,
                    int(sym.get("size") or 0),
                    diff_count(sym),
                    first_diff_index(sym),
                    target_first,
                    left_text,
                    right_text,
                    name,
                )
            )

        if args.closest:
            rows.sort(key=lambda row: (100.0 - row[0], -row[1]))
        elif args.target_sort:
            rows.sort(key=lambda row: (row[4] is None, row[4] or 0, -row[1]))
        else:
            rows.sort(key=lambda row: (row[0], -row[1]))

        for score, size, diffs, first, target_first, left_text, right_text, name in rows[: args.limit]:
            first_text = "-" if first is None else str(first)
            if args.target:
                target_text = "-" if target_first is None else str(target_first)
                print(
                    f"{score:9.6g}  size={size:<5} diffs={diffs:<4} "
                    f"first={first_text:<4} tfirst={target_text:<4} {name}"
                )
                if args.show_diff and target_first is not None:
                    print(f"           {left_text}  |  {right_text}")
            else:
                print(f"{score:9.6g}  size={size:<5} diffs={diffs:<4} first={first_text:<4} {name}")
    return 0


def diff_tag(target_first: Optional[int], left_text: str, right_text: str) -> str:
    if target_first is None:
        return "reloc"
    if left_text.startswith("<") or right_text.startswith("<"):
        return "insert/delete"
    left_op = left_text.split(" ", 1)[0]
    right_op = right_text.split(" ", 1)[0]
    if left_op != right_op:
        return "opcode"
    if is_branch_opcode(left_op):
        return "branch-target"
    if target_first == 0:
        return "prologue"
    return "operand"


def is_branch_opcode(opcode: str) -> bool:
    return opcode == "b" or opcode.startswith("b") and not opcode.startswith("bl")


def tag_set(value: Optional[str]) -> set[str]:
    if not value:
        return set()
    return {item.strip().lower() for item in value.split(",") if item.strip()}


def abstract_text(text: str, abstract_regs: bool) -> str:
    if not abstract_regs:
        return text
    return re.sub(r"\b[rf]\d+\b", lambda match: match.group(0)[0] + "N", text)


def triage(args: argparse.Namespace) -> int:
    units = args.units or list(UNITS)
    only_tags = tag_set(args.only_tags)
    skip_tags = tag_set(args.skip_tags)
    for unit in units:
        base_path = current_json(unit, not args.no_rebuild, not args.cached)
        data = load_json(base_path)
        if data is None:
            continue
        base_syms = symbols(data)
        best_artifacts = best_artifact_symbols(
            unit,
            base_path,
            base_syms,
            target_fingerprint(data),
            args.wide,
            args.include_data,
            args.include_stale_target,
            args.epsilon,
        )
        rows = []

        for name, sym in base_syms.items():
            score = sym.get("match_percent")
            if score is None:
                continue
            if not args.include_data and not is_function(sym):
                continue
            if not args.include_matched and score >= 100.0 - args.epsilon:
                continue
            if args.min_score is not None and score < args.min_score:
                continue
            if args.max_score is not None and score > args.max_score:
                continue

            try:
                target_first, left_text, right_text = first_formatted_diff(
                    sym, right_symbol(data, sym), args.ignore_relocs
                )
            except Exception:
                target_first, left_text, right_text = None, "", ""
            if args.shape_only and target_first is None:
                continue
            if args.reloc_only and target_first is not None:
                continue

            old, new, artifact = best_artifacts.get(name, (score, score, ""))
            artifact_gain = new - old
            if args.artifacts_only and artifact_gain <= args.epsilon:
                continue
            tag = diff_tag(target_first, left_text, right_text)
            if only_tags and tag not in only_tags:
                continue
            if skip_tags and tag in skip_tags:
                continue

            rows.append(
                (
                    artifact_gain,
                    score,
                    int(sym.get("size") or 0),
                    diff_count(sym),
                    first_diff_index(sym),
                    target_first,
                    tag,
                    left_text,
                    right_text,
                    new,
                    artifact,
                    name,
                )
            )

        rows.sort(key=lambda row: (row[0] <= args.epsilon, -row[0], 100.0 - row[1], -row[2]))
        print(f"\n## {unit} current {section_score(data):.6g} ({base_path.name})")
        for (
            artifact_gain,
            score,
            size,
            diffs,
            first,
            target_first,
            tag,
            left_text,
            right_text,
            artifact_score,
            artifact,
            name,
        ) in rows[: args.limit]:
            first_text = "-" if first is None else str(first)
            target_text = "-" if target_first is None else str(target_first)
            artifact_text = ""
            if artifact_gain > args.epsilon:
                artifact_text = f" artifact={artifact_score:.6g} +{artifact_gain:.6g} {artifact}"
            print(
                f"{score:9.6g}  size={size:<5} diffs={diffs:<4} first={first_text:<4} "
                f"tfirst={target_text:<4} {tag:<13} {name}{artifact_text}"
            )
            if args.show_diff and target_first is not None:
                print(f"           {left_text}  |  {right_text}")
    return 0


def next_candidates(args: argparse.Namespace) -> int:
    units = args.units or list(UNITS)
    only_tags = tag_set(args.only_tags)
    skip_tags = tag_set(args.skip_tags)
    rows = []

    for unit in units:
        base_path = current_json(unit, not args.no_rebuild, not args.cached)
        data = load_json(base_path)
        if data is None:
            continue
        base_unit_score = section_score(data)
        base_syms = symbols(data)
        best_artifacts = best_artifact_symbols(
            unit,
            base_path,
            base_syms,
            target_fingerprint(data),
            args.wide,
            args.include_data,
            args.include_stale_target,
            args.epsilon,
            base_unit_score,
            args.min_artifact_unit_gain,
        )

        for name, sym in base_syms.items():
            score = sym.get("match_percent")
            if score is None:
                continue
            if not args.include_data and not is_function(sym):
                continue
            if not args.include_matched and score >= 100.0 - args.epsilon:
                continue
            if args.min_score is not None and score < args.min_score:
                continue
            if args.max_score is not None and score > args.max_score:
                continue

            try:
                target_first, left_text, right_text = first_formatted_diff(
                    sym, right_symbol(data, sym), args.ignore_relocs
                )
            except Exception:
                target_first, left_text, right_text = None, "", ""
            tag = diff_tag(target_first, left_text, right_text)
            if only_tags and tag not in only_tags:
                continue
            if skip_tags and tag in skip_tags:
                continue

            old, new, artifact = best_artifacts.get(name, (score, score, ""))
            artifact_gain = new - old
            source = source_anchor(unit, name)
            ghidra = ghidra_anchor(name)
            rows.append(
                (
                    artifact_gain,
                    score,
                    diff_count(sym),
                    target_first if target_first is not None else 1000000,
                    int(sym.get("size") or 0),
                    unit,
                    name,
                    tag,
                    left_text,
                    right_text,
                    new,
                    artifact,
                    source,
                    ghidra,
                )
            )

    rows.sort(key=lambda row: (row[0] <= args.epsilon, -row[0], row[2], 100.0 - row[1], row[3], -row[4]))
    for (
        artifact_gain,
        score,
        diffs,
        target_first,
        size,
        unit,
        name,
        tag,
        left_text,
        right_text,
        artifact_score,
        artifact,
        source,
        ghidra,
    ) in rows[: args.limit]:
        target_text = "-" if target_first == 1000000 else str(target_first)
        artifact_text = ""
        if artifact_gain > args.epsilon:
            artifact_text = f" artifact={artifact_score:.6g} +{artifact_gain:.6g} {artifact}"
        print(
            f"{unit:<8} {score:9.6g} size={size:<5} diffs={diffs:<4} "
            f"tfirst={target_text:<4} {tag:<13} {name}{artifact_text}"
        )
        if args.show_diff and target_first != 1000000:
            print(f"           {left_text}  |  {right_text}")
        if source:
            print(f"           src:    {source}")
        if ghidra:
            print(f"           ghidra: {ghidra}")
        if args.show_refs:
            for hit in reference_hits(name, args.ref_limit):
                print(f"           ref:    {hit}")
    return 0


def refs(args: argparse.Namespace) -> int:
    for symbol in args.symbols:
        hits = reference_hits(symbol, args.limit)
        print(symbol)
        if not hits:
            print("  no reference hits")
            continue
        for hit in hits:
            print(f"  {hit}")
    return 0


def patterns(args: argparse.Namespace) -> int:
    units = args.units or list(UNITS)
    only_tags = tag_set(args.only_tags)
    skip_tags = tag_set(args.skip_tags)
    groups: Dict[Tuple[str, str, str], List[Tuple[str, str, float, int, Optional[int]]]] = {}

    for unit in units:
        base_path = current_json(unit, not args.no_rebuild, not args.cached)
        data = load_json(base_path)
        if data is None:
            continue

        for name, sym in symbols(data).items():
            score = sym.get("match_percent")
            if score is None:
                continue
            if not args.include_data and not is_function(sym):
                continue
            if not args.include_matched and score >= 100.0 - args.epsilon:
                continue
            if args.min_score is not None and score < args.min_score:
                continue
            if args.max_score is not None and score > args.max_score:
                continue

            try:
                target_first, left_text, right_text = first_formatted_diff(
                    sym, right_symbol(data, sym), args.ignore_relocs
                )
            except Exception:
                target_first, left_text, right_text = None, "", ""
            if args.shape_only and target_first is None:
                continue
            if args.reloc_only and target_first is not None:
                continue

            tag = diff_tag(target_first, left_text, right_text)
            if only_tags and tag not in only_tags:
                continue
            if skip_tags and tag in skip_tags:
                continue

            key = (tag, abstract_text(left_text, args.abstract_regs), abstract_text(right_text, args.abstract_regs))
            groups.setdefault(key, []).append(
                (unit, name, score, int(sym.get("size") or 0), target_first)
            )

    rows = []
    for key, entries in groups.items():
        if len(entries) < args.min_count:
            continue
        avg_score = sum(entry[2] for entry in entries) / len(entries)
        total_size = sum(entry[3] for entry in entries)
        firsts = [entry[4] for entry in entries if entry[4] is not None]
        first = min(firsts) if firsts else None
        rows.append((len(entries), total_size, avg_score, first, key, entries))

    rows.sort(key=lambda row: (-row[0], -row[1], row[2]))
    for count, total_size, avg_score, first, key, entries in rows[: args.limit]:
        tag, left_text, right_text = key
        first_text = "-" if first is None else str(first)
        print(
            f"{count:3} funcs size={total_size:<5} avg={avg_score:9.6g} "
            f"first={first_text:<4} {tag:<13} {left_text}  |  {right_text}"
        )
        for unit, name, score, size, _ in entries[: args.examples]:
            print(f"           {unit:<8} {score:9.6g} size={size:<5} {name}")
    return 0


def shape(args: argparse.Namespace) -> int:
    units = args.units or list(UNITS)
    for unit in units:
        base_path = current_json(unit, not args.no_rebuild, not args.cached)
        base = load_json(base_path)
        if base is None:
            continue
        base_syms = symbols(base)
        base_target_syms = target_symbols(base)
        base_target_fingerprint = target_fingerprint(base)
        rows = []
        for path in artifact_paths(unit, args.wide):
            if path.resolve() == base_path.resolve():
                continue
            artifact = load_json(path)
            if artifact is None:
                continue
            if not args.include_stale_target and target_fingerprint(artifact) != base_target_fingerprint:
                continue
            for name, artifact_sym in symbols(artifact).items():
                if args.symbol and name != args.symbol:
                    continue
                if not args.include_data and not is_function(artifact_sym):
                    continue
                base_sym = base_syms.get(name)
                if base_sym is None:
                    continue
                old_score = base_sym.get("match_percent")
                new_score = artifact_sym.get("match_percent")
                if old_score is None or new_score is None:
                    continue
                score_gain = new_score - old_score
                if score_gain < args.min_score_gain:
                    continue
                base_target = base_target_syms.get(name)
                if base_target is None:
                    try:
                        base_target = right_symbol(base, base_sym)
                    except Exception:
                        continue
                artifact_target = base_target_syms.get(name)
                if artifact_target is None:
                    continue
                base_dist, base_first, _, _ = formatted_distance(base_sym, base_target, args.ignore_relocs)
                artifact_dist, artifact_first, left_text, right_text = formatted_distance(
                    artifact_sym, artifact_target, args.ignore_relocs
                )
                shape_gain = base_dist - artifact_dist
                if shape_gain < args.min_shape_gain:
                    continue
                rows.append(
                    (
                        shape_gain,
                        score_gain,
                        old_score,
                        new_score,
                        base_dist,
                        artifact_dist,
                        base_first,
                        artifact_first,
                        int(artifact_sym.get("size") or 0),
                        path.name,
                        name,
                        left_text,
                        right_text,
                    )
                )

        rows.sort(key=lambda row: (-row[0], -row[1], row[5], -row[8]))
        if not args.all_artifacts:
            unique_rows = []
            seen_symbols = set()
            for row in rows:
                name = row[10]
                if name in seen_symbols:
                    continue
                seen_symbols.add(name)
                unique_rows.append(row)
            rows = unique_rows
        print(f"\n## {unit} current {section_score(base):.6g} ({base_path.name})")
        for (
            shape_gain,
            score_gain,
            old_score,
            new_score,
            base_dist,
            artifact_dist,
            base_first,
            artifact_first,
            size,
            artifact_name,
            name,
            left_text,
            right_text,
        ) in rows[: args.limit]:
            base_first_text = "-" if base_first is None else str(base_first)
            artifact_first_text = "-" if artifact_first is None else str(artifact_first)
            print(
                f"{shape_gain:+5} shape {base_dist}->{artifact_dist} "
                f"score {old_score:.6g}->{new_score:.6g} ({score_gain:+.6g}) "
                f"first {base_first_text}->{artifact_first_text} size={size:<5} {name}  {artifact_name}"
            )
            if args.show_diff and artifact_first is not None:
                print(f"           {left_text}  |  {right_text}")
    return 0


def datagaps(args: argparse.Namespace) -> int:
    units = args.units or list(UNITS)
    for unit in units:
        cur_path = current_json(unit, not args.no_rebuild, not args.cached)
        cur = load_json(cur_path)
        if cur is None:
            continue

        rows = []
        for name, sym in symbols(cur).items():
            if not sym.get("data_diff"):
                continue
            if is_function(sym):
                continue
            if sym.get("kind") == "SYMBOL_SECTION" and not args.sections:
                continue
            if name.startswith("[.") and not args.sections:
                continue
            if args.symbol and name != args.symbol:
                continue
            score = sym.get("match_percent")
            if not args.include_matched and score is not None and score >= 100.0 - args.epsilon:
                continue
            if args.min_score is not None and (score is None or score < args.min_score):
                continue
            if args.max_score is not None and (score is None or score > args.max_score):
                continue

            target_index = sym.get("target_symbol")
            if target_index is None:
                right = None
            else:
                try:
                    right = cur.get("right", {}).get("symbols", [])[target_index]
                except Exception:
                    right = None
            equal_bytes, current_only, target_only, changed, first, first_kind = data_gap_stats(sym, right)
            if current_only == 0 and target_only == 0 and changed == 0 and not args.include_matched:
                continue
            rows.append(
                (
                    target_only,
                    current_only,
                    changed,
                    score is None,
                    100.0 if score is None else score,
                    int(sym.get("size") or 0),
                    equal_bytes,
                    first,
                    first_kind,
                    name,
                )
            )

        rows.sort(key=lambda row: (-row[0], -row[1], -row[2], row[3], row[4], -row[5]))
        print(f"\n## {unit} current {section_score(cur):.6g} ({cur_path.name})")
        for target_only, current_only, changed, score_missing, score, size, equal_bytes, first, first_kind, name in rows[: args.limit]:
            score_text = "-" if score_missing else f"{score:.6g}"
            first_text = "-" if first is None else f"{first}:{first_kind}"
            print(
                f"{score_text:>9} size={size:<6} equal={equal_bytes:<6} "
                f"target+={target_only:<5} current+={current_only:<5} changed={changed:<5} "
                f"first={first_text:<18} {name}"
            )
    return 0


def compare(args: argparse.Namespace) -> int:
    cur_path = current_json(args.unit, not args.no_rebuild, not args.cached)
    cur = load_json(cur_path)
    other = None if args.target and not args.artifact_target else load_json(Path(args.artifact))
    if cur is None or (other is None and not args.target):
        raise SystemExit("could not load JSON")

    cur_left = left_symbol(cur, args.symbol)
    if args.artifact_target:
        assert other is not None
        other_left = left_symbol(other, args.symbol)
        current_name = args.artifact
        other_sym = right_symbol(other, other_left)
        artifact_name = "target"
        cur_i = instrs(other_left, args.diff_metadata, args.ignore_relocs)
    elif args.target:
        other_sym = right_symbol(cur, cur_left)
        current_name = str(cur_path)
        artifact_name = "target"
        cur_i = instrs(cur_left, args.diff_metadata, args.ignore_relocs)
    else:
        assert other is not None
        other_sym = left_symbol(other, args.symbol)
        current_name = str(cur_path)
        artifact_name = args.artifact
        cur_i = instrs(cur_left, args.diff_metadata, args.ignore_relocs)

    other_i = instrs(other_sym, args.diff_metadata, args.ignore_relocs)
    first = None
    for i, (left, right) in enumerate(zip(cur_i, other_i)):
        if left != right:
            first = i
            break
    if first is None and len(cur_i) != len(other_i):
        first = min(len(cur_i), len(other_i))
    if first is None:
        print("no formatted instruction differences")
        if args.data_diff:
            print_data_diff(args.symbol, cur_left, other_sym, args.data_limit)
        return 0

    start = max(0, first - args.context)
    end = min(max(len(cur_i), len(other_i)), first + args.context + 1)
    print(f"{args.symbol}: first formatted diff at instruction {first}")
    print(f"current:  {current_name}")
    print(f"artifact: {artifact_name}")
    for i in range(start, end):
        left = cur_i[i] if i < len(cur_i) else "<missing>"
        right = other_i[i] if i < len(other_i) else "<missing>"
        mark = "==" if left == right else "!="
        print(f"{i:04d} {mark} {left:<42} | {right}")
    if args.data_diff:
        print_data_diff(args.symbol, cur_left, other_sym, args.data_limit)
    return 0


def print_data_diff(symbol: str, left: Dict[str, Any], right: Dict[str, Any], limit: int) -> None:
    left_rows = data_diff_rows(left)
    right_rows = data_diff_rows(right)
    if not left_rows and not right_rows:
        print(f"{symbol}: no data_diff chunks")
        return

    count = min(max(len(left_rows), len(right_rows)), limit)
    print(f"{symbol}: data_diff chunks (showing {count}/{max(len(left_rows), len(right_rows))})")
    for i in range(count):
        left_text = left_rows[i] if i < len(left_rows) else "<missing>"
        right_text = right_rows[i] if i < len(right_rows) else "<missing>"
        mark = "==" if left_text == right_text else "!="
        print(f"data {i:02d} {mark} {left_text:<80} | {right_text}")


def score(args: argparse.Namespace) -> int:
    units = args.units or list(UNITS)
    names = set(args.symbols)
    for unit in units:
        cur_path = current_json(unit, not args.no_rebuild, not args.cached)
        cur = load_json(cur_path)
        if cur is None:
            continue

        unit_score = section_score(cur)
        unit_size = section_size(cur)
        if unit_score is None:
            print(f"{unit:<10} score=<none> ({cur_path.name})")
        elif unit_size is None:
            print(f"{unit:<10} score={unit_score:.6g} ({cur_path.name})")
        else:
            print(f"{unit:<10} score={unit_score:.6g} size={unit_size} ({cur_path.name})")

        if names:
            for name, sym in symbols(cur).items():
                if name in names or (args.demangle_base and "__" in name and name.split("__", 1)[0] in names):
                    sym_score = sym.get("match_percent")
                    sym_size = sym.get("size")
                    if sym_score is None:
                        print(f"  {name:<40} score=<none> size={sym_size}")
                    else:
                        print(f"  {name:<40} score={sym_score:.6g} size={sym_size}")
    return 0


def dump(args: argparse.Namespace) -> int:
    cur_path = current_json(args.unit, not args.no_rebuild, not args.cached)
    cur = load_json(cur_path)
    if cur is None:
        print(f"could not read current JSON: {cur_path}", file=sys.stderr)
        return 1

    sides = ("left", "right") if args.side == "both" else (args.side,)
    missing = False
    for requested_name in args.symbols:
        for side in sides:
            sym = side_symbols(cur, side).get(requested_name)
            if sym is None and args.demangle_base:
                for name, candidate in side_symbols(cur, side).items():
                    if "__" in name and name.split("__", 1)[0] == requested_name:
                        sym = candidate
                        break

            if sym is None:
                print(f"{args.unit} {side}: missing symbol {requested_name}", file=sys.stderr)
                missing = True
                continue

            sym_name = sym.get("name", requested_name)
            sym_score = sym.get("match_percent")
            sym_size = sym.get("size")
            score_text = "<none>" if sym_score is None else f"{sym_score:.6g}"
            print(f"## {args.unit} {side} {sym_name} score={score_text} size={sym_size}")

            instructions = sym.get("instructions", [])
            start = max(args.start, 0)
            end = len(instructions) if args.count is None else min(len(instructions), start + args.count)
            for index in range(start, end):
                formatted = instructions[index].get("instruction", {}).get("formatted")
                if formatted is None and not args.show_gaps:
                    continue
                print(f"{index:04d}: {formatted}")
            print()

    return 1 if missing else 0


def main(argv: Optional[List[str]] = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    sub = parser.add_subparsers(dest="cmd", required=True)

    p_mine = sub.add_parser("mine", help="find old artifacts that improve current scores")
    p_mine.add_argument("units", nargs="*")
    p_mine.add_argument("--symbol")
    p_mine.add_argument("--limit", type=int, default=12)
    p_mine.add_argument("--symbol-limit", type=int, default=8)
    p_mine.add_argument("--epsilon", type=float, default=0.00001)
    p_mine.add_argument("--no-rebuild", action="store_true")
    p_mine.add_argument("--cached", action="store_true", help="reuse the last current JSON")
    p_mine.add_argument("--wide", action="store_true", help="search *unit* JSON names instead of strict prefixes")
    p_mine.add_argument("--per-symbol", action="store_true")
    p_mine.add_argument("--include-data", action="store_true", help="include non-function symbols")
    p_mine.add_argument(
        "--include-partial-section",
        action="store_true",
        help="allow section-score rows from artifacts that only cover part of the unit",
    )
    p_mine.add_argument("--include-stale-target", action="store_true", help="include artifacts with old target JSON")
    p_mine.add_argument("--include-section-only", action="store_true", help="show unit-score rows with no symbol wins")
    p_mine.set_defaults(func=mine)

    p_snapshot = sub.add_parser("snapshot", help="save a current unit JSON for probe deltas")
    p_snapshot.add_argument("unit", choices=sorted(UNITS))
    p_snapshot.add_argument("label", help="label or JSON path")
    p_snapshot.add_argument("--no-rebuild", action="store_true")
    p_snapshot.set_defaults(func=snapshot)

    p_delta = sub.add_parser("delta", help="compare a probe JSON against a saved baseline")
    p_delta.add_argument("unit", choices=sorted(UNITS))
    p_delta.add_argument("before", help="label or JSON path")
    p_delta.add_argument("after", nargs="?", help="label or JSON path; defaults to current fresh")
    p_delta.add_argument("--limit", type=int, default=20)
    p_delta.add_argument("--epsilon", type=float, default=0.00001)
    p_delta.add_argument("--include-data", action="store_true", help="include non-function symbols")
    p_delta.add_argument("--no-rebuild", action="store_true")
    p_delta.add_argument("--cached", action="store_true", help="reuse the last current JSON")
    p_delta.set_defaults(func=delta)

    p_gaps = sub.add_parser("gaps", help="show current low/close matching symbols")
    p_gaps.add_argument("units", nargs="*")
    p_gaps.add_argument("--limit", type=int, default=20)
    p_gaps.add_argument("--min-score", type=float)
    p_gaps.add_argument("--max-score", type=float)
    p_gaps.add_argument("--closest", action="store_true", help="rank closest-to-100 first")
    p_gaps.add_argument("--target-sort", action="store_true", help="rank by first target-shape diff")
    p_gaps.add_argument("--target", action="store_true", help="show first formatted diff against target")
    p_gaps.add_argument("--show-diff", action="store_true", help="print the first target diff text")
    p_gaps.add_argument("--ignore-relocs", action="store_true", help="normalize relocation operands")
    p_gaps.add_argument("--reloc-only", action="store_true", help="only show symbols with no normalized target diff")
    p_gaps.add_argument("--shape-only", action="store_true", help="only show symbols with a normalized target diff")
    p_gaps.add_argument("--include-matched", action="store_true", help="include 100%% symbols")
    p_gaps.add_argument("--include-data", action="store_true", help="include non-function symbols")
    p_gaps.add_argument("--epsilon", type=float, default=0.00001)
    p_gaps.add_argument("--no-rebuild", action="store_true")
    p_gaps.add_argument("--cached", action="store_true", help="reuse the last current JSON")
    p_gaps.set_defaults(func=gaps)

    p_triage = sub.add_parser("triage", help="rank Bink symbols by artifact wins and target shape")
    p_triage.add_argument("units", nargs="*")
    p_triage.add_argument("--limit", type=int, default=12)
    p_triage.add_argument("--min-score", type=float)
    p_triage.add_argument("--max-score", type=float)
    p_triage.add_argument("--epsilon", type=float, default=0.00001)
    p_triage.add_argument("--wide", action="store_true", help="search *unit* JSON names instead of strict prefixes")
    p_triage.add_argument("--ignore-relocs", action="store_true", help="normalize relocation operands")
    p_triage.add_argument("--show-diff", action="store_true", help="print the first target diff text")
    p_triage.add_argument("--include-matched", action="store_true", help="include 100%% symbols")
    p_triage.add_argument("--include-data", action="store_true", help="include non-function symbols")
    p_triage.add_argument("--reloc-only", action="store_true", help="only show symbols with no normalized target diff")
    p_triage.add_argument("--shape-only", action="store_true", help="only show symbols with a normalized target diff")
    p_triage.add_argument("--artifacts-only", action="store_true", help="only show symbols improved by artifacts")
    p_triage.add_argument("--include-stale-target", action="store_true", help="include artifacts with old target JSON")
    p_triage.add_argument("--only-tags", help="comma-separated diff tags to include")
    p_triage.add_argument("--skip-tags", help="comma-separated diff tags to exclude")
    p_triage.add_argument("--no-rebuild", action="store_true")
    p_triage.add_argument("--cached", action="store_true", help="reuse the last current JSON")
    p_triage.set_defaults(func=triage)

    p_next = sub.add_parser("next", help="rank actionable symbols with source/decomp anchors")
    p_next.add_argument("units", nargs="*")
    p_next.add_argument("--limit", type=int, default=16)
    p_next.add_argument("--min-score", type=float, default=80.0)
    p_next.add_argument("--max-score", type=float)
    p_next.add_argument("--epsilon", type=float, default=0.00001)
    p_next.add_argument("--wide", action="store_true", help="search *unit* JSON names instead of strict prefixes")
    p_next.add_argument("--ignore-relocs", action="store_true", help="normalize relocation operands")
    p_next.add_argument("--show-diff", action="store_true", help="print the first target diff text")
    p_next.add_argument("--show-refs", action="store_true", help="print reference-project hits for each symbol")
    p_next.add_argument("--ref-limit", type=int, default=3, help="maximum reference hits to print per symbol")
    p_next.add_argument("--include-matched", action="store_true", help="include 100%% symbols")
    p_next.add_argument("--include-data", action="store_true", help="include non-function symbols")
    p_next.add_argument("--include-stale-target", action="store_true", help="include artifacts with old target JSON")
    p_next.add_argument(
        "--min-artifact-unit-gain",
        type=float,
        default=0.0,
        help="minimum unit-score gain required before using an artifact as a per-symbol hint",
    )
    p_next.add_argument("--only-tags", help="comma-separated diff tags to include")
    p_next.add_argument(
        "--skip-tags",
        default="operand,reloc,branch-target",
        help="comma-separated diff tags to skip; defaults to operand,reloc,branch-target",
    )
    p_next.add_argument("--no-rebuild", action="store_true")
    p_next.add_argument("--cached", action="store_true", help="reuse the last current JSON")
    p_next.set_defaults(func=next_candidates)

    p_refs = sub.add_parser("refs", help="search bink reference projects for symbols")
    p_refs.add_argument("symbols", nargs="+")
    p_refs.add_argument("--limit", type=int, default=8)
    p_refs.set_defaults(func=refs)

    p_patterns = sub.add_parser("patterns", help="group repeated current target-diff shapes")
    p_patterns.add_argument("units", nargs="*")
    p_patterns.add_argument("--limit", type=int, default=20)
    p_patterns.add_argument("--examples", type=int, default=4)
    p_patterns.add_argument("--min-count", type=int, default=2)
    p_patterns.add_argument("--min-score", type=float)
    p_patterns.add_argument("--max-score", type=float)
    p_patterns.add_argument("--epsilon", type=float, default=0.00001)
    p_patterns.add_argument("--ignore-relocs", action="store_true", help="normalize relocation operands")
    p_patterns.add_argument("--abstract-regs", action="store_true", help="group patterns with different register numbers")
    p_patterns.add_argument("--include-matched", action="store_true", help="include 100%% symbols")
    p_patterns.add_argument("--include-data", action="store_true", help="include non-function symbols")
    p_patterns.add_argument("--reloc-only", action="store_true", help="only show symbols with no normalized target diff")
    p_patterns.add_argument("--shape-only", action="store_true", help="only show symbols with a normalized target diff")
    p_patterns.add_argument("--only-tags", help="comma-separated diff tags to include")
    p_patterns.add_argument("--skip-tags", help="comma-separated diff tags to exclude")
    p_patterns.add_argument("--no-rebuild", action="store_true")
    p_patterns.add_argument("--cached", action="store_true", help="reuse the last current JSON")
    p_patterns.set_defaults(func=patterns)

    p_shape = sub.add_parser("shape", help="rank artifacts by normalized target-shape improvement")
    p_shape.add_argument("units", nargs="*")
    p_shape.add_argument("--symbol")
    p_shape.add_argument("--limit", type=int, default=12)
    p_shape.add_argument("--min-score-gain", type=float, default=0.00001)
    p_shape.add_argument("--min-shape-gain", type=int, default=1)
    p_shape.add_argument("--ignore-relocs", action="store_true", help="normalize relocation operands")
    p_shape.add_argument("--show-diff", action="store_true", help="print artifact's first target diff")
    p_shape.add_argument("--wide", action="store_true", help="search *unit* JSON names instead of strict prefixes")
    p_shape.add_argument("--all-artifacts", action="store_true", help="show repeated artifact snapshots per symbol")
    p_shape.add_argument("--include-stale-target", action="store_true", help="include artifacts with old target JSON")
    p_shape.add_argument("--include-data", action="store_true", help="include non-function symbols")
    p_shape.add_argument("--no-rebuild", action="store_true")
    p_shape.add_argument("--cached", action="store_true", help="reuse the last current JSON")
    p_shape.set_defaults(func=shape)

    p_datagaps = sub.add_parser("datagaps", help="rank current Bink data/object byte gaps")
    p_datagaps.add_argument("units", nargs="*")
    p_datagaps.add_argument("--symbol")
    p_datagaps.add_argument("--limit", type=int, default=20)
    p_datagaps.add_argument("--min-score", type=float)
    p_datagaps.add_argument("--max-score", type=float)
    p_datagaps.add_argument("--epsilon", type=float, default=0.00001)
    p_datagaps.add_argument("--sections", action="store_true", help="include aggregate section symbols")
    p_datagaps.add_argument("--include-matched", action="store_true", help="include 100%% data symbols")
    p_datagaps.add_argument("--no-rebuild", action="store_true")
    p_datagaps.add_argument("--cached", action="store_true", help="reuse the last current JSON")
    p_datagaps.set_defaults(func=datagaps)

    p_compare = sub.add_parser("compare", help="compare current symbol shape with an artifact")
    p_compare.add_argument("unit", choices=sorted(UNITS))
    p_compare.add_argument("artifact", help="artifact JSON, or '-' with --target")
    p_compare.add_argument("symbol")
    p_compare.add_argument("--context", type=int, default=25)
    p_compare.add_argument("--target", action="store_true")
    p_compare.add_argument("--artifact-target", action="store_true")
    p_compare.add_argument("--diff-metadata", action="store_true")
    p_compare.add_argument("--data-diff", action="store_true", help="also print data_diff chunks for object/section symbols")
    p_compare.add_argument("--data-limit", type=int, default=16, help="maximum data_diff chunks to print")
    p_compare.add_argument("--ignore-relocs", action="store_true", help="normalize relocation operands")
    p_compare.add_argument("--no-rebuild", action="store_true")
    p_compare.add_argument("--cached", action="store_true", help="reuse the last current JSON")
    p_compare.set_defaults(func=compare)

    p_score = sub.add_parser("score", help="print current unit and selected symbol scores")
    p_score.add_argument("units", nargs="*", choices=sorted(UNITS))
    p_score.add_argument("--symbol", dest="symbols", action="append", default=[])
    p_score.add_argument(
        "--demangle-base",
        action="store_true",
        help="also match C++ names before the first double underscore",
    )
    p_score.add_argument("--no-rebuild", action="store_true")
    p_score.add_argument("--cached", action="store_true", help="reuse the last current JSON")
    p_score.set_defaults(func=score)

    p_dump = sub.add_parser("dump", help="dump target/current instructions for current symbols")
    p_dump.add_argument("unit", choices=sorted(UNITS))
    p_dump.add_argument("symbols", nargs="+")
    p_dump.add_argument("--side", choices=("left", "right", "both"), default="both")
    p_dump.add_argument("--start", type=int, default=0)
    p_dump.add_argument("--count", type=int)
    p_dump.add_argument("--show-gaps", action="store_true", help="show alignment gaps as None rows")
    p_dump.add_argument(
        "--demangle-base",
        action="store_true",
        help="also match C++ names before the first double underscore",
    )
    p_dump.add_argument("--no-rebuild", action="store_true")
    p_dump.add_argument("--cached", action="store_true", help="reuse the last current JSON")
    p_dump.set_defaults(func=dump)

    args = parser.parse_args(argv)
    return args.func(args)


if __name__ == "__main__":
    sys.exit(main())
