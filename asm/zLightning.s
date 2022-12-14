.include "macros.inc"
.file "zLightning.cpp"

# 0x8009EC78 - 0x800A1D08
.text
.balign 4

# lightningTweakChangeType(const tweak_info&)
.fn lightningTweakChangeType__FRC10tweak_info, local
/* 8009EC78 0009BD58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009EC7C 0009BD5C  7C 08 02 A6 */	mflr r0
/* 8009EC80 0009BD60  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009EC84 0009BD64  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009EC88 0009BD68  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009EC8C 0009BD6C  38 63 00 18 */	addi r3, r3, 0x18
/* 8009EC90 0009BD70  4B F7 72 11 */	bl xDebugRemoveTweak__FPCc
/* 8009EC94 0009BD74  3C 60 80 3C */	lis r3, gLightningTweakAddInfo@ha
/* 8009EC98 0009BD78  38 83 05 18 */	addi r4, r3, gLightningTweakAddInfo@l
/* 8009EC9C 0009BD7C  80 04 00 00 */	lwz r0, 0x0(r4)
/* 8009ECA0 0009BD80  2C 00 00 01 */	cmpwi r0, 0x1
/* 8009ECA4 0009BD84  41 82 00 18 */	beq .L_8009ECBC
/* 8009ECA8 0009BD88  40 80 00 08 */	bge .L_8009ECB0
/* 8009ECAC 0009BD8C  48 00 00 F4 */	b .L_8009EDA0
.L_8009ECB0:
/* 8009ECB0 0009BD90  2C 00 00 03 */	cmpwi r0, 0x3
/* 8009ECB4 0009BD94  40 80 00 EC */	bge .L_8009EDA0
/* 8009ECB8 0009BD98  48 00 00 60 */	b .L_8009ED18
.L_8009ECBC:
/* 8009ECBC 0009BD9C  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009ECC0 0009BDA0  C0 22 92 20 */	lfs f1, "@668"@sda21(r2)
/* 8009ECC4 0009BDA4  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009ECC8 0009BDA8  C0 42 92 24 */	lfs f2, "@669"@sda21(r2)
/* 8009ECCC 0009BDAC  38 63 00 2D */	addi r3, r3, 0x2d
/* 8009ECD0 0009BDB0  38 84 00 04 */	addi r4, r4, 0x4
/* 8009ECD4 0009BDB4  38 A0 00 00 */	li r5, 0x0
/* 8009ECD8 0009BDB8  38 C0 00 00 */	li r6, 0x0
/* 8009ECDC 0009BDBC  38 E0 00 02 */	li r7, 0x2
/* 8009ECE0 0009BDC0  4B F9 19 4D */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8009ECE4 0009BDC4  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 8009ECE8 0009BDC8  3C 60 80 3C */	lis r3, gLightningTweakAddInfo@ha
/* 8009ECEC 0009BDCC  38 A4 CD 50 */	addi r5, r4, "@stringBase0"@l
/* 8009ECF0 0009BDD0  C0 22 92 20 */	lfs f1, "@668"@sda21(r2)
/* 8009ECF4 0009BDD4  38 83 05 18 */	addi r4, r3, gLightningTweakAddInfo@l
/* 8009ECF8 0009BDD8  C0 42 92 24 */	lfs f2, "@669"@sda21(r2)
/* 8009ECFC 0009BDDC  38 65 00 50 */	addi r3, r5, 0x50
/* 8009ED00 0009BDE0  38 A0 00 00 */	li r5, 0x0
/* 8009ED04 0009BDE4  38 84 00 08 */	addi r4, r4, 0x8
/* 8009ED08 0009BDE8  38 C0 00 00 */	li r6, 0x0
/* 8009ED0C 0009BDEC  38 E0 00 02 */	li r7, 0x2
/* 8009ED10 0009BDF0  4B F9 19 1D */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8009ED14 0009BDF4  48 00 00 8C */	b .L_8009EDA0
.L_8009ED18:
/* 8009ED18 0009BDF8  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009ED1C 0009BDFC  C0 22 92 28 */	lfs f1, "@670"@sda21(r2)
/* 8009ED20 0009BE00  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009ED24 0009BE04  C0 42 92 2C */	lfs f2, "@671"@sda21(r2)
/* 8009ED28 0009BE08  38 63 00 72 */	addi r3, r3, 0x72
/* 8009ED2C 0009BE0C  38 84 00 34 */	addi r4, r4, 0x34
/* 8009ED30 0009BE10  38 A0 00 00 */	li r5, 0x0
/* 8009ED34 0009BE14  38 C0 00 00 */	li r6, 0x0
/* 8009ED38 0009BE18  38 E0 00 02 */	li r7, 0x2
/* 8009ED3C 0009BE1C  4B F9 18 F1 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8009ED40 0009BE20  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 8009ED44 0009BE24  3C 60 80 3C */	lis r3, gLightningTweakAddInfo@ha
/* 8009ED48 0009BE28  38 A4 CD 50 */	addi r5, r4, "@stringBase0"@l
/* 8009ED4C 0009BE2C  C0 22 92 28 */	lfs f1, "@670"@sda21(r2)
/* 8009ED50 0009BE30  38 83 05 18 */	addi r4, r3, gLightningTweakAddInfo@l
/* 8009ED54 0009BE34  C0 42 92 2C */	lfs f2, "@671"@sda21(r2)
/* 8009ED58 0009BE38  38 65 00 95 */	addi r3, r5, 0x95
/* 8009ED5C 0009BE3C  38 A0 00 00 */	li r5, 0x0
/* 8009ED60 0009BE40  38 84 00 38 */	addi r4, r4, 0x38
/* 8009ED64 0009BE44  38 C0 00 00 */	li r6, 0x0
/* 8009ED68 0009BE48  38 E0 00 02 */	li r7, 0x2
/* 8009ED6C 0009BE4C  4B F9 18 C1 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8009ED70 0009BE50  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 8009ED74 0009BE54  3C 60 80 3C */	lis r3, gLightningTweakAddInfo@ha
/* 8009ED78 0009BE58  38 A4 CD 50 */	addi r5, r4, "@stringBase0"@l
/* 8009ED7C 0009BE5C  C0 22 92 30 */	lfs f1, "@672"@sda21(r2)
/* 8009ED80 0009BE60  38 83 05 18 */	addi r4, r3, gLightningTweakAddInfo@l
/* 8009ED84 0009BE64  C0 42 92 2C */	lfs f2, "@671"@sda21(r2)
/* 8009ED88 0009BE68  38 65 00 B6 */	addi r3, r5, 0xb6
/* 8009ED8C 0009BE6C  38 A0 00 00 */	li r5, 0x0
/* 8009ED90 0009BE70  38 84 00 3C */	addi r4, r4, 0x3c
/* 8009ED94 0009BE74  38 C0 00 00 */	li r6, 0x0
/* 8009ED98 0009BE78  38 E0 00 02 */	li r7, 0x2
/* 8009ED9C 0009BE7C  4B F9 18 91 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
.L_8009EDA0:
/* 8009EDA0 0009BE80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009EDA4 0009BE84  7C 08 03 A6 */	mtlr r0
/* 8009EDA8 0009BE88  38 21 00 10 */	addi r1, r1, 0x10
/* 8009EDAC 0009BE8C  4E 80 00 20 */	blr
.endfn lightningTweakChangeType__FRC10tweak_info

# lightningTweakStart(const tweak_info&)
.fn lightningTweakStart__FRC10tweak_info, local
/* 8009EDB0 0009BE90  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8009EDB4 0009BE94  7C 08 02 A6 */	mflr r0
/* 8009EDB8 0009BE98  3C 80 80 2F */	lis r4, sTweakStart@ha
/* 8009EDBC 0009BE9C  3C 60 80 3C */	lis r3, globals@ha
/* 8009EDC0 0009BEA0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8009EDC4 0009BEA4  38 A4 96 D8 */	addi r5, r4, sTweakStart@l
/* 8009EDC8 0009BEA8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8009EDCC 0009BEAC  3B E3 05 58 */	addi r31, r3, globals@l
/* 8009EDD0 0009BEB0  38 61 00 14 */	addi r3, r1, 0x14
/* 8009EDD4 0009BEB4  80 DF 07 04 */	lwz r6, 0x704(r31)
/* 8009EDD8 0009BEB8  80 86 00 4C */	lwz r4, 0x4c(r6)
/* 8009EDDC 0009BEBC  38 84 00 30 */	addi r4, r4, 0x30
/* 8009EDE0 0009BEC0  4B F6 C2 D9 */	bl xVec3Add__FP5xVec3PC5xVec3PC5xVec3
/* 8009EDE4 0009BEC4  80 9F 07 04 */	lwz r4, 0x704(r31)
/* 8009EDE8 0009BEC8  3C 60 80 2F */	lis r3, sTweakEnd@ha
/* 8009EDEC 0009BECC  38 A3 96 E4 */	addi r5, r3, sTweakEnd@l
/* 8009EDF0 0009BED0  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8009EDF4 0009BED4  38 61 00 08 */	addi r3, r1, 0x8
/* 8009EDF8 0009BED8  38 84 00 30 */	addi r4, r4, 0x30
/* 8009EDFC 0009BEDC  4B F6 C2 BD */	bl xVec3Add__FP5xVec3PC5xVec3PC5xVec3
/* 8009EE00 0009BEE0  3C 60 80 3C */	lis r3, gLightningTweakAddInfo@ha
/* 8009EE04 0009BEE4  38 81 00 14 */	addi r4, r1, 0x14
/* 8009EE08 0009BEE8  38 63 05 18 */	addi r3, r3, gLightningTweakAddInfo@l
/* 8009EE0C 0009BEEC  38 01 00 08 */	addi r0, r1, 0x8
/* 8009EE10 0009BEF0  90 83 00 10 */	stw r4, 0x10(r3)
/* 8009EE14 0009BEF4  90 03 00 14 */	stw r0, 0x14(r3)
/* 8009EE18 0009BEF8  48 00 0B 59 */	bl zLightningAdd__FP16_tagLightningAdd
/* 8009EE1C 0009BEFC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8009EE20 0009BF00  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8009EE24 0009BF04  7C 08 03 A6 */	mtlr r0
/* 8009EE28 0009BF08  38 21 00 30 */	addi r1, r1, 0x30
/* 8009EE2C 0009BF0C  4E 80 00 20 */	blr
.endfn lightningTweakStart__FRC10tweak_info

