.include "macros.inc"
.file "xSkyDome.cpp"

# 0x8010EED8 - 0x8010F150
.text
.balign 4

# xSkyDome_EmptyRender(xEnt*)
.fn xSkyDome_EmptyRender__FP4xEnt, local
/* 8010EED8 0010BFB8  4E 80 00 20 */	blr
.endfn xSkyDome_EmptyRender__FP4xEnt

# xSkyDome_Setup()
.fn xSkyDome_Setup__Fv, global
/* 8010EEDC 0010BFBC  38 00 00 00 */	li r0, 0x0
/* 8010EEE0 0010BFC0  90 0D 94 E8 */	stw r0, sSkyCount@sda21(r13)
/* 8010EEE4 0010BFC4  4E 80 00 20 */	blr
.endfn xSkyDome_Setup__Fv

# xSkyDome_AddEntity(xEnt*, int, int)
.fn xSkyDome_AddEntity__FP4xEntii, global
/* 8010EEE8 0010BFC8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8010EEEC 0010BFCC  7C 08 02 A6 */	mflr r0
/* 8010EEF0 0010BFD0  3C C0 80 31 */	lis r6, sSkyList@ha
/* 8010EEF4 0010BFD4  90 01 00 34 */	stw r0, 0x34(r1)
/* 8010EEF8 0010BFD8  38 C6 37 28 */	addi r6, r6, sSkyList@l
/* 8010EEFC 0010BFDC  BF 21 00 14 */	stmw r25, 0x14(r1)
/* 8010EF00 0010BFE0  7C 7D 1B 78 */	mr r29, r3
/* 8010EF04 0010BFE4  7C 9E 23 78 */	mr r30, r4
/* 8010EF08 0010BFE8  7C BF 2B 78 */	mr r31, r5
/* 8010EF0C 0010BFEC  7C C3 33 78 */	mr r3, r6
/* 8010EF10 0010BFF0  38 80 00 00 */	li r4, 0x0
/* 8010EF14 0010BFF4  80 ED 94 E8 */	lwz r7, sSkyCount@sda21(r13)
/* 8010EF18 0010BFF8  48 00 00 18 */	b .L_8010EF30
.L_8010EF1C:
/* 8010EF1C 0010BFFC  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8010EF20 0010C000  7C 00 E8 40 */	cmplw r0, r29
/* 8010EF24 0010C004  41 82 00 E0 */	beq .L_8010F004
/* 8010EF28 0010C008  38 63 00 0C */	addi r3, r3, 0xc
/* 8010EF2C 0010C00C  38 84 00 01 */	addi r4, r4, 0x1
.L_8010EF30:
/* 8010EF30 0010C010  7C 04 38 00 */	cmpw r4, r7
/* 8010EF34 0010C014  41 81 FF E8 */	bgt .L_8010EF1C
/* 8010EF38 0010C018  3B 40 00 00 */	li r26, 0x0
/* 8010EF3C 0010C01C  7C E9 03 A6 */	mtctr r7
/* 8010EF40 0010C020  2C 07 00 00 */	cmpwi r7, 0x0
/* 8010EF44 0010C024  40 81 00 1C */	ble .L_8010EF60
.L_8010EF48:
/* 8010EF48 0010C028  80 06 00 04 */	lwz r0, 0x4(r6)
/* 8010EF4C 0010C02C  7C 1E 00 00 */	cmpw r30, r0
/* 8010EF50 0010C030  41 80 00 10 */	blt .L_8010EF60
/* 8010EF54 0010C034  38 C6 00 0C */	addi r6, r6, 0xc
/* 8010EF58 0010C038  3B 5A 00 01 */	addi r26, r26, 0x1
/* 8010EF5C 0010C03C  42 00 FF EC */	bdnz .L_8010EF48
.L_8010EF60:
/* 8010EF60 0010C040  3B 27 FF FF */	addi r25, r7, -0x1
/* 8010EF64 0010C044  3C 60 80 31 */	lis r3, sSkyList@ha
/* 8010EF68 0010C048  1C 19 00 0C */	mulli r0, r25, 0xc
/* 8010EF6C 0010C04C  3B 83 37 28 */	addi r28, r3, sSkyList@l
/* 8010EF70 0010C050  7F 7C 02 14 */	add r27, r28, r0
/* 8010EF74 0010C054  48 00 00 20 */	b .L_8010EF94
.L_8010EF78:
/* 8010EF78 0010C058  38 19 00 01 */	addi r0, r25, 0x1
/* 8010EF7C 0010C05C  7F 64 DB 78 */	mr r4, r27
/* 8010EF80 0010C060  1C 00 00 0C */	mulli r0, r0, 0xc
/* 8010EF84 0010C064  7C 7C 02 14 */	add r3, r28, r0
/* 8010EF88 0010C068  48 00 00 91 */	bl __as__11SkyDomeInfoFRC11SkyDomeInfo
/* 8010EF8C 0010C06C  3B 7B FF F4 */	addi r27, r27, -0xc
/* 8010EF90 0010C070  3B 39 FF FF */	addi r25, r25, -0x1
.L_8010EF94:
/* 8010EF94 0010C074  7C 19 D0 00 */	cmpw r25, r26
/* 8010EF98 0010C078  40 80 FF E0 */	bge .L_8010EF78
/* 8010EF9C 0010C07C  1C 1A 00 0C */	mulli r0, r26, 0xc
/* 8010EFA0 0010C080  3C 80 80 31 */	lis r4, sSkyList@ha
/* 8010EFA4 0010C084  3C 60 80 11 */	lis r3, xSkyDome_EmptyRender__FP4xEnt@ha
/* 8010EFA8 0010C088  38 84 37 28 */	addi r4, r4, sSkyList@l
/* 8010EFAC 0010C08C  7F A4 01 2E */	stwx r29, r4, r0
/* 8010EFB0 0010C090  7C A4 02 14 */	add r5, r4, r0
/* 8010EFB4 0010C094  38 03 EE D8 */	addi r0, r3, xSkyDome_EmptyRender__FP4xEnt@l
/* 8010EFB8 0010C098  7F A3 EB 78 */	mr r3, r29
/* 8010EFBC 0010C09C  93 C5 00 04 */	stw r30, 0x4(r5)
/* 8010EFC0 0010C0A0  38 80 00 54 */	li r4, 0x54
/* 8010EFC4 0010C0A4  93 E5 00 08 */	stw r31, 0x8(r5)
/* 8010EFC8 0010C0A8  80 AD 94 E8 */	lwz r5, sSkyCount@sda21(r13)
/* 8010EFCC 0010C0AC  38 A5 00 01 */	addi r5, r5, 0x1
/* 8010EFD0 0010C0B0  90 AD 94 E8 */	stw r5, sSkyCount@sda21(r13)
/* 8010EFD4 0010C0B4  90 1D 00 44 */	stw r0, 0x44(r29)
/* 8010EFD8 0010C0B8  80 BD 00 24 */	lwz r5, 0x24(r29)
/* 8010EFDC 0010C0BC  A0 05 00 44 */	lhz r0, 0x44(r5)
/* 8010EFE0 0010C0C0  54 00 04 3C */	rlwinm r0, r0, 0, 16, 30
/* 8010EFE4 0010C0C4  B0 05 00 44 */	sth r0, 0x44(r5)
/* 8010EFE8 0010C0C8  A0 1D 00 06 */	lhz r0, 0x6(r29)
/* 8010EFEC 0010C0CC  70 00 FF EF */	andi. r0, r0, 0xffef
/* 8010EFF0 0010C0D0  B0 1D 00 06 */	sth r0, 0x6(r29)
/* 8010EFF4 0010C0D4  4B F1 05 FD */	bl zEntEvent__FP5xBaseUi
/* 8010EFF8 0010C0D8  7F A3 EB 78 */	mr r3, r29
/* 8010EFFC 0010C0DC  38 80 02 08 */	li r4, 0x208
/* 8010F000 0010C0E0  4B F1 05 F1 */	bl zEntEvent__FP5xBaseUi
.L_8010F004:
/* 8010F004 0010C0E4  BB 21 00 14 */	lmw r25, 0x14(r1)
/* 8010F008 0010C0E8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8010F00C 0010C0EC  7C 08 03 A6 */	mtlr r0
/* 8010F010 0010C0F0  38 21 00 30 */	addi r1, r1, 0x30
/* 8010F014 0010C0F4  4E 80 00 20 */	blr
.endfn xSkyDome_AddEntity__FP4xEntii

