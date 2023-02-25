.include "macros.inc"
.file "iScrFX.cpp"

# 0x800CF34C - 0x800CF92C
.text
.balign 4

# iScrFxInit()
.fn iScrFxInit__Fv, global
/* 800CF34C 000CC42C  4E 80 00 20 */	blr
.endfn iScrFxInit__Fv

# iScrFxBegin()
.fn iScrFxBegin__Fv, global
/* 800CF350 000CC430  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800CF354 000CC434  7C 08 02 A6 */	mflr r0
/* 800CF358 000CC438  38 60 00 09 */	li r3, 0x9
/* 800CF35C 000CC43C  38 80 00 01 */	li r4, 0x1
/* 800CF360 000CC440  90 01 00 14 */	stw r0, 0x14(r1)
/* 800CF364 000CC444  48 16 04 79 */	bl RwRenderStateSet
/* 800CF368 000CC448  38 60 00 0E */	li r3, 0xe
/* 800CF36C 000CC44C  38 80 00 00 */	li r4, 0x0
/* 800CF370 000CC450  48 16 04 6D */	bl RwRenderStateSet
/* 800CF374 000CC454  38 60 00 06 */	li r3, 0x6
/* 800CF378 000CC458  38 80 00 00 */	li r4, 0x0
/* 800CF37C 000CC45C  48 16 04 61 */	bl RwRenderStateSet
/* 800CF380 000CC460  38 60 00 08 */	li r3, 0x8
/* 800CF384 000CC464  38 80 00 00 */	li r4, 0x0
/* 800CF388 000CC468  48 16 04 55 */	bl RwRenderStateSet
/* 800CF38C 000CC46C  38 60 00 01 */	li r3, 0x1
/* 800CF390 000CC470  38 80 00 00 */	li r4, 0x0
/* 800CF394 000CC474  48 16 04 49 */	bl RwRenderStateSet
/* 800CF398 000CC478  38 60 00 0C */	li r3, 0xc
/* 800CF39C 000CC47C  38 80 00 01 */	li r4, 0x1
/* 800CF3A0 000CC480  48 16 04 3D */	bl RwRenderStateSet
/* 800CF3A4 000CC484  38 60 00 0A */	li r3, 0xa
/* 800CF3A8 000CC488  38 80 00 05 */	li r4, 0x5
/* 800CF3AC 000CC48C  48 16 04 31 */	bl RwRenderStateSet
/* 800CF3B0 000CC490  38 60 00 0B */	li r3, 0xb
/* 800CF3B4 000CC494  38 80 00 06 */	li r4, 0x6
/* 800CF3B8 000CC498  48 16 04 25 */	bl RwRenderStateSet
/* 800CF3BC 000CC49C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800CF3C0 000CC4A0  7C 08 03 A6 */	mtlr r0
/* 800CF3C4 000CC4A4  38 21 00 10 */	addi r1, r1, 0x10
/* 800CF3C8 000CC4A8  4E 80 00 20 */	blr
.endfn iScrFxBegin__Fv

# iScrFxEnd()
.fn iScrFxEnd__Fv, global
/* 800CF3CC 000CC4AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800CF3D0 000CC4B0  7C 08 02 A6 */	mflr r0
/* 800CF3D4 000CC4B4  38 60 00 0E */	li r3, 0xe
/* 800CF3D8 000CC4B8  38 80 00 00 */	li r4, 0x0
/* 800CF3DC 000CC4BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800CF3E0 000CC4C0  48 16 03 FD */	bl RwRenderStateSet
/* 800CF3E4 000CC4C4  38 60 00 06 */	li r3, 0x6
/* 800CF3E8 000CC4C8  38 80 00 01 */	li r4, 0x1
/* 800CF3EC 000CC4CC  48 16 03 F1 */	bl RwRenderStateSet
/* 800CF3F0 000CC4D0  38 60 00 08 */	li r3, 0x8
/* 800CF3F4 000CC4D4  38 80 00 01 */	li r4, 0x1
/* 800CF3F8 000CC4D8  48 16 03 E5 */	bl RwRenderStateSet
/* 800CF3FC 000CC4DC  38 60 00 01 */	li r3, 0x1
/* 800CF400 000CC4E0  38 80 00 00 */	li r4, 0x0
/* 800CF404 000CC4E4  48 16 03 D9 */	bl RwRenderStateSet
/* 800CF408 000CC4E8  38 60 00 0C */	li r3, 0xc
/* 800CF40C 000CC4EC  38 80 00 00 */	li r4, 0x0
/* 800CF410 000CC4F0  48 16 03 CD */	bl RwRenderStateSet
/* 800CF414 000CC4F4  38 60 00 0A */	li r3, 0xa
/* 800CF418 000CC4F8  38 80 00 02 */	li r4, 0x2
/* 800CF41C 000CC4FC  48 16 03 C1 */	bl RwRenderStateSet
/* 800CF420 000CC500  38 60 00 0B */	li r3, 0xb
/* 800CF424 000CC504  38 80 00 01 */	li r4, 0x1
/* 800CF428 000CC508  48 16 03 B5 */	bl RwRenderStateSet
/* 800CF42C 000CC50C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800CF430 000CC510  7C 08 03 A6 */	mtlr r0
/* 800CF434 000CC514  38 21 00 10 */	addi r1, r1, 0x10
/* 800CF438 000CC518  4E 80 00 20 */	blr
.endfn iScrFxEnd__Fv

