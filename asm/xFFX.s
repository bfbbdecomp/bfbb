.include "macros.inc"
.file "xFFX.cpp"

# 0x8001F8BC - 0x8001FDBC
.text
.balign 4

# xFFXPoolInit(unsigned int)
.fn xFFXPoolInit__FUi, global
/* 8001F8BC 0001C99C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001F8C0 0001C9A0  7C 08 02 A6 */	mflr r0
/* 8001F8C4 0001C9A4  54 64 20 36 */	slwi r4, r3, 4
/* 8001F8C8 0001C9A8  38 A0 00 00 */	li r5, 0x0
/* 8001F8CC 0001C9AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001F8D0 0001C9B0  90 6D 88 E8 */	stw r3, psize@sda21(r13)
/* 8001F8D4 0001C9B4  80 6D 89 E0 */	lwz r3, gActiveHeap@sda21(r13)
/* 8001F8D8 0001C9B8  48 01 40 69 */	bl xMemAlloc__FUiUii
/* 8001F8DC 0001C9BC  90 6D 88 EC */	stw r3, pool@sda21(r13)
/* 8001F8E0 0001C9C0  38 00 00 00 */	li r0, 0x0
/* 8001F8E4 0001C9C4  38 C0 00 01 */	li r6, 0x1
/* 8001F8E8 0001C9C8  38 80 00 10 */	li r4, 0x10
/* 8001F8EC 0001C9CC  80 6D 88 EC */	lwz r3, pool@sda21(r13)
/* 8001F8F0 0001C9D0  90 03 00 0C */	stw r0, 0xc(r3)
/* 8001F8F4 0001C9D4  48 00 00 24 */	b .L_8001F918
.L_8001F8F8:
/* 8001F8F8 0001C9D8  38 06 FF FF */	addi r0, r6, -0x1
/* 8001F8FC 0001C9DC  80 AD 88 EC */	lwz r5, pool@sda21(r13)
/* 8001F900 0001C9E0  54 03 20 36 */	slwi r3, r0, 4
/* 8001F904 0001C9E4  38 C6 00 01 */	addi r6, r6, 0x1
/* 8001F908 0001C9E8  38 04 00 0C */	addi r0, r4, 0xc
/* 8001F90C 0001C9EC  38 84 00 10 */	addi r4, r4, 0x10
/* 8001F910 0001C9F0  7C 65 1A 14 */	add r3, r5, r3
/* 8001F914 0001C9F4  7C 65 01 2E */	stwx r3, r5, r0
.L_8001F918:
/* 8001F918 0001C9F8  80 6D 88 E8 */	lwz r3, psize@sda21(r13)
/* 8001F91C 0001C9FC  7C 06 18 40 */	cmplw r6, r3
/* 8001F920 0001CA00  41 80 FF D8 */	blt .L_8001F8F8
/* 8001F924 0001CA04  38 03 FF FF */	addi r0, r3, -0x1
/* 8001F928 0001CA08  80 6D 88 EC */	lwz r3, pool@sda21(r13)
/* 8001F92C 0001CA0C  54 00 20 36 */	slwi r0, r0, 4
/* 8001F930 0001CA10  7C 03 02 14 */	add r0, r3, r0
/* 8001F934 0001CA14  90 0D 88 F0 */	stw r0, alist@sda21(r13)
/* 8001F938 0001CA18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001F93C 0001CA1C  7C 08 03 A6 */	mtlr r0
/* 8001F940 0001CA20  38 21 00 10 */	addi r1, r1, 0x10
/* 8001F944 0001CA24  4E 80 00 20 */	blr
.endfn xFFXPoolInit__FUi

# xFFXAlloc()
.fn xFFXAlloc__Fv, global
/* 8001F948 0001CA28  80 6D 88 F0 */	lwz r3, alist@sda21(r13)
/* 8001F94C 0001CA2C  28 03 00 00 */	cmplwi r3, 0x0
/* 8001F950 0001CA30  40 82 00 0C */	bne .L_8001F95C
/* 8001F954 0001CA34  38 60 00 00 */	li r3, 0x0
/* 8001F958 0001CA38  4E 80 00 20 */	blr
.L_8001F95C:
/* 8001F95C 0001CA3C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8001F960 0001CA40  90 0D 88 F0 */	stw r0, alist@sda21(r13)
/* 8001F964 0001CA44  4E 80 00 20 */	blr
.endfn xFFXAlloc__Fv

