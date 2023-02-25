.include "macros.inc"
.file "zEntPlayerOOBState.cpp"

# 0x8011A9F0 - 0x8011D4C0
.text
.balign 4

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::set_camera(bool)
.fn "set_camera__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@Fb", local
/* 8011A9F0 00117AD0  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8011A9F4 00117AD4  7C 08 02 A6 */	mflr r0
/* 8011A9F8 00117AD8  90 01 00 64 */	stw r0, 0x64(r1)
/* 8011A9FC 00117ADC  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8011AA00 00117AE0  F3 E1 00 58 */	psq_st f31, 0x58(r1), 0, qr0
/* 8011AA04 00117AE4  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 8011AA08 00117AE8  F3 C1 00 48 */	psq_st f30, 0x48(r1), 0, qr0
/* 8011AA0C 00117AEC  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8011AA10 00117AF0  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8011AA14 00117AF4  3C C0 80 3C */	lis r6, globals@ha
/* 8011AA18 00117AF8  3C 80 80 39 */	lis r4, g_I3@ha
/* 8011AA1C 00117AFC  38 06 05 58 */	addi r0, r6, globals@l
/* 8011AA20 00117B00  3C A0 80 31 */	lis r5, "shared_target__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011AA24 00117B04  7C 7E 1B 78 */	mr r30, r3
/* 8011AA28 00117B08  38 84 C2 E0 */	addi r4, r4, g_I3@l
/* 8011AA2C 00117B0C  38 65 45 AC */	addi r3, r5, "shared_target__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011AA30 00117B10  7C 1F 03 78 */	mr r31, r0
/* 8011AA34 00117B14  4B EF 0B 39 */	bl __as__7xMat4x3FRC7xMat4x3
/* 8011AA38 00117B18  3C 60 80 3C */	lis r3, globals@ha
/* 8011AA3C 00117B1C  3C A0 80 31 */	lis r5, "shared_target__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011AA40 00117B20  38 63 05 58 */	addi r3, r3, globals@l
/* 8011AA44 00117B24  80 83 07 04 */	lwz r4, 0x704(r3)
/* 8011AA48 00117B28  38 65 45 AC */	addi r3, r5, "shared_target__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011AA4C 00117B2C  38 63 00 30 */	addi r3, r3, 0x30
/* 8011AA50 00117B30  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8011AA54 00117B34  38 84 00 30 */	addi r4, r4, 0x30
/* 8011AA58 00117B38  4B EF 08 0D */	bl __as__5xVec3FRC5xVec3
/* 8011AA5C 00117B3C  3C 80 80 31 */	lis r4, "shared_target__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011AA60 00117B40  3C 60 80 3C */	lis r3, globals@ha
/* 8011AA64 00117B44  38 04 45 AC */	addi r0, r4, "shared_target__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011AA68 00117B48  38 63 05 58 */	addi r3, r3, globals@l
/* 8011AA6C 00117B4C  90 03 01 14 */	stw r0, 0x114(r3)
/* 8011AA70 00117B50  90 03 01 10 */	stw r0, 0x110(r3)
/* 8011AA74 00117B54  4B F3 76 B5 */	bl zCameraDisableInput__Fv
/* 8011AA78 00117B58  38 60 00 00 */	li r3, 0x0
/* 8011AA7C 00117B5C  4B F3 76 15 */	bl zCameraSetBbounce__Fi
/* 8011AA80 00117B60  38 60 00 00 */	li r3, 0x0
/* 8011AA84 00117B64  4B F3 76 15 */	bl zCameraSetLongbounce__Fi
/* 8011AA88 00117B68  38 60 00 00 */	li r3, 0x0
/* 8011AA8C 00117B6C  4B F3 76 3D */	bl zCameraSetHighbounce__Fi
/* 8011AA90 00117B70  38 60 00 10 */	li r3, 0x10
/* 8011AA94 00117B74  4B F3 76 6D */	bl zCameraDisableTracking__F17camera_owner_enum
/* 8011AA98 00117B78  38 60 00 00 */	li r3, 0x0
/* 8011AA9C 00117B7C  38 80 00 06 */	li r4, 0x6
/* 8011AAA0 00117B80  4B EF 2A F1 */	bl xCameraDoCollisions__Fii
/* 8011AAA4 00117B84  57 C0 06 3F */	clrlwi. r0, r30, 24
/* 8011AAA8 00117B88  41 82 00 0C */	beq .L_8011AAB4
/* 8011AAAC 00117B8C  C3 E2 9F A8 */	lfs f31, "@1033"@sda21(r2)
/* 8011AAB0 00117B90  48 00 00 08 */	b .L_8011AAB8
.L_8011AAB4:
/* 8011AAB4 00117B94  C3 E2 9F AC */	lfs f31, "@1034"@sda21(r2)
.L_8011AAB8:
/* 8011AAB8 00117B98  57 C0 06 3F */	clrlwi. r0, r30, 24
/* 8011AABC 00117B9C  41 82 00 0C */	beq .L_8011AAC8
/* 8011AAC0 00117BA0  C3 C2 9F A8 */	lfs f30, "@1033"@sda21(r2)
/* 8011AAC4 00117BA4  48 00 00 08 */	b .L_8011AACC
.L_8011AAC8:
/* 8011AAC8 00117BA8  C3 C2 9F B0 */	lfs f30, "@1035"@sda21(r2)
.L_8011AACC:
/* 8011AACC 00117BAC  C0 3F 00 34 */	lfs f1, 0x34(r31)
/* 8011AAD0 00117BB0  C0 5F 00 3C */	lfs f2, 0x3c(r31)
/* 8011AAD4 00117BB4  4B EE B5 9D */	bl xatan2__Fff
/* 8011AAD8 00117BB8  C0 02 9F B4 */	lfs f0, "@1036"@sda21(r2)
/* 8011AADC 00117BBC  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011AAE0 00117BC0  38 63 45 30 */	addi r3, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011AAE4 00117BC4  FC 80 F8 90 */	fmr f4, f31
/* 8011AAE8 00117BC8  EC 60 08 2A */	fadds f3, f0, f1
/* 8011AAEC 00117BCC  C0 23 00 08 */	lfs f1, 0x8(r3)
/* 8011AAF0 00117BD0  C0 43 00 0C */	lfs f2, 0xc(r3)
/* 8011AAF4 00117BD4  FC A0 F0 90 */	fmr f5, f30
/* 8011AAF8 00117BD8  FC C0 F0 90 */	fmr f6, f30
/* 8011AAFC 00117BDC  D0 7F 01 80 */	stfs f3, 0x180(r31)
/* 8011AB00 00117BE0  7F E3 FB 78 */	mr r3, r31
/* 8011AB04 00117BE4  38 80 00 28 */	li r4, 0x28
/* 8011AB08 00117BE8  4B EF 2A C9 */	bl xCameraMove__FP7xCameraUiffffff
/* 8011AB0C 00117BEC  80 9F 01 10 */	lwz r4, 0x110(r31)
/* 8011AB10 00117BF0  38 61 00 08 */	addi r3, r1, 0x8
/* 8011AB14 00117BF4  38 BF 00 44 */	addi r5, r31, 0x44
/* 8011AB18 00117BF8  38 84 00 30 */	addi r4, r4, 0x30
/* 8011AB1C 00117BFC  4B EF 06 B1 */	bl __mi__5xVec3CFRC5xVec3
/* 8011AB20 00117C00  38 61 00 14 */	addi r3, r1, 0x14
/* 8011AB24 00117C04  38 81 00 08 */	addi r4, r1, 0x8
/* 8011AB28 00117C08  4B FF B7 85 */	bl normal__5xVec3CFv
/* 8011AB2C 00117C0C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8011AB30 00117C10  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8011AB34 00117C14  90 61 00 20 */	stw r3, 0x20(r1)
/* 8011AB38 00117C18  80 61 00 18 */	lwz r3, 0x18(r1)
/* 8011AB3C 00117C1C  90 01 00 28 */	stw r0, 0x28(r1)
/* 8011AB40 00117C20  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 8011AB44 00117C24  90 61 00 24 */	stw r3, 0x24(r1)
/* 8011AB48 00117C28  C0 41 00 28 */	lfs f2, 0x28(r1)
/* 8011AB4C 00117C2C  4B EE B5 25 */	bl xatan2__Fff
/* 8011AB50 00117C30  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011AB54 00117C34  FC 80 F8 90 */	fmr f4, f31
/* 8011AB58 00117C38  38 63 45 30 */	addi r3, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011AB5C 00117C3C  FC A0 F0 90 */	fmr f5, f30
/* 8011AB60 00117C40  FC C0 F0 90 */	fmr f6, f30
/* 8011AB64 00117C44  C0 43 00 10 */	lfs f2, 0x10(r3)
/* 8011AB68 00117C48  C0 62 9F A8 */	lfs f3, "@1033"@sda21(r2)
/* 8011AB6C 00117C4C  7F E3 FB 78 */	mr r3, r31
/* 8011AB70 00117C50  38 80 00 00 */	li r4, 0x0
/* 8011AB74 00117C54  4B EF 2E 79 */	bl xCameraLookYPR__FP7xCameraUiffffff
/* 8011AB78 00117C58  48 06 43 B9 */	bl zCameraTweakGlobal_Init__Fv
/* 8011AB7C 00117C5C  E3 E1 00 58 */	psq_l f31, 0x58(r1), 0, qr0
/* 8011AB80 00117C60  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8011AB84 00117C64  E3 C1 00 48 */	psq_l f30, 0x48(r1), 0, qr0
/* 8011AB88 00117C68  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 8011AB8C 00117C6C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8011AB90 00117C70  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8011AB94 00117C74  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8011AB98 00117C78  7C 08 03 A6 */	mtlr r0
/* 8011AB9C 00117C7C  38 21 00 60 */	addi r1, r1, 0x60
/* 8011ABA0 00117C80  4E 80 00 20 */	blr
.endfn "set_camera__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@Fb"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::reset_camera()
.fn "reset_camera__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@Fv", local
/* 8011ABA4 00117C84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011ABA8 00117C88  7C 08 02 A6 */	mflr r0
/* 8011ABAC 00117C8C  3C 60 80 3C */	lis r3, globals@ha
/* 8011ABB0 00117C90  38 63 05 58 */	addi r3, r3, globals@l
/* 8011ABB4 00117C94  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011ABB8 00117C98  38 63 06 E0 */	addi r3, r3, 0x6e0
/* 8011ABBC 00117C9C  4B F3 B8 D5 */	bl xEntGetFrame__FPC4xEnt
/* 8011ABC0 00117CA0  3C 80 80 3C */	lis r4, globals@ha
/* 8011ABC4 00117CA4  38 84 05 58 */	addi r4, r4, globals@l
/* 8011ABC8 00117CA8  90 64 01 14 */	stw r3, 0x114(r4)
/* 8011ABCC 00117CAC  90 64 01 10 */	stw r3, 0x110(r4)
/* 8011ABD0 00117CB0  4B F3 75 65 */	bl zCameraEnableInput__Fv
/* 8011ABD4 00117CB4  38 60 00 10 */	li r3, 0x10
/* 8011ABD8 00117CB8  4B F3 75 39 */	bl zCameraEnableTracking__F17camera_owner_enum
/* 8011ABDC 00117CBC  38 60 00 01 */	li r3, 0x1
/* 8011ABE0 00117CC0  38 80 00 06 */	li r4, 0x6
/* 8011ABE4 00117CC4  4B EF 29 AD */	bl xCameraDoCollisions__Fii
/* 8011ABE8 00117CC8  48 06 43 49 */	bl zCameraTweakGlobal_Init__Fv
/* 8011ABEC 00117CCC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011ABF0 00117CD0  7C 08 03 A6 */	mtlr r0
/* 8011ABF4 00117CD4  38 21 00 10 */	addi r1, r1, 0x10
/* 8011ABF8 00117CD8  4E 80 00 20 */	blr
.endfn "reset_camera__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@Fv"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::render_model(xModelInstance&, const xVec3&, const xVec3&, const xVec3&)
.fn "render_model__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@FR14xModelInstanceRC5xVec3RC5xVec3RC5xVec3", local
/* 8011ABFC 00117CDC  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 8011AC00 00117CE0  7C 08 02 A6 */	mflr r0
/* 8011AC04 00117CE4  C0 64 00 08 */	lfs f3, 0x8(r4)
/* 8011AC08 00117CE8  3C E0 80 27 */	lis r7, ...rodata.0@ha
/* 8011AC0C 00117CEC  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 8011AC10 00117CF0  FC 40 18 50 */	fneg f2, f3
/* 8011AC14 00117CF4  C0 A4 00 00 */	lfs f5, 0x0(r4)
/* 8011AC18 00117CF8  93 E1 00 DC */	stw r31, 0xdc(r1)
/* 8011AC1C 00117CFC  C0 84 00 04 */	lfs f4, 0x4(r4)
/* 8011AC20 00117D00  93 C1 00 D8 */	stw r30, 0xd8(r1)
/* 8011AC24 00117D04  3B C7 B2 68 */	addi r30, r7, ...rodata.0@l
/* 8011AC28 00117D08  C0 25 00 00 */	lfs f1, 0x0(r5)
/* 8011AC2C 00117D0C  93 A1 00 D4 */	stw r29, 0xd4(r1)
/* 8011AC30 00117D10  7C DD 33 78 */	mr r29, r6
/* 8011AC34 00117D14  C0 05 00 04 */	lfs f0, 0x4(r5)
/* 8011AC38 00117D18  93 81 00 D0 */	stw r28, 0xd0(r1)
/* 8011AC3C 00117D1C  7C 7C 1B 78 */	mr r28, r3
/* 8011AC40 00117D20  38 61 00 A0 */	addi r3, r1, 0xa0
/* 8011AC44 00117D24  83 FE 01 78 */	lwz r31, 0x178(r30)
/* 8011AC48 00117D28  81 9E 01 7C */	lwz r12, 0x17c(r30)
/* 8011AC4C 00117D2C  80 1E 01 9C */	lwz r0, 0x19c(r30)
/* 8011AC50 00117D30  81 7E 01 80 */	lwz r11, 0x180(r30)
/* 8011AC54 00117D34  90 01 00 10 */	stw r0, 0x10(r1)
/* 8011AC58 00117D38  81 5E 01 84 */	lwz r10, 0x184(r30)
/* 8011AC5C 00117D3C  81 3E 01 88 */	lwz r9, 0x188(r30)
/* 8011AC60 00117D40  81 1E 01 8C */	lwz r8, 0x18c(r30)
/* 8011AC64 00117D44  80 FE 01 90 */	lwz r7, 0x190(r30)
/* 8011AC68 00117D48  80 DE 01 94 */	lwz r6, 0x194(r30)
/* 8011AC6C 00117D4C  80 1E 01 98 */	lwz r0, 0x198(r30)
/* 8011AC70 00117D50  93 E1 00 20 */	stw r31, 0x20(r1)
/* 8011AC74 00117D54  91 81 00 24 */	stw r12, 0x24(r1)
/* 8011AC78 00117D58  91 61 00 28 */	stw r11, 0x28(r1)
/* 8011AC7C 00117D5C  91 41 00 2C */	stw r10, 0x2c(r1)
/* 8011AC80 00117D60  D0 A1 00 20 */	stfs f5, 0x20(r1)
/* 8011AC84 00117D64  D0 81 00 24 */	stfs f4, 0x24(r1)
/* 8011AC88 00117D68  91 21 00 14 */	stw r9, 0x14(r1)
/* 8011AC8C 00117D6C  91 01 00 18 */	stw r8, 0x18(r1)
/* 8011AC90 00117D70  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 8011AC94 00117D74  90 C1 00 08 */	stw r6, 0x8(r1)
/* 8011AC98 00117D78  90 01 00 0C */	stw r0, 0xc(r1)
/* 8011AC9C 00117D7C  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 8011ACA0 00117D80  C0 42 9F B8 */	lfs f2, "@1041"@sda21(r2)
/* 8011ACA4 00117D84  EC 62 18 2A */	fadds f3, f2, f3
/* 8011ACA8 00117D88  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8011ACAC 00117D8C  EC 40 00 F2 */	fmuls f2, f0, f3
/* 8011ACB0 00117D90  4B F1 79 7D */	bl xMat3x3ScaleC__FP7xMat3x3fff
/* 8011ACB4 00117D94  7F A4 EB 78 */	mr r4, r29
/* 8011ACB8 00117D98  38 61 00 70 */	addi r3, r1, 0x70
/* 8011ACBC 00117D9C  4B F1 74 E9 */	bl xMat3x3Euler__FP7xMat3x3PC5xVec3
/* 8011ACC0 00117DA0  38 61 00 30 */	addi r3, r1, 0x30
/* 8011ACC4 00117DA4  38 81 00 70 */	addi r4, r1, 0x70
/* 8011ACC8 00117DA8  38 A1 00 A0 */	addi r5, r1, 0xa0
/* 8011ACCC 00117DAC  4B F1 7B E9 */	bl xMat3x3Mul__FP7xMat3x3PC7xMat3x3PC7xMat3x3
/* 8011ACD0 00117DB0  C0 22 9F A8 */	lfs f1, "@1033"@sda21(r2)
/* 8011ACD4 00117DB4  38 61 00 60 */	addi r3, r1, 0x60
/* 8011ACD8 00117DB8  4B F0 1B A1 */	bl __as__5xVec3Ff
/* 8011ACDC 00117DBC  38 00 00 00 */	li r0, 0x0
/* 8011ACE0 00117DC0  7F 83 E3 78 */	mr r3, r28
/* 8011ACE4 00117DC4  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8011ACE8 00117DC8  38 81 00 30 */	addi r4, r1, 0x30
/* 8011ACEC 00117DCC  4B F0 0C 21 */	bl xModelSetFrame__FP14xModelInstancePC7xMat4x3
/* 8011ACF0 00117DD0  7F 83 E3 78 */	mr r3, r28
/* 8011ACF4 00117DD4  38 81 00 20 */	addi r4, r1, 0x20
/* 8011ACF8 00117DD8  38 A1 00 14 */	addi r5, r1, 0x14
/* 8011ACFC 00117DDC  38 C1 00 08 */	addi r6, r1, 0x8
/* 8011AD00 00117DE0  4B F1 9D 21 */	bl "xModelRender2D__FRC14xModelInstanceRC13basic_rect<f>RC5xVec3RC5xVec3"
/* 8011AD04 00117DE4  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 8011AD08 00117DE8  83 E1 00 DC */	lwz r31, 0xdc(r1)
/* 8011AD0C 00117DEC  83 C1 00 D8 */	lwz r30, 0xd8(r1)
/* 8011AD10 00117DF0  83 A1 00 D4 */	lwz r29, 0xd4(r1)
/* 8011AD14 00117DF4  83 81 00 D0 */	lwz r28, 0xd0(r1)
/* 8011AD18 00117DF8  7C 08 03 A6 */	mtlr r0
/* 8011AD1C 00117DFC  38 21 00 E0 */	addi r1, r1, 0xe0
/* 8011AD20 00117E00  4E 80 00 20 */	blr
.endfn "render_model__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@FR14xModelInstanceRC5xVec3RC5xVec3RC5xVec3"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::move_up(xVec3&, float)
.fn "move_up__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@FR5xVec3f", local
/* 8011AD24 00117E04  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8011AD28 00117E08  7C 08 02 A6 */	mflr r0
/* 8011AD2C 00117E0C  90 01 00 54 */	stw r0, 0x54(r1)
/* 8011AD30 00117E10  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8011AD34 00117E14  F3 E1 00 48 */	psq_st f31, 0x48(r1), 0, qr0
/* 8011AD38 00117E18  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8011AD3C 00117E1C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8011AD40 00117E20  3C 80 80 3C */	lis r4, globals@ha
/* 8011AD44 00117E24  7C 7E 1B 78 */	mr r30, r3
/* 8011AD48 00117E28  38 64 05 58 */	addi r3, r4, globals@l
/* 8011AD4C 00117E2C  FF E0 08 90 */	fmr f31, f1
/* 8011AD50 00117E30  3B E3 00 14 */	addi r31, r3, 0x14
/* 8011AD54 00117E34  7F C5 F3 78 */	mr r5, r30
/* 8011AD58 00117E38  7F E4 FB 78 */	mr r4, r31
/* 8011AD5C 00117E3C  38 61 00 20 */	addi r3, r1, 0x20
/* 8011AD60 00117E40  4B EF 02 DD */	bl xMat4x3Tolocal__FP5xVec3PC7xMat4x3PC5xVec3
/* 8011AD64 00117E44  FC 20 F8 90 */	fmr f1, f31
/* 8011AD68 00117E48  38 61 00 08 */	addi r3, r1, 0x8
/* 8011AD6C 00117E4C  38 9F 00 10 */	addi r4, r31, 0x10
/* 8011AD70 00117E50  4B EF 03 B1 */	bl __ml__5xVec3CFf
/* 8011AD74 00117E54  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 8011AD78 00117E58  38 61 00 14 */	addi r3, r1, 0x14
/* 8011AD7C 00117E5C  38 81 00 08 */	addi r4, r1, 0x8
/* 8011AD80 00117E60  4B EF 03 A1 */	bl __ml__5xVec3CFf
/* 8011AD84 00117E64  7F C3 F3 78 */	mr r3, r30
/* 8011AD88 00117E68  38 81 00 14 */	addi r4, r1, 0x14
/* 8011AD8C 00117E6C  4B EF A6 B9 */	bl __apl__5xVec3FRC5xVec3
/* 8011AD90 00117E70  E3 E1 00 48 */	psq_l f31, 0x48(r1), 0, qr0
/* 8011AD94 00117E74  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8011AD98 00117E78  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8011AD9C 00117E7C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8011ADA0 00117E80  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8011ADA4 00117E84  7C 08 03 A6 */	mtlr r0
/* 8011ADA8 00117E88  38 21 00 50 */	addi r1, r1, 0x50
/* 8011ADAC 00117E8C  4E 80 00 20 */	blr
.endfn "move_up__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@FR5xVec3f"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::move_right(xVec3&, float)
.fn "move_right__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@FR5xVec3f", local
/* 8011ADB0 00117E90  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8011ADB4 00117E94  7C 08 02 A6 */	mflr r0
/* 8011ADB8 00117E98  90 01 00 54 */	stw r0, 0x54(r1)
/* 8011ADBC 00117E9C  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8011ADC0 00117EA0  F3 E1 00 48 */	psq_st f31, 0x48(r1), 0, qr0
/* 8011ADC4 00117EA4  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8011ADC8 00117EA8  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8011ADCC 00117EAC  3C 80 80 3C */	lis r4, globals@ha
/* 8011ADD0 00117EB0  7C 7E 1B 78 */	mr r30, r3
/* 8011ADD4 00117EB4  38 64 05 58 */	addi r3, r4, globals@l
/* 8011ADD8 00117EB8  FF E0 08 90 */	fmr f31, f1
/* 8011ADDC 00117EBC  3B E3 00 14 */	addi r31, r3, 0x14
/* 8011ADE0 00117EC0  7F C5 F3 78 */	mr r5, r30
/* 8011ADE4 00117EC4  7F E4 FB 78 */	mr r4, r31
/* 8011ADE8 00117EC8  38 61 00 2C */	addi r3, r1, 0x2c
/* 8011ADEC 00117ECC  4B EF 02 51 */	bl xMat4x3Tolocal__FP5xVec3PC7xMat4x3PC5xVec3
/* 8011ADF0 00117ED0  FC 20 F8 90 */	fmr f1, f31
/* 8011ADF4 00117ED4  7F E4 FB 78 */	mr r4, r31
/* 8011ADF8 00117ED8  38 61 00 08 */	addi r3, r1, 0x8
/* 8011ADFC 00117EDC  4B EF 03 25 */	bl __ml__5xVec3CFf
/* 8011AE00 00117EE0  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 8011AE04 00117EE4  38 61 00 14 */	addi r3, r1, 0x14
/* 8011AE08 00117EE8  38 81 00 08 */	addi r4, r1, 0x8
/* 8011AE0C 00117EEC  4B EF 03 15 */	bl __ml__5xVec3CFf
/* 8011AE10 00117EF0  C0 22 9F C4 */	lfs f1, "@1118"@sda21(r2)
/* 8011AE14 00117EF4  38 61 00 20 */	addi r3, r1, 0x20
/* 8011AE18 00117EF8  38 81 00 14 */	addi r4, r1, 0x14
/* 8011AE1C 00117EFC  4B EF 03 05 */	bl __ml__5xVec3CFf
/* 8011AE20 00117F00  7F C3 F3 78 */	mr r3, r30
/* 8011AE24 00117F04  38 81 00 20 */	addi r4, r1, 0x20
/* 8011AE28 00117F08  4B EF A6 1D */	bl __apl__5xVec3FRC5xVec3
/* 8011AE2C 00117F0C  E3 E1 00 48 */	psq_l f31, 0x48(r1), 0, qr0
/* 8011AE30 00117F10  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8011AE34 00117F14  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8011AE38 00117F18  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8011AE3C 00117F1C  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8011AE40 00117F20  7C 08 03 A6 */	mtlr r0
/* 8011AE44 00117F24  38 21 00 50 */	addi r1, r1, 0x50
/* 8011AE48 00117F28  4E 80 00 20 */	blr
.endfn "move_right__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@FR5xVec3f"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::update_max_out_time(const xSurface&)
.fn "update_max_out_time__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@FRC8xSurface", local
/* 8011AE4C 00117F2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011AE50 00117F30  7C 08 02 A6 */	mflr r0
/* 8011AE54 00117F34  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011AE58 00117F38  4B F9 AD BD */	bl zSurfaceGetOutOfBoundsDelay__FRC8xSurface
/* 8011AE5C 00117F3C  C0 02 9F A8 */	lfs f0, "@1033"@sda21(r2)
/* 8011AE60 00117F40  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011AE64 00117F44  40 80 00 0C */	bge .L_8011AE70
/* 8011AE68 00117F48  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011AE6C 00117F4C  C0 23 45 30 */	lfs f1, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l(r3)
.L_8011AE70:
/* 8011AE70 00117F50  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011AE74 00117F54  38 63 7E 48 */	addi r3, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011AE78 00117F58  C0 03 00 20 */	lfs f0, 0x20(r3)
/* 8011AE7C 00117F5C  C0 43 00 1C */	lfs f2, 0x1c(r3)
/* 8011AE80 00117F60  EC 00 08 28 */	fsubs f0, f0, f1
/* 8011AE84 00117F64  D0 23 00 20 */	stfs f1, 0x20(r3)
/* 8011AE88 00117F68  EC 02 00 28 */	fsubs f0, f2, f0
/* 8011AE8C 00117F6C  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 8011AE90 00117F70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011AE94 00117F74  7C 08 03 A6 */	mtlr r0
/* 8011AE98 00117F78  38 21 00 10 */	addi r1, r1, 0x10
/* 8011AE9C 00117F7C  4E 80 00 20 */	blr
.endfn "update_max_out_time__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@FRC8xSurface"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::assume_player_is_stupid()
.fn "assume_player_is_stupid__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@Fv", local
/* 8011AEA0 00117F80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011AEA4 00117F84  7C 08 02 A6 */	mflr r0
/* 8011AEA8 00117F88  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8011AEAC 00117F8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011AEB0 00117F90  38 63 B4 2C */	addi r3, r3, "@stringBase0"@l
/* 8011AEB4 00117F94  4B F3 13 61 */	bl xStrHash__FPCc
/* 8011AEB8 00117F98  4B F9 9B 85 */	bl zSceneFindObject__FUi
/* 8011AEBC 00117F9C  3C 80 80 29 */	lis r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011AEC0 00117FA0  28 03 00 00 */	cmplwi r3, 0x0
/* 8011AEC4 00117FA4  38 84 7E 48 */	addi r4, r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011AEC8 00117FA8  90 64 00 4C */	stw r3, 0x4c(r4)
/* 8011AECC 00117FAC  41 82 00 10 */	beq .L_8011AEDC
/* 8011AED0 00117FB0  88 03 00 04 */	lbz r0, 0x4(r3)
/* 8011AED4 00117FB4  28 00 00 34 */	cmplwi r0, 0x34
/* 8011AED8 00117FB8  41 82 00 0C */	beq .L_8011AEE4
.L_8011AEDC:
/* 8011AEDC 00117FBC  38 60 00 00 */	li r3, 0x0
/* 8011AEE0 00117FC0  48 00 00 9C */	b .L_8011AF7C
.L_8011AEE4:
/* 8011AEE4 00117FC4  3C C0 80 3C */	lis r6, globals@ha
/* 8011AEE8 00117FC8  3C 60 80 29 */	lis r3, "idiot_levels__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011AEEC 00117FCC  38 C6 05 58 */	addi r6, r6, globals@l
/* 8011AEF0 00117FD0  38 80 00 01 */	li r4, 0x1
/* 8011AEF4 00117FD4  38 A3 7E B8 */	addi r5, r3, "idiot_levels__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011AEF8 00117FD8  80 C6 1F C0 */	lwz r6, 0x1fc0(r6)
/* 8011AEFC 00117FDC  88 65 00 00 */	lbz r3, 0x0(r5)
/* 8011AF00 00117FE0  38 00 00 05 */	li r0, 0x5
/* 8011AF04 00117FE4  80 C6 00 00 */	lwz r6, 0x0(r6)
/* 8011AF08 00117FE8  38 E5 00 08 */	addi r7, r5, 0x8
/* 8011AF0C 00117FEC  7C 63 00 34 */	cntlzw r3, r3
/* 8011AF10 00117FF0  39 00 00 01 */	li r8, 0x1
/* 8011AF14 00117FF4  54 63 D9 7E */	srwi r3, r3, 5
/* 8011AF18 00117FF8  98 85 00 00 */	stb r4, 0x0(r5)
/* 8011AF1C 00117FFC  7C 09 03 A6 */	mtctr r0
.L_8011AF20:
/* 8011AF20 00118000  80 07 00 04 */	lwz r0, 0x4(r7)
/* 8011AF24 00118004  7C 06 00 40 */	cmplw r6, r0
/* 8011AF28 00118008  40 82 00 48 */	bne .L_8011AF70
/* 8011AF2C 0011800C  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8011AF30 00118010  38 A0 00 00 */	li r5, 0x0
/* 8011AF34 00118014  40 82 00 1C */	bne .L_8011AF50
/* 8011AF38 00118018  3C 60 80 29 */	lis r3, "idiot_levels__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011AF3C 0011801C  55 00 18 38 */	slwi r0, r8, 3
/* 8011AF40 00118020  38 63 7E B8 */	addi r3, r3, "idiot_levels__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011AF44 00118024  7C 03 00 AE */	lbzx r0, r3, r0
/* 8011AF48 00118028  28 00 00 00 */	cmplwi r0, 0x0
/* 8011AF4C 0011802C  40 82 00 08 */	bne .L_8011AF54
.L_8011AF50:
/* 8011AF50 00118030  38 A0 00 01 */	li r5, 0x1
.L_8011AF54:
/* 8011AF54 00118034  3C 60 80 29 */	lis r3, "idiot_levels__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011AF58 00118038  55 00 18 38 */	slwi r0, r8, 3
/* 8011AF5C 0011803C  38 63 7E B8 */	addi r3, r3, "idiot_levels__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011AF60 00118040  38 80 00 01 */	li r4, 0x1
/* 8011AF64 00118044  7C 83 01 AE */	stbx r4, r3, r0
/* 8011AF68 00118048  7C A3 2B 78 */	mr r3, r5
/* 8011AF6C 0011804C  48 00 00 10 */	b .L_8011AF7C
.L_8011AF70:
/* 8011AF70 00118050  38 E7 00 08 */	addi r7, r7, 0x8
/* 8011AF74 00118054  39 08 00 01 */	addi r8, r8, 0x1
/* 8011AF78 00118058  42 00 FF A8 */	bdnz .L_8011AF20
.L_8011AF7C:
/* 8011AF7C 0011805C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011AF80 00118060  7C 08 03 A6 */	mtlr r0
/* 8011AF84 00118064  38 21 00 10 */	addi r1, r1, 0x10
/* 8011AF88 00118068  4E 80 00 20 */	blr
.endfn "assume_player_is_stupid__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@Fv"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::move_hand(float)
.fn "move_hand__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@Ff", local
/* 8011AF8C 0011806C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011AF90 00118070  7C 08 02 A6 */	mflr r0
/* 8011AF94 00118074  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011AF98 00118078  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011AF9C 0011807C  38 83 7E 48 */	addi r4, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011AFA0 00118080  38 64 00 34 */	addi r3, r4, 0x34
/* 8011AFA4 00118084  C0 02 9F BC */	lfs f0, "@1048"@sda21(r2)
/* 8011AFA8 00118088  C0 84 00 48 */	lfs f4, 0x48(r4)
/* 8011AFAC 0011808C  C0 44 00 44 */	lfs f2, 0x44(r4)
/* 8011AFB0 00118090  EC 60 01 32 */	fmuls f3, f0, f4
/* 8011AFB4 00118094  EC 04 10 7A */	fmadds f0, f4, f1, f2
/* 8011AFB8 00118098  EC 42 00 72 */	fmuls f2, f2, f1
/* 8011AFBC 0011809C  EC 63 00 72 */	fmuls f3, f3, f1
/* 8011AFC0 001180A0  D0 04 00 44 */	stfs f0, 0x44(r4)
/* 8011AFC4 001180A4  EC 21 10 FA */	fmadds f1, f1, f3, f2
/* 8011AFC8 001180A8  4B F4 50 FD */	bl __ml__5xVec2CFf
/* 8011AFCC 001180AC  3C A0 80 29 */	lis r5, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011AFD0 001180B0  90 81 00 0C */	stw r4, 0xc(r1)
/* 8011AFD4 001180B4  38 A5 7E 48 */	addi r5, r5, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011AFD8 001180B8  38 81 00 08 */	addi r4, r1, 0x8
/* 8011AFDC 001180BC  90 61 00 08 */	stw r3, 0x8(r1)
/* 8011AFE0 001180C0  38 65 00 2C */	addi r3, r5, 0x2c
/* 8011AFE4 001180C4  4B F4 50 BD */	bl __apl__5xVec2FRC5xVec2
/* 8011AFE8 001180C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011AFEC 001180CC  7C 08 03 A6 */	mtlr r0
/* 8011AFF0 001180D0  38 21 00 10 */	addi r1, r1, 0x10
/* 8011AFF4 001180D4  4E 80 00 20 */	blr
.endfn "move_hand__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@Ff"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::render_fade()
.fn "render_fade__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@Fv", local
/* 8011AFF8 001180D8  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 8011AFFC 001180DC  7C 08 02 A6 */	mflr r0
/* 8011B000 001180E0  90 01 00 94 */	stw r0, 0x94(r1)
/* 8011B004 001180E4  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 8011B008 001180E8  F3 E1 00 88 */	psq_st f31, 0x88(r1), 0, qr0
/* 8011B00C 001180EC  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B010 001180F0  80 02 BF 50 */	lwz r0, "@1469"@sda21(r2)
/* 8011B014 001180F4  38 63 7E 48 */	addi r3, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B018 001180F8  C0 22 9F B8 */	lfs f1, "@1041"@sda21(r2)
/* 8011B01C 001180FC  C0 03 00 3C */	lfs f0, 0x3c(r3)
/* 8011B020 00118100  38 60 00 0F */	li r3, 0xf
/* 8011B024 00118104  C0 42 9F C8 */	lfs f2, "@1475"@sda21(r2)
/* 8011B028 00118108  EC 21 00 28 */	fsubs f1, f1, f0
/* 8011B02C 0011810C  C0 02 9F BC */	lfs f0, "@1048"@sda21(r2)
/* 8011B030 00118110  90 01 00 0C */	stw r0, 0xc(r1)
/* 8011B034 00118114  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8011B038 00118118  FC 00 00 1E */	fctiwz f0, f0
/* 8011B03C 0011811C  D8 01 00 70 */	stfd f0, 0x70(r1)
/* 8011B040 00118120  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8011B044 00118124  98 01 00 0F */	stb r0, 0xf(r1)
/* 8011B048 00118128  4B F9 19 B5 */	bl zRenderState__F14_SDRenderState
/* 8011B04C 0011812C  38 60 00 01 */	li r3, 0x1
/* 8011B050 00118130  38 80 00 00 */	li r4, 0x0
/* 8011B054 00118134  48 11 47 89 */	bl RwRenderStateSet
/* 8011B058 00118138  80 6D 9F 7C */	lwz r3, RwEngineInstance@sda21(r13)
/* 8011B05C 0011813C  C0 22 9F B8 */	lfs f1, "@1041"@sda21(r2)
/* 8011B060 00118140  80 63 00 00 */	lwz r3, 0x0(r3)
/* 8011B064 00118144  C0 03 00 84 */	lfs f0, 0x84(r3)
/* 8011B068 00118148  EF E1 00 24 */	fdivs f31, f1, f0
/* 8011B06C 0011814C  48 11 47 65 */	bl RwIm2DGetFarScreenZ
/* 8011B070 00118150  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8011B074 00118154  FC A0 08 90 */	fmr f5, f1
/* 8011B078 00118158  FC C0 F8 90 */	fmr f6, f31
/* 8011B07C 0011815C  38 61 00 10 */	addi r3, r1, 0x10
/* 8011B080 00118160  90 01 00 08 */	stw r0, 0x8(r1)
/* 8011B084 00118164  38 81 00 08 */	addi r4, r1, 0x8
/* 8011B088 00118168  C0 22 9F A8 */	lfs f1, "@1033"@sda21(r2)
/* 8011B08C 0011816C  C0 62 9F CC */	lfs f3, "@1476"@sda21(r2)
/* 8011B090 00118170  FC 40 08 90 */	fmr f2, f1
/* 8011B094 00118174  C0 82 9F D0 */	lfs f4, "@1477"@sda21(r2)
/* 8011B098 00118178  48 00 00 2D */	bl "set_rect_verts__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@FP18rwGameCube2DVertexffff10iColor_tagff"
/* 8011B09C 0011817C  38 81 00 10 */	addi r4, r1, 0x10
/* 8011B0A0 00118180  38 60 00 04 */	li r3, 0x4
/* 8011B0A4 00118184  38 A0 00 04 */	li r5, 0x4
/* 8011B0A8 00118188  48 11 47 ED */	bl RwIm2DRenderPrimitive
/* 8011B0AC 0011818C  E3 E1 00 88 */	psq_l f31, 0x88(r1), 0, qr0
/* 8011B0B0 00118190  80 01 00 94 */	lwz r0, 0x94(r1)
/* 8011B0B4 00118194  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 8011B0B8 00118198  7C 08 03 A6 */	mtlr r0
/* 8011B0BC 0011819C  38 21 00 90 */	addi r1, r1, 0x90
/* 8011B0C0 001181A0  4E 80 00 20 */	blr
.endfn "render_fade__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@Fv"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::set_rect_verts(rwGameCube2DVertex*, float, float, float, float, iColor_tag, float, float)
.fn "set_rect_verts__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@FP18rwGameCube2DVertexffff10iColor_tagff", local
/* 8011B0C4 001181A4  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 8011B0C8 001181A8  7C 08 02 A6 */	mflr r0
/* 8011B0CC 001181AC  90 01 00 94 */	stw r0, 0x94(r1)
/* 8011B0D0 001181B0  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 8011B0D4 001181B4  F3 E1 00 88 */	psq_st f31, 0x88(r1), 0, qr0
/* 8011B0D8 001181B8  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 8011B0DC 001181BC  F3 C1 00 78 */	psq_st f30, 0x78(r1), 0, qr0
/* 8011B0E0 001181C0  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 8011B0E4 001181C4  F3 A1 00 68 */	psq_st f29, 0x68(r1), 0, qr0
/* 8011B0E8 001181C8  DB 81 00 50 */	stfd f28, 0x50(r1)
/* 8011B0EC 001181CC  F3 81 00 58 */	psq_st f28, 0x58(r1), 0, qr0
/* 8011B0F0 001181D0  DB 61 00 40 */	stfd f27, 0x40(r1)
/* 8011B0F4 001181D4  F3 61 00 48 */	psq_st f27, 0x48(r1), 0, qr0
/* 8011B0F8 001181D8  DB 41 00 30 */	stfd f26, 0x30(r1)
/* 8011B0FC 001181DC  F3 41 00 38 */	psq_st f26, 0x38(r1), 0, qr0
/* 8011B100 001181E0  DB 21 00 20 */	stfd f25, 0x20(r1)
/* 8011B104 001181E4  F3 21 00 28 */	psq_st f25, 0x28(r1), 0, qr0
/* 8011B108 001181E8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8011B10C 001181EC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8011B110 001181F0  FF 80 28 90 */	fmr f28, f5
/* 8011B114 001181F4  7C 9F 23 78 */	mr r31, r4
/* 8011B118 001181F8  FF A0 30 90 */	fmr f29, f6
/* 8011B11C 001181FC  80 04 00 00 */	lwz r0, 0x0(r4)
/* 8011B120 00118200  FF 60 18 90 */	fmr f27, f3
/* 8011B124 00118204  7C 7E 1B 78 */	mr r30, r3
/* 8011B128 00118208  FF C0 20 90 */	fmr f30, f4
/* 8011B12C 0011820C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011B130 00118210  FF 20 08 90 */	fmr f25, f1
/* 8011B134 00118214  38 81 00 14 */	addi r4, r1, 0x14
/* 8011B138 00118218  FF 40 10 90 */	fmr f26, f2
/* 8011B13C 0011821C  FC 60 E0 90 */	fmr f3, f28
/* 8011B140 00118220  FC 80 E8 90 */	fmr f4, f29
/* 8011B144 00118224  48 00 00 C9 */	bl "set_rect_vert__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@FR18rwGameCube2DVertexfff10iColor_tagf"
/* 8011B148 00118228  EF FA F0 2A */	fadds f31, f26, f30
/* 8011B14C 0011822C  80 1F 00 00 */	lwz r0, 0x0(r31)
/* 8011B150 00118230  FC 20 C8 90 */	fmr f1, f25
/* 8011B154 00118234  38 7E 00 18 */	addi r3, r30, 0x18
/* 8011B158 00118238  FC 60 E0 90 */	fmr f3, f28
/* 8011B15C 0011823C  90 01 00 10 */	stw r0, 0x10(r1)
/* 8011B160 00118240  FC 40 F8 90 */	fmr f2, f31
/* 8011B164 00118244  38 81 00 10 */	addi r4, r1, 0x10
/* 8011B168 00118248  FC 80 E8 90 */	fmr f4, f29
/* 8011B16C 0011824C  48 00 00 A1 */	bl "set_rect_vert__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@FR18rwGameCube2DVertexfff10iColor_tagf"
/* 8011B170 00118250  EF D9 D8 2A */	fadds f30, f25, f27
/* 8011B174 00118254  80 1F 00 00 */	lwz r0, 0x0(r31)
/* 8011B178 00118258  FC 40 D0 90 */	fmr f2, f26
/* 8011B17C 0011825C  38 7E 00 30 */	addi r3, r30, 0x30
/* 8011B180 00118260  FC 60 E0 90 */	fmr f3, f28
/* 8011B184 00118264  90 01 00 0C */	stw r0, 0xc(r1)
/* 8011B188 00118268  FC 20 F0 90 */	fmr f1, f30
/* 8011B18C 0011826C  38 81 00 0C */	addi r4, r1, 0xc
/* 8011B190 00118270  FC 80 E8 90 */	fmr f4, f29
/* 8011B194 00118274  48 00 00 79 */	bl "set_rect_vert__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@FR18rwGameCube2DVertexfff10iColor_tagf"
/* 8011B198 00118278  80 1F 00 00 */	lwz r0, 0x0(r31)
/* 8011B19C 0011827C  FC 20 F0 90 */	fmr f1, f30
/* 8011B1A0 00118280  FC 40 F8 90 */	fmr f2, f31
/* 8011B1A4 00118284  38 7E 00 48 */	addi r3, r30, 0x48
/* 8011B1A8 00118288  FC 60 E0 90 */	fmr f3, f28
/* 8011B1AC 0011828C  90 01 00 08 */	stw r0, 0x8(r1)
/* 8011B1B0 00118290  FC 80 E8 90 */	fmr f4, f29
/* 8011B1B4 00118294  38 81 00 08 */	addi r4, r1, 0x8
/* 8011B1B8 00118298  48 00 00 55 */	bl "set_rect_vert__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@FR18rwGameCube2DVertexfff10iColor_tagf"
/* 8011B1BC 0011829C  E3 E1 00 88 */	psq_l f31, 0x88(r1), 0, qr0
/* 8011B1C0 001182A0  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 8011B1C4 001182A4  E3 C1 00 78 */	psq_l f30, 0x78(r1), 0, qr0
/* 8011B1C8 001182A8  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 8011B1CC 001182AC  E3 A1 00 68 */	psq_l f29, 0x68(r1), 0, qr0
/* 8011B1D0 001182B0  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 8011B1D4 001182B4  E3 81 00 58 */	psq_l f28, 0x58(r1), 0, qr0
/* 8011B1D8 001182B8  CB 81 00 50 */	lfd f28, 0x50(r1)
/* 8011B1DC 001182BC  E3 61 00 48 */	psq_l f27, 0x48(r1), 0, qr0
/* 8011B1E0 001182C0  CB 61 00 40 */	lfd f27, 0x40(r1)
/* 8011B1E4 001182C4  E3 41 00 38 */	psq_l f26, 0x38(r1), 0, qr0
/* 8011B1E8 001182C8  CB 41 00 30 */	lfd f26, 0x30(r1)
/* 8011B1EC 001182CC  E3 21 00 28 */	psq_l f25, 0x28(r1), 0, qr0
/* 8011B1F0 001182D0  CB 21 00 20 */	lfd f25, 0x20(r1)
/* 8011B1F4 001182D4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8011B1F8 001182D8  80 01 00 94 */	lwz r0, 0x94(r1)
/* 8011B1FC 001182DC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8011B200 001182E0  7C 08 03 A6 */	mtlr r0
/* 8011B204 001182E4  38 21 00 90 */	addi r1, r1, 0x90
/* 8011B208 001182E8  4E 80 00 20 */	blr
.endfn "set_rect_verts__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@FP18rwGameCube2DVertexffff10iColor_tagff"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::set_rect_vert(rwGameCube2DVertex&, float, float, float, iColor_tag, float)
.fn "set_rect_vert__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@FR18rwGameCube2DVertexfff10iColor_tagf", local
/* 8011B20C 001182EC  D0 23 00 00 */	stfs f1, 0x0(r3)
/* 8011B210 001182F0  D0 43 00 04 */	stfs f2, 0x4(r3)
/* 8011B214 001182F4  D0 63 00 08 */	stfs f3, 0x8(r3)
/* 8011B218 001182F8  88 04 00 00 */	lbz r0, 0x0(r4)
/* 8011B21C 001182FC  98 03 00 0C */	stb r0, 0xc(r3)
/* 8011B220 00118300  88 04 00 01 */	lbz r0, 0x1(r4)
/* 8011B224 00118304  98 03 00 0D */	stb r0, 0xd(r3)
/* 8011B228 00118308  88 04 00 02 */	lbz r0, 0x2(r4)
/* 8011B22C 0011830C  98 03 00 0E */	stb r0, 0xe(r3)
/* 8011B230 00118310  88 04 00 03 */	lbz r0, 0x3(r4)
/* 8011B234 00118314  98 03 00 0F */	stb r0, 0xf(r3)
/* 8011B238 00118318  4E 80 00 20 */	blr
.endfn "set_rect_vert__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@FR18rwGameCube2DVertexfff10iColor_tagf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::render_ghost()
.fn "render_ghost__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@Fv", local
/* 8011B23C 0011831C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8011B240 00118320  7C 08 02 A6 */	mflr r0
/* 8011B244 00118324  3C 80 80 3C */	lis r4, globals@ha
/* 8011B248 00118328  38 60 FF FF */	li r3, -0x1
/* 8011B24C 0011832C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8011B250 00118330  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8011B254 00118334  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8011B258 00118338  3B C4 05 58 */	addi r30, r4, globals@l
/* 8011B25C 0011833C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8011B260 00118340  93 81 00 10 */	stw r28, 0x10(r1)
/* 8011B264 00118344  4B FA 7B D9 */	bl iDrawSetFBMSK__FUi
/* 8011B268 00118348  38 60 00 10 */	li r3, 0x10
/* 8011B26C 0011834C  4B F9 17 91 */	bl zRenderState__F14_SDRenderState
/* 8011B270 00118350  83 FE 07 04 */	lwz r31, 0x704(r30)
/* 8011B274 00118354  48 00 00 20 */	b .L_8011B294
.L_8011B278:
/* 8011B278 00118358  A0 1F 00 44 */	lhz r0, 0x44(r31)
/* 8011B27C 0011835C  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 8011B280 00118360  54 00 07 FF */	clrlwi. r0, r0, 31
/* 8011B284 00118364  41 82 00 0C */	beq .L_8011B290
/* 8011B288 00118368  80 9F 00 4C */	lwz r4, 0x4c(r31)
/* 8011B28C 0011836C  4B FA CE 65 */	bl iModelRender__FP8RpAtomicP11RwMatrixTag
.L_8011B290:
/* 8011B290 00118370  83 FF 00 00 */	lwz r31, 0x0(r31)
.L_8011B294:
/* 8011B294 00118374  28 1F 00 00 */	cmplwi r31, 0x0
/* 8011B298 00118378  40 82 FF E0 */	bne .L_8011B278
/* 8011B29C 0011837C  38 60 00 00 */	li r3, 0x0
/* 8011B2A0 00118380  4B FA 7B 9D */	bl iDrawSetFBMSK__FUi
/* 8011B2A4 00118384  38 60 00 11 */	li r3, 0x11
/* 8011B2A8 00118388  4B F9 17 55 */	bl zRenderState__F14_SDRenderState
/* 8011B2AC 0011838C  3C 80 80 3C */	lis r4, globals@ha
/* 8011B2B0 00118390  80 7E 07 10 */	lwz r3, 0x710(r30)
/* 8011B2B4 00118394  3B E4 05 58 */	addi r31, r4, globals@l
/* 8011B2B8 00118398  80 9F 06 58 */	lwz r4, 0x658(r31)
/* 8011B2BC 0011839C  48 00 82 05 */	bl xLightKit_Enable__FP9xLightKitP7RpWorld
/* 8011B2C0 001183A0  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B2C4 001183A4  C0 42 9F B8 */	lfs f2, "@1041"@sda21(r2)
/* 8011B2C8 001183A8  38 63 7E 48 */	addi r3, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B2CC 001183AC  C0 62 9F C8 */	lfs f3, "@1475"@sda21(r2)
/* 8011B2D0 001183B0  C0 23 00 3C */	lfs f1, 0x3c(r3)
/* 8011B2D4 001183B4  C0 02 9F BC */	lfs f0, "@1048"@sda21(r2)
/* 8011B2D8 001183B8  EC 22 08 28 */	fsubs f1, f2, f1
/* 8011B2DC 001183BC  83 BE 07 04 */	lwz r29, 0x704(r30)
/* 8011B2E0 001183C0  EC 03 00 7A */	fmadds f0, f3, f1, f0
/* 8011B2E4 001183C4  FC 00 00 1E */	fctiwz f0, f0
/* 8011B2E8 001183C8  D8 01 00 08 */	stfd f0, 0x8(r1)
/* 8011B2EC 001183CC  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8011B2F0 001183D0  54 1E 06 3E */	clrlwi r30, r0, 24
/* 8011B2F4 001183D4  48 00 00 38 */	b .L_8011B32C
.L_8011B2F8:
/* 8011B2F8 001183D8  A0 1D 00 44 */	lhz r0, 0x44(r29)
/* 8011B2FC 001183DC  83 9D 00 10 */	lwz r28, 0x10(r29)
/* 8011B300 001183E0  54 00 07 FF */	clrlwi. r0, r0, 31
/* 8011B304 001183E4  41 82 00 24 */	beq .L_8011B328
/* 8011B308 001183E8  7F 83 E3 78 */	mr r3, r28
/* 8011B30C 001183EC  7F C4 F3 78 */	mr r4, r30
/* 8011B310 001183F0  4B FA DE DD */	bl iModelSetMaterialAlpha__FP8RpAtomicUc
/* 8011B314 001183F4  80 9D 00 4C */	lwz r4, 0x4c(r29)
/* 8011B318 001183F8  7F 83 E3 78 */	mr r3, r28
/* 8011B31C 001183FC  4B FA CD D5 */	bl iModelRender__FP8RpAtomicP11RwMatrixTag
/* 8011B320 00118400  7F 83 E3 78 */	mr r3, r28
/* 8011B324 00118404  4B FA E0 4D */	bl iModelResetMaterial__FP8RpAtomic
.L_8011B328:
/* 8011B328 00118408  83 BD 00 00 */	lwz r29, 0x0(r29)
.L_8011B32C:
/* 8011B32C 0011840C  28 1D 00 00 */	cmplwi r29, 0x0
/* 8011B330 00118410  40 82 FF C8 */	bne .L_8011B2F8
/* 8011B334 00118414  80 9F 06 58 */	lwz r4, 0x658(r31)
/* 8011B338 00118418  38 60 00 00 */	li r3, 0x0
/* 8011B33C 0011841C  48 00 81 85 */	bl xLightKit_Enable__FP9xLightKitP7RpWorld
/* 8011B340 00118420  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8011B344 00118424  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8011B348 00118428  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8011B34C 0011842C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8011B350 00118430  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8011B354 00118434  7C 08 03 A6 */	mtlr r0
/* 8011B358 00118438  38 21 00 20 */	addi r1, r1, 0x20
/* 8011B35C 0011843C  4E 80 00 20 */	blr
.endfn "render_ghost__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@Fv"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::render_hand()
.fn "render_hand__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@Fv", local
/* 8011B360 00118440  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8011B364 00118444  7C 08 02 A6 */	mflr r0
/* 8011B368 00118448  3C 80 80 27 */	lis r4, ...rodata.0@ha
/* 8011B36C 0011844C  38 60 00 12 */	li r3, 0x12
/* 8011B370 00118450  90 01 00 44 */	stw r0, 0x44(r1)
/* 8011B374 00118454  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8011B378 00118458  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8011B37C 0011845C  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8011B380 00118460  93 81 00 30 */	stw r28, 0x30(r1)
/* 8011B384 00118464  3B 84 B2 68 */	addi r28, r4, ...rodata.0@l
/* 8011B388 00118468  4B F9 16 75 */	bl zRenderState__F14_SDRenderState
/* 8011B38C 0011846C  83 BC 01 A0 */	lwz r29, 0x1a0(r28)
/* 8011B390 00118470  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B394 00118474  39 83 7E 48 */	addi r12, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B398 00118478  83 DC 01 A4 */	lwz r30, 0x1a4(r28)
/* 8011B39C 0011847C  81 7C 01 AC */	lwz r11, 0x1ac(r28)
/* 8011B3A0 00118480  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B3A4 00118484  39 03 45 30 */	addi r8, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B3A8 00118488  81 5C 01 B0 */	lwz r10, 0x1b0(r28)
/* 8011B3AC 0011848C  80 FC 01 B8 */	lwz r7, 0x1b8(r28)
/* 8011B3B0 00118490  38 81 00 20 */	addi r4, r1, 0x20
/* 8011B3B4 00118494  80 7C 01 BC */	lwz r3, 0x1bc(r28)
/* 8011B3B8 00118498  38 A1 00 14 */	addi r5, r1, 0x14
/* 8011B3BC 0011849C  80 1C 01 C0 */	lwz r0, 0x1c0(r28)
/* 8011B3C0 001184A0  38 C1 00 08 */	addi r6, r1, 0x8
/* 8011B3C4 001184A4  83 FC 01 A8 */	lwz r31, 0x1a8(r28)
/* 8011B3C8 001184A8  81 3C 01 B4 */	lwz r9, 0x1b4(r28)
/* 8011B3CC 001184AC  93 A1 00 20 */	stw r29, 0x20(r1)
/* 8011B3D0 001184B0  C0 CC 00 2C */	lfs f6, 0x2c(r12)
/* 8011B3D4 001184B4  93 C1 00 24 */	stw r30, 0x24(r1)
/* 8011B3D8 001184B8  C0 AC 00 30 */	lfs f5, 0x30(r12)
/* 8011B3DC 001184BC  91 61 00 14 */	stw r11, 0x14(r1)
/* 8011B3E0 001184C0  C0 88 00 68 */	lfs f4, 0x68(r8)
/* 8011B3E4 001184C4  91 41 00 18 */	stw r10, 0x18(r1)
/* 8011B3E8 001184C8  C0 68 00 6C */	lfs f3, 0x6c(r8)
/* 8011B3EC 001184CC  90 E1 00 08 */	stw r7, 0x8(r1)
/* 8011B3F0 001184D0  C0 48 00 70 */	lfs f2, 0x70(r8)
/* 8011B3F4 001184D4  90 61 00 0C */	stw r3, 0xc(r1)
/* 8011B3F8 001184D8  C0 28 00 74 */	lfs f1, 0x74(r8)
/* 8011B3FC 001184DC  90 01 00 10 */	stw r0, 0x10(r1)
/* 8011B400 001184E0  C0 08 00 78 */	lfs f0, 0x78(r8)
/* 8011B404 001184E4  93 E1 00 28 */	stw r31, 0x28(r1)
/* 8011B408 001184E8  80 6C 00 28 */	lwz r3, 0x28(r12)
/* 8011B40C 001184EC  D0 C1 00 20 */	stfs f6, 0x20(r1)
/* 8011B410 001184F0  D0 A1 00 24 */	stfs f5, 0x24(r1)
/* 8011B414 001184F4  91 21 00 1C */	stw r9, 0x1c(r1)
/* 8011B418 001184F8  D0 81 00 14 */	stfs f4, 0x14(r1)
/* 8011B41C 001184FC  D0 61 00 18 */	stfs f3, 0x18(r1)
/* 8011B420 00118500  D0 41 00 08 */	stfs f2, 0x8(r1)
/* 8011B424 00118504  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8011B428 00118508  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8011B42C 0011850C  4B FF F7 D1 */	bl "render_model__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@FR14xModelInstanceRC5xVec3RC5xVec3RC5xVec3"
/* 8011B430 00118510  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8011B434 00118514  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8011B438 00118518  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8011B43C 0011851C  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8011B440 00118520  83 81 00 30 */	lwz r28, 0x30(r1)
/* 8011B444 00118524  7C 08 03 A6 */	mtlr r0
/* 8011B448 00118528  38 21 00 40 */	addi r1, r1, 0x40
/* 8011B44C 0011852C  4E 80 00 20 */	blr
.endfn "render_hand__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@Fv"

