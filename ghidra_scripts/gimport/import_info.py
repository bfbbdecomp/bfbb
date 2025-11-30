from .extract_info import ExtractedInfo
from .gtypes import GType, GFundType, GPointerType, GArrayType, GStructType, \
    GGlobalVariable, GSubroutineType, GGlobal, GGlobalSubroutine
from ghidra.program.database import ProgramDB
from ghidra.program.model.data import BooleanDataType, SignedByteDataType, ByteDataType, \
    ShortDataType, UnsignedShortDataType, IntegerDataType, UnsignedIntegerDataType, \
    LongDataType, UnsignedLongDataType, PointerDataType, FloatDataType, DoubleDataType, \
    VoidDataType, LongLongDataType, DataType, TypedefDataType, DataTypeConflictHandler, \
    StructureDataType, UnionDataType, EnumDataType, ArrayDataType
from ghidra.program.model.symbol import SourceType
from ghidra.program.model.listing import Function
from ghidra.program.model.listing import ParameterImpl


fund_types_by_id = {
    0: ("bool", BooleanDataType()),
    1: ("S8", SignedByteDataType()),  # char in spec, alias to S8 in our codebase
    2: ("S8", SignedByteDataType()),  # Actually signed int8
    3: ("U8", ByteDataType()),
    5: ("S16", ShortDataType()),
    6: ("U16", UnsignedShortDataType()),
    7: ("S32", IntegerDataType()),
    9: ("U32", UnsignedIntegerDataType()),
    10: ("SLong", LongDataType()),
    12: ("ULong", UnsignedLongDataType()),
    13: ("void*", PointerDataType()),
    14: ("F32", FloatDataType()),
    15: ("F64", DoubleDataType()),
    20: ("void", VoidDataType()),
    32776: ("S64", LongLongDataType()),
}
datatype_cache = {}


def generate_datatype_for_gtype(program: ProgramDB, gtype: GType) -> DataType:
    if isinstance(gtype, GFundType):
        if gtype.id == 13:
            # Special case for void* because DWARF considers it a fundamental type
            # but Ghidra considers it a pointer to a fundamental type.
            return program.getDataTypeManager().addDataType(
                PointerDataType(VoidDataType()), DataTypeConflictHandler.KEEP_HANDLER
            )
        else:
            fund_type_info = fund_types_by_id.get(gtype.id)
            base_type = program.getDataTypeManager().addDataType(fund_type_info[1], DataTypeConflictHandler.KEEP_HANDLER)
            return program.getDataTypeManager().addDataType(
                TypedefDataType(fund_type_info[0], base_type),
                DataTypeConflictHandler.KEEP_HANDLER
            )
    elif isinstance(gtype, GPointerType):
        base_type = get_datatype_for_gtype(program, gtype.type)
        return program.getDataTypeManager().addDataType(
            PointerDataType(base_type), DataTypeConflictHandler.KEEP_HANDLER
        )
    elif isinstance(gtype, GArrayType):
        index_part = gtype.subscripts[0]
        type_part = gtype.subscripts[1]
        assert type_part.highBound.location is None, "Type part should not have bounds"
        assert type_part.lowBound.location is None, "Type part should not have bounds"
        if type_part.resolved_type is None:
            return PointerDataType()
        else:
            return program.getDataTypeManager().addDataType(
                ArrayDataType(
                    get_datatype_for_gtype(program, type_part.resolved_type),
                    index_part.highBound.constant + 1
                ),
                DataTypeConflictHandler.KEEP_HANDLER
            )
    elif isinstance(gtype, GSubroutineType):
        # TODO:
        return None
    elif isinstance(gtype, GStructType):
        if gtype.type_class == "enum":
            path = f"/{gtype.name}"
            existing_type: EnumDataType = program.getDataTypeManager().getDataType(path)
            if existing_type is None:
                existing_type = program.getDataTypeManager().addDataType(
                    EnumDataType(gtype.name, gtype.byte_size), DataTypeConflictHandler.KEEP_HANDLER
                )
            return existing_type
        elif gtype.type_class == "union":
            path = f"/{gtype.name}"
            existing_type: UnionDataType = program.getDataTypeManager().getDataType(path)
            if existing_type is None:
                existing_type = program.getDataTypeManager().addDataType(
                    UnionDataType(gtype.name), DataTypeConflictHandler.KEEP_HANDLER
                )
            return existing_type
        elif gtype.type_class == "struct":
            path = f"/{gtype.name}"
            existing_type: StructureDataType = program.getDataTypeManager().getDataType(path)
            if existing_type is None:
                existing_type = program.getDataTypeManager().addDataType(
                    StructureDataType(gtype.name, gtype.byte_size), DataTypeConflictHandler.KEEP_HANDLER
                )
            existing_type.setLength(gtype.byte_size)
            return existing_type


def get_datatype_for_gtype(program: ProgramDB, gtype: GType) -> DataType:
    if gtype in datatype_cache:
        return datatype_cache[gtype]
    else:
        datatype = generate_datatype_for_gtype(program, gtype)
        datatype_cache[gtype] = datatype
        return datatype


