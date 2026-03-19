#!/usr/bin/env python3

from __future__ import annotations

import argparse
import json
import math
from pathlib import Path
from typing import Any

DEFAULT_COUNT = 5
DEFAULT_FUNCTION_COUNT = 3
MATCH_COMPLETE = 100.0


def safe_float(value: Any, default: float = 0.0) -> float:
    try:
        parsed = float(value)
    except (TypeError, ValueError, OverflowError):
        return default
    return parsed if math.isfinite(parsed) else default


def measure_percent(measures: dict[str, Any], key: str, default: float = MATCH_COMPLETE) -> float:
    return safe_float(measures.get(key, default), default)


def default_report_path(repo_root: Path) -> Path:
    preferred = repo_root / "build" / "GQPE78" / "report.json"
    if preferred.exists():
        return preferred

    candidates = sorted((repo_root / "build").glob("*/report.json"))
    if candidates:
        return candidates[0]

    return preferred


def load_report(report_path: Path) -> dict[str, Any]:
    with report_path.open("r", encoding="utf-8") as report_file:
        data = json.load(report_file)
    return data if isinstance(data, dict) else {}


def is_incomplete(unit: dict[str, Any]) -> bool:
    metadata = unit.get("metadata", {})
    if isinstance(metadata, dict) and metadata.get("auto_generated", False):
        return False

    measures = unit.get("measures", {})
    if not isinstance(measures, dict):
        return False

    return any(
        safe_float(measures.get(key, MATCH_COMPLETE)) < MATCH_COMPLETE
        for key in (
            "fuzzy_match_percent",
            "matched_code_percent",
            "matched_data_percent",
            "matched_functions_percent",
        )
    )


def incomplete_function_rows(unit: dict[str, Any]) -> list[tuple[float, str, str]]:
    rows: list[tuple[float, str, str]] = []
    functions = unit.get("functions", [])
    if not isinstance(functions, list):
        return rows

    for function in functions:
        if not isinstance(function, dict):
            continue
        if "fuzzy_match_percent" not in function:
            continue

        fuzzy = safe_float(function.get("fuzzy_match_percent", MATCH_COMPLETE), MATCH_COMPLETE)
        if fuzzy >= MATCH_COMPLETE:
            continue

        size = str(function.get("size", "?"))
        name = str(function.get("name", "<unknown>"))
        rows.append((fuzzy, name, size))

    rows.sort(key=lambda row: (row[0], -safe_float(row[2], 0.0), row[1]))
    return rows


def has_real_source_path(unit: dict[str, Any]) -> bool:
    metadata = unit.get("metadata", {})
    if not isinstance(metadata, dict):
        return False

    source_path = metadata.get("source_path")
    return isinstance(source_path, str) and bool(source_path)


def polish_sort_key(unit: dict[str, Any]) -> tuple[int, float, float, float, float, float, str]:
    measures = unit.get("measures", {})
    if not isinstance(measures, dict):
        measures = {}

    fuzzy = measure_percent(measures, "fuzzy_match_percent", 0.0)
    matched_functions = measure_percent(measures, "matched_functions_percent")
    matched_code = measure_percent(measures, "matched_code_percent")
    matched_data = measure_percent(measures, "matched_data_percent")
    name = str(unit.get("name", ""))

    # Prefer units that are nearly complete across every report axis instead of
    # raw fuzzy score alone. This keeps the default list focused on clean polish
    # work rather than units that still have a large code/data gap.
    weakest_metric = min(fuzzy, matched_functions, matched_code, matched_data)
    weighted_quality = (
        fuzzy * 0.20
        + matched_functions * 0.15
        + matched_code * 0.40
        + matched_data * 0.25
    )
    missing_metric_count = sum(
        1
        for key in ("matched_code_percent", "matched_data_percent", "matched_functions_percent")
        if key not in measures
    )
    source_rank = 0 if has_real_source_path(unit) else 1

    return (
        missing_metric_count,
        source_rank,
        -weakest_metric,
        -weighted_quality,
        -matched_code,
        -matched_data,
        -matched_functions,
        -fuzzy,
        name,
    )


