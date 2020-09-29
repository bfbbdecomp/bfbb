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

    for match in matches:

        replace = match[0]
        args = getPragmaArgs(match[1])
        asmPath = Path(args[0])
        asmFileText = open(asmPath).read()

        funcToImport = args[1]
        funcs = getAsmFunctions(asmFileText)
        # check to see if function argument given is in the file
        if funcToImport + ":" not in funcs:
            error(funcToImport + " is undefined in " + str(asmPath))
        
        asmBlock = getAsmFunctionBlock(asmFileText, funcToImport + ":")
        codeBytes = blockToBytes(asmBlock)
        newSource = ""
        newSource = writeCode(newSource, funcToImport, codeBytes)
        cpText = cpText.replace(replace, newSource)

    open(cpPath, "w").write(cpText)

run()