# xFFXFree(xFFX*)
.fn xFFXFree__FP4xFFX, global
/* 8001F968 0001CA48  80 0D 88 F0 */	lwz r0, alist@sda21(r13)
/* 8001F96C 0001CA4C  90 03 00 0C */	stw r0, 0xc(r3)
/* 8001F970 0001CA50  90 6D 88 F0 */	stw r3, alist@sda21(r13)
/* 8001F974 0001CA54  4E 80 00 20 */	blr
.endfn xFFXFree__FP4xFFX

# xFFXTurnOn(xFFX*)
.fn xFFXTurnOn__FP4xFFX, global
/* 8001F978 0001CA58  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8001F97C 0001CA5C  60 00 00 01 */	ori r0, r0, 0x1
/* 8001F980 0001CA60  90 03 00 00 */	stw r0, 0x0(r3)
/* 8001F984 0001CA64  4E 80 00 20 */	blr
.endfn xFFXTurnOn__FP4xFFX

# xFFXTurnOff(xFFX*)
.fn xFFXTurnOff__FP4xFFX, global
/* 8001F988 0001CA68  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8001F98C 0001CA6C  54 00 00 3C */	clrrwi r0, r0, 1
/* 8001F990 0001CA70  90 03 00 00 */	stw r0, 0x0(r3)
/* 8001F994 0001CA74  4E 80 00 20 */	blr
.endfn xFFXTurnOff__FP4xFFX

# xFFXAddEffect(xEnt*, xFFX*)
.fn xFFXAddEffect__FP4xEntP4xFFX, global
/* 8001F998 0001CA78  80 03 00 B4 */	lwz r0, 0xb4(r3)
/* 8001F99C 0001CA7C  90 04 00 0C */	stw r0, 0xc(r4)
/* 8001F9A0 0001CA80  80 04 00 00 */	lwz r0, 0x0(r4)
/* 8001F9A4 0001CA84  60 00 00 01 */	ori r0, r0, 0x1
/* 8001F9A8 0001CA88  90 04 00 00 */	stw r0, 0x0(r4)
/* 8001F9AC 0001CA8C  90 83 00 B4 */	stw r4, 0xb4(r3)
/* 8001F9B0 0001CA90  88 83 00 1F */	lbz r4, 0x1f(r3)
/* 8001F9B4 0001CA94  38 04 00 01 */	addi r0, r4, 0x1
/* 8001F9B8 0001CA98  98 03 00 1F */	stb r0, 0x1f(r3)
/* 8001F9BC 0001CA9C  7C 83 23 78 */	mr r3, r4
/* 8001F9C0 0001CAA0  4E 80 00 20 */	blr
.endfn xFFXAddEffect__FP4xEntP4xFFX