# oob_state::load_settings(xIniFile&)
.fn load_settings__9oob_stateFR8xIniFile, global
/* 8011B450 00118530  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011B454 00118534  7C 08 02 A6 */	mflr r0
/* 8011B458 00118538  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8011B45C 0011853C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011B460 00118540  38 A4 B4 2C */	addi r5, r4, "@stringBase0"@l
/* 8011B464 00118544  38 85 00 14 */	addi r4, r5, 0x14
/* 8011B468 00118548  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011B46C 0011854C  7C 7F 1B 78 */	mr r31, r3
/* 8011B470 00118550  38 A5 00 3A */	addi r5, r5, 0x3a
/* 8011B474 00118554  4B F1 57 39 */	bl xIniGetString__FP8xIniFilePcPc
/* 8011B478 00118558  3C A0 80 31 */	lis r5, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B47C 0011855C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8011B480 00118560  38 A5 45 30 */	addi r5, r5, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B484 00118564  90 65 00 18 */	stw r3, 0x18(r5)
/* 8011B488 00118568  38 84 B4 2C */	addi r4, r4, "@stringBase0"@l
/* 8011B48C 0011856C  7F E3 FB 78 */	mr r3, r31
/* 8011B490 00118570  C0 22 9F D4 */	lfs f1, "@1533"@sda21(r2)
/* 8011B494 00118574  38 84 00 3F */	addi r4, r4, 0x3f
/* 8011B498 00118578  4B F1 56 AD */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011B49C 0011857C  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B4A0 00118580  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8011B4A4 00118584  38 A3 45 30 */	addi r5, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B4A8 00118588  7F E3 FB 78 */	mr r3, r31
/* 8011B4AC 0011858C  D0 25 00 00 */	stfs f1, 0x0(r5)
/* 8011B4B0 00118590  38 84 B4 2C */	addi r4, r4, "@stringBase0"@l
/* 8011B4B4 00118594  38 84 00 63 */	addi r4, r4, 0x63
/* 8011B4B8 00118598  C0 22 9F C0 */	lfs f1, "@1049"@sda21(r2)
/* 8011B4BC 0011859C  4B F1 56 89 */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011B4C0 001185A0  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B4C4 001185A4  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8011B4C8 001185A8  38 A3 45 30 */	addi r5, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B4CC 001185AC  7F E3 FB 78 */	mr r3, r31
/* 8011B4D0 001185B0  D0 25 00 04 */	stfs f1, 0x4(r5)
/* 8011B4D4 001185B4  38 84 B4 2C */	addi r4, r4, "@stringBase0"@l
/* 8011B4D8 001185B8  38 84 00 89 */	addi r4, r4, 0x89
/* 8011B4DC 001185BC  C0 22 9F C0 */	lfs f1, "@1049"@sda21(r2)
/* 8011B4E0 001185C0  4B F1 56 65 */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011B4E4 001185C4  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B4E8 001185C8  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8011B4EC 001185CC  38 A3 45 30 */	addi r5, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B4F0 001185D0  7F E3 FB 78 */	mr r3, r31
/* 8011B4F4 001185D4  D0 25 00 08 */	stfs f1, 0x8(r5)
/* 8011B4F8 001185D8  38 84 B4 2C */	addi r4, r4, "@stringBase0"@l
/* 8011B4FC 001185DC  38 84 00 AD */	addi r4, r4, 0xad
/* 8011B500 001185E0  C0 22 9F B8 */	lfs f1, "@1041"@sda21(r2)
/* 8011B504 001185E4  4B F1 56 41 */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011B508 001185E8  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B50C 001185EC  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8011B510 001185F0  38 A3 45 30 */	addi r5, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B514 001185F4  7F E3 FB 78 */	mr r3, r31
/* 8011B518 001185F8  D0 25 00 0C */	stfs f1, 0xc(r5)
/* 8011B51C 001185FC  38 84 B4 2C */	addi r4, r4, "@stringBase0"@l
/* 8011B520 00118600  38 84 00 D3 */	addi r4, r4, 0xd3
/* 8011B524 00118604  C0 22 9F DC */	lfs f1, "@1535"@sda21(r2)
/* 8011B528 00118608  4B F1 56 1D */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011B52C 0011860C  C0 02 9F D8 */	lfs f0, "@1534"@sda21(r2)
/* 8011B530 00118610  3C A0 80 31 */	lis r5, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B534 00118614  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8011B538 00118618  7F E3 FB 78 */	mr r3, r31
/* 8011B53C 0011861C  EC 00 00 72 */	fmuls f0, f0, f1
/* 8011B540 00118620  38 A5 45 30 */	addi r5, r5, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B544 00118624  38 84 B4 2C */	addi r4, r4, "@stringBase0"@l
/* 8011B548 00118628  38 84 00 F8 */	addi r4, r4, 0xf8
/* 8011B54C 0011862C  D0 05 00 10 */	stfs f0, 0x10(r5)
/* 8011B550 00118630  C0 22 9F E0 */	lfs f1, "@1536"@sda21(r2)
/* 8011B554 00118634  4B F1 55 F1 */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011B558 00118638  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B55C 0011863C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8011B560 00118640  38 A3 45 30 */	addi r5, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B564 00118644  7F E3 FB 78 */	mr r3, r31
/* 8011B568 00118648  D0 25 00 14 */	stfs f1, 0x14(r5)
/* 8011B56C 0011864C  38 84 B4 2C */	addi r4, r4, "@stringBase0"@l
/* 8011B570 00118650  38 84 01 21 */	addi r4, r4, 0x121
/* 8011B574 00118654  C0 22 9F E4 */	lfs f1, "@1537"@sda21(r2)
/* 8011B578 00118658  4B F1 55 CD */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011B57C 0011865C  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B580 00118660  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8011B584 00118664  38 A3 45 30 */	addi r5, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B588 00118668  7F E3 FB 78 */	mr r3, r31
/* 8011B58C 0011866C  D0 25 00 1C */	stfs f1, 0x1c(r5)
/* 8011B590 00118670  38 84 B4 2C */	addi r4, r4, "@stringBase0"@l
/* 8011B594 00118674  38 84 01 45 */	addi r4, r4, 0x145
/* 8011B598 00118678  C0 22 9F A8 */	lfs f1, "@1033"@sda21(r2)
/* 8011B59C 0011867C  4B F1 55 A9 */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011B5A0 00118680  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B5A4 00118684  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8011B5A8 00118688  38 A3 45 30 */	addi r5, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B5AC 0011868C  7F E3 FB 78 */	mr r3, r31
/* 8011B5B0 00118690  D0 25 00 20 */	stfs f1, 0x20(r5)
/* 8011B5B4 00118694  38 84 B4 2C */	addi r4, r4, "@stringBase0"@l
/* 8011B5B8 00118698  38 84 01 69 */	addi r4, r4, 0x169
/* 8011B5BC 0011869C  C0 22 9F B8 */	lfs f1, "@1041"@sda21(r2)
/* 8011B5C0 001186A0  4B F1 55 85 */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011B5C4 001186A4  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B5C8 001186A8  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8011B5CC 001186AC  38 A3 45 30 */	addi r5, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B5D0 001186B0  7F E3 FB 78 */	mr r3, r31
/* 8011B5D4 001186B4  D0 25 00 24 */	stfs f1, 0x24(r5)
/* 8011B5D8 001186B8  38 84 B4 2C */	addi r4, r4, "@stringBase0"@l
/* 8011B5DC 001186BC  38 84 01 8E */	addi r4, r4, 0x18e
/* 8011B5E0 001186C0  C0 22 9F A8 */	lfs f1, "@1033"@sda21(r2)
/* 8011B5E4 001186C4  4B F1 55 61 */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011B5E8 001186C8  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B5EC 001186CC  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8011B5F0 001186D0  38 A3 45 30 */	addi r5, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B5F4 001186D4  7F E3 FB 78 */	mr r3, r31
/* 8011B5F8 001186D8  D0 25 00 28 */	stfs f1, 0x28(r5)
/* 8011B5FC 001186DC  38 84 B4 2C */	addi r4, r4, "@stringBase0"@l
/* 8011B600 001186E0  38 84 01 B3 */	addi r4, r4, 0x1b3
/* 8011B604 001186E4  C0 22 9F A8 */	lfs f1, "@1033"@sda21(r2)
/* 8011B608 001186E8  4B F1 55 3D */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011B60C 001186EC  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B610 001186F0  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8011B614 001186F4  38 A3 45 30 */	addi r5, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B618 001186F8  7F E3 FB 78 */	mr r3, r31
/* 8011B61C 001186FC  D0 25 00 2C */	stfs f1, 0x2c(r5)
/* 8011B620 00118700  38 84 B4 2C */	addi r4, r4, "@stringBase0"@l
/* 8011B624 00118704  38 84 01 E0 */	addi r4, r4, 0x1e0
/* 8011B628 00118708  C0 22 9F E8 */	lfs f1, "@1538"@sda21(r2)
/* 8011B62C 0011870C  4B F1 55 19 */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011B630 00118710  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B634 00118714  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8011B638 00118718  38 A3 45 30 */	addi r5, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B63C 0011871C  7F E3 FB 78 */	mr r3, r31
/* 8011B640 00118720  D0 25 00 30 */	stfs f1, 0x30(r5)
/* 8011B644 00118724  38 84 B4 2C */	addi r4, r4, "@stringBase0"@l
/* 8011B648 00118728  38 84 02 07 */	addi r4, r4, 0x207
/* 8011B64C 0011872C  C0 22 9F EC */	lfs f1, "@1539"@sda21(r2)
/* 8011B650 00118730  4B F1 54 F5 */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011B654 00118734  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B658 00118738  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8011B65C 0011873C  38 A3 45 30 */	addi r5, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B660 00118740  7F E3 FB 78 */	mr r3, r31
/* 8011B664 00118744  D0 25 00 34 */	stfs f1, 0x34(r5)
/* 8011B668 00118748  38 84 B4 2C */	addi r4, r4, "@stringBase0"@l
/* 8011B66C 0011874C  38 84 02 34 */	addi r4, r4, 0x234
/* 8011B670 00118750  C0 22 9F BC */	lfs f1, "@1048"@sda21(r2)
/* 8011B674 00118754  4B F1 54 D1 */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011B678 00118758  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B67C 0011875C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8011B680 00118760  38 A3 45 30 */	addi r5, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B684 00118764  7F E3 FB 78 */	mr r3, r31
/* 8011B688 00118768  D0 25 00 38 */	stfs f1, 0x38(r5)
/* 8011B68C 0011876C  38 84 B4 2C */	addi r4, r4, "@stringBase0"@l
/* 8011B690 00118770  38 84 02 62 */	addi r4, r4, 0x262
/* 8011B694 00118774  C0 22 9F BC */	lfs f1, "@1048"@sda21(r2)
/* 8011B698 00118778  4B F1 54 AD */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011B69C 0011877C  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B6A0 00118780  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8011B6A4 00118784  38 A3 45 30 */	addi r5, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B6A8 00118788  7F E3 FB 78 */	mr r3, r31
/* 8011B6AC 0011878C  D0 25 00 3C */	stfs f1, 0x3c(r5)
/* 8011B6B0 00118790  38 84 B4 2C */	addi r4, r4, "@stringBase0"@l
/* 8011B6B4 00118794  38 84 02 8A */	addi r4, r4, 0x28a
/* 8011B6B8 00118798  C0 22 9F B0 */	lfs f1, "@1035"@sda21(r2)
/* 8011B6BC 0011879C  4B F1 54 89 */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011B6C0 001187A0  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B6C4 001187A4  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8011B6C8 001187A8  38 A3 45 30 */	addi r5, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B6CC 001187AC  7F E3 FB 78 */	mr r3, r31
/* 8011B6D0 001187B0  D0 25 00 40 */	stfs f1, 0x40(r5)
/* 8011B6D4 001187B4  38 84 B4 2C */	addi r4, r4, "@stringBase0"@l
/* 8011B6D8 001187B8  38 84 02 B9 */	addi r4, r4, 0x2b9
/* 8011B6DC 001187BC  C0 22 9F A8 */	lfs f1, "@1033"@sda21(r2)
/* 8011B6E0 001187C0  4B F1 54 65 */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011B6E4 001187C4  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B6E8 001187C8  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8011B6EC 001187CC  38 A3 45 30 */	addi r5, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B6F0 001187D0  7F E3 FB 78 */	mr r3, r31
/* 8011B6F4 001187D4  D0 25 00 44 */	stfs f1, 0x44(r5)
/* 8011B6F8 001187D8  38 84 B4 2C */	addi r4, r4, "@stringBase0"@l
/* 8011B6FC 001187DC  38 84 02 E9 */	addi r4, r4, 0x2e9
/* 8011B700 001187E0  C0 22 9F E8 */	lfs f1, "@1538"@sda21(r2)
/* 8011B704 001187E4  4B F1 54 41 */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011B708 001187E8  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B70C 001187EC  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8011B710 001187F0  38 A3 45 30 */	addi r5, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B714 001187F4  7F E3 FB 78 */	mr r3, r31
/* 8011B718 001187F8  D0 25 00 48 */	stfs f1, 0x48(r5)
/* 8011B71C 001187FC  38 84 B4 2C */	addi r4, r4, "@stringBase0"@l
/* 8011B720 00118800  38 84 03 13 */	addi r4, r4, 0x313
/* 8011B724 00118804  C0 22 9F BC */	lfs f1, "@1048"@sda21(r2)
/* 8011B728 00118808  4B F1 54 1D */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011B72C 0011880C  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B730 00118810  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8011B734 00118814  38 A3 45 30 */	addi r5, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B738 00118818  7F E3 FB 78 */	mr r3, r31
/* 8011B73C 0011881C  D0 25 00 4C */	stfs f1, 0x4c(r5)
/* 8011B740 00118820  38 84 B4 2C */	addi r4, r4, "@stringBase0"@l
/* 8011B744 00118824  38 84 03 3A */	addi r4, r4, 0x33a
/* 8011B748 00118828  C0 22 9F B0 */	lfs f1, "@1035"@sda21(r2)
/* 8011B74C 0011882C  4B F1 53 F9 */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011B750 00118830  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B754 00118834  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8011B758 00118838  38 A3 45 30 */	addi r5, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B75C 0011883C  7F E3 FB 78 */	mr r3, r31
/* 8011B760 00118840  D0 25 00 50 */	stfs f1, 0x50(r5)
/* 8011B764 00118844  38 84 B4 2C */	addi r4, r4, "@stringBase0"@l
/* 8011B768 00118848  38 84 03 67 */	addi r4, r4, 0x367
/* 8011B76C 0011884C  C0 22 9F BC */	lfs f1, "@1048"@sda21(r2)
/* 8011B770 00118850  4B F1 53 D5 */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011B774 00118854  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B778 00118858  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8011B77C 0011885C  38 A3 45 30 */	addi r5, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B780 00118860  7F E3 FB 78 */	mr r3, r31
/* 8011B784 00118864  D0 25 00 54 */	stfs f1, 0x54(r5)
/* 8011B788 00118868  38 84 B4 2C */	addi r4, r4, "@stringBase0"@l
/* 8011B78C 0011886C  38 84 03 95 */	addi r4, r4, 0x395
/* 8011B790 00118870  C0 22 9F E8 */	lfs f1, "@1538"@sda21(r2)
/* 8011B794 00118874  4B F1 53 B1 */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011B798 00118878  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B79C 0011887C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8011B7A0 00118880  38 A3 45 30 */	addi r5, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B7A4 00118884  7F E3 FB 78 */	mr r3, r31
/* 8011B7A8 00118888  D0 25 00 58 */	stfs f1, 0x58(r5)
/* 8011B7AC 0011888C  38 84 B4 2C */	addi r4, r4, "@stringBase0"@l
/* 8011B7B0 00118890  38 84 03 BD */	addi r4, r4, 0x3bd
/* 8011B7B4 00118894  C0 22 9F EC */	lfs f1, "@1539"@sda21(r2)
/* 8011B7B8 00118898  4B F1 53 8D */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011B7BC 0011889C  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B7C0 001188A0  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8011B7C4 001188A4  38 A3 45 30 */	addi r5, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B7C8 001188A8  7F E3 FB 78 */	mr r3, r31
/* 8011B7CC 001188AC  D0 25 00 5C */	stfs f1, 0x5c(r5)
/* 8011B7D0 001188B0  38 84 B4 2C */	addi r4, r4, "@stringBase0"@l
/* 8011B7D4 001188B4  38 84 03 EC */	addi r4, r4, 0x3ec
/* 8011B7D8 001188B8  C0 22 9F A8 */	lfs f1, "@1033"@sda21(r2)
/* 8011B7DC 001188BC  4B F1 53 69 */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011B7E0 001188C0  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B7E4 001188C4  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8011B7E8 001188C8  38 A3 45 30 */	addi r5, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B7EC 001188CC  7F E3 FB 78 */	mr r3, r31
/* 8011B7F0 001188D0  D0 25 00 60 */	stfs f1, 0x60(r5)
/* 8011B7F4 001188D4  38 84 B4 2C */	addi r4, r4, "@stringBase0"@l
/* 8011B7F8 001188D8  38 84 04 1C */	addi r4, r4, 0x41c
/* 8011B7FC 001188DC  C0 22 9F F0 */	lfs f1, "@1540"@sda21(r2)
/* 8011B800 001188E0  4B F1 53 45 */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011B804 001188E4  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B808 001188E8  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8011B80C 001188EC  38 A3 45 30 */	addi r5, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B810 001188F0  7F E3 FB 78 */	mr r3, r31
/* 8011B814 001188F4  D0 25 00 64 */	stfs f1, 0x64(r5)
/* 8011B818 001188F8  38 84 B4 2C */	addi r4, r4, "@stringBase0"@l
/* 8011B81C 001188FC  38 84 04 46 */	addi r4, r4, 0x446
/* 8011B820 00118900  C0 22 9F F4 */	lfs f1, "@1541"@sda21(r2)
/* 8011B824 00118904  4B F1 53 21 */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011B828 00118908  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B82C 0011890C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8011B830 00118910  38 A3 45 30 */	addi r5, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B834 00118914  7F E3 FB 78 */	mr r3, r31
/* 8011B838 00118918  D0 25 00 68 */	stfs f1, 0x68(r5)
/* 8011B83C 0011891C  38 84 B4 2C */	addi r4, r4, "@stringBase0"@l
/* 8011B840 00118920  38 84 04 6D */	addi r4, r4, 0x46d
/* 8011B844 00118924  C0 22 9F F4 */	lfs f1, "@1541"@sda21(r2)
/* 8011B848 00118928  4B F1 52 FD */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011B84C 0011892C  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B850 00118930  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8011B854 00118934  38 A3 45 30 */	addi r5, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B858 00118938  7F E3 FB 78 */	mr r3, r31
/* 8011B85C 0011893C  D0 25 00 6C */	stfs f1, 0x6c(r5)
/* 8011B860 00118940  38 84 B4 2C */	addi r4, r4, "@stringBase0"@l
/* 8011B864 00118944  38 84 04 94 */	addi r4, r4, 0x494
/* 8011B868 00118948  C0 22 9F A8 */	lfs f1, "@1033"@sda21(r2)
/* 8011B86C 0011894C  4B F1 52 D9 */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011B870 00118950  C0 02 9F D8 */	lfs f0, "@1534"@sda21(r2)
/* 8011B874 00118954  3C A0 80 31 */	lis r5, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B878 00118958  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8011B87C 0011895C  7F E3 FB 78 */	mr r3, r31
/* 8011B880 00118960  EC 00 00 72 */	fmuls f0, f0, f1
/* 8011B884 00118964  38 A5 45 30 */	addi r5, r5, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B888 00118968  38 84 B4 2C */	addi r4, r4, "@stringBase0"@l
/* 8011B88C 0011896C  38 84 04 B8 */	addi r4, r4, 0x4b8
/* 8011B890 00118970  D0 05 00 70 */	stfs f0, 0x70(r5)
/* 8011B894 00118974  C0 22 9F A8 */	lfs f1, "@1033"@sda21(r2)
/* 8011B898 00118978  4B F1 52 AD */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011B89C 0011897C  C0 02 9F D8 */	lfs f0, "@1534"@sda21(r2)
/* 8011B8A0 00118980  3C A0 80 31 */	lis r5, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B8A4 00118984  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8011B8A8 00118988  7F E3 FB 78 */	mr r3, r31
/* 8011B8AC 0011898C  EC 00 00 72 */	fmuls f0, f0, f1
/* 8011B8B0 00118990  38 A5 45 30 */	addi r5, r5, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B8B4 00118994  38 84 B4 2C */	addi r4, r4, "@stringBase0"@l
/* 8011B8B8 00118998  38 84 04 DE */	addi r4, r4, 0x4de
/* 8011B8BC 0011899C  D0 05 00 74 */	stfs f0, 0x74(r5)
/* 8011B8C0 001189A0  C0 22 9F F8 */	lfs f1, "@1542"@sda21(r2)
/* 8011B8C4 001189A4  4B F1 52 81 */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011B8C8 001189A8  C0 02 9F D8 */	lfs f0, "@1534"@sda21(r2)
/* 8011B8CC 001189AC  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B8D0 001189B0  38 63 45 30 */	addi r3, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B8D4 001189B4  EC 00 00 72 */	fmuls f0, f0, f1
/* 8011B8D8 001189B8  D0 03 00 78 */	stfs f0, 0x78(r3)
/* 8011B8DC 001189BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011B8E0 001189C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011B8E4 001189C4  7C 08 03 A6 */	mtlr r0
/* 8011B8E8 001189C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8011B8EC 001189CC  4E 80 00 20 */	blr
.endfn load_settings__9oob_stateFR8xIniFile

