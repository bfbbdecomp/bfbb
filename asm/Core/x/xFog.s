.include "macros.inc"
.file "xFog.cpp"

# 0x8001FDBC - 0x8001FFB0
.text
.balign 4

# xFogClearFog()
.fn xFogClearFog__Fv, global
/* 8001FDBC 0001CE9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001FDC0 0001CEA0  7C 08 02 A6 */	mflr r0
/* 8001FDC4 0001CEA4  38 60 00 00 */	li r3, 0x0
/* 8001FDC8 0001CEA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001FDCC 0001CEAC  C0 22 82 D0 */	lfs f1, "@638"@sda21(r2)
/* 8001FDD0 0001CEB0  48 0A 09 35 */	bl iCameraSetFogParams__FP10iFogParamsf
/* 8001FDD4 0001CEB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001FDD8 0001CEB8  7C 08 03 A6 */	mtlr r0
/* 8001FDDC 0001CEBC  38 21 00 10 */	addi r1, r1, 0x10
/* 8001FDE0 0001CEC0  4E 80 00 20 */	blr
.endfn xFogClearFog__Fv

# xFogInit(void*, void*)
.fn xFogInit__FPvPv, global
/* 8001FDE4 0001CEC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001FDE8 0001CEC8  7C 08 02 A6 */	mflr r0
/* 8001FDEC 0001CECC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001FDF0 0001CED0  48 00 00 15 */	bl xFogInit__FP5xBaseP9xFogAsset
/* 8001FDF4 0001CED4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001FDF8 0001CED8  7C 08 03 A6 */	mtlr r0
/* 8001FDFC 0001CEDC  38 21 00 10 */	addi r1, r1, 0x10
/* 8001FE00 0001CEE0  4E 80 00 20 */	blr
.endfn xFogInit__FPvPv

# xFogInit(xBase*, xFogAsset*)
.fn xFogInit__FP5xBaseP9xFogAsset, global
/* 8001FE04 0001CEE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001FE08 0001CEE8  7C 08 02 A6 */	mflr r0
/* 8001FE0C 0001CEEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001FE10 0001CEF0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8001FE14 0001CEF4  7C 9F 23 78 */	mr r31, r4
/* 8001FE18 0001CEF8  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8001FE1C 0001CEFC  7C 7E 1B 78 */	mr r30, r3
/* 8001FE20 0001CF00  4B FE 95 E1 */	bl xBaseInit__FP5xBaseP10xBaseAsset
/* 8001FE24 0001CF04  3C 60 80 02 */	lis r3, xFogEventCB__FP5xBaseP5xBaseUiPCfP5xBase@ha
/* 8001FE28 0001CF08  38 03 FE D4 */	addi r0, r3, xFogEventCB__FP5xBaseP5xBaseUiPCfP5xBase@l
/* 8001FE2C 0001CF0C  90 1E 00 0C */	stw r0, 0xc(r30)
/* 8001FE30 0001CF10  93 FE 00 10 */	stw r31, 0x10(r30)
/* 8001FE34 0001CF14  88 1E 00 05 */	lbz r0, 0x5(r30)
/* 8001FE38 0001CF18  28 00 00 00 */	cmplwi r0, 0x0
/* 8001FE3C 0001CF1C  41 82 00 14 */	beq .L_8001FE50
/* 8001FE40 0001CF20  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 8001FE44 0001CF24  38 03 00 24 */	addi r0, r3, 0x24
/* 8001FE48 0001CF28  90 1E 00 08 */	stw r0, 0x8(r30)
/* 8001FE4C 0001CF2C  48 00 00 0C */	b .L_8001FE58
.L_8001FE50:
/* 8001FE50 0001CF30  38 00 00 00 */	li r0, 0x0
/* 8001FE54 0001CF34  90 1E 00 08 */	stw r0, 0x8(r30)
.L_8001FE58:
/* 8001FE58 0001CF38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001FE5C 0001CF3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8001FE60 0001CF40  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8001FE64 0001CF44  7C 08 03 A6 */	mtlr r0
/* 8001FE68 0001CF48  38 21 00 10 */	addi r1, r1, 0x10
/* 8001FE6C 0001CF4C  4E 80 00 20 */	blr
.endfn xFogInit__FP5xBaseP9xFogAsset

