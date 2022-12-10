.include "macros.inc"
.file "zCamera.cpp"

# 0x8004FBFC - 0x80052524
.text
.balign 4

# zCameraReset(xCamera*)
.fn zCameraReset__FP7xCamera, global
/* 8004FBFC 0004CCDC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8004FC00 0004CCE0  7C 08 02 A6 */	mflr r0
/* 8004FC04 0004CCE4  90 01 00 34 */	stw r0, 0x34(r1)
/* 8004FC08 0004CCE8  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8004FC0C 0004CCEC  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8004FC10 0004CCF0  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 8004FC14 0004CCF4  F3 C1 00 18 */	psq_st f30, 0x18(r1), 0, qr0
/* 8004FC18 0004CCF8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8004FC1C 0004CCFC  38 00 00 00 */	li r0, 0x0
/* 8004FC20 0004CD00  7C 7F 1B 78 */	mr r31, r3
/* 8004FC24 0004CD04  90 0D 8B 80 */	stw r0, zcam_mode@sda21(r13)
/* 8004FC28 0004CD08  90 0D 8B 84 */	stw r0, zcam_bbounce@sda21(r13)
/* 8004FC2C 0004CD0C  90 0D 8B 88 */	stw r0, zcam_lbbounce@sda21(r13)
/* 8004FC30 0004CD10  90 0D 8B 90 */	stw r0, zcam_lconvers@sda21(r13)
/* 8004FC34 0004CD14  90 0D 8B 94 */	stw r0, zcam_longbounce@sda21(r13)
/* 8004FC38 0004CD18  90 0D 8B 98 */	stw r0, zcam_highbounce@sda21(r13)
/* 8004FC3C 0004CD1C  90 0D 8B 8C */	stw r0, zcam_convers@sda21(r13)
/* 8004FC40 0004CD20  90 0D 8B A8 */	stw r0, zcam_fly@sda21(r13)
/* 8004FC44 0004CD24  90 0D 8B AC */	stw r0, zcam_flypaused@sda21(r13)
/* 8004FC48 0004CD28  90 0D 8B 9C */	stw r0, zcam_cutscene@sda21(r13)
/* 8004FC4C 0004CD2C  90 0D 8B A0 */	stw r0, zcam_reward@sda21(r13)
/* 8004FC50 0004CD30  C0 02 88 18 */	lfs f0, "@819"@sda21(r2)
/* 8004FC54 0004CD34  D0 0D 8B CC */	stfs f0, zcam_fovcurr@sda21(r13)
/* 8004FC58 0004CD38  C0 02 88 1C */	lfs f0, "@820"@sda21(r2)
/* 8004FC5C 0004CD3C  D0 0D 8B 78 */	stfs f0, zcam_overrot_tmr@sda21(r13)
/* 8004FC60 0004CD40  90 0D 8B E0 */	stw r0, "wall_jump_enabled__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 8004FC64 0004CD44  98 0D 8B D8 */	stb r0, "lassocam_enabled__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 8004FC68 0004CD48  90 0D 8B D4 */	stw r0, "stop_track__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 8004FC6C 0004CD4C  C0 02 88 20 */	lfs f0, "@821"@sda21(r2)
/* 8004FC70 0004CD50  D0 0D 81 3C */	stfs f0, zcam_mintgtheight@sda21(r13)
/* 8004FC74 0004CD54  C0 22 88 18 */	lfs f1, "@819"@sda21(r2)
/* 8004FC78 0004CD58  4B FB E8 19 */	bl xCameraSetFOV__FP7xCameraf
/* 8004FC7C 0004CD5C  C0 22 88 1C */	lfs f1, "@820"@sda21(r2)
/* 8004FC80 0004CD60  48 12 F6 A9 */	bl zCameraTweakGlobal_Update__Ff
/* 8004FC84 0004CD64  48 00 00 71 */	bl "GetCurrentPitch__21@unnamed@zCamera_cpp@Fv"
/* 8004FC88 0004CD68  FF C0 08 90 */	fmr f30, f1
/* 8004FC8C 0004CD6C  48 00 00 9D */	bl "GetCurrentH__21@unnamed@zCamera_cpp@Fv"
/* 8004FC90 0004CD70  FF E0 08 90 */	fmr f31, f1
/* 8004FC94 0004CD74  48 00 01 09 */	bl "GetCurrentD__21@unnamed@zCamera_cpp@Fv"
/* 8004FC98 0004CD78  FC 40 F8 90 */	fmr f2, f31
/* 8004FC9C 0004CD7C  7F E3 FB 78 */	mr r3, r31
/* 8004FCA0 0004CD80  FC 60 F0 90 */	fmr f3, f30
/* 8004FCA4 0004CD84  4B FB B7 05 */	bl xCameraReset__FP7xCamerafff
/* 8004FCA8 0004CD88  38 00 00 01 */	li r0, 0x1
/* 8004FCAC 0004CD8C  98 0D 81 40 */	stb r0, "input_enabled__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 8004FCB0 0004CD90  C0 02 88 24 */	lfs f0, "@822"@sda21(r2)
/* 8004FCB4 0004CD94  D0 0D 8B E4 */	stfs f0, "dMultiplier__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 8004FCB8 0004CD98  C0 02 88 1C */	lfs f0, "@820"@sda21(r2)
/* 8004FCBC 0004CD9C  D0 0D 8B E8 */	stfs f0, "dOffset__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 8004FCC0 0004CDA0  C0 02 88 24 */	lfs f0, "@822"@sda21(r2)
/* 8004FCC4 0004CDA4  D0 0D 8B EC */	stfs f0, "hMultiplier__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 8004FCC8 0004CDA8  C0 02 88 1C */	lfs f0, "@820"@sda21(r2)
/* 8004FCCC 0004CDAC  D0 0D 8B F0 */	stfs f0, "hOffset__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 8004FCD0 0004CDB0  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 8004FCD4 0004CDB4  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8004FCD8 0004CDB8  E3 C1 00 18 */	psq_l f30, 0x18(r1), 0, qr0
/* 8004FCDC 0004CDBC  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 8004FCE0 0004CDC0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8004FCE4 0004CDC4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8004FCE8 0004CDC8  7C 08 03 A6 */	mtlr r0
/* 8004FCEC 0004CDCC  38 21 00 30 */	addi r1, r1, 0x30
/* 8004FCF0 0004CDD0  4E 80 00 20 */	blr
.endfn zCameraReset__FP7xCamera

# @unnamed@zCamera_cpp@::GetCurrentPitch()
.fn "GetCurrentPitch__21@unnamed@zCamera_cpp@Fv", local
/* 8004FCF4 0004CDD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004FCF8 0004CDD8  7C 08 02 A6 */	mflr r0
/* 8004FCFC 0004CDDC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004FD00 0004CDE0  80 0D 8B 98 */	lwz r0, zcam_highbounce@sda21(r13)
/* 8004FD04 0004CDE4  2C 00 00 00 */	cmpwi r0, 0x0
/* 8004FD08 0004CDE8  41 82 00 0C */	beq .L_8004FD14
/* 8004FD0C 0004CDEC  C0 2D 81 14 */	lfs f1, zcam_highbounce_pitch@sda21(r13)
/* 8004FD10 0004CDF0  48 00 00 08 */	b .L_8004FD18
.L_8004FD14:
/* 8004FD14 0004CDF4  48 12 F7 25 */	bl zCameraTweakGlobal_GetPitch__Fv
.L_8004FD18:
/* 8004FD18 0004CDF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004FD1C 0004CDFC  7C 08 03 A6 */	mtlr r0
/* 8004FD20 0004CE00  38 21 00 10 */	addi r1, r1, 0x10
/* 8004FD24 0004CE04  4E 80 00 20 */	blr
.endfn "GetCurrentPitch__21@unnamed@zCamera_cpp@Fv"

# @unnamed@zCamera_cpp@::GetCurrentH()
.fn "GetCurrentH__21@unnamed@zCamera_cpp@Fv", local
/* 8004FD28 0004CE08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004FD2C 0004CE0C  7C 08 02 A6 */	mflr r0
/* 8004FD30 0004CE10  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004FD34 0004CE14  48 00 00 21 */	bl "_GetCurrentH__21@unnamed@zCamera_cpp@Fv"
/* 8004FD38 0004CE18  C0 4D 8B E4 */	lfs f2, "dMultiplier__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 8004FD3C 0004CE1C  C0 0D 8B E8 */	lfs f0, "dOffset__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 8004FD40 0004CE20  EC 22 00 7A */	fmadds f1, f2, f1, f0
/* 8004FD44 0004CE24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004FD48 0004CE28  7C 08 03 A6 */	mtlr r0
/* 8004FD4C 0004CE2C  38 21 00 10 */	addi r1, r1, 0x10
/* 8004FD50 0004CE30  4E 80 00 20 */	blr
.endfn "GetCurrentH__21@unnamed@zCamera_cpp@Fv"

# @unnamed@zCamera_cpp@::_GetCurrentH()
.fn "_GetCurrentH__21@unnamed@zCamera_cpp@Fv", local
/* 8004FD54 0004CE34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004FD58 0004CE38  7C 08 02 A6 */	mflr r0
/* 8004FD5C 0004CE3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004FD60 0004CE40  80 0D 8B 98 */	lwz r0, zcam_highbounce@sda21(r13)
/* 8004FD64 0004CE44  2C 00 00 00 */	cmpwi r0, 0x0
/* 8004FD68 0004CE48  41 82 00 0C */	beq .L_8004FD74
/* 8004FD6C 0004CE4C  C0 2D 81 10 */	lfs f1, zcam_highbounce_h@sda21(r13)
/* 8004FD70 0004CE50  48 00 00 1C */	b .L_8004FD8C
.L_8004FD74:
/* 8004FD74 0004CE54  80 0D 8B E0 */	lwz r0, "wall_jump_enabled__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 8004FD78 0004CE58  2C 00 00 02 */	cmpwi r0, 0x2
/* 8004FD7C 0004CE5C  40 82 00 0C */	bne .L_8004FD88
/* 8004FD80 0004CE60  C0 2D 80 EC */	lfs f1, zcam_wall_h@sda21(r13)
/* 8004FD84 0004CE64  48 00 00 08 */	b .L_8004FD8C
.L_8004FD88:
/* 8004FD88 0004CE68  48 12 F6 A9 */	bl zCameraTweakGlobal_GetH__Fv
.L_8004FD8C:
/* 8004FD8C 0004CE6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004FD90 0004CE70  7C 08 03 A6 */	mtlr r0
/* 8004FD94 0004CE74  38 21 00 10 */	addi r1, r1, 0x10
/* 8004FD98 0004CE78  4E 80 00 20 */	blr
.endfn "_GetCurrentH__21@unnamed@zCamera_cpp@Fv"

# @unnamed@zCamera_cpp@::GetCurrentD()
.fn "GetCurrentD__21@unnamed@zCamera_cpp@Fv", local
/* 8004FD9C 0004CE7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004FDA0 0004CE80  7C 08 02 A6 */	mflr r0
/* 8004FDA4 0004CE84  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004FDA8 0004CE88  48 00 00 21 */	bl "_GetCurrentD__21@unnamed@zCamera_cpp@Fv"
/* 8004FDAC 0004CE8C  C0 4D 8B E4 */	lfs f2, "dMultiplier__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 8004FDB0 0004CE90  C0 0D 8B E8 */	lfs f0, "dOffset__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 8004FDB4 0004CE94  EC 22 00 7A */	fmadds f1, f2, f1, f0
/* 8004FDB8 0004CE98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004FDBC 0004CE9C  7C 08 03 A6 */	mtlr r0
/* 8004FDC0 0004CEA0  38 21 00 10 */	addi r1, r1, 0x10
/* 8004FDC4 0004CEA4  4E 80 00 20 */	blr
.endfn "GetCurrentD__21@unnamed@zCamera_cpp@Fv"

# @unnamed@zCamera_cpp@::_GetCurrentD()
.fn "_GetCurrentD__21@unnamed@zCamera_cpp@Fv", local
/* 8004FDC8 0004CEA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004FDCC 0004CEAC  7C 08 02 A6 */	mflr r0
/* 8004FDD0 0004CEB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004FDD4 0004CEB4  80 0D 8B 98 */	lwz r0, zcam_highbounce@sda21(r13)
/* 8004FDD8 0004CEB8  2C 00 00 00 */	cmpwi r0, 0x0
/* 8004FDDC 0004CEBC  41 82 00 0C */	beq .L_8004FDE8
/* 8004FDE0 0004CEC0  C0 2D 81 0C */	lfs f1, zcam_highbounce_d@sda21(r13)
/* 8004FDE4 0004CEC4  48 00 00 1C */	b .L_8004FE00
.L_8004FDE8:
/* 8004FDE8 0004CEC8  80 0D 8B E0 */	lwz r0, "wall_jump_enabled__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 8004FDEC 0004CECC  2C 00 00 02 */	cmpwi r0, 0x2
/* 8004FDF0 0004CED0  40 82 00 0C */	bne .L_8004FDFC
/* 8004FDF4 0004CED4  C0 2D 80 E8 */	lfs f1, zcam_wall_d@sda21(r13)
/* 8004FDF8 0004CED8  48 00 00 08 */	b .L_8004FE00
.L_8004FDFC:
/* 8004FDFC 0004CEDC  48 12 F6 2D */	bl zCameraTweakGlobal_GetD__Fv
.L_8004FE00:
/* 8004FE00 0004CEE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004FE04 0004CEE4  7C 08 03 A6 */	mtlr r0
/* 8004FE08 0004CEE8  38 21 00 10 */	addi r1, r1, 0x10
/* 8004FE0C 0004CEEC  4E 80 00 20 */	blr
.endfn "_GetCurrentD__21@unnamed@zCamera_cpp@Fv"

# EaseInOut(float)
.fn EaseInOut__Ff, local
/* 8004FE10 0004CEF0  C0 62 88 30 */	lfs f3, "@840"@sda21(r2)
/* 8004FE14 0004CEF4  C0 42 88 2C */	lfs f2, "@839"@sda21(r2)
/* 8004FE18 0004CEF8  C0 02 88 28 */	lfs f0, "@838"@sda21(r2)
/* 8004FE1C 0004CEFC  EC 43 10 7C */	fnmsubs f2, f3, f1, f2
/* 8004FE20 0004CF00  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 8004FE24 0004CF04  EC 21 00 32 */	fmuls f1, f1, f0
/* 8004FE28 0004CF08  4E 80 00 20 */	blr
.endfn EaseInOut__Ff

# zCameraConversUpdate(xCamera*, float)
.fn zCameraConversUpdate__FP7xCameraf, local
/* 8004FE2C 0004CF0C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8004FE30 0004CF10  7C 08 02 A6 */	mflr r0
/* 8004FE34 0004CF14  90 01 00 54 */	stw r0, 0x54(r1)
/* 8004FE38 0004CF18  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8004FE3C 0004CF1C  F3 E1 00 48 */	psq_st f31, 0x48(r1), 0, qr0
/* 8004FE40 0004CF20  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 8004FE44 0004CF24  F3 C1 00 38 */	psq_st f30, 0x38(r1), 0, qr0
/* 8004FE48 0004CF28  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8004FE4C 0004CF2C  80 8D 8B C0 */	lwz r4, zcam_dest@sda21(r13)
/* 8004FE50 0004CF30  FF E0 08 90 */	fmr f31, f1
/* 8004FE54 0004CF34  7C 7F 1B 78 */	mr r31, r3
/* 8004FE58 0004CF38  28 04 00 00 */	cmplwi r4, 0x0
/* 8004FE5C 0004CF3C  41 82 01 28 */	beq .L_8004FF84
/* 8004FE60 0004CF40  C0 4D 8B C4 */	lfs f2, zcam_tmr@sda21(r13)
/* 8004FE64 0004CF44  C0 02 88 1C */	lfs f0, "@820"@sda21(r2)
/* 8004FE68 0004CF48  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8004FE6C 0004CF4C  4C 40 13 82 */	cror eq, lt, eq
/* 8004FE70 0004CF50  40 82 00 0C */	bne .L_8004FE7C
/* 8004FE74 0004CF54  D0 0D 8B C4 */	stfs f0, zcam_tmr@sda21(r13)
/* 8004FE78 0004CF58  48 00 01 0C */	b .L_8004FF84
.L_8004FE7C:
/* 8004FE7C 0004CF5C  EC 1F 10 24 */	fdivs f0, f31, f2
/* 8004FE80 0004CF60  C0 22 88 24 */	lfs f1, "@822"@sda21(r2)
/* 8004FE84 0004CF64  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8004FE88 0004CF68  40 81 00 4C */	ble .L_8004FED4
/* 8004FE8C 0004CF6C  38 7F 00 14 */	addi r3, r31, 0x14
/* 8004FE90 0004CF70  38 84 00 2C */	addi r4, r4, 0x2c
/* 8004FE94 0004CF74  4B FB B3 D1 */	bl __as__5xVec3FRC5xVec3
/* 8004FE98 0004CF78  80 8D 8B C0 */	lwz r4, zcam_dest@sda21(r13)
/* 8004FE9C 0004CF7C  38 7F 00 24 */	addi r3, r31, 0x24
/* 8004FEA0 0004CF80  38 84 00 20 */	addi r4, r4, 0x20
/* 8004FEA4 0004CF84  4B FB B3 C1 */	bl __as__5xVec3FRC5xVec3
/* 8004FEA8 0004CF88  80 8D 8B C0 */	lwz r4, zcam_dest@sda21(r13)
/* 8004FEAC 0004CF8C  38 7F 00 34 */	addi r3, r31, 0x34
/* 8004FEB0 0004CF90  38 84 00 14 */	addi r4, r4, 0x14
/* 8004FEB4 0004CF94  4B FB B3 B1 */	bl __as__5xVec3FRC5xVec3
/* 8004FEB8 0004CF98  80 8D 8B C0 */	lwz r4, zcam_dest@sda21(r13)
/* 8004FEBC 0004CF9C  38 7F 00 44 */	addi r3, r31, 0x44
/* 8004FEC0 0004CFA0  38 84 00 08 */	addi r4, r4, 0x8
/* 8004FEC4 0004CFA4  4B FB B3 A1 */	bl __as__5xVec3FRC5xVec3
/* 8004FEC8 0004CFA8  C0 0D 8B D0 */	lfs f0, zcam_fovdest@sda21(r13)
/* 8004FECC 0004CFAC  D0 0D 8B CC */	stfs f0, zcam_fovcurr@sda21(r13)
/* 8004FED0 0004CFB0  48 00 00 A8 */	b .L_8004FF78
.L_8004FED4:
/* 8004FED4 0004CFB4  C0 0D 8B C8 */	lfs f0, zcam_ttm@sda21(r13)
/* 8004FED8 0004CFB8  EC 02 00 24 */	fdivs f0, f2, f0
/* 8004FEDC 0004CFBC  EC 21 00 28 */	fsubs f1, f1, f0
/* 8004FEE0 0004CFC0  4B FF FF 31 */	bl EaseInOut__Ff
/* 8004FEE4 0004CFC4  C0 4D 8B C4 */	lfs f2, zcam_tmr@sda21(r13)
/* 8004FEE8 0004CFC8  FF C0 08 90 */	fmr f30, f1
/* 8004FEEC 0004CFCC  C0 0D 8B C8 */	lfs f0, zcam_ttm@sda21(r13)
/* 8004FEF0 0004CFD0  EC 22 F8 28 */	fsubs f1, f2, f31
/* 8004FEF4 0004CFD4  C0 42 88 24 */	lfs f2, "@822"@sda21(r2)
/* 8004FEF8 0004CFD8  EC 01 00 24 */	fdivs f0, f1, f0
/* 8004FEFC 0004CFDC  EC 22 00 28 */	fsubs f1, f2, f0
/* 8004FF00 0004CFE0  4B FF FF 11 */	bl EaseInOut__Ff
/* 8004FF04 0004CFE4  C0 02 88 24 */	lfs f0, "@822"@sda21(r2)
/* 8004FF08 0004CFE8  EC 21 F0 28 */	fsubs f1, f1, f30
/* 8004FF0C 0004CFEC  38 61 00 18 */	addi r3, r1, 0x18
/* 8004FF10 0004CFF0  38 9F 00 14 */	addi r4, r31, 0x14
/* 8004FF14 0004CFF4  EC 00 F0 28 */	fsubs f0, f0, f30
/* 8004FF18 0004CFF8  EF C1 00 24 */	fdivs f30, f1, f0
/* 8004FF1C 0004CFFC  4B FE 2D 69 */	bl xQuatFromMat__FP5xQuatPC7xMat3x3
/* 8004FF20 0004D000  FC 20 F0 90 */	fmr f1, f30
/* 8004FF24 0004D004  3C 60 80 3C */	lis r3, zcam_quat@ha
/* 8004FF28 0004D008  38 A3 F5 F0 */	addi r5, r3, zcam_quat@l
/* 8004FF2C 0004D00C  38 81 00 18 */	addi r4, r1, 0x18
/* 8004FF30 0004D010  38 61 00 08 */	addi r3, r1, 0x8
/* 8004FF34 0004D014  4B FE 31 9D */	bl xQuatSlerp__FP5xQuatPC5xQuatPC5xQuatf
/* 8004FF38 0004D018  38 61 00 08 */	addi r3, r1, 0x8
/* 8004FF3C 0004D01C  38 9F 00 14 */	addi r4, r31, 0x14
/* 8004FF40 0004D020  4B FE 2F C1 */	bl xQuatToMat__FPC5xQuatP7xMat3x3
/* 8004FF44 0004D024  80 AD 8B C0 */	lwz r5, zcam_dest@sda21(r13)
/* 8004FF48 0004D028  FC 20 F0 90 */	fmr f1, f30
/* 8004FF4C 0004D02C  38 7F 00 44 */	addi r3, r31, 0x44
/* 8004FF50 0004D030  7C 64 1B 78 */	mr r4, r3
/* 8004FF54 0004D034  38 A5 00 08 */	addi r5, r5, 0x8
/* 8004FF58 0004D038  4B FC 7D 9D */	bl xVec3Lerp__FP5xVec3PC5xVec3PC5xVec3f
/* 8004FF5C 0004D03C  C0 22 88 24 */	lfs f1, "@822"@sda21(r2)
/* 8004FF60 0004D040  C0 0D 8B D0 */	lfs f0, zcam_fovdest@sda21(r13)
/* 8004FF64 0004D044  EC 21 F0 28 */	fsubs f1, f1, f30
/* 8004FF68 0004D048  C0 4D 8B CC */	lfs f2, zcam_fovcurr@sda21(r13)
/* 8004FF6C 0004D04C  EC 00 07 B2 */	fmuls f0, f0, f30
/* 8004FF70 0004D050  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8004FF74 0004D054  D0 0D 8B CC */	stfs f0, zcam_fovcurr@sda21(r13)
.L_8004FF78:
/* 8004FF78 0004D058  C0 0D 8B C4 */	lfs f0, zcam_tmr@sda21(r13)
/* 8004FF7C 0004D05C  EC 00 F8 28 */	fsubs f0, f0, f31
/* 8004FF80 0004D060  D0 0D 8B C4 */	stfs f0, zcam_tmr@sda21(r13)
.L_8004FF84:
/* 8004FF84 0004D064  E3 E1 00 48 */	psq_l f31, 0x48(r1), 0, qr0
/* 8004FF88 0004D068  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8004FF8C 0004D06C  E3 C1 00 38 */	psq_l f30, 0x38(r1), 0, qr0
/* 8004FF90 0004D070  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 8004FF94 0004D074  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8004FF98 0004D078  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8004FF9C 0004D07C  7C 08 03 A6 */	mtlr r0
/* 8004FFA0 0004D080  38 21 00 50 */	addi r1, r1, 0x50
/* 8004FFA4 0004D084  4E 80 00 20 */	blr
.endfn zCameraConversUpdate__FP7xCameraf

# TranSpeed(zFlyKey*)
.fn TranSpeed__FP7zFlyKey, local
/* 8004FFA8 0004D088  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004FFAC 0004D08C  7C 08 02 A6 */	mflr r0
/* 8004FFB0 0004D090  7C 64 1B 78 */	mr r4, r3
/* 8004FFB4 0004D094  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004FFB8 0004D098  38 64 00 28 */	addi r3, r4, 0x28
/* 8004FFBC 0004D09C  38 84 00 68 */	addi r4, r4, 0x68
/* 8004FFC0 0004D0A0  4B FC 51 31 */	bl xVec3Dist__FPC5xVec3PC5xVec3
/* 8004FFC4 0004D0A4  C0 02 88 34 */	lfs f0, "@867"@sda21(r2)
/* 8004FFC8 0004D0A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004FFCC 0004D0AC  EC 20 00 72 */	fmuls f1, f0, f1
/* 8004FFD0 0004D0B0  7C 08 03 A6 */	mtlr r0
/* 8004FFD4 0004D0B4  38 21 00 10 */	addi r1, r1, 0x10
/* 8004FFD8 0004D0B8  4E 80 00 20 */	blr
.endfn TranSpeed__FP7zFlyKey

# MatrixSpeed(zFlyKey*)
.fn MatrixSpeed__FP7zFlyKey, local
/* 8004FFDC 0004D0BC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8004FFE0 0004D0C0  7C 08 02 A6 */	mflr r0
/* 8004FFE4 0004D0C4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8004FFE8 0004D0C8  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8004FFEC 0004D0CC  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8004FFF0 0004D0D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8004FFF4 0004D0D4  7C 7F 1B 78 */	mr r31, r3
/* 8004FFF8 0004D0D8  38 7F 00 04 */	addi r3, r31, 0x4
/* 8004FFFC 0004D0DC  38 9F 00 44 */	addi r4, r31, 0x44
/* 80050000 0004D0E0  4B FF E4 F1 */	bl xVec3Dot__FPC5xVec3PC5xVec3
/* 80050004 0004D0E4  FF E0 0A 10 */	fabs f31, f1
/* 80050008 0004D0E8  38 7F 00 10 */	addi r3, r31, 0x10
/* 8005000C 0004D0EC  38 9F 00 50 */	addi r4, r31, 0x50
/* 80050010 0004D0F0  FF E0 F8 18 */	frsp f31, f31
/* 80050014 0004D0F4  4B FF E4 DD */	bl xVec3Dot__FPC5xVec3PC5xVec3
/* 80050018 0004D0F8  FC 00 0A 10 */	fabs f0, f1
/* 8005001C 0004D0FC  FC 00 00 18 */	frsp f0, f0
/* 80050020 0004D100  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 80050024 0004D104  40 81 00 18 */	ble .L_8005003C
/* 80050028 0004D108  38 7F 00 10 */	addi r3, r31, 0x10
/* 8005002C 0004D10C  38 9F 00 50 */	addi r4, r31, 0x50
/* 80050030 0004D110  4B FF E4 C1 */	bl xVec3Dot__FPC5xVec3PC5xVec3
/* 80050034 0004D114  FF E0 0A 10 */	fabs f31, f1
/* 80050038 0004D118  FF E0 F8 18 */	frsp f31, f31
.L_8005003C:
/* 8005003C 0004D11C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 80050040 0004D120  38 9F 00 5C */	addi r4, r31, 0x5c
/* 80050044 0004D124  4B FF E4 AD */	bl xVec3Dot__FPC5xVec3PC5xVec3
/* 80050048 0004D128  FC 00 0A 10 */	fabs f0, f1
/* 8005004C 0004D12C  FC 00 00 18 */	frsp f0, f0
/* 80050050 0004D130  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 80050054 0004D134  40 81 00 18 */	ble .L_8005006C
/* 80050058 0004D138  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8005005C 0004D13C  38 9F 00 5C */	addi r4, r31, 0x5c
/* 80050060 0004D140  4B FF E4 91 */	bl xVec3Dot__FPC5xVec3PC5xVec3
/* 80050064 0004D144  FF E0 0A 10 */	fabs f31, f1
/* 80050068 0004D148  FF E0 F8 18 */	frsp f31, f31
.L_8005006C:
/* 8005006C 0004D14C  C0 22 88 24 */	lfs f1, "@822"@sda21(r2)
/* 80050070 0004D150  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 80050074 0004D154  40 80 00 08 */	bge .L_8005007C
/* 80050078 0004D158  48 00 00 08 */	b .L_80050080
.L_8005007C:
/* 8005007C 0004D15C  FC 20 F8 90 */	fmr f1, f31
.L_80050080:
/* 80050080 0004D160  4B FB E6 91 */	bl xacos__Ff
/* 80050084 0004D164  C0 42 88 3C */	lfs f2, "@891"@sda21(r2)
/* 80050088 0004D168  C0 02 88 34 */	lfs f0, "@867"@sda21(r2)
/* 8005008C 0004D16C  EC 22 00 72 */	fmuls f1, f2, f1
/* 80050090 0004D170  EC 20 00 72 */	fmuls f1, f0, f1
/* 80050094 0004D174  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 80050098 0004D178  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005009C 0004D17C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 800500A0 0004D180  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800500A4 0004D184  7C 08 03 A6 */	mtlr r0
/* 800500A8 0004D188  38 21 00 20 */	addi r1, r1, 0x20
/* 800500AC 0004D18C  4E 80 00 20 */	blr
.endfn MatrixSpeed__FP7zFlyKey

