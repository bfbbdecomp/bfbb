.include "macros.inc"
.file "baimmedi.c"

# 0x8022F7C4 - 0x8022F8EC
.text
.balign 4

.fn RwIm2DGetNearScreenZ, global
/* 8022F7C4 0022C8A4  80 6D 9F 7C */	lwz r3, RwEngineInstance@sda21(r13)
/* 8022F7C8 0022C8A8  C0 23 00 18 */	lfs f1, 0x18(r3)
/* 8022F7CC 0022C8AC  4E 80 00 20 */	blr
.endfn RwIm2DGetNearScreenZ

.fn RwIm2DGetFarScreenZ, global
/* 8022F7D0 0022C8B0  80 6D 9F 7C */	lwz r3, RwEngineInstance@sda21(r13)
/* 8022F7D4 0022C8B4  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 8022F7D8 0022C8B8  4E 80 00 20 */	blr
.endfn RwIm2DGetFarScreenZ

.fn RwRenderStateSet, global
/* 8022F7DC 0022C8BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8022F7E0 0022C8C0  7C 08 02 A6 */	mflr r0
/* 8022F7E4 0022C8C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8022F7E8 0022C8C8  80 AD 9F 7C */	lwz r5, RwEngineInstance@sda21(r13)
/* 8022F7EC 0022C8CC  80 05 00 00 */	lwz r0, 0x0(r5)
/* 8022F7F0 0022C8D0  28 00 00 00 */	cmplwi r0, 0x0
/* 8022F7F4 0022C8D4  40 82 00 2C */	bne .L_8022F820
/* 8022F7F8 0022C8D8  38 00 00 01 */	li r0, 0x1
/* 8022F7FC 0022C8DC  38 60 00 10 */	li r3, 0x10
/* 8022F800 0022C8E0  90 01 00 08 */	stw r0, 0x8(r1)
/* 8022F804 0022C8E4  4C C6 31 82 */	crclr 4*cr1+eq
/* 8022F808 0022C8E8  4B FF FE 2D */	bl _rwerror
/* 8022F80C 0022C8EC  90 61 00 0C */	stw r3, 0xc(r1)
/* 8022F810 0022C8F0  38 61 00 08 */	addi r3, r1, 0x8
/* 8022F814 0022C8F4  4B FF FD 7D */	bl RwErrorSet
/* 8022F818 0022C8F8  38 60 00 00 */	li r3, 0x0
/* 8022F81C 0022C8FC  48 00 00 10 */	b .L_8022F82C
.L_8022F820:
/* 8022F820 0022C900  81 85 00 20 */	lwz r12, 0x20(r5)
/* 8022F824 0022C904  7D 89 03 A6 */	mtctr r12
/* 8022F828 0022C908  4E 80 04 21 */	bctrl
.L_8022F82C:
/* 8022F82C 0022C90C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8022F830 0022C910  7C 08 03 A6 */	mtlr r0
/* 8022F834 0022C914  38 21 00 10 */	addi r1, r1, 0x10
/* 8022F838 0022C918  4E 80 00 20 */	blr
.endfn RwRenderStateSet

.fn RwRenderStateGet, global
/* 8022F83C 0022C91C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8022F840 0022C920  7C 08 02 A6 */	mflr r0
/* 8022F844 0022C924  90 01 00 14 */	stw r0, 0x14(r1)
/* 8022F848 0022C928  80 AD 9F 7C */	lwz r5, RwEngineInstance@sda21(r13)
/* 8022F84C 0022C92C  81 85 00 24 */	lwz r12, 0x24(r5)
/* 8022F850 0022C930  7D 89 03 A6 */	mtctr r12
/* 8022F854 0022C934  4E 80 04 21 */	bctrl
/* 8022F858 0022C938  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8022F85C 0022C93C  7C 08 03 A6 */	mtlr r0
/* 8022F860 0022C940  38 21 00 10 */	addi r1, r1, 0x10
/* 8022F864 0022C944  4E 80 00 20 */	blr
.endfn RwRenderStateGet

.fn RwIm2DRenderLine, global
/* 8022F868 0022C948  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8022F86C 0022C94C  7C 08 02 A6 */	mflr r0
/* 8022F870 0022C950  90 01 00 14 */	stw r0, 0x14(r1)
/* 8022F874 0022C954  80 ED 9F 7C */	lwz r7, RwEngineInstance@sda21(r13)
/* 8022F878 0022C958  81 87 00 28 */	lwz r12, 0x28(r7)
/* 8022F87C 0022C95C  7D 89 03 A6 */	mtctr r12
/* 8022F880 0022C960  4E 80 04 21 */	bctrl
/* 8022F884 0022C964  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8022F888 0022C968  7C 08 03 A6 */	mtlr r0
/* 8022F88C 0022C96C  38 21 00 10 */	addi r1, r1, 0x10
/* 8022F890 0022C970  4E 80 00 20 */	blr
.endfn RwIm2DRenderLine

.fn RwIm2DRenderPrimitive, global
/* 8022F894 0022C974  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8022F898 0022C978  7C 08 02 A6 */	mflr r0
/* 8022F89C 0022C97C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8022F8A0 0022C980  80 CD 9F 7C */	lwz r6, RwEngineInstance@sda21(r13)
/* 8022F8A4 0022C984  81 86 00 30 */	lwz r12, 0x30(r6)
/* 8022F8A8 0022C988  7D 89 03 A6 */	mtctr r12
/* 8022F8AC 0022C98C  4E 80 04 21 */	bctrl
/* 8022F8B0 0022C990  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8022F8B4 0022C994  7C 08 03 A6 */	mtlr r0
/* 8022F8B8 0022C998  38 21 00 10 */	addi r1, r1, 0x10
/* 8022F8BC 0022C99C  4E 80 00 20 */	blr
.endfn RwIm2DRenderPrimitive

.fn RwIm2DRenderIndexedPrimitive, global
/* 8022F8C0 0022C9A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8022F8C4 0022C9A4  7C 08 02 A6 */	mflr r0
/* 8022F8C8 0022C9A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8022F8CC 0022C9AC  81 0D 9F 7C */	lwz r8, RwEngineInstance@sda21(r13)
/* 8022F8D0 0022C9B0  81 88 00 34 */	lwz r12, 0x34(r8)
/* 8022F8D4 0022C9B4  7D 89 03 A6 */	mtctr r12
/* 8022F8D8 0022C9B8  4E 80 04 21 */	bctrl
/* 8022F8DC 0022C9BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8022F8E0 0022C9C0  7C 08 03 A6 */	mtlr r0
/* 8022F8E4 0022C9C4  38 21 00 10 */	addi r1, r1, 0x10
/* 8022F8E8 0022C9C8  4E 80 00 20 */	blr
.endfn RwIm2DRenderIndexedPrimitive