# xFogReset(_xFog*)
.fn xFogReset__FP5_xFog, global
/* 8001FE70 0001CF50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001FE74 0001CF54  7C 08 02 A6 */	mflr r0
/* 8001FE78 0001CF58  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001FE7C 0001CF5C  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8001FE80 0001CF60  4B FE 96 79 */	bl xBaseReset__FP5xBaseP10xBaseAsset
/* 8001FE84 0001CF64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001FE88 0001CF68  7C 08 03 A6 */	mtlr r0
/* 8001FE8C 0001CF6C  38 21 00 10 */	addi r1, r1, 0x10
/* 8001FE90 0001CF70  4E 80 00 20 */	blr
.endfn xFogReset__FP5_xFog

# xFogSave(_xFog*, xSerial*)
.fn xFogSave__FP5_xFogP7xSerial, global
/* 8001FE94 0001CF74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001FE98 0001CF78  7C 08 02 A6 */	mflr r0
/* 8001FE9C 0001CF7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001FEA0 0001CF80  4B FE 95 AD */	bl xBaseSave__FP5xBaseP7xSerial
/* 8001FEA4 0001CF84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001FEA8 0001CF88  7C 08 03 A6 */	mtlr r0
/* 8001FEAC 0001CF8C  38 21 00 10 */	addi r1, r1, 0x10
/* 8001FEB0 0001CF90  4E 80 00 20 */	blr
.endfn xFogSave__FP5_xFogP7xSerial

# xFogLoad(_xFog*, xSerial*)
.fn xFogLoad__FP5_xFogP7xSerial, global
/* 8001FEB4 0001CF94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001FEB8 0001CF98  7C 08 02 A6 */	mflr r0
/* 8001FEBC 0001CF9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001FEC0 0001CFA0  4B FE 95 DD */	bl xBaseLoad__FP5xBaseP7xSerial
/* 8001FEC4 0001CFA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001FEC8 0001CFA8  7C 08 03 A6 */	mtlr r0
/* 8001FECC 0001CFAC  38 21 00 10 */	addi r1, r1, 0x10
/* 8001FED0 0001CFB0  4E 80 00 20 */	blr
.endfn xFogLoad__FP5_xFogP7xSerial

