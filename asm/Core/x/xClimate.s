.include "macros.inc"
.file "xClimate.cpp"

# 0x8000E96C - 0x8000EFFC
.text
.balign 4

# xClimateVecFromAngle(float, xVec3*)
.fn xClimateVecFromAngle__FfP5xVec3, local
/* 8000E96C 0000BA4C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8000E970 0000BA50  7C 08 02 A6 */	mflr r0
/* 8000E974 0000BA54  90 01 00 54 */	stw r0, 0x54(r1)
/* 8000E978 0000BA58  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8000E97C 0000BA5C  F3 E1 00 48 */	psq_st f31, 0x48(r1), 0, qr0
/* 8000E980 0000BA60  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8000E984 0000BA64  FF E0 08 90 */	fmr f31, f1
/* 8000E988 0000BA68  7C 7F 1B 78 */	mr r31, r3
/* 8000E98C 0000BA6C  38 61 00 08 */	addi r3, r1, 0x8
/* 8000E990 0000BA70  48 00 06 7D */	bl xMat3x3Identity__FP7xMat3x3
/* 8000E994 0000BA74  C0 02 80 E8 */	lfs f0, "@642"@sda21(r2)
/* 8000E998 0000BA78  38 61 00 08 */	addi r3, r1, 0x8
/* 8000E99C 0000BA7C  C0 42 80 F0 */	lfs f2, "@644"@sda21(r2)
/* 8000E9A0 0000BA80  EC 20 07 F2 */	fmuls f1, f0, f31
/* 8000E9A4 0000BA84  C0 02 80 EC */	lfs f0, "@643"@sda21(r2)
/* 8000E9A8 0000BA88  FC 60 10 90 */	fmr f3, f2
/* 8000E9AC 0000BA8C  EC 21 00 24 */	fdivs f1, f1, f0
/* 8000E9B0 0000BA90  48 02 38 21 */	bl xMat3x3Euler__FP7xMat3x3fff
/* 8000E9B4 0000BA94  C0 22 80 F0 */	lfs f1, "@644"@sda21(r2)
/* 8000E9B8 0000BA98  7F E3 FB 78 */	mr r3, r31
/* 8000E9BC 0000BA9C  C0 62 80 F4 */	lfs f3, "@645"@sda21(r2)
/* 8000E9C0 0000BAA0  FC 40 08 90 */	fmr f2, f1
/* 8000E9C4 0000BAA4  48 00 06 39 */	bl xVec3Init__FP5xVec3fff
/* 8000E9C8 0000BAA8  7F E3 FB 78 */	mr r3, r31
/* 8000E9CC 0000BAAC  7F E5 FB 78 */	mr r5, r31
/* 8000E9D0 0000BAB0  38 81 00 08 */	addi r4, r1, 0x8
/* 8000E9D4 0000BAB4  48 02 40 89 */	bl xMat3x3LMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 8000E9D8 0000BAB8  E3 E1 00 48 */	psq_l f31, 0x48(r1), 0, qr0
/* 8000E9DC 0000BABC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8000E9E0 0000BAC0  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8000E9E4 0000BAC4  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8000E9E8 0000BAC8  7C 08 03 A6 */	mtlr r0
/* 8000E9EC 0000BACC  38 21 00 50 */	addi r1, r1, 0x50
/* 8000E9F0 0000BAD0  4E 80 00 20 */	blr
.endfn xClimateVecFromAngle__FfP5xVec3

# xClimateInit(_tagClimate*)
.fn xClimateInit__FP11_tagClimate, global
/* 8000E9F4 0000BAD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8000E9F8 0000BAD8  7C 08 02 A6 */	mflr r0
/* 8000E9FC 0000BADC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8000EA00 0000BAE0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8000EA04 0000BAE4  7C 7F 1B 78 */	mr r31, r3
/* 8000EA08 0000BAE8  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8000EA0C 0000BAEC  C0 02 80 F0 */	lfs f0, "@644"@sda21(r2)
/* 8000EA10 0000BAF0  38 63 21 08 */	addi r3, r3, "@stringBase0"@l
/* 8000EA14 0000BAF4  D0 1F 00 04 */	stfs f0, 0x4(r31)
/* 8000EA18 0000BAF8  48 03 D7 FD */	bl xStrHash__FPCc
/* 8000EA1C 0000BAFC  48 09 9D D1 */	bl zParEmitterFind__FUi
/* 8000EA20 0000BB00  90 7F 00 08 */	stw r3, 0x8(r31)
/* 8000EA24 0000BB04  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8000EA28 0000BB08  38 63 21 08 */	addi r3, r3, "@stringBase0"@l
/* 8000EA2C 0000BB0C  80 9F 00 08 */	lwz r4, 0x8(r31)
/* 8000EA30 0000BB10  38 63 00 0D */	addi r3, r3, 0xd
/* 8000EA34 0000BB14  88 04 00 30 */	lbz r0, 0x30(r4)
/* 8000EA38 0000BB18  54 00 06 3C */	rlwinm r0, r0, 0, 24, 30
/* 8000EA3C 0000BB1C  98 04 00 30 */	stb r0, 0x30(r4)
/* 8000EA40 0000BB20  48 03 D7 D5 */	bl xStrHash__FPCc
/* 8000EA44 0000BB24  48 09 9D A9 */	bl zParEmitterFind__FUi
/* 8000EA48 0000BB28  90 7F 00 0C */	stw r3, 0xc(r31)
/* 8000EA4C 0000BB2C  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8000EA50 0000BB30  88 03 00 30 */	lbz r0, 0x30(r3)
/* 8000EA54 0000BB34  54 00 06 3C */	rlwinm r0, r0, 0, 24, 30
/* 8000EA58 0000BB38  98 03 00 30 */	stb r0, 0x30(r3)
/* 8000EA5C 0000BB3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8000EA60 0000BB40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8000EA64 0000BB44  7C 08 03 A6 */	mtlr r0
/* 8000EA68 0000BB48  38 21 00 10 */	addi r1, r1, 0x10
/* 8000EA6C 0000BB4C  4E 80 00 20 */	blr
.endfn xClimateInit__FP11_tagClimate

