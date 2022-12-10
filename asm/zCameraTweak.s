.include "macros.inc"
.file "zCameraTweak.cpp"

# 0x8017EEA4 - 0x8017F5E0
.text
.balign 4

# zCameraTweak_LookPreCalc(zCamTweakLook*, float, float, float)
.fn zCameraTweak_LookPreCalc__FP13zCamTweakLookfff, local
/* 8017EEA4 0017BF84  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8017EEA8 0017BF88  7C 08 02 A6 */	mflr r0
/* 8017EEAC 0017BF8C  90 01 00 44 */	stw r0, 0x44(r1)
/* 8017EEB0 0017BF90  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8017EEB4 0017BF94  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 8017EEB8 0017BF98  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8017EEBC 0017BF9C  F3 C1 00 28 */	psq_st f30, 0x28(r1), 0, qr0
/* 8017EEC0 0017BFA0  DB A1 00 10 */	stfd f29, 0x10(r1)
/* 8017EEC4 0017BFA4  F3 A1 00 18 */	psq_st f29, 0x18(r1), 0, qr0
/* 8017EEC8 0017BFA8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017EECC 0017BFAC  FF E0 18 90 */	fmr f31, f3
/* 8017EED0 0017BFB0  7C 7F 1B 78 */	mr r31, r3
/* 8017EED4 0017BFB4  FF A0 08 90 */	fmr f29, f1
/* 8017EED8 0017BFB8  FF C0 10 90 */	fmr f30, f2
/* 8017EEDC 0017BFBC  FC 20 F8 90 */	fmr f1, f31
/* 8017EEE0 0017BFC0  4B F4 5F F5 */	bl itan__Ff
/* 8017EEE4 0017BFC4  EC 3D 00 72 */	fmuls f1, f29, f1
/* 8017EEE8 0017BFC8  EC 1D 07 72 */	fmuls f0, f29, f29
/* 8017EEEC 0017BFCC  EC 5E 08 28 */	fsubs f2, f30, f1
/* 8017EEF0 0017BFD0  EC 21 00 7A */	fmadds f1, f1, f1, f0
/* 8017EEF4 0017BFD4  D0 5F 00 00 */	stfs f2, 0x0(r31)
/* 8017EEF8 0017BFD8  4B E8 B9 05 */	bl xsqrt__Ff
/* 8017EEFC 0017BFDC  D0 3F 00 04 */	stfs f1, 0x4(r31)
/* 8017EF00 0017BFE0  D3 FF 00 08 */	stfs f31, 0x8(r31)
/* 8017EF04 0017BFE4  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8017EF08 0017BFE8  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8017EF0C 0017BFEC  E3 C1 00 28 */	psq_l f30, 0x28(r1), 0, qr0
/* 8017EF10 0017BFF0  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8017EF14 0017BFF4  E3 A1 00 18 */	psq_l f29, 0x18(r1), 0, qr0
/* 8017EF18 0017BFF8  CB A1 00 10 */	lfd f29, 0x10(r1)
/* 8017EF1C 0017BFFC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8017EF20 0017C000  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017EF24 0017C004  7C 08 03 A6 */	mtlr r0
/* 8017EF28 0017C008  38 21 00 40 */	addi r1, r1, 0x40
/* 8017EF2C 0017C00C  4E 80 00 20 */	blr
.endfn zCameraTweak_LookPreCalc__FP13zCamTweakLookfff

# zCameraTweakGlobal_Init()
.fn zCameraTweakGlobal_Init__Fv, global
/* 8017EF30 0017C010  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017EF34 0017C014  7C 08 02 A6 */	mflr r0
/* 8017EF38 0017C018  3C 60 80 33 */	lis r3, zcam_neartweak@ha
/* 8017EF3C 0017C01C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017EF40 0017C020  38 63 B5 68 */	addi r3, r3, zcam_neartweak@l
/* 8017EF44 0017C024  C0 2D 80 D0 */	lfs f1, zcam_near_d@sda21(r13)
/* 8017EF48 0017C028  C0 4D 80 D4 */	lfs f2, zcam_near_h@sda21(r13)
/* 8017EF4C 0017C02C  C0 6D 80 D8 */	lfs f3, zcam_near_pitch@sda21(r13)
/* 8017EF50 0017C030  4B FF FF 55 */	bl zCameraTweak_LookPreCalc__FP13zCamTweakLookfff
/* 8017EF54 0017C034  3C 60 80 33 */	lis r3, zcam_fartweak@ha
/* 8017EF58 0017C038  C0 2D 80 DC */	lfs f1, zcam_far_d@sda21(r13)
/* 8017EF5C 0017C03C  C0 4D 80 E0 */	lfs f2, zcam_far_h@sda21(r13)
/* 8017EF60 0017C040  38 63 B5 74 */	addi r3, r3, zcam_fartweak@l
/* 8017EF64 0017C044  C0 6D 80 E4 */	lfs f3, zcam_far_pitch@sda21(r13)
/* 8017EF68 0017C048  4B FF FF 3D */	bl zCameraTweak_LookPreCalc__FP13zCamTweakLookfff
/* 8017EF6C 0017C04C  48 00 03 69 */	bl zCameraTweakGlobal_Reset__Fv
/* 8017EF70 0017C050  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017EF74 0017C054  7C 08 03 A6 */	mtlr r0
/* 8017EF78 0017C058  38 21 00 10 */	addi r1, r1, 0x10
/* 8017EF7C 0017C05C  4E 80 00 20 */	blr
.endfn zCameraTweakGlobal_Init__Fv

