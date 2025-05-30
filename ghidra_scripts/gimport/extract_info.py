
from .dwarfone import DIEV1, DWARFInfoV1, read_dwarf_info
from typing import Dict, List, assert_never
import re
from .demangle import demangle
from .dwarf import DW_AT, DW_OP, DW_TAG, DW_FMT, DW_MOD, \
    DwarfLocation, DwarfAttribute, DwarfSubscriptDataItem
import pathlib
from .gtypes import GType, GFundType, GArrayType, GPointerType, GStructType, \
    GGlobal, GGlobalSubroutine, GGlobalSubroutineParameter, GGlobalVariable, \
    GMember, GSubroutineType
import os

GET_ORIGINAL_ADDRESS = True


REPO_ROOT = pathlib.Path(__file__).parent.parent.parent.resolve()


def get_die_name(die: DIEV1) -> str:
    if DW_AT.name in die.attributes:
        return die.attributes[DW_AT.name].value.decode("UTF-8")
    else:
        return None


def get_type_class(die: DIEV1):
    if die.tag == DW_TAG.structure_type or die.tag == DW_TAG.class_type:
        # Don't differentiate
        return "struct"
    elif die.tag == DW_TAG.union_type:
        return "union"
    elif die.tag == DW_TAG.enumeration_type:
        return "enum"
    else:
        assert False, f"Unknown type class {die.tag}"


def create_array_type(die: DIEV1) -> GArrayType:
    new_type = GArrayType()
    data = die.attributes[DW_AT.subscr_data].value
    index = 0

    while index < len(data):
        format = int.from_bytes(data[index:index+1], byteorder='big')
        index += 1

        item = DwarfSubscriptDataItem()
        if format == DW_FMT.ET:
            attribute = DwarfAttribute()
            index = attribute.parse(data, index)
            item.dwarf_type.parse(attribute)
        else:
            if format & 0x4:  # User-defined type
                item.dwarf_type.isFundamental = False
                item.dwarf_type.udOffset = int.from_bytes(data[index:index+4], byteorder='big')
                index += 4
            else:  # Fundamental type
                item.dwarf_type.isFundamental = True
                item.dwarf_type.fundType = int.from_bytes(data[index:index+2], byteorder='big')
                index += 2

            if format & 0x2:  # Location
                item.lowBound.isConstant = False
                block_len = int.from_bytes(data[index:index+2], byteorder='big')
                index += 2
                item.lowBound.location.parse(data[index:index+block_len], 0)
                index += block_len
            else:  # Constant
                item.lowBound.isConstant = True
                item.lowBound.constant = int.from_bytes(data[index:index+4], byteorder='big')
                index += 4

            if format & 0x1:  # Location
                item.highBound.isConstant = False
                block_len = int.from_bytes(data[index:index+2], byteorder='big')
                index += 2
                item.highBound.location.parse(data[index:index+block_len], 0)
                index += block_len
            else:  # Constant
                item.highBound.isConstant = True
                item.highBound.constant = int.from_bytes(data[index:index+4], byteorder='big')  # Assuming Elf32_Word is 4 bytes
                index += 4

        new_type.subscripts.append(item)

    return new_type


def read_symbol_addresses() -> Dict[str, int]:
    symbols = {}
    with open(REPO_ROOT / "config/GQPE78/symbols.txt") as f:
        lines = f.readlines()
        had_multiple = set()
        for line in lines:
            # Parse parts out of the line
            parts = re.match(r"([^=]+) = ([^:]+):0x([0-9a-fA-F]+);", line)
            sym_name = parts.group(1)
            sym_address = int(parts.group(3), base=16)

            # strip $nnn ending used for duplicate local symbols of the same name
            index = re.search(r"\$[0-9]+$", sym_name)
            if index:
                sym_name = sym_name[:index.start()]

            # Ignore addresses for duplicated symbols that
            # we don't have any way to disambiguate.
            if sym_name in symbols:
                del symbols[sym_name]
                had_multiple.add(sym_name)
            else:
                symbols[sym_name] = sym_address
    return symbols


class ExtractedInfo:
    def __init__(self):
        self.structs: List[GStructType] = []
        self.globals: List[GGlobal] = []
        self.labels: Dict[int, str] = dict()


