.include "macros.inc"
.file "zCombo.cpp"

# 0x8019590C - 0x80195FDC
.text
.balign 4

# fillCombo(zComboReward*)
.fn fillCombo__FP12zComboReward, local
/* 8019590C 001929EC  3C 80 80 3C */	lis r4, globals@ha
/* 80195910 001929F0  80 E3 00 00 */	lwz r7, 0x0(r3)
/* 80195914 001929F4  38 C4 05 58 */	addi r6, r4, globals@l
/* 80195918 001929F8  39 00 00 00 */	li r8, 0x0
/* 8019591C 001929FC  38 80 00 00 */	li r4, 0x0
/* 80195920 00192A00  48 00 00 D0 */	b .L_801959F0
.L_80195924:
/* 80195924 00192A04  80 06 08 88 */	lwz r0, 0x888(r6)
/* 80195928 00192A08  7C 07 00 00 */	cmpw r7, r0
/* 8019592C 00192A0C  41 80 00 24 */	blt .L_80195950
/* 80195930 00192A10  38 04 00 08 */	addi r0, r4, 0x8
/* 80195934 00192A14  38 A0 00 00 */	li r5, 0x0
/* 80195938 00192A18  7C A3 01 2E */	stwx r5, r3, r0
/* 8019593C 00192A1C  39 08 00 01 */	addi r8, r8, 0x1
/* 80195940 00192A20  38 84 00 04 */	addi r4, r4, 0x4
/* 80195944 00192A24  80 06 08 88 */	lwz r0, 0x888(r6)
/* 80195948 00192A28  7C E0 38 50 */	subf r7, r0, r7
/* 8019594C 00192A2C  48 00 00 A4 */	b .L_801959F0
.L_80195950:
/* 80195950 00192A30  80 06 08 8C */	lwz r0, 0x88c(r6)
/* 80195954 00192A34  7C 07 00 00 */	cmpw r7, r0
/* 80195958 00192A38  41 80 00 24 */	blt .L_8019597C
/* 8019595C 00192A3C  38 04 00 08 */	addi r0, r4, 0x8
/* 80195960 00192A40  38 A0 00 01 */	li r5, 0x1
/* 80195964 00192A44  7C A3 01 2E */	stwx r5, r3, r0
/* 80195968 00192A48  39 08 00 01 */	addi r8, r8, 0x1
/* 8019596C 00192A4C  38 84 00 04 */	addi r4, r4, 0x4
/* 80195970 00192A50  80 06 08 8C */	lwz r0, 0x88c(r6)
/* 80195974 00192A54  7C E0 38 50 */	subf r7, r0, r7
/* 80195978 00192A58  48 00 00 78 */	b .L_801959F0
.L_8019597C:
/* 8019597C 00192A5C  80 06 08 90 */	lwz r0, 0x890(r6)
/* 80195980 00192A60  7C 07 00 00 */	cmpw r7, r0
/* 80195984 00192A64  41 80 00 24 */	blt .L_801959A8
/* 80195988 00192A68  38 04 00 08 */	addi r0, r4, 0x8
/* 8019598C 00192A6C  38 A0 00 02 */	li r5, 0x2
/* 80195990 00192A70  7C A3 01 2E */	stwx r5, r3, r0
/* 80195994 00192A74  39 08 00 01 */	addi r8, r8, 0x1
/* 80195998 00192A78  38 84 00 04 */	addi r4, r4, 0x4
/* 8019599C 00192A7C  80 06 08 90 */	lwz r0, 0x890(r6)
/* 801959A0 00192A80  7C E0 38 50 */	subf r7, r0, r7
/* 801959A4 00192A84  48 00 00 4C */	b .L_801959F0
.L_801959A8:
/* 801959A8 00192A88  80 06 08 94 */	lwz r0, 0x894(r6)
/* 801959AC 00192A8C  7C 07 00 00 */	cmpw r7, r0
/* 801959B0 00192A90  41 80 00 24 */	blt .L_801959D4
/* 801959B4 00192A94  38 04 00 08 */	addi r0, r4, 0x8
/* 801959B8 00192A98  38 A0 00 03 */	li r5, 0x3
/* 801959BC 00192A9C  7C A3 01 2E */	stwx r5, r3, r0
/* 801959C0 00192AA0  39 08 00 01 */	addi r8, r8, 0x1
/* 801959C4 00192AA4  38 84 00 04 */	addi r4, r4, 0x4
/* 801959C8 00192AA8  80 06 08 94 */	lwz r0, 0x894(r6)
/* 801959CC 00192AAC  7C E0 38 50 */	subf r7, r0, r7
/* 801959D0 00192AB0  48 00 00 20 */	b .L_801959F0
.L_801959D4:
/* 801959D4 00192AB4  38 04 00 08 */	addi r0, r4, 0x8
/* 801959D8 00192AB8  38 A0 00 04 */	li r5, 0x4
/* 801959DC 00192ABC  7C A3 01 2E */	stwx r5, r3, r0
/* 801959E0 00192AC0  39 08 00 01 */	addi r8, r8, 0x1
/* 801959E4 00192AC4  38 84 00 04 */	addi r4, r4, 0x4
/* 801959E8 00192AC8  80 06 08 98 */	lwz r0, 0x898(r6)
/* 801959EC 00192ACC  7C E0 38 50 */	subf r7, r0, r7
.L_801959F0:
/* 801959F0 00192AD0  2C 07 00 00 */	cmpwi r7, 0x0
/* 801959F4 00192AD4  41 81 FF 30 */	bgt .L_80195924
/* 801959F8 00192AD8  91 03 00 30 */	stw r8, 0x30(r3)
/* 801959FC 00192ADC  4E 80 00 20 */	blr
.endfn fillCombo__FP12zComboReward