# zCameraFlyUpdate(xCamera*, float)
.fn zCameraFlyUpdate__FP7xCameraf, local
/* 800500B0 0004D190  94 21 FE 30 */	stwu r1, -0x1d0(r1)
/* 800500B4 0004D194  7C 08 02 A6 */	mflr r0
/* 800500B8 0004D198  90 01 01 D4 */	stw r0, 0x1d4(r1)
/* 800500BC 0004D19C  DB E1 01 C0 */	stfd f31, 0x1c0(r1)
/* 800500C0 0004D1A0  F3 E1 01 C8 */	psq_st f31, 0x1c8(r1), 0, qr0
/* 800500C4 0004D1A4  DB C1 01 B0 */	stfd f30, 0x1b0(r1)
/* 800500C8 0004D1A8  F3 C1 01 B8 */	psq_st f30, 0x1b8(r1), 0, qr0
/* 800500CC 0004D1AC  DB A1 01 A0 */	stfd f29, 0x1a0(r1)
/* 800500D0 0004D1B0  F3 A1 01 A8 */	psq_st f29, 0x1a8(r1), 0, qr0
/* 800500D4 0004D1B4  DB 81 01 90 */	stfd f28, 0x190(r1)
/* 800500D8 0004D1B8  F3 81 01 98 */	psq_st f28, 0x198(r1), 0, qr0
/* 800500DC 0004D1BC  BF 61 01 7C */	stmw r27, 0x17c(r1)
/* 800500E0 0004D1C0  3C 80 80 3C */	lis r4, globals@ha
/* 800500E4 0004D1C4  FF C0 08 90 */	fmr f30, f1
/* 800500E8 0004D1C8  38 84 05 58 */	addi r4, r4, globals@l
/* 800500EC 0004D1CC  7C 7E 1B 78 */	mr r30, r3
/* 800500F0 0004D1D0  80 64 03 1C */	lwz r3, 0x31c(r4)
/* 800500F4 0004D1D4  80 03 00 30 */	lwz r0, 0x30(r3)
/* 800500F8 0004D1D8  74 00 00 05 */	andis. r0, r0, 0x5
/* 800500FC 0004D1DC  41 82 00 3C */	beq .L_80050138
/* 80050100 0004D1E0  C0 2D 8B B8 */	lfs f1, zcam_flytime@sda21(r13)
/* 80050104 0004D1E4  C0 0D 82 BC */	lfs f0, gSkipTimeFlythrough@sda21(r13)
/* 80050108 0004D1E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005010C 0004D1EC  40 81 00 2C */	ble .L_80050138
/* 80050110 0004D1F0  80 6D 8B B4 */	lwz r3, zcam_flysize@sda21(r13)
/* 80050114 0004D1F4  3C 00 43 30 */	lis r0, 0x4330
/* 80050118 0004D1F8  90 01 01 68 */	stw r0, 0x168(r1)
/* 8005011C 0004D1FC  C8 22 88 50 */	lfd f1, "@975"@sda21(r2)
/* 80050120 0004D200  90 61 01 6C */	stw r3, 0x16c(r1)
/* 80050124 0004D204  C0 42 88 40 */	lfs f2, "@970"@sda21(r2)
/* 80050128 0004D208  C8 01 01 68 */	lfd f0, 0x168(r1)
/* 8005012C 0004D20C  EC 00 08 28 */	fsubs f0, f0, f1
/* 80050130 0004D210  EC 02 00 32 */	fmuls f0, f2, f0
/* 80050134 0004D214  D0 0D 8B B8 */	stfs f0, zcam_flytime@sda21(r13)
.L_80050138:
/* 80050138 0004D218  C0 22 88 34 */	lfs f1, "@867"@sda21(r2)
/* 8005013C 0004D21C  C0 0D 8B B8 */	lfs f0, zcam_flytime@sda21(r13)
/* 80050140 0004D220  EF 81 00 32 */	fmuls f28, f1, f0
/* 80050144 0004D224  FC 20 E0 90 */	fmr f1, f28
/* 80050148 0004D228  4B FB 6A 31 */	bl floorf__3stdFf
/* 8005014C 0004D22C  FC 00 08 1E */	fctiwz f0, f1
/* 80050150 0004D230  FC 20 E0 90 */	fmr f1, f28
/* 80050154 0004D234  D8 01 01 68 */	stfd f0, 0x168(r1)
/* 80050158 0004D238  83 E1 01 6C */	lwz r31, 0x16c(r1)
/* 8005015C 0004D23C  4B FB 6A 1D */	bl floorf__3stdFf
/* 80050160 0004D240  80 0D 8B B4 */	lwz r0, zcam_flysize@sda21(r13)
/* 80050164 0004D244  EF FC 08 28 */	fsubs f31, f28, f1
/* 80050168 0004D248  54 1B D1 BE */	srwi r27, r0, 6
/* 8005016C 0004D24C  38 1B FF FF */	addi r0, r27, -0x1
/* 80050170 0004D250  7C 1F 00 00 */	cmpw r31, r0
/* 80050174 0004D254  41 80 00 0C */	blt .L_80050180
/* 80050178 0004D258  38 60 00 00 */	li r3, 0x0
/* 8005017C 0004D25C  48 00 02 8C */	b .L_80050408
.L_80050180:
/* 80050180 0004D260  34 1F FF FF */	addic. r0, r31, -0x1
/* 80050184 0004D264  80 8D 8B B0 */	lwz r4, zcam_flydata@sda21(r13)
/* 80050188 0004D268  7F E0 FB 78 */	mr r0, r31
/* 8005018C 0004D26C  38 61 00 68 */	addi r3, r1, 0x68
/* 80050190 0004D270  41 80 00 08 */	blt .L_80050198
/* 80050194 0004D274  38 1F FF FF */	addi r0, r31, -0x1
.L_80050198:
/* 80050198 0004D278  54 00 30 32 */	slwi r0, r0, 6
/* 8005019C 0004D27C  7C 84 02 14 */	add r4, r4, r0
/* 800501A0 0004D280  48 00 02 9D */	bl __as__7zFlyKeyFRC7zFlyKey
/* 800501A4 0004D284  80 8D 8B B0 */	lwz r4, zcam_flydata@sda21(r13)
/* 800501A8 0004D288  3B A1 00 A8 */	addi r29, r1, 0xa8
/* 800501AC 0004D28C  57 E0 30 32 */	slwi r0, r31, 6
/* 800501B0 0004D290  7F A3 EB 78 */	mr r3, r29
/* 800501B4 0004D294  7C 84 02 14 */	add r4, r4, r0
/* 800501B8 0004D298  48 00 02 85 */	bl __as__7zFlyKeyFRC7zFlyKey
/* 800501BC 0004D29C  38 1F 00 01 */	addi r0, r31, 0x1
/* 800501C0 0004D2A0  80 8D 8B B0 */	lwz r4, zcam_flydata@sda21(r13)
/* 800501C4 0004D2A4  3B 81 00 E8 */	addi r28, r1, 0xe8
/* 800501C8 0004D2A8  54 00 30 32 */	slwi r0, r0, 6
/* 800501CC 0004D2AC  7F 83 E3 78 */	mr r3, r28
/* 800501D0 0004D2B0  7C 84 02 14 */	add r4, r4, r0
/* 800501D4 0004D2B4  48 00 02 69 */	bl __as__7zFlyKeyFRC7zFlyKey
/* 800501D8 0004D2B8  38 1F 00 02 */	addi r0, r31, 0x2
/* 800501DC 0004D2BC  80 AD 8B B0 */	lwz r5, zcam_flydata@sda21(r13)
/* 800501E0 0004D2C0  7C 00 D8 00 */	cmpw r0, r27
/* 800501E4 0004D2C4  38 61 01 28 */	addi r3, r1, 0x128
/* 800501E8 0004D2C8  38 9F 00 01 */	addi r4, r31, 0x1
/* 800501EC 0004D2CC  40 80 00 08 */	bge .L_800501F4
/* 800501F0 0004D2D0  7C 04 03 78 */	mr r4, r0
.L_800501F4:
/* 800501F4 0004D2D4  54 80 30 32 */	slwi r0, r4, 6
/* 800501F8 0004D2D8  7C 85 02 14 */	add r4, r5, r0
/* 800501FC 0004D2DC  48 00 02 41 */	bl __as__7zFlyKeyFRC7zFlyKey
/* 80050200 0004D2E0  38 00 00 10 */	li r0, 0x10
/* 80050204 0004D2E4  38 61 00 68 */	addi r3, r1, 0x68
/* 80050208 0004D2E8  7C 09 03 A6 */	mtctr r0
.L_8005020C:
/* 8005020C 0004D2EC  88 83 00 00 */	lbz r4, 0x0(r3)
/* 80050210 0004D2F0  88 A3 00 01 */	lbz r5, 0x1(r3)
/* 80050214 0004D2F4  88 03 00 03 */	lbz r0, 0x3(r3)
/* 80050218 0004D2F8  98 03 00 00 */	stb r0, 0x0(r3)
/* 8005021C 0004D2FC  88 03 00 02 */	lbz r0, 0x2(r3)
/* 80050220 0004D300  98 03 00 01 */	stb r0, 0x1(r3)
/* 80050224 0004D304  98 A3 00 02 */	stb r5, 0x2(r3)
/* 80050228 0004D308  98 83 00 03 */	stb r4, 0x3(r3)
/* 8005022C 0004D30C  88 83 00 04 */	lbz r4, 0x4(r3)
/* 80050230 0004D310  88 A3 00 05 */	lbz r5, 0x5(r3)
/* 80050234 0004D314  88 03 00 07 */	lbz r0, 0x7(r3)
/* 80050238 0004D318  98 03 00 04 */	stb r0, 0x4(r3)
/* 8005023C 0004D31C  88 03 00 06 */	lbz r0, 0x6(r3)
/* 80050240 0004D320  98 03 00 05 */	stb r0, 0x5(r3)
/* 80050244 0004D324  98 A3 00 06 */	stb r5, 0x6(r3)
/* 80050248 0004D328  98 83 00 07 */	stb r4, 0x7(r3)
/* 8005024C 0004D32C  88 83 00 08 */	lbz r4, 0x8(r3)
/* 80050250 0004D330  88 A3 00 09 */	lbz r5, 0x9(r3)
/* 80050254 0004D334  88 03 00 0B */	lbz r0, 0xb(r3)
/* 80050258 0004D338  98 03 00 08 */	stb r0, 0x8(r3)
/* 8005025C 0004D33C  88 03 00 0A */	lbz r0, 0xa(r3)
/* 80050260 0004D340  98 03 00 09 */	stb r0, 0x9(r3)
/* 80050264 0004D344  98 A3 00 0A */	stb r5, 0xa(r3)
/* 80050268 0004D348  98 83 00 0B */	stb r4, 0xb(r3)
/* 8005026C 0004D34C  88 83 00 0C */	lbz r4, 0xc(r3)
/* 80050270 0004D350  88 A3 00 0D */	lbz r5, 0xd(r3)
/* 80050274 0004D354  88 03 00 0F */	lbz r0, 0xf(r3)
/* 80050278 0004D358  98 03 00 0C */	stb r0, 0xc(r3)
/* 8005027C 0004D35C  88 03 00 0E */	lbz r0, 0xe(r3)
/* 80050280 0004D360  98 03 00 0D */	stb r0, 0xd(r3)
/* 80050284 0004D364  98 A3 00 0E */	stb r5, 0xe(r3)
/* 80050288 0004D368  98 83 00 0F */	stb r4, 0xf(r3)
/* 8005028C 0004D36C  38 63 00 10 */	addi r3, r3, 0x10
/* 80050290 0004D370  42 00 FF 7C */	bdnz .L_8005020C
/* 80050294 0004D374  2C 1F 00 00 */	cmpwi r31, 0x0
/* 80050298 0004D378  40 81 00 A0 */	ble .L_80050338
/* 8005029C 0004D37C  38 61 00 68 */	addi r3, r1, 0x68
/* 800502A0 0004D380  4B FF FD 09 */	bl TranSpeed__FP7zFlyKey
/* 800502A4 0004D384  FF A0 08 90 */	fmr f29, f1
/* 800502A8 0004D388  7F A3 EB 78 */	mr r3, r29
/* 800502AC 0004D38C  4B FF FC FD */	bl TranSpeed__FP7zFlyKey
/* 800502B0 0004D390  FF 80 08 90 */	fmr f28, f1
/* 800502B4 0004D394  7F 83 E3 78 */	mr r3, r28
/* 800502B8 0004D398  4B FF FC F1 */	bl TranSpeed__FP7zFlyKey
/* 800502BC 0004D39C  C0 02 88 44 */	lfs f0, "@971"@sda21(r2)
/* 800502C0 0004D3A0  FC 1C 00 40 */	fcmpo cr0, f28, f0
/* 800502C4 0004D3A4  40 81 00 28 */	ble .L_800502EC
/* 800502C8 0004D3A8  C0 42 88 48 */	lfs f2, "@972"@sda21(r2)
/* 800502CC 0004D3AC  EC 02 07 72 */	fmuls f0, f2, f29
/* 800502D0 0004D3B0  FC 1C 00 40 */	fcmpo cr0, f28, f0
/* 800502D4 0004D3B4  40 81 00 18 */	ble .L_800502EC
/* 800502D8 0004D3B8  EC 02 00 72 */	fmuls f0, f2, f1
/* 800502DC 0004D3BC  FC 1C 00 40 */	fcmpo cr0, f28, f0
/* 800502E0 0004D3C0  40 81 00 0C */	ble .L_800502EC
/* 800502E4 0004D3C4  C3 E2 88 1C */	lfs f31, "@820"@sda21(r2)
/* 800502E8 0004D3C8  48 00 00 50 */	b .L_80050338
.L_800502EC:
/* 800502EC 0004D3CC  38 61 00 68 */	addi r3, r1, 0x68
/* 800502F0 0004D3D0  4B FF FC ED */	bl MatrixSpeed__FP7zFlyKey
/* 800502F4 0004D3D4  FF 80 08 90 */	fmr f28, f1
/* 800502F8 0004D3D8  7F A3 EB 78 */	mr r3, r29
/* 800502FC 0004D3DC  4B FF FC E1 */	bl MatrixSpeed__FP7zFlyKey
/* 80050300 0004D3E0  FF A0 08 90 */	fmr f29, f1
/* 80050304 0004D3E4  7F 83 E3 78 */	mr r3, r28
/* 80050308 0004D3E8  4B FF FC D5 */	bl MatrixSpeed__FP7zFlyKey
/* 8005030C 0004D3EC  C0 02 88 4C */	lfs f0, "@973"@sda21(r2)
/* 80050310 0004D3F0  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 80050314 0004D3F4  40 81 00 24 */	ble .L_80050338
/* 80050318 0004D3F8  C0 42 88 48 */	lfs f2, "@972"@sda21(r2)
/* 8005031C 0004D3FC  EC 02 07 32 */	fmuls f0, f2, f28
/* 80050320 0004D400  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 80050324 0004D404  40 81 00 14 */	ble .L_80050338
/* 80050328 0004D408  EC 02 00 72 */	fmuls f0, f2, f1
/* 8005032C 0004D40C  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 80050330 0004D410  40 81 00 08 */	ble .L_80050338
/* 80050334 0004D414  C3 E2 88 1C */	lfs f31, "@820"@sda21(r2)
.L_80050338:
/* 80050338 0004D418  3B E1 00 68 */	addi r31, r1, 0x68
/* 8005033C 0004D41C  3B A1 00 18 */	addi r29, r1, 0x18
/* 80050340 0004D420  3B 80 00 00 */	li r28, 0x0
.L_80050344:
/* 80050344 0004D424  C0 5F 00 44 */	lfs f2, 0x44(r31)
/* 80050348 0004D428  7F A3 EB 78 */	mr r3, r29
/* 8005034C 0004D42C  C0 3F 00 48 */	lfs f1, 0x48(r31)
/* 80050350 0004D430  38 81 00 38 */	addi r4, r1, 0x38
/* 80050354 0004D434  C0 1F 00 4C */	lfs f0, 0x4c(r31)
/* 80050358 0004D438  FD 00 10 50 */	fneg f8, f2
/* 8005035C 0004D43C  C0 5F 00 5C */	lfs f2, 0x5c(r31)
/* 80050360 0004D440  FC E0 08 50 */	fneg f7, f1
/* 80050364 0004D444  C0 3F 00 60 */	lfs f1, 0x60(r31)
/* 80050368 0004D448  FC C0 00 50 */	fneg f6, f0
/* 8005036C 0004D44C  C0 1F 00 64 */	lfs f0, 0x64(r31)
/* 80050370 0004D450  FC 40 10 50 */	fneg f2, f2
/* 80050374 0004D454  C0 BF 00 50 */	lfs f5, 0x50(r31)
/* 80050378 0004D458  FC 20 08 50 */	fneg f1, f1
/* 8005037C 0004D45C  C0 9F 00 54 */	lfs f4, 0x54(r31)
/* 80050380 0004D460  FC 00 00 50 */	fneg f0, f0
/* 80050384 0004D464  C0 7F 00 58 */	lfs f3, 0x58(r31)
/* 80050388 0004D468  D1 01 00 38 */	stfs f8, 0x38(r1)
/* 8005038C 0004D46C  D0 E1 00 3C */	stfs f7, 0x3c(r1)
/* 80050390 0004D470  D0 C1 00 40 */	stfs f6, 0x40(r1)
/* 80050394 0004D474  D0 A1 00 48 */	stfs f5, 0x48(r1)
/* 80050398 0004D478  D0 81 00 4C */	stfs f4, 0x4c(r1)
/* 8005039C 0004D47C  D0 61 00 50 */	stfs f3, 0x50(r1)
/* 800503A0 0004D480  D0 41 00 58 */	stfs f2, 0x58(r1)
/* 800503A4 0004D484  D0 21 00 5C */	stfs f1, 0x5c(r1)
/* 800503A8 0004D488  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 800503AC 0004D48C  4B FE 28 D9 */	bl xQuatFromMat__FP5xQuatPC7xMat3x3
/* 800503B0 0004D490  3B 9C 00 01 */	addi r28, r28, 0x1
/* 800503B4 0004D494  3B BD 00 10 */	addi r29, r29, 0x10
/* 800503B8 0004D498  2C 1C 00 02 */	cmpwi r28, 0x2
/* 800503BC 0004D49C  3B FF 00 40 */	addi r31, r31, 0x40
/* 800503C0 0004D4A0  41 80 FF 84 */	blt .L_80050344
/* 800503C4 0004D4A4  FC 20 F8 90 */	fmr f1, f31
/* 800503C8 0004D4A8  38 61 00 08 */	addi r3, r1, 0x8
/* 800503CC 0004D4AC  38 81 00 18 */	addi r4, r1, 0x18
/* 800503D0 0004D4B0  38 A1 00 28 */	addi r5, r1, 0x28
/* 800503D4 0004D4B4  4B FE 2C FD */	bl xQuatSlerp__FP5xQuatPC5xQuatPC5xQuatf
/* 800503D8 0004D4B8  38 61 00 08 */	addi r3, r1, 0x8
/* 800503DC 0004D4BC  38 9E 00 14 */	addi r4, r30, 0x14
/* 800503E0 0004D4C0  4B FE 2B 21 */	bl xQuatToMat__FPC5xQuatP7xMat3x3
/* 800503E4 0004D4C4  FC 20 F8 90 */	fmr f1, f31
/* 800503E8 0004D4C8  38 7E 00 44 */	addi r3, r30, 0x44
/* 800503EC 0004D4CC  38 81 00 D0 */	addi r4, r1, 0xd0
/* 800503F0 0004D4D0  38 A1 01 10 */	addi r5, r1, 0x110
/* 800503F4 0004D4D4  4B FC 79 01 */	bl xVec3Lerp__FP5xVec3PC5xVec3PC5xVec3f
/* 800503F8 0004D4D8  C0 0D 8B B8 */	lfs f0, zcam_flytime@sda21(r13)
/* 800503FC 0004D4DC  38 60 00 01 */	li r3, 0x1
/* 80050400 0004D4E0  EC 00 F0 2A */	fadds f0, f0, f30
/* 80050404 0004D4E4  D0 0D 8B B8 */	stfs f0, zcam_flytime@sda21(r13)
.L_80050408:
/* 80050408 0004D4E8  E3 E1 01 C8 */	psq_l f31, 0x1c8(r1), 0, qr0
/* 8005040C 0004D4EC  CB E1 01 C0 */	lfd f31, 0x1c0(r1)
/* 80050410 0004D4F0  E3 C1 01 B8 */	psq_l f30, 0x1b8(r1), 0, qr0
/* 80050414 0004D4F4  CB C1 01 B0 */	lfd f30, 0x1b0(r1)
/* 80050418 0004D4F8  E3 A1 01 A8 */	psq_l f29, 0x1a8(r1), 0, qr0
/* 8005041C 0004D4FC  CB A1 01 A0 */	lfd f29, 0x1a0(r1)
/* 80050420 0004D500  E3 81 01 98 */	psq_l f28, 0x198(r1), 0, qr0
/* 80050424 0004D504  CB 81 01 90 */	lfd f28, 0x190(r1)
/* 80050428 0004D508  BB 61 01 7C */	lmw r27, 0x17c(r1)
/* 8005042C 0004D50C  80 01 01 D4 */	lwz r0, 0x1d4(r1)
/* 80050430 0004D510  7C 08 03 A6 */	mtlr r0
/* 80050434 0004D514  38 21 01 D0 */	addi r1, r1, 0x1d0
/* 80050438 0004D518  4E 80 00 20 */	blr
.endfn zCameraFlyUpdate__FP7xCameraf

# zFlyKey::operator=(const zFlyKey&)
.fn __as__7zFlyKeyFRC7zFlyKey, weak
/* 8005043C 0004D51C  80 04 00 00 */	lwz r0, 0x0(r4)
/* 80050440 0004D520  80 A4 00 04 */	lwz r5, 0x4(r4)
/* 80050444 0004D524  90 03 00 00 */	stw r0, 0x0(r3)
/* 80050448 0004D528  80 04 00 08 */	lwz r0, 0x8(r4)
/* 8005044C 0004D52C  90 A3 00 04 */	stw r5, 0x4(r3)
/* 80050450 0004D530  80 A4 00 0C */	lwz r5, 0xc(r4)
/* 80050454 0004D534  90 03 00 08 */	stw r0, 0x8(r3)
/* 80050458 0004D538  80 04 00 10 */	lwz r0, 0x10(r4)
/* 8005045C 0004D53C  90 A3 00 0C */	stw r5, 0xc(r3)
/* 80050460 0004D540  80 A4 00 14 */	lwz r5, 0x14(r4)
/* 80050464 0004D544  90 03 00 10 */	stw r0, 0x10(r3)
/* 80050468 0004D548  80 04 00 18 */	lwz r0, 0x18(r4)
/* 8005046C 0004D54C  90 A3 00 14 */	stw r5, 0x14(r3)
/* 80050470 0004D550  80 A4 00 1C */	lwz r5, 0x1c(r4)
/* 80050474 0004D554  90 03 00 18 */	stw r0, 0x18(r3)
/* 80050478 0004D558  80 04 00 20 */	lwz r0, 0x20(r4)
/* 8005047C 0004D55C  90 A3 00 1C */	stw r5, 0x1c(r3)
/* 80050480 0004D560  80 A4 00 24 */	lwz r5, 0x24(r4)
/* 80050484 0004D564  90 03 00 20 */	stw r0, 0x20(r3)
/* 80050488 0004D568  80 04 00 28 */	lwz r0, 0x28(r4)
/* 8005048C 0004D56C  90 A3 00 24 */	stw r5, 0x24(r3)
/* 80050490 0004D570  80 A4 00 2C */	lwz r5, 0x2c(r4)
/* 80050494 0004D574  90 03 00 28 */	stw r0, 0x28(r3)
/* 80050498 0004D578  80 04 00 30 */	lwz r0, 0x30(r4)
/* 8005049C 0004D57C  90 A3 00 2C */	stw r5, 0x2c(r3)
/* 800504A0 0004D580  80 A4 00 34 */	lwz r5, 0x34(r4)
/* 800504A4 0004D584  90 03 00 30 */	stw r0, 0x30(r3)
/* 800504A8 0004D588  80 04 00 38 */	lwz r0, 0x38(r4)
/* 800504AC 0004D58C  90 A3 00 34 */	stw r5, 0x34(r3)
/* 800504B0 0004D590  C0 04 00 3C */	lfs f0, 0x3c(r4)
/* 800504B4 0004D594  90 03 00 38 */	stw r0, 0x38(r3)
/* 800504B8 0004D598  D0 03 00 3C */	stfs f0, 0x3c(r3)
/* 800504BC 0004D59C  4E 80 00 20 */	blr
.endfn __as__7zFlyKeyFRC7zFlyKey

# zCameraFlyStart(unsigned int)
.fn zCameraFlyStart__FUi, global
/* 800504C0 0004D5A0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 800504C4 0004D5A4  7C 08 02 A6 */	mflr r0
/* 800504C8 0004D5A8  90 01 00 34 */	stw r0, 0x34(r1)
/* 800504CC 0004D5AC  38 81 00 08 */	addi r4, r1, 0x8
/* 800504D0 0004D5B0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 800504D4 0004D5B4  7C 7F 1B 78 */	mr r31, r3
/* 800504D8 0004D5B8  4B FF B4 85 */	bl xSTGetAssetInfo__FUiP20st_PKR_ASSET_TOCINFO
/* 800504DC 0004D5BC  2C 03 00 00 */	cmpwi r3, 0x0
/* 800504E0 0004D5C0  41 82 00 6C */	beq .L_8005054C
/* 800504E4 0004D5C4  38 60 00 01 */	li r3, 0x1
/* 800504E8 0004D5C8  38 00 00 00 */	li r0, 0x0
/* 800504EC 0004D5CC  90 6D 8B A8 */	stw r3, zcam_fly@sda21(r13)
/* 800504F0 0004D5D0  38 60 02 00 */	li r3, 0x200
/* 800504F4 0004D5D4  90 0D 8B AC */	stw r0, zcam_flypaused@sda21(r13)
/* 800504F8 0004D5D8  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 800504FC 0004D5DC  90 0D 8B B0 */	stw r0, zcam_flydata@sda21(r13)
/* 80050500 0004D5E0  80 01 00 18 */	lwz r0, 0x18(r1)
/* 80050504 0004D5E4  90 0D 8B B4 */	stw r0, zcam_flysize@sda21(r13)
/* 80050508 0004D5E8  C0 02 88 40 */	lfs f0, "@970"@sda21(r2)
/* 8005050C 0004D5EC  D0 0D 8B B8 */	stfs f0, zcam_flytime@sda21(r13)
/* 80050510 0004D5F0  93 ED 8B BC */	stw r31, zcam_flyasset_current@sda21(r13)
/* 80050514 0004D5F4  48 01 60 45 */	bl zEntPlayerControlOff__F13zControlOwner
/* 80050518 0004D5F8  38 60 00 01 */	li r3, 0x1
/* 8005051C 0004D5FC  4B FF 19 0D */	bl xScrFxLetterbox__Fi
/* 80050520 0004D600  3C 60 80 3C */	lis r3, zcam_backupcam@ha
/* 80050524 0004D604  3C 80 80 3C */	lis r4, globals@ha
/* 80050528 0004D608  38 63 EF B8 */	addi r3, r3, zcam_backupcam@l
/* 8005052C 0004D60C  38 84 05 58 */	addi r4, r4, globals@l
/* 80050530 0004D610  48 00 00 31 */	bl __as__7xCameraFRC7xCamera
/* 80050534 0004D614  48 00 1F 75 */	bl zCamera_FlyOnly__Fv
/* 80050538 0004D618  28 03 00 00 */	cmplwi r3, 0x0
/* 8005053C 0004D61C  40 82 00 10 */	bne .L_8005054C
/* 80050540 0004D620  C0 22 88 28 */	lfs f1, "@838"@sda21(r2)
/* 80050544 0004D624  C0 42 88 58 */	lfs f2, "@991"@sda21(r2)
/* 80050548 0004D628  48 05 77 19 */	bl zMusicSetVolume__Fff
.L_8005054C:
/* 8005054C 0004D62C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80050550 0004D630  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80050554 0004D634  7C 08 03 A6 */	mtlr r0
/* 80050558 0004D638  38 21 00 30 */	addi r1, r1, 0x30
/* 8005055C 0004D63C  4E 80 00 20 */	blr
.endfn zCameraFlyStart__FUi