# oob_state::init()
.fn init__9oob_stateFv, global
/* 8011B8F0 001189D0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8011B8F4 001189D4  7C 08 02 A6 */	mflr r0
/* 8011B8F8 001189D8  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B8FC 001189DC  3C A0 80 31 */	lis r5, ...bss.0@ha
/* 8011B900 001189E0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8011B904 001189E4  38 83 7E 48 */	addi r4, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B908 001189E8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8011B90C 001189EC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8011B910 001189F0  3B C5 45 30 */	addi r30, r5, ...bss.0@l
/* 8011B914 001189F4  80 64 00 00 */	lwz r3, 0x0(r4)
/* 8011B918 001189F8  54 60 07 FE */	clrlwi r0, r3, 31
/* 8011B91C 001189FC  2C 00 00 01 */	cmpwi r0, 0x1
/* 8011B920 00118A00  40 82 01 1C */	bne .L_8011BA3C
/* 8011B924 00118A04  60 60 00 02 */	ori r0, r3, 0x2
/* 8011B928 00118A08  90 04 00 00 */	stw r0, 0x0(r4)
/* 8011B92C 00118A0C  88 0D 95 11 */	lbz r0, init$1549@sda21(r13)
/* 8011B930 00118A10  7C 00 07 75 */	extsb. r0, r0
/* 8011B934 00118A14  40 82 00 14 */	bne .L_8011B948
/* 8011B938 00118A18  38 6D 95 14 */	addi r3, r13, in_state$1548@sda21
/* 8011B93C 00118A1C  48 00 0D 7D */	bl "__ct__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@13in_state_typeFv"
/* 8011B940 00118A20  38 00 00 01 */	li r0, 0x1
/* 8011B944 00118A24  98 0D 95 11 */	stb r0, init$1549@sda21(r13)
.L_8011B948:
/* 8011B948 00118A28  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B94C 00118A2C  38 0D 95 14 */	addi r0, r13, in_state$1548@sda21
/* 8011B950 00118A30  3B E3 7E 48 */	addi r31, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B954 00118A34  90 1F 00 0C */	stw r0, 0xc(r31)
/* 8011B958 00118A38  88 0D 95 1C */	lbz r0, init$1552@sda21(r13)
/* 8011B95C 00118A3C  7C 00 07 75 */	extsb. r0, r0
/* 8011B960 00118A40  40 82 00 14 */	bne .L_8011B974
/* 8011B964 00118A44  38 6D 95 20 */	addi r3, r13, out_state$1551@sda21
/* 8011B968 00118A48  48 00 0D 11 */	bl "__ct__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@14out_state_typeFv"
/* 8011B96C 00118A4C  38 00 00 01 */	li r0, 0x1
/* 8011B970 00118A50  98 0D 95 1C */	stb r0, init$1552@sda21(r13)
.L_8011B974:
/* 8011B974 00118A54  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B978 00118A58  38 0D 95 20 */	addi r0, r13, out_state$1551@sda21
/* 8011B97C 00118A5C  38 63 7E 48 */	addi r3, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B980 00118A60  90 03 00 10 */	stw r0, 0x10(r3)
/* 8011B984 00118A64  88 0D 95 28 */	lbz r0, init$1555@sda21(r13)
/* 8011B988 00118A68  7C 00 07 75 */	extsb. r0, r0
/* 8011B98C 00118A6C  40 82 00 14 */	bne .L_8011B9A0
/* 8011B990 00118A70  38 7E 00 BC */	addi r3, r30, 0xbc
/* 8011B994 00118A74  48 00 05 ED */	bl "__ct__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFv"
/* 8011B998 00118A78  38 00 00 01 */	li r0, 0x1
/* 8011B99C 00118A7C  98 0D 95 28 */	stb r0, init$1555@sda21(r13)
.L_8011B9A0:
/* 8011B9A0 00118A80  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B9A4 00118A84  38 1E 00 BC */	addi r0, r30, 0xbc
/* 8011B9A8 00118A88  38 63 7E 48 */	addi r3, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B9AC 00118A8C  90 03 00 14 */	stw r0, 0x14(r3)
/* 8011B9B0 00118A90  88 0D 95 29 */	lbz r0, init$1558@sda21(r13)
/* 8011B9B4 00118A94  7C 00 07 75 */	extsb. r0, r0
/* 8011B9B8 00118A98  40 82 00 14 */	bne .L_8011B9CC
/* 8011B9BC 00118A9C  38 7E 01 24 */	addi r3, r30, 0x124
/* 8011B9C0 00118AA0  48 00 00 95 */	bl "__ct__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFv"
/* 8011B9C4 00118AA4  38 00 00 01 */	li r0, 0x1
/* 8011B9C8 00118AA8  98 0D 95 29 */	stb r0, init$1558@sda21(r13)
.L_8011B9CC:
/* 8011B9CC 00118AAC  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011B9D0 00118AB0  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 8011B9D4 00118AB4  38 83 7E 48 */	addi r4, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011B9D8 00118AB8  C0 1E 00 00 */	lfs f0, 0x0(r30)
/* 8011B9DC 00118ABC  38 BE 01 24 */	addi r5, r30, 0x124
/* 8011B9E0 00118AC0  90 04 00 04 */	stw r0, 0x4(r4)
/* 8011B9E4 00118AC4  38 7E 00 00 */	addi r3, r30, 0x0
/* 8011B9E8 00118AC8  38 00 00 00 */	li r0, 0x0
/* 8011B9EC 00118ACC  90 A4 00 18 */	stw r5, 0x18(r4)
/* 8011B9F0 00118AD0  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8011B9F4 00118AD4  D0 04 00 20 */	stfs f0, 0x20(r4)
/* 8011B9F8 00118AD8  C0 02 9F B8 */	lfs f0, "@1041"@sda21(r2)
/* 8011B9FC 00118ADC  D0 04 00 3C */	stfs f0, 0x3c(r4)
/* 8011BA00 00118AE0  98 04 00 40 */	stb r0, 0x40(r4)
/* 8011BA04 00118AE4  98 04 00 08 */	stb r0, 0x8(r4)
/* 8011BA08 00118AE8  4B F3 08 0D */	bl xStrHash__FPCc
/* 8011BA0C 00118AEC  38 81 00 08 */	addi r4, r1, 0x8
/* 8011BA10 00118AF0  4B F2 FC FD */	bl xSTFindAsset__FUiPUi
/* 8011BA14 00118AF4  28 03 00 00 */	cmplwi r3, 0x0
/* 8011BA18 00118AF8  40 82 00 0C */	bne .L_8011BA24
/* 8011BA1C 00118AFC  38 60 00 00 */	li r3, 0x0
/* 8011BA20 00118B00  48 00 00 10 */	b .L_8011BA30
.L_8011BA24:
/* 8011BA24 00118B04  7C 64 1B 78 */	mr r4, r3
/* 8011BA28 00118B08  38 60 00 00 */	li r3, 0x0
/* 8011BA2C 00118B0C  4B EF D7 A1 */	bl xEntLoadModel__FP4xEntP8RpAtomic
.L_8011BA30:
/* 8011BA30 00118B10  3C 80 80 29 */	lis r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011BA34 00118B14  38 84 7E 48 */	addi r4, r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011BA38 00118B18  90 64 00 28 */	stw r3, 0x28(r4)
.L_8011BA3C:
/* 8011BA3C 00118B1C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8011BA40 00118B20  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8011BA44 00118B24  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8011BA48 00118B28  7C 08 03 A6 */	mtlr r0
/* 8011BA4C 00118B2C  38 21 00 20 */	addi r1, r1, 0x20
/* 8011BA50 00118B30  4E 80 00 20 */	blr
.endfn init__9oob_stateFv

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::drop_state_type::drop_state_type()
.fn "__ct__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFv", local
/* 8011BA54 00118B34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011BA58 00118B38  7C 08 02 A6 */	mflr r0
/* 8011BA5C 00118B3C  38 80 00 03 */	li r4, 0x3
/* 8011BA60 00118B40  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011BA64 00118B44  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011BA68 00118B48  7C 7F 1B 78 */	mr r31, r3
/* 8011BA6C 00118B4C  48 00 05 01 */	bl "__ct__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@10state_typeFQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@10state_enum"
/* 8011BA70 00118B50  3C 80 80 29 */	lis r4, "__vt__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_type"@ha
/* 8011BA74 00118B54  3C 60 80 12 */	lis r3, "supdate_moving_in__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeR6xSceneRf"@ha
/* 8011BA78 00118B58  38 04 7F 68 */	addi r0, r4, "__vt__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_type"@l
/* 8011BA7C 00118B5C  3C 80 80 12 */	lis r4, "supdate_stopping__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeR6xSceneRf"@ha
/* 8011BA80 00118B60  90 1F 00 04 */	stw r0, 0x4(r31)
/* 8011BA84 00118B64  38 03 BE 3C */	addi r0, r3, "supdate_moving_in__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeR6xSceneRf"@l
/* 8011BA88 00118B68  3C 60 80 12 */	lis r3, "supdate_stopped__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeR6xSceneRf"@ha
/* 8011BA8C 00118B6C  3C C0 80 12 */	lis r6, "supdate_starting__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeR6xSceneRf"@ha
/* 8011BA90 00118B70  90 1F 00 28 */	stw r0, 0x28(r31)
/* 8011BA94 00118B74  38 04 BD 88 */	addi r0, r4, "supdate_stopping__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeR6xSceneRf"@l
/* 8011BA98 00118B78  3C A0 80 12 */	lis r5, "supdate_moving_out__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeR6xSceneRf"@ha
/* 8011BA9C 00118B7C  3C 80 80 12 */	lis r4, "supdate_start_fade_in__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeR6xSceneRf"@ha
/* 8011BAA0 00118B80  90 1F 00 2C */	stw r0, 0x2c(r31)
/* 8011BAA4 00118B84  38 03 BC FC */	addi r0, r3, "supdate_stopped__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeR6xSceneRf"@l
/* 8011BAA8 00118B88  3C 60 80 12 */	lis r3, "supdate_fade_in__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeR6xSceneRf"@ha
/* 8011BAAC 00118B8C  38 C6 BC 7C */	addi r6, r6, "supdate_starting__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeR6xSceneRf"@l
/* 8011BAB0 00118B90  90 1F 00 30 */	stw r0, 0x30(r31)
/* 8011BAB4 00118B94  38 A5 BB D4 */	addi r5, r5, "supdate_moving_out__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeR6xSceneRf"@l
/* 8011BAB8 00118B98  38 84 BB 78 */	addi r4, r4, "supdate_start_fade_in__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeR6xSceneRf"@l
/* 8011BABC 00118B9C  38 03 BA E8 */	addi r0, r3, "supdate_fade_in__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeR6xSceneRf"@l
/* 8011BAC0 00118BA0  90 DF 00 34 */	stw r6, 0x34(r31)
/* 8011BAC4 00118BA4  7F E3 FB 78 */	mr r3, r31
/* 8011BAC8 00118BA8  90 BF 00 38 */	stw r5, 0x38(r31)
/* 8011BACC 00118BAC  90 9F 00 3C */	stw r4, 0x3c(r31)
/* 8011BAD0 00118BB0  90 1F 00 40 */	stw r0, 0x40(r31)
/* 8011BAD4 00118BB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011BAD8 00118BB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011BADC 00118BBC  7C 08 03 A6 */	mtlr r0
/* 8011BAE0 00118BC0  38 21 00 10 */	addi r1, r1, 0x10
/* 8011BAE4 00118BC4  4E 80 00 20 */	blr
.endfn "__ct__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFv"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::drop_state_type::supdate_fade_in(oob_state::@unnamed@zEntPlayerOOBState_cpp@::drop_state_type&, xScene&, float&)
.fn "supdate_fade_in__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeR6xSceneRf", local
/* 8011BAE8 00118BC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011BAEC 00118BCC  7C 08 02 A6 */	mflr r0
/* 8011BAF0 00118BD0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011BAF4 00118BD4  48 00 00 15 */	bl "update_fade_in__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFR6xSceneRf"
/* 8011BAF8 00118BD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011BAFC 00118BDC  7C 08 03 A6 */	mtlr r0
/* 8011BB00 00118BE0  38 21 00 10 */	addi r1, r1, 0x10
/* 8011BB04 00118BE4  4E 80 00 20 */	blr
.endfn "supdate_fade_in__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::drop_state_type::update_fade_in(xScene&, float&)
.fn "update_fade_in__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFR6xSceneRf", local
/* 8011BB08 00118BE8  C0 23 00 24 */	lfs f1, 0x24(r3)
/* 8011BB0C 00118BEC  3C C0 80 31 */	lis r6, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011BB10 00118BF0  C0 05 00 00 */	lfs f0, 0x0(r5)
/* 8011BB14 00118BF4  3C 80 80 29 */	lis r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011BB18 00118BF8  38 C6 45 30 */	addi r6, r6, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011BB1C 00118BFC  EC 01 00 28 */	fsubs f0, f1, f0
/* 8011BB20 00118C00  38 84 7E 48 */	addi r4, r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011BB24 00118C04  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 8011BB28 00118C08  C0 23 00 24 */	lfs f1, 0x24(r3)
/* 8011BB2C 00118C0C  C0 06 00 64 */	lfs f0, 0x64(r6)
/* 8011BB30 00118C10  C0 42 9F B8 */	lfs f2, "@1041"@sda21(r2)
/* 8011BB34 00118C14  EC 01 00 24 */	fdivs f0, f1, f0
/* 8011BB38 00118C18  EC 02 00 28 */	fsubs f0, f2, f0
/* 8011BB3C 00118C1C  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8011BB40 00118C20  D0 04 00 3C */	stfs f0, 0x3c(r4)
/* 8011BB44 00118C24  40 81 00 08 */	ble .L_8011BB4C
/* 8011BB48 00118C28  D0 44 00 3C */	stfs f2, 0x3c(r4)
.L_8011BB4C:
/* 8011BB4C 00118C2C  C0 23 00 24 */	lfs f1, 0x24(r3)
/* 8011BB50 00118C30  C0 02 9F A8 */	lfs f0, "@1033"@sda21(r2)
/* 8011BB54 00118C34  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011BB58 00118C38  40 81 00 0C */	ble .L_8011BB64
/* 8011BB5C 00118C3C  38 60 00 06 */	li r3, 0x6
/* 8011BB60 00118C40  4E 80 00 20 */	blr
.L_8011BB64:
/* 8011BB64 00118C44  C0 05 00 00 */	lfs f0, 0x0(r5)
/* 8011BB68 00118C48  38 60 FF FF */	li r3, -0x1
/* 8011BB6C 00118C4C  EC 00 08 2A */	fadds f0, f0, f1
/* 8011BB70 00118C50  D0 05 00 00 */	stfs f0, 0x0(r5)
/* 8011BB74 00118C54  4E 80 00 20 */	blr
.endfn "update_fade_in__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::drop_state_type::supdate_start_fade_in(oob_state::@unnamed@zEntPlayerOOBState_cpp@::drop_state_type&, xScene&, float&)
.fn "supdate_start_fade_in__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeR6xSceneRf", local
/* 8011BB78 00118C58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011BB7C 00118C5C  7C 08 02 A6 */	mflr r0
/* 8011BB80 00118C60  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011BB84 00118C64  48 00 00 15 */	bl "update_start_fade_in__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFR6xSceneRf"
/* 8011BB88 00118C68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011BB8C 00118C6C  7C 08 03 A6 */	mtlr r0
/* 8011BB90 00118C70  38 21 00 10 */	addi r1, r1, 0x10
/* 8011BB94 00118C74  4E 80 00 20 */	blr
.endfn "supdate_start_fade_in__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::drop_state_type::update_start_fade_in(xScene&, float&)
.fn "update_start_fade_in__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFR6xSceneRf", local
/* 8011BB98 00118C78  C0 23 00 20 */	lfs f1, 0x20(r3)
/* 8011BB9C 00118C7C  C0 05 00 00 */	lfs f0, 0x0(r5)
/* 8011BBA0 00118C80  EC 01 00 28 */	fsubs f0, f1, f0
/* 8011BBA4 00118C84  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 8011BBA8 00118C88  C0 23 00 20 */	lfs f1, 0x20(r3)
/* 8011BBAC 00118C8C  C0 02 9F A8 */	lfs f0, "@1033"@sda21(r2)
/* 8011BBB0 00118C90  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011BBB4 00118C94  40 81 00 0C */	ble .L_8011BBC0
/* 8011BBB8 00118C98  38 60 00 05 */	li r3, 0x5
/* 8011BBBC 00118C9C  4E 80 00 20 */	blr
.L_8011BBC0:
/* 8011BBC0 00118CA0  C0 05 00 00 */	lfs f0, 0x0(r5)
/* 8011BBC4 00118CA4  38 60 00 06 */	li r3, 0x6
/* 8011BBC8 00118CA8  EC 00 08 2A */	fadds f0, f0, f1
/* 8011BBCC 00118CAC  D0 05 00 00 */	stfs f0, 0x0(r5)
/* 8011BBD0 00118CB0  4E 80 00 20 */	blr
.endfn "update_start_fade_in__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::drop_state_type::supdate_moving_out(oob_state::@unnamed@zEntPlayerOOBState_cpp@::drop_state_type&, xScene&, float&)
.fn "supdate_moving_out__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeR6xSceneRf", local
/* 8011BBD4 00118CB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011BBD8 00118CB8  7C 08 02 A6 */	mflr r0
/* 8011BBDC 00118CBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011BBE0 00118CC0  48 00 00 15 */	bl "update_moving_out__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFR6xSceneRf"
/* 8011BBE4 00118CC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011BBE8 00118CC8  7C 08 03 A6 */	mtlr r0
/* 8011BBEC 00118CCC  38 21 00 10 */	addi r1, r1, 0x10
/* 8011BBF0 00118CD0  4E 80 00 20 */	blr
.endfn "supdate_moving_out__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::drop_state_type::update_moving_out(xScene&, float&)
.fn "update_moving_out__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFR6xSceneRf", local
/* 8011BBF4 00118CD4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8011BBF8 00118CD8  7C 08 02 A6 */	mflr r0
/* 8011BBFC 00118CDC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8011BC00 00118CE0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8011BC04 00118CE4  7C BF 2B 78 */	mr r31, r5
/* 8011BC08 00118CE8  C0 25 00 00 */	lfs f1, 0x0(r5)
/* 8011BC0C 00118CEC  4B FF F3 81 */	bl "move_hand__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@Ff"
/* 8011BC10 00118CF0  3C 80 80 29 */	lis r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011BC14 00118CF4  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011BC18 00118CF8  38 A4 7E 48 */	addi r5, r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011BC1C 00118CFC  38 83 45 30 */	addi r4, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011BC20 00118D00  38 65 00 2C */	addi r3, r5, 0x2c
/* 8011BC24 00118D04  38 84 00 24 */	addi r4, r4, 0x24
/* 8011BC28 00118D08  4B EF 9D 4D */	bl __mi__5xVec2CFRC5xVec2
/* 8011BC2C 00118D0C  3C A0 80 29 */	lis r5, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011BC30 00118D10  90 61 00 08 */	stw r3, 0x8(r1)
/* 8011BC34 00118D14  38 A5 7E 48 */	addi r5, r5, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011BC38 00118D18  38 61 00 08 */	addi r3, r1, 0x8
/* 8011BC3C 00118D1C  90 81 00 0C */	stw r4, 0xc(r1)
/* 8011BC40 00118D20  38 85 00 34 */	addi r4, r5, 0x34
/* 8011BC44 00118D24  48 00 18 7D */	bl dot__5xVec2CFRC5xVec2
/* 8011BC48 00118D28  C0 02 9F A8 */	lfs f0, "@1033"@sda21(r2)
/* 8011BC4C 00118D2C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011BC50 00118D30  4C 41 13 82 */	cror eq, gt, eq
/* 8011BC54 00118D34  40 82 00 0C */	bne .L_8011BC60
/* 8011BC58 00118D38  38 60 00 04 */	li r3, 0x4
/* 8011BC5C 00118D3C  48 00 00 0C */	b .L_8011BC68
.L_8011BC60:
/* 8011BC60 00118D40  D0 1F 00 00 */	stfs f0, 0x0(r31)
/* 8011BC64 00118D44  38 60 FF FF */	li r3, -0x1
.L_8011BC68:
/* 8011BC68 00118D48  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8011BC6C 00118D4C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8011BC70 00118D50  7C 08 03 A6 */	mtlr r0
/* 8011BC74 00118D54  38 21 00 20 */	addi r1, r1, 0x20
/* 8011BC78 00118D58  4E 80 00 20 */	blr
.endfn "update_moving_out__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::drop_state_type::supdate_starting(oob_state::@unnamed@zEntPlayerOOBState_cpp@::drop_state_type&, xScene&, float&)
.fn "supdate_starting__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeR6xSceneRf", local
/* 8011BC7C 00118D5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011BC80 00118D60  7C 08 02 A6 */	mflr r0
/* 8011BC84 00118D64  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011BC88 00118D68  48 00 00 15 */	bl "update_starting__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFR6xSceneRf"
/* 8011BC8C 00118D6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011BC90 00118D70  7C 08 03 A6 */	mtlr r0
/* 8011BC94 00118D74  38 21 00 10 */	addi r1, r1, 0x10
/* 8011BC98 00118D78  4E 80 00 20 */	blr
.endfn "supdate_starting__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::drop_state_type::update_starting(xScene&, float&)
.fn "update_starting__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFR6xSceneRf", local
/* 8011BC9C 00118D7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011BCA0 00118D80  7C 08 02 A6 */	mflr r0
/* 8011BCA4 00118D84  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011BCA8 00118D88  C0 25 00 00 */	lfs f1, 0x0(r5)
/* 8011BCAC 00118D8C  4B FF F2 E1 */	bl "move_hand__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@Ff"
/* 8011BCB0 00118D90  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011BCB4 00118D94  3C 80 80 29 */	lis r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011BCB8 00118D98  38 63 45 30 */	addi r3, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011BCBC 00118D9C  C0 03 00 58 */	lfs f0, 0x58(r3)
/* 8011BCC0 00118DA0  38 84 7E 48 */	addi r4, r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011BCC4 00118DA4  C0 24 00 44 */	lfs f1, 0x44(r4)
/* 8011BCC8 00118DA8  FC 00 00 50 */	fneg f0, f0
/* 8011BCCC 00118DAC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011BCD0 00118DB0  40 81 00 0C */	ble .L_8011BCDC
/* 8011BCD4 00118DB4  38 60 00 03 */	li r3, 0x3
/* 8011BCD8 00118DB8  48 00 00 14 */	b .L_8011BCEC
.L_8011BCDC:
/* 8011BCDC 00118DBC  D0 04 00 44 */	stfs f0, 0x44(r4)
/* 8011BCE0 00118DC0  38 60 00 04 */	li r3, 0x4
/* 8011BCE4 00118DC4  C0 02 9F A8 */	lfs f0, "@1033"@sda21(r2)
/* 8011BCE8 00118DC8  D0 04 00 48 */	stfs f0, 0x48(r4)
.L_8011BCEC:
/* 8011BCEC 00118DCC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011BCF0 00118DD0  7C 08 03 A6 */	mtlr r0
/* 8011BCF4 00118DD4  38 21 00 10 */	addi r1, r1, 0x10
/* 8011BCF8 00118DD8  4E 80 00 20 */	blr
.endfn "update_starting__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::drop_state_type::supdate_stopped(oob_state::@unnamed@zEntPlayerOOBState_cpp@::drop_state_type&, xScene&, float&)
.fn "supdate_stopped__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeR6xSceneRf", local
/* 8011BCFC 00118DDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011BD00 00118DE0  7C 08 02 A6 */	mflr r0
/* 8011BD04 00118DE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011BD08 00118DE8  48 00 00 15 */	bl "update_stopped__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFR6xSceneRf"
/* 8011BD0C 00118DEC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011BD10 00118DF0  7C 08 03 A6 */	mtlr r0
/* 8011BD14 00118DF4  38 21 00 10 */	addi r1, r1, 0x10
/* 8011BD18 00118DF8  4E 80 00 20 */	blr
.endfn "supdate_stopped__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::drop_state_type::update_stopped(xScene&, float&)
.fn "update_stopped__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFR6xSceneRf", local
/* 8011BD1C 00118DFC  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 8011BD20 00118E00  C0 05 00 00 */	lfs f0, 0x0(r5)
/* 8011BD24 00118E04  EC 01 00 28 */	fsubs f0, f1, f0
/* 8011BD28 00118E08  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 8011BD2C 00118E0C  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 8011BD30 00118E10  C0 02 9F A8 */	lfs f0, "@1033"@sda21(r2)
/* 8011BD34 00118E14  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011BD38 00118E18  40 81 00 0C */	ble .L_8011BD44
/* 8011BD3C 00118E1C  38 60 00 02 */	li r3, 0x2
/* 8011BD40 00118E20  4E 80 00 20 */	blr
.L_8011BD44:
/* 8011BD44 00118E24  C0 05 00 00 */	lfs f0, 0x0(r5)
/* 8011BD48 00118E28  3C C0 80 31 */	lis r6, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011BD4C 00118E2C  3C 80 80 29 */	lis r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011BD50 00118E30  38 60 00 03 */	li r3, 0x3
/* 8011BD54 00118E34  EC 00 08 2A */	fadds f0, f0, f1
/* 8011BD58 00118E38  38 C6 45 30 */	addi r6, r6, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011BD5C 00118E3C  38 84 7E 48 */	addi r4, r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011BD60 00118E40  D0 05 00 00 */	stfs f0, 0x0(r5)
/* 8011BD64 00118E44  C0 66 00 58 */	lfs f3, 0x58(r6)
/* 8011BD68 00118E48  C0 22 9F E8 */	lfs f1, "@1538"@sda21(r2)
/* 8011BD6C 00118E4C  FC 40 18 50 */	fneg f2, f3
/* 8011BD70 00118E50  C0 06 00 5C */	lfs f0, 0x5c(r6)
/* 8011BD74 00118E54  EC 01 00 32 */	fmuls f0, f1, f0
/* 8011BD78 00118E58  EC 22 00 F2 */	fmuls f1, f2, f3
/* 8011BD7C 00118E5C  EC 01 00 24 */	fdivs f0, f1, f0
/* 8011BD80 00118E60  D0 04 00 48 */	stfs f0, 0x48(r4)
/* 8011BD84 00118E64  4E 80 00 20 */	blr
.endfn "update_stopped__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::drop_state_type::supdate_stopping(oob_state::@unnamed@zEntPlayerOOBState_cpp@::drop_state_type&, xScene&, float&)
.fn "supdate_stopping__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeR6xSceneRf", local
/* 8011BD88 00118E68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011BD8C 00118E6C  7C 08 02 A6 */	mflr r0
/* 8011BD90 00118E70  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011BD94 00118E74  48 00 00 15 */	bl "update_stopping__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFR6xSceneRf"
/* 8011BD98 00118E78  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011BD9C 00118E7C  7C 08 03 A6 */	mtlr r0
/* 8011BDA0 00118E80  38 21 00 10 */	addi r1, r1, 0x10
/* 8011BDA4 00118E84  4E 80 00 20 */	blr
.endfn "supdate_stopping__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::drop_state_type::update_stopping(xScene&, float&)
.fn "update_stopping__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFR6xSceneRf", local
/* 8011BDA8 00118E88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011BDAC 00118E8C  7C 08 02 A6 */	mflr r0
/* 8011BDB0 00118E90  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011BDB4 00118E94  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011BDB8 00118E98  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8011BDBC 00118E9C  7C 7E 1B 78 */	mr r30, r3
/* 8011BDC0 00118EA0  C0 25 00 00 */	lfs f1, 0x0(r5)
/* 8011BDC4 00118EA4  4B FF F1 C9 */	bl "move_hand__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@Ff"
/* 8011BDC8 00118EA8  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011BDCC 00118EAC  C0 02 9F A8 */	lfs f0, "@1033"@sda21(r2)
/* 8011BDD0 00118EB0  3B E3 7E 48 */	addi r31, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011BDD4 00118EB4  C0 3F 00 44 */	lfs f1, 0x44(r31)
/* 8011BDD8 00118EB8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011BDDC 00118EBC  40 81 00 0C */	ble .L_8011BDE8
/* 8011BDE0 00118EC0  38 60 00 01 */	li r3, 0x1
/* 8011BDE4 00118EC4  48 00 00 40 */	b .L_8011BE24
.L_8011BDE8:
/* 8011BDE8 00118EC8  3C 80 80 31 */	lis r4, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011BDEC 00118ECC  38 7F 00 2C */	addi r3, r31, 0x2c
/* 8011BDF0 00118ED0  38 84 45 30 */	addi r4, r4, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011BDF4 00118ED4  38 84 00 1C */	addi r4, r4, 0x1c
/* 8011BDF8 00118ED8  4B F0 9A 01 */	bl __as__5xVec2FRC5xVec2
/* 8011BDFC 00118EDC  C0 02 9F A8 */	lfs f0, "@1033"@sda21(r2)
/* 8011BE00 00118EE0  3C A0 80 29 */	lis r5, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011BE04 00118EE4  3C 80 80 31 */	lis r4, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011BE08 00118EE8  38 60 00 02 */	li r3, 0x2
/* 8011BE0C 00118EEC  38 A5 7E 48 */	addi r5, r5, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011BE10 00118EF0  D0 1F 00 44 */	stfs f0, 0x44(r31)
/* 8011BE14 00118EF4  38 84 45 30 */	addi r4, r4, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011BE18 00118EF8  D0 05 00 48 */	stfs f0, 0x48(r5)
/* 8011BE1C 00118EFC  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 8011BE20 00118F00  D0 1E 00 1C */	stfs f0, 0x1c(r30)
.L_8011BE24:
/* 8011BE24 00118F04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011BE28 00118F08  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011BE2C 00118F0C  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8011BE30 00118F10  7C 08 03 A6 */	mtlr r0
/* 8011BE34 00118F14  38 21 00 10 */	addi r1, r1, 0x10
/* 8011BE38 00118F18  4E 80 00 20 */	blr
.endfn "update_stopping__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::drop_state_type::supdate_moving_in(oob_state::@unnamed@zEntPlayerOOBState_cpp@::drop_state_type&, xScene&, float&)
.fn "supdate_moving_in__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeR6xSceneRf", local
/* 8011BE3C 00118F1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011BE40 00118F20  7C 08 02 A6 */	mflr r0
/* 8011BE44 00118F24  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011BE48 00118F28  48 00 00 15 */	bl "update_moving_in__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFR6xSceneRf"
/* 8011BE4C 00118F2C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011BE50 00118F30  7C 08 03 A6 */	mtlr r0
/* 8011BE54 00118F34  38 21 00 10 */	addi r1, r1, 0x10
/* 8011BE58 00118F38  4E 80 00 20 */	blr
.endfn "supdate_moving_in__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::drop_state_type::update_moving_in(xScene&, float&)
.fn "update_moving_in__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFR6xSceneRf", local
/* 8011BE5C 00118F3C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8011BE60 00118F40  7C 08 02 A6 */	mflr r0
/* 8011BE64 00118F44  90 01 00 34 */	stw r0, 0x34(r1)
/* 8011BE68 00118F48  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8011BE6C 00118F4C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8011BE70 00118F50  C0 25 00 00 */	lfs f1, 0x0(r5)
/* 8011BE74 00118F54  4B FF F1 19 */	bl "move_hand__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@Ff"
/* 8011BE78 00118F58  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011BE7C 00118F5C  38 83 45 30 */	addi r4, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011BE80 00118F60  3B E4 00 1C */	addi r31, r4, 0x1c
/* 8011BE84 00118F64  7F E3 FB 78 */	mr r3, r31
/* 8011BE88 00118F68  38 84 00 24 */	addi r4, r4, 0x24
/* 8011BE8C 00118F6C  4B EF 9A E9 */	bl __mi__5xVec2CFRC5xVec2
/* 8011BE90 00118F70  90 61 00 10 */	stw r3, 0x10(r1)
/* 8011BE94 00118F74  38 61 00 10 */	addi r3, r1, 0x10
/* 8011BE98 00118F78  90 81 00 14 */	stw r4, 0x14(r1)
/* 8011BE9C 00118F7C  48 00 16 41 */	bl normal__5xVec2CFv
/* 8011BEA0 00118F80  3C A0 80 29 */	lis r5, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011BEA4 00118F84  90 61 00 18 */	stw r3, 0x18(r1)
/* 8011BEA8 00118F88  38 A5 7E 48 */	addi r5, r5, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011BEAC 00118F8C  7F E3 FB 78 */	mr r3, r31
/* 8011BEB0 00118F90  90 81 00 1C */	stw r4, 0x1c(r1)
/* 8011BEB4 00118F94  3B C5 00 2C */	addi r30, r5, 0x2c
/* 8011BEB8 00118F98  7F C4 F3 78 */	mr r4, r30
/* 8011BEBC 00118F9C  4B EF 9A B9 */	bl __mi__5xVec2CFRC5xVec2
/* 8011BEC0 00118FA0  90 81 00 0C */	stw r4, 0xc(r1)
/* 8011BEC4 00118FA4  38 81 00 08 */	addi r4, r1, 0x8
/* 8011BEC8 00118FA8  90 61 00 08 */	stw r3, 0x8(r1)
/* 8011BECC 00118FAC  38 61 00 18 */	addi r3, r1, 0x18
/* 8011BED0 00118FB0  48 00 15 F1 */	bl dot__5xVec2CFRC5xVec2
/* 8011BED4 00118FB4  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011BED8 00118FB8  38 63 45 30 */	addi r3, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011BEDC 00118FBC  C0 03 00 34 */	lfs f0, 0x34(r3)
/* 8011BEE0 00118FC0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011BEE4 00118FC4  40 81 00 0C */	ble .L_8011BEF0
/* 8011BEE8 00118FC8  38 60 00 00 */	li r3, 0x0
/* 8011BEEC 00118FCC  48 00 00 68 */	b .L_8011BF54
.L_8011BEF0:
/* 8011BEF0 00118FD0  C0 02 9F A8 */	lfs f0, "@1033"@sda21(r2)
/* 8011BEF4 00118FD4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011BEF8 00118FD8  4C 40 13 82 */	cror eq, lt, eq
/* 8011BEFC 00118FDC  40 82 00 30 */	bne .L_8011BF2C
/* 8011BF00 00118FE0  3C 80 80 29 */	lis r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011BF04 00118FE4  7F C3 F3 78 */	mr r3, r30
/* 8011BF08 00118FE8  38 A4 7E 48 */	addi r5, r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011BF0C 00118FEC  7F E4 FB 78 */	mr r4, r31
/* 8011BF10 00118FF0  D0 05 00 44 */	stfs f0, 0x44(r5)
/* 8011BF14 00118FF4  4B F0 98 E5 */	bl __as__5xVec2FRC5xVec2
/* 8011BF18 00118FF8  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011BF1C 00118FFC  C0 02 9F A8 */	lfs f0, "@1033"@sda21(r2)
/* 8011BF20 00119000  38 63 7E 48 */	addi r3, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011BF24 00119004  D0 03 00 48 */	stfs f0, 0x48(r3)
/* 8011BF28 00119008  48 00 00 28 */	b .L_8011BF50
.L_8011BF2C:
/* 8011BF2C 0011900C  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011BF30 00119010  C0 02 9F E8 */	lfs f0, "@1538"@sda21(r2)
/* 8011BF34 00119014  38 63 7E 48 */	addi r3, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011BF38 00119018  C0 43 00 44 */	lfs f2, 0x44(r3)
/* 8011BF3C 0011901C  EC 00 00 72 */	fmuls f0, f0, f1
/* 8011BF40 00119020  FC 20 10 50 */	fneg f1, f2
/* 8011BF44 00119024  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8011BF48 00119028  EC 01 00 24 */	fdivs f0, f1, f0
/* 8011BF4C 0011902C  D0 03 00 48 */	stfs f0, 0x48(r3)
.L_8011BF50:
/* 8011BF50 00119030  38 60 00 01 */	li r3, 0x1
.L_8011BF54:
/* 8011BF54 00119034  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8011BF58 00119038  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8011BF5C 0011903C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8011BF60 00119040  7C 08 03 A6 */	mtlr r0
/* 8011BF64 00119044  38 21 00 30 */	addi r1, r1, 0x30
/* 8011BF68 00119048  4E 80 00 20 */	blr
.endfn "update_moving_in__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::state_type::state_type(oob_state::@unnamed@zEntPlayerOOBState_cpp@::state_enum)
.fn "__ct__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@10state_typeFQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@10state_enum", local
/* 8011BF6C 0011904C  3C A0 80 29 */	lis r5, "__vt__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@10state_type"@ha
/* 8011BF70 00119050  38 05 7F 54 */	addi r0, r5, "__vt__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@10state_type"@l
/* 8011BF74 00119054  90 03 00 04 */	stw r0, 0x4(r3)
/* 8011BF78 00119058  90 83 00 00 */	stw r4, 0x0(r3)
/* 8011BF7C 0011905C  4E 80 00 20 */	blr
.endfn "__ct__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@10state_typeFQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@10state_enum"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type::grab_state_type()
.fn "__ct__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFv", local
/* 8011BF80 00119060  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011BF84 00119064  7C 08 02 A6 */	mflr r0
/* 8011BF88 00119068  38 80 00 02 */	li r4, 0x2
/* 8011BF8C 0011906C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011BF90 00119070  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011BF94 00119074  7C 7F 1B 78 */	mr r31, r3
/* 8011BF98 00119078  4B FF FF D5 */	bl "__ct__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@10state_typeFQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@10state_enum"
/* 8011BF9C 0011907C  3C 60 80 29 */	lis r3, "__vt__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_type"@ha
/* 8011BFA0 00119080  7F E4 FB 78 */	mr r4, r31
/* 8011BFA4 00119084  38 03 7F 40 */	addi r0, r3, "__vt__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_type"@l
/* 8011BFA8 00119088  38 7F 00 08 */	addi r3, r31, 0x8
/* 8011BFAC 0011908C  90 1F 00 04 */	stw r0, 0x4(r31)
/* 8011BFB0 00119090  48 00 06 6D */	bl "__ct__Q49oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_type17tutorial_callbackFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_type"
/* 8011BFB4 00119094  3C 80 80 12 */	lis r4, "supdate_reorient__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf"@ha
/* 8011BFB8 00119098  3C 60 80 12 */	lis r3, "supdate_begin_wait__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf"@ha
/* 8011BFBC 0011909C  38 04 C5 F4 */	addi r0, r4, "supdate_reorient__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf"@l
/* 8011BFC0 001190A0  3C A0 80 12 */	lis r5, "supdate_moving_in__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf"@ha
/* 8011BFC4 001190A4  90 1F 00 40 */	stw r0, 0x40(r31)
/* 8011BFC8 001190A8  38 03 C5 94 */	addi r0, r3, "supdate_begin_wait__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf"@l
/* 8011BFCC 001190AC  3C 80 80 12 */	lis r4, "supdate_stopping__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf"@ha
/* 8011BFD0 001190B0  3C 60 80 12 */	lis r3, "supdate_stopped__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf"@ha
/* 8011BFD4 001190B4  90 1F 00 44 */	stw r0, 0x44(r31)
/* 8011BFD8 001190B8  38 05 C4 64 */	addi r0, r5, "supdate_moving_in__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf"@l
/* 8011BFDC 001190BC  3C E0 80 12 */	lis r7, "supdate_tutorial__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf"@ha
/* 8011BFE0 001190C0  3C C0 80 12 */	lis r6, "supdate_starting__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf"@ha
/* 8011BFE4 001190C4  90 1F 00 48 */	stw r0, 0x48(r31)
/* 8011BFE8 001190C8  38 04 C3 70 */	addi r0, r4, "supdate_stopping__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf"@l
/* 8011BFEC 001190CC  3C A0 80 12 */	lis r5, "supdate_moving_out__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf"@ha
/* 8011BFF0 001190D0  3C 80 80 12 */	lis r4, "supdate_start_fade_out__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf"@ha
/* 8011BFF4 001190D4  90 1F 00 4C */	stw r0, 0x4c(r31)
/* 8011BFF8 001190D8  39 03 C2 E4 */	addi r8, r3, "supdate_stopped__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf"@l
/* 8011BFFC 001190DC  3C 60 80 12 */	lis r3, "supdate_fade_out__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf"@ha
/* 8011C000 001190E0  38 07 C2 54 */	addi r0, r7, "supdate_tutorial__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf"@l
/* 8011C004 001190E4  91 1F 00 50 */	stw r8, 0x50(r31)
/* 8011C008 001190E8  38 C6 C1 D4 */	addi r6, r6, "supdate_starting__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf"@l
/* 8011C00C 001190EC  38 A5 C1 2C */	addi r5, r5, "supdate_moving_out__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf"@l
/* 8011C010 001190F0  38 84 C0 D0 */	addi r4, r4, "supdate_start_fade_out__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf"@l
/* 8011C014 001190F4  90 1F 00 54 */	stw r0, 0x54(r31)
/* 8011C018 001190F8  38 03 C0 44 */	addi r0, r3, "supdate_fade_out__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf"@l
/* 8011C01C 001190FC  7F E3 FB 78 */	mr r3, r31
/* 8011C020 00119100  90 DF 00 58 */	stw r6, 0x58(r31)
/* 8011C024 00119104  90 BF 00 5C */	stw r5, 0x5c(r31)
/* 8011C028 00119108  90 9F 00 60 */	stw r4, 0x60(r31)
/* 8011C02C 0011910C  90 1F 00 64 */	stw r0, 0x64(r31)
/* 8011C030 00119110  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011C034 00119114  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011C038 00119118  7C 08 03 A6 */	mtlr r0
/* 8011C03C 0011911C  38 21 00 10 */	addi r1, r1, 0x10
/* 8011C040 00119120  4E 80 00 20 */	blr
.endfn "__ct__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFv"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type::supdate_fade_out(oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type&, xScene&, float&)
.fn "supdate_fade_out__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf", local
/* 8011C044 00119124  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011C048 00119128  7C 08 02 A6 */	mflr r0
/* 8011C04C 0011912C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011C050 00119130  48 00 00 15 */	bl "update_fade_out__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf"
/* 8011C054 00119134  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011C058 00119138  7C 08 03 A6 */	mtlr r0
/* 8011C05C 0011913C  38 21 00 10 */	addi r1, r1, 0x10
/* 8011C060 00119140  4E 80 00 20 */	blr
.endfn "supdate_fade_out__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type::update_fade_out(xScene&, float&)
.fn "update_fade_out__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf", local
/* 8011C064 00119144  C0 23 00 34 */	lfs f1, 0x34(r3)
/* 8011C068 00119148  3C C0 80 31 */	lis r6, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C06C 0011914C  C0 05 00 00 */	lfs f0, 0x0(r5)
/* 8011C070 00119150  3C 80 80 29 */	lis r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C074 00119154  38 C6 45 30 */	addi r6, r6, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011C078 00119158  EC 01 00 28 */	fsubs f0, f1, f0
/* 8011C07C 0011915C  38 84 7E 48 */	addi r4, r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011C080 00119160  D0 03 00 34 */	stfs f0, 0x34(r3)
/* 8011C084 00119164  C0 23 00 34 */	lfs f1, 0x34(r3)
/* 8011C088 00119168  C0 06 00 48 */	lfs f0, 0x48(r6)
/* 8011C08C 0011916C  EC 21 00 24 */	fdivs f1, f1, f0
/* 8011C090 00119170  D0 24 00 3C */	stfs f1, 0x3c(r4)
/* 8011C094 00119174  C0 02 9F A8 */	lfs f0, "@1033"@sda21(r2)
/* 8011C098 00119178  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011C09C 0011917C  40 80 00 08 */	bge .L_8011C0A4
/* 8011C0A0 00119180  D0 04 00 3C */	stfs f0, 0x3c(r4)
.L_8011C0A4:
/* 8011C0A4 00119184  C0 23 00 34 */	lfs f1, 0x34(r3)
/* 8011C0A8 00119188  C0 02 9F A8 */	lfs f0, "@1033"@sda21(r2)
/* 8011C0AC 0011918C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011C0B0 00119190  40 81 00 0C */	ble .L_8011C0BC
/* 8011C0B4 00119194  38 60 00 09 */	li r3, 0x9
/* 8011C0B8 00119198  4E 80 00 20 */	blr
.L_8011C0BC:
/* 8011C0BC 0011919C  C0 05 00 00 */	lfs f0, 0x0(r5)
/* 8011C0C0 001191A0  38 60 FF FF */	li r3, -0x1
/* 8011C0C4 001191A4  EC 00 08 2A */	fadds f0, f0, f1
/* 8011C0C8 001191A8  D0 05 00 00 */	stfs f0, 0x0(r5)
/* 8011C0CC 001191AC  4E 80 00 20 */	blr
.endfn "update_fade_out__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type::supdate_start_fade_out(oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type&, xScene&, float&)
.fn "supdate_start_fade_out__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf", local
/* 8011C0D0 001191B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011C0D4 001191B4  7C 08 02 A6 */	mflr r0
/* 8011C0D8 001191B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011C0DC 001191BC  48 00 00 15 */	bl "update_start_fade_out__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf"
/* 8011C0E0 001191C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011C0E4 001191C4  7C 08 03 A6 */	mtlr r0
/* 8011C0E8 001191C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8011C0EC 001191CC  4E 80 00 20 */	blr
.endfn "supdate_start_fade_out__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type::update_start_fade_out(xScene&, float&)
.fn "update_start_fade_out__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf", local
/* 8011C0F0 001191D0  C0 23 00 30 */	lfs f1, 0x30(r3)
/* 8011C0F4 001191D4  C0 05 00 00 */	lfs f0, 0x0(r5)
/* 8011C0F8 001191D8  EC 01 00 28 */	fsubs f0, f1, f0
/* 8011C0FC 001191DC  D0 03 00 30 */	stfs f0, 0x30(r3)
/* 8011C100 001191E0  C0 23 00 30 */	lfs f1, 0x30(r3)
/* 8011C104 001191E4  C0 02 9F A8 */	lfs f0, "@1033"@sda21(r2)
/* 8011C108 001191E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011C10C 001191EC  40 81 00 0C */	ble .L_8011C118
/* 8011C110 001191F0  38 60 00 08 */	li r3, 0x8
/* 8011C114 001191F4  4E 80 00 20 */	blr
.L_8011C118:
/* 8011C118 001191F8  C0 05 00 00 */	lfs f0, 0x0(r5)
/* 8011C11C 001191FC  38 60 00 09 */	li r3, 0x9
/* 8011C120 00119200  EC 00 08 2A */	fadds f0, f0, f1
/* 8011C124 00119204  D0 05 00 00 */	stfs f0, 0x0(r5)
/* 8011C128 00119208  4E 80 00 20 */	blr
.endfn "update_start_fade_out__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type::supdate_moving_out(oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type&, xScene&, float&)
.fn "supdate_moving_out__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf", local
/* 8011C12C 0011920C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011C130 00119210  7C 08 02 A6 */	mflr r0
/* 8011C134 00119214  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011C138 00119218  48 00 00 15 */	bl "update_moving_out__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf"
/* 8011C13C 0011921C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011C140 00119220  7C 08 03 A6 */	mtlr r0
/* 8011C144 00119224  38 21 00 10 */	addi r1, r1, 0x10
/* 8011C148 00119228  4E 80 00 20 */	blr
.endfn "supdate_moving_out__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type::update_moving_out(xScene&, float&)
.fn "update_moving_out__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf", local
/* 8011C14C 0011922C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8011C150 00119230  7C 08 02 A6 */	mflr r0
/* 8011C154 00119234  90 01 00 24 */	stw r0, 0x24(r1)
/* 8011C158 00119238  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8011C15C 0011923C  7C BF 2B 78 */	mr r31, r5
/* 8011C160 00119240  C0 25 00 00 */	lfs f1, 0x0(r5)
/* 8011C164 00119244  4B FF EE 29 */	bl "move_hand__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@Ff"
/* 8011C168 00119248  3C 80 80 29 */	lis r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C16C 0011924C  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C170 00119250  38 A4 7E 48 */	addi r5, r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011C174 00119254  38 83 45 30 */	addi r4, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011C178 00119258  38 65 00 2C */	addi r3, r5, 0x2c
/* 8011C17C 0011925C  38 84 00 24 */	addi r4, r4, 0x24
/* 8011C180 00119260  4B EF 97 F5 */	bl __mi__5xVec2CFRC5xVec2
/* 8011C184 00119264  3C A0 80 29 */	lis r5, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C188 00119268  90 61 00 08 */	stw r3, 0x8(r1)
/* 8011C18C 0011926C  38 A5 7E 48 */	addi r5, r5, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011C190 00119270  38 61 00 08 */	addi r3, r1, 0x8
/* 8011C194 00119274  90 81 00 0C */	stw r4, 0xc(r1)
/* 8011C198 00119278  38 85 00 34 */	addi r4, r5, 0x34
/* 8011C19C 0011927C  48 00 13 25 */	bl dot__5xVec2CFRC5xVec2
/* 8011C1A0 00119280  C0 02 9F A8 */	lfs f0, "@1033"@sda21(r2)
/* 8011C1A4 00119284  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011C1A8 00119288  4C 41 13 82 */	cror eq, gt, eq
/* 8011C1AC 0011928C  40 82 00 0C */	bne .L_8011C1B8
/* 8011C1B0 00119290  38 60 00 07 */	li r3, 0x7
/* 8011C1B4 00119294  48 00 00 0C */	b .L_8011C1C0
.L_8011C1B8:
/* 8011C1B8 00119298  D0 1F 00 00 */	stfs f0, 0x0(r31)
/* 8011C1BC 0011929C  38 60 FF FF */	li r3, -0x1
.L_8011C1C0:
/* 8011C1C0 001192A0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8011C1C4 001192A4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8011C1C8 001192A8  7C 08 03 A6 */	mtlr r0
/* 8011C1CC 001192AC  38 21 00 20 */	addi r1, r1, 0x20
/* 8011C1D0 001192B0  4E 80 00 20 */	blr
.endfn "update_moving_out__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type::supdate_starting(oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type&, xScene&, float&)
.fn "supdate_starting__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf", local
/* 8011C1D4 001192B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011C1D8 001192B8  7C 08 02 A6 */	mflr r0
/* 8011C1DC 001192BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011C1E0 001192C0  48 00 00 15 */	bl "update_starting__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf"
/* 8011C1E4 001192C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011C1E8 001192C8  7C 08 03 A6 */	mtlr r0
/* 8011C1EC 001192CC  38 21 00 10 */	addi r1, r1, 0x10
/* 8011C1F0 001192D0  4E 80 00 20 */	blr
.endfn "supdate_starting__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type::update_starting(xScene&, float&)
.fn "update_starting__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf", local
/* 8011C1F4 001192D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011C1F8 001192D8  7C 08 02 A6 */	mflr r0
/* 8011C1FC 001192DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011C200 001192E0  C0 25 00 00 */	lfs f1, 0x0(r5)
/* 8011C204 001192E4  4B FF ED 89 */	bl "move_hand__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@Ff"
/* 8011C208 001192E8  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C20C 001192EC  3C 80 80 29 */	lis r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C210 001192F0  38 63 45 30 */	addi r3, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011C214 001192F4  C0 03 00 3C */	lfs f0, 0x3c(r3)
/* 8011C218 001192F8  38 84 7E 48 */	addi r4, r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011C21C 001192FC  C0 24 00 44 */	lfs f1, 0x44(r4)
/* 8011C220 00119300  FC 00 00 50 */	fneg f0, f0
/* 8011C224 00119304  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011C228 00119308  40 81 00 0C */	ble .L_8011C234
/* 8011C22C 0011930C  38 60 00 06 */	li r3, 0x6
/* 8011C230 00119310  48 00 00 14 */	b .L_8011C244
.L_8011C234:
/* 8011C234 00119314  D0 04 00 44 */	stfs f0, 0x44(r4)
/* 8011C238 00119318  38 60 00 07 */	li r3, 0x7
/* 8011C23C 0011931C  C0 02 9F A8 */	lfs f0, "@1033"@sda21(r2)
/* 8011C240 00119320  D0 04 00 48 */	stfs f0, 0x48(r4)
.L_8011C244:
/* 8011C244 00119324  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011C248 00119328  7C 08 03 A6 */	mtlr r0
/* 8011C24C 0011932C  38 21 00 10 */	addi r1, r1, 0x10
/* 8011C250 00119330  4E 80 00 20 */	blr
.endfn "update_starting__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type::supdate_tutorial(oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type&, xScene&, float&)
.fn "supdate_tutorial__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf", local
/* 8011C254 00119334  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011C258 00119338  7C 08 02 A6 */	mflr r0
/* 8011C25C 0011933C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011C260 00119340  48 00 00 15 */	bl "update_tutorial__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf"
/* 8011C264 00119344  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011C268 00119348  7C 08 03 A6 */	mtlr r0
/* 8011C26C 0011934C  38 21 00 10 */	addi r1, r1, 0x10
/* 8011C270 00119350  4E 80 00 20 */	blr
.endfn "supdate_tutorial__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type::update_tutorial(xScene&, float&)
.fn "update_tutorial__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf", local
/* 8011C274 00119354  C0 23 00 2C */	lfs f1, 0x2c(r3)
/* 8011C278 00119358  C0 05 00 00 */	lfs f0, 0x0(r5)
/* 8011C27C 0011935C  EC 01 00 28 */	fsubs f0, f1, f0
/* 8011C280 00119360  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 8011C284 00119364  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 8011C288 00119368  28 00 00 00 */	cmplwi r0, 0x0
/* 8011C28C 0011936C  41 82 00 14 */	beq .L_8011C2A0
/* 8011C290 00119370  C0 23 00 2C */	lfs f1, 0x2c(r3)
/* 8011C294 00119374  C0 02 9F A8 */	lfs f0, "@1033"@sda21(r2)
/* 8011C298 00119378  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011C29C 0011937C  40 81 00 0C */	ble .L_8011C2A8
.L_8011C2A0:
/* 8011C2A0 00119380  38 60 00 05 */	li r3, 0x5
/* 8011C2A4 00119384  4E 80 00 20 */	blr
.L_8011C2A8:
/* 8011C2A8 00119388  D0 05 00 00 */	stfs f0, 0x0(r5)
/* 8011C2AC 0011938C  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C2B0 00119390  38 A3 45 30 */	addi r5, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011C2B4 00119394  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C2B8 00119398  C0 65 00 3C */	lfs f3, 0x3c(r5)
/* 8011C2BC 0011939C  38 83 7E 48 */	addi r4, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011C2C0 001193A0  C0 22 9F E8 */	lfs f1, "@1538"@sda21(r2)
/* 8011C2C4 001193A4  38 60 00 06 */	li r3, 0x6
/* 8011C2C8 001193A8  FC 40 18 50 */	fneg f2, f3
/* 8011C2CC 001193AC  C0 05 00 40 */	lfs f0, 0x40(r5)
/* 8011C2D0 001193B0  EC 01 00 32 */	fmuls f0, f1, f0
/* 8011C2D4 001193B4  EC 22 00 F2 */	fmuls f1, f2, f3
/* 8011C2D8 001193B8  EC 01 00 24 */	fdivs f0, f1, f0
/* 8011C2DC 001193BC  D0 04 00 48 */	stfs f0, 0x48(r4)
/* 8011C2E0 001193C0  4E 80 00 20 */	blr
.endfn "update_tutorial__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type::supdate_stopped(oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type&, xScene&, float&)
.fn "supdate_stopped__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf", local
/* 8011C2E4 001193C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011C2E8 001193C8  7C 08 02 A6 */	mflr r0
/* 8011C2EC 001193CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011C2F0 001193D0  48 00 00 15 */	bl "update_stopped__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf"
/* 8011C2F4 001193D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011C2F8 001193D8  7C 08 03 A6 */	mtlr r0
/* 8011C2FC 001193DC  38 21 00 10 */	addi r1, r1, 0x10
/* 8011C300 001193E0  4E 80 00 20 */	blr
.endfn "supdate_stopped__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type::update_stopped(xScene&, float&)
.fn "update_stopped__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf", local
/* 8011C304 001193E4  C0 23 00 2C */	lfs f1, 0x2c(r3)
/* 8011C308 001193E8  C0 05 00 00 */	lfs f0, 0x0(r5)
/* 8011C30C 001193EC  EC 01 00 28 */	fsubs f0, f1, f0
/* 8011C310 001193F0  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 8011C314 001193F4  C0 23 00 2C */	lfs f1, 0x2c(r3)
/* 8011C318 001193F8  C0 02 9F A8 */	lfs f0, "@1033"@sda21(r2)
/* 8011C31C 001193FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011C320 00119400  40 81 00 0C */	ble .L_8011C32C
/* 8011C324 00119404  38 60 00 04 */	li r3, 0x4
/* 8011C328 00119408  4E 80 00 20 */	blr
.L_8011C32C:
/* 8011C32C 0011940C  C0 05 00 00 */	lfs f0, 0x0(r5)
/* 8011C330 00119410  3C C0 80 31 */	lis r6, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C334 00119414  3C 80 80 29 */	lis r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C338 00119418  38 60 00 06 */	li r3, 0x6
/* 8011C33C 0011941C  EC 00 08 2A */	fadds f0, f0, f1
/* 8011C340 00119420  38 C6 45 30 */	addi r6, r6, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011C344 00119424  38 84 7E 48 */	addi r4, r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011C348 00119428  D0 05 00 00 */	stfs f0, 0x0(r5)
/* 8011C34C 0011942C  C0 66 00 3C */	lfs f3, 0x3c(r6)
/* 8011C350 00119430  C0 22 9F E8 */	lfs f1, "@1538"@sda21(r2)
/* 8011C354 00119434  FC 40 18 50 */	fneg f2, f3
/* 8011C358 00119438  C0 06 00 40 */	lfs f0, 0x40(r6)
/* 8011C35C 0011943C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8011C360 00119440  EC 22 00 F2 */	fmuls f1, f2, f3
/* 8011C364 00119444  EC 01 00 24 */	fdivs f0, f1, f0
/* 8011C368 00119448  D0 04 00 48 */	stfs f0, 0x48(r4)
/* 8011C36C 0011944C  4E 80 00 20 */	blr
.endfn "update_stopped__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type::supdate_stopping(oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type&, xScene&, float&)
.fn "supdate_stopping__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf", local
/* 8011C370 00119450  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011C374 00119454  7C 08 02 A6 */	mflr r0
/* 8011C378 00119458  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011C37C 0011945C  48 00 00 15 */	bl "update_stopping__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf"
/* 8011C380 00119460  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011C384 00119464  7C 08 03 A6 */	mtlr r0
/* 8011C388 00119468  38 21 00 10 */	addi r1, r1, 0x10
/* 8011C38C 0011946C  4E 80 00 20 */	blr
.endfn "supdate_stopping__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type::update_stopping(xScene&, float&)
.fn "update_stopping__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf", local
/* 8011C390 00119470  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011C394 00119474  7C 08 02 A6 */	mflr r0
/* 8011C398 00119478  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011C39C 0011947C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011C3A0 00119480  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8011C3A4 00119484  7C 7E 1B 78 */	mr r30, r3
/* 8011C3A8 00119488  C0 25 00 00 */	lfs f1, 0x0(r5)
/* 8011C3AC 0011948C  4B FF EB E1 */	bl "move_hand__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@Ff"
/* 8011C3B0 00119490  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C3B4 00119494  C0 02 9F A8 */	lfs f0, "@1033"@sda21(r2)
/* 8011C3B8 00119498  3B E3 7E 48 */	addi r31, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011C3BC 0011949C  C0 3F 00 44 */	lfs f1, 0x44(r31)
/* 8011C3C0 001194A0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011C3C4 001194A4  40 81 00 0C */	ble .L_8011C3D0
/* 8011C3C8 001194A8  38 60 00 03 */	li r3, 0x3
/* 8011C3CC 001194AC  48 00 00 80 */	b .L_8011C44C
.L_8011C3D0:
/* 8011C3D0 001194B0  3C 80 80 31 */	lis r4, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C3D4 001194B4  38 7F 00 2C */	addi r3, r31, 0x2c
/* 8011C3D8 001194B8  38 84 45 30 */	addi r4, r4, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011C3DC 001194BC  38 84 00 1C */	addi r4, r4, 0x1c
/* 8011C3E0 001194C0  4B F0 94 19 */	bl __as__5xVec2FRC5xVec2
/* 8011C3E4 001194C4  C0 02 9F A8 */	lfs f0, "@1033"@sda21(r2)
/* 8011C3E8 001194C8  3C 80 80 29 */	lis r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C3EC 001194CC  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C3F0 001194D0  38 84 7E 48 */	addi r4, r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011C3F4 001194D4  D0 1F 00 44 */	stfs f0, 0x44(r31)
/* 8011C3F8 001194D8  38 63 45 30 */	addi r3, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011C3FC 001194DC  D0 04 00 48 */	stfs f0, 0x48(r4)
/* 8011C400 001194E0  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 8011C404 001194E4  D0 1E 00 2C */	stfs f0, 0x2c(r30)
/* 8011C408 001194E8  4B FF EA 99 */	bl "assume_player_is_stupid__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@Fv"
/* 8011C40C 001194EC  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8011C410 001194F0  41 82 00 38 */	beq .L_8011C448
/* 8011C414 001194F4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8011C418 001194F8  38 63 B4 2C */	addi r3, r3, "@stringBase0"@l
/* 8011C41C 001194FC  38 63 05 03 */	addi r3, r3, 0x503
/* 8011C420 00119500  4B F2 FD F5 */	bl xStrHash__FPCc
/* 8011C424 00119504  3C A0 80 29 */	lis r5, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C428 00119508  7C 64 1B 78 */	mr r4, r3
/* 8011C42C 0011950C  38 65 7E 48 */	addi r3, r5, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011C430 00119510  38 C0 00 00 */	li r6, 0x0
/* 8011C434 00119514  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8011C438 00119518  38 BE 00 08 */	addi r5, r30, 0x8
/* 8011C43C 0011951C  48 01 65 D9 */	bl start_talk__8ztalkboxFUiPQ28ztalkbox8callbackP10zNPCCommon
/* 8011C440 00119520  38 60 00 05 */	li r3, 0x5
/* 8011C444 00119524  48 00 00 08 */	b .L_8011C44C
.L_8011C448:
/* 8011C448 00119528  38 60 00 04 */	li r3, 0x4
.L_8011C44C:
/* 8011C44C 0011952C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011C450 00119530  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011C454 00119534  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8011C458 00119538  7C 08 03 A6 */	mtlr r0
/* 8011C45C 0011953C  38 21 00 10 */	addi r1, r1, 0x10
/* 8011C460 00119540  4E 80 00 20 */	blr
.endfn "update_stopping__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type::supdate_moving_in(oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type&, xScene&, float&)
.fn "supdate_moving_in__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf", local
/* 8011C464 00119544  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011C468 00119548  7C 08 02 A6 */	mflr r0
/* 8011C46C 0011954C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011C470 00119550  48 00 00 15 */	bl "update_moving_in__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf"
/* 8011C474 00119554  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011C478 00119558  7C 08 03 A6 */	mtlr r0
/* 8011C47C 0011955C  38 21 00 10 */	addi r1, r1, 0x10
/* 8011C480 00119560  4E 80 00 20 */	blr
.endfn "supdate_moving_in__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type::update_moving_in(xScene&, float&)
.fn "update_moving_in__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf", local
/* 8011C484 00119564  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8011C488 00119568  7C 08 02 A6 */	mflr r0
/* 8011C48C 0011956C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8011C490 00119570  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8011C494 00119574  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8011C498 00119578  C0 25 00 00 */	lfs f1, 0x0(r5)
/* 8011C49C 0011957C  4B FF EA F1 */	bl "move_hand__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@Ff"
/* 8011C4A0 00119580  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C4A4 00119584  38 83 45 30 */	addi r4, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011C4A8 00119588  3B E4 00 1C */	addi r31, r4, 0x1c
/* 8011C4AC 0011958C  7F E3 FB 78 */	mr r3, r31
/* 8011C4B0 00119590  38 84 00 24 */	addi r4, r4, 0x24
/* 8011C4B4 00119594  4B EF 94 C1 */	bl __mi__5xVec2CFRC5xVec2
/* 8011C4B8 00119598  90 61 00 10 */	stw r3, 0x10(r1)
/* 8011C4BC 0011959C  38 61 00 10 */	addi r3, r1, 0x10
/* 8011C4C0 001195A0  90 81 00 14 */	stw r4, 0x14(r1)
/* 8011C4C4 001195A4  48 00 10 19 */	bl normal__5xVec2CFv
/* 8011C4C8 001195A8  3C A0 80 29 */	lis r5, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C4CC 001195AC  90 61 00 18 */	stw r3, 0x18(r1)
/* 8011C4D0 001195B0  38 A5 7E 48 */	addi r5, r5, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011C4D4 001195B4  7F E3 FB 78 */	mr r3, r31
/* 8011C4D8 001195B8  90 81 00 1C */	stw r4, 0x1c(r1)
/* 8011C4DC 001195BC  3B C5 00 2C */	addi r30, r5, 0x2c
/* 8011C4E0 001195C0  7F C4 F3 78 */	mr r4, r30
/* 8011C4E4 001195C4  4B EF 94 91 */	bl __mi__5xVec2CFRC5xVec2
/* 8011C4E8 001195C8  90 81 00 0C */	stw r4, 0xc(r1)
/* 8011C4EC 001195CC  38 81 00 08 */	addi r4, r1, 0x8
/* 8011C4F0 001195D0  90 61 00 08 */	stw r3, 0x8(r1)
/* 8011C4F4 001195D4  38 61 00 18 */	addi r3, r1, 0x18
/* 8011C4F8 001195D8  48 00 0F C9 */	bl dot__5xVec2CFRC5xVec2
/* 8011C4FC 001195DC  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C500 001195E0  38 63 45 30 */	addi r3, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011C504 001195E4  C0 03 00 34 */	lfs f0, 0x34(r3)
/* 8011C508 001195E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011C50C 001195EC  40 81 00 0C */	ble .L_8011C518
/* 8011C510 001195F0  38 60 00 02 */	li r3, 0x2
/* 8011C514 001195F4  48 00 00 68 */	b .L_8011C57C
.L_8011C518:
/* 8011C518 001195F8  C0 02 9F A8 */	lfs f0, "@1033"@sda21(r2)
/* 8011C51C 001195FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011C520 00119600  4C 40 13 82 */	cror eq, lt, eq
/* 8011C524 00119604  40 82 00 30 */	bne .L_8011C554
/* 8011C528 00119608  3C 80 80 29 */	lis r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C52C 0011960C  7F C3 F3 78 */	mr r3, r30
/* 8011C530 00119610  38 A4 7E 48 */	addi r5, r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011C534 00119614  7F E4 FB 78 */	mr r4, r31
/* 8011C538 00119618  D0 05 00 44 */	stfs f0, 0x44(r5)
/* 8011C53C 0011961C  4B F0 92 BD */	bl __as__5xVec2FRC5xVec2
/* 8011C540 00119620  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C544 00119624  C0 02 9F A8 */	lfs f0, "@1033"@sda21(r2)
/* 8011C548 00119628  38 63 7E 48 */	addi r3, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011C54C 0011962C  D0 03 00 48 */	stfs f0, 0x48(r3)
/* 8011C550 00119630  48 00 00 28 */	b .L_8011C578
.L_8011C554:
/* 8011C554 00119634  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C558 00119638  C0 02 9F E8 */	lfs f0, "@1538"@sda21(r2)
/* 8011C55C 0011963C  38 63 7E 48 */	addi r3, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011C560 00119640  C0 43 00 44 */	lfs f2, 0x44(r3)
/* 8011C564 00119644  EC 00 00 72 */	fmuls f0, f0, f1
/* 8011C568 00119648  FC 20 10 50 */	fneg f1, f2
/* 8011C56C 0011964C  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8011C570 00119650  EC 01 00 24 */	fdivs f0, f1, f0
/* 8011C574 00119654  D0 03 00 48 */	stfs f0, 0x48(r3)
.L_8011C578:
/* 8011C578 00119658  38 60 00 03 */	li r3, 0x3
.L_8011C57C:
/* 8011C57C 0011965C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8011C580 00119660  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8011C584 00119664  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8011C588 00119668  7C 08 03 A6 */	mtlr r0
/* 8011C58C 0011966C  38 21 00 30 */	addi r1, r1, 0x30
/* 8011C590 00119670  4E 80 00 20 */	blr
.endfn "update_moving_in__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type::supdate_begin_wait(oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type&, xScene&, float&)
.fn "supdate_begin_wait__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf", local
/* 8011C594 00119674  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011C598 00119678  7C 08 02 A6 */	mflr r0
/* 8011C59C 0011967C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011C5A0 00119680  48 00 00 15 */	bl "update_begin_wait__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf"
/* 8011C5A4 00119684  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011C5A8 00119688  7C 08 03 A6 */	mtlr r0
/* 8011C5AC 0011968C  38 21 00 10 */	addi r1, r1, 0x10
/* 8011C5B0 00119690  4E 80 00 20 */	blr
.endfn "supdate_begin_wait__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type::update_begin_wait(xScene&, float&)
.fn "update_begin_wait__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf", local
/* 8011C5B4 00119694  C0 23 00 2C */	lfs f1, 0x2c(r3)
/* 8011C5B8 00119698  C0 05 00 00 */	lfs f0, 0x0(r5)
/* 8011C5BC 0011969C  EC 01 00 28 */	fsubs f0, f1, f0
/* 8011C5C0 001196A0  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 8011C5C4 001196A4  C0 23 00 2C */	lfs f1, 0x2c(r3)
/* 8011C5C8 001196A8  C0 02 9F A8 */	lfs f0, "@1033"@sda21(r2)
/* 8011C5CC 001196AC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011C5D0 001196B0  40 81 00 0C */	ble .L_8011C5DC
/* 8011C5D4 001196B4  38 60 00 01 */	li r3, 0x1
/* 8011C5D8 001196B8  4E 80 00 20 */	blr
.L_8011C5DC:
/* 8011C5DC 001196BC  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C5E0 001196C0  38 00 00 01 */	li r0, 0x1
/* 8011C5E4 001196C4  38 83 7E 48 */	addi r4, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011C5E8 001196C8  38 60 00 02 */	li r3, 0x2
/* 8011C5EC 001196CC  98 04 00 40 */	stb r0, 0x40(r4)
/* 8011C5F0 001196D0  4E 80 00 20 */	blr
.endfn "update_begin_wait__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type::supdate_reorient(oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type&, xScene&, float&)
.fn "supdate_reorient__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf", local
/* 8011C5F4 001196D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011C5F8 001196D8  7C 08 02 A6 */	mflr r0
/* 8011C5FC 001196DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011C600 001196E0  48 00 00 15 */	bl "update_reorient__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf"
/* 8011C604 001196E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011C608 001196E8  7C 08 03 A6 */	mtlr r0
/* 8011C60C 001196EC  38 21 00 10 */	addi r1, r1, 0x10
/* 8011C610 001196F0  4E 80 00 20 */	blr
.endfn "supdate_reorient__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type::update_reorient(xScene&, float&)
.fn "update_reorient__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf", local
/* 8011C614 001196F4  38 60 00 01 */	li r3, 0x1
/* 8011C618 001196F8  4E 80 00 20 */	blr
.endfn "update_reorient__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type::tutorial_callback::tutorial_callback(oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type&)
.fn "__ct__Q49oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_type17tutorial_callbackFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_type", local
/* 8011C61C 001196FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011C620 00119700  7C 08 02 A6 */	mflr r0
/* 8011C624 00119704  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011C628 00119708  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011C62C 0011970C  7C 9F 23 78 */	mr r31, r4
/* 8011C630 00119710  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8011C634 00119714  7C 7E 1B 78 */	mr r30, r3
/* 8011C638 00119718  48 00 00 31 */	bl __ct__Q28ztalkbox8callbackFv
/* 8011C63C 0011971C  3C 80 80 29 */	lis r4, "__vt__Q49oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_type17tutorial_callback"@ha
/* 8011C640 00119720  7F C3 F3 78 */	mr r3, r30
/* 8011C644 00119724  38 04 7F 28 */	addi r0, r4, "__vt__Q49oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_type17tutorial_callback"@l
/* 8011C648 00119728  90 1E 00 00 */	stw r0, 0x0(r30)
/* 8011C64C 0011972C  93 FE 00 04 */	stw r31, 0x4(r30)
/* 8011C650 00119730  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011C654 00119734  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8011C658 00119738  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011C65C 0011973C  7C 08 03 A6 */	mtlr r0
/* 8011C660 00119740  38 21 00 10 */	addi r1, r1, 0x10
/* 8011C664 00119744  4E 80 00 20 */	blr
.endfn "__ct__Q49oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_type17tutorial_callbackFRQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_type"