# iScrFxDrawBox(float, float, float, float, unsigned char, unsigned char, unsigned char, unsigned char)
.fn iScrFxDrawBox__FffffUcUcUcUc, global
/* 800CF43C 000CC51C  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 800CF440 000CC520  7C 08 02 A6 */	mflr r0
/* 800CF444 000CC524  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 800CF448 000CC528  39 61 00 A0 */	addi r11, r1, 0xa0
/* 800CF44C 000CC52C  48 11 E0 25 */	bl _savefpr_28
/* 800CF450 000CC530  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 800CF454 000CC534  93 C1 00 78 */	stw r30, 0x78(r1)
/* 800CF458 000CC538  93 A1 00 74 */	stw r29, 0x74(r1)
/* 800CF45C 000CC53C  93 81 00 70 */	stw r28, 0x70(r1)
/* 800CF460 000CC540  80 E2 97 EC */	lwz r7, "@542"@sda21(r2)
/* 800CF464 000CC544  FF 80 08 90 */	fmr f28, f1
/* 800CF468 000CC548  80 02 97 F0 */	lwz r0, "@542"+0x4@sda21(r2)
/* 800CF46C 000CC54C  FF A0 10 90 */	fmr f29, f2
/* 800CF470 000CC550  FF C0 18 90 */	fmr f30, f3
/* 800CF474 000CC554  7C 7C 1B 78 */	mr r28, r3
/* 800CF478 000CC558  FF E0 20 90 */	fmr f31, f4
/* 800CF47C 000CC55C  90 E1 00 08 */	stw r7, 0x8(r1)
/* 800CF480 000CC560  7C 9D 23 78 */	mr r29, r4
/* 800CF484 000CC564  7C BE 2B 78 */	mr r30, r5
/* 800CF488 000CC568  90 01 00 0C */	stw r0, 0xc(r1)
/* 800CF48C 000CC56C  7C DF 33 78 */	mr r31, r6
/* 800CF490 000CC570  48 16 03 35 */	bl RwIm2DGetNearScreenZ
/* 800CF494 000CC574  D3 81 00 10 */	stfs f28, 0x10(r1)
/* 800CF498 000CC578  38 81 00 10 */	addi r4, r1, 0x10
/* 800CF49C 000CC57C  38 C1 00 08 */	addi r6, r1, 0x8
/* 800CF4A0 000CC580  38 60 00 04 */	li r3, 0x4
/* 800CF4A4 000CC584  D3 A1 00 14 */	stfs f29, 0x14(r1)
/* 800CF4A8 000CC588  38 A0 00 04 */	li r5, 0x4
/* 800CF4AC 000CC58C  38 E0 00 04 */	li r7, 0x4
/* 800CF4B0 000CC590  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 800CF4B4 000CC594  D3 C1 00 28 */	stfs f30, 0x28(r1)
/* 800CF4B8 000CC598  D3 A1 00 2C */	stfs f29, 0x2c(r1)
/* 800CF4BC 000CC59C  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 800CF4C0 000CC5A0  D3 81 00 40 */	stfs f28, 0x40(r1)
/* 800CF4C4 000CC5A4  D3 E1 00 44 */	stfs f31, 0x44(r1)
/* 800CF4C8 000CC5A8  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 800CF4CC 000CC5AC  D3 C1 00 58 */	stfs f30, 0x58(r1)
/* 800CF4D0 000CC5B0  D3 E1 00 5C */	stfs f31, 0x5c(r1)
/* 800CF4D4 000CC5B4  D0 21 00 60 */	stfs f1, 0x60(r1)
/* 800CF4D8 000CC5B8  9B 81 00 1C */	stb r28, 0x1c(r1)
/* 800CF4DC 000CC5BC  9B A1 00 1D */	stb r29, 0x1d(r1)
/* 800CF4E0 000CC5C0  9B C1 00 1E */	stb r30, 0x1e(r1)
/* 800CF4E4 000CC5C4  9B E1 00 1F */	stb r31, 0x1f(r1)
/* 800CF4E8 000CC5C8  9B 81 00 34 */	stb r28, 0x34(r1)
/* 800CF4EC 000CC5CC  9B A1 00 35 */	stb r29, 0x35(r1)
/* 800CF4F0 000CC5D0  9B C1 00 36 */	stb r30, 0x36(r1)
/* 800CF4F4 000CC5D4  9B E1 00 37 */	stb r31, 0x37(r1)
/* 800CF4F8 000CC5D8  9B 81 00 4C */	stb r28, 0x4c(r1)
/* 800CF4FC 000CC5DC  9B A1 00 4D */	stb r29, 0x4d(r1)
/* 800CF500 000CC5E0  9B C1 00 4E */	stb r30, 0x4e(r1)
/* 800CF504 000CC5E4  9B E1 00 4F */	stb r31, 0x4f(r1)
/* 800CF508 000CC5E8  9B 81 00 64 */	stb r28, 0x64(r1)
/* 800CF50C 000CC5EC  9B A1 00 65 */	stb r29, 0x65(r1)
/* 800CF510 000CC5F0  9B C1 00 66 */	stb r30, 0x66(r1)
/* 800CF514 000CC5F4  9B E1 00 67 */	stb r31, 0x67(r1)
/* 800CF518 000CC5F8  48 16 03 A9 */	bl RwIm2DRenderIndexedPrimitive
/* 800CF51C 000CC5FC  39 61 00 A0 */	addi r11, r1, 0xa0
/* 800CF520 000CC600  48 11 DF 9D */	bl _restfpr_28
/* 800CF524 000CC604  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 800CF528 000CC608  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 800CF52C 000CC60C  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 800CF530 000CC610  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 800CF534 000CC614  83 81 00 70 */	lwz r28, 0x70(r1)
/* 800CF538 000CC618  7C 08 03 A6 */	mtlr r0
/* 800CF53C 000CC61C  38 21 00 A0 */	addi r1, r1, 0xa0
/* 800CF540 000CC620  4E 80 00 20 */	blr
.endfn iScrFxDrawBox__FffffUcUcUcUc