# xCamera::operator=(const xCamera&)
.fn __as__7xCameraFRC7xCamera, weak
/* 80050560 0004D640  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80050564 0004D644  7C 08 02 A6 */	mflr r0
/* 80050568 0004D648  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005056C 0004D64C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80050570 0004D650  7C 9F 23 78 */	mr r31, r4
/* 80050574 0004D654  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80050578 0004D658  7C 7E 1B 78 */	mr r30, r3
/* 8005057C 0004D65C  4B FF CB CD */	bl __as__5xBaseFRC5xBase
/* 80050580 0004D660  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 80050584 0004D664  38 7E 00 14 */	addi r3, r30, 0x14
/* 80050588 0004D668  38 9F 00 14 */	addi r4, r31, 0x14
/* 8005058C 0004D66C  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80050590 0004D670  4B FB AF DD */	bl __as__7xMat4x3FRC7xMat4x3
/* 80050594 0004D674  38 7E 00 54 */	addi r3, r30, 0x54
/* 80050598 0004D678  38 9F 00 54 */	addi r4, r31, 0x54
/* 8005059C 0004D67C  4B FB AF D1 */	bl __as__7xMat4x3FRC7xMat4x3
/* 800505A0 0004D680  80 9F 00 94 */	lwz r4, 0x94(r31)
/* 800505A4 0004D684  38 00 00 09 */	li r0, 0x9
/* 800505A8 0004D688  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 800505AC 0004D68C  38 BE 00 C0 */	addi r5, r30, 0xc0
/* 800505B0 0004D690  90 9E 00 94 */	stw r4, 0x94(r30)
/* 800505B4 0004D694  38 9F 00 C0 */	addi r4, r31, 0xc0
/* 800505B8 0004D698  80 DF 00 9C */	lwz r6, 0x9c(r31)
/* 800505BC 0004D69C  90 7E 00 98 */	stw r3, 0x98(r30)
/* 800505C0 0004D6A0  80 7F 00 A0 */	lwz r3, 0xa0(r31)
/* 800505C4 0004D6A4  90 DE 00 9C */	stw r6, 0x9c(r30)
/* 800505C8 0004D6A8  80 DF 00 A4 */	lwz r6, 0xa4(r31)
/* 800505CC 0004D6AC  90 7E 00 A0 */	stw r3, 0xa0(r30)
/* 800505D0 0004D6B0  80 7F 00 A8 */	lwz r3, 0xa8(r31)
/* 800505D4 0004D6B4  90 DE 00 A4 */	stw r6, 0xa4(r30)
/* 800505D8 0004D6B8  80 DF 00 AC */	lwz r6, 0xac(r31)
/* 800505DC 0004D6BC  90 7E 00 A8 */	stw r3, 0xa8(r30)
/* 800505E0 0004D6C0  80 7F 00 B0 */	lwz r3, 0xb0(r31)
/* 800505E4 0004D6C4  90 DE 00 AC */	stw r6, 0xac(r30)
/* 800505E8 0004D6C8  80 DF 00 B4 */	lwz r6, 0xb4(r31)
/* 800505EC 0004D6CC  90 7E 00 B0 */	stw r3, 0xb0(r30)
/* 800505F0 0004D6D0  80 7F 00 B8 */	lwz r3, 0xb8(r31)
/* 800505F4 0004D6D4  90 DE 00 B4 */	stw r6, 0xb4(r30)
/* 800505F8 0004D6D8  80 DF 00 BC */	lwz r6, 0xbc(r31)
/* 800505FC 0004D6DC  90 7E 00 B8 */	stw r3, 0xb8(r30)
/* 80050600 0004D6E0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80050604 0004D6E4  90 DE 00 BC */	stw r6, 0xbc(r30)
/* 80050608 0004D6E8  90 7E 00 C0 */	stw r3, 0xc0(r30)
/* 8005060C 0004D6EC  7C 09 03 A6 */	mtctr r0
.L_80050610:
/* 80050610 0004D6F0  80 64 00 04 */	lwz r3, 0x4(r4)
/* 80050614 0004D6F4  84 04 00 08 */	lwzu r0, 0x8(r4)
/* 80050618 0004D6F8  90 65 00 04 */	stw r3, 0x4(r5)
/* 8005061C 0004D6FC  94 05 00 08 */	stwu r0, 0x8(r5)
/* 80050620 0004D700  42 00 FF F0 */	bdnz .L_80050610
/* 80050624 0004D704  80 04 00 04 */	lwz r0, 0x4(r4)
/* 80050628 0004D708  80 7F 01 10 */	lwz r3, 0x110(r31)
/* 8005062C 0004D70C  90 05 00 04 */	stw r0, 0x4(r5)
/* 80050630 0004D710  80 1F 01 14 */	lwz r0, 0x114(r31)
/* 80050634 0004D714  90 7E 01 10 */	stw r3, 0x110(r30)
/* 80050638 0004D718  80 7F 01 18 */	lwz r3, 0x118(r31)
/* 8005063C 0004D71C  90 1E 01 14 */	stw r0, 0x114(r30)
/* 80050640 0004D720  80 1F 01 1C */	lwz r0, 0x11c(r31)
/* 80050644 0004D724  90 7E 01 18 */	stw r3, 0x118(r30)
/* 80050648 0004D728  80 7F 01 20 */	lwz r3, 0x120(r31)
/* 8005064C 0004D72C  90 1E 01 1C */	stw r0, 0x11c(r30)
/* 80050650 0004D730  80 1F 01 24 */	lwz r0, 0x124(r31)
/* 80050654 0004D734  90 7E 01 20 */	stw r3, 0x120(r30)
/* 80050658 0004D738  80 7F 01 28 */	lwz r3, 0x128(r31)
/* 8005065C 0004D73C  90 1E 01 24 */	stw r0, 0x124(r30)
/* 80050660 0004D740  80 1F 01 2C */	lwz r0, 0x12c(r31)
/* 80050664 0004D744  90 7E 01 28 */	stw r3, 0x128(r30)
/* 80050668 0004D748  80 7F 01 30 */	lwz r3, 0x130(r31)
/* 8005066C 0004D74C  90 1E 01 2C */	stw r0, 0x12c(r30)
/* 80050670 0004D750  80 1F 01 34 */	lwz r0, 0x134(r31)
/* 80050674 0004D754  90 7E 01 30 */	stw r3, 0x130(r30)
/* 80050678 0004D758  C0 1F 01 38 */	lfs f0, 0x138(r31)
/* 8005067C 0004D75C  90 1E 01 34 */	stw r0, 0x134(r30)
/* 80050680 0004D760  80 1F 01 3C */	lwz r0, 0x13c(r31)
/* 80050684 0004D764  D0 1E 01 38 */	stfs f0, 0x138(r30)
/* 80050688 0004D768  C0 1F 01 40 */	lfs f0, 0x140(r31)
/* 8005068C 0004D76C  90 1E 01 3C */	stw r0, 0x13c(r30)
/* 80050690 0004D770  C0 3F 01 44 */	lfs f1, 0x144(r31)
/* 80050694 0004D774  D0 1E 01 40 */	stfs f0, 0x140(r30)
/* 80050698 0004D778  C0 1F 01 48 */	lfs f0, 0x148(r31)
/* 8005069C 0004D77C  D0 3E 01 44 */	stfs f1, 0x144(r30)
/* 800506A0 0004D780  C0 3F 01 4C */	lfs f1, 0x14c(r31)
/* 800506A4 0004D784  D0 1E 01 48 */	stfs f0, 0x148(r30)
/* 800506A8 0004D788  C0 1F 01 50 */	lfs f0, 0x150(r31)
/* 800506AC 0004D78C  D0 3E 01 4C */	stfs f1, 0x14c(r30)
/* 800506B0 0004D790  C0 3F 01 54 */	lfs f1, 0x154(r31)
/* 800506B4 0004D794  D0 1E 01 50 */	stfs f0, 0x150(r30)
/* 800506B8 0004D798  C0 1F 01 58 */	lfs f0, 0x158(r31)
/* 800506BC 0004D79C  D0 3E 01 54 */	stfs f1, 0x154(r30)
/* 800506C0 0004D7A0  C0 3F 01 5C */	lfs f1, 0x15c(r31)
/* 800506C4 0004D7A4  D0 1E 01 58 */	stfs f0, 0x158(r30)
/* 800506C8 0004D7A8  C0 1F 01 60 */	lfs f0, 0x160(r31)
/* 800506CC 0004D7AC  D0 3E 01 5C */	stfs f1, 0x15c(r30)
/* 800506D0 0004D7B0  C0 3F 01 64 */	lfs f1, 0x164(r31)
/* 800506D4 0004D7B4  D0 1E 01 60 */	stfs f0, 0x160(r30)
/* 800506D8 0004D7B8  C0 1F 01 68 */	lfs f0, 0x168(r31)
/* 800506DC 0004D7BC  D0 3E 01 64 */	stfs f1, 0x164(r30)
/* 800506E0 0004D7C0  C0 3F 01 6C */	lfs f1, 0x16c(r31)
/* 800506E4 0004D7C4  D0 1E 01 68 */	stfs f0, 0x168(r30)
/* 800506E8 0004D7C8  C0 1F 01 70 */	lfs f0, 0x170(r31)
/* 800506EC 0004D7CC  D0 3E 01 6C */	stfs f1, 0x16c(r30)
/* 800506F0 0004D7D0  C0 3F 01 74 */	lfs f1, 0x174(r31)
/* 800506F4 0004D7D4  D0 1E 01 70 */	stfs f0, 0x170(r30)
/* 800506F8 0004D7D8  C0 1F 01 78 */	lfs f0, 0x178(r31)
/* 800506FC 0004D7DC  D0 3E 01 74 */	stfs f1, 0x174(r30)
/* 80050700 0004D7E0  C0 3F 01 7C */	lfs f1, 0x17c(r31)
/* 80050704 0004D7E4  D0 1E 01 78 */	stfs f0, 0x178(r30)
/* 80050708 0004D7E8  C0 1F 01 80 */	lfs f0, 0x180(r31)
/* 8005070C 0004D7EC  D0 3E 01 7C */	stfs f1, 0x17c(r30)
/* 80050710 0004D7F0  C0 3F 01 84 */	lfs f1, 0x184(r31)
/* 80050714 0004D7F4  D0 1E 01 80 */	stfs f0, 0x180(r30)
/* 80050718 0004D7F8  C0 1F 01 88 */	lfs f0, 0x188(r31)
/* 8005071C 0004D7FC  D0 3E 01 84 */	stfs f1, 0x184(r30)
/* 80050720 0004D800  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 80050724 0004D804  D0 1E 01 88 */	stfs f0, 0x188(r30)
/* 80050728 0004D808  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 8005072C 0004D80C  D0 3E 01 8C */	stfs f1, 0x18c(r30)
/* 80050730 0004D810  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 80050734 0004D814  D0 1E 01 90 */	stfs f0, 0x190(r30)
/* 80050738 0004D818  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 8005073C 0004D81C  D0 3E 01 94 */	stfs f1, 0x194(r30)
/* 80050740 0004D820  C0 3F 01 9C */	lfs f1, 0x19c(r31)
/* 80050744 0004D824  D0 1E 01 98 */	stfs f0, 0x198(r30)
/* 80050748 0004D828  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 8005074C 0004D82C  D0 3E 01 9C */	stfs f1, 0x19c(r30)
/* 80050750 0004D830  80 7F 01 A4 */	lwz r3, 0x1a4(r31)
/* 80050754 0004D834  D0 1E 01 A0 */	stfs f0, 0x1a0(r30)
/* 80050758 0004D838  80 1F 01 A8 */	lwz r0, 0x1a8(r31)
/* 8005075C 0004D83C  90 7E 01 A4 */	stw r3, 0x1a4(r30)
/* 80050760 0004D840  80 7F 01 AC */	lwz r3, 0x1ac(r31)
/* 80050764 0004D844  90 1E 01 A8 */	stw r0, 0x1a8(r30)
/* 80050768 0004D848  80 1F 01 B0 */	lwz r0, 0x1b0(r31)
/* 8005076C 0004D84C  90 7E 01 AC */	stw r3, 0x1ac(r30)
/* 80050770 0004D850  80 7F 01 B4 */	lwz r3, 0x1b4(r31)
/* 80050774 0004D854  90 1E 01 B0 */	stw r0, 0x1b0(r30)
/* 80050778 0004D858  80 1F 01 B8 */	lwz r0, 0x1b8(r31)
/* 8005077C 0004D85C  90 7E 01 B4 */	stw r3, 0x1b4(r30)
/* 80050780 0004D860  80 7F 01 BC */	lwz r3, 0x1bc(r31)
/* 80050784 0004D864  90 1E 01 B8 */	stw r0, 0x1b8(r30)
/* 80050788 0004D868  80 1F 01 C0 */	lwz r0, 0x1c0(r31)
/* 8005078C 0004D86C  90 7E 01 BC */	stw r3, 0x1bc(r30)
/* 80050790 0004D870  80 7F 01 C4 */	lwz r3, 0x1c4(r31)
/* 80050794 0004D874  90 1E 01 C0 */	stw r0, 0x1c0(r30)
/* 80050798 0004D878  80 1F 01 C8 */	lwz r0, 0x1c8(r31)
/* 8005079C 0004D87C  90 7E 01 C4 */	stw r3, 0x1c4(r30)
/* 800507A0 0004D880  80 7F 01 CC */	lwz r3, 0x1cc(r31)
/* 800507A4 0004D884  90 1E 01 C8 */	stw r0, 0x1c8(r30)
/* 800507A8 0004D888  80 1F 01 D0 */	lwz r0, 0x1d0(r31)
/* 800507AC 0004D88C  90 7E 01 CC */	stw r3, 0x1cc(r30)
/* 800507B0 0004D890  C0 1F 01 D4 */	lfs f0, 0x1d4(r31)
/* 800507B4 0004D894  90 1E 01 D0 */	stw r0, 0x1d0(r30)
/* 800507B8 0004D898  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 800507BC 0004D89C  C0 1F 01 D8 */	lfs f0, 0x1d8(r31)
/* 800507C0 0004D8A0  38 00 00 18 */	li r0, 0x18
/* 800507C4 0004D8A4  C0 3F 01 DC */	lfs f1, 0x1dc(r31)
/* 800507C8 0004D8A8  38 BE 02 58 */	addi r5, r30, 0x258
/* 800507CC 0004D8AC  D0 1E 01 D8 */	stfs f0, 0x1d8(r30)
/* 800507D0 0004D8B0  38 9F 02 58 */	addi r4, r31, 0x258
/* 800507D4 0004D8B4  C0 1F 01 E0 */	lfs f0, 0x1e0(r31)
/* 800507D8 0004D8B8  D0 3E 01 DC */	stfs f1, 0x1dc(r30)
/* 800507DC 0004D8BC  C0 3F 01 E4 */	lfs f1, 0x1e4(r31)
/* 800507E0 0004D8C0  D0 1E 01 E0 */	stfs f0, 0x1e0(r30)
/* 800507E4 0004D8C4  C0 1F 01 E8 */	lfs f0, 0x1e8(r31)
/* 800507E8 0004D8C8  D0 3E 01 E4 */	stfs f1, 0x1e4(r30)
/* 800507EC 0004D8CC  C0 3F 01 EC */	lfs f1, 0x1ec(r31)
/* 800507F0 0004D8D0  D0 1E 01 E8 */	stfs f0, 0x1e8(r30)
/* 800507F4 0004D8D4  C0 1F 01 F0 */	lfs f0, 0x1f0(r31)
/* 800507F8 0004D8D8  D0 3E 01 EC */	stfs f1, 0x1ec(r30)
/* 800507FC 0004D8DC  C0 3F 01 F4 */	lfs f1, 0x1f4(r31)
/* 80050800 0004D8E0  D0 1E 01 F0 */	stfs f0, 0x1f0(r30)
/* 80050804 0004D8E4  C0 1F 01 F8 */	lfs f0, 0x1f8(r31)
/* 80050808 0004D8E8  D0 3E 01 F4 */	stfs f1, 0x1f4(r30)
/* 8005080C 0004D8EC  C0 3F 01 FC */	lfs f1, 0x1fc(r31)
/* 80050810 0004D8F0  D0 1E 01 F8 */	stfs f0, 0x1f8(r30)
/* 80050814 0004D8F4  C0 1F 02 00 */	lfs f0, 0x200(r31)
/* 80050818 0004D8F8  D0 3E 01 FC */	stfs f1, 0x1fc(r30)
/* 8005081C 0004D8FC  C0 3F 02 04 */	lfs f1, 0x204(r31)
/* 80050820 0004D900  D0 1E 02 00 */	stfs f0, 0x200(r30)
/* 80050824 0004D904  C0 1F 02 08 */	lfs f0, 0x208(r31)
/* 80050828 0004D908  D0 3E 02 04 */	stfs f1, 0x204(r30)
/* 8005082C 0004D90C  C0 3F 02 0C */	lfs f1, 0x20c(r31)
/* 80050830 0004D910  D0 1E 02 08 */	stfs f0, 0x208(r30)
/* 80050834 0004D914  C0 1F 02 10 */	lfs f0, 0x210(r31)
/* 80050838 0004D918  D0 3E 02 0C */	stfs f1, 0x20c(r30)
/* 8005083C 0004D91C  C0 3F 02 14 */	lfs f1, 0x214(r31)
/* 80050840 0004D920  D0 1E 02 10 */	stfs f0, 0x210(r30)
/* 80050844 0004D924  C0 1F 02 18 */	lfs f0, 0x218(r31)
/* 80050848 0004D928  D0 3E 02 14 */	stfs f1, 0x214(r30)
/* 8005084C 0004D92C  C0 3F 02 1C */	lfs f1, 0x21c(r31)
/* 80050850 0004D930  D0 1E 02 18 */	stfs f0, 0x218(r30)
/* 80050854 0004D934  C0 1F 02 20 */	lfs f0, 0x220(r31)
/* 80050858 0004D938  D0 3E 02 1C */	stfs f1, 0x21c(r30)
/* 8005085C 0004D93C  C0 3F 02 24 */	lfs f1, 0x224(r31)
/* 80050860 0004D940  D0 1E 02 20 */	stfs f0, 0x220(r30)
/* 80050864 0004D944  C0 1F 02 28 */	lfs f0, 0x228(r31)
/* 80050868 0004D948  D0 3E 02 24 */	stfs f1, 0x224(r30)
/* 8005086C 0004D94C  C0 3F 02 2C */	lfs f1, 0x22c(r31)
/* 80050870 0004D950  D0 1E 02 28 */	stfs f0, 0x228(r30)
/* 80050874 0004D954  C0 1F 02 30 */	lfs f0, 0x230(r31)
/* 80050878 0004D958  D0 3E 02 2C */	stfs f1, 0x22c(r30)
/* 8005087C 0004D95C  C0 3F 02 34 */	lfs f1, 0x234(r31)
/* 80050880 0004D960  D0 1E 02 30 */	stfs f0, 0x230(r30)
/* 80050884 0004D964  C0 1F 02 38 */	lfs f0, 0x238(r31)
/* 80050888 0004D968  D0 3E 02 34 */	stfs f1, 0x234(r30)
/* 8005088C 0004D96C  C0 3F 02 3C */	lfs f1, 0x23c(r31)
/* 80050890 0004D970  D0 1E 02 38 */	stfs f0, 0x238(r30)
/* 80050894 0004D974  C0 1F 02 40 */	lfs f0, 0x240(r31)
/* 80050898 0004D978  D0 3E 02 3C */	stfs f1, 0x23c(r30)
/* 8005089C 0004D97C  C0 3F 02 44 */	lfs f1, 0x244(r31)
/* 800508A0 0004D980  D0 1E 02 40 */	stfs f0, 0x240(r30)
/* 800508A4 0004D984  C0 1F 02 48 */	lfs f0, 0x248(r31)
/* 800508A8 0004D988  D0 3E 02 44 */	stfs f1, 0x244(r30)
/* 800508AC 0004D98C  C0 3F 02 4C */	lfs f1, 0x24c(r31)
/* 800508B0 0004D990  D0 1E 02 48 */	stfs f0, 0x248(r30)
/* 800508B4 0004D994  C0 1F 02 50 */	lfs f0, 0x250(r31)
/* 800508B8 0004D998  D0 3E 02 4C */	stfs f1, 0x24c(r30)
/* 800508BC 0004D99C  C0 3F 02 54 */	lfs f1, 0x254(r31)
/* 800508C0 0004D9A0  D0 1E 02 50 */	stfs f0, 0x250(r30)
/* 800508C4 0004D9A4  C0 1F 02 58 */	lfs f0, 0x258(r31)
/* 800508C8 0004D9A8  D0 3E 02 54 */	stfs f1, 0x254(r30)
/* 800508CC 0004D9AC  D0 1E 02 58 */	stfs f0, 0x258(r30)
/* 800508D0 0004D9B0  7C 09 03 A6 */	mtctr r0
.L_800508D4:
/* 800508D4 0004D9B4  80 64 00 04 */	lwz r3, 0x4(r4)
/* 800508D8 0004D9B8  84 04 00 08 */	lwzu r0, 0x8(r4)
/* 800508DC 0004D9BC  90 65 00 04 */	stw r3, 0x4(r5)
/* 800508E0 0004D9C0  94 05 00 08 */	stwu r0, 0x8(r5)
/* 800508E4 0004D9C4  42 00 FF F0 */	bdnz .L_800508D4
/* 800508E8 0004D9C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800508EC 0004D9CC  7F C3 F3 78 */	mr r3, r30
/* 800508F0 0004D9D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800508F4 0004D9D4  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 800508F8 0004D9D8  7C 08 03 A6 */	mtlr r0
/* 800508FC 0004D9DC  38 21 00 10 */	addi r1, r1, 0x10
/* 80050900 0004D9E0  4E 80 00 20 */	blr
.endfn __as__7xCameraFRC7xCamera

# zCameraFlyRestoreBackup(xCamera*)
.fn zCameraFlyRestoreBackup__FP7xCamera, local
/* 80050904 0004D9E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80050908 0004D9E8  7C 08 02 A6 */	mflr r0
/* 8005090C 0004D9EC  3C 80 80 3C */	lis r4, globals@ha
/* 80050910 0004D9F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80050914 0004D9F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80050918 0004D9F8  7C 7F 1B 78 */	mr r31, r3
/* 8005091C 0004D9FC  38 64 05 58 */	addi r3, r4, globals@l
/* 80050920 0004DA00  38 63 00 14 */	addi r3, r3, 0x14
/* 80050924 0004DA04  38 9F 00 14 */	addi r4, r31, 0x14
/* 80050928 0004DA08  4B FB AC 45 */	bl __as__7xMat4x3FRC7xMat4x3
/* 8005092C 0004DA0C  3C 60 80 3C */	lis r3, globals@ha
/* 80050930 0004DA10  38 9F 00 54 */	addi r4, r31, 0x54
/* 80050934 0004DA14  38 63 05 58 */	addi r3, r3, globals@l
/* 80050938 0004DA18  38 63 00 54 */	addi r3, r3, 0x54
/* 8005093C 0004DA1C  4B FB AC 31 */	bl __as__7xMat4x3FRC7xMat4x3
/* 80050940 0004DA20  3C 60 80 3C */	lis r3, globals@ha
/* 80050944 0004DA24  38 9F 00 94 */	addi r4, r31, 0x94
/* 80050948 0004DA28  38 63 05 58 */	addi r3, r3, globals@l
/* 8005094C 0004DA2C  38 63 00 94 */	addi r3, r3, 0x94
/* 80050950 0004DA30  4B FB AC 79 */	bl __as__7xMat3x3FRC7xMat3x3
/* 80050954 0004DA34  3C 60 80 3C */	lis r3, globals@ha
/* 80050958 0004DA38  38 9F 00 C4 */	addi r4, r31, 0xc4
/* 8005095C 0004DA3C  38 63 05 58 */	addi r3, r3, globals@l
/* 80050960 0004DA40  38 63 00 C4 */	addi r3, r3, 0xc4
/* 80050964 0004DA44  4B FB CB 3D */	bl __as__6xBoundFRC6xBound
/* 80050968 0004DA48  3C 60 80 3C */	lis r3, globals@ha
/* 8005096C 0004DA4C  38 9F 01 1C */	addi r4, r31, 0x11c
/* 80050970 0004DA50  38 63 05 58 */	addi r3, r3, globals@l
/* 80050974 0004DA54  38 63 01 1C */	addi r3, r3, 0x11c
/* 80050978 0004DA58  4B FB A8 ED */	bl __as__5xVec3FRC5xVec3
/* 8005097C 0004DA5C  3C 60 80 3C */	lis r3, globals@ha
/* 80050980 0004DA60  80 1F 01 3C */	lwz r0, 0x13c(r31)
/* 80050984 0004DA64  38 A3 05 58 */	addi r5, r3, globals@l
/* 80050988 0004DA68  38 9F 01 A4 */	addi r4, r31, 0x1a4
/* 8005098C 0004DA6C  90 05 01 3C */	stw r0, 0x13c(r5)
/* 80050990 0004DA70  38 65 01 A4 */	addi r3, r5, 0x1a4
/* 80050994 0004DA74  C0 1F 01 40 */	lfs f0, 0x140(r31)
/* 80050998 0004DA78  D0 05 01 40 */	stfs f0, 0x140(r5)
/* 8005099C 0004DA7C  C0 1F 01 44 */	lfs f0, 0x144(r31)
/* 800509A0 0004DA80  D0 05 01 44 */	stfs f0, 0x144(r5)
/* 800509A4 0004DA84  C0 1F 01 48 */	lfs f0, 0x148(r31)
/* 800509A8 0004DA88  D0 05 01 48 */	stfs f0, 0x148(r5)
/* 800509AC 0004DA8C  C0 1F 01 4C */	lfs f0, 0x14c(r31)
/* 800509B0 0004DA90  D0 05 01 4C */	stfs f0, 0x14c(r5)
/* 800509B4 0004DA94  C0 1F 01 50 */	lfs f0, 0x150(r31)
/* 800509B8 0004DA98  D0 05 01 50 */	stfs f0, 0x150(r5)
/* 800509BC 0004DA9C  C0 1F 01 54 */	lfs f0, 0x154(r31)
/* 800509C0 0004DAA0  D0 05 01 54 */	stfs f0, 0x154(r5)
/* 800509C4 0004DAA4  C0 1F 01 58 */	lfs f0, 0x158(r31)
/* 800509C8 0004DAA8  D0 05 01 58 */	stfs f0, 0x158(r5)
/* 800509CC 0004DAAC  C0 1F 01 5C */	lfs f0, 0x15c(r31)
/* 800509D0 0004DAB0  D0 05 01 5C */	stfs f0, 0x15c(r5)
/* 800509D4 0004DAB4  C0 1F 01 60 */	lfs f0, 0x160(r31)
/* 800509D8 0004DAB8  D0 05 01 60 */	stfs f0, 0x160(r5)
/* 800509DC 0004DABC  C0 1F 01 64 */	lfs f0, 0x164(r31)
/* 800509E0 0004DAC0  D0 05 01 64 */	stfs f0, 0x164(r5)
/* 800509E4 0004DAC4  C0 1F 01 68 */	lfs f0, 0x168(r31)
/* 800509E8 0004DAC8  D0 05 01 68 */	stfs f0, 0x168(r5)
/* 800509EC 0004DACC  C0 1F 01 6C */	lfs f0, 0x16c(r31)
/* 800509F0 0004DAD0  D0 05 01 6C */	stfs f0, 0x16c(r5)
/* 800509F4 0004DAD4  C0 1F 01 70 */	lfs f0, 0x170(r31)
/* 800509F8 0004DAD8  D0 05 01 70 */	stfs f0, 0x170(r5)
/* 800509FC 0004DADC  C0 1F 01 74 */	lfs f0, 0x174(r31)
/* 80050A00 0004DAE0  D0 05 01 74 */	stfs f0, 0x174(r5)
/* 80050A04 0004DAE4  C0 1F 01 78 */	lfs f0, 0x178(r31)
/* 80050A08 0004DAE8  D0 05 01 78 */	stfs f0, 0x178(r5)
/* 80050A0C 0004DAEC  C0 1F 01 7C */	lfs f0, 0x17c(r31)
/* 80050A10 0004DAF0  D0 05 01 7C */	stfs f0, 0x17c(r5)
/* 80050A14 0004DAF4  C0 1F 01 80 */	lfs f0, 0x180(r31)
/* 80050A18 0004DAF8  D0 05 01 80 */	stfs f0, 0x180(r5)
/* 80050A1C 0004DAFC  C0 1F 01 84 */	lfs f0, 0x184(r31)
/* 80050A20 0004DB00  D0 05 01 84 */	stfs f0, 0x184(r5)
/* 80050A24 0004DB04  C0 1F 01 88 */	lfs f0, 0x188(r31)
/* 80050A28 0004DB08  D0 05 01 88 */	stfs f0, 0x188(r5)
/* 80050A2C 0004DB0C  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 80050A30 0004DB10  D0 05 01 8C */	stfs f0, 0x18c(r5)
/* 80050A34 0004DB14  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 80050A38 0004DB18  D0 05 01 90 */	stfs f0, 0x190(r5)
/* 80050A3C 0004DB1C  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 80050A40 0004DB20  D0 05 01 94 */	stfs f0, 0x194(r5)
/* 80050A44 0004DB24  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 80050A48 0004DB28  D0 05 01 98 */	stfs f0, 0x198(r5)
/* 80050A4C 0004DB2C  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 80050A50 0004DB30  D0 05 01 9C */	stfs f0, 0x19c(r5)
/* 80050A54 0004DB34  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 80050A58 0004DB38  D0 05 01 A0 */	stfs f0, 0x1a0(r5)
/* 80050A5C 0004DB3C  4B FB DC 91 */	bl __as__5xQuatFRC5xQuat
/* 80050A60 0004DB40  3C 60 80 3C */	lis r3, globals@ha
/* 80050A64 0004DB44  38 9F 01 B4 */	addi r4, r31, 0x1b4
/* 80050A68 0004DB48  38 63 05 58 */	addi r3, r3, globals@l
/* 80050A6C 0004DB4C  38 63 01 B4 */	addi r3, r3, 0x1b4
/* 80050A70 0004DB50  4B FB DC 7D */	bl __as__5xQuatFRC5xQuat
/* 80050A74 0004DB54  3C 60 80 3C */	lis r3, globals@ha
/* 80050A78 0004DB58  38 9F 01 C4 */	addi r4, r31, 0x1c4
/* 80050A7C 0004DB5C  38 63 05 58 */	addi r3, r3, globals@l
/* 80050A80 0004DB60  38 63 01 C4 */	addi r3, r3, 0x1c4
/* 80050A84 0004DB64  4B FB DC 69 */	bl __as__5xQuatFRC5xQuat
/* 80050A88 0004DB68  3C 60 80 3C */	lis r3, globals@ha
/* 80050A8C 0004DB6C  C0 1F 01 D4 */	lfs f0, 0x1d4(r31)
/* 80050A90 0004DB70  38 63 05 58 */	addi r3, r3, globals@l
/* 80050A94 0004DB74  D0 03 01 D4 */	stfs f0, 0x1d4(r3)
/* 80050A98 0004DB78  C0 1F 01 D8 */	lfs f0, 0x1d8(r31)
/* 80050A9C 0004DB7C  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 80050AA0 0004DB80  C0 1F 01 DC */	lfs f0, 0x1dc(r31)
/* 80050AA4 0004DB84  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 80050AA8 0004DB88  C0 1F 01 E0 */	lfs f0, 0x1e0(r31)
/* 80050AAC 0004DB8C  D0 03 01 E0 */	stfs f0, 0x1e0(r3)
/* 80050AB0 0004DB90  C0 1F 01 E4 */	lfs f0, 0x1e4(r31)
/* 80050AB4 0004DB94  D0 03 01 E4 */	stfs f0, 0x1e4(r3)
/* 80050AB8 0004DB98  C0 1F 01 E8 */	lfs f0, 0x1e8(r31)
/* 80050ABC 0004DB9C  D0 03 01 E8 */	stfs f0, 0x1e8(r3)
/* 80050AC0 0004DBA0  C0 1F 01 EC */	lfs f0, 0x1ec(r31)
/* 80050AC4 0004DBA4  D0 03 01 EC */	stfs f0, 0x1ec(r3)
/* 80050AC8 0004DBA8  C0 1F 01 F0 */	lfs f0, 0x1f0(r31)
/* 80050ACC 0004DBAC  D0 03 01 F0 */	stfs f0, 0x1f0(r3)
/* 80050AD0 0004DBB0  C0 1F 01 F4 */	lfs f0, 0x1f4(r31)
/* 80050AD4 0004DBB4  D0 03 01 F4 */	stfs f0, 0x1f4(r3)
/* 80050AD8 0004DBB8  C0 1F 01 F8 */	lfs f0, 0x1f8(r31)
/* 80050ADC 0004DBBC  D0 03 01 F8 */	stfs f0, 0x1f8(r3)
/* 80050AE0 0004DBC0  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 80050AE4 0004DBC4  D0 03 01 FC */	stfs f0, 0x1fc(r3)
/* 80050AE8 0004DBC8  C0 1F 02 00 */	lfs f0, 0x200(r31)
/* 80050AEC 0004DBCC  D0 03 02 00 */	stfs f0, 0x200(r3)
/* 80050AF0 0004DBD0  C0 1F 02 04 */	lfs f0, 0x204(r31)
/* 80050AF4 0004DBD4  D0 03 02 04 */	stfs f0, 0x204(r3)
/* 80050AF8 0004DBD8  C0 1F 02 08 */	lfs f0, 0x208(r31)
/* 80050AFC 0004DBDC  D0 03 02 08 */	stfs f0, 0x208(r3)
/* 80050B00 0004DBE0  C0 1F 02 0C */	lfs f0, 0x20c(r31)
/* 80050B04 0004DBE4  D0 03 02 0C */	stfs f0, 0x20c(r3)
/* 80050B08 0004DBE8  C0 1F 02 10 */	lfs f0, 0x210(r31)
/* 80050B0C 0004DBEC  D0 03 02 10 */	stfs f0, 0x210(r3)
/* 80050B10 0004DBF0  C0 1F 02 14 */	lfs f0, 0x214(r31)
/* 80050B14 0004DBF4  D0 03 02 14 */	stfs f0, 0x214(r3)
/* 80050B18 0004DBF8  C0 1F 02 18 */	lfs f0, 0x218(r31)
/* 80050B1C 0004DBFC  D0 03 02 18 */	stfs f0, 0x218(r3)
/* 80050B20 0004DC00  C0 1F 02 1C */	lfs f0, 0x21c(r31)
/* 80050B24 0004DC04  D0 03 02 1C */	stfs f0, 0x21c(r3)
/* 80050B28 0004DC08  C0 1F 02 20 */	lfs f0, 0x220(r31)
/* 80050B2C 0004DC0C  D0 03 02 20 */	stfs f0, 0x220(r3)
/* 80050B30 0004DC10  C0 1F 02 24 */	lfs f0, 0x224(r31)
/* 80050B34 0004DC14  D0 03 02 24 */	stfs f0, 0x224(r3)
/* 80050B38 0004DC18  C0 1F 02 28 */	lfs f0, 0x228(r31)
/* 80050B3C 0004DC1C  D0 03 02 28 */	stfs f0, 0x228(r3)
/* 80050B40 0004DC20  C0 1F 02 2C */	lfs f0, 0x22c(r31)
/* 80050B44 0004DC24  D0 03 02 2C */	stfs f0, 0x22c(r3)
/* 80050B48 0004DC28  C0 1F 02 30 */	lfs f0, 0x230(r31)
/* 80050B4C 0004DC2C  D0 03 02 30 */	stfs f0, 0x230(r3)
/* 80050B50 0004DC30  C0 1F 02 34 */	lfs f0, 0x234(r31)
/* 80050B54 0004DC34  D0 03 02 34 */	stfs f0, 0x234(r3)
/* 80050B58 0004DC38  C0 1F 02 38 */	lfs f0, 0x238(r31)
/* 80050B5C 0004DC3C  D0 03 02 38 */	stfs f0, 0x238(r3)
/* 80050B60 0004DC40  C0 1F 02 3C */	lfs f0, 0x23c(r31)
/* 80050B64 0004DC44  D0 03 02 3C */	stfs f0, 0x23c(r3)
/* 80050B68 0004DC48  C0 1F 02 40 */	lfs f0, 0x240(r31)
/* 80050B6C 0004DC4C  D0 03 02 40 */	stfs f0, 0x240(r3)
/* 80050B70 0004DC50  C0 1F 02 44 */	lfs f0, 0x244(r31)
/* 80050B74 0004DC54  D0 03 02 44 */	stfs f0, 0x244(r3)
/* 80050B78 0004DC58  C0 1F 02 48 */	lfs f0, 0x248(r31)
/* 80050B7C 0004DC5C  D0 03 02 48 */	stfs f0, 0x248(r3)
/* 80050B80 0004DC60  C0 1F 02 4C */	lfs f0, 0x24c(r31)
/* 80050B84 0004DC64  D0 03 02 4C */	stfs f0, 0x24c(r3)
/* 80050B88 0004DC68  C0 1F 02 50 */	lfs f0, 0x250(r31)
/* 80050B8C 0004DC6C  D0 03 02 50 */	stfs f0, 0x250(r3)
/* 80050B90 0004DC70  C0 1F 02 54 */	lfs f0, 0x254(r31)
/* 80050B94 0004DC74  D0 03 02 54 */	stfs f0, 0x254(r3)
/* 80050B98 0004DC78  C0 1F 02 58 */	lfs f0, 0x258(r31)
/* 80050B9C 0004DC7C  D0 03 02 58 */	stfs f0, 0x258(r3)
/* 80050BA0 0004DC80  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80050BA4 0004DC84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80050BA8 0004DC88  7C 08 03 A6 */	mtlr r0
/* 80050BAC 0004DC8C  38 21 00 10 */	addi r1, r1, 0x10
/* 80050BB0 0004DC90  4E 80 00 20 */	blr
.endfn zCameraFlyRestoreBackup__FP7xCamera

