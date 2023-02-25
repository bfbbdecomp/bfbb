.include "macros.inc"
.file "zGameState.cpp"

# 0x8009A924 - 0x8009AD50
.text
.balign 4

# zGameStateGet()
.fn zGameStateGet__Fv, global
/* 8009A924 00097A04  80 6D 82 40 */	lwz r3, gGameState@sda21(r13)
/* 8009A928 00097A08  4E 80 00 20 */	blr
.endfn zGameStateGet__Fv

# zGameModeGet()
.fn zGameModeGet__Fv, global
/* 8009A92C 00097A0C  80 6D 8F A8 */	lwz r3, gGameMode@sda21(r13)
/* 8009A930 00097A10  4E 80 00 20 */	blr
.endfn zGameModeGet__Fv

# zGameGetOstrich()
.fn zGameGetOstrich__Fv, global
/* 8009A934 00097A14  80 6D 8F AC */	lwz r3, gGameOstrich@sda21(r13)
/* 8009A938 00097A18  4E 80 00 20 */	blr
.endfn zGameGetOstrich__Fv

# zGameSetOstrich(_GameOstrich)
.fn zGameSetOstrich__F12_GameOstrich, global
/* 8009A93C 00097A1C  90 6D 8F AC */	stw r3, gGameOstrich@sda21(r13)
/* 8009A940 00097A20  4E 80 00 20 */	blr
.endfn zGameSetOstrich__F12_GameOstrich

# zGameStateFindEvent(unsigned int*, int, int, int, int*, int*)
.fn zGameStateFindEvent__FPUiiiiPiPi, global
/* 8009A944 00097A24  39 20 00 00 */	li r9, 0x0
/* 8009A948 00097A28  7C 89 03 A6 */	mtctr r4
/* 8009A94C 00097A2C  2C 04 00 00 */	cmpwi r4, 0x0
/* 8009A950 00097A30  40 81 00 2C */	ble .L_8009A97C
.L_8009A954:
/* 8009A954 00097A34  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8009A958 00097A38  7C 06 00 40 */	cmplw r6, r0
/* 8009A95C 00097A3C  40 82 00 14 */	bne .L_8009A970
/* 8009A960 00097A40  90 A7 00 00 */	stw r5, 0x0(r7)
/* 8009A964 00097A44  38 60 00 01 */	li r3, 0x1
/* 8009A968 00097A48  91 28 00 00 */	stw r9, 0x0(r8)
/* 8009A96C 00097A4C  4E 80 00 20 */	blr
.L_8009A970:
/* 8009A970 00097A50  38 63 00 04 */	addi r3, r3, 0x4
/* 8009A974 00097A54  39 29 00 01 */	addi r9, r9, 0x1
/* 8009A978 00097A58  42 00 FF DC */	bdnz .L_8009A954
.L_8009A97C:
/* 8009A97C 00097A5C  38 60 00 00 */	li r3, 0x0
/* 8009A980 00097A60  4E 80 00 20 */	blr
.endfn zGameStateFindEvent__FPUiiiiPiPi