class DwarfInfoParser:
    def __init__(self, di: DWARFInfoV1):
        self.di = di
        self.offset_to_type: Dict[int, GType] = dict()
        self.globals: List[GGlobal] = []
        self.symbols: Dict[str, int] = None
        self.type_by_name: Dict[str, GType] = dict()
        self.used_mangled_names = set()
        self.labels: Dict[int, str] = dict()

    def parse(self) -> ExtractedInfo:
        self.symbols = read_symbol_addresses()
        self.prepass_create_types()
        self.process_dies()
        self.postprocess_cleanup()

        result = ExtractedInfo()
        for offset, type in self.offset_to_type.items():
            if isinstance(type, GStructType):
                result.structs.append(type)
        result.globals.extend(self.globals)
        result.labels = self.labels.copy()
        return result

    def parse_type_from_die(self, die: DIEV1) -> GType:
        def modify(type: GType, modifiers: List[int]) -> GType:
            for modifier in modifiers:
                if modifier == DW_MOD.pointer_to or modifier == DW_MOD.reference_to:
                    type = GPointerType(type)
                elif modifier == DW_MOD.const or modifier == DW_MOD.volatile:
                    # No impact on Ghidra use case
                    pass
                else:
                    assert_never(f"Unknown modifier: {modifier}")
            return type

        if DW_AT.user_def_type in die.attributes:
            offset = die.attributes[DW_AT.user_def_type].value
            if type := self.offset_to_type.get(offset):
                return type
            else:
                return None
        elif DW_AT.fund_type in die.attributes:
            return GFundType(die.attributes[DW_AT.fund_type].value)
        elif DW_AT.mod_u_d_type in die.attributes:
            data = die.attributes[DW_AT.mod_u_d_type].value
            ud = int.from_bytes(data[-4:], byteorder='big')
            if type := self.offset_to_type.get(ud):
                return modify(type, data[:-4])
            else:
                return None
        elif DW_AT.mod_fund_type in die.attributes:
            data = die.attributes[DW_AT.mod_fund_type].value
            fund_type = int.from_bytes(data[-2:], byteorder='big')
            return modify(GFundType(fund_type), data[:-2])
        else:
            # Void return type of function -> Hits this case
            return None

    def parse_member(self, die: DIEV1) -> GMember:
        new_type = GMember(get_die_name(die))
        new_type.type = self.parse_type_from_die(die)
        if DW_AT.location in die.attributes:
            new_type.location.parse(die.attributes[DW_AT.location].value, 0)
        if DW_AT.bit_offset in die.attributes:
            new_type.bit_offset = die.attributes[DW_AT.bit_offset].value
        if DW_AT.bit_size in die.attributes:
            new_type.bit_size = die.attributes[DW_AT.bit_size].value

        return new_type

    def prepass_create_struct_type(self, die: DIEV1) -> GStructType:
        # Must be filled in later
        if name := get_die_name(die):
            struct = GStructType(name, get_type_class(die))
            return struct
        else:
            return GStructType("unnamed", get_type_class(die))

    def prepass_create_type(self, die: DIEV1):
        if die.tag == DW_TAG.structure_type or die.tag == DW_TAG.union_type or \
                die.tag == DW_TAG.enumeration_type or die.tag == DW_TAG.class_type:
            struct_type = self.prepass_create_struct_type(die)
            self.type_by_name[struct_type.name] = struct_type
            return struct_type
        elif die.tag == DW_TAG.array_type:
            return create_array_type(die)
        elif die.tag == DW_TAG.subroutine_type:
            # We can fill in all the contents later
            return GSubroutineType()
        else:
            return None

    def prepass_create_types(self):
        for cu in self.di.iter_CUs():
            for die in cu.iter_DIE_children(cu.get_top_DIE()):
                if type := self.prepass_create_type(die):
                    self.offset_to_type[die.offset] = type

    def fill_structure_members(self, die: DIEV1):
        structure: GStructType = self.offset_to_type[die.offset]
        structure.byte_size = die.attributes[DW_AT.byte_size].value

        for member_die in die.iter_children():
            member = self.parse_member(member_die)
            structure.fields.append(member)

    def resolve_subroutine_types(self, die: DIEV1):
        subroutine: GSubroutineType = self.offset_to_type[die.offset]
        subroutine.type = self.parse_type_from_die(die)

        for parameter_die in die.iter_children():
            subroutine.parameters.append(self.parse_type_from_die(parameter_die))

    def resolve_array_types(self, die: DIEV1):
        array: GArrayType = self.offset_to_type[die.offset]

        for subscript in array.subscripts:
            if subscript.dwarf_type.isFundamental:
                subscript.resolved_type = GFundType(subscript.dwarf_type.fundType)
            else:
                if subscript.dwarf_type.udOffset in self.offset_to_type:
                    subscript.resolved_type = self.offset_to_type[subscript.dwarf_type.udOffset]
                else:
                    assert_never(f"Missing type: {subscript.dwarf_type.udOffset}")
            for modifier in subscript.dwarf_type.modifiers:
                if modifier == DW_MOD.pointer_to or modifier == DW_MOD.reference_to:
                    subscript.resolved_type = GPointerType(subscript.resolved_type)

    def create_global_functions(self, die: DIEV1):
        global_subroutine = GGlobalSubroutine()
        global_subroutine.name = get_die_name(die)
        global_subroutine.mangled_name = die.attributes[DW_AT.mangled_name].value.decode("UTF-8")
        self.used_mangled_names.add(global_subroutine.mangled_name)

        if GET_ORIGINAL_ADDRESS:
            if global_subroutine.mangled_name in self.symbols:
                global_subroutine.address = self.symbols[global_subroutine.mangled_name]
            else:
                # No original address. New functions we added in our implementation.
                return
        else:
            global_subroutine.address = die.attributes[DW_AT.low_pc].value

        # DWARF handles void return type as not present but we want it
        # to be present as void type for Ghidra.
        global_subroutine.type = self.parse_type_from_die(die)
        if global_subroutine.type is None:
            global_subroutine.type = GFundType(20)

        # Parse parameters
        for child in die.iter_children():
            if child.tag == DW_TAG.formal_parameter:
                name = get_die_name(child)
                type = self.parse_type_from_die(child)
                loc = DwarfLocation()
                loc.parse(child.attributes[DW_AT.location].value, 0)
                global_subroutine.params.append(GGlobalSubroutineParameter(name, type, loc))
            elif child.tag == DW_TAG.local_variable:
                pass
            else:
                print("Unknown subroutine child tag:", child.offset, child.tag)
                exit(0)

        if result := demangle(global_subroutine.mangled_name, lambda ident: self.type_by_name.get(ident)):
            (name, param_types) = result
            global_subroutine.name = name
            same_count = len(param_types) == len(global_subroutine.params)
            for i, param_type in enumerate(param_types):
                if i < len(global_subroutine.params):
                    global_subroutine.params[i].type = param_type
                    # If we had a different count the names are useless
                    if not same_count:
                        global_subroutine.params[i].name = f"param{i+1}"
                else:
                    param = GGlobalSubroutineParameter(f"param{i+1}", param_type, DwarfLocation())
                    global_subroutine.params.append(param)

        self.globals.append(global_subroutine)

    def create_global_variables(self, die: DIEV1):
        global_variable = GGlobalVariable()
        global_variable.name = get_die_name(die)
        global_variable.type = self.parse_type_from_die(die)
        if DW_AT.mangled_name in die.attributes:
            global_variable.mangled_name = die.attributes[DW_AT.mangled_name].value.decode("UTF-8")
        else:
            global_variable.mangled_name = global_variable.name

        if GET_ORIGINAL_ADDRESS:
            if global_variable.mangled_name in self.symbols:
                global_variable.address = self.symbols[global_variable.mangled_name]
                self.globals.append(global_variable)
        else:
            loc = DwarfLocation()
            loc.parse(die.attributes[DW_AT.location].value, 0)
            assert loc.atoms[0].op == DW_OP.ADDR, "Non-address global"
            assert len(loc.atoms) == 1, "Multiple atoms"
            global_variable.address = loc.atoms[0].value
            self.globals.append(global_variable)

    def add_enum_members(self, die: DIEV1):
        enum_type: GStructType = self.offset_to_type[die.offset]
        enum_type.byte_size = die.attributes[DW_AT.byte_size].value
        data: List[int] = die.attributes[DW_AT.element_list].value
        index = 0
        while index < len(data):
            value = int.from_bytes(data[index:index+4], byteorder='big')
            index += 4
            name_start = index
            while data[index] != 0:
                index += 1
            name = bytes(data[name_start:index]).decode("UTF-8")
            index += 1
            enum_type.enum_values.append((name, value))

    def process_die(self, die: DIEV1):
        if die.tag == DW_TAG.structure_type or die.tag == DW_TAG.union_type or \
                die.tag == DW_TAG.class_type:
            self.fill_structure_members(die)
        elif die.tag == DW_TAG.subroutine_type:
            self.resolve_subroutine_types(die)
        elif die.tag == DW_TAG.array_type:
            self.resolve_array_types(die)
        elif die.tag == DW_TAG.global_subroutine or die.tag == DW_TAG.subroutine:
            self.create_global_functions(die)
        elif die.tag == DW_TAG.global_variable or die.tag == DW_TAG.local_variable:
            self.create_global_variables(die)
        elif die.tag == DW_TAG.enumeration_type:
            self.add_enum_members(die)
        else:
            assert_never(f"Other: {die.tag} {get_die_name(die)}")

    def process_dies(self):
        # Fill in types
        for cu in self.di.iter_CUs():
            for die in cu.iter_DIE_children(cu.get_top_DIE()):
                self.process_die(die)

    def postprocess_cleanup(self):
        # Add functions which we don't have in the executable
        # because we have not started decomping them yet.
        for mangled_name in self.symbols:
            if mangled_name not in self.used_mangled_names:
                result = demangle(mangled_name, lambda ident: self.type_by_name.get(ident))
                if result:
                    (name, types) = result
                    func = GGlobalSubroutine()
                    func.address = self.symbols[mangled_name]
                    func.mangled_name = mangled_name
                    func.name = name
                    func.type = None
                    for (i, param_type) in enumerate(types):
                        func.params.append(GGlobalSubroutineParameter(f"param{i+1}", param_type, DwarfLocation()))
                    self.globals.append(func)
                else:
                    # Just use it as a label
                    self.labels[self.symbols[mangled_name]] = mangled_name

        # TODO: Vtable cleanup

        # # debug output
        # with open("types.txt", "w") as f:
        #     for offset, type in self.offset_to_type.items():
        #         if isinstance(type, GStructType):
        #             f.write(f"{type.type_class} {type.name} [{hex(type.byte_size)}]/n")
        #             for field in type.fields:
        #                 f.write(f"  {field.type} {field.name} [{field.location}]\n")
        #             for (enum_name, enum_value) in type.enum_values:
        #                 f.write(f"  {enum_name} = {enum_value}\n")

        #     for glob in self.globals:
        #         f.write(f"@{hex(glob.address)}: {glob}\n")


