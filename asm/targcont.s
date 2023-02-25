.include "macros.inc"
.file "targcont.c"

# 0x801F61A4 - 0x801F61D8
.text
.balign 4

.fn TRKTargetContinue, global
/* 801F61A4 001F3284  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F61A8 001F3288  7C 08 02 A6 */	mflr r0
/* 801F61AC 001F328C  38 60 00 00 */	li r3, 0x0
/* 801F61B0 001F3290  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F61B4 001F3294  4B FF DD E9 */	bl TRKTargetSetStopped
/* 801F61B8 001F3298  4B FF FB F1 */	bl UnreserveEXI2Port
/* 801F61BC 001F329C  4B FF DC A1 */	bl TRKSwapAndGo
/* 801F61C0 001F32A0  4B FF FC 19 */	bl ReserveEXI2Port
/* 801F61C4 001F32A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F61C8 001F32A8  38 60 00 00 */	li r3, 0x0
/* 801F61CC 001F32AC  7C 08 03 A6 */	mtlr r0
/* 801F61D0 001F32B0  38 21 00 10 */	addi r1, r1, 0x10
/* 801F61D4 001F32B4  4E 80 00 20 */	blr
.endfn TRKTargetContinue
