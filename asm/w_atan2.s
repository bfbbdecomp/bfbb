.include "macros.inc"
.file "w_atan2.c"

# 0x801ECAB0 - 0x801ECAD0
.text
.balign 4

.fn atan2, global
/* 801ECAB0 001E9B90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801ECAB4 001E9B94  7C 08 02 A6 */	mflr r0
/* 801ECAB8 001E9B98  90 01 00 14 */	stw r0, 0x14(r1)
/* 801ECABC 001E9B9C  4B FF CC BD */	bl __ieee754_atan2
/* 801ECAC0 001E9BA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801ECAC4 001E9BA4  7C 08 03 A6 */	mtlr r0
/* 801ECAC8 001E9BA8  38 21 00 10 */	addi r1, r1, 0x10
/* 801ECACC 001E9BAC  4E 80 00 20 */	blr
.endfn atan2
