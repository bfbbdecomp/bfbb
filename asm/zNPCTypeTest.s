.include "macros.inc"
.file "zNPCTypeTest.cpp"

# 0x80135ACC - 0x80135EA0
.text
.balign 4

# ZNPC_Test_Startup()
.fn ZNPC_Test_Startup__Fv, global
/* 80135ACC 00132BAC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80135AD0 00132BB0  7C 08 02 A6 */	mflr r0
/* 80135AD4 00132BB4  3C 80 80 2A */	lis r4, g_strz_testanim@ha
/* 80135AD8 00132BB8  3C 60 80 2A */	lis r3, g_hash_testanim@ha
/* 80135ADC 00132BBC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80135AE0 00132BC0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80135AE4 00132BC4  3B E4 8F E4 */	addi r31, r4, g_strz_testanim@l
/* 80135AE8 00132BC8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80135AEC 00132BCC  3B C3 8F B8 */	addi r30, r3, g_hash_testanim@l
/* 80135AF0 00132BD0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80135AF4 00132BD4  3B A0 00 00 */	li r29, 0x0
.L_80135AF8:
/* 80135AF8 00132BD8  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 80135AFC 00132BDC  4B F1 67 19 */	bl xStrHash__FPCc
/* 80135B00 00132BE0  3B BD 00 01 */	addi r29, r29, 0x1
/* 80135B04 00132BE4  90 7E 00 00 */	stw r3, 0x0(r30)
/* 80135B08 00132BE8  2C 1D 00 0B */	cmpwi r29, 0xb
/* 80135B0C 00132BEC  3B FF 00 04 */	addi r31, r31, 0x4
/* 80135B10 00132BF0  3B DE 00 04 */	addi r30, r30, 0x4
/* 80135B14 00132BF4  41 80 FF E4 */	blt .L_80135AF8
/* 80135B18 00132BF8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80135B1C 00132BFC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80135B20 00132C00  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80135B24 00132C04  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80135B28 00132C08  7C 08 03 A6 */	mtlr r0
/* 80135B2C 00132C0C  38 21 00 20 */	addi r1, r1, 0x20
/* 80135B30 00132C10  4E 80 00 20 */	blr
.endfn ZNPC_Test_Startup__Fv

# ZNPC_Test_Shutdown()
.fn ZNPC_Test_Shutdown__Fv, global
/* 80135B34 00132C14  4E 80 00 20 */	blr
.endfn ZNPC_Test_Shutdown__Fv

# ZNPC_Create_Test(int, RyzMemGrow*, void*)
.fn ZNPC_Create_Test__FiP10RyzMemGrowPv, global
/* 80135B38 00132C18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80135B3C 00132C1C  7C 08 02 A6 */	mflr r0
/* 80135B40 00132C20  3C A0 4E 54 */	lis r5, 0x4e54
/* 80135B44 00132C24  90 01 00 14 */	stw r0, 0x14(r1)
/* 80135B48 00132C28  38 05 53 34 */	addi r0, r5, 0x5334
/* 80135B4C 00132C2C  7C 85 23 78 */	mr r5, r4
/* 80135B50 00132C30  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80135B54 00132C34  7C 7F 1B 78 */	mr r31, r3
/* 80135B58 00132C38  7C 1F 00 00 */	cmpw r31, r0
/* 80135B5C 00132C3C  38 60 00 00 */	li r3, 0x0
/* 80135B60 00132C40  41 82 00 08 */	beq .L_80135B68
/* 80135B64 00132C44  48 00 00 28 */	b .L_80135B8C
.L_80135B68:
/* 80135B68 00132C48  7F E4 FB 78 */	mr r4, r31
/* 80135B6C 00132C4C  38 60 02 AC */	li r3, 0x2ac
/* 80135B70 00132C50  4B FD 95 E1 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 80135B74 00132C54  7C 60 1B 79 */	mr. r0, r3
/* 80135B78 00132C58  41 82 00 10 */	beq .L_80135B88
/* 80135B7C 00132C5C  7F E4 FB 78 */	mr r4, r31
/* 80135B80 00132C60  48 00 01 A1 */	bl __ct__8zNPCTestFi
/* 80135B84 00132C64  7C 60 1B 78 */	mr r0, r3
.L_80135B88:
/* 80135B88 00132C68  7C 03 03 78 */	mr r3, r0
.L_80135B8C:
/* 80135B8C 00132C6C  28 03 00 00 */	cmplwi r3, 0x0
/* 80135B90 00132C70  41 82 00 08 */	beq .L_80135B98
/* 80135B94 00132C74  38 63 00 D0 */	addi r3, r3, 0xd0
.L_80135B98:
/* 80135B98 00132C78  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80135B9C 00132C7C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80135BA0 00132C80  7C 08 03 A6 */	mtlr r0
/* 80135BA4 00132C84  38 21 00 10 */	addi r1, r1, 0x10
/* 80135BA8 00132C88  4E 80 00 20 */	blr
.endfn ZNPC_Create_Test__FiP10RyzMemGrowPv