# xFFXAddEffect(xEnt*, void (*)(xEnt*, xScene*, float, void*), void*)
.fn xFFXAddEffect__FP4xEntPFP4xEntP6xScenefPv_vPv, global
/* 8001F9C4 0001CAA4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8001F9C8 0001CAA8  7C 08 02 A6 */	mflr r0
/* 8001F9CC 0001CAAC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8001F9D0 0001CAB0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8001F9D4 0001CAB4  7C BF 2B 78 */	mr r31, r5
/* 8001F9D8 0001CAB8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8001F9DC 0001CABC  7C 9E 23 78 */	mr r30, r4
/* 8001F9E0 0001CAC0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8001F9E4 0001CAC4  7C 7D 1B 78 */	mr r29, r3
/* 8001F9E8 0001CAC8  4B FF FF 61 */	bl xFFXAlloc__Fv
/* 8001F9EC 0001CACC  7C 64 1B 79 */	mr. r4, r3
/* 8001F9F0 0001CAD0  40 82 00 0C */	bne .L_8001F9FC
/* 8001F9F4 0001CAD4  38 60 FF FF */	li r3, -0x1
/* 8001F9F8 0001CAD8  48 00 00 14 */	b .L_8001FA0C
.L_8001F9FC:
/* 8001F9FC 0001CADC  93 C4 00 04 */	stw r30, 0x4(r4)
/* 8001FA00 0001CAE0  7F A3 EB 78 */	mr r3, r29
/* 8001FA04 0001CAE4  93 E4 00 08 */	stw r31, 0x8(r4)
/* 8001FA08 0001CAE8  4B FF FF 91 */	bl xFFXAddEffect__FP4xEntP4xFFX
.L_8001FA0C:
/* 8001FA0C 0001CAEC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8001FA10 0001CAF0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8001FA14 0001CAF4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8001FA18 0001CAF8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8001FA1C 0001CAFC  7C 08 03 A6 */	mtlr r0
/* 8001FA20 0001CB00  38 21 00 20 */	addi r1, r1, 0x20
/* 8001FA24 0001CB04  4E 80 00 20 */	blr
.endfn xFFXAddEffect__FP4xEntPFP4xEntP6xScenefPv_vPv

# xFFXRemoveEffectByFData(xEnt*, void*)
.fn xFFXRemoveEffectByFData__FP4xEntPv, global
/* 8001FA28 0001CB08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001FA2C 0001CB0C  7C 08 02 A6 */	mflr r0
/* 8001FA30 0001CB10  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001FA34 0001CB14  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8001FA38 0001CB18  3B E3 00 B4 */	addi r31, r3, 0xb4
/* 8001FA3C 0001CB1C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8001FA40 0001CB20  48 00 00 38 */	b .L_8001FA78
.L_8001FA44:
/* 8001FA44 0001CB24  80 05 00 08 */	lwz r0, 0x8(r5)
/* 8001FA48 0001CB28  7C 04 00 40 */	cmplw r4, r0
/* 8001FA4C 0001CB2C  40 82 00 28 */	bne .L_8001FA74
/* 8001FA50 0001CB30  88 83 00 1F */	lbz r4, 0x1f(r3)
/* 8001FA54 0001CB34  83 C5 00 0C */	lwz r30, 0xc(r5)
/* 8001FA58 0001CB38  38 04 FF FF */	addi r0, r4, -0x1
/* 8001FA5C 0001CB3C  98 03 00 1F */	stb r0, 0x1f(r3)
/* 8001FA60 0001CB40  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 8001FA64 0001CB44  4B FF FF 05 */	bl xFFXFree__FP4xFFX
/* 8001FA68 0001CB48  93 DF 00 00 */	stw r30, 0x0(r31)
/* 8001FA6C 0001CB4C  38 60 00 01 */	li r3, 0x1
/* 8001FA70 0001CB50  48 00 00 18 */	b .L_8001FA88
.L_8001FA74:
/* 8001FA74 0001CB54  3B E5 00 0C */	addi r31, r5, 0xc
.L_8001FA78:
/* 8001FA78 0001CB58  80 BF 00 00 */	lwz r5, 0x0(r31)
/* 8001FA7C 0001CB5C  28 05 00 00 */	cmplwi r5, 0x0
/* 8001FA80 0001CB60  40 82 FF C4 */	bne .L_8001FA44
/* 8001FA84 0001CB64  38 60 00 00 */	li r3, 0x0
.L_8001FA88:
/* 8001FA88 0001CB68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001FA8C 0001CB6C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8001FA90 0001CB70  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8001FA94 0001CB74  7C 08 03 A6 */	mtlr r0
/* 8001FA98 0001CB78  38 21 00 10 */	addi r1, r1, 0x10
/* 8001FA9C 0001CB7C  4E 80 00 20 */	blr
.endfn xFFXRemoveEffectByFData__FP4xEntPv

