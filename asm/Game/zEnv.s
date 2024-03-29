.include "macros.inc"
.file "zEnv.cpp"

# 0x80092720 - 0x80092AF8
.text
.balign 4

# zEnvInit(void*, void*)
.fn zEnvInit__FPvPv, global
/* 80092720 0008F800  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80092724 0008F804  7C 08 02 A6 */	mflr r0
/* 80092728 0008F808  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009272C 0008F80C  48 00 00 15 */	bl zEnvInit__FP5_zEnvP9xEnvAsset
/* 80092730 0008F810  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80092734 0008F814  7C 08 03 A6 */	mtlr r0
/* 80092738 0008F818  38 21 00 10 */	addi r1, r1, 0x10
/* 8009273C 0008F81C  4E 80 00 20 */	blr
.endfn zEnvInit__FPvPv

# zEnvInit(_zEnv*, xEnvAsset*)
.fn zEnvInit__FP5_zEnvP9xEnvAsset, global
/* 80092740 0008F820  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80092744 0008F824  7C 08 02 A6 */	mflr r0
/* 80092748 0008F828  90 01 00 24 */	stw r0, 0x24(r1)
/* 8009274C 0008F82C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80092750 0008F830  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80092754 0008F834  7C 9E 23 78 */	mr r30, r4
/* 80092758 0008F838  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8009275C 0008F83C  7C 7D 1B 78 */	mr r29, r3
/* 80092760 0008F840  4B F7 6C A1 */	bl xBaseInit__FP5xBaseP10xBaseAsset
/* 80092764 0008F844  3C 60 80 09 */	lis r3, zEnvEventCB__FP5xBaseP5xBaseUiPCfP5xBase@ha
/* 80092768 0008F848  93 DD 00 10 */	stw r30, 0x10(r29)
/* 8009276C 0008F84C  38 03 2A 88 */	addi r0, r3, zEnvEventCB__FP5xBaseP5xBaseUiPCfP5xBase@l
/* 80092770 0008F850  90 1D 00 0C */	stw r0, 0xc(r29)
/* 80092774 0008F854  88 1D 00 05 */	lbz r0, 0x5(r29)
/* 80092778 0008F858  28 00 00 00 */	cmplwi r0, 0x0
/* 8009277C 0008F85C  41 82 00 10 */	beq .L_8009278C
/* 80092780 0008F860  80 7D 00 10 */	lwz r3, 0x10(r29)
/* 80092784 0008F864  38 03 00 44 */	addi r0, r3, 0x44
/* 80092788 0008F868  90 1D 00 08 */	stw r0, 0x8(r29)
.L_8009278C:
/* 8009278C 0008F86C  3C 80 80 3C */	lis r4, globals@ha
/* 80092790 0008F870  3C 60 42 53 */	lis r3, 0x4253
/* 80092794 0008F874  3B E4 05 58 */	addi r31, r4, globals@l
/* 80092798 0008F878  80 9F 1F C0 */	lwz r4, 0x1fc0(r31)
/* 8009279C 0008F87C  38 63 50 20 */	addi r3, r3, 0x5020
/* 800927A0 0008F880  93 A4 02 C4 */	stw r29, 0x2c4(r4)
/* 800927A4 0008F884  80 9F 1F C0 */	lwz r4, 0x1fc0(r31)
/* 800927A8 0008F888  93 A4 02 C4 */	stw r29, 0x2c4(r4)
/* 800927AC 0008F88C  4B FB 90 6D */	bl xSTAssetCountByType__FUi
/* 800927B0 0008F890  80 7E 00 08 */	lwz r3, 0x8(r30)
/* 800927B4 0008F894  38 81 00 08 */	addi r4, r1, 0x8
/* 800927B8 0008F898  4B FB 8F 55 */	bl xSTFindAsset__FUiPUi
/* 800927BC 0008F89C  28 03 00 00 */	cmplwi r3, 0x0
/* 800927C0 0008F8A0  41 82 00 1C */	beq .L_800927DC
/* 800927C4 0008F8A4  80 FF 1F C0 */	lwz r7, 0x1fc0(r31)
/* 800927C8 0008F8A8  7C 64 1B 78 */	mr r4, r3
/* 800927CC 0008F8AC  80 A1 00 08 */	lwz r5, 0x8(r1)
/* 800927D0 0008F8B0  38 C0 00 00 */	li r6, 0x0
/* 800927D4 0008F8B4  80 67 00 44 */	lwz r3, 0x44(r7)
/* 800927D8 0008F8B8  4B F8 CC 61 */	bl xEnvLoadBsp__FP4xEnvPCvUii
.L_800927DC:
/* 800927DC 0008F8BC  80 7E 00 34 */	lwz r3, 0x34(r30)
/* 800927E0 0008F8C0  48 02 30 7D */	bl zSurfaceRegisterMapper__FUi
/* 800927E4 0008F8C4  80 7E 00 28 */	lwz r3, 0x28(r30)
/* 800927E8 0008F8C8  28 03 00 00 */	cmplwi r3, 0x0
/* 800927EC 0008F8CC  41 82 00 2C */	beq .L_80092818
/* 800927F0 0008F8D0  38 81 00 08 */	addi r4, r1, 0x8
/* 800927F4 0008F8D4  4B FB 8F 19 */	bl xSTFindAsset__FUiPUi
/* 800927F8 0008F8D8  28 03 00 00 */	cmplwi r3, 0x0
/* 800927FC 0008F8DC  41 82 00 1C */	beq .L_80092818
/* 80092800 0008F8E0  80 FF 1F C0 */	lwz r7, 0x1fc0(r31)
/* 80092804 0008F8E4  7C 64 1B 78 */	mr r4, r3
/* 80092808 0008F8E8  80 A1 00 08 */	lwz r5, 0x8(r1)
/* 8009280C 0008F8EC  38 C0 00 01 */	li r6, 0x1
/* 80092810 0008F8F0  80 67 00 44 */	lwz r3, 0x44(r7)
/* 80092814 0008F8F4  4B F8 CC 25 */	bl xEnvLoadBsp__FP4xEnvPCvUii
.L_80092818:
/* 80092818 0008F8F8  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 8009281C 0008F8FC  28 03 00 00 */	cmplwi r3, 0x0
/* 80092820 0008F900  41 82 00 2C */	beq .L_8009284C
/* 80092824 0008F904  38 81 00 08 */	addi r4, r1, 0x8
/* 80092828 0008F908  4B FB 8E E5 */	bl xSTFindAsset__FUiPUi
/* 8009282C 0008F90C  28 03 00 00 */	cmplwi r3, 0x0
/* 80092830 0008F910  41 82 00 1C */	beq .L_8009284C
/* 80092834 0008F914  80 FF 1F C0 */	lwz r7, 0x1fc0(r31)
/* 80092838 0008F918  7C 64 1B 78 */	mr r4, r3
/* 8009283C 0008F91C  80 A1 00 08 */	lwz r5, 0x8(r1)
/* 80092840 0008F920  38 C0 00 02 */	li r6, 0x2
/* 80092844 0008F924  80 67 00 44 */	lwz r3, 0x44(r7)
/* 80092848 0008F928  4B F8 CB F1 */	bl xEnvLoadBsp__FP4xEnvPCvUii
.L_8009284C:
/* 8009284C 0008F92C  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 80092850 0008F930  28 03 00 00 */	cmplwi r3, 0x0
/* 80092854 0008F934  41 82 00 2C */	beq .L_80092880
/* 80092858 0008F938  38 81 00 08 */	addi r4, r1, 0x8
/* 8009285C 0008F93C  4B FB 8E B1 */	bl xSTFindAsset__FUiPUi
/* 80092860 0008F940  28 03 00 00 */	cmplwi r3, 0x0
/* 80092864 0008F944  41 82 00 1C */	beq .L_80092880
/* 80092868 0008F948  80 FF 1F C0 */	lwz r7, 0x1fc0(r31)
/* 8009286C 0008F94C  7C 64 1B 78 */	mr r4, r3
/* 80092870 0008F950  80 A1 00 08 */	lwz r5, 0x8(r1)
/* 80092874 0008F954  38 C0 00 03 */	li r6, 0x3
/* 80092878 0008F958  80 67 00 44 */	lwz r3, 0x44(r7)
/* 8009287C 0008F95C  4B F8 CB BD */	bl xEnvLoadBsp__FP4xEnvPCvUii
.L_80092880:
/* 80092880 0008F960  80 7F 1F C0 */	lwz r3, 0x1fc0(r31)
/* 80092884 0008F964  80 63 00 44 */	lwz r3, 0x44(r3)
/* 80092888 0008F968  28 03 00 00 */	cmplwi r3, 0x0
/* 8009288C 0008F96C  41 82 00 28 */	beq .L_800928B4
/* 80092890 0008F970  80 03 00 00 */	lwz r0, 0x0(r3)
/* 80092894 0008F974  28 00 00 00 */	cmplwi r0, 0x0
/* 80092898 0008F978  41 82 00 1C */	beq .L_800928B4
/* 8009289C 0008F97C  48 00 B7 91 */	bl zLightResetAll__FP4xEnv
/* 800928A0 0008F980  80 7F 1F C0 */	lwz r3, 0x1fc0(r31)
/* 800928A4 0008F984  80 63 00 44 */	lwz r3, 0x44(r3)
/* 800928A8 0008F988  80 63 00 00 */	lwz r3, 0x0(r3)
/* 800928AC 0008F98C  80 63 00 00 */	lwz r3, 0x0(r3)
/* 800928B0 0008F990  48 03 22 45 */	bl iLightInit__FP7RpWorld
.L_800928B4:
/* 800928B4 0008F994  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800928B8 0008F998  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800928BC 0008F99C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800928C0 0008F9A0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 800928C4 0008F9A4  7C 08 03 A6 */	mtlr r0
/* 800928C8 0008F9A8  38 21 00 20 */	addi r1, r1, 0x20
/* 800928CC 0008F9AC  4E 80 00 20 */	blr
.endfn zEnvInit__FP5_zEnvP9xEnvAsset