# zGameStateSwitchEvent(int)
.fn zGameStateSwitchEvent__Fi, global
/* 8009A984 00097A64  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8009A988 00097A68  7C 08 02 A6 */	mflr r0
/* 8009A98C 00097A6C  3C 80 80 29 */	lis r4, ...data.0@ha
/* 8009A990 00097A70  90 01 00 24 */	stw r0, 0x24(r1)
/* 8009A994 00097A74  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8009A998 00097A78  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8009A99C 00097A7C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8009A9A0 00097A80  3B A4 F9 28 */	addi r29, r4, ...data.0@l
/* 8009A9A4 00097A84  93 81 00 10 */	stw r28, 0x10(r1)
/* 8009A9A8 00097A88  7C 7C 1B 78 */	mr r28, r3
/* 8009A9AC 00097A8C  4B FF FF 81 */	bl zGameModeGet__Fv
/* 8009A9B0 00097A90  7C 7E 1B 78 */	mr r30, r3
/* 8009A9B4 00097A94  4B FF FF 71 */	bl zGameStateGet__Fv
/* 8009A9B8 00097A98  38 00 FF FF */	li r0, -0x1
/* 8009A9BC 00097A9C  7C 7F 1B 78 */	mr r31, r3
/* 8009A9C0 00097AA0  90 01 00 0C */	stw r0, 0xc(r1)
/* 8009A9C4 00097AA4  7F 86 E3 78 */	mr r6, r28
/* 8009A9C8 00097AA8  38 7D 00 7C */	addi r3, r29, 0x7c
/* 8009A9CC 00097AAC  38 E1 00 0C */	addi r7, r1, 0xc
/* 8009A9D0 00097AB0  90 01 00 08 */	stw r0, 0x8(r1)
/* 8009A9D4 00097AB4  39 01 00 08 */	addi r8, r1, 0x8
/* 8009A9D8 00097AB8  38 80 00 08 */	li r4, 0x8
/* 8009A9DC 00097ABC  38 A0 00 0C */	li r5, 0xc
/* 8009A9E0 00097AC0  4B FF FF 65 */	bl zGameStateFindEvent__FPUiiiiPiPi
/* 8009A9E4 00097AC4  2C 03 00 00 */	cmpwi r3, 0x0
/* 8009A9E8 00097AC8  40 82 00 D4 */	bne .L_8009AABC
/* 8009A9EC 00097ACC  7F 86 E3 78 */	mr r6, r28
/* 8009A9F0 00097AD0  38 E1 00 0C */	addi r7, r1, 0xc
/* 8009A9F4 00097AD4  39 01 00 08 */	addi r8, r1, 0x8
/* 8009A9F8 00097AD8  38 6D 82 58 */	addi r3, r13, sPauseState_DoDispatchTable@sda21
/* 8009A9FC 00097ADC  38 80 00 02 */	li r4, 0x2
/* 8009AA00 00097AE0  38 A0 00 07 */	li r5, 0x7
/* 8009AA04 00097AE4  4B FF FF 41 */	bl zGameStateFindEvent__FPUiiiiPiPi
/* 8009AA08 00097AE8  2C 03 00 00 */	cmpwi r3, 0x0
/* 8009AA0C 00097AEC  40 82 00 B0 */	bne .L_8009AABC
/* 8009AA10 00097AF0  7F 86 E3 78 */	mr r6, r28
/* 8009AA14 00097AF4  38 7D 00 9C */	addi r3, r29, 0x9c
/* 8009AA18 00097AF8  38 E1 00 0C */	addi r7, r1, 0xc
/* 8009AA1C 00097AFC  39 01 00 08 */	addi r8, r1, 0x8
/* 8009AA20 00097B00  38 80 00 03 */	li r4, 0x3
/* 8009AA24 00097B04  38 A0 00 06 */	li r5, 0x6
/* 8009AA28 00097B08  4B FF FF 1D */	bl zGameStateFindEvent__FPUiiiiPiPi
/* 8009AA2C 00097B0C  2C 03 00 00 */	cmpwi r3, 0x0
/* 8009AA30 00097B10  40 82 00 8C */	bne .L_8009AABC
/* 8009AA34 00097B14  7F 86 E3 78 */	mr r6, r28
/* 8009AA38 00097B18  38 E1 00 0C */	addi r7, r1, 0xc
/* 8009AA3C 00097B1C  39 01 00 08 */	addi r8, r1, 0x8
/* 8009AA40 00097B20  38 6D 82 60 */	addi r3, r13, sOptionsState_DoDispatchTable@sda21
/* 8009AA44 00097B24  38 80 00 01 */	li r4, 0x1
/* 8009AA48 00097B28  38 A0 00 05 */	li r5, 0x5
/* 8009AA4C 00097B2C  4B FF FE F9 */	bl zGameStateFindEvent__FPUiiiiPiPi
/* 8009AA50 00097B30  2C 03 00 00 */	cmpwi r3, 0x0
/* 8009AA54 00097B34  40 82 00 68 */	bne .L_8009AABC
/* 8009AA58 00097B38  7F 86 E3 78 */	mr r6, r28
/* 8009AA5C 00097B3C  38 7D 00 A8 */	addi r3, r29, 0xa8
/* 8009AA60 00097B40  38 E1 00 0C */	addi r7, r1, 0xc
/* 8009AA64 00097B44  39 01 00 08 */	addi r8, r1, 0x8
/* 8009AA68 00097B48  38 80 00 03 */	li r4, 0x3
/* 8009AA6C 00097B4C  38 A0 00 04 */	li r5, 0x4
/* 8009AA70 00097B50  4B FF FE D5 */	bl zGameStateFindEvent__FPUiiiiPiPi
/* 8009AA74 00097B54  2C 03 00 00 */	cmpwi r3, 0x0
/* 8009AA78 00097B58  40 82 00 44 */	bne .L_8009AABC
/* 8009AA7C 00097B5C  7F 86 E3 78 */	mr r6, r28
/* 8009AA80 00097B60  38 E1 00 0C */	addi r7, r1, 0xc
/* 8009AA84 00097B64  39 01 00 08 */	addi r8, r1, 0x8
/* 8009AA88 00097B68  38 6D 82 64 */	addi r3, r13, sTitleState_DoDispatchTable@sda21
/* 8009AA8C 00097B6C  38 80 00 02 */	li r4, 0x2
/* 8009AA90 00097B70  38 A0 00 02 */	li r5, 0x2
/* 8009AA94 00097B74  4B FF FE B1 */	bl zGameStateFindEvent__FPUiiiiPiPi
/* 8009AA98 00097B78  2C 03 00 00 */	cmpwi r3, 0x0
/* 8009AA9C 00097B7C  40 82 00 20 */	bne .L_8009AABC
/* 8009AAA0 00097B80  7F 86 E3 78 */	mr r6, r28
/* 8009AAA4 00097B84  38 7D 00 B4 */	addi r3, r29, 0xb4
/* 8009AAA8 00097B88  38 E1 00 0C */	addi r7, r1, 0xc
/* 8009AAAC 00097B8C  39 01 00 08 */	addi r8, r1, 0x8
/* 8009AAB0 00097B90  38 80 00 04 */	li r4, 0x4
/* 8009AAB4 00097B94  38 A0 00 01 */	li r5, 0x1
/* 8009AAB8 00097B98  4B FF FE 8D */	bl zGameStateFindEvent__FPUiiiiPiPi
.L_8009AABC:
/* 8009AABC 00097B9C  80 61 00 0C */	lwz r3, 0xc(r1)
/* 8009AAC0 00097BA0  7C 03 F0 00 */	cmpw r3, r30
/* 8009AAC4 00097BA4  41 82 00 08 */	beq .L_8009AACC
/* 8009AAC8 00097BA8  48 00 01 51 */	bl zGameModeSwitch__F9eGameMode
.L_8009AACC:
/* 8009AACC 00097BAC  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8009AAD0 00097BB0  7C 00 F0 00 */	cmpw r0, r30
/* 8009AAD4 00097BB4  40 82 00 10 */	bne .L_8009AAE4
/* 8009AAD8 00097BB8  80 01 00 08 */	lwz r0, 0x8(r1)
/* 8009AADC 00097BBC  7C 00 F8 00 */	cmpw r0, r31
/* 8009AAE0 00097BC0  41 82 00 2C */	beq .L_8009AB0C
.L_8009AAE4:
/* 8009AAE4 00097BC4  80 61 00 08 */	lwz r3, 0x8(r1)
/* 8009AAE8 00097BC8  48 00 00 45 */	bl zGameStateSwitch__Fi
/* 8009AAEC 00097BCC  80 01 00 08 */	lwz r0, 0x8(r1)
/* 8009AAF0 00097BD0  2C 00 00 07 */	cmpwi r0, 0x7
/* 8009AAF4 00097BD4  40 82 00 18 */	bne .L_8009AB0C
/* 8009AAF8 00097BD8  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009AAFC 00097BDC  38 80 00 18 */	li r4, 0x18
/* 8009AB00 00097BE0  38 63 CB 38 */	addi r3, r3, "@stringBase0"@l
/* 8009AB04 00097BE4  4B F8 4A 21 */	bl zEntEvent__FPcUi
/* 8009AB08 00097BE8  4B FA 8A 75 */	bl xSerialWipeMainBuffer__Fv
.L_8009AB0C:
/* 8009AB0C 00097BEC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8009AB10 00097BF0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8009AB14 00097BF4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8009AB18 00097BF8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8009AB1C 00097BFC  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8009AB20 00097C00  7C 08 03 A6 */	mtlr r0
/* 8009AB24 00097C04  38 21 00 20 */	addi r1, r1, 0x20
/* 8009AB28 00097C08  4E 80 00 20 */	blr
.endfn zGameStateSwitchEvent__Fi