# xClimateInitAsset(_tagClimate*, xEnvAsset*)
.fn xClimateInitAsset__FP11_tagClimateP9xEnvAsset, global
/* 8000EA70 0000BB50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8000EA74 0000BB54  7C 08 02 A6 */	mflr r0
/* 8000EA78 0000BB58  90 01 00 14 */	stw r0, 0x14(r1)
/* 8000EA7C 0000BB5C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8000EA80 0000BB60  7C 9F 23 78 */	mr r31, r4
/* 8000EA84 0000BB64  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8000EA88 0000BB68  7C 7E 1B 78 */	mr r30, r3
/* 8000EA8C 0000BB6C  38 7E 00 18 */	addi r3, r30, 0x18
/* 8000EA90 0000BB70  93 CD 88 88 */	stw r30, sClimate@sda21(r13)
/* 8000EA94 0000BB74  C0 02 80 F0 */	lfs f0, "@644"@sda21(r2)
/* 8000EA98 0000BB78  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 8000EA9C 0000BB7C  C0 3E 00 14 */	lfs f1, 0x14(r30)
/* 8000EAA0 0000BB80  4B FF FE CD */	bl xClimateVecFromAngle__FfP5xVec3
/* 8000EAA4 0000BB84  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 8000EAA8 0000BB88  28 03 00 00 */	cmplwi r3, 0x0
/* 8000EAAC 0000BB8C  40 82 00 18 */	bne .L_8000EAC4
/* 8000EAB0 0000BB90  C0 02 80 F0 */	lfs f0, "@644"@sda21(r2)
/* 8000EAB4 0000BB94  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 8000EAB8 0000BB98  C0 02 80 F0 */	lfs f0, "@644"@sda21(r2)
/* 8000EABC 0000BB9C  D0 1E 00 04 */	stfs f0, 0x4(r30)
/* 8000EAC0 0000BBA0  48 00 00 78 */	b .L_8000EB38
.L_8000EAC4:
/* 8000EAC4 0000BBA4  54 60 07 FF */	clrlwi. r0, r3, 31
/* 8000EAC8 0000BBA8  41 82 00 38 */	beq .L_8000EB00
/* 8000EACC 0000BBAC  38 00 00 01 */	li r0, 0x1
/* 8000EAD0 0000BBB0  90 1E 00 00 */	stw r0, 0x0(r30)
/* 8000EAD4 0000BBB4  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 8000EAD8 0000BBB8  C0 1F 00 14 */	lfs f0, 0x14(r31)
/* 8000EADC 0000BBBC  C0 42 80 F8 */	lfs f2, "@668"@sda21(r2)
/* 8000EAE0 0000BBC0  EC 01 00 28 */	fsubs f0, f1, f0
/* 8000EAE4 0000BBC4  EC 02 00 32 */	fmuls f0, f2, f0
/* 8000EAE8 0000BBC8  D0 1E 00 04 */	stfs f0, 0x4(r30)
/* 8000EAEC 0000BBCC  C0 3E 00 04 */	lfs f1, 0x4(r30)
/* 8000EAF0 0000BBD0  C0 1F 00 14 */	lfs f0, 0x14(r31)
/* 8000EAF4 0000BBD4  EC 01 00 2A */	fadds f0, f1, f0
/* 8000EAF8 0000BBD8  D0 1E 00 04 */	stfs f0, 0x4(r30)
/* 8000EAFC 0000BBDC  48 00 00 3C */	b .L_8000EB38
.L_8000EB00:
/* 8000EB00 0000BBE0  54 60 07 BD */	rlwinm. r0, r3, 0, 30, 30
/* 8000EB04 0000BBE4  41 82 00 34 */	beq .L_8000EB38
/* 8000EB08 0000BBE8  38 00 00 00 */	li r0, 0x0
/* 8000EB0C 0000BBEC  90 1E 00 00 */	stw r0, 0x0(r30)
/* 8000EB10 0000BBF0  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 8000EB14 0000BBF4  C0 1F 00 14 */	lfs f0, 0x14(r31)
/* 8000EB18 0000BBF8  C0 42 80 F8 */	lfs f2, "@668"@sda21(r2)
/* 8000EB1C 0000BBFC  EC 01 00 28 */	fsubs f0, f1, f0
/* 8000EB20 0000BC00  EC 02 00 32 */	fmuls f0, f2, f0
/* 8000EB24 0000BC04  D0 1E 00 04 */	stfs f0, 0x4(r30)
/* 8000EB28 0000BC08  C0 3E 00 04 */	lfs f1, 0x4(r30)
/* 8000EB2C 0000BC0C  C0 1F 00 14 */	lfs f0, 0x14(r31)
/* 8000EB30 0000BC10  EC 01 00 2A */	fadds f0, f1, f0
/* 8000EB34 0000BC14  D0 1E 00 04 */	stfs f0, 0x4(r30)
.L_8000EB38:
/* 8000EB38 0000BC18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8000EB3C 0000BC1C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8000EB40 0000BC20  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8000EB44 0000BC24  7C 08 03 A6 */	mtlr r0
/* 8000EB48 0000BC28  38 21 00 10 */	addi r1, r1, 0x10
/* 8000EB4C 0000BC2C  4E 80 00 20 */	blr
.endfn xClimateInitAsset__FP11_tagClimateP9xEnvAsset

# xClimateSetSnow(float)
.fn xClimateSetSnow__Ff, global
/* 8000EB50 0000BC30  80 6D 88 88 */	lwz r3, sClimate@sda21(r13)
/* 8000EB54 0000BC34  38 00 00 00 */	li r0, 0x0
/* 8000EB58 0000BC38  90 03 00 00 */	stw r0, 0x0(r3)
/* 8000EB5C 0000BC3C  80 6D 88 88 */	lwz r3, sClimate@sda21(r13)
/* 8000EB60 0000BC40  D0 23 00 04 */	stfs f1, 0x4(r3)
/* 8000EB64 0000BC44  4E 80 00 20 */	blr
.endfn xClimateSetSnow__Ff