# ZNPC_Destroy_Test(xFactoryInst*)
.fn ZNPC_Destroy_Test__FP12xFactoryInst, global
/* 80135BAC 00132C8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80135BB0 00132C90  7C 08 02 A6 */	mflr r0
/* 80135BB4 00132C94  38 80 00 01 */	li r4, 0x1
/* 80135BB8 00132C98  90 01 00 14 */	stw r0, 0x14(r1)
/* 80135BBC 00132C9C  4B FA 33 E9 */	bl __dt__12xFactoryInstFv
/* 80135BC0 00132CA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80135BC4 00132CA4  7C 08 03 A6 */	mtlr r0
/* 80135BC8 00132CA8  38 21 00 10 */	addi r1, r1, 0x10
/* 80135BCC 00132CAC  4E 80 00 20 */	blr
.endfn ZNPC_Destroy_Test__FP12xFactoryInst

# ZNPC_AnimTable_Test()
.fn ZNPC_AnimTable_Test__Fv, global
/* 80135BD0 00132CB0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80135BD4 00132CB4  7C 08 02 A6 */	mflr r0
/* 80135BD8 00132CB8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80135BDC 00132CBC  3C A0 80 2A */	lis r5, g_strz_testanim@ha
/* 80135BE0 00132CC0  90 01 00 34 */	stw r0, 0x34(r1)
/* 80135BE4 00132CC4  38 63 CA 50 */	addi r3, r3, "@stringBase0"@l
/* 80135BE8 00132CC8  38 80 00 00 */	li r4, 0x0
/* 80135BEC 00132CCC  BF 41 00 18 */	stmw r26, 0x18(r1)
/* 80135BF0 00132CD0  3B A5 8F E4 */	addi r29, r5, g_strz_testanim@l
/* 80135BF4 00132CD4  38 A0 00 00 */	li r5, 0x0
/* 80135BF8 00132CD8  38 63 00 4E */	addi r3, r3, 0x4e
/* 80135BFC 00132CDC  4B ED 10 75 */	bl xAnimTableNew__FPCcPP10xAnimTableUi
/* 80135C00 00132CE0  3C 80 80 2A */	lis r4, g_strz_testanim@ha
/* 80135C04 00132CE4  7C 7B 1B 78 */	mr r27, r3
/* 80135C08 00132CE8  38 A4 8F E4 */	addi r5, r4, g_strz_testanim@l
/* 80135C0C 00132CEC  3B 40 00 01 */	li r26, 0x1
/* 80135C10 00132CF0  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80135C14 00132CF4  3B E0 00 00 */	li r31, 0x0
/* 80135C18 00132CF8  3B 85 00 04 */	addi r28, r5, 0x4
/* 80135C1C 00132CFC  3B C4 6C FC */	addi r30, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
.L_80135C20:
/* 80135C20 00132D00  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80135C24 00132D04  7F 63 DB 78 */	mr r3, r27
/* 80135C28 00132D08  38 A0 00 10 */	li r5, 0x10
/* 80135C2C 00132D0C  38 C0 00 01 */	li r6, 0x1
/* 80135C30 00132D10  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80135C34 00132D14  38 E0 00 00 */	li r7, 0x0
/* 80135C38 00132D18  39 00 00 00 */	li r8, 0x0
/* 80135C3C 00132D1C  39 20 00 00 */	li r9, 0x0
/* 80135C40 00132D20  93 E1 00 10 */	stw r31, 0x10(r1)
/* 80135C44 00132D24  39 40 00 00 */	li r10, 0x0
/* 80135C48 00132D28  80 9C 00 00 */	lwz r4, 0x0(r28)
/* 80135C4C 00132D2C  C0 22 A3 70 */	lfs f1, "@830"@sda21(r2)
/* 80135C50 00132D30  C0 42 A3 74 */	lfs f2, "@831"@sda21(r2)
/* 80135C54 00132D34  4B ED 11 05 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80135C58 00132D38  3B 5A 00 01 */	addi r26, r26, 0x1
/* 80135C5C 00132D3C  3B 9C 00 04 */	addi r28, r28, 0x4
/* 80135C60 00132D40  2C 1A 00 0B */	cmpwi r26, 0xb
/* 80135C64 00132D44  41 80 FF BC */	blt .L_80135C20
/* 80135C68 00132D48  3B 40 00 01 */	li r26, 0x1
/* 80135C6C 00132D4C  3B 9D 00 04 */	addi r28, r29, 0x4
.L_80135C70:
/* 80135C70 00132D50  2C 1A 00 0A */	cmpwi r26, 0xa
/* 80135C74 00132D54  40 80 00 40 */	bge .L_80135CB4
/* 80135C78 00132D58  38 00 00 00 */	li r0, 0x0
/* 80135C7C 00132D5C  7F 63 DB 78 */	mr r3, r27
/* 80135C80 00132D60  90 01 00 08 */	stw r0, 0x8(r1)
/* 80135C84 00132D64  38 C0 00 00 */	li r6, 0x0
/* 80135C88 00132D68  38 E0 00 00 */	li r7, 0x0
/* 80135C8C 00132D6C  39 00 00 00 */	li r8, 0x0
/* 80135C90 00132D70  90 01 00 0C */	stw r0, 0xc(r1)
/* 80135C94 00132D74  39 20 00 00 */	li r9, 0x0
/* 80135C98 00132D78  39 40 00 01 */	li r10, 0x1
/* 80135C9C 00132D7C  C0 22 A3 74 */	lfs f1, "@831"@sda21(r2)
/* 80135CA0 00132D80  80 9C 00 00 */	lwz r4, 0x0(r28)
/* 80135CA4 00132D84  FC 40 08 90 */	fmr f2, f1
/* 80135CA8 00132D88  80 BC 00 04 */	lwz r5, 0x4(r28)
/* 80135CAC 00132D8C  C0 62 A3 78 */	lfs f3, "@832"@sda21(r2)
/* 80135CB0 00132D90  4B ED 17 11 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
.L_80135CB4:
/* 80135CB4 00132D94  2C 1A 00 01 */	cmpwi r26, 0x1
/* 80135CB8 00132D98  40 81 00 40 */	ble .L_80135CF8
/* 80135CBC 00132D9C  38 00 00 00 */	li r0, 0x0
/* 80135CC0 00132DA0  7F 63 DB 78 */	mr r3, r27
/* 80135CC4 00132DA4  90 01 00 08 */	stw r0, 0x8(r1)
/* 80135CC8 00132DA8  38 C0 00 00 */	li r6, 0x0
/* 80135CCC 00132DAC  38 E0 00 00 */	li r7, 0x0
/* 80135CD0 00132DB0  39 00 00 00 */	li r8, 0x0
/* 80135CD4 00132DB4  90 01 00 0C */	stw r0, 0xc(r1)
/* 80135CD8 00132DB8  39 20 00 00 */	li r9, 0x0
/* 80135CDC 00132DBC  39 40 00 01 */	li r10, 0x1
/* 80135CE0 00132DC0  C0 22 A3 74 */	lfs f1, "@831"@sda21(r2)
/* 80135CE4 00132DC4  80 9C 00 00 */	lwz r4, 0x0(r28)
/* 80135CE8 00132DC8  FC 40 08 90 */	fmr f2, f1
/* 80135CEC 00132DCC  80 BD 00 04 */	lwz r5, 0x4(r29)
/* 80135CF0 00132DD0  C0 62 A3 78 */	lfs f3, "@832"@sda21(r2)
/* 80135CF4 00132DD4  4B ED 16 CD */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
.L_80135CF8:
/* 80135CF8 00132DD8  3B 5A 00 01 */	addi r26, r26, 0x1
/* 80135CFC 00132DDC  3B 9C 00 04 */	addi r28, r28, 0x4
/* 80135D00 00132DE0  2C 1A 00 0B */	cmpwi r26, 0xb
/* 80135D04 00132DE4  41 80 FF 6C */	blt .L_80135C70
/* 80135D08 00132DE8  7F 63 DB 78 */	mr r3, r27
/* 80135D0C 00132DEC  BB 41 00 18 */	lmw r26, 0x18(r1)
/* 80135D10 00132DF0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80135D14 00132DF4  7C 08 03 A6 */	mtlr r0
/* 80135D18 00132DF8  38 21 00 30 */	addi r1, r1, 0x30
/* 80135D1C 00132DFC  4E 80 00 20 */	blr
.endfn ZNPC_AnimTable_Test__Fv

