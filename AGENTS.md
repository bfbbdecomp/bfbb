# AGENTS.md - Agent Runbook (BFBB)

This file is the runbook for automated contributions to **BFBB**.

Goal: make steady, source-plausible match progress in this repo and keep that work on one long-lived PR branch instead of spinning up a new PR for every small improvement.

## Project assumptions

- Repo root is the current checkout.
- The active version is `GQPE78`.
- Required local asset: `orig/GQPE78/sys/main.dol`.
- The useful automation artifacts for this project are:
  - `build/GQPE78/report.json`
  - `build/GQPE78/progress.json`
  - `objdiff.json`
- Do not depend on old `.MAP` files, symbol extractors, or state files copied over from another repo.

## Setup

Only run setup steps if the build artifacts are missing or stale.

1. Configure the project:

   ```sh
   python configure.py
   ```

2. Build the project:

   ```sh
   ninja
   ```

Success criteria:
- `build/GQPE78/report.json` exists
- `build/GQPE78/main.dol: OK`

## Contribution loop

### 1) Branch and PR management

- If you are already on a non-`main` branch, keep using it.
- If you are on `main` and the worktree is clean, update `main` and create one long-lived branch for the automation run, for example:

  ```sh
  git pull origin main
  git checkout -b pr/mega/$(date -u +%s)
  ```

- Create at most one PR for that branch.
- Once the PR exists, keep pushing more commits to the same branch and updating the same PR.
- Do not create a new PR for each unit or function.
- Do not assume local uncommitted changes are disposable. If unrelated user work is present, leave it alone.

### 2) Pick the next target

Run:

```sh
python tools/agent_select_target.py
```

The selector is intentionally simple in this repo:
- it reads `build/GQPE78/report.json`
- it ranks incomplete units by match score
- it prints a short list of candidate units and a few weak functions

Prefer polishing near-match units first unless there is a concrete reason to chase a lower-match file.

### 3) Edit source

Work in `src/` and `include/`.

Priorities:
- recover plausible original source
- improve real code/data matching
- clean up decompiler output into readable C/C++
- define proper structs, enums, types, and linkage
- use real member access instead of pointer math

Avoid:
- hardcoded offsets where a typed field belongs in a struct
- extern hacks added only to move a score
- junk comments, debug notes, or commented-out code
- contrived compiler-coaxing that does not look like plausible original source

Follow the repo conventions in `CONTRIBUTING.md`.

### 4) Verify

Build after edits:

```sh
ninja
```

Check the result with:
- `build/GQPE78/report.json`
- objdiff, if needed

If the local objdiff CLI exists, a typical command is:

```sh
build/tools/objdiff-cli.exe diff -p . -u <unit> -o - <symbol>
```

Treat real code and data improvements as the signal. Formatting-only churn is not success.

### 5) Commit and update the PR

- Commit meaningful improvements on the current branch.
- Push the branch.
- If no PR exists yet and the branch has real progress, create one.
- If a PR already exists for the branch, update that PR instead of opening another one.
- Keep the PR description cumulative as the branch grows.

### 6) Repeat

Stay on the same branch and repeat the loop until the PR has a worthwhile set of high-quality improvements.

## Quality bar

- Build must pass with `ninja`.
- Progress must be real in report/objdiff output.
- Source should look like plausible original game code.
- Prefer definitions, types, and readable control flow over temporary score hacks.
- Never revert unrelated user changes.
- Never use destructive git cleanup unless explicitly requested.

## Quick checklist

Before pushing:

1. `ninja` passes.
2. `build/GQPE78/report.json` or objdiff shows real improvement.
3. The code is clean and follows project conventions.
4. The changes stay on the current long-lived PR branch.
5. No new one-off PR was created for this iteration.