# zLightningInit()
.fn zLightningInit__Fv, global
/* 8009EE30 0009BF10  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 8009EE34 0009BF14  7C 08 02 A6 */	mflr r0
/* 8009EE38 0009BF18  90 01 00 94 */	stw r0, 0x94(r1)
/* 8009EE3C 0009BF1C  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 8009EE40 0009BF20  F3 E1 00 88 */	psq_st f31, 0x88(r1), 0, qr0
/* 8009EE44 0009BF24  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 8009EE48 0009BF28  F3 C1 00 78 */	psq_st f30, 0x78(r1), 0, qr0
/* 8009EE4C 0009BF2C  BE 81 00 40 */	stmw r20, 0x40(r1)
/* 8009EE50 0009BF30  3C 80 80 2F */	lis r4, ...bss.0@ha
/* 8009EE54 0009BF34  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009EE58 0009BF38  3B E4 90 C8 */	addi r31, r4, ...bss.0@l
/* 8009EE5C 0009BF3C  38 00 00 00 */	li r0, 0x0
/* 8009EE60 0009BF40  38 9F 00 00 */	addi r4, r31, 0x0
/* 8009EE64 0009BF44  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009EE68 0009BF48  90 04 00 00 */	stw r0, 0x0(r4)
/* 8009EE6C 0009BF4C  38 63 00 D7 */	addi r3, r3, 0xd7
/* 8009EE70 0009BF50  90 04 00 04 */	stw r0, 0x4(r4)
/* 8009EE74 0009BF54  90 04 00 08 */	stw r0, 0x8(r4)
/* 8009EE78 0009BF58  90 04 00 0C */	stw r0, 0xc(r4)
/* 8009EE7C 0009BF5C  90 04 00 10 */	stw r0, 0x10(r4)
/* 8009EE80 0009BF60  90 04 00 14 */	stw r0, 0x14(r4)
/* 8009EE84 0009BF64  90 04 00 18 */	stw r0, 0x18(r4)
/* 8009EE88 0009BF68  90 04 00 1C */	stw r0, 0x1c(r4)
/* 8009EE8C 0009BF6C  90 04 00 20 */	stw r0, 0x20(r4)
/* 8009EE90 0009BF70  90 04 00 24 */	stw r0, 0x24(r4)
/* 8009EE94 0009BF74  90 04 00 28 */	stw r0, 0x28(r4)
/* 8009EE98 0009BF78  90 04 00 2C */	stw r0, 0x2c(r4)
/* 8009EE9C 0009BF7C  90 04 00 30 */	stw r0, 0x30(r4)
/* 8009EEA0 0009BF80  90 04 00 34 */	stw r0, 0x34(r4)
/* 8009EEA4 0009BF84  90 04 00 38 */	stw r0, 0x38(r4)
/* 8009EEA8 0009BF88  90 04 00 3C */	stw r0, 0x3c(r4)
/* 8009EEAC 0009BF8C  90 04 00 40 */	stw r0, 0x40(r4)
/* 8009EEB0 0009BF90  90 04 00 44 */	stw r0, 0x44(r4)
/* 8009EEB4 0009BF94  90 04 00 48 */	stw r0, 0x48(r4)
/* 8009EEB8 0009BF98  90 04 00 4C */	stw r0, 0x4c(r4)
/* 8009EEBC 0009BF9C  90 04 00 50 */	stw r0, 0x50(r4)
/* 8009EEC0 0009BFA0  90 04 00 54 */	stw r0, 0x54(r4)
/* 8009EEC4 0009BFA4  90 04 00 58 */	stw r0, 0x58(r4)
/* 8009EEC8 0009BFA8  90 04 00 5C */	stw r0, 0x5c(r4)
/* 8009EECC 0009BFAC  90 04 00 60 */	stw r0, 0x60(r4)
/* 8009EED0 0009BFB0  90 04 00 64 */	stw r0, 0x64(r4)
/* 8009EED4 0009BFB4  90 04 00 68 */	stw r0, 0x68(r4)
/* 8009EED8 0009BFB8  90 04 00 6C */	stw r0, 0x6c(r4)
/* 8009EEDC 0009BFBC  90 04 00 70 */	stw r0, 0x70(r4)
/* 8009EEE0 0009BFC0  90 04 00 74 */	stw r0, 0x74(r4)
/* 8009EEE4 0009BFC4  90 04 00 78 */	stw r0, 0x78(r4)
/* 8009EEE8 0009BFC8  90 04 00 7C */	stw r0, 0x7c(r4)
/* 8009EEEC 0009BFCC  90 04 00 80 */	stw r0, 0x80(r4)
/* 8009EEF0 0009BFD0  90 04 00 84 */	stw r0, 0x84(r4)
/* 8009EEF4 0009BFD4  90 04 00 88 */	stw r0, 0x88(r4)
/* 8009EEF8 0009BFD8  90 04 00 8C */	stw r0, 0x8c(r4)
/* 8009EEFC 0009BFDC  90 04 00 90 */	stw r0, 0x90(r4)
/* 8009EF00 0009BFE0  90 04 00 94 */	stw r0, 0x94(r4)
/* 8009EF04 0009BFE4  90 04 00 98 */	stw r0, 0x98(r4)
/* 8009EF08 0009BFE8  90 04 00 9C */	stw r0, 0x9c(r4)
/* 8009EF0C 0009BFEC  90 04 00 A0 */	stw r0, 0xa0(r4)
/* 8009EF10 0009BFF0  90 04 00 A4 */	stw r0, 0xa4(r4)
/* 8009EF14 0009BFF4  90 04 00 A8 */	stw r0, 0xa8(r4)
/* 8009EF18 0009BFF8  90 04 00 AC */	stw r0, 0xac(r4)
/* 8009EF1C 0009BFFC  90 04 00 B0 */	stw r0, 0xb0(r4)
/* 8009EF20 0009C000  90 04 00 B4 */	stw r0, 0xb4(r4)
/* 8009EF24 0009C004  90 04 00 B8 */	stw r0, 0xb8(r4)
/* 8009EF28 0009C008  90 04 00 BC */	stw r0, 0xbc(r4)
/* 8009EF2C 0009C00C  4B FA D2 E9 */	bl xStrHash__FPCc
/* 8009EF30 0009C010  48 01 5B 0D */	bl zSceneFindObject__FUi
/* 8009EF34 0009C014  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009EF38 0009C018  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009EF3C 0009C01C  38 63 00 E8 */	addi r3, r3, 0xe8
/* 8009EF40 0009C020  4B FA D2 D5 */	bl xStrHash__FPCc
/* 8009EF44 0009C024  38 80 00 00 */	li r4, 0x0
/* 8009EF48 0009C028  4B FA C7 C5 */	bl xSTFindAsset__FUiPUi
/* 8009EF4C 0009C02C  28 03 00 00 */	cmplwi r3, 0x0
/* 8009EF50 0009C030  41 82 00 0C */	beq .L_8009EF5C
/* 8009EF54 0009C034  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8009EF58 0009C038  90 0D 8F FC */	stw r0, sLightningRaster@sda21(r13)
.L_8009EF5C:
/* 8009EF5C 0009C03C  3B 9F 00 C0 */	addi r28, r31, 0xc0
/* 8009EF60 0009C040  3B 7F 02 00 */	addi r27, r31, 0x200
/* 8009EF64 0009C044  3B 5F 03 40 */	addi r26, r31, 0x340
/* 8009EF68 0009C048  38 00 00 03 */	li r0, 0x3
/* 8009EF6C 0009C04C  7F 89 E3 78 */	mr r9, r28
/* 8009EF70 0009C050  7F 6A DB 78 */	mr r10, r27
/* 8009EF74 0009C054  7F 4B D3 78 */	mr r11, r26
/* 8009EF78 0009C058  3A 80 00 00 */	li r20, 0x0
/* 8009EF7C 0009C05C  7C 09 03 A6 */	mtctr r0
.L_8009EF80:
/* 8009EF80 0009C060  38 14 00 01 */	addi r0, r20, 0x1
/* 8009EF84 0009C064  38 74 00 02 */	addi r3, r20, 0x2
/* 8009EF88 0009C068  54 05 28 34 */	slwi r5, r0, 5
/* 8009EF8C 0009C06C  54 6C 28 34 */	slwi r12, r3, 5
/* 8009EF90 0009C070  38 14 00 03 */	addi r0, r20, 0x3
/* 8009EF94 0009C074  7C 9C 2A 14 */	add r4, r28, r5
/* 8009EF98 0009C078  7C 7B 2A 14 */	add r3, r27, r5
/* 8009EF9C 0009C07C  7D 1A 2A 14 */	add r8, r26, r5
/* 8009EFA0 0009C080  90 89 00 1C */	stw r4, 0x1c(r9)
/* 8009EFA4 0009C084  7C FC 62 14 */	add r7, r28, r12
/* 8009EFA8 0009C088  54 00 28 34 */	slwi r0, r0, 5
/* 8009EFAC 0009C08C  90 6A 00 1C */	stw r3, 0x1c(r10)
/* 8009EFB0 0009C090  7C DB 62 14 */	add r6, r27, r12
/* 8009EFB4 0009C094  7C BA 62 14 */	add r5, r26, r12
/* 8009EFB8 0009C098  7C 9C 02 14 */	add r4, r28, r0
/* 8009EFBC 0009C09C  91 0B 00 1C */	stw r8, 0x1c(r11)
/* 8009EFC0 0009C0A0  7C 7B 02 14 */	add r3, r27, r0
/* 8009EFC4 0009C0A4  7C 1A 02 14 */	add r0, r26, r0
/* 8009EFC8 0009C0A8  3A 94 00 03 */	addi r20, r20, 0x3
/* 8009EFCC 0009C0AC  90 E9 00 3C */	stw r7, 0x3c(r9)
/* 8009EFD0 0009C0B0  90 CA 00 3C */	stw r6, 0x3c(r10)
/* 8009EFD4 0009C0B4  90 AB 00 3C */	stw r5, 0x3c(r11)
/* 8009EFD8 0009C0B8  90 89 00 5C */	stw r4, 0x5c(r9)
/* 8009EFDC 0009C0BC  39 29 00 60 */	addi r9, r9, 0x60
/* 8009EFE0 0009C0C0  90 6A 00 5C */	stw r3, 0x5c(r10)
/* 8009EFE4 0009C0C4  39 4A 00 60 */	addi r10, r10, 0x60
/* 8009EFE8 0009C0C8  90 0B 00 5C */	stw r0, 0x5c(r11)
/* 8009EFEC 0009C0CC  39 6B 00 60 */	addi r11, r11, 0x60
/* 8009EFF0 0009C0D0  42 00 FF 90 */	bdnz .L_8009EF80
/* 8009EFF4 0009C0D4  3B 00 00 00 */	li r24, 0x0
/* 8009EFF8 0009C0D8  38 BF 00 C0 */	addi r5, r31, 0xc0
/* 8009EFFC 0009C0DC  38 9F 02 00 */	addi r4, r31, 0x200
/* 8009F000 0009C0E0  38 7F 03 40 */	addi r3, r31, 0x340
/* 8009F004 0009C0E4  3B DF 04 80 */	addi r30, r31, 0x480
/* 8009F008 0009C0E8  3B BF 05 E8 */	addi r29, r31, 0x5e8
/* 8009F00C 0009C0EC  93 05 01 3C */	stw r24, 0x13c(r5)
/* 8009F010 0009C0F0  7F D5 F3 78 */	mr r21, r30
/* 8009F014 0009C0F4  7F B7 EB 78 */	mr r23, r29
/* 8009F018 0009C0F8  3A DF 04 F8 */	addi r22, r31, 0x4f8
/* 8009F01C 0009C0FC  93 04 01 3C */	stw r24, 0x13c(r4)
/* 8009F020 0009C100  3E 80 43 30 */	lis r20, 0x4330
/* 8009F024 0009C104  93 03 01 3C */	stw r24, 0x13c(r3)
.L_8009F028:
/* 8009F028 0009C108  4B F9 1C 61 */	bl xurand__Fv
/* 8009F02C 0009C10C  C0 42 92 38 */	lfs f2, "@761"@sda21(r2)
/* 8009F030 0009C110  C0 02 92 34 */	lfs f0, "@760"@sda21(r2)
/* 8009F034 0009C114  EC 21 10 28 */	fsubs f1, f1, f2
/* 8009F038 0009C118  EF E0 00 72 */	fmuls f31, f0, f1
/* 8009F03C 0009C11C  4B F9 1C 4D */	bl xurand__Fv
/* 8009F040 0009C120  C0 42 92 38 */	lfs f2, "@761"@sda21(r2)
/* 8009F044 0009C124  C0 02 92 34 */	lfs f0, "@760"@sda21(r2)
/* 8009F048 0009C128  EC 21 10 28 */	fsubs f1, f1, f2
/* 8009F04C 0009C12C  EF C0 00 72 */	fmuls f30, f0, f1
/* 8009F050 0009C130  4B F9 1C 39 */	bl xurand__Fv
/* 8009F054 0009C134  C0 82 92 38 */	lfs f4, "@761"@sda21(r2)
/* 8009F058 0009C138  FC 40 F0 90 */	fmr f2, f30
/* 8009F05C 0009C13C  C0 02 92 34 */	lfs f0, "@760"@sda21(r2)
/* 8009F060 0009C140  FC 60 F8 90 */	fmr f3, f31
/* 8009F064 0009C144  EC 21 20 28 */	fsubs f1, f1, f4
/* 8009F068 0009C148  7E A3 AB 78 */	mr r3, r21
/* 8009F06C 0009C14C  EC 20 00 72 */	fmuls f1, f0, f1
/* 8009F070 0009C150  4B F6 FF 8D */	bl xVec3Init__FP5xVec3fff
/* 8009F074 0009C154  4B F9 1C 15 */	bl xurand__Fv
/* 8009F078 0009C158  C0 02 92 38 */	lfs f0, "@761"@sda21(r2)
/* 8009F07C 0009C15C  C0 42 92 34 */	lfs f2, "@760"@sda21(r2)
/* 8009F080 0009C160  EC 21 00 28 */	fsubs f1, f1, f0
/* 8009F084 0009C164  C0 0D 82 A4 */	lfs f0, sLFuncSlopeRange@sda21(r13)
/* 8009F088 0009C168  EC 22 00 72 */	fmuls f1, f2, f1
/* 8009F08C 0009C16C  EF E0 00 72 */	fmuls f31, f0, f1
/* 8009F090 0009C170  4B F9 1B F9 */	bl xurand__Fv
/* 8009F094 0009C174  C0 02 92 38 */	lfs f0, "@761"@sda21(r2)
/* 8009F098 0009C178  C0 42 92 34 */	lfs f2, "@760"@sda21(r2)
/* 8009F09C 0009C17C  EC 21 00 28 */	fsubs f1, f1, f0
/* 8009F0A0 0009C180  C0 0D 82 A4 */	lfs f0, sLFuncSlopeRange@sda21(r13)
/* 8009F0A4 0009C184  EC 22 00 72 */	fmuls f1, f2, f1
/* 8009F0A8 0009C188  EF C0 00 72 */	fmuls f30, f0, f1
/* 8009F0AC 0009C18C  4B F9 1B DD */	bl xurand__Fv
/* 8009F0B0 0009C190  C0 02 92 38 */	lfs f0, "@761"@sda21(r2)
/* 8009F0B4 0009C194  FC 40 F0 90 */	fmr f2, f30
/* 8009F0B8 0009C198  C0 82 92 34 */	lfs f4, "@760"@sda21(r2)
/* 8009F0BC 0009C19C  FC 60 F8 90 */	fmr f3, f31
/* 8009F0C0 0009C1A0  EC 21 00 28 */	fsubs f1, f1, f0
/* 8009F0C4 0009C1A4  C0 0D 82 A4 */	lfs f0, sLFuncSlopeRange@sda21(r13)
/* 8009F0C8 0009C1A8  7E C3 B3 78 */	mr r3, r22
/* 8009F0CC 0009C1AC  EC 24 00 72 */	fmuls f1, f4, f1
/* 8009F0D0 0009C1B0  EC 20 00 72 */	fmuls f1, f0, f1
/* 8009F0D4 0009C1B4  4B F6 FF 29 */	bl xVec3Init__FP5xVec3fff
/* 8009F0D8 0009C1B8  4B F9 1B B1 */	bl xurand__Fv
/* 8009F0DC 0009C1BC  C0 02 92 38 */	lfs f0, "@761"@sda21(r2)
/* 8009F0E0 0009C1C0  C0 42 92 34 */	lfs f2, "@760"@sda21(r2)
/* 8009F0E4 0009C1C4  EC 21 00 28 */	fsubs f1, f1, f0
/* 8009F0E8 0009C1C8  C0 0D 82 A4 */	lfs f0, sLFuncSlopeRange@sda21(r13)
/* 8009F0EC 0009C1CC  EC 22 00 72 */	fmuls f1, f2, f1
/* 8009F0F0 0009C1D0  EF C0 00 72 */	fmuls f30, f0, f1
/* 8009F0F4 0009C1D4  4B F9 1B 95 */	bl xurand__Fv
/* 8009F0F8 0009C1D8  C0 02 92 38 */	lfs f0, "@761"@sda21(r2)
/* 8009F0FC 0009C1DC  C0 42 92 34 */	lfs f2, "@760"@sda21(r2)
/* 8009F100 0009C1E0  EC 21 00 28 */	fsubs f1, f1, f0
/* 8009F104 0009C1E4  C0 0D 82 A4 */	lfs f0, sLFuncSlopeRange@sda21(r13)
/* 8009F108 0009C1E8  EC 22 00 72 */	fmuls f1, f2, f1
/* 8009F10C 0009C1EC  EF E0 00 72 */	fmuls f31, f0, f1
/* 8009F110 0009C1F0  4B F9 1B 79 */	bl xurand__Fv
/* 8009F114 0009C1F4  C0 02 92 38 */	lfs f0, "@761"@sda21(r2)
/* 8009F118 0009C1F8  FC 40 F8 90 */	fmr f2, f31
/* 8009F11C 0009C1FC  C0 82 92 34 */	lfs f4, "@760"@sda21(r2)
/* 8009F120 0009C200  FC 60 F0 90 */	fmr f3, f30
/* 8009F124 0009C204  EC 21 00 28 */	fsubs f1, f1, f0
/* 8009F128 0009C208  C0 0D 82 A4 */	lfs f0, sLFuncSlopeRange@sda21(r13)
/* 8009F12C 0009C20C  38 76 00 0C */	addi r3, r22, 0xc
/* 8009F130 0009C210  EC 24 00 72 */	fmuls f1, f4, f1
/* 8009F134 0009C214  EC 20 00 72 */	fmuls f1, f0, f1
/* 8009F138 0009C218  4B F6 FE C5 */	bl xVec3Init__FP5xVec3fff
/* 8009F13C 0009C21C  4B F9 1B 4D */	bl xurand__Fv
/* 8009F140 0009C220  38 18 00 01 */	addi r0, r24, 0x1
/* 8009F144 0009C224  C0 02 92 38 */	lfs f0, "@761"@sda21(r2)
/* 8009F148 0009C228  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8009F14C 0009C22C  3B 18 00 01 */	addi r24, r24, 0x1
/* 8009F150 0009C230  90 01 00 34 */	stw r0, 0x34(r1)
/* 8009F154 0009C234  EC 61 00 28 */	fsubs f3, f1, f0
/* 8009F158 0009C238  C8 22 92 70 */	lfd f1, "@776"@sda21(r2)
/* 8009F15C 0009C23C  2C 18 00 0A */	cmpwi r24, 0xa
/* 8009F160 0009C240  92 81 00 30 */	stw r20, 0x30(r1)
/* 8009F164 0009C244  3A B5 00 0C */	addi r21, r21, 0xc
/* 8009F168 0009C248  C0 42 92 3C */	lfs f2, "@762"@sda21(r2)
/* 8009F16C 0009C24C  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 8009F170 0009C250  3A D6 00 18 */	addi r22, r22, 0x18
/* 8009F174 0009C254  EC 00 08 28 */	fsubs f0, f0, f1
/* 8009F178 0009C258  EC 02 00 FA */	fmadds f0, f2, f3, f0
/* 8009F17C 0009C25C  D0 17 00 00 */	stfs f0, 0x0(r23)
/* 8009F180 0009C260  3A F7 00 04 */	addi r23, r23, 0x4
/* 8009F184 0009C264  41 80 FE A4 */	blt .L_8009F028
/* 8009F188 0009C268  C0 02 92 40 */	lfs f0, "@763"@sda21(r2)
/* 8009F18C 0009C26C  38 7F 05 E8 */	addi r3, r31, 0x5e8
/* 8009F190 0009C270  3A A0 00 00 */	li r21, 0x0
/* 8009F194 0009C274  D0 03 00 24 */	stfs f0, 0x24(r3)
.L_8009F198:
/* 8009F198 0009C278  2C 15 00 00 */	cmpwi r21, 0x0
/* 8009F19C 0009C27C  40 82 00 10 */	bne .L_8009F1AC
/* 8009F1A0 0009C280  C3 C2 92 30 */	lfs f30, "@672"@sda21(r2)
/* 8009F1A4 0009C284  38 80 00 09 */	li r4, 0x9
/* 8009F1A8 0009C288  48 00 00 14 */	b .L_8009F1BC
.L_8009F1AC:
/* 8009F1AC 0009C28C  38 95 FF FF */	addi r4, r21, -0x1
/* 8009F1B0 0009C290  38 7F 05 E8 */	addi r3, r31, 0x5e8
/* 8009F1B4 0009C294  54 80 10 3A */	slwi r0, r4, 2
/* 8009F1B8 0009C298  7F C3 04 2E */	lfsx f30, r3, r0
.L_8009F1BC:
/* 8009F1BC 0009C29C  1C 04 00 0C */	mulli r0, r4, 0xc
/* 8009F1C0 0009C2A0  3A 9F 04 80 */	addi r20, r31, 0x480
/* 8009F1C4 0009C2A4  FC 20 F0 90 */	fmr f1, f30
/* 8009F1C8 0009C2A8  C0 5D 00 00 */	lfs f2, 0x0(r29)
/* 8009F1CC 0009C2AC  C0 9E 00 00 */	lfs f4, 0x0(r30)
/* 8009F1D0 0009C2B0  7F 83 E3 78 */	mr r3, r28
/* 8009F1D4 0009C2B4  7E 94 02 14 */	add r20, r20, r0
/* 8009F1D8 0009C2B8  C0 74 00 00 */	lfs f3, 0x0(r20)
/* 8009F1DC 0009C2BC  4B F9 25 8D */	bl xFuncPiece_EndPoints__FP10xFuncPieceffff
/* 8009F1E0 0009C2C0  FC 20 F0 90 */	fmr f1, f30
/* 8009F1E4 0009C2C4  C0 5D 00 00 */	lfs f2, 0x0(r29)
/* 8009F1E8 0009C2C8  C0 74 00 04 */	lfs f3, 0x4(r20)
/* 8009F1EC 0009C2CC  7F 63 DB 78 */	mr r3, r27
/* 8009F1F0 0009C2D0  C0 9E 00 04 */	lfs f4, 0x4(r30)
/* 8009F1F4 0009C2D4  4B F9 25 75 */	bl xFuncPiece_EndPoints__FP10xFuncPieceffff
/* 8009F1F8 0009C2D8  FC 20 F0 90 */	fmr f1, f30
/* 8009F1FC 0009C2DC  C0 5D 00 00 */	lfs f2, 0x0(r29)
/* 8009F200 0009C2E0  C0 74 00 08 */	lfs f3, 0x8(r20)
/* 8009F204 0009C2E4  7F 43 D3 78 */	mr r3, r26
/* 8009F208 0009C2E8  C0 9E 00 08 */	lfs f4, 0x8(r30)
/* 8009F20C 0009C2EC  4B F9 25 5D */	bl xFuncPiece_EndPoints__FP10xFuncPieceffff
/* 8009F210 0009C2F0  3A B5 00 01 */	addi r21, r21, 0x1
/* 8009F214 0009C2F4  3B BD 00 04 */	addi r29, r29, 0x4
/* 8009F218 0009C2F8  2C 15 00 0A */	cmpwi r21, 0xa
/* 8009F21C 0009C2FC  3B 9C 00 20 */	addi r28, r28, 0x20
/* 8009F220 0009C300  3B 7B 00 20 */	addi r27, r27, 0x20
/* 8009F224 0009C304  3B 5A 00 20 */	addi r26, r26, 0x20
/* 8009F228 0009C308  3B DE 00 0C */	addi r30, r30, 0xc
/* 8009F22C 0009C30C  41 80 FF 6C */	blt .L_8009F198
/* 8009F230 0009C310  C0 02 92 30 */	lfs f0, "@672"@sda21(r2)
/* 8009F234 0009C314  3C 60 80 3C */	lis r3, gLightningTweakAddInfo@ha
/* 8009F238 0009C318  38 63 05 18 */	addi r3, r3, gLightningTweakAddInfo@l
/* 8009F23C 0009C31C  38 80 00 03 */	li r4, 0x3
/* 8009F240 0009C320  D0 0D 90 00 */	stfs f0, sLFuncJerkTime@sda21(r13)
/* 8009F244 0009C324  3B 83 00 30 */	addi r28, r3, 0x30
/* 8009F248 0009C328  38 00 14 28 */	li r0, 0x1428
/* 8009F24C 0009C32C  3B 43 00 1C */	addi r26, r3, 0x1c
/* 8009F250 0009C330  90 83 00 00 */	stw r4, 0x0(r3)
/* 8009F254 0009C334  38 7F 06 10 */	addi r3, r31, 0x610
/* 8009F258 0009C338  90 1C 00 00 */	stw r0, 0x0(r28)
/* 8009F25C 0009C33C  C0 02 92 44 */	lfs f0, "@764"@sda21(r2)
/* 8009F260 0009C340  D0 1A 00 00 */	stfs f0, 0x0(r26)
/* 8009F264 0009C344  C0 22 92 48 */	lfs f1, "@765"@sda21(r2)
/* 8009F268 0009C348  C0 42 92 4C */	lfs f2, "@766"@sda21(r2)
/* 8009F26C 0009C34C  C0 62 92 30 */	lfs f3, "@672"@sda21(r2)
/* 8009F270 0009C350  4B F6 FD 8D */	bl xVec3Init__FP5xVec3fff
/* 8009F274 0009C354  C0 22 92 48 */	lfs f1, "@765"@sda21(r2)
/* 8009F278 0009C358  38 7F 06 1C */	addi r3, r31, 0x61c
/* 8009F27C 0009C35C  C0 42 92 34 */	lfs f2, "@760"@sda21(r2)
/* 8009F280 0009C360  C0 62 92 30 */	lfs f3, "@672"@sda21(r2)
/* 8009F284 0009C364  4B F6 FD 79 */	bl xVec3Init__FP5xVec3fff
/* 8009F288 0009C368  3C 60 80 3C */	lis r3, gLightningTweakAddInfo@ha
/* 8009F28C 0009C36C  3C C0 80 0A */	lis r6, lightningTweakStart__FRC10tweak_info@ha
/* 8009F290 0009C370  39 43 05 18 */	addi r10, r3, gLightningTweakAddInfo@l
/* 8009F294 0009C374  3C A0 80 0A */	lis r5, lightningTweakChangeType__FRC10tweak_info@ha
/* 8009F298 0009C378  3B AA 00 28 */	addi r29, r10, 0x28
/* 8009F29C 0009C37C  38 E0 00 C8 */	li r7, 0xc8
/* 8009F2A0 0009C380  3B CA 00 29 */	addi r30, r10, 0x29
/* 8009F2A4 0009C384  3B 0A 00 2B */	addi r24, r10, 0x2b
/* 8009F2A8 0009C388  3B 2A 00 2A */	addi r25, r10, 0x2a
/* 8009F2AC 0009C38C  38 00 00 FF */	li r0, 0xff
/* 8009F2B0 0009C390  98 EA 00 28 */	stb r7, 0x28(r10)
/* 8009F2B4 0009C394  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F2B8 0009C398  3A CA 00 20 */	addi r22, r10, 0x20
/* 8009F2BC 0009C39C  3A EA 00 0C */	addi r23, r10, 0xc
/* 8009F2C0 0009C3A0  98 EA 00 29 */	stb r7, 0x29(r10)
/* 8009F2C4 0009C3A4  38 83 CD 50 */	addi r4, r3, "@stringBase0"@l
/* 8009F2C8 0009C3A8  3A AA 00 24 */	addi r21, r10, 0x24
/* 8009F2CC 0009C3AC  3A 8A 00 2C */	addi r20, r10, 0x2c
/* 8009F2D0 0009C3B0  98 0A 00 2A */	stb r0, 0x2a(r10)
/* 8009F2D4 0009C3B4  3B 6A 00 18 */	addi r27, r10, 0x18
/* 8009F2D8 0009C3B8  39 20 00 10 */	li r9, 0x10
/* 8009F2DC 0009C3BC  39 06 ED B0 */	addi r8, r6, lightningTweakStart__FRC10tweak_info@l
/* 8009F2E0 0009C3C0  98 EA 00 2B */	stb r7, 0x2b(r10)
/* 8009F2E4 0009C3C4  38 05 EC 78 */	addi r0, r5, lightningTweakChangeType__FRC10tweak_info@l
/* 8009F2E8 0009C3C8  38 64 00 F2 */	addi r3, r4, 0xf2
/* 8009F2EC 0009C3CC  38 84 01 01 */	addi r4, r4, 0x101
/* 8009F2F0 0009C3D0  C0 02 92 38 */	lfs f0, "@761"@sda21(r2)
/* 8009F2F4 0009C3D4  38 BF 06 28 */	addi r5, r31, 0x628
/* 8009F2F8 0009C3D8  38 C0 00 00 */	li r6, 0x0
/* 8009F2FC 0009C3DC  38 E0 00 02 */	li r7, 0x2
/* 8009F300 0009C3E0  D0 0A 00 20 */	stfs f0, 0x20(r10)
/* 8009F304 0009C3E4  C0 02 92 50 */	lfs f0, "@767"@sda21(r2)
/* 8009F308 0009C3E8  D0 0A 00 0C */	stfs f0, 0xc(r10)
/* 8009F30C 0009C3EC  C0 02 92 3C */	lfs f0, "@762"@sda21(r2)
/* 8009F310 0009C3F0  D0 0A 00 24 */	stfs f0, 0x24(r10)
/* 8009F314 0009C3F4  C0 02 92 54 */	lfs f0, "@768"@sda21(r2)
/* 8009F318 0009C3F8  D0 0A 00 2C */	stfs f0, 0x2c(r10)
/* 8009F31C 0009C3FC  C0 02 92 58 */	lfs f0, "@769"@sda21(r2)
/* 8009F320 0009C400  D0 0A 00 08 */	stfs f0, 0x8(r10)
/* 8009F324 0009C404  C0 02 92 5C */	lfs f0, "@770"@sda21(r2)
/* 8009F328 0009C408  D0 0A 00 04 */	stfs f0, 0x4(r10)
/* 8009F32C 0009C40C  B1 2A 00 18 */	sth r9, 0x18(r10)
/* 8009F330 0009C410  C0 02 92 60 */	lfs f0, "@771"@sda21(r2)
/* 8009F334 0009C414  D0 0A 00 34 */	stfs f0, 0x34(r10)
/* 8009F338 0009C418  C0 02 92 64 */	lfs f0, "@772"@sda21(r2)
/* 8009F33C 0009C41C  D0 0A 00 38 */	stfs f0, 0x38(r10)
/* 8009F340 0009C420  C0 02 92 30 */	lfs f0, "@672"@sda21(r2)
/* 8009F344 0009C424  D0 0A 00 3C */	stfs f0, 0x3c(r10)
/* 8009F348 0009C428  91 1F 06 28 */	stw r8, 0x628(r31)
/* 8009F34C 0009C42C  90 1F 06 50 */	stw r0, 0x650(r31)
/* 8009F350 0009C430  4B FF 7F 61 */	bl xDebugAddTweak__FPCcPCcPC14tweak_callbackPvUi
/* 8009F354 0009C434  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F358 0009C438  C0 22 92 30 */	lfs f1, "@672"@sda21(r2)
/* 8009F35C 0009C43C  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F360 0009C440  C0 42 92 24 */	lfs f2, "@669"@sda21(r2)
/* 8009F364 0009C444  38 63 01 11 */	addi r3, r3, 0x111
/* 8009F368 0009C448  38 8D 82 80 */	addi r4, r13, sLFuncJerkFreq@sda21
/* 8009F36C 0009C44C  38 A0 00 00 */	li r5, 0x0
/* 8009F370 0009C450  38 C0 00 00 */	li r6, 0x0
/* 8009F374 0009C454  38 E0 00 02 */	li r7, 0x2
/* 8009F378 0009C458  4B F9 12 B5 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8009F37C 0009C45C  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F380 0009C460  C0 22 92 30 */	lfs f1, "@672"@sda21(r2)
/* 8009F384 0009C464  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F388 0009C468  C0 42 92 24 */	lfs f2, "@669"@sda21(r2)
/* 8009F38C 0009C46C  38 63 01 34 */	addi r3, r3, 0x134
/* 8009F390 0009C470  38 8D 82 84 */	addi r4, r13, sLFuncShift@sda21
/* 8009F394 0009C474  38 A0 00 00 */	li r5, 0x0
/* 8009F398 0009C478  38 C0 00 00 */	li r6, 0x0
/* 8009F39C 0009C47C  38 E0 00 02 */	li r7, 0x2
/* 8009F3A0 0009C480  4B F9 12 8D */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8009F3A4 0009C484  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F3A8 0009C488  C0 22 92 30 */	lfs f1, "@672"@sda21(r2)
/* 8009F3AC 0009C48C  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F3B0 0009C490  C0 42 92 24 */	lfs f2, "@669"@sda21(r2)
/* 8009F3B4 0009C494  38 63 01 54 */	addi r3, r3, 0x154
/* 8009F3B8 0009C498  38 8D 82 8C */	addi r4, r13, sLFuncMinPStep@sda21
/* 8009F3BC 0009C49C  38 A0 00 00 */	li r5, 0x0
/* 8009F3C0 0009C4A0  38 C0 00 00 */	li r6, 0x0
/* 8009F3C4 0009C4A4  38 E0 00 02 */	li r7, 0x2
/* 8009F3C8 0009C4A8  4B F9 12 65 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8009F3CC 0009C4AC  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F3D0 0009C4B0  C0 22 92 30 */	lfs f1, "@672"@sda21(r2)
/* 8009F3D4 0009C4B4  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F3D8 0009C4B8  C0 42 92 24 */	lfs f2, "@669"@sda21(r2)
/* 8009F3DC 0009C4BC  38 63 01 72 */	addi r3, r3, 0x172
/* 8009F3E0 0009C4C0  38 8D 82 88 */	addi r4, r13, sLFuncMaxPStep@sda21
/* 8009F3E4 0009C4C4  38 A0 00 00 */	li r5, 0x0
/* 8009F3E8 0009C4C8  38 C0 00 00 */	li r6, 0x0
/* 8009F3EC 0009C4CC  38 E0 00 02 */	li r7, 0x2
/* 8009F3F0 0009C4D0  4B F9 12 3D */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8009F3F4 0009C4D4  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F3F8 0009C4D8  C0 22 92 30 */	lfs f1, "@672"@sda21(r2)
/* 8009F3FC 0009C4DC  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F400 0009C4E0  C0 42 92 24 */	lfs f2, "@669"@sda21(r2)
/* 8009F404 0009C4E4  38 63 01 90 */	addi r3, r3, 0x190
/* 8009F408 0009C4E8  38 8D 82 90 */	addi r4, r13, sLFuncMinScale@sda21
/* 8009F40C 0009C4EC  38 A0 00 00 */	li r5, 0x0
/* 8009F410 0009C4F0  38 C0 00 00 */	li r6, 0x0
/* 8009F414 0009C4F4  38 E0 00 02 */	li r7, 0x2
/* 8009F418 0009C4F8  4B F9 12 15 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8009F41C 0009C4FC  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F420 0009C500  C0 22 92 30 */	lfs f1, "@672"@sda21(r2)
/* 8009F424 0009C504  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F428 0009C508  C0 42 92 24 */	lfs f2, "@669"@sda21(r2)
/* 8009F42C 0009C50C  38 63 01 AE */	addi r3, r3, 0x1ae
/* 8009F430 0009C510  38 8D 82 94 */	addi r4, r13, sLFuncMaxScale@sda21
/* 8009F434 0009C514  38 A0 00 00 */	li r5, 0x0
/* 8009F438 0009C518  38 C0 00 00 */	li r6, 0x0
/* 8009F43C 0009C51C  38 E0 00 02 */	li r7, 0x2
/* 8009F440 0009C520  4B F9 11 ED */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8009F444 0009C524  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F448 0009C528  C0 22 92 30 */	lfs f1, "@672"@sda21(r2)
/* 8009F44C 0009C52C  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F450 0009C530  C0 42 92 24 */	lfs f2, "@669"@sda21(r2)
/* 8009F454 0009C534  38 63 01 CC */	addi r3, r3, 0x1cc
/* 8009F458 0009C538  38 8D 82 98 */	addi r4, r13, sLFuncScalePerLength@sda21
/* 8009F45C 0009C53C  38 A0 00 00 */	li r5, 0x0
/* 8009F460 0009C540  38 C0 00 00 */	li r6, 0x0
/* 8009F464 0009C544  38 E0 00 02 */	li r7, 0x2
/* 8009F468 0009C548  4B F9 11 C5 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8009F46C 0009C54C  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F470 0009C550  C0 22 92 30 */	lfs f1, "@672"@sda21(r2)
/* 8009F474 0009C554  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F478 0009C558  C0 42 92 24 */	lfs f2, "@669"@sda21(r2)
/* 8009F47C 0009C55C  38 63 01 F0 */	addi r3, r3, 0x1f0
/* 8009F480 0009C560  38 8D 82 9C */	addi r4, r13, sLFuncMinSpan@sda21
/* 8009F484 0009C564  38 A0 00 00 */	li r5, 0x0
/* 8009F488 0009C568  38 C0 00 00 */	li r6, 0x0
/* 8009F48C 0009C56C  38 E0 00 02 */	li r7, 0x2
/* 8009F490 0009C570  4B F9 11 9D */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8009F494 0009C574  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F498 0009C578  C0 22 92 30 */	lfs f1, "@672"@sda21(r2)
/* 8009F49C 0009C57C  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F4A0 0009C580  C0 42 92 24 */	lfs f2, "@669"@sda21(r2)
/* 8009F4A4 0009C584  38 63 02 0D */	addi r3, r3, 0x20d
/* 8009F4A8 0009C588  38 8D 82 A0 */	addi r4, r13, sLFuncSpanPerLength@sda21
/* 8009F4AC 0009C58C  38 A0 00 00 */	li r5, 0x0
/* 8009F4B0 0009C590  38 C0 00 00 */	li r6, 0x0
/* 8009F4B4 0009C594  38 E0 00 02 */	li r7, 0x2
/* 8009F4B8 0009C598  4B F9 11 75 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8009F4BC 0009C59C  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F4C0 0009C5A0  C0 22 92 30 */	lfs f1, "@672"@sda21(r2)
/* 8009F4C4 0009C5A4  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F4C8 0009C5A8  C0 42 92 24 */	lfs f2, "@669"@sda21(r2)
/* 8009F4CC 0009C5AC  38 63 02 30 */	addi r3, r3, 0x230
/* 8009F4D0 0009C5B0  38 8D 82 A4 */	addi r4, r13, sLFuncSlopeRange@sda21
/* 8009F4D4 0009C5B4  38 A0 00 00 */	li r5, 0x0
/* 8009F4D8 0009C5B8  38 C0 00 00 */	li r6, 0x0
/* 8009F4DC 0009C5BC  38 E0 00 02 */	li r7, 0x2
/* 8009F4E0 0009C5C0  4B F9 11 4D */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8009F4E4 0009C5C4  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F4E8 0009C5C8  C0 22 92 20 */	lfs f1, "@668"@sda21(r2)
/* 8009F4EC 0009C5CC  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F4F0 0009C5D0  C0 42 92 24 */	lfs f2, "@669"@sda21(r2)
/* 8009F4F4 0009C5D4  38 63 02 50 */	addi r3, r3, 0x250
/* 8009F4F8 0009C5D8  38 8D 82 A8 */	addi r4, r13, sLFuncUVSpeed@sda21
/* 8009F4FC 0009C5DC  38 A0 00 00 */	li r5, 0x0
/* 8009F500 0009C5E0  38 C0 00 00 */	li r6, 0x0
/* 8009F504 0009C5E4  38 E0 00 02 */	li r7, 0x2
/* 8009F508 0009C5E8  4B F9 11 25 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8009F50C 0009C5EC  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F510 0009C5F0  C0 22 92 30 */	lfs f1, "@672"@sda21(r2)
/* 8009F514 0009C5F4  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F518 0009C5F8  C0 42 92 24 */	lfs f2, "@669"@sda21(r2)
/* 8009F51C 0009C5FC  7F 44 D3 78 */	mr r4, r26
/* 8009F520 0009C600  38 A0 00 00 */	li r5, 0x0
/* 8009F524 0009C604  38 63 02 6D */	addi r3, r3, 0x26d
/* 8009F528 0009C608  38 C0 00 00 */	li r6, 0x0
/* 8009F52C 0009C60C  38 E0 00 02 */	li r7, 0x2
/* 8009F530 0009C610  4B F9 10 FD */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8009F534 0009C614  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F538 0009C618  7F 64 DB 78 */	mr r4, r27
/* 8009F53C 0009C61C  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F540 0009C620  38 A0 00 02 */	li r5, 0x2
/* 8009F544 0009C624  38 63 02 7D */	addi r3, r3, 0x27d
/* 8009F548 0009C628  38 C0 00 10 */	li r6, 0x10
/* 8009F54C 0009C62C  38 E0 00 00 */	li r7, 0x0
/* 8009F550 0009C630  39 00 00 00 */	li r8, 0x0
/* 8009F554 0009C634  39 20 00 02 */	li r9, 0x2
/* 8009F558 0009C638  48 00 27 BD */	bl xDebugAddTweak__FPCcPsssPC14tweak_callbackPvUi
/* 8009F55C 0009C63C  3C A0 80 26 */	lis r5, "@stringBase0"@ha
/* 8009F560 0009C640  3C 80 80 3C */	lis r4, gLightningTweakAddInfo@ha
/* 8009F564 0009C644  3C 60 80 29 */	lis r3, lightning_type_names@ha
/* 8009F568 0009C648  39 1F 06 50 */	addi r8, r31, 0x650
/* 8009F56C 0009C64C  38 E5 CD 50 */	addi r7, r5, "@stringBase0"@l
/* 8009F570 0009C650  38 84 05 18 */	addi r4, r4, gLightningTweakAddInfo@l
/* 8009F574 0009C654  38 A3 FB 60 */	addi r5, r3, lightning_type_names@l
/* 8009F578 0009C658  38 C0 00 00 */	li r6, 0x0
/* 8009F57C 0009C65C  38 67 02 95 */	addi r3, r7, 0x295
/* 8009F580 0009C660  38 E0 00 04 */	li r7, 0x4
/* 8009F584 0009C664  39 20 00 00 */	li r9, 0x0
/* 8009F588 0009C668  39 40 00 02 */	li r10, 0x2
/* 8009F58C 0009C66C  48 00 27 85 */	bl xDebugAddSelectTweak__FPCcPUiPPCcPCUiUiPC14tweak_callbackPvUi
/* 8009F590 0009C670  38 61 00 08 */	addi r3, r1, 0x8
/* 8009F594 0009C674  4B FF F6 E5 */	bl lightningTweakChangeType__FRC10tweak_info
/* 8009F598 0009C678  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F59C 0009C67C  7F 84 E3 78 */	mr r4, r28
/* 8009F5A0 0009C680  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F5A4 0009C684  38 A0 00 08 */	li r5, 0x8
/* 8009F5A8 0009C688  38 63 02 A5 */	addi r3, r3, 0x2a5
/* 8009F5AC 0009C68C  38 C0 00 00 */	li r6, 0x0
/* 8009F5B0 0009C690  38 E0 00 00 */	li r7, 0x0
/* 8009F5B4 0009C694  39 00 00 02 */	li r8, 0x2
/* 8009F5B8 0009C698  48 00 27 55 */	bl xDebugAddFlagTweak__FPCcPUiUiPC14tweak_callbackPvUi
/* 8009F5BC 0009C69C  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F5C0 0009C6A0  7F 84 E3 78 */	mr r4, r28
/* 8009F5C4 0009C6A4  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F5C8 0009C6A8  38 A0 10 00 */	li r5, 0x1000
/* 8009F5CC 0009C6AC  38 63 02 C0 */	addi r3, r3, 0x2c0
/* 8009F5D0 0009C6B0  38 C0 00 00 */	li r6, 0x0
/* 8009F5D4 0009C6B4  38 E0 00 00 */	li r7, 0x0
/* 8009F5D8 0009C6B8  39 00 00 02 */	li r8, 0x2
/* 8009F5DC 0009C6BC  48 00 27 31 */	bl xDebugAddFlagTweak__FPCcPUiUiPC14tweak_callbackPvUi
/* 8009F5E0 0009C6C0  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F5E4 0009C6C4  7F 84 E3 78 */	mr r4, r28
/* 8009F5E8 0009C6C8  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F5EC 0009C6CC  38 A0 00 20 */	li r5, 0x20
/* 8009F5F0 0009C6D0  38 63 02 DC */	addi r3, r3, 0x2dc
/* 8009F5F4 0009C6D4  38 C0 00 00 */	li r6, 0x0
/* 8009F5F8 0009C6D8  38 E0 00 00 */	li r7, 0x0
/* 8009F5FC 0009C6DC  39 00 00 02 */	li r8, 0x2
/* 8009F600 0009C6E0  48 00 27 0D */	bl xDebugAddFlagTweak__FPCcPUiUiPC14tweak_callbackPvUi
/* 8009F604 0009C6E4  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F608 0009C6E8  7F 84 E3 78 */	mr r4, r28
/* 8009F60C 0009C6EC  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F610 0009C6F0  38 A0 02 00 */	li r5, 0x200
/* 8009F614 0009C6F4  38 63 02 F0 */	addi r3, r3, 0x2f0
/* 8009F618 0009C6F8  38 C0 00 00 */	li r6, 0x0
/* 8009F61C 0009C6FC  38 E0 00 00 */	li r7, 0x0
/* 8009F620 0009C700  39 00 00 02 */	li r8, 0x2
/* 8009F624 0009C704  48 00 26 E9 */	bl xDebugAddFlagTweak__FPCcPUiUiPC14tweak_callbackPvUi
/* 8009F628 0009C708  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F62C 0009C70C  7F 84 E3 78 */	mr r4, r28
/* 8009F630 0009C710  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F634 0009C714  38 A0 04 00 */	li r5, 0x400
/* 8009F638 0009C718  38 63 03 15 */	addi r3, r3, 0x315
/* 8009F63C 0009C71C  38 C0 00 00 */	li r6, 0x0
/* 8009F640 0009C720  38 E0 00 00 */	li r7, 0x0
/* 8009F644 0009C724  39 00 00 02 */	li r8, 0x2
/* 8009F648 0009C728  48 00 26 C5 */	bl xDebugAddFlagTweak__FPCcPUiUiPC14tweak_callbackPvUi
/* 8009F64C 0009C72C  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F650 0009C730  7F 84 E3 78 */	mr r4, r28
/* 8009F654 0009C734  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F658 0009C738  38 A0 08 00 */	li r5, 0x800
/* 8009F65C 0009C73C  38 63 03 3C */	addi r3, r3, 0x33c
/* 8009F660 0009C740  38 C0 00 00 */	li r6, 0x0
/* 8009F664 0009C744  38 E0 00 00 */	li r7, 0x0
/* 8009F668 0009C748  39 00 00 02 */	li r8, 0x2
/* 8009F66C 0009C74C  48 00 26 A1 */	bl xDebugAddFlagTweak__FPCcPUiUiPC14tweak_callbackPvUi
/* 8009F670 0009C750  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F674 0009C754  C0 22 92 68 */	lfs f1, "@773"@sda21(r2)
/* 8009F678 0009C758  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F67C 0009C75C  C0 42 92 6C */	lfs f2, "@774"@sda21(r2)
/* 8009F680 0009C760  38 63 03 65 */	addi r3, r3, 0x365
/* 8009F684 0009C764  38 9F 06 10 */	addi r4, r31, 0x610
/* 8009F688 0009C768  38 A0 00 00 */	li r5, 0x0
/* 8009F68C 0009C76C  38 C0 00 00 */	li r6, 0x0
/* 8009F690 0009C770  38 E0 00 02 */	li r7, 0x2
/* 8009F694 0009C774  4B F9 0F 99 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8009F698 0009C778  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F69C 0009C77C  38 9F 06 10 */	addi r4, r31, 0x610
/* 8009F6A0 0009C780  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F6A4 0009C784  C0 22 92 68 */	lfs f1, "@773"@sda21(r2)
/* 8009F6A8 0009C788  C0 42 92 6C */	lfs f2, "@774"@sda21(r2)
/* 8009F6AC 0009C78C  38 63 03 78 */	addi r3, r3, 0x378
/* 8009F6B0 0009C790  38 A0 00 00 */	li r5, 0x0
/* 8009F6B4 0009C794  38 C0 00 00 */	li r6, 0x0
/* 8009F6B8 0009C798  38 E0 00 02 */	li r7, 0x2
/* 8009F6BC 0009C79C  38 84 00 04 */	addi r4, r4, 0x4
/* 8009F6C0 0009C7A0  4B F9 0F 6D */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8009F6C4 0009C7A4  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F6C8 0009C7A8  38 9F 06 10 */	addi r4, r31, 0x610
/* 8009F6CC 0009C7AC  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F6D0 0009C7B0  C0 22 92 68 */	lfs f1, "@773"@sda21(r2)
/* 8009F6D4 0009C7B4  C0 42 92 6C */	lfs f2, "@774"@sda21(r2)
/* 8009F6D8 0009C7B8  38 63 03 8B */	addi r3, r3, 0x38b
/* 8009F6DC 0009C7BC  38 A0 00 00 */	li r5, 0x0
/* 8009F6E0 0009C7C0  38 C0 00 00 */	li r6, 0x0
/* 8009F6E4 0009C7C4  38 E0 00 02 */	li r7, 0x2
/* 8009F6E8 0009C7C8  38 84 00 08 */	addi r4, r4, 0x8
/* 8009F6EC 0009C7CC  4B F9 0F 41 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8009F6F0 0009C7D0  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F6F4 0009C7D4  C0 22 92 68 */	lfs f1, "@773"@sda21(r2)
/* 8009F6F8 0009C7D8  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F6FC 0009C7DC  C0 42 92 6C */	lfs f2, "@774"@sda21(r2)
/* 8009F700 0009C7E0  38 63 03 9E */	addi r3, r3, 0x39e
/* 8009F704 0009C7E4  38 9F 06 1C */	addi r4, r31, 0x61c
/* 8009F708 0009C7E8  38 A0 00 00 */	li r5, 0x0
/* 8009F70C 0009C7EC  38 C0 00 00 */	li r6, 0x0
/* 8009F710 0009C7F0  38 E0 00 02 */	li r7, 0x2
/* 8009F714 0009C7F4  4B F9 0F 19 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8009F718 0009C7F8  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F71C 0009C7FC  38 9F 06 1C */	addi r4, r31, 0x61c
/* 8009F720 0009C800  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F724 0009C804  C0 22 92 68 */	lfs f1, "@773"@sda21(r2)
/* 8009F728 0009C808  C0 42 92 6C */	lfs f2, "@774"@sda21(r2)
/* 8009F72C 0009C80C  38 63 03 AF */	addi r3, r3, 0x3af
/* 8009F730 0009C810  38 A0 00 00 */	li r5, 0x0
/* 8009F734 0009C814  38 C0 00 00 */	li r6, 0x0
/* 8009F738 0009C818  38 E0 00 02 */	li r7, 0x2
/* 8009F73C 0009C81C  38 84 00 04 */	addi r4, r4, 0x4
/* 8009F740 0009C820  4B F9 0E ED */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8009F744 0009C824  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F748 0009C828  38 9F 06 1C */	addi r4, r31, 0x61c
/* 8009F74C 0009C82C  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F750 0009C830  C0 22 92 68 */	lfs f1, "@773"@sda21(r2)
/* 8009F754 0009C834  C0 42 92 6C */	lfs f2, "@774"@sda21(r2)
/* 8009F758 0009C838  38 63 03 C0 */	addi r3, r3, 0x3c0
/* 8009F75C 0009C83C  38 A0 00 00 */	li r5, 0x0
/* 8009F760 0009C840  38 C0 00 00 */	li r6, 0x0
/* 8009F764 0009C844  38 E0 00 02 */	li r7, 0x2
/* 8009F768 0009C848  38 84 00 08 */	addi r4, r4, 0x8
/* 8009F76C 0009C84C  4B F9 0E C1 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8009F770 0009C850  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F774 0009C854  7F A4 EB 78 */	mr r4, r29
/* 8009F778 0009C858  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F77C 0009C85C  38 A0 00 00 */	li r5, 0x0
/* 8009F780 0009C860  38 63 03 D1 */	addi r3, r3, 0x3d1
/* 8009F784 0009C864  38 C0 00 FF */	li r6, 0xff
/* 8009F788 0009C868  38 E0 00 00 */	li r7, 0x0
/* 8009F78C 0009C86C  39 00 00 00 */	li r8, 0x0
/* 8009F790 0009C870  39 20 00 02 */	li r9, 0x2
/* 8009F794 0009C874  48 00 25 75 */	bl xDebugAddTweak__FPCcPUcUcUcPC14tweak_callbackPvUi
/* 8009F798 0009C878  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F79C 0009C87C  7F C4 F3 78 */	mr r4, r30
/* 8009F7A0 0009C880  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F7A4 0009C884  38 A0 00 00 */	li r5, 0x0
/* 8009F7A8 0009C888  38 63 03 E5 */	addi r3, r3, 0x3e5
/* 8009F7AC 0009C88C  38 C0 00 FF */	li r6, 0xff
/* 8009F7B0 0009C890  38 E0 00 00 */	li r7, 0x0
/* 8009F7B4 0009C894  39 00 00 00 */	li r8, 0x0
/* 8009F7B8 0009C898  39 20 00 02 */	li r9, 0x2
/* 8009F7BC 0009C89C  48 00 25 4D */	bl xDebugAddTweak__FPCcPUcUcUcPC14tweak_callbackPvUi
/* 8009F7C0 0009C8A0  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F7C4 0009C8A4  7F 24 CB 78 */	mr r4, r25
/* 8009F7C8 0009C8A8  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F7CC 0009C8AC  38 A0 00 00 */	li r5, 0x0
/* 8009F7D0 0009C8B0  38 63 03 F9 */	addi r3, r3, 0x3f9
/* 8009F7D4 0009C8B4  38 C0 00 FF */	li r6, 0xff
/* 8009F7D8 0009C8B8  38 E0 00 00 */	li r7, 0x0
/* 8009F7DC 0009C8BC  39 00 00 00 */	li r8, 0x0
/* 8009F7E0 0009C8C0  39 20 00 02 */	li r9, 0x2
/* 8009F7E4 0009C8C4  48 00 25 25 */	bl xDebugAddTweak__FPCcPUcUcUcPC14tweak_callbackPvUi
/* 8009F7E8 0009C8C8  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F7EC 0009C8CC  7F 04 C3 78 */	mr r4, r24
/* 8009F7F0 0009C8D0  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F7F4 0009C8D4  38 A0 00 00 */	li r5, 0x0
/* 8009F7F8 0009C8D8  38 63 04 0D */	addi r3, r3, 0x40d
/* 8009F7FC 0009C8DC  38 C0 00 FF */	li r6, 0xff
/* 8009F800 0009C8E0  38 E0 00 00 */	li r7, 0x0
/* 8009F804 0009C8E4  39 00 00 00 */	li r8, 0x0
/* 8009F808 0009C8E8  39 20 00 02 */	li r9, 0x2
/* 8009F80C 0009C8EC  48 00 24 FD */	bl xDebugAddTweak__FPCcPUcUcUcPC14tweak_callbackPvUi
/* 8009F810 0009C8F0  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F814 0009C8F4  C0 22 92 20 */	lfs f1, "@668"@sda21(r2)
/* 8009F818 0009C8F8  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F81C 0009C8FC  C0 42 92 24 */	lfs f2, "@669"@sda21(r2)
/* 8009F820 0009C900  7E E4 BB 78 */	mr r4, r23
/* 8009F824 0009C904  38 A0 00 00 */	li r5, 0x0
/* 8009F828 0009C908  38 63 04 21 */	addi r3, r3, 0x421
/* 8009F82C 0009C90C  38 C0 00 00 */	li r6, 0x0
/* 8009F830 0009C910  38 E0 00 02 */	li r7, 0x2
/* 8009F834 0009C914  4B F9 0D F9 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8009F838 0009C918  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F83C 0009C91C  C0 22 92 20 */	lfs f1, "@668"@sda21(r2)
/* 8009F840 0009C920  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F844 0009C924  C0 42 92 24 */	lfs f2, "@669"@sda21(r2)
/* 8009F848 0009C928  7E C4 B3 78 */	mr r4, r22
/* 8009F84C 0009C92C  38 A0 00 00 */	li r5, 0x0
/* 8009F850 0009C930  38 63 04 3E */	addi r3, r3, 0x43e
/* 8009F854 0009C934  38 C0 00 00 */	li r6, 0x0
/* 8009F858 0009C938  38 E0 00 02 */	li r7, 0x2
/* 8009F85C 0009C93C  4B F9 0D D1 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8009F860 0009C940  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F864 0009C944  C0 22 92 30 */	lfs f1, "@672"@sda21(r2)
/* 8009F868 0009C948  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F86C 0009C94C  C0 42 92 2C */	lfs f2, "@671"@sda21(r2)
/* 8009F870 0009C950  7E A4 AB 78 */	mr r4, r21
/* 8009F874 0009C954  38 A0 00 00 */	li r5, 0x0
/* 8009F878 0009C958  38 63 04 5B */	addi r3, r3, 0x45b
/* 8009F87C 0009C95C  38 C0 00 00 */	li r6, 0x0
/* 8009F880 0009C960  38 E0 00 02 */	li r7, 0x2
/* 8009F884 0009C964  4B F9 0D A9 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8009F888 0009C968  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009F88C 0009C96C  C0 22 92 30 */	lfs f1, "@672"@sda21(r2)
/* 8009F890 0009C970  38 63 CD 50 */	addi r3, r3, "@stringBase0"@l
/* 8009F894 0009C974  C0 42 92 24 */	lfs f2, "@669"@sda21(r2)
/* 8009F898 0009C978  7E 84 A3 78 */	mr r4, r20
/* 8009F89C 0009C97C  38 A0 00 00 */	li r5, 0x0
/* 8009F8A0 0009C980  38 63 04 77 */	addi r3, r3, 0x477
/* 8009F8A4 0009C984  38 C0 00 00 */	li r6, 0x0
/* 8009F8A8 0009C988  38 E0 00 02 */	li r7, 0x2
/* 8009F8AC 0009C98C  4B F9 0D 81 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8009F8B0 0009C990  E3 E1 00 88 */	psq_l f31, 0x88(r1), 0, qr0
/* 8009F8B4 0009C994  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 8009F8B8 0009C998  E3 C1 00 78 */	psq_l f30, 0x78(r1), 0, qr0
/* 8009F8BC 0009C99C  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 8009F8C0 0009C9A0  BA 81 00 40 */	lmw r20, 0x40(r1)
/* 8009F8C4 0009C9A4  80 01 00 94 */	lwz r0, 0x94(r1)
/* 8009F8C8 0009C9A8  7C 08 03 A6 */	mtlr r0
/* 8009F8CC 0009C9AC  38 21 00 90 */	addi r1, r1, 0x90
/* 8009F8D0 0009C9B0  4E 80 00 20 */	blr
.endfn zLightningInit__Fv

# FindFreeLightning()
.fn FindFreeLightning__Fv, local
/* 8009F8D4 0009C9B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009F8D8 0009C9B8  7C 08 02 A6 */	mflr r0
/* 8009F8DC 0009C9BC  3C 60 80 2F */	lis r3, sLightning@ha
/* 8009F8E0 0009C9C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009F8E4 0009C9C4  38 00 00 30 */	li r0, 0x30
/* 8009F8E8 0009C9C8  38 63 90 C8 */	addi r3, r3, sLightning@l
/* 8009F8EC 0009C9CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8009F8F0 0009C9D0  3B E0 00 00 */	li r31, 0x0
/* 8009F8F4 0009C9D4  7C 09 03 A6 */	mtctr r0
.L_8009F8F8:
/* 8009F8F8 0009C9D8  80 83 00 00 */	lwz r4, 0x0(r3)
/* 8009F8FC 0009C9DC  28 04 00 00 */	cmplwi r4, 0x0
/* 8009F900 0009C9E0  41 82 00 24 */	beq .L_8009F924
/* 8009F904 0009C9E4  80 04 00 04 */	lwz r0, 0x4(r4)
/* 8009F908 0009C9E8  54 00 07 FF */	clrlwi. r0, r0, 31
/* 8009F90C 0009C9EC  40 82 00 40 */	bne .L_8009F94C
/* 8009F910 0009C9F0  3C 60 80 2F */	lis r3, sLightning@ha
/* 8009F914 0009C9F4  57 E0 10 3A */	slwi r0, r31, 2
/* 8009F918 0009C9F8  38 63 90 C8 */	addi r3, r3, sLightning@l
/* 8009F91C 0009C9FC  7C 63 00 2E */	lwzx r3, r3, r0
/* 8009F920 0009CA00  48 00 00 3C */	b .L_8009F95C
.L_8009F924:
/* 8009F924 0009CA04  80 6D 89 E0 */	lwz r3, gActiveHeap@sda21(r13)
/* 8009F928 0009CA08  38 80 02 34 */	li r4, 0x234
/* 8009F92C 0009CA0C  38 A0 00 00 */	li r5, 0x0
/* 8009F930 0009CA10  4B F9 40 11 */	bl xMemAlloc__FUiUii
/* 8009F934 0009CA14  3C 80 80 2F */	lis r4, sLightning@ha
/* 8009F938 0009CA18  57 E0 10 3A */	slwi r0, r31, 2
/* 8009F93C 0009CA1C  38 84 90 C8 */	addi r4, r4, sLightning@l
/* 8009F940 0009CA20  7C 64 01 2E */	stwx r3, r4, r0
/* 8009F944 0009CA24  7C 64 00 2E */	lwzx r3, r4, r0
/* 8009F948 0009CA28  48 00 00 14 */	b .L_8009F95C
.L_8009F94C:
/* 8009F94C 0009CA2C  38 63 00 04 */	addi r3, r3, 0x4
/* 8009F950 0009CA30  3B FF 00 01 */	addi r31, r31, 0x1
/* 8009F954 0009CA34  42 00 FF A4 */	bdnz .L_8009F8F8
/* 8009F958 0009CA38  38 60 00 00 */	li r3, 0x0
.L_8009F95C:
/* 8009F95C 0009CA3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009F960 0009CA40  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8009F964 0009CA44  7C 08 03 A6 */	mtlr r0
/* 8009F968 0009CA48  38 21 00 10 */	addi r1, r1, 0x10
/* 8009F96C 0009CA4C  4E 80 00 20 */	blr
.endfn FindFreeLightning__Fv