# zCombo_Setup()
.fn zCombo_Setup__Fv, global
/* 80195A00 00192AE0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80195A04 00192AE4  7C 08 02 A6 */	mflr r0
/* 80195A08 00192AE8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80195A0C 00192AEC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80195A10 00192AF0  38 63 4A 00 */	addi r3, r3, "@stringBase0"@l
/* 80195A14 00192AF4  38 00 00 00 */	li r0, 0x0
/* 80195A18 00192AF8  BE E1 00 0C */	stmw r23, 0xc(r1)
/* 80195A1C 00192AFC  38 63 00 C1 */	addi r3, r3, 0xc1
/* 80195A20 00192B00  90 0D 98 E0 */	stw r0, comboCounter@sda21(r13)
/* 80195A24 00192B04  90 0D 98 DC */	stw r0, comboLastCounter@sda21(r13)
/* 80195A28 00192B08  90 0D 98 D8 */	stw r0, comboPending@sda21(r13)
/* 80195A2C 00192B0C  C0 02 B2 60 */	lfs f0, "@844"@sda21(r2)
/* 80195A30 00192B10  D0 0D 98 E4 */	stfs f0, comboTimer@sda21(r13)
/* 80195A34 00192B14  4B EB 67 E1 */	bl xStrHash__FPCc
/* 80195A38 00192B18  4B F1 F0 05 */	bl zSceneFindObject__FUi
/* 80195A3C 00192B1C  90 6D 98 D0 */	stw r3, comboHUD@sda21(r13)
/* 80195A40 00192B20  80 6D 98 D0 */	lwz r3, comboHUD@sda21(r13)
/* 80195A44 00192B24  28 03 00 00 */	cmplwi r3, 0x0
/* 80195A48 00192B28  41 82 00 18 */	beq .L_80195A60
/* 80195A4C 00192B2C  38 63 00 10 */	addi r3, r3, 0x10
/* 80195A50 00192B30  4B E9 94 19 */	bl enable__Q24xhud6widgetFv
/* 80195A54 00192B34  80 6D 98 D0 */	lwz r3, comboHUD@sda21(r13)
/* 80195A58 00192B38  38 63 00 10 */	addi r3, r3, 0x10
/* 80195A5C 00192B3C  4B E9 87 0D */	bl hide__Q24xhud6widgetFv
.L_80195A60:
/* 80195A60 00192B40  3C 60 80 2A */	lis r3, comboReward@ha
/* 80195A64 00192B44  3B 00 00 00 */	li r24, 0x0
/* 80195A68 00192B48  3B E3 1B 88 */	addi r31, r3, comboReward@l
/* 80195A6C 00192B4C  7F F7 FB 78 */	mr r23, r31
.L_80195A70:
/* 80195A70 00192B50  80 77 00 04 */	lwz r3, 0x4(r23)
/* 80195A74 00192B54  4B EB 67 A1 */	bl xStrHash__FPCc
/* 80195A78 00192B58  38 80 00 00 */	li r4, 0x0
/* 80195A7C 00192B5C  4B EB 5C 91 */	bl xSTFindAsset__FUiPUi
/* 80195A80 00192B60  3B 18 00 01 */	addi r24, r24, 0x1
/* 80195A84 00192B64  90 77 00 34 */	stw r3, 0x34(r23)
/* 80195A88 00192B68  2C 18 00 10 */	cmpwi r24, 0x10
/* 80195A8C 00192B6C  3A F7 00 38 */	addi r23, r23, 0x38
/* 80195A90 00192B70  41 80 FF E0 */	blt .L_80195A70
/* 80195A94 00192B74  3C 80 80 3C */	lis r4, globals@ha
/* 80195A98 00192B78  3C 60 80 2A */	lis r3, comboReward@ha
/* 80195A9C 00192B7C  3A E4 05 58 */	addi r23, r4, globals@l
/* 80195AA0 00192B80  3B C0 00 00 */	li r30, 0x0
/* 80195AA4 00192B84  3B 23 1B 88 */	addi r25, r3, comboReward@l
/* 80195AA8 00192B88  83 17 08 9C */	lwz r24, 0x89c(r23)
/* 80195AAC 00192B8C  83 57 08 A0 */	lwz r26, 0x8a0(r23)
/* 80195AB0 00192B90  83 77 08 A4 */	lwz r27, 0x8a4(r23)
/* 80195AB4 00192B94  83 97 08 A8 */	lwz r28, 0x8a8(r23)
/* 80195AB8 00192B98  83 B7 08 AC */	lwz r29, 0x8ac(r23)
/* 80195ABC 00192B9C  81 97 08 B0 */	lwz r12, 0x8b0(r23)
/* 80195AC0 00192BA0  81 77 08 B4 */	lwz r11, 0x8b4(r23)
/* 80195AC4 00192BA4  81 57 08 B8 */	lwz r10, 0x8b8(r23)
/* 80195AC8 00192BA8  81 37 08 BC */	lwz r9, 0x8bc(r23)
/* 80195ACC 00192BAC  81 17 08 C0 */	lwz r8, 0x8c0(r23)
/* 80195AD0 00192BB0  80 F7 08 C4 */	lwz r7, 0x8c4(r23)
/* 80195AD4 00192BB4  80 D7 08 C8 */	lwz r6, 0x8c8(r23)
/* 80195AD8 00192BB8  80 B7 08 CC */	lwz r5, 0x8cc(r23)
/* 80195ADC 00192BBC  80 97 08 D0 */	lwz r4, 0x8d0(r23)
/* 80195AE0 00192BC0  80 77 08 D4 */	lwz r3, 0x8d4(r23)
/* 80195AE4 00192BC4  80 17 08 D8 */	lwz r0, 0x8d8(r23)
/* 80195AE8 00192BC8  93 19 00 00 */	stw r24, 0x0(r25)
/* 80195AEC 00192BCC  C0 17 08 DC */	lfs f0, 0x8dc(r23)
/* 80195AF0 00192BD0  93 59 00 38 */	stw r26, 0x38(r25)
/* 80195AF4 00192BD4  93 79 00 70 */	stw r27, 0x70(r25)
/* 80195AF8 00192BD8  93 99 00 A8 */	stw r28, 0xa8(r25)
/* 80195AFC 00192BDC  93 B9 00 E0 */	stw r29, 0xe0(r25)
/* 80195B00 00192BE0  91 99 01 18 */	stw r12, 0x118(r25)
/* 80195B04 00192BE4  91 79 01 50 */	stw r11, 0x150(r25)
/* 80195B08 00192BE8  91 59 01 88 */	stw r10, 0x188(r25)
/* 80195B0C 00192BEC  91 39 01 C0 */	stw r9, 0x1c0(r25)
/* 80195B10 00192BF0  91 19 01 F8 */	stw r8, 0x1f8(r25)
/* 80195B14 00192BF4  90 F9 02 30 */	stw r7, 0x230(r25)
/* 80195B18 00192BF8  90 D9 02 68 */	stw r6, 0x268(r25)
/* 80195B1C 00192BFC  90 B9 02 A0 */	stw r5, 0x2a0(r25)
/* 80195B20 00192C00  90 99 02 D8 */	stw r4, 0x2d8(r25)
/* 80195B24 00192C04  90 79 03 10 */	stw r3, 0x310(r25)
/* 80195B28 00192C08  90 19 03 48 */	stw r0, 0x348(r25)
/* 80195B2C 00192C0C  D0 0D 84 C8 */	stfs f0, comboMaxTime@sda21(r13)
.L_80195B30:
/* 80195B30 00192C10  7F E3 FB 78 */	mr r3, r31
/* 80195B34 00192C14  4B FF FD D9 */	bl fillCombo__FP12zComboReward
/* 80195B38 00192C18  3B DE 00 01 */	addi r30, r30, 0x1
/* 80195B3C 00192C1C  3B FF 00 38 */	addi r31, r31, 0x38
/* 80195B40 00192C20  2C 1E 00 10 */	cmpwi r30, 0x10
/* 80195B44 00192C24  41 80 FF EC */	blt .L_80195B30
/* 80195B48 00192C28  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80195B4C 00192C2C  38 63 4A 00 */	addi r3, r3, "@stringBase0"@l
/* 80195B50 00192C30  38 63 00 D7 */	addi r3, r3, 0xd7
/* 80195B54 00192C34  4B EB 66 C1 */	bl xStrHash__FPCc
/* 80195B58 00192C38  4B F1 EE E5 */	bl zSceneFindObject__FUi
/* 80195B5C 00192C3C  3C A0 80 36 */	lis r5, sHideText@ha
/* 80195B60 00192C40  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80195B64 00192C44  90 65 2B 74 */	stw r3, sHideText@l(r5)
/* 80195B68 00192C48  38 64 4A 00 */	addi r3, r4, "@stringBase0"@l
/* 80195B6C 00192C4C  38 63 00 EB */	addi r3, r3, 0xeb
/* 80195B70 00192C50  4B EB 66 A5 */	bl xStrHash__FPCc
/* 80195B74 00192C54  4B F1 EE C9 */	bl zSceneFindObject__FUi
/* 80195B78 00192C58  3C A0 80 36 */	lis r5, sHideText@ha
/* 80195B7C 00192C5C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80195B80 00192C60  38 A5 2B 74 */	addi r5, r5, sHideText@l
/* 80195B84 00192C64  90 65 00 04 */	stw r3, 0x4(r5)
/* 80195B88 00192C68  38 64 4A 00 */	addi r3, r4, "@stringBase0"@l
/* 80195B8C 00192C6C  38 63 00 FA */	addi r3, r3, 0xfa
/* 80195B90 00192C70  4B EB 66 85 */	bl xStrHash__FPCc
/* 80195B94 00192C74  4B F1 EE A9 */	bl zSceneFindObject__FUi
/* 80195B98 00192C78  3C A0 80 36 */	lis r5, sHideText@ha
/* 80195B9C 00192C7C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80195BA0 00192C80  38 A5 2B 74 */	addi r5, r5, sHideText@l
/* 80195BA4 00192C84  90 65 00 08 */	stw r3, 0x8(r5)
/* 80195BA8 00192C88  38 64 4A 00 */	addi r3, r4, "@stringBase0"@l
/* 80195BAC 00192C8C  38 63 01 0D */	addi r3, r3, 0x10d
/* 80195BB0 00192C90  4B EB 66 65 */	bl xStrHash__FPCc
/* 80195BB4 00192C94  4B F1 EE 89 */	bl zSceneFindObject__FUi
/* 80195BB8 00192C98  3C A0 80 36 */	lis r5, sHideText@ha
/* 80195BBC 00192C9C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80195BC0 00192CA0  38 A5 2B 74 */	addi r5, r5, sHideText@l
/* 80195BC4 00192CA4  90 65 00 0C */	stw r3, 0xc(r5)
/* 80195BC8 00192CA8  38 64 4A 00 */	addi r3, r4, "@stringBase0"@l
/* 80195BCC 00192CAC  38 63 01 1C */	addi r3, r3, 0x11c
/* 80195BD0 00192CB0  4B EB 66 45 */	bl xStrHash__FPCc
/* 80195BD4 00192CB4  4B F1 EE 69 */	bl zSceneFindObject__FUi
/* 80195BD8 00192CB8  3C A0 80 36 */	lis r5, sHideText@ha
/* 80195BDC 00192CBC  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80195BE0 00192CC0  38 A5 2B 74 */	addi r5, r5, sHideText@l
/* 80195BE4 00192CC4  90 65 00 10 */	stw r3, 0x10(r5)
/* 80195BE8 00192CC8  38 64 4A 00 */	addi r3, r4, "@stringBase0"@l
/* 80195BEC 00192CCC  38 63 01 29 */	addi r3, r3, 0x129
/* 80195BF0 00192CD0  4B EB 66 25 */	bl xStrHash__FPCc
/* 80195BF4 00192CD4  4B F1 EE 49 */	bl zSceneFindObject__FUi
/* 80195BF8 00192CD8  90 6D 98 D4 */	stw r3, sHideUIF@sda21(r13)
/* 80195BFC 00192CDC  BA E1 00 0C */	lmw r23, 0xc(r1)
/* 80195C00 00192CE0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80195C04 00192CE4  7C 08 03 A6 */	mtlr r0
/* 80195C08 00192CE8  38 21 00 30 */	addi r1, r1, 0x30
/* 80195C0C 00192CEC  4E 80 00 20 */	blr
.endfn zCombo_Setup__Fv