# xClimateSetRain(float)
.fn xClimateSetRain__Ff, global
/* 8000EB68 0000BC48  80 6D 88 88 */	lwz r3, sClimate@sda21(r13)
/* 8000EB6C 0000BC4C  38 00 00 01 */	li r0, 0x1
/* 8000EB70 0000BC50  90 03 00 00 */	stw r0, 0x0(r3)
/* 8000EB74 0000BC54  80 6D 88 88 */	lwz r3, sClimate@sda21(r13)
/* 8000EB78 0000BC58  D0 23 00 04 */	stfs f1, 0x4(r3)
/* 8000EB7C 0000BC5C  4E 80 00 20 */	blr
.endfn xClimateSetRain__Ff

# GetPosBigDogWhattupFool(xVec3*)
.fn GetPosBigDogWhattupFool__FP5xVec3, local
/* 8000EB80 0000BC60  80 8D 82 B0 */	lwz r4, xglobals@sda21(r13)
/* 8000EB84 0000BC64  C0 42 80 FC */	lfs f2, "@685"@sda21(r2)
/* 8000EB88 0000BC68  C0 24 00 34 */	lfs f1, 0x34(r4)
/* 8000EB8C 0000BC6C  C0 04 00 44 */	lfs f0, 0x44(r4)
/* 8000EB90 0000BC70  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8000EB94 0000BC74  D0 03 00 00 */	stfs f0, 0x0(r3)
/* 8000EB98 0000BC78  C0 42 80 FC */	lfs f2, "@685"@sda21(r2)
/* 8000EB9C 0000BC7C  C0 24 00 38 */	lfs f1, 0x38(r4)
/* 8000EBA0 0000BC80  C0 04 00 48 */	lfs f0, 0x48(r4)
/* 8000EBA4 0000BC84  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8000EBA8 0000BC88  D0 03 00 04 */	stfs f0, 0x4(r3)
/* 8000EBAC 0000BC8C  C0 42 80 FC */	lfs f2, "@685"@sda21(r2)
/* 8000EBB0 0000BC90  C0 24 00 3C */	lfs f1, 0x3c(r4)
/* 8000EBB4 0000BC94  C0 04 00 4C */	lfs f0, 0x4c(r4)
/* 8000EBB8 0000BC98  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8000EBBC 0000BC9C  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 8000EBC0 0000BCA0  4E 80 00 20 */	blr
.endfn GetPosBigDogWhattupFool__FP5xVec3