# ztalkbox::callback::callback()
.fn __ct__Q28ztalkbox8callbackFv, weak
/* 8011C668 00119748  3C 80 80 29 */	lis r4, __vt__Q28ztalkbox8callback@ha
/* 8011C66C 0011974C  38 04 7F 10 */	addi r0, r4, __vt__Q28ztalkbox8callback@l
/* 8011C670 00119750  90 03 00 00 */	stw r0, 0x0(r3)
/* 8011C674 00119754  4E 80 00 20 */	blr
.endfn __ct__Q28ztalkbox8callbackFv

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::out_state_type::out_state_type()
.fn "__ct__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@14out_state_typeFv", local
/* 8011C678 00119758  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011C67C 0011975C  7C 08 02 A6 */	mflr r0
/* 8011C680 00119760  38 80 00 01 */	li r4, 0x1
/* 8011C684 00119764  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011C688 00119768  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011C68C 0011976C  7C 7F 1B 78 */	mr r31, r3
/* 8011C690 00119770  4B FF F8 DD */	bl "__ct__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@10state_typeFQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@10state_enum"
/* 8011C694 00119774  3C 80 80 29 */	lis r4, "__vt__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@14out_state_type"@ha
/* 8011C698 00119778  7F E3 FB 78 */	mr r3, r31
/* 8011C69C 0011977C  38 04 7E FC */	addi r0, r4, "__vt__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@14out_state_type"@l
/* 8011C6A0 00119780  90 1F 00 04 */	stw r0, 0x4(r31)
/* 8011C6A4 00119784  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011C6A8 00119788  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011C6AC 0011978C  7C 08 03 A6 */	mtlr r0
/* 8011C6B0 00119790  38 21 00 10 */	addi r1, r1, 0x10
/* 8011C6B4 00119794  4E 80 00 20 */	blr
.endfn "__ct__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@14out_state_typeFv"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::in_state_type::in_state_type()
.fn "__ct__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@13in_state_typeFv", local
/* 8011C6B8 00119798  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011C6BC 0011979C  7C 08 02 A6 */	mflr r0
/* 8011C6C0 001197A0  38 80 00 00 */	li r4, 0x0
/* 8011C6C4 001197A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011C6C8 001197A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011C6CC 001197AC  7C 7F 1B 78 */	mr r31, r3
/* 8011C6D0 001197B0  4B FF F8 9D */	bl "__ct__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@10state_typeFQ39oob_state32@unnamed@zEntPlayerOOBState_cpp@10state_enum"
/* 8011C6D4 001197B4  3C 80 80 29 */	lis r4, "__vt__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@13in_state_type"@ha
/* 8011C6D8 001197B8  7F E3 FB 78 */	mr r3, r31
/* 8011C6DC 001197BC  38 04 7E E8 */	addi r0, r4, "__vt__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@13in_state_type"@l
/* 8011C6E0 001197C0  90 1F 00 04 */	stw r0, 0x4(r31)
/* 8011C6E4 001197C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011C6E8 001197C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011C6EC 001197CC  7C 08 03 A6 */	mtlr r0
/* 8011C6F0 001197D0  38 21 00 10 */	addi r1, r1, 0x10
/* 8011C6F4 001197D4  4E 80 00 20 */	blr
.endfn "__ct__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@13in_state_typeFv"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::state_type::start()
.fn "start__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@10state_typeFv", local
/* 8011C6F8 001197D8  4E 80 00 20 */	blr
.endfn "start__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@10state_typeFv"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::state_type::stop()
.fn "stop__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@10state_typeFv", local
/* 8011C6FC 001197DC  4E 80 00 20 */	blr
.endfn "stop__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@10state_typeFv"

