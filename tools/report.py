from pathlib import Path
import shutil
import subprocess
from pygit2 import GIT_CHECKOUT_FORCE, Repository

repo = Repository(".")
branch = repo.lookup_branch("main")
ref = repo.lookup_reference(branch.name)
repo.checkout(ref, strategy=GIT_CHECKOUT_FORCE)

for commit in list(repo.walk(repo.head.target)):
    id = str(commit.id)
    shutil.rmtree("./build", ignore_errors=True)
    filename = f"./artifacts/{id}.json"
    if (not Path(filename).is_file()):
        repo.checkout_tree(commit, strategy=GIT_CHECKOUT_FORCE)
        subprocess.run("ninja all_source", shell=True)
        subprocess.run(f"./objdiff-cli report generate -o {filename}", shell=True)
    else:
        print("skipping " + filename)
    print(commit.id)
