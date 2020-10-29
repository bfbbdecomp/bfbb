import os
import json
from pathlib import Path

from helpers import hashString

cachePath = "./.pragma/"


def fileCacheName(path):
    return hashString(str(path)).hexdigest() + ".json"


def getFileCache(path):
    name = fileCacheName(path)
    fileCache = {"name": "", "size": 0}
    if not os.path.exists(Path(cachePath + name)):
        return fileCache
    else:
        return json.loads(open(Path(cachePath + name)).read())


def saveFileCache(path, fileCache):
    name = fileCacheName(path)
    open(Path(cachePath + name), "w").write(json.dumps(fileCache, indent=4))


def createCacheFolder():
    Path(cachePath).mkdir(parents=True, exist_ok=True)