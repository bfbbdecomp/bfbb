#!/usr/bin/env python3
"""Cluster Bink objdiff symbols by their first normalized asm mismatch."""

from __future__ import annotations

import argparse
import json
import re
import subprocess
from collections import defaultdict
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
BUILD = ROOT / "build" / "GQPE78"
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

REG_RE = re.compile(r"\b([rf])(?:[0-9]|[12][0-9]|3[01])\b")
CR_RE = re.compile(r"\bcr[0-7]\b")
HEX_RE = re.compile(r"-?0x[0-9a-fA-F]+")
INT_RE = re.compile(r"(?<![A-Za-z_.$])[-+]?\d+(?![A-Za-z_.$])")


def current_json(unit: str, refresh: bool) -> Path:
    path = BUILD / f"{unit}_firstdiff.json"
    if not refresh and path.exists():
        return path
    subprocess.run(
        [str(OBJDIFF), "diff", "-p", ".", "-u", UNITS[unit], "-o", str(path), "--format", "json"],
        cwd=ROOT,
        check=True,
    )
    return path


def norm(text: str | None) -> str:
    if not text:
        return "<gap>"
    mnemonic, _, rest = text.strip().lower().partition(" ")
    if mnemonic.startswith("b"):
        return f"{mnemonic} target"
    rest = REG_RE.sub(lambda m: m.group(1) + "N", rest)
    rest = CR_RE.sub("crN", rest)
    rest = HEX_RE.sub("IMM", rest)
    rest = INT_RE.sub("IMM", rest)
    rest = re.sub(r"\s+", "", rest)
    return f"{mnemonic} {rest}" if rest else mnemonic


def instructions(sym: dict) -> list[str]:
    rows: list[str] = []
    for item in sym.get("instructions", []):
        inst = item.get("instruction") or {}
        rows.append(inst.get("formatted") or "<gap>")
    return rows


def score(sym: dict) -> float:
    return float(sym.get("match_percent") or sym.get("score") or 0.0)


def source_ref(sym: dict) -> str:
    src = sym.get("source") or {}
    path = src.get("path") or src.get("file") or ""
    line = src.get("line")
    return f"{path}:{line}" if path and line else path


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("units", nargs="+", choices=sorted(UNITS))
    parser.add_argument("--refresh", action="store_true")
    parser.add_argument("--min-score", type=float, default=0.0)
    parser.add_argument("--max-score", type=float, default=99.99)
    parser.add_argument("--limit", type=int, default=30)
    args = parser.parse_args()

    clusters: dict[tuple[str, str], list[tuple[str, float, int, str, str, str]]] = defaultdict(list)
    for unit in args.units:
        data = json.loads(current_json(unit, args.refresh).read_text(encoding="utf-8"))
        left = {s.get("name"): s for s in data.get("left", {}).get("symbols", []) if s.get("kind") == "SYMBOL_FUNCTION"}
        right = {s.get("name"): s for s in data.get("right", {}).get("symbols", []) if s.get("kind") == "SYMBOL_FUNCTION"}
        for name, rsym in right.items():
            lsym = left.get(name)
            if not lsym:
                continue
            pct = score(rsym)
            if pct < args.min_score or pct > args.max_score:
                continue
            lrows = instructions(lsym)
            rrows = instructions(rsym)
            for idx in range(max(len(lrows), len(rrows))):
                lraw = lrows[idx] if idx < len(lrows) else "<gap>"
                rraw = rrows[idx] if idx < len(rrows) else "<gap>"
                key = (norm(lraw), norm(rraw))
                if key[0] != key[1]:
                    clusters[key].append((unit, pct, idx, name, lraw, rraw))
                    break

    ranked = sorted(clusters.items(), key=lambda item: (-len(item[1]), item[0]))
    for (lnorm, rnorm), hits in ranked[: args.limit]:
        print(f"\n## {len(hits)} hits: {lnorm}  |  {rnorm}")
        for unit, pct, idx, name, lraw, rraw in sorted(hits, key=lambda h: (-h[1], h[0], h[3]))[:8]:
            print(f"{unit:8} {pct:7.3f} @{idx:03d} {name}")
            print(f"         {lraw}  |  {rraw}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
