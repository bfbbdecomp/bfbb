.include "macros.inc"
.file "bacolor.c"

# 0x8022F518 - 0x8022F540
.text
.balign 4

.fn _rwColorOpen, global
/* 8022F518 0022C5F8  38 AD 9F 20 */	addi r5, r13, colorModule@sda21
/* 8022F51C 0022C5FC  80 85 00 04 */	lwz r4, 0x4(r5)
/* 8022F520 0022C600  38 04 00 01 */	addi r0, r4, 0x1
/* 8022F524 0022C604  90 05 00 04 */	stw r0, 0x4(r5)
/* 8022F528 0022C608  4E 80 00 20 */	blr
.endfn _rwColorOpen

.fn _rwColorClose, global
/* 8022F52C 0022C60C  38 AD 9F 20 */	addi r5, r13, colorModule@sda21
/* 8022F530 0022C610  80 85 00 04 */	lwz r4, 0x4(r5)
/* 8022F534 0022C614  38 04 FF FF */	addi r0, r4, -0x1
/* 8022F538 0022C618  90 05 00 04 */	stw r0, 0x4(r5)
/* 8022F53C 0022C61C  4E 80 00 20 */	blr
.endfn _rwColorClose

# 0x803CC820 - 0x803CC828
.section .sbss, "wa", @nobits
.balign 8

.obj colorModule, local
	.skip 0x8
.endobj colorModule
