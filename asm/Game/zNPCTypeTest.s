.include "macros.inc"

.if 0

.section .text  # 0x80135ACC - 0x80135EA0

ZNPC_AnimTable_Test__Fv:
/* 80135BD0 001329D0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80135BD4 001329D4  7C 08 02 A6 */	mflr r0
/* 80135BD8 001329D8  3C 60 80 27 */	lis r3, _stringBase0_84@ha
/* 80135BDC 001329DC  3C A0 80 2A */	lis r5, g_strz_testanim@ha
/* 80135BE0 001329E0  90 01 00 34 */	stw r0, 0x34(r1)
/* 80135BE4 001329E4  38 63 CA 50 */	addi r3, r3, _stringBase0_84@l
/* 80135BE8 001329E8  38 80 00 00 */	li r4, 0
/* 80135BEC 001329EC  BF 41 00 18 */	stmw r26, 0x18(r1)
/* 80135BF0 001329F0  3B A5 8F E4 */	addi r29, r5, g_strz_testanim@l
/* 80135BF4 001329F4  38 A0 00 00 */	li r5, 0
/* 80135BF8 001329F8  38 63 00 4E */	addi r3, r3, 0x4e
/* 80135BFC 001329FC  4B ED 10 75 */	bl xAnimTableNew__FPCcPP10xAnimTableUi
/* 80135C00 00132A00  3C 80 80 2A */	lis r4, g_strz_testanim@ha
/* 80135C04 00132A04  7C 7B 1B 78 */	mr r27, r3
/* 80135C08 00132A08  38 A4 8F E4 */	addi r5, r4, g_strz_testanim@l
/* 80135C0C 00132A0C  3B 40 00 01 */	li r26, 1
/* 80135C10 00132A10  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80135C14 00132A14  3B E0 00 00 */	li r31, 0
/* 80135C18 00132A18  3B 85 00 04 */	addi r28, r5, 4
/* 80135C1C 00132A1C  3B C4 6C FC */	addi r30, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
lbl_80135C20:
/* 80135C20 00132A20  93 C1 00 08 */	stw r30, 8(r1)
/* 80135C24 00132A24  7F 63 DB 78 */	mr r3, r27
/* 80135C28 00132A28  38 A0 00 10 */	li r5, 0x10
/* 80135C2C 00132A2C  38 C0 00 01 */	li r6, 1
/* 80135C30 00132A30  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80135C34 00132A34  38 E0 00 00 */	li r7, 0
/* 80135C38 00132A38  39 00 00 00 */	li r8, 0
/* 80135C3C 00132A3C  39 20 00 00 */	li r9, 0
/* 80135C40 00132A40  93 E1 00 10 */	stw r31, 0x10(r1)
/* 80135C44 00132A44  39 40 00 00 */	li r10, 0
/* 80135C48 00132A48  80 9C 00 00 */	lwz r4, 0(r28)
/* 80135C4C 00132A4C  C0 22 A3 70 */	lfs f1, _830_2-_SDA2_BASE_(r2)
/* 80135C50 00132A50  C0 42 A3 74 */	lfs f2, _831_2-_SDA2_BASE_(r2)
/* 80135C54 00132A54  4B ED 11 05 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80135C58 00132A58  3B 5A 00 01 */	addi r26, r26, 1
/* 80135C5C 00132A5C  3B 9C 00 04 */	addi r28, r28, 4
/* 80135C60 00132A60  2C 1A 00 0B */	cmpwi r26, 0xb
/* 80135C64 00132A64  41 80 FF BC */	blt lbl_80135C20
/* 80135C68 00132A68  3B 40 00 01 */	li r26, 1
/* 80135C6C 00132A6C  3B 9D 00 04 */	addi r28, r29, 4
lbl_80135C70:
/* 80135C70 00132A70  2C 1A 00 0A */	cmpwi r26, 0xa
/* 80135C74 00132A74  40 80 00 40 */	bge lbl_80135CB4
/* 80135C78 00132A78  38 00 00 00 */	li r0, 0
/* 80135C7C 00132A7C  7F 63 DB 78 */	mr r3, r27
/* 80135C80 00132A80  90 01 00 08 */	stw r0, 8(r1)
/* 80135C84 00132A84  38 C0 00 00 */	li r6, 0
/* 80135C88 00132A88  38 E0 00 00 */	li r7, 0
/* 80135C8C 00132A8C  39 00 00 00 */	li r8, 0
/* 80135C90 00132A90  90 01 00 0C */	stw r0, 0xc(r1)
/* 80135C94 00132A94  39 20 00 00 */	li r9, 0
/* 80135C98 00132A98  39 40 00 01 */	li r10, 1
/* 80135C9C 00132A9C  C0 22 A3 74 */	lfs f1, _831_2-_SDA2_BASE_(r2)
/* 80135CA0 00132AA0  80 9C 00 00 */	lwz r4, 0(r28)
/* 80135CA4 00132AA4  FC 40 08 90 */	fmr f2, f1
/* 80135CA8 00132AA8  80 BC 00 04 */	lwz r5, 4(r28)
/* 80135CAC 00132AAC  C0 62 A3 78 */	lfs f3, _832_0-_SDA2_BASE_(r2)
/* 80135CB0 00132AB0  4B ED 17 11 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
lbl_80135CB4:
/* 80135CB4 00132AB4  2C 1A 00 01 */	cmpwi r26, 1
/* 80135CB8 00132AB8  40 81 00 40 */	ble lbl_80135CF8
/* 80135CBC 00132ABC  38 00 00 00 */	li r0, 0
/* 80135CC0 00132AC0  7F 63 DB 78 */	mr r3, r27
/* 80135CC4 00132AC4  90 01 00 08 */	stw r0, 8(r1)
/* 80135CC8 00132AC8  38 C0 00 00 */	li r6, 0
/* 80135CCC 00132ACC  38 E0 00 00 */	li r7, 0
/* 80135CD0 00132AD0  39 00 00 00 */	li r8, 0
/* 80135CD4 00132AD4  90 01 00 0C */	stw r0, 0xc(r1)
/* 80135CD8 00132AD8  39 20 00 00 */	li r9, 0
/* 80135CDC 00132ADC  39 40 00 01 */	li r10, 1
/* 80135CE0 00132AE0  C0 22 A3 74 */	lfs f1, _831_2-_SDA2_BASE_(r2)
/* 80135CE4 00132AE4  80 9C 00 00 */	lwz r4, 0(r28)
/* 80135CE8 00132AE8  FC 40 08 90 */	fmr f2, f1
/* 80135CEC 00132AEC  80 BD 00 04 */	lwz r5, 4(r29)
/* 80135CF0 00132AF0  C0 62 A3 78 */	lfs f3, _832_0-_SDA2_BASE_(r2)
/* 80135CF4 00132AF4  4B ED 16 CD */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
lbl_80135CF8:
/* 80135CF8 00132AF8  3B 5A 00 01 */	addi r26, r26, 1
/* 80135CFC 00132AFC  3B 9C 00 04 */	addi r28, r28, 4
/* 80135D00 00132B00  2C 1A 00 0B */	cmpwi r26, 0xb
/* 80135D04 00132B04  41 80 FF 6C */	blt lbl_80135C70
/* 80135D08 00132B08  7F 63 DB 78 */	mr r3, r27
/* 80135D0C 00132B0C  BB 41 00 18 */	lmw r26, 0x18(r1)
/* 80135D10 00132B10  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80135D14 00132B14  7C 08 03 A6 */	mtlr r0
/* 80135D18 00132B18  38 21 00 30 */	addi r1, r1, 0x30
/* 80135D1C 00132B1C  4E 80 00 20 */	blr 

.endif

.section .sdata2
.balign 8
.global _830_2
_830_2:
	.incbin "baserom.dol", 0x2B8590, 0x4
.global _831_2
_831_2:
	.incbin "baserom.dol", 0x2B8594, 0x4
.global _832_0
_832_0:
	.incbin "baserom.dol", 0x2B8598, 0x4
.global _866_5
_866_5:
	.incbin "baserom.dol", 0x2B859C, 0x4
.global _867_6
_867_6:
	.incbin "baserom.dol", 0x2B85A0, 0x4
