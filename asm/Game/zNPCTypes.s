.include "macros.inc"

.if 0

.section .text  # 0x800EED74 - 0x800EEE4C

.global zNPCTypes_RegisterTypes__FP8xFactory
zNPCTypes_RegisterTypes__FP8xFactory:
/* 800EEDF4 000EBBF4  94 21 FC A0 */	stwu r1, -0x360(r1)
/* 800EEDF8 000EBBF8  7C 08 02 A6 */	mflr r0
/* 800EEDFC 000EBBFC  3C 80 80 27 */	lis r4, lbl_802688D0@ha
/* 800EEE00 000EBC00  90 01 03 64 */	stw r0, 0x364(r1)
/* 800EEE04 000EBC04  38 84 88 D0 */	addi r4, r4, lbl_802688D0@l
/* 800EEE08 000EBC08  38 00 00 6A */	li r0, 0x6a
/* 800EEE0C 000EBC0C  38 C1 00 04 */	addi r6, r1, 4
/* 800EEE10 000EBC10  38 A4 FF FC */	addi r5, r4, -4
/* 800EEE14 000EBC14  7C 09 03 A6 */	mtctr r0
lbl_800EEE18:
/* 800EEE18 000EBC18  80 85 00 04 */	lwz r4, 4(r5)
/* 800EEE1C 000EBC1C  84 05 00 08 */	lwzu r0, 8(r5)
/* 800EEE20 000EBC20  90 86 00 04 */	stw r4, 4(r6)
/* 800EEE24 000EBC24  94 06 00 08 */	stwu r0, 8(r6)
/* 800EEE28 000EBC28  42 00 FF F0 */	bdnz lbl_800EEE18
/* 800EEE2C 000EBC2C  80 05 00 04 */	lwz r0, 4(r5)
/* 800EEE30 000EBC30  38 81 00 08 */	addi r4, r1, 8
/* 800EEE34 000EBC34  90 06 00 04 */	stw r0, 4(r6)
/* 800EEE38 000EBC38  48 02 05 71 */	bl RegItemType__8xFactoryFP12XGOFTypeInfo
/* 800EEE3C 000EBC3C  80 01 03 64 */	lwz r0, 0x364(r1)
/* 800EEE40 000EBC40  7C 08 03 A6 */	mtlr r0
/* 800EEE44 000EBC44  38 21 03 60 */	addi r1, r1, 0x360
/* 800EEE48 000EBC48  4E 80 00 20 */	blr 

.endif

.section .rodata
lbl_802688D0:
	.incbin "baserom.dol", 0x2658B0, 0x358