# zGameStateSwitch(int)
.fn zGameStateSwitch__Fi, global
/* 8009AB2C 00097C0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009AB30 00097C10  7C 08 02 A6 */	mflr r0
/* 8009AB34 00097C14  3C 80 80 29 */	lis r4, ...data.0@ha
/* 8009AB38 00097C18  2C 03 00 01 */	cmpwi r3, 0x1
/* 8009AB3C 00097C1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009AB40 00097C20  38 C0 00 00 */	li r6, 0x0
/* 8009AB44 00097C24  38 A4 F9 28 */	addi r5, r4, ...data.0@l
/* 8009AB48 00097C28  80 0D 82 40 */	lwz r0, gGameState@sda21(r13)
/* 8009AB4C 00097C2C  90 6D 82 40 */	stw r3, gGameState@sda21(r13)
/* 8009AB50 00097C30  40 82 00 14 */	bne .L_8009AB64
/* 8009AB54 00097C34  2C 00 00 00 */	cmpwi r0, 0x0
/* 8009AB58 00097C38  40 82 00 0C */	bne .L_8009AB64
/* 8009AB5C 00097C3C  38 00 00 01 */	li r0, 0x1
/* 8009AB60 00097C40  90 0D 82 0C */	stw r0, startPressed@sda21(r13)
.L_8009AB64:
/* 8009AB64 00097C44  80 0D 8F A8 */	lwz r0, gGameMode@sda21(r13)
/* 8009AB68 00097C48  28 00 00 0C */	cmplwi r0, 0xc
/* 8009AB6C 00097C4C  41 81 00 88 */	bgt .L_8009ABF4
/* 8009AB70 00097C50  3C 80 80 29 */	lis r4, "@741"@ha
/* 8009AB74 00097C54  54 00 10 3A */	slwi r0, r0, 2
/* 8009AB78 00097C58  38 84 F9 EC */	addi r4, r4, "@741"@l
/* 8009AB7C 00097C5C  7C 04 00 2E */	lwzx r0, r4, r0
/* 8009AB80 00097C60  7C 09 03 A6 */	mtctr r0
/* 8009AB84 00097C64  4E 80 04 20 */	bctr
.L_8009AB88:
/* 8009AB88 00097C68  54 60 10 3A */	slwi r0, r3, 2
/* 8009AB8C 00097C6C  38 65 00 6C */	addi r3, r5, 0x6c
/* 8009AB90 00097C70  7C C3 00 2E */	lwzx r6, r3, r0
/* 8009AB94 00097C74  48 00 00 60 */	b .L_8009ABF4
.L_8009AB98:
/* 8009AB98 00097C78  54 60 10 3A */	slwi r0, r3, 2
/* 8009AB9C 00097C7C  38 6D 82 50 */	addi r3, r13, sTitleState_DispatchTable@sda21
/* 8009ABA0 00097C80  7C C3 00 2E */	lwzx r6, r3, r0
/* 8009ABA4 00097C84  48 00 00 50 */	b .L_8009ABF4
.L_8009ABA8:
/* 8009ABA8 00097C88  54 60 10 3A */	slwi r0, r3, 2
/* 8009ABAC 00097C8C  38 65 00 60 */	addi r3, r5, 0x60
/* 8009ABB0 00097C90  7C C3 00 2E */	lwzx r6, r3, r0
/* 8009ABB4 00097C94  48 00 00 40 */	b .L_8009ABF4
.L_8009ABB8:
/* 8009ABB8 00097C98  54 60 10 3A */	slwi r0, r3, 2
/* 8009ABBC 00097C9C  38 6D 82 4C */	addi r3, r13, sOptionsState_DispatchTable@sda21
/* 8009ABC0 00097CA0  7C C3 00 2E */	lwzx r6, r3, r0
/* 8009ABC4 00097CA4  48 00 00 30 */	b .L_8009ABF4
.L_8009ABC8:
/* 8009ABC8 00097CA8  54 60 10 3A */	slwi r0, r3, 2
/* 8009ABCC 00097CAC  38 65 00 54 */	addi r3, r5, 0x54
/* 8009ABD0 00097CB0  7C C3 00 2E */	lwzx r6, r3, r0
/* 8009ABD4 00097CB4  48 00 00 20 */	b .L_8009ABF4
.L_8009ABD8:
/* 8009ABD8 00097CB8  54 60 10 3A */	slwi r0, r3, 2
/* 8009ABDC 00097CBC  38 6D 82 44 */	addi r3, r13, sPauseState_DispatchTable@sda21
/* 8009ABE0 00097CC0  7C C3 00 2E */	lwzx r6, r3, r0
/* 8009ABE4 00097CC4  48 00 00 10 */	b .L_8009ABF4
.L_8009ABE8:
/* 8009ABE8 00097CC8  54 60 10 3A */	slwi r0, r3, 2
/* 8009ABEC 00097CCC  38 65 00 34 */	addi r3, r5, 0x34
/* 8009ABF0 00097CD0  7C C3 00 2E */	lwzx r6, r3, r0
.L_8009ABF4:
/* 8009ABF4 00097CD4  28 06 00 00 */	cmplwi r6, 0x0
/* 8009ABF8 00097CD8  41 82 00 10 */	beq .L_8009AC08
/* 8009ABFC 00097CDC  7C C3 33 78 */	mr r3, r6
/* 8009AC00 00097CE0  38 80 00 1E */	li r4, 0x1e
/* 8009AC04 00097CE4  4B FB A8 9D */	bl zEntEventAllOfType__FUiUi
.L_8009AC08:
/* 8009AC08 00097CE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009AC0C 00097CEC  7C 08 03 A6 */	mtlr r0
/* 8009AC10 00097CF0  38 21 00 10 */	addi r1, r1, 0x10
/* 8009AC14 00097CF4  4E 80 00 20 */	blr
.endfn zGameStateSwitch__Fi

