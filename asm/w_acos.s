.include "macros.inc"
.file "w_acos.c"

# 0x801ECA70 - 0x801ECA90
.text
.balign 4

.fn acos, global
/* 801ECA70 001E9B50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801ECA74 001E9B54  7C 08 02 A6 */	mflr r0
/* 801ECA78 001E9B58  90 01 00 14 */	stw r0, 0x14(r1)
/* 801ECA7C 001E9B5C  4B FF C7 89 */	bl __ieee754_acos
/* 801ECA80 001E9B60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801ECA84 001E9B64  7C 08 03 A6 */	mtlr r0
/* 801ECA88 001E9B68  38 21 00 10 */	addi r1, r1, 0x10
/* 801ECA8C 001E9B6C  4E 80 00 20 */	blr
.endfn acos
