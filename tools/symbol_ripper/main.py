import sys
from pathlib import Path
import re

INCLUDE_INSTRUCTION_BYTES = False

# see tools/postprocess.py for info about substitutions done in the mangled names
substitutions = (
    ('<',  '_esc__0_'),
    ('>',  '_esc__1_'),
    ('@',  '_esc__2_'),
    ('\\', '_esc__3_'),
    (',',  '_esc__4_'),
    ('-',  '_esc__5_'),
    ('$',  '_esc__6_')
)

def decodeformat(symbol):
    for sub in substitutions:
        symbol = symbol.replace(sub[1], sub[0])

    return symbol


def cpp_get_qualified(text):
	if text.startswith("Q"):
		# multiple qualified name
		count = int(text[1])
		text = text[2:]
		namespaces = []
		for _ in range(count):
			length = int(text[0])
			if text[1].isnumeric():
				length = length * 10 + int(text[1])
				namespaces.append(text[2:(length + 2)])
				text = text[(length + 2):]
			else:
				namespaces.append(text[1:(length + 1)])
				text = text[(length + 1):]
		return text, namespaces
	elif text[0].isnumeric():
		# single qualified name
		length = int(text[0])
		if text[1].isnumeric():
			length = length * 10 + int(text[1])
			return text[(length + 2):], [text[2:(length + 2)]]
		else:
			return text[(length + 1):], [text[1:(length + 1)]]
	else:
		# not qualified name
		return text, []

def cpp_get_base_type(text, unsigned):
	char = text[0]
	rest = text[1:]
	if char == 'x':
		return rest, "uint64" if unsigned else "int64"
	elif char == 'i':
		return rest, "uint32" if unsigned else "int32"
	elif char == 's':
		return rest, "uint16" if unsigned else "int16"
	elif char == 'c':
		return rest, "uint8" if unsigned else "int8"
	elif char == 'l':
		return rest, "ulong32" if unsigned else "long32"
	elif char == 'b':
		return rest, "bool"
	elif char == 'f':
		return rest, "float32"
	elif char == 'd':
		return rest, "float64"
	elif char == 'v':
		return rest, "void"
	elif char == 'Q' or char.isnumeric():
		rest, namespaces = cpp_get_qualified(text)
		return rest, "::".join(namespaces)
	else:
		return rest, ""

def cpp_func_from_symbol(symbol):
	# reverse escaping for correct parsing
	symbol = decodeformat(symbol)
	
	# Special symbols start with __
	if symbol.startswith("__"):
		return symbol + "(?)"

	underscores = symbol.find("__")

	# special runtime symbol
	if underscores == -1:
		return symbol + "(?)"

	base_symbol_name = symbol[0:underscores]
	remaining = symbol[(underscores + 2):]

	# Initial qualification of type
	remaining, namespaces = cpp_get_qualified(remaining)
	for namespace in reversed(namespaces):
		base_symbol_name = namespace + "::" + base_symbol_name

	# Constness of member functions
	constCv = remaining[0] == 'C'
	if constCv:
		remaining = remaining[1:]
	
	# Cut off the F
	if len(remaining) > 0 and remaining[0] == "F":
		remaining = remaining[1:]

	# Arguments
	arguments = []
	while len(remaining) > 0:
		const = 0
		pointer = 0
		reference = 0
		unsigned = 0
		while "PRCU".find(remaining[0]) != -1:
			if remaining[0] == "P":
				pointer += 1
			elif remaining[0] == "C":
				const += 1
			elif remaining[0] == "R":
				reference += 1
			elif remaining[0] == "U":
				unsigned += 1
			remaining = remaining[1:]

		remaining, base_type = cpp_get_base_type(remaining, unsigned > 0)
		if base_type != "void":
			if const > 0:
				base_type = "const " + base_type
			base_type = base_type + ("*" * pointer) + ("&" * reference)
			arguments.append(base_type)

	cpp_result = "%s(%s)" % (base_symbol_name, ", ".join(arguments))
	if constCv:
		cpp_result = cpp_result + " const"
	return cpp_result