# zEnvSetup(_zEnv*)
.fn zEnvSetup__FP5_zEnv, global
/* 800928D0 0008F9B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800928D4 0008F9B4  7C 08 02 A6 */	mflr r0
/* 800928D8 0008F9B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 800928DC 0008F9BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800928E0 0008F9C0  7C 7F 1B 78 */	mr r31, r3
/* 800928E4 0008F9C4  4B F7 6B 65 */	bl xBaseSetup__FP5xBase
/* 800928E8 0008F9C8  3C 60 80 3C */	lis r3, globals@ha
/* 800928EC 0008F9CC  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 800928F0 0008F9D0  38 63 05 58 */	addi r3, r3, globals@l
/* 800928F4 0008F9D4  80 63 1F C0 */	lwz r3, 0x1fc0(r3)
/* 800928F8 0008F9D8  80 63 00 44 */	lwz r3, 0x44(r3)
/* 800928FC 0008F9DC  80 63 00 00 */	lwz r3, 0x0(r3)
/* 80092900 0008F9E0  48 03 08 25 */	bl iEnvLightingBasics__FP4iEnvP9xEnvAsset
/* 80092904 0008F9E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80092908 0008F9E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8009290C 0008F9EC  7C 08 03 A6 */	mtlr r0
/* 80092910 0008F9F0  38 21 00 10 */	addi r1, r1, 0x10
/* 80092914 0008F9F4  4E 80 00 20 */	blr
.endfn zEnvSetup__FP5_zEnv