def unit_sort_key(unit: dict[str, Any], sort_mode: str) -> tuple[Any, ...]:
    measures = unit.get("measures", {})
    if not isinstance(measures, dict):
        measures = {}

    fuzzy = measure_percent(measures, "fuzzy_match_percent", 0.0)
    matched_functions = measure_percent(measures, "matched_functions_percent")
    matched_code = measure_percent(measures, "matched_code_percent")
    matched_data = measure_percent(measures, "matched_data_percent")
    name = str(unit.get("name", ""))

    if sort_mode == "lowest":
        return (fuzzy, matched_functions, matched_code, matched_data, name)

    if sort_mode == "polish":
        return polish_sort_key(unit)

    return (-fuzzy, -matched_functions, -matched_code, -matched_data, name)


def display_source(unit: dict[str, Any]) -> str:
    metadata = unit.get("metadata", {})
    if isinstance(metadata, dict):
        source_path = metadata.get("source_path")
        if isinstance(source_path, str) and source_path:
            return source_path
    return str(unit.get("name", "<unknown>"))


def format_measure(measures: dict[str, Any], key: str, default: float = MATCH_COMPLETE) -> str:
    if key not in measures:
        return "   n/a"

    return f"{measure_percent(measures, key, default):6.2f}%"


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(description="List incomplete BFBB units ranked by match score.")
    parser.add_argument(
        "--report",
        type=Path,
        help="path to report.json (defaults to build/GQPE78/report.json)",
    )
    parser.add_argument(
        "-n",
        "--count",
        type=int,
        default=DEFAULT_COUNT,
        help=f"number of units to print (default: {DEFAULT_COUNT})",
    )
    parser.add_argument(
        "--functions",
        type=int,
        default=DEFAULT_FUNCTION_COUNT,
        help=f"number of weak functions to print per unit (default: {DEFAULT_FUNCTION_COUNT})",
    )
    parser.add_argument(
        "--sort",
        choices=("polish", "closest", "lowest"),
        default="polish",
        help="rank units by balanced near-match polish, highest incomplete fuzzy match, or lowest fuzzy match",
    )
    parser.add_argument(
        "--list",
        action="store_true",
        help="print a longer list of units",
    )
    return parser.parse_args()


def main() -> int:
    args = parse_args()
    repo_root = Path(__file__).resolve().parent.parent
    report_path = (args.report or default_report_path(repo_root)).resolve()

    if not report_path.exists():
        print(f"ERROR: {report_path} not found. Run 'ninja' first.")
        return 1

    report = load_report(report_path)
    units = report.get("units", [])
    if not isinstance(units, list):
        print(f"ERROR: {report_path} does not contain a valid units list.")
        return 1

    count = max(args.count, 1)
    if args.list:
        count = max(count, 15)

    incomplete_units = [unit for unit in units if isinstance(unit, dict) and is_incomplete(unit)]
    if not incomplete_units:
        print("No incomplete units found.")
        return 0

    incomplete_units.sort(key=lambda unit: unit_sort_key(unit, args.sort))
    if args.sort == "polish":
        label = "Quality-first near-match targets"
    elif args.sort == "closest":
        label = "Highest-match incomplete targets"
    else:
        label = "Lowest-match targets"
    print(f"{label} from {report_path.relative_to(repo_root).as_posix()}:")

    for index, unit in enumerate(incomplete_units[:count], 1):
        measures = unit.get("measures", {})
        if not isinstance(measures, dict):
            measures = {}

        fuzzy = measure_percent(measures, "fuzzy_match_percent", 0.0)
        matched_code = format_measure(measures, "matched_code_percent")
        matched_data = format_measure(measures, "matched_data_percent")
        name = str(unit.get("name", "<unknown>"))
        source = display_source(unit)
        print(
            f"{index:2}. fuzzy {fuzzy:7.3f}% | code {matched_code} | data {matched_data}  "
            f"{name}  {source}"
        )

        weak_functions = incomplete_function_rows(unit)[: max(args.functions, 0)]
        if weak_functions:
            formatted = " | ".join(f"{func_name} {func_match:.2f}% ({size}b)" for func_match, func_name, size in weak_functions)
            print(f"    {formatted}")

    return 0


if __name__ == "__main__":
    raise SystemExit(main())
