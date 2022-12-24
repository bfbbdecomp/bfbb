.include "macros.inc"
.file "zAnimList.cpp"

# 0x8004E7E0 - 0x8004EBEC
.text
.balign 4

# AlwaysConditional(xAnimTransition*, xAnimSingle*, void*)
.fn AlwaysConditional__FP15xAnimTransitionP11xAnimSinglePv, local
/* 8004E7E0 0004B8C0  38 60 00 01 */	li r3, 0x1
/* 8004E7E4 0004B8C4  4E 80 00 20 */	blr
.endfn AlwaysConditional__FP15xAnimTransitionP11xAnimSinglePv

# zAnimListInit()
.fn zAnimListInit__Fv, global
/* 8004E7E8 0004B8C8  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8004E7EC 0004B8CC  7C 08 02 A6 */	mflr r0
/* 8004E7F0 0004B8D0  3C 60 41 4C */	lis r3, 0x414c
/* 8004E7F4 0004B8D4  90 01 00 74 */	stw r0, 0x74(r1)
/* 8004E7F8 0004B8D8  38 63 53 54 */	addi r3, r3, 0x5354
/* 8004E7FC 0004B8DC  BE A1 00 44 */	stmw r21, 0x44(r1)
/* 8004E800 0004B8E0  4B FF D0 19 */	bl xSTAssetCountByType__FUi
/* 8004E804 0004B8E4  90 6D 8B 40 */	stw r3, nals@sda21(r13)
/* 8004E808 0004B8E8  80 0D 8B 40 */	lwz r0, nals@sda21(r13)
/* 8004E80C 0004B8EC  2C 00 00 00 */	cmpwi r0, 0x0
/* 8004E810 0004B8F0  41 82 03 20 */	beq .L_8004EB30
/* 8004E814 0004B8F4  80 6D 89 E0 */	lwz r3, gActiveHeap@sda21(r13)
/* 8004E818 0004B8F8  54 04 10 3A */	slwi r4, r0, 2
/* 8004E81C 0004B8FC  38 A0 00 00 */	li r5, 0x0
/* 8004E820 0004B900  4B FE 51 21 */	bl xMemAlloc__FUiUii
/* 8004E824 0004B904  90 6D 8B 44 */	stw r3, aids@sda21(r13)
/* 8004E828 0004B908  38 A0 00 00 */	li r5, 0x0
/* 8004E82C 0004B90C  80 0D 8B 40 */	lwz r0, nals@sda21(r13)
/* 8004E830 0004B910  80 6D 89 E0 */	lwz r3, gActiveHeap@sda21(r13)
/* 8004E834 0004B914  54 04 10 3A */	slwi r4, r0, 2
/* 8004E838 0004B918  4B FE 51 09 */	bl xMemAlloc__FUiUii
/* 8004E83C 0004B91C  90 6D 8B 48 */	stw r3, atbls@sda21(r13)
/* 8004E840 0004B920  38 A0 00 00 */	li r5, 0x0
/* 8004E844 0004B924  80 0D 8B 40 */	lwz r0, nals@sda21(r13)
/* 8004E848 0004B928  80 6D 89 E0 */	lwz r3, gActiveHeap@sda21(r13)
/* 8004E84C 0004B92C  54 04 10 3A */	slwi r4, r0, 2
/* 8004E850 0004B930  4B FE 50 F1 */	bl xMemAlloc__FUiUii
/* 8004E854 0004B934  3C A0 80 25 */	lis r5, "@stringBase0"@ha
/* 8004E858 0004B938  3C 80 80 29 */	lis r4, astnames@ha
/* 8004E85C 0004B93C  90 6D 8B 4C */	stw r3, anused@sda21(r13)
/* 8004E860 0004B940  3B A5 43 18 */	addi r29, r5, "@stringBase0"@l
/* 8004E864 0004B944  3B E4 A7 B8 */	addi r31, r4, astnames@l
/* 8004E868 0004B948  3B 00 00 00 */	li r24, 0x0
/* 8004E86C 0004B94C  3B 20 00 00 */	li r25, 0x0
/* 8004E870 0004B950  3F 60 41 4C */	lis r27, 0x414c
/* 8004E874 0004B954  48 00 02 B0 */	b .L_8004EB24
.L_8004E878:
/* 8004E878 0004B958  7F 04 C3 78 */	mr r4, r24
/* 8004E87C 0004B95C  38 7B 53 54 */	addi r3, r27, 0x5354
/* 8004E880 0004B960  38 A1 00 18 */	addi r5, r1, 0x18
/* 8004E884 0004B964  4B FF D0 1D */	bl xSTFindAssetByType__FUiiPUi
/* 8004E888 0004B968  7C 7C 1B 78 */	mr r28, r3
/* 8004E88C 0004B96C  7F 04 C3 78 */	mr r4, r24
/* 8004E890 0004B970  38 7B 53 54 */	addi r3, r27, 0x5354
/* 8004E894 0004B974  38 A1 00 1C */	addi r5, r1, 0x1c
/* 8004E898 0004B978  4B FF D1 81 */	bl xSTGetAssetInfoByType__FUiiP20st_PKR_ASSET_TOCINFO
/* 8004E89C 0004B97C  38 7D 00 78 */	addi r3, r29, 0x78
/* 8004E8A0 0004B980  38 80 00 00 */	li r4, 0x0
/* 8004E8A4 0004B984  38 A0 00 00 */	li r5, 0x0
/* 8004E8A8 0004B988  4B FB 83 C9 */	bl xAnimTableNew__FPCcPP10xAnimTableUi
/* 8004E8AC 0004B98C  80 C1 00 1C */	lwz r6, 0x1c(r1)
/* 8004E8B0 0004B990  7C 77 1B 78 */	mr r23, r3
/* 8004E8B4 0004B994  80 AD 8B 44 */	lwz r5, aids@sda21(r13)
/* 8004E8B8 0004B998  38 00 00 00 */	li r0, 0x0
/* 8004E8BC 0004B99C  38 81 00 18 */	addi r4, r1, 0x18
/* 8004E8C0 0004B9A0  7C C5 C9 2E */	stwx r6, r5, r25
/* 8004E8C4 0004B9A4  80 6D 8B 48 */	lwz r3, atbls@sda21(r13)
/* 8004E8C8 0004B9A8  7E E3 C9 2E */	stwx r23, r3, r25
/* 8004E8CC 0004B9AC  80 6D 8B 4C */	lwz r3, anused@sda21(r13)
/* 8004E8D0 0004B9B0  7C 03 C9 2E */	stwx r0, r3, r25
/* 8004E8D4 0004B9B4  80 7C 00 00 */	lwz r3, 0x0(r28)
/* 8004E8D8 0004B9B8  4B FF CE 35 */	bl xSTFindAsset__FUiPUi
/* 8004E8DC 0004B9BC  7C 7E 1B 79 */	mr. r30, r3
/* 8004E8E0 0004B9C0  41 82 00 94 */	beq .L_8004E974
/* 8004E8E4 0004B9C4  3C 80 80 25 */	lis r4, "@stringBase0"@ha
/* 8004E8E8 0004B9C8  38 A0 00 00 */	li r5, 0x0
/* 8004E8EC 0004B9CC  38 84 43 18 */	addi r4, r4, "@stringBase0"@l
/* 8004E8F0 0004B9D0  38 C0 00 00 */	li r6, 0x0
/* 8004E8F4 0004B9D4  38 84 00 78 */	addi r4, r4, 0x78
/* 8004E8F8 0004B9D8  4B FB 7C 71 */	bl xAnimFileNew__FPvPCcUiPP9xAnimFile
/* 8004E8FC 0004B9DC  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8004E900 0004B9E0  7C 75 1B 78 */	mr r21, r3
/* 8004E904 0004B9E4  38 04 6C FC */	addi r0, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8004E908 0004B9E8  7E E3 BB 78 */	mr r3, r23
/* 8004E90C 0004B9EC  90 01 00 08 */	stw r0, 0x8(r1)
/* 8004E910 0004B9F0  38 00 00 00 */	li r0, 0x0
/* 8004E914 0004B9F4  3C 80 80 25 */	lis r4, "@stringBase0"@ha
/* 8004E918 0004B9F8  38 A0 00 10 */	li r5, 0x10
/* 8004E91C 0004B9FC  90 01 00 0C */	stw r0, 0xc(r1)
/* 8004E920 0004BA00  38 84 43 18 */	addi r4, r4, "@stringBase0"@l
/* 8004E924 0004BA04  38 84 00 79 */	addi r4, r4, 0x79
/* 8004E928 0004BA08  38 C0 00 00 */	li r6, 0x0
/* 8004E92C 0004BA0C  90 01 00 10 */	stw r0, 0x10(r1)
/* 8004E930 0004BA10  38 E0 00 00 */	li r7, 0x0
/* 8004E934 0004BA14  39 00 00 00 */	li r8, 0x0
/* 8004E938 0004BA18  39 20 00 00 */	li r9, 0x0
/* 8004E93C 0004BA1C  C0 22 87 F0 */	lfs f1, "@558"@sda21(r2)
/* 8004E940 0004BA20  39 40 00 00 */	li r10, 0x0
/* 8004E944 0004BA24  C0 42 87 F4 */	lfs f2, "@559"@sda21(r2)
/* 8004E948 0004BA28  4B FB 84 11 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8004E94C 0004BA2C  3C 80 80 25 */	lis r4, "@stringBase0"@ha
/* 8004E950 0004BA30  7E E3 BB 78 */	mr r3, r23
/* 8004E954 0004BA34  38 A4 43 18 */	addi r5, r4, "@stringBase0"@l
/* 8004E958 0004BA38  7E A4 AB 78 */	mr r4, r21
/* 8004E95C 0004BA3C  38 A5 00 79 */	addi r5, r5, 0x79
/* 8004E960 0004BA40  4B FB 8C 15 */	bl xAnimTableAddFile__FP10xAnimTableP9xAnimFilePCc
/* 8004E964 0004BA44  80 8D 8B 4C */	lwz r4, anused@sda21(r13)
/* 8004E968 0004BA48  7C 64 C8 2E */	lwzx r3, r4, r25
/* 8004E96C 0004BA4C  38 03 00 01 */	addi r0, r3, 0x1
/* 8004E970 0004BA50  7C 04 C9 2E */	stwx r0, r4, r25
.L_8004E974:
/* 8004E974 0004BA54  3B 9C 00 04 */	addi r28, r28, 0x4
/* 8004E978 0004BA58  3B 5F 00 04 */	addi r26, r31, 0x4
/* 8004E97C 0004BA5C  3A C0 00 01 */	li r22, 0x1
.L_8004E980:
/* 8004E980 0004BA60  80 7C 00 00 */	lwz r3, 0x0(r28)
/* 8004E984 0004BA64  28 03 00 00 */	cmplwi r3, 0x0
/* 8004E988 0004BA68  41 82 01 80 */	beq .L_8004EB08
/* 8004E98C 0004BA6C  38 81 00 18 */	addi r4, r1, 0x18
/* 8004E990 0004BA70  4B FF CD 7D */	bl xSTFindAsset__FUiPUi
/* 8004E994 0004BA74  28 03 00 00 */	cmplwi r3, 0x0
/* 8004E998 0004BA78  41 82 01 70 */	beq .L_8004EB08
/* 8004E99C 0004BA7C  3C 80 80 25 */	lis r4, "@stringBase0"@ha
/* 8004E9A0 0004BA80  38 A0 00 00 */	li r5, 0x0
/* 8004E9A4 0004BA84  38 84 43 18 */	addi r4, r4, "@stringBase0"@l
/* 8004E9A8 0004BA88  38 C0 00 00 */	li r6, 0x0
/* 8004E9AC 0004BA8C  38 84 00 78 */	addi r4, r4, 0x78
/* 8004E9B0 0004BA90  4B FB 7B B9 */	bl xAnimFileNew__FPvPCcUiPP9xAnimFile
/* 8004E9B4 0004BA94  2C 1E 00 00 */	cmpwi r30, 0x0
/* 8004E9B8 0004BA98  7C 75 1B 78 */	mr r21, r3
/* 8004E9BC 0004BA9C  41 82 00 94 */	beq .L_8004EA50
/* 8004E9C0 0004BAA0  3C 60 80 00 */	lis r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8004E9C4 0004BAA4  38 00 00 00 */	li r0, 0x0
/* 8004E9C8 0004BAA8  38 83 6C FC */	addi r4, r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8004E9CC 0004BAAC  7E E3 BB 78 */	mr r3, r23
/* 8004E9D0 0004BAB0  90 81 00 08 */	stw r4, 0x8(r1)
/* 8004E9D4 0004BAB4  38 A0 00 20 */	li r5, 0x20
/* 8004E9D8 0004BAB8  38 C0 00 00 */	li r6, 0x0
/* 8004E9DC 0004BABC  38 E0 00 00 */	li r7, 0x0
/* 8004E9E0 0004BAC0  90 01 00 0C */	stw r0, 0xc(r1)
/* 8004E9E4 0004BAC4  39 00 00 00 */	li r8, 0x0
/* 8004E9E8 0004BAC8  39 20 00 00 */	li r9, 0x0
/* 8004E9EC 0004BACC  39 40 00 00 */	li r10, 0x0
/* 8004E9F0 0004BAD0  90 01 00 10 */	stw r0, 0x10(r1)
/* 8004E9F4 0004BAD4  80 9A 00 00 */	lwz r4, 0x0(r26)
/* 8004E9F8 0004BAD8  C0 22 87 F0 */	lfs f1, "@558"@sda21(r2)
/* 8004E9FC 0004BADC  C0 42 87 F4 */	lfs f2, "@559"@sda21(r2)
/* 8004EA00 0004BAE0  4B FB 83 59 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8004EA04 0004BAE4  38 00 00 00 */	li r0, 0x0
/* 8004EA08 0004BAE8  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8004EA0C 0004BAEC  90 01 00 08 */	stw r0, 0x8(r1)
/* 8004EA10 0004BAF0  38 A3 43 18 */	addi r5, r3, "@stringBase0"@l
/* 8004EA14 0004BAF4  3C 80 80 05 */	lis r4, AlwaysConditional__FP15xAnimTransitionP11xAnimSinglePv@ha
/* 8004EA18 0004BAF8  7E E3 BB 78 */	mr r3, r23
/* 8004EA1C 0004BAFC  90 01 00 0C */	stw r0, 0xc(r1)
/* 8004EA20 0004BB00  38 C4 E7 E0 */	addi r6, r4, AlwaysConditional__FP15xAnimTransitionP11xAnimSinglePv@l
/* 8004EA24 0004BB04  38 A5 00 79 */	addi r5, r5, 0x79
/* 8004EA28 0004BB08  38 E0 00 00 */	li r7, 0x0
/* 8004EA2C 0004BB0C  C0 22 87 F4 */	lfs f1, "@559"@sda21(r2)
/* 8004EA30 0004BB10  39 00 00 10 */	li r8, 0x10
/* 8004EA34 0004BB14  80 9A 00 00 */	lwz r4, 0x0(r26)
/* 8004EA38 0004BB18  39 20 00 00 */	li r9, 0x0
/* 8004EA3C 0004BB1C  FC 40 08 90 */	fmr f2, f1
/* 8004EA40 0004BB20  39 40 00 00 */	li r10, 0x0
/* 8004EA44 0004BB24  FC 60 08 90 */	fmr f3, f1
/* 8004EA48 0004BB28  4B FB 89 79 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 8004EA4C 0004BB2C  48 00 00 48 */	b .L_8004EA94
.L_8004EA50:
/* 8004EA50 0004BB30  3C 60 80 00 */	lis r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8004EA54 0004BB34  38 00 00 00 */	li r0, 0x0
/* 8004EA58 0004BB38  38 83 6C FC */	addi r4, r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8004EA5C 0004BB3C  7E E3 BB 78 */	mr r3, r23
/* 8004EA60 0004BB40  90 81 00 08 */	stw r4, 0x8(r1)
/* 8004EA64 0004BB44  38 A0 00 00 */	li r5, 0x0
/* 8004EA68 0004BB48  38 C0 00 00 */	li r6, 0x0
/* 8004EA6C 0004BB4C  38 E0 00 00 */	li r7, 0x0
/* 8004EA70 0004BB50  90 01 00 0C */	stw r0, 0xc(r1)
/* 8004EA74 0004BB54  39 00 00 00 */	li r8, 0x0
/* 8004EA78 0004BB58  39 20 00 00 */	li r9, 0x0
/* 8004EA7C 0004BB5C  39 40 00 00 */	li r10, 0x0
/* 8004EA80 0004BB60  90 01 00 10 */	stw r0, 0x10(r1)
/* 8004EA84 0004BB64  80 9A 00 00 */	lwz r4, 0x0(r26)
/* 8004EA88 0004BB68  C0 22 87 F0 */	lfs f1, "@558"@sda21(r2)
/* 8004EA8C 0004BB6C  C0 42 87 F4 */	lfs f2, "@559"@sda21(r2)
/* 8004EA90 0004BB70  4B FB 82 C9 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
.L_8004EA94:
/* 8004EA94 0004BB74  80 BA 00 00 */	lwz r5, 0x0(r26)
/* 8004EA98 0004BB78  7E E3 BB 78 */	mr r3, r23
/* 8004EA9C 0004BB7C  7E A4 AB 78 */	mr r4, r21
/* 8004EAA0 0004BB80  4B FB 8A D5 */	bl xAnimTableAddFile__FP10xAnimTableP9xAnimFilePCc
/* 8004EAA4 0004BB84  3C 60 80 00 */	lis r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8004EAA8 0004BB88  38 00 00 00 */	li r0, 0x0
/* 8004EAAC 0004BB8C  38 83 6C FC */	addi r4, r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8004EAB0 0004BB90  7E E3 BB 78 */	mr r3, r23
/* 8004EAB4 0004BB94  90 81 00 08 */	stw r4, 0x8(r1)
/* 8004EAB8 0004BB98  38 A0 00 10 */	li r5, 0x10
/* 8004EABC 0004BB9C  38 C0 00 00 */	li r6, 0x0
/* 8004EAC0 0004BBA0  38 E0 00 00 */	li r7, 0x0
/* 8004EAC4 0004BBA4  90 01 00 0C */	stw r0, 0xc(r1)
/* 8004EAC8 0004BBA8  39 00 00 00 */	li r8, 0x0
/* 8004EACC 0004BBAC  39 20 00 00 */	li r9, 0x0
/* 8004EAD0 0004BBB0  39 40 00 00 */	li r10, 0x0
/* 8004EAD4 0004BBB4  90 01 00 10 */	stw r0, 0x10(r1)
/* 8004EAD8 0004BBB8  80 9A 00 28 */	lwz r4, 0x28(r26)
/* 8004EADC 0004BBBC  C0 22 87 F0 */	lfs f1, "@558"@sda21(r2)
/* 8004EAE0 0004BBC0  C0 42 87 F4 */	lfs f2, "@559"@sda21(r2)
/* 8004EAE4 0004BBC4  4B FB 82 75 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8004EAE8 0004BBC8  80 BA 00 28 */	lwz r5, 0x28(r26)
/* 8004EAEC 0004BBCC  7E E3 BB 78 */	mr r3, r23
/* 8004EAF0 0004BBD0  7E A4 AB 78 */	mr r4, r21
/* 8004EAF4 0004BBD4  4B FB 8A 81 */	bl xAnimTableAddFile__FP10xAnimTableP9xAnimFilePCc
/* 8004EAF8 0004BBD8  80 8D 8B 4C */	lwz r4, anused@sda21(r13)
/* 8004EAFC 0004BBDC  7C 79 20 2E */	lwzx r3, r25, r4
/* 8004EB00 0004BBE0  38 03 00 01 */	addi r0, r3, 0x1
/* 8004EB04 0004BBE4  7C 19 21 2E */	stwx r0, r25, r4
.L_8004EB08:
/* 8004EB08 0004BBE8  3A D6 00 01 */	addi r22, r22, 0x1
/* 8004EB0C 0004BBEC  3B 5A 00 04 */	addi r26, r26, 0x4
/* 8004EB10 0004BBF0  2C 16 00 0A */	cmpwi r22, 0xa
/* 8004EB14 0004BBF4  3B 9C 00 04 */	addi r28, r28, 0x4
/* 8004EB18 0004BBF8  41 80 FE 68 */	blt .L_8004E980
/* 8004EB1C 0004BBFC  3B 39 00 04 */	addi r25, r25, 0x4
/* 8004EB20 0004BC00  3B 18 00 01 */	addi r24, r24, 0x1
.L_8004EB24:
/* 8004EB24 0004BC04  80 0D 8B 40 */	lwz r0, nals@sda21(r13)
/* 8004EB28 0004BC08  7C 18 00 00 */	cmpw r24, r0
/* 8004EB2C 0004BC0C  41 80 FD 4C */	blt .L_8004E878
.L_8004EB30:
/* 8004EB30 0004BC10  BA A1 00 44 */	lmw r21, 0x44(r1)
/* 8004EB34 0004BC14  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8004EB38 0004BC18  7C 08 03 A6 */	mtlr r0
/* 8004EB3C 0004BC1C  38 21 00 70 */	addi r1, r1, 0x70
/* 8004EB40 0004BC20  4E 80 00 20 */	blr
.endfn zAnimListInit__Fv

