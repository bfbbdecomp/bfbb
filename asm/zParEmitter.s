.include "macros.inc"
.file "zParEmitter.cpp"

# 0x800A87EC - 0x800A8868
.text
.balign 4

# zParEmitterFind(unsigned int)
.fn zParEmitterFind__FUi, global
/* 800A87EC 000A58CC  3C 80 80 3C */	lis r4, globals@ha
/* 800A87F0 000A58D0  38 84 05 58 */	addi r4, r4, globals@l
/* 800A87F4 000A58D4  80 84 1F C0 */	lwz r4, 0x1fc0(r4)
/* 800A87F8 000A58D8  28 04 00 00 */	cmplwi r4, 0x0
/* 800A87FC 000A58DC  40 82 00 0C */	bne .L_800A8808
/* 800A8800 000A58E0  38 60 00 00 */	li r3, 0x0
/* 800A8804 000A58E4  4E 80 00 20 */	blr
.L_800A8808:
/* 800A8808 000A58E8  80 04 01 1C */	lwz r0, 0x11c(r4)
/* 800A880C 000A58EC  80 A4 02 3C */	lwz r5, 0x23c(r4)
/* 800A8810 000A58F0  7C 09 03 A6 */	mtctr r0
/* 800A8814 000A58F4  2C 00 00 00 */	cmpwi r0, 0x0
/* 800A8818 000A58F8  40 81 00 24 */	ble .L_800A883C
.L_800A881C:
/* 800A881C 000A58FC  80 85 00 10 */	lwz r4, 0x10(r5)
/* 800A8820 000A5900  80 04 00 00 */	lwz r0, 0x0(r4)
/* 800A8824 000A5904  7C 00 18 40 */	cmplw r0, r3
/* 800A8828 000A5908  40 82 00 0C */	bne .L_800A8834
/* 800A882C 000A590C  7C A3 2B 78 */	mr r3, r5
/* 800A8830 000A5910  4E 80 00 20 */	blr
.L_800A8834:
/* 800A8834 000A5914  38 A5 00 78 */	addi r5, r5, 0x78
/* 800A8838 000A5918  42 00 FF E4 */	bdnz .L_800A881C
.L_800A883C:
/* 800A883C 000A591C  38 60 00 00 */	li r3, 0x0
/* 800A8840 000A5920  4E 80 00 20 */	blr
.endfn zParEmitterFind__FUi

# zParEmitterFind(const char*)
.fn zParEmitterFind__FPCc, global
/* 800A8844 000A5924  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A8848 000A5928  7C 08 02 A6 */	mflr r0
/* 800A884C 000A592C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A8850 000A5930  4B FA 39 C5 */	bl xStrHash__FPCc
/* 800A8854 000A5934  4B FF FF 99 */	bl zParEmitterFind__FUi
/* 800A8858 000A5938  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A885C 000A593C  7C 08 03 A6 */	mtlr r0
/* 800A8860 000A5940  38 21 00 10 */	addi r1, r1, 0x10
/* 800A8864 000A5944  4E 80 00 20 */	blr
.endfn zParEmitterFind__FPCc
