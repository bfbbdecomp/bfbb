.include "macros.inc"
.file "GXBump.c"

# 0x801CE8CC - 0x801CED74
.text
.balign 4

.fn GXSetTevIndirect, global
/* 801CE8CC 001CB9AC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801CE8D0 001CB9B0  38 00 00 00 */	li r0, 0x0
/* 801CE8D4 001CB9B4  50 80 07 BE */	rlwimi r0, r4, 0, 30, 31
/* 801CE8D8 001CB9B8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801CE8DC 001CB9BC  7C 0B 03 78 */	mr r11, r0
/* 801CE8E0 001CB9C0  50 AB 17 3A */	rlwimi r11, r5, 2, 28, 29
/* 801CE8E4 001CB9C4  81 81 00 3C */	lwz r12, 0x3c(r1)
/* 801CE8E8 001CB9C8  8B E1 00 3B */	lbz r31, 0x3b(r1)
/* 801CE8EC 001CB9CC  50 CB 26 76 */	rlwimi r11, r6, 4, 25, 27
/* 801CE8F0 001CB9D0  80 82 B2 F8 */	lwz r4, __GXData@sda21(r2)
/* 801CE8F4 001CB9D4  51 8B 3D F0 */	rlwimi r11, r12, 7, 23, 24
/* 801CE8F8 001CB9D8  50 EB 4C EC */	rlwimi r11, r7, 9, 19, 22
/* 801CE8FC 001CB9DC  51 0B 6C 24 */	rlwimi r11, r8, 13, 16, 18
/* 801CE900 001CB9E0  51 2B 83 5E */	rlwimi r11, r9, 16, 13, 15
/* 801CE904 001CB9E4  53 EB 9B 18 */	rlwimi r11, r31, 19, 12, 12
/* 801CE908 001CB9E8  38 00 00 61 */	li r0, 0x61
/* 801CE90C 001CB9EC  3C A0 CC 01 */	lis r5, 0xcc01
/* 801CE910 001CB9F0  98 05 80 00 */	stb r0, -0x8000(r5)
/* 801CE914 001CB9F4  38 03 00 10 */	addi r0, r3, 0x10
/* 801CE918 001CB9F8  51 4B A2 D6 */	rlwimi r11, r10, 20, 11, 11
/* 801CE91C 001CB9FC  50 0B C0 0E */	rlwimi r11, r0, 24, 0, 7
/* 801CE920 001CBA00  91 65 80 00 */	stw r11, -0x8000(r5)
/* 801CE924 001CBA04  38 00 00 00 */	li r0, 0x0
/* 801CE928 001CBA08  B0 04 00 02 */	sth r0, 0x2(r4)
/* 801CE92C 001CBA0C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801CE930 001CBA10  38 21 00 30 */	addi r1, r1, 0x30
/* 801CE934 001CBA14  4E 80 00 20 */	blr
.endfn GXSetTevIndirect

