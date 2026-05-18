#!/usr/bin/env python3
"""Probe Bink compiler flags against objdiff scores.

The script compiles a configured Bink unit to a temporary object with candidate
compiler/flag changes, swaps that object into the normal build path long enough
to run objdiff, then restores the original object.
"""

from __future__ import annotations

import argparse
import itertools
import json
import os
import shlex
import shutil
import subprocess
import sys
import time
from contextlib import contextmanager
from pathlib import Path
from typing import Iterable

ROOT = Path(__file__).resolve().parents[1]
BUILD = ROOT / "build" / "GQPE78"
OBJDIFF = ROOT / "build" / "tools" / "objdiff-cli.exe"
PRODG_ROOT = ROOT / "build" / "compilers" / "ProDG"
MWCC_ROOT = ROOT / "build" / "compilers" / "GC"
LOCKS = BUILD / ".bink_flag_matrix_locks"
LOCK_TIMEOUT_SECONDS = 600.0

BINK_FLAGS = [
    "-O2",
    "-mcpu=750",
    "-fno-exceptions",
    "-Wno-inline",
    "-nostdinc",
    "-I",
    "src/dolphin/src",
    "-I",
    "include",
    "-I",
    "src/dolphin/include",
    "-D__GEKKO__",
    "-I",
    "src/bink/include",
    "-I",
    "src/PowerPC_EABI_Support/include",
    "-G8",
]

CW_COMMON_FLAGS = [
    "-nodefaults",
    "-proc",
    "gekko",
    "-align",
    "powerpc",
    "-enum",
    "int",
    "-fp",
    "hardware",
    "-Cpp_exceptions",
    "off",
    "-W",
    "off",
    "-O4,p",
    "-inline",
    "auto",
    "-pragma",
    "cats off",
    "-pragma",
    "warn_notinlined off",
    "-maxerrors",
    "1",
    "-nosyspath",
    "-RTTI",
    "off",
    "-fp_contract",
    "on",
    "-str",
    "reuse",
    "-multibyte",
    "-i",
    "include",
    "-i",
    "src/PowerPC_EABI_Support/include",
    "-i",
    "src/dolphin/include",
    "-i",
    "src/dolphin/src",
    "-i",
    "src/bink/include",
    "-i",
    "src/bink/src",
    "-i",
    "src",
    "-i",
    "build/GQPE78/include",
    "-DNDEBUG=1",
    "-DBUILD_VERSION=1",
    "-DVERSION_GQPE78",
]

CW_PRESETS = {
    "base": [],
    "runtime": [
        "-use_lmw_stmw",
        "on",
        "-str",
        "reuse,pool,readonly",
        "-gccinc",
        "-common",
        "off",
        "-inline",
        "auto",
    ],
    "dolphin": [
        "-fp",
        "fmadd",
        "-fp_contract",
        "off",
        "-char",
        "signed",
        "-str",
        "reuse",
        "-common",
        "off",
        "-O4,p",
    ],
    "bfbb": [
        "-common",
        "on",
        "-char",
        "unsigned",
        "-str",
        "reuse,pool,readonly",
        "-use_lmw_stmw",
        "on",
        "-inline",
        "off",
        "-gccinc",
        "-i",
        "include/inline",
        "-i",
        "include/rwsdk",
        "-i",
        "src/SB/Core/gc",
        "-i",
        "src/SB/Core/x",
        "-i",
        "src/SB/Game",
        "-DGAMECUBE",
    ],
}

UNITS = {
    "binkread": ("main/bink/src/sdk/decode/binkread", "src/bink/src/sdk/decode/binkread.c", "build/GQPE78/src/bink/src/sdk/decode/binkread.o", "c"),
    "binkacd": ("main/bink/src/sdk/decode/binkacd", "src/bink/src/sdk/decode/binkacd.c", "build/GQPE78/src/bink/src/sdk/decode/binkacd.o", "c"),
    "expand": ("main/bink/src/sdk/decode/expand", "src/bink/src/sdk/decode/expand.c", "build/GQPE78/src/bink/src/sdk/decode/expand.o", "c"),
    "yuv": ("main/bink/src/sdk/decode/yuv", "src/bink/src/sdk/decode/yuv.cpp", "build/GQPE78/src/bink/src/sdk/decode/yuv.o", "c++"),
    "binkngc": ("main/bink/src/sdk/decode/ngc/binkngc", "src/bink/src/sdk/decode/ngc/binkngc.c", "build/GQPE78/src/bink/src/sdk/decode/ngc/binkngc.o", "c"),
    "ngcsnd": ("main/bink/src/sdk/decode/ngc/ngcsnd", "src/bink/src/sdk/decode/ngc/ngcsnd.c", "build/GQPE78/src/bink/src/sdk/decode/ngc/ngcsnd.o", "c"),
    "ngcfile": ("main/bink/src/sdk/decode/ngc/ngcfile", "src/bink/src/sdk/decode/ngc/ngcfile.c", "build/GQPE78/src/bink/src/sdk/decode/ngc/ngcfile.o", "c"),
    "ngcrgb": ("main/bink/src/sdk/decode/ngc/ngcrgb", "src/bink/src/sdk/decode/ngc/ngcrgb.c", "build/GQPE78/src/bink/src/sdk/decode/ngc/ngcrgb.o", "c"),
    "ngcyuy2": ("main/bink/src/sdk/decode/ngc/ngcyuy2", "src/bink/src/sdk/decode/ngc/ngcyuy2.c", "build/GQPE78/src/bink/src/sdk/decode/ngc/ngcyuy2.o", "c"),
    "varbits": ("main/bink/src/sdk/varbits", "src/bink/src/sdk/varbits.c", "build/GQPE78/src/bink/src/sdk/varbits.o", "c"),
    "fft": ("main/bink/src/sdk/fft", "src/bink/src/sdk/fft.c", "build/GQPE78/src/bink/src/sdk/fft.o", "c"),
    "dct": ("main/bink/src/sdk/dct", "src/bink/src/sdk/dct.c", "build/GQPE78/src/bink/src/sdk/dct.o", "c"),
    "bitplane": ("main/bink/src/sdk/bitplane", "src/bink/src/sdk/bitplane.c", "build/GQPE78/src/bink/src/sdk/bitplane.o", "c"),
}


