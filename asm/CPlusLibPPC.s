.include "macros.inc"
.file "CPlusLibPPC.cp"

# 0x801ECE6C - 0x801ECE9C
.text
.balign 4

.fn __copy, global
/* 801ECE6C 001E9F4C  28 03 00 00 */	cmplwi r3, 0x0
/* 801ECE70 001E9F50  4D 82 00 20 */	beqlr
/* 801ECE74 001E9F54  28 05 00 00 */	cmplwi r5, 0x0
/* 801ECE78 001E9F58  4D 82 00 20 */	beqlr
/* 801ECE7C 001E9F5C  7C 66 1B 78 */	mr r6, r3
.L_801ECE80:
/* 801ECE80 001E9F60  88 04 00 00 */	lbz r0, 0x0(r4)
/* 801ECE84 001E9F64  34 A5 FF FF */	addic. r5, r5, -0x1
/* 801ECE88 001E9F68  38 84 00 01 */	addi r4, r4, 0x1
/* 801ECE8C 001E9F6C  98 06 00 00 */	stb r0, 0x0(r6)
/* 801ECE90 001E9F70  38 C6 00 01 */	addi r6, r6, 0x1
/* 801ECE94 001E9F74  40 82 FF EC */	bne .L_801ECE80
/* 801ECE98 001E9F78  4E 80 00 20 */	blr
.endfn __copy