# zNPCTest::zNPCTest(int)
.fn __ct__8zNPCTestFi, global
/* 80135D20 00132E00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80135D24 00132E04  7C 08 02 A6 */	mflr r0
/* 80135D28 00132E08  90 01 00 14 */	stw r0, 0x14(r1)
/* 80135D2C 00132E0C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80135D30 00132E10  7C 7F 1B 78 */	mr r31, r3
/* 80135D34 00132E14  4B FB E8 C1 */	bl __ct__10zNPCCommonFi
/* 80135D38 00132E18  3C 80 80 2A */	lis r4, __vt__8zNPCTest@ha
/* 80135D3C 00132E1C  7F E3 FB 78 */	mr r3, r31
/* 80135D40 00132E20  38 04 90 10 */	addi r0, r4, __vt__8zNPCTest@l
/* 80135D44 00132E24  90 1F 01 B8 */	stw r0, 0x1b8(r31)
/* 80135D48 00132E28  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80135D4C 00132E2C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80135D50 00132E30  7C 08 03 A6 */	mtlr r0
/* 80135D54 00132E34  38 21 00 10 */	addi r1, r1, 0x10
/* 80135D58 00132E38  4E 80 00 20 */	blr
.endfn __ct__8zNPCTestFi

# zNPCTest::Reset()
.fn Reset__8zNPCTestFv, global
/* 80135D5C 00132E3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80135D60 00132E40  7C 08 02 A6 */	mflr r0
/* 80135D64 00132E44  90 01 00 14 */	stw r0, 0x14(r1)
/* 80135D68 00132E48  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80135D6C 00132E4C  7C 7F 1B 78 */	mr r31, r3
/* 80135D70 00132E50  4B FB 9B 35 */	bl Reset__10zNPCCommonFv
/* 80135D74 00132E54  38 00 00 00 */	li r0, 0x0
/* 80135D78 00132E58  90 1F 02 A4 */	stw r0, 0x2a4(r31)
/* 80135D7C 00132E5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80135D80 00132E60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80135D84 00132E64  7C 08 03 A6 */	mtlr r0
/* 80135D88 00132E68  38 21 00 10 */	addi r1, r1, 0x10
/* 80135D8C 00132E6C  4E 80 00 20 */	blr
.endfn Reset__8zNPCTestFv