# UpdateRain(_tagClimate*, float)
.fn UpdateRain__FP11_tagClimatef, local
/* 8000EBC4 0000BCA4  94 21 FD D0 */	stwu r1, -0x230(r1)
/* 8000EBC8 0000BCA8  7C 08 02 A6 */	mflr r0
/* 8000EBCC 0000BCAC  90 01 02 34 */	stw r0, 0x234(r1)
/* 8000EBD0 0000BCB0  DB E1 02 20 */	stfd f31, 0x220(r1)
/* 8000EBD4 0000BCB4  F3 E1 02 28 */	psq_st f31, 0x228(r1), 0, qr0
/* 8000EBD8 0000BCB8  DB C1 02 10 */	stfd f30, 0x210(r1)
/* 8000EBDC 0000BCBC  F3 C1 02 18 */	psq_st f30, 0x218(r1), 0, qr0
/* 8000EBE0 0000BCC0  DB A1 02 00 */	stfd f29, 0x200(r1)
/* 8000EBE4 0000BCC4  F3 A1 02 08 */	psq_st f29, 0x208(r1), 0, qr0
/* 8000EBE8 0000BCC8  DB 81 01 F0 */	stfd f28, 0x1f0(r1)
/* 8000EBEC 0000BCCC  F3 81 01 F8 */	psq_st f28, 0x1f8(r1), 0, qr0
/* 8000EBF0 0000BCD0  DB 61 01 E0 */	stfd f27, 0x1e0(r1)
/* 8000EBF4 0000BCD4  F3 61 01 E8 */	psq_st f27, 0x1e8(r1), 0, qr0
/* 8000EBF8 0000BCD8  DB 41 01 D0 */	stfd f26, 0x1d0(r1)
/* 8000EBFC 0000BCDC  F3 41 01 D8 */	psq_st f26, 0x1d8(r1), 0, qr0
/* 8000EC00 0000BCE0  DB 21 01 C0 */	stfd f25, 0x1c0(r1)
/* 8000EC04 0000BCE4  F3 21 01 C8 */	psq_st f25, 0x1c8(r1), 0, qr0
/* 8000EC08 0000BCE8  DB 01 01 B0 */	stfd f24, 0x1b0(r1)
/* 8000EC0C 0000BCEC  F3 01 01 B8 */	psq_st f24, 0x1b8(r1), 0, qr0
/* 8000EC10 0000BCF0  BF 41 01 98 */	stmw r26, 0x198(r1)
/* 8000EC14 0000BCF4  FF E0 08 90 */	fmr f31, f1
/* 8000EC18 0000BCF8  7C 7A 1B 78 */	mr r26, r3
/* 8000EC1C 0000BCFC  38 61 00 14 */	addi r3, r1, 0x14
/* 8000EC20 0000BD00  38 80 00 00 */	li r4, 0x0
/* 8000EC24 0000BD04  38 A0 01 6C */	li r5, 0x16c
/* 8000EC28 0000BD08  4B FF 48 31 */	bl memset
/* 8000EC2C 0000BD0C  38 60 01 00 */	li r3, 0x100
/* 8000EC30 0000BD10  90 61 01 4C */	stw r3, 0x14c(r1)
/* 8000EC34 0000BD14  80 1A 00 00 */	lwz r0, 0x0(r26)
/* 8000EC38 0000BD18  2C 00 00 00 */	cmpwi r0, 0x0
/* 8000EC3C 0000BD1C  41 82 00 98 */	beq .L_8000ECD4
/* 8000EC40 0000BD20  C0 22 81 00 */	lfs f1, "@740"@sda21(r2)
/* 8000EC44 0000BD24  3B E1 01 54 */	addi r31, r1, 0x154
/* 8000EC48 0000BD28  C0 1A 00 04 */	lfs f0, 0x4(r26)
/* 8000EC4C 0000BD2C  3B A0 00 00 */	li r29, 0x0
/* 8000EC50 0000BD30  EC 01 00 32 */	fmuls f0, f1, f0
/* 8000EC54 0000BD34  FC 00 00 1E */	fctiwz f0, f0
/* 8000EC58 0000BD38  D8 01 01 80 */	stfd f0, 0x180(r1)
/* 8000EC5C 0000BD3C  83 C1 01 84 */	lwz r30, 0x184(r1)
/* 8000EC60 0000BD40  48 00 00 68 */	b .L_8000ECC8
.L_8000EC64:
/* 8000EC64 0000BD44  7F E3 FB 78 */	mr r3, r31
/* 8000EC68 0000BD48  4B FF FF 19 */	bl GetPosBigDogWhattupFool__FP5xVec3
/* 8000EC6C 0000BD4C  48 02 20 1D */	bl xurand__Fv
/* 8000EC70 0000BD50  C0 62 81 00 */	lfs f3, "@740"@sda21(r2)
/* 8000EC74 0000BD54  C0 42 81 04 */	lfs f2, "@741"@sda21(r2)
/* 8000EC78 0000BD58  C0 01 01 54 */	lfs f0, 0x154(r1)
/* 8000EC7C 0000BD5C  EC 43 10 78 */	fmsubs f2, f3, f1, f2
/* 8000EC80 0000BD60  C0 21 01 58 */	lfs f1, 0x158(r1)
/* 8000EC84 0000BD64  EC 00 10 2A */	fadds f0, f0, f2
/* 8000EC88 0000BD68  D0 01 01 54 */	stfs f0, 0x154(r1)
/* 8000EC8C 0000BD6C  C0 02 81 08 */	lfs f0, "@742"@sda21(r2)
/* 8000EC90 0000BD70  EC 01 00 2A */	fadds f0, f1, f0
/* 8000EC94 0000BD74  D0 01 01 58 */	stfs f0, 0x158(r1)
/* 8000EC98 0000BD78  48 02 1F F1 */	bl xurand__Fv
/* 8000EC9C 0000BD7C  C0 62 81 00 */	lfs f3, "@740"@sda21(r2)
/* 8000ECA0 0000BD80  38 81 00 14 */	addi r4, r1, 0x14
/* 8000ECA4 0000BD84  C0 42 81 04 */	lfs f2, "@741"@sda21(r2)
/* 8000ECA8 0000BD88  C0 01 01 5C */	lfs f0, 0x15c(r1)
/* 8000ECAC 0000BD8C  EC 43 10 78 */	fmsubs f2, f3, f1, f2
/* 8000ECB0 0000BD90  FC 20 F8 90 */	fmr f1, f31
/* 8000ECB4 0000BD94  EC 00 10 2A */	fadds f0, f0, f2
/* 8000ECB8 0000BD98  D0 01 01 5C */	stfs f0, 0x15c(r1)
/* 8000ECBC 0000BD9C  80 7A 00 08 */	lwz r3, 0x8(r26)
/* 8000ECC0 0000BDA0  48 10 8F 09 */	bl xParEmitterEmitCustom__FP11xParEmitterfP25xParEmitterCustomSettings
/* 8000ECC4 0000BDA4  3B BD 00 01 */	addi r29, r29, 0x1
.L_8000ECC8:
/* 8000ECC8 0000BDA8  7C 1D F0 00 */	cmpw r29, r30
/* 8000ECCC 0000BDAC  41 80 FF 98 */	blt .L_8000EC64
/* 8000ECD0 0000BDB0  48 00 02 90 */	b .L_8000EF60
.L_8000ECD4:
/* 8000ECD4 0000BDB4  C0 22 81 00 */	lfs f1, "@740"@sda21(r2)
/* 8000ECD8 0000BDB8  60 60 02 02 */	ori r0, r3, 0x202
/* 8000ECDC 0000BDBC  C0 1A 00 04 */	lfs f0, 0x4(r26)
/* 8000ECE0 0000BDC0  38 61 00 08 */	addi r3, r1, 0x8
/* 8000ECE4 0000BDC4  EC 01 00 32 */	fmuls f0, f1, f0
/* 8000ECE8 0000BDC8  90 01 01 4C */	stw r0, 0x14c(r1)
/* 8000ECEC 0000BDCC  FC 00 00 1E */	fctiwz f0, f0
/* 8000ECF0 0000BDD0  D8 01 01 80 */	stfd f0, 0x180(r1)
/* 8000ECF4 0000BDD4  83 A1 01 84 */	lwz r29, 0x184(r1)
/* 8000ECF8 0000BDD8  4B FF FE 89 */	bl GetPosBigDogWhattupFool__FP5xVec3
/* 8000ECFC 0000BDDC  80 02 AB E8 */	lwz r0, gPTankDisable@sda21(r2)
/* 8000ED00 0000BDE0  28 00 00 00 */	cmplwi r0, 0x0
/* 8000ED04 0000BDE4  41 82 01 00 */	beq .L_8000EE04
/* 8000ED08 0000BDE8  3C 80 80 25 */	lis r4, snow_dvel@ha
/* 8000ED0C 0000BDEC  C7 24 20 FC */	lfsu f25, snow_dvel@l(r4)
/* 8000ED10 0000BDF0  3C 60 80 25 */	lis r3, snow_vel@ha
/* 8000ED14 0000BDF4  C7 C3 20 F0 */	lfsu f30, snow_vel@l(r3)
/* 8000ED18 0000BDF8  C3 A4 00 04 */	lfs f29, 0x4(r4)
/* 8000ED1C 0000BDFC  3B E1 01 54 */	addi r31, r1, 0x154
/* 8000ED20 0000BE00  C3 83 00 04 */	lfs f28, 0x4(r3)
/* 8000ED24 0000BE04  3B C0 00 00 */	li r30, 0x0
/* 8000ED28 0000BE08  C3 64 00 08 */	lfs f27, 0x8(r4)
/* 8000ED2C 0000BE0C  C3 43 00 08 */	lfs f26, 0x8(r3)
/* 8000ED30 0000BE10  48 00 00 C8 */	b .L_8000EDF8
.L_8000ED34:
/* 8000ED34 0000BE14  7F E3 FB 78 */	mr r3, r31
/* 8000ED38 0000BE18  38 81 00 08 */	addi r4, r1, 0x8
/* 8000ED3C 0000BE1C  4B FF C5 29 */	bl __as__5xVec3FRC5xVec3
/* 8000ED40 0000BE20  48 02 1F 49 */	bl xurand__Fv
/* 8000ED44 0000BE24  C0 62 81 0C */	lfs f3, "@743"@sda21(r2)
/* 8000ED48 0000BE28  C0 42 81 10 */	lfs f2, "@744"@sda21(r2)
/* 8000ED4C 0000BE2C  C0 01 01 54 */	lfs f0, 0x154(r1)
/* 8000ED50 0000BE30  EC 23 10 78 */	fmsubs f1, f3, f1, f2
/* 8000ED54 0000BE34  EC 00 08 2A */	fadds f0, f0, f1
/* 8000ED58 0000BE38  D0 01 01 54 */	stfs f0, 0x154(r1)
/* 8000ED5C 0000BE3C  48 02 1F 2D */	bl xurand__Fv
/* 8000ED60 0000BE40  C0 42 81 0C */	lfs f2, "@743"@sda21(r2)
/* 8000ED64 0000BE44  C0 02 81 10 */	lfs f0, "@744"@sda21(r2)
/* 8000ED68 0000BE48  C0 61 01 5C */	lfs f3, 0x15c(r1)
/* 8000ED6C 0000BE4C  EC 82 00 78 */	fmsubs f4, f2, f1, f0
/* 8000ED70 0000BE50  C0 41 01 54 */	lfs f2, 0x154(r1)
/* 8000ED74 0000BE54  C0 21 00 08 */	lfs f1, 0x8(r1)
/* 8000ED78 0000BE58  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8000ED7C 0000BE5C  EC 63 20 2A */	fadds f3, f3, f4
/* 8000ED80 0000BE60  EC 42 08 28 */	fsubs f2, f2, f1
/* 8000ED84 0000BE64  EC 03 00 28 */	fsubs f0, f3, f0
/* 8000ED88 0000BE68  D0 61 01 5C */	stfs f3, 0x15c(r1)
/* 8000ED8C 0000BE6C  C0 22 81 14 */	lfs f1, "@745"@sda21(r2)
/* 8000ED90 0000BE70  EC 42 00 32 */	fmuls f2, f2, f0
/* 8000ED94 0000BE74  C0 02 80 F4 */	lfs f0, "@645"@sda21(r2)
/* 8000ED98 0000BE78  EC 22 08 24 */	fdivs f1, f2, f1
/* 8000ED9C 0000BE7C  EF 00 08 28 */	fsubs f24, f0, f1
/* 8000EDA0 0000BE80  48 02 1E E9 */	bl xurand__Fv
/* 8000EDA4 0000BE84  EC 19 F0 7A */	fmadds f0, f25, f1, f30
/* 8000EDA8 0000BE88  D0 01 01 60 */	stfs f0, 0x160(r1)
/* 8000EDAC 0000BE8C  48 02 1E DD */	bl xurand__Fv
/* 8000EDB0 0000BE90  EC 1D E0 7A */	fmadds f0, f29, f1, f28
/* 8000EDB4 0000BE94  D0 01 01 64 */	stfs f0, 0x164(r1)
/* 8000EDB8 0000BE98  48 02 1E D1 */	bl xurand__Fv
/* 8000EDBC 0000BE9C  EC 1B D0 7A */	fmadds f0, f27, f1, f26
/* 8000EDC0 0000BEA0  C0 41 01 58 */	lfs f2, 0x158(r1)
/* 8000EDC4 0000BEA4  FC 20 F8 90 */	fmr f1, f31
/* 8000EDC8 0000BEA8  38 81 00 14 */	addi r4, r1, 0x14
/* 8000EDCC 0000BEAC  D0 01 01 68 */	stfs f0, 0x168(r1)
/* 8000EDD0 0000BEB0  C0 02 81 18 */	lfs f0, "@746"@sda21(r2)
/* 8000EDD4 0000BEB4  EC 00 06 3A */	fmadds f0, f0, f24, f0
/* 8000EDD8 0000BEB8  EC 02 00 2A */	fadds f0, f2, f0
/* 8000EDDC 0000BEBC  D0 01 01 58 */	stfs f0, 0x158(r1)
/* 8000EDE0 0000BEC0  C0 0D 80 18 */	lfs f0, snow_life@sda21(r13)
/* 8000EDE4 0000BEC4  EC 00 06 3A */	fmadds f0, f0, f24, f0
/* 8000EDE8 0000BEC8  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8000EDEC 0000BECC  80 7A 00 0C */	lwz r3, 0xc(r26)
/* 8000EDF0 0000BED0  48 10 8D D9 */	bl xParEmitterEmitCustom__FP11xParEmitterfP25xParEmitterCustomSettings
/* 8000EDF4 0000BED4  3B DE 00 01 */	addi r30, r30, 0x1
.L_8000EDF8:
/* 8000EDF8 0000BED8  7C 1E E8 00 */	cmpw r30, r29
/* 8000EDFC 0000BEDC  41 80 FF 38 */	blt .L_8000ED34
/* 8000EE00 0000BEE0  48 00 01 60 */	b .L_8000EF60
.L_8000EE04:
/* 8000EE04 0000BEE4  6F A3 80 00 */	xoris r3, r29, 0x8000
/* 8000EE08 0000BEE8  3C 00 43 30 */	lis r0, 0x4330
/* 8000EE0C 0000BEEC  90 61 01 84 */	stw r3, 0x184(r1)
/* 8000EE10 0000BEF0  C8 22 81 20 */	lfd f1, "@749"@sda21(r2)
/* 8000EE14 0000BEF4  90 01 01 80 */	stw r0, 0x180(r1)
/* 8000EE18 0000BEF8  C0 42 81 1C */	lfs f2, "@747"@sda21(r2)
/* 8000EE1C 0000BEFC  C8 01 01 80 */	lfd f0, 0x180(r1)
/* 8000EE20 0000BF00  EC 00 08 28 */	fsubs f0, f0, f1
/* 8000EE24 0000BF04  EC 02 00 32 */	fmuls f0, f2, f0
/* 8000EE28 0000BF08  FC 00 00 1E */	fctiwz f0, f0
/* 8000EE2C 0000BF0C  D8 01 01 88 */	stfd f0, 0x188(r1)
/* 8000EE30 0000BF10  83 A1 01 8C */	lwz r29, 0x18c(r1)
/* 8000EE34 0000BF14  2C 1D 00 00 */	cmpwi r29, 0x0
/* 8000EE38 0000BF18  40 81 01 28 */	ble .L_8000EF60
/* 8000EE3C 0000BF1C  57 A0 08 3C */	slwi r0, r29, 1
/* 8000EE40 0000BF20  1C 60 00 0C */	mulli r3, r0, 0xc
/* 8000EE44 0000BF24  48 02 4C 15 */	bl xMemPushTemp__FUi
/* 8000EE48 0000BF28  7C 7E 1B 79 */	mr. r30, r3
/* 8000EE4C 0000BF2C  1C 1D 00 0C */	mulli r0, r29, 0xc
/* 8000EE50 0000BF30  7F FE 02 14 */	add r31, r30, r0
/* 8000EE54 0000BF34  41 82 01 0C */	beq .L_8000EF60
/* 8000EE58 0000BF38  3C 80 80 25 */	lis r4, snow_dvel@ha
/* 8000EE5C 0000BF3C  C7 44 20 FC */	lfsu f26, snow_dvel@l(r4)
/* 8000EE60 0000BF40  3C 60 80 25 */	lis r3, snow_vel@ha
/* 8000EE64 0000BF44  C7 63 20 F0 */	lfsu f27, snow_vel@l(r3)
/* 8000EE68 0000BF48  C3 84 00 04 */	lfs f28, 0x4(r4)
/* 8000EE6C 0000BF4C  7F DC F3 78 */	mr r28, r30
/* 8000EE70 0000BF50  C3 A3 00 04 */	lfs f29, 0x4(r3)
/* 8000EE74 0000BF54  7F FB FB 78 */	mr r27, r31
/* 8000EE78 0000BF58  C3 C4 00 08 */	lfs f30, 0x8(r4)
/* 8000EE7C 0000BF5C  3B 40 00 00 */	li r26, 0x0
/* 8000EE80 0000BF60  C3 E3 00 08 */	lfs f31, 0x8(r3)
/* 8000EE84 0000BF64  48 00 00 BC */	b .L_8000EF40
.L_8000EE88:
/* 8000EE88 0000BF68  7F 83 E3 78 */	mr r3, r28
/* 8000EE8C 0000BF6C  38 81 00 08 */	addi r4, r1, 0x8
/* 8000EE90 0000BF70  4B FF C3 D5 */	bl __as__5xVec3FRC5xVec3
/* 8000EE94 0000BF74  48 02 1D F5 */	bl xurand__Fv
/* 8000EE98 0000BF78  C0 62 81 0C */	lfs f3, "@743"@sda21(r2)
/* 8000EE9C 0000BF7C  C0 42 81 10 */	lfs f2, "@744"@sda21(r2)
/* 8000EEA0 0000BF80  C0 1C 00 00 */	lfs f0, 0x0(r28)
/* 8000EEA4 0000BF84  EC 23 10 78 */	fmsubs f1, f3, f1, f2
/* 8000EEA8 0000BF88  EC 00 08 2A */	fadds f0, f0, f1
/* 8000EEAC 0000BF8C  D0 1C 00 00 */	stfs f0, 0x0(r28)
/* 8000EEB0 0000BF90  48 02 1D D9 */	bl xurand__Fv
/* 8000EEB4 0000BF94  C0 62 81 0C */	lfs f3, "@743"@sda21(r2)
/* 8000EEB8 0000BF98  C0 42 81 10 */	lfs f2, "@744"@sda21(r2)
/* 8000EEBC 0000BF9C  C0 1C 00 08 */	lfs f0, 0x8(r28)
/* 8000EEC0 0000BFA0  EC 23 10 78 */	fmsubs f1, f3, f1, f2
/* 8000EEC4 0000BFA4  EC 00 08 2A */	fadds f0, f0, f1
/* 8000EEC8 0000BFA8  D0 1C 00 08 */	stfs f0, 0x8(r28)
/* 8000EECC 0000BFAC  C0 3C 00 08 */	lfs f1, 0x8(r28)
/* 8000EED0 0000BFB0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8000EED4 0000BFB4  C0 5C 00 00 */	lfs f2, 0x0(r28)
/* 8000EED8 0000BFB8  EC 21 00 28 */	fsubs f1, f1, f0
/* 8000EEDC 0000BFBC  C0 01 00 08 */	lfs f0, 0x8(r1)
/* 8000EEE0 0000BFC0  C0 62 81 14 */	lfs f3, "@745"@sda21(r2)
/* 8000EEE4 0000BFC4  EC A2 00 28 */	fsubs f5, f2, f0
/* 8000EEE8 0000BFC8  C0 42 80 F4 */	lfs f2, "@645"@sda21(r2)
/* 8000EEEC 0000BFCC  EC 81 00 72 */	fmuls f4, f1, f1
/* 8000EEF0 0000BFD0  C0 02 81 18 */	lfs f0, "@746"@sda21(r2)
/* 8000EEF4 0000BFD4  C0 3C 00 04 */	lfs f1, 0x4(r28)
/* 8000EEF8 0000BFD8  EC 85 21 7A */	fmadds f4, f5, f5, f4
/* 8000EEFC 0000BFDC  EC 64 18 24 */	fdivs f3, f4, f3
/* 8000EF00 0000BFE0  EC 42 18 28 */	fsubs f2, f2, f3
/* 8000EF04 0000BFE4  EC 00 00 BA */	fmadds f0, f0, f2, f0
/* 8000EF08 0000BFE8  EC 01 00 2A */	fadds f0, f1, f0
/* 8000EF0C 0000BFEC  D0 1C 00 04 */	stfs f0, 0x4(r28)
/* 8000EF10 0000BFF0  48 02 1D 79 */	bl xurand__Fv
/* 8000EF14 0000BFF4  EC 1A D8 7A */	fmadds f0, f26, f1, f27
/* 8000EF18 0000BFF8  D0 1B 00 00 */	stfs f0, 0x0(r27)
/* 8000EF1C 0000BFFC  48 02 1D 6D */	bl xurand__Fv
/* 8000EF20 0000C000  EC 1C E8 7A */	fmadds f0, f28, f1, f29
/* 8000EF24 0000C004  D0 1B 00 04 */	stfs f0, 0x4(r27)
/* 8000EF28 0000C008  48 02 1D 61 */	bl xurand__Fv
/* 8000EF2C 0000C00C  EC 1E F8 7A */	fmadds f0, f30, f1, f31
/* 8000EF30 0000C010  3B 5A 00 01 */	addi r26, r26, 0x1
/* 8000EF34 0000C014  3B 9C 00 0C */	addi r28, r28, 0xc
/* 8000EF38 0000C018  D0 1B 00 08 */	stfs f0, 0x8(r27)
/* 8000EF3C 0000C01C  3B 7B 00 0C */	addi r27, r27, 0xc
.L_8000EF40:
/* 8000EF40 0000C020  7C 1A E8 00 */	cmpw r26, r29
/* 8000EF44 0000C024  41 80 FF 44 */	blt .L_8000EE88
/* 8000EF48 0000C028  7F C3 F3 78 */	mr r3, r30
/* 8000EF4C 0000C02C  7F E4 FB 78 */	mr r4, r31
/* 8000EF50 0000C030  7F A5 EB 78 */	mr r5, r29
/* 8000EF54 0000C034  48 16 27 8D */	bl zParPTankSpawnSnow__FP5xVec3P5xVec3Ui
/* 8000EF58 0000C038  7F C3 F3 78 */	mr r3, r30
/* 8000EF5C 0000C03C  48 02 4B 29 */	bl xMemPopTemp__FPv
.L_8000EF60:
/* 8000EF60 0000C040  E3 E1 02 28 */	psq_l f31, 0x228(r1), 0, qr0
/* 8000EF64 0000C044  CB E1 02 20 */	lfd f31, 0x220(r1)
/* 8000EF68 0000C048  E3 C1 02 18 */	psq_l f30, 0x218(r1), 0, qr0
/* 8000EF6C 0000C04C  CB C1 02 10 */	lfd f30, 0x210(r1)
/* 8000EF70 0000C050  E3 A1 02 08 */	psq_l f29, 0x208(r1), 0, qr0
/* 8000EF74 0000C054  CB A1 02 00 */	lfd f29, 0x200(r1)
/* 8000EF78 0000C058  E3 81 01 F8 */	psq_l f28, 0x1f8(r1), 0, qr0
/* 8000EF7C 0000C05C  CB 81 01 F0 */	lfd f28, 0x1f0(r1)
/* 8000EF80 0000C060  E3 61 01 E8 */	psq_l f27, 0x1e8(r1), 0, qr0
/* 8000EF84 0000C064  CB 61 01 E0 */	lfd f27, 0x1e0(r1)
/* 8000EF88 0000C068  E3 41 01 D8 */	psq_l f26, 0x1d8(r1), 0, qr0
/* 8000EF8C 0000C06C  CB 41 01 D0 */	lfd f26, 0x1d0(r1)
/* 8000EF90 0000C070  E3 21 01 C8 */	psq_l f25, 0x1c8(r1), 0, qr0
/* 8000EF94 0000C074  CB 21 01 C0 */	lfd f25, 0x1c0(r1)
/* 8000EF98 0000C078  E3 01 01 B8 */	psq_l f24, 0x1b8(r1), 0, qr0
/* 8000EF9C 0000C07C  CB 01 01 B0 */	lfd f24, 0x1b0(r1)
/* 8000EFA0 0000C080  BB 41 01 98 */	lmw r26, 0x198(r1)
/* 8000EFA4 0000C084  80 01 02 34 */	lwz r0, 0x234(r1)
/* 8000EFA8 0000C088  7C 08 03 A6 */	mtlr r0
/* 8000EFAC 0000C08C  38 21 02 30 */	addi r1, r1, 0x230
/* 8000EFB0 0000C090  4E 80 00 20 */	blr
.endfn UpdateRain__FP11_tagClimatef