# zCameraRewardUpdate(xCamera*, float)
.fn zCameraRewardUpdate__FP7xCameraf, local
/* 80050BB4 0004DC94  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80050BB8 0004DC98  7C 08 02 A6 */	mflr r0
/* 80050BBC 0004DC9C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80050BC0 0004DCA0  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80050BC4 0004DCA4  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 80050BC8 0004DCA8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80050BCC 0004DCAC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80050BD0 0004DCB0  7C 7F 1B 78 */	mr r31, r3
/* 80050BD4 0004DCB4  FF E0 08 90 */	fmr f31, f1
/* 80050BD8 0004DCB8  4B FB C0 39 */	bl xCameraUpdate__FP7xCameraf
/* 80050BDC 0004DCBC  3C 60 80 25 */	lis r3, "@1021"@ha
/* 80050BE0 0004DCC0  3C 80 80 3C */	lis r4, globals@ha
/* 80050BE4 0004DCC4  38 E3 47 A0 */	addi r7, r3, "@1021"@l
/* 80050BE8 0004DCC8  38 61 00 08 */	addi r3, r1, 0x8
/* 80050BEC 0004DCCC  80 C7 00 00 */	lwz r6, 0x0(r7)
/* 80050BF0 0004DCD0  3B C4 05 58 */	addi r30, r4, globals@l
/* 80050BF4 0004DCD4  80 A7 00 04 */	lwz r5, 0x4(r7)
/* 80050BF8 0004DCD8  80 07 00 08 */	lwz r0, 0x8(r7)
/* 80050BFC 0004DCDC  90 C1 00 08 */	stw r6, 0x8(r1)
/* 80050C00 0004DCE0  80 9E 07 04 */	lwz r4, 0x704(r30)
/* 80050C04 0004DCE4  90 A1 00 0C */	stw r5, 0xc(r1)
/* 80050C08 0004DCE8  90 01 00 10 */	stw r0, 0x10(r1)
/* 80050C0C 0004DCEC  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80050C10 0004DCF0  38 84 00 30 */	addi r4, r4, 0x30
/* 80050C14 0004DCF4  4B FF D8 C9 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 80050C18 0004DCF8  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80050C1C 0004DCFC  C0 02 88 5C */	lfs f0, "@1048"@sda21(r2)
/* 80050C20 0004DD00  EC 01 00 28 */	fsubs f0, f1, f0
/* 80050C24 0004DD04  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80050C28 0004DD08  80 0D 8B 7C */	lwz r0, zcam_near@sda21(r13)
/* 80050C2C 0004DD0C  2C 00 00 00 */	cmpwi r0, 0x0
/* 80050C30 0004DD10  41 82 00 C8 */	beq .L_80050CF8
/* 80050C34 0004DD14  3C 60 80 3C */	lis r3, globals@ha
/* 80050C38 0004DD18  38 63 05 58 */	addi r3, r3, globals@l
/* 80050C3C 0004DD1C  80 63 09 C4 */	lwz r3, 0x9c4(r3)
/* 80050C40 0004DD20  80 03 00 00 */	lwz r0, 0x0(r3)
/* 80050C44 0004DD24  2C 00 00 00 */	cmpwi r0, 0x0
/* 80050C48 0004DD28  40 82 00 38 */	bne .L_80050C80
/* 80050C4C 0004DD2C  C0 02 88 60 */	lfs f0, "@1049"@sda21(r2)
/* 80050C50 0004DD30  D0 0D 81 44 */	stfs f0, rewardMove@sda21(r13)
/* 80050C54 0004DD34  C0 02 88 64 */	lfs f0, "@1050"@sda21(r2)
/* 80050C58 0004DD38  D0 0D 81 48 */	stfs f0, rewardMoveSpeed@sda21(r13)
/* 80050C5C 0004DD3C  C0 02 88 68 */	lfs f0, "@1051"@sda21(r2)
/* 80050C60 0004DD40  D0 0D 81 4C */	stfs f0, rewardZoomSpeed@sda21(r13)
/* 80050C64 0004DD44  C0 02 88 6C */	lfs f0, "@1052"@sda21(r2)
/* 80050C68 0004DD48  D0 0D 81 50 */	stfs f0, rewardZoomAmount@sda21(r13)
/* 80050C6C 0004DD4C  C0 02 88 30 */	lfs f0, "@840"@sda21(r2)
/* 80050C70 0004DD50  D0 0D 81 54 */	stfs f0, rewardTiltTime@sda21(r13)
/* 80050C74 0004DD54  C0 02 88 70 */	lfs f0, "@1053"@sda21(r2)
/* 80050C78 0004DD58  D0 0D 81 58 */	stfs f0, rewardTiltAmount@sda21(r13)
/* 80050C7C 0004DD5C  48 00 01 3C */	b .L_80050DB8
.L_80050C80:
/* 80050C80 0004DD60  2C 00 00 01 */	cmpwi r0, 0x1
/* 80050C84 0004DD64  40 82 00 38 */	bne .L_80050CBC
/* 80050C88 0004DD68  C0 02 88 74 */	lfs f0, "@1054"@sda21(r2)
/* 80050C8C 0004DD6C  D0 0D 81 44 */	stfs f0, rewardMove@sda21(r13)
/* 80050C90 0004DD70  C0 02 88 64 */	lfs f0, "@1050"@sda21(r2)
/* 80050C94 0004DD74  D0 0D 81 48 */	stfs f0, rewardMoveSpeed@sda21(r13)
/* 80050C98 0004DD78  C0 02 88 68 */	lfs f0, "@1051"@sda21(r2)
/* 80050C9C 0004DD7C  D0 0D 81 4C */	stfs f0, rewardZoomSpeed@sda21(r13)
/* 80050CA0 0004DD80  C0 02 88 6C */	lfs f0, "@1052"@sda21(r2)
/* 80050CA4 0004DD84  D0 0D 81 50 */	stfs f0, rewardZoomAmount@sda21(r13)
/* 80050CA8 0004DD88  C0 02 88 24 */	lfs f0, "@822"@sda21(r2)
/* 80050CAC 0004DD8C  D0 0D 81 54 */	stfs f0, rewardTiltTime@sda21(r13)
/* 80050CB0 0004DD90  C0 02 88 78 */	lfs f0, "@1055"@sda21(r2)
/* 80050CB4 0004DD94  D0 0D 81 58 */	stfs f0, rewardTiltAmount@sda21(r13)
/* 80050CB8 0004DD98  48 00 01 00 */	b .L_80050DB8
.L_80050CBC:
/* 80050CBC 0004DD9C  2C 00 00 02 */	cmpwi r0, 0x2
/* 80050CC0 0004DDA0  40 82 00 F8 */	bne .L_80050DB8
/* 80050CC4 0004DDA4  C0 02 88 60 */	lfs f0, "@1049"@sda21(r2)
/* 80050CC8 0004DDA8  D0 0D 81 44 */	stfs f0, rewardMove@sda21(r13)
/* 80050CCC 0004DDAC  C0 02 88 64 */	lfs f0, "@1050"@sda21(r2)
/* 80050CD0 0004DDB0  D0 0D 81 48 */	stfs f0, rewardMoveSpeed@sda21(r13)
/* 80050CD4 0004DDB4  C0 02 88 68 */	lfs f0, "@1051"@sda21(r2)
/* 80050CD8 0004DDB8  D0 0D 81 4C */	stfs f0, rewardZoomSpeed@sda21(r13)
/* 80050CDC 0004DDBC  C0 02 88 6C */	lfs f0, "@1052"@sda21(r2)
/* 80050CE0 0004DDC0  D0 0D 81 50 */	stfs f0, rewardZoomAmount@sda21(r13)
/* 80050CE4 0004DDC4  C0 02 88 30 */	lfs f0, "@840"@sda21(r2)
/* 80050CE8 0004DDC8  D0 0D 81 54 */	stfs f0, rewardTiltTime@sda21(r13)
/* 80050CEC 0004DDCC  C0 02 88 70 */	lfs f0, "@1053"@sda21(r2)
/* 80050CF0 0004DDD0  D0 0D 81 58 */	stfs f0, rewardTiltAmount@sda21(r13)
/* 80050CF4 0004DDD4  48 00 00 C4 */	b .L_80050DB8
.L_80050CF8:
/* 80050CF8 0004DDD8  3C 60 80 3C */	lis r3, globals@ha
/* 80050CFC 0004DDDC  38 63 05 58 */	addi r3, r3, globals@l
/* 80050D00 0004DDE0  80 63 09 C4 */	lwz r3, 0x9c4(r3)
/* 80050D04 0004DDE4  80 03 00 00 */	lwz r0, 0x0(r3)
/* 80050D08 0004DDE8  2C 00 00 00 */	cmpwi r0, 0x0
/* 80050D0C 0004DDEC  40 82 00 38 */	bne .L_80050D44
/* 80050D10 0004DDF0  C0 02 88 30 */	lfs f0, "@840"@sda21(r2)
/* 80050D14 0004DDF4  D0 0D 81 44 */	stfs f0, rewardMove@sda21(r13)
/* 80050D18 0004DDF8  C0 02 88 7C */	lfs f0, "@1056"@sda21(r2)
/* 80050D1C 0004DDFC  D0 0D 81 48 */	stfs f0, rewardMoveSpeed@sda21(r13)
/* 80050D20 0004DE00  C0 02 88 80 */	lfs f0, "@1057"@sda21(r2)
/* 80050D24 0004DE04  D0 0D 81 4C */	stfs f0, rewardZoomSpeed@sda21(r13)
/* 80050D28 0004DE08  C0 02 88 84 */	lfs f0, "@1058"@sda21(r2)
/* 80050D2C 0004DE0C  D0 0D 81 50 */	stfs f0, rewardZoomAmount@sda21(r13)
/* 80050D30 0004DE10  C0 02 88 30 */	lfs f0, "@840"@sda21(r2)
/* 80050D34 0004DE14  D0 0D 81 54 */	stfs f0, rewardTiltTime@sda21(r13)
/* 80050D38 0004DE18  C0 02 88 88 */	lfs f0, "@1059"@sda21(r2)
/* 80050D3C 0004DE1C  D0 0D 81 58 */	stfs f0, rewardTiltAmount@sda21(r13)
/* 80050D40 0004DE20  48 00 00 78 */	b .L_80050DB8
.L_80050D44:
/* 80050D44 0004DE24  2C 00 00 01 */	cmpwi r0, 0x1
/* 80050D48 0004DE28  40 82 00 38 */	bne .L_80050D80
/* 80050D4C 0004DE2C  C0 02 88 30 */	lfs f0, "@840"@sda21(r2)
/* 80050D50 0004DE30  D0 0D 81 44 */	stfs f0, rewardMove@sda21(r13)
/* 80050D54 0004DE34  C0 02 88 7C */	lfs f0, "@1056"@sda21(r2)
/* 80050D58 0004DE38  D0 0D 81 48 */	stfs f0, rewardMoveSpeed@sda21(r13)
/* 80050D5C 0004DE3C  C0 02 88 80 */	lfs f0, "@1057"@sda21(r2)
/* 80050D60 0004DE40  D0 0D 81 4C */	stfs f0, rewardZoomSpeed@sda21(r13)
/* 80050D64 0004DE44  C0 02 88 84 */	lfs f0, "@1058"@sda21(r2)
/* 80050D68 0004DE48  D0 0D 81 50 */	stfs f0, rewardZoomAmount@sda21(r13)
/* 80050D6C 0004DE4C  C0 02 88 30 */	lfs f0, "@840"@sda21(r2)
/* 80050D70 0004DE50  D0 0D 81 54 */	stfs f0, rewardTiltTime@sda21(r13)
/* 80050D74 0004DE54  C0 02 88 88 */	lfs f0, "@1059"@sda21(r2)
/* 80050D78 0004DE58  D0 0D 81 58 */	stfs f0, rewardTiltAmount@sda21(r13)
/* 80050D7C 0004DE5C  48 00 00 3C */	b .L_80050DB8
.L_80050D80:
/* 80050D80 0004DE60  2C 00 00 02 */	cmpwi r0, 0x2
/* 80050D84 0004DE64  40 82 00 34 */	bne .L_80050DB8
/* 80050D88 0004DE68  C0 02 88 30 */	lfs f0, "@840"@sda21(r2)
/* 80050D8C 0004DE6C  D0 0D 81 44 */	stfs f0, rewardMove@sda21(r13)
/* 80050D90 0004DE70  C0 02 88 7C */	lfs f0, "@1056"@sda21(r2)
/* 80050D94 0004DE74  D0 0D 81 48 */	stfs f0, rewardMoveSpeed@sda21(r13)
/* 80050D98 0004DE78  C0 02 88 80 */	lfs f0, "@1057"@sda21(r2)
/* 80050D9C 0004DE7C  D0 0D 81 4C */	stfs f0, rewardZoomSpeed@sda21(r13)
/* 80050DA0 0004DE80  C0 02 88 84 */	lfs f0, "@1058"@sda21(r2)
/* 80050DA4 0004DE84  D0 0D 81 50 */	stfs f0, rewardZoomAmount@sda21(r13)
/* 80050DA8 0004DE88  C0 02 88 30 */	lfs f0, "@840"@sda21(r2)
/* 80050DAC 0004DE8C  D0 0D 81 54 */	stfs f0, rewardTiltTime@sda21(r13)
/* 80050DB0 0004DE90  C0 02 88 88 */	lfs f0, "@1059"@sda21(r2)
/* 80050DB4 0004DE94  D0 0D 81 58 */	stfs f0, rewardTiltAmount@sda21(r13)
.L_80050DB8:
/* 80050DB8 0004DE98  80 9E 07 04 */	lwz r4, 0x704(r30)
/* 80050DBC 0004DE9C  3C 60 80 3C */	lis r3, globals@ha
/* 80050DC0 0004DEA0  38 63 05 58 */	addi r3, r3, globals@l
/* 80050DC4 0004DEA4  80 A4 00 4C */	lwz r5, 0x4c(r4)
/* 80050DC8 0004DEA8  38 83 00 44 */	addi r4, r3, 0x44
/* 80050DCC 0004DEAC  38 65 00 30 */	addi r3, r5, 0x30
/* 80050DD0 0004DEB0  48 00 17 55 */	bl xVec3Dist2__FPC5xVec3PC5xVec3
/* 80050DD4 0004DEB4  C0 0D 81 44 */	lfs f0, rewardMove@sda21(r13)
/* 80050DD8 0004DEB8  EC 00 00 32 */	fmuls f0, f0, f0
/* 80050DDC 0004DEBC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80050DE0 0004DEC0  40 81 00 2C */	ble .L_80050E0C
/* 80050DE4 0004DEC4  C0 0D 81 48 */	lfs f0, rewardMoveSpeed@sda21(r13)
/* 80050DE8 0004DEC8  7F E3 FB 78 */	mr r3, r31
/* 80050DEC 0004DECC  38 81 00 08 */	addi r4, r1, 0x8
/* 80050DF0 0004DED0  EC 20 07 F2 */	fmuls f1, f0, f31
/* 80050DF4 0004DED4  4B FB C9 7D */	bl xCameraMove__FP7xCameraRC5xVec3f
/* 80050DF8 0004DED8  FC 60 F8 90 */	fmr f3, f31
/* 80050DFC 0004DEDC  C0 2D 81 50 */	lfs f1, rewardZoomAmount@sda21(r13)
/* 80050E00 0004DEE0  C0 4D 81 4C */	lfs f2, rewardZoomSpeed@sda21(r13)
/* 80050E04 0004DEE4  7F E3 FB 78 */	mr r3, r31
/* 80050E08 0004DEE8  4B FB CA 25 */	bl xCameraFOV__FP7xCamerafff
.L_80050E0C:
/* 80050E0C 0004DEEC  C0 A2 88 58 */	lfs f5, "@991"@sda21(r2)
/* 80050E10 0004DEF0  3C 60 80 3C */	lis r3, globals@ha
/* 80050E14 0004DEF4  38 63 05 58 */	addi r3, r3, globals@l
/* 80050E18 0004DEF8  C0 4D 81 58 */	lfs f2, rewardTiltAmount@sda21(r13)
/* 80050E1C 0004DEFC  FC C0 28 90 */	fmr f6, f5
/* 80050E20 0004DF00  C0 23 01 D4 */	lfs f1, 0x1d4(r3)
/* 80050E24 0004DF04  C0 63 01 E4 */	lfs f3, 0x1e4(r3)
/* 80050E28 0004DF08  7F E3 FB 78 */	mr r3, r31
/* 80050E2C 0004DF0C  C0 8D 81 54 */	lfs f4, rewardTiltTime@sda21(r13)
/* 80050E30 0004DF10  38 80 00 00 */	li r4, 0x0
/* 80050E34 0004DF14  4B FB CB B9 */	bl xCameraLookYPR__FP7xCameraUiffffff
/* 80050E38 0004DF18  38 60 00 01 */	li r3, 0x1
/* 80050E3C 0004DF1C  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80050E40 0004DF20  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80050E44 0004DF24  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80050E48 0004DF28  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80050E4C 0004DF2C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80050E50 0004DF30  7C 08 03 A6 */	mtlr r0
/* 80050E54 0004DF34  38 21 00 30 */	addi r1, r1, 0x30
/* 80050E58 0004DF38  4E 80 00 20 */	blr
.endfn zCameraRewardUpdate__FP7xCameraf

# zCameraFreeLookSetGoals(xCamera*, float, float&, float&, float&, float&, float)
.fn zCameraFreeLookSetGoals__FP7xCamerafRfRfRfRff, local
/* 80050E5C 0004DF3C  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80050E60 0004DF40  7C 08 02 A6 */	mflr r0
/* 80050E64 0004DF44  90 01 00 64 */	stw r0, 0x64(r1)
/* 80050E68 0004DF48  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80050E6C 0004DF4C  F3 E1 00 58 */	psq_st f31, 0x58(r1), 0, qr0
/* 80050E70 0004DF50  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 80050E74 0004DF54  F3 C1 00 48 */	psq_st f30, 0x48(r1), 0, qr0
/* 80050E78 0004DF58  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 80050E7C 0004DF5C  F3 A1 00 38 */	psq_st f29, 0x38(r1), 0, qr0
/* 80050E80 0004DF60  DB 81 00 20 */	stfd f28, 0x20(r1)
/* 80050E84 0004DF64  F3 81 00 28 */	psq_st f28, 0x28(r1), 0, qr0
/* 80050E88 0004DF68  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80050E8C 0004DF6C  80 0D 8B 84 */	lwz r0, zcam_bbounce@sda21(r13)
/* 80050E90 0004DF70  FF 80 08 90 */	fmr f28, f1
/* 80050E94 0004DF74  FF E0 10 90 */	fmr f31, f2
/* 80050E98 0004DF78  7C 7B 1B 78 */	mr r27, r3
/* 80050E9C 0004DF7C  2C 00 00 00 */	cmpwi r0, 0x0
/* 80050EA0 0004DF80  7C 9C 23 78 */	mr r28, r4
/* 80050EA4 0004DF84  7C BD 2B 78 */	mr r29, r5
/* 80050EA8 0004DF88  7C DE 33 78 */	mr r30, r6
/* 80050EAC 0004DF8C  7C FF 3B 78 */	mr r31, r7
/* 80050EB0 0004DF90  41 82 01 5C */	beq .L_8005100C
/* 80050EB4 0004DF94  80 0D 8B 98 */	lwz r0, zcam_highbounce@sda21(r13)
/* 80050EB8 0004DF98  2C 00 00 00 */	cmpwi r0, 0x0
/* 80050EBC 0004DF9C  41 82 00 20 */	beq .L_80050EDC
/* 80050EC0 0004DFA0  4B FF EE DD */	bl "GetCurrentD__21@unnamed@zCamera_cpp@Fv"
/* 80050EC4 0004DFA4  D0 3C 00 00 */	stfs f1, 0x0(r28)
/* 80050EC8 0004DFA8  4B FF EE 61 */	bl "GetCurrentH__21@unnamed@zCamera_cpp@Fv"
/* 80050ECC 0004DFAC  D0 3D 00 00 */	stfs f1, 0x0(r29)
/* 80050ED0 0004DFB0  4B FF EE 25 */	bl "GetCurrentPitch__21@unnamed@zCamera_cpp@Fv"
/* 80050ED4 0004DFB4  D0 3E 00 00 */	stfs f1, 0x0(r30)
/* 80050ED8 0004DFB8  48 00 02 50 */	b .L_80051128
.L_80050EDC:
/* 80050EDC 0004DFBC  80 0D 8B 7C */	lwz r0, zcam_near@sda21(r13)
/* 80050EE0 0004DFC0  2C 00 00 00 */	cmpwi r0, 0x0
/* 80050EE4 0004DFC4  41 82 00 0C */	beq .L_80050EF0
/* 80050EE8 0004DFC8  C0 22 88 8C */	lfs f1, "@1114"@sda21(r2)
/* 80050EEC 0004DFCC  48 00 00 08 */	b .L_80050EF4
.L_80050EF0:
/* 80050EF0 0004DFD0  4B FF EE AD */	bl "GetCurrentD__21@unnamed@zCamera_cpp@Fv"
.L_80050EF4:
/* 80050EF4 0004DFD4  D0 3C 00 00 */	stfs f1, 0x0(r28)
/* 80050EF8 0004DFD8  80 0D 8B 7C */	lwz r0, zcam_near@sda21(r13)
/* 80050EFC 0004DFDC  2C 00 00 00 */	cmpwi r0, 0x0
/* 80050F00 0004DFE0  41 82 00 0C */	beq .L_80050F0C
/* 80050F04 0004DFE4  C0 22 88 90 */	lfs f1, "@1115"@sda21(r2)
/* 80050F08 0004DFE8  48 00 00 08 */	b .L_80050F10
.L_80050F0C:
/* 80050F0C 0004DFEC  4B FF EE 1D */	bl "GetCurrentH__21@unnamed@zCamera_cpp@Fv"
.L_80050F10:
/* 80050F10 0004DFF0  D0 3D 00 00 */	stfs f1, 0x0(r29)
/* 80050F14 0004DFF4  80 0D 8B 94 */	lwz r0, zcam_longbounce@sda21(r13)
/* 80050F18 0004DFF8  2C 00 00 00 */	cmpwi r0, 0x0
/* 80050F1C 0004DFFC  41 82 00 D0 */	beq .L_80050FEC
/* 80050F20 0004E000  80 6D 8B A4 */	lwz r3, zcam_playervel@sda21(r13)
/* 80050F24 0004E004  C0 23 00 00 */	lfs f1, 0x0(r3)
/* 80050F28 0004E008  C0 03 00 04 */	lfs f0, 0x4(r3)
/* 80050F2C 0004E00C  EC 21 00 72 */	fmuls f1, f1, f1
/* 80050F30 0004E010  C0 43 00 08 */	lfs f2, 0x8(r3)
/* 80050F34 0004E014  EC 00 00 32 */	fmuls f0, f0, f0
/* 80050F38 0004E018  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80050F3C 0004E01C  EC 01 00 2A */	fadds f0, f1, f0
/* 80050F40 0004E020  EC 22 00 2A */	fadds f1, f2, f0
/* 80050F44 0004E024  4B FB 98 B9 */	bl xsqrt__Ff
/* 80050F48 0004E028  80 6D 8B A4 */	lwz r3, zcam_playervel@sda21(r13)
/* 80050F4C 0004E02C  38 00 00 00 */	li r0, 0x0
/* 80050F50 0004E030  28 03 00 00 */	cmplwi r3, 0x0
/* 80050F54 0004E034  41 82 00 14 */	beq .L_80050F68
/* 80050F58 0004E038  C0 02 88 1C */	lfs f0, "@820"@sda21(r2)
/* 80050F5C 0004E03C  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 80050F60 0004E040  41 82 00 08 */	beq .L_80050F68
/* 80050F64 0004E044  38 00 00 01 */	li r0, 0x1
.L_80050F68:
/* 80050F68 0004E048  54 00 06 3F */	clrlwi. r0, r0, 24
/* 80050F6C 0004E04C  41 82 00 48 */	beq .L_80050FB4
/* 80050F70 0004E050  C0 5B 00 38 */	lfs f2, 0x38(r27)
/* 80050F74 0004E054  C0 03 00 04 */	lfs f0, 0x4(r3)
/* 80050F78 0004E058  C0 7B 00 34 */	lfs f3, 0x34(r27)
/* 80050F7C 0004E05C  EC 02 00 32 */	fmuls f0, f2, f0
/* 80050F80 0004E060  C0 43 00 00 */	lfs f2, 0x0(r3)
/* 80050F84 0004E064  C0 BB 00 3C */	lfs f5, 0x3c(r27)
/* 80050F88 0004E068  C0 83 00 08 */	lfs f4, 0x8(r3)
/* 80050F8C 0004E06C  EC 03 00 BA */	fmadds f0, f3, f2, f0
/* 80050F90 0004E070  C0 42 88 1C */	lfs f2, "@820"@sda21(r2)
/* 80050F94 0004E074  EC 05 01 3A */	fmadds f0, f5, f4, f0
/* 80050F98 0004E078  EC 00 08 24 */	fdivs f0, f0, f1
/* 80050F9C 0004E07C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80050FA0 0004E080  40 80 00 08 */	bge .L_80050FA8
/* 80050FA4 0004E084  48 00 00 08 */	b .L_80050FAC
.L_80050FA8:
/* 80050FA8 0004E088  FC 40 00 90 */	fmr f2, f0
.L_80050FAC:
/* 80050FAC 0004E08C  FC 20 10 50 */	fneg f1, f2
/* 80050FB0 0004E090  48 00 00 08 */	b .L_80050FB8
.L_80050FB4:
/* 80050FB4 0004E094  C0 22 88 1C */	lfs f1, "@820"@sda21(r2)
.L_80050FB8:
/* 80050FB8 0004E098  80 0D 8B 7C */	lwz r0, zcam_near@sda21(r13)
/* 80050FBC 0004E09C  2C 00 00 00 */	cmpwi r0, 0x0
/* 80050FC0 0004E0A0  41 82 00 20 */	beq .L_80050FE0
/* 80050FC4 0004E0A4  C0 02 88 98 */	lfs f0, "@1117"@sda21(r2)
/* 80050FC8 0004E0A8  C0 42 88 94 */	lfs f2, "@1116"@sda21(r2)
/* 80050FCC 0004E0AC  EC 20 00 7A */	fmadds f1, f0, f1, f0
/* 80050FD0 0004E0B0  C0 02 88 9C */	lfs f0, "@1118"@sda21(r2)
/* 80050FD4 0004E0B4  EC 22 00 72 */	fmuls f1, f2, f1
/* 80050FD8 0004E0B8  EC 01 00 24 */	fdivs f0, f1, f0
/* 80050FDC 0004E0BC  48 00 00 08 */	b .L_80050FE4
.L_80050FE0:
/* 80050FE0 0004E0C0  C0 02 88 A0 */	lfs f0, "@1119"@sda21(r2)
.L_80050FE4:
/* 80050FE4 0004E0C4  D0 1E 00 00 */	stfs f0, 0x0(r30)
/* 80050FE8 0004E0C8  48 00 01 40 */	b .L_80051128
.L_80050FEC:
/* 80050FEC 0004E0CC  80 0D 8B 7C */	lwz r0, zcam_near@sda21(r13)
/* 80050FF0 0004E0D0  2C 00 00 00 */	cmpwi r0, 0x0
/* 80050FF4 0004E0D4  41 82 00 0C */	beq .L_80051000
/* 80050FF8 0004E0D8  C0 02 88 A4 */	lfs f0, "@1120"@sda21(r2)
/* 80050FFC 0004E0DC  48 00 00 08 */	b .L_80051004
.L_80051000:
/* 80051000 0004E0E0  C0 02 88 A0 */	lfs f0, "@1119"@sda21(r2)
.L_80051004:
/* 80051004 0004E0E4  D0 1E 00 00 */	stfs f0, 0x0(r30)
/* 80051008 0004E0E8  48 00 01 20 */	b .L_80051128
.L_8005100C:
/* 8005100C 0004E0EC  4B FF ED 91 */	bl "GetCurrentD__21@unnamed@zCamera_cpp@Fv"
/* 80051010 0004E0F0  FF A0 08 90 */	fmr f29, f1
/* 80051014 0004E0F4  4B FF ED 15 */	bl "GetCurrentH__21@unnamed@zCamera_cpp@Fv"
/* 80051018 0004E0F8  FF C0 08 90 */	fmr f30, f1
/* 8005101C 0004E0FC  4B FF EC D9 */	bl "GetCurrentPitch__21@unnamed@zCamera_cpp@Fv"
/* 80051020 0004E100  88 0D 8B D8 */	lbz r0, "lassocam_enabled__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 80051024 0004E104  28 00 00 00 */	cmplwi r0, 0x0
/* 80051028 0004E108  41 82 00 50 */	beq .L_80051078
/* 8005102C 0004E10C  80 0D 8B D4 */	lwz r0, "stop_track__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 80051030 0004E110  28 00 00 00 */	cmplwi r0, 0x0
/* 80051034 0004E114  40 82 00 44 */	bne .L_80051078
/* 80051038 0004E118  C0 6D 80 D0 */	lfs f3, zcam_near_d@sda21(r13)
/* 8005103C 0004E11C  C0 4D 8B DC */	lfs f2, "lassocam_factor__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 80051040 0004E120  EC 1D 18 28 */	fsubs f0, f29, f3
/* 80051044 0004E124  EC 02 18 3A */	fmadds f0, f2, f0, f3
/* 80051048 0004E128  D0 1C 00 00 */	stfs f0, 0x0(r28)
/* 8005104C 0004E12C  C0 6D 80 D4 */	lfs f3, zcam_near_h@sda21(r13)
/* 80051050 0004E130  C0 4D 8B DC */	lfs f2, "lassocam_factor__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 80051054 0004E134  EC 1E 18 28 */	fsubs f0, f30, f3
/* 80051058 0004E138  EC 02 18 3A */	fmadds f0, f2, f0, f3
/* 8005105C 0004E13C  D0 1D 00 00 */	stfs f0, 0x0(r29)
/* 80051060 0004E140  C0 6D 80 D8 */	lfs f3, zcam_near_pitch@sda21(r13)
/* 80051064 0004E144  C0 4D 8B DC */	lfs f2, "lassocam_factor__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 80051068 0004E148  EC 01 18 28 */	fsubs f0, f1, f3
/* 8005106C 0004E14C  EC 02 18 3A */	fmadds f0, f2, f0, f3
/* 80051070 0004E150  D0 1E 00 00 */	stfs f0, 0x0(r30)
/* 80051074 0004E154  48 00 00 B4 */	b .L_80051128
.L_80051078:
/* 80051078 0004E158  C0 02 88 1C */	lfs f0, "@820"@sda21(r2)
/* 8005107C 0004E15C  FC 1C 00 40 */	fcmpo cr0, f28, f0
/* 80051080 0004E160  40 81 00 40 */	ble .L_800510C0
/* 80051084 0004E164  C0 0D 81 00 */	lfs f0, zcam_below_d@sda21(r13)
/* 80051088 0004E168  EC 00 E8 28 */	fsubs f0, f0, f29
/* 8005108C 0004E16C  EC 1C E8 3A */	fmadds f0, f28, f0, f29
/* 80051090 0004E170  D0 1C 00 00 */	stfs f0, 0x0(r28)
/* 80051094 0004E174  C0 0D 81 04 */	lfs f0, zcam_below_h@sda21(r13)
/* 80051098 0004E178  EC 00 F0 28 */	fsubs f0, f0, f30
/* 8005109C 0004E17C  EC 1C F0 3A */	fmadds f0, f28, f0, f30
/* 800510A0 0004E180  D0 1D 00 00 */	stfs f0, 0x0(r29)
/* 800510A4 0004E184  C0 0D 81 08 */	lfs f0, zcam_below_pitch@sda21(r13)
/* 800510A8 0004E188  EC 00 08 28 */	fsubs f0, f0, f1
/* 800510AC 0004E18C  EC 1C 00 32 */	fmuls f0, f28, f0
/* 800510B0 0004E190  EC 1C 00 32 */	fmuls f0, f28, f0
/* 800510B4 0004E194  EC 1C 08 3A */	fmadds f0, f28, f0, f1
/* 800510B8 0004E198  D0 1E 00 00 */	stfs f0, 0x0(r30)
/* 800510BC 0004E19C  48 00 00 38 */	b .L_800510F4
.L_800510C0:
/* 800510C0 0004E1A0  C0 0D 80 F4 */	lfs f0, zcam_above_d@sda21(r13)
/* 800510C4 0004E1A4  FC 40 E0 50 */	fneg f2, f28
/* 800510C8 0004E1A8  EC 00 E8 28 */	fsubs f0, f0, f29
/* 800510CC 0004E1AC  EC 02 E8 3A */	fmadds f0, f2, f0, f29
/* 800510D0 0004E1B0  D0 1C 00 00 */	stfs f0, 0x0(r28)
/* 800510D4 0004E1B4  C0 0D 80 F8 */	lfs f0, zcam_above_h@sda21(r13)
/* 800510D8 0004E1B8  EC 00 F0 28 */	fsubs f0, f0, f30
/* 800510DC 0004E1BC  EC 02 F0 3A */	fmadds f0, f2, f0, f30
/* 800510E0 0004E1C0  D0 1D 00 00 */	stfs f0, 0x0(r29)
/* 800510E4 0004E1C4  C0 0D 80 FC */	lfs f0, zcam_above_pitch@sda21(r13)
/* 800510E8 0004E1C8  EC 00 08 28 */	fsubs f0, f0, f1
/* 800510EC 0004E1CC  EC 02 08 3A */	fmadds f0, f2, f0, f1
/* 800510F0 0004E1D0  D0 1E 00 00 */	stfs f0, 0x0(r30)
.L_800510F4:
/* 800510F4 0004E1D4  C0 3F 00 00 */	lfs f1, 0x0(r31)
/* 800510F8 0004E1D8  C0 02 88 58 */	lfs f0, "@991"@sda21(r2)
/* 800510FC 0004E1DC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80051100 0004E1E0  40 81 00 24 */	ble .L_80051124
/* 80051104 0004E1E4  EC 01 F8 28 */	fsubs f0, f1, f31
/* 80051108 0004E1E8  D0 1F 00 00 */	stfs f0, 0x0(r31)
/* 8005110C 0004E1EC  C0 3F 00 00 */	lfs f1, 0x0(r31)
/* 80051110 0004E1F0  C0 02 88 58 */	lfs f0, "@991"@sda21(r2)
/* 80051114 0004E1F4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80051118 0004E1F8  40 80 00 10 */	bge .L_80051128
/* 8005111C 0004E1FC  D0 1F 00 00 */	stfs f0, 0x0(r31)
/* 80051120 0004E200  48 00 00 08 */	b .L_80051128
.L_80051124:
/* 80051124 0004E204  D0 1F 00 00 */	stfs f0, 0x0(r31)
.L_80051128:
/* 80051128 0004E208  E3 E1 00 58 */	psq_l f31, 0x58(r1), 0, qr0
/* 8005112C 0004E20C  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 80051130 0004E210  E3 C1 00 48 */	psq_l f30, 0x48(r1), 0, qr0
/* 80051134 0004E214  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 80051138 0004E218  E3 A1 00 38 */	psq_l f29, 0x38(r1), 0, qr0
/* 8005113C 0004E21C  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 80051140 0004E220  E3 81 00 28 */	psq_l f28, 0x28(r1), 0, qr0
/* 80051144 0004E224  CB 81 00 20 */	lfd f28, 0x20(r1)
/* 80051148 0004E228  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8005114C 0004E22C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80051150 0004E230  7C 08 03 A6 */	mtlr r0
/* 80051154 0004E234  38 21 00 60 */	addi r1, r1, 0x60
/* 80051158 0004E238  4E 80 00 20 */	blr
.endfn zCameraFreeLookSetGoals__FP7xCamerafRfRfRfRff

