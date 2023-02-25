.include "macros.inc"
.file "zLightEffect.cpp"

# 0x8009E870 - 0x8009EC78
.text
.balign 4

# leGetRandom()
.fn leGetRandom__Fv, local
/* 8009E870 0009B950  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009E874 0009B954  7C 08 02 A6 */	mflr r0
/* 8009E878 0009B958  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009E87C 0009B95C  48 14 79 65 */	bl rand
/* 8009E880 0009B960  54 63 04 3E */	clrlwi r3, r3, 16
/* 8009E884 0009B964  3C 00 43 30 */	lis r0, 0x4330
/* 8009E888 0009B968  90 01 00 08 */	stw r0, 0x8(r1)
/* 8009E88C 0009B96C  C8 42 91 E8 */	lfd f2, "@655"@sda21(r2)
/* 8009E890 0009B970  90 61 00 0C */	stw r3, 0xc(r1)
/* 8009E894 0009B974  C0 02 91 E0 */	lfs f0, "@653"@sda21(r2)
/* 8009E898 0009B978  C8 21 00 08 */	lfd f1, 0x8(r1)
/* 8009E89C 0009B97C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009E8A0 0009B980  EC 21 10 28 */	fsubs f1, f1, f2
/* 8009E8A4 0009B984  EC 21 00 24 */	fdivs f1, f1, f0
/* 8009E8A8 0009B988  7C 08 03 A6 */	mtlr r0
/* 8009E8AC 0009B98C  38 21 00 10 */	addi r1, r1, 0x10
/* 8009E8B0 0009B990  4E 80 00 20 */	blr
.endfn leGetRandom__Fv

# zLightEffectInitStrobe(_zLight*)
.fn zLightEffectInitStrobe__FP7_zLight, global
/* 8009E8B4 0009B994  4E 80 00 20 */	blr
.endfn zLightEffectInitStrobe__FP7_zLight

# zLightEffectInitDim(_zLight*)
.fn zLightEffectInitDim__FP7_zLight, global
/* 8009E8B8 0009B998  4E 80 00 20 */	blr
.endfn zLightEffectInitDim__FP7_zLight

# zLightEffectInitHalfDim(_zLight*)
.fn zLightEffectInitHalfDim__FP7_zLight, global
/* 8009E8BC 0009B99C  4E 80 00 20 */	blr
.endfn zLightEffectInitHalfDim__FP7_zLight

# zLightEffectInitRandomCol(_zLight*)
.fn zLightEffectInitRandomCol__FP7_zLight, global
/* 8009E8C0 0009B9A0  4E 80 00 20 */	blr
.endfn zLightEffectInitRandomCol__FP7_zLight

# zLightEffectInitFlicker(_zLight*)
.fn zLightEffectInitFlicker__FP7_zLight, global
/* 8009E8C4 0009B9A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009E8C8 0009B9A8  7C 08 02 A6 */	mflr r0
/* 8009E8CC 0009B9AC  38 80 00 01 */	li r4, 0x1
/* 8009E8D0 0009B9B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009E8D4 0009B9B4  C0 02 91 F0 */	lfs f0, "@676"@sda21(r2)
/* 8009E8D8 0009B9B8  80 A3 00 5C */	lwz r5, 0x5c(r3)
/* 8009E8DC 0009B9BC  D0 05 00 00 */	stfs f0, 0x0(r5)
/* 8009E8E0 0009B9C0  4B FF FF 69 */	bl zLightOn__FP7_zLighti
/* 8009E8E4 0009B9C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009E8E8 0009B9C8  7C 08 03 A6 */	mtlr r0
/* 8009E8EC 0009B9CC  38 21 00 10 */	addi r1, r1, 0x10
/* 8009E8F0 0009B9D0  4E 80 00 20 */	blr
.endfn zLightEffectInitFlicker__FP7_zLight