# iCameraMotionBlurActivate(unsigned int)
.fn iCameraMotionBlurActivate__FUi, global
/* 800CF544 000CC624  90 6D 92 B8 */	stw r3, sMotionBlurEnabled@sda21(r13)
/* 800CF548 000CC628  4E 80 00 20 */	blr
.endfn iCameraMotionBlurActivate__FUi

# iCameraSetBlurriness(float)
.fn iCameraSetBlurriness__Ff, global
/* 800CF54C 000CC62C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800CF550 000CC630  C0 02 97 E8 */	lfs f0, "@527"@sda21(r2)
/* 800CF554 000CC634  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800CF558 000CC638  4C 40 13 82 */	cror eq, lt, eq
/* 800CF55C 000CC63C  40 82 00 10 */	bne .L_800CF56C
/* 800CF560 000CC640  38 00 00 00 */	li r0, 0x0
/* 800CF564 000CC644  90 0D 92 B8 */	stw r0, sMotionBlurEnabled@sda21(r13)
/* 800CF568 000CC648  48 00 00 3C */	b .L_800CF5A4
.L_800CF56C:
/* 800CF56C 000CC64C  C0 02 97 F4 */	lfs f0, "@575"@sda21(r2)
/* 800CF570 000CC650  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800CF574 000CC654  40 81 00 08 */	ble .L_800CF57C
/* 800CF578 000CC658  FC 20 00 90 */	fmr f1, f0
.L_800CF57C:
/* 800CF57C 000CC65C  38 00 00 01 */	li r0, 0x1
/* 800CF580 000CC660  3C 60 80 29 */	lis r3, sMBD@ha
/* 800CF584 000CC664  90 0D 92 B8 */	stw r0, sMotionBlurEnabled@sda21(r13)
/* 800CF588 000CC668  C0 42 97 FC */	lfs f2, "@577"@sda21(r2)
/* 800CF58C 000CC66C  C0 02 97 F8 */	lfs f0, "@576"@sda21(r2)
/* 800CF590 000CC670  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 800CF594 000CC674  FC 00 00 1E */	fctiwz f0, f0
/* 800CF598 000CC678  D8 01 00 08 */	stfd f0, 0x8(r1)
/* 800CF59C 000CC67C  80 01 00 0C */	lwz r0, 0xc(r1)
/* 800CF5A0 000CC680  90 03 2B 00 */	stw r0, sMBD@l(r3)
.L_800CF5A4:
/* 800CF5A4 000CC684  38 21 00 10 */	addi r1, r1, 0x10
/* 800CF5A8 000CC688  4E 80 00 20 */	blr
.endfn iCameraSetBlurriness__Ff