# UpdateWind(_tagClimate*, float)
.fn UpdateWind__FP11_tagClimatef, local
/* 8000EFB4 0000C094  4E 80 00 20 */	blr
.endfn UpdateWind__FP11_tagClimatef

# xClimateUpdate(_tagClimate*, float)
.fn xClimateUpdate__FP11_tagClimatef, global
/* 8000EFB8 0000C098  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8000EFBC 0000C09C  7C 08 02 A6 */	mflr r0
/* 8000EFC0 0000C0A0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8000EFC4 0000C0A4  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8000EFC8 0000C0A8  FF E0 08 90 */	fmr f31, f1
/* 8000EFCC 0000C0AC  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8000EFD0 0000C0B0  7C 7F 1B 78 */	mr r31, r3
/* 8000EFD4 0000C0B4  4B FF FB F1 */	bl UpdateRain__FP11_tagClimatef
/* 8000EFD8 0000C0B8  FC 20 F8 90 */	fmr f1, f31
/* 8000EFDC 0000C0BC  7F E3 FB 78 */	mr r3, r31
/* 8000EFE0 0000C0C0  4B FF FF D5 */	bl UpdateWind__FP11_tagClimatef
/* 8000EFE4 0000C0C4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8000EFE8 0000C0C8  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8000EFEC 0000C0CC  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8000EFF0 0000C0D0  7C 08 03 A6 */	mtlr r0
/* 8000EFF4 0000C0D4  38 21 00 20 */	addi r1, r1, 0x20
/* 8000EFF8 0000C0D8  4E 80 00 20 */	blr
.endfn xClimateUpdate__FP11_tagClimatef