# zCombo_Add(int)
.fn zCombo_Add__Fi, global
/* 80195C10 00192CF0  C0 2D 98 E4 */	lfs f1, comboTimer@sda21(r13)
/* 80195C14 00192CF4  C0 02 B2 64 */	lfs f0, "@855"@sda21(r2)
/* 80195C18 00192CF8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80195C1C 00192CFC  40 80 00 18 */	bge .L_80195C34
/* 80195C20 00192D00  C0 0D 84 C8 */	lfs f0, comboMaxTime@sda21(r13)
/* 80195C24 00192D04  38 03 FF FF */	addi r0, r3, -0x1
/* 80195C28 00192D08  D0 0D 98 E4 */	stfs f0, comboTimer@sda21(r13)
/* 80195C2C 00192D0C  90 0D 98 D8 */	stw r0, comboPending@sda21(r13)
/* 80195C30 00192D10  4E 80 00 20 */	blr
.L_80195C34:
/* 80195C34 00192D14  C0 0D 84 C8 */	lfs f0, comboMaxTime@sda21(r13)
/* 80195C38 00192D18  D0 0D 98 E4 */	stfs f0, comboTimer@sda21(r13)
/* 80195C3C 00192D1C  80 0D 98 E0 */	lwz r0, comboCounter@sda21(r13)
/* 80195C40 00192D20  7C 00 1A 14 */	add r0, r0, r3
/* 80195C44 00192D24  90 0D 98 E0 */	stw r0, comboCounter@sda21(r13)
/* 80195C48 00192D28  80 8D 98 D8 */	lwz r4, comboPending@sda21(r13)
/* 80195C4C 00192D2C  2C 04 00 00 */	cmpwi r4, 0x0
/* 80195C50 00192D30  4D 82 00 20 */	beqlr
/* 80195C54 00192D34  80 6D 98 E0 */	lwz r3, comboCounter@sda21(r13)
/* 80195C58 00192D38  38 00 00 00 */	li r0, 0x0
/* 80195C5C 00192D3C  7C 63 22 14 */	add r3, r3, r4
/* 80195C60 00192D40  90 6D 98 E0 */	stw r3, comboCounter@sda21(r13)
/* 80195C64 00192D44  90 0D 98 D8 */	stw r0, comboPending@sda21(r13)
/* 80195C68 00192D48  4E 80 00 20 */	blr
.endfn zCombo_Add__Fi