# EffectFlicker(_zLight*, float, float, float)
.fn EffectFlicker__FP7_zLightfff, local
/* 8009E8F4 0009B9D4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8009E8F8 0009B9D8  7C 08 02 A6 */	mflr r0
/* 8009E8FC 0009B9DC  90 01 00 44 */	stw r0, 0x44(r1)
/* 8009E900 0009B9E0  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8009E904 0009B9E4  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 8009E908 0009B9E8  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8009E90C 0009B9EC  F3 C1 00 28 */	psq_st f30, 0x28(r1), 0, qr0
/* 8009E910 0009B9F0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8009E914 0009B9F4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8009E918 0009B9F8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8009E91C 0009B9FC  7C 7D 1B 78 */	mr r29, r3
/* 8009E920 0009BA00  FF C0 10 90 */	fmr f30, f2
/* 8009E924 0009BA04  83 C3 00 5C */	lwz r30, 0x5c(r3)
/* 8009E928 0009BA08  FF E0 18 90 */	fmr f31, f3
/* 8009E92C 0009BA0C  3B FD 00 18 */	addi r31, r29, 0x18
/* 8009E930 0009BA10  C0 1E 00 00 */	lfs f0, 0x0(r30)
/* 8009E934 0009BA14  EC 00 08 28 */	fsubs f0, f0, f1
/* 8009E938 0009BA18  D0 1E 00 00 */	stfs f0, 0x0(r30)
/* 8009E93C 0009BA1C  C0 3E 00 00 */	lfs f1, 0x0(r30)
/* 8009E940 0009BA20  C0 02 91 F0 */	lfs f0, "@676"@sda21(r2)
/* 8009E944 0009BA24  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8009E948 0009BA28  4C 40 13 82 */	cror eq, lt, eq
/* 8009E94C 0009BA2C  40 82 01 00 */	bne .L_8009EA4C
/* 8009E950 0009BA30  4B FF FF 21 */	bl leGetRandom__Fv
/* 8009E954 0009BA34  EC 1F 00 72 */	fmuls f0, f31, f1
/* 8009E958 0009BA38  D0 1E 00 00 */	stfs f0, 0x0(r30)
/* 8009E95C 0009BA3C  C0 1E 00 00 */	lfs f0, 0x0(r30)
/* 8009E960 0009BA40  EC 00 F0 2A */	fadds f0, f0, f30
/* 8009E964 0009BA44  D0 1E 00 00 */	stfs f0, 0x0(r30)
/* 8009E968 0009BA48  4B FF FF 09 */	bl leGetRandom__Fv
/* 8009E96C 0009BA4C  C0 42 91 F8 */	lfs f2, "@702"@sda21(r2)
/* 8009E970 0009BA50  C0 02 91 F4 */	lfs f0, "@701"@sda21(r2)
/* 8009E974 0009BA54  80 7D 00 14 */	lwz r3, 0x14(r29)
/* 8009E978 0009BA58  EC 22 00 7A */	fmadds f1, f2, f1, f0
/* 8009E97C 0009BA5C  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 8009E980 0009BA60  EC 00 08 28 */	fsubs f0, f0, f1
/* 8009E984 0009BA64  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 8009E988 0009BA68  4B FF FE E9 */	bl leGetRandom__Fv
/* 8009E98C 0009BA6C  C0 42 91 F8 */	lfs f2, "@702"@sda21(r2)
/* 8009E990 0009BA70  C0 02 91 F4 */	lfs f0, "@701"@sda21(r2)
/* 8009E994 0009BA74  80 7D 00 14 */	lwz r3, 0x14(r29)
/* 8009E998 0009BA78  EC 22 00 7A */	fmadds f1, f2, f1, f0
/* 8009E99C 0009BA7C  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 8009E9A0 0009BA80  EC 00 08 28 */	fsubs f0, f0, f1
/* 8009E9A4 0009BA84  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 8009E9A8 0009BA88  4B FF FE C9 */	bl leGetRandom__Fv
/* 8009E9AC 0009BA8C  C0 42 91 F8 */	lfs f2, "@702"@sda21(r2)
/* 8009E9B0 0009BA90  C0 02 91 F4 */	lfs f0, "@701"@sda21(r2)
/* 8009E9B4 0009BA94  80 7D 00 14 */	lwz r3, 0x14(r29)
/* 8009E9B8 0009BA98  EC 22 00 7A */	fmadds f1, f2, f1, f0
/* 8009E9BC 0009BA9C  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 8009E9C0 0009BAA0  EC 00 08 28 */	fsubs f0, f0, f1
/* 8009E9C4 0009BAA4  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 8009E9C8 0009BAA8  C0 3F 00 1C */	lfs f1, 0x1c(r31)
/* 8009E9CC 0009BAAC  C0 02 91 FC */	lfs f0, "@703"@sda21(r2)
/* 8009E9D0 0009BAB0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8009E9D4 0009BAB4  40 81 00 0C */	ble .L_8009E9E0
/* 8009E9D8 0009BAB8  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 8009E9DC 0009BABC  48 00 00 14 */	b .L_8009E9F0
.L_8009E9E0:
/* 8009E9E0 0009BAC0  C0 02 91 F0 */	lfs f0, "@676"@sda21(r2)
/* 8009E9E4 0009BAC4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8009E9E8 0009BAC8  40 80 00 08 */	bge .L_8009E9F0
/* 8009E9EC 0009BACC  D0 1F 00 1C */	stfs f0, 0x1c(r31)
.L_8009E9F0:
/* 8009E9F0 0009BAD0  C0 3F 00 20 */	lfs f1, 0x20(r31)
/* 8009E9F4 0009BAD4  C0 02 91 FC */	lfs f0, "@703"@sda21(r2)
/* 8009E9F8 0009BAD8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8009E9FC 0009BADC  40 81 00 0C */	ble .L_8009EA08
/* 8009EA00 0009BAE0  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 8009EA04 0009BAE4  48 00 00 14 */	b .L_8009EA18
.L_8009EA08:
/* 8009EA08 0009BAE8  C0 02 91 F0 */	lfs f0, "@676"@sda21(r2)
/* 8009EA0C 0009BAEC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8009EA10 0009BAF0  40 80 00 08 */	bge .L_8009EA18
/* 8009EA14 0009BAF4  D0 1F 00 20 */	stfs f0, 0x20(r31)
.L_8009EA18:
/* 8009EA18 0009BAF8  C0 3F 00 24 */	lfs f1, 0x24(r31)
/* 8009EA1C 0009BAFC  C0 02 91 FC */	lfs f0, "@703"@sda21(r2)
/* 8009EA20 0009BB00  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8009EA24 0009BB04  40 81 00 0C */	ble .L_8009EA30
/* 8009EA28 0009BB08  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 8009EA2C 0009BB0C  48 00 00 14 */	b .L_8009EA40
.L_8009EA30:
/* 8009EA30 0009BB10  C0 02 91 F0 */	lfs f0, "@676"@sda21(r2)
/* 8009EA34 0009BB14  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8009EA38 0009BB18  40 80 00 08 */	bge .L_8009EA40
/* 8009EA3C 0009BB1C  D0 1F 00 24 */	stfs f0, 0x24(r31)
.L_8009EA40:
/* 8009EA40 0009BB20  7F E3 FB 78 */	mr r3, r31
/* 8009EA44 0009BB24  38 9F 00 1C */	addi r4, r31, 0x1c
/* 8009EA48 0009BB28  48 02 62 E9 */	bl iLightSetColor__FP6iLightP8_xFColor
.L_8009EA4C:
/* 8009EA4C 0009BB2C  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8009EA50 0009BB30  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8009EA54 0009BB34  E3 C1 00 28 */	psq_l f30, 0x28(r1), 0, qr0
/* 8009EA58 0009BB38  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8009EA5C 0009BB3C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8009EA60 0009BB40  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8009EA64 0009BB44  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8009EA68 0009BB48  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8009EA6C 0009BB4C  7C 08 03 A6 */	mtlr r0
/* 8009EA70 0009BB50  38 21 00 40 */	addi r1, r1, 0x40
/* 8009EA74 0009BB54  4E 80 00 20 */	blr
.endfn EffectFlicker__FP7_zLightfff