# iScrFxCameraCreated(RwCamera*)
.fn iScrFxCameraCreated__FP8RwCamera, global
/* 800CF5AC 000CC68C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800CF5B0 000CC690  7C 08 02 A6 */	mflr r0
/* 800CF5B4 000CC694  3C 80 80 29 */	lis r4, sMBD@ha
/* 800CF5B8 000CC698  38 A0 00 90 */	li r5, 0x90
/* 800CF5BC 000CC69C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800CF5C0 000CC6A0  38 C4 2B 00 */	addi r6, r4, sMBD@l
/* 800CF5C4 000CC6A4  38 00 00 00 */	li r0, 0x0
/* 800CF5C8 000CC6A8  38 E0 00 00 */	li r7, 0x0
/* 800CF5CC 000CC6AC  90 A6 00 00 */	stw r5, 0x0(r6)
/* 800CF5D0 000CC6B0  38 A0 00 01 */	li r5, 0x1
/* 800CF5D4 000CC6B4  38 80 00 02 */	li r4, 0x2
/* 800CF5D8 000CC6B8  90 06 00 04 */	stw r0, 0x4(r6)
/* 800CF5DC 000CC6BC  38 00 00 03 */	li r0, 0x3
/* 800CF5E0 000CC6C0  B0 E6 00 68 */	sth r7, 0x68(r6)
/* 800CF5E4 000CC6C4  B0 A6 00 6A */	sth r5, 0x6a(r6)
/* 800CF5E8 000CC6C8  B0 86 00 6C */	sth r4, 0x6c(r6)
/* 800CF5EC 000CC6CC  B0 E6 00 6E */	sth r7, 0x6e(r6)
/* 800CF5F0 000CC6D0  B0 86 00 70 */	sth r4, 0x70(r6)
/* 800CF5F4 000CC6D4  B0 06 00 72 */	sth r0, 0x72(r6)
/* 800CF5F8 000CC6D8  48 00 02 01 */	bl iScrFxMotionBlurOpen__FP8RwCamera
/* 800CF5FC 000CC6DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800CF600 000CC6E0  7C 08 03 A6 */	mtlr r0
/* 800CF604 000CC6E4  38 21 00 10 */	addi r1, r1, 0x10
/* 800CF608 000CC6E8  4E 80 00 20 */	blr
.endfn iScrFxCameraCreated__FP8RwCamera

# iScrFxCameraEndScene(RwCamera*)
.fn iScrFxCameraEndScene__FP8RwCamera, global
/* 800CF60C 000CC6EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800CF610 000CC6F0  7C 08 02 A6 */	mflr r0
/* 800CF614 000CC6F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800CF618 000CC6F8  80 0D 92 B8 */	lwz r0, sMotionBlurEnabled@sda21(r13)
/* 800CF61C 000CC6FC  28 00 00 00 */	cmplwi r0, 0x0
/* 800CF620 000CC700  41 82 00 1C */	beq .L_800CF63C
/* 800CF624 000CC704  3C 80 80 29 */	lis r4, sMBD@ha
/* 800CF628 000CC708  80 04 2B 00 */	lwz r0, sMBD@l(r4)
/* 800CF62C 000CC70C  2C 00 00 00 */	cmpwi r0, 0x0
/* 800CF630 000CC710  41 82 00 0C */	beq .L_800CF63C
/* 800CF634 000CC714  54 04 06 3E */	clrlwi r4, r0, 24
/* 800CF638 000CC718  48 00 02 1D */	bl iScrFxMotionBlurRender__FP8RwCameraUi
.L_800CF63C:
/* 800CF63C 000CC71C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800CF640 000CC720  7C 08 03 A6 */	mtlr r0
/* 800CF644 000CC724  38 21 00 10 */	addi r1, r1, 0x10
/* 800CF648 000CC728  4E 80 00 20 */	blr
.endfn iScrFxCameraEndScene__FP8RwCamera

# iScrFxPostCameraEnd(RwCamera*)
.fn iScrFxPostCameraEnd__FP8RwCamera, global
/* 800CF64C 000CC72C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800CF650 000CC730  7C 08 02 A6 */	mflr r0
/* 800CF654 000CC734  90 01 00 14 */	stw r0, 0x14(r1)
/* 800CF658 000CC738  48 00 02 89 */	bl GCMB_SiphonFrameBuffer__FPC8RwCamera
/* 800CF65C 000CC73C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800CF660 000CC740  7C 08 03 A6 */	mtlr r0
/* 800CF664 000CC744  38 21 00 10 */	addi r1, r1, 0x10
/* 800CF668 000CC748  4E 80 00 20 */	blr
.endfn iScrFxPostCameraEnd__FP8RwCamera