.fn GXSetIndTexMtx, global
/* 801CE938 001CBA18  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 801CE93C 001CBA1C  2C 03 00 08 */	cmpwi r3, 0x8
/* 801CE940 001CBA20  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 801CE944 001CBA24  93 C1 00 68 */	stw r30, 0x68(r1)
/* 801CE948 001CBA28  93 A1 00 64 */	stw r29, 0x64(r1)
/* 801CE94C 001CBA2C  41 82 00 44 */	beq .L_801CE990
/* 801CE950 001CBA30  40 80 00 1C */	bge .L_801CE96C
/* 801CE954 001CBA34  2C 03 00 04 */	cmpwi r3, 0x4
/* 801CE958 001CBA38  41 82 00 38 */	beq .L_801CE990
/* 801CE95C 001CBA3C  40 80 00 24 */	bge .L_801CE980
/* 801CE960 001CBA40  2C 03 00 01 */	cmpwi r3, 0x1
/* 801CE964 001CBA44  40 80 00 14 */	bge .L_801CE978
/* 801CE968 001CBA48  48 00 00 28 */	b .L_801CE990
.L_801CE96C:
/* 801CE96C 001CBA4C  2C 03 00 0C */	cmpwi r3, 0xc
/* 801CE970 001CBA50  40 80 00 20 */	bge .L_801CE990
/* 801CE974 001CBA54  48 00 00 14 */	b .L_801CE988
.L_801CE978:
/* 801CE978 001CBA58  38 03 FF FF */	addi r0, r3, -0x1
/* 801CE97C 001CBA5C  48 00 00 18 */	b .L_801CE994
.L_801CE980:
/* 801CE980 001CBA60  38 03 FF FB */	addi r0, r3, -0x5
/* 801CE984 001CBA64  48 00 00 10 */	b .L_801CE994
.L_801CE988:
/* 801CE988 001CBA68  38 03 FF F7 */	addi r0, r3, -0x9
/* 801CE98C 001CBA6C  48 00 00 08 */	b .L_801CE994
.L_801CE990:
/* 801CE990 001CBA70  38 00 00 00 */	li r0, 0x0
.L_801CE994:
/* 801CE994 001CBA74  C0 42 B3 98 */	lfs f2, "@149"@sda21(r2)
/* 801CE998 001CBA78  1F E0 00 03 */	mulli r31, r0, 0x3
/* 801CE99C 001CBA7C  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 801CE9A0 001CBA80  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 801CE9A4 001CBA84  EC 22 00 72 */	fmuls f1, f2, f1
/* 801CE9A8 001CBA88  39 45 00 11 */	addi r10, r5, 0x11
/* 801CE9AC 001CBA8C  EC 02 00 32 */	fmuls f0, f2, f0
/* 801CE9B0 001CBA90  7D 4A 07 74 */	extsb r10, r10
/* 801CE9B4 001CBA94  39 80 00 61 */	li r12, 0x61
/* 801CE9B8 001CBA98  FC 20 08 1E */	fctiwz f1, f1
/* 801CE9BC 001CBA9C  3D 60 CC 01 */	lis r11, 0xcc01
/* 801CE9C0 001CBAA0  FC 00 00 1E */	fctiwz f0, f0
/* 801CE9C4 001CBAA4  3B C0 00 00 */	li r30, 0x0
/* 801CE9C8 001CBAA8  38 1F 00 06 */	addi r0, r31, 0x6
/* 801CE9CC 001CBAAC  D8 21 00 58 */	stfd f1, 0x58(r1)
/* 801CE9D0 001CBAB0  55 48 F7 BE */	extrwi r8, r10, 2, 28
/* 801CE9D4 001CBAB4  38 FF 00 07 */	addi r7, r31, 0x7
/* 801CE9D8 001CBAB8  80 62 B2 F8 */	lwz r3, __GXData@sda21(r2)
/* 801CE9DC 001CBABC  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 801CE9E0 001CBAC0  81 21 00 5C */	lwz r9, 0x5c(r1)
/* 801CE9E4 001CBAC4  3B A0 00 00 */	li r29, 0x0
/* 801CE9E8 001CBAC8  80 C1 00 54 */	lwz r6, 0x54(r1)
/* 801CE9EC 001CBACC  38 BF 00 08 */	addi r5, r31, 0x8
/* 801CE9F0 001CBAD0  51 3E 05 7E */	rlwimi r30, r9, 0, 21, 31
/* 801CE9F4 001CBAD4  39 3E 00 00 */	addi r9, r30, 0x0
/* 801CE9F8 001CBAD8  99 8B 80 00 */	stb r12, -0x8000(r11)
/* 801CE9FC 001CBADC  50 C9 5A A8 */	rlwimi r9, r6, 11, 10, 20
/* 801CEA00 001CBAE0  51 49 B2 12 */	rlwimi r9, r10, 22, 8, 9
/* 801CEA04 001CBAE4  50 09 C0 0E */	rlwimi r9, r0, 24, 0, 7
/* 801CEA08 001CBAE8  91 2B 80 00 */	stw r9, -0x8000(r11)
/* 801CEA0C 001CBAEC  55 46 E7 BE */	extrwi r6, r10, 2, 26
/* 801CEA10 001CBAF0  3B C0 00 00 */	li r30, 0x0
/* 801CEA14 001CBAF4  C0 24 00 04 */	lfs f1, 0x4(r4)
/* 801CEA18 001CBAF8  38 00 00 00 */	li r0, 0x0
/* 801CEA1C 001CBAFC  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 801CEA20 001CBB00  EC 22 00 72 */	fmuls f1, f2, f1
/* 801CEA24 001CBB04  EC 02 00 32 */	fmuls f0, f2, f0
/* 801CEA28 001CBB08  99 8B 80 00 */	stb r12, -0x8000(r11)
/* 801CEA2C 001CBB0C  FC 20 08 1E */	fctiwz f1, f1
/* 801CEA30 001CBB10  FC 00 00 1E */	fctiwz f0, f0
/* 801CEA34 001CBB14  D8 21 00 48 */	stfd f1, 0x48(r1)
/* 801CEA38 001CBB18  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 801CEA3C 001CBB1C  81 41 00 4C */	lwz r10, 0x4c(r1)
/* 801CEA40 001CBB20  81 21 00 44 */	lwz r9, 0x44(r1)
/* 801CEA44 001CBB24  51 5D 05 7E */	rlwimi r29, r10, 0, 21, 31
/* 801CEA48 001CBB28  51 3D 5A A8 */	rlwimi r29, r9, 11, 10, 20
/* 801CEA4C 001CBB2C  51 1D B2 12 */	rlwimi r29, r8, 22, 8, 9
/* 801CEA50 001CBB30  50 FD C0 0E */	rlwimi r29, r7, 24, 0, 7
/* 801CEA54 001CBB34  93 AB 80 00 */	stw r29, -0x8000(r11)
/* 801CEA58 001CBB38  C0 24 00 08 */	lfs f1, 0x8(r4)
/* 801CEA5C 001CBB3C  C0 04 00 14 */	lfs f0, 0x14(r4)
/* 801CEA60 001CBB40  EC 22 00 72 */	fmuls f1, f2, f1
/* 801CEA64 001CBB44  EC 02 00 32 */	fmuls f0, f2, f0
/* 801CEA68 001CBB48  99 8B 80 00 */	stb r12, -0x8000(r11)
/* 801CEA6C 001CBB4C  FC 20 08 1E */	fctiwz f1, f1
/* 801CEA70 001CBB50  FC 00 00 1E */	fctiwz f0, f0
/* 801CEA74 001CBB54  D8 21 00 38 */	stfd f1, 0x38(r1)
/* 801CEA78 001CBB58  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 801CEA7C 001CBB5C  80 E1 00 3C */	lwz r7, 0x3c(r1)
/* 801CEA80 001CBB60  80 81 00 34 */	lwz r4, 0x34(r1)
/* 801CEA84 001CBB64  50 FE 05 7E */	rlwimi r30, r7, 0, 21, 31
/* 801CEA88 001CBB68  50 9E 5A A8 */	rlwimi r30, r4, 11, 10, 20
/* 801CEA8C 001CBB6C  50 DE B2 12 */	rlwimi r30, r6, 22, 8, 9
/* 801CEA90 001CBB70  50 BE C0 0E */	rlwimi r30, r5, 24, 0, 7
/* 801CEA94 001CBB74  93 CB 80 00 */	stw r30, -0x8000(r11)
/* 801CEA98 001CBB78  B0 03 00 02 */	sth r0, 0x2(r3)
/* 801CEA9C 001CBB7C  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 801CEAA0 001CBB80  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 801CEAA4 001CBB84  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 801CEAA8 001CBB88  38 21 00 70 */	addi r1, r1, 0x70
/* 801CEAAC 001CBB8C  4E 80 00 20 */	blr
.endfn GXSetIndTexMtx