# 0x8000EFFC - 0x8000F00C
.section .text, "ax", unique, 1
.balign 4

# xVec3Init(xVec3*, float, float, float)
.fn xVec3Init__FP5xVec3fff, weak
/* 8000EFFC 0000C0DC  D0 23 00 00 */	stfs f1, 0x0(r3)
/* 8000F000 0000C0E0  D0 43 00 04 */	stfs f2, 0x4(r3)
/* 8000F004 0000C0E4  D0 63 00 08 */	stfs f3, 0x8(r3)
/* 8000F008 0000C0E8  4E 80 00 20 */	blr
.endfn xVec3Init__FP5xVec3fff

# 0x8000F00C - 0x8000F058
.section .text, "ax", unique, 2
.balign 4

# xMat3x3Identity(xMat3x3*)
.fn xMat3x3Identity__FP7xMat3x3, weak
/* 8000F00C 0000C0EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8000F010 0000C0F0  7C 08 02 A6 */	mflr r0
/* 8000F014 0000C0F4  3C 80 80 39 */	lis r4, g_I3@ha
/* 8000F018 0000C0F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8000F01C 0000C0FC  38 84 C2 E0 */	addi r4, r4, g_I3@l
/* 8000F020 0000C100  48 00 00 15 */	bl xMat3x3Copy__FP7xMat3x3PC7xMat3x3
/* 8000F024 0000C104  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8000F028 0000C108  7C 08 03 A6 */	mtlr r0
/* 8000F02C 0000C10C  38 21 00 10 */	addi r1, r1, 0x10
/* 8000F030 0000C110  4E 80 00 20 */	blr
.endfn xMat3x3Identity__FP7xMat3x3

