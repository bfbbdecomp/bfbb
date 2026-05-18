#!/usr/bin/env python3
"""Search for similar PowerPC assembly shapes.

The query normally comes from an objdiff JSON symbol. Candidates can come from
objdiff JSON files or from PowerPC objdump text. The matcher deliberately
normalizes registers, immediates, branch targets, and relocations so it can find
compiler idioms instead of exact byte matches.
"""

from __future__ import annotations

import argparse
import difflib
import json
import re
import subprocess
import sys
from dataclasses import dataclass
from pathlib import Path
from typing import Iterable, Iterator


ROOT = Path(__file__).resolve().parents[1]
BUILD = ROOT / "build" / "GQPE78"
OBJDUMP = ROOT / "build" / "binutils" / "powerpc-eabi-objdump.exe"
OBJDIFF = ROOT / "build" / "tools" / "objdiff-cli.exe"

UNITS = {
    "binkread": "main/bink/src/sdk/decode/binkread",
    "binkacd": "main/bink/src/sdk/decode/binkacd",
    "expand": "main/bink/src/sdk/decode/expand",
    "yuv": "main/bink/src/sdk/decode/yuv",
    "binkngc": "main/bink/src/sdk/decode/ngc/binkngc",
    "ngcsnd": "main/bink/src/sdk/decode/ngc/ngcsnd",
    "ngcfile": "main/bink/src/sdk/decode/ngc/ngcfile",
    "ngcrgb": "main/bink/src/sdk/decode/ngc/ngcrgb",
    "ngcyuy2": "main/bink/src/sdk/decode/ngc/ngcyuy2",
    "varbits": "main/bink/src/sdk/varbits",
    "fft": "main/bink/src/sdk/fft",
    "dct": "main/bink/src/sdk/dct",
    "bitplane": "main/bink/src/sdk/bitplane",
}


@dataclass(frozen=True)
class FunctionAsm:
    origin: str
    side: str
    name: str
    instructions: tuple[str, ...]


@dataclass(frozen=True)
class Hit:
    score: float
    origin: str
    side: str
    name: str
    start: int
    end: int
    window: tuple[str, ...]


def load_json(path: Path) -> dict | None:
    try:
        with path.open("r", encoding="utf-8") as f:
            return json.load(f)
    except Exception:
        return None


def formatted_instructions(sym: dict) -> tuple[str, ...]:
    rows: list[str] = []
    for item in sym.get("instructions", []):
        inst = item.get("instruction") or {}
        text = inst.get("formatted")
        if text:
            rows.append(text)
    return tuple(rows)


def functions_from_objdiff(path: Path, sides: Iterable[str]) -> Iterator[FunctionAsm]:
    data = load_json(path)
    if data is None or not isinstance(data, dict):
        return
    for side in sides:
        for sym in data.get(side, {}).get("symbols", []):
            if sym.get("kind") != "SYMBOL_FUNCTION":
                continue
            inst = formatted_instructions(sym)
            if inst:
                yield FunctionAsm(str(path.relative_to(ROOT)), side, sym.get("name") or "<anon>", inst)


OBJ_LABEL_RE = re.compile(r"^[0-9a-fA-F]+ <([^>]+)>:$")
OBJ_INST_RE = re.compile(r"^\s*[0-9a-fA-F]+:\s+(?:[0-9a-fA-F]{2}\s+){4}\s*(.+?)\s*$")


def functions_from_objdump_text(path: Path) -> Iterator[FunctionAsm]:
    cur_name: str | None = None
    cur_rows: list[str] = []

    def flush() -> Iterator[FunctionAsm]:
        nonlocal cur_name, cur_rows
        if cur_name and cur_rows:
            yield FunctionAsm(str(path.relative_to(ROOT)), "objdump", cur_name, tuple(cur_rows))
        cur_name = None
        cur_rows = []

    try:
        lines = path.read_text(encoding="utf-8", errors="ignore").splitlines()
    except OSError:
        return

    for line in lines:
        label = OBJ_LABEL_RE.match(line.strip())
        if label:
            yield from flush()
            cur_name = label.group(1)
            continue
        inst = OBJ_INST_RE.match(line)
        if inst and cur_name:
            text = inst.group(1).split("\t", 1)[-1].strip()
            if text:
                cur_rows.append(text)
    yield from flush()