.fn GXSetIndTexCoordScale, global
/* 801CEAB0 001CBB90  2C 03 00 02 */	cmpwi r3, 0x2
/* 801CEAB4 001CBB94  41 82 00 AC */	beq .L_801CEB60
/* 801CEAB8 001CBB98  40 80 00 14 */	bge .L_801CEACC
/* 801CEABC 001CBB9C  2C 03 00 00 */	cmpwi r3, 0x0
/* 801CEAC0 001CBBA0  41 82 00 18 */	beq .L_801CEAD8
/* 801CEAC4 001CBBA4  40 80 00 58 */	bge .L_801CEB1C
/* 801CEAC8 001CBBA8  48 00 01 1C */	b .L_801CEBE4
.L_801CEACC:
/* 801CEACC 001CBBAC  2C 03 00 04 */	cmpwi r3, 0x4
/* 801CEAD0 001CBBB0  40 80 01 14 */	bge .L_801CEBE4
/* 801CEAD4 001CBBB4  48 00 00 D0 */	b .L_801CEBA4
.L_801CEAD8:
/* 801CEAD8 001CBBB8  81 02 B2 F8 */	lwz r8, __GXData@sda21(r2)
/* 801CEADC 001CBBBC  38 C0 00 25 */	li r6, 0x25
/* 801CEAE0 001CBBC0  38 00 00 61 */	li r0, 0x61
/* 801CEAE4 001CBBC4  80 E8 01 28 */	lwz r7, 0x128(r8)
/* 801CEAE8 001CBBC8  50 87 07 3E */	rlwimi r7, r4, 0, 28, 31
/* 801CEAEC 001CBBCC  3C 60 CC 01 */	lis r3, 0xcc01
/* 801CEAF0 001CBBD0  90 E8 01 28 */	stw r7, 0x128(r8)
/* 801CEAF4 001CBBD4  80 88 01 28 */	lwz r4, 0x128(r8)
/* 801CEAF8 001CBBD8  50 A4 26 36 */	rlwimi r4, r5, 4, 24, 27
/* 801CEAFC 001CBBDC  90 88 01 28 */	stw r4, 0x128(r8)
/* 801CEB00 001CBBE0  80 88 01 28 */	lwz r4, 0x128(r8)
/* 801CEB04 001CBBE4  50 C4 C0 0E */	rlwimi r4, r6, 24, 0, 7
/* 801CEB08 001CBBE8  90 88 01 28 */	stw r4, 0x128(r8)
/* 801CEB0C 001CBBEC  98 03 80 00 */	stb r0, -0x8000(r3)
/* 801CEB10 001CBBF0  80 08 01 28 */	lwz r0, 0x128(r8)
/* 801CEB14 001CBBF4  90 03 80 00 */	stw r0, -0x8000(r3)
/* 801CEB18 001CBBF8  48 00 00 CC */	b .L_801CEBE4
.L_801CEB1C:
/* 801CEB1C 001CBBFC  81 02 B2 F8 */	lwz r8, __GXData@sda21(r2)
/* 801CEB20 001CBC00  38 C0 00 25 */	li r6, 0x25
/* 801CEB24 001CBC04  38 00 00 61 */	li r0, 0x61
/* 801CEB28 001CBC08  80 E8 01 28 */	lwz r7, 0x128(r8)
/* 801CEB2C 001CBC0C  50 87 45 2E */	rlwimi r7, r4, 8, 20, 23
/* 801CEB30 001CBC10  3C 60 CC 01 */	lis r3, 0xcc01
/* 801CEB34 001CBC14  90 E8 01 28 */	stw r7, 0x128(r8)
/* 801CEB38 001CBC18  80 88 01 28 */	lwz r4, 0x128(r8)
/* 801CEB3C 001CBC1C  50 A4 64 26 */	rlwimi r4, r5, 12, 16, 19
/* 801CEB40 001CBC20  90 88 01 28 */	stw r4, 0x128(r8)
/* 801CEB44 001CBC24  80 88 01 28 */	lwz r4, 0x128(r8)
/* 801CEB48 001CBC28  50 C4 C0 0E */	rlwimi r4, r6, 24, 0, 7
/* 801CEB4C 001CBC2C  90 88 01 28 */	stw r4, 0x128(r8)
/* 801CEB50 001CBC30  98 03 80 00 */	stb r0, -0x8000(r3)
/* 801CEB54 001CBC34  80 08 01 28 */	lwz r0, 0x128(r8)
/* 801CEB58 001CBC38  90 03 80 00 */	stw r0, -0x8000(r3)
/* 801CEB5C 001CBC3C  48 00 00 88 */	b .L_801CEBE4
.L_801CEB60:
/* 801CEB60 001CBC40  81 02 B2 F8 */	lwz r8, __GXData@sda21(r2)
/* 801CEB64 001CBC44  38 C0 00 26 */	li r6, 0x26
/* 801CEB68 001CBC48  38 00 00 61 */	li r0, 0x61
/* 801CEB6C 001CBC4C  80 E8 01 2C */	lwz r7, 0x12c(r8)
/* 801CEB70 001CBC50  50 87 07 3E */	rlwimi r7, r4, 0, 28, 31
/* 801CEB74 001CBC54  3C 60 CC 01 */	lis r3, 0xcc01
/* 801CEB78 001CBC58  90 E8 01 2C */	stw r7, 0x12c(r8)
/* 801CEB7C 001CBC5C  80 88 01 2C */	lwz r4, 0x12c(r8)
/* 801CEB80 001CBC60  50 A4 26 36 */	rlwimi r4, r5, 4, 24, 27
/* 801CEB84 001CBC64  90 88 01 2C */	stw r4, 0x12c(r8)
/* 801CEB88 001CBC68  80 88 01 2C */	lwz r4, 0x12c(r8)
/* 801CEB8C 001CBC6C  50 C4 C0 0E */	rlwimi r4, r6, 24, 0, 7
/* 801CEB90 001CBC70  90 88 01 2C */	stw r4, 0x12c(r8)
/* 801CEB94 001CBC74  98 03 80 00 */	stb r0, -0x8000(r3)
/* 801CEB98 001CBC78  80 08 01 2C */	lwz r0, 0x12c(r8)
/* 801CEB9C 001CBC7C  90 03 80 00 */	stw r0, -0x8000(r3)
/* 801CEBA0 001CBC80  48 00 00 44 */	b .L_801CEBE4
.L_801CEBA4:
/* 801CEBA4 001CBC84  81 02 B2 F8 */	lwz r8, __GXData@sda21(r2)
/* 801CEBA8 001CBC88  38 C0 00 26 */	li r6, 0x26
/* 801CEBAC 001CBC8C  38 00 00 61 */	li r0, 0x61
/* 801CEBB0 001CBC90  80 E8 01 2C */	lwz r7, 0x12c(r8)
/* 801CEBB4 001CBC94  50 87 45 2E */	rlwimi r7, r4, 8, 20, 23
/* 801CEBB8 001CBC98  3C 60 CC 01 */	lis r3, 0xcc01
/* 801CEBBC 001CBC9C  90 E8 01 2C */	stw r7, 0x12c(r8)
/* 801CEBC0 001CBCA0  80 88 01 2C */	lwz r4, 0x12c(r8)
/* 801CEBC4 001CBCA4  50 A4 64 26 */	rlwimi r4, r5, 12, 16, 19
/* 801CEBC8 001CBCA8  90 88 01 2C */	stw r4, 0x12c(r8)
/* 801CEBCC 001CBCAC  80 88 01 2C */	lwz r4, 0x12c(r8)
/* 801CEBD0 001CBCB0  50 C4 C0 0E */	rlwimi r4, r6, 24, 0, 7
/* 801CEBD4 001CBCB4  90 88 01 2C */	stw r4, 0x12c(r8)
/* 801CEBD8 001CBCB8  98 03 80 00 */	stb r0, -0x8000(r3)
/* 801CEBDC 001CBCBC  80 08 01 2C */	lwz r0, 0x12c(r8)
/* 801CEBE0 001CBCC0  90 03 80 00 */	stw r0, -0x8000(r3)
.L_801CEBE4:
/* 801CEBE4 001CBCC4  80 62 B2 F8 */	lwz r3, __GXData@sda21(r2)
/* 801CEBE8 001CBCC8  38 00 00 00 */	li r0, 0x0
/* 801CEBEC 001CBCCC  B0 03 00 02 */	sth r0, 0x2(r3)
/* 801CEBF0 001CBCD0  4E 80 00 20 */	blr
.endfn GXSetIndTexCoordScale

