
from typing import List


class DW_FT:
    bool = 0
    char = 1
    S8 = 2
    U8 = 3
    S16 = 5
    U16 = 6
    S32 = 7
    U32 = 9
    SLong = 10
    ULong = 12
    pointer = 13
    F32 = 14
    F64 = 15
    void = 20
    S64 = 32776


class DW_FORM:
    ADDR = 0x1
    REF = 0x2
    BLOCK2 = 0x3
    BLOCK4 = 0x4
    DATA2 = 0x5
    DATA4 = 0x6
    DATA8 = 0x7
    STRING = 0x8


class DW_AT:
    bit_offset = "DW_AT_bit_offset"
    bit_size = "DW_AT_bit_size"
    byte_size = "DW_AT_byte_size"
    common_reference = "DW_AT_common_reference"
    comp_dir = "DW_AT_comp_dir"
    const_value = "DW_AT_const_value"
    containing_type = "DW_AT_containing_type"
    default_value = "DW_AT_default_value"
    discr = "DW_AT_discr"
    discr_value = "DW_AT_discr_value"
    element_list = "DW_AT_element_list"
    friends = "DW_AT_friends"
    fund_type = "DW_AT_fund_type"
    high_pc = "DW_AT_high_pc"
    inline = "DW_AT_inline"
    is_optional = "DW_AT_is_optional"
    language = "DW_AT_language"
    location = "DW_AT_location"
    low_pc = "DW_AT_low_pc"
    lower_bound = "DW_AT_lower_bound"
    member = "DW_AT_member"
    mod_fund_type = "DW_AT_mod_fund_type"
    mod_u_d_type = "DW_AT_mod_u_d_type"
    name = "DW_AT_name"
    ordering = "DW_AT_ordering"
    private = "DW_AT_private"
    producer = "DW_AT_producer"
    program = "DW_AT_program"
    protected = "DW_AT_protected"
    prototyped = "DW_AT_prototyped"
    public = "DW_AT_public"
    pure_virtual = "DW_AT_pure_virtual"
    return_addr = "DW_AT_return_addr"
    sibling = "DW_AT_sibling"
    specification = "DW_AT_specification"
    start_scope = "DW_AT_start_scope"
    stride_size = "DW_AT_stride_size"
    string_length = "DW_AT_string_length"
    stmt_list = "DW_AT_stmt_list"
    subscr_data = "DW_AT_subscr_data"
    upper_bound = "DW_AT_upper_bound"
    user_def_type = "DW_AT_user_def_type"
    virtual = "DW_AT_virtual"

    mangled_name = "DW_AT_user_0x200"
    global_ref = "DW_AT_user_0x202"

    DW_AT_fund_type = (0x0050 | DW_FORM.DATA2)
    DW_AT_mod_fund_type = (0x0060 | DW_FORM.BLOCK2)
    DW_AT_user_def_type = (0x0070 | DW_FORM.REF)
    DW_AT_mod_u_d_type = (0x0080 | DW_FORM.BLOCK2)


class DW_TAG:
    array_type = "DW_TAG_array_type"
    class_type = "DW_TAG_class_type"
    common_block = "DW_TAG_common_block"
    common_inclusion = "DW_TAG_common_inclusion"
    compile_unit = "DW_TAG_compile_unit"
    entry_point = "DW_TAG_entry_point"
    enumeration_type = "DW_TAG_enumeration_type"
    formal_parameter = "DW_TAG_formal_parameter"
    global_subroutine = "DW_TAG_global_subroutine"
    global_variable = "DW_TAG_global_variable"
    inheritance = "DW_TAG_inheritance"
    inlined_subroutine = "DW_TAG_inlined_subroutine"
    label = "DW_TAG_label"
    lexical_block = "DW_TAG_lexical_block"
    local_variable = "DW_TAG_local_variable"
    member = "DW_TAG_member"
    module = "DW_TAG_module"
    padding = "DW_TAG_padding"
    pointer_type = "DW_TAG_pointer_type"
    ptr_to_member_type = "DW_TAG_ptr_to_member_type"
    reference_type = "DW_TAG_reference_type"
    set_type = "DW_TAG_set_type"
    source_file = "DW_TAG_source_file"
    string_type = "DW_TAG_string_type"
    structure_type = "DW_TAG_structure_type"
    subrange_type = "DW_TAG_subrange_type"
    subroutine = "DW_TAG_subroutine"
    subroutine_type = "DW_TAG_subroutine_type"
    typedef = "DW_TAG_typedef"
    union_type = "DW_TAG_union_type"
    unspecified_parameters = "DW_TAG_unspecified_parameters"
    variant = "DW_TAG_variant"
    with_stmt = "DW_TAG_with_stmt"


class DW_FMT:
    ET = 0x8


class DW_OP:
    REG = 0x01
    BASEREG = 0x02
    ADDR = 0x03
    CONST = 0x04
    DEREF2 = 0x05
    DEREF = 0x06
    DEREF4 = 0x06
    ADD = 0x07
    lo_user = 0xe0
    hi_user = 0xff


class DW_MOD:
    pointer_to = 0x01
    reference_to = 0x02
    const = 0x03
    volatile = 0x04
    lo_user = 0x80
    hi_user = 0xff