# zGameModeSwitch(eGameMode)
.fn zGameModeSwitch__F9eGameMode, global
/* 8009AC18 00097CF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009AC1C 00097CFC  7C 08 02 A6 */	mflr r0
/* 8009AC20 00097D00  38 80 00 01 */	li r4, 0x1
/* 8009AC24 00097D04  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009AC28 00097D08  7C 85 23 78 */	mr r5, r4
/* 8009AC2C 00097D0C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8009AC30 00097D10  7C 7F 1B 78 */	mr r31, r3
/* 8009AC34 00097D14  38 7F FF FA */	addi r3, r31, -0x6
/* 8009AC38 00097D18  20 03 00 01 */	subfic r0, r3, 0x1
/* 8009AC3C 00097D1C  80 ED 8F A8 */	lwz r7, gGameMode@sda21(r13)
/* 8009AC40 00097D20  7C 83 1B 38 */	orc r3, r4, r3
/* 8009AC44 00097D24  54 00 F8 7E */	srwi r0, r0, 1
/* 8009AC48 00097D28  7C 00 18 50 */	subf r0, r0, r3
/* 8009AC4C 00097D2C  54 00 0F FF */	srwi. r0, r0, 31
/* 8009AC50 00097D30  40 82 00 08 */	bne .L_8009AC58
/* 8009AC54 00097D34  38 A0 00 00 */	li r5, 0x0
.L_8009AC58:
/* 8009AC58 00097D38  54 A0 06 3F */	clrlwi. r0, r5, 24
/* 8009AC5C 00097D3C  40 82 00 10 */	bne .L_8009AC6C
/* 8009AC60 00097D40  2C 1F 00 08 */	cmpwi r31, 0x8
/* 8009AC64 00097D44  41 82 00 08 */	beq .L_8009AC6C
/* 8009AC68 00097D48  38 80 00 00 */	li r4, 0x0
.L_8009AC6C:
/* 8009AC6C 00097D4C  38 67 FF FA */	addi r3, r7, -0x6
/* 8009AC70 00097D50  38 A0 00 01 */	li r5, 0x1
/* 8009AC74 00097D54  20 03 00 01 */	subfic r0, r3, 0x1
/* 8009AC78 00097D58  7C A3 1B 38 */	orc r3, r5, r3
/* 8009AC7C 00097D5C  7C A6 2B 78 */	mr r6, r5
/* 8009AC80 00097D60  54 00 F8 7E */	srwi r0, r0, 1
/* 8009AC84 00097D64  7C 00 18 50 */	subf r0, r0, r3
/* 8009AC88 00097D68  54 00 0F FF */	srwi. r0, r0, 31
/* 8009AC8C 00097D6C  40 82 00 08 */	bne .L_8009AC94
/* 8009AC90 00097D70  38 C0 00 00 */	li r6, 0x0
.L_8009AC94:
/* 8009AC94 00097D74  54 C0 06 3F */	clrlwi. r0, r6, 24
/* 8009AC98 00097D78  40 82 00 10 */	bne .L_8009ACA8
/* 8009AC9C 00097D7C  2C 07 00 08 */	cmpwi r7, 0x8
/* 8009ACA0 00097D80  41 82 00 08 */	beq .L_8009ACA8
/* 8009ACA4 00097D84  38 A0 00 00 */	li r5, 0x0
.L_8009ACA8:
/* 8009ACA8 00097D88  2C 07 00 0C */	cmpwi r7, 0xc
/* 8009ACAC 00097D8C  40 82 00 1C */	bne .L_8009ACC8
/* 8009ACB0 00097D90  54 80 06 3F */	clrlwi. r0, r4, 24
/* 8009ACB4 00097D94  41 82 00 14 */	beq .L_8009ACC8
/* 8009ACB8 00097D98  38 60 00 01 */	li r3, 0x1
/* 8009ACBC 00097D9C  38 80 00 01 */	li r4, 0x1
/* 8009ACC0 00097DA0  4B FA D6 75 */	bl xSndPauseAll__FUiUi
/* 8009ACC4 00097DA4  48 00 00 5C */	b .L_8009AD20
.L_8009ACC8:
/* 8009ACC8 00097DA8  2C 1F 00 0C */	cmpwi r31, 0xc
/* 8009ACCC 00097DAC  40 82 00 54 */	bne .L_8009AD20
/* 8009ACD0 00097DB0  54 A0 06 3F */	clrlwi. r0, r5, 24
/* 8009ACD4 00097DB4  41 82 00 4C */	beq .L_8009AD20
/* 8009ACD8 00097DB8  38 60 00 00 */	li r3, 0x0
/* 8009ACDC 00097DBC  38 80 00 00 */	li r4, 0x0
/* 8009ACE0 00097DC0  4B FA D6 55 */	bl xSndPauseAll__FUiUi
/* 8009ACE4 00097DC4  3C 60 80 3C */	lis r3, globals@ha
/* 8009ACE8 00097DC8  38 00 00 00 */	li r0, 0x0
/* 8009ACEC 00097DCC  38 83 05 58 */	addi r4, r3, globals@l
/* 8009ACF0 00097DD0  80 64 03 1C */	lwz r3, 0x31c(r4)
/* 8009ACF4 00097DD4  90 03 00 30 */	stw r0, 0x30(r3)
/* 8009ACF8 00097DD8  80 64 03 1C */	lwz r3, 0x31c(r4)
/* 8009ACFC 00097DDC  90 03 00 34 */	stw r0, 0x34(r3)
/* 8009AD00 00097DE0  80 64 03 1C */	lwz r3, 0x31c(r4)
/* 8009AD04 00097DE4  98 03 00 38 */	stb r0, 0x38(r3)
/* 8009AD08 00097DE8  80 64 03 1C */	lwz r3, 0x31c(r4)
/* 8009AD0C 00097DEC  98 03 00 39 */	stb r0, 0x39(r3)
/* 8009AD10 00097DF0  80 64 03 1C */	lwz r3, 0x31c(r4)
/* 8009AD14 00097DF4  98 03 00 3A */	stb r0, 0x3a(r3)
/* 8009AD18 00097DF8  80 64 03 1C */	lwz r3, 0x31c(r4)
/* 8009AD1C 00097DFC  98 03 00 3B */	stb r0, 0x3b(r3)
.L_8009AD20:
/* 8009AD20 00097E00  3C 60 80 29 */	lis r3, sGameMode_DispatchTable@ha
/* 8009AD24 00097E04  93 ED 8F A8 */	stw r31, gGameMode@sda21(r13)
/* 8009AD28 00097E08  57 E0 10 3A */	slwi r0, r31, 2
/* 8009AD2C 00097E0C  38 80 00 1E */	li r4, 0x1e
/* 8009AD30 00097E10  38 63 F9 28 */	addi r3, r3, sGameMode_DispatchTable@l
/* 8009AD34 00097E14  7C 63 00 2E */	lwzx r3, r3, r0
/* 8009AD38 00097E18  4B FB A7 69 */	bl zEntEventAllOfType__FUiUi
/* 8009AD3C 00097E1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009AD40 00097E20  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8009AD44 00097E24  7C 08 03 A6 */	mtlr r0
/* 8009AD48 00097E28  38 21 00 10 */	addi r1, r1, 0x10
/* 8009AD4C 00097E2C  4E 80 00 20 */	blr
.endfn zGameModeSwitch__F9eGameMode