.fn GXSetIndTexOrder, global
/* 801CEBF4 001CBCD4  2C 05 00 FF */	cmpwi r5, 0xff
/* 801CEBF8 001CBCD8  40 82 00 08 */	bne .L_801CEC00
/* 801CEBFC 001CBCDC  38 A0 00 00 */	li r5, 0x0
.L_801CEC00:
/* 801CEC00 001CBCE0  2C 04 00 FF */	cmpwi r4, 0xff
/* 801CEC04 001CBCE4  40 82 00 08 */	bne .L_801CEC0C
/* 801CEC08 001CBCE8  38 80 00 00 */	li r4, 0x0
.L_801CEC0C:
/* 801CEC0C 001CBCEC  2C 03 00 02 */	cmpwi r3, 0x2
/* 801CEC10 001CBCF0  41 82 00 64 */	beq .L_801CEC74
/* 801CEC14 001CBCF4  40 80 00 14 */	bge .L_801CEC28
/* 801CEC18 001CBCF8  2C 03 00 00 */	cmpwi r3, 0x0
/* 801CEC1C 001CBCFC  41 82 00 18 */	beq .L_801CEC34
/* 801CEC20 001CBD00  40 80 00 34 */	bge .L_801CEC54
/* 801CEC24 001CBD04  48 00 00 8C */	b .L_801CECB0
.L_801CEC28:
/* 801CEC28 001CBD08  2C 03 00 04 */	cmpwi r3, 0x4
/* 801CEC2C 001CBD0C  40 80 00 84 */	bge .L_801CECB0
/* 801CEC30 001CBD10  48 00 00 64 */	b .L_801CEC94
.L_801CEC34:
/* 801CEC34 001CBD14  80 62 B2 F8 */	lwz r3, __GXData@sda21(r2)
/* 801CEC38 001CBD18  80 03 01 20 */	lwz r0, 0x120(r3)
/* 801CEC3C 001CBD1C  50 A0 07 7E */	rlwimi r0, r5, 0, 29, 31
/* 801CEC40 001CBD20  90 03 01 20 */	stw r0, 0x120(r3)
/* 801CEC44 001CBD24  80 03 01 20 */	lwz r0, 0x120(r3)
/* 801CEC48 001CBD28  50 80 1E B8 */	rlwimi r0, r4, 3, 26, 28
/* 801CEC4C 001CBD2C  90 03 01 20 */	stw r0, 0x120(r3)
/* 801CEC50 001CBD30  48 00 00 60 */	b .L_801CECB0
.L_801CEC54:
/* 801CEC54 001CBD34  80 62 B2 F8 */	lwz r3, __GXData@sda21(r2)
/* 801CEC58 001CBD38  80 03 01 20 */	lwz r0, 0x120(r3)
/* 801CEC5C 001CBD3C  50 A0 35 F2 */	rlwimi r0, r5, 6, 23, 25
/* 801CEC60 001CBD40  90 03 01 20 */	stw r0, 0x120(r3)
/* 801CEC64 001CBD44  80 03 01 20 */	lwz r0, 0x120(r3)
/* 801CEC68 001CBD48  50 80 4D 2C */	rlwimi r0, r4, 9, 20, 22
/* 801CEC6C 001CBD4C  90 03 01 20 */	stw r0, 0x120(r3)
/* 801CEC70 001CBD50  48 00 00 40 */	b .L_801CECB0
.L_801CEC74:
/* 801CEC74 001CBD54  80 62 B2 F8 */	lwz r3, __GXData@sda21(r2)
/* 801CEC78 001CBD58  80 03 01 20 */	lwz r0, 0x120(r3)
/* 801CEC7C 001CBD5C  50 A0 64 66 */	rlwimi r0, r5, 12, 17, 19
/* 801CEC80 001CBD60  90 03 01 20 */	stw r0, 0x120(r3)
/* 801CEC84 001CBD64  80 03 01 20 */	lwz r0, 0x120(r3)
/* 801CEC88 001CBD68  50 80 7B A0 */	rlwimi r0, r4, 15, 14, 16
/* 801CEC8C 001CBD6C  90 03 01 20 */	stw r0, 0x120(r3)
/* 801CEC90 001CBD70  48 00 00 20 */	b .L_801CECB0
.L_801CEC94:
/* 801CEC94 001CBD74  80 62 B2 F8 */	lwz r3, __GXData@sda21(r2)
/* 801CEC98 001CBD78  80 03 01 20 */	lwz r0, 0x120(r3)
/* 801CEC9C 001CBD7C  50 A0 92 DA */	rlwimi r0, r5, 18, 11, 13
/* 801CECA0 001CBD80  90 03 01 20 */	stw r0, 0x120(r3)
/* 801CECA4 001CBD84  80 03 01 20 */	lwz r0, 0x120(r3)
/* 801CECA8 001CBD88  50 80 AA 14 */	rlwimi r0, r4, 21, 8, 10
/* 801CECAC 001CBD8C  90 03 01 20 */	stw r0, 0x120(r3)
.L_801CECB0:
/* 801CECB0 001CBD90  38 00 00 61 */	li r0, 0x61
/* 801CECB4 001CBD94  80 82 B2 F8 */	lwz r4, __GXData@sda21(r2)
/* 801CECB8 001CBD98  3C A0 CC 01 */	lis r5, 0xcc01
/* 801CECBC 001CBD9C  98 05 80 00 */	stb r0, -0x8000(r5)
/* 801CECC0 001CBDA0  38 00 00 00 */	li r0, 0x0
/* 801CECC4 001CBDA4  80 64 01 20 */	lwz r3, 0x120(r4)
/* 801CECC8 001CBDA8  90 65 80 00 */	stw r3, -0x8000(r5)
/* 801CECCC 001CBDAC  80 64 05 AC */	lwz r3, 0x5ac(r4)
/* 801CECD0 001CBDB0  60 63 00 03 */	ori r3, r3, 0x3
/* 801CECD4 001CBDB4  90 64 05 AC */	stw r3, 0x5ac(r4)
/* 801CECD8 001CBDB8  B0 04 00 02 */	sth r0, 0x2(r4)
/* 801CECDC 001CBDBC  4E 80 00 20 */	blr
.endfn GXSetIndTexOrder