# zLightEffectFlicker(_zLight*, float)
.fn zLightEffectFlicker__FP7_zLightf, global
/* 8009EA78 0009BB58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009EA7C 0009BB5C  7C 08 02 A6 */	mflr r0
/* 8009EA80 0009BB60  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009EA84 0009BB64  C0 42 92 00 */	lfs f2, "@708"@sda21(r2)
/* 8009EA88 0009BB68  C0 62 91 F8 */	lfs f3, "@702"@sda21(r2)
/* 8009EA8C 0009BB6C  4B FF FE 69 */	bl EffectFlicker__FP7_zLightfff
/* 8009EA90 0009BB70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009EA94 0009BB74  7C 08 03 A6 */	mtlr r0
/* 8009EA98 0009BB78  38 21 00 10 */	addi r1, r1, 0x10
/* 8009EA9C 0009BB7C  4E 80 00 20 */	blr
.endfn zLightEffectFlicker__FP7_zLightf

# zLightEffectFlickerSlow(_zLight*, float)
.fn zLightEffectFlickerSlow__FP7_zLightf, global
/* 8009EAA0 0009BB80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009EAA4 0009BB84  7C 08 02 A6 */	mflr r0
/* 8009EAA8 0009BB88  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009EAAC 0009BB8C  C0 42 91 F8 */	lfs f2, "@702"@sda21(r2)
/* 8009EAB0 0009BB90  C0 62 92 04 */	lfs f3, "@713"@sda21(r2)
/* 8009EAB4 0009BB94  4B FF FE 41 */	bl EffectFlicker__FP7_zLightfff
/* 8009EAB8 0009BB98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009EABC 0009BB9C  7C 08 03 A6 */	mtlr r0
/* 8009EAC0 0009BBA0  38 21 00 10 */	addi r1, r1, 0x10
/* 8009EAC4 0009BBA4  4E 80 00 20 */	blr
.endfn zLightEffectFlickerSlow__FP7_zLightf

