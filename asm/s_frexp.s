.include "macros.inc"
.file "s_frexp.c"

# 0x801EC5D4 - 0x801EC660
.text
.balign 4

.fn frexp, global
/* 801EC5D4 001E96B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EC5D8 001E96B8  38 80 00 00 */	li r4, 0x0
/* 801EC5DC 001E96BC  3C 00 7F F0 */	lis r0, 0x7ff0
/* 801EC5E0 001E96C0  D8 21 00 08 */	stfd f1, 0x8(r1)
/* 801EC5E4 001E96C4  80 A1 00 08 */	lwz r5, 0x8(r1)
/* 801EC5E8 001E96C8  90 83 00 00 */	stw r4, 0x0(r3)
/* 801EC5EC 001E96CC  54 A4 00 7E */	clrlwi r4, r5, 1
/* 801EC5F0 001E96D0  80 C1 00 0C */	lwz r6, 0xc(r1)
/* 801EC5F4 001E96D4  7C 04 00 00 */	cmpw r4, r0
/* 801EC5F8 001E96D8  40 80 00 0C */	bge .L_801EC604
/* 801EC5FC 001E96DC  7C 80 33 79 */	or. r0, r4, r6
/* 801EC600 001E96E0  40 82 00 0C */	bne .L_801EC60C
.L_801EC604:
/* 801EC604 001E96E4  C8 21 00 08 */	lfd f1, 0x8(r1)
/* 801EC608 001E96E8  48 00 00 50 */	b .L_801EC658
.L_801EC60C:
/* 801EC60C 001E96EC  3C 00 00 10 */	lis r0, 0x10
/* 801EC610 001E96F0  7C 04 00 00 */	cmpw r4, r0
/* 801EC614 001E96F4  40 80 00 20 */	bge .L_801EC634
/* 801EC618 001E96F8  C8 02 B9 88 */	lfd f0, "@58"@sda21(r2)
/* 801EC61C 001E96FC  38 00 FF CA */	li r0, -0x36
/* 801EC620 001E9700  90 03 00 00 */	stw r0, 0x0(r3)
/* 801EC624 001E9704  FC 01 00 32 */	fmul f0, f1, f0
/* 801EC628 001E9708  D8 01 00 08 */	stfd f0, 0x8(r1)
/* 801EC62C 001E970C  80 A1 00 08 */	lwz r5, 0x8(r1)
/* 801EC630 001E9710  54 A4 00 7E */	clrlwi r4, r5, 1
.L_801EC634:
/* 801EC634 001E9714  54 A0 03 00 */	rlwinm r0, r5, 0, 12, 0
/* 801EC638 001E9718  80 A3 00 00 */	lwz r5, 0x0(r3)
/* 801EC63C 001E971C  7C 84 A6 70 */	srawi r4, r4, 20
/* 801EC640 001E9720  64 00 3F E0 */	oris r0, r0, 0x3fe0
/* 801EC644 001E9724  90 01 00 08 */	stw r0, 0x8(r1)
/* 801EC648 001E9728  7C 84 2A 14 */	add r4, r4, r5
/* 801EC64C 001E972C  38 04 FC 02 */	addi r0, r4, -0x3fe
/* 801EC650 001E9730  90 03 00 00 */	stw r0, 0x0(r3)
/* 801EC654 001E9734  C8 21 00 08 */	lfd f1, 0x8(r1)
.L_801EC658:
/* 801EC658 001E9738  38 21 00 10 */	addi r1, r1, 0x10
/* 801EC65C 001E973C  4E 80 00 20 */	blr
.endfn frexp

# 0x803D0308 - 0x803D0310
.section .sdata2, "a"
.balign 8

.obj "@58", local
	.4byte 0x43500000
	.4byte 0x00000000
.endobj "@58"