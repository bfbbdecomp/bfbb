import argparse
from pathlib import Path
from cache import createCacheFolder, getFileCache, saveFileCache
from helpers import *

info = """globalasm.py:

Inserts assembly directly into CPP source.
Specified by #pragma GLOBAL_ASM(assemblyFilePath, functionName)
"""

parser = argparse.ArgumentParser(description=info)
parser.add_argument("file", help="The source file to process")
parser.add_argument("outfile", help="The file to output to")
parser.add_argument("-s",
                    "--scope",
                    help="Set function scope equal to scope in assembly",
                    action="store_true")


def run():

    args = parser.parse_args()
    sourcePath = Path(args.file)
    sourceText = open(sourcePath).read()
    outPath = Path(args.outfile)
    matches = getPragmaMatches(sourceText)

    # Create path to cache if not exists
    createCacheFolder()
    fileCache = getFileCache(sourcePath)

    # in-memory dictionary to optimize the script
    # will hold a bunch of info about each
    # assembly file that is referenced in pragmas
    asmFileDictionary = {}

    # this first loop is to pre-load data into the dict
    # to avoid opening/processing the file at each pragma
    for match in matches:

        pragmaArgs = getPragmaArgs(match[1])
        asmPath = Path(pragmaArgs[0])
        func = pragmaArgs[1]
        key = str(asmPath)

        if key not in asmFileDictionary:
            fileText = open(asmPath).read()
            funcs = set(getAsmFunctions(fileText))
            asmFileDictionary[key] = {"text": fileText, "funcs": funcs}

        # check to see if the requested function exists
        # before we waste time doing anything
        if func + ":" not in asmFileDictionary[key]["funcs"]:
            error("function: '" + func + "' not in " + key)

    # Now let's loop through each pragma and substitute it
    for match in matches:

        replacePragmaText = match[0]
        pragmaArgs = getPragmaArgs(match[1])

        funcHash = emptyHash()
        funcHash.update(pragmaArgs[0].encode())
        funcHash.update(pragmaArgs[1].encode())
        hashKey = funcHash.hexdigest()

        if hashKey in fileCache:
            sourceText = sourceText.replace(replacePragmaText,
                                            fileCache[hashKey])
            continue

        asmPath = Path(pragmaArgs[0])
        key = str(asmPath)
        asmFileText = asmFileDictionary[key]["text"]

        funcToImport = pragmaArgs[1]
        asmBlock = getAsmFunctionBlock(asmFileText, funcToImport + ":")
        codeBytes = blockToBytes(asmBlock)

        isGlobal = True
        if args.scope and ".global " + funcToImport not in asmFileText:
            isGlobal = False

        newSource = ""
        newSource = writeCode(newSource, funcToImport, codeBytes, isGlobal)
        sourceText = sourceText.replace(replacePragmaText, newSource)

        # update our file cache to avoid re-processing
        # the same function on every build
        fileCache[hashKey] = newSource

    open(outPath, "w").write(sourceText)

    if fileCache["size"] != len(fileCache):
        fileCache["size"] = len(fileCache)
        fileCache["name"] = str(sourcePath)
        saveFileCache(sourcePath, fileCache)


run()
