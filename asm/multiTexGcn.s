.include "macros.inc"
.file "multiTexGcn.c"

# 0x80201DA0 - 0x80201E08
.text
.balign 4

.fn _rpMultiTexturePlatformPluginsAttach, global
/* 80201DA0 001FEE80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80201DA4 001FEE84  7C 08 02 A6 */	mflr r0
/* 80201DA8 001FEE88  90 01 00 14 */	stw r0, 0x14(r1)
/* 80201DAC 001FEE8C  48 00 08 41 */	bl _rpMultiTexturePluginAttach
/* 80201DB0 001FEE90  2C 03 00 00 */	cmpwi r3, 0x0
/* 80201DB4 001FEE94  40 82 00 0C */	bne .L_80201DC0
/* 80201DB8 001FEE98  38 60 00 00 */	li r3, 0x0
/* 80201DBC 001FEE9C  48 00 00 3C */	b .L_80201DF8
.L_80201DC0:
/* 80201DC0 001FEEA0  38 60 00 06 */	li r3, 0x6
/* 80201DC4 001FEEA4  38 80 01 29 */	li r4, 0x129
/* 80201DC8 001FEEA8  38 A0 00 0C */	li r5, 0xc
/* 80201DCC 001FEEAC  48 00 08 91 */	bl _rpMaterialRegisterMultiTexturePlugin
/* 80201DD0 001FEEB0  2C 03 00 00 */	cmpwi r3, 0x0
/* 80201DD4 001FEEB4  40 82 00 0C */	bne .L_80201DE0
/* 80201DD8 001FEEB8  38 60 00 00 */	li r3, 0x0
/* 80201DDC 001FEEBC  48 00 00 1C */	b .L_80201DF8
.L_80201DE0:
/* 80201DE0 001FEEC0  4B FF D9 29 */	bl _rpGameCubeMTDataPluginAttach
/* 80201DE4 001FEEC4  2C 03 00 00 */	cmpwi r3, 0x0
/* 80201DE8 001FEEC8  40 82 00 0C */	bne .L_80201DF4
/* 80201DEC 001FEECC  38 60 00 00 */	li r3, 0x0
/* 80201DF0 001FEED0  48 00 00 08 */	b .L_80201DF8
.L_80201DF4:
/* 80201DF4 001FEED4  4B FF FF 65 */	bl _rpGameCubeMTPipePluginAttach
.L_80201DF8:
/* 80201DF8 001FEED8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80201DFC 001FEEDC  7C 08 03 A6 */	mtlr r0
/* 80201E00 001FEEE0  38 21 00 10 */	addi r1, r1, 0x10
/* 80201E04 001FEEE4  4E 80 00 20 */	blr
.endfn _rpMultiTexturePlatformPluginsAttach