# zLightEffectFlickerErratic(_zLight*, float)
.fn zLightEffectFlickerErratic__FP7_zLightf, global
/* 8009EAC8 0009BBA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009EACC 0009BBAC  7C 08 02 A6 */	mflr r0
/* 8009EAD0 0009BBB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009EAD4 0009BBB4  C0 42 91 F0 */	lfs f2, "@676"@sda21(r2)
/* 8009EAD8 0009BBB8  C0 62 91 F4 */	lfs f3, "@701"@sda21(r2)
/* 8009EADC 0009BBBC  4B FF FE 19 */	bl EffectFlicker__FP7_zLightfff
/* 8009EAE0 0009BBC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009EAE4 0009BBC4  7C 08 03 A6 */	mtlr r0
/* 8009EAE8 0009BBC8  38 21 00 10 */	addi r1, r1, 0x10
/* 8009EAEC 0009BBCC  4E 80 00 20 */	blr
.endfn zLightEffectFlickerErratic__FP7_zLightf

# zLightEffectStrobeSlow(_zLight*, float)
.fn zLightEffectStrobeSlow__FP7_zLightf, global
/* 8009EAF0 0009BBD0  4E 80 00 20 */	blr
.endfn zLightEffectStrobeSlow__FP7_zLightf

# zLightEffectStrobe(_zLight*, float)
.fn zLightEffectStrobe__FP7_zLightf, global
/* 8009EAF4 0009BBD4  4E 80 00 20 */	blr
.endfn zLightEffectStrobe__FP7_zLightf

