.include "macros.inc"

.if 0

.section .text  # 0x800A6BF8 - 0x800A6E9C

.global zMovePoint_GetMemPool__Fi
zMovePoint_GetMemPool__Fi:
/* 800A6BF8 000A39F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A6BFC 000A39FC  7C 08 02 A6 */	mflr r0
/* 800A6C00 000A3A00  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A6C04 000A3A04  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800A6C08 000A3A08  7C 7F 1B 79 */	or. r31, r3, r3
/* 800A6C0C 000A3A0C  41 82 00 18 */	beq lbl_800A6C24
/* 800A6C10 000A3A10  1C 9F 00 30 */	mulli r4, r31, 0x30
/* 800A6C14 000A3A14  80 6D 89 E0 */	lwz r3, gActiveHeap-_SDA_BASE_(r13)
/* 800A6C18 000A3A18  38 A0 00 00 */	li r5, 0
/* 800A6C1C 000A3A1C  4B F8 CD 25 */	bl xMemAlloc__FUiUii
/* 800A6C20 000A3A20  48 00 00 08 */	b lbl_800A6C28
lbl_800A6C24:
/* 800A6C24 000A3A24  38 60 00 00 */	li r3, 0
lbl_800A6C28:
/* 800A6C28 000A3A28  90 6D 90 50 */	stw r3, g_mvpt_list-_SDA_BASE_(r13)
/* 800A6C2C 000A3A2C  93 ED 90 54 */	stw r31, g_mvpt_cnt-_SDA_BASE_(r13)
/* 800A6C30 000A3A30  80 6D 90 50 */	lwz r3, g_mvpt_list-_SDA_BASE_(r13)
/* 800A6C34 000A3A34  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800A6C38 000A3A38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A6C3C 000A3A3C  7C 08 03 A6 */	mtlr r0
/* 800A6C40 000A3A40  38 21 00 10 */	addi r1, r1, 0x10
/* 800A6C44 000A3A44  4E 80 00 20 */	blr 

.endif

.section .sbss
.global g_mvpt_list
g_mvpt_list:
	.skip 0x4
.global g_mvpt_cnt
g_mvpt_cnt:
	.skip 0x4

.section .sdata2
.global lbl_803CDD40
lbl_803CDD40:
	.incbin "baserom.dol", 0x2B75E0, 0x4
.global lbl_803CDD44
lbl_803CDD44:
	.incbin "baserom.dol", 0x2B75E4, 0x4