# zLightningAdd(_tagLightningAdd*)
.fn zLightningAdd__FP16_tagLightningAdd, global
/* 8009F970 0009CA50  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 8009F974 0009CA54  7C 08 02 A6 */	mflr r0
/* 8009F978 0009CA58  90 01 00 94 */	stw r0, 0x94(r1)
/* 8009F97C 0009CA5C  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 8009F980 0009CA60  F3 E1 00 88 */	psq_st f31, 0x88(r1), 0, qr0
/* 8009F984 0009CA64  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 8009F988 0009CA68  F3 C1 00 78 */	psq_st f30, 0x78(r1), 0, qr0
/* 8009F98C 0009CA6C  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 8009F990 0009CA70  F3 A1 00 68 */	psq_st f29, 0x68(r1), 0, qr0
/* 8009F994 0009CA74  BF 21 00 44 */	stmw r25, 0x44(r1)
/* 8009F998 0009CA78  7C 79 1B 78 */	mr r25, r3
/* 8009F99C 0009CA7C  4B FF FF 39 */	bl FindFreeLightning__Fv
/* 8009F9A0 0009CA80  7C 7C 1B 79 */	mr. r28, r3
/* 8009F9A4 0009CA84  40 82 00 0C */	bne .L_8009F9B0
/* 8009F9A8 0009CA88  38 60 00 00 */	li r3, 0x0
/* 8009F9AC 0009CA8C  48 00 04 90 */	b .L_8009FE3C
.L_8009F9B0:
/* 8009F9B0 0009CA90  80 19 00 00 */	lwz r0, 0x0(r25)
/* 8009F9B4 0009CA94  38 7C 02 28 */	addi r3, r28, 0x228
/* 8009F9B8 0009CA98  38 99 00 28 */	addi r4, r25, 0x28
/* 8009F9BC 0009CA9C  90 1C 00 00 */	stw r0, 0x0(r28)
/* 8009F9C0 0009CAA0  80 19 00 30 */	lwz r0, 0x30(r25)
/* 8009F9C4 0009CAA4  60 00 00 41 */	ori r0, r0, 0x41
/* 8009F9C8 0009CAA8  90 1C 00 04 */	stw r0, 0x4(r28)
/* 8009F9CC 0009CAAC  4B F7 85 CD */	bl __as__10iColor_tagFRC10iColor_tag
/* 8009F9D0 0009CAB0  80 1C 00 00 */	lwz r0, 0x0(r28)
/* 8009F9D4 0009CAB4  28 00 00 03 */	cmplwi r0, 0x3
/* 8009F9D8 0009CAB8  41 82 03 E8 */	beq .L_8009FDC0
/* 8009F9DC 0009CABC  A8 19 00 18 */	lha r0, 0x18(r25)
/* 8009F9E0 0009CAC0  3B 60 00 01 */	li r27, 0x1
/* 8009F9E4 0009CAC4  B0 1C 01 88 */	sth r0, 0x188(r28)
/* 8009F9E8 0009CAC8  A8 19 00 1A */	lha r0, 0x1a(r25)
/* 8009F9EC 0009CACC  B0 1C 01 8A */	sth r0, 0x18a(r28)
/* 8009F9F0 0009CAD0  C0 19 00 20 */	lfs f0, 0x20(r25)
/* 8009F9F4 0009CAD4  D0 1C 01 8C */	stfs f0, 0x18c(r28)
/* 8009F9F8 0009CAD8  C0 19 00 2C */	lfs f0, 0x2c(r25)
/* 8009F9FC 0009CADC  D0 1C 02 24 */	stfs f0, 0x224(r28)
/* 8009FA00 0009CAE0  80 1C 00 00 */	lwz r0, 0x0(r28)
/* 8009FA04 0009CAE4  C3 E2 92 30 */	lfs f31, "@672"@sda21(r2)
/* 8009FA08 0009CAE8  2C 00 00 01 */	cmpwi r0, 0x1
/* 8009FA0C 0009CAEC  41 82 00 18 */	beq .L_8009FA24
/* 8009FA10 0009CAF0  40 80 00 08 */	bge .L_8009FA18
/* 8009FA14 0009CAF4  48 00 00 3C */	b .L_8009FA50
.L_8009FA18:
/* 8009FA18 0009CAF8  2C 00 00 03 */	cmpwi r0, 0x3
/* 8009FA1C 0009CAFC  40 80 00 34 */	bge .L_8009FA50
/* 8009FA20 0009CB00  48 00 00 18 */	b .L_8009FA38
.L_8009FA24:
/* 8009FA24 0009CB04  C0 19 00 08 */	lfs f0, 0x8(r25)
/* 8009FA28 0009CB08  D0 1C 02 1C */	stfs f0, 0x21c(r28)
/* 8009FA2C 0009CB0C  C0 19 00 0C */	lfs f0, 0xc(r25)
/* 8009FA30 0009CB10  D0 1C 02 20 */	stfs f0, 0x220(r28)
/* 8009FA34 0009CB14  48 00 00 1C */	b .L_8009FA50
.L_8009FA38:
/* 8009FA38 0009CB18  C0 19 00 34 */	lfs f0, 0x34(r25)
/* 8009FA3C 0009CB1C  D0 1C 01 DC */	stfs f0, 0x1dc(r28)
/* 8009FA40 0009CB20  C0 19 00 38 */	lfs f0, 0x38(r25)
/* 8009FA44 0009CB24  D0 1C 01 E0 */	stfs f0, 0x1e0(r28)
/* 8009FA48 0009CB28  C0 19 00 3C */	lfs f0, 0x3c(r25)
/* 8009FA4C 0009CB2C  D0 1C 01 E4 */	stfs f0, 0x1e4(r28)
.L_8009FA50:
/* 8009FA50 0009CB30  80 19 00 30 */	lwz r0, 0x30(r25)
/* 8009FA54 0009CB34  54 00 06 31 */	rlwinm. r0, r0, 0, 24, 24
/* 8009FA58 0009CB38  41 82 00 4C */	beq .L_8009FAA4
/* 8009FA5C 0009CB3C  A8 79 00 1A */	lha r3, 0x1a(r25)
/* 8009FA60 0009CB40  34 03 FF FF */	addic. r0, r3, -0x1
/* 8009FA64 0009CB44  40 80 00 24 */	bge .L_8009FA88
/* 8009FA68 0009CB48  A8 99 00 18 */	lha r4, 0x18(r25)
/* 8009FA6C 0009CB4C  38 61 00 14 */	addi r3, r1, 0x14
/* 8009FA70 0009CB50  80 B9 00 10 */	lwz r5, 0x10(r25)
/* 8009FA74 0009CB54  38 04 FF FF */	addi r0, r4, -0x1
/* 8009FA78 0009CB58  1C 00 00 0C */	mulli r0, r0, 0xc
/* 8009FA7C 0009CB5C  7C 85 02 14 */	add r4, r5, r0
/* 8009FA80 0009CB60  4B F6 EC 11 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 8009FA84 0009CB64  48 00 00 30 */	b .L_8009FAB4
.L_8009FA88:
/* 8009FA88 0009CB68  1C 00 00 0C */	mulli r0, r0, 0xc
/* 8009FA8C 0009CB6C  80 99 00 14 */	lwz r4, 0x14(r25)
/* 8009FA90 0009CB70  80 B9 00 10 */	lwz r5, 0x10(r25)
/* 8009FA94 0009CB74  38 61 00 14 */	addi r3, r1, 0x14
/* 8009FA98 0009CB78  7C 84 02 14 */	add r4, r4, r0
/* 8009FA9C 0009CB7C  4B F6 EB F5 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 8009FAA0 0009CB80  48 00 00 14 */	b .L_8009FAB4
.L_8009FAA4:
/* 8009FAA4 0009CB84  80 99 00 14 */	lwz r4, 0x14(r25)
/* 8009FAA8 0009CB88  38 61 00 14 */	addi r3, r1, 0x14
/* 8009FAAC 0009CB8C  80 B9 00 10 */	lwz r5, 0x10(r25)
/* 8009FAB0 0009CB90  4B F6 EB E1 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
.L_8009FAB4:
/* 8009FAB4 0009CB94  38 61 00 14 */	addi r3, r1, 0x14
/* 8009FAB8 0009CB98  7C 64 1B 78 */	mr r4, r3
/* 8009FABC 0009CB9C  4B FA E8 35 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 8009FAC0 0009CBA0  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8009FAC4 0009CBA4  C0 02 92 78 */	lfs f0, "@946"@sda21(r2)
/* 8009FAC8 0009CBA8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8009FACC 0009CBAC  41 81 00 10 */	bgt .L_8009FADC
/* 8009FAD0 0009CBB0  C0 02 92 7C */	lfs f0, "@947"@sda21(r2)
/* 8009FAD4 0009CBB4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8009FAD8 0009CBB8  40 80 00 1C */	bge .L_8009FAF4
.L_8009FADC:
/* 8009FADC 0009CBBC  C0 42 92 30 */	lfs f2, "@672"@sda21(r2)
/* 8009FAE0 0009CBC0  38 7C 01 90 */	addi r3, r28, 0x190
/* 8009FAE4 0009CBC4  C0 22 92 80 */	lfs f1, "@948"@sda21(r2)
/* 8009FAE8 0009CBC8  FC 60 10 90 */	fmr f3, f2
/* 8009FAEC 0009CBCC  4B F6 F5 11 */	bl xVec3Init__FP5xVec3fff
/* 8009FAF0 0009CBD0  48 00 00 4C */	b .L_8009FB3C
.L_8009FAF4:
/* 8009FAF4 0009CBD4  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8009FAF8 0009CBD8  38 7C 01 90 */	addi r3, r28, 0x190
/* 8009FAFC 0009CBDC  7C 64 1B 78 */	mr r4, r3
/* 8009FB00 0009CBE0  EC 00 00 72 */	fmuls f0, f0, f1
/* 8009FB04 0009CBE4  FC 00 00 50 */	fneg f0, f0
/* 8009FB08 0009CBE8  D0 1C 01 90 */	stfs f0, 0x190(r28)
/* 8009FB0C 0009CBEC  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 8009FB10 0009CBF0  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8009FB14 0009CBF4  EC 21 00 72 */	fmuls f1, f1, f1
/* 8009FB18 0009CBF8  EC 00 00 32 */	fmuls f0, f0, f0
/* 8009FB1C 0009CBFC  EC 01 00 2A */	fadds f0, f1, f0
/* 8009FB20 0009CC00  D0 1C 01 94 */	stfs f0, 0x194(r28)
/* 8009FB24 0009CC04  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 8009FB28 0009CC08  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8009FB2C 0009CC0C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8009FB30 0009CC10  FC 00 00 50 */	fneg f0, f0
/* 8009FB34 0009CC14  D0 1C 01 98 */	stfs f0, 0x198(r28)
/* 8009FB38 0009CC18  4B FA E7 B9 */	bl xVec3Normalize__FP5xVec3PC5xVec3
.L_8009FB3C:
/* 8009FB3C 0009CC1C  38 61 00 08 */	addi r3, r1, 0x8
/* 8009FB40 0009CC20  38 9C 01 90 */	addi r4, r28, 0x190
/* 8009FB44 0009CC24  38 A1 00 14 */	addi r5, r1, 0x14
/* 8009FB48 0009CC28  4B F7 55 45 */	bl xVec3Cross__FP5xVec3PC5xVec3PC5xVec3
/* 8009FB4C 0009CC2C  A8 7C 01 88 */	lha r3, 0x188(r28)
/* 8009FB50 0009CC30  3C 00 43 30 */	lis r0, 0x4330
/* 8009FB54 0009CC34  90 01 00 30 */	stw r0, 0x30(r1)
/* 8009FB58 0009CC38  7F 9F E3 78 */	mr r31, r28
/* 8009FB5C 0009CC3C  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8009FB60 0009CC40  C8 22 92 70 */	lfd f1, "@776"@sda21(r2)
/* 8009FB64 0009CC44  90 01 00 34 */	stw r0, 0x34(r1)
/* 8009FB68 0009CC48  7F 9D E3 78 */	mr r29, r28
/* 8009FB6C 0009CC4C  C0 42 92 80 */	lfs f2, "@948"@sda21(r2)
/* 8009FB70 0009CC50  3B 40 00 00 */	li r26, 0x0
/* 8009FB74 0009CC54  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 8009FB78 0009CC58  3B C0 00 00 */	li r30, 0x0
/* 8009FB7C 0009CC5C  C3 C2 92 30 */	lfs f30, "@672"@sda21(r2)
/* 8009FB80 0009CC60  EC 00 08 28 */	fsubs f0, f0, f1
/* 8009FB84 0009CC64  EC 00 10 28 */	fsubs f0, f0, f2
/* 8009FB88 0009CC68  EF A2 00 24 */	fdivs f29, f2, f0
/* 8009FB8C 0009CC6C  48 00 02 24 */	b .L_8009FDB0
.L_8009FB90:
/* 8009FB90 0009CC70  C0 22 92 38 */	lfs f1, "@761"@sda21(r2)
/* 8009FB94 0009CC74  C0 19 00 24 */	lfs f0, 0x24(r25)
/* 8009FB98 0009CC78  EC 01 00 32 */	fmuls f0, f1, f0
/* 8009FB9C 0009CC7C  D0 1F 01 9C */	stfs f0, 0x19c(r31)
/* 8009FBA0 0009CC80  80 19 00 30 */	lwz r0, 0x30(r25)
/* 8009FBA4 0009CC84  54 00 05 6B */	rlwinm. r0, r0, 0, 21, 21
/* 8009FBA8 0009CC88  41 82 00 18 */	beq .L_8009FBC0
/* 8009FBAC 0009CC8C  C0 02 92 80 */	lfs f0, "@948"@sda21(r2)
/* 8009FBB0 0009CC90  C0 3F 01 9C */	lfs f1, 0x19c(r31)
/* 8009FBB4 0009CC94  EC 00 F0 28 */	fsubs f0, f0, f30
/* 8009FBB8 0009CC98  EC 01 00 32 */	fmuls f0, f1, f0
/* 8009FBBC 0009CC9C  D0 1F 01 9C */	stfs f0, 0x19c(r31)
.L_8009FBC0:
/* 8009FBC0 0009CCA0  80 19 00 30 */	lwz r0, 0x30(r25)
/* 8009FBC4 0009CCA4  54 00 05 29 */	rlwinm. r0, r0, 0, 20, 20
/* 8009FBC8 0009CCA8  41 82 00 10 */	beq .L_8009FBD8
/* 8009FBCC 0009CCAC  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 8009FBD0 0009CCB0  EC 00 07 B2 */	fmuls f0, f0, f30
/* 8009FBD4 0009CCB4  D0 1F 01 9C */	stfs f0, 0x19c(r31)
.L_8009FBD8:
/* 8009FBD8 0009CCB8  80 79 00 30 */	lwz r3, 0x30(r25)
/* 8009FBDC 0009CCBC  54 60 05 6B */	rlwinm. r0, r3, 0, 21, 21
/* 8009FBE0 0009CCC0  41 82 00 1C */	beq .L_8009FBFC
/* 8009FBE4 0009CCC4  54 60 05 29 */	rlwinm. r0, r3, 0, 20, 20
/* 8009FBE8 0009CCC8  41 82 00 14 */	beq .L_8009FBFC
/* 8009FBEC 0009CCCC  C0 3F 01 9C */	lfs f1, 0x19c(r31)
/* 8009FBF0 0009CCD0  C0 02 92 84 */	lfs f0, "@949"@sda21(r2)
/* 8009FBF4 0009CCD4  EC 01 00 32 */	fmuls f0, f1, f0
/* 8009FBF8 0009CCD8  D0 1F 01 9C */	stfs f0, 0x19c(r31)
.L_8009FBFC:
/* 8009FBFC 0009CCDC  80 19 00 30 */	lwz r0, 0x30(r25)
/* 8009FC00 0009CCE0  54 00 06 31 */	rlwinm. r0, r0, 0, 24, 24
/* 8009FC04 0009CCE4  41 82 00 44 */	beq .L_8009FC48
/* 8009FC08 0009CCE8  A8 79 00 1A */	lha r3, 0x1a(r25)
/* 8009FC0C 0009CCEC  A8 19 00 18 */	lha r0, 0x18(r25)
/* 8009FC10 0009CCF0  7C 03 00 50 */	subf r0, r3, r0
/* 8009FC14 0009CCF4  7C 00 D0 51 */	subf. r0, r0, r26
/* 8009FC18 0009CCF8  40 80 00 18 */	bge .L_8009FC30
/* 8009FC1C 0009CCFC  80 19 00 10 */	lwz r0, 0x10(r25)
/* 8009FC20 0009CD00  38 7D 00 C8 */	addi r3, r29, 0xc8
/* 8009FC24 0009CD04  7C 80 F2 14 */	add r4, r0, r30
/* 8009FC28 0009CD08  4B F6 B6 3D */	bl __as__5xVec3FRC5xVec3
/* 8009FC2C 0009CD0C  48 00 00 30 */	b .L_8009FC5C
.L_8009FC30:
/* 8009FC30 0009CD10  1C 00 00 0C */	mulli r0, r0, 0xc
/* 8009FC34 0009CD14  80 99 00 14 */	lwz r4, 0x14(r25)
/* 8009FC38 0009CD18  38 7D 00 C8 */	addi r3, r29, 0xc8
/* 8009FC3C 0009CD1C  7C 84 02 14 */	add r4, r4, r0
/* 8009FC40 0009CD20  4B F6 B6 25 */	bl __as__5xVec3FRC5xVec3
/* 8009FC44 0009CD24  48 00 00 18 */	b .L_8009FC5C
.L_8009FC48:
/* 8009FC48 0009CD28  FC 20 F0 90 */	fmr f1, f30
/* 8009FC4C 0009CD2C  80 99 00 10 */	lwz r4, 0x10(r25)
/* 8009FC50 0009CD30  80 B9 00 14 */	lwz r5, 0x14(r25)
/* 8009FC54 0009CD34  38 7D 00 C8 */	addi r3, r29, 0xc8
/* 8009FC58 0009CD38  4B F7 80 9D */	bl xVec3Lerp__FP5xVec3PC5xVec3PC5xVec3f
.L_8009FC5C:
/* 8009FC5C 0009CD3C  80 1C 00 00 */	lwz r0, 0x0(r28)
/* 8009FC60 0009CD40  2C 00 00 01 */	cmpwi r0, 0x1
/* 8009FC64 0009CD44  41 82 00 18 */	beq .L_8009FC7C
/* 8009FC68 0009CD48  40 80 00 08 */	bge .L_8009FC70
/* 8009FC6C 0009CD4C  48 00 00 E4 */	b .L_8009FD50
.L_8009FC70:
/* 8009FC70 0009CD50  2C 00 00 03 */	cmpwi r0, 0x3
/* 8009FC74 0009CD54  40 80 00 DC */	bge .L_8009FD50
/* 8009FC78 0009CD58  48 00 00 5C */	b .L_8009FCD4
.L_8009FC7C:
/* 8009FC7C 0009CD5C  D3 FF 01 DC */	stfs f31, 0x1dc(r31)
/* 8009FC80 0009CD60  48 00 00 14 */	b .L_8009FC94
.L_8009FC84:
/* 8009FC84 0009CD64  C0 3F 01 DC */	lfs f1, 0x1dc(r31)
/* 8009FC88 0009CD68  C0 02 92 88 */	lfs f0, "@950"@sda21(r2)
/* 8009FC8C 0009CD6C  EC 01 00 28 */	fsubs f0, f1, f0
/* 8009FC90 0009CD70  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_8009FC94:
/* 8009FC94 0009CD74  C0 3F 01 DC */	lfs f1, 0x1dc(r31)
/* 8009FC98 0009CD78  C0 02 92 8C */	lfs f0, "@951"@sda21(r2)
/* 8009FC9C 0009CD7C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8009FCA0 0009CD80  41 81 FF E4 */	bgt .L_8009FC84
/* 8009FCA4 0009CD84  48 00 00 14 */	b .L_8009FCB8
.L_8009FCA8:
/* 8009FCA8 0009CD88  C0 3F 01 DC */	lfs f1, 0x1dc(r31)
/* 8009FCAC 0009CD8C  C0 02 92 88 */	lfs f0, "@950"@sda21(r2)
/* 8009FCB0 0009CD90  EC 01 00 2A */	fadds f0, f1, f0
/* 8009FCB4 0009CD94  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_8009FCB8:
/* 8009FCB8 0009CD98  C0 3F 01 DC */	lfs f1, 0x1dc(r31)
/* 8009FCBC 0009CD9C  C0 02 92 90 */	lfs f0, "@952"@sda21(r2)
/* 8009FCC0 0009CDA0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8009FCC4 0009CDA4  41 80 FF E4 */	blt .L_8009FCA8
/* 8009FCC8 0009CDA8  C0 19 00 04 */	lfs f0, 0x4(r25)
/* 8009FCCC 0009CDAC  EF FF 00 2A */	fadds f31, f31, f0
/* 8009FCD0 0009CDB0  48 00 00 80 */	b .L_8009FD50
.L_8009FCD4:
/* 8009FCD4 0009CDB4  2C 1A 00 00 */	cmpwi r26, 0x0
/* 8009FCD8 0009CDB8  41 82 00 78 */	beq .L_8009FD50
/* 8009FCDC 0009CDBC  A8 7C 01 88 */	lha r3, 0x188(r28)
/* 8009FCE0 0009CDC0  38 03 FF FF */	addi r0, r3, -0x1
/* 8009FCE4 0009CDC4  7C 1A 00 00 */	cmpw r26, r0
/* 8009FCE8 0009CDC8  41 82 00 68 */	beq .L_8009FD50
/* 8009FCEC 0009CDCC  2C 1B 00 00 */	cmpwi r27, 0x0
/* 8009FCF0 0009CDD0  41 82 00 18 */	beq .L_8009FD08
/* 8009FCF4 0009CDD4  38 61 00 20 */	addi r3, r1, 0x20
/* 8009FCF8 0009CDD8  38 9D 00 C8 */	addi r4, r29, 0xc8
/* 8009FCFC 0009CDDC  4B FA E7 E1 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 8009FD00 0009CDE0  3B 60 00 00 */	li r27, 0x0
/* 8009FD04 0009CDE4  48 00 00 4C */	b .L_8009FD50
.L_8009FD08:
/* 8009FD08 0009CDE8  38 7D 00 C8 */	addi r3, r29, 0xc8
/* 8009FD0C 0009CDEC  38 81 00 20 */	addi r4, r1, 0x20
/* 8009FD10 0009CDF0  4B FA E7 CD */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 8009FD14 0009CDF4  C0 3C 01 DC */	lfs f1, 0x1dc(r28)
/* 8009FD18 0009CDF8  38 7D 00 C8 */	addi r3, r29, 0xc8
/* 8009FD1C 0009CDFC  38 9C 01 90 */	addi r4, r28, 0x190
/* 8009FD20 0009CE00  4B F7 53 39 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 8009FD24 0009CE04  C0 1C 01 E0 */	lfs f0, 0x1e0(r28)
/* 8009FD28 0009CE08  38 7D 00 C8 */	addi r3, r29, 0xc8
/* 8009FD2C 0009CE0C  38 81 00 14 */	addi r4, r1, 0x14
/* 8009FD30 0009CE10  FC 20 00 50 */	fneg f1, f0
/* 8009FD34 0009CE14  4B F7 53 25 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 8009FD38 0009CE18  C0 1C 01 E4 */	lfs f0, 0x1e4(r28)
/* 8009FD3C 0009CE1C  38 7D 00 C8 */	addi r3, r29, 0xc8
/* 8009FD40 0009CE20  38 81 00 08 */	addi r4, r1, 0x8
/* 8009FD44 0009CE24  FC 20 00 50 */	fneg f1, f0
/* 8009FD48 0009CE28  4B F7 53 11 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 8009FD4C 0009CE2C  3B 60 00 01 */	li r27, 0x1
.L_8009FD50:
/* 8009FD50 0009CE30  80 1C 00 04 */	lwz r0, 0x4(r28)
/* 8009FD54 0009CE34  54 00 06 B5 */	rlwinm. r0, r0, 0, 26, 26
/* 8009FD58 0009CE38  41 82 00 38 */	beq .L_8009FD90
/* 8009FD5C 0009CE3C  EC 3E 07 B2 */	fmuls f1, f30, f30
/* 8009FD60 0009CE40  C0 42 92 94 */	lfs f2, "@953"@sda21(r2)
/* 8009FD64 0009CE44  C0 62 92 84 */	lfs f3, "@949"@sda21(r2)
/* 8009FD68 0009CE48  C0 02 92 30 */	lfs f0, "@672"@sda21(r2)
/* 8009FD6C 0009CE4C  EC 22 00 72 */	fmuls f1, f2, f1
/* 8009FD70 0009CE50  EC 23 0F BA */	fmadds f1, f3, f30, f1
/* 8009FD74 0009CE54  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8009FD78 0009CE58  40 81 00 18 */	ble .L_8009FD90
/* 8009FD7C 0009CE5C  C0 1C 01 8C */	lfs f0, 0x18c(r28)
/* 8009FD80 0009CE60  38 7D 00 08 */	addi r3, r29, 0x8
/* 8009FD84 0009CE64  38 9C 01 90 */	addi r4, r28, 0x190
/* 8009FD88 0009CE68  EC 21 00 32 */	fmuls f1, f1, f0
/* 8009FD8C 0009CE6C  4B F7 52 CD */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
.L_8009FD90:
/* 8009FD90 0009CE70  38 7D 00 08 */	addi r3, r29, 0x8
/* 8009FD94 0009CE74  38 9D 00 C8 */	addi r4, r29, 0xc8
/* 8009FD98 0009CE78  4B F6 B4 CD */	bl __as__5xVec3FRC5xVec3
/* 8009FD9C 0009CE7C  EF DE E8 2A */	fadds f30, f30, f29
/* 8009FDA0 0009CE80  3B FF 00 04 */	addi r31, r31, 0x4
/* 8009FDA4 0009CE84  3B DE 00 0C */	addi r30, r30, 0xc
/* 8009FDA8 0009CE88  3B BD 00 0C */	addi r29, r29, 0xc
/* 8009FDAC 0009CE8C  3B 5A 00 01 */	addi r26, r26, 0x1
.L_8009FDB0:
/* 8009FDB0 0009CE90  A8 1C 01 88 */	lha r0, 0x188(r28)
/* 8009FDB4 0009CE94  7C 1A 00 00 */	cmpw r26, r0
/* 8009FDB8 0009CE98  41 80 FD D8 */	blt .L_8009FB90
/* 8009FDBC 0009CE9C  48 00 00 54 */	b .L_8009FE10
.L_8009FDC0:
/* 8009FDC0 0009CEA0  80 99 00 10 */	lwz r4, 0x10(r25)
/* 8009FDC4 0009CEA4  7F 83 E3 78 */	mr r3, r28
/* 8009FDC8 0009CEA8  80 B9 00 14 */	lwz r5, 0x14(r25)
/* 8009FDCC 0009CEAC  48 00 1A FD */	bl zLightningModifyEndpoints__FP10zLightningP5xVec3P5xVec3
/* 8009FDD0 0009CEB0  4B F9 0E B9 */	bl xurand__Fv
/* 8009FDD4 0009CEB4  C0 02 92 40 */	lfs f0, "@763"@sda21(r2)
/* 8009FDD8 0009CEB8  EC 00 00 72 */	fmuls f0, f0, f1
/* 8009FDDC 0009CEBC  D0 1C 00 38 */	stfs f0, 0x38(r28)
/* 8009FDE0 0009CEC0  4B F9 0E A9 */	bl xurand__Fv
/* 8009FDE4 0009CEC4  C0 02 92 40 */	lfs f0, "@763"@sda21(r2)
/* 8009FDE8 0009CEC8  EC 00 00 72 */	fmuls f0, f0, f1
/* 8009FDEC 0009CECC  D0 1C 00 3C */	stfs f0, 0x3c(r28)
/* 8009FDF0 0009CED0  C0 02 92 98 */	lfs f0, "@954"@sda21(r2)
/* 8009FDF4 0009CED4  D0 1C 00 40 */	stfs f0, 0x40(r28)
/* 8009FDF8 0009CED8  C0 02 92 80 */	lfs f0, "@948"@sda21(r2)
/* 8009FDFC 0009CEDC  D0 1C 00 44 */	stfs f0, 0x44(r28)
/* 8009FE00 0009CEE0  C0 19 00 24 */	lfs f0, 0x24(r25)
/* 8009FE04 0009CEE4  D0 1C 00 34 */	stfs f0, 0x34(r28)
/* 8009FE08 0009CEE8  C0 19 00 20 */	lfs f0, 0x20(r25)
/* 8009FE0C 0009CEEC  D0 1C 00 50 */	stfs f0, 0x50(r28)
.L_8009FE10:
/* 8009FE10 0009CEF0  80 1C 00 04 */	lwz r0, 0x4(r28)
/* 8009FE14 0009CEF4  54 00 06 F7 */	rlwinm. r0, r0, 0, 27, 27
/* 8009FE18 0009CEF8  41 82 00 14 */	beq .L_8009FE2C
/* 8009FE1C 0009CEFC  C0 02 92 9C */	lfs f0, "@955"@sda21(r2)
/* 8009FE20 0009CF00  D0 1C 02 30 */	stfs f0, 0x230(r28)
/* 8009FE24 0009CF04  D0 1C 02 2C */	stfs f0, 0x22c(r28)
/* 8009FE28 0009CF08  48 00 00 10 */	b .L_8009FE38
.L_8009FE2C:
/* 8009FE2C 0009CF0C  C0 19 00 1C */	lfs f0, 0x1c(r25)
/* 8009FE30 0009CF10  D0 1C 02 30 */	stfs f0, 0x230(r28)
/* 8009FE34 0009CF14  D0 1C 02 2C */	stfs f0, 0x22c(r28)
.L_8009FE38:
/* 8009FE38 0009CF18  7F 83 E3 78 */	mr r3, r28
.L_8009FE3C:
/* 8009FE3C 0009CF1C  E3 E1 00 88 */	psq_l f31, 0x88(r1), 0, qr0
/* 8009FE40 0009CF20  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 8009FE44 0009CF24  E3 C1 00 78 */	psq_l f30, 0x78(r1), 0, qr0
/* 8009FE48 0009CF28  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 8009FE4C 0009CF2C  E3 A1 00 68 */	psq_l f29, 0x68(r1), 0, qr0
/* 8009FE50 0009CF30  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 8009FE54 0009CF34  BB 21 00 44 */	lmw r25, 0x44(r1)
/* 8009FE58 0009CF38  80 01 00 94 */	lwz r0, 0x94(r1)
/* 8009FE5C 0009CF3C  7C 08 03 A6 */	mtlr r0
/* 8009FE60 0009CF40  38 21 00 90 */	addi r1, r1, 0x90
/* 8009FE64 0009CF44  4E 80 00 20 */	blr
.endfn zLightningAdd__FP16_tagLightningAdd