# SkyDomeInfo::operator=(const SkyDomeInfo&)
.fn __as__11SkyDomeInfoFRC11SkyDomeInfo, weak
/* 8010F018 0010C0F8  80 04 00 00 */	lwz r0, 0x0(r4)
/* 8010F01C 0010C0FC  80 A4 00 04 */	lwz r5, 0x4(r4)
/* 8010F020 0010C100  90 03 00 00 */	stw r0, 0x0(r3)
/* 8010F024 0010C104  80 04 00 08 */	lwz r0, 0x8(r4)
/* 8010F028 0010C108  90 A3 00 04 */	stw r5, 0x4(r3)
/* 8010F02C 0010C10C  90 03 00 08 */	stw r0, 0x8(r3)
/* 8010F030 0010C110  4E 80 00 20 */	blr
.endfn __as__11SkyDomeInfoFRC11SkyDomeInfo

# xSkyDome_Render()
.fn xSkyDome_Render__Fv, global
/* 8010F034 0010C114  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8010F038 0010C118  7C 08 02 A6 */	mflr r0
/* 8010F03C 0010C11C  3C 60 80 31 */	lis r3, sSkyList@ha
/* 8010F040 0010C120  90 01 00 34 */	stw r0, 0x34(r1)
/* 8010F044 0010C124  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 8010F048 0010C128  3B A3 37 28 */	addi r29, r3, sSkyList@l
/* 8010F04C 0010C12C  3C 60 80 11 */	lis r3, xSkyDome_EmptyRender__FP4xEnt@ha
/* 8010F050 0010C130  3B 80 00 00 */	li r28, 0x0
/* 8010F054 0010C134  3B E3 EE D8 */	addi r31, r3, xSkyDome_EmptyRender__FP4xEnt@l
/* 8010F058 0010C138  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8010F05C 0010C13C  80 84 00 00 */	lwz r4, 0x0(r4)
/* 8010F060 0010C140  83 C4 00 04 */	lwz r30, 0x4(r4)
/* 8010F064 0010C144  48 00 00 CC */	b .L_8010F130
.L_8010F068:
/* 8010F068 0010C148  83 7D 00 00 */	lwz r27, 0x0(r29)
/* 8010F06C 0010C14C  93 FB 00 44 */	stw r31, 0x44(r27)
/* 8010F070 0010C150  80 7B 00 24 */	lwz r3, 0x24(r27)
/* 8010F074 0010C154  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 8010F078 0010C158  54 00 04 3C */	rlwinm r0, r0, 0, 16, 30
/* 8010F07C 0010C15C  B0 03 00 44 */	sth r0, 0x44(r3)
/* 8010F080 0010C160  80 1B 00 24 */	lwz r0, 0x24(r27)
/* 8010F084 0010C164  28 00 00 00 */	cmplwi r0, 0x0
/* 8010F088 0010C168  41 82 00 A0 */	beq .L_8010F128
/* 8010F08C 0010C16C  7F 63 DB 78 */	mr r3, r27
/* 8010F090 0010C170  4B EF F5 A9 */	bl xEntIsVisible__FPC4xEnt
/* 8010F094 0010C174  28 03 00 00 */	cmplwi r3, 0x0
/* 8010F098 0010C178  41 82 00 90 */	beq .L_8010F128
/* 8010F09C 0010C17C  80 9B 00 24 */	lwz r4, 0x24(r27)
/* 8010F0A0 0010C180  38 61 00 08 */	addi r3, r1, 0x8
/* 8010F0A4 0010C184  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8010F0A8 0010C188  38 84 00 30 */	addi r4, r4, 0x30
/* 8010F0AC 0010C18C  4B F0 11 7D */	bl __as__5RwV3dFRC5RwV3d
/* 8010F0B0 0010C190  80 7B 00 24 */	lwz r3, 0x24(r27)
/* 8010F0B4 0010C194  C0 1E 00 40 */	lfs f0, 0x40(r30)
/* 8010F0B8 0010C198  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8010F0BC 0010C19C  D0 03 00 30 */	stfs f0, 0x30(r3)
/* 8010F0C0 0010C1A0  80 7B 00 24 */	lwz r3, 0x24(r27)
/* 8010F0C4 0010C1A4  C0 1E 00 48 */	lfs f0, 0x48(r30)
/* 8010F0C8 0010C1A8  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8010F0CC 0010C1AC  D0 03 00 38 */	stfs f0, 0x38(r3)
/* 8010F0D0 0010C1B0  80 1D 00 08 */	lwz r0, 0x8(r29)
/* 8010F0D4 0010C1B4  2C 00 00 00 */	cmpwi r0, 0x0
/* 8010F0D8 0010C1B8  41 82 00 14 */	beq .L_8010F0EC
/* 8010F0DC 0010C1BC  80 7B 00 24 */	lwz r3, 0x24(r27)
/* 8010F0E0 0010C1C0  C0 1E 00 44 */	lfs f0, 0x44(r30)
/* 8010F0E4 0010C1C4  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8010F0E8 0010C1C8  D0 03 00 34 */	stfs f0, 0x34(r3)
.L_8010F0EC:
/* 8010F0EC 0010C1CC  80 9B 00 24 */	lwz r4, 0x24(r27)
/* 8010F0F0 0010C1D0  80 64 00 10 */	lwz r3, 0x10(r4)
/* 8010F0F4 0010C1D4  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8010F0F8 0010C1D8  4B FB 90 E5 */	bl iModelCull__FP8RpAtomicP11RwMatrixTag
/* 8010F0FC 0010C1DC  2C 03 00 00 */	cmpwi r3, 0x0
/* 8010F100 0010C1E0  40 82 00 14 */	bne .L_8010F114
/* 8010F104 0010C1E4  80 9B 00 24 */	lwz r4, 0x24(r27)
/* 8010F108 0010C1E8  80 64 00 10 */	lwz r3, 0x10(r4)
/* 8010F10C 0010C1EC  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8010F110 0010C1F0  4B FB 8F E1 */	bl iModelRender__FP8RpAtomicP11RwMatrixTag
.L_8010F114:
/* 8010F114 0010C1F4  80 7B 00 24 */	lwz r3, 0x24(r27)
/* 8010F118 0010C1F8  38 81 00 08 */	addi r4, r1, 0x8
/* 8010F11C 0010C1FC  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8010F120 0010C200  38 63 00 30 */	addi r3, r3, 0x30
/* 8010F124 0010C204  4B F0 11 05 */	bl __as__5RwV3dFRC5RwV3d
.L_8010F128:
/* 8010F128 0010C208  3B BD 00 0C */	addi r29, r29, 0xc
/* 8010F12C 0010C20C  3B 9C 00 01 */	addi r28, r28, 0x1
.L_8010F130:
/* 8010F130 0010C210  80 0D 94 E8 */	lwz r0, sSkyCount@sda21(r13)
/* 8010F134 0010C214  7C 1C 00 00 */	cmpw r28, r0
/* 8010F138 0010C218  41 80 FF 30 */	blt .L_8010F068
/* 8010F13C 0010C21C  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 8010F140 0010C220  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8010F144 0010C224  7C 08 03 A6 */	mtlr r0
/* 8010F148 0010C228  38 21 00 30 */	addi r1, r1, 0x30
/* 8010F14C 0010C22C  4E 80 00 20 */	blr
.endfn xSkyDome_Render__Fv

# 0x80313728 - 0x80313788
.section .bss, "wa", @nobits
.balign 8

.obj sSkyList, local
	.skip 0x60
.endobj sSkyList

# 0x803CBDE8 - 0x803CBDF0
.section .sbss, "wa", @nobits
.balign 8

.obj sSkyCount, local
	.skip 0x4
.endobj sSkyCount
	.skip 0x4