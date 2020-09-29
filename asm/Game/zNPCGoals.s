.include "macros.inc"

.section .text  # 0x800D4A14 - 0x800D5114

.global zNPCGoals_RegisterTypes__FP8xFactory
zNPCGoals_RegisterTypes__FP8xFactory:
/* 800D50BC 000D1EBC  94 21 F7 90 */	stwu r1, -0x870(r1)
/* 800D50C0 000D1EC0  7C 08 02 A6 */	mflr r0
/* 800D50C4 000D1EC4  3C 80 80 26 */	lis r4, lbl_80266848@ha
/* 800D50C8 000D1EC8  90 01 08 74 */	stw r0, 0x874(r1)
/* 800D50CC 000D1ECC  38 84 68 48 */	addi r4, r4, lbl_80266848@l
/* 800D50D0 000D1ED0  38 00 01 0C */	li r0, 0x10c
/* 800D50D4 000D1ED4  38 C1 00 04 */	addi r6, r1, 4
/* 800D50D8 000D1ED8  38 A4 FF FC */	addi r5, r4, -4
/* 800D50DC 000D1EDC  7C 09 03 A6 */	mtctr r0
lbl_800D50E0:
/* 800D50E0 000D1EE0  80 85 00 04 */	lwz r4, 4(r5)
/* 800D50E4 000D1EE4  84 05 00 08 */	lwzu r0, 8(r5)
/* 800D50E8 000D1EE8  90 86 00 04 */	stw r4, 4(r6)
/* 800D50EC 000D1EEC  94 06 00 08 */	stwu r0, 8(r6)
/* 800D50F0 000D1EF0  42 00 FF F0 */	bdnz lbl_800D50E0
/* 800D50F4 000D1EF4  80 05 00 04 */	lwz r0, 4(r5)
/* 800D50F8 000D1EF8  38 81 00 08 */	addi r4, r1, 8
/* 800D50FC 000D1EFC  90 06 00 04 */	stw r0, 4(r6)
/* 800D5100 000D1F00  48 03 A2 A9 */	bl RegItemType__8xFactoryFP12XGOFTypeInfo
/* 800D5104 000D1F04  80 01 08 74 */	lwz r0, 0x874(r1)
/* 800D5108 000D1F08  7C 08 03 A6 */	mtlr r0
/* 800D510C 000D1F0C  38 21 08 70 */	addi r1, r1, 0x870
/* 800D5110 000D1F10  4E 80 00 20 */	blr 
.section .rodata
lbl_80266848:
	.incbin "baserom.dol", 0x263828, 0x868