# zCameraTweakGlobal_Add(unsigned int, float, float, float, float)
.fn zCameraTweakGlobal_Add__FUiffff, global
/* 8017EF80 0017C060  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8017EF84 0017C064  7C 08 02 A6 */	mflr r0
/* 8017EF88 0017C068  90 01 00 64 */	stw r0, 0x64(r1)
/* 8017EF8C 0017C06C  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8017EF90 0017C070  F3 E1 00 58 */	psq_st f31, 0x58(r1), 0, qr0
/* 8017EF94 0017C074  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 8017EF98 0017C078  F3 C1 00 48 */	psq_st f30, 0x48(r1), 0, qr0
/* 8017EF9C 0017C07C  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 8017EFA0 0017C080  F3 A1 00 38 */	psq_st f29, 0x38(r1), 0, qr0
/* 8017EFA4 0017C084  DB 81 00 20 */	stfd f28, 0x20(r1)
/* 8017EFA8 0017C088  F3 81 00 28 */	psq_st f28, 0x28(r1), 0, qr0
/* 8017EFAC 0017C08C  BF 41 00 08 */	stmw r26, 0x8(r1)
/* 8017EFB0 0017C090  3C 80 80 33 */	lis r4, sCamTweakList@ha
/* 8017EFB4 0017C094  80 AD 97 B8 */	lwz r5, sCamTweakCount@sda21(r13)
/* 8017EFB8 0017C098  38 84 B4 C8 */	addi r4, r4, sCamTweakList@l
/* 8017EFBC 0017C09C  7C 7E 1B 78 */	mr r30, r3
/* 8017EFC0 0017C0A0  FF 80 08 90 */	fmr f28, f1
/* 8017EFC4 0017C0A4  7C 83 23 78 */	mr r3, r4
/* 8017EFC8 0017C0A8  FF A0 10 90 */	fmr f29, f2
/* 8017EFCC 0017C0AC  FF C0 18 90 */	fmr f30, f3
/* 8017EFD0 0017C0B0  FF E0 20 90 */	fmr f31, f4
/* 8017EFD4 0017C0B4  7C A9 03 A6 */	mtctr r5
/* 8017EFD8 0017C0B8  2C 05 00 00 */	cmpwi r5, 0x0
/* 8017EFDC 0017C0BC  40 81 00 18 */	ble .L_8017EFF4
.L_8017EFE0:
/* 8017EFE0 0017C0C0  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8017EFE4 0017C0C4  7C 1E 00 40 */	cmplw r30, r0
/* 8017EFE8 0017C0C8  41 82 01 54 */	beq .L_8017F13C
/* 8017EFEC 0017C0CC  38 63 00 14 */	addi r3, r3, 0x14
/* 8017EFF0 0017C0D0  42 00 FF F0 */	bdnz .L_8017EFE0
.L_8017EFF4:
/* 8017EFF4 0017C0D4  3B E0 00 00 */	li r31, 0x0
/* 8017EFF8 0017C0D8  7C A9 03 A6 */	mtctr r5
/* 8017EFFC 0017C0DC  2C 05 00 00 */	cmpwi r5, 0x0
/* 8017F000 0017C0E0  40 81 00 64 */	ble .L_8017F064
.L_8017F004:
/* 8017F004 0017C0E4  C0 04 00 04 */	lfs f0, 0x4(r4)
/* 8017F008 0017C0E8  FC 1C 00 40 */	fcmpo cr0, f28, f0
/* 8017F00C 0017C0EC  4C 41 13 82 */	cror eq, gt, eq
/* 8017F010 0017C0F0  40 82 00 48 */	bne .L_8017F058
/* 8017F014 0017C0F4  1C 05 00 14 */	mulli r0, r5, 0x14
/* 8017F018 0017C0F8  3C 60 80 33 */	lis r3, sCamTweakList@ha
/* 8017F01C 0017C0FC  7C BA 2B 78 */	mr r26, r5
/* 8017F020 0017C100  3B 83 B4 C8 */	addi r28, r3, sCamTweakList@l
/* 8017F024 0017C104  7F 7C 02 14 */	add r27, r28, r0
/* 8017F028 0017C108  3B BF 00 01 */	addi r29, r31, 0x1
/* 8017F02C 0017C10C  48 00 00 20 */	b .L_8017F04C
.L_8017F030:
/* 8017F030 0017C110  38 1A FF FF */	addi r0, r26, -0x1
/* 8017F034 0017C114  7F 63 DB 78 */	mr r3, r27
/* 8017F038 0017C118  1C 00 00 14 */	mulli r0, r0, 0x14
/* 8017F03C 0017C11C  7C 9C 02 14 */	add r4, r28, r0
/* 8017F040 0017C120  48 00 01 31 */	bl __as__9zCamTweakFRC9zCamTweak
/* 8017F044 0017C124  3B 7B FF EC */	addi r27, r27, -0x14
/* 8017F048 0017C128  3B 5A FF FF */	addi r26, r26, -0x1
.L_8017F04C:
/* 8017F04C 0017C12C  7C 1A E8 00 */	cmpw r26, r29
/* 8017F050 0017C130  40 80 FF E0 */	bge .L_8017F030
/* 8017F054 0017C134  48 00 00 10 */	b .L_8017F064
.L_8017F058:
/* 8017F058 0017C138  38 84 00 14 */	addi r4, r4, 0x14
/* 8017F05C 0017C13C  3B FF 00 01 */	addi r31, r31, 0x1
/* 8017F060 0017C140  42 00 FF A4 */	bdnz .L_8017F004
.L_8017F064:
/* 8017F064 0017C144  1C BF 00 14 */	mulli r5, r31, 0x14
/* 8017F068 0017C148  3C 60 80 33 */	lis r3, sCamTweakList@ha
/* 8017F06C 0017C14C  38 63 B4 C8 */	addi r3, r3, sCamTweakList@l
/* 8017F070 0017C150  7F C3 29 2E */	stwx r30, r3, r5
/* 8017F074 0017C154  7C 63 2A 14 */	add r3, r3, r5
/* 8017F078 0017C158  D3 83 00 04 */	stfs f28, 0x4(r3)
/* 8017F07C 0017C15C  C0 02 AE 50 */	lfs f0, "@536"@sda21(r2)
/* 8017F080 0017C160  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 8017F084 0017C164  40 81 00 08 */	ble .L_8017F08C
/* 8017F088 0017C168  FC 00 E8 90 */	fmr f0, f29
.L_8017F08C:
/* 8017F08C 0017C16C  3C 60 80 33 */	lis r3, sCamTweakList@ha
/* 8017F090 0017C170  38 03 B4 C8 */	addi r0, r3, sCamTweakList@l
/* 8017F094 0017C174  7C 60 2A 14 */	add r3, r0, r5
/* 8017F098 0017C178  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 8017F09C 0017C17C  C0 22 AE 54 */	lfs f1, "@537"@sda21(r2)
/* 8017F0A0 0017C180  C0 02 AE 58 */	lfs f0, "@538"@sda21(r2)
/* 8017F0A4 0017C184  EC 21 07 B2 */	fmuls f1, f1, f30
/* 8017F0A8 0017C188  EC 01 00 24 */	fdivs f0, f1, f0
/* 8017F0AC 0017C18C  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 8017F0B0 0017C190  C0 02 AE 50 */	lfs f0, "@536"@sda21(r2)
/* 8017F0B4 0017C194  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8017F0B8 0017C198  40 81 00 08 */	ble .L_8017F0C0
/* 8017F0BC 0017C19C  FC 00 F8 90 */	fmr f0, f31
.L_8017F0C0:
/* 8017F0C0 0017C1A0  3C 60 80 33 */	lis r3, sCamTweakList@ha
/* 8017F0C4 0017C1A4  2C 1F 00 00 */	cmpwi r31, 0x0
/* 8017F0C8 0017C1A8  38 83 B4 C8 */	addi r4, r3, sCamTweakList@l
/* 8017F0CC 0017C1AC  7C 64 2A 14 */	add r3, r4, r5
/* 8017F0D0 0017C1B0  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 8017F0D4 0017C1B4  80 6D 97 B8 */	lwz r3, sCamTweakCount@sda21(r13)
/* 8017F0D8 0017C1B8  38 03 00 01 */	addi r0, r3, 0x1
/* 8017F0DC 0017C1BC  90 0D 97 B8 */	stw r0, sCamTweakCount@sda21(r13)
/* 8017F0E0 0017C1C0  40 82 00 5C */	bne .L_8017F13C
/* 8017F0E4 0017C1C4  C0 8D 97 BC */	lfs f4, sCamTweakLerp@sda21(r13)
/* 8017F0E8 0017C1C8  38 6D 97 C4 */	addi r3, r13, sCamTweakPitch@sda21
/* 8017F0EC 0017C1CC  C0 42 AE 4C */	lfs f2, "@464"@sda21(r2)
/* 8017F0F0 0017C1D0  38 AD 97 CC */	addi r5, r13, sCamTweakDistMult@sda21
/* 8017F0F4 0017C1D4  C0 0D 97 C4 */	lfs f0, sCamTweakPitch@sda21(r13)
/* 8017F0F8 0017C1D8  EC A2 20 28 */	fsubs f5, f2, f4
/* 8017F0FC 0017C1DC  C0 63 00 04 */	lfs f3, 0x4(r3)
/* 8017F100 0017C1E0  C0 25 00 04 */	lfs f1, 0x4(r5)
/* 8017F104 0017C1E4  EC 00 01 72 */	fmuls f0, f0, f5
/* 8017F108 0017C1E8  EC 03 01 3A */	fmadds f0, f3, f4, f0
/* 8017F10C 0017C1EC  D0 03 00 04 */	stfs f0, 0x4(r3)
/* 8017F110 0017C1F0  C0 0D 97 CC */	lfs f0, sCamTweakDistMult@sda21(r13)
/* 8017F114 0017C1F4  EC 00 01 72 */	fmuls f0, f0, f5
/* 8017F118 0017C1F8  EC 01 01 3A */	fmadds f0, f1, f4, f0
/* 8017F11C 0017C1FC  D0 05 00 04 */	stfs f0, 0x4(r5)
/* 8017F120 0017C200  D0 4D 97 BC */	stfs f2, sCamTweakLerp@sda21(r13)
/* 8017F124 0017C204  C0 04 00 08 */	lfs f0, 0x8(r4)
/* 8017F128 0017C208  D0 0D 97 C0 */	stfs f0, sCamTweakTime@sda21(r13)
/* 8017F12C 0017C20C  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 8017F130 0017C210  D0 0D 97 C4 */	stfs f0, sCamTweakPitch@sda21(r13)
/* 8017F134 0017C214  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 8017F138 0017C218  D0 0D 97 CC */	stfs f0, sCamTweakDistMult@sda21(r13)
.L_8017F13C:
/* 8017F13C 0017C21C  E3 E1 00 58 */	psq_l f31, 0x58(r1), 0, qr0
/* 8017F140 0017C220  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8017F144 0017C224  E3 C1 00 48 */	psq_l f30, 0x48(r1), 0, qr0
/* 8017F148 0017C228  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 8017F14C 0017C22C  E3 A1 00 38 */	psq_l f29, 0x38(r1), 0, qr0
/* 8017F150 0017C230  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 8017F154 0017C234  E3 81 00 28 */	psq_l f28, 0x28(r1), 0, qr0
/* 8017F158 0017C238  CB 81 00 20 */	lfd f28, 0x20(r1)
/* 8017F15C 0017C23C  BB 41 00 08 */	lmw r26, 0x8(r1)
/* 8017F160 0017C240  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8017F164 0017C244  7C 08 03 A6 */	mtlr r0
/* 8017F168 0017C248  38 21 00 60 */	addi r1, r1, 0x60
/* 8017F16C 0017C24C  4E 80 00 20 */	blr
.endfn zCameraTweakGlobal_Add__FUiffff