def locate_symbol(path, symbol):
	for file in path.glob("*.*"):
		if file.read_text().find(symbol) != -1:
			return file.stem
	return None

def find_line_with_symbol(lines, symbol):
	for i in range(len(lines)):
		if lines[i].find(symbol) != -1:
			return i
	sys.exit("Error: Symbol missing from file [internal error]")

def getlines(path):
	with path.open("r") as io:
		return list(io)

def writelines(path, lines):
	with path.open("w") as io:
		io.writelines(lines)

def find_assembly_block_end(lines, start_line, symbol):
	for i in range(start_line, len(lines)):
		if lines[i] == "\n":
			return lines[start_line:i]
	sys.exit("Error: Couldn't find end of assembly for %s [internal error]" % symbol)

def find_assembly_block(lines, symbol):
	for i in range(len(lines)):
		if lines[i].startswith(symbol):
			return find_assembly_block_end(lines, i + 1, symbol)
	sys.exit("Error: Symbol missing from .s file [internal error]")

def is_prelude_or_postlude(block, i):
	line = block[i]
	if line.find("r1 ") != -1 or line.find("r1)") != -1 or line.find("r1,") != -1:
		return True
	if line.find("mflr") != -1 or line.find("mtlr") != -1:
		return True
	if line.find("blr") != -1 and i == len(block) - 1:
		return True
	return False

def assembly_strip(block, iterator):
	lines_to_remove = []
	did_not_remove_running = 0
	for i in iterator:
		if is_prelude_or_postlude(block, i):
			lines_to_remove.append(i)
			did_not_remove_running = 0
		else:
			did_not_remove_running += 1
			if did_not_remove_running > 1:
				break
	for index in sorted(lines_to_remove, reverse=True):
		del block[index]

def modify_instruction(st):
	space = st.find(" ")
	instr = st[:space]
	args = [x.strip() for x in st[(space + 1):].split(",")]
	if instr == "fmr" or instr == "mr":
		return "%s = %s;" % tuple(args)
	elif instr == "addi":
		return "%s = %s + %s;" % tuple(args)
	elif instr == "lis":
		return "%s = %s; // [int16]" % tuple(args)
	elif instr == "li":
		return "%s = %s;" % tuple(args)
	elif instr == "lwz":
		return "%s = %s;" % tuple(args)
	elif instr == "lsz":
		return "%s = %s; // [int16]" % tuple(args)
	elif instr == "lbz":
		return "%s = %s; // [int8]" % tuple(args)

	elif instr == "lfs":
		return "%s = %s; // [float32]" % tuple(args)
	elif instr == "lfd":
		return "%s = %s; // [float64]" % tuple(args)
	elif instr == "stfs":
		return "%s = %s; // [float32]" % (args[1], args[0])
	elif instr == "stfd":
		return "%s = %s; // [float64]" % (args[1], args[0])

	elif instr == "fadds" or instr == "fadd":
		return "%s = %s + %s; // [float32]" % tuple(args)
	elif instr == "fmuls" or instr == "fmul":
		return "%s = %s * %s; // [float32]" % tuple(args)
	elif instr == "fdivs" or instr == "fdiv":
		return "%s = %s / %s; // [float32]" % tuple(args)
	elif instr == "fmadds" or instr == "fmadd":
		return "%s = %s * %s + %s; // [float32]" % tuple(args)

	elif instr == "stw":
		return "%s = %s;" % (args[1], args[0])
	elif instr == "sts":
		return "%s = %s; // [int16]" % (args[1], args[0])
	elif instr == "stb":
		return "%s = %s; // [int8]" % (args[1], args[0])

	elif instr == "bl":
		return "%s; // [%s]" % (cpp_func_from_symbol(args[0]), args[0])

	else:
		return st