# xMat3x3Copy(xMat3x3*, const xMat3x3*)
.fn xMat3x3Copy__FP7xMat3x3PC7xMat3x3, weak
/* 8000F034 0000C114  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8000F038 0000C118  7C 08 02 A6 */	mflr r0
/* 8000F03C 0000C11C  38 A0 00 30 */	li r5, 0x30
/* 8000F040 0000C120  90 01 00 14 */	stw r0, 0x14(r1)
/* 8000F044 0000C124  4B FF 44 FD */	bl memcpy
/* 8000F048 0000C128  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8000F04C 0000C12C  7C 08 03 A6 */	mtlr r0
/* 8000F050 0000C130  38 21 00 10 */	addi r1, r1, 0x10
/* 8000F054 0000C134  4E 80 00 20 */	blr
.endfn xMat3x3Copy__FP7xMat3x3PC7xMat3x3

# 0x802520F0 - 0x80252128
.rodata
.balign 8

.obj snow_vel, local
	.4byte 0x00000000
	.4byte 0xC0000000
	.4byte 0x00000000
.endobj snow_vel

.obj snow_dvel, local
	.4byte 0x3DCCCCCD
	.4byte 0x3DCCCCCD
	.4byte 0x3DCCCCCD
.endobj snow_dvel

.obj "@stringBase0", local
	.4byte 0x50415245
	.4byte 0x4D49545F
	.4byte 0x5241494E
	.4byte 0x00504152
	.4byte 0x454D4954
	.4byte 0x5F534E4F
	.2byte 0x5700