# zComboHideMessage(xhud::widget&, xhud::motive&)
.fn zComboHideMessage__FRQ24xhud6widgetRQ24xhud6motive, global
/* 80195C6C 00192D4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80195C70 00192D50  7C 08 02 A6 */	mflr r0
/* 80195C74 00192D54  90 01 00 14 */	stw r0, 0x14(r1)
/* 80195C78 00192D58  4B E9 84 F1 */	bl hide__Q24xhud6widgetFv
/* 80195C7C 00192D5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80195C80 00192D60  7C 08 03 A6 */	mtlr r0
/* 80195C84 00192D64  38 21 00 10 */	addi r1, r1, 0x10
/* 80195C88 00192D68  4E 80 00 20 */	blr
.endfn zComboHideMessage__FRQ24xhud6widgetRQ24xhud6motive

# zCombo_HideImmediately()
.fn zCombo_HideImmediately__Fv, global
/* 80195C8C 00192D6C  80 6D 98 D0 */	lwz r3, comboHUD@sda21(r13)
/* 80195C90 00192D70  28 03 00 00 */	cmplwi r3, 0x0
/* 80195C94 00192D74  4D 82 00 20 */	beqlr
/* 80195C98 00192D78  38 00 00 00 */	li r0, 0x0
/* 80195C9C 00192D7C  98 03 00 94 */	stb r0, 0x94(r3)
/* 80195CA0 00192D80  4E 80 00 20 */	blr
.endfn zCombo_HideImmediately__Fv