def assembly_clean_comments(block):
	for i in range(len(block)):
		line = block[i]
		if line.startswith("/*"):
			assembly = modify_instruction(line[37:-1])
			if INCLUDE_INSTRUCTION_BYTES:
				instr = line[22:24] + line[25:27] + line[28:30] + line[31:33]
				block[i] = "\\*" + instr + "*\\    " + assembly + "\n"
			else:
				block[i] = "    " + assembly + "\n"
		elif INCLUDE_INSTRUCTION_BYTES:
			block[i] = "            " + line

def assembly_strip_sda_base(block):
	for i in range(len(block)):
		block[i] = block[i].replace("-_SDA_BASE_(r13)", "")
		block[i] = block[i].replace("-_SDA2_BASE_(r2)", "")

def preprocess_assembly_block(block):
	assembly_strip(block, range(len(block)))
	assembly_strip(block, reversed(range(len(block))))
	assembly_clean_comments(block)
	assembly_strip_sda_base(block)

def get_byte_length(block):
	byte_count = 0
	for line in block:
		if line.startswith("/*"):
			byte_count += 4
	return byte_count

def rip(subsys_name, symbol):
	subsys_srcs = Path("src") / subsys_name
	subsys_asms = Path("asm") / subsys_name
	file_stem = locate_symbol(subsys_srcs, symbol)

	# See if we have run the tool on the .cpp file symbol already
	cpp_path = subsys_srcs / (file_stem + ".cpp")
	cpp_lines = getlines(cpp_path)
	pragma_line = find_line_with_symbol(cpp_lines, symbol)
	func_comment_line = pragma_line - 1
	while cpp_lines[func_comment_line].endswith("\\\n"):
		func_comment_line -= 1
	if not cpp_lines[func_comment_line].startswith("// func_"):
		sys.exit("Error: Symbol %s has already been ripped!" % symbol)

	# Get the assembly lines from the .s file
	s_path = subsys_asms / (file_stem + ".s")
	s_lines = getlines(s_path)
	s_block = find_assembly_block(s_lines, symbol)

	# Get the length of the assembly block
	s_length_bytes = get_byte_length(s_block)

	# Turn the assembly block into a better form for reverse engineering
	preprocess_assembly_block(s_block)

	# Turn the mangled name into a C++ name
	cpp_func_name = "void " + cpp_func_from_symbol(symbol)

	# Output C++ code
	cpp_lines.insert(func_comment_line + 1, "#if 0\n")
	pragma_line += 2
	cpp_lines.insert(pragma_line, "#else\n")
	pragma_line += 1
	cpp_lines.insert(pragma_line, "%s\n" % cpp_func_name)
	pragma_line += 1
	cpp_lines.insert(pragma_line, "{\n")
	pragma_line += 1
	cpp_lines.insert(pragma_line, "// Size=%d\n" % s_length_bytes)
	pragma_line += 1
	for line in s_block:
		cpp_lines.insert(pragma_line, line)
		pragma_line += 1
	cpp_lines.insert(pragma_line, "}\n")
	pragma_line += 1
	cpp_lines.insert(pragma_line, "#endif\n")
	writelines(cpp_path, cpp_lines)

	

def check_is_symbol_name(name):
	if name.find(".") != -1:
		sys.exit("Error: That looks like a file, not a symbol.")
	if name.find("/") != -1 or name.find("\\") != -1:
		sys.exit("Error: That looks like a path, not a symbol.")

def get_subsys_name(name):
	if locate_symbol(Path("src/Game"), name):
		return Path("Game")
	elif locate_symbol(Path("src/Core/p2"), name):
		return Path("Core/p2")
	elif locate_symbol(Path("src/Core/x"), name):
		return Path("Core/x")
	else:
		sys.exit("I don't know what to do with %s!" % name)

if len(sys.argv) < 2:
	sys.exit("Error: No symbol name given.")

def main():
	symbol_name = sys.argv[1]
	check_is_symbol_name(symbol_name)
	subsys_name = get_subsys_name(symbol_name)
	rip(subsys_name, symbol_name)

if __name__ == '__main__':
	main()