# xFogEventCB(xBase*, xBase*, unsigned int, const float*, xBase*)
.fn xFogEventCB__FP5xBaseP5xBaseUiPCfP5xBase, global
/* 8001FED4 0001CFB4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8001FED8 0001CFB8  7C 08 02 A6 */	mflr r0
/* 8001FEDC 0001CFBC  2C 05 00 26 */	cmpwi r5, 0x26
/* 8001FEE0 0001CFC0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8001FEE4 0001CFC4  41 82 00 20 */	beq .L_8001FF04
/* 8001FEE8 0001CFC8  40 80 00 10 */	bge .L_8001FEF8
/* 8001FEEC 0001CFCC  2C 05 00 0A */	cmpwi r5, 0xa
/* 8001FEF0 0001CFD0  41 82 00 A0 */	beq .L_8001FF90
/* 8001FEF4 0001CFD4  48 00 00 A4 */	b .L_8001FF98
.L_8001FEF8:
/* 8001FEF8 0001CFD8  2C 05 00 28 */	cmpwi r5, 0x28
/* 8001FEFC 0001CFDC  40 80 00 9C */	bge .L_8001FF98
/* 8001FF00 0001CFE0  48 00 00 80 */	b .L_8001FF80
.L_8001FF04:
/* 8001FF04 0001CFE4  38 60 00 01 */	li r3, 0x1
/* 8001FF08 0001CFE8  38 00 00 00 */	li r0, 0x0
/* 8001FF0C 0001CFEC  90 61 00 08 */	stw r3, 0x8(r1)
/* 8001FF10 0001CFF0  38 61 00 08 */	addi r3, r1, 0x8
/* 8001FF14 0001CFF4  80 A4 00 10 */	lwz r5, 0x10(r4)
/* 8001FF18 0001CFF8  C0 05 00 14 */	lfs f0, 0x14(r5)
/* 8001FF1C 0001CFFC  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8001FF20 0001D000  C0 05 00 18 */	lfs f0, 0x18(r5)
/* 8001FF24 0001D004  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8001FF28 0001D008  C0 05 00 10 */	lfs f0, 0x10(r5)
/* 8001FF2C 0001D00C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8001FF30 0001D010  88 85 00 0C */	lbz r4, 0xc(r5)
/* 8001FF34 0001D014  98 81 00 18 */	stb r4, 0x18(r1)
/* 8001FF38 0001D018  88 85 00 0D */	lbz r4, 0xd(r5)
/* 8001FF3C 0001D01C  98 81 00 19 */	stb r4, 0x19(r1)
/* 8001FF40 0001D020  88 85 00 0E */	lbz r4, 0xe(r5)
/* 8001FF44 0001D024  98 81 00 1A */	stb r4, 0x1a(r1)
/* 8001FF48 0001D028  88 85 00 0F */	lbz r4, 0xf(r5)
/* 8001FF4C 0001D02C  98 81 00 1B */	stb r4, 0x1b(r1)
/* 8001FF50 0001D030  88 85 00 08 */	lbz r4, 0x8(r5)
/* 8001FF54 0001D034  98 81 00 1C */	stb r4, 0x1c(r1)
/* 8001FF58 0001D038  88 85 00 09 */	lbz r4, 0x9(r5)
/* 8001FF5C 0001D03C  98 81 00 1D */	stb r4, 0x1d(r1)
/* 8001FF60 0001D040  88 85 00 0A */	lbz r4, 0xa(r5)
/* 8001FF64 0001D044  98 81 00 1E */	stb r4, 0x1e(r1)
/* 8001FF68 0001D048  88 85 00 0B */	lbz r4, 0xb(r5)
/* 8001FF6C 0001D04C  98 81 00 1F */	stb r4, 0x1f(r1)
/* 8001FF70 0001D050  90 01 00 20 */	stw r0, 0x20(r1)
/* 8001FF74 0001D054  C0 25 00 1C */	lfs f1, 0x1c(r5)
/* 8001FF78 0001D058  48 0A 07 8D */	bl iCameraSetFogParams__FP10iFogParamsf
/* 8001FF7C 0001D05C  48 00 00 1C */	b .L_8001FF98
.L_8001FF80:
/* 8001FF80 0001D060  C0 22 82 D0 */	lfs f1, "@638"@sda21(r2)
/* 8001FF84 0001D064  38 60 00 00 */	li r3, 0x0
/* 8001FF88 0001D068  48 0A 07 7D */	bl iCameraSetFogParams__FP10iFogParamsf
/* 8001FF8C 0001D06C  48 00 00 0C */	b .L_8001FF98
.L_8001FF90:
/* 8001FF90 0001D070  7C 83 23 78 */	mr r3, r4
/* 8001FF94 0001D074  4B FF FE DD */	bl xFogReset__FP5_xFog
.L_8001FF98:
/* 8001FF98 0001D078  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8001FF9C 0001D07C  38 60 00 01 */	li r3, 0x1
/* 8001FFA0 0001D080  7C 08 03 A6 */	mtlr r0
/* 8001FFA4 0001D084  38 21 00 30 */	addi r1, r1, 0x30
/* 8001FFA8 0001D088  4E 80 00 20 */	blr
.endfn xFogEventCB__FP5xBaseP5xBaseUiPCfP5xBase

# xFogUpdate(xBase*, xScene*, float)
.fn xFogUpdate__FP5xBaseP6xScenef, global
/* 8001FFAC 0001D08C  4E 80 00 20 */	blr
.endfn xFogUpdate__FP5xBaseP6xScenef

# 0x803CCC50 - 0x803CCC58
.section .sdata2, "a"
.balign 8

.obj "@638", local
	.4byte 0x00000000
.endobj "@638"
	.4byte 0x00000000
