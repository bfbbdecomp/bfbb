.include "macros.inc"

.section .text  # 0x80168A94 - 0x8017047C

.global zNPCTypeBossPlankton.get_player_loc__34_unnamed_zNPCTypeBossPlankton_cpp_Fv
zNPCTypeBossPlankton.get_player_loc__34_unnamed_zNPCTypeBossPlankton_cpp_Fv:
/* 80168A94 00165894  3C 60 80 3C */	lis r3, lbl_globals@ha
/* 80168A98 00165898  38 63 05 58 */	addi r3, r3, lbl_globals@l
/* 80168A9C 0016589C  80 63 07 04 */	lwz r3, 0x704(r3)
/* 80168AA0 001658A0  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80168AA4 001658A4  38 63 00 30 */	addi r3, r3, 0x30
/* 80168AA8 001658A8  4E 80 00 20 */	blr 

.global zNPCTypeBossPlankton.init_sound__34_unnamed_zNPCTypeBossPlankton_cpp_Fv
zNPCTypeBossPlankton.init_sound__34_unnamed_zNPCTypeBossPlankton_cpp_Fv:
/* 80168AAC 001658AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80168AB0 001658B0  7C 08 02 A6 */	mflr r0
/* 80168AB4 001658B4  3C 60 80 33 */	lis r3, lbl_sound_asset_names__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 80168AB8 001658B8  38 80 00 00 */	li r4, 0
/* 80168ABC 001658BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80168AC0 001658C0  38 A0 00 18 */	li r5, 0x18
/* 80168AC4 001658C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80168AC8 001658C8  3B E3 9F 48 */	addi r31, r3, lbl_sound_asset_names__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 80168ACC 001658CC  38 7F 01 E0 */	addi r3, r31, 0x1e0
/* 80168AD0 001658D0  4B E9 A9 89 */	bl memset
/* 80168AD4 001658D4  3C 60 80 27 */	lis r3, lbl_sound_assets__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 80168AD8 001658D8  38 00 00 1D */	li r0, 0x1d
/* 80168ADC 001658DC  39 03 11 0C */	addi r8, r3, lbl_sound_assets__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 80168AE0 001658E0  39 7F 01 E0 */	addi r11, r31, 0x1e0
/* 80168AE4 001658E4  38 DF 00 00 */	addi r6, r31, 0
/* 80168AE8 001658E8  38 7F 00 F0 */	addi r3, r31, 0xf0
/* 80168AEC 001658EC  39 40 00 00 */	li r10, 0
/* 80168AF0 001658F0  7C 09 03 A6 */	mtctr r0
lbl_80168AF4:
/* 80168AF4 001658F4  81 28 00 04 */	lwz r9, 4(r8)
/* 80168AF8 001658F8  28 09 00 00 */	cmplwi r9, 0
/* 80168AFC 001658FC  41 82 00 2C */	beq lbl_80168B28
/* 80168B00 00165900  80 08 00 00 */	lwz r0, 0(r8)
/* 80168B04 00165904  54 07 10 3A */	slwi r7, r0, 2
/* 80168B08 00165908  7C AB 38 2E */	lwzx r5, r11, r7
/* 80168B0C 0016590C  1C 80 00 28 */	mulli r4, r0, 0x28
/* 80168B10 00165910  54 A0 10 3A */	slwi r0, r5, 2
/* 80168B14 00165914  7C 84 02 14 */	add r4, r4, r0
/* 80168B18 00165918  38 05 00 01 */	addi r0, r5, 1
/* 80168B1C 0016591C  7D 26 21 2E */	stwx r9, r6, r4
/* 80168B20 00165920  7D 43 21 2E */	stwx r10, r3, r4
/* 80168B24 00165924  7C 0B 39 2E */	stwx r0, r11, r7
lbl_80168B28:
/* 80168B28 00165928  39 08 00 10 */	addi r8, r8, 0x10
/* 80168B2C 0016592C  39 4A 00 01 */	addi r10, r10, 1
/* 80168B30 00165930  42 00 FF C4 */	bdnz lbl_80168AF4
/* 80168B34 00165934  38 7F 01 F8 */	addi r3, r31, 0x1f8
/* 80168B38 00165938  38 80 00 00 */	li r4, 0
/* 80168B3C 0016593C  38 A0 00 60 */	li r5, 0x60
/* 80168B40 00165940  4B E9 A9 19 */	bl memset
/* 80168B44 00165944  38 00 00 00 */	li r0, 0
/* 80168B48 00165948  38 7F 01 F8 */	addi r3, r31, 0x1f8
/* 80168B4C 0016594C  90 1F 01 F8 */	stw r0, 0x1f8(r31)
/* 80168B50 00165950  90 03 00 04 */	stw r0, 4(r3)
/* 80168B54 00165954  90 03 00 10 */	stw r0, 0x10(r3)
/* 80168B58 00165958  90 03 00 14 */	stw r0, 0x14(r3)
/* 80168B5C 0016595C  90 03 00 20 */	stw r0, 0x20(r3)
/* 80168B60 00165960  90 03 00 24 */	stw r0, 0x24(r3)
/* 80168B64 00165964  90 03 00 30 */	stw r0, 0x30(r3)
/* 80168B68 00165968  90 03 00 34 */	stw r0, 0x34(r3)
/* 80168B6C 0016596C  90 03 00 40 */	stw r0, 0x40(r3)
/* 80168B70 00165970  90 03 00 44 */	stw r0, 0x44(r3)
/* 80168B74 00165974  90 03 00 50 */	stw r0, 0x50(r3)
/* 80168B78 00165978  90 03 00 54 */	stw r0, 0x54(r3)
/* 80168B7C 0016597C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80168B80 00165980  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80168B84 00165984  7C 08 03 A6 */	mtlr r0
/* 80168B88 00165988  38 21 00 10 */	addi r1, r1, 0x10
/* 80168B8C 0016598C  4E 80 00 20 */	blr 

.global zNPCTypeBossPlankton.reset_sound__34_unnamed_zNPCTypeBossPlankton_cpp_Fv
zNPCTypeBossPlankton.reset_sound__34_unnamed_zNPCTypeBossPlankton_cpp_Fv:
/* 80168B90 00165990  3C 60 80 33 */	lis r3, lbl_sound_data__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 80168B94 00165994  38 00 00 00 */	li r0, 0
/* 80168B98 00165998  38 63 A1 40 */	addi r3, r3, lbl_sound_data__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 80168B9C 0016599C  90 03 00 04 */	stw r0, 4(r3)
/* 80168BA0 001659A0  90 03 00 14 */	stw r0, 0x14(r3)
/* 80168BA4 001659A4  90 03 00 24 */	stw r0, 0x24(r3)
/* 80168BA8 001659A8  90 03 00 34 */	stw r0, 0x34(r3)
/* 80168BAC 001659AC  90 03 00 44 */	stw r0, 0x44(r3)
/* 80168BB0 001659B0  90 03 00 54 */	stw r0, 0x54(r3)
/* 80168BB4 001659B4  4E 80 00 20 */	blr 

.global zNPCTypeBossPlankton.play_sound__34_unnamed_zNPCTypeBossPlankton_cpp_FiPC5xVec3f
zNPCTypeBossPlankton.play_sound__34_unnamed_zNPCTypeBossPlankton_cpp_FiPC5xVec3f:
/* 80168BB8 001659B8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80168BBC 001659BC  7C 08 02 A6 */	mflr r0
/* 80168BC0 001659C0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80168BC4 001659C4  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80168BC8 001659C8  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 80168BCC 001659CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80168BD0 001659D0  93 C1 00 08 */	stw r30, 8(r1)
/* 80168BD4 001659D4  1C E3 00 18 */	mulli r7, r3, 0x18
/* 80168BD8 001659D8  3C C0 80 33 */	lis r6, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 80168BDC 001659DC  3C A0 80 27 */	lis r5, lbl_sound_assets__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 80168BE0 001659E0  FF E0 08 90 */	fmr f31, f1
/* 80168BE4 001659E4  38 06 A1 A0 */	addi r0, r6, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 80168BE8 001659E8  7C C0 3A 14 */	add r6, r0, r7
/* 80168BEC 001659EC  39 26 01 54 */	addi r9, r6, 0x154
/* 80168BF0 001659F0  80 C6 01 54 */	lwz r6, 0x154(r6)
/* 80168BF4 001659F4  54 68 20 36 */	slwi r8, r3, 4
/* 80168BF8 001659F8  3C E0 80 33 */	lis r7, lbl_sound_data__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 80168BFC 001659FC  38 05 11 0C */	addi r0, r5, lbl_sound_assets__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 80168C00 00165A00  54 C3 20 36 */	slwi r3, r6, 4
/* 80168C04 00165A04  38 A7 A1 40 */	addi r5, r7, lbl_sound_data__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 80168C08 00165A08  7C 9E 23 78 */	mr r30, r4
/* 80168C0C 00165A0C  7C E0 1A 14 */	add r7, r0, r3
/* 80168C10 00165A10  80 87 00 0C */	lwz r4, 0xc(r7)
/* 80168C14 00165A14  7F E5 42 14 */	add r31, r5, r8
/* 80168C18 00165A18  54 80 07 BD */	rlwinm. r0, r4, 0, 0x1e, 0x1e
/* 80168C1C 00165A1C  41 82 00 14 */	beq lbl_80168C30
/* 80168C20 00165A20  80 7F 00 04 */	lwz r3, 4(r31)
/* 80168C24 00165A24  28 03 00 00 */	cmplwi r3, 0
/* 80168C28 00165A28  41 82 00 08 */	beq lbl_80168C30
/* 80168C2C 00165A2C  48 00 00 88 */	b lbl_80168CB4
lbl_80168C30:
/* 80168C30 00165A30  54 80 07 FF */	clrlwi. r0, r4, 0x1f
/* 80168C34 00165A34  41 82 00 40 */	beq lbl_80168C74
/* 80168C38 00165A38  C0 09 00 04 */	lfs f0, 4(r9)
/* 80168C3C 00165A3C  7F C6 F3 78 */	mr r6, r30
/* 80168C40 00165A40  80 7F 00 00 */	lwz r3, 0(r31)
/* 80168C44 00165A44  38 A0 08 00 */	li r5, 0x800
/* 80168C48 00165A48  EC 3F 00 32 */	fmuls f1, f31, f0
/* 80168C4C 00165A4C  C0 42 AB 0C */	lfs f2, lbl__1585_1-_SDA2_BASE_(r2)
/* 80168C50 00165A50  80 87 00 08 */	lwz r4, 8(r7)
/* 80168C54 00165A54  38 E0 00 00 */	li r7, 0
/* 80168C58 00165A58  C0 69 00 08 */	lfs f3, 8(r9)
/* 80168C5C 00165A5C  C0 89 00 0C */	lfs f4, 0xc(r9)
/* 80168C60 00165A60  C0 A2 AB 10 */	lfs f5, lbl__1586_2-_SDA2_BASE_(r2)
/* 80168C64 00165A64  C0 C9 00 10 */	lfs f6, 0x10(r9)
/* 80168C68 00165A68  4B EE 09 05 */	bl xSndPlay3DFade__FUiffUiUiPC5xVec3ff14sound_categoryff
/* 80168C6C 00165A6C  90 7F 00 04 */	stw r3, 4(r31)
/* 80168C70 00165A70  48 00 00 38 */	b lbl_80168CA8
lbl_80168C74:
/* 80168C74 00165A74  C0 09 00 04 */	lfs f0, 4(r9)
/* 80168C78 00165A78  7F C6 F3 78 */	mr r6, r30
/* 80168C7C 00165A7C  80 7F 00 00 */	lwz r3, 0(r31)
/* 80168C80 00165A80  38 A0 08 00 */	li r5, 0x800
/* 80168C84 00165A84  EC 3F 00 32 */	fmuls f1, f31, f0
/* 80168C88 00165A88  C0 42 AB 0C */	lfs f2, lbl__1585_1-_SDA2_BASE_(r2)
/* 80168C8C 00165A8C  80 87 00 08 */	lwz r4, 8(r7)
/* 80168C90 00165A90  38 E0 00 00 */	li r7, 0
/* 80168C94 00165A94  C0 69 00 08 */	lfs f3, 8(r9)
/* 80168C98 00165A98  C0 89 00 0C */	lfs f4, 0xc(r9)
/* 80168C9C 00165A9C  C0 A9 00 10 */	lfs f5, 0x10(r9)
/* 80168CA0 00165AA0  4B ED FD F5 */	bl xSndPlay3D__FUiffUiUiPC5xVec3ff14sound_categoryf
/* 80168CA4 00165AA4  90 7F 00 04 */	stw r3, 4(r31)
lbl_80168CA8:
/* 80168CA8 00165AA8  93 DF 00 08 */	stw r30, 8(r31)
/* 80168CAC 00165AAC  D3 FF 00 0C */	stfs f31, 0xc(r31)
/* 80168CB0 00165AB0  80 7F 00 04 */	lwz r3, 4(r31)
lbl_80168CB4:
/* 80168CB4 00165AB4  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 80168CB8 00165AB8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80168CBC 00165ABC  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80168CC0 00165AC0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80168CC4 00165AC4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80168CC8 00165AC8  7C 08 03 A6 */	mtlr r0
/* 80168CCC 00165ACC  38 21 00 20 */	addi r1, r1, 0x20
/* 80168CD0 00165AD0  4E 80 00 20 */	blr 

.global zNPCTypeBossPlankton.kill_sound__34_unnamed_zNPCTypeBossPlankton_cpp_FiUi
zNPCTypeBossPlankton.kill_sound__34_unnamed_zNPCTypeBossPlankton_cpp_FiUi:
/* 80168CD4 00165AD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80168CD8 00165AD8  7C 08 02 A6 */	mflr r0
/* 80168CDC 00165ADC  1C E3 00 18 */	mulli r7, r3, 0x18
/* 80168CE0 00165AE0  3C C0 80 33 */	lis r6, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 80168CE4 00165AE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80168CE8 00165AE8  3C A0 80 27 */	lis r5, lbl_sound_assets__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 80168CEC 00165AEC  38 06 A1 A0 */	addi r0, r6, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 80168CF0 00165AF0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80168CF4 00165AF4  7C C0 3A 14 */	add r6, r0, r7
/* 80168CF8 00165AF8  38 05 11 0C */	addi r0, r5, lbl_sound_assets__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 80168CFC 00165AFC  80 A6 01 54 */	lwz r5, 0x154(r6)
/* 80168D00 00165B00  54 68 20 36 */	slwi r8, r3, 4
/* 80168D04 00165B04  3C E0 80 33 */	lis r7, lbl_sound_data__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 80168D08 00165B08  39 26 01 54 */	addi r9, r6, 0x154
/* 80168D0C 00165B0C  54 A3 20 36 */	slwi r3, r5, 4
/* 80168D10 00165B10  7C 60 1A 14 */	add r3, r0, r3
/* 80168D14 00165B14  38 C7 A1 40 */	addi r6, r7, lbl_sound_data__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 80168D18 00165B18  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80168D1C 00165B1C  7F E6 42 14 */	add r31, r6, r8
/* 80168D20 00165B20  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80168D24 00165B24  41 82 00 14 */	beq lbl_80168D38
/* 80168D28 00165B28  C0 29 00 14 */	lfs f1, 0x14(r9)
/* 80168D2C 00165B2C  7C 83 23 78 */	mr r3, r4
/* 80168D30 00165B30  4B EE 09 15 */	bl xSndStopFade__FUif
/* 80168D34 00165B34  48 00 00 0C */	b lbl_80168D40
lbl_80168D38:
/* 80168D38 00165B38  7C 83 23 78 */	mr r3, r4
/* 80168D3C 00165B3C  4B EE 04 C5 */	bl xSndStop__FUi
lbl_80168D40:
/* 80168D40 00165B40  38 00 00 00 */	li r0, 0
/* 80168D44 00165B44  90 1F 00 04 */	stw r0, 4(r31)
/* 80168D48 00165B48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80168D4C 00165B4C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80168D50 00165B50  7C 08 03 A6 */	mtlr r0
/* 80168D54 00165B54  38 21 00 10 */	addi r1, r1, 0x10
/* 80168D58 00165B58  4E 80 00 20 */	blr 

.global zNPCTypeBossPlankton.kill_sound__34_unnamed_zNPCTypeBossPlankton_cpp_Fi
zNPCTypeBossPlankton.kill_sound__34_unnamed_zNPCTypeBossPlankton_cpp_Fi:
/* 80168D5C 00165B5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80168D60 00165B60  7C 08 02 A6 */	mflr r0
/* 80168D64 00165B64  3C 80 80 33 */	lis r4, lbl_sound_data__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 80168D68 00165B68  54 65 20 36 */	slwi r5, r3, 4
/* 80168D6C 00165B6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80168D70 00165B70  38 04 A1 40 */	addi r0, r4, lbl_sound_data__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 80168D74 00165B74  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80168D78 00165B78  7F E0 2A 14 */	add r31, r0, r5
/* 80168D7C 00165B7C  80 DF 00 04 */	lwz r6, 4(r31)
/* 80168D80 00165B80  28 06 00 00 */	cmplwi r6, 0
/* 80168D84 00165B84  41 82 00 54 */	beq lbl_80168DD8
/* 80168D88 00165B88  1C A3 00 18 */	mulli r5, r3, 0x18
/* 80168D8C 00165B8C  3C 80 80 33 */	lis r4, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 80168D90 00165B90  3C 60 80 27 */	lis r3, lbl_sound_assets__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 80168D94 00165B94  38 04 A1 A0 */	addi r0, r4, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 80168D98 00165B98  7C 80 2A 14 */	add r4, r0, r5
/* 80168D9C 00165B9C  38 03 11 0C */	addi r0, r3, lbl_sound_assets__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 80168DA0 00165BA0  84 64 01 54 */	lwzu r3, 0x154(r4)
/* 80168DA4 00165BA4  54 63 20 36 */	slwi r3, r3, 4
/* 80168DA8 00165BA8  7C 60 1A 14 */	add r3, r0, r3
/* 80168DAC 00165BAC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80168DB0 00165BB0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80168DB4 00165BB4  41 82 00 14 */	beq lbl_80168DC8
/* 80168DB8 00165BB8  C0 24 00 14 */	lfs f1, 0x14(r4)
/* 80168DBC 00165BBC  7C C3 33 78 */	mr r3, r6
/* 80168DC0 00165BC0  4B EE 08 85 */	bl xSndStopFade__FUif
/* 80168DC4 00165BC4  48 00 00 0C */	b lbl_80168DD0
lbl_80168DC8:
/* 80168DC8 00165BC8  7C C3 33 78 */	mr r3, r6
/* 80168DCC 00165BCC  4B EE 04 35 */	bl xSndStop__FUi
lbl_80168DD0:
/* 80168DD0 00165BD0  38 00 00 00 */	li r0, 0
/* 80168DD4 00165BD4  90 1F 00 04 */	stw r0, 4(r31)
lbl_80168DD8:
/* 80168DD8 00165BD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80168DDC 00165BDC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80168DE0 00165BE0  7C 08 03 A6 */	mtlr r0
/* 80168DE4 00165BE4  38 21 00 10 */	addi r1, r1, 0x10
/* 80168DE8 00165BE8  4E 80 00 20 */	blr 
lbl_80168DEC:
/* 80168DEC 00165BEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80168DF0 00165BF0  7C 08 02 A6 */	mflr r0
/* 80168DF4 00165BF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80168DF8 00165BF8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80168DFC 00165BFC  7C 7F 1B 78 */	mr r31, r3
/* 80168E00 00165C00  80 03 00 48 */	lwz r0, 0x48(r3)
/* 80168E04 00165C04  28 00 00 00 */	cmplwi r0, 0
/* 80168E08 00165C08  40 82 00 18 */	bne lbl_80168E20
/* 80168E0C 00165C0C  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 80168E10 00165C10  38 9F 00 18 */	addi r4, r31, 0x18
/* 80168E14 00165C14  38 60 00 03 */	li r3, 3
/* 80168E18 00165C18  4B FF FD A1 */	bl zNPCTypeBossPlankton.play_sound__34_unnamed_zNPCTypeBossPlankton_cpp_FiPC5xVec3f
/* 80168E1C 00165C1C  90 7F 00 48 */	stw r3, 0x48(r31)
lbl_80168E20:
/* 80168E20 00165C20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80168E24 00165C24  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80168E28 00165C28  7C 08 03 A6 */	mtlr r0
/* 80168E2C 00165C2C  38 21 00 10 */	addi r1, r1, 0x10
/* 80168E30 00165C30  4E 80 00 20 */	blr 
lbl_80168E34:
/* 80168E34 00165C34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80168E38 00165C38  7C 08 02 A6 */	mflr r0
/* 80168E3C 00165C3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80168E40 00165C40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80168E44 00165C44  7C 7F 1B 78 */	mr r31, r3
/* 80168E48 00165C48  80 83 00 48 */	lwz r4, 0x48(r3)
/* 80168E4C 00165C4C  28 04 00 00 */	cmplwi r4, 0
/* 80168E50 00165C50  41 82 00 14 */	beq lbl_80168E64
/* 80168E54 00165C54  38 60 00 03 */	li r3, 3
/* 80168E58 00165C58  4B FF FE 7D */	bl zNPCTypeBossPlankton.kill_sound__34_unnamed_zNPCTypeBossPlankton_cpp_FiUi
/* 80168E5C 00165C5C  38 00 00 00 */	li r0, 0
/* 80168E60 00165C60  90 1F 00 48 */	stw r0, 0x48(r31)
lbl_80168E64:
/* 80168E64 00165C64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80168E68 00165C68  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80168E6C 00165C6C  7C 08 03 A6 */	mtlr r0
/* 80168E70 00165C70  38 21 00 10 */	addi r1, r1, 0x10
/* 80168E74 00165C74  4E 80 00 20 */	blr 
lbl_80168E78:
/* 80168E78 00165C78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80168E7C 00165C7C  7C 08 02 A6 */	mflr r0
/* 80168E80 00165C80  7C 64 1B 78 */	mr r4, r3
/* 80168E84 00165C84  38 60 00 02 */	li r3, 2
/* 80168E88 00165C88  90 01 00 14 */	stw r0, 0x14(r1)
/* 80168E8C 00165C8C  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 80168E90 00165C90  4B FF FD 29 */	bl zNPCTypeBossPlankton.play_sound__34_unnamed_zNPCTypeBossPlankton_cpp_FiPC5xVec3f
/* 80168E94 00165C94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80168E98 00165C98  7C 08 03 A6 */	mtlr r0
/* 80168E9C 00165C9C  38 21 00 10 */	addi r1, r1, 0x10
/* 80168EA0 00165CA0  4E 80 00 20 */	blr 
lbl_80168EA4:
/* 80168EA4 00165CA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80168EA8 00165CA8  7C 08 02 A6 */	mflr r0
/* 80168EAC 00165CAC  38 83 00 18 */	addi r4, r3, 0x18
/* 80168EB0 00165CB0  38 60 00 04 */	li r3, 4
/* 80168EB4 00165CB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80168EB8 00165CB8  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 80168EBC 00165CBC  4B FF FC FD */	bl zNPCTypeBossPlankton.play_sound__34_unnamed_zNPCTypeBossPlankton_cpp_FiPC5xVec3f
/* 80168EC0 00165CC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80168EC4 00165CC4  7C 08 03 A6 */	mtlr r0
/* 80168EC8 00165CC8  38 21 00 10 */	addi r1, r1, 0x10
/* 80168ECC 00165CCC  4E 80 00 20 */	blr 
/* 80168ED0 00165CD0  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 80168ED4 00165CD4  7C 08 02 A6 */	mflr r0
/* 80168ED8 00165CD8  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 80168EDC 00165CDC  38 80 00 00 */	li r4, 0
/* 80168EE0 00165CE0  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 80168EE4 00165CE4  38 63 14 64 */	addi r3, r3, lbl__stringBase0_97@l
/* 80168EE8 00165CE8  38 A0 00 00 */	li r5, 0
/* 80168EEC 00165CEC  BE 21 00 A4 */	stmw r17, 0xa4(r1)
/* 80168EF0 00165CF0  38 63 01 86 */	addi r3, r3, 0x186
/* 80168EF4 00165CF4  4B E9 DD 7D */	bl xAnimTableNew__FPCcPP10xAnimTableUi
/* 80168EF8 00165CF8  3A 20 00 00 */	li r17, 0
/* 80168EFC 00165CFC  3C A0 80 00 */	lis r5, lbl_80006CFC@ha
/* 80168F00 00165D00  56 20 10 3A */	slwi r0, r17, 2
/* 80168F04 00165D04  38 C1 00 18 */	addi r6, r1, 0x18
/* 80168F08 00165D08  38 E0 00 01 */	li r7, 1
/* 80168F0C 00165D0C  3C 80 80 2A */	lis r4, lbl_g_strz_bossanim@ha
/* 80168F10 00165D10  7C E6 01 2E */	stwx r7, r6, r0
/* 80168F14 00165D14  38 A5 6C FC */	addi r5, r5, lbl_80006CFC@l
/* 80168F18 00165D18  38 00 00 00 */	li r0, 0
/* 80168F1C 00165D1C  38 84 93 A0 */	addi r4, r4, lbl_g_strz_bossanim@l
/* 80168F20 00165D20  90 A1 00 08 */	stw r5, 8(r1)
/* 80168F24 00165D24  7C 72 1B 78 */	mr r18, r3
/* 80168F28 00165D28  38 A0 00 10 */	li r5, 0x10
/* 80168F2C 00165D2C  38 C0 00 00 */	li r6, 0
/* 80168F30 00165D30  90 01 00 0C */	stw r0, 0xc(r1)
/* 80168F34 00165D34  38 E0 00 00 */	li r7, 0
/* 80168F38 00165D38  39 00 00 00 */	li r8, 0
/* 80168F3C 00165D3C  39 20 00 00 */	li r9, 0
/* 80168F40 00165D40  90 01 00 10 */	stw r0, 0x10(r1)
/* 80168F44 00165D44  39 40 00 00 */	li r10, 0
/* 80168F48 00165D48  3A 20 00 01 */	li r17, 1
/* 80168F4C 00165D4C  80 84 00 04 */	lwz r4, 4(r4)
/* 80168F50 00165D50  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 80168F54 00165D54  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 80168F58 00165D58  4B E9 DE 01 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80168F5C 00165D5C  56 20 10 3A */	slwi r0, r17, 2
/* 80168F60 00165D60  38 81 00 18 */	addi r4, r1, 0x18
/* 80168F64 00165D64  38 A0 00 03 */	li r5, 3
/* 80168F68 00165D68  3C 60 80 00 */	lis r3, lbl_80006CFC@ha
/* 80168F6C 00165D6C  7C A4 01 2E */	stwx r5, r4, r0
/* 80168F70 00165D70  38 83 6C FC */	addi r4, r3, lbl_80006CFC@l
/* 80168F74 00165D74  3C 60 80 2A */	lis r3, lbl_g_strz_bossanim@ha
/* 80168F78 00165D78  38 00 00 00 */	li r0, 0
/* 80168F7C 00165D7C  90 81 00 08 */	stw r4, 8(r1)
/* 80168F80 00165D80  3A 63 93 A0 */	addi r19, r3, lbl_g_strz_bossanim@l
/* 80168F84 00165D84  7E 43 93 78 */	mr r3, r18
/* 80168F88 00165D88  38 A0 00 20 */	li r5, 0x20
/* 80168F8C 00165D8C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80168F90 00165D90  38 C0 00 00 */	li r6, 0
/* 80168F94 00165D94  38 E0 00 00 */	li r7, 0
/* 80168F98 00165D98  39 00 00 00 */	li r8, 0
/* 80168F9C 00165D9C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80168FA0 00165DA0  39 20 00 00 */	li r9, 0
/* 80168FA4 00165DA4  39 40 00 00 */	li r10, 0
/* 80168FA8 00165DA8  3A 20 00 02 */	li r17, 2
/* 80168FAC 00165DAC  80 93 00 0C */	lwz r4, 0xc(r19)
/* 80168FB0 00165DB0  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 80168FB4 00165DB4  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 80168FB8 00165DB8  4B E9 DD A1 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80168FBC 00165DBC  56 20 10 3A */	slwi r0, r17, 2
/* 80168FC0 00165DC0  38 81 00 18 */	addi r4, r1, 0x18
/* 80168FC4 00165DC4  38 A0 00 42 */	li r5, 0x42
/* 80168FC8 00165DC8  3C 60 80 00 */	lis r3, lbl_80006CFC@ha
/* 80168FCC 00165DCC  7C A4 01 2E */	stwx r5, r4, r0
/* 80168FD0 00165DD0  38 83 6C FC */	addi r4, r3, lbl_80006CFC@l
/* 80168FD4 00165DD4  3C 60 80 2A */	lis r3, lbl_g_strz_bossanim@ha
/* 80168FD8 00165DD8  38 00 00 00 */	li r0, 0
/* 80168FDC 00165DDC  90 81 00 08 */	stw r4, 8(r1)
/* 80168FE0 00165DE0  3A 83 93 A0 */	addi r20, r3, lbl_g_strz_bossanim@l
/* 80168FE4 00165DE4  7E 43 93 78 */	mr r3, r18
/* 80168FE8 00165DE8  38 A0 00 10 */	li r5, 0x10
/* 80168FEC 00165DEC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80168FF0 00165DF0  38 C0 00 00 */	li r6, 0
/* 80168FF4 00165DF4  38 E0 00 00 */	li r7, 0
/* 80168FF8 00165DF8  39 00 00 00 */	li r8, 0
/* 80168FFC 00165DFC  90 01 00 10 */	stw r0, 0x10(r1)
/* 80169000 00165E00  39 20 00 00 */	li r9, 0
/* 80169004 00165E04  39 40 00 00 */	li r10, 0
/* 80169008 00165E08  3A 20 00 03 */	li r17, 3
/* 8016900C 00165E0C  80 94 01 08 */	lwz r4, 0x108(r20)
/* 80169010 00165E10  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 80169014 00165E14  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 80169018 00165E18  4B E9 DD 41 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8016901C 00165E1C  56 20 10 3A */	slwi r0, r17, 2
/* 80169020 00165E20  38 81 00 18 */	addi r4, r1, 0x18
/* 80169024 00165E24  38 A0 00 43 */	li r5, 0x43
/* 80169028 00165E28  3C 60 80 00 */	lis r3, lbl_80006CFC@ha
/* 8016902C 00165E2C  7C A4 01 2E */	stwx r5, r4, r0
/* 80169030 00165E30  38 83 6C FC */	addi r4, r3, lbl_80006CFC@l
/* 80169034 00165E34  3C 60 80 2A */	lis r3, lbl_g_strz_bossanim@ha
/* 80169038 00165E38  38 00 00 00 */	li r0, 0
/* 8016903C 00165E3C  90 81 00 08 */	stw r4, 8(r1)
/* 80169040 00165E40  3A A3 93 A0 */	addi r21, r3, lbl_g_strz_bossanim@l
/* 80169044 00165E44  7E 43 93 78 */	mr r3, r18
/* 80169048 00165E48  38 A0 00 20 */	li r5, 0x20
/* 8016904C 00165E4C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169050 00165E50  38 C0 00 00 */	li r6, 0
/* 80169054 00165E54  38 E0 00 00 */	li r7, 0
/* 80169058 00165E58  39 00 00 00 */	li r8, 0
/* 8016905C 00165E5C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80169060 00165E60  39 20 00 00 */	li r9, 0
/* 80169064 00165E64  39 40 00 00 */	li r10, 0
/* 80169068 00165E68  3A 20 00 04 */	li r17, 4
/* 8016906C 00165E6C  80 95 01 0C */	lwz r4, 0x10c(r21)
/* 80169070 00165E70  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 80169074 00165E74  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 80169078 00165E78  4B E9 DC E1 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8016907C 00165E7C  56 20 10 3A */	slwi r0, r17, 2
/* 80169080 00165E80  38 81 00 18 */	addi r4, r1, 0x18
/* 80169084 00165E84  38 A0 00 44 */	li r5, 0x44
/* 80169088 00165E88  3C 60 80 00 */	lis r3, lbl_80006CFC@ha
/* 8016908C 00165E8C  7C A4 01 2E */	stwx r5, r4, r0
/* 80169090 00165E90  38 83 6C FC */	addi r4, r3, lbl_80006CFC@l
/* 80169094 00165E94  3C 60 80 2A */	lis r3, lbl_g_strz_bossanim@ha
/* 80169098 00165E98  38 00 00 00 */	li r0, 0
/* 8016909C 00165E9C  90 81 00 08 */	stw r4, 8(r1)
/* 801690A0 00165EA0  3A C3 93 A0 */	addi r22, r3, lbl_g_strz_bossanim@l
/* 801690A4 00165EA4  7E 43 93 78 */	mr r3, r18
/* 801690A8 00165EA8  38 A0 00 10 */	li r5, 0x10
/* 801690AC 00165EAC  90 01 00 0C */	stw r0, 0xc(r1)
/* 801690B0 00165EB0  38 C0 00 00 */	li r6, 0
/* 801690B4 00165EB4  38 E0 00 00 */	li r7, 0
/* 801690B8 00165EB8  39 00 00 00 */	li r8, 0
/* 801690BC 00165EBC  90 01 00 10 */	stw r0, 0x10(r1)
/* 801690C0 00165EC0  39 20 00 00 */	li r9, 0
/* 801690C4 00165EC4  39 40 00 00 */	li r10, 0
/* 801690C8 00165EC8  3A 20 00 05 */	li r17, 5
/* 801690CC 00165ECC  80 96 01 10 */	lwz r4, 0x110(r22)
/* 801690D0 00165ED0  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 801690D4 00165ED4  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 801690D8 00165ED8  4B E9 DC 81 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 801690DC 00165EDC  56 20 10 3A */	slwi r0, r17, 2
/* 801690E0 00165EE0  38 81 00 18 */	addi r4, r1, 0x18
/* 801690E4 00165EE4  38 A0 00 45 */	li r5, 0x45
/* 801690E8 00165EE8  3C 60 80 00 */	lis r3, lbl_80006CFC@ha
/* 801690EC 00165EEC  7C A4 01 2E */	stwx r5, r4, r0
/* 801690F0 00165EF0  38 83 6C FC */	addi r4, r3, lbl_80006CFC@l
/* 801690F4 00165EF4  3C 60 80 2A */	lis r3, lbl_g_strz_bossanim@ha
/* 801690F8 00165EF8  38 00 00 00 */	li r0, 0
/* 801690FC 00165EFC  90 81 00 08 */	stw r4, 8(r1)
/* 80169100 00165F00  3A E3 93 A0 */	addi r23, r3, lbl_g_strz_bossanim@l
/* 80169104 00165F04  7E 43 93 78 */	mr r3, r18
/* 80169108 00165F08  38 A0 00 20 */	li r5, 0x20
/* 8016910C 00165F0C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169110 00165F10  38 C0 00 00 */	li r6, 0
/* 80169114 00165F14  38 E0 00 00 */	li r7, 0
/* 80169118 00165F18  39 00 00 00 */	li r8, 0
/* 8016911C 00165F1C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80169120 00165F20  39 20 00 00 */	li r9, 0
/* 80169124 00165F24  39 40 00 00 */	li r10, 0
/* 80169128 00165F28  3A 20 00 06 */	li r17, 6
/* 8016912C 00165F2C  80 97 01 14 */	lwz r4, 0x114(r23)
/* 80169130 00165F30  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 80169134 00165F34  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 80169138 00165F38  4B E9 DC 21 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8016913C 00165F3C  56 20 10 3A */	slwi r0, r17, 2
/* 80169140 00165F40  38 81 00 18 */	addi r4, r1, 0x18
/* 80169144 00165F44  38 A0 00 46 */	li r5, 0x46
/* 80169148 00165F48  3C 60 80 00 */	lis r3, lbl_80006CFC@ha
/* 8016914C 00165F4C  7C A4 01 2E */	stwx r5, r4, r0
/* 80169150 00165F50  38 83 6C FC */	addi r4, r3, lbl_80006CFC@l
/* 80169154 00165F54  3C 60 80 2A */	lis r3, lbl_g_strz_bossanim@ha
/* 80169158 00165F58  38 00 00 00 */	li r0, 0
/* 8016915C 00165F5C  90 81 00 08 */	stw r4, 8(r1)
/* 80169160 00165F60  3B 03 93 A0 */	addi r24, r3, lbl_g_strz_bossanim@l
/* 80169164 00165F64  7E 43 93 78 */	mr r3, r18
/* 80169168 00165F68  38 A0 00 20 */	li r5, 0x20
/* 8016916C 00165F6C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169170 00165F70  38 C0 00 00 */	li r6, 0
/* 80169174 00165F74  38 E0 00 00 */	li r7, 0
/* 80169178 00165F78  39 00 00 00 */	li r8, 0
/* 8016917C 00165F7C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80169180 00165F80  39 20 00 00 */	li r9, 0
/* 80169184 00165F84  39 40 00 00 */	li r10, 0
/* 80169188 00165F88  3A 20 00 07 */	li r17, 7
/* 8016918C 00165F8C  80 98 01 18 */	lwz r4, 0x118(r24)
/* 80169190 00165F90  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 80169194 00165F94  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 80169198 00165F98  4B E9 DB C1 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8016919C 00165F9C  56 20 10 3A */	slwi r0, r17, 2
/* 801691A0 00165FA0  38 81 00 18 */	addi r4, r1, 0x18
/* 801691A4 00165FA4  38 A0 00 47 */	li r5, 0x47
/* 801691A8 00165FA8  3C 60 80 00 */	lis r3, lbl_80006CFC@ha
/* 801691AC 00165FAC  7C A4 01 2E */	stwx r5, r4, r0
/* 801691B0 00165FB0  38 83 6C FC */	addi r4, r3, lbl_80006CFC@l
/* 801691B4 00165FB4  3C 60 80 2A */	lis r3, lbl_g_strz_bossanim@ha
/* 801691B8 00165FB8  38 00 00 00 */	li r0, 0
/* 801691BC 00165FBC  90 81 00 08 */	stw r4, 8(r1)
/* 801691C0 00165FC0  3B 23 93 A0 */	addi r25, r3, lbl_g_strz_bossanim@l
/* 801691C4 00165FC4  7E 43 93 78 */	mr r3, r18
/* 801691C8 00165FC8  38 A0 00 10 */	li r5, 0x10
/* 801691CC 00165FCC  90 01 00 0C */	stw r0, 0xc(r1)
/* 801691D0 00165FD0  38 C0 00 00 */	li r6, 0
/* 801691D4 00165FD4  38 E0 00 00 */	li r7, 0
/* 801691D8 00165FD8  39 00 00 00 */	li r8, 0
/* 801691DC 00165FDC  90 01 00 10 */	stw r0, 0x10(r1)
/* 801691E0 00165FE0  39 20 00 00 */	li r9, 0
/* 801691E4 00165FE4  39 40 00 00 */	li r10, 0
/* 801691E8 00165FE8  3A 20 00 08 */	li r17, 8
/* 801691EC 00165FEC  80 99 01 1C */	lwz r4, 0x11c(r25)
/* 801691F0 00165FF0  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 801691F4 00165FF4  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 801691F8 00165FF8  4B E9 DB 61 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 801691FC 00165FFC  56 20 10 3A */	slwi r0, r17, 2
/* 80169200 00166000  38 81 00 18 */	addi r4, r1, 0x18
/* 80169204 00166004  38 A0 00 48 */	li r5, 0x48
/* 80169208 00166008  3C 60 80 00 */	lis r3, lbl_80006CFC@ha
/* 8016920C 0016600C  7C A4 01 2E */	stwx r5, r4, r0
/* 80169210 00166010  38 83 6C FC */	addi r4, r3, lbl_80006CFC@l
/* 80169214 00166014  3C 60 80 2A */	lis r3, lbl_g_strz_bossanim@ha
/* 80169218 00166018  38 00 00 00 */	li r0, 0
/* 8016921C 0016601C  90 81 00 08 */	stw r4, 8(r1)
/* 80169220 00166020  3B 43 93 A0 */	addi r26, r3, lbl_g_strz_bossanim@l
/* 80169224 00166024  7E 43 93 78 */	mr r3, r18
/* 80169228 00166028  38 A0 00 20 */	li r5, 0x20
/* 8016922C 0016602C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169230 00166030  38 C0 00 00 */	li r6, 0
/* 80169234 00166034  38 E0 00 00 */	li r7, 0
/* 80169238 00166038  39 00 00 00 */	li r8, 0
/* 8016923C 0016603C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80169240 00166040  39 20 00 00 */	li r9, 0
/* 80169244 00166044  39 40 00 00 */	li r10, 0
/* 80169248 00166048  3A 20 00 09 */	li r17, 9
/* 8016924C 0016604C  80 9A 01 20 */	lwz r4, 0x120(r26)
/* 80169250 00166050  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 80169254 00166054  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 80169258 00166058  4B E9 DB 01 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8016925C 0016605C  56 20 10 3A */	slwi r0, r17, 2
/* 80169260 00166060  38 81 00 18 */	addi r4, r1, 0x18
/* 80169264 00166064  38 A0 00 49 */	li r5, 0x49
/* 80169268 00166068  3C 60 80 00 */	lis r3, lbl_80006CFC@ha
/* 8016926C 0016606C  7C A4 01 2E */	stwx r5, r4, r0
/* 80169270 00166070  38 83 6C FC */	addi r4, r3, lbl_80006CFC@l
/* 80169274 00166074  3C 60 80 2A */	lis r3, lbl_g_strz_bossanim@ha
/* 80169278 00166078  38 00 00 00 */	li r0, 0
/* 8016927C 0016607C  90 81 00 08 */	stw r4, 8(r1)
/* 80169280 00166080  3B 63 93 A0 */	addi r27, r3, lbl_g_strz_bossanim@l
/* 80169284 00166084  7E 43 93 78 */	mr r3, r18
/* 80169288 00166088  38 A0 00 20 */	li r5, 0x20
/* 8016928C 0016608C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169290 00166090  38 C0 00 00 */	li r6, 0
/* 80169294 00166094  38 E0 00 00 */	li r7, 0
/* 80169298 00166098  39 00 00 00 */	li r8, 0
/* 8016929C 0016609C  90 01 00 10 */	stw r0, 0x10(r1)
/* 801692A0 001660A0  39 20 00 00 */	li r9, 0
/* 801692A4 001660A4  39 40 00 00 */	li r10, 0
/* 801692A8 001660A8  3A 20 00 0A */	li r17, 0xa
/* 801692AC 001660AC  80 9B 01 24 */	lwz r4, 0x124(r27)
/* 801692B0 001660B0  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 801692B4 001660B4  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 801692B8 001660B8  4B E9 DA A1 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 801692BC 001660BC  56 20 10 3A */	slwi r0, r17, 2
/* 801692C0 001660C0  38 81 00 18 */	addi r4, r1, 0x18
/* 801692C4 001660C4  38 A0 00 4A */	li r5, 0x4a
/* 801692C8 001660C8  3C 60 80 00 */	lis r3, lbl_80006CFC@ha
/* 801692CC 001660CC  7C A4 01 2E */	stwx r5, r4, r0
/* 801692D0 001660D0  38 83 6C FC */	addi r4, r3, lbl_80006CFC@l
/* 801692D4 001660D4  3C 60 80 2A */	lis r3, lbl_g_strz_bossanim@ha
/* 801692D8 001660D8  38 00 00 00 */	li r0, 0
/* 801692DC 001660DC  90 81 00 08 */	stw r4, 8(r1)
/* 801692E0 001660E0  3B 83 93 A0 */	addi r28, r3, lbl_g_strz_bossanim@l
/* 801692E4 001660E4  7E 43 93 78 */	mr r3, r18
/* 801692E8 001660E8  38 A0 00 10 */	li r5, 0x10
/* 801692EC 001660EC  90 01 00 0C */	stw r0, 0xc(r1)
/* 801692F0 001660F0  38 C0 00 00 */	li r6, 0
/* 801692F4 001660F4  38 E0 00 00 */	li r7, 0
/* 801692F8 001660F8  39 00 00 00 */	li r8, 0
/* 801692FC 001660FC  90 01 00 10 */	stw r0, 0x10(r1)
/* 80169300 00166100  39 20 00 00 */	li r9, 0
/* 80169304 00166104  39 40 00 00 */	li r10, 0
/* 80169308 00166108  3A 20 00 0B */	li r17, 0xb
/* 8016930C 0016610C  80 9C 01 28 */	lwz r4, 0x128(r28)
/* 80169310 00166110  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 80169314 00166114  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 80169318 00166118  4B E9 DA 41 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8016931C 0016611C  56 20 10 3A */	slwi r0, r17, 2
/* 80169320 00166120  38 81 00 18 */	addi r4, r1, 0x18
/* 80169324 00166124  38 A0 00 4B */	li r5, 0x4b
/* 80169328 00166128  3C 60 80 00 */	lis r3, lbl_80006CFC@ha
/* 8016932C 0016612C  7C A4 01 2E */	stwx r5, r4, r0
/* 80169330 00166130  38 83 6C FC */	addi r4, r3, lbl_80006CFC@l
/* 80169334 00166134  3C 60 80 2A */	lis r3, lbl_g_strz_bossanim@ha
/* 80169338 00166138  38 00 00 00 */	li r0, 0
/* 8016933C 0016613C  90 81 00 08 */	stw r4, 8(r1)
/* 80169340 00166140  3B A3 93 A0 */	addi r29, r3, lbl_g_strz_bossanim@l
/* 80169344 00166144  7E 43 93 78 */	mr r3, r18
/* 80169348 00166148  38 A0 00 20 */	li r5, 0x20
/* 8016934C 0016614C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169350 00166150  38 C0 00 00 */	li r6, 0
/* 80169354 00166154  38 E0 00 00 */	li r7, 0
/* 80169358 00166158  39 00 00 00 */	li r8, 0
/* 8016935C 0016615C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80169360 00166160  39 20 00 00 */	li r9, 0
/* 80169364 00166164  39 40 00 00 */	li r10, 0
/* 80169368 00166168  3A 20 00 0C */	li r17, 0xc
/* 8016936C 0016616C  80 9D 01 2C */	lwz r4, 0x12c(r29)
/* 80169370 00166170  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 80169374 00166174  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 80169378 00166178  4B E9 D9 E1 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8016937C 0016617C  56 20 10 3A */	slwi r0, r17, 2
/* 80169380 00166180  38 81 00 18 */	addi r4, r1, 0x18
/* 80169384 00166184  38 A0 00 4C */	li r5, 0x4c
/* 80169388 00166188  3C 60 80 00 */	lis r3, lbl_80006CFC@ha
/* 8016938C 0016618C  7C A4 01 2E */	stwx r5, r4, r0
/* 80169390 00166190  38 83 6C FC */	addi r4, r3, lbl_80006CFC@l
/* 80169394 00166194  3C 60 80 2A */	lis r3, lbl_g_strz_bossanim@ha
/* 80169398 00166198  38 00 00 00 */	li r0, 0
/* 8016939C 0016619C  90 81 00 08 */	stw r4, 8(r1)
/* 801693A0 001661A0  3B C3 93 A0 */	addi r30, r3, lbl_g_strz_bossanim@l
/* 801693A4 001661A4  7E 43 93 78 */	mr r3, r18
/* 801693A8 001661A8  38 A0 00 20 */	li r5, 0x20
/* 801693AC 001661AC  90 01 00 0C */	stw r0, 0xc(r1)
/* 801693B0 001661B0  38 C0 00 00 */	li r6, 0
/* 801693B4 001661B4  38 E0 00 00 */	li r7, 0
/* 801693B8 001661B8  39 00 00 00 */	li r8, 0
/* 801693BC 001661BC  90 01 00 10 */	stw r0, 0x10(r1)
/* 801693C0 001661C0  39 20 00 00 */	li r9, 0
/* 801693C4 001661C4  39 40 00 00 */	li r10, 0
/* 801693C8 001661C8  3A 20 00 0D */	li r17, 0xd
/* 801693CC 001661CC  80 9E 01 30 */	lwz r4, 0x130(r30)
/* 801693D0 001661D0  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 801693D4 001661D4  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 801693D8 001661D8  4B E9 D9 81 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 801693DC 001661DC  56 20 10 3A */	slwi r0, r17, 2
/* 801693E0 001661E0  38 81 00 18 */	addi r4, r1, 0x18
/* 801693E4 001661E4  38 A0 00 4D */	li r5, 0x4d
/* 801693E8 001661E8  3C 60 80 00 */	lis r3, lbl_80006CFC@ha
/* 801693EC 001661EC  7C A4 01 2E */	stwx r5, r4, r0
/* 801693F0 001661F0  38 83 6C FC */	addi r4, r3, lbl_80006CFC@l
/* 801693F4 001661F4  3C 60 80 2A */	lis r3, lbl_g_strz_bossanim@ha
/* 801693F8 001661F8  38 00 00 00 */	li r0, 0
/* 801693FC 001661FC  90 81 00 08 */	stw r4, 8(r1)
/* 80169400 00166200  3B E3 93 A0 */	addi r31, r3, lbl_g_strz_bossanim@l
/* 80169404 00166204  7E 43 93 78 */	mr r3, r18
/* 80169408 00166208  38 A0 00 20 */	li r5, 0x20
/* 8016940C 0016620C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169410 00166210  38 C0 00 00 */	li r6, 0
/* 80169414 00166214  38 E0 00 00 */	li r7, 0
/* 80169418 00166218  39 00 00 00 */	li r8, 0
/* 8016941C 0016621C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80169420 00166220  39 20 00 00 */	li r9, 0
/* 80169424 00166224  39 40 00 00 */	li r10, 0
/* 80169428 00166228  3A 20 00 0E */	li r17, 0xe
/* 8016942C 0016622C  80 9F 01 34 */	lwz r4, 0x134(r31)
/* 80169430 00166230  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 80169434 00166234  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 80169438 00166238  4B E9 D9 21 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8016943C 0016623C  38 A1 00 18 */	addi r5, r1, 0x18
/* 80169440 00166240  56 20 10 3A */	slwi r0, r17, 2
/* 80169444 00166244  38 80 00 00 */	li r4, 0
/* 80169448 00166248  3C 60 80 2A */	lis r3, lbl_g_strz_bossanim@ha
/* 8016944C 0016624C  7C 85 01 2E */	stwx r4, r5, r0
/* 80169450 00166250  38 83 93 A0 */	addi r4, r3, lbl_g_strz_bossanim@l
/* 80169454 00166254  7E 43 93 78 */	mr r3, r18
/* 80169458 00166258  38 C0 00 01 */	li r6, 1
/* 8016945C 0016625C  C0 22 AB 14 */	lfs f1, lbl__1657_2-_SDA2_BASE_(r2)
/* 80169460 00166260  4B F8 AF 99 */	bl NPCC_BuildStandardAnimTran__FP10xAnimTablePPcPiif
/* 80169464 00166264  38 00 00 00 */	li r0, 0
/* 80169468 00166268  7E 43 93 78 */	mr r3, r18
/* 8016946C 0016626C  90 01 00 08 */	stw r0, 8(r1)
/* 80169470 00166270  38 C0 00 00 */	li r6, 0
/* 80169474 00166274  38 E0 00 00 */	li r7, 0
/* 80169478 00166278  39 00 00 10 */	li r8, 0x10
/* 8016947C 0016627C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169480 00166280  39 20 00 00 */	li r9, 0
/* 80169484 00166284  39 40 00 00 */	li r10, 0
/* 80169488 00166288  C0 22 AB 10 */	lfs f1, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016948C 0016628C  80 95 01 0C */	lwz r4, 0x10c(r21)
/* 80169490 00166290  FC 40 08 90 */	fmr f2, f1
/* 80169494 00166294  80 B6 01 10 */	lwz r5, 0x110(r22)
/* 80169498 00166298  C0 62 AB 18 */	lfs f3, lbl__1658_2-_SDA2_BASE_(r2)
/* 8016949C 0016629C  4B E9 DF 25 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 801694A0 001662A0  38 00 00 00 */	li r0, 0
/* 801694A4 001662A4  7E 43 93 78 */	mr r3, r18
/* 801694A8 001662A8  90 01 00 08 */	stw r0, 8(r1)
/* 801694AC 001662AC  38 C0 00 00 */	li r6, 0
/* 801694B0 001662B0  38 E0 00 00 */	li r7, 0
/* 801694B4 001662B4  39 00 00 00 */	li r8, 0
/* 801694B8 001662B8  90 01 00 0C */	stw r0, 0xc(r1)
/* 801694BC 001662BC  39 20 00 00 */	li r9, 0
/* 801694C0 001662C0  39 40 00 00 */	li r10, 0
/* 801694C4 001662C4  C0 22 AB 10 */	lfs f1, lbl__1586_2-_SDA2_BASE_(r2)
/* 801694C8 001662C8  80 96 01 10 */	lwz r4, 0x110(r22)
/* 801694CC 001662CC  FC 40 08 90 */	fmr f2, f1
/* 801694D0 001662D0  80 B7 01 14 */	lwz r5, 0x114(r23)
/* 801694D4 001662D4  C0 62 AB 18 */	lfs f3, lbl__1658_2-_SDA2_BASE_(r2)
/* 801694D8 001662D8  4B E9 DE E9 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 801694DC 001662DC  38 00 00 00 */	li r0, 0
/* 801694E0 001662E0  7E 43 93 78 */	mr r3, r18
/* 801694E4 001662E4  90 01 00 08 */	stw r0, 8(r1)
/* 801694E8 001662E8  38 C0 00 00 */	li r6, 0
/* 801694EC 001662EC  38 E0 00 00 */	li r7, 0
/* 801694F0 001662F0  39 00 00 10 */	li r8, 0x10
/* 801694F4 001662F4  90 01 00 0C */	stw r0, 0xc(r1)
/* 801694F8 001662F8  39 20 00 00 */	li r9, 0
/* 801694FC 001662FC  39 40 00 00 */	li r10, 0
/* 80169500 00166300  C0 22 AB 10 */	lfs f1, lbl__1586_2-_SDA2_BASE_(r2)
/* 80169504 00166304  80 98 01 18 */	lwz r4, 0x118(r24)
/* 80169508 00166308  FC 40 08 90 */	fmr f2, f1
/* 8016950C 0016630C  80 B9 01 1C */	lwz r5, 0x11c(r25)
/* 80169510 00166310  C0 62 AB 18 */	lfs f3, lbl__1658_2-_SDA2_BASE_(r2)
/* 80169514 00166314  4B E9 DE AD */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80169518 00166318  38 00 00 00 */	li r0, 0
/* 8016951C 0016631C  7E 43 93 78 */	mr r3, r18
/* 80169520 00166320  90 01 00 08 */	stw r0, 8(r1)
/* 80169524 00166324  38 C0 00 00 */	li r6, 0
/* 80169528 00166328  38 E0 00 00 */	li r7, 0
/* 8016952C 0016632C  39 00 00 00 */	li r8, 0
/* 80169530 00166330  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169534 00166334  39 20 00 00 */	li r9, 0
/* 80169538 00166338  39 40 00 00 */	li r10, 0
/* 8016953C 0016633C  C0 22 AB 10 */	lfs f1, lbl__1586_2-_SDA2_BASE_(r2)
/* 80169540 00166340  80 98 01 18 */	lwz r4, 0x118(r24)
/* 80169544 00166344  FC 40 08 90 */	fmr f2, f1
/* 80169548 00166348  80 BA 01 20 */	lwz r5, 0x120(r26)
/* 8016954C 0016634C  C0 62 AB 18 */	lfs f3, lbl__1658_2-_SDA2_BASE_(r2)
/* 80169550 00166350  4B E9 DE 71 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80169554 00166354  38 00 00 00 */	li r0, 0
/* 80169558 00166358  7E 43 93 78 */	mr r3, r18
/* 8016955C 0016635C  90 01 00 08 */	stw r0, 8(r1)
/* 80169560 00166360  38 C0 00 00 */	li r6, 0
/* 80169564 00166364  38 E0 00 00 */	li r7, 0
/* 80169568 00166368  39 00 00 00 */	li r8, 0
/* 8016956C 0016636C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169570 00166370  39 20 00 00 */	li r9, 0
/* 80169574 00166374  39 40 00 00 */	li r10, 0
/* 80169578 00166378  C0 22 AB 10 */	lfs f1, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016957C 0016637C  80 99 01 1C */	lwz r4, 0x11c(r25)
/* 80169580 00166380  FC 40 08 90 */	fmr f2, f1
/* 80169584 00166384  80 BA 01 20 */	lwz r5, 0x120(r26)
/* 80169588 00166388  C0 62 AB 18 */	lfs f3, lbl__1658_2-_SDA2_BASE_(r2)
/* 8016958C 0016638C  4B E9 DE 35 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80169590 00166390  38 00 00 00 */	li r0, 0
/* 80169594 00166394  7E 43 93 78 */	mr r3, r18
/* 80169598 00166398  90 01 00 08 */	stw r0, 8(r1)
/* 8016959C 0016639C  38 C0 00 00 */	li r6, 0
/* 801695A0 001663A0  38 E0 00 00 */	li r7, 0
/* 801695A4 001663A4  39 00 00 10 */	li r8, 0x10
/* 801695A8 001663A8  90 01 00 0C */	stw r0, 0xc(r1)
/* 801695AC 001663AC  39 20 00 00 */	li r9, 0
/* 801695B0 001663B0  39 40 00 00 */	li r10, 0
/* 801695B4 001663B4  C0 22 AB 10 */	lfs f1, lbl__1586_2-_SDA2_BASE_(r2)
/* 801695B8 001663B8  80 9B 01 24 */	lwz r4, 0x124(r27)
/* 801695BC 001663BC  FC 40 08 90 */	fmr f2, f1
/* 801695C0 001663C0  80 BC 01 28 */	lwz r5, 0x128(r28)
/* 801695C4 001663C4  C0 62 AB 18 */	lfs f3, lbl__1658_2-_SDA2_BASE_(r2)
/* 801695C8 001663C8  4B E9 DD F9 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 801695CC 001663CC  38 00 00 00 */	li r0, 0
/* 801695D0 001663D0  7E 43 93 78 */	mr r3, r18
/* 801695D4 001663D4  90 01 00 08 */	stw r0, 8(r1)
/* 801695D8 001663D8  38 C0 00 00 */	li r6, 0
/* 801695DC 001663DC  38 E0 00 00 */	li r7, 0
/* 801695E0 001663E0  39 00 00 00 */	li r8, 0
/* 801695E4 001663E4  90 01 00 0C */	stw r0, 0xc(r1)
/* 801695E8 001663E8  39 20 00 00 */	li r9, 0
/* 801695EC 001663EC  39 40 00 00 */	li r10, 0
/* 801695F0 001663F0  C0 22 AB 10 */	lfs f1, lbl__1586_2-_SDA2_BASE_(r2)
/* 801695F4 001663F4  80 9C 01 28 */	lwz r4, 0x128(r28)
/* 801695F8 001663F8  FC 40 08 90 */	fmr f2, f1
/* 801695FC 001663FC  80 BD 01 2C */	lwz r5, 0x12c(r29)
/* 80169600 00166400  C0 62 AB 18 */	lfs f3, lbl__1658_2-_SDA2_BASE_(r2)
/* 80169604 00166404  4B E9 DD BD */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80169608 00166408  38 00 00 00 */	li r0, 0
/* 8016960C 0016640C  7E 43 93 78 */	mr r3, r18
/* 80169610 00166410  90 01 00 08 */	stw r0, 8(r1)
/* 80169614 00166414  38 C0 00 00 */	li r6, 0
/* 80169618 00166418  38 E0 00 00 */	li r7, 0
/* 8016961C 0016641C  39 00 00 00 */	li r8, 0
/* 80169620 00166420  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169624 00166424  39 20 00 00 */	li r9, 0
/* 80169628 00166428  39 40 00 00 */	li r10, 0
/* 8016962C 0016642C  C0 22 AB 10 */	lfs f1, lbl__1586_2-_SDA2_BASE_(r2)
/* 80169630 00166430  80 93 00 0C */	lwz r4, 0xc(r19)
/* 80169634 00166434  FC 40 08 90 */	fmr f2, f1
/* 80169638 00166438  80 B5 01 0C */	lwz r5, 0x10c(r21)
/* 8016963C 0016643C  C0 62 AB 18 */	lfs f3, lbl__1658_2-_SDA2_BASE_(r2)
/* 80169640 00166440  4B E9 DD 81 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80169644 00166444  38 00 00 00 */	li r0, 0
/* 80169648 00166448  7E 43 93 78 */	mr r3, r18
/* 8016964C 0016644C  90 01 00 08 */	stw r0, 8(r1)
/* 80169650 00166450  38 C0 00 00 */	li r6, 0
/* 80169654 00166454  38 E0 00 00 */	li r7, 0
/* 80169658 00166458  39 00 00 00 */	li r8, 0
/* 8016965C 0016645C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169660 00166460  39 20 00 00 */	li r9, 0
/* 80169664 00166464  39 40 00 00 */	li r10, 0
/* 80169668 00166468  C0 22 AB 10 */	lfs f1, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016966C 0016646C  80 94 01 08 */	lwz r4, 0x108(r20)
/* 80169670 00166470  FC 40 08 90 */	fmr f2, f1
/* 80169674 00166474  80 B5 01 0C */	lwz r5, 0x10c(r21)
/* 80169678 00166478  C0 62 AB 18 */	lfs f3, lbl__1658_2-_SDA2_BASE_(r2)
/* 8016967C 0016647C  4B E9 DD 45 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80169680 00166480  38 00 00 00 */	li r0, 0
/* 80169684 00166484  7E 43 93 78 */	mr r3, r18
/* 80169688 00166488  90 01 00 08 */	stw r0, 8(r1)
/* 8016968C 0016648C  38 C0 00 00 */	li r6, 0
/* 80169690 00166490  38 E0 00 00 */	li r7, 0
/* 80169694 00166494  39 00 00 00 */	li r8, 0
/* 80169698 00166498  90 01 00 0C */	stw r0, 0xc(r1)
/* 8016969C 0016649C  39 20 00 00 */	li r9, 0
/* 801696A0 001664A0  39 40 00 00 */	li r10, 0
/* 801696A4 001664A4  C0 22 AB 10 */	lfs f1, lbl__1586_2-_SDA2_BASE_(r2)
/* 801696A8 001664A8  80 98 01 18 */	lwz r4, 0x118(r24)
/* 801696AC 001664AC  FC 40 08 90 */	fmr f2, f1
/* 801696B0 001664B0  80 B5 01 0C */	lwz r5, 0x10c(r21)
/* 801696B4 001664B4  C0 62 AB 18 */	lfs f3, lbl__1658_2-_SDA2_BASE_(r2)
/* 801696B8 001664B8  4B E9 DD 09 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 801696BC 001664BC  38 00 00 00 */	li r0, 0
/* 801696C0 001664C0  7E 43 93 78 */	mr r3, r18
/* 801696C4 001664C4  90 01 00 08 */	stw r0, 8(r1)
/* 801696C8 001664C8  38 C0 00 00 */	li r6, 0
/* 801696CC 001664CC  38 E0 00 00 */	li r7, 0
/* 801696D0 001664D0  39 00 00 00 */	li r8, 0
/* 801696D4 001664D4  90 01 00 0C */	stw r0, 0xc(r1)
/* 801696D8 001664D8  39 20 00 00 */	li r9, 0
/* 801696DC 001664DC  39 40 00 00 */	li r10, 0
/* 801696E0 001664E0  C0 22 AB 10 */	lfs f1, lbl__1586_2-_SDA2_BASE_(r2)
/* 801696E4 001664E4  80 99 01 1C */	lwz r4, 0x11c(r25)
/* 801696E8 001664E8  FC 40 08 90 */	fmr f2, f1
/* 801696EC 001664EC  80 B5 01 0C */	lwz r5, 0x10c(r21)
/* 801696F0 001664F0  C0 62 AB 18 */	lfs f3, lbl__1658_2-_SDA2_BASE_(r2)
/* 801696F4 001664F4  4B E9 DC CD */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 801696F8 001664F8  38 00 00 00 */	li r0, 0
/* 801696FC 001664FC  7E 43 93 78 */	mr r3, r18
/* 80169700 00166500  90 01 00 08 */	stw r0, 8(r1)
/* 80169704 00166504  38 C0 00 00 */	li r6, 0
/* 80169708 00166508  38 E0 00 00 */	li r7, 0
/* 8016970C 0016650C  39 00 00 00 */	li r8, 0
/* 80169710 00166510  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169714 00166514  39 20 00 00 */	li r9, 0
/* 80169718 00166518  39 40 00 00 */	li r10, 0
/* 8016971C 0016651C  C0 22 AB 10 */	lfs f1, lbl__1586_2-_SDA2_BASE_(r2)
/* 80169720 00166520  80 9A 01 20 */	lwz r4, 0x120(r26)
/* 80169724 00166524  FC 40 08 90 */	fmr f2, f1
/* 80169728 00166528  80 B5 01 0C */	lwz r5, 0x10c(r21)
/* 8016972C 0016652C  C0 62 AB 18 */	lfs f3, lbl__1658_2-_SDA2_BASE_(r2)
/* 80169730 00166530  4B E9 DC 91 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80169734 00166534  38 00 00 00 */	li r0, 0
/* 80169738 00166538  7E 43 93 78 */	mr r3, r18
/* 8016973C 0016653C  90 01 00 08 */	stw r0, 8(r1)
/* 80169740 00166540  38 C0 00 00 */	li r6, 0
/* 80169744 00166544  38 E0 00 00 */	li r7, 0
/* 80169748 00166548  39 00 00 00 */	li r8, 0
/* 8016974C 0016654C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169750 00166550  39 20 00 00 */	li r9, 0
/* 80169754 00166554  39 40 00 00 */	li r10, 0
/* 80169758 00166558  C0 22 AB 10 */	lfs f1, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016975C 0016655C  80 9B 01 24 */	lwz r4, 0x124(r27)
/* 80169760 00166560  FC 40 08 90 */	fmr f2, f1
/* 80169764 00166564  80 B5 01 0C */	lwz r5, 0x10c(r21)
/* 80169768 00166568  C0 62 AB 18 */	lfs f3, lbl__1658_2-_SDA2_BASE_(r2)
/* 8016976C 0016656C  4B E9 DC 55 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80169770 00166570  38 00 00 00 */	li r0, 0
/* 80169774 00166574  7E 43 93 78 */	mr r3, r18
/* 80169778 00166578  90 01 00 08 */	stw r0, 8(r1)
/* 8016977C 0016657C  38 C0 00 00 */	li r6, 0
/* 80169780 00166580  38 E0 00 00 */	li r7, 0
/* 80169784 00166584  39 00 00 00 */	li r8, 0
/* 80169788 00166588  90 01 00 0C */	stw r0, 0xc(r1)
/* 8016978C 0016658C  39 20 00 00 */	li r9, 0
/* 80169790 00166590  39 40 00 00 */	li r10, 0
/* 80169794 00166594  C0 22 AB 10 */	lfs f1, lbl__1586_2-_SDA2_BASE_(r2)
/* 80169798 00166598  80 9C 01 28 */	lwz r4, 0x128(r28)
/* 8016979C 0016659C  FC 40 08 90 */	fmr f2, f1
/* 801697A0 001665A0  80 B5 01 0C */	lwz r5, 0x10c(r21)
/* 801697A4 001665A4  C0 62 AB 18 */	lfs f3, lbl__1658_2-_SDA2_BASE_(r2)
/* 801697A8 001665A8  4B E9 DC 19 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 801697AC 001665AC  38 00 00 00 */	li r0, 0
/* 801697B0 001665B0  7E 43 93 78 */	mr r3, r18
/* 801697B4 001665B4  90 01 00 08 */	stw r0, 8(r1)
/* 801697B8 001665B8  38 C0 00 00 */	li r6, 0
/* 801697BC 001665BC  38 E0 00 00 */	li r7, 0
/* 801697C0 001665C0  39 00 00 00 */	li r8, 0
/* 801697C4 001665C4  90 01 00 0C */	stw r0, 0xc(r1)
/* 801697C8 001665C8  39 20 00 00 */	li r9, 0
/* 801697CC 001665CC  39 40 00 00 */	li r10, 0
/* 801697D0 001665D0  C0 22 AB 10 */	lfs f1, lbl__1586_2-_SDA2_BASE_(r2)
/* 801697D4 001665D4  80 9D 01 2C */	lwz r4, 0x12c(r29)
/* 801697D8 001665D8  FC 40 08 90 */	fmr f2, f1
/* 801697DC 001665DC  80 B5 01 0C */	lwz r5, 0x10c(r21)
/* 801697E0 001665E0  C0 62 AB 18 */	lfs f3, lbl__1658_2-_SDA2_BASE_(r2)
/* 801697E4 001665E4  4B E9 DB DD */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 801697E8 001665E8  38 00 00 00 */	li r0, 0
/* 801697EC 001665EC  7E 43 93 78 */	mr r3, r18
/* 801697F0 001665F0  90 01 00 08 */	stw r0, 8(r1)
/* 801697F4 001665F4  38 C0 00 00 */	li r6, 0
/* 801697F8 001665F8  38 E0 00 00 */	li r7, 0
/* 801697FC 001665FC  39 00 00 00 */	li r8, 0
/* 80169800 00166600  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169804 00166604  39 20 00 00 */	li r9, 0
/* 80169808 00166608  39 40 00 00 */	li r10, 0
/* 8016980C 0016660C  C0 22 AB 10 */	lfs f1, lbl__1586_2-_SDA2_BASE_(r2)
/* 80169810 00166610  80 9E 01 30 */	lwz r4, 0x130(r30)
/* 80169814 00166614  FC 40 08 90 */	fmr f2, f1
/* 80169818 00166618  80 B5 01 0C */	lwz r5, 0x10c(r21)
/* 8016981C 0016661C  C0 62 AB 18 */	lfs f3, lbl__1658_2-_SDA2_BASE_(r2)
/* 80169820 00166620  4B E9 DB A1 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80169824 00166624  38 00 00 00 */	li r0, 0
/* 80169828 00166628  7E 43 93 78 */	mr r3, r18
/* 8016982C 0016662C  90 01 00 08 */	stw r0, 8(r1)
/* 80169830 00166630  38 C0 00 00 */	li r6, 0
/* 80169834 00166634  38 E0 00 00 */	li r7, 0
/* 80169838 00166638  39 00 00 00 */	li r8, 0
/* 8016983C 0016663C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169840 00166640  39 20 00 00 */	li r9, 0
/* 80169844 00166644  39 40 00 00 */	li r10, 0
/* 80169848 00166648  C0 22 AB 10 */	lfs f1, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016984C 0016664C  80 9F 01 34 */	lwz r4, 0x134(r31)
/* 80169850 00166650  FC 40 08 90 */	fmr f2, f1
/* 80169854 00166654  80 B5 01 0C */	lwz r5, 0x10c(r21)
/* 80169858 00166658  C0 62 AB 18 */	lfs f3, lbl__1658_2-_SDA2_BASE_(r2)
/* 8016985C 0016665C  4B E9 DB 65 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80169860 00166660  7E 43 93 78 */	mr r3, r18
/* 80169864 00166664  BA 21 00 A4 */	lmw r17, 0xa4(r1)
/* 80169868 00166668  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 8016986C 0016666C  7C 08 03 A6 */	mtlr r0
/* 80169870 00166670  38 21 00 E0 */	addi r1, r1, 0xe0
/* 80169874 00166674  4E 80 00 20 */	blr 

.global __ct__13zNPCBPlanktonFi
__ct__13zNPCBPlanktonFi:
/* 80169878 00166678  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016987C 0016667C  7C 08 02 A6 */	mflr r0
/* 80169880 00166680  90 01 00 14 */	stw r0, 0x14(r1)
/* 80169884 00166684  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80169888 00166688  7C 7F 1B 78 */	mr r31, r3
/* 8016988C 0016668C  4B FC CB D9 */	bl __ct__8zNPCBossFi
/* 80169890 00166690  3C 80 80 2A */	lis r4, lbl___vt__13zNPCBPlankton@ha
/* 80169894 00166694  38 7F 02 B4 */	addi r3, r31, 0x2b4
/* 80169898 00166698  38 04 B3 6C */	addi r0, r4, lbl___vt__13zNPCBPlankton@l
/* 8016989C 0016669C  38 80 00 00 */	li r4, 0
/* 801698A0 001666A0  90 1F 01 B8 */	stw r0, 0x1b8(r31)
/* 801698A4 001666A4  38 A0 00 10 */	li r5, 0x10
/* 801698A8 001666A8  4B E9 9B B1 */	bl memset
/* 801698AC 001666AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801698B0 001666B0  7F E3 FB 78 */	mr r3, r31
/* 801698B4 001666B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801698B8 001666B8  7C 08 03 A6 */	mtlr r0
/* 801698BC 001666BC  38 21 00 10 */	addi r1, r1, 0x10
/* 801698C0 001666C0  4E 80 00 20 */	blr 
/* 801698C4 001666C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801698C8 001666C8  7C 08 02 A6 */	mflr r0
/* 801698CC 001666CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801698D0 001666D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801698D4 001666D4  7C 9F 23 78 */	mr r31, r4
/* 801698D8 001666D8  93 C1 00 08 */	stw r30, 8(r1)
/* 801698DC 001666DC  7C 7E 1B 78 */	mr r30, r3
/* 801698E0 001666E0  4B FF F1 CD */	bl zNPCTypeBossPlankton.init_sound__34_unnamed_zNPCTypeBossPlankton_cpp_Fv
/* 801698E4 001666E4  7F C3 F3 78 */	mr r3, r30
/* 801698E8 001666E8  7F E4 FB 78 */	mr r4, r31
/* 801698EC 001666EC  4B F8 57 B1 */	bl Init__10zNPCCommonFP9xEntAsset
/* 801698F0 001666F0  38 00 00 01 */	li r0, 1
/* 801698F4 001666F4  7F C3 F3 78 */	mr r3, r30
/* 801698F8 001666F8  90 1E 01 CC */	stw r0, 0x1cc(r30)
/* 801698FC 001666FC  90 1E 01 C8 */	stw r0, 0x1c8(r30)
/* 80169900 00166700  4B F6 F8 35 */	bl RestoreColFlags__9xNPCBasicFv
/* 80169904 00166704  38 00 00 00 */	li r0, 0
/* 80169908 00166708  7F C3 F3 78 */	mr r3, r30
/* 8016990C 0016670C  90 1E 06 94 */	stw r0, 0x694(r30)
/* 80169910 00166710  98 1E 06 A4 */	stb r0, 0x6a4(r30)
/* 80169914 00166714  48 00 32 81 */	bl init_beam__13zNPCBPlanktonFv
/* 80169918 00166718  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8016991C 0016671C  3C 80 80 17 */	lis r4, lbl_8016DAEC@ha
/* 80169920 00166720  38 04 DA EC */	addi r0, r4, lbl_8016DAEC@l
/* 80169924 00166724  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80169928 00166728  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8016992C 0016672C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80169930 00166730  83 C1 00 08 */	lwz r30, 8(r1)
/* 80169934 00166734  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80169938 00166738  7C 08 03 A6 */	mtlr r0
/* 8016993C 0016673C  38 21 00 10 */	addi r1, r1, 0x10
/* 80169940 00166740  4E 80 00 20 */	blr 
/* 80169944 00166744  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80169948 00166748  7C 08 02 A6 */	mflr r0
/* 8016994C 0016674C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80169950 00166750  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80169954 00166754  7C 7F 1B 78 */	mr r31, r3
/* 80169958 00166758  4B FC CA 95 */	bl Setup__8zNPCBossFv
/* 8016995C 0016675C  7F E3 FB 78 */	mr r3, r31
/* 80169960 00166760  48 00 34 01 */	bl setup_beam__13zNPCBPlanktonFv
/* 80169964 00166764  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 80169968 00166768  38 63 14 64 */	addi r3, r3, lbl__stringBase0_97@l
/* 8016996C 0016676C  38 63 01 94 */	addi r3, r3, 0x194
/* 80169970 00166770  4B EE 28 A5 */	bl xStrHash__FPCc
/* 80169974 00166774  4B F4 B0 C9 */	bl zSceneFindObject__FUi
/* 80169978 00166778  90 7F 06 9C */	stw r3, 0x69c(r31)
/* 8016997C 0016677C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80169980 00166780  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80169984 00166784  7C 08 03 A6 */	mtlr r0
/* 80169988 00166788  38 21 00 10 */	addi r1, r1, 0x10
/* 8016998C 0016678C  4E 80 00 20 */	blr 
/* 80169990 00166790  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80169994 00166794  7C 08 02 A6 */	mflr r0
/* 80169998 00166798  3C 80 80 3C */	lis r4, lbl_globals@ha
/* 8016999C 0016679C  3C A0 80 14 */	lis r5, lbl_8013A750@ha
/* 801699A0 001667A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801699A4 001667A4  38 C4 05 58 */	addi r6, r4, lbl_globals@l
/* 801699A8 001667A8  7C 64 1B 78 */	mr r4, r3
/* 801699AC 001667AC  38 A5 A7 50 */	addi r5, r5, lbl_8013A750@l
/* 801699B0 001667B0  80 66 06 30 */	lwz r3, 0x630(r6)
/* 801699B4 001667B4  38 C0 00 00 */	li r6, 0
/* 801699B8 001667B8  4B FD 14 F1 */	bl xUpdateCull_SetCB__FP14xUpdateCullMgrPvPFPvPv_UiPv
/* 801699BC 001667BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801699C0 001667C0  7C 08 03 A6 */	mtlr r0
/* 801699C4 001667C4  38 21 00 10 */	addi r1, r1, 0x10
/* 801699C8 001667C8  4E 80 00 20 */	blr 
/* 801699CC 001667CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801699D0 001667D0  7C 08 02 A6 */	mflr r0
/* 801699D4 001667D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801699D8 001667D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801699DC 001667DC  7C 7F 1B 78 */	mr r31, r3
/* 801699E0 001667E0  80 63 06 9C */	lwz r3, 0x69c(r3)
/* 801699E4 001667E4  28 03 00 00 */	cmplwi r3, 0
/* 801699E8 001667E8  41 82 00 14 */	beq lbl_801699FC
/* 801699EC 001667EC  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 801699F0 001667F0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801699F4 001667F4  7D 89 03 A6 */	mtctr r12
/* 801699F8 001667F8  4E 80 04 21 */	bctrl 
lbl_801699FC:
/* 801699FC 001667FC  4B FF F1 95 */	bl zNPCTypeBossPlankton.reset_sound__34_unnamed_zNPCTypeBossPlankton_cpp_Fv
/* 80169A00 00166800  7F E3 FB 78 */	mr r3, r31
/* 80169A04 00166804  4B F8 5E A1 */	bl Reset__10zNPCCommonFv
/* 80169A08 00166808  7F E3 FB 78 */	mr r3, r31
/* 80169A0C 0016680C  48 00 34 85 */	bl reset_beam__13zNPCBPlanktonFv
/* 80169A10 00166810  38 7F 02 B4 */	addi r3, r31, 0x2b4
/* 80169A14 00166814  38 80 00 00 */	li r4, 0
/* 80169A18 00166818  38 A0 00 10 */	li r5, 0x10
/* 80169A1C 0016681C  4B E9 9A 3D */	bl memset
/* 80169A20 00166820  7F E3 FB 78 */	mr r3, r31
/* 80169A24 00166824  48 00 61 A5 */	bl face_player__13zNPCBPlanktonFv
/* 80169A28 00166828  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 80169A2C 0016682C  38 7F 04 80 */	addi r3, r31, 0x480
/* 80169A30 00166830  D0 1F 04 68 */	stfs f0, 0x468(r31)
/* 80169A34 00166834  C0 22 AB 10 */	lfs f1, lbl__1586_2-_SDA2_BASE_(r2)
/* 80169A38 00166838  4B EB 2E 41 */	bl __as__5xVec3Ff
/* 80169A3C 0016683C  7F E3 FB 78 */	mr r3, r31
/* 80169A40 00166840  48 00 61 79 */	bl location__13zNPCBPlanktonCFv
/* 80169A44 00166844  7C 64 1B 78 */	mr r4, r3
/* 80169A48 00166848  38 7F 04 74 */	addi r3, r31, 0x474
/* 80169A4C 0016684C  4B EA 18 19 */	bl __as__5xVec3FRC5xVec3
/* 80169A50 00166850  38 60 00 03 */	li r3, 3
/* 80169A54 00166854  38 00 00 00 */	li r0, 0
/* 80169A58 00166858  90 7F 02 BC */	stw r3, 0x2bc(r31)
/* 80169A5C 0016685C  7F E3 FB 78 */	mr r3, r31
/* 80169A60 00166860  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 80169A64 00166864  D0 1F 02 DC */	stfs f0, 0x2dc(r31)
/* 80169A68 00166868  90 1F 06 A0 */	stw r0, 0x6a0(r31)
/* 80169A6C 0016686C  48 00 20 C9 */	bl scan_cronies__13zNPCBPlanktonFv
/* 80169A70 00166870  80 1F 04 B0 */	lwz r0, 0x4b0(r31)
/* 80169A74 00166874  28 00 00 00 */	cmplwi r0, 0
/* 80169A78 00166878  41 82 00 24 */	beq lbl_80169A9C
/* 80169A7C 0016687C  38 00 00 00 */	li r0, 0
/* 80169A80 00166880  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 80169A84 00166884  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 80169A88 00166888  38 63 A1 A0 */	addi r3, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 80169A8C 0016688C  C0 03 00 68 */	lfs f0, 0x68(r3)
/* 80169A90 00166890  D0 1F 02 E4 */	stfs f0, 0x2e4(r31)
/* 80169A94 00166894  90 1F 06 9C */	stw r0, 0x69c(r31)
/* 80169A98 00166898  48 00 00 38 */	b lbl_80169AD0
lbl_80169A9C:
/* 80169A9C 0016689C  38 00 00 01 */	li r0, 1
/* 80169AA0 001668A0  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 80169AA4 001668A4  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 80169AA8 001668A8  38 00 00 00 */	li r0, 0
/* 80169AAC 001668AC  38 63 A1 A0 */	addi r3, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 80169AB0 001668B0  90 1F 06 98 */	stw r0, 0x698(r31)
/* 80169AB4 001668B4  C0 03 00 88 */	lfs f0, 0x88(r3)
/* 80169AB8 001668B8  D0 1F 02 E4 */	stfs f0, 0x2e4(r31)
/* 80169ABC 001668BC  80 7F 06 9C */	lwz r3, 0x69c(r31)
/* 80169AC0 001668C0  28 03 00 00 */	cmplwi r3, 0
/* 80169AC4 001668C4  41 82 00 0C */	beq lbl_80169AD0
/* 80169AC8 001668C8  38 80 00 01 */	li r4, 1
/* 80169ACC 001668CC  4B F9 C3 69 */	bl TalkOnScreen__12zNPCNewsFishFi
lbl_80169AD0:
/* 80169AD0 001668D0  7F E3 FB 78 */	mr r3, r31
/* 80169AD4 001668D4  48 00 3D F5 */	bl reset_speed__13zNPCBPlanktonFv
/* 80169AD8 001668D8  7F E3 FB 78 */	mr r3, r31
/* 80169ADC 001668DC  48 00 1E A5 */	bl refresh_orbit__13zNPCBPlanktonFv
/* 80169AE0 001668E0  7F E3 FB 78 */	mr r3, r31
/* 80169AE4 001668E4  48 00 3D A5 */	bl follow_player__13zNPCBPlanktonFv
/* 80169AE8 001668E8  7F E3 FB 78 */	mr r3, r31
/* 80169AEC 001668EC  48 00 28 D9 */	bl reset_territories__13zNPCBPlanktonFv
/* 80169AF0 001668F0  80 1F 02 C4 */	lwz r0, 0x2c4(r31)
/* 80169AF4 001668F4  2C 00 00 00 */	cmpwi r0, 0
/* 80169AF8 001668F8  40 82 00 1C */	bne lbl_80169B14
/* 80169AFC 001668FC  3C 80 4E 47 */	lis r4, 0x4E47424B@ha
/* 80169B00 00166900  80 7F 02 28 */	lwz r3, 0x228(r31)
/* 80169B04 00166904  38 84 42 4B */	addi r4, r4, 0x4E47424B@l
/* 80169B08 00166908  38 A0 00 01 */	li r5, 1
/* 80169B0C 0016690C  4B FA 3C 25 */	bl GoalSet__7xPsycheFii
/* 80169B10 00166910  48 00 00 20 */	b lbl_80169B30
lbl_80169B14:
/* 80169B14 00166914  7F E3 FB 78 */	mr r3, r31
/* 80169B18 00166918  48 00 33 9D */	bl vanish__13zNPCBPlanktonFv
/* 80169B1C 0016691C  3C 80 4E 47 */	lis r4, 0x4E47424D@ha
/* 80169B20 00166920  80 7F 02 28 */	lwz r3, 0x228(r31)
/* 80169B24 00166924  38 84 42 4D */	addi r4, r4, 0x4E47424D@l
/* 80169B28 00166928  38 A0 00 01 */	li r5, 1
/* 80169B2C 0016692C  4B FA 3C 05 */	bl GoalSet__7xPsycheFii
lbl_80169B30:
/* 80169B30 00166930  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80169B34 00166934  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80169B38 00166938  7C 08 03 A6 */	mtlr r0
/* 80169B3C 0016693C  38 21 00 10 */	addi r1, r1, 0x10
/* 80169B40 00166940  4E 80 00 20 */	blr 
/* 80169B44 00166944  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80169B48 00166948  7C 08 02 A6 */	mflr r0
/* 80169B4C 0016694C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80169B50 00166950  4B F8 5E C1 */	bl Destroy__10zNPCCommonFv
/* 80169B54 00166954  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80169B58 00166958  7C 08 03 A6 */	mtlr r0
/* 80169B5C 0016695C  38 21 00 10 */	addi r1, r1, 0x10
/* 80169B60 00166960  4E 80 00 20 */	blr 
/* 80169B64 00166964  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80169B68 00166968  7C 08 02 A6 */	mflr r0
/* 80169B6C 0016696C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80169B70 00166970  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80169B74 00166974  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 80169B78 00166978  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80169B7C 0016697C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80169B80 00166980  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80169B84 00166984  7C 7E 1B 78 */	mr r30, r3
/* 80169B88 00166988  FF E0 08 90 */	fmr f31, f1
/* 80169B8C 0016698C  88 03 02 B4 */	lbz r0, 0x2b4(r3)
/* 80169B90 00166990  7C 9F 23 78 */	mr r31, r4
/* 80169B94 00166994  28 00 00 00 */	cmplwi r0, 0
/* 80169B98 00166998  40 82 00 30 */	bne lbl_80169BC8
/* 80169B9C 0016699C  38 00 00 01 */	li r0, 1
/* 80169BA0 001669A0  98 1E 02 B4 */	stb r0, 0x2b4(r30)
/* 80169BA4 001669A4  88 1E 06 A4 */	lbz r0, 0x6a4(r30)
/* 80169BA8 001669A8  28 00 00 00 */	cmplwi r0, 0
/* 80169BAC 001669AC  40 82 00 1C */	bne lbl_80169BC8
/* 80169BB0 001669B0  38 80 00 00 */	li r4, 0
/* 80169BB4 001669B4  38 A0 00 00 */	li r5, 0
/* 80169BB8 001669B8  38 C0 00 01 */	li r6, 1
/* 80169BBC 001669BC  48 00 3B C1 */	bl say__13zNPCBPlanktonFiib
/* 80169BC0 001669C0  38 00 00 01 */	li r0, 1
/* 80169BC4 001669C4  98 1E 06 A4 */	stb r0, 0x6a4(r30)
lbl_80169BC8:
/* 80169BC8 001669C8  FC 20 F8 90 */	fmr f1, f31
/* 80169BCC 001669CC  38 7E 03 B8 */	addi r3, r30, 0x3b8
/* 80169BD0 001669D0  48 01 3C FD */	bl update__17xLaserBoltEmitterFf
/* 80169BD4 001669D4  C0 1E 02 C8 */	lfs f0, 0x2c8(r30)
/* 80169BD8 001669D8  EC 00 F8 2A */	fadds f0, f0, f31
/* 80169BDC 001669DC  D0 1E 02 C8 */	stfs f0, 0x2c8(r30)
/* 80169BE0 001669E0  80 1E 02 C4 */	lwz r0, 0x2c4(r30)
/* 80169BE4 001669E4  2C 00 00 01 */	cmpwi r0, 1
/* 80169BE8 001669E8  40 82 00 30 */	bne lbl_80169C18
/* 80169BEC 001669EC  7F C3 F3 78 */	mr r3, r30
/* 80169BF0 001669F0  48 00 3A E5 */	bl player_left_territory__13zNPCBPlanktonCFv
/* 80169BF4 001669F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80169BF8 001669F8  41 82 00 20 */	beq lbl_80169C18
/* 80169BFC 001669FC  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 80169C00 00166A00  3C 60 4E 47 */	lis r3, 0x4E47424D@ha
/* 80169C04 00166A04  38 83 42 4D */	addi r4, r3, 0x4E47424D@l
/* 80169C08 00166A08  38 A0 00 01 */	li r5, 1
/* 80169C0C 00166A0C  D0 1E 02 DC */	stfs f0, 0x2dc(r30)
/* 80169C10 00166A10  80 7E 02 28 */	lwz r3, 0x228(r30)
/* 80169C14 00166A14  4B FA 3B 1D */	bl GoalSet__7xPsycheFii
lbl_80169C18:
/* 80169C18 00166A18  7F C3 F3 78 */	mr r3, r30
/* 80169C1C 00166A1C  4B F8 97 C5 */	bl SomethingWonderful__10zNPCCommonFv
/* 80169C20 00166A20  70 60 00 23 */	andi. r0, r3, 0x23
/* 80169C24 00166A24  40 82 00 14 */	bne lbl_80169C38
/* 80169C28 00166A28  FC 20 F8 90 */	fmr f1, f31
/* 80169C2C 00166A2C  80 7E 02 28 */	lwz r3, 0x228(r30)
/* 80169C30 00166A30  38 80 00 00 */	li r4, 0
/* 80169C34 00166A34  4B FA 44 2D */	bl Timestep__7xPsycheFfPv
lbl_80169C38:
/* 80169C38 00166A38  88 1E 02 B5 */	lbz r0, 0x2b5(r30)
/* 80169C3C 00166A3C  28 00 00 00 */	cmplwi r0, 0
/* 80169C40 00166A40  41 82 00 48 */	beq lbl_80169C88
/* 80169C44 00166A44  3C 80 80 3C */	lis r4, lbl_globals@ha
/* 80169C48 00166A48  7F C3 F3 78 */	mr r3, r30
/* 80169C4C 00166A4C  38 84 05 58 */	addi r4, r4, lbl_globals@l
/* 80169C50 00166A50  80 84 07 04 */	lwz r4, 0x704(r4)
/* 80169C54 00166A54  83 A4 00 4C */	lwz r29, 0x4c(r4)
/* 80169C58 00166A58  48 00 5F 61 */	bl location__13zNPCBPlanktonCFv
/* 80169C5C 00166A5C  7C 64 1B 78 */	mr r4, r3
/* 80169C60 00166A60  C0 7D 00 30 */	lfs f3, 0x30(r29)
/* 80169C64 00166A64  C0 23 00 00 */	lfs f1, 0(r3)
/* 80169C68 00166A68  38 7E 04 60 */	addi r3, r30, 0x460
/* 80169C6C 00166A6C  C0 5D 00 38 */	lfs f2, 0x38(r29)
/* 80169C70 00166A70  C0 04 00 08 */	lfs f0, 8(r4)
/* 80169C74 00166A74  EC 23 08 28 */	fsubs f1, f3, f1
/* 80169C78 00166A78  EC 42 00 28 */	fsubs f2, f2, f0
/* 80169C7C 00166A7C  4B EB C6 9D */	bl assign__5xVec2Fff
/* 80169C80 00166A80  38 7E 04 60 */	addi r3, r30, 0x460
/* 80169C84 00166A84  4B FB 38 99 */	bl normalize__5xVec2Fv
lbl_80169C88:
/* 80169C88 00166A88  FC 20 F8 90 */	fmr f1, f31
/* 80169C8C 00166A8C  7F C3 F3 78 */	mr r3, r30
/* 80169C90 00166A90  48 00 29 5D */	bl update_follow__13zNPCBPlanktonFf
/* 80169C94 00166A94  FC 20 F8 90 */	fmr f1, f31
/* 80169C98 00166A98  7F C3 F3 78 */	mr r3, r30
/* 80169C9C 00166A9C  48 00 23 A9 */	bl update_turn__13zNPCBPlanktonFf
/* 80169CA0 00166AA0  FC 20 F8 90 */	fmr f1, f31
/* 80169CA4 00166AA4  7F C3 F3 78 */	mr r3, r30
/* 80169CA8 00166AA8  48 00 24 A1 */	bl update_move__13zNPCBPlanktonFf
/* 80169CAC 00166AAC  FC 20 F8 90 */	fmr f1, f31
/* 80169CB0 00166AB0  7F C3 F3 78 */	mr r3, r30
/* 80169CB4 00166AB4  48 00 29 35 */	bl update_animation__13zNPCBPlanktonFf
/* 80169CB8 00166AB8  7F C3 F3 78 */	mr r3, r30
/* 80169CBC 00166ABC  48 00 2C A5 */	bl check_player_damage__13zNPCBPlanktonFv
/* 80169CC0 00166AC0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80169CC4 00166AC4  41 82 00 10 */	beq lbl_80169CD4
/* 80169CC8 00166AC8  7F C3 F3 78 */	mr r3, r30
/* 80169CCC 00166ACC  38 80 00 01 */	li r4, 1
/* 80169CD0 00166AD0  4B F0 C7 61 */	bl zEntPlayer_Damage__FP5xBaseUi
lbl_80169CD4:
/* 80169CD4 00166AD4  FC 20 F8 90 */	fmr f1, f31
/* 80169CD8 00166AD8  7F C3 F3 78 */	mr r3, r30
/* 80169CDC 00166ADC  48 00 2B 81 */	bl update_aim_gun__13zNPCBPlanktonFf
/* 80169CE0 00166AE0  FC 20 F8 90 */	fmr f1, f31
/* 80169CE4 00166AE4  7F C3 F3 78 */	mr r3, r30
/* 80169CE8 00166AE8  48 00 27 15 */	bl update_dialog__13zNPCBPlanktonFf
/* 80169CEC 00166AEC  38 7E 03 B8 */	addi r3, r30, 0x3b8
/* 80169CF0 00166AF0  48 00 65 75 */	bl visible__17xLaserBoltEmitterCFv
/* 80169CF4 00166AF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80169CF8 00166AF8  41 82 00 10 */	beq lbl_80169D08
/* 80169CFC 00166AFC  80 1E 02 34 */	lwz r0, 0x234(r30)
/* 80169D00 00166B00  60 00 00 02 */	ori r0, r0, 2
/* 80169D04 00166B04  90 1E 02 34 */	stw r0, 0x234(r30)
lbl_80169D08:
/* 80169D08 00166B08  FC 20 F8 90 */	fmr f1, f31
/* 80169D0C 00166B0C  7F C3 F3 78 */	mr r3, r30
/* 80169D10 00166B10  7F E4 FB 78 */	mr r4, r31
/* 80169D14 00166B14  4B F8 63 DD */	bl Process__10zNPCCommonFP6xScenef
/* 80169D18 00166B18  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 80169D1C 00166B1C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80169D20 00166B20  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80169D24 00166B24  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80169D28 00166B28  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80169D2C 00166B2C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80169D30 00166B30  7C 08 03 A6 */	mtlr r0
/* 80169D34 00166B34  38 21 00 30 */	addi r1, r1, 0x30
/* 80169D38 00166B38  4E 80 00 20 */	blr 
/* 80169D3C 00166B3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80169D40 00166B40  7C 08 02 A6 */	mflr r0
/* 80169D44 00166B44  90 01 00 14 */	stw r0, 0x14(r1)
/* 80169D48 00166B48  38 00 00 00 */	li r0, 0
/* 80169D4C 00166B4C  90 09 00 00 */	stw r0, 0(r9)
/* 80169D50 00166B50  4B F8 66 81 */	bl SysEvent__10zNPCCommonFP5xBaseP5xBaseUiPCfP5xBasePi
/* 80169D54 00166B54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80169D58 00166B58  7C 08 03 A6 */	mtlr r0
/* 80169D5C 00166B5C  38 21 00 10 */	addi r1, r1, 0x10
/* 80169D60 00166B60  4E 80 00 20 */	blr 
/* 80169D64 00166B64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80169D68 00166B68  7C 08 02 A6 */	mflr r0
/* 80169D6C 00166B6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80169D70 00166B70  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80169D74 00166B74  7C 7F 1B 78 */	mr r31, r3
/* 80169D78 00166B78  4B F8 A9 C5 */	bl Render__9xNPCBasicFv
/* 80169D7C 00166B7C  7F E3 FB 78 */	mr r3, r31
/* 80169D80 00166B80  48 00 5E 55 */	bl render_debug__13zNPCBPlanktonFv
/* 80169D84 00166B84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80169D88 00166B88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80169D8C 00166B8C  7C 08 03 A6 */	mtlr r0
/* 80169D90 00166B90  38 21 00 10 */	addi r1, r1, 0x10
/* 80169D94 00166B94  4E 80 00 20 */	blr 
/* 80169D98 00166B98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80169D9C 00166B9C  7C 08 02 A6 */	mflr r0
/* 80169DA0 00166BA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80169DA4 00166BA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80169DA8 00166BA8  7C 7F 1B 78 */	mr r31, r3
/* 80169DAC 00166BAC  38 7F 03 B8 */	addi r3, r31, 0x3b8
/* 80169DB0 00166BB0  48 00 64 B5 */	bl visible__17xLaserBoltEmitterCFv
/* 80169DB4 00166BB4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80169DB8 00166BB8  41 82 00 24 */	beq lbl_80169DDC
/* 80169DBC 00166BBC  38 60 00 0A */	li r3, 0xa
/* 80169DC0 00166BC0  38 80 00 05 */	li r4, 5
/* 80169DC4 00166BC4  48 0C 5A 19 */	bl RwRenderStateSet
/* 80169DC8 00166BC8  38 60 00 0B */	li r3, 0xb
/* 80169DCC 00166BCC  38 80 00 02 */	li r4, 2
/* 80169DD0 00166BD0  48 0C 5A 0D */	bl RwRenderStateSet
/* 80169DD4 00166BD4  38 7F 03 B8 */	addi r3, r31, 0x3b8
/* 80169DD8 00166BD8  48 01 3D 8D */	bl render__17xLaserBoltEmitterFv
lbl_80169DDC:
/* 80169DDC 00166BDC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80169DE0 00166BE0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80169DE4 00166BE4  7C 08 03 A6 */	mtlr r0
/* 80169DE8 00166BE8  38 21 00 10 */	addi r1, r1, 0x10
/* 80169DEC 00166BEC  4E 80 00 20 */	blr 
/* 80169DF0 00166BF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80169DF4 00166BF4  7C 08 02 A6 */	mflr r0
/* 80169DF8 00166BF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80169DFC 00166BFC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80169E00 00166C00  7C 7F 1B 78 */	mr r31, r3
/* 80169E04 00166C04  4B F8 76 2D */	bl ParseINI__10zNPCCommonFv
/* 80169E08 00166C08  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 80169E0C 00166C0C  80 9F 02 44 */	lwz r4, 0x244(r31)
/* 80169E10 00166C10  80 BF 02 48 */	lwz r5, 0x248(r31)
/* 80169E14 00166C14  38 63 A1 A0 */	addi r3, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 80169E18 00166C18  48 00 00 19 */	bl zNPCTypeBossPlankton.load__Q234_unnamed_zNPCTypeBossPlankton_cpp_11tweak_groupFP16xModelAssetParamUi
/* 80169E1C 00166C1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80169E20 00166C20  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80169E24 00166C24  7C 08 03 A6 */	mtlr r0
/* 80169E28 00166C28  38 21 00 10 */	addi r1, r1, 0x10
/* 80169E2C 00166C2C  4E 80 00 20 */	blr 

.global zNPCTypeBossPlankton.load__Q234_unnamed_zNPCTypeBossPlankton_cpp_11tweak_groupFP16xModelAssetParamUi
zNPCTypeBossPlankton.load__Q234_unnamed_zNPCTypeBossPlankton_cpp_11tweak_groupFP16xModelAssetParamUi:
/* 80169E30 00166C30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80169E34 00166C34  7C 08 02 A6 */	mflr r0
/* 80169E38 00166C38  7C A6 2B 78 */	mr r6, r5
/* 80169E3C 00166C3C  7C 85 23 78 */	mr r5, r4
/* 80169E40 00166C40  90 01 00 14 */	stw r0, 0x14(r1)
/* 80169E44 00166C44  38 80 00 01 */	li r4, 1
/* 80169E48 00166C48  38 E0 00 00 */	li r7, 0
/* 80169E4C 00166C4C  48 00 00 15 */	bl zNPCTypeBossPlankton.register_tweaks__Q234_unnamed_zNPCTypeBossPlankton_cpp_11tweak_groupFbP16xModelAssetParamUiPCc
/* 80169E50 00166C50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80169E54 00166C54  7C 08 03 A6 */	mtlr r0
/* 80169E58 00166C58  38 21 00 10 */	addi r1, r1, 0x10
/* 80169E5C 00166C5C  4E 80 00 20 */	blr 

.global zNPCTypeBossPlankton.register_tweaks__Q234_unnamed_zNPCTypeBossPlankton_cpp_11tweak_groupFbP16xModelAssetParamUiPCc
zNPCTypeBossPlankton.register_tweaks__Q234_unnamed_zNPCTypeBossPlankton_cpp_11tweak_groupFbP16xModelAssetParamUiPCc:
/* 80169E60 00166C60  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80169E64 00166C64  7C 08 02 A6 */	mflr r0
/* 80169E68 00166C68  3C E0 80 27 */	lis r7, lbl_80270004@ha
/* 80169E6C 00166C6C  90 01 00 64 */	stw r0, 0x64(r1)
/* 80169E70 00166C70  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80169E74 00166C74  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 80169E78 00166C78  7C DF 33 78 */	mr r31, r6
/* 80169E7C 00166C7C  93 C1 00 58 */	stw r30, 0x58(r1)
/* 80169E80 00166C80  7C BE 2B 78 */	mr r30, r5
/* 80169E84 00166C84  93 A1 00 54 */	stw r29, 0x54(r1)
/* 80169E88 00166C88  7C 9D 23 78 */	mr r29, r4
/* 80169E8C 00166C8C  93 81 00 50 */	stw r28, 0x50(r1)
/* 80169E90 00166C90  7C 7C 1B 78 */	mr r28, r3
/* 80169E94 00166C94  84 87 12 DC */	lwzu r4, 0x12dc(r7)
/* 80169E98 00166C98  80 67 00 04 */	lwz r3, lbl_80270004@l(r7)
/* 80169E9C 00166C9C  80 07 00 08 */	lwz r0, 8(r7)
/* 80169EA0 00166CA0  90 81 00 38 */	stw r4, 0x38(r1)
/* 80169EA4 00166CA4  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80169EA8 00166CA8  90 01 00 40 */	stw r0, 0x40(r1)
/* 80169EAC 00166CAC  41 82 00 34 */	beq lbl_80169EE0
/* 80169EB0 00166CB0  C0 02 AB 2C */	lfs f0, lbl__1887-_SDA2_BASE_(r2)
/* 80169EB4 00166CB4  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 80169EB8 00166CB8  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 80169EBC 00166CBC  7F C4 F3 78 */	mr r4, r30
/* 80169EC0 00166CC0  D0 1C 00 18 */	stfs f0, 0x18(r28)
/* 80169EC4 00166CC4  7F E5 FB 78 */	mr r5, r31
/* 80169EC8 00166CC8  38 7C 00 18 */	addi r3, r28, 0x18
/* 80169ECC 00166CCC  38 C6 01 A3 */	addi r6, r6, 0x1a3
/* 80169ED0 00166CD0  C0 22 AB 30 */	lfs f1, lbl__1888_1-_SDA2_BASE_(r2)
/* 80169ED4 00166CD4  C0 42 AB 34 */	lfs f2, lbl__1889_1-_SDA2_BASE_(r2)
/* 80169ED8 00166CD8  C0 62 AB 38 */	lfs f3, lbl__1890_1-_SDA2_BASE_(r2)
/* 80169EDC 00166CDC  48 00 64 F9 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_80169EE0:
/* 80169EE0 00166CE0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 80169EE4 00166CE4  41 82 00 34 */	beq lbl_80169F18
/* 80169EE8 00166CE8  C0 02 AB 3C */	lfs f0, lbl__1891-_SDA2_BASE_(r2)
/* 80169EEC 00166CEC  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 80169EF0 00166CF0  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 80169EF4 00166CF4  7F C4 F3 78 */	mr r4, r30
/* 80169EF8 00166CF8  D0 1C 00 1C */	stfs f0, 0x1c(r28)
/* 80169EFC 00166CFC  7F E5 FB 78 */	mr r5, r31
/* 80169F00 00166D00  38 7C 00 1C */	addi r3, r28, 0x1c
/* 80169F04 00166D04  38 C6 01 AE */	addi r6, r6, 0x1ae
/* 80169F08 00166D08  C0 22 AB 30 */	lfs f1, lbl__1888_1-_SDA2_BASE_(r2)
/* 80169F0C 00166D0C  C0 42 AB 34 */	lfs f2, lbl__1889_1-_SDA2_BASE_(r2)
/* 80169F10 00166D10  C0 62 AB 38 */	lfs f3, lbl__1890_1-_SDA2_BASE_(r2)
/* 80169F14 00166D14  48 00 64 C1 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_80169F18:
/* 80169F18 00166D18  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 80169F1C 00166D1C  41 82 00 34 */	beq lbl_80169F50
/* 80169F20 00166D20  C0 02 AB 40 */	lfs f0, lbl__1892-_SDA2_BASE_(r2)
/* 80169F24 00166D24  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 80169F28 00166D28  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 80169F2C 00166D2C  7F C4 F3 78 */	mr r4, r30
/* 80169F30 00166D30  D0 1C 00 20 */	stfs f0, 0x20(r28)
/* 80169F34 00166D34  7F E5 FB 78 */	mr r5, r31
/* 80169F38 00166D38  38 7C 00 20 */	addi r3, r28, 0x20
/* 80169F3C 00166D3C  38 C6 01 BB */	addi r6, r6, 0x1bb
/* 80169F40 00166D40  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 80169F44 00166D44  C0 42 AB 44 */	lfs f2, lbl__1893-_SDA2_BASE_(r2)
/* 80169F48 00166D48  C0 62 AB 38 */	lfs f3, lbl__1890_1-_SDA2_BASE_(r2)
/* 80169F4C 00166D4C  48 00 64 89 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_80169F50:
/* 80169F50 00166D50  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 80169F54 00166D54  41 82 00 34 */	beq lbl_80169F88
/* 80169F58 00166D58  C0 02 AB 48 */	lfs f0, lbl__1894-_SDA2_BASE_(r2)
/* 80169F5C 00166D5C  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 80169F60 00166D60  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 80169F64 00166D64  7F C4 F3 78 */	mr r4, r30
/* 80169F68 00166D68  D0 1C 00 24 */	stfs f0, 0x24(r28)
/* 80169F6C 00166D6C  7F E5 FB 78 */	mr r5, r31
/* 80169F70 00166D70  38 7C 00 24 */	addi r3, r28, 0x24
/* 80169F74 00166D74  38 C6 01 C4 */	addi r6, r6, 0x1c4
/* 80169F78 00166D78  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 80169F7C 00166D7C  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 80169F80 00166D80  C0 62 AB 38 */	lfs f3, lbl__1890_1-_SDA2_BASE_(r2)
/* 80169F84 00166D84  48 00 64 51 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_80169F88:
/* 80169F88 00166D88  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 80169F8C 00166D8C  41 82 00 34 */	beq lbl_80169FC0
/* 80169F90 00166D90  C0 02 AB 4C */	lfs f0, lbl__1895_1-_SDA2_BASE_(r2)
/* 80169F94 00166D94  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 80169F98 00166D98  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 80169F9C 00166D9C  7F C4 F3 78 */	mr r4, r30
/* 80169FA0 00166DA0  D0 1C 00 28 */	stfs f0, 0x28(r28)
/* 80169FA4 00166DA4  7F E5 FB 78 */	mr r5, r31
/* 80169FA8 00166DA8  38 7C 00 28 */	addi r3, r28, 0x28
/* 80169FAC 00166DAC  38 C6 01 D2 */	addi r6, r6, 0x1d2
/* 80169FB0 00166DB0  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 80169FB4 00166DB4  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 80169FB8 00166DB8  C0 62 AB 24 */	lfs f3, lbl__1754-_SDA2_BASE_(r2)
/* 80169FBC 00166DBC  48 00 64 19 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_80169FC0:
/* 80169FC0 00166DC0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 80169FC4 00166DC4  41 82 00 34 */	beq lbl_80169FF8
/* 80169FC8 00166DC8  C0 02 AB 4C */	lfs f0, lbl__1895_1-_SDA2_BASE_(r2)
/* 80169FCC 00166DCC  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 80169FD0 00166DD0  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 80169FD4 00166DD4  7F C4 F3 78 */	mr r4, r30
/* 80169FD8 00166DD8  D0 1C 00 2C */	stfs f0, 0x2c(r28)
/* 80169FDC 00166DDC  7F E5 FB 78 */	mr r5, r31
/* 80169FE0 00166DE0  38 7C 00 2C */	addi r3, r28, 0x2c
/* 80169FE4 00166DE4  38 C6 01 DA */	addi r6, r6, 0x1da
/* 80169FE8 00166DE8  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 80169FEC 00166DEC  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 80169FF0 00166DF0  C0 62 AB 24 */	lfs f3, lbl__1754-_SDA2_BASE_(r2)
/* 80169FF4 00166DF4  48 00 63 E1 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_80169FF8:
/* 80169FF8 00166DF8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 80169FFC 00166DFC  41 82 00 34 */	beq lbl_8016A030
/* 8016A000 00166E00  C0 02 AB 20 */	lfs f0, lbl__1753-_SDA2_BASE_(r2)
/* 8016A004 00166E04  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A008 00166E08  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A00C 00166E0C  7F C4 F3 78 */	mr r4, r30
/* 8016A010 00166E10  D0 1C 00 30 */	stfs f0, 0x30(r28)
/* 8016A014 00166E14  7F E5 FB 78 */	mr r5, r31
/* 8016A018 00166E18  38 7C 00 30 */	addi r3, r28, 0x30
/* 8016A01C 00166E1C  38 C6 01 E7 */	addi r6, r6, 0x1e7
/* 8016A020 00166E20  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A024 00166E24  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016A028 00166E28  C0 62 AB 50 */	lfs f3, lbl__1896-_SDA2_BASE_(r2)
/* 8016A02C 00166E2C  48 00 63 A9 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A030:
/* 8016A030 00166E30  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A034 00166E34  41 82 00 34 */	beq lbl_8016A068
/* 8016A038 00166E38  C0 02 AB 20 */	lfs f0, lbl__1753-_SDA2_BASE_(r2)
/* 8016A03C 00166E3C  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A040 00166E40  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A044 00166E44  7F C4 F3 78 */	mr r4, r30
/* 8016A048 00166E48  D0 1C 00 34 */	stfs f0, 0x34(r28)
/* 8016A04C 00166E4C  7F E5 FB 78 */	mr r5, r31
/* 8016A050 00166E50  38 7C 00 34 */	addi r3, r28, 0x34
/* 8016A054 00166E54  38 C6 01 F1 */	addi r6, r6, 0x1f1
/* 8016A058 00166E58  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A05C 00166E5C  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016A060 00166E60  C0 62 AB 54 */	lfs f3, lbl__1897-_SDA2_BASE_(r2)
/* 8016A064 00166E64  48 00 63 71 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A068:
/* 8016A068 00166E68  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A06C 00166E6C  41 82 00 34 */	beq lbl_8016A0A0
/* 8016A070 00166E70  C0 02 AB 58 */	lfs f0, lbl__1898-_SDA2_BASE_(r2)
/* 8016A074 00166E74  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A078 00166E78  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A07C 00166E7C  7F C4 F3 78 */	mr r4, r30
/* 8016A080 00166E80  D0 1C 00 48 */	stfs f0, 0x48(r28)
/* 8016A084 00166E84  7F E5 FB 78 */	mr r5, r31
/* 8016A088 00166E88  38 7C 00 48 */	addi r3, r28, 0x48
/* 8016A08C 00166E8C  38 C6 02 00 */	addi r6, r6, 0x200
/* 8016A090 00166E90  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A094 00166E94  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016A098 00166E98  C0 62 AB 54 */	lfs f3, lbl__1897-_SDA2_BASE_(r2)
/* 8016A09C 00166E9C  48 00 63 39 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A0A0:
/* 8016A0A0 00166EA0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A0A4 00166EA4  41 82 00 34 */	beq lbl_8016A0D8
/* 8016A0A8 00166EA8  C0 02 AB 20 */	lfs f0, lbl__1753-_SDA2_BASE_(r2)
/* 8016A0AC 00166EAC  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A0B0 00166EB0  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A0B4 00166EB4  7F C4 F3 78 */	mr r4, r30
/* 8016A0B8 00166EB8  D0 1C 00 4C */	stfs f0, 0x4c(r28)
/* 8016A0BC 00166EBC  7F E5 FB 78 */	mr r5, r31
/* 8016A0C0 00166EC0  38 7C 00 4C */	addi r3, r28, 0x4c
/* 8016A0C4 00166EC4  38 C6 02 0F */	addi r6, r6, 0x20f
/* 8016A0C8 00166EC8  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A0CC 00166ECC  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016A0D0 00166ED0  C0 62 AB 54 */	lfs f3, lbl__1897-_SDA2_BASE_(r2)
/* 8016A0D4 00166ED4  48 00 63 01 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A0D8:
/* 8016A0D8 00166ED8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A0DC 00166EDC  41 82 00 34 */	beq lbl_8016A110
/* 8016A0E0 00166EE0  C0 02 AB 5C */	lfs f0, lbl__1899-_SDA2_BASE_(r2)
/* 8016A0E4 00166EE4  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A0E8 00166EE8  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A0EC 00166EEC  7F C4 F3 78 */	mr r4, r30
/* 8016A0F0 00166EF0  D0 1C 00 38 */	stfs f0, 0x38(r28)
/* 8016A0F4 00166EF4  7F E5 FB 78 */	mr r5, r31
/* 8016A0F8 00166EF8  38 7C 00 38 */	addi r3, r28, 0x38
/* 8016A0FC 00166EFC  38 C6 02 1F */	addi r6, r6, 0x21f
/* 8016A100 00166F00  C0 22 AB 30 */	lfs f1, lbl__1888_1-_SDA2_BASE_(r2)
/* 8016A104 00166F04  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016A108 00166F08  C0 62 AB 3C */	lfs f3, lbl__1891-_SDA2_BASE_(r2)
/* 8016A10C 00166F0C  48 00 62 C9 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A110:
/* 8016A110 00166F10  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A114 00166F14  41 82 00 34 */	beq lbl_8016A148
/* 8016A118 00166F18  C0 02 AB 60 */	lfs f0, lbl__1900-_SDA2_BASE_(r2)
/* 8016A11C 00166F1C  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A120 00166F20  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A124 00166F24  7F C4 F3 78 */	mr r4, r30
/* 8016A128 00166F28  D0 1C 00 3C */	stfs f0, 0x3c(r28)
/* 8016A12C 00166F2C  7F E5 FB 78 */	mr r5, r31
/* 8016A130 00166F30  38 7C 00 3C */	addi r3, r28, 0x3c
/* 8016A134 00166F34  38 C6 02 2E */	addi r6, r6, 0x22e
/* 8016A138 00166F38  C0 22 AB 30 */	lfs f1, lbl__1888_1-_SDA2_BASE_(r2)
/* 8016A13C 00166F3C  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016A140 00166F40  C0 62 AB 3C */	lfs f3, lbl__1891-_SDA2_BASE_(r2)
/* 8016A144 00166F44  48 00 62 91 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A148:
/* 8016A148 00166F48  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A14C 00166F4C  41 82 00 34 */	beq lbl_8016A180
/* 8016A150 00166F50  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016A154 00166F54  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A158 00166F58  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A15C 00166F5C  7F C4 F3 78 */	mr r4, r30
/* 8016A160 00166F60  D0 1C 00 40 */	stfs f0, 0x40(r28)
/* 8016A164 00166F64  7F E5 FB 78 */	mr r5, r31
/* 8016A168 00166F68  38 7C 00 40 */	addi r3, r28, 0x40
/* 8016A16C 00166F6C  38 C6 02 3D */	addi r6, r6, 0x23d
/* 8016A170 00166F70  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A174 00166F74  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016A178 00166F78  C0 62 AB 50 */	lfs f3, lbl__1896-_SDA2_BASE_(r2)
/* 8016A17C 00166F7C  48 00 62 59 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A180:
/* 8016A180 00166F80  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A184 00166F84  41 82 00 34 */	beq lbl_8016A1B8
/* 8016A188 00166F88  C0 02 AB 64 */	lfs f0, lbl__1901-_SDA2_BASE_(r2)
/* 8016A18C 00166F8C  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A190 00166F90  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A194 00166F94  7F C4 F3 78 */	mr r4, r30
/* 8016A198 00166F98  D0 1C 00 44 */	stfs f0, 0x44(r28)
/* 8016A19C 00166F9C  7F E5 FB 78 */	mr r5, r31
/* 8016A1A0 00166FA0  38 7C 00 44 */	addi r3, r28, 0x44
/* 8016A1A4 00166FA4  38 C6 02 4E */	addi r6, r6, 0x24e
/* 8016A1A8 00166FA8  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A1AC 00166FAC  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016A1B0 00166FB0  C0 62 AB 50 */	lfs f3, lbl__1896-_SDA2_BASE_(r2)
/* 8016A1B4 00166FB4  48 00 62 21 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A1B8:
/* 8016A1B8 00166FB8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A1BC 00166FBC  41 82 00 4C */	beq lbl_8016A208
/* 8016A1C0 00166FC0  C0 42 AB 68 */	lfs f2, lbl__1902-_SDA2_BASE_(r2)
/* 8016A1C4 00166FC4  38 61 00 2C */	addi r3, r1, 0x2c
/* 8016A1C8 00166FC8  C0 22 AB 50 */	lfs f1, lbl__1896-_SDA2_BASE_(r2)
/* 8016A1CC 00166FCC  FC 60 10 90 */	fmr f3, f2
/* 8016A1D0 00166FD0  4B EF 5D B9 */	bl create__5xVec3Ffff
/* 8016A1D4 00166FD4  38 7C 00 50 */	addi r3, r28, 0x50
/* 8016A1D8 00166FD8  38 81 00 2C */	addi r4, r1, 0x2c
/* 8016A1DC 00166FDC  4B EA 10 89 */	bl __as__5xVec3FRC5xVec3
/* 8016A1E0 00166FE0  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A1E4 00166FE4  7F C7 F3 78 */	mr r7, r30
/* 8016A1E8 00166FE8  38 A3 14 64 */	addi r5, r3, lbl__stringBase0_97@l
/* 8016A1EC 00166FEC  7F E8 FB 78 */	mr r8, r31
/* 8016A1F0 00166FF0  38 7C 00 50 */	addi r3, r28, 0x50
/* 8016A1F4 00166FF4  38 80 00 00 */	li r4, 0
/* 8016A1F8 00166FF8  39 25 02 5F */	addi r9, r5, 0x25f
/* 8016A1FC 00166FFC  38 A0 00 00 */	li r5, 0
/* 8016A200 00167000  38 C0 00 00 */	li r6, 0
/* 8016A204 00167004  48 00 61 81 */	bl zNPCTypeBossPlankton.load_param_5xVec3_i___10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc
lbl_8016A208:
/* 8016A208 00167008  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A20C 0016700C  41 82 00 4C */	beq lbl_8016A258
/* 8016A210 00167010  C0 22 AB 68 */	lfs f1, lbl__1902-_SDA2_BASE_(r2)
/* 8016A214 00167014  38 61 00 20 */	addi r3, r1, 0x20
/* 8016A218 00167018  C0 42 AB 50 */	lfs f2, lbl__1896-_SDA2_BASE_(r2)
/* 8016A21C 0016701C  FC 60 08 90 */	fmr f3, f1
/* 8016A220 00167020  4B EF 5D 69 */	bl create__5xVec3Ffff
/* 8016A224 00167024  38 7C 00 5C */	addi r3, r28, 0x5c
/* 8016A228 00167028  38 81 00 20 */	addi r4, r1, 0x20
/* 8016A22C 0016702C  4B EA 10 39 */	bl __as__5xVec3FRC5xVec3
/* 8016A230 00167030  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A234 00167034  7F C7 F3 78 */	mr r7, r30
/* 8016A238 00167038  38 A3 14 64 */	addi r5, r3, lbl__stringBase0_97@l
/* 8016A23C 0016703C  7F E8 FB 78 */	mr r8, r31
/* 8016A240 00167040  38 7C 00 5C */	addi r3, r28, 0x5c
/* 8016A244 00167044  38 80 00 00 */	li r4, 0
/* 8016A248 00167048  39 25 02 70 */	addi r9, r5, 0x270
/* 8016A24C 0016704C  38 A0 00 00 */	li r5, 0
/* 8016A250 00167050  38 C0 00 00 */	li r6, 0
/* 8016A254 00167054  48 00 61 31 */	bl zNPCTypeBossPlankton.load_param_5xVec3_i___10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc
lbl_8016A258:
/* 8016A258 00167058  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A25C 0016705C  41 82 00 34 */	beq lbl_8016A290
/* 8016A260 00167060  C0 02 AB 0C */	lfs f0, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A264 00167064  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A268 00167068  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A26C 0016706C  7F C4 F3 78 */	mr r4, r30
/* 8016A270 00167070  D0 1C 00 68 */	stfs f0, 0x68(r28)
/* 8016A274 00167074  7F E5 FB 78 */	mr r5, r31
/* 8016A278 00167078  38 7C 00 68 */	addi r3, r28, 0x68
/* 8016A27C 0016707C  38 C6 02 83 */	addi r6, r6, 0x283
/* 8016A280 00167080  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A284 00167084  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016A288 00167088  C0 62 AB 54 */	lfs f3, lbl__1897-_SDA2_BASE_(r2)
/* 8016A28C 0016708C  48 00 61 49 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A290:
/* 8016A290 00167090  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A294 00167094  41 82 00 34 */	beq lbl_8016A2C8
/* 8016A298 00167098  C0 02 AB 6C */	lfs f0, lbl__1903_1-_SDA2_BASE_(r2)
/* 8016A29C 0016709C  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A2A0 001670A0  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A2A4 001670A4  7F C4 F3 78 */	mr r4, r30
/* 8016A2A8 001670A8  D0 1C 00 6C */	stfs f0, 0x6c(r28)
/* 8016A2AC 001670AC  7F E5 FB 78 */	mr r5, r31
/* 8016A2B0 001670B0  38 7C 00 6C */	addi r3, r28, 0x6c
/* 8016A2B4 001670B4  38 C6 02 9C */	addi r6, r6, 0x29c
/* 8016A2B8 001670B8  C0 22 AB 30 */	lfs f1, lbl__1888_1-_SDA2_BASE_(r2)
/* 8016A2BC 001670BC  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016A2C0 001670C0  C0 62 AB 70 */	lfs f3, lbl__1904_1-_SDA2_BASE_(r2)
/* 8016A2C4 001670C4  48 00 61 11 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A2C8:
/* 8016A2C8 001670C8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A2CC 001670CC  41 82 00 4C */	beq lbl_8016A318
/* 8016A2D0 001670D0  C0 22 AB 50 */	lfs f1, lbl__1896-_SDA2_BASE_(r2)
/* 8016A2D4 001670D4  38 61 00 14 */	addi r3, r1, 0x14
/* 8016A2D8 001670D8  C0 42 AB 4C */	lfs f2, lbl__1895_1-_SDA2_BASE_(r2)
/* 8016A2DC 001670DC  FC 60 08 90 */	fmr f3, f1
/* 8016A2E0 001670E0  4B EF 5C A9 */	bl create__5xVec3Ffff
/* 8016A2E4 001670E4  38 7C 00 70 */	addi r3, r28, 0x70
/* 8016A2E8 001670E8  38 81 00 14 */	addi r4, r1, 0x14
/* 8016A2EC 001670EC  4B EA 0F 79 */	bl __as__5xVec3FRC5xVec3
/* 8016A2F0 001670F0  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A2F4 001670F4  7F C7 F3 78 */	mr r7, r30
/* 8016A2F8 001670F8  38 A3 14 64 */	addi r5, r3, lbl__stringBase0_97@l
/* 8016A2FC 001670FC  7F E8 FB 78 */	mr r8, r31
/* 8016A300 00167100  38 7C 00 70 */	addi r3, r28, 0x70
/* 8016A304 00167104  38 80 00 00 */	li r4, 0
/* 8016A308 00167108  39 25 02 B6 */	addi r9, r5, 0x2b6
/* 8016A30C 0016710C  38 A0 00 00 */	li r5, 0
/* 8016A310 00167110  38 C0 00 00 */	li r6, 0
/* 8016A314 00167114  48 00 60 71 */	bl zNPCTypeBossPlankton.load_param_5xVec3_i___10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc
lbl_8016A318:
/* 8016A318 00167118  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A31C 0016711C  41 82 00 4C */	beq lbl_8016A368
/* 8016A320 00167120  C0 42 AB 50 */	lfs f2, lbl__1896-_SDA2_BASE_(r2)
/* 8016A324 00167124  38 61 00 08 */	addi r3, r1, 8
/* 8016A328 00167128  C0 22 AB 68 */	lfs f1, lbl__1902-_SDA2_BASE_(r2)
/* 8016A32C 0016712C  FC 60 10 90 */	fmr f3, f2
/* 8016A330 00167130  4B EF 5C 59 */	bl create__5xVec3Ffff
/* 8016A334 00167134  38 7C 00 7C */	addi r3, r28, 0x7c
/* 8016A338 00167138  38 81 00 08 */	addi r4, r1, 8
/* 8016A33C 0016713C  4B EA 0F 29 */	bl __as__5xVec3FRC5xVec3
/* 8016A340 00167140  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A344 00167144  7F C7 F3 78 */	mr r7, r30
/* 8016A348 00167148  38 A3 14 64 */	addi r5, r3, lbl__stringBase0_97@l
/* 8016A34C 0016714C  7F E8 FB 78 */	mr r8, r31
/* 8016A350 00167150  38 7C 00 7C */	addi r3, r28, 0x7c
/* 8016A354 00167154  38 80 00 00 */	li r4, 0
/* 8016A358 00167158  39 25 02 C8 */	addi r9, r5, 0x2c8
/* 8016A35C 0016715C  38 A0 00 00 */	li r5, 0
/* 8016A360 00167160  38 C0 00 00 */	li r6, 0
/* 8016A364 00167164  48 00 60 21 */	bl zNPCTypeBossPlankton.load_param_5xVec3_i___10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc
lbl_8016A368:
/* 8016A368 00167168  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A36C 0016716C  41 82 00 34 */	beq lbl_8016A3A0
/* 8016A370 00167170  C0 02 AB 64 */	lfs f0, lbl__1901-_SDA2_BASE_(r2)
/* 8016A374 00167174  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A378 00167178  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A37C 0016717C  7F C4 F3 78 */	mr r4, r30
/* 8016A380 00167180  D0 1C 00 88 */	stfs f0, 0x88(r28)
/* 8016A384 00167184  7F E5 FB 78 */	mr r5, r31
/* 8016A388 00167188  38 7C 00 88 */	addi r3, r28, 0x88
/* 8016A38C 0016718C  38 C6 02 DC */	addi r6, r6, 0x2dc
/* 8016A390 00167190  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A394 00167194  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016A398 00167198  C0 62 AB 50 */	lfs f3, lbl__1896-_SDA2_BASE_(r2)
/* 8016A39C 0016719C  48 00 60 39 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A3A0:
/* 8016A3A0 001671A0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A3A4 001671A4  41 82 00 34 */	beq lbl_8016A3D8
/* 8016A3A8 001671A8  C0 02 AB 20 */	lfs f0, lbl__1753-_SDA2_BASE_(r2)
/* 8016A3AC 001671AC  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A3B0 001671B0  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A3B4 001671B4  7F C4 F3 78 */	mr r4, r30
/* 8016A3B8 001671B8  D0 1C 00 8C */	stfs f0, 0x8c(r28)
/* 8016A3BC 001671BC  7F E5 FB 78 */	mr r5, r31
/* 8016A3C0 001671C0  38 7C 00 8C */	addi r3, r28, 0x8c
/* 8016A3C4 001671C4  38 C6 02 F6 */	addi r6, r6, 0x2f6
/* 8016A3C8 001671C8  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A3CC 001671CC  C0 42 AB 74 */	lfs f2, lbl__1905_3-_SDA2_BASE_(r2)
/* 8016A3D0 001671D0  C0 62 AB 50 */	lfs f3, lbl__1896-_SDA2_BASE_(r2)
/* 8016A3D4 001671D4  48 00 60 01 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A3D8:
/* 8016A3D8 001671D8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A3DC 001671DC  41 82 00 34 */	beq lbl_8016A410
/* 8016A3E0 001671E0  C0 02 AB 4C */	lfs f0, lbl__1895_1-_SDA2_BASE_(r2)
/* 8016A3E4 001671E4  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A3E8 001671E8  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A3EC 001671EC  7F C4 F3 78 */	mr r4, r30
/* 8016A3F0 001671F0  D0 1C 00 90 */	stfs f0, 0x90(r28)
/* 8016A3F4 001671F4  7F E5 FB 78 */	mr r5, r31
/* 8016A3F8 001671F8  38 7C 00 90 */	addi r3, r28, 0x90
/* 8016A3FC 001671FC  38 C6 03 02 */	addi r6, r6, 0x302
/* 8016A400 00167200  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A404 00167204  C0 62 AB 54 */	lfs f3, lbl__1897-_SDA2_BASE_(r2)
/* 8016A408 00167208  FC 40 08 90 */	fmr f2, f1
/* 8016A40C 0016720C  48 00 5F C9 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A410:
/* 8016A410 00167210  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A414 00167214  41 82 00 34 */	beq lbl_8016A448
/* 8016A418 00167218  C0 02 AB 20 */	lfs f0, lbl__1753-_SDA2_BASE_(r2)
/* 8016A41C 0016721C  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A420 00167220  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A424 00167224  7F C4 F3 78 */	mr r4, r30
/* 8016A428 00167228  D0 1C 00 94 */	stfs f0, 0x94(r28)
/* 8016A42C 0016722C  7F E5 FB 78 */	mr r5, r31
/* 8016A430 00167230  38 7C 00 94 */	addi r3, r28, 0x94
/* 8016A434 00167234  38 C6 03 0E */	addi r6, r6, 0x30e
/* 8016A438 00167238  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A43C 0016723C  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016A440 00167240  C0 62 AB 54 */	lfs f3, lbl__1897-_SDA2_BASE_(r2)
/* 8016A444 00167244  48 00 5F 91 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A448:
/* 8016A448 00167248  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A44C 0016724C  41 82 00 34 */	beq lbl_8016A480
/* 8016A450 00167250  C0 02 AB 20 */	lfs f0, lbl__1753-_SDA2_BASE_(r2)
/* 8016A454 00167254  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A458 00167258  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A45C 0016725C  7F C4 F3 78 */	mr r4, r30
/* 8016A460 00167260  D0 1C 00 98 */	stfs f0, 0x98(r28)
/* 8016A464 00167264  7F E5 FB 78 */	mr r5, r31
/* 8016A468 00167268  38 7C 00 98 */	addi r3, r28, 0x98
/* 8016A46C 0016726C  38 C6 03 21 */	addi r6, r6, 0x321
/* 8016A470 00167270  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A474 00167274  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016A478 00167278  C0 62 AB 54 */	lfs f3, lbl__1897-_SDA2_BASE_(r2)
/* 8016A47C 0016727C  48 00 5F 59 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A480:
/* 8016A480 00167280  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A484 00167284  41 82 00 34 */	beq lbl_8016A4B8
/* 8016A488 00167288  C0 02 AB 78 */	lfs f0, lbl__1906_1-_SDA2_BASE_(r2)
/* 8016A48C 0016728C  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A490 00167290  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A494 00167294  7F C4 F3 78 */	mr r4, r30
/* 8016A498 00167298  D0 1C 00 9C */	stfs f0, 0x9c(r28)
/* 8016A49C 0016729C  7F E5 FB 78 */	mr r5, r31
/* 8016A4A0 001672A0  38 7C 00 9C */	addi r3, r28, 0x9c
/* 8016A4A4 001672A4  38 C6 03 34 */	addi r6, r6, 0x334
/* 8016A4A8 001672A8  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A4AC 001672AC  C0 62 AB 54 */	lfs f3, lbl__1897-_SDA2_BASE_(r2)
/* 8016A4B0 001672B0  FC 40 08 90 */	fmr f2, f1
/* 8016A4B4 001672B4  48 00 5F 21 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A4B8:
/* 8016A4B8 001672B8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A4BC 001672BC  41 82 00 34 */	beq lbl_8016A4F0
/* 8016A4C0 001672C0  C0 02 AB 7C */	lfs f0, lbl__1907-_SDA2_BASE_(r2)
/* 8016A4C4 001672C4  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A4C8 001672C8  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A4CC 001672CC  7F C4 F3 78 */	mr r4, r30
/* 8016A4D0 001672D0  D0 1C 00 A0 */	stfs f0, 0xa0(r28)
/* 8016A4D4 001672D4  7F E5 FB 78 */	mr r5, r31
/* 8016A4D8 001672D8  38 7C 00 A0 */	addi r3, r28, 0xa0
/* 8016A4DC 001672DC  38 C6 03 43 */	addi r6, r6, 0x343
/* 8016A4E0 001672E0  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A4E4 001672E4  C0 42 AB 34 */	lfs f2, lbl__1889_1-_SDA2_BASE_(r2)
/* 8016A4E8 001672E8  C0 62 AB 24 */	lfs f3, lbl__1754-_SDA2_BASE_(r2)
/* 8016A4EC 001672EC  48 00 5E E9 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A4F0:
/* 8016A4F0 001672F0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A4F4 001672F4  41 82 00 34 */	beq lbl_8016A528
/* 8016A4F8 001672F8  C0 02 AB 1C */	lfs f0, lbl__1752-_SDA2_BASE_(r2)
/* 8016A4FC 001672FC  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A500 00167300  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A504 00167304  7F C4 F3 78 */	mr r4, r30
/* 8016A508 00167308  D0 1C 00 A4 */	stfs f0, 0xa4(r28)
/* 8016A50C 0016730C  7F E5 FB 78 */	mr r5, r31
/* 8016A510 00167310  38 7C 00 A4 */	addi r3, r28, 0xa4
/* 8016A514 00167314  38 C6 03 4D */	addi r6, r6, 0x34d
/* 8016A518 00167318  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A51C 0016731C  C0 42 AB 34 */	lfs f2, lbl__1889_1-_SDA2_BASE_(r2)
/* 8016A520 00167320  C0 62 AB 54 */	lfs f3, lbl__1897-_SDA2_BASE_(r2)
/* 8016A524 00167324  48 00 5E B1 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A528:
/* 8016A528 00167328  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A52C 0016732C  41 82 00 34 */	beq lbl_8016A560
/* 8016A530 00167330  C0 02 AB 4C */	lfs f0, lbl__1895_1-_SDA2_BASE_(r2)
/* 8016A534 00167334  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A538 00167338  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A53C 0016733C  7F C4 F3 78 */	mr r4, r30
/* 8016A540 00167340  D0 1C 00 A8 */	stfs f0, 0xa8(r28)
/* 8016A544 00167344  7F E5 FB 78 */	mr r5, r31
/* 8016A548 00167348  38 7C 00 A8 */	addi r3, r28, 0xa8
/* 8016A54C 0016734C  38 C6 03 5F */	addi r6, r6, 0x35f
/* 8016A550 00167350  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A554 00167354  C0 42 AB 34 */	lfs f2, lbl__1889_1-_SDA2_BASE_(r2)
/* 8016A558 00167358  C0 62 AB 54 */	lfs f3, lbl__1897-_SDA2_BASE_(r2)
/* 8016A55C 0016735C  48 00 5E 79 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A560:
/* 8016A560 00167360  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A564 00167364  41 82 00 34 */	beq lbl_8016A598
/* 8016A568 00167368  C0 02 AB 80 */	lfs f0, lbl__1908_1-_SDA2_BASE_(r2)
/* 8016A56C 0016736C  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A570 00167370  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A574 00167374  7F C4 F3 78 */	mr r4, r30
/* 8016A578 00167378  D0 1C 00 AC */	stfs f0, 0xac(r28)
/* 8016A57C 0016737C  7F E5 FB 78 */	mr r5, r31
/* 8016A580 00167380  38 7C 00 AC */	addi r3, r28, 0xac
/* 8016A584 00167384  38 C6 03 6E */	addi r6, r6, 0x36e
/* 8016A588 00167388  C0 22 AB 30 */	lfs f1, lbl__1888_1-_SDA2_BASE_(r2)
/* 8016A58C 0016738C  C0 42 AB 84 */	lfs f2, lbl__1909_1-_SDA2_BASE_(r2)
/* 8016A590 00167390  C0 62 AB 3C */	lfs f3, lbl__1891-_SDA2_BASE_(r2)
/* 8016A594 00167394  48 00 5E 41 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A598:
/* 8016A598 00167398  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A59C 0016739C  41 82 00 34 */	beq lbl_8016A5D0
/* 8016A5A0 001673A0  C0 02 AB 68 */	lfs f0, lbl__1902-_SDA2_BASE_(r2)
/* 8016A5A4 001673A4  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A5A8 001673A8  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A5AC 001673AC  7F C4 F3 78 */	mr r4, r30
/* 8016A5B0 001673B0  D0 1C 00 B0 */	stfs f0, 0xb0(r28)
/* 8016A5B4 001673B4  7F E5 FB 78 */	mr r5, r31
/* 8016A5B8 001673B8  38 7C 00 B0 */	addi r3, r28, 0xb0
/* 8016A5BC 001673BC  38 C6 03 80 */	addi r6, r6, 0x380
/* 8016A5C0 001673C0  C0 22 AB 30 */	lfs f1, lbl__1888_1-_SDA2_BASE_(r2)
/* 8016A5C4 001673C4  C0 42 AB 84 */	lfs f2, lbl__1909_1-_SDA2_BASE_(r2)
/* 8016A5C8 001673C8  C0 62 AB 3C */	lfs f3, lbl__1891-_SDA2_BASE_(r2)
/* 8016A5CC 001673CC  48 00 5E 09 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A5D0:
/* 8016A5D0 001673D0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A5D4 001673D4  41 82 00 34 */	beq lbl_8016A608
/* 8016A5D8 001673D8  C0 02 AB 88 */	lfs f0, lbl__1910_1-_SDA2_BASE_(r2)
/* 8016A5DC 001673DC  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A5E0 001673E0  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A5E4 001673E4  7F C4 F3 78 */	mr r4, r30
/* 8016A5E8 001673E8  D0 1C 00 B4 */	stfs f0, 0xb4(r28)
/* 8016A5EC 001673EC  7F E5 FB 78 */	mr r5, r31
/* 8016A5F0 001673F0  38 7C 00 B4 */	addi r3, r28, 0xb4
/* 8016A5F4 001673F4  38 C6 03 92 */	addi r6, r6, 0x392
/* 8016A5F8 001673F8  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A5FC 001673FC  C0 62 AB 54 */	lfs f3, lbl__1897-_SDA2_BASE_(r2)
/* 8016A600 00167400  FC 40 08 90 */	fmr f2, f1
/* 8016A604 00167404  48 00 5D D1 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A608:
/* 8016A608 00167408  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A60C 0016740C  41 82 00 34 */	beq lbl_8016A640
/* 8016A610 00167410  C0 02 AB 1C */	lfs f0, lbl__1752-_SDA2_BASE_(r2)
/* 8016A614 00167414  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A618 00167418  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A61C 0016741C  7F C4 F3 78 */	mr r4, r30
/* 8016A620 00167420  D0 1C 00 B8 */	stfs f0, 0xb8(r28)
/* 8016A624 00167424  7F E5 FB 78 */	mr r5, r31
/* 8016A628 00167428  38 7C 00 B8 */	addi r3, r28, 0xb8
/* 8016A62C 0016742C  38 C6 03 A0 */	addi r6, r6, 0x3a0
/* 8016A630 00167430  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A634 00167434  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016A638 00167438  C0 62 AB 50 */	lfs f3, lbl__1896-_SDA2_BASE_(r2)
/* 8016A63C 0016743C  48 00 5D 99 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A640:
/* 8016A640 00167440  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A644 00167444  41 82 00 34 */	beq lbl_8016A678
/* 8016A648 00167448  C0 02 AB 8C */	lfs f0, lbl__1911_1-_SDA2_BASE_(r2)
/* 8016A64C 0016744C  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A650 00167450  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A654 00167454  7F C4 F3 78 */	mr r4, r30
/* 8016A658 00167458  D0 1C 00 BC */	stfs f0, 0xbc(r28)
/* 8016A65C 0016745C  7F E5 FB 78 */	mr r5, r31
/* 8016A660 00167460  38 7C 00 BC */	addi r3, r28, 0xbc
/* 8016A664 00167464  38 C6 03 AF */	addi r6, r6, 0x3af
/* 8016A668 00167468  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A66C 0016746C  C0 42 AB 34 */	lfs f2, lbl__1889_1-_SDA2_BASE_(r2)
/* 8016A670 00167470  C0 62 AB 54 */	lfs f3, lbl__1897-_SDA2_BASE_(r2)
/* 8016A674 00167474  48 00 5D 61 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A678:
/* 8016A678 00167478  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A67C 0016747C  41 82 00 34 */	beq lbl_8016A6B0
/* 8016A680 00167480  C0 02 AB 64 */	lfs f0, lbl__1901-_SDA2_BASE_(r2)
/* 8016A684 00167484  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A688 00167488  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A68C 0016748C  7F C4 F3 78 */	mr r4, r30
/* 8016A690 00167490  D0 1C 00 C0 */	stfs f0, 0xc0(r28)
/* 8016A694 00167494  7F E5 FB 78 */	mr r5, r31
/* 8016A698 00167498  38 7C 00 C0 */	addi r3, r28, 0xc0
/* 8016A69C 0016749C  38 C6 03 BE */	addi r6, r6, 0x3be
/* 8016A6A0 001674A0  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A6A4 001674A4  C0 42 AB 34 */	lfs f2, lbl__1889_1-_SDA2_BASE_(r2)
/* 8016A6A8 001674A8  C0 62 AB 54 */	lfs f3, lbl__1897-_SDA2_BASE_(r2)
/* 8016A6AC 001674AC  48 00 5D 29 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A6B0:
/* 8016A6B0 001674B0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A6B4 001674B4  41 82 00 34 */	beq lbl_8016A6E8
/* 8016A6B8 001674B8  C0 02 AB 68 */	lfs f0, lbl__1902-_SDA2_BASE_(r2)
/* 8016A6BC 001674BC  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A6C0 001674C0  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A6C4 001674C4  7F C4 F3 78 */	mr r4, r30
/* 8016A6C8 001674C8  D0 1C 00 C4 */	stfs f0, 0xc4(r28)
/* 8016A6CC 001674CC  7F E5 FB 78 */	mr r5, r31
/* 8016A6D0 001674D0  38 7C 00 C4 */	addi r3, r28, 0xc4
/* 8016A6D4 001674D4  38 C6 03 CD */	addi r6, r6, 0x3cd
/* 8016A6D8 001674D8  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A6DC 001674DC  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016A6E0 001674E0  C0 62 AB 24 */	lfs f3, lbl__1754-_SDA2_BASE_(r2)
/* 8016A6E4 001674E4  48 00 5C F1 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A6E8:
/* 8016A6E8 001674E8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A6EC 001674EC  41 82 00 34 */	beq lbl_8016A720
/* 8016A6F0 001674F0  C0 02 AB 5C */	lfs f0, lbl__1899-_SDA2_BASE_(r2)
/* 8016A6F4 001674F4  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A6F8 001674F8  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A6FC 001674FC  7F C4 F3 78 */	mr r4, r30
/* 8016A700 00167500  D0 1C 00 C8 */	stfs f0, 0xc8(r28)
/* 8016A704 00167504  7F E5 FB 78 */	mr r5, r31
/* 8016A708 00167508  38 7C 00 C8 */	addi r3, r28, 0xc8
/* 8016A70C 0016750C  38 C6 03 D9 */	addi r6, r6, 0x3d9
/* 8016A710 00167510  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A714 00167514  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016A718 00167518  C0 62 AB 24 */	lfs f3, lbl__1754-_SDA2_BASE_(r2)
/* 8016A71C 0016751C  48 00 5C B9 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A720:
/* 8016A720 00167520  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A724 00167524  41 82 00 34 */	beq lbl_8016A758
/* 8016A728 00167528  C0 02 AB 68 */	lfs f0, lbl__1902-_SDA2_BASE_(r2)
/* 8016A72C 0016752C  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A730 00167530  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A734 00167534  7F C4 F3 78 */	mr r4, r30
/* 8016A738 00167538  D0 1C 00 CC */	stfs f0, 0xcc(r28)
/* 8016A73C 0016753C  7F E5 FB 78 */	mr r5, r31
/* 8016A740 00167540  38 7C 00 CC */	addi r3, r28, 0xcc
/* 8016A744 00167544  38 C6 03 EB */	addi r6, r6, 0x3eb
/* 8016A748 00167548  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A74C 0016754C  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016A750 00167550  C0 62 AB 24 */	lfs f3, lbl__1754-_SDA2_BASE_(r2)
/* 8016A754 00167554  48 00 5C 81 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A758:
/* 8016A758 00167558  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A75C 0016755C  41 82 00 34 */	beq lbl_8016A790
/* 8016A760 00167560  C0 02 AB 64 */	lfs f0, lbl__1901-_SDA2_BASE_(r2)
/* 8016A764 00167564  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A768 00167568  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A76C 0016756C  7F C4 F3 78 */	mr r4, r30
/* 8016A770 00167570  D0 1C 00 D0 */	stfs f0, 0xd0(r28)
/* 8016A774 00167574  7F E5 FB 78 */	mr r5, r31
/* 8016A778 00167578  38 7C 00 D0 */	addi r3, r28, 0xd0
/* 8016A77C 0016757C  38 C6 03 FD */	addi r6, r6, 0x3fd
/* 8016A780 00167580  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A784 00167584  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016A788 00167588  C0 62 AB 24 */	lfs f3, lbl__1754-_SDA2_BASE_(r2)
/* 8016A78C 0016758C  48 00 5C 49 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A790:
/* 8016A790 00167590  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A794 00167594  41 82 00 34 */	beq lbl_8016A7C8
/* 8016A798 00167598  C0 02 AB 14 */	lfs f0, lbl__1657_2-_SDA2_BASE_(r2)
/* 8016A79C 0016759C  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A7A0 001675A0  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A7A4 001675A4  7F C4 F3 78 */	mr r4, r30
/* 8016A7A8 001675A8  D0 1C 00 D4 */	stfs f0, 0xd4(r28)
/* 8016A7AC 001675AC  7F E5 FB 78 */	mr r5, r31
/* 8016A7B0 001675B0  38 7C 00 D4 */	addi r3, r28, 0xd4
/* 8016A7B4 001675B4  38 C6 04 0F */	addi r6, r6, 0x40f
/* 8016A7B8 001675B8  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A7BC 001675BC  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016A7C0 001675C0  C0 62 AB 54 */	lfs f3, lbl__1897-_SDA2_BASE_(r2)
/* 8016A7C4 001675C4  48 00 5C 11 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A7C8:
/* 8016A7C8 001675C8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A7CC 001675CC  41 82 00 34 */	beq lbl_8016A800
/* 8016A7D0 001675D0  C0 02 AB 7C */	lfs f0, lbl__1907-_SDA2_BASE_(r2)
/* 8016A7D4 001675D4  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A7D8 001675D8  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A7DC 001675DC  7F C4 F3 78 */	mr r4, r30
/* 8016A7E0 001675E0  D0 1C 00 D8 */	stfs f0, 0xd8(r28)
/* 8016A7E4 001675E4  7F E5 FB 78 */	mr r5, r31
/* 8016A7E8 001675E8  38 7C 00 D8 */	addi r3, r28, 0xd8
/* 8016A7EC 001675EC  38 C6 04 22 */	addi r6, r6, 0x422
/* 8016A7F0 001675F0  C0 22 AB 30 */	lfs f1, lbl__1888_1-_SDA2_BASE_(r2)
/* 8016A7F4 001675F4  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016A7F8 001675F8  C0 62 AB 90 */	lfs f3, lbl__1912_1-_SDA2_BASE_(r2)
/* 8016A7FC 001675FC  48 00 5B D9 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A800:
/* 8016A800 00167600  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A804 00167604  41 82 00 34 */	beq lbl_8016A838
/* 8016A808 00167608  C0 02 AB 20 */	lfs f0, lbl__1753-_SDA2_BASE_(r2)
/* 8016A80C 0016760C  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A810 00167610  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A814 00167614  7F C4 F3 78 */	mr r4, r30
/* 8016A818 00167618  D0 1C 00 DC */	stfs f0, 0xdc(r28)
/* 8016A81C 0016761C  7F E5 FB 78 */	mr r5, r31
/* 8016A820 00167620  38 7C 00 DC */	addi r3, r28, 0xdc
/* 8016A824 00167624  38 C6 04 33 */	addi r6, r6, 0x433
/* 8016A828 00167628  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A82C 0016762C  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016A830 00167630  C0 62 AB 54 */	lfs f3, lbl__1897-_SDA2_BASE_(r2)
/* 8016A834 00167634  48 00 5B A1 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A838:
/* 8016A838 00167638  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A83C 0016763C  41 82 00 34 */	beq lbl_8016A870
/* 8016A840 00167640  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016A844 00167644  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A848 00167648  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A84C 0016764C  7F C4 F3 78 */	mr r4, r30
/* 8016A850 00167650  D0 1C 00 E0 */	stfs f0, 0xe0(r28)
/* 8016A854 00167654  7F E5 FB 78 */	mr r5, r31
/* 8016A858 00167658  38 7C 00 E0 */	addi r3, r28, 0xe0
/* 8016A85C 0016765C  38 C6 04 45 */	addi r6, r6, 0x445
/* 8016A860 00167660  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A864 00167664  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016A868 00167668  FC 60 08 90 */	fmr f3, f1
/* 8016A86C 0016766C  48 00 5B 69 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A870:
/* 8016A870 00167670  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A874 00167674  41 82 00 34 */	beq lbl_8016A8A8
/* 8016A878 00167678  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016A87C 0016767C  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A880 00167680  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A884 00167684  7F C4 F3 78 */	mr r4, r30
/* 8016A888 00167688  D0 1C 00 E4 */	stfs f0, 0xe4(r28)
/* 8016A88C 0016768C  7F E5 FB 78 */	mr r5, r31
/* 8016A890 00167690  38 7C 00 E4 */	addi r3, r28, 0xe4
/* 8016A894 00167694  38 C6 04 5A */	addi r6, r6, 0x45a
/* 8016A898 00167698  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A89C 0016769C  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016A8A0 001676A0  FC 60 08 90 */	fmr f3, f1
/* 8016A8A4 001676A4  48 00 5B 31 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A8A8:
/* 8016A8A8 001676A8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A8AC 001676AC  41 82 00 34 */	beq lbl_8016A8E0
/* 8016A8B0 001676B0  C0 02 AB 0C */	lfs f0, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A8B4 001676B4  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A8B8 001676B8  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A8BC 001676BC  7F C4 F3 78 */	mr r4, r30
/* 8016A8C0 001676C0  D0 1C 00 E8 */	stfs f0, 0xe8(r28)
/* 8016A8C4 001676C4  7F E5 FB 78 */	mr r5, r31
/* 8016A8C8 001676C8  38 7C 00 E8 */	addi r3, r28, 0xe8
/* 8016A8CC 001676CC  38 C6 04 6F */	addi r6, r6, 0x46f
/* 8016A8D0 001676D0  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A8D4 001676D4  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016A8D8 001676D8  FC 60 08 90 */	fmr f3, f1
/* 8016A8DC 001676DC  48 00 5A F9 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A8E0:
/* 8016A8E0 001676E0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A8E4 001676E4  41 82 00 34 */	beq lbl_8016A918
/* 8016A8E8 001676E8  C0 02 AB 0C */	lfs f0, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A8EC 001676EC  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A8F0 001676F0  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A8F4 001676F4  7F C4 F3 78 */	mr r4, r30
/* 8016A8F8 001676F8  D0 1C 00 EC */	stfs f0, 0xec(r28)
/* 8016A8FC 001676FC  7F E5 FB 78 */	mr r5, r31
/* 8016A900 00167700  38 7C 00 EC */	addi r3, r28, 0xec
/* 8016A904 00167704  38 C6 04 84 */	addi r6, r6, 0x484
/* 8016A908 00167708  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A90C 0016770C  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016A910 00167710  FC 60 08 90 */	fmr f3, f1
/* 8016A914 00167714  48 00 5A C1 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A918:
/* 8016A918 00167718  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A91C 0016771C  41 82 00 34 */	beq lbl_8016A950
/* 8016A920 00167720  38 00 00 02 */	li r0, 2
/* 8016A924 00167724  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A928 00167728  38 83 14 64 */	addi r4, r3, lbl__stringBase0_97@l
/* 8016A92C 0016772C  90 1C 00 F0 */	stw r0, 0xf0(r28)
/* 8016A930 00167730  7F C7 F3 78 */	mr r7, r30
/* 8016A934 00167734  7F E8 FB 78 */	mr r8, r31
/* 8016A938 00167738  38 7C 00 F0 */	addi r3, r28, 0xf0
/* 8016A93C 0016773C  39 24 04 99 */	addi r9, r4, 0x499
/* 8016A940 00167740  38 80 00 01 */	li r4, 1
/* 8016A944 00167744  38 A0 00 00 */	li r5, 0
/* 8016A948 00167748  38 C0 00 64 */	li r6, 0x64
/* 8016A94C 0016774C  48 00 59 B5 */	bl zNPCTypeBossPlankton.load_param_i_i___10auto_tweakFRiiiiP16xModelAssetParamUiPCc
lbl_8016A950:
/* 8016A950 00167750  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A954 00167754  41 82 00 34 */	beq lbl_8016A988
/* 8016A958 00167758  C0 02 AB 0C */	lfs f0, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A95C 0016775C  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A960 00167760  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A964 00167764  7F C4 F3 78 */	mr r4, r30
/* 8016A968 00167768  D0 1C 00 F4 */	stfs f0, 0xf4(r28)
/* 8016A96C 0016776C  7F E5 FB 78 */	mr r5, r31
/* 8016A970 00167770  38 7C 00 F4 */	addi r3, r28, 0xf4
/* 8016A974 00167774  38 C6 04 AE */	addi r6, r6, 0x4ae
/* 8016A978 00167778  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A97C 0016777C  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016A980 00167780  C0 62 AB 38 */	lfs f3, lbl__1890_1-_SDA2_BASE_(r2)
/* 8016A984 00167784  48 00 5A 51 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A988:
/* 8016A988 00167788  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A98C 0016778C  41 82 00 34 */	beq lbl_8016A9C0
/* 8016A990 00167790  C0 02 AB 64 */	lfs f0, lbl__1901-_SDA2_BASE_(r2)
/* 8016A994 00167794  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A998 00167798  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A99C 0016779C  7F C4 F3 78 */	mr r4, r30
/* 8016A9A0 001677A0  D0 1C 00 F8 */	stfs f0, 0xf8(r28)
/* 8016A9A4 001677A4  7F E5 FB 78 */	mr r5, r31
/* 8016A9A8 001677A8  38 7C 00 F8 */	addi r3, r28, 0xf8
/* 8016A9AC 001677AC  38 C6 04 BD */	addi r6, r6, 0x4bd
/* 8016A9B0 001677B0  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A9B4 001677B4  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016A9B8 001677B8  C0 62 AB 54 */	lfs f3, lbl__1897-_SDA2_BASE_(r2)
/* 8016A9BC 001677BC  48 00 5A 19 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A9C0:
/* 8016A9C0 001677C0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A9C4 001677C4  41 82 00 34 */	beq lbl_8016A9F8
/* 8016A9C8 001677C8  C0 02 AB 94 */	lfs f0, lbl__1913_1-_SDA2_BASE_(r2)
/* 8016A9CC 001677CC  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016A9D0 001677D0  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016A9D4 001677D4  7F C4 F3 78 */	mr r4, r30
/* 8016A9D8 001677D8  D0 1C 00 FC */	stfs f0, 0xfc(r28)
/* 8016A9DC 001677DC  7F E5 FB 78 */	mr r5, r31
/* 8016A9E0 001677E0  38 7C 00 FC */	addi r3, r28, 0xfc
/* 8016A9E4 001677E4  38 C6 04 D0 */	addi r6, r6, 0x4d0
/* 8016A9E8 001677E8  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016A9EC 001677EC  C0 42 AB 98 */	lfs f2, lbl__1914-_SDA2_BASE_(r2)
/* 8016A9F0 001677F0  C0 62 AB 54 */	lfs f3, lbl__1897-_SDA2_BASE_(r2)
/* 8016A9F4 001677F4  48 00 59 E1 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016A9F8:
/* 8016A9F8 001677F8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016A9FC 001677FC  41 82 00 34 */	beq lbl_8016AA30
/* 8016AA00 00167800  C0 02 AB 4C */	lfs f0, lbl__1895_1-_SDA2_BASE_(r2)
/* 8016AA04 00167804  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016AA08 00167808  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016AA0C 0016780C  7F C4 F3 78 */	mr r4, r30
/* 8016AA10 00167810  D0 1C 01 00 */	stfs f0, 0x100(r28)
/* 8016AA14 00167814  7F E5 FB 78 */	mr r5, r31
/* 8016AA18 00167818  38 7C 01 00 */	addi r3, r28, 0x100
/* 8016AA1C 0016781C  38 C6 04 E5 */	addi r6, r6, 0x4e5
/* 8016AA20 00167820  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016AA24 00167824  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016AA28 00167828  C0 62 AB 54 */	lfs f3, lbl__1897-_SDA2_BASE_(r2)
/* 8016AA2C 0016782C  48 00 59 A9 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016AA30:
/* 8016AA30 00167830  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016AA34 00167834  41 82 00 34 */	beq lbl_8016AA68
/* 8016AA38 00167838  C0 02 AB 64 */	lfs f0, lbl__1901-_SDA2_BASE_(r2)
/* 8016AA3C 0016783C  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016AA40 00167840  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016AA44 00167844  7F C4 F3 78 */	mr r4, r30
/* 8016AA48 00167848  D0 1C 01 04 */	stfs f0, 0x104(r28)
/* 8016AA4C 0016784C  7F E5 FB 78 */	mr r5, r31
/* 8016AA50 00167850  38 7C 01 04 */	addi r3, r28, 0x104
/* 8016AA54 00167854  38 C6 04 F8 */	addi r6, r6, 0x4f8
/* 8016AA58 00167858  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016AA5C 0016785C  C0 42 AB 98 */	lfs f2, lbl__1914-_SDA2_BASE_(r2)
/* 8016AA60 00167860  C0 62 AB 54 */	lfs f3, lbl__1897-_SDA2_BASE_(r2)
/* 8016AA64 00167864  48 00 59 71 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016AA68:
/* 8016AA68 00167868  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016AA6C 0016786C  41 82 00 34 */	beq lbl_8016AAA0
/* 8016AA70 00167870  C0 02 AB 7C */	lfs f0, lbl__1907-_SDA2_BASE_(r2)
/* 8016AA74 00167874  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016AA78 00167878  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016AA7C 0016787C  7F C4 F3 78 */	mr r4, r30
/* 8016AA80 00167880  D0 1C 01 08 */	stfs f0, 0x108(r28)
/* 8016AA84 00167884  7F E5 FB 78 */	mr r5, r31
/* 8016AA88 00167888  38 7C 01 08 */	addi r3, r28, 0x108
/* 8016AA8C 0016788C  38 C6 05 0D */	addi r6, r6, 0x50d
/* 8016AA90 00167890  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016AA94 00167894  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016AA98 00167898  C0 62 AB 54 */	lfs f3, lbl__1897-_SDA2_BASE_(r2)
/* 8016AA9C 0016789C  48 00 59 39 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016AAA0:
/* 8016AAA0 001678A0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016AAA4 001678A4  41 82 00 34 */	beq lbl_8016AAD8
/* 8016AAA8 001678A8  C0 02 AB 64 */	lfs f0, lbl__1901-_SDA2_BASE_(r2)
/* 8016AAAC 001678AC  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016AAB0 001678B0  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016AAB4 001678B4  7F C4 F3 78 */	mr r4, r30
/* 8016AAB8 001678B8  D0 1C 01 0C */	stfs f0, 0x10c(r28)
/* 8016AABC 001678BC  7F E5 FB 78 */	mr r5, r31
/* 8016AAC0 001678C0  38 7C 01 0C */	addi r3, r28, 0x10c
/* 8016AAC4 001678C4  38 C6 05 1E */	addi r6, r6, 0x51e
/* 8016AAC8 001678C8  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016AACC 001678CC  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016AAD0 001678D0  C0 62 AB 54 */	lfs f3, lbl__1897-_SDA2_BASE_(r2)
/* 8016AAD4 001678D4  48 00 59 01 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016AAD8:
/* 8016AAD8 001678D8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016AADC 001678DC  41 82 00 34 */	beq lbl_8016AB10
/* 8016AAE0 001678E0  C0 02 AB 4C */	lfs f0, lbl__1895_1-_SDA2_BASE_(r2)
/* 8016AAE4 001678E4  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016AAE8 001678E8  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016AAEC 001678EC  7F C4 F3 78 */	mr r4, r30
/* 8016AAF0 001678F0  D0 1C 01 10 */	stfs f0, 0x110(r28)
/* 8016AAF4 001678F4  7F E5 FB 78 */	mr r5, r31
/* 8016AAF8 001678F8  38 7C 01 10 */	addi r3, r28, 0x110
/* 8016AAFC 001678FC  38 C6 05 2D */	addi r6, r6, 0x52d
/* 8016AB00 00167900  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016AB04 00167904  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016AB08 00167908  C0 62 AB 54 */	lfs f3, lbl__1897-_SDA2_BASE_(r2)
/* 8016AB0C 0016790C  48 00 58 C9 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016AB10:
/* 8016AB10 00167910  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016AB14 00167914  41 82 00 34 */	beq lbl_8016AB48
/* 8016AB18 00167918  C0 02 AB 68 */	lfs f0, lbl__1902-_SDA2_BASE_(r2)
/* 8016AB1C 0016791C  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016AB20 00167920  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016AB24 00167924  7F C4 F3 78 */	mr r4, r30
/* 8016AB28 00167928  D0 1C 01 14 */	stfs f0, 0x114(r28)
/* 8016AB2C 0016792C  7F E5 FB 78 */	mr r5, r31
/* 8016AB30 00167930  38 7C 01 14 */	addi r3, r28, 0x114
/* 8016AB34 00167934  38 C6 05 39 */	addi r6, r6, 0x539
/* 8016AB38 00167938  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016AB3C 0016793C  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016AB40 00167940  C0 62 AB 54 */	lfs f3, lbl__1897-_SDA2_BASE_(r2)
/* 8016AB44 00167944  48 00 58 91 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016AB48:
/* 8016AB48 00167948  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016AB4C 0016794C  41 82 00 34 */	beq lbl_8016AB80
/* 8016AB50 00167950  C0 02 AB 9C */	lfs f0, lbl__1915-_SDA2_BASE_(r2)
/* 8016AB54 00167954  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016AB58 00167958  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016AB5C 0016795C  7F C4 F3 78 */	mr r4, r30
/* 8016AB60 00167960  D0 1C 01 18 */	stfs f0, 0x118(r28)
/* 8016AB64 00167964  7F E5 FB 78 */	mr r5, r31
/* 8016AB68 00167968  38 7C 01 18 */	addi r3, r28, 0x118
/* 8016AB6C 0016796C  38 C6 05 47 */	addi r6, r6, 0x547
/* 8016AB70 00167970  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016AB74 00167974  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016AB78 00167978  C0 62 AB 38 */	lfs f3, lbl__1890_1-_SDA2_BASE_(r2)
/* 8016AB7C 0016797C  48 00 58 59 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016AB80:
/* 8016AB80 00167980  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016AB84 00167984  41 82 00 34 */	beq lbl_8016ABB8
/* 8016AB88 00167988  C0 02 AB A0 */	lfs f0, lbl__1916_1-_SDA2_BASE_(r2)
/* 8016AB8C 0016798C  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016AB90 00167990  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016AB94 00167994  7F C4 F3 78 */	mr r4, r30
/* 8016AB98 00167998  D0 1C 01 1C */	stfs f0, 0x11c(r28)
/* 8016AB9C 0016799C  7F E5 FB 78 */	mr r5, r31
/* 8016ABA0 001679A0  38 7C 01 1C */	addi r3, r28, 0x11c
/* 8016ABA4 001679A4  38 C6 05 52 */	addi r6, r6, 0x552
/* 8016ABA8 001679A8  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016ABAC 001679AC  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016ABB0 001679B0  C0 62 AB 38 */	lfs f3, lbl__1890_1-_SDA2_BASE_(r2)
/* 8016ABB4 001679B4  48 00 58 21 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016ABB8:
/* 8016ABB8 001679B8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016ABBC 001679BC  41 82 00 34 */	beq lbl_8016ABF0
/* 8016ABC0 001679C0  C0 02 AB 60 */	lfs f0, lbl__1900-_SDA2_BASE_(r2)
/* 8016ABC4 001679C4  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016ABC8 001679C8  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016ABCC 001679CC  7F C4 F3 78 */	mr r4, r30
/* 8016ABD0 001679D0  D0 1C 01 20 */	stfs f0, 0x120(r28)
/* 8016ABD4 001679D4  7F E5 FB 78 */	mr r5, r31
/* 8016ABD8 001679D8  38 7C 01 20 */	addi r3, r28, 0x120
/* 8016ABDC 001679DC  38 C6 05 5F */	addi r6, r6, 0x55f
/* 8016ABE0 001679E0  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016ABE4 001679E4  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016ABE8 001679E8  C0 62 AB 24 */	lfs f3, lbl__1754-_SDA2_BASE_(r2)
/* 8016ABEC 001679EC  48 00 57 E9 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016ABF0:
/* 8016ABF0 001679F0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016ABF4 001679F4  41 82 00 34 */	beq lbl_8016AC28
/* 8016ABF8 001679F8  C0 02 AB 7C */	lfs f0, lbl__1907-_SDA2_BASE_(r2)
/* 8016ABFC 001679FC  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016AC00 00167A00  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016AC04 00167A04  7F C4 F3 78 */	mr r4, r30
/* 8016AC08 00167A08  D0 1C 01 24 */	stfs f0, 0x124(r28)
/* 8016AC0C 00167A0C  7F E5 FB 78 */	mr r5, r31
/* 8016AC10 00167A10  38 7C 01 24 */	addi r3, r28, 0x124
/* 8016AC14 00167A14  38 C6 05 69 */	addi r6, r6, 0x569
/* 8016AC18 00167A18  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016AC1C 00167A1C  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016AC20 00167A20  C0 62 AB 50 */	lfs f3, lbl__1896-_SDA2_BASE_(r2)
/* 8016AC24 00167A24  48 00 57 B1 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016AC28:
/* 8016AC28 00167A28  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016AC2C 00167A2C  41 82 00 34 */	beq lbl_8016AC60
/* 8016AC30 00167A30  C0 02 AB 0C */	lfs f0, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016AC34 00167A34  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016AC38 00167A38  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016AC3C 00167A3C  7F C4 F3 78 */	mr r4, r30
/* 8016AC40 00167A40  D0 1C 01 28 */	stfs f0, 0x128(r28)
/* 8016AC44 00167A44  7F E5 FB 78 */	mr r5, r31
/* 8016AC48 00167A48  38 7C 01 28 */	addi r3, r28, 0x128
/* 8016AC4C 00167A4C  38 C6 05 78 */	addi r6, r6, 0x578
/* 8016AC50 00167A50  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016AC54 00167A54  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016AC58 00167A58  C0 62 AB 50 */	lfs f3, lbl__1896-_SDA2_BASE_(r2)
/* 8016AC5C 00167A5C  48 00 57 79 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016AC60:
/* 8016AC60 00167A60  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016AC64 00167A64  41 82 00 34 */	beq lbl_8016AC98
/* 8016AC68 00167A68  C0 02 AB A4 */	lfs f0, lbl__1917-_SDA2_BASE_(r2)
/* 8016AC6C 00167A6C  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016AC70 00167A70  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016AC74 00167A74  7F C4 F3 78 */	mr r4, r30
/* 8016AC78 00167A78  D0 1C 01 2C */	stfs f0, 0x12c(r28)
/* 8016AC7C 00167A7C  7F E5 FB 78 */	mr r5, r31
/* 8016AC80 00167A80  38 7C 01 2C */	addi r3, r28, 0x12c
/* 8016AC84 00167A84  38 C6 05 8D */	addi r6, r6, 0x58d
/* 8016AC88 00167A88  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016AC8C 00167A8C  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016AC90 00167A90  C0 62 AB 50 */	lfs f3, lbl__1896-_SDA2_BASE_(r2)
/* 8016AC94 00167A94  48 00 57 41 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016AC98:
/* 8016AC98 00167A98  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016AC9C 00167A9C  41 82 00 34 */	beq lbl_8016ACD0
/* 8016ACA0 00167AA0  C0 02 AB 4C */	lfs f0, lbl__1895_1-_SDA2_BASE_(r2)
/* 8016ACA4 00167AA4  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016ACA8 00167AA8  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016ACAC 00167AAC  7F C4 F3 78 */	mr r4, r30
/* 8016ACB0 00167AB0  D0 1C 01 30 */	stfs f0, 0x130(r28)
/* 8016ACB4 00167AB4  7F E5 FB 78 */	mr r5, r31
/* 8016ACB8 00167AB8  38 7C 01 30 */	addi r3, r28, 0x130
/* 8016ACBC 00167ABC  38 C6 05 A2 */	addi r6, r6, 0x5a2
/* 8016ACC0 00167AC0  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016ACC4 00167AC4  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016ACC8 00167AC8  C0 62 AB 24 */	lfs f3, lbl__1754-_SDA2_BASE_(r2)
/* 8016ACCC 00167ACC  48 00 57 09 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016ACD0:
/* 8016ACD0 00167AD0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016ACD4 00167AD4  41 82 00 34 */	beq lbl_8016AD08
/* 8016ACD8 00167AD8  C0 02 AB 50 */	lfs f0, lbl__1896-_SDA2_BASE_(r2)
/* 8016ACDC 00167ADC  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016ACE0 00167AE0  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016ACE4 00167AE4  7F C4 F3 78 */	mr r4, r30
/* 8016ACE8 00167AE8  D0 1C 01 34 */	stfs f0, 0x134(r28)
/* 8016ACEC 00167AEC  7F E5 FB 78 */	mr r5, r31
/* 8016ACF0 00167AF0  38 7C 01 34 */	addi r3, r28, 0x134
/* 8016ACF4 00167AF4  38 C6 05 AE */	addi r6, r6, 0x5ae
/* 8016ACF8 00167AF8  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016ACFC 00167AFC  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016AD00 00167B00  C0 62 AB 24 */	lfs f3, lbl__1754-_SDA2_BASE_(r2)
/* 8016AD04 00167B04  48 00 56 D1 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016AD08:
/* 8016AD08 00167B08  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016AD0C 00167B0C  41 82 00 38 */	beq lbl_8016AD44
/* 8016AD10 00167B10  38 7C 01 38 */	addi r3, r28, 0x138
/* 8016AD14 00167B14  38 81 00 38 */	addi r4, r1, 0x38
/* 8016AD18 00167B18  4B EA 05 4D */	bl __as__5xVec3FRC5xVec3
/* 8016AD1C 00167B1C  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016AD20 00167B20  7F C7 F3 78 */	mr r7, r30
/* 8016AD24 00167B24  38 A3 14 64 */	addi r5, r3, lbl__stringBase0_97@l
/* 8016AD28 00167B28  7F E8 FB 78 */	mr r8, r31
/* 8016AD2C 00167B2C  38 7C 01 38 */	addi r3, r28, 0x138
/* 8016AD30 00167B30  38 80 00 00 */	li r4, 0
/* 8016AD34 00167B34  39 25 05 BC */	addi r9, r5, 0x5bc
/* 8016AD38 00167B38  38 A0 00 00 */	li r5, 0
/* 8016AD3C 00167B3C  38 C0 00 00 */	li r6, 0
/* 8016AD40 00167B40  48 00 56 45 */	bl zNPCTypeBossPlankton.load_param_5xVec3_i___10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc
lbl_8016AD44:
/* 8016AD44 00167B44  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016AD48 00167B48  41 82 00 34 */	beq lbl_8016AD7C
/* 8016AD4C 00167B4C  C0 02 AB A8 */	lfs f0, lbl__1918-_SDA2_BASE_(r2)
/* 8016AD50 00167B50  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016AD54 00167B54  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016AD58 00167B58  7F C4 F3 78 */	mr r4, r30
/* 8016AD5C 00167B5C  D0 1C 01 44 */	stfs f0, 0x144(r28)
/* 8016AD60 00167B60  7F E5 FB 78 */	mr r5, r31
/* 8016AD64 00167B64  38 7C 01 44 */	addi r3, r28, 0x144
/* 8016AD68 00167B68  38 C6 05 C9 */	addi r6, r6, 0x5c9
/* 8016AD6C 00167B6C  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016AD70 00167B70  C0 42 AB 34 */	lfs f2, lbl__1889_1-_SDA2_BASE_(r2)
/* 8016AD74 00167B74  C0 62 AB 54 */	lfs f3, lbl__1897-_SDA2_BASE_(r2)
/* 8016AD78 00167B78  48 00 56 5D */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016AD7C:
/* 8016AD7C 00167B7C  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016AD80 00167B80  41 82 00 34 */	beq lbl_8016ADB4
/* 8016AD84 00167B84  C0 02 AB AC */	lfs f0, lbl__1919-_SDA2_BASE_(r2)
/* 8016AD88 00167B88  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016AD8C 00167B8C  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016AD90 00167B90  7F C4 F3 78 */	mr r4, r30
/* 8016AD94 00167B94  D0 1C 01 48 */	stfs f0, 0x148(r28)
/* 8016AD98 00167B98  7F E5 FB 78 */	mr r5, r31
/* 8016AD9C 00167B9C  38 7C 01 48 */	addi r3, r28, 0x148
/* 8016ADA0 00167BA0  38 C6 05 DD */	addi r6, r6, 0x5dd
/* 8016ADA4 00167BA4  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016ADA8 00167BA8  C0 42 AB 34 */	lfs f2, lbl__1889_1-_SDA2_BASE_(r2)
/* 8016ADAC 00167BAC  C0 62 AB 54 */	lfs f3, lbl__1897-_SDA2_BASE_(r2)
/* 8016ADB0 00167BB0  48 00 56 25 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016ADB4:
/* 8016ADB4 00167BB4  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016ADB8 00167BB8  41 82 00 34 */	beq lbl_8016ADEC
/* 8016ADBC 00167BBC  C0 02 AB 48 */	lfs f0, lbl__1894-_SDA2_BASE_(r2)
/* 8016ADC0 00167BC0  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016ADC4 00167BC4  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016ADC8 00167BC8  7F C4 F3 78 */	mr r4, r30
/* 8016ADCC 00167BCC  D0 1C 01 4C */	stfs f0, 0x14c(r28)
/* 8016ADD0 00167BD0  7F E5 FB 78 */	mr r5, r31
/* 8016ADD4 00167BD4  38 7C 01 4C */	addi r3, r28, 0x14c
/* 8016ADD8 00167BD8  38 C6 05 F1 */	addi r6, r6, 0x5f1
/* 8016ADDC 00167BDC  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016ADE0 00167BE0  C0 42 AB 34 */	lfs f2, lbl__1889_1-_SDA2_BASE_(r2)
/* 8016ADE4 00167BE4  C0 62 AB 54 */	lfs f3, lbl__1897-_SDA2_BASE_(r2)
/* 8016ADE8 00167BE8  48 00 55 ED */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016ADEC:
/* 8016ADEC 00167BEC  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016ADF0 00167BF0  41 82 00 34 */	beq lbl_8016AE24
/* 8016ADF4 00167BF4  C0 02 AB A8 */	lfs f0, lbl__1918-_SDA2_BASE_(r2)
/* 8016ADF8 00167BF8  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016ADFC 00167BFC  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016AE00 00167C00  7F C4 F3 78 */	mr r4, r30
/* 8016AE04 00167C04  D0 1C 01 50 */	stfs f0, 0x150(r28)
/* 8016AE08 00167C08  7F E5 FB 78 */	mr r5, r31
/* 8016AE0C 00167C0C  38 7C 01 50 */	addi r3, r28, 0x150
/* 8016AE10 00167C10  38 C6 06 05 */	addi r6, r6, 0x605
/* 8016AE14 00167C14  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016AE18 00167C18  C0 42 AB 34 */	lfs f2, lbl__1889_1-_SDA2_BASE_(r2)
/* 8016AE1C 00167C1C  C0 62 AB 54 */	lfs f3, lbl__1897-_SDA2_BASE_(r2)
/* 8016AE20 00167C20  48 00 55 B5 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016AE24:
/* 8016AE24 00167C24  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016AE28 00167C28  41 82 00 34 */	beq lbl_8016AE5C
/* 8016AE2C 00167C2C  C0 02 AB 0C */	lfs f0, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016AE30 00167C30  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016AE34 00167C34  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016AE38 00167C38  7F C4 F3 78 */	mr r4, r30
/* 8016AE3C 00167C3C  D0 1C 01 58 */	stfs f0, 0x158(r28)
/* 8016AE40 00167C40  7F E5 FB 78 */	mr r5, r31
/* 8016AE44 00167C44  38 7C 01 58 */	addi r3, r28, 0x158
/* 8016AE48 00167C48  38 C6 06 19 */	addi r6, r6, 0x619
/* 8016AE4C 00167C4C  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016AE50 00167C50  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016AE54 00167C54  FC 60 08 90 */	fmr f3, f1
/* 8016AE58 00167C58  48 00 55 7D */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016AE5C:
/* 8016AE5C 00167C5C  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016AE60 00167C60  41 82 00 34 */	beq lbl_8016AE94
/* 8016AE64 00167C64  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016AE68 00167C68  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016AE6C 00167C6C  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016AE70 00167C70  7F C4 F3 78 */	mr r4, r30
/* 8016AE74 00167C74  D0 1C 01 5C */	stfs f0, 0x15c(r28)
/* 8016AE78 00167C78  7F E5 FB 78 */	mr r5, r31
/* 8016AE7C 00167C7C  38 7C 01 5C */	addi r3, r28, 0x15c
/* 8016AE80 00167C80  38 C6 06 33 */	addi r6, r6, 0x633
/* 8016AE84 00167C84  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016AE88 00167C88  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016AE8C 00167C8C  C0 62 AB 24 */	lfs f3, lbl__1754-_SDA2_BASE_(r2)
/* 8016AE90 00167C90  48 00 55 45 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016AE94:
/* 8016AE94 00167C94  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016AE98 00167C98  41 82 00 34 */	beq lbl_8016AECC
/* 8016AE9C 00167C9C  C0 02 AB 50 */	lfs f0, lbl__1896-_SDA2_BASE_(r2)
/* 8016AEA0 00167CA0  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016AEA4 00167CA4  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016AEA8 00167CA8  7F C4 F3 78 */	mr r4, r30
/* 8016AEAC 00167CAC  D0 1C 01 60 */	stfs f0, 0x160(r28)
/* 8016AEB0 00167CB0  7F E5 FB 78 */	mr r5, r31
/* 8016AEB4 00167CB4  38 7C 01 60 */	addi r3, r28, 0x160
/* 8016AEB8 00167CB8  38 C6 06 52 */	addi r6, r6, 0x652
/* 8016AEBC 00167CBC  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016AEC0 00167CC0  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016AEC4 00167CC4  C0 62 AB 24 */	lfs f3, lbl__1754-_SDA2_BASE_(r2)
/* 8016AEC8 00167CC8  48 00 55 0D */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016AECC:
/* 8016AECC 00167CCC  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016AED0 00167CD0  41 82 00 34 */	beq lbl_8016AF04
/* 8016AED4 00167CD4  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016AED8 00167CD8  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016AEDC 00167CDC  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016AEE0 00167CE0  7F C4 F3 78 */	mr r4, r30
/* 8016AEE4 00167CE4  D0 1C 01 64 */	stfs f0, 0x164(r28)
/* 8016AEE8 00167CE8  7F E5 FB 78 */	mr r5, r31
/* 8016AEEC 00167CEC  38 7C 01 64 */	addi r3, r28, 0x164
/* 8016AEF0 00167CF0  38 C6 06 71 */	addi r6, r6, 0x671
/* 8016AEF4 00167CF4  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016AEF8 00167CF8  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016AEFC 00167CFC  C0 62 AB 24 */	lfs f3, lbl__1754-_SDA2_BASE_(r2)
/* 8016AF00 00167D00  48 00 54 D5 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016AF04:
/* 8016AF04 00167D04  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016AF08 00167D08  41 82 00 34 */	beq lbl_8016AF3C
/* 8016AF0C 00167D0C  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016AF10 00167D10  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016AF14 00167D14  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016AF18 00167D18  7F C4 F3 78 */	mr r4, r30
/* 8016AF1C 00167D1C  D0 1C 01 68 */	stfs f0, 0x168(r28)
/* 8016AF20 00167D20  7F E5 FB 78 */	mr r5, r31
/* 8016AF24 00167D24  38 7C 01 68 */	addi r3, r28, 0x168
/* 8016AF28 00167D28  38 C6 06 8A */	addi r6, r6, 0x68a
/* 8016AF2C 00167D2C  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016AF30 00167D30  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016AF34 00167D34  C0 62 AB 24 */	lfs f3, lbl__1754-_SDA2_BASE_(r2)
/* 8016AF38 00167D38  48 00 54 9D */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016AF3C:
/* 8016AF3C 00167D3C  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016AF40 00167D40  41 82 00 34 */	beq lbl_8016AF74
/* 8016AF44 00167D44  C0 02 AB 1C */	lfs f0, lbl__1752-_SDA2_BASE_(r2)
/* 8016AF48 00167D48  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016AF4C 00167D4C  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016AF50 00167D50  7F C4 F3 78 */	mr r4, r30
/* 8016AF54 00167D54  D0 1C 01 70 */	stfs f0, 0x170(r28)
/* 8016AF58 00167D58  7F E5 FB 78 */	mr r5, r31
/* 8016AF5C 00167D5C  38 7C 01 70 */	addi r3, r28, 0x170
/* 8016AF60 00167D60  38 C6 06 A7 */	addi r6, r6, 0x6a7
/* 8016AF64 00167D64  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016AF68 00167D68  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016AF6C 00167D6C  FC 60 08 90 */	fmr f3, f1
/* 8016AF70 00167D70  48 00 54 65 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016AF74:
/* 8016AF74 00167D74  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016AF78 00167D78  41 82 00 34 */	beq lbl_8016AFAC
/* 8016AF7C 00167D7C  C0 02 AB 50 */	lfs f0, lbl__1896-_SDA2_BASE_(r2)
/* 8016AF80 00167D80  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016AF84 00167D84  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016AF88 00167D88  7F C4 F3 78 */	mr r4, r30
/* 8016AF8C 00167D8C  D0 1C 01 74 */	stfs f0, 0x174(r28)
/* 8016AF90 00167D90  7F E5 FB 78 */	mr r5, r31
/* 8016AF94 00167D94  38 7C 01 74 */	addi r3, r28, 0x174
/* 8016AF98 00167D98  38 C6 06 BF */	addi r6, r6, 0x6bf
/* 8016AF9C 00167D9C  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016AFA0 00167DA0  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016AFA4 00167DA4  C0 62 AB 24 */	lfs f3, lbl__1754-_SDA2_BASE_(r2)
/* 8016AFA8 00167DA8  48 00 54 2D */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016AFAC:
/* 8016AFAC 00167DAC  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016AFB0 00167DB0  41 82 00 34 */	beq lbl_8016AFE4
/* 8016AFB4 00167DB4  C0 02 AB 60 */	lfs f0, lbl__1900-_SDA2_BASE_(r2)
/* 8016AFB8 00167DB8  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016AFBC 00167DBC  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016AFC0 00167DC0  7F C4 F3 78 */	mr r4, r30
/* 8016AFC4 00167DC4  D0 1C 01 78 */	stfs f0, 0x178(r28)
/* 8016AFC8 00167DC8  7F E5 FB 78 */	mr r5, r31
/* 8016AFCC 00167DCC  38 7C 01 78 */	addi r3, r28, 0x178
/* 8016AFD0 00167DD0  38 C6 06 DC */	addi r6, r6, 0x6dc
/* 8016AFD4 00167DD4  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016AFD8 00167DD8  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016AFDC 00167DDC  C0 62 AB 24 */	lfs f3, lbl__1754-_SDA2_BASE_(r2)
/* 8016AFE0 00167DE0  48 00 53 F5 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016AFE4:
/* 8016AFE4 00167DE4  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016AFE8 00167DE8  41 82 00 34 */	beq lbl_8016B01C
/* 8016AFEC 00167DEC  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016AFF0 00167DF0  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016AFF4 00167DF4  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016AFF8 00167DF8  7F C4 F3 78 */	mr r4, r30
/* 8016AFFC 00167DFC  D0 1C 01 7C */	stfs f0, 0x17c(r28)
/* 8016B000 00167E00  7F E5 FB 78 */	mr r5, r31
/* 8016B004 00167E04  38 7C 01 7C */	addi r3, r28, 0x17c
/* 8016B008 00167E08  38 C6 06 F9 */	addi r6, r6, 0x6f9
/* 8016B00C 00167E0C  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016B010 00167E10  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016B014 00167E14  C0 62 AB 24 */	lfs f3, lbl__1754-_SDA2_BASE_(r2)
/* 8016B018 00167E18  48 00 53 BD */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016B01C:
/* 8016B01C 00167E1C  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016B020 00167E20  41 82 00 34 */	beq lbl_8016B054
/* 8016B024 00167E24  C0 02 AB 1C */	lfs f0, lbl__1752-_SDA2_BASE_(r2)
/* 8016B028 00167E28  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016B02C 00167E2C  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016B030 00167E30  7F C4 F3 78 */	mr r4, r30
/* 8016B034 00167E34  D0 1C 01 88 */	stfs f0, 0x188(r28)
/* 8016B038 00167E38  7F E5 FB 78 */	mr r5, r31
/* 8016B03C 00167E3C  38 7C 01 88 */	addi r3, r28, 0x188
/* 8016B040 00167E40  38 C6 07 10 */	addi r6, r6, 0x710
/* 8016B044 00167E44  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016B048 00167E48  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016B04C 00167E4C  FC 60 08 90 */	fmr f3, f1
/* 8016B050 00167E50  48 00 53 85 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016B054:
/* 8016B054 00167E54  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016B058 00167E58  41 82 00 34 */	beq lbl_8016B08C
/* 8016B05C 00167E5C  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016B060 00167E60  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016B064 00167E64  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016B068 00167E68  7F C4 F3 78 */	mr r4, r30
/* 8016B06C 00167E6C  D0 1C 01 8C */	stfs f0, 0x18c(r28)
/* 8016B070 00167E70  7F E5 FB 78 */	mr r5, r31
/* 8016B074 00167E74  38 7C 01 8C */	addi r3, r28, 0x18c
/* 8016B078 00167E78  38 C6 07 2E */	addi r6, r6, 0x72e
/* 8016B07C 00167E7C  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016B080 00167E80  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016B084 00167E84  C0 62 AB 24 */	lfs f3, lbl__1754-_SDA2_BASE_(r2)
/* 8016B088 00167E88  48 00 53 4D */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016B08C:
/* 8016B08C 00167E8C  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016B090 00167E90  41 82 00 34 */	beq lbl_8016B0C4
/* 8016B094 00167E94  C0 02 AB 68 */	lfs f0, lbl__1902-_SDA2_BASE_(r2)
/* 8016B098 00167E98  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016B09C 00167E9C  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016B0A0 00167EA0  7F C4 F3 78 */	mr r4, r30
/* 8016B0A4 00167EA4  D0 1C 01 90 */	stfs f0, 0x190(r28)
/* 8016B0A8 00167EA8  7F E5 FB 78 */	mr r5, r31
/* 8016B0AC 00167EAC  38 7C 01 90 */	addi r3, r28, 0x190
/* 8016B0B0 00167EB0  38 C6 07 51 */	addi r6, r6, 0x751
/* 8016B0B4 00167EB4  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016B0B8 00167EB8  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016B0BC 00167EBC  C0 62 AB 24 */	lfs f3, lbl__1754-_SDA2_BASE_(r2)
/* 8016B0C0 00167EC0  48 00 53 15 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016B0C4:
/* 8016B0C4 00167EC4  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016B0C8 00167EC8  41 82 00 34 */	beq lbl_8016B0FC
/* 8016B0CC 00167ECC  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016B0D0 00167ED0  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016B0D4 00167ED4  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016B0D8 00167ED8  7F C4 F3 78 */	mr r4, r30
/* 8016B0DC 00167EDC  D0 1C 01 94 */	stfs f0, 0x194(r28)
/* 8016B0E0 00167EE0  7F E5 FB 78 */	mr r5, r31
/* 8016B0E4 00167EE4  38 7C 01 94 */	addi r3, r28, 0x194
/* 8016B0E8 00167EE8  38 C6 07 74 */	addi r6, r6, 0x774
/* 8016B0EC 00167EEC  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016B0F0 00167EF0  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016B0F4 00167EF4  C0 62 AB 24 */	lfs f3, lbl__1754-_SDA2_BASE_(r2)
/* 8016B0F8 00167EF8  48 00 52 DD */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016B0FC:
/* 8016B0FC 00167EFC  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016B100 00167F00  41 82 00 34 */	beq lbl_8016B134
/* 8016B104 00167F04  C0 02 AB 14 */	lfs f0, lbl__1657_2-_SDA2_BASE_(r2)
/* 8016B108 00167F08  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016B10C 00167F0C  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016B110 00167F10  7F C4 F3 78 */	mr r4, r30
/* 8016B114 00167F14  D0 1C 01 A0 */	stfs f0, 0x1a0(r28)
/* 8016B118 00167F18  7F E5 FB 78 */	mr r5, r31
/* 8016B11C 00167F1C  38 7C 01 A0 */	addi r3, r28, 0x1a0
/* 8016B120 00167F20  38 C6 07 91 */	addi r6, r6, 0x791
/* 8016B124 00167F24  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016B128 00167F28  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016B12C 00167F2C  FC 60 08 90 */	fmr f3, f1
/* 8016B130 00167F30  48 00 52 A5 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016B134:
/* 8016B134 00167F34  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016B138 00167F38  41 82 00 34 */	beq lbl_8016B16C
/* 8016B13C 00167F3C  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016B140 00167F40  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016B144 00167F44  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016B148 00167F48  7F C4 F3 78 */	mr r4, r30
/* 8016B14C 00167F4C  D0 1C 01 A4 */	stfs f0, 0x1a4(r28)
/* 8016B150 00167F50  7F E5 FB 78 */	mr r5, r31
/* 8016B154 00167F54  38 7C 01 A4 */	addi r3, r28, 0x1a4
/* 8016B158 00167F58  38 C6 07 AE */	addi r6, r6, 0x7ae
/* 8016B15C 00167F5C  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016B160 00167F60  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016B164 00167F64  C0 62 AB 24 */	lfs f3, lbl__1754-_SDA2_BASE_(r2)
/* 8016B168 00167F68  48 00 52 6D */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016B16C:
/* 8016B16C 00167F6C  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016B170 00167F70  41 82 00 34 */	beq lbl_8016B1A4
/* 8016B174 00167F74  C0 02 AB 50 */	lfs f0, lbl__1896-_SDA2_BASE_(r2)
/* 8016B178 00167F78  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016B17C 00167F7C  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016B180 00167F80  7F C4 F3 78 */	mr r4, r30
/* 8016B184 00167F84  D0 1C 01 A8 */	stfs f0, 0x1a8(r28)
/* 8016B188 00167F88  7F E5 FB 78 */	mr r5, r31
/* 8016B18C 00167F8C  38 7C 01 A8 */	addi r3, r28, 0x1a8
/* 8016B190 00167F90  38 C6 07 D0 */	addi r6, r6, 0x7d0
/* 8016B194 00167F94  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016B198 00167F98  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016B19C 00167F9C  C0 62 AB 24 */	lfs f3, lbl__1754-_SDA2_BASE_(r2)
/* 8016B1A0 00167FA0  48 00 52 35 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016B1A4:
/* 8016B1A4 00167FA4  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016B1A8 00167FA8  41 82 00 34 */	beq lbl_8016B1DC
/* 8016B1AC 00167FAC  C0 02 AB 18 */	lfs f0, lbl__1658_2-_SDA2_BASE_(r2)
/* 8016B1B0 00167FB0  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016B1B4 00167FB4  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016B1B8 00167FB8  7F C4 F3 78 */	mr r4, r30
/* 8016B1BC 00167FBC  D0 1C 01 AC */	stfs f0, 0x1ac(r28)
/* 8016B1C0 00167FC0  7F E5 FB 78 */	mr r5, r31
/* 8016B1C4 00167FC4  38 7C 01 AC */	addi r3, r28, 0x1ac
/* 8016B1C8 00167FC8  38 C6 07 F2 */	addi r6, r6, 0x7f2
/* 8016B1CC 00167FCC  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016B1D0 00167FD0  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016B1D4 00167FD4  C0 62 AB 24 */	lfs f3, lbl__1754-_SDA2_BASE_(r2)
/* 8016B1D8 00167FD8  48 00 51 FD */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016B1DC:
/* 8016B1DC 00167FDC  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016B1E0 00167FE0  41 82 00 34 */	beq lbl_8016B214
/* 8016B1E4 00167FE4  C0 02 AB 18 */	lfs f0, lbl__1658_2-_SDA2_BASE_(r2)
/* 8016B1E8 00167FE8  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016B1EC 00167FEC  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016B1F0 00167FF0  7F C4 F3 78 */	mr r4, r30
/* 8016B1F4 00167FF4  D0 1C 01 B0 */	stfs f0, 0x1b0(r28)
/* 8016B1F8 00167FF8  7F E5 FB 78 */	mr r5, r31
/* 8016B1FC 00167FFC  38 7C 01 B0 */	addi r3, r28, 0x1b0
/* 8016B200 00168000  38 C6 08 0E */	addi r6, r6, 0x80e
/* 8016B204 00168004  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016B208 00168008  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016B20C 0016800C  C0 62 AB 24 */	lfs f3, lbl__1754-_SDA2_BASE_(r2)
/* 8016B210 00168010  48 00 51 C5 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016B214:
/* 8016B214 00168014  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016B218 00168018  41 82 00 34 */	beq lbl_8016B24C
/* 8016B21C 0016801C  C0 02 AB 0C */	lfs f0, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016B220 00168020  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016B224 00168024  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016B228 00168028  7F C4 F3 78 */	mr r4, r30
/* 8016B22C 0016802C  D0 1C 01 B8 */	stfs f0, 0x1b8(r28)
/* 8016B230 00168030  7F E5 FB 78 */	mr r5, r31
/* 8016B234 00168034  38 7C 01 B8 */	addi r3, r28, 0x1b8
/* 8016B238 00168038  38 C6 08 2E */	addi r6, r6, 0x82e
/* 8016B23C 0016803C  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016B240 00168040  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016B244 00168044  FC 60 08 90 */	fmr f3, f1
/* 8016B248 00168048  48 00 51 8D */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016B24C:
/* 8016B24C 0016804C  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016B250 00168050  41 82 00 34 */	beq lbl_8016B284
/* 8016B254 00168054  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016B258 00168058  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016B25C 0016805C  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016B260 00168060  7F C4 F3 78 */	mr r4, r30
/* 8016B264 00168064  D0 1C 01 BC */	stfs f0, 0x1bc(r28)
/* 8016B268 00168068  7F E5 FB 78 */	mr r5, r31
/* 8016B26C 0016806C  38 7C 01 BC */	addi r3, r28, 0x1bc
/* 8016B270 00168070  38 C6 08 4B */	addi r6, r6, 0x84b
/* 8016B274 00168074  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016B278 00168078  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016B27C 0016807C  C0 62 AB 24 */	lfs f3, lbl__1754-_SDA2_BASE_(r2)
/* 8016B280 00168080  48 00 51 55 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016B284:
/* 8016B284 00168084  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016B288 00168088  41 82 00 34 */	beq lbl_8016B2BC
/* 8016B28C 0016808C  C0 02 AB 68 */	lfs f0, lbl__1902-_SDA2_BASE_(r2)
/* 8016B290 00168090  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016B294 00168094  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016B298 00168098  7F C4 F3 78 */	mr r4, r30
/* 8016B29C 0016809C  D0 1C 01 C0 */	stfs f0, 0x1c0(r28)
/* 8016B2A0 001680A0  7F E5 FB 78 */	mr r5, r31
/* 8016B2A4 001680A4  38 7C 01 C0 */	addi r3, r28, 0x1c0
/* 8016B2A8 001680A8  38 C6 08 6D */	addi r6, r6, 0x86d
/* 8016B2AC 001680AC  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016B2B0 001680B0  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016B2B4 001680B4  C0 62 AB 24 */	lfs f3, lbl__1754-_SDA2_BASE_(r2)
/* 8016B2B8 001680B8  48 00 51 1D */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016B2BC:
/* 8016B2BC 001680BC  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016B2C0 001680C0  41 82 00 34 */	beq lbl_8016B2F4
/* 8016B2C4 001680C4  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016B2C8 001680C8  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016B2CC 001680CC  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016B2D0 001680D0  7F C4 F3 78 */	mr r4, r30
/* 8016B2D4 001680D4  D0 1C 01 C4 */	stfs f0, 0x1c4(r28)
/* 8016B2D8 001680D8  7F E5 FB 78 */	mr r5, r31
/* 8016B2DC 001680DC  38 7C 01 C4 */	addi r3, r28, 0x1c4
/* 8016B2E0 001680E0  38 C6 08 8F */	addi r6, r6, 0x88f
/* 8016B2E4 001680E4  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016B2E8 001680E8  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016B2EC 001680EC  C0 62 AB 24 */	lfs f3, lbl__1754-_SDA2_BASE_(r2)
/* 8016B2F0 001680F0  48 00 50 E5 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016B2F4:
/* 8016B2F4 001680F4  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016B2F8 001680F8  41 82 00 34 */	beq lbl_8016B32C
/* 8016B2FC 001680FC  C0 02 AB 0C */	lfs f0, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016B300 00168100  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016B304 00168104  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016B308 00168108  7F C4 F3 78 */	mr r4, r30
/* 8016B30C 0016810C  D0 1C 01 D0 */	stfs f0, 0x1d0(r28)
/* 8016B310 00168110  7F E5 FB 78 */	mr r5, r31
/* 8016B314 00168114  38 7C 01 D0 */	addi r3, r28, 0x1d0
/* 8016B318 00168118  38 C6 08 AB */	addi r6, r6, 0x8ab
/* 8016B31C 0016811C  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016B320 00168120  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016B324 00168124  FC 60 08 90 */	fmr f3, f1
/* 8016B328 00168128  48 00 50 AD */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016B32C:
/* 8016B32C 0016812C  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016B330 00168130  41 82 00 34 */	beq lbl_8016B364
/* 8016B334 00168134  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016B338 00168138  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016B33C 0016813C  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016B340 00168140  7F C4 F3 78 */	mr r4, r30
/* 8016B344 00168144  D0 1C 01 D4 */	stfs f0, 0x1d4(r28)
/* 8016B348 00168148  7F E5 FB 78 */	mr r5, r31
/* 8016B34C 0016814C  38 7C 01 D4 */	addi r3, r28, 0x1d4
/* 8016B350 00168150  38 C6 08 C6 */	addi r6, r6, 0x8c6
/* 8016B354 00168154  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016B358 00168158  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016B35C 0016815C  C0 62 AB 24 */	lfs f3, lbl__1754-_SDA2_BASE_(r2)
/* 8016B360 00168160  48 00 50 75 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016B364:
/* 8016B364 00168164  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016B368 00168168  41 82 00 34 */	beq lbl_8016B39C
/* 8016B36C 0016816C  C0 02 AB 68 */	lfs f0, lbl__1902-_SDA2_BASE_(r2)
/* 8016B370 00168170  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016B374 00168174  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016B378 00168178  7F C4 F3 78 */	mr r4, r30
/* 8016B37C 0016817C  D0 1C 01 D8 */	stfs f0, 0x1d8(r28)
/* 8016B380 00168180  7F E5 FB 78 */	mr r5, r31
/* 8016B384 00168184  38 7C 01 D8 */	addi r3, r28, 0x1d8
/* 8016B388 00168188  38 C6 08 E6 */	addi r6, r6, 0x8e6
/* 8016B38C 0016818C  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016B390 00168190  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016B394 00168194  C0 62 AB 24 */	lfs f3, lbl__1754-_SDA2_BASE_(r2)
/* 8016B398 00168198  48 00 50 3D */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016B39C:
/* 8016B39C 0016819C  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016B3A0 001681A0  41 82 00 34 */	beq lbl_8016B3D4
/* 8016B3A4 001681A4  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016B3A8 001681A8  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016B3AC 001681AC  38 C3 14 64 */	addi r6, r3, lbl__stringBase0_97@l
/* 8016B3B0 001681B0  7F C4 F3 78 */	mr r4, r30
/* 8016B3B4 001681B4  D0 1C 01 DC */	stfs f0, 0x1dc(r28)
/* 8016B3B8 001681B8  7F E5 FB 78 */	mr r5, r31
/* 8016B3BC 001681BC  38 7C 01 DC */	addi r3, r28, 0x1dc
/* 8016B3C0 001681C0  38 C6 09 06 */	addi r6, r6, 0x906
/* 8016B3C4 001681C4  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016B3C8 001681C8  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016B3CC 001681CC  C0 62 AB 24 */	lfs f3, lbl__1754-_SDA2_BASE_(r2)
/* 8016B3D0 001681D0  48 00 50 05 */	bl zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8016B3D4:
/* 8016B3D4 001681D4  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016B3D8 001681D8  41 82 00 38 */	beq lbl_8016B410
/* 8016B3DC 001681DC  3C 80 80 33 */	lis r4, lbl_sound_asset_ids__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016B3E0 001681E0  3C 60 80 27 */	lis r3, lbl_sound_assets__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016B3E4 001681E4  38 84 A0 38 */	addi r4, r4, lbl_sound_asset_ids__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016B3E8 001681E8  80 84 00 10 */	lwz r4, 0x10(r4)
/* 8016B3EC 001681EC  38 03 11 0C */	addi r0, r3, lbl_sound_assets__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016B3F0 001681F0  90 9C 01 54 */	stw r4, 0x154(r28)
/* 8016B3F4 001681F4  80 7C 01 54 */	lwz r3, 0x154(r28)
/* 8016B3F8 001681F8  54 63 20 36 */	slwi r3, r3, 4
/* 8016B3FC 001681FC  7C 60 1A 14 */	add r3, r0, r3
/* 8016B400 00168200  80 63 00 04 */	lwz r3, 4(r3)
/* 8016B404 00168204  4B EE 0E 11 */	bl xStrHash__FPCc
/* 8016B408 00168208  3C 80 80 33 */	lis r4, lbl_sound_data__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016B40C 0016820C  90 64 A1 40 */	stw r3, lbl_sound_data__34_unnamed_zNPCTypeBossPlankton_cpp_@l(r4)
lbl_8016B410:
/* 8016B410 00168210  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016B414 00168214  41 82 00 3C */	beq lbl_8016B450
/* 8016B418 00168218  3C 80 80 33 */	lis r4, lbl_sound_asset_ids__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016B41C 0016821C  3C 60 80 27 */	lis r3, lbl_sound_assets__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016B420 00168220  38 84 A0 38 */	addi r4, r4, lbl_sound_asset_ids__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016B424 00168224  80 84 00 34 */	lwz r4, 0x34(r4)
/* 8016B428 00168228  38 03 11 0C */	addi r0, r3, lbl_sound_assets__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016B42C 0016822C  90 9C 01 6C */	stw r4, 0x16c(r28)
/* 8016B430 00168230  80 7C 01 6C */	lwz r3, 0x16c(r28)
/* 8016B434 00168234  54 63 20 36 */	slwi r3, r3, 4
/* 8016B438 00168238  7C 60 1A 14 */	add r3, r0, r3
/* 8016B43C 0016823C  80 63 00 04 */	lwz r3, 4(r3)
/* 8016B440 00168240  4B EE 0D D5 */	bl xStrHash__FPCc
/* 8016B444 00168244  3C 80 80 33 */	lis r4, lbl_sound_data__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016B448 00168248  38 84 A1 40 */	addi r4, r4, lbl_sound_data__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016B44C 0016824C  90 64 00 10 */	stw r3, 0x10(r4)
lbl_8016B450:
/* 8016B450 00168250  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016B454 00168254  41 82 00 3C */	beq lbl_8016B490
/* 8016B458 00168258  3C 80 80 33 */	lis r4, lbl_sound_asset_ids__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016B45C 0016825C  3C 60 80 27 */	lis r3, lbl_sound_assets__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016B460 00168260  38 84 A0 38 */	addi r4, r4, lbl_sound_asset_ids__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016B464 00168264  80 84 00 50 */	lwz r4, 0x50(r4)
/* 8016B468 00168268  38 03 11 0C */	addi r0, r3, lbl_sound_assets__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016B46C 0016826C  90 9C 01 84 */	stw r4, 0x184(r28)
/* 8016B470 00168270  80 7C 01 84 */	lwz r3, 0x184(r28)
/* 8016B474 00168274  54 63 20 36 */	slwi r3, r3, 4
/* 8016B478 00168278  7C 60 1A 14 */	add r3, r0, r3
/* 8016B47C 0016827C  80 63 00 04 */	lwz r3, 4(r3)
/* 8016B480 00168280  4B EE 0D 95 */	bl xStrHash__FPCc
/* 8016B484 00168284  3C 80 80 33 */	lis r4, lbl_sound_data__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016B488 00168288  38 84 A1 40 */	addi r4, r4, lbl_sound_data__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016B48C 0016828C  90 64 00 20 */	stw r3, 0x20(r4)
lbl_8016B490:
/* 8016B490 00168290  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016B494 00168294  41 82 00 3C */	beq lbl_8016B4D0
/* 8016B498 00168298  3C 80 80 33 */	lis r4, lbl_sound_asset_ids__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016B49C 0016829C  3C 60 80 27 */	lis r3, lbl_sound_assets__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016B4A0 001682A0  38 84 A0 38 */	addi r4, r4, lbl_sound_asset_ids__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016B4A4 001682A4  80 84 00 84 */	lwz r4, 0x84(r4)
/* 8016B4A8 001682A8  38 03 11 0C */	addi r0, r3, lbl_sound_assets__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016B4AC 001682AC  90 9C 01 9C */	stw r4, 0x19c(r28)
/* 8016B4B0 001682B0  80 7C 01 9C */	lwz r3, 0x19c(r28)
/* 8016B4B4 001682B4  54 63 20 36 */	slwi r3, r3, 4
/* 8016B4B8 001682B8  7C 60 1A 14 */	add r3, r0, r3
/* 8016B4BC 001682BC  80 63 00 04 */	lwz r3, 4(r3)
/* 8016B4C0 001682C0  4B EE 0D 55 */	bl xStrHash__FPCc
/* 8016B4C4 001682C4  3C 80 80 33 */	lis r4, lbl_sound_data__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016B4C8 001682C8  38 84 A1 40 */	addi r4, r4, lbl_sound_data__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016B4CC 001682CC  90 64 00 30 */	stw r3, 0x30(r4)
lbl_8016B4D0:
/* 8016B4D0 001682D0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016B4D4 001682D4  41 82 00 3C */	beq lbl_8016B510
/* 8016B4D8 001682D8  3C 80 80 33 */	lis r4, lbl_sound_asset_ids__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016B4DC 001682DC  3C 60 80 27 */	lis r3, lbl_sound_assets__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016B4E0 001682E0  38 84 A0 38 */	addi r4, r4, lbl_sound_asset_ids__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016B4E4 001682E4  80 84 00 AC */	lwz r4, 0xac(r4)
/* 8016B4E8 001682E8  38 03 11 0C */	addi r0, r3, lbl_sound_assets__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016B4EC 001682EC  90 9C 01 B4 */	stw r4, 0x1b4(r28)
/* 8016B4F0 001682F0  80 7C 01 B4 */	lwz r3, 0x1b4(r28)
/* 8016B4F4 001682F4  54 63 20 36 */	slwi r3, r3, 4
/* 8016B4F8 001682F8  7C 60 1A 14 */	add r3, r0, r3
/* 8016B4FC 001682FC  80 63 00 04 */	lwz r3, 4(r3)
/* 8016B500 00168300  4B EE 0D 15 */	bl xStrHash__FPCc
/* 8016B504 00168304  3C 80 80 33 */	lis r4, lbl_sound_data__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016B508 00168308  38 84 A1 40 */	addi r4, r4, lbl_sound_data__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016B50C 0016830C  90 64 00 40 */	stw r3, 0x40(r4)
lbl_8016B510:
/* 8016B510 00168310  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8016B514 00168314  41 82 00 3C */	beq lbl_8016B550
/* 8016B518 00168318  3C 80 80 33 */	lis r4, lbl_sound_asset_ids__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016B51C 0016831C  3C 60 80 27 */	lis r3, lbl_sound_assets__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016B520 00168320  38 84 A0 38 */	addi r4, r4, lbl_sound_asset_ids__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016B524 00168324  80 84 00 D4 */	lwz r4, 0xd4(r4)
/* 8016B528 00168328  38 03 11 0C */	addi r0, r3, lbl_sound_assets__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016B52C 0016832C  90 9C 01 CC */	stw r4, 0x1cc(r28)
/* 8016B530 00168330  80 7C 01 CC */	lwz r3, 0x1cc(r28)
/* 8016B534 00168334  54 63 20 36 */	slwi r3, r3, 4
/* 8016B538 00168338  7C 60 1A 14 */	add r3, r0, r3
/* 8016B53C 0016833C  80 63 00 04 */	lwz r3, 4(r3)
/* 8016B540 00168340  4B EE 0C D5 */	bl xStrHash__FPCc
/* 8016B544 00168344  3C 80 80 33 */	lis r4, lbl_sound_data__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016B548 00168348  38 84 A1 40 */	addi r4, r4, lbl_sound_data__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016B54C 0016834C  90 64 00 50 */	stw r3, 0x50(r4)
lbl_8016B550:
/* 8016B550 00168350  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8016B554 00168354  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8016B558 00168358  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 8016B55C 0016835C  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 8016B560 00168360  83 81 00 50 */	lwz r28, 0x50(r1)
/* 8016B564 00168364  7C 08 03 A6 */	mtlr r0
/* 8016B568 00168368  38 21 00 60 */	addi r1, r1, 0x60
/* 8016B56C 0016836C  4E 80 00 20 */	blr 
/* 8016B570 00168370  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016B574 00168374  7C 08 02 A6 */	mflr r0
/* 8016B578 00168378  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016B57C 0016837C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016B580 00168380  7C 7F 1B 78 */	mr r31, r3
/* 8016B584 00168384  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016B588 00168388  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8016B58C 0016838C  93 81 00 10 */	stw r28, 0x10(r1)
/* 8016B590 00168390  4B F8 5E 05 */	bl ParseLinks__10zNPCCommonFv
/* 8016B594 00168394  38 7F 04 B4 */	addi r3, r31, 0x4b4
/* 8016B598 00168398  38 80 00 00 */	li r4, 0
/* 8016B59C 0016839C  38 A0 01 E0 */	li r5, 0x1e0
/* 8016B5A0 001683A0  4B E9 7E B9 */	bl memset
/* 8016B5A4 001683A4  88 1F 00 05 */	lbz r0, 5(r31)
/* 8016B5A8 001683A8  83 DF 00 08 */	lwz r30, 8(r31)
/* 8016B5AC 001683AC  54 00 28 34 */	slwi r0, r0, 5
/* 8016B5B0 001683B0  7F BE 02 14 */	add r29, r30, r0
/* 8016B5B4 001683B4  48 00 00 8C */	b lbl_8016B640
lbl_8016B5B8:
/* 8016B5B8 001683B8  A0 1E 00 02 */	lhz r0, 2(r30)
/* 8016B5BC 001683BC  28 00 01 33 */	cmplwi r0, 0x133
/* 8016B5C0 001683C0  40 82 00 7C */	bne lbl_8016B63C
/* 8016B5C4 001683C4  80 7E 00 04 */	lwz r3, 4(r30)
/* 8016B5C8 001683C8  4B F4 94 75 */	bl zSceneFindObject__FUi
/* 8016B5CC 001683CC  C0 1E 00 08 */	lfs f0, 8(r30)
/* 8016B5D0 001683D0  7C 65 1B 78 */	mr r5, r3
/* 8016B5D4 001683D4  FC 00 00 1E */	fctiwz f0, f0
/* 8016B5D8 001683D8  D8 01 00 08 */	stfd f0, 8(r1)
/* 8016B5DC 001683DC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016B5E0 001683E0  2C 04 00 00 */	cmpwi r4, 0
/* 8016B5E4 001683E4  40 81 00 58 */	ble lbl_8016B63C
/* 8016B5E8 001683E8  2C 04 00 08 */	cmpwi r4, 8
/* 8016B5EC 001683EC  41 81 00 50 */	bgt lbl_8016B63C
/* 8016B5F0 001683F0  38 04 FF FF */	addi r0, r4, -1
/* 8016B5F4 001683F4  1C 60 00 3C */	mulli r3, r0, 0x3c
/* 8016B5F8 001683F8  3B 83 04 B4 */	addi r28, r3, 0x4b4
/* 8016B5FC 001683FC  7F 9F E2 14 */	add r28, r31, r28
/* 8016B600 00168400  80 1C 00 00 */	lwz r0, 0(r28)
/* 8016B604 00168404  28 00 00 00 */	cmplwi r0, 0
/* 8016B608 00168408  40 82 00 34 */	bne lbl_8016B63C
/* 8016B60C 0016840C  7F E3 FB 78 */	mr r3, r31
/* 8016B610 00168410  48 00 14 6D */	bl load_territory__13zNPCBPlanktonFiR5xBase
/* 8016B614 00168414  80 1C 00 00 */	lwz r0, 0(r28)
/* 8016B618 00168418  28 00 00 00 */	cmplwi r0, 0
/* 8016B61C 0016841C  41 82 00 10 */	beq lbl_8016B62C
/* 8016B620 00168420  80 1C 00 04 */	lwz r0, 4(r28)
/* 8016B624 00168424  28 00 00 00 */	cmplwi r0, 0
/* 8016B628 00168428  40 82 00 14 */	bne lbl_8016B63C
lbl_8016B62C:
/* 8016B62C 0016842C  7F 83 E3 78 */	mr r3, r28
/* 8016B630 00168430  38 80 00 00 */	li r4, 0
/* 8016B634 00168434  38 A0 00 3C */	li r5, 0x3c
/* 8016B638 00168438  4B E9 7E 21 */	bl memset
lbl_8016B63C:
/* 8016B63C 0016843C  3B DE 00 20 */	addi r30, r30, 0x20
lbl_8016B640:
/* 8016B640 00168440  7C 1E E8 40 */	cmplw r30, r29
/* 8016B644 00168444  40 82 FF 74 */	bne lbl_8016B5B8
/* 8016B648 00168448  38 00 00 00 */	li r0, 0
/* 8016B64C 0016844C  7F FE FB 78 */	mr r30, r31
/* 8016B650 00168450  90 1F 06 94 */	stw r0, 0x694(r31)
/* 8016B654 00168454  3B 80 00 00 */	li r28, 0
lbl_8016B658:
/* 8016B658 00168458  80 1E 04 B4 */	lwz r0, 0x4b4(r30)
/* 8016B65C 0016845C  28 00 00 00 */	cmplwi r0, 0
/* 8016B660 00168460  41 82 00 30 */	beq lbl_8016B690
/* 8016B664 00168464  80 1F 06 94 */	lwz r0, 0x694(r31)
/* 8016B668 00168468  7C 1C 00 00 */	cmpw r28, r0
/* 8016B66C 0016846C  41 82 00 18 */	beq lbl_8016B684
/* 8016B670 00168470  1C 60 00 3C */	mulli r3, r0, 0x3c
/* 8016B674 00168474  38 9E 04 B4 */	addi r4, r30, 0x4b4
/* 8016B678 00168478  38 63 04 B4 */	addi r3, r3, 0x4b4
/* 8016B67C 0016847C  7C 7F 1A 14 */	add r3, r31, r3
/* 8016B680 00168480  48 00 00 41 */	bl __as__Q213zNPCBPlankton14territory_dataFRCQ213zNPCBPlankton14territory_data
lbl_8016B684:
/* 8016B684 00168484  80 7F 06 94 */	lwz r3, 0x694(r31)
/* 8016B688 00168488  38 03 00 01 */	addi r0, r3, 1
/* 8016B68C 0016848C  90 1F 06 94 */	stw r0, 0x694(r31)
lbl_8016B690:
/* 8016B690 00168490  3B 9C 00 01 */	addi r28, r28, 1
/* 8016B694 00168494  3B DE 00 3C */	addi r30, r30, 0x3c
/* 8016B698 00168498  2C 1C 00 08 */	cmpwi r28, 8
/* 8016B69C 0016849C  41 80 FF BC */	blt lbl_8016B658
/* 8016B6A0 001684A0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016B6A4 001684A4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016B6A8 001684A8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016B6AC 001684AC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8016B6B0 001684B0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8016B6B4 001684B4  7C 08 03 A6 */	mtlr r0
/* 8016B6B8 001684B8  38 21 00 20 */	addi r1, r1, 0x20
/* 8016B6BC 001684BC  4E 80 00 20 */	blr 

.global __as__Q213zNPCBPlankton14territory_dataFRCQ213zNPCBPlankton14territory_data
__as__Q213zNPCBPlankton14territory_dataFRCQ213zNPCBPlankton14territory_data:
/* 8016B6C0 001684C0  80 04 00 00 */	lwz r0, 0(r4)
/* 8016B6C4 001684C4  80 A4 00 04 */	lwz r5, 4(r4)
/* 8016B6C8 001684C8  90 03 00 00 */	stw r0, 0(r3)
/* 8016B6CC 001684CC  80 04 00 08 */	lwz r0, 8(r4)
/* 8016B6D0 001684D0  90 A3 00 04 */	stw r5, 4(r3)
/* 8016B6D4 001684D4  80 A4 00 0C */	lwz r5, 0xc(r4)
/* 8016B6D8 001684D8  90 03 00 08 */	stw r0, 8(r3)
/* 8016B6DC 001684DC  80 04 00 10 */	lwz r0, 0x10(r4)
/* 8016B6E0 001684E0  90 A3 00 0C */	stw r5, 0xc(r3)
/* 8016B6E4 001684E4  80 A4 00 14 */	lwz r5, 0x14(r4)
/* 8016B6E8 001684E8  90 03 00 10 */	stw r0, 0x10(r3)
/* 8016B6EC 001684EC  80 04 00 18 */	lwz r0, 0x18(r4)
/* 8016B6F0 001684F0  90 A3 00 14 */	stw r5, 0x14(r3)
/* 8016B6F4 001684F4  80 A4 00 1C */	lwz r5, 0x1c(r4)
/* 8016B6F8 001684F8  90 03 00 18 */	stw r0, 0x18(r3)
/* 8016B6FC 001684FC  80 04 00 20 */	lwz r0, 0x20(r4)
/* 8016B700 00168500  90 A3 00 1C */	stw r5, 0x1c(r3)
/* 8016B704 00168504  80 A4 00 24 */	lwz r5, 0x24(r4)
/* 8016B708 00168508  90 03 00 20 */	stw r0, 0x20(r3)
/* 8016B70C 0016850C  80 04 00 28 */	lwz r0, 0x28(r4)
/* 8016B710 00168510  90 A3 00 24 */	stw r5, 0x24(r3)
/* 8016B714 00168514  80 A4 00 2C */	lwz r5, 0x2c(r4)
/* 8016B718 00168518  90 03 00 28 */	stw r0, 0x28(r3)
/* 8016B71C 0016851C  80 04 00 30 */	lwz r0, 0x30(r4)
/* 8016B720 00168520  90 A3 00 2C */	stw r5, 0x2c(r3)
/* 8016B724 00168524  88 A4 00 34 */	lbz r5, 0x34(r4)
/* 8016B728 00168528  90 03 00 30 */	stw r0, 0x30(r3)
/* 8016B72C 0016852C  88 04 00 35 */	lbz r0, 0x35(r4)
/* 8016B730 00168530  98 A3 00 34 */	stb r5, 0x34(r3)
/* 8016B734 00168534  C0 04 00 38 */	lfs f0, 0x38(r4)
/* 8016B738 00168538  98 03 00 35 */	stb r0, 0x35(r3)
/* 8016B73C 0016853C  D0 03 00 38 */	stfs f0, 0x38(r3)
/* 8016B740 00168540  4E 80 00 20 */	blr 
/* 8016B744 00168544  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016B748 00168548  7C 08 02 A6 */	mflr r0
/* 8016B74C 0016854C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016B750 00168550  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016B754 00168554  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016B758 00168558  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8016B75C 0016855C  93 81 00 10 */	stw r28, 0x10(r1)
/* 8016B760 00168560  7C 7C 1B 78 */	mr r28, r3
/* 8016B764 00168564  4B FA 17 71 */	bl xBehaveMgr_GetSelf__Fv
/* 8016B768 00168568  7F 84 E3 78 */	mr r4, r28
/* 8016B76C 0016856C  38 A0 00 00 */	li r5, 0
/* 8016B770 00168570  4B FA 18 CD */	bl Subscribe__10xBehaveMgrFP5xBasei
/* 8016B774 00168574  90 7C 02 28 */	stw r3, 0x228(r28)
/* 8016B778 00168578  83 DC 02 28 */	lwz r30, 0x228(r28)
/* 8016B77C 0016857C  7F C3 F3 78 */	mr r3, r30
/* 8016B780 00168580  4B FA 1A 09 */	bl BrainBegin__7xPsycheFv
/* 8016B784 00168584  3C 60 4E 47 */	lis r3, 0x4E47424B@ha
/* 8016B788 00168588  3B A3 42 4B */	addi r29, r3, 0x4E47424B@l
/* 8016B78C 0016858C  3B E3 42 59 */	addi r31, r3, 0x4259
/* 8016B790 00168590  48 00 00 18 */	b lbl_8016B7A8
lbl_8016B794:
/* 8016B794 00168594  7F C3 F3 78 */	mr r3, r30
/* 8016B798 00168598  7F A4 EB 78 */	mr r4, r29
/* 8016B79C 0016859C  7F 85 E3 78 */	mr r5, r28
/* 8016B7A0 001685A0  4B FA 1A A1 */	bl AddGoal__7xPsycheFiPv
/* 8016B7A4 001685A4  3B BD 00 01 */	addi r29, r29, 1
lbl_8016B7A8:
/* 8016B7A8 001685A8  7C 1D F8 00 */	cmpw r29, r31
/* 8016B7AC 001685AC  40 81 FF E8 */	ble lbl_8016B794
/* 8016B7B0 001685B0  7F C3 F3 78 */	mr r3, r30
/* 8016B7B4 001685B4  4B FA 1A 55 */	bl BrainEnd__7xPsycheFv
/* 8016B7B8 001685B8  3C 80 4E 47 */	lis r4, 0x4E47424B@ha
/* 8016B7BC 001685BC  7F C3 F3 78 */	mr r3, r30
/* 8016B7C0 001685C0  38 84 42 4B */	addi r4, r4, 0x4E47424B@l
/* 8016B7C4 001685C4  4B F9 71 B9 */	bl SetSafety__7xPsycheFi
/* 8016B7C8 001685C8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016B7CC 001685CC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016B7D0 001685D0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016B7D4 001685D4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8016B7D8 001685D8  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8016B7DC 001685DC  7C 08 03 A6 */	mtlr r0
/* 8016B7E0 001685E0  38 21 00 20 */	addi r1, r1, 0x20
/* 8016B7E4 001685E4  4E 80 00 20 */	blr 
/* 8016B7E8 001685E8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8016B7EC 001685EC  7C 08 02 A6 */	mflr r0
/* 8016B7F0 001685F0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016B7F4 001685F4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8016B7F8 001685F8  7C DF 33 78 */	mr r31, r6
/* 8016B7FC 001685FC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8016B800 00168600  7C 9E 23 78 */	mr r30, r4
/* 8016B804 00168604  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8016B808 00168608  7C 7D 1B 78 */	mr r29, r3
/* 8016B80C 0016860C  80 63 02 28 */	lwz r3, 0x228(r3)
/* 8016B810 00168610  4B FA 1D B5 */	bl GIDOfActive__7xPsycheCFv
/* 8016B814 00168614  28 1E 00 0C */	cmplwi r30, 0xc
/* 8016B818 00168618  41 81 00 50 */	bgt lbl_8016B868
/* 8016B81C 0016861C  3C 60 80 2A */	lis r3, lbl__2021@ha
/* 8016B820 00168620  57 C0 10 3A */	slwi r0, r30, 2
/* 8016B824 00168624  38 63 AF F0 */	addi r3, r3, lbl__2021@l
/* 8016B828 00168628  7C 03 00 2E */	lwzx r0, r3, r0
/* 8016B82C 0016862C  7C 09 03 A6 */	mtctr r0
/* 8016B830 00168630  4E 80 04 20 */	bctr 
/* 8016B834 00168634  28 1F 00 00 */	cmplwi r31, 0
/* 8016B838 00168638  41 82 00 28 */	beq lbl_8016B860
/* 8016B83C 0016863C  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016B840 00168640  7F E4 FB 78 */	mr r4, r31
/* 8016B844 00168644  38 A3 A1 A0 */	addi r5, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016B848 00168648  38 61 00 08 */	addi r3, r1, 8
/* 8016B84C 0016864C  C0 25 00 28 */	lfs f1, 0x28(r5)
/* 8016B850 00168650  4B E9 F8 D1 */	bl __ml__5xVec3CFf
/* 8016B854 00168654  7F A3 EB 78 */	mr r3, r29
/* 8016B858 00168658  38 81 00 08 */	addi r4, r1, 8
/* 8016B85C 0016865C  48 00 1C 69 */	bl impart_velocity__13zNPCBPlanktonFRC5xVec3
lbl_8016B860:
/* 8016B860 00168660  7F A3 EB 78 */	mr r3, r29
/* 8016B864 00168664  48 00 1A 4D */	bl stun__13zNPCBPlanktonFv
lbl_8016B868:
/* 8016B868 00168668  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8016B86C 0016866C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8016B870 00168670  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8016B874 00168674  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8016B878 00168678  7C 08 03 A6 */	mtlr r0
/* 8016B87C 0016867C  38 21 00 30 */	addi r1, r1, 0x30
/* 8016B880 00168680  4E 80 00 20 */	blr 
/* 8016B884 00168684  3C 84 B1 B9 */	addis r4, r4, 0xb1b9
/* 8016B888 00168688  38 84 BD B5 */	addi r4, r4, -16971
/* 8016B88C 0016868C  28 04 00 0E */	cmplwi r4, 0xe
/* 8016B890 00168690  41 81 00 5C */	bgt lbl_8016B8EC
/* 8016B894 00168694  3C 60 80 2A */	lis r3, lbl__2049@ha
/* 8016B898 00168698  54 84 10 3A */	slwi r4, r4, 2
/* 8016B89C 0016869C  38 63 B0 24 */	addi r3, r3, lbl__2049@l
/* 8016B8A0 001686A0  7C 03 20 2E */	lwzx r0, r3, r4
/* 8016B8A4 001686A4  7C 09 03 A6 */	mtctr r0
/* 8016B8A8 001686A8  4E 80 04 20 */	bctr 
/* 8016B8AC 001686AC  38 00 00 01 */	li r0, 1
/* 8016B8B0 001686B0  48 00 00 40 */	b lbl_8016B8F0
/* 8016B8B4 001686B4  38 00 00 03 */	li r0, 3
/* 8016B8B8 001686B8  48 00 00 38 */	b lbl_8016B8F0
/* 8016B8BC 001686BC  38 00 00 42 */	li r0, 0x42
/* 8016B8C0 001686C0  48 00 00 30 */	b lbl_8016B8F0
/* 8016B8C4 001686C4  38 00 00 43 */	li r0, 0x43
/* 8016B8C8 001686C8  48 00 00 28 */	b lbl_8016B8F0
/* 8016B8CC 001686CC  38 00 00 46 */	li r0, 0x46
/* 8016B8D0 001686D0  48 00 00 20 */	b lbl_8016B8F0
/* 8016B8D4 001686D4  38 00 00 49 */	li r0, 0x49
/* 8016B8D8 001686D8  48 00 00 18 */	b lbl_8016B8F0
/* 8016B8DC 001686DC  38 00 00 4C */	li r0, 0x4c
/* 8016B8E0 001686E0  48 00 00 10 */	b lbl_8016B8F0
/* 8016B8E4 001686E4  38 00 00 4D */	li r0, 0x4d
/* 8016B8E8 001686E8  48 00 00 08 */	b lbl_8016B8F0
lbl_8016B8EC:
/* 8016B8EC 001686EC  38 00 00 01 */	li r0, 1
lbl_8016B8F0:
/* 8016B8F0 001686F0  2C 00 FF FF */	cmpwi r0, -1
/* 8016B8F4 001686F4  40 81 00 18 */	ble lbl_8016B90C
/* 8016B8F8 001686F8  3C 60 80 2A */	lis r3, lbl_g_hash_bossanim@ha
/* 8016B8FC 001686FC  54 00 10 3A */	slwi r0, r0, 2
/* 8016B900 00168700  38 63 92 68 */	addi r3, r3, lbl_g_hash_bossanim@l
/* 8016B904 00168704  7C 63 00 2E */	lwzx r3, r3, r0
/* 8016B908 00168708  4E 80 00 20 */	blr 
lbl_8016B90C:
/* 8016B90C 0016870C  38 60 00 00 */	li r3, 0
/* 8016B910 00168710  4E 80 00 20 */	blr 

.global next_goal__13zNPCBPlanktonFv
next_goal__13zNPCBPlanktonFv:
/* 8016B914 00168714  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016B918 00168718  7C 08 02 A6 */	mflr r0
/* 8016B91C 0016871C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016B920 00168720  80 03 02 C4 */	lwz r0, 0x2c4(r3)
/* 8016B924 00168724  2C 00 00 00 */	cmpwi r0, 0
/* 8016B928 00168728  40 82 00 40 */	bne lbl_8016B968
/* 8016B92C 0016872C  88 03 02 B7 */	lbz r0, 0x2b7(r3)
/* 8016B930 00168730  28 00 00 00 */	cmplwi r0, 0
/* 8016B934 00168734  41 82 00 10 */	beq lbl_8016B944
/* 8016B938 00168738  3C 60 4E 47 */	lis r3, 0x4E474250@ha
/* 8016B93C 0016873C  38 63 42 50 */	addi r3, r3, 0x4E474250@l
/* 8016B940 00168740  48 00 00 30 */	b lbl_8016B970
lbl_8016B944:
/* 8016B944 00168744  48 00 19 1D */	bl crony_attacking__13zNPCBPlanktonCFv
/* 8016B948 00168748  54 64 06 3E */	clrlwi r4, r3, 0x18
/* 8016B94C 0016874C  3C 60 4E 47 */	lis r3, 0x4E47424C@ha
/* 8016B950 00168750  7C 04 00 D0 */	neg r0, r4
/* 8016B954 00168754  7C 00 23 78 */	or r0, r0, r4
/* 8016B958 00168758  38 63 42 4C */	addi r3, r3, 0x4E47424C@l
/* 8016B95C 0016875C  7C 00 FE 70 */	srawi r0, r0, 0x1f
/* 8016B960 00168760  7C 60 1A 14 */	add r3, r0, r3
/* 8016B964 00168764  48 00 00 0C */	b lbl_8016B970
lbl_8016B968:
/* 8016B968 00168768  3C 60 4E 47 */	lis r3, 0x4E47424F@ha
/* 8016B96C 0016876C  38 63 42 4F */	addi r3, r3, 0x4E47424F@l
lbl_8016B970:
/* 8016B970 00168770  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016B974 00168774  7C 08 03 A6 */	mtlr r0
/* 8016B978 00168778  38 21 00 10 */	addi r1, r1, 0x10
/* 8016B97C 0016877C  4E 80 00 20 */	blr 

.global refresh_orbit__13zNPCBPlanktonFv
refresh_orbit__13zNPCBPlanktonFv:
/* 8016B980 00168780  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8016B984 00168784  7C 08 02 A6 */	mflr r0
/* 8016B988 00168788  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016B98C 0016878C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8016B990 00168790  7C 7F 1B 78 */	mr r31, r3
/* 8016B994 00168794  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8016B998 00168798  80 03 02 C4 */	lwz r0, 0x2c4(r3)
/* 8016B99C 0016879C  2C 00 00 00 */	cmpwi r0, 0
/* 8016B9A0 001687A0  40 82 00 F4 */	bne lbl_8016BA94
/* 8016B9A4 001687A4  88 1F 02 B7 */	lbz r0, 0x2b7(r31)
/* 8016B9A8 001687A8  28 00 00 00 */	cmplwi r0, 0
/* 8016B9AC 001687AC  41 82 00 6C */	beq lbl_8016BA18
/* 8016B9B0 001687B0  80 9F 04 50 */	lwz r4, 0x450(r31)
/* 8016B9B4 001687B4  80 7F 04 54 */	lwz r3, 0x454(r31)
/* 8016B9B8 001687B8  80 1F 04 58 */	lwz r0, 0x458(r31)
/* 8016B9BC 001687BC  90 81 00 14 */	stw r4, 0x14(r1)
/* 8016B9C0 001687C0  90 61 00 18 */	stw r3, 0x18(r1)
/* 8016B9C4 001687C4  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8016B9C8 001687C8  4B FF D0 CD */	bl zNPCTypeBossPlankton.get_player_loc__34_unnamed_zNPCTypeBossPlankton_cpp_Fv
/* 8016B9CC 001687CC  7C 64 1B 78 */	mr r4, r3
/* 8016B9D0 001687D0  38 7F 04 50 */	addi r3, r31, 0x450
/* 8016B9D4 001687D4  4B E9 F8 91 */	bl __as__5xVec3FRC5xVec3
/* 8016B9D8 001687D8  3C 80 80 33 */	lis r4, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016B9DC 001687DC  38 61 00 08 */	addi r3, r1, 8
/* 8016B9E0 001687E0  38 C4 A1 A0 */	addi r6, r4, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016B9E4 001687E4  38 9F 04 50 */	addi r4, r31, 0x450
/* 8016B9E8 001687E8  C0 26 01 3C */	lfs f1, 0x13c(r6)
/* 8016B9EC 001687EC  38 A1 00 14 */	addi r5, r1, 0x14
/* 8016B9F0 001687F0  C0 06 00 8C */	lfs f0, 0x8c(r6)
/* 8016B9F4 001687F4  EC 01 00 2A */	fadds f0, f1, f0
/* 8016B9F8 001687F8  D0 1F 04 54 */	stfs f0, 0x454(r31)
/* 8016B9FC 001687FC  C0 06 00 90 */	lfs f0, 0x90(r6)
/* 8016BA00 00168800  D0 1F 04 5C */	stfs f0, 0x45c(r31)
/* 8016BA04 00168804  4B E9 F7 C9 */	bl __mi__5xVec3CFRC5xVec3
/* 8016BA08 00168808  38 7F 04 74 */	addi r3, r31, 0x474
/* 8016BA0C 0016880C  38 81 00 08 */	addi r4, r1, 8
/* 8016BA10 00168810  4B EA 9A 35 */	bl __apl__5xVec3FRC5xVec3
/* 8016BA14 00168814  48 00 01 08 */	b lbl_8016BB1C
lbl_8016BA18:
/* 8016BA18 00168818  88 1F 02 B6 */	lbz r0, 0x2b6(r31)
/* 8016BA1C 0016881C  28 00 00 00 */	cmplwi r0, 0
/* 8016BA20 00168820  41 82 00 3C */	beq lbl_8016BA5C
/* 8016BA24 00168824  3C 80 80 33 */	lis r4, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016BA28 00168828  38 7F 04 50 */	addi r3, r31, 0x450
/* 8016BA2C 0016882C  38 84 A1 A0 */	addi r4, r4, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016BA30 00168830  38 84 01 38 */	addi r4, r4, 0x138
/* 8016BA34 00168834  4B E9 F8 31 */	bl __as__5xVec3FRC5xVec3
/* 8016BA38 00168838  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016BA3C 0016883C  C0 3F 04 54 */	lfs f1, 0x454(r31)
/* 8016BA40 00168840  38 63 A1 A0 */	addi r3, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016BA44 00168844  C0 03 01 48 */	lfs f0, 0x148(r3)
/* 8016BA48 00168848  EC 01 00 2A */	fadds f0, f1, f0
/* 8016BA4C 0016884C  D0 1F 04 54 */	stfs f0, 0x454(r31)
/* 8016BA50 00168850  C0 03 01 44 */	lfs f0, 0x144(r3)
/* 8016BA54 00168854  D0 1F 04 5C */	stfs f0, 0x45c(r31)
/* 8016BA58 00168858  48 00 00 C4 */	b lbl_8016BB1C
lbl_8016BA5C:
/* 8016BA5C 0016885C  3C 80 80 33 */	lis r4, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016BA60 00168860  38 7F 04 50 */	addi r3, r31, 0x450
/* 8016BA64 00168864  38 84 A1 A0 */	addi r4, r4, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016BA68 00168868  38 84 01 38 */	addi r4, r4, 0x138
/* 8016BA6C 0016886C  4B E9 F7 F9 */	bl __as__5xVec3FRC5xVec3
/* 8016BA70 00168870  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016BA74 00168874  C0 3F 04 54 */	lfs f1, 0x454(r31)
/* 8016BA78 00168878  38 63 A1 A0 */	addi r3, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016BA7C 0016887C  C0 03 01 50 */	lfs f0, 0x150(r3)
/* 8016BA80 00168880  EC 01 00 2A */	fadds f0, f1, f0
/* 8016BA84 00168884  D0 1F 04 54 */	stfs f0, 0x454(r31)
/* 8016BA88 00168888  C0 03 01 4C */	lfs f0, 0x14c(r3)
/* 8016BA8C 0016888C  D0 1F 04 5C */	stfs f0, 0x45c(r31)
/* 8016BA90 00168890  48 00 00 8C */	b lbl_8016BB1C
lbl_8016BA94:
/* 8016BA94 00168894  80 1F 06 98 */	lwz r0, 0x698(r31)
/* 8016BA98 00168898  38 7F 04 50 */	addi r3, r31, 0x450
/* 8016BA9C 0016889C  1C 80 00 3C */	mulli r4, r0, 0x3c
/* 8016BAA0 001688A0  38 04 04 B4 */	addi r0, r4, 0x4b4
/* 8016BAA4 001688A4  7C 9F 00 2E */	lwzx r4, r31, r0
/* 8016BAA8 001688A8  83 C4 00 10 */	lwz r30, 0x10(r4)
/* 8016BAAC 001688AC  38 9E 00 08 */	addi r4, r30, 8
/* 8016BAB0 001688B0  4B E9 F7 B5 */	bl __as__5xVec3FRC5xVec3
/* 8016BAB4 001688B4  C0 1E 00 20 */	lfs f0, 0x20(r30)
/* 8016BAB8 001688B8  D0 1F 04 5C */	stfs f0, 0x45c(r31)
/* 8016BABC 001688BC  88 1F 02 B6 */	lbz r0, 0x2b6(r31)
/* 8016BAC0 001688C0  28 00 00 00 */	cmplwi r0, 0
/* 8016BAC4 001688C4  41 82 00 30 */	beq lbl_8016BAF4
/* 8016BAC8 001688C8  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016BACC 001688CC  C0 3F 04 5C */	lfs f1, 0x45c(r31)
/* 8016BAD0 001688D0  38 63 A1 A0 */	addi r3, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016BAD4 001688D4  C0 03 01 00 */	lfs f0, 0x100(r3)
/* 8016BAD8 001688D8  EC 01 00 2A */	fadds f0, f1, f0
/* 8016BADC 001688DC  D0 1F 04 5C */	stfs f0, 0x45c(r31)
/* 8016BAE0 001688E0  C0 3F 04 54 */	lfs f1, 0x454(r31)
/* 8016BAE4 001688E4  C0 03 01 04 */	lfs f0, 0x104(r3)
/* 8016BAE8 001688E8  EC 01 00 2A */	fadds f0, f1, f0
/* 8016BAEC 001688EC  D0 1F 04 54 */	stfs f0, 0x454(r31)
/* 8016BAF0 001688F0  48 00 00 2C */	b lbl_8016BB1C
lbl_8016BAF4:
/* 8016BAF4 001688F4  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016BAF8 001688F8  C0 3F 04 5C */	lfs f1, 0x45c(r31)
/* 8016BAFC 001688FC  38 63 A1 A0 */	addi r3, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016BB00 00168900  C0 03 00 F8 */	lfs f0, 0xf8(r3)
/* 8016BB04 00168904  EC 01 00 2A */	fadds f0, f1, f0
/* 8016BB08 00168908  D0 1F 04 5C */	stfs f0, 0x45c(r31)
/* 8016BB0C 0016890C  C0 3F 04 54 */	lfs f1, 0x454(r31)
/* 8016BB10 00168910  C0 03 00 FC */	lfs f0, 0xfc(r3)
/* 8016BB14 00168914  EC 01 00 2A */	fadds f0, f1, f0
/* 8016BB18 00168918  D0 1F 04 54 */	stfs f0, 0x454(r31)
lbl_8016BB1C:
/* 8016BB1C 0016891C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8016BB20 00168920  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8016BB24 00168924  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8016BB28 00168928  7C 08 03 A6 */	mtlr r0
/* 8016BB2C 0016892C  38 21 00 30 */	addi r1, r1, 0x30
/* 8016BB30 00168930  4E 80 00 20 */	blr 

.global scan_cronies__13zNPCBPlanktonFv
scan_cronies__13zNPCBPlanktonFv:
/* 8016BB34 00168934  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016BB38 00168938  7C 08 02 A6 */	mflr r0
/* 8016BB3C 0016893C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016BB40 00168940  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8016BB44 00168944  7C 7B 1B 78 */	mr r27, r3
/* 8016BB48 00168948  4B F8 27 8D */	bl zNPCMgr_GetNPCList__Fv
/* 8016BB4C 0016894C  3B C0 00 00 */	li r30, 0
/* 8016BB50 00168950  7C 7F 1B 78 */	mr r31, r3
/* 8016BB54 00168954  93 DB 04 B0 */	stw r30, 0x4b0(r27)
/* 8016BB58 00168958  3B A0 00 00 */	li r29, 0
/* 8016BB5C 0016895C  48 00 00 30 */	b lbl_8016BB8C
lbl_8016BB60:
/* 8016BB60 00168960  80 7F 00 00 */	lwz r3, 0(r31)
/* 8016BB64 00168964  7F 83 F0 2E */	lwzx r28, r3, r30
/* 8016BB68 00168968  7F 83 E3 78 */	mr r3, r28
/* 8016BB6C 0016896C  4B EE A9 79 */	bl SelfType__9xNPCBasicCFv
/* 8016BB70 00168970  3C 03 B1 AC */	addis r0, r3, 0xb1ac
/* 8016BB74 00168974  28 00 42 33 */	cmplwi r0, 0x4233
/* 8016BB78 00168978  40 82 00 0C */	bne lbl_8016BB84
/* 8016BB7C 0016897C  93 9B 04 B0 */	stw r28, 0x4b0(r27)
/* 8016BB80 00168980  48 00 00 18 */	b lbl_8016BB98
lbl_8016BB84:
/* 8016BB84 00168984  3B DE 00 04 */	addi r30, r30, 4
/* 8016BB88 00168988  3B BD 00 01 */	addi r29, r29, 1
lbl_8016BB8C:
/* 8016BB8C 0016898C  80 1F 00 04 */	lwz r0, 4(r31)
/* 8016BB90 00168990  7C 1D 00 00 */	cmpw r29, r0
/* 8016BB94 00168994  41 80 FF CC */	blt lbl_8016BB60
lbl_8016BB98:
/* 8016BB98 00168998  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8016BB9C 0016899C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016BBA0 001689A0  7C 08 03 A6 */	mtlr r0
/* 8016BBA4 001689A4  38 21 00 20 */	addi r1, r1, 0x20
/* 8016BBA8 001689A8  4E 80 00 20 */	blr 

.global zNPCTypeBossPlankton.set_yaw_matrix__34_unnamed_zNPCTypeBossPlankton_cpp_FR7xMat3x3f
zNPCTypeBossPlankton.set_yaw_matrix__34_unnamed_zNPCTypeBossPlankton_cpp_FR7xMat3x3f:
/* 8016BBAC 001689AC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8016BBB0 001689B0  7C 08 02 A6 */	mflr r0
/* 8016BBB4 001689B4  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016BBB8 001689B8  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8016BBBC 001689BC  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8016BBC0 001689C0  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 8016BBC4 001689C4  F3 C1 00 18 */	psq_st f30, 24(r1), 0, qr0
/* 8016BBC8 001689C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016BBCC 001689CC  7C 7F 1B 78 */	mr r31, r3
/* 8016BBD0 001689D0  FF C0 08 90 */	fmr f30, f1
/* 8016BBD4 001689D4  4B F5 92 79 */	bl isin__Ff
/* 8016BBD8 001689D8  FC 00 08 90 */	fmr f0, f1
/* 8016BBDC 001689DC  FC 20 F0 90 */	fmr f1, f30
/* 8016BBE0 001689E0  FF E0 00 90 */	fmr f31, f0
/* 8016BBE4 001689E4  4B F5 92 AD */	bl icos__Ff
/* 8016BBE8 001689E8  FC 60 F8 50 */	fneg f3, f31
/* 8016BBEC 001689EC  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016BBF0 001689F0  FF C0 08 90 */	fmr f30, f1
/* 8016BBF4 001689F4  7F E3 FB 78 */	mr r3, r31
/* 8016BBF8 001689F8  4B E9 F4 F5 */	bl assign__5xVec3Ffff
/* 8016BBFC 001689FC  C0 22 AB 10 */	lfs f1, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016BC00 00168A00  38 7F 00 10 */	addi r3, r31, 0x10
/* 8016BC04 00168A04  C0 42 AB 0C */	lfs f2, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016BC08 00168A08  FC 60 08 90 */	fmr f3, f1
/* 8016BC0C 00168A0C  4B E9 F4 E1 */	bl assign__5xVec3Ffff
/* 8016BC10 00168A10  FC 20 F8 90 */	fmr f1, f31
/* 8016BC14 00168A14  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016BC18 00168A18  FC 60 F0 90 */	fmr f3, f30
/* 8016BC1C 00168A1C  38 7F 00 20 */	addi r3, r31, 0x20
/* 8016BC20 00168A20  4B E9 F4 CD */	bl assign__5xVec3Ffff
/* 8016BC24 00168A24  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8016BC28 00168A28  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8016BC2C 00168A2C  E3 C1 00 18 */	psq_l f30, 24(r1), 0, qr0
/* 8016BC30 00168A30  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 8016BC34 00168A34  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8016BC38 00168A38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016BC3C 00168A3C  7C 08 03 A6 */	mtlr r0
/* 8016BC40 00168A40  38 21 00 30 */	addi r1, r1, 0x30
/* 8016BC44 00168A44  4E 80 00 20 */	blr 

.global zNPCTypeBossPlankton.update_move_accel__34_unnamed_zNPCTypeBossPlankton_cpp_FR5xVec3RQ213zNPCBPlankton9move_infof
zNPCTypeBossPlankton.update_move_accel__34_unnamed_zNPCTypeBossPlankton_cpp_FR5xVec3RQ213zNPCBPlankton9move_infof:
/* 8016BC48 00168A48  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016BC4C 00168A4C  7C 08 02 A6 */	mflr r0
/* 8016BC50 00168A50  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016BC54 00168A54  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8016BC58 00168A58  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8016BC5C 00168A5C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016BC60 00168A60  93 C1 00 08 */	stw r30, 8(r1)
/* 8016BC64 00168A64  FF E0 08 90 */	fmr f31, f1
/* 8016BC68 00168A68  7C 9F 23 78 */	mr r31, r4
/* 8016BC6C 00168A6C  C0 24 00 18 */	lfs f1, 0x18(r4)
/* 8016BC70 00168A70  7C 7E 1B 78 */	mr r30, r3
/* 8016BC74 00168A74  C0 64 00 24 */	lfs f3, 0x24(r4)
/* 8016BC78 00168A78  38 9F 00 0C */	addi r4, r31, 0xc
/* 8016BC7C 00168A7C  FC 40 F8 90 */	fmr f2, f31
/* 8016BC80 00168A80  4B EC 58 11 */	bl xAccelMove__FRfRffff
/* 8016BC84 00168A84  FC 40 F8 90 */	fmr f2, f31
/* 8016BC88 00168A88  C0 3F 00 1C */	lfs f1, 0x1c(r31)
/* 8016BC8C 00168A8C  C0 7F 00 28 */	lfs f3, 0x28(r31)
/* 8016BC90 00168A90  38 7E 00 04 */	addi r3, r30, 4
/* 8016BC94 00168A94  38 9F 00 10 */	addi r4, r31, 0x10
/* 8016BC98 00168A98  4B EC 57 F9 */	bl xAccelMove__FRfRffff
/* 8016BC9C 00168A9C  FC 40 F8 90 */	fmr f2, f31
/* 8016BCA0 00168AA0  C0 3F 00 20 */	lfs f1, 0x20(r31)
/* 8016BCA4 00168AA4  C0 7F 00 2C */	lfs f3, 0x2c(r31)
/* 8016BCA8 00168AA8  38 7E 00 08 */	addi r3, r30, 8
/* 8016BCAC 00168AAC  38 9F 00 14 */	addi r4, r31, 0x14
/* 8016BCB0 00168AB0  4B EC 57 E1 */	bl xAccelMove__FRfRffff
/* 8016BCB4 00168AB4  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8016BCB8 00168AB8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016BCBC 00168ABC  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8016BCC0 00168AC0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016BCC4 00168AC4  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016BCC8 00168AC8  7C 08 03 A6 */	mtlr r0
/* 8016BCCC 00168ACC  38 21 00 20 */	addi r1, r1, 0x20
/* 8016BCD0 00168AD0  4E 80 00 20 */	blr 

.global zNPCTypeBossPlankton.update_move_stop__34_unnamed_zNPCTypeBossPlankton_cpp_FR5xVec3RQ213zNPCBPlankton9move_infof
zNPCTypeBossPlankton.update_move_stop__34_unnamed_zNPCTypeBossPlankton_cpp_FR5xVec3RQ213zNPCBPlankton9move_infof:
/* 8016BCD4 00168AD4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016BCD8 00168AD8  7C 08 02 A6 */	mflr r0
/* 8016BCDC 00168ADC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016BCE0 00168AE0  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8016BCE4 00168AE4  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8016BCE8 00168AE8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016BCEC 00168AEC  93 C1 00 08 */	stw r30, 8(r1)
/* 8016BCF0 00168AF0  FF E0 08 90 */	fmr f31, f1
/* 8016BCF4 00168AF4  7C 9F 23 78 */	mr r31, r4
/* 8016BCF8 00168AF8  C0 24 00 18 */	lfs f1, 0x18(r4)
/* 8016BCFC 00168AFC  7C 7E 1B 78 */	mr r30, r3
/* 8016BD00 00168B00  38 9F 00 0C */	addi r4, r31, 0xc
/* 8016BD04 00168B04  FC 40 F8 90 */	fmr f2, f31
/* 8016BD08 00168B08  4B EC 58 75 */	bl xAccelStop__FRfRfff
/* 8016BD0C 00168B0C  FC 40 F8 90 */	fmr f2, f31
/* 8016BD10 00168B10  C0 3F 00 1C */	lfs f1, 0x1c(r31)
/* 8016BD14 00168B14  38 7E 00 04 */	addi r3, r30, 4
/* 8016BD18 00168B18  38 9F 00 10 */	addi r4, r31, 0x10
/* 8016BD1C 00168B1C  4B EC 58 61 */	bl xAccelStop__FRfRfff
/* 8016BD20 00168B20  FC 40 F8 90 */	fmr f2, f31
/* 8016BD24 00168B24  C0 3F 00 20 */	lfs f1, 0x20(r31)
/* 8016BD28 00168B28  38 7E 00 08 */	addi r3, r30, 8
/* 8016BD2C 00168B2C  38 9F 00 14 */	addi r4, r31, 0x14
/* 8016BD30 00168B30  4B EC 58 4D */	bl xAccelStop__FRfRfff
/* 8016BD34 00168B34  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8016BD38 00168B38  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016BD3C 00168B3C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8016BD40 00168B40  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016BD44 00168B44  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016BD48 00168B48  7C 08 03 A6 */	mtlr r0
/* 8016BD4C 00168B4C  38 21 00 20 */	addi r1, r1, 0x20
/* 8016BD50 00168B50  4E 80 00 20 */	blr 

.global zNPCTypeBossPlankton.update_move_orbit__34_unnamed_zNPCTypeBossPlankton_cpp_FR5xVec3RQ213zNPCBPlankton9move_infoRC5xVec3fb
zNPCTypeBossPlankton.update_move_orbit__34_unnamed_zNPCTypeBossPlankton_cpp_FR5xVec3RQ213zNPCBPlankton9move_infoRC5xVec3fb:
/* 8016BD54 00168B54  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 8016BD58 00168B58  7C 08 02 A6 */	mflr r0
/* 8016BD5C 00168B5C  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 8016BD60 00168B60  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 8016BD64 00168B64  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 8016BD68 00168B68  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 8016BD6C 00168B6C  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 8016BD70 00168B70  DB A1 00 B0 */	stfd f29, 0xb0(r1)
/* 8016BD74 00168B74  F3 A1 00 B8 */	psq_st f29, 184(r1), 0, qr0
/* 8016BD78 00168B78  DB 81 00 A0 */	stfd f28, 0xa0(r1)
/* 8016BD7C 00168B7C  F3 81 00 A8 */	psq_st f28, 168(r1), 0, qr0
/* 8016BD80 00168B80  BF 61 00 8C */	stmw r27, 0x8c(r1)
/* 8016BD84 00168B84  3C E0 80 27 */	lis r7, lbl__405_9@ha
/* 8016BD88 00168B88  7C 7C 1B 78 */	mr r28, r3
/* 8016BD8C 00168B8C  3B E7 0F A8 */	addi r31, r7, lbl__405_9@l
/* 8016BD90 00168B90  7C 9D 23 78 */	mr r29, r4
/* 8016BD94 00168B94  81 5F 04 44 */	lwz r10, 0x444(r31)
/* 8016BD98 00168B98  7C BE 2B 78 */	mr r30, r5
/* 8016BD9C 00168B9C  81 3F 04 48 */	lwz r9, 0x448(r31)
/* 8016BDA0 00168BA0  FF C0 08 90 */	fmr f30, f1
/* 8016BDA4 00168BA4  81 1F 04 4C */	lwz r8, 0x44c(r31)
/* 8016BDA8 00168BA8  7C DB 33 78 */	mr r27, r6
/* 8016BDAC 00168BAC  80 FF 04 50 */	lwz r7, 0x450(r31)
/* 8016BDB0 00168BB0  38 61 00 20 */	addi r3, r1, 0x20
/* 8016BDB4 00168BB4  80 DF 04 54 */	lwz r6, 0x454(r31)
/* 8016BDB8 00168BB8  80 1F 04 58 */	lwz r0, 0x458(r31)
/* 8016BDBC 00168BBC  38 81 00 74 */	addi r4, r1, 0x74
/* 8016BDC0 00168BC0  91 41 00 74 */	stw r10, 0x74(r1)
/* 8016BDC4 00168BC4  C0 9C 00 00 */	lfs f4, 0(r28)
/* 8016BDC8 00168BC8  91 21 00 78 */	stw r9, 0x78(r1)
/* 8016BDCC 00168BCC  C0 65 00 04 */	lfs f3, 4(r5)
/* 8016BDD0 00168BD0  90 C1 00 6C */	stw r6, 0x6c(r1)
/* 8016BDD4 00168BD4  C0 5C 00 08 */	lfs f2, 8(r28)
/* 8016BDD8 00168BD8  91 01 00 7C */	stw r8, 0x7c(r1)
/* 8016BDDC 00168BDC  C0 3D 00 00 */	lfs f1, 0(r29)
/* 8016BDE0 00168BE0  90 E1 00 68 */	stw r7, 0x68(r1)
/* 8016BDE4 00168BE4  C0 1D 00 08 */	lfs f0, 8(r29)
/* 8016BDE8 00168BE8  90 01 00 70 */	stw r0, 0x70(r1)
/* 8016BDEC 00168BEC  D0 81 00 74 */	stfs f4, 0x74(r1)
/* 8016BDF0 00168BF0  D0 61 00 78 */	stfs f3, 0x78(r1)
/* 8016BDF4 00168BF4  D0 41 00 7C */	stfs f2, 0x7c(r1)
/* 8016BDF8 00168BF8  D0 21 00 68 */	stfs f1, 0x68(r1)
/* 8016BDFC 00168BFC  D0 61 00 6C */	stfs f3, 0x6c(r1)
/* 8016BE00 00168C00  D0 01 00 70 */	stfs f0, 0x70(r1)
/* 8016BE04 00168C04  4B E9 F3 C9 */	bl __mi__5xVec3CFRC5xVec3
/* 8016BE08 00168C08  80 E1 00 20 */	lwz r7, 0x20(r1)
/* 8016BE0C 00168C0C  7F C5 F3 78 */	mr r5, r30
/* 8016BE10 00168C10  80 C1 00 24 */	lwz r6, 0x24(r1)
/* 8016BE14 00168C14  38 61 00 14 */	addi r3, r1, 0x14
/* 8016BE18 00168C18  80 01 00 28 */	lwz r0, 0x28(r1)
/* 8016BE1C 00168C1C  38 81 00 68 */	addi r4, r1, 0x68
/* 8016BE20 00168C20  90 E1 00 5C */	stw r7, 0x5c(r1)
/* 8016BE24 00168C24  90 C1 00 60 */	stw r6, 0x60(r1)
/* 8016BE28 00168C28  90 01 00 64 */	stw r0, 0x64(r1)
/* 8016BE2C 00168C2C  4B E9 F3 A1 */	bl __mi__5xVec3CFRC5xVec3
/* 8016BE30 00168C30  80 A1 00 14 */	lwz r5, 0x14(r1)
/* 8016BE34 00168C34  38 61 00 5C */	addi r3, r1, 0x5c
/* 8016BE38 00168C38  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8016BE3C 00168C3C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8016BE40 00168C40  90 A1 00 50 */	stw r5, 0x50(r1)
/* 8016BE44 00168C44  90 81 00 54 */	stw r4, 0x54(r1)
/* 8016BE48 00168C48  90 01 00 58 */	stw r0, 0x58(r1)
/* 8016BE4C 00168C4C  4B E9 F3 5D */	bl length__5xVec3CFv
/* 8016BE50 00168C50  FF E0 08 90 */	fmr f31, f1
/* 8016BE54 00168C54  38 61 00 50 */	addi r3, r1, 0x50
/* 8016BE58 00168C58  4B E9 F3 51 */	bl length__5xVec3CFv
/* 8016BE5C 00168C5C  FF A0 08 90 */	fmr f29, f1
/* 8016BE60 00168C60  C0 21 00 5C */	lfs f1, 0x5c(r1)
/* 8016BE64 00168C64  C0 41 00 64 */	lfs f2, 0x64(r1)
/* 8016BE68 00168C68  4B E9 A2 09 */	bl xatan2__Fff
/* 8016BE6C 00168C6C  FC 00 08 90 */	fmr f0, f1
/* 8016BE70 00168C70  C0 21 00 50 */	lfs f1, 0x50(r1)
/* 8016BE74 00168C74  C0 41 00 58 */	lfs f2, 0x58(r1)
/* 8016BE78 00168C78  FF 80 00 90 */	fmr f28, f0
/* 8016BE7C 00168C7C  4B E9 A1 F5 */	bl xatan2__Fff
/* 8016BE80 00168C80  EC 01 E0 28 */	fsubs f0, f1, f28
/* 8016BE84 00168C84  C0 22 AB B0 */	lfs f1, lbl__2165-_SDA2_BASE_(r2)
/* 8016BE88 00168C88  EC 21 00 2A */	fadds f1, f1, f0
/* 8016BE8C 00168C8C  4B EA 29 69 */	bl xrmod__Ff
/* 8016BE90 00168C90  C0 42 AB B0 */	lfs f2, lbl__2165-_SDA2_BASE_(r2)
/* 8016BE94 00168C94  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 8016BE98 00168C98  80 7F 04 5C */	lwz r3, 0x45c(r31)
/* 8016BE9C 00168C9C  EC 1D F8 28 */	fsubs f0, f29, f31
/* 8016BEA0 00168CA0  EC 61 10 28 */	fsubs f3, f1, f2
/* 8016BEA4 00168CA4  80 DF 04 60 */	lwz r6, 0x460(r31)
/* 8016BEA8 00168CA8  C0 5D 00 04 */	lfs f2, 4(r29)
/* 8016BEAC 00168CAC  C0 3C 00 04 */	lfs f1, 4(r28)
/* 8016BEB0 00168CB0  80 BF 04 64 */	lwz r5, 0x464(r31)
/* 8016BEB4 00168CB4  EC 63 07 72 */	fmuls f3, f3, f29
/* 8016BEB8 00168CB8  90 61 00 44 */	stw r3, 0x44(r1)
/* 8016BEBC 00168CBC  EC 22 08 28 */	fsubs f1, f2, f1
/* 8016BEC0 00168CC0  80 9F 04 68 */	lwz r4, 0x468(r31)
/* 8016BEC4 00168CC4  80 7F 04 6C */	lwz r3, 0x46c(r31)
/* 8016BEC8 00168CC8  90 C1 00 48 */	stw r6, 0x48(r1)
/* 8016BECC 00168CCC  80 1F 04 70 */	lwz r0, 0x470(r31)
/* 8016BED0 00168CD0  90 A1 00 4C */	stw r5, 0x4c(r1)
/* 8016BED4 00168CD4  D0 61 00 44 */	stfs f3, 0x44(r1)
/* 8016BED8 00168CD8  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 8016BEDC 00168CDC  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 8016BEE0 00168CE0  90 81 00 38 */	stw r4, 0x38(r1)
/* 8016BEE4 00168CE4  90 61 00 3C */	stw r3, 0x3c(r1)
/* 8016BEE8 00168CE8  90 01 00 40 */	stw r0, 0x40(r1)
/* 8016BEEC 00168CEC  41 82 00 20 */	beq lbl_8016BF0C
/* 8016BEF0 00168CF0  FC 40 F0 90 */	fmr f2, f30
/* 8016BEF4 00168CF4  C0 3D 00 18 */	lfs f1, 0x18(r29)
/* 8016BEF8 00168CF8  C0 7D 00 24 */	lfs f3, 0x24(r29)
/* 8016BEFC 00168CFC  38 61 00 38 */	addi r3, r1, 0x38
/* 8016BF00 00168D00  38 9D 00 0C */	addi r4, r29, 0xc
/* 8016BF04 00168D04  4B EC 55 8D */	bl xAccelMove__FRfRffff
/* 8016BF08 00168D08  48 00 00 1C */	b lbl_8016BF24
lbl_8016BF0C:
/* 8016BF0C 00168D0C  FC 40 F0 90 */	fmr f2, f30
/* 8016BF10 00168D10  C0 3D 00 18 */	lfs f1, 0x18(r29)
/* 8016BF14 00168D14  C0 9D 00 24 */	lfs f4, 0x24(r29)
/* 8016BF18 00168D18  38 61 00 38 */	addi r3, r1, 0x38
/* 8016BF1C 00168D1C  38 9D 00 0C */	addi r4, r29, 0xc
/* 8016BF20 00168D20  4B EC 52 35 */	bl xAccelMove__FRfRfffff
lbl_8016BF24:
/* 8016BF24 00168D24  FC 40 F0 90 */	fmr f2, f30
/* 8016BF28 00168D28  C0 3D 00 1C */	lfs f1, 0x1c(r29)
/* 8016BF2C 00168D2C  C0 61 00 48 */	lfs f3, 0x48(r1)
/* 8016BF30 00168D30  38 61 00 3C */	addi r3, r1, 0x3c
/* 8016BF34 00168D34  C0 9D 00 28 */	lfs f4, 0x28(r29)
/* 8016BF38 00168D38  38 9D 00 10 */	addi r4, r29, 0x10
/* 8016BF3C 00168D3C  4B EC 52 19 */	bl xAccelMove__FRfRfffff
/* 8016BF40 00168D40  FC 40 F0 90 */	fmr f2, f30
/* 8016BF44 00168D44  C0 3D 00 20 */	lfs f1, 0x20(r29)
/* 8016BF48 00168D48  C0 61 00 4C */	lfs f3, 0x4c(r1)
/* 8016BF4C 00168D4C  38 61 00 40 */	addi r3, r1, 0x40
/* 8016BF50 00168D50  C0 9D 00 2C */	lfs f4, 0x2c(r29)
/* 8016BF54 00168D54  38 9D 00 14 */	addi r4, r29, 0x14
/* 8016BF58 00168D58  4B EC 51 FD */	bl xAccelMove__FRfRfffff
/* 8016BF5C 00168D5C  C0 02 AB B4 */	lfs f0, lbl__2166-_SDA2_BASE_(r2)
/* 8016BF60 00168D60  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8016BF64 00168D64  4C 41 13 82 */	cror 2, 1, 2
/* 8016BF68 00168D68  40 82 00 2C */	bne lbl_8016BF94
/* 8016BF6C 00168D6C  C0 02 AB 28 */	lfs f0, lbl__1755_1-_SDA2_BASE_(r2)
/* 8016BF70 00168D70  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8016BF74 00168D74  4C 40 13 82 */	cror 2, 0, 2
/* 8016BF78 00168D78  40 82 00 1C */	bne lbl_8016BF94
/* 8016BF7C 00168D7C  C0 42 AB 10 */	lfs f2, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016BF80 00168D80  38 61 00 2C */	addi r3, r1, 0x2c
/* 8016BF84 00168D84  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016BF88 00168D88  FC 60 10 90 */	fmr f3, f2
/* 8016BF8C 00168D8C  4B E9 F1 61 */	bl assign__5xVec3Ffff
/* 8016BF90 00168D90  48 00 00 30 */	b lbl_8016BFC0
lbl_8016BF94:
/* 8016BF94 00168D94  C0 02 AB 0C */	lfs f0, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016BF98 00168D98  38 61 00 08 */	addi r3, r1, 8
/* 8016BF9C 00168D9C  38 81 00 5C */	addi r4, r1, 0x5c
/* 8016BFA0 00168DA0  EF A0 F8 24 */	fdivs f29, f0, f31
/* 8016BFA4 00168DA4  FC 20 E8 90 */	fmr f1, f29
/* 8016BFA8 00168DA8  4B E9 F1 79 */	bl __ml__5xVec3CFf
/* 8016BFAC 00168DAC  38 61 00 2C */	addi r3, r1, 0x2c
/* 8016BFB0 00168DB0  38 81 00 08 */	addi r4, r1, 8
/* 8016BFB4 00168DB4  4B E9 F2 B1 */	bl __as__5xVec3FRC5xVec3
/* 8016BFB8 00168DB8  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 8016BFBC 00168DBC  EF 80 E7 7A */	fmadds f28, f0, f29, f28
lbl_8016BFC0:
/* 8016BFC0 00168DC0  FC 20 E0 90 */	fmr f1, f28
/* 8016BFC4 00168DC4  4B F5 8E 89 */	bl isin__Ff
/* 8016BFC8 00168DC8  C0 1E 00 00 */	lfs f0, 0(r30)
/* 8016BFCC 00168DCC  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 8016BFD0 00168DD0  EC 7F 00 7A */	fmadds f3, f31, f1, f0
/* 8016BFD4 00168DD4  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 8016BFD8 00168DD8  FC 20 E0 90 */	fmr f1, f28
/* 8016BFDC 00168DDC  EC 02 18 3A */	fmadds f0, f2, f0, f3
/* 8016BFE0 00168DE0  D0 1C 00 00 */	stfs f0, 0(r28)
/* 8016BFE4 00168DE4  C0 5C 00 04 */	lfs f2, 4(r28)
/* 8016BFE8 00168DE8  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 8016BFEC 00168DEC  EC 02 00 2A */	fadds f0, f2, f0
/* 8016BFF0 00168DF0  D0 1C 00 04 */	stfs f0, 4(r28)
/* 8016BFF4 00168DF4  4B F5 8E 9D */	bl icos__Ff
/* 8016BFF8 00168DF8  C0 1E 00 08 */	lfs f0, 8(r30)
/* 8016BFFC 00168DFC  C0 41 00 34 */	lfs f2, 0x34(r1)
/* 8016C000 00168E00  EC 3F 00 7A */	fmadds f1, f31, f1, f0
/* 8016C004 00168E04  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 8016C008 00168E08  EC 02 08 3A */	fmadds f0, f2, f0, f1
/* 8016C00C 00168E0C  D0 1C 00 08 */	stfs f0, 8(r28)
/* 8016C010 00168E10  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 8016C014 00168E14  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 8016C018 00168E18  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 8016C01C 00168E1C  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 8016C020 00168E20  E3 A1 00 B8 */	psq_l f29, 184(r1), 0, qr0
/* 8016C024 00168E24  CB A1 00 B0 */	lfd f29, 0xb0(r1)
/* 8016C028 00168E28  E3 81 00 A8 */	psq_l f28, 168(r1), 0, qr0
/* 8016C02C 00168E2C  CB 81 00 A0 */	lfd f28, 0xa0(r1)
/* 8016C030 00168E30  BB 61 00 8C */	lmw r27, 0x8c(r1)
/* 8016C034 00168E34  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 8016C038 00168E38  7C 08 03 A6 */	mtlr r0
/* 8016C03C 00168E3C  38 21 00 E0 */	addi r1, r1, 0xe0
/* 8016C040 00168E40  4E 80 00 20 */	blr 

.global update_turn__13zNPCBPlanktonFf
update_turn__13zNPCBPlanktonFf:
/* 8016C044 00168E44  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8016C048 00168E48  7C 08 02 A6 */	mflr r0
/* 8016C04C 00168E4C  90 01 00 44 */	stw r0, 0x44(r1)
/* 8016C050 00168E50  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8016C054 00168E54  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8016C058 00168E58  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8016C05C 00168E5C  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 8016C060 00168E60  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016C064 00168E64  7C 7F 1B 78 */	mr r31, r3
/* 8016C068 00168E68  FF C0 08 90 */	fmr f30, f1
/* 8016C06C 00168E6C  48 00 3B 4D */	bl location__13zNPCBPlanktonCFv
/* 8016C070 00168E70  80 BF 00 24 */	lwz r5, 0x24(r31)
/* 8016C074 00168E74  7F E3 FB 78 */	mr r3, r31
/* 8016C078 00168E78  80 82 BF F0 */	lwz r4, lbl__2188_2-_SDA2_BASE_(r2)
/* 8016C07C 00168E7C  80 A5 00 4C */	lwz r5, 0x4c(r5)
/* 8016C080 00168E80  80 02 BF F4 */	lwz r0, lbl_803D0974-_SDA2_BASE_(r2)
/* 8016C084 00168E84  90 81 00 0C */	stw r4, 0xc(r1)
/* 8016C088 00168E88  C0 25 00 20 */	lfs f1, 0x20(r5)
/* 8016C08C 00168E8C  90 01 00 10 */	stw r0, 0x10(r1)
/* 8016C090 00168E90  C0 05 00 28 */	lfs f0, 0x28(r5)
/* 8016C094 00168E94  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8016C098 00168E98  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8016C09C 00168E9C  48 00 3B 3D */	bl turning__13zNPCBPlanktonCFv
/* 8016C0A0 00168EA0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016C0A4 00168EA4  41 82 00 80 */	beq lbl_8016C124
/* 8016C0A8 00168EA8  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8016C0AC 00168EAC  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8016C0B0 00168EB0  4B E9 9F C1 */	bl xatan2__Fff
/* 8016C0B4 00168EB4  FF E0 08 90 */	fmr f31, f1
/* 8016C0B8 00168EB8  C0 3F 04 60 */	lfs f1, 0x460(r31)
/* 8016C0BC 00168EBC  C0 5F 04 64 */	lfs f2, 0x464(r31)
/* 8016C0C0 00168EC0  4B E9 9F B1 */	bl xatan2__Fff
/* 8016C0C4 00168EC4  EC 61 F8 28 */	fsubs f3, f1, f31
/* 8016C0C8 00168EC8  C0 02 AB B0 */	lfs f0, lbl__2165-_SDA2_BASE_(r2)
/* 8016C0CC 00168ECC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8016C0D0 00168ED0  40 81 00 10 */	ble lbl_8016C0E0
/* 8016C0D4 00168ED4  C0 02 AB B8 */	lfs f0, lbl__2172-_SDA2_BASE_(r2)
/* 8016C0D8 00168ED8  EC 63 00 28 */	fsubs f3, f3, f0
/* 8016C0DC 00168EDC  48 00 00 18 */	b lbl_8016C0F4
lbl_8016C0E0:
/* 8016C0E0 00168EE0  C0 02 AB BC */	lfs f0, lbl__2200_1-_SDA2_BASE_(r2)
/* 8016C0E4 00168EE4  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8016C0E8 00168EE8  40 80 00 0C */	bge lbl_8016C0F4
/* 8016C0EC 00168EEC  C0 02 AB B8 */	lfs f0, lbl__2172-_SDA2_BASE_(r2)
/* 8016C0F0 00168EF0  EC 63 00 2A */	fadds f3, f3, f0
lbl_8016C0F4:
/* 8016C0F4 00168EF4  FC 00 F8 18 */	frsp f0, f31
/* 8016C0F8 00168EF8  D3 E1 00 08 */	stfs f31, 8(r1)
/* 8016C0FC 00168EFC  FC 40 F0 90 */	fmr f2, f30
/* 8016C100 00168F00  38 61 00 08 */	addi r3, r1, 8
/* 8016C104 00168F04  C0 3F 04 6C */	lfs f1, 0x46c(r31)
/* 8016C108 00168F08  38 9F 04 68 */	addi r4, r31, 0x468
/* 8016C10C 00168F0C  EC 60 18 2A */	fadds f3, f0, f3
/* 8016C110 00168F10  C0 9F 04 70 */	lfs f4, 0x470(r31)
/* 8016C114 00168F14  4B EC 50 41 */	bl xAccelMove__FRfRfffff
/* 8016C118 00168F18  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 8016C11C 00168F1C  C0 21 00 08 */	lfs f1, 8(r1)
/* 8016C120 00168F20  4B FF FA 8D */	bl zNPCTypeBossPlankton.set_yaw_matrix__34_unnamed_zNPCTypeBossPlankton_cpp_FR7xMat3x3f
lbl_8016C124:
/* 8016C124 00168F24  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8016C128 00168F28  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8016C12C 00168F2C  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 8016C130 00168F30  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8016C134 00168F34  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8016C138 00168F38  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016C13C 00168F3C  7C 08 03 A6 */	mtlr r0
/* 8016C140 00168F40  38 21 00 40 */	addi r1, r1, 0x40
/* 8016C144 00168F44  4E 80 00 20 */	blr 

.global update_move__13zNPCBPlanktonFf
update_move__13zNPCBPlanktonFf:
/* 8016C148 00168F48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016C14C 00168F4C  7C 08 02 A6 */	mflr r0
/* 8016C150 00168F50  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016C154 00168F54  80 03 02 BC */	lwz r0, 0x2bc(r3)
/* 8016C158 00168F58  2C 00 00 02 */	cmpwi r0, 2
/* 8016C15C 00168F5C  41 82 00 34 */	beq lbl_8016C190
/* 8016C160 00168F60  40 80 00 10 */	bge lbl_8016C170
/* 8016C164 00168F64  2C 00 00 01 */	cmpwi r0, 1
/* 8016C168 00168F68  40 80 00 14 */	bge lbl_8016C17C
/* 8016C16C 00168F6C  48 00 00 50 */	b lbl_8016C1BC
lbl_8016C170:
/* 8016C170 00168F70  2C 00 00 04 */	cmpwi r0, 4
/* 8016C174 00168F74  40 80 00 48 */	bge lbl_8016C1BC
/* 8016C178 00168F78  48 00 00 2C */	b lbl_8016C1A4
lbl_8016C17C:
/* 8016C17C 00168F7C  80 A3 00 48 */	lwz r5, 0x48(r3)
/* 8016C180 00168F80  38 83 04 74 */	addi r4, r3, 0x474
/* 8016C184 00168F84  38 65 00 30 */	addi r3, r5, 0x30
/* 8016C188 00168F88  4B FF FA C1 */	bl zNPCTypeBossPlankton.update_move_accel__34_unnamed_zNPCTypeBossPlankton_cpp_FR5xVec3RQ213zNPCBPlankton9move_infof
/* 8016C18C 00168F8C  48 00 00 30 */	b lbl_8016C1BC
lbl_8016C190:
/* 8016C190 00168F90  80 A3 00 48 */	lwz r5, 0x48(r3)
/* 8016C194 00168F94  38 83 04 74 */	addi r4, r3, 0x474
/* 8016C198 00168F98  38 65 00 30 */	addi r3, r5, 0x30
/* 8016C19C 00168F9C  4B FF FB 39 */	bl zNPCTypeBossPlankton.update_move_stop__34_unnamed_zNPCTypeBossPlankton_cpp_FR5xVec3RQ213zNPCBPlankton9move_infof
/* 8016C1A0 00168FA0  48 00 00 1C */	b lbl_8016C1BC
lbl_8016C1A4:
/* 8016C1A4 00168FA4  80 E3 00 48 */	lwz r7, 0x48(r3)
/* 8016C1A8 00168FA8  38 83 04 74 */	addi r4, r3, 0x474
/* 8016C1AC 00168FAC  38 A3 04 50 */	addi r5, r3, 0x450
/* 8016C1B0 00168FB0  38 C0 00 00 */	li r6, 0
/* 8016C1B4 00168FB4  38 67 00 30 */	addi r3, r7, 0x30
/* 8016C1B8 00168FB8  4B FF FB 9D */	bl zNPCTypeBossPlankton.update_move_orbit__34_unnamed_zNPCTypeBossPlankton_cpp_FR5xVec3RQ213zNPCBPlankton9move_infoRC5xVec3fb
lbl_8016C1BC:
/* 8016C1BC 00168FBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016C1C0 00168FC0  7C 08 03 A6 */	mtlr r0
/* 8016C1C4 00168FC4  38 21 00 10 */	addi r1, r1, 0x10
/* 8016C1C8 00168FC8  4E 80 00 20 */	blr 

.global zNPCTypeBossPlankton.world_to_ring_vel__34_unnamed_zNPCTypeBossPlankton_cpp_FRC5xVec3RC5xVec3RC5xVec3
zNPCTypeBossPlankton.world_to_ring_vel__34_unnamed_zNPCTypeBossPlankton_cpp_FRC5xVec3RC5xVec3RC5xVec3:
/* 8016C1CC 00168FCC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8016C1D0 00168FD0  7C 08 02 A6 */	mflr r0
/* 8016C1D4 00168FD4  90 01 00 44 */	stw r0, 0x44(r1)
/* 8016C1D8 00168FD8  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8016C1DC 00168FDC  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8016C1E0 00168FE0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8016C1E4 00168FE4  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8016C1E8 00168FE8  C0 25 00 00 */	lfs f1, 0(r5)
/* 8016C1EC 00168FEC  7C 9F 23 78 */	mr r31, r4
/* 8016C1F0 00168FF0  C0 06 00 00 */	lfs f0, 0(r6)
/* 8016C1F4 00168FF4  7C 7E 1B 78 */	mr r30, r3
/* 8016C1F8 00168FF8  81 02 BF C0 */	lwz r8, lbl__2112_1-_SDA2_BASE_(r2)
/* 8016C1FC 00168FFC  38 61 00 18 */	addi r3, r1, 0x18
/* 8016C200 00169000  80 E2 BF C4 */	lwz r7, lbl_803D0944-_SDA2_BASE_(r2)
/* 8016C204 00169004  EC 41 00 28 */	fsubs f2, f1, f0
/* 8016C208 00169008  80 82 BF C8 */	lwz r4, lbl__2113-_SDA2_BASE_(r2)
/* 8016C20C 0016900C  80 02 BF CC */	lwz r0, lbl_803D094C-_SDA2_BASE_(r2)
/* 8016C210 00169010  90 81 00 18 */	stw r4, 0x18(r1)
/* 8016C214 00169014  C0 25 00 08 */	lfs f1, 8(r5)
/* 8016C218 00169018  C0 06 00 08 */	lfs f0, 8(r6)
/* 8016C21C 0016901C  91 01 00 20 */	stw r8, 0x20(r1)
/* 8016C220 00169020  C0 7F 00 00 */	lfs f3, 0(r31)
/* 8016C224 00169024  EC 01 00 28 */	fsubs f0, f1, f0
/* 8016C228 00169028  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8016C22C 0016902C  C0 3F 00 08 */	lfs f1, 8(r31)
/* 8016C230 00169030  90 E1 00 24 */	stw r7, 0x24(r1)
/* 8016C234 00169034  D0 61 00 20 */	stfs f3, 0x20(r1)
/* 8016C238 00169038  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8016C23C 0016903C  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 8016C240 00169040  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8016C244 00169044  4B EC A6 15 */	bl length__5xVec2CFv
/* 8016C248 00169048  38 61 00 18 */	addi r3, r1, 0x18
/* 8016C24C 0016904C  48 00 40 79 */	bl __dv__5xVec2CFf
/* 8016C250 00169050  90 81 00 14 */	stw r4, 0x14(r1)
/* 8016C254 00169054  38 81 00 10 */	addi r4, r1, 0x10
/* 8016C258 00169058  80 A2 BF D0 */	lwz r5, lbl__2114-_SDA2_BASE_(r2)
/* 8016C25C 0016905C  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8016C260 00169060  90 61 00 10 */	stw r3, 0x10(r1)
/* 8016C264 00169064  38 61 00 20 */	addi r3, r1, 0x20
/* 8016C268 00169068  80 02 BF D4 */	lwz r0, lbl_803D0954-_SDA2_BASE_(r2)
/* 8016C26C 0016906C  FC 20 00 50 */	fneg f1, f0
/* 8016C270 00169070  90 A1 00 08 */	stw r5, 8(r1)
/* 8016C274 00169074  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8016C278 00169078  90 01 00 0C */	stw r0, 0xc(r1)
/* 8016C27C 0016907C  D0 21 00 08 */	stfs f1, 8(r1)
/* 8016C280 00169080  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8016C284 00169084  4B FB 12 3D */	bl dot__5xVec2CFRC5xVec2
/* 8016C288 00169088  FF E0 08 90 */	fmr f31, f1
/* 8016C28C 0016908C  38 61 00 20 */	addi r3, r1, 0x20
/* 8016C290 00169090  38 81 00 08 */	addi r4, r1, 8
/* 8016C294 00169094  4B FB 12 2D */	bl dot__5xVec2CFRC5xVec2
/* 8016C298 00169098  FC 60 F8 90 */	fmr f3, f31
/* 8016C29C 0016909C  C0 5F 00 04 */	lfs f2, 4(r31)
/* 8016C2A0 001690A0  7F C3 F3 78 */	mr r3, r30
/* 8016C2A4 001690A4  4B EF 3C E5 */	bl create__5xVec3Ffff
/* 8016C2A8 001690A8  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8016C2AC 001690AC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8016C2B0 001690B0  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8016C2B4 001690B4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8016C2B8 001690B8  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8016C2BC 001690BC  7C 08 03 A6 */	mtlr r0
/* 8016C2C0 001690C0  38 21 00 40 */	addi r1, r1, 0x40
/* 8016C2C4 001690C4  4E 80 00 20 */	blr 

.global zNPCTypeBossPlankton.ring_to_world_vel__34_unnamed_zNPCTypeBossPlankton_cpp_FRC5xVec3RC5xVec3RC5xVec3
zNPCTypeBossPlankton.ring_to_world_vel__34_unnamed_zNPCTypeBossPlankton_cpp_FRC5xVec3RC5xVec3RC5xVec3:
/* 8016C2C8 001690C8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8016C2CC 001690CC  7C 08 02 A6 */	mflr r0
/* 8016C2D0 001690D0  C0 25 00 00 */	lfs f1, 0(r5)
/* 8016C2D4 001690D4  90 01 00 44 */	stw r0, 0x44(r1)
/* 8016C2D8 001690D8  C0 06 00 00 */	lfs f0, 0(r6)
/* 8016C2DC 001690DC  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8016C2E0 001690E0  7C 9F 23 78 */	mr r31, r4
/* 8016C2E4 001690E4  EC 41 00 28 */	fsubs f2, f1, f0
/* 8016C2E8 001690E8  C0 25 00 08 */	lfs f1, 8(r5)
/* 8016C2EC 001690EC  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8016C2F0 001690F0  7C 7E 1B 78 */	mr r30, r3
/* 8016C2F4 001690F4  C0 06 00 08 */	lfs f0, 8(r6)
/* 8016C2F8 001690F8  38 61 00 18 */	addi r3, r1, 0x18
/* 8016C2FC 001690FC  80 82 BF D8 */	lwz r4, lbl__2118-_SDA2_BASE_(r2)
/* 8016C300 00169100  EC 01 00 28 */	fsubs f0, f1, f0
/* 8016C304 00169104  80 02 BF DC */	lwz r0, lbl_803D095C-_SDA2_BASE_(r2)
/* 8016C308 00169108  90 81 00 18 */	stw r4, 0x18(r1)
/* 8016C30C 0016910C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8016C310 00169110  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 8016C314 00169114  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8016C318 00169118  4B FB 11 C5 */	bl normal__5xVec2CFv
/* 8016C31C 0016911C  90 81 00 14 */	stw r4, 0x14(r1)
/* 8016C320 00169120  3C 80 80 27 */	lis r4, lbl__2120@ha
/* 8016C324 00169124  38 A4 13 D4 */	addi r5, r4, lbl__2120@l
/* 8016C328 00169128  80 C2 BF E0 */	lwz r6, lbl__2119-_SDA2_BASE_(r2)
/* 8016C32C 0016912C  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8016C330 00169130  90 61 00 10 */	stw r3, 0x10(r1)
/* 8016C334 00169134  FC 80 00 50 */	fneg f4, f0
/* 8016C338 00169138  C0 3F 00 08 */	lfs f1, 8(r31)
/* 8016C33C 0016913C  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 8016C340 00169140  80 85 00 00 */	lwz r4, 0(r5)
/* 8016C344 00169144  EC 01 00 32 */	fmuls f0, f1, f0
/* 8016C348 00169148  FC 40 20 18 */	frsp f2, f4
/* 8016C34C 0016914C  C0 BF 00 00 */	lfs f5, 0(r31)
/* 8016C350 00169150  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8016C354 00169154  80 65 00 04 */	lwz r3, 4(r5)
/* 8016C358 00169158  80 05 00 08 */	lwz r0, 8(r5)
/* 8016C35C 0016915C  EC 05 00 FA */	fmadds f0, f5, f3, f0
/* 8016C360 00169160  EC 45 08 BA */	fmadds f2, f5, f2, f1
/* 8016C364 00169164  90 81 00 20 */	stw r4, 0x20(r1)
/* 8016C368 00169168  80 82 BF E4 */	lwz r4, lbl_803D0964-_SDA2_BASE_(r2)
/* 8016C36C 0016916C  90 61 00 24 */	stw r3, 0x24(r1)
/* 8016C370 00169170  C0 3F 00 04 */	lfs f1, 4(r31)
/* 8016C374 00169174  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8016C378 00169178  90 01 00 28 */	stw r0, 0x28(r1)
/* 8016C37C 0016917C  80 01 00 20 */	lwz r0, 0x20(r1)
/* 8016C380 00169180  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8016C384 00169184  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8016C388 00169188  80 61 00 24 */	lwz r3, 0x24(r1)
/* 8016C38C 0016918C  90 1E 00 00 */	stw r0, 0(r30)
/* 8016C390 00169190  80 01 00 28 */	lwz r0, 0x28(r1)
/* 8016C394 00169194  90 C1 00 08 */	stw r6, 8(r1)
/* 8016C398 00169198  90 81 00 0C */	stw r4, 0xc(r1)
/* 8016C39C 0016919C  90 7E 00 04 */	stw r3, 4(r30)
/* 8016C3A0 001691A0  D0 81 00 08 */	stfs f4, 8(r1)
/* 8016C3A4 001691A4  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 8016C3A8 001691A8  90 1E 00 08 */	stw r0, 8(r30)
/* 8016C3AC 001691AC  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8016C3B0 001691B0  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8016C3B4 001691B4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8016C3B8 001691B8  7C 08 03 A6 */	mtlr r0
/* 8016C3BC 001691BC  38 21 00 40 */	addi r1, r1, 0x40
/* 8016C3C0 001691C0  4E 80 00 20 */	blr 

.global reset_territories__13zNPCBPlanktonFv
reset_territories__13zNPCBPlanktonFv:
/* 8016C3C4 001691C4  80 83 06 94 */	lwz r4, 0x694(r3)
/* 8016C3C8 001691C8  38 A3 04 B4 */	addi r5, r3, 0x4b4
/* 8016C3CC 001691CC  38 00 00 00 */	li r0, 0
/* 8016C3D0 001691D0  1C 64 00 3C */	mulli r3, r4, 0x3c
/* 8016C3D4 001691D4  7C 65 1A 14 */	add r3, r5, r3
/* 8016C3D8 001691D8  48 00 00 18 */	b lbl_8016C3F0
lbl_8016C3DC:
/* 8016C3DC 001691DC  98 05 00 35 */	stb r0, 0x35(r5)
/* 8016C3E0 001691E0  98 05 00 34 */	stb r0, 0x34(r5)
/* 8016C3E4 001691E4  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016C3E8 001691E8  D0 05 00 38 */	stfs f0, 0x38(r5)
/* 8016C3EC 001691EC  38 A5 00 3C */	addi r5, r5, 0x3c
lbl_8016C3F0:
/* 8016C3F0 001691F0  7C 05 18 40 */	cmplw r5, r3
/* 8016C3F4 001691F4  40 82 FF E8 */	bne lbl_8016C3DC
/* 8016C3F8 001691F8  4E 80 00 20 */	blr 

.global update_dialog__13zNPCBPlanktonFf
update_dialog__13zNPCBPlanktonFf:
/* 8016C3FC 001691FC  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8016C400 00169200  7C 08 02 A6 */	mflr r0
/* 8016C404 00169204  90 01 00 54 */	stw r0, 0x54(r1)
/* 8016C408 00169208  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8016C40C 0016920C  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8016C410 00169210  BF 61 00 2C */	stmw r27, 0x2c(r1)
/* 8016C414 00169214  7C 7E 1B 78 */	mr r30, r3
/* 8016C418 00169218  FF E0 08 90 */	fmr f31, f1
/* 8016C41C 0016921C  80 03 02 C4 */	lwz r0, 0x2c4(r3)
/* 8016C420 00169220  2C 00 00 00 */	cmpwi r0, 0
/* 8016C424 00169224  41 82 01 A8 */	beq lbl_8016C5CC
/* 8016C428 00169228  3C 80 80 3C */	lis r4, lbl_globals@ha
/* 8016C42C 0016922C  80 BE 06 A0 */	lwz r5, 0x6a0(r30)
/* 8016C430 00169230  3B A4 05 58 */	addi r29, r4, lbl_globals@l
/* 8016C434 00169234  80 1D 16 B0 */	lwz r0, 0x16b0(r29)
/* 8016C438 00169238  7C 00 28 40 */	cmplw r0, r5
/* 8016C43C 0016923C  40 80 00 1C */	bge lbl_8016C458
/* 8016C440 00169240  28 05 00 00 */	cmplwi r5, 0
/* 8016C444 00169244  41 82 00 14 */	beq lbl_8016C458
/* 8016C448 00169248  38 80 00 07 */	li r4, 7
/* 8016C44C 0016924C  38 A0 00 00 */	li r5, 0
/* 8016C450 00169250  38 C0 00 00 */	li r6, 0
/* 8016C454 00169254  48 00 13 29 */	bl say__13zNPCBPlanktonFiib
lbl_8016C458:
/* 8016C458 00169258  80 1D 16 B0 */	lwz r0, 0x16b0(r29)
/* 8016C45C 0016925C  90 1E 06 A0 */	stw r0, 0x6a0(r30)
/* 8016C460 00169260  4B FF C6 35 */	bl zNPCTypeBossPlankton.get_player_loc__34_unnamed_zNPCTypeBossPlankton_cpp_Fv
/* 8016C464 00169264  80 9E 06 98 */	lwz r4, 0x698(r30)
/* 8016C468 00169268  7C 7F 1B 78 */	mr r31, r3
/* 8016C46C 0016926C  37 84 FF FF */	addic. r28, r4, -1
/* 8016C470 00169270  40 80 00 08 */	bge lbl_8016C478
/* 8016C474 00169274  3B 80 00 00 */	li r28, 0
lbl_8016C478:
/* 8016C478 00169278  1C 1C 00 3C */	mulli r0, r28, 0x3c
/* 8016C47C 0016927C  7F BE 02 14 */	add r29, r30, r0
/* 8016C480 00169280  48 00 00 50 */	b lbl_8016C4D0
lbl_8016C484:
/* 8016C484 00169284  80 7D 04 BC */	lwz r3, 0x4bc(r29)
/* 8016C488 00169288  28 03 00 00 */	cmplwi r3, 0
/* 8016C48C 0016928C  41 82 00 3C */	beq lbl_8016C4C8
/* 8016C490 00169290  88 1D 04 E9 */	lbz r0, 0x4e9(r29)
/* 8016C494 00169294  28 00 00 00 */	cmplwi r0, 0
/* 8016C498 00169298  40 82 00 30 */	bne lbl_8016C4C8
/* 8016C49C 0016929C  4B EF 4D 61 */	bl zEntDestructObj_isDestroyed__FP15zEntDestructObj
/* 8016C4A0 001692A0  28 03 00 00 */	cmplwi r3, 0
/* 8016C4A4 001692A4  41 82 00 24 */	beq lbl_8016C4C8
/* 8016C4A8 001692A8  7F C3 F3 78 */	mr r3, r30
/* 8016C4AC 001692AC  38 80 00 02 */	li r4, 2
/* 8016C4B0 001692B0  38 A0 00 00 */	li r5, 0
/* 8016C4B4 001692B4  38 C0 00 00 */	li r6, 0
/* 8016C4B8 001692B8  48 00 12 C5 */	bl say__13zNPCBPlanktonFiib
/* 8016C4BC 001692BC  38 00 00 01 */	li r0, 1
/* 8016C4C0 001692C0  98 1D 04 E9 */	stb r0, 0x4e9(r29)
/* 8016C4C4 001692C4  48 00 01 08 */	b lbl_8016C5CC
lbl_8016C4C8:
/* 8016C4C8 001692C8  3B BD 00 3C */	addi r29, r29, 0x3c
/* 8016C4CC 001692CC  3B 9C 00 01 */	addi r28, r28, 1
lbl_8016C4D0:
/* 8016C4D0 001692D0  80 1E 06 98 */	lwz r0, 0x698(r30)
/* 8016C4D4 001692D4  7C 1C 00 00 */	cmpw r28, r0
/* 8016C4D8 001692D8  40 81 FF AC */	ble lbl_8016C484
/* 8016C4DC 001692DC  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016C4E0 001692E0  7F DC F3 78 */	mr r28, r30
/* 8016C4E4 001692E4  3B A3 A1 A0 */	addi r29, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016C4E8 001692E8  3B 60 00 00 */	li r27, 0
/* 8016C4EC 001692EC  48 00 00 D4 */	b lbl_8016C5C0
lbl_8016C4F0:
/* 8016C4F0 001692F0  80 1C 04 E4 */	lwz r0, 0x4e4(r28)
/* 8016C4F4 001692F4  2C 00 00 00 */	cmpwi r0, 0
/* 8016C4F8 001692F8  40 81 00 C0 */	ble lbl_8016C5B8
/* 8016C4FC 001692FC  80 7C 04 BC */	lwz r3, 0x4bc(r28)
/* 8016C500 00169300  28 03 00 00 */	cmplwi r3, 0
/* 8016C504 00169304  41 82 00 B4 */	beq lbl_8016C5B8
/* 8016C508 00169308  88 1C 04 E8 */	lbz r0, 0x4e8(r28)
/* 8016C50C 0016930C  28 00 00 00 */	cmplwi r0, 0
/* 8016C510 00169310  40 82 00 A8 */	bne lbl_8016C5B8
/* 8016C514 00169314  4B EF 4C E9 */	bl zEntDestructObj_isDestroyed__FP15zEntDestructObj
/* 8016C518 00169318  28 03 00 00 */	cmplwi r3, 0
/* 8016C51C 0016931C  40 82 00 9C */	bne lbl_8016C5B8
/* 8016C520 00169320  80 BC 04 BC */	lwz r5, 0x4bc(r28)
/* 8016C524 00169324  7F E4 FB 78 */	mr r4, r31
/* 8016C528 00169328  38 61 00 08 */	addi r3, r1, 8
/* 8016C52C 0016932C  80 A5 00 24 */	lwz r5, 0x24(r5)
/* 8016C530 00169330  80 A5 00 4C */	lwz r5, 0x4c(r5)
/* 8016C534 00169334  38 A5 00 30 */	addi r5, r5, 0x30
/* 8016C538 00169338  4B E9 EC 95 */	bl __mi__5xVec3CFRC5xVec3
/* 8016C53C 0016933C  80 A1 00 08 */	lwz r5, 8(r1)
/* 8016C540 00169340  38 61 00 14 */	addi r3, r1, 0x14
/* 8016C544 00169344  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016C548 00169348  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8016C54C 0016934C  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8016C550 00169350  90 81 00 18 */	stw r4, 0x18(r1)
/* 8016C554 00169354  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8016C558 00169358  4B E9 EB A5 */	bl length2__5xVec3CFv
/* 8016C55C 0016935C  C0 1D 00 48 */	lfs f0, 0x48(r29)
/* 8016C560 00169360  EC 00 00 32 */	fmuls f0, f0, f0
/* 8016C564 00169364  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016C568 00169368  4C 40 13 82 */	cror 2, 0, 2
/* 8016C56C 0016936C  40 82 00 44 */	bne lbl_8016C5B0
/* 8016C570 00169370  C0 1C 04 EC */	lfs f0, 0x4ec(r28)
/* 8016C574 00169374  EC 00 F8 2A */	fadds f0, f0, f31
/* 8016C578 00169378  D0 1C 04 EC */	stfs f0, 0x4ec(r28)
/* 8016C57C 0016937C  C0 3C 04 EC */	lfs f1, 0x4ec(r28)
/* 8016C580 00169380  C0 1D 00 4C */	lfs f0, 0x4c(r29)
/* 8016C584 00169384  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016C588 00169388  4C 41 13 82 */	cror 2, 1, 2
/* 8016C58C 0016938C  40 82 00 2C */	bne lbl_8016C5B8
/* 8016C590 00169390  38 00 00 01 */	li r0, 1
/* 8016C594 00169394  7F C3 F3 78 */	mr r3, r30
/* 8016C598 00169398  98 1C 04 E8 */	stb r0, 0x4e8(r28)
/* 8016C59C 0016939C  38 80 00 01 */	li r4, 1
/* 8016C5A0 001693A0  38 A0 00 00 */	li r5, 0
/* 8016C5A4 001693A4  38 C0 00 00 */	li r6, 0
/* 8016C5A8 001693A8  48 00 11 D5 */	bl say__13zNPCBPlanktonFiib
/* 8016C5AC 001693AC  48 00 00 20 */	b lbl_8016C5CC
lbl_8016C5B0:
/* 8016C5B0 001693B0  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016C5B4 001693B4  D0 1C 04 EC */	stfs f0, 0x4ec(r28)
lbl_8016C5B8:
/* 8016C5B8 001693B8  3B 9C 00 3C */	addi r28, r28, 0x3c
/* 8016C5BC 001693BC  3B 7B 00 01 */	addi r27, r27, 1
lbl_8016C5C0:
/* 8016C5C0 001693C0  80 1E 06 98 */	lwz r0, 0x698(r30)
/* 8016C5C4 001693C4  7C 1B 00 00 */	cmpw r27, r0
/* 8016C5C8 001693C8  41 80 FF 28 */	blt lbl_8016C4F0
lbl_8016C5CC:
/* 8016C5CC 001693CC  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8016C5D0 001693D0  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8016C5D4 001693D4  BB 61 00 2C */	lmw r27, 0x2c(r1)
/* 8016C5D8 001693D8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8016C5DC 001693DC  7C 08 03 A6 */	mtlr r0
/* 8016C5E0 001693E0  38 21 00 50 */	addi r1, r1, 0x50
/* 8016C5E4 001693E4  4E 80 00 20 */	blr 

.global update_animation__13zNPCBPlanktonFf
update_animation__13zNPCBPlanktonFf:
/* 8016C5E8 001693E8  4E 80 00 20 */	blr 

.global update_follow__13zNPCBPlanktonFf
update_follow__13zNPCBPlanktonFf:
/* 8016C5EC 001693EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016C5F0 001693F0  7C 08 02 A6 */	mflr r0
/* 8016C5F4 001693F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016C5F8 001693F8  80 03 02 C0 */	lwz r0, 0x2c0(r3)
/* 8016C5FC 001693FC  2C 00 00 02 */	cmpwi r0, 2
/* 8016C600 00169400  41 82 00 1C */	beq lbl_8016C61C
/* 8016C604 00169404  40 80 00 1C */	bge lbl_8016C620
/* 8016C608 00169408  2C 00 00 01 */	cmpwi r0, 1
/* 8016C60C 0016940C  40 80 00 08 */	bge lbl_8016C614
/* 8016C610 00169410  48 00 00 10 */	b lbl_8016C620
lbl_8016C614:
/* 8016C614 00169414  48 00 00 1D */	bl update_follow_player__13zNPCBPlanktonFf
/* 8016C618 00169418  48 00 00 08 */	b lbl_8016C620
lbl_8016C61C:
/* 8016C61C 0016941C  48 00 01 19 */	bl update_follow_camera__13zNPCBPlanktonFf
lbl_8016C620:
/* 8016C620 00169420  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016C624 00169424  7C 08 03 A6 */	mtlr r0
/* 8016C628 00169428  38 21 00 10 */	addi r1, r1, 0x10
/* 8016C62C 0016942C  4E 80 00 20 */	blr 

.global update_follow_player__13zNPCBPlanktonFf
update_follow_player__13zNPCBPlanktonFf:
/* 8016C630 00169430  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8016C634 00169434  7C 08 02 A6 */	mflr r0
/* 8016C638 00169438  90 01 00 54 */	stw r0, 0x54(r1)
/* 8016C63C 0016943C  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8016C640 00169440  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8016C644 00169444  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 8016C648 00169448  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 8016C64C 0016944C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8016C650 00169450  7C 7F 1B 78 */	mr r31, r3
/* 8016C654 00169454  C0 03 04 A4 */	lfs f0, 0x4a4(r3)
/* 8016C658 00169458  EC 00 08 2A */	fadds f0, f0, f1
/* 8016C65C 0016945C  D0 03 04 A4 */	stfs f0, 0x4a4(r3)
/* 8016C660 00169460  C0 23 04 A4 */	lfs f1, 0x4a4(r3)
/* 8016C664 00169464  C0 03 04 A8 */	lfs f0, 0x4a8(r3)
/* 8016C668 00169468  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016C66C 0016946C  4C 41 13 82 */	cror 2, 1, 2
/* 8016C670 00169470  41 82 00 34 */	beq lbl_8016C6A4
/* 8016C674 00169474  4B FF C4 21 */	bl zNPCTypeBossPlankton.get_player_loc__34_unnamed_zNPCTypeBossPlankton_cpp_Fv
/* 8016C678 00169478  7C 65 1B 78 */	mr r5, r3
/* 8016C67C 0016947C  7F E3 FB 78 */	mr r3, r31
/* 8016C680 00169480  38 9F 04 74 */	addi r4, r31, 0x474
/* 8016C684 00169484  48 00 03 01 */	bl orbit_yaw_offset__13zNPCBPlanktonCFRC5xVec3RC5xVec3
/* 8016C688 00169488  FC 20 0A 10 */	fabs f1, f1
/* 8016C68C 0016948C  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016C690 00169490  38 63 A1 A0 */	addi r3, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016C694 00169494  C0 03 00 3C */	lfs f0, 0x3c(r3)
/* 8016C698 00169498  FC 20 08 18 */	frsp f1, f1
/* 8016C69C 0016949C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016C6A0 001694A0  40 81 00 70 */	ble lbl_8016C710
lbl_8016C6A4:
/* 8016C6A4 001694A4  7F E4 FB 78 */	mr r4, r31
/* 8016C6A8 001694A8  38 61 00 14 */	addi r3, r1, 0x14
/* 8016C6AC 001694AC  48 00 0A 45 */	bl player_orbit__13zNPCBPlanktonCFv
/* 8016C6B0 001694B0  38 7F 04 74 */	addi r3, r31, 0x474
/* 8016C6B4 001694B4  38 81 00 14 */	addi r4, r1, 0x14
/* 8016C6B8 001694B8  4B E9 EB AD */	bl __as__5xVec3FRC5xVec3
/* 8016C6BC 001694BC  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016C6C0 001694C0  C0 22 AB 10 */	lfs f1, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016C6C4 001694C4  38 63 A1 A0 */	addi r3, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016C6C8 001694C8  7F E4 FB 78 */	mr r4, r31
/* 8016C6CC 001694CC  C0 43 00 38 */	lfs f2, 0x38(r3)
/* 8016C6D0 001694D0  38 61 00 08 */	addi r3, r1, 8
/* 8016C6D4 001694D4  38 BF 04 74 */	addi r5, r31, 0x474
/* 8016C6D8 001694D8  48 00 08 9D */	bl random_orbit__13zNPCBPlanktonCFRC5xVec3ff
/* 8016C6DC 001694DC  38 7F 04 74 */	addi r3, r31, 0x474
/* 8016C6E0 001694E0  38 81 00 08 */	addi r4, r1, 8
/* 8016C6E4 001694E4  4B E9 EB 81 */	bl __as__5xVec3FRC5xVec3
/* 8016C6E8 001694E8  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016C6EC 001694EC  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016C6F0 001694F0  38 63 A1 A0 */	addi r3, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016C6F4 001694F4  D0 1F 04 A4 */	stfs f0, 0x4a4(r31)
/* 8016C6F8 001694F8  C3 E3 00 40 */	lfs f31, 0x40(r3)
/* 8016C6FC 001694FC  C3 C3 00 44 */	lfs f30, 0x44(r3)
/* 8016C700 00169500  4B EC 45 89 */	bl xurand__Fv
/* 8016C704 00169504  EC 1E F8 28 */	fsubs f0, f30, f31
/* 8016C708 00169508  EC 00 F8 7A */	fmadds f0, f0, f1, f31
/* 8016C70C 0016950C  D0 1F 04 A8 */	stfs f0, 0x4a8(r31)
lbl_8016C710:
/* 8016C710 00169510  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8016C714 00169514  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8016C718 00169518  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 8016C71C 0016951C  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 8016C720 00169520  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8016C724 00169524  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8016C728 00169528  7C 08 03 A6 */	mtlr r0
/* 8016C72C 0016952C  38 21 00 50 */	addi r1, r1, 0x50
/* 8016C730 00169530  4E 80 00 20 */	blr 

.global update_follow_camera__13zNPCBPlanktonFf
update_follow_camera__13zNPCBPlanktonFf:
/* 8016C734 00169534  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8016C738 00169538  7C 08 02 A6 */	mflr r0
/* 8016C73C 0016953C  90 01 00 64 */	stw r0, 0x64(r1)
/* 8016C740 00169540  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8016C744 00169544  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 8016C748 00169548  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 8016C74C 0016954C  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 8016C750 00169550  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8016C754 00169554  7C 7F 1B 78 */	mr r31, r3
/* 8016C758 00169558  FF C0 08 90 */	fmr f30, f1
/* 8016C75C 0016955C  3C 60 80 3C */	lis r3, lbl_globals@ha
/* 8016C760 00169560  C0 3F 04 5C */	lfs f1, 0x45c(r31)
/* 8016C764 00169564  38 83 05 58 */	addi r4, r3, lbl_globals@l
/* 8016C768 00169568  38 61 00 14 */	addi r3, r1, 0x14
/* 8016C76C 0016956C  38 84 00 34 */	addi r4, r4, 0x34
/* 8016C770 00169570  4B E9 E9 B1 */	bl __ml__5xVec3CFf
/* 8016C774 00169574  38 61 00 20 */	addi r3, r1, 0x20
/* 8016C778 00169578  38 9F 04 50 */	addi r4, r31, 0x450
/* 8016C77C 0016957C  38 A1 00 14 */	addi r5, r1, 0x14
/* 8016C780 00169580  4B EA 8C 61 */	bl __pl__5xVec3CFRC5xVec3
/* 8016C784 00169584  C0 1F 04 A4 */	lfs f0, 0x4a4(r31)
/* 8016C788 00169588  80 81 00 20 */	lwz r4, 0x20(r1)
/* 8016C78C 0016958C  EC 00 F0 2A */	fadds f0, f0, f30
/* 8016C790 00169590  80 61 00 24 */	lwz r3, 0x24(r1)
/* 8016C794 00169594  80 01 00 28 */	lwz r0, 0x28(r1)
/* 8016C798 00169598  90 81 00 2C */	stw r4, 0x2c(r1)
/* 8016C79C 0016959C  D0 1F 04 A4 */	stfs f0, 0x4a4(r31)
/* 8016C7A0 001695A0  C0 3F 04 A4 */	lfs f1, 0x4a4(r31)
/* 8016C7A4 001695A4  C0 1F 04 A8 */	lfs f0, 0x4a8(r31)
/* 8016C7A8 001695A8  90 61 00 30 */	stw r3, 0x30(r1)
/* 8016C7AC 001695AC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016C7B0 001695B0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016C7B4 001695B4  4C 41 13 82 */	cror 2, 1, 2
/* 8016C7B8 001695B8  41 82 00 2C */	beq lbl_8016C7E4
/* 8016C7BC 001695BC  7F E3 FB 78 */	mr r3, r31
/* 8016C7C0 001695C0  38 9F 04 74 */	addi r4, r31, 0x474
/* 8016C7C4 001695C4  38 A1 00 2C */	addi r5, r1, 0x2c
/* 8016C7C8 001695C8  48 00 01 BD */	bl orbit_yaw_offset__13zNPCBPlanktonCFRC5xVec3RC5xVec3
/* 8016C7CC 001695CC  4B F5 30 05 */	bl fabsf__3stdFf
/* 8016C7D0 001695D0  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016C7D4 001695D4  38 63 A1 A0 */	addi r3, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016C7D8 001695D8  C0 03 00 3C */	lfs f0, 0x3c(r3)
/* 8016C7DC 001695DC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016C7E0 001695E0  40 81 00 58 */	ble lbl_8016C838
lbl_8016C7E4:
/* 8016C7E4 001695E4  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016C7E8 001695E8  C0 22 AB 10 */	lfs f1, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016C7EC 001695EC  38 63 A1 A0 */	addi r3, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016C7F0 001695F0  7F E4 FB 78 */	mr r4, r31
/* 8016C7F4 001695F4  C0 43 00 38 */	lfs f2, 0x38(r3)
/* 8016C7F8 001695F8  38 61 00 08 */	addi r3, r1, 8
/* 8016C7FC 001695FC  38 A1 00 2C */	addi r5, r1, 0x2c
/* 8016C800 00169600  48 00 07 75 */	bl random_orbit__13zNPCBPlanktonCFRC5xVec3ff
/* 8016C804 00169604  38 7F 04 74 */	addi r3, r31, 0x474
/* 8016C808 00169608  38 81 00 08 */	addi r4, r1, 8
/* 8016C80C 0016960C  4B E9 EA 59 */	bl __as__5xVec3FRC5xVec3
/* 8016C810 00169610  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016C814 00169614  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016C818 00169618  38 63 A1 A0 */	addi r3, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016C81C 0016961C  D0 1F 04 A4 */	stfs f0, 0x4a4(r31)
/* 8016C820 00169620  C3 E3 00 40 */	lfs f31, 0x40(r3)
/* 8016C824 00169624  C3 C3 00 44 */	lfs f30, 0x44(r3)
/* 8016C828 00169628  4B EC 44 61 */	bl xurand__Fv
/* 8016C82C 0016962C  EC 1E F8 28 */	fsubs f0, f30, f31
/* 8016C830 00169630  EC 00 F8 7A */	fmadds f0, f0, f1, f31
/* 8016C834 00169634  D0 1F 04 A8 */	stfs f0, 0x4a8(r31)
lbl_8016C838:
/* 8016C838 00169638  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 8016C83C 0016963C  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8016C840 00169640  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 8016C844 00169644  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 8016C848 00169648  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8016C84C 0016964C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8016C850 00169650  7C 08 03 A6 */	mtlr r0
/* 8016C854 00169654  38 21 00 60 */	addi r1, r1, 0x60
/* 8016C858 00169658  4E 80 00 20 */	blr 

.global update_aim_gun__13zNPCBPlanktonFf
update_aim_gun__13zNPCBPlanktonFf:
/* 8016C85C 0016965C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8016C860 00169660  7C 08 02 A6 */	mflr r0
/* 8016C864 00169664  90 01 00 54 */	stw r0, 0x54(r1)
/* 8016C868 00169668  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8016C86C 0016966C  7C 7F 1B 78 */	mr r31, r3
/* 8016C870 00169670  88 03 02 B8 */	lbz r0, 0x2b8(r3)
/* 8016C874 00169674  28 00 00 00 */	cmplwi r0, 0
/* 8016C878 00169678  41 82 00 D4 */	beq lbl_8016C94C
/* 8016C87C 0016967C  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 8016C880 00169680  38 61 00 14 */	addi r3, r1, 0x14
/* 8016C884 00169684  38 A0 00 15 */	li r5, 0x15
/* 8016C888 00169688  4B EC 86 F1 */	bl xModelGetBoneLocation__FRC14xModelInstanceUl
/* 8016C88C 0016968C  80 81 00 14 */	lwz r4, 0x14(r1)
/* 8016C890 00169690  80 61 00 18 */	lwz r3, 0x18(r1)
/* 8016C894 00169694  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8016C898 00169698  90 81 00 38 */	stw r4, 0x38(r1)
/* 8016C89C 0016969C  90 61 00 3C */	stw r3, 0x3c(r1)
/* 8016C8A0 001696A0  90 01 00 40 */	stw r0, 0x40(r1)
/* 8016C8A4 001696A4  4B FF C1 F1 */	bl zNPCTypeBossPlankton.get_player_loc__34_unnamed_zNPCTypeBossPlankton_cpp_Fv
/* 8016C8A8 001696A8  7C 60 1B 78 */	mr r0, r3
/* 8016C8AC 001696AC  38 61 00 08 */	addi r3, r1, 8
/* 8016C8B0 001696B0  7C 04 03 78 */	mr r4, r0
/* 8016C8B4 001696B4  38 A1 00 38 */	addi r5, r1, 0x38
/* 8016C8B8 001696B8  4B E9 E9 15 */	bl __mi__5xVec3CFRC5xVec3
/* 8016C8BC 001696BC  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8016C8C0 001696C0  80 61 00 08 */	lwz r3, 8(r1)
/* 8016C8C4 001696C4  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016C8C8 001696C8  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8016C8CC 001696CC  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 8016C8D0 001696D0  90 61 00 2C */	stw r3, 0x2c(r1)
/* 8016C8D4 001696D4  EC 00 00 32 */	fmuls f0, f0, f0
/* 8016C8D8 001696D8  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 8016C8DC 001696DC  90 01 00 30 */	stw r0, 0x30(r1)
/* 8016C8E0 001696E0  EC 21 00 7A */	fmadds f1, f1, f1, f0
/* 8016C8E4 001696E4  4B E9 DF 19 */	bl xsqrt__Ff
/* 8016C8E8 001696E8  FC 00 08 90 */	fmr f0, f1
/* 8016C8EC 001696EC  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 8016C8F0 001696F0  FC 40 00 90 */	fmr f2, f0
/* 8016C8F4 001696F4  4B E9 97 7D */	bl xatan2__Fff
/* 8016C8F8 001696F8  C0 02 AB B0 */	lfs f0, lbl__2165-_SDA2_BASE_(r2)
/* 8016C8FC 001696FC  EC 20 08 2A */	fadds f1, f0, f1
/* 8016C900 00169700  4B EA 1E F5 */	bl xrmod__Ff
/* 8016C904 00169704  C0 02 AB B0 */	lfs f0, lbl__2165-_SDA2_BASE_(r2)
/* 8016C908 00169708  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016C90C 0016970C  38 63 A1 A0 */	addi r3, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016C910 00169710  EC 21 00 28 */	fsubs f1, f1, f0
/* 8016C914 00169714  C0 43 00 AC */	lfs f2, 0xac(r3)
/* 8016C918 00169718  C0 63 00 B0 */	lfs f3, 0xb0(r3)
/* 8016C91C 0016971C  4B EA 20 1D */	bl range_limit_f___Ffff
/* 8016C920 00169720  3C 80 80 27 */	lis r4, lbl__2381@ha
/* 8016C924 00169724  38 7F 02 CC */	addi r3, r31, 0x2cc
/* 8016C928 00169728  38 E4 14 40 */	addi r7, r4, lbl__2381@l
/* 8016C92C 0016972C  38 81 00 20 */	addi r4, r1, 0x20
/* 8016C930 00169730  80 C7 00 00 */	lwz r6, 0(r7)
/* 8016C934 00169734  80 A7 00 04 */	lwz r5, 4(r7)
/* 8016C938 00169738  80 07 00 08 */	lwz r0, 8(r7)
/* 8016C93C 0016973C  90 C1 00 20 */	stw r6, 0x20(r1)
/* 8016C940 00169740  90 A1 00 24 */	stw r5, 0x24(r1)
/* 8016C944 00169744  90 01 00 28 */	stw r0, 0x28(r1)
/* 8016C948 00169748  4B EC 65 25 */	bl xQuatFromAxisAngle__FP5xQuatPC5xVec3f
lbl_8016C94C:
/* 8016C94C 0016974C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8016C950 00169750  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8016C954 00169754  7C 08 03 A6 */	mtlr r0
/* 8016C958 00169758  38 21 00 50 */	addi r1, r1, 0x50
/* 8016C95C 0016975C  4E 80 00 20 */	blr 

.global check_player_damage__13zNPCBPlanktonFv
check_player_damage__13zNPCBPlanktonFv:
/* 8016C960 00169760  3C 60 80 3C */	lis r3, lbl_globals@ha
/* 8016C964 00169764  38 00 00 00 */	li r0, 0
/* 8016C968 00169768  38 63 05 58 */	addi r3, r3, lbl_globals@l
/* 8016C96C 0016976C  80 83 1A FC */	lwz r4, 0x1afc(r3)
/* 8016C970 00169770  7C 64 00 D0 */	neg r3, r4
/* 8016C974 00169774  7C 63 23 78 */	or r3, r3, r4
/* 8016C978 00169778  7C 63 FE 70 */	srawi r3, r3, 0x1f
/* 8016C97C 0016977C  7C 03 18 78 */	andc r3, r0, r3
/* 8016C980 00169780  4E 80 00 20 */	blr 

.global orbit_yaw_offset__13zNPCBPlanktonCFRC5xVec3RC5xVec3
orbit_yaw_offset__13zNPCBPlanktonCFRC5xVec3RC5xVec3:
/* 8016C984 00169784  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8016C988 00169788  7C 08 02 A6 */	mflr r0
/* 8016C98C 0016978C  90 01 00 44 */	stw r0, 0x44(r1)
/* 8016C990 00169790  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8016C994 00169794  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8016C998 00169798  81 42 BF F8 */	lwz r10, lbl__2409_1-_SDA2_BASE_(r2)
/* 8016C99C 0016979C  81 22 BF FC */	lwz r9, lbl_803D097C-_SDA2_BASE_(r2)
/* 8016C9A0 001697A0  81 02 C0 00 */	lwz r8, lbl__2410_1-_SDA2_BASE_(r2)
/* 8016C9A4 001697A4  80 E2 C0 04 */	lwz r7, lbl_803D0984-_SDA2_BASE_(r2)
/* 8016C9A8 001697A8  80 C2 C0 08 */	lwz r6, lbl__2411_1-_SDA2_BASE_(r2)
/* 8016C9AC 001697AC  80 02 C0 0C */	lwz r0, lbl_803D098C-_SDA2_BASE_(r2)
/* 8016C9B0 001697B0  91 41 00 28 */	stw r10, 0x28(r1)
/* 8016C9B4 001697B4  C0 A3 04 50 */	lfs f5, 0x450(r3)
/* 8016C9B8 001697B8  C0 83 04 58 */	lfs f4, 0x458(r3)
/* 8016C9BC 001697BC  38 61 00 20 */	addi r3, r1, 0x20
/* 8016C9C0 001697C0  91 21 00 2C */	stw r9, 0x2c(r1)
/* 8016C9C4 001697C4  C0 64 00 00 */	lfs f3, 0(r4)
/* 8016C9C8 001697C8  91 01 00 20 */	stw r8, 0x20(r1)
/* 8016C9CC 001697CC  C0 44 00 08 */	lfs f2, 8(r4)
/* 8016C9D0 001697D0  38 81 00 28 */	addi r4, r1, 0x28
/* 8016C9D4 001697D4  90 E1 00 24 */	stw r7, 0x24(r1)
/* 8016C9D8 001697D8  C0 25 00 00 */	lfs f1, 0(r5)
/* 8016C9DC 001697DC  90 C1 00 18 */	stw r6, 0x18(r1)
/* 8016C9E0 001697E0  C0 05 00 08 */	lfs f0, 8(r5)
/* 8016C9E4 001697E4  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8016C9E8 001697E8  D0 A1 00 28 */	stfs f5, 0x28(r1)
/* 8016C9EC 001697EC  D0 81 00 2C */	stfs f4, 0x2c(r1)
/* 8016C9F0 001697F0  D0 61 00 20 */	stfs f3, 0x20(r1)
/* 8016C9F4 001697F4  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 8016C9F8 001697F8  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8016C9FC 001697FC  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8016CA00 00169800  4B EA 8F 75 */	bl __mi__5xVec2CFRC5xVec2
/* 8016CA04 00169804  90 81 00 14 */	stw r4, 0x14(r1)
/* 8016CA08 00169808  38 81 00 28 */	addi r4, r1, 0x28
/* 8016CA0C 0016980C  90 61 00 10 */	stw r3, 0x10(r1)
/* 8016CA10 00169810  38 61 00 18 */	addi r3, r1, 0x18
/* 8016CA14 00169814  4B EA 8F 61 */	bl __mi__5xVec2CFRC5xVec2
/* 8016CA18 00169818  90 81 00 0C */	stw r4, 0xc(r1)
/* 8016CA1C 0016981C  38 81 00 08 */	addi r4, r1, 8
/* 8016CA20 00169820  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8016CA24 00169824  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8016CA28 00169828  90 61 00 08 */	stw r3, 8(r1)
/* 8016CA2C 0016982C  38 61 00 10 */	addi r3, r1, 0x10
/* 8016CA30 00169830  EC 01 00 32 */	fmuls f0, f1, f0
/* 8016CA34 00169834  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 8016CA38 00169838  C0 21 00 08 */	lfs f1, 8(r1)
/* 8016CA3C 0016983C  EF E2 00 78 */	fmsubs f31, f2, f1, f0
/* 8016CA40 00169840  4B FB 0A 81 */	bl dot__5xVec2CFRC5xVec2
/* 8016CA44 00169844  FC 40 08 90 */	fmr f2, f1
/* 8016CA48 00169848  FC 20 F8 90 */	fmr f1, f31
/* 8016CA4C 0016984C  4B E9 96 25 */	bl xatan2__Fff
/* 8016CA50 00169850  C0 02 AB B0 */	lfs f0, lbl__2165-_SDA2_BASE_(r2)
/* 8016CA54 00169854  EC 20 08 2A */	fadds f1, f0, f1
/* 8016CA58 00169858  4B EA 1D 9D */	bl xrmod__Ff
/* 8016CA5C 0016985C  C0 02 AB B0 */	lfs f0, lbl__2165-_SDA2_BASE_(r2)
/* 8016CA60 00169860  EC 21 00 28 */	fsubs f1, f1, f0
/* 8016CA64 00169864  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8016CA68 00169868  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8016CA6C 0016986C  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8016CA70 00169870  7C 08 03 A6 */	mtlr r0
/* 8016CA74 00169874  38 21 00 40 */	addi r1, r1, 0x40
/* 8016CA78 00169878  4E 80 00 20 */	blr 

.global load_territory__13zNPCBPlanktonFiR5xBase
load_territory__13zNPCBPlanktonFiR5xBase:
/* 8016CA7C 0016987C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016CA80 00169880  7C 08 02 A6 */	mflr r0
/* 8016CA84 00169884  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016CA88 00169888  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8016CA8C 0016988C  7C 9C 23 78 */	mr r28, r4
/* 8016CA90 00169890  38 1C FF FF */	addi r0, r28, -1
/* 8016CA94 00169894  7C BD 2B 78 */	mr r29, r5
/* 8016CA98 00169898  1C 80 00 3C */	mulli r4, r0, 0x3c
/* 8016CA9C 0016989C  7C 7B 1B 78 */	mr r27, r3
/* 8016CAA0 001698A0  3B E4 04 B4 */	addi r31, r4, 0x4b4
/* 8016CAA4 001698A4  7F FB FA 14 */	add r31, r27, r31
/* 8016CAA8 001698A8  88 A5 00 04 */	lbz r5, 4(r5)
/* 8016CAAC 001698AC  2C 05 00 11 */	cmpwi r5, 0x11
/* 8016CAB0 001698B0  41 82 00 38 */	beq lbl_8016CAE8
/* 8016CAB4 001698B4  40 80 00 1C */	bge lbl_8016CAD0
/* 8016CAB8 001698B8  2C 05 00 0E */	cmpwi r5, 0xe
/* 8016CABC 001698BC  41 82 00 A0 */	beq lbl_8016CB5C
/* 8016CAC0 001698C0  40 80 00 AC */	bge lbl_8016CB6C
/* 8016CAC4 001698C4  2C 05 00 0D */	cmpwi r5, 0xd
/* 8016CAC8 001698C8  40 80 00 64 */	bge lbl_8016CB2C
/* 8016CACC 001698CC  48 00 00 A0 */	b lbl_8016CB6C
lbl_8016CAD0:
/* 8016CAD0 001698D0  2C 05 00 2B */	cmpwi r5, 0x2b
/* 8016CAD4 001698D4  41 82 00 60 */	beq lbl_8016CB34
/* 8016CAD8 001698D8  40 80 00 94 */	bge lbl_8016CB6C
/* 8016CADC 001698DC  2C 05 00 1B */	cmpwi r5, 0x1b
/* 8016CAE0 001698E0  41 82 00 84 */	beq lbl_8016CB64
/* 8016CAE4 001698E4  48 00 00 88 */	b lbl_8016CB6C
lbl_8016CAE8:
/* 8016CAE8 001698E8  7F A3 EB 78 */	mr r3, r29
/* 8016CAEC 001698EC  3B C0 00 00 */	li r30, 0
/* 8016CAF0 001698F0  4B EC 03 8D */	bl xGroupGetCount__FP6xGroup
/* 8016CAF4 001698F4  7C 7F 1B 78 */	mr r31, r3
/* 8016CAF8 001698F8  48 00 00 28 */	b lbl_8016CB20
lbl_8016CAFC:
/* 8016CAFC 001698FC  7F A3 EB 78 */	mr r3, r29
/* 8016CB00 00169900  7F C4 F3 78 */	mr r4, r30
/* 8016CB04 00169904  4B EC 03 85 */	bl xGroupGetItemPtr__FP6xGroupUi
/* 8016CB08 00169908  7C 60 1B 78 */	mr r0, r3
/* 8016CB0C 0016990C  7F 63 DB 78 */	mr r3, r27
/* 8016CB10 00169910  7C 05 03 78 */	mr r5, r0
/* 8016CB14 00169914  7F 84 E3 78 */	mr r4, r28
/* 8016CB18 00169918  4B FF FF 65 */	bl load_territory__13zNPCBPlanktonFiR5xBase
/* 8016CB1C 0016991C  3B DE 00 01 */	addi r30, r30, 1
lbl_8016CB20:
/* 8016CB20 00169920  7C 1E F8 40 */	cmplw r30, r31
/* 8016CB24 00169924  41 80 FF D8 */	blt lbl_8016CAFC
/* 8016CB28 00169928  48 00 00 58 */	b lbl_8016CB80
lbl_8016CB2C:
/* 8016CB2C 0016992C  93 BF 00 00 */	stw r29, 0(r31)
/* 8016CB30 00169930  48 00 00 50 */	b lbl_8016CB80
lbl_8016CB34:
/* 8016CB34 00169934  80 1F 00 30 */	lwz r0, 0x30(r31)
/* 8016CB38 00169938  2C 00 00 08 */	cmpwi r0, 8
/* 8016CB3C 0016993C  40 80 00 44 */	bge lbl_8016CB80
/* 8016CB40 00169940  54 00 10 3A */	slwi r0, r0, 2
/* 8016CB44 00169944  7C 7F 02 14 */	add r3, r31, r0
/* 8016CB48 00169948  93 A3 00 10 */	stw r29, 0x10(r3)
/* 8016CB4C 0016994C  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 8016CB50 00169950  38 03 00 01 */	addi r0, r3, 1
/* 8016CB54 00169954  90 1F 00 30 */	stw r0, 0x30(r31)
/* 8016CB58 00169958  48 00 00 28 */	b lbl_8016CB80
lbl_8016CB5C:
/* 8016CB5C 0016995C  93 BF 00 0C */	stw r29, 0xc(r31)
/* 8016CB60 00169960  48 00 00 20 */	b lbl_8016CB80
lbl_8016CB64:
/* 8016CB64 00169964  93 BF 00 08 */	stw r29, 8(r31)
/* 8016CB68 00169968  48 00 00 18 */	b lbl_8016CB80
lbl_8016CB6C:
/* 8016CB6C 0016996C  7C A3 2B 78 */	mr r3, r5
/* 8016CB70 00169970  4B EA E8 4D */	bl xEntValidType__FUc
/* 8016CB74 00169974  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016CB78 00169978  41 82 00 08 */	beq lbl_8016CB80
/* 8016CB7C 0016997C  93 BF 00 04 */	stw r29, 4(r31)
lbl_8016CB80:
/* 8016CB80 00169980  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8016CB84 00169984  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016CB88 00169988  7C 08 03 A6 */	mtlr r0
/* 8016CB8C 0016998C  38 21 00 20 */	addi r1, r1, 0x20
/* 8016CB90 00169990  4E 80 00 20 */	blr 

.global init_beam__13zNPCBPlanktonFv
init_beam__13zNPCBPlanktonFv:
/* 8016CB94 00169994  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016CB98 00169998  7C 08 02 A6 */	mflr r0
/* 8016CB9C 0016999C  3C 80 80 27 */	lis r4, lbl__stringBase0_97@ha
/* 8016CBA0 001699A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016CBA4 001699A4  38 A4 14 64 */	addi r5, r4, lbl__stringBase0_97@l
/* 8016CBA8 001699A8  38 80 00 1F */	li r4, 0x1f
/* 8016CBAC 001699AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016CBB0 001699B0  7C 7F 1B 78 */	mr r31, r3
/* 8016CBB4 001699B4  38 7F 03 B8 */	addi r3, r31, 0x3b8
/* 8016CBB8 001699B8  38 A5 09 20 */	addi r5, r5, 0x920
/* 8016CBBC 001699BC  48 01 09 89 */	bl init__17xLaserBoltEmitterFUlPCc
/* 8016CBC0 001699C0  3C 80 80 27 */	lis r4, lbl__stringBase0_97@ha
/* 8016CBC4 001699C4  38 7F 03 B8 */	addi r3, r31, 0x3b8
/* 8016CBC8 001699C8  38 84 14 64 */	addi r4, r4, lbl__stringBase0_97@l
/* 8016CBCC 001699CC  38 84 09 30 */	addi r4, r4, 0x930
/* 8016CBD0 001699D0  48 01 09 E5 */	bl set_texture__17xLaserBoltEmitterFPCc
/* 8016CBD4 001699D4  3C 80 80 33 */	lis r4, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016CBD8 001699D8  38 7F 03 B8 */	addi r3, r31, 0x3b8
/* 8016CBDC 001699DC  38 84 A1 A0 */	addi r4, r4, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016CBE0 001699E0  38 84 00 BC */	addi r4, r4, 0xbc
/* 8016CBE4 001699E4  48 00 01 01 */	bl __as__Q217xLaserBoltEmitter6configFRCQ217xLaserBoltEmitter6config
/* 8016CBE8 001699E8  38 7F 03 B8 */	addi r3, r31, 0x3b8
/* 8016CBEC 001699EC  48 01 0B 79 */	bl refresh_config__17xLaserBoltEmitterFv
/* 8016CBF0 001699F0  3C 80 80 27 */	lis r4, lbl__stringBase0_97@ha
/* 8016CBF4 001699F4  38 7F 02 E8 */	addi r3, r31, 0x2e8
/* 8016CBF8 001699F8  38 A4 14 64 */	addi r5, r4, lbl__stringBase0_97@l
/* 8016CBFC 001699FC  38 80 00 7F */	li r4, 0x7f
/* 8016CC00 00169A00  38 A5 09 44 */	addi r5, r5, 0x944
/* 8016CC04 00169A04  48 00 F8 CD */	bl init__13xDecalEmitterFiPCc
/* 8016CC08 00169A08  3C 80 80 27 */	lis r4, lbl_beam_ring_curve__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016CC0C 00169A0C  38 7F 02 E8 */	addi r3, r31, 0x2e8
/* 8016CC10 00169A10  38 84 12 E8 */	addi r4, r4, lbl_beam_ring_curve__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016CC14 00169A14  38 A0 00 02 */	li r5, 2
/* 8016CC18 00169A18  48 00 FB 91 */	bl set_curve__13xDecalEmitterFPCQ213xDecalEmitter10curve_nodeUl
/* 8016CC1C 00169A1C  3C 80 80 27 */	lis r4, lbl__stringBase0_97@ha
/* 8016CC20 00169A20  38 7F 02 E8 */	addi r3, r31, 0x2e8
/* 8016CC24 00169A24  38 84 14 64 */	addi r4, r4, lbl__stringBase0_97@l
/* 8016CC28 00169A28  38 84 09 5A */	addi r4, r4, 0x95a
/* 8016CC2C 00169A2C  48 00 F9 85 */	bl set_texture__13xDecalEmitterFPCc
/* 8016CC30 00169A30  38 7F 02 E8 */	addi r3, r31, 0x2e8
/* 8016CC34 00169A34  48 00 F8 F9 */	bl set_default_config__13xDecalEmitterFv
/* 8016CC38 00169A38  38 00 00 00 */	li r0, 0
/* 8016CC3C 00169A3C  38 80 00 05 */	li r4, 5
/* 8016CC40 00169A40  90 1F 02 E8 */	stw r0, 0x2e8(r31)
/* 8016CC44 00169A44  38 00 00 02 */	li r0, 2
/* 8016CC48 00169A48  38 7F 02 E8 */	addi r3, r31, 0x2e8
/* 8016CC4C 00169A4C  C0 02 AB C4 */	lfs f0, lbl__2450-_SDA2_BASE_(r2)
/* 8016CC50 00169A50  D0 1F 02 EC */	stfs f0, 0x2ec(r31)
/* 8016CC54 00169A54  90 9F 02 F0 */	stw r4, 0x2f0(r31)
/* 8016CC58 00169A58  90 1F 02 F4 */	stw r0, 0x2f4(r31)
/* 8016CC5C 00169A5C  48 00 F9 F1 */	bl refresh_config__13xDecalEmitterFv
/* 8016CC60 00169A60  3C 80 80 27 */	lis r4, lbl__stringBase0_97@ha
/* 8016CC64 00169A64  38 7F 03 50 */	addi r3, r31, 0x350
/* 8016CC68 00169A68  38 A4 14 64 */	addi r5, r4, lbl__stringBase0_97@l
/* 8016CC6C 00169A6C  38 80 00 07 */	li r4, 7
/* 8016CC70 00169A70  38 A5 09 61 */	addi r5, r5, 0x961
/* 8016CC74 00169A74  48 00 F8 5D */	bl init__13xDecalEmitterFiPCc
/* 8016CC78 00169A78  3C 80 80 27 */	lis r4, lbl_beam_glow_curve__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016CC7C 00169A7C  38 7F 03 50 */	addi r3, r31, 0x350
/* 8016CC80 00169A80  38 84 13 00 */	addi r4, r4, lbl_beam_glow_curve__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016CC84 00169A84  38 A0 00 03 */	li r5, 3
/* 8016CC88 00169A88  48 00 FB 21 */	bl set_curve__13xDecalEmitterFPCQ213xDecalEmitter10curve_nodeUl
/* 8016CC8C 00169A8C  3C 80 80 27 */	lis r4, lbl__stringBase0_97@ha
/* 8016CC90 00169A90  38 7F 03 50 */	addi r3, r31, 0x350
/* 8016CC94 00169A94  38 84 14 64 */	addi r4, r4, lbl__stringBase0_97@l
/* 8016CC98 00169A98  38 84 09 76 */	addi r4, r4, 0x976
/* 8016CC9C 00169A9C  48 00 F9 15 */	bl set_texture__13xDecalEmitterFPCc
/* 8016CCA0 00169AA0  38 7F 03 50 */	addi r3, r31, 0x350
/* 8016CCA4 00169AA4  48 00 F8 89 */	bl set_default_config__13xDecalEmitterFv
/* 8016CCA8 00169AA8  38 00 00 00 */	li r0, 0
/* 8016CCAC 00169AAC  38 80 00 05 */	li r4, 5
/* 8016CCB0 00169AB0  90 1F 03 50 */	stw r0, 0x350(r31)
/* 8016CCB4 00169AB4  38 00 00 02 */	li r0, 2
/* 8016CCB8 00169AB8  38 7F 03 50 */	addi r3, r31, 0x350
/* 8016CCBC 00169ABC  C0 02 AB C4 */	lfs f0, lbl__2450-_SDA2_BASE_(r2)
/* 8016CCC0 00169AC0  D0 1F 03 54 */	stfs f0, 0x354(r31)
/* 8016CCC4 00169AC4  90 9F 03 58 */	stw r4, 0x358(r31)
/* 8016CCC8 00169AC8  90 1F 03 5C */	stw r0, 0x35c(r31)
/* 8016CCCC 00169ACC  48 00 F9 81 */	bl refresh_config__13xDecalEmitterFv
/* 8016CCD0 00169AD0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016CCD4 00169AD4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016CCD8 00169AD8  7C 08 03 A6 */	mtlr r0
/* 8016CCDC 00169ADC  38 21 00 10 */	addi r1, r1, 0x10
/* 8016CCE0 00169AE0  4E 80 00 20 */	blr 

.global __as__Q217xLaserBoltEmitter6configFRCQ217xLaserBoltEmitter6config
__as__Q217xLaserBoltEmitter6configFRCQ217xLaserBoltEmitter6config:
/* 8016CCE4 00169AE4  C0 04 00 00 */	lfs f0, 0(r4)
/* 8016CCE8 00169AE8  C0 24 00 04 */	lfs f1, 4(r4)
/* 8016CCEC 00169AEC  D0 03 00 00 */	stfs f0, 0(r3)
/* 8016CCF0 00169AF0  C0 04 00 08 */	lfs f0, 8(r4)
/* 8016CCF4 00169AF4  D0 23 00 04 */	stfs f1, 4(r3)
/* 8016CCF8 00169AF8  C0 24 00 0C */	lfs f1, 0xc(r4)
/* 8016CCFC 00169AFC  D0 03 00 08 */	stfs f0, 8(r3)
/* 8016CD00 00169B00  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 8016CD04 00169B04  D0 23 00 0C */	stfs f1, 0xc(r3)
/* 8016CD08 00169B08  C0 24 00 14 */	lfs f1, 0x14(r4)
/* 8016CD0C 00169B0C  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 8016CD10 00169B10  C0 04 00 18 */	lfs f0, 0x18(r4)
/* 8016CD14 00169B14  D0 23 00 14 */	stfs f1, 0x14(r3)
/* 8016CD18 00169B18  C0 24 00 1C */	lfs f1, 0x1c(r4)
/* 8016CD1C 00169B1C  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 8016CD20 00169B20  C0 04 00 20 */	lfs f0, 0x20(r4)
/* 8016CD24 00169B24  D0 23 00 1C */	stfs f1, 0x1c(r3)
/* 8016CD28 00169B28  80 04 00 24 */	lwz r0, 0x24(r4)
/* 8016CD2C 00169B2C  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 8016CD30 00169B30  80 A4 00 28 */	lwz r5, 0x28(r4)
/* 8016CD34 00169B34  90 03 00 24 */	stw r0, 0x24(r3)
/* 8016CD38 00169B38  80 04 00 2C */	lwz r0, 0x2c(r4)
/* 8016CD3C 00169B3C  90 A3 00 28 */	stw r5, 0x28(r3)
/* 8016CD40 00169B40  80 A4 00 30 */	lwz r5, 0x30(r4)
/* 8016CD44 00169B44  90 03 00 2C */	stw r0, 0x2c(r3)
/* 8016CD48 00169B48  80 04 00 34 */	lwz r0, 0x34(r4)
/* 8016CD4C 00169B4C  90 A3 00 30 */	stw r5, 0x30(r3)
/* 8016CD50 00169B50  C0 04 00 38 */	lfs f0, 0x38(r4)
/* 8016CD54 00169B54  90 03 00 34 */	stw r0, 0x34(r3)
/* 8016CD58 00169B58  D0 03 00 38 */	stfs f0, 0x38(r3)
/* 8016CD5C 00169B5C  4E 80 00 20 */	blr 

.global setup_beam__13zNPCBPlanktonFv
setup_beam__13zNPCBPlanktonFv:
/* 8016CD60 00169B60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016CD64 00169B64  7C 08 02 A6 */	mflr r0
/* 8016CD68 00169B68  3C 80 80 2A */	lis r4, lbl_beam_launch_effect__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016CD6C 00169B6C  3C A0 80 17 */	lis r5, lbl_80168E78@ha
/* 8016CD70 00169B70  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016CD74 00169B74  38 C0 00 02 */	li r6, 2
/* 8016CD78 00169B78  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016CD7C 00169B7C  3B E4 AF 30 */	addi r31, r4, lbl_beam_launch_effect__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016CD80 00169B80  3C 80 80 17 */	lis r4, lbl_80168DEC@ha
/* 8016CD84 00169B84  93 C1 00 08 */	stw r30, 8(r1)
/* 8016CD88 00169B88  7C 7E 1B 78 */	mr r30, r3
/* 8016CD8C 00169B8C  38 65 8E 78 */	addi r3, r5, lbl_80168E78@l
/* 8016CD90 00169B90  38 BF 00 00 */	addi r5, r31, 0
/* 8016CD94 00169B94  38 04 8D EC */	addi r0, r4, lbl_80168DEC@l
/* 8016CD98 00169B98  90 65 00 0C */	stw r3, 0xc(r5)
/* 8016CD9C 00169B9C  38 7E 03 B8 */	addi r3, r30, 0x3b8
/* 8016CDA0 00169BA0  38 80 00 00 */	li r4, 0
/* 8016CDA4 00169BA4  93 C5 00 10 */	stw r30, 0x10(r5)
/* 8016CDA8 00169BA8  90 05 00 24 */	stw r0, 0x24(r5)
/* 8016CDAC 00169BAC  93 C5 00 28 */	stw r30, 0x28(r5)
/* 8016CDB0 00169BB0  48 01 0E E5 */	bl attach_effects__17xLaserBoltEmitterFQ217xLaserBoltEmitter12fx_when_enumPQ217xLaserBoltEmitter11effect_dataUl
/* 8016CDB4 00169BB4  38 BF 00 30 */	addi r5, r31, 0x30
/* 8016CDB8 00169BB8  38 1E 02 E8 */	addi r0, r30, 0x2e8
/* 8016CDBC 00169BBC  90 05 00 0C */	stw r0, 0xc(r5)
/* 8016CDC0 00169BC0  38 7E 03 B8 */	addi r3, r30, 0x3b8
/* 8016CDC4 00169BC4  38 80 00 04 */	li r4, 4
/* 8016CDC8 00169BC8  38 C0 00 01 */	li r6, 1
/* 8016CDCC 00169BCC  48 01 0E C9 */	bl attach_effects__17xLaserBoltEmitterFQ217xLaserBoltEmitter12fx_when_enumPQ217xLaserBoltEmitter11effect_dataUl
/* 8016CDD0 00169BD0  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016CDD4 00169BD4  38 63 14 64 */	addi r3, r3, lbl__stringBase0_97@l
/* 8016CDD8 00169BD8  38 63 09 82 */	addi r3, r3, 0x982
/* 8016CDDC 00169BDC  4B F3 BA 69 */	bl zParEmitterFind__FPCc
/* 8016CDE0 00169BE0  3C E0 80 17 */	lis r7, lbl_80168E34@ha
/* 8016CDE4 00169BE4  3C C0 80 17 */	lis r6, lbl_80168EA4@ha
/* 8016CDE8 00169BE8  38 BF 00 48 */	addi r5, r31, 0x48
/* 8016CDEC 00169BEC  38 80 00 01 */	li r4, 1
/* 8016CDF0 00169BF0  38 06 8E A4 */	addi r0, r6, lbl_80168EA4@l
/* 8016CDF4 00169BF4  38 E7 8E 34 */	addi r7, r7, lbl_80168E34@l
/* 8016CDF8 00169BF8  90 65 00 0C */	stw r3, 0xc(r5)
/* 8016CDFC 00169BFC  38 7E 03 B8 */	addi r3, r30, 0x3b8
/* 8016CE00 00169C00  38 C0 00 03 */	li r6, 3
/* 8016CE04 00169C04  90 E5 00 24 */	stw r7, 0x24(r5)
/* 8016CE08 00169C08  93 C5 00 28 */	stw r30, 0x28(r5)
/* 8016CE0C 00169C0C  90 05 00 3C */	stw r0, 0x3c(r5)
/* 8016CE10 00169C10  93 C5 00 40 */	stw r30, 0x40(r5)
/* 8016CE14 00169C14  48 01 0E 81 */	bl attach_effects__17xLaserBoltEmitterFQ217xLaserBoltEmitter12fx_when_enumPQ217xLaserBoltEmitter11effect_dataUl
/* 8016CE18 00169C18  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016CE1C 00169C1C  38 63 14 64 */	addi r3, r3, lbl__stringBase0_97@l
/* 8016CE20 00169C20  38 63 09 98 */	addi r3, r3, 0x998
/* 8016CE24 00169C24  4B F3 BA 21 */	bl zParEmitterFind__FPCc
/* 8016CE28 00169C28  38 BF 00 90 */	addi r5, r31, 0x90
/* 8016CE2C 00169C2C  38 80 00 03 */	li r4, 3
/* 8016CE30 00169C30  90 65 00 0C */	stw r3, 0xc(r5)
/* 8016CE34 00169C34  38 7E 03 B8 */	addi r3, r30, 0x3b8
/* 8016CE38 00169C38  38 C0 00 01 */	li r6, 1
/* 8016CE3C 00169C3C  48 01 0E 59 */	bl attach_effects__17xLaserBoltEmitterFQ217xLaserBoltEmitter12fx_when_enumPQ217xLaserBoltEmitter11effect_dataUl
/* 8016CE40 00169C40  3C 60 80 17 */	lis r3, lbl_80168E34@ha
/* 8016CE44 00169C44  38 BF 00 A8 */	addi r5, r31, 0xa8
/* 8016CE48 00169C48  38 03 8E 34 */	addi r0, r3, lbl_80168E34@l
/* 8016CE4C 00169C4C  93 C5 00 10 */	stw r30, 0x10(r5)
/* 8016CE50 00169C50  38 7E 03 B8 */	addi r3, r30, 0x3b8
/* 8016CE54 00169C54  38 80 00 06 */	li r4, 6
/* 8016CE58 00169C58  90 05 00 0C */	stw r0, 0xc(r5)
/* 8016CE5C 00169C5C  38 C0 00 01 */	li r6, 1
/* 8016CE60 00169C60  48 01 0E 35 */	bl attach_effects__17xLaserBoltEmitterFQ217xLaserBoltEmitter12fx_when_enumPQ217xLaserBoltEmitter11effect_dataUl
/* 8016CE64 00169C64  3C 60 80 27 */	lis r3, lbl__stringBase0_97@ha
/* 8016CE68 00169C68  38 63 14 64 */	addi r3, r3, lbl__stringBase0_97@l
/* 8016CE6C 00169C6C  38 63 09 AE */	addi r3, r3, 0x9ae
/* 8016CE70 00169C70  4B F3 B9 D5 */	bl zParEmitterFind__FPCc
/* 8016CE74 00169C74  90 7E 04 4C */	stw r3, 0x44c(r30)
/* 8016CE78 00169C78  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016CE7C 00169C7C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016CE80 00169C80  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016CE84 00169C84  7C 08 03 A6 */	mtlr r0
/* 8016CE88 00169C88  38 21 00 10 */	addi r1, r1, 0x10
/* 8016CE8C 00169C8C  4E 80 00 20 */	blr 

.global reset_beam__13zNPCBPlanktonFv
reset_beam__13zNPCBPlanktonFv:
/* 8016CE90 00169C90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016CE94 00169C94  7C 08 02 A6 */	mflr r0
/* 8016CE98 00169C98  38 63 03 B8 */	addi r3, r3, 0x3b8
/* 8016CE9C 00169C9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016CEA0 00169CA0  48 01 07 D1 */	bl reset__17xLaserBoltEmitterFv
/* 8016CEA4 00169CA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016CEA8 00169CA8  7C 08 03 A6 */	mtlr r0
/* 8016CEAC 00169CAC  38 21 00 10 */	addi r1, r1, 0x10
/* 8016CEB0 00169CB0  4E 80 00 20 */	blr 

.global vanish__13zNPCBPlanktonFv
vanish__13zNPCBPlanktonFv:
/* 8016CEB4 00169CB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016CEB8 00169CB8  7C 08 02 A6 */	mflr r0
/* 8016CEBC 00169CBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016CEC0 00169CC0  38 00 00 00 */	li r0, 0
/* 8016CEC4 00169CC4  88 83 00 18 */	lbz r4, 0x18(r3)
/* 8016CEC8 00169CC8  54 84 06 3C */	rlwinm r4, r4, 0, 0x18, 0x1e
/* 8016CECC 00169CCC  98 83 00 18 */	stb r4, 0x18(r3)
/* 8016CED0 00169CD0  88 83 00 18 */	lbz r4, 0x18(r3)
/* 8016CED4 00169CD4  60 84 00 40 */	ori r4, r4, 0x40
/* 8016CED8 00169CD8  98 83 00 18 */	stb r4, 0x18(r3)
/* 8016CEDC 00169CDC  98 03 00 1B */	stb r0, 0x1b(r3)
/* 8016CEE0 00169CE0  98 03 00 1C */	stb r0, 0x1c(r3)
/* 8016CEE4 00169CE4  98 03 00 22 */	stb r0, 0x22(r3)
/* 8016CEE8 00169CE8  98 03 00 23 */	stb r0, 0x23(r3)
/* 8016CEEC 00169CEC  98 03 00 F0 */	stb r0, 0xf0(r3)
/* 8016CEF0 00169CF0  98 03 00 F1 */	stb r0, 0xf1(r3)
/* 8016CEF4 00169CF4  38 60 00 00 */	li r3, 0
/* 8016CEF8 00169CF8  4B FF BE 65 */	bl zNPCTypeBossPlankton.kill_sound__34_unnamed_zNPCTypeBossPlankton_cpp_Fi
/* 8016CEFC 00169CFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016CF00 00169D00  7C 08 03 A6 */	mtlr r0
/* 8016CF04 00169D04  38 21 00 10 */	addi r1, r1, 0x10
/* 8016CF08 00169D08  4E 80 00 20 */	blr 

.global reappear__13zNPCBPlanktonFv
reappear__13zNPCBPlanktonFv:
/* 8016CF0C 00169D0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016CF10 00169D10  7C 08 02 A6 */	mflr r0
/* 8016CF14 00169D14  7C 67 1B 78 */	mr r7, r3
/* 8016CF18 00169D18  38 A0 00 00 */	li r5, 0
/* 8016CF1C 00169D1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016CF20 00169D20  38 00 00 10 */	li r0, 0x10
/* 8016CF24 00169D24  38 87 00 88 */	addi r4, r7, 0x88
/* 8016CF28 00169D28  88 C3 00 18 */	lbz r6, 0x18(r3)
/* 8016CF2C 00169D2C  38 60 00 00 */	li r3, 0
/* 8016CF30 00169D30  60 C6 00 01 */	ori r6, r6, 1
/* 8016CF34 00169D34  98 C7 00 18 */	stb r6, 0x18(r7)
/* 8016CF38 00169D38  88 C7 00 18 */	lbz r6, 0x18(r7)
/* 8016CF3C 00169D3C  70 C6 00 BF */	andi. r6, r6, 0xbf
/* 8016CF40 00169D40  98 C7 00 18 */	stb r6, 0x18(r7)
/* 8016CF44 00169D44  98 A7 00 1B */	stb r5, 0x1b(r7)
/* 8016CF48 00169D48  98 07 00 1C */	stb r0, 0x1c(r7)
/* 8016CF4C 00169D4C  98 07 00 22 */	stb r0, 0x22(r7)
/* 8016CF50 00169D50  98 07 00 23 */	stb r0, 0x23(r7)
/* 8016CF54 00169D54  98 A7 00 F0 */	stb r5, 0xf0(r7)
/* 8016CF58 00169D58  98 A7 00 F1 */	stb r5, 0xf1(r7)
/* 8016CF5C 00169D5C  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016CF60 00169D60  4B FF BC 59 */	bl zNPCTypeBossPlankton.play_sound__34_unnamed_zNPCTypeBossPlankton_cpp_FiPC5xVec3f
/* 8016CF64 00169D64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016CF68 00169D68  7C 08 03 A6 */	mtlr r0
/* 8016CF6C 00169D6C  38 21 00 10 */	addi r1, r1, 0x10
/* 8016CF70 00169D70  4E 80 00 20 */	blr 

.global random_orbit__13zNPCBPlanktonCFRC5xVec3ff
random_orbit__13zNPCBPlanktonCFRC5xVec3ff:
/* 8016CF74 00169D74  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8016CF78 00169D78  7C 08 02 A6 */	mflr r0
/* 8016CF7C 00169D7C  90 01 00 74 */	stw r0, 0x74(r1)
/* 8016CF80 00169D80  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8016CF84 00169D84  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 8016CF88 00169D88  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 8016CF8C 00169D8C  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 8016CF90 00169D90  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 8016CF94 00169D94  F3 A1 00 48 */	psq_st f29, 72(r1), 0, qr0
/* 8016CF98 00169D98  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8016CF9C 00169D9C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8016CFA0 00169DA0  FF A0 08 90 */	fmr f29, f1
/* 8016CFA4 00169DA4  7C 9F 23 78 */	mr r31, r4
/* 8016CFA8 00169DA8  FF C0 10 90 */	fmr f30, f2
/* 8016CFAC 00169DAC  7C 7E 1B 78 */	mr r30, r3
/* 8016CFB0 00169DB0  7C A4 2B 78 */	mr r4, r5
/* 8016CFB4 00169DB4  38 61 00 08 */	addi r3, r1, 8
/* 8016CFB8 00169DB8  38 BF 04 50 */	addi r5, r31, 0x450
/* 8016CFBC 00169DBC  4B E9 E2 11 */	bl __mi__5xVec3CFRC5xVec3
/* 8016CFC0 00169DC0  80 A1 00 08 */	lwz r5, 8(r1)
/* 8016CFC4 00169DC4  38 61 00 20 */	addi r3, r1, 0x20
/* 8016CFC8 00169DC8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016CFCC 00169DCC  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8016CFD0 00169DD0  90 A1 00 20 */	stw r5, 0x20(r1)
/* 8016CFD4 00169DD4  90 81 00 24 */	stw r4, 0x24(r1)
/* 8016CFD8 00169DD8  90 01 00 28 */	stw r0, 0x28(r1)
/* 8016CFDC 00169DDC  4B E9 E1 21 */	bl length2__5xVec3CFv
/* 8016CFE0 00169DE0  C0 02 AB B4 */	lfs f0, lbl__2166-_SDA2_BASE_(r2)
/* 8016CFE4 00169DE4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016CFE8 00169DE8  4C 41 13 82 */	cror 2, 1, 2
/* 8016CFEC 00169DEC  40 82 00 1C */	bne lbl_8016D008
/* 8016CFF0 00169DF0  C0 02 AB 28 */	lfs f0, lbl__1755_1-_SDA2_BASE_(r2)
/* 8016CFF4 00169DF4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016CFF8 00169DF8  4C 40 13 82 */	cror 2, 0, 2
/* 8016CFFC 00169DFC  40 82 00 0C */	bne lbl_8016D008
/* 8016D000 00169E00  C3 E2 AB 10 */	lfs f31, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016D004 00169E04  48 00 00 28 */	b lbl_8016D02C
lbl_8016D008:
/* 8016D008 00169E08  4B E9 D7 F5 */	bl xsqrt__Ff
/* 8016D00C 00169E0C  C0 02 AB 0C */	lfs f0, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016D010 00169E10  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 8016D014 00169E14  EC 60 08 24 */	fdivs f3, f0, f1
/* 8016D018 00169E18  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8016D01C 00169E1C  EC 22 00 F2 */	fmuls f1, f2, f3
/* 8016D020 00169E20  EC 40 00 F2 */	fmuls f2, f0, f3
/* 8016D024 00169E24  4B E9 90 4D */	bl xatan2__Fff
/* 8016D028 00169E28  FF E0 08 90 */	fmr f31, f1
lbl_8016D02C:
/* 8016D02C 00169E2C  C0 02 AB B0 */	lfs f0, lbl__2165-_SDA2_BASE_(r2)
/* 8016D030 00169E30  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 8016D034 00169E34  40 81 00 08 */	ble lbl_8016D03C
/* 8016D038 00169E38  FF C0 00 90 */	fmr f30, f0
lbl_8016D03C:
/* 8016D03C 00169E3C  4B EC 3C 4D */	bl xurand__Fv
/* 8016D040 00169E40  EC 1E E8 28 */	fsubs f0, f30, f29
/* 8016D044 00169E44  EF C0 E8 7A */	fmadds f30, f0, f1, f29
/* 8016D048 00169E48  4B EC 3C 21 */	bl xrand__Fv
/* 8016D04C 00169E4C  54 60 9F FF */	rlwinm. r0, r3, 0x13, 0x1f, 0x1f
/* 8016D050 00169E50  41 82 00 0C */	beq lbl_8016D05C
/* 8016D054 00169E54  C0 02 AB C8 */	lfs f0, lbl__2482-_SDA2_BASE_(r2)
/* 8016D058 00169E58  EF DE 00 32 */	fmuls f30, f30, f0
lbl_8016D05C:
/* 8016D05C 00169E5C  EF DF F0 2A */	fadds f30, f31, f30
/* 8016D060 00169E60  80 9F 04 50 */	lwz r4, 0x450(r31)
/* 8016D064 00169E64  80 7F 04 54 */	lwz r3, 0x454(r31)
/* 8016D068 00169E68  80 1F 04 58 */	lwz r0, 0x458(r31)
/* 8016D06C 00169E6C  FC 20 F0 90 */	fmr f1, f30
/* 8016D070 00169E70  90 81 00 14 */	stw r4, 0x14(r1)
/* 8016D074 00169E74  90 61 00 18 */	stw r3, 0x18(r1)
/* 8016D078 00169E78  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8016D07C 00169E7C  4B F5 7D D1 */	bl isin__Ff
/* 8016D080 00169E80  C0 5F 04 5C */	lfs f2, 0x45c(r31)
/* 8016D084 00169E84  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8016D088 00169E88  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8016D08C 00169E8C  FC 20 F0 90 */	fmr f1, f30
/* 8016D090 00169E90  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8016D094 00169E94  4B F5 7D FD */	bl icos__Ff
/* 8016D098 00169E98  C0 5F 04 5C */	lfs f2, 0x45c(r31)
/* 8016D09C 00169E9C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8016D0A0 00169EA0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8016D0A4 00169EA4  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8016D0A8 00169EA8  80 01 00 18 */	lwz r0, 0x18(r1)
/* 8016D0AC 00169EAC  90 7E 00 00 */	stw r3, 0(r30)
/* 8016D0B0 00169EB0  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8016D0B4 00169EB4  90 1E 00 04 */	stw r0, 4(r30)
/* 8016D0B8 00169EB8  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8016D0BC 00169EBC  90 1E 00 08 */	stw r0, 8(r30)
/* 8016D0C0 00169EC0  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 8016D0C4 00169EC4  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8016D0C8 00169EC8  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 8016D0CC 00169ECC  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 8016D0D0 00169ED0  E3 A1 00 48 */	psq_l f29, 72(r1), 0, qr0
/* 8016D0D4 00169ED4  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 8016D0D8 00169ED8  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8016D0DC 00169EDC  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8016D0E0 00169EE0  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8016D0E4 00169EE4  7C 08 03 A6 */	mtlr r0
/* 8016D0E8 00169EE8  38 21 00 70 */	addi r1, r1, 0x70
/* 8016D0EC 00169EEC  4E 80 00 20 */	blr 

.global player_orbit__13zNPCBPlanktonCFv
player_orbit__13zNPCBPlanktonCFv:
/* 8016D0F0 00169EF0  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8016D0F4 00169EF4  7C 08 02 A6 */	mflr r0
/* 8016D0F8 00169EF8  90 01 00 64 */	stw r0, 0x64(r1)
/* 8016D0FC 00169EFC  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8016D100 00169F00  93 C1 00 58 */	stw r30, 0x58(r1)
/* 8016D104 00169F04  7C 9E 23 78 */	mr r30, r4
/* 8016D108 00169F08  93 A1 00 54 */	stw r29, 0x54(r1)
/* 8016D10C 00169F0C  7C 7D 1B 78 */	mr r29, r3
/* 8016D110 00169F10  4B FF B9 85 */	bl zNPCTypeBossPlankton.get_player_loc__34_unnamed_zNPCTypeBossPlankton_cpp_Fv
/* 8016D114 00169F14  7C 7F 1B 78 */	mr r31, r3
/* 8016D118 00169F18  7F C3 F3 78 */	mr r3, r30
/* 8016D11C 00169F1C  48 00 2A 9D */	bl location__13zNPCBPlanktonCFv
/* 8016D120 00169F20  7C 64 1B 78 */	mr r4, r3
/* 8016D124 00169F24  7F C3 F3 78 */	mr r3, r30
/* 8016D128 00169F28  7F E5 FB 78 */	mr r5, r31
/* 8016D12C 00169F2C  4B FF F8 59 */	bl orbit_yaw_offset__13zNPCBPlanktonCFRC5xVec3RC5xVec3
/* 8016D130 00169F30  4B F5 26 A1 */	bl fabsf__3stdFf
/* 8016D134 00169F34  C0 1E 04 5C */	lfs f0, 0x45c(r30)
/* 8016D138 00169F38  C0 5E 04 8C */	lfs f2, 0x48c(r30)
/* 8016D13C 00169F3C  EC 20 00 72 */	fmuls f1, f0, f1
/* 8016D140 00169F40  C0 62 AB 38 */	lfs f3, lbl__1890_1-_SDA2_BASE_(r2)
/* 8016D144 00169F44  C0 9E 04 98 */	lfs f4, 0x498(r30)
/* 8016D148 00169F48  4B EC 42 E5 */	bl xAccelMoveTime__Fffff
/* 8016D14C 00169F4C  C0 42 AB 0C */	lfs f2, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016D150 00169F50  38 61 00 38 */	addi r3, r1, 0x38
/* 8016D154 00169F54  38 80 00 01 */	li r4, 1
/* 8016D158 00169F58  4B F0 28 25 */	bl zEntPlayer_PredictPos__FP5xVec3ffi
/* 8016D15C 00169F5C  80 E2 C0 10 */	lwz r7, lbl__2488-_SDA2_BASE_(r2)
/* 8016D160 00169F60  38 61 00 28 */	addi r3, r1, 0x28
/* 8016D164 00169F64  80 C2 C0 14 */	lwz r6, lbl_803D0994-_SDA2_BASE_(r2)
/* 8016D168 00169F68  38 81 00 30 */	addi r4, r1, 0x30
/* 8016D16C 00169F6C  80 A2 C0 18 */	lwz r5, lbl__2489_1-_SDA2_BASE_(r2)
/* 8016D170 00169F70  80 02 C0 1C */	lwz r0, lbl_803D099C-_SDA2_BASE_(r2)
/* 8016D174 00169F74  90 E1 00 30 */	stw r7, 0x30(r1)
/* 8016D178 00169F78  C0 7E 04 50 */	lfs f3, 0x450(r30)
/* 8016D17C 00169F7C  90 C1 00 34 */	stw r6, 0x34(r1)
/* 8016D180 00169F80  C0 5E 04 58 */	lfs f2, 0x458(r30)
/* 8016D184 00169F84  90 A1 00 28 */	stw r5, 0x28(r1)
/* 8016D188 00169F88  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 8016D18C 00169F8C  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8016D190 00169F90  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 8016D194 00169F94  D0 61 00 30 */	stfs f3, 0x30(r1)
/* 8016D198 00169F98  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 8016D19C 00169F9C  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 8016D1A0 00169FA0  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8016D1A4 00169FA4  4B EA 87 D1 */	bl __mi__5xVec2CFRC5xVec2
/* 8016D1A8 00169FA8  90 61 00 20 */	stw r3, 0x20(r1)
/* 8016D1AC 00169FAC  38 61 00 20 */	addi r3, r1, 0x20
/* 8016D1B0 00169FB0  90 81 00 24 */	stw r4, 0x24(r1)
/* 8016D1B4 00169FB4  4B EA 87 A9 */	bl length2__5xVec2CFv
/* 8016D1B8 00169FB8  C0 02 AB C0 */	lfs f0, lbl__2223-_SDA2_BASE_(r2)
/* 8016D1BC 00169FBC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016D1C0 00169FC0  4C 40 13 82 */	cror 2, 0, 2
/* 8016D1C4 00169FC4  40 82 00 28 */	bne lbl_8016D1EC
/* 8016D1C8 00169FC8  7F C3 F3 78 */	mr r3, r30
/* 8016D1CC 00169FCC  48 00 29 ED */	bl location__13zNPCBPlanktonCFv
/* 8016D1D0 00169FD0  80 83 00 00 */	lwz r4, 0(r3)
/* 8016D1D4 00169FD4  80 03 00 04 */	lwz r0, 4(r3)
/* 8016D1D8 00169FD8  90 9D 00 00 */	stw r4, 0(r29)
/* 8016D1DC 00169FDC  90 1D 00 04 */	stw r0, 4(r29)
/* 8016D1E0 00169FE0  80 03 00 08 */	lwz r0, 8(r3)
/* 8016D1E4 00169FE4  90 1D 00 08 */	stw r0, 8(r29)
/* 8016D1E8 00169FE8  48 00 00 5C */	b lbl_8016D244
lbl_8016D1EC:
/* 8016D1EC 00169FEC  4B E9 D6 11 */	bl xsqrt__Ff
/* 8016D1F0 00169FF0  C0 02 AB 0C */	lfs f0, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016D1F4 00169FF4  38 61 00 20 */	addi r3, r1, 0x20
/* 8016D1F8 00169FF8  EC 20 08 24 */	fdivs f1, f0, f1
/* 8016D1FC 00169FFC  4B EF 2E C9 */	bl __ml__5xVec2CFf
/* 8016D200 0016A000  90 61 00 18 */	stw r3, 0x18(r1)
/* 8016D204 0016A004  38 61 00 18 */	addi r3, r1, 0x18
/* 8016D208 0016A008  C0 3E 04 5C */	lfs f1, 0x45c(r30)
/* 8016D20C 0016A00C  90 81 00 1C */	stw r4, 0x1c(r1)
/* 8016D210 0016A010  4B EF 2E B5 */	bl __ml__5xVec2CFf
/* 8016D214 0016A014  90 81 00 0C */	stw r4, 0xc(r1)
/* 8016D218 0016A018  38 81 00 08 */	addi r4, r1, 8
/* 8016D21C 0016A01C  90 61 00 08 */	stw r3, 8(r1)
/* 8016D220 0016A020  38 61 00 30 */	addi r3, r1, 0x30
/* 8016D224 0016A024  4B FF 2C 9D */	bl __pl__5xVec2CFRC5xVec2
/* 8016D228 0016A028  90 61 00 10 */	stw r3, 0x10(r1)
/* 8016D22C 0016A02C  7F A3 EB 78 */	mr r3, r29
/* 8016D230 0016A030  C0 5E 04 54 */	lfs f2, 0x454(r30)
/* 8016D234 0016A034  90 81 00 14 */	stw r4, 0x14(r1)
/* 8016D238 0016A038  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8016D23C 0016A03C  C0 61 00 14 */	lfs f3, 0x14(r1)
/* 8016D240 0016A040  4B EF 2D 49 */	bl create__5xVec3Ffff
lbl_8016D244:
/* 8016D244 0016A044  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8016D248 0016A048  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8016D24C 0016A04C  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 8016D250 0016A050  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 8016D254 0016A054  7C 08 03 A6 */	mtlr r0
/* 8016D258 0016A058  38 21 00 60 */	addi r1, r1, 0x60
/* 8016D25C 0016A05C  4E 80 00 20 */	blr 

.global crony_attacking__13zNPCBPlanktonCFv
crony_attacking__13zNPCBPlanktonCFv:
/* 8016D260 0016A060  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016D264 0016A064  7C 08 02 A6 */	mflr r0
/* 8016D268 0016A068  80 63 04 B0 */	lwz r3, 0x4b0(r3)
/* 8016D26C 0016A06C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016D270 0016A070  28 03 00 00 */	cmplwi r3, 0
/* 8016D274 0016A074  40 82 00 0C */	bne lbl_8016D280
/* 8016D278 0016A078  38 60 00 00 */	li r3, 0
/* 8016D27C 0016A07C  48 00 00 24 */	b lbl_8016D2A0
lbl_8016D280:
/* 8016D280 0016A080  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 8016D284 0016A084  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 8016D288 0016A088  7D 89 03 A6 */	mtctr r12
/* 8016D28C 0016A08C  4E 80 04 21 */	bctrl 
/* 8016D290 0016A090  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016D294 0016A094  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016D298 0016A098  7C 00 00 26 */	mfcr r0
/* 8016D29C 0016A09C  54 03 17 FE */	rlwinm r3, r0, 2, 0x1f, 0x1f
lbl_8016D2A0:
/* 8016D2A0 0016A0A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016D2A4 0016A0A4  7C 08 03 A6 */	mtlr r0
/* 8016D2A8 0016A0A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8016D2AC 0016A0AC  4E 80 00 20 */	blr 

.global stun__13zNPCBPlanktonFv
stun__13zNPCBPlanktonFv:
/* 8016D2B0 0016A0B0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016D2B4 0016A0B4  7C 08 02 A6 */	mflr r0
/* 8016D2B8 0016A0B8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016D2BC 0016A0BC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016D2C0 0016A0C0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016D2C4 0016A0C4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8016D2C8 0016A0C8  93 81 00 10 */	stw r28, 0x10(r1)
/* 8016D2CC 0016A0CC  7C 7C 1B 78 */	mr r28, r3
/* 8016D2D0 0016A0D0  80 63 02 28 */	lwz r3, 0x228(r3)
/* 8016D2D4 0016A0D4  4B FA 02 F1 */	bl GIDOfActive__7xPsycheCFv
/* 8016D2D8 0016A0D8  3C 63 B1 B9 */	addis r3, r3, 0xb1b9
/* 8016D2DC 0016A0DC  38 03 BD AD */	addi r0, r3, -16979
/* 8016D2E0 0016A0E0  28 00 00 01 */	cmplwi r0, 1
/* 8016D2E4 0016A0E4  40 81 01 3C */	ble lbl_8016D420
/* 8016D2E8 0016A0E8  28 03 42 55 */	cmplwi r3, 0x4255
/* 8016D2EC 0016A0EC  40 82 00 08 */	bne lbl_8016D2F4
/* 8016D2F0 0016A0F0  48 00 01 30 */	b lbl_8016D420
lbl_8016D2F4:
/* 8016D2F4 0016A0F4  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016D2F8 0016A0F8  38 9C 00 88 */	addi r4, r28, 0x88
/* 8016D2FC 0016A0FC  38 60 00 01 */	li r3, 1
/* 8016D300 0016A100  4B FF B8 B9 */	bl zNPCTypeBossPlankton.play_sound__34_unnamed_zNPCTypeBossPlankton_cpp_FiPC5xVec3f
/* 8016D304 0016A104  80 1C 02 C4 */	lwz r0, 0x2c4(r28)
/* 8016D308 0016A108  2C 00 00 00 */	cmpwi r0, 0
/* 8016D30C 0016A10C  40 82 00 1C */	bne lbl_8016D328
/* 8016D310 0016A110  3C 80 4E 47 */	lis r4, 0x4E474253@ha
/* 8016D314 0016A114  80 7C 02 28 */	lwz r3, 0x228(r28)
/* 8016D318 0016A118  38 84 42 53 */	addi r4, r4, 0x4E474253@l
/* 8016D31C 0016A11C  38 A0 00 01 */	li r5, 1
/* 8016D320 0016A120  4B FA 04 11 */	bl GoalSet__7xPsycheFii
/* 8016D324 0016A124  48 00 00 FC */	b lbl_8016D420
lbl_8016D328:
/* 8016D328 0016A128  80 1C 06 98 */	lwz r0, 0x698(r28)
/* 8016D32C 0016A12C  1C 60 00 3C */	mulli r3, r0, 0x3c
/* 8016D330 0016A130  38 03 04 C0 */	addi r0, r3, 0x4c0
/* 8016D334 0016A134  7C 9C 00 2E */	lwzx r4, r28, r0
/* 8016D338 0016A138  28 04 00 00 */	cmplwi r4, 0
/* 8016D33C 0016A13C  41 82 00 10 */	beq lbl_8016D34C
/* 8016D340 0016A140  7F 83 E3 78 */	mr r3, r28
/* 8016D344 0016A144  38 A0 00 12 */	li r5, 0x12
/* 8016D348 0016A148  4B EB 23 99 */	bl zEntEvent__FP5xBaseP5xBaseUi
lbl_8016D34C:
/* 8016D34C 0016A14C  3C 80 4E 47 */	lis r4, 0x4E474254@ha
/* 8016D350 0016A150  80 7C 02 28 */	lwz r3, 0x228(r28)
/* 8016D354 0016A154  38 84 42 54 */	addi r4, r4, 0x4E474254@l
/* 8016D358 0016A158  38 A0 00 01 */	li r5, 1
/* 8016D35C 0016A15C  4B FA 03 D5 */	bl GoalSet__7xPsycheFii
/* 8016D360 0016A160  7F 9F E3 78 */	mr r31, r28
/* 8016D364 0016A164  3B C0 00 00 */	li r30, 0
/* 8016D368 0016A168  3B A0 00 00 */	li r29, 0
/* 8016D36C 0016A16C  48 00 00 28 */	b lbl_8016D394
lbl_8016D370:
/* 8016D370 0016A170  80 7F 04 BC */	lwz r3, 0x4bc(r31)
/* 8016D374 0016A174  28 03 00 00 */	cmplwi r3, 0
/* 8016D378 0016A178  41 82 00 14 */	beq lbl_8016D38C
/* 8016D37C 0016A17C  4B EF 3E 81 */	bl zEntDestructObj_isDestroyed__FP15zEntDestructObj
/* 8016D380 0016A180  28 03 00 00 */	cmplwi r3, 0
/* 8016D384 0016A184  40 82 00 08 */	bne lbl_8016D38C
/* 8016D388 0016A188  3B DE 00 01 */	addi r30, r30, 1
lbl_8016D38C:
/* 8016D38C 0016A18C  3B FF 00 3C */	addi r31, r31, 0x3c
/* 8016D390 0016A190  3B BD 00 01 */	addi r29, r29, 1
lbl_8016D394:
/* 8016D394 0016A194  80 1C 06 94 */	lwz r0, 0x694(r28)
/* 8016D398 0016A198  7C 1D 00 00 */	cmpw r29, r0
/* 8016D39C 0016A19C  41 80 FF D4 */	blt lbl_8016D370
/* 8016D3A0 0016A1A0  2C 1E 00 02 */	cmpwi r30, 2
/* 8016D3A4 0016A1A4  41 82 00 38 */	beq lbl_8016D3DC
/* 8016D3A8 0016A1A8  40 80 00 10 */	bge lbl_8016D3B8
/* 8016D3AC 0016A1AC  2C 1E 00 01 */	cmpwi r30, 1
/* 8016D3B0 0016A1B0  40 80 00 14 */	bge lbl_8016D3C4
/* 8016D3B4 0016A1B4  48 00 00 58 */	b lbl_8016D40C
lbl_8016D3B8:
/* 8016D3B8 0016A1B8  2C 1E 00 04 */	cmpwi r30, 4
/* 8016D3BC 0016A1BC  40 80 00 50 */	bge lbl_8016D40C
/* 8016D3C0 0016A1C0  48 00 00 34 */	b lbl_8016D3F4
lbl_8016D3C4:
/* 8016D3C4 0016A1C4  7F 83 E3 78 */	mr r3, r28
/* 8016D3C8 0016A1C8  38 80 00 06 */	li r4, 6
/* 8016D3CC 0016A1CC  38 A0 00 00 */	li r5, 0
/* 8016D3D0 0016A1D0  38 C0 00 00 */	li r6, 0
/* 8016D3D4 0016A1D4  48 00 03 A9 */	bl say__13zNPCBPlanktonFiib
/* 8016D3D8 0016A1D8  48 00 00 48 */	b lbl_8016D420
lbl_8016D3DC:
/* 8016D3DC 0016A1DC  7F 83 E3 78 */	mr r3, r28
/* 8016D3E0 0016A1E0  38 80 00 05 */	li r4, 5
/* 8016D3E4 0016A1E4  38 A0 00 00 */	li r5, 0
/* 8016D3E8 0016A1E8  38 C0 00 00 */	li r6, 0
/* 8016D3EC 0016A1EC  48 00 03 91 */	bl say__13zNPCBPlanktonFiib
/* 8016D3F0 0016A1F0  48 00 00 30 */	b lbl_8016D420
lbl_8016D3F4:
/* 8016D3F4 0016A1F4  7F 83 E3 78 */	mr r3, r28
/* 8016D3F8 0016A1F8  38 80 00 04 */	li r4, 4
/* 8016D3FC 0016A1FC  38 A0 00 00 */	li r5, 0
/* 8016D400 0016A200  38 C0 00 00 */	li r6, 0
/* 8016D404 0016A204  48 00 03 79 */	bl say__13zNPCBPlanktonFiib
/* 8016D408 0016A208  48 00 00 18 */	b lbl_8016D420
lbl_8016D40C:
/* 8016D40C 0016A20C  7F 83 E3 78 */	mr r3, r28
/* 8016D410 0016A210  38 80 00 03 */	li r4, 3
/* 8016D414 0016A214  38 A0 00 00 */	li r5, 0
/* 8016D418 0016A218  38 C0 00 00 */	li r6, 0
/* 8016D41C 0016A21C  48 00 03 61 */	bl say__13zNPCBPlanktonFiib
lbl_8016D420:
/* 8016D420 0016A220  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016D424 0016A224  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016D428 0016A228  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016D42C 0016A22C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8016D430 0016A230  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8016D434 0016A234  7C 08 03 A6 */	mtlr r0
/* 8016D438 0016A238  38 21 00 20 */	addi r1, r1, 0x20
/* 8016D43C 0016A23C  4E 80 00 20 */	blr 

.global cronies_dead__13zNPCBPlanktonCFv
cronies_dead__13zNPCBPlanktonCFv:
/* 8016D440 0016A240  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016D444 0016A244  7C 08 02 A6 */	mflr r0
/* 8016D448 0016A248  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016D44C 0016A24C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016D450 0016A250  93 C1 00 08 */	stw r30, 8(r1)
/* 8016D454 0016A254  80 03 06 98 */	lwz r0, 0x698(r3)
/* 8016D458 0016A258  1C 80 00 3C */	mulli r4, r0, 0x3c
/* 8016D45C 0016A25C  38 84 04 B4 */	addi r4, r4, 0x4b4
/* 8016D460 0016A260  7C 83 22 14 */	add r4, r3, r4
/* 8016D464 0016A264  80 04 00 30 */	lwz r0, 0x30(r4)
/* 8016D468 0016A268  3B E4 00 10 */	addi r31, r4, 0x10
/* 8016D46C 0016A26C  54 00 10 3A */	slwi r0, r0, 2
/* 8016D470 0016A270  7F DF 02 14 */	add r30, r31, r0
/* 8016D474 0016A274  48 00 00 2C */	b lbl_8016D4A0
lbl_8016D478:
/* 8016D478 0016A278  80 7F 00 00 */	lwz r3, 0(r31)
/* 8016D47C 0016A27C  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 8016D480 0016A280  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8016D484 0016A284  7D 89 03 A6 */	mtctr r12
/* 8016D488 0016A288  4E 80 04 21 */	bctrl 
/* 8016D48C 0016A28C  2C 03 00 00 */	cmpwi r3, 0
/* 8016D490 0016A290  41 82 00 0C */	beq lbl_8016D49C
/* 8016D494 0016A294  38 60 00 00 */	li r3, 0
/* 8016D498 0016A298  48 00 00 14 */	b lbl_8016D4AC
lbl_8016D49C:
/* 8016D49C 0016A29C  3B FF 00 04 */	addi r31, r31, 4
lbl_8016D4A0:
/* 8016D4A0 0016A2A0  7C 1F F0 40 */	cmplw r31, r30
/* 8016D4A4 0016A2A4  40 82 FF D4 */	bne lbl_8016D478
/* 8016D4A8 0016A2A8  38 60 00 01 */	li r3, 1
lbl_8016D4AC:
/* 8016D4AC 0016A2AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016D4B0 0016A2B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016D4B4 0016A2B4  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016D4B8 0016A2B8  7C 08 03 A6 */	mtlr r0
/* 8016D4BC 0016A2BC  38 21 00 10 */	addi r1, r1, 0x10
/* 8016D4C0 0016A2C0  4E 80 00 20 */	blr 

.global impart_velocity__13zNPCBPlanktonFRC5xVec3
impart_velocity__13zNPCBPlanktonFRC5xVec3:
/* 8016D4C4 0016A2C4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8016D4C8 0016A2C8  7C 08 02 A6 */	mflr r0
/* 8016D4CC 0016A2CC  90 01 00 44 */	stw r0, 0x44(r1)
/* 8016D4D0 0016A2D0  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8016D4D4 0016A2D4  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8016D4D8 0016A2D8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8016D4DC 0016A2DC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8016D4E0 0016A2E0  7C 7E 1B 78 */	mr r30, r3
/* 8016D4E4 0016A2E4  7C 9F 23 78 */	mr r31, r4
/* 8016D4E8 0016A2E8  80 03 02 BC */	lwz r0, 0x2bc(r3)
/* 8016D4EC 0016A2EC  2C 00 00 03 */	cmpwi r0, 3
/* 8016D4F0 0016A2F0  41 82 00 0C */	beq lbl_8016D4FC
/* 8016D4F4 0016A2F4  40 80 00 C0 */	bge lbl_8016D5B4
/* 8016D4F8 0016A2F8  48 00 00 BC */	b lbl_8016D5B4
lbl_8016D4FC:
/* 8016D4FC 0016A2FC  48 00 26 BD */	bl location__13zNPCBPlanktonCFv
/* 8016D500 0016A300  7C 65 1B 78 */	mr r5, r3
/* 8016D504 0016A304  7F E4 FB 78 */	mr r4, r31
/* 8016D508 0016A308  38 61 00 10 */	addi r3, r1, 0x10
/* 8016D50C 0016A30C  38 DE 04 50 */	addi r6, r30, 0x450
/* 8016D510 0016A310  4B FF EC BD */	bl zNPCTypeBossPlankton.world_to_ring_vel__34_unnamed_zNPCTypeBossPlankton_cpp_FRC5xVec3RC5xVec3RC5xVec3
/* 8016D514 0016A314  80 A1 00 10 */	lwz r5, 0x10(r1)
/* 8016D518 0016A318  7F C3 F3 78 */	mr r3, r30
/* 8016D51C 0016A31C  80 81 00 14 */	lwz r4, 0x14(r1)
/* 8016D520 0016A320  80 01 00 18 */	lwz r0, 0x18(r1)
/* 8016D524 0016A324  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 8016D528 0016A328  90 81 00 20 */	stw r4, 0x20(r1)
/* 8016D52C 0016A32C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016D530 0016A330  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016D534 0016A334  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8016D538 0016A338  80 82 C0 20 */	lwz r4, lbl__2564-_SDA2_BASE_(r2)
/* 8016D53C 0016A33C  80 02 C0 24 */	lwz r0, lbl_803D09A4-_SDA2_BASE_(r2)
/* 8016D540 0016A340  90 81 00 08 */	stw r4, 8(r1)
/* 8016D544 0016A344  90 01 00 0C */	stw r0, 0xc(r1)
/* 8016D548 0016A348  48 00 26 71 */	bl location__13zNPCBPlanktonCFv
/* 8016D54C 0016A34C  C0 23 00 00 */	lfs f1, 0(r3)
/* 8016D550 0016A350  7F C3 F3 78 */	mr r3, r30
/* 8016D554 0016A354  C0 1E 04 50 */	lfs f0, 0x450(r30)
/* 8016D558 0016A358  EC 01 00 28 */	fsubs f0, f1, f0
/* 8016D55C 0016A35C  D0 01 00 08 */	stfs f0, 8(r1)
/* 8016D560 0016A360  48 00 26 59 */	bl location__13zNPCBPlanktonCFv
/* 8016D564 0016A364  C0 43 00 08 */	lfs f2, 8(r3)
/* 8016D568 0016A368  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016D56C 0016A36C  C0 1E 04 58 */	lfs f0, 0x458(r30)
/* 8016D570 0016A370  38 83 A1 A0 */	addi r4, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016D574 0016A374  C0 3E 04 5C */	lfs f1, 0x45c(r30)
/* 8016D578 0016A378  38 61 00 08 */	addi r3, r1, 8
/* 8016D57C 0016A37C  EC 42 00 28 */	fsubs f2, f2, f0
/* 8016D580 0016A380  C0 04 00 2C */	lfs f0, 0x2c(r4)
/* 8016D584 0016A384  EF E1 00 2A */	fadds f31, f1, f0
/* 8016D588 0016A388  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 8016D58C 0016A38C  4B EA 83 D1 */	bl length2__5xVec2CFv
/* 8016D590 0016A390  EC 1F 07 F2 */	fmuls f0, f31, f31
/* 8016D594 0016A394  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016D598 0016A398  40 81 00 0C */	ble lbl_8016D5A4
/* 8016D59C 0016A39C  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016D5A0 0016A3A0  D0 01 00 24 */	stfs f0, 0x24(r1)
lbl_8016D5A4:
/* 8016D5A4 0016A3A4  38 7E 04 80 */	addi r3, r30, 0x480
/* 8016D5A8 0016A3A8  38 81 00 1C */	addi r4, r1, 0x1c
/* 8016D5AC 0016A3AC  4B EA 7E 99 */	bl __apl__5xVec3FRC5xVec3
/* 8016D5B0 0016A3B0  48 00 00 10 */	b lbl_8016D5C0
lbl_8016D5B4:
/* 8016D5B4 0016A3B4  7F E4 FB 78 */	mr r4, r31
/* 8016D5B8 0016A3B8  38 7E 04 80 */	addi r3, r30, 0x480
/* 8016D5BC 0016A3BC  4B EA 7E 89 */	bl __apl__5xVec3FRC5xVec3
lbl_8016D5C0:
/* 8016D5C0 0016A3C0  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8016D5C4 0016A3C4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8016D5C8 0016A3C8  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8016D5CC 0016A3CC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8016D5D0 0016A3D0  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8016D5D4 0016A3D4  7C 08 03 A6 */	mtlr r0
/* 8016D5D8 0016A3D8  38 21 00 40 */	addi r1, r1, 0x40
/* 8016D5DC 0016A3DC  4E 80 00 20 */	blr 

.global next_territory__13zNPCBPlanktonFv
next_territory__13zNPCBPlanktonFv:
/* 8016D5E0 0016A3E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016D5E4 0016A3E4  7C 08 02 A6 */	mflr r0
/* 8016D5E8 0016A3E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016D5EC 0016A3EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016D5F0 0016A3F0  7C 7F 1B 78 */	mr r31, r3
/* 8016D5F4 0016A3F4  48 00 00 45 */	bl have_cronies__13zNPCBPlanktonCFv
/* 8016D5F8 0016A3F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016D5FC 0016A3FC  41 82 00 28 */	beq lbl_8016D624
/* 8016D600 0016A400  80 7F 06 98 */	lwz r3, 0x698(r31)
/* 8016D604 0016A404  38 03 00 01 */	addi r0, r3, 1
/* 8016D608 0016A408  90 1F 06 98 */	stw r0, 0x698(r31)
/* 8016D60C 0016A40C  80 1F 06 98 */	lwz r0, 0x698(r31)
/* 8016D610 0016A410  80 7F 06 94 */	lwz r3, 0x694(r31)
/* 8016D614 0016A414  7C 00 18 00 */	cmpw r0, r3
/* 8016D618 0016A418  41 80 00 0C */	blt lbl_8016D624
/* 8016D61C 0016A41C  38 03 FF FF */	addi r0, r3, -1
/* 8016D620 0016A420  90 1F 06 98 */	stw r0, 0x698(r31)
lbl_8016D624:
/* 8016D624 0016A424  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016D628 0016A428  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016D62C 0016A42C  7C 08 03 A6 */	mtlr r0
/* 8016D630 0016A430  38 21 00 10 */	addi r1, r1, 0x10
/* 8016D634 0016A434  4E 80 00 20 */	blr 

.global have_cronies__13zNPCBPlanktonCFv
have_cronies__13zNPCBPlanktonCFv:
/* 8016D638 0016A438  80 03 06 98 */	lwz r0, 0x698(r3)
/* 8016D63C 0016A43C  1C 80 00 3C */	mulli r4, r0, 0x3c
/* 8016D640 0016A440  38 04 04 E4 */	addi r0, r4, 0x4e4
/* 8016D644 0016A444  7C 63 00 2E */	lwzx r3, r3, r0
/* 8016D648 0016A448  7C 03 00 D0 */	neg r0, r3
/* 8016D64C 0016A44C  7C 00 18 78 */	andc r0, r0, r3
/* 8016D650 0016A450  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8016D654 0016A454  4E 80 00 20 */	blr 

.global move_to_player_territory__13zNPCBPlanktonFv
move_to_player_territory__13zNPCBPlanktonFv:
/* 8016D658 0016A458  3C 80 80 3C */	lis r4, lbl_globals@ha
/* 8016D65C 0016A45C  38 84 05 58 */	addi r4, r4, lbl_globals@l
/* 8016D660 0016A460  80 84 07 2C */	lwz r4, 0x72c(r4)
/* 8016D664 0016A464  80 04 00 0C */	lwz r0, 0xc(r4)
/* 8016D668 0016A468  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8016D66C 0016A46C  41 82 00 10 */	beq lbl_8016D67C
/* 8016D670 0016A470  80 A4 00 14 */	lwz r5, 0x14(r4)
/* 8016D674 0016A474  28 05 00 00 */	cmplwi r5, 0
/* 8016D678 0016A478  40 82 00 0C */	bne lbl_8016D684
lbl_8016D67C:
/* 8016D67C 0016A47C  38 60 00 00 */	li r3, 0
/* 8016D680 0016A480  4E 80 00 20 */	blr 
lbl_8016D684:
/* 8016D684 0016A484  80 03 06 94 */	lwz r0, 0x694(r3)
/* 8016D688 0016A488  7C 64 1B 78 */	mr r4, r3
/* 8016D68C 0016A48C  38 C0 00 00 */	li r6, 0
/* 8016D690 0016A490  7C 09 03 A6 */	mtctr r0
/* 8016D694 0016A494  2C 00 00 00 */	cmpwi r0, 0
/* 8016D698 0016A498  40 81 00 34 */	ble lbl_8016D6CC
lbl_8016D69C:
/* 8016D69C 0016A49C  80 04 04 E4 */	lwz r0, 0x4e4(r4)
/* 8016D6A0 0016A4A0  2C 00 00 00 */	cmpwi r0, 0
/* 8016D6A4 0016A4A4  41 81 00 1C */	bgt lbl_8016D6C0
/* 8016D6A8 0016A4A8  80 04 04 B8 */	lwz r0, 0x4b8(r4)
/* 8016D6AC 0016A4AC  7C 05 00 40 */	cmplw r5, r0
/* 8016D6B0 0016A4B0  40 82 00 10 */	bne lbl_8016D6C0
/* 8016D6B4 0016A4B4  90 C3 06 98 */	stw r6, 0x698(r3)
/* 8016D6B8 0016A4B8  38 60 00 01 */	li r3, 1
/* 8016D6BC 0016A4BC  4E 80 00 20 */	blr 
lbl_8016D6C0:
/* 8016D6C0 0016A4C0  38 84 00 3C */	addi r4, r4, 0x3c
/* 8016D6C4 0016A4C4  38 C6 00 01 */	addi r6, r6, 1
/* 8016D6C8 0016A4C8  42 00 FF D4 */	bdnz lbl_8016D69C
lbl_8016D6CC:
/* 8016D6CC 0016A4CC  38 60 00 00 */	li r3, 0
/* 8016D6D0 0016A4D0  4E 80 00 20 */	blr 

.global player_left_territory__13zNPCBPlanktonCFv
player_left_territory__13zNPCBPlanktonCFv:
/* 8016D6D4 0016A4D4  80 E3 06 98 */	lwz r7, 0x698(r3)
/* 8016D6D8 0016A4D8  3C 80 80 3C */	lis r4, lbl_globals@ha
/* 8016D6DC 0016A4DC  38 84 05 58 */	addi r4, r4, lbl_globals@l
/* 8016D6E0 0016A4E0  1C A7 00 3C */	mulli r5, r7, 0x3c
/* 8016D6E4 0016A4E4  80 84 07 2C */	lwz r4, 0x72c(r4)
/* 8016D6E8 0016A4E8  80 C4 00 14 */	lwz r6, 0x14(r4)
/* 8016D6EC 0016A4EC  38 A5 04 B4 */	addi r5, r5, 0x4b4
/* 8016D6F0 0016A4F0  7C A3 2A 14 */	add r5, r3, r5
/* 8016D6F4 0016A4F4  80 05 00 30 */	lwz r0, 0x30(r5)
/* 8016D6F8 0016A4F8  2C 00 00 00 */	cmpwi r0, 0
/* 8016D6FC 0016A4FC  41 81 00 24 */	bgt lbl_8016D720
/* 8016D700 0016A500  80 05 00 04 */	lwz r0, 4(r5)
/* 8016D704 0016A504  7C 00 30 40 */	cmplw r0, r6
/* 8016D708 0016A508  41 82 00 18 */	beq lbl_8016D720
/* 8016D70C 0016A50C  80 04 00 0C */	lwz r0, 0xc(r4)
/* 8016D710 0016A510  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8016D714 0016A514  41 82 00 0C */	beq lbl_8016D720
/* 8016D718 0016A518  28 06 00 00 */	cmplwi r6, 0
/* 8016D71C 0016A51C  40 82 00 0C */	bne lbl_8016D728
lbl_8016D720:
/* 8016D720 0016A520  38 60 00 00 */	li r3, 0
/* 8016D724 0016A524  4E 80 00 20 */	blr 
lbl_8016D728:
/* 8016D728 0016A528  80 03 06 94 */	lwz r0, 0x694(r3)
/* 8016D72C 0016A52C  38 80 00 00 */	li r4, 0
/* 8016D730 0016A530  7C 09 03 A6 */	mtctr r0
/* 8016D734 0016A534  2C 00 00 00 */	cmpwi r0, 0
/* 8016D738 0016A538  40 81 00 3C */	ble lbl_8016D774
lbl_8016D73C:
/* 8016D73C 0016A53C  38 A3 04 B4 */	addi r5, r3, 0x4b4
/* 8016D740 0016A540  80 03 04 E4 */	lwz r0, 0x4e4(r3)
/* 8016D744 0016A544  2C 00 00 00 */	cmpwi r0, 0
/* 8016D748 0016A548  41 81 00 20 */	bgt lbl_8016D768
/* 8016D74C 0016A54C  80 05 00 04 */	lwz r0, 4(r5)
/* 8016D750 0016A550  7C 06 00 40 */	cmplw r6, r0
/* 8016D754 0016A554  40 82 00 14 */	bne lbl_8016D768
/* 8016D758 0016A558  7C 04 38 00 */	cmpw r4, r7
/* 8016D75C 0016A55C  41 82 00 0C */	beq lbl_8016D768
/* 8016D760 0016A560  38 60 00 01 */	li r3, 1
/* 8016D764 0016A564  4E 80 00 20 */	blr 
lbl_8016D768:
/* 8016D768 0016A568  38 63 00 3C */	addi r3, r3, 0x3c
/* 8016D76C 0016A56C  38 84 00 01 */	addi r4, r4, 1
/* 8016D770 0016A570  42 00 FF CC */	bdnz lbl_8016D73C
lbl_8016D774:
/* 8016D774 0016A574  38 60 00 00 */	li r3, 0
/* 8016D778 0016A578  4E 80 00 20 */	blr 

.global say__13zNPCBPlanktonFiib
say__13zNPCBPlanktonFiib:
/* 8016D77C 0016A57C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016D780 0016A580  7C 08 02 A6 */	mflr r0
/* 8016D784 0016A584  7C A7 2B 78 */	mr r7, r5
/* 8016D788 0016A588  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016D78C 0016A58C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016D790 0016A590  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016D794 0016A594  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8016D798 0016A598  7C 7D 1B 78 */	mr r29, r3
/* 8016D79C 0016A59C  80 63 06 9C */	lwz r3, 0x69c(r3)
/* 8016D7A0 0016A5A0  28 03 00 00 */	cmplwi r3, 0
/* 8016D7A4 0016A5A4  41 82 00 64 */	beq lbl_8016D808
/* 8016D7A8 0016A5A8  54 C0 06 3F */	clrlwi. r0, r6, 0x18
/* 8016D7AC 0016A5AC  41 82 00 38 */	beq lbl_8016D7E4
/* 8016D7B0 0016A5B0  3C A0 80 27 */	lis r5, lbl_say_set__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016D7B4 0016A5B4  54 9E 18 38 */	slwi r30, r4, 3
/* 8016D7B8 0016A5B8  3B E5 13 94 */	addi r31, r5, lbl_say_set__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016D7BC 0016A5BC  7C 9F F0 2E */	lwzx r4, r31, r30
/* 8016D7C0 0016A5C0  38 A0 00 01 */	li r5, 1
/* 8016D7C4 0016A5C4  80 84 00 00 */	lwz r4, 0(r4)
/* 8016D7C8 0016A5C8  4B F9 88 4D */	bl say__12zNPCNewsFishFQ212zNPCNewsFish8say_enumi
/* 8016D7CC 0016A5CC  7C 9F F0 2E */	lwzx r4, r31, r30
/* 8016D7D0 0016A5D0  38 A0 00 02 */	li r5, 2
/* 8016D7D4 0016A5D4  80 7D 06 9C */	lwz r3, 0x69c(r29)
/* 8016D7D8 0016A5D8  80 84 00 04 */	lwz r4, 4(r4)
/* 8016D7DC 0016A5DC  4B F9 88 39 */	bl say__12zNPCNewsFishFQ212zNPCNewsFish8say_enumi
/* 8016D7E0 0016A5E0  48 00 00 28 */	b lbl_8016D808
lbl_8016D7E4:
/* 8016D7E4 0016A5E4  3C A0 80 27 */	lis r5, lbl_say_set__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016D7E8 0016A5E8  54 80 18 38 */	slwi r0, r4, 3
/* 8016D7EC 0016A5EC  38 85 13 94 */	addi r4, r5, lbl_say_set__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016D7F0 0016A5F0  7C E6 3B 78 */	mr r6, r7
/* 8016D7F4 0016A5F4  7C A4 02 14 */	add r5, r4, r0
/* 8016D7F8 0016A5F8  7C 84 00 2E */	lwzx r4, r4, r0
/* 8016D7FC 0016A5FC  80 A5 00 04 */	lwz r5, 4(r5)
/* 8016D800 0016A600  38 E0 FF FF */	li r7, -1
/* 8016D804 0016A604  4B F9 89 19 */	bl say__12zNPCNewsFishFPCQ212zNPCNewsFish8say_enumUlii
lbl_8016D808:
/* 8016D808 0016A608  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016D80C 0016A60C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016D810 0016A610  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016D814 0016A614  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8016D818 0016A618  7C 08 03 A6 */	mtlr r0
/* 8016D81C 0016A61C  38 21 00 20 */	addi r1, r1, 0x20
/* 8016D820 0016A620  4E 80 00 20 */	blr 

.global sickum__13zNPCBPlanktonFv
sickum__13zNPCBPlanktonFv:
/* 8016D824 0016A624  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016D828 0016A628  7C 08 02 A6 */	mflr r0
/* 8016D82C 0016A62C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016D830 0016A630  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016D834 0016A634  7C 7F 1B 78 */	mr r31, r3
/* 8016D838 0016A638  80 63 02 28 */	lwz r3, 0x228(r3)
/* 8016D83C 0016A63C  4B F9 FD 89 */	bl GIDOfActive__7xPsycheCFv
/* 8016D840 0016A640  3C 03 B1 B9 */	addis r0, r3, 0xb1b9
/* 8016D844 0016A644  28 00 42 50 */	cmplwi r0, 0x4250
/* 8016D848 0016A648  41 82 00 20 */	beq lbl_8016D868
/* 8016D84C 0016A64C  38 00 00 01 */	li r0, 1
/* 8016D850 0016A650  3C 60 4E 47 */	lis r3, 0x4E474250@ha
/* 8016D854 0016A654  98 1F 02 B7 */	stb r0, 0x2b7(r31)
/* 8016D858 0016A658  38 83 42 50 */	addi r4, r3, 0x4E474250@l
/* 8016D85C 0016A65C  38 A0 00 01 */	li r5, 1
/* 8016D860 0016A660  80 7F 02 28 */	lwz r3, 0x228(r31)
/* 8016D864 0016A664  4B F9 FE CD */	bl GoalSet__7xPsycheFii
lbl_8016D868:
/* 8016D868 0016A668  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016D86C 0016A66C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016D870 0016A670  7C 08 03 A6 */	mtlr r0
/* 8016D874 0016A674  38 21 00 10 */	addi r1, r1, 0x10
/* 8016D878 0016A678  4E 80 00 20 */	blr 

.global here_boy__13zNPCBPlanktonFv
here_boy__13zNPCBPlanktonFv:
/* 8016D87C 0016A67C  38 00 00 00 */	li r0, 0
/* 8016D880 0016A680  98 03 02 B7 */	stb r0, 0x2b7(r3)
/* 8016D884 0016A684  4E 80 00 20 */	blr 

.global follow_player__13zNPCBPlanktonFv
follow_player__13zNPCBPlanktonFv:
/* 8016D888 0016A688  38 80 00 01 */	li r4, 1
/* 8016D88C 0016A68C  38 00 00 03 */	li r0, 3
/* 8016D890 0016A690  90 83 02 C0 */	stw r4, 0x2c0(r3)
/* 8016D894 0016A694  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016D898 0016A698  D0 03 04 A8 */	stfs f0, 0x4a8(r3)
/* 8016D89C 0016A69C  D0 03 04 A4 */	stfs f0, 0x4a4(r3)
/* 8016D8A0 0016A6A0  90 03 02 BC */	stw r0, 0x2bc(r3)
/* 8016D8A4 0016A6A4  4E 80 00 20 */	blr 

.global follow_camera__13zNPCBPlanktonFv
follow_camera__13zNPCBPlanktonFv:
/* 8016D8A8 0016A6A8  38 80 00 02 */	li r4, 2
/* 8016D8AC 0016A6AC  38 00 00 03 */	li r0, 3
/* 8016D8B0 0016A6B0  90 83 02 C0 */	stw r4, 0x2c0(r3)
/* 8016D8B4 0016A6B4  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016D8B8 0016A6B8  D0 03 04 A8 */	stfs f0, 0x4a8(r3)
/* 8016D8BC 0016A6BC  D0 03 04 A4 */	stfs f0, 0x4a4(r3)
/* 8016D8C0 0016A6C0  90 03 02 BC */	stw r0, 0x2bc(r3)
/* 8016D8C4 0016A6C4  4E 80 00 20 */	blr 

.global reset_speed__13zNPCBPlanktonFv
reset_speed__13zNPCBPlanktonFv:
/* 8016D8C8 0016A6C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016D8CC 0016A6CC  7C 08 02 A6 */	mflr r0
/* 8016D8D0 0016A6D0  3C 80 80 33 */	lis r4, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016D8D4 0016A6D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016D8D8 0016A6D8  38 84 A1 A0 */	addi r4, r4, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016D8DC 0016A6DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016D8E0 0016A6E0  7C 7F 1B 78 */	mr r31, r3
/* 8016D8E4 0016A6E4  C0 04 00 18 */	lfs f0, 0x18(r4)
/* 8016D8E8 0016A6E8  D0 03 04 6C */	stfs f0, 0x46c(r3)
/* 8016D8EC 0016A6EC  C0 04 00 1C */	lfs f0, 0x1c(r4)
/* 8016D8F0 0016A6F0  D0 03 04 70 */	stfs f0, 0x470(r3)
/* 8016D8F4 0016A6F4  80 03 02 C4 */	lwz r0, 0x2c4(r3)
/* 8016D8F8 0016A6F8  2C 00 00 00 */	cmpwi r0, 0
/* 8016D8FC 0016A6FC  40 82 00 28 */	bne lbl_8016D924
/* 8016D900 0016A700  38 7F 04 8C */	addi r3, r31, 0x48c
/* 8016D904 0016A704  38 84 00 50 */	addi r4, r4, 0x50
/* 8016D908 0016A708  4B E9 D9 5D */	bl __as__5xVec3FRC5xVec3
/* 8016D90C 0016A70C  3C 80 80 33 */	lis r4, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016D910 0016A710  38 7F 04 98 */	addi r3, r31, 0x498
/* 8016D914 0016A714  38 84 A1 A0 */	addi r4, r4, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016D918 0016A718  38 84 00 5C */	addi r4, r4, 0x5c
/* 8016D91C 0016A71C  4B E9 D9 49 */	bl __as__5xVec3FRC5xVec3
/* 8016D920 0016A720  48 00 00 24 */	b lbl_8016D944
lbl_8016D924:
/* 8016D924 0016A724  38 7F 04 8C */	addi r3, r31, 0x48c
/* 8016D928 0016A728  38 84 00 70 */	addi r4, r4, 0x70
/* 8016D92C 0016A72C  4B E9 D9 39 */	bl __as__5xVec3FRC5xVec3
/* 8016D930 0016A730  3C 80 80 33 */	lis r4, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016D934 0016A734  38 7F 04 98 */	addi r3, r31, 0x498
/* 8016D938 0016A738  38 84 A1 A0 */	addi r4, r4, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016D93C 0016A73C  38 84 00 7C */	addi r4, r4, 0x7c
/* 8016D940 0016A740  4B E9 D9 25 */	bl __as__5xVec3FRC5xVec3
lbl_8016D944:
/* 8016D944 0016A744  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016D948 0016A748  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016D94C 0016A74C  7C 08 03 A6 */	mtlr r0
/* 8016D950 0016A750  38 21 00 10 */	addi r1, r1, 0x10
/* 8016D954 0016A754  4E 80 00 20 */	blr 

.global halt__13zNPCBPlanktonFf
halt__13zNPCBPlanktonFf:
/* 8016D958 0016A758  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8016D95C 0016A75C  7C 08 02 A6 */	mflr r0
/* 8016D960 0016A760  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016D964 0016A764  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8016D968 0016A768  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8016D96C 0016A76C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016D970 0016A770  7C 7F 1B 78 */	mr r31, r3
/* 8016D974 0016A774  38 00 00 00 */	li r0, 0
/* 8016D978 0016A778  90 03 02 C0 */	stw r0, 0x2c0(r3)
/* 8016D97C 0016A77C  FF E0 08 90 */	fmr f31, f1
/* 8016D980 0016A780  80 03 02 BC */	lwz r0, 0x2bc(r3)
/* 8016D984 0016A784  2C 00 00 03 */	cmpwi r0, 3
/* 8016D988 0016A788  40 82 00 28 */	bne lbl_8016D9B0
/* 8016D98C 0016A78C  48 00 22 2D */	bl location__13zNPCBPlanktonCFv
/* 8016D990 0016A790  7C 65 1B 78 */	mr r5, r3
/* 8016D994 0016A794  38 61 00 08 */	addi r3, r1, 8
/* 8016D998 0016A798  38 9F 04 80 */	addi r4, r31, 0x480
/* 8016D99C 0016A79C  38 DF 04 50 */	addi r6, r31, 0x450
/* 8016D9A0 0016A7A0  4B FF E9 29 */	bl zNPCTypeBossPlankton.ring_to_world_vel__34_unnamed_zNPCTypeBossPlankton_cpp_FRC5xVec3RC5xVec3RC5xVec3
/* 8016D9A4 0016A7A4  38 7F 04 80 */	addi r3, r31, 0x480
/* 8016D9A8 0016A7A8  38 81 00 08 */	addi r4, r1, 8
/* 8016D9AC 0016A7AC  4B E9 D8 B9 */	bl __as__5xVec3FRC5xVec3
lbl_8016D9B0:
/* 8016D9B0 0016A7B0  38 00 00 02 */	li r0, 2
/* 8016D9B4 0016A7B4  90 1F 02 BC */	stw r0, 0x2bc(r31)
/* 8016D9B8 0016A7B8  C0 3F 04 80 */	lfs f1, 0x480(r31)
/* 8016D9BC 0016A7BC  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016D9C0 0016A7C0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016D9C4 0016A7C4  40 80 00 0C */	bge lbl_8016D9D0
/* 8016D9C8 0016A7C8  FC 00 F8 90 */	fmr f0, f31
/* 8016D9CC 0016A7CC  48 00 00 08 */	b lbl_8016D9D4
lbl_8016D9D0:
/* 8016D9D0 0016A7D0  FC 00 F8 50 */	fneg f0, f31
lbl_8016D9D4:
/* 8016D9D4 0016A7D4  D0 1F 04 8C */	stfs f0, 0x48c(r31)
/* 8016D9D8 0016A7D8  C0 3F 04 84 */	lfs f1, 0x484(r31)
/* 8016D9DC 0016A7DC  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016D9E0 0016A7E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016D9E4 0016A7E4  40 80 00 0C */	bge lbl_8016D9F0
/* 8016D9E8 0016A7E8  FC 00 F8 90 */	fmr f0, f31
/* 8016D9EC 0016A7EC  48 00 00 08 */	b lbl_8016D9F4
lbl_8016D9F0:
/* 8016D9F0 0016A7F0  FC 00 F8 50 */	fneg f0, f31
lbl_8016D9F4:
/* 8016D9F4 0016A7F4  D0 1F 04 90 */	stfs f0, 0x490(r31)
/* 8016D9F8 0016A7F8  C0 3F 04 88 */	lfs f1, 0x488(r31)
/* 8016D9FC 0016A7FC  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016DA00 0016A800  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016DA04 0016A804  40 80 00 0C */	bge lbl_8016DA10
/* 8016DA08 0016A808  FC 00 F8 90 */	fmr f0, f31
/* 8016DA0C 0016A80C  48 00 00 08 */	b lbl_8016DA14
lbl_8016DA10:
/* 8016DA10 0016A810  FC 00 F8 50 */	fneg f0, f31
lbl_8016DA14:
/* 8016DA14 0016A814  D0 1F 04 94 */	stfs f0, 0x494(r31)
/* 8016DA18 0016A818  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8016DA1C 0016A81C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8016DA20 0016A820  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8016DA24 0016A824  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016DA28 0016A828  7C 08 03 A6 */	mtlr r0
/* 8016DA2C 0016A82C  38 21 00 30 */	addi r1, r1, 0x30
/* 8016DA30 0016A830  4E 80 00 20 */	blr 

.global fall__13zNPCBPlanktonFff
fall__13zNPCBPlanktonFff:
/* 8016DA34 0016A834  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8016DA38 0016A838  7C 08 02 A6 */	mflr r0
/* 8016DA3C 0016A83C  90 01 00 44 */	stw r0, 0x44(r1)
/* 8016DA40 0016A840  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8016DA44 0016A844  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8016DA48 0016A848  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8016DA4C 0016A84C  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 8016DA50 0016A850  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016DA54 0016A854  7C 7F 1B 78 */	mr r31, r3
/* 8016DA58 0016A858  38 00 00 00 */	li r0, 0
/* 8016DA5C 0016A85C  90 03 02 C0 */	stw r0, 0x2c0(r3)
/* 8016DA60 0016A860  FF C0 08 90 */	fmr f30, f1
/* 8016DA64 0016A864  FF E0 10 90 */	fmr f31, f2
/* 8016DA68 0016A868  80 03 02 BC */	lwz r0, 0x2bc(r3)
/* 8016DA6C 0016A86C  2C 00 00 03 */	cmpwi r0, 3
/* 8016DA70 0016A870  40 82 00 28 */	bne lbl_8016DA98
/* 8016DA74 0016A874  48 00 21 45 */	bl location__13zNPCBPlanktonCFv
/* 8016DA78 0016A878  7C 65 1B 78 */	mr r5, r3
/* 8016DA7C 0016A87C  38 61 00 08 */	addi r3, r1, 8
/* 8016DA80 0016A880  38 9F 04 80 */	addi r4, r31, 0x480
/* 8016DA84 0016A884  38 DF 04 50 */	addi r6, r31, 0x450
/* 8016DA88 0016A888  4B FF E8 41 */	bl zNPCTypeBossPlankton.ring_to_world_vel__34_unnamed_zNPCTypeBossPlankton_cpp_FRC5xVec3RC5xVec3RC5xVec3
/* 8016DA8C 0016A88C  38 7F 04 80 */	addi r3, r31, 0x480
/* 8016DA90 0016A890  38 81 00 08 */	addi r4, r1, 8
/* 8016DA94 0016A894  4B E9 D7 D1 */	bl __as__5xVec3FRC5xVec3
lbl_8016DA98:
/* 8016DA98 0016A898  38 00 00 01 */	li r0, 1
/* 8016DA9C 0016A89C  FC 20 F0 90 */	fmr f1, f30
/* 8016DAA0 0016A8A0  FC 60 F0 90 */	fmr f3, f30
/* 8016DAA4 0016A8A4  90 1F 02 BC */	stw r0, 0x2bc(r31)
/* 8016DAA8 0016A8A8  FC 40 F0 50 */	fneg f2, f30
/* 8016DAAC 0016A8AC  38 7F 04 8C */	addi r3, r31, 0x48c
/* 8016DAB0 0016A8B0  4B E9 D6 3D */	bl assign__5xVec3Ffff
/* 8016DAB4 0016A8B4  C0 22 AB 10 */	lfs f1, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016DAB8 0016A8B8  FC 40 F8 90 */	fmr f2, f31
/* 8016DABC 0016A8BC  38 7F 04 98 */	addi r3, r31, 0x498
/* 8016DAC0 0016A8C0  FC 60 08 90 */	fmr f3, f1
/* 8016DAC4 0016A8C4  4B E9 D6 29 */	bl assign__5xVec3Ffff
/* 8016DAC8 0016A8C8  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8016DACC 0016A8CC  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8016DAD0 0016A8D0  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 8016DAD4 0016A8D4  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8016DAD8 0016A8D8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8016DADC 0016A8DC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016DAE0 0016A8E0  7C 08 03 A6 */	mtlr r0
/* 8016DAE4 0016A8E4  38 21 00 40 */	addi r1, r1, 0x40
/* 8016DAE8 0016A8E8  4E 80 00 20 */	blr 
lbl_8016DAEC:
/* 8016DAEC 0016A8EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016DAF0 0016A8F0  7C 08 02 A6 */	mflr r0
/* 8016DAF4 0016A8F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016DAF8 0016A8F8  80 A3 00 0C */	lwz r5, 0xc(r3)
/* 8016DAFC 0016A8FC  88 05 02 B8 */	lbz r0, 0x2b8(r5)
/* 8016DB00 0016A900  28 00 00 00 */	cmplwi r0, 0
/* 8016DB04 0016A904  41 82 00 10 */	beq lbl_8016DB14
/* 8016DB08 0016A908  38 64 01 50 */	addi r3, r4, 0x150
/* 8016DB0C 0016A90C  38 85 02 CC */	addi r4, r5, 0x2cc
/* 8016DB10 0016A910  4B EA 0B DD */	bl __as__5xQuatFRC5xQuat
lbl_8016DB14:
/* 8016DB14 0016A914  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016DB18 0016A918  7C 08 03 A6 */	mtlr r0
/* 8016DB1C 0016A91C  38 21 00 10 */	addi r1, r1, 0x10
/* 8016DB20 0016A920  4E 80 00 20 */	blr 
/* 8016DB24 0016A924  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016DB28 0016A928  7C 08 02 A6 */	mflr r0
/* 8016DB2C 0016A92C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016DB30 0016A930  7C 80 23 78 */	mr r0, r4
/* 8016DB34 0016A934  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016DB38 0016A938  7C BF 2B 78 */	mr r31, r5
/* 8016DB3C 0016A93C  7C 05 03 78 */	mr r5, r0
/* 8016DB40 0016A940  93 C1 00 08 */	stw r30, 8(r1)
/* 8016DB44 0016A944  7C 7E 1B 78 */	mr r30, r3
/* 8016DB48 0016A948  38 60 00 50 */	li r3, 0x50
/* 8016DB4C 0016A94C  7F C4 F3 78 */	mr r4, r30
/* 8016DB50 0016A950  4B FA 16 01 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8016DB54 0016A954  7C 64 1B 79 */	or. r4, r3, r3
/* 8016DB58 0016A958  41 82 00 14 */	beq lbl_8016DB6C
/* 8016DB5C 0016A95C  7F C4 F3 78 */	mr r4, r30
/* 8016DB60 0016A960  7F E5 FB 78 */	mr r5, r31
/* 8016DB64 0016A964  48 00 21 4D */	bl __ct__21zNPCGoalBPlanktonIdleFiR13zNPCBPlankton
/* 8016DB68 0016A968  7C 64 1B 78 */	mr r4, r3
lbl_8016DB6C:
/* 8016DB6C 0016A96C  28 04 00 00 */	cmplwi r4, 0
/* 8016DB70 0016A970  41 82 00 08 */	beq lbl_8016DB78
/* 8016DB74 0016A974  38 84 00 0C */	addi r4, r4, 0xc
lbl_8016DB78:
/* 8016DB78 0016A978  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016DB7C 0016A97C  7C 83 23 78 */	mr r3, r4
/* 8016DB80 0016A980  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016DB84 0016A984  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016DB88 0016A988  7C 08 03 A6 */	mtlr r0
/* 8016DB8C 0016A98C  38 21 00 10 */	addi r1, r1, 0x10
/* 8016DB90 0016A990  4E 80 00 20 */	blr 
/* 8016DB94 0016A994  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8016DB98 0016A998  7C 08 02 A6 */	mflr r0
/* 8016DB9C 0016A99C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016DBA0 0016A9A0  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8016DBA4 0016A9A4  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8016DBA8 0016A9A8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016DBAC 0016A9AC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016DBB0 0016A9B0  7C 7E 1B 78 */	mr r30, r3
/* 8016DBB4 0016A9B4  FF E0 08 90 */	fmr f31, f1
/* 8016DBB8 0016A9B8  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8016DBBC 0016A9BC  7C 9F 23 78 */	mr r31, r4
/* 8016DBC0 0016A9C0  4B FF F3 4D */	bl reappear__13zNPCBPlanktonFv
/* 8016DBC4 0016A9C4  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016DBC8 0016A9C8  38 00 00 00 */	li r0, 0
/* 8016DBCC 0016A9CC  98 03 02 B6 */	stb r0, 0x2b6(r3)
/* 8016DBD0 0016A9D0  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016DBD4 0016A9D4  4B FF DD AD */	bl refresh_orbit__13zNPCBPlanktonFv
/* 8016DBD8 0016A9D8  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016DBDC 0016A9DC  4B FF FC ED */	bl reset_speed__13zNPCBPlanktonFv
/* 8016DBE0 0016A9E0  80 BE 00 4C */	lwz r5, 0x4c(r30)
/* 8016DBE4 0016A9E4  38 00 00 00 */	li r0, 0
/* 8016DBE8 0016A9E8  7F C3 F3 78 */	mr r3, r30
/* 8016DBEC 0016A9EC  38 81 00 0C */	addi r4, r1, 0xc
/* 8016DBF0 0016A9F0  90 05 02 C0 */	stw r0, 0x2c0(r5)
/* 8016DBF4 0016A9F4  38 A1 00 08 */	addi r5, r1, 8
/* 8016DBF8 0016A9F8  48 00 01 51 */	bl get_yaw__21zNPCGoalBPlanktonIdleCFRfRf
/* 8016DBFC 0016A9FC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8016DC00 0016AA00  7F C3 F3 78 */	mr r3, r30
/* 8016DC04 0016AA04  48 00 02 45 */	bl apply_yaw__21zNPCGoalBPlanktonIdleFf
/* 8016DC08 0016AA08  FC 20 F8 90 */	fmr f1, f31
/* 8016DC0C 0016AA0C  7F C3 F3 78 */	mr r3, r30
/* 8016DC10 0016AA10  7F E4 FB 78 */	mr r4, r31
/* 8016DC14 0016AA14  4B F6 75 01 */	bl Enter__14zNPCGoalCommonFfPv
/* 8016DC18 0016AA18  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8016DC1C 0016AA1C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8016DC20 0016AA20  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8016DC24 0016AA24  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016DC28 0016AA28  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016DC2C 0016AA2C  7C 08 03 A6 */	mtlr r0
/* 8016DC30 0016AA30  38 21 00 30 */	addi r1, r1, 0x30
/* 8016DC34 0016AA34  4E 80 00 20 */	blr 
/* 8016DC38 0016AA38  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016DC3C 0016AA3C  7C 08 02 A6 */	mflr r0
/* 8016DC40 0016AA40  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016DC44 0016AA44  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8016DC48 0016AA48  FF E0 08 90 */	fmr f31, f1
/* 8016DC4C 0016AA4C  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8016DC50 0016AA50  7C 9F 23 78 */	mr r31, r4
/* 8016DC54 0016AA54  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8016DC58 0016AA58  7C 7E 1B 78 */	mr r30, r3
/* 8016DC5C 0016AA5C  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8016DC60 0016AA60  4B FF DD 21 */	bl refresh_orbit__13zNPCBPlanktonFv
/* 8016DC64 0016AA64  FC 20 F8 90 */	fmr f1, f31
/* 8016DC68 0016AA68  7F C3 F3 78 */	mr r3, r30
/* 8016DC6C 0016AA6C  7F E4 FB 78 */	mr r4, r31
/* 8016DC70 0016AA70  4B F6 77 AD */	bl Exit__5xGoalFfPv
/* 8016DC74 0016AA74  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016DC78 0016AA78  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8016DC7C 0016AA7C  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8016DC80 0016AA80  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 8016DC84 0016AA84  7C 08 03 A6 */	mtlr r0
/* 8016DC88 0016AA88  38 21 00 20 */	addi r1, r1, 0x20
/* 8016DC8C 0016AA8C  4E 80 00 20 */	blr 
/* 8016DC90 0016AA90  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016DC94 0016AA94  7C 08 02 A6 */	mflr r0
/* 8016DC98 0016AA98  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016DC9C 0016AA9C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016DCA0 0016AAA0  7C 9F 23 78 */	mr r31, r4
/* 8016DCA4 0016AAA4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016DCA8 0016AAA8  7C 7E 1B 78 */	mr r30, r3
/* 8016DCAC 0016AAAC  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8016DCB0 0016AAB0  4B FF F5 B1 */	bl crony_attacking__13zNPCBPlanktonCFv
/* 8016DCB4 0016AAB4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016DCB8 0016AAB8  40 82 00 20 */	bne lbl_8016DCD8
/* 8016DCBC 0016AABC  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016DCC0 0016AAC0  48 00 20 3D */	bl take_control__13zNPCBPlanktonFv
/* 8016DCC4 0016AAC4  38 00 00 01 */	li r0, 1
/* 8016DCC8 0016AAC8  3C 60 4E 47 */	lis r3, 0x4E47424C@ha
/* 8016DCCC 0016AACC  90 1F 00 00 */	stw r0, 0(r31)
/* 8016DCD0 0016AAD0  38 63 42 4C */	addi r3, r3, 0x4E47424C@l
/* 8016DCD4 0016AAD4  48 00 00 5C */	b lbl_8016DD30
lbl_8016DCD8:
/* 8016DCD8 0016AAD8  7F C3 F3 78 */	mr r3, r30
/* 8016DCDC 0016AADC  38 81 00 0C */	addi r4, r1, 0xc
/* 8016DCE0 0016AAE0  38 A1 00 08 */	addi r5, r1, 8
/* 8016DCE4 0016AAE4  48 00 00 65 */	bl get_yaw__21zNPCGoalBPlanktonIdleCFRfRf
/* 8016DCE8 0016AAE8  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016DCEC 0016AAEC  C0 23 04 A4 */	lfs f1, 0x4a4(r3)
/* 8016DCF0 0016AAF0  C0 03 04 A8 */	lfs f0, 0x4a8(r3)
/* 8016DCF4 0016AAF4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016DCF8 0016AAF8  4C 41 13 82 */	cror 2, 1, 2
/* 8016DCFC 0016AAFC  41 82 00 24 */	beq lbl_8016DD20
/* 8016DD00 0016AB00  C0 01 00 08 */	lfs f0, 8(r1)
/* 8016DD04 0016AB04  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016DD08 0016AB08  38 63 A1 A0 */	addi r3, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016DD0C 0016AB0C  FC 20 02 10 */	fabs f1, f0
/* 8016DD10 0016AB10  C0 03 00 3C */	lfs f0, 0x3c(r3)
/* 8016DD14 0016AB14  FC 20 08 18 */	frsp f1, f1
/* 8016DD18 0016AB18  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016DD1C 0016AB1C  40 81 00 10 */	ble lbl_8016DD2C
lbl_8016DD20:
/* 8016DD20 0016AB20  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8016DD24 0016AB24  7F C3 F3 78 */	mr r3, r30
/* 8016DD28 0016AB28  48 00 01 21 */	bl apply_yaw__21zNPCGoalBPlanktonIdleFf
lbl_8016DD2C:
/* 8016DD2C 0016AB2C  38 60 00 00 */	li r3, 0
lbl_8016DD30:
/* 8016DD30 0016AB30  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016DD34 0016AB34  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016DD38 0016AB38  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016DD3C 0016AB3C  7C 08 03 A6 */	mtlr r0
/* 8016DD40 0016AB40  38 21 00 20 */	addi r1, r1, 0x20
/* 8016DD44 0016AB44  4E 80 00 20 */	blr 

.global get_yaw__21zNPCGoalBPlanktonIdleCFRfRf
get_yaw__21zNPCGoalBPlanktonIdleCFRfRf:
/* 8016DD48 0016AB48  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8016DD4C 0016AB4C  7C 08 02 A6 */	mflr r0
/* 8016DD50 0016AB50  90 01 00 44 */	stw r0, 0x44(r1)
/* 8016DD54 0016AB54  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8016DD58 0016AB58  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8016DD5C 0016AB5C  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8016DD60 0016AB60  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 8016DD64 0016AB64  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016DD68 0016AB68  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016DD6C 0016AB6C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8016DD70 0016AB70  7C 7D 1B 78 */	mr r29, r3
/* 8016DD74 0016AB74  7C 9E 23 78 */	mr r30, r4
/* 8016DD78 0016AB78  7C BF 2B 78 */	mr r31, r5
/* 8016DD7C 0016AB7C  4B FF AD 19 */	bl zNPCTypeBossPlankton.get_player_loc__34_unnamed_zNPCTypeBossPlankton_cpp_Fv
/* 8016DD80 0016AB80  7C 64 1B 78 */	mr r4, r3
/* 8016DD84 0016AB84  80 7D 00 4C */	lwz r3, 0x4c(r29)
/* 8016DD88 0016AB88  48 00 1F AD */	bl get_orbit_yaw__13zNPCBPlanktonCFRC5xVec3
/* 8016DD8C 0016AB8C  FF C0 08 90 */	fmr f30, f1
/* 8016DD90 0016AB90  80 7D 00 4C */	lwz r3, 0x4c(r29)
/* 8016DD94 0016AB94  48 00 1E 25 */	bl location__13zNPCBPlanktonCFv
/* 8016DD98 0016AB98  7C 64 1B 78 */	mr r4, r3
/* 8016DD9C 0016AB9C  80 7D 00 4C */	lwz r3, 0x4c(r29)
/* 8016DDA0 0016ABA0  48 00 1F 95 */	bl get_orbit_yaw__13zNPCBPlanktonCFRC5xVec3
/* 8016DDA4 0016ABA4  FF E0 08 90 */	fmr f31, f1
/* 8016DDA8 0016ABA8  C0 22 AB B0 */	lfs f1, lbl__2165-_SDA2_BASE_(r2)
/* 8016DDAC 0016ABAC  EC 1F F0 28 */	fsubs f0, f31, f30
/* 8016DDB0 0016ABB0  EC 21 00 2A */	fadds f1, f1, f0
/* 8016DDB4 0016ABB4  4B EA 0A 41 */	bl xrmod__Ff
/* 8016DDB8 0016ABB8  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016DDBC 0016ABBC  C0 02 AB B0 */	lfs f0, lbl__2165-_SDA2_BASE_(r2)
/* 8016DDC0 0016ABC0  38 63 A1 A0 */	addi r3, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016DDC4 0016ABC4  C0 43 00 6C */	lfs f2, 0x6c(r3)
/* 8016DDC8 0016ABC8  EC 21 00 28 */	fsubs f1, f1, f0
/* 8016DDCC 0016ABCC  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 8016DDD0 0016ABD0  EC 02 00 2A */	fadds f0, f2, f0
/* 8016DDD4 0016ABD4  D0 1E 00 00 */	stfs f0, 0(r30)
/* 8016DDD8 0016ABD8  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016DDDC 0016ABDC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016DDE0 0016ABE0  40 80 00 10 */	bge lbl_8016DDF0
/* 8016DDE4 0016ABE4  C0 1E 00 00 */	lfs f0, 0(r30)
/* 8016DDE8 0016ABE8  FC 00 00 50 */	fneg f0, f0
/* 8016DDEC 0016ABEC  D0 1E 00 00 */	stfs f0, 0(r30)
lbl_8016DDF0:
/* 8016DDF0 0016ABF0  C0 1E 00 00 */	lfs f0, 0(r30)
/* 8016DDF4 0016ABF4  EC 00 F0 2A */	fadds f0, f0, f30
/* 8016DDF8 0016ABF8  D0 1E 00 00 */	stfs f0, 0(r30)
/* 8016DDFC 0016ABFC  C0 1E 00 00 */	lfs f0, 0(r30)
/* 8016DE00 0016AC00  C0 22 AB B0 */	lfs f1, lbl__2165-_SDA2_BASE_(r2)
/* 8016DE04 0016AC04  EC 00 F8 28 */	fsubs f0, f0, f31
/* 8016DE08 0016AC08  EC 21 00 2A */	fadds f1, f1, f0
/* 8016DE0C 0016AC0C  4B EA 09 E9 */	bl xrmod__Ff
/* 8016DE10 0016AC10  C0 02 AB B0 */	lfs f0, lbl__2165-_SDA2_BASE_(r2)
/* 8016DE14 0016AC14  EC 01 00 28 */	fsubs f0, f1, f0
/* 8016DE18 0016AC18  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8016DE1C 0016AC1C  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8016DE20 0016AC20  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8016DE24 0016AC24  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 8016DE28 0016AC28  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8016DE2C 0016AC2C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016DE30 0016AC30  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016DE34 0016AC34  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8016DE38 0016AC38  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8016DE3C 0016AC3C  7C 08 03 A6 */	mtlr r0
/* 8016DE40 0016AC40  38 21 00 40 */	addi r1, r1, 0x40
/* 8016DE44 0016AC44  4E 80 00 20 */	blr 

.global apply_yaw__21zNPCGoalBPlanktonIdleFf
apply_yaw__21zNPCGoalBPlanktonIdleFf:
/* 8016DE48 0016AC48  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8016DE4C 0016AC4C  7C 08 02 A6 */	mflr r0
/* 8016DE50 0016AC50  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016DE54 0016AC54  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8016DE58 0016AC58  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8016DE5C 0016AC5C  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 8016DE60 0016AC60  F3 C1 00 18 */	psq_st f30, 24(r1), 0, qr0
/* 8016DE64 0016AC64  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016DE68 0016AC68  93 C1 00 08 */	stw r30, 8(r1)
/* 8016DE6C 0016AC6C  7C 7E 1B 78 */	mr r30, r3
/* 8016DE70 0016AC70  FF C0 08 90 */	fmr f30, f1
/* 8016DE74 0016AC74  4B EC 2E 15 */	bl xurand__Fv
/* 8016DE78 0016AC78  C0 42 AB 64 */	lfs f2, lbl__1901-_SDA2_BASE_(r2)
/* 8016DE7C 0016AC7C  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016DE80 0016AC80  C0 02 AB 0C */	lfs f0, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016DE84 0016AC84  38 63 A1 A0 */	addi r3, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016DE88 0016AC88  80 9E 00 4C */	lwz r4, 0x4c(r30)
/* 8016DE8C 0016AC8C  EC 22 00 78 */	fmsubs f1, f2, f1, f0
/* 8016DE90 0016AC90  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 8016DE94 0016AC94  38 64 04 74 */	addi r3, r4, 0x474
/* 8016DE98 0016AC98  38 84 04 50 */	addi r4, r4, 0x450
/* 8016DE9C 0016AC9C  EC 00 00 72 */	fmuls f0, f0, f1
/* 8016DEA0 0016ACA0  EF FE 00 2A */	fadds f31, f30, f0
/* 8016DEA4 0016ACA4  4B E9 D3 C1 */	bl __as__5xVec3FRC5xVec3
/* 8016DEA8 0016ACA8  FC 20 F8 90 */	fmr f1, f31
/* 8016DEAC 0016ACAC  83 FE 00 4C */	lwz r31, 0x4c(r30)
/* 8016DEB0 0016ACB0  4B F5 6F 9D */	bl isin__Ff
/* 8016DEB4 0016ACB4  C0 5F 04 5C */	lfs f2, 0x45c(r31)
/* 8016DEB8 0016ACB8  C0 1F 04 74 */	lfs f0, 0x474(r31)
/* 8016DEBC 0016ACBC  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8016DEC0 0016ACC0  FC 20 F8 90 */	fmr f1, f31
/* 8016DEC4 0016ACC4  D0 1F 04 74 */	stfs f0, 0x474(r31)
/* 8016DEC8 0016ACC8  83 FE 00 4C */	lwz r31, 0x4c(r30)
/* 8016DECC 0016ACCC  4B F5 6F C5 */	bl icos__Ff
/* 8016DED0 0016ACD0  C0 5F 04 5C */	lfs f2, 0x45c(r31)
/* 8016DED4 0016ACD4  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016DED8 0016ACD8  C0 1F 04 7C */	lfs f0, 0x47c(r31)
/* 8016DEDC 0016ACDC  38 63 A1 A0 */	addi r3, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016DEE0 0016ACE0  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8016DEE4 0016ACE4  D0 1F 04 7C */	stfs f0, 0x47c(r31)
/* 8016DEE8 0016ACE8  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016DEEC 0016ACEC  80 9E 00 4C */	lwz r4, 0x4c(r30)
/* 8016DEF0 0016ACF0  D0 04 04 A4 */	stfs f0, 0x4a4(r4)
/* 8016DEF4 0016ACF4  C3 E3 00 40 */	lfs f31, 0x40(r3)
/* 8016DEF8 0016ACF8  C3 C3 00 44 */	lfs f30, 0x44(r3)
/* 8016DEFC 0016ACFC  4B EC 2D 8D */	bl xurand__Fv
/* 8016DF00 0016AD00  EC 1E F8 28 */	fsubs f0, f30, f31
/* 8016DF04 0016AD04  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016DF08 0016AD08  EC 00 F8 7A */	fmadds f0, f0, f1, f31
/* 8016DF0C 0016AD0C  D0 03 04 A8 */	stfs f0, 0x4a8(r3)
/* 8016DF10 0016AD10  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8016DF14 0016AD14  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8016DF18 0016AD18  E3 C1 00 18 */	psq_l f30, 24(r1), 0, qr0
/* 8016DF1C 0016AD1C  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 8016DF20 0016AD20  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016DF24 0016AD24  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8016DF28 0016AD28  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016DF2C 0016AD2C  7C 08 03 A6 */	mtlr r0
/* 8016DF30 0016AD30  38 21 00 30 */	addi r1, r1, 0x30
/* 8016DF34 0016AD34  4E 80 00 20 */	blr 
/* 8016DF38 0016AD38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016DF3C 0016AD3C  7C 08 02 A6 */	mflr r0
/* 8016DF40 0016AD40  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016DF44 0016AD44  7C 80 23 78 */	mr r0, r4
/* 8016DF48 0016AD48  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016DF4C 0016AD4C  7C BF 2B 78 */	mr r31, r5
/* 8016DF50 0016AD50  7C 05 03 78 */	mr r5, r0
/* 8016DF54 0016AD54  93 C1 00 08 */	stw r30, 8(r1)
/* 8016DF58 0016AD58  7C 7E 1B 78 */	mr r30, r3
/* 8016DF5C 0016AD5C  38 60 00 50 */	li r3, 0x50
/* 8016DF60 0016AD60  7F C4 F3 78 */	mr r4, r30
/* 8016DF64 0016AD64  4B FA 11 ED */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8016DF68 0016AD68  7C 64 1B 79 */	or. r4, r3, r3
/* 8016DF6C 0016AD6C  41 82 00 14 */	beq lbl_8016DF80
/* 8016DF70 0016AD70  7F C4 F3 78 */	mr r4, r30
/* 8016DF74 0016AD74  7F E5 FB 78 */	mr r5, r31
/* 8016DF78 0016AD78  48 00 1D F5 */	bl __ct__23zNPCGoalBPlanktonAttackFiR13zNPCBPlankton
/* 8016DF7C 0016AD7C  7C 64 1B 78 */	mr r4, r3
lbl_8016DF80:
/* 8016DF80 0016AD80  28 04 00 00 */	cmplwi r4, 0
/* 8016DF84 0016AD84  41 82 00 08 */	beq lbl_8016DF8C
/* 8016DF88 0016AD88  38 84 00 0C */	addi r4, r4, 0xc
lbl_8016DF8C:
/* 8016DF8C 0016AD8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016DF90 0016AD90  7C 83 23 78 */	mr r3, r4
/* 8016DF94 0016AD94  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016DF98 0016AD98  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016DF9C 0016AD9C  7C 08 03 A6 */	mtlr r0
/* 8016DFA0 0016ADA0  38 21 00 10 */	addi r1, r1, 0x10
/* 8016DFA4 0016ADA4  4E 80 00 20 */	blr 
/* 8016DFA8 0016ADA8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016DFAC 0016ADAC  7C 08 02 A6 */	mflr r0
/* 8016DFB0 0016ADB0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016DFB4 0016ADB4  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8016DFB8 0016ADB8  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8016DFBC 0016ADBC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016DFC0 0016ADC0  93 C1 00 08 */	stw r30, 8(r1)
/* 8016DFC4 0016ADC4  7C 7E 1B 78 */	mr r30, r3
/* 8016DFC8 0016ADC8  FF E0 08 90 */	fmr f31, f1
/* 8016DFCC 0016ADCC  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8016DFD0 0016ADD0  7C 9F 23 78 */	mr r31, r4
/* 8016DFD4 0016ADD4  4B FF EF 39 */	bl reappear__13zNPCBPlanktonFv
/* 8016DFD8 0016ADD8  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016DFDC 0016ADDC  38 00 00 01 */	li r0, 1
/* 8016DFE0 0016ADE0  98 03 02 B6 */	stb r0, 0x2b6(r3)
/* 8016DFE4 0016ADE4  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016DFE8 0016ADE8  4B FF D9 99 */	bl refresh_orbit__13zNPCBPlanktonFv
/* 8016DFEC 0016ADEC  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016DFF0 0016ADF0  4B FF F8 99 */	bl follow_player__13zNPCBPlanktonFv
/* 8016DFF4 0016ADF4  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016DFF8 0016ADF8  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016DFFC 0016ADFC  D0 03 02 C8 */	stfs f0, 0x2c8(r3)
/* 8016E000 0016AE00  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016E004 0016AE04  48 00 1B C5 */	bl face_player__13zNPCBPlanktonFv
/* 8016E008 0016AE08  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016E00C 0016AE0C  4B FF F8 BD */	bl reset_speed__13zNPCBPlanktonFv
/* 8016E010 0016AE10  FC 20 F8 90 */	fmr f1, f31
/* 8016E014 0016AE14  7F C3 F3 78 */	mr r3, r30
/* 8016E018 0016AE18  7F E4 FB 78 */	mr r4, r31
/* 8016E01C 0016AE1C  4B F6 70 F9 */	bl Enter__14zNPCGoalCommonFfPv
/* 8016E020 0016AE20  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8016E024 0016AE24  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016E028 0016AE28  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8016E02C 0016AE2C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016E030 0016AE30  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016E034 0016AE34  7C 08 03 A6 */	mtlr r0
/* 8016E038 0016AE38  38 21 00 20 */	addi r1, r1, 0x20
/* 8016E03C 0016AE3C  4E 80 00 20 */	blr 
/* 8016E040 0016AE40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016E044 0016AE44  7C 08 02 A6 */	mflr r0
/* 8016E048 0016AE48  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016E04C 0016AE4C  4B F6 73 D1 */	bl Exit__5xGoalFfPv
/* 8016E050 0016AE50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016E054 0016AE54  7C 08 03 A6 */	mtlr r0
/* 8016E058 0016AE58  38 21 00 10 */	addi r1, r1, 0x10
/* 8016E05C 0016AE5C  4E 80 00 20 */	blr 
/* 8016E060 0016AE60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016E064 0016AE64  7C 08 02 A6 */	mflr r0
/* 8016E068 0016AE68  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016E06C 0016AE6C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016E070 0016AE70  7C 9F 23 78 */	mr r31, r4
/* 8016E074 0016AE74  93 C1 00 08 */	stw r30, 8(r1)
/* 8016E078 0016AE78  7C 7E 1B 78 */	mr r30, r3
/* 8016E07C 0016AE7C  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8016E080 0016AE80  4B FF F1 E1 */	bl crony_attacking__13zNPCBPlanktonCFv
/* 8016E084 0016AE84  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016E088 0016AE88  41 82 00 18 */	beq lbl_8016E0A0
/* 8016E08C 0016AE8C  38 00 00 01 */	li r0, 1
/* 8016E090 0016AE90  3C 60 4E 47 */	lis r3, 0x4E47424B@ha
/* 8016E094 0016AE94  90 1F 00 00 */	stw r0, 0(r31)
/* 8016E098 0016AE98  38 63 42 4B */	addi r3, r3, 0x4E47424B@l
/* 8016E09C 0016AE9C  48 00 00 44 */	b lbl_8016E0E0
lbl_8016E0A0:
/* 8016E0A0 0016AEA0  80 9E 00 4C */	lwz r4, 0x4c(r30)
/* 8016E0A4 0016AEA4  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016E0A8 0016AEA8  38 63 A1 A0 */	addi r3, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016E0AC 0016AEAC  C0 24 02 C8 */	lfs f1, 0x2c8(r4)
/* 8016E0B0 0016AEB0  C0 03 00 30 */	lfs f0, 0x30(r3)
/* 8016E0B4 0016AEB4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016E0B8 0016AEB8  4C 41 13 82 */	cror 2, 1, 2
/* 8016E0BC 0016AEBC  40 82 00 20 */	bne lbl_8016E0DC
/* 8016E0C0 0016AEC0  C0 03 00 A8 */	lfs f0, 0xa8(r3)
/* 8016E0C4 0016AEC4  3C 60 4E 47 */	lis r3, 0x4E474256@ha
/* 8016E0C8 0016AEC8  38 00 00 01 */	li r0, 1
/* 8016E0CC 0016AECC  D0 04 02 E0 */	stfs f0, 0x2e0(r4)
/* 8016E0D0 0016AED0  38 63 42 56 */	addi r3, r3, 0x4E474256@l
/* 8016E0D4 0016AED4  90 1F 00 00 */	stw r0, 0(r31)
/* 8016E0D8 0016AED8  48 00 00 08 */	b lbl_8016E0E0
lbl_8016E0DC:
/* 8016E0DC 0016AEDC  38 60 00 00 */	li r3, 0
lbl_8016E0E0:
/* 8016E0E0 0016AEE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016E0E4 0016AEE4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016E0E8 0016AEE8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016E0EC 0016AEEC  7C 08 03 A6 */	mtlr r0
/* 8016E0F0 0016AEF0  38 21 00 10 */	addi r1, r1, 0x10
/* 8016E0F4 0016AEF4  4E 80 00 20 */	blr 
/* 8016E0F8 0016AEF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016E0FC 0016AEFC  7C 08 02 A6 */	mflr r0
/* 8016E100 0016AF00  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016E104 0016AF04  7C 80 23 78 */	mr r0, r4
/* 8016E108 0016AF08  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016E10C 0016AF0C  7C BF 2B 78 */	mr r31, r5
/* 8016E110 0016AF10  7C 05 03 78 */	mr r5, r0
/* 8016E114 0016AF14  93 C1 00 08 */	stw r30, 8(r1)
/* 8016E118 0016AF18  7C 7E 1B 78 */	mr r30, r3
/* 8016E11C 0016AF1C  38 60 00 50 */	li r3, 0x50
/* 8016E120 0016AF20  7F C4 F3 78 */	mr r4, r30
/* 8016E124 0016AF24  4B FA 10 2D */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8016E128 0016AF28  7C 64 1B 79 */	or. r4, r3, r3
/* 8016E12C 0016AF2C  41 82 00 14 */	beq lbl_8016E140
/* 8016E130 0016AF30  7F C4 F3 78 */	mr r4, r30
/* 8016E134 0016AF34  7F E5 FB 78 */	mr r5, r31
/* 8016E138 0016AF38  48 00 1C 81 */	bl __ct__23zNPCGoalBPlanktonAmbushFiR13zNPCBPlankton
/* 8016E13C 0016AF3C  7C 64 1B 78 */	mr r4, r3
lbl_8016E140:
/* 8016E140 0016AF40  28 04 00 00 */	cmplwi r4, 0
/* 8016E144 0016AF44  41 82 00 08 */	beq lbl_8016E14C
/* 8016E148 0016AF48  38 84 00 0C */	addi r4, r4, 0xc
lbl_8016E14C:
/* 8016E14C 0016AF4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016E150 0016AF50  7C 83 23 78 */	mr r3, r4
/* 8016E154 0016AF54  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016E158 0016AF58  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016E15C 0016AF5C  7C 08 03 A6 */	mtlr r0
/* 8016E160 0016AF60  38 21 00 10 */	addi r1, r1, 0x10
/* 8016E164 0016AF64  4E 80 00 20 */	blr 
/* 8016E168 0016AF68  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8016E16C 0016AF6C  7C 08 02 A6 */	mflr r0
/* 8016E170 0016AF70  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016E174 0016AF74  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8016E178 0016AF78  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8016E17C 0016AF7C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016E180 0016AF80  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016E184 0016AF84  7C 7E 1B 78 */	mr r30, r3
/* 8016E188 0016AF88  3C 60 80 2A */	lis r3, lbl_g_hash_bossanim@ha
/* 8016E18C 0016AF8C  80 DE 00 4C */	lwz r6, 0x4c(r30)
/* 8016E190 0016AF90  38 00 00 00 */	li r0, 0
/* 8016E194 0016AF94  FF E0 08 90 */	fmr f31, f1
/* 8016E198 0016AF98  38 A3 92 68 */	addi r5, r3, lbl_g_hash_bossanim@l
/* 8016E19C 0016AF9C  98 06 02 B6 */	stb r0, 0x2b6(r6)
/* 8016E1A0 0016AFA0  7C 9F 23 78 */	mr r31, r4
/* 8016E1A4 0016AFA4  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016E1A8 0016AFA8  80 85 00 04 */	lwz r4, 4(r5)
/* 8016E1AC 0016AFAC  C0 22 AB 10 */	lfs f1, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016E1B0 0016AFB0  4B F8 4C F5 */	bl AnimSetState__10zNPCCommonFUif
/* 8016E1B4 0016AFB4  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016E1B8 0016AFB8  4B FF D7 C9 */	bl refresh_orbit__13zNPCBPlanktonFv
/* 8016E1BC 0016AFBC  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016E1C0 0016AFC0  C0 22 AB CC */	lfs f1, lbl__2516-_SDA2_BASE_(r2)
/* 8016E1C4 0016AFC4  4B FF F7 95 */	bl halt__13zNPCBPlanktonFf
/* 8016E1C8 0016AFC8  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016E1CC 0016AFCC  4B FF EC E9 */	bl vanish__13zNPCBPlanktonFv
/* 8016E1D0 0016AFD0  4B FF A8 C5 */	bl zNPCTypeBossPlankton.get_player_loc__34_unnamed_zNPCTypeBossPlankton_cpp_Fv
/* 8016E1D4 0016AFD4  80 9E 00 4C */	lwz r4, 0x4c(r30)
/* 8016E1D8 0016AFD8  7C 65 1B 78 */	mr r5, r3
/* 8016E1DC 0016AFDC  C0 22 AB 10 */	lfs f1, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016E1E0 0016AFE0  38 61 00 08 */	addi r3, r1, 8
/* 8016E1E4 0016AFE4  C0 42 AB D0 */	lfs f2, lbl__2856_1-_SDA2_BASE_(r2)
/* 8016E1E8 0016AFE8  4B FF ED 8D */	bl random_orbit__13zNPCBPlanktonCFRC5xVec3ff
/* 8016E1EC 0016AFEC  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016E1F0 0016AFF0  38 81 00 08 */	addi r4, r1, 8
/* 8016E1F4 0016AFF4  48 00 1C 11 */	bl set_location__13zNPCBPlanktonFRC5xVec3
/* 8016E1F8 0016AFF8  FC 20 F8 90 */	fmr f1, f31
/* 8016E1FC 0016AFFC  7F C3 F3 78 */	mr r3, r30
/* 8016E200 0016B000  7F E4 FB 78 */	mr r4, r31
/* 8016E204 0016B004  4B F6 6F 11 */	bl Enter__14zNPCGoalCommonFfPv
/* 8016E208 0016B008  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8016E20C 0016B00C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8016E210 0016B010  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8016E214 0016B014  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016E218 0016B018  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016E21C 0016B01C  7C 08 03 A6 */	mtlr r0
/* 8016E220 0016B020  38 21 00 30 */	addi r1, r1, 0x30
/* 8016E224 0016B024  4E 80 00 20 */	blr 
/* 8016E228 0016B028  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016E22C 0016B02C  7C 08 02 A6 */	mflr r0
/* 8016E230 0016B030  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016E234 0016B034  4B F6 71 E9 */	bl Exit__5xGoalFfPv
/* 8016E238 0016B038  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016E23C 0016B03C  7C 08 03 A6 */	mtlr r0
/* 8016E240 0016B040  38 21 00 10 */	addi r1, r1, 0x10
/* 8016E244 0016B044  4E 80 00 20 */	blr 
/* 8016E248 0016B048  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8016E24C 0016B04C  7C 08 02 A6 */	mflr r0
/* 8016E250 0016B050  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016E254 0016B054  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8016E258 0016B058  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8016E25C 0016B05C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016E260 0016B060  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016E264 0016B064  7C 7E 1B 78 */	mr r30, r3
/* 8016E268 0016B068  FF E0 08 90 */	fmr f31, f1
/* 8016E26C 0016B06C  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8016E270 0016B070  7C 9F 23 78 */	mr r31, r4
/* 8016E274 0016B074  4B FF F3 C5 */	bl have_cronies__13zNPCBPlanktonCFv
/* 8016E278 0016B078  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016E27C 0016B07C  41 82 00 28 */	beq lbl_8016E2A4
/* 8016E280 0016B080  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016E284 0016B084  4B FF F1 BD */	bl cronies_dead__13zNPCBPlanktonCFv
/* 8016E288 0016B088  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016E28C 0016B08C  41 82 00 90 */	beq lbl_8016E31C
/* 8016E290 0016B090  38 00 00 01 */	li r0, 1
/* 8016E294 0016B094  3C 60 4E 47 */	lis r3, 0x4E47424E@ha
/* 8016E298 0016B098  90 1F 00 00 */	stw r0, 0(r31)
/* 8016E29C 0016B09C  38 63 42 4E */	addi r3, r3, 0x4E47424E@l
/* 8016E2A0 0016B0A0  48 00 00 80 */	b lbl_8016E320
lbl_8016E2A4:
/* 8016E2A4 0016B0A4  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016E2A8 0016B0A8  C0 03 02 DC */	lfs f0, 0x2dc(r3)
/* 8016E2AC 0016B0AC  EC 00 F8 28 */	fsubs f0, f0, f31
/* 8016E2B0 0016B0B0  D0 03 02 DC */	stfs f0, 0x2dc(r3)
/* 8016E2B4 0016B0B4  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016E2B8 0016B0B8  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016E2BC 0016B0BC  C0 23 02 DC */	lfs f1, 0x2dc(r3)
/* 8016E2C0 0016B0C0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016E2C4 0016B0C4  4C 40 13 82 */	cror 2, 0, 2
/* 8016E2C8 0016B0C8  40 82 00 54 */	bne lbl_8016E31C
/* 8016E2CC 0016B0CC  4B FF F3 8D */	bl move_to_player_territory__13zNPCBPlanktonFv
/* 8016E2D0 0016B0D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016E2D4 0016B0D4  41 82 00 48 */	beq lbl_8016E31C
/* 8016E2D8 0016B0D8  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016E2DC 0016B0DC  4B FF D6 A5 */	bl refresh_orbit__13zNPCBPlanktonFv
/* 8016E2E0 0016B0E0  4B FF A7 B5 */	bl zNPCTypeBossPlankton.get_player_loc__34_unnamed_zNPCTypeBossPlankton_cpp_Fv
/* 8016E2E4 0016B0E4  80 9E 00 4C */	lwz r4, 0x4c(r30)
/* 8016E2E8 0016B0E8  7C 65 1B 78 */	mr r5, r3
/* 8016E2EC 0016B0EC  C0 22 AB 10 */	lfs f1, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016E2F0 0016B0F0  38 61 00 08 */	addi r3, r1, 8
/* 8016E2F4 0016B0F4  C0 42 AB D0 */	lfs f2, lbl__2856_1-_SDA2_BASE_(r2)
/* 8016E2F8 0016B0F8  4B FF EC 7D */	bl random_orbit__13zNPCBPlanktonCFRC5xVec3ff
/* 8016E2FC 0016B0FC  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016E300 0016B100  38 81 00 08 */	addi r4, r1, 8
/* 8016E304 0016B104  48 00 1B 01 */	bl set_location__13zNPCBPlanktonFRC5xVec3
/* 8016E308 0016B108  38 00 00 01 */	li r0, 1
/* 8016E30C 0016B10C  3C 60 4E 47 */	lis r3, 0x4E47424E@ha
/* 8016E310 0016B110  90 1F 00 00 */	stw r0, 0(r31)
/* 8016E314 0016B114  38 63 42 4E */	addi r3, r3, 0x4E47424E@l
/* 8016E318 0016B118  48 00 00 08 */	b lbl_8016E320
lbl_8016E31C:
/* 8016E31C 0016B11C  38 60 00 00 */	li r3, 0
lbl_8016E320:
/* 8016E320 0016B120  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8016E324 0016B124  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8016E328 0016B128  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8016E32C 0016B12C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016E330 0016B130  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016E334 0016B134  7C 08 03 A6 */	mtlr r0
/* 8016E338 0016B138  38 21 00 30 */	addi r1, r1, 0x30
/* 8016E33C 0016B13C  4E 80 00 20 */	blr 
/* 8016E340 0016B140  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016E344 0016B144  7C 08 02 A6 */	mflr r0
/* 8016E348 0016B148  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016E34C 0016B14C  7C 80 23 78 */	mr r0, r4
/* 8016E350 0016B150  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016E354 0016B154  7C BF 2B 78 */	mr r31, r5
/* 8016E358 0016B158  7C 05 03 78 */	mr r5, r0
/* 8016E35C 0016B15C  93 C1 00 08 */	stw r30, 8(r1)
/* 8016E360 0016B160  7C 7E 1B 78 */	mr r30, r3
/* 8016E364 0016B164  38 60 00 54 */	li r3, 0x54
/* 8016E368 0016B168  7F C4 F3 78 */	mr r4, r30
/* 8016E36C 0016B16C  4B FA 0D E5 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8016E370 0016B170  7C 64 1B 79 */	or. r4, r3, r3
/* 8016E374 0016B174  41 82 00 14 */	beq lbl_8016E388
/* 8016E378 0016B178  7F C4 F3 78 */	mr r4, r30
/* 8016E37C 0016B17C  7F E5 FB 78 */	mr r5, r31
/* 8016E380 0016B180  48 00 1A CD */	bl __ct__22zNPCGoalBPlanktonFlankFiR13zNPCBPlankton
/* 8016E384 0016B184  7C 64 1B 78 */	mr r4, r3
lbl_8016E388:
/* 8016E388 0016B188  28 04 00 00 */	cmplwi r4, 0
/* 8016E38C 0016B18C  41 82 00 08 */	beq lbl_8016E394
/* 8016E390 0016B190  38 84 00 0C */	addi r4, r4, 0xc
lbl_8016E394:
/* 8016E394 0016B194  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016E398 0016B198  7C 83 23 78 */	mr r3, r4
/* 8016E39C 0016B19C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016E3A0 0016B1A0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016E3A4 0016B1A4  7C 08 03 A6 */	mtlr r0
/* 8016E3A8 0016B1A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8016E3AC 0016B1AC  4E 80 00 20 */	blr 
/* 8016E3B0 0016B1B0  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8016E3B4 0016B1B4  7C 08 02 A6 */	mflr r0
/* 8016E3B8 0016B1B8  90 01 00 54 */	stw r0, 0x54(r1)
/* 8016E3BC 0016B1BC  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8016E3C0 0016B1C0  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8016E3C4 0016B1C4  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8016E3C8 0016B1C8  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8016E3CC 0016B1CC  7C 7E 1B 78 */	mr r30, r3
/* 8016E3D0 0016B1D0  FF E0 08 90 */	fmr f31, f1
/* 8016E3D4 0016B1D4  80 63 00 50 */	lwz r3, 0x50(r3)
/* 8016E3D8 0016B1D8  7C 9F 23 78 */	mr r31, r4
/* 8016E3DC 0016B1DC  4B FF EB 31 */	bl reappear__13zNPCBPlanktonFv
/* 8016E3E0 0016B1E0  80 BE 00 50 */	lwz r5, 0x50(r30)
/* 8016E3E4 0016B1E4  38 00 00 01 */	li r0, 1
/* 8016E3E8 0016B1E8  3C 80 80 3C */	lis r4, lbl_globals@ha
/* 8016E3EC 0016B1EC  38 61 00 14 */	addi r3, r1, 0x14
/* 8016E3F0 0016B1F0  98 05 02 B6 */	stb r0, 0x2b6(r5)
/* 8016E3F4 0016B1F4  38 84 05 58 */	addi r4, r4, lbl_globals@l
/* 8016E3F8 0016B1F8  38 84 00 34 */	addi r4, r4, 0x34
/* 8016E3FC 0016B1FC  80 BE 00 50 */	lwz r5, 0x50(r30)
/* 8016E400 0016B200  C0 25 04 5C */	lfs f1, 0x45c(r5)
/* 8016E404 0016B204  4B E9 CD 1D */	bl __ml__5xVec3CFf
/* 8016E408 0016B208  80 9E 00 50 */	lwz r4, 0x50(r30)
/* 8016E40C 0016B20C  38 61 00 20 */	addi r3, r1, 0x20
/* 8016E410 0016B210  38 A1 00 14 */	addi r5, r1, 0x14
/* 8016E414 0016B214  38 84 04 50 */	addi r4, r4, 0x450
/* 8016E418 0016B218  4B EA 6F C9 */	bl __pl__5xVec3CFRC5xVec3
/* 8016E41C 0016B21C  80 81 00 20 */	lwz r4, 0x20(r1)
/* 8016E420 0016B220  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016E424 0016B224  80 E1 00 24 */	lwz r7, 0x24(r1)
/* 8016E428 0016B228  38 C3 A1 A0 */	addi r6, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016E42C 0016B22C  80 01 00 28 */	lwz r0, 0x28(r1)
/* 8016E430 0016B230  38 61 00 08 */	addi r3, r1, 8
/* 8016E434 0016B234  90 81 00 2C */	stw r4, 0x2c(r1)
/* 8016E438 0016B238  38 A1 00 2C */	addi r5, r1, 0x2c
/* 8016E43C 0016B23C  80 9E 00 50 */	lwz r4, 0x50(r30)
/* 8016E440 0016B240  90 E1 00 30 */	stw r7, 0x30(r1)
/* 8016E444 0016B244  C0 22 AB 10 */	lfs f1, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016E448 0016B248  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016E44C 0016B24C  C0 46 00 38 */	lfs f2, 0x38(r6)
/* 8016E450 0016B250  4B FF EB 25 */	bl random_orbit__13zNPCBPlanktonCFRC5xVec3ff
/* 8016E454 0016B254  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E458 0016B258  38 81 00 08 */	addi r4, r1, 8
/* 8016E45C 0016B25C  48 00 19 A9 */	bl set_location__13zNPCBPlanktonFRC5xVec3
/* 8016E460 0016B260  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E464 0016B264  4B FF D5 1D */	bl refresh_orbit__13zNPCBPlanktonFv
/* 8016E468 0016B268  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E46C 0016B26C  4B FF F4 3D */	bl follow_camera__13zNPCBPlanktonFv
/* 8016E470 0016B270  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E474 0016B274  4B FF F4 55 */	bl reset_speed__13zNPCBPlanktonFv
/* 8016E478 0016B278  FC 20 F8 90 */	fmr f1, f31
/* 8016E47C 0016B27C  7F C3 F3 78 */	mr r3, r30
/* 8016E480 0016B280  7F E4 FB 78 */	mr r4, r31
/* 8016E484 0016B284  4B F6 6C 91 */	bl Enter__14zNPCGoalCommonFfPv
/* 8016E488 0016B288  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8016E48C 0016B28C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8016E490 0016B290  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8016E494 0016B294  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8016E498 0016B298  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8016E49C 0016B29C  7C 08 03 A6 */	mtlr r0
/* 8016E4A0 0016B2A0  38 21 00 50 */	addi r1, r1, 0x50
/* 8016E4A4 0016B2A4  4E 80 00 20 */	blr 
/* 8016E4A8 0016B2A8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016E4AC 0016B2AC  7C 08 02 A6 */	mflr r0
/* 8016E4B0 0016B2B0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016E4B4 0016B2B4  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8016E4B8 0016B2B8  FF E0 08 90 */	fmr f31, f1
/* 8016E4BC 0016B2BC  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8016E4C0 0016B2C0  7C 9F 23 78 */	mr r31, r4
/* 8016E4C4 0016B2C4  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8016E4C8 0016B2C8  7C 7E 1B 78 */	mr r30, r3
/* 8016E4CC 0016B2CC  80 63 00 50 */	lwz r3, 0x50(r3)
/* 8016E4D0 0016B2D0  4B FF F3 F9 */	bl reset_speed__13zNPCBPlanktonFv
/* 8016E4D4 0016B2D4  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E4D8 0016B2D8  4B FF F3 B1 */	bl follow_player__13zNPCBPlanktonFv
/* 8016E4DC 0016B2DC  FC 20 F8 90 */	fmr f1, f31
/* 8016E4E0 0016B2E0  7F C3 F3 78 */	mr r3, r30
/* 8016E4E4 0016B2E4  7F E4 FB 78 */	mr r4, r31
/* 8016E4E8 0016B2E8  4B F6 6F 35 */	bl Exit__5xGoalFfPv
/* 8016E4EC 0016B2EC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016E4F0 0016B2F0  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8016E4F4 0016B2F4  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8016E4F8 0016B2F8  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 8016E4FC 0016B2FC  7C 08 03 A6 */	mtlr r0
/* 8016E500 0016B300  38 21 00 20 */	addi r1, r1, 0x20
/* 8016E504 0016B304  4E 80 00 20 */	blr 
/* 8016E508 0016B308  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016E50C 0016B30C  7C 08 02 A6 */	mflr r0
/* 8016E510 0016B310  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016E514 0016B314  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016E518 0016B318  7C 9F 23 78 */	mr r31, r4
/* 8016E51C 0016B31C  93 C1 00 08 */	stw r30, 8(r1)
/* 8016E520 0016B320  7C 7E 1B 78 */	mr r30, r3
/* 8016E524 0016B324  80 63 00 50 */	lwz r3, 0x50(r3)
/* 8016E528 0016B328  48 00 16 91 */	bl location__13zNPCBPlanktonCFv
/* 8016E52C 0016B32C  80 BE 00 50 */	lwz r5, 0x50(r30)
/* 8016E530 0016B330  C0 43 00 04 */	lfs f2, 4(r3)
/* 8016E534 0016B334  C0 25 04 54 */	lfs f1, 0x454(r5)
/* 8016E538 0016B338  C0 02 AB 18 */	lfs f0, lbl__1658_2-_SDA2_BASE_(r2)
/* 8016E53C 0016B33C  EC 22 08 28 */	fsubs f1, f2, f1
/* 8016E540 0016B340  FC 20 0A 10 */	fabs f1, f1
/* 8016E544 0016B344  FC 20 08 18 */	frsp f1, f1
/* 8016E548 0016B348  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016E54C 0016B34C  4C 40 13 82 */	cror 2, 0, 2
/* 8016E550 0016B350  40 82 00 28 */	bne lbl_8016E578
/* 8016E554 0016B354  3C 80 80 33 */	lis r4, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016E558 0016B358  3C 60 4E 47 */	lis r3, 0x4E474256@ha
/* 8016E55C 0016B35C  38 84 A1 A0 */	addi r4, r4, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016E560 0016B360  38 00 00 01 */	li r0, 1
/* 8016E564 0016B364  C0 04 00 A8 */	lfs f0, 0xa8(r4)
/* 8016E568 0016B368  38 63 42 56 */	addi r3, r3, 0x4E474256@l
/* 8016E56C 0016B36C  D0 05 02 E0 */	stfs f0, 0x2e0(r5)
/* 8016E570 0016B370  90 1F 00 00 */	stw r0, 0(r31)
/* 8016E574 0016B374  48 00 00 08 */	b lbl_8016E57C
lbl_8016E578:
/* 8016E578 0016B378  38 60 00 00 */	li r3, 0
lbl_8016E57C:
/* 8016E57C 0016B37C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016E580 0016B380  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016E584 0016B384  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016E588 0016B388  7C 08 03 A6 */	mtlr r0
/* 8016E58C 0016B38C  38 21 00 10 */	addi r1, r1, 0x10
/* 8016E590 0016B390  4E 80 00 20 */	blr 
/* 8016E594 0016B394  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016E598 0016B398  7C 08 02 A6 */	mflr r0
/* 8016E59C 0016B39C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016E5A0 0016B3A0  7C 80 23 78 */	mr r0, r4
/* 8016E5A4 0016B3A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016E5A8 0016B3A8  7C BF 2B 78 */	mr r31, r5
/* 8016E5AC 0016B3AC  7C 05 03 78 */	mr r5, r0
/* 8016E5B0 0016B3B0  93 C1 00 08 */	stw r30, 8(r1)
/* 8016E5B4 0016B3B4  7C 7E 1B 78 */	mr r30, r3
/* 8016E5B8 0016B3B8  38 60 00 54 */	li r3, 0x54
/* 8016E5BC 0016B3BC  7F C4 F3 78 */	mr r4, r30
/* 8016E5C0 0016B3C0  4B FA 0B 91 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8016E5C4 0016B3C4  7C 64 1B 79 */	or. r4, r3, r3
/* 8016E5C8 0016B3C8  41 82 00 14 */	beq lbl_8016E5DC
/* 8016E5CC 0016B3CC  7F C4 F3 78 */	mr r4, r30
/* 8016E5D0 0016B3D0  7F E5 FB 78 */	mr r5, r31
/* 8016E5D4 0016B3D4  48 00 18 C5 */	bl __ct__22zNPCGoalBPlanktonEvadeFiR13zNPCBPlankton
/* 8016E5D8 0016B3D8  7C 64 1B 78 */	mr r4, r3
lbl_8016E5DC:
/* 8016E5DC 0016B3DC  28 04 00 00 */	cmplwi r4, 0
/* 8016E5E0 0016B3E0  41 82 00 08 */	beq lbl_8016E5E8
/* 8016E5E4 0016B3E4  38 84 00 0C */	addi r4, r4, 0xc
lbl_8016E5E8:
/* 8016E5E8 0016B3E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016E5EC 0016B3EC  7C 83 23 78 */	mr r3, r4
/* 8016E5F0 0016B3F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016E5F4 0016B3F4  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016E5F8 0016B3F8  7C 08 03 A6 */	mtlr r0
/* 8016E5FC 0016B3FC  38 21 00 10 */	addi r1, r1, 0x10
/* 8016E600 0016B400  4E 80 00 20 */	blr 
/* 8016E604 0016B404  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8016E608 0016B408  7C 08 02 A6 */	mflr r0
/* 8016E60C 0016B40C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016E610 0016B410  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8016E614 0016B414  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8016E618 0016B418  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 8016E61C 0016B41C  F3 C1 00 18 */	psq_st f30, 24(r1), 0, qr0
/* 8016E620 0016B420  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016E624 0016B424  93 C1 00 08 */	stw r30, 8(r1)
/* 8016E628 0016B428  7C 7E 1B 78 */	mr r30, r3
/* 8016E62C 0016B42C  FF C0 08 90 */	fmr f30, f1
/* 8016E630 0016B430  80 63 00 50 */	lwz r3, 0x50(r3)
/* 8016E634 0016B434  7C 9F 23 78 */	mr r31, r4
/* 8016E638 0016B438  4B FF E8 D5 */	bl reappear__13zNPCBPlanktonFv
/* 8016E63C 0016B43C  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E640 0016B440  38 00 00 01 */	li r0, 1
/* 8016E644 0016B444  98 03 02 B6 */	stb r0, 0x2b6(r3)
/* 8016E648 0016B448  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E64C 0016B44C  4B FF F2 7D */	bl reset_speed__13zNPCBPlanktonFv
/* 8016E650 0016B450  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E654 0016B454  48 00 15 75 */	bl face_player__13zNPCBPlanktonFv
/* 8016E658 0016B458  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E65C 0016B45C  38 80 00 03 */	li r4, 3
/* 8016E660 0016B460  38 00 00 00 */	li r0, 0
/* 8016E664 0016B464  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 8016E668 0016B468  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E66C 0016B46C  90 03 02 C0 */	stw r0, 0x2c0(r3)
/* 8016E670 0016B470  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E674 0016B474  4B FF F2 55 */	bl reset_speed__13zNPCBPlanktonFv
/* 8016E678 0016B478  3C 80 80 33 */	lis r4, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016E67C 0016B47C  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E680 0016B480  38 84 A1 A0 */	addi r4, r4, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016E684 0016B484  C0 04 01 30 */	lfs f0, 0x130(r4)
/* 8016E688 0016B488  D0 03 04 8C */	stfs f0, 0x48c(r3)
/* 8016E68C 0016B48C  C0 04 01 34 */	lfs f0, 0x134(r4)
/* 8016E690 0016B490  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E694 0016B494  D0 03 04 98 */	stfs f0, 0x498(r3)
/* 8016E698 0016B498  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016E69C 0016B49C  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E6A0 0016B4A0  D0 03 02 C8 */	stfs f0, 0x2c8(r3)
/* 8016E6A4 0016B4A4  C3 E4 01 28 */	lfs f31, 0x128(r4)
/* 8016E6A8 0016B4A8  4B EC 25 E1 */	bl xurand__Fv
/* 8016E6AC 0016B4AC  80 BE 00 50 */	lwz r5, 0x50(r30)
/* 8016E6B0 0016B4B0  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016E6B4 0016B4B4  38 83 A1 A0 */	addi r4, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016E6B8 0016B4B8  7F C3 F3 78 */	mr r3, r30
/* 8016E6BC 0016B4BC  C0 44 01 2C */	lfs f2, 0x12c(r4)
/* 8016E6C0 0016B4C0  7F E4 FB 78 */	mr r4, r31
/* 8016E6C4 0016B4C4  C0 05 02 C8 */	lfs f0, 0x2c8(r5)
/* 8016E6C8 0016B4C8  EC 42 F8 28 */	fsubs f2, f2, f31
/* 8016E6CC 0016B4CC  EC 00 F8 2A */	fadds f0, f0, f31
/* 8016E6D0 0016B4D0  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8016E6D4 0016B4D4  FC 20 F0 90 */	fmr f1, f30
/* 8016E6D8 0016B4D8  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 8016E6DC 0016B4DC  4B F6 6A 39 */	bl Enter__14zNPCGoalCommonFfPv
/* 8016E6E0 0016B4E0  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8016E6E4 0016B4E4  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8016E6E8 0016B4E8  E3 C1 00 18 */	psq_l f30, 24(r1), 0, qr0
/* 8016E6EC 0016B4EC  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 8016E6F0 0016B4F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016E6F4 0016B4F4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8016E6F8 0016B4F8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016E6FC 0016B4FC  7C 08 03 A6 */	mtlr r0
/* 8016E700 0016B500  38 21 00 30 */	addi r1, r1, 0x30
/* 8016E704 0016B504  4E 80 00 20 */	blr 
/* 8016E708 0016B508  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016E70C 0016B50C  7C 08 02 A6 */	mflr r0
/* 8016E710 0016B510  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016E714 0016B514  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8016E718 0016B518  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8016E71C 0016B51C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016E720 0016B520  93 C1 00 08 */	stw r30, 8(r1)
/* 8016E724 0016B524  7C 7E 1B 78 */	mr r30, r3
/* 8016E728 0016B528  FF E0 08 90 */	fmr f31, f1
/* 8016E72C 0016B52C  80 63 00 50 */	lwz r3, 0x50(r3)
/* 8016E730 0016B530  7C 9F 23 78 */	mr r31, r4
/* 8016E734 0016B534  4B FF F1 95 */	bl reset_speed__13zNPCBPlanktonFv
/* 8016E738 0016B538  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E73C 0016B53C  C0 22 AB CC */	lfs f1, lbl__2516-_SDA2_BASE_(r2)
/* 8016E740 0016B540  4B FF F2 19 */	bl halt__13zNPCBPlanktonFf
/* 8016E744 0016B544  FC 20 F8 90 */	fmr f1, f31
/* 8016E748 0016B548  7F C3 F3 78 */	mr r3, r30
/* 8016E74C 0016B54C  7F E4 FB 78 */	mr r4, r31
/* 8016E750 0016B550  4B F6 6C CD */	bl Exit__5xGoalFfPv
/* 8016E754 0016B554  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8016E758 0016B558  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016E75C 0016B55C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8016E760 0016B560  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016E764 0016B564  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016E768 0016B568  7C 08 03 A6 */	mtlr r0
/* 8016E76C 0016B56C  38 21 00 20 */	addi r1, r1, 0x20
/* 8016E770 0016B570  4E 80 00 20 */	blr 
/* 8016E774 0016B574  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8016E778 0016B578  7C 08 02 A6 */	mflr r0
/* 8016E77C 0016B57C  90 01 00 54 */	stw r0, 0x54(r1)
/* 8016E780 0016B580  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8016E784 0016B584  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8016E788 0016B588  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8016E78C 0016B58C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8016E790 0016B590  7C 7E 1B 78 */	mr r30, r3
/* 8016E794 0016B594  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016E798 0016B598  83 FE 00 50 */	lwz r31, 0x50(r30)
/* 8016E79C 0016B59C  38 63 A1 A0 */	addi r3, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016E7A0 0016B5A0  C0 03 01 24 */	lfs f0, 0x124(r3)
/* 8016E7A4 0016B5A4  C0 3F 02 C8 */	lfs f1, 0x2c8(r31)
/* 8016E7A8 0016B5A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016E7AC 0016B5AC  4C 41 13 82 */	cror 2, 1, 2
/* 8016E7B0 0016B5B0  40 82 00 20 */	bne lbl_8016E7D0
/* 8016E7B4 0016B5B4  C0 03 00 A8 */	lfs f0, 0xa8(r3)
/* 8016E7B8 0016B5B8  3C 60 4E 47 */	lis r3, 0x4E474256@ha
/* 8016E7BC 0016B5BC  38 00 00 01 */	li r0, 1
/* 8016E7C0 0016B5C0  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
/* 8016E7C4 0016B5C4  38 63 42 56 */	addi r3, r3, 0x4E474256@l
/* 8016E7C8 0016B5C8  90 04 00 00 */	stw r0, 0(r4)
/* 8016E7CC 0016B5CC  48 00 00 EC */	b lbl_8016E8B8
lbl_8016E7D0:
/* 8016E7D0 0016B5D0  C0 1E 00 4C */	lfs f0, 0x4c(r30)
/* 8016E7D4 0016B5D4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016E7D8 0016B5D8  4C 41 13 82 */	cror 2, 1, 2
/* 8016E7DC 0016B5DC  40 82 00 D8 */	bne lbl_8016E8B4
/* 8016E7E0 0016B5E0  7F E3 FB 78 */	mr r3, r31
/* 8016E7E4 0016B5E4  48 00 13 D5 */	bl location__13zNPCBPlanktonCFv
/* 8016E7E8 0016B5E8  7C 64 1B 78 */	mr r4, r3
/* 8016E7EC 0016B5EC  38 61 00 14 */	addi r3, r1, 0x14
/* 8016E7F0 0016B5F0  38 BF 04 50 */	addi r5, r31, 0x450
/* 8016E7F4 0016B5F4  48 00 01 CD */	bl zNPCTypeBossPlankton.world_to_ring_loc__34_unnamed_zNPCTypeBossPlankton_cpp_FRC5xVec3RC5xVec3
/* 8016E7F8 0016B5F8  80 81 00 14 */	lwz r4, 0x14(r1)
/* 8016E7FC 0016B5FC  80 61 00 18 */	lwz r3, 0x18(r1)
/* 8016E800 0016B600  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8016E804 0016B604  90 81 00 20 */	stw r4, 0x20(r1)
/* 8016E808 0016B608  90 61 00 24 */	stw r3, 0x24(r1)
/* 8016E80C 0016B60C  90 01 00 28 */	stw r0, 0x28(r1)
/* 8016E810 0016B610  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E814 0016B614  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016E818 0016B618  C0 23 04 80 */	lfs f1, 0x480(r3)
/* 8016E81C 0016B61C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016E820 0016B620  40 80 00 18 */	bge lbl_8016E838
/* 8016E824 0016B624  C0 42 AB D4 */	lfs f2, lbl__2941-_SDA2_BASE_(r2)
/* 8016E828 0016B628  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 8016E82C 0016B62C  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 8016E830 0016B630  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8016E834 0016B634  48 00 00 14 */	b lbl_8016E848
lbl_8016E838:
/* 8016E838 0016B638  C0 42 AB D4 */	lfs f2, lbl__2941-_SDA2_BASE_(r2)
/* 8016E83C 0016B63C  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 8016E840 0016B640  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 8016E844 0016B644  EC 02 00 7C */	fnmsubs f0, f2, f1, f0
lbl_8016E848:
/* 8016E848 0016B648  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8016E84C 0016B64C  38 61 00 08 */	addi r3, r1, 8
/* 8016E850 0016B650  38 81 00 20 */	addi r4, r1, 0x20
/* 8016E854 0016B654  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016E858 0016B658  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8016E85C 0016B65C  80 BE 00 50 */	lwz r5, 0x50(r30)
/* 8016E860 0016B660  C0 05 04 5C */	lfs f0, 0x45c(r5)
/* 8016E864 0016B664  38 A5 04 50 */	addi r5, r5, 0x450
/* 8016E868 0016B668  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8016E86C 0016B66C  48 00 00 6D */	bl zNPCTypeBossPlankton.ring_to_world_loc__34_unnamed_zNPCTypeBossPlankton_cpp_FRC5xVec3RC5xVec3
/* 8016E870 0016B670  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E874 0016B674  38 81 00 08 */	addi r4, r1, 8
/* 8016E878 0016B678  38 63 04 74 */	addi r3, r3, 0x474
/* 8016E87C 0016B67C  4B E9 C9 E9 */	bl __as__5xVec3FRC5xVec3
/* 8016E880 0016B680  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016E884 0016B684  38 63 A1 A0 */	addi r3, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016E888 0016B688  C3 E3 01 28 */	lfs f31, 0x128(r3)
/* 8016E88C 0016B68C  4B EC 23 FD */	bl xurand__Fv
/* 8016E890 0016B690  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E894 0016B694  3C 80 80 33 */	lis r4, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016E898 0016B698  38 84 A1 A0 */	addi r4, r4, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016E89C 0016B69C  C0 44 01 2C */	lfs f2, 0x12c(r4)
/* 8016E8A0 0016B6A0  C0 03 02 C8 */	lfs f0, 0x2c8(r3)
/* 8016E8A4 0016B6A4  EC 42 F8 28 */	fsubs f2, f2, f31
/* 8016E8A8 0016B6A8  EC 00 F8 2A */	fadds f0, f0, f31
/* 8016E8AC 0016B6AC  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8016E8B0 0016B6B0  D0 1E 00 4C */	stfs f0, 0x4c(r30)
lbl_8016E8B4:
/* 8016E8B4 0016B6B4  38 60 00 00 */	li r3, 0
lbl_8016E8B8:
/* 8016E8B8 0016B6B8  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8016E8BC 0016B6BC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8016E8C0 0016B6C0  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8016E8C4 0016B6C4  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8016E8C8 0016B6C8  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8016E8CC 0016B6CC  7C 08 03 A6 */	mtlr r0
/* 8016E8D0 0016B6D0  38 21 00 50 */	addi r1, r1, 0x50
/* 8016E8D4 0016B6D4  4E 80 00 20 */	blr 

.global zNPCTypeBossPlankton.ring_to_world_loc__34_unnamed_zNPCTypeBossPlankton_cpp_FRC5xVec3RC5xVec3
zNPCTypeBossPlankton.ring_to_world_loc__34_unnamed_zNPCTypeBossPlankton_cpp_FRC5xVec3RC5xVec3:
/* 8016E8D8 0016B6D8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8016E8DC 0016B6DC  7C 08 02 A6 */	mflr r0
/* 8016E8E0 0016B6E0  90 01 00 44 */	stw r0, 0x44(r1)
/* 8016E8E4 0016B6E4  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8016E8E8 0016B6E8  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8016E8EC 0016B6EC  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8016E8F0 0016B6F0  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 8016E8F4 0016B6F4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016E8F8 0016B6F8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016E8FC 0016B6FC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8016E900 0016B700  7C 9E 23 78 */	mr r30, r4
/* 8016E904 0016B704  C0 02 AB B4 */	lfs f0, lbl__2166-_SDA2_BASE_(r2)
/* 8016E908 0016B708  C0 24 00 08 */	lfs f1, 8(r4)
/* 8016E90C 0016B70C  7C 7D 1B 78 */	mr r29, r3
/* 8016E910 0016B710  7C BF 2B 78 */	mr r31, r5
/* 8016E914 0016B714  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016E918 0016B718  4C 41 13 82 */	cror 2, 1, 2
/* 8016E91C 0016B71C  40 82 00 30 */	bne lbl_8016E94C
/* 8016E920 0016B720  C0 02 AB 28 */	lfs f0, lbl__1755_1-_SDA2_BASE_(r2)
/* 8016E924 0016B724  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016E928 0016B728  4C 40 13 82 */	cror 2, 0, 2
/* 8016E92C 0016B72C  40 82 00 20 */	bne lbl_8016E94C
/* 8016E930 0016B730  C0 5E 00 04 */	lfs f2, 4(r30)
/* 8016E934 0016B734  C0 1F 00 04 */	lfs f0, 4(r31)
/* 8016E938 0016B738  C0 3F 00 00 */	lfs f1, 0(r31)
/* 8016E93C 0016B73C  EC 42 00 2A */	fadds f2, f2, f0
/* 8016E940 0016B740  C0 7F 00 08 */	lfs f3, 8(r31)
/* 8016E944 0016B744  4B EF 16 45 */	bl create__5xVec3Ffff
/* 8016E948 0016B748  48 00 00 4C */	b lbl_8016E994
lbl_8016E94C:
/* 8016E94C 0016B74C  C0 1E 00 00 */	lfs f0, 0(r30)
/* 8016E950 0016B750  EF C0 08 24 */	fdivs f30, f0, f1
/* 8016E954 0016B754  FC 20 F0 90 */	fmr f1, f30
/* 8016E958 0016B758  4B F5 65 39 */	bl icos__Ff
/* 8016E95C 0016B75C  C0 5E 00 08 */	lfs f2, 8(r30)
/* 8016E960 0016B760  C0 1F 00 08 */	lfs f0, 8(r31)
/* 8016E964 0016B764  EF E2 00 7A */	fmadds f31, f2, f1, f0
/* 8016E968 0016B768  FC 20 F0 90 */	fmr f1, f30
/* 8016E96C 0016B76C  4B F5 64 E1 */	bl isin__Ff
/* 8016E970 0016B770  C0 9E 00 08 */	lfs f4, 8(r30)
/* 8016E974 0016B774  FC 60 F8 90 */	fmr f3, f31
/* 8016E978 0016B778  C0 1F 00 00 */	lfs f0, 0(r31)
/* 8016E97C 0016B77C  7F A3 EB 78 */	mr r3, r29
/* 8016E980 0016B780  C0 5F 00 04 */	lfs f2, 4(r31)
/* 8016E984 0016B784  EC 24 00 7A */	fmadds f1, f4, f1, f0
/* 8016E988 0016B788  C0 1E 00 04 */	lfs f0, 4(r30)
/* 8016E98C 0016B78C  EC 42 00 2A */	fadds f2, f2, f0
/* 8016E990 0016B790  4B EF 15 F9 */	bl create__5xVec3Ffff
lbl_8016E994:
/* 8016E994 0016B794  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8016E998 0016B798  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8016E99C 0016B79C  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 8016E9A0 0016B7A0  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8016E9A4 0016B7A4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016E9A8 0016B7A8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016E9AC 0016B7AC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8016E9B0 0016B7B0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8016E9B4 0016B7B4  7C 08 03 A6 */	mtlr r0
/* 8016E9B8 0016B7B8  38 21 00 40 */	addi r1, r1, 0x40
/* 8016E9BC 0016B7BC  4E 80 00 20 */	blr 

.global zNPCTypeBossPlankton.world_to_ring_loc__34_unnamed_zNPCTypeBossPlankton_cpp_FRC5xVec3RC5xVec3
zNPCTypeBossPlankton.world_to_ring_loc__34_unnamed_zNPCTypeBossPlankton_cpp_FRC5xVec3RC5xVec3:
/* 8016E9C0 0016B7C0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8016E9C4 0016B7C4  7C 08 02 A6 */	mflr r0
/* 8016E9C8 0016B7C8  90 01 00 44 */	stw r0, 0x44(r1)
/* 8016E9CC 0016B7CC  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8016E9D0 0016B7D0  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8016E9D4 0016B7D4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8016E9D8 0016B7D8  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8016E9DC 0016B7DC  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8016E9E0 0016B7E0  7C 9E 23 78 */	mr r30, r4
/* 8016E9E4 0016B7E4  7C BF 2B 78 */	mr r31, r5
/* 8016E9E8 0016B7E8  C0 24 00 00 */	lfs f1, 0(r4)
/* 8016E9EC 0016B7EC  7C 7D 1B 78 */	mr r29, r3
/* 8016E9F0 0016B7F0  C0 05 00 00 */	lfs f0, 0(r5)
/* 8016E9F4 0016B7F4  38 61 00 08 */	addi r3, r1, 8
/* 8016E9F8 0016B7F8  80 82 BF E8 */	lwz r4, lbl__2124-_SDA2_BASE_(r2)
/* 8016E9FC 0016B7FC  80 02 BF EC */	lwz r0, lbl_803D096C-_SDA2_BASE_(r2)
/* 8016EA00 0016B800  EC 41 00 28 */	fsubs f2, f1, f0
/* 8016EA04 0016B804  90 81 00 08 */	stw r4, 8(r1)
/* 8016EA08 0016B808  C0 3E 00 08 */	lfs f1, 8(r30)
/* 8016EA0C 0016B80C  C0 05 00 08 */	lfs f0, 8(r5)
/* 8016EA10 0016B810  90 01 00 0C */	stw r0, 0xc(r1)
/* 8016EA14 0016B814  EC 01 00 28 */	fsubs f0, f1, f0
/* 8016EA18 0016B818  D0 41 00 08 */	stfs f2, 8(r1)
/* 8016EA1C 0016B81C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8016EA20 0016B820  4B EC 7E 39 */	bl length__5xVec2CFv
/* 8016EA24 0016B824  3C 60 80 27 */	lis r3, lbl__2125@ha
/* 8016EA28 0016B828  FF E0 08 90 */	fmr f31, f1
/* 8016EA2C 0016B82C  38 A3 13 E0 */	addi r5, r3, lbl__2125@l
/* 8016EA30 0016B830  C0 21 00 08 */	lfs f1, 8(r1)
/* 8016EA34 0016B834  80 85 00 00 */	lwz r4, 0(r5)
/* 8016EA38 0016B838  80 65 00 04 */	lwz r3, 4(r5)
/* 8016EA3C 0016B83C  80 05 00 08 */	lwz r0, 8(r5)
/* 8016EA40 0016B840  90 81 00 10 */	stw r4, 0x10(r1)
/* 8016EA44 0016B844  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8016EA48 0016B848  90 61 00 14 */	stw r3, 0x14(r1)
/* 8016EA4C 0016B84C  90 01 00 18 */	stw r0, 0x18(r1)
/* 8016EA50 0016B850  4B E9 76 21 */	bl xatan2__Fff
/* 8016EA54 0016B854  EC 5F 00 72 */	fmuls f2, f31, f1
/* 8016EA58 0016B858  C0 3E 00 04 */	lfs f1, 4(r30)
/* 8016EA5C 0016B85C  C0 1F 00 04 */	lfs f0, 4(r31)
/* 8016EA60 0016B860  D3 E1 00 18 */	stfs f31, 0x18(r1)
/* 8016EA64 0016B864  EC 01 00 28 */	fsubs f0, f1, f0
/* 8016EA68 0016B868  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 8016EA6C 0016B86C  80 01 00 18 */	lwz r0, 0x18(r1)
/* 8016EA70 0016B870  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8016EA74 0016B874  80 81 00 10 */	lwz r4, 0x10(r1)
/* 8016EA78 0016B878  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8016EA7C 0016B87C  90 9D 00 00 */	stw r4, 0(r29)
/* 8016EA80 0016B880  90 7D 00 04 */	stw r3, 4(r29)
/* 8016EA84 0016B884  90 1D 00 08 */	stw r0, 8(r29)
/* 8016EA88 0016B888  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8016EA8C 0016B88C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8016EA90 0016B890  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8016EA94 0016B894  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8016EA98 0016B898  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8016EA9C 0016B89C  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8016EAA0 0016B8A0  7C 08 03 A6 */	mtlr r0
/* 8016EAA4 0016B8A4  38 21 00 40 */	addi r1, r1, 0x40
/* 8016EAA8 0016B8A8  4E 80 00 20 */	blr 
/* 8016EAAC 0016B8AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016EAB0 0016B8B0  7C 08 02 A6 */	mflr r0
/* 8016EAB4 0016B8B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016EAB8 0016B8B8  7C 80 23 78 */	mr r0, r4
/* 8016EABC 0016B8BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016EAC0 0016B8C0  7C BF 2B 78 */	mr r31, r5
/* 8016EAC4 0016B8C4  7C 05 03 78 */	mr r5, r0
/* 8016EAC8 0016B8C8  93 C1 00 08 */	stw r30, 8(r1)
/* 8016EACC 0016B8CC  7C 7E 1B 78 */	mr r30, r3
/* 8016EAD0 0016B8D0  38 60 00 5C */	li r3, 0x5c
/* 8016EAD4 0016B8D4  7F C4 F3 78 */	mr r4, r30
/* 8016EAD8 0016B8D8  4B FA 06 79 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8016EADC 0016B8DC  7C 64 1B 79 */	or. r4, r3, r3
/* 8016EAE0 0016B8E0  41 82 00 14 */	beq lbl_8016EAF4
/* 8016EAE4 0016B8E4  7F C4 F3 78 */	mr r4, r30
/* 8016EAE8 0016B8E8  7F E5 FB 78 */	mr r5, r31
/* 8016EAEC 0016B8EC  48 00 13 F9 */	bl __ct__21zNPCGoalBPlanktonHuntFiR13zNPCBPlankton
/* 8016EAF0 0016B8F0  7C 64 1B 78 */	mr r4, r3
lbl_8016EAF4:
/* 8016EAF4 0016B8F4  28 04 00 00 */	cmplwi r4, 0
/* 8016EAF8 0016B8F8  41 82 00 08 */	beq lbl_8016EB00
/* 8016EAFC 0016B8FC  38 84 00 0C */	addi r4, r4, 0xc
lbl_8016EB00:
/* 8016EB00 0016B900  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016EB04 0016B904  7C 83 23 78 */	mr r3, r4
/* 8016EB08 0016B908  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016EB0C 0016B90C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016EB10 0016B910  7C 08 03 A6 */	mtlr r0
/* 8016EB14 0016B914  38 21 00 10 */	addi r1, r1, 0x10
/* 8016EB18 0016B918  4E 80 00 20 */	blr 
/* 8016EB1C 0016B91C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016EB20 0016B920  7C 08 02 A6 */	mflr r0
/* 8016EB24 0016B924  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016EB28 0016B928  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8016EB2C 0016B92C  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8016EB30 0016B930  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016EB34 0016B934  93 C1 00 08 */	stw r30, 8(r1)
/* 8016EB38 0016B938  7C 7E 1B 78 */	mr r30, r3
/* 8016EB3C 0016B93C  FF E0 08 90 */	fmr f31, f1
/* 8016EB40 0016B940  80 63 00 58 */	lwz r3, 0x58(r3)
/* 8016EB44 0016B944  7C 9F 23 78 */	mr r31, r4
/* 8016EB48 0016B948  4B FF E3 C5 */	bl reappear__13zNPCBPlanktonFv
/* 8016EB4C 0016B94C  4B FF 9F 49 */	bl zNPCTypeBossPlankton.get_player_loc__34_unnamed_zNPCTypeBossPlankton_cpp_Fv
/* 8016EB50 0016B950  80 7E 00 58 */	lwz r3, 0x58(r30)
/* 8016EB54 0016B954  38 00 00 01 */	li r0, 1
/* 8016EB58 0016B958  98 03 02 B6 */	stb r0, 0x2b6(r3)
/* 8016EB5C 0016B95C  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016EB60 0016B960  80 7E 00 58 */	lwz r3, 0x58(r30)
/* 8016EB64 0016B964  D0 03 02 C8 */	stfs f0, 0x2c8(r3)
/* 8016EB68 0016B968  80 7E 00 58 */	lwz r3, 0x58(r30)
/* 8016EB6C 0016B96C  4B FF ED 5D */	bl reset_speed__13zNPCBPlanktonFv
/* 8016EB70 0016B970  80 7E 00 58 */	lwz r3, 0x58(r30)
/* 8016EB74 0016B974  4B FF CE 0D */	bl refresh_orbit__13zNPCBPlanktonFv
/* 8016EB78 0016B978  80 7E 00 58 */	lwz r3, 0x58(r30)
/* 8016EB7C 0016B97C  4B FF ED 2D */	bl follow_camera__13zNPCBPlanktonFv
/* 8016EB80 0016B980  FC 20 F8 90 */	fmr f1, f31
/* 8016EB84 0016B984  7F C3 F3 78 */	mr r3, r30
/* 8016EB88 0016B988  7F E4 FB 78 */	mr r4, r31
/* 8016EB8C 0016B98C  4B F6 65 89 */	bl Enter__14zNPCGoalCommonFfPv
/* 8016EB90 0016B990  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8016EB94 0016B994  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016EB98 0016B998  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8016EB9C 0016B99C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016EBA0 0016B9A0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016EBA4 0016B9A4  7C 08 03 A6 */	mtlr r0
/* 8016EBA8 0016B9A8  38 21 00 20 */	addi r1, r1, 0x20
/* 8016EBAC 0016B9AC  4E 80 00 20 */	blr 
/* 8016EBB0 0016B9B0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016EBB4 0016B9B4  7C 08 02 A6 */	mflr r0
/* 8016EBB8 0016B9B8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016EBBC 0016B9BC  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8016EBC0 0016B9C0  FF E0 08 90 */	fmr f31, f1
/* 8016EBC4 0016B9C4  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8016EBC8 0016B9C8  7C 9F 23 78 */	mr r31, r4
/* 8016EBCC 0016B9CC  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8016EBD0 0016B9D0  7C 7E 1B 78 */	mr r30, r3
/* 8016EBD4 0016B9D4  80 63 00 58 */	lwz r3, 0x58(r3)
/* 8016EBD8 0016B9D8  4B FF CD A9 */	bl refresh_orbit__13zNPCBPlanktonFv
/* 8016EBDC 0016B9DC  FC 20 F8 90 */	fmr f1, f31
/* 8016EBE0 0016B9E0  7F C3 F3 78 */	mr r3, r30
/* 8016EBE4 0016B9E4  7F E4 FB 78 */	mr r4, r31
/* 8016EBE8 0016B9E8  4B F6 68 35 */	bl Exit__5xGoalFfPv
/* 8016EBEC 0016B9EC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016EBF0 0016B9F0  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8016EBF4 0016B9F4  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8016EBF8 0016B9F8  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 8016EBFC 0016B9FC  7C 08 03 A6 */	mtlr r0
/* 8016EC00 0016BA00  38 21 00 20 */	addi r1, r1, 0x20
/* 8016EC04 0016BA04  4E 80 00 20 */	blr 
/* 8016EC08 0016BA08  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8016EC0C 0016BA0C  7C 08 02 A6 */	mflr r0
/* 8016EC10 0016BA10  90 01 00 44 */	stw r0, 0x44(r1)
/* 8016EC14 0016BA14  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8016EC18 0016BA18  7C 9F 23 78 */	mr r31, r4
/* 8016EC1C 0016BA1C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8016EC20 0016BA20  7C 7E 1B 78 */	mr r30, r3
/* 8016EC24 0016BA24  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8016EC28 0016BA28  80 63 00 58 */	lwz r3, 0x58(r3)
/* 8016EC2C 0016BA2C  88 03 02 B7 */	lbz r0, 0x2b7(r3)
/* 8016EC30 0016BA30  28 00 00 00 */	cmplwi r0, 0
/* 8016EC34 0016BA34  40 82 00 18 */	bne lbl_8016EC4C
/* 8016EC38 0016BA38  38 00 00 01 */	li r0, 1
/* 8016EC3C 0016BA3C  90 1F 00 00 */	stw r0, 0(r31)
/* 8016EC40 0016BA40  80 7E 00 58 */	lwz r3, 0x58(r30)
/* 8016EC44 0016BA44  4B FF CC D1 */	bl next_goal__13zNPCBPlanktonFv
/* 8016EC48 0016BA48  48 00 00 F4 */	b lbl_8016ED3C
lbl_8016EC4C:
/* 8016EC4C 0016BA4C  4B FF CD 35 */	bl refresh_orbit__13zNPCBPlanktonFv
/* 8016EC50 0016BA50  80 7E 00 58 */	lwz r3, 0x58(r30)
/* 8016EC54 0016BA54  48 00 0F 65 */	bl location__13zNPCBPlanktonCFv
/* 8016EC58 0016BA58  7C 7D 1B 78 */	mr r29, r3
/* 8016EC5C 0016BA5C  4B FF 9E 39 */	bl zNPCTypeBossPlankton.get_player_loc__34_unnamed_zNPCTypeBossPlankton_cpp_Fv
/* 8016EC60 0016BA60  7C 64 1B 78 */	mr r4, r3
/* 8016EC64 0016BA64  7F A5 EB 78 */	mr r5, r29
/* 8016EC68 0016BA68  38 61 00 14 */	addi r3, r1, 0x14
/* 8016EC6C 0016BA6C  4B E9 C5 61 */	bl __mi__5xVec3CFRC5xVec3
/* 8016EC70 0016BA70  38 61 00 14 */	addi r3, r1, 0x14
/* 8016EC74 0016BA74  4B E9 C4 89 */	bl length2__5xVec3CFv
/* 8016EC78 0016BA78  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016EC7C 0016BA7C  38 63 A1 A0 */	addi r3, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016EC80 0016BA80  C0 03 00 9C */	lfs f0, 0x9c(r3)
/* 8016EC84 0016BA84  EC 00 00 32 */	fmuls f0, f0, f0
/* 8016EC88 0016BA88  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016EC8C 0016BA8C  4C 41 13 82 */	cror 2, 1, 2
/* 8016EC90 0016BA90  40 82 00 0C */	bne lbl_8016EC9C
/* 8016EC94 0016BA94  38 60 00 00 */	li r3, 0
/* 8016EC98 0016BA98  48 00 00 A4 */	b lbl_8016ED3C
lbl_8016EC9C:
/* 8016EC9C 0016BA9C  4B FF 9D F9 */	bl zNPCTypeBossPlankton.get_player_loc__34_unnamed_zNPCTypeBossPlankton_cpp_Fv
/* 8016ECA0 0016BAA0  7C 64 1B 78 */	mr r4, r3
/* 8016ECA4 0016BAA4  38 61 00 08 */	addi r3, r1, 8
/* 8016ECA8 0016BAA8  38 BE 00 4C */	addi r5, r30, 0x4c
/* 8016ECAC 0016BAAC  4B E9 C5 21 */	bl __mi__5xVec3CFRC5xVec3
/* 8016ECB0 0016BAB0  80 81 00 08 */	lwz r4, 8(r1)
/* 8016ECB4 0016BAB4  80 61 00 0C */	lwz r3, 0xc(r1)
/* 8016ECB8 0016BAB8  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8016ECBC 0016BABC  90 81 00 20 */	stw r4, 0x20(r1)
/* 8016ECC0 0016BAC0  90 61 00 24 */	stw r3, 0x24(r1)
/* 8016ECC4 0016BAC4  90 01 00 28 */	stw r0, 0x28(r1)
/* 8016ECC8 0016BAC8  4B FF 9D CD */	bl zNPCTypeBossPlankton.get_player_loc__34_unnamed_zNPCTypeBossPlankton_cpp_Fv
/* 8016ECCC 0016BACC  7C 64 1B 78 */	mr r4, r3
/* 8016ECD0 0016BAD0  38 7E 00 4C */	addi r3, r30, 0x4c
/* 8016ECD4 0016BAD4  4B E9 C5 91 */	bl __as__5xVec3FRC5xVec3
/* 8016ECD8 0016BAD8  80 9E 00 58 */	lwz r4, 0x58(r30)
/* 8016ECDC 0016BADC  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016ECE0 0016BAE0  38 63 A1 A0 */	addi r3, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016ECE4 0016BAE4  C0 24 02 C8 */	lfs f1, 0x2c8(r4)
/* 8016ECE8 0016BAE8  C0 03 00 94 */	lfs f0, 0x94(r3)
/* 8016ECEC 0016BAEC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016ECF0 0016BAF0  4C 41 13 82 */	cror 2, 1, 2
/* 8016ECF4 0016BAF4  41 82 00 1C */	beq lbl_8016ED10
/* 8016ECF8 0016BAF8  38 61 00 20 */	addi r3, r1, 0x20
/* 8016ECFC 0016BAFC  4B E9 C4 01 */	bl length2__5xVec3CFv
/* 8016ED00 0016BB00  C0 02 AB D8 */	lfs f0, lbl__2987-_SDA2_BASE_(r2)
/* 8016ED04 0016BB04  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016ED08 0016BB08  4C 40 13 82 */	cror 2, 0, 2
/* 8016ED0C 0016BB0C  40 82 00 2C */	bne lbl_8016ED38
lbl_8016ED10:
/* 8016ED10 0016BB10  3C 80 80 33 */	lis r4, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016ED14 0016BB14  3C 60 4E 47 */	lis r3, 0x4E474256@ha
/* 8016ED18 0016BB18  38 A4 A1 A0 */	addi r5, r4, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016ED1C 0016BB1C  80 9E 00 58 */	lwz r4, 0x58(r30)
/* 8016ED20 0016BB20  C0 05 00 98 */	lfs f0, 0x98(r5)
/* 8016ED24 0016BB24  38 00 00 01 */	li r0, 1
/* 8016ED28 0016BB28  38 63 42 56 */	addi r3, r3, 0x4E474256@l
/* 8016ED2C 0016BB2C  D0 04 02 E0 */	stfs f0, 0x2e0(r4)
/* 8016ED30 0016BB30  90 1F 00 00 */	stw r0, 0(r31)
/* 8016ED34 0016BB34  48 00 00 08 */	b lbl_8016ED3C
lbl_8016ED38:
/* 8016ED38 0016BB38  38 60 00 00 */	li r3, 0
lbl_8016ED3C:
/* 8016ED3C 0016BB3C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8016ED40 0016BB40  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8016ED44 0016BB44  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8016ED48 0016BB48  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8016ED4C 0016BB4C  7C 08 03 A6 */	mtlr r0
/* 8016ED50 0016BB50  38 21 00 40 */	addi r1, r1, 0x40
/* 8016ED54 0016BB54  4E 80 00 20 */	blr 
/* 8016ED58 0016BB58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016ED5C 0016BB5C  7C 08 02 A6 */	mflr r0
/* 8016ED60 0016BB60  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016ED64 0016BB64  7C 80 23 78 */	mr r0, r4
/* 8016ED68 0016BB68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016ED6C 0016BB6C  7C BF 2B 78 */	mr r31, r5
/* 8016ED70 0016BB70  7C 05 03 78 */	mr r5, r0
/* 8016ED74 0016BB74  93 C1 00 08 */	stw r30, 8(r1)
/* 8016ED78 0016BB78  7C 7E 1B 78 */	mr r30, r3
/* 8016ED7C 0016BB7C  38 60 00 50 */	li r3, 0x50
/* 8016ED80 0016BB80  7F C4 F3 78 */	mr r4, r30
/* 8016ED84 0016BB84  4B FA 03 CD */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8016ED88 0016BB88  7C 64 1B 79 */	or. r4, r3, r3
/* 8016ED8C 0016BB8C  41 82 00 14 */	beq lbl_8016EDA0
/* 8016ED90 0016BB90  7F C4 F3 78 */	mr r4, r30
/* 8016ED94 0016BB94  7F E5 FB 78 */	mr r5, r31
/* 8016ED98 0016BB98  48 00 11 99 */	bl __ct__22zNPCGoalBPlanktonTauntFiR13zNPCBPlankton
/* 8016ED9C 0016BB9C  7C 64 1B 78 */	mr r4, r3
lbl_8016EDA0:
/* 8016EDA0 0016BBA0  28 04 00 00 */	cmplwi r4, 0
/* 8016EDA4 0016BBA4  41 82 00 08 */	beq lbl_8016EDAC
/* 8016EDA8 0016BBA8  38 84 00 0C */	addi r4, r4, 0xc
lbl_8016EDAC:
/* 8016EDAC 0016BBAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016EDB0 0016BBB0  7C 83 23 78 */	mr r3, r4
/* 8016EDB4 0016BBB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016EDB8 0016BBB8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016EDBC 0016BBBC  7C 08 03 A6 */	mtlr r0
/* 8016EDC0 0016BBC0  38 21 00 10 */	addi r1, r1, 0x10
/* 8016EDC4 0016BBC4  4E 80 00 20 */	blr 
/* 8016EDC8 0016BBC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016EDCC 0016BBCC  7C 08 02 A6 */	mflr r0
/* 8016EDD0 0016BBD0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016EDD4 0016BBD4  4B F6 63 41 */	bl Enter__14zNPCGoalCommonFfPv
/* 8016EDD8 0016BBD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016EDDC 0016BBDC  7C 08 03 A6 */	mtlr r0
/* 8016EDE0 0016BBE0  38 21 00 10 */	addi r1, r1, 0x10
/* 8016EDE4 0016BBE4  4E 80 00 20 */	blr 
/* 8016EDE8 0016BBE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016EDEC 0016BBEC  7C 08 02 A6 */	mflr r0
/* 8016EDF0 0016BBF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016EDF4 0016BBF4  4B F6 66 29 */	bl Exit__5xGoalFfPv
/* 8016EDF8 0016BBF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016EDFC 0016BBFC  7C 08 03 A6 */	mtlr r0
/* 8016EE00 0016BC00  38 21 00 10 */	addi r1, r1, 0x10
/* 8016EE04 0016BC04  4E 80 00 20 */	blr 
/* 8016EE08 0016BC08  38 60 00 00 */	li r3, 0
/* 8016EE0C 0016BC0C  4E 80 00 20 */	blr 
/* 8016EE10 0016BC10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016EE14 0016BC14  7C 08 02 A6 */	mflr r0
/* 8016EE18 0016BC18  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016EE1C 0016BC1C  7C 80 23 78 */	mr r0, r4
/* 8016EE20 0016BC20  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016EE24 0016BC24  7C BF 2B 78 */	mr r31, r5
/* 8016EE28 0016BC28  7C 05 03 78 */	mr r5, r0
/* 8016EE2C 0016BC2C  93 C1 00 08 */	stw r30, 8(r1)
/* 8016EE30 0016BC30  7C 7E 1B 78 */	mr r30, r3
/* 8016EE34 0016BC34  38 60 00 50 */	li r3, 0x50
/* 8016EE38 0016BC38  7F C4 F3 78 */	mr r4, r30
/* 8016EE3C 0016BC3C  4B FA 03 15 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8016EE40 0016BC40  7C 64 1B 79 */	or. r4, r3, r3
/* 8016EE44 0016BC44  41 82 00 14 */	beq lbl_8016EE58
/* 8016EE48 0016BC48  7F C4 F3 78 */	mr r4, r30
/* 8016EE4C 0016BC4C  7F E5 FB 78 */	mr r5, r31
/* 8016EE50 0016BC50  48 00 11 2D */	bl __ct__21zNPCGoalBPlanktonMoveFiR13zNPCBPlankton
/* 8016EE54 0016BC54  7C 64 1B 78 */	mr r4, r3
lbl_8016EE58:
/* 8016EE58 0016BC58  28 04 00 00 */	cmplwi r4, 0
/* 8016EE5C 0016BC5C  41 82 00 08 */	beq lbl_8016EE64
/* 8016EE60 0016BC60  38 84 00 0C */	addi r4, r4, 0xc
lbl_8016EE64:
/* 8016EE64 0016BC64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016EE68 0016BC68  7C 83 23 78 */	mr r3, r4
/* 8016EE6C 0016BC6C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016EE70 0016BC70  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016EE74 0016BC74  7C 08 03 A6 */	mtlr r0
/* 8016EE78 0016BC78  38 21 00 10 */	addi r1, r1, 0x10
/* 8016EE7C 0016BC7C  4E 80 00 20 */	blr 
/* 8016EE80 0016BC80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016EE84 0016BC84  7C 08 02 A6 */	mflr r0
/* 8016EE88 0016BC88  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016EE8C 0016BC8C  4B F6 62 89 */	bl Enter__14zNPCGoalCommonFfPv
/* 8016EE90 0016BC90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016EE94 0016BC94  7C 08 03 A6 */	mtlr r0
/* 8016EE98 0016BC98  38 21 00 10 */	addi r1, r1, 0x10
/* 8016EE9C 0016BC9C  4E 80 00 20 */	blr 
/* 8016EEA0 0016BCA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016EEA4 0016BCA4  7C 08 02 A6 */	mflr r0
/* 8016EEA8 0016BCA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016EEAC 0016BCAC  4B F6 65 71 */	bl Exit__5xGoalFfPv
/* 8016EEB0 0016BCB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016EEB4 0016BCB4  7C 08 03 A6 */	mtlr r0
/* 8016EEB8 0016BCB8  38 21 00 10 */	addi r1, r1, 0x10
/* 8016EEBC 0016BCBC  4E 80 00 20 */	blr 
/* 8016EEC0 0016BCC0  38 60 00 00 */	li r3, 0
/* 8016EEC4 0016BCC4  4E 80 00 20 */	blr 
/* 8016EEC8 0016BCC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016EECC 0016BCCC  7C 08 02 A6 */	mflr r0
/* 8016EED0 0016BCD0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016EED4 0016BCD4  7C 80 23 78 */	mr r0, r4
/* 8016EED8 0016BCD8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016EEDC 0016BCDC  7C BF 2B 78 */	mr r31, r5
/* 8016EEE0 0016BCE0  7C 05 03 78 */	mr r5, r0
/* 8016EEE4 0016BCE4  93 C1 00 08 */	stw r30, 8(r1)
/* 8016EEE8 0016BCE8  7C 7E 1B 78 */	mr r30, r3
/* 8016EEEC 0016BCEC  38 60 00 50 */	li r3, 0x50
/* 8016EEF0 0016BCF0  7F C4 F3 78 */	mr r4, r30
/* 8016EEF4 0016BCF4  4B FA 02 5D */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8016EEF8 0016BCF8  7C 64 1B 79 */	or. r4, r3, r3
/* 8016EEFC 0016BCFC  41 82 00 14 */	beq lbl_8016EF10
/* 8016EF00 0016BD00  7F C4 F3 78 */	mr r4, r30
/* 8016EF04 0016BD04  7F E5 FB 78 */	mr r5, r31
/* 8016EF08 0016BD08  48 00 10 C1 */	bl __ct__21zNPCGoalBPlanktonStunFiR13zNPCBPlankton
/* 8016EF0C 0016BD0C  7C 64 1B 78 */	mr r4, r3
lbl_8016EF10:
/* 8016EF10 0016BD10  28 04 00 00 */	cmplwi r4, 0
/* 8016EF14 0016BD14  41 82 00 08 */	beq lbl_8016EF1C
/* 8016EF18 0016BD18  38 84 00 0C */	addi r4, r4, 0xc
lbl_8016EF1C:
/* 8016EF1C 0016BD1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016EF20 0016BD20  7C 83 23 78 */	mr r3, r4
/* 8016EF24 0016BD24  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016EF28 0016BD28  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016EF2C 0016BD2C  7C 08 03 A6 */	mtlr r0
/* 8016EF30 0016BD30  38 21 00 10 */	addi r1, r1, 0x10
/* 8016EF34 0016BD34  4E 80 00 20 */	blr 
/* 8016EF38 0016BD38  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016EF3C 0016BD3C  7C 08 02 A6 */	mflr r0
/* 8016EF40 0016BD40  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016EF44 0016BD44  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8016EF48 0016BD48  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8016EF4C 0016BD4C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016EF50 0016BD50  93 C1 00 08 */	stw r30, 8(r1)
/* 8016EF54 0016BD54  7C 7E 1B 78 */	mr r30, r3
/* 8016EF58 0016BD58  FF E0 08 90 */	fmr f31, f1
/* 8016EF5C 0016BD5C  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8016EF60 0016BD60  7C 9F 23 78 */	mr r31, r4
/* 8016EF64 0016BD64  4B FF DF A9 */	bl reappear__13zNPCBPlanktonFv
/* 8016EF68 0016BD68  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016EF6C 0016BD6C  FC 20 F8 90 */	fmr f1, f31
/* 8016EF70 0016BD70  80 BE 00 4C */	lwz r5, 0x4c(r30)
/* 8016EF74 0016BD74  38 00 00 00 */	li r0, 0
/* 8016EF78 0016BD78  7F C3 F3 78 */	mr r3, r30
/* 8016EF7C 0016BD7C  7F E4 FB 78 */	mr r4, r31
/* 8016EF80 0016BD80  D0 05 02 C8 */	stfs f0, 0x2c8(r5)
/* 8016EF84 0016BD84  80 BE 00 4C */	lwz r5, 0x4c(r30)
/* 8016EF88 0016BD88  90 05 02 C0 */	stw r0, 0x2c0(r5)
/* 8016EF8C 0016BD8C  4B F6 61 89 */	bl Enter__14zNPCGoalCommonFfPv
/* 8016EF90 0016BD90  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8016EF94 0016BD94  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016EF98 0016BD98  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8016EF9C 0016BD9C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016EFA0 0016BDA0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016EFA4 0016BDA4  7C 08 03 A6 */	mtlr r0
/* 8016EFA8 0016BDA8  38 21 00 20 */	addi r1, r1, 0x20
/* 8016EFAC 0016BDAC  4E 80 00 20 */	blr 
/* 8016EFB0 0016BDB0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016EFB4 0016BDB4  7C 08 02 A6 */	mflr r0
/* 8016EFB8 0016BDB8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016EFBC 0016BDBC  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8016EFC0 0016BDC0  FF E0 08 90 */	fmr f31, f1
/* 8016EFC4 0016BDC4  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8016EFC8 0016BDC8  7C 9F 23 78 */	mr r31, r4
/* 8016EFCC 0016BDCC  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8016EFD0 0016BDD0  7C 7E 1B 78 */	mr r30, r3
/* 8016EFD4 0016BDD4  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8016EFD8 0016BDD8  48 00 10 3D */	bl give_control__13zNPCBPlanktonFv
/* 8016EFDC 0016BDDC  80 9E 00 4C */	lwz r4, 0x4c(r30)
/* 8016EFE0 0016BDE0  38 00 00 01 */	li r0, 1
/* 8016EFE4 0016BDE4  FC 20 F8 90 */	fmr f1, f31
/* 8016EFE8 0016BDE8  7F C3 F3 78 */	mr r3, r30
/* 8016EFEC 0016BDEC  90 04 02 C0 */	stw r0, 0x2c0(r4)
/* 8016EFF0 0016BDF0  7F E4 FB 78 */	mr r4, r31
/* 8016EFF4 0016BDF4  4B F6 64 29 */	bl Exit__5xGoalFfPv
/* 8016EFF8 0016BDF8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016EFFC 0016BDFC  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8016F000 0016BE00  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8016F004 0016BE04  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 8016F008 0016BE08  7C 08 03 A6 */	mtlr r0
/* 8016F00C 0016BE0C  38 21 00 20 */	addi r1, r1, 0x20
/* 8016F010 0016BE10  4E 80 00 20 */	blr 
/* 8016F014 0016BE14  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016F018 0016BE18  7C 08 02 A6 */	mflr r0
/* 8016F01C 0016BE1C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016F020 0016BE20  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8016F024 0016BE24  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8016F028 0016BE28  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016F02C 0016BE2C  93 C1 00 08 */	stw r30, 8(r1)
/* 8016F030 0016BE30  7C 7E 1B 78 */	mr r30, r3
/* 8016F034 0016BE34  FF E0 08 90 */	fmr f31, f1
/* 8016F038 0016BE38  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8016F03C 0016BE3C  7C 9F 23 78 */	mr r31, r4
/* 8016F040 0016BE40  4B F8 3F 5D */	bl AnimCurState__10zNPCCommonFv
/* 8016F044 0016BE44  3C 80 80 2A */	lis r4, lbl_g_hash_bossanim@ha
/* 8016F048 0016BE48  80 A3 00 08 */	lwz r5, 8(r3)
/* 8016F04C 0016BE4C  38 84 92 68 */	addi r4, r4, lbl_g_hash_bossanim@l
/* 8016F050 0016BE50  80 04 01 10 */	lwz r0, 0x110(r4)
/* 8016F054 0016BE54  7C 05 00 40 */	cmplw r5, r0
/* 8016F058 0016BE58  40 82 00 2C */	bne lbl_8016F084
/* 8016F05C 0016BE5C  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016F060 0016BE60  C0 23 02 C8 */	lfs f1, 0x2c8(r3)
/* 8016F064 0016BE64  C0 03 02 E4 */	lfs f0, 0x2e4(r3)
/* 8016F068 0016BE68  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016F06C 0016BE6C  4C 41 13 82 */	cror 2, 1, 2
/* 8016F070 0016BE70  40 82 00 68 */	bne lbl_8016F0D8
/* 8016F074 0016BE74  80 84 01 14 */	lwz r4, 0x114(r4)
/* 8016F078 0016BE78  38 A0 00 00 */	li r5, 0
/* 8016F07C 0016BE7C  4B F8 3D 15 */	bl AnimStart__10zNPCCommonFUii
/* 8016F080 0016BE80  48 00 00 58 */	b lbl_8016F0D8
lbl_8016F084:
/* 8016F084 0016BE84  80 64 01 14 */	lwz r3, 0x114(r4)
/* 8016F088 0016BE88  80 04 01 0C */	lwz r0, 0x10c(r4)
/* 8016F08C 0016BE8C  7C 65 18 50 */	subf r3, r5, r3
/* 8016F090 0016BE90  7C 63 00 34 */	cntlzw r3, r3
/* 8016F094 0016BE94  7C 05 00 40 */	cmplw r5, r0
/* 8016F098 0016BE98  54 63 D9 7E */	srwi r3, r3, 5
/* 8016F09C 0016BE9C  41 82 00 0C */	beq lbl_8016F0A8
/* 8016F0A0 0016BEA0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016F0A4 0016BEA4  41 82 00 20 */	beq lbl_8016F0C4
lbl_8016F0A8:
/* 8016F0A8 0016BEA8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016F0AC 0016BEAC  41 82 00 2C */	beq lbl_8016F0D8
/* 8016F0B0 0016BEB0  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016F0B4 0016BEB4  38 80 00 00 */	li r4, 0
/* 8016F0B8 0016BEB8  4B F8 3F C1 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 8016F0BC 0016BEBC  FC 1F 08 40 */	fcmpo cr0, f31, f1
/* 8016F0C0 0016BEC0  40 81 00 18 */	ble lbl_8016F0D8
lbl_8016F0C4:
/* 8016F0C4 0016BEC4  38 00 00 01 */	li r0, 1
/* 8016F0C8 0016BEC8  90 1F 00 00 */	stw r0, 0(r31)
/* 8016F0CC 0016BECC  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016F0D0 0016BED0  4B FF C8 45 */	bl next_goal__13zNPCBPlanktonFv
/* 8016F0D4 0016BED4  48 00 00 08 */	b lbl_8016F0DC
lbl_8016F0D8:
/* 8016F0D8 0016BED8  38 60 00 00 */	li r3, 0
lbl_8016F0DC:
/* 8016F0DC 0016BEDC  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8016F0E0 0016BEE0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016F0E4 0016BEE4  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8016F0E8 0016BEE8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016F0EC 0016BEEC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016F0F0 0016BEF0  7C 08 03 A6 */	mtlr r0
/* 8016F0F4 0016BEF4  38 21 00 20 */	addi r1, r1, 0x20
/* 8016F0F8 0016BEF8  4E 80 00 20 */	blr 
/* 8016F0FC 0016BEFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016F100 0016BF00  7C 08 02 A6 */	mflr r0
/* 8016F104 0016BF04  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016F108 0016BF08  7C 80 23 78 */	mr r0, r4
/* 8016F10C 0016BF0C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016F110 0016BF10  7C BF 2B 78 */	mr r31, r5
/* 8016F114 0016BF14  7C 05 03 78 */	mr r5, r0
/* 8016F118 0016BF18  93 C1 00 08 */	stw r30, 8(r1)
/* 8016F11C 0016BF1C  7C 7E 1B 78 */	mr r30, r3
/* 8016F120 0016BF20  38 60 00 50 */	li r3, 0x50
/* 8016F124 0016BF24  7F C4 F3 78 */	mr r4, r30
/* 8016F128 0016BF28  4B FA 00 29 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8016F12C 0016BF2C  7C 64 1B 79 */	or. r4, r3, r3
/* 8016F130 0016BF30  41 82 00 14 */	beq lbl_8016F144
/* 8016F134 0016BF34  7F C4 F3 78 */	mr r4, r30
/* 8016F138 0016BF38  7F E5 FB 78 */	mr r5, r31
/* 8016F13C 0016BF3C  48 00 0F 11 */	bl __ct__21zNPCGoalBPlanktonFallFiR13zNPCBPlankton
/* 8016F140 0016BF40  7C 64 1B 78 */	mr r4, r3
lbl_8016F144:
/* 8016F144 0016BF44  28 04 00 00 */	cmplwi r4, 0
/* 8016F148 0016BF48  41 82 00 08 */	beq lbl_8016F150
/* 8016F14C 0016BF4C  38 84 00 0C */	addi r4, r4, 0xc
lbl_8016F150:
/* 8016F150 0016BF50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016F154 0016BF54  7C 83 23 78 */	mr r3, r4
/* 8016F158 0016BF58  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016F15C 0016BF5C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016F160 0016BF60  7C 08 03 A6 */	mtlr r0
/* 8016F164 0016BF64  38 21 00 10 */	addi r1, r1, 0x10
/* 8016F168 0016BF68  4E 80 00 20 */	blr 
/* 8016F16C 0016BF6C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016F170 0016BF70  7C 08 02 A6 */	mflr r0
/* 8016F174 0016BF74  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016F178 0016BF78  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8016F17C 0016BF7C  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8016F180 0016BF80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016F184 0016BF84  93 C1 00 08 */	stw r30, 8(r1)
/* 8016F188 0016BF88  7C 7E 1B 78 */	mr r30, r3
/* 8016F18C 0016BF8C  FF E0 08 90 */	fmr f31, f1
/* 8016F190 0016BF90  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8016F194 0016BF94  7C 9F 23 78 */	mr r31, r4
/* 8016F198 0016BF98  4B FF DD 75 */	bl reappear__13zNPCBPlanktonFv
/* 8016F19C 0016BF9C  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016F1A0 0016BFA0  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016F1A4 0016BFA4  80 BE 00 4C */	lwz r5, 0x4c(r30)
/* 8016F1A8 0016BFA8  38 00 00 00 */	li r0, 0
/* 8016F1AC 0016BFAC  38 83 A1 A0 */	addi r4, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016F1B0 0016BFB0  D0 05 02 C8 */	stfs f0, 0x2c8(r5)
/* 8016F1B4 0016BFB4  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016F1B8 0016BFB8  90 03 02 C0 */	stw r0, 0x2c0(r3)
/* 8016F1BC 0016BFBC  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016F1C0 0016BFC0  C0 24 01 18 */	lfs f1, 0x118(r4)
/* 8016F1C4 0016BFC4  C0 44 01 1C */	lfs f2, 0x11c(r4)
/* 8016F1C8 0016BFC8  4B FF E8 6D */	bl fall__13zNPCBPlanktonFff
/* 8016F1CC 0016BFCC  FC 20 F8 90 */	fmr f1, f31
/* 8016F1D0 0016BFD0  7F C3 F3 78 */	mr r3, r30
/* 8016F1D4 0016BFD4  7F E4 FB 78 */	mr r4, r31
/* 8016F1D8 0016BFD8  4B F6 5F 3D */	bl Enter__14zNPCGoalCommonFfPv
/* 8016F1DC 0016BFDC  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8016F1E0 0016BFE0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016F1E4 0016BFE4  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8016F1E8 0016BFE8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016F1EC 0016BFEC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016F1F0 0016BFF0  7C 08 03 A6 */	mtlr r0
/* 8016F1F4 0016BFF4  38 21 00 20 */	addi r1, r1, 0x20
/* 8016F1F8 0016BFF8  4E 80 00 20 */	blr 
/* 8016F1FC 0016BFFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016F200 0016C000  7C 08 02 A6 */	mflr r0
/* 8016F204 0016C004  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016F208 0016C008  38 00 00 01 */	li r0, 1
/* 8016F20C 0016C00C  80 A3 00 4C */	lwz r5, 0x4c(r3)
/* 8016F210 0016C010  90 05 02 C0 */	stw r0, 0x2c0(r5)
/* 8016F214 0016C014  4B F6 62 09 */	bl Exit__5xGoalFfPv
/* 8016F218 0016C018  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016F21C 0016C01C  7C 08 03 A6 */	mtlr r0
/* 8016F220 0016C020  38 21 00 10 */	addi r1, r1, 0x10
/* 8016F224 0016C024  4E 80 00 20 */	blr 
/* 8016F228 0016C028  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016F22C 0016C02C  7C 08 02 A6 */	mflr r0
/* 8016F230 0016C030  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016F234 0016C034  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016F238 0016C038  7C 9F 23 78 */	mr r31, r4
/* 8016F23C 0016C03C  93 C1 00 08 */	stw r30, 8(r1)
/* 8016F240 0016C040  7C 7E 1B 78 */	mr r30, r3
/* 8016F244 0016C044  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8016F248 0016C048  48 00 09 71 */	bl location__13zNPCBPlanktonCFv
/* 8016F24C 0016C04C  80 BE 00 4C */	lwz r5, 0x4c(r30)
/* 8016F250 0016C050  3C 80 80 33 */	lis r4, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016F254 0016C054  38 84 A1 A0 */	addi r4, r4, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016F258 0016C058  C0 43 00 04 */	lfs f2, 4(r3)
/* 8016F25C 0016C05C  C0 25 04 54 */	lfs f1, 0x454(r5)
/* 8016F260 0016C060  C0 04 01 20 */	lfs f0, 0x120(r4)
/* 8016F264 0016C064  EC 21 10 28 */	fsubs f1, f1, f2
/* 8016F268 0016C068  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016F26C 0016C06C  4C 41 13 82 */	cror 2, 1, 2
/* 8016F270 0016C070  40 82 00 34 */	bne lbl_8016F2A4
/* 8016F274 0016C074  7C A3 2B 78 */	mr r3, r5
/* 8016F278 0016C078  4B FF E3 69 */	bl next_territory__13zNPCBPlanktonFv
/* 8016F27C 0016C07C  3C 80 80 33 */	lis r4, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016F280 0016C080  3C 60 4E 47 */	lis r3, 0x4E47424D@ha
/* 8016F284 0016C084  38 A4 A1 A0 */	addi r5, r4, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016F288 0016C088  80 9E 00 4C */	lwz r4, 0x4c(r30)
/* 8016F28C 0016C08C  C0 05 01 08 */	lfs f0, 0x108(r5)
/* 8016F290 0016C090  38 00 00 01 */	li r0, 1
/* 8016F294 0016C094  38 63 42 4D */	addi r3, r3, 0x4E47424D@l
/* 8016F298 0016C098  D0 04 02 DC */	stfs f0, 0x2dc(r4)
/* 8016F29C 0016C09C  90 1F 00 00 */	stw r0, 0(r31)
/* 8016F2A0 0016C0A0  48 00 00 08 */	b lbl_8016F2A8
lbl_8016F2A4:
/* 8016F2A4 0016C0A4  38 60 00 00 */	li r3, 0
lbl_8016F2A8:
/* 8016F2A8 0016C0A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016F2AC 0016C0AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016F2B0 0016C0B0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016F2B4 0016C0B4  7C 08 03 A6 */	mtlr r0
/* 8016F2B8 0016C0B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8016F2BC 0016C0BC  4E 80 00 20 */	blr 
/* 8016F2C0 0016C0C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016F2C4 0016C0C4  7C 08 02 A6 */	mflr r0
/* 8016F2C8 0016C0C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016F2CC 0016C0CC  7C 80 23 78 */	mr r0, r4
/* 8016F2D0 0016C0D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016F2D4 0016C0D4  7C BF 2B 78 */	mr r31, r5
/* 8016F2D8 0016C0D8  7C 05 03 78 */	mr r5, r0
/* 8016F2DC 0016C0DC  93 C1 00 08 */	stw r30, 8(r1)
/* 8016F2E0 0016C0E0  7C 7E 1B 78 */	mr r30, r3
/* 8016F2E4 0016C0E4  38 60 00 50 */	li r3, 0x50
/* 8016F2E8 0016C0E8  7F C4 F3 78 */	mr r4, r30
/* 8016F2EC 0016C0EC  4B F9 FE 65 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8016F2F0 0016C0F0  7C 64 1B 79 */	or. r4, r3, r3
/* 8016F2F4 0016C0F4  41 82 00 14 */	beq lbl_8016F308
/* 8016F2F8 0016C0F8  7F C4 F3 78 */	mr r4, r30
/* 8016F2FC 0016C0FC  7F E5 FB 78 */	mr r5, r31
/* 8016F300 0016C100  48 00 0D 99 */	bl __ct__22zNPCGoalBPlanktonDizzyFiR13zNPCBPlankton
/* 8016F304 0016C104  7C 64 1B 78 */	mr r4, r3
lbl_8016F308:
/* 8016F308 0016C108  28 04 00 00 */	cmplwi r4, 0
/* 8016F30C 0016C10C  41 82 00 08 */	beq lbl_8016F314
/* 8016F310 0016C110  38 84 00 0C */	addi r4, r4, 0xc
lbl_8016F314:
/* 8016F314 0016C114  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016F318 0016C118  7C 83 23 78 */	mr r3, r4
/* 8016F31C 0016C11C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016F320 0016C120  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016F324 0016C124  7C 08 03 A6 */	mtlr r0
/* 8016F328 0016C128  38 21 00 10 */	addi r1, r1, 0x10
/* 8016F32C 0016C12C  4E 80 00 20 */	blr 
/* 8016F330 0016C130  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016F334 0016C134  7C 08 02 A6 */	mflr r0
/* 8016F338 0016C138  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016F33C 0016C13C  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8016F340 0016C140  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8016F344 0016C144  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016F348 0016C148  93 C1 00 08 */	stw r30, 8(r1)
/* 8016F34C 0016C14C  7C 7E 1B 78 */	mr r30, r3
/* 8016F350 0016C150  FF E0 08 90 */	fmr f31, f1
/* 8016F354 0016C154  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8016F358 0016C158  7C 9F 23 78 */	mr r31, r4
/* 8016F35C 0016C15C  48 00 0C B9 */	bl give_control__13zNPCBPlanktonFv
/* 8016F360 0016C160  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016F364 0016C164  FC 20 F8 90 */	fmr f1, f31
/* 8016F368 0016C168  80 BE 00 4C */	lwz r5, 0x4c(r30)
/* 8016F36C 0016C16C  38 00 00 00 */	li r0, 0
/* 8016F370 0016C170  7F C3 F3 78 */	mr r3, r30
/* 8016F374 0016C174  7F E4 FB 78 */	mr r4, r31
/* 8016F378 0016C178  D0 05 02 C8 */	stfs f0, 0x2c8(r5)
/* 8016F37C 0016C17C  80 BE 00 4C */	lwz r5, 0x4c(r30)
/* 8016F380 0016C180  90 05 02 C0 */	stw r0, 0x2c0(r5)
/* 8016F384 0016C184  4B F6 5D 91 */	bl Enter__14zNPCGoalCommonFfPv
/* 8016F388 0016C188  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8016F38C 0016C18C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016F390 0016C190  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8016F394 0016C194  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016F398 0016C198  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016F39C 0016C19C  7C 08 03 A6 */	mtlr r0
/* 8016F3A0 0016C1A0  38 21 00 20 */	addi r1, r1, 0x20
/* 8016F3A4 0016C1A4  4E 80 00 20 */	blr 
/* 8016F3A8 0016C1A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016F3AC 0016C1AC  7C 08 02 A6 */	mflr r0
/* 8016F3B0 0016C1B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016F3B4 0016C1B4  38 00 00 01 */	li r0, 1
/* 8016F3B8 0016C1B8  80 A3 00 4C */	lwz r5, 0x4c(r3)
/* 8016F3BC 0016C1BC  90 05 02 C0 */	stw r0, 0x2c0(r5)
/* 8016F3C0 0016C1C0  4B F6 60 5D */	bl Exit__5xGoalFfPv
/* 8016F3C4 0016C1C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016F3C8 0016C1C8  7C 08 03 A6 */	mtlr r0
/* 8016F3CC 0016C1CC  38 21 00 10 */	addi r1, r1, 0x10
/* 8016F3D0 0016C1D0  4E 80 00 20 */	blr 
/* 8016F3D4 0016C1D4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016F3D8 0016C1D8  7C 08 02 A6 */	mflr r0
/* 8016F3DC 0016C1DC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016F3E0 0016C1E0  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8016F3E4 0016C1E4  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8016F3E8 0016C1E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016F3EC 0016C1EC  93 C1 00 08 */	stw r30, 8(r1)
/* 8016F3F0 0016C1F0  7C 7E 1B 78 */	mr r30, r3
/* 8016F3F4 0016C1F4  FF E0 08 90 */	fmr f31, f1
/* 8016F3F8 0016C1F8  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8016F3FC 0016C1FC  7C 9F 23 78 */	mr r31, r4
/* 8016F400 0016C200  4B F8 3B 9D */	bl AnimCurState__10zNPCCommonFv
/* 8016F404 0016C204  3C 80 80 2A */	lis r4, lbl_g_hash_bossanim@ha
/* 8016F408 0016C208  80 A3 00 08 */	lwz r5, 8(r3)
/* 8016F40C 0016C20C  38 84 92 68 */	addi r4, r4, lbl_g_hash_bossanim@l
/* 8016F410 0016C210  80 04 01 10 */	lwz r0, 0x110(r4)
/* 8016F414 0016C214  7C 05 00 40 */	cmplw r5, r0
/* 8016F418 0016C218  40 82 00 48 */	bne lbl_8016F460
/* 8016F41C 0016C21C  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016F420 0016C220  C0 23 02 C8 */	lfs f1, 0x2c8(r3)
/* 8016F424 0016C224  C0 03 02 E4 */	lfs f0, 0x2e4(r3)
/* 8016F428 0016C228  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016F42C 0016C22C  4C 41 13 82 */	cror 2, 1, 2
/* 8016F430 0016C230  40 82 00 84 */	bne lbl_8016F4B4
/* 8016F434 0016C234  38 80 00 00 */	li r4, 0
/* 8016F438 0016C238  4B F8 3C 41 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 8016F43C 0016C23C  FC 1F 08 40 */	fcmpo cr0, f31, f1
/* 8016F440 0016C240  40 81 00 74 */	ble lbl_8016F4B4
/* 8016F444 0016C244  3C 80 80 2A */	lis r4, lbl_g_hash_bossanim@ha
/* 8016F448 0016C248  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016F44C 0016C24C  38 84 92 68 */	addi r4, r4, lbl_g_hash_bossanim@l
/* 8016F450 0016C250  38 A0 00 00 */	li r5, 0
/* 8016F454 0016C254  80 84 01 14 */	lwz r4, 0x114(r4)
/* 8016F458 0016C258  4B F8 39 39 */	bl AnimStart__10zNPCCommonFUii
/* 8016F45C 0016C25C  48 00 00 58 */	b lbl_8016F4B4
lbl_8016F460:
/* 8016F460 0016C260  80 64 01 14 */	lwz r3, 0x114(r4)
/* 8016F464 0016C264  80 04 01 0C */	lwz r0, 0x10c(r4)
/* 8016F468 0016C268  7C 65 18 50 */	subf r3, r5, r3
/* 8016F46C 0016C26C  7C 63 00 34 */	cntlzw r3, r3
/* 8016F470 0016C270  7C 05 00 40 */	cmplw r5, r0
/* 8016F474 0016C274  54 63 D9 7E */	srwi r3, r3, 5
/* 8016F478 0016C278  41 82 00 0C */	beq lbl_8016F484
/* 8016F47C 0016C27C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016F480 0016C280  41 82 00 20 */	beq lbl_8016F4A0
lbl_8016F484:
/* 8016F484 0016C284  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8016F488 0016C288  41 82 00 2C */	beq lbl_8016F4B4
/* 8016F48C 0016C28C  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016F490 0016C290  38 80 00 00 */	li r4, 0
/* 8016F494 0016C294  4B F8 3B E5 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 8016F498 0016C298  FC 1F 08 40 */	fcmpo cr0, f31, f1
/* 8016F49C 0016C29C  40 81 00 18 */	ble lbl_8016F4B4
lbl_8016F4A0:
/* 8016F4A0 0016C2A0  38 00 00 01 */	li r0, 1
/* 8016F4A4 0016C2A4  3C 60 4E 47 */	lis r3, 0x4E47424B@ha
/* 8016F4A8 0016C2A8  90 1F 00 00 */	stw r0, 0(r31)
/* 8016F4AC 0016C2AC  38 63 42 4B */	addi r3, r3, 0x4E47424B@l
/* 8016F4B0 0016C2B0  48 00 00 08 */	b lbl_8016F4B8
lbl_8016F4B4:
/* 8016F4B4 0016C2B4  38 60 00 00 */	li r3, 0
lbl_8016F4B8:
/* 8016F4B8 0016C2B8  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8016F4BC 0016C2BC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016F4C0 0016C2C0  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8016F4C4 0016C2C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016F4C8 0016C2C8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016F4CC 0016C2CC  7C 08 03 A6 */	mtlr r0
/* 8016F4D0 0016C2D0  38 21 00 20 */	addi r1, r1, 0x20
/* 8016F4D4 0016C2D4  4E 80 00 20 */	blr 
/* 8016F4D8 0016C2D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016F4DC 0016C2DC  7C 08 02 A6 */	mflr r0
/* 8016F4E0 0016C2E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016F4E4 0016C2E4  7C 80 23 78 */	mr r0, r4
/* 8016F4E8 0016C2E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016F4EC 0016C2EC  7C BF 2B 78 */	mr r31, r5
/* 8016F4F0 0016C2F0  7C 05 03 78 */	mr r5, r0
/* 8016F4F4 0016C2F4  93 C1 00 08 */	stw r30, 8(r1)
/* 8016F4F8 0016C2F8  7C 7E 1B 78 */	mr r30, r3
/* 8016F4FC 0016C2FC  38 60 00 58 */	li r3, 0x58
/* 8016F500 0016C300  7F C4 F3 78 */	mr r4, r30
/* 8016F504 0016C304  4B F9 FC 4D */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8016F508 0016C308  7C 64 1B 79 */	or. r4, r3, r3
/* 8016F50C 0016C30C  41 82 00 14 */	beq lbl_8016F520
/* 8016F510 0016C310  7F C4 F3 78 */	mr r4, r30
/* 8016F514 0016C314  7F E5 FB 78 */	mr r5, r31
/* 8016F518 0016C318  48 00 0B CD */	bl __ct__21zNPCGoalBPlanktonBeamFiR13zNPCBPlankton
/* 8016F51C 0016C31C  7C 64 1B 78 */	mr r4, r3
lbl_8016F520:
/* 8016F520 0016C320  28 04 00 00 */	cmplwi r4, 0
/* 8016F524 0016C324  41 82 00 08 */	beq lbl_8016F52C
/* 8016F528 0016C328  38 84 00 0C */	addi r4, r4, 0xc
lbl_8016F52C:
/* 8016F52C 0016C32C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016F530 0016C330  7C 83 23 78 */	mr r3, r4
/* 8016F534 0016C334  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016F538 0016C338  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016F53C 0016C33C  7C 08 03 A6 */	mtlr r0
/* 8016F540 0016C340  38 21 00 10 */	addi r1, r1, 0x10
/* 8016F544 0016C344  4E 80 00 20 */	blr 
/* 8016F548 0016C348  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016F54C 0016C34C  7C 08 02 A6 */	mflr r0
/* 8016F550 0016C350  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016F554 0016C354  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8016F558 0016C358  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8016F55C 0016C35C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016F560 0016C360  93 C1 00 08 */	stw r30, 8(r1)
/* 8016F564 0016C364  7C 7E 1B 78 */	mr r30, r3
/* 8016F568 0016C368  FF E0 08 90 */	fmr f31, f1
/* 8016F56C 0016C36C  80 63 00 54 */	lwz r3, 0x54(r3)
/* 8016F570 0016C370  7C 9F 23 78 */	mr r31, r4
/* 8016F574 0016C374  4B FF D9 99 */	bl reappear__13zNPCBPlanktonFv
/* 8016F578 0016C378  38 80 00 00 */	li r4, 0
/* 8016F57C 0016C37C  38 00 00 01 */	li r0, 1
/* 8016F580 0016C380  90 9E 00 50 */	stw r4, 0x50(r30)
/* 8016F584 0016C384  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016F588 0016C388  80 7E 00 54 */	lwz r3, 0x54(r30)
/* 8016F58C 0016C38C  D0 03 02 C8 */	stfs f0, 0x2c8(r3)
/* 8016F590 0016C390  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016F594 0016C394  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 8016F598 0016C398  80 7E 00 54 */	lwz r3, 0x54(r30)
/* 8016F59C 0016C39C  98 03 02 B8 */	stb r0, 0x2b8(r3)
/* 8016F5A0 0016C3A0  80 7E 00 54 */	lwz r3, 0x54(r30)
/* 8016F5A4 0016C3A4  90 83 02 C0 */	stw r4, 0x2c0(r3)
/* 8016F5A8 0016C3A8  80 7E 00 54 */	lwz r3, 0x54(r30)
/* 8016F5AC 0016C3AC  80 83 04 4C */	lwz r4, 0x44c(r3)
/* 8016F5B0 0016C3B0  48 00 0B 81 */	bl enable_emitter__13zNPCBPlanktonCFR11xParEmitter
/* 8016F5B4 0016C3B4  80 9E 00 54 */	lwz r4, 0x54(r30)
/* 8016F5B8 0016C3B8  38 60 00 05 */	li r3, 5
/* 8016F5BC 0016C3BC  C0 22 AB 0C */	lfs f1, lbl__1585_1-_SDA2_BASE_(r2)
/* 8016F5C0 0016C3C0  38 84 00 88 */	addi r4, r4, 0x88
/* 8016F5C4 0016C3C4  4B FF 95 F5 */	bl zNPCTypeBossPlankton.play_sound__34_unnamed_zNPCTypeBossPlankton_cpp_FiPC5xVec3f
/* 8016F5C8 0016C3C8  FC 20 F8 90 */	fmr f1, f31
/* 8016F5CC 0016C3CC  7F C3 F3 78 */	mr r3, r30
/* 8016F5D0 0016C3D0  7F E4 FB 78 */	mr r4, r31
/* 8016F5D4 0016C3D4  4B F6 5B 41 */	bl Enter__14zNPCGoalCommonFfPv
/* 8016F5D8 0016C3D8  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8016F5DC 0016C3DC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016F5E0 0016C3E0  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8016F5E4 0016C3E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016F5E8 0016C3E8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016F5EC 0016C3EC  7C 08 03 A6 */	mtlr r0
/* 8016F5F0 0016C3F0  38 21 00 20 */	addi r1, r1, 0x20
/* 8016F5F4 0016C3F4  4E 80 00 20 */	blr 
/* 8016F5F8 0016C3F8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016F5FC 0016C3FC  7C 08 02 A6 */	mflr r0
/* 8016F600 0016C400  38 A0 00 00 */	li r5, 0
/* 8016F604 0016C404  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016F608 0016C408  38 00 00 01 */	li r0, 1
/* 8016F60C 0016C40C  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8016F610 0016C410  FF E0 08 90 */	fmr f31, f1
/* 8016F614 0016C414  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8016F618 0016C418  7C 9F 23 78 */	mr r31, r4
/* 8016F61C 0016C41C  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8016F620 0016C420  7C 7E 1B 78 */	mr r30, r3
/* 8016F624 0016C424  80 63 00 54 */	lwz r3, 0x54(r3)
/* 8016F628 0016C428  98 A3 02 B8 */	stb r5, 0x2b8(r3)
/* 8016F62C 0016C42C  80 7E 00 54 */	lwz r3, 0x54(r30)
/* 8016F630 0016C430  90 03 02 C0 */	stw r0, 0x2c0(r3)
/* 8016F634 0016C434  80 7E 00 54 */	lwz r3, 0x54(r30)
/* 8016F638 0016C438  80 83 04 4C */	lwz r4, 0x44c(r3)
/* 8016F63C 0016C43C  48 00 0B 05 */	bl disable_emitter__13zNPCBPlanktonCFR11xParEmitter
/* 8016F640 0016C440  FC 20 F8 90 */	fmr f1, f31
/* 8016F644 0016C444  7F C3 F3 78 */	mr r3, r30
/* 8016F648 0016C448  7F E4 FB 78 */	mr r4, r31
/* 8016F64C 0016C44C  4B F6 5D D1 */	bl Exit__5xGoalFfPv
/* 8016F650 0016C450  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016F654 0016C454  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8016F658 0016C458  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8016F65C 0016C45C  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 8016F660 0016C460  7C 08 03 A6 */	mtlr r0
/* 8016F664 0016C464  38 21 00 20 */	addi r1, r1, 0x20
/* 8016F668 0016C468  4E 80 00 20 */	blr 
/* 8016F66C 0016C46C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016F670 0016C470  7C 08 02 A6 */	mflr r0
/* 8016F674 0016C474  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016F678 0016C478  80 03 00 50 */	lwz r0, 0x50(r3)
/* 8016F67C 0016C47C  2C 00 00 02 */	cmpwi r0, 2
/* 8016F680 0016C480  41 82 00 34 */	beq lbl_8016F6B4
/* 8016F684 0016C484  40 80 00 14 */	bge lbl_8016F698
/* 8016F688 0016C488  2C 00 00 00 */	cmpwi r0, 0
/* 8016F68C 0016C48C  41 82 00 18 */	beq lbl_8016F6A4
/* 8016F690 0016C490  40 80 00 1C */	bge lbl_8016F6AC
/* 8016F694 0016C494  48 00 00 3C */	b lbl_8016F6D0
lbl_8016F698:
/* 8016F698 0016C498  2C 00 00 04 */	cmpwi r0, 4
/* 8016F69C 0016C49C  40 80 00 34 */	bge lbl_8016F6D0
/* 8016F6A0 0016C4A0  48 00 00 1C */	b lbl_8016F6BC
lbl_8016F6A4:
/* 8016F6A4 0016C4A4  48 00 00 41 */	bl update_warm_up__21zNPCGoalBPlanktonBeamFf
/* 8016F6A8 0016C4A8  48 00 00 28 */	b lbl_8016F6D0
lbl_8016F6AC:
/* 8016F6AC 0016C4AC  48 00 00 91 */	bl update_fire__21zNPCGoalBPlanktonBeamFf
/* 8016F6B0 0016C4B0  48 00 00 20 */	b lbl_8016F6D0
lbl_8016F6B4:
/* 8016F6B4 0016C4B4  48 00 02 5D */	bl update_cool_down__21zNPCGoalBPlanktonBeamFf
/* 8016F6B8 0016C4B8  48 00 00 18 */	b lbl_8016F6D0
lbl_8016F6BC:
/* 8016F6BC 0016C4BC  38 00 00 01 */	li r0, 1
/* 8016F6C0 0016C4C0  90 04 00 00 */	stw r0, 0(r4)
/* 8016F6C4 0016C4C4  80 63 00 54 */	lwz r3, 0x54(r3)
/* 8016F6C8 0016C4C8  4B FF C2 4D */	bl next_goal__13zNPCBPlanktonFv
/* 8016F6CC 0016C4CC  48 00 00 08 */	b lbl_8016F6D4
lbl_8016F6D0:
/* 8016F6D0 0016C4D0  38 60 00 00 */	li r3, 0
lbl_8016F6D4:
/* 8016F6D4 0016C4D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016F6D8 0016C4D8  7C 08 03 A6 */	mtlr r0
/* 8016F6DC 0016C4DC  38 21 00 10 */	addi r1, r1, 0x10
/* 8016F6E0 0016C4E0  4E 80 00 20 */	blr 

.global update_warm_up__21zNPCGoalBPlanktonBeamFf
update_warm_up__21zNPCGoalBPlanktonBeamFf:
/* 8016F6E4 0016C4E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016F6E8 0016C4E8  7C 08 02 A6 */	mflr r0
/* 8016F6EC 0016C4EC  3C 80 80 33 */	lis r4, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016F6F0 0016C4F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016F6F4 0016C4F4  38 84 A1 A0 */	addi r4, r4, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016F6F8 0016C4F8  80 A3 00 54 */	lwz r5, 0x54(r3)
/* 8016F6FC 0016C4FC  C0 04 00 A4 */	lfs f0, 0xa4(r4)
/* 8016F700 0016C500  C0 25 02 C8 */	lfs f1, 0x2c8(r5)
/* 8016F704 0016C504  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016F708 0016C508  4C 41 13 82 */	cror 2, 1, 2
/* 8016F70C 0016C50C  40 82 00 20 */	bne lbl_8016F72C
/* 8016F710 0016C510  C0 02 AB 10 */	lfs f0, lbl__1586_2-_SDA2_BASE_(r2)
/* 8016F714 0016C514  38 00 00 01 */	li r0, 1
/* 8016F718 0016C518  D0 05 02 C8 */	stfs f0, 0x2c8(r5)
/* 8016F71C 0016C51C  90 03 00 50 */	stw r0, 0x50(r3)
/* 8016F720 0016C520  80 63 00 54 */	lwz r3, 0x54(r3)
/* 8016F724 0016C524  80 83 04 4C */	lwz r4, 0x44c(r3)
/* 8016F728 0016C528  48 00 0A 19 */	bl disable_emitter__13zNPCBPlanktonCFR11xParEmitter
lbl_8016F72C:
/* 8016F72C 0016C52C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016F730 0016C530  7C 08 03 A6 */	mtlr r0
/* 8016F734 0016C534  38 21 00 10 */	addi r1, r1, 0x10
/* 8016F738 0016C538  4E 80 00 20 */	blr 

.global update_fire__21zNPCGoalBPlanktonBeamFf
update_fire__21zNPCGoalBPlanktonBeamFf:
/* 8016F73C 0016C53C  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 8016F740 0016C540  7C 08 02 A6 */	mflr r0
/* 8016F744 0016C544  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 8016F748 0016C548  DB E1 00 A0 */	stfd f31, 0xa0(r1)
/* 8016F74C 0016C54C  F3 E1 00 A8 */	psq_st f31, 168(r1), 0, qr0
/* 8016F750 0016C550  BF 61 00 8C */	stmw r27, 0x8c(r1)
/* 8016F754 0016C554  7C 7F 1B 78 */	mr r31, r3
/* 8016F758 0016C558  FF E0 08 90 */	fmr f31, f1
/* 8016F75C 0016C55C  80 63 00 54 */	lwz r3, 0x54(r3)
/* 8016F760 0016C560  C0 23 02 C8 */	lfs f1, 0x2c8(r3)
/* 8016F764 0016C564  C0 03 02 E0 */	lfs f0, 0x2e0(r3)
/* 8016F768 0016C568  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016F76C 0016C56C  4C 41 13 82 */	cror 2, 1, 2
/* 8016F770 0016C570  41 82 00 10 */	beq lbl_8016F780
/* 8016F774 0016C574  88 03 02 B6 */	lbz r0, 0x2b6(r3)
/* 8016F778 0016C578  28 00 00 00 */	cmplwi r0, 0
/* 8016F77C 0016C57C  40 82 00 30 */	bne lbl_8016F7AC
lbl_8016F780:
/* 8016F780 0016C580  3C 80 80 2A */	lis r4, lbl_g_hash_bossanim@ha
/* 8016F784 0016C584  38 A0 00 00 */	li r5, 0
/* 8016F788 0016C588  38 84 92 68 */	addi r4, r4, lbl_g_hash_bossanim@l
/* 8016F78C 0016C58C  80 84 01 20 */	lwz r4, 0x120(r4)
/* 8016F790 0016C590  4B F8 36 01 */	bl AnimStart__10zNPCCommonFUii
/* 8016F794 0016C594  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 8016F798 0016C598  38 80 00 00 */	li r4, 0
/* 8016F79C 0016C59C  38 00 00 02 */	li r0, 2
/* 8016F7A0 0016C5A0  98 83 02 B8 */	stb r4, 0x2b8(r3)
/* 8016F7A4 0016C5A4  90 1F 00 50 */	stw r0, 0x50(r31)
/* 8016F7A8 0016C5A8  48 00 01 4C */	b lbl_8016F8F4
lbl_8016F7AC:
/* 8016F7AC 0016C5AC  48 00 04 0D */	bl location__13zNPCBPlanktonCFv
/* 8016F7B0 0016C5B0  7C 7E 1B 78 */	mr r30, r3
/* 8016F7B4 0016C5B4  4B FF 92 E1 */	bl zNPCTypeBossPlankton.get_player_loc__34_unnamed_zNPCTypeBossPlankton_cpp_Fv
/* 8016F7B8 0016C5B8  7C 64 1B 78 */	mr r4, r3
/* 8016F7BC 0016C5BC  7F C5 F3 78 */	mr r5, r30
/* 8016F7C0 0016C5C0  38 61 00 2C */	addi r3, r1, 0x2c
/* 8016F7C4 0016C5C4  4B E9 BA 09 */	bl __mi__5xVec3CFRC5xVec3
/* 8016F7C8 0016C5C8  38 61 00 2C */	addi r3, r1, 0x2c
/* 8016F7CC 0016C5CC  4B E9 B9 31 */	bl length2__5xVec3CFv
/* 8016F7D0 0016C5D0  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016F7D4 0016C5D4  38 63 A1 A0 */	addi r3, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016F7D8 0016C5D8  C0 03 00 B4 */	lfs f0, 0xb4(r3)
/* 8016F7DC 0016C5DC  EC 00 00 32 */	fmuls f0, f0, f0
/* 8016F7E0 0016C5E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016F7E4 0016C5E4  4C 41 13 82 */	cror 2, 1, 2
/* 8016F7E8 0016C5E8  40 82 00 10 */	bne lbl_8016F7F8
/* 8016F7EC 0016C5EC  38 00 00 02 */	li r0, 2
/* 8016F7F0 0016C5F0  90 1F 00 50 */	stw r0, 0x50(r31)
/* 8016F7F4 0016C5F4  48 00 01 00 */	b lbl_8016F8F4
lbl_8016F7F8:
/* 8016F7F8 0016C5F8  80 9F 00 54 */	lwz r4, 0x54(r31)
/* 8016F7FC 0016C5FC  38 61 00 20 */	addi r3, r1, 0x20
/* 8016F800 0016C600  38 A0 00 16 */	li r5, 0x16
/* 8016F804 0016C604  80 84 00 24 */	lwz r4, 0x24(r4)
/* 8016F808 0016C608  4B EC 57 71 */	bl xModelGetBoneLocation__FRC14xModelInstanceUl
/* 8016F80C 0016C60C  3B C1 00 68 */	addi r30, r1, 0x68
/* 8016F810 0016C610  38 81 00 20 */	addi r4, r1, 0x20
/* 8016F814 0016C614  7F C3 F3 78 */	mr r3, r30
/* 8016F818 0016C618  4B E9 BA 4D */	bl __as__5xVec3FRC5xVec3
/* 8016F81C 0016C61C  4B FF 92 79 */	bl zNPCTypeBossPlankton.get_player_loc__34_unnamed_zNPCTypeBossPlankton_cpp_Fv
/* 8016F820 0016C620  7C 64 1B 78 */	mr r4, r3
/* 8016F824 0016C624  7F C5 F3 78 */	mr r5, r30
/* 8016F828 0016C628  38 61 00 14 */	addi r3, r1, 0x14
/* 8016F82C 0016C62C  4B E9 B9 A1 */	bl __mi__5xVec3CFRC5xVec3
/* 8016F830 0016C630  38 61 00 38 */	addi r3, r1, 0x38
/* 8016F834 0016C634  38 81 00 14 */	addi r4, r1, 0x14
/* 8016F838 0016C638  4B EA 59 C1 */	bl xMat3x3LookVec3__FR7xMat3x3RC5xVec3
/* 8016F83C 0016C63C  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016F840 0016C640  3B A1 00 58 */	addi r29, r1, 0x58
/* 8016F844 0016C644  38 83 A1 A0 */	addi r4, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016F848 0016C648  38 61 00 08 */	addi r3, r1, 8
/* 8016F84C 0016C64C  C0 24 00 B8 */	lfs f1, 0xb8(r4)
/* 8016F850 0016C650  7F A4 EB 78 */	mr r4, r29
/* 8016F854 0016C654  4B E9 B8 CD */	bl __ml__5xVec3CFf
/* 8016F858 0016C658  7F C3 F3 78 */	mr r3, r30
/* 8016F85C 0016C65C  38 81 00 08 */	addi r4, r1, 8
/* 8016F860 0016C660  4B EA 5B E5 */	bl __apl__5xVec3FRC5xVec3
/* 8016F864 0016C664  3C 60 80 33 */	lis r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@ha
/* 8016F868 0016C668  3C 00 43 30 */	lis r0, 0x4330
/* 8016F86C 0016C66C  38 63 A1 A0 */	addi r3, r3, lbl_tweak__34_unnamed_zNPCTypeBossPlankton_cpp_@l
/* 8016F870 0016C670  C0 1F 00 4C */	lfs f0, 0x4c(r31)
/* 8016F874 0016C674  C0 23 00 A0 */	lfs f1, 0xa0(r3)
/* 8016F878 0016C678  90 01 00 80 */	stw r0, 0x80(r1)
/* 8016F87C 0016C67C  EC 1F 00 7A */	fmadds f0, f31, f1, f0
/* 8016F880 0016C680  D0 1F 00 4C */	stfs f0, 0x4c(r31)
/* 8016F884 0016C684  C0 5F 00 4C */	lfs f2, 0x4c(r31)
/* 8016F888 0016C688  C8 22 AB E0 */	lfd f1, lbl__3215-_SDA2_BASE_(r2)
/* 8016F88C 0016C68C  FC 00 10 1E */	fctiwz f0, f2
/* 8016F890 0016C690  D8 01 00 78 */	stfd f0, 0x78(r1)
/* 8016F894 0016C694  83 81 00 7C */	lwz r28, 0x7c(r1)
/* 8016F898 0016C698  6F 80 80 00 */	xoris r0, r28, 0x8000
/* 8016F89C 0016C69C  2C 1C 00 00 */	cmpwi r28, 0
/* 8016F8A0 0016C6A0  90 01 00 84 */	stw r0, 0x84(r1)
/* 8016F8A4 0016C6A4  C8 01 00 80 */	lfd f0, 0x80(r1)
/* 8016F8A8 0016C6A8  EC 00 08 28 */	fsubs f0, f0, f1
/* 8016F8AC 0016C6AC  EC 02 00 28 */	fsubs f0, f2, f0
/* 8016F8B0 0016C6B0  D0 1F 00 4C */	stfs f0, 0x4c(r31)
/* 8016F8B4 0016C6B4  40 81 00 40 */	ble lbl_8016F8F4
/* 8016F8B8 0016C6B8  3B 60 00 00 */	li r27, 0
/* 8016F8BC 0016C6BC  48 00 00 30 */	b lbl_8016F8EC
lbl_8016F8C0:
/* 8016F8C0 0016C6C0  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 8016F8C4 0016C6C4  7F C4 F3 78 */	mr r4, r30
/* 8016F8C8 0016C6C8  7F A5 EB 78 */	mr r5, r29
/* 8016F8CC 0016C6CC  38 63 03 B8 */	addi r3, r3, 0x3b8
/* 8016F8D0 0016C6D0  48 00 DE C5 */	bl emit__17xLaserBoltEmitterFRC5xVec3RC5xVec3
/* 8016F8D4 0016C6D4  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 8016F8D8 0016C6D8  38 81 00 38 */	addi r4, r1, 0x38
/* 8016F8DC 0016C6DC  38 A0 FF FF */	li r5, -1
/* 8016F8E0 0016C6E0  38 63 03 50 */	addi r3, r3, 0x350
/* 8016F8E4 0016C6E4  48 00 CE ED */	bl emit__13xDecalEmitterFRC7xMat4x3i
/* 8016F8E8 0016C6E8  3B 7B 00 01 */	addi r27, r27, 1
lbl_8016F8EC:
/* 8016F8EC 0016C6EC  7C 1B E0 00 */	cmpw r27, r28
/* 8016F8F0 0016C6F0  41 80 FF D0 */	blt lbl_8016F8C0
lbl_8016F8F4:
/* 8016F8F4 0016C6F4  E3 E1 00 A8 */	psq_l f31, 168(r1), 0, qr0
/* 8016F8F8 0016C6F8  CB E1 00 A0 */	lfd f31, 0xa0(r1)
/* 8016F8FC 0016C6FC  BB 61 00 8C */	lmw r27, 0x8c(r1)
/* 8016F900 0016C700  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 8016F904 0016C704  7C 08 03 A6 */	mtlr r0
/* 8016F908 0016C708  38 21 00 B0 */	addi r1, r1, 0xb0
/* 8016F90C 0016C70C  4E 80 00 20 */	blr 

.global update_cool_down__21zNPCGoalBPlanktonBeamFf
update_cool_down__21zNPCGoalBPlanktonBeamFf:
/* 8016F910 0016C710  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016F914 0016C714  7C 08 02 A6 */	mflr r0
/* 8016F918 0016C718  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016F91C 0016C71C  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8016F920 0016C720  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8016F924 0016C724  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016F928 0016C728  7C 7F 1B 78 */	mr r31, r3
/* 8016F92C 0016C72C  FF E0 08 90 */	fmr f31, f1
/* 8016F930 0016C730  80 63 00 54 */	lwz r3, 0x54(r3)
/* 8016F934 0016C734  4B F8 36 69 */	bl AnimCurState__10zNPCCommonFv
/* 8016F938 0016C738  3C 80 80 2A */	lis r4, lbl_g_hash_bossanim@ha
/* 8016F93C 0016C73C  80 A3 00 08 */	lwz r5, 8(r3)
/* 8016F940 0016C740  38 64 92 68 */	addi r3, r4, lbl_g_hash_bossanim@l
/* 8016F944 0016C744  80 03 01 20 */	lwz r0, 0x120(r3)
/* 8016F948 0016C748  7C 05 00 40 */	cmplw r5, r0
/* 8016F94C 0016C74C  40 82 00 20 */	bne lbl_8016F96C
/* 8016F950 0016C750  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 8016F954 0016C754  38 80 00 00 */	li r4, 0
/* 8016F958 0016C758  4B F8 37 21 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 8016F95C 0016C75C  C0 02 AB C0 */	lfs f0, lbl__2223-_SDA2_BASE_(r2)
/* 8016F960 0016C760  EC 00 F8 2A */	fadds f0, f0, f31
/* 8016F964 0016C764  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016F968 0016C768  40 80 00 0C */	bge lbl_8016F974
lbl_8016F96C:
/* 8016F96C 0016C76C  38 00 00 03 */	li r0, 3
/* 8016F970 0016C770  90 1F 00 50 */	stw r0, 0x50(r31)
lbl_8016F974:
/* 8016F974 0016C774  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8016F978 0016C778  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016F97C 0016C77C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8016F980 0016C780  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016F984 0016C784  7C 08 03 A6 */	mtlr r0
/* 8016F988 0016C788  38 21 00 20 */	addi r1, r1, 0x20
/* 8016F98C 0016C78C  4E 80 00 20 */	blr 
/* 8016F990 0016C790  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016F994 0016C794  7C 08 02 A6 */	mflr r0
/* 8016F998 0016C798  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016F99C 0016C79C  7C 80 23 78 */	mr r0, r4
/* 8016F9A0 0016C7A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016F9A4 0016C7A4  7C BF 2B 78 */	mr r31, r5
/* 8016F9A8 0016C7A8  7C 05 03 78 */	mr r5, r0
/* 8016F9AC 0016C7AC  93 C1 00 08 */	stw r30, 8(r1)
/* 8016F9B0 0016C7B0  7C 7E 1B 78 */	mr r30, r3
/* 8016F9B4 0016C7B4  38 60 00 50 */	li r3, 0x50
/* 8016F9B8 0016C7B8  7F C4 F3 78 */	mr r4, r30
/* 8016F9BC 0016C7BC  4B F9 F7 95 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8016F9C0 0016C7C0  7C 64 1B 79 */	or. r4, r3, r3
/* 8016F9C4 0016C7C4  41 82 00 14 */	beq lbl_8016F9D8
/* 8016F9C8 0016C7C8  7F C4 F3 78 */	mr r4, r30
/* 8016F9CC 0016C7CC  7F E5 FB 78 */	mr r5, r31
/* 8016F9D0 0016C7D0  48 00 07 81 */	bl __ct__21zNPCGoalBPlanktonWallFiR13zNPCBPlankton
/* 8016F9D4 0016C7D4  7C 64 1B 78 */	mr r4, r3
lbl_8016F9D8:
/* 8016F9D8 0016C7D8  28 04 00 00 */	cmplwi r4, 0
/* 8016F9DC 0016C7DC  41 82 00 08 */	beq lbl_8016F9E4
/* 8016F9E0 0016C7E0  38 84 00 0C */	addi r4, r4, 0xc
lbl_8016F9E4:
/* 8016F9E4 0016C7E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016F9E8 0016C7E8  7C 83 23 78 */	mr r3, r4
/* 8016F9EC 0016C7EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016F9F0 0016C7F0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016F9F4 0016C7F4  7C 08 03 A6 */	mtlr r0
/* 8016F9F8 0016C7F8  38 21 00 10 */	addi r1, r1, 0x10
/* 8016F9FC 0016C7FC  4E 80 00 20 */	blr 
/* 8016FA00 0016C800  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FA04 0016C804  7C 08 02 A6 */	mflr r0
/* 8016FA08 0016C808  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FA0C 0016C80C  4B F6 57 09 */	bl Enter__14zNPCGoalCommonFfPv
/* 8016FA10 0016C810  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FA14 0016C814  7C 08 03 A6 */	mtlr r0
/* 8016FA18 0016C818  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FA1C 0016C81C  4E 80 00 20 */	blr 
/* 8016FA20 0016C820  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FA24 0016C824  7C 08 02 A6 */	mflr r0
/* 8016FA28 0016C828  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FA2C 0016C82C  4B F6 59 F1 */	bl Exit__5xGoalFfPv
/* 8016FA30 0016C830  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FA34 0016C834  7C 08 03 A6 */	mtlr r0
/* 8016FA38 0016C838  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FA3C 0016C83C  4E 80 00 20 */	blr 
/* 8016FA40 0016C840  38 60 00 00 */	li r3, 0
/* 8016FA44 0016C844  4E 80 00 20 */	blr 
/* 8016FA48 0016C848  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FA4C 0016C84C  7C 08 02 A6 */	mflr r0
/* 8016FA50 0016C850  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FA54 0016C854  7C 80 23 78 */	mr r0, r4
/* 8016FA58 0016C858  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016FA5C 0016C85C  7C BF 2B 78 */	mr r31, r5
/* 8016FA60 0016C860  7C 05 03 78 */	mr r5, r0
/* 8016FA64 0016C864  93 C1 00 08 */	stw r30, 8(r1)
/* 8016FA68 0016C868  7C 7E 1B 78 */	mr r30, r3
/* 8016FA6C 0016C86C  38 60 00 50 */	li r3, 0x50
/* 8016FA70 0016C870  7F C4 F3 78 */	mr r4, r30
/* 8016FA74 0016C874  4B F9 F6 DD */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8016FA78 0016C878  7C 64 1B 79 */	or. r4, r3, r3
/* 8016FA7C 0016C87C  41 82 00 14 */	beq lbl_8016FA90
/* 8016FA80 0016C880  7F C4 F3 78 */	mr r4, r30
/* 8016FA84 0016C884  7F E5 FB 78 */	mr r5, r31
/* 8016FA88 0016C888  48 00 07 15 */	bl __ct__23zNPCGoalBPlanktonMissleFiR13zNPCBPlankton
/* 8016FA8C 0016C88C  7C 64 1B 78 */	mr r4, r3
lbl_8016FA90:
/* 8016FA90 0016C890  28 04 00 00 */	cmplwi r4, 0
/* 8016FA94 0016C894  41 82 00 08 */	beq lbl_8016FA9C
/* 8016FA98 0016C898  38 84 00 0C */	addi r4, r4, 0xc
lbl_8016FA9C:
/* 8016FA9C 0016C89C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FAA0 0016C8A0  7C 83 23 78 */	mr r3, r4
/* 8016FAA4 0016C8A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016FAA8 0016C8A8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016FAAC 0016C8AC  7C 08 03 A6 */	mtlr r0
/* 8016FAB0 0016C8B0  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FAB4 0016C8B4  4E 80 00 20 */	blr 
/* 8016FAB8 0016C8B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FABC 0016C8BC  7C 08 02 A6 */	mflr r0
/* 8016FAC0 0016C8C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FAC4 0016C8C4  4B F6 56 51 */	bl Enter__14zNPCGoalCommonFfPv
/* 8016FAC8 0016C8C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FACC 0016C8CC  7C 08 03 A6 */	mtlr r0
/* 8016FAD0 0016C8D0  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FAD4 0016C8D4  4E 80 00 20 */	blr 
/* 8016FAD8 0016C8D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FADC 0016C8DC  7C 08 02 A6 */	mflr r0
/* 8016FAE0 0016C8E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FAE4 0016C8E4  4B F6 59 39 */	bl Exit__5xGoalFfPv
/* 8016FAE8 0016C8E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FAEC 0016C8EC  7C 08 03 A6 */	mtlr r0
/* 8016FAF0 0016C8F0  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FAF4 0016C8F4  4E 80 00 20 */	blr 
/* 8016FAF8 0016C8F8  38 60 00 00 */	li r3, 0
/* 8016FAFC 0016C8FC  4E 80 00 20 */	blr 
/* 8016FB00 0016C900  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FB04 0016C904  7C 08 02 A6 */	mflr r0
/* 8016FB08 0016C908  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FB0C 0016C90C  7C 80 23 78 */	mr r0, r4
/* 8016FB10 0016C910  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016FB14 0016C914  7C BF 2B 78 */	mr r31, r5
/* 8016FB18 0016C918  7C 05 03 78 */	mr r5, r0
/* 8016FB1C 0016C91C  93 C1 00 08 */	stw r30, 8(r1)
/* 8016FB20 0016C920  7C 7E 1B 78 */	mr r30, r3
/* 8016FB24 0016C924  38 60 00 50 */	li r3, 0x50
/* 8016FB28 0016C928  7F C4 F3 78 */	mr r4, r30
/* 8016FB2C 0016C92C  4B F9 F6 25 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8016FB30 0016C930  7C 64 1B 79 */	or. r4, r3, r3
/* 8016FB34 0016C934  41 82 00 14 */	beq lbl_8016FB48
/* 8016FB38 0016C938  7F C4 F3 78 */	mr r4, r30
/* 8016FB3C 0016C93C  7F E5 FB 78 */	mr r5, r31
/* 8016FB40 0016C940  48 00 06 A9 */	bl __ct__21zNPCGoalBPlanktonBombFiR13zNPCBPlankton
/* 8016FB44 0016C944  7C 64 1B 78 */	mr r4, r3
lbl_8016FB48:
/* 8016FB48 0016C948  28 04 00 00 */	cmplwi r4, 0
/* 8016FB4C 0016C94C  41 82 00 08 */	beq lbl_8016FB54
/* 8016FB50 0016C950  38 84 00 0C */	addi r4, r4, 0xc
lbl_8016FB54:
/* 8016FB54 0016C954  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FB58 0016C958  7C 83 23 78 */	mr r3, r4
/* 8016FB5C 0016C95C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016FB60 0016C960  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016FB64 0016C964  7C 08 03 A6 */	mtlr r0
/* 8016FB68 0016C968  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FB6C 0016C96C  4E 80 00 20 */	blr 
/* 8016FB70 0016C970  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FB74 0016C974  7C 08 02 A6 */	mflr r0
/* 8016FB78 0016C978  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FB7C 0016C97C  4B F6 55 99 */	bl Enter__14zNPCGoalCommonFfPv
/* 8016FB80 0016C980  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FB84 0016C984  7C 08 03 A6 */	mtlr r0
/* 8016FB88 0016C988  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FB8C 0016C98C  4E 80 00 20 */	blr 
/* 8016FB90 0016C990  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FB94 0016C994  7C 08 02 A6 */	mflr r0
/* 8016FB98 0016C998  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FB9C 0016C99C  4B F6 58 81 */	bl Exit__5xGoalFfPv
/* 8016FBA0 0016C9A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FBA4 0016C9A4  7C 08 03 A6 */	mtlr r0
/* 8016FBA8 0016C9A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FBAC 0016C9AC  4E 80 00 20 */	blr 
/* 8016FBB0 0016C9B0  38 60 00 00 */	li r3, 0
/* 8016FBB4 0016C9B4  4E 80 00 20 */	blr 

.global location__13zNPCBPlanktonCFv
location__13zNPCBPlanktonCFv:
/* 8016FBB8 0016C9B8  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8016FBBC 0016C9BC  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8016FBC0 0016C9C0  38 63 00 30 */	addi r3, r3, 0x30
/* 8016FBC4 0016C9C4  4E 80 00 20 */	blr 

.global face_player__13zNPCBPlanktonFv
face_player__13zNPCBPlanktonFv:
/* 8016FBC8 0016C9C8  38 00 00 01 */	li r0, 1
/* 8016FBCC 0016C9CC  98 03 02 B5 */	stb r0, 0x2b5(r3)
/* 8016FBD0 0016C9D0  4E 80 00 20 */	blr 

.global render_debug__13zNPCBPlanktonFv
render_debug__13zNPCBPlanktonFv:
/* 8016FBD4 0016C9D4  4E 80 00 20 */	blr 

.global turning__13zNPCBPlanktonCFv
turning__13zNPCBPlanktonCFv:
/* 8016FBD8 0016C9D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FBDC 0016C9DC  38 00 00 00 */	li r0, 0
/* 8016FBE0 0016C9E0  80 83 00 24 */	lwz r4, 0x24(r3)
/* 8016FBE4 0016C9E4  80 A2 BF B8 */	lwz r5, lbl__821_2-_SDA2_BASE_(r2)
/* 8016FBE8 0016C9E8  80 C4 00 4C */	lwz r6, 0x4c(r4)
/* 8016FBEC 0016C9EC  80 82 BF BC */	lwz r4, lbl_803D093C-_SDA2_BASE_(r2)
/* 8016FBF0 0016C9F0  C0 63 04 68 */	lfs f3, 0x468(r3)
/* 8016FBF4 0016C9F4  C0 22 AB B4 */	lfs f1, lbl__2166-_SDA2_BASE_(r2)
/* 8016FBF8 0016C9F8  90 A1 00 08 */	stw r5, 8(r1)
/* 8016FBFC 0016C9FC  C0 46 00 20 */	lfs f2, 0x20(r6)
/* 8016FC00 0016CA00  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 8016FC04 0016CA04  90 81 00 0C */	stw r4, 0xc(r1)
/* 8016FC08 0016CA08  C0 06 00 28 */	lfs f0, 0x28(r6)
/* 8016FC0C 0016CA0C  D0 41 00 08 */	stfs f2, 8(r1)
/* 8016FC10 0016CA10  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8016FC14 0016CA14  4C 41 13 82 */	cror 2, 1, 2
/* 8016FC18 0016CA18  40 82 00 88 */	bne lbl_8016FCA0
/* 8016FC1C 0016CA1C  C0 02 AB 28 */	lfs f0, lbl__1755_1-_SDA2_BASE_(r2)
/* 8016FC20 0016CA20  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8016FC24 0016CA24  4C 40 13 82 */	cror 2, 0, 2
/* 8016FC28 0016CA28  40 82 00 78 */	bne lbl_8016FCA0
/* 8016FC2C 0016CA2C  C0 43 04 6C */	lfs f2, 0x46c(r3)
/* 8016FC30 0016CA30  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8016FC34 0016CA34  4C 41 13 82 */	cror 2, 1, 2
/* 8016FC38 0016CA38  40 82 00 10 */	bne lbl_8016FC48
/* 8016FC3C 0016CA3C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8016FC40 0016CA40  4C 40 13 82 */	cror 2, 0, 2
/* 8016FC44 0016CA44  41 82 00 60 */	beq lbl_8016FCA4
lbl_8016FC48:
/* 8016FC48 0016CA48  C0 43 04 60 */	lfs f2, 0x460(r3)
/* 8016FC4C 0016CA4C  C0 03 04 64 */	lfs f0, 0x464(r3)
/* 8016FC50 0016CA50  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8016FC54 0016CA54  40 81 00 20 */	ble lbl_8016FC74
/* 8016FC58 0016CA58  C0 21 00 08 */	lfs f1, 8(r1)
/* 8016FC5C 0016CA5C  C0 02 AB C0 */	lfs f0, lbl__2223-_SDA2_BASE_(r2)
/* 8016FC60 0016CA60  EC 22 08 28 */	fsubs f1, f2, f1
/* 8016FC64 0016CA64  FC 20 0A 10 */	fabs f1, f1
/* 8016FC68 0016CA68  FC 20 08 18 */	frsp f1, f1
/* 8016FC6C 0016CA6C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016FC70 0016CA70  41 80 00 34 */	blt lbl_8016FCA4
lbl_8016FC74:
/* 8016FC74 0016CA74  C0 03 04 60 */	lfs f0, 0x460(r3)
/* 8016FC78 0016CA78  C0 43 04 64 */	lfs f2, 0x464(r3)
/* 8016FC7C 0016CA7C  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8016FC80 0016CA80  40 80 00 20 */	bge lbl_8016FCA0
/* 8016FC84 0016CA84  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8016FC88 0016CA88  C0 02 AB C0 */	lfs f0, lbl__2223-_SDA2_BASE_(r2)
/* 8016FC8C 0016CA8C  EC 22 08 28 */	fsubs f1, f2, f1
/* 8016FC90 0016CA90  FC 20 0A 10 */	fabs f1, f1
/* 8016FC94 0016CA94  FC 20 08 18 */	frsp f1, f1
/* 8016FC98 0016CA98  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016FC9C 0016CA9C  41 80 00 08 */	blt lbl_8016FCA4
lbl_8016FCA0:
/* 8016FCA0 0016CAA0  38 00 00 01 */	li r0, 1
lbl_8016FCA4:
/* 8016FCA4 0016CAA4  7C 03 03 78 */	mr r3, r0
/* 8016FCA8 0016CAA8  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FCAC 0016CAAC  4E 80 00 20 */	blr 

.global __ct__21zNPCGoalBPlanktonIdleFiR13zNPCBPlankton
__ct__21zNPCGoalBPlanktonIdleFiR13zNPCBPlankton:
/* 8016FCB0 0016CAB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FCB4 0016CAB4  7C 08 02 A6 */	mflr r0
/* 8016FCB8 0016CAB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FCBC 0016CABC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016FCC0 0016CAC0  7C BF 2B 78 */	mr r31, r5
/* 8016FCC4 0016CAC4  93 C1 00 08 */	stw r30, 8(r1)
/* 8016FCC8 0016CAC8  7C 7E 1B 78 */	mr r30, r3
/* 8016FCCC 0016CACC  4B F6 93 29 */	bl __ct__14zNPCGoalCommonFi
/* 8016FCD0 0016CAD0  3C 80 80 2A */	lis r4, lbl___vt__21zNPCGoalBPlanktonIdle@ha
/* 8016FCD4 0016CAD4  7F C3 F3 78 */	mr r3, r30
/* 8016FCD8 0016CAD8  38 04 B3 38 */	addi r0, r4, lbl___vt__21zNPCGoalBPlanktonIdle@l
/* 8016FCDC 0016CADC  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8016FCE0 0016CAE0  93 FE 00 4C */	stw r31, 0x4c(r30)
/* 8016FCE4 0016CAE4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016FCE8 0016CAE8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016FCEC 0016CAEC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FCF0 0016CAF0  7C 08 03 A6 */	mtlr r0
/* 8016FCF4 0016CAF4  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FCF8 0016CAF8  4E 80 00 20 */	blr 

.global take_control__13zNPCBPlanktonFv
take_control__13zNPCBPlanktonFv:
/* 8016FCFC 0016CAFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FD00 0016CB00  7C 08 02 A6 */	mflr r0
/* 8016FD04 0016CB04  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FD08 0016CB08  80 63 04 B0 */	lwz r3, 0x4b0(r3)
/* 8016FD0C 0016CB0C  28 03 00 00 */	cmplwi r3, 0
/* 8016FD10 0016CB10  41 82 00 14 */	beq lbl_8016FD24
/* 8016FD14 0016CB14  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 8016FD18 0016CB18  81 8C 00 D0 */	lwz r12, 0xd0(r12)
/* 8016FD1C 0016CB1C  7D 89 03 A6 */	mtctr r12
/* 8016FD20 0016CB20  4E 80 04 21 */	bctrl 
lbl_8016FD24:
/* 8016FD24 0016CB24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FD28 0016CB28  7C 08 03 A6 */	mtlr r0
/* 8016FD2C 0016CB2C  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FD30 0016CB30  4E 80 00 20 */	blr 

.global get_orbit_yaw__13zNPCBPlanktonCFRC5xVec3
get_orbit_yaw__13zNPCBPlanktonCFRC5xVec3:
/* 8016FD34 0016CB34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FD38 0016CB38  7C 08 02 A6 */	mflr r0
/* 8016FD3C 0016CB3C  C0 64 00 00 */	lfs f3, 0(r4)
/* 8016FD40 0016CB40  C0 23 04 50 */	lfs f1, 0x450(r3)
/* 8016FD44 0016CB44  C0 44 00 08 */	lfs f2, 8(r4)
/* 8016FD48 0016CB48  C0 03 04 58 */	lfs f0, 0x458(r3)
/* 8016FD4C 0016CB4C  EC 23 08 28 */	fsubs f1, f3, f1
/* 8016FD50 0016CB50  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FD54 0016CB54  EC 42 00 28 */	fsubs f2, f2, f0
/* 8016FD58 0016CB58  4B E9 63 19 */	bl xatan2__Fff
/* 8016FD5C 0016CB5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FD60 0016CB60  7C 08 03 A6 */	mtlr r0
/* 8016FD64 0016CB64  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FD68 0016CB68  4E 80 00 20 */	blr 

.global __ct__23zNPCGoalBPlanktonAttackFiR13zNPCBPlankton
__ct__23zNPCGoalBPlanktonAttackFiR13zNPCBPlankton:
/* 8016FD6C 0016CB6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FD70 0016CB70  7C 08 02 A6 */	mflr r0
/* 8016FD74 0016CB74  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FD78 0016CB78  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016FD7C 0016CB7C  7C BF 2B 78 */	mr r31, r5
/* 8016FD80 0016CB80  93 C1 00 08 */	stw r30, 8(r1)
/* 8016FD84 0016CB84  7C 7E 1B 78 */	mr r30, r3
/* 8016FD88 0016CB88  4B F6 92 6D */	bl __ct__14zNPCGoalCommonFi
/* 8016FD8C 0016CB8C  3C 80 80 2A */	lis r4, lbl___vt__23zNPCGoalBPlanktonAttack@ha
/* 8016FD90 0016CB90  7F C3 F3 78 */	mr r3, r30
/* 8016FD94 0016CB94  38 04 B3 04 */	addi r0, r4, lbl___vt__23zNPCGoalBPlanktonAttack@l
/* 8016FD98 0016CB98  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8016FD9C 0016CB9C  93 FE 00 4C */	stw r31, 0x4c(r30)
/* 8016FDA0 0016CBA0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016FDA4 0016CBA4  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016FDA8 0016CBA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FDAC 0016CBAC  7C 08 03 A6 */	mtlr r0
/* 8016FDB0 0016CBB0  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FDB4 0016CBB4  4E 80 00 20 */	blr 

.global __ct__23zNPCGoalBPlanktonAmbushFiR13zNPCBPlankton
__ct__23zNPCGoalBPlanktonAmbushFiR13zNPCBPlankton:
/* 8016FDB8 0016CBB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FDBC 0016CBBC  7C 08 02 A6 */	mflr r0
/* 8016FDC0 0016CBC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FDC4 0016CBC4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016FDC8 0016CBC8  7C BF 2B 78 */	mr r31, r5
/* 8016FDCC 0016CBCC  93 C1 00 08 */	stw r30, 8(r1)
/* 8016FDD0 0016CBD0  7C 7E 1B 78 */	mr r30, r3
/* 8016FDD4 0016CBD4  4B F6 92 21 */	bl __ct__14zNPCGoalCommonFi
/* 8016FDD8 0016CBD8  3C 80 80 2A */	lis r4, lbl___vt__23zNPCGoalBPlanktonAmbush@ha
/* 8016FDDC 0016CBDC  7F C3 F3 78 */	mr r3, r30
/* 8016FDE0 0016CBE0  38 04 B2 D0 */	addi r0, r4, lbl___vt__23zNPCGoalBPlanktonAmbush@l
/* 8016FDE4 0016CBE4  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8016FDE8 0016CBE8  93 FE 00 4C */	stw r31, 0x4c(r30)
/* 8016FDEC 0016CBEC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016FDF0 0016CBF0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016FDF4 0016CBF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FDF8 0016CBF8  7C 08 03 A6 */	mtlr r0
/* 8016FDFC 0016CBFC  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FE00 0016CC00  4E 80 00 20 */	blr 

.global set_location__13zNPCBPlanktonFRC5xVec3
set_location__13zNPCBPlanktonFRC5xVec3:
/* 8016FE04 0016CC04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FE08 0016CC08  7C 08 02 A6 */	mflr r0
/* 8016FE0C 0016CC0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FE10 0016CC10  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016FE14 0016CC14  7C 7F 1B 78 */	mr r31, r3
/* 8016FE18 0016CC18  80 63 00 48 */	lwz r3, 0x48(r3)
/* 8016FE1C 0016CC1C  38 63 00 30 */	addi r3, r3, 0x30
/* 8016FE20 0016CC20  4B E9 B4 45 */	bl __as__5xVec3FRC5xVec3
/* 8016FE24 0016CC24  80 BF 00 24 */	lwz r5, 0x24(r31)
/* 8016FE28 0016CC28  7C 64 1B 78 */	mr r4, r3
/* 8016FE2C 0016CC2C  80 65 00 4C */	lwz r3, 0x4c(r5)
/* 8016FE30 0016CC30  38 63 00 30 */	addi r3, r3, 0x30
/* 8016FE34 0016CC34  4B E9 B4 31 */	bl __as__5xVec3FRC5xVec3
/* 8016FE38 0016CC38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FE3C 0016CC3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016FE40 0016CC40  7C 08 03 A6 */	mtlr r0
/* 8016FE44 0016CC44  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FE48 0016CC48  4E 80 00 20 */	blr 

.global __ct__22zNPCGoalBPlanktonFlankFiR13zNPCBPlankton
__ct__22zNPCGoalBPlanktonFlankFiR13zNPCBPlankton:
/* 8016FE4C 0016CC4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FE50 0016CC50  7C 08 02 A6 */	mflr r0
/* 8016FE54 0016CC54  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FE58 0016CC58  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016FE5C 0016CC5C  7C BF 2B 78 */	mr r31, r5
/* 8016FE60 0016CC60  93 C1 00 08 */	stw r30, 8(r1)
/* 8016FE64 0016CC64  7C 7E 1B 78 */	mr r30, r3
/* 8016FE68 0016CC68  4B F6 91 8D */	bl __ct__14zNPCGoalCommonFi
/* 8016FE6C 0016CC6C  3C 80 80 2A */	lis r4, lbl___vt__22zNPCGoalBPlanktonFlank@ha
/* 8016FE70 0016CC70  7F C3 F3 78 */	mr r3, r30
/* 8016FE74 0016CC74  38 04 B2 9C */	addi r0, r4, lbl___vt__22zNPCGoalBPlanktonFlank@l
/* 8016FE78 0016CC78  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8016FE7C 0016CC7C  93 FE 00 50 */	stw r31, 0x50(r30)
/* 8016FE80 0016CC80  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016FE84 0016CC84  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016FE88 0016CC88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FE8C 0016CC8C  7C 08 03 A6 */	mtlr r0
/* 8016FE90 0016CC90  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FE94 0016CC94  4E 80 00 20 */	blr 

.global __ct__22zNPCGoalBPlanktonEvadeFiR13zNPCBPlankton
__ct__22zNPCGoalBPlanktonEvadeFiR13zNPCBPlankton:
/* 8016FE98 0016CC98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FE9C 0016CC9C  7C 08 02 A6 */	mflr r0
/* 8016FEA0 0016CCA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FEA4 0016CCA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016FEA8 0016CCA8  7C BF 2B 78 */	mr r31, r5
/* 8016FEAC 0016CCAC  93 C1 00 08 */	stw r30, 8(r1)
/* 8016FEB0 0016CCB0  7C 7E 1B 78 */	mr r30, r3
/* 8016FEB4 0016CCB4  4B F6 91 41 */	bl __ct__14zNPCGoalCommonFi
/* 8016FEB8 0016CCB8  3C 80 80 2A */	lis r4, lbl___vt__22zNPCGoalBPlanktonEvade@ha
/* 8016FEBC 0016CCBC  7F C3 F3 78 */	mr r3, r30
/* 8016FEC0 0016CCC0  38 04 B2 68 */	addi r0, r4, lbl___vt__22zNPCGoalBPlanktonEvade@l
/* 8016FEC4 0016CCC4  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8016FEC8 0016CCC8  93 FE 00 50 */	stw r31, 0x50(r30)
/* 8016FECC 0016CCCC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016FED0 0016CCD0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016FED4 0016CCD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FED8 0016CCD8  7C 08 03 A6 */	mtlr r0
/* 8016FEDC 0016CCDC  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FEE0 0016CCE0  4E 80 00 20 */	blr 

.global __ct__21zNPCGoalBPlanktonHuntFiR13zNPCBPlankton
__ct__21zNPCGoalBPlanktonHuntFiR13zNPCBPlankton:
/* 8016FEE4 0016CCE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FEE8 0016CCE8  7C 08 02 A6 */	mflr r0
/* 8016FEEC 0016CCEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FEF0 0016CCF0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016FEF4 0016CCF4  7C BF 2B 78 */	mr r31, r5
/* 8016FEF8 0016CCF8  93 C1 00 08 */	stw r30, 8(r1)
/* 8016FEFC 0016CCFC  7C 7E 1B 78 */	mr r30, r3
/* 8016FF00 0016CD00  4B F6 90 F5 */	bl __ct__14zNPCGoalCommonFi
/* 8016FF04 0016CD04  3C 80 80 2A */	lis r4, lbl___vt__21zNPCGoalBPlanktonHunt@ha
/* 8016FF08 0016CD08  7F C3 F3 78 */	mr r3, r30
/* 8016FF0C 0016CD0C  38 04 B2 34 */	addi r0, r4, lbl___vt__21zNPCGoalBPlanktonHunt@l
/* 8016FF10 0016CD10  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8016FF14 0016CD14  93 FE 00 58 */	stw r31, 0x58(r30)
/* 8016FF18 0016CD18  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016FF1C 0016CD1C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016FF20 0016CD20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FF24 0016CD24  7C 08 03 A6 */	mtlr r0
/* 8016FF28 0016CD28  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FF2C 0016CD2C  4E 80 00 20 */	blr 

.global __ct__22zNPCGoalBPlanktonTauntFiR13zNPCBPlankton
__ct__22zNPCGoalBPlanktonTauntFiR13zNPCBPlankton:
/* 8016FF30 0016CD30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FF34 0016CD34  7C 08 02 A6 */	mflr r0
/* 8016FF38 0016CD38  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FF3C 0016CD3C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016FF40 0016CD40  7C BF 2B 78 */	mr r31, r5
/* 8016FF44 0016CD44  93 C1 00 08 */	stw r30, 8(r1)
/* 8016FF48 0016CD48  7C 7E 1B 78 */	mr r30, r3
/* 8016FF4C 0016CD4C  4B F6 90 A9 */	bl __ct__14zNPCGoalCommonFi
/* 8016FF50 0016CD50  3C 80 80 2A */	lis r4, lbl___vt__22zNPCGoalBPlanktonTaunt@ha
/* 8016FF54 0016CD54  7F C3 F3 78 */	mr r3, r30
/* 8016FF58 0016CD58  38 04 B2 00 */	addi r0, r4, lbl___vt__22zNPCGoalBPlanktonTaunt@l
/* 8016FF5C 0016CD5C  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8016FF60 0016CD60  93 FE 00 4C */	stw r31, 0x4c(r30)
/* 8016FF64 0016CD64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016FF68 0016CD68  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016FF6C 0016CD6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FF70 0016CD70  7C 08 03 A6 */	mtlr r0
/* 8016FF74 0016CD74  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FF78 0016CD78  4E 80 00 20 */	blr 

.global __ct__21zNPCGoalBPlanktonMoveFiR13zNPCBPlankton
__ct__21zNPCGoalBPlanktonMoveFiR13zNPCBPlankton:
/* 8016FF7C 0016CD7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FF80 0016CD80  7C 08 02 A6 */	mflr r0
/* 8016FF84 0016CD84  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FF88 0016CD88  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016FF8C 0016CD8C  7C BF 2B 78 */	mr r31, r5
/* 8016FF90 0016CD90  93 C1 00 08 */	stw r30, 8(r1)
/* 8016FF94 0016CD94  7C 7E 1B 78 */	mr r30, r3
/* 8016FF98 0016CD98  4B F6 90 5D */	bl __ct__14zNPCGoalCommonFi
/* 8016FF9C 0016CD9C  3C 80 80 2A */	lis r4, lbl___vt__21zNPCGoalBPlanktonMove@ha
/* 8016FFA0 0016CDA0  7F C3 F3 78 */	mr r3, r30
/* 8016FFA4 0016CDA4  38 04 B1 CC */	addi r0, r4, lbl___vt__21zNPCGoalBPlanktonMove@l
/* 8016FFA8 0016CDA8  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8016FFAC 0016CDAC  93 FE 00 4C */	stw r31, 0x4c(r30)
/* 8016FFB0 0016CDB0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016FFB4 0016CDB4  83 C1 00 08 */	lwz r30, 8(r1)
/* 8016FFB8 0016CDB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FFBC 0016CDBC  7C 08 03 A6 */	mtlr r0
/* 8016FFC0 0016CDC0  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FFC4 0016CDC4  4E 80 00 20 */	blr 

.global __ct__21zNPCGoalBPlanktonStunFiR13zNPCBPlankton
__ct__21zNPCGoalBPlanktonStunFiR13zNPCBPlankton:
/* 8016FFC8 0016CDC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FFCC 0016CDCC  7C 08 02 A6 */	mflr r0
/* 8016FFD0 0016CDD0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FFD4 0016CDD4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016FFD8 0016CDD8  7C BF 2B 78 */	mr r31, r5
/* 8016FFDC 0016CDDC  93 C1 00 08 */	stw r30, 8(r1)
/* 8016FFE0 0016CDE0  7C 7E 1B 78 */	mr r30, r3
/* 8016FFE4 0016CDE4  4B F6 90 11 */	bl __ct__14zNPCGoalCommonFi
/* 8016FFE8 0016CDE8  3C 80 80 2A */	lis r4, lbl___vt__21zNPCGoalBPlanktonStun@ha
/* 8016FFEC 0016CDEC  7F C3 F3 78 */	mr r3, r30
/* 8016FFF0 0016CDF0  38 04 B1 98 */	addi r0, r4, lbl___vt__21zNPCGoalBPlanktonStun@l
/* 8016FFF4 0016CDF4  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8016FFF8 0016CDF8  93 FE 00 4C */	stw r31, 0x4c(r30)
/* 8016FFFC 0016CDFC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80170000 0016CE00  83 C1 00 08 */	lwz r30, 8(r1)
/* 80170004 0016CE04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80170008 0016CE08  7C 08 03 A6 */	mtlr r0
/* 8017000C 0016CE0C  38 21 00 10 */	addi r1, r1, 0x10
/* 80170010 0016CE10  4E 80 00 20 */	blr 

.global give_control__13zNPCBPlanktonFv
give_control__13zNPCBPlanktonFv:
/* 80170014 0016CE14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80170018 0016CE18  7C 08 02 A6 */	mflr r0
/* 8017001C 0016CE1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80170020 0016CE20  80 63 04 B0 */	lwz r3, 0x4b0(r3)
/* 80170024 0016CE24  28 03 00 00 */	cmplwi r3, 0
/* 80170028 0016CE28  41 82 00 14 */	beq lbl_8017003C
/* 8017002C 0016CE2C  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80170030 0016CE30  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 80170034 0016CE34  7D 89 03 A6 */	mtctr r12
/* 80170038 0016CE38  4E 80 04 21 */	bctrl 
lbl_8017003C:
/* 8017003C 0016CE3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80170040 0016CE40  7C 08 03 A6 */	mtlr r0
/* 80170044 0016CE44  38 21 00 10 */	addi r1, r1, 0x10
/* 80170048 0016CE48  4E 80 00 20 */	blr 

.global __ct__21zNPCGoalBPlanktonFallFiR13zNPCBPlankton
__ct__21zNPCGoalBPlanktonFallFiR13zNPCBPlankton:
/* 8017004C 0016CE4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80170050 0016CE50  7C 08 02 A6 */	mflr r0
/* 80170054 0016CE54  90 01 00 14 */	stw r0, 0x14(r1)
/* 80170058 0016CE58  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017005C 0016CE5C  7C BF 2B 78 */	mr r31, r5
/* 80170060 0016CE60  93 C1 00 08 */	stw r30, 8(r1)
/* 80170064 0016CE64  7C 7E 1B 78 */	mr r30, r3
/* 80170068 0016CE68  4B F6 8F 8D */	bl __ct__14zNPCGoalCommonFi
/* 8017006C 0016CE6C  3C 80 80 2A */	lis r4, lbl___vt__21zNPCGoalBPlanktonFall@ha
/* 80170070 0016CE70  7F C3 F3 78 */	mr r3, r30
/* 80170074 0016CE74  38 04 B1 64 */	addi r0, r4, lbl___vt__21zNPCGoalBPlanktonFall@l
/* 80170078 0016CE78  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8017007C 0016CE7C  93 FE 00 4C */	stw r31, 0x4c(r30)
/* 80170080 0016CE80  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80170084 0016CE84  83 C1 00 08 */	lwz r30, 8(r1)
/* 80170088 0016CE88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017008C 0016CE8C  7C 08 03 A6 */	mtlr r0
/* 80170090 0016CE90  38 21 00 10 */	addi r1, r1, 0x10
/* 80170094 0016CE94  4E 80 00 20 */	blr 

.global __ct__22zNPCGoalBPlanktonDizzyFiR13zNPCBPlankton
__ct__22zNPCGoalBPlanktonDizzyFiR13zNPCBPlankton:
/* 80170098 0016CE98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017009C 0016CE9C  7C 08 02 A6 */	mflr r0
/* 801700A0 0016CEA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801700A4 0016CEA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801700A8 0016CEA8  7C BF 2B 78 */	mr r31, r5
/* 801700AC 0016CEAC  93 C1 00 08 */	stw r30, 8(r1)
/* 801700B0 0016CEB0  7C 7E 1B 78 */	mr r30, r3
/* 801700B4 0016CEB4  4B F6 8F 41 */	bl __ct__14zNPCGoalCommonFi
/* 801700B8 0016CEB8  3C 80 80 2A */	lis r4, lbl___vt__22zNPCGoalBPlanktonDizzy@ha
/* 801700BC 0016CEBC  7F C3 F3 78 */	mr r3, r30
/* 801700C0 0016CEC0  38 04 B1 30 */	addi r0, r4, lbl___vt__22zNPCGoalBPlanktonDizzy@l
/* 801700C4 0016CEC4  90 1E 00 38 */	stw r0, 0x38(r30)
/* 801700C8 0016CEC8  93 FE 00 4C */	stw r31, 0x4c(r30)
/* 801700CC 0016CECC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801700D0 0016CED0  83 C1 00 08 */	lwz r30, 8(r1)
/* 801700D4 0016CED4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801700D8 0016CED8  7C 08 03 A6 */	mtlr r0
/* 801700DC 0016CEDC  38 21 00 10 */	addi r1, r1, 0x10
/* 801700E0 0016CEE0  4E 80 00 20 */	blr 

.global __ct__21zNPCGoalBPlanktonBeamFiR13zNPCBPlankton
__ct__21zNPCGoalBPlanktonBeamFiR13zNPCBPlankton:
/* 801700E4 0016CEE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801700E8 0016CEE8  7C 08 02 A6 */	mflr r0
/* 801700EC 0016CEEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801700F0 0016CEF0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801700F4 0016CEF4  7C BF 2B 78 */	mr r31, r5
/* 801700F8 0016CEF8  93 C1 00 08 */	stw r30, 8(r1)
/* 801700FC 0016CEFC  7C 7E 1B 78 */	mr r30, r3
/* 80170100 0016CF00  4B F6 8E F5 */	bl __ct__14zNPCGoalCommonFi
/* 80170104 0016CF04  3C 80 80 2A */	lis r4, lbl___vt__21zNPCGoalBPlanktonBeam@ha
/* 80170108 0016CF08  7F C3 F3 78 */	mr r3, r30
/* 8017010C 0016CF0C  38 04 B0 FC */	addi r0, r4, lbl___vt__21zNPCGoalBPlanktonBeam@l
/* 80170110 0016CF10  90 1E 00 38 */	stw r0, 0x38(r30)
/* 80170114 0016CF14  93 FE 00 54 */	stw r31, 0x54(r30)
/* 80170118 0016CF18  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017011C 0016CF1C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80170120 0016CF20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80170124 0016CF24  7C 08 03 A6 */	mtlr r0
/* 80170128 0016CF28  38 21 00 10 */	addi r1, r1, 0x10
/* 8017012C 0016CF2C  4E 80 00 20 */	blr 

.global enable_emitter__13zNPCBPlanktonCFR11xParEmitter
enable_emitter__13zNPCBPlanktonCFR11xParEmitter:
/* 80170130 0016CF30  88 04 00 30 */	lbz r0, 0x30(r4)
/* 80170134 0016CF34  60 00 00 01 */	ori r0, r0, 1
/* 80170138 0016CF38  98 04 00 30 */	stb r0, 0x30(r4)
/* 8017013C 0016CF3C  4E 80 00 20 */	blr 

.global disable_emitter__13zNPCBPlanktonCFR11xParEmitter
disable_emitter__13zNPCBPlanktonCFR11xParEmitter:
/* 80170140 0016CF40  88 04 00 30 */	lbz r0, 0x30(r4)
/* 80170144 0016CF44  54 00 06 3C */	rlwinm r0, r0, 0, 0x18, 0x1e
/* 80170148 0016CF48  98 04 00 30 */	stb r0, 0x30(r4)
/* 8017014C 0016CF4C  4E 80 00 20 */	blr 

.global __ct__21zNPCGoalBPlanktonWallFiR13zNPCBPlankton
__ct__21zNPCGoalBPlanktonWallFiR13zNPCBPlankton:
/* 80170150 0016CF50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80170154 0016CF54  7C 08 02 A6 */	mflr r0
/* 80170158 0016CF58  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017015C 0016CF5C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80170160 0016CF60  7C BF 2B 78 */	mr r31, r5
/* 80170164 0016CF64  93 C1 00 08 */	stw r30, 8(r1)
/* 80170168 0016CF68  7C 7E 1B 78 */	mr r30, r3
/* 8017016C 0016CF6C  4B F6 8E 89 */	bl __ct__14zNPCGoalCommonFi
/* 80170170 0016CF70  3C 80 80 2A */	lis r4, lbl___vt__21zNPCGoalBPlanktonWall@ha
/* 80170174 0016CF74  7F C3 F3 78 */	mr r3, r30
/* 80170178 0016CF78  38 04 B0 C8 */	addi r0, r4, lbl___vt__21zNPCGoalBPlanktonWall@l
/* 8017017C 0016CF7C  90 1E 00 38 */	stw r0, 0x38(r30)
/* 80170180 0016CF80  93 FE 00 4C */	stw r31, 0x4c(r30)
/* 80170184 0016CF84  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80170188 0016CF88  83 C1 00 08 */	lwz r30, 8(r1)
/* 8017018C 0016CF8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80170190 0016CF90  7C 08 03 A6 */	mtlr r0
/* 80170194 0016CF94  38 21 00 10 */	addi r1, r1, 0x10
/* 80170198 0016CF98  4E 80 00 20 */	blr 

.global __ct__23zNPCGoalBPlanktonMissleFiR13zNPCBPlankton
__ct__23zNPCGoalBPlanktonMissleFiR13zNPCBPlankton:
/* 8017019C 0016CF9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801701A0 0016CFA0  7C 08 02 A6 */	mflr r0
/* 801701A4 0016CFA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801701A8 0016CFA8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801701AC 0016CFAC  7C BF 2B 78 */	mr r31, r5
/* 801701B0 0016CFB0  93 C1 00 08 */	stw r30, 8(r1)
/* 801701B4 0016CFB4  7C 7E 1B 78 */	mr r30, r3
/* 801701B8 0016CFB8  4B F6 8E 3D */	bl __ct__14zNPCGoalCommonFi
/* 801701BC 0016CFBC  3C 80 80 2A */	lis r4, lbl___vt__23zNPCGoalBPlanktonMissle@ha
/* 801701C0 0016CFC0  7F C3 F3 78 */	mr r3, r30
/* 801701C4 0016CFC4  38 04 B0 94 */	addi r0, r4, lbl___vt__23zNPCGoalBPlanktonMissle@l
/* 801701C8 0016CFC8  90 1E 00 38 */	stw r0, 0x38(r30)
/* 801701CC 0016CFCC  93 FE 00 4C */	stw r31, 0x4c(r30)
/* 801701D0 0016CFD0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801701D4 0016CFD4  83 C1 00 08 */	lwz r30, 8(r1)
/* 801701D8 0016CFD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801701DC 0016CFDC  7C 08 03 A6 */	mtlr r0
/* 801701E0 0016CFE0  38 21 00 10 */	addi r1, r1, 0x10
/* 801701E4 0016CFE4  4E 80 00 20 */	blr 

.global __ct__21zNPCGoalBPlanktonBombFiR13zNPCBPlankton
__ct__21zNPCGoalBPlanktonBombFiR13zNPCBPlankton:
/* 801701E8 0016CFE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801701EC 0016CFEC  7C 08 02 A6 */	mflr r0
/* 801701F0 0016CFF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801701F4 0016CFF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801701F8 0016CFF8  7C BF 2B 78 */	mr r31, r5
/* 801701FC 0016CFFC  93 C1 00 08 */	stw r30, 8(r1)
/* 80170200 0016D000  7C 7E 1B 78 */	mr r30, r3
/* 80170204 0016D004  4B F6 8D F1 */	bl __ct__14zNPCGoalCommonFi
/* 80170208 0016D008  3C 80 80 2A */	lis r4, lbl___vt__21zNPCGoalBPlanktonBomb@ha
/* 8017020C 0016D00C  7F C3 F3 78 */	mr r3, r30
/* 80170210 0016D010  38 04 B0 60 */	addi r0, r4, lbl___vt__21zNPCGoalBPlanktonBomb@l
/* 80170214 0016D014  90 1E 00 38 */	stw r0, 0x38(r30)
/* 80170218 0016D018  93 FE 00 4C */	stw r31, 0x4c(r30)
/* 8017021C 0016D01C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80170220 0016D020  83 C1 00 08 */	lwz r30, 8(r1)
/* 80170224 0016D024  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80170228 0016D028  7C 08 03 A6 */	mtlr r0
/* 8017022C 0016D02C  38 21 00 10 */	addi r1, r1, 0x10
/* 80170230 0016D030  4E 80 00 20 */	blr 
/* 80170234 0016D034  38 60 00 00 */	li r3, 0
/* 80170238 0016D038  4E 80 00 20 */	blr 
/* 8017023C 0016D03C  38 60 00 00 */	li r3, 0
/* 80170240 0016D040  4E 80 00 20 */	blr 
/* 80170244 0016D044  38 60 00 10 */	li r3, 0x10
/* 80170248 0016D048  4E 80 00 20 */	blr 
/* 8017024C 0016D04C  38 60 00 10 */	li r3, 0x10
/* 80170250 0016D050  4E 80 00 20 */	blr 
/* 80170254 0016D054  38 60 00 03 */	li r3, 3
/* 80170258 0016D058  4E 80 00 20 */	blr 
/* 8017025C 0016D05C  38 60 00 01 */	li r3, 1
/* 80170260 0016D060  4E 80 00 20 */	blr 

.global visible__17xLaserBoltEmitterCFv
visible__17xLaserBoltEmitterCFv:
/* 80170264 0016D064  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80170268 0016D068  7C 08 02 A6 */	mflr r0
/* 8017026C 0016D06C  38 63 00 3C */	addi r3, r3, 0x3c
/* 80170270 0016D070  90 01 00 14 */	stw r0, 0x14(r1)
/* 80170274 0016D074  48 00 00 21 */	bl empty__40static_queue_Q217xLaserBoltEmitter4bolt_CFv
/* 80170278 0016D078  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8017027C 0016D07C  7C 00 00 34 */	cntlzw r0, r0
/* 80170280 0016D080  54 03 D9 7E */	srwi r3, r0, 5
/* 80170284 0016D084  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80170288 0016D088  7C 08 03 A6 */	mtlr r0
/* 8017028C 0016D08C  38 21 00 10 */	addi r1, r1, 0x10
/* 80170290 0016D090  4E 80 00 20 */	blr 

.global empty__40static_queue_Q217xLaserBoltEmitter4bolt_CFv
empty__40static_queue_Q217xLaserBoltEmitter4bolt_CFv:
/* 80170294 0016D094  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80170298 0016D098  7C 08 02 A6 */	mflr r0
/* 8017029C 0016D09C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801702A0 0016D0A0  48 00 00 1D */	bl size__40static_queue_Q217xLaserBoltEmitter4bolt_CFv
/* 801702A4 0016D0A4  7C 60 00 34 */	cntlzw r0, r3
/* 801702A8 0016D0A8  54 03 D9 7E */	srwi r3, r0, 5
/* 801702AC 0016D0AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801702B0 0016D0B0  7C 08 03 A6 */	mtlr r0
/* 801702B4 0016D0B4  38 21 00 10 */	addi r1, r1, 0x10
/* 801702B8 0016D0B8  4E 80 00 20 */	blr 

.global size__40static_queue_Q217xLaserBoltEmitter4bolt_CFv
size__40static_queue_Q217xLaserBoltEmitter4bolt_CFv:
/* 801702BC 0016D0BC  80 63 00 04 */	lwz r3, 4(r3)
/* 801702C0 0016D0C0  4E 80 00 20 */	blr 

.global __dv__5xVec2CFf
__dv__5xVec2CFf:
/* 801702C4 0016D0C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801702C8 0016D0C8  7C 08 02 A6 */	mflr r0
/* 801702CC 0016D0CC  80 83 00 00 */	lwz r4, 0(r3)
/* 801702D0 0016D0D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801702D4 0016D0D4  80 03 00 04 */	lwz r0, 4(r3)
/* 801702D8 0016D0D8  38 61 00 08 */	addi r3, r1, 8
/* 801702DC 0016D0DC  90 81 00 08 */	stw r4, 8(r1)
/* 801702E0 0016D0E0  90 01 00 0C */	stw r0, 0xc(r1)
/* 801702E4 0016D0E4  4B EC 65 51 */	bl __adv__5xVec2Ff
/* 801702E8 0016D0E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801702EC 0016D0EC  80 61 00 08 */	lwz r3, 8(r1)
/* 801702F0 0016D0F0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801702F4 0016D0F4  7C 08 03 A6 */	mtlr r0
/* 801702F8 0016D0F8  38 21 00 10 */	addi r1, r1, 0x10
/* 801702FC 0016D0FC  4E 80 00 20 */	blr 

.global zNPCTypeBossPlankton.load_param_i_i___10auto_tweakFRiiiiP16xModelAssetParamUiPCc
zNPCTypeBossPlankton.load_param_i_i___10auto_tweakFRiiiiP16xModelAssetParamUiPCc:
/* 80170300 0016D100  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80170304 0016D104  7C 08 02 A6 */	mflr r0
/* 80170308 0016D108  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017030C 0016D10C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80170310 0016D110  7C DF 33 78 */	mr r31, r6
/* 80170314 0016D114  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80170318 0016D118  7C BE 2B 78 */	mr r30, r5
/* 8017031C 0016D11C  7D 25 4B 78 */	mr r5, r9
/* 80170320 0016D120  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80170324 0016D124  7C 9D 23 78 */	mr r29, r4
/* 80170328 0016D128  7D 04 43 78 */	mr r4, r8
/* 8017032C 0016D12C  93 81 00 10 */	stw r28, 0x10(r1)
/* 80170330 0016D130  7C 7C 1B 78 */	mr r28, r3
/* 80170334 0016D134  80 C3 00 00 */	lwz r6, 0(r3)
/* 80170338 0016D138  7C E3 3B 78 */	mr r3, r7
/* 8017033C 0016D13C  4B EE 5C C9 */	bl zParamGetInt__FP16xModelAssetParamUiPCci
/* 80170340 0016D140  7C 03 F0 00 */	cmpw r3, r30
/* 80170344 0016D144  40 80 00 0C */	bge lbl_80170350
/* 80170348 0016D148  7F C3 F3 78 */	mr r3, r30
/* 8017034C 0016D14C  48 00 00 10 */	b lbl_8017035C
lbl_80170350:
/* 80170350 0016D150  7C 03 F8 00 */	cmpw r3, r31
/* 80170354 0016D154  40 81 00 08 */	ble lbl_8017035C
/* 80170358 0016D158  7F E3 FB 78 */	mr r3, r31
lbl_8017035C:
/* 8017035C 0016D15C  7C 63 E9 D6 */	mullw r3, r3, r29
/* 80170360 0016D160  90 7C 00 00 */	stw r3, 0(r28)
/* 80170364 0016D164  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80170368 0016D168  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8017036C 0016D16C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80170370 0016D170  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80170374 0016D174  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80170378 0016D178  7C 08 03 A6 */	mtlr r0
/* 8017037C 0016D17C  38 21 00 20 */	addi r1, r1, 0x20
/* 80170380 0016D180  4E 80 00 20 */	blr 

.global zNPCTypeBossPlankton.load_param_5xVec3_i___10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc
zNPCTypeBossPlankton.load_param_5xVec3_i___10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc:
/* 80170384 0016D184  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80170388 0016D188  7C 08 02 A6 */	mflr r0
/* 8017038C 0016D18C  7C 6A 1B 78 */	mr r10, r3
/* 80170390 0016D190  7D 04 43 78 */	mr r4, r8
/* 80170394 0016D194  90 01 00 24 */	stw r0, 0x24(r1)
/* 80170398 0016D198  38 C1 00 08 */	addi r6, r1, 8
/* 8017039C 0016D19C  80 A3 00 00 */	lwz r5, 0(r3)
/* 801703A0 0016D1A0  80 03 00 04 */	lwz r0, 4(r3)
/* 801703A4 0016D1A4  7C E3 3B 78 */	mr r3, r7
/* 801703A8 0016D1A8  7D 47 53 78 */	mr r7, r10
/* 801703AC 0016D1AC  90 A1 00 08 */	stw r5, 8(r1)
/* 801703B0 0016D1B0  7D 25 4B 78 */	mr r5, r9
/* 801703B4 0016D1B4  90 01 00 0C */	stw r0, 0xc(r1)
/* 801703B8 0016D1B8  80 0A 00 08 */	lwz r0, 8(r10)
/* 801703BC 0016D1BC  90 01 00 10 */	stw r0, 0x10(r1)
/* 801703C0 0016D1C0  4B EE 5E 4D */	bl zParamGetVector__FP16xModelAssetParamUiPCc5xVec3P5xVec3
/* 801703C4 0016D1C4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801703C8 0016D1C8  7C 08 03 A6 */	mtlr r0
/* 801703CC 0016D1CC  38 21 00 20 */	addi r1, r1, 0x20
/* 801703D0 0016D1D0  4E 80 00 20 */	blr 

.global zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc
zNPCTypeBossPlankton.load_param_f_f___10auto_tweakFRffffP16xModelAssetParamUiPCc:
/* 801703D4 0016D1D4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801703D8 0016D1D8  7C 08 02 A6 */	mflr r0
/* 801703DC 0016D1DC  90 01 00 44 */	stw r0, 0x44(r1)
/* 801703E0 0016D1E0  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 801703E4 0016D1E4  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 801703E8 0016D1E8  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 801703EC 0016D1EC  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 801703F0 0016D1F0  DB A1 00 10 */	stfd f29, 0x10(r1)
/* 801703F4 0016D1F4  F3 A1 00 18 */	psq_st f29, 24(r1), 0, qr0
/* 801703F8 0016D1F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801703FC 0016D1FC  FF A0 08 90 */	fmr f29, f1
/* 80170400 0016D200  C0 23 00 00 */	lfs f1, 0(r3)
/* 80170404 0016D204  FF C0 10 90 */	fmr f30, f2
/* 80170408 0016D208  7C 7F 1B 78 */	mr r31, r3
/* 8017040C 0016D20C  7C 83 23 78 */	mr r3, r4
/* 80170410 0016D210  7C A4 2B 78 */	mr r4, r5
/* 80170414 0016D214  FF E0 18 90 */	fmr f31, f3
/* 80170418 0016D218  7C C5 33 78 */	mr r5, r6
/* 8017041C 0016D21C  4B EE 5C 4D */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 80170420 0016D220  D0 3F 00 00 */	stfs f1, 0(r31)
/* 80170424 0016D224  C0 1F 00 00 */	lfs f0, 0(r31)
/* 80170428 0016D228  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 8017042C 0016D22C  40 80 00 0C */	bge lbl_80170438
/* 80170430 0016D230  D3 DF 00 00 */	stfs f30, 0(r31)
/* 80170434 0016D234  48 00 00 10 */	b lbl_80170444
lbl_80170438:
/* 80170438 0016D238  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 8017043C 0016D23C  40 81 00 08 */	ble lbl_80170444
/* 80170440 0016D240  D3 FF 00 00 */	stfs f31, 0(r31)
lbl_80170444:
/* 80170444 0016D244  C0 1F 00 00 */	lfs f0, 0(r31)
/* 80170448 0016D248  EC 00 07 72 */	fmuls f0, f0, f29
/* 8017044C 0016D24C  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80170450 0016D250  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 80170454 0016D254  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80170458 0016D258  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 8017045C 0016D25C  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 80170460 0016D260  E3 A1 00 18 */	psq_l f29, 24(r1), 0, qr0
/* 80170464 0016D264  CB A1 00 10 */	lfd f29, 0x10(r1)
/* 80170468 0016D268  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8017046C 0016D26C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80170470 0016D270  7C 08 03 A6 */	mtlr r0
/* 80170474 0016D274  38 21 00 40 */	addi r1, r1, 0x40
/* 80170478 0016D278  4E 80 00 20 */	blr 