# zCamTweak::operator=(const zCamTweak&)
.fn __as__9zCamTweakFRC9zCamTweak, weak
/* 8017F170 0017C250  80 04 00 00 */	lwz r0, 0x0(r4)
/* 8017F174 0017C254  C0 24 00 04 */	lfs f1, 0x4(r4)
/* 8017F178 0017C258  90 03 00 00 */	stw r0, 0x0(r3)
/* 8017F17C 0017C25C  C0 04 00 08 */	lfs f0, 0x8(r4)
/* 8017F180 0017C260  D0 23 00 04 */	stfs f1, 0x4(r3)
/* 8017F184 0017C264  C0 24 00 0C */	lfs f1, 0xc(r4)
/* 8017F188 0017C268  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 8017F18C 0017C26C  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 8017F190 0017C270  D0 23 00 0C */	stfs f1, 0xc(r3)
/* 8017F194 0017C274  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 8017F198 0017C278  4E 80 00 20 */	blr
.endfn __as__9zCamTweakFRC9zCamTweak

# zCameraTweakGlobal_Remove(unsigned int)
.fn zCameraTweakGlobal_Remove__FUi, global
/* 8017F19C 0017C27C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8017F1A0 0017C280  7C 08 02 A6 */	mflr r0
/* 8017F1A4 0017C284  3C 80 80 33 */	lis r4, sCamTweakList@ha
/* 8017F1A8 0017C288  38 E0 00 00 */	li r7, 0x0
/* 8017F1AC 0017C28C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017F1B0 0017C290  38 84 B4 C8 */	addi r4, r4, sCamTweakList@l
/* 8017F1B4 0017C294  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8017F1B8 0017C298  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8017F1BC 0017C29C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8017F1C0 0017C2A0  80 CD 97 B8 */	lwz r6, sCamTweakCount@sda21(r13)
/* 8017F1C4 0017C2A4  7C C9 03 A6 */	mtctr r6
/* 8017F1C8 0017C2A8  2C 06 00 00 */	cmpwi r6, 0x0
/* 8017F1CC 0017C2AC  40 81 00 EC */	ble .L_8017F2B8
.L_8017F1D0:
/* 8017F1D0 0017C2B0  80 04 00 00 */	lwz r0, 0x0(r4)
/* 8017F1D4 0017C2B4  7C 03 00 40 */	cmplw r3, r0
/* 8017F1D8 0017C2B8  40 82 00 D4 */	bne .L_8017F2AC
/* 8017F1DC 0017C2BC  2C 07 00 00 */	cmpwi r7, 0x0
/* 8017F1E0 0017C2C0  40 82 00 80 */	bne .L_8017F260
/* 8017F1E4 0017C2C4  C0 8D 97 BC */	lfs f4, sCamTweakLerp@sda21(r13)
/* 8017F1E8 0017C2C8  38 8D 97 C4 */	addi r4, r13, sCamTweakPitch@sda21
/* 8017F1EC 0017C2CC  C0 42 AE 4C */	lfs f2, "@464"@sda21(r2)
/* 8017F1F0 0017C2D0  38 AD 97 CC */	addi r5, r13, sCamTweakDistMult@sda21
/* 8017F1F4 0017C2D4  3C 60 80 33 */	lis r3, sCamTweakList@ha
/* 8017F1F8 0017C2D8  C0 0D 97 C4 */	lfs f0, sCamTweakPitch@sda21(r13)
/* 8017F1FC 0017C2DC  EC A2 20 28 */	fsubs f5, f2, f4
/* 8017F200 0017C2E0  C0 64 00 04 */	lfs f3, 0x4(r4)
/* 8017F204 0017C2E4  C0 25 00 04 */	lfs f1, 0x4(r5)
/* 8017F208 0017C2E8  38 63 B4 C8 */	addi r3, r3, sCamTweakList@l
/* 8017F20C 0017C2EC  2C 06 00 01 */	cmpwi r6, 0x1
/* 8017F210 0017C2F0  EC 00 01 72 */	fmuls f0, f0, f5
/* 8017F214 0017C2F4  EC 03 01 3A */	fmadds f0, f3, f4, f0
/* 8017F218 0017C2F8  D0 04 00 04 */	stfs f0, 0x4(r4)
/* 8017F21C 0017C2FC  C0 0D 97 CC */	lfs f0, sCamTweakDistMult@sda21(r13)
/* 8017F220 0017C300  EC 00 01 72 */	fmuls f0, f0, f5
/* 8017F224 0017C304  EC 01 01 3A */	fmadds f0, f1, f4, f0
/* 8017F228 0017C308  D0 05 00 04 */	stfs f0, 0x4(r5)
/* 8017F22C 0017C30C  D0 4D 97 BC */	stfs f2, sCamTweakLerp@sda21(r13)
/* 8017F230 0017C310  C0 03 00 08 */	lfs f0, 0x8(r3)
/* 8017F234 0017C314  D0 0D 97 C0 */	stfs f0, sCamTweakTime@sda21(r13)
/* 8017F238 0017C318  40 81 00 18 */	ble .L_8017F250
/* 8017F23C 0017C31C  C0 03 00 20 */	lfs f0, 0x20(r3)
/* 8017F240 0017C320  D0 0D 97 C4 */	stfs f0, sCamTweakPitch@sda21(r13)
/* 8017F244 0017C324  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 8017F248 0017C328  D0 0D 97 CC */	stfs f0, sCamTweakDistMult@sda21(r13)
/* 8017F24C 0017C32C  48 00 00 14 */	b .L_8017F260
.L_8017F250:
/* 8017F250 0017C330  C0 02 AE 48 */	lfs f0, "@463"@sda21(r2)
/* 8017F254 0017C334  D0 0D 97 C4 */	stfs f0, sCamTweakPitch@sda21(r13)
/* 8017F258 0017C338  C0 02 AE 4C */	lfs f0, "@464"@sda21(r2)
/* 8017F25C 0017C33C  D0 0D 97 CC */	stfs f0, sCamTweakDistMult@sda21(r13)
.L_8017F260:
/* 8017F260 0017C340  1C 07 00 14 */	mulli r0, r7, 0x14
/* 8017F264 0017C344  3C 60 80 33 */	lis r3, sCamTweakList@ha
/* 8017F268 0017C348  7C FD 3B 78 */	mr r29, r7
/* 8017F26C 0017C34C  3B E3 B4 C8 */	addi r31, r3, sCamTweakList@l
/* 8017F270 0017C350  7F DF 02 14 */	add r30, r31, r0
/* 8017F274 0017C354  48 00 00 20 */	b .L_8017F294
.L_8017F278:
/* 8017F278 0017C358  38 1D 00 01 */	addi r0, r29, 0x1
/* 8017F27C 0017C35C  7F C3 F3 78 */	mr r3, r30
/* 8017F280 0017C360  1C 00 00 14 */	mulli r0, r0, 0x14
/* 8017F284 0017C364  7C 9F 02 14 */	add r4, r31, r0
/* 8017F288 0017C368  4B FF FE E9 */	bl __as__9zCamTweakFRC9zCamTweak
/* 8017F28C 0017C36C  3B DE 00 14 */	addi r30, r30, 0x14
/* 8017F290 0017C370  3B BD 00 01 */	addi r29, r29, 0x1
.L_8017F294:
/* 8017F294 0017C374  80 6D 97 B8 */	lwz r3, sCamTweakCount@sda21(r13)
/* 8017F298 0017C378  38 03 FF FF */	addi r0, r3, -0x1
/* 8017F29C 0017C37C  7C 1D 00 00 */	cmpw r29, r0
/* 8017F2A0 0017C380  41 80 FF D8 */	blt .L_8017F278
/* 8017F2A4 0017C384  90 0D 97 B8 */	stw r0, sCamTweakCount@sda21(r13)
/* 8017F2A8 0017C388  48 00 00 10 */	b .L_8017F2B8
.L_8017F2AC:
/* 8017F2AC 0017C38C  38 84 00 14 */	addi r4, r4, 0x14
/* 8017F2B0 0017C390  38 E7 00 01 */	addi r7, r7, 0x1
/* 8017F2B4 0017C394  42 00 FF 1C */	bdnz .L_8017F1D0
.L_8017F2B8:
/* 8017F2B8 0017C398  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8017F2BC 0017C39C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8017F2C0 0017C3A0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8017F2C4 0017C3A4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8017F2C8 0017C3A8  7C 08 03 A6 */	mtlr r0
/* 8017F2CC 0017C3AC  38 21 00 20 */	addi r1, r1, 0x20
/* 8017F2D0 0017C3B0  4E 80 00 20 */	blr
.endfn zCameraTweakGlobal_Remove__FUi