# iCameraOverlayRender(RwCamera*, RwRaster*, RwRGBA)
.fn iCameraOverlayRender__FP8RwCameraP8RwRaster6RwRGBA, local
/* 800CF66C 000CC74C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800CF670 000CC750  7C 08 02 A6 */	mflr r0
/* 800CF674 000CC754  90 01 00 14 */	stw r0, 0x14(r1)
/* 800CF678 000CC758  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800CF67C 000CC75C  7C BF 2B 78 */	mr r31, r5
/* 800CF680 000CC760  48 00 01 71 */	bl FBMBlur_DebugIntervention__FP8RwCameraP8RwRaster
/* 800CF684 000CC764  3C 80 80 29 */	lis r4, sMBD@ha
/* 800CF688 000CC768  89 1F 00 00 */	lbz r8, 0x0(r31)
/* 800CF68C 000CC76C  38 E4 2B 00 */	addi r7, r4, sMBD@l
/* 800CF690 000CC770  88 DF 00 01 */	lbz r6, 0x1(r31)
/* 800CF694 000CC774  88 BF 00 02 */	lbz r5, 0x2(r31)
/* 800CF698 000CC778  38 80 00 01 */	li r4, 0x1
/* 800CF69C 000CC77C  88 1F 00 03 */	lbz r0, 0x3(r31)
/* 800CF6A0 000CC780  7C 7F 1B 78 */	mr r31, r3
/* 800CF6A4 000CC784  99 07 00 14 */	stb r8, 0x14(r7)
/* 800CF6A8 000CC788  38 60 00 09 */	li r3, 0x9
/* 800CF6AC 000CC78C  98 C7 00 15 */	stb r6, 0x15(r7)
/* 800CF6B0 000CC790  98 A7 00 16 */	stb r5, 0x16(r7)
/* 800CF6B4 000CC794  98 07 00 17 */	stb r0, 0x17(r7)
/* 800CF6B8 000CC798  99 07 00 2C */	stb r8, 0x2c(r7)
/* 800CF6BC 000CC79C  98 C7 00 2D */	stb r6, 0x2d(r7)
/* 800CF6C0 000CC7A0  98 A7 00 2E */	stb r5, 0x2e(r7)
/* 800CF6C4 000CC7A4  98 07 00 2F */	stb r0, 0x2f(r7)
/* 800CF6C8 000CC7A8  99 07 00 44 */	stb r8, 0x44(r7)
/* 800CF6CC 000CC7AC  98 C7 00 45 */	stb r6, 0x45(r7)
/* 800CF6D0 000CC7B0  98 A7 00 46 */	stb r5, 0x46(r7)
/* 800CF6D4 000CC7B4  98 07 00 47 */	stb r0, 0x47(r7)
/* 800CF6D8 000CC7B8  99 07 00 5C */	stb r8, 0x5c(r7)
/* 800CF6DC 000CC7BC  98 C7 00 5D */	stb r6, 0x5d(r7)
/* 800CF6E0 000CC7C0  98 A7 00 5E */	stb r5, 0x5e(r7)
/* 800CF6E4 000CC7C4  98 07 00 5F */	stb r0, 0x5f(r7)
/* 800CF6E8 000CC7C8  48 16 00 F5 */	bl RwRenderStateSet
/* 800CF6EC 000CC7CC  38 60 00 0E */	li r3, 0xe
/* 800CF6F0 000CC7D0  38 80 00 00 */	li r4, 0x0
/* 800CF6F4 000CC7D4  48 16 00 E9 */	bl RwRenderStateSet
/* 800CF6F8 000CC7D8  38 60 00 06 */	li r3, 0x6
/* 800CF6FC 000CC7DC  38 80 00 00 */	li r4, 0x0
/* 800CF700 000CC7E0  48 16 00 DD */	bl RwRenderStateSet
/* 800CF704 000CC7E4  38 60 00 08 */	li r3, 0x8
/* 800CF708 000CC7E8  38 80 00 00 */	li r4, 0x0
/* 800CF70C 000CC7EC  48 16 00 D1 */	bl RwRenderStateSet
/* 800CF710 000CC7F0  7F E4 FB 78 */	mr r4, r31
/* 800CF714 000CC7F4  38 60 00 01 */	li r3, 0x1
/* 800CF718 000CC7F8  48 16 00 C5 */	bl RwRenderStateSet
/* 800CF71C 000CC7FC  38 60 00 0C */	li r3, 0xc
/* 800CF720 000CC800  38 80 00 01 */	li r4, 0x1
/* 800CF724 000CC804  48 16 00 B9 */	bl RwRenderStateSet
/* 800CF728 000CC808  38 60 00 0A */	li r3, 0xa
/* 800CF72C 000CC80C  38 80 00 05 */	li r4, 0x5
/* 800CF730 000CC810  48 16 00 AD */	bl RwRenderStateSet
/* 800CF734 000CC814  38 60 00 0B */	li r3, 0xb
/* 800CF738 000CC818  38 80 00 06 */	li r4, 0x6
/* 800CF73C 000CC81C  48 16 00 A1 */	bl RwRenderStateSet
/* 800CF740 000CC820  28 1F 00 00 */	cmplwi r31, 0x0
/* 800CF744 000CC824  41 82 00 14 */	beq .L_800CF758
/* 800CF748 000CC828  7F E3 FB 78 */	mr r3, r31
/* 800CF74C 000CC82C  38 80 00 00 */	li r4, 0x0
/* 800CF750 000CC830  38 A0 00 02 */	li r5, 0x2
/* 800CF754 000CC834  48 16 C2 7D */	bl RwRasterLock
.L_800CF758:
/* 800CF758 000CC838  3C 80 80 29 */	lis r4, sMBD@ha
/* 800CF75C 000CC83C  38 60 00 03 */	li r3, 0x3
/* 800CF760 000CC840  38 C4 2B 00 */	addi r6, r4, sMBD@l
/* 800CF764 000CC844  38 A0 00 04 */	li r5, 0x4
/* 800CF768 000CC848  38 86 00 08 */	addi r4, r6, 0x8
/* 800CF76C 000CC84C  38 E0 00 06 */	li r7, 0x6
/* 800CF770 000CC850  38 C6 00 68 */	addi r6, r6, 0x68
/* 800CF774 000CC854  48 16 01 4D */	bl RwIm2DRenderIndexedPrimitive
/* 800CF778 000CC858  28 1F 00 00 */	cmplwi r31, 0x0
/* 800CF77C 000CC85C  41 82 00 0C */	beq .L_800CF788
/* 800CF780 000CC860  7F E3 FB 78 */	mr r3, r31
/* 800CF784 000CC864  48 16 BE D5 */	bl RwRasterUnlock
.L_800CF788:
/* 800CF788 000CC868  38 60 00 0E */	li r3, 0xe
/* 800CF78C 000CC86C  38 80 00 00 */	li r4, 0x0
/* 800CF790 000CC870  48 16 00 4D */	bl RwRenderStateSet
/* 800CF794 000CC874  38 60 00 06 */	li r3, 0x6
/* 800CF798 000CC878  38 80 00 01 */	li r4, 0x1
/* 800CF79C 000CC87C  48 16 00 41 */	bl RwRenderStateSet
/* 800CF7A0 000CC880  38 60 00 08 */	li r3, 0x8
/* 800CF7A4 000CC884  38 80 00 01 */	li r4, 0x1
/* 800CF7A8 000CC888  48 16 00 35 */	bl RwRenderStateSet
/* 800CF7AC 000CC88C  38 60 00 01 */	li r3, 0x1
/* 800CF7B0 000CC890  38 80 00 00 */	li r4, 0x0
/* 800CF7B4 000CC894  48 16 00 29 */	bl RwRenderStateSet
/* 800CF7B8 000CC898  38 60 00 0C */	li r3, 0xc
/* 800CF7BC 000CC89C  38 80 00 00 */	li r4, 0x0
/* 800CF7C0 000CC8A0  48 16 00 1D */	bl RwRenderStateSet
/* 800CF7C4 000CC8A4  38 60 00 0A */	li r3, 0xa
/* 800CF7C8 000CC8A8  38 80 00 05 */	li r4, 0x5
/* 800CF7CC 000CC8AC  48 16 00 11 */	bl RwRenderStateSet
/* 800CF7D0 000CC8B0  38 60 00 0B */	li r3, 0xb
/* 800CF7D4 000CC8B4  38 80 00 06 */	li r4, 0x6
/* 800CF7D8 000CC8B8  48 16 00 05 */	bl RwRenderStateSet
/* 800CF7DC 000CC8BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800CF7E0 000CC8C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800CF7E4 000CC8C4  7C 08 03 A6 */	mtlr r0
/* 800CF7E8 000CC8C8  38 21 00 10 */	addi r1, r1, 0x10
/* 800CF7EC 000CC8CC  4E 80 00 20 */	blr
.endfn iCameraOverlayRender__FP8RwCameraP8RwRaster6RwRGBA

