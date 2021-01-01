
import sys
import re

def replaceNums(match):
	if match[2].find("x") == -1:
		num = int(match[2])
		if num > 9:
			return match[1] + "0x%x" % num
		else:
			return match[0]
	else:
		return match[0]

allLabels = {}

def maybeAddLabel(targets, match):
	if match[1] in targets:
		return "lbl_" + match[1] + ":\n" + match[0]
	else:
		return match[0]

def addTargetAndProcess(targets, match):
	targets.add(match[3])
	return match[1] + "lbl_" + match[3]

def createLabelsForFunction(source):
	targets = set()
	source = re.sub(r"(b[a-z]*\s*)(\*[^;]*; 0x([0-9A-F]+))",
		lambda match: addTargetAndProcess(targets, match), source)
	source = re.sub(r"([0-9A-F]{8}): ",
		lambda match: maybeAddLabel(targets, match), source)
	return source

def translateFunctionName(source):
	return re.sub(r'Hunk:\tKind=HUNK_GLOBAL_CODE\s*Name="(.*)".*', r".global \1\n\1:", source)

def changeAddressFormat(source):
	return re.sub(r"([0-9A-F]{8}): ([0-9A-F]{2})([0-9A-F]{2})([0-9A-F]{2})([0-9A-F]{2})  ",
		r"/* \1 \1  \2 \3 \4 \5 */\t", source)

def doStuffForFunction(match):
	source = match[0]
	source = translateFunctionName(source)
	source = createLabelsForFunction(source)
	return source

def createLabels(source):
	return re.sub(r"Hunk:\tKind=(.+\r?\n)+(?=(\r?\n)?)", doStuffForFunction, source, re.MULTILINE)

def replaceInInstruction(match):
	fixedNums = match[1] + re.sub(r"([,+])([-\d][\dxX]*)", replaceNums, match[2])
	fixedNums = re.sub(r"(  [a-z]+) (\s*)", r"\1 ", fixedNums)
	fixedNums = re.sub("rsp", "r1", re.sub(",", ", ", fixedNums))
	fixedNums = re.sub(r" fp([0-9]+)", r" f\1", fixedNums)
	fixedNums = re.sub(r"(b[a-z]*) \*([\+\-][x0-9A-F]+).*0x([0-9A-F]{8})", r"\1 \3 [\2]", fixedNums)
	return fixedNums

file = sys.argv[1]

inFile = open(file)
content = inFile.read()
inFile.close()

result = content
result = createLabels(result)
result = re.sub(r"([\dA-F]{8}: [\dA-F]{8})(.*)", replaceInInstruction, result)
result = changeAddressFormat(result)

outFile = open(file, "w")
outFile.write(result)
outFile.close()