# xFFXApplyOne(xFFX*, xEnt*, xScene*, float)
.fn xFFXApplyOne__FP4xFFXP4xEntP6xScenef, local
/* 8001FAA0 0001CB80  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8001FAA4 0001CB84  7C 08 02 A6 */	mflr r0
/* 8001FAA8 0001CB88  90 01 00 24 */	stw r0, 0x24(r1)
/* 8001FAAC 0001CB8C  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8001FAB0 0001CB90  FF E0 08 90 */	fmr f31, f1
/* 8001FAB4 0001CB94  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8001FAB8 0001CB98  7C BF 2B 78 */	mr r31, r5
/* 8001FABC 0001CB9C  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8001FAC0 0001CBA0  7C 9E 23 78 */	mr r30, r4
/* 8001FAC4 0001CBA4  93 A1 00 0C */	stw r29, 0xc(r1)
/* 8001FAC8 0001CBA8  7C 7D 1B 78 */	mr r29, r3
/* 8001FACC 0001CBAC  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8001FAD0 0001CBB0  28 03 00 00 */	cmplwi r3, 0x0
/* 8001FAD4 0001CBB4  41 82 00 08 */	beq .L_8001FADC
/* 8001FAD8 0001CBB8  4B FF FF C9 */	bl xFFXApplyOne__FP4xFFXP4xEntP6xScenef
.L_8001FADC:
/* 8001FADC 0001CBBC  80 1D 00 00 */	lwz r0, 0x0(r29)
/* 8001FAE0 0001CBC0  54 00 07 FF */	clrlwi. r0, r0, 31
/* 8001FAE4 0001CBC4  41 82 00 20 */	beq .L_8001FB04
/* 8001FAE8 0001CBC8  81 9D 00 04 */	lwz r12, 0x4(r29)
/* 8001FAEC 0001CBCC  FC 20 F8 90 */	fmr f1, f31
/* 8001FAF0 0001CBD0  7F C3 F3 78 */	mr r3, r30
/* 8001FAF4 0001CBD4  7F E4 FB 78 */	mr r4, r31
/* 8001FAF8 0001CBD8  80 BD 00 08 */	lwz r5, 0x8(r29)
/* 8001FAFC 0001CBDC  7D 89 03 A6 */	mtctr r12
/* 8001FB00 0001CBE0  4E 80 04 21 */	bctrl
.L_8001FB04:
/* 8001FB04 0001CBE4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8001FB08 0001CBE8  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8001FB0C 0001CBEC  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8001FB10 0001CBF0  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 8001FB14 0001CBF4  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 8001FB18 0001CBF8  7C 08 03 A6 */	mtlr r0
/* 8001FB1C 0001CBFC  38 21 00 20 */	addi r1, r1, 0x20
/* 8001FB20 0001CC00  4E 80 00 20 */	blr
.endfn xFFXApplyOne__FP4xFFXP4xEntP6xScenef

# xFFXApply(xEnt*, xScene*, float)
.fn xFFXApply__FP4xEntP6xScenef, global
/* 8001FB24 0001CC04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001FB28 0001CC08  7C 08 02 A6 */	mflr r0
/* 8001FB2C 0001CC0C  7C 66 1B 78 */	mr r6, r3
/* 8001FB30 0001CC10  7C 85 23 78 */	mr r5, r4
/* 8001FB34 0001CC14  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001FB38 0001CC18  80 63 00 B4 */	lwz r3, 0xb4(r3)
/* 8001FB3C 0001CC1C  28 03 00 00 */	cmplwi r3, 0x0
/* 8001FB40 0001CC20  41 82 00 0C */	beq .L_8001FB4C
/* 8001FB44 0001CC24  7C C4 33 78 */	mr r4, r6
/* 8001FB48 0001CC28  4B FF FF 59 */	bl xFFXApplyOne__FP4xFFXP4xEntP6xScenef
.L_8001FB4C:
/* 8001FB4C 0001CC2C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001FB50 0001CC30  7C 08 03 A6 */	mtlr r0
/* 8001FB54 0001CC34  38 21 00 10 */	addi r1, r1, 0x10
/* 8001FB58 0001CC38  4E 80 00 20 */	blr
.endfn xFFXApply__FP4xEntP6xScenef