# zEnvStartingCamera(_zEnv*)
.fn zEnvStartingCamera__FP5_zEnv, global
/* 80092918 0008F9F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009291C 0008F9FC  7C 08 02 A6 */	mflr r0
/* 80092920 0008FA00  90 01 00 14 */	stw r0, 0x14(r1)
/* 80092924 0008FA04  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80092928 0008FA08  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8009292C 0008FA0C  48 02 21 11 */	bl zSceneFindObject__FUi
/* 80092930 0008FA10  28 03 00 00 */	cmplwi r3, 0x0
/* 80092934 0008FA14  41 82 00 20 */	beq .L_80092954
/* 80092938 0008FA18  3C 60 80 3C */	lis r3, globals@ha
/* 8009293C 0008FA1C  38 63 05 58 */	addi r3, r3, globals@l
/* 80092940 0008FA20  80 A3 07 28 */	lwz r5, 0x728(r3)
/* 80092944 0008FA24  80 83 00 00 */	lwz r4, 0x0(r3)
/* 80092948 0008FA28  C0 25 00 B8 */	lfs f1, 0xb8(r5)
/* 8009294C 0008FA2C  38 65 00 30 */	addi r3, r5, 0x30
/* 80092950 0008FA30  4B FE B4 99 */	bl zEntPlayer_StoreCheckPoint__FP5xVec3fUi
.L_80092954:
/* 80092954 0008FA34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80092958 0008FA38  7C 08 03 A6 */	mtlr r0
/* 8009295C 0008FA3C  38 21 00 10 */	addi r1, r1, 0x10
/* 80092960 0008FA40  4E 80 00 20 */	blr
.endfn zEnvStartingCamera__FP5_zEnv