def functions_from_object(path: Path) -> Iterator[FunctionAsm]:
    if not OBJDUMP.exists():
        return
    result = subprocess.run(
        [str(OBJDUMP), "-dr", str(path)],
        cwd=ROOT,
        text=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.DEVNULL,
    )
    if result.returncode != 0:
        return
    dump = BUILD / "asm_shape_search" / (path.name + ".dump")
    dump.parent.mkdir(parents=True, exist_ok=True)
    dump.write_text(result.stdout, encoding="utf-8")
    yield from functions_from_objdump_text(dump)


REG_RE = re.compile(r"\b([rf])(?:[0-9]|[12][0-9]|3[01])\b")
CR_RE = re.compile(r"\bcr[0-7]\b")
HEX_RE = re.compile(r"-?0x[0-9a-fA-F]+")
INT_RE = re.compile(r"(?<![A-Za-z_.$])[-+]?\d+(?![A-Za-z_.$])")
BRANCH_TARGET_RE = re.compile(r"\b[A-Za-z_.$][A-Za-z0-9_.$]*(?:\+0x[0-9a-fA-F]+)?\b")


def normalize_instruction(text: str, *, operands: bool) -> str:
    text = text.strip()
    if not text:
        return ""
    mnemonic, _, rest = text.partition(" ")
    mnemonic = mnemonic.lower()
    if not operands:
        return mnemonic

    rest = rest.lower()
    if mnemonic.startswith("b"):
        return f"{mnemonic} TARGET"
    rest = REG_RE.sub(lambda m: m.group(1) + "N", rest)
    rest = CR_RE.sub("crN", rest)
    rest = HEX_RE.sub("IMM", rest)
    rest = INT_RE.sub("IMM", rest)
    rest = re.sub(r"\s+", "", rest)
    return f"{mnemonic} {rest}" if rest else mnemonic


def normalize_many(rows: Iterable[str], *, operands: bool) -> tuple[str, ...]:
    return tuple(row for row in (normalize_instruction(row, operands=operands) for row in rows) if row)


def ngrams(tokens: tuple[str, ...], n: int) -> set[tuple[str, ...]]:
    if len(tokens) < n:
        return {tokens} if tokens else set()
    return {tokens[i : i + n] for i in range(len(tokens) - n + 1)}


def window_score(query: tuple[str, ...], window: tuple[str, ...], ngram: int) -> float:
    ratio = difflib.SequenceMatcher(a=query, b=window, autojunk=False).ratio()
    qn = ngrams(query, ngram)
    wn = ngrams(window, ngram)
    jaccard = len(qn & wn) / len(qn | wn) if qn and wn else 0.0
    return (0.65 * ratio) + (0.35 * jaccard)


def best_hit(query: tuple[str, ...], func: FunctionAsm, *, ngram: int, slack: int, fast: bool) -> Hit | None:
    cand = normalize_many(func.instructions, operands=True)
    if not cand:
        return None
    qlen = len(query)
    min_len = max(1, qlen - slack)
    max_len = min(len(cand), qlen + slack)
    best: Hit | None = None
    qn = ngrams(query, ngram)
    for size in range(min_len, max_len + 1):
        for start in range(0, len(cand) - size + 1):
            window = cand[start : start + size]
            if fast:
                wn = ngrams(window, ngram)
                score = len(qn & wn) / len(qn | wn) if qn and wn else 0.0
            else:
                score = window_score(query, window, ngram)
            if best is None or score > best.score:
                best = Hit(score, func.origin, func.side, func.name, start, start + size, window)
    return best


def current_json_for_unit(unit: str, refresh: bool) -> Path:
    out = BUILD / f"{unit}_asm_shape_query.json"
    if not refresh and out.exists():
        return out
    subprocess.run(
        [str(OBJDIFF), "diff", "-p", ".", "-u", UNITS[unit], "-o", str(out), "--format", "json"],
        cwd=ROOT,
        check=True,
    )
    return out