class DwarfAttribute:
    def __init__(self):
        self.name: int = 0
        self.value: int | List[int] = None

    def parse(self, data: List[int], index: int) -> int:
        self.name = int.from_bytes(data[index:index+2], byteorder='big')
        index += 2
        at_form = self.name & 0xF
        if at_form == DW_FORM.DATA2:
            self.value = int.from_bytes(data[index:index+2], byteorder='big')
            index += 2
        elif at_form == DW_FORM.REF:
            self.value = int.from_bytes(data[index:index+4], byteorder='big')
            index += 4
        elif at_form == DW_FORM.BLOCK2:
            block_len = int.from_bytes(data[index:index+2], byteorder='big')
            index += 2
            self.value = data[index:index+block_len]
            index += block_len
        else:
            print("Unhandled form:", at_form)
            exit(0)
        return index


class DwarfLocationAtom:
    def __init__(self, op, value):
        self.op = op
        self.value = value


class DwarfLocation:
    def __init__(self):
        self.atoms: List[DwarfLocationAtom] = []

    def parse(self, data: List[int], index: int) -> int:
        while index < len(data):
            op = data[index]
            index += 1
            value = int.from_bytes(data[index:index+4], byteorder='big')
            self.atoms.append(DwarfLocationAtom(op, value))
            index += 4

    def __str__(self):
        parts = []
        for atom in self.atoms:
            if atom.op == DW_OP.REG:
                parts.append(f"REG({atom.value})")
            elif atom.op == DW_OP.BASEREG:
                parts.append(f"BASEREG({atom.value})")
            elif atom.op == DW_OP.ADDR:
                parts.append(f"ADDR({atom.value})")
            elif atom.op == DW_OP.CONST:
                parts.append(f"CONST({atom.value})")
            elif atom.op == DW_OP.DEREF2:
                parts.append("DEREF2")
            elif atom.op == DW_OP.DEREF4:
                parts.append("DEREF4")
            elif atom.op == DW_OP.ADD:
                parts.append("ADD")
            else:
                parts.append(f"UNKNOWN({atom.op})")
        return f"Loc({",".join(parts)})"


class DwarfSubscriptDataBound:
    def __init__(self):
        self.isConstant = False
        self.constant = 0
        self.location: DwarfLocation = None

    def __str__(self):
        if self.isConstant:
            return f"{self.constant}"
        else:
            return f"{self.location}"


class DwarfType:
    def __init__(self):
        self.isFundamental = False
        self.fundType = 0
        self.udOffset = 0
        self.modifiers = []

    def parse(self, attr: DwarfAttribute):
        assert attr.name in [
            DW_AT.DW_AT_fund_type,
            DW_AT.DW_AT_user_def_type,
            DW_AT.DW_AT_mod_fund_type,
            DW_AT.DW_AT_mod_u_d_type
        ], "Unexpected attribute name"

        if attr.name == DW_AT.DW_AT_fund_type:
            self.isFundamental = True
            self.fundType = attr.value

        elif attr.name == DW_AT.DW_AT_user_def_type:
            self.isFundamental = False
            self.udOffset = attr.value

        elif attr.name == DW_AT.DW_AT_mod_fund_type:
            self.isFundamental = True
            assert isinstance(attr.value, list) and len(attr.value) >= 2, "Invalid block length for mod_fund_type"

            data = attr.value
            type_data = data[:-2]

            for modifier in type_data:
                self.modifiers.append(modifier)

            self.fundType = int.from_bytes(data[-2:], byteorder='big')

        elif attr.name == DW_AT.DW_AT_mod_u_d_type:
            self.isFundamental = False
            assert isinstance(attr.value, list) and len(attr.value) >= 4, "Invalid block length for mod_u_d_type"

            data = attr.value
            type_data = data[:-4]

            for modifier in type_data:
                self.modifiers.append(modifier)

            self.udOffset = int.from_bytes(data[-4:], byteorder='big')


class DwarfSubscriptDataItem:
    def __init__(self):
        self.resolved_type = None
        self.dwarf_type = DwarfType()
        self.lowBound = DwarfSubscriptDataBound()
        self.highBound = DwarfSubscriptDataBound()

    def __str__(self):
        return f"SubscriptDataItem({self.type}[{self.lowBound}-{self.highBound}])"


def DW_FT_to_string(type):
    if type == DW_FT.bool:
        return "bool"
    elif type == DW_FT.char:
        # char in spec, alias to S8 in our codebase
        return "S8"
    elif type == DW_FT.S8:
        return "S8"
    elif type == DW_FT.U8:
        return "U8"
    elif type == DW_FT.S16:
        return "S16"
    elif type == DW_FT.U16:
        return "U16"
    elif type == DW_FT.S32:
        return "S32"
    elif type == DW_FT.U32:
        return "U32"
    elif type == DW_FT.SLong:
        return "SLong"
    elif type == DW_FT.ULong:
        return "ULong"
    elif type == DW_FT.pointer:
        return "void*"
    elif type == DW_FT.F32:
        return "F32"
    elif type == DW_FT.F64:
        return "F64"
    elif type == DW_FT.void:
        return "void"
    elif type == DW_FT.S64:
        return "S64"

    return None
