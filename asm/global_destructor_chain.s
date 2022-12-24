.include "macros.inc"
.file "global_destructor_chain.c"

# 0x801ECE24 - 0x801ECE6C
.text
.balign 4

.fn __destroy_global_chain, global
/* 801ECE24 001E9F04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801ECE28 001E9F08  7C 08 02 A6 */	mflr r0
/* 801ECE2C 001E9F0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801ECE30 001E9F10  48 00 00 20 */	b .L_801ECE50
.L_801ECE34:
/* 801ECE34 001E9F14  80 03 00 00 */	lwz r0, 0x0(r3)
/* 801ECE38 001E9F18  38 80 FF FF */	li r4, -0x1
/* 801ECE3C 001E9F1C  90 0D 9D B0 */	stw r0, __global_destructor_chain@sda21(r13)
/* 801ECE40 001E9F20  81 83 00 04 */	lwz r12, 0x4(r3)
/* 801ECE44 001E9F24  80 63 00 08 */	lwz r3, 0x8(r3)
/* 801ECE48 001E9F28  7D 89 03 A6 */	mtctr r12
/* 801ECE4C 001E9F2C  4E 80 04 21 */	bctrl
.L_801ECE50:
/* 801ECE50 001E9F30  80 6D 9D B0 */	lwz r3, __global_destructor_chain@sda21(r13)
/* 801ECE54 001E9F34  28 03 00 00 */	cmplwi r3, 0x0
/* 801ECE58 001E9F38  40 82 FF DC */	bne .L_801ECE34
/* 801ECE5C 001E9F3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801ECE60 001E9F40  7C 08 03 A6 */	mtlr r0
/* 801ECE64 001E9F44  38 21 00 10 */	addi r1, r1, 0x10
/* 801ECE68 001E9F48  4E 80 00 20 */	blr
.endfn __destroy_global_chain

# 0x80251D48 - 0x80251D4C
.section .dtors, "a"
.balign 4

.obj __destroy_global_chain_reference, local
	.4byte __destroy_global_chain
.endobj __destroy_global_chain_reference

# 0x803CC6B0 - 0x803CC6B8
.section .sbss, "wa", @nobits
.balign 8

.obj __global_destructor_chain, global
	.skip 0x4
.endobj __global_destructor_chain
	.skip 0x4