# UpdateLightning(zLightning*, float)
.fn UpdateLightning__FP10zLightningf, local
/* 8009FE68 0009CF48  94 21 FD E0 */	stwu r1, -0x220(r1)
/* 8009FE6C 0009CF4C  7C 08 02 A6 */	mflr r0
/* 8009FE70 0009CF50  90 01 02 24 */	stw r0, 0x224(r1)
/* 8009FE74 0009CF54  DB E1 02 10 */	stfd f31, 0x210(r1)
/* 8009FE78 0009CF58  F3 E1 02 18 */	psq_st f31, 0x218(r1), 0, qr0
/* 8009FE7C 0009CF5C  DB C1 02 00 */	stfd f30, 0x200(r1)
/* 8009FE80 0009CF60  F3 C1 02 08 */	psq_st f30, 0x208(r1), 0, qr0
/* 8009FE84 0009CF64  DB A1 01 F0 */	stfd f29, 0x1f0(r1)
/* 8009FE88 0009CF68  F3 A1 01 F8 */	psq_st f29, 0x1f8(r1), 0, qr0
/* 8009FE8C 0009CF6C  DB 81 01 E0 */	stfd f28, 0x1e0(r1)
/* 8009FE90 0009CF70  F3 81 01 E8 */	psq_st f28, 0x1e8(r1), 0, qr0
/* 8009FE94 0009CF74  93 E1 01 DC */	stw r31, 0x1dc(r1)
/* 8009FE98 0009CF78  93 C1 01 D8 */	stw r30, 0x1d8(r1)
/* 8009FE9C 0009CF7C  93 A1 01 D4 */	stw r29, 0x1d4(r1)
/* 8009FEA0 0009CF80  93 81 01 D0 */	stw r28, 0x1d0(r1)
/* 8009FEA4 0009CF84  80 03 00 04 */	lwz r0, 0x4(r3)
/* 8009FEA8 0009CF88  FF 80 08 90 */	fmr f28, f1
/* 8009FEAC 0009CF8C  7C 7F 1B 78 */	mr r31, r3
/* 8009FEB0 0009CF90  54 00 06 F7 */	rlwinm. r0, r0, 0, 27, 27
/* 8009FEB4 0009CF94  40 82 00 10 */	bne .L_8009FEC4
/* 8009FEB8 0009CF98  C0 1F 02 2C */	lfs f0, 0x22c(r31)
/* 8009FEBC 0009CF9C  EC 00 E0 28 */	fsubs f0, f0, f28
/* 8009FEC0 0009CFA0  D0 1F 02 2C */	stfs f0, 0x22c(r31)
.L_8009FEC4:
/* 8009FEC4 0009CFA4  C0 3F 02 2C */	lfs f1, 0x22c(r31)
/* 8009FEC8 0009CFA8  C0 02 92 30 */	lfs f0, "@672"@sda21(r2)
/* 8009FECC 0009CFAC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8009FED0 0009CFB0  4C 40 13 82 */	cror eq, lt, eq
/* 8009FED4 0009CFB4  40 82 00 2C */	bne .L_8009FF00
/* 8009FED8 0009CFB8  80 7F 00 04 */	lwz r3, 0x4(r31)
/* 8009FEDC 0009CFBC  54 60 05 EF */	rlwinm. r0, r3, 0, 23, 23
/* 8009FEE0 0009CFC0  41 82 00 18 */	beq .L_8009FEF8
/* 8009FEE4 0009CFC4  D0 1F 02 2C */	stfs f0, 0x22c(r31)
/* 8009FEE8 0009CFC8  80 1F 00 04 */	lwz r0, 0x4(r31)
/* 8009FEEC 0009CFCC  54 00 06 B0 */	rlwinm r0, r0, 0, 26, 24
/* 8009FEF0 0009CFD0  90 1F 00 04 */	stw r0, 0x4(r31)
/* 8009FEF4 0009CFD4  48 00 00 0C */	b .L_8009FF00
.L_8009FEF8:
/* 8009FEF8 0009CFD8  54 60 00 3C */	clrrwi r0, r3, 1
/* 8009FEFC 0009CFDC  90 1F 00 04 */	stw r0, 0x4(r31)
.L_8009FF00:
/* 8009FF00 0009CFE0  80 1F 00 00 */	lwz r0, 0x0(r31)
/* 8009FF04 0009CFE4  28 00 00 03 */	cmplwi r0, 0x3
/* 8009FF08 0009CFE8  41 82 03 38 */	beq .L_800A0240
/* 8009FF0C 0009CFEC  28 00 00 00 */	cmplwi r0, 0x0
/* 8009FF10 0009CFF0  41 82 00 0C */	beq .L_8009FF1C
/* 8009FF14 0009CFF4  28 00 00 02 */	cmplwi r0, 0x2
/* 8009FF18 0009CFF8  40 82 00 E8 */	bne .L_800A0000
.L_8009FF1C:
/* 8009FF1C 0009CFFC  C0 3F 02 24 */	lfs f1, 0x224(r31)
/* 8009FF20 0009D000  3B DF 00 0C */	addi r30, r31, 0xc
/* 8009FF24 0009D004  C0 02 92 38 */	lfs f0, "@761"@sda21(r2)
/* 8009FF28 0009D008  3B A0 00 01 */	li r29, 0x1
/* 8009FF2C 0009D00C  EF C1 07 32 */	fmuls f30, f1, f28
/* 8009FF30 0009D010  EC 00 07 B2 */	fmuls f0, f0, f30
/* 8009FF34 0009D014  FF E0 00 50 */	fneg f31, f0
/* 8009FF38 0009D018  48 00 00 B4 */	b .L_8009FFEC
.L_8009FF3C:
/* 8009FF3C 0009D01C  4B F9 0D 4D */	bl xurand__Fv
/* 8009FF40 0009D020  EC 3E F8 7A */	fmadds f1, f30, f1, f31
/* 8009FF44 0009D024  C0 1E 00 08 */	lfs f0, 0x8(r30)
/* 8009FF48 0009D028  EC 00 08 2A */	fadds f0, f0, f1
/* 8009FF4C 0009D02C  D0 1E 00 C8 */	stfs f0, 0xc8(r30)
/* 8009FF50 0009D030  4B F9 0D 39 */	bl xurand__Fv
/* 8009FF54 0009D034  EC 3E F8 7A */	fmadds f1, f30, f1, f31
/* 8009FF58 0009D038  C0 1E 00 0C */	lfs f0, 0xc(r30)
/* 8009FF5C 0009D03C  EC 00 08 2A */	fadds f0, f0, f1
/* 8009FF60 0009D040  D0 1E 00 CC */	stfs f0, 0xcc(r30)
/* 8009FF64 0009D044  4B F9 0D 25 */	bl xurand__Fv
/* 8009FF68 0009D048  EC 3E F8 7A */	fmadds f1, f30, f1, f31
/* 8009FF6C 0009D04C  C0 1E 00 10 */	lfs f0, 0x10(r30)
/* 8009FF70 0009D050  EC 00 08 2A */	fadds f0, f0, f1
/* 8009FF74 0009D054  D0 1E 00 D0 */	stfs f0, 0xd0(r30)
/* 8009FF78 0009D058  80 1F 00 04 */	lwz r0, 0x4(r31)
/* 8009FF7C 0009D05C  54 00 06 B5 */	rlwinm. r0, r0, 0, 26, 26
/* 8009FF80 0009D060  41 82 00 64 */	beq .L_8009FFE4
/* 8009FF84 0009D064  A8 1F 01 88 */	lha r0, 0x188(r31)
/* 8009FF88 0009D068  3C A0 43 30 */	lis r5, 0x4330
/* 8009FF8C 0009D06C  6F A3 80 00 */	xoris r3, r29, 0x8000
/* 8009FF90 0009D070  90 A1 01 C0 */	stw r5, 0x1c0(r1)
/* 8009FF94 0009D074  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8009FF98 0009D078  C8 A2 92 70 */	lfd f5, "@776"@sda21(r2)
/* 8009FF9C 0009D07C  90 61 01 C4 */	stw r3, 0x1c4(r1)
/* 8009FFA0 0009D080  38 7E 00 C8 */	addi r3, r30, 0xc8
/* 8009FFA4 0009D084  C0 42 92 94 */	lfs f2, "@953"@sda21(r2)
/* 8009FFA8 0009D088  38 9F 01 90 */	addi r4, r31, 0x190
/* 8009FFAC 0009D08C  C8 01 01 C0 */	lfd f0, 0x1c0(r1)
/* 8009FFB0 0009D090  90 01 01 CC */	stw r0, 0x1cc(r1)
/* 8009FFB4 0009D094  EC 80 28 28 */	fsubs f4, f0, f5
/* 8009FFB8 0009D098  C0 62 92 84 */	lfs f3, "@949"@sda21(r2)
/* 8009FFBC 0009D09C  90 A1 01 C8 */	stw r5, 0x1c8(r1)
/* 8009FFC0 0009D0A0  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 8009FFC4 0009D0A4  C8 21 01 C8 */	lfd f1, 0x1c8(r1)
/* 8009FFC8 0009D0A8  EC 21 28 28 */	fsubs f1, f1, f5
/* 8009FFCC 0009D0AC  EC 84 08 24 */	fdivs f4, f4, f1
/* 8009FFD0 0009D0B0  EC 24 01 32 */	fmuls f1, f4, f4
/* 8009FFD4 0009D0B4  EC 22 00 72 */	fmuls f1, f2, f1
/* 8009FFD8 0009D0B8  EC 23 09 3A */	fmadds f1, f3, f4, f1
/* 8009FFDC 0009D0BC  EC 21 00 32 */	fmuls f1, f1, f0
/* 8009FFE0 0009D0C0  4B F7 50 79 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
.L_8009FFE4:
/* 8009FFE4 0009D0C4  3B DE 00 0C */	addi r30, r30, 0xc
/* 8009FFE8 0009D0C8  3B BD 00 01 */	addi r29, r29, 0x1
.L_8009FFEC:
/* 8009FFEC 0009D0CC  A8 7F 01 88 */	lha r3, 0x188(r31)
/* 8009FFF0 0009D0D0  38 03 FF FF */	addi r0, r3, -0x1
/* 8009FFF4 0009D0D4  7C 1D 00 00 */	cmpw r29, r0
/* 8009FFF8 0009D0D8  41 80 FF 44 */	blt .L_8009FF3C
/* 8009FFFC 0009D0DC  48 00 01 D8 */	b .L_800A01D4
.L_800A0000:
/* 800A0000 0009D0E0  28 00 00 01 */	cmplwi r0, 0x1
/* 800A0004 0009D0E4  40 82 01 D0 */	bne .L_800A01D4
/* 800A0008 0009D0E8  A8 9F 01 88 */	lha r4, 0x188(r31)
/* 800A000C 0009D0EC  38 61 00 14 */	addi r3, r1, 0x14
/* 800A0010 0009D0F0  38 BF 00 08 */	addi r5, r31, 0x8
/* 800A0014 0009D0F4  38 04 FF FF */	addi r0, r4, -0x1
/* 800A0018 0009D0F8  1C 80 00 0C */	mulli r4, r0, 0xc
/* 800A001C 0009D0FC  38 84 00 08 */	addi r4, r4, 0x8
/* 800A0020 0009D100  7C 9F 22 14 */	add r4, r31, r4
/* 800A0024 0009D104  4B F6 E6 6D */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 800A0028 0009D108  38 61 00 14 */	addi r3, r1, 0x14
/* 800A002C 0009D10C  7C 64 1B 78 */	mr r4, r3
/* 800A0030 0009D110  4B FA E2 C1 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 800A0034 0009D114  C0 3F 02 24 */	lfs f1, 0x224(r31)
/* 800A0038 0009D118  3B DF 00 04 */	addi r30, r31, 0x4
/* 800A003C 0009D11C  C0 02 92 38 */	lfs f0, "@761"@sda21(r2)
/* 800A0040 0009D120  3B BF 00 0C */	addi r29, r31, 0xc
/* 800A0044 0009D124  EF C1 07 32 */	fmuls f30, f1, f28
/* 800A0048 0009D128  3B 80 00 01 */	li r28, 0x1
/* 800A004C 0009D12C  EC 00 07 B2 */	fmuls f0, f0, f30
/* 800A0050 0009D130  FF E0 00 50 */	fneg f31, f0
/* 800A0054 0009D134  48 00 01 70 */	b .L_800A01C4
.L_800A0058:
/* 800A0058 0009D138  C0 42 92 A0 */	lfs f2, "@1054"@sda21(r2)
/* 800A005C 0009D13C  38 61 00 20 */	addi r3, r1, 0x20
/* 800A0060 0009D140  C0 3E 01 DC */	lfs f1, 0x1dc(r30)
/* 800A0064 0009D144  38 81 00 14 */	addi r4, r1, 0x14
/* 800A0068 0009D148  C0 02 92 8C */	lfs f0, "@951"@sda21(r2)
/* 800A006C 0009D14C  EC 22 00 72 */	fmuls f1, f2, f1
/* 800A0070 0009D150  EC 21 00 24 */	fdivs f1, f1, f0
/* 800A0074 0009D154  4B F7 B8 69 */	bl xMat3x3Rot__FP7xMat3x3PC5xVec3f
/* 800A0078 0009D158  38 61 00 08 */	addi r3, r1, 0x8
/* 800A007C 0009D15C  38 9F 01 90 */	addi r4, r31, 0x190
/* 800A0080 0009D160  4B FA E4 5D */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 800A0084 0009D164  80 DF 00 04 */	lwz r6, 0x4(r31)
/* 800A0088 0009D168  C3 A2 92 80 */	lfs f29, "@948"@sda21(r2)
/* 800A008C 0009D16C  70 C0 00 28 */	andi. r0, r6, 0x28
/* 800A0090 0009D170  41 82 00 68 */	beq .L_800A00F8
/* 800A0094 0009D174  3C 80 43 30 */	lis r4, 0x4330
/* 800A0098 0009D178  A8 7F 01 88 */	lha r3, 0x188(r31)
/* 800A009C 0009D17C  6F 85 80 00 */	xoris r5, r28, 0x8000
/* 800A00A0 0009D180  90 81 01 C8 */	stw r4, 0x1c8(r1)
/* 800A00A4 0009D184  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 800A00A8 0009D188  C8 82 92 70 */	lfd f4, "@776"@sda21(r2)
/* 800A00AC 0009D18C  90 A1 01 CC */	stw r5, 0x1cc(r1)
/* 800A00B0 0009D190  54 C0 07 39 */	rlwinm. r0, r6, 0, 28, 28
/* 800A00B4 0009D194  C0 22 92 94 */	lfs f1, "@953"@sda21(r2)
/* 800A00B8 0009D198  C8 01 01 C8 */	lfd f0, 0x1c8(r1)
/* 800A00BC 0009D19C  90 61 01 C4 */	stw r3, 0x1c4(r1)
/* 800A00C0 0009D1A0  EC 60 20 28 */	fsubs f3, f0, f4
/* 800A00C4 0009D1A4  C0 42 92 84 */	lfs f2, "@949"@sda21(r2)
/* 800A00C8 0009D1A8  90 81 01 C0 */	stw r4, 0x1c0(r1)
/* 800A00CC 0009D1AC  C8 01 01 C0 */	lfd f0, 0x1c0(r1)
/* 800A00D0 0009D1B0  EC 00 20 28 */	fsubs f0, f0, f4
/* 800A00D4 0009D1B4  EC 63 00 24 */	fdivs f3, f3, f0
/* 800A00D8 0009D1B8  EC 03 00 F2 */	fmuls f0, f3, f3
/* 800A00DC 0009D1BC  EC 01 00 32 */	fmuls f0, f1, f0
/* 800A00E0 0009D1C0  EF A2 00 FA */	fmadds f29, f2, f3, f0
/* 800A00E4 0009D1C4  41 82 00 14 */	beq .L_800A00F8
/* 800A00E8 0009D1C8  C0 1F 02 20 */	lfs f0, 0x220(r31)
/* 800A00EC 0009D1CC  38 61 00 08 */	addi r3, r1, 0x8
/* 800A00F0 0009D1D0  EC 20 07 72 */	fmuls f1, f0, f29
/* 800A00F4 0009D1D4  4B F7 B8 45 */	bl xVec3SMulBy__FP5xVec3f
.L_800A00F8:
/* 800A00F8 0009D1D8  38 61 00 08 */	addi r3, r1, 0x8
/* 800A00FC 0009D1DC  38 81 00 20 */	addi r4, r1, 0x20
/* 800A0100 0009D1E0  7C 65 1B 78 */	mr r5, r3
/* 800A0104 0009D1E4  4B F9 29 59 */	bl xMat3x3LMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 800A0108 0009D1E8  C0 3F 02 1C */	lfs f1, 0x21c(r31)
/* 800A010C 0009D1EC  C0 1E 01 DC */	lfs f0, 0x1dc(r30)
/* 800A0110 0009D1F0  EC 01 07 3A */	fmadds f0, f1, f28, f0
/* 800A0114 0009D1F4  D0 1E 01 DC */	stfs f0, 0x1dc(r30)
/* 800A0118 0009D1F8  C0 3E 01 DC */	lfs f1, 0x1dc(r30)
/* 800A011C 0009D1FC  C0 02 92 8C */	lfs f0, "@951"@sda21(r2)
/* 800A0120 0009D200  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A0124 0009D204  40 81 00 14 */	ble .L_800A0138
/* 800A0128 0009D208  C0 02 92 88 */	lfs f0, "@950"@sda21(r2)
/* 800A012C 0009D20C  EC 01 00 28 */	fsubs f0, f1, f0
/* 800A0130 0009D210  D0 1E 01 DC */	stfs f0, 0x1dc(r30)
/* 800A0134 0009D214  48 00 00 1C */	b .L_800A0150
.L_800A0138:
/* 800A0138 0009D218  C0 02 92 90 */	lfs f0, "@952"@sda21(r2)
/* 800A013C 0009D21C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A0140 0009D220  40 80 00 10 */	bge .L_800A0150
/* 800A0144 0009D224  C0 02 92 88 */	lfs f0, "@950"@sda21(r2)
/* 800A0148 0009D228  EC 01 00 2A */	fadds f0, f1, f0
/* 800A014C 0009D22C  D0 1E 01 DC */	stfs f0, 0x1dc(r30)
.L_800A0150:
/* 800A0150 0009D230  4B F9 0B 39 */	bl xurand__Fv
/* 800A0154 0009D234  EC 3E F8 7A */	fmadds f1, f30, f1, f31
/* 800A0158 0009D238  C0 1D 00 08 */	lfs f0, 0x8(r29)
/* 800A015C 0009D23C  EC 00 08 2A */	fadds f0, f0, f1
/* 800A0160 0009D240  D0 1D 00 C8 */	stfs f0, 0xc8(r29)
/* 800A0164 0009D244  4B F9 0B 25 */	bl xurand__Fv
/* 800A0168 0009D248  EC 3E F8 7A */	fmadds f1, f30, f1, f31
/* 800A016C 0009D24C  C0 1D 00 0C */	lfs f0, 0xc(r29)
/* 800A0170 0009D250  EC 00 08 2A */	fadds f0, f0, f1
/* 800A0174 0009D254  D0 1D 00 CC */	stfs f0, 0xcc(r29)
/* 800A0178 0009D258  4B F9 0B 11 */	bl xurand__Fv
/* 800A017C 0009D25C  EC 3E F8 7A */	fmadds f1, f30, f1, f31
/* 800A0180 0009D260  C0 1D 00 10 */	lfs f0, 0x10(r29)
/* 800A0184 0009D264  38 7D 00 C8 */	addi r3, r29, 0xc8
/* 800A0188 0009D268  38 81 00 08 */	addi r4, r1, 0x8
/* 800A018C 0009D26C  EC 00 08 2A */	fadds f0, f0, f1
/* 800A0190 0009D270  D0 1D 00 D0 */	stfs f0, 0xd0(r29)
/* 800A0194 0009D274  4B F6 E5 C1 */	bl xVec3AddTo__FP5xVec3PC5xVec3
/* 800A0198 0009D278  80 1F 00 04 */	lwz r0, 0x4(r31)
/* 800A019C 0009D27C  54 00 06 B5 */	rlwinm. r0, r0, 0, 26, 26
/* 800A01A0 0009D280  41 82 00 18 */	beq .L_800A01B8
/* 800A01A4 0009D284  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 800A01A8 0009D288  38 7D 00 C8 */	addi r3, r29, 0xc8
/* 800A01AC 0009D28C  38 9F 01 90 */	addi r4, r31, 0x190
/* 800A01B0 0009D290  EC 3D 00 32 */	fmuls f1, f29, f0
/* 800A01B4 0009D294  4B F7 4E A5 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
.L_800A01B8:
/* 800A01B8 0009D298  3B DE 00 04 */	addi r30, r30, 0x4
/* 800A01BC 0009D29C  3B BD 00 0C */	addi r29, r29, 0xc
/* 800A01C0 0009D2A0  3B 9C 00 01 */	addi r28, r28, 0x1
.L_800A01C4:
/* 800A01C4 0009D2A4  A8 7F 01 88 */	lha r3, 0x188(r31)
/* 800A01C8 0009D2A8  38 03 FF FF */	addi r0, r3, -0x1
/* 800A01CC 0009D2AC  7C 1C 00 00 */	cmpw r28, r0
/* 800A01D0 0009D2B0  41 80 FE 88 */	blt .L_800A0058
.L_800A01D4:
/* 800A01D4 0009D2B4  80 1F 00 04 */	lwz r0, 0x4(r31)
/* 800A01D8 0009D2B8  54 00 07 BD */	rlwinm. r0, r0, 0, 30, 30
/* 800A01DC 0009D2BC  41 82 01 2C */	beq .L_800A0308
/* 800A01E0 0009D2C0  80 0D 8F F8 */	lwz r0, sSparkEmitter@sda21(r13)
/* 800A01E4 0009D2C4  28 00 00 00 */	cmplwi r0, 0x0
/* 800A01E8 0009D2C8  41 82 01 20 */	beq .L_800A0308
/* 800A01EC 0009D2CC  4B F9 0A 7D */	bl xrand__Fv
/* 800A01F0 0009D2D0  54 60 07 BF */	clrlwi. r0, r3, 30
/* 800A01F4 0009D2D4  41 82 01 14 */	beq .L_800A0308
/* 800A01F8 0009D2D8  38 00 0D 00 */	li r0, 0xd00
/* 800A01FC 0009D2DC  90 01 01 88 */	stw r0, 0x188(r1)
/* 800A0200 0009D2E0  4B F9 0A 69 */	bl xrand__Fv
/* 800A0204 0009D2E4  A8 9F 01 88 */	lha r4, 0x188(r31)
/* 800A0208 0009D2E8  7C 03 23 96 */	divwu r0, r3, r4
/* 800A020C 0009D2EC  7C 00 21 D6 */	mullw r0, r0, r4
/* 800A0210 0009D2F0  7C 00 18 50 */	subf r0, r0, r3
/* 800A0214 0009D2F4  38 61 01 90 */	addi r3, r1, 0x190
/* 800A0218 0009D2F8  1C 80 00 0C */	mulli r4, r0, 0xc
/* 800A021C 0009D2FC  38 84 00 C8 */	addi r4, r4, 0xc8
/* 800A0220 0009D300  7C 9F 22 14 */	add r4, r31, r4
/* 800A0224 0009D304  4B F6 B0 41 */	bl __as__5xVec3FRC5xVec3
/* 800A0228 0009D308  4B F9 0A 41 */	bl xrand__Fv
/* 800A022C 0009D30C  FC 20 E0 90 */	fmr f1, f28
/* 800A0230 0009D310  80 6D 8F F8 */	lwz r3, sSparkEmitter@sda21(r13)
/* 800A0234 0009D314  38 81 00 50 */	addi r4, r1, 0x50
/* 800A0238 0009D318  48 07 79 91 */	bl xParEmitterEmitCustom__FP11xParEmitterfP25xParEmitterCustomSettings
/* 800A023C 0009D31C  48 00 00 CC */	b .L_800A0308
.L_800A0240:
/* 800A0240 0009D320  C0 5F 00 40 */	lfs f2, 0x40(r31)
/* 800A0244 0009D324  3C 60 80 2F */	lis r3, sLFuncEnd@ha
/* 800A0248 0009D328  C0 2D 82 84 */	lfs f1, sLFuncShift@sda21(r13)
/* 800A024C 0009D32C  38 63 96 B0 */	addi r3, r3, sLFuncEnd@l
/* 800A0250 0009D330  C0 1F 00 38 */	lfs f0, 0x38(r31)
/* 800A0254 0009D334  EC 22 00 72 */	fmuls f1, f2, f1
/* 800A0258 0009D338  EC 1C 00 7A */	fmadds f0, f28, f1, f0
/* 800A025C 0009D33C  D0 1F 00 38 */	stfs f0, 0x38(r31)
/* 800A0260 0009D340  48 00 00 14 */	b .L_800A0274
.L_800A0264:
/* 800A0264 0009D344  C0 3F 00 38 */	lfs f1, 0x38(r31)
/* 800A0268 0009D348  C0 02 92 40 */	lfs f0, "@763"@sda21(r2)
/* 800A026C 0009D34C  EC 01 00 28 */	fsubs f0, f1, f0
/* 800A0270 0009D350  D0 1F 00 38 */	stfs f0, 0x38(r31)
.L_800A0274:
/* 800A0274 0009D354  C0 3F 00 38 */	lfs f1, 0x38(r31)
/* 800A0278 0009D358  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 800A027C 0009D35C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A0280 0009D360  41 81 FF E4 */	bgt .L_800A0264
/* 800A0284 0009D364  48 00 00 14 */	b .L_800A0298
.L_800A0288:
/* 800A0288 0009D368  C0 3F 00 38 */	lfs f1, 0x38(r31)
/* 800A028C 0009D36C  C0 02 92 40 */	lfs f0, "@763"@sda21(r2)
/* 800A0290 0009D370  EC 01 00 2A */	fadds f0, f1, f0
/* 800A0294 0009D374  D0 1F 00 38 */	stfs f0, 0x38(r31)
.L_800A0298:
/* 800A0298 0009D378  C0 3F 00 38 */	lfs f1, 0x38(r31)
/* 800A029C 0009D37C  C0 02 92 30 */	lfs f0, "@672"@sda21(r2)
/* 800A02A0 0009D380  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A02A4 0009D384  41 80 FF E4 */	blt .L_800A0288
/* 800A02A8 0009D388  C0 5F 00 44 */	lfs f2, 0x44(r31)
/* 800A02AC 0009D38C  C0 2D 82 84 */	lfs f1, sLFuncShift@sda21(r13)
/* 800A02B0 0009D390  C0 1F 00 3C */	lfs f0, 0x3c(r31)
/* 800A02B4 0009D394  EC 22 00 72 */	fmuls f1, f2, f1
/* 800A02B8 0009D398  EC 1C 00 7A */	fmadds f0, f28, f1, f0
/* 800A02BC 0009D39C  D0 1F 00 3C */	stfs f0, 0x3c(r31)
/* 800A02C0 0009D3A0  48 00 00 14 */	b .L_800A02D4
.L_800A02C4:
/* 800A02C4 0009D3A4  C0 3F 00 3C */	lfs f1, 0x3c(r31)
/* 800A02C8 0009D3A8  C0 02 92 40 */	lfs f0, "@763"@sda21(r2)
/* 800A02CC 0009D3AC  EC 01 00 28 */	fsubs f0, f1, f0
/* 800A02D0 0009D3B0  D0 1F 00 3C */	stfs f0, 0x3c(r31)
.L_800A02D4:
/* 800A02D4 0009D3B4  C0 3F 00 3C */	lfs f1, 0x3c(r31)
/* 800A02D8 0009D3B8  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 800A02DC 0009D3BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A02E0 0009D3C0  41 81 FF E4 */	bgt .L_800A02C4
/* 800A02E4 0009D3C4  48 00 00 14 */	b .L_800A02F8
.L_800A02E8:
/* 800A02E8 0009D3C8  C0 3F 00 3C */	lfs f1, 0x3c(r31)
/* 800A02EC 0009D3CC  C0 02 92 40 */	lfs f0, "@763"@sda21(r2)
/* 800A02F0 0009D3D0  EC 01 00 2A */	fadds f0, f1, f0
/* 800A02F4 0009D3D4  D0 1F 00 3C */	stfs f0, 0x3c(r31)
.L_800A02F8:
/* 800A02F8 0009D3D8  C0 3F 00 3C */	lfs f1, 0x3c(r31)
/* 800A02FC 0009D3DC  C0 02 92 30 */	lfs f0, "@672"@sda21(r2)
/* 800A0300 0009D3E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A0304 0009D3E4  41 80 FF E4 */	blt .L_800A02E8
.L_800A0308:
/* 800A0308 0009D3E8  E3 E1 02 18 */	psq_l f31, 0x218(r1), 0, qr0
/* 800A030C 0009D3EC  CB E1 02 10 */	lfd f31, 0x210(r1)
/* 800A0310 0009D3F0  E3 C1 02 08 */	psq_l f30, 0x208(r1), 0, qr0
/* 800A0314 0009D3F4  CB C1 02 00 */	lfd f30, 0x200(r1)
/* 800A0318 0009D3F8  E3 A1 01 F8 */	psq_l f29, 0x1f8(r1), 0, qr0
/* 800A031C 0009D3FC  CB A1 01 F0 */	lfd f29, 0x1f0(r1)
/* 800A0320 0009D400  E3 81 01 E8 */	psq_l f28, 0x1e8(r1), 0, qr0
/* 800A0324 0009D404  CB 81 01 E0 */	lfd f28, 0x1e0(r1)
/* 800A0328 0009D408  83 E1 01 DC */	lwz r31, 0x1dc(r1)
/* 800A032C 0009D40C  83 C1 01 D8 */	lwz r30, 0x1d8(r1)
/* 800A0330 0009D410  83 A1 01 D4 */	lwz r29, 0x1d4(r1)
/* 800A0334 0009D414  80 01 02 24 */	lwz r0, 0x224(r1)
/* 800A0338 0009D418  83 81 01 D0 */	lwz r28, 0x1d0(r1)
/* 800A033C 0009D41C  7C 08 03 A6 */	mtlr r0
/* 800A0340 0009D420  38 21 02 20 */	addi r1, r1, 0x220
/* 800A0344 0009D424  4E 80 00 20 */	blr
.endfn UpdateLightning__FP10zLightningf

# zLightningUpdate(float)
.fn zLightningUpdate__Ff, global
/* 800A0348 0009D428  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 800A034C 0009D42C  7C 08 02 A6 */	mflr r0
/* 800A0350 0009D430  90 01 00 64 */	stw r0, 0x64(r1)
/* 800A0354 0009D434  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 800A0358 0009D438  F3 E1 00 58 */	psq_st f31, 0x58(r1), 0, qr0
/* 800A035C 0009D43C  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 800A0360 0009D440  F3 C1 00 48 */	psq_st f30, 0x48(r1), 0, qr0
/* 800A0364 0009D444  BE E1 00 1C */	stmw r23, 0x1c(r1)
/* 800A0368 0009D448  3C 60 80 2F */	lis r3, ...bss.0@ha
/* 800A036C 0009D44C  FF C0 08 90 */	fmr f30, f1
/* 800A0370 0009D450  3B C3 90 C8 */	addi r30, r3, ...bss.0@l
/* 800A0374 0009D454  3A E0 00 00 */	li r23, 0x0
/* 800A0378 0009D458  3B FE 00 00 */	addi r31, r30, 0x0
.L_800A037C:
/* 800A037C 0009D45C  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 800A0380 0009D460  28 03 00 00 */	cmplwi r3, 0x0
/* 800A0384 0009D464  41 82 00 18 */	beq .L_800A039C
/* 800A0388 0009D468  80 03 00 04 */	lwz r0, 0x4(r3)
/* 800A038C 0009D46C  54 00 07 FF */	clrlwi. r0, r0, 31
/* 800A0390 0009D470  41 82 00 0C */	beq .L_800A039C
/* 800A0394 0009D474  FC 20 F0 90 */	fmr f1, f30
/* 800A0398 0009D478  4B FF FA D1 */	bl UpdateLightning__FP10zLightningf
.L_800A039C:
/* 800A039C 0009D47C  3A F7 00 01 */	addi r23, r23, 0x1
/* 800A03A0 0009D480  3B FF 00 04 */	addi r31, r31, 0x4
/* 800A03A4 0009D484  2C 17 00 30 */	cmpwi r23, 0x30
/* 800A03A8 0009D488  41 80 FF D4 */	blt .L_800A037C
/* 800A03AC 0009D48C  C0 2D 82 A8 */	lfs f1, sLFuncUVSpeed@sda21(r13)
/* 800A03B0 0009D490  C0 0D 90 04 */	lfs f0, sLFuncUVOffset@sda21(r13)
/* 800A03B4 0009D494  EC 01 07 BA */	fmadds f0, f1, f30, f0
/* 800A03B8 0009D498  D0 0D 90 04 */	stfs f0, sLFuncUVOffset@sda21(r13)
/* 800A03BC 0009D49C  C0 2D 90 04 */	lfs f1, sLFuncUVOffset@sda21(r13)
/* 800A03C0 0009D4A0  C0 02 92 80 */	lfs f0, "@948"@sda21(r2)
/* 800A03C4 0009D4A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A03C8 0009D4A8  40 81 00 0C */	ble .L_800A03D4
/* 800A03CC 0009D4AC  EC 01 00 28 */	fsubs f0, f1, f0
/* 800A03D0 0009D4B0  D0 0D 90 04 */	stfs f0, sLFuncUVOffset@sda21(r13)
.L_800A03D4:
/* 800A03D4 0009D4B4  C0 2D 82 80 */	lfs f1, sLFuncJerkFreq@sda21(r13)
/* 800A03D8 0009D4B8  C0 0D 90 00 */	lfs f0, sLFuncJerkTime@sda21(r13)
/* 800A03DC 0009D4BC  EC 01 07 BA */	fmadds f0, f1, f30, f0
/* 800A03E0 0009D4C0  D0 0D 90 00 */	stfs f0, sLFuncJerkTime@sda21(r13)
/* 800A03E4 0009D4C4  C0 2D 90 00 */	lfs f1, sLFuncJerkTime@sda21(r13)
/* 800A03E8 0009D4C8  C0 02 92 80 */	lfs f0, "@948"@sda21(r2)
/* 800A03EC 0009D4CC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A03F0 0009D4D0  40 81 02 34 */	ble .L_800A0624
/* 800A03F4 0009D4D4  4B F9 08 95 */	bl xurand__Fv
/* 800A03F8 0009D4D8  C0 02 92 A4 */	lfs f0, "@1105"@sda21(r2)
/* 800A03FC 0009D4DC  EC 00 00 72 */	fmuls f0, f0, f1
/* 800A0400 0009D4E0  FC 00 00 1E */	fctiwz f0, f0
/* 800A0404 0009D4E4  D8 01 00 08 */	stfd f0, 0x8(r1)
/* 800A0408 0009D4E8  82 E1 00 0C */	lwz r23, 0xc(r1)
/* 800A040C 0009D4EC  2C 17 00 09 */	cmpwi r23, 0x9
/* 800A0410 0009D4F0  41 80 00 08 */	blt .L_800A0418
/* 800A0414 0009D4F4  3A E0 00 08 */	li r23, 0x8
.L_800A0418:
/* 800A0418 0009D4F8  2C 17 00 00 */	cmpwi r23, 0x0
/* 800A041C 0009D4FC  40 80 00 08 */	bge .L_800A0424
/* 800A0420 0009D500  3A E0 00 00 */	li r23, 0x0
.L_800A0424:
/* 800A0424 0009D504  4B F9 08 65 */	bl xurand__Fv
/* 800A0428 0009D508  C0 42 92 38 */	lfs f2, "@761"@sda21(r2)
/* 800A042C 0009D50C  C0 02 92 34 */	lfs f0, "@760"@sda21(r2)
/* 800A0430 0009D510  EC 21 10 28 */	fsubs f1, f1, f2
/* 800A0434 0009D514  EF E0 00 72 */	fmuls f31, f0, f1
/* 800A0438 0009D518  4B F9 08 51 */	bl xurand__Fv
/* 800A043C 0009D51C  C0 42 92 38 */	lfs f2, "@761"@sda21(r2)
/* 800A0440 0009D520  C0 02 92 34 */	lfs f0, "@760"@sda21(r2)
/* 800A0444 0009D524  EC 21 10 28 */	fsubs f1, f1, f2
/* 800A0448 0009D528  EF C0 00 72 */	fmuls f30, f0, f1
/* 800A044C 0009D52C  4B F9 08 3D */	bl xurand__Fv
/* 800A0450 0009D530  C0 42 92 38 */	lfs f2, "@761"@sda21(r2)
/* 800A0454 0009D534  1C 17 00 0C */	mulli r0, r23, 0xc
/* 800A0458 0009D538  3B 5E 04 80 */	addi r26, r30, 0x480
/* 800A045C 0009D53C  C0 02 92 34 */	lfs f0, "@760"@sda21(r2)
/* 800A0460 0009D540  EC 21 10 28 */	fsubs f1, f1, f2
/* 800A0464 0009D544  7F 5A 02 14 */	add r26, r26, r0
/* 800A0468 0009D548  FC 40 F0 90 */	fmr f2, f30
/* 800A046C 0009D54C  FC 60 F8 90 */	fmr f3, f31
/* 800A0470 0009D550  7F 43 D3 78 */	mr r3, r26
/* 800A0474 0009D554  EC 20 00 72 */	fmuls f1, f0, f1
/* 800A0478 0009D558  4B F6 EB 85 */	bl xVec3Init__FP5xVec3fff
/* 800A047C 0009D55C  4B F9 08 0D */	bl xurand__Fv
/* 800A0480 0009D560  C0 42 92 38 */	lfs f2, "@761"@sda21(r2)
/* 800A0484 0009D564  C0 02 92 84 */	lfs f0, "@949"@sda21(r2)
/* 800A0488 0009D568  EC 21 10 28 */	fsubs f1, f1, f2
/* 800A048C 0009D56C  EF E0 00 72 */	fmuls f31, f0, f1
/* 800A0490 0009D570  4B F9 07 F9 */	bl xurand__Fv
/* 800A0494 0009D574  C0 42 92 38 */	lfs f2, "@761"@sda21(r2)
/* 800A0498 0009D578  C0 02 92 84 */	lfs f0, "@949"@sda21(r2)
/* 800A049C 0009D57C  EC 21 10 28 */	fsubs f1, f1, f2
/* 800A04A0 0009D580  EF C0 00 72 */	fmuls f30, f0, f1
/* 800A04A4 0009D584  4B F9 07 E5 */	bl xurand__Fv
/* 800A04A8 0009D588  C0 42 92 38 */	lfs f2, "@761"@sda21(r2)
/* 800A04AC 0009D58C  1C 17 00 18 */	mulli r0, r23, 0x18
/* 800A04B0 0009D590  3B 7E 04 F8 */	addi r27, r30, 0x4f8
/* 800A04B4 0009D594  C0 02 92 84 */	lfs f0, "@949"@sda21(r2)
/* 800A04B8 0009D598  EC 21 10 28 */	fsubs f1, f1, f2
/* 800A04BC 0009D59C  7F 7B 02 14 */	add r27, r27, r0
/* 800A04C0 0009D5A0  FC 40 F0 90 */	fmr f2, f30
/* 800A04C4 0009D5A4  FC 60 F8 90 */	fmr f3, f31
/* 800A04C8 0009D5A8  7F 63 DB 78 */	mr r3, r27
/* 800A04CC 0009D5AC  EC 20 00 72 */	fmuls f1, f0, f1
/* 800A04D0 0009D5B0  4B F6 EB 2D */	bl xVec3Init__FP5xVec3fff
/* 800A04D4 0009D5B4  4B F9 07 B5 */	bl xurand__Fv
/* 800A04D8 0009D5B8  C0 42 92 38 */	lfs f2, "@761"@sda21(r2)
/* 800A04DC 0009D5BC  C0 02 92 84 */	lfs f0, "@949"@sda21(r2)
/* 800A04E0 0009D5C0  EC 21 10 28 */	fsubs f1, f1, f2
/* 800A04E4 0009D5C4  EF C0 00 72 */	fmuls f30, f0, f1
/* 800A04E8 0009D5C8  4B F9 07 A1 */	bl xurand__Fv
/* 800A04EC 0009D5CC  C0 42 92 38 */	lfs f2, "@761"@sda21(r2)
/* 800A04F0 0009D5D0  C0 02 92 84 */	lfs f0, "@949"@sda21(r2)
/* 800A04F4 0009D5D4  EC 21 10 28 */	fsubs f1, f1, f2
/* 800A04F8 0009D5D8  EF E0 00 72 */	fmuls f31, f0, f1
/* 800A04FC 0009D5DC  4B F9 07 8D */	bl xurand__Fv
/* 800A0500 0009D5E0  C0 82 92 38 */	lfs f4, "@761"@sda21(r2)
/* 800A0504 0009D5E4  FC 40 F8 90 */	fmr f2, f31
/* 800A0508 0009D5E8  C0 02 92 84 */	lfs f0, "@949"@sda21(r2)
/* 800A050C 0009D5EC  FC 60 F0 90 */	fmr f3, f30
/* 800A0510 0009D5F0  EC 21 20 28 */	fsubs f1, f1, f4
/* 800A0514 0009D5F4  38 7B 00 0C */	addi r3, r27, 0xc
/* 800A0518 0009D5F8  EC 20 00 72 */	fmuls f1, f0, f1
/* 800A051C 0009D5FC  4B F6 EA E1 */	bl xVec3Init__FP5xVec3fff
/* 800A0520 0009D600  4B F9 07 69 */	bl xurand__Fv
/* 800A0524 0009D604  3B F7 00 01 */	addi r31, r23, 0x1
/* 800A0528 0009D608  3C 60 43 30 */	lis r3, 0x4330
/* 800A052C 0009D60C  6F E0 80 00 */	xoris r0, r31, 0x8000
/* 800A0530 0009D610  C0 02 92 38 */	lfs f0, "@761"@sda21(r2)
/* 800A0534 0009D614  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A0538 0009D618  56 E0 10 3A */	slwi r0, r23, 2
/* 800A053C 0009D61C  EC 61 00 28 */	fsubs f3, f1, f0
/* 800A0540 0009D620  3B 1E 05 E8 */	addi r24, r30, 0x5e8
/* 800A0544 0009D624  90 61 00 10 */	stw r3, 0x10(r1)
/* 800A0548 0009D628  7F 18 02 14 */	add r24, r24, r0
/* 800A054C 0009D62C  C8 42 92 70 */	lfd f2, "@776"@sda21(r2)
/* 800A0550 0009D630  56 E0 28 34 */	slwi r0, r23, 5
/* 800A0554 0009D634  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 800A0558 0009D638  3B BE 00 C0 */	addi r29, r30, 0xc0
/* 800A055C 0009D63C  C0 22 92 3C */	lfs f1, "@762"@sda21(r2)
/* 800A0560 0009D640  3B 9E 02 00 */	addi r28, r30, 0x200
/* 800A0564 0009D644  EC 00 10 28 */	fsubs f0, f0, f2
/* 800A0568 0009D648  3B 7E 03 40 */	addi r27, r30, 0x340
/* 800A056C 0009D64C  7F BD 02 14 */	add r29, r29, r0
/* 800A0570 0009D650  7F 9C 02 14 */	add r28, r28, r0
/* 800A0574 0009D654  7F 7B 02 14 */	add r27, r27, r0
/* 800A0578 0009D658  EC 01 00 FA */	fmadds f0, f1, f3, f0
/* 800A057C 0009D65C  D0 18 00 00 */	stfs f0, 0x0(r24)
/* 800A0580 0009D660  48 00 00 94 */	b .L_800A0614
.L_800A0584:
/* 800A0584 0009D664  2C 17 00 00 */	cmpwi r23, 0x0
/* 800A0588 0009D668  40 82 00 10 */	bne .L_800A0598
/* 800A058C 0009D66C  C3 C2 92 30 */	lfs f30, "@672"@sda21(r2)
/* 800A0590 0009D670  38 80 00 09 */	li r4, 0x9
/* 800A0594 0009D674  48 00 00 14 */	b .L_800A05A8
.L_800A0598:
/* 800A0598 0009D678  38 97 FF FF */	addi r4, r23, -0x1
/* 800A059C 0009D67C  38 7E 05 E8 */	addi r3, r30, 0x5e8
/* 800A05A0 0009D680  54 80 10 3A */	slwi r0, r4, 2
/* 800A05A4 0009D684  7F C3 04 2E */	lfsx f30, r3, r0
.L_800A05A8:
/* 800A05A8 0009D688  1C 04 00 0C */	mulli r0, r4, 0xc
/* 800A05AC 0009D68C  3B 3E 04 80 */	addi r25, r30, 0x480
/* 800A05B0 0009D690  FC 20 F0 90 */	fmr f1, f30
/* 800A05B4 0009D694  C0 58 00 00 */	lfs f2, 0x0(r24)
/* 800A05B8 0009D698  C0 9A 00 00 */	lfs f4, 0x0(r26)
/* 800A05BC 0009D69C  7F A3 EB 78 */	mr r3, r29
/* 800A05C0 0009D6A0  7F 39 02 14 */	add r25, r25, r0
/* 800A05C4 0009D6A4  C0 79 00 00 */	lfs f3, 0x0(r25)
/* 800A05C8 0009D6A8  4B F9 11 A1 */	bl xFuncPiece_EndPoints__FP10xFuncPieceffff
/* 800A05CC 0009D6AC  FC 20 F0 90 */	fmr f1, f30
/* 800A05D0 0009D6B0  C0 58 00 00 */	lfs f2, 0x0(r24)
/* 800A05D4 0009D6B4  C0 79 00 04 */	lfs f3, 0x4(r25)
/* 800A05D8 0009D6B8  7F 83 E3 78 */	mr r3, r28
/* 800A05DC 0009D6BC  C0 9A 00 04 */	lfs f4, 0x4(r26)
/* 800A05E0 0009D6C0  4B F9 11 89 */	bl xFuncPiece_EndPoints__FP10xFuncPieceffff
/* 800A05E4 0009D6C4  FC 20 F0 90 */	fmr f1, f30
/* 800A05E8 0009D6C8  C0 58 00 00 */	lfs f2, 0x0(r24)
/* 800A05EC 0009D6CC  C0 79 00 08 */	lfs f3, 0x8(r25)
/* 800A05F0 0009D6D0  7F 63 DB 78 */	mr r3, r27
/* 800A05F4 0009D6D4  C0 9A 00 08 */	lfs f4, 0x8(r26)
/* 800A05F8 0009D6D8  4B F9 11 71 */	bl xFuncPiece_EndPoints__FP10xFuncPieceffff
/* 800A05FC 0009D6DC  3B 5A 00 0C */	addi r26, r26, 0xc
/* 800A0600 0009D6E0  3B 18 00 04 */	addi r24, r24, 0x4
/* 800A0604 0009D6E4  3B BD 00 20 */	addi r29, r29, 0x20
/* 800A0608 0009D6E8  3B 9C 00 20 */	addi r28, r28, 0x20
/* 800A060C 0009D6EC  3B 7B 00 20 */	addi r27, r27, 0x20
/* 800A0610 0009D6F0  3A F7 00 01 */	addi r23, r23, 0x1
.L_800A0614:
/* 800A0614 0009D6F4  7C 17 F8 00 */	cmpw r23, r31
/* 800A0618 0009D6F8  40 81 FF 6C */	ble .L_800A0584
/* 800A061C 0009D6FC  C0 02 92 30 */	lfs f0, "@672"@sda21(r2)
/* 800A0620 0009D700  D0 0D 90 00 */	stfs f0, sLFuncJerkTime@sda21(r13)
.L_800A0624:
/* 800A0624 0009D704  E3 E1 00 58 */	psq_l f31, 0x58(r1), 0, qr0
/* 800A0628 0009D708  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 800A062C 0009D70C  E3 C1 00 48 */	psq_l f30, 0x48(r1), 0, qr0
/* 800A0630 0009D710  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 800A0634 0009D714  BA E1 00 1C */	lmw r23, 0x1c(r1)
/* 800A0638 0009D718  80 01 00 64 */	lwz r0, 0x64(r1)
/* 800A063C 0009D71C  7C 08 03 A6 */	mtlr r0
/* 800A0640 0009D720  38 21 00 60 */	addi r1, r1, 0x60
/* 800A0644 0009D724  4E 80 00 20 */	blr
.endfn zLightningUpdate__Ff

