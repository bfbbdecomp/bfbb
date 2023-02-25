.include "macros.inc"
.file "w_exp.c"

# 0x801ECAD0 - 0x801ECAF0
.text
.balign 4

.fn exp, global
/* 801ECAD0 001E9BB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801ECAD4 001E9BB4  7C 08 02 A6 */	mflr r0
/* 801ECAD8 001E9BB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801ECADC 001E9BBC  4B FF CF 2D */	bl __ieee754_exp
/* 801ECAE0 001E9BC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801ECAE4 001E9BC4  7C 08 03 A6 */	mtlr r0
/* 801ECAE8 001E9BC8  38 21 00 10 */	addi r1, r1, 0x10
/* 801ECAEC 001E9BCC  4E 80 00 20 */	blr
.endfn exp