# zNPCTest::Process(xScene*, float)
.fn Process__8zNPCTestFP6xScenef, global
/* 80135D90 00132E70  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80135D94 00132E74  7C 08 02 A6 */	mflr r0
/* 80135D98 00132E78  90 01 00 24 */	stw r0, 0x24(r1)
/* 80135D9C 00132E7C  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80135DA0 00132E80  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 80135DA4 00132E84  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80135DA8 00132E88  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80135DAC 00132E8C  7C 7E 1B 78 */	mr r30, r3
/* 80135DB0 00132E90  FF E0 08 90 */	fmr f31, f1
/* 80135DB4 00132E94  C0 03 02 A8 */	lfs f0, 0x2a8(r3)
/* 80135DB8 00132E98  7C 9F 23 78 */	mr r31, r4
/* 80135DBC 00132E9C  C0 22 A3 7C */	lfs f1, "@866"@sda21(r2)
/* 80135DC0 00132EA0  EC 00 F8 28 */	fsubs f0, f0, f31
/* 80135DC4 00132EA4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80135DC8 00132EA8  40 81 00 08 */	ble .L_80135DD0
/* 80135DCC 00132EAC  48 00 00 08 */	b .L_80135DD4
.L_80135DD0:
/* 80135DD0 00132EB0  FC 20 00 90 */	fmr f1, f0
.L_80135DD4:
/* 80135DD4 00132EB4  D0 3E 02 A8 */	stfs f1, 0x2a8(r30)
/* 80135DD8 00132EB8  C0 3E 02 A8 */	lfs f1, 0x2a8(r30)
/* 80135DDC 00132EBC  C0 02 A3 74 */	lfs f0, "@831"@sda21(r2)
/* 80135DE0 00132EC0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80135DE4 00132EC4  40 80 00 50 */	bge .L_80135E34
/* 80135DE8 00132EC8  C0 02 A3 80 */	lfs f0, "@867"@sda21(r2)
/* 80135DEC 00132ECC  D0 1E 02 A8 */	stfs f0, 0x2a8(r30)
/* 80135DF0 00132ED0  80 7E 02 A4 */	lwz r3, 0x2a4(r30)
/* 80135DF4 00132ED4  38 63 00 01 */	addi r3, r3, 0x1
/* 80135DF8 00132ED8  90 7E 02 A4 */	stw r3, 0x2a4(r30)
/* 80135DFC 00132EDC  80 1E 02 A0 */	lwz r0, 0x2a0(r30)
/* 80135E00 00132EE0  7C 03 00 00 */	cmpw r3, r0
/* 80135E04 00132EE4  41 80 00 0C */	blt .L_80135E10
/* 80135E08 00132EE8  38 00 00 00 */	li r0, 0x0
/* 80135E0C 00132EEC  90 1E 02 A4 */	stw r0, 0x2a4(r30)
.L_80135E10:
/* 80135E10 00132EF0  80 1E 02 A4 */	lwz r0, 0x2a4(r30)
/* 80135E14 00132EF4  3C 60 80 2A */	lis r3, g_hash_testanim@ha
/* 80135E18 00132EF8  38 83 8F B8 */	addi r4, r3, g_hash_testanim@l
/* 80135E1C 00132EFC  7F C3 F3 78 */	mr r3, r30
/* 80135E20 00132F00  54 00 10 3A */	slwi r0, r0, 2
/* 80135E24 00132F04  38 A0 00 00 */	li r5, 0x0
/* 80135E28 00132F08  7C 84 02 14 */	add r4, r4, r0
/* 80135E2C 00132F0C  80 84 00 04 */	lwz r4, 0x4(r4)
/* 80135E30 00132F10  4B FB CF 61 */	bl AnimStart__10zNPCCommonFUii
.L_80135E34:
/* 80135E34 00132F14  FC 20 F8 90 */	fmr f1, f31
/* 80135E38 00132F18  7F C3 F3 78 */	mr r3, r30
/* 80135E3C 00132F1C  7F E4 FB 78 */	mr r4, r31
/* 80135E40 00132F20  4B FB A2 B1 */	bl Process__10zNPCCommonFP6xScenef
/* 80135E44 00132F24  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 80135E48 00132F28  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80135E4C 00132F2C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80135E50 00132F30  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80135E54 00132F34  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80135E58 00132F38  7C 08 03 A6 */	mtlr r0
/* 80135E5C 00132F3C  38 21 00 20 */	addi r1, r1, 0x20
/* 80135E60 00132F40  4E 80 00 20 */	blr
.endfn Process__8zNPCTestFP6xScenef