# zLightningFunc_Render(zLightning*)
.fn zLightningFunc_Render__FP10zLightning, local
/* 800A0648 0009D728  94 21 FE D0 */	stwu r1, -0x130(r1)
/* 800A064C 0009D72C  7C 08 02 A6 */	mflr r0
/* 800A0650 0009D730  90 01 01 34 */	stw r0, 0x134(r1)
/* 800A0654 0009D734  DB E1 01 20 */	stfd f31, 0x120(r1)
/* 800A0658 0009D738  F3 E1 01 28 */	psq_st f31, 0x128(r1), 0, qr0
/* 800A065C 0009D73C  DB C1 01 10 */	stfd f30, 0x110(r1)
/* 800A0660 0009D740  F3 C1 01 18 */	psq_st f30, 0x118(r1), 0, qr0
/* 800A0664 0009D744  DB A1 01 00 */	stfd f29, 0x100(r1)
/* 800A0668 0009D748  F3 A1 01 08 */	psq_st f29, 0x108(r1), 0, qr0
/* 800A066C 0009D74C  DB 81 00 F0 */	stfd f28, 0xf0(r1)
/* 800A0670 0009D750  F3 81 00 F8 */	psq_st f28, 0xf8(r1), 0, qr0
/* 800A0674 0009D754  DB 61 00 E0 */	stfd f27, 0xe0(r1)
/* 800A0678 0009D758  F3 61 00 E8 */	psq_st f27, 0xe8(r1), 0, qr0
/* 800A067C 0009D75C  BD C1 00 98 */	stmw r14, 0x98(r1)
/* 800A0680 0009D760  7C 6F 1B 78 */	mr r15, r3
/* 800A0684 0009D764  3C 60 80 2F */	lis r3, ...bss.0@ha
/* 800A0688 0009D768  C0 2F 00 2C */	lfs f1, 0x2c(r15)
/* 800A068C 0009D76C  3B C3 90 C8 */	addi r30, r3, ...bss.0@l
/* 800A0690 0009D770  C0 02 92 A8 */	lfs f0, "@1331"@sda21(r2)
/* 800A0694 0009D774  C3 C2 92 30 */	lfs f30, "@672"@sda21(r2)
/* 800A0698 0009D778  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A069C 0009D77C  C3 A2 92 80 */	lfs f29, "@948"@sda21(r2)
/* 800A06A0 0009D780  40 81 00 10 */	ble .L_800A06B0
/* 800A06A4 0009D784  C0 02 92 40 */	lfs f0, "@763"@sda21(r2)
/* 800A06A8 0009D788  EC 00 00 72 */	fmuls f0, f0, f1
/* 800A06AC 0009D78C  EF BD 00 24 */	fdivs f29, f29, f0
.L_800A06B0:
/* 800A06B0 0009D790  C0 0D 82 88 */	lfs f0, sLFuncMaxPStep@sda21(r13)
/* 800A06B4 0009D794  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 800A06B8 0009D798  40 81 00 08 */	ble .L_800A06C0
/* 800A06BC 0009D79C  FF A0 00 90 */	fmr f29, f0
.L_800A06C0:
/* 800A06C0 0009D7A0  C0 0D 82 8C */	lfs f0, sLFuncMinPStep@sda21(r13)
/* 800A06C4 0009D7A4  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 800A06C8 0009D7A8  40 80 00 08 */	bge .L_800A06D0
/* 800A06CC 0009D7AC  FF A0 00 90 */	fmr f29, f0
.L_800A06D0:
/* 800A06D0 0009D7B0  C0 0F 00 38 */	lfs f0, 0x38(r15)
/* 800A06D4 0009D7B4  38 DE 00 C0 */	addi r6, r30, 0xc0
/* 800A06D8 0009D7B8  38 BE 02 00 */	addi r5, r30, 0x200
/* 800A06DC 0009D7BC  38 9E 03 40 */	addi r4, r30, 0x340
/* 800A06E0 0009D7C0  90 C1 00 20 */	stw r6, 0x20(r1)
/* 800A06E4 0009D7C4  3C 60 80 3C */	lis r3, gRenderArr@ha
/* 800A06E8 0009D7C8  38 63 36 60 */	addi r3, r3, gRenderArr@l
/* 800A06EC 0009D7CC  39 C1 00 20 */	addi r14, r1, 0x20
/* 800A06F0 0009D7D0  90 A1 00 18 */	stw r5, 0x18(r1)
/* 800A06F4 0009D7D4  38 63 07 80 */	addi r3, r3, 0x780
/* 800A06F8 0009D7D8  38 03 21 C0 */	addi r0, r3, 0x21c0
/* 800A06FC 0009D7DC  3A A1 00 18 */	addi r21, r1, 0x18
/* 800A0700 0009D7E0  90 81 00 10 */	stw r4, 0x10(r1)
/* 800A0704 0009D7E4  3A 81 00 10 */	addi r20, r1, 0x10
/* 800A0708 0009D7E8  C0 4F 00 3C */	lfs f2, 0x3c(r15)
/* 800A070C 0009D7EC  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 800A0710 0009D7F0  90 C1 00 24 */	stw r6, 0x24(r1)
/* 800A0714 0009D7F4  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 800A0718 0009D7F8  90 81 00 14 */	stw r4, 0x14(r1)
/* 800A071C 0009D7FC  C0 2F 00 2C */	lfs f1, 0x2c(r15)
/* 800A0720 0009D800  C0 02 92 A8 */	lfs f0, "@1331"@sda21(r2)
/* 800A0724 0009D804  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 800A0728 0009D808  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A072C 0009D80C  90 61 00 08 */	stw r3, 0x8(r1)
/* 800A0730 0009D810  90 01 00 0C */	stw r0, 0xc(r1)
/* 800A0734 0009D814  40 81 00 48 */	ble .L_800A077C
/* 800A0738 0009D818  C0 4F 00 24 */	lfs f2, 0x24(r15)
/* 800A073C 0009D81C  38 61 00 54 */	addi r3, r1, 0x54
/* 800A0740 0009D820  C0 2F 00 28 */	lfs f1, 0x28(r15)
/* 800A0744 0009D824  7C 64 1B 78 */	mr r4, r3
/* 800A0748 0009D828  EC 02 08 28 */	fsubs f0, f2, f1
/* 800A074C 0009D82C  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 800A0750 0009D830  C0 0F 00 20 */	lfs f0, 0x20(r15)
/* 800A0754 0009D834  EC 21 00 28 */	fsubs f1, f1, f0
/* 800A0758 0009D838  EC 00 10 28 */	fsubs f0, f0, f2
/* 800A075C 0009D83C  D0 21 00 58 */	stfs f1, 0x58(r1)
/* 800A0760 0009D840  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 800A0764 0009D844  4B FA DB 8D */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 800A0768 0009D848  38 61 00 60 */	addi r3, r1, 0x60
/* 800A076C 0009D84C  38 81 00 54 */	addi r4, r1, 0x54
/* 800A0770 0009D850  38 AF 00 20 */	addi r5, r15, 0x20
/* 800A0774 0009D854  4B F7 49 19 */	bl xVec3Cross__FP5xVec3PC5xVec3PC5xVec3
/* 800A0778 0009D858  48 00 00 2C */	b .L_800A07A4
.L_800A077C:
/* 800A077C 0009D85C  C0 42 92 30 */	lfs f2, "@672"@sda21(r2)
/* 800A0780 0009D860  38 61 00 54 */	addi r3, r1, 0x54
/* 800A0784 0009D864  C0 22 92 80 */	lfs f1, "@948"@sda21(r2)
/* 800A0788 0009D868  FC 60 10 90 */	fmr f3, f2
/* 800A078C 0009D86C  4B F6 E8 71 */	bl xVec3Init__FP5xVec3fff
/* 800A0790 0009D870  C0 22 92 30 */	lfs f1, "@672"@sda21(r2)
/* 800A0794 0009D874  38 61 00 60 */	addi r3, r1, 0x60
/* 800A0798 0009D878  C0 62 92 80 */	lfs f3, "@948"@sda21(r2)
/* 800A079C 0009D87C  FC 40 08 90 */	fmr f2, f1
/* 800A07A0 0009D880  4B F6 E8 5D */	bl xVec3Init__FP5xVec3fff
.L_800A07A4:
/* 800A07A4 0009D884  38 61 00 48 */	addi r3, r1, 0x48
/* 800A07A8 0009D888  38 8F 00 08 */	addi r4, r15, 0x8
/* 800A07AC 0009D88C  4B FA DD 31 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 800A07B0 0009D890  4B F9 04 B9 */	bl xrand__Fv
/* 800A07B4 0009D894  3A 61 00 08 */	addi r19, r1, 0x8
/* 800A07B8 0009D898  54 70 06 3E */	clrlwi r16, r3, 24
/* 800A07BC 0009D89C  7E 71 9B 78 */	mr r17, r19
/* 800A07C0 0009D8A0  3A 40 00 00 */	li r18, 0x0
.L_800A07C4:
/* 800A07C4 0009D8A4  38 61 00 30 */	addi r3, r1, 0x30
/* 800A07C8 0009D8A8  38 81 00 48 */	addi r4, r1, 0x48
/* 800A07CC 0009D8AC  4B FA DD 11 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 800A07D0 0009D8B0  80 71 00 00 */	lwz r3, 0x0(r17)
/* 800A07D4 0009D8B4  3A 52 00 01 */	addi r18, r18, 0x1
/* 800A07D8 0009D8B8  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 800A07DC 0009D8BC  2C 12 00 02 */	cmpwi r18, 0x2
/* 800A07E0 0009D8C0  C0 41 00 38 */	lfs f2, 0x38(r1)
/* 800A07E4 0009D8C4  3A 31 00 04 */	addi r17, r17, 0x4
/* 800A07E8 0009D8C8  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 800A07EC 0009D8CC  D0 03 00 00 */	stfs f0, 0x0(r3)
/* 800A07F0 0009D8D0  D0 23 00 04 */	stfs f1, 0x4(r3)
/* 800A07F4 0009D8D4  D0 43 00 08 */	stfs f2, 0x8(r3)
/* 800A07F8 0009D8D8  88 8F 02 29 */	lbz r4, 0x229(r15)
/* 800A07FC 0009D8DC  88 AF 02 2A */	lbz r5, 0x22a(r15)
/* 800A0800 0009D8E0  88 0F 02 28 */	lbz r0, 0x228(r15)
/* 800A0804 0009D8E4  98 03 00 18 */	stb r0, 0x18(r3)
/* 800A0808 0009D8E8  98 83 00 19 */	stb r4, 0x19(r3)
/* 800A080C 0009D8EC  98 A3 00 1A */	stb r5, 0x1a(r3)
/* 800A0810 0009D8F0  9A 03 00 1B */	stb r16, 0x1b(r3)
/* 800A0814 0009D8F4  C0 22 92 30 */	lfs f1, "@672"@sda21(r2)
/* 800A0818 0009D8F8  C0 0D 90 04 */	lfs f0, sLFuncUVOffset@sda21(r13)
/* 800A081C 0009D8FC  EC 01 00 2A */	fadds f0, f1, f0
/* 800A0820 0009D900  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 800A0824 0009D904  C0 02 92 30 */	lfs f0, "@672"@sda21(r2)
/* 800A0828 0009D908  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 800A082C 0009D90C  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 800A0830 0009D910  C0 41 00 38 */	lfs f2, 0x38(r1)
/* 800A0834 0009D914  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 800A0838 0009D918  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 800A083C 0009D91C  D0 23 00 28 */	stfs f1, 0x28(r3)
/* 800A0840 0009D920  D0 43 00 2C */	stfs f2, 0x2c(r3)
/* 800A0844 0009D924  88 8F 02 29 */	lbz r4, 0x229(r15)
/* 800A0848 0009D928  88 AF 02 2A */	lbz r5, 0x22a(r15)
/* 800A084C 0009D92C  88 0F 02 28 */	lbz r0, 0x228(r15)
/* 800A0850 0009D930  98 03 00 3C */	stb r0, 0x3c(r3)
/* 800A0854 0009D934  98 83 00 3D */	stb r4, 0x3d(r3)
/* 800A0858 0009D938  98 A3 00 3E */	stb r5, 0x3e(r3)
/* 800A085C 0009D93C  9A 03 00 3F */	stb r16, 0x3f(r3)
/* 800A0860 0009D940  C0 22 92 30 */	lfs f1, "@672"@sda21(r2)
/* 800A0864 0009D944  C0 0D 90 04 */	lfs f0, sLFuncUVOffset@sda21(r13)
/* 800A0868 0009D948  EC 01 00 2A */	fadds f0, f1, f0
/* 800A086C 0009D94C  D0 03 00 40 */	stfs f0, 0x40(r3)
/* 800A0870 0009D950  C0 02 92 80 */	lfs f0, "@948"@sda21(r2)
/* 800A0874 0009D954  D0 03 00 44 */	stfs f0, 0x44(r3)
/* 800A0878 0009D958  41 80 FF 4C */	blt .L_800A07C4
/* 800A087C 0009D95C  3A 20 00 02 */	li r17, 0x2
/* 800A0880 0009D960  3A DE 05 E8 */	addi r22, r30, 0x5e8
/* 800A0884 0009D964  1E F1 00 24 */	mulli r23, r17, 0x24
/* 800A0888 0009D968  3A 00 00 01 */	li r16, 0x1
/* 800A088C 0009D96C  3F E0 43 30 */	lis r31, 0x4330
/* 800A0890 0009D970  48 00 03 54 */	b .L_800A0BE4
.L_800A0894:
/* 800A0894 0009D974  EF DE E8 2A */	fadds f30, f30, f29
/* 800A0898 0009D978  C0 02 92 80 */	lfs f0, "@948"@sda21(r2)
/* 800A089C 0009D97C  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 800A08A0 0009D980  40 81 00 08 */	ble .L_800A08A8
/* 800A08A4 0009D984  FF C0 00 90 */	fmr f30, f0
.L_800A08A8:
/* 800A08A8 0009D988  C0 02 92 80 */	lfs f0, "@948"@sda21(r2)
/* 800A08AC 0009D98C  38 61 00 3C */	addi r3, r1, 0x3c
/* 800A08B0 0009D990  38 8F 00 08 */	addi r4, r15, 0x8
/* 800A08B4 0009D994  EC 20 F0 28 */	fsubs f1, f0, f30
/* 800A08B8 0009D998  4B F6 A7 D9 */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 800A08BC 0009D99C  FC 20 F0 90 */	fmr f1, f30
/* 800A08C0 0009D9A0  38 61 00 3C */	addi r3, r1, 0x3c
/* 800A08C4 0009D9A4  38 8F 00 14 */	addi r4, r15, 0x14
/* 800A08C8 0009D9A8  4B F7 47 91 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 800A08CC 0009D9AC  7D FD 7B 78 */	mr r29, r15
/* 800A08D0 0009D9B0  3B 81 00 28 */	addi r28, r1, 0x28
/* 800A08D4 0009D9B4  7D DB 73 78 */	mr r27, r14
/* 800A08D8 0009D9B8  7E BA AB 78 */	mr r26, r21
/* 800A08DC 0009D9BC  7E 99 A3 78 */	mr r25, r20
/* 800A08E0 0009D9C0  3B 01 00 6C */	addi r24, r1, 0x6c
/* 800A08E4 0009D9C4  3A 40 00 00 */	li r18, 0x0
.L_800A08E8:
/* 800A08E8 0009D9C8  C0 5D 00 48 */	lfs f2, 0x48(r29)
/* 800A08EC 0009D9CC  C0 3D 00 38 */	lfs f1, 0x38(r29)
/* 800A08F0 0009D9D0  C0 16 00 24 */	lfs f0, 0x24(r22)
/* 800A08F4 0009D9D4  EC 7E 08 BA */	fmadds f3, f30, f2, f1
/* 800A08F8 0009D9D8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 800A08FC 0009D9DC  4C 41 13 82 */	cror eq, gt, eq
/* 800A0900 0009D9E0  40 82 00 60 */	bne .L_800A0960
/* 800A0904 0009D9E4  C0 02 92 40 */	lfs f0, "@763"@sda21(r2)
/* 800A0908 0009D9E8  3C 00 43 30 */	lis r0, 0x4330
/* 800A090C 0009D9EC  90 01 00 90 */	stw r0, 0x90(r1)
/* 800A0910 0009D9F0  EC 23 00 24 */	fdivs f1, f3, f0
/* 800A0914 0009D9F4  C8 42 92 70 */	lfd f2, "@776"@sda21(r2)
/* 800A0918 0009D9F8  C0 1C 00 00 */	lfs f0, 0x0(r28)
/* 800A091C 0009D9FC  FC 20 08 1E */	fctiwz f1, f1
/* 800A0920 0009DA00  D8 21 00 88 */	stfd f1, 0x88(r1)
/* 800A0924 0009DA04  80 01 00 8C */	lwz r0, 0x8c(r1)
/* 800A0928 0009DA08  1C 00 00 0A */	mulli r0, r0, 0xa
/* 800A092C 0009DA0C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 800A0930 0009DA10  90 01 00 94 */	stw r0, 0x94(r1)
/* 800A0934 0009DA14  C8 21 00 90 */	lfd f1, 0x90(r1)
/* 800A0938 0009DA18  EC 21 10 28 */	fsubs f1, f1, f2
/* 800A093C 0009DA1C  EC 63 08 28 */	fsubs f3, f3, f1
/* 800A0940 0009DA20  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 800A0944 0009DA24  40 80 00 1C */	bge .L_800A0960
/* 800A0948 0009DA28  38 9E 00 C0 */	addi r4, r30, 0xc0
/* 800A094C 0009DA2C  38 7E 02 00 */	addi r3, r30, 0x200
/* 800A0950 0009DA30  38 1E 03 40 */	addi r0, r30, 0x340
/* 800A0954 0009DA34  90 9B 00 00 */	stw r4, 0x0(r27)
/* 800A0958 0009DA38  90 7A 00 00 */	stw r3, 0x0(r26)
/* 800A095C 0009DA3C  90 19 00 00 */	stw r0, 0x0(r25)
.L_800A0960:
/* 800A0960 0009DA40  D0 7C 00 00 */	stfs f3, 0x0(r28)
/* 800A0964 0009DA44  7F 64 DB 78 */	mr r4, r27
/* 800A0968 0009DA48  80 7B 00 00 */	lwz r3, 0x0(r27)
/* 800A096C 0009DA4C  C0 3C 00 00 */	lfs f1, 0x0(r28)
/* 800A0970 0009DA50  4B F9 0D 11 */	bl xFuncPiece_Eval__FP10xFuncPiecefPP10xFuncPiece
/* 800A0974 0009DA54  D0 38 00 00 */	stfs f1, 0x0(r24)
/* 800A0978 0009DA58  7F 44 D3 78 */	mr r4, r26
/* 800A097C 0009DA5C  80 7A 00 00 */	lwz r3, 0x0(r26)
/* 800A0980 0009DA60  C0 3C 00 00 */	lfs f1, 0x0(r28)
/* 800A0984 0009DA64  4B F9 0C FD */	bl xFuncPiece_Eval__FP10xFuncPiecefPP10xFuncPiece
/* 800A0988 0009DA68  D0 38 00 04 */	stfs f1, 0x4(r24)
/* 800A098C 0009DA6C  7F 24 CB 78 */	mr r4, r25
/* 800A0990 0009DA70  80 79 00 00 */	lwz r3, 0x0(r25)
/* 800A0994 0009DA74  C0 3C 00 00 */	lfs f1, 0x0(r28)
/* 800A0998 0009DA78  4B F9 0C E9 */	bl xFuncPiece_Eval__FP10xFuncPiecefPP10xFuncPiece
/* 800A099C 0009DA7C  3A 52 00 01 */	addi r18, r18, 0x1
/* 800A09A0 0009DA80  D0 38 00 08 */	stfs f1, 0x8(r24)
/* 800A09A4 0009DA84  2C 12 00 02 */	cmpwi r18, 0x2
/* 800A09A8 0009DA88  3B BD 00 04 */	addi r29, r29, 0x4
/* 800A09AC 0009DA8C  3B 9C 00 04 */	addi r28, r28, 0x4
/* 800A09B0 0009DA90  3B 7B 00 04 */	addi r27, r27, 0x4
/* 800A09B4 0009DA94  3B 5A 00 04 */	addi r26, r26, 0x4
/* 800A09B8 0009DA98  3B 39 00 04 */	addi r25, r25, 0x4
/* 800A09BC 0009DA9C  3B 18 00 0C */	addi r24, r24, 0xc
/* 800A09C0 0009DAA0  41 80 FF 28 */	blt .L_800A08E8
/* 800A09C4 0009DAA4  EF FE 07 B2 */	fmuls f31, f30, f30
/* 800A09C8 0009DAA8  C0 22 92 34 */	lfs f1, "@760"@sda21(r2)
/* 800A09CC 0009DAAC  C0 62 92 84 */	lfs f3, "@949"@sda21(r2)
/* 800A09D0 0009DAB0  38 61 00 3C */	addi r3, r1, 0x3c
/* 800A09D4 0009DAB4  C0 0F 00 30 */	lfs f0, 0x30(r15)
/* 800A09D8 0009DAB8  38 81 00 6C */	addi r4, r1, 0x6c
/* 800A09DC 0009DABC  EC 9F 07 B2 */	fmuls f4, f31, f30
/* 800A09E0 0009DAC0  EC 41 27 FC */	fnmsubs f2, f1, f31, f4
/* 800A09E4 0009DAC4  FC 20 20 50 */	fneg f1, f4
/* 800A09E8 0009DAC8  EC 5E 10 2A */	fadds f2, f30, f2
/* 800A09EC 0009DACC  EC 21 F8 2A */	fadds f1, f1, f31
/* 800A09F0 0009DAD0  EF 83 00 B2 */	fmuls f28, f3, f2
/* 800A09F4 0009DAD4  EF 63 00 72 */	fmuls f27, f3, f1
/* 800A09F8 0009DAD8  EC 3C 00 32 */	fmuls f1, f28, f0
/* 800A09FC 0009DADC  4B F7 46 5D */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 800A0A00 0009DAE0  C0 0F 00 30 */	lfs f0, 0x30(r15)
/* 800A0A04 0009DAE4  38 81 00 78 */	addi r4, r1, 0x78
/* 800A0A08 0009DAE8  38 61 00 3C */	addi r3, r1, 0x3c
/* 800A0A0C 0009DAEC  EC 3B 00 32 */	fmuls f1, f27, f0
/* 800A0A10 0009DAF0  4B F7 46 49 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 800A0A14 0009DAF4  80 0F 00 04 */	lwz r0, 0x4(r15)
/* 800A0A18 0009DAF8  54 00 06 B5 */	rlwinm. r0, r0, 0, 26, 26
/* 800A0A1C 0009DAFC  41 82 00 30 */	beq .L_800A0A4C
/* 800A0A20 0009DB00  EC 3E F8 28 */	fsubs f1, f30, f31
/* 800A0A24 0009DB04  C0 42 92 84 */	lfs f2, "@949"@sda21(r2)
/* 800A0A28 0009DB08  C0 02 92 30 */	lfs f0, "@672"@sda21(r2)
/* 800A0A2C 0009DB0C  EC 22 00 72 */	fmuls f1, f2, f1
/* 800A0A30 0009DB10  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A0A34 0009DB14  40 81 00 18 */	ble .L_800A0A4C
/* 800A0A38 0009DB18  C0 0F 00 50 */	lfs f0, 0x50(r15)
/* 800A0A3C 0009DB1C  38 61 00 3C */	addi r3, r1, 0x3c
/* 800A0A40 0009DB20  38 8F 00 54 */	addi r4, r15, 0x54
/* 800A0A44 0009DB24  EC 21 00 32 */	fmuls f1, f1, f0
/* 800A0A48 0009DB28  4B F7 46 11 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
.L_800A0A4C:
/* 800A0A4C 0009DB2C  4B F9 02 1D */	bl xrand__Fv
/* 800A0A50 0009DB30  EF FC D8 2A */	fadds f31, f28, f27
/* 800A0A54 0009DB34  7E 7A 9B 78 */	mr r26, r19
/* 800A0A58 0009DB38  54 78 06 3E */	clrlwi r24, r3, 24
/* 800A0A5C 0009DB3C  3B 21 00 54 */	addi r25, r1, 0x54
/* 800A0A60 0009DB40  6E 12 80 00 */	xoris r18, r16, 0x8000
/* 800A0A64 0009DB44  3B 60 00 00 */	li r27, 0x0
.L_800A0A68:
/* 800A0A68 0009DB48  38 61 00 30 */	addi r3, r1, 0x30
/* 800A0A6C 0009DB4C  38 81 00 3C */	addi r4, r1, 0x3c
/* 800A0A70 0009DB50  4B FA DA 6D */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 800A0A74 0009DB54  C0 0F 00 30 */	lfs f0, 0x30(r15)
/* 800A0A78 0009DB58  7F 24 CB 78 */	mr r4, r25
/* 800A0A7C 0009DB5C  C0 2F 00 34 */	lfs f1, 0x34(r15)
/* 800A0A80 0009DB60  38 61 00 30 */	addi r3, r1, 0x30
/* 800A0A84 0009DB64  EC 00 07 F2 */	fmuls f0, f0, f31
/* 800A0A88 0009DB68  EC 21 00 32 */	fmuls f1, f1, f0
/* 800A0A8C 0009DB6C  4B F7 45 CD */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 800A0A90 0009DB70  81 7A 00 00 */	lwz r11, 0x0(r26)
/* 800A0A94 0009DB74  7F 24 CB 78 */	mr r4, r25
/* 800A0A98 0009DB78  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 800A0A9C 0009DB7C  38 61 00 30 */	addi r3, r1, 0x30
/* 800A0AA0 0009DB80  C0 41 00 38 */	lfs f2, 0x38(r1)
/* 800A0AA4 0009DB84  38 0B 00 04 */	addi r0, r11, 0x4
/* 800A0AA8 0009DB88  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 800A0AAC 0009DB8C  39 4B 00 08 */	addi r10, r11, 0x8
/* 800A0AB0 0009DB90  39 2B 00 18 */	addi r9, r11, 0x18
/* 800A0AB4 0009DB94  39 0B 00 19 */	addi r8, r11, 0x19
/* 800A0AB8 0009DB98  7C 17 5D 2E */	stfsx f0, r23, r11
/* 800A0ABC 0009DB9C  38 EB 00 1A */	addi r7, r11, 0x1a
/* 800A0AC0 0009DBA0  38 CB 00 1B */	addi r6, r11, 0x1b
/* 800A0AC4 0009DBA4  38 AB 00 1C */	addi r5, r11, 0x1c
/* 800A0AC8 0009DBA8  7C 37 05 2E */	stfsx f1, r23, r0
/* 800A0ACC 0009DBAC  38 0B 00 20 */	addi r0, r11, 0x20
/* 800A0AD0 0009DBB0  7C 57 55 2E */	stfsx f2, r23, r10
/* 800A0AD4 0009DBB4  89 6F 02 29 */	lbz r11, 0x229(r15)
/* 800A0AD8 0009DBB8  89 8F 02 2A */	lbz r12, 0x22a(r15)
/* 800A0ADC 0009DBBC  89 4F 02 28 */	lbz r10, 0x228(r15)
/* 800A0AE0 0009DBC0  92 41 00 94 */	stw r18, 0x94(r1)
/* 800A0AE4 0009DBC4  7D 57 49 AE */	stbx r10, r23, r9
/* 800A0AE8 0009DBC8  7D 77 41 AE */	stbx r11, r23, r8
/* 800A0AEC 0009DBCC  7D 97 39 AE */	stbx r12, r23, r7
/* 800A0AF0 0009DBD0  7F 17 31 AE */	stbx r24, r23, r6
/* 800A0AF4 0009DBD4  93 E1 00 90 */	stw r31, 0x90(r1)
/* 800A0AF8 0009DBD8  C8 42 92 70 */	lfd f2, "@776"@sda21(r2)
/* 800A0AFC 0009DBDC  C8 21 00 90 */	lfd f1, 0x90(r1)
/* 800A0B00 0009DBE0  C0 0D 90 04 */	lfs f0, sLFuncUVOffset@sda21(r13)
/* 800A0B04 0009DBE4  EC 21 10 28 */	fsubs f1, f1, f2
/* 800A0B08 0009DBE8  EC 01 00 2A */	fadds f0, f1, f0
/* 800A0B0C 0009DBEC  7C 17 2D 2E */	stfsx f0, r23, r5
/* 800A0B10 0009DBF0  C0 02 92 30 */	lfs f0, "@672"@sda21(r2)
/* 800A0B14 0009DBF4  7C 17 05 2E */	stfsx f0, r23, r0
/* 800A0B18 0009DBF8  C0 42 92 AC */	lfs f2, "@1332"@sda21(r2)
/* 800A0B1C 0009DBFC  C0 2F 00 30 */	lfs f1, 0x30(r15)
/* 800A0B20 0009DC00  C0 0F 00 34 */	lfs f0, 0x34(r15)
/* 800A0B24 0009DC04  EC 22 00 72 */	fmuls f1, f2, f1
/* 800A0B28 0009DC08  EC 01 00 32 */	fmuls f0, f1, f0
/* 800A0B2C 0009DC0C  EC 3F 00 32 */	fmuls f1, f31, f0
/* 800A0B30 0009DC10  4B F7 45 29 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 800A0B34 0009DC14  81 3A 00 00 */	lwz r9, 0x0(r26)
/* 800A0B38 0009DC18  3B 7B 00 01 */	addi r27, r27, 0x1
/* 800A0B3C 0009DC1C  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 800A0B40 0009DC20  2C 1B 00 02 */	cmpwi r27, 0x2
/* 800A0B44 0009DC24  C0 41 00 38 */	lfs f2, 0x38(r1)
/* 800A0B48 0009DC28  38 69 00 24 */	addi r3, r9, 0x24
/* 800A0B4C 0009DC2C  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 800A0B50 0009DC30  38 09 00 28 */	addi r0, r9, 0x28
/* 800A0B54 0009DC34  39 09 00 2C */	addi r8, r9, 0x2c
/* 800A0B58 0009DC38  38 E9 00 3C */	addi r7, r9, 0x3c
/* 800A0B5C 0009DC3C  7C 17 1D 2E */	stfsx f0, r23, r3
/* 800A0B60 0009DC40  38 C9 00 3D */	addi r6, r9, 0x3d
/* 800A0B64 0009DC44  38 A9 00 3E */	addi r5, r9, 0x3e
/* 800A0B68 0009DC48  38 89 00 3F */	addi r4, r9, 0x3f
/* 800A0B6C 0009DC4C  7C 37 05 2E */	stfsx f1, r23, r0
/* 800A0B70 0009DC50  38 69 00 40 */	addi r3, r9, 0x40
/* 800A0B74 0009DC54  38 09 00 44 */	addi r0, r9, 0x44
/* 800A0B78 0009DC58  3B 39 00 0C */	addi r25, r25, 0xc
/* 800A0B7C 0009DC5C  7C 57 45 2E */	stfsx f2, r23, r8
/* 800A0B80 0009DC60  3B 5A 00 04 */	addi r26, r26, 0x4
/* 800A0B84 0009DC64  89 2F 02 29 */	lbz r9, 0x229(r15)
/* 800A0B88 0009DC68  89 4F 02 2A */	lbz r10, 0x22a(r15)
/* 800A0B8C 0009DC6C  89 0F 02 28 */	lbz r8, 0x228(r15)
/* 800A0B90 0009DC70  92 41 00 8C */	stw r18, 0x8c(r1)
/* 800A0B94 0009DC74  7D 17 39 AE */	stbx r8, r23, r7
/* 800A0B98 0009DC78  7D 37 31 AE */	stbx r9, r23, r6
/* 800A0B9C 0009DC7C  7D 57 29 AE */	stbx r10, r23, r5
/* 800A0BA0 0009DC80  7F 17 21 AE */	stbx r24, r23, r4
/* 800A0BA4 0009DC84  93 E1 00 88 */	stw r31, 0x88(r1)
/* 800A0BA8 0009DC88  C8 42 92 70 */	lfd f2, "@776"@sda21(r2)
/* 800A0BAC 0009DC8C  C8 21 00 88 */	lfd f1, 0x88(r1)
/* 800A0BB0 0009DC90  C0 0D 90 04 */	lfs f0, sLFuncUVOffset@sda21(r13)
/* 800A0BB4 0009DC94  EC 21 10 28 */	fsubs f1, f1, f2
/* 800A0BB8 0009DC98  EC 01 00 2A */	fadds f0, f1, f0
/* 800A0BBC 0009DC9C  7C 17 1D 2E */	stfsx f0, r23, r3
/* 800A0BC0 0009DCA0  C0 02 92 80 */	lfs f0, "@948"@sda21(r2)
/* 800A0BC4 0009DCA4  7C 17 05 2E */	stfsx f0, r23, r0
/* 800A0BC8 0009DCA8  41 80 FE A0 */	blt .L_800A0A68
/* 800A0BCC 0009DCAC  22 10 00 01 */	subfic r16, r16, 0x1
/* 800A0BD0 0009DCB0  38 61 00 48 */	addi r3, r1, 0x48
/* 800A0BD4 0009DCB4  38 81 00 3C */	addi r4, r1, 0x3c
/* 800A0BD8 0009DCB8  3A F7 00 48 */	addi r23, r23, 0x48
/* 800A0BDC 0009DCBC  3A 31 00 02 */	addi r17, r17, 0x2
/* 800A0BE0 0009DCC0  4B FA D8 FD */	bl xVec3Copy__FP5xVec3PC5xVec3
.L_800A0BE4:
/* 800A0BE4 0009DCC4  C0 02 92 80 */	lfs f0, "@948"@sda21(r2)
/* 800A0BE8 0009DCC8  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 800A0BEC 0009DCCC  41 80 FC A8 */	blt .L_800A0894
/* 800A0BF0 0009DCD0  3C 80 80 39 */	lis r4, g_I3@ha
/* 800A0BF4 0009DCD4  80 61 00 08 */	lwz r3, 0x8(r1)
/* 800A0BF8 0009DCD8  38 A4 C2 E0 */	addi r5, r4, g_I3@l
/* 800A0BFC 0009DCDC  38 C0 00 19 */	li r6, 0x19
/* 800A0C00 0009DCE0  7E 24 8B 78 */	mr r4, r17
/* 800A0C04 0009DCE4  48 1A B0 71 */	bl RwIm3DTransform
/* 800A0C08 0009DCE8  38 60 00 04 */	li r3, 0x4
/* 800A0C0C 0009DCEC  48 1A B3 35 */	bl RwIm3DRenderPrimitive
/* 800A0C10 0009DCF0  48 1A B1 45 */	bl RwIm3DEnd
/* 800A0C14 0009DCF4  3C 80 80 39 */	lis r4, g_I3@ha
/* 800A0C18 0009DCF8  80 61 00 0C */	lwz r3, 0xc(r1)
/* 800A0C1C 0009DCFC  38 A4 C2 E0 */	addi r5, r4, g_I3@l
/* 800A0C20 0009DD00  38 C0 00 19 */	li r6, 0x19
/* 800A0C24 0009DD04  7E 24 8B 78 */	mr r4, r17
/* 800A0C28 0009DD08  48 1A B0 4D */	bl RwIm3DTransform
/* 800A0C2C 0009DD0C  38 60 00 04 */	li r3, 0x4
/* 800A0C30 0009DD10  48 1A B3 11 */	bl RwIm3DRenderPrimitive
/* 800A0C34 0009DD14  48 1A B1 21 */	bl RwIm3DEnd
/* 800A0C38 0009DD18  E3 E1 01 28 */	psq_l f31, 0x128(r1), 0, qr0
/* 800A0C3C 0009DD1C  CB E1 01 20 */	lfd f31, 0x120(r1)
/* 800A0C40 0009DD20  E3 C1 01 18 */	psq_l f30, 0x118(r1), 0, qr0
/* 800A0C44 0009DD24  CB C1 01 10 */	lfd f30, 0x110(r1)
/* 800A0C48 0009DD28  E3 A1 01 08 */	psq_l f29, 0x108(r1), 0, qr0
/* 800A0C4C 0009DD2C  CB A1 01 00 */	lfd f29, 0x100(r1)
/* 800A0C50 0009DD30  E3 81 00 F8 */	psq_l f28, 0xf8(r1), 0, qr0
/* 800A0C54 0009DD34  CB 81 00 F0 */	lfd f28, 0xf0(r1)
/* 800A0C58 0009DD38  E3 61 00 E8 */	psq_l f27, 0xe8(r1), 0, qr0
/* 800A0C5C 0009DD3C  CB 61 00 E0 */	lfd f27, 0xe0(r1)
/* 800A0C60 0009DD40  B9 C1 00 98 */	lmw r14, 0x98(r1)
/* 800A0C64 0009DD44  80 01 01 34 */	lwz r0, 0x134(r1)
/* 800A0C68 0009DD48  7C 08 03 A6 */	mtlr r0
/* 800A0C6C 0009DD4C  38 21 01 30 */	addi r1, r1, 0x130
/* 800A0C70 0009DD50  4E 80 00 20 */	blr
.endfn zLightningFunc_Render__FP10zLightning