def replace_flag(flags: list[str], prefix: str, value: str) -> list[str]:
    out = []
    replaced = False
    for flag in flags:
        if flag.startswith(prefix):
            out.append(value)
            replaced = True
        else:
            out.append(flag)
    if not replaced:
        out.append(value)
    return out


def build_prodg_flags(lang: str, opt: str, small_data: str, extras: Iterable[str]) -> list[str]:
    flags = replace_flag(BINK_FLAGS, "-O", opt)
    flags = replace_flag(flags, "-G", small_data)
    flags.append(f"-lang={lang}")
    flags.extend(extras)
    return flags


def build_mwcc_flags(lang: str, preset: str, source: str, extras: Iterable[str]) -> list[str]:
    flags = list(CW_COMMON_FLAGS)
    flags.extend(["-i", str(Path(source).parent).replace("\\", "/")])
    flags.extend(CW_PRESETS[preset])
    flags.append(f"-lang={lang}")
    flags.extend(extras)
    return flags


def section_score(path: Path) -> float | None:
    with path.open("r", encoding="utf-8") as f:
        data = json.load(f)
    try:
        score = data["left"]["sections"][0].get("match_percent")
    except Exception:
        return None
    return None if score is None else float(score)


def run(cmd: list[str], *, quiet: bool = False) -> subprocess.CompletedProcess[str]:
    return subprocess.run(
        cmd,
        cwd=ROOT,
        text=True,
        stdout=subprocess.PIPE if quiet else None,
        stderr=subprocess.STDOUT if quiet else None,
    )


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
                raise TimeoutError(f"timed out waiting for Bink flag-matrix lock: {lock}")
            time.sleep(0.1)

    try:
        yield
    finally:
        try:
            (lock / "pid").unlink(missing_ok=True)
            lock.rmdir()
        except OSError:
            pass


def compile_prodg_candidate(source: str, out: Path, flags: list[str], version: str) -> bool:
    compiler_dir = PRODG_ROOT / version
    compiler = compiler_dir / "ngccc.exe"
    if not compiler.exists():
        print(f"missing compiler: {compiler}")
        return False

    out.parent.mkdir(parents=True, exist_ok=True)
    command = [str(compiler), *flags, "-c", "-o", str(out), source]
    cmdline = " ".join(command)
    result = run(
        [
            "cmd",
            "/c",
            f"set SN_NGC_PATH={compiler_dir}&& {cmdline}",
        ],
        quiet=True,
    )
    if result.returncode != 0:
        print(result.stdout.strip())
        return False
    return True


def compile_mwcc_candidate(source: str, out: Path, flags: list[str], version: str) -> bool:
    compiler = MWCC_ROOT / version / "mwcceppc.exe"
    if not compiler.exists():
        print(f"missing compiler: {compiler}")
        return False

    out_dir = out.parent
    out_dir.mkdir(parents=True, exist_ok=True)
    for old in out_dir.glob(f"{Path(source).stem}.*"):
        old.unlink()

    result = run(
        [
            str(compiler),
            *flags,
            "-MMD",
            "-c",
            source,
            "-o",
            str(out_dir),
        ],
        quiet=True,
    )
    if result.returncode != 0:
        print(result.stdout.strip())
        return False

    produced = out_dir / f"{Path(source).stem}.o"
    if not produced.exists():
        print(f"compile succeeded but did not produce {produced}")
        return False
    if produced != out:
        shutil.copy2(produced, out)
    return True