# zNPCTest::SelfSetup()
.fn SelfSetup__8zNPCTestFv, global
/* 80135E64 00132F44  38 00 00 00 */	li r0, 0x0
/* 80135E68 00132F48  90 03 02 A4 */	stw r0, 0x2a4(r3)
/* 80135E6C 00132F4C  80 83 01 D8 */	lwz r4, 0x1d8(r3)
/* 80135E70 00132F50  80 04 03 A4 */	lwz r0, 0x3a4(r4)
/* 80135E74 00132F54  90 03 02 A0 */	stw r0, 0x2a0(r3)
/* 80135E78 00132F58  C0 02 A3 80 */	lfs f0, "@867"@sda21(r2)
/* 80135E7C 00132F5C  D0 03 02 A8 */	stfs f0, 0x2a8(r3)
/* 80135E80 00132F60  4E 80 00 20 */	blr
.endfn SelfSetup__8zNPCTestFv

# zNPCTest::AnimPick(int, en_NPC_GOAL_SPOT, xGoal*)
.fn AnimPick__8zNPCTestFi16en_NPC_GOAL_SPOTP5xGoal, global
/* 80135E84 00132F64  80 03 02 A4 */	lwz r0, 0x2a4(r3)
/* 80135E88 00132F68  3C 60 80 2A */	lis r3, g_hash_testanim@ha
/* 80135E8C 00132F6C  38 63 8F B8 */	addi r3, r3, g_hash_testanim@l
/* 80135E90 00132F70  54 00 10 3A */	slwi r0, r0, 2
/* 80135E94 00132F74  7C 63 02 14 */	add r3, r3, r0
/* 80135E98 00132F78  80 63 00 04 */	lwz r3, 0x4(r3)
/* 80135E9C 00132F7C  4E 80 00 20 */	blr
.endfn AnimPick__8zNPCTestFi16en_NPC_GOAL_SPOTP5xGoal