# RenderLightning(zLightning*)
.fn RenderLightning__FP10zLightning, local
/* 800A0C74 0009DD54  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 800A0C78 0009DD58  7C 08 02 A6 */	mflr r0
/* 800A0C7C 0009DD5C  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 800A0C80 0009DD60  DB E1 00 B0 */	stfd f31, 0xb0(r1)
/* 800A0C84 0009DD64  F3 E1 00 B8 */	psq_st f31, 0xb8(r1), 0, qr0
/* 800A0C88 0009DD68  DB C1 00 A0 */	stfd f30, 0xa0(r1)
/* 800A0C8C 0009DD6C  F3 C1 00 A8 */	psq_st f30, 0xa8(r1), 0, qr0
/* 800A0C90 0009DD70  BE 61 00 6C */	stmw r19, 0x6c(r1)
/* 800A0C94 0009DD74  7C 7E 1B 78 */	mr r30, r3
/* 800A0C98 0009DD78  3C 80 80 3C */	lis r4, globals@ha
/* 800A0C9C 0009DD7C  80 03 00 00 */	lwz r0, 0x0(r3)
/* 800A0CA0 0009DD80  3B 44 05 58 */	addi r26, r4, globals@l
/* 800A0CA4 0009DD84  28 00 00 03 */	cmplwi r0, 0x3
/* 800A0CA8 0009DD88  41 82 0B 28 */	beq .L_800A17D0
/* 800A0CAC 0009DD8C  80 9E 00 04 */	lwz r4, 0x4(r30)
/* 800A0CB0 0009DD90  54 80 04 E7 */	rlwinm. r0, r4, 0, 19, 19
/* 800A0CB4 0009DD94  41 82 00 24 */	beq .L_800A0CD8
/* 800A0CB8 0009DD98  88 7E 02 2B */	lbz r3, 0x22b(r30)
/* 800A0CBC 0009DD9C  3C 00 43 30 */	lis r0, 0x4330
/* 800A0CC0 0009DDA0  90 01 00 50 */	stw r0, 0x50(r1)
/* 800A0CC4 0009DDA4  C8 22 92 B8 */	lfd f1, "@1849"@sda21(r2)
/* 800A0CC8 0009DDA8  90 61 00 54 */	stw r3, 0x54(r1)
/* 800A0CCC 0009DDAC  C8 01 00 50 */	lfd f0, 0x50(r1)
/* 800A0CD0 0009DDB0  EC 40 08 28 */	fsubs f2, f0, f1
/* 800A0CD4 0009DDB4  48 00 00 30 */	b .L_800A0D04
.L_800A0CD8:
/* 800A0CD8 0009DDB8  C0 3E 02 2C */	lfs f1, 0x22c(r30)
/* 800A0CDC 0009DDBC  3C 00 43 30 */	lis r0, 0x4330
/* 800A0CE0 0009DDC0  C0 1E 02 30 */	lfs f0, 0x230(r30)
/* 800A0CE4 0009DDC4  88 7E 02 2B */	lbz r3, 0x22b(r30)
/* 800A0CE8 0009DDC8  EC 41 00 24 */	fdivs f2, f1, f0
/* 800A0CEC 0009DDCC  90 01 00 50 */	stw r0, 0x50(r1)
/* 800A0CF0 0009DDD0  C8 22 92 B8 */	lfd f1, "@1849"@sda21(r2)
/* 800A0CF4 0009DDD4  90 61 00 54 */	stw r3, 0x54(r1)
/* 800A0CF8 0009DDD8  C8 01 00 50 */	lfd f0, 0x50(r1)
/* 800A0CFC 0009DDDC  EC 00 08 28 */	fsubs f0, f0, f1
/* 800A0D00 0009DDE0  EC 42 00 32 */	fmuls f2, f2, f0
.L_800A0D04:
/* 800A0D04 0009DDE4  C0 02 92 38 */	lfs f0, "@761"@sda21(r2)
/* 800A0D08 0009DDE8  54 80 05 AD */	rlwinm. r0, r4, 0, 22, 22
/* 800A0D0C 0009DDEC  3A A0 00 02 */	li r21, 0x2
/* 800A0D10 0009DDF0  EC 00 10 2A */	fadds f0, f0, f2
/* 800A0D14 0009DDF4  FC 00 00 1E */	fctiwz f0, f0
/* 800A0D18 0009DDF8  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 800A0D1C 0009DDFC  82 61 00 54 */	lwz r19, 0x54(r1)
/* 800A0D20 0009DE00  41 82 00 20 */	beq .L_800A0D40
/* 800A0D24 0009DE04  C0 22 92 30 */	lfs f1, "@672"@sda21(r2)
/* 800A0D28 0009DE08  38 61 00 44 */	addi r3, r1, 0x44
/* 800A0D2C 0009DE0C  AB FE 01 88 */	lha r31, 0x188(r30)
/* 800A0D30 0009DE10  FC 60 08 90 */	fmr f3, f1
/* 800A0D34 0009DE14  C0 42 92 80 */	lfs f2, "@948"@sda21(r2)
/* 800A0D38 0009DE18  4B F6 E2 C5 */	bl xVec3Init__FP5xVec3fff
/* 800A0D3C 0009DE1C  48 00 00 6C */	b .L_800A0DA8
.L_800A0D40:
/* 800A0D40 0009DE20  A8 BE 01 88 */	lha r5, 0x188(r30)
/* 800A0D44 0009DE24  38 61 00 44 */	addi r3, r1, 0x44
/* 800A0D48 0009DE28  38 9A 00 34 */	addi r4, r26, 0x34
/* 800A0D4C 0009DE2C  3B E5 FF FF */	addi r31, r5, -0x1
/* 800A0D50 0009DE30  4B FA D7 8D */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 800A0D54 0009DE34  38 61 00 20 */	addi r3, r1, 0x20
/* 800A0D58 0009DE38  38 9E 00 D4 */	addi r4, r30, 0xd4
/* 800A0D5C 0009DE3C  38 BE 00 C8 */	addi r5, r30, 0xc8
/* 800A0D60 0009DE40  4B F6 D9 31 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 800A0D64 0009DE44  38 61 00 20 */	addi r3, r1, 0x20
/* 800A0D68 0009DE48  38 9A 00 34 */	addi r4, r26, 0x34
/* 800A0D6C 0009DE4C  4B FA D7 85 */	bl xVec3Dot__FPC5xVec3PC5xVec3
/* 800A0D70 0009DE50  FC 20 08 50 */	fneg f1, f1
/* 800A0D74 0009DE54  38 61 00 20 */	addi r3, r1, 0x20
/* 800A0D78 0009DE58  38 9A 00 34 */	addi r4, r26, 0x34
/* 800A0D7C 0009DE5C  4B F7 42 DD */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 800A0D80 0009DE60  38 61 00 38 */	addi r3, r1, 0x38
/* 800A0D84 0009DE64  38 81 00 20 */	addi r4, r1, 0x20
/* 800A0D88 0009DE68  4B FA D5 69 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 800A0D8C 0009DE6C  C0 02 92 A8 */	lfs f0, "@1331"@sda21(r2)
/* 800A0D90 0009DE70  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A0D94 0009DE74  40 81 00 14 */	ble .L_800A0DA8
/* 800A0D98 0009DE78  38 61 00 44 */	addi r3, r1, 0x44
/* 800A0D9C 0009DE7C  38 81 00 38 */	addi r4, r1, 0x38
/* 800A0DA0 0009DE80  38 BA 00 34 */	addi r5, r26, 0x34
/* 800A0DA4 0009DE84  4B F7 42 E9 */	bl xVec3Cross__FP5xVec3PC5xVec3PC5xVec3
.L_800A0DA8:
/* 800A0DA8 0009DE88  38 61 00 14 */	addi r3, r1, 0x14
/* 800A0DAC 0009DE8C  38 9E 00 C8 */	addi r4, r30, 0xc8
/* 800A0DB0 0009DE90  4B FA D7 2D */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 800A0DB4 0009DE94  C0 3E 01 9C */	lfs f1, 0x19c(r30)
/* 800A0DB8 0009DE98  38 61 00 14 */	addi r3, r1, 0x14
/* 800A0DBC 0009DE9C  38 81 00 44 */	addi r4, r1, 0x44
/* 800A0DC0 0009DEA0  4B F7 42 99 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 800A0DC4 0009DEA4  38 61 00 08 */	addi r3, r1, 0x8
/* 800A0DC8 0009DEA8  38 9E 00 C8 */	addi r4, r30, 0xc8
/* 800A0DCC 0009DEAC  4B FA D7 11 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 800A0DD0 0009DEB0  C0 1E 01 9C */	lfs f0, 0x19c(r30)
/* 800A0DD4 0009DEB4  38 61 00 08 */	addi r3, r1, 0x8
/* 800A0DD8 0009DEB8  38 81 00 44 */	addi r4, r1, 0x44
/* 800A0DDC 0009DEBC  FC 20 00 50 */	fneg f1, f0
/* 800A0DE0 0009DEC0  4B F7 42 79 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 800A0DE4 0009DEC4  3C 60 80 2F */	lis r3, sStripVert$1341@ha
/* 800A0DE8 0009DEC8  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 800A0DEC 0009DECC  3B 63 97 90 */	addi r27, r3, sStripVert$1341@l
/* 800A0DF0 0009DED0  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 800A0DF4 0009DED4  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 800A0DF8 0009DED8  3A DB 00 48 */	addi r22, r27, 0x48
/* 800A0DFC 0009DEDC  D0 5B 00 00 */	stfs f2, 0x0(r27)
/* 800A0E00 0009DEE0  7E D9 B3 78 */	mr r25, r22
/* 800A0E04 0009DEE4  C0 41 00 08 */	lfs f2, 0x8(r1)
/* 800A0E08 0009DEE8  3B 9E 00 0C */	addi r28, r30, 0xc
/* 800A0E0C 0009DEEC  D0 3B 00 04 */	stfs f1, 0x4(r27)
/* 800A0E10 0009DEF0  3B BE 00 04 */	addi r29, r30, 0x4
/* 800A0E14 0009DEF4  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 800A0E18 0009DEF8  3A 80 00 01 */	li r20, 0x1
/* 800A0E1C 0009DEFC  D0 1B 00 08 */	stfs f0, 0x8(r27)
/* 800A0E20 0009DF00  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 800A0E24 0009DF04  C0 62 92 30 */	lfs f3, "@672"@sda21(r2)
/* 800A0E28 0009DF08  D0 7B 00 1C */	stfs f3, 0x1c(r27)
/* 800A0E2C 0009DF0C  D0 7B 00 20 */	stfs f3, 0x20(r27)
/* 800A0E30 0009DF10  88 7E 02 29 */	lbz r3, 0x229(r30)
/* 800A0E34 0009DF14  88 9E 02 2A */	lbz r4, 0x22a(r30)
/* 800A0E38 0009DF18  88 1E 02 28 */	lbz r0, 0x228(r30)
/* 800A0E3C 0009DF1C  98 1B 00 18 */	stb r0, 0x18(r27)
/* 800A0E40 0009DF20  98 7B 00 19 */	stb r3, 0x19(r27)
/* 800A0E44 0009DF24  98 9B 00 1A */	stb r4, 0x1a(r27)
/* 800A0E48 0009DF28  9A 7B 00 1B */	stb r19, 0x1b(r27)
/* 800A0E4C 0009DF2C  D0 5B 00 24 */	stfs f2, 0x24(r27)
/* 800A0E50 0009DF30  D0 3B 00 28 */	stfs f1, 0x28(r27)
/* 800A0E54 0009DF34  D0 1B 00 2C */	stfs f0, 0x2c(r27)
/* 800A0E58 0009DF38  D0 7B 00 40 */	stfs f3, 0x40(r27)
/* 800A0E5C 0009DF3C  C0 02 92 80 */	lfs f0, "@948"@sda21(r2)
/* 800A0E60 0009DF40  D0 1B 00 44 */	stfs f0, 0x44(r27)
/* 800A0E64 0009DF44  98 1B 00 3C */	stb r0, 0x3c(r27)
/* 800A0E68 0009DF48  98 7B 00 3D */	stb r3, 0x3d(r27)
/* 800A0E6C 0009DF4C  98 9B 00 3E */	stb r4, 0x3e(r27)
/* 800A0E70 0009DF50  9A 7B 00 3F */	stb r19, 0x3f(r27)
/* 800A0E74 0009DF54  48 00 02 64 */	b .L_800A10D8
.L_800A0E78:
/* 800A0E78 0009DF58  80 1E 00 04 */	lwz r0, 0x4(r30)
/* 800A0E7C 0009DF5C  54 00 05 AD */	rlwinm. r0, r0, 0, 22, 22
/* 800A0E80 0009DF60  40 82 00 74 */	bne .L_800A0EF4
/* 800A0E84 0009DF64  38 61 00 2C */	addi r3, r1, 0x2c
/* 800A0E88 0009DF68  38 81 00 38 */	addi r4, r1, 0x38
/* 800A0E8C 0009DF6C  4B FA D6 51 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 800A0E90 0009DF70  38 14 00 01 */	addi r0, r20, 0x1
/* 800A0E94 0009DF74  38 61 00 20 */	addi r3, r1, 0x20
/* 800A0E98 0009DF78  1C 80 00 0C */	mulli r4, r0, 0xc
/* 800A0E9C 0009DF7C  38 BC 00 C8 */	addi r5, r28, 0xc8
/* 800A0EA0 0009DF80  38 84 00 C8 */	addi r4, r4, 0xc8
/* 800A0EA4 0009DF84  7C 9E 22 14 */	add r4, r30, r4
/* 800A0EA8 0009DF88  4B F6 D7 E9 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 800A0EAC 0009DF8C  38 61 00 20 */	addi r3, r1, 0x20
/* 800A0EB0 0009DF90  38 9A 00 34 */	addi r4, r26, 0x34
/* 800A0EB4 0009DF94  4B FA D6 3D */	bl xVec3Dot__FPC5xVec3PC5xVec3
/* 800A0EB8 0009DF98  FC 20 08 50 */	fneg f1, f1
/* 800A0EBC 0009DF9C  38 61 00 20 */	addi r3, r1, 0x20
/* 800A0EC0 0009DFA0  38 9A 00 34 */	addi r4, r26, 0x34
/* 800A0EC4 0009DFA4  4B F7 41 95 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 800A0EC8 0009DFA8  38 61 00 38 */	addi r3, r1, 0x38
/* 800A0ECC 0009DFAC  38 81 00 20 */	addi r4, r1, 0x20
/* 800A0ED0 0009DFB0  4B FA D4 21 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 800A0ED4 0009DFB4  C0 02 92 A8 */	lfs f0, "@1331"@sda21(r2)
/* 800A0ED8 0009DFB8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A0EDC 0009DFBC  40 81 00 30 */	ble .L_800A0F0C
/* 800A0EE0 0009DFC0  38 61 00 44 */	addi r3, r1, 0x44
/* 800A0EE4 0009DFC4  38 81 00 38 */	addi r4, r1, 0x38
/* 800A0EE8 0009DFC8  38 BA 00 34 */	addi r5, r26, 0x34
/* 800A0EEC 0009DFCC  4B F7 41 A1 */	bl xVec3Cross__FP5xVec3PC5xVec3PC5xVec3
/* 800A0EF0 0009DFD0  48 00 00 1C */	b .L_800A0F0C
.L_800A0EF4:
/* 800A0EF4 0009DFD4  38 61 00 38 */	addi r3, r1, 0x38
/* 800A0EF8 0009DFD8  38 81 00 44 */	addi r4, r1, 0x44
/* 800A0EFC 0009DFDC  4B F6 A3 69 */	bl __as__5xVec3FRC5xVec3
/* 800A0F00 0009DFE0  7C 64 1B 78 */	mr r4, r3
/* 800A0F04 0009DFE4  38 61 00 2C */	addi r3, r1, 0x2c
/* 800A0F08 0009DFE8  4B F6 A3 5D */	bl __as__5xVec3FRC5xVec3
.L_800A0F0C:
/* 800A0F0C 0009DFEC  38 61 00 14 */	addi r3, r1, 0x14
/* 800A0F10 0009DFF0  38 9C 00 C8 */	addi r4, r28, 0xc8
/* 800A0F14 0009DFF4  4B FA D5 C9 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 800A0F18 0009DFF8  C0 3D 01 9C */	lfs f1, 0x19c(r29)
/* 800A0F1C 0009DFFC  38 61 00 14 */	addi r3, r1, 0x14
/* 800A0F20 0009E000  38 81 00 44 */	addi r4, r1, 0x44
/* 800A0F24 0009E004  4B F7 41 35 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 800A0F28 0009E008  38 61 00 08 */	addi r3, r1, 0x8
/* 800A0F2C 0009E00C  38 9C 00 C8 */	addi r4, r28, 0xc8
/* 800A0F30 0009E010  4B FA D5 AD */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 800A0F34 0009E014  C0 1D 01 9C */	lfs f0, 0x19c(r29)
/* 800A0F38 0009E018  38 61 00 08 */	addi r3, r1, 0x8
/* 800A0F3C 0009E01C  38 81 00 44 */	addi r4, r1, 0x44
/* 800A0F40 0009E020  FC 20 00 50 */	fneg f1, f0
/* 800A0F44 0009E024  4B F7 41 15 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 800A0F48 0009E028  38 61 00 2C */	addi r3, r1, 0x2c
/* 800A0F4C 0009E02C  38 81 00 38 */	addi r4, r1, 0x38
/* 800A0F50 0009E030  4B FA D5 A1 */	bl xVec3Dot__FPC5xVec3PC5xVec3
/* 800A0F54 0009E034  C0 02 92 30 */	lfs f0, "@672"@sda21(r2)
/* 800A0F58 0009E038  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A0F5C 0009E03C  7C 00 00 26 */	mfcr r0
/* 800A0F60 0009E040  54 00 0F FF */	srwi. r0, r0, 31
/* 800A0F64 0009E044  41 82 00 20 */	beq .L_800A0F84
/* 800A0F68 0009E048  C0 01 00 08 */	lfs f0, 0x8(r1)
/* 800A0F6C 0009E04C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 800A0F70 0009E050  D0 19 00 00 */	stfs f0, 0x0(r25)
/* 800A0F74 0009E054  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 800A0F78 0009E058  D0 39 00 04 */	stfs f1, 0x4(r25)
/* 800A0F7C 0009E05C  D0 19 00 08 */	stfs f0, 0x8(r25)
/* 800A0F80 0009E060  48 00 00 1C */	b .L_800A0F9C
.L_800A0F84:
/* 800A0F84 0009E064  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 800A0F88 0009E068  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 800A0F8C 0009E06C  D0 19 00 00 */	stfs f0, 0x0(r25)
/* 800A0F90 0009E070  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 800A0F94 0009E074  D0 39 00 04 */	stfs f1, 0x4(r25)
/* 800A0F98 0009E078  D0 19 00 08 */	stfs f0, 0x8(r25)
.L_800A0F9C:
/* 800A0F9C 0009E07C  56 85 07 FF */	clrlwi. r5, r20, 31
/* 800A0FA0 0009E080  41 82 00 10 */	beq .L_800A0FB0
/* 800A0FA4 0009E084  C0 02 92 80 */	lfs f0, "@948"@sda21(r2)
/* 800A0FA8 0009E088  D0 19 00 1C */	stfs f0, 0x1c(r25)
/* 800A0FAC 0009E08C  48 00 00 0C */	b .L_800A0FB8
.L_800A0FB0:
/* 800A0FB0 0009E090  C0 02 92 30 */	lfs f0, "@672"@sda21(r2)
/* 800A0FB4 0009E094  D0 19 00 1C */	stfs f0, 0x1c(r25)
.L_800A0FB8:
/* 800A0FB8 0009E098  C0 02 92 30 */	lfs f0, "@672"@sda21(r2)
/* 800A0FBC 0009E09C  2C 00 00 00 */	cmpwi r0, 0x0
/* 800A0FC0 0009E0A0  D0 19 00 20 */	stfs f0, 0x20(r25)
/* 800A0FC4 0009E0A4  88 7E 02 29 */	lbz r3, 0x229(r30)
/* 800A0FC8 0009E0A8  88 9E 02 2A */	lbz r4, 0x22a(r30)
/* 800A0FCC 0009E0AC  88 1E 02 28 */	lbz r0, 0x228(r30)
/* 800A0FD0 0009E0B0  98 19 00 18 */	stb r0, 0x18(r25)
/* 800A0FD4 0009E0B4  98 79 00 19 */	stb r3, 0x19(r25)
/* 800A0FD8 0009E0B8  98 99 00 1A */	stb r4, 0x1a(r25)
/* 800A0FDC 0009E0BC  9A 79 00 1B */	stb r19, 0x1b(r25)
/* 800A0FE0 0009E0C0  41 82 00 34 */	beq .L_800A1014
/* 800A0FE4 0009E0C4  38 15 00 01 */	addi r0, r21, 0x1
/* 800A0FE8 0009E0C8  3C 60 80 2F */	lis r3, sStripVert$1341@ha
/* 800A0FEC 0009E0CC  1C 80 00 24 */	mulli r4, r0, 0x24
/* 800A0FF0 0009E0D0  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 800A0FF4 0009E0D4  38 03 97 90 */	addi r0, r3, sStripVert$1341@l
/* 800A0FF8 0009E0D8  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 800A0FFC 0009E0DC  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 800A1000 0009E0E0  7C 60 22 14 */	add r3, r0, r4
/* 800A1004 0009E0E4  D0 43 00 00 */	stfs f2, 0x0(r3)
/* 800A1008 0009E0E8  D0 23 00 04 */	stfs f1, 0x4(r3)
/* 800A100C 0009E0EC  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 800A1010 0009E0F0  48 00 00 30 */	b .L_800A1040
.L_800A1014:
/* 800A1014 0009E0F4  38 15 00 01 */	addi r0, r21, 0x1
/* 800A1018 0009E0F8  3C 60 80 2F */	lis r3, sStripVert$1341@ha
/* 800A101C 0009E0FC  1C 80 00 24 */	mulli r4, r0, 0x24
/* 800A1020 0009E100  C0 41 00 08 */	lfs f2, 0x8(r1)
/* 800A1024 0009E104  38 03 97 90 */	addi r0, r3, sStripVert$1341@l
/* 800A1028 0009E108  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 800A102C 0009E10C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 800A1030 0009E110  7C 60 22 14 */	add r3, r0, r4
/* 800A1034 0009E114  D0 43 00 00 */	stfs f2, 0x0(r3)
/* 800A1038 0009E118  D0 23 00 04 */	stfs f1, 0x4(r3)
/* 800A103C 0009E11C  D0 03 00 08 */	stfs f0, 0x8(r3)
.L_800A1040:
/* 800A1040 0009E120  2C 05 00 00 */	cmpwi r5, 0x0
/* 800A1044 0009E124  41 82 00 24 */	beq .L_800A1068
/* 800A1048 0009E128  38 15 00 01 */	addi r0, r21, 0x1
/* 800A104C 0009E12C  3C 60 80 2F */	lis r3, sStripVert$1341@ha
/* 800A1050 0009E130  1C 80 00 24 */	mulli r4, r0, 0x24
/* 800A1054 0009E134  C0 02 92 80 */	lfs f0, "@948"@sda21(r2)
/* 800A1058 0009E138  38 03 97 90 */	addi r0, r3, sStripVert$1341@l
/* 800A105C 0009E13C  7C 60 22 14 */	add r3, r0, r4
/* 800A1060 0009E140  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 800A1064 0009E144  48 00 00 20 */	b .L_800A1084
.L_800A1068:
/* 800A1068 0009E148  38 15 00 01 */	addi r0, r21, 0x1
/* 800A106C 0009E14C  3C 60 80 2F */	lis r3, sStripVert$1341@ha
/* 800A1070 0009E150  1C 80 00 24 */	mulli r4, r0, 0x24
/* 800A1074 0009E154  C0 02 92 30 */	lfs f0, "@672"@sda21(r2)
/* 800A1078 0009E158  38 03 97 90 */	addi r0, r3, sStripVert$1341@l
/* 800A107C 0009E15C  7C 60 22 14 */	add r3, r0, r4
/* 800A1080 0009E160  D0 03 00 1C */	stfs f0, 0x1c(r3)
.L_800A1084:
/* 800A1084 0009E164  38 15 00 01 */	addi r0, r21, 0x1
/* 800A1088 0009E168  3A B5 00 02 */	addi r21, r21, 0x2
/* 800A108C 0009E16C  1C 00 00 24 */	mulli r0, r0, 0x24
/* 800A1090 0009E170  C0 02 92 80 */	lfs f0, "@948"@sda21(r2)
/* 800A1094 0009E174  28 15 00 80 */	cmplwi r21, 0x80
/* 800A1098 0009E178  3B 39 00 48 */	addi r25, r25, 0x48
/* 800A109C 0009E17C  7C BB 02 14 */	add r5, r27, r0
/* 800A10A0 0009E180  D0 05 00 20 */	stfs f0, 0x20(r5)
/* 800A10A4 0009E184  88 7E 02 29 */	lbz r3, 0x229(r30)
/* 800A10A8 0009E188  88 9E 02 2A */	lbz r4, 0x22a(r30)
/* 800A10AC 0009E18C  88 1E 02 28 */	lbz r0, 0x228(r30)
/* 800A10B0 0009E190  98 05 00 18 */	stb r0, 0x18(r5)
/* 800A10B4 0009E194  98 65 00 19 */	stb r3, 0x19(r5)
/* 800A10B8 0009E198  98 85 00 1A */	stb r4, 0x1a(r5)
/* 800A10BC 0009E19C  9A 65 00 1B */	stb r19, 0x1b(r5)
/* 800A10C0 0009E1A0  41 80 00 0C */	blt .L_800A10CC
/* 800A10C4 0009E1A4  3A A0 00 80 */	li r21, 0x80
/* 800A10C8 0009E1A8  48 00 01 70 */	b .L_800A1238
.L_800A10CC:
/* 800A10CC 0009E1AC  3B 9C 00 0C */	addi r28, r28, 0xc
/* 800A10D0 0009E1B0  3B BD 00 04 */	addi r29, r29, 0x4
/* 800A10D4 0009E1B4  3A 94 00 01 */	addi r20, r20, 0x1
.L_800A10D8:
/* 800A10D8 0009E1B8  7C 14 F8 00 */	cmpw r20, r31
/* 800A10DC 0009E1BC  41 80 FD 9C */	blt .L_800A0E78
/* 800A10E0 0009E1C0  80 1E 00 04 */	lwz r0, 0x4(r30)
/* 800A10E4 0009E1C4  54 00 05 AD */	rlwinm. r0, r0, 0, 22, 22
/* 800A10E8 0009E1C8  40 82 01 50 */	bne .L_800A1238
/* 800A10EC 0009E1CC  1C 9F 00 0C */	mulli r4, r31, 0xc
/* 800A10F0 0009E1D0  38 61 00 14 */	addi r3, r1, 0x14
/* 800A10F4 0009E1D4  3A E4 00 C8 */	addi r23, r4, 0xc8
/* 800A10F8 0009E1D8  7E FE BA 14 */	add r23, r30, r23
/* 800A10FC 0009E1DC  7E E4 BB 78 */	mr r4, r23
/* 800A1100 0009E1E0  4B FA D3 DD */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 800A1104 0009E1E4  57 E0 10 3A */	slwi r0, r31, 2
/* 800A1108 0009E1E8  38 61 00 14 */	addi r3, r1, 0x14
/* 800A110C 0009E1EC  7F 1E 02 14 */	add r24, r30, r0
/* 800A1110 0009E1F0  38 81 00 44 */	addi r4, r1, 0x44
/* 800A1114 0009E1F4  C0 38 01 9C */	lfs f1, 0x19c(r24)
/* 800A1118 0009E1F8  4B F7 3F 41 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 800A111C 0009E1FC  7E E4 BB 78 */	mr r4, r23
/* 800A1120 0009E200  38 61 00 08 */	addi r3, r1, 0x8
/* 800A1124 0009E204  4B FA D3 B9 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 800A1128 0009E208  C0 18 01 9C */	lfs f0, 0x19c(r24)
/* 800A112C 0009E20C  38 61 00 08 */	addi r3, r1, 0x8
/* 800A1130 0009E210  38 81 00 44 */	addi r4, r1, 0x44
/* 800A1134 0009E214  FC 20 00 50 */	fneg f1, f0
/* 800A1138 0009E218  4B F7 3F 21 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 800A113C 0009E21C  1C D5 00 24 */	mulli r6, r21, 0x24
/* 800A1140 0009E220  3C 60 80 2F */	lis r3, sStripVert$1341@ha
/* 800A1144 0009E224  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 800A1148 0009E228  56 8A 07 FF */	clrlwi. r10, r20, 31
/* 800A114C 0009E22C  38 63 97 90 */	addi r3, r3, sStripVert$1341@l
/* 800A1150 0009E230  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 800A1154 0009E234  7C 03 35 2E */	stfsx f0, r3, r6
/* 800A1158 0009E238  39 03 00 04 */	addi r8, r3, 0x4
/* 800A115C 0009E23C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 800A1160 0009E240  39 23 00 08 */	addi r9, r3, 0x8
/* 800A1164 0009E244  7C 28 35 2E */	stfsx f1, r8, r6
/* 800A1168 0009E248  7C 09 35 2E */	stfsx f0, r9, r6
/* 800A116C 0009E24C  41 82 00 14 */	beq .L_800A1180
/* 800A1170 0009E250  C0 02 92 80 */	lfs f0, "@948"@sda21(r2)
/* 800A1174 0009E254  7C 63 32 14 */	add r3, r3, r6
/* 800A1178 0009E258  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 800A117C 0009E25C  48 00 00 10 */	b .L_800A118C
.L_800A1180:
/* 800A1180 0009E260  C0 02 92 30 */	lfs f0, "@672"@sda21(r2)
/* 800A1184 0009E264  7C 63 32 14 */	add r3, r3, r6
/* 800A1188 0009E268  D0 03 00 1C */	stfs f0, 0x1c(r3)
.L_800A118C:
/* 800A118C 0009E26C  3C 60 80 2F */	lis r3, sStripVert$1341@ha
/* 800A1190 0009E270  38 15 00 01 */	addi r0, r21, 0x1
/* 800A1194 0009E274  38 63 97 90 */	addi r3, r3, sStripVert$1341@l
/* 800A1198 0009E278  C0 02 92 30 */	lfs f0, "@672"@sda21(r2)
/* 800A119C 0009E27C  39 63 00 20 */	addi r11, r3, 0x20
/* 800A11A0 0009E280  C0 41 00 08 */	lfs f2, 0x8(r1)
/* 800A11A4 0009E284  7C 0B 35 2E */	stfsx f0, r11, r6
/* 800A11A8 0009E288  39 83 00 18 */	addi r12, r3, 0x18
/* 800A11AC 0009E28C  3A 83 00 19 */	addi r20, r3, 0x19
/* 800A11B0 0009E290  3A E3 00 1A */	addi r23, r3, 0x1a
/* 800A11B4 0009E294  88 9E 02 29 */	lbz r4, 0x229(r30)
/* 800A11B8 0009E298  3B 03 00 1B */	addi r24, r3, 0x1b
/* 800A11BC 0009E29C  88 BE 02 2A */	lbz r5, 0x22a(r30)
/* 800A11C0 0009E2A0  1C E0 00 24 */	mulli r7, r0, 0x24
/* 800A11C4 0009E2A4  88 1E 02 28 */	lbz r0, 0x228(r30)
/* 800A11C8 0009E2A8  2C 0A 00 00 */	cmpwi r10, 0x0
/* 800A11CC 0009E2AC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 800A11D0 0009E2B0  7C 0C 31 AE */	stbx r0, r12, r6
/* 800A11D4 0009E2B4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 800A11D8 0009E2B8  7C 94 31 AE */	stbx r4, r20, r6
/* 800A11DC 0009E2BC  7C B7 31 AE */	stbx r5, r23, r6
/* 800A11E0 0009E2C0  7E 78 31 AE */	stbx r19, r24, r6
/* 800A11E4 0009E2C4  7C 43 3D 2E */	stfsx f2, r3, r7
/* 800A11E8 0009E2C8  7C 28 3D 2E */	stfsx f1, r8, r7
/* 800A11EC 0009E2CC  7C 09 3D 2E */	stfsx f0, r9, r7
/* 800A11F0 0009E2D0  41 82 00 14 */	beq .L_800A1204
/* 800A11F4 0009E2D4  C0 02 92 80 */	lfs f0, "@948"@sda21(r2)
/* 800A11F8 0009E2D8  7C 63 3A 14 */	add r3, r3, r7
/* 800A11FC 0009E2DC  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 800A1200 0009E2E0  48 00 00 10 */	b .L_800A1210
.L_800A1204:
/* 800A1204 0009E2E4  C0 02 92 30 */	lfs f0, "@672"@sda21(r2)
/* 800A1208 0009E2E8  7C 63 3A 14 */	add r3, r3, r7
/* 800A120C 0009E2EC  D0 03 00 1C */	stfs f0, 0x1c(r3)
.L_800A1210:
/* 800A1210 0009E2F0  C0 02 92 80 */	lfs f0, "@948"@sda21(r2)
/* 800A1214 0009E2F4  3A B5 00 02 */	addi r21, r21, 0x2
/* 800A1218 0009E2F8  7C 0B 3D 2E */	stfsx f0, r11, r7
/* 800A121C 0009E2FC  88 7E 02 29 */	lbz r3, 0x229(r30)
/* 800A1220 0009E300  88 9E 02 2A */	lbz r4, 0x22a(r30)
/* 800A1224 0009E304  88 1E 02 28 */	lbz r0, 0x228(r30)
/* 800A1228 0009E308  7C 0C 39 AE */	stbx r0, r12, r7
/* 800A122C 0009E30C  7C 74 39 AE */	stbx r3, r20, r7
/* 800A1230 0009E310  7C 97 39 AE */	stbx r4, r23, r7
/* 800A1234 0009E314  7E 78 39 AE */	stbx r19, r24, r7
.L_800A1238:
/* 800A1238 0009E318  3C 60 80 2F */	lis r3, sStripVert$1341@ha
/* 800A123C 0009E31C  3F A0 43 30 */	lis r29, 0x4330
/* 800A1240 0009E320  3B 83 97 90 */	addi r28, r3, sStripVert$1341@l
.L_800A1244:
/* 800A1244 0009E324  7F 83 E3 78 */	mr r3, r28
/* 800A1248 0009E328  7E A4 AB 78 */	mr r4, r21
/* 800A124C 0009E32C  38 A0 00 00 */	li r5, 0x0
/* 800A1250 0009E330  38 C0 00 19 */	li r6, 0x19
/* 800A1254 0009E334  48 1A AA 21 */	bl RwIm3DTransform
/* 800A1258 0009E338  28 03 00 00 */	cmplwi r3, 0x0
/* 800A125C 0009E33C  41 82 00 10 */	beq .L_800A126C
/* 800A1260 0009E340  38 60 00 04 */	li r3, 0x4
/* 800A1264 0009E344  48 1A AC DD */	bl RwIm3DRenderPrimitive
/* 800A1268 0009E348  48 1A AA ED */	bl RwIm3DEnd
.L_800A126C:
/* 800A126C 0009E34C  C0 3E 02 2C */	lfs f1, 0x22c(r30)
/* 800A1270 0009E350  C0 1E 02 30 */	lfs f0, 0x230(r30)
/* 800A1274 0009E354  88 1E 02 2B */	lbz r0, 0x22b(r30)
/* 800A1278 0009E358  EC 61 00 24 */	fdivs f3, f1, f0
/* 800A127C 0009E35C  93 A1 00 50 */	stw r29, 0x50(r1)
/* 800A1280 0009E360  C8 22 92 B8 */	lfd f1, "@1849"@sda21(r2)
/* 800A1284 0009E364  90 01 00 54 */	stw r0, 0x54(r1)
/* 800A1288 0009E368  C0 42 92 38 */	lfs f2, "@761"@sda21(r2)
/* 800A128C 0009E36C  C8 01 00 50 */	lfd f0, 0x50(r1)
/* 800A1290 0009E370  EC 00 08 28 */	fsubs f0, f0, f1
/* 800A1294 0009E374  EC 02 00 32 */	fmuls f0, f2, f0
/* 800A1298 0009E378  EC 63 00 32 */	fmuls f3, f3, f0
/* 800A129C 0009E37C  EC 02 18 2A */	fadds f0, f2, f3
/* 800A12A0 0009E380  FC 00 00 1E */	fctiwz f0, f0
/* 800A12A4 0009E384  D8 01 00 58 */	stfd f0, 0x58(r1)
/* 800A12A8 0009E388  82 A1 00 5C */	lwz r21, 0x5c(r1)
/* 800A12AC 0009E38C  4B F8 F9 DD */	bl xurand__Fv
/* 800A12B0 0009E390  80 1E 00 04 */	lwz r0, 0x4(r30)
/* 800A12B4 0009E394  3A 80 00 02 */	li r20, 0x2
/* 800A12B8 0009E398  C0 02 92 B0 */	lfs f0, "@1847"@sda21(r2)
/* 800A12BC 0009E39C  54 00 05 AD */	rlwinm. r0, r0, 0, 22, 22
/* 800A12C0 0009E3A0  EF C0 08 2A */	fadds f30, f0, f1
/* 800A12C4 0009E3A4  40 82 00 64 */	bne .L_800A1328
/* 800A12C8 0009E3A8  38 61 00 44 */	addi r3, r1, 0x44
/* 800A12CC 0009E3AC  38 9A 00 34 */	addi r4, r26, 0x34
/* 800A12D0 0009E3B0  4B FA D2 0D */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 800A12D4 0009E3B4  38 61 00 20 */	addi r3, r1, 0x20
/* 800A12D8 0009E3B8  38 9E 00 D4 */	addi r4, r30, 0xd4
/* 800A12DC 0009E3BC  38 BE 00 C8 */	addi r5, r30, 0xc8
/* 800A12E0 0009E3C0  4B F6 D3 B1 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 800A12E4 0009E3C4  38 61 00 20 */	addi r3, r1, 0x20
/* 800A12E8 0009E3C8  38 9A 00 34 */	addi r4, r26, 0x34
/* 800A12EC 0009E3CC  4B FA D2 05 */	bl xVec3Dot__FPC5xVec3PC5xVec3
/* 800A12F0 0009E3D0  FC 20 08 50 */	fneg f1, f1
/* 800A12F4 0009E3D4  38 61 00 20 */	addi r3, r1, 0x20
/* 800A12F8 0009E3D8  38 9A 00 34 */	addi r4, r26, 0x34
/* 800A12FC 0009E3DC  4B F7 3D 5D */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 800A1300 0009E3E0  38 61 00 38 */	addi r3, r1, 0x38
/* 800A1304 0009E3E4  38 81 00 20 */	addi r4, r1, 0x20
/* 800A1308 0009E3E8  4B FA CF E9 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 800A130C 0009E3EC  C0 02 92 A8 */	lfs f0, "@1331"@sda21(r2)
/* 800A1310 0009E3F0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A1314 0009E3F4  40 81 00 14 */	ble .L_800A1328
/* 800A1318 0009E3F8  38 61 00 44 */	addi r3, r1, 0x44
/* 800A131C 0009E3FC  38 81 00 38 */	addi r4, r1, 0x38
/* 800A1320 0009E400  38 BA 00 34 */	addi r5, r26, 0x34
/* 800A1324 0009E404  4B F7 3D 69 */	bl xVec3Cross__FP5xVec3PC5xVec3PC5xVec3
.L_800A1328:
/* 800A1328 0009E408  38 61 00 14 */	addi r3, r1, 0x14
/* 800A132C 0009E40C  38 9E 00 C8 */	addi r4, r30, 0xc8
/* 800A1330 0009E410  4B FA D1 AD */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 800A1334 0009E414  C0 1E 01 9C */	lfs f0, 0x19c(r30)
/* 800A1338 0009E418  38 61 00 14 */	addi r3, r1, 0x14
/* 800A133C 0009E41C  38 81 00 44 */	addi r4, r1, 0x44
/* 800A1340 0009E420  EC 3E 00 32 */	fmuls f1, f30, f0
/* 800A1344 0009E424  4B F7 3D 15 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 800A1348 0009E428  38 61 00 08 */	addi r3, r1, 0x8
/* 800A134C 0009E42C  38 9E 00 C8 */	addi r4, r30, 0xc8
/* 800A1350 0009E430  4B FA D1 8D */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 800A1354 0009E434  FF E0 F0 50 */	fneg f31, f30
/* 800A1358 0009E438  C0 1E 01 9C */	lfs f0, 0x19c(r30)
/* 800A135C 0009E43C  38 61 00 08 */	addi r3, r1, 0x8
/* 800A1360 0009E440  38 81 00 44 */	addi r4, r1, 0x44
/* 800A1364 0009E444  EC 3F 00 32 */	fmuls f1, f31, f0
/* 800A1368 0009E448  4B F7 3C F1 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 800A136C 0009E44C  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 800A1370 0009E450  7E D7 B3 78 */	mr r23, r22
/* 800A1374 0009E454  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 800A1378 0009E458  3B 3E 00 0C */	addi r25, r30, 0xc
/* 800A137C 0009E45C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 800A1380 0009E460  3B 1E 00 04 */	addi r24, r30, 0x4
/* 800A1384 0009E464  D0 5C 00 00 */	stfs f2, 0x0(r28)
/* 800A1388 0009E468  3A 60 00 01 */	li r19, 0x1
/* 800A138C 0009E46C  C0 41 00 08 */	lfs f2, 0x8(r1)
/* 800A1390 0009E470  D0 3B 00 04 */	stfs f1, 0x4(r27)
/* 800A1394 0009E474  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 800A1398 0009E478  D0 1B 00 08 */	stfs f0, 0x8(r27)
/* 800A139C 0009E47C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 800A13A0 0009E480  C0 62 92 30 */	lfs f3, "@672"@sda21(r2)
/* 800A13A4 0009E484  D0 7B 00 1C */	stfs f3, 0x1c(r27)
/* 800A13A8 0009E488  D0 7B 00 20 */	stfs f3, 0x20(r27)
/* 800A13AC 0009E48C  88 7E 02 29 */	lbz r3, 0x229(r30)
/* 800A13B0 0009E490  88 9E 02 2A */	lbz r4, 0x22a(r30)
/* 800A13B4 0009E494  88 1E 02 28 */	lbz r0, 0x228(r30)
/* 800A13B8 0009E498  98 1B 00 18 */	stb r0, 0x18(r27)
/* 800A13BC 0009E49C  98 7B 00 19 */	stb r3, 0x19(r27)
/* 800A13C0 0009E4A0  98 9B 00 1A */	stb r4, 0x1a(r27)
/* 800A13C4 0009E4A4  9A BB 00 1B */	stb r21, 0x1b(r27)
/* 800A13C8 0009E4A8  D0 5B 00 24 */	stfs f2, 0x24(r27)
/* 800A13CC 0009E4AC  D0 3B 00 28 */	stfs f1, 0x28(r27)
/* 800A13D0 0009E4B0  D0 1B 00 2C */	stfs f0, 0x2c(r27)
/* 800A13D4 0009E4B4  D0 7B 00 40 */	stfs f3, 0x40(r27)
/* 800A13D8 0009E4B8  C0 02 92 80 */	lfs f0, "@948"@sda21(r2)
/* 800A13DC 0009E4BC  D0 1B 00 44 */	stfs f0, 0x44(r27)
/* 800A13E0 0009E4C0  98 1B 00 3C */	stb r0, 0x3c(r27)
/* 800A13E4 0009E4C4  98 7B 00 3D */	stb r3, 0x3d(r27)
/* 800A13E8 0009E4C8  98 9B 00 3E */	stb r4, 0x3e(r27)
/* 800A13EC 0009E4CC  9A BB 00 3F */	stb r21, 0x3f(r27)
/* 800A13F0 0009E4D0  48 00 02 4C */	b .L_800A163C
.L_800A13F4:
/* 800A13F4 0009E4D4  80 1E 00 04 */	lwz r0, 0x4(r30)
/* 800A13F8 0009E4D8  54 00 05 AD */	rlwinm. r0, r0, 0, 22, 22
/* 800A13FC 0009E4DC  40 82 00 70 */	bne .L_800A146C
/* 800A1400 0009E4E0  38 61 00 2C */	addi r3, r1, 0x2c
/* 800A1404 0009E4E4  38 81 00 38 */	addi r4, r1, 0x38
/* 800A1408 0009E4E8  4B FA D0 D5 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 800A140C 0009E4EC  38 13 00 01 */	addi r0, r19, 0x1
/* 800A1410 0009E4F0  38 61 00 20 */	addi r3, r1, 0x20
/* 800A1414 0009E4F4  1C 80 00 0C */	mulli r4, r0, 0xc
/* 800A1418 0009E4F8  38 B9 00 C8 */	addi r5, r25, 0xc8
/* 800A141C 0009E4FC  38 84 00 C8 */	addi r4, r4, 0xc8
/* 800A1420 0009E500  7C 9E 22 14 */	add r4, r30, r4
/* 800A1424 0009E504  4B F6 D2 6D */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 800A1428 0009E508  38 61 00 20 */	addi r3, r1, 0x20
/* 800A142C 0009E50C  38 9A 00 34 */	addi r4, r26, 0x34
/* 800A1430 0009E510  4B FA D0 C1 */	bl xVec3Dot__FPC5xVec3PC5xVec3
/* 800A1434 0009E514  FC 20 08 50 */	fneg f1, f1
/* 800A1438 0009E518  38 61 00 20 */	addi r3, r1, 0x20
/* 800A143C 0009E51C  38 9A 00 34 */	addi r4, r26, 0x34
/* 800A1440 0009E520  4B F7 3C 19 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 800A1444 0009E524  38 61 00 38 */	addi r3, r1, 0x38
/* 800A1448 0009E528  38 81 00 20 */	addi r4, r1, 0x20
/* 800A144C 0009E52C  4B FA CE A5 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 800A1450 0009E530  C0 02 92 A8 */	lfs f0, "@1331"@sda21(r2)
/* 800A1454 0009E534  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A1458 0009E538  40 81 00 14 */	ble .L_800A146C
/* 800A145C 0009E53C  38 61 00 44 */	addi r3, r1, 0x44
/* 800A1460 0009E540  38 81 00 38 */	addi r4, r1, 0x38
/* 800A1464 0009E544  38 BA 00 34 */	addi r5, r26, 0x34
/* 800A1468 0009E548  4B F7 3C 25 */	bl xVec3Cross__FP5xVec3PC5xVec3PC5xVec3
.L_800A146C:
/* 800A146C 0009E54C  38 61 00 14 */	addi r3, r1, 0x14
/* 800A1470 0009E550  38 99 00 C8 */	addi r4, r25, 0xc8
/* 800A1474 0009E554  4B FA D0 69 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 800A1478 0009E558  C0 18 01 9C */	lfs f0, 0x19c(r24)
/* 800A147C 0009E55C  38 61 00 14 */	addi r3, r1, 0x14
/* 800A1480 0009E560  38 81 00 44 */	addi r4, r1, 0x44
/* 800A1484 0009E564  EC 3E 00 32 */	fmuls f1, f30, f0
/* 800A1488 0009E568  4B F7 3B D1 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 800A148C 0009E56C  38 61 00 08 */	addi r3, r1, 0x8
/* 800A1490 0009E570  38 99 00 C8 */	addi r4, r25, 0xc8
/* 800A1494 0009E574  4B FA D0 49 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 800A1498 0009E578  C0 18 01 9C */	lfs f0, 0x19c(r24)
/* 800A149C 0009E57C  38 61 00 08 */	addi r3, r1, 0x8
/* 800A14A0 0009E580  38 81 00 44 */	addi r4, r1, 0x44
/* 800A14A4 0009E584  EC 3F 00 32 */	fmuls f1, f31, f0
/* 800A14A8 0009E588  4B F7 3B B1 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 800A14AC 0009E58C  38 61 00 2C */	addi r3, r1, 0x2c
/* 800A14B0 0009E590  38 81 00 38 */	addi r4, r1, 0x38
/* 800A14B4 0009E594  4B FA D0 3D */	bl xVec3Dot__FPC5xVec3PC5xVec3
/* 800A14B8 0009E598  C0 02 92 30 */	lfs f0, "@672"@sda21(r2)
/* 800A14BC 0009E59C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A14C0 0009E5A0  7C 00 00 26 */	mfcr r0
/* 800A14C4 0009E5A4  54 03 0F FF */	srwi. r3, r0, 31
/* 800A14C8 0009E5A8  41 82 00 20 */	beq .L_800A14E8
/* 800A14CC 0009E5AC  C0 01 00 08 */	lfs f0, 0x8(r1)
/* 800A14D0 0009E5B0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 800A14D4 0009E5B4  D0 17 00 00 */	stfs f0, 0x0(r23)
/* 800A14D8 0009E5B8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 800A14DC 0009E5BC  D0 37 00 04 */	stfs f1, 0x4(r23)
/* 800A14E0 0009E5C0  D0 17 00 08 */	stfs f0, 0x8(r23)
/* 800A14E4 0009E5C4  48 00 00 1C */	b .L_800A1500
.L_800A14E8:
/* 800A14E8 0009E5C8  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 800A14EC 0009E5CC  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 800A14F0 0009E5D0  D0 17 00 00 */	stfs f0, 0x0(r23)
/* 800A14F4 0009E5D4  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 800A14F8 0009E5D8  D0 37 00 04 */	stfs f1, 0x4(r23)
/* 800A14FC 0009E5DC  D0 17 00 08 */	stfs f0, 0x8(r23)
.L_800A1500:
/* 800A1500 0009E5E0  56 60 07 FF */	clrlwi. r0, r19, 31
/* 800A1504 0009E5E4  41 82 00 10 */	beq .L_800A1514
/* 800A1508 0009E5E8  C0 02 92 80 */	lfs f0, "@948"@sda21(r2)
/* 800A150C 0009E5EC  D0 17 00 1C */	stfs f0, 0x1c(r23)
/* 800A1510 0009E5F0  48 00 00 0C */	b .L_800A151C
.L_800A1514:
/* 800A1514 0009E5F4  C0 02 92 30 */	lfs f0, "@672"@sda21(r2)
/* 800A1518 0009E5F8  D0 17 00 1C */	stfs f0, 0x1c(r23)
.L_800A151C:
/* 800A151C 0009E5FC  C0 02 92 30 */	lfs f0, "@672"@sda21(r2)
/* 800A1520 0009E600  2C 03 00 00 */	cmpwi r3, 0x0
/* 800A1524 0009E604  D0 17 00 20 */	stfs f0, 0x20(r23)
/* 800A1528 0009E608  88 9E 02 29 */	lbz r4, 0x229(r30)
/* 800A152C 0009E60C  88 BE 02 2A */	lbz r5, 0x22a(r30)
/* 800A1530 0009E610  88 7E 02 28 */	lbz r3, 0x228(r30)
/* 800A1534 0009E614  98 77 00 18 */	stb r3, 0x18(r23)
/* 800A1538 0009E618  98 97 00 19 */	stb r4, 0x19(r23)
/* 800A153C 0009E61C  98 B7 00 1A */	stb r5, 0x1a(r23)
/* 800A1540 0009E620  9A B7 00 1B */	stb r21, 0x1b(r23)
/* 800A1544 0009E624  41 82 00 34 */	beq .L_800A1578
/* 800A1548 0009E628  38 94 00 01 */	addi r4, r20, 0x1
/* 800A154C 0009E62C  3C 60 80 2F */	lis r3, sStripVert$1341@ha
/* 800A1550 0009E630  1C 84 00 24 */	mulli r4, r4, 0x24
/* 800A1554 0009E634  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 800A1558 0009E638  38 63 97 90 */	addi r3, r3, sStripVert$1341@l
/* 800A155C 0009E63C  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 800A1560 0009E640  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 800A1564 0009E644  7C 63 22 14 */	add r3, r3, r4
/* 800A1568 0009E648  D0 43 00 00 */	stfs f2, 0x0(r3)
/* 800A156C 0009E64C  D0 23 00 04 */	stfs f1, 0x4(r3)
/* 800A1570 0009E650  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 800A1574 0009E654  48 00 00 30 */	b .L_800A15A4
.L_800A1578:
/* 800A1578 0009E658  38 94 00 01 */	addi r4, r20, 0x1
/* 800A157C 0009E65C  3C 60 80 2F */	lis r3, sStripVert$1341@ha
/* 800A1580 0009E660  1C 84 00 24 */	mulli r4, r4, 0x24
/* 800A1584 0009E664  C0 41 00 08 */	lfs f2, 0x8(r1)
/* 800A1588 0009E668  38 63 97 90 */	addi r3, r3, sStripVert$1341@l
/* 800A158C 0009E66C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 800A1590 0009E670  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 800A1594 0009E674  7C 63 22 14 */	add r3, r3, r4
/* 800A1598 0009E678  D0 43 00 00 */	stfs f2, 0x0(r3)
/* 800A159C 0009E67C  D0 23 00 04 */	stfs f1, 0x4(r3)
/* 800A15A0 0009E680  D0 03 00 08 */	stfs f0, 0x8(r3)
.L_800A15A4:
/* 800A15A4 0009E684  2C 00 00 00 */	cmpwi r0, 0x0
/* 800A15A8 0009E688  41 82 00 24 */	beq .L_800A15CC
/* 800A15AC 0009E68C  38 14 00 01 */	addi r0, r20, 0x1
/* 800A15B0 0009E690  3C 60 80 2F */	lis r3, sStripVert$1341@ha
/* 800A15B4 0009E694  1C 80 00 24 */	mulli r4, r0, 0x24
/* 800A15B8 0009E698  C0 02 92 80 */	lfs f0, "@948"@sda21(r2)
/* 800A15BC 0009E69C  38 03 97 90 */	addi r0, r3, sStripVert$1341@l
/* 800A15C0 0009E6A0  7C 60 22 14 */	add r3, r0, r4
/* 800A15C4 0009E6A4  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 800A15C8 0009E6A8  48 00 00 20 */	b .L_800A15E8
.L_800A15CC:
/* 800A15CC 0009E6AC  38 14 00 01 */	addi r0, r20, 0x1
/* 800A15D0 0009E6B0  3C 60 80 2F */	lis r3, sStripVert$1341@ha
/* 800A15D4 0009E6B4  1C 80 00 24 */	mulli r4, r0, 0x24
/* 800A15D8 0009E6B8  C0 02 92 30 */	lfs f0, "@672"@sda21(r2)
/* 800A15DC 0009E6BC  38 03 97 90 */	addi r0, r3, sStripVert$1341@l
/* 800A15E0 0009E6C0  7C 60 22 14 */	add r3, r0, r4
/* 800A15E4 0009E6C4  D0 03 00 1C */	stfs f0, 0x1c(r3)
.L_800A15E8:
/* 800A15E8 0009E6C8  38 14 00 01 */	addi r0, r20, 0x1
/* 800A15EC 0009E6CC  3A 94 00 02 */	addi r20, r20, 0x2
/* 800A15F0 0009E6D0  1C 00 00 24 */	mulli r0, r0, 0x24
/* 800A15F4 0009E6D4  C0 02 92 80 */	lfs f0, "@948"@sda21(r2)
/* 800A15F8 0009E6D8  28 14 00 80 */	cmplwi r20, 0x80
/* 800A15FC 0009E6DC  3A F7 00 48 */	addi r23, r23, 0x48
/* 800A1600 0009E6E0  7C BC 02 14 */	add r5, r28, r0
/* 800A1604 0009E6E4  D0 05 00 20 */	stfs f0, 0x20(r5)
/* 800A1608 0009E6E8  88 7E 02 29 */	lbz r3, 0x229(r30)
/* 800A160C 0009E6EC  88 9E 02 2A */	lbz r4, 0x22a(r30)
/* 800A1610 0009E6F0  88 1E 02 28 */	lbz r0, 0x228(r30)
/* 800A1614 0009E6F4  98 05 00 18 */	stb r0, 0x18(r5)
/* 800A1618 0009E6F8  98 65 00 19 */	stb r3, 0x19(r5)
/* 800A161C 0009E6FC  98 85 00 1A */	stb r4, 0x1a(r5)
/* 800A1620 0009E700  9A A5 00 1B */	stb r21, 0x1b(r5)
/* 800A1624 0009E704  41 80 00 0C */	blt .L_800A1630
/* 800A1628 0009E708  3A A0 00 80 */	li r21, 0x80
/* 800A162C 0009E70C  4B FF FC 18 */	b .L_800A1244
.L_800A1630:
/* 800A1630 0009E710  3B 39 00 0C */	addi r25, r25, 0xc
/* 800A1634 0009E714  3B 18 00 04 */	addi r24, r24, 0x4
/* 800A1638 0009E718  3A 73 00 01 */	addi r19, r19, 0x1
.L_800A163C:
/* 800A163C 0009E71C  7C 13 F8 00 */	cmpw r19, r31
/* 800A1640 0009E720  41 80 FD B4 */	blt .L_800A13F4
/* 800A1644 0009E724  80 1E 00 04 */	lwz r0, 0x4(r30)
/* 800A1648 0009E728  54 00 05 AD */	rlwinm. r0, r0, 0, 22, 22
/* 800A164C 0009E72C  40 82 01 54 */	bne .L_800A17A0
/* 800A1650 0009E730  1C 9F 00 0C */	mulli r4, r31, 0xc
/* 800A1654 0009E734  38 61 00 14 */	addi r3, r1, 0x14
/* 800A1658 0009E738  3A C4 00 C8 */	addi r22, r4, 0xc8
/* 800A165C 0009E73C  7E DE B2 14 */	add r22, r30, r22
/* 800A1660 0009E740  7E C4 B3 78 */	mr r4, r22
/* 800A1664 0009E744  4B FA CE 79 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 800A1668 0009E748  57 E0 10 3A */	slwi r0, r31, 2
/* 800A166C 0009E74C  38 61 00 14 */	addi r3, r1, 0x14
/* 800A1670 0009E750  7E FE 02 14 */	add r23, r30, r0
/* 800A1674 0009E754  38 81 00 44 */	addi r4, r1, 0x44
/* 800A1678 0009E758  C0 17 01 9C */	lfs f0, 0x19c(r23)
/* 800A167C 0009E75C  EC 3E 00 32 */	fmuls f1, f30, f0
/* 800A1680 0009E760  4B F7 39 D9 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 800A1684 0009E764  7E C4 B3 78 */	mr r4, r22
/* 800A1688 0009E768  38 61 00 08 */	addi r3, r1, 0x8
/* 800A168C 0009E76C  4B FA CE 51 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 800A1690 0009E770  C0 17 01 9C */	lfs f0, 0x19c(r23)
/* 800A1694 0009E774  38 61 00 08 */	addi r3, r1, 0x8
/* 800A1698 0009E778  38 81 00 44 */	addi r4, r1, 0x44
/* 800A169C 0009E77C  EC 3F 00 32 */	fmuls f1, f31, f0
/* 800A16A0 0009E780  4B F7 39 B9 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 800A16A4 0009E784  1C D4 00 24 */	mulli r6, r20, 0x24
/* 800A16A8 0009E788  3C 60 80 2F */	lis r3, sStripVert$1341@ha
/* 800A16AC 0009E78C  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 800A16B0 0009E790  56 6A 07 FF */	clrlwi. r10, r19, 31
/* 800A16B4 0009E794  38 63 97 90 */	addi r3, r3, sStripVert$1341@l
/* 800A16B8 0009E798  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 800A16BC 0009E79C  7C 03 35 2E */	stfsx f0, r3, r6
/* 800A16C0 0009E7A0  39 03 00 04 */	addi r8, r3, 0x4
/* 800A16C4 0009E7A4  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 800A16C8 0009E7A8  39 23 00 08 */	addi r9, r3, 0x8
/* 800A16CC 0009E7AC  7C 28 35 2E */	stfsx f1, r8, r6
/* 800A16D0 0009E7B0  7C 09 35 2E */	stfsx f0, r9, r6
/* 800A16D4 0009E7B4  41 82 00 14 */	beq .L_800A16E8
/* 800A16D8 0009E7B8  C0 02 92 80 */	lfs f0, "@948"@sda21(r2)
/* 800A16DC 0009E7BC  7C 63 32 14 */	add r3, r3, r6
/* 800A16E0 0009E7C0  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 800A16E4 0009E7C4  48 00 00 10 */	b .L_800A16F4
.L_800A16E8:
/* 800A16E8 0009E7C8  C0 02 92 30 */	lfs f0, "@672"@sda21(r2)
/* 800A16EC 0009E7CC  7C 63 32 14 */	add r3, r3, r6
/* 800A16F0 0009E7D0  D0 03 00 1C */	stfs f0, 0x1c(r3)
.L_800A16F4:
/* 800A16F4 0009E7D4  3C 60 80 2F */	lis r3, sStripVert$1341@ha
/* 800A16F8 0009E7D8  38 14 00 01 */	addi r0, r20, 0x1
/* 800A16FC 0009E7DC  38 63 97 90 */	addi r3, r3, sStripVert$1341@l
/* 800A1700 0009E7E0  C0 02 92 30 */	lfs f0, "@672"@sda21(r2)
/* 800A1704 0009E7E4  39 63 00 20 */	addi r11, r3, 0x20
/* 800A1708 0009E7E8  C0 41 00 08 */	lfs f2, 0x8(r1)
/* 800A170C 0009E7EC  7C 0B 35 2E */	stfsx f0, r11, r6
/* 800A1710 0009E7F0  39 83 00 18 */	addi r12, r3, 0x18
/* 800A1714 0009E7F4  3A 63 00 19 */	addi r19, r3, 0x19
/* 800A1718 0009E7F8  3A C3 00 1A */	addi r22, r3, 0x1a
/* 800A171C 0009E7FC  88 9E 02 29 */	lbz r4, 0x229(r30)
/* 800A1720 0009E800  3A E3 00 1B */	addi r23, r3, 0x1b
/* 800A1724 0009E804  88 BE 02 2A */	lbz r5, 0x22a(r30)
/* 800A1728 0009E808  1C E0 00 24 */	mulli r7, r0, 0x24
/* 800A172C 0009E80C  88 1E 02 28 */	lbz r0, 0x228(r30)
/* 800A1730 0009E810  2C 0A 00 00 */	cmpwi r10, 0x0
/* 800A1734 0009E814  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 800A1738 0009E818  7C 0C 31 AE */	stbx r0, r12, r6
/* 800A173C 0009E81C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 800A1740 0009E820  7C 93 31 AE */	stbx r4, r19, r6
/* 800A1744 0009E824  7C B6 31 AE */	stbx r5, r22, r6
/* 800A1748 0009E828  7E B7 31 AE */	stbx r21, r23, r6
/* 800A174C 0009E82C  7C 43 3D 2E */	stfsx f2, r3, r7
/* 800A1750 0009E830  7C 28 3D 2E */	stfsx f1, r8, r7
/* 800A1754 0009E834  7C 09 3D 2E */	stfsx f0, r9, r7
/* 800A1758 0009E838  41 82 00 14 */	beq .L_800A176C
/* 800A175C 0009E83C  C0 02 92 80 */	lfs f0, "@948"@sda21(r2)
/* 800A1760 0009E840  7C 63 3A 14 */	add r3, r3, r7
/* 800A1764 0009E844  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 800A1768 0009E848  48 00 00 10 */	b .L_800A1778
.L_800A176C:
/* 800A176C 0009E84C  C0 02 92 30 */	lfs f0, "@672"@sda21(r2)
/* 800A1770 0009E850  7C 63 3A 14 */	add r3, r3, r7
/* 800A1774 0009E854  D0 03 00 1C */	stfs f0, 0x1c(r3)
.L_800A1778:
/* 800A1778 0009E858  C0 02 92 80 */	lfs f0, "@948"@sda21(r2)
/* 800A177C 0009E85C  3A 94 00 02 */	addi r20, r20, 0x2
/* 800A1780 0009E860  7C 0B 3D 2E */	stfsx f0, r11, r7
/* 800A1784 0009E864  88 7E 02 29 */	lbz r3, 0x229(r30)
/* 800A1788 0009E868  88 9E 02 2A */	lbz r4, 0x22a(r30)
/* 800A178C 0009E86C  88 1E 02 28 */	lbz r0, 0x228(r30)
/* 800A1790 0009E870  7C 0C 39 AE */	stbx r0, r12, r7
/* 800A1794 0009E874  7C 73 39 AE */	stbx r3, r19, r7
/* 800A1798 0009E878  7C 96 39 AE */	stbx r4, r22, r7
/* 800A179C 0009E87C  7E B7 39 AE */	stbx r21, r23, r7
.L_800A17A0:
/* 800A17A0 0009E880  3C 60 80 2F */	lis r3, sStripVert$1341@ha
/* 800A17A4 0009E884  7E 84 A3 78 */	mr r4, r20
/* 800A17A8 0009E888  38 63 97 90 */	addi r3, r3, sStripVert$1341@l
/* 800A17AC 0009E88C  38 A0 00 00 */	li r5, 0x0
/* 800A17B0 0009E890  38 C0 00 19 */	li r6, 0x19
/* 800A17B4 0009E894  48 1A A4 C1 */	bl RwIm3DTransform
/* 800A17B8 0009E898  28 03 00 00 */	cmplwi r3, 0x0
/* 800A17BC 0009E89C  41 82 00 18 */	beq .L_800A17D4
/* 800A17C0 0009E8A0  38 60 00 04 */	li r3, 0x4
/* 800A17C4 0009E8A4  48 1A A7 7D */	bl RwIm3DRenderPrimitive
/* 800A17C8 0009E8A8  48 1A A5 8D */	bl RwIm3DEnd
/* 800A17CC 0009E8AC  48 00 00 08 */	b .L_800A17D4
.L_800A17D0:
/* 800A17D0 0009E8B0  4B FF EE 79 */	bl zLightningFunc_Render__FP10zLightning
.L_800A17D4:
/* 800A17D4 0009E8B4  E3 E1 00 B8 */	psq_l f31, 0xb8(r1), 0, qr0
/* 800A17D8 0009E8B8  CB E1 00 B0 */	lfd f31, 0xb0(r1)
/* 800A17DC 0009E8BC  E3 C1 00 A8 */	psq_l f30, 0xa8(r1), 0, qr0
/* 800A17E0 0009E8C0  CB C1 00 A0 */	lfd f30, 0xa0(r1)
/* 800A17E4 0009E8C4  BA 61 00 6C */	lmw r19, 0x6c(r1)
/* 800A17E8 0009E8C8  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 800A17EC 0009E8CC  7C 08 03 A6 */	mtlr r0
/* 800A17F0 0009E8D0  38 21 00 C0 */	addi r1, r1, 0xc0
/* 800A17F4 0009E8D4  4E 80 00 20 */	blr
.endfn RenderLightning__FP10zLightning

