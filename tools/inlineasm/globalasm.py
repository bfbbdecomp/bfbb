import argparse
from pathlib import Path
from helpers import *
import os

info = """globalasm.py:

Inserts assembly directly into CPP source.
Specified by #pragma GLOBAL_ASM(assemblyFilePath, functionName)
"""

parser = argparse.ArgumentParser(description=info)
parser.add_argument("cpFile", help="The .cp file to process")

def run():

    args = parser.parse_args()
    cpPath = Path(args.cpFile)
    cpText = open(cpPath).read()
    matches = getPragmaMatches(cpText)

    if len(matches) == 0:
        return
    
    # in-memory dictionary to optimize the script
    # will hold a bunch of info about each
    # assembly file that is referenced in pragmas
    asmFileDictionary = {}

    # this first loop is to pre-load data into the dict
    # to avoid opening/processing the file at each pragma
    for match in matches:

        args = getPragmaArgs(match[1])
        asmPath = Path(args[0])
        func = args[1]
        key = str(asmPath)

        if key not in asmFileDictionary:
            fileText = open(asmPath).read()
            funcs = set(getAsmFunctions(fileText))
            asmFileDictionary[key] = {
                "text": fileText,
                "funcs": funcs
            }

        # check to see if the requested function exists
        # before we waste time doing anything
        if func + ":" not in asmFileDictionary[key]["funcs"]:
            error(func + " not in " + key)

    # Now let's loop through each pragma and substitute it
    for match in matches:

        replacePragmaText = match[0]
        args = getPragmaArgs(match[1])
        asmPath = Path(args[0])
        key = str(asmPath)
        asmFileText = asmFileDictionary[key]["text"]

        funcToImport = args[1]
        asmBlock = getAsmFunctionBlock(asmFileText, funcToImport + ":")
        codeBytes = blockToBytes(asmBlock)
        newSource = ""
        newSource = writeCode(newSource, funcToImport, codeBytes)
        cpText = cpText.replace(replacePragmaText, newSource)

    open(cpPath, "w").write(cpText)

run()