def score_candidate(unit_name: str, unit_path: str, object_path: Path, candidate: Path, report: Path) -> float | None:
    backup = object_path.with_suffix(object_path.suffix + ".flagmatrix.bak")
    if backup.exists():
        backup.unlink()
    shutil.copy2(object_path, backup)
    try:
        shutil.copy2(candidate, object_path)
        result = run(
            [
                str(OBJDIFF),
                "diff",
                "-p",
                ".",
                "-u",
                unit_path,
                "-o",
                str(report),
                "--format",
                "json",
            ],
            quiet=True,
        )
        if result.returncode != 0:
            print(result.stdout.strip())
            return None
        return section_score(report)
    finally:
        if backup.exists():
            shutil.copy2(backup, object_path)
        backup.unlink(missing_ok=True)


def score_existing(unit_path: str, report: Path) -> float | None:
    result = run(
        [
            str(OBJDIFF),
            "diff",
            "-p",
            ".",
            "-u",
            unit_path,
            "-o",
            str(report),
            "--format",
            "json",
        ],
        quiet=True,
    )
    if result.returncode != 0:
        print(result.stdout.strip())
        return None
    return section_score(report)


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("units", nargs="*", choices=sorted(UNITS))
    parser.add_argument("--compiler", choices=("prodg", "mwcc", "both"), default="prodg")
    parser.add_argument("--prodg-versions", nargs="+", default=["3.5"])
    parser.add_argument("--opts", nargs="+", default=["-O1", "-O2", "-O3"])
    parser.add_argument("--small-data", nargs="+", default=["-G0", "-G4", "-G8"])
    parser.add_argument("--mw-versions", nargs="+", default=["1.2.5n", "1.3.2", "2.0p1", "2.6"])
    parser.add_argument("--mw-presets", nargs="+", choices=sorted(CW_PRESETS), default=["base", "runtime", "dolphin", "bfbb"])
    parser.add_argument("--extra", action="append", default=[])
    parser.add_argument("--limit", type=int, default=12, help="rows to print per unit; use 0 for all")
    parser.add_argument("--only-improvements", action="store_true", help="only print variants that beat the current object")
    args = parser.parse_args(argv)
    extras = list(itertools.chain.from_iterable(shlex.split(extra) for extra in args.extra))

    units = args.units or ["varbits", "binkngc", "ngcsnd", "binkacd"]
    temp = BUILD / "flag_matrix"
    temp.mkdir(parents=True, exist_ok=True)

    for unit_name in units:
        unit_path, source, object_rel, lang = UNITS[unit_name]
        object_path = ROOT / object_rel
        if not object_path.exists():
            subprocess.run(["ninja", object_rel.replace("/", "\\")], cwd=ROOT, check=True)

        with unit_lock(unit_name):
            baseline_report = temp / f"{unit_name}_baseline.json"
            baseline = score_existing(unit_path, baseline_report)
            rows: list[tuple[float, str, str]] = []
            if args.compiler in ("prodg", "both"):
                for version, opt, small_data in itertools.product(args.prodg_versions, args.opts, args.small_data):
                    flags = build_prodg_flags(lang, opt, small_data, extras)
                    label = f"ProDG/{version} {opt} {small_data}" + (f" {' '.join(extras)}" if extras else "")
                    stem = f"{unit_name}_ProDG_{version.replace('.', '_')}_{opt[1:]}_{small_data[2:]}"
                    candidate = temp / f"{stem}.o"
                    report = temp / f"{stem}.json"
                    if not compile_prodg_candidate(source, candidate, flags, version):
                        print(f"{unit_name:<10} {label:<34} compile failed")
                        continue
                    score = score_candidate(unit_name, unit_path, object_path, candidate, report)
                    if score is None:
                        print(f"{unit_name:<10} {label:<34} score failed")
                        continue
                    rows.append((score, label, str(report.relative_to(ROOT))))

            if args.compiler in ("mwcc", "both"):
                for version, preset in itertools.product(args.mw_versions, args.mw_presets):
                    flags = build_mwcc_flags(lang, preset, source, extras)
                    label = f"GC/{version} {preset}" + (f" {' '.join(extras)}" if extras else "")
                    stem = f"{unit_name}_GC_{version.replace('.', '_')}_{preset}"
                    candidate = temp / f"{stem}" / f"{Path(source).stem}.o"
                    report = temp / f"{stem}.json"
                    if not compile_mwcc_candidate(source, candidate, flags, version):
                        print(f"{unit_name:<10} {label:<34} compile failed")
                        continue
                    score = score_candidate(unit_name, unit_path, object_path, candidate, report)
                    if score is None:
                        print(f"{unit_name:<10} {label:<34} score failed")
                        continue
                    rows.append((score, label, str(report.relative_to(ROOT))))

        print(f"\n## {unit_name}")
        if baseline is None:
            print("baseline=<none>")
        else:
            print(f"baseline={baseline:.6g}  {baseline_report.relative_to(ROOT)}")

        printed = 0
        for score, label, report in sorted(rows, reverse=True):
            delta = "" if baseline is None else f" {score - baseline:+9.6g}"
            if args.only_improvements and baseline is not None and score <= baseline:
                continue
            if args.limit and printed >= args.limit:
                break
            print(f"{score:9.6g}{delta}  {label:<34} {report}")
            printed += 1

    return 0


if __name__ == "__main__":
    sys.exit(main())