# zLightningRender()
.fn zLightningRender__Fv, global
/* 800A17F8 0009E8D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A17FC 0009E8DC  7C 08 02 A6 */	mflr r0
/* 800A1800 0009E8E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A1804 0009E8E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800A1808 0009E8E8  93 C1 00 08 */	stw r30, 0x8(r1)
/* 800A180C 0009E8EC  80 8D 8F FC */	lwz r4, sLightningRaster@sda21(r13)
/* 800A1810 0009E8F0  28 04 00 00 */	cmplwi r4, 0x0
/* 800A1814 0009E8F4  41 82 00 0C */	beq .L_800A1820
/* 800A1818 0009E8F8  38 60 00 01 */	li r3, 0x1
/* 800A181C 0009E8FC  48 18 DF C1 */	bl RwRenderStateSet
.L_800A1820:
/* 800A1820 0009E900  38 60 00 0A */	li r3, 0xa
/* 800A1824 0009E904  38 80 00 05 */	li r4, 0x5
/* 800A1828 0009E908  48 18 DF B5 */	bl RwRenderStateSet
/* 800A182C 0009E90C  38 60 00 0B */	li r3, 0xb
/* 800A1830 0009E910  38 80 00 02 */	li r4, 0x2
/* 800A1834 0009E914  48 18 DF A9 */	bl RwRenderStateSet
/* 800A1838 0009E918  3C 60 80 2F */	lis r3, sLightning@ha
/* 800A183C 0009E91C  3B C0 00 00 */	li r30, 0x0
/* 800A1840 0009E920  3B E3 90 C8 */	addi r31, r3, sLightning@l
.L_800A1844:
/* 800A1844 0009E924  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 800A1848 0009E928  28 03 00 00 */	cmplwi r3, 0x0
/* 800A184C 0009E92C  41 82 00 18 */	beq .L_800A1864
/* 800A1850 0009E930  80 03 00 04 */	lwz r0, 0x4(r3)
/* 800A1854 0009E934  70 00 00 41 */	andi. r0, r0, 0x41
/* 800A1858 0009E938  28 00 00 41 */	cmplwi r0, 0x41
/* 800A185C 0009E93C  40 82 00 08 */	bne .L_800A1864
/* 800A1860 0009E940  4B FF F4 15 */	bl RenderLightning__FP10zLightning
.L_800A1864:
/* 800A1864 0009E944  3B DE 00 01 */	addi r30, r30, 0x1
/* 800A1868 0009E948  3B FF 00 04 */	addi r31, r31, 0x4
/* 800A186C 0009E94C  2C 1E 00 30 */	cmpwi r30, 0x30
/* 800A1870 0009E950  41 80 FF D4 */	blt .L_800A1844
/* 800A1874 0009E954  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A1878 0009E958  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800A187C 0009E95C  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 800A1880 0009E960  7C 08 03 A6 */	mtlr r0
/* 800A1884 0009E964  38 21 00 10 */	addi r1, r1, 0x10
/* 800A1888 0009E968  4E 80 00 20 */	blr
.endfn zLightningRender__Fv

# zLightningShow(zLightning*, int)
.fn zLightningShow__FP10zLightningi, global
/* 800A188C 0009E96C  2C 04 00 00 */	cmpwi r4, 0x0
/* 800A1890 0009E970  41 82 00 14 */	beq .L_800A18A4
/* 800A1894 0009E974  80 03 00 04 */	lwz r0, 0x4(r3)
/* 800A1898 0009E978  60 00 00 40 */	ori r0, r0, 0x40
/* 800A189C 0009E97C  90 03 00 04 */	stw r0, 0x4(r3)
/* 800A18A0 0009E980  4E 80 00 20 */	blr
.L_800A18A4:
/* 800A18A4 0009E984  80 03 00 04 */	lwz r0, 0x4(r3)
/* 800A18A8 0009E988  54 00 06 B0 */	rlwinm r0, r0, 0, 26, 24
/* 800A18AC 0009E98C  90 03 00 04 */	stw r0, 0x4(r3)
/* 800A18B0 0009E990  4E 80 00 20 */	blr
.endfn zLightningShow__FP10zLightningi

# zLightningKill(zLightning*)
.fn zLightningKill__FP10zLightning, global
/* 800A18B4 0009E994  80 83 00 04 */	lwz r4, 0x4(r3)
/* 800A18B8 0009E998  38 00 FE FE */	li r0, -0x102
/* 800A18BC 0009E99C  7C 80 00 38 */	and r0, r4, r0
/* 800A18C0 0009E9A0  90 03 00 04 */	stw r0, 0x4(r3)
/* 800A18C4 0009E9A4  4E 80 00 20 */	blr
.endfn zLightningKill__FP10zLightning