# zAnimListExit()
.fn zAnimListExit__Fv, global
/* 8004EB44 0004BC24  38 00 00 00 */	li r0, 0x0
/* 8004EB48 0004BC28  90 0D 8B 40 */	stw r0, nals@sda21(r13)
/* 8004EB4C 0004BC2C  90 0D 8B 44 */	stw r0, aids@sda21(r13)
/* 8004EB50 0004BC30  90 0D 8B 48 */	stw r0, atbls@sda21(r13)
/* 8004EB54 0004BC34  90 0D 8B 4C */	stw r0, anused@sda21(r13)
/* 8004EB58 0004BC38  4E 80 00 20 */	blr
.endfn zAnimListExit__Fv

# zAnimListGetTable(unsigned int)
.fn zAnimListGetTable__FUi, global
/* 8004EB5C 0004BC3C  80 0D 8B 40 */	lwz r0, nals@sda21(r13)
/* 8004EB60 0004BC40  38 A0 00 00 */	li r5, 0x0
/* 8004EB64 0004BC44  80 8D 8B 44 */	lwz r4, aids@sda21(r13)
/* 8004EB68 0004BC48  7C 09 03 A6 */	mtctr r0
/* 8004EB6C 0004BC4C  2C 00 00 00 */	cmpwi r0, 0x0
/* 8004EB70 0004BC50  40 81 00 2C */	ble .L_8004EB9C
.L_8004EB74:
/* 8004EB74 0004BC54  80 04 00 00 */	lwz r0, 0x0(r4)
/* 8004EB78 0004BC58  7C 03 00 40 */	cmplw r3, r0
/* 8004EB7C 0004BC5C  40 82 00 14 */	bne .L_8004EB90
/* 8004EB80 0004BC60  80 6D 8B 48 */	lwz r3, atbls@sda21(r13)
/* 8004EB84 0004BC64  54 A0 10 3A */	slwi r0, r5, 2
/* 8004EB88 0004BC68  7C 63 00 2E */	lwzx r3, r3, r0
/* 8004EB8C 0004BC6C  4E 80 00 20 */	blr
.L_8004EB90:
/* 8004EB90 0004BC70  38 84 00 04 */	addi r4, r4, 0x4
/* 8004EB94 0004BC74  38 A5 00 01 */	addi r5, r5, 0x1
/* 8004EB98 0004BC78  42 00 FF DC */	bdnz .L_8004EB74
.L_8004EB9C:
/* 8004EB9C 0004BC7C  38 60 00 00 */	li r3, 0x0
/* 8004EBA0 0004BC80  4E 80 00 20 */	blr
.endfn zAnimListGetTable__FUi

