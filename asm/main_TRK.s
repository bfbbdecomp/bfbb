.include "macros.inc"
.file "main_TRK.c"

# 0x801F5C50 - 0x801F5C94
.text
.balign 4

.fn TRK_main, global
/* 801F5C50 001F2D30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F5C54 001F2D34  7C 08 02 A6 */	mflr r0
/* 801F5C58 001F2D38  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F5C5C 001F2D3C  4B FF 98 A1 */	bl TRKInitializeNub
/* 801F5C60 001F2D40  3C 80 80 38 */	lis r4, TRK_mainError@ha
/* 801F5C64 001F2D44  2C 03 00 00 */	cmpwi r3, 0x0
/* 801F5C68 001F2D48  90 64 12 58 */	stw r3, TRK_mainError@l(r4)
/* 801F5C6C 001F2D4C  40 82 00 0C */	bne .L_801F5C78
/* 801F5C70 001F2D50  4B FF 98 41 */	bl TRKNubWelcome
/* 801F5C74 001F2D54  4B FF 95 1D */	bl TRKNubMainLoop
.L_801F5C78:
/* 801F5C78 001F2D58  4B FF 98 61 */	bl TRKTerminateNub
/* 801F5C7C 001F2D5C  3C 80 80 38 */	lis r4, TRK_mainError@ha
/* 801F5C80 001F2D60  90 64 12 58 */	stw r3, TRK_mainError@l(r4)
/* 801F5C84 001F2D64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F5C88 001F2D68  7C 08 03 A6 */	mtlr r0
/* 801F5C8C 001F2D6C  38 21 00 10 */	addi r1, r1, 0x10
/* 801F5C90 001F2D70  4E 80 00 20 */	blr
.endfn TRK_main

# 0x80381258 - 0x80381260
.bss
.balign 8

.obj TRK_mainError, local
	.skip 0x4
.endobj TRK_mainError
	.skip 0x4
