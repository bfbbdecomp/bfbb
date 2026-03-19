from __future__ import annotations

import argparse
import os
import signal
import subprocess
import sys
from pathlib import Path

DEFAULT_TIMEOUT_SECONDS = 25 * 60


def get_repo_root() -> Path:
    return Path(__file__).resolve().parent


def get_current_branch(repo_root: Path) -> str:
    result = subprocess.run(
        ["git", "branch", "--show-current"],
        cwd=repo_root,
        capture_output=True,
        text=True,
        check=False,
    )
    branch = result.stdout.strip()
    return branch or "DETACHED"


def build_prompt(branch: str) -> str:
    if branch not in {"main", "master", "DETACHED"}:
        branch_note = (
            f"The current branch is '{branch}'. Treat it as the existing long-lived mega-PR branch "
            "and keep iterating on it. Commit to it, push to it, and do not create or switch to another branch."
        )
    else:
        branch_note = (
            f"The current branch is '{branch}'. If the worktree is clean, create one long-lived PR "
            "branch for this automation run and keep reusing it for every later commit."
        )

    return (
        "Follow the instructions in AGENTS.md in this repo. Never ask the user for input. "
        f"{branch_note} "
        "Use tools/agent_select_target.py to choose the next target from build/GQPE78/report.json. "
        "Prefer the selector's default quality-first near-match ranking. "
        "Prioritize balanced near-matches that are close across fuzzy, code, data, and function metrics. "
        "Focus on plausible BFBB source and real match improvements. "
        "Prefer typed, readable, source-plausible code over contrived score hacks; a clean near-match is better than a hacked 100%. "
        "Do not create tiny one-off PRs. If a PR already exists for the branch, keep updating that same PR. "
        "After each meaningful improvement, build, verify, commit, push the active branch, and continue iterating."
    )


def terminate_process_tree(proc: subprocess.Popen[bytes]) -> None:
    if os.name == "nt":
        subprocess.run(
            ["taskkill", "/F", "/T", "/PID", str(proc.pid)],
            stdout=subprocess.DEVNULL,
            stderr=subprocess.DEVNULL,
            check=False,
        )
        return

    try:
        os.killpg(os.getpgid(proc.pid), signal.SIGKILL)
    except ProcessLookupError:
        pass


def run_once(repo_root: Path, timeout_seconds: int) -> int:
    prompt = build_prompt(get_current_branch(repo_root))
    popen_kwargs = {
        "cwd": repo_root,
    }

    if os.name == "nt":
        popen_kwargs["creationflags"] = subprocess.CREATE_NEW_PROCESS_GROUP
    else:
        popen_kwargs["start_new_session"] = True

    proc = subprocess.Popen(["codex", "exec", "--yolo", prompt], **popen_kwargs)

    try:
        return proc.wait(timeout=timeout_seconds)
    except subprocess.TimeoutExpired:
        terminate_process_tree(proc)
        return 124


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(description="Run Codex in a persistent BFBB automation loop.")
    parser.add_argument(
        "--timeout",
        type=int,
        default=DEFAULT_TIMEOUT_SECONDS,
        help=f"per-iteration timeout in seconds (default: {DEFAULT_TIMEOUT_SECONDS})",
    )
    parser.add_argument(
        "--once",
        action="store_true",
        help="run a single Codex iteration instead of looping forever",
    )
    return parser.parse_args()


def main() -> int:
    args = parse_args()
    repo_root = get_repo_root()

    while True:
        exit_code = run_once(repo_root, args.timeout)
        if args.once:
            return exit_code

        if exit_code not in {0, 124}:
            print(f"codex exited with status {exit_code}", file=sys.stderr)


if __name__ == "__main__":
    raise SystemExit(main())