# zCombo_Update(float)
.fn zCombo_Update__Ff, global
/* 80195CA4 00192D84  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80195CA8 00192D88  7C 08 02 A6 */	mflr r0
/* 80195CAC 00192D8C  90 01 00 54 */	stw r0, 0x54(r1)
/* 80195CB0 00192D90  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80195CB4 00192D94  F3 E1 00 48 */	psq_st f31, 0x48(r1), 0, qr0
/* 80195CB8 00192D98  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80195CBC 00192D9C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80195CC0 00192DA0  93 A1 00 34 */	stw r29, 0x34(r1)
/* 80195CC4 00192DA4  93 81 00 30 */	stw r28, 0x30(r1)
/* 80195CC8 00192DA8  3C 80 80 3C */	lis r4, globals@ha
/* 80195CCC 00192DAC  FF E0 08 90 */	fmr f31, f1
/* 80195CD0 00192DB0  3C 60 80 36 */	lis r3, sUnderCamPos@ha
/* 80195CD4 00192DB4  38 84 05 58 */	addi r4, r4, globals@l
/* 80195CD8 00192DB8  38 63 2B 68 */	addi r3, r3, sUnderCamPos@l
/* 80195CDC 00192DBC  38 84 00 44 */	addi r4, r4, 0x44
/* 80195CE0 00192DC0  4B EB 87 FD */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 80195CE4 00192DC4  3C 80 80 3C */	lis r4, globals@ha
/* 80195CE8 00192DC8  3C 60 80 36 */	lis r3, sUnderCamPos@ha
/* 80195CEC 00192DCC  38 84 05 58 */	addi r4, r4, globals@l
/* 80195CF0 00192DD0  C0 22 B2 68 */	lfs f1, "@923"@sda21(r2)
/* 80195CF4 00192DD4  38 63 2B 68 */	addi r3, r3, sUnderCamPos@l
/* 80195CF8 00192DD8  38 84 00 24 */	addi r4, r4, 0x24
/* 80195CFC 00192DDC  4B E7 F3 5D */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 80195D00 00192DE0  80 8D 98 E0 */	lwz r4, comboCounter@sda21(r13)
/* 80195D04 00192DE4  2C 04 00 10 */	cmpwi r4, 0x10
/* 80195D08 00192DE8  7C 9F 23 78 */	mr r31, r4
/* 80195D0C 00192DEC  41 80 00 08 */	blt .L_80195D14
/* 80195D10 00192DF0  3B E0 00 0F */	li r31, 0xf
.L_80195D14:
/* 80195D14 00192DF4  80 0D 98 DC */	lwz r0, comboLastCounter@sda21(r13)
/* 80195D18 00192DF8  3C 60 80 2A */	lis r3, comboReward@ha
/* 80195D1C 00192DFC  1C BF 00 38 */	mulli r5, r31, 0x38
/* 80195D20 00192E00  7C 00 20 00 */	cmpw r0, r4
/* 80195D24 00192E04  38 03 1B 88 */	addi r0, r3, comboReward@l
/* 80195D28 00192E08  7F C0 2A 14 */	add r30, r0, r5
/* 80195D2C 00192E0C  41 82 00 40 */	beq .L_80195D6C
/* 80195D30 00192E10  80 1E 00 00 */	lwz r0, 0x0(r30)
/* 80195D34 00192E14  2C 00 00 00 */	cmpwi r0, 0x0
/* 80195D38 00192E18  41 82 00 34 */	beq .L_80195D6C
/* 80195D3C 00192E1C  80 6D 98 D0 */	lwz r3, comboHUD@sda21(r13)
/* 80195D40 00192E20  28 03 00 00 */	cmplwi r3, 0x0
/* 80195D44 00192E24  41 82 00 20 */	beq .L_80195D64
/* 80195D48 00192E28  80 9E 00 34 */	lwz r4, 0x34(r30)
/* 80195D4C 00192E2C  38 63 00 94 */	addi r3, r3, 0x94
/* 80195D50 00192E30  38 84 00 04 */	addi r4, r4, 0x4
/* 80195D54 00192E34  48 05 19 AD */	bl strcpy
/* 80195D58 00192E38  80 6D 98 D0 */	lwz r3, comboHUD@sda21(r13)
/* 80195D5C 00192E3C  38 63 00 10 */	addi r3, r3, 0x10
/* 80195D60 00192E40  4B E9 82 75 */	bl show__Q24xhud6widgetFv
.L_80195D64:
/* 80195D64 00192E44  80 0D 98 E0 */	lwz r0, comboCounter@sda21(r13)
/* 80195D68 00192E48  90 0D 98 DC */	stw r0, comboLastCounter@sda21(r13)
.L_80195D6C:
/* 80195D6C 00192E4C  3C 60 80 36 */	lis r3, sHideText@ha
/* 80195D70 00192E50  3B 80 00 00 */	li r28, 0x0
/* 80195D74 00192E54  3B A3 2B 74 */	addi r29, r3, sHideText@l
.L_80195D78:
/* 80195D78 00192E58  80 7D 00 00 */	lwz r3, 0x0(r29)
/* 80195D7C 00192E5C  28 03 00 00 */	cmplwi r3, 0x0
/* 80195D80 00192E60  41 82 00 20 */	beq .L_80195DA0
/* 80195D84 00192E64  48 00 02 59 */	bl visible__8ztextboxFv
/* 80195D88 00192E68  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80195D8C 00192E6C  41 82 00 14 */	beq .L_80195DA0
/* 80195D90 00192E70  80 6D 98 D0 */	lwz r3, comboHUD@sda21(r13)
/* 80195D94 00192E74  38 00 00 00 */	li r0, 0x0
/* 80195D98 00192E78  98 03 00 94 */	stb r0, 0x94(r3)
/* 80195D9C 00192E7C  48 00 00 14 */	b .L_80195DB0
.L_80195DA0:
/* 80195DA0 00192E80  3B 9C 00 01 */	addi r28, r28, 0x1
/* 80195DA4 00192E84  3B BD 00 04 */	addi r29, r29, 0x4
/* 80195DA8 00192E88  2C 1C 00 05 */	cmpwi r28, 0x5
/* 80195DAC 00192E8C  41 80 FF CC */	blt .L_80195D78
.L_80195DB0:
/* 80195DB0 00192E90  80 6D 98 D4 */	lwz r3, sHideUIF@sda21(r13)
/* 80195DB4 00192E94  28 03 00 00 */	cmplwi r3, 0x0
/* 80195DB8 00192E98  41 82 00 1C */	beq .L_80195DD4
/* 80195DBC 00192E9C  4B E7 88 7D */	bl xEntIsVisible__FPC4xEnt
/* 80195DC0 00192EA0  28 03 00 00 */	cmplwi r3, 0x0
/* 80195DC4 00192EA4  41 82 00 10 */	beq .L_80195DD4
/* 80195DC8 00192EA8  80 6D 98 D0 */	lwz r3, comboHUD@sda21(r13)
/* 80195DCC 00192EAC  38 00 00 00 */	li r0, 0x0
/* 80195DD0 00192EB0  98 03 00 94 */	stb r0, 0x94(r3)
.L_80195DD4:
/* 80195DD4 00192EB4  C0 2D 98 E4 */	lfs f1, comboTimer@sda21(r13)
/* 80195DD8 00192EB8  C0 02 B2 64 */	lfs f0, "@855"@sda21(r2)
/* 80195DDC 00192EBC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80195DE0 00192EC0  4C 41 13 82 */	cror eq, gt, eq
/* 80195DE4 00192EC4  40 82 01 D0 */	bne .L_80195FB4
/* 80195DE8 00192EC8  EC 01 F8 28 */	fsubs f0, f1, f31
/* 80195DEC 00192ECC  D0 0D 98 E4 */	stfs f0, comboTimer@sda21(r13)
/* 80195DF0 00192ED0  C0 2D 98 E4 */	lfs f1, comboTimer@sda21(r13)
/* 80195DF4 00192ED4  C0 02 B2 64 */	lfs f0, "@855"@sda21(r2)
/* 80195DF8 00192ED8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80195DFC 00192EDC  40 80 01 B8 */	bge .L_80195FB4
/* 80195E00 00192EE0  80 1E 00 00 */	lwz r0, 0x0(r30)
/* 80195E04 00192EE4  2C 00 00 00 */	cmpwi r0, 0x0
/* 80195E08 00192EE8  40 81 01 98 */	ble .L_80195FA0
/* 80195E0C 00192EEC  3C 60 80 36 */	lis r3, sUnderCamPos@ha
/* 80195E10 00192EF0  80 9E 00 30 */	lwz r4, 0x30(r30)
/* 80195E14 00192EF4  38 A3 2B 68 */	addi r5, r3, sUnderCamPos@l
/* 80195E18 00192EF8  38 7E 00 08 */	addi r3, r30, 0x8
/* 80195E1C 00192EFC  4B ED 01 E5 */	bl zEntPickup_SpawnNRewards__FPUiUiP5xVec3
/* 80195E20 00192F00  38 1F FF FB */	addi r0, r31, -0x5
/* 80195E24 00192F04  28 00 00 0A */	cmplwi r0, 0xa
/* 80195E28 00192F08  41 81 01 34 */	bgt .L_80195F5C
/* 80195E2C 00192F0C  3C 60 80 2A */	lis r3, "@925"@ha
/* 80195E30 00192F10  54 00 10 3A */	slwi r0, r0, 2
/* 80195E34 00192F14  38 63 1F 08 */	addi r3, r3, "@925"@l
/* 80195E38 00192F18  7C 03 00 2E */	lwzx r0, r3, r0
/* 80195E3C 00192F1C  7C 09 03 A6 */	mtctr r0
/* 80195E40 00192F20  4E 80 04 20 */	bctr
.L_80195E44:
/* 80195E44 00192F24  C0 22 B2 6C */	lfs f1, "@924"@sda21(r2)
/* 80195E48 00192F28  38 60 00 00 */	li r3, 0x0
/* 80195E4C 00192F2C  38 80 00 01 */	li r4, 0x1
/* 80195E50 00192F30  38 A0 00 52 */	li r5, 0x52
/* 80195E54 00192F34  38 C0 00 53 */	li r6, 0x53
/* 80195E58 00192F38  4B EE AC 25 */	bl zEntPlayer_SNDPlayStreamRandom__FUiUi20_tagePlayerStreamSnd20_tagePlayerStreamSndf
/* 80195E5C 00192F3C  48 00 01 00 */	b .L_80195F5C
.L_80195E60:
/* 80195E60 00192F40  C0 22 B2 6C */	lfs f1, "@924"@sda21(r2)
/* 80195E64 00192F44  38 60 00 00 */	li r3, 0x0
/* 80195E68 00192F48  38 80 00 02 */	li r4, 0x2
/* 80195E6C 00192F4C  38 A0 00 52 */	li r5, 0x52
/* 80195E70 00192F50  38 C0 00 53 */	li r6, 0x53
/* 80195E74 00192F54  4B EE AC 09 */	bl zEntPlayer_SNDPlayStreamRandom__FUiUi20_tagePlayerStreamSnd20_tagePlayerStreamSndf
/* 80195E78 00192F58  48 00 00 E4 */	b .L_80195F5C
.L_80195E7C:
/* 80195E7C 00192F5C  C0 22 B2 6C */	lfs f1, "@924"@sda21(r2)
/* 80195E80 00192F60  38 60 00 00 */	li r3, 0x0
/* 80195E84 00192F64  38 80 00 03 */	li r4, 0x3
/* 80195E88 00192F68  38 A0 00 52 */	li r5, 0x52
/* 80195E8C 00192F6C  38 C0 00 53 */	li r6, 0x53
/* 80195E90 00192F70  4B EE AB ED */	bl zEntPlayer_SNDPlayStreamRandom__FUiUi20_tagePlayerStreamSnd20_tagePlayerStreamSndf
/* 80195E94 00192F74  48 00 00 C8 */	b .L_80195F5C
.L_80195E98:
/* 80195E98 00192F78  C0 22 B2 6C */	lfs f1, "@924"@sda21(r2)
/* 80195E9C 00192F7C  38 60 00 00 */	li r3, 0x0
/* 80195EA0 00192F80  38 80 00 04 */	li r4, 0x4
/* 80195EA4 00192F84  38 A0 00 52 */	li r5, 0x52
/* 80195EA8 00192F88  38 C0 00 53 */	li r6, 0x53
/* 80195EAC 00192F8C  4B EE AB D1 */	bl zEntPlayer_SNDPlayStreamRandom__FUiUi20_tagePlayerStreamSnd20_tagePlayerStreamSndf
/* 80195EB0 00192F90  48 00 00 AC */	b .L_80195F5C
.L_80195EB4:
/* 80195EB4 00192F94  C0 22 B2 6C */	lfs f1, "@924"@sda21(r2)
/* 80195EB8 00192F98  38 60 00 00 */	li r3, 0x0
/* 80195EBC 00192F9C  38 80 00 05 */	li r4, 0x5
/* 80195EC0 00192FA0  38 A0 00 52 */	li r5, 0x52
/* 80195EC4 00192FA4  38 C0 00 53 */	li r6, 0x53
/* 80195EC8 00192FA8  4B EE AB B5 */	bl zEntPlayer_SNDPlayStreamRandom__FUiUi20_tagePlayerStreamSnd20_tagePlayerStreamSndf
/* 80195ECC 00192FAC  C0 22 B2 6C */	lfs f1, "@924"@sda21(r2)
/* 80195ED0 00192FB0  38 60 00 06 */	li r3, 0x6
/* 80195ED4 00192FB4  38 80 00 32 */	li r4, 0x32
/* 80195ED8 00192FB8  38 A0 00 52 */	li r5, 0x52
/* 80195EDC 00192FBC  38 C0 00 56 */	li r6, 0x56
/* 80195EE0 00192FC0  4B EE AB 9D */	bl zEntPlayer_SNDPlayStreamRandom__FUiUi20_tagePlayerStreamSnd20_tagePlayerStreamSndf
/* 80195EE4 00192FC4  48 00 00 78 */	b .L_80195F5C
.L_80195EE8:
/* 80195EE8 00192FC8  C0 22 B2 6C */	lfs f1, "@924"@sda21(r2)
/* 80195EEC 00192FCC  38 60 00 00 */	li r3, 0x0
/* 80195EF0 00192FD0  38 80 00 0A */	li r4, 0xa
/* 80195EF4 00192FD4  38 A0 00 57 */	li r5, 0x57
/* 80195EF8 00192FD8  38 C0 00 58 */	li r6, 0x58
/* 80195EFC 00192FDC  4B EE AB 81 */	bl zEntPlayer_SNDPlayStreamRandom__FUiUi20_tagePlayerStreamSnd20_tagePlayerStreamSndf
/* 80195F00 00192FE0  38 60 00 0B */	li r3, 0xb
/* 80195F04 00192FE4  38 80 00 64 */	li r4, 0x64
/* 80195F08 00192FE8  38 A0 00 57 */	li r5, 0x57
/* 80195F0C 00192FEC  38 C0 00 00 */	li r6, 0x0
/* 80195F10 00192FF0  4B EE AB 29 */	bl zEntPlayer_SNDPlayStream__FUiUi20_tagePlayerStreamSndUi
/* 80195F14 00192FF4  48 00 00 48 */	b .L_80195F5C
.L_80195F18:
/* 80195F18 00192FF8  C0 22 B2 6C */	lfs f1, "@924"@sda21(r2)
/* 80195F1C 00192FFC  38 60 00 00 */	li r3, 0x0
/* 80195F20 00193000  38 80 00 0A */	li r4, 0xa
/* 80195F24 00193004  38 A0 00 57 */	li r5, 0x57
/* 80195F28 00193008  38 C0 00 58 */	li r6, 0x58
/* 80195F2C 0019300C  4B EE AB 51 */	bl zEntPlayer_SNDPlayStreamRandom__FUiUi20_tagePlayerStreamSnd20_tagePlayerStreamSndf
/* 80195F30 00193010  38 60 00 15 */	li r3, 0x15
/* 80195F34 00193014  38 80 00 64 */	li r4, 0x64
/* 80195F38 00193018  38 A0 00 57 */	li r5, 0x57
/* 80195F3C 0019301C  38 C0 00 00 */	li r6, 0x0
/* 80195F40 00193020  4B EE AA F9 */	bl zEntPlayer_SNDPlayStream__FUiUi20_tagePlayerStreamSndUi
/* 80195F44 00193024  48 00 00 18 */	b .L_80195F5C
.L_80195F48:
/* 80195F48 00193028  38 60 00 00 */	li r3, 0x0
/* 80195F4C 0019302C  38 80 00 64 */	li r4, 0x64
/* 80195F50 00193030  38 A0 00 58 */	li r5, 0x58
/* 80195F54 00193034  38 C0 00 00 */	li r6, 0x0
/* 80195F58 00193038  4B EE AA E1 */	bl zEntPlayer_SNDPlayStream__FUiUi20_tagePlayerStreamSndUi
.L_80195F5C:
/* 80195F5C 0019303C  80 0D 98 D0 */	lwz r0, comboHUD@sda21(r13)
/* 80195F60 00193040  28 00 00 00 */	cmplwi r0, 0x0
/* 80195F64 00193044  41 82 00 3C */	beq .L_80195FA0
/* 80195F68 00193048  C0 22 B2 64 */	lfs f1, "@855"@sda21(r2)
/* 80195F6C 0019304C  3C 80 80 03 */	lis r4, delay_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef@ha
/* 80195F70 00193050  3C 60 80 19 */	lis r3, zComboHideMessage__FRQ24xhud6widgetRQ24xhud6motive@ha
/* 80195F74 00193054  C0 4D 84 CC */	lfs f2, comboDisplayTime@sda21(r13)
/* 80195F78 00193058  FC 60 08 90 */	fmr f3, f1
/* 80195F7C 0019305C  38 A4 EB 84 */	addi r5, r4, delay_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef@l
/* 80195F80 00193060  38 C3 5C 6C */	addi r6, r3, zComboHideMessage__FRQ24xhud6widgetRQ24xhud6motive@l
/* 80195F84 00193064  38 61 00 08 */	addi r3, r1, 0x8
/* 80195F88 00193068  38 80 00 00 */	li r4, 0x0
/* 80195F8C 0019306C  4B E9 8E E9 */	bl __ct__Q24xhud6motiveFPffffPFRQ24xhud6widgetRQ24xhud6motivef_bPv
/* 80195F90 00193070  80 AD 98 D0 */	lwz r5, comboHUD@sda21(r13)
/* 80195F94 00193074  7C 64 1B 78 */	mr r4, r3
/* 80195F98 00193078  38 65 00 10 */	addi r3, r5, 0x10
/* 80195F9C 0019307C  4B E9 85 E9 */	bl add_motive__Q24xhud6widgetFRCQ24xhud6motive
.L_80195FA0:
/* 80195FA0 00193080  C0 02 B2 60 */	lfs f0, "@844"@sda21(r2)
/* 80195FA4 00193084  38 00 00 00 */	li r0, 0x0
/* 80195FA8 00193088  D0 0D 98 E4 */	stfs f0, comboTimer@sda21(r13)
/* 80195FAC 0019308C  90 0D 98 E0 */	stw r0, comboCounter@sda21(r13)
/* 80195FB0 00193090  90 0D 98 DC */	stw r0, comboLastCounter@sda21(r13)
.L_80195FB4:
/* 80195FB4 00193094  E3 E1 00 48 */	psq_l f31, 0x48(r1), 0, qr0
/* 80195FB8 00193098  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80195FBC 0019309C  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80195FC0 001930A0  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80195FC4 001930A4  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80195FC8 001930A8  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 80195FCC 001930AC  83 81 00 30 */	lwz r28, 0x30(r1)
/* 80195FD0 001930B0  7C 08 03 A6 */	mtlr r0
/* 80195FD4 001930B4  38 21 00 50 */	addi r1, r1, 0x50
/* 80195FD8 001930B8  4E 80 00 20 */	blr
.endfn zCombo_Update__Ff