# xFFXShakeUpdateEnt(xEnt*, xScene*, float, void*)
.fn xFFXShakeUpdateEnt__FP4xEntP6xScenefPv, global
/* 8001FB5C 0001CC3C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8001FB60 0001CC40  7C 08 02 A6 */	mflr r0
/* 8001FB64 0001CC44  90 01 00 44 */	stw r0, 0x44(r1)
/* 8001FB68 0001CC48  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8001FB6C 0001CC4C  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 8001FB70 0001CC50  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8001FB74 0001CC54  F3 C1 00 28 */	psq_st f30, 0x28(r1), 0, qr0
/* 8001FB78 0001CC58  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8001FB7C 0001CC5C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8001FB80 0001CC60  C0 45 00 14 */	lfs f2, 0x14(r5)
/* 8001FB84 0001CC64  7C BF 2B 78 */	mr r31, r5
/* 8001FB88 0001CC68  C0 05 00 18 */	lfs f0, 0x18(r5)
/* 8001FB8C 0001CC6C  7C 7E 1B 78 */	mr r30, r3
/* 8001FB90 0001CC70  EF C2 08 2A */	fadds f30, f2, f1
/* 8001FB94 0001CC74  EC 20 07 B2 */	fmuls f1, f0, f30
/* 8001FB98 0001CC78  4B FE EC 19 */	bl xexp__Ff
/* 8001FB9C 0001CC7C  C0 1F 00 10 */	lfs f0, 0x10(r31)
/* 8001FBA0 0001CC80  FF E0 08 90 */	fmr f31, f1
/* 8001FBA4 0001CC84  EC 20 07 B2 */	fmuls f1, f0, f30
/* 8001FBA8 0001CC88  48 0A 52 A5 */	bl isin__Ff
/* 8001FBAC 0001CC8C  C0 42 82 C8 */	lfs f2, "@701"@sda21(r2)
/* 8001FBB0 0001CC90  EF E1 07 F2 */	fmuls f31, f1, f31
/* 8001FBB4 0001CC94  C0 3F 00 14 */	lfs f1, 0x14(r31)
/* 8001FBB8 0001CC98  FC 02 08 00 */	fcmpu cr0, f2, f1
/* 8001FBBC 0001CC9C  40 82 00 0C */	bne .L_8001FBC8
/* 8001FBC0 0001CCA0  D0 5F 00 1C */	stfs f2, 0x1c(r31)
/* 8001FBC4 0001CCA4  48 00 00 3C */	b .L_8001FC00
.L_8001FBC8:
/* 8001FBC8 0001CCA8  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 8001FBCC 0001CCAC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8001FBD0 0001CCB0  4C 41 13 82 */	cror eq, gt, eq
/* 8001FBD4 0001CCB4  40 82 00 2C */	bne .L_8001FC00
/* 8001FBD8 0001CCB8  C0 1F 00 1C */	lfs f0, 0x1c(r31)
/* 8001FBDC 0001CCBC  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8001FBE0 0001CCC0  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8001FBE4 0001CCC4  40 80 00 1C */	bge .L_8001FC00
/* 8001FBE8 0001CCC8  7F C3 F3 78 */	mr r3, r30
/* 8001FBEC 0001CCCC  7F E4 FB 78 */	mr r4, r31
/* 8001FBF0 0001CCD0  4B FF FE 39 */	bl xFFXRemoveEffectByFData__FP4xEntPv
/* 8001FBF4 0001CCD4  7F E3 FB 78 */	mr r3, r31
/* 8001FBF8 0001CCD8  48 00 01 09 */	bl xFFXShakeFree__FP14xFFXShakeState
/* 8001FBFC 0001CCDC  48 00 00 30 */	b .L_8001FC2C
.L_8001FC00:
/* 8001FC00 0001CCE0  C0 1F 00 1C */	lfs f0, 0x1c(r31)
/* 8001FC04 0001CCE4  7F E4 FB 78 */	mr r4, r31
/* 8001FC08 0001CCE8  38 61 00 08 */	addi r3, r1, 0x8
/* 8001FC0C 0001CCEC  EC 3F 00 28 */	fsubs f1, f31, f0
/* 8001FC10 0001CCF0  4B FE B4 81 */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 8001FC14 0001CCF4  80 7E 00 48 */	lwz r3, 0x48(r30)
/* 8001FC18 0001CCF8  38 81 00 08 */	addi r4, r1, 0x8
/* 8001FC1C 0001CCFC  38 63 00 30 */	addi r3, r3, 0x30
/* 8001FC20 0001CD00  4B FE EB 35 */	bl xVec3AddTo__FP5xVec3PC5xVec3
/* 8001FC24 0001CD04  D3 FF 00 1C */	stfs f31, 0x1c(r31)
/* 8001FC28 0001CD08  D3 DF 00 14 */	stfs f30, 0x14(r31)
.L_8001FC2C:
/* 8001FC2C 0001CD0C  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8001FC30 0001CD10  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8001FC34 0001CD14  E3 C1 00 28 */	psq_l f30, 0x28(r1), 0, qr0
/* 8001FC38 0001CD18  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8001FC3C 0001CD1C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8001FC40 0001CD20  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8001FC44 0001CD24  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8001FC48 0001CD28  7C 08 03 A6 */	mtlr r0
/* 8001FC4C 0001CD2C  38 21 00 40 */	addi r1, r1, 0x40
/* 8001FC50 0001CD30  4E 80 00 20 */	blr
.endfn xFFXShakeUpdateEnt__FP4xEntP6xScenefPv

