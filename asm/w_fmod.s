.include "macros.inc"
.file "w_fmod.c"

# 0x801ECAF0 - 0x801ECB10
.text
.balign 4

.fn fmod, global
/* 801ECAF0 001E9BD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801ECAF4 001E9BD4  7C 08 02 A6 */	mflr r0
/* 801ECAF8 001E9BD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801ECAFC 001E9BDC  4B FF D1 31 */	bl __ieee754_fmod
/* 801ECB00 001E9BE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801ECB04 001E9BE4  7C 08 03 A6 */	mtlr r0
/* 801ECB08 001E9BE8  38 21 00 10 */	addi r1, r1, 0x10
/* 801ECB0C 001E9BEC  4E 80 00 20 */	blr
.endfn fmod