# zCameraTweakGlobal_Reset()
.fn zCameraTweakGlobal_Reset__Fv, global
/* 8017F2D4 0017C3B4  38 00 00 00 */	li r0, 0x0
/* 8017F2D8 0017C3B8  38 8D 97 C4 */	addi r4, r13, sCamTweakPitch@sda21
/* 8017F2DC 0017C3BC  90 0D 97 B8 */	stw r0, sCamTweakCount@sda21(r13)
/* 8017F2E0 0017C3C0  38 6D 97 CC */	addi r3, r13, sCamTweakDistMult@sda21
/* 8017F2E4 0017C3C4  C0 02 AE 48 */	lfs f0, "@463"@sda21(r2)
/* 8017F2E8 0017C3C8  D0 0D 97 C4 */	stfs f0, sCamTweakPitch@sda21(r13)
/* 8017F2EC 0017C3CC  C0 02 AE 48 */	lfs f0, "@463"@sda21(r2)
/* 8017F2F0 0017C3D0  D0 04 00 04 */	stfs f0, 0x4(r4)
/* 8017F2F4 0017C3D4  C0 02 AE 4C */	lfs f0, "@464"@sda21(r2)
/* 8017F2F8 0017C3D8  D0 0D 97 CC */	stfs f0, sCamTweakDistMult@sda21(r13)
/* 8017F2FC 0017C3DC  C0 02 AE 4C */	lfs f0, "@464"@sda21(r2)
/* 8017F300 0017C3E0  D0 03 00 04 */	stfs f0, 0x4(r3)
/* 8017F304 0017C3E4  C0 02 AE 5C */	lfs f0, "@574"@sda21(r2)
/* 8017F308 0017C3E8  D0 0D 97 C0 */	stfs f0, sCamTweakTime@sda21(r13)
/* 8017F30C 0017C3EC  C0 02 AE 48 */	lfs f0, "@463"@sda21(r2)
/* 8017F310 0017C3F0  D0 0D 97 BC */	stfs f0, sCamTweakLerp@sda21(r13)
/* 8017F314 0017C3F4  C0 02 AE 48 */	lfs f0, "@463"@sda21(r2)
/* 8017F318 0017C3F8  D0 0D 97 D4 */	stfs f0, sCamTweakPitchCur@sda21(r13)
/* 8017F31C 0017C3FC  C0 02 AE 4C */	lfs f0, "@464"@sda21(r2)
/* 8017F320 0017C400  D0 0D 97 D8 */	stfs f0, sCamTweakDistMultCur@sda21(r13)
/* 8017F324 0017C404  4E 80 00 20 */	blr
.endfn zCameraTweakGlobal_Reset__Fv