# FBMBlur_DebugIntervention(RwCamera*, RwRaster*)
.fn FBMBlur_DebugIntervention__FP8RwCameraP8RwRaster, weak
/* 800CF7F0 000CC8D0  7C 83 23 78 */	mr r3, r4
/* 800CF7F4 000CC8D4  4E 80 00 20 */	blr
.endfn FBMBlur_DebugIntervention__FP8RwCameraP8RwRaster

# iScrFxMotionBlurOpen(RwCamera*)
.fn iScrFxMotionBlurOpen__FP8RwCamera, global
/* 800CF7F8 000CC8D8  38 60 00 00 */	li r3, 0x0
/* 800CF7FC 000CC8DC  4E 80 00 20 */	blr
.endfn iScrFxMotionBlurOpen__FP8RwCamera

# iScrFxCameraDestroyed(RwCamera*)
.fn iScrFxCameraDestroyed__FP8RwCamera, global
/* 800CF800 000CC8E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800CF804 000CC8E4  7C 08 02 A6 */	mflr r0
/* 800CF808 000CC8E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 800CF80C 000CC8EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800CF810 000CC8F0  48 00 00 99 */	bl GCMB_KillFrameBufferCopy__Fv
/* 800CF814 000CC8F4  3C 60 80 29 */	lis r3, sMBD@ha
/* 800CF818 000CC8F8  3B E3 2B 00 */	addi r31, r3, sMBD@l
/* 800CF81C 000CC8FC  80 7F 00 04 */	lwz r3, 0x4(r31)
/* 800CF820 000CC900  28 03 00 00 */	cmplwi r3, 0x0
/* 800CF824 000CC904  41 82 00 18 */	beq .L_800CF83C
/* 800CF828 000CC908  48 16 BE CD */	bl RwRasterDestroy
/* 800CF82C 000CC90C  38 00 00 00 */	li r0, 0x0
/* 800CF830 000CC910  38 60 00 01 */	li r3, 0x1
/* 800CF834 000CC914  90 1F 00 04 */	stw r0, 0x4(r31)
/* 800CF838 000CC918  48 00 00 08 */	b .L_800CF840
.L_800CF83C:
/* 800CF83C 000CC91C  38 60 00 00 */	li r3, 0x0
.L_800CF840:
/* 800CF840 000CC920  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800CF844 000CC924  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800CF848 000CC928  7C 08 03 A6 */	mtlr r0
/* 800CF84C 000CC92C  38 21 00 10 */	addi r1, r1, 0x10
/* 800CF850 000CC930  4E 80 00 20 */	blr
.endfn iScrFxCameraDestroyed__FP8RwCamera