# 0x8025CB38 - 0x8025CB50
.rodata
.balign 8

.obj "@stringBase0", local
	.4byte 0x4D4E5534
	.4byte 0x20434F4E
	.4byte 0x4649524D
	.4byte 0x20534658
	.byte 0x00
.endobj "@stringBase0"
	.4byte 0x00000000
	.byte 0x00, 0x00, 0x00

# 0x8028F928 - 0x8028FA20
.data
.balign 8

.obj sGameMode_DispatchTable, local
.sym ...data.0, local
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
.endobj sGameMode_DispatchTable

.obj sGameState_DispatchTable, local
	.4byte 0x00000083
	.4byte 0x00000084
	.4byte 0x00000085
	.4byte 0x00000086
	.4byte 0x00000087
	.4byte 0x00000088
	.4byte 0x00000000
	.4byte 0x00000000
.endobj sGameState_DispatchTable

.obj sSaveState_DispatchTable, local
	.4byte 0x0000007C
	.4byte 0x0000007D
	.4byte 0x0000007E
.endobj sSaveState_DispatchTable

.obj sLoadState_DispatchTable, local
	.4byte 0x00000076
	.4byte 0x00000077
	.4byte 0x00000078
.endobj sLoadState_DispatchTable

.obj sIntroState_DispatchTable, local
	.4byte 0x0000006E
	.4byte 0x0000006F
	.4byte 0x00000070
	.4byte 0x00000071
