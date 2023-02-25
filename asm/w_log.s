.include "macros.inc"
.file "w_log.c"

# 0x801ECB10 - 0x801ECB30
.text
.balign 4

.fn log, global
/* 801ECB10 001E9BF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801ECB14 001E9BF4  7C 08 02 A6 */	mflr r0
/* 801ECB18 001E9BF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801ECB1C 001E9BFC  4B FF D4 4D */	bl __ieee754_log
/* 801ECB20 001E9C00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801ECB24 001E9C04  7C 08 03 A6 */	mtlr r0
/* 801ECB28 001E9C08  38 21 00 10 */	addi r1, r1, 0x10
/* 801ECB2C 001E9C0C  4E 80 00 20 */	blr
.endfn log
