.include "macros.inc"
.file "New.cp"

# 0x800056E0 - 0x80005730
.section extab, "a"
.balign 4

.obj "@157", local
	.4byte 0x10180000
	.4byte 0x00000040
	.4byte 0x00000018
	.4byte 0x0000004C
	.4byte 0x00000024
	.4byte 0x00000000
	.4byte 0x8F000000
	.4byte 0x00000044
	.4byte 0x00000008
	.4byte 0x8D000008
.endobj "@157"

.obj "@182", local
	.4byte 0x08180000
	.4byte 0x00000020
	.4byte 0x00000018
	.4byte 0x0000002C
	.4byte 0x00000024
	.4byte 0x00000000
	.4byte 0x8F000000
	.4byte 0x00000024
	.4byte 0x00000008
	.4byte 0x8D000008
.endobj "@182"

# 0x80005800 - 0x80005818
.section extabindex, "a"
.balign 4

.obj "@158", local
	.4byte __dt__Q23std9exceptionFv
	.4byte 0x00000074
	.4byte "@157"
.endobj "@158"

.obj "@183", local
	.4byte __dl__FPv
	.4byte 0x0000004C
	.4byte "@182"
.endobj "@183"

# 0x801ECE9C - 0x801ECF68
.text
.balign 4

# std::exception::~exception()
.fn __dt__Q23std9exceptionFv, weak
/* 801ECE9C 001E9F7C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801ECEA0 001E9F80  7C 08 02 A6 */	mflr r0
/* 801ECEA4 001E9F84  90 01 00 34 */	stw r0, 0x34(r1)
/* 801ECEA8 001E9F88  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801ECEAC 001E9F8C  7C 3F 0B 78 */	mr r31, r1
/* 801ECEB0 001E9F90  93 C1 00 28 */	stw r30, 0x28(r1)
/* 801ECEB4 001E9F94  7C 7E 1B 79 */	mr. r30, r3
/* 801ECEB8 001E9F98  41 82 00 34 */	beq .L_801ECEEC
/* 801ECEBC 001E9F9C  3C A0 80 2B */	lis r5, __vt__Q23std9exception@ha
/* 801ECEC0 001E9FA0  7C 80 07 35 */	extsh. r0, r4
/* 801ECEC4 001E9FA4  38 05 74 70 */	addi r0, r5, __vt__Q23std9exception@l
/* 801ECEC8 001E9FA8  90 1E 00 00 */	stw r0, 0x0(r30)
/* 801ECECC 001E9FAC  40 81 00 20 */	ble .L_801ECEEC
/* 801ECED0 001E9FB0  28 1E 00 00 */	cmplwi r30, 0x0
/* 801ECED4 001E9FB4  41 82 00 18 */	beq .L_801ECEEC
/* 801ECED8 001E9FB8  4B EE 68 BD */	bl free
/* 801ECEDC 001E9FBC  48 00 00 10 */	b .L_801ECEEC
/* 801ECEE0 001E9FC0  38 7F 00 08 */	addi r3, r31, 0x8
/* 801ECEE4 001E9FC4  48 00 13 A1 */	bl __unexpected
.L_801ECEE8:
/* 801ECEE8 001E9FC8  48 00 00 00 */	b .L_801ECEE8
.L_801ECEEC:
/* 801ECEEC 001E9FCC  7F EA FB 78 */	mr r10, r31
/* 801ECEF0 001E9FD0  7F C3 F3 78 */	mr r3, r30
/* 801ECEF4 001E9FD4  83 FF 00 2C */	lwz r31, 0x2c(r31)
/* 801ECEF8 001E9FD8  83 CA 00 28 */	lwz r30, 0x28(r10)
/* 801ECEFC 001E9FDC  81 41 00 00 */	lwz r10, 0x0(r1)
/* 801ECF00 001E9FE0  80 0A 00 04 */	lwz r0, 0x4(r10)
/* 801ECF04 001E9FE4  7D 41 53 78 */	mr r1, r10
/* 801ECF08 001E9FE8  7C 08 03 A6 */	mtlr r0
/* 801ECF0C 001E9FEC  4E 80 00 20 */	blr
.endfn __dt__Q23std9exceptionFv

# operator delete(void*)
.fn __dl__FPv, weak
/* 801ECF10 001E9FF0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801ECF14 001E9FF4  7C 08 02 A6 */	mflr r0
/* 801ECF18 001E9FF8  28 03 00 00 */	cmplwi r3, 0x0
/* 801ECF1C 001E9FFC  90 01 00 34 */	stw r0, 0x34(r1)
/* 801ECF20 001EA000  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801ECF24 001EA004  7C 3F 0B 78 */	mr r31, r1
/* 801ECF28 001EA008  41 82 00 18 */	beq .L_801ECF40
/* 801ECF2C 001EA00C  4B EE 68 69 */	bl free
/* 801ECF30 001EA010  48 00 00 10 */	b .L_801ECF40
/* 801ECF34 001EA014  38 7F 00 08 */	addi r3, r31, 0x8
/* 801ECF38 001EA018  48 00 13 4D */	bl __unexpected
.L_801ECF3C:
/* 801ECF3C 001EA01C  48 00 00 00 */	b .L_801ECF3C
.L_801ECF40:
/* 801ECF40 001EA020  7F EA FB 78 */	mr r10, r31
/* 801ECF44 001EA024  83 FF 00 2C */	lwz r31, 0x2c(r31)
/* 801ECF48 001EA028  81 41 00 00 */	lwz r10, 0x0(r1)
/* 801ECF4C 001EA02C  80 0A 00 04 */	lwz r0, 0x4(r10)
/* 801ECF50 001EA030  7D 41 53 78 */	mr r1, r10
/* 801ECF54 001EA034  7C 08 03 A6 */	mtlr r0
/* 801ECF58 001EA038  4E 80 00 20 */	blr
.endfn __dl__FPv

# std::exception::what() const
.fn what__Q23std9exceptionCFv, weak
/* 801ECF5C 001EA03C  3C 60 80 28 */	lis r3, "@227"@ha
/* 801ECF60 001EA040  38 63 A1 A0 */	addi r3, r3, "@227"@l
/* 801ECF64 001EA044  4E 80 00 20 */	blr
.endfn what__Q23std9exceptionCFv

# 0x8027A190 - 0x8027A1B0
.rodata
.balign 8

.obj "@223", local
	.4byte 0x7374643A
	.4byte 0x3A657863
	.4byte 0x65707469
	.byte 0x6F, 0x6E, 0x00
.endobj "@223"
	.byte 0x00

.obj "@227", local
	.4byte 0x65786365
	.4byte 0x7074696F
	.2byte 0x6E00
.endobj "@227"
	.4byte 0x00000000
	.2byte 0x0000

# 0x802B7470 - 0x802B7480
.data
.balign 8

# std::exception::__vtable
.obj __vt__Q23std9exception, weak
	.4byte __RTTI__Q23std9exception
	.4byte 0x00000000
	.4byte __dt__Q23std9exceptionFv
	.4byte what__Q23std9exceptionCFv
.endobj __vt__Q23std9exception

# 0x803CAFE8 - 0x803CAFF0
.section .sdata, "wa"
.balign 8

# std::exception::__RTTI
.obj __RTTI__Q23std9exception, local
	.4byte "@223"
	.4byte 0x00000000
.endobj __RTTI__Q23std9exception