.endobj sIntroState_DispatchTable

.obj sGameState_DoDispatchTable, local
	.4byte 0x0000009E
	.4byte 0x0000009F
	.4byte 0x000000A0
	.4byte 0x000000A1
	.4byte 0x00000128
	.4byte 0x000000A2
	.4byte 0x000000A3
	.4byte 0x000000A6
.endobj sGameState_DoDispatchTable

.obj sSaveState_DoDispatchTable, local
	.4byte 0x00000097
	.4byte 0x00000098
	.4byte 0x00000099
.endobj sSaveState_DoDispatchTable

.obj sLoadState_DoDispatchTable, local
	.4byte 0x00000091
	.4byte 0x00000092
	.4byte 0x00000093
.endobj sLoadState_DoDispatchTable

.obj sIntroState_DoDispatchTable, local
	.4byte 0x00000089
	.4byte 0x0000008A
	.4byte 0x0000008B
	.4byte 0x0000008C
.endobj sIntroState_DoDispatchTable

.obj "@741", local
	.rel zGameStateSwitch__Fi, .L_8009ABF4
	.rel zGameStateSwitch__Fi, .L_8009AB88
	.rel zGameStateSwitch__Fi, .L_8009AB98
	.rel zGameStateSwitch__Fi, .L_8009ABF4
	.rel zGameStateSwitch__Fi, .L_8009ABA8
	.rel zGameStateSwitch__Fi, .L_8009ABB8
	.rel zGameStateSwitch__Fi, .L_8009ABC8
	.rel zGameStateSwitch__Fi, .L_8009ABD8
	.rel zGameStateSwitch__Fi, .L_8009ABF4
	.rel zGameStateSwitch__Fi, .L_8009ABF4
	.rel zGameStateSwitch__Fi, .L_8009ABF4
	.rel zGameStateSwitch__Fi, .L_8009ABF4
	.rel zGameStateSwitch__Fi, .L_8009ABE8