# oob_state::update(xScene&, float)
.fn update__9oob_stateFR6xScenef, global
/* 8011C700 001197E0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8011C704 001197E4  7C 08 02 A6 */	mflr r0
/* 8011C708 001197E8  3C 80 80 29 */	lis r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C70C 001197EC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8011C710 001197F0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8011C714 001197F4  7C 7F 1B 78 */	mr r31, r3
/* 8011C718 001197F8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8011C71C 001197FC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8011C720 00119800  80 04 7E 48 */	lwz r0, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l(r4)
/* 8011C724 00119804  D0 21 00 08 */	stfs f1, 0x8(r1)
/* 8011C728 00119808  54 00 07 BE */	clrlwi r0, r0, 30
/* 8011C72C 0011980C  2C 00 00 03 */	cmpwi r0, 0x3
/* 8011C730 00119810  41 82 00 0C */	beq .L_8011C73C
/* 8011C734 00119814  38 60 00 00 */	li r3, 0x0
/* 8011C738 00119818  48 00 00 D8 */	b .L_8011C810
.L_8011C73C:
/* 8011C73C 0011981C  4B F9 30 55 */	bl zSaveLoadGetPreAutoSave__Fv
/* 8011C740 00119820  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8011C744 00119824  41 82 00 0C */	beq .L_8011C750
/* 8011C748 00119828  38 60 00 00 */	li r3, 0x0
/* 8011C74C 0011982C  48 00 00 C4 */	b .L_8011C810
.L_8011C750:
/* 8011C750 00119830  88 0D 95 10 */	lbz r0, oob_player_teleported@sda21(r13)
/* 8011C754 00119834  28 00 00 00 */	cmplwi r0, 0x0
/* 8011C758 00119838  41 82 00 14 */	beq .L_8011C76C
/* 8011C75C 0011983C  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C760 00119840  84 03 7E 48 */	lwzu r0, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l(r3)
/* 8011C764 00119844  54 00 07 76 */	rlwinm r0, r0, 0, 29, 27
/* 8011C768 00119848  90 03 00 00 */	stw r0, 0x0(r3)
.L_8011C76C:
/* 8011C76C 0011984C  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C770 00119850  80 03 7E 48 */	lwz r0, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l(r3)
/* 8011C774 00119854  54 00 07 39 */	rlwinm. r0, r0, 0, 28, 28
/* 8011C778 00119858  41 82 00 1C */	beq .L_8011C794
/* 8011C77C 0011985C  3C 60 80 3C */	lis r3, globals@ha
/* 8011C780 00119860  38 63 05 58 */	addi r3, r3, globals@l
/* 8011C784 00119864  80 03 17 88 */	lwz r0, 0x1788(r3)
/* 8011C788 00119868  54 00 04 21 */	rlwinm. r0, r0, 0, 16, 16
/* 8011C78C 0011986C  40 82 00 08 */	bne .L_8011C794
/* 8011C790 00119870  48 00 01 E5 */	bl force_start__9oob_stateFv
.L_8011C794:
/* 8011C794 00119874  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C798 00119878  3B A3 7E 48 */	addi r29, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
.L_8011C79C:
/* 8011C79C 0011987C  80 7D 00 04 */	lwz r3, 0x4(r29)
/* 8011C7A0 00119880  7F E4 FB 78 */	mr r4, r31
/* 8011C7A4 00119884  38 A1 00 08 */	addi r5, r1, 0x8
/* 8011C7A8 00119888  81 83 00 04 */	lwz r12, 0x4(r3)
/* 8011C7AC 0011988C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8011C7B0 00119890  7D 89 03 A6 */	mtctr r12
/* 8011C7B4 00119894  4E 80 04 21 */	bctrl
/* 8011C7B8 00119898  80 9D 00 04 */	lwz r4, 0x4(r29)
/* 8011C7BC 0011989C  7C 7E 1B 78 */	mr r30, r3
/* 8011C7C0 001198A0  80 04 00 00 */	lwz r0, 0x0(r4)
/* 8011C7C4 001198A4  7C 1E 00 00 */	cmpw r30, r0
/* 8011C7C8 001198A8  41 82 00 3C */	beq .L_8011C804
/* 8011C7CC 001198AC  7C 83 23 78 */	mr r3, r4
/* 8011C7D0 001198B0  81 84 00 04 */	lwz r12, 0x4(r4)
/* 8011C7D4 001198B4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8011C7D8 001198B8  7D 89 03 A6 */	mtctr r12
/* 8011C7DC 001198BC  4E 80 04 21 */	bctrl
/* 8011C7E0 001198C0  57 C0 10 3A */	slwi r0, r30, 2
/* 8011C7E4 001198C4  7C 7D 02 14 */	add r3, r29, r0
/* 8011C7E8 001198C8  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8011C7EC 001198CC  90 7D 00 04 */	stw r3, 0x4(r29)
/* 8011C7F0 001198D0  81 83 00 04 */	lwz r12, 0x4(r3)
/* 8011C7F4 001198D4  81 8C 00 08 */	lwz r12, 0x8(r12)
/* 8011C7F8 001198D8  7D 89 03 A6 */	mtctr r12
/* 8011C7FC 001198DC  4E 80 04 21 */	bctrl
/* 8011C800 001198E0  4B FF FF 9C */	b .L_8011C79C
.L_8011C804:
/* 8011C804 001198E4  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C808 001198E8  38 63 7E 48 */	addi r3, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011C80C 001198EC  88 63 00 08 */	lbz r3, 0x8(r3)
.L_8011C810:
/* 8011C810 001198F0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8011C814 001198F4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8011C818 001198F8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8011C81C 001198FC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8011C820 00119900  7C 08 03 A6 */	mtlr r0
/* 8011C824 00119904  38 21 00 20 */	addi r1, r1, 0x20
/* 8011C828 00119908  4E 80 00 20 */	blr
.endfn update__9oob_stateFR6xScenef