# 0x80195FDC - 0x80195FE8
.section .text, "ax", unique, 1
.balign 4

# ztextbox::visible()
.fn visible__8ztextboxFv, weak
/* 80195FDC 001930BC  88 03 00 10 */	lbz r0, 0x10(r3)
/* 80195FE0 001930C0  54 03 E7 FE */	extrwi r3, r0, 1, 27
/* 80195FE4 001930C4  4E 80 00 20 */	blr
.endfn visible__8ztextboxFv

# 0x80274A00 - 0x80274B38
.rodata
.balign 8

.obj "@stringBase0", local
	.4byte 0x494E5445
	.4byte 0x4E54494F
.L_80274A08:
	.4byte 0x4E414C4C
	.4byte 0x5920424C
	.4byte 0x414E4B20
	.4byte 0x54585400
	.4byte 0x434F4D42
	.4byte 0x4F5F3031
	.4byte 0x5F545854
	.4byte 0x00434F4D
	.4byte 0x424F5F30
	.4byte 0x325F5458
	.4byte 0x5400434F
	.4byte 0x4D424F5F
	.4byte 0x30335F54
	.4byte 0x58540043
	.4byte 0x4F4D424F
	.4byte 0x5F30345F
	.4byte 0x54585400
	.4byte 0x434F4D42
	.4byte 0x4F5F3035
	.4byte 0x5F545854
	.4byte 0x00434F4D
	.4byte 0x424F5F30
	.4byte 0x365F5458
	.4byte 0x5400434F
	.4byte 0x4D424F5F
	.4byte 0x30375F54
	.4byte 0x58540043
	.4byte 0x4F4D424F
	.4byte 0x5F30385F
	.4byte 0x54585400
	.4byte 0x434F4D42
	.4byte 0x4F5F3039
	.4byte 0x5F545854
	.4byte 0x00434F4D
	.4byte 0x424F5F31
	.4byte 0x305F5458
	.4byte 0x5400434F
	.4byte 0x4D424F5F
	.4byte 0x31315F54
	.4byte 0x58540043
	.4byte 0x4F4D424F
	.4byte 0x5F31325F
	.4byte 0x54585400
	.4byte 0x434F4D42
	.4byte 0x4F5F3133
	.4byte 0x5F545854
	.4byte 0x00485544
	.4byte 0x5F544558
	.4byte 0x545F434F
	.4byte 0x4D424F4D
