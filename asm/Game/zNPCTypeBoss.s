.include "macros.inc"

.if 0

.section .text  # 0x8013612C - 0x801365C8

ZNPC_AnimTable_BossSBobbyArm__Fv:
/* 80136334 00133134  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80136338 00133138  7C 08 02 A6 */	mflr r0
/* 8013633C 0013313C  3C 60 80 27 */	lis r3, lbl_8026CBB8@ha
/* 80136340 00133140  38 80 00 00 */	li r4, 0
/* 80136344 00133144  90 01 00 34 */	stw r0, 0x34(r1)
/* 80136348 00133148  38 63 CB B8 */	addi r3, r3, lbl_8026CBB8@l
/* 8013634C 0013314C  38 63 03 6D */	addi r3, r3, 0x36d
/* 80136350 00133150  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80136354 00133154  80 A2 A3 88 */	lwz r5, _917_0-_SDA2_BASE_(r2)
/* 80136358 00133158  80 02 A3 8C */	lwz r0, lbl_803CED0C-_SDA2_BASE_(r2)
/* 8013635C 0013315C  90 A1 00 18 */	stw r5, 0x18(r1)
/* 80136360 00133160  38 A0 00 00 */	li r5, 0
/* 80136364 00133164  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80136368 00133168  4B ED 09 09 */	bl xAnimTableNew__FPCcPP10xAnimTableUi
/* 8013636C 0013316C  3C A0 80 00 */	lis r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80136370 00133170  3C 80 80 2A */	lis r4, g_strz_bossanim@ha
/* 80136374 00133174  38 05 6C FC */	addi r0, r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80136378 00133178  7C 7F 1B 78 */	mr r31, r3
/* 8013637C 0013317C  90 01 00 08 */	stw r0, 8(r1)
/* 80136380 00133180  38 00 00 00 */	li r0, 0
/* 80136384 00133184  38 84 93 A0 */	addi r4, r4, g_strz_bossanim@l
/* 80136388 00133188  38 A0 00 10 */	li r5, 0x10
/* 8013638C 0013318C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80136390 00133190  38 C0 00 00 */	li r6, 0
/* 80136394 00133194  38 E0 00 00 */	li r7, 0
/* 80136398 00133198  39 00 00 00 */	li r8, 0
/* 8013639C 0013319C  90 01 00 10 */	stw r0, 0x10(r1)
/* 801363A0 001331A0  39 20 00 00 */	li r9, 0
/* 801363A4 001331A4  39 40 00 00 */	li r10, 0
/* 801363A8 001331A8  80 84 00 04 */	lwz r4, 4(r4)
/* 801363AC 001331AC  C0 22 A3 90 */	lfs f1, _920_2-_SDA2_BASE_(r2)
/* 801363B0 001331B0  C0 42 A3 94 */	lfs f2, _921_2-_SDA2_BASE_(r2)
/* 801363B4 001331B4  4B ED 09 A5 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 801363B8 001331B8  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 801363BC 001331BC  C0 22 A3 98 */	lfs f1, _922_0-_SDA2_BASE_(r2)
/* 801363C0 001331C0  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 801363C4 001331C4  38 A1 00 18 */	addi r5, r1, 0x18
/* 801363C8 001331C8  7F E3 FB 78 */	mr r3, r31
/* 801363CC 001331CC  38 C0 00 01 */	li r6, 1
/* 801363D0 001331D0  4B FB E0 29 */	bl NPCC_BuildStandardAnimTran__FP10xAnimTablePPcPiif
/* 801363D4 001331D4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801363D8 001331D8  7F E3 FB 78 */	mr r3, r31
/* 801363DC 001331DC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801363E0 001331E0  7C 08 03 A6 */	mtlr r0
/* 801363E4 001331E4  38 21 00 30 */	addi r1, r1, 0x30
/* 801363E8 001331E8  4E 80 00 20 */	blr 

.global BOSS_InitEffects__Fv
BOSS_InitEffects__Fv:
/* 80136424 00133224  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80136428 00133228  7C 08 02 A6 */	mflr r0
/* 8013642C 0013322C  3C 60 80 27 */	lis r3, lbl_8026CBB8@ha
/* 80136430 00133230  38 63 CB B8 */	addi r3, r3, lbl_8026CBB8@l
/* 80136434 00133234  90 01 00 14 */	stw r0, 0x14(r1)
/* 80136438 00133238  38 63 03 7B */	addi r3, r3, 0x37b
/* 8013643C 0013323C  4B F7 24 09 */	bl zParEmitterFind__FPCc
/* 80136440 00133240  3C 80 80 32 */	lis r4, lbl_80324468@ha
/* 80136444 00133244  90 6D 96 44 */	stw r3, g_pemit_holder-_SDA_BASE_(r13)
/* 80136448 00133248  38 64 44 68 */	addi r3, r4, lbl_80324468@l
/* 8013644C 0013324C  38 00 01 00 */	li r0, 0x100
/* 80136450 00133250  90 03 01 38 */	stw r0, 0x138(r3)
/* 80136454 00133254  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80136458 00133258  7C 08 03 A6 */	mtlr r0
/* 8013645C 0013325C  38 21 00 10 */	addi r1, r1, 0x10
/* 80136460 00133260  4E 80 00 20 */	blr 

.endif 

.section .sdata2
.balign 8
.global _917_0
_917_0:
	.4byte 0x00000001
/* SPECULATION: link order */
.global lbl_803CED0C
lbl_803CED0C:
	.4byte 0x00000000
.global _920_2
_920_2:
	.4byte 0x3F800000
.global _921_2
_921_2:
	.4byte 0x00000000
.global _922_0
_922_0:
	.4byte 0x3E4CCCCD
.global _947_3
_947_3:
	.4byte 0x7E967699