# oob_state::IsPlayerInControl()
.fn IsPlayerInControl__9oob_stateFv, global
/* 8011C82C 0011990C  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C830 00119910  38 63 7E 48 */	addi r3, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011C834 00119914  88 03 00 08 */	lbz r0, 0x8(r3)
/* 8011C838 00119918  7C 00 00 34 */	cntlzw r0, r0
/* 8011C83C 0011991C  54 03 D9 7E */	srwi r3, r0, 5
/* 8011C840 00119920  4E 80 00 20 */	blr
.endfn IsPlayerInControl__9oob_stateFv

# oob_state::oob_timer()
.fn oob_timer__9oob_stateFv, global
/* 8011C844 00119924  3C 80 80 29 */	lis r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C848 00119928  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C84C 0011992C  38 84 7E 48 */	addi r4, r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011C850 00119930  38 63 45 30 */	addi r3, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011C854 00119934  C0 24 00 24 */	lfs f1, 0x24(r4)
/* 8011C858 00119938  C0 03 00 04 */	lfs f0, 0x4(r3)
/* 8011C85C 0011993C  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8011C860 00119940  40 82 00 0C */	bne .L_8011C86C
/* 8011C864 00119944  C0 24 00 1C */	lfs f1, 0x1c(r4)
/* 8011C868 00119948  4E 80 00 20 */	blr
.L_8011C86C:
/* 8011C86C 0011994C  C0 22 9F FC */	lfs f1, "@1716"@sda21(r2)
/* 8011C870 00119950  4E 80 00 20 */	blr
.endfn oob_timer__9oob_stateFv

# oob_state::render()
.fn render__9oob_stateFv, global
/* 8011C874 00119954  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011C878 00119958  7C 08 02 A6 */	mflr r0
/* 8011C87C 0011995C  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C880 00119960  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011C884 00119964  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011C888 00119968  84 03 7E 48 */	lwzu r0, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l(r3)
/* 8011C88C 0011996C  54 00 07 BE */	clrlwi r0, r0, 30
/* 8011C890 00119970  2C 00 00 03 */	cmpwi r0, 0x3
/* 8011C894 00119974  41 82 00 0C */	beq .L_8011C8A0
/* 8011C898 00119978  38 60 00 00 */	li r3, 0x0
/* 8011C89C 0011997C  48 00 00 4C */	b .L_8011C8E8
.L_8011C8A0:
/* 8011C8A0 00119980  88 03 00 08 */	lbz r0, 0x8(r3)
/* 8011C8A4 00119984  28 00 00 00 */	cmplwi r0, 0x0
/* 8011C8A8 00119988  40 82 00 0C */	bne .L_8011C8B4
/* 8011C8AC 0011998C  38 60 00 00 */	li r3, 0x0
/* 8011C8B0 00119990  48 00 00 38 */	b .L_8011C8E8
.L_8011C8B4:
/* 8011C8B4 00119994  3C 60 80 3C */	lis r3, globals@ha
/* 8011C8B8 00119998  3B E3 05 58 */	addi r31, r3, globals@l
/* 8011C8BC 0011999C  80 7F 07 10 */	lwz r3, 0x710(r31)
/* 8011C8C0 001199A0  80 9F 06 58 */	lwz r4, 0x658(r31)
/* 8011C8C4 001199A4  48 00 6B FD */	bl xLightKit_Enable__FP9xLightKitP7RpWorld
/* 8011C8C8 001199A8  3C 60 80 3C */	lis r3, globals@ha
/* 8011C8CC 001199AC  38 63 05 58 */	addi r3, r3, globals@l
/* 8011C8D0 001199B0  38 63 06 E0 */	addi r3, r3, 0x6e0
/* 8011C8D4 001199B4  4B EF CB F9 */	bl xEntRender__FP4xEnt
/* 8011C8D8 001199B8  80 9F 06 58 */	lwz r4, 0x658(r31)
/* 8011C8DC 001199BC  38 60 00 00 */	li r3, 0x0
/* 8011C8E0 001199C0  48 00 6B E1 */	bl xLightKit_Enable__FP9xLightKitP7RpWorld
/* 8011C8E4 001199C4  38 60 00 01 */	li r3, 0x1
.L_8011C8E8:
/* 8011C8E8 001199C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011C8EC 001199CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011C8F0 001199D0  7C 08 03 A6 */	mtlr r0
/* 8011C8F4 001199D4  38 21 00 10 */	addi r1, r1, 0x10
/* 8011C8F8 001199D8  4E 80 00 20 */	blr
.endfn render__9oob_stateFv

# oob_state::fx_render()
.fn fx_render__9oob_stateFv, global
/* 8011C8FC 001199DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011C900 001199E0  7C 08 02 A6 */	mflr r0
/* 8011C904 001199E4  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C908 001199E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011C90C 001199EC  84 03 7E 48 */	lwzu r0, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l(r3)
/* 8011C910 001199F0  54 00 07 BE */	clrlwi r0, r0, 30
/* 8011C914 001199F4  2C 00 00 03 */	cmpwi r0, 0x3
/* 8011C918 001199F8  40 82 00 4C */	bne .L_8011C964
/* 8011C91C 001199FC  88 03 00 08 */	lbz r0, 0x8(r3)
/* 8011C920 00119A00  28 00 00 00 */	cmplwi r0, 0x0
/* 8011C924 00119A04  41 82 00 1C */	beq .L_8011C940
/* 8011C928 00119A08  C0 23 00 3C */	lfs f1, 0x3c(r3)
/* 8011C92C 00119A0C  C0 02 9F B8 */	lfs f0, "@1041"@sda21(r2)
/* 8011C930 00119A10  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011C934 00119A14  40 80 00 0C */	bge .L_8011C940
/* 8011C938 00119A18  4B FF E6 C1 */	bl "render_fade__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@Fv"
/* 8011C93C 00119A1C  4B FF E9 01 */	bl "render_ghost__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@Fv"
.L_8011C940:
/* 8011C940 00119A20  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C944 00119A24  38 63 7E 48 */	addi r3, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011C948 00119A28  88 03 00 40 */	lbz r0, 0x40(r3)
/* 8011C94C 00119A2C  28 00 00 00 */	cmplwi r0, 0x0
/* 8011C950 00119A30  41 82 00 14 */	beq .L_8011C964
/* 8011C954 00119A34  80 03 00 28 */	lwz r0, 0x28(r3)
/* 8011C958 00119A38  28 00 00 00 */	cmplwi r0, 0x0
/* 8011C95C 00119A3C  41 82 00 08 */	beq .L_8011C964
/* 8011C960 00119A40  4B FF EA 01 */	bl "render_hand__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@Fv"
.L_8011C964:
/* 8011C964 00119A44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011C968 00119A48  7C 08 03 A6 */	mtlr r0
/* 8011C96C 00119A4C  38 21 00 10 */	addi r1, r1, 0x10
/* 8011C970 00119A50  4E 80 00 20 */	blr
.endfn fx_render__9oob_stateFv

# oob_state::force_start()
.fn force_start__9oob_stateFv, global
/* 8011C974 00119A54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011C978 00119A58  7C 08 02 A6 */	mflr r0
/* 8011C97C 00119A5C  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C980 00119A60  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011C984 00119A64  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011C988 00119A68  80 03 7E 48 */	lwz r0, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l(r3)
/* 8011C98C 00119A6C  54 00 07 7E */	clrlwi r0, r0, 29
/* 8011C990 00119A70  2C 00 00 03 */	cmpwi r0, 0x3
/* 8011C994 00119A74  40 82 00 8C */	bne .L_8011CA20
/* 8011C998 00119A78  4B FF 5A D5 */	bl active__12bungee_stateFv
/* 8011C99C 00119A7C  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8011C9A0 00119A80  40 82 00 80 */	bne .L_8011CA20
/* 8011C9A4 00119A84  3C 60 80 3C */	lis r3, globals@ha
/* 8011C9A8 00119A88  38 63 05 58 */	addi r3, r3, globals@l
/* 8011C9AC 00119A8C  80 03 17 88 */	lwz r0, 0x1788(r3)
/* 8011C9B0 00119A90  54 00 04 21 */	rlwinm. r0, r0, 0, 16, 16
/* 8011C9B4 00119A94  41 82 00 24 */	beq .L_8011C9D8
/* 8011C9B8 00119A98  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C9BC 00119A9C  38 00 00 00 */	li r0, 0x0
/* 8011C9C0 00119AA0  38 83 7E 48 */	addi r4, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011C9C4 00119AA4  80 64 00 00 */	lwz r3, 0x0(r4)
/* 8011C9C8 00119AA8  60 63 00 08 */	ori r3, r3, 0x8
/* 8011C9CC 00119AAC  90 64 00 00 */	stw r3, 0x0(r4)
/* 8011C9D0 00119AB0  98 0D 95 10 */	stb r0, oob_player_teleported@sda21(r13)
/* 8011C9D4 00119AB4  48 00 00 4C */	b .L_8011CA20
.L_8011C9D8:
/* 8011C9D8 00119AB8  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011C9DC 00119ABC  3B E3 7E 48 */	addi r31, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011C9E0 00119AC0  80 1F 00 00 */	lwz r0, 0x0(r31)
/* 8011C9E4 00119AC4  80 7F 00 04 */	lwz r3, 0x4(r31)
/* 8011C9E8 00119AC8  54 00 07 76 */	rlwinm r0, r0, 0, 29, 27
/* 8011C9EC 00119ACC  90 1F 00 00 */	stw r0, 0x0(r31)
/* 8011C9F0 00119AD0  81 83 00 04 */	lwz r12, 0x4(r3)
/* 8011C9F4 00119AD4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8011C9F8 00119AD8  7D 89 03 A6 */	mtctr r12
/* 8011C9FC 00119ADC  4E 80 04 21 */	bctrl
/* 8011CA00 00119AE0  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011CA04 00119AE4  38 63 7E 48 */	addi r3, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011CA08 00119AE8  80 63 00 14 */	lwz r3, 0x14(r3)
/* 8011CA0C 00119AEC  90 7F 00 04 */	stw r3, 0x4(r31)
/* 8011CA10 00119AF0  81 83 00 04 */	lwz r12, 0x4(r3)
/* 8011CA14 00119AF4  81 8C 00 08 */	lwz r12, 0x8(r12)
/* 8011CA18 00119AF8  7D 89 03 A6 */	mtctr r12
/* 8011CA1C 00119AFC  4E 80 04 21 */	bctrl
.L_8011CA20:
/* 8011CA20 00119B00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011CA24 00119B04  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011CA28 00119B08  7C 08 03 A6 */	mtlr r0
/* 8011CA2C 00119B0C  38 21 00 10 */	addi r1, r1, 0x10
/* 8011CA30 00119B10  4E 80 00 20 */	blr
.endfn force_start__9oob_stateFv

# oob_state::read_persistent(xSerial&)
.fn read_persistent__9oob_stateFR7xSerial, global
/* 8011CA34 00119B14  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8011CA38 00119B18  7C 08 02 A6 */	mflr r0
/* 8011CA3C 00119B1C  3C 80 80 29 */	lis r4, "idiot_levels__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011CA40 00119B20  90 01 00 24 */	stw r0, 0x24(r1)
/* 8011CA44 00119B24  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8011CA48 00119B28  3B E4 7E B8 */	addi r31, r4, "idiot_levels__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011CA4C 00119B2C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8011CA50 00119B30  3B C0 00 00 */	li r30, 0x0
/* 8011CA54 00119B34  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8011CA58 00119B38  7C 7D 1B 78 */	mr r29, r3
.L_8011CA5C:
/* 8011CA5C 00119B3C  7F A3 EB 78 */	mr r3, r29
/* 8011CA60 00119B40  38 81 00 08 */	addi r4, r1, 0x8
/* 8011CA64 00119B44  4B F2 68 49 */	bl Read_b1__7xSerialFPi
/* 8011CA68 00119B48  80 61 00 08 */	lwz r3, 0x8(r1)
/* 8011CA6C 00119B4C  3B DE 00 01 */	addi r30, r30, 0x1
/* 8011CA70 00119B50  28 1E 00 06 */	cmplwi r30, 0x6
/* 8011CA74 00119B54  7C 03 00 D0 */	neg r0, r3
/* 8011CA78 00119B58  7C 00 1B 78 */	or r0, r0, r3
/* 8011CA7C 00119B5C  54 00 0F FE */	srwi r0, r0, 31
/* 8011CA80 00119B60  98 1F 00 00 */	stb r0, 0x0(r31)
/* 8011CA84 00119B64  3B FF 00 08 */	addi r31, r31, 0x8
/* 8011CA88 00119B68  41 80 FF D4 */	blt .L_8011CA5C
/* 8011CA8C 00119B6C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8011CA90 00119B70  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8011CA94 00119B74  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8011CA98 00119B78  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8011CA9C 00119B7C  7C 08 03 A6 */	mtlr r0
/* 8011CAA0 00119B80  38 21 00 20 */	addi r1, r1, 0x20
/* 8011CAA4 00119B84  4E 80 00 20 */	blr
.endfn read_persistent__9oob_stateFR7xSerial