# zEnvRender(xEnv*)
.fn zEnvRender__FP4xEnv, global
/* 80092964 0008FA44  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80092968 0008FA48  7C 08 02 A6 */	mflr r0
/* 8009296C 0008FA4C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80092970 0008FA50  BF 41 00 08 */	stmw r26, 0x8(r1)
/* 80092974 0008FA54  7C 7A 1B 78 */	mr r26, r3
/* 80092978 0008FA58  3B 80 00 00 */	li r28, 0x0
/* 8009297C 0008FA5C  3B E0 00 00 */	li r31, 0x0
/* 80092980 0008FA60  80 63 00 00 */	lwz r3, 0x0(r3)
/* 80092984 0008FA64  83 C3 00 00 */	lwz r30, 0x0(r3)
/* 80092988 0008FA68  83 BE 00 14 */	lwz r29, 0x14(r30)
/* 8009298C 0008FA6C  48 00 00 74 */	b .L_80092A00
.L_80092990:
/* 80092990 0008FA70  7F 83 E3 78 */	mr r3, r28
/* 80092994 0008FA74  48 02 2F 89 */	bl zSurfaceGetSurface__FUi
/* 80092998 0008FA78  80 83 00 24 */	lwz r4, 0x24(r3)
/* 8009299C 0008FA7C  28 04 00 00 */	cmplwi r4, 0x0
/* 800929A0 0008FA80  41 82 00 58 */	beq .L_800929F8
/* 800929A4 0008FA84  80 04 00 00 */	lwz r0, 0x0(r4)
/* 800929A8 0008FA88  28 00 00 00 */	cmplwi r0, 0x0
/* 800929AC 0008FA8C  41 82 00 4C */	beq .L_800929F8
/* 800929B0 0008FA90  80 04 00 04 */	lwz r0, 0x4(r4)
/* 800929B4 0008FA94  54 00 07 FF */	clrlwi. r0, r0, 31
/* 800929B8 0008FA98  41 82 00 40 */	beq .L_800929F8
/* 800929BC 0008FA9C  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 800929C0 0008FAA0  7F 63 F8 2E */	lwzx r27, r3, r31
/* 800929C4 0008FAA4  28 1B 00 00 */	cmplwi r27, 0x0
/* 800929C8 0008FAA8  41 82 00 30 */	beq .L_800929F8
/* 800929CC 0008FAAC  80 64 00 1C */	lwz r3, 0x1c(r4)
/* 800929D0 0008FAB0  28 03 00 00 */	cmplwi r3, 0x0
/* 800929D4 0008FAB4  41 82 00 24 */	beq .L_800929F8
/* 800929D8 0008FAB8  80 84 00 18 */	lwz r4, 0x18(r4)
/* 800929DC 0008FABC  4B F9 A5 3D */	bl xGroupGetItem__FP6xGroupUi
/* 800929E0 0008FAC0  38 80 00 00 */	li r4, 0x0
/* 800929E4 0008FAC4  4B FB 8D 29 */	bl xSTFindAsset__FUiPUi
/* 800929E8 0008FAC8  7C 64 1B 79 */	mr. r4, r3
/* 800929EC 0008FACC  41 82 00 0C */	beq .L_800929F8
/* 800929F0 0008FAD0  7F 63 DB 78 */	mr r3, r27
/* 800929F4 0008FAD4  48 18 52 A5 */	bl RpMaterialSetTexture
.L_800929F8:
/* 800929F8 0008FAD8  3B FF 00 04 */	addi r31, r31, 0x4
/* 800929FC 0008FADC  3B 9C 00 01 */	addi r28, r28, 0x1
.L_80092A00:
/* 80092A00 0008FAE0  7C 1C E8 00 */	cmpw r28, r29
/* 80092A04 0008FAE4  41 80 FF 8C */	blt .L_80092990
/* 80092A08 0008FAE8  7F 43 D3 78 */	mr r3, r26
/* 80092A0C 0008FAEC  4B F8 CA ED */	bl xEnvRender__FP4xEnv
/* 80092A10 0008FAF0  BB 41 00 08 */	lmw r26, 0x8(r1)
/* 80092A14 0008FAF4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80092A18 0008FAF8  7C 08 03 A6 */	mtlr r0
/* 80092A1C 0008FAFC  38 21 00 20 */	addi r1, r1, 0x20
/* 80092A20 0008FB00  4E 80 00 20 */	blr
.endfn zEnvRender__FP4xEnv

# zEnvSave(_zEnv*, xSerial*)
.fn zEnvSave__FP5_zEnvP7xSerial, global
/* 80092A24 0008FB04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80092A28 0008FB08  7C 08 02 A6 */	mflr r0
/* 80092A2C 0008FB0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80092A30 0008FB10  4B F7 6A 1D */	bl xBaseSave__FP5xBaseP7xSerial
/* 80092A34 0008FB14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80092A38 0008FB18  7C 08 03 A6 */	mtlr r0
/* 80092A3C 0008FB1C  38 21 00 10 */	addi r1, r1, 0x10
/* 80092A40 0008FB20  4E 80 00 20 */	blr
.endfn zEnvSave__FP5_zEnvP7xSerial