def query_from_objdiff(path: Path, symbol: str, side: str, start: int | None, count: int | None) -> tuple[str, ...]:
    data = load_json(path)
    if data is None:
        raise SystemExit(f"could not read objdiff JSON: {path}")
    for sym in data.get(side, {}).get("symbols", []):
        if sym.get("name") == symbol:
            rows = formatted_instructions(sym)
            lo = start or 0
            hi = None if count is None else lo + count
            query = normalize_many(rows[lo:hi], operands=True)
            if not query:
                raise SystemExit(f"symbol has no instructions: {symbol}")
            return query
    raise SystemExit(f"symbol not found on {side}: {symbol}")


def iter_candidate_paths(roots: Iterable[Path]) -> Iterator[Path]:
    exts = {".json", ".dump", ".txt", ".s", ".asm", ".lst", ".o", ".a"}
    for root in roots:
        if root.is_file() and root.suffix.lower() in exts:
            yield root
        elif root.is_dir():
            for path in root.rglob("*"):
                if path.is_file() and path.suffix.lower() in exts:
                    if path.name in {"report.json"} or path.name.endswith(".ctx"):
                        continue
                    try:
                        if path.stat().st_size > 8 * 1024 * 1024:
                            continue
                    except OSError:
                        continue
                    yield path


def iter_functions(paths: Iterable[Path], sides: Iterable[str]) -> Iterator[FunctionAsm]:
    for path in paths:
        suffix = path.suffix.lower()
        if suffix == ".json":
            yield from functions_from_objdiff(path, sides)
        elif suffix in {".dump", ".txt", ".s", ".asm", ".lst"}:
            yield from functions_from_objdump_text(path)
        elif suffix in {".o", ".a"}:
            yield from functions_from_object(path)


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--unit", choices=sorted(UNITS), help="generate/read current objdiff JSON for this unit")
    parser.add_argument("--json", type=Path, help="objdiff JSON to query instead of --unit")
    parser.add_argument("--symbol", required=True)
    parser.add_argument("--side", choices=["left", "right"], default="right")
    parser.add_argument("--start", type=int)
    parser.add_argument("--count", type=int)
    parser.add_argument("--root", action="append", type=Path, default=[])
    parser.add_argument("--include-build", action="store_true")
    parser.add_argument("--include-bink-json", action="store_true")
    parser.add_argument("--limit", type=int, default=20)
    parser.add_argument("--min-score", type=float, default=0.45)
    parser.add_argument("--ngram", type=int, default=4)
    parser.add_argument("--slack", type=int, default=6)
    parser.add_argument("--slow", action="store_true", help="use SequenceMatcher plus n-grams")
    parser.add_argument("--refresh", action="store_true")
    parser.add_argument("--show", type=int, default=8)
    args = parser.parse_args(argv)

    if args.json is None and args.unit is None:
        raise SystemExit("provide --unit or --json")
    query_json = args.json or current_json_for_unit(args.unit, args.refresh)
    query = query_from_objdiff(query_json, args.symbol, args.side, args.start, args.count)

    roots = [p if p.is_absolute() else ROOT / p for p in args.root]
    if args.include_build:
        roots.append(BUILD)
    if args.include_bink_json:
        roots.extend(sorted(BUILD.glob("bink*_current_fresh.json")))
        roots.extend(sorted(BUILD.glob("ngc*_current_fresh.json")))
        roots.extend(sorted(BUILD.glob("*_asm_shape_query.json")))
        roots.extend(sorted((BUILD / "flag_matrix").glob("*.json")))
    if not roots:
        roots = [ROOT / "reference_projects"]

    sides = ("left", "right")
    hits: list[Hit] = []
    for func in iter_functions(iter_candidate_paths(roots), sides):
        hit = best_hit(query, func, ngram=args.ngram, slack=args.slack, fast=not args.slow)
        if hit and hit.score >= args.min_score:
            hits.append(hit)

    hits.sort(key=lambda h: (-h.score, h.origin, h.name, h.start))
    for hit in hits[: args.limit]:
        print(f"{hit.score:7.4f} {hit.origin} [{hit.side}] {hit.name} @{hit.start}:{hit.end}")
        for row in hit.window[: args.show]:
            print(f"        {row}")
        if len(hit.window) > args.show:
            print("        ...")
    return 0


if __name__ == "__main__":
    sys.exit(main())