# oob_state::write_persistent(xSerial&)
.fn write_persistent__9oob_stateFR7xSerial, global
/* 8011CAA8 00119B88  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8011CAAC 00119B8C  7C 08 02 A6 */	mflr r0
/* 8011CAB0 00119B90  3C 80 80 29 */	lis r4, "idiot_levels__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011CAB4 00119B94  90 01 00 24 */	stw r0, 0x24(r1)
/* 8011CAB8 00119B98  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8011CABC 00119B9C  3B E4 7E B8 */	addi r31, r4, "idiot_levels__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011CAC0 00119BA0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8011CAC4 00119BA4  3B C0 00 00 */	li r30, 0x0
/* 8011CAC8 00119BA8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8011CACC 00119BAC  7C 7D 1B 78 */	mr r29, r3
.L_8011CAD0:
/* 8011CAD0 00119BB0  88 9F 00 00 */	lbz r4, 0x0(r31)
/* 8011CAD4 00119BB4  7F A3 EB 78 */	mr r3, r29
/* 8011CAD8 00119BB8  7C 04 00 D0 */	neg r0, r4
/* 8011CADC 00119BBC  7C 00 23 78 */	or r0, r0, r4
/* 8011CAE0 00119BC0  54 04 0F FE */	srwi r4, r0, 31
/* 8011CAE4 00119BC4  4B F2 65 29 */	bl Write_b1__7xSerialFi
/* 8011CAE8 00119BC8  3B DE 00 01 */	addi r30, r30, 0x1
/* 8011CAEC 00119BCC  3B FF 00 08 */	addi r31, r31, 0x8
/* 8011CAF0 00119BD0  28 1E 00 06 */	cmplwi r30, 0x6
/* 8011CAF4 00119BD4  41 80 FF DC */	blt .L_8011CAD0
/* 8011CAF8 00119BD8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8011CAFC 00119BDC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8011CB00 00119BE0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8011CB04 00119BE4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8011CB08 00119BE8  7C 08 03 A6 */	mtlr r0
/* 8011CB0C 00119BEC  38 21 00 20 */	addi r1, r1, 0x20
/* 8011CB10 00119BF0  4E 80 00 20 */	blr
.endfn write_persistent__9oob_stateFR7xSerial

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::in_state_type::start()
.fn "start__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@13in_state_typeFv", local
/* 8011CB14 00119BF4  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011CB18 00119BF8  C0 02 9F A8 */	lfs f0, "@1033"@sda21(r2)
/* 8011CB1C 00119BFC  38 63 7E 48 */	addi r3, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011CB20 00119C00  38 00 00 00 */	li r0, 0x0
/* 8011CB24 00119C04  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 8011CB28 00119C08  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 8011CB2C 00119C0C  98 03 00 08 */	stb r0, 0x8(r3)
/* 8011CB30 00119C10  4E 80 00 20 */	blr
.endfn "start__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@13in_state_typeFv"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::in_state_type::stop()
.fn "stop__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@13in_state_typeFv", local
/* 8011CB34 00119C14  4E 80 00 20 */	blr
.endfn "stop__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@13in_state_typeFv"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::in_state_type::update(xScene&, float&)
.fn "update__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@13in_state_typeFR6xSceneRf", local
/* 8011CB38 00119C18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011CB3C 00119C1C  7C 08 02 A6 */	mflr r0
/* 8011CB40 00119C20  3C 60 80 3C */	lis r3, globals@ha
/* 8011CB44 00119C24  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011CB48 00119C28  38 63 05 58 */	addi r3, r3, globals@l
/* 8011CB4C 00119C2C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011CB50 00119C30  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8011CB54 00119C34  3B C0 00 00 */	li r30, 0x0
/* 8011CB58 00119C38  83 E3 1C 64 */	lwz r31, 0x1c64(r3)
/* 8011CB5C 00119C3C  28 1F 00 00 */	cmplwi r31, 0x0
/* 8011CB60 00119C40  41 82 00 2C */	beq .L_8011CB8C
/* 8011CB64 00119C44  80 03 17 88 */	lwz r0, 0x1788(r3)
/* 8011CB68 00119C48  54 00 04 21 */	rlwinm. r0, r0, 0, 16, 16
/* 8011CB6C 00119C4C  40 82 00 20 */	bne .L_8011CB8C
/* 8011CB70 00119C50  7F E3 FB 78 */	mr r3, r31
/* 8011CB74 00119C54  4B F9 8F 21 */	bl zSurfaceOutOfBounds__FRC8xSurface
/* 8011CB78 00119C58  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8011CB7C 00119C5C  7C 7E 1B 78 */	mr r30, r3
/* 8011CB80 00119C60  41 82 00 0C */	beq .L_8011CB8C
/* 8011CB84 00119C64  7F E3 FB 78 */	mr r3, r31
/* 8011CB88 00119C68  4B FF E2 C5 */	bl "update_max_out_time__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@FRC8xSurface"
.L_8011CB8C:
/* 8011CB8C 00119C6C  57 C0 06 3F */	clrlwi. r0, r30, 24
/* 8011CB90 00119C70  40 82 00 28 */	bne .L_8011CBB8
/* 8011CB94 00119C74  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011CB98 00119C78  C0 02 9F A8 */	lfs f0, "@1033"@sda21(r2)
/* 8011CB9C 00119C7C  38 83 7E 48 */	addi r4, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011CBA0 00119C80  38 00 00 00 */	li r0, 0x0
/* 8011CBA4 00119C84  D0 04 00 24 */	stfs f0, 0x24(r4)
/* 8011CBA8 00119C88  38 60 00 00 */	li r3, 0x0
/* 8011CBAC 00119C8C  D0 04 00 1C */	stfs f0, 0x1c(r4)
/* 8011CBB0 00119C90  98 04 00 08 */	stb r0, 0x8(r4)
/* 8011CBB4 00119C94  48 00 00 08 */	b .L_8011CBBC
.L_8011CBB8:
/* 8011CBB8 00119C98  38 60 00 01 */	li r3, 0x1
.L_8011CBBC:
/* 8011CBBC 00119C9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011CBC0 00119CA0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011CBC4 00119CA4  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8011CBC8 00119CA8  7C 08 03 A6 */	mtlr r0
/* 8011CBCC 00119CAC  38 21 00 10 */	addi r1, r1, 0x10
/* 8011CBD0 00119CB0  4E 80 00 20 */	blr
.endfn "update__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@13in_state_typeFR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::out_state_type::start()
.fn "start__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@14out_state_typeFv", local
/* 8011CBD4 00119CB4  3C 80 80 29 */	lis r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011CBD8 00119CB8  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011CBDC 00119CBC  38 84 7E 48 */	addi r4, r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011CBE0 00119CC0  38 63 45 30 */	addi r3, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011CBE4 00119CC4  C0 24 00 20 */	lfs f1, 0x20(r4)
/* 8011CBE8 00119CC8  C0 03 00 04 */	lfs f0, 0x4(r3)
/* 8011CBEC 00119CCC  D0 24 00 1C */	stfs f1, 0x1c(r4)
/* 8011CBF0 00119CD0  D0 04 00 24 */	stfs f0, 0x24(r4)
/* 8011CBF4 00119CD4  4E 80 00 20 */	blr
.endfn "start__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@14out_state_typeFv"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::out_state_type::stop()
.fn "stop__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@14out_state_typeFv", local
/* 8011CBF8 00119CD8  4E 80 00 20 */	blr
.endfn "stop__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@14out_state_typeFv"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::out_state_type::update(xScene&, float&)
.fn "update__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@14out_state_typeFR6xSceneRf", local
/* 8011CBFC 00119CDC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8011CC00 00119CE0  7C 08 02 A6 */	mflr r0
/* 8011CC04 00119CE4  3C 60 80 3C */	lis r3, globals@ha
/* 8011CC08 00119CE8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8011CC0C 00119CEC  38 63 05 58 */	addi r3, r3, globals@l
/* 8011CC10 00119CF0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8011CC14 00119CF4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8011CC18 00119CF8  3B C0 00 00 */	li r30, 0x0
/* 8011CC1C 00119CFC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8011CC20 00119D00  7C BD 2B 78 */	mr r29, r5
/* 8011CC24 00119D04  83 E3 1C 64 */	lwz r31, 0x1c64(r3)
/* 8011CC28 00119D08  28 1F 00 00 */	cmplwi r31, 0x0
/* 8011CC2C 00119D0C  41 82 00 2C */	beq .L_8011CC58
/* 8011CC30 00119D10  80 03 17 88 */	lwz r0, 0x1788(r3)
/* 8011CC34 00119D14  54 00 04 21 */	rlwinm. r0, r0, 0, 16, 16
/* 8011CC38 00119D18  40 82 00 20 */	bne .L_8011CC58
/* 8011CC3C 00119D1C  7F E3 FB 78 */	mr r3, r31
/* 8011CC40 00119D20  4B F9 8E 55 */	bl zSurfaceOutOfBounds__FRC8xSurface
/* 8011CC44 00119D24  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8011CC48 00119D28  7C 7E 1B 78 */	mr r30, r3
/* 8011CC4C 00119D2C  41 82 00 0C */	beq .L_8011CC58
/* 8011CC50 00119D30  7F E3 FB 78 */	mr r3, r31
/* 8011CC54 00119D34  4B FF E1 F9 */	bl "update_max_out_time__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@FRC8xSurface"
.L_8011CC58:
/* 8011CC58 00119D38  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011CC5C 00119D3C  C0 1D 00 00 */	lfs f0, 0x0(r29)
/* 8011CC60 00119D40  38 83 7E 48 */	addi r4, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011CC64 00119D44  57 C0 06 3F */	clrlwi. r0, r30, 24
/* 8011CC68 00119D48  C0 24 00 1C */	lfs f1, 0x1c(r4)
/* 8011CC6C 00119D4C  EC 21 00 28 */	fsubs f1, f1, f0
/* 8011CC70 00119D50  D0 24 00 1C */	stfs f1, 0x1c(r4)
/* 8011CC74 00119D54  41 82 00 2C */	beq .L_8011CCA0
/* 8011CC78 00119D58  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011CC7C 00119D5C  38 63 45 30 */	addi r3, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011CC80 00119D60  C0 03 00 04 */	lfs f0, 0x4(r3)
/* 8011CC84 00119D64  D0 04 00 24 */	stfs f0, 0x24(r4)
/* 8011CC88 00119D68  C0 02 9F A8 */	lfs f0, "@1033"@sda21(r2)
/* 8011CC8C 00119D6C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011CC90 00119D70  4C 40 13 82 */	cror eq, lt, eq
/* 8011CC94 00119D74  40 82 00 58 */	bne .L_8011CCEC
/* 8011CC98 00119D78  38 60 00 02 */	li r3, 0x2
/* 8011CC9C 00119D7C  48 00 00 54 */	b .L_8011CCF0
.L_8011CCA0:
/* 8011CCA0 00119D80  3C 60 80 3C */	lis r3, globals@ha
/* 8011CCA4 00119D84  38 63 05 58 */	addi r3, r3, globals@l
/* 8011CCA8 00119D88  80 03 16 D4 */	lwz r0, 0x16d4(r3)
/* 8011CCAC 00119D8C  2C 00 00 00 */	cmpwi r0, 0x0
/* 8011CCB0 00119D90  40 82 00 0C */	bne .L_8011CCBC
/* 8011CCB4 00119D94  C0 02 9F A8 */	lfs f0, "@1033"@sda21(r2)
/* 8011CCB8 00119D98  D0 04 00 24 */	stfs f0, 0x24(r4)
.L_8011CCBC:
/* 8011CCBC 00119D9C  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011CCC0 00119DA0  C0 1D 00 00 */	lfs f0, 0x0(r29)
/* 8011CCC4 00119DA4  38 63 7E 48 */	addi r3, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011CCC8 00119DA8  C0 23 00 24 */	lfs f1, 0x24(r3)
/* 8011CCCC 00119DAC  EC 21 00 28 */	fsubs f1, f1, f0
/* 8011CCD0 00119DB0  D0 23 00 24 */	stfs f1, 0x24(r3)
/* 8011CCD4 00119DB4  C0 02 9F A8 */	lfs f0, "@1033"@sda21(r2)
/* 8011CCD8 00119DB8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011CCDC 00119DBC  4C 40 13 82 */	cror eq, lt, eq
/* 8011CCE0 00119DC0  40 82 00 0C */	bne .L_8011CCEC
/* 8011CCE4 00119DC4  38 60 00 00 */	li r3, 0x0
/* 8011CCE8 00119DC8  48 00 00 08 */	b .L_8011CCF0
.L_8011CCEC:
/* 8011CCEC 00119DCC  38 60 00 01 */	li r3, 0x1
.L_8011CCF0:
/* 8011CCF0 00119DD0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8011CCF4 00119DD4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8011CCF8 00119DD8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8011CCFC 00119DDC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8011CD00 00119DE0  7C 08 03 A6 */	mtlr r0
/* 8011CD04 00119DE4  38 21 00 20 */	addi r1, r1, 0x20
/* 8011CD08 00119DE8  4E 80 00 20 */	blr
.endfn "update__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@14out_state_typeFR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type::tutorial_callback::on_stop()
.fn "on_stop__Q49oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_type17tutorial_callbackFv", local
/* 8011CD0C 00119DEC  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8011CD10 00119DF0  38 00 00 01 */	li r0, 0x1
/* 8011CD14 00119DF4  98 03 00 3C */	stb r0, 0x3c(r3)
/* 8011CD18 00119DF8  4E 80 00 20 */	blr
.endfn "on_stop__Q49oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_type17tutorial_callbackFv"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type::start()
.fn "start__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFv", local
/* 8011CD1C 00119DFC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8011CD20 00119E00  7C 08 02 A6 */	mflr r0
/* 8011CD24 00119E04  90 01 00 44 */	stw r0, 0x44(r1)
/* 8011CD28 00119E08  38 00 00 00 */	li r0, 0x0
/* 8011CD2C 00119E0C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8011CD30 00119E10  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8011CD34 00119E14  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8011CD38 00119E18  7C 7D 1B 78 */	mr r29, r3
/* 8011CD3C 00119E1C  3C 60 80 3C */	lis r3, globals@ha
/* 8011CD40 00119E20  93 81 00 30 */	stw r28, 0x30(r1)
/* 8011CD44 00119E24  3B C3 05 58 */	addi r30, r3, globals@l
/* 8011CD48 00119E28  38 60 00 04 */	li r3, 0x4
/* 8011CD4C 00119E2C  98 1D 00 3C */	stb r0, 0x3c(r29)
/* 8011CD50 00119E30  4B F4 98 09 */	bl zEntPlayerControlOff__F13zControlOwner
/* 8011CD54 00119E34  3C 60 80 3C */	lis r3, globals@ha
/* 8011CD58 00119E38  C0 02 A0 00 */	lfs f0, "@1832"@sda21(r2)
/* 8011CD5C 00119E3C  38 63 05 58 */	addi r3, r3, globals@l
/* 8011CD60 00119E40  D0 03 17 10 */	stfs f0, 0x1710(r3)
/* 8011CD64 00119E44  4B F3 F0 89 */	bl reset__13cruise_bubbleFv
/* 8011CD68 00119E48  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011CD6C 00119E4C  3C 80 80 29 */	lis r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011CD70 00119E50  3B E3 45 30 */	addi r31, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011CD74 00119E54  C0 3F 00 20 */	lfs f1, 0x20(r31)
/* 8011CD78 00119E58  38 A4 7E 48 */	addi r5, r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011CD7C 00119E5C  C0 1F 00 28 */	lfs f0, 0x28(r31)
/* 8011CD80 00119E60  80 05 00 00 */	lwz r0, 0x0(r5)
/* 8011CD84 00119E64  EC 01 00 28 */	fsubs f0, f1, f0
/* 8011CD88 00119E68  60 00 00 04 */	ori r0, r0, 0x4
/* 8011CD8C 00119E6C  90 05 00 00 */	stw r0, 0x0(r5)
/* 8011CD90 00119E70  FC 20 02 10 */	fabs f1, f0
/* 8011CD94 00119E74  C0 02 A0 04 */	lfs f0, "@1833"@sda21(r2)
/* 8011CD98 00119E78  FC 20 08 18 */	frsp f1, f1
/* 8011CD9C 00119E7C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011CDA0 00119E80  7C 60 00 26 */	mfcr r3
/* 8011CDA4 00119E84  80 05 00 28 */	lwz r0, 0x28(r5)
/* 8011CDA8 00119E88  54 63 17 FE */	extrwi r3, r3, 1, 1
/* 8011CDAC 00119E8C  38 80 00 01 */	li r4, 0x1
/* 8011CDB0 00119E90  7C 00 00 34 */	cntlzw r0, r0
/* 8011CDB4 00119E94  98 65 00 41 */	stb r3, 0x41(r5)
/* 8011CDB8 00119E98  54 00 DF FE */	extrwi r0, r0, 1, 26
/* 8011CDBC 00119E9C  38 60 00 00 */	li r3, 0x0
/* 8011CDC0 00119EA0  98 85 00 08 */	stb r4, 0x8(r5)
/* 8011CDC4 00119EA4  7C 00 00 D0 */	neg r0, r0
/* 8011CDC8 00119EA8  90 1D 00 10 */	stw r0, 0x10(r29)
/* 8011CDCC 00119EAC  C0 1F 00 14 */	lfs f0, 0x14(r31)
/* 8011CDD0 00119EB0  D0 1D 00 24 */	stfs f0, 0x24(r29)
/* 8011CDD4 00119EB4  4B FF DC 1D */	bl "set_camera__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@Fb"
/* 8011CDD8 00119EB8  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011CDDC 00119EBC  3C 80 80 29 */	lis r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011CDE0 00119EC0  38 63 45 30 */	addi r3, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011CDE4 00119EC4  38 A4 7E 48 */	addi r5, r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011CDE8 00119EC8  3B 83 00 24 */	addi r28, r3, 0x24
/* 8011CDEC 00119ECC  7F 84 E3 78 */	mr r4, r28
/* 8011CDF0 00119ED0  38 65 00 2C */	addi r3, r5, 0x2c
/* 8011CDF4 00119ED4  4B F0 8A 05 */	bl __as__5xVec2FRC5xVec2
/* 8011CDF8 00119ED8  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011CDFC 00119EDC  7F 84 E3 78 */	mr r4, r28
/* 8011CE00 00119EE0  38 63 45 30 */	addi r3, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011CE04 00119EE4  38 63 00 1C */	addi r3, r3, 0x1c
/* 8011CE08 00119EE8  4B EF 8B 6D */	bl __mi__5xVec2CFRC5xVec2
/* 8011CE0C 00119EEC  90 61 00 08 */	stw r3, 0x8(r1)
/* 8011CE10 00119EF0  38 61 00 08 */	addi r3, r1, 0x8
/* 8011CE14 00119EF4  90 81 00 0C */	stw r4, 0xc(r1)
/* 8011CE18 00119EF8  48 00 06 C5 */	bl normal__5xVec2CFv
/* 8011CE1C 00119EFC  3C A0 80 29 */	lis r5, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011CE20 00119F00  90 81 00 14 */	stw r4, 0x14(r1)
/* 8011CE24 00119F04  38 A5 7E 48 */	addi r5, r5, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011CE28 00119F08  38 81 00 10 */	addi r4, r1, 0x10
/* 8011CE2C 00119F0C  90 61 00 10 */	stw r3, 0x10(r1)
/* 8011CE30 00119F10  38 65 00 34 */	addi r3, r5, 0x34
/* 8011CE34 00119F14  4B F0 89 C5 */	bl __as__5xVec2FRC5xVec2
/* 8011CE38 00119F18  3C 80 80 31 */	lis r4, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011CE3C 00119F1C  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011CE40 00119F20  38 84 45 30 */	addi r4, r4, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011CE44 00119F24  38 00 00 08 */	li r0, 0x8
/* 8011CE48 00119F28  C0 04 00 30 */	lfs f0, 0x30(r4)
/* 8011CE4C 00119F2C  38 A3 7E 48 */	addi r5, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011CE50 00119F30  38 7D 00 18 */	addi r3, r29, 0x18
/* 8011CE54 00119F34  D0 05 00 44 */	stfs f0, 0x44(r5)
/* 8011CE58 00119F38  C0 02 9F A8 */	lfs f0, "@1033"@sda21(r2)
/* 8011CE5C 00119F3C  D0 05 00 48 */	stfs f0, 0x48(r5)
/* 8011CE60 00119F40  90 1D 00 14 */	stw r0, 0x14(r29)
/* 8011CE64 00119F44  C0 04 00 44 */	lfs f0, 0x44(r4)
/* 8011CE68 00119F48  D0 1D 00 30 */	stfs f0, 0x30(r29)
/* 8011CE6C 00119F4C  C0 04 00 48 */	lfs f0, 0x48(r4)
/* 8011CE70 00119F50  D0 1D 00 34 */	stfs f0, 0x34(r29)
/* 8011CE74 00119F54  C0 02 9F B8 */	lfs f0, "@1041"@sda21(r2)
/* 8011CE78 00119F58  80 9E 07 28 */	lwz r4, 0x728(r30)
/* 8011CE7C 00119F5C  D0 05 00 3C */	stfs f0, 0x3c(r5)
/* 8011CE80 00119F60  38 84 00 30 */	addi r4, r4, 0x30
/* 8011CE84 00119F64  4B EE E3 E1 */	bl __as__5xVec3FRC5xVec3
/* 8011CE88 00119F68  80 7E 07 28 */	lwz r3, 0x728(r30)
/* 8011CE8C 00119F6C  38 81 00 18 */	addi r4, r1, 0x18
/* 8011CE90 00119F70  4B F1 4F A5 */	bl xMat3x3GetEuler__FPC7xMat3x3P5xVec3
/* 8011CE94 00119F74  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8011CE98 00119F78  4B EF 19 5D */	bl xrmod__Ff
/* 8011CE9C 00119F7C  80 9E 07 28 */	lwz r4, 0x728(r30)
/* 8011CEA0 00119F80  3C 60 80 3C */	lis r3, globals@ha
/* 8011CEA4 00119F84  38 63 05 58 */	addi r3, r3, globals@l
/* 8011CEA8 00119F88  D0 24 00 B8 */	stfs f1, 0xb8(r4)
/* 8011CEAC 00119F8C  C0 23 01 80 */	lfs f1, 0x180(r3)
/* 8011CEB0 00119F90  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8011CEB4 00119F94  C0 42 9F B4 */	lfs f2, "@1036"@sda21(r2)
/* 8011CEB8 00119F98  EC 01 00 28 */	fsubs f0, f1, f0
/* 8011CEBC 00119F9C  EC 22 00 2A */	fadds f1, f2, f0
/* 8011CEC0 00119FA0  4B EF 19 35 */	bl xrmod__Ff
/* 8011CEC4 00119FA4  C0 02 9F B4 */	lfs f0, "@1036"@sda21(r2)
/* 8011CEC8 00119FA8  3C 60 80 3C */	lis r3, globals@ha
/* 8011CECC 00119FAC  38 63 05 58 */	addi r3, r3, globals@l
/* 8011CED0 00119FB0  EC 01 00 28 */	fsubs f0, f1, f0
/* 8011CED4 00119FB4  D0 1D 00 28 */	stfs f0, 0x28(r29)
/* 8011CED8 00119FB8  C0 3D 00 28 */	lfs f1, 0x28(r29)
/* 8011CEDC 00119FBC  C0 1F 00 14 */	lfs f0, 0x14(r31)
/* 8011CEE0 00119FC0  EC 01 00 24 */	fdivs f0, f1, f0
/* 8011CEE4 00119FC4  D0 1D 00 28 */	stfs f0, 0x28(r29)
/* 8011CEE8 00119FC8  80 63 07 04 */	lwz r3, 0x704(r3)
/* 8011CEEC 00119FCC  C0 22 A0 08 */	lfs f1, "@1834"@sda21(r2)
/* 8011CEF0 00119FD0  4B F1 75 DD */	bl xModelUpdate__FP14xModelInstancef
/* 8011CEF4 00119FD4  38 00 00 00 */	li r0, 0x0
/* 8011CEF8 00119FD8  90 1D 00 38 */	stw r0, 0x38(r29)
/* 8011CEFC 00119FDC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8011CF00 00119FE0  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8011CF04 00119FE4  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8011CF08 00119FE8  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8011CF0C 00119FEC  83 81 00 30 */	lwz r28, 0x30(r1)
/* 8011CF10 00119FF0  7C 08 03 A6 */	mtlr r0
/* 8011CF14 00119FF4  38 21 00 40 */	addi r1, r1, 0x40
/* 8011CF18 00119FF8  4E 80 00 20 */	blr
.endfn "start__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFv"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type::stop()
.fn "stop__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFv", local
/* 8011CF1C 00119FFC  4E 80 00 20 */	blr
.endfn "stop__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFv"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type::update(xScene&, float&)
.fn "update__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf", local
/* 8011CF20 0011A000  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8011CF24 0011A004  7C 08 02 A6 */	mflr r0
/* 8011CF28 0011A008  3C C0 80 29 */	lis r6, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011CF2C 0011A00C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8011CF30 0011A010  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8011CF34 0011A014  7C 7F 1B 78 */	mr r31, r3
/* 8011CF38 0011A018  38 66 7E 48 */	addi r3, r6, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011CF3C 0011A01C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8011CF40 0011A020  7C BE 2B 78 */	mr r30, r5
/* 8011CF44 0011A024  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8011CF48 0011A028  7C 9D 23 78 */	mr r29, r4
/* 8011CF4C 0011A02C  80 03 00 28 */	lwz r0, 0x28(r3)
/* 8011CF50 0011A030  28 00 00 00 */	cmplwi r0, 0x0
/* 8011CF54 0011A034  40 82 00 0C */	bne .L_8011CF60
/* 8011CF58 0011A038  38 60 00 03 */	li r3, 0x3
/* 8011CF5C 0011A03C  48 00 01 60 */	b .L_8011D0BC
.L_8011CF60:
/* 8011CF60 0011A040  C0 1E 00 00 */	lfs f0, 0x0(r30)
/* 8011CF64 0011A044  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8011CF68 0011A048  48 00 00 34 */	b .L_8011CF9C
.L_8011CF6C:
/* 8011CF6C 0011A04C  54 04 10 3A */	slwi r4, r0, 2
/* 8011CF70 0011A050  7F E3 FB 78 */	mr r3, r31
/* 8011CF74 0011A054  38 04 00 40 */	addi r0, r4, 0x40
/* 8011CF78 0011A058  7F A4 EB 78 */	mr r4, r29
/* 8011CF7C 0011A05C  7D 9F 00 2E */	lwzx r12, r31, r0
/* 8011CF80 0011A060  38 A1 00 0C */	addi r5, r1, 0xc
/* 8011CF84 0011A064  7D 89 03 A6 */	mtctr r12
/* 8011CF88 0011A068  4E 80 04 21 */	bctrl
/* 8011CF8C 0011A06C  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 8011CF90 0011A070  7C 03 00 00 */	cmpw r3, r0
/* 8011CF94 0011A074  41 82 00 14 */	beq .L_8011CFA8
/* 8011CF98 0011A078  90 7F 00 10 */	stw r3, 0x10(r31)
.L_8011CF9C:
/* 8011CF9C 0011A07C  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 8011CFA0 0011A080  2C 00 FF FF */	cmpwi r0, -0x1
/* 8011CFA4 0011A084  40 82 FF C8 */	bne .L_8011CF6C
.L_8011CFA8:
/* 8011CFA8 0011A088  C0 1E 00 00 */	lfs f0, 0x0(r30)
/* 8011CFAC 0011A08C  D0 01 00 08 */	stfs f0, 0x8(r1)
/* 8011CFB0 0011A090  48 00 00 34 */	b .L_8011CFE4
.L_8011CFB4:
/* 8011CFB4 0011A094  54 04 10 3A */	slwi r4, r0, 2
/* 8011CFB8 0011A098  7F E3 FB 78 */	mr r3, r31
/* 8011CFBC 0011A09C  38 04 00 40 */	addi r0, r4, 0x40
/* 8011CFC0 0011A0A0  7F A4 EB 78 */	mr r4, r29
/* 8011CFC4 0011A0A4  7D 9F 00 2E */	lwzx r12, r31, r0
/* 8011CFC8 0011A0A8  38 A1 00 08 */	addi r5, r1, 0x8
/* 8011CFCC 0011A0AC  7D 89 03 A6 */	mtctr r12
/* 8011CFD0 0011A0B0  4E 80 04 21 */	bctrl
/* 8011CFD4 0011A0B4  80 1F 00 14 */	lwz r0, 0x14(r31)
/* 8011CFD8 0011A0B8  7C 03 00 00 */	cmpw r3, r0
/* 8011CFDC 0011A0BC  41 82 00 14 */	beq .L_8011CFF0
/* 8011CFE0 0011A0C0  90 7F 00 14 */	stw r3, 0x14(r31)
.L_8011CFE4:
/* 8011CFE4 0011A0C4  80 1F 00 14 */	lwz r0, 0x14(r31)
/* 8011CFE8 0011A0C8  2C 00 FF FF */	cmpwi r0, -0x1
/* 8011CFEC 0011A0CC  40 82 FF C8 */	bne .L_8011CFB4
.L_8011CFF0:
/* 8011CFF0 0011A0D0  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 8011CFF4 0011A0D4  2C 00 FF FF */	cmpwi r0, -0x1
/* 8011CFF8 0011A0D8  40 82 00 34 */	bne .L_8011D02C
/* 8011CFFC 0011A0DC  80 1F 00 14 */	lwz r0, 0x14(r31)
/* 8011D000 0011A0E0  2C 00 FF FF */	cmpwi r0, -0x1
/* 8011D004 0011A0E4  40 82 00 28 */	bne .L_8011D02C
/* 8011D008 0011A0E8  80 1F 00 38 */	lwz r0, 0x38(r31)
/* 8011D00C 0011A0EC  28 00 00 00 */	cmplwi r0, 0x0
/* 8011D010 0011A0F0  41 82 00 0C */	beq .L_8011D01C
/* 8011D014 0011A0F4  38 60 00 03 */	li r3, 0x3
/* 8011D018 0011A0F8  48 00 00 A4 */	b .L_8011D0BC
.L_8011D01C:
/* 8011D01C 0011A0FC  38 00 00 01 */	li r0, 0x1
/* 8011D020 0011A100  38 60 00 02 */	li r3, 0x2
/* 8011D024 0011A104  90 1F 00 38 */	stw r0, 0x38(r31)
/* 8011D028 0011A108  4B F7 DB 05 */	bl zGameStateSwitch__Fi
.L_8011D02C:
/* 8011D02C 0011A10C  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 8011D030 0011A110  2C 00 00 06 */	cmpwi r0, 0x6
/* 8011D034 0011A114  41 82 00 0C */	beq .L_8011D040
/* 8011D038 0011A118  2C 00 00 07 */	cmpwi r0, 0x7
/* 8011D03C 0011A11C  40 82 00 68 */	bne .L_8011D0A4
.L_8011D040:
/* 8011D040 0011A120  3C 60 80 3C */	lis r3, globals@ha
/* 8011D044 0011A124  38 9F 00 18 */	addi r4, r31, 0x18
/* 8011D048 0011A128  38 63 05 58 */	addi r3, r3, globals@l
/* 8011D04C 0011A12C  80 63 07 04 */	lwz r3, 0x704(r3)
/* 8011D050 0011A130  83 E3 00 4C */	lwz r31, 0x4c(r3)
/* 8011D054 0011A134  38 7F 00 30 */	addi r3, r31, 0x30
/* 8011D058 0011A138  4B EE E2 0D */	bl __as__5xVec3FRC5xVec3
/* 8011D05C 0011A13C  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011D060 0011A140  3C 80 80 29 */	lis r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011D064 0011A144  38 A3 45 30 */	addi r5, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011D068 0011A148  38 7F 00 30 */	addi r3, r31, 0x30
/* 8011D06C 0011A14C  38 84 7E 48 */	addi r4, r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011D070 0011A150  C0 25 00 20 */	lfs f1, 0x20(r5)
/* 8011D074 0011A154  C0 04 00 30 */	lfs f0, 0x30(r4)
/* 8011D078 0011A158  EC 21 00 28 */	fsubs f1, f1, f0
/* 8011D07C 0011A15C  4B FF DC A9 */	bl "move_up__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@FR5xVec3f"
/* 8011D080 0011A160  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011D084 0011A164  3C 80 80 29 */	lis r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011D088 0011A168  38 A3 45 30 */	addi r5, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011D08C 0011A16C  38 7F 00 30 */	addi r3, r31, 0x30
/* 8011D090 0011A170  38 84 7E 48 */	addi r4, r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011D094 0011A174  C0 25 00 1C */	lfs f1, 0x1c(r5)
/* 8011D098 0011A178  C0 04 00 2C */	lfs f0, 0x2c(r4)
/* 8011D09C 0011A17C  EC 21 00 28 */	fsubs f1, f1, f0
/* 8011D0A0 0011A180  4B FF DD 11 */	bl "move_right__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@FR5xVec3f"
.L_8011D0A4:
/* 8011D0A4 0011A184  3C 60 80 3C */	lis r3, globals@ha
/* 8011D0A8 0011A188  38 63 05 58 */	addi r3, r3, globals@l
/* 8011D0AC 0011A18C  80 63 07 04 */	lwz r3, 0x704(r3)
/* 8011D0B0 0011A190  4B F1 76 01 */	bl xModelEval__FP14xModelInstance
/* 8011D0B4 0011A194  4B F5 85 35 */	bl zEntPlayerUpdateModel__Fv
/* 8011D0B8 0011A198  38 60 00 02 */	li r3, 0x2
.L_8011D0BC:
/* 8011D0BC 0011A19C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8011D0C0 0011A1A0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8011D0C4 0011A1A4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8011D0C8 0011A1A8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8011D0CC 0011A1AC  7C 08 03 A6 */	mtlr r0
/* 8011D0D0 0011A1B0  38 21 00 20 */	addi r1, r1, 0x20
/* 8011D0D4 0011A1B4  4E 80 00 20 */	blr
.endfn "update__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::drop_state_type::start()
.fn "start__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFv", local
/* 8011D0D8 0011A1B8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8011D0DC 0011A1BC  7C 08 02 A6 */	mflr r0
/* 8011D0E0 0011A1C0  3C 80 80 3C */	lis r4, globals@ha
/* 8011D0E4 0011A1C4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8011D0E8 0011A1C8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8011D0EC 0011A1CC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8011D0F0 0011A1D0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8011D0F4 0011A1D4  93 81 00 10 */	stw r28, 0x10(r1)
/* 8011D0F8 0011A1D8  7C 7C 1B 78 */	mr r28, r3
/* 8011D0FC 0011A1DC  38 64 05 58 */	addi r3, r4, globals@l
/* 8011D100 0011A1E0  3B E3 1D 38 */	addi r31, r3, 0x1d38
/* 8011D104 0011A1E4  38 7C 00 10 */	addi r3, r28, 0x10
/* 8011D108 0011A1E8  7F E4 FB 78 */	mr r4, r31
/* 8011D10C 0011A1EC  4B EE E1 59 */	bl __as__5xVec3FRC5xVec3
/* 8011D110 0011A1F0  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011D114 0011A1F4  3C 80 80 31 */	lis r4, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011D118 0011A1F8  38 C3 7E 48 */	addi r6, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011D11C 0011A1FC  3C 60 80 3C */	lis r3, globals@ha
/* 8011D120 0011A200  80 06 00 28 */	lwz r0, 0x28(r6)
/* 8011D124 0011A204  38 63 05 58 */	addi r3, r3, globals@l
/* 8011D128 0011A208  3B C3 06 E0 */	addi r30, r3, 0x6e0
/* 8011D12C 0011A20C  38 84 45 30 */	addi r4, r4, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011D130 0011A210  7C 03 00 34 */	cntlzw r3, r0
/* 8011D134 0011A214  38 00 00 05 */	li r0, 0x5
/* 8011D138 0011A218  54 65 DF FE */	extrwi r5, r3, 1, 26
/* 8011D13C 0011A21C  7F C3 F3 78 */	mr r3, r30
/* 8011D140 0011A220  7C A5 00 D0 */	neg r5, r5
/* 8011D144 0011A224  90 BC 00 08 */	stw r5, 0x8(r28)
/* 8011D148 0011A228  C0 04 00 4C */	lfs f0, 0x4c(r4)
/* 8011D14C 0011A22C  C0 24 00 24 */	lfs f1, 0x24(r4)
/* 8011D150 0011A230  D0 06 00 44 */	stfs f0, 0x44(r6)
/* 8011D154 0011A234  C0 04 00 28 */	lfs f0, 0x28(r4)
/* 8011D158 0011A238  C0 42 9F A8 */	lfs f2, "@1033"@sda21(r2)
/* 8011D15C 0011A23C  D0 46 00 48 */	stfs f2, 0x48(r6)
/* 8011D160 0011A240  D0 26 00 2C */	stfs f1, 0x2c(r6)
/* 8011D164 0011A244  D0 06 00 30 */	stfs f0, 0x30(r6)
/* 8011D168 0011A248  90 1C 00 0C */	stw r0, 0xc(r28)
/* 8011D16C 0011A24C  C0 04 00 60 */	lfs f0, 0x60(r4)
/* 8011D170 0011A250  D0 1C 00 20 */	stfs f0, 0x20(r28)
/* 8011D174 0011A254  C0 04 00 64 */	lfs f0, 0x64(r4)
/* 8011D178 0011A258  D0 1C 00 24 */	stfs f0, 0x24(r28)
/* 8011D17C 0011A25C  4B F5 CF A5 */	bl zEntPlayerReset__FP4xEnt
/* 8011D180 0011A260  4B F5 84 69 */	bl zEntPlayerUpdateModel__Fv
/* 8011D184 0011A264  38 60 00 04 */	li r3, 0x4
/* 8011D188 0011A268  4B F4 93 D1 */	bl zEntPlayerControlOff__F13zControlOwner
/* 8011D18C 0011A26C  3C 60 80 3C */	lis r3, globals@ha
/* 8011D190 0011A270  C0 02 A0 00 */	lfs f0, "@1832"@sda21(r2)
/* 8011D194 0011A274  38 63 05 58 */	addi r3, r3, globals@l
/* 8011D198 0011A278  D0 03 17 10 */	stfs f0, 0x1710(r3)
/* 8011D19C 0011A27C  4B F2 4A 31 */	bl xScrFxStopFade__Fv
/* 8011D1A0 0011A280  4B F3 4F 89 */	bl zCameraDisableInput__Fv
/* 8011D1A4 0011A284  83 9E 00 48 */	lwz r28, 0x48(r30)
/* 8011D1A8 0011A288  3C 60 80 25 */	lis r3, g_Y3@ha
/* 8011D1AC 0011A28C  83 BE 00 24 */	lwz r29, 0x24(r30)
/* 8011D1B0 0011A290  38 83 30 30 */	addi r4, r3, g_Y3@l
/* 8011D1B4 0011A294  38 7C 00 AC */	addi r3, r28, 0xac
/* 8011D1B8 0011A298  4B EE E0 AD */	bl __as__5xVec3FRC5xVec3
/* 8011D1BC 0011A29C  3C 60 80 3C */	lis r3, globals@ha
/* 8011D1C0 0011A2A0  3C 80 80 25 */	lis r4, g_O3@ha
/* 8011D1C4 0011A2A4  3B C3 05 58 */	addi r30, r3, globals@l
/* 8011D1C8 0011A2A8  C0 1E 1D 44 */	lfs f0, 0x1d44(r30)
/* 8011D1CC 0011A2AC  38 7C 00 D4 */	addi r3, r28, 0xd4
/* 8011D1D0 0011A2B0  38 84 30 18 */	addi r4, r4, g_O3@l
/* 8011D1D4 0011A2B4  D0 1C 00 B8 */	stfs f0, 0xb8(r28)
/* 8011D1D8 0011A2B8  4B EE E0 8D */	bl __as__5xVec3FRC5xVec3
/* 8011D1DC 0011A2BC  C0 42 9F A8 */	lfs f2, "@1033"@sda21(r2)
/* 8011D1E0 0011A2C0  7F 83 E3 78 */	mr r3, r28
/* 8011D1E4 0011A2C4  C0 3C 00 B8 */	lfs f1, 0xb8(r28)
/* 8011D1E8 0011A2C8  FC 60 10 90 */	fmr f3, f2
/* 8011D1EC 0011A2CC  4B F1 4F E5 */	bl xMat3x3Euler__FP7xMat3x3fff
/* 8011D1F0 0011A2D0  7F E4 FB 78 */	mr r4, r31
/* 8011D1F4 0011A2D4  38 7C 00 30 */	addi r3, r28, 0x30
/* 8011D1F8 0011A2D8  4B EE E0 6D */	bl __as__5xVec3FRC5xVec3
/* 8011D1FC 0011A2DC  80 7D 00 4C */	lwz r3, 0x4c(r29)
/* 8011D200 0011A2E0  7F 84 E3 78 */	mr r4, r28
/* 8011D204 0011A2E4  4B EE E3 69 */	bl __as__7xMat4x3FRC7xMat4x3
/* 8011D208 0011A2E8  3C 60 80 31 */	lis r3, "shared_target__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011D20C 0011A2EC  38 9C 00 30 */	addi r4, r28, 0x30
/* 8011D210 0011A2F0  38 63 45 AC */	addi r3, r3, "shared_target__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011D214 0011A2F4  38 63 00 30 */	addi r3, r3, 0x30
/* 8011D218 0011A2F8  4B EE E0 4D */	bl __as__5xVec3FRC5xVec3
/* 8011D21C 0011A2FC  38 60 00 01 */	li r3, 0x1
/* 8011D220 0011A300  4B FF D7 D1 */	bl "set_camera__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@Fb"
/* 8011D224 0011A304  3C A0 80 31 */	lis r5, "shared_target__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011D228 0011A308  3C 60 80 3C */	lis r3, globals@ha
/* 8011D22C 0011A30C  38 63 05 58 */	addi r3, r3, globals@l
/* 8011D230 0011A310  C0 1E 1D 44 */	lfs f0, 0x1d44(r30)
/* 8011D234 0011A314  38 05 45 AC */	addi r0, r5, "shared_target__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011D238 0011A318  3C 80 80 31 */	lis r4, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011D23C 0011A31C  90 03 01 14 */	stw r0, 0x114(r3)
/* 8011D240 0011A320  38 A4 45 30 */	addi r5, r4, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011D244 0011A324  C0 25 00 08 */	lfs f1, 0x8(r5)
/* 8011D248 0011A328  38 80 00 20 */	li r4, 0x20
/* 8011D24C 0011A32C  90 03 01 10 */	stw r0, 0x110(r3)
/* 8011D250 0011A330  C0 45 00 0C */	lfs f2, 0xc(r5)
/* 8011D254 0011A334  C0 82 9F A8 */	lfs f4, "@1033"@sda21(r2)
/* 8011D258 0011A338  C0 62 9F B4 */	lfs f3, "@1036"@sda21(r2)
/* 8011D25C 0011A33C  FC A0 20 90 */	fmr f5, f4
/* 8011D260 0011A340  FC C0 20 90 */	fmr f6, f4
/* 8011D264 0011A344  EC 63 00 2A */	fadds f3, f3, f0
/* 8011D268 0011A348  4B EF 03 69 */	bl xCameraMove__FP7xCameraUiffffff
/* 8011D26C 0011A34C  C0 62 9F A8 */	lfs f3, "@1033"@sda21(r2)
/* 8011D270 0011A350  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011D274 0011A354  38 83 45 30 */	addi r4, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011D278 0011A358  C0 3E 1D 44 */	lfs f1, 0x1d44(r30)
/* 8011D27C 0011A35C  FC 80 18 90 */	fmr f4, f3
/* 8011D280 0011A360  3C 60 80 3C */	lis r3, globals@ha
/* 8011D284 0011A364  C0 44 00 10 */	lfs f2, 0x10(r4)
/* 8011D288 0011A368  FC A0 18 90 */	fmr f5, f3
/* 8011D28C 0011A36C  FC C0 18 90 */	fmr f6, f3
/* 8011D290 0011A370  38 63 05 58 */	addi r3, r3, globals@l
/* 8011D294 0011A374  38 80 00 00 */	li r4, 0x0
/* 8011D298 0011A378  4B EF 07 55 */	bl xCameraLookYPR__FP7xCameraUiffffff
/* 8011D29C 0011A37C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8011D2A0 0011A380  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8011D2A4 0011A384  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8011D2A8 0011A388  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8011D2AC 0011A38C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8011D2B0 0011A390  7C 08 03 A6 */	mtlr r0
/* 8011D2B4 0011A394  38 21 00 20 */	addi r1, r1, 0x20
/* 8011D2B8 0011A398  4E 80 00 20 */	blr
.endfn "start__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFv"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::drop_state_type::stop()
.fn "stop__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFv", local
/* 8011D2BC 0011A39C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011D2C0 0011A3A0  7C 08 02 A6 */	mflr r0
/* 8011D2C4 0011A3A4  38 60 00 04 */	li r3, 0x4
/* 8011D2C8 0011A3A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011D2CC 0011A3AC  4B F4 92 35 */	bl zEntPlayerControlOn__F13zControlOwner
/* 8011D2D0 0011A3B0  3C 60 80 3C */	lis r3, globals@ha
/* 8011D2D4 0011A3B4  C0 02 9F B8 */	lfs f0, "@1041"@sda21(r2)
/* 8011D2D8 0011A3B8  38 63 05 58 */	addi r3, r3, globals@l
/* 8011D2DC 0011A3BC  D0 03 17 10 */	stfs f0, 0x1710(r3)
/* 8011D2E0 0011A3C0  4B FF D8 C5 */	bl "reset_camera__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@Fv"
/* 8011D2E4 0011A3C4  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011D2E8 0011A3C8  38 00 00 00 */	li r0, 0x0
/* 8011D2EC 0011A3CC  38 63 7E 48 */	addi r3, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011D2F0 0011A3D0  98 03 00 40 */	stb r0, 0x40(r3)
/* 8011D2F4 0011A3D4  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8011D2F8 0011A3D8  C0 02 9F B8 */	lfs f0, "@1041"@sda21(r2)
/* 8011D2FC 0011A3DC  54 00 07 B8 */	rlwinm r0, r0, 0, 30, 28
/* 8011D300 0011A3E0  D0 03 00 3C */	stfs f0, 0x3c(r3)
/* 8011D304 0011A3E4  90 03 00 00 */	stw r0, 0x0(r3)
/* 8011D308 0011A3E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011D30C 0011A3EC  7C 08 03 A6 */	mtlr r0
/* 8011D310 0011A3F0  38 21 00 10 */	addi r1, r1, 0x10
/* 8011D314 0011A3F4  4E 80 00 20 */	blr
.endfn "stop__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFv"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::drop_state_type::update(xScene&, float&)
.fn "update__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFR6xSceneRf", local
/* 8011D318 0011A3F8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8011D31C 0011A3FC  7C 08 02 A6 */	mflr r0
/* 8011D320 0011A400  3C C0 80 29 */	lis r6, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011D324 0011A404  90 01 00 24 */	stw r0, 0x24(r1)
/* 8011D328 0011A408  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8011D32C 0011A40C  7C BF 2B 78 */	mr r31, r5
/* 8011D330 0011A410  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8011D334 0011A414  7C 9E 23 78 */	mr r30, r4
/* 8011D338 0011A418  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8011D33C 0011A41C  7C 7D 1B 78 */	mr r29, r3
/* 8011D340 0011A420  38 66 7E 48 */	addi r3, r6, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011D344 0011A424  80 03 00 28 */	lwz r0, 0x28(r3)
/* 8011D348 0011A428  28 00 00 00 */	cmplwi r0, 0x0
/* 8011D34C 0011A42C  40 82 00 0C */	bne .L_8011D358
/* 8011D350 0011A430  38 60 00 00 */	li r3, 0x0
/* 8011D354 0011A434  48 00 01 50 */	b .L_8011D4A4
.L_8011D358:
/* 8011D358 0011A438  C0 1F 00 00 */	lfs f0, 0x0(r31)
/* 8011D35C 0011A43C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8011D360 0011A440  48 00 00 34 */	b .L_8011D394
.L_8011D364:
/* 8011D364 0011A444  54 04 10 3A */	slwi r4, r0, 2
/* 8011D368 0011A448  7F A3 EB 78 */	mr r3, r29
/* 8011D36C 0011A44C  38 04 00 28 */	addi r0, r4, 0x28
/* 8011D370 0011A450  7F C4 F3 78 */	mr r4, r30
/* 8011D374 0011A454  7D 9D 00 2E */	lwzx r12, r29, r0
/* 8011D378 0011A458  38 A1 00 0C */	addi r5, r1, 0xc
/* 8011D37C 0011A45C  7D 89 03 A6 */	mtctr r12
/* 8011D380 0011A460  4E 80 04 21 */	bctrl
/* 8011D384 0011A464  80 1D 00 08 */	lwz r0, 0x8(r29)
/* 8011D388 0011A468  7C 03 00 00 */	cmpw r3, r0
/* 8011D38C 0011A46C  41 82 00 14 */	beq .L_8011D3A0
/* 8011D390 0011A470  90 7D 00 08 */	stw r3, 0x8(r29)
.L_8011D394:
/* 8011D394 0011A474  80 1D 00 08 */	lwz r0, 0x8(r29)
/* 8011D398 0011A478  2C 00 FF FF */	cmpwi r0, -0x1
/* 8011D39C 0011A47C  40 82 FF C8 */	bne .L_8011D364
.L_8011D3A0:
/* 8011D3A0 0011A480  C0 1F 00 00 */	lfs f0, 0x0(r31)
/* 8011D3A4 0011A484  D0 01 00 08 */	stfs f0, 0x8(r1)
/* 8011D3A8 0011A488  48 00 00 34 */	b .L_8011D3DC
.L_8011D3AC:
/* 8011D3AC 0011A48C  54 04 10 3A */	slwi r4, r0, 2
/* 8011D3B0 0011A490  7F A3 EB 78 */	mr r3, r29
/* 8011D3B4 0011A494  38 04 00 28 */	addi r0, r4, 0x28
/* 8011D3B8 0011A498  7F C4 F3 78 */	mr r4, r30
/* 8011D3BC 0011A49C  7D 9D 00 2E */	lwzx r12, r29, r0
/* 8011D3C0 0011A4A0  38 A1 00 08 */	addi r5, r1, 0x8
/* 8011D3C4 0011A4A4  7D 89 03 A6 */	mtctr r12
/* 8011D3C8 0011A4A8  4E 80 04 21 */	bctrl
/* 8011D3CC 0011A4AC  80 1D 00 0C */	lwz r0, 0xc(r29)
/* 8011D3D0 0011A4B0  7C 03 00 00 */	cmpw r3, r0
/* 8011D3D4 0011A4B4  41 82 00 14 */	beq .L_8011D3E8
/* 8011D3D8 0011A4B8  90 7D 00 0C */	stw r3, 0xc(r29)
.L_8011D3DC:
/* 8011D3DC 0011A4BC  80 1D 00 0C */	lwz r0, 0xc(r29)
/* 8011D3E0 0011A4C0  2C 00 FF FF */	cmpwi r0, -0x1
/* 8011D3E4 0011A4C4  40 82 FF C8 */	bne .L_8011D3AC
.L_8011D3E8:
/* 8011D3E8 0011A4C8  80 7D 00 08 */	lwz r3, 0x8(r29)
/* 8011D3EC 0011A4CC  2C 03 FF FF */	cmpwi r3, -0x1
/* 8011D3F0 0011A4D0  40 82 00 18 */	bne .L_8011D408
/* 8011D3F4 0011A4D4  80 1D 00 0C */	lwz r0, 0xc(r29)
/* 8011D3F8 0011A4D8  2C 00 FF FF */	cmpwi r0, -0x1
/* 8011D3FC 0011A4DC  40 82 00 0C */	bne .L_8011D408
/* 8011D400 0011A4E0  38 60 00 00 */	li r3, 0x0
/* 8011D404 0011A4E4  48 00 00 A0 */	b .L_8011D4A4
.L_8011D408:
/* 8011D408 0011A4E8  2C 03 00 00 */	cmpwi r3, 0x0
/* 8011D40C 0011A4EC  41 82 00 0C */	beq .L_8011D418
/* 8011D410 0011A4F0  2C 03 00 01 */	cmpwi r3, 0x1
/* 8011D414 0011A4F4  40 82 00 68 */	bne .L_8011D47C
.L_8011D418:
/* 8011D418 0011A4F8  3C 60 80 3C */	lis r3, globals@ha
/* 8011D41C 0011A4FC  38 9D 00 10 */	addi r4, r29, 0x10
/* 8011D420 0011A500  38 63 05 58 */	addi r3, r3, globals@l
/* 8011D424 0011A504  80 63 07 04 */	lwz r3, 0x704(r3)
/* 8011D428 0011A508  83 E3 00 4C */	lwz r31, 0x4c(r3)
/* 8011D42C 0011A50C  38 7F 00 30 */	addi r3, r31, 0x30
/* 8011D430 0011A510  4B EE DE 35 */	bl __as__5xVec3FRC5xVec3
/* 8011D434 0011A514  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011D438 0011A518  3C 80 80 29 */	lis r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011D43C 0011A51C  38 A3 45 30 */	addi r5, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011D440 0011A520  38 7F 00 30 */	addi r3, r31, 0x30
/* 8011D444 0011A524  38 84 7E 48 */	addi r4, r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011D448 0011A528  C0 25 00 20 */	lfs f1, 0x20(r5)
/* 8011D44C 0011A52C  C0 04 00 30 */	lfs f0, 0x30(r4)
/* 8011D450 0011A530  EC 21 00 28 */	fsubs f1, f1, f0
/* 8011D454 0011A534  4B FF D8 D1 */	bl "move_up__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@FR5xVec3f"
/* 8011D458 0011A538  3C 60 80 31 */	lis r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011D45C 0011A53C  3C 80 80 29 */	lis r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011D460 0011A540  38 A3 45 30 */	addi r5, r3, "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011D464 0011A544  38 7F 00 30 */	addi r3, r31, 0x30
/* 8011D468 0011A548  38 84 7E 48 */	addi r4, r4, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011D46C 0011A54C  C0 25 00 1C */	lfs f1, 0x1c(r5)
/* 8011D470 0011A550  C0 04 00 2C */	lfs f0, 0x2c(r4)
/* 8011D474 0011A554  EC 21 00 28 */	fsubs f1, f1, f0
/* 8011D478 0011A558  4B FF D9 39 */	bl "move_right__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@FR5xVec3f"
.L_8011D47C:
/* 8011D47C 0011A55C  3C 60 80 29 */	lis r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@ha
/* 8011D480 0011A560  38 63 7E 48 */	addi r3, r3, "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"@l
/* 8011D484 0011A564  88 03 00 08 */	lbz r0, 0x8(r3)
/* 8011D488 0011A568  28 00 00 00 */	cmplwi r0, 0x0
/* 8011D48C 0011A56C  41 82 00 14 */	beq .L_8011D4A0
/* 8011D490 0011A570  3C 60 80 3C */	lis r3, globals@ha
/* 8011D494 0011A574  38 63 05 58 */	addi r3, r3, globals@l
/* 8011D498 0011A578  80 63 07 04 */	lwz r3, 0x704(r3)
/* 8011D49C 0011A57C  4B F1 72 15 */	bl xModelEval__FP14xModelInstance
.L_8011D4A0:
/* 8011D4A0 0011A580  38 60 00 03 */	li r3, 0x3
.L_8011D4A4:
/* 8011D4A4 0011A584  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8011D4A8 0011A588  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8011D4AC 0011A58C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8011D4B0 0011A590  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8011D4B4 0011A594  7C 08 03 A6 */	mtlr r0
/* 8011D4B8 0011A598  38 21 00 20 */	addi r1, r1, 0x20
/* 8011D4BC 0011A59C  4E 80 00 20 */	blr
.endfn "update__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFR6xSceneRf"

