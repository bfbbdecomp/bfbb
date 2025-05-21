from typing import List, Tuple
from .dwarf import DwarfLocation, DwarfSubscriptDataItem, DW_FT_to_string


class GType:
    def __init__(self):
        pass


class GPointerType:
    def __init__(self, type: GType):
        self.type: GType = type

    def __str__(self):
        return f"{self.type}*"


class GGlobal:
    def __init__(self):
        self.name: str = None
        self.address: int = None
        pass


class GGlobalVariable(GGlobal):
    def __init__(self):
        self.name: str = None
        self.mangled_name: str = None
        self.type: GType = None

    def __str__(self):
        return f"{self.type} {self.name}"


class GGlobalSubroutineParameter:
    def __init__(self, name, type, location):
        self.name = name
        self.type: GType = type
        self.location: DwarfLocation = location

    def __str__(self):
        return f"{self.type} {self.name}"


class GGlobalSubroutine(GGlobal):
    def __init__(self):
        self.mangled_name: str = None
        self.type: GType = None
        self.params: List[GGlobalSubroutineParameter] = []

    def __str__(self):
        params_str = ", ".join(str(param) for param in self.params)
        return f"{self.type} {self.name}({params_str})"


class GStructType(GType):
    def __init__(self, name, type_class: str):
        self.name = name
        self.type_class = type_class
        self.byte_size = 0
        self.fields: List[GMember] = []
        self.enum_values: List[Tuple[str, int]] = []

    def __str__(self):
        return f"{self.name}"


class GArrayType(GType):
    def __init__(self):
        self.subscripts: List[DwarfSubscriptDataItem] = []

    def __str__(self):
        subscripts_str = ", ".join(str(subscript) for subscript in self.subscripts)
        return f"ArrayType({subscripts_str})"


class GFundType(GType):
    def __init__(self, id):
        self.id = id
        self.name = DW_FT_to_string(id)
        assert self.name is not None, f"Unknown fund type: {id}"

    def __str__(self):
        return f"{self.name}"


class GMember(GType):
    def __init__(self, name):
        self.name = name
        self.type: GType = None
        self.location = DwarfLocation()
        self.bit_offset = None
        self.bit_size = None

    def __str__(self):
        return f"{self.type} {self.name}"


class GSubroutineType(GType):
    def __init__(self):
        self.type: GType = None
        self.parameters: List[GType] = []

    def __str__(self):
        return f"SubroutineType({self.type}({",".join(str(param) for param in self.parameters)}))"
