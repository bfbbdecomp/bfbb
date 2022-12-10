.include "macros.inc"
.file "w_asin.c"

# 0x801ECA90 - 0x801ECAB0
.text
.balign 4

.fn asin, global
/* 801ECA90 001E9B70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801ECA94 001E9B74  7C 08 02 A6 */	mflr r0
/* 801ECA98 001E9B78  90 01 00 14 */	stw r0, 0x14(r1)
/* 801ECA9C 001E9B7C  4B FF CA 79 */	bl __ieee754_asin
/* 801ECAA0 001E9B80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801ECAA4 001E9B84  7C 08 03 A6 */	mtlr r0
/* 801ECAA8 001E9B88  38 21 00 10 */	addi r1, r1, 0x10
/* 801ECAAC 001E9B8C  4E 80 00 20 */	blr
.endfn asin