# xFFXShakePoolInit(unsigned int)
.fn xFFXShakePoolInit__FUi, global
/* 8001FC54 0001CD34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001FC58 0001CD38  7C 08 02 A6 */	mflr r0
/* 8001FC5C 0001CD3C  1C 83 00 24 */	mulli r4, r3, 0x24
/* 8001FC60 0001CD40  38 A0 00 00 */	li r5, 0x0
/* 8001FC64 0001CD44  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001FC68 0001CD48  90 6D 88 F4 */	stw r3, shake_psize@sda21(r13)
/* 8001FC6C 0001CD4C  80 6D 89 E0 */	lwz r3, gActiveHeap@sda21(r13)
/* 8001FC70 0001CD50  48 01 3C D1 */	bl xMemAlloc__FUiUii
/* 8001FC74 0001CD54  90 6D 88 F8 */	stw r3, shake_pool@sda21(r13)
/* 8001FC78 0001CD58  38 00 00 00 */	li r0, 0x0
/* 8001FC7C 0001CD5C  38 C0 00 01 */	li r6, 0x1
/* 8001FC80 0001CD60  38 80 00 24 */	li r4, 0x24
/* 8001FC84 0001CD64  80 6D 88 F8 */	lwz r3, shake_pool@sda21(r13)
/* 8001FC88 0001CD68  90 03 00 20 */	stw r0, 0x20(r3)
/* 8001FC8C 0001CD6C  48 00 00 24 */	b .L_8001FCB0
.L_8001FC90:
/* 8001FC90 0001CD70  38 66 FF FF */	addi r3, r6, -0x1
/* 8001FC94 0001CD74  38 04 00 20 */	addi r0, r4, 0x20
/* 8001FC98 0001CD78  1C 63 00 24 */	mulli r3, r3, 0x24
/* 8001FC9C 0001CD7C  80 AD 88 F8 */	lwz r5, shake_pool@sda21(r13)
/* 8001FCA0 0001CD80  38 84 00 24 */	addi r4, r4, 0x24
/* 8001FCA4 0001CD84  38 C6 00 01 */	addi r6, r6, 0x1
/* 8001FCA8 0001CD88  7C 65 1A 14 */	add r3, r5, r3
/* 8001FCAC 0001CD8C  7C 65 01 2E */	stwx r3, r5, r0
.L_8001FCB0:
/* 8001FCB0 0001CD90  80 6D 88 F4 */	lwz r3, shake_psize@sda21(r13)
/* 8001FCB4 0001CD94  7C 06 18 40 */	cmplw r6, r3
/* 8001FCB8 0001CD98  41 80 FF D8 */	blt .L_8001FC90
/* 8001FCBC 0001CD9C  38 03 FF FF */	addi r0, r3, -0x1
/* 8001FCC0 0001CDA0  80 6D 88 F8 */	lwz r3, shake_pool@sda21(r13)
/* 8001FCC4 0001CDA4  1C 00 00 24 */	mulli r0, r0, 0x24
/* 8001FCC8 0001CDA8  7C 03 02 14 */	add r0, r3, r0
/* 8001FCCC 0001CDAC  90 0D 88 FC */	stw r0, shake_alist@sda21(r13)
/* 8001FCD0 0001CDB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001FCD4 0001CDB4  7C 08 03 A6 */	mtlr r0
/* 8001FCD8 0001CDB8  38 21 00 10 */	addi r1, r1, 0x10
/* 8001FCDC 0001CDBC  4E 80 00 20 */	blr
.endfn xFFXShakePoolInit__FUi