def do_debug_build():
    # Note: The shenanigans in this function with ninja are to avoid leaving
    # someone stuck with a debug build which doen't match when that's not
    # something they're used to encountering.

    # Save the old ninja file to restore after making the debug build.
    ninja_file = REPO_ROOT / "build.ninja"
    ninja_save = ninja_file.with_suffix(".bak")
    had_ninja_file = False
    if ninja_file.exists():
        had_ninja_file = True
        if ninja_save.exists():
            os.remove(ninja_save)
        os.rename(ninja_file, ninja_save)

    import subprocess
    print("Creating a debug build to extract info from. This will take a moment.")
    subprocess.run(["python", "configure.py", "--debug"], cwd=REPO_ROOT, check=True, capture_output=True)
    subprocess.run(["ninja"], cwd=REPO_ROOT, check=False, capture_output=True)

    # Restore the old ninja file if they had one
    os.remove(ninja_file)
    if had_ninja_file:
        os.rename(ninja_save, ninja_file)


def extract_info() -> ExtractedInfo:
    executable_path = REPO_ROOT / "build/GQPE78/main.elf"
    if not executable_path.exists():
        print("No executable")
        do_debug_build()

    di = read_dwarf_info(open(executable_path, mode="rb"))
    if di is None:
        do_debug_build()
        di = read_dwarf_info(open(executable_path, mode="rb"))

    assert di, "Failed to read DWARF info from built executable"

    print("Extracting info from main.elf / symbols.txt")
    parser = DwarfInfoParser(di)
    return parser.parse()