# zCameraTweakGlobal_Update(float)
.fn zCameraTweakGlobal_Update__Ff, global
/* 8017F328 0017C408  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017F32C 0017C40C  7C 08 02 A6 */	mflr r0
/* 8017F330 0017C410  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017F334 0017C414  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017F338 0017C418  C0 0D 97 C0 */	lfs f0, sCamTweakTime@sda21(r13)
/* 8017F33C 0017C41C  C0 4D 97 BC */	lfs f2, sCamTweakLerp@sda21(r13)
/* 8017F340 0017C420  EC 01 00 24 */	fdivs f0, f1, f0
/* 8017F344 0017C424  EC 02 00 28 */	fsubs f0, f2, f0
/* 8017F348 0017C428  D0 0D 97 BC */	stfs f0, sCamTweakLerp@sda21(r13)
/* 8017F34C 0017C42C  C0 2D 97 BC */	lfs f1, sCamTweakLerp@sda21(r13)
/* 8017F350 0017C430  C0 02 AE 48 */	lfs f0, "@463"@sda21(r2)
/* 8017F354 0017C434  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8017F358 0017C438  40 80 00 08 */	bge .L_8017F360
/* 8017F35C 0017C43C  D0 0D 97 BC */	stfs f0, sCamTweakLerp@sda21(r13)
.L_8017F360:
/* 8017F360 0017C440  C0 6D 97 BC */	lfs f3, sCamTweakLerp@sda21(r13)
/* 8017F364 0017C444  38 8D 97 C4 */	addi r4, r13, sCamTweakPitch@sda21
/* 8017F368 0017C448  C0 02 AE 4C */	lfs f0, "@464"@sda21(r2)
/* 8017F36C 0017C44C  3C 60 80 33 */	lis r3, zcam_fartweak@ha
/* 8017F370 0017C450  3B E3 B5 74 */	addi r31, r3, zcam_fartweak@l
/* 8017F374 0017C454  C0 2D 97 C4 */	lfs f1, sCamTweakPitch@sda21(r13)
/* 8017F378 0017C458  EC 80 18 28 */	fsubs f4, f0, f3
/* 8017F37C 0017C45C  C0 44 00 04 */	lfs f2, 0x4(r4)
/* 8017F380 0017C460  38 6D 97 CC */	addi r3, r13, sCamTweakDistMult@sda21
/* 8017F384 0017C464  EC 01 01 32 */	fmuls f0, f1, f4
/* 8017F388 0017C468  EC 02 00 FA */	fmadds f0, f2, f3, f0
/* 8017F38C 0017C46C  D0 0D 97 D4 */	stfs f0, sCamTweakPitchCur@sda21(r13)
/* 8017F390 0017C470  C0 0D 97 CC */	lfs f0, sCamTweakDistMult@sda21(r13)
/* 8017F394 0017C474  C0 23 00 04 */	lfs f1, 0x4(r3)
/* 8017F398 0017C478  EC 00 01 32 */	fmuls f0, f0, f4
/* 8017F39C 0017C47C  EC 01 00 FA */	fmadds f0, f1, f3, f0
/* 8017F3A0 0017C480  D0 0D 97 D8 */	stfs f0, sCamTweakDistMultCur@sda21(r13)
/* 8017F3A4 0017C484  80 0D 8B 7C */	lwz r0, zcam_near@sda21(r13)
/* 8017F3A8 0017C488  2C 00 00 00 */	cmpwi r0, 0x0
/* 8017F3AC 0017C48C  41 82 00 0C */	beq .L_8017F3B8
/* 8017F3B0 0017C490  3C 60 80 33 */	lis r3, zcam_neartweak@ha
/* 8017F3B4 0017C494  3B E3 B5 68 */	addi r31, r3, zcam_neartweak@l
.L_8017F3B8:
/* 8017F3B8 0017C498  C0 3F 00 08 */	lfs f1, 0x8(r31)
/* 8017F3BC 0017C49C  C0 0D 97 D4 */	lfs f0, sCamTweakPitchCur@sda21(r13)
/* 8017F3C0 0017C4A0  EC 21 00 2A */	fadds f1, f1, f0
/* 8017F3C4 0017C4A4  4B F4 5A CD */	bl icos__Ff
/* 8017F3C8 0017C4A8  C0 4D 97 D8 */	lfs f2, sCamTweakDistMultCur@sda21(r13)
/* 8017F3CC 0017C4AC  C0 1F 00 04 */	lfs f0, 0x4(r31)
/* 8017F3D0 0017C4B0  EC 02 00 32 */	fmuls f0, f2, f0
/* 8017F3D4 0017C4B4  EC 00 00 72 */	fmuls f0, f0, f1
/* 8017F3D8 0017C4B8  D0 0D 97 DC */	stfs f0, sCamD@sda21(r13)
/* 8017F3DC 0017C4BC  C0 3F 00 08 */	lfs f1, 0x8(r31)
/* 8017F3E0 0017C4C0  C0 0D 97 D4 */	lfs f0, sCamTweakPitchCur@sda21(r13)
/* 8017F3E4 0017C4C4  EC 21 00 2A */	fadds f1, f1, f0
/* 8017F3E8 0017C4C8  4B F4 5A 65 */	bl isin__Ff
/* 8017F3EC 0017C4CC  C0 6D 97 D8 */	lfs f3, sCamTweakDistMultCur@sda21(r13)
/* 8017F3F0 0017C4D0  C0 5F 00 04 */	lfs f2, 0x4(r31)
/* 8017F3F4 0017C4D4  C0 1F 00 00 */	lfs f0, 0x0(r31)
/* 8017F3F8 0017C4D8  EC 43 00 B2 */	fmuls f2, f3, f2
/* 8017F3FC 0017C4DC  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8017F400 0017C4E0  D0 0D 97 E0 */	stfs f0, sCamH@sda21(r13)
/* 8017F404 0017C4E4  C0 3F 00 08 */	lfs f1, 0x8(r31)
/* 8017F408 0017C4E8  C0 0D 97 D4 */	lfs f0, sCamTweakPitchCur@sda21(r13)
/* 8017F40C 0017C4EC  EC 01 00 2A */	fadds f0, f1, f0
/* 8017F410 0017C4F0  D0 0D 97 E4 */	stfs f0, sCamPitch@sda21(r13)
/* 8017F414 0017C4F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017F418 0017C4F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017F41C 0017C4FC  7C 08 03 A6 */	mtlr r0
/* 8017F420 0017C500  38 21 00 10 */	addi r1, r1, 0x10
/* 8017F424 0017C504  4E 80 00 20 */	blr
.endfn zCameraTweakGlobal_Update__Ff