# xFFXShakeAlloc()
.fn xFFXShakeAlloc__Fv, global
/* 8001FCE0 0001CDC0  80 6D 88 FC */	lwz r3, shake_alist@sda21(r13)
/* 8001FCE4 0001CDC4  28 03 00 00 */	cmplwi r3, 0x0
/* 8001FCE8 0001CDC8  40 82 00 0C */	bne .L_8001FCF4
/* 8001FCEC 0001CDCC  38 60 00 00 */	li r3, 0x0
/* 8001FCF0 0001CDD0  4E 80 00 20 */	blr
.L_8001FCF4:
/* 8001FCF4 0001CDD4  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8001FCF8 0001CDD8  90 0D 88 FC */	stw r0, shake_alist@sda21(r13)
/* 8001FCFC 0001CDDC  4E 80 00 20 */	blr
.endfn xFFXShakeAlloc__Fv

# xFFXShakeFree(xFFXShakeState*)
.fn xFFXShakeFree__FP14xFFXShakeState, global
/* 8001FD00 0001CDE0  80 0D 88 FC */	lwz r0, shake_alist@sda21(r13)
/* 8001FD04 0001CDE4  90 03 00 20 */	stw r0, 0x20(r3)
/* 8001FD08 0001CDE8  90 6D 88 FC */	stw r3, shake_alist@sda21(r13)
/* 8001FD0C 0001CDEC  4E 80 00 20 */	blr
.endfn xFFXShakeFree__FP14xFFXShakeState