# zCameraUpdate(xCamera*, float)
.fn zCameraUpdate__FP7xCameraf, global
/* 8005115C 0004E23C  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 80051160 0004E240  7C 08 02 A6 */	mflr r0
/* 80051164 0004E244  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 80051168 0004E248  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 8005116C 0004E24C  F3 E1 00 D8 */	psq_st f31, 0xd8(r1), 0, qr0
/* 80051170 0004E250  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 80051174 0004E254  F3 C1 00 C8 */	psq_st f30, 0xc8(r1), 0, qr0
/* 80051178 0004E258  DB A1 00 B0 */	stfd f29, 0xb0(r1)
/* 8005117C 0004E25C  F3 A1 00 B8 */	psq_st f29, 0xb8(r1), 0, qr0
/* 80051180 0004E260  DB 81 00 A0 */	stfd f28, 0xa0(r1)
/* 80051184 0004E264  F3 81 00 A8 */	psq_st f28, 0xa8(r1), 0, qr0
/* 80051188 0004E268  DB 61 00 90 */	stfd f27, 0x90(r1)
/* 8005118C 0004E26C  F3 61 00 98 */	psq_st f27, 0x98(r1), 0, qr0
/* 80051190 0004E270  DB 41 00 80 */	stfd f26, 0x80(r1)
/* 80051194 0004E274  F3 41 00 88 */	psq_st f26, 0x88(r1), 0, qr0
/* 80051198 0004E278  DB 21 00 70 */	stfd f25, 0x70(r1)
/* 8005119C 0004E27C  F3 21 00 78 */	psq_st f25, 0x78(r1), 0, qr0
/* 800511A0 0004E280  DB 01 00 60 */	stfd f24, 0x60(r1)
/* 800511A4 0004E284  F3 01 00 68 */	psq_st f24, 0x68(r1), 0, qr0
/* 800511A8 0004E288  DA E1 00 50 */	stfd f23, 0x50(r1)
/* 800511AC 0004E28C  F2 E1 00 58 */	psq_st f23, 0x58(r1), 0, qr0
/* 800511B0 0004E290  DA C1 00 40 */	stfd f22, 0x40(r1)
/* 800511B4 0004E294  F2 C1 00 48 */	psq_st f22, 0x48(r1), 0, qr0
/* 800511B8 0004E298  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 800511BC 0004E29C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 800511C0 0004E2A0  3C 80 80 3C */	lis r4, globals@ha
/* 800511C4 0004E2A4  FF E0 08 90 */	fmr f31, f1
/* 800511C8 0004E2A8  38 84 05 58 */	addi r4, r4, globals@l
/* 800511CC 0004E2AC  7C 7E 1B 78 */	mr r30, r3
/* 800511D0 0004E2B0  80 64 1F C0 */	lwz r3, 0x1fc0(r4)
/* 800511D4 0004E2B4  80 63 00 00 */	lwz r3, 0x0(r3)
/* 800511D8 0004E2B8  3C 63 B7 BE */	addis r3, r3, 0xb7be
/* 800511DC 0004E2BC  28 03 30 32 */	cmplwi r3, 0x3032
/* 800511E0 0004E2C0  41 82 00 24 */	beq .L_80051204
/* 800511E4 0004E2C4  38 03 CF CD */	addi r0, r3, -0x3033
/* 800511E8 0004E2C8  28 00 00 01 */	cmplwi r0, 0x1
/* 800511EC 0004E2CC  40 81 00 18 */	ble .L_80051204
/* 800511F0 0004E2D0  38 03 CF CA */	addi r0, r3, -0x3036
/* 800511F4 0004E2D4  28 00 00 03 */	cmplwi r0, 0x3
/* 800511F8 0004E2D8  40 81 00 0C */	ble .L_80051204
/* 800511FC 0004E2DC  28 03 31 30 */	cmplwi r3, 0x3130
/* 80051200 0004E2E0  40 82 00 14 */	bne .L_80051214
.L_80051204:
/* 80051204 0004E2E4  80 0D 8B 7C */	lwz r0, zcam_near@sda21(r13)
/* 80051208 0004E2E8  60 00 00 02 */	ori r0, r0, 0x2
/* 8005120C 0004E2EC  90 0D 8B 7C */	stw r0, zcam_near@sda21(r13)
/* 80051210 0004E2F0  48 00 00 10 */	b .L_80051220
.L_80051214:
/* 80051214 0004E2F4  80 0D 8B 7C */	lwz r0, zcam_near@sda21(r13)
/* 80051218 0004E2F8  54 00 07 FE */	clrlwi r0, r0, 31
/* 8005121C 0004E2FC  90 0D 8B 7C */	stw r0, zcam_near@sda21(r13)
.L_80051220:
/* 80051220 0004E300  FC 20 F8 90 */	fmr f1, f31
/* 80051224 0004E304  48 12 E1 05 */	bl zCameraTweakGlobal_Update__Ff
/* 80051228 0004E308  80 BE 01 2C */	lwz r5, 0x12c(r30)
/* 8005122C 0004E30C  3C 60 80 3C */	lis r3, globals@ha
/* 80051230 0004E310  80 9E 01 30 */	lwz r4, 0x130(r30)
/* 80051234 0004E314  3B E3 05 58 */	addi r31, r3, globals@l
/* 80051238 0004E318  80 1E 01 34 */	lwz r0, 0x134(r30)
/* 8005123C 0004E31C  C0 02 88 1C */	lfs f0, "@820"@sda21(r2)
/* 80051240 0004E320  90 A1 00 20 */	stw r5, 0x20(r1)
/* 80051244 0004E324  D0 1E 01 2C */	stfs f0, 0x12c(r30)
/* 80051248 0004E328  C0 02 88 1C */	lfs f0, "@820"@sda21(r2)
/* 8005124C 0004E32C  90 81 00 24 */	stw r4, 0x24(r1)
/* 80051250 0004E330  D0 1E 01 30 */	stfs f0, 0x130(r30)
/* 80051254 0004E334  C0 02 88 1C */	lfs f0, "@820"@sda21(r2)
/* 80051258 0004E338  90 01 00 28 */	stw r0, 0x28(r1)
/* 8005125C 0004E33C  D0 1E 01 34 */	stfs f0, 0x134(r30)
/* 80051260 0004E340  80 7F 1F BC */	lwz r3, 0x1fbc(r31)
/* 80051264 0004E344  28 03 00 00 */	cmplwi r3, 0x0
/* 80051268 0004E348  41 82 00 B0 */	beq .L_80051318
/* 8005126C 0004E34C  80 63 00 14 */	lwz r3, 0x14(r3)
/* 80051270 0004E350  80 03 00 3C */	lwz r0, 0x3c(r3)
/* 80051274 0004E354  28 00 00 00 */	cmplwi r0, 0x0
/* 80051278 0004E358  41 82 00 A0 */	beq .L_80051318
/* 8005127C 0004E35C  80 0D 8B A8 */	lwz r0, zcam_fly@sda21(r13)
/* 80051280 0004E360  2C 00 00 00 */	cmpwi r0, 0x0
/* 80051284 0004E364  41 82 00 4C */	beq .L_800512D0
/* 80051288 0004E368  80 0D 8B AC */	lwz r0, zcam_flypaused@sda21(r13)
/* 8005128C 0004E36C  2C 00 00 00 */	cmpwi r0, 0x0
/* 80051290 0004E370  41 82 00 40 */	beq .L_800512D0
/* 80051294 0004E374  38 00 00 00 */	li r0, 0x0
/* 80051298 0004E378  38 60 02 00 */	li r3, 0x200
/* 8005129C 0004E37C  90 0D 8B A8 */	stw r0, zcam_fly@sda21(r13)
/* 800512A0 0004E380  90 0D 8B AC */	stw r0, zcam_flypaused@sda21(r13)
/* 800512A4 0004E384  48 01 52 5D */	bl zEntPlayerControlOn__F13zControlOwner
/* 800512A8 0004E388  38 60 00 00 */	li r3, 0x0
/* 800512AC 0004E38C  4B FF 0B 7D */	bl xScrFxLetterbox__Fi
/* 800512B0 0004E390  3C 60 80 3C */	lis r3, zcam_backupcam@ha
/* 800512B4 0004E394  38 63 EF B8 */	addi r3, r3, zcam_backupcam@l
/* 800512B8 0004E398  4B FF F6 4D */	bl zCameraFlyRestoreBackup__FP7xCamera
/* 800512BC 0004E39C  38 00 00 00 */	li r0, 0x0
/* 800512C0 0004E3A0  7F C3 F3 78 */	mr r3, r30
/* 800512C4 0004E3A4  90 0D 8B BC */	stw r0, zcam_flyasset_current@sda21(r13)
/* 800512C8 0004E3A8  C0 22 88 18 */	lfs f1, "@819"@sda21(r2)
/* 800512CC 0004E3AC  4B FB D1 C5 */	bl xCameraSetFOV__FP7xCameraf
.L_800512D0:
/* 800512D0 0004E3B0  80 0D 8B 9C */	lwz r0, zcam_cutscene@sda21(r13)
/* 800512D4 0004E3B4  2C 00 00 00 */	cmpwi r0, 0x0
/* 800512D8 0004E3B8  40 82 00 20 */	bne .L_800512F8
/* 800512DC 0004E3BC  3C 60 80 3C */	lis r3, zcam_backupcam@ha
/* 800512E0 0004E3C0  3C 80 80 3C */	lis r4, globals@ha
/* 800512E4 0004E3C4  38 63 EF B8 */	addi r3, r3, zcam_backupcam@l
/* 800512E8 0004E3C8  38 84 05 58 */	addi r4, r4, globals@l
/* 800512EC 0004E3CC  4B FF F2 75 */	bl __as__7xCameraFRC7xCamera
/* 800512F0 0004E3D0  38 00 00 01 */	li r0, 0x1
/* 800512F4 0004E3D4  90 0D 8B 9C */	stw r0, zcam_cutscene@sda21(r13)
.L_800512F8:
/* 800512F8 0004E3D8  80 7F 1F BC */	lwz r3, 0x1fbc(r31)
/* 800512FC 0004E3DC  7F C4 F3 78 */	mr r4, r30
/* 80051300 0004E3E0  80 63 00 14 */	lwz r3, 0x14(r3)
/* 80051304 0004E3E4  4B FC 52 D1 */	bl xCutscene_SetCamera__FP9xCutsceneP7xCamera
/* 80051308 0004E3E8  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 8005130C 0004E3EC  38 9E 00 14 */	addi r4, r30, 0x14
/* 80051310 0004E3F0  48 06 F2 21 */	bl iCameraUpdatePos__FP8RwCameraP7xMat4x3
/* 80051314 0004E3F4  48 00 0D 14 */	b .L_80052028
.L_80051318:
/* 80051318 0004E3F8  80 0D 8B 9C */	lwz r0, zcam_cutscene@sda21(r13)
/* 8005131C 0004E3FC  2C 00 00 00 */	cmpwi r0, 0x0
/* 80051320 0004E400  41 82 00 24 */	beq .L_80051344
/* 80051324 0004E404  3C 60 80 3C */	lis r3, zcam_backupcam@ha
/* 80051328 0004E408  38 63 EF B8 */	addi r3, r3, zcam_backupcam@l
/* 8005132C 0004E40C  4B FF F5 D9 */	bl zCameraFlyRestoreBackup__FP7xCamera
/* 80051330 0004E410  C0 22 88 18 */	lfs f1, "@819"@sda21(r2)
/* 80051334 0004E414  7F C3 F3 78 */	mr r3, r30
/* 80051338 0004E418  4B FB D1 59 */	bl xCameraSetFOV__FP7xCameraf
/* 8005133C 0004E41C  38 00 00 00 */	li r0, 0x0
/* 80051340 0004E420  90 0D 8B 9C */	stw r0, zcam_cutscene@sda21(r13)
.L_80051344:
/* 80051344 0004E424  80 0D 8B 8C */	lwz r0, zcam_convers@sda21(r13)
/* 80051348 0004E428  2C 00 00 00 */	cmpwi r0, 0x0
/* 8005134C 0004E42C  41 82 00 34 */	beq .L_80051380
/* 80051350 0004E430  FC 20 F8 90 */	fmr f1, f31
/* 80051354 0004E434  7F C3 F3 78 */	mr r3, r30
/* 80051358 0004E438  4B FF EA D5 */	bl zCameraConversUpdate__FP7xCameraf
/* 8005135C 0004E43C  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 80051360 0004E440  38 9E 00 14 */	addi r4, r30, 0x14
/* 80051364 0004E444  48 06 F1 CD */	bl iCameraUpdatePos__FP8RwCameraP7xMat4x3
/* 80051368 0004E448  C0 2D 8B CC */	lfs f1, zcam_fovcurr@sda21(r13)
/* 8005136C 0004E44C  7F C3 F3 78 */	mr r3, r30
/* 80051370 0004E450  4B FB D1 21 */	bl xCameraSetFOV__FP7xCameraf
/* 80051374 0004E454  80 0D 8B 8C */	lwz r0, zcam_convers@sda21(r13)
/* 80051378 0004E458  90 0D 8B 90 */	stw r0, zcam_lconvers@sda21(r13)
/* 8005137C 0004E45C  48 00 0C AC */	b .L_80052028
.L_80051380:
/* 80051380 0004E460  80 0D 8B A0 */	lwz r0, zcam_reward@sda21(r13)
/* 80051384 0004E464  2C 00 00 00 */	cmpwi r0, 0x0
/* 80051388 0004E468  41 82 00 5C */	beq .L_800513E4
/* 8005138C 0004E46C  80 0D 8B 7C */	lwz r0, zcam_near@sda21(r13)
/* 80051390 0004E470  2C 00 00 00 */	cmpwi r0, 0x0
/* 80051394 0004E474  41 82 00 0C */	beq .L_800513A0
/* 80051398 0004E478  C0 42 88 A8 */	lfs f2, "@1418"@sda21(r2)
/* 8005139C 0004E47C  48 00 00 08 */	b .L_800513A4
.L_800513A0:
/* 800513A0 0004E480  C0 42 88 AC */	lfs f2, "@1419"@sda21(r2)
.L_800513A4:
/* 800513A4 0004E484  C0 3E 01 60 */	lfs f1, 0x160(r30)
/* 800513A8 0004E488  C0 1E 01 70 */	lfs f0, 0x170(r30)
/* 800513AC 0004E48C  EC 21 00 72 */	fmuls f1, f1, f1
/* 800513B0 0004E490  80 0D 8B D4 */	lwz r0, "stop_track__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 800513B4 0004E494  EC 00 00 32 */	fmuls f0, f0, f0
/* 800513B8 0004E498  54 00 06 31 */	rlwinm. r0, r0, 0, 24, 24
/* 800513BC 0004E49C  EC 01 00 2A */	fadds f0, f1, f0
/* 800513C0 0004E4A0  41 82 00 14 */	beq .L_800513D4
/* 800513C4 0004E4A4  FC 20 F8 90 */	fmr f1, f31
/* 800513C8 0004E4A8  7F C3 F3 78 */	mr r3, r30
/* 800513CC 0004E4AC  4B FF F7 E9 */	bl zCameraRewardUpdate__FP7xCameraf
/* 800513D0 0004E4B0  48 00 0C 58 */	b .L_80052028
.L_800513D4:
/* 800513D4 0004E4B4  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 800513D8 0004E4B8  40 81 00 0C */	ble .L_800513E4
/* 800513DC 0004E4BC  38 60 00 80 */	li r3, 0x80
/* 800513E0 0004E4C0  48 00 0D 21 */	bl zCameraDisableTracking__F17camera_owner_enum
.L_800513E4:
/* 800513E4 0004E4C4  80 0D 8B A8 */	lwz r0, zcam_fly@sda21(r13)
/* 800513E8 0004E4C8  2C 00 00 00 */	cmpwi r0, 0x0
/* 800513EC 0004E4CC  41 82 00 88 */	beq .L_80051474
/* 800513F0 0004E4D0  FC 20 F8 90 */	fmr f1, f31
/* 800513F4 0004E4D4  7F C3 F3 78 */	mr r3, r30
/* 800513F8 0004E4D8  4B FF EC B9 */	bl zCameraFlyUpdate__FP7xCameraf
/* 800513FC 0004E4DC  2C 03 00 00 */	cmpwi r3, 0x0
/* 80051400 0004E4E0  41 82 00 14 */	beq .L_80051414
/* 80051404 0004E4E4  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 80051408 0004E4E8  38 9E 00 14 */	addi r4, r30, 0x14
/* 8005140C 0004E4EC  48 06 F1 25 */	bl iCameraUpdatePos__FP8RwCameraP7xMat4x3
/* 80051410 0004E4F0  48 00 0C 18 */	b .L_80052028
.L_80051414:
/* 80051414 0004E4F4  80 0D 8B AC */	lwz r0, zcam_flypaused@sda21(r13)
/* 80051418 0004E4F8  2C 00 00 00 */	cmpwi r0, 0x0
/* 8005141C 0004E4FC  40 82 00 08 */	bne .L_80051424
/* 80051420 0004E500  48 12 AD 5D */	bl zCameraFlyProcessStopEvent__Fv
.L_80051424:
/* 80051424 0004E504  80 1F 1F BC */	lwz r0, 0x1fbc(r31)
/* 80051428 0004E508  28 00 00 00 */	cmplwi r0, 0x0
/* 8005142C 0004E50C  41 82 00 10 */	beq .L_8005143C
/* 80051430 0004E510  38 00 00 01 */	li r0, 0x1
/* 80051434 0004E514  90 0D 8B AC */	stw r0, zcam_flypaused@sda21(r13)
/* 80051438 0004E518  48 00 0B F0 */	b .L_80052028
.L_8005143C:
/* 8005143C 0004E51C  38 00 00 00 */	li r0, 0x0
/* 80051440 0004E520  38 60 02 00 */	li r3, 0x200
/* 80051444 0004E524  90 0D 8B A8 */	stw r0, zcam_fly@sda21(r13)
/* 80051448 0004E528  48 01 50 B9 */	bl zEntPlayerControlOn__F13zControlOwner
/* 8005144C 0004E52C  38 60 00 00 */	li r3, 0x0
/* 80051450 0004E530  4B FF 09 D9 */	bl xScrFxLetterbox__Fi
/* 80051454 0004E534  3C 60 80 3C */	lis r3, zcam_backupcam@ha
/* 80051458 0004E538  38 63 EF B8 */	addi r3, r3, zcam_backupcam@l
/* 8005145C 0004E53C  4B FF F4 A9 */	bl zCameraFlyRestoreBackup__FP7xCamera
/* 80051460 0004E540  38 00 00 00 */	li r0, 0x0
/* 80051464 0004E544  7F C3 F3 78 */	mr r3, r30
/* 80051468 0004E548  90 0D 8B BC */	stw r0, zcam_flyasset_current@sda21(r13)
/* 8005146C 0004E54C  C0 22 88 18 */	lfs f1, "@819"@sda21(r2)
/* 80051470 0004E550  4B FB D0 21 */	bl xCameraSetFOV__FP7xCameraf
.L_80051474:
/* 80051474 0004E554  80 0D 8B D4 */	lwz r0, "stop_track__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 80051478 0004E558  28 00 00 00 */	cmplwi r0, 0x0
/* 8005147C 0004E55C  41 82 00 2C */	beq .L_800514A8
/* 80051480 0004E560  54 00 06 F7 */	rlwinm. r0, r0, 0, 27, 27
/* 80051484 0004E564  41 82 00 14 */	beq .L_80051498
/* 80051488 0004E568  FC 20 F8 90 */	fmr f1, f31
/* 8005148C 0004E56C  7F C3 F3 78 */	mr r3, r30
/* 80051490 0004E570  4B FB B7 81 */	bl xCameraUpdate__FP7xCameraf
/* 80051494 0004E574  48 00 0B 94 */	b .L_80052028
.L_80051498:
/* 80051498 0004E578  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 8005149C 0004E57C  38 9E 00 14 */	addi r4, r30, 0x14
/* 800514A0 0004E580  48 06 F0 91 */	bl iCameraUpdatePos__FP8RwCameraP7xMat4x3
/* 800514A4 0004E584  48 00 0B 84 */	b .L_80052028
.L_800514A8:
/* 800514A8 0004E588  80 9E 01 10 */	lwz r4, 0x110(r30)
/* 800514AC 0004E58C  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 800514B0 0004E590  C3 C4 00 34 */	lfs f30, 0x34(r4)
/* 800514B4 0004E594  C0 0D 81 3C */	lfs f0, zcam_mintgtheight@sda21(r13)
/* 800514B8 0004E598  C3 A3 00 34 */	lfs f29, 0x34(r3)
/* 800514BC 0004E59C  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 800514C0 0004E5A0  40 80 00 28 */	bge .L_800514E8
/* 800514C4 0004E5A4  EC 00 F0 28 */	fsubs f0, f0, f30
/* 800514C8 0004E5A8  EC 1D 00 2A */	fadds f0, f29, f0
/* 800514CC 0004E5AC  D0 03 00 34 */	stfs f0, 0x34(r3)
/* 800514D0 0004E5B0  80 7E 01 10 */	lwz r3, 0x110(r30)
/* 800514D4 0004E5B4  C0 0D 81 3C */	lfs f0, zcam_mintgtheight@sda21(r13)
/* 800514D8 0004E5B8  C0 23 00 34 */	lfs f1, 0x34(r3)
/* 800514DC 0004E5BC  EC 00 08 28 */	fsubs f0, f0, f1
/* 800514E0 0004E5C0  EC 01 00 2A */	fadds f0, f1, f0
/* 800514E4 0004E5C4  D0 03 00 34 */	stfs f0, 0x34(r3)
.L_800514E8:
/* 800514E8 0004E5C8  C0 1E 01 DC */	lfs f0, 0x1dc(r30)
/* 800514EC 0004E5CC  C0 42 88 B4 */	lfs f2, "@1421"@sda21(r2)
/* 800514F0 0004E5D0  FC 60 02 10 */	fabs f3, f0
/* 800514F4 0004E5D4  C0 82 88 B0 */	lfs f4, "@1420"@sda21(r2)
/* 800514F8 0004E5D8  C0 02 88 24 */	lfs f0, "@822"@sda21(r2)
/* 800514FC 0004E5DC  C0 22 88 1C */	lfs f1, "@820"@sda21(r2)
/* 80051500 0004E5E0  FC 60 18 18 */	frsp f3, f3
/* 80051504 0004E5E4  EC 43 10 28 */	fsubs f2, f3, f2
/* 80051508 0004E5E8  EC 44 00 B2 */	fmuls f2, f4, f2
/* 8005150C 0004E5EC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80051510 0004E5F0  40 80 00 08 */	bge .L_80051518
/* 80051514 0004E5F4  FC 00 10 90 */	fmr f0, f2
.L_80051518:
/* 80051518 0004E5F8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005151C 0004E5FC  40 81 00 0C */	ble .L_80051528
/* 80051520 0004E600  C3 42 88 1C */	lfs f26, "@820"@sda21(r2)
/* 80051524 0004E604  48 00 00 14 */	b .L_80051538
.L_80051528:
/* 80051528 0004E608  C3 42 88 24 */	lfs f26, "@822"@sda21(r2)
/* 8005152C 0004E60C  FC 02 D0 40 */	fcmpo cr0, f2, f26
/* 80051530 0004E610  40 80 00 08 */	bge .L_80051538
/* 80051534 0004E614  FF 40 10 90 */	fmr f26, f2
.L_80051538:
/* 80051538 0004E618  80 7E 01 10 */	lwz r3, 0x110(r30)
/* 8005153C 0004E61C  C0 7E 00 44 */	lfs f3, 0x44(r30)
/* 80051540 0004E620  C0 43 00 30 */	lfs f2, 0x30(r3)
/* 80051544 0004E624  C0 3E 00 4C */	lfs f1, 0x4c(r30)
/* 80051548 0004E628  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 8005154C 0004E62C  EC 43 10 28 */	fsubs f2, f3, f2
/* 80051550 0004E630  EC 01 00 28 */	fsubs f0, f1, f0
/* 80051554 0004E634  EC 22 00 B2 */	fmuls f1, f2, f2
/* 80051558 0004E638  EC 00 00 32 */	fmuls f0, f0, f0
/* 8005155C 0004E63C  EC 21 00 2A */	fadds f1, f1, f0
/* 80051560 0004E640  4B FB 92 9D */	bl xsqrt__Ff
/* 80051564 0004E644  C0 02 88 BC */	lfs f0, "@1423"@sda21(r2)
/* 80051568 0004E648  C0 42 88 B8 */	lfs f2, "@1422"@sda21(r2)
/* 8005156C 0004E64C  EC 60 08 28 */	fsubs f3, f0, f1
/* 80051570 0004E650  C0 02 88 24 */	lfs f0, "@822"@sda21(r2)
/* 80051574 0004E654  C0 22 88 1C */	lfs f1, "@820"@sda21(r2)
/* 80051578 0004E658  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8005157C 0004E65C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80051580 0004E660  40 80 00 08 */	bge .L_80051588
/* 80051584 0004E664  FC 00 10 90 */	fmr f0, f2
.L_80051588:
/* 80051588 0004E668  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005158C 0004E66C  40 81 00 0C */	ble .L_80051598
/* 80051590 0004E670  C3 62 88 1C */	lfs f27, "@820"@sda21(r2)
/* 80051594 0004E674  48 00 00 14 */	b .L_800515A8
.L_80051598:
/* 80051598 0004E678  C3 62 88 24 */	lfs f27, "@822"@sda21(r2)
/* 8005159C 0004E67C  FC 02 D8 40 */	fcmpo cr0, f2, f27
/* 800515A0 0004E680  40 80 00 08 */	bge .L_800515A8
/* 800515A4 0004E684  FF 60 10 90 */	fmr f27, f2
.L_800515A8:
/* 800515A8 0004E688  FC 1B D0 40 */	fcmpo cr0, f27, f26
/* 800515AC 0004E68C  40 81 00 08 */	ble .L_800515B4
/* 800515B0 0004E690  48 00 00 08 */	b .L_800515B8
.L_800515B4:
/* 800515B4 0004E694  FF 60 D0 90 */	fmr f27, f26
.L_800515B8:
/* 800515B8 0004E698  C0 02 88 1C */	lfs f0, "@820"@sda21(r2)
/* 800515BC 0004E69C  FC 1B 00 00 */	fcmpu cr0, f27, f0
/* 800515C0 0004E6A0  41 82 00 84 */	beq .L_80051644
/* 800515C4 0004E6A4  80 DE 01 10 */	lwz r6, 0x110(r30)
/* 800515C8 0004E6A8  38 7E 00 84 */	addi r3, r30, 0x84
/* 800515CC 0004E6AC  80 BE 01 14 */	lwz r5, 0x114(r30)
/* 800515D0 0004E6B0  38 9E 00 44 */	addi r4, r30, 0x44
/* 800515D4 0004E6B4  C0 46 00 30 */	lfs f2, 0x30(r6)
/* 800515D8 0004E6B8  C0 25 00 30 */	lfs f1, 0x30(r5)
/* 800515DC 0004E6BC  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 800515E0 0004E6C0  EC 22 08 28 */	fsubs f1, f2, f1
/* 800515E4 0004E6C4  C0 86 00 34 */	lfs f4, 0x34(r6)
/* 800515E8 0004E6C8  C0 65 00 34 */	lfs f3, 0x34(r5)
/* 800515EC 0004E6CC  C0 5E 00 44 */	lfs f2, 0x44(r30)
/* 800515F0 0004E6D0  EC 01 00 28 */	fsubs f0, f1, f0
/* 800515F4 0004E6D4  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 800515F8 0004E6D8  EC A4 18 28 */	fsubs f5, f4, f3
/* 800515FC 0004E6DC  C0 86 00 38 */	lfs f4, 0x38(r6)
/* 80051600 0004E6E0  C0 65 00 38 */	lfs f3, 0x38(r5)
/* 80051604 0004E6E4  EC 1B 00 32 */	fmuls f0, f27, f0
/* 80051608 0004E6E8  EC A5 08 28 */	fsubs f5, f5, f1
/* 8005160C 0004E6EC  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 80051610 0004E6F0  EC 64 18 28 */	fsubs f3, f4, f3
/* 80051614 0004E6F4  EC 02 00 2A */	fadds f0, f2, f0
/* 80051618 0004E6F8  EC 5B 01 72 */	fmuls f2, f27, f5
/* 8005161C 0004E6FC  EC 23 08 28 */	fsubs f1, f3, f1
/* 80051620 0004E700  D0 1E 00 44 */	stfs f0, 0x44(r30)
/* 80051624 0004E704  C0 1E 00 48 */	lfs f0, 0x48(r30)
/* 80051628 0004E708  EC 3B 00 72 */	fmuls f1, f27, f1
/* 8005162C 0004E70C  EC 00 10 2A */	fadds f0, f0, f2
/* 80051630 0004E710  D0 1E 00 48 */	stfs f0, 0x48(r30)
/* 80051634 0004E714  C0 1E 00 4C */	lfs f0, 0x4c(r30)
/* 80051638 0004E718  EC 00 08 2A */	fadds f0, f0, f1
/* 8005163C 0004E71C  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 80051640 0004E720  4B FB 9C 25 */	bl __as__5xVec3FRC5xVec3
.L_80051644:
/* 80051644 0004E724  88 0D 8B F8 */	lbz r0, init$1176@sda21(r13)
/* 80051648 0004E728  7C 00 07 75 */	extsb. r0, r0
/* 8005164C 0004E72C  40 82 00 14 */	bne .L_80051660
/* 80051650 0004E730  C0 02 88 58 */	lfs f0, "@991"@sda21(r2)
/* 80051654 0004E734  38 00 00 01 */	li r0, 0x1
/* 80051658 0004E738  D0 0D 8B F4 */	stfs f0, mvtm$1175@sda21(r13)
/* 8005165C 0004E73C  98 0D 8B F8 */	stb r0, init$1176@sda21(r13)
.L_80051660:
/* 80051660 0004E740  88 0D 8C 00 */	lbz r0, init$1179@sda21(r13)
/* 80051664 0004E744  7C 00 07 75 */	extsb. r0, r0
/* 80051668 0004E748  40 82 00 14 */	bne .L_8005167C
/* 8005166C 0004E74C  C0 02 88 58 */	lfs f0, "@991"@sda21(r2)
/* 80051670 0004E750  38 00 00 01 */	li r0, 0x1
/* 80051674 0004E754  D0 0D 8B FC */	stfs f0, lktm$1178@sda21(r13)
/* 80051678 0004E758  98 0D 8C 00 */	stb r0, init$1179@sda21(r13)
.L_8005167C:
/* 8005167C 0004E75C  88 0D 8C 08 */	lbz r0, init$1182@sda21(r13)
/* 80051680 0004E760  7C 00 07 75 */	extsb. r0, r0
/* 80051684 0004E764  40 82 00 14 */	bne .L_80051698
/* 80051688 0004E768  C0 02 88 1C */	lfs f0, "@820"@sda21(r2)
/* 8005168C 0004E76C  38 00 00 01 */	li r0, 0x1
/* 80051690 0004E770  D0 0D 8C 04 */	stfs f0, pitch_s$1181@sda21(r13)
/* 80051694 0004E774  98 0D 8C 08 */	stb r0, init$1182@sda21(r13)
.L_80051698:
/* 80051698 0004E778  80 0D 8B E0 */	lwz r0, "wall_jump_enabled__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 8005169C 0004E77C  2C 00 00 03 */	cmpwi r0, 0x3
/* 800516A0 0004E780  41 82 00 0C */	beq .L_800516AC
/* 800516A4 0004E784  2C 00 00 01 */	cmpwi r0, 0x1
/* 800516A8 0004E788  40 82 00 24 */	bne .L_800516CC
.L_800516AC:
/* 800516AC 0004E78C  C0 02 88 C0 */	lfs f0, "@1424"@sda21(r2)
/* 800516B0 0004E790  2C 00 00 03 */	cmpwi r0, 0x3
/* 800516B4 0004E794  D0 0D 8B F4 */	stfs f0, mvtm$1175@sda21(r13)
/* 800516B8 0004E798  C0 02 88 C0 */	lfs f0, "@1424"@sda21(r2)
/* 800516BC 0004E79C  D0 0D 8B FC */	stfs f0, lktm$1178@sda21(r13)
/* 800516C0 0004E7A0  40 82 00 0C */	bne .L_800516CC
/* 800516C4 0004E7A4  38 00 00 02 */	li r0, 0x2
/* 800516C8 0004E7A8  90 0D 8B E0 */	stw r0, "wall_jump_enabled__21@unnamed@zCamera_cpp@"@sda21(r13)
.L_800516CC:
/* 800516CC 0004E7AC  3C 60 80 3C */	lis r3, globals@ha
/* 800516D0 0004E7B0  3B E3 05 58 */	addi r31, r3, globals@l
/* 800516D4 0004E7B4  80 7F 03 1C */	lwz r3, 0x31c(r31)
/* 800516D8 0004E7B8  80 03 00 30 */	lwz r0, 0x30(r3)
/* 800516DC 0004E7BC  54 00 02 D7 */	rlwinm. r0, r0, 0, 11, 11
/* 800516E0 0004E7C0  41 82 00 40 */	beq .L_80051720
/* 800516E4 0004E7C4  88 0D 81 40 */	lbz r0, "input_enabled__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 800516E8 0004E7C8  28 00 00 00 */	cmplwi r0, 0x0
/* 800516EC 0004E7CC  41 82 00 8C */	beq .L_80051778
/* 800516F0 0004E7D0  80 6D 8B 7C */	lwz r3, zcam_near@sda21(r13)
/* 800516F4 0004E7D4  54 60 07 BD */	rlwinm. r0, r3, 0, 30, 30
/* 800516F8 0004E7D8  40 82 00 80 */	bne .L_80051778
/* 800516FC 0004E7DC  68 60 00 01 */	xori r0, r3, 0x1
/* 80051700 0004E7E0  90 0D 8B 7C */	stw r0, zcam_near@sda21(r13)
/* 80051704 0004E7E4  C0 02 88 C0 */	lfs f0, "@1424"@sda21(r2)
/* 80051708 0004E7E8  D0 0D 8B F4 */	stfs f0, mvtm$1175@sda21(r13)
/* 8005170C 0004E7EC  C0 02 88 C0 */	lfs f0, "@1424"@sda21(r2)
/* 80051710 0004E7F0  D0 0D 8B FC */	stfs f0, lktm$1178@sda21(r13)
/* 80051714 0004E7F4  C0 02 88 1C */	lfs f0, "@820"@sda21(r2)
/* 80051718 0004E7F8  D0 0D 8C 04 */	stfs f0, pitch_s$1181@sda21(r13)
/* 8005171C 0004E7FC  48 00 00 5C */	b .L_80051778
.L_80051720:
/* 80051720 0004E800  80 6D 8B 84 */	lwz r3, zcam_bbounce@sda21(r13)
/* 80051724 0004E804  80 0D 8B 88 */	lwz r0, zcam_lbbounce@sda21(r13)
/* 80051728 0004E808  7C 03 00 00 */	cmpw r3, r0
/* 8005172C 0004E80C  41 82 00 20 */	beq .L_8005174C
/* 80051730 0004E810  C0 02 88 C0 */	lfs f0, "@1424"@sda21(r2)
/* 80051734 0004E814  D0 0D 8B F4 */	stfs f0, mvtm$1175@sda21(r13)
/* 80051738 0004E818  C0 02 88 C0 */	lfs f0, "@1424"@sda21(r2)
/* 8005173C 0004E81C  D0 0D 8B FC */	stfs f0, lktm$1178@sda21(r13)
/* 80051740 0004E820  C0 02 88 1C */	lfs f0, "@820"@sda21(r2)
/* 80051744 0004E824  D0 0D 8C 04 */	stfs f0, pitch_s$1181@sda21(r13)
/* 80051748 0004E828  48 00 00 30 */	b .L_80051778
.L_8005174C:
/* 8005174C 0004E82C  C0 2D 8B F4 */	lfs f1, mvtm$1175@sda21(r13)
/* 80051750 0004E830  C0 02 88 58 */	lfs f0, "@991"@sda21(r2)
/* 80051754 0004E834  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80051758 0004E838  40 81 00 20 */	ble .L_80051778
/* 8005175C 0004E83C  EC 01 F8 28 */	fsubs f0, f1, f31
/* 80051760 0004E840  D0 0D 8B F4 */	stfs f0, mvtm$1175@sda21(r13)
/* 80051764 0004E844  C0 2D 8B F4 */	lfs f1, mvtm$1175@sda21(r13)
/* 80051768 0004E848  C0 02 88 58 */	lfs f0, "@991"@sda21(r2)
/* 8005176C 0004E84C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80051770 0004E850  40 80 00 08 */	bge .L_80051778
/* 80051774 0004E854  D0 0D 8B F4 */	stfs f0, mvtm$1175@sda21(r13)
.L_80051778:
/* 80051778 0004E858  4B FF E6 25 */	bl "GetCurrentD__21@unnamed@zCamera_cpp@Fv"
/* 8005177C 0004E85C  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 80051780 0004E860  4B FF E5 A9 */	bl "GetCurrentH__21@unnamed@zCamera_cpp@Fv"
/* 80051784 0004E864  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80051788 0004E868  80 0D 8B 7C */	lwz r0, zcam_near@sda21(r13)
/* 8005178C 0004E86C  C3 9E 01 80 */	lfs f28, 0x180(r30)
/* 80051790 0004E870  2C 00 00 00 */	cmpwi r0, 0x0
/* 80051794 0004E874  41 82 00 0C */	beq .L_800517A0
/* 80051798 0004E878  C0 0D 80 D8 */	lfs f0, zcam_near_pitch@sda21(r13)
/* 8005179C 0004E87C  48 00 00 08 */	b .L_800517A4
.L_800517A0:
/* 800517A0 0004E880  C0 0D 80 E4 */	lfs f0, zcam_far_pitch@sda21(r13)
.L_800517A4:
/* 800517A4 0004E884  D0 01 00 08 */	stfs f0, 0x8(r1)
/* 800517A8 0004E888  88 AD 8B D8 */	lbz r5, "lassocam_enabled__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 800517AC 0004E88C  28 05 00 00 */	cmplwi r5, 0x0
/* 800517B0 0004E890  41 82 00 3C */	beq .L_800517EC
/* 800517B4 0004E894  80 0D 8B D4 */	lwz r0, "stop_track__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 800517B8 0004E898  28 00 00 00 */	cmplwi r0, 0x0
/* 800517BC 0004E89C  40 82 00 30 */	bne .L_800517EC
/* 800517C0 0004E8A0  C0 4D 80 D0 */	lfs f2, zcam_near_d@sda21(r13)
/* 800517C4 0004E8A4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 800517C8 0004E8A8  C0 6D 8B DC */	lfs f3, "lassocam_factor__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 800517CC 0004E8AC  EC 20 10 28 */	fsubs f1, f0, f2
/* 800517D0 0004E8B0  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 800517D4 0004E8B4  EC 23 10 7A */	fmadds f1, f3, f1, f2
/* 800517D8 0004E8B8  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 800517DC 0004E8BC  C0 2D 80 D4 */	lfs f1, zcam_near_h@sda21(r13)
/* 800517E0 0004E8C0  EC 00 08 28 */	fsubs f0, f0, f1
/* 800517E4 0004E8C4  EC 03 08 3A */	fmadds f0, f3, f0, f1
/* 800517E8 0004E8C8  D0 01 00 0C */	stfs f0, 0xc(r1)
.L_800517EC:
/* 800517EC 0004E8CC  88 0D 81 40 */	lbz r0, "input_enabled__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 800517F0 0004E8D0  28 00 00 00 */	cmplwi r0, 0x0
/* 800517F4 0004E8D4  41 82 01 D4 */	beq .L_800519C8
/* 800517F8 0004E8D8  80 0D 8B E0 */	lwz r0, "wall_jump_enabled__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 800517FC 0004E8DC  2C 00 00 00 */	cmpwi r0, 0x0
/* 80051800 0004E8E0  40 82 01 C8 */	bne .L_800519C8
/* 80051804 0004E8E4  80 7F 03 1C */	lwz r3, 0x31c(r31)
/* 80051808 0004E8E8  88 83 00 3A */	lbz r4, 0x3a(r3)
/* 8005180C 0004E8EC  7C 83 07 74 */	extsb r3, r4
/* 80051810 0004E8F0  2C 03 00 20 */	cmpwi r3, 0x20
/* 80051814 0004E8F4  40 81 00 DC */	ble .L_800518F0
/* 80051818 0004E8F8  2C 03 00 6E */	cmpwi r3, 0x6e
/* 8005181C 0004E8FC  C0 62 88 C4 */	lfs f3, "@1425"@sda21(r2)
/* 80051820 0004E900  38 00 00 6E */	li r0, 0x6e
/* 80051824 0004E904  40 80 00 08 */	bge .L_8005182C
/* 80051828 0004E908  7C 60 1B 78 */	mr r0, r3
.L_8005182C:
/* 8005182C 0004E90C  2C 00 00 20 */	cmpwi r0, 0x20
/* 80051830 0004E910  40 80 00 0C */	bge .L_8005183C
/* 80051834 0004E914  38 60 00 20 */	li r3, 0x20
/* 80051838 0004E918  48 00 00 18 */	b .L_80051850
.L_8005183C:
/* 8005183C 0004E91C  7C 80 07 74 */	extsb r0, r4
/* 80051840 0004E920  38 60 00 6E */	li r3, 0x6e
/* 80051844 0004E924  2C 00 00 6E */	cmpwi r0, 0x6e
/* 80051848 0004E928  40 80 00 08 */	bge .L_80051850
/* 8005184C 0004E92C  7C 03 03 78 */	mr r3, r0
.L_80051850:
/* 80051850 0004E930  38 63 FF E0 */	addi r3, r3, -0x20
/* 80051854 0004E934  3C 00 43 30 */	lis r0, 0x4330
/* 80051858 0004E938  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8005185C 0004E93C  90 01 00 30 */	stw r0, 0x30(r1)
/* 80051860 0004E940  C8 42 88 E0 */	lfd f2, "@1432"@sda21(r2)
/* 80051864 0004E944  28 05 00 00 */	cmplwi r5, 0x0
/* 80051868 0004E948  90 61 00 34 */	stw r3, 0x34(r1)
/* 8005186C 0004E94C  C0 0D 80 C8 */	lfs f0, zcam_pad_pyaw_scale@sda21(r13)
/* 80051870 0004E950  C8 21 00 30 */	lfd f1, 0x30(r1)
/* 80051874 0004E954  EC 21 10 28 */	fsubs f1, f1, f2
/* 80051878 0004E958  EC 01 00 32 */	fmuls f0, f1, f0
/* 8005187C 0004E95C  EC 23 00 32 */	fmuls f1, f3, f0
/* 80051880 0004E960  41 82 00 18 */	beq .L_80051898
/* 80051884 0004E964  80 0D 8B D4 */	lwz r0, "stop_track__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 80051888 0004E968  28 00 00 00 */	cmplwi r0, 0x0
/* 8005188C 0004E96C  40 82 00 0C */	bne .L_80051898
/* 80051890 0004E970  C0 02 88 C8 */	lfs f0, "@1426"@sda21(r2)
/* 80051894 0004E974  EC 21 00 32 */	fmuls f1, f1, f0
.L_80051898:
/* 80051898 0004E978  C0 1E 01 80 */	lfs f0, 0x180(r30)
/* 8005189C 0004E97C  EF 9C 08 2A */	fadds f28, f28, f1
/* 800518A0 0004E980  EC 00 08 2A */	fadds f0, f0, f1
/* 800518A4 0004E984  D0 1E 01 80 */	stfs f0, 0x180(r30)
/* 800518A8 0004E988  C0 1E 01 84 */	lfs f0, 0x184(r30)
/* 800518AC 0004E98C  EC 00 08 2A */	fadds f0, f0, f1
/* 800518B0 0004E990  D0 1E 01 84 */	stfs f0, 0x184(r30)
/* 800518B4 0004E994  C0 2D 8B FC */	lfs f1, lktm$1178@sda21(r13)
/* 800518B8 0004E998  C0 02 88 CC */	lfs f0, "@1427"@sda21(r2)
/* 800518BC 0004E99C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800518C0 0004E9A0  40 81 00 20 */	ble .L_800518E0
/* 800518C4 0004E9A4  EC 01 F8 28 */	fsubs f0, f1, f31
/* 800518C8 0004E9A8  D0 0D 8B FC */	stfs f0, lktm$1178@sda21(r13)
/* 800518CC 0004E9AC  C0 2D 8B FC */	lfs f1, lktm$1178@sda21(r13)
/* 800518D0 0004E9B0  C0 02 88 CC */	lfs f0, "@1427"@sda21(r2)
/* 800518D4 0004E9B4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800518D8 0004E9B8  40 80 00 08 */	bge .L_800518E0
/* 800518DC 0004E9BC  D0 0D 8B FC */	stfs f0, lktm$1178@sda21(r13)
.L_800518E0:
/* 800518E0 0004E9C0  C0 0D 81 38 */	lfs f0, zcam_overrot_tmanual@sda21(r13)
/* 800518E4 0004E9C4  FC 00 00 50 */	fneg f0, f0
/* 800518E8 0004E9C8  D0 0D 8B 78 */	stfs f0, zcam_overrot_tmr@sda21(r13)
/* 800518EC 0004E9CC  48 00 00 DC */	b .L_800519C8
.L_800518F0:
/* 800518F0 0004E9D0  2C 03 FF E0 */	cmpwi r3, -0x20
/* 800518F4 0004E9D4  40 80 00 D4 */	bge .L_800519C8
/* 800518F8 0004E9D8  C0 62 88 C4 */	lfs f3, "@1425"@sda21(r2)
/* 800518FC 0004E9DC  38 00 FF E0 */	li r0, -0x20
/* 80051900 0004E9E0  40 80 00 08 */	bge .L_80051908
/* 80051904 0004E9E4  7C 60 1B 78 */	mr r0, r3
.L_80051908:
/* 80051908 0004E9E8  2C 00 FF 92 */	cmpwi r0, -0x6e
/* 8005190C 0004E9EC  40 80 00 0C */	bge .L_80051918
/* 80051910 0004E9F0  38 60 FF 92 */	li r3, -0x6e
/* 80051914 0004E9F4  48 00 00 18 */	b .L_8005192C
.L_80051918:
/* 80051918 0004E9F8  7C 80 07 74 */	extsb r0, r4
/* 8005191C 0004E9FC  38 60 FF E0 */	li r3, -0x20
/* 80051920 0004EA00  2C 00 FF E0 */	cmpwi r0, -0x20
/* 80051924 0004EA04  40 80 00 08 */	bge .L_8005192C
/* 80051928 0004EA08  7C 03 03 78 */	mr r3, r0
.L_8005192C:
/* 8005192C 0004EA0C  38 63 00 20 */	addi r3, r3, 0x20
/* 80051930 0004EA10  3C 00 43 30 */	lis r0, 0x4330
/* 80051934 0004EA14  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80051938 0004EA18  90 01 00 30 */	stw r0, 0x30(r1)
/* 8005193C 0004EA1C  C8 42 88 E0 */	lfd f2, "@1432"@sda21(r2)
/* 80051940 0004EA20  28 05 00 00 */	cmplwi r5, 0x0
/* 80051944 0004EA24  90 61 00 34 */	stw r3, 0x34(r1)
/* 80051948 0004EA28  C0 0D 80 C8 */	lfs f0, zcam_pad_pyaw_scale@sda21(r13)
/* 8005194C 0004EA2C  C8 21 00 30 */	lfd f1, 0x30(r1)
/* 80051950 0004EA30  EC 21 10 28 */	fsubs f1, f1, f2
/* 80051954 0004EA34  EC 01 00 32 */	fmuls f0, f1, f0
/* 80051958 0004EA38  EC 23 00 32 */	fmuls f1, f3, f0
/* 8005195C 0004EA3C  41 82 00 18 */	beq .L_80051974
/* 80051960 0004EA40  80 0D 8B D4 */	lwz r0, "stop_track__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 80051964 0004EA44  28 00 00 00 */	cmplwi r0, 0x0
/* 80051968 0004EA48  40 82 00 0C */	bne .L_80051974
/* 8005196C 0004EA4C  C0 02 88 C8 */	lfs f0, "@1426"@sda21(r2)
/* 80051970 0004EA50  EC 21 00 32 */	fmuls f1, f1, f0
.L_80051974:
/* 80051974 0004EA54  C0 1E 01 80 */	lfs f0, 0x180(r30)
/* 80051978 0004EA58  EF 9C 08 2A */	fadds f28, f28, f1
/* 8005197C 0004EA5C  EC 00 08 2A */	fadds f0, f0, f1
/* 80051980 0004EA60  D0 1E 01 80 */	stfs f0, 0x180(r30)
/* 80051984 0004EA64  C0 1E 01 84 */	lfs f0, 0x184(r30)
/* 80051988 0004EA68  EC 00 08 2A */	fadds f0, f0, f1
/* 8005198C 0004EA6C  D0 1E 01 84 */	stfs f0, 0x184(r30)
/* 80051990 0004EA70  C0 2D 8B FC */	lfs f1, lktm$1178@sda21(r13)
/* 80051994 0004EA74  C0 02 88 CC */	lfs f0, "@1427"@sda21(r2)
/* 80051998 0004EA78  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005199C 0004EA7C  40 81 00 20 */	ble .L_800519BC
/* 800519A0 0004EA80  EC 01 F8 28 */	fsubs f0, f1, f31
/* 800519A4 0004EA84  D0 0D 8B FC */	stfs f0, lktm$1178@sda21(r13)
/* 800519A8 0004EA88  C0 2D 8B FC */	lfs f1, lktm$1178@sda21(r13)
/* 800519AC 0004EA8C  C0 02 88 CC */	lfs f0, "@1427"@sda21(r2)
/* 800519B0 0004EA90  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800519B4 0004EA94  40 80 00 08 */	bge .L_800519BC
/* 800519B8 0004EA98  D0 0D 8B FC */	stfs f0, lktm$1178@sda21(r13)
.L_800519BC:
/* 800519BC 0004EA9C  C0 0D 81 38 */	lfs f0, zcam_overrot_tmanual@sda21(r13)
/* 800519C0 0004EAA0  FC 00 00 50 */	fneg f0, f0
/* 800519C4 0004EAA4  D0 0D 8B 78 */	stfs f0, zcam_overrot_tmr@sda21(r13)
.L_800519C8:
/* 800519C8 0004EAA8  C0 02 88 1C */	lfs f0, "@820"@sda21(r2)
/* 800519CC 0004EAAC  D0 0D 8C 04 */	stfs f0, pitch_s$1181@sda21(r13)
/* 800519D0 0004EAB0  88 0D 81 40 */	lbz r0, "input_enabled__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 800519D4 0004EAB4  28 00 00 00 */	cmplwi r0, 0x0
/* 800519D8 0004EAB8  41 82 01 48 */	beq .L_80051B20
/* 800519DC 0004EABC  80 0D 8B E0 */	lwz r0, "wall_jump_enabled__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 800519E0 0004EAC0  2C 00 00 00 */	cmpwi r0, 0x0
/* 800519E4 0004EAC4  40 82 01 3C */	bne .L_80051B20
/* 800519E8 0004EAC8  80 0D 8B 98 */	lwz r0, zcam_highbounce@sda21(r13)
/* 800519EC 0004EACC  2C 00 00 00 */	cmpwi r0, 0x0
/* 800519F0 0004EAD0  40 82 01 30 */	bne .L_80051B20
/* 800519F4 0004EAD4  80 7F 03 1C */	lwz r3, 0x31c(r31)
/* 800519F8 0004EAD8  88 83 00 3B */	lbz r4, 0x3b(r3)
/* 800519FC 0004EADC  7C 83 07 74 */	extsb r3, r4
/* 80051A00 0004EAE0  2C 03 00 20 */	cmpwi r3, 0x20
/* 80051A04 0004EAE4  40 81 00 90 */	ble .L_80051A94
/* 80051A08 0004EAE8  2C 03 00 6E */	cmpwi r3, 0x6e
/* 80051A0C 0004EAEC  C0 62 88 C4 */	lfs f3, "@1425"@sda21(r2)
/* 80051A10 0004EAF0  38 00 00 6E */	li r0, 0x6e
/* 80051A14 0004EAF4  40 80 00 08 */	bge .L_80051A1C
/* 80051A18 0004EAF8  7C 60 1B 78 */	mr r0, r3
.L_80051A1C:
/* 80051A1C 0004EAFC  2C 00 00 20 */	cmpwi r0, 0x20
/* 80051A20 0004EB00  40 80 00 0C */	bge .L_80051A2C
/* 80051A24 0004EB04  38 60 00 20 */	li r3, 0x20
/* 80051A28 0004EB08  48 00 00 18 */	b .L_80051A40
.L_80051A2C:
/* 80051A2C 0004EB0C  7C 80 07 74 */	extsb r0, r4
/* 80051A30 0004EB10  38 60 00 6E */	li r3, 0x6e
/* 80051A34 0004EB14  2C 00 00 6E */	cmpwi r0, 0x6e
/* 80051A38 0004EB18  40 80 00 08 */	bge .L_80051A40
/* 80051A3C 0004EB1C  7C 03 03 78 */	mr r3, r0
.L_80051A40:
/* 80051A40 0004EB20  38 63 FF E0 */	addi r3, r3, -0x20
/* 80051A44 0004EB24  3C 00 43 30 */	lis r0, 0x4330
/* 80051A48 0004EB28  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80051A4C 0004EB2C  90 01 00 30 */	stw r0, 0x30(r1)
/* 80051A50 0004EB30  C8 42 88 E0 */	lfd f2, "@1432"@sda21(r2)
/* 80051A54 0004EB34  90 61 00 34 */	stw r3, 0x34(r1)
/* 80051A58 0004EB38  C0 0D 80 CC */	lfs f0, zcam_pad_pitch_scale@sda21(r13)
/* 80051A5C 0004EB3C  C8 21 00 30 */	lfd f1, 0x30(r1)
/* 80051A60 0004EB40  EC 21 10 28 */	fsubs f1, f1, f2
/* 80051A64 0004EB44  EC 01 00 32 */	fmuls f0, f1, f0
/* 80051A68 0004EB48  EC 03 00 32 */	fmuls f0, f3, f0
/* 80051A6C 0004EB4C  D0 0D 8C 04 */	stfs f0, pitch_s$1181@sda21(r13)
/* 80051A70 0004EB50  C0 2D 8C 04 */	lfs f1, pitch_s$1181@sda21(r13)
/* 80051A74 0004EB54  C0 02 88 24 */	lfs f0, "@822"@sda21(r2)
/* 80051A78 0004EB58  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80051A7C 0004EB5C  40 81 00 08 */	ble .L_80051A84
/* 80051A80 0004EB60  D0 0D 8C 04 */	stfs f0, pitch_s$1181@sda21(r13)
.L_80051A84:
/* 80051A84 0004EB64  C0 0D 81 38 */	lfs f0, zcam_overrot_tmanual@sda21(r13)
/* 80051A88 0004EB68  FC 00 00 50 */	fneg f0, f0
/* 80051A8C 0004EB6C  D0 0D 8B 78 */	stfs f0, zcam_overrot_tmr@sda21(r13)
/* 80051A90 0004EB70  48 00 00 90 */	b .L_80051B20
.L_80051A94:
/* 80051A94 0004EB74  2C 03 FF E0 */	cmpwi r3, -0x20
/* 80051A98 0004EB78  40 80 00 88 */	bge .L_80051B20
/* 80051A9C 0004EB7C  C0 62 88 C4 */	lfs f3, "@1425"@sda21(r2)
/* 80051AA0 0004EB80  38 00 FF E0 */	li r0, -0x20
/* 80051AA4 0004EB84  40 80 00 08 */	bge .L_80051AAC
/* 80051AA8 0004EB88  7C 60 1B 78 */	mr r0, r3
.L_80051AAC:
/* 80051AAC 0004EB8C  2C 00 FF 92 */	cmpwi r0, -0x6e
/* 80051AB0 0004EB90  40 80 00 0C */	bge .L_80051ABC
/* 80051AB4 0004EB94  38 60 FF 92 */	li r3, -0x6e
/* 80051AB8 0004EB98  48 00 00 18 */	b .L_80051AD0
.L_80051ABC:
/* 80051ABC 0004EB9C  7C 80 07 74 */	extsb r0, r4
/* 80051AC0 0004EBA0  38 60 FF E0 */	li r3, -0x20
/* 80051AC4 0004EBA4  2C 00 FF E0 */	cmpwi r0, -0x20
/* 80051AC8 0004EBA8  40 80 00 08 */	bge .L_80051AD0
/* 80051ACC 0004EBAC  7C 03 03 78 */	mr r3, r0
.L_80051AD0:
/* 80051AD0 0004EBB0  38 63 00 20 */	addi r3, r3, 0x20
/* 80051AD4 0004EBB4  3C 00 43 30 */	lis r0, 0x4330
/* 80051AD8 0004EBB8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80051ADC 0004EBBC  90 01 00 30 */	stw r0, 0x30(r1)
/* 80051AE0 0004EBC0  C8 42 88 E0 */	lfd f2, "@1432"@sda21(r2)
/* 80051AE4 0004EBC4  90 61 00 34 */	stw r3, 0x34(r1)
/* 80051AE8 0004EBC8  C0 0D 80 CC */	lfs f0, zcam_pad_pitch_scale@sda21(r13)
/* 80051AEC 0004EBCC  C8 21 00 30 */	lfd f1, 0x30(r1)
/* 80051AF0 0004EBD0  EC 21 10 28 */	fsubs f1, f1, f2
/* 80051AF4 0004EBD4  EC 01 00 32 */	fmuls f0, f1, f0
/* 80051AF8 0004EBD8  EC 03 00 32 */	fmuls f0, f3, f0
/* 80051AFC 0004EBDC  D0 0D 8C 04 */	stfs f0, pitch_s$1181@sda21(r13)
/* 80051B00 0004EBE0  C0 2D 8C 04 */	lfs f1, pitch_s$1181@sda21(r13)
/* 80051B04 0004EBE4  C0 02 88 D0 */	lfs f0, "@1428"@sda21(r2)
/* 80051B08 0004EBE8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80051B0C 0004EBEC  40 80 00 08 */	bge .L_80051B14
/* 80051B10 0004EBF0  D0 0D 8C 04 */	stfs f0, pitch_s$1181@sda21(r13)
.L_80051B14:
/* 80051B14 0004EBF4  C0 0D 81 38 */	lfs f0, zcam_overrot_tmanual@sda21(r13)
/* 80051B18 0004EBF8  FC 00 00 50 */	fneg f0, f0
/* 80051B1C 0004EBFC  D0 0D 8B 78 */	stfs f0, zcam_overrot_tmr@sda21(r13)
.L_80051B20:
/* 80051B20 0004EC00  C0 02 88 38 */	lfs f0, "@877"@sda21(r2)
/* 80051B24 0004EC04  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80051B28 0004EC08  40 81 02 B0 */	ble .L_80051DD8
/* 80051B2C 0004EC0C  80 9E 01 10 */	lwz r4, 0x110(r30)
/* 80051B30 0004EC10  28 04 00 00 */	cmplwi r4, 0x0
/* 80051B34 0004EC14  41 82 02 A4 */	beq .L_80051DD8
/* 80051B38 0004EC18  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 80051B3C 0004EC1C  28 03 00 00 */	cmplwi r3, 0x0
/* 80051B40 0004EC20  41 82 02 98 */	beq .L_80051DD8
/* 80051B44 0004EC24  C0 02 88 D4 */	lfs f0, "@1429"@sda21(r2)
/* 80051B48 0004EC28  FC 1B 00 40 */	fcmpo cr0, f27, f0
/* 80051B4C 0004EC2C  40 80 02 8C */	bge .L_80051DD8
/* 80051B50 0004EC30  C0 A4 00 30 */	lfs f5, 0x30(r4)
/* 80051B54 0004EC34  C0 23 00 30 */	lfs f1, 0x30(r3)
/* 80051B58 0004EC38  C0 C4 00 38 */	lfs f6, 0x38(r4)
/* 80051B5C 0004EC3C  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 80051B60 0004EC40  EC 85 08 28 */	fsubs f4, f5, f1
/* 80051B64 0004EC44  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 80051B68 0004EC48  EC 66 00 28 */	fsubs f3, f6, f0
/* 80051B6C 0004EC4C  C0 41 00 28 */	lfs f2, 0x28(r1)
/* 80051B70 0004EC50  EC 84 08 28 */	fsubs f4, f4, f1
/* 80051B74 0004EC54  C0 1E 00 4C */	lfs f0, 0x4c(r30)
/* 80051B78 0004EC58  C0 3E 00 44 */	lfs f1, 0x44(r30)
/* 80051B7C 0004EC5C  EC 43 10 28 */	fsubs f2, f3, f2
/* 80051B80 0004EC60  EF 24 F8 24 */	fdivs f25, f4, f31
/* 80051B84 0004EC64  EE C6 00 28 */	fsubs f22, f6, f0
/* 80051B88 0004EC68  EF 02 F8 24 */	fdivs f24, f2, f31
/* 80051B8C 0004EC6C  EE E5 08 28 */	fsubs f23, f5, f1
/* 80051B90 0004EC70  EC 16 05 B2 */	fmuls f0, f22, f22
/* 80051B94 0004EC74  EC 37 05 FA */	fmadds f1, f23, f23, f0
/* 80051B98 0004EC78  4B FB 8C 65 */	bl xsqrt__Ff
/* 80051B9C 0004EC7C  EC 18 06 32 */	fmuls f0, f24, f24
/* 80051BA0 0004EC80  FF 40 08 90 */	fmr f26, f1
/* 80051BA4 0004EC84  EC 39 06 7A */	fmadds f1, f25, f25, f0
/* 80051BA8 0004EC88  4B FB 8C 55 */	bl xsqrt__Ff
/* 80051BAC 0004EC8C  FF 60 08 90 */	fmr f27, f1
/* 80051BB0 0004EC90  C0 4D 81 30 */	lfs f2, zcam_overrot_velmin@sda21(r13)
/* 80051BB4 0004EC94  FC 1B 10 40 */	fcmpo cr0, f27, f2
/* 80051BB8 0004EC98  41 81 00 14 */	bgt .L_80051BCC
/* 80051BBC 0004EC9C  C0 2D 8B 78 */	lfs f1, zcam_overrot_tmr@sda21(r13)
/* 80051BC0 0004ECA0  C0 02 88 1C */	lfs f0, "@820"@sda21(r2)
/* 80051BC4 0004ECA4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80051BC8 0004ECA8  40 80 00 14 */	bge .L_80051BDC
.L_80051BCC:
/* 80051BCC 0004ECAC  C0 0D 8B 78 */	lfs f0, zcam_overrot_tmr@sda21(r13)
/* 80051BD0 0004ECB0  EC 00 F8 2A */	fadds f0, f0, f31
/* 80051BD4 0004ECB4  D0 0D 8B 78 */	stfs f0, zcam_overrot_tmr@sda21(r13)
/* 80051BD8 0004ECB8  48 00 00 38 */	b .L_80051C10
.L_80051BDC:
/* 80051BDC 0004ECBC  40 81 00 34 */	ble .L_80051C10
/* 80051BE0 0004ECC0  C0 0D 81 2C */	lfs f0, zcam_overrot_tend@sda21(r13)
/* 80051BE4 0004ECC4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80051BE8 0004ECC8  40 81 00 08 */	ble .L_80051BF0
/* 80051BEC 0004ECCC  D0 0D 8B 78 */	stfs f0, zcam_overrot_tmr@sda21(r13)
.L_80051BF0:
/* 80051BF0 0004ECD0  C0 0D 8B 78 */	lfs f0, zcam_overrot_tmr@sda21(r13)
/* 80051BF4 0004ECD4  EC 00 F8 28 */	fsubs f0, f0, f31
/* 80051BF8 0004ECD8  D0 0D 8B 78 */	stfs f0, zcam_overrot_tmr@sda21(r13)
/* 80051BFC 0004ECDC  C0 2D 8B 78 */	lfs f1, zcam_overrot_tmr@sda21(r13)
/* 80051C00 0004ECE0  C0 02 88 1C */	lfs f0, "@820"@sda21(r2)
/* 80051C04 0004ECE4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80051C08 0004ECE8  40 80 00 08 */	bge .L_80051C10
/* 80051C0C 0004ECEC  D0 0D 8B 78 */	stfs f0, zcam_overrot_tmr@sda21(r13)
.L_80051C10:
/* 80051C10 0004ECF0  C0 2D 8B 78 */	lfs f1, zcam_overrot_tmr@sda21(r13)
/* 80051C14 0004ECF4  C0 0D 81 28 */	lfs f0, zcam_overrot_tstart@sda21(r13)
/* 80051C18 0004ECF8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80051C1C 0004ECFC  40 81 01 BC */	ble .L_80051DD8
/* 80051C20 0004ED00  C0 02 88 BC */	lfs f0, "@1423"@sda21(r2)
/* 80051C24 0004ED04  FC 1A 00 40 */	fcmpo cr0, f26, f0
/* 80051C28 0004ED08  40 81 01 B0 */	ble .L_80051DD8
/* 80051C2C 0004ED0C  FC 1B 10 40 */	fcmpo cr0, f27, f2
/* 80051C30 0004ED10  40 81 01 A8 */	ble .L_80051DD8
/* 80051C34 0004ED14  EE D6 D0 24 */	fdivs f22, f22, f26
/* 80051C38 0004ED18  C0 42 88 24 */	lfs f2, "@822"@sda21(r2)
/* 80051C3C 0004ED1C  EF 18 D8 24 */	fdivs f24, f24, f27
/* 80051C40 0004ED20  EE F7 D0 24 */	fdivs f23, f23, f26
/* 80051C44 0004ED24  EF 39 D8 24 */	fdivs f25, f25, f27
/* 80051C48 0004ED28  EC 16 06 32 */	fmuls f0, f22, f24
/* 80051C4C 0004ED2C  EC 17 06 7A */	fmadds f0, f23, f25, f0
/* 80051C50 0004ED30  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80051C54 0004ED34  40 80 00 08 */	bge .L_80051C5C
/* 80051C58 0004ED38  FC 40 00 90 */	fmr f2, f0
.L_80051C5C:
/* 80051C5C 0004ED3C  C0 22 88 D0 */	lfs f1, "@1428"@sda21(r2)
/* 80051C60 0004ED40  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80051C64 0004ED44  40 81 00 08 */	ble .L_80051C6C
/* 80051C68 0004ED48  48 00 00 14 */	b .L_80051C7C
.L_80051C6C:
/* 80051C6C 0004ED4C  C0 22 88 24 */	lfs f1, "@822"@sda21(r2)
/* 80051C70 0004ED50  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80051C74 0004ED54  40 80 00 08 */	bge .L_80051C7C
/* 80051C78 0004ED58  FC 20 00 90 */	fmr f1, f0
.L_80051C7C:
/* 80051C7C 0004ED5C  EC 17 06 32 */	fmuls f0, f23, f24
/* 80051C80 0004ED60  EE D6 06 78 */	fmsubs f22, f22, f25, f0
/* 80051C84 0004ED64  4B FB CA 8D */	bl xacos__Ff
/* 80051C88 0004ED68  C0 0D 81 18 */	lfs f0, zcam_overrot_min@sda21(r13)
/* 80051C8C 0004ED6C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80051C90 0004ED70  40 81 01 48 */	ble .L_80051DD8
/* 80051C94 0004ED74  C0 6D 81 20 */	lfs f3, zcam_overrot_max@sda21(r13)
/* 80051C98 0004ED78  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 80051C9C 0004ED7C  40 80 01 3C */	bge .L_80051DD8
/* 80051CA0 0004ED80  C0 4D 81 1C */	lfs f2, zcam_overrot_mid@sda21(r13)
/* 80051CA4 0004ED84  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80051CA8 0004ED88  4C 40 13 82 */	cror eq, lt, eq
/* 80051CAC 0004ED8C  40 82 00 14 */	bne .L_80051CC0
/* 80051CB0 0004ED90  EC 21 00 28 */	fsubs f1, f1, f0
/* 80051CB4 0004ED94  EC 02 00 28 */	fsubs f0, f2, f0
/* 80051CB8 0004ED98  EC A1 00 24 */	fdivs f5, f1, f0
/* 80051CBC 0004ED9C  48 00 00 10 */	b .L_80051CCC
.L_80051CC0:
/* 80051CC0 0004EDA0  EC 23 08 28 */	fsubs f1, f3, f1
/* 80051CC4 0004EDA4  EC 03 10 28 */	fsubs f0, f3, f2
/* 80051CC8 0004EDA8  EC A1 00 24 */	fdivs f5, f1, f0
.L_80051CCC:
/* 80051CCC 0004EDAC  C0 4D 81 30 */	lfs f2, zcam_overrot_velmin@sda21(r13)
/* 80051CD0 0004EDB0  C0 2D 81 34 */	lfs f1, zcam_overrot_velmax@sda21(r13)
/* 80051CD4 0004EDB4  EC 7B 10 28 */	fsubs f3, f27, f2
/* 80051CD8 0004EDB8  C0 02 88 24 */	lfs f0, "@822"@sda21(r2)
/* 80051CDC 0004EDBC  EC 41 10 28 */	fsubs f2, f1, f2
/* 80051CE0 0004EDC0  C0 22 88 1C */	lfs f1, "@820"@sda21(r2)
/* 80051CE4 0004EDC4  EC 43 10 24 */	fdivs f2, f3, f2
/* 80051CE8 0004EDC8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80051CEC 0004EDCC  40 80 00 08 */	bge .L_80051CF4
/* 80051CF0 0004EDD0  FC 00 10 90 */	fmr f0, f2
.L_80051CF4:
/* 80051CF4 0004EDD4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80051CF8 0004EDD8  40 81 00 0C */	ble .L_80051D04
/* 80051CFC 0004EDDC  C0 82 88 1C */	lfs f4, "@820"@sda21(r2)
/* 80051D00 0004EDE0  48 00 00 14 */	b .L_80051D14
.L_80051D04:
/* 80051D04 0004EDE4  C0 82 88 24 */	lfs f4, "@822"@sda21(r2)
/* 80051D08 0004EDE8  FC 02 20 40 */	fcmpo cr0, f2, f4
/* 80051D0C 0004EDEC  40 80 00 08 */	bge .L_80051D14
/* 80051D10 0004EDF0  FC 80 10 90 */	fmr f4, f2
.L_80051D14:
/* 80051D14 0004EDF4  C0 4D 81 28 */	lfs f2, zcam_overrot_tstart@sda21(r13)
/* 80051D18 0004EDF8  C0 0D 8B 78 */	lfs f0, zcam_overrot_tmr@sda21(r13)
/* 80051D1C 0004EDFC  C0 2D 81 2C */	lfs f1, zcam_overrot_tend@sda21(r13)
/* 80051D20 0004EE00  EC 60 10 28 */	fsubs f3, f0, f2
/* 80051D24 0004EE04  C0 02 88 24 */	lfs f0, "@822"@sda21(r2)
/* 80051D28 0004EE08  EC 41 10 28 */	fsubs f2, f1, f2
/* 80051D2C 0004EE0C  C0 22 88 1C */	lfs f1, "@820"@sda21(r2)
/* 80051D30 0004EE10  EC 63 10 24 */	fdivs f3, f3, f2
/* 80051D34 0004EE14  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80051D38 0004EE18  40 80 00 08 */	bge .L_80051D40
/* 80051D3C 0004EE1C  FC 00 18 90 */	fmr f0, f3
.L_80051D40:
/* 80051D40 0004EE20  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80051D44 0004EE24  40 81 00 0C */	ble .L_80051D50
/* 80051D48 0004EE28  C0 42 88 1C */	lfs f2, "@820"@sda21(r2)
/* 80051D4C 0004EE2C  48 00 00 14 */	b .L_80051D60
.L_80051D50:
/* 80051D50 0004EE30  C0 42 88 24 */	lfs f2, "@822"@sda21(r2)
/* 80051D54 0004EE34  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 80051D58 0004EE38  40 80 00 08 */	bge .L_80051D60
/* 80051D5C 0004EE3C  FC 40 18 90 */	fmr f2, f3
.L_80051D60:
/* 80051D60 0004EE40  EC 04 01 72 */	fmuls f0, f4, f5
/* 80051D64 0004EE44  C0 2D 81 24 */	lfs f1, zcam_overrot_rate@sda21(r13)
/* 80051D68 0004EE48  88 0D 8B D8 */	lbz r0, "lassocam_enabled__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 80051D6C 0004EE4C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80051D70 0004EE50  28 00 00 00 */	cmplwi r0, 0x0
/* 80051D74 0004EE54  EC 22 00 32 */	fmuls f1, f2, f0
/* 80051D78 0004EE58  41 82 00 18 */	beq .L_80051D90
/* 80051D7C 0004EE5C  80 0D 8B D4 */	lwz r0, "stop_track__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 80051D80 0004EE60  28 00 00 00 */	cmplwi r0, 0x0
/* 80051D84 0004EE64  40 82 00 0C */	bne .L_80051D90
/* 80051D88 0004EE68  C0 02 88 C8 */	lfs f0, "@1426"@sda21(r2)
/* 80051D8C 0004EE6C  EC 21 00 32 */	fmuls f1, f1, f0
.L_80051D90:
/* 80051D90 0004EE70  C0 02 88 1C */	lfs f0, "@820"@sda21(r2)
/* 80051D94 0004EE74  FC 16 00 40 */	fcmpo cr0, f22, f0
/* 80051D98 0004EE78  40 81 00 24 */	ble .L_80051DBC
/* 80051D9C 0004EE7C  C0 1E 01 80 */	lfs f0, 0x180(r30)
/* 80051DA0 0004EE80  EF 9C 08 2A */	fadds f28, f28, f1
/* 80051DA4 0004EE84  EC 00 08 2A */	fadds f0, f0, f1
/* 80051DA8 0004EE88  D0 1E 01 80 */	stfs f0, 0x180(r30)
/* 80051DAC 0004EE8C  C0 1E 01 84 */	lfs f0, 0x184(r30)
/* 80051DB0 0004EE90  EC 00 08 2A */	fadds f0, f0, f1
/* 80051DB4 0004EE94  D0 1E 01 84 */	stfs f0, 0x184(r30)
/* 80051DB8 0004EE98  48 00 00 20 */	b .L_80051DD8
.L_80051DBC:
/* 80051DBC 0004EE9C  C0 1E 01 80 */	lfs f0, 0x180(r30)
/* 80051DC0 0004EEA0  EF 9C 08 28 */	fsubs f28, f28, f1
/* 80051DC4 0004EEA4  EC 00 08 28 */	fsubs f0, f0, f1
/* 80051DC8 0004EEA8  D0 1E 01 80 */	stfs f0, 0x180(r30)
/* 80051DCC 0004EEAC  C0 1E 01 84 */	lfs f0, 0x184(r30)
/* 80051DD0 0004EEB0  EC 00 08 28 */	fsubs f0, f0, f1
/* 80051DD4 0004EEB4  D0 1E 01 84 */	stfs f0, 0x184(r30)
.L_80051DD8:
/* 80051DD8 0004EEB8  FC 40 F8 90 */	fmr f2, f31
/* 80051DDC 0004EEBC  C0 2D 8C 04 */	lfs f1, pitch_s$1181@sda21(r13)
/* 80051DE0 0004EEC0  7F C3 F3 78 */	mr r3, r30
/* 80051DE4 0004EEC4  38 81 00 10 */	addi r4, r1, 0x10
/* 80051DE8 0004EEC8  38 A1 00 0C */	addi r5, r1, 0xc
/* 80051DEC 0004EECC  38 C1 00 08 */	addi r6, r1, 0x8
/* 80051DF0 0004EED0  38 ED 8B FC */	addi r7, r13, lktm$1178@sda21
/* 80051DF4 0004EED4  4B FF F0 69 */	bl zCameraFreeLookSetGoals__FP7xCamerafRfRfRfRff
/* 80051DF8 0004EED8  80 7E 01 10 */	lwz r3, 0x110(r30)
/* 80051DFC 0004EEDC  C0 1E 00 48 */	lfs f0, 0x48(r30)
/* 80051E00 0004EEE0  C0 23 00 34 */	lfs f1, 0x34(r3)
/* 80051E04 0004EEE4  C0 63 00 30 */	lfs f3, 0x30(r3)
/* 80051E08 0004EEE8  EC 81 00 28 */	fsubs f4, f1, f0
/* 80051E0C 0004EEEC  C0 3E 00 44 */	lfs f1, 0x44(r30)
/* 80051E10 0004EEF0  C0 43 00 38 */	lfs f2, 0x38(r3)
/* 80051E14 0004EEF4  C0 1E 00 4C */	lfs f0, 0x4c(r30)
/* 80051E18 0004EEF8  EE C3 08 28 */	fsubs f22, f3, f1
/* 80051E1C 0004EEFC  EC 24 01 32 */	fmuls f1, f4, f4
/* 80051E20 0004EF00  EE E2 00 28 */	fsubs f23, f2, f0
/* 80051E24 0004EF04  C0 02 88 24 */	lfs f0, "@822"@sda21(r2)
/* 80051E28 0004EF08  C0 42 88 38 */	lfs f2, "@877"@sda21(r2)
/* 80051E2C 0004EF0C  EC 36 0D BA */	fmadds f1, f22, f22, f1
/* 80051E30 0004EF10  EC 37 0D FA */	fmadds f1, f23, f23, f1
/* 80051E34 0004EF14  EC 01 00 28 */	fsubs f0, f1, f0
/* 80051E38 0004EF18  FC 00 02 10 */	fabs f0, f0
/* 80051E3C 0004EF1C  FC 00 00 18 */	frsp f0, f0
/* 80051E40 0004EF20  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80051E44 0004EF24  4C 40 13 82 */	cror eq, lt, eq
/* 80051E48 0004EF28  40 82 00 10 */	bne .L_80051E58
/* 80051E4C 0004EF2C  FC 20 B0 90 */	fmr f1, f22
/* 80051E50 0004EF30  FC 40 B8 90 */	fmr f2, f23
/* 80051E54 0004EF34  48 00 00 38 */	b .L_80051E8C
.L_80051E58:
/* 80051E58 0004EF38  FC 00 0A 10 */	fabs f0, f1
/* 80051E5C 0004EF3C  FC 00 00 18 */	frsp f0, f0
/* 80051E60 0004EF40  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80051E64 0004EF44  4C 40 13 82 */	cror eq, lt, eq
/* 80051E68 0004EF48  40 82 00 10 */	bne .L_80051E78
/* 80051E6C 0004EF4C  C0 22 88 1C */	lfs f1, "@820"@sda21(r2)
/* 80051E70 0004EF50  FC 40 08 90 */	fmr f2, f1
/* 80051E74 0004EF54  48 00 00 18 */	b .L_80051E8C
.L_80051E78:
/* 80051E78 0004EF58  4B FB 89 85 */	bl xsqrt__Ff
/* 80051E7C 0004EF5C  C0 02 88 24 */	lfs f0, "@822"@sda21(r2)
/* 80051E80 0004EF60  EC 00 08 24 */	fdivs f0, f0, f1
/* 80051E84 0004EF64  EC 36 00 32 */	fmuls f1, f22, f0
/* 80051E88 0004EF68  EC 57 00 32 */	fmuls f2, f23, f0
.L_80051E8C:
/* 80051E8C 0004EF6C  4B FB 41 E5 */	bl xatan2__Fff
/* 80051E90 0004EF70  88 0D 8B D8 */	lbz r0, "lassocam_enabled__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 80051E94 0004EF74  FE C0 08 90 */	fmr f22, f1
/* 80051E98 0004EF78  28 00 00 00 */	cmplwi r0, 0x0
/* 80051E9C 0004EF7C  41 82 00 38 */	beq .L_80051ED4
/* 80051EA0 0004EF80  80 0D 8B D4 */	lwz r0, "stop_track__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 80051EA4 0004EF84  28 00 00 00 */	cmplwi r0, 0x0
/* 80051EA8 0004EF88  40 82 00 2C */	bne .L_80051ED4
/* 80051EAC 0004EF8C  C0 A2 88 1C */	lfs f5, "@820"@sda21(r2)
/* 80051EB0 0004EF90  FC 60 E0 90 */	fmr f3, f28
/* 80051EB4 0004EF94  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80051EB8 0004EF98  7F C3 F3 78 */	mr r3, r30
/* 80051EBC 0004EF9C  FC C0 28 90 */	fmr f6, f5
/* 80051EC0 0004EFA0  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 80051EC4 0004EFA4  C0 8D 8B F4 */	lfs f4, mvtm$1175@sda21(r13)
/* 80051EC8 0004EFA8  38 80 00 20 */	li r4, 0x20
/* 80051ECC 0004EFAC  4B FB B7 05 */	bl xCameraMove__FP7xCameraUiffffff
/* 80051ED0 0004EFB0  48 00 00 28 */	b .L_80051EF8
.L_80051ED4:
/* 80051ED4 0004EFB4  C0 A2 88 1C */	lfs f5, "@820"@sda21(r2)
/* 80051ED8 0004EFB8  FC 60 E0 90 */	fmr f3, f28
/* 80051EDC 0004EFBC  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80051EE0 0004EFC0  7F C3 F3 78 */	mr r3, r30
/* 80051EE4 0004EFC4  FC C0 28 90 */	fmr f6, f5
/* 80051EE8 0004EFC8  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 80051EEC 0004EFCC  C0 8D 8B F4 */	lfs f4, mvtm$1175@sda21(r13)
/* 80051EF0 0004EFD0  38 80 00 28 */	li r4, 0x28
/* 80051EF4 0004EFD4  4B FB B6 DD */	bl xCameraMove__FP7xCameraUiffffff
.L_80051EF8:
/* 80051EF8 0004EFD8  C0 62 88 1C */	lfs f3, "@820"@sda21(r2)
/* 80051EFC 0004EFDC  FC 20 B0 90 */	fmr f1, f22
/* 80051F00 0004EFE0  C0 41 00 08 */	lfs f2, 0x8(r1)
/* 80051F04 0004EFE4  7F C3 F3 78 */	mr r3, r30
/* 80051F08 0004EFE8  FC A0 18 90 */	fmr f5, f3
/* 80051F0C 0004EFEC  C0 8D 8B FC */	lfs f4, lktm$1178@sda21(r13)
/* 80051F10 0004EFF0  FC C0 18 90 */	fmr f6, f3
/* 80051F14 0004EFF4  38 80 00 00 */	li r4, 0x0
/* 80051F18 0004EFF8  4B FB BA D5 */	bl xCameraLookYPR__FP7xCameraUiffffff
/* 80051F1C 0004EFFC  80 0D 8B E0 */	lwz r0, "wall_jump_enabled__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 80051F20 0004F000  2C 00 00 02 */	cmpwi r0, 0x2
/* 80051F24 0004F004  40 82 00 9C */	bne .L_80051FC0
/* 80051F28 0004F008  C0 62 88 58 */	lfs f3, "@991"@sda21(r2)
/* 80051F2C 0004F00C  3C 60 80 2E */	lis r3, "wall_jump_view__21@unnamed@zCamera_cpp@"@ha
/* 80051F30 0004F010  38 83 BA 70 */	addi r4, r3, "wall_jump_view__21@unnamed@zCamera_cpp@"@l
/* 80051F34 0004F014  C0 22 88 1C */	lfs f1, "@820"@sda21(r2)
/* 80051F38 0004F018  FC 80 18 90 */	fmr f4, f3
/* 80051F3C 0004F01C  C0 42 88 28 */	lfs f2, "@838"@sda21(r2)
/* 80051F40 0004F020  7F C3 F3 78 */	mr r3, r30
/* 80051F44 0004F024  4B FB BC F5 */	bl xCameraRotate__FP7xCameraRC5xVec3ffff
/* 80051F48 0004F028  C0 1E 01 64 */	lfs f0, 0x164(r30)
/* 80051F4C 0004F02C  3C 60 80 2E */	lis r3, "wall_jump_view__21@unnamed@zCamera_cpp@"@ha
/* 80051F50 0004F030  38 83 BA 70 */	addi r4, r3, "wall_jump_view__21@unnamed@zCamera_cpp@"@l
/* 80051F54 0004F034  D0 1E 01 60 */	stfs f0, 0x160(r30)
/* 80051F58 0004F038  38 61 00 14 */	addi r3, r1, 0x14
/* 80051F5C 0004F03C  C0 1E 01 60 */	lfs f0, 0x160(r30)
/* 80051F60 0004F040  FC 20 00 50 */	fneg f1, f0
/* 80051F64 0004F044  4B FB 91 2D */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 80051F68 0004F048  3C 80 80 3C */	lis r4, globals@ha
/* 80051F6C 0004F04C  38 61 00 14 */	addi r3, r1, 0x14
/* 80051F70 0004F050  38 84 05 58 */	addi r4, r4, globals@l
/* 80051F74 0004F054  80 A4 07 04 */	lwz r5, 0x704(r4)
/* 80051F78 0004F058  7C 64 1B 78 */	mr r4, r3
/* 80051F7C 0004F05C  80 A5 00 4C */	lwz r5, 0x4c(r5)
/* 80051F80 0004F060  38 A5 00 30 */	addi r5, r5, 0x30
/* 80051F84 0004F064  4B FB 91 35 */	bl xVec3Add__FP5xVec3PC5xVec3PC5xVec3
/* 80051F88 0004F068  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 80051F8C 0004F06C  7F C3 F3 78 */	mr r3, r30
/* 80051F90 0004F070  C0 22 88 28 */	lfs f1, "@838"@sda21(r2)
/* 80051F94 0004F074  38 81 00 14 */	addi r4, r1, 0x14
/* 80051F98 0004F078  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 80051F9C 0004F07C  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80051FA0 0004F080  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80051FA4 0004F084  C0 02 88 D8 */	lfs f0, "@1430"@sda21(r2)
/* 80051FA8 0004F088  EC 20 07 F2 */	fmuls f1, f0, f31
/* 80051FAC 0004F08C  4B FB B7 C5 */	bl xCameraMove__FP7xCameraRC5xVec3f
/* 80051FB0 0004F090  80 1E 01 3C */	lwz r0, 0x13c(r30)
/* 80051FB4 0004F094  60 00 00 20 */	ori r0, r0, 0x20
/* 80051FB8 0004F098  90 1E 01 3C */	stw r0, 0x13c(r30)
/* 80051FBC 0004F09C  48 00 00 2C */	b .L_80051FE8
.L_80051FC0:
/* 80051FC0 0004F0A0  2C 00 00 01 */	cmpwi r0, 0x1
/* 80051FC4 0004F0A4  40 82 00 24 */	bne .L_80051FE8
/* 80051FC8 0004F0A8  C0 1E 01 64 */	lfs f0, 0x164(r30)
/* 80051FCC 0004F0AC  38 00 00 00 */	li r0, 0x0
/* 80051FD0 0004F0B0  D0 1E 01 60 */	stfs f0, 0x160(r30)
/* 80051FD4 0004F0B4  C0 1E 01 84 */	lfs f0, 0x184(r30)
/* 80051FD8 0004F0B8  D0 1E 01 80 */	stfs f0, 0x180(r30)
/* 80051FDC 0004F0BC  C0 1E 01 74 */	lfs f0, 0x174(r30)
/* 80051FE0 0004F0C0  D0 1E 01 70 */	stfs f0, 0x170(r30)
/* 80051FE4 0004F0C4  90 0D 8B E0 */	stw r0, "wall_jump_enabled__21@unnamed@zCamera_cpp@"@sda21(r13)
.L_80051FE8:
/* 80051FE8 0004F0C8  FC 20 F8 90 */	fmr f1, f31
/* 80051FEC 0004F0CC  7F C3 F3 78 */	mr r3, r30
/* 80051FF0 0004F0D0  4B FB AC 21 */	bl xCameraUpdate__FP7xCameraf
/* 80051FF4 0004F0D4  88 0D 8B D8 */	lbz r0, "lassocam_enabled__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 80051FF8 0004F0D8  28 00 00 00 */	cmplwi r0, 0x0
/* 80051FFC 0004F0DC  41 82 00 14 */	beq .L_80052010
/* 80052000 0004F0E0  80 0D 8B D4 */	lwz r0, "stop_track__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 80052004 0004F0E4  28 00 00 00 */	cmplwi r0, 0x0
/* 80052008 0004F0E8  40 82 00 08 */	bne .L_80052010
/* 8005200C 0004F0EC  D3 9E 01 80 */	stfs f28, 0x180(r30)
.L_80052010:
/* 80052010 0004F0F0  80 0D 8B 84 */	lwz r0, zcam_bbounce@sda21(r13)
/* 80052014 0004F0F4  90 0D 8B 88 */	stw r0, zcam_lbbounce@sda21(r13)
/* 80052018 0004F0F8  80 7E 01 10 */	lwz r3, 0x110(r30)
/* 8005201C 0004F0FC  D3 C3 00 34 */	stfs f30, 0x34(r3)
/* 80052020 0004F100  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 80052024 0004F104  D3 A3 00 34 */	stfs f29, 0x34(r3)
.L_80052028:
/* 80052028 0004F108  E3 E1 00 D8 */	psq_l f31, 0xd8(r1), 0, qr0
/* 8005202C 0004F10C  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 80052030 0004F110  E3 C1 00 C8 */	psq_l f30, 0xc8(r1), 0, qr0
/* 80052034 0004F114  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 80052038 0004F118  E3 A1 00 B8 */	psq_l f29, 0xb8(r1), 0, qr0
/* 8005203C 0004F11C  CB A1 00 B0 */	lfd f29, 0xb0(r1)
/* 80052040 0004F120  E3 81 00 A8 */	psq_l f28, 0xa8(r1), 0, qr0
/* 80052044 0004F124  CB 81 00 A0 */	lfd f28, 0xa0(r1)
/* 80052048 0004F128  E3 61 00 98 */	psq_l f27, 0x98(r1), 0, qr0
/* 8005204C 0004F12C  CB 61 00 90 */	lfd f27, 0x90(r1)
/* 80052050 0004F130  E3 41 00 88 */	psq_l f26, 0x88(r1), 0, qr0
/* 80052054 0004F134  CB 41 00 80 */	lfd f26, 0x80(r1)
/* 80052058 0004F138  E3 21 00 78 */	psq_l f25, 0x78(r1), 0, qr0
/* 8005205C 0004F13C  CB 21 00 70 */	lfd f25, 0x70(r1)
/* 80052060 0004F140  E3 01 00 68 */	psq_l f24, 0x68(r1), 0, qr0
/* 80052064 0004F144  CB 01 00 60 */	lfd f24, 0x60(r1)
/* 80052068 0004F148  E2 E1 00 58 */	psq_l f23, 0x58(r1), 0, qr0
/* 8005206C 0004F14C  CA E1 00 50 */	lfd f23, 0x50(r1)
/* 80052070 0004F150  E2 C1 00 48 */	psq_l f22, 0x48(r1), 0, qr0
/* 80052074 0004F154  CA C1 00 40 */	lfd f22, 0x40(r1)
/* 80052078 0004F158  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8005207C 0004F15C  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 80052080 0004F160  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80052084 0004F164  7C 08 03 A6 */	mtlr r0
/* 80052088 0004F168  38 21 00 E0 */	addi r1, r1, 0xe0
/* 8005208C 0004F16C  4E 80 00 20 */	blr
.endfn zCameraUpdate__FP7xCameraf

