import re

pragmaRegex = r"(#pragma\sGLOBAL_ASM\((.*)\))"

def getPragmaMatches(fileText):
    matches = re.findall(pragmaRegex, fileText)
    return matches

# Arguments are processed outside of the regex to keep it simple
# and support any changes we may make in the future
def getPragmaArgs(argString):
    args = argString.split(",")
    args = map(str.strip, args)
    args = map(lambda x: x.replace("\"", ""), args)
    return list(args)

labelRegex = r".+:"

def getLabels(fileText):
    matches = re.findall(labelRegex, fileText)
    return matches

def getAsmFunctions(fileText):
    matches = getLabels(fileText)
    return list(filter(lambda x: "lbl_" not in x, matches))

def getAsmFunctionBlock(fileText, label):
    data = []
    found = False
    for line in fileText.splitlines():
        if label in line:
            found = True
            continue
        if found:
            data.append(line.strip())
            if len(line) == 0:
                break
    return data

def filterBlockCode(block):
    return list(filter(lambda x: "/*" in x, block))

def codeLineToBytes(line):
    d = line.split()
    b = "0x" + "".join(d[3:7])
    return b

def blockToBytes(block):
    code = filterBlockCode(block)
    return list(map(codeLineToBytes, code))

def bytesToString(byteLine):
    return "opword" + " " + byteLine

funcTemplate = """extern "C" {
asm void {name}() {
nofralloc
{data}
}}"""

def writeCode(source, funcName, codeBytes):
    source += "\n"
    t = funcTemplate.replace("{name}", funcName)
    bs = list(map(bytesToString, codeBytes))
    t = t.replace("{data}", "\n".join(bs))
    source += t + "\n"

    return source

def error(text):
    print("Error during #pragma processing:")
    print(text)
    exit(69)