.include "macros.inc"
.file "AX.c"

# 0x801B7C60 - 0x801B7D04
.text
.balign 4

.fn AXInit, global
/* 801B7C60 001B4D40  7C 08 02 A6 */	mflr r0
/* 801B7C64 001B4D44  38 60 00 00 */	li r3, 0x0
/* 801B7C68 001B4D48  90 01 00 04 */	stw r0, 0x4(r1)
/* 801B7C6C 001B4D4C  94 21 FF F8 */	stwu r1, -0x8(r1)
/* 801B7C70 001B4D50  48 00 00 15 */	bl AXInitEx
/* 801B7C74 001B4D54  80 01 00 0C */	lwz r0, 0xc(r1)
/* 801B7C78 001B4D58  38 21 00 08 */	addi r1, r1, 0x8
/* 801B7C7C 001B4D5C  7C 08 03 A6 */	mtlr r0
/* 801B7C80 001B4D60  4E 80 00 20 */	blr
.endfn AXInit

.fn AXInitEx, global
/* 801B7C84 001B4D64  7C 08 02 A6 */	mflr r0
/* 801B7C88 001B4D68  90 01 00 04 */	stw r0, 0x4(r1)
/* 801B7C8C 001B4D6C  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 801B7C90 001B4D70  93 E1 00 14 */	stw r31, 0x14(r1)
/* 801B7C94 001B4D74  7C 7F 1B 78 */	mr r31, r3
/* 801B7C98 001B4D78  80 6D 85 60 */	lwz r3, __AXVersion@sda21(r13)
/* 801B7C9C 001B4D7C  48 01 99 61 */	bl OSRegisterVersion
/* 801B7CA0 001B4D80  48 00 00 F1 */	bl __AXAllocInit
/* 801B7CA4 001B4D84  48 00 27 7D */	bl __AXVPBInit
/* 801B7CA8 001B4D88  48 00 1C 9D */	bl __AXSPBInit
/* 801B7CAC 001B4D8C  48 00 05 21 */	bl __AXAuxInit
/* 801B7CB0 001B4D90  48 00 10 99 */	bl __AXClInit
/* 801B7CB4 001B4D94  7F E3 FB 78 */	mr r3, r31
/* 801B7CB8 001B4D98  48 00 14 89 */	bl __AXOutInit
/* 801B7CBC 001B4D9C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 801B7CC0 001B4DA0  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 801B7CC4 001B4DA4  38 21 00 18 */	addi r1, r1, 0x18
/* 801B7CC8 001B4DA8  7C 08 03 A6 */	mtlr r0
/* 801B7CCC 001B4DAC  4E 80 00 20 */	blr
.endfn AXInitEx

.fn AXQuit, global
/* 801B7CD0 001B4DB0  7C 08 02 A6 */	mflr r0
/* 801B7CD4 001B4DB4  90 01 00 04 */	stw r0, 0x4(r1)
/* 801B7CD8 001B4DB8  94 21 FF F8 */	stwu r1, -0x8(r1)
/* 801B7CDC 001B4DBC  48 00 01 69 */	bl __AXAllocQuit
/* 801B7CE0 001B4DC0  48 00 29 41 */	bl __AXVPBQuit
/* 801B7CE4 001B4DC4  48 00 1C 8D */	bl __AXSPBQuit
/* 801B7CE8 001B4DC8  48 00 05 C9 */	bl __AXAuxQuit
/* 801B7CEC 001B4DCC  48 00 10 81 */	bl __AXClQuit
/* 801B7CF0 001B4DD0  48 00 17 F1 */	bl __AXOutQuit
/* 801B7CF4 001B4DD4  80 01 00 0C */	lwz r0, 0xc(r1)
/* 801B7CF8 001B4DD8  38 21 00 08 */	addi r1, r1, 0x8
/* 801B7CFC 001B4DDC  7C 08 03 A6 */	mtlr r0
/* 801B7D00 001B4DE0  4E 80 00 20 */	blr
.endfn AXQuit

# 0x802B0498 - 0x802B04E0
.data
.balign 8
.sym ...data.0, local

.obj "@1", local
	.4byte 0x3C3C2044
	.4byte 0x6F6C7068
	.4byte 0x696E2053
	.4byte 0x444B202D
	.4byte 0x20415809
	.4byte 0x72656C65
	.4byte 0x61736520
	.4byte 0x6275696C
	.4byte 0x643A2041
	.4byte 0x70722031
	.4byte 0x37203230
	.4byte 0x30332031
	.4byte 0x323A3333
	.4byte 0x3A353720
	.4byte 0x28307832
	.4byte 0x33303129
	.4byte 0x203E3E00
.endobj "@1"
	.4byte 0x00000000

# 0x803CAE60 - 0x803CAE68
.section .sdata, "wa"
.balign 8

.obj __AXVersion, global
	.4byte ...data.0
.endobj __AXVersion
	.4byte 0x00000000