# zCameraSetBbounce(int)
.fn zCameraSetBbounce__Fi, global
/* 80052090 0004F170  90 6D 8B 84 */	stw r3, zcam_bbounce@sda21(r13)
/* 80052094 0004F174  4E 80 00 20 */	blr
.endfn zCameraSetBbounce__Fi

# zCameraSetLongbounce(int)
.fn zCameraSetLongbounce__Fi, global
/* 80052098 0004F178  80 0D 8B 98 */	lwz r0, zcam_highbounce@sda21(r13)
/* 8005209C 0004F17C  2C 00 00 00 */	cmpwi r0, 0x0
/* 800520A0 0004F180  40 82 00 10 */	bne .L_800520B0
/* 800520A4 0004F184  80 0D 8B 94 */	lwz r0, zcam_longbounce@sda21(r13)
/* 800520A8 0004F188  7C 00 18 00 */	cmpw r0, r3
/* 800520AC 0004F18C  41 82 00 0C */	beq .L_800520B8
.L_800520B0:
/* 800520B0 0004F190  38 00 00 00 */	li r0, 0x0
/* 800520B4 0004F194  90 0D 8B 88 */	stw r0, zcam_lbbounce@sda21(r13)
.L_800520B8:
/* 800520B8 0004F198  90 6D 8B 94 */	stw r3, zcam_longbounce@sda21(r13)
/* 800520BC 0004F19C  38 00 00 00 */	li r0, 0x0
/* 800520C0 0004F1A0  90 0D 8B 98 */	stw r0, zcam_highbounce@sda21(r13)
/* 800520C4 0004F1A4  4E 80 00 20 */	blr
.endfn zCameraSetLongbounce__Fi