.endobj "@741"

# 0x803CAB40 - 0x803CAB70
.section .sdata, "wa"
.balign 8

.obj gGameState, global
	.4byte 0x00000006
.endobj gGameState

.obj sPauseState_DispatchTable, local
	.4byte 0x00000080
	.4byte 0x00000081
.endobj sPauseState_DispatchTable

.obj sOptionsState_DispatchTable, local
	.4byte 0x0000007A
.endobj sOptionsState_DispatchTable

.obj sTitleState_DispatchTable, local
	.4byte 0x00000073
	.4byte 0x00000074
.endobj sTitleState_DispatchTable

.obj sPauseState_DoDispatchTable, local
	.4byte 0x0000009B
	.4byte 0x0000009C
.endobj sPauseState_DoDispatchTable

.obj sOptionsState_DoDispatchTable, local
	.4byte 0x00000095
.endobj sOptionsState_DoDispatchTable

.obj sTitleState_DoDispatchTable, local
	.4byte 0x0000008E
	.4byte 0x0000008F
.endobj sTitleState_DoDispatchTable
	.4byte 0x00000000

# 0x803CB8A8 - 0x803CB8B0
.section .sbss, "wa", @nobits
.balign 8

.obj gGameMode, global
	.skip 0x4
.endobj gGameMode

.obj gGameOstrich, global
	.skip 0x4
.endobj gGameOstrich
