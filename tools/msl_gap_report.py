#!/usr/bin/env python3
"""Summarize remaining BFBB MSL gaps and their best donor candidates."""

from __future__ import annotations

import argparse
import json
from dataclasses import dataclass
from pathlib import Path

import msl_donor_survey


ROOT = Path(__file__).resolve().parents[1]
CONFIGURE = ROOT / "configure.py"
REPORT = ROOT / "build" / "GQPE78" / "report.json"
LOCAL_MSL_ROOT = ROOT / "src" / "PowerPC_EABI_Support" / "src" / "MSL_C" / "MSL_Common"


@dataclass(frozen=True)
class GapEntry:
    state: str
    object_path: str
    local_path: Path | None

    @property
    def basename(self) -> str:
        return Path(self.object_path).name


def load_gap_entries() -> list[GapEntry]:
    text = CONFIGURE.read_text(encoding="utf-8", errors="ignore")
    entries: list[GapEntry] = []
    for call in msl_donor_survey.iter_object_calls(text):
        strings = [item.replace("\\", "/") for item in __import__("re").findall(r'"([^"]+)"', call)]
        if not strings:
            continue
        object_path = next((item for item in strings if item.endswith((".c", ".C", ".cpp", ".s"))), strings[0])
        if not object_path.startswith("MSL_C/MSL_Common/"):
            continue
        body = call[len("Object(") : -1]
        state = body.split(",", 1)[0].strip()
        if state != "NonMatching":
            continue
        local_path = LOCAL_MSL_ROOT / Path(object_path).name
        entries.append(GapEntry(state=state, object_path=object_path, local_path=local_path if local_path.is_file() else None))
    return entries


def load_report_units() -> dict[str, dict]:
    if not REPORT.is_file():
        return {}
    payload = json.loads(REPORT.read_text(encoding="utf-8"))
    units = payload.get("units", [])
    by_source: dict[str, dict] = {}
    for unit in units:
        metadata = unit.get("metadata", {})
        source_path = metadata.get("source_path")
        if source_path:
            by_source[source_path.replace("\\", "/")] = unit
    return by_source


def format_functions(functions: tuple[tuple[str, int], ...]) -> str:
    if not functions:
        return "-"
    return ", ".join(f"{name}:0x{size:X}" for name, size in functions)


def summarize(report_units: dict[str, dict], top: int) -> int:
    gaps = load_gap_entries()
    if not gaps:
        print("No NonMatching BFBB MSL_C/MSL_Common objects found.")
        return 0

    for gap in gaps:
        local_object_entry = msl_donor_survey.find_object_entry(CONFIGURE, gap.basename)
        source_rel = (
            gap.local_path.relative_to(ROOT).as_posix()
            if gap.local_path is not None
            else f"src/PowerPC_EABI_Support/src/MSL_C/MSL_Common/{gap.basename}"
        )
        unit = report_units.get(source_rel)
        fuzzy = "-"
        complete = "-"
        if unit:
            measures = unit.get("measures", {})
            fuzzy_val = measures.get("fuzzy_match_percent")
            fuzzy = f"{fuzzy_val:.5f}" if isinstance(fuzzy_val, (int, float)) else "-"
            complete = "yes" if unit.get("metadata", {}).get("complete") else "no"

        print(f"{gap.basename} state={gap.state} source={source_rel} fuzzy={fuzzy} complete={complete}")
        local_config_summary = msl_donor_survey.format_config_summary(local_object_entry)
        if local_config_summary != "-":
            print(f"  local_cfg={local_config_summary}")
        donors = msl_donor_survey.survey(gap.basename, gap.local_path)
        if donors:
            target = donors[0]
            print(
                f"  target={target.target_path or gap.object_path} text=0x{target.target_text_size:X} "
                f"rodata=0x{target.target_rodata_size:X} sdata2=0x{target.target_sdata2_size:X}"
            )
            print(f"  target_funcs={format_functions(target.target_functions)}")
            if target.target_text_size == 0 and target.target_rodata_size == 0 and target.target_sdata2_size == 0:
                print("  note=no BFBB split target found for this unit")
            for donor in donors[:top]:
                state = donor.state or "absent"
                note_text = ",".join(donor.notes) if donor.notes else "-"
                fmatch = "exact" if donor.function_layout_matches else "names" if donor.function_names_match else "no"
                print(
                    f"  donor={donor.project} state={state} config={donor.config or '-'} "
                    f"text=0x{donor.text_size:X} rodata=0x{donor.rodata_size:X} sdata2=0x{donor.sdata2_size:X} "
                    f"dist=0x{donor.section_distance:X} fmatch={fmatch} notes={note_text}"
                )
                print(f"    funcs={format_functions(donor.functions)}")
                donor_config_summary = msl_donor_survey.format_config_summary(donor)
                if donor_config_summary != "-":
                    print(f"    cfg={donor_config_summary}")
                if donor.source_path is not None:
                    print(f"    src={donor.source_path.as_posix()}")
        else:
            print("  no donors found")
        print()
    return 0


def make_parser() -> argparse.ArgumentParser:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--top", type=int, default=4, help="Number of donor candidates to print per gap (default: 4)")
    return parser


def main() -> int:
    args = make_parser().parse_args()
    return summarize(load_report_units(), max(args.top, 1))


if __name__ == "__main__":
    raise SystemExit(main())
