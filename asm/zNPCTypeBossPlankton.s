.include "macros.inc"
.file "zNPCTypeBossPlankton.cpp"

# 0x80168A94 - 0x8016FBB8
.text
.balign 4

# @unnamed@zNPCTypeBossPlankton_cpp@::get_player_loc()
.fn "get_player_loc__34@unnamed@zNPCTypeBossPlankton_cpp@Fv", local
/* 80168A94 00165B74  3C 60 80 3C */	lis r3, globals@ha
/* 80168A98 00165B78  38 63 05 58 */	addi r3, r3, globals@l
/* 80168A9C 00165B7C  80 63 07 04 */	lwz r3, 0x704(r3)
/* 80168AA0 00165B80  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80168AA4 00165B84  38 63 00 30 */	addi r3, r3, 0x30
/* 80168AA8 00165B88  4E 80 00 20 */	blr
.endfn "get_player_loc__34@unnamed@zNPCTypeBossPlankton_cpp@Fv"

# @unnamed@zNPCTypeBossPlankton_cpp@::init_sound()
.fn "init_sound__34@unnamed@zNPCTypeBossPlankton_cpp@Fv", local
/* 80168AAC 00165B8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80168AB0 00165B90  7C 08 02 A6 */	mflr r0
/* 80168AB4 00165B94  3C 60 80 33 */	lis r3, ...bss.0@ha
/* 80168AB8 00165B98  38 80 00 00 */	li r4, 0x0
/* 80168ABC 00165B9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80168AC0 00165BA0  38 A0 00 18 */	li r5, 0x18
/* 80168AC4 00165BA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80168AC8 00165BA8  3B E3 9F 48 */	addi r31, r3, ...bss.0@l
/* 80168ACC 00165BAC  38 7F 01 E0 */	addi r3, r31, 0x1e0
/* 80168AD0 00165BB0  4B E9 A9 89 */	bl memset
/* 80168AD4 00165BB4  3C 60 80 27 */	lis r3, "sound_assets__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 80168AD8 00165BB8  38 00 00 1D */	li r0, 0x1d
/* 80168ADC 00165BBC  39 03 11 0C */	addi r8, r3, "sound_assets__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 80168AE0 00165BC0  39 7F 01 E0 */	addi r11, r31, 0x1e0
/* 80168AE4 00165BC4  38 DF 00 00 */	addi r6, r31, 0x0
/* 80168AE8 00165BC8  38 7F 00 F0 */	addi r3, r31, 0xf0
/* 80168AEC 00165BCC  39 40 00 00 */	li r10, 0x0
/* 80168AF0 00165BD0  7C 09 03 A6 */	mtctr r0
.L_80168AF4:
/* 80168AF4 00165BD4  81 28 00 04 */	lwz r9, 0x4(r8)
/* 80168AF8 00165BD8  28 09 00 00 */	cmplwi r9, 0x0
/* 80168AFC 00165BDC  41 82 00 2C */	beq .L_80168B28
/* 80168B00 00165BE0  80 08 00 00 */	lwz r0, 0x0(r8)
/* 80168B04 00165BE4  54 07 10 3A */	slwi r7, r0, 2
/* 80168B08 00165BE8  7C AB 38 2E */	lwzx r5, r11, r7
/* 80168B0C 00165BEC  1C 80 00 28 */	mulli r4, r0, 0x28
/* 80168B10 00165BF0  54 A0 10 3A */	slwi r0, r5, 2
/* 80168B14 00165BF4  7C 84 02 14 */	add r4, r4, r0
/* 80168B18 00165BF8  38 05 00 01 */	addi r0, r5, 0x1
/* 80168B1C 00165BFC  7D 26 21 2E */	stwx r9, r6, r4
/* 80168B20 00165C00  7D 43 21 2E */	stwx r10, r3, r4
/* 80168B24 00165C04  7C 0B 39 2E */	stwx r0, r11, r7
.L_80168B28:
/* 80168B28 00165C08  39 08 00 10 */	addi r8, r8, 0x10
/* 80168B2C 00165C0C  39 4A 00 01 */	addi r10, r10, 0x1
/* 80168B30 00165C10  42 00 FF C4 */	bdnz .L_80168AF4
/* 80168B34 00165C14  38 7F 01 F8 */	addi r3, r31, 0x1f8
/* 80168B38 00165C18  38 80 00 00 */	li r4, 0x0
/* 80168B3C 00165C1C  38 A0 00 60 */	li r5, 0x60
/* 80168B40 00165C20  4B E9 A9 19 */	bl memset
/* 80168B44 00165C24  38 00 00 00 */	li r0, 0x0
/* 80168B48 00165C28  38 7F 01 F8 */	addi r3, r31, 0x1f8
/* 80168B4C 00165C2C  90 1F 01 F8 */	stw r0, 0x1f8(r31)
/* 80168B50 00165C30  90 03 00 04 */	stw r0, 0x4(r3)
/* 80168B54 00165C34  90 03 00 10 */	stw r0, 0x10(r3)
/* 80168B58 00165C38  90 03 00 14 */	stw r0, 0x14(r3)
/* 80168B5C 00165C3C  90 03 00 20 */	stw r0, 0x20(r3)
/* 80168B60 00165C40  90 03 00 24 */	stw r0, 0x24(r3)
/* 80168B64 00165C44  90 03 00 30 */	stw r0, 0x30(r3)
/* 80168B68 00165C48  90 03 00 34 */	stw r0, 0x34(r3)
/* 80168B6C 00165C4C  90 03 00 40 */	stw r0, 0x40(r3)
/* 80168B70 00165C50  90 03 00 44 */	stw r0, 0x44(r3)
/* 80168B74 00165C54  90 03 00 50 */	stw r0, 0x50(r3)
/* 80168B78 00165C58  90 03 00 54 */	stw r0, 0x54(r3)
/* 80168B7C 00165C5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80168B80 00165C60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80168B84 00165C64  7C 08 03 A6 */	mtlr r0
/* 80168B88 00165C68  38 21 00 10 */	addi r1, r1, 0x10
/* 80168B8C 00165C6C  4E 80 00 20 */	blr
.endfn "init_sound__34@unnamed@zNPCTypeBossPlankton_cpp@Fv"

# @unnamed@zNPCTypeBossPlankton_cpp@::reset_sound()
.fn "reset_sound__34@unnamed@zNPCTypeBossPlankton_cpp@Fv", local
/* 80168B90 00165C70  3C 60 80 33 */	lis r3, "sound_data__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 80168B94 00165C74  38 00 00 00 */	li r0, 0x0
/* 80168B98 00165C78  38 63 A1 40 */	addi r3, r3, "sound_data__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 80168B9C 00165C7C  90 03 00 04 */	stw r0, 0x4(r3)
/* 80168BA0 00165C80  90 03 00 14 */	stw r0, 0x14(r3)
/* 80168BA4 00165C84  90 03 00 24 */	stw r0, 0x24(r3)
/* 80168BA8 00165C88  90 03 00 34 */	stw r0, 0x34(r3)
/* 80168BAC 00165C8C  90 03 00 44 */	stw r0, 0x44(r3)
/* 80168BB0 00165C90  90 03 00 54 */	stw r0, 0x54(r3)
/* 80168BB4 00165C94  4E 80 00 20 */	blr
.endfn "reset_sound__34@unnamed@zNPCTypeBossPlankton_cpp@Fv"

# @unnamed@zNPCTypeBossPlankton_cpp@::play_sound(int, const xVec3*, float)
.fn "play_sound__34@unnamed@zNPCTypeBossPlankton_cpp@FiPC5xVec3f", local
/* 80168BB8 00165C98  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80168BBC 00165C9C  7C 08 02 A6 */	mflr r0
/* 80168BC0 00165CA0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80168BC4 00165CA4  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80168BC8 00165CA8  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 80168BCC 00165CAC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80168BD0 00165CB0  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80168BD4 00165CB4  1C E3 00 18 */	mulli r7, r3, 0x18
/* 80168BD8 00165CB8  3C C0 80 33 */	lis r6, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 80168BDC 00165CBC  3C A0 80 27 */	lis r5, "sound_assets__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 80168BE0 00165CC0  FF E0 08 90 */	fmr f31, f1
/* 80168BE4 00165CC4  38 06 A1 A0 */	addi r0, r6, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 80168BE8 00165CC8  7C C0 3A 14 */	add r6, r0, r7
/* 80168BEC 00165CCC  39 26 01 54 */	addi r9, r6, 0x154
/* 80168BF0 00165CD0  80 C6 01 54 */	lwz r6, 0x154(r6)
/* 80168BF4 00165CD4  54 68 20 36 */	slwi r8, r3, 4
/* 80168BF8 00165CD8  3C E0 80 33 */	lis r7, "sound_data__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 80168BFC 00165CDC  38 05 11 0C */	addi r0, r5, "sound_assets__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 80168C00 00165CE0  54 C3 20 36 */	slwi r3, r6, 4
/* 80168C04 00165CE4  38 A7 A1 40 */	addi r5, r7, "sound_data__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 80168C08 00165CE8  7C 9E 23 78 */	mr r30, r4
/* 80168C0C 00165CEC  7C E0 1A 14 */	add r7, r0, r3
/* 80168C10 00165CF0  80 87 00 0C */	lwz r4, 0xc(r7)
/* 80168C14 00165CF4  7F E5 42 14 */	add r31, r5, r8
/* 80168C18 00165CF8  54 80 07 BD */	rlwinm. r0, r4, 0, 30, 30
/* 80168C1C 00165CFC  41 82 00 14 */	beq .L_80168C30
/* 80168C20 00165D00  80 7F 00 04 */	lwz r3, 0x4(r31)
/* 80168C24 00165D04  28 03 00 00 */	cmplwi r3, 0x0
/* 80168C28 00165D08  41 82 00 08 */	beq .L_80168C30
/* 80168C2C 00165D0C  48 00 00 88 */	b .L_80168CB4
.L_80168C30:
/* 80168C30 00165D10  54 80 07 FF */	clrlwi. r0, r4, 31
/* 80168C34 00165D14  41 82 00 40 */	beq .L_80168C74
/* 80168C38 00165D18  C0 09 00 04 */	lfs f0, 0x4(r9)
/* 80168C3C 00165D1C  7F C6 F3 78 */	mr r6, r30
/* 80168C40 00165D20  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 80168C44 00165D24  38 A0 08 00 */	li r5, 0x800
/* 80168C48 00165D28  EC 3F 00 32 */	fmuls f1, f31, f0
/* 80168C4C 00165D2C  C0 42 AB 0C */	lfs f2, "@1585"@sda21(r2)
/* 80168C50 00165D30  80 87 00 08 */	lwz r4, 0x8(r7)
/* 80168C54 00165D34  38 E0 00 00 */	li r7, 0x0
/* 80168C58 00165D38  C0 69 00 08 */	lfs f3, 0x8(r9)
/* 80168C5C 00165D3C  C0 89 00 0C */	lfs f4, 0xc(r9)
/* 80168C60 00165D40  C0 A2 AB 10 */	lfs f5, "@1586"@sda21(r2)
/* 80168C64 00165D44  C0 C9 00 10 */	lfs f6, 0x10(r9)
/* 80168C68 00165D48  4B EE 09 05 */	bl xSndPlay3DFade__FUiffUiUiPC5xVec3ff14sound_categoryff
/* 80168C6C 00165D4C  90 7F 00 04 */	stw r3, 0x4(r31)
/* 80168C70 00165D50  48 00 00 38 */	b .L_80168CA8
.L_80168C74:
/* 80168C74 00165D54  C0 09 00 04 */	lfs f0, 0x4(r9)
/* 80168C78 00165D58  7F C6 F3 78 */	mr r6, r30
/* 80168C7C 00165D5C  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 80168C80 00165D60  38 A0 08 00 */	li r5, 0x800
/* 80168C84 00165D64  EC 3F 00 32 */	fmuls f1, f31, f0
/* 80168C88 00165D68  C0 42 AB 0C */	lfs f2, "@1585"@sda21(r2)
/* 80168C8C 00165D6C  80 87 00 08 */	lwz r4, 0x8(r7)
/* 80168C90 00165D70  38 E0 00 00 */	li r7, 0x0
/* 80168C94 00165D74  C0 69 00 08 */	lfs f3, 0x8(r9)
/* 80168C98 00165D78  C0 89 00 0C */	lfs f4, 0xc(r9)
/* 80168C9C 00165D7C  C0 A9 00 10 */	lfs f5, 0x10(r9)
/* 80168CA0 00165D80  4B ED FD F5 */	bl xSndPlay3D__FUiffUiUiPC5xVec3ff14sound_categoryf
/* 80168CA4 00165D84  90 7F 00 04 */	stw r3, 0x4(r31)
.L_80168CA8:
/* 80168CA8 00165D88  93 DF 00 08 */	stw r30, 0x8(r31)
/* 80168CAC 00165D8C  D3 FF 00 0C */	stfs f31, 0xc(r31)
/* 80168CB0 00165D90  80 7F 00 04 */	lwz r3, 0x4(r31)
.L_80168CB4:
/* 80168CB4 00165D94  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 80168CB8 00165D98  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80168CBC 00165D9C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80168CC0 00165DA0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80168CC4 00165DA4  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80168CC8 00165DA8  7C 08 03 A6 */	mtlr r0
/* 80168CCC 00165DAC  38 21 00 20 */	addi r1, r1, 0x20
/* 80168CD0 00165DB0  4E 80 00 20 */	blr
.endfn "play_sound__34@unnamed@zNPCTypeBossPlankton_cpp@FiPC5xVec3f"

# @unnamed@zNPCTypeBossPlankton_cpp@::kill_sound(int, unsigned int)
.fn "kill_sound__34@unnamed@zNPCTypeBossPlankton_cpp@FiUi", local
/* 80168CD4 00165DB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80168CD8 00165DB8  7C 08 02 A6 */	mflr r0
/* 80168CDC 00165DBC  1C E3 00 18 */	mulli r7, r3, 0x18
/* 80168CE0 00165DC0  3C C0 80 33 */	lis r6, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 80168CE4 00165DC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80168CE8 00165DC8  3C A0 80 27 */	lis r5, "sound_assets__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 80168CEC 00165DCC  38 06 A1 A0 */	addi r0, r6, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 80168CF0 00165DD0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80168CF4 00165DD4  7C C0 3A 14 */	add r6, r0, r7
/* 80168CF8 00165DD8  38 05 11 0C */	addi r0, r5, "sound_assets__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 80168CFC 00165DDC  80 A6 01 54 */	lwz r5, 0x154(r6)
/* 80168D00 00165DE0  54 68 20 36 */	slwi r8, r3, 4
/* 80168D04 00165DE4  3C E0 80 33 */	lis r7, "sound_data__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 80168D08 00165DE8  39 26 01 54 */	addi r9, r6, 0x154
/* 80168D0C 00165DEC  54 A3 20 36 */	slwi r3, r5, 4
/* 80168D10 00165DF0  7C 60 1A 14 */	add r3, r0, r3
/* 80168D14 00165DF4  38 C7 A1 40 */	addi r6, r7, "sound_data__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 80168D18 00165DF8  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80168D1C 00165DFC  7F E6 42 14 */	add r31, r6, r8
/* 80168D20 00165E00  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80168D24 00165E04  41 82 00 14 */	beq .L_80168D38
/* 80168D28 00165E08  C0 29 00 14 */	lfs f1, 0x14(r9)
/* 80168D2C 00165E0C  7C 83 23 78 */	mr r3, r4
/* 80168D30 00165E10  4B EE 09 15 */	bl xSndStopFade__FUif
/* 80168D34 00165E14  48 00 00 0C */	b .L_80168D40
.L_80168D38:
/* 80168D38 00165E18  7C 83 23 78 */	mr r3, r4
/* 80168D3C 00165E1C  4B EE 04 C5 */	bl xSndStop__FUi
.L_80168D40:
/* 80168D40 00165E20  38 00 00 00 */	li r0, 0x0
/* 80168D44 00165E24  90 1F 00 04 */	stw r0, 0x4(r31)
/* 80168D48 00165E28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80168D4C 00165E2C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80168D50 00165E30  7C 08 03 A6 */	mtlr r0
/* 80168D54 00165E34  38 21 00 10 */	addi r1, r1, 0x10
/* 80168D58 00165E38  4E 80 00 20 */	blr
.endfn "kill_sound__34@unnamed@zNPCTypeBossPlankton_cpp@FiUi"

# @unnamed@zNPCTypeBossPlankton_cpp@::kill_sound(int)
.fn "kill_sound__34@unnamed@zNPCTypeBossPlankton_cpp@Fi", local
/* 80168D5C 00165E3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80168D60 00165E40  7C 08 02 A6 */	mflr r0
/* 80168D64 00165E44  3C 80 80 33 */	lis r4, "sound_data__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 80168D68 00165E48  54 65 20 36 */	slwi r5, r3, 4
/* 80168D6C 00165E4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80168D70 00165E50  38 04 A1 40 */	addi r0, r4, "sound_data__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 80168D74 00165E54  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80168D78 00165E58  7F E0 2A 14 */	add r31, r0, r5
/* 80168D7C 00165E5C  80 DF 00 04 */	lwz r6, 0x4(r31)
/* 80168D80 00165E60  28 06 00 00 */	cmplwi r6, 0x0
/* 80168D84 00165E64  41 82 00 54 */	beq .L_80168DD8
/* 80168D88 00165E68  1C A3 00 18 */	mulli r5, r3, 0x18
/* 80168D8C 00165E6C  3C 80 80 33 */	lis r4, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 80168D90 00165E70  3C 60 80 27 */	lis r3, "sound_assets__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 80168D94 00165E74  38 04 A1 A0 */	addi r0, r4, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 80168D98 00165E78  7C 80 2A 14 */	add r4, r0, r5
/* 80168D9C 00165E7C  38 03 11 0C */	addi r0, r3, "sound_assets__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 80168DA0 00165E80  84 64 01 54 */	lwzu r3, 0x154(r4)
/* 80168DA4 00165E84  54 63 20 36 */	slwi r3, r3, 4
/* 80168DA8 00165E88  7C 60 1A 14 */	add r3, r0, r3
/* 80168DAC 00165E8C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80168DB0 00165E90  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80168DB4 00165E94  41 82 00 14 */	beq .L_80168DC8
/* 80168DB8 00165E98  C0 24 00 14 */	lfs f1, 0x14(r4)
/* 80168DBC 00165E9C  7C C3 33 78 */	mr r3, r6
/* 80168DC0 00165EA0  4B EE 08 85 */	bl xSndStopFade__FUif
/* 80168DC4 00165EA4  48 00 00 0C */	b .L_80168DD0
.L_80168DC8:
/* 80168DC8 00165EA8  7C C3 33 78 */	mr r3, r6
/* 80168DCC 00165EAC  4B EE 04 35 */	bl xSndStop__FUi
.L_80168DD0:
/* 80168DD0 00165EB0  38 00 00 00 */	li r0, 0x0
/* 80168DD4 00165EB4  90 1F 00 04 */	stw r0, 0x4(r31)
.L_80168DD8:
/* 80168DD8 00165EB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80168DDC 00165EBC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80168DE0 00165EC0  7C 08 03 A6 */	mtlr r0
/* 80168DE4 00165EC4  38 21 00 10 */	addi r1, r1, 0x10
/* 80168DE8 00165EC8  4E 80 00 20 */	blr
.endfn "kill_sound__34@unnamed@zNPCTypeBossPlankton_cpp@Fi"

# @unnamed@zNPCTypeBossPlankton_cpp@::play_beam_fly_sound(xLaserBoltEmitter::bolt&, void*)
.fn "play_beam_fly_sound__34@unnamed@zNPCTypeBossPlankton_cpp@FRQ217xLaserBoltEmitter4boltPv", local
/* 80168DEC 00165ECC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80168DF0 00165ED0  7C 08 02 A6 */	mflr r0
/* 80168DF4 00165ED4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80168DF8 00165ED8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80168DFC 00165EDC  7C 7F 1B 78 */	mr r31, r3
/* 80168E00 00165EE0  80 03 00 48 */	lwz r0, 0x48(r3)
/* 80168E04 00165EE4  28 00 00 00 */	cmplwi r0, 0x0
/* 80168E08 00165EE8  40 82 00 18 */	bne .L_80168E20
/* 80168E0C 00165EEC  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 80168E10 00165EF0  38 9F 00 18 */	addi r4, r31, 0x18
/* 80168E14 00165EF4  38 60 00 03 */	li r3, 0x3
/* 80168E18 00165EF8  4B FF FD A1 */	bl "play_sound__34@unnamed@zNPCTypeBossPlankton_cpp@FiPC5xVec3f"
/* 80168E1C 00165EFC  90 7F 00 48 */	stw r3, 0x48(r31)
.L_80168E20:
/* 80168E20 00165F00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80168E24 00165F04  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80168E28 00165F08  7C 08 03 A6 */	mtlr r0
/* 80168E2C 00165F0C  38 21 00 10 */	addi r1, r1, 0x10
/* 80168E30 00165F10  4E 80 00 20 */	blr
.endfn "play_beam_fly_sound__34@unnamed@zNPCTypeBossPlankton_cpp@FRQ217xLaserBoltEmitter4boltPv"

# @unnamed@zNPCTypeBossPlankton_cpp@::kill_beam_fly_sound(xLaserBoltEmitter::bolt&, void*)
.fn "kill_beam_fly_sound__34@unnamed@zNPCTypeBossPlankton_cpp@FRQ217xLaserBoltEmitter4boltPv", local
/* 80168E34 00165F14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80168E38 00165F18  7C 08 02 A6 */	mflr r0
/* 80168E3C 00165F1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80168E40 00165F20  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80168E44 00165F24  7C 7F 1B 78 */	mr r31, r3
/* 80168E48 00165F28  80 83 00 48 */	lwz r4, 0x48(r3)
/* 80168E4C 00165F2C  28 04 00 00 */	cmplwi r4, 0x0
/* 80168E50 00165F30  41 82 00 14 */	beq .L_80168E64
/* 80168E54 00165F34  38 60 00 03 */	li r3, 0x3
/* 80168E58 00165F38  4B FF FE 7D */	bl "kill_sound__34@unnamed@zNPCTypeBossPlankton_cpp@FiUi"
/* 80168E5C 00165F3C  38 00 00 00 */	li r0, 0x0
/* 80168E60 00165F40  90 1F 00 48 */	stw r0, 0x48(r31)
.L_80168E64:
/* 80168E64 00165F44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80168E68 00165F48  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80168E6C 00165F4C  7C 08 03 A6 */	mtlr r0
/* 80168E70 00165F50  38 21 00 10 */	addi r1, r1, 0x10
/* 80168E74 00165F54  4E 80 00 20 */	blr
.endfn "kill_beam_fly_sound__34@unnamed@zNPCTypeBossPlankton_cpp@FRQ217xLaserBoltEmitter4boltPv"

# @unnamed@zNPCTypeBossPlankton_cpp@::play_beam_fire_sound(xLaserBoltEmitter::bolt&, void*)
.fn "play_beam_fire_sound__34@unnamed@zNPCTypeBossPlankton_cpp@FRQ217xLaserBoltEmitter4boltPv", local
/* 80168E78 00165F58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80168E7C 00165F5C  7C 08 02 A6 */	mflr r0
/* 80168E80 00165F60  7C 64 1B 78 */	mr r4, r3
/* 80168E84 00165F64  38 60 00 02 */	li r3, 0x2
/* 80168E88 00165F68  90 01 00 14 */	stw r0, 0x14(r1)
/* 80168E8C 00165F6C  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 80168E90 00165F70  4B FF FD 29 */	bl "play_sound__34@unnamed@zNPCTypeBossPlankton_cpp@FiPC5xVec3f"
/* 80168E94 00165F74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80168E98 00165F78  7C 08 03 A6 */	mtlr r0
/* 80168E9C 00165F7C  38 21 00 10 */	addi r1, r1, 0x10
/* 80168EA0 00165F80  4E 80 00 20 */	blr
.endfn "play_beam_fire_sound__34@unnamed@zNPCTypeBossPlankton_cpp@FRQ217xLaserBoltEmitter4boltPv"

# @unnamed@zNPCTypeBossPlankton_cpp@::play_beam_hit_sound(xLaserBoltEmitter::bolt&, void*)
.fn "play_beam_hit_sound__34@unnamed@zNPCTypeBossPlankton_cpp@FRQ217xLaserBoltEmitter4boltPv", local
/* 80168EA4 00165F84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80168EA8 00165F88  7C 08 02 A6 */	mflr r0
/* 80168EAC 00165F8C  38 83 00 18 */	addi r4, r3, 0x18
/* 80168EB0 00165F90  38 60 00 04 */	li r3, 0x4
/* 80168EB4 00165F94  90 01 00 14 */	stw r0, 0x14(r1)
/* 80168EB8 00165F98  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 80168EBC 00165F9C  4B FF FC FD */	bl "play_sound__34@unnamed@zNPCTypeBossPlankton_cpp@FiPC5xVec3f"
/* 80168EC0 00165FA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80168EC4 00165FA4  7C 08 03 A6 */	mtlr r0
/* 80168EC8 00165FA8  38 21 00 10 */	addi r1, r1, 0x10
/* 80168ECC 00165FAC  4E 80 00 20 */	blr
.endfn "play_beam_hit_sound__34@unnamed@zNPCTypeBossPlankton_cpp@FRQ217xLaserBoltEmitter4boltPv"

# ZNPC_AnimTable_BossPlankton()
.fn ZNPC_AnimTable_BossPlankton__Fv, global
/* 80168ED0 00165FB0  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 80168ED4 00165FB4  7C 08 02 A6 */	mflr r0
/* 80168ED8 00165FB8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80168EDC 00165FBC  38 80 00 00 */	li r4, 0x0
/* 80168EE0 00165FC0  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 80168EE4 00165FC4  38 63 14 64 */	addi r3, r3, "@stringBase0"@l
/* 80168EE8 00165FC8  38 A0 00 00 */	li r5, 0x0
/* 80168EEC 00165FCC  BE 21 00 A4 */	stmw r17, 0xa4(r1)
/* 80168EF0 00165FD0  38 63 01 86 */	addi r3, r3, 0x186
/* 80168EF4 00165FD4  4B E9 DD 7D */	bl xAnimTableNew__FPCcPP10xAnimTableUi
/* 80168EF8 00165FD8  3A 20 00 00 */	li r17, 0x0
/* 80168EFC 00165FDC  3C A0 80 00 */	lis r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80168F00 00165FE0  56 20 10 3A */	slwi r0, r17, 2
/* 80168F04 00165FE4  38 C1 00 18 */	addi r6, r1, 0x18
/* 80168F08 00165FE8  38 E0 00 01 */	li r7, 0x1
/* 80168F0C 00165FEC  3C 80 80 2A */	lis r4, g_strz_bossanim@ha
/* 80168F10 00165FF0  7C E6 01 2E */	stwx r7, r6, r0
/* 80168F14 00165FF4  38 A5 6C FC */	addi r5, r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80168F18 00165FF8  38 00 00 00 */	li r0, 0x0
/* 80168F1C 00165FFC  38 84 93 A0 */	addi r4, r4, g_strz_bossanim@l
/* 80168F20 00166000  90 A1 00 08 */	stw r5, 0x8(r1)
/* 80168F24 00166004  7C 72 1B 78 */	mr r18, r3
/* 80168F28 00166008  38 A0 00 10 */	li r5, 0x10
/* 80168F2C 0016600C  38 C0 00 00 */	li r6, 0x0
/* 80168F30 00166010  90 01 00 0C */	stw r0, 0xc(r1)
/* 80168F34 00166014  38 E0 00 00 */	li r7, 0x0
/* 80168F38 00166018  39 00 00 00 */	li r8, 0x0
/* 80168F3C 0016601C  39 20 00 00 */	li r9, 0x0
/* 80168F40 00166020  90 01 00 10 */	stw r0, 0x10(r1)
/* 80168F44 00166024  39 40 00 00 */	li r10, 0x0
/* 80168F48 00166028  3A 20 00 01 */	li r17, 0x1
/* 80168F4C 0016602C  80 84 00 04 */	lwz r4, 0x4(r4)
/* 80168F50 00166030  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 80168F54 00166034  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 80168F58 00166038  4B E9 DE 01 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80168F5C 0016603C  56 20 10 3A */	slwi r0, r17, 2
/* 80168F60 00166040  38 81 00 18 */	addi r4, r1, 0x18
/* 80168F64 00166044  38 A0 00 03 */	li r5, 0x3
/* 80168F68 00166048  3C 60 80 00 */	lis r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80168F6C 0016604C  7C A4 01 2E */	stwx r5, r4, r0
/* 80168F70 00166050  38 83 6C FC */	addi r4, r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80168F74 00166054  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 80168F78 00166058  38 00 00 00 */	li r0, 0x0
/* 80168F7C 0016605C  90 81 00 08 */	stw r4, 0x8(r1)
/* 80168F80 00166060  3A 63 93 A0 */	addi r19, r3, g_strz_bossanim@l
/* 80168F84 00166064  7E 43 93 78 */	mr r3, r18
/* 80168F88 00166068  38 A0 00 20 */	li r5, 0x20
/* 80168F8C 0016606C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80168F90 00166070  38 C0 00 00 */	li r6, 0x0
/* 80168F94 00166074  38 E0 00 00 */	li r7, 0x0
/* 80168F98 00166078  39 00 00 00 */	li r8, 0x0
/* 80168F9C 0016607C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80168FA0 00166080  39 20 00 00 */	li r9, 0x0
/* 80168FA4 00166084  39 40 00 00 */	li r10, 0x0
/* 80168FA8 00166088  3A 20 00 02 */	li r17, 0x2
/* 80168FAC 0016608C  80 93 00 0C */	lwz r4, 0xc(r19)
/* 80168FB0 00166090  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 80168FB4 00166094  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 80168FB8 00166098  4B E9 DD A1 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80168FBC 0016609C  56 20 10 3A */	slwi r0, r17, 2
/* 80168FC0 001660A0  38 81 00 18 */	addi r4, r1, 0x18
/* 80168FC4 001660A4  38 A0 00 42 */	li r5, 0x42
/* 80168FC8 001660A8  3C 60 80 00 */	lis r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80168FCC 001660AC  7C A4 01 2E */	stwx r5, r4, r0
/* 80168FD0 001660B0  38 83 6C FC */	addi r4, r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80168FD4 001660B4  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 80168FD8 001660B8  38 00 00 00 */	li r0, 0x0
/* 80168FDC 001660BC  90 81 00 08 */	stw r4, 0x8(r1)
/* 80168FE0 001660C0  3A 83 93 A0 */	addi r20, r3, g_strz_bossanim@l
/* 80168FE4 001660C4  7E 43 93 78 */	mr r3, r18
/* 80168FE8 001660C8  38 A0 00 10 */	li r5, 0x10
/* 80168FEC 001660CC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80168FF0 001660D0  38 C0 00 00 */	li r6, 0x0
/* 80168FF4 001660D4  38 E0 00 00 */	li r7, 0x0
/* 80168FF8 001660D8  39 00 00 00 */	li r8, 0x0
/* 80168FFC 001660DC  90 01 00 10 */	stw r0, 0x10(r1)
/* 80169000 001660E0  39 20 00 00 */	li r9, 0x0
/* 80169004 001660E4  39 40 00 00 */	li r10, 0x0
/* 80169008 001660E8  3A 20 00 03 */	li r17, 0x3
/* 8016900C 001660EC  80 94 01 08 */	lwz r4, 0x108(r20)
/* 80169010 001660F0  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 80169014 001660F4  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 80169018 001660F8  4B E9 DD 41 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8016901C 001660FC  56 20 10 3A */	slwi r0, r17, 2
/* 80169020 00166100  38 81 00 18 */	addi r4, r1, 0x18
/* 80169024 00166104  38 A0 00 43 */	li r5, 0x43
/* 80169028 00166108  3C 60 80 00 */	lis r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8016902C 0016610C  7C A4 01 2E */	stwx r5, r4, r0
/* 80169030 00166110  38 83 6C FC */	addi r4, r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80169034 00166114  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 80169038 00166118  38 00 00 00 */	li r0, 0x0
/* 8016903C 0016611C  90 81 00 08 */	stw r4, 0x8(r1)
/* 80169040 00166120  3A A3 93 A0 */	addi r21, r3, g_strz_bossanim@l
/* 80169044 00166124  7E 43 93 78 */	mr r3, r18
/* 80169048 00166128  38 A0 00 20 */	li r5, 0x20
/* 8016904C 0016612C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169050 00166130  38 C0 00 00 */	li r6, 0x0
/* 80169054 00166134  38 E0 00 00 */	li r7, 0x0
/* 80169058 00166138  39 00 00 00 */	li r8, 0x0
/* 8016905C 0016613C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80169060 00166140  39 20 00 00 */	li r9, 0x0
/* 80169064 00166144  39 40 00 00 */	li r10, 0x0
/* 80169068 00166148  3A 20 00 04 */	li r17, 0x4
/* 8016906C 0016614C  80 95 01 0C */	lwz r4, 0x10c(r21)
/* 80169070 00166150  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 80169074 00166154  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 80169078 00166158  4B E9 DC E1 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8016907C 0016615C  56 20 10 3A */	slwi r0, r17, 2
/* 80169080 00166160  38 81 00 18 */	addi r4, r1, 0x18
/* 80169084 00166164  38 A0 00 44 */	li r5, 0x44
/* 80169088 00166168  3C 60 80 00 */	lis r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8016908C 0016616C  7C A4 01 2E */	stwx r5, r4, r0
/* 80169090 00166170  38 83 6C FC */	addi r4, r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80169094 00166174  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 80169098 00166178  38 00 00 00 */	li r0, 0x0
/* 8016909C 0016617C  90 81 00 08 */	stw r4, 0x8(r1)
/* 801690A0 00166180  3A C3 93 A0 */	addi r22, r3, g_strz_bossanim@l
/* 801690A4 00166184  7E 43 93 78 */	mr r3, r18
/* 801690A8 00166188  38 A0 00 10 */	li r5, 0x10
/* 801690AC 0016618C  90 01 00 0C */	stw r0, 0xc(r1)
/* 801690B0 00166190  38 C0 00 00 */	li r6, 0x0
/* 801690B4 00166194  38 E0 00 00 */	li r7, 0x0
/* 801690B8 00166198  39 00 00 00 */	li r8, 0x0
/* 801690BC 0016619C  90 01 00 10 */	stw r0, 0x10(r1)
/* 801690C0 001661A0  39 20 00 00 */	li r9, 0x0
/* 801690C4 001661A4  39 40 00 00 */	li r10, 0x0
/* 801690C8 001661A8  3A 20 00 05 */	li r17, 0x5
/* 801690CC 001661AC  80 96 01 10 */	lwz r4, 0x110(r22)
/* 801690D0 001661B0  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 801690D4 001661B4  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 801690D8 001661B8  4B E9 DC 81 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 801690DC 001661BC  56 20 10 3A */	slwi r0, r17, 2
/* 801690E0 001661C0  38 81 00 18 */	addi r4, r1, 0x18
/* 801690E4 001661C4  38 A0 00 45 */	li r5, 0x45
/* 801690E8 001661C8  3C 60 80 00 */	lis r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 801690EC 001661CC  7C A4 01 2E */	stwx r5, r4, r0
/* 801690F0 001661D0  38 83 6C FC */	addi r4, r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 801690F4 001661D4  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 801690F8 001661D8  38 00 00 00 */	li r0, 0x0
/* 801690FC 001661DC  90 81 00 08 */	stw r4, 0x8(r1)
/* 80169100 001661E0  3A E3 93 A0 */	addi r23, r3, g_strz_bossanim@l
/* 80169104 001661E4  7E 43 93 78 */	mr r3, r18
/* 80169108 001661E8  38 A0 00 20 */	li r5, 0x20
/* 8016910C 001661EC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169110 001661F0  38 C0 00 00 */	li r6, 0x0
/* 80169114 001661F4  38 E0 00 00 */	li r7, 0x0
/* 80169118 001661F8  39 00 00 00 */	li r8, 0x0
/* 8016911C 001661FC  90 01 00 10 */	stw r0, 0x10(r1)
/* 80169120 00166200  39 20 00 00 */	li r9, 0x0
/* 80169124 00166204  39 40 00 00 */	li r10, 0x0
/* 80169128 00166208  3A 20 00 06 */	li r17, 0x6
/* 8016912C 0016620C  80 97 01 14 */	lwz r4, 0x114(r23)
/* 80169130 00166210  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 80169134 00166214  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 80169138 00166218  4B E9 DC 21 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8016913C 0016621C  56 20 10 3A */	slwi r0, r17, 2
/* 80169140 00166220  38 81 00 18 */	addi r4, r1, 0x18
/* 80169144 00166224  38 A0 00 46 */	li r5, 0x46
/* 80169148 00166228  3C 60 80 00 */	lis r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8016914C 0016622C  7C A4 01 2E */	stwx r5, r4, r0
/* 80169150 00166230  38 83 6C FC */	addi r4, r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80169154 00166234  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 80169158 00166238  38 00 00 00 */	li r0, 0x0
/* 8016915C 0016623C  90 81 00 08 */	stw r4, 0x8(r1)
/* 80169160 00166240  3B 03 93 A0 */	addi r24, r3, g_strz_bossanim@l
/* 80169164 00166244  7E 43 93 78 */	mr r3, r18
/* 80169168 00166248  38 A0 00 20 */	li r5, 0x20
/* 8016916C 0016624C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169170 00166250  38 C0 00 00 */	li r6, 0x0
/* 80169174 00166254  38 E0 00 00 */	li r7, 0x0
/* 80169178 00166258  39 00 00 00 */	li r8, 0x0
/* 8016917C 0016625C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80169180 00166260  39 20 00 00 */	li r9, 0x0
/* 80169184 00166264  39 40 00 00 */	li r10, 0x0
/* 80169188 00166268  3A 20 00 07 */	li r17, 0x7
/* 8016918C 0016626C  80 98 01 18 */	lwz r4, 0x118(r24)
/* 80169190 00166270  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 80169194 00166274  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 80169198 00166278  4B E9 DB C1 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8016919C 0016627C  56 20 10 3A */	slwi r0, r17, 2
/* 801691A0 00166280  38 81 00 18 */	addi r4, r1, 0x18
/* 801691A4 00166284  38 A0 00 47 */	li r5, 0x47
/* 801691A8 00166288  3C 60 80 00 */	lis r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 801691AC 0016628C  7C A4 01 2E */	stwx r5, r4, r0
/* 801691B0 00166290  38 83 6C FC */	addi r4, r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 801691B4 00166294  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 801691B8 00166298  38 00 00 00 */	li r0, 0x0
/* 801691BC 0016629C  90 81 00 08 */	stw r4, 0x8(r1)
/* 801691C0 001662A0  3B 23 93 A0 */	addi r25, r3, g_strz_bossanim@l
/* 801691C4 001662A4  7E 43 93 78 */	mr r3, r18
/* 801691C8 001662A8  38 A0 00 10 */	li r5, 0x10
/* 801691CC 001662AC  90 01 00 0C */	stw r0, 0xc(r1)
/* 801691D0 001662B0  38 C0 00 00 */	li r6, 0x0
/* 801691D4 001662B4  38 E0 00 00 */	li r7, 0x0
/* 801691D8 001662B8  39 00 00 00 */	li r8, 0x0
/* 801691DC 001662BC  90 01 00 10 */	stw r0, 0x10(r1)
/* 801691E0 001662C0  39 20 00 00 */	li r9, 0x0
/* 801691E4 001662C4  39 40 00 00 */	li r10, 0x0
/* 801691E8 001662C8  3A 20 00 08 */	li r17, 0x8
/* 801691EC 001662CC  80 99 01 1C */	lwz r4, 0x11c(r25)
/* 801691F0 001662D0  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 801691F4 001662D4  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 801691F8 001662D8  4B E9 DB 61 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 801691FC 001662DC  56 20 10 3A */	slwi r0, r17, 2
/* 80169200 001662E0  38 81 00 18 */	addi r4, r1, 0x18
/* 80169204 001662E4  38 A0 00 48 */	li r5, 0x48
/* 80169208 001662E8  3C 60 80 00 */	lis r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8016920C 001662EC  7C A4 01 2E */	stwx r5, r4, r0
/* 80169210 001662F0  38 83 6C FC */	addi r4, r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80169214 001662F4  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 80169218 001662F8  38 00 00 00 */	li r0, 0x0
/* 8016921C 001662FC  90 81 00 08 */	stw r4, 0x8(r1)
/* 80169220 00166300  3B 43 93 A0 */	addi r26, r3, g_strz_bossanim@l
/* 80169224 00166304  7E 43 93 78 */	mr r3, r18
/* 80169228 00166308  38 A0 00 20 */	li r5, 0x20
/* 8016922C 0016630C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169230 00166310  38 C0 00 00 */	li r6, 0x0
/* 80169234 00166314  38 E0 00 00 */	li r7, 0x0
/* 80169238 00166318  39 00 00 00 */	li r8, 0x0
/* 8016923C 0016631C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80169240 00166320  39 20 00 00 */	li r9, 0x0
/* 80169244 00166324  39 40 00 00 */	li r10, 0x0
/* 80169248 00166328  3A 20 00 09 */	li r17, 0x9
/* 8016924C 0016632C  80 9A 01 20 */	lwz r4, 0x120(r26)
/* 80169250 00166330  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 80169254 00166334  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 80169258 00166338  4B E9 DB 01 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8016925C 0016633C  56 20 10 3A */	slwi r0, r17, 2
/* 80169260 00166340  38 81 00 18 */	addi r4, r1, 0x18
/* 80169264 00166344  38 A0 00 49 */	li r5, 0x49
/* 80169268 00166348  3C 60 80 00 */	lis r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8016926C 0016634C  7C A4 01 2E */	stwx r5, r4, r0
/* 80169270 00166350  38 83 6C FC */	addi r4, r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80169274 00166354  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 80169278 00166358  38 00 00 00 */	li r0, 0x0
/* 8016927C 0016635C  90 81 00 08 */	stw r4, 0x8(r1)
/* 80169280 00166360  3B 63 93 A0 */	addi r27, r3, g_strz_bossanim@l
/* 80169284 00166364  7E 43 93 78 */	mr r3, r18
/* 80169288 00166368  38 A0 00 20 */	li r5, 0x20
/* 8016928C 0016636C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169290 00166370  38 C0 00 00 */	li r6, 0x0
/* 80169294 00166374  38 E0 00 00 */	li r7, 0x0
/* 80169298 00166378  39 00 00 00 */	li r8, 0x0
/* 8016929C 0016637C  90 01 00 10 */	stw r0, 0x10(r1)
/* 801692A0 00166380  39 20 00 00 */	li r9, 0x0
/* 801692A4 00166384  39 40 00 00 */	li r10, 0x0
/* 801692A8 00166388  3A 20 00 0A */	li r17, 0xa
/* 801692AC 0016638C  80 9B 01 24 */	lwz r4, 0x124(r27)
/* 801692B0 00166390  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 801692B4 00166394  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 801692B8 00166398  4B E9 DA A1 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 801692BC 0016639C  56 20 10 3A */	slwi r0, r17, 2
/* 801692C0 001663A0  38 81 00 18 */	addi r4, r1, 0x18
/* 801692C4 001663A4  38 A0 00 4A */	li r5, 0x4a
/* 801692C8 001663A8  3C 60 80 00 */	lis r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 801692CC 001663AC  7C A4 01 2E */	stwx r5, r4, r0
/* 801692D0 001663B0  38 83 6C FC */	addi r4, r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 801692D4 001663B4  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 801692D8 001663B8  38 00 00 00 */	li r0, 0x0
/* 801692DC 001663BC  90 81 00 08 */	stw r4, 0x8(r1)
/* 801692E0 001663C0  3B 83 93 A0 */	addi r28, r3, g_strz_bossanim@l
/* 801692E4 001663C4  7E 43 93 78 */	mr r3, r18
/* 801692E8 001663C8  38 A0 00 10 */	li r5, 0x10
/* 801692EC 001663CC  90 01 00 0C */	stw r0, 0xc(r1)
/* 801692F0 001663D0  38 C0 00 00 */	li r6, 0x0
/* 801692F4 001663D4  38 E0 00 00 */	li r7, 0x0
/* 801692F8 001663D8  39 00 00 00 */	li r8, 0x0
/* 801692FC 001663DC  90 01 00 10 */	stw r0, 0x10(r1)
/* 80169300 001663E0  39 20 00 00 */	li r9, 0x0
/* 80169304 001663E4  39 40 00 00 */	li r10, 0x0
/* 80169308 001663E8  3A 20 00 0B */	li r17, 0xb
/* 8016930C 001663EC  80 9C 01 28 */	lwz r4, 0x128(r28)
/* 80169310 001663F0  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 80169314 001663F4  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 80169318 001663F8  4B E9 DA 41 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8016931C 001663FC  56 20 10 3A */	slwi r0, r17, 2
/* 80169320 00166400  38 81 00 18 */	addi r4, r1, 0x18
/* 80169324 00166404  38 A0 00 4B */	li r5, 0x4b
/* 80169328 00166408  3C 60 80 00 */	lis r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8016932C 0016640C  7C A4 01 2E */	stwx r5, r4, r0
/* 80169330 00166410  38 83 6C FC */	addi r4, r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80169334 00166414  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 80169338 00166418  38 00 00 00 */	li r0, 0x0
/* 8016933C 0016641C  90 81 00 08 */	stw r4, 0x8(r1)
/* 80169340 00166420  3B A3 93 A0 */	addi r29, r3, g_strz_bossanim@l
/* 80169344 00166424  7E 43 93 78 */	mr r3, r18
/* 80169348 00166428  38 A0 00 20 */	li r5, 0x20
/* 8016934C 0016642C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169350 00166430  38 C0 00 00 */	li r6, 0x0
/* 80169354 00166434  38 E0 00 00 */	li r7, 0x0
/* 80169358 00166438  39 00 00 00 */	li r8, 0x0
/* 8016935C 0016643C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80169360 00166440  39 20 00 00 */	li r9, 0x0
/* 80169364 00166444  39 40 00 00 */	li r10, 0x0
/* 80169368 00166448  3A 20 00 0C */	li r17, 0xc
/* 8016936C 0016644C  80 9D 01 2C */	lwz r4, 0x12c(r29)
/* 80169370 00166450  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 80169374 00166454  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 80169378 00166458  4B E9 D9 E1 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8016937C 0016645C  56 20 10 3A */	slwi r0, r17, 2
/* 80169380 00166460  38 81 00 18 */	addi r4, r1, 0x18
/* 80169384 00166464  38 A0 00 4C */	li r5, 0x4c
/* 80169388 00166468  3C 60 80 00 */	lis r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8016938C 0016646C  7C A4 01 2E */	stwx r5, r4, r0
/* 80169390 00166470  38 83 6C FC */	addi r4, r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80169394 00166474  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 80169398 00166478  38 00 00 00 */	li r0, 0x0
/* 8016939C 0016647C  90 81 00 08 */	stw r4, 0x8(r1)
/* 801693A0 00166480  3B C3 93 A0 */	addi r30, r3, g_strz_bossanim@l
/* 801693A4 00166484  7E 43 93 78 */	mr r3, r18
/* 801693A8 00166488  38 A0 00 20 */	li r5, 0x20
/* 801693AC 0016648C  90 01 00 0C */	stw r0, 0xc(r1)
/* 801693B0 00166490  38 C0 00 00 */	li r6, 0x0
/* 801693B4 00166494  38 E0 00 00 */	li r7, 0x0
/* 801693B8 00166498  39 00 00 00 */	li r8, 0x0
/* 801693BC 0016649C  90 01 00 10 */	stw r0, 0x10(r1)
/* 801693C0 001664A0  39 20 00 00 */	li r9, 0x0
/* 801693C4 001664A4  39 40 00 00 */	li r10, 0x0
/* 801693C8 001664A8  3A 20 00 0D */	li r17, 0xd
/* 801693CC 001664AC  80 9E 01 30 */	lwz r4, 0x130(r30)
/* 801693D0 001664B0  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 801693D4 001664B4  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 801693D8 001664B8  4B E9 D9 81 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 801693DC 001664BC  56 20 10 3A */	slwi r0, r17, 2
/* 801693E0 001664C0  38 81 00 18 */	addi r4, r1, 0x18
/* 801693E4 001664C4  38 A0 00 4D */	li r5, 0x4d
/* 801693E8 001664C8  3C 60 80 00 */	lis r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 801693EC 001664CC  7C A4 01 2E */	stwx r5, r4, r0
/* 801693F0 001664D0  38 83 6C FC */	addi r4, r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 801693F4 001664D4  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 801693F8 001664D8  38 00 00 00 */	li r0, 0x0
/* 801693FC 001664DC  90 81 00 08 */	stw r4, 0x8(r1)
/* 80169400 001664E0  3B E3 93 A0 */	addi r31, r3, g_strz_bossanim@l
/* 80169404 001664E4  7E 43 93 78 */	mr r3, r18
/* 80169408 001664E8  38 A0 00 20 */	li r5, 0x20
/* 8016940C 001664EC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169410 001664F0  38 C0 00 00 */	li r6, 0x0
/* 80169414 001664F4  38 E0 00 00 */	li r7, 0x0
/* 80169418 001664F8  39 00 00 00 */	li r8, 0x0
/* 8016941C 001664FC  90 01 00 10 */	stw r0, 0x10(r1)
/* 80169420 00166500  39 20 00 00 */	li r9, 0x0
/* 80169424 00166504  39 40 00 00 */	li r10, 0x0
/* 80169428 00166508  3A 20 00 0E */	li r17, 0xe
/* 8016942C 0016650C  80 9F 01 34 */	lwz r4, 0x134(r31)
/* 80169430 00166510  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 80169434 00166514  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 80169438 00166518  4B E9 D9 21 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8016943C 0016651C  38 A1 00 18 */	addi r5, r1, 0x18
/* 80169440 00166520  56 20 10 3A */	slwi r0, r17, 2
/* 80169444 00166524  38 80 00 00 */	li r4, 0x0
/* 80169448 00166528  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 8016944C 0016652C  7C 85 01 2E */	stwx r4, r5, r0
/* 80169450 00166530  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 80169454 00166534  7E 43 93 78 */	mr r3, r18
/* 80169458 00166538  38 C0 00 01 */	li r6, 0x1
/* 8016945C 0016653C  C0 22 AB 14 */	lfs f1, "@1657"@sda21(r2)
/* 80169460 00166540  4B F8 AF 99 */	bl NPCC_BuildStandardAnimTran__FP10xAnimTablePPcPiif
/* 80169464 00166544  38 00 00 00 */	li r0, 0x0
/* 80169468 00166548  7E 43 93 78 */	mr r3, r18
/* 8016946C 0016654C  90 01 00 08 */	stw r0, 0x8(r1)
/* 80169470 00166550  38 C0 00 00 */	li r6, 0x0
/* 80169474 00166554  38 E0 00 00 */	li r7, 0x0
/* 80169478 00166558  39 00 00 10 */	li r8, 0x10
/* 8016947C 0016655C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169480 00166560  39 20 00 00 */	li r9, 0x0
/* 80169484 00166564  39 40 00 00 */	li r10, 0x0
/* 80169488 00166568  C0 22 AB 10 */	lfs f1, "@1586"@sda21(r2)
/* 8016948C 0016656C  80 95 01 0C */	lwz r4, 0x10c(r21)
/* 80169490 00166570  FC 40 08 90 */	fmr f2, f1
/* 80169494 00166574  80 B6 01 10 */	lwz r5, 0x110(r22)
/* 80169498 00166578  C0 62 AB 18 */	lfs f3, "@1658"@sda21(r2)
/* 8016949C 0016657C  4B E9 DF 25 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 801694A0 00166580  38 00 00 00 */	li r0, 0x0
/* 801694A4 00166584  7E 43 93 78 */	mr r3, r18
/* 801694A8 00166588  90 01 00 08 */	stw r0, 0x8(r1)
/* 801694AC 0016658C  38 C0 00 00 */	li r6, 0x0
/* 801694B0 00166590  38 E0 00 00 */	li r7, 0x0
/* 801694B4 00166594  39 00 00 00 */	li r8, 0x0
/* 801694B8 00166598  90 01 00 0C */	stw r0, 0xc(r1)
/* 801694BC 0016659C  39 20 00 00 */	li r9, 0x0
/* 801694C0 001665A0  39 40 00 00 */	li r10, 0x0
/* 801694C4 001665A4  C0 22 AB 10 */	lfs f1, "@1586"@sda21(r2)
/* 801694C8 001665A8  80 96 01 10 */	lwz r4, 0x110(r22)
/* 801694CC 001665AC  FC 40 08 90 */	fmr f2, f1
/* 801694D0 001665B0  80 B7 01 14 */	lwz r5, 0x114(r23)
/* 801694D4 001665B4  C0 62 AB 18 */	lfs f3, "@1658"@sda21(r2)
/* 801694D8 001665B8  4B E9 DE E9 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 801694DC 001665BC  38 00 00 00 */	li r0, 0x0
/* 801694E0 001665C0  7E 43 93 78 */	mr r3, r18
/* 801694E4 001665C4  90 01 00 08 */	stw r0, 0x8(r1)
/* 801694E8 001665C8  38 C0 00 00 */	li r6, 0x0
/* 801694EC 001665CC  38 E0 00 00 */	li r7, 0x0
/* 801694F0 001665D0  39 00 00 10 */	li r8, 0x10
/* 801694F4 001665D4  90 01 00 0C */	stw r0, 0xc(r1)
/* 801694F8 001665D8  39 20 00 00 */	li r9, 0x0
/* 801694FC 001665DC  39 40 00 00 */	li r10, 0x0
/* 80169500 001665E0  C0 22 AB 10 */	lfs f1, "@1586"@sda21(r2)
/* 80169504 001665E4  80 98 01 18 */	lwz r4, 0x118(r24)
/* 80169508 001665E8  FC 40 08 90 */	fmr f2, f1
/* 8016950C 001665EC  80 B9 01 1C */	lwz r5, 0x11c(r25)
/* 80169510 001665F0  C0 62 AB 18 */	lfs f3, "@1658"@sda21(r2)
/* 80169514 001665F4  4B E9 DE AD */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80169518 001665F8  38 00 00 00 */	li r0, 0x0
/* 8016951C 001665FC  7E 43 93 78 */	mr r3, r18
/* 80169520 00166600  90 01 00 08 */	stw r0, 0x8(r1)
/* 80169524 00166604  38 C0 00 00 */	li r6, 0x0
/* 80169528 00166608  38 E0 00 00 */	li r7, 0x0
/* 8016952C 0016660C  39 00 00 00 */	li r8, 0x0
/* 80169530 00166610  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169534 00166614  39 20 00 00 */	li r9, 0x0
/* 80169538 00166618  39 40 00 00 */	li r10, 0x0
/* 8016953C 0016661C  C0 22 AB 10 */	lfs f1, "@1586"@sda21(r2)
/* 80169540 00166620  80 98 01 18 */	lwz r4, 0x118(r24)
/* 80169544 00166624  FC 40 08 90 */	fmr f2, f1
/* 80169548 00166628  80 BA 01 20 */	lwz r5, 0x120(r26)
/* 8016954C 0016662C  C0 62 AB 18 */	lfs f3, "@1658"@sda21(r2)
/* 80169550 00166630  4B E9 DE 71 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80169554 00166634  38 00 00 00 */	li r0, 0x0
/* 80169558 00166638  7E 43 93 78 */	mr r3, r18
/* 8016955C 0016663C  90 01 00 08 */	stw r0, 0x8(r1)
/* 80169560 00166640  38 C0 00 00 */	li r6, 0x0
/* 80169564 00166644  38 E0 00 00 */	li r7, 0x0
/* 80169568 00166648  39 00 00 00 */	li r8, 0x0
/* 8016956C 0016664C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169570 00166650  39 20 00 00 */	li r9, 0x0
/* 80169574 00166654  39 40 00 00 */	li r10, 0x0
/* 80169578 00166658  C0 22 AB 10 */	lfs f1, "@1586"@sda21(r2)
/* 8016957C 0016665C  80 99 01 1C */	lwz r4, 0x11c(r25)
/* 80169580 00166660  FC 40 08 90 */	fmr f2, f1
/* 80169584 00166664  80 BA 01 20 */	lwz r5, 0x120(r26)
/* 80169588 00166668  C0 62 AB 18 */	lfs f3, "@1658"@sda21(r2)
/* 8016958C 0016666C  4B E9 DE 35 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80169590 00166670  38 00 00 00 */	li r0, 0x0
/* 80169594 00166674  7E 43 93 78 */	mr r3, r18
/* 80169598 00166678  90 01 00 08 */	stw r0, 0x8(r1)
/* 8016959C 0016667C  38 C0 00 00 */	li r6, 0x0
/* 801695A0 00166680  38 E0 00 00 */	li r7, 0x0
/* 801695A4 00166684  39 00 00 10 */	li r8, 0x10
/* 801695A8 00166688  90 01 00 0C */	stw r0, 0xc(r1)
/* 801695AC 0016668C  39 20 00 00 */	li r9, 0x0
/* 801695B0 00166690  39 40 00 00 */	li r10, 0x0
/* 801695B4 00166694  C0 22 AB 10 */	lfs f1, "@1586"@sda21(r2)
/* 801695B8 00166698  80 9B 01 24 */	lwz r4, 0x124(r27)
/* 801695BC 0016669C  FC 40 08 90 */	fmr f2, f1
/* 801695C0 001666A0  80 BC 01 28 */	lwz r5, 0x128(r28)
/* 801695C4 001666A4  C0 62 AB 18 */	lfs f3, "@1658"@sda21(r2)
/* 801695C8 001666A8  4B E9 DD F9 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 801695CC 001666AC  38 00 00 00 */	li r0, 0x0
/* 801695D0 001666B0  7E 43 93 78 */	mr r3, r18
/* 801695D4 001666B4  90 01 00 08 */	stw r0, 0x8(r1)
/* 801695D8 001666B8  38 C0 00 00 */	li r6, 0x0
/* 801695DC 001666BC  38 E0 00 00 */	li r7, 0x0
/* 801695E0 001666C0  39 00 00 00 */	li r8, 0x0
/* 801695E4 001666C4  90 01 00 0C */	stw r0, 0xc(r1)
/* 801695E8 001666C8  39 20 00 00 */	li r9, 0x0
/* 801695EC 001666CC  39 40 00 00 */	li r10, 0x0
/* 801695F0 001666D0  C0 22 AB 10 */	lfs f1, "@1586"@sda21(r2)
/* 801695F4 001666D4  80 9C 01 28 */	lwz r4, 0x128(r28)
/* 801695F8 001666D8  FC 40 08 90 */	fmr f2, f1
/* 801695FC 001666DC  80 BD 01 2C */	lwz r5, 0x12c(r29)
/* 80169600 001666E0  C0 62 AB 18 */	lfs f3, "@1658"@sda21(r2)
/* 80169604 001666E4  4B E9 DD BD */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80169608 001666E8  38 00 00 00 */	li r0, 0x0
/* 8016960C 001666EC  7E 43 93 78 */	mr r3, r18
/* 80169610 001666F0  90 01 00 08 */	stw r0, 0x8(r1)
/* 80169614 001666F4  38 C0 00 00 */	li r6, 0x0
/* 80169618 001666F8  38 E0 00 00 */	li r7, 0x0
/* 8016961C 001666FC  39 00 00 00 */	li r8, 0x0
/* 80169620 00166700  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169624 00166704  39 20 00 00 */	li r9, 0x0
/* 80169628 00166708  39 40 00 00 */	li r10, 0x0
/* 8016962C 0016670C  C0 22 AB 10 */	lfs f1, "@1586"@sda21(r2)
/* 80169630 00166710  80 93 00 0C */	lwz r4, 0xc(r19)
/* 80169634 00166714  FC 40 08 90 */	fmr f2, f1
/* 80169638 00166718  80 B5 01 0C */	lwz r5, 0x10c(r21)
/* 8016963C 0016671C  C0 62 AB 18 */	lfs f3, "@1658"@sda21(r2)
/* 80169640 00166720  4B E9 DD 81 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80169644 00166724  38 00 00 00 */	li r0, 0x0
/* 80169648 00166728  7E 43 93 78 */	mr r3, r18
/* 8016964C 0016672C  90 01 00 08 */	stw r0, 0x8(r1)
/* 80169650 00166730  38 C0 00 00 */	li r6, 0x0
/* 80169654 00166734  38 E0 00 00 */	li r7, 0x0
/* 80169658 00166738  39 00 00 00 */	li r8, 0x0
/* 8016965C 0016673C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169660 00166740  39 20 00 00 */	li r9, 0x0
/* 80169664 00166744  39 40 00 00 */	li r10, 0x0
/* 80169668 00166748  C0 22 AB 10 */	lfs f1, "@1586"@sda21(r2)
/* 8016966C 0016674C  80 94 01 08 */	lwz r4, 0x108(r20)
/* 80169670 00166750  FC 40 08 90 */	fmr f2, f1
/* 80169674 00166754  80 B5 01 0C */	lwz r5, 0x10c(r21)
/* 80169678 00166758  C0 62 AB 18 */	lfs f3, "@1658"@sda21(r2)
/* 8016967C 0016675C  4B E9 DD 45 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80169680 00166760  38 00 00 00 */	li r0, 0x0
/* 80169684 00166764  7E 43 93 78 */	mr r3, r18
/* 80169688 00166768  90 01 00 08 */	stw r0, 0x8(r1)
/* 8016968C 0016676C  38 C0 00 00 */	li r6, 0x0
/* 80169690 00166770  38 E0 00 00 */	li r7, 0x0
/* 80169694 00166774  39 00 00 00 */	li r8, 0x0
/* 80169698 00166778  90 01 00 0C */	stw r0, 0xc(r1)
/* 8016969C 0016677C  39 20 00 00 */	li r9, 0x0
/* 801696A0 00166780  39 40 00 00 */	li r10, 0x0
/* 801696A4 00166784  C0 22 AB 10 */	lfs f1, "@1586"@sda21(r2)
/* 801696A8 00166788  80 98 01 18 */	lwz r4, 0x118(r24)
/* 801696AC 0016678C  FC 40 08 90 */	fmr f2, f1
/* 801696B0 00166790  80 B5 01 0C */	lwz r5, 0x10c(r21)
/* 801696B4 00166794  C0 62 AB 18 */	lfs f3, "@1658"@sda21(r2)
/* 801696B8 00166798  4B E9 DD 09 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 801696BC 0016679C  38 00 00 00 */	li r0, 0x0
/* 801696C0 001667A0  7E 43 93 78 */	mr r3, r18
/* 801696C4 001667A4  90 01 00 08 */	stw r0, 0x8(r1)
/* 801696C8 001667A8  38 C0 00 00 */	li r6, 0x0
/* 801696CC 001667AC  38 E0 00 00 */	li r7, 0x0
/* 801696D0 001667B0  39 00 00 00 */	li r8, 0x0
/* 801696D4 001667B4  90 01 00 0C */	stw r0, 0xc(r1)
/* 801696D8 001667B8  39 20 00 00 */	li r9, 0x0
/* 801696DC 001667BC  39 40 00 00 */	li r10, 0x0
/* 801696E0 001667C0  C0 22 AB 10 */	lfs f1, "@1586"@sda21(r2)
/* 801696E4 001667C4  80 99 01 1C */	lwz r4, 0x11c(r25)
/* 801696E8 001667C8  FC 40 08 90 */	fmr f2, f1
/* 801696EC 001667CC  80 B5 01 0C */	lwz r5, 0x10c(r21)
/* 801696F0 001667D0  C0 62 AB 18 */	lfs f3, "@1658"@sda21(r2)
/* 801696F4 001667D4  4B E9 DC CD */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 801696F8 001667D8  38 00 00 00 */	li r0, 0x0
/* 801696FC 001667DC  7E 43 93 78 */	mr r3, r18
/* 80169700 001667E0  90 01 00 08 */	stw r0, 0x8(r1)
/* 80169704 001667E4  38 C0 00 00 */	li r6, 0x0
/* 80169708 001667E8  38 E0 00 00 */	li r7, 0x0
/* 8016970C 001667EC  39 00 00 00 */	li r8, 0x0
/* 80169710 001667F0  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169714 001667F4  39 20 00 00 */	li r9, 0x0
/* 80169718 001667F8  39 40 00 00 */	li r10, 0x0
/* 8016971C 001667FC  C0 22 AB 10 */	lfs f1, "@1586"@sda21(r2)
/* 80169720 00166800  80 9A 01 20 */	lwz r4, 0x120(r26)
/* 80169724 00166804  FC 40 08 90 */	fmr f2, f1
/* 80169728 00166808  80 B5 01 0C */	lwz r5, 0x10c(r21)
/* 8016972C 0016680C  C0 62 AB 18 */	lfs f3, "@1658"@sda21(r2)
/* 80169730 00166810  4B E9 DC 91 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80169734 00166814  38 00 00 00 */	li r0, 0x0
/* 80169738 00166818  7E 43 93 78 */	mr r3, r18
/* 8016973C 0016681C  90 01 00 08 */	stw r0, 0x8(r1)
/* 80169740 00166820  38 C0 00 00 */	li r6, 0x0
/* 80169744 00166824  38 E0 00 00 */	li r7, 0x0
/* 80169748 00166828  39 00 00 00 */	li r8, 0x0
/* 8016974C 0016682C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169750 00166830  39 20 00 00 */	li r9, 0x0
/* 80169754 00166834  39 40 00 00 */	li r10, 0x0
/* 80169758 00166838  C0 22 AB 10 */	lfs f1, "@1586"@sda21(r2)
/* 8016975C 0016683C  80 9B 01 24 */	lwz r4, 0x124(r27)
/* 80169760 00166840  FC 40 08 90 */	fmr f2, f1
/* 80169764 00166844  80 B5 01 0C */	lwz r5, 0x10c(r21)
/* 80169768 00166848  C0 62 AB 18 */	lfs f3, "@1658"@sda21(r2)
/* 8016976C 0016684C  4B E9 DC 55 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80169770 00166850  38 00 00 00 */	li r0, 0x0
/* 80169774 00166854  7E 43 93 78 */	mr r3, r18
/* 80169778 00166858  90 01 00 08 */	stw r0, 0x8(r1)
/* 8016977C 0016685C  38 C0 00 00 */	li r6, 0x0
/* 80169780 00166860  38 E0 00 00 */	li r7, 0x0
/* 80169784 00166864  39 00 00 00 */	li r8, 0x0
/* 80169788 00166868  90 01 00 0C */	stw r0, 0xc(r1)
/* 8016978C 0016686C  39 20 00 00 */	li r9, 0x0
/* 80169790 00166870  39 40 00 00 */	li r10, 0x0
/* 80169794 00166874  C0 22 AB 10 */	lfs f1, "@1586"@sda21(r2)
/* 80169798 00166878  80 9C 01 28 */	lwz r4, 0x128(r28)
/* 8016979C 0016687C  FC 40 08 90 */	fmr f2, f1
/* 801697A0 00166880  80 B5 01 0C */	lwz r5, 0x10c(r21)
/* 801697A4 00166884  C0 62 AB 18 */	lfs f3, "@1658"@sda21(r2)
/* 801697A8 00166888  4B E9 DC 19 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 801697AC 0016688C  38 00 00 00 */	li r0, 0x0
/* 801697B0 00166890  7E 43 93 78 */	mr r3, r18
/* 801697B4 00166894  90 01 00 08 */	stw r0, 0x8(r1)
/* 801697B8 00166898  38 C0 00 00 */	li r6, 0x0
/* 801697BC 0016689C  38 E0 00 00 */	li r7, 0x0
/* 801697C0 001668A0  39 00 00 00 */	li r8, 0x0
/* 801697C4 001668A4  90 01 00 0C */	stw r0, 0xc(r1)
/* 801697C8 001668A8  39 20 00 00 */	li r9, 0x0
/* 801697CC 001668AC  39 40 00 00 */	li r10, 0x0
/* 801697D0 001668B0  C0 22 AB 10 */	lfs f1, "@1586"@sda21(r2)
/* 801697D4 001668B4  80 9D 01 2C */	lwz r4, 0x12c(r29)
/* 801697D8 001668B8  FC 40 08 90 */	fmr f2, f1
/* 801697DC 001668BC  80 B5 01 0C */	lwz r5, 0x10c(r21)
/* 801697E0 001668C0  C0 62 AB 18 */	lfs f3, "@1658"@sda21(r2)
/* 801697E4 001668C4  4B E9 DB DD */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 801697E8 001668C8  38 00 00 00 */	li r0, 0x0
/* 801697EC 001668CC  7E 43 93 78 */	mr r3, r18
/* 801697F0 001668D0  90 01 00 08 */	stw r0, 0x8(r1)
/* 801697F4 001668D4  38 C0 00 00 */	li r6, 0x0
/* 801697F8 001668D8  38 E0 00 00 */	li r7, 0x0
/* 801697FC 001668DC  39 00 00 00 */	li r8, 0x0
/* 80169800 001668E0  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169804 001668E4  39 20 00 00 */	li r9, 0x0
/* 80169808 001668E8  39 40 00 00 */	li r10, 0x0
/* 8016980C 001668EC  C0 22 AB 10 */	lfs f1, "@1586"@sda21(r2)
/* 80169810 001668F0  80 9E 01 30 */	lwz r4, 0x130(r30)
/* 80169814 001668F4  FC 40 08 90 */	fmr f2, f1
/* 80169818 001668F8  80 B5 01 0C */	lwz r5, 0x10c(r21)
/* 8016981C 001668FC  C0 62 AB 18 */	lfs f3, "@1658"@sda21(r2)
/* 80169820 00166900  4B E9 DB A1 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80169824 00166904  38 00 00 00 */	li r0, 0x0
/* 80169828 00166908  7E 43 93 78 */	mr r3, r18
/* 8016982C 0016690C  90 01 00 08 */	stw r0, 0x8(r1)
/* 80169830 00166910  38 C0 00 00 */	li r6, 0x0
/* 80169834 00166914  38 E0 00 00 */	li r7, 0x0
/* 80169838 00166918  39 00 00 00 */	li r8, 0x0
/* 8016983C 0016691C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80169840 00166920  39 20 00 00 */	li r9, 0x0
/* 80169844 00166924  39 40 00 00 */	li r10, 0x0
/* 80169848 00166928  C0 22 AB 10 */	lfs f1, "@1586"@sda21(r2)
/* 8016984C 0016692C  80 9F 01 34 */	lwz r4, 0x134(r31)
/* 80169850 00166930  FC 40 08 90 */	fmr f2, f1
/* 80169854 00166934  80 B5 01 0C */	lwz r5, 0x10c(r21)
/* 80169858 00166938  C0 62 AB 18 */	lfs f3, "@1658"@sda21(r2)
/* 8016985C 0016693C  4B E9 DB 65 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80169860 00166940  7E 43 93 78 */	mr r3, r18
/* 80169864 00166944  BA 21 00 A4 */	lmw r17, 0xa4(r1)
/* 80169868 00166948  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 8016986C 0016694C  7C 08 03 A6 */	mtlr r0
/* 80169870 00166950  38 21 00 E0 */	addi r1, r1, 0xe0
/* 80169874 00166954  4E 80 00 20 */	blr
.endfn ZNPC_AnimTable_BossPlankton__Fv

# zNPCBPlankton::zNPCBPlankton(int)
.fn __ct__13zNPCBPlanktonFi, global
/* 80169878 00166958  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016987C 0016695C  7C 08 02 A6 */	mflr r0
/* 80169880 00166960  90 01 00 14 */	stw r0, 0x14(r1)
/* 80169884 00166964  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80169888 00166968  7C 7F 1B 78 */	mr r31, r3
/* 8016988C 0016696C  4B FC CB D9 */	bl __ct__8zNPCBossFi
/* 80169890 00166970  3C 80 80 2A */	lis r4, __vt__13zNPCBPlankton@ha
/* 80169894 00166974  38 7F 02 B4 */	addi r3, r31, 0x2b4
/* 80169898 00166978  38 04 B3 6C */	addi r0, r4, __vt__13zNPCBPlankton@l
/* 8016989C 0016697C  38 80 00 00 */	li r4, 0x0
/* 801698A0 00166980  90 1F 01 B8 */	stw r0, 0x1b8(r31)
/* 801698A4 00166984  38 A0 00 10 */	li r5, 0x10
/* 801698A8 00166988  4B E9 9B B1 */	bl memset
/* 801698AC 0016698C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801698B0 00166990  7F E3 FB 78 */	mr r3, r31
/* 801698B4 00166994  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801698B8 00166998  7C 08 03 A6 */	mtlr r0
/* 801698BC 0016699C  38 21 00 10 */	addi r1, r1, 0x10
/* 801698C0 001669A0  4E 80 00 20 */	blr
.endfn __ct__13zNPCBPlanktonFi

# zNPCBPlankton::Init(xEntAsset*)
.fn Init__13zNPCBPlanktonFP9xEntAsset, global
/* 801698C4 001669A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801698C8 001669A8  7C 08 02 A6 */	mflr r0
/* 801698CC 001669AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801698D0 001669B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801698D4 001669B4  7C 9F 23 78 */	mr r31, r4
/* 801698D8 001669B8  93 C1 00 08 */	stw r30, 0x8(r1)
/* 801698DC 001669BC  7C 7E 1B 78 */	mr r30, r3
/* 801698E0 001669C0  4B FF F1 CD */	bl "init_sound__34@unnamed@zNPCTypeBossPlankton_cpp@Fv"
/* 801698E4 001669C4  7F C3 F3 78 */	mr r3, r30
/* 801698E8 001669C8  7F E4 FB 78 */	mr r4, r31
/* 801698EC 001669CC  4B F8 57 B1 */	bl Init__10zNPCCommonFP9xEntAsset
/* 801698F0 001669D0  38 00 00 01 */	li r0, 0x1
/* 801698F4 001669D4  7F C3 F3 78 */	mr r3, r30
/* 801698F8 001669D8  90 1E 01 CC */	stw r0, 0x1cc(r30)
/* 801698FC 001669DC  90 1E 01 C8 */	stw r0, 0x1c8(r30)
/* 80169900 001669E0  4B F6 F8 35 */	bl RestoreColFlags__9xNPCBasicFv
/* 80169904 001669E4  38 00 00 00 */	li r0, 0x0
/* 80169908 001669E8  7F C3 F3 78 */	mr r3, r30
/* 8016990C 001669EC  90 1E 06 94 */	stw r0, 0x694(r30)
/* 80169910 001669F0  98 1E 06 A4 */	stb r0, 0x6a4(r30)
/* 80169914 001669F4  48 00 32 81 */	bl init_beam__13zNPCBPlanktonFv
/* 80169918 001669F8  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8016991C 001669FC  3C 80 80 17 */	lis r4, aim_gun__13zNPCBPlanktonFP9xAnimPlayP5xQuatP5xVec3i@ha
/* 80169920 00166A00  38 04 DA EC */	addi r0, r4, aim_gun__13zNPCBPlanktonFP9xAnimPlayP5xQuatP5xVec3i@l
/* 80169924 00166A04  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80169928 00166A08  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8016992C 00166A0C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80169930 00166A10  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80169934 00166A14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80169938 00166A18  7C 08 03 A6 */	mtlr r0
/* 8016993C 00166A1C  38 21 00 10 */	addi r1, r1, 0x10
/* 80169940 00166A20  4E 80 00 20 */	blr
.endfn Init__13zNPCBPlanktonFP9xEntAsset

# zNPCBPlankton::Setup()
.fn Setup__13zNPCBPlanktonFv, global
/* 80169944 00166A24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80169948 00166A28  7C 08 02 A6 */	mflr r0
/* 8016994C 00166A2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80169950 00166A30  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80169954 00166A34  7C 7F 1B 78 */	mr r31, r3
/* 80169958 00166A38  4B FC CA 95 */	bl Setup__8zNPCBossFv
/* 8016995C 00166A3C  7F E3 FB 78 */	mr r3, r31
/* 80169960 00166A40  48 00 34 01 */	bl setup_beam__13zNPCBPlanktonFv
/* 80169964 00166A44  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80169968 00166A48  38 63 14 64 */	addi r3, r3, "@stringBase0"@l
/* 8016996C 00166A4C  38 63 01 94 */	addi r3, r3, 0x194
/* 80169970 00166A50  4B EE 28 A5 */	bl xStrHash__FPCc
/* 80169974 00166A54  4B F4 B0 C9 */	bl zSceneFindObject__FUi
/* 80169978 00166A58  90 7F 06 9C */	stw r3, 0x69c(r31)
/* 8016997C 00166A5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80169980 00166A60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80169984 00166A64  7C 08 03 A6 */	mtlr r0
/* 80169988 00166A68  38 21 00 10 */	addi r1, r1, 0x10
/* 8016998C 00166A6C  4E 80 00 20 */	blr
.endfn Setup__13zNPCBPlanktonFv

# zNPCBPlankton::PostSetup()
.fn PostSetup__13zNPCBPlanktonFv, global
/* 80169990 00166A70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80169994 00166A74  7C 08 02 A6 */	mflr r0
/* 80169998 00166A78  3C 80 80 3C */	lis r4, globals@ha
/* 8016999C 00166A7C  3C A0 80 14 */	lis r5, xUpdateCull_AlwaysTrueCB__FPvPv@ha
/* 801699A0 00166A80  90 01 00 14 */	stw r0, 0x14(r1)
/* 801699A4 00166A84  38 C4 05 58 */	addi r6, r4, globals@l
/* 801699A8 00166A88  7C 64 1B 78 */	mr r4, r3
/* 801699AC 00166A8C  38 A5 A7 50 */	addi r5, r5, xUpdateCull_AlwaysTrueCB__FPvPv@l
/* 801699B0 00166A90  80 66 06 30 */	lwz r3, 0x630(r6)
/* 801699B4 00166A94  38 C0 00 00 */	li r6, 0x0
/* 801699B8 00166A98  4B FD 14 F1 */	bl xUpdateCull_SetCB__FP14xUpdateCullMgrPvPFPvPv_UiPv
/* 801699BC 00166A9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801699C0 00166AA0  7C 08 03 A6 */	mtlr r0
/* 801699C4 00166AA4  38 21 00 10 */	addi r1, r1, 0x10
/* 801699C8 00166AA8  4E 80 00 20 */	blr
.endfn PostSetup__13zNPCBPlanktonFv

# zNPCBPlankton::Reset()
.fn Reset__13zNPCBPlanktonFv, global
/* 801699CC 00166AAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801699D0 00166AB0  7C 08 02 A6 */	mflr r0
/* 801699D4 00166AB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801699D8 00166AB8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801699DC 00166ABC  7C 7F 1B 78 */	mr r31, r3
/* 801699E0 00166AC0  80 63 06 9C */	lwz r3, 0x69c(r3)
/* 801699E4 00166AC4  28 03 00 00 */	cmplwi r3, 0x0
/* 801699E8 00166AC8  41 82 00 14 */	beq .L_801699FC
/* 801699EC 00166ACC  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 801699F0 00166AD0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801699F4 00166AD4  7D 89 03 A6 */	mtctr r12
/* 801699F8 00166AD8  4E 80 04 21 */	bctrl
.L_801699FC:
/* 801699FC 00166ADC  4B FF F1 95 */	bl "reset_sound__34@unnamed@zNPCTypeBossPlankton_cpp@Fv"
/* 80169A00 00166AE0  7F E3 FB 78 */	mr r3, r31
/* 80169A04 00166AE4  4B F8 5E A1 */	bl Reset__10zNPCCommonFv
/* 80169A08 00166AE8  7F E3 FB 78 */	mr r3, r31
/* 80169A0C 00166AEC  48 00 34 85 */	bl reset_beam__13zNPCBPlanktonFv
/* 80169A10 00166AF0  38 7F 02 B4 */	addi r3, r31, 0x2b4
/* 80169A14 00166AF4  38 80 00 00 */	li r4, 0x0
/* 80169A18 00166AF8  38 A0 00 10 */	li r5, 0x10
/* 80169A1C 00166AFC  4B E9 9A 3D */	bl memset
/* 80169A20 00166B00  7F E3 FB 78 */	mr r3, r31
/* 80169A24 00166B04  48 00 61 A5 */	bl face_player__13zNPCBPlanktonFv
/* 80169A28 00166B08  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 80169A2C 00166B0C  38 7F 04 80 */	addi r3, r31, 0x480
/* 80169A30 00166B10  D0 1F 04 68 */	stfs f0, 0x468(r31)
/* 80169A34 00166B14  C0 22 AB 10 */	lfs f1, "@1586"@sda21(r2)
/* 80169A38 00166B18  4B EB 2E 41 */	bl __as__5xVec3Ff
/* 80169A3C 00166B1C  7F E3 FB 78 */	mr r3, r31
/* 80169A40 00166B20  48 00 61 79 */	bl location__13zNPCBPlanktonCFv
/* 80169A44 00166B24  7C 64 1B 78 */	mr r4, r3
/* 80169A48 00166B28  38 7F 04 74 */	addi r3, r31, 0x474
/* 80169A4C 00166B2C  4B EA 18 19 */	bl __as__5xVec3FRC5xVec3
/* 80169A50 00166B30  38 60 00 03 */	li r3, 0x3
/* 80169A54 00166B34  38 00 00 00 */	li r0, 0x0
/* 80169A58 00166B38  90 7F 02 BC */	stw r3, 0x2bc(r31)
/* 80169A5C 00166B3C  7F E3 FB 78 */	mr r3, r31
/* 80169A60 00166B40  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 80169A64 00166B44  D0 1F 02 DC */	stfs f0, 0x2dc(r31)
/* 80169A68 00166B48  90 1F 06 A0 */	stw r0, 0x6a0(r31)
/* 80169A6C 00166B4C  48 00 20 C9 */	bl scan_cronies__13zNPCBPlanktonFv
/* 80169A70 00166B50  80 1F 04 B0 */	lwz r0, 0x4b0(r31)
/* 80169A74 00166B54  28 00 00 00 */	cmplwi r0, 0x0
/* 80169A78 00166B58  41 82 00 24 */	beq .L_80169A9C
/* 80169A7C 00166B5C  38 00 00 00 */	li r0, 0x0
/* 80169A80 00166B60  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 80169A84 00166B64  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 80169A88 00166B68  38 63 A1 A0 */	addi r3, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 80169A8C 00166B6C  C0 03 00 68 */	lfs f0, 0x68(r3)
/* 80169A90 00166B70  D0 1F 02 E4 */	stfs f0, 0x2e4(r31)
/* 80169A94 00166B74  90 1F 06 9C */	stw r0, 0x69c(r31)
/* 80169A98 00166B78  48 00 00 38 */	b .L_80169AD0
.L_80169A9C:
/* 80169A9C 00166B7C  38 00 00 01 */	li r0, 0x1
/* 80169AA0 00166B80  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 80169AA4 00166B84  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 80169AA8 00166B88  38 00 00 00 */	li r0, 0x0
/* 80169AAC 00166B8C  38 63 A1 A0 */	addi r3, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 80169AB0 00166B90  90 1F 06 98 */	stw r0, 0x698(r31)
/* 80169AB4 00166B94  C0 03 00 88 */	lfs f0, 0x88(r3)
/* 80169AB8 00166B98  D0 1F 02 E4 */	stfs f0, 0x2e4(r31)
/* 80169ABC 00166B9C  80 7F 06 9C */	lwz r3, 0x69c(r31)
/* 80169AC0 00166BA0  28 03 00 00 */	cmplwi r3, 0x0
/* 80169AC4 00166BA4  41 82 00 0C */	beq .L_80169AD0
/* 80169AC8 00166BA8  38 80 00 01 */	li r4, 0x1
/* 80169ACC 00166BAC  4B F9 C3 69 */	bl TalkOnScreen__12zNPCNewsFishFi
.L_80169AD0:
/* 80169AD0 00166BB0  7F E3 FB 78 */	mr r3, r31
/* 80169AD4 00166BB4  48 00 3D F5 */	bl reset_speed__13zNPCBPlanktonFv
/* 80169AD8 00166BB8  7F E3 FB 78 */	mr r3, r31
/* 80169ADC 00166BBC  48 00 1E A5 */	bl refresh_orbit__13zNPCBPlanktonFv
/* 80169AE0 00166BC0  7F E3 FB 78 */	mr r3, r31
/* 80169AE4 00166BC4  48 00 3D A5 */	bl follow_player__13zNPCBPlanktonFv
/* 80169AE8 00166BC8  7F E3 FB 78 */	mr r3, r31
/* 80169AEC 00166BCC  48 00 28 D9 */	bl reset_territories__13zNPCBPlanktonFv
/* 80169AF0 00166BD0  80 1F 02 C4 */	lwz r0, 0x2c4(r31)
/* 80169AF4 00166BD4  2C 00 00 00 */	cmpwi r0, 0x0
/* 80169AF8 00166BD8  40 82 00 1C */	bne .L_80169B14
/* 80169AFC 00166BDC  3C 80 4E 47 */	lis r4, 0x4e47
/* 80169B00 00166BE0  80 7F 02 28 */	lwz r3, 0x228(r31)
/* 80169B04 00166BE4  38 84 42 4B */	addi r4, r4, 0x424b
/* 80169B08 00166BE8  38 A0 00 01 */	li r5, 0x1
/* 80169B0C 00166BEC  4B FA 3C 25 */	bl GoalSet__7xPsycheFii
/* 80169B10 00166BF0  48 00 00 20 */	b .L_80169B30
.L_80169B14:
/* 80169B14 00166BF4  7F E3 FB 78 */	mr r3, r31
/* 80169B18 00166BF8  48 00 33 9D */	bl vanish__13zNPCBPlanktonFv
/* 80169B1C 00166BFC  3C 80 4E 47 */	lis r4, 0x4e47
/* 80169B20 00166C00  80 7F 02 28 */	lwz r3, 0x228(r31)
/* 80169B24 00166C04  38 84 42 4D */	addi r4, r4, 0x424d
/* 80169B28 00166C08  38 A0 00 01 */	li r5, 0x1
/* 80169B2C 00166C0C  4B FA 3C 05 */	bl GoalSet__7xPsycheFii
.L_80169B30:
/* 80169B30 00166C10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80169B34 00166C14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80169B38 00166C18  7C 08 03 A6 */	mtlr r0
/* 80169B3C 00166C1C  38 21 00 10 */	addi r1, r1, 0x10
/* 80169B40 00166C20  4E 80 00 20 */	blr
.endfn Reset__13zNPCBPlanktonFv

# zNPCBPlankton::Destroy()
.fn Destroy__13zNPCBPlanktonFv, global
/* 80169B44 00166C24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80169B48 00166C28  7C 08 02 A6 */	mflr r0
/* 80169B4C 00166C2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80169B50 00166C30  4B F8 5E C1 */	bl Destroy__10zNPCCommonFv
/* 80169B54 00166C34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80169B58 00166C38  7C 08 03 A6 */	mtlr r0
/* 80169B5C 00166C3C  38 21 00 10 */	addi r1, r1, 0x10
/* 80169B60 00166C40  4E 80 00 20 */	blr
.endfn Destroy__13zNPCBPlanktonFv

# zNPCBPlankton::Process(xScene*, float)
.fn Process__13zNPCBPlanktonFP6xScenef, global
/* 80169B64 00166C44  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80169B68 00166C48  7C 08 02 A6 */	mflr r0
/* 80169B6C 00166C4C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80169B70 00166C50  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80169B74 00166C54  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 80169B78 00166C58  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80169B7C 00166C5C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80169B80 00166C60  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80169B84 00166C64  7C 7E 1B 78 */	mr r30, r3
/* 80169B88 00166C68  FF E0 08 90 */	fmr f31, f1
/* 80169B8C 00166C6C  88 03 02 B4 */	lbz r0, 0x2b4(r3)
/* 80169B90 00166C70  7C 9F 23 78 */	mr r31, r4
/* 80169B94 00166C74  28 00 00 00 */	cmplwi r0, 0x0
/* 80169B98 00166C78  40 82 00 30 */	bne .L_80169BC8
/* 80169B9C 00166C7C  38 00 00 01 */	li r0, 0x1
/* 80169BA0 00166C80  98 1E 02 B4 */	stb r0, 0x2b4(r30)
/* 80169BA4 00166C84  88 1E 06 A4 */	lbz r0, 0x6a4(r30)
/* 80169BA8 00166C88  28 00 00 00 */	cmplwi r0, 0x0
/* 80169BAC 00166C8C  40 82 00 1C */	bne .L_80169BC8
/* 80169BB0 00166C90  38 80 00 00 */	li r4, 0x0
/* 80169BB4 00166C94  38 A0 00 00 */	li r5, 0x0
/* 80169BB8 00166C98  38 C0 00 01 */	li r6, 0x1
/* 80169BBC 00166C9C  48 00 3B C1 */	bl say__13zNPCBPlanktonFiib
/* 80169BC0 00166CA0  38 00 00 01 */	li r0, 0x1
/* 80169BC4 00166CA4  98 1E 06 A4 */	stb r0, 0x6a4(r30)
.L_80169BC8:
/* 80169BC8 00166CA8  FC 20 F8 90 */	fmr f1, f31
/* 80169BCC 00166CAC  38 7E 03 B8 */	addi r3, r30, 0x3b8
/* 80169BD0 00166CB0  48 01 3C FD */	bl update__17xLaserBoltEmitterFf
/* 80169BD4 00166CB4  C0 1E 02 C8 */	lfs f0, 0x2c8(r30)
/* 80169BD8 00166CB8  EC 00 F8 2A */	fadds f0, f0, f31
/* 80169BDC 00166CBC  D0 1E 02 C8 */	stfs f0, 0x2c8(r30)
/* 80169BE0 00166CC0  80 1E 02 C4 */	lwz r0, 0x2c4(r30)
/* 80169BE4 00166CC4  2C 00 00 01 */	cmpwi r0, 0x1
/* 80169BE8 00166CC8  40 82 00 30 */	bne .L_80169C18
/* 80169BEC 00166CCC  7F C3 F3 78 */	mr r3, r30
/* 80169BF0 00166CD0  48 00 3A E5 */	bl player_left_territory__13zNPCBPlanktonCFv
/* 80169BF4 00166CD4  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80169BF8 00166CD8  41 82 00 20 */	beq .L_80169C18
/* 80169BFC 00166CDC  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 80169C00 00166CE0  3C 60 4E 47 */	lis r3, 0x4e47
/* 80169C04 00166CE4  38 83 42 4D */	addi r4, r3, 0x424d
/* 80169C08 00166CE8  38 A0 00 01 */	li r5, 0x1
/* 80169C0C 00166CEC  D0 1E 02 DC */	stfs f0, 0x2dc(r30)
/* 80169C10 00166CF0  80 7E 02 28 */	lwz r3, 0x228(r30)
/* 80169C14 00166CF4  4B FA 3B 1D */	bl GoalSet__7xPsycheFii
.L_80169C18:
/* 80169C18 00166CF8  7F C3 F3 78 */	mr r3, r30
/* 80169C1C 00166CFC  4B F8 97 C5 */	bl SomethingWonderful__10zNPCCommonFv
/* 80169C20 00166D00  70 60 00 23 */	andi. r0, r3, 0x23
/* 80169C24 00166D04  40 82 00 14 */	bne .L_80169C38
/* 80169C28 00166D08  FC 20 F8 90 */	fmr f1, f31
/* 80169C2C 00166D0C  80 7E 02 28 */	lwz r3, 0x228(r30)
/* 80169C30 00166D10  38 80 00 00 */	li r4, 0x0
/* 80169C34 00166D14  4B FA 44 2D */	bl Timestep__7xPsycheFfPv
.L_80169C38:
/* 80169C38 00166D18  88 1E 02 B5 */	lbz r0, 0x2b5(r30)
/* 80169C3C 00166D1C  28 00 00 00 */	cmplwi r0, 0x0
/* 80169C40 00166D20  41 82 00 48 */	beq .L_80169C88
/* 80169C44 00166D24  3C 80 80 3C */	lis r4, globals@ha
/* 80169C48 00166D28  7F C3 F3 78 */	mr r3, r30
/* 80169C4C 00166D2C  38 84 05 58 */	addi r4, r4, globals@l
/* 80169C50 00166D30  80 84 07 04 */	lwz r4, 0x704(r4)
/* 80169C54 00166D34  83 A4 00 4C */	lwz r29, 0x4c(r4)
/* 80169C58 00166D38  48 00 5F 61 */	bl location__13zNPCBPlanktonCFv
/* 80169C5C 00166D3C  7C 64 1B 78 */	mr r4, r3
/* 80169C60 00166D40  C0 7D 00 30 */	lfs f3, 0x30(r29)
/* 80169C64 00166D44  C0 23 00 00 */	lfs f1, 0x0(r3)
/* 80169C68 00166D48  38 7E 04 60 */	addi r3, r30, 0x460
/* 80169C6C 00166D4C  C0 5D 00 38 */	lfs f2, 0x38(r29)
/* 80169C70 00166D50  C0 04 00 08 */	lfs f0, 0x8(r4)
/* 80169C74 00166D54  EC 23 08 28 */	fsubs f1, f3, f1
/* 80169C78 00166D58  EC 42 00 28 */	fsubs f2, f2, f0
/* 80169C7C 00166D5C  4B EB C6 9D */	bl assign__5xVec2Fff
/* 80169C80 00166D60  38 7E 04 60 */	addi r3, r30, 0x460
/* 80169C84 00166D64  4B FB 38 99 */	bl normalize__5xVec2Fv
.L_80169C88:
/* 80169C88 00166D68  FC 20 F8 90 */	fmr f1, f31
/* 80169C8C 00166D6C  7F C3 F3 78 */	mr r3, r30
/* 80169C90 00166D70  48 00 29 5D */	bl update_follow__13zNPCBPlanktonFf
/* 80169C94 00166D74  FC 20 F8 90 */	fmr f1, f31
/* 80169C98 00166D78  7F C3 F3 78 */	mr r3, r30
/* 80169C9C 00166D7C  48 00 23 A9 */	bl update_turn__13zNPCBPlanktonFf
/* 80169CA0 00166D80  FC 20 F8 90 */	fmr f1, f31
/* 80169CA4 00166D84  7F C3 F3 78 */	mr r3, r30
/* 80169CA8 00166D88  48 00 24 A1 */	bl update_move__13zNPCBPlanktonFf
/* 80169CAC 00166D8C  FC 20 F8 90 */	fmr f1, f31
/* 80169CB0 00166D90  7F C3 F3 78 */	mr r3, r30
/* 80169CB4 00166D94  48 00 29 35 */	bl update_animation__13zNPCBPlanktonFf
/* 80169CB8 00166D98  7F C3 F3 78 */	mr r3, r30
/* 80169CBC 00166D9C  48 00 2C A5 */	bl check_player_damage__13zNPCBPlanktonFv
/* 80169CC0 00166DA0  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80169CC4 00166DA4  41 82 00 10 */	beq .L_80169CD4
/* 80169CC8 00166DA8  7F C3 F3 78 */	mr r3, r30
/* 80169CCC 00166DAC  38 80 00 01 */	li r4, 0x1
/* 80169CD0 00166DB0  4B F0 C7 61 */	bl zEntPlayer_Damage__FP5xBaseUi
.L_80169CD4:
/* 80169CD4 00166DB4  FC 20 F8 90 */	fmr f1, f31
/* 80169CD8 00166DB8  7F C3 F3 78 */	mr r3, r30
/* 80169CDC 00166DBC  48 00 2B 81 */	bl update_aim_gun__13zNPCBPlanktonFf
/* 80169CE0 00166DC0  FC 20 F8 90 */	fmr f1, f31
/* 80169CE4 00166DC4  7F C3 F3 78 */	mr r3, r30
/* 80169CE8 00166DC8  48 00 27 15 */	bl update_dialog__13zNPCBPlanktonFf
/* 80169CEC 00166DCC  38 7E 03 B8 */	addi r3, r30, 0x3b8
/* 80169CF0 00166DD0  48 00 65 75 */	bl visible__17xLaserBoltEmitterCFv
/* 80169CF4 00166DD4  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80169CF8 00166DD8  41 82 00 10 */	beq .L_80169D08
/* 80169CFC 00166DDC  80 1E 02 34 */	lwz r0, 0x234(r30)
/* 80169D00 00166DE0  60 00 00 02 */	ori r0, r0, 0x2
/* 80169D04 00166DE4  90 1E 02 34 */	stw r0, 0x234(r30)
.L_80169D08:
/* 80169D08 00166DE8  FC 20 F8 90 */	fmr f1, f31
/* 80169D0C 00166DEC  7F C3 F3 78 */	mr r3, r30
/* 80169D10 00166DF0  7F E4 FB 78 */	mr r4, r31
/* 80169D14 00166DF4  4B F8 63 DD */	bl Process__10zNPCCommonFP6xScenef
/* 80169D18 00166DF8  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80169D1C 00166DFC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80169D20 00166E00  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80169D24 00166E04  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80169D28 00166E08  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80169D2C 00166E0C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80169D30 00166E10  7C 08 03 A6 */	mtlr r0
/* 80169D34 00166E14  38 21 00 30 */	addi r1, r1, 0x30
/* 80169D38 00166E18  4E 80 00 20 */	blr
.endfn Process__13zNPCBPlanktonFP6xScenef

# zNPCBPlankton::SysEvent(xBase*, xBase*, unsigned int, const float*, xBase*, int*)
.fn SysEvent__13zNPCBPlanktonFP5xBaseP5xBaseUiPCfP5xBasePi, global
/* 80169D3C 00166E1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80169D40 00166E20  7C 08 02 A6 */	mflr r0
/* 80169D44 00166E24  90 01 00 14 */	stw r0, 0x14(r1)
/* 80169D48 00166E28  38 00 00 00 */	li r0, 0x0
/* 80169D4C 00166E2C  90 09 00 00 */	stw r0, 0x0(r9)
/* 80169D50 00166E30  4B F8 66 81 */	bl SysEvent__10zNPCCommonFP5xBaseP5xBaseUiPCfP5xBasePi
/* 80169D54 00166E34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80169D58 00166E38  7C 08 03 A6 */	mtlr r0
/* 80169D5C 00166E3C  38 21 00 10 */	addi r1, r1, 0x10
/* 80169D60 00166E40  4E 80 00 20 */	blr
.endfn SysEvent__13zNPCBPlanktonFP5xBaseP5xBaseUiPCfP5xBasePi

# zNPCBPlankton::Render()
.fn Render__13zNPCBPlanktonFv, global
/* 80169D64 00166E44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80169D68 00166E48  7C 08 02 A6 */	mflr r0
/* 80169D6C 00166E4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80169D70 00166E50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80169D74 00166E54  7C 7F 1B 78 */	mr r31, r3
/* 80169D78 00166E58  4B F8 A9 C5 */	bl Render__9xNPCBasicFv
/* 80169D7C 00166E5C  7F E3 FB 78 */	mr r3, r31
/* 80169D80 00166E60  48 00 5E 55 */	bl render_debug__13zNPCBPlanktonFv
/* 80169D84 00166E64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80169D88 00166E68  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80169D8C 00166E6C  7C 08 03 A6 */	mtlr r0
/* 80169D90 00166E70  38 21 00 10 */	addi r1, r1, 0x10
/* 80169D94 00166E74  4E 80 00 20 */	blr
.endfn Render__13zNPCBPlanktonFv

# zNPCBPlankton::RenderExtraPostParticles()
.fn RenderExtraPostParticles__13zNPCBPlanktonFv, global
/* 80169D98 00166E78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80169D9C 00166E7C  7C 08 02 A6 */	mflr r0
/* 80169DA0 00166E80  90 01 00 14 */	stw r0, 0x14(r1)
/* 80169DA4 00166E84  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80169DA8 00166E88  7C 7F 1B 78 */	mr r31, r3
/* 80169DAC 00166E8C  38 7F 03 B8 */	addi r3, r31, 0x3b8
/* 80169DB0 00166E90  48 00 64 B5 */	bl visible__17xLaserBoltEmitterCFv
/* 80169DB4 00166E94  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80169DB8 00166E98  41 82 00 24 */	beq .L_80169DDC
/* 80169DBC 00166E9C  38 60 00 0A */	li r3, 0xa
/* 80169DC0 00166EA0  38 80 00 05 */	li r4, 0x5
/* 80169DC4 00166EA4  48 0C 5A 19 */	bl RwRenderStateSet
/* 80169DC8 00166EA8  38 60 00 0B */	li r3, 0xb
/* 80169DCC 00166EAC  38 80 00 02 */	li r4, 0x2
/* 80169DD0 00166EB0  48 0C 5A 0D */	bl RwRenderStateSet
/* 80169DD4 00166EB4  38 7F 03 B8 */	addi r3, r31, 0x3b8
/* 80169DD8 00166EB8  48 01 3D 8D */	bl render__17xLaserBoltEmitterFv
.L_80169DDC:
/* 80169DDC 00166EBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80169DE0 00166EC0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80169DE4 00166EC4  7C 08 03 A6 */	mtlr r0
/* 80169DE8 00166EC8  38 21 00 10 */	addi r1, r1, 0x10
/* 80169DEC 00166ECC  4E 80 00 20 */	blr
.endfn RenderExtraPostParticles__13zNPCBPlanktonFv

# zNPCBPlankton::ParseINI()
.fn ParseINI__13zNPCBPlanktonFv, global
/* 80169DF0 00166ED0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80169DF4 00166ED4  7C 08 02 A6 */	mflr r0
/* 80169DF8 00166ED8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80169DFC 00166EDC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80169E00 00166EE0  7C 7F 1B 78 */	mr r31, r3
/* 80169E04 00166EE4  4B F8 76 2D */	bl ParseINI__10zNPCCommonFv
/* 80169E08 00166EE8  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 80169E0C 00166EEC  80 9F 02 44 */	lwz r4, 0x244(r31)
/* 80169E10 00166EF0  80 BF 02 48 */	lwz r5, 0x248(r31)
/* 80169E14 00166EF4  38 63 A1 A0 */	addi r3, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 80169E18 00166EF8  48 00 00 19 */	bl "load__Q234@unnamed@zNPCTypeBossPlankton_cpp@11tweak_groupFP16xModelAssetParamUi"
/* 80169E1C 00166EFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80169E20 00166F00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80169E24 00166F04  7C 08 03 A6 */	mtlr r0
/* 80169E28 00166F08  38 21 00 10 */	addi r1, r1, 0x10
/* 80169E2C 00166F0C  4E 80 00 20 */	blr
.endfn ParseINI__13zNPCBPlanktonFv

# @unnamed@zNPCTypeBossPlankton_cpp@::tweak_group::load(xModelAssetParam*, unsigned int)
.fn "load__Q234@unnamed@zNPCTypeBossPlankton_cpp@11tweak_groupFP16xModelAssetParamUi", local
/* 80169E30 00166F10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80169E34 00166F14  7C 08 02 A6 */	mflr r0
/* 80169E38 00166F18  7C A6 2B 78 */	mr r6, r5
/* 80169E3C 00166F1C  7C 85 23 78 */	mr r5, r4
/* 80169E40 00166F20  90 01 00 14 */	stw r0, 0x14(r1)
/* 80169E44 00166F24  38 80 00 01 */	li r4, 0x1
/* 80169E48 00166F28  38 E0 00 00 */	li r7, 0x0
/* 80169E4C 00166F2C  48 00 00 15 */	bl "register_tweaks__Q234@unnamed@zNPCTypeBossPlankton_cpp@11tweak_groupFbP16xModelAssetParamUiPCc"
/* 80169E50 00166F30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80169E54 00166F34  7C 08 03 A6 */	mtlr r0
/* 80169E58 00166F38  38 21 00 10 */	addi r1, r1, 0x10
/* 80169E5C 00166F3C  4E 80 00 20 */	blr
.endfn "load__Q234@unnamed@zNPCTypeBossPlankton_cpp@11tweak_groupFP16xModelAssetParamUi"

# @unnamed@zNPCTypeBossPlankton_cpp@::tweak_group::register_tweaks(bool, xModelAssetParam*, unsigned int, const char*)
.fn "register_tweaks__Q234@unnamed@zNPCTypeBossPlankton_cpp@11tweak_groupFbP16xModelAssetParamUiPCc", local
/* 80169E60 00166F40  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80169E64 00166F44  7C 08 02 A6 */	mflr r0
/* 80169E68 00166F48  3C E0 80 27 */	lis r7, "@896"@ha
/* 80169E6C 00166F4C  90 01 00 64 */	stw r0, 0x64(r1)
/* 80169E70 00166F50  54 80 06 3F */	clrlwi. r0, r4, 24
/* 80169E74 00166F54  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 80169E78 00166F58  7C DF 33 78 */	mr r31, r6
/* 80169E7C 00166F5C  93 C1 00 58 */	stw r30, 0x58(r1)
/* 80169E80 00166F60  7C BE 2B 78 */	mr r30, r5
/* 80169E84 00166F64  93 A1 00 54 */	stw r29, 0x54(r1)
/* 80169E88 00166F68  7C 9D 23 78 */	mr r29, r4
/* 80169E8C 00166F6C  93 81 00 50 */	stw r28, 0x50(r1)
/* 80169E90 00166F70  7C 7C 1B 78 */	mr r28, r3
/* 80169E94 00166F74  84 87 12 DC */	lwzu r4, "@896"@l(r7)
/* 80169E98 00166F78  80 67 00 04 */	lwz r3, 0x4(r7)
/* 80169E9C 00166F7C  80 07 00 08 */	lwz r0, 0x8(r7)
/* 80169EA0 00166F80  90 81 00 38 */	stw r4, 0x38(r1)
/* 80169EA4 00166F84  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80169EA8 00166F88  90 01 00 40 */	stw r0, 0x40(r1)
/* 80169EAC 00166F8C  41 82 00 34 */	beq .L_80169EE0
/* 80169EB0 00166F90  C0 02 AB 2C */	lfs f0, "@1887"@sda21(r2)
/* 80169EB4 00166F94  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80169EB8 00166F98  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 80169EBC 00166F9C  7F C4 F3 78 */	mr r4, r30
/* 80169EC0 00166FA0  D0 1C 00 18 */	stfs f0, 0x18(r28)
/* 80169EC4 00166FA4  7F E5 FB 78 */	mr r5, r31
/* 80169EC8 00166FA8  38 7C 00 18 */	addi r3, r28, 0x18
/* 80169ECC 00166FAC  38 C6 01 A3 */	addi r6, r6, 0x1a3
/* 80169ED0 00166FB0  C0 22 AB 30 */	lfs f1, "@1888"@sda21(r2)
/* 80169ED4 00166FB4  C0 42 AB 34 */	lfs f2, "@1889"@sda21(r2)
/* 80169ED8 00166FB8  C0 62 AB 38 */	lfs f3, "@1890"@sda21(r2)
/* 80169EDC 00166FBC  48 00 64 F9 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80169EE0:
/* 80169EE0 00166FC0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80169EE4 00166FC4  41 82 00 34 */	beq .L_80169F18
/* 80169EE8 00166FC8  C0 02 AB 3C */	lfs f0, "@1891"@sda21(r2)
/* 80169EEC 00166FCC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80169EF0 00166FD0  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 80169EF4 00166FD4  7F C4 F3 78 */	mr r4, r30
/* 80169EF8 00166FD8  D0 1C 00 1C */	stfs f0, 0x1c(r28)
/* 80169EFC 00166FDC  7F E5 FB 78 */	mr r5, r31
/* 80169F00 00166FE0  38 7C 00 1C */	addi r3, r28, 0x1c
/* 80169F04 00166FE4  38 C6 01 AE */	addi r6, r6, 0x1ae
/* 80169F08 00166FE8  C0 22 AB 30 */	lfs f1, "@1888"@sda21(r2)
/* 80169F0C 00166FEC  C0 42 AB 34 */	lfs f2, "@1889"@sda21(r2)
/* 80169F10 00166FF0  C0 62 AB 38 */	lfs f3, "@1890"@sda21(r2)
/* 80169F14 00166FF4  48 00 64 C1 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80169F18:
/* 80169F18 00166FF8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80169F1C 00166FFC  41 82 00 34 */	beq .L_80169F50
/* 80169F20 00167000  C0 02 AB 40 */	lfs f0, "@1892"@sda21(r2)
/* 80169F24 00167004  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80169F28 00167008  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 80169F2C 0016700C  7F C4 F3 78 */	mr r4, r30
/* 80169F30 00167010  D0 1C 00 20 */	stfs f0, 0x20(r28)
/* 80169F34 00167014  7F E5 FB 78 */	mr r5, r31
/* 80169F38 00167018  38 7C 00 20 */	addi r3, r28, 0x20
/* 80169F3C 0016701C  38 C6 01 BB */	addi r6, r6, 0x1bb
/* 80169F40 00167020  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 80169F44 00167024  C0 42 AB 44 */	lfs f2, "@1893"@sda21(r2)
/* 80169F48 00167028  C0 62 AB 38 */	lfs f3, "@1890"@sda21(r2)
/* 80169F4C 0016702C  48 00 64 89 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80169F50:
/* 80169F50 00167030  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80169F54 00167034  41 82 00 34 */	beq .L_80169F88
/* 80169F58 00167038  C0 02 AB 48 */	lfs f0, "@1894"@sda21(r2)
/* 80169F5C 0016703C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80169F60 00167040  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 80169F64 00167044  7F C4 F3 78 */	mr r4, r30
/* 80169F68 00167048  D0 1C 00 24 */	stfs f0, 0x24(r28)
/* 80169F6C 0016704C  7F E5 FB 78 */	mr r5, r31
/* 80169F70 00167050  38 7C 00 24 */	addi r3, r28, 0x24
/* 80169F74 00167054  38 C6 01 C4 */	addi r6, r6, 0x1c4
/* 80169F78 00167058  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 80169F7C 0016705C  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 80169F80 00167060  C0 62 AB 38 */	lfs f3, "@1890"@sda21(r2)
/* 80169F84 00167064  48 00 64 51 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80169F88:
/* 80169F88 00167068  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80169F8C 0016706C  41 82 00 34 */	beq .L_80169FC0
/* 80169F90 00167070  C0 02 AB 4C */	lfs f0, "@1895"@sda21(r2)
/* 80169F94 00167074  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80169F98 00167078  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 80169F9C 0016707C  7F C4 F3 78 */	mr r4, r30
/* 80169FA0 00167080  D0 1C 00 28 */	stfs f0, 0x28(r28)
/* 80169FA4 00167084  7F E5 FB 78 */	mr r5, r31
/* 80169FA8 00167088  38 7C 00 28 */	addi r3, r28, 0x28
/* 80169FAC 0016708C  38 C6 01 D2 */	addi r6, r6, 0x1d2
/* 80169FB0 00167090  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 80169FB4 00167094  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 80169FB8 00167098  C0 62 AB 24 */	lfs f3, "@1754"@sda21(r2)
/* 80169FBC 0016709C  48 00 64 19 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80169FC0:
/* 80169FC0 001670A0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80169FC4 001670A4  41 82 00 34 */	beq .L_80169FF8
/* 80169FC8 001670A8  C0 02 AB 4C */	lfs f0, "@1895"@sda21(r2)
/* 80169FCC 001670AC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80169FD0 001670B0  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 80169FD4 001670B4  7F C4 F3 78 */	mr r4, r30
/* 80169FD8 001670B8  D0 1C 00 2C */	stfs f0, 0x2c(r28)
/* 80169FDC 001670BC  7F E5 FB 78 */	mr r5, r31
/* 80169FE0 001670C0  38 7C 00 2C */	addi r3, r28, 0x2c
/* 80169FE4 001670C4  38 C6 01 DA */	addi r6, r6, 0x1da
/* 80169FE8 001670C8  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 80169FEC 001670CC  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 80169FF0 001670D0  C0 62 AB 24 */	lfs f3, "@1754"@sda21(r2)
/* 80169FF4 001670D4  48 00 63 E1 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_80169FF8:
/* 80169FF8 001670D8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80169FFC 001670DC  41 82 00 34 */	beq .L_8016A030
/* 8016A000 001670E0  C0 02 AB 20 */	lfs f0, "@1753"@sda21(r2)
/* 8016A004 001670E4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A008 001670E8  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A00C 001670EC  7F C4 F3 78 */	mr r4, r30
/* 8016A010 001670F0  D0 1C 00 30 */	stfs f0, 0x30(r28)
/* 8016A014 001670F4  7F E5 FB 78 */	mr r5, r31
/* 8016A018 001670F8  38 7C 00 30 */	addi r3, r28, 0x30
/* 8016A01C 001670FC  38 C6 01 E7 */	addi r6, r6, 0x1e7
/* 8016A020 00167100  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A024 00167104  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016A028 00167108  C0 62 AB 50 */	lfs f3, "@1896"@sda21(r2)
/* 8016A02C 0016710C  48 00 63 A9 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A030:
/* 8016A030 00167110  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A034 00167114  41 82 00 34 */	beq .L_8016A068
/* 8016A038 00167118  C0 02 AB 20 */	lfs f0, "@1753"@sda21(r2)
/* 8016A03C 0016711C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A040 00167120  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A044 00167124  7F C4 F3 78 */	mr r4, r30
/* 8016A048 00167128  D0 1C 00 34 */	stfs f0, 0x34(r28)
/* 8016A04C 0016712C  7F E5 FB 78 */	mr r5, r31
/* 8016A050 00167130  38 7C 00 34 */	addi r3, r28, 0x34
/* 8016A054 00167134  38 C6 01 F1 */	addi r6, r6, 0x1f1
/* 8016A058 00167138  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A05C 0016713C  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016A060 00167140  C0 62 AB 54 */	lfs f3, "@1897"@sda21(r2)
/* 8016A064 00167144  48 00 63 71 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A068:
/* 8016A068 00167148  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A06C 0016714C  41 82 00 34 */	beq .L_8016A0A0
/* 8016A070 00167150  C0 02 AB 58 */	lfs f0, "@1898"@sda21(r2)
/* 8016A074 00167154  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A078 00167158  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A07C 0016715C  7F C4 F3 78 */	mr r4, r30
/* 8016A080 00167160  D0 1C 00 48 */	stfs f0, 0x48(r28)
/* 8016A084 00167164  7F E5 FB 78 */	mr r5, r31
/* 8016A088 00167168  38 7C 00 48 */	addi r3, r28, 0x48
/* 8016A08C 0016716C  38 C6 02 00 */	addi r6, r6, 0x200
/* 8016A090 00167170  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A094 00167174  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016A098 00167178  C0 62 AB 54 */	lfs f3, "@1897"@sda21(r2)
/* 8016A09C 0016717C  48 00 63 39 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A0A0:
/* 8016A0A0 00167180  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A0A4 00167184  41 82 00 34 */	beq .L_8016A0D8
/* 8016A0A8 00167188  C0 02 AB 20 */	lfs f0, "@1753"@sda21(r2)
/* 8016A0AC 0016718C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A0B0 00167190  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A0B4 00167194  7F C4 F3 78 */	mr r4, r30
/* 8016A0B8 00167198  D0 1C 00 4C */	stfs f0, 0x4c(r28)
/* 8016A0BC 0016719C  7F E5 FB 78 */	mr r5, r31
/* 8016A0C0 001671A0  38 7C 00 4C */	addi r3, r28, 0x4c
/* 8016A0C4 001671A4  38 C6 02 0F */	addi r6, r6, 0x20f
/* 8016A0C8 001671A8  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A0CC 001671AC  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016A0D0 001671B0  C0 62 AB 54 */	lfs f3, "@1897"@sda21(r2)
/* 8016A0D4 001671B4  48 00 63 01 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A0D8:
/* 8016A0D8 001671B8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A0DC 001671BC  41 82 00 34 */	beq .L_8016A110
/* 8016A0E0 001671C0  C0 02 AB 5C */	lfs f0, "@1899"@sda21(r2)
/* 8016A0E4 001671C4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A0E8 001671C8  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A0EC 001671CC  7F C4 F3 78 */	mr r4, r30
/* 8016A0F0 001671D0  D0 1C 00 38 */	stfs f0, 0x38(r28)
/* 8016A0F4 001671D4  7F E5 FB 78 */	mr r5, r31
/* 8016A0F8 001671D8  38 7C 00 38 */	addi r3, r28, 0x38
/* 8016A0FC 001671DC  38 C6 02 1F */	addi r6, r6, 0x21f
/* 8016A100 001671E0  C0 22 AB 30 */	lfs f1, "@1888"@sda21(r2)
/* 8016A104 001671E4  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016A108 001671E8  C0 62 AB 3C */	lfs f3, "@1891"@sda21(r2)
/* 8016A10C 001671EC  48 00 62 C9 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A110:
/* 8016A110 001671F0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A114 001671F4  41 82 00 34 */	beq .L_8016A148
/* 8016A118 001671F8  C0 02 AB 60 */	lfs f0, "@1900"@sda21(r2)
/* 8016A11C 001671FC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A120 00167200  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A124 00167204  7F C4 F3 78 */	mr r4, r30
/* 8016A128 00167208  D0 1C 00 3C */	stfs f0, 0x3c(r28)
/* 8016A12C 0016720C  7F E5 FB 78 */	mr r5, r31
/* 8016A130 00167210  38 7C 00 3C */	addi r3, r28, 0x3c
/* 8016A134 00167214  38 C6 02 2E */	addi r6, r6, 0x22e
/* 8016A138 00167218  C0 22 AB 30 */	lfs f1, "@1888"@sda21(r2)
/* 8016A13C 0016721C  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016A140 00167220  C0 62 AB 3C */	lfs f3, "@1891"@sda21(r2)
/* 8016A144 00167224  48 00 62 91 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A148:
/* 8016A148 00167228  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A14C 0016722C  41 82 00 34 */	beq .L_8016A180
/* 8016A150 00167230  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016A154 00167234  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A158 00167238  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A15C 0016723C  7F C4 F3 78 */	mr r4, r30
/* 8016A160 00167240  D0 1C 00 40 */	stfs f0, 0x40(r28)
/* 8016A164 00167244  7F E5 FB 78 */	mr r5, r31
/* 8016A168 00167248  38 7C 00 40 */	addi r3, r28, 0x40
/* 8016A16C 0016724C  38 C6 02 3D */	addi r6, r6, 0x23d
/* 8016A170 00167250  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A174 00167254  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016A178 00167258  C0 62 AB 50 */	lfs f3, "@1896"@sda21(r2)
/* 8016A17C 0016725C  48 00 62 59 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A180:
/* 8016A180 00167260  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A184 00167264  41 82 00 34 */	beq .L_8016A1B8
/* 8016A188 00167268  C0 02 AB 64 */	lfs f0, "@1901"@sda21(r2)
/* 8016A18C 0016726C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A190 00167270  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A194 00167274  7F C4 F3 78 */	mr r4, r30
/* 8016A198 00167278  D0 1C 00 44 */	stfs f0, 0x44(r28)
/* 8016A19C 0016727C  7F E5 FB 78 */	mr r5, r31
/* 8016A1A0 00167280  38 7C 00 44 */	addi r3, r28, 0x44
/* 8016A1A4 00167284  38 C6 02 4E */	addi r6, r6, 0x24e
/* 8016A1A8 00167288  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A1AC 0016728C  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016A1B0 00167290  C0 62 AB 50 */	lfs f3, "@1896"@sda21(r2)
/* 8016A1B4 00167294  48 00 62 21 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A1B8:
/* 8016A1B8 00167298  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A1BC 0016729C  41 82 00 4C */	beq .L_8016A208
/* 8016A1C0 001672A0  C0 42 AB 68 */	lfs f2, "@1902"@sda21(r2)
/* 8016A1C4 001672A4  38 61 00 2C */	addi r3, r1, 0x2c
/* 8016A1C8 001672A8  C0 22 AB 50 */	lfs f1, "@1896"@sda21(r2)
/* 8016A1CC 001672AC  FC 60 10 90 */	fmr f3, f2
/* 8016A1D0 001672B0  4B EF 5D B9 */	bl create__5xVec3Ffff
/* 8016A1D4 001672B4  38 7C 00 50 */	addi r3, r28, 0x50
/* 8016A1D8 001672B8  38 81 00 2C */	addi r4, r1, 0x2c
/* 8016A1DC 001672BC  4B EA 10 89 */	bl __as__5xVec3FRC5xVec3
/* 8016A1E0 001672C0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A1E4 001672C4  7F C7 F3 78 */	mr r7, r30
/* 8016A1E8 001672C8  38 A3 14 64 */	addi r5, r3, "@stringBase0"@l
/* 8016A1EC 001672CC  7F E8 FB 78 */	mr r8, r31
/* 8016A1F0 001672D0  38 7C 00 50 */	addi r3, r28, 0x50
/* 8016A1F4 001672D4  38 80 00 00 */	li r4, 0x0
/* 8016A1F8 001672D8  39 25 02 5F */	addi r9, r5, 0x25f
/* 8016A1FC 001672DC  38 A0 00 00 */	li r5, 0x0
/* 8016A200 001672E0  38 C0 00 00 */	li r6, 0x0
/* 8016A204 001672E4  48 00 61 81 */	bl "load_param<5xVec3,i>__10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc"
.L_8016A208:
/* 8016A208 001672E8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A20C 001672EC  41 82 00 4C */	beq .L_8016A258
/* 8016A210 001672F0  C0 22 AB 68 */	lfs f1, "@1902"@sda21(r2)
/* 8016A214 001672F4  38 61 00 20 */	addi r3, r1, 0x20
/* 8016A218 001672F8  C0 42 AB 50 */	lfs f2, "@1896"@sda21(r2)
/* 8016A21C 001672FC  FC 60 08 90 */	fmr f3, f1
/* 8016A220 00167300  4B EF 5D 69 */	bl create__5xVec3Ffff
/* 8016A224 00167304  38 7C 00 5C */	addi r3, r28, 0x5c
/* 8016A228 00167308  38 81 00 20 */	addi r4, r1, 0x20
/* 8016A22C 0016730C  4B EA 10 39 */	bl __as__5xVec3FRC5xVec3
/* 8016A230 00167310  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A234 00167314  7F C7 F3 78 */	mr r7, r30
/* 8016A238 00167318  38 A3 14 64 */	addi r5, r3, "@stringBase0"@l
/* 8016A23C 0016731C  7F E8 FB 78 */	mr r8, r31
/* 8016A240 00167320  38 7C 00 5C */	addi r3, r28, 0x5c
/* 8016A244 00167324  38 80 00 00 */	li r4, 0x0
/* 8016A248 00167328  39 25 02 70 */	addi r9, r5, 0x270
/* 8016A24C 0016732C  38 A0 00 00 */	li r5, 0x0
/* 8016A250 00167330  38 C0 00 00 */	li r6, 0x0
/* 8016A254 00167334  48 00 61 31 */	bl "load_param<5xVec3,i>__10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc"
.L_8016A258:
/* 8016A258 00167338  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A25C 0016733C  41 82 00 34 */	beq .L_8016A290
/* 8016A260 00167340  C0 02 AB 0C */	lfs f0, "@1585"@sda21(r2)
/* 8016A264 00167344  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A268 00167348  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A26C 0016734C  7F C4 F3 78 */	mr r4, r30
/* 8016A270 00167350  D0 1C 00 68 */	stfs f0, 0x68(r28)
/* 8016A274 00167354  7F E5 FB 78 */	mr r5, r31
/* 8016A278 00167358  38 7C 00 68 */	addi r3, r28, 0x68
/* 8016A27C 0016735C  38 C6 02 83 */	addi r6, r6, 0x283
/* 8016A280 00167360  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A284 00167364  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016A288 00167368  C0 62 AB 54 */	lfs f3, "@1897"@sda21(r2)
/* 8016A28C 0016736C  48 00 61 49 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A290:
/* 8016A290 00167370  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A294 00167374  41 82 00 34 */	beq .L_8016A2C8
/* 8016A298 00167378  C0 02 AB 6C */	lfs f0, "@1903"@sda21(r2)
/* 8016A29C 0016737C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A2A0 00167380  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A2A4 00167384  7F C4 F3 78 */	mr r4, r30
/* 8016A2A8 00167388  D0 1C 00 6C */	stfs f0, 0x6c(r28)
/* 8016A2AC 0016738C  7F E5 FB 78 */	mr r5, r31
/* 8016A2B0 00167390  38 7C 00 6C */	addi r3, r28, 0x6c
/* 8016A2B4 00167394  38 C6 02 9C */	addi r6, r6, 0x29c
/* 8016A2B8 00167398  C0 22 AB 30 */	lfs f1, "@1888"@sda21(r2)
/* 8016A2BC 0016739C  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016A2C0 001673A0  C0 62 AB 70 */	lfs f3, "@1904"@sda21(r2)
/* 8016A2C4 001673A4  48 00 61 11 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A2C8:
/* 8016A2C8 001673A8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A2CC 001673AC  41 82 00 4C */	beq .L_8016A318
/* 8016A2D0 001673B0  C0 22 AB 50 */	lfs f1, "@1896"@sda21(r2)
/* 8016A2D4 001673B4  38 61 00 14 */	addi r3, r1, 0x14
/* 8016A2D8 001673B8  C0 42 AB 4C */	lfs f2, "@1895"@sda21(r2)
/* 8016A2DC 001673BC  FC 60 08 90 */	fmr f3, f1
/* 8016A2E0 001673C0  4B EF 5C A9 */	bl create__5xVec3Ffff
/* 8016A2E4 001673C4  38 7C 00 70 */	addi r3, r28, 0x70
/* 8016A2E8 001673C8  38 81 00 14 */	addi r4, r1, 0x14
/* 8016A2EC 001673CC  4B EA 0F 79 */	bl __as__5xVec3FRC5xVec3
/* 8016A2F0 001673D0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A2F4 001673D4  7F C7 F3 78 */	mr r7, r30
/* 8016A2F8 001673D8  38 A3 14 64 */	addi r5, r3, "@stringBase0"@l
/* 8016A2FC 001673DC  7F E8 FB 78 */	mr r8, r31
/* 8016A300 001673E0  38 7C 00 70 */	addi r3, r28, 0x70
/* 8016A304 001673E4  38 80 00 00 */	li r4, 0x0
/* 8016A308 001673E8  39 25 02 B6 */	addi r9, r5, 0x2b6
/* 8016A30C 001673EC  38 A0 00 00 */	li r5, 0x0
/* 8016A310 001673F0  38 C0 00 00 */	li r6, 0x0
/* 8016A314 001673F4  48 00 60 71 */	bl "load_param<5xVec3,i>__10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc"
.L_8016A318:
/* 8016A318 001673F8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A31C 001673FC  41 82 00 4C */	beq .L_8016A368
/* 8016A320 00167400  C0 42 AB 50 */	lfs f2, "@1896"@sda21(r2)
/* 8016A324 00167404  38 61 00 08 */	addi r3, r1, 0x8
/* 8016A328 00167408  C0 22 AB 68 */	lfs f1, "@1902"@sda21(r2)
/* 8016A32C 0016740C  FC 60 10 90 */	fmr f3, f2
/* 8016A330 00167410  4B EF 5C 59 */	bl create__5xVec3Ffff
/* 8016A334 00167414  38 7C 00 7C */	addi r3, r28, 0x7c
/* 8016A338 00167418  38 81 00 08 */	addi r4, r1, 0x8
/* 8016A33C 0016741C  4B EA 0F 29 */	bl __as__5xVec3FRC5xVec3
/* 8016A340 00167420  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A344 00167424  7F C7 F3 78 */	mr r7, r30
/* 8016A348 00167428  38 A3 14 64 */	addi r5, r3, "@stringBase0"@l
/* 8016A34C 0016742C  7F E8 FB 78 */	mr r8, r31
/* 8016A350 00167430  38 7C 00 7C */	addi r3, r28, 0x7c
/* 8016A354 00167434  38 80 00 00 */	li r4, 0x0
/* 8016A358 00167438  39 25 02 C8 */	addi r9, r5, 0x2c8
/* 8016A35C 0016743C  38 A0 00 00 */	li r5, 0x0
/* 8016A360 00167440  38 C0 00 00 */	li r6, 0x0
/* 8016A364 00167444  48 00 60 21 */	bl "load_param<5xVec3,i>__10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc"
.L_8016A368:
/* 8016A368 00167448  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A36C 0016744C  41 82 00 34 */	beq .L_8016A3A0
/* 8016A370 00167450  C0 02 AB 64 */	lfs f0, "@1901"@sda21(r2)
/* 8016A374 00167454  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A378 00167458  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A37C 0016745C  7F C4 F3 78 */	mr r4, r30
/* 8016A380 00167460  D0 1C 00 88 */	stfs f0, 0x88(r28)
/* 8016A384 00167464  7F E5 FB 78 */	mr r5, r31
/* 8016A388 00167468  38 7C 00 88 */	addi r3, r28, 0x88
/* 8016A38C 0016746C  38 C6 02 DC */	addi r6, r6, 0x2dc
/* 8016A390 00167470  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A394 00167474  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016A398 00167478  C0 62 AB 50 */	lfs f3, "@1896"@sda21(r2)
/* 8016A39C 0016747C  48 00 60 39 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A3A0:
/* 8016A3A0 00167480  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A3A4 00167484  41 82 00 34 */	beq .L_8016A3D8
/* 8016A3A8 00167488  C0 02 AB 20 */	lfs f0, "@1753"@sda21(r2)
/* 8016A3AC 0016748C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A3B0 00167490  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A3B4 00167494  7F C4 F3 78 */	mr r4, r30
/* 8016A3B8 00167498  D0 1C 00 8C */	stfs f0, 0x8c(r28)
/* 8016A3BC 0016749C  7F E5 FB 78 */	mr r5, r31
/* 8016A3C0 001674A0  38 7C 00 8C */	addi r3, r28, 0x8c
/* 8016A3C4 001674A4  38 C6 02 F6 */	addi r6, r6, 0x2f6
/* 8016A3C8 001674A8  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A3CC 001674AC  C0 42 AB 74 */	lfs f2, "@1905"@sda21(r2)
/* 8016A3D0 001674B0  C0 62 AB 50 */	lfs f3, "@1896"@sda21(r2)
/* 8016A3D4 001674B4  48 00 60 01 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A3D8:
/* 8016A3D8 001674B8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A3DC 001674BC  41 82 00 34 */	beq .L_8016A410
/* 8016A3E0 001674C0  C0 02 AB 4C */	lfs f0, "@1895"@sda21(r2)
/* 8016A3E4 001674C4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A3E8 001674C8  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A3EC 001674CC  7F C4 F3 78 */	mr r4, r30
/* 8016A3F0 001674D0  D0 1C 00 90 */	stfs f0, 0x90(r28)
/* 8016A3F4 001674D4  7F E5 FB 78 */	mr r5, r31
/* 8016A3F8 001674D8  38 7C 00 90 */	addi r3, r28, 0x90
/* 8016A3FC 001674DC  38 C6 03 02 */	addi r6, r6, 0x302
/* 8016A400 001674E0  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A404 001674E4  C0 62 AB 54 */	lfs f3, "@1897"@sda21(r2)
/* 8016A408 001674E8  FC 40 08 90 */	fmr f2, f1
/* 8016A40C 001674EC  48 00 5F C9 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A410:
/* 8016A410 001674F0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A414 001674F4  41 82 00 34 */	beq .L_8016A448
/* 8016A418 001674F8  C0 02 AB 20 */	lfs f0, "@1753"@sda21(r2)
/* 8016A41C 001674FC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A420 00167500  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A424 00167504  7F C4 F3 78 */	mr r4, r30
/* 8016A428 00167508  D0 1C 00 94 */	stfs f0, 0x94(r28)
/* 8016A42C 0016750C  7F E5 FB 78 */	mr r5, r31
/* 8016A430 00167510  38 7C 00 94 */	addi r3, r28, 0x94
/* 8016A434 00167514  38 C6 03 0E */	addi r6, r6, 0x30e
/* 8016A438 00167518  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A43C 0016751C  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016A440 00167520  C0 62 AB 54 */	lfs f3, "@1897"@sda21(r2)
/* 8016A444 00167524  48 00 5F 91 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A448:
/* 8016A448 00167528  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A44C 0016752C  41 82 00 34 */	beq .L_8016A480
/* 8016A450 00167530  C0 02 AB 20 */	lfs f0, "@1753"@sda21(r2)
/* 8016A454 00167534  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A458 00167538  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A45C 0016753C  7F C4 F3 78 */	mr r4, r30
/* 8016A460 00167540  D0 1C 00 98 */	stfs f0, 0x98(r28)
/* 8016A464 00167544  7F E5 FB 78 */	mr r5, r31
/* 8016A468 00167548  38 7C 00 98 */	addi r3, r28, 0x98
/* 8016A46C 0016754C  38 C6 03 21 */	addi r6, r6, 0x321
/* 8016A470 00167550  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A474 00167554  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016A478 00167558  C0 62 AB 54 */	lfs f3, "@1897"@sda21(r2)
/* 8016A47C 0016755C  48 00 5F 59 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A480:
/* 8016A480 00167560  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A484 00167564  41 82 00 34 */	beq .L_8016A4B8
/* 8016A488 00167568  C0 02 AB 78 */	lfs f0, "@1906"@sda21(r2)
/* 8016A48C 0016756C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A490 00167570  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A494 00167574  7F C4 F3 78 */	mr r4, r30
/* 8016A498 00167578  D0 1C 00 9C */	stfs f0, 0x9c(r28)
/* 8016A49C 0016757C  7F E5 FB 78 */	mr r5, r31
/* 8016A4A0 00167580  38 7C 00 9C */	addi r3, r28, 0x9c
/* 8016A4A4 00167584  38 C6 03 34 */	addi r6, r6, 0x334
/* 8016A4A8 00167588  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A4AC 0016758C  C0 62 AB 54 */	lfs f3, "@1897"@sda21(r2)
/* 8016A4B0 00167590  FC 40 08 90 */	fmr f2, f1
/* 8016A4B4 00167594  48 00 5F 21 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A4B8:
/* 8016A4B8 00167598  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A4BC 0016759C  41 82 00 34 */	beq .L_8016A4F0
/* 8016A4C0 001675A0  C0 02 AB 7C */	lfs f0, "@1907"@sda21(r2)
/* 8016A4C4 001675A4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A4C8 001675A8  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A4CC 001675AC  7F C4 F3 78 */	mr r4, r30
/* 8016A4D0 001675B0  D0 1C 00 A0 */	stfs f0, 0xa0(r28)
/* 8016A4D4 001675B4  7F E5 FB 78 */	mr r5, r31
/* 8016A4D8 001675B8  38 7C 00 A0 */	addi r3, r28, 0xa0
/* 8016A4DC 001675BC  38 C6 03 43 */	addi r6, r6, 0x343
/* 8016A4E0 001675C0  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A4E4 001675C4  C0 42 AB 34 */	lfs f2, "@1889"@sda21(r2)
/* 8016A4E8 001675C8  C0 62 AB 24 */	lfs f3, "@1754"@sda21(r2)
/* 8016A4EC 001675CC  48 00 5E E9 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A4F0:
/* 8016A4F0 001675D0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A4F4 001675D4  41 82 00 34 */	beq .L_8016A528
/* 8016A4F8 001675D8  C0 02 AB 1C */	lfs f0, "@1752"@sda21(r2)
/* 8016A4FC 001675DC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A500 001675E0  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A504 001675E4  7F C4 F3 78 */	mr r4, r30
/* 8016A508 001675E8  D0 1C 00 A4 */	stfs f0, 0xa4(r28)
/* 8016A50C 001675EC  7F E5 FB 78 */	mr r5, r31
/* 8016A510 001675F0  38 7C 00 A4 */	addi r3, r28, 0xa4
/* 8016A514 001675F4  38 C6 03 4D */	addi r6, r6, 0x34d
/* 8016A518 001675F8  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A51C 001675FC  C0 42 AB 34 */	lfs f2, "@1889"@sda21(r2)
/* 8016A520 00167600  C0 62 AB 54 */	lfs f3, "@1897"@sda21(r2)
/* 8016A524 00167604  48 00 5E B1 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A528:
/* 8016A528 00167608  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A52C 0016760C  41 82 00 34 */	beq .L_8016A560
/* 8016A530 00167610  C0 02 AB 4C */	lfs f0, "@1895"@sda21(r2)
/* 8016A534 00167614  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A538 00167618  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A53C 0016761C  7F C4 F3 78 */	mr r4, r30
/* 8016A540 00167620  D0 1C 00 A8 */	stfs f0, 0xa8(r28)
/* 8016A544 00167624  7F E5 FB 78 */	mr r5, r31
/* 8016A548 00167628  38 7C 00 A8 */	addi r3, r28, 0xa8
/* 8016A54C 0016762C  38 C6 03 5F */	addi r6, r6, 0x35f
/* 8016A550 00167630  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A554 00167634  C0 42 AB 34 */	lfs f2, "@1889"@sda21(r2)
/* 8016A558 00167638  C0 62 AB 54 */	lfs f3, "@1897"@sda21(r2)
/* 8016A55C 0016763C  48 00 5E 79 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A560:
/* 8016A560 00167640  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A564 00167644  41 82 00 34 */	beq .L_8016A598
/* 8016A568 00167648  C0 02 AB 80 */	lfs f0, "@1908"@sda21(r2)
/* 8016A56C 0016764C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A570 00167650  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A574 00167654  7F C4 F3 78 */	mr r4, r30
/* 8016A578 00167658  D0 1C 00 AC */	stfs f0, 0xac(r28)
/* 8016A57C 0016765C  7F E5 FB 78 */	mr r5, r31
/* 8016A580 00167660  38 7C 00 AC */	addi r3, r28, 0xac
/* 8016A584 00167664  38 C6 03 6E */	addi r6, r6, 0x36e
/* 8016A588 00167668  C0 22 AB 30 */	lfs f1, "@1888"@sda21(r2)
/* 8016A58C 0016766C  C0 42 AB 84 */	lfs f2, "@1909"@sda21(r2)
/* 8016A590 00167670  C0 62 AB 3C */	lfs f3, "@1891"@sda21(r2)
/* 8016A594 00167674  48 00 5E 41 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A598:
/* 8016A598 00167678  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A59C 0016767C  41 82 00 34 */	beq .L_8016A5D0
/* 8016A5A0 00167680  C0 02 AB 68 */	lfs f0, "@1902"@sda21(r2)
/* 8016A5A4 00167684  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A5A8 00167688  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A5AC 0016768C  7F C4 F3 78 */	mr r4, r30
/* 8016A5B0 00167690  D0 1C 00 B0 */	stfs f0, 0xb0(r28)
/* 8016A5B4 00167694  7F E5 FB 78 */	mr r5, r31
/* 8016A5B8 00167698  38 7C 00 B0 */	addi r3, r28, 0xb0
/* 8016A5BC 0016769C  38 C6 03 80 */	addi r6, r6, 0x380
/* 8016A5C0 001676A0  C0 22 AB 30 */	lfs f1, "@1888"@sda21(r2)
/* 8016A5C4 001676A4  C0 42 AB 84 */	lfs f2, "@1909"@sda21(r2)
/* 8016A5C8 001676A8  C0 62 AB 3C */	lfs f3, "@1891"@sda21(r2)
/* 8016A5CC 001676AC  48 00 5E 09 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A5D0:
/* 8016A5D0 001676B0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A5D4 001676B4  41 82 00 34 */	beq .L_8016A608
/* 8016A5D8 001676B8  C0 02 AB 88 */	lfs f0, "@1910"@sda21(r2)
/* 8016A5DC 001676BC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A5E0 001676C0  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A5E4 001676C4  7F C4 F3 78 */	mr r4, r30
/* 8016A5E8 001676C8  D0 1C 00 B4 */	stfs f0, 0xb4(r28)
/* 8016A5EC 001676CC  7F E5 FB 78 */	mr r5, r31
/* 8016A5F0 001676D0  38 7C 00 B4 */	addi r3, r28, 0xb4
/* 8016A5F4 001676D4  38 C6 03 92 */	addi r6, r6, 0x392
/* 8016A5F8 001676D8  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A5FC 001676DC  C0 62 AB 54 */	lfs f3, "@1897"@sda21(r2)
/* 8016A600 001676E0  FC 40 08 90 */	fmr f2, f1
/* 8016A604 001676E4  48 00 5D D1 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A608:
/* 8016A608 001676E8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A60C 001676EC  41 82 00 34 */	beq .L_8016A640
/* 8016A610 001676F0  C0 02 AB 1C */	lfs f0, "@1752"@sda21(r2)
/* 8016A614 001676F4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A618 001676F8  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A61C 001676FC  7F C4 F3 78 */	mr r4, r30
/* 8016A620 00167700  D0 1C 00 B8 */	stfs f0, 0xb8(r28)
/* 8016A624 00167704  7F E5 FB 78 */	mr r5, r31
/* 8016A628 00167708  38 7C 00 B8 */	addi r3, r28, 0xb8
/* 8016A62C 0016770C  38 C6 03 A0 */	addi r6, r6, 0x3a0
/* 8016A630 00167710  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A634 00167714  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016A638 00167718  C0 62 AB 50 */	lfs f3, "@1896"@sda21(r2)
/* 8016A63C 0016771C  48 00 5D 99 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A640:
/* 8016A640 00167720  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A644 00167724  41 82 00 34 */	beq .L_8016A678
/* 8016A648 00167728  C0 02 AB 8C */	lfs f0, "@1911"@sda21(r2)
/* 8016A64C 0016772C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A650 00167730  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A654 00167734  7F C4 F3 78 */	mr r4, r30
/* 8016A658 00167738  D0 1C 00 BC */	stfs f0, 0xbc(r28)
/* 8016A65C 0016773C  7F E5 FB 78 */	mr r5, r31
/* 8016A660 00167740  38 7C 00 BC */	addi r3, r28, 0xbc
/* 8016A664 00167744  38 C6 03 AF */	addi r6, r6, 0x3af
/* 8016A668 00167748  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A66C 0016774C  C0 42 AB 34 */	lfs f2, "@1889"@sda21(r2)
/* 8016A670 00167750  C0 62 AB 54 */	lfs f3, "@1897"@sda21(r2)
/* 8016A674 00167754  48 00 5D 61 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A678:
/* 8016A678 00167758  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A67C 0016775C  41 82 00 34 */	beq .L_8016A6B0
/* 8016A680 00167760  C0 02 AB 64 */	lfs f0, "@1901"@sda21(r2)
/* 8016A684 00167764  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A688 00167768  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A68C 0016776C  7F C4 F3 78 */	mr r4, r30
/* 8016A690 00167770  D0 1C 00 C0 */	stfs f0, 0xc0(r28)
/* 8016A694 00167774  7F E5 FB 78 */	mr r5, r31
/* 8016A698 00167778  38 7C 00 C0 */	addi r3, r28, 0xc0
/* 8016A69C 0016777C  38 C6 03 BE */	addi r6, r6, 0x3be
/* 8016A6A0 00167780  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A6A4 00167784  C0 42 AB 34 */	lfs f2, "@1889"@sda21(r2)
/* 8016A6A8 00167788  C0 62 AB 54 */	lfs f3, "@1897"@sda21(r2)
/* 8016A6AC 0016778C  48 00 5D 29 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A6B0:
/* 8016A6B0 00167790  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A6B4 00167794  41 82 00 34 */	beq .L_8016A6E8
/* 8016A6B8 00167798  C0 02 AB 68 */	lfs f0, "@1902"@sda21(r2)
/* 8016A6BC 0016779C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A6C0 001677A0  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A6C4 001677A4  7F C4 F3 78 */	mr r4, r30
/* 8016A6C8 001677A8  D0 1C 00 C4 */	stfs f0, 0xc4(r28)
/* 8016A6CC 001677AC  7F E5 FB 78 */	mr r5, r31
/* 8016A6D0 001677B0  38 7C 00 C4 */	addi r3, r28, 0xc4
/* 8016A6D4 001677B4  38 C6 03 CD */	addi r6, r6, 0x3cd
/* 8016A6D8 001677B8  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A6DC 001677BC  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016A6E0 001677C0  C0 62 AB 24 */	lfs f3, "@1754"@sda21(r2)
/* 8016A6E4 001677C4  48 00 5C F1 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A6E8:
/* 8016A6E8 001677C8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A6EC 001677CC  41 82 00 34 */	beq .L_8016A720
/* 8016A6F0 001677D0  C0 02 AB 5C */	lfs f0, "@1899"@sda21(r2)
/* 8016A6F4 001677D4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A6F8 001677D8  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A6FC 001677DC  7F C4 F3 78 */	mr r4, r30
/* 8016A700 001677E0  D0 1C 00 C8 */	stfs f0, 0xc8(r28)
/* 8016A704 001677E4  7F E5 FB 78 */	mr r5, r31
/* 8016A708 001677E8  38 7C 00 C8 */	addi r3, r28, 0xc8
/* 8016A70C 001677EC  38 C6 03 D9 */	addi r6, r6, 0x3d9
/* 8016A710 001677F0  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A714 001677F4  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016A718 001677F8  C0 62 AB 24 */	lfs f3, "@1754"@sda21(r2)
/* 8016A71C 001677FC  48 00 5C B9 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A720:
/* 8016A720 00167800  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A724 00167804  41 82 00 34 */	beq .L_8016A758
/* 8016A728 00167808  C0 02 AB 68 */	lfs f0, "@1902"@sda21(r2)
/* 8016A72C 0016780C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A730 00167810  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A734 00167814  7F C4 F3 78 */	mr r4, r30
/* 8016A738 00167818  D0 1C 00 CC */	stfs f0, 0xcc(r28)
/* 8016A73C 0016781C  7F E5 FB 78 */	mr r5, r31
/* 8016A740 00167820  38 7C 00 CC */	addi r3, r28, 0xcc
/* 8016A744 00167824  38 C6 03 EB */	addi r6, r6, 0x3eb
/* 8016A748 00167828  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A74C 0016782C  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016A750 00167830  C0 62 AB 24 */	lfs f3, "@1754"@sda21(r2)
/* 8016A754 00167834  48 00 5C 81 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A758:
/* 8016A758 00167838  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A75C 0016783C  41 82 00 34 */	beq .L_8016A790
/* 8016A760 00167840  C0 02 AB 64 */	lfs f0, "@1901"@sda21(r2)
/* 8016A764 00167844  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A768 00167848  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A76C 0016784C  7F C4 F3 78 */	mr r4, r30
/* 8016A770 00167850  D0 1C 00 D0 */	stfs f0, 0xd0(r28)
/* 8016A774 00167854  7F E5 FB 78 */	mr r5, r31
/* 8016A778 00167858  38 7C 00 D0 */	addi r3, r28, 0xd0
/* 8016A77C 0016785C  38 C6 03 FD */	addi r6, r6, 0x3fd
/* 8016A780 00167860  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A784 00167864  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016A788 00167868  C0 62 AB 24 */	lfs f3, "@1754"@sda21(r2)
/* 8016A78C 0016786C  48 00 5C 49 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A790:
/* 8016A790 00167870  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A794 00167874  41 82 00 34 */	beq .L_8016A7C8
/* 8016A798 00167878  C0 02 AB 14 */	lfs f0, "@1657"@sda21(r2)
/* 8016A79C 0016787C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A7A0 00167880  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A7A4 00167884  7F C4 F3 78 */	mr r4, r30
/* 8016A7A8 00167888  D0 1C 00 D4 */	stfs f0, 0xd4(r28)
/* 8016A7AC 0016788C  7F E5 FB 78 */	mr r5, r31
/* 8016A7B0 00167890  38 7C 00 D4 */	addi r3, r28, 0xd4
/* 8016A7B4 00167894  38 C6 04 0F */	addi r6, r6, 0x40f
/* 8016A7B8 00167898  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A7BC 0016789C  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016A7C0 001678A0  C0 62 AB 54 */	lfs f3, "@1897"@sda21(r2)
/* 8016A7C4 001678A4  48 00 5C 11 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A7C8:
/* 8016A7C8 001678A8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A7CC 001678AC  41 82 00 34 */	beq .L_8016A800
/* 8016A7D0 001678B0  C0 02 AB 7C */	lfs f0, "@1907"@sda21(r2)
/* 8016A7D4 001678B4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A7D8 001678B8  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A7DC 001678BC  7F C4 F3 78 */	mr r4, r30
/* 8016A7E0 001678C0  D0 1C 00 D8 */	stfs f0, 0xd8(r28)
/* 8016A7E4 001678C4  7F E5 FB 78 */	mr r5, r31
/* 8016A7E8 001678C8  38 7C 00 D8 */	addi r3, r28, 0xd8
/* 8016A7EC 001678CC  38 C6 04 22 */	addi r6, r6, 0x422
/* 8016A7F0 001678D0  C0 22 AB 30 */	lfs f1, "@1888"@sda21(r2)
/* 8016A7F4 001678D4  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016A7F8 001678D8  C0 62 AB 90 */	lfs f3, "@1912"@sda21(r2)
/* 8016A7FC 001678DC  48 00 5B D9 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A800:
/* 8016A800 001678E0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A804 001678E4  41 82 00 34 */	beq .L_8016A838
/* 8016A808 001678E8  C0 02 AB 20 */	lfs f0, "@1753"@sda21(r2)
/* 8016A80C 001678EC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A810 001678F0  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A814 001678F4  7F C4 F3 78 */	mr r4, r30
/* 8016A818 001678F8  D0 1C 00 DC */	stfs f0, 0xdc(r28)
/* 8016A81C 001678FC  7F E5 FB 78 */	mr r5, r31
/* 8016A820 00167900  38 7C 00 DC */	addi r3, r28, 0xdc
/* 8016A824 00167904  38 C6 04 33 */	addi r6, r6, 0x433
/* 8016A828 00167908  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A82C 0016790C  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016A830 00167910  C0 62 AB 54 */	lfs f3, "@1897"@sda21(r2)
/* 8016A834 00167914  48 00 5B A1 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A838:
/* 8016A838 00167918  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A83C 0016791C  41 82 00 34 */	beq .L_8016A870
/* 8016A840 00167920  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016A844 00167924  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A848 00167928  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A84C 0016792C  7F C4 F3 78 */	mr r4, r30
/* 8016A850 00167930  D0 1C 00 E0 */	stfs f0, 0xe0(r28)
/* 8016A854 00167934  7F E5 FB 78 */	mr r5, r31
/* 8016A858 00167938  38 7C 00 E0 */	addi r3, r28, 0xe0
/* 8016A85C 0016793C  38 C6 04 45 */	addi r6, r6, 0x445
/* 8016A860 00167940  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A864 00167944  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016A868 00167948  FC 60 08 90 */	fmr f3, f1
/* 8016A86C 0016794C  48 00 5B 69 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A870:
/* 8016A870 00167950  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A874 00167954  41 82 00 34 */	beq .L_8016A8A8
/* 8016A878 00167958  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016A87C 0016795C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A880 00167960  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A884 00167964  7F C4 F3 78 */	mr r4, r30
/* 8016A888 00167968  D0 1C 00 E4 */	stfs f0, 0xe4(r28)
/* 8016A88C 0016796C  7F E5 FB 78 */	mr r5, r31
/* 8016A890 00167970  38 7C 00 E4 */	addi r3, r28, 0xe4
/* 8016A894 00167974  38 C6 04 5A */	addi r6, r6, 0x45a
/* 8016A898 00167978  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A89C 0016797C  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016A8A0 00167980  FC 60 08 90 */	fmr f3, f1
/* 8016A8A4 00167984  48 00 5B 31 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A8A8:
/* 8016A8A8 00167988  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A8AC 0016798C  41 82 00 34 */	beq .L_8016A8E0
/* 8016A8B0 00167990  C0 02 AB 0C */	lfs f0, "@1585"@sda21(r2)
/* 8016A8B4 00167994  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A8B8 00167998  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A8BC 0016799C  7F C4 F3 78 */	mr r4, r30
/* 8016A8C0 001679A0  D0 1C 00 E8 */	stfs f0, 0xe8(r28)
/* 8016A8C4 001679A4  7F E5 FB 78 */	mr r5, r31
/* 8016A8C8 001679A8  38 7C 00 E8 */	addi r3, r28, 0xe8
/* 8016A8CC 001679AC  38 C6 04 6F */	addi r6, r6, 0x46f
/* 8016A8D0 001679B0  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A8D4 001679B4  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016A8D8 001679B8  FC 60 08 90 */	fmr f3, f1
/* 8016A8DC 001679BC  48 00 5A F9 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A8E0:
/* 8016A8E0 001679C0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A8E4 001679C4  41 82 00 34 */	beq .L_8016A918
/* 8016A8E8 001679C8  C0 02 AB 0C */	lfs f0, "@1585"@sda21(r2)
/* 8016A8EC 001679CC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A8F0 001679D0  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A8F4 001679D4  7F C4 F3 78 */	mr r4, r30
/* 8016A8F8 001679D8  D0 1C 00 EC */	stfs f0, 0xec(r28)
/* 8016A8FC 001679DC  7F E5 FB 78 */	mr r5, r31
/* 8016A900 001679E0  38 7C 00 EC */	addi r3, r28, 0xec
/* 8016A904 001679E4  38 C6 04 84 */	addi r6, r6, 0x484
/* 8016A908 001679E8  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A90C 001679EC  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016A910 001679F0  FC 60 08 90 */	fmr f3, f1
/* 8016A914 001679F4  48 00 5A C1 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A918:
/* 8016A918 001679F8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A91C 001679FC  41 82 00 34 */	beq .L_8016A950
/* 8016A920 00167A00  38 00 00 02 */	li r0, 0x2
/* 8016A924 00167A04  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A928 00167A08  38 83 14 64 */	addi r4, r3, "@stringBase0"@l
/* 8016A92C 00167A0C  90 1C 00 F0 */	stw r0, 0xf0(r28)
/* 8016A930 00167A10  7F C7 F3 78 */	mr r7, r30
/* 8016A934 00167A14  7F E8 FB 78 */	mr r8, r31
/* 8016A938 00167A18  38 7C 00 F0 */	addi r3, r28, 0xf0
/* 8016A93C 00167A1C  39 24 04 99 */	addi r9, r4, 0x499
/* 8016A940 00167A20  38 80 00 01 */	li r4, 0x1
/* 8016A944 00167A24  38 A0 00 00 */	li r5, 0x0
/* 8016A948 00167A28  38 C0 00 64 */	li r6, 0x64
/* 8016A94C 00167A2C  48 00 59 B5 */	bl "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc"
.L_8016A950:
/* 8016A950 00167A30  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A954 00167A34  41 82 00 34 */	beq .L_8016A988
/* 8016A958 00167A38  C0 02 AB 0C */	lfs f0, "@1585"@sda21(r2)
/* 8016A95C 00167A3C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A960 00167A40  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A964 00167A44  7F C4 F3 78 */	mr r4, r30
/* 8016A968 00167A48  D0 1C 00 F4 */	stfs f0, 0xf4(r28)
/* 8016A96C 00167A4C  7F E5 FB 78 */	mr r5, r31
/* 8016A970 00167A50  38 7C 00 F4 */	addi r3, r28, 0xf4
/* 8016A974 00167A54  38 C6 04 AE */	addi r6, r6, 0x4ae
/* 8016A978 00167A58  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A97C 00167A5C  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016A980 00167A60  C0 62 AB 38 */	lfs f3, "@1890"@sda21(r2)
/* 8016A984 00167A64  48 00 5A 51 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A988:
/* 8016A988 00167A68  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A98C 00167A6C  41 82 00 34 */	beq .L_8016A9C0
/* 8016A990 00167A70  C0 02 AB 64 */	lfs f0, "@1901"@sda21(r2)
/* 8016A994 00167A74  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A998 00167A78  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A99C 00167A7C  7F C4 F3 78 */	mr r4, r30
/* 8016A9A0 00167A80  D0 1C 00 F8 */	stfs f0, 0xf8(r28)
/* 8016A9A4 00167A84  7F E5 FB 78 */	mr r5, r31
/* 8016A9A8 00167A88  38 7C 00 F8 */	addi r3, r28, 0xf8
/* 8016A9AC 00167A8C  38 C6 04 BD */	addi r6, r6, 0x4bd
/* 8016A9B0 00167A90  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A9B4 00167A94  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016A9B8 00167A98  C0 62 AB 54 */	lfs f3, "@1897"@sda21(r2)
/* 8016A9BC 00167A9C  48 00 5A 19 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A9C0:
/* 8016A9C0 00167AA0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A9C4 00167AA4  41 82 00 34 */	beq .L_8016A9F8
/* 8016A9C8 00167AA8  C0 02 AB 94 */	lfs f0, "@1913"@sda21(r2)
/* 8016A9CC 00167AAC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016A9D0 00167AB0  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016A9D4 00167AB4  7F C4 F3 78 */	mr r4, r30
/* 8016A9D8 00167AB8  D0 1C 00 FC */	stfs f0, 0xfc(r28)
/* 8016A9DC 00167ABC  7F E5 FB 78 */	mr r5, r31
/* 8016A9E0 00167AC0  38 7C 00 FC */	addi r3, r28, 0xfc
/* 8016A9E4 00167AC4  38 C6 04 D0 */	addi r6, r6, 0x4d0
/* 8016A9E8 00167AC8  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016A9EC 00167ACC  C0 42 AB 98 */	lfs f2, "@1914"@sda21(r2)
/* 8016A9F0 00167AD0  C0 62 AB 54 */	lfs f3, "@1897"@sda21(r2)
/* 8016A9F4 00167AD4  48 00 59 E1 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016A9F8:
/* 8016A9F8 00167AD8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016A9FC 00167ADC  41 82 00 34 */	beq .L_8016AA30
/* 8016AA00 00167AE0  C0 02 AB 4C */	lfs f0, "@1895"@sda21(r2)
/* 8016AA04 00167AE4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016AA08 00167AE8  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016AA0C 00167AEC  7F C4 F3 78 */	mr r4, r30
/* 8016AA10 00167AF0  D0 1C 01 00 */	stfs f0, 0x100(r28)
/* 8016AA14 00167AF4  7F E5 FB 78 */	mr r5, r31
/* 8016AA18 00167AF8  38 7C 01 00 */	addi r3, r28, 0x100
/* 8016AA1C 00167AFC  38 C6 04 E5 */	addi r6, r6, 0x4e5
/* 8016AA20 00167B00  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016AA24 00167B04  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016AA28 00167B08  C0 62 AB 54 */	lfs f3, "@1897"@sda21(r2)
/* 8016AA2C 00167B0C  48 00 59 A9 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016AA30:
/* 8016AA30 00167B10  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016AA34 00167B14  41 82 00 34 */	beq .L_8016AA68
/* 8016AA38 00167B18  C0 02 AB 64 */	lfs f0, "@1901"@sda21(r2)
/* 8016AA3C 00167B1C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016AA40 00167B20  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016AA44 00167B24  7F C4 F3 78 */	mr r4, r30
/* 8016AA48 00167B28  D0 1C 01 04 */	stfs f0, 0x104(r28)
/* 8016AA4C 00167B2C  7F E5 FB 78 */	mr r5, r31
/* 8016AA50 00167B30  38 7C 01 04 */	addi r3, r28, 0x104
/* 8016AA54 00167B34  38 C6 04 F8 */	addi r6, r6, 0x4f8
/* 8016AA58 00167B38  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016AA5C 00167B3C  C0 42 AB 98 */	lfs f2, "@1914"@sda21(r2)
/* 8016AA60 00167B40  C0 62 AB 54 */	lfs f3, "@1897"@sda21(r2)
/* 8016AA64 00167B44  48 00 59 71 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016AA68:
/* 8016AA68 00167B48  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016AA6C 00167B4C  41 82 00 34 */	beq .L_8016AAA0
/* 8016AA70 00167B50  C0 02 AB 7C */	lfs f0, "@1907"@sda21(r2)
/* 8016AA74 00167B54  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016AA78 00167B58  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016AA7C 00167B5C  7F C4 F3 78 */	mr r4, r30
/* 8016AA80 00167B60  D0 1C 01 08 */	stfs f0, 0x108(r28)
/* 8016AA84 00167B64  7F E5 FB 78 */	mr r5, r31
/* 8016AA88 00167B68  38 7C 01 08 */	addi r3, r28, 0x108
/* 8016AA8C 00167B6C  38 C6 05 0D */	addi r6, r6, 0x50d
/* 8016AA90 00167B70  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016AA94 00167B74  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016AA98 00167B78  C0 62 AB 54 */	lfs f3, "@1897"@sda21(r2)
/* 8016AA9C 00167B7C  48 00 59 39 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016AAA0:
/* 8016AAA0 00167B80  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016AAA4 00167B84  41 82 00 34 */	beq .L_8016AAD8
/* 8016AAA8 00167B88  C0 02 AB 64 */	lfs f0, "@1901"@sda21(r2)
/* 8016AAAC 00167B8C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016AAB0 00167B90  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016AAB4 00167B94  7F C4 F3 78 */	mr r4, r30
/* 8016AAB8 00167B98  D0 1C 01 0C */	stfs f0, 0x10c(r28)
/* 8016AABC 00167B9C  7F E5 FB 78 */	mr r5, r31
/* 8016AAC0 00167BA0  38 7C 01 0C */	addi r3, r28, 0x10c
/* 8016AAC4 00167BA4  38 C6 05 1E */	addi r6, r6, 0x51e
/* 8016AAC8 00167BA8  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016AACC 00167BAC  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016AAD0 00167BB0  C0 62 AB 54 */	lfs f3, "@1897"@sda21(r2)
/* 8016AAD4 00167BB4  48 00 59 01 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016AAD8:
/* 8016AAD8 00167BB8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016AADC 00167BBC  41 82 00 34 */	beq .L_8016AB10
/* 8016AAE0 00167BC0  C0 02 AB 4C */	lfs f0, "@1895"@sda21(r2)
/* 8016AAE4 00167BC4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016AAE8 00167BC8  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016AAEC 00167BCC  7F C4 F3 78 */	mr r4, r30
/* 8016AAF0 00167BD0  D0 1C 01 10 */	stfs f0, 0x110(r28)
/* 8016AAF4 00167BD4  7F E5 FB 78 */	mr r5, r31
/* 8016AAF8 00167BD8  38 7C 01 10 */	addi r3, r28, 0x110
/* 8016AAFC 00167BDC  38 C6 05 2D */	addi r6, r6, 0x52d
/* 8016AB00 00167BE0  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016AB04 00167BE4  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016AB08 00167BE8  C0 62 AB 54 */	lfs f3, "@1897"@sda21(r2)
/* 8016AB0C 00167BEC  48 00 58 C9 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016AB10:
/* 8016AB10 00167BF0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016AB14 00167BF4  41 82 00 34 */	beq .L_8016AB48
/* 8016AB18 00167BF8  C0 02 AB 68 */	lfs f0, "@1902"@sda21(r2)
/* 8016AB1C 00167BFC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016AB20 00167C00  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016AB24 00167C04  7F C4 F3 78 */	mr r4, r30
/* 8016AB28 00167C08  D0 1C 01 14 */	stfs f0, 0x114(r28)
/* 8016AB2C 00167C0C  7F E5 FB 78 */	mr r5, r31
/* 8016AB30 00167C10  38 7C 01 14 */	addi r3, r28, 0x114
/* 8016AB34 00167C14  38 C6 05 39 */	addi r6, r6, 0x539
/* 8016AB38 00167C18  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016AB3C 00167C1C  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016AB40 00167C20  C0 62 AB 54 */	lfs f3, "@1897"@sda21(r2)
/* 8016AB44 00167C24  48 00 58 91 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016AB48:
/* 8016AB48 00167C28  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016AB4C 00167C2C  41 82 00 34 */	beq .L_8016AB80
/* 8016AB50 00167C30  C0 02 AB 9C */	lfs f0, "@1915"@sda21(r2)
/* 8016AB54 00167C34  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016AB58 00167C38  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016AB5C 00167C3C  7F C4 F3 78 */	mr r4, r30
/* 8016AB60 00167C40  D0 1C 01 18 */	stfs f0, 0x118(r28)
/* 8016AB64 00167C44  7F E5 FB 78 */	mr r5, r31
/* 8016AB68 00167C48  38 7C 01 18 */	addi r3, r28, 0x118
/* 8016AB6C 00167C4C  38 C6 05 47 */	addi r6, r6, 0x547
/* 8016AB70 00167C50  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016AB74 00167C54  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016AB78 00167C58  C0 62 AB 38 */	lfs f3, "@1890"@sda21(r2)
/* 8016AB7C 00167C5C  48 00 58 59 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016AB80:
/* 8016AB80 00167C60  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016AB84 00167C64  41 82 00 34 */	beq .L_8016ABB8
/* 8016AB88 00167C68  C0 02 AB A0 */	lfs f0, "@1916"@sda21(r2)
/* 8016AB8C 00167C6C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016AB90 00167C70  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016AB94 00167C74  7F C4 F3 78 */	mr r4, r30
/* 8016AB98 00167C78  D0 1C 01 1C */	stfs f0, 0x11c(r28)
/* 8016AB9C 00167C7C  7F E5 FB 78 */	mr r5, r31
/* 8016ABA0 00167C80  38 7C 01 1C */	addi r3, r28, 0x11c
/* 8016ABA4 00167C84  38 C6 05 52 */	addi r6, r6, 0x552
/* 8016ABA8 00167C88  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016ABAC 00167C8C  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016ABB0 00167C90  C0 62 AB 38 */	lfs f3, "@1890"@sda21(r2)
/* 8016ABB4 00167C94  48 00 58 21 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016ABB8:
/* 8016ABB8 00167C98  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016ABBC 00167C9C  41 82 00 34 */	beq .L_8016ABF0
/* 8016ABC0 00167CA0  C0 02 AB 60 */	lfs f0, "@1900"@sda21(r2)
/* 8016ABC4 00167CA4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016ABC8 00167CA8  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016ABCC 00167CAC  7F C4 F3 78 */	mr r4, r30
/* 8016ABD0 00167CB0  D0 1C 01 20 */	stfs f0, 0x120(r28)
/* 8016ABD4 00167CB4  7F E5 FB 78 */	mr r5, r31
/* 8016ABD8 00167CB8  38 7C 01 20 */	addi r3, r28, 0x120
/* 8016ABDC 00167CBC  38 C6 05 5F */	addi r6, r6, 0x55f
/* 8016ABE0 00167CC0  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016ABE4 00167CC4  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016ABE8 00167CC8  C0 62 AB 24 */	lfs f3, "@1754"@sda21(r2)
/* 8016ABEC 00167CCC  48 00 57 E9 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016ABF0:
/* 8016ABF0 00167CD0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016ABF4 00167CD4  41 82 00 34 */	beq .L_8016AC28
/* 8016ABF8 00167CD8  C0 02 AB 7C */	lfs f0, "@1907"@sda21(r2)
/* 8016ABFC 00167CDC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016AC00 00167CE0  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016AC04 00167CE4  7F C4 F3 78 */	mr r4, r30
/* 8016AC08 00167CE8  D0 1C 01 24 */	stfs f0, 0x124(r28)
/* 8016AC0C 00167CEC  7F E5 FB 78 */	mr r5, r31
/* 8016AC10 00167CF0  38 7C 01 24 */	addi r3, r28, 0x124
/* 8016AC14 00167CF4  38 C6 05 69 */	addi r6, r6, 0x569
/* 8016AC18 00167CF8  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016AC1C 00167CFC  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016AC20 00167D00  C0 62 AB 50 */	lfs f3, "@1896"@sda21(r2)
/* 8016AC24 00167D04  48 00 57 B1 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016AC28:
/* 8016AC28 00167D08  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016AC2C 00167D0C  41 82 00 34 */	beq .L_8016AC60
/* 8016AC30 00167D10  C0 02 AB 0C */	lfs f0, "@1585"@sda21(r2)
/* 8016AC34 00167D14  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016AC38 00167D18  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016AC3C 00167D1C  7F C4 F3 78 */	mr r4, r30
/* 8016AC40 00167D20  D0 1C 01 28 */	stfs f0, 0x128(r28)
/* 8016AC44 00167D24  7F E5 FB 78 */	mr r5, r31
/* 8016AC48 00167D28  38 7C 01 28 */	addi r3, r28, 0x128
/* 8016AC4C 00167D2C  38 C6 05 78 */	addi r6, r6, 0x578
/* 8016AC50 00167D30  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016AC54 00167D34  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016AC58 00167D38  C0 62 AB 50 */	lfs f3, "@1896"@sda21(r2)
/* 8016AC5C 00167D3C  48 00 57 79 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016AC60:
/* 8016AC60 00167D40  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016AC64 00167D44  41 82 00 34 */	beq .L_8016AC98
/* 8016AC68 00167D48  C0 02 AB A4 */	lfs f0, "@1917"@sda21(r2)
/* 8016AC6C 00167D4C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016AC70 00167D50  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016AC74 00167D54  7F C4 F3 78 */	mr r4, r30
/* 8016AC78 00167D58  D0 1C 01 2C */	stfs f0, 0x12c(r28)
/* 8016AC7C 00167D5C  7F E5 FB 78 */	mr r5, r31
/* 8016AC80 00167D60  38 7C 01 2C */	addi r3, r28, 0x12c
/* 8016AC84 00167D64  38 C6 05 8D */	addi r6, r6, 0x58d
/* 8016AC88 00167D68  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016AC8C 00167D6C  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016AC90 00167D70  C0 62 AB 50 */	lfs f3, "@1896"@sda21(r2)
/* 8016AC94 00167D74  48 00 57 41 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016AC98:
/* 8016AC98 00167D78  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016AC9C 00167D7C  41 82 00 34 */	beq .L_8016ACD0
/* 8016ACA0 00167D80  C0 02 AB 4C */	lfs f0, "@1895"@sda21(r2)
/* 8016ACA4 00167D84  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016ACA8 00167D88  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016ACAC 00167D8C  7F C4 F3 78 */	mr r4, r30
/* 8016ACB0 00167D90  D0 1C 01 30 */	stfs f0, 0x130(r28)
/* 8016ACB4 00167D94  7F E5 FB 78 */	mr r5, r31
/* 8016ACB8 00167D98  38 7C 01 30 */	addi r3, r28, 0x130
/* 8016ACBC 00167D9C  38 C6 05 A2 */	addi r6, r6, 0x5a2
/* 8016ACC0 00167DA0  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016ACC4 00167DA4  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016ACC8 00167DA8  C0 62 AB 24 */	lfs f3, "@1754"@sda21(r2)
/* 8016ACCC 00167DAC  48 00 57 09 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016ACD0:
/* 8016ACD0 00167DB0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016ACD4 00167DB4  41 82 00 34 */	beq .L_8016AD08
/* 8016ACD8 00167DB8  C0 02 AB 50 */	lfs f0, "@1896"@sda21(r2)
/* 8016ACDC 00167DBC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016ACE0 00167DC0  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016ACE4 00167DC4  7F C4 F3 78 */	mr r4, r30
/* 8016ACE8 00167DC8  D0 1C 01 34 */	stfs f0, 0x134(r28)
/* 8016ACEC 00167DCC  7F E5 FB 78 */	mr r5, r31
/* 8016ACF0 00167DD0  38 7C 01 34 */	addi r3, r28, 0x134
/* 8016ACF4 00167DD4  38 C6 05 AE */	addi r6, r6, 0x5ae
/* 8016ACF8 00167DD8  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016ACFC 00167DDC  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016AD00 00167DE0  C0 62 AB 24 */	lfs f3, "@1754"@sda21(r2)
/* 8016AD04 00167DE4  48 00 56 D1 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016AD08:
/* 8016AD08 00167DE8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016AD0C 00167DEC  41 82 00 38 */	beq .L_8016AD44
/* 8016AD10 00167DF0  38 7C 01 38 */	addi r3, r28, 0x138
/* 8016AD14 00167DF4  38 81 00 38 */	addi r4, r1, 0x38
/* 8016AD18 00167DF8  4B EA 05 4D */	bl __as__5xVec3FRC5xVec3
/* 8016AD1C 00167DFC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016AD20 00167E00  7F C7 F3 78 */	mr r7, r30
/* 8016AD24 00167E04  38 A3 14 64 */	addi r5, r3, "@stringBase0"@l
/* 8016AD28 00167E08  7F E8 FB 78 */	mr r8, r31
/* 8016AD2C 00167E0C  38 7C 01 38 */	addi r3, r28, 0x138
/* 8016AD30 00167E10  38 80 00 00 */	li r4, 0x0
/* 8016AD34 00167E14  39 25 05 BC */	addi r9, r5, 0x5bc
/* 8016AD38 00167E18  38 A0 00 00 */	li r5, 0x0
/* 8016AD3C 00167E1C  38 C0 00 00 */	li r6, 0x0
/* 8016AD40 00167E20  48 00 56 45 */	bl "load_param<5xVec3,i>__10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc"
.L_8016AD44:
/* 8016AD44 00167E24  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016AD48 00167E28  41 82 00 34 */	beq .L_8016AD7C
/* 8016AD4C 00167E2C  C0 02 AB A8 */	lfs f0, "@1918"@sda21(r2)
/* 8016AD50 00167E30  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016AD54 00167E34  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016AD58 00167E38  7F C4 F3 78 */	mr r4, r30
/* 8016AD5C 00167E3C  D0 1C 01 44 */	stfs f0, 0x144(r28)
/* 8016AD60 00167E40  7F E5 FB 78 */	mr r5, r31
/* 8016AD64 00167E44  38 7C 01 44 */	addi r3, r28, 0x144
/* 8016AD68 00167E48  38 C6 05 C9 */	addi r6, r6, 0x5c9
/* 8016AD6C 00167E4C  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016AD70 00167E50  C0 42 AB 34 */	lfs f2, "@1889"@sda21(r2)
/* 8016AD74 00167E54  C0 62 AB 54 */	lfs f3, "@1897"@sda21(r2)
/* 8016AD78 00167E58  48 00 56 5D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016AD7C:
/* 8016AD7C 00167E5C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016AD80 00167E60  41 82 00 34 */	beq .L_8016ADB4
/* 8016AD84 00167E64  C0 02 AB AC */	lfs f0, "@1919"@sda21(r2)
/* 8016AD88 00167E68  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016AD8C 00167E6C  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016AD90 00167E70  7F C4 F3 78 */	mr r4, r30
/* 8016AD94 00167E74  D0 1C 01 48 */	stfs f0, 0x148(r28)
/* 8016AD98 00167E78  7F E5 FB 78 */	mr r5, r31
/* 8016AD9C 00167E7C  38 7C 01 48 */	addi r3, r28, 0x148
/* 8016ADA0 00167E80  38 C6 05 DD */	addi r6, r6, 0x5dd
/* 8016ADA4 00167E84  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016ADA8 00167E88  C0 42 AB 34 */	lfs f2, "@1889"@sda21(r2)
/* 8016ADAC 00167E8C  C0 62 AB 54 */	lfs f3, "@1897"@sda21(r2)
/* 8016ADB0 00167E90  48 00 56 25 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016ADB4:
/* 8016ADB4 00167E94  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016ADB8 00167E98  41 82 00 34 */	beq .L_8016ADEC
/* 8016ADBC 00167E9C  C0 02 AB 48 */	lfs f0, "@1894"@sda21(r2)
/* 8016ADC0 00167EA0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016ADC4 00167EA4  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016ADC8 00167EA8  7F C4 F3 78 */	mr r4, r30
/* 8016ADCC 00167EAC  D0 1C 01 4C */	stfs f0, 0x14c(r28)
/* 8016ADD0 00167EB0  7F E5 FB 78 */	mr r5, r31
/* 8016ADD4 00167EB4  38 7C 01 4C */	addi r3, r28, 0x14c
/* 8016ADD8 00167EB8  38 C6 05 F1 */	addi r6, r6, 0x5f1
/* 8016ADDC 00167EBC  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016ADE0 00167EC0  C0 42 AB 34 */	lfs f2, "@1889"@sda21(r2)
/* 8016ADE4 00167EC4  C0 62 AB 54 */	lfs f3, "@1897"@sda21(r2)
/* 8016ADE8 00167EC8  48 00 55 ED */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016ADEC:
/* 8016ADEC 00167ECC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016ADF0 00167ED0  41 82 00 34 */	beq .L_8016AE24
/* 8016ADF4 00167ED4  C0 02 AB A8 */	lfs f0, "@1918"@sda21(r2)
/* 8016ADF8 00167ED8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016ADFC 00167EDC  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016AE00 00167EE0  7F C4 F3 78 */	mr r4, r30
/* 8016AE04 00167EE4  D0 1C 01 50 */	stfs f0, 0x150(r28)
/* 8016AE08 00167EE8  7F E5 FB 78 */	mr r5, r31
/* 8016AE0C 00167EEC  38 7C 01 50 */	addi r3, r28, 0x150
/* 8016AE10 00167EF0  38 C6 06 05 */	addi r6, r6, 0x605
/* 8016AE14 00167EF4  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016AE18 00167EF8  C0 42 AB 34 */	lfs f2, "@1889"@sda21(r2)
/* 8016AE1C 00167EFC  C0 62 AB 54 */	lfs f3, "@1897"@sda21(r2)
/* 8016AE20 00167F00  48 00 55 B5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016AE24:
/* 8016AE24 00167F04  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016AE28 00167F08  41 82 00 34 */	beq .L_8016AE5C
/* 8016AE2C 00167F0C  C0 02 AB 0C */	lfs f0, "@1585"@sda21(r2)
/* 8016AE30 00167F10  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016AE34 00167F14  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016AE38 00167F18  7F C4 F3 78 */	mr r4, r30
/* 8016AE3C 00167F1C  D0 1C 01 58 */	stfs f0, 0x158(r28)
/* 8016AE40 00167F20  7F E5 FB 78 */	mr r5, r31
/* 8016AE44 00167F24  38 7C 01 58 */	addi r3, r28, 0x158
/* 8016AE48 00167F28  38 C6 06 19 */	addi r6, r6, 0x619
/* 8016AE4C 00167F2C  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016AE50 00167F30  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016AE54 00167F34  FC 60 08 90 */	fmr f3, f1
/* 8016AE58 00167F38  48 00 55 7D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016AE5C:
/* 8016AE5C 00167F3C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016AE60 00167F40  41 82 00 34 */	beq .L_8016AE94
/* 8016AE64 00167F44  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016AE68 00167F48  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016AE6C 00167F4C  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016AE70 00167F50  7F C4 F3 78 */	mr r4, r30
/* 8016AE74 00167F54  D0 1C 01 5C */	stfs f0, 0x15c(r28)
/* 8016AE78 00167F58  7F E5 FB 78 */	mr r5, r31
/* 8016AE7C 00167F5C  38 7C 01 5C */	addi r3, r28, 0x15c
/* 8016AE80 00167F60  38 C6 06 33 */	addi r6, r6, 0x633
/* 8016AE84 00167F64  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016AE88 00167F68  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016AE8C 00167F6C  C0 62 AB 24 */	lfs f3, "@1754"@sda21(r2)
/* 8016AE90 00167F70  48 00 55 45 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016AE94:
/* 8016AE94 00167F74  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016AE98 00167F78  41 82 00 34 */	beq .L_8016AECC
/* 8016AE9C 00167F7C  C0 02 AB 50 */	lfs f0, "@1896"@sda21(r2)
/* 8016AEA0 00167F80  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016AEA4 00167F84  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016AEA8 00167F88  7F C4 F3 78 */	mr r4, r30
/* 8016AEAC 00167F8C  D0 1C 01 60 */	stfs f0, 0x160(r28)
/* 8016AEB0 00167F90  7F E5 FB 78 */	mr r5, r31
/* 8016AEB4 00167F94  38 7C 01 60 */	addi r3, r28, 0x160
/* 8016AEB8 00167F98  38 C6 06 52 */	addi r6, r6, 0x652
/* 8016AEBC 00167F9C  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016AEC0 00167FA0  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016AEC4 00167FA4  C0 62 AB 24 */	lfs f3, "@1754"@sda21(r2)
/* 8016AEC8 00167FA8  48 00 55 0D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016AECC:
/* 8016AECC 00167FAC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016AED0 00167FB0  41 82 00 34 */	beq .L_8016AF04
/* 8016AED4 00167FB4  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016AED8 00167FB8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016AEDC 00167FBC  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016AEE0 00167FC0  7F C4 F3 78 */	mr r4, r30
/* 8016AEE4 00167FC4  D0 1C 01 64 */	stfs f0, 0x164(r28)
/* 8016AEE8 00167FC8  7F E5 FB 78 */	mr r5, r31
/* 8016AEEC 00167FCC  38 7C 01 64 */	addi r3, r28, 0x164
/* 8016AEF0 00167FD0  38 C6 06 71 */	addi r6, r6, 0x671
/* 8016AEF4 00167FD4  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016AEF8 00167FD8  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016AEFC 00167FDC  C0 62 AB 24 */	lfs f3, "@1754"@sda21(r2)
/* 8016AF00 00167FE0  48 00 54 D5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016AF04:
/* 8016AF04 00167FE4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016AF08 00167FE8  41 82 00 34 */	beq .L_8016AF3C
/* 8016AF0C 00167FEC  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016AF10 00167FF0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016AF14 00167FF4  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016AF18 00167FF8  7F C4 F3 78 */	mr r4, r30
/* 8016AF1C 00167FFC  D0 1C 01 68 */	stfs f0, 0x168(r28)
/* 8016AF20 00168000  7F E5 FB 78 */	mr r5, r31
/* 8016AF24 00168004  38 7C 01 68 */	addi r3, r28, 0x168
/* 8016AF28 00168008  38 C6 06 8A */	addi r6, r6, 0x68a
/* 8016AF2C 0016800C  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016AF30 00168010  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016AF34 00168014  C0 62 AB 24 */	lfs f3, "@1754"@sda21(r2)
/* 8016AF38 00168018  48 00 54 9D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016AF3C:
/* 8016AF3C 0016801C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016AF40 00168020  41 82 00 34 */	beq .L_8016AF74
/* 8016AF44 00168024  C0 02 AB 1C */	lfs f0, "@1752"@sda21(r2)
/* 8016AF48 00168028  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016AF4C 0016802C  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016AF50 00168030  7F C4 F3 78 */	mr r4, r30
/* 8016AF54 00168034  D0 1C 01 70 */	stfs f0, 0x170(r28)
/* 8016AF58 00168038  7F E5 FB 78 */	mr r5, r31
/* 8016AF5C 0016803C  38 7C 01 70 */	addi r3, r28, 0x170
/* 8016AF60 00168040  38 C6 06 A7 */	addi r6, r6, 0x6a7
/* 8016AF64 00168044  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016AF68 00168048  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016AF6C 0016804C  FC 60 08 90 */	fmr f3, f1
/* 8016AF70 00168050  48 00 54 65 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016AF74:
/* 8016AF74 00168054  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016AF78 00168058  41 82 00 34 */	beq .L_8016AFAC
/* 8016AF7C 0016805C  C0 02 AB 50 */	lfs f0, "@1896"@sda21(r2)
/* 8016AF80 00168060  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016AF84 00168064  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016AF88 00168068  7F C4 F3 78 */	mr r4, r30
/* 8016AF8C 0016806C  D0 1C 01 74 */	stfs f0, 0x174(r28)
/* 8016AF90 00168070  7F E5 FB 78 */	mr r5, r31
/* 8016AF94 00168074  38 7C 01 74 */	addi r3, r28, 0x174
/* 8016AF98 00168078  38 C6 06 BF */	addi r6, r6, 0x6bf
/* 8016AF9C 0016807C  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016AFA0 00168080  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016AFA4 00168084  C0 62 AB 24 */	lfs f3, "@1754"@sda21(r2)
/* 8016AFA8 00168088  48 00 54 2D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016AFAC:
/* 8016AFAC 0016808C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016AFB0 00168090  41 82 00 34 */	beq .L_8016AFE4
/* 8016AFB4 00168094  C0 02 AB 60 */	lfs f0, "@1900"@sda21(r2)
/* 8016AFB8 00168098  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016AFBC 0016809C  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016AFC0 001680A0  7F C4 F3 78 */	mr r4, r30
/* 8016AFC4 001680A4  D0 1C 01 78 */	stfs f0, 0x178(r28)
/* 8016AFC8 001680A8  7F E5 FB 78 */	mr r5, r31
/* 8016AFCC 001680AC  38 7C 01 78 */	addi r3, r28, 0x178
/* 8016AFD0 001680B0  38 C6 06 DC */	addi r6, r6, 0x6dc
/* 8016AFD4 001680B4  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016AFD8 001680B8  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016AFDC 001680BC  C0 62 AB 24 */	lfs f3, "@1754"@sda21(r2)
/* 8016AFE0 001680C0  48 00 53 F5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016AFE4:
/* 8016AFE4 001680C4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016AFE8 001680C8  41 82 00 34 */	beq .L_8016B01C
/* 8016AFEC 001680CC  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016AFF0 001680D0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016AFF4 001680D4  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016AFF8 001680D8  7F C4 F3 78 */	mr r4, r30
/* 8016AFFC 001680DC  D0 1C 01 7C */	stfs f0, 0x17c(r28)
/* 8016B000 001680E0  7F E5 FB 78 */	mr r5, r31
/* 8016B004 001680E4  38 7C 01 7C */	addi r3, r28, 0x17c
/* 8016B008 001680E8  38 C6 06 F9 */	addi r6, r6, 0x6f9
/* 8016B00C 001680EC  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016B010 001680F0  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016B014 001680F4  C0 62 AB 24 */	lfs f3, "@1754"@sda21(r2)
/* 8016B018 001680F8  48 00 53 BD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016B01C:
/* 8016B01C 001680FC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016B020 00168100  41 82 00 34 */	beq .L_8016B054
/* 8016B024 00168104  C0 02 AB 1C */	lfs f0, "@1752"@sda21(r2)
/* 8016B028 00168108  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016B02C 0016810C  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016B030 00168110  7F C4 F3 78 */	mr r4, r30
/* 8016B034 00168114  D0 1C 01 88 */	stfs f0, 0x188(r28)
/* 8016B038 00168118  7F E5 FB 78 */	mr r5, r31
/* 8016B03C 0016811C  38 7C 01 88 */	addi r3, r28, 0x188
/* 8016B040 00168120  38 C6 07 10 */	addi r6, r6, 0x710
/* 8016B044 00168124  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016B048 00168128  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016B04C 0016812C  FC 60 08 90 */	fmr f3, f1
/* 8016B050 00168130  48 00 53 85 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016B054:
/* 8016B054 00168134  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016B058 00168138  41 82 00 34 */	beq .L_8016B08C
/* 8016B05C 0016813C  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016B060 00168140  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016B064 00168144  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016B068 00168148  7F C4 F3 78 */	mr r4, r30
/* 8016B06C 0016814C  D0 1C 01 8C */	stfs f0, 0x18c(r28)
/* 8016B070 00168150  7F E5 FB 78 */	mr r5, r31
/* 8016B074 00168154  38 7C 01 8C */	addi r3, r28, 0x18c
/* 8016B078 00168158  38 C6 07 2E */	addi r6, r6, 0x72e
/* 8016B07C 0016815C  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016B080 00168160  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016B084 00168164  C0 62 AB 24 */	lfs f3, "@1754"@sda21(r2)
/* 8016B088 00168168  48 00 53 4D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016B08C:
/* 8016B08C 0016816C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016B090 00168170  41 82 00 34 */	beq .L_8016B0C4
/* 8016B094 00168174  C0 02 AB 68 */	lfs f0, "@1902"@sda21(r2)
/* 8016B098 00168178  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016B09C 0016817C  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016B0A0 00168180  7F C4 F3 78 */	mr r4, r30
/* 8016B0A4 00168184  D0 1C 01 90 */	stfs f0, 0x190(r28)
/* 8016B0A8 00168188  7F E5 FB 78 */	mr r5, r31
/* 8016B0AC 0016818C  38 7C 01 90 */	addi r3, r28, 0x190
/* 8016B0B0 00168190  38 C6 07 51 */	addi r6, r6, 0x751
/* 8016B0B4 00168194  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016B0B8 00168198  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016B0BC 0016819C  C0 62 AB 24 */	lfs f3, "@1754"@sda21(r2)
/* 8016B0C0 001681A0  48 00 53 15 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016B0C4:
/* 8016B0C4 001681A4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016B0C8 001681A8  41 82 00 34 */	beq .L_8016B0FC
/* 8016B0CC 001681AC  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016B0D0 001681B0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016B0D4 001681B4  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016B0D8 001681B8  7F C4 F3 78 */	mr r4, r30
/* 8016B0DC 001681BC  D0 1C 01 94 */	stfs f0, 0x194(r28)
/* 8016B0E0 001681C0  7F E5 FB 78 */	mr r5, r31
/* 8016B0E4 001681C4  38 7C 01 94 */	addi r3, r28, 0x194
/* 8016B0E8 001681C8  38 C6 07 74 */	addi r6, r6, 0x774
/* 8016B0EC 001681CC  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016B0F0 001681D0  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016B0F4 001681D4  C0 62 AB 24 */	lfs f3, "@1754"@sda21(r2)
/* 8016B0F8 001681D8  48 00 52 DD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016B0FC:
/* 8016B0FC 001681DC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016B100 001681E0  41 82 00 34 */	beq .L_8016B134
/* 8016B104 001681E4  C0 02 AB 14 */	lfs f0, "@1657"@sda21(r2)
/* 8016B108 001681E8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016B10C 001681EC  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016B110 001681F0  7F C4 F3 78 */	mr r4, r30
/* 8016B114 001681F4  D0 1C 01 A0 */	stfs f0, 0x1a0(r28)
/* 8016B118 001681F8  7F E5 FB 78 */	mr r5, r31
/* 8016B11C 001681FC  38 7C 01 A0 */	addi r3, r28, 0x1a0
/* 8016B120 00168200  38 C6 07 91 */	addi r6, r6, 0x791
/* 8016B124 00168204  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016B128 00168208  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016B12C 0016820C  FC 60 08 90 */	fmr f3, f1
/* 8016B130 00168210  48 00 52 A5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016B134:
/* 8016B134 00168214  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016B138 00168218  41 82 00 34 */	beq .L_8016B16C
/* 8016B13C 0016821C  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016B140 00168220  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016B144 00168224  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016B148 00168228  7F C4 F3 78 */	mr r4, r30
/* 8016B14C 0016822C  D0 1C 01 A4 */	stfs f0, 0x1a4(r28)
/* 8016B150 00168230  7F E5 FB 78 */	mr r5, r31
/* 8016B154 00168234  38 7C 01 A4 */	addi r3, r28, 0x1a4
/* 8016B158 00168238  38 C6 07 AE */	addi r6, r6, 0x7ae
/* 8016B15C 0016823C  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016B160 00168240  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016B164 00168244  C0 62 AB 24 */	lfs f3, "@1754"@sda21(r2)
/* 8016B168 00168248  48 00 52 6D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016B16C:
/* 8016B16C 0016824C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016B170 00168250  41 82 00 34 */	beq .L_8016B1A4
/* 8016B174 00168254  C0 02 AB 50 */	lfs f0, "@1896"@sda21(r2)
/* 8016B178 00168258  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016B17C 0016825C  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016B180 00168260  7F C4 F3 78 */	mr r4, r30
/* 8016B184 00168264  D0 1C 01 A8 */	stfs f0, 0x1a8(r28)
/* 8016B188 00168268  7F E5 FB 78 */	mr r5, r31
/* 8016B18C 0016826C  38 7C 01 A8 */	addi r3, r28, 0x1a8
/* 8016B190 00168270  38 C6 07 D0 */	addi r6, r6, 0x7d0
/* 8016B194 00168274  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016B198 00168278  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016B19C 0016827C  C0 62 AB 24 */	lfs f3, "@1754"@sda21(r2)
/* 8016B1A0 00168280  48 00 52 35 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016B1A4:
/* 8016B1A4 00168284  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016B1A8 00168288  41 82 00 34 */	beq .L_8016B1DC
/* 8016B1AC 0016828C  C0 02 AB 18 */	lfs f0, "@1658"@sda21(r2)
/* 8016B1B0 00168290  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016B1B4 00168294  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016B1B8 00168298  7F C4 F3 78 */	mr r4, r30
/* 8016B1BC 0016829C  D0 1C 01 AC */	stfs f0, 0x1ac(r28)
/* 8016B1C0 001682A0  7F E5 FB 78 */	mr r5, r31
/* 8016B1C4 001682A4  38 7C 01 AC */	addi r3, r28, 0x1ac
/* 8016B1C8 001682A8  38 C6 07 F2 */	addi r6, r6, 0x7f2
/* 8016B1CC 001682AC  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016B1D0 001682B0  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016B1D4 001682B4  C0 62 AB 24 */	lfs f3, "@1754"@sda21(r2)
/* 8016B1D8 001682B8  48 00 51 FD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016B1DC:
/* 8016B1DC 001682BC  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016B1E0 001682C0  41 82 00 34 */	beq .L_8016B214
/* 8016B1E4 001682C4  C0 02 AB 18 */	lfs f0, "@1658"@sda21(r2)
/* 8016B1E8 001682C8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016B1EC 001682CC  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016B1F0 001682D0  7F C4 F3 78 */	mr r4, r30
/* 8016B1F4 001682D4  D0 1C 01 B0 */	stfs f0, 0x1b0(r28)
/* 8016B1F8 001682D8  7F E5 FB 78 */	mr r5, r31
/* 8016B1FC 001682DC  38 7C 01 B0 */	addi r3, r28, 0x1b0
/* 8016B200 001682E0  38 C6 08 0E */	addi r6, r6, 0x80e
/* 8016B204 001682E4  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016B208 001682E8  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016B20C 001682EC  C0 62 AB 24 */	lfs f3, "@1754"@sda21(r2)
/* 8016B210 001682F0  48 00 51 C5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016B214:
/* 8016B214 001682F4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016B218 001682F8  41 82 00 34 */	beq .L_8016B24C
/* 8016B21C 001682FC  C0 02 AB 0C */	lfs f0, "@1585"@sda21(r2)
/* 8016B220 00168300  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016B224 00168304  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016B228 00168308  7F C4 F3 78 */	mr r4, r30
/* 8016B22C 0016830C  D0 1C 01 B8 */	stfs f0, 0x1b8(r28)
/* 8016B230 00168310  7F E5 FB 78 */	mr r5, r31
/* 8016B234 00168314  38 7C 01 B8 */	addi r3, r28, 0x1b8
/* 8016B238 00168318  38 C6 08 2E */	addi r6, r6, 0x82e
/* 8016B23C 0016831C  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016B240 00168320  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016B244 00168324  FC 60 08 90 */	fmr f3, f1
/* 8016B248 00168328  48 00 51 8D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016B24C:
/* 8016B24C 0016832C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016B250 00168330  41 82 00 34 */	beq .L_8016B284
/* 8016B254 00168334  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016B258 00168338  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016B25C 0016833C  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016B260 00168340  7F C4 F3 78 */	mr r4, r30
/* 8016B264 00168344  D0 1C 01 BC */	stfs f0, 0x1bc(r28)
/* 8016B268 00168348  7F E5 FB 78 */	mr r5, r31
/* 8016B26C 0016834C  38 7C 01 BC */	addi r3, r28, 0x1bc
/* 8016B270 00168350  38 C6 08 4B */	addi r6, r6, 0x84b
/* 8016B274 00168354  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016B278 00168358  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016B27C 0016835C  C0 62 AB 24 */	lfs f3, "@1754"@sda21(r2)
/* 8016B280 00168360  48 00 51 55 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016B284:
/* 8016B284 00168364  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016B288 00168368  41 82 00 34 */	beq .L_8016B2BC
/* 8016B28C 0016836C  C0 02 AB 68 */	lfs f0, "@1902"@sda21(r2)
/* 8016B290 00168370  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016B294 00168374  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016B298 00168378  7F C4 F3 78 */	mr r4, r30
/* 8016B29C 0016837C  D0 1C 01 C0 */	stfs f0, 0x1c0(r28)
/* 8016B2A0 00168380  7F E5 FB 78 */	mr r5, r31
/* 8016B2A4 00168384  38 7C 01 C0 */	addi r3, r28, 0x1c0
/* 8016B2A8 00168388  38 C6 08 6D */	addi r6, r6, 0x86d
/* 8016B2AC 0016838C  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016B2B0 00168390  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016B2B4 00168394  C0 62 AB 24 */	lfs f3, "@1754"@sda21(r2)
/* 8016B2B8 00168398  48 00 51 1D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016B2BC:
/* 8016B2BC 0016839C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016B2C0 001683A0  41 82 00 34 */	beq .L_8016B2F4
/* 8016B2C4 001683A4  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016B2C8 001683A8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016B2CC 001683AC  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016B2D0 001683B0  7F C4 F3 78 */	mr r4, r30
/* 8016B2D4 001683B4  D0 1C 01 C4 */	stfs f0, 0x1c4(r28)
/* 8016B2D8 001683B8  7F E5 FB 78 */	mr r5, r31
/* 8016B2DC 001683BC  38 7C 01 C4 */	addi r3, r28, 0x1c4
/* 8016B2E0 001683C0  38 C6 08 8F */	addi r6, r6, 0x88f
/* 8016B2E4 001683C4  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016B2E8 001683C8  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016B2EC 001683CC  C0 62 AB 24 */	lfs f3, "@1754"@sda21(r2)
/* 8016B2F0 001683D0  48 00 50 E5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016B2F4:
/* 8016B2F4 001683D4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016B2F8 001683D8  41 82 00 34 */	beq .L_8016B32C
/* 8016B2FC 001683DC  C0 02 AB 0C */	lfs f0, "@1585"@sda21(r2)
/* 8016B300 001683E0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016B304 001683E4  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016B308 001683E8  7F C4 F3 78 */	mr r4, r30
/* 8016B30C 001683EC  D0 1C 01 D0 */	stfs f0, 0x1d0(r28)
/* 8016B310 001683F0  7F E5 FB 78 */	mr r5, r31
/* 8016B314 001683F4  38 7C 01 D0 */	addi r3, r28, 0x1d0
/* 8016B318 001683F8  38 C6 08 AB */	addi r6, r6, 0x8ab
/* 8016B31C 001683FC  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016B320 00168400  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016B324 00168404  FC 60 08 90 */	fmr f3, f1
/* 8016B328 00168408  48 00 50 AD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016B32C:
/* 8016B32C 0016840C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016B330 00168410  41 82 00 34 */	beq .L_8016B364
/* 8016B334 00168414  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016B338 00168418  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016B33C 0016841C  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016B340 00168420  7F C4 F3 78 */	mr r4, r30
/* 8016B344 00168424  D0 1C 01 D4 */	stfs f0, 0x1d4(r28)
/* 8016B348 00168428  7F E5 FB 78 */	mr r5, r31
/* 8016B34C 0016842C  38 7C 01 D4 */	addi r3, r28, 0x1d4
/* 8016B350 00168430  38 C6 08 C6 */	addi r6, r6, 0x8c6
/* 8016B354 00168434  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016B358 00168438  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016B35C 0016843C  C0 62 AB 24 */	lfs f3, "@1754"@sda21(r2)
/* 8016B360 00168440  48 00 50 75 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016B364:
/* 8016B364 00168444  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016B368 00168448  41 82 00 34 */	beq .L_8016B39C
/* 8016B36C 0016844C  C0 02 AB 68 */	lfs f0, "@1902"@sda21(r2)
/* 8016B370 00168450  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016B374 00168454  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016B378 00168458  7F C4 F3 78 */	mr r4, r30
/* 8016B37C 0016845C  D0 1C 01 D8 */	stfs f0, 0x1d8(r28)
/* 8016B380 00168460  7F E5 FB 78 */	mr r5, r31
/* 8016B384 00168464  38 7C 01 D8 */	addi r3, r28, 0x1d8
/* 8016B388 00168468  38 C6 08 E6 */	addi r6, r6, 0x8e6
/* 8016B38C 0016846C  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016B390 00168470  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016B394 00168474  C0 62 AB 24 */	lfs f3, "@1754"@sda21(r2)
/* 8016B398 00168478  48 00 50 3D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016B39C:
/* 8016B39C 0016847C  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016B3A0 00168480  41 82 00 34 */	beq .L_8016B3D4
/* 8016B3A4 00168484  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016B3A8 00168488  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016B3AC 0016848C  38 C3 14 64 */	addi r6, r3, "@stringBase0"@l
/* 8016B3B0 00168490  7F C4 F3 78 */	mr r4, r30
/* 8016B3B4 00168494  D0 1C 01 DC */	stfs f0, 0x1dc(r28)
/* 8016B3B8 00168498  7F E5 FB 78 */	mr r5, r31
/* 8016B3BC 0016849C  38 7C 01 DC */	addi r3, r28, 0x1dc
/* 8016B3C0 001684A0  38 C6 09 06 */	addi r6, r6, 0x906
/* 8016B3C4 001684A4  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016B3C8 001684A8  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016B3CC 001684AC  C0 62 AB 24 */	lfs f3, "@1754"@sda21(r2)
/* 8016B3D0 001684B0  48 00 50 05 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8016B3D4:
/* 8016B3D4 001684B4  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016B3D8 001684B8  41 82 00 38 */	beq .L_8016B410
/* 8016B3DC 001684BC  3C 80 80 33 */	lis r4, "sound_asset_ids__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016B3E0 001684C0  3C 60 80 27 */	lis r3, "sound_assets__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016B3E4 001684C4  38 84 A0 38 */	addi r4, r4, "sound_asset_ids__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016B3E8 001684C8  80 84 00 10 */	lwz r4, 0x10(r4)
/* 8016B3EC 001684CC  38 03 11 0C */	addi r0, r3, "sound_assets__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016B3F0 001684D0  90 9C 01 54 */	stw r4, 0x154(r28)
/* 8016B3F4 001684D4  80 7C 01 54 */	lwz r3, 0x154(r28)
/* 8016B3F8 001684D8  54 63 20 36 */	slwi r3, r3, 4
/* 8016B3FC 001684DC  7C 60 1A 14 */	add r3, r0, r3
/* 8016B400 001684E0  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8016B404 001684E4  4B EE 0E 11 */	bl xStrHash__FPCc
/* 8016B408 001684E8  3C 80 80 33 */	lis r4, "sound_data__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016B40C 001684EC  90 64 A1 40 */	stw r3, "sound_data__34@unnamed@zNPCTypeBossPlankton_cpp@"@l(r4)
.L_8016B410:
/* 8016B410 001684F0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016B414 001684F4  41 82 00 3C */	beq .L_8016B450
/* 8016B418 001684F8  3C 80 80 33 */	lis r4, "sound_asset_ids__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016B41C 001684FC  3C 60 80 27 */	lis r3, "sound_assets__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016B420 00168500  38 84 A0 38 */	addi r4, r4, "sound_asset_ids__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016B424 00168504  80 84 00 34 */	lwz r4, 0x34(r4)
/* 8016B428 00168508  38 03 11 0C */	addi r0, r3, "sound_assets__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016B42C 0016850C  90 9C 01 6C */	stw r4, 0x16c(r28)
/* 8016B430 00168510  80 7C 01 6C */	lwz r3, 0x16c(r28)
/* 8016B434 00168514  54 63 20 36 */	slwi r3, r3, 4
/* 8016B438 00168518  7C 60 1A 14 */	add r3, r0, r3
/* 8016B43C 0016851C  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8016B440 00168520  4B EE 0D D5 */	bl xStrHash__FPCc
/* 8016B444 00168524  3C 80 80 33 */	lis r4, "sound_data__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016B448 00168528  38 84 A1 40 */	addi r4, r4, "sound_data__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016B44C 0016852C  90 64 00 10 */	stw r3, 0x10(r4)
.L_8016B450:
/* 8016B450 00168530  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016B454 00168534  41 82 00 3C */	beq .L_8016B490
/* 8016B458 00168538  3C 80 80 33 */	lis r4, "sound_asset_ids__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016B45C 0016853C  3C 60 80 27 */	lis r3, "sound_assets__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016B460 00168540  38 84 A0 38 */	addi r4, r4, "sound_asset_ids__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016B464 00168544  80 84 00 50 */	lwz r4, 0x50(r4)
/* 8016B468 00168548  38 03 11 0C */	addi r0, r3, "sound_assets__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016B46C 0016854C  90 9C 01 84 */	stw r4, 0x184(r28)
/* 8016B470 00168550  80 7C 01 84 */	lwz r3, 0x184(r28)
/* 8016B474 00168554  54 63 20 36 */	slwi r3, r3, 4
/* 8016B478 00168558  7C 60 1A 14 */	add r3, r0, r3
/* 8016B47C 0016855C  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8016B480 00168560  4B EE 0D 95 */	bl xStrHash__FPCc
/* 8016B484 00168564  3C 80 80 33 */	lis r4, "sound_data__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016B488 00168568  38 84 A1 40 */	addi r4, r4, "sound_data__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016B48C 0016856C  90 64 00 20 */	stw r3, 0x20(r4)
.L_8016B490:
/* 8016B490 00168570  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016B494 00168574  41 82 00 3C */	beq .L_8016B4D0
/* 8016B498 00168578  3C 80 80 33 */	lis r4, "sound_asset_ids__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016B49C 0016857C  3C 60 80 27 */	lis r3, "sound_assets__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016B4A0 00168580  38 84 A0 38 */	addi r4, r4, "sound_asset_ids__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016B4A4 00168584  80 84 00 84 */	lwz r4, 0x84(r4)
/* 8016B4A8 00168588  38 03 11 0C */	addi r0, r3, "sound_assets__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016B4AC 0016858C  90 9C 01 9C */	stw r4, 0x19c(r28)
/* 8016B4B0 00168590  80 7C 01 9C */	lwz r3, 0x19c(r28)
/* 8016B4B4 00168594  54 63 20 36 */	slwi r3, r3, 4
/* 8016B4B8 00168598  7C 60 1A 14 */	add r3, r0, r3
/* 8016B4BC 0016859C  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8016B4C0 001685A0  4B EE 0D 55 */	bl xStrHash__FPCc
/* 8016B4C4 001685A4  3C 80 80 33 */	lis r4, "sound_data__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016B4C8 001685A8  38 84 A1 40 */	addi r4, r4, "sound_data__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016B4CC 001685AC  90 64 00 30 */	stw r3, 0x30(r4)
.L_8016B4D0:
/* 8016B4D0 001685B0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016B4D4 001685B4  41 82 00 3C */	beq .L_8016B510
/* 8016B4D8 001685B8  3C 80 80 33 */	lis r4, "sound_asset_ids__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016B4DC 001685BC  3C 60 80 27 */	lis r3, "sound_assets__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016B4E0 001685C0  38 84 A0 38 */	addi r4, r4, "sound_asset_ids__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016B4E4 001685C4  80 84 00 AC */	lwz r4, 0xac(r4)
/* 8016B4E8 001685C8  38 03 11 0C */	addi r0, r3, "sound_assets__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016B4EC 001685CC  90 9C 01 B4 */	stw r4, 0x1b4(r28)
/* 8016B4F0 001685D0  80 7C 01 B4 */	lwz r3, 0x1b4(r28)
/* 8016B4F4 001685D4  54 63 20 36 */	slwi r3, r3, 4
/* 8016B4F8 001685D8  7C 60 1A 14 */	add r3, r0, r3
/* 8016B4FC 001685DC  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8016B500 001685E0  4B EE 0D 15 */	bl xStrHash__FPCc
/* 8016B504 001685E4  3C 80 80 33 */	lis r4, "sound_data__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016B508 001685E8  38 84 A1 40 */	addi r4, r4, "sound_data__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016B50C 001685EC  90 64 00 40 */	stw r3, 0x40(r4)
.L_8016B510:
/* 8016B510 001685F0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8016B514 001685F4  41 82 00 3C */	beq .L_8016B550
/* 8016B518 001685F8  3C 80 80 33 */	lis r4, "sound_asset_ids__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016B51C 001685FC  3C 60 80 27 */	lis r3, "sound_assets__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016B520 00168600  38 84 A0 38 */	addi r4, r4, "sound_asset_ids__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016B524 00168604  80 84 00 D4 */	lwz r4, 0xd4(r4)
/* 8016B528 00168608  38 03 11 0C */	addi r0, r3, "sound_assets__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016B52C 0016860C  90 9C 01 CC */	stw r4, 0x1cc(r28)
/* 8016B530 00168610  80 7C 01 CC */	lwz r3, 0x1cc(r28)
/* 8016B534 00168614  54 63 20 36 */	slwi r3, r3, 4
/* 8016B538 00168618  7C 60 1A 14 */	add r3, r0, r3
/* 8016B53C 0016861C  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8016B540 00168620  4B EE 0C D5 */	bl xStrHash__FPCc
/* 8016B544 00168624  3C 80 80 33 */	lis r4, "sound_data__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016B548 00168628  38 84 A1 40 */	addi r4, r4, "sound_data__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016B54C 0016862C  90 64 00 50 */	stw r3, 0x50(r4)
.L_8016B550:
/* 8016B550 00168630  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8016B554 00168634  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8016B558 00168638  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 8016B55C 0016863C  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 8016B560 00168640  83 81 00 50 */	lwz r28, 0x50(r1)
/* 8016B564 00168644  7C 08 03 A6 */	mtlr r0
/* 8016B568 00168648  38 21 00 60 */	addi r1, r1, 0x60
/* 8016B56C 0016864C  4E 80 00 20 */	blr
.endfn "register_tweaks__Q234@unnamed@zNPCTypeBossPlankton_cpp@11tweak_groupFbP16xModelAssetParamUiPCc"

# zNPCBPlankton::ParseLinks()
.fn ParseLinks__13zNPCBPlanktonFv, global
/* 8016B570 00168650  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016B574 00168654  7C 08 02 A6 */	mflr r0
/* 8016B578 00168658  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016B57C 0016865C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016B580 00168660  7C 7F 1B 78 */	mr r31, r3
/* 8016B584 00168664  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016B588 00168668  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8016B58C 0016866C  93 81 00 10 */	stw r28, 0x10(r1)
/* 8016B590 00168670  4B F8 5E 05 */	bl ParseLinks__10zNPCCommonFv
/* 8016B594 00168674  38 7F 04 B4 */	addi r3, r31, 0x4b4
/* 8016B598 00168678  38 80 00 00 */	li r4, 0x0
/* 8016B59C 0016867C  38 A0 01 E0 */	li r5, 0x1e0
/* 8016B5A0 00168680  4B E9 7E B9 */	bl memset
/* 8016B5A4 00168684  88 1F 00 05 */	lbz r0, 0x5(r31)
/* 8016B5A8 00168688  83 DF 00 08 */	lwz r30, 0x8(r31)
/* 8016B5AC 0016868C  54 00 28 34 */	slwi r0, r0, 5
/* 8016B5B0 00168690  7F BE 02 14 */	add r29, r30, r0
/* 8016B5B4 00168694  48 00 00 8C */	b .L_8016B640
.L_8016B5B8:
/* 8016B5B8 00168698  A0 1E 00 02 */	lhz r0, 0x2(r30)
/* 8016B5BC 0016869C  28 00 01 33 */	cmplwi r0, 0x133
/* 8016B5C0 001686A0  40 82 00 7C */	bne .L_8016B63C
/* 8016B5C4 001686A4  80 7E 00 04 */	lwz r3, 0x4(r30)
/* 8016B5C8 001686A8  4B F4 94 75 */	bl zSceneFindObject__FUi
/* 8016B5CC 001686AC  C0 1E 00 08 */	lfs f0, 0x8(r30)
/* 8016B5D0 001686B0  7C 65 1B 78 */	mr r5, r3
/* 8016B5D4 001686B4  FC 00 00 1E */	fctiwz f0, f0
/* 8016B5D8 001686B8  D8 01 00 08 */	stfd f0, 0x8(r1)
/* 8016B5DC 001686BC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016B5E0 001686C0  2C 04 00 00 */	cmpwi r4, 0x0
/* 8016B5E4 001686C4  40 81 00 58 */	ble .L_8016B63C
/* 8016B5E8 001686C8  2C 04 00 08 */	cmpwi r4, 0x8
/* 8016B5EC 001686CC  41 81 00 50 */	bgt .L_8016B63C
/* 8016B5F0 001686D0  38 04 FF FF */	addi r0, r4, -0x1
/* 8016B5F4 001686D4  1C 60 00 3C */	mulli r3, r0, 0x3c
/* 8016B5F8 001686D8  3B 83 04 B4 */	addi r28, r3, 0x4b4
/* 8016B5FC 001686DC  7F 9F E2 14 */	add r28, r31, r28
/* 8016B600 001686E0  80 1C 00 00 */	lwz r0, 0x0(r28)
/* 8016B604 001686E4  28 00 00 00 */	cmplwi r0, 0x0
/* 8016B608 001686E8  40 82 00 34 */	bne .L_8016B63C
/* 8016B60C 001686EC  7F E3 FB 78 */	mr r3, r31
/* 8016B610 001686F0  48 00 14 6D */	bl load_territory__13zNPCBPlanktonFiR5xBase
/* 8016B614 001686F4  80 1C 00 00 */	lwz r0, 0x0(r28)
/* 8016B618 001686F8  28 00 00 00 */	cmplwi r0, 0x0
/* 8016B61C 001686FC  41 82 00 10 */	beq .L_8016B62C
/* 8016B620 00168700  80 1C 00 04 */	lwz r0, 0x4(r28)
/* 8016B624 00168704  28 00 00 00 */	cmplwi r0, 0x0
/* 8016B628 00168708  40 82 00 14 */	bne .L_8016B63C
.L_8016B62C:
/* 8016B62C 0016870C  7F 83 E3 78 */	mr r3, r28
/* 8016B630 00168710  38 80 00 00 */	li r4, 0x0
/* 8016B634 00168714  38 A0 00 3C */	li r5, 0x3c
/* 8016B638 00168718  4B E9 7E 21 */	bl memset
.L_8016B63C:
/* 8016B63C 0016871C  3B DE 00 20 */	addi r30, r30, 0x20
.L_8016B640:
/* 8016B640 00168720  7C 1E E8 40 */	cmplw r30, r29
/* 8016B644 00168724  40 82 FF 74 */	bne .L_8016B5B8
/* 8016B648 00168728  38 00 00 00 */	li r0, 0x0
/* 8016B64C 0016872C  7F FE FB 78 */	mr r30, r31
/* 8016B650 00168730  90 1F 06 94 */	stw r0, 0x694(r31)
/* 8016B654 00168734  3B 80 00 00 */	li r28, 0x0
.L_8016B658:
/* 8016B658 00168738  80 1E 04 B4 */	lwz r0, 0x4b4(r30)
/* 8016B65C 0016873C  28 00 00 00 */	cmplwi r0, 0x0
/* 8016B660 00168740  41 82 00 30 */	beq .L_8016B690
/* 8016B664 00168744  80 1F 06 94 */	lwz r0, 0x694(r31)
/* 8016B668 00168748  7C 1C 00 00 */	cmpw r28, r0
/* 8016B66C 0016874C  41 82 00 18 */	beq .L_8016B684
/* 8016B670 00168750  1C 60 00 3C */	mulli r3, r0, 0x3c
/* 8016B674 00168754  38 9E 04 B4 */	addi r4, r30, 0x4b4
/* 8016B678 00168758  38 63 04 B4 */	addi r3, r3, 0x4b4
/* 8016B67C 0016875C  7C 7F 1A 14 */	add r3, r31, r3
/* 8016B680 00168760  48 00 00 41 */	bl __as__Q213zNPCBPlankton14territory_dataFRCQ213zNPCBPlankton14territory_data
.L_8016B684:
/* 8016B684 00168764  80 7F 06 94 */	lwz r3, 0x694(r31)
/* 8016B688 00168768  38 03 00 01 */	addi r0, r3, 0x1
/* 8016B68C 0016876C  90 1F 06 94 */	stw r0, 0x694(r31)
.L_8016B690:
/* 8016B690 00168770  3B 9C 00 01 */	addi r28, r28, 0x1
/* 8016B694 00168774  3B DE 00 3C */	addi r30, r30, 0x3c
/* 8016B698 00168778  2C 1C 00 08 */	cmpwi r28, 0x8
/* 8016B69C 0016877C  41 80 FF BC */	blt .L_8016B658
/* 8016B6A0 00168780  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016B6A4 00168784  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016B6A8 00168788  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016B6AC 0016878C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8016B6B0 00168790  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8016B6B4 00168794  7C 08 03 A6 */	mtlr r0
/* 8016B6B8 00168798  38 21 00 20 */	addi r1, r1, 0x20
/* 8016B6BC 0016879C  4E 80 00 20 */	blr
.endfn ParseLinks__13zNPCBPlanktonFv

# zNPCBPlankton::territory_data::operator=(const zNPCBPlankton::territory_data&)
.fn __as__Q213zNPCBPlankton14territory_dataFRCQ213zNPCBPlankton14territory_data, weak
/* 8016B6C0 001687A0  80 04 00 00 */	lwz r0, 0x0(r4)
/* 8016B6C4 001687A4  80 A4 00 04 */	lwz r5, 0x4(r4)
/* 8016B6C8 001687A8  90 03 00 00 */	stw r0, 0x0(r3)
/* 8016B6CC 001687AC  80 04 00 08 */	lwz r0, 0x8(r4)
/* 8016B6D0 001687B0  90 A3 00 04 */	stw r5, 0x4(r3)
/* 8016B6D4 001687B4  80 A4 00 0C */	lwz r5, 0xc(r4)
/* 8016B6D8 001687B8  90 03 00 08 */	stw r0, 0x8(r3)
/* 8016B6DC 001687BC  80 04 00 10 */	lwz r0, 0x10(r4)
/* 8016B6E0 001687C0  90 A3 00 0C */	stw r5, 0xc(r3)
/* 8016B6E4 001687C4  80 A4 00 14 */	lwz r5, 0x14(r4)
/* 8016B6E8 001687C8  90 03 00 10 */	stw r0, 0x10(r3)
/* 8016B6EC 001687CC  80 04 00 18 */	lwz r0, 0x18(r4)
/* 8016B6F0 001687D0  90 A3 00 14 */	stw r5, 0x14(r3)
/* 8016B6F4 001687D4  80 A4 00 1C */	lwz r5, 0x1c(r4)
/* 8016B6F8 001687D8  90 03 00 18 */	stw r0, 0x18(r3)
/* 8016B6FC 001687DC  80 04 00 20 */	lwz r0, 0x20(r4)
/* 8016B700 001687E0  90 A3 00 1C */	stw r5, 0x1c(r3)
/* 8016B704 001687E4  80 A4 00 24 */	lwz r5, 0x24(r4)
/* 8016B708 001687E8  90 03 00 20 */	stw r0, 0x20(r3)
/* 8016B70C 001687EC  80 04 00 28 */	lwz r0, 0x28(r4)
/* 8016B710 001687F0  90 A3 00 24 */	stw r5, 0x24(r3)
/* 8016B714 001687F4  80 A4 00 2C */	lwz r5, 0x2c(r4)
/* 8016B718 001687F8  90 03 00 28 */	stw r0, 0x28(r3)
/* 8016B71C 001687FC  80 04 00 30 */	lwz r0, 0x30(r4)
/* 8016B720 00168800  90 A3 00 2C */	stw r5, 0x2c(r3)
/* 8016B724 00168804  88 A4 00 34 */	lbz r5, 0x34(r4)
/* 8016B728 00168808  90 03 00 30 */	stw r0, 0x30(r3)
/* 8016B72C 0016880C  88 04 00 35 */	lbz r0, 0x35(r4)
/* 8016B730 00168810  98 A3 00 34 */	stb r5, 0x34(r3)
/* 8016B734 00168814  C0 04 00 38 */	lfs f0, 0x38(r4)
/* 8016B738 00168818  98 03 00 35 */	stb r0, 0x35(r3)
/* 8016B73C 0016881C  D0 03 00 38 */	stfs f0, 0x38(r3)
/* 8016B740 00168820  4E 80 00 20 */	blr
.endfn __as__Q213zNPCBPlankton14territory_dataFRCQ213zNPCBPlankton14territory_data

# zNPCBPlankton::SelfSetup()
.fn SelfSetup__13zNPCBPlanktonFv, global
/* 8016B744 00168824  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016B748 00168828  7C 08 02 A6 */	mflr r0
/* 8016B74C 0016882C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016B750 00168830  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016B754 00168834  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016B758 00168838  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8016B75C 0016883C  93 81 00 10 */	stw r28, 0x10(r1)
/* 8016B760 00168840  7C 7C 1B 78 */	mr r28, r3
/* 8016B764 00168844  4B FA 17 71 */	bl xBehaveMgr_GetSelf__Fv
/* 8016B768 00168848  7F 84 E3 78 */	mr r4, r28
/* 8016B76C 0016884C  38 A0 00 00 */	li r5, 0x0
/* 8016B770 00168850  4B FA 18 CD */	bl Subscribe__10xBehaveMgrFP5xBasei
/* 8016B774 00168854  90 7C 02 28 */	stw r3, 0x228(r28)
/* 8016B778 00168858  83 DC 02 28 */	lwz r30, 0x228(r28)
/* 8016B77C 0016885C  7F C3 F3 78 */	mr r3, r30
/* 8016B780 00168860  4B FA 1A 09 */	bl BrainBegin__7xPsycheFv
/* 8016B784 00168864  3C 60 4E 47 */	lis r3, 0x4e47
/* 8016B788 00168868  3B A3 42 4B */	addi r29, r3, 0x424b
/* 8016B78C 0016886C  3B E3 42 59 */	addi r31, r3, 0x4259
/* 8016B790 00168870  48 00 00 18 */	b .L_8016B7A8
.L_8016B794:
/* 8016B794 00168874  7F C3 F3 78 */	mr r3, r30
/* 8016B798 00168878  7F A4 EB 78 */	mr r4, r29
/* 8016B79C 0016887C  7F 85 E3 78 */	mr r5, r28
/* 8016B7A0 00168880  4B FA 1A A1 */	bl AddGoal__7xPsycheFiPv
/* 8016B7A4 00168884  3B BD 00 01 */	addi r29, r29, 0x1
.L_8016B7A8:
/* 8016B7A8 00168888  7C 1D F8 00 */	cmpw r29, r31
/* 8016B7AC 0016888C  40 81 FF E8 */	ble .L_8016B794
/* 8016B7B0 00168890  7F C3 F3 78 */	mr r3, r30
/* 8016B7B4 00168894  4B FA 1A 55 */	bl BrainEnd__7xPsycheFv
/* 8016B7B8 00168898  3C 80 4E 47 */	lis r4, 0x4e47
/* 8016B7BC 0016889C  7F C3 F3 78 */	mr r3, r30
/* 8016B7C0 001688A0  38 84 42 4B */	addi r4, r4, 0x424b
/* 8016B7C4 001688A4  4B F9 71 B9 */	bl SetSafety__7xPsycheFi
/* 8016B7C8 001688A8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016B7CC 001688AC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016B7D0 001688B0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016B7D4 001688B4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8016B7D8 001688B8  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8016B7DC 001688BC  7C 08 03 A6 */	mtlr r0
/* 8016B7E0 001688C0  38 21 00 20 */	addi r1, r1, 0x20
/* 8016B7E4 001688C4  4E 80 00 20 */	blr
.endfn SelfSetup__13zNPCBPlanktonFv

# zNPCBPlankton::Damage(en_NPC_DAMAGE_TYPE, xBase*, const xVec3*)
.fn Damage__13zNPCBPlanktonF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3, global
/* 8016B7E8 001688C8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8016B7EC 001688CC  7C 08 02 A6 */	mflr r0
/* 8016B7F0 001688D0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016B7F4 001688D4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8016B7F8 001688D8  7C DF 33 78 */	mr r31, r6
/* 8016B7FC 001688DC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8016B800 001688E0  7C 9E 23 78 */	mr r30, r4
/* 8016B804 001688E4  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8016B808 001688E8  7C 7D 1B 78 */	mr r29, r3
/* 8016B80C 001688EC  80 63 02 28 */	lwz r3, 0x228(r3)
/* 8016B810 001688F0  4B FA 1D B5 */	bl GIDOfActive__7xPsycheCFv
/* 8016B814 001688F4  28 1E 00 0C */	cmplwi r30, 0xc
/* 8016B818 001688F8  41 81 00 50 */	bgt .L_8016B868
/* 8016B81C 001688FC  3C 60 80 2A */	lis r3, "@2021"@ha
/* 8016B820 00168900  57 C0 10 3A */	slwi r0, r30, 2
/* 8016B824 00168904  38 63 AF F0 */	addi r3, r3, "@2021"@l
/* 8016B828 00168908  7C 03 00 2E */	lwzx r0, r3, r0
/* 8016B82C 0016890C  7C 09 03 A6 */	mtctr r0
/* 8016B830 00168910  4E 80 04 20 */	bctr
.L_8016B834:
/* 8016B834 00168914  28 1F 00 00 */	cmplwi r31, 0x0
/* 8016B838 00168918  41 82 00 28 */	beq .L_8016B860
/* 8016B83C 0016891C  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016B840 00168920  7F E4 FB 78 */	mr r4, r31
/* 8016B844 00168924  38 A3 A1 A0 */	addi r5, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016B848 00168928  38 61 00 08 */	addi r3, r1, 0x8
/* 8016B84C 0016892C  C0 25 00 28 */	lfs f1, 0x28(r5)
/* 8016B850 00168930  4B E9 F8 D1 */	bl __ml__5xVec3CFf
/* 8016B854 00168934  7F A3 EB 78 */	mr r3, r29
/* 8016B858 00168938  38 81 00 08 */	addi r4, r1, 0x8
/* 8016B85C 0016893C  48 00 1C 69 */	bl impart_velocity__13zNPCBPlanktonFRC5xVec3
.L_8016B860:
/* 8016B860 00168940  7F A3 EB 78 */	mr r3, r29
/* 8016B864 00168944  48 00 1A 4D */	bl stun__13zNPCBPlanktonFv
.L_8016B868:
/* 8016B868 00168948  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8016B86C 0016894C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8016B870 00168950  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8016B874 00168954  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8016B878 00168958  7C 08 03 A6 */	mtlr r0
/* 8016B87C 0016895C  38 21 00 30 */	addi r1, r1, 0x30
/* 8016B880 00168960  4E 80 00 20 */	blr
.endfn Damage__13zNPCBPlanktonF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3

# zNPCBPlankton::AnimPick(int, en_NPC_GOAL_SPOT, xGoal*)
.fn AnimPick__13zNPCBPlanktonFi16en_NPC_GOAL_SPOTP5xGoal, global
/* 8016B884 00168964  3C 84 B1 B9 */	addis r4, r4, 0xb1b9
/* 8016B888 00168968  38 84 BD B5 */	addi r4, r4, -0x424b
/* 8016B88C 0016896C  28 04 00 0E */	cmplwi r4, 0xe
/* 8016B890 00168970  41 81 00 5C */	bgt .L_8016B8EC
/* 8016B894 00168974  3C 60 80 2A */	lis r3, "@2049"@ha
/* 8016B898 00168978  54 84 10 3A */	slwi r4, r4, 2
/* 8016B89C 0016897C  38 63 B0 24 */	addi r3, r3, "@2049"@l
/* 8016B8A0 00168980  7C 03 20 2E */	lwzx r0, r3, r4
/* 8016B8A4 00168984  7C 09 03 A6 */	mtctr r0
/* 8016B8A8 00168988  4E 80 04 20 */	bctr
.L_8016B8AC:
/* 8016B8AC 0016898C  38 00 00 01 */	li r0, 0x1
/* 8016B8B0 00168990  48 00 00 40 */	b .L_8016B8F0
.L_8016B8B4:
/* 8016B8B4 00168994  38 00 00 03 */	li r0, 0x3
/* 8016B8B8 00168998  48 00 00 38 */	b .L_8016B8F0
.L_8016B8BC:
/* 8016B8BC 0016899C  38 00 00 42 */	li r0, 0x42
/* 8016B8C0 001689A0  48 00 00 30 */	b .L_8016B8F0
.L_8016B8C4:
/* 8016B8C4 001689A4  38 00 00 43 */	li r0, 0x43
/* 8016B8C8 001689A8  48 00 00 28 */	b .L_8016B8F0
.L_8016B8CC:
/* 8016B8CC 001689AC  38 00 00 46 */	li r0, 0x46
/* 8016B8D0 001689B0  48 00 00 20 */	b .L_8016B8F0
.L_8016B8D4:
/* 8016B8D4 001689B4  38 00 00 49 */	li r0, 0x49
/* 8016B8D8 001689B8  48 00 00 18 */	b .L_8016B8F0
.L_8016B8DC:
/* 8016B8DC 001689BC  38 00 00 4C */	li r0, 0x4c
/* 8016B8E0 001689C0  48 00 00 10 */	b .L_8016B8F0
.L_8016B8E4:
/* 8016B8E4 001689C4  38 00 00 4D */	li r0, 0x4d
/* 8016B8E8 001689C8  48 00 00 08 */	b .L_8016B8F0
.L_8016B8EC:
/* 8016B8EC 001689CC  38 00 00 01 */	li r0, 0x1
.L_8016B8F0:
/* 8016B8F0 001689D0  2C 00 FF FF */	cmpwi r0, -0x1
/* 8016B8F4 001689D4  40 81 00 18 */	ble .L_8016B90C
/* 8016B8F8 001689D8  3C 60 80 2A */	lis r3, g_hash_bossanim@ha
/* 8016B8FC 001689DC  54 00 10 3A */	slwi r0, r0, 2
/* 8016B900 001689E0  38 63 92 68 */	addi r3, r3, g_hash_bossanim@l
/* 8016B904 001689E4  7C 63 00 2E */	lwzx r3, r3, r0
/* 8016B908 001689E8  4E 80 00 20 */	blr
.L_8016B90C:
/* 8016B90C 001689EC  38 60 00 00 */	li r3, 0x0
/* 8016B910 001689F0  4E 80 00 20 */	blr
.endfn AnimPick__13zNPCBPlanktonFi16en_NPC_GOAL_SPOTP5xGoal

# zNPCBPlankton::next_goal()
.fn next_goal__13zNPCBPlanktonFv, global
/* 8016B914 001689F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016B918 001689F8  7C 08 02 A6 */	mflr r0
/* 8016B91C 001689FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016B920 00168A00  80 03 02 C4 */	lwz r0, 0x2c4(r3)
/* 8016B924 00168A04  2C 00 00 00 */	cmpwi r0, 0x0
/* 8016B928 00168A08  40 82 00 40 */	bne .L_8016B968
/* 8016B92C 00168A0C  88 03 02 B7 */	lbz r0, 0x2b7(r3)
/* 8016B930 00168A10  28 00 00 00 */	cmplwi r0, 0x0
/* 8016B934 00168A14  41 82 00 10 */	beq .L_8016B944
/* 8016B938 00168A18  3C 60 4E 47 */	lis r3, 0x4e47
/* 8016B93C 00168A1C  38 63 42 50 */	addi r3, r3, 0x4250
/* 8016B940 00168A20  48 00 00 30 */	b .L_8016B970
.L_8016B944:
/* 8016B944 00168A24  48 00 19 1D */	bl crony_attacking__13zNPCBPlanktonCFv
/* 8016B948 00168A28  54 64 06 3E */	clrlwi r4, r3, 24
/* 8016B94C 00168A2C  3C 60 4E 47 */	lis r3, 0x4e47
/* 8016B950 00168A30  7C 04 00 D0 */	neg r0, r4
/* 8016B954 00168A34  7C 00 23 78 */	or r0, r0, r4
/* 8016B958 00168A38  38 63 42 4C */	addi r3, r3, 0x424c
/* 8016B95C 00168A3C  7C 00 FE 70 */	srawi r0, r0, 31
/* 8016B960 00168A40  7C 60 1A 14 */	add r3, r0, r3
/* 8016B964 00168A44  48 00 00 0C */	b .L_8016B970
.L_8016B968:
/* 8016B968 00168A48  3C 60 4E 47 */	lis r3, 0x4e47
/* 8016B96C 00168A4C  38 63 42 4F */	addi r3, r3, 0x424f
.L_8016B970:
/* 8016B970 00168A50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016B974 00168A54  7C 08 03 A6 */	mtlr r0
/* 8016B978 00168A58  38 21 00 10 */	addi r1, r1, 0x10
/* 8016B97C 00168A5C  4E 80 00 20 */	blr
.endfn next_goal__13zNPCBPlanktonFv

# zNPCBPlankton::refresh_orbit()
.fn refresh_orbit__13zNPCBPlanktonFv, global
/* 8016B980 00168A60  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8016B984 00168A64  7C 08 02 A6 */	mflr r0
/* 8016B988 00168A68  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016B98C 00168A6C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8016B990 00168A70  7C 7F 1B 78 */	mr r31, r3
/* 8016B994 00168A74  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8016B998 00168A78  80 03 02 C4 */	lwz r0, 0x2c4(r3)
/* 8016B99C 00168A7C  2C 00 00 00 */	cmpwi r0, 0x0
/* 8016B9A0 00168A80  40 82 00 F4 */	bne .L_8016BA94
/* 8016B9A4 00168A84  88 1F 02 B7 */	lbz r0, 0x2b7(r31)
/* 8016B9A8 00168A88  28 00 00 00 */	cmplwi r0, 0x0
/* 8016B9AC 00168A8C  41 82 00 6C */	beq .L_8016BA18
/* 8016B9B0 00168A90  80 9F 04 50 */	lwz r4, 0x450(r31)
/* 8016B9B4 00168A94  80 7F 04 54 */	lwz r3, 0x454(r31)
/* 8016B9B8 00168A98  80 1F 04 58 */	lwz r0, 0x458(r31)
/* 8016B9BC 00168A9C  90 81 00 14 */	stw r4, 0x14(r1)
/* 8016B9C0 00168AA0  90 61 00 18 */	stw r3, 0x18(r1)
/* 8016B9C4 00168AA4  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8016B9C8 00168AA8  4B FF D0 CD */	bl "get_player_loc__34@unnamed@zNPCTypeBossPlankton_cpp@Fv"
/* 8016B9CC 00168AAC  7C 64 1B 78 */	mr r4, r3
/* 8016B9D0 00168AB0  38 7F 04 50 */	addi r3, r31, 0x450
/* 8016B9D4 00168AB4  4B E9 F8 91 */	bl __as__5xVec3FRC5xVec3
/* 8016B9D8 00168AB8  3C 80 80 33 */	lis r4, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016B9DC 00168ABC  38 61 00 08 */	addi r3, r1, 0x8
/* 8016B9E0 00168AC0  38 C4 A1 A0 */	addi r6, r4, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016B9E4 00168AC4  38 9F 04 50 */	addi r4, r31, 0x450
/* 8016B9E8 00168AC8  C0 26 01 3C */	lfs f1, 0x13c(r6)
/* 8016B9EC 00168ACC  38 A1 00 14 */	addi r5, r1, 0x14
/* 8016B9F0 00168AD0  C0 06 00 8C */	lfs f0, 0x8c(r6)
/* 8016B9F4 00168AD4  EC 01 00 2A */	fadds f0, f1, f0
/* 8016B9F8 00168AD8  D0 1F 04 54 */	stfs f0, 0x454(r31)
/* 8016B9FC 00168ADC  C0 06 00 90 */	lfs f0, 0x90(r6)
/* 8016BA00 00168AE0  D0 1F 04 5C */	stfs f0, 0x45c(r31)
/* 8016BA04 00168AE4  4B E9 F7 C9 */	bl __mi__5xVec3CFRC5xVec3
/* 8016BA08 00168AE8  38 7F 04 74 */	addi r3, r31, 0x474
/* 8016BA0C 00168AEC  38 81 00 08 */	addi r4, r1, 0x8
/* 8016BA10 00168AF0  4B EA 9A 35 */	bl __apl__5xVec3FRC5xVec3
/* 8016BA14 00168AF4  48 00 01 08 */	b .L_8016BB1C
.L_8016BA18:
/* 8016BA18 00168AF8  88 1F 02 B6 */	lbz r0, 0x2b6(r31)
/* 8016BA1C 00168AFC  28 00 00 00 */	cmplwi r0, 0x0
/* 8016BA20 00168B00  41 82 00 3C */	beq .L_8016BA5C
/* 8016BA24 00168B04  3C 80 80 33 */	lis r4, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016BA28 00168B08  38 7F 04 50 */	addi r3, r31, 0x450
/* 8016BA2C 00168B0C  38 84 A1 A0 */	addi r4, r4, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016BA30 00168B10  38 84 01 38 */	addi r4, r4, 0x138
/* 8016BA34 00168B14  4B E9 F8 31 */	bl __as__5xVec3FRC5xVec3
/* 8016BA38 00168B18  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016BA3C 00168B1C  C0 3F 04 54 */	lfs f1, 0x454(r31)
/* 8016BA40 00168B20  38 63 A1 A0 */	addi r3, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016BA44 00168B24  C0 03 01 48 */	lfs f0, 0x148(r3)
/* 8016BA48 00168B28  EC 01 00 2A */	fadds f0, f1, f0
/* 8016BA4C 00168B2C  D0 1F 04 54 */	stfs f0, 0x454(r31)
/* 8016BA50 00168B30  C0 03 01 44 */	lfs f0, 0x144(r3)
/* 8016BA54 00168B34  D0 1F 04 5C */	stfs f0, 0x45c(r31)
/* 8016BA58 00168B38  48 00 00 C4 */	b .L_8016BB1C
.L_8016BA5C:
/* 8016BA5C 00168B3C  3C 80 80 33 */	lis r4, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016BA60 00168B40  38 7F 04 50 */	addi r3, r31, 0x450
/* 8016BA64 00168B44  38 84 A1 A0 */	addi r4, r4, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016BA68 00168B48  38 84 01 38 */	addi r4, r4, 0x138
/* 8016BA6C 00168B4C  4B E9 F7 F9 */	bl __as__5xVec3FRC5xVec3
/* 8016BA70 00168B50  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016BA74 00168B54  C0 3F 04 54 */	lfs f1, 0x454(r31)
/* 8016BA78 00168B58  38 63 A1 A0 */	addi r3, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016BA7C 00168B5C  C0 03 01 50 */	lfs f0, 0x150(r3)
/* 8016BA80 00168B60  EC 01 00 2A */	fadds f0, f1, f0
/* 8016BA84 00168B64  D0 1F 04 54 */	stfs f0, 0x454(r31)
/* 8016BA88 00168B68  C0 03 01 4C */	lfs f0, 0x14c(r3)
/* 8016BA8C 00168B6C  D0 1F 04 5C */	stfs f0, 0x45c(r31)
/* 8016BA90 00168B70  48 00 00 8C */	b .L_8016BB1C
.L_8016BA94:
/* 8016BA94 00168B74  80 1F 06 98 */	lwz r0, 0x698(r31)
/* 8016BA98 00168B78  38 7F 04 50 */	addi r3, r31, 0x450
/* 8016BA9C 00168B7C  1C 80 00 3C */	mulli r4, r0, 0x3c
/* 8016BAA0 00168B80  38 04 04 B4 */	addi r0, r4, 0x4b4
/* 8016BAA4 00168B84  7C 9F 00 2E */	lwzx r4, r31, r0
/* 8016BAA8 00168B88  83 C4 00 10 */	lwz r30, 0x10(r4)
/* 8016BAAC 00168B8C  38 9E 00 08 */	addi r4, r30, 0x8
/* 8016BAB0 00168B90  4B E9 F7 B5 */	bl __as__5xVec3FRC5xVec3
/* 8016BAB4 00168B94  C0 1E 00 20 */	lfs f0, 0x20(r30)
/* 8016BAB8 00168B98  D0 1F 04 5C */	stfs f0, 0x45c(r31)
/* 8016BABC 00168B9C  88 1F 02 B6 */	lbz r0, 0x2b6(r31)
/* 8016BAC0 00168BA0  28 00 00 00 */	cmplwi r0, 0x0
/* 8016BAC4 00168BA4  41 82 00 30 */	beq .L_8016BAF4
/* 8016BAC8 00168BA8  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016BACC 00168BAC  C0 3F 04 5C */	lfs f1, 0x45c(r31)
/* 8016BAD0 00168BB0  38 63 A1 A0 */	addi r3, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016BAD4 00168BB4  C0 03 01 00 */	lfs f0, 0x100(r3)
/* 8016BAD8 00168BB8  EC 01 00 2A */	fadds f0, f1, f0
/* 8016BADC 00168BBC  D0 1F 04 5C */	stfs f0, 0x45c(r31)
/* 8016BAE0 00168BC0  C0 3F 04 54 */	lfs f1, 0x454(r31)
/* 8016BAE4 00168BC4  C0 03 01 04 */	lfs f0, 0x104(r3)
/* 8016BAE8 00168BC8  EC 01 00 2A */	fadds f0, f1, f0
/* 8016BAEC 00168BCC  D0 1F 04 54 */	stfs f0, 0x454(r31)
/* 8016BAF0 00168BD0  48 00 00 2C */	b .L_8016BB1C
.L_8016BAF4:
/* 8016BAF4 00168BD4  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016BAF8 00168BD8  C0 3F 04 5C */	lfs f1, 0x45c(r31)
/* 8016BAFC 00168BDC  38 63 A1 A0 */	addi r3, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016BB00 00168BE0  C0 03 00 F8 */	lfs f0, 0xf8(r3)
/* 8016BB04 00168BE4  EC 01 00 2A */	fadds f0, f1, f0
/* 8016BB08 00168BE8  D0 1F 04 5C */	stfs f0, 0x45c(r31)
/* 8016BB0C 00168BEC  C0 3F 04 54 */	lfs f1, 0x454(r31)
/* 8016BB10 00168BF0  C0 03 00 FC */	lfs f0, 0xfc(r3)
/* 8016BB14 00168BF4  EC 01 00 2A */	fadds f0, f1, f0
/* 8016BB18 00168BF8  D0 1F 04 54 */	stfs f0, 0x454(r31)
.L_8016BB1C:
/* 8016BB1C 00168BFC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8016BB20 00168C00  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8016BB24 00168C04  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8016BB28 00168C08  7C 08 03 A6 */	mtlr r0
/* 8016BB2C 00168C0C  38 21 00 30 */	addi r1, r1, 0x30
/* 8016BB30 00168C10  4E 80 00 20 */	blr
.endfn refresh_orbit__13zNPCBPlanktonFv

# zNPCBPlankton::scan_cronies()
.fn scan_cronies__13zNPCBPlanktonFv, global
/* 8016BB34 00168C14  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016BB38 00168C18  7C 08 02 A6 */	mflr r0
/* 8016BB3C 00168C1C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016BB40 00168C20  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8016BB44 00168C24  7C 7B 1B 78 */	mr r27, r3
/* 8016BB48 00168C28  4B F8 27 8D */	bl zNPCMgr_GetNPCList__Fv
/* 8016BB4C 00168C2C  3B C0 00 00 */	li r30, 0x0
/* 8016BB50 00168C30  7C 7F 1B 78 */	mr r31, r3
/* 8016BB54 00168C34  93 DB 04 B0 */	stw r30, 0x4b0(r27)
/* 8016BB58 00168C38  3B A0 00 00 */	li r29, 0x0
/* 8016BB5C 00168C3C  48 00 00 30 */	b .L_8016BB8C
.L_8016BB60:
/* 8016BB60 00168C40  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 8016BB64 00168C44  7F 83 F0 2E */	lwzx r28, r3, r30
/* 8016BB68 00168C48  7F 83 E3 78 */	mr r3, r28
/* 8016BB6C 00168C4C  4B EE A9 79 */	bl SelfType__9xNPCBasicCFv
/* 8016BB70 00168C50  3C 03 B1 AC */	addis r0, r3, 0xb1ac
/* 8016BB74 00168C54  28 00 42 33 */	cmplwi r0, 0x4233
/* 8016BB78 00168C58  40 82 00 0C */	bne .L_8016BB84
/* 8016BB7C 00168C5C  93 9B 04 B0 */	stw r28, 0x4b0(r27)
/* 8016BB80 00168C60  48 00 00 18 */	b .L_8016BB98
.L_8016BB84:
/* 8016BB84 00168C64  3B DE 00 04 */	addi r30, r30, 0x4
/* 8016BB88 00168C68  3B BD 00 01 */	addi r29, r29, 0x1
.L_8016BB8C:
/* 8016BB8C 00168C6C  80 1F 00 04 */	lwz r0, 0x4(r31)
/* 8016BB90 00168C70  7C 1D 00 00 */	cmpw r29, r0
/* 8016BB94 00168C74  41 80 FF CC */	blt .L_8016BB60
.L_8016BB98:
/* 8016BB98 00168C78  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8016BB9C 00168C7C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016BBA0 00168C80  7C 08 03 A6 */	mtlr r0
/* 8016BBA4 00168C84  38 21 00 20 */	addi r1, r1, 0x20
/* 8016BBA8 00168C88  4E 80 00 20 */	blr
.endfn scan_cronies__13zNPCBPlanktonFv

# @unnamed@zNPCTypeBossPlankton_cpp@::set_yaw_matrix(xMat3x3&, float)
.fn "set_yaw_matrix__34@unnamed@zNPCTypeBossPlankton_cpp@FR7xMat3x3f", local
/* 8016BBAC 00168C8C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8016BBB0 00168C90  7C 08 02 A6 */	mflr r0
/* 8016BBB4 00168C94  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016BBB8 00168C98  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8016BBBC 00168C9C  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8016BBC0 00168CA0  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 8016BBC4 00168CA4  F3 C1 00 18 */	psq_st f30, 0x18(r1), 0, qr0
/* 8016BBC8 00168CA8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016BBCC 00168CAC  7C 7F 1B 78 */	mr r31, r3
/* 8016BBD0 00168CB0  FF C0 08 90 */	fmr f30, f1
/* 8016BBD4 00168CB4  4B F5 92 79 */	bl isin__Ff
/* 8016BBD8 00168CB8  FC 00 08 90 */	fmr f0, f1
/* 8016BBDC 00168CBC  FC 20 F0 90 */	fmr f1, f30
/* 8016BBE0 00168CC0  FF E0 00 90 */	fmr f31, f0
/* 8016BBE4 00168CC4  4B F5 92 AD */	bl icos__Ff
/* 8016BBE8 00168CC8  FC 60 F8 50 */	fneg f3, f31
/* 8016BBEC 00168CCC  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016BBF0 00168CD0  FF C0 08 90 */	fmr f30, f1
/* 8016BBF4 00168CD4  7F E3 FB 78 */	mr r3, r31
/* 8016BBF8 00168CD8  4B E9 F4 F5 */	bl assign__5xVec3Ffff
/* 8016BBFC 00168CDC  C0 22 AB 10 */	lfs f1, "@1586"@sda21(r2)
/* 8016BC00 00168CE0  38 7F 00 10 */	addi r3, r31, 0x10
/* 8016BC04 00168CE4  C0 42 AB 0C */	lfs f2, "@1585"@sda21(r2)
/* 8016BC08 00168CE8  FC 60 08 90 */	fmr f3, f1
/* 8016BC0C 00168CEC  4B E9 F4 E1 */	bl assign__5xVec3Ffff
/* 8016BC10 00168CF0  FC 20 F8 90 */	fmr f1, f31
/* 8016BC14 00168CF4  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016BC18 00168CF8  FC 60 F0 90 */	fmr f3, f30
/* 8016BC1C 00168CFC  38 7F 00 20 */	addi r3, r31, 0x20
/* 8016BC20 00168D00  4B E9 F4 CD */	bl assign__5xVec3Ffff
/* 8016BC24 00168D04  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 8016BC28 00168D08  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8016BC2C 00168D0C  E3 C1 00 18 */	psq_l f30, 0x18(r1), 0, qr0
/* 8016BC30 00168D10  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 8016BC34 00168D14  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8016BC38 00168D18  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016BC3C 00168D1C  7C 08 03 A6 */	mtlr r0
/* 8016BC40 00168D20  38 21 00 30 */	addi r1, r1, 0x30
/* 8016BC44 00168D24  4E 80 00 20 */	blr
.endfn "set_yaw_matrix__34@unnamed@zNPCTypeBossPlankton_cpp@FR7xMat3x3f"

# @unnamed@zNPCTypeBossPlankton_cpp@::update_move_accel(xVec3&, zNPCBPlankton::move_info&, float)
.fn "update_move_accel__34@unnamed@zNPCTypeBossPlankton_cpp@FR5xVec3RQ213zNPCBPlankton9move_infof", local
/* 8016BC48 00168D28  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016BC4C 00168D2C  7C 08 02 A6 */	mflr r0
/* 8016BC50 00168D30  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016BC54 00168D34  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8016BC58 00168D38  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8016BC5C 00168D3C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016BC60 00168D40  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016BC64 00168D44  FF E0 08 90 */	fmr f31, f1
/* 8016BC68 00168D48  7C 9F 23 78 */	mr r31, r4
/* 8016BC6C 00168D4C  C0 24 00 18 */	lfs f1, 0x18(r4)
/* 8016BC70 00168D50  7C 7E 1B 78 */	mr r30, r3
/* 8016BC74 00168D54  C0 64 00 24 */	lfs f3, 0x24(r4)
/* 8016BC78 00168D58  38 9F 00 0C */	addi r4, r31, 0xc
/* 8016BC7C 00168D5C  FC 40 F8 90 */	fmr f2, f31
/* 8016BC80 00168D60  4B EC 58 11 */	bl xAccelMove__FRfRffff
/* 8016BC84 00168D64  FC 40 F8 90 */	fmr f2, f31
/* 8016BC88 00168D68  C0 3F 00 1C */	lfs f1, 0x1c(r31)
/* 8016BC8C 00168D6C  C0 7F 00 28 */	lfs f3, 0x28(r31)
/* 8016BC90 00168D70  38 7E 00 04 */	addi r3, r30, 0x4
/* 8016BC94 00168D74  38 9F 00 10 */	addi r4, r31, 0x10
/* 8016BC98 00168D78  4B EC 57 F9 */	bl xAccelMove__FRfRffff
/* 8016BC9C 00168D7C  FC 40 F8 90 */	fmr f2, f31
/* 8016BCA0 00168D80  C0 3F 00 20 */	lfs f1, 0x20(r31)
/* 8016BCA4 00168D84  C0 7F 00 2C */	lfs f3, 0x2c(r31)
/* 8016BCA8 00168D88  38 7E 00 08 */	addi r3, r30, 0x8
/* 8016BCAC 00168D8C  38 9F 00 14 */	addi r4, r31, 0x14
/* 8016BCB0 00168D90  4B EC 57 E1 */	bl xAccelMove__FRfRffff
/* 8016BCB4 00168D94  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8016BCB8 00168D98  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016BCBC 00168D9C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8016BCC0 00168DA0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016BCC4 00168DA4  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016BCC8 00168DA8  7C 08 03 A6 */	mtlr r0
/* 8016BCCC 00168DAC  38 21 00 20 */	addi r1, r1, 0x20
/* 8016BCD0 00168DB0  4E 80 00 20 */	blr
.endfn "update_move_accel__34@unnamed@zNPCTypeBossPlankton_cpp@FR5xVec3RQ213zNPCBPlankton9move_infof"

# @unnamed@zNPCTypeBossPlankton_cpp@::update_move_stop(xVec3&, zNPCBPlankton::move_info&, float)
.fn "update_move_stop__34@unnamed@zNPCTypeBossPlankton_cpp@FR5xVec3RQ213zNPCBPlankton9move_infof", local
/* 8016BCD4 00168DB4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016BCD8 00168DB8  7C 08 02 A6 */	mflr r0
/* 8016BCDC 00168DBC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016BCE0 00168DC0  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8016BCE4 00168DC4  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8016BCE8 00168DC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016BCEC 00168DCC  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016BCF0 00168DD0  FF E0 08 90 */	fmr f31, f1
/* 8016BCF4 00168DD4  7C 9F 23 78 */	mr r31, r4
/* 8016BCF8 00168DD8  C0 24 00 18 */	lfs f1, 0x18(r4)
/* 8016BCFC 00168DDC  7C 7E 1B 78 */	mr r30, r3
/* 8016BD00 00168DE0  38 9F 00 0C */	addi r4, r31, 0xc
/* 8016BD04 00168DE4  FC 40 F8 90 */	fmr f2, f31
/* 8016BD08 00168DE8  4B EC 58 75 */	bl xAccelStop__FRfRfff
/* 8016BD0C 00168DEC  FC 40 F8 90 */	fmr f2, f31
/* 8016BD10 00168DF0  C0 3F 00 1C */	lfs f1, 0x1c(r31)
/* 8016BD14 00168DF4  38 7E 00 04 */	addi r3, r30, 0x4
/* 8016BD18 00168DF8  38 9F 00 10 */	addi r4, r31, 0x10
/* 8016BD1C 00168DFC  4B EC 58 61 */	bl xAccelStop__FRfRfff
/* 8016BD20 00168E00  FC 40 F8 90 */	fmr f2, f31
/* 8016BD24 00168E04  C0 3F 00 20 */	lfs f1, 0x20(r31)
/* 8016BD28 00168E08  38 7E 00 08 */	addi r3, r30, 0x8
/* 8016BD2C 00168E0C  38 9F 00 14 */	addi r4, r31, 0x14
/* 8016BD30 00168E10  4B EC 58 4D */	bl xAccelStop__FRfRfff
/* 8016BD34 00168E14  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8016BD38 00168E18  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016BD3C 00168E1C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8016BD40 00168E20  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016BD44 00168E24  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016BD48 00168E28  7C 08 03 A6 */	mtlr r0
/* 8016BD4C 00168E2C  38 21 00 20 */	addi r1, r1, 0x20
/* 8016BD50 00168E30  4E 80 00 20 */	blr
.endfn "update_move_stop__34@unnamed@zNPCTypeBossPlankton_cpp@FR5xVec3RQ213zNPCBPlankton9move_infof"

# @unnamed@zNPCTypeBossPlankton_cpp@::update_move_orbit(xVec3&, zNPCBPlankton::move_info&, const xVec3&, float, bool)
.fn "update_move_orbit__34@unnamed@zNPCTypeBossPlankton_cpp@FR5xVec3RQ213zNPCBPlankton9move_infoRC5xVec3fb", local
/* 8016BD54 00168E34  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 8016BD58 00168E38  7C 08 02 A6 */	mflr r0
/* 8016BD5C 00168E3C  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 8016BD60 00168E40  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 8016BD64 00168E44  F3 E1 00 D8 */	psq_st f31, 0xd8(r1), 0, qr0
/* 8016BD68 00168E48  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 8016BD6C 00168E4C  F3 C1 00 C8 */	psq_st f30, 0xc8(r1), 0, qr0
/* 8016BD70 00168E50  DB A1 00 B0 */	stfd f29, 0xb0(r1)
/* 8016BD74 00168E54  F3 A1 00 B8 */	psq_st f29, 0xb8(r1), 0, qr0
/* 8016BD78 00168E58  DB 81 00 A0 */	stfd f28, 0xa0(r1)
/* 8016BD7C 00168E5C  F3 81 00 A8 */	psq_st f28, 0xa8(r1), 0, qr0
/* 8016BD80 00168E60  BF 61 00 8C */	stmw r27, 0x8c(r1)
/* 8016BD84 00168E64  3C E0 80 27 */	lis r7, ...rodata.0@ha
/* 8016BD88 00168E68  7C 7C 1B 78 */	mr r28, r3
/* 8016BD8C 00168E6C  3B E7 0F A8 */	addi r31, r7, ...rodata.0@l
/* 8016BD90 00168E70  7C 9D 23 78 */	mr r29, r4
/* 8016BD94 00168E74  81 5F 04 44 */	lwz r10, 0x444(r31)
/* 8016BD98 00168E78  7C BE 2B 78 */	mr r30, r5
/* 8016BD9C 00168E7C  81 3F 04 48 */	lwz r9, 0x448(r31)
/* 8016BDA0 00168E80  FF C0 08 90 */	fmr f30, f1
/* 8016BDA4 00168E84  81 1F 04 4C */	lwz r8, 0x44c(r31)
/* 8016BDA8 00168E88  7C DB 33 78 */	mr r27, r6
/* 8016BDAC 00168E8C  80 FF 04 50 */	lwz r7, 0x450(r31)
/* 8016BDB0 00168E90  38 61 00 20 */	addi r3, r1, 0x20
/* 8016BDB4 00168E94  80 DF 04 54 */	lwz r6, 0x454(r31)
/* 8016BDB8 00168E98  80 1F 04 58 */	lwz r0, 0x458(r31)
/* 8016BDBC 00168E9C  38 81 00 74 */	addi r4, r1, 0x74
/* 8016BDC0 00168EA0  91 41 00 74 */	stw r10, 0x74(r1)
/* 8016BDC4 00168EA4  C0 9C 00 00 */	lfs f4, 0x0(r28)
/* 8016BDC8 00168EA8  91 21 00 78 */	stw r9, 0x78(r1)
/* 8016BDCC 00168EAC  C0 65 00 04 */	lfs f3, 0x4(r5)
/* 8016BDD0 00168EB0  90 C1 00 6C */	stw r6, 0x6c(r1)
/* 8016BDD4 00168EB4  C0 5C 00 08 */	lfs f2, 0x8(r28)
/* 8016BDD8 00168EB8  91 01 00 7C */	stw r8, 0x7c(r1)
/* 8016BDDC 00168EBC  C0 3D 00 00 */	lfs f1, 0x0(r29)
/* 8016BDE0 00168EC0  90 E1 00 68 */	stw r7, 0x68(r1)
/* 8016BDE4 00168EC4  C0 1D 00 08 */	lfs f0, 0x8(r29)
/* 8016BDE8 00168EC8  90 01 00 70 */	stw r0, 0x70(r1)
/* 8016BDEC 00168ECC  D0 81 00 74 */	stfs f4, 0x74(r1)
/* 8016BDF0 00168ED0  D0 61 00 78 */	stfs f3, 0x78(r1)
/* 8016BDF4 00168ED4  D0 41 00 7C */	stfs f2, 0x7c(r1)
/* 8016BDF8 00168ED8  D0 21 00 68 */	stfs f1, 0x68(r1)
/* 8016BDFC 00168EDC  D0 61 00 6C */	stfs f3, 0x6c(r1)
/* 8016BE00 00168EE0  D0 01 00 70 */	stfs f0, 0x70(r1)
/* 8016BE04 00168EE4  4B E9 F3 C9 */	bl __mi__5xVec3CFRC5xVec3
/* 8016BE08 00168EE8  80 E1 00 20 */	lwz r7, 0x20(r1)
/* 8016BE0C 00168EEC  7F C5 F3 78 */	mr r5, r30
/* 8016BE10 00168EF0  80 C1 00 24 */	lwz r6, 0x24(r1)
/* 8016BE14 00168EF4  38 61 00 14 */	addi r3, r1, 0x14
/* 8016BE18 00168EF8  80 01 00 28 */	lwz r0, 0x28(r1)
/* 8016BE1C 00168EFC  38 81 00 68 */	addi r4, r1, 0x68
/* 8016BE20 00168F00  90 E1 00 5C */	stw r7, 0x5c(r1)
/* 8016BE24 00168F04  90 C1 00 60 */	stw r6, 0x60(r1)
/* 8016BE28 00168F08  90 01 00 64 */	stw r0, 0x64(r1)
/* 8016BE2C 00168F0C  4B E9 F3 A1 */	bl __mi__5xVec3CFRC5xVec3
/* 8016BE30 00168F10  80 A1 00 14 */	lwz r5, 0x14(r1)
/* 8016BE34 00168F14  38 61 00 5C */	addi r3, r1, 0x5c
/* 8016BE38 00168F18  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8016BE3C 00168F1C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8016BE40 00168F20  90 A1 00 50 */	stw r5, 0x50(r1)
/* 8016BE44 00168F24  90 81 00 54 */	stw r4, 0x54(r1)
/* 8016BE48 00168F28  90 01 00 58 */	stw r0, 0x58(r1)
/* 8016BE4C 00168F2C  4B E9 F3 5D */	bl length__5xVec3CFv
/* 8016BE50 00168F30  FF E0 08 90 */	fmr f31, f1
/* 8016BE54 00168F34  38 61 00 50 */	addi r3, r1, 0x50
/* 8016BE58 00168F38  4B E9 F3 51 */	bl length__5xVec3CFv
/* 8016BE5C 00168F3C  FF A0 08 90 */	fmr f29, f1
/* 8016BE60 00168F40  C0 21 00 5C */	lfs f1, 0x5c(r1)
/* 8016BE64 00168F44  C0 41 00 64 */	lfs f2, 0x64(r1)
/* 8016BE68 00168F48  4B E9 A2 09 */	bl xatan2__Fff
/* 8016BE6C 00168F4C  FC 00 08 90 */	fmr f0, f1
/* 8016BE70 00168F50  C0 21 00 50 */	lfs f1, 0x50(r1)
/* 8016BE74 00168F54  C0 41 00 58 */	lfs f2, 0x58(r1)
/* 8016BE78 00168F58  FF 80 00 90 */	fmr f28, f0
/* 8016BE7C 00168F5C  4B E9 A1 F5 */	bl xatan2__Fff
/* 8016BE80 00168F60  EC 01 E0 28 */	fsubs f0, f1, f28
/* 8016BE84 00168F64  C0 22 AB B0 */	lfs f1, "@2165"@sda21(r2)
/* 8016BE88 00168F68  EC 21 00 2A */	fadds f1, f1, f0
/* 8016BE8C 00168F6C  4B EA 29 69 */	bl xrmod__Ff
/* 8016BE90 00168F70  C0 42 AB B0 */	lfs f2, "@2165"@sda21(r2)
/* 8016BE94 00168F74  57 60 06 3F */	clrlwi. r0, r27, 24
/* 8016BE98 00168F78  80 7F 04 5C */	lwz r3, 0x45c(r31)
/* 8016BE9C 00168F7C  EC 1D F8 28 */	fsubs f0, f29, f31
/* 8016BEA0 00168F80  EC 61 10 28 */	fsubs f3, f1, f2
/* 8016BEA4 00168F84  80 DF 04 60 */	lwz r6, 0x460(r31)
/* 8016BEA8 00168F88  C0 5D 00 04 */	lfs f2, 0x4(r29)
/* 8016BEAC 00168F8C  C0 3C 00 04 */	lfs f1, 0x4(r28)
/* 8016BEB0 00168F90  80 BF 04 64 */	lwz r5, 0x464(r31)
/* 8016BEB4 00168F94  EC 63 07 72 */	fmuls f3, f3, f29
/* 8016BEB8 00168F98  90 61 00 44 */	stw r3, 0x44(r1)
/* 8016BEBC 00168F9C  EC 22 08 28 */	fsubs f1, f2, f1
/* 8016BEC0 00168FA0  80 9F 04 68 */	lwz r4, 0x468(r31)
/* 8016BEC4 00168FA4  80 7F 04 6C */	lwz r3, 0x46c(r31)
/* 8016BEC8 00168FA8  90 C1 00 48 */	stw r6, 0x48(r1)
/* 8016BECC 00168FAC  80 1F 04 70 */	lwz r0, 0x470(r31)
/* 8016BED0 00168FB0  90 A1 00 4C */	stw r5, 0x4c(r1)
/* 8016BED4 00168FB4  D0 61 00 44 */	stfs f3, 0x44(r1)
/* 8016BED8 00168FB8  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 8016BEDC 00168FBC  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 8016BEE0 00168FC0  90 81 00 38 */	stw r4, 0x38(r1)
/* 8016BEE4 00168FC4  90 61 00 3C */	stw r3, 0x3c(r1)
/* 8016BEE8 00168FC8  90 01 00 40 */	stw r0, 0x40(r1)
/* 8016BEEC 00168FCC  41 82 00 20 */	beq .L_8016BF0C
/* 8016BEF0 00168FD0  FC 40 F0 90 */	fmr f2, f30
/* 8016BEF4 00168FD4  C0 3D 00 18 */	lfs f1, 0x18(r29)
/* 8016BEF8 00168FD8  C0 7D 00 24 */	lfs f3, 0x24(r29)
/* 8016BEFC 00168FDC  38 61 00 38 */	addi r3, r1, 0x38
/* 8016BF00 00168FE0  38 9D 00 0C */	addi r4, r29, 0xc
/* 8016BF04 00168FE4  4B EC 55 8D */	bl xAccelMove__FRfRffff
/* 8016BF08 00168FE8  48 00 00 1C */	b .L_8016BF24
.L_8016BF0C:
/* 8016BF0C 00168FEC  FC 40 F0 90 */	fmr f2, f30
/* 8016BF10 00168FF0  C0 3D 00 18 */	lfs f1, 0x18(r29)
/* 8016BF14 00168FF4  C0 9D 00 24 */	lfs f4, 0x24(r29)
/* 8016BF18 00168FF8  38 61 00 38 */	addi r3, r1, 0x38
/* 8016BF1C 00168FFC  38 9D 00 0C */	addi r4, r29, 0xc
/* 8016BF20 00169000  4B EC 52 35 */	bl xAccelMove__FRfRfffff
.L_8016BF24:
/* 8016BF24 00169004  FC 40 F0 90 */	fmr f2, f30
/* 8016BF28 00169008  C0 3D 00 1C */	lfs f1, 0x1c(r29)
/* 8016BF2C 0016900C  C0 61 00 48 */	lfs f3, 0x48(r1)
/* 8016BF30 00169010  38 61 00 3C */	addi r3, r1, 0x3c
/* 8016BF34 00169014  C0 9D 00 28 */	lfs f4, 0x28(r29)
/* 8016BF38 00169018  38 9D 00 10 */	addi r4, r29, 0x10
/* 8016BF3C 0016901C  4B EC 52 19 */	bl xAccelMove__FRfRfffff
/* 8016BF40 00169020  FC 40 F0 90 */	fmr f2, f30
/* 8016BF44 00169024  C0 3D 00 20 */	lfs f1, 0x20(r29)
/* 8016BF48 00169028  C0 61 00 4C */	lfs f3, 0x4c(r1)
/* 8016BF4C 0016902C  38 61 00 40 */	addi r3, r1, 0x40
/* 8016BF50 00169030  C0 9D 00 2C */	lfs f4, 0x2c(r29)
/* 8016BF54 00169034  38 9D 00 14 */	addi r4, r29, 0x14
/* 8016BF58 00169038  4B EC 51 FD */	bl xAccelMove__FRfRfffff
/* 8016BF5C 0016903C  C0 02 AB B4 */	lfs f0, "@2166"@sda21(r2)
/* 8016BF60 00169040  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8016BF64 00169044  4C 41 13 82 */	cror eq, gt, eq
/* 8016BF68 00169048  40 82 00 2C */	bne .L_8016BF94
/* 8016BF6C 0016904C  C0 02 AB 28 */	lfs f0, "@1755"@sda21(r2)
/* 8016BF70 00169050  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8016BF74 00169054  4C 40 13 82 */	cror eq, lt, eq
/* 8016BF78 00169058  40 82 00 1C */	bne .L_8016BF94
/* 8016BF7C 0016905C  C0 42 AB 10 */	lfs f2, "@1586"@sda21(r2)
/* 8016BF80 00169060  38 61 00 2C */	addi r3, r1, 0x2c
/* 8016BF84 00169064  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016BF88 00169068  FC 60 10 90 */	fmr f3, f2
/* 8016BF8C 0016906C  4B E9 F1 61 */	bl assign__5xVec3Ffff
/* 8016BF90 00169070  48 00 00 30 */	b .L_8016BFC0
.L_8016BF94:
/* 8016BF94 00169074  C0 02 AB 0C */	lfs f0, "@1585"@sda21(r2)
/* 8016BF98 00169078  38 61 00 08 */	addi r3, r1, 0x8
/* 8016BF9C 0016907C  38 81 00 5C */	addi r4, r1, 0x5c
/* 8016BFA0 00169080  EF A0 F8 24 */	fdivs f29, f0, f31
/* 8016BFA4 00169084  FC 20 E8 90 */	fmr f1, f29
/* 8016BFA8 00169088  4B E9 F1 79 */	bl __ml__5xVec3CFf
/* 8016BFAC 0016908C  38 61 00 2C */	addi r3, r1, 0x2c
/* 8016BFB0 00169090  38 81 00 08 */	addi r4, r1, 0x8
/* 8016BFB4 00169094  4B E9 F2 B1 */	bl __as__5xVec3FRC5xVec3
/* 8016BFB8 00169098  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 8016BFBC 0016909C  EF 80 E7 7A */	fmadds f28, f0, f29, f28
.L_8016BFC0:
/* 8016BFC0 001690A0  FC 20 E0 90 */	fmr f1, f28
/* 8016BFC4 001690A4  4B F5 8E 89 */	bl isin__Ff
/* 8016BFC8 001690A8  C0 1E 00 00 */	lfs f0, 0x0(r30)
/* 8016BFCC 001690AC  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 8016BFD0 001690B0  EC 7F 00 7A */	fmadds f3, f31, f1, f0
/* 8016BFD4 001690B4  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 8016BFD8 001690B8  FC 20 E0 90 */	fmr f1, f28
/* 8016BFDC 001690BC  EC 02 18 3A */	fmadds f0, f2, f0, f3
/* 8016BFE0 001690C0  D0 1C 00 00 */	stfs f0, 0x0(r28)
/* 8016BFE4 001690C4  C0 5C 00 04 */	lfs f2, 0x4(r28)
/* 8016BFE8 001690C8  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 8016BFEC 001690CC  EC 02 00 2A */	fadds f0, f2, f0
/* 8016BFF0 001690D0  D0 1C 00 04 */	stfs f0, 0x4(r28)
/* 8016BFF4 001690D4  4B F5 8E 9D */	bl icos__Ff
/* 8016BFF8 001690D8  C0 1E 00 08 */	lfs f0, 0x8(r30)
/* 8016BFFC 001690DC  C0 41 00 34 */	lfs f2, 0x34(r1)
/* 8016C000 001690E0  EC 3F 00 7A */	fmadds f1, f31, f1, f0
/* 8016C004 001690E4  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 8016C008 001690E8  EC 02 08 3A */	fmadds f0, f2, f0, f1
/* 8016C00C 001690EC  D0 1C 00 08 */	stfs f0, 0x8(r28)
/* 8016C010 001690F0  E3 E1 00 D8 */	psq_l f31, 0xd8(r1), 0, qr0
/* 8016C014 001690F4  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 8016C018 001690F8  E3 C1 00 C8 */	psq_l f30, 0xc8(r1), 0, qr0
/* 8016C01C 001690FC  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 8016C020 00169100  E3 A1 00 B8 */	psq_l f29, 0xb8(r1), 0, qr0
/* 8016C024 00169104  CB A1 00 B0 */	lfd f29, 0xb0(r1)
/* 8016C028 00169108  E3 81 00 A8 */	psq_l f28, 0xa8(r1), 0, qr0
/* 8016C02C 0016910C  CB 81 00 A0 */	lfd f28, 0xa0(r1)
/* 8016C030 00169110  BB 61 00 8C */	lmw r27, 0x8c(r1)
/* 8016C034 00169114  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 8016C038 00169118  7C 08 03 A6 */	mtlr r0
/* 8016C03C 0016911C  38 21 00 E0 */	addi r1, r1, 0xe0
/* 8016C040 00169120  4E 80 00 20 */	blr
.endfn "update_move_orbit__34@unnamed@zNPCTypeBossPlankton_cpp@FR5xVec3RQ213zNPCBPlankton9move_infoRC5xVec3fb"

# zNPCBPlankton::update_turn(float)
.fn update_turn__13zNPCBPlanktonFf, global
/* 8016C044 00169124  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8016C048 00169128  7C 08 02 A6 */	mflr r0
/* 8016C04C 0016912C  90 01 00 44 */	stw r0, 0x44(r1)
/* 8016C050 00169130  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8016C054 00169134  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 8016C058 00169138  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8016C05C 0016913C  F3 C1 00 28 */	psq_st f30, 0x28(r1), 0, qr0
/* 8016C060 00169140  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016C064 00169144  7C 7F 1B 78 */	mr r31, r3
/* 8016C068 00169148  FF C0 08 90 */	fmr f30, f1
/* 8016C06C 0016914C  48 00 3B 4D */	bl location__13zNPCBPlanktonCFv
/* 8016C070 00169150  80 BF 00 24 */	lwz r5, 0x24(r31)
/* 8016C074 00169154  7F E3 FB 78 */	mr r3, r31
/* 8016C078 00169158  80 82 BF F0 */	lwz r4, "@2188"@sda21(r2)
/* 8016C07C 0016915C  80 A5 00 4C */	lwz r5, 0x4c(r5)
/* 8016C080 00169160  80 02 BF F4 */	lwz r0, "@2188"+0x4@sda21(r2)
/* 8016C084 00169164  90 81 00 0C */	stw r4, 0xc(r1)
/* 8016C088 00169168  C0 25 00 20 */	lfs f1, 0x20(r5)
/* 8016C08C 0016916C  90 01 00 10 */	stw r0, 0x10(r1)
/* 8016C090 00169170  C0 05 00 28 */	lfs f0, 0x28(r5)
/* 8016C094 00169174  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8016C098 00169178  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8016C09C 0016917C  48 00 3B 3D */	bl turning__13zNPCBPlanktonCFv
/* 8016C0A0 00169180  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8016C0A4 00169184  41 82 00 80 */	beq .L_8016C124
/* 8016C0A8 00169188  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8016C0AC 0016918C  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8016C0B0 00169190  4B E9 9F C1 */	bl xatan2__Fff
/* 8016C0B4 00169194  FF E0 08 90 */	fmr f31, f1
/* 8016C0B8 00169198  C0 3F 04 60 */	lfs f1, 0x460(r31)
/* 8016C0BC 0016919C  C0 5F 04 64 */	lfs f2, 0x464(r31)
/* 8016C0C0 001691A0  4B E9 9F B1 */	bl xatan2__Fff
/* 8016C0C4 001691A4  EC 61 F8 28 */	fsubs f3, f1, f31
/* 8016C0C8 001691A8  C0 02 AB B0 */	lfs f0, "@2165"@sda21(r2)
/* 8016C0CC 001691AC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8016C0D0 001691B0  40 81 00 10 */	ble .L_8016C0E0
/* 8016C0D4 001691B4  C0 02 AB B8 */	lfs f0, "@2172"@sda21(r2)
/* 8016C0D8 001691B8  EC 63 00 28 */	fsubs f3, f3, f0
/* 8016C0DC 001691BC  48 00 00 18 */	b .L_8016C0F4
.L_8016C0E0:
/* 8016C0E0 001691C0  C0 02 AB BC */	lfs f0, "@2200"@sda21(r2)
/* 8016C0E4 001691C4  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8016C0E8 001691C8  40 80 00 0C */	bge .L_8016C0F4
/* 8016C0EC 001691CC  C0 02 AB B8 */	lfs f0, "@2172"@sda21(r2)
/* 8016C0F0 001691D0  EC 63 00 2A */	fadds f3, f3, f0
.L_8016C0F4:
/* 8016C0F4 001691D4  FC 00 F8 18 */	frsp f0, f31
/* 8016C0F8 001691D8  D3 E1 00 08 */	stfs f31, 0x8(r1)
/* 8016C0FC 001691DC  FC 40 F0 90 */	fmr f2, f30
/* 8016C100 001691E0  38 61 00 08 */	addi r3, r1, 0x8
/* 8016C104 001691E4  C0 3F 04 6C */	lfs f1, 0x46c(r31)
/* 8016C108 001691E8  38 9F 04 68 */	addi r4, r31, 0x468
/* 8016C10C 001691EC  EC 60 18 2A */	fadds f3, f0, f3
/* 8016C110 001691F0  C0 9F 04 70 */	lfs f4, 0x470(r31)
/* 8016C114 001691F4  4B EC 50 41 */	bl xAccelMove__FRfRfffff
/* 8016C118 001691F8  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 8016C11C 001691FC  C0 21 00 08 */	lfs f1, 0x8(r1)
/* 8016C120 00169200  4B FF FA 8D */	bl "set_yaw_matrix__34@unnamed@zNPCTypeBossPlankton_cpp@FR7xMat3x3f"
.L_8016C124:
/* 8016C124 00169204  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8016C128 00169208  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8016C12C 0016920C  E3 C1 00 28 */	psq_l f30, 0x28(r1), 0, qr0
/* 8016C130 00169210  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8016C134 00169214  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8016C138 00169218  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016C13C 0016921C  7C 08 03 A6 */	mtlr r0
/* 8016C140 00169220  38 21 00 40 */	addi r1, r1, 0x40
/* 8016C144 00169224  4E 80 00 20 */	blr
.endfn update_turn__13zNPCBPlanktonFf

# zNPCBPlankton::update_move(float)
.fn update_move__13zNPCBPlanktonFf, global
/* 8016C148 00169228  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016C14C 0016922C  7C 08 02 A6 */	mflr r0
/* 8016C150 00169230  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016C154 00169234  80 03 02 BC */	lwz r0, 0x2bc(r3)
/* 8016C158 00169238  2C 00 00 02 */	cmpwi r0, 0x2
/* 8016C15C 0016923C  41 82 00 34 */	beq .L_8016C190
/* 8016C160 00169240  40 80 00 10 */	bge .L_8016C170
/* 8016C164 00169244  2C 00 00 01 */	cmpwi r0, 0x1
/* 8016C168 00169248  40 80 00 14 */	bge .L_8016C17C
/* 8016C16C 0016924C  48 00 00 50 */	b .L_8016C1BC
.L_8016C170:
/* 8016C170 00169250  2C 00 00 04 */	cmpwi r0, 0x4
/* 8016C174 00169254  40 80 00 48 */	bge .L_8016C1BC
/* 8016C178 00169258  48 00 00 2C */	b .L_8016C1A4
.L_8016C17C:
/* 8016C17C 0016925C  80 A3 00 48 */	lwz r5, 0x48(r3)
/* 8016C180 00169260  38 83 04 74 */	addi r4, r3, 0x474
/* 8016C184 00169264  38 65 00 30 */	addi r3, r5, 0x30
/* 8016C188 00169268  4B FF FA C1 */	bl "update_move_accel__34@unnamed@zNPCTypeBossPlankton_cpp@FR5xVec3RQ213zNPCBPlankton9move_infof"
/* 8016C18C 0016926C  48 00 00 30 */	b .L_8016C1BC
.L_8016C190:
/* 8016C190 00169270  80 A3 00 48 */	lwz r5, 0x48(r3)
/* 8016C194 00169274  38 83 04 74 */	addi r4, r3, 0x474
/* 8016C198 00169278  38 65 00 30 */	addi r3, r5, 0x30
/* 8016C19C 0016927C  4B FF FB 39 */	bl "update_move_stop__34@unnamed@zNPCTypeBossPlankton_cpp@FR5xVec3RQ213zNPCBPlankton9move_infof"
/* 8016C1A0 00169280  48 00 00 1C */	b .L_8016C1BC
.L_8016C1A4:
/* 8016C1A4 00169284  80 E3 00 48 */	lwz r7, 0x48(r3)
/* 8016C1A8 00169288  38 83 04 74 */	addi r4, r3, 0x474
/* 8016C1AC 0016928C  38 A3 04 50 */	addi r5, r3, 0x450
/* 8016C1B0 00169290  38 C0 00 00 */	li r6, 0x0
/* 8016C1B4 00169294  38 67 00 30 */	addi r3, r7, 0x30
/* 8016C1B8 00169298  4B FF FB 9D */	bl "update_move_orbit__34@unnamed@zNPCTypeBossPlankton_cpp@FR5xVec3RQ213zNPCBPlankton9move_infoRC5xVec3fb"
.L_8016C1BC:
/* 8016C1BC 0016929C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016C1C0 001692A0  7C 08 03 A6 */	mtlr r0
/* 8016C1C4 001692A4  38 21 00 10 */	addi r1, r1, 0x10
/* 8016C1C8 001692A8  4E 80 00 20 */	blr
.endfn update_move__13zNPCBPlanktonFf

# @unnamed@zNPCTypeBossPlankton_cpp@::world_to_ring_vel(const xVec3&, const xVec3&, const xVec3&)
.fn "world_to_ring_vel__34@unnamed@zNPCTypeBossPlankton_cpp@FRC5xVec3RC5xVec3RC5xVec3", local
/* 8016C1CC 001692AC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8016C1D0 001692B0  7C 08 02 A6 */	mflr r0
/* 8016C1D4 001692B4  90 01 00 44 */	stw r0, 0x44(r1)
/* 8016C1D8 001692B8  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8016C1DC 001692BC  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 8016C1E0 001692C0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8016C1E4 001692C4  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8016C1E8 001692C8  C0 25 00 00 */	lfs f1, 0x0(r5)
/* 8016C1EC 001692CC  7C 9F 23 78 */	mr r31, r4
/* 8016C1F0 001692D0  C0 06 00 00 */	lfs f0, 0x0(r6)
/* 8016C1F4 001692D4  7C 7E 1B 78 */	mr r30, r3
/* 8016C1F8 001692D8  81 02 BF C0 */	lwz r8, "@2112"@sda21(r2)
/* 8016C1FC 001692DC  38 61 00 18 */	addi r3, r1, 0x18
/* 8016C200 001692E0  80 E2 BF C4 */	lwz r7, "@2112"+0x4@sda21(r2)
/* 8016C204 001692E4  EC 41 00 28 */	fsubs f2, f1, f0
/* 8016C208 001692E8  80 82 BF C8 */	lwz r4, "@2113"@sda21(r2)
/* 8016C20C 001692EC  80 02 BF CC */	lwz r0, "@2113"+0x4@sda21(r2)
/* 8016C210 001692F0  90 81 00 18 */	stw r4, 0x18(r1)
/* 8016C214 001692F4  C0 25 00 08 */	lfs f1, 0x8(r5)
/* 8016C218 001692F8  C0 06 00 08 */	lfs f0, 0x8(r6)
/* 8016C21C 001692FC  91 01 00 20 */	stw r8, 0x20(r1)
/* 8016C220 00169300  C0 7F 00 00 */	lfs f3, 0x0(r31)
/* 8016C224 00169304  EC 01 00 28 */	fsubs f0, f1, f0
/* 8016C228 00169308  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8016C22C 0016930C  C0 3F 00 08 */	lfs f1, 0x8(r31)
/* 8016C230 00169310  90 E1 00 24 */	stw r7, 0x24(r1)
/* 8016C234 00169314  D0 61 00 20 */	stfs f3, 0x20(r1)
/* 8016C238 00169318  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8016C23C 0016931C  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 8016C240 00169320  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8016C244 00169324  4B EC A6 15 */	bl length__5xVec2CFv
/* 8016C248 00169328  38 61 00 18 */	addi r3, r1, 0x18
/* 8016C24C 0016932C  48 00 40 79 */	bl __dv__5xVec2CFf
/* 8016C250 00169330  90 81 00 14 */	stw r4, 0x14(r1)
/* 8016C254 00169334  38 81 00 10 */	addi r4, r1, 0x10
/* 8016C258 00169338  80 A2 BF D0 */	lwz r5, "@2114"@sda21(r2)
/* 8016C25C 0016933C  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8016C260 00169340  90 61 00 10 */	stw r3, 0x10(r1)
/* 8016C264 00169344  38 61 00 20 */	addi r3, r1, 0x20
/* 8016C268 00169348  80 02 BF D4 */	lwz r0, "@2114"+0x4@sda21(r2)
/* 8016C26C 0016934C  FC 20 00 50 */	fneg f1, f0
/* 8016C270 00169350  90 A1 00 08 */	stw r5, 0x8(r1)
/* 8016C274 00169354  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8016C278 00169358  90 01 00 0C */	stw r0, 0xc(r1)
/* 8016C27C 0016935C  D0 21 00 08 */	stfs f1, 0x8(r1)
/* 8016C280 00169360  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8016C284 00169364  4B FB 12 3D */	bl dot__5xVec2CFRC5xVec2
/* 8016C288 00169368  FF E0 08 90 */	fmr f31, f1
/* 8016C28C 0016936C  38 61 00 20 */	addi r3, r1, 0x20
/* 8016C290 00169370  38 81 00 08 */	addi r4, r1, 0x8
/* 8016C294 00169374  4B FB 12 2D */	bl dot__5xVec2CFRC5xVec2
/* 8016C298 00169378  FC 60 F8 90 */	fmr f3, f31
/* 8016C29C 0016937C  C0 5F 00 04 */	lfs f2, 0x4(r31)
/* 8016C2A0 00169380  7F C3 F3 78 */	mr r3, r30
/* 8016C2A4 00169384  4B EF 3C E5 */	bl create__5xVec3Ffff
/* 8016C2A8 00169388  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8016C2AC 0016938C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8016C2B0 00169390  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8016C2B4 00169394  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8016C2B8 00169398  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8016C2BC 0016939C  7C 08 03 A6 */	mtlr r0
/* 8016C2C0 001693A0  38 21 00 40 */	addi r1, r1, 0x40
/* 8016C2C4 001693A4  4E 80 00 20 */	blr
.endfn "world_to_ring_vel__34@unnamed@zNPCTypeBossPlankton_cpp@FRC5xVec3RC5xVec3RC5xVec3"

# @unnamed@zNPCTypeBossPlankton_cpp@::ring_to_world_vel(const xVec3&, const xVec3&, const xVec3&)
.fn "ring_to_world_vel__34@unnamed@zNPCTypeBossPlankton_cpp@FRC5xVec3RC5xVec3RC5xVec3", local
/* 8016C2C8 001693A8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8016C2CC 001693AC  7C 08 02 A6 */	mflr r0
/* 8016C2D0 001693B0  C0 25 00 00 */	lfs f1, 0x0(r5)
/* 8016C2D4 001693B4  90 01 00 44 */	stw r0, 0x44(r1)
/* 8016C2D8 001693B8  C0 06 00 00 */	lfs f0, 0x0(r6)
/* 8016C2DC 001693BC  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8016C2E0 001693C0  7C 9F 23 78 */	mr r31, r4
/* 8016C2E4 001693C4  EC 41 00 28 */	fsubs f2, f1, f0
/* 8016C2E8 001693C8  C0 25 00 08 */	lfs f1, 0x8(r5)
/* 8016C2EC 001693CC  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8016C2F0 001693D0  7C 7E 1B 78 */	mr r30, r3
/* 8016C2F4 001693D4  C0 06 00 08 */	lfs f0, 0x8(r6)
/* 8016C2F8 001693D8  38 61 00 18 */	addi r3, r1, 0x18
/* 8016C2FC 001693DC  80 82 BF D8 */	lwz r4, "@2118"@sda21(r2)
/* 8016C300 001693E0  EC 01 00 28 */	fsubs f0, f1, f0
/* 8016C304 001693E4  80 02 BF DC */	lwz r0, "@2118"+0x4@sda21(r2)
/* 8016C308 001693E8  90 81 00 18 */	stw r4, 0x18(r1)
/* 8016C30C 001693EC  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8016C310 001693F0  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 8016C314 001693F4  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8016C318 001693F8  4B FB 11 C5 */	bl normal__5xVec2CFv
/* 8016C31C 001693FC  90 81 00 14 */	stw r4, 0x14(r1)
/* 8016C320 00169400  3C 80 80 27 */	lis r4, "@2120"@ha
/* 8016C324 00169404  38 A4 13 D4 */	addi r5, r4, "@2120"@l
/* 8016C328 00169408  80 C2 BF E0 */	lwz r6, "@2119"@sda21(r2)
/* 8016C32C 0016940C  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8016C330 00169410  90 61 00 10 */	stw r3, 0x10(r1)
/* 8016C334 00169414  FC 80 00 50 */	fneg f4, f0
/* 8016C338 00169418  C0 3F 00 08 */	lfs f1, 0x8(r31)
/* 8016C33C 0016941C  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 8016C340 00169420  80 85 00 00 */	lwz r4, 0x0(r5)
/* 8016C344 00169424  EC 01 00 32 */	fmuls f0, f1, f0
/* 8016C348 00169428  FC 40 20 18 */	frsp f2, f4
/* 8016C34C 0016942C  C0 BF 00 00 */	lfs f5, 0x0(r31)
/* 8016C350 00169430  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8016C354 00169434  80 65 00 04 */	lwz r3, 0x4(r5)
/* 8016C358 00169438  80 05 00 08 */	lwz r0, 0x8(r5)
/* 8016C35C 0016943C  EC 05 00 FA */	fmadds f0, f5, f3, f0
/* 8016C360 00169440  EC 45 08 BA */	fmadds f2, f5, f2, f1
/* 8016C364 00169444  90 81 00 20 */	stw r4, 0x20(r1)
/* 8016C368 00169448  80 82 BF E4 */	lwz r4, "@2119"+0x4@sda21(r2)
/* 8016C36C 0016944C  90 61 00 24 */	stw r3, 0x24(r1)
/* 8016C370 00169450  C0 3F 00 04 */	lfs f1, 0x4(r31)
/* 8016C374 00169454  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8016C378 00169458  90 01 00 28 */	stw r0, 0x28(r1)
/* 8016C37C 0016945C  80 01 00 20 */	lwz r0, 0x20(r1)
/* 8016C380 00169460  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8016C384 00169464  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8016C388 00169468  80 61 00 24 */	lwz r3, 0x24(r1)
/* 8016C38C 0016946C  90 1E 00 00 */	stw r0, 0x0(r30)
/* 8016C390 00169470  80 01 00 28 */	lwz r0, 0x28(r1)
/* 8016C394 00169474  90 C1 00 08 */	stw r6, 0x8(r1)
/* 8016C398 00169478  90 81 00 0C */	stw r4, 0xc(r1)
/* 8016C39C 0016947C  90 7E 00 04 */	stw r3, 0x4(r30)
/* 8016C3A0 00169480  D0 81 00 08 */	stfs f4, 0x8(r1)
/* 8016C3A4 00169484  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 8016C3A8 00169488  90 1E 00 08 */	stw r0, 0x8(r30)
/* 8016C3AC 0016948C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8016C3B0 00169490  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8016C3B4 00169494  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8016C3B8 00169498  7C 08 03 A6 */	mtlr r0
/* 8016C3BC 0016949C  38 21 00 40 */	addi r1, r1, 0x40
/* 8016C3C0 001694A0  4E 80 00 20 */	blr
.endfn "ring_to_world_vel__34@unnamed@zNPCTypeBossPlankton_cpp@FRC5xVec3RC5xVec3RC5xVec3"

# zNPCBPlankton::reset_territories()
.fn reset_territories__13zNPCBPlanktonFv, global
/* 8016C3C4 001694A4  80 83 06 94 */	lwz r4, 0x694(r3)
/* 8016C3C8 001694A8  38 A3 04 B4 */	addi r5, r3, 0x4b4
/* 8016C3CC 001694AC  38 00 00 00 */	li r0, 0x0
/* 8016C3D0 001694B0  1C 64 00 3C */	mulli r3, r4, 0x3c
/* 8016C3D4 001694B4  7C 65 1A 14 */	add r3, r5, r3
/* 8016C3D8 001694B8  48 00 00 18 */	b .L_8016C3F0
.L_8016C3DC:
/* 8016C3DC 001694BC  98 05 00 35 */	stb r0, 0x35(r5)
/* 8016C3E0 001694C0  98 05 00 34 */	stb r0, 0x34(r5)
/* 8016C3E4 001694C4  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016C3E8 001694C8  D0 05 00 38 */	stfs f0, 0x38(r5)
/* 8016C3EC 001694CC  38 A5 00 3C */	addi r5, r5, 0x3c
.L_8016C3F0:
/* 8016C3F0 001694D0  7C 05 18 40 */	cmplw r5, r3
/* 8016C3F4 001694D4  40 82 FF E8 */	bne .L_8016C3DC
/* 8016C3F8 001694D8  4E 80 00 20 */	blr
.endfn reset_territories__13zNPCBPlanktonFv

# zNPCBPlankton::update_dialog(float)
.fn update_dialog__13zNPCBPlanktonFf, global
/* 8016C3FC 001694DC  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8016C400 001694E0  7C 08 02 A6 */	mflr r0
/* 8016C404 001694E4  90 01 00 54 */	stw r0, 0x54(r1)
/* 8016C408 001694E8  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8016C40C 001694EC  F3 E1 00 48 */	psq_st f31, 0x48(r1), 0, qr0
/* 8016C410 001694F0  BF 61 00 2C */	stmw r27, 0x2c(r1)
/* 8016C414 001694F4  7C 7E 1B 78 */	mr r30, r3
/* 8016C418 001694F8  FF E0 08 90 */	fmr f31, f1
/* 8016C41C 001694FC  80 03 02 C4 */	lwz r0, 0x2c4(r3)
/* 8016C420 00169500  2C 00 00 00 */	cmpwi r0, 0x0
/* 8016C424 00169504  41 82 01 A8 */	beq .L_8016C5CC
/* 8016C428 00169508  3C 80 80 3C */	lis r4, globals@ha
/* 8016C42C 0016950C  80 BE 06 A0 */	lwz r5, 0x6a0(r30)
/* 8016C430 00169510  3B A4 05 58 */	addi r29, r4, globals@l
/* 8016C434 00169514  80 1D 16 B0 */	lwz r0, 0x16b0(r29)
/* 8016C438 00169518  7C 00 28 40 */	cmplw r0, r5
/* 8016C43C 0016951C  40 80 00 1C */	bge .L_8016C458
/* 8016C440 00169520  28 05 00 00 */	cmplwi r5, 0x0
/* 8016C444 00169524  41 82 00 14 */	beq .L_8016C458
/* 8016C448 00169528  38 80 00 07 */	li r4, 0x7
/* 8016C44C 0016952C  38 A0 00 00 */	li r5, 0x0
/* 8016C450 00169530  38 C0 00 00 */	li r6, 0x0
/* 8016C454 00169534  48 00 13 29 */	bl say__13zNPCBPlanktonFiib
.L_8016C458:
/* 8016C458 00169538  80 1D 16 B0 */	lwz r0, 0x16b0(r29)
/* 8016C45C 0016953C  90 1E 06 A0 */	stw r0, 0x6a0(r30)
/* 8016C460 00169540  4B FF C6 35 */	bl "get_player_loc__34@unnamed@zNPCTypeBossPlankton_cpp@Fv"
/* 8016C464 00169544  80 9E 06 98 */	lwz r4, 0x698(r30)
/* 8016C468 00169548  7C 7F 1B 78 */	mr r31, r3
/* 8016C46C 0016954C  37 84 FF FF */	addic. r28, r4, -0x1
/* 8016C470 00169550  40 80 00 08 */	bge .L_8016C478
/* 8016C474 00169554  3B 80 00 00 */	li r28, 0x0
.L_8016C478:
/* 8016C478 00169558  1C 1C 00 3C */	mulli r0, r28, 0x3c
/* 8016C47C 0016955C  7F BE 02 14 */	add r29, r30, r0
/* 8016C480 00169560  48 00 00 50 */	b .L_8016C4D0
.L_8016C484:
/* 8016C484 00169564  80 7D 04 BC */	lwz r3, 0x4bc(r29)
/* 8016C488 00169568  28 03 00 00 */	cmplwi r3, 0x0
/* 8016C48C 0016956C  41 82 00 3C */	beq .L_8016C4C8
/* 8016C490 00169570  88 1D 04 E9 */	lbz r0, 0x4e9(r29)
/* 8016C494 00169574  28 00 00 00 */	cmplwi r0, 0x0
/* 8016C498 00169578  40 82 00 30 */	bne .L_8016C4C8
/* 8016C49C 0016957C  4B EF 4D 61 */	bl zEntDestructObj_isDestroyed__FP15zEntDestructObj
/* 8016C4A0 00169580  28 03 00 00 */	cmplwi r3, 0x0
/* 8016C4A4 00169584  41 82 00 24 */	beq .L_8016C4C8
/* 8016C4A8 00169588  7F C3 F3 78 */	mr r3, r30
/* 8016C4AC 0016958C  38 80 00 02 */	li r4, 0x2
/* 8016C4B0 00169590  38 A0 00 00 */	li r5, 0x0
/* 8016C4B4 00169594  38 C0 00 00 */	li r6, 0x0
/* 8016C4B8 00169598  48 00 12 C5 */	bl say__13zNPCBPlanktonFiib
/* 8016C4BC 0016959C  38 00 00 01 */	li r0, 0x1
/* 8016C4C0 001695A0  98 1D 04 E9 */	stb r0, 0x4e9(r29)
/* 8016C4C4 001695A4  48 00 01 08 */	b .L_8016C5CC
.L_8016C4C8:
/* 8016C4C8 001695A8  3B BD 00 3C */	addi r29, r29, 0x3c
/* 8016C4CC 001695AC  3B 9C 00 01 */	addi r28, r28, 0x1
.L_8016C4D0:
/* 8016C4D0 001695B0  80 1E 06 98 */	lwz r0, 0x698(r30)
/* 8016C4D4 001695B4  7C 1C 00 00 */	cmpw r28, r0
/* 8016C4D8 001695B8  40 81 FF AC */	ble .L_8016C484
/* 8016C4DC 001695BC  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016C4E0 001695C0  7F DC F3 78 */	mr r28, r30
/* 8016C4E4 001695C4  3B A3 A1 A0 */	addi r29, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016C4E8 001695C8  3B 60 00 00 */	li r27, 0x0
/* 8016C4EC 001695CC  48 00 00 D4 */	b .L_8016C5C0
.L_8016C4F0:
/* 8016C4F0 001695D0  80 1C 04 E4 */	lwz r0, 0x4e4(r28)
/* 8016C4F4 001695D4  2C 00 00 00 */	cmpwi r0, 0x0
/* 8016C4F8 001695D8  40 81 00 C0 */	ble .L_8016C5B8
/* 8016C4FC 001695DC  80 7C 04 BC */	lwz r3, 0x4bc(r28)
/* 8016C500 001695E0  28 03 00 00 */	cmplwi r3, 0x0
/* 8016C504 001695E4  41 82 00 B4 */	beq .L_8016C5B8
/* 8016C508 001695E8  88 1C 04 E8 */	lbz r0, 0x4e8(r28)
/* 8016C50C 001695EC  28 00 00 00 */	cmplwi r0, 0x0
/* 8016C510 001695F0  40 82 00 A8 */	bne .L_8016C5B8
/* 8016C514 001695F4  4B EF 4C E9 */	bl zEntDestructObj_isDestroyed__FP15zEntDestructObj
/* 8016C518 001695F8  28 03 00 00 */	cmplwi r3, 0x0
/* 8016C51C 001695FC  40 82 00 9C */	bne .L_8016C5B8
/* 8016C520 00169600  80 BC 04 BC */	lwz r5, 0x4bc(r28)
/* 8016C524 00169604  7F E4 FB 78 */	mr r4, r31
/* 8016C528 00169608  38 61 00 08 */	addi r3, r1, 0x8
/* 8016C52C 0016960C  80 A5 00 24 */	lwz r5, 0x24(r5)
/* 8016C530 00169610  80 A5 00 4C */	lwz r5, 0x4c(r5)
/* 8016C534 00169614  38 A5 00 30 */	addi r5, r5, 0x30
/* 8016C538 00169618  4B E9 EC 95 */	bl __mi__5xVec3CFRC5xVec3
/* 8016C53C 0016961C  80 A1 00 08 */	lwz r5, 0x8(r1)
/* 8016C540 00169620  38 61 00 14 */	addi r3, r1, 0x14
/* 8016C544 00169624  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016C548 00169628  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8016C54C 0016962C  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8016C550 00169630  90 81 00 18 */	stw r4, 0x18(r1)
/* 8016C554 00169634  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8016C558 00169638  4B E9 EB A5 */	bl length2__5xVec3CFv
/* 8016C55C 0016963C  C0 1D 00 48 */	lfs f0, 0x48(r29)
/* 8016C560 00169640  EC 00 00 32 */	fmuls f0, f0, f0
/* 8016C564 00169644  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016C568 00169648  4C 40 13 82 */	cror eq, lt, eq
/* 8016C56C 0016964C  40 82 00 44 */	bne .L_8016C5B0
/* 8016C570 00169650  C0 1C 04 EC */	lfs f0, 0x4ec(r28)
/* 8016C574 00169654  EC 00 F8 2A */	fadds f0, f0, f31
/* 8016C578 00169658  D0 1C 04 EC */	stfs f0, 0x4ec(r28)
/* 8016C57C 0016965C  C0 3C 04 EC */	lfs f1, 0x4ec(r28)
/* 8016C580 00169660  C0 1D 00 4C */	lfs f0, 0x4c(r29)
/* 8016C584 00169664  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016C588 00169668  4C 41 13 82 */	cror eq, gt, eq
/* 8016C58C 0016966C  40 82 00 2C */	bne .L_8016C5B8
/* 8016C590 00169670  38 00 00 01 */	li r0, 0x1
/* 8016C594 00169674  7F C3 F3 78 */	mr r3, r30
/* 8016C598 00169678  98 1C 04 E8 */	stb r0, 0x4e8(r28)
/* 8016C59C 0016967C  38 80 00 01 */	li r4, 0x1
/* 8016C5A0 00169680  38 A0 00 00 */	li r5, 0x0
/* 8016C5A4 00169684  38 C0 00 00 */	li r6, 0x0
/* 8016C5A8 00169688  48 00 11 D5 */	bl say__13zNPCBPlanktonFiib
/* 8016C5AC 0016968C  48 00 00 20 */	b .L_8016C5CC
.L_8016C5B0:
/* 8016C5B0 00169690  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016C5B4 00169694  D0 1C 04 EC */	stfs f0, 0x4ec(r28)
.L_8016C5B8:
/* 8016C5B8 00169698  3B 9C 00 3C */	addi r28, r28, 0x3c
/* 8016C5BC 0016969C  3B 7B 00 01 */	addi r27, r27, 0x1
.L_8016C5C0:
/* 8016C5C0 001696A0  80 1E 06 98 */	lwz r0, 0x698(r30)
/* 8016C5C4 001696A4  7C 1B 00 00 */	cmpw r27, r0
/* 8016C5C8 001696A8  41 80 FF 28 */	blt .L_8016C4F0
.L_8016C5CC:
/* 8016C5CC 001696AC  E3 E1 00 48 */	psq_l f31, 0x48(r1), 0, qr0
/* 8016C5D0 001696B0  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8016C5D4 001696B4  BB 61 00 2C */	lmw r27, 0x2c(r1)
/* 8016C5D8 001696B8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8016C5DC 001696BC  7C 08 03 A6 */	mtlr r0
/* 8016C5E0 001696C0  38 21 00 50 */	addi r1, r1, 0x50
/* 8016C5E4 001696C4  4E 80 00 20 */	blr
.endfn update_dialog__13zNPCBPlanktonFf

# zNPCBPlankton::update_animation(float)
.fn update_animation__13zNPCBPlanktonFf, global
/* 8016C5E8 001696C8  4E 80 00 20 */	blr
.endfn update_animation__13zNPCBPlanktonFf

# zNPCBPlankton::update_follow(float)
.fn update_follow__13zNPCBPlanktonFf, global
/* 8016C5EC 001696CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016C5F0 001696D0  7C 08 02 A6 */	mflr r0
/* 8016C5F4 001696D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016C5F8 001696D8  80 03 02 C0 */	lwz r0, 0x2c0(r3)
/* 8016C5FC 001696DC  2C 00 00 02 */	cmpwi r0, 0x2
/* 8016C600 001696E0  41 82 00 1C */	beq .L_8016C61C
/* 8016C604 001696E4  40 80 00 1C */	bge .L_8016C620
/* 8016C608 001696E8  2C 00 00 01 */	cmpwi r0, 0x1
/* 8016C60C 001696EC  40 80 00 08 */	bge .L_8016C614
/* 8016C610 001696F0  48 00 00 10 */	b .L_8016C620
.L_8016C614:
/* 8016C614 001696F4  48 00 00 1D */	bl update_follow_player__13zNPCBPlanktonFf
/* 8016C618 001696F8  48 00 00 08 */	b .L_8016C620
.L_8016C61C:
/* 8016C61C 001696FC  48 00 01 19 */	bl update_follow_camera__13zNPCBPlanktonFf
.L_8016C620:
/* 8016C620 00169700  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016C624 00169704  7C 08 03 A6 */	mtlr r0
/* 8016C628 00169708  38 21 00 10 */	addi r1, r1, 0x10
/* 8016C62C 0016970C  4E 80 00 20 */	blr
.endfn update_follow__13zNPCBPlanktonFf

# zNPCBPlankton::update_follow_player(float)
.fn update_follow_player__13zNPCBPlanktonFf, global
/* 8016C630 00169710  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8016C634 00169714  7C 08 02 A6 */	mflr r0
/* 8016C638 00169718  90 01 00 54 */	stw r0, 0x54(r1)
/* 8016C63C 0016971C  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8016C640 00169720  F3 E1 00 48 */	psq_st f31, 0x48(r1), 0, qr0
/* 8016C644 00169724  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 8016C648 00169728  F3 C1 00 38 */	psq_st f30, 0x38(r1), 0, qr0
/* 8016C64C 0016972C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8016C650 00169730  7C 7F 1B 78 */	mr r31, r3
/* 8016C654 00169734  C0 03 04 A4 */	lfs f0, 0x4a4(r3)
/* 8016C658 00169738  EC 00 08 2A */	fadds f0, f0, f1
/* 8016C65C 0016973C  D0 03 04 A4 */	stfs f0, 0x4a4(r3)
/* 8016C660 00169740  C0 23 04 A4 */	lfs f1, 0x4a4(r3)
/* 8016C664 00169744  C0 03 04 A8 */	lfs f0, 0x4a8(r3)
/* 8016C668 00169748  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016C66C 0016974C  4C 41 13 82 */	cror eq, gt, eq
/* 8016C670 00169750  41 82 00 34 */	beq .L_8016C6A4
/* 8016C674 00169754  4B FF C4 21 */	bl "get_player_loc__34@unnamed@zNPCTypeBossPlankton_cpp@Fv"
/* 8016C678 00169758  7C 65 1B 78 */	mr r5, r3
/* 8016C67C 0016975C  7F E3 FB 78 */	mr r3, r31
/* 8016C680 00169760  38 9F 04 74 */	addi r4, r31, 0x474
/* 8016C684 00169764  48 00 03 01 */	bl orbit_yaw_offset__13zNPCBPlanktonCFRC5xVec3RC5xVec3
/* 8016C688 00169768  FC 20 0A 10 */	fabs f1, f1
/* 8016C68C 0016976C  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016C690 00169770  38 63 A1 A0 */	addi r3, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016C694 00169774  C0 03 00 3C */	lfs f0, 0x3c(r3)
/* 8016C698 00169778  FC 20 08 18 */	frsp f1, f1
/* 8016C69C 0016977C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016C6A0 00169780  40 81 00 70 */	ble .L_8016C710
.L_8016C6A4:
/* 8016C6A4 00169784  7F E4 FB 78 */	mr r4, r31
/* 8016C6A8 00169788  38 61 00 14 */	addi r3, r1, 0x14
/* 8016C6AC 0016978C  48 00 0A 45 */	bl player_orbit__13zNPCBPlanktonCFv
/* 8016C6B0 00169790  38 7F 04 74 */	addi r3, r31, 0x474
/* 8016C6B4 00169794  38 81 00 14 */	addi r4, r1, 0x14
/* 8016C6B8 00169798  4B E9 EB AD */	bl __as__5xVec3FRC5xVec3
/* 8016C6BC 0016979C  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016C6C0 001697A0  C0 22 AB 10 */	lfs f1, "@1586"@sda21(r2)
/* 8016C6C4 001697A4  38 63 A1 A0 */	addi r3, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016C6C8 001697A8  7F E4 FB 78 */	mr r4, r31
/* 8016C6CC 001697AC  C0 43 00 38 */	lfs f2, 0x38(r3)
/* 8016C6D0 001697B0  38 61 00 08 */	addi r3, r1, 0x8
/* 8016C6D4 001697B4  38 BF 04 74 */	addi r5, r31, 0x474
/* 8016C6D8 001697B8  48 00 08 9D */	bl random_orbit__13zNPCBPlanktonCFRC5xVec3ff
/* 8016C6DC 001697BC  38 7F 04 74 */	addi r3, r31, 0x474
/* 8016C6E0 001697C0  38 81 00 08 */	addi r4, r1, 0x8
/* 8016C6E4 001697C4  4B E9 EB 81 */	bl __as__5xVec3FRC5xVec3
/* 8016C6E8 001697C8  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016C6EC 001697CC  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016C6F0 001697D0  38 63 A1 A0 */	addi r3, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016C6F4 001697D4  D0 1F 04 A4 */	stfs f0, 0x4a4(r31)
/* 8016C6F8 001697D8  C3 E3 00 40 */	lfs f31, 0x40(r3)
/* 8016C6FC 001697DC  C3 C3 00 44 */	lfs f30, 0x44(r3)
/* 8016C700 001697E0  4B EC 45 89 */	bl xurand__Fv
/* 8016C704 001697E4  EC 1E F8 28 */	fsubs f0, f30, f31
/* 8016C708 001697E8  EC 00 F8 7A */	fmadds f0, f0, f1, f31
/* 8016C70C 001697EC  D0 1F 04 A8 */	stfs f0, 0x4a8(r31)
.L_8016C710:
/* 8016C710 001697F0  E3 E1 00 48 */	psq_l f31, 0x48(r1), 0, qr0
/* 8016C714 001697F4  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8016C718 001697F8  E3 C1 00 38 */	psq_l f30, 0x38(r1), 0, qr0
/* 8016C71C 001697FC  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 8016C720 00169800  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8016C724 00169804  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8016C728 00169808  7C 08 03 A6 */	mtlr r0
/* 8016C72C 0016980C  38 21 00 50 */	addi r1, r1, 0x50
/* 8016C730 00169810  4E 80 00 20 */	blr
.endfn update_follow_player__13zNPCBPlanktonFf

# zNPCBPlankton::update_follow_camera(float)
.fn update_follow_camera__13zNPCBPlanktonFf, global
/* 8016C734 00169814  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8016C738 00169818  7C 08 02 A6 */	mflr r0
/* 8016C73C 0016981C  90 01 00 64 */	stw r0, 0x64(r1)
/* 8016C740 00169820  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8016C744 00169824  F3 E1 00 58 */	psq_st f31, 0x58(r1), 0, qr0
/* 8016C748 00169828  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 8016C74C 0016982C  F3 C1 00 48 */	psq_st f30, 0x48(r1), 0, qr0
/* 8016C750 00169830  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8016C754 00169834  7C 7F 1B 78 */	mr r31, r3
/* 8016C758 00169838  FF C0 08 90 */	fmr f30, f1
/* 8016C75C 0016983C  3C 60 80 3C */	lis r3, globals@ha
/* 8016C760 00169840  C0 3F 04 5C */	lfs f1, 0x45c(r31)
/* 8016C764 00169844  38 83 05 58 */	addi r4, r3, globals@l
/* 8016C768 00169848  38 61 00 14 */	addi r3, r1, 0x14
/* 8016C76C 0016984C  38 84 00 34 */	addi r4, r4, 0x34
/* 8016C770 00169850  4B E9 E9 B1 */	bl __ml__5xVec3CFf
/* 8016C774 00169854  38 61 00 20 */	addi r3, r1, 0x20
/* 8016C778 00169858  38 9F 04 50 */	addi r4, r31, 0x450
/* 8016C77C 0016985C  38 A1 00 14 */	addi r5, r1, 0x14
/* 8016C780 00169860  4B EA 8C 61 */	bl __pl__5xVec3CFRC5xVec3
/* 8016C784 00169864  C0 1F 04 A4 */	lfs f0, 0x4a4(r31)
/* 8016C788 00169868  80 81 00 20 */	lwz r4, 0x20(r1)
/* 8016C78C 0016986C  EC 00 F0 2A */	fadds f0, f0, f30
/* 8016C790 00169870  80 61 00 24 */	lwz r3, 0x24(r1)
/* 8016C794 00169874  80 01 00 28 */	lwz r0, 0x28(r1)
/* 8016C798 00169878  90 81 00 2C */	stw r4, 0x2c(r1)
/* 8016C79C 0016987C  D0 1F 04 A4 */	stfs f0, 0x4a4(r31)
/* 8016C7A0 00169880  C0 3F 04 A4 */	lfs f1, 0x4a4(r31)
/* 8016C7A4 00169884  C0 1F 04 A8 */	lfs f0, 0x4a8(r31)
/* 8016C7A8 00169888  90 61 00 30 */	stw r3, 0x30(r1)
/* 8016C7AC 0016988C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016C7B0 00169890  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016C7B4 00169894  4C 41 13 82 */	cror eq, gt, eq
/* 8016C7B8 00169898  41 82 00 2C */	beq .L_8016C7E4
/* 8016C7BC 0016989C  7F E3 FB 78 */	mr r3, r31
/* 8016C7C0 001698A0  38 9F 04 74 */	addi r4, r31, 0x474
/* 8016C7C4 001698A4  38 A1 00 2C */	addi r5, r1, 0x2c
/* 8016C7C8 001698A8  48 00 01 BD */	bl orbit_yaw_offset__13zNPCBPlanktonCFRC5xVec3RC5xVec3
/* 8016C7CC 001698AC  4B F5 30 05 */	bl fabsf__3stdFf
/* 8016C7D0 001698B0  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016C7D4 001698B4  38 63 A1 A0 */	addi r3, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016C7D8 001698B8  C0 03 00 3C */	lfs f0, 0x3c(r3)
/* 8016C7DC 001698BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016C7E0 001698C0  40 81 00 58 */	ble .L_8016C838
.L_8016C7E4:
/* 8016C7E4 001698C4  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016C7E8 001698C8  C0 22 AB 10 */	lfs f1, "@1586"@sda21(r2)
/* 8016C7EC 001698CC  38 63 A1 A0 */	addi r3, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016C7F0 001698D0  7F E4 FB 78 */	mr r4, r31
/* 8016C7F4 001698D4  C0 43 00 38 */	lfs f2, 0x38(r3)
/* 8016C7F8 001698D8  38 61 00 08 */	addi r3, r1, 0x8
/* 8016C7FC 001698DC  38 A1 00 2C */	addi r5, r1, 0x2c
/* 8016C800 001698E0  48 00 07 75 */	bl random_orbit__13zNPCBPlanktonCFRC5xVec3ff
/* 8016C804 001698E4  38 7F 04 74 */	addi r3, r31, 0x474
/* 8016C808 001698E8  38 81 00 08 */	addi r4, r1, 0x8
/* 8016C80C 001698EC  4B E9 EA 59 */	bl __as__5xVec3FRC5xVec3
/* 8016C810 001698F0  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016C814 001698F4  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016C818 001698F8  38 63 A1 A0 */	addi r3, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016C81C 001698FC  D0 1F 04 A4 */	stfs f0, 0x4a4(r31)
/* 8016C820 00169900  C3 E3 00 40 */	lfs f31, 0x40(r3)
/* 8016C824 00169904  C3 C3 00 44 */	lfs f30, 0x44(r3)
/* 8016C828 00169908  4B EC 44 61 */	bl xurand__Fv
/* 8016C82C 0016990C  EC 1E F8 28 */	fsubs f0, f30, f31
/* 8016C830 00169910  EC 00 F8 7A */	fmadds f0, f0, f1, f31
/* 8016C834 00169914  D0 1F 04 A8 */	stfs f0, 0x4a8(r31)
.L_8016C838:
/* 8016C838 00169918  E3 E1 00 58 */	psq_l f31, 0x58(r1), 0, qr0
/* 8016C83C 0016991C  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8016C840 00169920  E3 C1 00 48 */	psq_l f30, 0x48(r1), 0, qr0
/* 8016C844 00169924  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 8016C848 00169928  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8016C84C 0016992C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8016C850 00169930  7C 08 03 A6 */	mtlr r0
/* 8016C854 00169934  38 21 00 60 */	addi r1, r1, 0x60
/* 8016C858 00169938  4E 80 00 20 */	blr
.endfn update_follow_camera__13zNPCBPlanktonFf

# zNPCBPlankton::update_aim_gun(float)
.fn update_aim_gun__13zNPCBPlanktonFf, global
/* 8016C85C 0016993C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8016C860 00169940  7C 08 02 A6 */	mflr r0
/* 8016C864 00169944  90 01 00 54 */	stw r0, 0x54(r1)
/* 8016C868 00169948  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8016C86C 0016994C  7C 7F 1B 78 */	mr r31, r3
/* 8016C870 00169950  88 03 02 B8 */	lbz r0, 0x2b8(r3)
/* 8016C874 00169954  28 00 00 00 */	cmplwi r0, 0x0
/* 8016C878 00169958  41 82 00 D4 */	beq .L_8016C94C
/* 8016C87C 0016995C  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 8016C880 00169960  38 61 00 14 */	addi r3, r1, 0x14
/* 8016C884 00169964  38 A0 00 15 */	li r5, 0x15
/* 8016C888 00169968  4B EC 86 F1 */	bl xModelGetBoneLocation__FRC14xModelInstanceUl
/* 8016C88C 0016996C  80 81 00 14 */	lwz r4, 0x14(r1)
/* 8016C890 00169970  80 61 00 18 */	lwz r3, 0x18(r1)
/* 8016C894 00169974  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8016C898 00169978  90 81 00 38 */	stw r4, 0x38(r1)
/* 8016C89C 0016997C  90 61 00 3C */	stw r3, 0x3c(r1)
/* 8016C8A0 00169980  90 01 00 40 */	stw r0, 0x40(r1)
/* 8016C8A4 00169984  4B FF C1 F1 */	bl "get_player_loc__34@unnamed@zNPCTypeBossPlankton_cpp@Fv"
/* 8016C8A8 00169988  7C 60 1B 78 */	mr r0, r3
/* 8016C8AC 0016998C  38 61 00 08 */	addi r3, r1, 0x8
/* 8016C8B0 00169990  7C 04 03 78 */	mr r4, r0
/* 8016C8B4 00169994  38 A1 00 38 */	addi r5, r1, 0x38
/* 8016C8B8 00169998  4B E9 E9 15 */	bl __mi__5xVec3CFRC5xVec3
/* 8016C8BC 0016999C  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8016C8C0 001699A0  80 61 00 08 */	lwz r3, 0x8(r1)
/* 8016C8C4 001699A4  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016C8C8 001699A8  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8016C8CC 001699AC  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 8016C8D0 001699B0  90 61 00 2C */	stw r3, 0x2c(r1)
/* 8016C8D4 001699B4  EC 00 00 32 */	fmuls f0, f0, f0
/* 8016C8D8 001699B8  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 8016C8DC 001699BC  90 01 00 30 */	stw r0, 0x30(r1)
/* 8016C8E0 001699C0  EC 21 00 7A */	fmadds f1, f1, f1, f0
/* 8016C8E4 001699C4  4B E9 DF 19 */	bl xsqrt__Ff
/* 8016C8E8 001699C8  FC 00 08 90 */	fmr f0, f1
/* 8016C8EC 001699CC  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 8016C8F0 001699D0  FC 40 00 90 */	fmr f2, f0
/* 8016C8F4 001699D4  4B E9 97 7D */	bl xatan2__Fff
/* 8016C8F8 001699D8  C0 02 AB B0 */	lfs f0, "@2165"@sda21(r2)
/* 8016C8FC 001699DC  EC 20 08 2A */	fadds f1, f0, f1
/* 8016C900 001699E0  4B EA 1E F5 */	bl xrmod__Ff
/* 8016C904 001699E4  C0 02 AB B0 */	lfs f0, "@2165"@sda21(r2)
/* 8016C908 001699E8  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016C90C 001699EC  38 63 A1 A0 */	addi r3, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016C910 001699F0  EC 21 00 28 */	fsubs f1, f1, f0
/* 8016C914 001699F4  C0 43 00 AC */	lfs f2, 0xac(r3)
/* 8016C918 001699F8  C0 63 00 B0 */	lfs f3, 0xb0(r3)
/* 8016C91C 001699FC  4B EA 20 1D */	bl "range_limit<f>__Ffff"
/* 8016C920 00169A00  3C 80 80 27 */	lis r4, "@2381"@ha
/* 8016C924 00169A04  38 7F 02 CC */	addi r3, r31, 0x2cc
/* 8016C928 00169A08  38 E4 14 40 */	addi r7, r4, "@2381"@l
/* 8016C92C 00169A0C  38 81 00 20 */	addi r4, r1, 0x20
/* 8016C930 00169A10  80 C7 00 00 */	lwz r6, 0x0(r7)
/* 8016C934 00169A14  80 A7 00 04 */	lwz r5, 0x4(r7)
/* 8016C938 00169A18  80 07 00 08 */	lwz r0, 0x8(r7)
/* 8016C93C 00169A1C  90 C1 00 20 */	stw r6, 0x20(r1)
/* 8016C940 00169A20  90 A1 00 24 */	stw r5, 0x24(r1)
/* 8016C944 00169A24  90 01 00 28 */	stw r0, 0x28(r1)
/* 8016C948 00169A28  4B EC 65 25 */	bl xQuatFromAxisAngle__FP5xQuatPC5xVec3f
.L_8016C94C:
/* 8016C94C 00169A2C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8016C950 00169A30  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8016C954 00169A34  7C 08 03 A6 */	mtlr r0
/* 8016C958 00169A38  38 21 00 50 */	addi r1, r1, 0x50
/* 8016C95C 00169A3C  4E 80 00 20 */	blr
.endfn update_aim_gun__13zNPCBPlanktonFf

# zNPCBPlankton::check_player_damage()
.fn check_player_damage__13zNPCBPlanktonFv, global
/* 8016C960 00169A40  3C 60 80 3C */	lis r3, globals@ha
/* 8016C964 00169A44  38 00 00 00 */	li r0, 0x0
/* 8016C968 00169A48  38 63 05 58 */	addi r3, r3, globals@l
/* 8016C96C 00169A4C  80 83 1A FC */	lwz r4, 0x1afc(r3)
/* 8016C970 00169A50  7C 64 00 D0 */	neg r3, r4
/* 8016C974 00169A54  7C 63 23 78 */	or r3, r3, r4
/* 8016C978 00169A58  7C 63 FE 70 */	srawi r3, r3, 31
/* 8016C97C 00169A5C  7C 03 18 78 */	andc r3, r0, r3
/* 8016C980 00169A60  4E 80 00 20 */	blr
.endfn check_player_damage__13zNPCBPlanktonFv

# zNPCBPlankton::orbit_yaw_offset(const xVec3&, const xVec3&) const
.fn orbit_yaw_offset__13zNPCBPlanktonCFRC5xVec3RC5xVec3, global
/* 8016C984 00169A64  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8016C988 00169A68  7C 08 02 A6 */	mflr r0
/* 8016C98C 00169A6C  90 01 00 44 */	stw r0, 0x44(r1)
/* 8016C990 00169A70  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8016C994 00169A74  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 8016C998 00169A78  81 42 BF F8 */	lwz r10, "@2409"@sda21(r2)
/* 8016C99C 00169A7C  81 22 BF FC */	lwz r9, "@2409"+0x4@sda21(r2)
/* 8016C9A0 00169A80  81 02 C0 00 */	lwz r8, "@2410"@sda21(r2)
/* 8016C9A4 00169A84  80 E2 C0 04 */	lwz r7, "@2410"+0x4@sda21(r2)
/* 8016C9A8 00169A88  80 C2 C0 08 */	lwz r6, "@2411"@sda21(r2)
/* 8016C9AC 00169A8C  80 02 C0 0C */	lwz r0, "@2411"+0x4@sda21(r2)
/* 8016C9B0 00169A90  91 41 00 28 */	stw r10, 0x28(r1)
/* 8016C9B4 00169A94  C0 A3 04 50 */	lfs f5, 0x450(r3)
/* 8016C9B8 00169A98  C0 83 04 58 */	lfs f4, 0x458(r3)
/* 8016C9BC 00169A9C  38 61 00 20 */	addi r3, r1, 0x20
/* 8016C9C0 00169AA0  91 21 00 2C */	stw r9, 0x2c(r1)
/* 8016C9C4 00169AA4  C0 64 00 00 */	lfs f3, 0x0(r4)
/* 8016C9C8 00169AA8  91 01 00 20 */	stw r8, 0x20(r1)
/* 8016C9CC 00169AAC  C0 44 00 08 */	lfs f2, 0x8(r4)
/* 8016C9D0 00169AB0  38 81 00 28 */	addi r4, r1, 0x28
/* 8016C9D4 00169AB4  90 E1 00 24 */	stw r7, 0x24(r1)
/* 8016C9D8 00169AB8  C0 25 00 00 */	lfs f1, 0x0(r5)
/* 8016C9DC 00169ABC  90 C1 00 18 */	stw r6, 0x18(r1)
/* 8016C9E0 00169AC0  C0 05 00 08 */	lfs f0, 0x8(r5)
/* 8016C9E4 00169AC4  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8016C9E8 00169AC8  D0 A1 00 28 */	stfs f5, 0x28(r1)
/* 8016C9EC 00169ACC  D0 81 00 2C */	stfs f4, 0x2c(r1)
/* 8016C9F0 00169AD0  D0 61 00 20 */	stfs f3, 0x20(r1)
/* 8016C9F4 00169AD4  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 8016C9F8 00169AD8  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8016C9FC 00169ADC  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8016CA00 00169AE0  4B EA 8F 75 */	bl __mi__5xVec2CFRC5xVec2
/* 8016CA04 00169AE4  90 81 00 14 */	stw r4, 0x14(r1)
/* 8016CA08 00169AE8  38 81 00 28 */	addi r4, r1, 0x28
/* 8016CA0C 00169AEC  90 61 00 10 */	stw r3, 0x10(r1)
/* 8016CA10 00169AF0  38 61 00 18 */	addi r3, r1, 0x18
/* 8016CA14 00169AF4  4B EA 8F 61 */	bl __mi__5xVec2CFRC5xVec2
/* 8016CA18 00169AF8  90 81 00 0C */	stw r4, 0xc(r1)
/* 8016CA1C 00169AFC  38 81 00 08 */	addi r4, r1, 0x8
/* 8016CA20 00169B00  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8016CA24 00169B04  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8016CA28 00169B08  90 61 00 08 */	stw r3, 0x8(r1)
/* 8016CA2C 00169B0C  38 61 00 10 */	addi r3, r1, 0x10
/* 8016CA30 00169B10  EC 01 00 32 */	fmuls f0, f1, f0
/* 8016CA34 00169B14  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 8016CA38 00169B18  C0 21 00 08 */	lfs f1, 0x8(r1)
/* 8016CA3C 00169B1C  EF E2 00 78 */	fmsubs f31, f2, f1, f0
/* 8016CA40 00169B20  4B FB 0A 81 */	bl dot__5xVec2CFRC5xVec2
/* 8016CA44 00169B24  FC 40 08 90 */	fmr f2, f1
/* 8016CA48 00169B28  FC 20 F8 90 */	fmr f1, f31
/* 8016CA4C 00169B2C  4B E9 96 25 */	bl xatan2__Fff
/* 8016CA50 00169B30  C0 02 AB B0 */	lfs f0, "@2165"@sda21(r2)
/* 8016CA54 00169B34  EC 20 08 2A */	fadds f1, f0, f1
/* 8016CA58 00169B38  4B EA 1D 9D */	bl xrmod__Ff
/* 8016CA5C 00169B3C  C0 02 AB B0 */	lfs f0, "@2165"@sda21(r2)
/* 8016CA60 00169B40  EC 21 00 28 */	fsubs f1, f1, f0
/* 8016CA64 00169B44  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8016CA68 00169B48  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8016CA6C 00169B4C  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8016CA70 00169B50  7C 08 03 A6 */	mtlr r0
/* 8016CA74 00169B54  38 21 00 40 */	addi r1, r1, 0x40
/* 8016CA78 00169B58  4E 80 00 20 */	blr
.endfn orbit_yaw_offset__13zNPCBPlanktonCFRC5xVec3RC5xVec3

# zNPCBPlankton::load_territory(int, xBase&)
.fn load_territory__13zNPCBPlanktonFiR5xBase, global
/* 8016CA7C 00169B5C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016CA80 00169B60  7C 08 02 A6 */	mflr r0
/* 8016CA84 00169B64  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016CA88 00169B68  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8016CA8C 00169B6C  7C 9C 23 78 */	mr r28, r4
/* 8016CA90 00169B70  38 1C FF FF */	addi r0, r28, -0x1
/* 8016CA94 00169B74  7C BD 2B 78 */	mr r29, r5
/* 8016CA98 00169B78  1C 80 00 3C */	mulli r4, r0, 0x3c
/* 8016CA9C 00169B7C  7C 7B 1B 78 */	mr r27, r3
/* 8016CAA0 00169B80  3B E4 04 B4 */	addi r31, r4, 0x4b4
/* 8016CAA4 00169B84  7F FB FA 14 */	add r31, r27, r31
/* 8016CAA8 00169B88  88 A5 00 04 */	lbz r5, 0x4(r5)
/* 8016CAAC 00169B8C  2C 05 00 11 */	cmpwi r5, 0x11
/* 8016CAB0 00169B90  41 82 00 38 */	beq .L_8016CAE8
/* 8016CAB4 00169B94  40 80 00 1C */	bge .L_8016CAD0
/* 8016CAB8 00169B98  2C 05 00 0E */	cmpwi r5, 0xe
/* 8016CABC 00169B9C  41 82 00 A0 */	beq .L_8016CB5C
/* 8016CAC0 00169BA0  40 80 00 AC */	bge .L_8016CB6C
/* 8016CAC4 00169BA4  2C 05 00 0D */	cmpwi r5, 0xd
/* 8016CAC8 00169BA8  40 80 00 64 */	bge .L_8016CB2C
/* 8016CACC 00169BAC  48 00 00 A0 */	b .L_8016CB6C
.L_8016CAD0:
/* 8016CAD0 00169BB0  2C 05 00 2B */	cmpwi r5, 0x2b
/* 8016CAD4 00169BB4  41 82 00 60 */	beq .L_8016CB34
/* 8016CAD8 00169BB8  40 80 00 94 */	bge .L_8016CB6C
/* 8016CADC 00169BBC  2C 05 00 1B */	cmpwi r5, 0x1b
/* 8016CAE0 00169BC0  41 82 00 84 */	beq .L_8016CB64
/* 8016CAE4 00169BC4  48 00 00 88 */	b .L_8016CB6C
.L_8016CAE8:
/* 8016CAE8 00169BC8  7F A3 EB 78 */	mr r3, r29
/* 8016CAEC 00169BCC  3B C0 00 00 */	li r30, 0x0
/* 8016CAF0 00169BD0  4B EC 03 8D */	bl xGroupGetCount__FP6xGroup
/* 8016CAF4 00169BD4  7C 7F 1B 78 */	mr r31, r3
/* 8016CAF8 00169BD8  48 00 00 28 */	b .L_8016CB20
.L_8016CAFC:
/* 8016CAFC 00169BDC  7F A3 EB 78 */	mr r3, r29
/* 8016CB00 00169BE0  7F C4 F3 78 */	mr r4, r30
/* 8016CB04 00169BE4  4B EC 03 85 */	bl xGroupGetItemPtr__FP6xGroupUi
/* 8016CB08 00169BE8  7C 60 1B 78 */	mr r0, r3
/* 8016CB0C 00169BEC  7F 63 DB 78 */	mr r3, r27
/* 8016CB10 00169BF0  7C 05 03 78 */	mr r5, r0
/* 8016CB14 00169BF4  7F 84 E3 78 */	mr r4, r28
/* 8016CB18 00169BF8  4B FF FF 65 */	bl load_territory__13zNPCBPlanktonFiR5xBase
/* 8016CB1C 00169BFC  3B DE 00 01 */	addi r30, r30, 0x1
.L_8016CB20:
/* 8016CB20 00169C00  7C 1E F8 40 */	cmplw r30, r31
/* 8016CB24 00169C04  41 80 FF D8 */	blt .L_8016CAFC
/* 8016CB28 00169C08  48 00 00 58 */	b .L_8016CB80
.L_8016CB2C:
/* 8016CB2C 00169C0C  93 BF 00 00 */	stw r29, 0x0(r31)
/* 8016CB30 00169C10  48 00 00 50 */	b .L_8016CB80
.L_8016CB34:
/* 8016CB34 00169C14  80 1F 00 30 */	lwz r0, 0x30(r31)
/* 8016CB38 00169C18  2C 00 00 08 */	cmpwi r0, 0x8
/* 8016CB3C 00169C1C  40 80 00 44 */	bge .L_8016CB80
/* 8016CB40 00169C20  54 00 10 3A */	slwi r0, r0, 2
/* 8016CB44 00169C24  7C 7F 02 14 */	add r3, r31, r0
/* 8016CB48 00169C28  93 A3 00 10 */	stw r29, 0x10(r3)
/* 8016CB4C 00169C2C  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 8016CB50 00169C30  38 03 00 01 */	addi r0, r3, 0x1
/* 8016CB54 00169C34  90 1F 00 30 */	stw r0, 0x30(r31)
/* 8016CB58 00169C38  48 00 00 28 */	b .L_8016CB80
.L_8016CB5C:
/* 8016CB5C 00169C3C  93 BF 00 0C */	stw r29, 0xc(r31)
/* 8016CB60 00169C40  48 00 00 20 */	b .L_8016CB80
.L_8016CB64:
/* 8016CB64 00169C44  93 BF 00 08 */	stw r29, 0x8(r31)
/* 8016CB68 00169C48  48 00 00 18 */	b .L_8016CB80
.L_8016CB6C:
/* 8016CB6C 00169C4C  7C A3 2B 78 */	mr r3, r5
/* 8016CB70 00169C50  4B EA E8 4D */	bl xEntValidType__FUc
/* 8016CB74 00169C54  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8016CB78 00169C58  41 82 00 08 */	beq .L_8016CB80
/* 8016CB7C 00169C5C  93 BF 00 04 */	stw r29, 0x4(r31)
.L_8016CB80:
/* 8016CB80 00169C60  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8016CB84 00169C64  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016CB88 00169C68  7C 08 03 A6 */	mtlr r0
/* 8016CB8C 00169C6C  38 21 00 20 */	addi r1, r1, 0x20
/* 8016CB90 00169C70  4E 80 00 20 */	blr
.endfn load_territory__13zNPCBPlanktonFiR5xBase

# zNPCBPlankton::init_beam()
.fn init_beam__13zNPCBPlanktonFv, global
/* 8016CB94 00169C74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016CB98 00169C78  7C 08 02 A6 */	mflr r0
/* 8016CB9C 00169C7C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8016CBA0 00169C80  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016CBA4 00169C84  38 A4 14 64 */	addi r5, r4, "@stringBase0"@l
/* 8016CBA8 00169C88  38 80 00 1F */	li r4, 0x1f
/* 8016CBAC 00169C8C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016CBB0 00169C90  7C 7F 1B 78 */	mr r31, r3
/* 8016CBB4 00169C94  38 7F 03 B8 */	addi r3, r31, 0x3b8
/* 8016CBB8 00169C98  38 A5 09 20 */	addi r5, r5, 0x920
/* 8016CBBC 00169C9C  48 01 09 89 */	bl init__17xLaserBoltEmitterFUlPCc
/* 8016CBC0 00169CA0  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8016CBC4 00169CA4  38 7F 03 B8 */	addi r3, r31, 0x3b8
/* 8016CBC8 00169CA8  38 84 14 64 */	addi r4, r4, "@stringBase0"@l
/* 8016CBCC 00169CAC  38 84 09 30 */	addi r4, r4, 0x930
/* 8016CBD0 00169CB0  48 01 09 E5 */	bl set_texture__17xLaserBoltEmitterFPCc
/* 8016CBD4 00169CB4  3C 80 80 33 */	lis r4, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016CBD8 00169CB8  38 7F 03 B8 */	addi r3, r31, 0x3b8
/* 8016CBDC 00169CBC  38 84 A1 A0 */	addi r4, r4, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016CBE0 00169CC0  38 84 00 BC */	addi r4, r4, 0xbc
/* 8016CBE4 00169CC4  48 00 01 01 */	bl __as__Q217xLaserBoltEmitter6configFRCQ217xLaserBoltEmitter6config
/* 8016CBE8 00169CC8  38 7F 03 B8 */	addi r3, r31, 0x3b8
/* 8016CBEC 00169CCC  48 01 0B 79 */	bl refresh_config__17xLaserBoltEmitterFv
/* 8016CBF0 00169CD0  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8016CBF4 00169CD4  38 7F 02 E8 */	addi r3, r31, 0x2e8
/* 8016CBF8 00169CD8  38 A4 14 64 */	addi r5, r4, "@stringBase0"@l
/* 8016CBFC 00169CDC  38 80 00 7F */	li r4, 0x7f
/* 8016CC00 00169CE0  38 A5 09 44 */	addi r5, r5, 0x944
/* 8016CC04 00169CE4  48 00 F8 CD */	bl init__13xDecalEmitterFiPCc
/* 8016CC08 00169CE8  3C 80 80 27 */	lis r4, "beam_ring_curve__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016CC0C 00169CEC  38 7F 02 E8 */	addi r3, r31, 0x2e8
/* 8016CC10 00169CF0  38 84 12 E8 */	addi r4, r4, "beam_ring_curve__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016CC14 00169CF4  38 A0 00 02 */	li r5, 0x2
/* 8016CC18 00169CF8  48 00 FB 91 */	bl set_curve__13xDecalEmitterFPCQ213xDecalEmitter10curve_nodeUl
/* 8016CC1C 00169CFC  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8016CC20 00169D00  38 7F 02 E8 */	addi r3, r31, 0x2e8
/* 8016CC24 00169D04  38 84 14 64 */	addi r4, r4, "@stringBase0"@l
/* 8016CC28 00169D08  38 84 09 5A */	addi r4, r4, 0x95a
/* 8016CC2C 00169D0C  48 00 F9 85 */	bl set_texture__13xDecalEmitterFPCc
/* 8016CC30 00169D10  38 7F 02 E8 */	addi r3, r31, 0x2e8
/* 8016CC34 00169D14  48 00 F8 F9 */	bl set_default_config__13xDecalEmitterFv
/* 8016CC38 00169D18  38 00 00 00 */	li r0, 0x0
/* 8016CC3C 00169D1C  38 80 00 05 */	li r4, 0x5
/* 8016CC40 00169D20  90 1F 02 E8 */	stw r0, 0x2e8(r31)
/* 8016CC44 00169D24  38 00 00 02 */	li r0, 0x2
/* 8016CC48 00169D28  38 7F 02 E8 */	addi r3, r31, 0x2e8
/* 8016CC4C 00169D2C  C0 02 AB C4 */	lfs f0, "@2450"@sda21(r2)
/* 8016CC50 00169D30  D0 1F 02 EC */	stfs f0, 0x2ec(r31)
/* 8016CC54 00169D34  90 9F 02 F0 */	stw r4, 0x2f0(r31)
/* 8016CC58 00169D38  90 1F 02 F4 */	stw r0, 0x2f4(r31)
/* 8016CC5C 00169D3C  48 00 F9 F1 */	bl refresh_config__13xDecalEmitterFv
/* 8016CC60 00169D40  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8016CC64 00169D44  38 7F 03 50 */	addi r3, r31, 0x350
/* 8016CC68 00169D48  38 A4 14 64 */	addi r5, r4, "@stringBase0"@l
/* 8016CC6C 00169D4C  38 80 00 07 */	li r4, 0x7
/* 8016CC70 00169D50  38 A5 09 61 */	addi r5, r5, 0x961
/* 8016CC74 00169D54  48 00 F8 5D */	bl init__13xDecalEmitterFiPCc
/* 8016CC78 00169D58  3C 80 80 27 */	lis r4, "beam_glow_curve__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016CC7C 00169D5C  38 7F 03 50 */	addi r3, r31, 0x350
/* 8016CC80 00169D60  38 84 13 00 */	addi r4, r4, "beam_glow_curve__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016CC84 00169D64  38 A0 00 03 */	li r5, 0x3
/* 8016CC88 00169D68  48 00 FB 21 */	bl set_curve__13xDecalEmitterFPCQ213xDecalEmitter10curve_nodeUl
/* 8016CC8C 00169D6C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8016CC90 00169D70  38 7F 03 50 */	addi r3, r31, 0x350
/* 8016CC94 00169D74  38 84 14 64 */	addi r4, r4, "@stringBase0"@l
/* 8016CC98 00169D78  38 84 09 76 */	addi r4, r4, 0x976
/* 8016CC9C 00169D7C  48 00 F9 15 */	bl set_texture__13xDecalEmitterFPCc
/* 8016CCA0 00169D80  38 7F 03 50 */	addi r3, r31, 0x350
/* 8016CCA4 00169D84  48 00 F8 89 */	bl set_default_config__13xDecalEmitterFv
/* 8016CCA8 00169D88  38 00 00 00 */	li r0, 0x0
/* 8016CCAC 00169D8C  38 80 00 05 */	li r4, 0x5
/* 8016CCB0 00169D90  90 1F 03 50 */	stw r0, 0x350(r31)
/* 8016CCB4 00169D94  38 00 00 02 */	li r0, 0x2
/* 8016CCB8 00169D98  38 7F 03 50 */	addi r3, r31, 0x350
/* 8016CCBC 00169D9C  C0 02 AB C4 */	lfs f0, "@2450"@sda21(r2)
/* 8016CCC0 00169DA0  D0 1F 03 54 */	stfs f0, 0x354(r31)
/* 8016CCC4 00169DA4  90 9F 03 58 */	stw r4, 0x358(r31)
/* 8016CCC8 00169DA8  90 1F 03 5C */	stw r0, 0x35c(r31)
/* 8016CCCC 00169DAC  48 00 F9 81 */	bl refresh_config__13xDecalEmitterFv
/* 8016CCD0 00169DB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016CCD4 00169DB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016CCD8 00169DB8  7C 08 03 A6 */	mtlr r0
/* 8016CCDC 00169DBC  38 21 00 10 */	addi r1, r1, 0x10
/* 8016CCE0 00169DC0  4E 80 00 20 */	blr
.endfn init_beam__13zNPCBPlanktonFv

# xLaserBoltEmitter::config::operator=(const xLaserBoltEmitter::config&)
.fn __as__Q217xLaserBoltEmitter6configFRCQ217xLaserBoltEmitter6config, weak
/* 8016CCE4 00169DC4  C0 04 00 00 */	lfs f0, 0x0(r4)
/* 8016CCE8 00169DC8  C0 24 00 04 */	lfs f1, 0x4(r4)
/* 8016CCEC 00169DCC  D0 03 00 00 */	stfs f0, 0x0(r3)
/* 8016CCF0 00169DD0  C0 04 00 08 */	lfs f0, 0x8(r4)
/* 8016CCF4 00169DD4  D0 23 00 04 */	stfs f1, 0x4(r3)
/* 8016CCF8 00169DD8  C0 24 00 0C */	lfs f1, 0xc(r4)
/* 8016CCFC 00169DDC  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 8016CD00 00169DE0  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 8016CD04 00169DE4  D0 23 00 0C */	stfs f1, 0xc(r3)
/* 8016CD08 00169DE8  C0 24 00 14 */	lfs f1, 0x14(r4)
/* 8016CD0C 00169DEC  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 8016CD10 00169DF0  C0 04 00 18 */	lfs f0, 0x18(r4)
/* 8016CD14 00169DF4  D0 23 00 14 */	stfs f1, 0x14(r3)
/* 8016CD18 00169DF8  C0 24 00 1C */	lfs f1, 0x1c(r4)
/* 8016CD1C 00169DFC  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 8016CD20 00169E00  C0 04 00 20 */	lfs f0, 0x20(r4)
/* 8016CD24 00169E04  D0 23 00 1C */	stfs f1, 0x1c(r3)
/* 8016CD28 00169E08  80 04 00 24 */	lwz r0, 0x24(r4)
/* 8016CD2C 00169E0C  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 8016CD30 00169E10  80 A4 00 28 */	lwz r5, 0x28(r4)
/* 8016CD34 00169E14  90 03 00 24 */	stw r0, 0x24(r3)
/* 8016CD38 00169E18  80 04 00 2C */	lwz r0, 0x2c(r4)
/* 8016CD3C 00169E1C  90 A3 00 28 */	stw r5, 0x28(r3)
/* 8016CD40 00169E20  80 A4 00 30 */	lwz r5, 0x30(r4)
/* 8016CD44 00169E24  90 03 00 2C */	stw r0, 0x2c(r3)
/* 8016CD48 00169E28  80 04 00 34 */	lwz r0, 0x34(r4)
/* 8016CD4C 00169E2C  90 A3 00 30 */	stw r5, 0x30(r3)
/* 8016CD50 00169E30  C0 04 00 38 */	lfs f0, 0x38(r4)
/* 8016CD54 00169E34  90 03 00 34 */	stw r0, 0x34(r3)
/* 8016CD58 00169E38  D0 03 00 38 */	stfs f0, 0x38(r3)
/* 8016CD5C 00169E3C  4E 80 00 20 */	blr
.endfn __as__Q217xLaserBoltEmitter6configFRCQ217xLaserBoltEmitter6config

# zNPCBPlankton::setup_beam()
.fn setup_beam__13zNPCBPlanktonFv, global
/* 8016CD60 00169E40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016CD64 00169E44  7C 08 02 A6 */	mflr r0
/* 8016CD68 00169E48  3C 80 80 2A */	lis r4, ...data.0@ha
/* 8016CD6C 00169E4C  3C A0 80 17 */	lis r5, "play_beam_fire_sound__34@unnamed@zNPCTypeBossPlankton_cpp@FRQ217xLaserBoltEmitter4boltPv"@ha
/* 8016CD70 00169E50  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016CD74 00169E54  38 C0 00 02 */	li r6, 0x2
/* 8016CD78 00169E58  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016CD7C 00169E5C  3B E4 AF 30 */	addi r31, r4, ...data.0@l
/* 8016CD80 00169E60  3C 80 80 17 */	lis r4, "play_beam_fly_sound__34@unnamed@zNPCTypeBossPlankton_cpp@FRQ217xLaserBoltEmitter4boltPv"@ha
/* 8016CD84 00169E64  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016CD88 00169E68  7C 7E 1B 78 */	mr r30, r3
/* 8016CD8C 00169E6C  38 65 8E 78 */	addi r3, r5, "play_beam_fire_sound__34@unnamed@zNPCTypeBossPlankton_cpp@FRQ217xLaserBoltEmitter4boltPv"@l
/* 8016CD90 00169E70  38 BF 00 00 */	addi r5, r31, 0x0
/* 8016CD94 00169E74  38 04 8D EC */	addi r0, r4, "play_beam_fly_sound__34@unnamed@zNPCTypeBossPlankton_cpp@FRQ217xLaserBoltEmitter4boltPv"@l
/* 8016CD98 00169E78  90 65 00 0C */	stw r3, 0xc(r5)
/* 8016CD9C 00169E7C  38 7E 03 B8 */	addi r3, r30, 0x3b8
/* 8016CDA0 00169E80  38 80 00 00 */	li r4, 0x0
/* 8016CDA4 00169E84  93 C5 00 10 */	stw r30, 0x10(r5)
/* 8016CDA8 00169E88  90 05 00 24 */	stw r0, 0x24(r5)
/* 8016CDAC 00169E8C  93 C5 00 28 */	stw r30, 0x28(r5)
/* 8016CDB0 00169E90  48 01 0E E5 */	bl attach_effects__17xLaserBoltEmitterFQ217xLaserBoltEmitter12fx_when_enumPQ217xLaserBoltEmitter11effect_dataUl
/* 8016CDB4 00169E94  38 BF 00 30 */	addi r5, r31, 0x30
/* 8016CDB8 00169E98  38 1E 02 E8 */	addi r0, r30, 0x2e8
/* 8016CDBC 00169E9C  90 05 00 0C */	stw r0, 0xc(r5)
/* 8016CDC0 00169EA0  38 7E 03 B8 */	addi r3, r30, 0x3b8
/* 8016CDC4 00169EA4  38 80 00 04 */	li r4, 0x4
/* 8016CDC8 00169EA8  38 C0 00 01 */	li r6, 0x1
/* 8016CDCC 00169EAC  48 01 0E C9 */	bl attach_effects__17xLaserBoltEmitterFQ217xLaserBoltEmitter12fx_when_enumPQ217xLaserBoltEmitter11effect_dataUl
/* 8016CDD0 00169EB0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016CDD4 00169EB4  38 63 14 64 */	addi r3, r3, "@stringBase0"@l
/* 8016CDD8 00169EB8  38 63 09 82 */	addi r3, r3, 0x982
/* 8016CDDC 00169EBC  4B F3 BA 69 */	bl zParEmitterFind__FPCc
/* 8016CDE0 00169EC0  3C E0 80 17 */	lis r7, "kill_beam_fly_sound__34@unnamed@zNPCTypeBossPlankton_cpp@FRQ217xLaserBoltEmitter4boltPv"@ha
/* 8016CDE4 00169EC4  3C C0 80 17 */	lis r6, "play_beam_hit_sound__34@unnamed@zNPCTypeBossPlankton_cpp@FRQ217xLaserBoltEmitter4boltPv"@ha
/* 8016CDE8 00169EC8  38 BF 00 48 */	addi r5, r31, 0x48
/* 8016CDEC 00169ECC  38 80 00 01 */	li r4, 0x1
/* 8016CDF0 00169ED0  38 06 8E A4 */	addi r0, r6, "play_beam_hit_sound__34@unnamed@zNPCTypeBossPlankton_cpp@FRQ217xLaserBoltEmitter4boltPv"@l
/* 8016CDF4 00169ED4  38 E7 8E 34 */	addi r7, r7, "kill_beam_fly_sound__34@unnamed@zNPCTypeBossPlankton_cpp@FRQ217xLaserBoltEmitter4boltPv"@l
/* 8016CDF8 00169ED8  90 65 00 0C */	stw r3, 0xc(r5)
/* 8016CDFC 00169EDC  38 7E 03 B8 */	addi r3, r30, 0x3b8
/* 8016CE00 00169EE0  38 C0 00 03 */	li r6, 0x3
/* 8016CE04 00169EE4  90 E5 00 24 */	stw r7, 0x24(r5)
/* 8016CE08 00169EE8  93 C5 00 28 */	stw r30, 0x28(r5)
/* 8016CE0C 00169EEC  90 05 00 3C */	stw r0, 0x3c(r5)
/* 8016CE10 00169EF0  93 C5 00 40 */	stw r30, 0x40(r5)
/* 8016CE14 00169EF4  48 01 0E 81 */	bl attach_effects__17xLaserBoltEmitterFQ217xLaserBoltEmitter12fx_when_enumPQ217xLaserBoltEmitter11effect_dataUl
/* 8016CE18 00169EF8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016CE1C 00169EFC  38 63 14 64 */	addi r3, r3, "@stringBase0"@l
/* 8016CE20 00169F00  38 63 09 98 */	addi r3, r3, 0x998
/* 8016CE24 00169F04  4B F3 BA 21 */	bl zParEmitterFind__FPCc
/* 8016CE28 00169F08  38 BF 00 90 */	addi r5, r31, 0x90
/* 8016CE2C 00169F0C  38 80 00 03 */	li r4, 0x3
/* 8016CE30 00169F10  90 65 00 0C */	stw r3, 0xc(r5)
/* 8016CE34 00169F14  38 7E 03 B8 */	addi r3, r30, 0x3b8
/* 8016CE38 00169F18  38 C0 00 01 */	li r6, 0x1
/* 8016CE3C 00169F1C  48 01 0E 59 */	bl attach_effects__17xLaserBoltEmitterFQ217xLaserBoltEmitter12fx_when_enumPQ217xLaserBoltEmitter11effect_dataUl
/* 8016CE40 00169F20  3C 60 80 17 */	lis r3, "kill_beam_fly_sound__34@unnamed@zNPCTypeBossPlankton_cpp@FRQ217xLaserBoltEmitter4boltPv"@ha
/* 8016CE44 00169F24  38 BF 00 A8 */	addi r5, r31, 0xa8
/* 8016CE48 00169F28  38 03 8E 34 */	addi r0, r3, "kill_beam_fly_sound__34@unnamed@zNPCTypeBossPlankton_cpp@FRQ217xLaserBoltEmitter4boltPv"@l
/* 8016CE4C 00169F2C  93 C5 00 10 */	stw r30, 0x10(r5)
/* 8016CE50 00169F30  38 7E 03 B8 */	addi r3, r30, 0x3b8
/* 8016CE54 00169F34  38 80 00 06 */	li r4, 0x6
/* 8016CE58 00169F38  90 05 00 0C */	stw r0, 0xc(r5)
/* 8016CE5C 00169F3C  38 C0 00 01 */	li r6, 0x1
/* 8016CE60 00169F40  48 01 0E 35 */	bl attach_effects__17xLaserBoltEmitterFQ217xLaserBoltEmitter12fx_when_enumPQ217xLaserBoltEmitter11effect_dataUl
/* 8016CE64 00169F44  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016CE68 00169F48  38 63 14 64 */	addi r3, r3, "@stringBase0"@l
/* 8016CE6C 00169F4C  38 63 09 AE */	addi r3, r3, 0x9ae
/* 8016CE70 00169F50  4B F3 B9 D5 */	bl zParEmitterFind__FPCc
/* 8016CE74 00169F54  90 7E 04 4C */	stw r3, 0x44c(r30)
/* 8016CE78 00169F58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016CE7C 00169F5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016CE80 00169F60  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016CE84 00169F64  7C 08 03 A6 */	mtlr r0
/* 8016CE88 00169F68  38 21 00 10 */	addi r1, r1, 0x10
/* 8016CE8C 00169F6C  4E 80 00 20 */	blr
.endfn setup_beam__13zNPCBPlanktonFv

# zNPCBPlankton::reset_beam()
.fn reset_beam__13zNPCBPlanktonFv, global
/* 8016CE90 00169F70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016CE94 00169F74  7C 08 02 A6 */	mflr r0
/* 8016CE98 00169F78  38 63 03 B8 */	addi r3, r3, 0x3b8
/* 8016CE9C 00169F7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016CEA0 00169F80  48 01 07 D1 */	bl reset__17xLaserBoltEmitterFv
/* 8016CEA4 00169F84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016CEA8 00169F88  7C 08 03 A6 */	mtlr r0
/* 8016CEAC 00169F8C  38 21 00 10 */	addi r1, r1, 0x10
/* 8016CEB0 00169F90  4E 80 00 20 */	blr
.endfn reset_beam__13zNPCBPlanktonFv

# zNPCBPlankton::vanish()
.fn vanish__13zNPCBPlanktonFv, global
/* 8016CEB4 00169F94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016CEB8 00169F98  7C 08 02 A6 */	mflr r0
/* 8016CEBC 00169F9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016CEC0 00169FA0  38 00 00 00 */	li r0, 0x0
/* 8016CEC4 00169FA4  88 83 00 18 */	lbz r4, 0x18(r3)
/* 8016CEC8 00169FA8  54 84 06 3C */	rlwinm r4, r4, 0, 24, 30
/* 8016CECC 00169FAC  98 83 00 18 */	stb r4, 0x18(r3)
/* 8016CED0 00169FB0  88 83 00 18 */	lbz r4, 0x18(r3)
/* 8016CED4 00169FB4  60 84 00 40 */	ori r4, r4, 0x40
/* 8016CED8 00169FB8  98 83 00 18 */	stb r4, 0x18(r3)
/* 8016CEDC 00169FBC  98 03 00 1B */	stb r0, 0x1b(r3)
/* 8016CEE0 00169FC0  98 03 00 1C */	stb r0, 0x1c(r3)
/* 8016CEE4 00169FC4  98 03 00 22 */	stb r0, 0x22(r3)
/* 8016CEE8 00169FC8  98 03 00 23 */	stb r0, 0x23(r3)
/* 8016CEEC 00169FCC  98 03 00 F0 */	stb r0, 0xf0(r3)
/* 8016CEF0 00169FD0  98 03 00 F1 */	stb r0, 0xf1(r3)
/* 8016CEF4 00169FD4  38 60 00 00 */	li r3, 0x0
/* 8016CEF8 00169FD8  4B FF BE 65 */	bl "kill_sound__34@unnamed@zNPCTypeBossPlankton_cpp@Fi"
/* 8016CEFC 00169FDC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016CF00 00169FE0  7C 08 03 A6 */	mtlr r0
/* 8016CF04 00169FE4  38 21 00 10 */	addi r1, r1, 0x10
/* 8016CF08 00169FE8  4E 80 00 20 */	blr
.endfn vanish__13zNPCBPlanktonFv

# zNPCBPlankton::reappear()
.fn reappear__13zNPCBPlanktonFv, global
/* 8016CF0C 00169FEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016CF10 00169FF0  7C 08 02 A6 */	mflr r0
/* 8016CF14 00169FF4  7C 67 1B 78 */	mr r7, r3
/* 8016CF18 00169FF8  38 A0 00 00 */	li r5, 0x0
/* 8016CF1C 00169FFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016CF20 0016A000  38 00 00 10 */	li r0, 0x10
/* 8016CF24 0016A004  38 87 00 88 */	addi r4, r7, 0x88
/* 8016CF28 0016A008  88 C3 00 18 */	lbz r6, 0x18(r3)
/* 8016CF2C 0016A00C  38 60 00 00 */	li r3, 0x0
/* 8016CF30 0016A010  60 C6 00 01 */	ori r6, r6, 0x1
/* 8016CF34 0016A014  98 C7 00 18 */	stb r6, 0x18(r7)
/* 8016CF38 0016A018  88 C7 00 18 */	lbz r6, 0x18(r7)
/* 8016CF3C 0016A01C  70 C6 00 BF */	andi. r6, r6, 0xbf
/* 8016CF40 0016A020  98 C7 00 18 */	stb r6, 0x18(r7)
/* 8016CF44 0016A024  98 A7 00 1B */	stb r5, 0x1b(r7)
/* 8016CF48 0016A028  98 07 00 1C */	stb r0, 0x1c(r7)
/* 8016CF4C 0016A02C  98 07 00 22 */	stb r0, 0x22(r7)
/* 8016CF50 0016A030  98 07 00 23 */	stb r0, 0x23(r7)
/* 8016CF54 0016A034  98 A7 00 F0 */	stb r5, 0xf0(r7)
/* 8016CF58 0016A038  98 A7 00 F1 */	stb r5, 0xf1(r7)
/* 8016CF5C 0016A03C  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016CF60 0016A040  4B FF BC 59 */	bl "play_sound__34@unnamed@zNPCTypeBossPlankton_cpp@FiPC5xVec3f"
/* 8016CF64 0016A044  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016CF68 0016A048  7C 08 03 A6 */	mtlr r0
/* 8016CF6C 0016A04C  38 21 00 10 */	addi r1, r1, 0x10
/* 8016CF70 0016A050  4E 80 00 20 */	blr
.endfn reappear__13zNPCBPlanktonFv

# zNPCBPlankton::random_orbit(const xVec3&, float, float) const
.fn random_orbit__13zNPCBPlanktonCFRC5xVec3ff, global
/* 8016CF74 0016A054  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8016CF78 0016A058  7C 08 02 A6 */	mflr r0
/* 8016CF7C 0016A05C  90 01 00 74 */	stw r0, 0x74(r1)
/* 8016CF80 0016A060  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8016CF84 0016A064  F3 E1 00 68 */	psq_st f31, 0x68(r1), 0, qr0
/* 8016CF88 0016A068  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 8016CF8C 0016A06C  F3 C1 00 58 */	psq_st f30, 0x58(r1), 0, qr0
/* 8016CF90 0016A070  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 8016CF94 0016A074  F3 A1 00 48 */	psq_st f29, 0x48(r1), 0, qr0
/* 8016CF98 0016A078  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8016CF9C 0016A07C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8016CFA0 0016A080  FF A0 08 90 */	fmr f29, f1
/* 8016CFA4 0016A084  7C 9F 23 78 */	mr r31, r4
/* 8016CFA8 0016A088  FF C0 10 90 */	fmr f30, f2
/* 8016CFAC 0016A08C  7C 7E 1B 78 */	mr r30, r3
/* 8016CFB0 0016A090  7C A4 2B 78 */	mr r4, r5
/* 8016CFB4 0016A094  38 61 00 08 */	addi r3, r1, 0x8
/* 8016CFB8 0016A098  38 BF 04 50 */	addi r5, r31, 0x450
/* 8016CFBC 0016A09C  4B E9 E2 11 */	bl __mi__5xVec3CFRC5xVec3
/* 8016CFC0 0016A0A0  80 A1 00 08 */	lwz r5, 0x8(r1)
/* 8016CFC4 0016A0A4  38 61 00 20 */	addi r3, r1, 0x20
/* 8016CFC8 0016A0A8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8016CFCC 0016A0AC  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8016CFD0 0016A0B0  90 A1 00 20 */	stw r5, 0x20(r1)
/* 8016CFD4 0016A0B4  90 81 00 24 */	stw r4, 0x24(r1)
/* 8016CFD8 0016A0B8  90 01 00 28 */	stw r0, 0x28(r1)
/* 8016CFDC 0016A0BC  4B E9 E1 21 */	bl length2__5xVec3CFv
/* 8016CFE0 0016A0C0  C0 02 AB B4 */	lfs f0, "@2166"@sda21(r2)
/* 8016CFE4 0016A0C4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016CFE8 0016A0C8  4C 41 13 82 */	cror eq, gt, eq
/* 8016CFEC 0016A0CC  40 82 00 1C */	bne .L_8016D008
/* 8016CFF0 0016A0D0  C0 02 AB 28 */	lfs f0, "@1755"@sda21(r2)
/* 8016CFF4 0016A0D4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016CFF8 0016A0D8  4C 40 13 82 */	cror eq, lt, eq
/* 8016CFFC 0016A0DC  40 82 00 0C */	bne .L_8016D008
/* 8016D000 0016A0E0  C3 E2 AB 10 */	lfs f31, "@1586"@sda21(r2)
/* 8016D004 0016A0E4  48 00 00 28 */	b .L_8016D02C
.L_8016D008:
/* 8016D008 0016A0E8  4B E9 D7 F5 */	bl xsqrt__Ff
/* 8016D00C 0016A0EC  C0 02 AB 0C */	lfs f0, "@1585"@sda21(r2)
/* 8016D010 0016A0F0  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 8016D014 0016A0F4  EC 60 08 24 */	fdivs f3, f0, f1
/* 8016D018 0016A0F8  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8016D01C 0016A0FC  EC 22 00 F2 */	fmuls f1, f2, f3
/* 8016D020 0016A100  EC 40 00 F2 */	fmuls f2, f0, f3
/* 8016D024 0016A104  4B E9 90 4D */	bl xatan2__Fff
/* 8016D028 0016A108  FF E0 08 90 */	fmr f31, f1
.L_8016D02C:
/* 8016D02C 0016A10C  C0 02 AB B0 */	lfs f0, "@2165"@sda21(r2)
/* 8016D030 0016A110  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 8016D034 0016A114  40 81 00 08 */	ble .L_8016D03C
/* 8016D038 0016A118  FF C0 00 90 */	fmr f30, f0
.L_8016D03C:
/* 8016D03C 0016A11C  4B EC 3C 4D */	bl xurand__Fv
/* 8016D040 0016A120  EC 1E E8 28 */	fsubs f0, f30, f29
/* 8016D044 0016A124  EF C0 E8 7A */	fmadds f30, f0, f1, f29
/* 8016D048 0016A128  4B EC 3C 21 */	bl xrand__Fv
/* 8016D04C 0016A12C  54 60 9F FF */	extrwi. r0, r3, 1, 18
/* 8016D050 0016A130  41 82 00 0C */	beq .L_8016D05C
/* 8016D054 0016A134  C0 02 AB C8 */	lfs f0, "@2482"@sda21(r2)
/* 8016D058 0016A138  EF DE 00 32 */	fmuls f30, f30, f0
.L_8016D05C:
/* 8016D05C 0016A13C  EF DF F0 2A */	fadds f30, f31, f30
/* 8016D060 0016A140  80 9F 04 50 */	lwz r4, 0x450(r31)
/* 8016D064 0016A144  80 7F 04 54 */	lwz r3, 0x454(r31)
/* 8016D068 0016A148  80 1F 04 58 */	lwz r0, 0x458(r31)
/* 8016D06C 0016A14C  FC 20 F0 90 */	fmr f1, f30
/* 8016D070 0016A150  90 81 00 14 */	stw r4, 0x14(r1)
/* 8016D074 0016A154  90 61 00 18 */	stw r3, 0x18(r1)
/* 8016D078 0016A158  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8016D07C 0016A15C  4B F5 7D D1 */	bl isin__Ff
/* 8016D080 0016A160  C0 5F 04 5C */	lfs f2, 0x45c(r31)
/* 8016D084 0016A164  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8016D088 0016A168  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8016D08C 0016A16C  FC 20 F0 90 */	fmr f1, f30
/* 8016D090 0016A170  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8016D094 0016A174  4B F5 7D FD */	bl icos__Ff
/* 8016D098 0016A178  C0 5F 04 5C */	lfs f2, 0x45c(r31)
/* 8016D09C 0016A17C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8016D0A0 0016A180  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8016D0A4 0016A184  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8016D0A8 0016A188  80 01 00 18 */	lwz r0, 0x18(r1)
/* 8016D0AC 0016A18C  90 7E 00 00 */	stw r3, 0x0(r30)
/* 8016D0B0 0016A190  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8016D0B4 0016A194  90 1E 00 04 */	stw r0, 0x4(r30)
/* 8016D0B8 0016A198  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8016D0BC 0016A19C  90 1E 00 08 */	stw r0, 0x8(r30)
/* 8016D0C0 0016A1A0  E3 E1 00 68 */	psq_l f31, 0x68(r1), 0, qr0
/* 8016D0C4 0016A1A4  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8016D0C8 0016A1A8  E3 C1 00 58 */	psq_l f30, 0x58(r1), 0, qr0
/* 8016D0CC 0016A1AC  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 8016D0D0 0016A1B0  E3 A1 00 48 */	psq_l f29, 0x48(r1), 0, qr0
/* 8016D0D4 0016A1B4  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 8016D0D8 0016A1B8  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8016D0DC 0016A1BC  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8016D0E0 0016A1C0  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8016D0E4 0016A1C4  7C 08 03 A6 */	mtlr r0
/* 8016D0E8 0016A1C8  38 21 00 70 */	addi r1, r1, 0x70
/* 8016D0EC 0016A1CC  4E 80 00 20 */	blr
.endfn random_orbit__13zNPCBPlanktonCFRC5xVec3ff

# zNPCBPlankton::player_orbit() const
.fn player_orbit__13zNPCBPlanktonCFv, global
/* 8016D0F0 0016A1D0  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8016D0F4 0016A1D4  7C 08 02 A6 */	mflr r0
/* 8016D0F8 0016A1D8  90 01 00 64 */	stw r0, 0x64(r1)
/* 8016D0FC 0016A1DC  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8016D100 0016A1E0  93 C1 00 58 */	stw r30, 0x58(r1)
/* 8016D104 0016A1E4  7C 9E 23 78 */	mr r30, r4
/* 8016D108 0016A1E8  93 A1 00 54 */	stw r29, 0x54(r1)
/* 8016D10C 0016A1EC  7C 7D 1B 78 */	mr r29, r3
/* 8016D110 0016A1F0  4B FF B9 85 */	bl "get_player_loc__34@unnamed@zNPCTypeBossPlankton_cpp@Fv"
/* 8016D114 0016A1F4  7C 7F 1B 78 */	mr r31, r3
/* 8016D118 0016A1F8  7F C3 F3 78 */	mr r3, r30
/* 8016D11C 0016A1FC  48 00 2A 9D */	bl location__13zNPCBPlanktonCFv
/* 8016D120 0016A200  7C 64 1B 78 */	mr r4, r3
/* 8016D124 0016A204  7F C3 F3 78 */	mr r3, r30
/* 8016D128 0016A208  7F E5 FB 78 */	mr r5, r31
/* 8016D12C 0016A20C  4B FF F8 59 */	bl orbit_yaw_offset__13zNPCBPlanktonCFRC5xVec3RC5xVec3
/* 8016D130 0016A210  4B F5 26 A1 */	bl fabsf__3stdFf
/* 8016D134 0016A214  C0 1E 04 5C */	lfs f0, 0x45c(r30)
/* 8016D138 0016A218  C0 5E 04 8C */	lfs f2, 0x48c(r30)
/* 8016D13C 0016A21C  EC 20 00 72 */	fmuls f1, f0, f1
/* 8016D140 0016A220  C0 62 AB 38 */	lfs f3, "@1890"@sda21(r2)
/* 8016D144 0016A224  C0 9E 04 98 */	lfs f4, 0x498(r30)
/* 8016D148 0016A228  4B EC 42 E5 */	bl xAccelMoveTime__Fffff
/* 8016D14C 0016A22C  C0 42 AB 0C */	lfs f2, "@1585"@sda21(r2)
/* 8016D150 0016A230  38 61 00 38 */	addi r3, r1, 0x38
/* 8016D154 0016A234  38 80 00 01 */	li r4, 0x1
/* 8016D158 0016A238  4B F0 28 25 */	bl zEntPlayer_PredictPos__FP5xVec3ffi
/* 8016D15C 0016A23C  80 E2 C0 10 */	lwz r7, "@2488"@sda21(r2)
/* 8016D160 0016A240  38 61 00 28 */	addi r3, r1, 0x28
/* 8016D164 0016A244  80 C2 C0 14 */	lwz r6, "@2488"+0x4@sda21(r2)
/* 8016D168 0016A248  38 81 00 30 */	addi r4, r1, 0x30
/* 8016D16C 0016A24C  80 A2 C0 18 */	lwz r5, "@2489"@sda21(r2)
/* 8016D170 0016A250  80 02 C0 1C */	lwz r0, "@2489"+0x4@sda21(r2)
/* 8016D174 0016A254  90 E1 00 30 */	stw r7, 0x30(r1)
/* 8016D178 0016A258  C0 7E 04 50 */	lfs f3, 0x450(r30)
/* 8016D17C 0016A25C  90 C1 00 34 */	stw r6, 0x34(r1)
/* 8016D180 0016A260  C0 5E 04 58 */	lfs f2, 0x458(r30)
/* 8016D184 0016A264  90 A1 00 28 */	stw r5, 0x28(r1)
/* 8016D188 0016A268  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 8016D18C 0016A26C  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8016D190 0016A270  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 8016D194 0016A274  D0 61 00 30 */	stfs f3, 0x30(r1)
/* 8016D198 0016A278  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 8016D19C 0016A27C  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 8016D1A0 0016A280  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8016D1A4 0016A284  4B EA 87 D1 */	bl __mi__5xVec2CFRC5xVec2
/* 8016D1A8 0016A288  90 61 00 20 */	stw r3, 0x20(r1)
/* 8016D1AC 0016A28C  38 61 00 20 */	addi r3, r1, 0x20
/* 8016D1B0 0016A290  90 81 00 24 */	stw r4, 0x24(r1)
/* 8016D1B4 0016A294  4B EA 87 A9 */	bl length2__5xVec2CFv
/* 8016D1B8 0016A298  C0 02 AB C0 */	lfs f0, "@2223"@sda21(r2)
/* 8016D1BC 0016A29C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016D1C0 0016A2A0  4C 40 13 82 */	cror eq, lt, eq
/* 8016D1C4 0016A2A4  40 82 00 28 */	bne .L_8016D1EC
/* 8016D1C8 0016A2A8  7F C3 F3 78 */	mr r3, r30
/* 8016D1CC 0016A2AC  48 00 29 ED */	bl location__13zNPCBPlanktonCFv
/* 8016D1D0 0016A2B0  80 83 00 00 */	lwz r4, 0x0(r3)
/* 8016D1D4 0016A2B4  80 03 00 04 */	lwz r0, 0x4(r3)
/* 8016D1D8 0016A2B8  90 9D 00 00 */	stw r4, 0x0(r29)
/* 8016D1DC 0016A2BC  90 1D 00 04 */	stw r0, 0x4(r29)
/* 8016D1E0 0016A2C0  80 03 00 08 */	lwz r0, 0x8(r3)
/* 8016D1E4 0016A2C4  90 1D 00 08 */	stw r0, 0x8(r29)
/* 8016D1E8 0016A2C8  48 00 00 5C */	b .L_8016D244
.L_8016D1EC:
/* 8016D1EC 0016A2CC  4B E9 D6 11 */	bl xsqrt__Ff
/* 8016D1F0 0016A2D0  C0 02 AB 0C */	lfs f0, "@1585"@sda21(r2)
/* 8016D1F4 0016A2D4  38 61 00 20 */	addi r3, r1, 0x20
/* 8016D1F8 0016A2D8  EC 20 08 24 */	fdivs f1, f0, f1
/* 8016D1FC 0016A2DC  4B EF 2E C9 */	bl __ml__5xVec2CFf
/* 8016D200 0016A2E0  90 61 00 18 */	stw r3, 0x18(r1)
/* 8016D204 0016A2E4  38 61 00 18 */	addi r3, r1, 0x18
/* 8016D208 0016A2E8  C0 3E 04 5C */	lfs f1, 0x45c(r30)
/* 8016D20C 0016A2EC  90 81 00 1C */	stw r4, 0x1c(r1)
/* 8016D210 0016A2F0  4B EF 2E B5 */	bl __ml__5xVec2CFf
/* 8016D214 0016A2F4  90 81 00 0C */	stw r4, 0xc(r1)
/* 8016D218 0016A2F8  38 81 00 08 */	addi r4, r1, 0x8
/* 8016D21C 0016A2FC  90 61 00 08 */	stw r3, 0x8(r1)
/* 8016D220 0016A300  38 61 00 30 */	addi r3, r1, 0x30
/* 8016D224 0016A304  4B FF 2C 9D */	bl __pl__5xVec2CFRC5xVec2
/* 8016D228 0016A308  90 61 00 10 */	stw r3, 0x10(r1)
/* 8016D22C 0016A30C  7F A3 EB 78 */	mr r3, r29
/* 8016D230 0016A310  C0 5E 04 54 */	lfs f2, 0x454(r30)
/* 8016D234 0016A314  90 81 00 14 */	stw r4, 0x14(r1)
/* 8016D238 0016A318  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8016D23C 0016A31C  C0 61 00 14 */	lfs f3, 0x14(r1)
/* 8016D240 0016A320  4B EF 2D 49 */	bl create__5xVec3Ffff
.L_8016D244:
/* 8016D244 0016A324  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8016D248 0016A328  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8016D24C 0016A32C  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 8016D250 0016A330  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 8016D254 0016A334  7C 08 03 A6 */	mtlr r0
/* 8016D258 0016A338  38 21 00 60 */	addi r1, r1, 0x60
/* 8016D25C 0016A33C  4E 80 00 20 */	blr
.endfn player_orbit__13zNPCBPlanktonCFv

# zNPCBPlankton::crony_attacking() const
.fn crony_attacking__13zNPCBPlanktonCFv, global
/* 8016D260 0016A340  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016D264 0016A344  7C 08 02 A6 */	mflr r0
/* 8016D268 0016A348  80 63 04 B0 */	lwz r3, 0x4b0(r3)
/* 8016D26C 0016A34C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016D270 0016A350  28 03 00 00 */	cmplwi r3, 0x0
/* 8016D274 0016A354  40 82 00 0C */	bne .L_8016D280
/* 8016D278 0016A358  38 60 00 00 */	li r3, 0x0
/* 8016D27C 0016A35C  48 00 00 24 */	b .L_8016D2A0
.L_8016D280:
/* 8016D280 0016A360  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 8016D284 0016A364  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 8016D288 0016A368  7D 89 03 A6 */	mtctr r12
/* 8016D28C 0016A36C  4E 80 04 21 */	bctrl
/* 8016D290 0016A370  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016D294 0016A374  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016D298 0016A378  7C 00 00 26 */	mfcr r0
/* 8016D29C 0016A37C  54 03 17 FE */	extrwi r3, r0, 1, 1
.L_8016D2A0:
/* 8016D2A0 0016A380  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016D2A4 0016A384  7C 08 03 A6 */	mtlr r0
/* 8016D2A8 0016A388  38 21 00 10 */	addi r1, r1, 0x10
/* 8016D2AC 0016A38C  4E 80 00 20 */	blr
.endfn crony_attacking__13zNPCBPlanktonCFv

# zNPCBPlankton::stun()
.fn stun__13zNPCBPlanktonFv, global
/* 8016D2B0 0016A390  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016D2B4 0016A394  7C 08 02 A6 */	mflr r0
/* 8016D2B8 0016A398  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016D2BC 0016A39C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016D2C0 0016A3A0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016D2C4 0016A3A4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8016D2C8 0016A3A8  93 81 00 10 */	stw r28, 0x10(r1)
/* 8016D2CC 0016A3AC  7C 7C 1B 78 */	mr r28, r3
/* 8016D2D0 0016A3B0  80 63 02 28 */	lwz r3, 0x228(r3)
/* 8016D2D4 0016A3B4  4B FA 02 F1 */	bl GIDOfActive__7xPsycheCFv
/* 8016D2D8 0016A3B8  3C 63 B1 B9 */	addis r3, r3, 0xb1b9
/* 8016D2DC 0016A3BC  38 03 BD AD */	addi r0, r3, -0x4253
/* 8016D2E0 0016A3C0  28 00 00 01 */	cmplwi r0, 0x1
/* 8016D2E4 0016A3C4  40 81 01 3C */	ble .L_8016D420
/* 8016D2E8 0016A3C8  28 03 42 55 */	cmplwi r3, 0x4255
/* 8016D2EC 0016A3CC  40 82 00 08 */	bne .L_8016D2F4
/* 8016D2F0 0016A3D0  48 00 01 30 */	b .L_8016D420
.L_8016D2F4:
/* 8016D2F4 0016A3D4  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016D2F8 0016A3D8  38 9C 00 88 */	addi r4, r28, 0x88
/* 8016D2FC 0016A3DC  38 60 00 01 */	li r3, 0x1
/* 8016D300 0016A3E0  4B FF B8 B9 */	bl "play_sound__34@unnamed@zNPCTypeBossPlankton_cpp@FiPC5xVec3f"
/* 8016D304 0016A3E4  80 1C 02 C4 */	lwz r0, 0x2c4(r28)
/* 8016D308 0016A3E8  2C 00 00 00 */	cmpwi r0, 0x0
/* 8016D30C 0016A3EC  40 82 00 1C */	bne .L_8016D328
/* 8016D310 0016A3F0  3C 80 4E 47 */	lis r4, 0x4e47
/* 8016D314 0016A3F4  80 7C 02 28 */	lwz r3, 0x228(r28)
/* 8016D318 0016A3F8  38 84 42 53 */	addi r4, r4, 0x4253
/* 8016D31C 0016A3FC  38 A0 00 01 */	li r5, 0x1
/* 8016D320 0016A400  4B FA 04 11 */	bl GoalSet__7xPsycheFii
/* 8016D324 0016A404  48 00 00 FC */	b .L_8016D420
.L_8016D328:
/* 8016D328 0016A408  80 1C 06 98 */	lwz r0, 0x698(r28)
/* 8016D32C 0016A40C  1C 60 00 3C */	mulli r3, r0, 0x3c
/* 8016D330 0016A410  38 03 04 C0 */	addi r0, r3, 0x4c0
/* 8016D334 0016A414  7C 9C 00 2E */	lwzx r4, r28, r0
/* 8016D338 0016A418  28 04 00 00 */	cmplwi r4, 0x0
/* 8016D33C 0016A41C  41 82 00 10 */	beq .L_8016D34C
/* 8016D340 0016A420  7F 83 E3 78 */	mr r3, r28
/* 8016D344 0016A424  38 A0 00 12 */	li r5, 0x12
/* 8016D348 0016A428  4B EB 23 99 */	bl zEntEvent__FP5xBaseP5xBaseUi
.L_8016D34C:
/* 8016D34C 0016A42C  3C 80 4E 47 */	lis r4, 0x4e47
/* 8016D350 0016A430  80 7C 02 28 */	lwz r3, 0x228(r28)
/* 8016D354 0016A434  38 84 42 54 */	addi r4, r4, 0x4254
/* 8016D358 0016A438  38 A0 00 01 */	li r5, 0x1
/* 8016D35C 0016A43C  4B FA 03 D5 */	bl GoalSet__7xPsycheFii
/* 8016D360 0016A440  7F 9F E3 78 */	mr r31, r28
/* 8016D364 0016A444  3B C0 00 00 */	li r30, 0x0
/* 8016D368 0016A448  3B A0 00 00 */	li r29, 0x0
/* 8016D36C 0016A44C  48 00 00 28 */	b .L_8016D394
.L_8016D370:
/* 8016D370 0016A450  80 7F 04 BC */	lwz r3, 0x4bc(r31)
/* 8016D374 0016A454  28 03 00 00 */	cmplwi r3, 0x0
/* 8016D378 0016A458  41 82 00 14 */	beq .L_8016D38C
/* 8016D37C 0016A45C  4B EF 3E 81 */	bl zEntDestructObj_isDestroyed__FP15zEntDestructObj
/* 8016D380 0016A460  28 03 00 00 */	cmplwi r3, 0x0
/* 8016D384 0016A464  40 82 00 08 */	bne .L_8016D38C
/* 8016D388 0016A468  3B DE 00 01 */	addi r30, r30, 0x1
.L_8016D38C:
/* 8016D38C 0016A46C  3B FF 00 3C */	addi r31, r31, 0x3c
/* 8016D390 0016A470  3B BD 00 01 */	addi r29, r29, 0x1
.L_8016D394:
/* 8016D394 0016A474  80 1C 06 94 */	lwz r0, 0x694(r28)
/* 8016D398 0016A478  7C 1D 00 00 */	cmpw r29, r0
/* 8016D39C 0016A47C  41 80 FF D4 */	blt .L_8016D370
/* 8016D3A0 0016A480  2C 1E 00 02 */	cmpwi r30, 0x2
/* 8016D3A4 0016A484  41 82 00 38 */	beq .L_8016D3DC
/* 8016D3A8 0016A488  40 80 00 10 */	bge .L_8016D3B8
/* 8016D3AC 0016A48C  2C 1E 00 01 */	cmpwi r30, 0x1
/* 8016D3B0 0016A490  40 80 00 14 */	bge .L_8016D3C4
/* 8016D3B4 0016A494  48 00 00 58 */	b .L_8016D40C
.L_8016D3B8:
/* 8016D3B8 0016A498  2C 1E 00 04 */	cmpwi r30, 0x4
/* 8016D3BC 0016A49C  40 80 00 50 */	bge .L_8016D40C
/* 8016D3C0 0016A4A0  48 00 00 34 */	b .L_8016D3F4
.L_8016D3C4:
/* 8016D3C4 0016A4A4  7F 83 E3 78 */	mr r3, r28
/* 8016D3C8 0016A4A8  38 80 00 06 */	li r4, 0x6
/* 8016D3CC 0016A4AC  38 A0 00 00 */	li r5, 0x0
/* 8016D3D0 0016A4B0  38 C0 00 00 */	li r6, 0x0
/* 8016D3D4 0016A4B4  48 00 03 A9 */	bl say__13zNPCBPlanktonFiib
/* 8016D3D8 0016A4B8  48 00 00 48 */	b .L_8016D420
.L_8016D3DC:
/* 8016D3DC 0016A4BC  7F 83 E3 78 */	mr r3, r28
/* 8016D3E0 0016A4C0  38 80 00 05 */	li r4, 0x5
/* 8016D3E4 0016A4C4  38 A0 00 00 */	li r5, 0x0
/* 8016D3E8 0016A4C8  38 C0 00 00 */	li r6, 0x0
/* 8016D3EC 0016A4CC  48 00 03 91 */	bl say__13zNPCBPlanktonFiib
/* 8016D3F0 0016A4D0  48 00 00 30 */	b .L_8016D420
.L_8016D3F4:
/* 8016D3F4 0016A4D4  7F 83 E3 78 */	mr r3, r28
/* 8016D3F8 0016A4D8  38 80 00 04 */	li r4, 0x4
/* 8016D3FC 0016A4DC  38 A0 00 00 */	li r5, 0x0
/* 8016D400 0016A4E0  38 C0 00 00 */	li r6, 0x0
/* 8016D404 0016A4E4  48 00 03 79 */	bl say__13zNPCBPlanktonFiib
/* 8016D408 0016A4E8  48 00 00 18 */	b .L_8016D420
.L_8016D40C:
/* 8016D40C 0016A4EC  7F 83 E3 78 */	mr r3, r28
/* 8016D410 0016A4F0  38 80 00 03 */	li r4, 0x3
/* 8016D414 0016A4F4  38 A0 00 00 */	li r5, 0x0
/* 8016D418 0016A4F8  38 C0 00 00 */	li r6, 0x0
/* 8016D41C 0016A4FC  48 00 03 61 */	bl say__13zNPCBPlanktonFiib
.L_8016D420:
/* 8016D420 0016A500  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016D424 0016A504  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016D428 0016A508  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016D42C 0016A50C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8016D430 0016A510  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8016D434 0016A514  7C 08 03 A6 */	mtlr r0
/* 8016D438 0016A518  38 21 00 20 */	addi r1, r1, 0x20
/* 8016D43C 0016A51C  4E 80 00 20 */	blr
.endfn stun__13zNPCBPlanktonFv

# zNPCBPlankton::cronies_dead() const
.fn cronies_dead__13zNPCBPlanktonCFv, global
/* 8016D440 0016A520  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016D444 0016A524  7C 08 02 A6 */	mflr r0
/* 8016D448 0016A528  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016D44C 0016A52C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016D450 0016A530  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016D454 0016A534  80 03 06 98 */	lwz r0, 0x698(r3)
/* 8016D458 0016A538  1C 80 00 3C */	mulli r4, r0, 0x3c
/* 8016D45C 0016A53C  38 84 04 B4 */	addi r4, r4, 0x4b4
/* 8016D460 0016A540  7C 83 22 14 */	add r4, r3, r4
/* 8016D464 0016A544  80 04 00 30 */	lwz r0, 0x30(r4)
/* 8016D468 0016A548  3B E4 00 10 */	addi r31, r4, 0x10
/* 8016D46C 0016A54C  54 00 10 3A */	slwi r0, r0, 2
/* 8016D470 0016A550  7F DF 02 14 */	add r30, r31, r0
/* 8016D474 0016A554  48 00 00 2C */	b .L_8016D4A0
.L_8016D478:
/* 8016D478 0016A558  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 8016D47C 0016A55C  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 8016D480 0016A560  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8016D484 0016A564  7D 89 03 A6 */	mtctr r12
/* 8016D488 0016A568  4E 80 04 21 */	bctrl
/* 8016D48C 0016A56C  2C 03 00 00 */	cmpwi r3, 0x0
/* 8016D490 0016A570  41 82 00 0C */	beq .L_8016D49C
/* 8016D494 0016A574  38 60 00 00 */	li r3, 0x0
/* 8016D498 0016A578  48 00 00 14 */	b .L_8016D4AC
.L_8016D49C:
/* 8016D49C 0016A57C  3B FF 00 04 */	addi r31, r31, 0x4
.L_8016D4A0:
/* 8016D4A0 0016A580  7C 1F F0 40 */	cmplw r31, r30
/* 8016D4A4 0016A584  40 82 FF D4 */	bne .L_8016D478
/* 8016D4A8 0016A588  38 60 00 01 */	li r3, 0x1
.L_8016D4AC:
/* 8016D4AC 0016A58C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016D4B0 0016A590  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016D4B4 0016A594  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016D4B8 0016A598  7C 08 03 A6 */	mtlr r0
/* 8016D4BC 0016A59C  38 21 00 10 */	addi r1, r1, 0x10
/* 8016D4C0 0016A5A0  4E 80 00 20 */	blr
.endfn cronies_dead__13zNPCBPlanktonCFv

# zNPCBPlankton::impart_velocity(const xVec3&)
.fn impart_velocity__13zNPCBPlanktonFRC5xVec3, global
/* 8016D4C4 0016A5A4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8016D4C8 0016A5A8  7C 08 02 A6 */	mflr r0
/* 8016D4CC 0016A5AC  90 01 00 44 */	stw r0, 0x44(r1)
/* 8016D4D0 0016A5B0  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8016D4D4 0016A5B4  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 8016D4D8 0016A5B8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8016D4DC 0016A5BC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8016D4E0 0016A5C0  7C 7E 1B 78 */	mr r30, r3
/* 8016D4E4 0016A5C4  7C 9F 23 78 */	mr r31, r4
/* 8016D4E8 0016A5C8  80 03 02 BC */	lwz r0, 0x2bc(r3)
/* 8016D4EC 0016A5CC  2C 00 00 03 */	cmpwi r0, 0x3
/* 8016D4F0 0016A5D0  41 82 00 0C */	beq .L_8016D4FC
/* 8016D4F4 0016A5D4  40 80 00 C0 */	bge .L_8016D5B4
/* 8016D4F8 0016A5D8  48 00 00 BC */	b .L_8016D5B4
.L_8016D4FC:
/* 8016D4FC 0016A5DC  48 00 26 BD */	bl location__13zNPCBPlanktonCFv
/* 8016D500 0016A5E0  7C 65 1B 78 */	mr r5, r3
/* 8016D504 0016A5E4  7F E4 FB 78 */	mr r4, r31
/* 8016D508 0016A5E8  38 61 00 10 */	addi r3, r1, 0x10
/* 8016D50C 0016A5EC  38 DE 04 50 */	addi r6, r30, 0x450
/* 8016D510 0016A5F0  4B FF EC BD */	bl "world_to_ring_vel__34@unnamed@zNPCTypeBossPlankton_cpp@FRC5xVec3RC5xVec3RC5xVec3"
/* 8016D514 0016A5F4  80 A1 00 10 */	lwz r5, 0x10(r1)
/* 8016D518 0016A5F8  7F C3 F3 78 */	mr r3, r30
/* 8016D51C 0016A5FC  80 81 00 14 */	lwz r4, 0x14(r1)
/* 8016D520 0016A600  80 01 00 18 */	lwz r0, 0x18(r1)
/* 8016D524 0016A604  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 8016D528 0016A608  90 81 00 20 */	stw r4, 0x20(r1)
/* 8016D52C 0016A60C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016D530 0016A610  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016D534 0016A614  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8016D538 0016A618  80 82 C0 20 */	lwz r4, "@2564"@sda21(r2)
/* 8016D53C 0016A61C  80 02 C0 24 */	lwz r0, "@2564"+0x4@sda21(r2)
/* 8016D540 0016A620  90 81 00 08 */	stw r4, 0x8(r1)
/* 8016D544 0016A624  90 01 00 0C */	stw r0, 0xc(r1)
/* 8016D548 0016A628  48 00 26 71 */	bl location__13zNPCBPlanktonCFv
/* 8016D54C 0016A62C  C0 23 00 00 */	lfs f1, 0x0(r3)
/* 8016D550 0016A630  7F C3 F3 78 */	mr r3, r30
/* 8016D554 0016A634  C0 1E 04 50 */	lfs f0, 0x450(r30)
/* 8016D558 0016A638  EC 01 00 28 */	fsubs f0, f1, f0
/* 8016D55C 0016A63C  D0 01 00 08 */	stfs f0, 0x8(r1)
/* 8016D560 0016A640  48 00 26 59 */	bl location__13zNPCBPlanktonCFv
/* 8016D564 0016A644  C0 43 00 08 */	lfs f2, 0x8(r3)
/* 8016D568 0016A648  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016D56C 0016A64C  C0 1E 04 58 */	lfs f0, 0x458(r30)
/* 8016D570 0016A650  38 83 A1 A0 */	addi r4, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016D574 0016A654  C0 3E 04 5C */	lfs f1, 0x45c(r30)
/* 8016D578 0016A658  38 61 00 08 */	addi r3, r1, 0x8
/* 8016D57C 0016A65C  EC 42 00 28 */	fsubs f2, f2, f0
/* 8016D580 0016A660  C0 04 00 2C */	lfs f0, 0x2c(r4)
/* 8016D584 0016A664  EF E1 00 2A */	fadds f31, f1, f0
/* 8016D588 0016A668  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 8016D58C 0016A66C  4B EA 83 D1 */	bl length2__5xVec2CFv
/* 8016D590 0016A670  EC 1F 07 F2 */	fmuls f0, f31, f31
/* 8016D594 0016A674  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016D598 0016A678  40 81 00 0C */	ble .L_8016D5A4
/* 8016D59C 0016A67C  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016D5A0 0016A680  D0 01 00 24 */	stfs f0, 0x24(r1)
.L_8016D5A4:
/* 8016D5A4 0016A684  38 7E 04 80 */	addi r3, r30, 0x480
/* 8016D5A8 0016A688  38 81 00 1C */	addi r4, r1, 0x1c
/* 8016D5AC 0016A68C  4B EA 7E 99 */	bl __apl__5xVec3FRC5xVec3
/* 8016D5B0 0016A690  48 00 00 10 */	b .L_8016D5C0
.L_8016D5B4:
/* 8016D5B4 0016A694  7F E4 FB 78 */	mr r4, r31
/* 8016D5B8 0016A698  38 7E 04 80 */	addi r3, r30, 0x480
/* 8016D5BC 0016A69C  4B EA 7E 89 */	bl __apl__5xVec3FRC5xVec3
.L_8016D5C0:
/* 8016D5C0 0016A6A0  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8016D5C4 0016A6A4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8016D5C8 0016A6A8  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8016D5CC 0016A6AC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8016D5D0 0016A6B0  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8016D5D4 0016A6B4  7C 08 03 A6 */	mtlr r0
/* 8016D5D8 0016A6B8  38 21 00 40 */	addi r1, r1, 0x40
/* 8016D5DC 0016A6BC  4E 80 00 20 */	blr
.endfn impart_velocity__13zNPCBPlanktonFRC5xVec3

# zNPCBPlankton::next_territory()
.fn next_territory__13zNPCBPlanktonFv, global
/* 8016D5E0 0016A6C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016D5E4 0016A6C4  7C 08 02 A6 */	mflr r0
/* 8016D5E8 0016A6C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016D5EC 0016A6CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016D5F0 0016A6D0  7C 7F 1B 78 */	mr r31, r3
/* 8016D5F4 0016A6D4  48 00 00 45 */	bl have_cronies__13zNPCBPlanktonCFv
/* 8016D5F8 0016A6D8  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8016D5FC 0016A6DC  41 82 00 28 */	beq .L_8016D624
/* 8016D600 0016A6E0  80 7F 06 98 */	lwz r3, 0x698(r31)
/* 8016D604 0016A6E4  38 03 00 01 */	addi r0, r3, 0x1
/* 8016D608 0016A6E8  90 1F 06 98 */	stw r0, 0x698(r31)
/* 8016D60C 0016A6EC  80 1F 06 98 */	lwz r0, 0x698(r31)
/* 8016D610 0016A6F0  80 7F 06 94 */	lwz r3, 0x694(r31)
/* 8016D614 0016A6F4  7C 00 18 00 */	cmpw r0, r3
/* 8016D618 0016A6F8  41 80 00 0C */	blt .L_8016D624
/* 8016D61C 0016A6FC  38 03 FF FF */	addi r0, r3, -0x1
/* 8016D620 0016A700  90 1F 06 98 */	stw r0, 0x698(r31)
.L_8016D624:
/* 8016D624 0016A704  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016D628 0016A708  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016D62C 0016A70C  7C 08 03 A6 */	mtlr r0
/* 8016D630 0016A710  38 21 00 10 */	addi r1, r1, 0x10
/* 8016D634 0016A714  4E 80 00 20 */	blr
.endfn next_territory__13zNPCBPlanktonFv

# zNPCBPlankton::have_cronies() const
.fn have_cronies__13zNPCBPlanktonCFv, global
/* 8016D638 0016A718  80 03 06 98 */	lwz r0, 0x698(r3)
/* 8016D63C 0016A71C  1C 80 00 3C */	mulli r4, r0, 0x3c
/* 8016D640 0016A720  38 04 04 E4 */	addi r0, r4, 0x4e4
/* 8016D644 0016A724  7C 63 00 2E */	lwzx r3, r3, r0
/* 8016D648 0016A728  7C 03 00 D0 */	neg r0, r3
/* 8016D64C 0016A72C  7C 00 18 78 */	andc r0, r0, r3
/* 8016D650 0016A730  54 03 0F FE */	srwi r3, r0, 31
/* 8016D654 0016A734  4E 80 00 20 */	blr
.endfn have_cronies__13zNPCBPlanktonCFv

# zNPCBPlankton::move_to_player_territory()
.fn move_to_player_territory__13zNPCBPlanktonFv, global
/* 8016D658 0016A738  3C 80 80 3C */	lis r4, globals@ha
/* 8016D65C 0016A73C  38 84 05 58 */	addi r4, r4, globals@l
/* 8016D660 0016A740  80 84 07 2C */	lwz r4, 0x72c(r4)
/* 8016D664 0016A744  80 04 00 0C */	lwz r0, 0xc(r4)
/* 8016D668 0016A748  54 00 07 FF */	clrlwi. r0, r0, 31
/* 8016D66C 0016A74C  41 82 00 10 */	beq .L_8016D67C
/* 8016D670 0016A750  80 A4 00 14 */	lwz r5, 0x14(r4)
/* 8016D674 0016A754  28 05 00 00 */	cmplwi r5, 0x0
/* 8016D678 0016A758  40 82 00 0C */	bne .L_8016D684
.L_8016D67C:
/* 8016D67C 0016A75C  38 60 00 00 */	li r3, 0x0
/* 8016D680 0016A760  4E 80 00 20 */	blr
.L_8016D684:
/* 8016D684 0016A764  80 03 06 94 */	lwz r0, 0x694(r3)
/* 8016D688 0016A768  7C 64 1B 78 */	mr r4, r3
/* 8016D68C 0016A76C  38 C0 00 00 */	li r6, 0x0
/* 8016D690 0016A770  7C 09 03 A6 */	mtctr r0
/* 8016D694 0016A774  2C 00 00 00 */	cmpwi r0, 0x0
/* 8016D698 0016A778  40 81 00 34 */	ble .L_8016D6CC
.L_8016D69C:
/* 8016D69C 0016A77C  80 04 04 E4 */	lwz r0, 0x4e4(r4)
/* 8016D6A0 0016A780  2C 00 00 00 */	cmpwi r0, 0x0
/* 8016D6A4 0016A784  41 81 00 1C */	bgt .L_8016D6C0
/* 8016D6A8 0016A788  80 04 04 B8 */	lwz r0, 0x4b8(r4)
/* 8016D6AC 0016A78C  7C 05 00 40 */	cmplw r5, r0
/* 8016D6B0 0016A790  40 82 00 10 */	bne .L_8016D6C0
/* 8016D6B4 0016A794  90 C3 06 98 */	stw r6, 0x698(r3)
/* 8016D6B8 0016A798  38 60 00 01 */	li r3, 0x1
/* 8016D6BC 0016A79C  4E 80 00 20 */	blr
.L_8016D6C0:
/* 8016D6C0 0016A7A0  38 84 00 3C */	addi r4, r4, 0x3c
/* 8016D6C4 0016A7A4  38 C6 00 01 */	addi r6, r6, 0x1
/* 8016D6C8 0016A7A8  42 00 FF D4 */	bdnz .L_8016D69C
.L_8016D6CC:
/* 8016D6CC 0016A7AC  38 60 00 00 */	li r3, 0x0
/* 8016D6D0 0016A7B0  4E 80 00 20 */	blr
.endfn move_to_player_territory__13zNPCBPlanktonFv

# zNPCBPlankton::player_left_territory() const
.fn player_left_territory__13zNPCBPlanktonCFv, global
/* 8016D6D4 0016A7B4  80 E3 06 98 */	lwz r7, 0x698(r3)
/* 8016D6D8 0016A7B8  3C 80 80 3C */	lis r4, globals@ha
/* 8016D6DC 0016A7BC  38 84 05 58 */	addi r4, r4, globals@l
/* 8016D6E0 0016A7C0  1C A7 00 3C */	mulli r5, r7, 0x3c
/* 8016D6E4 0016A7C4  80 84 07 2C */	lwz r4, 0x72c(r4)
/* 8016D6E8 0016A7C8  80 C4 00 14 */	lwz r6, 0x14(r4)
/* 8016D6EC 0016A7CC  38 A5 04 B4 */	addi r5, r5, 0x4b4
/* 8016D6F0 0016A7D0  7C A3 2A 14 */	add r5, r3, r5
/* 8016D6F4 0016A7D4  80 05 00 30 */	lwz r0, 0x30(r5)
/* 8016D6F8 0016A7D8  2C 00 00 00 */	cmpwi r0, 0x0
/* 8016D6FC 0016A7DC  41 81 00 24 */	bgt .L_8016D720
/* 8016D700 0016A7E0  80 05 00 04 */	lwz r0, 0x4(r5)
/* 8016D704 0016A7E4  7C 00 30 40 */	cmplw r0, r6
/* 8016D708 0016A7E8  41 82 00 18 */	beq .L_8016D720
/* 8016D70C 0016A7EC  80 04 00 0C */	lwz r0, 0xc(r4)
/* 8016D710 0016A7F0  54 00 07 FF */	clrlwi. r0, r0, 31
/* 8016D714 0016A7F4  41 82 00 0C */	beq .L_8016D720
/* 8016D718 0016A7F8  28 06 00 00 */	cmplwi r6, 0x0
/* 8016D71C 0016A7FC  40 82 00 0C */	bne .L_8016D728
.L_8016D720:
/* 8016D720 0016A800  38 60 00 00 */	li r3, 0x0
/* 8016D724 0016A804  4E 80 00 20 */	blr
.L_8016D728:
/* 8016D728 0016A808  80 03 06 94 */	lwz r0, 0x694(r3)
/* 8016D72C 0016A80C  38 80 00 00 */	li r4, 0x0
/* 8016D730 0016A810  7C 09 03 A6 */	mtctr r0
/* 8016D734 0016A814  2C 00 00 00 */	cmpwi r0, 0x0
/* 8016D738 0016A818  40 81 00 3C */	ble .L_8016D774
.L_8016D73C:
/* 8016D73C 0016A81C  38 A3 04 B4 */	addi r5, r3, 0x4b4
/* 8016D740 0016A820  80 03 04 E4 */	lwz r0, 0x4e4(r3)
/* 8016D744 0016A824  2C 00 00 00 */	cmpwi r0, 0x0
/* 8016D748 0016A828  41 81 00 20 */	bgt .L_8016D768
/* 8016D74C 0016A82C  80 05 00 04 */	lwz r0, 0x4(r5)
/* 8016D750 0016A830  7C 06 00 40 */	cmplw r6, r0
/* 8016D754 0016A834  40 82 00 14 */	bne .L_8016D768
/* 8016D758 0016A838  7C 04 38 00 */	cmpw r4, r7
/* 8016D75C 0016A83C  41 82 00 0C */	beq .L_8016D768
/* 8016D760 0016A840  38 60 00 01 */	li r3, 0x1
/* 8016D764 0016A844  4E 80 00 20 */	blr
.L_8016D768:
/* 8016D768 0016A848  38 63 00 3C */	addi r3, r3, 0x3c
/* 8016D76C 0016A84C  38 84 00 01 */	addi r4, r4, 0x1
/* 8016D770 0016A850  42 00 FF CC */	bdnz .L_8016D73C
.L_8016D774:
/* 8016D774 0016A854  38 60 00 00 */	li r3, 0x0
/* 8016D778 0016A858  4E 80 00 20 */	blr
.endfn player_left_territory__13zNPCBPlanktonCFv

# zNPCBPlankton::say(int, int, bool)
.fn say__13zNPCBPlanktonFiib, global
/* 8016D77C 0016A85C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016D780 0016A860  7C 08 02 A6 */	mflr r0
/* 8016D784 0016A864  7C A7 2B 78 */	mr r7, r5
/* 8016D788 0016A868  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016D78C 0016A86C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016D790 0016A870  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016D794 0016A874  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8016D798 0016A878  7C 7D 1B 78 */	mr r29, r3
/* 8016D79C 0016A87C  80 63 06 9C */	lwz r3, 0x69c(r3)
/* 8016D7A0 0016A880  28 03 00 00 */	cmplwi r3, 0x0
/* 8016D7A4 0016A884  41 82 00 64 */	beq .L_8016D808
/* 8016D7A8 0016A888  54 C0 06 3F */	clrlwi. r0, r6, 24
/* 8016D7AC 0016A88C  41 82 00 38 */	beq .L_8016D7E4
/* 8016D7B0 0016A890  3C A0 80 27 */	lis r5, "say_set__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016D7B4 0016A894  54 9E 18 38 */	slwi r30, r4, 3
/* 8016D7B8 0016A898  3B E5 13 94 */	addi r31, r5, "say_set__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016D7BC 0016A89C  7C 9F F0 2E */	lwzx r4, r31, r30
/* 8016D7C0 0016A8A0  38 A0 00 01 */	li r5, 0x1
/* 8016D7C4 0016A8A4  80 84 00 00 */	lwz r4, 0x0(r4)
/* 8016D7C8 0016A8A8  4B F9 88 4D */	bl say__12zNPCNewsFishFQ212zNPCNewsFish8say_enumi
/* 8016D7CC 0016A8AC  7C 9F F0 2E */	lwzx r4, r31, r30
/* 8016D7D0 0016A8B0  38 A0 00 02 */	li r5, 0x2
/* 8016D7D4 0016A8B4  80 7D 06 9C */	lwz r3, 0x69c(r29)
/* 8016D7D8 0016A8B8  80 84 00 04 */	lwz r4, 0x4(r4)
/* 8016D7DC 0016A8BC  4B F9 88 39 */	bl say__12zNPCNewsFishFQ212zNPCNewsFish8say_enumi
/* 8016D7E0 0016A8C0  48 00 00 28 */	b .L_8016D808
.L_8016D7E4:
/* 8016D7E4 0016A8C4  3C A0 80 27 */	lis r5, "say_set__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016D7E8 0016A8C8  54 80 18 38 */	slwi r0, r4, 3
/* 8016D7EC 0016A8CC  38 85 13 94 */	addi r4, r5, "say_set__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016D7F0 0016A8D0  7C E6 3B 78 */	mr r6, r7
/* 8016D7F4 0016A8D4  7C A4 02 14 */	add r5, r4, r0
/* 8016D7F8 0016A8D8  7C 84 00 2E */	lwzx r4, r4, r0
/* 8016D7FC 0016A8DC  80 A5 00 04 */	lwz r5, 0x4(r5)
/* 8016D800 0016A8E0  38 E0 FF FF */	li r7, -0x1
/* 8016D804 0016A8E4  4B F9 89 19 */	bl say__12zNPCNewsFishFPCQ212zNPCNewsFish8say_enumUlii
.L_8016D808:
/* 8016D808 0016A8E8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016D80C 0016A8EC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016D810 0016A8F0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016D814 0016A8F4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8016D818 0016A8F8  7C 08 03 A6 */	mtlr r0
/* 8016D81C 0016A8FC  38 21 00 20 */	addi r1, r1, 0x20
/* 8016D820 0016A900  4E 80 00 20 */	blr
.endfn say__13zNPCBPlanktonFiib

# zNPCBPlankton::sickum()
.fn sickum__13zNPCBPlanktonFv, global
/* 8016D824 0016A904  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016D828 0016A908  7C 08 02 A6 */	mflr r0
/* 8016D82C 0016A90C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016D830 0016A910  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016D834 0016A914  7C 7F 1B 78 */	mr r31, r3
/* 8016D838 0016A918  80 63 02 28 */	lwz r3, 0x228(r3)
/* 8016D83C 0016A91C  4B F9 FD 89 */	bl GIDOfActive__7xPsycheCFv
/* 8016D840 0016A920  3C 03 B1 B9 */	addis r0, r3, 0xb1b9
/* 8016D844 0016A924  28 00 42 50 */	cmplwi r0, 0x4250
/* 8016D848 0016A928  41 82 00 20 */	beq .L_8016D868
/* 8016D84C 0016A92C  38 00 00 01 */	li r0, 0x1
/* 8016D850 0016A930  3C 60 4E 47 */	lis r3, 0x4e47
/* 8016D854 0016A934  98 1F 02 B7 */	stb r0, 0x2b7(r31)
/* 8016D858 0016A938  38 83 42 50 */	addi r4, r3, 0x4250
/* 8016D85C 0016A93C  38 A0 00 01 */	li r5, 0x1
/* 8016D860 0016A940  80 7F 02 28 */	lwz r3, 0x228(r31)
/* 8016D864 0016A944  4B F9 FE CD */	bl GoalSet__7xPsycheFii
.L_8016D868:
/* 8016D868 0016A948  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016D86C 0016A94C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016D870 0016A950  7C 08 03 A6 */	mtlr r0
/* 8016D874 0016A954  38 21 00 10 */	addi r1, r1, 0x10
/* 8016D878 0016A958  4E 80 00 20 */	blr
.endfn sickum__13zNPCBPlanktonFv

# zNPCBPlankton::here_boy()
.fn here_boy__13zNPCBPlanktonFv, global
/* 8016D87C 0016A95C  38 00 00 00 */	li r0, 0x0
/* 8016D880 0016A960  98 03 02 B7 */	stb r0, 0x2b7(r3)
/* 8016D884 0016A964  4E 80 00 20 */	blr
.endfn here_boy__13zNPCBPlanktonFv

# zNPCBPlankton::follow_player()
.fn follow_player__13zNPCBPlanktonFv, global
/* 8016D888 0016A968  38 80 00 01 */	li r4, 0x1
/* 8016D88C 0016A96C  38 00 00 03 */	li r0, 0x3
/* 8016D890 0016A970  90 83 02 C0 */	stw r4, 0x2c0(r3)
/* 8016D894 0016A974  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016D898 0016A978  D0 03 04 A8 */	stfs f0, 0x4a8(r3)
/* 8016D89C 0016A97C  D0 03 04 A4 */	stfs f0, 0x4a4(r3)
/* 8016D8A0 0016A980  90 03 02 BC */	stw r0, 0x2bc(r3)
/* 8016D8A4 0016A984  4E 80 00 20 */	blr
.endfn follow_player__13zNPCBPlanktonFv

# zNPCBPlankton::follow_camera()
.fn follow_camera__13zNPCBPlanktonFv, global
/* 8016D8A8 0016A988  38 80 00 02 */	li r4, 0x2
/* 8016D8AC 0016A98C  38 00 00 03 */	li r0, 0x3
/* 8016D8B0 0016A990  90 83 02 C0 */	stw r4, 0x2c0(r3)
/* 8016D8B4 0016A994  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016D8B8 0016A998  D0 03 04 A8 */	stfs f0, 0x4a8(r3)
/* 8016D8BC 0016A99C  D0 03 04 A4 */	stfs f0, 0x4a4(r3)
/* 8016D8C0 0016A9A0  90 03 02 BC */	stw r0, 0x2bc(r3)
/* 8016D8C4 0016A9A4  4E 80 00 20 */	blr
.endfn follow_camera__13zNPCBPlanktonFv

# zNPCBPlankton::reset_speed()
.fn reset_speed__13zNPCBPlanktonFv, global
/* 8016D8C8 0016A9A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016D8CC 0016A9AC  7C 08 02 A6 */	mflr r0
/* 8016D8D0 0016A9B0  3C 80 80 33 */	lis r4, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016D8D4 0016A9B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016D8D8 0016A9B8  38 84 A1 A0 */	addi r4, r4, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016D8DC 0016A9BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016D8E0 0016A9C0  7C 7F 1B 78 */	mr r31, r3
/* 8016D8E4 0016A9C4  C0 04 00 18 */	lfs f0, 0x18(r4)
/* 8016D8E8 0016A9C8  D0 03 04 6C */	stfs f0, 0x46c(r3)
/* 8016D8EC 0016A9CC  C0 04 00 1C */	lfs f0, 0x1c(r4)
/* 8016D8F0 0016A9D0  D0 03 04 70 */	stfs f0, 0x470(r3)
/* 8016D8F4 0016A9D4  80 03 02 C4 */	lwz r0, 0x2c4(r3)
/* 8016D8F8 0016A9D8  2C 00 00 00 */	cmpwi r0, 0x0
/* 8016D8FC 0016A9DC  40 82 00 28 */	bne .L_8016D924
/* 8016D900 0016A9E0  38 7F 04 8C */	addi r3, r31, 0x48c
/* 8016D904 0016A9E4  38 84 00 50 */	addi r4, r4, 0x50
/* 8016D908 0016A9E8  4B E9 D9 5D */	bl __as__5xVec3FRC5xVec3
/* 8016D90C 0016A9EC  3C 80 80 33 */	lis r4, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016D910 0016A9F0  38 7F 04 98 */	addi r3, r31, 0x498
/* 8016D914 0016A9F4  38 84 A1 A0 */	addi r4, r4, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016D918 0016A9F8  38 84 00 5C */	addi r4, r4, 0x5c
/* 8016D91C 0016A9FC  4B E9 D9 49 */	bl __as__5xVec3FRC5xVec3
/* 8016D920 0016AA00  48 00 00 24 */	b .L_8016D944
.L_8016D924:
/* 8016D924 0016AA04  38 7F 04 8C */	addi r3, r31, 0x48c
/* 8016D928 0016AA08  38 84 00 70 */	addi r4, r4, 0x70
/* 8016D92C 0016AA0C  4B E9 D9 39 */	bl __as__5xVec3FRC5xVec3
/* 8016D930 0016AA10  3C 80 80 33 */	lis r4, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016D934 0016AA14  38 7F 04 98 */	addi r3, r31, 0x498
/* 8016D938 0016AA18  38 84 A1 A0 */	addi r4, r4, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016D93C 0016AA1C  38 84 00 7C */	addi r4, r4, 0x7c
/* 8016D940 0016AA20  4B E9 D9 25 */	bl __as__5xVec3FRC5xVec3
.L_8016D944:
/* 8016D944 0016AA24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016D948 0016AA28  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016D94C 0016AA2C  7C 08 03 A6 */	mtlr r0
/* 8016D950 0016AA30  38 21 00 10 */	addi r1, r1, 0x10
/* 8016D954 0016AA34  4E 80 00 20 */	blr
.endfn reset_speed__13zNPCBPlanktonFv

# zNPCBPlankton::halt(float)
.fn halt__13zNPCBPlanktonFf, global
/* 8016D958 0016AA38  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8016D95C 0016AA3C  7C 08 02 A6 */	mflr r0
/* 8016D960 0016AA40  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016D964 0016AA44  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8016D968 0016AA48  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8016D96C 0016AA4C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016D970 0016AA50  7C 7F 1B 78 */	mr r31, r3
/* 8016D974 0016AA54  38 00 00 00 */	li r0, 0x0
/* 8016D978 0016AA58  90 03 02 C0 */	stw r0, 0x2c0(r3)
/* 8016D97C 0016AA5C  FF E0 08 90 */	fmr f31, f1
/* 8016D980 0016AA60  80 03 02 BC */	lwz r0, 0x2bc(r3)
/* 8016D984 0016AA64  2C 00 00 03 */	cmpwi r0, 0x3
/* 8016D988 0016AA68  40 82 00 28 */	bne .L_8016D9B0
/* 8016D98C 0016AA6C  48 00 22 2D */	bl location__13zNPCBPlanktonCFv
/* 8016D990 0016AA70  7C 65 1B 78 */	mr r5, r3
/* 8016D994 0016AA74  38 61 00 08 */	addi r3, r1, 0x8
/* 8016D998 0016AA78  38 9F 04 80 */	addi r4, r31, 0x480
/* 8016D99C 0016AA7C  38 DF 04 50 */	addi r6, r31, 0x450
/* 8016D9A0 0016AA80  4B FF E9 29 */	bl "ring_to_world_vel__34@unnamed@zNPCTypeBossPlankton_cpp@FRC5xVec3RC5xVec3RC5xVec3"
/* 8016D9A4 0016AA84  38 7F 04 80 */	addi r3, r31, 0x480
/* 8016D9A8 0016AA88  38 81 00 08 */	addi r4, r1, 0x8
/* 8016D9AC 0016AA8C  4B E9 D8 B9 */	bl __as__5xVec3FRC5xVec3
.L_8016D9B0:
/* 8016D9B0 0016AA90  38 00 00 02 */	li r0, 0x2
/* 8016D9B4 0016AA94  90 1F 02 BC */	stw r0, 0x2bc(r31)
/* 8016D9B8 0016AA98  C0 3F 04 80 */	lfs f1, 0x480(r31)
/* 8016D9BC 0016AA9C  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016D9C0 0016AAA0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016D9C4 0016AAA4  40 80 00 0C */	bge .L_8016D9D0
/* 8016D9C8 0016AAA8  FC 00 F8 90 */	fmr f0, f31
/* 8016D9CC 0016AAAC  48 00 00 08 */	b .L_8016D9D4
.L_8016D9D0:
/* 8016D9D0 0016AAB0  FC 00 F8 50 */	fneg f0, f31
.L_8016D9D4:
/* 8016D9D4 0016AAB4  D0 1F 04 8C */	stfs f0, 0x48c(r31)
/* 8016D9D8 0016AAB8  C0 3F 04 84 */	lfs f1, 0x484(r31)
/* 8016D9DC 0016AABC  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016D9E0 0016AAC0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016D9E4 0016AAC4  40 80 00 0C */	bge .L_8016D9F0
/* 8016D9E8 0016AAC8  FC 00 F8 90 */	fmr f0, f31
/* 8016D9EC 0016AACC  48 00 00 08 */	b .L_8016D9F4
.L_8016D9F0:
/* 8016D9F0 0016AAD0  FC 00 F8 50 */	fneg f0, f31
.L_8016D9F4:
/* 8016D9F4 0016AAD4  D0 1F 04 90 */	stfs f0, 0x490(r31)
/* 8016D9F8 0016AAD8  C0 3F 04 88 */	lfs f1, 0x488(r31)
/* 8016D9FC 0016AADC  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016DA00 0016AAE0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016DA04 0016AAE4  40 80 00 0C */	bge .L_8016DA10
/* 8016DA08 0016AAE8  FC 00 F8 90 */	fmr f0, f31
/* 8016DA0C 0016AAEC  48 00 00 08 */	b .L_8016DA14
.L_8016DA10:
/* 8016DA10 0016AAF0  FC 00 F8 50 */	fneg f0, f31
.L_8016DA14:
/* 8016DA14 0016AAF4  D0 1F 04 94 */	stfs f0, 0x494(r31)
/* 8016DA18 0016AAF8  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 8016DA1C 0016AAFC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8016DA20 0016AB00  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8016DA24 0016AB04  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016DA28 0016AB08  7C 08 03 A6 */	mtlr r0
/* 8016DA2C 0016AB0C  38 21 00 30 */	addi r1, r1, 0x30
/* 8016DA30 0016AB10  4E 80 00 20 */	blr
.endfn halt__13zNPCBPlanktonFf

# zNPCBPlankton::fall(float, float)
.fn fall__13zNPCBPlanktonFff, global
/* 8016DA34 0016AB14  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8016DA38 0016AB18  7C 08 02 A6 */	mflr r0
/* 8016DA3C 0016AB1C  90 01 00 44 */	stw r0, 0x44(r1)
/* 8016DA40 0016AB20  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8016DA44 0016AB24  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 8016DA48 0016AB28  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8016DA4C 0016AB2C  F3 C1 00 28 */	psq_st f30, 0x28(r1), 0, qr0
/* 8016DA50 0016AB30  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016DA54 0016AB34  7C 7F 1B 78 */	mr r31, r3
/* 8016DA58 0016AB38  38 00 00 00 */	li r0, 0x0
/* 8016DA5C 0016AB3C  90 03 02 C0 */	stw r0, 0x2c0(r3)
/* 8016DA60 0016AB40  FF C0 08 90 */	fmr f30, f1
/* 8016DA64 0016AB44  FF E0 10 90 */	fmr f31, f2
/* 8016DA68 0016AB48  80 03 02 BC */	lwz r0, 0x2bc(r3)
/* 8016DA6C 0016AB4C  2C 00 00 03 */	cmpwi r0, 0x3
/* 8016DA70 0016AB50  40 82 00 28 */	bne .L_8016DA98
/* 8016DA74 0016AB54  48 00 21 45 */	bl location__13zNPCBPlanktonCFv
/* 8016DA78 0016AB58  7C 65 1B 78 */	mr r5, r3
/* 8016DA7C 0016AB5C  38 61 00 08 */	addi r3, r1, 0x8
/* 8016DA80 0016AB60  38 9F 04 80 */	addi r4, r31, 0x480
/* 8016DA84 0016AB64  38 DF 04 50 */	addi r6, r31, 0x450
/* 8016DA88 0016AB68  4B FF E8 41 */	bl "ring_to_world_vel__34@unnamed@zNPCTypeBossPlankton_cpp@FRC5xVec3RC5xVec3RC5xVec3"
/* 8016DA8C 0016AB6C  38 7F 04 80 */	addi r3, r31, 0x480
/* 8016DA90 0016AB70  38 81 00 08 */	addi r4, r1, 0x8
/* 8016DA94 0016AB74  4B E9 D7 D1 */	bl __as__5xVec3FRC5xVec3
.L_8016DA98:
/* 8016DA98 0016AB78  38 00 00 01 */	li r0, 0x1
/* 8016DA9C 0016AB7C  FC 20 F0 90 */	fmr f1, f30
/* 8016DAA0 0016AB80  FC 60 F0 90 */	fmr f3, f30
/* 8016DAA4 0016AB84  90 1F 02 BC */	stw r0, 0x2bc(r31)
/* 8016DAA8 0016AB88  FC 40 F0 50 */	fneg f2, f30
/* 8016DAAC 0016AB8C  38 7F 04 8C */	addi r3, r31, 0x48c
/* 8016DAB0 0016AB90  4B E9 D6 3D */	bl assign__5xVec3Ffff
/* 8016DAB4 0016AB94  C0 22 AB 10 */	lfs f1, "@1586"@sda21(r2)
/* 8016DAB8 0016AB98  FC 40 F8 90 */	fmr f2, f31
/* 8016DABC 0016AB9C  38 7F 04 98 */	addi r3, r31, 0x498
/* 8016DAC0 0016ABA0  FC 60 08 90 */	fmr f3, f1
/* 8016DAC4 0016ABA4  4B E9 D6 29 */	bl assign__5xVec3Ffff
/* 8016DAC8 0016ABA8  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8016DACC 0016ABAC  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8016DAD0 0016ABB0  E3 C1 00 28 */	psq_l f30, 0x28(r1), 0, qr0
/* 8016DAD4 0016ABB4  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8016DAD8 0016ABB8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8016DADC 0016ABBC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016DAE0 0016ABC0  7C 08 03 A6 */	mtlr r0
/* 8016DAE4 0016ABC4  38 21 00 40 */	addi r1, r1, 0x40
/* 8016DAE8 0016ABC8  4E 80 00 20 */	blr
.endfn fall__13zNPCBPlanktonFff

# zNPCBPlankton::aim_gun(xAnimPlay*, xQuat*, xVec3*, int)
.fn aim_gun__13zNPCBPlanktonFP9xAnimPlayP5xQuatP5xVec3i, global
/* 8016DAEC 0016ABCC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016DAF0 0016ABD0  7C 08 02 A6 */	mflr r0
/* 8016DAF4 0016ABD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016DAF8 0016ABD8  80 A3 00 0C */	lwz r5, 0xc(r3)
/* 8016DAFC 0016ABDC  88 05 02 B8 */	lbz r0, 0x2b8(r5)
/* 8016DB00 0016ABE0  28 00 00 00 */	cmplwi r0, 0x0
/* 8016DB04 0016ABE4  41 82 00 10 */	beq .L_8016DB14
/* 8016DB08 0016ABE8  38 64 01 50 */	addi r3, r4, 0x150
/* 8016DB0C 0016ABEC  38 85 02 CC */	addi r4, r5, 0x2cc
/* 8016DB10 0016ABF0  4B EA 0B DD */	bl __as__5xQuatFRC5xQuat
.L_8016DB14:
/* 8016DB14 0016ABF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016DB18 0016ABF8  7C 08 03 A6 */	mtlr r0
/* 8016DB1C 0016ABFC  38 21 00 10 */	addi r1, r1, 0x10
/* 8016DB20 0016AC00  4E 80 00 20 */	blr
.endfn aim_gun__13zNPCBPlanktonFP9xAnimPlayP5xQuatP5xVec3i

# zNPCGoalBPlanktonIdle::create(int, RyzMemGrow*, void*)
.fn create__21zNPCGoalBPlanktonIdleFiP10RyzMemGrowPv, global
/* 8016DB24 0016AC04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016DB28 0016AC08  7C 08 02 A6 */	mflr r0
/* 8016DB2C 0016AC0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016DB30 0016AC10  7C 80 23 78 */	mr r0, r4
/* 8016DB34 0016AC14  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016DB38 0016AC18  7C BF 2B 78 */	mr r31, r5
/* 8016DB3C 0016AC1C  7C 05 03 78 */	mr r5, r0
/* 8016DB40 0016AC20  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016DB44 0016AC24  7C 7E 1B 78 */	mr r30, r3
/* 8016DB48 0016AC28  38 60 00 50 */	li r3, 0x50
/* 8016DB4C 0016AC2C  7F C4 F3 78 */	mr r4, r30
/* 8016DB50 0016AC30  4B FA 16 01 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8016DB54 0016AC34  7C 64 1B 79 */	mr. r4, r3
/* 8016DB58 0016AC38  41 82 00 14 */	beq .L_8016DB6C
/* 8016DB5C 0016AC3C  7F C4 F3 78 */	mr r4, r30
/* 8016DB60 0016AC40  7F E5 FB 78 */	mr r5, r31
/* 8016DB64 0016AC44  48 00 21 4D */	bl __ct__21zNPCGoalBPlanktonIdleFiR13zNPCBPlankton
/* 8016DB68 0016AC48  7C 64 1B 78 */	mr r4, r3
.L_8016DB6C:
/* 8016DB6C 0016AC4C  28 04 00 00 */	cmplwi r4, 0x0
/* 8016DB70 0016AC50  41 82 00 08 */	beq .L_8016DB78
/* 8016DB74 0016AC54  38 84 00 0C */	addi r4, r4, 0xc
.L_8016DB78:
/* 8016DB78 0016AC58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016DB7C 0016AC5C  7C 83 23 78 */	mr r3, r4
/* 8016DB80 0016AC60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016DB84 0016AC64  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016DB88 0016AC68  7C 08 03 A6 */	mtlr r0
/* 8016DB8C 0016AC6C  38 21 00 10 */	addi r1, r1, 0x10
/* 8016DB90 0016AC70  4E 80 00 20 */	blr
.endfn create__21zNPCGoalBPlanktonIdleFiP10RyzMemGrowPv

# zNPCGoalBPlanktonIdle::Enter(float, void*)
.fn Enter__21zNPCGoalBPlanktonIdleFfPv, global
/* 8016DB94 0016AC74  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8016DB98 0016AC78  7C 08 02 A6 */	mflr r0
/* 8016DB9C 0016AC7C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016DBA0 0016AC80  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8016DBA4 0016AC84  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8016DBA8 0016AC88  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016DBAC 0016AC8C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016DBB0 0016AC90  7C 7E 1B 78 */	mr r30, r3
/* 8016DBB4 0016AC94  FF E0 08 90 */	fmr f31, f1
/* 8016DBB8 0016AC98  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8016DBBC 0016AC9C  7C 9F 23 78 */	mr r31, r4
/* 8016DBC0 0016ACA0  4B FF F3 4D */	bl reappear__13zNPCBPlanktonFv
/* 8016DBC4 0016ACA4  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016DBC8 0016ACA8  38 00 00 00 */	li r0, 0x0
/* 8016DBCC 0016ACAC  98 03 02 B6 */	stb r0, 0x2b6(r3)
/* 8016DBD0 0016ACB0  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016DBD4 0016ACB4  4B FF DD AD */	bl refresh_orbit__13zNPCBPlanktonFv
/* 8016DBD8 0016ACB8  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016DBDC 0016ACBC  4B FF FC ED */	bl reset_speed__13zNPCBPlanktonFv
/* 8016DBE0 0016ACC0  80 BE 00 4C */	lwz r5, 0x4c(r30)
/* 8016DBE4 0016ACC4  38 00 00 00 */	li r0, 0x0
/* 8016DBE8 0016ACC8  7F C3 F3 78 */	mr r3, r30
/* 8016DBEC 0016ACCC  38 81 00 0C */	addi r4, r1, 0xc
/* 8016DBF0 0016ACD0  90 05 02 C0 */	stw r0, 0x2c0(r5)
/* 8016DBF4 0016ACD4  38 A1 00 08 */	addi r5, r1, 0x8
/* 8016DBF8 0016ACD8  48 00 01 51 */	bl get_yaw__21zNPCGoalBPlanktonIdleCFRfRf
/* 8016DBFC 0016ACDC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8016DC00 0016ACE0  7F C3 F3 78 */	mr r3, r30
/* 8016DC04 0016ACE4  48 00 02 45 */	bl apply_yaw__21zNPCGoalBPlanktonIdleFf
/* 8016DC08 0016ACE8  FC 20 F8 90 */	fmr f1, f31
/* 8016DC0C 0016ACEC  7F C3 F3 78 */	mr r3, r30
/* 8016DC10 0016ACF0  7F E4 FB 78 */	mr r4, r31
/* 8016DC14 0016ACF4  4B F6 75 01 */	bl Enter__14zNPCGoalCommonFfPv
/* 8016DC18 0016ACF8  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 8016DC1C 0016ACFC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8016DC20 0016AD00  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8016DC24 0016AD04  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016DC28 0016AD08  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016DC2C 0016AD0C  7C 08 03 A6 */	mtlr r0
/* 8016DC30 0016AD10  38 21 00 30 */	addi r1, r1, 0x30
/* 8016DC34 0016AD14  4E 80 00 20 */	blr
.endfn Enter__21zNPCGoalBPlanktonIdleFfPv

# zNPCGoalBPlanktonIdle::Exit(float, void*)
.fn Exit__21zNPCGoalBPlanktonIdleFfPv, global
/* 8016DC38 0016AD18  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016DC3C 0016AD1C  7C 08 02 A6 */	mflr r0
/* 8016DC40 0016AD20  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016DC44 0016AD24  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8016DC48 0016AD28  FF E0 08 90 */	fmr f31, f1
/* 8016DC4C 0016AD2C  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8016DC50 0016AD30  7C 9F 23 78 */	mr r31, r4
/* 8016DC54 0016AD34  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8016DC58 0016AD38  7C 7E 1B 78 */	mr r30, r3
/* 8016DC5C 0016AD3C  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8016DC60 0016AD40  4B FF DD 21 */	bl refresh_orbit__13zNPCBPlanktonFv
/* 8016DC64 0016AD44  FC 20 F8 90 */	fmr f1, f31
/* 8016DC68 0016AD48  7F C3 F3 78 */	mr r3, r30
/* 8016DC6C 0016AD4C  7F E4 FB 78 */	mr r4, r31
/* 8016DC70 0016AD50  4B F6 77 AD */	bl Exit__5xGoalFfPv
/* 8016DC74 0016AD54  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016DC78 0016AD58  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8016DC7C 0016AD5C  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8016DC80 0016AD60  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 8016DC84 0016AD64  7C 08 03 A6 */	mtlr r0
/* 8016DC88 0016AD68  38 21 00 20 */	addi r1, r1, 0x20
/* 8016DC8C 0016AD6C  4E 80 00 20 */	blr
.endfn Exit__21zNPCGoalBPlanktonIdleFfPv

# zNPCGoalBPlanktonIdle::Process(en_trantype*, float, void*, xScene*)
.fn Process__21zNPCGoalBPlanktonIdleFP11en_trantypefPvP6xScene, global
/* 8016DC90 0016AD70  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016DC94 0016AD74  7C 08 02 A6 */	mflr r0
/* 8016DC98 0016AD78  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016DC9C 0016AD7C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016DCA0 0016AD80  7C 9F 23 78 */	mr r31, r4
/* 8016DCA4 0016AD84  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016DCA8 0016AD88  7C 7E 1B 78 */	mr r30, r3
/* 8016DCAC 0016AD8C  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8016DCB0 0016AD90  4B FF F5 B1 */	bl crony_attacking__13zNPCBPlanktonCFv
/* 8016DCB4 0016AD94  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8016DCB8 0016AD98  40 82 00 20 */	bne .L_8016DCD8
/* 8016DCBC 0016AD9C  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016DCC0 0016ADA0  48 00 20 3D */	bl take_control__13zNPCBPlanktonFv
/* 8016DCC4 0016ADA4  38 00 00 01 */	li r0, 0x1
/* 8016DCC8 0016ADA8  3C 60 4E 47 */	lis r3, 0x4e47
/* 8016DCCC 0016ADAC  90 1F 00 00 */	stw r0, 0x0(r31)
/* 8016DCD0 0016ADB0  38 63 42 4C */	addi r3, r3, 0x424c
/* 8016DCD4 0016ADB4  48 00 00 5C */	b .L_8016DD30
.L_8016DCD8:
/* 8016DCD8 0016ADB8  7F C3 F3 78 */	mr r3, r30
/* 8016DCDC 0016ADBC  38 81 00 0C */	addi r4, r1, 0xc
/* 8016DCE0 0016ADC0  38 A1 00 08 */	addi r5, r1, 0x8
/* 8016DCE4 0016ADC4  48 00 00 65 */	bl get_yaw__21zNPCGoalBPlanktonIdleCFRfRf
/* 8016DCE8 0016ADC8  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016DCEC 0016ADCC  C0 23 04 A4 */	lfs f1, 0x4a4(r3)
/* 8016DCF0 0016ADD0  C0 03 04 A8 */	lfs f0, 0x4a8(r3)
/* 8016DCF4 0016ADD4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016DCF8 0016ADD8  4C 41 13 82 */	cror eq, gt, eq
/* 8016DCFC 0016ADDC  41 82 00 24 */	beq .L_8016DD20
/* 8016DD00 0016ADE0  C0 01 00 08 */	lfs f0, 0x8(r1)
/* 8016DD04 0016ADE4  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016DD08 0016ADE8  38 63 A1 A0 */	addi r3, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016DD0C 0016ADEC  FC 20 02 10 */	fabs f1, f0
/* 8016DD10 0016ADF0  C0 03 00 3C */	lfs f0, 0x3c(r3)
/* 8016DD14 0016ADF4  FC 20 08 18 */	frsp f1, f1
/* 8016DD18 0016ADF8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016DD1C 0016ADFC  40 81 00 10 */	ble .L_8016DD2C
.L_8016DD20:
/* 8016DD20 0016AE00  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8016DD24 0016AE04  7F C3 F3 78 */	mr r3, r30
/* 8016DD28 0016AE08  48 00 01 21 */	bl apply_yaw__21zNPCGoalBPlanktonIdleFf
.L_8016DD2C:
/* 8016DD2C 0016AE0C  38 60 00 00 */	li r3, 0x0
.L_8016DD30:
/* 8016DD30 0016AE10  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016DD34 0016AE14  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016DD38 0016AE18  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016DD3C 0016AE1C  7C 08 03 A6 */	mtlr r0
/* 8016DD40 0016AE20  38 21 00 20 */	addi r1, r1, 0x20
/* 8016DD44 0016AE24  4E 80 00 20 */	blr
.endfn Process__21zNPCGoalBPlanktonIdleFP11en_trantypefPvP6xScene

# zNPCGoalBPlanktonIdle::get_yaw(float&, float&) const
.fn get_yaw__21zNPCGoalBPlanktonIdleCFRfRf, global
/* 8016DD48 0016AE28  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8016DD4C 0016AE2C  7C 08 02 A6 */	mflr r0
/* 8016DD50 0016AE30  90 01 00 44 */	stw r0, 0x44(r1)
/* 8016DD54 0016AE34  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8016DD58 0016AE38  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 8016DD5C 0016AE3C  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8016DD60 0016AE40  F3 C1 00 28 */	psq_st f30, 0x28(r1), 0, qr0
/* 8016DD64 0016AE44  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016DD68 0016AE48  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016DD6C 0016AE4C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8016DD70 0016AE50  7C 7D 1B 78 */	mr r29, r3
/* 8016DD74 0016AE54  7C 9E 23 78 */	mr r30, r4
/* 8016DD78 0016AE58  7C BF 2B 78 */	mr r31, r5
/* 8016DD7C 0016AE5C  4B FF AD 19 */	bl "get_player_loc__34@unnamed@zNPCTypeBossPlankton_cpp@Fv"
/* 8016DD80 0016AE60  7C 64 1B 78 */	mr r4, r3
/* 8016DD84 0016AE64  80 7D 00 4C */	lwz r3, 0x4c(r29)
/* 8016DD88 0016AE68  48 00 1F AD */	bl get_orbit_yaw__13zNPCBPlanktonCFRC5xVec3
/* 8016DD8C 0016AE6C  FF C0 08 90 */	fmr f30, f1
/* 8016DD90 0016AE70  80 7D 00 4C */	lwz r3, 0x4c(r29)
/* 8016DD94 0016AE74  48 00 1E 25 */	bl location__13zNPCBPlanktonCFv
/* 8016DD98 0016AE78  7C 64 1B 78 */	mr r4, r3
/* 8016DD9C 0016AE7C  80 7D 00 4C */	lwz r3, 0x4c(r29)
/* 8016DDA0 0016AE80  48 00 1F 95 */	bl get_orbit_yaw__13zNPCBPlanktonCFRC5xVec3
/* 8016DDA4 0016AE84  FF E0 08 90 */	fmr f31, f1
/* 8016DDA8 0016AE88  C0 22 AB B0 */	lfs f1, "@2165"@sda21(r2)
/* 8016DDAC 0016AE8C  EC 1F F0 28 */	fsubs f0, f31, f30
/* 8016DDB0 0016AE90  EC 21 00 2A */	fadds f1, f1, f0
/* 8016DDB4 0016AE94  4B EA 0A 41 */	bl xrmod__Ff
/* 8016DDB8 0016AE98  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016DDBC 0016AE9C  C0 02 AB B0 */	lfs f0, "@2165"@sda21(r2)
/* 8016DDC0 0016AEA0  38 63 A1 A0 */	addi r3, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016DDC4 0016AEA4  C0 43 00 6C */	lfs f2, 0x6c(r3)
/* 8016DDC8 0016AEA8  EC 21 00 28 */	fsubs f1, f1, f0
/* 8016DDCC 0016AEAC  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 8016DDD0 0016AEB0  EC 02 00 2A */	fadds f0, f2, f0
/* 8016DDD4 0016AEB4  D0 1E 00 00 */	stfs f0, 0x0(r30)
/* 8016DDD8 0016AEB8  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016DDDC 0016AEBC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016DDE0 0016AEC0  40 80 00 10 */	bge .L_8016DDF0
/* 8016DDE4 0016AEC4  C0 1E 00 00 */	lfs f0, 0x0(r30)
/* 8016DDE8 0016AEC8  FC 00 00 50 */	fneg f0, f0
/* 8016DDEC 0016AECC  D0 1E 00 00 */	stfs f0, 0x0(r30)
.L_8016DDF0:
/* 8016DDF0 0016AED0  C0 1E 00 00 */	lfs f0, 0x0(r30)
/* 8016DDF4 0016AED4  EC 00 F0 2A */	fadds f0, f0, f30
/* 8016DDF8 0016AED8  D0 1E 00 00 */	stfs f0, 0x0(r30)
/* 8016DDFC 0016AEDC  C0 1E 00 00 */	lfs f0, 0x0(r30)
/* 8016DE00 0016AEE0  C0 22 AB B0 */	lfs f1, "@2165"@sda21(r2)
/* 8016DE04 0016AEE4  EC 00 F8 28 */	fsubs f0, f0, f31
/* 8016DE08 0016AEE8  EC 21 00 2A */	fadds f1, f1, f0
/* 8016DE0C 0016AEEC  4B EA 09 E9 */	bl xrmod__Ff
/* 8016DE10 0016AEF0  C0 02 AB B0 */	lfs f0, "@2165"@sda21(r2)
/* 8016DE14 0016AEF4  EC 01 00 28 */	fsubs f0, f1, f0
/* 8016DE18 0016AEF8  D0 1F 00 00 */	stfs f0, 0x0(r31)
/* 8016DE1C 0016AEFC  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8016DE20 0016AF00  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8016DE24 0016AF04  E3 C1 00 28 */	psq_l f30, 0x28(r1), 0, qr0
/* 8016DE28 0016AF08  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8016DE2C 0016AF0C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016DE30 0016AF10  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016DE34 0016AF14  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8016DE38 0016AF18  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8016DE3C 0016AF1C  7C 08 03 A6 */	mtlr r0
/* 8016DE40 0016AF20  38 21 00 40 */	addi r1, r1, 0x40
/* 8016DE44 0016AF24  4E 80 00 20 */	blr
.endfn get_yaw__21zNPCGoalBPlanktonIdleCFRfRf

# zNPCGoalBPlanktonIdle::apply_yaw(float)
.fn apply_yaw__21zNPCGoalBPlanktonIdleFf, global
/* 8016DE48 0016AF28  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8016DE4C 0016AF2C  7C 08 02 A6 */	mflr r0
/* 8016DE50 0016AF30  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016DE54 0016AF34  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8016DE58 0016AF38  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8016DE5C 0016AF3C  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 8016DE60 0016AF40  F3 C1 00 18 */	psq_st f30, 0x18(r1), 0, qr0
/* 8016DE64 0016AF44  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016DE68 0016AF48  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016DE6C 0016AF4C  7C 7E 1B 78 */	mr r30, r3
/* 8016DE70 0016AF50  FF C0 08 90 */	fmr f30, f1
/* 8016DE74 0016AF54  4B EC 2E 15 */	bl xurand__Fv
/* 8016DE78 0016AF58  C0 42 AB 64 */	lfs f2, "@1901"@sda21(r2)
/* 8016DE7C 0016AF5C  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016DE80 0016AF60  C0 02 AB 0C */	lfs f0, "@1585"@sda21(r2)
/* 8016DE84 0016AF64  38 63 A1 A0 */	addi r3, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016DE88 0016AF68  80 9E 00 4C */	lwz r4, 0x4c(r30)
/* 8016DE8C 0016AF6C  EC 22 00 78 */	fmsubs f1, f2, f1, f0
/* 8016DE90 0016AF70  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 8016DE94 0016AF74  38 64 04 74 */	addi r3, r4, 0x474
/* 8016DE98 0016AF78  38 84 04 50 */	addi r4, r4, 0x450
/* 8016DE9C 0016AF7C  EC 00 00 72 */	fmuls f0, f0, f1
/* 8016DEA0 0016AF80  EF FE 00 2A */	fadds f31, f30, f0
/* 8016DEA4 0016AF84  4B E9 D3 C1 */	bl __as__5xVec3FRC5xVec3
/* 8016DEA8 0016AF88  FC 20 F8 90 */	fmr f1, f31
/* 8016DEAC 0016AF8C  83 FE 00 4C */	lwz r31, 0x4c(r30)
/* 8016DEB0 0016AF90  4B F5 6F 9D */	bl isin__Ff
/* 8016DEB4 0016AF94  C0 5F 04 5C */	lfs f2, 0x45c(r31)
/* 8016DEB8 0016AF98  C0 1F 04 74 */	lfs f0, 0x474(r31)
/* 8016DEBC 0016AF9C  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8016DEC0 0016AFA0  FC 20 F8 90 */	fmr f1, f31
/* 8016DEC4 0016AFA4  D0 1F 04 74 */	stfs f0, 0x474(r31)
/* 8016DEC8 0016AFA8  83 FE 00 4C */	lwz r31, 0x4c(r30)
/* 8016DECC 0016AFAC  4B F5 6F C5 */	bl icos__Ff
/* 8016DED0 0016AFB0  C0 5F 04 5C */	lfs f2, 0x45c(r31)
/* 8016DED4 0016AFB4  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016DED8 0016AFB8  C0 1F 04 7C */	lfs f0, 0x47c(r31)
/* 8016DEDC 0016AFBC  38 63 A1 A0 */	addi r3, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016DEE0 0016AFC0  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8016DEE4 0016AFC4  D0 1F 04 7C */	stfs f0, 0x47c(r31)
/* 8016DEE8 0016AFC8  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016DEEC 0016AFCC  80 9E 00 4C */	lwz r4, 0x4c(r30)
/* 8016DEF0 0016AFD0  D0 04 04 A4 */	stfs f0, 0x4a4(r4)
/* 8016DEF4 0016AFD4  C3 E3 00 40 */	lfs f31, 0x40(r3)
/* 8016DEF8 0016AFD8  C3 C3 00 44 */	lfs f30, 0x44(r3)
/* 8016DEFC 0016AFDC  4B EC 2D 8D */	bl xurand__Fv
/* 8016DF00 0016AFE0  EC 1E F8 28 */	fsubs f0, f30, f31
/* 8016DF04 0016AFE4  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016DF08 0016AFE8  EC 00 F8 7A */	fmadds f0, f0, f1, f31
/* 8016DF0C 0016AFEC  D0 03 04 A8 */	stfs f0, 0x4a8(r3)
/* 8016DF10 0016AFF0  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 8016DF14 0016AFF4  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8016DF18 0016AFF8  E3 C1 00 18 */	psq_l f30, 0x18(r1), 0, qr0
/* 8016DF1C 0016AFFC  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 8016DF20 0016B000  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016DF24 0016B004  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8016DF28 0016B008  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016DF2C 0016B00C  7C 08 03 A6 */	mtlr r0
/* 8016DF30 0016B010  38 21 00 30 */	addi r1, r1, 0x30
/* 8016DF34 0016B014  4E 80 00 20 */	blr
.endfn apply_yaw__21zNPCGoalBPlanktonIdleFf

# zNPCGoalBPlanktonAttack::create(int, RyzMemGrow*, void*)
.fn create__23zNPCGoalBPlanktonAttackFiP10RyzMemGrowPv, global
/* 8016DF38 0016B018  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016DF3C 0016B01C  7C 08 02 A6 */	mflr r0
/* 8016DF40 0016B020  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016DF44 0016B024  7C 80 23 78 */	mr r0, r4
/* 8016DF48 0016B028  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016DF4C 0016B02C  7C BF 2B 78 */	mr r31, r5
/* 8016DF50 0016B030  7C 05 03 78 */	mr r5, r0
/* 8016DF54 0016B034  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016DF58 0016B038  7C 7E 1B 78 */	mr r30, r3
/* 8016DF5C 0016B03C  38 60 00 50 */	li r3, 0x50
/* 8016DF60 0016B040  7F C4 F3 78 */	mr r4, r30
/* 8016DF64 0016B044  4B FA 11 ED */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8016DF68 0016B048  7C 64 1B 79 */	mr. r4, r3
/* 8016DF6C 0016B04C  41 82 00 14 */	beq .L_8016DF80
/* 8016DF70 0016B050  7F C4 F3 78 */	mr r4, r30
/* 8016DF74 0016B054  7F E5 FB 78 */	mr r5, r31
/* 8016DF78 0016B058  48 00 1D F5 */	bl __ct__23zNPCGoalBPlanktonAttackFiR13zNPCBPlankton
/* 8016DF7C 0016B05C  7C 64 1B 78 */	mr r4, r3
.L_8016DF80:
/* 8016DF80 0016B060  28 04 00 00 */	cmplwi r4, 0x0
/* 8016DF84 0016B064  41 82 00 08 */	beq .L_8016DF8C
/* 8016DF88 0016B068  38 84 00 0C */	addi r4, r4, 0xc
.L_8016DF8C:
/* 8016DF8C 0016B06C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016DF90 0016B070  7C 83 23 78 */	mr r3, r4
/* 8016DF94 0016B074  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016DF98 0016B078  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016DF9C 0016B07C  7C 08 03 A6 */	mtlr r0
/* 8016DFA0 0016B080  38 21 00 10 */	addi r1, r1, 0x10
/* 8016DFA4 0016B084  4E 80 00 20 */	blr
.endfn create__23zNPCGoalBPlanktonAttackFiP10RyzMemGrowPv

# zNPCGoalBPlanktonAttack::Enter(float, void*)
.fn Enter__23zNPCGoalBPlanktonAttackFfPv, global
/* 8016DFA8 0016B088  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016DFAC 0016B08C  7C 08 02 A6 */	mflr r0
/* 8016DFB0 0016B090  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016DFB4 0016B094  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8016DFB8 0016B098  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8016DFBC 0016B09C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016DFC0 0016B0A0  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016DFC4 0016B0A4  7C 7E 1B 78 */	mr r30, r3
/* 8016DFC8 0016B0A8  FF E0 08 90 */	fmr f31, f1
/* 8016DFCC 0016B0AC  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8016DFD0 0016B0B0  7C 9F 23 78 */	mr r31, r4
/* 8016DFD4 0016B0B4  4B FF EF 39 */	bl reappear__13zNPCBPlanktonFv
/* 8016DFD8 0016B0B8  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016DFDC 0016B0BC  38 00 00 01 */	li r0, 0x1
/* 8016DFE0 0016B0C0  98 03 02 B6 */	stb r0, 0x2b6(r3)
/* 8016DFE4 0016B0C4  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016DFE8 0016B0C8  4B FF D9 99 */	bl refresh_orbit__13zNPCBPlanktonFv
/* 8016DFEC 0016B0CC  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016DFF0 0016B0D0  4B FF F8 99 */	bl follow_player__13zNPCBPlanktonFv
/* 8016DFF4 0016B0D4  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016DFF8 0016B0D8  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016DFFC 0016B0DC  D0 03 02 C8 */	stfs f0, 0x2c8(r3)
/* 8016E000 0016B0E0  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016E004 0016B0E4  48 00 1B C5 */	bl face_player__13zNPCBPlanktonFv
/* 8016E008 0016B0E8  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016E00C 0016B0EC  4B FF F8 BD */	bl reset_speed__13zNPCBPlanktonFv
/* 8016E010 0016B0F0  FC 20 F8 90 */	fmr f1, f31
/* 8016E014 0016B0F4  7F C3 F3 78 */	mr r3, r30
/* 8016E018 0016B0F8  7F E4 FB 78 */	mr r4, r31
/* 8016E01C 0016B0FC  4B F6 70 F9 */	bl Enter__14zNPCGoalCommonFfPv
/* 8016E020 0016B100  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8016E024 0016B104  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016E028 0016B108  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8016E02C 0016B10C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016E030 0016B110  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016E034 0016B114  7C 08 03 A6 */	mtlr r0
/* 8016E038 0016B118  38 21 00 20 */	addi r1, r1, 0x20
/* 8016E03C 0016B11C  4E 80 00 20 */	blr
.endfn Enter__23zNPCGoalBPlanktonAttackFfPv

# zNPCGoalBPlanktonAttack::Exit(float, void*)
.fn Exit__23zNPCGoalBPlanktonAttackFfPv, global
/* 8016E040 0016B120  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016E044 0016B124  7C 08 02 A6 */	mflr r0
/* 8016E048 0016B128  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016E04C 0016B12C  4B F6 73 D1 */	bl Exit__5xGoalFfPv
/* 8016E050 0016B130  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016E054 0016B134  7C 08 03 A6 */	mtlr r0
/* 8016E058 0016B138  38 21 00 10 */	addi r1, r1, 0x10
/* 8016E05C 0016B13C  4E 80 00 20 */	blr
.endfn Exit__23zNPCGoalBPlanktonAttackFfPv

# zNPCGoalBPlanktonAttack::Process(en_trantype*, float, void*, xScene*)
.fn Process__23zNPCGoalBPlanktonAttackFP11en_trantypefPvP6xScene, global
/* 8016E060 0016B140  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016E064 0016B144  7C 08 02 A6 */	mflr r0
/* 8016E068 0016B148  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016E06C 0016B14C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016E070 0016B150  7C 9F 23 78 */	mr r31, r4
/* 8016E074 0016B154  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016E078 0016B158  7C 7E 1B 78 */	mr r30, r3
/* 8016E07C 0016B15C  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8016E080 0016B160  4B FF F1 E1 */	bl crony_attacking__13zNPCBPlanktonCFv
/* 8016E084 0016B164  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8016E088 0016B168  41 82 00 18 */	beq .L_8016E0A0
/* 8016E08C 0016B16C  38 00 00 01 */	li r0, 0x1
/* 8016E090 0016B170  3C 60 4E 47 */	lis r3, 0x4e47
/* 8016E094 0016B174  90 1F 00 00 */	stw r0, 0x0(r31)
/* 8016E098 0016B178  38 63 42 4B */	addi r3, r3, 0x424b
/* 8016E09C 0016B17C  48 00 00 44 */	b .L_8016E0E0
.L_8016E0A0:
/* 8016E0A0 0016B180  80 9E 00 4C */	lwz r4, 0x4c(r30)
/* 8016E0A4 0016B184  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016E0A8 0016B188  38 63 A1 A0 */	addi r3, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016E0AC 0016B18C  C0 24 02 C8 */	lfs f1, 0x2c8(r4)
/* 8016E0B0 0016B190  C0 03 00 30 */	lfs f0, 0x30(r3)
/* 8016E0B4 0016B194  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016E0B8 0016B198  4C 41 13 82 */	cror eq, gt, eq
/* 8016E0BC 0016B19C  40 82 00 20 */	bne .L_8016E0DC
/* 8016E0C0 0016B1A0  C0 03 00 A8 */	lfs f0, 0xa8(r3)
/* 8016E0C4 0016B1A4  3C 60 4E 47 */	lis r3, 0x4e47
/* 8016E0C8 0016B1A8  38 00 00 01 */	li r0, 0x1
/* 8016E0CC 0016B1AC  D0 04 02 E0 */	stfs f0, 0x2e0(r4)
/* 8016E0D0 0016B1B0  38 63 42 56 */	addi r3, r3, 0x4256
/* 8016E0D4 0016B1B4  90 1F 00 00 */	stw r0, 0x0(r31)
/* 8016E0D8 0016B1B8  48 00 00 08 */	b .L_8016E0E0
.L_8016E0DC:
/* 8016E0DC 0016B1BC  38 60 00 00 */	li r3, 0x0
.L_8016E0E0:
/* 8016E0E0 0016B1C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016E0E4 0016B1C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016E0E8 0016B1C8  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016E0EC 0016B1CC  7C 08 03 A6 */	mtlr r0
/* 8016E0F0 0016B1D0  38 21 00 10 */	addi r1, r1, 0x10
/* 8016E0F4 0016B1D4  4E 80 00 20 */	blr
.endfn Process__23zNPCGoalBPlanktonAttackFP11en_trantypefPvP6xScene

# zNPCGoalBPlanktonAmbush::create(int, RyzMemGrow*, void*)
.fn create__23zNPCGoalBPlanktonAmbushFiP10RyzMemGrowPv, global
/* 8016E0F8 0016B1D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016E0FC 0016B1DC  7C 08 02 A6 */	mflr r0
/* 8016E100 0016B1E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016E104 0016B1E4  7C 80 23 78 */	mr r0, r4
/* 8016E108 0016B1E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016E10C 0016B1EC  7C BF 2B 78 */	mr r31, r5
/* 8016E110 0016B1F0  7C 05 03 78 */	mr r5, r0
/* 8016E114 0016B1F4  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016E118 0016B1F8  7C 7E 1B 78 */	mr r30, r3
/* 8016E11C 0016B1FC  38 60 00 50 */	li r3, 0x50
/* 8016E120 0016B200  7F C4 F3 78 */	mr r4, r30
/* 8016E124 0016B204  4B FA 10 2D */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8016E128 0016B208  7C 64 1B 79 */	mr. r4, r3
/* 8016E12C 0016B20C  41 82 00 14 */	beq .L_8016E140
/* 8016E130 0016B210  7F C4 F3 78 */	mr r4, r30
/* 8016E134 0016B214  7F E5 FB 78 */	mr r5, r31
/* 8016E138 0016B218  48 00 1C 81 */	bl __ct__23zNPCGoalBPlanktonAmbushFiR13zNPCBPlankton
/* 8016E13C 0016B21C  7C 64 1B 78 */	mr r4, r3
.L_8016E140:
/* 8016E140 0016B220  28 04 00 00 */	cmplwi r4, 0x0
/* 8016E144 0016B224  41 82 00 08 */	beq .L_8016E14C
/* 8016E148 0016B228  38 84 00 0C */	addi r4, r4, 0xc
.L_8016E14C:
/* 8016E14C 0016B22C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016E150 0016B230  7C 83 23 78 */	mr r3, r4
/* 8016E154 0016B234  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016E158 0016B238  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016E15C 0016B23C  7C 08 03 A6 */	mtlr r0
/* 8016E160 0016B240  38 21 00 10 */	addi r1, r1, 0x10
/* 8016E164 0016B244  4E 80 00 20 */	blr
.endfn create__23zNPCGoalBPlanktonAmbushFiP10RyzMemGrowPv

# zNPCGoalBPlanktonAmbush::Enter(float, void*)
.fn Enter__23zNPCGoalBPlanktonAmbushFfPv, global
/* 8016E168 0016B248  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8016E16C 0016B24C  7C 08 02 A6 */	mflr r0
/* 8016E170 0016B250  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016E174 0016B254  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8016E178 0016B258  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8016E17C 0016B25C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016E180 0016B260  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016E184 0016B264  7C 7E 1B 78 */	mr r30, r3
/* 8016E188 0016B268  3C 60 80 2A */	lis r3, g_hash_bossanim@ha
/* 8016E18C 0016B26C  80 DE 00 4C */	lwz r6, 0x4c(r30)
/* 8016E190 0016B270  38 00 00 00 */	li r0, 0x0
/* 8016E194 0016B274  FF E0 08 90 */	fmr f31, f1
/* 8016E198 0016B278  38 A3 92 68 */	addi r5, r3, g_hash_bossanim@l
/* 8016E19C 0016B27C  98 06 02 B6 */	stb r0, 0x2b6(r6)
/* 8016E1A0 0016B280  7C 9F 23 78 */	mr r31, r4
/* 8016E1A4 0016B284  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016E1A8 0016B288  80 85 00 04 */	lwz r4, 0x4(r5)
/* 8016E1AC 0016B28C  C0 22 AB 10 */	lfs f1, "@1586"@sda21(r2)
/* 8016E1B0 0016B290  4B F8 4C F5 */	bl AnimSetState__10zNPCCommonFUif
/* 8016E1B4 0016B294  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016E1B8 0016B298  4B FF D7 C9 */	bl refresh_orbit__13zNPCBPlanktonFv
/* 8016E1BC 0016B29C  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016E1C0 0016B2A0  C0 22 AB CC */	lfs f1, "@2516"@sda21(r2)
/* 8016E1C4 0016B2A4  4B FF F7 95 */	bl halt__13zNPCBPlanktonFf
/* 8016E1C8 0016B2A8  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016E1CC 0016B2AC  4B FF EC E9 */	bl vanish__13zNPCBPlanktonFv
/* 8016E1D0 0016B2B0  4B FF A8 C5 */	bl "get_player_loc__34@unnamed@zNPCTypeBossPlankton_cpp@Fv"
/* 8016E1D4 0016B2B4  80 9E 00 4C */	lwz r4, 0x4c(r30)
/* 8016E1D8 0016B2B8  7C 65 1B 78 */	mr r5, r3
/* 8016E1DC 0016B2BC  C0 22 AB 10 */	lfs f1, "@1586"@sda21(r2)
/* 8016E1E0 0016B2C0  38 61 00 08 */	addi r3, r1, 0x8
/* 8016E1E4 0016B2C4  C0 42 AB D0 */	lfs f2, "@2856"@sda21(r2)
/* 8016E1E8 0016B2C8  4B FF ED 8D */	bl random_orbit__13zNPCBPlanktonCFRC5xVec3ff
/* 8016E1EC 0016B2CC  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016E1F0 0016B2D0  38 81 00 08 */	addi r4, r1, 0x8
/* 8016E1F4 0016B2D4  48 00 1C 11 */	bl set_location__13zNPCBPlanktonFRC5xVec3
/* 8016E1F8 0016B2D8  FC 20 F8 90 */	fmr f1, f31
/* 8016E1FC 0016B2DC  7F C3 F3 78 */	mr r3, r30
/* 8016E200 0016B2E0  7F E4 FB 78 */	mr r4, r31
/* 8016E204 0016B2E4  4B F6 6F 11 */	bl Enter__14zNPCGoalCommonFfPv
/* 8016E208 0016B2E8  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 8016E20C 0016B2EC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8016E210 0016B2F0  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8016E214 0016B2F4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016E218 0016B2F8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016E21C 0016B2FC  7C 08 03 A6 */	mtlr r0
/* 8016E220 0016B300  38 21 00 30 */	addi r1, r1, 0x30
/* 8016E224 0016B304  4E 80 00 20 */	blr
.endfn Enter__23zNPCGoalBPlanktonAmbushFfPv

# zNPCGoalBPlanktonAmbush::Exit(float, void*)
.fn Exit__23zNPCGoalBPlanktonAmbushFfPv, global
/* 8016E228 0016B308  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016E22C 0016B30C  7C 08 02 A6 */	mflr r0
/* 8016E230 0016B310  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016E234 0016B314  4B F6 71 E9 */	bl Exit__5xGoalFfPv
/* 8016E238 0016B318  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016E23C 0016B31C  7C 08 03 A6 */	mtlr r0
/* 8016E240 0016B320  38 21 00 10 */	addi r1, r1, 0x10
/* 8016E244 0016B324  4E 80 00 20 */	blr
.endfn Exit__23zNPCGoalBPlanktonAmbushFfPv

# zNPCGoalBPlanktonAmbush::Process(en_trantype*, float, void*, xScene*)
.fn Process__23zNPCGoalBPlanktonAmbushFP11en_trantypefPvP6xScene, global
/* 8016E248 0016B328  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8016E24C 0016B32C  7C 08 02 A6 */	mflr r0
/* 8016E250 0016B330  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016E254 0016B334  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8016E258 0016B338  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8016E25C 0016B33C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016E260 0016B340  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016E264 0016B344  7C 7E 1B 78 */	mr r30, r3
/* 8016E268 0016B348  FF E0 08 90 */	fmr f31, f1
/* 8016E26C 0016B34C  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8016E270 0016B350  7C 9F 23 78 */	mr r31, r4
/* 8016E274 0016B354  4B FF F3 C5 */	bl have_cronies__13zNPCBPlanktonCFv
/* 8016E278 0016B358  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8016E27C 0016B35C  41 82 00 28 */	beq .L_8016E2A4
/* 8016E280 0016B360  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016E284 0016B364  4B FF F1 BD */	bl cronies_dead__13zNPCBPlanktonCFv
/* 8016E288 0016B368  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8016E28C 0016B36C  41 82 00 90 */	beq .L_8016E31C
/* 8016E290 0016B370  38 00 00 01 */	li r0, 0x1
/* 8016E294 0016B374  3C 60 4E 47 */	lis r3, 0x4e47
/* 8016E298 0016B378  90 1F 00 00 */	stw r0, 0x0(r31)
/* 8016E29C 0016B37C  38 63 42 4E */	addi r3, r3, 0x424e
/* 8016E2A0 0016B380  48 00 00 80 */	b .L_8016E320
.L_8016E2A4:
/* 8016E2A4 0016B384  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016E2A8 0016B388  C0 03 02 DC */	lfs f0, 0x2dc(r3)
/* 8016E2AC 0016B38C  EC 00 F8 28 */	fsubs f0, f0, f31
/* 8016E2B0 0016B390  D0 03 02 DC */	stfs f0, 0x2dc(r3)
/* 8016E2B4 0016B394  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016E2B8 0016B398  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016E2BC 0016B39C  C0 23 02 DC */	lfs f1, 0x2dc(r3)
/* 8016E2C0 0016B3A0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016E2C4 0016B3A4  4C 40 13 82 */	cror eq, lt, eq
/* 8016E2C8 0016B3A8  40 82 00 54 */	bne .L_8016E31C
/* 8016E2CC 0016B3AC  4B FF F3 8D */	bl move_to_player_territory__13zNPCBPlanktonFv
/* 8016E2D0 0016B3B0  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8016E2D4 0016B3B4  41 82 00 48 */	beq .L_8016E31C
/* 8016E2D8 0016B3B8  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016E2DC 0016B3BC  4B FF D6 A5 */	bl refresh_orbit__13zNPCBPlanktonFv
/* 8016E2E0 0016B3C0  4B FF A7 B5 */	bl "get_player_loc__34@unnamed@zNPCTypeBossPlankton_cpp@Fv"
/* 8016E2E4 0016B3C4  80 9E 00 4C */	lwz r4, 0x4c(r30)
/* 8016E2E8 0016B3C8  7C 65 1B 78 */	mr r5, r3
/* 8016E2EC 0016B3CC  C0 22 AB 10 */	lfs f1, "@1586"@sda21(r2)
/* 8016E2F0 0016B3D0  38 61 00 08 */	addi r3, r1, 0x8
/* 8016E2F4 0016B3D4  C0 42 AB D0 */	lfs f2, "@2856"@sda21(r2)
/* 8016E2F8 0016B3D8  4B FF EC 7D */	bl random_orbit__13zNPCBPlanktonCFRC5xVec3ff
/* 8016E2FC 0016B3DC  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016E300 0016B3E0  38 81 00 08 */	addi r4, r1, 0x8
/* 8016E304 0016B3E4  48 00 1B 01 */	bl set_location__13zNPCBPlanktonFRC5xVec3
/* 8016E308 0016B3E8  38 00 00 01 */	li r0, 0x1
/* 8016E30C 0016B3EC  3C 60 4E 47 */	lis r3, 0x4e47
/* 8016E310 0016B3F0  90 1F 00 00 */	stw r0, 0x0(r31)
/* 8016E314 0016B3F4  38 63 42 4E */	addi r3, r3, 0x424e
/* 8016E318 0016B3F8  48 00 00 08 */	b .L_8016E320
.L_8016E31C:
/* 8016E31C 0016B3FC  38 60 00 00 */	li r3, 0x0
.L_8016E320:
/* 8016E320 0016B400  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 8016E324 0016B404  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8016E328 0016B408  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8016E32C 0016B40C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016E330 0016B410  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016E334 0016B414  7C 08 03 A6 */	mtlr r0
/* 8016E338 0016B418  38 21 00 30 */	addi r1, r1, 0x30
/* 8016E33C 0016B41C  4E 80 00 20 */	blr
.endfn Process__23zNPCGoalBPlanktonAmbushFP11en_trantypefPvP6xScene

# zNPCGoalBPlanktonFlank::create(int, RyzMemGrow*, void*)
.fn create__22zNPCGoalBPlanktonFlankFiP10RyzMemGrowPv, global
/* 8016E340 0016B420  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016E344 0016B424  7C 08 02 A6 */	mflr r0
/* 8016E348 0016B428  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016E34C 0016B42C  7C 80 23 78 */	mr r0, r4
/* 8016E350 0016B430  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016E354 0016B434  7C BF 2B 78 */	mr r31, r5
/* 8016E358 0016B438  7C 05 03 78 */	mr r5, r0
/* 8016E35C 0016B43C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016E360 0016B440  7C 7E 1B 78 */	mr r30, r3
/* 8016E364 0016B444  38 60 00 54 */	li r3, 0x54
/* 8016E368 0016B448  7F C4 F3 78 */	mr r4, r30
/* 8016E36C 0016B44C  4B FA 0D E5 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8016E370 0016B450  7C 64 1B 79 */	mr. r4, r3
/* 8016E374 0016B454  41 82 00 14 */	beq .L_8016E388
/* 8016E378 0016B458  7F C4 F3 78 */	mr r4, r30
/* 8016E37C 0016B45C  7F E5 FB 78 */	mr r5, r31
/* 8016E380 0016B460  48 00 1A CD */	bl __ct__22zNPCGoalBPlanktonFlankFiR13zNPCBPlankton
/* 8016E384 0016B464  7C 64 1B 78 */	mr r4, r3
.L_8016E388:
/* 8016E388 0016B468  28 04 00 00 */	cmplwi r4, 0x0
/* 8016E38C 0016B46C  41 82 00 08 */	beq .L_8016E394
/* 8016E390 0016B470  38 84 00 0C */	addi r4, r4, 0xc
.L_8016E394:
/* 8016E394 0016B474  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016E398 0016B478  7C 83 23 78 */	mr r3, r4
/* 8016E39C 0016B47C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016E3A0 0016B480  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016E3A4 0016B484  7C 08 03 A6 */	mtlr r0
/* 8016E3A8 0016B488  38 21 00 10 */	addi r1, r1, 0x10
/* 8016E3AC 0016B48C  4E 80 00 20 */	blr
.endfn create__22zNPCGoalBPlanktonFlankFiP10RyzMemGrowPv

# zNPCGoalBPlanktonFlank::Enter(float, void*)
.fn Enter__22zNPCGoalBPlanktonFlankFfPv, global
/* 8016E3B0 0016B490  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8016E3B4 0016B494  7C 08 02 A6 */	mflr r0
/* 8016E3B8 0016B498  90 01 00 54 */	stw r0, 0x54(r1)
/* 8016E3BC 0016B49C  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8016E3C0 0016B4A0  F3 E1 00 48 */	psq_st f31, 0x48(r1), 0, qr0
/* 8016E3C4 0016B4A4  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8016E3C8 0016B4A8  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8016E3CC 0016B4AC  7C 7E 1B 78 */	mr r30, r3
/* 8016E3D0 0016B4B0  FF E0 08 90 */	fmr f31, f1
/* 8016E3D4 0016B4B4  80 63 00 50 */	lwz r3, 0x50(r3)
/* 8016E3D8 0016B4B8  7C 9F 23 78 */	mr r31, r4
/* 8016E3DC 0016B4BC  4B FF EB 31 */	bl reappear__13zNPCBPlanktonFv
/* 8016E3E0 0016B4C0  80 BE 00 50 */	lwz r5, 0x50(r30)
/* 8016E3E4 0016B4C4  38 00 00 01 */	li r0, 0x1
/* 8016E3E8 0016B4C8  3C 80 80 3C */	lis r4, globals@ha
/* 8016E3EC 0016B4CC  38 61 00 14 */	addi r3, r1, 0x14
/* 8016E3F0 0016B4D0  98 05 02 B6 */	stb r0, 0x2b6(r5)
/* 8016E3F4 0016B4D4  38 84 05 58 */	addi r4, r4, globals@l
/* 8016E3F8 0016B4D8  38 84 00 34 */	addi r4, r4, 0x34
/* 8016E3FC 0016B4DC  80 BE 00 50 */	lwz r5, 0x50(r30)
/* 8016E400 0016B4E0  C0 25 04 5C */	lfs f1, 0x45c(r5)
/* 8016E404 0016B4E4  4B E9 CD 1D */	bl __ml__5xVec3CFf
/* 8016E408 0016B4E8  80 9E 00 50 */	lwz r4, 0x50(r30)
/* 8016E40C 0016B4EC  38 61 00 20 */	addi r3, r1, 0x20
/* 8016E410 0016B4F0  38 A1 00 14 */	addi r5, r1, 0x14
/* 8016E414 0016B4F4  38 84 04 50 */	addi r4, r4, 0x450
/* 8016E418 0016B4F8  4B EA 6F C9 */	bl __pl__5xVec3CFRC5xVec3
/* 8016E41C 0016B4FC  80 81 00 20 */	lwz r4, 0x20(r1)
/* 8016E420 0016B500  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016E424 0016B504  80 E1 00 24 */	lwz r7, 0x24(r1)
/* 8016E428 0016B508  38 C3 A1 A0 */	addi r6, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016E42C 0016B50C  80 01 00 28 */	lwz r0, 0x28(r1)
/* 8016E430 0016B510  38 61 00 08 */	addi r3, r1, 0x8
/* 8016E434 0016B514  90 81 00 2C */	stw r4, 0x2c(r1)
/* 8016E438 0016B518  38 A1 00 2C */	addi r5, r1, 0x2c
/* 8016E43C 0016B51C  80 9E 00 50 */	lwz r4, 0x50(r30)
/* 8016E440 0016B520  90 E1 00 30 */	stw r7, 0x30(r1)
/* 8016E444 0016B524  C0 22 AB 10 */	lfs f1, "@1586"@sda21(r2)
/* 8016E448 0016B528  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016E44C 0016B52C  C0 46 00 38 */	lfs f2, 0x38(r6)
/* 8016E450 0016B530  4B FF EB 25 */	bl random_orbit__13zNPCBPlanktonCFRC5xVec3ff
/* 8016E454 0016B534  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E458 0016B538  38 81 00 08 */	addi r4, r1, 0x8
/* 8016E45C 0016B53C  48 00 19 A9 */	bl set_location__13zNPCBPlanktonFRC5xVec3
/* 8016E460 0016B540  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E464 0016B544  4B FF D5 1D */	bl refresh_orbit__13zNPCBPlanktonFv
/* 8016E468 0016B548  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E46C 0016B54C  4B FF F4 3D */	bl follow_camera__13zNPCBPlanktonFv
/* 8016E470 0016B550  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E474 0016B554  4B FF F4 55 */	bl reset_speed__13zNPCBPlanktonFv
/* 8016E478 0016B558  FC 20 F8 90 */	fmr f1, f31
/* 8016E47C 0016B55C  7F C3 F3 78 */	mr r3, r30
/* 8016E480 0016B560  7F E4 FB 78 */	mr r4, r31
/* 8016E484 0016B564  4B F6 6C 91 */	bl Enter__14zNPCGoalCommonFfPv
/* 8016E488 0016B568  E3 E1 00 48 */	psq_l f31, 0x48(r1), 0, qr0
/* 8016E48C 0016B56C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8016E490 0016B570  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8016E494 0016B574  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8016E498 0016B578  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8016E49C 0016B57C  7C 08 03 A6 */	mtlr r0
/* 8016E4A0 0016B580  38 21 00 50 */	addi r1, r1, 0x50
/* 8016E4A4 0016B584  4E 80 00 20 */	blr
.endfn Enter__22zNPCGoalBPlanktonFlankFfPv

# zNPCGoalBPlanktonFlank::Exit(float, void*)
.fn Exit__22zNPCGoalBPlanktonFlankFfPv, global
/* 8016E4A8 0016B588  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016E4AC 0016B58C  7C 08 02 A6 */	mflr r0
/* 8016E4B0 0016B590  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016E4B4 0016B594  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8016E4B8 0016B598  FF E0 08 90 */	fmr f31, f1
/* 8016E4BC 0016B59C  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8016E4C0 0016B5A0  7C 9F 23 78 */	mr r31, r4
/* 8016E4C4 0016B5A4  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8016E4C8 0016B5A8  7C 7E 1B 78 */	mr r30, r3
/* 8016E4CC 0016B5AC  80 63 00 50 */	lwz r3, 0x50(r3)
/* 8016E4D0 0016B5B0  4B FF F3 F9 */	bl reset_speed__13zNPCBPlanktonFv
/* 8016E4D4 0016B5B4  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E4D8 0016B5B8  4B FF F3 B1 */	bl follow_player__13zNPCBPlanktonFv
/* 8016E4DC 0016B5BC  FC 20 F8 90 */	fmr f1, f31
/* 8016E4E0 0016B5C0  7F C3 F3 78 */	mr r3, r30
/* 8016E4E4 0016B5C4  7F E4 FB 78 */	mr r4, r31
/* 8016E4E8 0016B5C8  4B F6 6F 35 */	bl Exit__5xGoalFfPv
/* 8016E4EC 0016B5CC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016E4F0 0016B5D0  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8016E4F4 0016B5D4  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8016E4F8 0016B5D8  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 8016E4FC 0016B5DC  7C 08 03 A6 */	mtlr r0
/* 8016E500 0016B5E0  38 21 00 20 */	addi r1, r1, 0x20
/* 8016E504 0016B5E4  4E 80 00 20 */	blr
.endfn Exit__22zNPCGoalBPlanktonFlankFfPv

# zNPCGoalBPlanktonFlank::Process(en_trantype*, float, void*, xScene*)
.fn Process__22zNPCGoalBPlanktonFlankFP11en_trantypefPvP6xScene, global
/* 8016E508 0016B5E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016E50C 0016B5EC  7C 08 02 A6 */	mflr r0
/* 8016E510 0016B5F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016E514 0016B5F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016E518 0016B5F8  7C 9F 23 78 */	mr r31, r4
/* 8016E51C 0016B5FC  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016E520 0016B600  7C 7E 1B 78 */	mr r30, r3
/* 8016E524 0016B604  80 63 00 50 */	lwz r3, 0x50(r3)
/* 8016E528 0016B608  48 00 16 91 */	bl location__13zNPCBPlanktonCFv
/* 8016E52C 0016B60C  80 BE 00 50 */	lwz r5, 0x50(r30)
/* 8016E530 0016B610  C0 43 00 04 */	lfs f2, 0x4(r3)
/* 8016E534 0016B614  C0 25 04 54 */	lfs f1, 0x454(r5)
/* 8016E538 0016B618  C0 02 AB 18 */	lfs f0, "@1658"@sda21(r2)
/* 8016E53C 0016B61C  EC 22 08 28 */	fsubs f1, f2, f1
/* 8016E540 0016B620  FC 20 0A 10 */	fabs f1, f1
/* 8016E544 0016B624  FC 20 08 18 */	frsp f1, f1
/* 8016E548 0016B628  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016E54C 0016B62C  4C 40 13 82 */	cror eq, lt, eq
/* 8016E550 0016B630  40 82 00 28 */	bne .L_8016E578
/* 8016E554 0016B634  3C 80 80 33 */	lis r4, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016E558 0016B638  3C 60 4E 47 */	lis r3, 0x4e47
/* 8016E55C 0016B63C  38 84 A1 A0 */	addi r4, r4, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016E560 0016B640  38 00 00 01 */	li r0, 0x1
/* 8016E564 0016B644  C0 04 00 A8 */	lfs f0, 0xa8(r4)
/* 8016E568 0016B648  38 63 42 56 */	addi r3, r3, 0x4256
/* 8016E56C 0016B64C  D0 05 02 E0 */	stfs f0, 0x2e0(r5)
/* 8016E570 0016B650  90 1F 00 00 */	stw r0, 0x0(r31)
/* 8016E574 0016B654  48 00 00 08 */	b .L_8016E57C
.L_8016E578:
/* 8016E578 0016B658  38 60 00 00 */	li r3, 0x0
.L_8016E57C:
/* 8016E57C 0016B65C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016E580 0016B660  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016E584 0016B664  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016E588 0016B668  7C 08 03 A6 */	mtlr r0
/* 8016E58C 0016B66C  38 21 00 10 */	addi r1, r1, 0x10
/* 8016E590 0016B670  4E 80 00 20 */	blr
.endfn Process__22zNPCGoalBPlanktonFlankFP11en_trantypefPvP6xScene

# zNPCGoalBPlanktonEvade::create(int, RyzMemGrow*, void*)
.fn create__22zNPCGoalBPlanktonEvadeFiP10RyzMemGrowPv, global
/* 8016E594 0016B674  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016E598 0016B678  7C 08 02 A6 */	mflr r0
/* 8016E59C 0016B67C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016E5A0 0016B680  7C 80 23 78 */	mr r0, r4
/* 8016E5A4 0016B684  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016E5A8 0016B688  7C BF 2B 78 */	mr r31, r5
/* 8016E5AC 0016B68C  7C 05 03 78 */	mr r5, r0
/* 8016E5B0 0016B690  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016E5B4 0016B694  7C 7E 1B 78 */	mr r30, r3
/* 8016E5B8 0016B698  38 60 00 54 */	li r3, 0x54
/* 8016E5BC 0016B69C  7F C4 F3 78 */	mr r4, r30
/* 8016E5C0 0016B6A0  4B FA 0B 91 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8016E5C4 0016B6A4  7C 64 1B 79 */	mr. r4, r3
/* 8016E5C8 0016B6A8  41 82 00 14 */	beq .L_8016E5DC
/* 8016E5CC 0016B6AC  7F C4 F3 78 */	mr r4, r30
/* 8016E5D0 0016B6B0  7F E5 FB 78 */	mr r5, r31
/* 8016E5D4 0016B6B4  48 00 18 C5 */	bl __ct__22zNPCGoalBPlanktonEvadeFiR13zNPCBPlankton
/* 8016E5D8 0016B6B8  7C 64 1B 78 */	mr r4, r3
.L_8016E5DC:
/* 8016E5DC 0016B6BC  28 04 00 00 */	cmplwi r4, 0x0
/* 8016E5E0 0016B6C0  41 82 00 08 */	beq .L_8016E5E8
/* 8016E5E4 0016B6C4  38 84 00 0C */	addi r4, r4, 0xc
.L_8016E5E8:
/* 8016E5E8 0016B6C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016E5EC 0016B6CC  7C 83 23 78 */	mr r3, r4
/* 8016E5F0 0016B6D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016E5F4 0016B6D4  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016E5F8 0016B6D8  7C 08 03 A6 */	mtlr r0
/* 8016E5FC 0016B6DC  38 21 00 10 */	addi r1, r1, 0x10
/* 8016E600 0016B6E0  4E 80 00 20 */	blr
.endfn create__22zNPCGoalBPlanktonEvadeFiP10RyzMemGrowPv

# zNPCGoalBPlanktonEvade::Enter(float, void*)
.fn Enter__22zNPCGoalBPlanktonEvadeFfPv, global
/* 8016E604 0016B6E4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8016E608 0016B6E8  7C 08 02 A6 */	mflr r0
/* 8016E60C 0016B6EC  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016E610 0016B6F0  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8016E614 0016B6F4  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8016E618 0016B6F8  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 8016E61C 0016B6FC  F3 C1 00 18 */	psq_st f30, 0x18(r1), 0, qr0
/* 8016E620 0016B700  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016E624 0016B704  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016E628 0016B708  7C 7E 1B 78 */	mr r30, r3
/* 8016E62C 0016B70C  FF C0 08 90 */	fmr f30, f1
/* 8016E630 0016B710  80 63 00 50 */	lwz r3, 0x50(r3)
/* 8016E634 0016B714  7C 9F 23 78 */	mr r31, r4
/* 8016E638 0016B718  4B FF E8 D5 */	bl reappear__13zNPCBPlanktonFv
/* 8016E63C 0016B71C  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E640 0016B720  38 00 00 01 */	li r0, 0x1
/* 8016E644 0016B724  98 03 02 B6 */	stb r0, 0x2b6(r3)
/* 8016E648 0016B728  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E64C 0016B72C  4B FF F2 7D */	bl reset_speed__13zNPCBPlanktonFv
/* 8016E650 0016B730  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E654 0016B734  48 00 15 75 */	bl face_player__13zNPCBPlanktonFv
/* 8016E658 0016B738  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E65C 0016B73C  38 80 00 03 */	li r4, 0x3
/* 8016E660 0016B740  38 00 00 00 */	li r0, 0x0
/* 8016E664 0016B744  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 8016E668 0016B748  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E66C 0016B74C  90 03 02 C0 */	stw r0, 0x2c0(r3)
/* 8016E670 0016B750  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E674 0016B754  4B FF F2 55 */	bl reset_speed__13zNPCBPlanktonFv
/* 8016E678 0016B758  3C 80 80 33 */	lis r4, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016E67C 0016B75C  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E680 0016B760  38 84 A1 A0 */	addi r4, r4, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016E684 0016B764  C0 04 01 30 */	lfs f0, 0x130(r4)
/* 8016E688 0016B768  D0 03 04 8C */	stfs f0, 0x48c(r3)
/* 8016E68C 0016B76C  C0 04 01 34 */	lfs f0, 0x134(r4)
/* 8016E690 0016B770  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E694 0016B774  D0 03 04 98 */	stfs f0, 0x498(r3)
/* 8016E698 0016B778  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016E69C 0016B77C  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E6A0 0016B780  D0 03 02 C8 */	stfs f0, 0x2c8(r3)
/* 8016E6A4 0016B784  C3 E4 01 28 */	lfs f31, 0x128(r4)
/* 8016E6A8 0016B788  4B EC 25 E1 */	bl xurand__Fv
/* 8016E6AC 0016B78C  80 BE 00 50 */	lwz r5, 0x50(r30)
/* 8016E6B0 0016B790  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016E6B4 0016B794  38 83 A1 A0 */	addi r4, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016E6B8 0016B798  7F C3 F3 78 */	mr r3, r30
/* 8016E6BC 0016B79C  C0 44 01 2C */	lfs f2, 0x12c(r4)
/* 8016E6C0 0016B7A0  7F E4 FB 78 */	mr r4, r31
/* 8016E6C4 0016B7A4  C0 05 02 C8 */	lfs f0, 0x2c8(r5)
/* 8016E6C8 0016B7A8  EC 42 F8 28 */	fsubs f2, f2, f31
/* 8016E6CC 0016B7AC  EC 00 F8 2A */	fadds f0, f0, f31
/* 8016E6D0 0016B7B0  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8016E6D4 0016B7B4  FC 20 F0 90 */	fmr f1, f30
/* 8016E6D8 0016B7B8  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 8016E6DC 0016B7BC  4B F6 6A 39 */	bl Enter__14zNPCGoalCommonFfPv
/* 8016E6E0 0016B7C0  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 8016E6E4 0016B7C4  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8016E6E8 0016B7C8  E3 C1 00 18 */	psq_l f30, 0x18(r1), 0, qr0
/* 8016E6EC 0016B7CC  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 8016E6F0 0016B7D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016E6F4 0016B7D4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8016E6F8 0016B7D8  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016E6FC 0016B7DC  7C 08 03 A6 */	mtlr r0
/* 8016E700 0016B7E0  38 21 00 30 */	addi r1, r1, 0x30
/* 8016E704 0016B7E4  4E 80 00 20 */	blr
.endfn Enter__22zNPCGoalBPlanktonEvadeFfPv

# zNPCGoalBPlanktonEvade::Exit(float, void*)
.fn Exit__22zNPCGoalBPlanktonEvadeFfPv, global
/* 8016E708 0016B7E8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016E70C 0016B7EC  7C 08 02 A6 */	mflr r0
/* 8016E710 0016B7F0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016E714 0016B7F4  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8016E718 0016B7F8  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8016E71C 0016B7FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016E720 0016B800  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016E724 0016B804  7C 7E 1B 78 */	mr r30, r3
/* 8016E728 0016B808  FF E0 08 90 */	fmr f31, f1
/* 8016E72C 0016B80C  80 63 00 50 */	lwz r3, 0x50(r3)
/* 8016E730 0016B810  7C 9F 23 78 */	mr r31, r4
/* 8016E734 0016B814  4B FF F1 95 */	bl reset_speed__13zNPCBPlanktonFv
/* 8016E738 0016B818  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E73C 0016B81C  C0 22 AB CC */	lfs f1, "@2516"@sda21(r2)
/* 8016E740 0016B820  4B FF F2 19 */	bl halt__13zNPCBPlanktonFf
/* 8016E744 0016B824  FC 20 F8 90 */	fmr f1, f31
/* 8016E748 0016B828  7F C3 F3 78 */	mr r3, r30
/* 8016E74C 0016B82C  7F E4 FB 78 */	mr r4, r31
/* 8016E750 0016B830  4B F6 6C CD */	bl Exit__5xGoalFfPv
/* 8016E754 0016B834  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8016E758 0016B838  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016E75C 0016B83C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8016E760 0016B840  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016E764 0016B844  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016E768 0016B848  7C 08 03 A6 */	mtlr r0
/* 8016E76C 0016B84C  38 21 00 20 */	addi r1, r1, 0x20
/* 8016E770 0016B850  4E 80 00 20 */	blr
.endfn Exit__22zNPCGoalBPlanktonEvadeFfPv

# zNPCGoalBPlanktonEvade::Process(en_trantype*, float, void*, xScene*)
.fn Process__22zNPCGoalBPlanktonEvadeFP11en_trantypefPvP6xScene, global
/* 8016E774 0016B854  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8016E778 0016B858  7C 08 02 A6 */	mflr r0
/* 8016E77C 0016B85C  90 01 00 54 */	stw r0, 0x54(r1)
/* 8016E780 0016B860  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8016E784 0016B864  F3 E1 00 48 */	psq_st f31, 0x48(r1), 0, qr0
/* 8016E788 0016B868  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8016E78C 0016B86C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8016E790 0016B870  7C 7E 1B 78 */	mr r30, r3
/* 8016E794 0016B874  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016E798 0016B878  83 FE 00 50 */	lwz r31, 0x50(r30)
/* 8016E79C 0016B87C  38 63 A1 A0 */	addi r3, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016E7A0 0016B880  C0 03 01 24 */	lfs f0, 0x124(r3)
/* 8016E7A4 0016B884  C0 3F 02 C8 */	lfs f1, 0x2c8(r31)
/* 8016E7A8 0016B888  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016E7AC 0016B88C  4C 41 13 82 */	cror eq, gt, eq
/* 8016E7B0 0016B890  40 82 00 20 */	bne .L_8016E7D0
/* 8016E7B4 0016B894  C0 03 00 A8 */	lfs f0, 0xa8(r3)
/* 8016E7B8 0016B898  3C 60 4E 47 */	lis r3, 0x4e47
/* 8016E7BC 0016B89C  38 00 00 01 */	li r0, 0x1
/* 8016E7C0 0016B8A0  D0 1F 02 E0 */	stfs f0, 0x2e0(r31)
/* 8016E7C4 0016B8A4  38 63 42 56 */	addi r3, r3, 0x4256
/* 8016E7C8 0016B8A8  90 04 00 00 */	stw r0, 0x0(r4)
/* 8016E7CC 0016B8AC  48 00 00 EC */	b .L_8016E8B8
.L_8016E7D0:
/* 8016E7D0 0016B8B0  C0 1E 00 4C */	lfs f0, 0x4c(r30)
/* 8016E7D4 0016B8B4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016E7D8 0016B8B8  4C 41 13 82 */	cror eq, gt, eq
/* 8016E7DC 0016B8BC  40 82 00 D8 */	bne .L_8016E8B4
/* 8016E7E0 0016B8C0  7F E3 FB 78 */	mr r3, r31
/* 8016E7E4 0016B8C4  48 00 13 D5 */	bl location__13zNPCBPlanktonCFv
/* 8016E7E8 0016B8C8  7C 64 1B 78 */	mr r4, r3
/* 8016E7EC 0016B8CC  38 61 00 14 */	addi r3, r1, 0x14
/* 8016E7F0 0016B8D0  38 BF 04 50 */	addi r5, r31, 0x450
/* 8016E7F4 0016B8D4  48 00 01 CD */	bl "world_to_ring_loc__34@unnamed@zNPCTypeBossPlankton_cpp@FRC5xVec3RC5xVec3"
/* 8016E7F8 0016B8D8  80 81 00 14 */	lwz r4, 0x14(r1)
/* 8016E7FC 0016B8DC  80 61 00 18 */	lwz r3, 0x18(r1)
/* 8016E800 0016B8E0  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8016E804 0016B8E4  90 81 00 20 */	stw r4, 0x20(r1)
/* 8016E808 0016B8E8  90 61 00 24 */	stw r3, 0x24(r1)
/* 8016E80C 0016B8EC  90 01 00 28 */	stw r0, 0x28(r1)
/* 8016E810 0016B8F0  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E814 0016B8F4  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016E818 0016B8F8  C0 23 04 80 */	lfs f1, 0x480(r3)
/* 8016E81C 0016B8FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016E820 0016B900  40 80 00 18 */	bge .L_8016E838
/* 8016E824 0016B904  C0 42 AB D4 */	lfs f2, "@2941"@sda21(r2)
/* 8016E828 0016B908  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 8016E82C 0016B90C  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 8016E830 0016B910  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8016E834 0016B914  48 00 00 14 */	b .L_8016E848
.L_8016E838:
/* 8016E838 0016B918  C0 42 AB D4 */	lfs f2, "@2941"@sda21(r2)
/* 8016E83C 0016B91C  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 8016E840 0016B920  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 8016E844 0016B924  EC 02 00 7C */	fnmsubs f0, f2, f1, f0
.L_8016E848:
/* 8016E848 0016B928  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8016E84C 0016B92C  38 61 00 08 */	addi r3, r1, 0x8
/* 8016E850 0016B930  38 81 00 20 */	addi r4, r1, 0x20
/* 8016E854 0016B934  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016E858 0016B938  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8016E85C 0016B93C  80 BE 00 50 */	lwz r5, 0x50(r30)
/* 8016E860 0016B940  C0 05 04 5C */	lfs f0, 0x45c(r5)
/* 8016E864 0016B944  38 A5 04 50 */	addi r5, r5, 0x450
/* 8016E868 0016B948  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8016E86C 0016B94C  48 00 00 6D */	bl "ring_to_world_loc__34@unnamed@zNPCTypeBossPlankton_cpp@FRC5xVec3RC5xVec3"
/* 8016E870 0016B950  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E874 0016B954  38 81 00 08 */	addi r4, r1, 0x8
/* 8016E878 0016B958  38 63 04 74 */	addi r3, r3, 0x474
/* 8016E87C 0016B95C  4B E9 C9 E9 */	bl __as__5xVec3FRC5xVec3
/* 8016E880 0016B960  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016E884 0016B964  38 63 A1 A0 */	addi r3, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016E888 0016B968  C3 E3 01 28 */	lfs f31, 0x128(r3)
/* 8016E88C 0016B96C  4B EC 23 FD */	bl xurand__Fv
/* 8016E890 0016B970  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8016E894 0016B974  3C 80 80 33 */	lis r4, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016E898 0016B978  38 84 A1 A0 */	addi r4, r4, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016E89C 0016B97C  C0 44 01 2C */	lfs f2, 0x12c(r4)
/* 8016E8A0 0016B980  C0 03 02 C8 */	lfs f0, 0x2c8(r3)
/* 8016E8A4 0016B984  EC 42 F8 28 */	fsubs f2, f2, f31
/* 8016E8A8 0016B988  EC 00 F8 2A */	fadds f0, f0, f31
/* 8016E8AC 0016B98C  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8016E8B0 0016B990  D0 1E 00 4C */	stfs f0, 0x4c(r30)
.L_8016E8B4:
/* 8016E8B4 0016B994  38 60 00 00 */	li r3, 0x0
.L_8016E8B8:
/* 8016E8B8 0016B998  E3 E1 00 48 */	psq_l f31, 0x48(r1), 0, qr0
/* 8016E8BC 0016B99C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8016E8C0 0016B9A0  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8016E8C4 0016B9A4  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8016E8C8 0016B9A8  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8016E8CC 0016B9AC  7C 08 03 A6 */	mtlr r0
/* 8016E8D0 0016B9B0  38 21 00 50 */	addi r1, r1, 0x50
/* 8016E8D4 0016B9B4  4E 80 00 20 */	blr
.endfn Process__22zNPCGoalBPlanktonEvadeFP11en_trantypefPvP6xScene

# @unnamed@zNPCTypeBossPlankton_cpp@::ring_to_world_loc(const xVec3&, const xVec3&)
.fn "ring_to_world_loc__34@unnamed@zNPCTypeBossPlankton_cpp@FRC5xVec3RC5xVec3", local
/* 8016E8D8 0016B9B8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8016E8DC 0016B9BC  7C 08 02 A6 */	mflr r0
/* 8016E8E0 0016B9C0  90 01 00 44 */	stw r0, 0x44(r1)
/* 8016E8E4 0016B9C4  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8016E8E8 0016B9C8  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 8016E8EC 0016B9CC  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8016E8F0 0016B9D0  F3 C1 00 28 */	psq_st f30, 0x28(r1), 0, qr0
/* 8016E8F4 0016B9D4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016E8F8 0016B9D8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016E8FC 0016B9DC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8016E900 0016B9E0  7C 9E 23 78 */	mr r30, r4
/* 8016E904 0016B9E4  C0 02 AB B4 */	lfs f0, "@2166"@sda21(r2)
/* 8016E908 0016B9E8  C0 24 00 08 */	lfs f1, 0x8(r4)
/* 8016E90C 0016B9EC  7C 7D 1B 78 */	mr r29, r3
/* 8016E910 0016B9F0  7C BF 2B 78 */	mr r31, r5
/* 8016E914 0016B9F4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016E918 0016B9F8  4C 41 13 82 */	cror eq, gt, eq
/* 8016E91C 0016B9FC  40 82 00 30 */	bne .L_8016E94C
/* 8016E920 0016BA00  C0 02 AB 28 */	lfs f0, "@1755"@sda21(r2)
/* 8016E924 0016BA04  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016E928 0016BA08  4C 40 13 82 */	cror eq, lt, eq
/* 8016E92C 0016BA0C  40 82 00 20 */	bne .L_8016E94C
/* 8016E930 0016BA10  C0 5E 00 04 */	lfs f2, 0x4(r30)
/* 8016E934 0016BA14  C0 1F 00 04 */	lfs f0, 0x4(r31)
/* 8016E938 0016BA18  C0 3F 00 00 */	lfs f1, 0x0(r31)
/* 8016E93C 0016BA1C  EC 42 00 2A */	fadds f2, f2, f0
/* 8016E940 0016BA20  C0 7F 00 08 */	lfs f3, 0x8(r31)
/* 8016E944 0016BA24  4B EF 16 45 */	bl create__5xVec3Ffff
/* 8016E948 0016BA28  48 00 00 4C */	b .L_8016E994
.L_8016E94C:
/* 8016E94C 0016BA2C  C0 1E 00 00 */	lfs f0, 0x0(r30)
/* 8016E950 0016BA30  EF C0 08 24 */	fdivs f30, f0, f1
/* 8016E954 0016BA34  FC 20 F0 90 */	fmr f1, f30
/* 8016E958 0016BA38  4B F5 65 39 */	bl icos__Ff
/* 8016E95C 0016BA3C  C0 5E 00 08 */	lfs f2, 0x8(r30)
/* 8016E960 0016BA40  C0 1F 00 08 */	lfs f0, 0x8(r31)
/* 8016E964 0016BA44  EF E2 00 7A */	fmadds f31, f2, f1, f0
/* 8016E968 0016BA48  FC 20 F0 90 */	fmr f1, f30
/* 8016E96C 0016BA4C  4B F5 64 E1 */	bl isin__Ff
/* 8016E970 0016BA50  C0 9E 00 08 */	lfs f4, 0x8(r30)
/* 8016E974 0016BA54  FC 60 F8 90 */	fmr f3, f31
/* 8016E978 0016BA58  C0 1F 00 00 */	lfs f0, 0x0(r31)
/* 8016E97C 0016BA5C  7F A3 EB 78 */	mr r3, r29
/* 8016E980 0016BA60  C0 5F 00 04 */	lfs f2, 0x4(r31)
/* 8016E984 0016BA64  EC 24 00 7A */	fmadds f1, f4, f1, f0
/* 8016E988 0016BA68  C0 1E 00 04 */	lfs f0, 0x4(r30)
/* 8016E98C 0016BA6C  EC 42 00 2A */	fadds f2, f2, f0
/* 8016E990 0016BA70  4B EF 15 F9 */	bl create__5xVec3Ffff
.L_8016E994:
/* 8016E994 0016BA74  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8016E998 0016BA78  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8016E99C 0016BA7C  E3 C1 00 28 */	psq_l f30, 0x28(r1), 0, qr0
/* 8016E9A0 0016BA80  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8016E9A4 0016BA84  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016E9A8 0016BA88  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016E9AC 0016BA8C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8016E9B0 0016BA90  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8016E9B4 0016BA94  7C 08 03 A6 */	mtlr r0
/* 8016E9B8 0016BA98  38 21 00 40 */	addi r1, r1, 0x40
/* 8016E9BC 0016BA9C  4E 80 00 20 */	blr
.endfn "ring_to_world_loc__34@unnamed@zNPCTypeBossPlankton_cpp@FRC5xVec3RC5xVec3"

# @unnamed@zNPCTypeBossPlankton_cpp@::world_to_ring_loc(const xVec3&, const xVec3&)
.fn "world_to_ring_loc__34@unnamed@zNPCTypeBossPlankton_cpp@FRC5xVec3RC5xVec3", local
/* 8016E9C0 0016BAA0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8016E9C4 0016BAA4  7C 08 02 A6 */	mflr r0
/* 8016E9C8 0016BAA8  90 01 00 44 */	stw r0, 0x44(r1)
/* 8016E9CC 0016BAAC  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8016E9D0 0016BAB0  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 8016E9D4 0016BAB4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8016E9D8 0016BAB8  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8016E9DC 0016BABC  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8016E9E0 0016BAC0  7C 9E 23 78 */	mr r30, r4
/* 8016E9E4 0016BAC4  7C BF 2B 78 */	mr r31, r5
/* 8016E9E8 0016BAC8  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 8016E9EC 0016BACC  7C 7D 1B 78 */	mr r29, r3
/* 8016E9F0 0016BAD0  C0 05 00 00 */	lfs f0, 0x0(r5)
/* 8016E9F4 0016BAD4  38 61 00 08 */	addi r3, r1, 0x8
/* 8016E9F8 0016BAD8  80 82 BF E8 */	lwz r4, "@2124"@sda21(r2)
/* 8016E9FC 0016BADC  80 02 BF EC */	lwz r0, "@2124"+0x4@sda21(r2)
/* 8016EA00 0016BAE0  EC 41 00 28 */	fsubs f2, f1, f0
/* 8016EA04 0016BAE4  90 81 00 08 */	stw r4, 0x8(r1)
/* 8016EA08 0016BAE8  C0 3E 00 08 */	lfs f1, 0x8(r30)
/* 8016EA0C 0016BAEC  C0 05 00 08 */	lfs f0, 0x8(r5)
/* 8016EA10 0016BAF0  90 01 00 0C */	stw r0, 0xc(r1)
/* 8016EA14 0016BAF4  EC 01 00 28 */	fsubs f0, f1, f0
/* 8016EA18 0016BAF8  D0 41 00 08 */	stfs f2, 0x8(r1)
/* 8016EA1C 0016BAFC  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8016EA20 0016BB00  4B EC 7E 39 */	bl length__5xVec2CFv
/* 8016EA24 0016BB04  3C 60 80 27 */	lis r3, "@2125"@ha
/* 8016EA28 0016BB08  FF E0 08 90 */	fmr f31, f1
/* 8016EA2C 0016BB0C  38 A3 13 E0 */	addi r5, r3, "@2125"@l
/* 8016EA30 0016BB10  C0 21 00 08 */	lfs f1, 0x8(r1)
/* 8016EA34 0016BB14  80 85 00 00 */	lwz r4, 0x0(r5)
/* 8016EA38 0016BB18  80 65 00 04 */	lwz r3, 0x4(r5)
/* 8016EA3C 0016BB1C  80 05 00 08 */	lwz r0, 0x8(r5)
/* 8016EA40 0016BB20  90 81 00 10 */	stw r4, 0x10(r1)
/* 8016EA44 0016BB24  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8016EA48 0016BB28  90 61 00 14 */	stw r3, 0x14(r1)
/* 8016EA4C 0016BB2C  90 01 00 18 */	stw r0, 0x18(r1)
/* 8016EA50 0016BB30  4B E9 76 21 */	bl xatan2__Fff
/* 8016EA54 0016BB34  EC 5F 00 72 */	fmuls f2, f31, f1
/* 8016EA58 0016BB38  C0 3E 00 04 */	lfs f1, 0x4(r30)
/* 8016EA5C 0016BB3C  C0 1F 00 04 */	lfs f0, 0x4(r31)
/* 8016EA60 0016BB40  D3 E1 00 18 */	stfs f31, 0x18(r1)
/* 8016EA64 0016BB44  EC 01 00 28 */	fsubs f0, f1, f0
/* 8016EA68 0016BB48  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 8016EA6C 0016BB4C  80 01 00 18 */	lwz r0, 0x18(r1)
/* 8016EA70 0016BB50  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8016EA74 0016BB54  80 81 00 10 */	lwz r4, 0x10(r1)
/* 8016EA78 0016BB58  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8016EA7C 0016BB5C  90 9D 00 00 */	stw r4, 0x0(r29)
/* 8016EA80 0016BB60  90 7D 00 04 */	stw r3, 0x4(r29)
/* 8016EA84 0016BB64  90 1D 00 08 */	stw r0, 0x8(r29)
/* 8016EA88 0016BB68  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8016EA8C 0016BB6C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8016EA90 0016BB70  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8016EA94 0016BB74  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8016EA98 0016BB78  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8016EA9C 0016BB7C  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8016EAA0 0016BB80  7C 08 03 A6 */	mtlr r0
/* 8016EAA4 0016BB84  38 21 00 40 */	addi r1, r1, 0x40
/* 8016EAA8 0016BB88  4E 80 00 20 */	blr
.endfn "world_to_ring_loc__34@unnamed@zNPCTypeBossPlankton_cpp@FRC5xVec3RC5xVec3"

# zNPCGoalBPlanktonHunt::create(int, RyzMemGrow*, void*)
.fn create__21zNPCGoalBPlanktonHuntFiP10RyzMemGrowPv, global
/* 8016EAAC 0016BB8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016EAB0 0016BB90  7C 08 02 A6 */	mflr r0
/* 8016EAB4 0016BB94  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016EAB8 0016BB98  7C 80 23 78 */	mr r0, r4
/* 8016EABC 0016BB9C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016EAC0 0016BBA0  7C BF 2B 78 */	mr r31, r5
/* 8016EAC4 0016BBA4  7C 05 03 78 */	mr r5, r0
/* 8016EAC8 0016BBA8  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016EACC 0016BBAC  7C 7E 1B 78 */	mr r30, r3
/* 8016EAD0 0016BBB0  38 60 00 5C */	li r3, 0x5c
/* 8016EAD4 0016BBB4  7F C4 F3 78 */	mr r4, r30
/* 8016EAD8 0016BBB8  4B FA 06 79 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8016EADC 0016BBBC  7C 64 1B 79 */	mr. r4, r3
/* 8016EAE0 0016BBC0  41 82 00 14 */	beq .L_8016EAF4
/* 8016EAE4 0016BBC4  7F C4 F3 78 */	mr r4, r30
/* 8016EAE8 0016BBC8  7F E5 FB 78 */	mr r5, r31
/* 8016EAEC 0016BBCC  48 00 13 F9 */	bl __ct__21zNPCGoalBPlanktonHuntFiR13zNPCBPlankton
/* 8016EAF0 0016BBD0  7C 64 1B 78 */	mr r4, r3
.L_8016EAF4:
/* 8016EAF4 0016BBD4  28 04 00 00 */	cmplwi r4, 0x0
/* 8016EAF8 0016BBD8  41 82 00 08 */	beq .L_8016EB00
/* 8016EAFC 0016BBDC  38 84 00 0C */	addi r4, r4, 0xc
.L_8016EB00:
/* 8016EB00 0016BBE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016EB04 0016BBE4  7C 83 23 78 */	mr r3, r4
/* 8016EB08 0016BBE8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016EB0C 0016BBEC  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016EB10 0016BBF0  7C 08 03 A6 */	mtlr r0
/* 8016EB14 0016BBF4  38 21 00 10 */	addi r1, r1, 0x10
/* 8016EB18 0016BBF8  4E 80 00 20 */	blr
.endfn create__21zNPCGoalBPlanktonHuntFiP10RyzMemGrowPv

# zNPCGoalBPlanktonHunt::Enter(float, void*)
.fn Enter__21zNPCGoalBPlanktonHuntFfPv, global
/* 8016EB1C 0016BBFC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016EB20 0016BC00  7C 08 02 A6 */	mflr r0
/* 8016EB24 0016BC04  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016EB28 0016BC08  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8016EB2C 0016BC0C  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8016EB30 0016BC10  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016EB34 0016BC14  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016EB38 0016BC18  7C 7E 1B 78 */	mr r30, r3
/* 8016EB3C 0016BC1C  FF E0 08 90 */	fmr f31, f1
/* 8016EB40 0016BC20  80 63 00 58 */	lwz r3, 0x58(r3)
/* 8016EB44 0016BC24  7C 9F 23 78 */	mr r31, r4
/* 8016EB48 0016BC28  4B FF E3 C5 */	bl reappear__13zNPCBPlanktonFv
/* 8016EB4C 0016BC2C  4B FF 9F 49 */	bl "get_player_loc__34@unnamed@zNPCTypeBossPlankton_cpp@Fv"
/* 8016EB50 0016BC30  80 7E 00 58 */	lwz r3, 0x58(r30)
/* 8016EB54 0016BC34  38 00 00 01 */	li r0, 0x1
/* 8016EB58 0016BC38  98 03 02 B6 */	stb r0, 0x2b6(r3)
/* 8016EB5C 0016BC3C  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016EB60 0016BC40  80 7E 00 58 */	lwz r3, 0x58(r30)
/* 8016EB64 0016BC44  D0 03 02 C8 */	stfs f0, 0x2c8(r3)
/* 8016EB68 0016BC48  80 7E 00 58 */	lwz r3, 0x58(r30)
/* 8016EB6C 0016BC4C  4B FF ED 5D */	bl reset_speed__13zNPCBPlanktonFv
/* 8016EB70 0016BC50  80 7E 00 58 */	lwz r3, 0x58(r30)
/* 8016EB74 0016BC54  4B FF CE 0D */	bl refresh_orbit__13zNPCBPlanktonFv
/* 8016EB78 0016BC58  80 7E 00 58 */	lwz r3, 0x58(r30)
/* 8016EB7C 0016BC5C  4B FF ED 2D */	bl follow_camera__13zNPCBPlanktonFv
/* 8016EB80 0016BC60  FC 20 F8 90 */	fmr f1, f31
/* 8016EB84 0016BC64  7F C3 F3 78 */	mr r3, r30
/* 8016EB88 0016BC68  7F E4 FB 78 */	mr r4, r31
/* 8016EB8C 0016BC6C  4B F6 65 89 */	bl Enter__14zNPCGoalCommonFfPv
/* 8016EB90 0016BC70  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8016EB94 0016BC74  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016EB98 0016BC78  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8016EB9C 0016BC7C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016EBA0 0016BC80  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016EBA4 0016BC84  7C 08 03 A6 */	mtlr r0
/* 8016EBA8 0016BC88  38 21 00 20 */	addi r1, r1, 0x20
/* 8016EBAC 0016BC8C  4E 80 00 20 */	blr
.endfn Enter__21zNPCGoalBPlanktonHuntFfPv

# zNPCGoalBPlanktonHunt::Exit(float, void*)
.fn Exit__21zNPCGoalBPlanktonHuntFfPv, global
/* 8016EBB0 0016BC90  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016EBB4 0016BC94  7C 08 02 A6 */	mflr r0
/* 8016EBB8 0016BC98  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016EBBC 0016BC9C  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8016EBC0 0016BCA0  FF E0 08 90 */	fmr f31, f1
/* 8016EBC4 0016BCA4  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8016EBC8 0016BCA8  7C 9F 23 78 */	mr r31, r4
/* 8016EBCC 0016BCAC  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8016EBD0 0016BCB0  7C 7E 1B 78 */	mr r30, r3
/* 8016EBD4 0016BCB4  80 63 00 58 */	lwz r3, 0x58(r3)
/* 8016EBD8 0016BCB8  4B FF CD A9 */	bl refresh_orbit__13zNPCBPlanktonFv
/* 8016EBDC 0016BCBC  FC 20 F8 90 */	fmr f1, f31
/* 8016EBE0 0016BCC0  7F C3 F3 78 */	mr r3, r30
/* 8016EBE4 0016BCC4  7F E4 FB 78 */	mr r4, r31
/* 8016EBE8 0016BCC8  4B F6 68 35 */	bl Exit__5xGoalFfPv
/* 8016EBEC 0016BCCC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016EBF0 0016BCD0  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8016EBF4 0016BCD4  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8016EBF8 0016BCD8  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 8016EBFC 0016BCDC  7C 08 03 A6 */	mtlr r0
/* 8016EC00 0016BCE0  38 21 00 20 */	addi r1, r1, 0x20
/* 8016EC04 0016BCE4  4E 80 00 20 */	blr
.endfn Exit__21zNPCGoalBPlanktonHuntFfPv

# zNPCGoalBPlanktonHunt::Process(en_trantype*, float, void*, xScene*)
.fn Process__21zNPCGoalBPlanktonHuntFP11en_trantypefPvP6xScene, global
/* 8016EC08 0016BCE8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8016EC0C 0016BCEC  7C 08 02 A6 */	mflr r0
/* 8016EC10 0016BCF0  90 01 00 44 */	stw r0, 0x44(r1)
/* 8016EC14 0016BCF4  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8016EC18 0016BCF8  7C 9F 23 78 */	mr r31, r4
/* 8016EC1C 0016BCFC  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8016EC20 0016BD00  7C 7E 1B 78 */	mr r30, r3
/* 8016EC24 0016BD04  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8016EC28 0016BD08  80 63 00 58 */	lwz r3, 0x58(r3)
/* 8016EC2C 0016BD0C  88 03 02 B7 */	lbz r0, 0x2b7(r3)
/* 8016EC30 0016BD10  28 00 00 00 */	cmplwi r0, 0x0
/* 8016EC34 0016BD14  40 82 00 18 */	bne .L_8016EC4C
/* 8016EC38 0016BD18  38 00 00 01 */	li r0, 0x1
/* 8016EC3C 0016BD1C  90 1F 00 00 */	stw r0, 0x0(r31)
/* 8016EC40 0016BD20  80 7E 00 58 */	lwz r3, 0x58(r30)
/* 8016EC44 0016BD24  4B FF CC D1 */	bl next_goal__13zNPCBPlanktonFv
/* 8016EC48 0016BD28  48 00 00 F4 */	b .L_8016ED3C
.L_8016EC4C:
/* 8016EC4C 0016BD2C  4B FF CD 35 */	bl refresh_orbit__13zNPCBPlanktonFv
/* 8016EC50 0016BD30  80 7E 00 58 */	lwz r3, 0x58(r30)
/* 8016EC54 0016BD34  48 00 0F 65 */	bl location__13zNPCBPlanktonCFv
/* 8016EC58 0016BD38  7C 7D 1B 78 */	mr r29, r3
/* 8016EC5C 0016BD3C  4B FF 9E 39 */	bl "get_player_loc__34@unnamed@zNPCTypeBossPlankton_cpp@Fv"
/* 8016EC60 0016BD40  7C 64 1B 78 */	mr r4, r3
/* 8016EC64 0016BD44  7F A5 EB 78 */	mr r5, r29
/* 8016EC68 0016BD48  38 61 00 14 */	addi r3, r1, 0x14
/* 8016EC6C 0016BD4C  4B E9 C5 61 */	bl __mi__5xVec3CFRC5xVec3
/* 8016EC70 0016BD50  38 61 00 14 */	addi r3, r1, 0x14
/* 8016EC74 0016BD54  4B E9 C4 89 */	bl length2__5xVec3CFv
/* 8016EC78 0016BD58  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016EC7C 0016BD5C  38 63 A1 A0 */	addi r3, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016EC80 0016BD60  C0 03 00 9C */	lfs f0, 0x9c(r3)
/* 8016EC84 0016BD64  EC 00 00 32 */	fmuls f0, f0, f0
/* 8016EC88 0016BD68  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016EC8C 0016BD6C  4C 41 13 82 */	cror eq, gt, eq
/* 8016EC90 0016BD70  40 82 00 0C */	bne .L_8016EC9C
/* 8016EC94 0016BD74  38 60 00 00 */	li r3, 0x0
/* 8016EC98 0016BD78  48 00 00 A4 */	b .L_8016ED3C
.L_8016EC9C:
/* 8016EC9C 0016BD7C  4B FF 9D F9 */	bl "get_player_loc__34@unnamed@zNPCTypeBossPlankton_cpp@Fv"
/* 8016ECA0 0016BD80  7C 64 1B 78 */	mr r4, r3
/* 8016ECA4 0016BD84  38 61 00 08 */	addi r3, r1, 0x8
/* 8016ECA8 0016BD88  38 BE 00 4C */	addi r5, r30, 0x4c
/* 8016ECAC 0016BD8C  4B E9 C5 21 */	bl __mi__5xVec3CFRC5xVec3
/* 8016ECB0 0016BD90  80 81 00 08 */	lwz r4, 0x8(r1)
/* 8016ECB4 0016BD94  80 61 00 0C */	lwz r3, 0xc(r1)
/* 8016ECB8 0016BD98  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8016ECBC 0016BD9C  90 81 00 20 */	stw r4, 0x20(r1)
/* 8016ECC0 0016BDA0  90 61 00 24 */	stw r3, 0x24(r1)
/* 8016ECC4 0016BDA4  90 01 00 28 */	stw r0, 0x28(r1)
/* 8016ECC8 0016BDA8  4B FF 9D CD */	bl "get_player_loc__34@unnamed@zNPCTypeBossPlankton_cpp@Fv"
/* 8016ECCC 0016BDAC  7C 64 1B 78 */	mr r4, r3
/* 8016ECD0 0016BDB0  38 7E 00 4C */	addi r3, r30, 0x4c
/* 8016ECD4 0016BDB4  4B E9 C5 91 */	bl __as__5xVec3FRC5xVec3
/* 8016ECD8 0016BDB8  80 9E 00 58 */	lwz r4, 0x58(r30)
/* 8016ECDC 0016BDBC  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016ECE0 0016BDC0  38 63 A1 A0 */	addi r3, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016ECE4 0016BDC4  C0 24 02 C8 */	lfs f1, 0x2c8(r4)
/* 8016ECE8 0016BDC8  C0 03 00 94 */	lfs f0, 0x94(r3)
/* 8016ECEC 0016BDCC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016ECF0 0016BDD0  4C 41 13 82 */	cror eq, gt, eq
/* 8016ECF4 0016BDD4  41 82 00 1C */	beq .L_8016ED10
/* 8016ECF8 0016BDD8  38 61 00 20 */	addi r3, r1, 0x20
/* 8016ECFC 0016BDDC  4B E9 C4 01 */	bl length2__5xVec3CFv
/* 8016ED00 0016BDE0  C0 02 AB D8 */	lfs f0, "@2987"@sda21(r2)
/* 8016ED04 0016BDE4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016ED08 0016BDE8  4C 40 13 82 */	cror eq, lt, eq
/* 8016ED0C 0016BDEC  40 82 00 2C */	bne .L_8016ED38
.L_8016ED10:
/* 8016ED10 0016BDF0  3C 80 80 33 */	lis r4, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016ED14 0016BDF4  3C 60 4E 47 */	lis r3, 0x4e47
/* 8016ED18 0016BDF8  38 A4 A1 A0 */	addi r5, r4, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016ED1C 0016BDFC  80 9E 00 58 */	lwz r4, 0x58(r30)
/* 8016ED20 0016BE00  C0 05 00 98 */	lfs f0, 0x98(r5)
/* 8016ED24 0016BE04  38 00 00 01 */	li r0, 0x1
/* 8016ED28 0016BE08  38 63 42 56 */	addi r3, r3, 0x4256
/* 8016ED2C 0016BE0C  D0 04 02 E0 */	stfs f0, 0x2e0(r4)
/* 8016ED30 0016BE10  90 1F 00 00 */	stw r0, 0x0(r31)
/* 8016ED34 0016BE14  48 00 00 08 */	b .L_8016ED3C
.L_8016ED38:
/* 8016ED38 0016BE18  38 60 00 00 */	li r3, 0x0
.L_8016ED3C:
/* 8016ED3C 0016BE1C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8016ED40 0016BE20  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8016ED44 0016BE24  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8016ED48 0016BE28  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8016ED4C 0016BE2C  7C 08 03 A6 */	mtlr r0
/* 8016ED50 0016BE30  38 21 00 40 */	addi r1, r1, 0x40
/* 8016ED54 0016BE34  4E 80 00 20 */	blr
.endfn Process__21zNPCGoalBPlanktonHuntFP11en_trantypefPvP6xScene

# zNPCGoalBPlanktonTaunt::create(int, RyzMemGrow*, void*)
.fn create__22zNPCGoalBPlanktonTauntFiP10RyzMemGrowPv, global
/* 8016ED58 0016BE38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016ED5C 0016BE3C  7C 08 02 A6 */	mflr r0
/* 8016ED60 0016BE40  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016ED64 0016BE44  7C 80 23 78 */	mr r0, r4
/* 8016ED68 0016BE48  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016ED6C 0016BE4C  7C BF 2B 78 */	mr r31, r5
/* 8016ED70 0016BE50  7C 05 03 78 */	mr r5, r0
/* 8016ED74 0016BE54  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016ED78 0016BE58  7C 7E 1B 78 */	mr r30, r3
/* 8016ED7C 0016BE5C  38 60 00 50 */	li r3, 0x50
/* 8016ED80 0016BE60  7F C4 F3 78 */	mr r4, r30
/* 8016ED84 0016BE64  4B FA 03 CD */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8016ED88 0016BE68  7C 64 1B 79 */	mr. r4, r3
/* 8016ED8C 0016BE6C  41 82 00 14 */	beq .L_8016EDA0
/* 8016ED90 0016BE70  7F C4 F3 78 */	mr r4, r30
/* 8016ED94 0016BE74  7F E5 FB 78 */	mr r5, r31
/* 8016ED98 0016BE78  48 00 11 99 */	bl __ct__22zNPCGoalBPlanktonTauntFiR13zNPCBPlankton
/* 8016ED9C 0016BE7C  7C 64 1B 78 */	mr r4, r3
.L_8016EDA0:
/* 8016EDA0 0016BE80  28 04 00 00 */	cmplwi r4, 0x0
/* 8016EDA4 0016BE84  41 82 00 08 */	beq .L_8016EDAC
/* 8016EDA8 0016BE88  38 84 00 0C */	addi r4, r4, 0xc
.L_8016EDAC:
/* 8016EDAC 0016BE8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016EDB0 0016BE90  7C 83 23 78 */	mr r3, r4
/* 8016EDB4 0016BE94  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016EDB8 0016BE98  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016EDBC 0016BE9C  7C 08 03 A6 */	mtlr r0
/* 8016EDC0 0016BEA0  38 21 00 10 */	addi r1, r1, 0x10
/* 8016EDC4 0016BEA4  4E 80 00 20 */	blr
.endfn create__22zNPCGoalBPlanktonTauntFiP10RyzMemGrowPv

# zNPCGoalBPlanktonTaunt::Enter(float, void*)
.fn Enter__22zNPCGoalBPlanktonTauntFfPv, global
/* 8016EDC8 0016BEA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016EDCC 0016BEAC  7C 08 02 A6 */	mflr r0
/* 8016EDD0 0016BEB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016EDD4 0016BEB4  4B F6 63 41 */	bl Enter__14zNPCGoalCommonFfPv
/* 8016EDD8 0016BEB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016EDDC 0016BEBC  7C 08 03 A6 */	mtlr r0
/* 8016EDE0 0016BEC0  38 21 00 10 */	addi r1, r1, 0x10
/* 8016EDE4 0016BEC4  4E 80 00 20 */	blr
.endfn Enter__22zNPCGoalBPlanktonTauntFfPv

# zNPCGoalBPlanktonTaunt::Exit(float, void*)
.fn Exit__22zNPCGoalBPlanktonTauntFfPv, global
/* 8016EDE8 0016BEC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016EDEC 0016BECC  7C 08 02 A6 */	mflr r0
/* 8016EDF0 0016BED0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016EDF4 0016BED4  4B F6 66 29 */	bl Exit__5xGoalFfPv
/* 8016EDF8 0016BED8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016EDFC 0016BEDC  7C 08 03 A6 */	mtlr r0
/* 8016EE00 0016BEE0  38 21 00 10 */	addi r1, r1, 0x10
/* 8016EE04 0016BEE4  4E 80 00 20 */	blr
.endfn Exit__22zNPCGoalBPlanktonTauntFfPv

# zNPCGoalBPlanktonTaunt::Process(en_trantype*, float, void*, xScene*)
.fn Process__22zNPCGoalBPlanktonTauntFP11en_trantypefPvP6xScene, global
/* 8016EE08 0016BEE8  38 60 00 00 */	li r3, 0x0
/* 8016EE0C 0016BEEC  4E 80 00 20 */	blr
.endfn Process__22zNPCGoalBPlanktonTauntFP11en_trantypefPvP6xScene

# zNPCGoalBPlanktonMove::create(int, RyzMemGrow*, void*)
.fn create__21zNPCGoalBPlanktonMoveFiP10RyzMemGrowPv, global
/* 8016EE10 0016BEF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016EE14 0016BEF4  7C 08 02 A6 */	mflr r0
/* 8016EE18 0016BEF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016EE1C 0016BEFC  7C 80 23 78 */	mr r0, r4
/* 8016EE20 0016BF00  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016EE24 0016BF04  7C BF 2B 78 */	mr r31, r5
/* 8016EE28 0016BF08  7C 05 03 78 */	mr r5, r0
/* 8016EE2C 0016BF0C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016EE30 0016BF10  7C 7E 1B 78 */	mr r30, r3
/* 8016EE34 0016BF14  38 60 00 50 */	li r3, 0x50
/* 8016EE38 0016BF18  7F C4 F3 78 */	mr r4, r30
/* 8016EE3C 0016BF1C  4B FA 03 15 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8016EE40 0016BF20  7C 64 1B 79 */	mr. r4, r3
/* 8016EE44 0016BF24  41 82 00 14 */	beq .L_8016EE58
/* 8016EE48 0016BF28  7F C4 F3 78 */	mr r4, r30
/* 8016EE4C 0016BF2C  7F E5 FB 78 */	mr r5, r31
/* 8016EE50 0016BF30  48 00 11 2D */	bl __ct__21zNPCGoalBPlanktonMoveFiR13zNPCBPlankton
/* 8016EE54 0016BF34  7C 64 1B 78 */	mr r4, r3
.L_8016EE58:
/* 8016EE58 0016BF38  28 04 00 00 */	cmplwi r4, 0x0
/* 8016EE5C 0016BF3C  41 82 00 08 */	beq .L_8016EE64
/* 8016EE60 0016BF40  38 84 00 0C */	addi r4, r4, 0xc
.L_8016EE64:
/* 8016EE64 0016BF44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016EE68 0016BF48  7C 83 23 78 */	mr r3, r4
/* 8016EE6C 0016BF4C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016EE70 0016BF50  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016EE74 0016BF54  7C 08 03 A6 */	mtlr r0
/* 8016EE78 0016BF58  38 21 00 10 */	addi r1, r1, 0x10
/* 8016EE7C 0016BF5C  4E 80 00 20 */	blr
.endfn create__21zNPCGoalBPlanktonMoveFiP10RyzMemGrowPv

# zNPCGoalBPlanktonMove::Enter(float, void*)
.fn Enter__21zNPCGoalBPlanktonMoveFfPv, global
/* 8016EE80 0016BF60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016EE84 0016BF64  7C 08 02 A6 */	mflr r0
/* 8016EE88 0016BF68  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016EE8C 0016BF6C  4B F6 62 89 */	bl Enter__14zNPCGoalCommonFfPv
/* 8016EE90 0016BF70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016EE94 0016BF74  7C 08 03 A6 */	mtlr r0
/* 8016EE98 0016BF78  38 21 00 10 */	addi r1, r1, 0x10
/* 8016EE9C 0016BF7C  4E 80 00 20 */	blr
.endfn Enter__21zNPCGoalBPlanktonMoveFfPv

# zNPCGoalBPlanktonMove::Exit(float, void*)
.fn Exit__21zNPCGoalBPlanktonMoveFfPv, global
/* 8016EEA0 0016BF80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016EEA4 0016BF84  7C 08 02 A6 */	mflr r0
/* 8016EEA8 0016BF88  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016EEAC 0016BF8C  4B F6 65 71 */	bl Exit__5xGoalFfPv
/* 8016EEB0 0016BF90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016EEB4 0016BF94  7C 08 03 A6 */	mtlr r0
/* 8016EEB8 0016BF98  38 21 00 10 */	addi r1, r1, 0x10
/* 8016EEBC 0016BF9C  4E 80 00 20 */	blr
.endfn Exit__21zNPCGoalBPlanktonMoveFfPv

# zNPCGoalBPlanktonMove::Process(en_trantype*, float, void*, xScene*)
.fn Process__21zNPCGoalBPlanktonMoveFP11en_trantypefPvP6xScene, global
/* 8016EEC0 0016BFA0  38 60 00 00 */	li r3, 0x0
/* 8016EEC4 0016BFA4  4E 80 00 20 */	blr
.endfn Process__21zNPCGoalBPlanktonMoveFP11en_trantypefPvP6xScene

# zNPCGoalBPlanktonStun::create(int, RyzMemGrow*, void*)
.fn create__21zNPCGoalBPlanktonStunFiP10RyzMemGrowPv, global
/* 8016EEC8 0016BFA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016EECC 0016BFAC  7C 08 02 A6 */	mflr r0
/* 8016EED0 0016BFB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016EED4 0016BFB4  7C 80 23 78 */	mr r0, r4
/* 8016EED8 0016BFB8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016EEDC 0016BFBC  7C BF 2B 78 */	mr r31, r5
/* 8016EEE0 0016BFC0  7C 05 03 78 */	mr r5, r0
/* 8016EEE4 0016BFC4  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016EEE8 0016BFC8  7C 7E 1B 78 */	mr r30, r3
/* 8016EEEC 0016BFCC  38 60 00 50 */	li r3, 0x50
/* 8016EEF0 0016BFD0  7F C4 F3 78 */	mr r4, r30
/* 8016EEF4 0016BFD4  4B FA 02 5D */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8016EEF8 0016BFD8  7C 64 1B 79 */	mr. r4, r3
/* 8016EEFC 0016BFDC  41 82 00 14 */	beq .L_8016EF10
/* 8016EF00 0016BFE0  7F C4 F3 78 */	mr r4, r30
/* 8016EF04 0016BFE4  7F E5 FB 78 */	mr r5, r31
/* 8016EF08 0016BFE8  48 00 10 C1 */	bl __ct__21zNPCGoalBPlanktonStunFiR13zNPCBPlankton
/* 8016EF0C 0016BFEC  7C 64 1B 78 */	mr r4, r3
.L_8016EF10:
/* 8016EF10 0016BFF0  28 04 00 00 */	cmplwi r4, 0x0
/* 8016EF14 0016BFF4  41 82 00 08 */	beq .L_8016EF1C
/* 8016EF18 0016BFF8  38 84 00 0C */	addi r4, r4, 0xc
.L_8016EF1C:
/* 8016EF1C 0016BFFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016EF20 0016C000  7C 83 23 78 */	mr r3, r4
/* 8016EF24 0016C004  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016EF28 0016C008  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016EF2C 0016C00C  7C 08 03 A6 */	mtlr r0
/* 8016EF30 0016C010  38 21 00 10 */	addi r1, r1, 0x10
/* 8016EF34 0016C014  4E 80 00 20 */	blr
.endfn create__21zNPCGoalBPlanktonStunFiP10RyzMemGrowPv

# zNPCGoalBPlanktonStun::Enter(float, void*)
.fn Enter__21zNPCGoalBPlanktonStunFfPv, global
/* 8016EF38 0016C018  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016EF3C 0016C01C  7C 08 02 A6 */	mflr r0
/* 8016EF40 0016C020  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016EF44 0016C024  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8016EF48 0016C028  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8016EF4C 0016C02C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016EF50 0016C030  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016EF54 0016C034  7C 7E 1B 78 */	mr r30, r3
/* 8016EF58 0016C038  FF E0 08 90 */	fmr f31, f1
/* 8016EF5C 0016C03C  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8016EF60 0016C040  7C 9F 23 78 */	mr r31, r4
/* 8016EF64 0016C044  4B FF DF A9 */	bl reappear__13zNPCBPlanktonFv
/* 8016EF68 0016C048  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016EF6C 0016C04C  FC 20 F8 90 */	fmr f1, f31
/* 8016EF70 0016C050  80 BE 00 4C */	lwz r5, 0x4c(r30)
/* 8016EF74 0016C054  38 00 00 00 */	li r0, 0x0
/* 8016EF78 0016C058  7F C3 F3 78 */	mr r3, r30
/* 8016EF7C 0016C05C  7F E4 FB 78 */	mr r4, r31
/* 8016EF80 0016C060  D0 05 02 C8 */	stfs f0, 0x2c8(r5)
/* 8016EF84 0016C064  80 BE 00 4C */	lwz r5, 0x4c(r30)
/* 8016EF88 0016C068  90 05 02 C0 */	stw r0, 0x2c0(r5)
/* 8016EF8C 0016C06C  4B F6 61 89 */	bl Enter__14zNPCGoalCommonFfPv
/* 8016EF90 0016C070  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8016EF94 0016C074  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016EF98 0016C078  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8016EF9C 0016C07C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016EFA0 0016C080  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016EFA4 0016C084  7C 08 03 A6 */	mtlr r0
/* 8016EFA8 0016C088  38 21 00 20 */	addi r1, r1, 0x20
/* 8016EFAC 0016C08C  4E 80 00 20 */	blr
.endfn Enter__21zNPCGoalBPlanktonStunFfPv

# zNPCGoalBPlanktonStun::Exit(float, void*)
.fn Exit__21zNPCGoalBPlanktonStunFfPv, global
/* 8016EFB0 0016C090  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016EFB4 0016C094  7C 08 02 A6 */	mflr r0
/* 8016EFB8 0016C098  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016EFBC 0016C09C  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8016EFC0 0016C0A0  FF E0 08 90 */	fmr f31, f1
/* 8016EFC4 0016C0A4  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8016EFC8 0016C0A8  7C 9F 23 78 */	mr r31, r4
/* 8016EFCC 0016C0AC  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8016EFD0 0016C0B0  7C 7E 1B 78 */	mr r30, r3
/* 8016EFD4 0016C0B4  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8016EFD8 0016C0B8  48 00 10 3D */	bl give_control__13zNPCBPlanktonFv
/* 8016EFDC 0016C0BC  80 9E 00 4C */	lwz r4, 0x4c(r30)
/* 8016EFE0 0016C0C0  38 00 00 01 */	li r0, 0x1
/* 8016EFE4 0016C0C4  FC 20 F8 90 */	fmr f1, f31
/* 8016EFE8 0016C0C8  7F C3 F3 78 */	mr r3, r30
/* 8016EFEC 0016C0CC  90 04 02 C0 */	stw r0, 0x2c0(r4)
/* 8016EFF0 0016C0D0  7F E4 FB 78 */	mr r4, r31
/* 8016EFF4 0016C0D4  4B F6 64 29 */	bl Exit__5xGoalFfPv
/* 8016EFF8 0016C0D8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016EFFC 0016C0DC  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8016F000 0016C0E0  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8016F004 0016C0E4  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 8016F008 0016C0E8  7C 08 03 A6 */	mtlr r0
/* 8016F00C 0016C0EC  38 21 00 20 */	addi r1, r1, 0x20
/* 8016F010 0016C0F0  4E 80 00 20 */	blr
.endfn Exit__21zNPCGoalBPlanktonStunFfPv

# zNPCGoalBPlanktonStun::Process(en_trantype*, float, void*, xScene*)
.fn Process__21zNPCGoalBPlanktonStunFP11en_trantypefPvP6xScene, global
/* 8016F014 0016C0F4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016F018 0016C0F8  7C 08 02 A6 */	mflr r0
/* 8016F01C 0016C0FC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016F020 0016C100  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8016F024 0016C104  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8016F028 0016C108  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016F02C 0016C10C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016F030 0016C110  7C 7E 1B 78 */	mr r30, r3
/* 8016F034 0016C114  FF E0 08 90 */	fmr f31, f1
/* 8016F038 0016C118  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8016F03C 0016C11C  7C 9F 23 78 */	mr r31, r4
/* 8016F040 0016C120  4B F8 3F 5D */	bl AnimCurState__10zNPCCommonFv
/* 8016F044 0016C124  3C 80 80 2A */	lis r4, g_hash_bossanim@ha
/* 8016F048 0016C128  80 A3 00 08 */	lwz r5, 0x8(r3)
/* 8016F04C 0016C12C  38 84 92 68 */	addi r4, r4, g_hash_bossanim@l
/* 8016F050 0016C130  80 04 01 10 */	lwz r0, 0x110(r4)
/* 8016F054 0016C134  7C 05 00 40 */	cmplw r5, r0
/* 8016F058 0016C138  40 82 00 2C */	bne .L_8016F084
/* 8016F05C 0016C13C  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016F060 0016C140  C0 23 02 C8 */	lfs f1, 0x2c8(r3)
/* 8016F064 0016C144  C0 03 02 E4 */	lfs f0, 0x2e4(r3)
/* 8016F068 0016C148  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016F06C 0016C14C  4C 41 13 82 */	cror eq, gt, eq
/* 8016F070 0016C150  40 82 00 68 */	bne .L_8016F0D8
/* 8016F074 0016C154  80 84 01 14 */	lwz r4, 0x114(r4)
/* 8016F078 0016C158  38 A0 00 00 */	li r5, 0x0
/* 8016F07C 0016C15C  4B F8 3D 15 */	bl AnimStart__10zNPCCommonFUii
/* 8016F080 0016C160  48 00 00 58 */	b .L_8016F0D8
.L_8016F084:
/* 8016F084 0016C164  80 64 01 14 */	lwz r3, 0x114(r4)
/* 8016F088 0016C168  80 04 01 0C */	lwz r0, 0x10c(r4)
/* 8016F08C 0016C16C  7C 65 18 50 */	subf r3, r5, r3
/* 8016F090 0016C170  7C 63 00 34 */	cntlzw r3, r3
/* 8016F094 0016C174  7C 05 00 40 */	cmplw r5, r0
/* 8016F098 0016C178  54 63 D9 7E */	srwi r3, r3, 5
/* 8016F09C 0016C17C  41 82 00 0C */	beq .L_8016F0A8
/* 8016F0A0 0016C180  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8016F0A4 0016C184  41 82 00 20 */	beq .L_8016F0C4
.L_8016F0A8:
/* 8016F0A8 0016C188  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8016F0AC 0016C18C  41 82 00 2C */	beq .L_8016F0D8
/* 8016F0B0 0016C190  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016F0B4 0016C194  38 80 00 00 */	li r4, 0x0
/* 8016F0B8 0016C198  4B F8 3F C1 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 8016F0BC 0016C19C  FC 1F 08 40 */	fcmpo cr0, f31, f1
/* 8016F0C0 0016C1A0  40 81 00 18 */	ble .L_8016F0D8
.L_8016F0C4:
/* 8016F0C4 0016C1A4  38 00 00 01 */	li r0, 0x1
/* 8016F0C8 0016C1A8  90 1F 00 00 */	stw r0, 0x0(r31)
/* 8016F0CC 0016C1AC  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016F0D0 0016C1B0  4B FF C8 45 */	bl next_goal__13zNPCBPlanktonFv
/* 8016F0D4 0016C1B4  48 00 00 08 */	b .L_8016F0DC
.L_8016F0D8:
/* 8016F0D8 0016C1B8  38 60 00 00 */	li r3, 0x0
.L_8016F0DC:
/* 8016F0DC 0016C1BC  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8016F0E0 0016C1C0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016F0E4 0016C1C4  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8016F0E8 0016C1C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016F0EC 0016C1CC  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016F0F0 0016C1D0  7C 08 03 A6 */	mtlr r0
/* 8016F0F4 0016C1D4  38 21 00 20 */	addi r1, r1, 0x20
/* 8016F0F8 0016C1D8  4E 80 00 20 */	blr
.endfn Process__21zNPCGoalBPlanktonStunFP11en_trantypefPvP6xScene

# zNPCGoalBPlanktonFall::create(int, RyzMemGrow*, void*)
.fn create__21zNPCGoalBPlanktonFallFiP10RyzMemGrowPv, global
/* 8016F0FC 0016C1DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016F100 0016C1E0  7C 08 02 A6 */	mflr r0
/* 8016F104 0016C1E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016F108 0016C1E8  7C 80 23 78 */	mr r0, r4
/* 8016F10C 0016C1EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016F110 0016C1F0  7C BF 2B 78 */	mr r31, r5
/* 8016F114 0016C1F4  7C 05 03 78 */	mr r5, r0
/* 8016F118 0016C1F8  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016F11C 0016C1FC  7C 7E 1B 78 */	mr r30, r3
/* 8016F120 0016C200  38 60 00 50 */	li r3, 0x50
/* 8016F124 0016C204  7F C4 F3 78 */	mr r4, r30
/* 8016F128 0016C208  4B FA 00 29 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8016F12C 0016C20C  7C 64 1B 79 */	mr. r4, r3
/* 8016F130 0016C210  41 82 00 14 */	beq .L_8016F144
/* 8016F134 0016C214  7F C4 F3 78 */	mr r4, r30
/* 8016F138 0016C218  7F E5 FB 78 */	mr r5, r31
/* 8016F13C 0016C21C  48 00 0F 11 */	bl __ct__21zNPCGoalBPlanktonFallFiR13zNPCBPlankton
/* 8016F140 0016C220  7C 64 1B 78 */	mr r4, r3
.L_8016F144:
/* 8016F144 0016C224  28 04 00 00 */	cmplwi r4, 0x0
/* 8016F148 0016C228  41 82 00 08 */	beq .L_8016F150
/* 8016F14C 0016C22C  38 84 00 0C */	addi r4, r4, 0xc
.L_8016F150:
/* 8016F150 0016C230  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016F154 0016C234  7C 83 23 78 */	mr r3, r4
/* 8016F158 0016C238  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016F15C 0016C23C  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016F160 0016C240  7C 08 03 A6 */	mtlr r0
/* 8016F164 0016C244  38 21 00 10 */	addi r1, r1, 0x10
/* 8016F168 0016C248  4E 80 00 20 */	blr
.endfn create__21zNPCGoalBPlanktonFallFiP10RyzMemGrowPv

# zNPCGoalBPlanktonFall::Enter(float, void*)
.fn Enter__21zNPCGoalBPlanktonFallFfPv, global
/* 8016F16C 0016C24C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016F170 0016C250  7C 08 02 A6 */	mflr r0
/* 8016F174 0016C254  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016F178 0016C258  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8016F17C 0016C25C  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8016F180 0016C260  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016F184 0016C264  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016F188 0016C268  7C 7E 1B 78 */	mr r30, r3
/* 8016F18C 0016C26C  FF E0 08 90 */	fmr f31, f1
/* 8016F190 0016C270  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8016F194 0016C274  7C 9F 23 78 */	mr r31, r4
/* 8016F198 0016C278  4B FF DD 75 */	bl reappear__13zNPCBPlanktonFv
/* 8016F19C 0016C27C  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016F1A0 0016C280  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016F1A4 0016C284  80 BE 00 4C */	lwz r5, 0x4c(r30)
/* 8016F1A8 0016C288  38 00 00 00 */	li r0, 0x0
/* 8016F1AC 0016C28C  38 83 A1 A0 */	addi r4, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016F1B0 0016C290  D0 05 02 C8 */	stfs f0, 0x2c8(r5)
/* 8016F1B4 0016C294  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016F1B8 0016C298  90 03 02 C0 */	stw r0, 0x2c0(r3)
/* 8016F1BC 0016C29C  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016F1C0 0016C2A0  C0 24 01 18 */	lfs f1, 0x118(r4)
/* 8016F1C4 0016C2A4  C0 44 01 1C */	lfs f2, 0x11c(r4)
/* 8016F1C8 0016C2A8  4B FF E8 6D */	bl fall__13zNPCBPlanktonFff
/* 8016F1CC 0016C2AC  FC 20 F8 90 */	fmr f1, f31
/* 8016F1D0 0016C2B0  7F C3 F3 78 */	mr r3, r30
/* 8016F1D4 0016C2B4  7F E4 FB 78 */	mr r4, r31
/* 8016F1D8 0016C2B8  4B F6 5F 3D */	bl Enter__14zNPCGoalCommonFfPv
/* 8016F1DC 0016C2BC  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8016F1E0 0016C2C0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016F1E4 0016C2C4  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8016F1E8 0016C2C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016F1EC 0016C2CC  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016F1F0 0016C2D0  7C 08 03 A6 */	mtlr r0
/* 8016F1F4 0016C2D4  38 21 00 20 */	addi r1, r1, 0x20
/* 8016F1F8 0016C2D8  4E 80 00 20 */	blr
.endfn Enter__21zNPCGoalBPlanktonFallFfPv

# zNPCGoalBPlanktonFall::Exit(float, void*)
.fn Exit__21zNPCGoalBPlanktonFallFfPv, global
/* 8016F1FC 0016C2DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016F200 0016C2E0  7C 08 02 A6 */	mflr r0
/* 8016F204 0016C2E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016F208 0016C2E8  38 00 00 01 */	li r0, 0x1
/* 8016F20C 0016C2EC  80 A3 00 4C */	lwz r5, 0x4c(r3)
/* 8016F210 0016C2F0  90 05 02 C0 */	stw r0, 0x2c0(r5)
/* 8016F214 0016C2F4  4B F6 62 09 */	bl Exit__5xGoalFfPv
/* 8016F218 0016C2F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016F21C 0016C2FC  7C 08 03 A6 */	mtlr r0
/* 8016F220 0016C300  38 21 00 10 */	addi r1, r1, 0x10
/* 8016F224 0016C304  4E 80 00 20 */	blr
.endfn Exit__21zNPCGoalBPlanktonFallFfPv

# zNPCGoalBPlanktonFall::Process(en_trantype*, float, void*, xScene*)
.fn Process__21zNPCGoalBPlanktonFallFP11en_trantypefPvP6xScene, global
/* 8016F228 0016C308  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016F22C 0016C30C  7C 08 02 A6 */	mflr r0
/* 8016F230 0016C310  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016F234 0016C314  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016F238 0016C318  7C 9F 23 78 */	mr r31, r4
/* 8016F23C 0016C31C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016F240 0016C320  7C 7E 1B 78 */	mr r30, r3
/* 8016F244 0016C324  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8016F248 0016C328  48 00 09 71 */	bl location__13zNPCBPlanktonCFv
/* 8016F24C 0016C32C  80 BE 00 4C */	lwz r5, 0x4c(r30)
/* 8016F250 0016C330  3C 80 80 33 */	lis r4, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016F254 0016C334  38 84 A1 A0 */	addi r4, r4, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016F258 0016C338  C0 43 00 04 */	lfs f2, 0x4(r3)
/* 8016F25C 0016C33C  C0 25 04 54 */	lfs f1, 0x454(r5)
/* 8016F260 0016C340  C0 04 01 20 */	lfs f0, 0x120(r4)
/* 8016F264 0016C344  EC 21 10 28 */	fsubs f1, f1, f2
/* 8016F268 0016C348  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016F26C 0016C34C  4C 41 13 82 */	cror eq, gt, eq
/* 8016F270 0016C350  40 82 00 34 */	bne .L_8016F2A4
/* 8016F274 0016C354  7C A3 2B 78 */	mr r3, r5
/* 8016F278 0016C358  4B FF E3 69 */	bl next_territory__13zNPCBPlanktonFv
/* 8016F27C 0016C35C  3C 80 80 33 */	lis r4, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016F280 0016C360  3C 60 4E 47 */	lis r3, 0x4e47
/* 8016F284 0016C364  38 A4 A1 A0 */	addi r5, r4, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016F288 0016C368  80 9E 00 4C */	lwz r4, 0x4c(r30)
/* 8016F28C 0016C36C  C0 05 01 08 */	lfs f0, 0x108(r5)
/* 8016F290 0016C370  38 00 00 01 */	li r0, 0x1
/* 8016F294 0016C374  38 63 42 4D */	addi r3, r3, 0x424d
/* 8016F298 0016C378  D0 04 02 DC */	stfs f0, 0x2dc(r4)
/* 8016F29C 0016C37C  90 1F 00 00 */	stw r0, 0x0(r31)
/* 8016F2A0 0016C380  48 00 00 08 */	b .L_8016F2A8
.L_8016F2A4:
/* 8016F2A4 0016C384  38 60 00 00 */	li r3, 0x0
.L_8016F2A8:
/* 8016F2A8 0016C388  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016F2AC 0016C38C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016F2B0 0016C390  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016F2B4 0016C394  7C 08 03 A6 */	mtlr r0
/* 8016F2B8 0016C398  38 21 00 10 */	addi r1, r1, 0x10
/* 8016F2BC 0016C39C  4E 80 00 20 */	blr
.endfn Process__21zNPCGoalBPlanktonFallFP11en_trantypefPvP6xScene

# zNPCGoalBPlanktonDizzy::create(int, RyzMemGrow*, void*)
.fn create__22zNPCGoalBPlanktonDizzyFiP10RyzMemGrowPv, global
/* 8016F2C0 0016C3A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016F2C4 0016C3A4  7C 08 02 A6 */	mflr r0
/* 8016F2C8 0016C3A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016F2CC 0016C3AC  7C 80 23 78 */	mr r0, r4
/* 8016F2D0 0016C3B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016F2D4 0016C3B4  7C BF 2B 78 */	mr r31, r5
/* 8016F2D8 0016C3B8  7C 05 03 78 */	mr r5, r0
/* 8016F2DC 0016C3BC  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016F2E0 0016C3C0  7C 7E 1B 78 */	mr r30, r3
/* 8016F2E4 0016C3C4  38 60 00 50 */	li r3, 0x50
/* 8016F2E8 0016C3C8  7F C4 F3 78 */	mr r4, r30
/* 8016F2EC 0016C3CC  4B F9 FE 65 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8016F2F0 0016C3D0  7C 64 1B 79 */	mr. r4, r3
/* 8016F2F4 0016C3D4  41 82 00 14 */	beq .L_8016F308
/* 8016F2F8 0016C3D8  7F C4 F3 78 */	mr r4, r30
/* 8016F2FC 0016C3DC  7F E5 FB 78 */	mr r5, r31
/* 8016F300 0016C3E0  48 00 0D 99 */	bl __ct__22zNPCGoalBPlanktonDizzyFiR13zNPCBPlankton
/* 8016F304 0016C3E4  7C 64 1B 78 */	mr r4, r3
.L_8016F308:
/* 8016F308 0016C3E8  28 04 00 00 */	cmplwi r4, 0x0
/* 8016F30C 0016C3EC  41 82 00 08 */	beq .L_8016F314
/* 8016F310 0016C3F0  38 84 00 0C */	addi r4, r4, 0xc
.L_8016F314:
/* 8016F314 0016C3F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016F318 0016C3F8  7C 83 23 78 */	mr r3, r4
/* 8016F31C 0016C3FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016F320 0016C400  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016F324 0016C404  7C 08 03 A6 */	mtlr r0
/* 8016F328 0016C408  38 21 00 10 */	addi r1, r1, 0x10
/* 8016F32C 0016C40C  4E 80 00 20 */	blr
.endfn create__22zNPCGoalBPlanktonDizzyFiP10RyzMemGrowPv

# zNPCGoalBPlanktonDizzy::Enter(float, void*)
.fn Enter__22zNPCGoalBPlanktonDizzyFfPv, global
/* 8016F330 0016C410  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016F334 0016C414  7C 08 02 A6 */	mflr r0
/* 8016F338 0016C418  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016F33C 0016C41C  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8016F340 0016C420  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8016F344 0016C424  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016F348 0016C428  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016F34C 0016C42C  7C 7E 1B 78 */	mr r30, r3
/* 8016F350 0016C430  FF E0 08 90 */	fmr f31, f1
/* 8016F354 0016C434  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8016F358 0016C438  7C 9F 23 78 */	mr r31, r4
/* 8016F35C 0016C43C  48 00 0C B9 */	bl give_control__13zNPCBPlanktonFv
/* 8016F360 0016C440  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016F364 0016C444  FC 20 F8 90 */	fmr f1, f31
/* 8016F368 0016C448  80 BE 00 4C */	lwz r5, 0x4c(r30)
/* 8016F36C 0016C44C  38 00 00 00 */	li r0, 0x0
/* 8016F370 0016C450  7F C3 F3 78 */	mr r3, r30
/* 8016F374 0016C454  7F E4 FB 78 */	mr r4, r31
/* 8016F378 0016C458  D0 05 02 C8 */	stfs f0, 0x2c8(r5)
/* 8016F37C 0016C45C  80 BE 00 4C */	lwz r5, 0x4c(r30)
/* 8016F380 0016C460  90 05 02 C0 */	stw r0, 0x2c0(r5)
/* 8016F384 0016C464  4B F6 5D 91 */	bl Enter__14zNPCGoalCommonFfPv
/* 8016F388 0016C468  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8016F38C 0016C46C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016F390 0016C470  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8016F394 0016C474  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016F398 0016C478  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016F39C 0016C47C  7C 08 03 A6 */	mtlr r0
/* 8016F3A0 0016C480  38 21 00 20 */	addi r1, r1, 0x20
/* 8016F3A4 0016C484  4E 80 00 20 */	blr
.endfn Enter__22zNPCGoalBPlanktonDizzyFfPv

# zNPCGoalBPlanktonDizzy::Exit(float, void*)
.fn Exit__22zNPCGoalBPlanktonDizzyFfPv, global
/* 8016F3A8 0016C488  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016F3AC 0016C48C  7C 08 02 A6 */	mflr r0
/* 8016F3B0 0016C490  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016F3B4 0016C494  38 00 00 01 */	li r0, 0x1
/* 8016F3B8 0016C498  80 A3 00 4C */	lwz r5, 0x4c(r3)
/* 8016F3BC 0016C49C  90 05 02 C0 */	stw r0, 0x2c0(r5)
/* 8016F3C0 0016C4A0  4B F6 60 5D */	bl Exit__5xGoalFfPv
/* 8016F3C4 0016C4A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016F3C8 0016C4A8  7C 08 03 A6 */	mtlr r0
/* 8016F3CC 0016C4AC  38 21 00 10 */	addi r1, r1, 0x10
/* 8016F3D0 0016C4B0  4E 80 00 20 */	blr
.endfn Exit__22zNPCGoalBPlanktonDizzyFfPv

# zNPCGoalBPlanktonDizzy::Process(en_trantype*, float, void*, xScene*)
.fn Process__22zNPCGoalBPlanktonDizzyFP11en_trantypefPvP6xScene, global
/* 8016F3D4 0016C4B4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016F3D8 0016C4B8  7C 08 02 A6 */	mflr r0
/* 8016F3DC 0016C4BC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016F3E0 0016C4C0  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8016F3E4 0016C4C4  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8016F3E8 0016C4C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016F3EC 0016C4CC  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016F3F0 0016C4D0  7C 7E 1B 78 */	mr r30, r3
/* 8016F3F4 0016C4D4  FF E0 08 90 */	fmr f31, f1
/* 8016F3F8 0016C4D8  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8016F3FC 0016C4DC  7C 9F 23 78 */	mr r31, r4
/* 8016F400 0016C4E0  4B F8 3B 9D */	bl AnimCurState__10zNPCCommonFv
/* 8016F404 0016C4E4  3C 80 80 2A */	lis r4, g_hash_bossanim@ha
/* 8016F408 0016C4E8  80 A3 00 08 */	lwz r5, 0x8(r3)
/* 8016F40C 0016C4EC  38 84 92 68 */	addi r4, r4, g_hash_bossanim@l
/* 8016F410 0016C4F0  80 04 01 10 */	lwz r0, 0x110(r4)
/* 8016F414 0016C4F4  7C 05 00 40 */	cmplw r5, r0
/* 8016F418 0016C4F8  40 82 00 48 */	bne .L_8016F460
/* 8016F41C 0016C4FC  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016F420 0016C500  C0 23 02 C8 */	lfs f1, 0x2c8(r3)
/* 8016F424 0016C504  C0 03 02 E4 */	lfs f0, 0x2e4(r3)
/* 8016F428 0016C508  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016F42C 0016C50C  4C 41 13 82 */	cror eq, gt, eq
/* 8016F430 0016C510  40 82 00 84 */	bne .L_8016F4B4
/* 8016F434 0016C514  38 80 00 00 */	li r4, 0x0
/* 8016F438 0016C518  4B F8 3C 41 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 8016F43C 0016C51C  FC 1F 08 40 */	fcmpo cr0, f31, f1
/* 8016F440 0016C520  40 81 00 74 */	ble .L_8016F4B4
/* 8016F444 0016C524  3C 80 80 2A */	lis r4, g_hash_bossanim@ha
/* 8016F448 0016C528  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016F44C 0016C52C  38 84 92 68 */	addi r4, r4, g_hash_bossanim@l
/* 8016F450 0016C530  38 A0 00 00 */	li r5, 0x0
/* 8016F454 0016C534  80 84 01 14 */	lwz r4, 0x114(r4)
/* 8016F458 0016C538  4B F8 39 39 */	bl AnimStart__10zNPCCommonFUii
/* 8016F45C 0016C53C  48 00 00 58 */	b .L_8016F4B4
.L_8016F460:
/* 8016F460 0016C540  80 64 01 14 */	lwz r3, 0x114(r4)
/* 8016F464 0016C544  80 04 01 0C */	lwz r0, 0x10c(r4)
/* 8016F468 0016C548  7C 65 18 50 */	subf r3, r5, r3
/* 8016F46C 0016C54C  7C 63 00 34 */	cntlzw r3, r3
/* 8016F470 0016C550  7C 05 00 40 */	cmplw r5, r0
/* 8016F474 0016C554  54 63 D9 7E */	srwi r3, r3, 5
/* 8016F478 0016C558  41 82 00 0C */	beq .L_8016F484
/* 8016F47C 0016C55C  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8016F480 0016C560  41 82 00 20 */	beq .L_8016F4A0
.L_8016F484:
/* 8016F484 0016C564  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8016F488 0016C568  41 82 00 2C */	beq .L_8016F4B4
/* 8016F48C 0016C56C  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8016F490 0016C570  38 80 00 00 */	li r4, 0x0
/* 8016F494 0016C574  4B F8 3B E5 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 8016F498 0016C578  FC 1F 08 40 */	fcmpo cr0, f31, f1
/* 8016F49C 0016C57C  40 81 00 18 */	ble .L_8016F4B4
.L_8016F4A0:
/* 8016F4A0 0016C580  38 00 00 01 */	li r0, 0x1
/* 8016F4A4 0016C584  3C 60 4E 47 */	lis r3, 0x4e47
/* 8016F4A8 0016C588  90 1F 00 00 */	stw r0, 0x0(r31)
/* 8016F4AC 0016C58C  38 63 42 4B */	addi r3, r3, 0x424b
/* 8016F4B0 0016C590  48 00 00 08 */	b .L_8016F4B8
.L_8016F4B4:
/* 8016F4B4 0016C594  38 60 00 00 */	li r3, 0x0
.L_8016F4B8:
/* 8016F4B8 0016C598  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8016F4BC 0016C59C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016F4C0 0016C5A0  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8016F4C4 0016C5A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016F4C8 0016C5A8  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016F4CC 0016C5AC  7C 08 03 A6 */	mtlr r0
/* 8016F4D0 0016C5B0  38 21 00 20 */	addi r1, r1, 0x20
/* 8016F4D4 0016C5B4  4E 80 00 20 */	blr
.endfn Process__22zNPCGoalBPlanktonDizzyFP11en_trantypefPvP6xScene

# zNPCGoalBPlanktonBeam::create(int, RyzMemGrow*, void*)
.fn create__21zNPCGoalBPlanktonBeamFiP10RyzMemGrowPv, global
/* 8016F4D8 0016C5B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016F4DC 0016C5BC  7C 08 02 A6 */	mflr r0
/* 8016F4E0 0016C5C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016F4E4 0016C5C4  7C 80 23 78 */	mr r0, r4
/* 8016F4E8 0016C5C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016F4EC 0016C5CC  7C BF 2B 78 */	mr r31, r5
/* 8016F4F0 0016C5D0  7C 05 03 78 */	mr r5, r0
/* 8016F4F4 0016C5D4  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016F4F8 0016C5D8  7C 7E 1B 78 */	mr r30, r3
/* 8016F4FC 0016C5DC  38 60 00 58 */	li r3, 0x58
/* 8016F500 0016C5E0  7F C4 F3 78 */	mr r4, r30
/* 8016F504 0016C5E4  4B F9 FC 4D */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8016F508 0016C5E8  7C 64 1B 79 */	mr. r4, r3
/* 8016F50C 0016C5EC  41 82 00 14 */	beq .L_8016F520
/* 8016F510 0016C5F0  7F C4 F3 78 */	mr r4, r30
/* 8016F514 0016C5F4  7F E5 FB 78 */	mr r5, r31
/* 8016F518 0016C5F8  48 00 0B CD */	bl __ct__21zNPCGoalBPlanktonBeamFiR13zNPCBPlankton
/* 8016F51C 0016C5FC  7C 64 1B 78 */	mr r4, r3
.L_8016F520:
/* 8016F520 0016C600  28 04 00 00 */	cmplwi r4, 0x0
/* 8016F524 0016C604  41 82 00 08 */	beq .L_8016F52C
/* 8016F528 0016C608  38 84 00 0C */	addi r4, r4, 0xc
.L_8016F52C:
/* 8016F52C 0016C60C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016F530 0016C610  7C 83 23 78 */	mr r3, r4
/* 8016F534 0016C614  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016F538 0016C618  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016F53C 0016C61C  7C 08 03 A6 */	mtlr r0
/* 8016F540 0016C620  38 21 00 10 */	addi r1, r1, 0x10
/* 8016F544 0016C624  4E 80 00 20 */	blr
.endfn create__21zNPCGoalBPlanktonBeamFiP10RyzMemGrowPv

# zNPCGoalBPlanktonBeam::Enter(float, void*)
.fn Enter__21zNPCGoalBPlanktonBeamFfPv, global
/* 8016F548 0016C628  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016F54C 0016C62C  7C 08 02 A6 */	mflr r0
/* 8016F550 0016C630  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016F554 0016C634  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8016F558 0016C638  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8016F55C 0016C63C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016F560 0016C640  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016F564 0016C644  7C 7E 1B 78 */	mr r30, r3
/* 8016F568 0016C648  FF E0 08 90 */	fmr f31, f1
/* 8016F56C 0016C64C  80 63 00 54 */	lwz r3, 0x54(r3)
/* 8016F570 0016C650  7C 9F 23 78 */	mr r31, r4
/* 8016F574 0016C654  4B FF D9 99 */	bl reappear__13zNPCBPlanktonFv
/* 8016F578 0016C658  38 80 00 00 */	li r4, 0x0
/* 8016F57C 0016C65C  38 00 00 01 */	li r0, 0x1
/* 8016F580 0016C660  90 9E 00 50 */	stw r4, 0x50(r30)
/* 8016F584 0016C664  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016F588 0016C668  80 7E 00 54 */	lwz r3, 0x54(r30)
/* 8016F58C 0016C66C  D0 03 02 C8 */	stfs f0, 0x2c8(r3)
/* 8016F590 0016C670  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016F594 0016C674  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 8016F598 0016C678  80 7E 00 54 */	lwz r3, 0x54(r30)
/* 8016F59C 0016C67C  98 03 02 B8 */	stb r0, 0x2b8(r3)
/* 8016F5A0 0016C680  80 7E 00 54 */	lwz r3, 0x54(r30)
/* 8016F5A4 0016C684  90 83 02 C0 */	stw r4, 0x2c0(r3)
/* 8016F5A8 0016C688  80 7E 00 54 */	lwz r3, 0x54(r30)
/* 8016F5AC 0016C68C  80 83 04 4C */	lwz r4, 0x44c(r3)
/* 8016F5B0 0016C690  48 00 0B 81 */	bl enable_emitter__13zNPCBPlanktonCFR11xParEmitter
/* 8016F5B4 0016C694  80 9E 00 54 */	lwz r4, 0x54(r30)
/* 8016F5B8 0016C698  38 60 00 05 */	li r3, 0x5
/* 8016F5BC 0016C69C  C0 22 AB 0C */	lfs f1, "@1585"@sda21(r2)
/* 8016F5C0 0016C6A0  38 84 00 88 */	addi r4, r4, 0x88
/* 8016F5C4 0016C6A4  4B FF 95 F5 */	bl "play_sound__34@unnamed@zNPCTypeBossPlankton_cpp@FiPC5xVec3f"
/* 8016F5C8 0016C6A8  FC 20 F8 90 */	fmr f1, f31
/* 8016F5CC 0016C6AC  7F C3 F3 78 */	mr r3, r30
/* 8016F5D0 0016C6B0  7F E4 FB 78 */	mr r4, r31
/* 8016F5D4 0016C6B4  4B F6 5B 41 */	bl Enter__14zNPCGoalCommonFfPv
/* 8016F5D8 0016C6B8  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8016F5DC 0016C6BC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016F5E0 0016C6C0  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8016F5E4 0016C6C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016F5E8 0016C6C8  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016F5EC 0016C6CC  7C 08 03 A6 */	mtlr r0
/* 8016F5F0 0016C6D0  38 21 00 20 */	addi r1, r1, 0x20
/* 8016F5F4 0016C6D4  4E 80 00 20 */	blr
.endfn Enter__21zNPCGoalBPlanktonBeamFfPv

# zNPCGoalBPlanktonBeam::Exit(float, void*)
.fn Exit__21zNPCGoalBPlanktonBeamFfPv, global
/* 8016F5F8 0016C6D8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016F5FC 0016C6DC  7C 08 02 A6 */	mflr r0
/* 8016F600 0016C6E0  38 A0 00 00 */	li r5, 0x0
/* 8016F604 0016C6E4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016F608 0016C6E8  38 00 00 01 */	li r0, 0x1
/* 8016F60C 0016C6EC  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8016F610 0016C6F0  FF E0 08 90 */	fmr f31, f1
/* 8016F614 0016C6F4  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8016F618 0016C6F8  7C 9F 23 78 */	mr r31, r4
/* 8016F61C 0016C6FC  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8016F620 0016C700  7C 7E 1B 78 */	mr r30, r3
/* 8016F624 0016C704  80 63 00 54 */	lwz r3, 0x54(r3)
/* 8016F628 0016C708  98 A3 02 B8 */	stb r5, 0x2b8(r3)
/* 8016F62C 0016C70C  80 7E 00 54 */	lwz r3, 0x54(r30)
/* 8016F630 0016C710  90 03 02 C0 */	stw r0, 0x2c0(r3)
/* 8016F634 0016C714  80 7E 00 54 */	lwz r3, 0x54(r30)
/* 8016F638 0016C718  80 83 04 4C */	lwz r4, 0x44c(r3)
/* 8016F63C 0016C71C  48 00 0B 05 */	bl disable_emitter__13zNPCBPlanktonCFR11xParEmitter
/* 8016F640 0016C720  FC 20 F8 90 */	fmr f1, f31
/* 8016F644 0016C724  7F C3 F3 78 */	mr r3, r30
/* 8016F648 0016C728  7F E4 FB 78 */	mr r4, r31
/* 8016F64C 0016C72C  4B F6 5D D1 */	bl Exit__5xGoalFfPv
/* 8016F650 0016C730  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016F654 0016C734  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8016F658 0016C738  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8016F65C 0016C73C  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 8016F660 0016C740  7C 08 03 A6 */	mtlr r0
/* 8016F664 0016C744  38 21 00 20 */	addi r1, r1, 0x20
/* 8016F668 0016C748  4E 80 00 20 */	blr
.endfn Exit__21zNPCGoalBPlanktonBeamFfPv

# zNPCGoalBPlanktonBeam::Process(en_trantype*, float, void*, xScene*)
.fn Process__21zNPCGoalBPlanktonBeamFP11en_trantypefPvP6xScene, global
/* 8016F66C 0016C74C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016F670 0016C750  7C 08 02 A6 */	mflr r0
/* 8016F674 0016C754  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016F678 0016C758  80 03 00 50 */	lwz r0, 0x50(r3)
/* 8016F67C 0016C75C  2C 00 00 02 */	cmpwi r0, 0x2
/* 8016F680 0016C760  41 82 00 34 */	beq .L_8016F6B4
/* 8016F684 0016C764  40 80 00 14 */	bge .L_8016F698
/* 8016F688 0016C768  2C 00 00 00 */	cmpwi r0, 0x0
/* 8016F68C 0016C76C  41 82 00 18 */	beq .L_8016F6A4
/* 8016F690 0016C770  40 80 00 1C */	bge .L_8016F6AC
/* 8016F694 0016C774  48 00 00 3C */	b .L_8016F6D0
.L_8016F698:
/* 8016F698 0016C778  2C 00 00 04 */	cmpwi r0, 0x4
/* 8016F69C 0016C77C  40 80 00 34 */	bge .L_8016F6D0
/* 8016F6A0 0016C780  48 00 00 1C */	b .L_8016F6BC
.L_8016F6A4:
/* 8016F6A4 0016C784  48 00 00 41 */	bl update_warm_up__21zNPCGoalBPlanktonBeamFf
/* 8016F6A8 0016C788  48 00 00 28 */	b .L_8016F6D0
.L_8016F6AC:
/* 8016F6AC 0016C78C  48 00 00 91 */	bl update_fire__21zNPCGoalBPlanktonBeamFf
/* 8016F6B0 0016C790  48 00 00 20 */	b .L_8016F6D0
.L_8016F6B4:
/* 8016F6B4 0016C794  48 00 02 5D */	bl update_cool_down__21zNPCGoalBPlanktonBeamFf
/* 8016F6B8 0016C798  48 00 00 18 */	b .L_8016F6D0
.L_8016F6BC:
/* 8016F6BC 0016C79C  38 00 00 01 */	li r0, 0x1
/* 8016F6C0 0016C7A0  90 04 00 00 */	stw r0, 0x0(r4)
/* 8016F6C4 0016C7A4  80 63 00 54 */	lwz r3, 0x54(r3)
/* 8016F6C8 0016C7A8  4B FF C2 4D */	bl next_goal__13zNPCBPlanktonFv
/* 8016F6CC 0016C7AC  48 00 00 08 */	b .L_8016F6D4
.L_8016F6D0:
/* 8016F6D0 0016C7B0  38 60 00 00 */	li r3, 0x0
.L_8016F6D4:
/* 8016F6D4 0016C7B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016F6D8 0016C7B8  7C 08 03 A6 */	mtlr r0
/* 8016F6DC 0016C7BC  38 21 00 10 */	addi r1, r1, 0x10
/* 8016F6E0 0016C7C0  4E 80 00 20 */	blr
.endfn Process__21zNPCGoalBPlanktonBeamFP11en_trantypefPvP6xScene

# zNPCGoalBPlanktonBeam::update_warm_up(float)
.fn update_warm_up__21zNPCGoalBPlanktonBeamFf, global
/* 8016F6E4 0016C7C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016F6E8 0016C7C8  7C 08 02 A6 */	mflr r0
/* 8016F6EC 0016C7CC  3C 80 80 33 */	lis r4, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016F6F0 0016C7D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016F6F4 0016C7D4  38 84 A1 A0 */	addi r4, r4, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016F6F8 0016C7D8  80 A3 00 54 */	lwz r5, 0x54(r3)
/* 8016F6FC 0016C7DC  C0 04 00 A4 */	lfs f0, 0xa4(r4)
/* 8016F700 0016C7E0  C0 25 02 C8 */	lfs f1, 0x2c8(r5)
/* 8016F704 0016C7E4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016F708 0016C7E8  4C 41 13 82 */	cror eq, gt, eq
/* 8016F70C 0016C7EC  40 82 00 20 */	bne .L_8016F72C
/* 8016F710 0016C7F0  C0 02 AB 10 */	lfs f0, "@1586"@sda21(r2)
/* 8016F714 0016C7F4  38 00 00 01 */	li r0, 0x1
/* 8016F718 0016C7F8  D0 05 02 C8 */	stfs f0, 0x2c8(r5)
/* 8016F71C 0016C7FC  90 03 00 50 */	stw r0, 0x50(r3)
/* 8016F720 0016C800  80 63 00 54 */	lwz r3, 0x54(r3)
/* 8016F724 0016C804  80 83 04 4C */	lwz r4, 0x44c(r3)
/* 8016F728 0016C808  48 00 0A 19 */	bl disable_emitter__13zNPCBPlanktonCFR11xParEmitter
.L_8016F72C:
/* 8016F72C 0016C80C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016F730 0016C810  7C 08 03 A6 */	mtlr r0
/* 8016F734 0016C814  38 21 00 10 */	addi r1, r1, 0x10
/* 8016F738 0016C818  4E 80 00 20 */	blr
.endfn update_warm_up__21zNPCGoalBPlanktonBeamFf

# zNPCGoalBPlanktonBeam::update_fire(float)
.fn update_fire__21zNPCGoalBPlanktonBeamFf, global
/* 8016F73C 0016C81C  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 8016F740 0016C820  7C 08 02 A6 */	mflr r0
/* 8016F744 0016C824  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 8016F748 0016C828  DB E1 00 A0 */	stfd f31, 0xa0(r1)
/* 8016F74C 0016C82C  F3 E1 00 A8 */	psq_st f31, 0xa8(r1), 0, qr0
/* 8016F750 0016C830  BF 61 00 8C */	stmw r27, 0x8c(r1)
/* 8016F754 0016C834  7C 7F 1B 78 */	mr r31, r3
/* 8016F758 0016C838  FF E0 08 90 */	fmr f31, f1
/* 8016F75C 0016C83C  80 63 00 54 */	lwz r3, 0x54(r3)
/* 8016F760 0016C840  C0 23 02 C8 */	lfs f1, 0x2c8(r3)
/* 8016F764 0016C844  C0 03 02 E0 */	lfs f0, 0x2e0(r3)
/* 8016F768 0016C848  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016F76C 0016C84C  4C 41 13 82 */	cror eq, gt, eq
/* 8016F770 0016C850  41 82 00 10 */	beq .L_8016F780
/* 8016F774 0016C854  88 03 02 B6 */	lbz r0, 0x2b6(r3)
/* 8016F778 0016C858  28 00 00 00 */	cmplwi r0, 0x0
/* 8016F77C 0016C85C  40 82 00 30 */	bne .L_8016F7AC
.L_8016F780:
/* 8016F780 0016C860  3C 80 80 2A */	lis r4, g_hash_bossanim@ha
/* 8016F784 0016C864  38 A0 00 00 */	li r5, 0x0
/* 8016F788 0016C868  38 84 92 68 */	addi r4, r4, g_hash_bossanim@l
/* 8016F78C 0016C86C  80 84 01 20 */	lwz r4, 0x120(r4)
/* 8016F790 0016C870  4B F8 36 01 */	bl AnimStart__10zNPCCommonFUii
/* 8016F794 0016C874  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 8016F798 0016C878  38 80 00 00 */	li r4, 0x0
/* 8016F79C 0016C87C  38 00 00 02 */	li r0, 0x2
/* 8016F7A0 0016C880  98 83 02 B8 */	stb r4, 0x2b8(r3)
/* 8016F7A4 0016C884  90 1F 00 50 */	stw r0, 0x50(r31)
/* 8016F7A8 0016C888  48 00 01 4C */	b .L_8016F8F4
.L_8016F7AC:
/* 8016F7AC 0016C88C  48 00 04 0D */	bl location__13zNPCBPlanktonCFv
/* 8016F7B0 0016C890  7C 7E 1B 78 */	mr r30, r3
/* 8016F7B4 0016C894  4B FF 92 E1 */	bl "get_player_loc__34@unnamed@zNPCTypeBossPlankton_cpp@Fv"
/* 8016F7B8 0016C898  7C 64 1B 78 */	mr r4, r3
/* 8016F7BC 0016C89C  7F C5 F3 78 */	mr r5, r30
/* 8016F7C0 0016C8A0  38 61 00 2C */	addi r3, r1, 0x2c
/* 8016F7C4 0016C8A4  4B E9 BA 09 */	bl __mi__5xVec3CFRC5xVec3
/* 8016F7C8 0016C8A8  38 61 00 2C */	addi r3, r1, 0x2c
/* 8016F7CC 0016C8AC  4B E9 B9 31 */	bl length2__5xVec3CFv
/* 8016F7D0 0016C8B0  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016F7D4 0016C8B4  38 63 A1 A0 */	addi r3, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016F7D8 0016C8B8  C0 03 00 B4 */	lfs f0, 0xb4(r3)
/* 8016F7DC 0016C8BC  EC 00 00 32 */	fmuls f0, f0, f0
/* 8016F7E0 0016C8C0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016F7E4 0016C8C4  4C 41 13 82 */	cror eq, gt, eq
/* 8016F7E8 0016C8C8  40 82 00 10 */	bne .L_8016F7F8
/* 8016F7EC 0016C8CC  38 00 00 02 */	li r0, 0x2
/* 8016F7F0 0016C8D0  90 1F 00 50 */	stw r0, 0x50(r31)
/* 8016F7F4 0016C8D4  48 00 01 00 */	b .L_8016F8F4
.L_8016F7F8:
/* 8016F7F8 0016C8D8  80 9F 00 54 */	lwz r4, 0x54(r31)
/* 8016F7FC 0016C8DC  38 61 00 20 */	addi r3, r1, 0x20
/* 8016F800 0016C8E0  38 A0 00 16 */	li r5, 0x16
/* 8016F804 0016C8E4  80 84 00 24 */	lwz r4, 0x24(r4)
/* 8016F808 0016C8E8  4B EC 57 71 */	bl xModelGetBoneLocation__FRC14xModelInstanceUl
/* 8016F80C 0016C8EC  3B C1 00 68 */	addi r30, r1, 0x68
/* 8016F810 0016C8F0  38 81 00 20 */	addi r4, r1, 0x20
/* 8016F814 0016C8F4  7F C3 F3 78 */	mr r3, r30
/* 8016F818 0016C8F8  4B E9 BA 4D */	bl __as__5xVec3FRC5xVec3
/* 8016F81C 0016C8FC  4B FF 92 79 */	bl "get_player_loc__34@unnamed@zNPCTypeBossPlankton_cpp@Fv"
/* 8016F820 0016C900  7C 64 1B 78 */	mr r4, r3
/* 8016F824 0016C904  7F C5 F3 78 */	mr r5, r30
/* 8016F828 0016C908  38 61 00 14 */	addi r3, r1, 0x14
/* 8016F82C 0016C90C  4B E9 B9 A1 */	bl __mi__5xVec3CFRC5xVec3
/* 8016F830 0016C910  38 61 00 38 */	addi r3, r1, 0x38
/* 8016F834 0016C914  38 81 00 14 */	addi r4, r1, 0x14
/* 8016F838 0016C918  4B EA 59 C1 */	bl xMat3x3LookVec3__FR7xMat3x3RC5xVec3
/* 8016F83C 0016C91C  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016F840 0016C920  3B A1 00 58 */	addi r29, r1, 0x58
/* 8016F844 0016C924  38 83 A1 A0 */	addi r4, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016F848 0016C928  38 61 00 08 */	addi r3, r1, 0x8
/* 8016F84C 0016C92C  C0 24 00 B8 */	lfs f1, 0xb8(r4)
/* 8016F850 0016C930  7F A4 EB 78 */	mr r4, r29
/* 8016F854 0016C934  4B E9 B8 CD */	bl __ml__5xVec3CFf
/* 8016F858 0016C938  7F C3 F3 78 */	mr r3, r30
/* 8016F85C 0016C93C  38 81 00 08 */	addi r4, r1, 0x8
/* 8016F860 0016C940  4B EA 5B E5 */	bl __apl__5xVec3FRC5xVec3
/* 8016F864 0016C944  3C 60 80 33 */	lis r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@ha
/* 8016F868 0016C948  3C 00 43 30 */	lis r0, 0x4330
/* 8016F86C 0016C94C  38 63 A1 A0 */	addi r3, r3, "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"@l
/* 8016F870 0016C950  C0 1F 00 4C */	lfs f0, 0x4c(r31)
/* 8016F874 0016C954  C0 23 00 A0 */	lfs f1, 0xa0(r3)
/* 8016F878 0016C958  90 01 00 80 */	stw r0, 0x80(r1)
/* 8016F87C 0016C95C  EC 1F 00 7A */	fmadds f0, f31, f1, f0
/* 8016F880 0016C960  D0 1F 00 4C */	stfs f0, 0x4c(r31)
/* 8016F884 0016C964  C0 5F 00 4C */	lfs f2, 0x4c(r31)
/* 8016F888 0016C968  C8 22 AB E0 */	lfd f1, "@3215"@sda21(r2)
/* 8016F88C 0016C96C  FC 00 10 1E */	fctiwz f0, f2
/* 8016F890 0016C970  D8 01 00 78 */	stfd f0, 0x78(r1)
/* 8016F894 0016C974  83 81 00 7C */	lwz r28, 0x7c(r1)
/* 8016F898 0016C978  6F 80 80 00 */	xoris r0, r28, 0x8000
/* 8016F89C 0016C97C  2C 1C 00 00 */	cmpwi r28, 0x0
/* 8016F8A0 0016C980  90 01 00 84 */	stw r0, 0x84(r1)
/* 8016F8A4 0016C984  C8 01 00 80 */	lfd f0, 0x80(r1)
/* 8016F8A8 0016C988  EC 00 08 28 */	fsubs f0, f0, f1
/* 8016F8AC 0016C98C  EC 02 00 28 */	fsubs f0, f2, f0
/* 8016F8B0 0016C990  D0 1F 00 4C */	stfs f0, 0x4c(r31)
/* 8016F8B4 0016C994  40 81 00 40 */	ble .L_8016F8F4
/* 8016F8B8 0016C998  3B 60 00 00 */	li r27, 0x0
/* 8016F8BC 0016C99C  48 00 00 30 */	b .L_8016F8EC
.L_8016F8C0:
/* 8016F8C0 0016C9A0  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 8016F8C4 0016C9A4  7F C4 F3 78 */	mr r4, r30
/* 8016F8C8 0016C9A8  7F A5 EB 78 */	mr r5, r29
/* 8016F8CC 0016C9AC  38 63 03 B8 */	addi r3, r3, 0x3b8
/* 8016F8D0 0016C9B0  48 00 DE C5 */	bl emit__17xLaserBoltEmitterFRC5xVec3RC5xVec3
/* 8016F8D4 0016C9B4  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 8016F8D8 0016C9B8  38 81 00 38 */	addi r4, r1, 0x38
/* 8016F8DC 0016C9BC  38 A0 FF FF */	li r5, -0x1
/* 8016F8E0 0016C9C0  38 63 03 50 */	addi r3, r3, 0x350
/* 8016F8E4 0016C9C4  48 00 CE ED */	bl emit__13xDecalEmitterFRC7xMat4x3i
/* 8016F8E8 0016C9C8  3B 7B 00 01 */	addi r27, r27, 0x1
.L_8016F8EC:
/* 8016F8EC 0016C9CC  7C 1B E0 00 */	cmpw r27, r28
/* 8016F8F0 0016C9D0  41 80 FF D0 */	blt .L_8016F8C0
.L_8016F8F4:
/* 8016F8F4 0016C9D4  E3 E1 00 A8 */	psq_l f31, 0xa8(r1), 0, qr0
/* 8016F8F8 0016C9D8  CB E1 00 A0 */	lfd f31, 0xa0(r1)
/* 8016F8FC 0016C9DC  BB 61 00 8C */	lmw r27, 0x8c(r1)
/* 8016F900 0016C9E0  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 8016F904 0016C9E4  7C 08 03 A6 */	mtlr r0
/* 8016F908 0016C9E8  38 21 00 B0 */	addi r1, r1, 0xb0
/* 8016F90C 0016C9EC  4E 80 00 20 */	blr
.endfn update_fire__21zNPCGoalBPlanktonBeamFf

# zNPCGoalBPlanktonBeam::update_cool_down(float)
.fn update_cool_down__21zNPCGoalBPlanktonBeamFf, global
/* 8016F910 0016C9F0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016F914 0016C9F4  7C 08 02 A6 */	mflr r0
/* 8016F918 0016C9F8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016F91C 0016C9FC  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8016F920 0016CA00  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8016F924 0016CA04  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016F928 0016CA08  7C 7F 1B 78 */	mr r31, r3
/* 8016F92C 0016CA0C  FF E0 08 90 */	fmr f31, f1
/* 8016F930 0016CA10  80 63 00 54 */	lwz r3, 0x54(r3)
/* 8016F934 0016CA14  4B F8 36 69 */	bl AnimCurState__10zNPCCommonFv
/* 8016F938 0016CA18  3C 80 80 2A */	lis r4, g_hash_bossanim@ha
/* 8016F93C 0016CA1C  80 A3 00 08 */	lwz r5, 0x8(r3)
/* 8016F940 0016CA20  38 64 92 68 */	addi r3, r4, g_hash_bossanim@l
/* 8016F944 0016CA24  80 03 01 20 */	lwz r0, 0x120(r3)
/* 8016F948 0016CA28  7C 05 00 40 */	cmplw r5, r0
/* 8016F94C 0016CA2C  40 82 00 20 */	bne .L_8016F96C
/* 8016F950 0016CA30  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 8016F954 0016CA34  38 80 00 00 */	li r4, 0x0
/* 8016F958 0016CA38  4B F8 37 21 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 8016F95C 0016CA3C  C0 02 AB C0 */	lfs f0, "@2223"@sda21(r2)
/* 8016F960 0016CA40  EC 00 F8 2A */	fadds f0, f0, f31
/* 8016F964 0016CA44  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016F968 0016CA48  40 80 00 0C */	bge .L_8016F974
.L_8016F96C:
/* 8016F96C 0016CA4C  38 00 00 03 */	li r0, 0x3
/* 8016F970 0016CA50  90 1F 00 50 */	stw r0, 0x50(r31)
.L_8016F974:
/* 8016F974 0016CA54  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8016F978 0016CA58  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016F97C 0016CA5C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8016F980 0016CA60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016F984 0016CA64  7C 08 03 A6 */	mtlr r0
/* 8016F988 0016CA68  38 21 00 20 */	addi r1, r1, 0x20
/* 8016F98C 0016CA6C  4E 80 00 20 */	blr
.endfn update_cool_down__21zNPCGoalBPlanktonBeamFf

# zNPCGoalBPlanktonWall::create(int, RyzMemGrow*, void*)
.fn create__21zNPCGoalBPlanktonWallFiP10RyzMemGrowPv, global
/* 8016F990 0016CA70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016F994 0016CA74  7C 08 02 A6 */	mflr r0
/* 8016F998 0016CA78  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016F99C 0016CA7C  7C 80 23 78 */	mr r0, r4
/* 8016F9A0 0016CA80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016F9A4 0016CA84  7C BF 2B 78 */	mr r31, r5
/* 8016F9A8 0016CA88  7C 05 03 78 */	mr r5, r0
/* 8016F9AC 0016CA8C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016F9B0 0016CA90  7C 7E 1B 78 */	mr r30, r3
/* 8016F9B4 0016CA94  38 60 00 50 */	li r3, 0x50
/* 8016F9B8 0016CA98  7F C4 F3 78 */	mr r4, r30
/* 8016F9BC 0016CA9C  4B F9 F7 95 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8016F9C0 0016CAA0  7C 64 1B 79 */	mr. r4, r3
/* 8016F9C4 0016CAA4  41 82 00 14 */	beq .L_8016F9D8
/* 8016F9C8 0016CAA8  7F C4 F3 78 */	mr r4, r30
/* 8016F9CC 0016CAAC  7F E5 FB 78 */	mr r5, r31
/* 8016F9D0 0016CAB0  48 00 07 81 */	bl __ct__21zNPCGoalBPlanktonWallFiR13zNPCBPlankton
/* 8016F9D4 0016CAB4  7C 64 1B 78 */	mr r4, r3
.L_8016F9D8:
/* 8016F9D8 0016CAB8  28 04 00 00 */	cmplwi r4, 0x0
/* 8016F9DC 0016CABC  41 82 00 08 */	beq .L_8016F9E4
/* 8016F9E0 0016CAC0  38 84 00 0C */	addi r4, r4, 0xc
.L_8016F9E4:
/* 8016F9E4 0016CAC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016F9E8 0016CAC8  7C 83 23 78 */	mr r3, r4
/* 8016F9EC 0016CACC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016F9F0 0016CAD0  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016F9F4 0016CAD4  7C 08 03 A6 */	mtlr r0
/* 8016F9F8 0016CAD8  38 21 00 10 */	addi r1, r1, 0x10
/* 8016F9FC 0016CADC  4E 80 00 20 */	blr
.endfn create__21zNPCGoalBPlanktonWallFiP10RyzMemGrowPv

# zNPCGoalBPlanktonWall::Enter(float, void*)
.fn Enter__21zNPCGoalBPlanktonWallFfPv, global
/* 8016FA00 0016CAE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FA04 0016CAE4  7C 08 02 A6 */	mflr r0
/* 8016FA08 0016CAE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FA0C 0016CAEC  4B F6 57 09 */	bl Enter__14zNPCGoalCommonFfPv
/* 8016FA10 0016CAF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FA14 0016CAF4  7C 08 03 A6 */	mtlr r0
/* 8016FA18 0016CAF8  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FA1C 0016CAFC  4E 80 00 20 */	blr
.endfn Enter__21zNPCGoalBPlanktonWallFfPv

# zNPCGoalBPlanktonWall::Exit(float, void*)
.fn Exit__21zNPCGoalBPlanktonWallFfPv, global
/* 8016FA20 0016CB00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FA24 0016CB04  7C 08 02 A6 */	mflr r0
/* 8016FA28 0016CB08  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FA2C 0016CB0C  4B F6 59 F1 */	bl Exit__5xGoalFfPv
/* 8016FA30 0016CB10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FA34 0016CB14  7C 08 03 A6 */	mtlr r0
/* 8016FA38 0016CB18  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FA3C 0016CB1C  4E 80 00 20 */	blr
.endfn Exit__21zNPCGoalBPlanktonWallFfPv

# zNPCGoalBPlanktonWall::Process(en_trantype*, float, void*, xScene*)
.fn Process__21zNPCGoalBPlanktonWallFP11en_trantypefPvP6xScene, global
/* 8016FA40 0016CB20  38 60 00 00 */	li r3, 0x0
/* 8016FA44 0016CB24  4E 80 00 20 */	blr
.endfn Process__21zNPCGoalBPlanktonWallFP11en_trantypefPvP6xScene

# zNPCGoalBPlanktonMissle::create(int, RyzMemGrow*, void*)
.fn create__23zNPCGoalBPlanktonMissleFiP10RyzMemGrowPv, global
/* 8016FA48 0016CB28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FA4C 0016CB2C  7C 08 02 A6 */	mflr r0
/* 8016FA50 0016CB30  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FA54 0016CB34  7C 80 23 78 */	mr r0, r4
/* 8016FA58 0016CB38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016FA5C 0016CB3C  7C BF 2B 78 */	mr r31, r5
/* 8016FA60 0016CB40  7C 05 03 78 */	mr r5, r0
/* 8016FA64 0016CB44  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016FA68 0016CB48  7C 7E 1B 78 */	mr r30, r3
/* 8016FA6C 0016CB4C  38 60 00 50 */	li r3, 0x50
/* 8016FA70 0016CB50  7F C4 F3 78 */	mr r4, r30
/* 8016FA74 0016CB54  4B F9 F6 DD */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8016FA78 0016CB58  7C 64 1B 79 */	mr. r4, r3
/* 8016FA7C 0016CB5C  41 82 00 14 */	beq .L_8016FA90
/* 8016FA80 0016CB60  7F C4 F3 78 */	mr r4, r30
/* 8016FA84 0016CB64  7F E5 FB 78 */	mr r5, r31
/* 8016FA88 0016CB68  48 00 07 15 */	bl __ct__23zNPCGoalBPlanktonMissleFiR13zNPCBPlankton
/* 8016FA8C 0016CB6C  7C 64 1B 78 */	mr r4, r3
.L_8016FA90:
/* 8016FA90 0016CB70  28 04 00 00 */	cmplwi r4, 0x0
/* 8016FA94 0016CB74  41 82 00 08 */	beq .L_8016FA9C
/* 8016FA98 0016CB78  38 84 00 0C */	addi r4, r4, 0xc
.L_8016FA9C:
/* 8016FA9C 0016CB7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FAA0 0016CB80  7C 83 23 78 */	mr r3, r4
/* 8016FAA4 0016CB84  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016FAA8 0016CB88  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016FAAC 0016CB8C  7C 08 03 A6 */	mtlr r0
/* 8016FAB0 0016CB90  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FAB4 0016CB94  4E 80 00 20 */	blr
.endfn create__23zNPCGoalBPlanktonMissleFiP10RyzMemGrowPv

# zNPCGoalBPlanktonMissle::Enter(float, void*)
.fn Enter__23zNPCGoalBPlanktonMissleFfPv, global
/* 8016FAB8 0016CB98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FABC 0016CB9C  7C 08 02 A6 */	mflr r0
/* 8016FAC0 0016CBA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FAC4 0016CBA4  4B F6 56 51 */	bl Enter__14zNPCGoalCommonFfPv
/* 8016FAC8 0016CBA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FACC 0016CBAC  7C 08 03 A6 */	mtlr r0
/* 8016FAD0 0016CBB0  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FAD4 0016CBB4  4E 80 00 20 */	blr
.endfn Enter__23zNPCGoalBPlanktonMissleFfPv

# zNPCGoalBPlanktonMissle::Exit(float, void*)
.fn Exit__23zNPCGoalBPlanktonMissleFfPv, global
/* 8016FAD8 0016CBB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FADC 0016CBBC  7C 08 02 A6 */	mflr r0
/* 8016FAE0 0016CBC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FAE4 0016CBC4  4B F6 59 39 */	bl Exit__5xGoalFfPv
/* 8016FAE8 0016CBC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FAEC 0016CBCC  7C 08 03 A6 */	mtlr r0
/* 8016FAF0 0016CBD0  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FAF4 0016CBD4  4E 80 00 20 */	blr
.endfn Exit__23zNPCGoalBPlanktonMissleFfPv

# zNPCGoalBPlanktonMissle::Process(en_trantype*, float, void*, xScene*)
.fn Process__23zNPCGoalBPlanktonMissleFP11en_trantypefPvP6xScene, global
/* 8016FAF8 0016CBD8  38 60 00 00 */	li r3, 0x0
/* 8016FAFC 0016CBDC  4E 80 00 20 */	blr
.endfn Process__23zNPCGoalBPlanktonMissleFP11en_trantypefPvP6xScene

# zNPCGoalBPlanktonBomb::create(int, RyzMemGrow*, void*)
.fn create__21zNPCGoalBPlanktonBombFiP10RyzMemGrowPv, global
/* 8016FB00 0016CBE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FB04 0016CBE4  7C 08 02 A6 */	mflr r0
/* 8016FB08 0016CBE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FB0C 0016CBEC  7C 80 23 78 */	mr r0, r4
/* 8016FB10 0016CBF0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016FB14 0016CBF4  7C BF 2B 78 */	mr r31, r5
/* 8016FB18 0016CBF8  7C 05 03 78 */	mr r5, r0
/* 8016FB1C 0016CBFC  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016FB20 0016CC00  7C 7E 1B 78 */	mr r30, r3
/* 8016FB24 0016CC04  38 60 00 50 */	li r3, 0x50
/* 8016FB28 0016CC08  7F C4 F3 78 */	mr r4, r30
/* 8016FB2C 0016CC0C  4B F9 F6 25 */	bl __nw__10RyzMemDataFUliP10RyzMemGrow
/* 8016FB30 0016CC10  7C 64 1B 79 */	mr. r4, r3
/* 8016FB34 0016CC14  41 82 00 14 */	beq .L_8016FB48
/* 8016FB38 0016CC18  7F C4 F3 78 */	mr r4, r30
/* 8016FB3C 0016CC1C  7F E5 FB 78 */	mr r5, r31
/* 8016FB40 0016CC20  48 00 06 A9 */	bl __ct__21zNPCGoalBPlanktonBombFiR13zNPCBPlankton
/* 8016FB44 0016CC24  7C 64 1B 78 */	mr r4, r3
.L_8016FB48:
/* 8016FB48 0016CC28  28 04 00 00 */	cmplwi r4, 0x0
/* 8016FB4C 0016CC2C  41 82 00 08 */	beq .L_8016FB54
/* 8016FB50 0016CC30  38 84 00 0C */	addi r4, r4, 0xc
.L_8016FB54:
/* 8016FB54 0016CC34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FB58 0016CC38  7C 83 23 78 */	mr r3, r4
/* 8016FB5C 0016CC3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016FB60 0016CC40  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016FB64 0016CC44  7C 08 03 A6 */	mtlr r0
/* 8016FB68 0016CC48  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FB6C 0016CC4C  4E 80 00 20 */	blr
.endfn create__21zNPCGoalBPlanktonBombFiP10RyzMemGrowPv

# zNPCGoalBPlanktonBomb::Enter(float, void*)
.fn Enter__21zNPCGoalBPlanktonBombFfPv, global
/* 8016FB70 0016CC50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FB74 0016CC54  7C 08 02 A6 */	mflr r0
/* 8016FB78 0016CC58  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FB7C 0016CC5C  4B F6 55 99 */	bl Enter__14zNPCGoalCommonFfPv
/* 8016FB80 0016CC60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FB84 0016CC64  7C 08 03 A6 */	mtlr r0
/* 8016FB88 0016CC68  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FB8C 0016CC6C  4E 80 00 20 */	blr
.endfn Enter__21zNPCGoalBPlanktonBombFfPv

# zNPCGoalBPlanktonBomb::Exit(float, void*)
.fn Exit__21zNPCGoalBPlanktonBombFfPv, global
/* 8016FB90 0016CC70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FB94 0016CC74  7C 08 02 A6 */	mflr r0
/* 8016FB98 0016CC78  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FB9C 0016CC7C  4B F6 58 81 */	bl Exit__5xGoalFfPv
/* 8016FBA0 0016CC80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FBA4 0016CC84  7C 08 03 A6 */	mtlr r0
/* 8016FBA8 0016CC88  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FBAC 0016CC8C  4E 80 00 20 */	blr
.endfn Exit__21zNPCGoalBPlanktonBombFfPv

# zNPCGoalBPlanktonBomb::Process(en_trantype*, float, void*, xScene*)
.fn Process__21zNPCGoalBPlanktonBombFP11en_trantypefPvP6xScene, global
/* 8016FBB0 0016CC90  38 60 00 00 */	li r3, 0x0
/* 8016FBB4 0016CC94  4E 80 00 20 */	blr
.endfn Process__21zNPCGoalBPlanktonBombFP11en_trantypefPvP6xScene

# 0x8016FBB8 - 0x80170264
.section .text, "ax", unique, 1
.balign 4

# zNPCBPlankton::location() const
.fn location__13zNPCBPlanktonCFv, weak
/* 8016FBB8 0016CC98  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8016FBBC 0016CC9C  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8016FBC0 0016CCA0  38 63 00 30 */	addi r3, r3, 0x30
/* 8016FBC4 0016CCA4  4E 80 00 20 */	blr
.endfn location__13zNPCBPlanktonCFv

# zNPCBPlankton::face_player()
.fn face_player__13zNPCBPlanktonFv, weak
/* 8016FBC8 0016CCA8  38 00 00 01 */	li r0, 0x1
/* 8016FBCC 0016CCAC  98 03 02 B5 */	stb r0, 0x2b5(r3)
/* 8016FBD0 0016CCB0  4E 80 00 20 */	blr
.endfn face_player__13zNPCBPlanktonFv

# zNPCBPlankton::render_debug()
.fn render_debug__13zNPCBPlanktonFv, weak
/* 8016FBD4 0016CCB4  4E 80 00 20 */	blr
.endfn render_debug__13zNPCBPlanktonFv

# zNPCBPlankton::turning() const
.fn turning__13zNPCBPlanktonCFv, weak
/* 8016FBD8 0016CCB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FBDC 0016CCBC  38 00 00 00 */	li r0, 0x0
/* 8016FBE0 0016CCC0  80 83 00 24 */	lwz r4, 0x24(r3)
/* 8016FBE4 0016CCC4  80 A2 BF B8 */	lwz r5, "@821"@sda21(r2)
/* 8016FBE8 0016CCC8  80 C4 00 4C */	lwz r6, 0x4c(r4)
/* 8016FBEC 0016CCCC  80 82 BF BC */	lwz r4, "@821"+0x4@sda21(r2)
/* 8016FBF0 0016CCD0  C0 63 04 68 */	lfs f3, 0x468(r3)
/* 8016FBF4 0016CCD4  C0 22 AB B4 */	lfs f1, "@2166"@sda21(r2)
/* 8016FBF8 0016CCD8  90 A1 00 08 */	stw r5, 0x8(r1)
/* 8016FBFC 0016CCDC  C0 46 00 20 */	lfs f2, 0x20(r6)
/* 8016FC00 0016CCE0  FC 03 08 40 */	fcmpo cr0, f3, f1
/* 8016FC04 0016CCE4  90 81 00 0C */	stw r4, 0xc(r1)
/* 8016FC08 0016CCE8  C0 06 00 28 */	lfs f0, 0x28(r6)
/* 8016FC0C 0016CCEC  D0 41 00 08 */	stfs f2, 0x8(r1)
/* 8016FC10 0016CCF0  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8016FC14 0016CCF4  4C 41 13 82 */	cror eq, gt, eq
/* 8016FC18 0016CCF8  40 82 00 88 */	bne .L_8016FCA0
/* 8016FC1C 0016CCFC  C0 02 AB 28 */	lfs f0, "@1755"@sda21(r2)
/* 8016FC20 0016CD00  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8016FC24 0016CD04  4C 40 13 82 */	cror eq, lt, eq
/* 8016FC28 0016CD08  40 82 00 78 */	bne .L_8016FCA0
/* 8016FC2C 0016CD0C  C0 43 04 6C */	lfs f2, 0x46c(r3)
/* 8016FC30 0016CD10  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8016FC34 0016CD14  4C 41 13 82 */	cror eq, gt, eq
/* 8016FC38 0016CD18  40 82 00 10 */	bne .L_8016FC48
/* 8016FC3C 0016CD1C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8016FC40 0016CD20  4C 40 13 82 */	cror eq, lt, eq
/* 8016FC44 0016CD24  41 82 00 60 */	beq .L_8016FCA4
.L_8016FC48:
/* 8016FC48 0016CD28  C0 43 04 60 */	lfs f2, 0x460(r3)
/* 8016FC4C 0016CD2C  C0 03 04 64 */	lfs f0, 0x464(r3)
/* 8016FC50 0016CD30  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8016FC54 0016CD34  40 81 00 20 */	ble .L_8016FC74
/* 8016FC58 0016CD38  C0 21 00 08 */	lfs f1, 0x8(r1)
/* 8016FC5C 0016CD3C  C0 02 AB C0 */	lfs f0, "@2223"@sda21(r2)
/* 8016FC60 0016CD40  EC 22 08 28 */	fsubs f1, f2, f1
/* 8016FC64 0016CD44  FC 20 0A 10 */	fabs f1, f1
/* 8016FC68 0016CD48  FC 20 08 18 */	frsp f1, f1
/* 8016FC6C 0016CD4C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016FC70 0016CD50  41 80 00 34 */	blt .L_8016FCA4
.L_8016FC74:
/* 8016FC74 0016CD54  C0 03 04 60 */	lfs f0, 0x460(r3)
/* 8016FC78 0016CD58  C0 43 04 64 */	lfs f2, 0x464(r3)
/* 8016FC7C 0016CD5C  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8016FC80 0016CD60  40 80 00 20 */	bge .L_8016FCA0
/* 8016FC84 0016CD64  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8016FC88 0016CD68  C0 02 AB C0 */	lfs f0, "@2223"@sda21(r2)
/* 8016FC8C 0016CD6C  EC 22 08 28 */	fsubs f1, f2, f1
/* 8016FC90 0016CD70  FC 20 0A 10 */	fabs f1, f1
/* 8016FC94 0016CD74  FC 20 08 18 */	frsp f1, f1
/* 8016FC98 0016CD78  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016FC9C 0016CD7C  41 80 00 08 */	blt .L_8016FCA4
.L_8016FCA0:
/* 8016FCA0 0016CD80  38 00 00 01 */	li r0, 0x1
.L_8016FCA4:
/* 8016FCA4 0016CD84  7C 03 03 78 */	mr r3, r0
/* 8016FCA8 0016CD88  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FCAC 0016CD8C  4E 80 00 20 */	blr
.endfn turning__13zNPCBPlanktonCFv

# zNPCGoalBPlanktonIdle::zNPCGoalBPlanktonIdle(int, zNPCBPlankton&)
.fn __ct__21zNPCGoalBPlanktonIdleFiR13zNPCBPlankton, weak
/* 8016FCB0 0016CD90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FCB4 0016CD94  7C 08 02 A6 */	mflr r0
/* 8016FCB8 0016CD98  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FCBC 0016CD9C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016FCC0 0016CDA0  7C BF 2B 78 */	mr r31, r5
/* 8016FCC4 0016CDA4  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016FCC8 0016CDA8  7C 7E 1B 78 */	mr r30, r3
/* 8016FCCC 0016CDAC  4B F6 93 29 */	bl __ct__14zNPCGoalCommonFi
/* 8016FCD0 0016CDB0  3C 80 80 2A */	lis r4, __vt__21zNPCGoalBPlanktonIdle@ha
/* 8016FCD4 0016CDB4  7F C3 F3 78 */	mr r3, r30
/* 8016FCD8 0016CDB8  38 04 B3 38 */	addi r0, r4, __vt__21zNPCGoalBPlanktonIdle@l
/* 8016FCDC 0016CDBC  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8016FCE0 0016CDC0  93 FE 00 4C */	stw r31, 0x4c(r30)
/* 8016FCE4 0016CDC4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016FCE8 0016CDC8  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016FCEC 0016CDCC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FCF0 0016CDD0  7C 08 03 A6 */	mtlr r0
/* 8016FCF4 0016CDD4  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FCF8 0016CDD8  4E 80 00 20 */	blr
.endfn __ct__21zNPCGoalBPlanktonIdleFiR13zNPCBPlankton

# zNPCBPlankton::take_control()
.fn take_control__13zNPCBPlanktonFv, weak
/* 8016FCFC 0016CDDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FD00 0016CDE0  7C 08 02 A6 */	mflr r0
/* 8016FD04 0016CDE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FD08 0016CDE8  80 63 04 B0 */	lwz r3, 0x4b0(r3)
/* 8016FD0C 0016CDEC  28 03 00 00 */	cmplwi r3, 0x0
/* 8016FD10 0016CDF0  41 82 00 14 */	beq .L_8016FD24
/* 8016FD14 0016CDF4  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 8016FD18 0016CDF8  81 8C 00 D0 */	lwz r12, 0xd0(r12)
/* 8016FD1C 0016CDFC  7D 89 03 A6 */	mtctr r12
/* 8016FD20 0016CE00  4E 80 04 21 */	bctrl
.L_8016FD24:
/* 8016FD24 0016CE04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FD28 0016CE08  7C 08 03 A6 */	mtlr r0
/* 8016FD2C 0016CE0C  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FD30 0016CE10  4E 80 00 20 */	blr
.endfn take_control__13zNPCBPlanktonFv

# zNPCBPlankton::get_orbit_yaw(const xVec3&) const
.fn get_orbit_yaw__13zNPCBPlanktonCFRC5xVec3, weak
/* 8016FD34 0016CE14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FD38 0016CE18  7C 08 02 A6 */	mflr r0
/* 8016FD3C 0016CE1C  C0 64 00 00 */	lfs f3, 0x0(r4)
/* 8016FD40 0016CE20  C0 23 04 50 */	lfs f1, 0x450(r3)
/* 8016FD44 0016CE24  C0 44 00 08 */	lfs f2, 0x8(r4)
/* 8016FD48 0016CE28  C0 03 04 58 */	lfs f0, 0x458(r3)
/* 8016FD4C 0016CE2C  EC 23 08 28 */	fsubs f1, f3, f1
/* 8016FD50 0016CE30  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FD54 0016CE34  EC 42 00 28 */	fsubs f2, f2, f0
/* 8016FD58 0016CE38  4B E9 63 19 */	bl xatan2__Fff
/* 8016FD5C 0016CE3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FD60 0016CE40  7C 08 03 A6 */	mtlr r0
/* 8016FD64 0016CE44  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FD68 0016CE48  4E 80 00 20 */	blr
.endfn get_orbit_yaw__13zNPCBPlanktonCFRC5xVec3

# zNPCGoalBPlanktonAttack::zNPCGoalBPlanktonAttack(int, zNPCBPlankton&)
.fn __ct__23zNPCGoalBPlanktonAttackFiR13zNPCBPlankton, weak
/* 8016FD6C 0016CE4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FD70 0016CE50  7C 08 02 A6 */	mflr r0
/* 8016FD74 0016CE54  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FD78 0016CE58  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016FD7C 0016CE5C  7C BF 2B 78 */	mr r31, r5
/* 8016FD80 0016CE60  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016FD84 0016CE64  7C 7E 1B 78 */	mr r30, r3
/* 8016FD88 0016CE68  4B F6 92 6D */	bl __ct__14zNPCGoalCommonFi
/* 8016FD8C 0016CE6C  3C 80 80 2A */	lis r4, __vt__23zNPCGoalBPlanktonAttack@ha
/* 8016FD90 0016CE70  7F C3 F3 78 */	mr r3, r30
/* 8016FD94 0016CE74  38 04 B3 04 */	addi r0, r4, __vt__23zNPCGoalBPlanktonAttack@l
/* 8016FD98 0016CE78  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8016FD9C 0016CE7C  93 FE 00 4C */	stw r31, 0x4c(r30)
/* 8016FDA0 0016CE80  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016FDA4 0016CE84  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016FDA8 0016CE88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FDAC 0016CE8C  7C 08 03 A6 */	mtlr r0
/* 8016FDB0 0016CE90  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FDB4 0016CE94  4E 80 00 20 */	blr
.endfn __ct__23zNPCGoalBPlanktonAttackFiR13zNPCBPlankton

# zNPCGoalBPlanktonAmbush::zNPCGoalBPlanktonAmbush(int, zNPCBPlankton&)
.fn __ct__23zNPCGoalBPlanktonAmbushFiR13zNPCBPlankton, weak
/* 8016FDB8 0016CE98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FDBC 0016CE9C  7C 08 02 A6 */	mflr r0
/* 8016FDC0 0016CEA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FDC4 0016CEA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016FDC8 0016CEA8  7C BF 2B 78 */	mr r31, r5
/* 8016FDCC 0016CEAC  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016FDD0 0016CEB0  7C 7E 1B 78 */	mr r30, r3
/* 8016FDD4 0016CEB4  4B F6 92 21 */	bl __ct__14zNPCGoalCommonFi
/* 8016FDD8 0016CEB8  3C 80 80 2A */	lis r4, __vt__23zNPCGoalBPlanktonAmbush@ha
/* 8016FDDC 0016CEBC  7F C3 F3 78 */	mr r3, r30
/* 8016FDE0 0016CEC0  38 04 B2 D0 */	addi r0, r4, __vt__23zNPCGoalBPlanktonAmbush@l
/* 8016FDE4 0016CEC4  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8016FDE8 0016CEC8  93 FE 00 4C */	stw r31, 0x4c(r30)
/* 8016FDEC 0016CECC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016FDF0 0016CED0  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016FDF4 0016CED4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FDF8 0016CED8  7C 08 03 A6 */	mtlr r0
/* 8016FDFC 0016CEDC  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FE00 0016CEE0  4E 80 00 20 */	blr
.endfn __ct__23zNPCGoalBPlanktonAmbushFiR13zNPCBPlankton

# zNPCBPlankton::set_location(const xVec3&)
.fn set_location__13zNPCBPlanktonFRC5xVec3, weak
/* 8016FE04 0016CEE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FE08 0016CEE8  7C 08 02 A6 */	mflr r0
/* 8016FE0C 0016CEEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FE10 0016CEF0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016FE14 0016CEF4  7C 7F 1B 78 */	mr r31, r3
/* 8016FE18 0016CEF8  80 63 00 48 */	lwz r3, 0x48(r3)
/* 8016FE1C 0016CEFC  38 63 00 30 */	addi r3, r3, 0x30
/* 8016FE20 0016CF00  4B E9 B4 45 */	bl __as__5xVec3FRC5xVec3
/* 8016FE24 0016CF04  80 BF 00 24 */	lwz r5, 0x24(r31)
/* 8016FE28 0016CF08  7C 64 1B 78 */	mr r4, r3
/* 8016FE2C 0016CF0C  80 65 00 4C */	lwz r3, 0x4c(r5)
/* 8016FE30 0016CF10  38 63 00 30 */	addi r3, r3, 0x30
/* 8016FE34 0016CF14  4B E9 B4 31 */	bl __as__5xVec3FRC5xVec3
/* 8016FE38 0016CF18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FE3C 0016CF1C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016FE40 0016CF20  7C 08 03 A6 */	mtlr r0
/* 8016FE44 0016CF24  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FE48 0016CF28  4E 80 00 20 */	blr
.endfn set_location__13zNPCBPlanktonFRC5xVec3

# zNPCGoalBPlanktonFlank::zNPCGoalBPlanktonFlank(int, zNPCBPlankton&)
.fn __ct__22zNPCGoalBPlanktonFlankFiR13zNPCBPlankton, weak
/* 8016FE4C 0016CF2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FE50 0016CF30  7C 08 02 A6 */	mflr r0
/* 8016FE54 0016CF34  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FE58 0016CF38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016FE5C 0016CF3C  7C BF 2B 78 */	mr r31, r5
/* 8016FE60 0016CF40  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016FE64 0016CF44  7C 7E 1B 78 */	mr r30, r3
/* 8016FE68 0016CF48  4B F6 91 8D */	bl __ct__14zNPCGoalCommonFi
/* 8016FE6C 0016CF4C  3C 80 80 2A */	lis r4, __vt__22zNPCGoalBPlanktonFlank@ha
/* 8016FE70 0016CF50  7F C3 F3 78 */	mr r3, r30
/* 8016FE74 0016CF54  38 04 B2 9C */	addi r0, r4, __vt__22zNPCGoalBPlanktonFlank@l
/* 8016FE78 0016CF58  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8016FE7C 0016CF5C  93 FE 00 50 */	stw r31, 0x50(r30)
/* 8016FE80 0016CF60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016FE84 0016CF64  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016FE88 0016CF68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FE8C 0016CF6C  7C 08 03 A6 */	mtlr r0
/* 8016FE90 0016CF70  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FE94 0016CF74  4E 80 00 20 */	blr
.endfn __ct__22zNPCGoalBPlanktonFlankFiR13zNPCBPlankton

# zNPCGoalBPlanktonEvade::zNPCGoalBPlanktonEvade(int, zNPCBPlankton&)
.fn __ct__22zNPCGoalBPlanktonEvadeFiR13zNPCBPlankton, weak
/* 8016FE98 0016CF78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FE9C 0016CF7C  7C 08 02 A6 */	mflr r0
/* 8016FEA0 0016CF80  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FEA4 0016CF84  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016FEA8 0016CF88  7C BF 2B 78 */	mr r31, r5
/* 8016FEAC 0016CF8C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016FEB0 0016CF90  7C 7E 1B 78 */	mr r30, r3
/* 8016FEB4 0016CF94  4B F6 91 41 */	bl __ct__14zNPCGoalCommonFi
/* 8016FEB8 0016CF98  3C 80 80 2A */	lis r4, __vt__22zNPCGoalBPlanktonEvade@ha
/* 8016FEBC 0016CF9C  7F C3 F3 78 */	mr r3, r30
/* 8016FEC0 0016CFA0  38 04 B2 68 */	addi r0, r4, __vt__22zNPCGoalBPlanktonEvade@l
/* 8016FEC4 0016CFA4  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8016FEC8 0016CFA8  93 FE 00 50 */	stw r31, 0x50(r30)
/* 8016FECC 0016CFAC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016FED0 0016CFB0  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016FED4 0016CFB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FED8 0016CFB8  7C 08 03 A6 */	mtlr r0
/* 8016FEDC 0016CFBC  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FEE0 0016CFC0  4E 80 00 20 */	blr
.endfn __ct__22zNPCGoalBPlanktonEvadeFiR13zNPCBPlankton

# zNPCGoalBPlanktonHunt::zNPCGoalBPlanktonHunt(int, zNPCBPlankton&)
.fn __ct__21zNPCGoalBPlanktonHuntFiR13zNPCBPlankton, weak
/* 8016FEE4 0016CFC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FEE8 0016CFC8  7C 08 02 A6 */	mflr r0
/* 8016FEEC 0016CFCC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FEF0 0016CFD0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016FEF4 0016CFD4  7C BF 2B 78 */	mr r31, r5
/* 8016FEF8 0016CFD8  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016FEFC 0016CFDC  7C 7E 1B 78 */	mr r30, r3
/* 8016FF00 0016CFE0  4B F6 90 F5 */	bl __ct__14zNPCGoalCommonFi
/* 8016FF04 0016CFE4  3C 80 80 2A */	lis r4, __vt__21zNPCGoalBPlanktonHunt@ha
/* 8016FF08 0016CFE8  7F C3 F3 78 */	mr r3, r30
/* 8016FF0C 0016CFEC  38 04 B2 34 */	addi r0, r4, __vt__21zNPCGoalBPlanktonHunt@l
/* 8016FF10 0016CFF0  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8016FF14 0016CFF4  93 FE 00 58 */	stw r31, 0x58(r30)
/* 8016FF18 0016CFF8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016FF1C 0016CFFC  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016FF20 0016D000  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FF24 0016D004  7C 08 03 A6 */	mtlr r0
/* 8016FF28 0016D008  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FF2C 0016D00C  4E 80 00 20 */	blr
.endfn __ct__21zNPCGoalBPlanktonHuntFiR13zNPCBPlankton

# zNPCGoalBPlanktonTaunt::zNPCGoalBPlanktonTaunt(int, zNPCBPlankton&)
.fn __ct__22zNPCGoalBPlanktonTauntFiR13zNPCBPlankton, weak
/* 8016FF30 0016D010  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FF34 0016D014  7C 08 02 A6 */	mflr r0
/* 8016FF38 0016D018  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FF3C 0016D01C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016FF40 0016D020  7C BF 2B 78 */	mr r31, r5
/* 8016FF44 0016D024  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016FF48 0016D028  7C 7E 1B 78 */	mr r30, r3
/* 8016FF4C 0016D02C  4B F6 90 A9 */	bl __ct__14zNPCGoalCommonFi
/* 8016FF50 0016D030  3C 80 80 2A */	lis r4, __vt__22zNPCGoalBPlanktonTaunt@ha
/* 8016FF54 0016D034  7F C3 F3 78 */	mr r3, r30
/* 8016FF58 0016D038  38 04 B2 00 */	addi r0, r4, __vt__22zNPCGoalBPlanktonTaunt@l
/* 8016FF5C 0016D03C  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8016FF60 0016D040  93 FE 00 4C */	stw r31, 0x4c(r30)
/* 8016FF64 0016D044  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016FF68 0016D048  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016FF6C 0016D04C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FF70 0016D050  7C 08 03 A6 */	mtlr r0
/* 8016FF74 0016D054  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FF78 0016D058  4E 80 00 20 */	blr
.endfn __ct__22zNPCGoalBPlanktonTauntFiR13zNPCBPlankton

# zNPCGoalBPlanktonMove::zNPCGoalBPlanktonMove(int, zNPCBPlankton&)
.fn __ct__21zNPCGoalBPlanktonMoveFiR13zNPCBPlankton, weak
/* 8016FF7C 0016D05C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FF80 0016D060  7C 08 02 A6 */	mflr r0
/* 8016FF84 0016D064  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FF88 0016D068  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016FF8C 0016D06C  7C BF 2B 78 */	mr r31, r5
/* 8016FF90 0016D070  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016FF94 0016D074  7C 7E 1B 78 */	mr r30, r3
/* 8016FF98 0016D078  4B F6 90 5D */	bl __ct__14zNPCGoalCommonFi
/* 8016FF9C 0016D07C  3C 80 80 2A */	lis r4, __vt__21zNPCGoalBPlanktonMove@ha
/* 8016FFA0 0016D080  7F C3 F3 78 */	mr r3, r30
/* 8016FFA4 0016D084  38 04 B1 CC */	addi r0, r4, __vt__21zNPCGoalBPlanktonMove@l
/* 8016FFA8 0016D088  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8016FFAC 0016D08C  93 FE 00 4C */	stw r31, 0x4c(r30)
/* 8016FFB0 0016D090  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016FFB4 0016D094  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016FFB8 0016D098  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8016FFBC 0016D09C  7C 08 03 A6 */	mtlr r0
/* 8016FFC0 0016D0A0  38 21 00 10 */	addi r1, r1, 0x10
/* 8016FFC4 0016D0A4  4E 80 00 20 */	blr
.endfn __ct__21zNPCGoalBPlanktonMoveFiR13zNPCBPlankton

# zNPCGoalBPlanktonStun::zNPCGoalBPlanktonStun(int, zNPCBPlankton&)
.fn __ct__21zNPCGoalBPlanktonStunFiR13zNPCBPlankton, weak
/* 8016FFC8 0016D0A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016FFCC 0016D0AC  7C 08 02 A6 */	mflr r0
/* 8016FFD0 0016D0B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8016FFD4 0016D0B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8016FFD8 0016D0B8  7C BF 2B 78 */	mr r31, r5
/* 8016FFDC 0016D0BC  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016FFE0 0016D0C0  7C 7E 1B 78 */	mr r30, r3
/* 8016FFE4 0016D0C4  4B F6 90 11 */	bl __ct__14zNPCGoalCommonFi
/* 8016FFE8 0016D0C8  3C 80 80 2A */	lis r4, __vt__21zNPCGoalBPlanktonStun@ha
/* 8016FFEC 0016D0CC  7F C3 F3 78 */	mr r3, r30
/* 8016FFF0 0016D0D0  38 04 B1 98 */	addi r0, r4, __vt__21zNPCGoalBPlanktonStun@l
/* 8016FFF4 0016D0D4  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8016FFF8 0016D0D8  93 FE 00 4C */	stw r31, 0x4c(r30)
/* 8016FFFC 0016D0DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80170000 0016D0E0  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80170004 0016D0E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80170008 0016D0E8  7C 08 03 A6 */	mtlr r0
/* 8017000C 0016D0EC  38 21 00 10 */	addi r1, r1, 0x10
/* 80170010 0016D0F0  4E 80 00 20 */	blr
.endfn __ct__21zNPCGoalBPlanktonStunFiR13zNPCBPlankton

# zNPCBPlankton::give_control()
.fn give_control__13zNPCBPlanktonFv, weak
/* 80170014 0016D0F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80170018 0016D0F8  7C 08 02 A6 */	mflr r0
/* 8017001C 0016D0FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80170020 0016D100  80 63 04 B0 */	lwz r3, 0x4b0(r3)
/* 80170024 0016D104  28 03 00 00 */	cmplwi r3, 0x0
/* 80170028 0016D108  41 82 00 14 */	beq .L_8017003C
/* 8017002C 0016D10C  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80170030 0016D110  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 80170034 0016D114  7D 89 03 A6 */	mtctr r12
/* 80170038 0016D118  4E 80 04 21 */	bctrl
.L_8017003C:
/* 8017003C 0016D11C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80170040 0016D120  7C 08 03 A6 */	mtlr r0
/* 80170044 0016D124  38 21 00 10 */	addi r1, r1, 0x10
/* 80170048 0016D128  4E 80 00 20 */	blr
.endfn give_control__13zNPCBPlanktonFv

# zNPCGoalBPlanktonFall::zNPCGoalBPlanktonFall(int, zNPCBPlankton&)
.fn __ct__21zNPCGoalBPlanktonFallFiR13zNPCBPlankton, weak
/* 8017004C 0016D12C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80170050 0016D130  7C 08 02 A6 */	mflr r0
/* 80170054 0016D134  90 01 00 14 */	stw r0, 0x14(r1)
/* 80170058 0016D138  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017005C 0016D13C  7C BF 2B 78 */	mr r31, r5
/* 80170060 0016D140  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80170064 0016D144  7C 7E 1B 78 */	mr r30, r3
/* 80170068 0016D148  4B F6 8F 8D */	bl __ct__14zNPCGoalCommonFi
/* 8017006C 0016D14C  3C 80 80 2A */	lis r4, __vt__21zNPCGoalBPlanktonFall@ha
/* 80170070 0016D150  7F C3 F3 78 */	mr r3, r30
/* 80170074 0016D154  38 04 B1 64 */	addi r0, r4, __vt__21zNPCGoalBPlanktonFall@l
/* 80170078 0016D158  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8017007C 0016D15C  93 FE 00 4C */	stw r31, 0x4c(r30)
/* 80170080 0016D160  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80170084 0016D164  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80170088 0016D168  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017008C 0016D16C  7C 08 03 A6 */	mtlr r0
/* 80170090 0016D170  38 21 00 10 */	addi r1, r1, 0x10
/* 80170094 0016D174  4E 80 00 20 */	blr
.endfn __ct__21zNPCGoalBPlanktonFallFiR13zNPCBPlankton

# zNPCGoalBPlanktonDizzy::zNPCGoalBPlanktonDizzy(int, zNPCBPlankton&)
.fn __ct__22zNPCGoalBPlanktonDizzyFiR13zNPCBPlankton, weak
/* 80170098 0016D178  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017009C 0016D17C  7C 08 02 A6 */	mflr r0
/* 801700A0 0016D180  90 01 00 14 */	stw r0, 0x14(r1)
/* 801700A4 0016D184  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801700A8 0016D188  7C BF 2B 78 */	mr r31, r5
/* 801700AC 0016D18C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 801700B0 0016D190  7C 7E 1B 78 */	mr r30, r3
/* 801700B4 0016D194  4B F6 8F 41 */	bl __ct__14zNPCGoalCommonFi
/* 801700B8 0016D198  3C 80 80 2A */	lis r4, __vt__22zNPCGoalBPlanktonDizzy@ha
/* 801700BC 0016D19C  7F C3 F3 78 */	mr r3, r30
/* 801700C0 0016D1A0  38 04 B1 30 */	addi r0, r4, __vt__22zNPCGoalBPlanktonDizzy@l
/* 801700C4 0016D1A4  90 1E 00 38 */	stw r0, 0x38(r30)
/* 801700C8 0016D1A8  93 FE 00 4C */	stw r31, 0x4c(r30)
/* 801700CC 0016D1AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801700D0 0016D1B0  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 801700D4 0016D1B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801700D8 0016D1B8  7C 08 03 A6 */	mtlr r0
/* 801700DC 0016D1BC  38 21 00 10 */	addi r1, r1, 0x10
/* 801700E0 0016D1C0  4E 80 00 20 */	blr
.endfn __ct__22zNPCGoalBPlanktonDizzyFiR13zNPCBPlankton

# zNPCGoalBPlanktonBeam::zNPCGoalBPlanktonBeam(int, zNPCBPlankton&)
.fn __ct__21zNPCGoalBPlanktonBeamFiR13zNPCBPlankton, weak
/* 801700E4 0016D1C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801700E8 0016D1C8  7C 08 02 A6 */	mflr r0
/* 801700EC 0016D1CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801700F0 0016D1D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801700F4 0016D1D4  7C BF 2B 78 */	mr r31, r5
/* 801700F8 0016D1D8  93 C1 00 08 */	stw r30, 0x8(r1)
/* 801700FC 0016D1DC  7C 7E 1B 78 */	mr r30, r3
/* 80170100 0016D1E0  4B F6 8E F5 */	bl __ct__14zNPCGoalCommonFi
/* 80170104 0016D1E4  3C 80 80 2A */	lis r4, __vt__21zNPCGoalBPlanktonBeam@ha
/* 80170108 0016D1E8  7F C3 F3 78 */	mr r3, r30
/* 8017010C 0016D1EC  38 04 B0 FC */	addi r0, r4, __vt__21zNPCGoalBPlanktonBeam@l
/* 80170110 0016D1F0  90 1E 00 38 */	stw r0, 0x38(r30)
/* 80170114 0016D1F4  93 FE 00 54 */	stw r31, 0x54(r30)
/* 80170118 0016D1F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017011C 0016D1FC  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80170120 0016D200  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80170124 0016D204  7C 08 03 A6 */	mtlr r0
/* 80170128 0016D208  38 21 00 10 */	addi r1, r1, 0x10
/* 8017012C 0016D20C  4E 80 00 20 */	blr
.endfn __ct__21zNPCGoalBPlanktonBeamFiR13zNPCBPlankton

# zNPCBPlankton::enable_emitter(xParEmitter&) const
.fn enable_emitter__13zNPCBPlanktonCFR11xParEmitter, weak
/* 80170130 0016D210  88 04 00 30 */	lbz r0, 0x30(r4)
/* 80170134 0016D214  60 00 00 01 */	ori r0, r0, 0x1
/* 80170138 0016D218  98 04 00 30 */	stb r0, 0x30(r4)
/* 8017013C 0016D21C  4E 80 00 20 */	blr
.endfn enable_emitter__13zNPCBPlanktonCFR11xParEmitter

# zNPCBPlankton::disable_emitter(xParEmitter&) const
.fn disable_emitter__13zNPCBPlanktonCFR11xParEmitter, weak
/* 80170140 0016D220  88 04 00 30 */	lbz r0, 0x30(r4)
/* 80170144 0016D224  54 00 06 3C */	rlwinm r0, r0, 0, 24, 30
/* 80170148 0016D228  98 04 00 30 */	stb r0, 0x30(r4)
/* 8017014C 0016D22C  4E 80 00 20 */	blr
.endfn disable_emitter__13zNPCBPlanktonCFR11xParEmitter

# zNPCGoalBPlanktonWall::zNPCGoalBPlanktonWall(int, zNPCBPlankton&)
.fn __ct__21zNPCGoalBPlanktonWallFiR13zNPCBPlankton, weak
/* 80170150 0016D230  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80170154 0016D234  7C 08 02 A6 */	mflr r0
/* 80170158 0016D238  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017015C 0016D23C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80170160 0016D240  7C BF 2B 78 */	mr r31, r5
/* 80170164 0016D244  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80170168 0016D248  7C 7E 1B 78 */	mr r30, r3
/* 8017016C 0016D24C  4B F6 8E 89 */	bl __ct__14zNPCGoalCommonFi
/* 80170170 0016D250  3C 80 80 2A */	lis r4, __vt__21zNPCGoalBPlanktonWall@ha
/* 80170174 0016D254  7F C3 F3 78 */	mr r3, r30
/* 80170178 0016D258  38 04 B0 C8 */	addi r0, r4, __vt__21zNPCGoalBPlanktonWall@l
/* 8017017C 0016D25C  90 1E 00 38 */	stw r0, 0x38(r30)
/* 80170180 0016D260  93 FE 00 4C */	stw r31, 0x4c(r30)
/* 80170184 0016D264  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80170188 0016D268  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8017018C 0016D26C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80170190 0016D270  7C 08 03 A6 */	mtlr r0
/* 80170194 0016D274  38 21 00 10 */	addi r1, r1, 0x10
/* 80170198 0016D278  4E 80 00 20 */	blr
.endfn __ct__21zNPCGoalBPlanktonWallFiR13zNPCBPlankton

# zNPCGoalBPlanktonMissle::zNPCGoalBPlanktonMissle(int, zNPCBPlankton&)
.fn __ct__23zNPCGoalBPlanktonMissleFiR13zNPCBPlankton, weak
/* 8017019C 0016D27C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801701A0 0016D280  7C 08 02 A6 */	mflr r0
/* 801701A4 0016D284  90 01 00 14 */	stw r0, 0x14(r1)
/* 801701A8 0016D288  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801701AC 0016D28C  7C BF 2B 78 */	mr r31, r5
/* 801701B0 0016D290  93 C1 00 08 */	stw r30, 0x8(r1)
/* 801701B4 0016D294  7C 7E 1B 78 */	mr r30, r3
/* 801701B8 0016D298  4B F6 8E 3D */	bl __ct__14zNPCGoalCommonFi
/* 801701BC 0016D29C  3C 80 80 2A */	lis r4, __vt__23zNPCGoalBPlanktonMissle@ha
/* 801701C0 0016D2A0  7F C3 F3 78 */	mr r3, r30
/* 801701C4 0016D2A4  38 04 B0 94 */	addi r0, r4, __vt__23zNPCGoalBPlanktonMissle@l
/* 801701C8 0016D2A8  90 1E 00 38 */	stw r0, 0x38(r30)
/* 801701CC 0016D2AC  93 FE 00 4C */	stw r31, 0x4c(r30)
/* 801701D0 0016D2B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801701D4 0016D2B4  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 801701D8 0016D2B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801701DC 0016D2BC  7C 08 03 A6 */	mtlr r0
/* 801701E0 0016D2C0  38 21 00 10 */	addi r1, r1, 0x10
/* 801701E4 0016D2C4  4E 80 00 20 */	blr
.endfn __ct__23zNPCGoalBPlanktonMissleFiR13zNPCBPlankton

# zNPCGoalBPlanktonBomb::zNPCGoalBPlanktonBomb(int, zNPCBPlankton&)
.fn __ct__21zNPCGoalBPlanktonBombFiR13zNPCBPlankton, weak
/* 801701E8 0016D2C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801701EC 0016D2CC  7C 08 02 A6 */	mflr r0
/* 801701F0 0016D2D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801701F4 0016D2D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801701F8 0016D2D8  7C BF 2B 78 */	mr r31, r5
/* 801701FC 0016D2DC  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80170200 0016D2E0  7C 7E 1B 78 */	mr r30, r3
/* 80170204 0016D2E4  4B F6 8D F1 */	bl __ct__14zNPCGoalCommonFi
/* 80170208 0016D2E8  3C 80 80 2A */	lis r4, __vt__21zNPCGoalBPlanktonBomb@ha
/* 8017020C 0016D2EC  7F C3 F3 78 */	mr r3, r30
/* 80170210 0016D2F0  38 04 B0 60 */	addi r0, r4, __vt__21zNPCGoalBPlanktonBomb@l
/* 80170214 0016D2F4  90 1E 00 38 */	stw r0, 0x38(r30)
/* 80170218 0016D2F8  93 FE 00 4C */	stw r31, 0x4c(r30)
/* 8017021C 0016D2FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80170220 0016D300  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80170224 0016D304  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80170228 0016D308  7C 08 03 A6 */	mtlr r0
/* 8017022C 0016D30C  38 21 00 10 */	addi r1, r1, 0x10
/* 80170230 0016D310  4E 80 00 20 */	blr
.endfn __ct__21zNPCGoalBPlanktonBombFiR13zNPCBPlankton

# zNPCBPlankton::ColChkFlags() const
.fn ColChkFlags__13zNPCBPlanktonCFv, weak
/* 80170234 0016D314  38 60 00 00 */	li r3, 0x0
/* 80170238 0016D318  4E 80 00 20 */	blr
.endfn ColChkFlags__13zNPCBPlanktonCFv

# zNPCBPlankton::ColPenFlags() const
.fn ColPenFlags__13zNPCBPlanktonCFv, weak
/* 8017023C 0016D31C  38 60 00 00 */	li r3, 0x0
/* 80170240 0016D320  4E 80 00 20 */	blr
.endfn ColPenFlags__13zNPCBPlanktonCFv

# zNPCBPlankton::ColChkByFlags() const
.fn ColChkByFlags__13zNPCBPlanktonCFv, weak
/* 80170244 0016D324  38 60 00 10 */	li r3, 0x10
/* 80170248 0016D328  4E 80 00 20 */	blr
.endfn ColChkByFlags__13zNPCBPlanktonCFv

# zNPCBPlankton::ColPenByFlags() const
.fn ColPenByFlags__13zNPCBPlanktonCFv, weak
/* 8017024C 0016D32C  38 60 00 10 */	li r3, 0x10
/* 80170250 0016D330  4E 80 00 20 */	blr
.endfn ColPenByFlags__13zNPCBPlanktonCFv

# zNPCBPlankton::PhysicsFlags() const
.fn PhysicsFlags__13zNPCBPlanktonCFv, weak
/* 80170254 0016D334  38 60 00 03 */	li r3, 0x3
/* 80170258 0016D338  4E 80 00 20 */	blr
.endfn PhysicsFlags__13zNPCBPlanktonCFv

# zNPCBPlankton::IsAlive()
.fn IsAlive__13zNPCBPlanktonFv, weak
/* 8017025C 0016D33C  38 60 00 01 */	li r3, 0x1
/* 80170260 0016D340  4E 80 00 20 */	blr
.endfn IsAlive__13zNPCBPlanktonFv

# 0x80170264 - 0x80170294
.section .text, "ax", unique, 2
.balign 4

# xLaserBoltEmitter::visible() const
.fn visible__17xLaserBoltEmitterCFv, weak
/* 80170264 0016D344  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80170268 0016D348  7C 08 02 A6 */	mflr r0
/* 8017026C 0016D34C  38 63 00 3C */	addi r3, r3, 0x3c
/* 80170270 0016D350  90 01 00 14 */	stw r0, 0x14(r1)
/* 80170274 0016D354  48 00 00 21 */	bl "empty__40static_queue<Q217xLaserBoltEmitter4bolt>CFv"
/* 80170278 0016D358  54 60 06 3E */	clrlwi r0, r3, 24
/* 8017027C 0016D35C  7C 00 00 34 */	cntlzw r0, r0
/* 80170280 0016D360  54 03 D9 7E */	srwi r3, r0, 5
/* 80170284 0016D364  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80170288 0016D368  7C 08 03 A6 */	mtlr r0
/* 8017028C 0016D36C  38 21 00 10 */	addi r1, r1, 0x10
/* 80170290 0016D370  4E 80 00 20 */	blr
.endfn visible__17xLaserBoltEmitterCFv

# 0x80170294 - 0x801702C4
.section .text, "ax", unique, 3
.balign 4

# static_queue<xLaserBoltEmitter::bolt>::empty() const
.fn "empty__40static_queue<Q217xLaserBoltEmitter4bolt>CFv", weak
/* 80170294 0016D374  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80170298 0016D378  7C 08 02 A6 */	mflr r0
/* 8017029C 0016D37C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801702A0 0016D380  48 00 00 1D */	bl "size__40static_queue<Q217xLaserBoltEmitter4bolt>CFv"
/* 801702A4 0016D384  7C 60 00 34 */	cntlzw r0, r3
/* 801702A8 0016D388  54 03 D9 7E */	srwi r3, r0, 5
/* 801702AC 0016D38C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801702B0 0016D390  7C 08 03 A6 */	mtlr r0
/* 801702B4 0016D394  38 21 00 10 */	addi r1, r1, 0x10
/* 801702B8 0016D398  4E 80 00 20 */	blr
.endfn "empty__40static_queue<Q217xLaserBoltEmitter4bolt>CFv"

# static_queue<xLaserBoltEmitter::bolt>::size() const
.fn "size__40static_queue<Q217xLaserBoltEmitter4bolt>CFv", weak
/* 801702BC 0016D39C  80 63 00 04 */	lwz r3, 0x4(r3)
/* 801702C0 0016D3A0  4E 80 00 20 */	blr
.endfn "size__40static_queue<Q217xLaserBoltEmitter4bolt>CFv"

# 0x801702C4 - 0x80170300
.section .text, "ax", unique, 4
.balign 4

# xVec2::operator/(float) const
.fn __dv__5xVec2CFf, weak
/* 801702C4 0016D3A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801702C8 0016D3A8  7C 08 02 A6 */	mflr r0
/* 801702CC 0016D3AC  80 83 00 00 */	lwz r4, 0x0(r3)
/* 801702D0 0016D3B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801702D4 0016D3B4  80 03 00 04 */	lwz r0, 0x4(r3)
/* 801702D8 0016D3B8  38 61 00 08 */	addi r3, r1, 0x8
/* 801702DC 0016D3BC  90 81 00 08 */	stw r4, 0x8(r1)
/* 801702E0 0016D3C0  90 01 00 0C */	stw r0, 0xc(r1)
/* 801702E4 0016D3C4  4B EC 65 51 */	bl __adv__5xVec2Ff
/* 801702E8 0016D3C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801702EC 0016D3CC  80 61 00 08 */	lwz r3, 0x8(r1)
/* 801702F0 0016D3D0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801702F4 0016D3D4  7C 08 03 A6 */	mtlr r0
/* 801702F8 0016D3D8  38 21 00 10 */	addi r1, r1, 0x10
/* 801702FC 0016D3DC  4E 80 00 20 */	blr
.endfn __dv__5xVec2CFf

# 0x80170300 - 0x8017047C
.section .text, "ax", unique, 5
.balign 4

# auto_tweak::load_param<int, int>(int&, int, int, int, xModelAssetParam*, unsigned int, const char*)
.fn "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc", local
/* 80170300 0016D3E0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80170304 0016D3E4  7C 08 02 A6 */	mflr r0
/* 80170308 0016D3E8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017030C 0016D3EC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80170310 0016D3F0  7C DF 33 78 */	mr r31, r6
/* 80170314 0016D3F4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80170318 0016D3F8  7C BE 2B 78 */	mr r30, r5
/* 8017031C 0016D3FC  7D 25 4B 78 */	mr r5, r9
/* 80170320 0016D400  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80170324 0016D404  7C 9D 23 78 */	mr r29, r4
/* 80170328 0016D408  7D 04 43 78 */	mr r4, r8
/* 8017032C 0016D40C  93 81 00 10 */	stw r28, 0x10(r1)
/* 80170330 0016D410  7C 7C 1B 78 */	mr r28, r3
/* 80170334 0016D414  80 C3 00 00 */	lwz r6, 0x0(r3)
/* 80170338 0016D418  7C E3 3B 78 */	mr r3, r7
/* 8017033C 0016D41C  4B EE 5C C9 */	bl zParamGetInt__FP16xModelAssetParamUiPCci
/* 80170340 0016D420  7C 03 F0 00 */	cmpw r3, r30
/* 80170344 0016D424  40 80 00 0C */	bge .L_80170350
/* 80170348 0016D428  7F C3 F3 78 */	mr r3, r30
/* 8017034C 0016D42C  48 00 00 10 */	b .L_8017035C
.L_80170350:
/* 80170350 0016D430  7C 03 F8 00 */	cmpw r3, r31
/* 80170354 0016D434  40 81 00 08 */	ble .L_8017035C
/* 80170358 0016D438  7F E3 FB 78 */	mr r3, r31
.L_8017035C:
/* 8017035C 0016D43C  7C 63 E9 D6 */	mullw r3, r3, r29
/* 80170360 0016D440  90 7C 00 00 */	stw r3, 0x0(r28)
/* 80170364 0016D444  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80170368 0016D448  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8017036C 0016D44C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80170370 0016D450  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80170374 0016D454  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80170378 0016D458  7C 08 03 A6 */	mtlr r0
/* 8017037C 0016D45C  38 21 00 20 */	addi r1, r1, 0x20
/* 80170380 0016D460  4E 80 00 20 */	blr
.endfn "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc"

# auto_tweak::load_param<xVec3, int>(xVec3&, int, int, int, xModelAssetParam*, unsigned int, const char*)
.fn "load_param<5xVec3,i>__10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc", local
/* 80170384 0016D464  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80170388 0016D468  7C 08 02 A6 */	mflr r0
/* 8017038C 0016D46C  7C 6A 1B 78 */	mr r10, r3
/* 80170390 0016D470  7D 04 43 78 */	mr r4, r8
/* 80170394 0016D474  90 01 00 24 */	stw r0, 0x24(r1)
/* 80170398 0016D478  38 C1 00 08 */	addi r6, r1, 0x8
/* 8017039C 0016D47C  80 A3 00 00 */	lwz r5, 0x0(r3)
/* 801703A0 0016D480  80 03 00 04 */	lwz r0, 0x4(r3)
/* 801703A4 0016D484  7C E3 3B 78 */	mr r3, r7
/* 801703A8 0016D488  7D 47 53 78 */	mr r7, r10
/* 801703AC 0016D48C  90 A1 00 08 */	stw r5, 0x8(r1)
/* 801703B0 0016D490  7D 25 4B 78 */	mr r5, r9
/* 801703B4 0016D494  90 01 00 0C */	stw r0, 0xc(r1)
/* 801703B8 0016D498  80 0A 00 08 */	lwz r0, 0x8(r10)
/* 801703BC 0016D49C  90 01 00 10 */	stw r0, 0x10(r1)
/* 801703C0 0016D4A0  4B EE 5E 4D */	bl zParamGetVector__FP16xModelAssetParamUiPCc5xVec3P5xVec3
/* 801703C4 0016D4A4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801703C8 0016D4A8  7C 08 03 A6 */	mtlr r0
/* 801703CC 0016D4AC  38 21 00 20 */	addi r1, r1, 0x20
/* 801703D0 0016D4B0  4E 80 00 20 */	blr
.endfn "load_param<5xVec3,i>__10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc"

# auto_tweak::load_param<float, float>(float&, float, float, float, xModelAssetParam*, unsigned int, const char*)
.fn "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc", local
/* 801703D4 0016D4B4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801703D8 0016D4B8  7C 08 02 A6 */	mflr r0
/* 801703DC 0016D4BC  90 01 00 44 */	stw r0, 0x44(r1)
/* 801703E0 0016D4C0  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 801703E4 0016D4C4  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 801703E8 0016D4C8  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 801703EC 0016D4CC  F3 C1 00 28 */	psq_st f30, 0x28(r1), 0, qr0
/* 801703F0 0016D4D0  DB A1 00 10 */	stfd f29, 0x10(r1)
/* 801703F4 0016D4D4  F3 A1 00 18 */	psq_st f29, 0x18(r1), 0, qr0
/* 801703F8 0016D4D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801703FC 0016D4DC  FF A0 08 90 */	fmr f29, f1
/* 80170400 0016D4E0  C0 23 00 00 */	lfs f1, 0x0(r3)
/* 80170404 0016D4E4  FF C0 10 90 */	fmr f30, f2
/* 80170408 0016D4E8  7C 7F 1B 78 */	mr r31, r3
/* 8017040C 0016D4EC  7C 83 23 78 */	mr r3, r4
/* 80170410 0016D4F0  7C A4 2B 78 */	mr r4, r5
/* 80170414 0016D4F4  FF E0 18 90 */	fmr f31, f3
/* 80170418 0016D4F8  7C C5 33 78 */	mr r5, r6
/* 8017041C 0016D4FC  4B EE 5C 4D */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 80170420 0016D500  D0 3F 00 00 */	stfs f1, 0x0(r31)
/* 80170424 0016D504  C0 1F 00 00 */	lfs f0, 0x0(r31)
/* 80170428 0016D508  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 8017042C 0016D50C  40 80 00 0C */	bge .L_80170438
/* 80170430 0016D510  D3 DF 00 00 */	stfs f30, 0x0(r31)
/* 80170434 0016D514  48 00 00 10 */	b .L_80170444
.L_80170438:
/* 80170438 0016D518  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 8017043C 0016D51C  40 81 00 08 */	ble .L_80170444
/* 80170440 0016D520  D3 FF 00 00 */	stfs f31, 0x0(r31)
.L_80170444:
/* 80170444 0016D524  C0 1F 00 00 */	lfs f0, 0x0(r31)
/* 80170448 0016D528  EC 00 07 72 */	fmuls f0, f0, f29
/* 8017044C 0016D52C  D0 1F 00 00 */	stfs f0, 0x0(r31)
/* 80170450 0016D530  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 80170454 0016D534  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80170458 0016D538  E3 C1 00 28 */	psq_l f30, 0x28(r1), 0, qr0
/* 8017045C 0016D53C  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 80170460 0016D540  E3 A1 00 18 */	psq_l f29, 0x18(r1), 0, qr0
/* 80170464 0016D544  CB A1 00 10 */	lfd f29, 0x10(r1)
/* 80170468 0016D548  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8017046C 0016D54C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80170470 0016D550  7C 08 03 A6 */	mtlr r0
/* 80170474 0016D554  38 21 00 40 */	addi r1, r1, 0x40
/* 80170478 0016D558  4E 80 00 20 */	blr
.endfn "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"

# 0x80270FA8 - 0x80271E28
.rodata
.balign 8

.obj "@405", local
.sym ...rodata.0, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@405"

.obj "@406", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@406"

.obj "@410", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@410"

.obj "@441", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@441"

.obj "@607", local
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
.endobj "@607"

.obj "@608", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.L_8027101C:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@608"

.obj "@609", local
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
.endobj "@609"

.obj "@610", local
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
.endobj "@610"

.obj "@611", local
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
.endobj "@611"

.obj "@612", local
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
.endobj "@612"

.obj "@613", local
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
.endobj "@613"

.obj "@781", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@781"

.obj "@842", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@842"

# @unnamed@zNPCTypeBossPlankton_cpp@::sound_assets
.obj "sound_assets__34@unnamed@zNPCTypeBossPlankton_cpp@", local
	.4byte 0x00000000
	.4byte "@stringBase0"
	.4byte 0x00000000
	.4byte 0x00000003
	.4byte 0x00000000
	.4byte "@stringBase0"+0xE
	.4byte 0x00000000
	.4byte 0x00000003
	.4byte 0x00000000
	.4byte "@stringBase0"+0x17
	.4byte 0x00000000
	.4byte 0x00000003
	.4byte 0x00000000
	.4byte "@stringBase0"+0x28
	.4byte 0x00000000
	.4byte 0x00000003
	.4byte 0x00000000
	.4byte "@stringBase0"+0x36
	.4byte 0x00000000
	.4byte 0x00000003
	.4byte 0x00000000
	.4byte "@stringBase0"+0x45
	.4byte 0x00000000
	.4byte 0x00000003
	.4byte 0x00000000
	.4byte "@stringBase0"+0x51
	.4byte 0x00000000
	.4byte 0x00000003
	.4byte 0x00000001
	.4byte "@stringBase0"+0x5F
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte "@stringBase0"+0x6C
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte "@stringBase0"+0x76
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte "@stringBase0"+0x86
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte "@stringBase0"+0x95
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte "@stringBase0"+0x9E
.L_802711D4:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte "@stringBase0"+0xA8
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte "@stringBase0"+0xB1
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000002
	.4byte "@stringBase0"+0xC0
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000003
	.4byte "@stringBase0"+0xCD
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte 0x00000003
	.4byte "@stringBase0"+0xDB
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte 0x00000003
	.4byte "@stringBase0"+0xE9
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte 0x00000003
	.4byte "@stringBase0"+0xFD
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte 0x00000004
	.4byte "@stringBase0"+0x110
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000004
	.4byte "@stringBase0"+0x11F
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000004
	.4byte "@stringBase0"+0x12D
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000004
	.4byte "@stringBase0"+0x13C
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000004
	.4byte "@stringBase0"+0x144
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000005
	.4byte "@stringBase0"+0x14E
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000005
	.4byte "@stringBase0"+0x15E
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000005
	.4byte "@stringBase0"+0x16B
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000005
	.4byte "@stringBase0"+0x175
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "sound_assets__34@unnamed@zNPCTypeBossPlankton_cpp@"

.obj "@896", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@896"

# @unnamed@zNPCTypeBossPlankton_cpp@::beam_ring_curve
.obj "beam_ring_curve__34@unnamed@zNPCTypeBossPlankton_cpp@", local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte 0x00000000
	.4byte 0x3F800000
	.4byte 0xFFFFFF00
	.4byte 0x3F800000
.endobj "beam_ring_curve__34@unnamed@zNPCTypeBossPlankton_cpp@"

# @unnamed@zNPCTypeBossPlankton_cpp@::beam_glow_curve
.obj "beam_glow_curve__34@unnamed@zNPCTypeBossPlankton_cpp@", local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte 0x00000000
	.4byte 0x3F000000
	.4byte 0xFF00FFFF
.L_80271314:
	.4byte 0x40800000
	.4byte 0x3F800000
	.4byte 0xFF000000
.L_80271320:
	.4byte 0x40C00000
.endobj "beam_glow_curve__34@unnamed@zNPCTypeBossPlankton_cpp@"

# @unnamed@zNPCTypeBossPlankton_cpp@::say_fuse_near
.obj "say_fuse_near__34@unnamed@zNPCTypeBossPlankton_cpp@", local
	.4byte 0x00000019
	.4byte 0x00000043
	.4byte 0x00000038
	.4byte 0x00000039
.endobj "say_fuse_near__34@unnamed@zNPCTypeBossPlankton_cpp@"

# @unnamed@zNPCTypeBossPlankton_cpp@::say_fuse_hit
.obj "say_fuse_hit__34@unnamed@zNPCTypeBossPlankton_cpp@", local
	.4byte 0x0000001A
	.4byte 0x0000002A
	.4byte 0x00000033
.endobj "say_fuse_hit__34@unnamed@zNPCTypeBossPlankton_cpp@"

# @unnamed@zNPCTypeBossPlankton_cpp@::say_hit_boss_1
.obj "say_hit_boss_1__34@unnamed@zNPCTypeBossPlankton_cpp@", local
	.4byte 0x0000002A
	.4byte 0x0000002B
	.4byte 0x00000034
	.4byte 0x00000035
	.4byte 0x00000041
	.4byte 0x0000003E
.endobj "say_hit_boss_1__34@unnamed@zNPCTypeBossPlankton_cpp@"

# @unnamed@zNPCTypeBossPlankton_cpp@::say_hit_boss_2
.obj "say_hit_boss_2__34@unnamed@zNPCTypeBossPlankton_cpp@", local
	.4byte 0x0000001B
	.4byte 0x0000001C
	.4byte 0x0000001D
.endobj "say_hit_boss_2__34@unnamed@zNPCTypeBossPlankton_cpp@"

# @unnamed@zNPCTypeBossPlankton_cpp@::say_hit_boss_3
.obj "say_hit_boss_3__34@unnamed@zNPCTypeBossPlankton_cpp@", local
	.4byte 0x0000001B
	.4byte 0x0000001C
	.4byte 0x0000001D
	.4byte 0x00000036
	.4byte 0x00000037
	.4byte 0x0000003A
.endobj "say_hit_boss_3__34@unnamed@zNPCTypeBossPlankton_cpp@"

# @unnamed@zNPCTypeBossPlankton_cpp@::say_hit_player
.obj "say_hit_player__34@unnamed@zNPCTypeBossPlankton_cpp@", local
	.4byte 0x0000001E
	.4byte 0x0000001F
	.4byte 0x00000020
	.4byte 0x00000021
	.4byte 0x00000022
	.4byte 0x00000023
.endobj "say_hit_player__34@unnamed@zNPCTypeBossPlankton_cpp@"

# @unnamed@zNPCTypeBossPlankton_cpp@::say_set
.obj "say_set__34@unnamed@zNPCTypeBossPlankton_cpp@", local
	.4byte "say_intro__34@unnamed@zNPCTypeBossPlankton_cpp@"
	.4byte 0x00000002
	.4byte "say_fuse_near__34@unnamed@zNPCTypeBossPlankton_cpp@"
	.4byte 0x00000004
	.4byte "say_fuse_hit__34@unnamed@zNPCTypeBossPlankton_cpp@"
	.4byte 0x00000003
	.4byte "say_hit_boss_1__34@unnamed@zNPCTypeBossPlankton_cpp@"
	.4byte 0x00000006
	.4byte "say_hit_boss_2__34@unnamed@zNPCTypeBossPlankton_cpp@"
	.4byte 0x00000003
	.4byte "say_hit_boss_3__34@unnamed@zNPCTypeBossPlankton_cpp@"
	.4byte 0x00000006
	.4byte "say_hit_boss_4__34@unnamed@zNPCTypeBossPlankton_cpp@"
	.4byte 0x00000001
	.4byte "say_hit_player__34@unnamed@zNPCTypeBossPlankton_cpp@"
	.4byte 0x00000006
.endobj "say_set__34@unnamed@zNPCTypeBossPlankton_cpp@"

.obj "@2120", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@2120"

.obj "@2125", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@2125"

.obj "@2143", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@2143"

.obj "@2144", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@2144"

.obj "@2145", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@2145"

.obj "@2146", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@2146"

.obj "@2236", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@2236"

.obj "@2239", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@2239"

.obj "@2244", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@2244"

.obj "@2381", local
	.4byte 0xBF800000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@2381"

.obj "@2633", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@2633"

.obj "@2634", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@2634"

.obj "@stringBase0", local
	.4byte 0x5253425F
	.4byte 0x666F6F74
	.4byte 0x5F6C6F6F
	.4byte 0x70006661
	.4byte 0x6E5F6C6F
	.4byte 0x6F700052
	.4byte 0x6F636B65
.L_80271480:
	.4byte 0x745F6275
	.4byte 0x726E5F6C
	.4byte 0x6F6F7000
	.4byte 0x52505F77
	.4byte 0x68697272
	.4byte 0x5F6C6F6F
	.4byte 0x70005250
	.4byte 0x5F776869
	.4byte 0x7272325F
	.4byte 0x6C6F6F70
	.4byte 0x00476C6F
	.4byte 0x76655F68
	.4byte 0x6F766572
	.4byte 0x00476C6F
	.4byte 0x76655F70
	.4byte 0x75727375
	.4byte 0x69740050
	.4byte 0x7261776E
	.4byte 0x5F46465F
	.4byte 0x68697400
	.4byte 0x50726177
	.4byte 0x6E5F6869
	.4byte 0x7400446F
	.4byte 0x6F725F6D
	.4byte 0x6574616C
	.4byte 0x5F736875
	.4byte 0x74004768
	.4byte 0x6F737470
	.4byte 0x6C61745F
	.4byte 0x66616C6C
	.4byte 0x0053545F
	.4byte 0x64656174
	.4byte 0x68005250
	.4byte 0x5F427772
	.4byte 0x727A7400
	.4byte 0x52505F63
	.4byte 0x68756E6B
	.4byte 0x00623230
	.4byte 0x315F7270
	.4byte 0x5F657868
	.4byte 0x616C6500
	.4byte 0x52505F6C
	.4byte 0x61736572
	.4byte 0x5F616C74
	.4byte 0x0052505F
	.4byte 0x6C617365
	.4byte 0x725F6C6F
	.4byte 0x6F700045
	.4byte 0x6C656341
	.4byte 0x72635F61
	.4byte 0x6C745F62
	.4byte 0x004C6173
	.4byte 0x65725F6C
	.4byte 0x72675F66
	.4byte 0x6972655F
	.4byte 0x6C6F6F70
	.4byte 0x004C6173
	.4byte 0x65725F73
	.4byte 0x6D5F6669
	.4byte 0x72655F6C
	.4byte 0x6F6F7000
	.4byte 0x52425F73
	.4byte 0x74616C61
	.4byte 0x63745F62
	.4byte 0x726B0056
	.4byte 0x6F6C6361
	.4byte 0x6E6F5F62
	.4byte 0x6C617374
	.4byte 0x0052505F
	.4byte 0x6C617365
	.4byte 0x725F7468
	.4byte 0x756E6B00
	.4byte 0x52505F70
	.4byte 0x66667400
	.4byte 0x52505F74
	.4byte 0x68776173
	.4byte 0x68005250
	.4byte 0x5F636861
	.4byte 0x7267655F
	.4byte 0x77686972
	.4byte 0x72004231
	.4byte 0x30315F53
	.4byte 0x435F6A75
	.4byte 0x6D70004B
	.4byte 0x4A5F4368
	.4byte 0x61726765
	.4byte 0x004C6173
	.4byte 0x65725F6D
	.4byte 0x65645F70
	.4byte 0x77727570
	.4byte 0x31007A4E
	.4byte 0x50434250
	.4byte 0x6C616E6B
	.4byte 0x746F6E00
	.4byte 0x4E50435F
	.4byte 0x4E455753
	.4byte 0x43415354
	.4byte 0x45520074
	.4byte 0x75726E5F
	.4byte 0x61636365
.L_80271610:
	.4byte 0x6C007475
	.4byte 0x726E5F6D
	.4byte 0x61785F76
	.4byte 0x656C0067
	.4byte 0x726F756E
	.4byte 0x645F7900
	.4byte 0x67726F75
	.4byte 0x6E645F72
	.4byte 0x61646975
	.4byte 0x73006869
	.4byte 0x745F7665
	.4byte 0x6C006869
	.4byte 0x745F6D61
	.4byte 0x785F6469
	.4byte 0x73740069
	.4byte 0x646C655F
	.4byte 0x74696D65
	.4byte 0x006D696E
	.4byte 0x5F617265
	.4byte 0x6E615F64
	.4byte 0x69737400
	.4byte 0x68656C70
	.4byte 0x2E667573
	.4byte 0x655F6469
	.4byte 0x73740068
	.4byte 0x656C702E
	.4byte 0x66757365
	.4byte 0x5F64656C
	.4byte 0x61790066
	.4byte 0x6F6C6C6F
	.4byte 0x772E6D69
	.4byte 0x6E5F616E
	.4byte 0x6700666F
	.4byte 0x6C6C6F77
	.4byte 0x2E6D6178
	.4byte 0x5F616E67
	.4byte 0x00666F6C
	.4byte 0x6C6F772E
	.4byte 0x6D696E5F
	.4byte 0x64656C61
	.4byte 0x7900666F
	.4byte 0x6C6C6F77
	.4byte 0x2E6D6178
	.4byte 0x5F64656C
	.4byte 0x6179006D
	.4byte 0x6F64655F
	.4byte 0x62756464
	.4byte 0x792E6163
	.4byte 0x63656C00
	.4byte 0x6D6F6465
	.4byte 0x5F627564
	.4byte 0x64792E6D
	.4byte 0x61785F76
	.4byte 0x656C006D
	.4byte 0x6F64655F
	.4byte 0x62756464
	.4byte 0x792E7374
	.4byte 0x756E5F64
	.4byte 0x75726174
	.4byte 0x696F6E00
	.4byte 0x6D6F6465
	.4byte 0x5F627564
	.4byte 0x64792E6F
	.4byte 0x62737472
	.4byte 0x7563745F
	.4byte 0x616E676C
	.4byte 0x65006D6F
	.4byte 0x64655F68
	.4byte 0x61726173
	.4byte 0x732E6163
	.4byte 0x63656C00
	.4byte 0x6D6F6465
	.4byte 0x5F686172
	.4byte 0x6173732E
.L_80271738:
	.4byte 0x6D61785F
	.4byte 0x76656C00
	.4byte 0x6D6F6465
	.4byte 0x5F686172
	.4byte 0x6173732E
	.4byte 0x7374756E
	.4byte 0x5F647572
	.4byte 0x6174696F
	.4byte 0x6E006875
	.4byte 0x6E742E68
	.4byte 0x65696768
	.4byte 0x74006875
	.4byte 0x6E742E72
	.4byte 0x61646975
	.4byte 0x73006875
	.4byte 0x6E742E62
	.4byte 0x65616D5F
	.4byte 0x696E7465
	.4byte 0x7276616C
	.4byte 0x0068756E
	.4byte 0x742E6265
	.4byte 0x616D5F64
	.4byte 0x75726174
	.4byte 0x696F6E00
	.4byte 0x68756E74
	.4byte 0x2E626561
	.4byte 0x6D5F6469
	.4byte 0x73740062
	.4byte 0x65616D2E
	.4byte 0x72617465
	.4byte 0x00626561
	.4byte 0x6D2E7469
	.4byte 0x6D655F77
	.4byte 0x61726D5F
	.4byte 0x75700062
	.4byte 0x65616D2E
	.4byte 0x74696D65
	.4byte 0x5F666972
	.4byte 0x65006265
	.4byte 0x616D2E67
	.4byte 0x756E5F74
	.4byte 0x696C745F
	.4byte 0x6D696E00
	.4byte 0x6265616D
	.4byte 0x2E67756E
	.4byte 0x5F74696C
	.4byte 0x745F6D61
	.4byte 0x78006265
	.4byte 0x616D2E6D
	.4byte 0x61785F64
	.4byte 0x69737400
	.4byte 0x6265616D
	.4byte 0x2E656D69
	.4byte 0x745F6469
	.4byte 0x73740062
	.4byte 0x65616D2E
	.4byte 0x66782E72
	.4byte 0x61646975
	.4byte 0x73006265
	.4byte 0x616D2E66
	.4byte 0x782E6C65
	.4byte 0x6E677468
	.4byte 0x00626561
	.4byte 0x6D2E6678
	.4byte 0x2E76656C
	.4byte 0x00626561
	.4byte 0x6D2E6678
	.4byte 0x2E666164
	.4byte 0x655F6469
	.4byte 0x73740062
	.4byte 0x65616D2E
	.4byte 0x66782E6B
	.4byte 0x696C6C5F
	.4byte 0x64697374
	.4byte 0x00626561
	.4byte 0x6D2E6678
	.4byte 0x2E736166
	.4byte 0x655F6469
	.4byte 0x73740062
	.4byte 0x65616D2E
	.4byte 0x66782E68
	.4byte 0x69745F72
	.4byte 0x61646975
	.4byte 0x73006265
	.4byte 0x616D2E66
	.4byte 0x782E7261
	.4byte 0x6E645F61
	.4byte 0x6E670062
	.4byte 0x65616D2E
	.4byte 0x66782E73
	.4byte 0x6361725F
	.4byte 0x6C696665
	.4byte 0x00626561
	.4byte 0x6D2E6678
	.4byte 0x2E626F6C
	.4byte 0x745F7576
	.4byte 0x5B305D2E
	.4byte 0x78006265
	.4byte 0x616D2E66
	.4byte 0x782E626F
	.4byte 0x6C745F75
	.4byte 0x765B305D
	.4byte 0x2E790062
	.4byte 0x65616D2E
	.4byte 0x66782E62
	.4byte 0x6F6C745F
	.4byte 0x75765B31
	.4byte 0x5D2E7800
	.4byte 0x6265616D
	.4byte 0x2E66782E
	.4byte 0x626F6C74
	.4byte 0x5F75765B
	.4byte 0x315D2E79
	.4byte 0x00626561
	.4byte 0x6D2E6678
	.4byte 0x2E686974
	.4byte 0x5F696E74
	.4byte 0x65727661
	.4byte 0x6C006265
	.4byte 0x616D2E66
	.4byte 0x782E6461
	.4byte 0x6D616765
	.4byte 0x00686172
	.4byte 0x6173732E
	.4byte 0x73616665
	.4byte 0x74795F64
	.4byte 0x69737400
	.4byte 0x68617261
	.4byte 0x73732E73
	.4byte 0x61666574
	.4byte 0x795F6865
	.4byte 0x69676874
	.4byte 0x00686172
	.4byte 0x6173732E
	.4byte 0x61747461
	.4byte 0x636B5F64
	.4byte 0x69737400
	.4byte 0x68617261
	.4byte 0x73732E61
	.4byte 0x74746163
	.4byte 0x6B5F6865
	.4byte 0x69676874
	.4byte 0x00686172
	.4byte 0x6173732E
	.4byte 0x7374756E
	.4byte 0x5F74696D
	.4byte 0x6500666C
	.4byte 0x616E6B2E
	.4byte 0x64757261
	.4byte 0x74696F6E
	.4byte 0x00666C61
	.4byte 0x6E6B2E61
	.4byte 0x6363656C
	.4byte 0x00666C61
	.4byte 0x6E6B2E6D
	.4byte 0x61785F76
	.4byte 0x656C0066
	.4byte 0x616C6C2E
	.4byte 0x61636365
	.4byte 0x6C006661
	.4byte 0x6C6C2E6D
	.4byte 0x61785F76
	.4byte 0x656C0066
	.4byte 0x616C6C2E
	.4byte 0x64697374
	.4byte 0x00657661
	.4byte 0x64652E64
	.4byte 0x75726174
	.4byte 0x696F6E00
	.4byte 0x65766164
	.4byte 0x652E6D6F
	.4byte 0x76655F64
	.4byte 0x656C6179
	.4byte 0x5F6D696E
	.4byte 0x00657661
	.4byte 0x64652E6D
	.4byte 0x6F76655F
	.4byte 0x64656C61
	.4byte 0x795F6D61
	.4byte 0x78006576
	.4byte 0x6164652E
	.4byte 0x61636365
	.4byte 0x6C006576
	.4byte 0x6164652E
	.4byte 0x6D61785F
	.4byte 0x76656C00
	.4byte 0x6172656E
	.4byte 0x612E6365
	.4byte 0x6E746572
	.4byte 0x00617265
	.4byte 0x6E612E61
	.4byte 0x74746163
	.4byte 0x6B2E7261
	.4byte 0x64697573
	.4byte 0x00617265
	.4byte 0x6E612E61
	.4byte 0x74746163
	.4byte 0x6B2E6865
	.4byte 0x69676874
	.4byte 0x00617265
	.4byte 0x6E612E73
	.4byte 0x61666574
	.4byte 0x792E7261
	.4byte 0x64697573
	.4byte 0x00617265
	.4byte 0x6E612E73
	.4byte 0x61666574
	.4byte 0x792E6865
	.4byte 0x69676874
	.4byte 0x00736F75
	.4byte 0x6E645B53
	.4byte 0x4F554E44
	.4byte 0x5F484F56
	.4byte 0x45525D2E
	.4byte 0x766F6C75
	.4byte 0x6D650073
	.4byte 0x6F756E64
	.4byte 0x5B534F55
	.4byte 0x4E445F48
.L_80271AA4:
	.4byte 0x4F564552
	.4byte 0x5D2E7261
	.4byte 0x6E67655F
	.4byte 0x696E6E65
	.4byte 0x7200736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F484F
	.4byte 0x5645525D
	.4byte 0x2E72616E
	.4byte 0x67655F6F
	.4byte 0x75746572
	.4byte 0x00736F75
	.4byte 0x6E645B53
	.4byte 0x4F554E44
	.4byte 0x5F484F56
	.4byte 0x45525D2E
	.4byte 0x64656C61
	.4byte 0x7900736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F484F
	.4byte 0x5645525D
	.4byte 0x2E666164
	.4byte 0x655F7469
	.4byte 0x6D650073
	.4byte 0x6F756E64
	.4byte 0x5B534F55
	.4byte 0x4E445F48
	.4byte 0x49545D2E
	.4byte 0x766F6C75
	.4byte 0x6D650073
	.4byte 0x6F756E64
.L_80271B28:
	.4byte 0x5B534F55
	.4byte 0x4E445F48
	.4byte 0x49545D2E
	.4byte 0x72616E67
	.4byte 0x655F696E
	.4byte 0x6E657200
	.4byte 0x736F756E
	.4byte 0x645B534F
	.4byte 0x554E445F
	.4byte 0x4849545D
	.4byte 0x2E72616E
	.4byte 0x67655F6F
	.4byte 0x75746572
	.4byte 0x00736F75
	.4byte 0x6E645B53
	.4byte 0x4F554E44
	.4byte 0x5F484954
	.4byte 0x5D2E6465
	.4byte 0x6C617900
	.4byte 0x736F756E
	.4byte 0x645B534F
	.4byte 0x554E445F
	.4byte 0x424F4C54
	.4byte 0x5F464952
	.4byte 0x455D2E76
	.4byte 0x6F6C756D
	.4byte 0x6500736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F424F
	.4byte 0x4C545F46
	.4byte 0x4952455D
	.4byte 0x2E72616E
	.4byte 0x67655F69
.L_80271BB0:
	.4byte 0x6E6E6572
	.4byte 0x00736F75
	.4byte 0x6E645B53
	.4byte 0x4F554E44
.L_80271BC0:
	.4byte 0x5F424F4C
	.4byte 0x545F4649
	.4byte 0x52455D2E
	.4byte 0x72616E67
	.4byte 0x655F6F75
	.4byte 0x74657200
.L_80271BD8:
	.4byte 0x736F756E
	.4byte 0x645B534F
	.4byte 0x554E445F
.L_80271BE4:
	.4byte 0x424F4C54
	.4byte 0x5F464952
	.4byte 0x455D2E64
	.4byte 0x656C6179
	.4byte 0x00736F75
	.4byte 0x6E645B53
	.4byte 0x4F554E44
	.4byte 0x5F424F4C
	.4byte 0x545F464C
	.4byte 0x595D2E76
	.4byte 0x6F6C756D
	.4byte 0x6500736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F424F
	.4byte 0x4C545F46
	.4byte 0x4C595D2E
	.4byte 0x72616E67
	.4byte 0x655F696E
	.4byte 0x6E657200
	.4byte 0x736F756E
	.4byte 0x645B534F
	.4byte 0x554E445F
	.4byte 0x424F4C54
	.4byte 0x5F464C59
	.4byte 0x5D2E7261
	.4byte 0x6E67655F
	.4byte 0x6F757465
	.4byte 0x7200736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F424F
	.4byte 0x4C545F46
	.4byte 0x4C595D2E
	.4byte 0x64656C61
	.4byte 0x7900736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F424F
	.4byte 0x4C545F46
	.4byte 0x4C595D2E
	.4byte 0x66616465
	.4byte 0x5F74696D
	.4byte 0x6500736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F424F
	.4byte 0x4C545F48
	.4byte 0x49545D2E
	.4byte 0x766F6C75
	.4byte 0x6D650073
	.4byte 0x6F756E64
	.4byte 0x5B534F55
	.4byte 0x4E445F42
	.4byte 0x4F4C545F
	.4byte 0x4849545D
	.4byte 0x2E72616E
	.4byte 0x67655F69
	.4byte 0x6E6E6572
	.4byte 0x00736F75
	.4byte 0x6E645B53
	.4byte 0x4F554E44
	.4byte 0x5F424F4C
	.4byte 0x545F4849
	.4byte 0x545D2E72
	.4byte 0x616E6765
	.4byte 0x5F6F7574
	.4byte 0x65720073
	.4byte 0x6F756E64
	.4byte 0x5B534F55
	.4byte 0x4E445F42
	.4byte 0x4F4C545F
	.4byte 0x4849545D
	.4byte 0x2E64656C
	.4byte 0x61790073
	.4byte 0x6F756E64
	.4byte 0x5B534F55
	.4byte 0x4E445F43
	.4byte 0x48415247
	.4byte 0x455D2E76
	.4byte 0x6F6C756D
	.4byte 0x6500736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F4348
	.4byte 0x41524745
	.4byte 0x5D2E7261
	.4byte 0x6E67655F
	.4byte 0x696E6E65
	.4byte 0x7200736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F4348
	.4byte 0x41524745
	.4byte 0x5D2E7261
	.4byte 0x6E67655F
	.4byte 0x6F757465
	.4byte 0x7200736F
	.4byte 0x756E645B
	.4byte 0x534F554E
	.4byte 0x445F4348
	.4byte 0x41524745
	.4byte 0x5D2E6465
	.4byte 0x6C617900
	.4byte 0x506C616E
	.4byte 0x6B746F6E
	.4byte 0x27732042
	.4byte 0x65616D00
	.4byte 0x706C616E
	.4byte 0x6B746F6E
	.4byte 0x5F6C6173
	.4byte 0x65725F62
	.4byte 0x6F6C7400
	.4byte 0x506C616E
	.4byte 0x6B746F6E
	.4byte 0x27732042
	.4byte 0x65616D20
	.4byte 0x52696E67
	.4byte 0x73006275
	.4byte 0x62626C65
	.4byte 0x00506C61
	.4byte 0x6E6B746F
	.4byte 0x6E277320
	.4byte 0x4265616D
	.4byte 0x20476C6F
	.4byte 0x77006678
	.4byte 0x5F666972
	.4byte 0x65776F72
	.4byte 0x6B005041
	.4byte 0x52454D49
	.4byte 0x545F4250
	.4byte 0x4C414E4B
	.4byte 0x5F535041
	.4byte 0x524B5300
	.4byte 0x50415245
	.4byte 0x4D49545F
	.4byte 0x42504C41
	.4byte 0x4E4B5F50
	.4byte 0x4C41534D
	.4byte 0x41005041
.L_80271E14:
	.4byte 0x52454D49
	.4byte 0x545F4250
	.4byte 0x4C414E4B
	.4byte 0x5F434841
	.4byte 0x52474500
.endobj "@stringBase0"

# 0x8029AF30 - 0x8029B448
.data
.balign 8

# @unnamed@zNPCTypeBossPlankton_cpp@::beam_launch_effect
.obj "beam_launch_effect__34@unnamed@zNPCTypeBossPlankton_cpp@", local
.sym ...data.0, local
	.4byte 0x00000003
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000003
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "beam_launch_effect__34@unnamed@zNPCTypeBossPlankton_cpp@"

# @unnamed@zNPCTypeBossPlankton_cpp@::beam_head_effect
.obj "beam_head_effect__34@unnamed@zNPCTypeBossPlankton_cpp@", local
	.4byte 0x00000002
	.4byte 0x00000001
.L_8029AF68:
	.4byte 0x40400000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "beam_head_effect__34@unnamed@zNPCTypeBossPlankton_cpp@"

# @unnamed@zNPCTypeBossPlankton_cpp@::beam_impact_effect
.obj "beam_impact_effect__34@unnamed@zNPCTypeBossPlankton_cpp@", local
	.4byte 0x00000000
	.4byte 0x00000003
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000003
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000003
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "beam_impact_effect__34@unnamed@zNPCTypeBossPlankton_cpp@"

# @unnamed@zNPCTypeBossPlankton_cpp@::beam_death_effect
.obj "beam_death_effect__34@unnamed@zNPCTypeBossPlankton_cpp@", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "beam_death_effect__34@unnamed@zNPCTypeBossPlankton_cpp@"

# @unnamed@zNPCTypeBossPlankton_cpp@::beam_kill_effect
.obj "beam_kill_effect__34@unnamed@zNPCTypeBossPlankton_cpp@", local
	.4byte 0x00000003
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "beam_kill_effect__34@unnamed@zNPCTypeBossPlankton_cpp@"

.obj "@2021", local
	.rel Damage__13zNPCBPlanktonF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3, .L_8016B868
	.rel Damage__13zNPCBPlanktonF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3, .L_8016B834
	.rel Damage__13zNPCBPlanktonF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3, .L_8016B834
	.rel Damage__13zNPCBPlanktonF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3, .L_8016B834
	.rel Damage__13zNPCBPlanktonF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3, .L_8016B868
	.rel Damage__13zNPCBPlanktonF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3, .L_8016B868
	.rel Damage__13zNPCBPlanktonF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3, .L_8016B834
	.rel Damage__13zNPCBPlanktonF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3, .L_8016B868
	.rel Damage__13zNPCBPlanktonF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3, .L_8016B834
	.rel Damage__13zNPCBPlanktonF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3, .L_8016B834
	.rel Damage__13zNPCBPlanktonF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3, .L_8016B834
	.rel Damage__13zNPCBPlanktonF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3, .L_8016B868
	.rel Damage__13zNPCBPlanktonF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3, .L_8016B834
.endobj "@2021"

.obj "@2049", local
	.rel AnimPick__13zNPCBPlanktonFi16en_NPC_GOAL_SPOTP5xGoal, .L_8016B8AC
	.rel AnimPick__13zNPCBPlanktonFi16en_NPC_GOAL_SPOTP5xGoal, .L_8016B8AC
	.rel AnimPick__13zNPCBPlanktonFi16en_NPC_GOAL_SPOTP5xGoal, .L_8016B8AC
	.rel AnimPick__13zNPCBPlanktonFi16en_NPC_GOAL_SPOTP5xGoal, .L_8016B8AC
	.rel AnimPick__13zNPCBPlanktonFi16en_NPC_GOAL_SPOTP5xGoal, .L_8016B8AC
	.rel AnimPick__13zNPCBPlanktonFi16en_NPC_GOAL_SPOTP5xGoal, .L_8016B8AC
	.rel AnimPick__13zNPCBPlanktonFi16en_NPC_GOAL_SPOTP5xGoal, .L_8016B8B4
	.rel AnimPick__13zNPCBPlanktonFi16en_NPC_GOAL_SPOTP5xGoal, .L_8016B8BC
	.rel AnimPick__13zNPCBPlanktonFi16en_NPC_GOAL_SPOTP5xGoal, .L_8016B8C4
	.rel AnimPick__13zNPCBPlanktonFi16en_NPC_GOAL_SPOTP5xGoal, .L_8016B8C4
	.rel AnimPick__13zNPCBPlanktonFi16en_NPC_GOAL_SPOTP5xGoal, .L_8016B8C4
	.rel AnimPick__13zNPCBPlanktonFi16en_NPC_GOAL_SPOTP5xGoal, .L_8016B8CC
	.rel AnimPick__13zNPCBPlanktonFi16en_NPC_GOAL_SPOTP5xGoal, .L_8016B8D4
	.rel AnimPick__13zNPCBPlanktonFi16en_NPC_GOAL_SPOTP5xGoal, .L_8016B8DC
	.rel AnimPick__13zNPCBPlanktonFi16en_NPC_GOAL_SPOTP5xGoal, .L_8016B8E4
.endobj "@2049"

# zNPCGoalBPlanktonBomb::__vtable
.obj __vt__21zNPCGoalBPlanktonBomb, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__21zNPCGoalBPlanktonBombFfPv
	.4byte Exit__21zNPCGoalBPlanktonBombFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__21zNPCGoalBPlanktonBombFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
.L_8029B08C:
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__21zNPCGoalBPlanktonBomb

# zNPCGoalBPlanktonMissle::__vtable
.obj __vt__23zNPCGoalBPlanktonMissle, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__23zNPCGoalBPlanktonMissleFfPv
	.4byte Exit__23zNPCGoalBPlanktonMissleFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__23zNPCGoalBPlanktonMissleFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__23zNPCGoalBPlanktonMissle

# zNPCGoalBPlanktonWall::__vtable
.obj __vt__21zNPCGoalBPlanktonWall, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__21zNPCGoalBPlanktonWallFfPv
	.4byte Exit__21zNPCGoalBPlanktonWallFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__21zNPCGoalBPlanktonWallFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
.L_8029B0F8:
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__21zNPCGoalBPlanktonWall

# zNPCGoalBPlanktonBeam::__vtable
.obj __vt__21zNPCGoalBPlanktonBeam, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__21zNPCGoalBPlanktonBeamFfPv
	.4byte Exit__21zNPCGoalBPlanktonBeamFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__21zNPCGoalBPlanktonBeamFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__21zNPCGoalBPlanktonBeam

# zNPCGoalBPlanktonDizzy::__vtable
.obj __vt__22zNPCGoalBPlanktonDizzy, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__22zNPCGoalBPlanktonDizzyFfPv
	.4byte Exit__22zNPCGoalBPlanktonDizzyFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__22zNPCGoalBPlanktonDizzyFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__22zNPCGoalBPlanktonDizzy

# zNPCGoalBPlanktonFall::__vtable
.obj __vt__21zNPCGoalBPlanktonFall, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__21zNPCGoalBPlanktonFallFfPv
	.4byte Exit__21zNPCGoalBPlanktonFallFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__21zNPCGoalBPlanktonFallFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__21zNPCGoalBPlanktonFall

# zNPCGoalBPlanktonStun::__vtable
.obj __vt__21zNPCGoalBPlanktonStun, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__21zNPCGoalBPlanktonStunFfPv
	.4byte Exit__21zNPCGoalBPlanktonStunFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__21zNPCGoalBPlanktonStunFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__21zNPCGoalBPlanktonStun

# zNPCGoalBPlanktonMove::__vtable
.obj __vt__21zNPCGoalBPlanktonMove, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__21zNPCGoalBPlanktonMoveFfPv
	.4byte Exit__21zNPCGoalBPlanktonMoveFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
.L_8029B1E8:
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__21zNPCGoalBPlanktonMoveFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__21zNPCGoalBPlanktonMove

# zNPCGoalBPlanktonTaunt::__vtable
.obj __vt__22zNPCGoalBPlanktonTaunt, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__22zNPCGoalBPlanktonTauntFfPv
	.4byte Exit__22zNPCGoalBPlanktonTauntFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__22zNPCGoalBPlanktonTauntFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__22zNPCGoalBPlanktonTaunt

# zNPCGoalBPlanktonHunt::__vtable
.obj __vt__21zNPCGoalBPlanktonHunt, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__21zNPCGoalBPlanktonHuntFfPv
	.4byte Exit__21zNPCGoalBPlanktonHuntFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__21zNPCGoalBPlanktonHuntFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__21zNPCGoalBPlanktonHunt

# zNPCGoalBPlanktonEvade::__vtable
.obj __vt__22zNPCGoalBPlanktonEvade, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__22zNPCGoalBPlanktonEvadeFfPv
	.4byte Exit__22zNPCGoalBPlanktonEvadeFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__22zNPCGoalBPlanktonEvadeFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__22zNPCGoalBPlanktonEvade

# zNPCGoalBPlanktonFlank::__vtable
.obj __vt__22zNPCGoalBPlanktonFlank, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__22zNPCGoalBPlanktonFlankFfPv
	.4byte Exit__22zNPCGoalBPlanktonFlankFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__22zNPCGoalBPlanktonFlankFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__22zNPCGoalBPlanktonFlank

# zNPCGoalBPlanktonAmbush::__vtable
.obj __vt__23zNPCGoalBPlanktonAmbush, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__23zNPCGoalBPlanktonAmbushFfPv
	.4byte Exit__23zNPCGoalBPlanktonAmbushFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__23zNPCGoalBPlanktonAmbushFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__23zNPCGoalBPlanktonAmbush

# zNPCGoalBPlanktonAttack::__vtable
.obj __vt__23zNPCGoalBPlanktonAttack, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__23zNPCGoalBPlanktonAttackFfPv
	.4byte Exit__23zNPCGoalBPlanktonAttackFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__23zNPCGoalBPlanktonAttackFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__23zNPCGoalBPlanktonAttack

# zNPCGoalBPlanktonIdle::__vtable
.obj __vt__21zNPCGoalBPlanktonIdle, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__21zNPCGoalBPlanktonIdleFfPv
	.4byte Exit__21zNPCGoalBPlanktonIdleFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__21zNPCGoalBPlanktonIdleFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__21zNPCGoalBPlanktonIdle

# zNPCBPlankton::__vtable
.obj __vt__13zNPCBPlankton, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Init__13zNPCBPlanktonFP9xEntAsset
	.4byte PostInit__9xNPCBasicFv
	.4byte Setup__13zNPCBPlanktonFv
	.4byte PostSetup__13zNPCBPlanktonFv
	.4byte Reset__13zNPCBPlanktonFv
	.4byte Process__13zNPCBPlanktonFP6xScenef
	.4byte BUpdate__10zNPCCommonFP5xVec3
	.4byte NewTime__10zNPCCommonFP6xScenef
	.4byte Move__10zNPCCommonFP6xScenefP9xEntFrame
	.4byte SysEvent__13zNPCBPlanktonFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte Render__13zNPCBPlanktonFv
	.4byte Save__9xNPCBasicCFP7xSerial
	.4byte Load__9xNPCBasicFP7xSerial
	.4byte CollideReview__10zNPCCommonFv
	.4byte ColChkFlags__13zNPCBPlanktonCFv
	.4byte ColPenFlags__13zNPCBPlanktonCFv
	.4byte ColChkByFlags__13zNPCBPlanktonCFv
	.4byte ColPenByFlags__13zNPCBPlanktonCFv
	.4byte PhysicsFlags__13zNPCBPlanktonCFv
	.4byte Destroy__13zNPCBPlanktonFv
	.4byte NPCMessage__10zNPCCommonFP6NPCMsg
	.4byte RenderExtra__10zNPCCommonFv
	.4byte RenderExtraPostParticles__13zNPCBPlanktonFv
	.4byte ParseINI__13zNPCBPlanktonFv
	.4byte ParseLinks__13zNPCBPlanktonFv
	.4byte ParseProps__10zNPCCommonFv
	.4byte SelfSetup__13zNPCBPlanktonFv
	.4byte SelfDestroy__10zNPCCommonFv
	.4byte IsHealthy__10zNPCCommonFv
	.4byte IsAlive__13zNPCBPlanktonFv
	.4byte Damage__13zNPCBPlanktonF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3
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
	.4byte AnimPick__13zNPCBPlanktonFi16en_NPC_GOAL_SPOTP5xGoal
	.4byte GetParm__10zNPCCommonF10en_npcparmPv
	.4byte GetParmDefault__10zNPCCommonF10en_npcparmPv
	.4byte GenShadCacheRad__10zNPCCommonFv
	.4byte PRIV_GetDriverData__10zNPCCommonFv
	.4byte PRIV_GetLassoData__10zNPCCommonFv
	.4byte LassoSetup__10zNPCCommonFv
	.4byte AttackTimeLeft__8zNPCBossFv
	.4byte HoldUpDude__8zNPCBossFv
	.4byte ThanksImDone__8zNPCBossFv
.endobj __vt__13zNPCBPlankton
	.4byte 0x00000000

# 0x80329F48 - 0x8032A4A0
.bss
.balign 8

# @unnamed@zNPCTypeBossPlankton_cpp@::sound_asset_names
.obj "sound_asset_names__34@unnamed@zNPCTypeBossPlankton_cpp@", local
.sym ...bss.0, local
	.skip 0xF0
.endobj "sound_asset_names__34@unnamed@zNPCTypeBossPlankton_cpp@"

# @unnamed@zNPCTypeBossPlankton_cpp@::sound_asset_ids
.obj "sound_asset_ids__34@unnamed@zNPCTypeBossPlankton_cpp@", local
	.skip 0xF0
.endobj "sound_asset_ids__34@unnamed@zNPCTypeBossPlankton_cpp@"

# @unnamed@zNPCTypeBossPlankton_cpp@::sound_asset_names_size
.obj "sound_asset_names_size__34@unnamed@zNPCTypeBossPlankton_cpp@", local
	.skip 0x18
.endobj "sound_asset_names_size__34@unnamed@zNPCTypeBossPlankton_cpp@"

# @unnamed@zNPCTypeBossPlankton_cpp@::sound_data
.obj "sound_data__34@unnamed@zNPCTypeBossPlankton_cpp@", local
	.skip 0x60
.endobj "sound_data__34@unnamed@zNPCTypeBossPlankton_cpp@"

# @unnamed@zNPCTypeBossPlankton_cpp@::tweak
.obj "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@", local
	.skip 0x300
.endobj "tweak__34@unnamed@zNPCTypeBossPlankton_cpp@"

# 0x803CF480 - 0x803CF568
.section .sdata2, "a"
.balign 8

# @unnamed@zNPCTypeBossPlankton_cpp@::say_intro
.obj "say_intro__34@unnamed@zNPCTypeBossPlankton_cpp@", local
	.4byte 0x00000017
	.4byte 0x00000018
.endobj "say_intro__34@unnamed@zNPCTypeBossPlankton_cpp@"

# @unnamed@zNPCTypeBossPlankton_cpp@::say_hit_boss_4
.obj "say_hit_boss_4__34@unnamed@zNPCTypeBossPlankton_cpp@", local
	.4byte 0x00000046
.endobj "say_hit_boss_4__34@unnamed@zNPCTypeBossPlankton_cpp@"

.obj "@1585", local
	.4byte 0x3F800000
.endobj "@1585"

.obj "@1586", local
	.4byte 0x00000000
.endobj "@1586"

.obj "@1657", local
	.4byte 0x3E4CCCCD
.endobj "@1657"

.obj "@1658", local
	.4byte 0x3DCCCCCD
.endobj "@1658"

.obj "@1752", local
	.4byte 0x3F000000
.endobj "@1752"

.obj "@1753", local
	.4byte 0x40400000
.endobj "@1753"

.obj "@1754", local
	.4byte 0x47C35000
.endobj "@1754"

.obj "@1755", local
	.4byte 0x3727C5AC
.endobj "@1755"

.obj "@1887", local
	.4byte 0x44070000
.endobj "@1887"

.obj "@1888", local
	.4byte 0x3C8EFA35
.endobj "@1888"

.obj "@1889", local
	.4byte 0x3C23D70A
.endobj "@1889"

.obj "@1890", local
	.4byte 0x4E6E6B28
.endobj "@1890"

.obj "@1891", local
	.4byte 0x43340000
.endobj "@1891"

.obj "@1892", local
	.4byte 0xBFB0A3D7
.endobj "@1892"

.obj "@1893", local
	.4byte 0xCE6E6B28
.endobj "@1893"

.obj "@1894", local
	.4byte 0x41400000
.endobj "@1894"

.obj "@1895", local
	.4byte 0x40A00000
.endobj "@1895"

.obj "@1896", local
	.4byte 0x41200000
.endobj "@1896"

.obj "@1897", local
	.4byte 0x42C80000
.endobj "@1897"

.obj "@1898", local
	.4byte 0x41000000
.endobj "@1898"

.obj "@1899", local
	.4byte 0x41700000
.endobj "@1899"

.obj "@1900", local
	.4byte 0x41F00000
.endobj "@1900"

.obj "@1901", local
	.4byte 0x40000000
.endobj "@1901"

.obj "@1902", local
	.4byte 0x41A00000
.endobj "@1902"

.obj "@1903", local
	.4byte 0x42340000
.endobj "@1903"

.obj "@1904", local
	.4byte 0x42B40000
.endobj "@1904"

.obj "@1905", local
	.4byte 0xC1200000
.endobj "@1905"

.obj "@1906", local
	.4byte 0x40F00000
.endobj "@1906"

.obj "@1907", local
	.4byte 0x40C00000
.endobj "@1907"

.obj "@1908", local
	.4byte 0xC2A00000
.endobj "@1908"

.obj "@1909", local
	.4byte 0xC3340000
.endobj "@1909"

.obj "@1910", local
	.4byte 0x41C80000
.endobj "@1910"

.obj "@1911", local
	.4byte 0x3F333333
.endobj "@1911"

.obj "@1912", local
	.4byte 0x43B40000
.endobj "@1912"

.obj "@1913", local
	.4byte 0xC0800000
.endobj "@1913"

.obj "@1914", local
	.4byte 0xC2C80000
.endobj "@1914"

.obj "@1915", local
	.4byte 0x40800000
.endobj "@1915"

.obj "@1916", local
	.4byte 0x42480000
.endobj "@1916"

.obj "@1917", local
	.4byte 0x3FC00000
.endobj "@1917"

.obj "@1918", local
	.4byte 0x41600000
.endobj "@1918"

.obj "@1919", local
	.4byte 0x41300000
.endobj "@1919"

.obj "@2165", local
	.4byte 0x40490FDB
.endobj "@2165"

.obj "@2166", local
	.4byte 0xB727C5AC
.endobj "@2166"

.obj "@2172", local
	.4byte 0x40C90FDB
.endobj "@2172"

.obj "@2200", local
	.4byte 0xC0490FDB
.endobj "@2200"

.obj "@2223", local
	.4byte 0x3A83126F
.endobj "@2223"

.obj "@2450", local
	.4byte 0x3E800000
.endobj "@2450"

.obj "@2482", local
	.4byte 0xBF800000
.endobj "@2482"

.obj "@2516", local
	.4byte 0x7E967699
.endobj "@2516"

.obj "@2856", local
	.4byte 0x3F490FDB
.endobj "@2856"

.obj "@2941", local
	.4byte 0x3FC90FDB
.endobj "@2941"

.obj "@2987", local
	.4byte 0x38D1B717
.endobj "@2987"
	.4byte 0x00000000

.obj "@3215", local
	.4byte 0x43300000
	.4byte 0x80000000
.endobj "@3215"

# 0x803D0938 - 0x803D09A8
.section .sbss2, "a", @nobits
.balign 8

.obj "@821", local
	.skip 0x8
.endobj "@821"

.obj "@2112", local
	.skip 0x8
.endobj "@2112"

.obj "@2113", local
	.skip 0x8
.endobj "@2113"

.obj "@2114", local
	.skip 0x8
.endobj "@2114"

.obj "@2118", local
	.skip 0x8
.endobj "@2118"

.obj "@2119", local
	.skip 0x8
.endobj "@2119"

.obj "@2124", local
	.skip 0x8
.endobj "@2124"

.obj "@2188", local
	.skip 0x8
.endobj "@2188"

.obj "@2409", local
	.skip 0x8
.endobj "@2409"

.obj "@2410", local
	.skip 0x8
.endobj "@2410"

.obj "@2411", local
	.skip 0x8
.endobj "@2411"

.obj "@2488", local
	.skip 0x8
.endobj "@2488"

.obj "@2489", local
	.skip 0x8
.endobj "@2489"

.obj "@2564", local
	.skip 0x8
.endobj "@2564"