.L_80274AD0:
	.4byte 0x45535341
	.4byte 0x47450054
	.4byte 0x45585442
	.4byte 0x4F585F42
	.4byte 0x554E4745
	.4byte 0x455F4845
	.4byte 0x4C500044
	.4byte 0x49414C4F
	.4byte 0x475F5445
	.4byte 0x5854424F
	.4byte 0x58004D45
	.4byte 0x53534147
	.4byte 0x455F3032
	.4byte 0x5F544558
	.4byte 0x54424F58
	.4byte 0x0050524F
	.4byte 0x4D50545F
	.4byte 0x54455854
	.4byte 0x424F5800
	.4byte 0x51554954
	.4byte 0x5F544558
	.4byte 0x54424F58
	.4byte 0x004D4E55
	.4byte 0x34204E50
	.4byte 0x4354414C
	.2byte 0x4B00
.endobj "@stringBase0"
	.2byte 0x0000

# 0x802A1B88 - 0x802A1F34
.data
.balign 8

.obj comboReward, local
	.4byte 0x00000000
	.4byte "@stringBase0"
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
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "@stringBase0"
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
	.4byte 0x00000000
	.4byte 0x00000002
	.4byte "@stringBase0"+0x18
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
	.4byte 0x00000000
	.4byte 0x00000003
	.4byte "@stringBase0"+0x25
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
	.4byte 0x00000000
	.4byte 0x00000003
	.4byte "@stringBase0"+0x25
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
	.4byte 0x00000000
	.4byte 0x00000005
	.4byte "@stringBase0"+0x32
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
	.4byte 0x00000000
	.4byte 0x0000000A
	.4byte "@stringBase0"+0x3F
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
.L_802A1D0C:
	.4byte 0x00000000
	.4byte 0x0000000F
	.4byte "@stringBase0"+0x4C
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
	.4byte 0x00000000
	.4byte 0x00000014
	.4byte "@stringBase0"+0x59
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
	.4byte 0x00000000
	.4byte 0x00000019
	.4byte "@stringBase0"+0x66
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
	.4byte 0x00000000
	.4byte 0x0000001E
	.4byte "@stringBase0"+0x73
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
	.4byte 0x00000000
	.4byte 0x00000028
	.4byte "@stringBase0"+0x80
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
	.4byte 0x00000000
	.4byte 0x00000032
	.4byte "@stringBase0"+0x8D
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
	.4byte 0x00000000
	.4byte 0x0000003C
	.4byte "@stringBase0"+0x9A
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
	.4byte 0x00000000
	.4byte 0x0000004B
	.4byte "@stringBase0"+0xA7
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
	.4byte 0x00000000
	.4byte 0x00000064
	.4byte "@stringBase0"+0xB4
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
	.4byte 0x00000000
