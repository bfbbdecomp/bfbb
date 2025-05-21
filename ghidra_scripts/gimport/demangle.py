from typing import Tuple, List
import re
from .dwarf import DW_FT, DwarfSubscriptDataItem
from .gtypes import GType, GPointerType, GFundType, GArrayType


SPECIAL_NAME_TO_OPERATOR = {
    "__as": "=",
    "__ml": "*",
    "__amu": "*=",
    "__mi": "-",
    "__ami": "-=",
    "__dv": "/",
    "__adv": "/=",
    "__pl": "+",
    "__apl": "+=",
    "__nw": "new",
    "__dl": "delete",
    "__aor": "|=",
    "__or": "|",
    "__eq": "==",
    "__ne": "!=",
    "__vc": "<<",
    "__mm": "--",
    "__pp": "++",
    "__rf": "*",
    "__cl": "()",
}


SPECIAL_IGNORE = {
    # Things containing a "T#", don't know what that means
    "setevenodd__FUlPUlUlUlP5BLITST1": True,
    "YUV_blit__FPvUlUlUlT0UlUlUlUlUlUlUlT0P5BLITS": True,
    "YUV_blit_mask__FPvUlUlUlPUcUlT0UlUlUlUlUlUlUlT0P5BLITS": True,

    # Can't disambiguate with normal mangling
    "__end__catch": True,
}


def demangle(mangled_name: str, resolve_ud) -> Tuple[str, List[GType]]:
    # Cut off name
    index = mangled_name.find("__", 1)  # 1 instead of 0 to skip __ in names like __ct
    if index == -1:
        # Not a mangled function
        return None
    # Don't know how to demangle some things
    if mangled_name in SPECIAL_IGNORE:
        return None
    name = mangled_name[:index]  # Name part only
    without_name = mangled_name[index+2:]  # Cut off name

    # Cut off namespacing bits
    namespaces = []
    while len(without_name) > 0 and (without_name[0] == "Q" or str.isdigit(without_name[0])):
        if without_name[0] == "Q":
            qualification_count = int(without_name[1])
            without_name = without_name[2:]
            for i in range(qualification_count):
                (namespace_len_text, rest) = re.match(r"^(\d+)(.*)", without_name).groups()
                namespace_len = int(namespace_len_text)
                namespaces.append(rest[:namespace_len])
                without_name = rest[namespace_len:]
        else:
            (len_str, rest) = re.match(r"^(\d+)(.*)", without_name).groups()
            namespace_len = int(len_str)
            namespaces.append(rest[:namespace_len])
            without_name = rest[namespace_len:]
    this_type = resolve_ud(namespaces[-1]) if namespaces else None

    # Namespaced global variable, not a function
    if len(without_name) == 0:
        return None

    # Handle special names
    if name.startswith("__"):
        if name in SPECIAL_NAME_TO_OPERATOR:
            name = f"operator{SPECIAL_NAME_TO_OPERATOR[name]}"
        elif name == "__ct":
            name = namespaces[-1]
        elif name == "__dt":
            name = f"~{namespaces[-1]}"

    # Add namespaces to name
    name = "::".join(namespaces + [name])

    # C -> Const method.
    is_const = without_name[0] == "C"
    if is_const:
        without_name = without_name[1:]

    # F -> function, no F -> method.
    is_member = without_name[0] != "F"
    whole_text = without_name if is_member else without_name[1:]

    # Easier to handle this here
    if whole_text == "v":
        return (name, [])

    """
    Ann_ Array
    P pointer
    C constant
    Qn qualified name, n parts

    b bool
    c char
    s short
    i int
    l long
    x long long
    f float
    d double
    e vararg
    nn <name> struct
    """
    def parse_type(text: str) -> Tuple[GType, str]:
        if text.startswith("A"):
            (dim, rest) = re.match(r"^A([0-9]+)_(.*)", text).groups()
            (type, rest) = parse_type(rest)
            array_type = GArrayType()
            count = DwarfSubscriptDataItem()
            count.highBound.isConstant = True
            count.highBound.constant = int(dim) + 1
            element_type = DwarfSubscriptDataItem()
            element_type.type = type
            array_type.subscripts = [count, element_type]
            return (array_type, rest)
        elif text.startswith("F"):
            text = text[1:]
            if text.startswith("v"):
                text = text[1:]
            else:
                while text and not text.startswith("_"):
                    (param_type, text) = parse_type(text)
            assert text.startswith("_"), f"Expect _ after function type in {mangled_name}"
            # TODO: Actually handle function type
            return (GPointerType(GFundType(DW_FT.void)), text[1:])
        elif text.startswith("Q"):
            qualification_count = int(text[1])
            text = text[2:]
            parts = []
            for i in range(qualification_count):
                (namespace_len_text, rest) = re.match(r"^(\d+)(.*)", text).groups()
                namespace_len = int(namespace_len_text)
                parts.append(rest[:namespace_len])
                text = rest[namespace_len:]
            return (resolve_ud(parts[-1]), text)
        elif text.startswith("Pv"):
            # Pointer to void is special
            return (GPointerType(GFundType(DW_FT.void)), text[2:])
        elif text.startswith("PCv"):
            return (GPointerType(GFundType(DW_FT.void)), text[3:])
        elif text.startswith("P") or text.startswith("R"):
            (type, rest) = parse_type(text[1:])
            pointer_type = GPointerType(type)
            return (pointer_type, rest)
        elif text.startswith("C"):
            # Constness ignored here
            return parse_type(text[1:])
        elif text.startswith("b"):
            return (GFundType(DW_FT.bool), text[1:])
        elif text.startswith("c"):
            return (GFundType(DW_FT.S8), text[1:])
        elif text.startswith("s"):
            return (GFundType(DW_FT.S16), text[1:])
        elif text.startswith("i"):
            return (GFundType(DW_FT.S32), text[1:])
        elif text.startswith("l"):
            return (GFundType(DW_FT.SLong), text[1:])
        elif text.startswith("x"):
            return (GFundType(DW_FT.S64), text[1:])
        elif text.startswith("f"):
            return (GFundType(DW_FT.F32), text[1:])
        elif text.startswith("d"):
            return (GFundType(DW_FT.F64), text[1:])
        elif text.startswith("Uc"):
            return (GFundType(DW_FT.U8), text[2:])
        elif text.startswith("Us"):
            return (GFundType(DW_FT.U16), text[2:])
        elif text.startswith("Ui"):
            return (GFundType(DW_FT.U32), text[2:])
        elif text.startswith("Ul"):
            return (GFundType(DW_FT.ULong), text[2:])
        else:
            # Handle struct
            if match := re.match(r"^(\d+)(.*)", text):
                (ident_len_text, rest) = match.groups()
                ident_len = int(ident_len_text)
                ident = rest[:ident_len]
                rest = rest[ident_len:]
                return (resolve_ud(ident), rest)
            else:
                print("Unexpected mangle:", text, mangled_name)
                exit(0)

    result = []
    if this_type:
        result.append(GPointerType(this_type))
    while whole_text:
        # End of empty arg list, or variable args
        if whole_text.startswith("v") or whole_text.startswith("e"):
            return (name, result)
        (type, whole_text) = parse_type(whole_text)
        result.append(type)
    return (name, result)