# zCameraTweakGlobal_GetD()
.fn zCameraTweakGlobal_GetD__Fv, global
/* 8017F428 0017C508  C0 2D 97 DC */	lfs f1, sCamD@sda21(r13)
/* 8017F42C 0017C50C  4E 80 00 20 */	blr
.endfn zCameraTweakGlobal_GetD__Fv

# zCameraTweakGlobal_GetH()
.fn zCameraTweakGlobal_GetH__Fv, global
/* 8017F430 0017C510  C0 2D 97 E0 */	lfs f1, sCamH@sda21(r13)
/* 8017F434 0017C514  4E 80 00 20 */	blr
.endfn zCameraTweakGlobal_GetH__Fv

# zCameraTweakGlobal_GetPitch()
.fn zCameraTweakGlobal_GetPitch__Fv, global
/* 8017F438 0017C518  C0 2D 97 E4 */	lfs f1, sCamPitch@sda21(r13)
/* 8017F43C 0017C51C  4E 80 00 20 */	blr
.endfn zCameraTweakGlobal_GetPitch__Fv

# zCameraTweak_Init(xBase&, xDynAsset&, unsigned long)
.fn zCameraTweak_Init__FR5xBaseR9xDynAssetUl, global
/* 8017F440 0017C520  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017F444 0017C524  7C 08 02 A6 */	mflr r0
/* 8017F448 0017C528  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017F44C 0017C52C  48 00 00 15 */	bl zCameraTweak_Init__FP12zCameraTweakP17CameraTweak_asset
/* 8017F450 0017C530  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017F454 0017C534  7C 08 03 A6 */	mtlr r0
/* 8017F458 0017C538  38 21 00 10 */	addi r1, r1, 0x10
/* 8017F45C 0017C53C  4E 80 00 20 */	blr
.endfn zCameraTweak_Init__FR5xBaseR9xDynAssetUl