# zAnimListGetNumUsed(unsigned int)
.fn zAnimListGetNumUsed__FUi, global
/* 8004EBA4 0004BC84  80 0D 8B 40 */	lwz r0, nals@sda21(r13)
/* 8004EBA8 0004BC88  38 A0 00 00 */	li r5, 0x0
/* 8004EBAC 0004BC8C  80 8D 8B 44 */	lwz r4, aids@sda21(r13)
/* 8004EBB0 0004BC90  7C 09 03 A6 */	mtctr r0
/* 8004EBB4 0004BC94  2C 00 00 00 */	cmpwi r0, 0x0
/* 8004EBB8 0004BC98  40 81 00 2C */	ble .L_8004EBE4
.L_8004EBBC:
/* 8004EBBC 0004BC9C  80 04 00 00 */	lwz r0, 0x0(r4)
/* 8004EBC0 0004BCA0  7C 03 00 40 */	cmplw r3, r0
/* 8004EBC4 0004BCA4  40 82 00 14 */	bne .L_8004EBD8
/* 8004EBC8 0004BCA8  80 6D 8B 4C */	lwz r3, anused@sda21(r13)
/* 8004EBCC 0004BCAC  54 A0 10 3A */	slwi r0, r5, 2
/* 8004EBD0 0004BCB0  7C 63 00 2E */	lwzx r3, r3, r0
/* 8004EBD4 0004BCB4  4E 80 00 20 */	blr
.L_8004EBD8:
/* 8004EBD8 0004BCB8  38 84 00 04 */	addi r4, r4, 0x4
/* 8004EBDC 0004BCBC  38 A5 00 01 */	addi r5, r5, 0x1
/* 8004EBE0 0004BCC0  42 00 FF DC */	bdnz .L_8004EBBC
.L_8004EBE4:
/* 8004EBE4 0004BCC4  38 60 00 00 */	li r3, 0x0
/* 8004EBE8 0004BCC8  4E 80 00 20 */	blr
.endfn zAnimListGetNumUsed__FUi