# zEnvLoad(_zEnv*, xSerial*)
.fn zEnvLoad__FP5_zEnvP7xSerial, global
/* 80092A44 0008FB24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80092A48 0008FB28  7C 08 02 A6 */	mflr r0
/* 80092A4C 0008FB2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80092A50 0008FB30  4B F7 6A 4D */	bl xBaseLoad__FP5xBaseP7xSerial
/* 80092A54 0008FB34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80092A58 0008FB38  7C 08 03 A6 */	mtlr r0
/* 80092A5C 0008FB3C  38 21 00 10 */	addi r1, r1, 0x10
/* 80092A60 0008FB40  4E 80 00 20 */	blr
.endfn zEnvLoad__FP5_zEnvP7xSerial

# zEnvReset(_zEnv*)
.fn zEnvReset__FP5_zEnv, global
/* 80092A64 0008FB44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80092A68 0008FB48  7C 08 02 A6 */	mflr r0
/* 80092A6C 0008FB4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80092A70 0008FB50  80 83 00 10 */	lwz r4, 0x10(r3)
/* 80092A74 0008FB54  4B F7 6A 85 */	bl xBaseReset__FP5xBaseP10xBaseAsset
/* 80092A78 0008FB58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80092A7C 0008FB5C  7C 08 03 A6 */	mtlr r0
/* 80092A80 0008FB60  38 21 00 10 */	addi r1, r1, 0x10
/* 80092A84 0008FB64  4E 80 00 20 */	blr
.endfn zEnvReset__FP5_zEnv

# zEnvEventCB(xBase*, xBase*, unsigned int, const float*, xBase*)
.fn zEnvEventCB__FP5xBaseP5xBaseUiPCfP5xBase, global
/* 80092A88 0008FB68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80092A8C 0008FB6C  7C 08 02 A6 */	mflr r0
/* 80092A90 0008FB70  2C 05 01 0C */	cmpwi r5, 0x10c
/* 80092A94 0008FB74  90 01 00 14 */	stw r0, 0x14(r1)
/* 80092A98 0008FB78  40 80 00 14 */	bge .L_80092AAC
/* 80092A9C 0008FB7C  2C 05 00 0A */	cmpwi r5, 0xa
/* 80092AA0 0008FB80  41 82 00 24 */	beq .L_80092AC4
/* 80092AA4 0008FB84  41 80 00 40 */	blt .L_80092AE4
/* 80092AA8 0008FB88  48 00 00 3C */	b .L_80092AE4
.L_80092AAC:
/* 80092AAC 0008FB8C  2C 05 01 22 */	cmpwi r5, 0x122
/* 80092AB0 0008FB90  41 82 00 20 */	beq .L_80092AD0
/* 80092AB4 0008FB94  40 80 00 30 */	bge .L_80092AE4
/* 80092AB8 0008FB98  2C 05 01 21 */	cmpwi r5, 0x121
/* 80092ABC 0008FB9C  40 80 00 20 */	bge .L_80092ADC
/* 80092AC0 0008FBA0  48 00 00 24 */	b .L_80092AE4
.L_80092AC4:
/* 80092AC4 0008FBA4  7C 83 23 78 */	mr r3, r4
/* 80092AC8 0008FBA8  4B FF FF 9D */	bl zEnvReset__FP5_zEnv
/* 80092ACC 0008FBAC  48 00 00 18 */	b .L_80092AE4
.L_80092AD0:
/* 80092AD0 0008FBB0  C0 26 00 00 */	lfs f1, 0x0(r6)
/* 80092AD4 0008FBB4  4B F7 C0 7D */	bl xClimateSetSnow__Ff
/* 80092AD8 0008FBB8  48 00 00 0C */	b .L_80092AE4
.L_80092ADC:
/* 80092ADC 0008FBBC  C0 26 00 00 */	lfs f1, 0x0(r6)
/* 80092AE0 0008FBC0  4B F7 C0 89 */	bl xClimateSetRain__Ff
.L_80092AE4:
/* 80092AE4 0008FBC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80092AE8 0008FBC8  38 60 00 01 */	li r3, 0x1
/* 80092AEC 0008FBCC  7C 08 03 A6 */	mtlr r0
/* 80092AF0 0008FBD0  38 21 00 10 */	addi r1, r1, 0x10
/* 80092AF4 0008FBD4  4E 80 00 20 */	blr
.endfn zEnvEventCB__FP5xBaseP5xBaseUiPCfP5xBase