# zCameraTweak_Init(zCameraTweak*, CameraTweak_asset*)
.fn zCameraTweak_Init__FP12zCameraTweakP17CameraTweak_asset, global
/* 8017F460 0017C540  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017F464 0017C544  7C 08 02 A6 */	mflr r0
/* 8017F468 0017C548  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017F46C 0017C54C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017F470 0017C550  7C 9F 23 78 */	mr r31, r4
/* 8017F474 0017C554  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8017F478 0017C558  7C 7E 1B 78 */	mr r30, r3
/* 8017F47C 0017C55C  4B E8 9F 85 */	bl xBaseInit__FP5xBaseP10xBaseAsset
/* 8017F480 0017C560  3C 60 80 18 */	lis r3, zCameraTweak_EventCB__FP5xBaseP5xBaseUiPCfP5xBase@ha
/* 8017F484 0017C564  93 FE 00 10 */	stw r31, 0x10(r30)
/* 8017F488 0017C568  38 03 F5 08 */	addi r0, r3, zCameraTweak_EventCB__FP5xBaseP5xBaseUiPCfP5xBase@l
/* 8017F48C 0017C56C  90 1E 00 0C */	stw r0, 0xc(r30)
/* 8017F490 0017C570  88 1E 00 05 */	lbz r0, 0x5(r30)
/* 8017F494 0017C574  28 00 00 00 */	cmplwi r0, 0x0
/* 8017F498 0017C578  41 82 00 10 */	beq .L_8017F4A8
/* 8017F49C 0017C57C  38 1F 00 20 */	addi r0, r31, 0x20
/* 8017F4A0 0017C580  90 1E 00 08 */	stw r0, 0x8(r30)
/* 8017F4A4 0017C584  48 00 00 0C */	b .L_8017F4B0
.L_8017F4A8:
/* 8017F4A8 0017C588  38 00 00 00 */	li r0, 0x0
/* 8017F4AC 0017C58C  90 1E 00 08 */	stw r0, 0x8(r30)
.L_8017F4B0:
/* 8017F4B0 0017C590  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017F4B4 0017C594  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017F4B8 0017C598  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8017F4BC 0017C59C  7C 08 03 A6 */	mtlr r0
/* 8017F4C0 0017C5A0  38 21 00 10 */	addi r1, r1, 0x10
/* 8017F4C4 0017C5A4  4E 80 00 20 */	blr
.endfn zCameraTweak_Init__FP12zCameraTweakP17CameraTweak_asset

# zCameraTweak_Save(zCameraTweak*, xSerial*)
.fn zCameraTweak_Save__FP12zCameraTweakP7xSerial, global
/* 8017F4C8 0017C5A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017F4CC 0017C5AC  7C 08 02 A6 */	mflr r0
/* 8017F4D0 0017C5B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017F4D4 0017C5B4  4B E8 9F 79 */	bl xBaseSave__FP5xBaseP7xSerial
/* 8017F4D8 0017C5B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017F4DC 0017C5BC  7C 08 03 A6 */	mtlr r0
/* 8017F4E0 0017C5C0  38 21 00 10 */	addi r1, r1, 0x10
/* 8017F4E4 0017C5C4  4E 80 00 20 */	blr
.endfn zCameraTweak_Save__FP12zCameraTweakP7xSerial

# zCameraTweak_Load(zCameraTweak*, xSerial*)
.fn zCameraTweak_Load__FP12zCameraTweakP7xSerial, global
/* 8017F4E8 0017C5C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017F4EC 0017C5CC  7C 08 02 A6 */	mflr r0
/* 8017F4F0 0017C5D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017F4F4 0017C5D4  4B E8 9F A9 */	bl xBaseLoad__FP5xBaseP7xSerial
/* 8017F4F8 0017C5D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017F4FC 0017C5DC  7C 08 03 A6 */	mtlr r0
/* 8017F500 0017C5E0  38 21 00 10 */	addi r1, r1, 0x10
/* 8017F504 0017C5E4  4E 80 00 20 */	blr
.endfn zCameraTweak_Load__FP12zCameraTweakP7xSerial