# 0x8011D4C0 - 0x8011D554
.section .text, "ax", unique, 1
.balign 4

# xVec2::dot(const xVec2&) const
.fn dot__5xVec2CFRC5xVec2, weak
/* 8011D4C0 0011A5A0  C0 23 00 04 */	lfs f1, 0x4(r3)
/* 8011D4C4 0011A5A4  C0 04 00 04 */	lfs f0, 0x4(r4)
/* 8011D4C8 0011A5A8  C0 43 00 00 */	lfs f2, 0x0(r3)
/* 8011D4CC 0011A5AC  EC 01 00 32 */	fmuls f0, f1, f0
/* 8011D4D0 0011A5B0  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 8011D4D4 0011A5B4  EC 22 00 7A */	fmadds f1, f2, f1, f0
/* 8011D4D8 0011A5B8  4E 80 00 20 */	blr
.endfn dot__5xVec2CFRC5xVec2

# xVec2::normal() const
.fn normal__5xVec2CFv, weak
/* 8011D4DC 0011A5BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011D4E0 0011A5C0  7C 08 02 A6 */	mflr r0
/* 8011D4E4 0011A5C4  80 83 00 00 */	lwz r4, 0x0(r3)
/* 8011D4E8 0011A5C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011D4EC 0011A5CC  80 03 00 04 */	lwz r0, 0x4(r3)
/* 8011D4F0 0011A5D0  38 61 00 08 */	addi r3, r1, 0x8
/* 8011D4F4 0011A5D4  90 81 00 08 */	stw r4, 0x8(r1)
/* 8011D4F8 0011A5D8  90 01 00 0C */	stw r0, 0xc(r1)
/* 8011D4FC 0011A5DC  48 00 00 21 */	bl normalize__5xVec2Fv
/* 8011D500 0011A5E0  7C 64 1B 78 */	mr r4, r3
/* 8011D504 0011A5E4  80 63 00 00 */	lwz r3, 0x0(r3)
/* 8011D508 0011A5E8  80 84 00 04 */	lwz r4, 0x4(r4)
/* 8011D50C 0011A5EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011D510 0011A5F0  7C 08 03 A6 */	mtlr r0
/* 8011D514 0011A5F4  38 21 00 10 */	addi r1, r1, 0x10
/* 8011D518 0011A5F8  4E 80 00 20 */	blr
.endfn normal__5xVec2CFv

# xVec2::normalize()
.fn normalize__5xVec2Fv, weak
/* 8011D51C 0011A5FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011D520 0011A600  7C 08 02 A6 */	mflr r0
/* 8011D524 0011A604  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011D528 0011A608  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011D52C 0011A60C  7C 7F 1B 78 */	mr r31, r3
/* 8011D530 0011A610  4B F1 93 29 */	bl length__5xVec2CFv
/* 8011D534 0011A614  7F E3 FB 78 */	mr r3, r31
/* 8011D538 0011A618  4B F1 92 FD */	bl __adv__5xVec2Ff
/* 8011D53C 0011A61C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011D540 0011A620  7F E3 FB 78 */	mr r3, r31
/* 8011D544 0011A624  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011D548 0011A628  7C 08 03 A6 */	mtlr r0
/* 8011D54C 0011A62C  38 21 00 10 */	addi r1, r1, 0x10
/* 8011D550 0011A630  4E 80 00 20 */	blr
.endfn normalize__5xVec2Fv

# 0x8011D554 - 0x8011D564
.section .text, "ax", unique, 2
.balign 4

# ztalkbox::callback::on_signal(unsigned int)
.fn on_signal__Q28ztalkbox8callbackFUi, weak
/* 8011D554 0011A634  4E 80 00 20 */	blr
.endfn on_signal__Q28ztalkbox8callbackFUi

# ztalkbox::callback::on_start()
.fn on_start__Q28ztalkbox8callbackFv, weak
/* 8011D558 0011A638  4E 80 00 20 */	blr
.endfn on_start__Q28ztalkbox8callbackFv

# ztalkbox::callback::on_stop()
.fn on_stop__Q28ztalkbox8callbackFv, weak
/* 8011D55C 0011A63C  4E 80 00 20 */	blr
.endfn on_stop__Q28ztalkbox8callbackFv

# ztalkbox::callback::on_answer(ztalkbox::answer_enum)
.fn on_answer__Q28ztalkbox8callbackFQ28ztalkbox11answer_enum, weak
/* 8011D560 0011A640  4E 80 00 20 */	blr
.endfn on_answer__Q28ztalkbox8callbackFQ28ztalkbox11answer_enum

# 0x8026B268 - 0x8026B948
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

.obj "@614", local
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
.endobj "@614"

.obj "@615", local
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
.endobj "@615"

.obj "@616", local
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
.endobj "@616"

.obj "@617", local
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
.endobj "@617"

.obj "@618", local
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
.endobj "@618"

.obj screen_bounds, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x3F800000
	.4byte 0x3F800000
.endobj screen_bounds

.obj default_adjust, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x3F800000
	.4byte 0x3F800000
.endobj default_adjust

.obj "@792", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@792"

.obj "@1080", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x3F800000
	.4byte 0x3F800000
.endobj "@1080"

.obj "@1081", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x3F800000
.endobj "@1081"

.obj "@1082", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@1082"

.obj "@1513", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@1513"

.obj "@1514", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x3F800000
.endobj "@1514"

.obj "@1515", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@1515"

.obj "@stringBase0", local
	.4byte 0x4F55545F
	.4byte 0x4F465F42
	.4byte 0x4F554E44
	.4byte 0x535F544C
	.4byte 0x4B425800
	.4byte 0x706C6179
	.4byte 0x65722E73
	.4byte 0x74617465
	.4byte 0x2E6F7574
	.4byte 0x5F6F665F
	.4byte 0x626F756E
	.4byte 0x64732E68
	.4byte 0x616E645F
	.4byte 0x6D6F6465
	.4byte 0x6C006861
	.4byte 0x6E640070
	.4byte 0x6C617965
	.4byte 0x722E7374
	.4byte 0x6174652E
	.4byte 0x6F75745F
	.4byte 0x6F665F62
	.4byte 0x6F756E64
	.4byte 0x732E6F75
	.4byte 0x745F7469
	.4byte 0x6D650070
	.4byte 0x6C617965
	.4byte 0x722E7374
	.4byte 0x6174652E
	.4byte 0x6F75745F
	.4byte 0x6F665F62
	.4byte 0x6F756E64
	.4byte 0x732E7265
	.4byte 0x7365745F
	.4byte 0x74696D65
	.4byte 0x00706C61
	.4byte 0x7965722E
	.4byte 0x73746174
	.4byte 0x652E6F75
	.4byte 0x745F6F66
	.4byte 0x5F626F75
	.4byte 0x6E64732E
	.4byte 0x63616D5F
	.4byte 0x64697374
	.4byte 0x00706C61
	.4byte 0x7965722E
	.4byte 0x73746174
	.4byte 0x652E6F75
	.4byte 0x745F6F66
	.4byte 0x5F626F75
	.4byte 0x6E64732E
	.4byte 0x63616D5F
	.4byte 0x68656967
	.4byte 0x68740070
	.4byte 0x6C617965
	.4byte 0x722E7374
	.4byte 0x6174652E
	.4byte 0x6F75745F
	.4byte 0x6F665F62
	.4byte 0x6F756E64
	.4byte 0x732E6361
	.4byte 0x6D5F7069
	.4byte 0x74636800
	.4byte 0x706C6179
	.4byte 0x65722E73
	.4byte 0x74617465
	.4byte 0x2E6F7574
	.4byte 0x5F6F665F
	.4byte 0x626F756E
	.4byte 0x64732E72
	.4byte 0x656F7269
	.4byte 0x656E745F
	.4byte 0x74696D65
	.4byte 0x00706C61
	.4byte 0x7965722E
	.4byte 0x73746174
	.4byte 0x652E6F75
	.4byte 0x745F6F66
	.4byte 0x5F626F75
	.4byte 0x6E64732E
	.4byte 0x696E5F6C
	.4byte 0x6F632E78
	.4byte 0x00706C61
	.4byte 0x7965722E
	.4byte 0x73746174
	.4byte 0x652E6F75
	.4byte 0x745F6F66
	.4byte 0x5F626F75
	.4byte 0x6E64732E
	.4byte 0x696E5F6C
	.4byte 0x6F632E79
	.4byte 0x00706C61
	.4byte 0x7965722E
	.4byte 0x73746174
	.4byte 0x652E6F75
	.4byte 0x745F6F66
	.4byte 0x5F626F75
	.4byte 0x6E64732E
	.4byte 0x6F75745F
	.4byte 0x6C6F632E
	.4byte 0x7800706C
	.4byte 0x61796572
	.4byte 0x2E737461
	.4byte 0x74652E6F
	.4byte 0x75745F6F
	.4byte 0x665F626F
	.4byte 0x756E6473
	.4byte 0x2E6F7574
	.4byte 0x5F6C6F63
	.4byte 0x2E790070
	.4byte 0x6C617965
	.4byte 0x722E7374
	.4byte 0x6174652E
	.4byte 0x6F75745F
	.4byte 0x6F665F62
	.4byte 0x6F756E64
	.4byte 0x732E6772
	.4byte 0x61622E69
	.4byte 0x6E5F7761
	.4byte 0x69745F74
	.4byte 0x696D6500
	.4byte 0x706C6179
	.4byte 0x65722E73
	.4byte 0x74617465
	.4byte 0x2E6F7574
	.4byte 0x5F6F665F
	.4byte 0x626F756E
	.4byte 0x64732E67
	.4byte 0x7261622E
	.4byte 0x696E5F76
	.4byte 0x656C0070
	.4byte 0x6C617965
	.4byte 0x722E7374
	.4byte 0x6174652E
	.4byte 0x6F75745F
	.4byte 0x6F665F62
	.4byte 0x6F756E64
	.4byte 0x732E6772
	.4byte 0x61622E69
	.4byte 0x6E5F7374
	.4byte 0x6F705F64
	.4byte 0x69737400
	.4byte 0x706C6179
	.4byte 0x65722E73
	.4byte 0x74617465
	.4byte 0x2E6F7574
	.4byte 0x5F6F665F
	.4byte 0x626F756E
	.4byte 0x64732E67
	.4byte 0x7261622E
	.4byte 0x6F75745F
	.4byte 0x77616974
	.4byte 0x5F74696D
	.4byte 0x6500706C
	.4byte 0x61796572
	.4byte 0x2E737461
	.4byte 0x74652E6F
	.4byte 0x75745F6F
	.4byte 0x665F626F
	.4byte 0x756E6473
	.4byte 0x2E677261
	.4byte 0x622E6F75
	.4byte 0x745F7665
	.4byte 0x6C00706C
	.4byte 0x61796572
	.4byte 0x2E737461
	.4byte 0x74652E6F
	.4byte 0x75745F6F
	.4byte 0x665F626F
	.4byte 0x756E6473
	.4byte 0x2E677261
	.4byte 0x622E6F75
	.4byte 0x745F7374
	.4byte 0x6172745F
	.4byte 0x64697374
	.4byte 0x00706C61
	.4byte 0x7965722E
	.4byte 0x73746174
	.4byte 0x652E6F75
	.4byte 0x745F6F66
	.4byte 0x5F626F75
	.4byte 0x6E64732E
	.4byte 0x67726162
	.4byte 0x2E666164
	.4byte 0x655F7374
	.4byte 0x6172745F
	.4byte 0x74696D65
	.4byte 0x00706C61
	.4byte 0x7965722E
	.4byte 0x73746174
	.4byte 0x652E6F75
	.4byte 0x745F6F66
	.4byte 0x5F626F75
	.4byte 0x6E64732E
	.4byte 0x67726162
	.4byte 0x2E666164
	.4byte 0x655F7469
	.4byte 0x6D650070
	.4byte 0x6C617965
	.4byte 0x722E7374
	.4byte 0x6174652E
	.4byte 0x6F75745F
	.4byte 0x6F665F62
	.4byte 0x6F756E64
	.4byte 0x732E6472
	.4byte 0x6F702E69
	.4byte 0x6E5F7665
	.4byte 0x6C00706C
	.4byte 0x61796572
	.4byte 0x2E737461
	.4byte 0x74652E6F
	.4byte 0x75745F6F
	.4byte 0x665F626F
	.4byte 0x756E6473
	.4byte 0x2E64726F
	.4byte 0x702E696E
	.4byte 0x5F73746F
	.4byte 0x705F6469
	.4byte 0x73740070
	.4byte 0x6C617965
	.4byte 0x722E7374
	.4byte 0x6174652E
	.4byte 0x6F75745F
	.4byte 0x6F665F62
	.4byte 0x6F756E64
	.4byte 0x732E6472
	.4byte 0x6F702E6F
	.4byte 0x75745F77
	.4byte 0x6169745F
	.4byte 0x74696D65
	.4byte 0x00706C61
	.4byte 0x7965722E
	.4byte 0x73746174
	.4byte 0x652E6F75
	.4byte 0x745F6F66
	.4byte 0x5F626F75
	.4byte 0x6E64732E
	.4byte 0x64726F70
	.4byte 0x2E6F7574
	.4byte 0x5F76656C
	.4byte 0x00706C61
	.4byte 0x7965722E
	.4byte 0x73746174
	.4byte 0x652E6F75
	.4byte 0x745F6F66
	.4byte 0x5F626F75
	.4byte 0x6E64732E
	.4byte 0x64726F70
	.4byte 0x2E6F7574
	.4byte 0x5F737461
	.4byte 0x72745F64
	.4byte 0x69737400
	.4byte 0x706C6179
	.4byte 0x65722E73
	.4byte 0x74617465
	.4byte 0x2E6F7574
	.4byte 0x5F6F665F
	.4byte 0x626F756E
	.4byte 0x64732E64
	.4byte 0x726F702E
	.4byte 0x66616465
	.4byte 0x5F737461
	.4byte 0x72745F74
	.4byte 0x696D6500
	.4byte 0x706C6179
	.4byte 0x65722E73
	.4byte 0x74617465
	.4byte 0x2E6F7574
	.4byte 0x5F6F665F
	.4byte 0x626F756E
	.4byte 0x64732E64
	.4byte 0x726F702E
	.4byte 0x66616465
	.4byte 0x5F74696D
	.4byte 0x6500706C
	.4byte 0x61796572
	.4byte 0x2E737461
	.4byte 0x74652E6F
	.4byte 0x75745F6F
	.4byte 0x665F626F
	.4byte 0x756E6473
	.4byte 0x2E68616E
	.4byte 0x645F7369
	.4byte 0x7A655F78
	.4byte 0x00706C61
	.4byte 0x7965722E
	.4byte 0x73746174
	.4byte 0x652E6F75
	.4byte 0x745F6F66
	.4byte 0x5F626F75
	.4byte 0x6E64732E
	.4byte 0x68616E64
	.4byte 0x5F73697A
	.4byte 0x655F7900
	.4byte 0x706C6179
	.4byte 0x65722E73
	.4byte 0x74617465
	.4byte 0x2E6F7574
	.4byte 0x5F6F665F
	.4byte 0x626F756E
	.4byte 0x64732E68
	.4byte 0x616E645F
	.4byte 0x79617700
	.4byte 0x706C6179
	.4byte 0x65722E73
	.4byte 0x74617465
	.4byte 0x2E6F7574
	.4byte 0x5F6F665F
	.4byte 0x626F756E
	.4byte 0x64732E68
	.4byte 0x616E645F
	.4byte 0x70697463
	.4byte 0x6800706C
	.4byte 0x61796572
	.4byte 0x2E737461
	.4byte 0x74652E6F
	.4byte 0x75745F6F
	.4byte 0x665F626F
	.4byte 0x756E6473
	.4byte 0x2E68616E
	.4byte 0x645F726F
	.4byte 0x6C6C006F
	.4byte 0x75745F6F
	.4byte 0x665F626F
	.4byte 0x756E6473
	.4byte 0x5F747874
	.byte 0x00
.endobj "@stringBase0"
	.4byte 0x00000000
	.byte 0x00, 0x00, 0x00

# 0x80297E48 - 0x80297F80
.data
.balign 8

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::shared
.obj "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@", local
	.4byte 0x00000001
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
	.4byte 0x00000000
.endobj "shared__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::idiot_levels
.obj "idiot_levels__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x48423031
	.4byte 0x00000000
	.4byte 0x4A463031
	.4byte 0x00000000
	.4byte 0x4A463033
	.4byte 0x00000000
	.4byte 0x42423031
	.4byte 0x00000000
	.4byte 0x474C3031
.endobj "idiot_levels__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::in_state_type::__vtable
.obj "__vt__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@13in_state_type", weak
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "start__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@13in_state_typeFv"
	.4byte "stop__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@13in_state_typeFv"
	.4byte "update__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@13in_state_typeFR6xSceneRf"
.endobj "__vt__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@13in_state_type"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::out_state_type::__vtable
.obj "__vt__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@14out_state_type", weak
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "start__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@14out_state_typeFv"
	.4byte "stop__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@14out_state_typeFv"
	.4byte "update__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@14out_state_typeFR6xSceneRf"
.endobj "__vt__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@14out_state_type"

# ztalkbox::callback::__vtable
.obj __vt__Q28ztalkbox8callback, weak
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte on_signal__Q28ztalkbox8callbackFUi
	.4byte on_start__Q28ztalkbox8callbackFv
	.4byte on_stop__Q28ztalkbox8callbackFv
	.4byte on_answer__Q28ztalkbox8callbackFQ28ztalkbox11answer_enum
.endobj __vt__Q28ztalkbox8callback

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type::tutorial_callback::__vtable
.obj "__vt__Q49oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_type17tutorial_callback", weak
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte on_signal__Q28ztalkbox8callbackFUi
	.4byte on_start__Q28ztalkbox8callbackFv
	.4byte "on_stop__Q49oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_type17tutorial_callbackFv"
	.4byte on_answer__Q28ztalkbox8callbackFQ28ztalkbox11answer_enum
.endobj "__vt__Q49oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_type17tutorial_callback"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::grab_state_type::__vtable
.obj "__vt__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_type", weak
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "start__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFv"
	.4byte "stop__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFv"
	.4byte "update__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_typeFR6xSceneRf"
.endobj "__vt__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15grab_state_type"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::state_type::__vtable
.obj "__vt__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@10state_type", weak
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "start__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@10state_typeFv"
	.4byte "stop__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@10state_typeFv"
	.4byte 0x00000000
.endobj "__vt__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@10state_type"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::drop_state_type::__vtable
.obj "__vt__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_type", weak
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "start__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFv"
	.4byte "stop__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFv"
	.4byte "update__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_typeFR6xSceneRf"
.endobj "__vt__Q39oob_state32@unnamed@zEntPlayerOOBState_cpp@15drop_state_type"
	.4byte 0x00000000

# 0x80314530 - 0x80314698
.section .bss, "wa", @nobits
.balign 8

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::fixed
.obj "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@", local
.sym ...bss.0, local
	.skip 0x7C
.endobj "fixed__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"

# oob_state::@unnamed@zEntPlayerOOBState_cpp@::shared_target
.obj "shared_target__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@", local
	.skip 0x40
.endobj "shared_target__Q29oob_state32@unnamed@zEntPlayerOOBState_cpp@"

.obj grab_state$1554, local
	.skip 0x68
.endobj grab_state$1554

.obj drop_state$1557, local
	.skip 0x44
.endobj drop_state$1557

# 0x803CBE10 - 0x803CBE30
.section .sbss, "wa", @nobits
.balign 8

.obj oob_player_teleported, global
	.skip 0x1
.endobj oob_player_teleported

.obj init$1549, local
	.skip 0x1
.endobj init$1549
	.skip 0x2

.obj in_state$1548, local
	.skip 0x8
.endobj in_state$1548

.obj init$1552, local
	.skip 0x1
.endobj init$1552
	.skip 0x3

.obj out_state$1551, local
	.skip 0x8
.endobj out_state$1551

.obj init$1555, local
	.skip 0x1
.endobj init$1555

.obj init$1558, local
	.skip 0x1
.endobj init$1558
	.skip 0x6

# 0x803CE928 - 0x803CE990
.section .sdata2, "a"
.balign 8

.obj "@1033", local
	.4byte 0x00000000
.endobj "@1033"

.obj "@1034", local
	.4byte 0x3E99999A
.endobj "@1034"

.obj "@1035", local
	.4byte 0x3DCCCCCD
.endobj "@1035"

.obj "@1036", local
	.4byte 0x40490FDB
.endobj "@1036"

.obj "@1041", local
	.4byte 0x3F800000
.endobj "@1041"

.obj "@1048", local
	.4byte 0x3F000000
.endobj "@1048"

.obj "@1049", local
	.4byte 0x40400000
.endobj "@1049"

.obj "@1118", local
	.4byte 0x3FAAAAAB
.endobj "@1118"

.obj "@1475", local
	.4byte 0x437F0000
.endobj "@1475"

.obj "@1476", local
	.4byte 0x44200000
.endobj "@1476"

.obj "@1477", local
	.4byte 0x43F00000
.endobj "@1477"

.obj "@1533", local
	.4byte 0x41100000
.endobj "@1533"

.obj "@1534", local
	.4byte 0x3C8EFA35
.endobj "@1534"

.obj "@1535", local
	.4byte 0x41200000
.endobj "@1535"

.obj "@1536", local
	.4byte 0x3E800000
.endobj "@1536"

.obj "@1537", local
	.4byte 0x3E4CCCCD
.endobj "@1537"

.obj "@1538", local
	.4byte 0x40000000
.endobj "@1538"

.obj "@1539", local
	.4byte 0x3D4CCCCD
.endobj "@1539"

.obj "@1540", local
	.4byte 0x3FC00000
.endobj "@1540"

.obj "@1541", local
	.4byte 0x3ECCCCCD
.endobj "@1541"

.obj "@1542", local
	.4byte 0x42B40000
.endobj "@1542"

.obj "@1716", local
	.4byte 0xBF800000
.endobj "@1716"

.obj "@1832", local
	.4byte 0x7E967699
.endobj "@1832"

.obj "@1833", local
	.4byte 0x3C23D70A
.endobj "@1833"

.obj "@1834", local
	.4byte 0x3A83126F
.endobj "@1834"
	.4byte 0x00000000

# 0x803D08D0 - 0x803D08D8
.section .sbss2, "a", @nobits
.balign 8

.obj "@1469", local
	.skip 0x4
.endobj "@1469"
	.skip 0x4