# iScrFxMotionBlurRender(RwCamera*, unsigned int)
.fn iScrFxMotionBlurRender__FP8RwCameraUi, global
/* 800CF854 000CC934  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800CF858 000CC938  7C 08 02 A6 */	mflr r0
/* 800CF85C 000CC93C  3C A0 80 29 */	lis r5, sMBD@ha
/* 800CF860 000CC940  90 01 00 14 */	stw r0, 0x14(r1)
/* 800CF864 000CC944  38 A5 2B 00 */	addi r5, r5, sMBD@l
/* 800CF868 000CC948  80 C5 00 04 */	lwz r6, 0x4(r5)
/* 800CF86C 000CC94C  28 06 00 00 */	cmplwi r6, 0x0
/* 800CF870 000CC950  41 82 00 24 */	beq .L_800CF894
/* 800CF874 000CC954  80 02 98 00 */	lwz r0, "@714"@sda21(r2)
/* 800CF878 000CC958  38 A1 00 08 */	addi r5, r1, 0x8
/* 800CF87C 000CC95C  90 01 00 0C */	stw r0, 0xc(r1)
/* 800CF880 000CC960  98 81 00 0F */	stb r4, 0xf(r1)
/* 800CF884 000CC964  7C C4 33 78 */	mr r4, r6
/* 800CF888 000CC968  80 01 00 0C */	lwz r0, 0xc(r1)
/* 800CF88C 000CC96C  90 01 00 08 */	stw r0, 0x8(r1)
/* 800CF890 000CC970  4B FF FD DD */	bl iCameraOverlayRender__FP8RwCameraP8RwRaster6RwRGBA
.L_800CF894:
/* 800CF894 000CC974  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800CF898 000CC978  7C 08 03 A6 */	mtlr r0
/* 800CF89C 000CC97C  38 21 00 10 */	addi r1, r1, 0x10
/* 800CF8A0 000CC980  4E 80 00 20 */	blr
.endfn iScrFxMotionBlurRender__FP8RwCameraUi

# GCMB_MakeFrameBufferCopy(const RwCamera*)
.fn GCMB_MakeFrameBufferCopy__FPC8RwCamera, global
/* 800CF8A4 000CC984  4E 80 00 20 */	blr
.endfn GCMB_MakeFrameBufferCopy__FPC8RwCamera