# 0x8026CA50 - 0x8026CAA8
.rodata
.balign 8

.obj "@stringBase0", local
	.4byte 0x556E6B6E
.L_8026CA54:
	.4byte 0x6F776E00
	.4byte 0x54657374
	.4byte 0x30310054
	.4byte 0x65737430
	.4byte 0x32005465
	.4byte 0x73743033
	.4byte 0x00546573
	.4byte 0x74303400
	.4byte 0x54657374
	.4byte 0x30350054
	.4byte 0x65737430
	.4byte 0x36005465
	.4byte 0x73743037
	.4byte 0x00546573
	.4byte 0x74303800
	.4byte 0x54657374
	.4byte 0x30390054
.L_8026CA98:
	.4byte 0x65737431
	.4byte 0x30007A4E
	.4byte 0x50435465
	.byte 0x73, 0x74, 0x00
.endobj "@stringBase0"
	.byte 0x00

# 0x80298FB8 - 0x802990E0
.data
.balign 8

.obj g_hash_testanim, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj g_hash_testanim

.obj g_strz_testanim, global
	.4byte "@stringBase0"
	.4byte "@stringBase0"+0x8
	.4byte "@stringBase0"+0xF
	.4byte "@stringBase0"+0x16
	.4byte "@stringBase0"+0x1D
	.4byte "@stringBase0"+0x24
	.4byte "@stringBase0"+0x2B
	.4byte "@stringBase0"+0x32
	.4byte "@stringBase0"+0x39
	.4byte "@stringBase0"+0x40
	.4byte "@stringBase0"+0x47
