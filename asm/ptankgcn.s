.include "macros.inc"
.file "ptankgcn.c"

# 0x80206948 - 0x80206A54
.text
.balign 4

.fn PTankOpen, global
/* 80206948 00203A28  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8020694C 00203A2C  7C 08 02 A6 */	mflr r0
/* 80206950 00203A30  90 01 00 24 */	stw r0, 0x24(r1)
/* 80206954 00203A34  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80206958 00203A38  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8020695C 00203A3C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80206960 00203A40  7C 7D 1B 78 */	mr r29, r3
/* 80206964 00203A44  48 04 62 59 */	bl RxPipelineCreate
/* 80206968 00203A48  38 80 01 2F */	li r4, 0x12f
/* 8020696C 00203A4C  38 00 00 00 */	li r0, 0x0
/* 80206970 00203A50  90 83 00 2C */	stw r4, 0x2c(r3)
/* 80206974 00203A54  7C 7F 1B 78 */	mr r31, r3
/* 80206978 00203A58  90 03 00 30 */	stw r0, 0x30(r3)
/* 8020697C 00203A5C  48 04 77 71 */	bl RxPipelineLock
/* 80206980 00203A60  7C 7E 1B 78 */	mr r30, r3
/* 80206984 00203A64  48 01 9E 59 */	bl RxNodeDefinitionGetGameCubeAtomicAllInOne
/* 80206988 00203A68  7C 60 1B 78 */	mr r0, r3
/* 8020698C 00203A6C  7F C3 F3 78 */	mr r3, r30
/* 80206990 00203A70  7C 1E 03 78 */	mr r30, r0
/* 80206994 00203A74  38 80 00 00 */	li r4, 0x0
/* 80206998 00203A78  7F C5 F3 78 */	mr r5, r30
/* 8020699C 00203A7C  38 C0 00 00 */	li r6, 0x0
/* 802069A0 00203A80  4C C6 31 82 */	crclr 4*cr1+eq
/* 802069A4 00203A84  48 04 7B 51 */	bl RxLockedPipeAddFragment
/* 802069A8 00203A88  48 04 6C 7D */	bl RxLockedPipeUnlock
/* 802069AC 00203A8C  80 9E 00 00 */	lwz r4, 0x0(r30)
/* 802069B0 00203A90  7F E3 FB 78 */	mr r3, r31
/* 802069B4 00203A94  38 A0 00 00 */	li r5, 0x0
/* 802069B8 00203A98  38 C0 00 00 */	li r6, 0x0
/* 802069BC 00203A9C  48 04 7A 35 */	bl RxPipelineFindNodeByName
/* 802069C0 00203AA0  3C 80 80 20 */	lis r4, _rxPTankGameCubeRenderCallBack@ha
/* 802069C4 00203AA4  7C 7E 1B 78 */	mr r30, r3
/* 802069C8 00203AA8  38 84 70 4C */	addi r4, r4, _rxPTankGameCubeRenderCallBack@l
/* 802069CC 00203AAC  48 01 8D 6D */	bl RxGameCubeAllInOneSetRenderCallBack
/* 802069D0 00203AB0  7F C3 F3 78 */	mr r3, r30
/* 802069D4 00203AB4  38 80 00 00 */	li r4, 0x0
/* 802069D8 00203AB8  48 01 8D 31 */	bl _rxGameCubeAllInOneSetInstanceCallBack
/* 802069DC 00203ABC  7F C3 F3 78 */	mr r3, r30
/* 802069E0 00203AC0  38 80 00 00 */	li r4, 0x0
/* 802069E4 00203AC4  48 01 8D 3D */	bl _rxGameCubeAllInOneSetReinstanceCallBack
/* 802069E8 00203AC8  93 ED 9E 30 */	stw r31, _rxPTankGameCubeRenderPipeline@sda21(r13)
/* 802069EC 00203ACC  7F A3 EB 78 */	mr r3, r29
/* 802069F0 00203AD0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802069F4 00203AD4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802069F8 00203AD8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802069FC 00203ADC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80206A00 00203AE0  7C 08 03 A6 */	mtlr r0
/* 80206A04 00203AE4  38 21 00 20 */	addi r1, r1, 0x20
/* 80206A08 00203AE8  4E 80 00 20 */	blr
.endfn PTankOpen

.fn PTankClose, global
/* 80206A0C 00203AEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80206A10 00203AF0  7C 08 02 A6 */	mflr r0
/* 80206A14 00203AF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80206A18 00203AF8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80206A1C 00203AFC  7C 7F 1B 78 */	mr r31, r3
/* 80206A20 00203B00  80 0D 9E 30 */	lwz r0, _rxPTankGameCubeRenderPipeline@sda21(r13)
/* 80206A24 00203B04  28 00 00 00 */	cmplwi r0, 0x0
/* 80206A28 00203B08  41 82 00 14 */	beq .L_80206A3C
/* 80206A2C 00203B0C  7C 03 03 78 */	mr r3, r0
/* 80206A30 00203B10  48 04 62 19 */	bl _rxPipelineDestroy
/* 80206A34 00203B14  38 00 00 00 */	li r0, 0x0
/* 80206A38 00203B18  90 0D 9E 30 */	stw r0, _rxPTankGameCubeRenderPipeline@sda21(r13)
.L_80206A3C:
/* 80206A3C 00203B1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80206A40 00203B20  7F E3 FB 78 */	mr r3, r31
/* 80206A44 00203B24  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80206A48 00203B28  7C 08 03 A6 */	mtlr r0
/* 80206A4C 00203B2C  38 21 00 10 */	addi r1, r1, 0x10
/* 80206A50 00203B30  4E 80 00 20 */	blr
.endfn PTankClose

# 0x803CC730 - 0x803CC738
.section .sbss, "wa", @nobits
.balign 8

.obj _rxPTankGameCubeRenderPipeline, global
	.skip 0x4
.endobj _rxPTankGameCubeRenderPipeline
	.skip 0x4