# zCameraTweak_EventCB(xBase*, xBase*, unsigned int, const float*, xBase*)
.fn zCameraTweak_EventCB__FP5xBaseP5xBaseUiPCfP5xBase, global
/* 8017F508 0017C5E8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8017F50C 0017C5EC  7C 08 02 A6 */	mflr r0
/* 8017F510 0017C5F0  2C 05 00 12 */	cmpwi r5, 0x12
/* 8017F514 0017C5F4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8017F518 0017C5F8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8017F51C 0017C5FC  7C 9F 23 78 */	mr r31, r4
/* 8017F520 0017C600  41 82 00 44 */	beq .L_8017F564
/* 8017F524 0017C604  40 80 00 1C */	bge .L_8017F540
/* 8017F528 0017C608  2C 05 00 02 */	cmpwi r5, 0x2
/* 8017F52C 0017C60C  41 82 00 2C */	beq .L_8017F558
/* 8017F530 0017C610  40 80 00 98 */	bge .L_8017F5C8
/* 8017F534 0017C614  2C 05 00 01 */	cmpwi r5, 0x1
/* 8017F538 0017C618  40 80 00 14 */	bge .L_8017F54C
/* 8017F53C 0017C61C  48 00 00 8C */	b .L_8017F5C8
.L_8017F540:
/* 8017F540 0017C620  2C 05 00 14 */	cmpwi r5, 0x14
/* 8017F544 0017C624  40 80 00 84 */	bge .L_8017F5C8
/* 8017F548 0017C628  48 00 00 68 */	b .L_8017F5B0
.L_8017F54C:
/* 8017F54C 0017C62C  7F E3 FB 78 */	mr r3, r31
/* 8017F550 0017C630  4B E8 A0 05 */	bl xBaseEnable__FP5xBase
/* 8017F554 0017C634  48 00 00 74 */	b .L_8017F5C8
.L_8017F558:
/* 8017F558 0017C638  7F E3 FB 78 */	mr r3, r31
/* 8017F55C 0017C63C  4B E8 9F E9 */	bl xBaseDisable__FP5xBase
/* 8017F560 0017C640  48 00 00 68 */	b .L_8017F5C8
.L_8017F564:
/* 8017F564 0017C644  7F E3 FB 78 */	mr r3, r31
/* 8017F568 0017C648  4B E8 9F D1 */	bl xBaseIsEnabled__FPC5xBase
/* 8017F56C 0017C64C  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8017F570 0017C650  41 82 00 58 */	beq .L_8017F5C8
/* 8017F574 0017C654  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 8017F578 0017C658  3C 00 43 30 */	lis r0, 0x4330
/* 8017F57C 0017C65C  90 01 00 08 */	stw r0, 0x8(r1)
/* 8017F580 0017C660  80 04 00 10 */	lwz r0, 0x10(r4)
/* 8017F584 0017C664  C8 22 AE 60 */	lfd f1, "@640"@sda21(r2)
/* 8017F588 0017C668  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8017F58C 0017C66C  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 8017F590 0017C670  90 01 00 0C */	stw r0, 0xc(r1)
/* 8017F594 0017C674  C0 44 00 14 */	lfs f2, 0x14(r4)
/* 8017F598 0017C678  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 8017F59C 0017C67C  C0 64 00 18 */	lfs f3, 0x18(r4)
/* 8017F5A0 0017C680  EC 20 08 28 */	fsubs f1, f0, f1
/* 8017F5A4 0017C684  C0 84 00 1C */	lfs f4, 0x1c(r4)
/* 8017F5A8 0017C688  4B FF F9 D9 */	bl zCameraTweakGlobal_Add__FUiffff
/* 8017F5AC 0017C68C  48 00 00 1C */	b .L_8017F5C8
.L_8017F5B0:
/* 8017F5B0 0017C690  7F E3 FB 78 */	mr r3, r31
/* 8017F5B4 0017C694  4B E8 9F 85 */	bl xBaseIsEnabled__FPC5xBase
/* 8017F5B8 0017C698  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8017F5BC 0017C69C  41 82 00 0C */	beq .L_8017F5C8
/* 8017F5C0 0017C6A0  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 8017F5C4 0017C6A4  4B FF FB D9 */	bl zCameraTweakGlobal_Remove__FUi
.L_8017F5C8:
/* 8017F5C8 0017C6A8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8017F5CC 0017C6AC  38 60 00 01 */	li r3, 0x1
/* 8017F5D0 0017C6B0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8017F5D4 0017C6B4  7C 08 03 A6 */	mtlr r0
/* 8017F5D8 0017C6B8  38 21 00 20 */	addi r1, r1, 0x20
/* 8017F5DC 0017C6BC  4E 80 00 20 */	blr
.endfn zCameraTweak_EventCB__FP5xBaseP5xBaseUiPCfP5xBase

# 0x8032B4C8 - 0x8032B580
.bss
.balign 8

.obj sCamTweakList, local
	.skip 0xA0
.endobj sCamTweakList

.obj zcam_neartweak, local
	.skip 0xC
.endobj zcam_neartweak

.obj zcam_fartweak, local
	.skip 0xC
.endobj zcam_fartweak

# 0x803CC0B8 - 0x803CC0E8
.section .sbss, "wa", @nobits
.balign 8

.obj sCamTweakCount, local
	.skip 0x4
.endobj sCamTweakCount

.obj sCamTweakLerp, local
	.skip 0x4
.endobj sCamTweakLerp

.obj sCamTweakTime, local
	.skip 0x4
.endobj sCamTweakTime

.obj sCamTweakPitch, local
	.skip 0x8
.endobj sCamTweakPitch

.obj sCamTweakDistMult, local
	.skip 0x8
.endobj sCamTweakDistMult

.obj sCamTweakPitchCur, local
	.skip 0x4
.endobj sCamTweakPitchCur

.obj sCamTweakDistMultCur, local
	.skip 0x4
.endobj sCamTweakDistMultCur

.obj sCamD, local
	.skip 0x4
.endobj sCamD

.obj sCamH, local
	.skip 0x4
.endobj sCamH

.obj sCamPitch, local
	.skip 0x4
.endobj sCamPitch

# 0x803CF7C8 - 0x803CF7E8
.section .sdata2, "a"
.balign 8

.obj "@463", local
	.4byte 0x00000000
.endobj "@463"

.obj "@464", local
	.4byte 0x3F800000
.endobj "@464"

.obj "@536", local
	.4byte 0x3A83126F
.endobj "@536"

.obj "@537", local
	.4byte 0x40490FDB
.endobj "@537"

.obj "@538", local
	.4byte 0x43340000
.endobj "@538"

.obj "@574", local
	.4byte 0x3DCCCCCD
.endobj "@574"

.obj "@640", local
	.4byte 0x43300000
	.4byte 0x80000000
.endobj "@640"
