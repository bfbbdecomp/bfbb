.include "macros.inc"
.file "__init_cpp_exceptions.cpp"

# 0x801EDB6C - 0x801EDBE8
.text
.balign 4

# GetR2()
.fn GetR2__Fv, local
/* 801EDB6C 001EAC4C  7C 43 13 78 */	mr r3, r2
/* 801EDB70 001EAC50  4E 80 00 20 */	blr
.endfn GetR2__Fv

.fn __fini_cpp_exceptions, global
/* 801EDB74 001EAC54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EDB78 001EAC58  7C 08 02 A6 */	mflr r0
/* 801EDB7C 001EAC5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EDB80 001EAC60  80 6D 86 F8 */	lwz r3, fragmentID@sda21(r13)
/* 801EDB84 001EAC64  2C 03 FF FE */	cmpwi r3, -0x2
/* 801EDB88 001EAC68  41 82 00 10 */	beq .L_801EDB98
/* 801EDB8C 001EAC6C  48 00 14 21 */	bl __unregister_fragment
/* 801EDB90 001EAC70  38 00 FF FE */	li r0, -0x2
/* 801EDB94 001EAC74  90 0D 86 F8 */	stw r0, fragmentID@sda21(r13)
.L_801EDB98:
/* 801EDB98 001EAC78  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EDB9C 001EAC7C  7C 08 03 A6 */	mtlr r0
/* 801EDBA0 001EAC80  38 21 00 10 */	addi r1, r1, 0x10
/* 801EDBA4 001EAC84  4E 80 00 20 */	blr
.endfn __fini_cpp_exceptions

.fn __init_cpp_exceptions, global
/* 801EDBA8 001EAC88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EDBAC 001EAC8C  7C 08 02 A6 */	mflr r0
/* 801EDBB0 001EAC90  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EDBB4 001EAC94  80 0D 86 F8 */	lwz r0, fragmentID@sda21(r13)
/* 801EDBB8 001EAC98  2C 00 FF FE */	cmpwi r0, -0x2
/* 801EDBBC 001EAC9C  40 82 00 1C */	bne .L_801EDBD8
/* 801EDBC0 001EACA0  4B FF FF AD */	bl GetR2__Fv
/* 801EDBC4 001EACA4  3C A0 80 00 */	lis r5, _eti_init_info@ha
/* 801EDBC8 001EACA8  7C 64 1B 78 */	mr r4, r3
/* 801EDBCC 001EACAC  38 65 58 B4 */	addi r3, r5, _eti_init_info@l
/* 801EDBD0 001EACB0  48 00 14 11 */	bl __register_fragment
/* 801EDBD4 001EACB4  90 6D 86 F8 */	stw r3, fragmentID@sda21(r13)
.L_801EDBD8:
/* 801EDBD8 001EACB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EDBDC 001EACBC  7C 08 03 A6 */	mtlr r0
/* 801EDBE0 001EACC0  38 21 00 10 */	addi r1, r1, 0x10
/* 801EDBE4 001EACC4  4E 80 00 20 */	blr
.endfn __init_cpp_exceptions

# 0x80251D00 - 0x80251D04
.section .ctors, "a"
.balign 4

.obj __init_cpp_exceptions_reference, local
	.4byte __init_cpp_exceptions
.endobj __init_cpp_exceptions_reference

# 0x80251D40 - 0x80251D48
.section .dtors, "a"
.balign 4

.obj __destroy_global_chain_reference, local
	.4byte __destroy_global_chain
.endobj __destroy_global_chain_reference

.obj __fini_cpp_exceptions_reference, local
	.4byte __fini_cpp_exceptions
.endobj __fini_cpp_exceptions_reference

# 0x803CAFF8 - 0x803CB000
.section .sdata, "wa"
.balign 8

.obj fragmentID, local
	.4byte 0xFFFFFFFE
.endobj fragmentID
	.4byte 0x00000000