# zCameraSetHighbounce(int)
.fn zCameraSetHighbounce__Fi, global
/* 800520C8 0004F1A8  80 0D 8B 94 */	lwz r0, zcam_longbounce@sda21(r13)
/* 800520CC 0004F1AC  2C 00 00 00 */	cmpwi r0, 0x0
/* 800520D0 0004F1B0  40 82 00 10 */	bne .L_800520E0
/* 800520D4 0004F1B4  80 0D 8B 98 */	lwz r0, zcam_highbounce@sda21(r13)
/* 800520D8 0004F1B8  7C 00 18 00 */	cmpw r0, r3
/* 800520DC 0004F1BC  41 82 00 0C */	beq .L_800520E8
.L_800520E0:
/* 800520E0 0004F1C0  38 00 00 00 */	li r0, 0x0
/* 800520E4 0004F1C4  90 0D 8B 88 */	stw r0, zcam_lbbounce@sda21(r13)
.L_800520E8:
/* 800520E8 0004F1C8  90 6D 8B 98 */	stw r3, zcam_highbounce@sda21(r13)
/* 800520EC 0004F1CC  38 00 00 00 */	li r0, 0x0
/* 800520F0 0004F1D0  90 0D 8B 94 */	stw r0, zcam_longbounce@sda21(r13)
/* 800520F4 0004F1D4  4E 80 00 20 */	blr
.endfn zCameraSetHighbounce__Fi

# zCameraSetPlayerVel(xVec3*)
.fn zCameraSetPlayerVel__FP5xVec3, global
/* 800520F8 0004F1D8  90 6D 8B A4 */	stw r3, zcam_playervel@sda21(r13)
/* 800520FC 0004F1DC  4E 80 00 20 */	blr
.endfn zCameraSetPlayerVel__FP5xVec3

# zCameraDisableTracking(camera_owner_enum)
.fn zCameraDisableTracking__F17camera_owner_enum, global
/* 80052100 0004F1E0  80 0D 8B D4 */	lwz r0, "stop_track__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 80052104 0004F1E4  7C 00 1B 78 */	or r0, r0, r3
/* 80052108 0004F1E8  90 0D 8B D4 */	stw r0, "stop_track__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 8005210C 0004F1EC  4E 80 00 20 */	blr
.endfn zCameraDisableTracking__F17camera_owner_enum

# zCameraEnableTracking(camera_owner_enum)
.fn zCameraEnableTracking__F17camera_owner_enum, global
/* 80052110 0004F1F0  80 8D 8B D4 */	lwz r4, "stop_track__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 80052114 0004F1F4  7C 80 18 78 */	andc r0, r4, r3
/* 80052118 0004F1F8  90 0D 8B D4 */	stw r0, "stop_track__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 8005211C 0004F1FC  4E 80 00 20 */	blr
.endfn zCameraEnableTracking__F17camera_owner_enum

# zCameraIsTrackingDisabled()
.fn zCameraIsTrackingDisabled__Fv, global
/* 80052120 0004F200  80 6D 8B D4 */	lwz r3, "stop_track__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 80052124 0004F204  4E 80 00 20 */	blr
.endfn zCameraIsTrackingDisabled__Fv

# zCameraDisableInput()
.fn zCameraDisableInput__Fv, global
/* 80052128 0004F208  38 00 00 00 */	li r0, 0x0
/* 8005212C 0004F20C  98 0D 81 40 */	stb r0, "input_enabled__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 80052130 0004F210  4E 80 00 20 */	blr
.endfn zCameraDisableInput__Fv

# zCameraEnableInput()
.fn zCameraEnableInput__Fv, global
/* 80052134 0004F214  38 00 00 01 */	li r0, 0x1
/* 80052138 0004F218  98 0D 81 40 */	stb r0, "input_enabled__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 8005213C 0004F21C  4E 80 00 20 */	blr
.endfn zCameraEnableInput__Fv

# zCameraDisableLassoCam()
.fn zCameraDisableLassoCam__Fv, global
/* 80052140 0004F220  38 00 00 00 */	li r0, 0x0
/* 80052144 0004F224  98 0D 8B D8 */	stb r0, "lassocam_enabled__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 80052148 0004F228  4E 80 00 20 */	blr
.endfn zCameraDisableLassoCam__Fv

# zCameraEnableLassoCam()
.fn zCameraEnableLassoCam__Fv, global
/* 8005214C 0004F22C  38 00 00 01 */	li r0, 0x1
/* 80052150 0004F230  98 0D 8B D8 */	stb r0, "lassocam_enabled__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 80052154 0004F234  4E 80 00 20 */	blr
.endfn zCameraEnableLassoCam__Fv

# zCameraSetLassoCamFactor(float)
.fn zCameraSetLassoCamFactor__Ff, global
/* 80052158 0004F238  D0 2D 8B DC */	stfs f1, "lassocam_factor__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 8005215C 0004F23C  4E 80 00 20 */	blr
.endfn zCameraSetLassoCamFactor__Ff

# zCameraGetLassoCamFactor()
.fn zCameraGetLassoCamFactor__Fv, global
/* 80052160 0004F240  C0 2D 8B DC */	lfs f1, "lassocam_factor__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 80052164 0004F244  4E 80 00 20 */	blr
.endfn zCameraGetLassoCamFactor__Fv

# zCameraGetConvers()
.fn zCameraGetConvers__Fv, global
/* 80052168 0004F248  80 6D 8B 8C */	lwz r3, zcam_convers@sda21(r13)
/* 8005216C 0004F24C  4E 80 00 20 */	blr
.endfn zCameraGetConvers__Fv

# zCameraSetConvers(int)
.fn zCameraSetConvers__Fi, global
/* 80052170 0004F250  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80052174 0004F254  7C 08 02 A6 */	mflr r0
/* 80052178 0004F258  3C 80 80 3C */	lis r4, globals@ha
/* 8005217C 0004F25C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80052180 0004F260  38 84 05 58 */	addi r4, r4, globals@l
/* 80052184 0004F264  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80052188 0004F268  7C 9F 23 78 */	mr r31, r4
/* 8005218C 0004F26C  90 6D 8B 8C */	stw r3, zcam_convers@sda21(r13)
/* 80052190 0004F270  88 0D 8C 0A */	lbz r0, init$1516@sda21(r13)
/* 80052194 0004F274  7C 00 07 75 */	extsb. r0, r0
/* 80052198 0004F278  40 82 00 14 */	bne .L_800521AC
/* 8005219C 0004F27C  38 80 00 00 */	li r4, 0x0
/* 800521A0 0004F280  38 00 00 01 */	li r0, 0x1
/* 800521A4 0004F284  98 8D 8C 09 */	stb r4, saved$1515@sda21(r13)
/* 800521A8 0004F288  98 0D 8C 0A */	stb r0, init$1516@sda21(r13)
.L_800521AC:
/* 800521AC 0004F28C  2C 03 00 00 */	cmpwi r3, 0x0
/* 800521B0 0004F290  41 82 00 30 */	beq .L_800521E0
/* 800521B4 0004F294  3C 60 80 3C */	lis r3, zcam_backupconvers@ha
/* 800521B8 0004F298  7F E4 FB 78 */	mr r4, r31
/* 800521BC 0004F29C  38 63 F2 D4 */	addi r3, r3, zcam_backupconvers@l
/* 800521C0 0004F2A0  4B FF E3 A1 */	bl __as__7xCameraFRC7xCamera
/* 800521C4 0004F2A4  38 60 00 01 */	li r3, 0x1
/* 800521C8 0004F2A8  38 00 00 00 */	li r0, 0x0
/* 800521CC 0004F2AC  98 6D 8C 09 */	stb r3, saved$1515@sda21(r13)
/* 800521D0 0004F2B0  90 0D 8B C0 */	stw r0, zcam_dest@sda21(r13)
/* 800521D4 0004F2B4  C0 02 88 1C */	lfs f0, "@820"@sda21(r2)
/* 800521D8 0004F2B8  D0 0D 8B C4 */	stfs f0, zcam_tmr@sda21(r13)
/* 800521DC 0004F2BC  48 00 00 5C */	b .L_80052238
.L_800521E0:
/* 800521E0 0004F2C0  C0 22 88 18 */	lfs f1, "@819"@sda21(r2)
/* 800521E4 0004F2C4  7F E3 FB 78 */	mr r3, r31
/* 800521E8 0004F2C8  4B FB C2 A9 */	bl xCameraSetFOV__FP7xCameraf
/* 800521EC 0004F2CC  C0 02 88 18 */	lfs f0, "@819"@sda21(r2)
/* 800521F0 0004F2D0  D0 0D 8B CC */	stfs f0, zcam_fovcurr@sda21(r13)
/* 800521F4 0004F2D4  88 0D 8C 09 */	lbz r0, saved$1515@sda21(r13)
/* 800521F8 0004F2D8  28 00 00 00 */	cmplwi r0, 0x0
/* 800521FC 0004F2DC  41 82 00 3C */	beq .L_80052238
/* 80052200 0004F2E0  3C 60 80 3C */	lis r3, zcam_backupconvers@ha
/* 80052204 0004F2E4  38 63 F2 D4 */	addi r3, r3, zcam_backupconvers@l
/* 80052208 0004F2E8  4B FF E6 FD */	bl zCameraFlyRestoreBackup__FP7xCamera
/* 8005220C 0004F2EC  C0 82 88 1C */	lfs f4, "@820"@sda21(r2)
/* 80052210 0004F2F0  7F E3 FB 78 */	mr r3, r31
/* 80052214 0004F2F4  C0 3F 01 60 */	lfs f1, 0x160(r31)
/* 80052218 0004F2F8  38 80 00 2E */	li r4, 0x2e
/* 8005221C 0004F2FC  FC A0 20 90 */	fmr f5, f4
/* 80052220 0004F300  C0 5F 01 70 */	lfs f2, 0x170(r31)
/* 80052224 0004F304  FC C0 20 90 */	fmr f6, f4
/* 80052228 0004F308  C0 7F 01 80 */	lfs f3, 0x180(r31)
/* 8005222C 0004F30C  4B FB B3 A5 */	bl xCameraMove__FP7xCameraUiffffff
/* 80052230 0004F310  38 00 00 00 */	li r0, 0x0
/* 80052234 0004F314  98 0D 8C 09 */	stb r0, saved$1515@sda21(r13)
.L_80052238:
/* 80052238 0004F318  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005223C 0004F31C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80052240 0004F320  7C 08 03 A6 */	mtlr r0
/* 80052244 0004F324  38 21 00 10 */	addi r1, r1, 0x10
/* 80052248 0004F328  4E 80 00 20 */	blr
.endfn zCameraSetConvers__Fi