# zLightEffectStrobeFast(_zLight*, float)
.fn zLightEffectStrobeFast__FP7_zLightf, global
/* 8009EAF8 0009BBD8  4E 80 00 20 */	blr
.endfn zLightEffectStrobeFast__FP7_zLightf

# zLightEffectDimSlow(_zLight*, float)
.fn zLightEffectDimSlow__FP7_zLightf, global
/* 8009EAFC 0009BBDC  4E 80 00 20 */	blr
.endfn zLightEffectDimSlow__FP7_zLightf

# zLightEffectDim(_zLight*, float)
.fn zLightEffectDim__FP7_zLightf, global
/* 8009EB00 0009BBE0  4E 80 00 20 */	blr
.endfn zLightEffectDim__FP7_zLightf

# zLightEffectDimFast(_zLight*, float)
.fn zLightEffectDimFast__FP7_zLightf, global
/* 8009EB04 0009BBE4  4E 80 00 20 */	blr
.endfn zLightEffectDimFast__FP7_zLightf

# zLightEffectHalfDimSlow(_zLight*, float)
.fn zLightEffectHalfDimSlow__FP7_zLightf, global
/* 8009EB08 0009BBE8  4E 80 00 20 */	blr
.endfn zLightEffectHalfDimSlow__FP7_zLightf

# zLightEffectHalfDim(_zLight*, float)
.fn zLightEffectHalfDim__FP7_zLightf, global
/* 8009EB0C 0009BBEC  4E 80 00 20 */	blr
.endfn zLightEffectHalfDim__FP7_zLightf

# zLightEffectHalfDimFast(_zLight*, float)
.fn zLightEffectHalfDimFast__FP7_zLightf, global
/* 8009EB10 0009BBF0  4E 80 00 20 */	blr
.endfn zLightEffectHalfDimFast__FP7_zLightf

# zLightEffectRandomColSlow(_zLight*, float)
.fn zLightEffectRandomColSlow__FP7_zLightf, global
/* 8009EB14 0009BBF4  4E 80 00 20 */	blr
.endfn zLightEffectRandomColSlow__FP7_zLightf

# zLightEffectRandomCol(_zLight*, float)
.fn zLightEffectRandomCol__FP7_zLightf, global
/* 8009EB18 0009BBF8  4E 80 00 20 */	blr
.endfn zLightEffectRandomCol__FP7_zLightf

# zLightEffectRandomColFast(_zLight*, float)
.fn zLightEffectRandomColFast__FP7_zLightf, global
/* 8009EB1C 0009BBFC  4E 80 00 20 */	blr
.endfn zLightEffectRandomColFast__FP7_zLightf

# zLightEffectInitCauldron(_zLight*)
.fn zLightEffectInitCauldron__FP7_zLight, global
/* 8009EB20 0009BC00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009EB24 0009BC04  7C 08 02 A6 */	mflr r0
/* 8009EB28 0009BC08  38 80 00 01 */	li r4, 0x1
/* 8009EB2C 0009BC0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009EB30 0009BC10  C0 02 91 F0 */	lfs f0, "@676"@sda21(r2)
/* 8009EB34 0009BC14  80 A3 00 5C */	lwz r5, 0x5c(r3)
/* 8009EB38 0009BC18  D0 05 00 00 */	stfs f0, 0x0(r5)
/* 8009EB3C 0009BC1C  4B FF FD 0D */	bl zLightOn__FP7_zLighti
/* 8009EB40 0009BC20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009EB44 0009BC24  7C 08 03 A6 */	mtlr r0
/* 8009EB48 0009BC28  38 21 00 10 */	addi r1, r1, 0x10
/* 8009EB4C 0009BC2C  4E 80 00 20 */	blr
.endfn zLightEffectInitCauldron__FP7_zLight

