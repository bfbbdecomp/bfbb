.include "macros.inc"
.file "bapipe.c"

# 0x8024C520 - 0x8024C5A0
.text
.balign 4

.fn _rwRenderPipelineOpen, global
/* 8024C520 00249600  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8024C524 00249604  7C 08 02 A6 */	mflr r0
/* 8024C528 00249608  90 01 00 14 */	stw r0, 0x14(r1)
/* 8024C52C 0024960C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8024C530 00249610  7C 7F 1B 78 */	mr r31, r3
/* 8024C534 00249614  90 8D A0 58 */	stw r4, _rxPipelineGlobalsOffset@sda21(r13)
/* 8024C538 00249618  48 00 01 75 */	bl _rxPipelineOpen
/* 8024C53C 0024961C  2C 03 00 00 */	cmpwi r3, 0x0
/* 8024C540 00249620  41 82 00 0C */	beq .L_8024C54C
/* 8024C544 00249624  7F E3 FB 78 */	mr r3, r31
/* 8024C548 00249628  48 00 00 08 */	b .L_8024C550
.L_8024C54C:
/* 8024C54C 0024962C  38 60 00 00 */	li r3, 0x0
.L_8024C550:
/* 8024C550 00249630  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8024C554 00249634  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8024C558 00249638  7C 08 03 A6 */	mtlr r0
/* 8024C55C 0024963C  38 21 00 10 */	addi r1, r1, 0x10
/* 8024C560 00249640  4E 80 00 20 */	blr
.endfn _rwRenderPipelineOpen

.fn _rwRenderPipelineClose, global
/* 8024C564 00249644  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8024C568 00249648  7C 08 02 A6 */	mflr r0
/* 8024C56C 0024964C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8024C570 00249650  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8024C574 00249654  7C 7F 1B 78 */	mr r31, r3
/* 8024C578 00249658  48 00 00 D5 */	bl _rxPipelineClose
/* 8024C57C 0024965C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8024C580 00249660  7F E3 FB 78 */	mr r3, r31
/* 8024C584 00249664  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8024C588 00249668  7C 08 03 A6 */	mtlr r0
/* 8024C58C 0024966C  38 21 00 10 */	addi r1, r1, 0x10
/* 8024C590 00249670  4E 80 00 20 */	blr
.endfn _rwRenderPipelineClose

.fn _rwPipeAttach, global
/* 8024C594 00249674  38 60 00 01 */	li r3, 0x1
/* 8024C598 00249678  4E 80 00 20 */	blr
.endfn _rwPipeAttach

.fn _rwPipeInitForCamera, global
/* 8024C59C 0024967C  4E 80 00 20 */	blr
.endfn _rwPipeInitForCamera

# 0x803CC958 - 0x803CC960
.section .sbss, "wa", @nobits
.balign 8

.obj _rxPipelineGlobalsOffset, global
	.skip 0x4
.endobj _rxPipelineGlobalsOffset
	.skip 0x4