.endobj comboReward

.obj "@925", local
	.rel zCombo_Update__Ff, .L_80195E44
	.rel zCombo_Update__Ff, .L_80195E60
	.rel zCombo_Update__Ff, .L_80195E60
	.rel zCombo_Update__Ff, .L_80195E7C
	.rel zCombo_Update__Ff, .L_80195E7C
	.rel zCombo_Update__Ff, .L_80195E98
	.rel zCombo_Update__Ff, .L_80195EB4
	.rel zCombo_Update__Ff, .L_80195EB4
	.rel zCombo_Update__Ff, .L_80195EE8
	.rel zCombo_Update__Ff, .L_80195F18
	.rel zCombo_Update__Ff, .L_80195F48
.endobj "@925"

# 0x80362B68 - 0x80362B88
.bss
.balign 8

.obj sUnderCamPos, local
	.skip 0xC
.endobj sUnderCamPos

.obj sHideText, local
	.skip 0x14
.endobj sHideText

# 0x803CADC8 - 0x803CADD0
.section .sdata, "wa"
.balign 8

.obj comboMaxTime, local
	.4byte 0x3F800000
.endobj comboMaxTime

.obj comboDisplayTime, local
	.4byte 0x40000000
.endobj comboDisplayTime

# 0x803CC1D0 - 0x803CC1E8
.section .sbss, "wa", @nobits
.balign 8

.obj comboHUD, global
	.skip 0x4
.endobj comboHUD

.obj sHideUIF, local
	.skip 0x4
.endobj sHideUIF

.obj comboPending, local
	.skip 0x4
.endobj comboPending

.obj comboLastCounter, local
	.skip 0x4
.endobj comboLastCounter

.obj comboCounter, local
	.skip 0x4
.endobj comboCounter

.obj comboTimer, local
	.skip 0x4
.endobj comboTimer

# 0x803CFBE0 - 0x803CFBF0
.section .sdata2, "a"
.balign 8

.obj "@844", local
	.4byte 0xBF800000
.endobj "@844"

.obj "@855", local
	.4byte 0x00000000
.endobj "@855"

.obj "@923", local
	.4byte 0xC0400000
.endobj "@923"

.obj "@924", local
	.4byte 0x3DCCCCCD
.endobj "@924"