.fn GXSetNumIndStages, global
/* 801CECE0 001CBDC0  80 82 B2 F8 */	lwz r4, __GXData@sda21(r2)
/* 801CECE4 001CBDC4  54 60 06 3E */	clrlwi r0, r3, 24
/* 801CECE8 001CBDC8  80 64 02 04 */	lwz r3, 0x204(r4)
/* 801CECEC 001CBDCC  50 03 83 5E */	rlwimi r3, r0, 16, 13, 15
/* 801CECF0 001CBDD0  90 64 02 04 */	stw r3, 0x204(r4)
/* 801CECF4 001CBDD4  80 04 05 AC */	lwz r0, 0x5ac(r4)
/* 801CECF8 001CBDD8  60 00 00 06 */	ori r0, r0, 0x6
/* 801CECFC 001CBDDC  90 04 05 AC */	stw r0, 0x5ac(r4)
/* 801CED00 001CBDE0  4E 80 00 20 */	blr
.endfn GXSetNumIndStages

.fn GXSetTevDirect, global
/* 801CED04 001CBDE4  7C 08 02 A6 */	mflr r0
/* 801CED08 001CBDE8  38 80 00 00 */	li r4, 0x0
/* 801CED0C 001CBDEC  90 01 00 04 */	stw r0, 0x4(r1)
/* 801CED10 001CBDF0  38 00 00 00 */	li r0, 0x0
/* 801CED14 001CBDF4  38 A0 00 00 */	li r5, 0x0
/* 801CED18 001CBDF8  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 801CED1C 001CBDFC  38 C0 00 00 */	li r6, 0x0
/* 801CED20 001CBE00  38 E0 00 00 */	li r7, 0x0
/* 801CED24 001CBE04  90 01 00 08 */	stw r0, 0x8(r1)
/* 801CED28 001CBE08  39 00 00 00 */	li r8, 0x0
/* 801CED2C 001CBE0C  39 20 00 00 */	li r9, 0x0
/* 801CED30 001CBE10  90 01 00 0C */	stw r0, 0xc(r1)
/* 801CED34 001CBE14  39 40 00 00 */	li r10, 0x0
/* 801CED38 001CBE18  4B FF FB 95 */	bl GXSetTevIndirect
/* 801CED3C 001CBE1C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 801CED40 001CBE20  38 21 00 18 */	addi r1, r1, 0x18
/* 801CED44 001CBE24  7C 08 03 A6 */	mtlr r0
/* 801CED48 001CBE28  4E 80 00 20 */	blr
.endfn GXSetTevDirect

.fn __GXUpdateBPMask, global
/* 801CED4C 001CBE2C  4E 80 00 20 */	blr
.endfn __GXUpdateBPMask

.fn __GXFlushTextureState, global
/* 801CED50 001CBE30  38 00 00 61 */	li r0, 0x61
/* 801CED54 001CBE34  80 82 B2 F8 */	lwz r4, __GXData@sda21(r2)
/* 801CED58 001CBE38  3C A0 CC 01 */	lis r5, 0xcc01
/* 801CED5C 001CBE3C  98 05 80 00 */	stb r0, -0x8000(r5)
/* 801CED60 001CBE40  38 00 00 00 */	li r0, 0x0
/* 801CED64 001CBE44  80 64 01 24 */	lwz r3, 0x124(r4)
/* 801CED68 001CBE48  90 65 80 00 */	stw r3, -0x8000(r5)
/* 801CED6C 001CBE4C  B0 04 00 02 */	sth r0, 0x2(r4)
/* 801CED70 001CBE50  4E 80 00 20 */	blr
.endfn __GXFlushTextureState

# 0x803CFD18 - 0x803CFD20
.section .sdata2, "a"
.balign 8

.obj "@149", local
	.4byte 0x44800000
.endobj "@149"
	.4byte 0x00000000