.endobj "@stringBase0"
	.4byte 0x00000000
	.2byte 0x0000

# 0x803CA918 - 0x803CA920
.section .sdata, "wa"
.balign 8

.obj snow_life, global
	.4byte 0x40400000
.endobj snow_life
	.4byte 0x00000000

# 0x803CB188 - 0x803CB190
.section .sbss, "wa", @nobits
.balign 8

.obj sClimate, local
	.skip 0x4
.endobj sClimate
	.skip 0x4

# 0x803CCA68 - 0x803CCAA8
.section .sdata2, "a"
.balign 8

.obj "@642", local
	.4byte 0x40490FDB
.endobj "@642"

.obj "@643", local
	.4byte 0x43340000
.endobj "@643"

.obj "@644", local
	.4byte 0x00000000
.endobj "@644"

.obj "@645", local
	.4byte 0x3F800000
.endobj "@645"

.obj "@668", local
	.4byte 0x3F000000
.endobj "@668"

.obj "@685", local
	.4byte 0x41200000
.endobj "@685"

.obj "@740", local
	.4byte 0x41C80000
.endobj "@740"

.obj "@741", local
	.4byte 0x41480000
.endobj "@741"

.obj "@742", local
	.4byte 0x41000000
.endobj "@742"

.obj "@743", local
	.4byte 0x42340000
.endobj "@743"

.obj "@744", local
	.4byte 0x41B40000
.endobj "@744"

.obj "@745", local
	.4byte 0x43FD2000
.endobj "@745"

.obj "@746", local
	.4byte 0x40800000
.endobj "@746"

.obj "@747", local
	.4byte 0x3DCCCCCD
.endobj "@747"

.obj "@749", local
	.4byte 0x43300000
	.4byte 0x80000000
.endobj "@749"