# leBlendToCol(float, float, float)
.fn leBlendToCol__Ffff, local
/* 8009EB50 0009BC30  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 8009EB54 0009BC34  40 81 00 18 */	ble .L_8009EB6C
/* 8009EB58 0009BC38  EC 21 18 28 */	fsubs f1, f1, f3
/* 8009EB5C 0009BC3C  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 8009EB60 0009BC40  4C 80 00 20 */	bgelr
/* 8009EB64 0009BC44  FC 20 10 90 */	fmr f1, f2
/* 8009EB68 0009BC48  4E 80 00 20 */	blr
.L_8009EB6C:
/* 8009EB6C 0009BC4C  4C 80 00 20 */	bgelr
/* 8009EB70 0009BC50  EC 21 18 2A */	fadds f1, f1, f3
/* 8009EB74 0009BC54  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 8009EB78 0009BC58  4C 81 00 20 */	blelr
/* 8009EB7C 0009BC5C  FC 20 10 90 */	fmr f1, f2
/* 8009EB80 0009BC60  4E 80 00 20 */	blr
.endfn leBlendToCol__Ffff

# zLightEffectCauldron(_zLight*, float)
.fn zLightEffectCauldron__FP7_zLightf, global
/* 8009EB84 0009BC64  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8009EB88 0009BC68  7C 08 02 A6 */	mflr r0
/* 8009EB8C 0009BC6C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8009EB90 0009BC70  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8009EB94 0009BC74  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8009EB98 0009BC78  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8009EB9C 0009BC7C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8009EBA0 0009BC80  83 C3 00 5C */	lwz r30, 0x5c(r3)
/* 8009EBA4 0009BC84  FF E0 08 90 */	fmr f31, f1
/* 8009EBA8 0009BC88  3B E3 00 18 */	addi r31, r3, 0x18
/* 8009EBAC 0009BC8C  C0 1E 00 00 */	lfs f0, 0x0(r30)
/* 8009EBB0 0009BC90  EC 00 F8 28 */	fsubs f0, f0, f31
/* 8009EBB4 0009BC94  D0 1E 00 00 */	stfs f0, 0x0(r30)
/* 8009EBB8 0009BC98  C0 3E 00 00 */	lfs f1, 0x0(r30)
/* 8009EBBC 0009BC9C  C0 02 91 F0 */	lfs f0, "@676"@sda21(r2)
/* 8009EBC0 0009BCA0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8009EBC4 0009BCA4  4C 40 13 82 */	cror eq, lt, eq
/* 8009EBC8 0009BCA8  40 82 00 40 */	bne .L_8009EC08
/* 8009EBCC 0009BCAC  C0 02 92 08 */	lfs f0, "@789"@sda21(r2)
/* 8009EBD0 0009BCB0  D0 1E 00 00 */	stfs f0, 0x0(r30)
/* 8009EBD4 0009BCB4  4B FF FC 9D */	bl leGetRandom__Fv
/* 8009EBD8 0009BCB8  C0 02 92 0C */	lfs f0, "@790"@sda21(r2)
/* 8009EBDC 0009BCBC  EC 00 00 72 */	fmuls f0, f0, f1
/* 8009EBE0 0009BCC0  D0 1E 00 04 */	stfs f0, 0x4(r30)
/* 8009EBE4 0009BCC4  4B FF FC 8D */	bl leGetRandom__Fv
/* 8009EBE8 0009BCC8  C0 42 92 14 */	lfs f2, "@792"@sda21(r2)
/* 8009EBEC 0009BCCC  C0 02 92 10 */	lfs f0, "@791"@sda21(r2)
/* 8009EBF0 0009BCD0  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8009EBF4 0009BCD4  D0 1E 00 08 */	stfs f0, 0x8(r30)
/* 8009EBF8 0009BCD8  4B FF FC 79 */	bl leGetRandom__Fv
/* 8009EBFC 0009BCDC  C0 02 92 0C */	lfs f0, "@790"@sda21(r2)
/* 8009EC00 0009BCE0  EC 00 00 72 */	fmuls f0, f0, f1
/* 8009EC04 0009BCE4  D0 1E 00 0C */	stfs f0, 0xc(r30)
.L_8009EC08:
/* 8009EC08 0009BCE8  C0 02 92 18 */	lfs f0, "@793"@sda21(r2)
/* 8009EC0C 0009BCEC  C0 3F 00 1C */	lfs f1, 0x1c(r31)
/* 8009EC10 0009BCF0  EF E0 07 F2 */	fmuls f31, f0, f31
/* 8009EC14 0009BCF4  C0 5E 00 04 */	lfs f2, 0x4(r30)
/* 8009EC18 0009BCF8  FC 60 F8 90 */	fmr f3, f31
/* 8009EC1C 0009BCFC  4B FF FF 35 */	bl leBlendToCol__Ffff
/* 8009EC20 0009BD00  D0 3F 00 1C */	stfs f1, 0x1c(r31)
/* 8009EC24 0009BD04  FC 60 F8 90 */	fmr f3, f31
/* 8009EC28 0009BD08  C0 3F 00 20 */	lfs f1, 0x20(r31)
/* 8009EC2C 0009BD0C  C0 5E 00 08 */	lfs f2, 0x8(r30)
/* 8009EC30 0009BD10  4B FF FF 21 */	bl leBlendToCol__Ffff
/* 8009EC34 0009BD14  D0 3F 00 20 */	stfs f1, 0x20(r31)
/* 8009EC38 0009BD18  FC 60 F8 90 */	fmr f3, f31
/* 8009EC3C 0009BD1C  C0 3F 00 24 */	lfs f1, 0x24(r31)
/* 8009EC40 0009BD20  C0 5E 00 0C */	lfs f2, 0xc(r30)
/* 8009EC44 0009BD24  4B FF FF 0D */	bl leBlendToCol__Ffff
/* 8009EC48 0009BD28  D0 3F 00 24 */	stfs f1, 0x24(r31)
/* 8009EC4C 0009BD2C  7F E3 FB 78 */	mr r3, r31
/* 8009EC50 0009BD30  38 9F 00 1C */	addi r4, r31, 0x1c
/* 8009EC54 0009BD34  48 02 60 DD */	bl iLightSetColor__FP6iLightP8_xFColor
/* 8009EC58 0009BD38  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8009EC5C 0009BD3C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8009EC60 0009BD40  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8009EC64 0009BD44  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8009EC68 0009BD48  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8009EC6C 0009BD4C  7C 08 03 A6 */	mtlr r0
/* 8009EC70 0009BD50  38 21 00 20 */	addi r1, r1, 0x20
/* 8009EC74 0009BD54  4E 80 00 20 */	blr
.endfn zLightEffectCauldron__FP7_zLightf

# 0x803CDB60 - 0x803CDBA0
.section .sdata2, "a"
.balign 8

.obj "@653", local
	.4byte 0x477FFF00
.endobj "@653"
	.4byte 0x00000000

.obj "@655", local
	.4byte 0x43300000
	.4byte 0x00000000
.endobj "@655"

.obj "@676", local
	.4byte 0x00000000
.endobj "@676"

.obj "@701", local
	.4byte 0x3DCCCCCD
.endobj "@701"

.obj "@702", local
	.4byte 0x3E4CCCCD
.endobj "@702"

.obj "@703", local
	.4byte 0x3F800000
.endobj "@703"

.obj "@708", local
	.4byte 0x3D4CCCCD
.endobj "@708"

.obj "@713", local
	.4byte 0x3E99999A
.endobj "@713"

.obj "@789", local
	.4byte 0x3E800000
.endobj "@789"

.obj "@790", local
	.4byte 0x3F000000
.endobj "@790"

.obj "@791", local
	.4byte 0x3F19999A
.endobj "@791"

.obj "@792", local
	.4byte 0x3ECCCCCD
.endobj "@792"

.obj "@793", local
	.4byte 0x40400000
.endobj "@793"
	.4byte 0x00000000