# 0x80254318 - 0x80254398
.rodata
.balign 8

.obj "@stringBase0", local
	.4byte 0x73746F70
	.2byte 0x3000
.L_8025431E:
	.4byte 0x73746F70
	.2byte 0x3100
.L_80254324:
	.4byte 0x73746F70
	.2byte 0x3200
.L_8025432A:
	.4byte 0x73746F70
	.2byte 0x3300
.L_80254330:
	.4byte 0x73746F70
	.2byte 0x3400
.L_80254336:
	.4byte 0x73746F70
	.2byte 0x3500
.L_8025433C:
	.4byte 0x73746F70
	.2byte 0x3600
.L_80254342:
	.4byte 0x73746F70
	.2byte 0x3700
.L_80254348:
	.4byte 0x73746F70
	.2byte 0x3800
.L_8025434E:
	.4byte 0x73746F70
	.2byte 0x3900
.L_80254354:
	.4byte 0x6C6F6F70
	.2byte 0x3000
.L_8025435A:
	.4byte 0x6C6F6F70
	.2byte 0x3100
.L_80254360:
	.4byte 0x6C6F6F70
	.2byte 0x3200
.L_80254366:
	.4byte 0x6C6F6F70
	.2byte 0x3300
.L_8025436C:
	.4byte 0x6C6F6F70
	.2byte 0x3400
