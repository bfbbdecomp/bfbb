.include "macros.inc"
.file "w_pow.c"

# 0x801ECB30 - 0x801ECB50
.text
.balign 4

.fn pow, global
/* 801ECB30 001E9C10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801ECB34 001E9C14  7C 08 02 A6 */	mflr r0
/* 801ECB38 001E9C18  90 01 00 14 */	stw r0, 0x14(r1)
/* 801ECB3C 001E9C1C  4B FF D6 A9 */	bl __ieee754_pow
/* 801ECB40 001E9C20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801ECB44 001E9C24  7C 08 03 A6 */	mtlr r0
/* 801ECB48 001E9C28  38 21 00 10 */	addi r1, r1, 0x10
/* 801ECB4C 001E9C2C  4E 80 00 20 */	blr
.endfn pow