# xFFXRotMatchPoolInit(unsigned int)
.fn xFFXRotMatchPoolInit__FUi, global
/* 8001FD10 0001CDF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001FD14 0001CDF4  7C 08 02 A6 */	mflr r0
/* 8001FD18 0001CDF8  1C 83 00 44 */	mulli r4, r3, 0x44
/* 8001FD1C 0001CDFC  38 A0 00 00 */	li r5, 0x0
/* 8001FD20 0001CE00  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001FD24 0001CE04  90 6D 89 00 */	stw r3, rot_match_psize@sda21(r13)
/* 8001FD28 0001CE08  80 6D 89 E0 */	lwz r3, gActiveHeap@sda21(r13)
/* 8001FD2C 0001CE0C  48 01 3C 15 */	bl xMemAlloc__FUiUii
/* 8001FD30 0001CE10  90 6D 89 04 */	stw r3, rot_match_pool@sda21(r13)
/* 8001FD34 0001CE14  38 00 00 00 */	li r0, 0x0
/* 8001FD38 0001CE18  38 C0 00 01 */	li r6, 0x1
/* 8001FD3C 0001CE1C  38 80 00 44 */	li r4, 0x44
/* 8001FD40 0001CE20  80 6D 89 04 */	lwz r3, rot_match_pool@sda21(r13)
/* 8001FD44 0001CE24  90 03 00 40 */	stw r0, 0x40(r3)
/* 8001FD48 0001CE28  48 00 00 24 */	b .L_8001FD6C
.L_8001FD4C:
/* 8001FD4C 0001CE2C  38 66 FF FF */	addi r3, r6, -0x1
/* 8001FD50 0001CE30  38 04 00 40 */	addi r0, r4, 0x40
/* 8001FD54 0001CE34  1C 63 00 44 */	mulli r3, r3, 0x44
/* 8001FD58 0001CE38  80 AD 89 04 */	lwz r5, rot_match_pool@sda21(r13)
/* 8001FD5C 0001CE3C  38 84 00 44 */	addi r4, r4, 0x44
/* 8001FD60 0001CE40  38 C6 00 01 */	addi r6, r6, 0x1
/* 8001FD64 0001CE44  7C 65 1A 14 */	add r3, r5, r3
/* 8001FD68 0001CE48  7C 65 01 2E */	stwx r3, r5, r0
.L_8001FD6C:
/* 8001FD6C 0001CE4C  80 6D 89 00 */	lwz r3, rot_match_psize@sda21(r13)
/* 8001FD70 0001CE50  7C 06 18 40 */	cmplw r6, r3
/* 8001FD74 0001CE54  41 80 FF D8 */	blt .L_8001FD4C
/* 8001FD78 0001CE58  38 03 FF FF */	addi r0, r3, -0x1
/* 8001FD7C 0001CE5C  80 6D 89 04 */	lwz r3, rot_match_pool@sda21(r13)
/* 8001FD80 0001CE60  1C 00 00 44 */	mulli r0, r0, 0x44
/* 8001FD84 0001CE64  7C 03 02 14 */	add r0, r3, r0
/* 8001FD88 0001CE68  90 0D 89 08 */	stw r0, rot_match_alist@sda21(r13)
/* 8001FD8C 0001CE6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001FD90 0001CE70  7C 08 03 A6 */	mtlr r0
/* 8001FD94 0001CE74  38 21 00 10 */	addi r1, r1, 0x10
/* 8001FD98 0001CE78  4E 80 00 20 */	blr
.endfn xFFXRotMatchPoolInit__FUi

# xFFXRotMatchAlloc()
.fn xFFXRotMatchAlloc__Fv, global
/* 8001FD9C 0001CE7C  80 6D 89 08 */	lwz r3, rot_match_alist@sda21(r13)
/* 8001FDA0 0001CE80  28 03 00 00 */	cmplwi r3, 0x0
/* 8001FDA4 0001CE84  40 82 00 0C */	bne .L_8001FDB0
/* 8001FDA8 0001CE88  38 60 00 00 */	li r3, 0x0
/* 8001FDAC 0001CE8C  4E 80 00 20 */	blr
.L_8001FDB0:
/* 8001FDB0 0001CE90  80 03 00 40 */	lwz r0, 0x40(r3)
/* 8001FDB4 0001CE94  90 0D 89 08 */	stw r0, rot_match_alist@sda21(r13)
/* 8001FDB8 0001CE98  4E 80 00 20 */	blr
.endfn xFFXRotMatchAlloc__Fv

# 0x803CB1E8 - 0x803CB210
.section .sbss, "wa", @nobits
.balign 8

.obj psize, local
	.skip 0x4
.endobj psize

.obj pool, local
	.skip 0x4
.endobj pool

.obj alist, local
	.skip 0x4
.endobj alist

.obj shake_psize, local
	.skip 0x4
.endobj shake_psize

.obj shake_pool, local
	.skip 0x4
.endobj shake_pool

.obj shake_alist, local
	.skip 0x4
.endobj shake_alist

.obj rot_match_psize, local
	.skip 0x4
.endobj rot_match_psize

.obj rot_match_pool, local
	.skip 0x4
.endobj rot_match_pool

.obj rot_match_alist, local
	.skip 0x4
.endobj rot_match_alist
	.skip 0x4

# 0x803CCC48 - 0x803CCC50
.section .sdata2, "a"
.balign 8

.obj "@701", local
	.4byte 0x00000000
.endobj "@701"
	.4byte 0x00000000