.L_80254372:
	.4byte 0x6C6F6F70
	.2byte 0x3500
.L_80254378:
	.4byte 0x6C6F6F70
	.2byte 0x3600
.L_8025437E:
	.4byte 0x6C6F6F70
	.2byte 0x3700
.L_80254384:
	.4byte 0x6C6F6F70
	.2byte 0x3800
.L_8025438A:
	.4byte 0x6C6F6F70
	.4byte 0x39000069
	.4byte 0x646C6500
.endobj "@stringBase0"
	.2byte 0x0000

# 0x8028A7B8 - 0x8028A808
.data
.balign 8

.obj astnames, local
	.4byte "@stringBase0"
	.rel "@stringBase0", .L_8025431E
	.rel "@stringBase0", .L_80254324
	.rel "@stringBase0", .L_8025432A
	.rel "@stringBase0", .L_80254330
	.rel "@stringBase0", .L_80254336
	.rel "@stringBase0", .L_8025433C
	.rel "@stringBase0", .L_80254342
	.rel "@stringBase0", .L_80254348
	.rel "@stringBase0", .L_8025434E
	.rel "@stringBase0", .L_80254354
	.rel "@stringBase0", .L_8025435A
	.rel "@stringBase0", .L_80254360
	.rel "@stringBase0", .L_80254366
	.rel "@stringBase0", .L_8025436C
	.rel "@stringBase0", .L_80254372
	.rel "@stringBase0", .L_80254378
	.rel "@stringBase0", .L_8025437E
	.rel "@stringBase0", .L_80254384
	.rel "@stringBase0", .L_8025438A
.endobj astnames

# 0x803CB440 - 0x803CB450
.section .sbss, "wa", @nobits
.balign 8

.obj nals, local
	.skip 0x4
.endobj nals

.obj aids, local
	.skip 0x4
.endobj aids

.obj atbls, local
	.skip 0x4
.endobj atbls

.obj anused, local
	.skip 0x4
.endobj anused

# 0x803CD170 - 0x803CD178
.section .sdata2, "a"
.balign 8

.obj "@558", local
	.4byte 0x3F800000
.endobj "@558"

.obj "@559", local
	.4byte 0x00000000
.endobj "@559"