# zCameraDoTrans(xCamAsset*, float)
.fn zCameraDoTrans__FP9xCamAssetf, global
/* 8005224C 0004F32C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80052250 0004F330  7C 08 02 A6 */	mflr r0
/* 80052254 0004F334  90 01 00 44 */	stw r0, 0x44(r1)
/* 80052258 0004F338  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8005225C 0004F33C  7C 7F 1B 78 */	mr r31, r3
/* 80052260 0004F340  93 ED 8B C0 */	stw r31, zcam_dest@sda21(r13)
/* 80052264 0004F344  C0 02 88 1C */	lfs f0, "@820"@sda21(r2)
/* 80052268 0004F348  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005226C 0004F34C  40 81 00 08 */	ble .L_80052274
/* 80052270 0004F350  48 00 00 08 */	b .L_80052278
.L_80052274:
/* 80052274 0004F354  C0 3F 00 4C */	lfs f1, 0x4c(r31)
.L_80052278:
/* 80052278 0004F358  D0 2D 8B C4 */	stfs f1, zcam_tmr@sda21(r13)
/* 8005227C 0004F35C  D0 2D 8B C8 */	stfs f1, zcam_ttm@sda21(r13)
/* 80052280 0004F360  C0 02 88 1C */	lfs f0, "@820"@sda21(r2)
/* 80052284 0004F364  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80052288 0004F368  4C 40 13 82 */	cror eq, lt, eq
/* 8005228C 0004F36C  40 82 00 68 */	bne .L_800522F4
/* 80052290 0004F370  3C 60 80 3C */	lis r3, globals@ha
/* 80052294 0004F374  38 9F 00 2C */	addi r4, r31, 0x2c
/* 80052298 0004F378  38 63 05 58 */	addi r3, r3, globals@l
/* 8005229C 0004F37C  38 63 00 14 */	addi r3, r3, 0x14
/* 800522A0 0004F380  4B FB 8F C5 */	bl __as__5xVec3FRC5xVec3
/* 800522A4 0004F384  3C 60 80 3C */	lis r3, globals@ha
/* 800522A8 0004F388  38 9F 00 20 */	addi r4, r31, 0x20
/* 800522AC 0004F38C  38 63 05 58 */	addi r3, r3, globals@l
/* 800522B0 0004F390  38 63 00 24 */	addi r3, r3, 0x24
/* 800522B4 0004F394  4B FB 8F B1 */	bl __as__5xVec3FRC5xVec3
/* 800522B8 0004F398  3C 60 80 3C */	lis r3, globals@ha
/* 800522BC 0004F39C  38 9F 00 14 */	addi r4, r31, 0x14
/* 800522C0 0004F3A0  38 63 05 58 */	addi r3, r3, globals@l
/* 800522C4 0004F3A4  38 63 00 34 */	addi r3, r3, 0x34
/* 800522C8 0004F3A8  4B FB 8F 9D */	bl __as__5xVec3FRC5xVec3
/* 800522CC 0004F3AC  3C 60 80 3C */	lis r3, globals@ha
/* 800522D0 0004F3B0  38 9F 00 08 */	addi r4, r31, 0x8
/* 800522D4 0004F3B4  38 63 05 58 */	addi r3, r3, globals@l
/* 800522D8 0004F3B8  38 63 00 44 */	addi r3, r3, 0x44
/* 800522DC 0004F3BC  4B FB 8F 89 */	bl __as__5xVec3FRC5xVec3
/* 800522E0 0004F3C0  C0 1F 00 48 */	lfs f0, 0x48(r31)
/* 800522E4 0004F3C4  D0 0D 8B CC */	stfs f0, zcam_fovcurr@sda21(r13)
/* 800522E8 0004F3C8  C0 1F 00 48 */	lfs f0, 0x48(r31)
/* 800522EC 0004F3CC  D0 0D 8B D0 */	stfs f0, zcam_fovdest@sda21(r13)
/* 800522F0 0004F3D0  48 00 00 40 */	b .L_80052330
.L_800522F4:
/* 800522F4 0004F3D4  38 61 00 08 */	addi r3, r1, 0x8
/* 800522F8 0004F3D8  38 9F 00 2C */	addi r4, r31, 0x2c
/* 800522FC 0004F3DC  4B FB 8F 69 */	bl __as__5xVec3FRC5xVec3
/* 80052300 0004F3E0  38 61 00 18 */	addi r3, r1, 0x18
/* 80052304 0004F3E4  38 9F 00 20 */	addi r4, r31, 0x20
/* 80052308 0004F3E8  4B FB 8F 5D */	bl __as__5xVec3FRC5xVec3
/* 8005230C 0004F3EC  38 61 00 28 */	addi r3, r1, 0x28
/* 80052310 0004F3F0  38 9F 00 14 */	addi r4, r31, 0x14
/* 80052314 0004F3F4  4B FB 8F 51 */	bl __as__5xVec3FRC5xVec3
/* 80052318 0004F3F8  3C 60 80 3C */	lis r3, zcam_quat@ha
/* 8005231C 0004F3FC  38 81 00 08 */	addi r4, r1, 0x8
/* 80052320 0004F400  38 63 F5 F0 */	addi r3, r3, zcam_quat@l
/* 80052324 0004F404  4B FE 09 61 */	bl xQuatFromMat__FP5xQuatPC7xMat3x3
/* 80052328 0004F408  C0 1F 00 48 */	lfs f0, 0x48(r31)
/* 8005232C 0004F40C  D0 0D 8B D0 */	stfs f0, zcam_fovdest@sda21(r13)
.L_80052330:
/* 80052330 0004F410  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80052334 0004F414  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80052338 0004F418  7C 08 03 A6 */	mtlr r0
/* 8005233C 0004F41C  38 21 00 40 */	addi r1, r1, 0x40
/* 80052340 0004F420  4E 80 00 20 */	blr
.endfn zCameraDoTrans__FP9xCamAssetf

# zCameraTranslate(xCamera*, float, float, float)
.fn zCameraTranslate__FP7xCamerafff, global
/* 80052344 0004F424  C0 03 00 44 */	lfs f0, 0x44(r3)
/* 80052348 0004F428  EC 00 08 2A */	fadds f0, f0, f1
/* 8005234C 0004F42C  D0 03 00 44 */	stfs f0, 0x44(r3)
/* 80052350 0004F430  C0 03 00 48 */	lfs f0, 0x48(r3)
/* 80052354 0004F434  EC 00 10 2A */	fadds f0, f0, f2
/* 80052358 0004F438  D0 03 00 48 */	stfs f0, 0x48(r3)
/* 8005235C 0004F43C  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 80052360 0004F440  EC 00 18 2A */	fadds f0, f0, f3
/* 80052364 0004F444  D0 03 00 4C */	stfs f0, 0x4c(r3)
/* 80052368 0004F448  C0 03 01 2C */	lfs f0, 0x12c(r3)
/* 8005236C 0004F44C  EC 00 08 2A */	fadds f0, f0, f1
/* 80052370 0004F450  D0 03 01 2C */	stfs f0, 0x12c(r3)
/* 80052374 0004F454  C0 03 01 30 */	lfs f0, 0x130(r3)
/* 80052378 0004F458  EC 00 10 2A */	fadds f0, f0, f2
/* 8005237C 0004F45C  D0 03 01 30 */	stfs f0, 0x130(r3)
/* 80052380 0004F460  C0 03 01 34 */	lfs f0, 0x134(r3)
/* 80052384 0004F464  EC 00 18 2A */	fadds f0, f0, f3
/* 80052388 0004F468  D0 03 01 34 */	stfs f0, 0x134(r3)
/* 8005238C 0004F46C  4E 80 00 20 */	blr
.endfn zCameraTranslate__FP7xCamerafff

# zCameraEnableWallJump(xCamera*, const xVec3&)
.fn zCameraEnableWallJump__FP7xCameraRC5xVec3, global
/* 80052390 0004F470  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80052394 0004F474  7C 08 02 A6 */	mflr r0
/* 80052398 0004F478  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005239C 0004F47C  80 0D 8B E0 */	lwz r0, "wall_jump_enabled__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 800523A0 0004F480  2C 00 00 02 */	cmpwi r0, 0x2
/* 800523A4 0004F484  41 82 00 0C */	beq .L_800523B0
/* 800523A8 0004F488  38 00 00 03 */	li r0, 0x3
/* 800523AC 0004F48C  90 0D 8B E0 */	stw r0, "wall_jump_enabled__21@unnamed@zCamera_cpp@"@sda21(r13)
.L_800523B0:
/* 800523B0 0004F490  3C A0 80 25 */	lis r5, "@1548"@ha
/* 800523B4 0004F494  84 E5 47 AC */	lwzu r7, "@1548"@l(r5)
/* 800523B8 0004F498  3C 60 80 2E */	lis r3, "wall_jump_view__21@unnamed@zCamera_cpp@"@ha
/* 800523BC 0004F49C  80 C5 00 04 */	lwz r6, 0x4(r5)
/* 800523C0 0004F4A0  38 63 BA 70 */	addi r3, r3, "wall_jump_view__21@unnamed@zCamera_cpp@"@l
/* 800523C4 0004F4A4  80 05 00 08 */	lwz r0, 0x8(r5)
/* 800523C8 0004F4A8  38 A1 00 08 */	addi r5, r1, 0x8
/* 800523CC 0004F4AC  90 E1 00 08 */	stw r7, 0x8(r1)
/* 800523D0 0004F4B0  90 C1 00 0C */	stw r6, 0xc(r1)
/* 800523D4 0004F4B4  90 01 00 10 */	stw r0, 0x10(r1)
/* 800523D8 0004F4B8  4B FC 2C B5 */	bl xVec3Cross__FP5xVec3PC5xVec3PC5xVec3
/* 800523DC 0004F4BC  3C 60 80 2E */	lis r3, "wall_jump_view__21@unnamed@zCamera_cpp@"@ha
/* 800523E0 0004F4C0  38 63 BA 70 */	addi r3, r3, "wall_jump_view__21@unnamed@zCamera_cpp@"@l
/* 800523E4 0004F4C4  7C 64 1B 78 */	mr r4, r3
/* 800523E8 0004F4C8  4B FF BF 09 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 800523EC 0004F4CC  3C 80 80 3C */	lis r4, globals@ha
/* 800523F0 0004F4D0  3C 60 80 2E */	lis r3, "wall_jump_view__21@unnamed@zCamera_cpp@"@ha
/* 800523F4 0004F4D4  38 84 05 58 */	addi r4, r4, globals@l
/* 800523F8 0004F4D8  38 63 BA 70 */	addi r3, r3, "wall_jump_view__21@unnamed@zCamera_cpp@"@l
/* 800523FC 0004F4DC  38 84 00 34 */	addi r4, r4, 0x34
/* 80052400 0004F4E0  4B FF C0 F1 */	bl xVec3Dot__FPC5xVec3PC5xVec3
/* 80052404 0004F4E4  C0 02 88 1C */	lfs f0, "@820"@sda21(r2)
/* 80052408 0004F4E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005240C 0004F4EC  40 80 00 1C */	bge .L_80052428
/* 80052410 0004F4F0  3C 60 80 2E */	lis r3, "wall_jump_view__21@unnamed@zCamera_cpp@"@ha
/* 80052414 0004F4F4  3C 80 80 25 */	lis r4, g_O3@ha
/* 80052418 0004F4F8  38 63 BA 70 */	addi r3, r3, "wall_jump_view__21@unnamed@zCamera_cpp@"@l
/* 8005241C 0004F4FC  38 84 30 18 */	addi r4, r4, g_O3@l
/* 80052420 0004F500  7C 65 1B 78 */	mr r5, r3
/* 80052424 0004F504  4B FB C2 6D */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
.L_80052428:
/* 80052428 0004F508  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005242C 0004F50C  7C 08 03 A6 */	mtlr r0
/* 80052430 0004F510  38 21 00 20 */	addi r1, r1, 0x20
/* 80052434 0004F514  4E 80 00 20 */	blr
.endfn zCameraEnableWallJump__FP7xCameraRC5xVec3

# zCameraDisableWallJump(xCamera*)
.fn zCameraDisableWallJump__FP7xCamera, global
/* 80052438 0004F518  80 0D 8B E0 */	lwz r0, "wall_jump_enabled__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 8005243C 0004F51C  2C 00 00 00 */	cmpwi r0, 0x0
/* 80052440 0004F520  4D 82 00 20 */	beqlr
/* 80052444 0004F524  38 00 00 01 */	li r0, 0x1
/* 80052448 0004F528  90 0D 8B E0 */	stw r0, "wall_jump_enabled__21@unnamed@zCamera_cpp@"@sda21(r13)
/* 8005244C 0004F52C  4E 80 00 20 */	blr
.endfn zCameraDisableWallJump__FP7xCamera

# zCameraSetReward(int)
.fn zCameraSetReward__Fi, global
/* 80052450 0004F530  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80052454 0004F534  7C 08 02 A6 */	mflr r0
/* 80052458 0004F538  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005245C 0004F53C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80052460 0004F540  7C 7F 1B 78 */	mr r31, r3
/* 80052464 0004F544  4B FF FC BD */	bl zCameraIsTrackingDisabled__Fv
/* 80052468 0004F548  28 03 00 00 */	cmplwi r3, 0x0
/* 8005246C 0004F54C  41 82 00 10 */	beq .L_8005247C
/* 80052470 0004F550  38 00 00 00 */	li r0, 0x0
/* 80052474 0004F554  90 0D 8B A0 */	stw r0, zcam_reward@sda21(r13)
/* 80052478 0004F558  48 00 00 08 */	b .L_80052480
.L_8005247C:
/* 8005247C 0004F55C  93 ED 8B A0 */	stw r31, zcam_reward@sda21(r13)
.L_80052480:
/* 80052480 0004F560  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80052484 0004F564  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80052488 0004F568  7C 08 03 A6 */	mtlr r0
/* 8005248C 0004F56C  38 21 00 10 */	addi r1, r1, 0x10
/* 80052490 0004F570  4E 80 00 20 */	blr
.endfn zCameraSetReward__Fi

# zCameraMinTargetHeightSet(float)
.fn zCameraMinTargetHeightSet__Ff, global
/* 80052494 0004F574  D0 2D 81 3C */	stfs f1, zcam_mintgtheight@sda21(r13)
/* 80052498 0004F578  4E 80 00 20 */	blr
.endfn zCameraMinTargetHeightSet__Ff

# zCameraMinTargetHeightClear()
.fn zCameraMinTargetHeightClear__Fv, global
/* 8005249C 0004F57C  C0 02 88 20 */	lfs f0, "@821"@sda21(r2)
/* 800524A0 0004F580  D0 0D 81 3C */	stfs f0, zcam_mintgtheight@sda21(r13)
/* 800524A4 0004F584  4E 80 00 20 */	blr
.endfn zCameraMinTargetHeightClear__Fv

# zCamera_FlyOnly()
.fn zCamera_FlyOnly__Fv, global
/* 800524A8 0004F588  3C 80 80 3C */	lis r4, globals@ha
/* 800524AC 0004F58C  3C 60 50 47 */	lis r3, 0x5047
/* 800524B0 0004F590  38 84 05 58 */	addi r4, r4, globals@l
/* 800524B4 0004F594  80 84 1F C0 */	lwz r4, 0x1fc0(r4)
/* 800524B8 0004F598  38 03 31 32 */	addi r0, r3, 0x3132
/* 800524BC 0004F59C  80 84 00 00 */	lwz r4, 0x0(r4)
/* 800524C0 0004F5A0  7C 04 00 00 */	cmpw r4, r0
/* 800524C4 0004F5A4  41 82 00 50 */	beq .L_80052514
/* 800524C8 0004F5A8  40 80 00 2C */	bge .L_800524F4
/* 800524CC 0004F5AC  3C 60 4B 46 */	lis r3, 0x4b46
/* 800524D0 0004F5B0  38 03 30 35 */	addi r0, r3, 0x3035
/* 800524D4 0004F5B4  7C 04 00 00 */	cmpw r4, r0
/* 800524D8 0004F5B8  41 82 00 3C */	beq .L_80052514
/* 800524DC 0004F5BC  40 80 00 40 */	bge .L_8005251C
/* 800524E0 0004F5C0  3C 60 44 42 */	lis r3, 0x4442
/* 800524E4 0004F5C4  38 03 30 32 */	addi r0, r3, 0x3032
/* 800524E8 0004F5C8  7C 04 00 00 */	cmpw r4, r0
/* 800524EC 0004F5CC  41 82 00 28 */	beq .L_80052514
/* 800524F0 0004F5D0  48 00 00 2C */	b .L_8005251C
.L_800524F4:
/* 800524F4 0004F5D4  3C 60 53 4D */	lis r3, 0x534d
/* 800524F8 0004F5D8  38 03 30 35 */	addi r0, r3, 0x3035
/* 800524FC 0004F5DC  7C 04 00 00 */	cmpw r4, r0
/* 80052500 0004F5E0  40 80 00 1C */	bge .L_8005251C
/* 80052504 0004F5E4  38 03 30 32 */	addi r0, r3, 0x3032
/* 80052508 0004F5E8  7C 04 00 00 */	cmpw r4, r0
/* 8005250C 0004F5EC  40 80 00 08 */	bge .L_80052514
/* 80052510 0004F5F0  48 00 00 0C */	b .L_8005251C
.L_80052514:
/* 80052514 0004F5F4  38 60 00 01 */	li r3, 0x1
/* 80052518 0004F5F8  4E 80 00 20 */	blr
.L_8005251C:
/* 8005251C 0004F5FC  38 60 00 00 */	li r3, 0x0
/* 80052520 0004F600  4E 80 00 20 */	blr
.endfn zCamera_FlyOnly__Fv

# 0x80052524 - 0x80052558
.section .text, "ax", unique, 1
.balign 4

# xVec3Dist2(const xVec3*, const xVec3*)
.fn xVec3Dist2__FPC5xVec3PC5xVec3, weak
/* 80052524 0004F604  C0 23 00 04 */	lfs f1, 0x4(r3)
/* 80052528 0004F608  C0 04 00 04 */	lfs f0, 0x4(r4)
/* 8005252C 0004F60C  C0 63 00 00 */	lfs f3, 0x0(r3)
/* 80052530 0004F610  EC 81 00 28 */	fsubs f4, f1, f0
/* 80052534 0004F614  C0 04 00 00 */	lfs f0, 0x0(r4)
/* 80052538 0004F618  C0 43 00 08 */	lfs f2, 0x8(r3)
/* 8005253C 0004F61C  EC 63 00 28 */	fsubs f3, f3, f0
/* 80052540 0004F620  C0 24 00 08 */	lfs f1, 0x8(r4)
/* 80052544 0004F624  EC 04 01 32 */	fmuls f0, f4, f4
/* 80052548 0004F628  EC 22 08 28 */	fsubs f1, f2, f1
/* 8005254C 0004F62C  EC 03 00 FA */	fmadds f0, f3, f3, f0
/* 80052550 0004F630  EC 21 00 7A */	fmadds f1, f1, f1, f0
/* 80052554 0004F634  4E 80 00 20 */	blr
.endfn xVec3Dist2__FPC5xVec3PC5xVec3

# 0x802547A0 - 0x802547B8
.rodata
.balign 8

.obj "@1021", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@1021"

.obj "@1548", local
	.4byte 0x00000000
	.4byte 0x3F800000
	.4byte 0x00000000
.endobj "@1548"

# 0x802DBA70 - 0x802DBA80
.bss
.balign 8

# @unnamed@zCamera_cpp@::wall_jump_view
.obj "wall_jump_view__21@unnamed@zCamera_cpp@", local
	.skip 0xC
.endobj "wall_jump_view__21@unnamed@zCamera_cpp@"
	.skip 0x4

# 0x803CA9C8 - 0x803CAA60
.section .sdata, "wa"
.balign 8

.obj zcam_pad_pyaw_scale, global
	.4byte 0x3E39987B
.endobj zcam_pad_pyaw_scale

.obj zcam_pad_pitch_scale, global
	.4byte 0x3C9D89D9
.endobj zcam_pad_pitch_scale

.obj zcam_near_d, global
	.4byte 0x40400000
.endobj zcam_near_d

.obj zcam_near_h, global
	.4byte 0x3FE66666
.endobj zcam_near_h

.obj zcam_near_pitch, global
	.4byte 0x3E32B8C3
.endobj zcam_near_pitch

.obj zcam_far_d, global
	.4byte 0x40A00000
.endobj zcam_far_d

.obj zcam_far_h, global
	.4byte 0x40400000
.endobj zcam_far_h

.obj zcam_far_pitch, global
	.4byte 0x3E860A92
.endobj zcam_far_pitch

.obj zcam_wall_d, global
	.4byte 0x40F00000
.endobj zcam_wall_d

.obj zcam_wall_h, global
	.4byte 0x40000000
.endobj zcam_wall_h

.obj zcam_wall_pitch, global
	.4byte 0x3EA0D97C
.endobj zcam_wall_pitch

.obj zcam_above_d, global
	.4byte 0x3E4CCCCD
.endobj zcam_above_d

.obj zcam_above_h, global
	.4byte 0x400CCCCD
.endobj zcam_above_h

.obj zcam_above_pitch, global
	.4byte 0x3F9C61AB
.endobj zcam_above_pitch

.obj zcam_below_d, global
	.4byte 0x3F19999A
.endobj zcam_below_d

.obj zcam_below_h, global
	.4byte 0x3E4CCCCD
.endobj zcam_below_h

.obj zcam_below_pitch, global
	.4byte 0xBF9C61AB
.endobj zcam_below_pitch

.obj zcam_highbounce_d, global
	.4byte 0x3E4CCCCD
.endobj zcam_highbounce_d

.obj zcam_highbounce_h, global
	.4byte 0x40A00000
.endobj zcam_highbounce_h

.obj zcam_highbounce_pitch, global
	.4byte 0x3FC6D3F2
.endobj zcam_highbounce_pitch

.obj zcam_overrot_min, global
	.4byte 0x3EDF66F3
.endobj zcam_overrot_min

.obj zcam_overrot_mid, global
	.4byte 0x3FC90FDB
.endobj zcam_overrot_mid

.obj zcam_overrot_max, global
	.4byte 0x403DE44E
.endobj zcam_overrot_max

.obj zcam_overrot_rate, global
	.4byte 0x3DCCCCCD
.endobj zcam_overrot_rate

.obj zcam_overrot_tstart, global
	.4byte 0x3FC00000
.endobj zcam_overrot_tstart

.obj zcam_overrot_tend, global
	.4byte 0x40200000
.endobj zcam_overrot_tend

.obj zcam_overrot_velmin, global
	.4byte 0x40400000
.endobj zcam_overrot_velmin

.obj zcam_overrot_velmax, global
	.4byte 0x40A00000
.endobj zcam_overrot_velmax

.obj zcam_overrot_tmanual, global
	.4byte 0x3FC00000
.endobj zcam_overrot_tmanual

.obj zcam_mintgtheight, global
	.4byte 0xFE967699
.endobj zcam_mintgtheight

# @unnamed@zCamera_cpp@::input_enabled
.obj "input_enabled__21@unnamed@zCamera_cpp@", local
	.byte 0x01
.endobj "input_enabled__21@unnamed@zCamera_cpp@"
	.byte 0x00, 0x00, 0x00

.obj rewardMove, local
	.4byte 0x3F800000
.endobj rewardMove

.obj rewardMoveSpeed, local
	.4byte 0x3F8CCCCD
.endobj rewardMoveSpeed

.obj rewardZoomSpeed, local
	.4byte 0x40C00000
.endobj rewardZoomSpeed

.obj rewardZoomAmount, local
	.4byte 0x42C80000
.endobj rewardZoomAmount

.obj rewardTiltTime, local
	.4byte 0x3FC00000
.endobj rewardTiltTime

.obj rewardTiltAmount, local
	.4byte 0xBE6147AE
.endobj rewardTiltAmount
	.4byte 0x00000000

# 0x803CB478 - 0x803CB510
.section .sbss, "wa", @nobits
.balign 8

.obj zcam_overrot_tmr, global
	.skip 0x4
.endobj zcam_overrot_tmr

.obj zcam_near, global
	.skip 0x4
.endobj zcam_near

.obj zcam_mode, global
	.skip 0x4
.endobj zcam_mode

.obj zcam_bbounce, global
	.skip 0x4
.endobj zcam_bbounce

.obj zcam_lbbounce, global
	.skip 0x4
.endobj zcam_lbbounce

.obj zcam_convers, global
	.skip 0x4
.endobj zcam_convers

.obj zcam_lconvers, global
	.skip 0x4
.endobj zcam_lconvers

.obj zcam_longbounce, global
	.skip 0x4
.endobj zcam_longbounce

.obj zcam_highbounce, global
	.skip 0x4
.endobj zcam_highbounce

.obj zcam_cutscene, global
	.skip 0x4
.endobj zcam_cutscene

.obj zcam_reward, global
	.skip 0x4
.endobj zcam_reward

.obj zcam_playervel, global
	.skip 0x4
.endobj zcam_playervel

.obj zcam_fly, global
	.skip 0x4
.endobj zcam_fly

.obj zcam_flypaused, global
	.skip 0x4
.endobj zcam_flypaused

.obj zcam_flydata, global
	.skip 0x4
.endobj zcam_flydata

.obj zcam_flysize, global
	.skip 0x4
.endobj zcam_flysize

.obj zcam_flytime, global
	.skip 0x4
.endobj zcam_flytime

.obj zcam_flyasset_current, global
	.skip 0x4
.endobj zcam_flyasset_current

.obj zcam_dest, global
	.skip 0x4
.endobj zcam_dest

.obj zcam_tmr, global
	.skip 0x4
.endobj zcam_tmr

.obj zcam_ttm, global
	.skip 0x4
.endobj zcam_ttm

.obj zcam_fovcurr, global
	.skip 0x4
.endobj zcam_fovcurr

.obj zcam_fovdest, global
	.skip 0x4
.endobj zcam_fovdest

# @unnamed@zCamera_cpp@::stop_track
.obj "stop_track__21@unnamed@zCamera_cpp@", local
	.skip 0x4
.endobj "stop_track__21@unnamed@zCamera_cpp@"

# @unnamed@zCamera_cpp@::lassocam_enabled
.obj "lassocam_enabled__21@unnamed@zCamera_cpp@", local
	.skip 0x1
.endobj "lassocam_enabled__21@unnamed@zCamera_cpp@"
	.skip 0x3

# @unnamed@zCamera_cpp@::lassocam_factor
.obj "lassocam_factor__21@unnamed@zCamera_cpp@", local
	.skip 0x4
.endobj "lassocam_factor__21@unnamed@zCamera_cpp@"

# @unnamed@zCamera_cpp@::wall_jump_enabled
.obj "wall_jump_enabled__21@unnamed@zCamera_cpp@", local
	.skip 0x4
.endobj "wall_jump_enabled__21@unnamed@zCamera_cpp@"

# @unnamed@zCamera_cpp@::dMultiplier
.obj "dMultiplier__21@unnamed@zCamera_cpp@", local
	.skip 0x4
.endobj "dMultiplier__21@unnamed@zCamera_cpp@"

# @unnamed@zCamera_cpp@::dOffset
.obj "dOffset__21@unnamed@zCamera_cpp@", local
	.skip 0x4
.endobj "dOffset__21@unnamed@zCamera_cpp@"

# @unnamed@zCamera_cpp@::hMultiplier
.obj "hMultiplier__21@unnamed@zCamera_cpp@", local
	.skip 0x4
.endobj "hMultiplier__21@unnamed@zCamera_cpp@"

# @unnamed@zCamera_cpp@::hOffset
.obj "hOffset__21@unnamed@zCamera_cpp@", local
	.skip 0x4
.endobj "hOffset__21@unnamed@zCamera_cpp@"

.obj mvtm$1175, local
	.skip 0x4
.endobj mvtm$1175

.obj init$1176, local
	.skip 0x1
.endobj init$1176
	.skip 0x3

.obj lktm$1178, local
	.skip 0x4
.endobj lktm$1178

.obj init$1179, local
	.skip 0x1
.endobj init$1179
	.skip 0x3

.obj pitch_s$1181, local
	.skip 0x4
.endobj pitch_s$1181

.obj init$1182, local
	.skip 0x1
.endobj init$1182

.obj saved$1515, local
	.skip 0x1
.endobj saved$1515

.obj init$1516, local
	.skip 0x1
.endobj init$1516
	.skip 0x5

# 0x803CD198 - 0x803CD268
.section .sdata2, "a"
.balign 8

.obj "@819", local
	.4byte 0x42960000
.endobj "@819"

.obj "@820", local
	.4byte 0x00000000
.endobj "@820"

.obj "@821", local
	.4byte 0xFE967699
.endobj "@821"

.obj "@822", local
	.4byte 0x3F800000
.endobj "@822"

.obj "@838", local
	.4byte 0x3F000000
.endobj "@838"

.obj "@839", local
	.4byte 0x40000000
.endobj "@839"

.obj "@840", local
	.4byte 0x3FC00000
.endobj "@840"

.obj "@867", local
	.4byte 0x41F00000
.endobj "@867"

.obj "@877", local
	.4byte 0x3727C5AC
.endobj "@877"

.obj "@891", local
	.4byte 0x42E52EE0
.endobj "@891"

.obj "@970", local
	.4byte 0x3D088889
.endobj "@970"

.obj "@971", local
	.4byte 0x41200000
.endobj "@971"

.obj "@972", local
	.4byte 0x40A00000
.endobj "@972"

.obj "@973", local
	.4byte 0x42340000
.endobj "@973"

.obj "@975", local
	.4byte 0x43300000
	.4byte 0x00000000
.endobj "@975"

.obj "@991", local
	.4byte 0x3DCCCCCD
.endobj "@991"

.obj "@1048", local
	.4byte 0x3F333333
.endobj "@1048"

.obj "@1049", local
	.4byte 0x3FA66666
.endobj "@1049"

.obj "@1050", local
	.4byte 0x3F2E147B
.endobj "@1050"

.obj "@1051", local
	.4byte 0x40E33333
.endobj "@1051"

.obj "@1052", local
	.4byte 0x42D80000
.endobj "@1052"

.obj "@1053", local
	.4byte 0xBE6147AE
.endobj "@1053"

.obj "@1054", local
	.4byte 0x3FCCCCCD
.endobj "@1054"

.obj "@1055", local
	.4byte 0xBE800000
.endobj "@1055"

.obj "@1056", local
	.4byte 0x3F8CCCCD
.endobj "@1056"

.obj "@1057", local
	.4byte 0x40BCCCCD
.endobj "@1057"

.obj "@1058", local
	.4byte 0x42C80000
.endobj "@1058"

.obj "@1059", local
	.4byte 0xBE4CCCCD
.endobj "@1059"

.obj "@1114", local
	.4byte 0x40600000
.endobj "@1114"

.obj "@1115", local
	.4byte 0x4019999A
.endobj "@1115"

.obj "@1116", local
	.4byte 0x40490FDB
.endobj "@1116"

.obj "@1117", local
	.4byte 0x41A00000
.endobj "@1117"

.obj "@1118", local
	.4byte 0x43340000
.endobj "@1118"

.obj "@1119", local
	.4byte 0x3F060A92
.endobj "@1119"

.obj "@1120", local
	.4byte 0x3F32B8C3
.endobj "@1120"

.obj "@1418", local
	.4byte 0x41423D70
.endobj "@1418"

.obj "@1419", local
	.4byte 0x4207999A
.endobj "@1419"

.obj "@1420", local
	.4byte 0x40B758B6
.endobj "@1420"

.obj "@1421", local
	.4byte 0x3F9C61AB
.endobj "@1421"

.obj "@1422", local
	.4byte 0x3FD55555
.endobj "@1422"

.obj "@1423", local
	.4byte 0x3F99999A
.endobj "@1423"

.obj "@1424", local
	.4byte 0x3E99999A
.endobj "@1424"

.obj "@1425", local
	.4byte 0x3C888889
.endobj "@1425"

.obj "@1426", local
	.4byte 0x3E4CCCCD
.endobj "@1426"

.obj "@1427", local
	.4byte 0x3CCCCCCD
.endobj "@1427"

.obj "@1428", local
	.4byte 0xBF800000
.endobj "@1428"

.obj "@1429", local
	.4byte 0x3F7FF972
.endobj "@1429"

.obj "@1430", local
	.4byte 0x41C80000
.endobj "@1430"
	.4byte 0x00000000

.obj "@1432", local
	.4byte 0x43300000
	.4byte 0x80000000
.endobj "@1432"