.endobj g_strz_testanim

# zNPCTest::__vtable
.obj __vt__8zNPCTest, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Init__10zNPCCommonFP9xEntAsset
.L_8029901C:
	.4byte PostInit__9xNPCBasicFv
	.4byte Setup__10zNPCCommonFv
	.4byte PostSetup__9xNPCBasicFv
	.4byte Reset__8zNPCTestFv
	.4byte Process__8zNPCTestFP6xScenef
	.4byte BUpdate__10zNPCCommonFP5xVec3
	.4byte NewTime__10zNPCCommonFP6xScenef
	.4byte Move__10zNPCCommonFP6xScenefP9xEntFrame
	.4byte SysEvent__10zNPCCommonFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte Render__9xNPCBasicFv
	.4byte Save__9xNPCBasicCFP7xSerial
	.4byte Load__9xNPCBasicFP7xSerial
.L_8029904C:
	.4byte CollideReview__10zNPCCommonFv
	.4byte ColChkFlags__9xNPCBasicCFv
	.4byte ColPenFlags__9xNPCBasicCFv
	.4byte ColChkByFlags__9xNPCBasicCFv
	.4byte ColPenByFlags__9xNPCBasicCFv
	.4byte PhysicsFlags__9xNPCBasicCFv
	.4byte Destroy__10zNPCCommonFv
	.4byte NPCMessage__10zNPCCommonFP6NPCMsg
	.4byte RenderExtra__10zNPCCommonFv
	.4byte RenderExtraPostParticles__10zNPCCommonFv
	.4byte ParseINI__10zNPCCommonFv
	.4byte ParseLinks__10zNPCCommonFv
	.4byte ParseProps__10zNPCCommonFv
	.4byte SelfSetup__8zNPCTestFv
	.4byte SelfDestroy__10zNPCCommonFv
	.4byte IsHealthy__10zNPCCommonFv
	.4byte IsAlive__10zNPCCommonFv
	.4byte Damage__10zNPCCommonF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3
	.4byte Respawn__10zNPCCommonFPC5xVec3P10zMovePointP10zMovePoint
	.4byte DuploOwner__10zNPCCommonFP10zNPCCommon
	.4byte DuploNotice__10zNPCCommonF13en_SM_NOTICESPv
	.4byte CanRope__10zNPCCommonFv
	.4byte LassoNotify__10zNPCCommonF14en_LASSO_EVENT
	.4byte SetCarryState__10zNPCCommonF18en_NPC_CARRY_STATE
	.4byte Stun__10zNPCCommonFf
	.4byte SpeakBegin__10zNPCCommonFv
	.4byte SpeakEnd__10zNPCCommonFv
	.4byte SpeakStart__10zNPCCommonFUiUii
	.4byte SpeakStop__10zNPCCommonFv
	.4byte AnimPick__8zNPCTestFi16en_NPC_GOAL_SPOTP5xGoal
	.4byte GetParm__10zNPCCommonF10en_npcparmPv
	.4byte GetParmDefault__10zNPCCommonF10en_npcparmPv
	.4byte GenShadCacheRad__10zNPCCommonFv
	.4byte PRIV_GetDriverData__10zNPCCommonFv
	.4byte PRIV_GetLassoData__10zNPCCommonFv
	.4byte LassoSetup__10zNPCCommonFv
.endobj __vt__8zNPCTest
	.4byte 0x00000000

# 0x803CECF0 - 0x803CED08
.section .sdata2, "a"
.balign 8

.obj "@830", local
	.4byte 0x3F800000
.endobj "@830"

.obj "@831", local
	.4byte 0x00000000
.endobj "@831"

.obj "@832", local
	.4byte 0x3E19999A
.endobj "@832"

.obj "@866", local
	.4byte 0xBF800000
.endobj "@866"

.obj "@867", local
	.4byte 0x40A00000
.endobj "@867"
	.4byte 0x00000000