# zLightningModifyEndpoints(zLightning*, xVec3*, xVec3*)
.fn zLightningModifyEndpoints__FP10zLightningP5xVec3P5xVec3, global
/* 800A18C8 0009E9A8  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 800A18CC 0009E9AC  7C 08 02 A6 */	mflr r0
/* 800A18D0 0009E9B0  90 01 00 84 */	stw r0, 0x84(r1)
/* 800A18D4 0009E9B4  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 800A18D8 0009E9B8  F3 E1 00 78 */	psq_st f31, 0x78(r1), 0, qr0
/* 800A18DC 0009E9BC  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 800A18E0 0009E9C0  F3 C1 00 68 */	psq_st f30, 0x68(r1), 0, qr0
/* 800A18E4 0009E9C4  BF 01 00 40 */	stmw r24, 0x40(r1)
/* 800A18E8 0009E9C8  7C 7A 1B 78 */	mr r26, r3
/* 800A18EC 0009E9CC  7C 9B 23 78 */	mr r27, r4
/* 800A18F0 0009E9D0  80 03 00 00 */	lwz r0, 0x0(r3)
/* 800A18F4 0009E9D4  7C BC 2B 78 */	mr r28, r5
/* 800A18F8 0009E9D8  28 00 00 03 */	cmplwi r0, 0x3
/* 800A18FC 0009E9DC  41 82 02 A0 */	beq .L_800A1B9C
/* 800A1900 0009E9E0  80 1A 00 04 */	lwz r0, 0x4(r26)
/* 800A1904 0009E9E4  54 00 06 31 */	rlwinm. r0, r0, 0, 24, 24
/* 800A1908 0009E9E8  41 82 00 48 */	beq .L_800A1950
/* 800A190C 0009E9EC  A8 7A 01 8A */	lha r3, 0x18a(r26)
/* 800A1910 0009E9F0  34 03 FF FF */	addic. r0, r3, -0x1
/* 800A1914 0009E9F4  40 80 00 24 */	bge .L_800A1938
/* 800A1918 0009E9F8  A8 9A 01 88 */	lha r4, 0x188(r26)
/* 800A191C 0009E9FC  7F 65 DB 78 */	mr r5, r27
/* 800A1920 0009EA00  38 61 00 20 */	addi r3, r1, 0x20
/* 800A1924 0009EA04  38 04 FF FF */	addi r0, r4, -0x1
/* 800A1928 0009EA08  1C 00 00 0C */	mulli r0, r0, 0xc
/* 800A192C 0009EA0C  7C 9B 02 14 */	add r4, r27, r0
/* 800A1930 0009EA10  4B F6 CD 61 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 800A1934 0009EA14  48 00 00 2C */	b .L_800A1960
.L_800A1938:
/* 800A1938 0009EA18  1C 00 00 0C */	mulli r0, r0, 0xc
/* 800A193C 0009EA1C  7F 65 DB 78 */	mr r5, r27
/* 800A1940 0009EA20  38 61 00 20 */	addi r3, r1, 0x20
/* 800A1944 0009EA24  7C 9C 02 14 */	add r4, r28, r0
/* 800A1948 0009EA28  4B F6 CD 49 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 800A194C 0009EA2C  48 00 00 14 */	b .L_800A1960
.L_800A1950:
/* 800A1950 0009EA30  7F 84 E3 78 */	mr r4, r28
/* 800A1954 0009EA34  7F 65 DB 78 */	mr r5, r27
/* 800A1958 0009EA38  38 61 00 20 */	addi r3, r1, 0x20
/* 800A195C 0009EA3C  4B F6 CD 35 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
.L_800A1960:
/* 800A1960 0009EA40  38 61 00 20 */	addi r3, r1, 0x20
/* 800A1964 0009EA44  7C 64 1B 78 */	mr r4, r3
/* 800A1968 0009EA48  4B FA C9 89 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 800A196C 0009EA4C  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 800A1970 0009EA50  C0 02 92 78 */	lfs f0, "@946"@sda21(r2)
/* 800A1974 0009EA54  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A1978 0009EA58  41 81 00 10 */	bgt .L_800A1988
/* 800A197C 0009EA5C  C0 02 92 7C */	lfs f0, "@947"@sda21(r2)
/* 800A1980 0009EA60  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A1984 0009EA64  40 80 00 1C */	bge .L_800A19A0
.L_800A1988:
/* 800A1988 0009EA68  C0 42 92 30 */	lfs f2, "@672"@sda21(r2)
/* 800A198C 0009EA6C  38 7A 01 90 */	addi r3, r26, 0x190
/* 800A1990 0009EA70  C0 22 92 80 */	lfs f1, "@948"@sda21(r2)
/* 800A1994 0009EA74  FC 60 10 90 */	fmr f3, f2
/* 800A1998 0009EA78  4B F6 D6 65 */	bl xVec3Init__FP5xVec3fff
/* 800A199C 0009EA7C  48 00 00 4C */	b .L_800A19E8
.L_800A19A0:
/* 800A19A0 0009EA80  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 800A19A4 0009EA84  38 7A 01 90 */	addi r3, r26, 0x190
/* 800A19A8 0009EA88  7C 64 1B 78 */	mr r4, r3
/* 800A19AC 0009EA8C  EC 00 00 72 */	fmuls f0, f0, f1
/* 800A19B0 0009EA90  FC 00 00 50 */	fneg f0, f0
/* 800A19B4 0009EA94  D0 1A 01 90 */	stfs f0, 0x190(r26)
/* 800A19B8 0009EA98  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 800A19BC 0009EA9C  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 800A19C0 0009EAA0  EC 21 00 72 */	fmuls f1, f1, f1
/* 800A19C4 0009EAA4  EC 00 00 32 */	fmuls f0, f0, f0
/* 800A19C8 0009EAA8  EC 01 00 2A */	fadds f0, f1, f0
/* 800A19CC 0009EAAC  D0 1A 01 94 */	stfs f0, 0x194(r26)
/* 800A19D0 0009EAB0  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 800A19D4 0009EAB4  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 800A19D8 0009EAB8  EC 01 00 32 */	fmuls f0, f1, f0
/* 800A19DC 0009EABC  FC 00 00 50 */	fneg f0, f0
/* 800A19E0 0009EAC0  D0 1A 01 98 */	stfs f0, 0x198(r26)
/* 800A19E4 0009EAC4  4B FA C9 0D */	bl xVec3Normalize__FP5xVec3PC5xVec3
.L_800A19E8:
/* 800A19E8 0009EAC8  38 61 00 14 */	addi r3, r1, 0x14
/* 800A19EC 0009EACC  38 9A 01 90 */	addi r4, r26, 0x190
/* 800A19F0 0009EAD0  38 A1 00 20 */	addi r5, r1, 0x20
/* 800A19F4 0009EAD4  4B F7 36 99 */	bl xVec3Cross__FP5xVec3PC5xVec3PC5xVec3
/* 800A19F8 0009EAD8  A8 7A 01 88 */	lha r3, 0x188(r26)
/* 800A19FC 0009EADC  3C 00 43 30 */	lis r0, 0x4330
/* 800A1A00 0009EAE0  90 01 00 30 */	stw r0, 0x30(r1)
/* 800A1A04 0009EAE4  7F 7F DB 78 */	mr r31, r27
/* 800A1A08 0009EAE8  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 800A1A0C 0009EAEC  C8 22 92 70 */	lfd f1, "@776"@sda21(r2)
/* 800A1A10 0009EAF0  90 01 00 34 */	stw r0, 0x34(r1)
/* 800A1A14 0009EAF4  7F 59 D3 78 */	mr r25, r26
/* 800A1A18 0009EAF8  C0 42 92 80 */	lfs f2, "@948"@sda21(r2)
/* 800A1A1C 0009EAFC  3B A0 00 01 */	li r29, 0x1
/* 800A1A20 0009EB00  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 800A1A24 0009EB04  3B C0 00 00 */	li r30, 0x0
/* 800A1A28 0009EB08  C3 E2 92 30 */	lfs f31, "@672"@sda21(r2)
/* 800A1A2C 0009EB0C  EC 00 08 28 */	fsubs f0, f0, f1
/* 800A1A30 0009EB10  EC 00 10 28 */	fsubs f0, f0, f2
/* 800A1A34 0009EB14  EF C2 00 24 */	fdivs f30, f2, f0
/* 800A1A38 0009EB18  48 00 01 30 */	b .L_800A1B68
.L_800A1A3C:
/* 800A1A3C 0009EB1C  80 1A 00 04 */	lwz r0, 0x4(r26)
/* 800A1A40 0009EB20  54 00 06 31 */	rlwinm. r0, r0, 0, 24, 24
/* 800A1A44 0009EB24  41 82 00 38 */	beq .L_800A1A7C
/* 800A1A48 0009EB28  A8 1A 01 8A */	lha r0, 0x18a(r26)
/* 800A1A4C 0009EB2C  7C 00 C0 50 */	subf r0, r0, r24
/* 800A1A50 0009EB30  7C 00 F0 51 */	subf. r0, r0, r30
/* 800A1A54 0009EB34  40 80 00 14 */	bge .L_800A1A68
/* 800A1A58 0009EB38  7F E4 FB 78 */	mr r4, r31
/* 800A1A5C 0009EB3C  38 79 00 08 */	addi r3, r25, 0x8
/* 800A1A60 0009EB40  4B F6 98 05 */	bl __as__5xVec3FRC5xVec3
/* 800A1A64 0009EB44  48 00 00 2C */	b .L_800A1A90
.L_800A1A68:
/* 800A1A68 0009EB48  1C 00 00 0C */	mulli r0, r0, 0xc
/* 800A1A6C 0009EB4C  38 79 00 08 */	addi r3, r25, 0x8
/* 800A1A70 0009EB50  7C 9C 02 14 */	add r4, r28, r0
/* 800A1A74 0009EB54  4B F6 97 F1 */	bl __as__5xVec3FRC5xVec3
/* 800A1A78 0009EB58  48 00 00 18 */	b .L_800A1A90
.L_800A1A7C:
/* 800A1A7C 0009EB5C  FC 20 F8 90 */	fmr f1, f31
/* 800A1A80 0009EB60  7F 64 DB 78 */	mr r4, r27
/* 800A1A84 0009EB64  7F 85 E3 78 */	mr r5, r28
/* 800A1A88 0009EB68  38 79 00 08 */	addi r3, r25, 0x8
/* 800A1A8C 0009EB6C  4B F7 62 69 */	bl xVec3Lerp__FP5xVec3PC5xVec3PC5xVec3f
.L_800A1A90:
/* 800A1A90 0009EB70  80 1A 00 00 */	lwz r0, 0x0(r26)
/* 800A1A94 0009EB74  28 00 00 02 */	cmplwi r0, 0x2
/* 800A1A98 0009EB78  40 82 00 80 */	bne .L_800A1B18
/* 800A1A9C 0009EB7C  2C 1E 00 00 */	cmpwi r30, 0x0
/* 800A1AA0 0009EB80  41 82 00 78 */	beq .L_800A1B18
/* 800A1AA4 0009EB84  A8 7A 01 88 */	lha r3, 0x188(r26)
/* 800A1AA8 0009EB88  38 03 FF FF */	addi r0, r3, -0x1
/* 800A1AAC 0009EB8C  7C 1E 00 00 */	cmpw r30, r0
/* 800A1AB0 0009EB90  41 82 00 68 */	beq .L_800A1B18
/* 800A1AB4 0009EB94  2C 1D 00 00 */	cmpwi r29, 0x0
/* 800A1AB8 0009EB98  41 82 00 18 */	beq .L_800A1AD0
/* 800A1ABC 0009EB9C  38 61 00 08 */	addi r3, r1, 0x8
/* 800A1AC0 0009EBA0  38 99 00 08 */	addi r4, r25, 0x8
/* 800A1AC4 0009EBA4  4B FA CA 19 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 800A1AC8 0009EBA8  3B A0 00 00 */	li r29, 0x0
/* 800A1ACC 0009EBAC  48 00 00 4C */	b .L_800A1B18
.L_800A1AD0:
/* 800A1AD0 0009EBB0  38 79 00 08 */	addi r3, r25, 0x8
/* 800A1AD4 0009EBB4  38 81 00 08 */	addi r4, r1, 0x8
/* 800A1AD8 0009EBB8  4B FA CA 05 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 800A1ADC 0009EBBC  C0 3A 01 DC */	lfs f1, 0x1dc(r26)
/* 800A1AE0 0009EBC0  38 79 00 08 */	addi r3, r25, 0x8
/* 800A1AE4 0009EBC4  38 9A 01 90 */	addi r4, r26, 0x190
/* 800A1AE8 0009EBC8  4B F7 35 71 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 800A1AEC 0009EBCC  C0 1A 01 E0 */	lfs f0, 0x1e0(r26)
/* 800A1AF0 0009EBD0  38 79 00 08 */	addi r3, r25, 0x8
/* 800A1AF4 0009EBD4  38 81 00 20 */	addi r4, r1, 0x20
/* 800A1AF8 0009EBD8  FC 20 00 50 */	fneg f1, f0
/* 800A1AFC 0009EBDC  4B F7 35 5D */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 800A1B00 0009EBE0  C0 1A 01 E4 */	lfs f0, 0x1e4(r26)
/* 800A1B04 0009EBE4  38 79 00 08 */	addi r3, r25, 0x8
/* 800A1B08 0009EBE8  38 81 00 14 */	addi r4, r1, 0x14
/* 800A1B0C 0009EBEC  FC 20 00 50 */	fneg f1, f0
/* 800A1B10 0009EBF0  4B F7 35 49 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 800A1B14 0009EBF4  3B A0 00 01 */	li r29, 0x1
.L_800A1B18:
/* 800A1B18 0009EBF8  80 1A 00 04 */	lwz r0, 0x4(r26)
/* 800A1B1C 0009EBFC  54 00 06 B5 */	rlwinm. r0, r0, 0, 26, 26
/* 800A1B20 0009EC00  41 82 00 38 */	beq .L_800A1B58
/* 800A1B24 0009EC04  EC 3F 07 F2 */	fmuls f1, f31, f31
/* 800A1B28 0009EC08  C0 42 92 94 */	lfs f2, "@953"@sda21(r2)
/* 800A1B2C 0009EC0C  C0 62 92 84 */	lfs f3, "@949"@sda21(r2)
/* 800A1B30 0009EC10  C0 02 92 30 */	lfs f0, "@672"@sda21(r2)
/* 800A1B34 0009EC14  EC 22 00 72 */	fmuls f1, f2, f1
/* 800A1B38 0009EC18  EC 23 0F FA */	fmadds f1, f3, f31, f1
/* 800A1B3C 0009EC1C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A1B40 0009EC20  40 81 00 18 */	ble .L_800A1B58
/* 800A1B44 0009EC24  C0 1A 01 8C */	lfs f0, 0x18c(r26)
/* 800A1B48 0009EC28  38 79 00 08 */	addi r3, r25, 0x8
/* 800A1B4C 0009EC2C  38 9A 01 90 */	addi r4, r26, 0x190
/* 800A1B50 0009EC30  EC 21 00 32 */	fmuls f1, f1, f0
/* 800A1B54 0009EC34  4B F7 35 05 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
.L_800A1B58:
/* 800A1B58 0009EC38  EF FF F0 2A */	fadds f31, f31, f30
/* 800A1B5C 0009EC3C  3B FF 00 0C */	addi r31, r31, 0xc
/* 800A1B60 0009EC40  3B 39 00 0C */	addi r25, r25, 0xc
/* 800A1B64 0009EC44  3B DE 00 01 */	addi r30, r30, 0x1
.L_800A1B68:
/* 800A1B68 0009EC48  AB 1A 01 88 */	lha r24, 0x188(r26)
/* 800A1B6C 0009EC4C  7C 1E C0 00 */	cmpw r30, r24
/* 800A1B70 0009EC50  41 80 FE CC */	blt .L_800A1A3C
/* 800A1B74 0009EC54  38 7A 00 C8 */	addi r3, r26, 0xc8
/* 800A1B78 0009EC58  38 9A 00 08 */	addi r4, r26, 0x8
/* 800A1B7C 0009EC5C  4B F6 96 E9 */	bl __as__5xVec3FRC5xVec3
/* 800A1B80 0009EC60  38 18 FF FF */	addi r0, r24, -0x1
/* 800A1B84 0009EC64  1C 00 00 0C */	mulli r0, r0, 0xc
/* 800A1B88 0009EC68  7C 9A 02 14 */	add r4, r26, r0
/* 800A1B8C 0009EC6C  38 64 00 C8 */	addi r3, r4, 0xc8
/* 800A1B90 0009EC70  38 84 00 08 */	addi r4, r4, 0x8
/* 800A1B94 0009EC74  4B F6 96 D1 */	bl __as__5xVec3FRC5xVec3
/* 800A1B98 0009EC78  48 00 01 4C */	b .L_800A1CE4
.L_800A1B9C:
/* 800A1B9C 0009EC7C  38 7A 00 08 */	addi r3, r26, 0x8
/* 800A1BA0 0009EC80  4B FA C9 3D */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 800A1BA4 0009EC84  7F 84 E3 78 */	mr r4, r28
/* 800A1BA8 0009EC88  38 7A 00 14 */	addi r3, r26, 0x14
/* 800A1BAC 0009EC8C  4B FA C9 31 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 800A1BB0 0009EC90  38 7A 00 20 */	addi r3, r26, 0x20
/* 800A1BB4 0009EC94  38 9A 00 14 */	addi r4, r26, 0x14
/* 800A1BB8 0009EC98  38 BA 00 08 */	addi r5, r26, 0x8
/* 800A1BBC 0009EC9C  4B F6 CA D5 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 800A1BC0 0009ECA0  38 7A 00 20 */	addi r3, r26, 0x20
/* 800A1BC4 0009ECA4  4B F6 CA 8D */	bl xVec3Length__FPC5xVec3
/* 800A1BC8 0009ECA8  D0 3A 00 2C */	stfs f1, 0x2c(r26)
/* 800A1BCC 0009ECAC  C0 3A 00 2C */	lfs f1, 0x2c(r26)
/* 800A1BD0 0009ECB0  C0 02 92 A8 */	lfs f0, "@1331"@sda21(r2)
/* 800A1BD4 0009ECB4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A1BD8 0009ECB8  40 81 00 18 */	ble .L_800A1BF0
/* 800A1BDC 0009ECBC  C0 02 92 80 */	lfs f0, "@948"@sda21(r2)
/* 800A1BE0 0009ECC0  38 7A 00 20 */	addi r3, r26, 0x20
/* 800A1BE4 0009ECC4  EC 20 08 24 */	fdivs f1, f0, f1
/* 800A1BE8 0009ECC8  4B F7 9D 51 */	bl xVec3SMulBy__FP5xVec3f
/* 800A1BEC 0009ECCC  48 00 00 18 */	b .L_800A1C04
.L_800A1BF0:
/* 800A1BF0 0009ECD0  C0 22 92 30 */	lfs f1, "@672"@sda21(r2)
/* 800A1BF4 0009ECD4  38 7A 00 20 */	addi r3, r26, 0x20
/* 800A1BF8 0009ECD8  FC 40 08 90 */	fmr f2, f1
/* 800A1BFC 0009ECDC  FC 60 08 90 */	fmr f3, f1
/* 800A1C00 0009ECE0  4B F6 D3 FD */	bl xVec3Init__FP5xVec3fff
.L_800A1C04:
/* 800A1C04 0009ECE4  C0 3A 00 2C */	lfs f1, 0x2c(r26)
/* 800A1C08 0009ECE8  C0 0D 82 98 */	lfs f0, sLFuncScalePerLength@sda21(r13)
/* 800A1C0C 0009ECEC  EC 01 00 32 */	fmuls f0, f1, f0
/* 800A1C10 0009ECF0  D0 1A 00 30 */	stfs f0, 0x30(r26)
/* 800A1C14 0009ECF4  C0 1A 00 30 */	lfs f0, 0x30(r26)
/* 800A1C18 0009ECF8  C0 2D 82 90 */	lfs f1, sLFuncMinScale@sda21(r13)
/* 800A1C1C 0009ECFC  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 800A1C20 0009ED00  40 80 00 08 */	bge .L_800A1C28
/* 800A1C24 0009ED04  D0 3A 00 30 */	stfs f1, 0x30(r26)
.L_800A1C28:
/* 800A1C28 0009ED08  C0 1A 00 30 */	lfs f0, 0x30(r26)
/* 800A1C2C 0009ED0C  C0 2D 82 94 */	lfs f1, sLFuncMaxScale@sda21(r13)
/* 800A1C30 0009ED10  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 800A1C34 0009ED14  40 81 00 08 */	ble .L_800A1C3C
/* 800A1C38 0009ED18  D0 3A 00 30 */	stfs f1, 0x30(r26)
.L_800A1C3C:
/* 800A1C3C 0009ED1C  C0 3A 00 2C */	lfs f1, 0x2c(r26)
/* 800A1C40 0009ED20  C0 0D 82 A0 */	lfs f0, sLFuncSpanPerLength@sda21(r13)
/* 800A1C44 0009ED24  EC 01 00 32 */	fmuls f0, f1, f0
/* 800A1C48 0009ED28  D0 1A 00 48 */	stfs f0, 0x48(r26)
/* 800A1C4C 0009ED2C  C0 1A 00 48 */	lfs f0, 0x48(r26)
/* 800A1C50 0009ED30  C0 2D 82 9C */	lfs f1, sLFuncMinSpan@sda21(r13)
/* 800A1C54 0009ED34  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 800A1C58 0009ED38  40 80 00 08 */	bge .L_800A1C60
/* 800A1C5C 0009ED3C  D0 3A 00 48 */	stfs f1, 0x48(r26)
.L_800A1C60:
/* 800A1C60 0009ED40  C0 1A 00 48 */	lfs f0, 0x48(r26)
/* 800A1C64 0009ED44  D0 1A 00 4C */	stfs f0, 0x4c(r26)
/* 800A1C68 0009ED48  C0 3A 00 24 */	lfs f1, 0x24(r26)
/* 800A1C6C 0009ED4C  C0 02 92 78 */	lfs f0, "@946"@sda21(r2)
/* 800A1C70 0009ED50  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A1C74 0009ED54  41 81 00 10 */	bgt .L_800A1C84
/* 800A1C78 0009ED58  C0 02 92 7C */	lfs f0, "@947"@sda21(r2)
/* 800A1C7C 0009ED5C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A1C80 0009ED60  40 80 00 1C */	bge .L_800A1C9C
.L_800A1C84:
/* 800A1C84 0009ED64  C0 42 92 30 */	lfs f2, "@672"@sda21(r2)
/* 800A1C88 0009ED68  38 7A 00 54 */	addi r3, r26, 0x54
/* 800A1C8C 0009ED6C  C0 22 92 80 */	lfs f1, "@948"@sda21(r2)
/* 800A1C90 0009ED70  FC 60 10 90 */	fmr f3, f2
/* 800A1C94 0009ED74  4B F6 D3 69 */	bl xVec3Init__FP5xVec3fff
/* 800A1C98 0009ED78  48 00 00 4C */	b .L_800A1CE4
.L_800A1C9C:
/* 800A1C9C 0009ED7C  C0 1A 00 20 */	lfs f0, 0x20(r26)
/* 800A1CA0 0009ED80  38 7A 00 54 */	addi r3, r26, 0x54
/* 800A1CA4 0009ED84  7C 64 1B 78 */	mr r4, r3
/* 800A1CA8 0009ED88  EC 00 00 72 */	fmuls f0, f0, f1
/* 800A1CAC 0009ED8C  FC 00 00 50 */	fneg f0, f0
/* 800A1CB0 0009ED90  D0 1A 00 54 */	stfs f0, 0x54(r26)
/* 800A1CB4 0009ED94  C0 3A 00 28 */	lfs f1, 0x28(r26)
/* 800A1CB8 0009ED98  C0 1A 00 20 */	lfs f0, 0x20(r26)
/* 800A1CBC 0009ED9C  EC 21 00 72 */	fmuls f1, f1, f1
/* 800A1CC0 0009EDA0  EC 00 00 32 */	fmuls f0, f0, f0
/* 800A1CC4 0009EDA4  EC 01 00 2A */	fadds f0, f1, f0
/* 800A1CC8 0009EDA8  D0 1A 00 58 */	stfs f0, 0x58(r26)
/* 800A1CCC 0009EDAC  C0 3A 00 28 */	lfs f1, 0x28(r26)
/* 800A1CD0 0009EDB0  C0 1A 00 24 */	lfs f0, 0x24(r26)
/* 800A1CD4 0009EDB4  EC 01 00 32 */	fmuls f0, f1, f0
/* 800A1CD8 0009EDB8  FC 00 00 50 */	fneg f0, f0
/* 800A1CDC 0009EDBC  D0 1A 00 5C */	stfs f0, 0x5c(r26)
/* 800A1CE0 0009EDC0  4B FA C6 11 */	bl xVec3Normalize__FP5xVec3PC5xVec3
.L_800A1CE4:
/* 800A1CE4 0009EDC4  E3 E1 00 78 */	psq_l f31, 0x78(r1), 0, qr0
/* 800A1CE8 0009EDC8  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 800A1CEC 0009EDCC  E3 C1 00 68 */	psq_l f30, 0x68(r1), 0, qr0
/* 800A1CF0 0009EDD0  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 800A1CF4 0009EDD4  BB 01 00 40 */	lmw r24, 0x40(r1)
/* 800A1CF8 0009EDD8  80 01 00 84 */	lwz r0, 0x84(r1)
/* 800A1CFC 0009EDDC  7C 08 03 A6 */	mtlr r0
/* 800A1D00 0009EDE0  38 21 00 80 */	addi r1, r1, 0x80
/* 800A1D04 0009EDE4  4E 80 00 20 */	blr
.endfn zLightningModifyEndpoints__FP10zLightningP5xVec3P5xVec3

# 0x800A1D08 - 0x800A1D18
.section .text, "ax", unique, 1
.balign 4

# xDebugAddTweak(const char*, unsigned char*, unsigned char, unsigned char, const tweak_callback*, void*, unsigned int)
.fn xDebugAddTweak__FPCcPUcUcUcPC14tweak_callbackPvUi, weak
/* 800A1D08 0009EDE8  4E 80 00 20 */	blr
.endfn xDebugAddTweak__FPCcPUcUcUcPC14tweak_callbackPvUi

# xDebugAddFlagTweak(const char*, unsigned int*, unsigned int, const tweak_callback*, void*, unsigned int)
.fn xDebugAddFlagTweak__FPCcPUiUiPC14tweak_callbackPvUi, weak
/* 800A1D0C 0009EDEC  4E 80 00 20 */	blr
.endfn xDebugAddFlagTweak__FPCcPUiUiPC14tweak_callbackPvUi

# xDebugAddSelectTweak(const char*, unsigned int*, const char**, const unsigned int*, unsigned int, const tweak_callback*, void*, unsigned int)
.fn xDebugAddSelectTweak__FPCcPUiPPCcPCUiUiPC14tweak_callbackPvUi, weak
/* 800A1D10 0009EDF0  4E 80 00 20 */	blr
.endfn xDebugAddSelectTweak__FPCcPUiPPCcPCUiUiPC14tweak_callbackPvUi

# xDebugAddTweak(const char*, short*, short, short, const tweak_callback*, void*, unsigned int)
.fn xDebugAddTweak__FPCcPsssPC14tweak_callbackPvUi, weak
/* 800A1D14 0009EDF4  4E 80 00 20 */	blr
.endfn xDebugAddTweak__FPCcPsssPC14tweak_callbackPvUi

# 0x8025CD50 - 0x8025D218
.rodata
.balign 8

.obj "@stringBase0", local
	.4byte 0x4C696E65
	.4byte 0x00526F74
	.4byte 0x6174696E
	.4byte 0x67005A65
	.4byte 0x75730046
	.4byte 0x756E6300
	.4byte 0x4C696768
	.4byte 0x746E696E
	.4byte 0x677C0154
	.4byte 0x79706520
	.4byte 0x496E666F
	.4byte 0x004C6967
	.4byte 0x68746E69
	.4byte 0x6E677C01
	.4byte 0x54797065
	.4byte 0x20496E66
	.4byte 0x6F7C5365
	.4byte 0x74757020
	.4byte 0x44656772
	.4byte 0x65657300
	.4byte 0x4C696768
	.4byte 0x746E696E
	.4byte 0x677C0154
	.4byte 0x79706520
	.4byte 0x496E666F
	.4byte 0x7C4D6F76
	.4byte 0x65204465
	.4byte 0x67726565
	.4byte 0x73004C69
	.4byte 0x6768746E
	.4byte 0x696E677C
	.4byte 0x01547970
	.4byte 0x6520496E
.L_8025CDD4:
	.4byte 0x666F7C4E
	.4byte 0x6F726D61
	.4byte 0x6C204F66
	.4byte 0x66736574
	.4byte 0x004C6967
	.4byte 0x68746E69
	.4byte 0x6E677C01
	.4byte 0x54797065
	.4byte 0x20496E66
	.4byte 0x6F7C4261
	.4byte 0x636B204F
	.4byte 0x66667365
	.4byte 0x74004C69
	.4byte 0x6768746E
	.4byte 0x696E677C
	.4byte 0x01547970
	.4byte 0x6520496E
	.4byte 0x666F7C53
	.4byte 0x69646520
	.4byte 0x4F666673
	.4byte 0x65740050
	.4byte 0x4152454D
	.4byte 0x49545F45
	.4byte 0x475F5350
	.4byte 0x41524B00
	.4byte 0x4C494748
	.4byte 0x544E494E
	.4byte 0x47004C69
	.4byte 0x6768746E
	.4byte 0x696E677C
	.4byte 0x0101476F
	.4byte 0x00537461
	.4byte 0x7274204C
	.4byte 0x69676874
	.4byte 0x6E696E67
	.4byte 0x004C6967
	.4byte 0x68746E69
	.4byte 0x6E677C01
.L_8025CE6C:
	.4byte 0x476C6F62
	.4byte 0x616C737C
	.4byte 0x01014A65
	.4byte 0x726B4672
	.4byte 0x65717565
	.4byte 0x6E637900
	.4byte 0x4C696768
	.4byte 0x746E696E
	.4byte 0x677C0147
	.4byte 0x6C6F6261
	.4byte 0x6C737C01
	.4byte 0x01536869
	.4byte 0x66745370
	.4byte 0x65656400
	.4byte 0x4C696768
	.4byte 0x746E696E
	.4byte 0x677C0147
	.4byte 0x6C6F6261
	.4byte 0x6C737C01
	.4byte 0x024D696E
	.4byte 0x50537465
	.4byte 0x70004C69
	.4byte 0x6768746E
	.4byte 0x696E677C
	.4byte 0x01476C6F
	.4byte 0x62616C73
	.4byte 0x7C01034D
	.4byte 0x61785053
	.4byte 0x74657000
	.4byte 0x4C696768
	.4byte 0x746E696E
	.4byte 0x677C0147
	.4byte 0x6C6F6261
	.4byte 0x6C737C01
	.4byte 0x034D696E
	.4byte 0x5363616C
	.4byte 0x65004C69
	.4byte 0x6768746E
	.4byte 0x696E677C
	.4byte 0x01476C6F
	.4byte 0x62616C73
	.4byte 0x7C02014D
	.4byte 0x61785363
	.4byte 0x616C6500
	.4byte 0x4C696768
	.4byte 0x746E696E
	.4byte 0x677C0147
	.4byte 0x6C6F6261
	.4byte 0x6C737C02
	.4byte 0x01536361
	.4byte 0x6C655065
	.4byte 0x724C656E
	.4byte 0x67746800
	.4byte 0x4C696768
	.4byte 0x746E696E
	.4byte 0x677C0147
	.4byte 0x6C6F6261
	.4byte 0x6C737C02
	.4byte 0x024D696E
	.4byte 0x5370616E
	.4byte 0x004C6967
	.4byte 0x68746E69
	.4byte 0x6E677C01
	.4byte 0x476C6F62
	.4byte 0x616C737C
	.4byte 0x02025370
	.4byte 0x616E5065
	.4byte 0x724C656E
	.4byte 0x67746800
	.4byte 0x4C696768
	.4byte 0x746E696E
	.4byte 0x677C0147
	.4byte 0x6C6F6261
	.4byte 0x6C737C02
	.4byte 0x03536C6F
	.4byte 0x70655261
	.4byte 0x6E676500
	.4byte 0x4C696768
	.4byte 0x746E696E
	.4byte 0x677C0147
	.4byte 0x6C6F6261
	.4byte 0x6C737C02
	.4byte 0x03555653
	.4byte 0x70656564
	.4byte 0x004C6967
	.4byte 0x68746E69
	.4byte 0x6E677C01
	.4byte 0x54696D65
	.4byte 0x004C6967
	.4byte 0x68746E69
	.4byte 0x6E677C01
	.4byte 0x546F7461
	.4byte 0x6C20506F
	.4byte 0x696E7473
	.4byte 0x004C6967
	.4byte 0x68746E69
	.4byte 0x6E677C01
	.4byte 0x54797065
	.4byte 0x004C6967
	.4byte 0x68746E69
	.4byte 0x6E677C02
	.4byte 0x466C6167
	.4byte 0x7C526F74
	.4byte 0x20536361
	.4byte 0x6C617200
	.4byte 0x4C696768
	.4byte 0x746E696E
	.4byte 0x677C0246
	.4byte 0x6C61677C
	.4byte 0x4E6F2046
	.4byte 0x61646520
	.4byte 0x4F757400
	.4byte 0x4C696768
	.4byte 0x746E696E
	.4byte 0x677C0246
	.4byte 0x6C61677C
	.4byte 0x41726300
	.4byte 0x4C696768
	.4byte 0x746E696E
	.4byte 0x677C0246
	.4byte 0x6C61677C
	.4byte 0x56657274
	.4byte 0x6963616C
	.4byte 0x204F7269
	.4byte 0x656E7461
	.4byte 0x74696F6E
	.4byte 0x004C6967
	.4byte 0x68746E69
	.4byte 0x6E677C02
	.4byte 0x466C6167
	.4byte 0x7C546170
	.4byte 0x65722054
	.4byte 0x6869636B
	.4byte 0x6E657373
	.4byte 0x20417420
	.4byte 0x456E6400
	.4byte 0x4C696768
.L_8025D090:
	.4byte 0x746E696E
	.4byte 0x677C0246
	.4byte 0x6C61677C
	.4byte 0x54617065
	.4byte 0x72205468
	.4byte 0x69636B6E
	.4byte 0x65737320
	.4byte 0x41742053
	.4byte 0x74617274
	.4byte 0x004C6967
	.4byte 0x68746E69
	.4byte 0x6E677C02
	.4byte 0x53746172
	.4byte 0x747C7800
	.4byte 0x4C696768
	.4byte 0x746E696E
	.4byte 0x677C0253
	.4byte 0x74617274
	.4byte 0x7C79004C
	.4byte 0x69676874
	.4byte 0x6E696E67
	.4byte 0x7C025374
	.4byte 0x6172747C
	.4byte 0x7A004C69
	.4byte 0x6768746E
	.4byte 0x696E677C
	.4byte 0x03456E64
	.4byte 0x7C78004C
	.4byte 0x69676874
	.4byte 0x6E696E67
	.4byte 0x7C03456E
	.4byte 0x647C7900
	.4byte 0x4C696768
	.4byte 0x746E696E
	.4byte 0x677C0345
	.4byte 0x6E647C7A
	.4byte 0x004C6967
	.4byte 0x68746E69
	.4byte 0x6E677C04
	.4byte 0x436F6C6F
	.4byte 0x727C0152
	.4byte 0x004C6967
	.4byte 0x68746E69
	.4byte 0x6E677C04
	.4byte 0x436F6C6F
	.4byte 0x727C0247
	.4byte 0x004C6967
	.4byte 0x68746E69
	.4byte 0x6E677C04
	.4byte 0x436F6C6F
	.4byte 0x727C0342
	.4byte 0x004C6967
	.4byte 0x68746E69
	.4byte 0x6E677C04
.L_8025D168:
	.4byte 0x436F6C6F
	.4byte 0x727C0441
	.4byte 0x004C6967
	.4byte 0x68746E69
	.4byte 0x6E677C4C
	.4byte 0x656E6774
	.4byte 0x68737C52
	.4byte 0x6F742052
	.4byte 0x61646975
	.4byte 0x73004C69
	.4byte 0x6768746E
	.4byte 0x696E677C
	.4byte 0x4C656E67
	.4byte 0x7468737C
	.4byte 0x41726320
	.4byte 0x48656967
	.4byte 0x6874004C
	.4byte 0x69676874
	.4byte 0x6E696E67
	.4byte 0x7C4C656E
	.4byte 0x67746873
	.4byte 0x7C546869
	.4byte 0x636B6E65
	.4byte 0x7373004C
	.4byte 0x69676874
	.4byte 0x6E696E67
	.4byte 0x7C52616E
	.4byte 0x646F6D6E
	.4byte 0x6573737C
	.4byte 0x52616E64
	.4byte 0x20526164
	.4byte 0x69757300
	.4byte 0x5820746F
	.4byte 0x20746573
	.4byte 0x74206C69
	.4byte 0x6768746E
	.4byte 0x696E670A
	.4byte 0x00202020
	.4byte 0x20202020
	.4byte 0x20202020
	.4byte 0x20202020
	.4byte 0x00310030
	.4byte 0x002D000A
	.byte 0x00
.endobj "@stringBase0"
	.byte 0x00, 0x00, 0x00

# 0x8028FB60 - 0x8028FB70
.data
.balign 8

.obj lightning_type_names, global
	.4byte "@stringBase0"
	.4byte "@stringBase0"+0x5
	.4byte "@stringBase0"+0xE
	.4byte "@stringBase0"+0x13
.endobj lightning_type_names

# 0x802E90C8 - 0x802EA990
.section .bss, "wa", @nobits
.balign 8

.obj sLightning, local
.sym ...bss.0, local
	.skip 0xC0
.endobj sLightning

.obj sLFuncX, local
	.skip 0x140
.endobj sLFuncX

.obj sLFuncY, local
	.skip 0x140
.endobj sLFuncY

.obj sLFuncZ, local
	.skip 0x140
.endobj sLFuncZ

.obj sLFuncVal, local
	.skip 0x78
.endobj sLFuncVal

.obj sLFuncSlope, local
	.skip 0xF0
.endobj sLFuncSlope

.obj sLFuncEnd, local
	.skip 0x28
.endobj sLFuncEnd

.obj sTweakStart, local
	.skip 0xC
.endobj sTweakStart

.obj sTweakEnd, local
	.skip 0xC
.endobj sTweakEnd

.obj sLightningStartCB, local
	.skip 0x28
.endobj sLightningStartCB

.obj sLightningChangeCB, local
	.skip 0x28
.endobj sLightningChangeCB

.obj sPoint, local
	.skip 0x3C
.endobj sPoint

.obj sSize, local
	.skip 0x14
.endobj sSize

.obj sStripVert$1341, local
	.skip 0x1200
.endobj sStripVert$1341

# 0x803CAB80 - 0x803CABB0
.section .sdata, "wa"
.balign 8

.obj sLFuncJerkFreq, local
	.4byte 0x41A00000
.endobj sLFuncJerkFreq

.obj sLFuncShift, local
	.4byte 0x41700000
.endobj sLFuncShift

.obj sLFuncMaxPStep, local
	.4byte 0x3D800000
.endobj sLFuncMaxPStep

.obj sLFuncMinPStep, local
	.4byte 0x3D800000
.endobj sLFuncMinPStep

.obj sLFuncMinScale, local
	.4byte 0x3E99999A
.endobj sLFuncMinScale

.obj sLFuncMaxScale, local
	.4byte 0x3F800000
.endobj sLFuncMaxScale

.obj sLFuncScalePerLength, local
	.4byte 0x3E19999A
.endobj sLFuncScalePerLength

.obj sLFuncMinSpan, local
	.4byte 0x40400000
.endobj sLFuncMinSpan

.obj sLFuncSpanPerLength, local
	.4byte 0x3FC00000
.endobj sLFuncSpanPerLength

.obj sLFuncSlopeRange, local
	.4byte 0x40000000
.endobj sLFuncSlopeRange

.obj sLFuncUVSpeed, local
	.4byte 0x3F800000
.endobj sLFuncUVSpeed
	.4byte 0x00000000

# 0x803CB8F8 - 0x803CB908
.section .sbss, "wa", @nobits
.balign 8

.obj sSparkEmitter, local
	.skip 0x4
.endobj sSparkEmitter

.obj sLightningRaster, local
	.skip 0x4
.endobj sLightningRaster

.obj sLFuncJerkTime, local
	.skip 0x4
.endobj sLFuncJerkTime

.obj sLFuncUVOffset, local
	.skip 0x4
.endobj sLFuncUVOffset

# 0x803CDBA0 - 0x803CDC40
.section .sdata2, "a"
.balign 8

.obj "@668", local
	.4byte 0xCE6E6B28
.endobj "@668"

.obj "@669", local
	.4byte 0x4E6E6B28
.endobj "@669"

.obj "@670", local
	.4byte 0xC2C80000
.endobj "@670"

.obj "@671", local
	.4byte 0x42C80000
.endobj "@671"

.obj "@672", local
	.4byte 0x00000000
.endobj "@672"

.obj "@760", local
	.4byte 0x40000000
.endobj "@760"

.obj "@761", local
	.4byte 0x3F000000
.endobj "@761"

.obj "@762", local
	.4byte 0x3E800000
.endobj "@762"

.obj "@763", local
	.4byte 0x41200000
.endobj "@763"

.obj "@764", local
	.4byte 0x40A00000
.endobj "@764"

.obj "@765", local
	.4byte 0xC0A00000
.endobj "@765"

.obj "@766", local
	.4byte 0x40C00000
.endobj "@766"

.obj "@767", local
	.4byte 0x3E19999A
.endobj "@767"

.obj "@768", local
	.4byte 0x41000000
.endobj "@768"

.obj "@769", local
	.4byte 0xC51C4000
.endobj "@769"

.obj "@770", local
	.4byte 0x42840000
.endobj "@770"

.obj "@771", local
	.4byte 0x3F400000
.endobj "@771"

.obj "@772", local
	.4byte 0x3E4CCCCD
.endobj "@772"

.obj "@773", local
	.4byte 0xC2480000
.endobj "@773"

.obj "@774", local
	.4byte 0x42480000
.endobj "@774"

.obj "@776", local
	.4byte 0x43300000
	.4byte 0x80000000
.endobj "@776"

.obj "@946", local
	.4byte 0x3F7FBE77
.endobj "@946"

.obj "@947", local
	.4byte 0xBF7FBE77
.endobj "@947"

.obj "@948", local
	.4byte 0x3F800000
.endobj "@948"

.obj "@949", local
	.4byte 0x40800000
.endobj "@949"

.obj "@950", local
	.4byte 0x43B40000
.endobj "@950"

.obj "@951", local
	.4byte 0x43340000
.endobj "@951"

.obj "@952", local
	.4byte 0xC3340000
.endobj "@952"

.obj "@953", local
	.4byte 0xC0800000
.endobj "@953"

.obj "@954", local
	.4byte 0xBF800000
.endobj "@954"

.obj "@955", local
	.4byte 0x3DCCCCCD
.endobj "@955"

.obj "@1054", local
	.4byte 0x40490FDB
.endobj "@1054"

.obj "@1105", local
	.4byte 0x41100000
.endobj "@1105"

.obj "@1331", local
	.4byte 0x3727C5AC
.endobj "@1331"

.obj "@1332", local
	.4byte 0xC0000000
.endobj "@1332"

.obj "@1847", local
	.4byte 0x3FC00000
.endobj "@1847"
	.4byte 0x00000000

.obj "@1849", local
	.4byte 0x43300000
	.4byte 0x00000000
.endobj "@1849"