# GCMB_KillFrameBufferCopy()
.fn GCMB_KillFrameBufferCopy__Fv, global
/* 800CF8A8 000CC988  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800CF8AC 000CC98C  7C 08 02 A6 */	mflr r0
/* 800CF8B0 000CC990  90 01 00 14 */	stw r0, 0x14(r1)
/* 800CF8B4 000CC994  80 6D 92 BC */	lwz r3, g_rast_gctapdance@sda21(r13)
/* 800CF8B8 000CC998  28 03 00 00 */	cmplwi r3, 0x0
/* 800CF8BC 000CC99C  41 82 00 08 */	beq .L_800CF8C4
/* 800CF8C0 000CC9A0  48 16 BE 35 */	bl RwRasterDestroy
.L_800CF8C4:
/* 800CF8C4 000CC9A4  38 00 00 00 */	li r0, 0x0
/* 800CF8C8 000CC9A8  90 0D 92 BC */	stw r0, g_rast_gctapdance@sda21(r13)
/* 800CF8CC 000CC9AC  90 0D 92 C0 */	stw r0, g_alreadyTriedAlloc@sda21(r13)
/* 800CF8D0 000CC9B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800CF8D4 000CC9B4  7C 08 03 A6 */	mtlr r0
/* 800CF8D8 000CC9B8  38 21 00 10 */	addi r1, r1, 0x10
/* 800CF8DC 000CC9BC  4E 80 00 20 */	blr
.endfn GCMB_KillFrameBufferCopy__Fv

# GCMB_SiphonFrameBuffer(const RwCamera*)
.fn GCMB_SiphonFrameBuffer__FPC8RwCamera, global
/* 800CF8E0 000CC9C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800CF8E4 000CC9C4  7C 08 02 A6 */	mflr r0
/* 800CF8E8 000CC9C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 800CF8EC 000CC9CC  80 0D 92 BC */	lwz r0, g_rast_gctapdance@sda21(r13)
/* 800CF8F0 000CC9D0  28 00 00 00 */	cmplwi r0, 0x0
/* 800CF8F4 000CC9D4  40 82 00 14 */	bne .L_800CF908
/* 800CF8F8 000CC9D8  80 0D 92 C0 */	lwz r0, g_alreadyTriedAlloc@sda21(r13)
/* 800CF8FC 000CC9DC  2C 00 00 00 */	cmpwi r0, 0x0
/* 800CF900 000CC9E0  40 82 00 08 */	bne .L_800CF908
/* 800CF904 000CC9E4  4B FF FF A1 */	bl GCMB_MakeFrameBufferCopy__FPC8RwCamera
.L_800CF908:
/* 800CF908 000CC9E8  80 6D 92 BC */	lwz r3, g_rast_gctapdance@sda21(r13)
/* 800CF90C 000CC9EC  28 03 00 00 */	cmplwi r3, 0x0
/* 800CF910 000CC9F0  41 82 00 0C */	beq .L_800CF91C
/* 800CF914 000CC9F4  38 80 00 00 */	li r4, 0x0
/* 800CF918 000CC9F8  48 17 6E 79 */	bl RwGameCubeCameraTextureFlush
.L_800CF91C:
/* 800CF91C 000CC9FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800CF920 000CCA00  7C 08 03 A6 */	mtlr r0
/* 800CF924 000CCA04  38 21 00 10 */	addi r1, r1, 0x10
/* 800CF928 000CCA08  4E 80 00 20 */	blr
.endfn GCMB_SiphonFrameBuffer__FPC8RwCamera

# 0x80292B00 - 0x80292B88
.data
.balign 8

.obj sMBD, local
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
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj sMBD
	.4byte 0x00000000

# 0x803CBBB8 - 0x803CBBC8
.section .sbss, "wa", @nobits
.balign 8

.obj sMotionBlurEnabled, local
	.skip 0x4
.endobj sMotionBlurEnabled

.obj g_rast_gctapdance, local
	.skip 0x4
.endobj g_rast_gctapdance

.obj g_alreadyTriedAlloc, local
	.skip 0x4
.endobj g_alreadyTriedAlloc
	.skip 0x4

# 0x803CE168 - 0x803CE188
.section .sdata2, "a"
.balign 8

.obj "@527", local
	.4byte 0x00000000
.endobj "@527"

.obj "@542", local
	.4byte 0x00000001
	.4byte 0x00020003
.endobj "@542"

.obj "@575", local
	.4byte 0x3F800000
.endobj "@575"

.obj "@576", local
	.4byte 0x3F000000
.endobj "@576"

.obj "@577", local
	.4byte 0x437E0000
.endobj "@577"

.obj "@714", local
	.4byte 0xFFFFFF00
.endobj "@714"
	.4byte 0x00000000