def fill_struct_types(program: ProgramDB, parsed_info: ExtractedInfo):
    for gtype in parsed_info.structs:
        if gtype.type_class == "enum":
            existing_type: EnumDataType = get_datatype_for_gtype(program, gtype)
            for (name, value) in gtype.enum_values:
                if not existing_type.contains(name):
                    existing_type.add(name, value)
        elif gtype.type_class == "union":
            existing_type: UnionDataType = get_datatype_for_gtype(program, gtype)
            assert existing_type, f"Failed to get existing type for {gtype.name}"
            # TODO: Union types

        elif gtype.type_class == "struct":
            existing_type: StructureDataType = get_datatype_for_gtype(program, gtype)
            assert existing_type, f"Failed to get existing type for {gtype.name}"
            for field in gtype.fields:
                if field_type := get_datatype_for_gtype(program, field.type):
                    if field.location.atoms:
                        offset = field.location.atoms[0].value
                        if field.bit_size is not None:
                            # TODO: Make bitfields work
                            # existing_type.setPackingEnabled(False)
                            # print(f"Field {field.name}")
                            # max_bit = field.bit_offset + field.bit_size - 1
                            # bytes_needed = (max_bit // 8) + 1
                            # existing_type.insertBitFieldAt(offset, bytes_needed, field.bit_offset,
                            #                                field_type, field.bit_size,
                            #                                field.name, "")
                            pass
                        else:
                            if existing_field := existing_type.getComponentAt(offset):
                                if existing_field.getDataType() == field_type:
                                    if existing_field.getFieldName() != field.name:
                                        existing_field.setFieldName(field.name)
                                else:
                                    existing_type.replaceAtOffset(offset, field_type, -1, field.name, None)
                            else:
                                existing_type.replaceAtOffset(offset, field_type, -1, field.name, None)


def add_global(program: ProgramDB, glob: GGlobal):
    if isinstance(glob, GGlobalVariable):
        pass
    elif isinstance(glob, GGlobalSubroutine):
        address = program.getAddressFactory().getAddress(hex(glob.address))
        if function := program.getFunctionManager().getFunctionAt(address):
            function.setName(glob.name, SourceType.USER_DEFINED)
            if glob.type:
                function.setReturnType(
                    get_datatype_for_gtype(program, glob.type),
                    SourceType.USER_DEFINED)

            args = []
            for ord, param in enumerate(glob.params):
                args.append(ParameterImpl(param.name,
                                          get_datatype_for_gtype(program, param.type),
                                          program))
            function.replaceParameters(Function.FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS, True,
                                       SourceType.USER_DEFINED, args)


def add_labels(program: ProgramDB, parsed_info: ExtractedInfo):
    for (address, label) in parsed_info.labels.items():
        address = program.getAddressFactory().getAddress(hex(address))
        if function := program.getFunctionManager().getFunctionAt(address):
            function.setName(label, SourceType.USER_DEFINED)
        elif symbol := program.getSymbolTable().getPrimarySymbol(address):
            symbol.setName(label, SourceType.USER_DEFINED)
        else:
            program.getSymbolTable().createLabel(address, label, SourceType.USER_DEFINED)


def import_info(program: ProgramDB, parsed_info: ExtractedInfo):
    # Copy better info into forward declared versions of structs

    # Figure out what structs need disambiguation because there are two of
    # them with the same name but different sizes.
    nonzero_size_for_name = {}
    needs_disambiguation = set()
    for gtype in parsed_info.structs:
        if gtype.byte_size > 0:
            if gtype.name in nonzero_size_for_name:
                if gtype.byte_size != nonzero_size_for_name[gtype.name]:
                    needs_disambiguation.add(gtype.name)
            else:
                nonzero_size_for_name[gtype.name] = gtype.byte_size

    # Rename types needing disambiguation
    for gtype in parsed_info.structs:
        if gtype.name in needs_disambiguation:
            gtype.name = f"{gtype.name}{hex(gtype.byte_size)}"

    # Record which types are nonzero size so we can eliminate forward declares
    nonzero_for_name = {}
    for gtype in parsed_info.structs:
        if gtype.byte_size != 0:
            nonzero_for_name[gtype.name] = gtype

    # Update forward declares to have the same contents
    for gtype in parsed_info.structs:
        # Some library types are only forward declared
        if gtype.name not in nonzero_for_name:
            continue
        gtype.byte_size = nonzero_for_name[gtype.name].byte_size
        gtype.fields = nonzero_for_name[gtype.name].fields

    for id in fund_types_by_id:
        get_datatype_for_gtype(program, GFundType(id))

    # Make the structs exist to avoid problems with circular references
    for struct in parsed_info.structs:
        get_datatype_for_gtype(program, struct)

    # Now that they all exist, fill the structs
    fill_struct_types(program, parsed_info)

    # Finally, handle the globals
    for glob in parsed_info.globals:
        add_global(program, glob)

    # Add any leftover labels
    add_labels(program, parsed_info)
