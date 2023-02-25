.include "macros.inc"
.file "zLight.cpp"

# 0x8009E02C - 0x8009E870
.text
.balign 4

# zLightResetAll(xEnv*)
.fn zLightResetAll__FP4xEnv, global
/* 8009E02C 0009B10C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009E030 0009B110  7C 08 02 A6 */	mflr r0
/* 8009E034 0009B114  3C 80 80 2F */	lis r4, sLight@ha
/* 8009E038 0009B118  38 A0 00 80 */	li r5, 0x80
/* 8009E03C 0009B11C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009E040 0009B120  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8009E044 0009B124  7C 7F 1B 78 */	mr r31, r3
/* 8009E048 0009B128  38 64 8F 88 */	addi r3, r4, sLight@l
/* 8009E04C 0009B12C  38 80 00 00 */	li r4, 0x0
/* 8009E050 0009B130  4B F6 54 09 */	bl memset
/* 8009E054 0009B134  38 00 00 00 */	li r0, 0x0
/* 8009E058 0009B138  90 0D 8F E8 */	stw r0, sLightTotal@sda21(r13)
/* 8009E05C 0009B13C  80 8D 8F EC */	lwz r4, sPartitionVolume@sda21(r13)
/* 8009E060 0009B140  28 04 00 00 */	cmplwi r4, 0x0
/* 8009E064 0009B144  41 82 00 20 */	beq .L_8009E084
/* 8009E068 0009B148  3C 60 80 2F */	lis r3, sLightPart@ha
/* 8009E06C 0009B14C  38 A0 00 0A */	li r5, 0xa
/* 8009E070 0009B150  38 63 90 08 */	addi r3, r3, sLightPart@l
/* 8009E074 0009B154  38 C0 00 01 */	li r6, 0x1
/* 8009E078 0009B158  38 E0 00 0A */	li r7, 0xa
/* 8009E07C 0009B15C  4B F9 AC 05 */	bl xPartitionVolume__FP13_tagPartitionP7xVolumeiii
/* 8009E080 0009B160  48 00 00 20 */	b .L_8009E0A0
.L_8009E084:
/* 8009E084 0009B164  3C 60 80 2F */	lis r3, sLightPart@ha
/* 8009E088 0009B168  7F E4 FB 78 */	mr r4, r31
/* 8009E08C 0009B16C  38 63 90 08 */	addi r3, r3, sLightPart@l
/* 8009E090 0009B170  38 A0 00 0A */	li r5, 0xa
/* 8009E094 0009B174  38 C0 00 01 */	li r6, 0x1
/* 8009E098 0009B178  38 E0 00 0A */	li r7, 0xa
/* 8009E09C 0009B17C  4B F9 AD 7D */	bl xPartitionWorld__FP13_tagPartitionP4xEnviii
.L_8009E0A0:
/* 8009E0A0 0009B180  3C 60 80 2F */	lis r3, sLightPart@ha
/* 8009E0A4 0009B184  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 8009E0A8 0009B188  38 63 90 08 */	addi r3, r3, sLightPart@l
/* 8009E0AC 0009B18C  38 84 CD 30 */	addi r4, r4, "@stringBase0"@l
/* 8009E0B0 0009B190  4B F9 B1 BD */	bl xPartitionDump__FP13_tagPartitionPc
/* 8009E0B4 0009B194  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009E0B8 0009B198  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8009E0BC 0009B19C  7C 08 03 A6 */	mtlr r0
/* 8009E0C0 0009B1A0  38 21 00 10 */	addi r1, r1, 0x10
/* 8009E0C4 0009B1A4  4E 80 00 20 */	blr
.endfn zLightResetAll__FP4xEnv

# zLightInit(void*, void*)
.fn zLightInit__FPvPv, global
/* 8009E0C8 0009B1A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009E0CC 0009B1AC  7C 08 02 A6 */	mflr r0
/* 8009E0D0 0009B1B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009E0D4 0009B1B4  48 00 00 15 */	bl zLightInit__FP5xBaseP11zLightAsset
/* 8009E0D8 0009B1B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009E0DC 0009B1BC  7C 08 03 A6 */	mtlr r0
/* 8009E0E0 0009B1C0  38 21 00 10 */	addi r1, r1, 0x10
/* 8009E0E4 0009B1C4  4E 80 00 20 */	blr
.endfn zLightInit__FPvPv

# zLightInit(xBase*, zLightAsset*)
.fn zLightInit__FP5xBaseP11zLightAsset, global
/* 8009E0E8 0009B1C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009E0EC 0009B1CC  7C 08 02 A6 */	mflr r0
/* 8009E0F0 0009B1D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009E0F4 0009B1D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8009E0F8 0009B1D8  7C 7F 1B 78 */	mr r31, r3
/* 8009E0FC 0009B1DC  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8009E100 0009B1E0  7C 9E 23 78 */	mr r30, r4
/* 8009E104 0009B1E4  4B F6 B2 FD */	bl xBaseInit__FP5xBaseP10xBaseAsset
/* 8009E108 0009B1E8  3C 60 80 0A */	lis r3, zLightEventCB__FP5xBaseP5xBaseUiPCfP5xBase@ha
/* 8009E10C 0009B1EC  38 03 E4 6C */	addi r0, r3, zLightEventCB__FP5xBaseP5xBaseUiPCfP5xBase@l
/* 8009E110 0009B1F0  90 1F 00 0C */	stw r0, 0xc(r31)
/* 8009E114 0009B1F4  93 DF 00 14 */	stw r30, 0x14(r31)
/* 8009E118 0009B1F8  88 1F 00 05 */	lbz r0, 0x5(r31)
/* 8009E11C 0009B1FC  28 00 00 00 */	cmplwi r0, 0x0
/* 8009E120 0009B200  41 82 00 14 */	beq .L_8009E134
/* 8009E124 0009B204  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 8009E128 0009B208  38 03 00 44 */	addi r0, r3, 0x44
/* 8009E12C 0009B20C  90 1F 00 08 */	stw r0, 0x8(r31)
/* 8009E130 0009B210  48 00 00 0C */	b .L_8009E13C
.L_8009E134:
/* 8009E134 0009B214  38 00 00 00 */	li r0, 0x0
/* 8009E138 0009B218  90 1F 00 08 */	stw r0, 0x8(r31)
.L_8009E13C:
/* 8009E13C 0009B21C  88 1E 00 08 */	lbz r0, 0x8(r30)
/* 8009E140 0009B220  38 80 00 01 */	li r4, 0x1
/* 8009E144 0009B224  2C 00 00 02 */	cmpwi r0, 0x2
/* 8009E148 0009B228  41 82 00 34 */	beq .L_8009E17C
/* 8009E14C 0009B22C  40 80 00 14 */	bge .L_8009E160
/* 8009E150 0009B230  2C 00 00 00 */	cmpwi r0, 0x0
/* 8009E154 0009B234  41 82 00 18 */	beq .L_8009E16C
/* 8009E158 0009B238  40 80 00 1C */	bge .L_8009E174
/* 8009E15C 0009B23C  48 00 00 2C */	b .L_8009E188
.L_8009E160:
/* 8009E160 0009B240  2C 00 00 04 */	cmpwi r0, 0x4
/* 8009E164 0009B244  40 80 00 24 */	bge .L_8009E188
/* 8009E168 0009B248  48 00 00 1C */	b .L_8009E184
.L_8009E16C:
/* 8009E16C 0009B24C  38 80 00 01 */	li r4, 0x1
/* 8009E170 0009B250  48 00 00 18 */	b .L_8009E188
.L_8009E174:
/* 8009E174 0009B254  38 80 00 02 */	li r4, 0x2
/* 8009E178 0009B258  48 00 00 10 */	b .L_8009E188
.L_8009E17C:
/* 8009E17C 0009B25C  38 80 00 01 */	li r4, 0x1
/* 8009E180 0009B260  48 00 00 08 */	b .L_8009E188
.L_8009E184:
/* 8009E184 0009B264  38 80 00 01 */	li r4, 0x1
.L_8009E188:
/* 8009E188 0009B268  38 7F 00 18 */	addi r3, r31, 0x18
/* 8009E18C 0009B26C  48 02 69 71 */	bl iLightCreate__FP6iLightUi
/* 8009E190 0009B270  28 03 00 00 */	cmplwi r3, 0x0
/* 8009E194 0009B274  41 82 00 FC */	beq .L_8009E290
/* 8009E198 0009B278  80 CD 8F E8 */	lwz r6, sLightTotal@sda21(r13)
/* 8009E19C 0009B27C  3C 60 80 2F */	lis r3, sLight@ha
/* 8009E1A0 0009B280  38 A3 8F 88 */	addi r5, r3, sLight@l
/* 8009E1A4 0009B284  38 7F 00 18 */	addi r3, r31, 0x18
/* 8009E1A8 0009B288  38 86 00 01 */	addi r4, r6, 0x1
/* 8009E1AC 0009B28C  54 C0 10 3A */	slwi r0, r6, 2
/* 8009E1B0 0009B290  90 8D 8F E8 */	stw r4, sLightTotal@sda21(r13)
/* 8009E1B4 0009B294  38 80 00 1F */	li r4, 0x1f
/* 8009E1B8 0009B298  7F E5 01 2E */	stwx r31, r5, r0
/* 8009E1BC 0009B29C  C0 1E 00 30 */	lfs f0, 0x30(r30)
/* 8009E1C0 0009B2A0  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 8009E1C4 0009B2A4  C0 1E 00 34 */	lfs f0, 0x34(r30)
/* 8009E1C8 0009B2A8  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 8009E1CC 0009B2AC  C0 1E 00 38 */	lfs f0, 0x38(r30)
/* 8009E1D0 0009B2B0  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 8009E1D4 0009B2B4  C0 1E 00 3C */	lfs f0, 0x3c(r30)
/* 8009E1D8 0009B2B8  D0 1F 00 2C */	stfs f0, 0x2c(r31)
/* 8009E1DC 0009B2BC  C0 1E 00 10 */	lfs f0, 0x10(r30)
/* 8009E1E0 0009B2C0  D0 1F 00 34 */	stfs f0, 0x34(r31)
/* 8009E1E4 0009B2C4  C0 1E 00 14 */	lfs f0, 0x14(r30)
/* 8009E1E8 0009B2C8  D0 1F 00 38 */	stfs f0, 0x38(r31)
/* 8009E1EC 0009B2CC  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 8009E1F0 0009B2D0  D0 1F 00 3C */	stfs f0, 0x3c(r31)
/* 8009E1F4 0009B2D4  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 8009E1F8 0009B2D8  D0 1F 00 40 */	stfs f0, 0x40(r31)
/* 8009E1FC 0009B2DC  C0 1E 00 2C */	lfs f0, 0x2c(r30)
/* 8009E200 0009B2E0  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 8009E204 0009B2E4  C0 1F 00 2C */	lfs f0, 0x2c(r31)
/* 8009E208 0009B2E8  EC 00 00 32 */	fmuls f0, f0, f0
/* 8009E20C 0009B2EC  D0 1F 00 30 */	stfs f0, 0x30(r31)
/* 8009E210 0009B2F0  48 02 6A 3D */	bl iLightModify__FP6iLightUi
/* 8009E214 0009B2F4  38 00 00 00 */	li r0, 0x0
/* 8009E218 0009B2F8  90 1F 00 10 */	stw r0, 0x10(r31)
/* 8009E21C 0009B2FC  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 8009E220 0009B300  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8009E224 0009B304  54 00 06 B5 */	rlwinm. r0, r0, 0, 26, 26
/* 8009E228 0009B308  41 82 00 10 */	beq .L_8009E238
/* 8009E22C 0009B30C  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 8009E230 0009B310  60 00 00 01 */	ori r0, r0, 0x1
/* 8009E234 0009B314  90 1F 00 10 */	stw r0, 0x10(r31)
.L_8009E238:
/* 8009E238 0009B318  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 8009E23C 0009B31C  88 03 00 09 */	lbz r0, 0x9(r3)
/* 8009E240 0009B320  28 00 00 00 */	cmplwi r0, 0x0
/* 8009E244 0009B324  41 82 00 2C */	beq .L_8009E270
/* 8009E248 0009B328  80 6D 89 E0 */	lwz r3, gActiveHeap@sda21(r13)
/* 8009E24C 0009B32C  38 80 00 20 */	li r4, 0x20
/* 8009E250 0009B330  38 A0 00 00 */	li r5, 0x0
/* 8009E254 0009B334  4B F9 56 ED */	bl xMemAlloc__FUiUii
/* 8009E258 0009B338  90 7F 00 5C */	stw r3, 0x5c(r31)
/* 8009E25C 0009B33C  7F E3 FB 78 */	mr r3, r31
/* 8009E260 0009B340  80 9F 00 14 */	lwz r4, 0x14(r31)
/* 8009E264 0009B344  88 84 00 09 */	lbz r4, 0x9(r4)
/* 8009E268 0009B348  48 00 05 91 */	bl zLightEffectSet__FP7_zLighti
/* 8009E26C 0009B34C  48 00 00 0C */	b .L_8009E278
.L_8009E270:
/* 8009E270 0009B350  38 00 00 00 */	li r0, 0x0
/* 8009E274 0009B354  90 1F 00 5C */	stw r0, 0x5c(r31)
.L_8009E278:
/* 8009E278 0009B358  3C 60 80 2F */	lis r3, sLightPart@ha
/* 8009E27C 0009B35C  7F E4 FB 78 */	mr r4, r31
/* 8009E280 0009B360  38 63 90 08 */	addi r3, r3, sLightPart@l
/* 8009E284 0009B364  38 BF 00 20 */	addi r5, r31, 0x20
/* 8009E288 0009B368  4B F9 AD 2D */	bl xPartitionInsert__FP13_tagPartitionPvP5xVec3
/* 8009E28C 0009B36C  90 7F 00 58 */	stw r3, 0x58(r31)
.L_8009E290:
/* 8009E290 0009B370  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009E294 0009B374  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8009E298 0009B378  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8009E29C 0009B37C  7C 08 03 A6 */	mtlr r0
/* 8009E2A0 0009B380  38 21 00 10 */	addi r1, r1, 0x10
/* 8009E2A4 0009B384  4E 80 00 20 */	blr
.endfn zLightInit__FP5xBaseP11zLightAsset

# zLightResolveLinks()
.fn zLightResolveLinks__Fv, global
/* 8009E2A8 0009B388  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8009E2AC 0009B38C  7C 08 02 A6 */	mflr r0
/* 8009E2B0 0009B390  3C 60 80 2F */	lis r3, sLight@ha
/* 8009E2B4 0009B394  90 01 00 24 */	stw r0, 0x24(r1)
/* 8009E2B8 0009B398  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8009E2BC 0009B39C  3B E0 00 00 */	li r31, 0x0
/* 8009E2C0 0009B3A0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8009E2C4 0009B3A4  3B C3 8F 88 */	addi r30, r3, sLight@l
/* 8009E2C8 0009B3A8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8009E2CC 0009B3AC  3B A0 00 00 */	li r29, 0x0
/* 8009E2D0 0009B3B0  93 81 00 10 */	stw r28, 0x10(r1)
/* 8009E2D4 0009B3B4  48 00 00 30 */	b .L_8009E304
.L_8009E2D8:
/* 8009E2D8 0009B3B8  83 9E 00 00 */	lwz r28, 0x0(r30)
/* 8009E2DC 0009B3BC  80 7C 00 14 */	lwz r3, 0x14(r28)
/* 8009E2E0 0009B3C0  80 63 00 40 */	lwz r3, 0x40(r3)
/* 8009E2E4 0009B3C4  28 03 00 00 */	cmplwi r3, 0x0
/* 8009E2E8 0009B3C8  41 82 00 10 */	beq .L_8009E2F8
/* 8009E2EC 0009B3CC  48 01 67 51 */	bl zSceneFindObject__FUi
/* 8009E2F0 0009B3D0  90 7C 00 54 */	stw r3, 0x54(r28)
/* 8009E2F4 0009B3D4  48 00 00 08 */	b .L_8009E2FC
.L_8009E2F8:
/* 8009E2F8 0009B3D8  93 FC 00 54 */	stw r31, 0x54(r28)
.L_8009E2FC:
/* 8009E2FC 0009B3DC  3B DE 00 04 */	addi r30, r30, 0x4
/* 8009E300 0009B3E0  3B BD 00 01 */	addi r29, r29, 0x1
.L_8009E304:
/* 8009E304 0009B3E4  80 0D 8F E8 */	lwz r0, sLightTotal@sda21(r13)
/* 8009E308 0009B3E8  7C 1D 00 00 */	cmpw r29, r0
/* 8009E30C 0009B3EC  41 80 FF CC */	blt .L_8009E2D8
/* 8009E310 0009B3F0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8009E314 0009B3F4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8009E318 0009B3F8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8009E31C 0009B3FC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8009E320 0009B400  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8009E324 0009B404  7C 08 03 A6 */	mtlr r0
/* 8009E328 0009B408  38 21 00 20 */	addi r1, r1, 0x20
/* 8009E32C 0009B40C  4E 80 00 20 */	blr
.endfn zLightResolveLinks__Fv

# zLightDestroyAll()
.fn zLightDestroyAll__Fv, global
/* 8009E330 0009B410  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8009E334 0009B414  7C 08 02 A6 */	mflr r0
/* 8009E338 0009B418  3C 60 80 2F */	lis r3, sLight@ha
/* 8009E33C 0009B41C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8009E340 0009B420  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8009E344 0009B424  3B E3 8F 88 */	addi r31, r3, sLight@l
/* 8009E348 0009B428  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8009E34C 0009B42C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8009E350 0009B430  3B A0 00 00 */	li r29, 0x0
/* 8009E354 0009B434  83 CD 8F E8 */	lwz r30, sLightTotal@sda21(r13)
/* 8009E358 0009B438  48 00 00 20 */	b .L_8009E378
.L_8009E35C:
/* 8009E35C 0009B43C  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 8009E360 0009B440  48 00 00 45 */	bl zLightDestroy__FP7_zLight
/* 8009E364 0009B444  80 6D 8F E8 */	lwz r3, sLightTotal@sda21(r13)
/* 8009E368 0009B448  3B FF 00 04 */	addi r31, r31, 0x4
/* 8009E36C 0009B44C  3B BD 00 01 */	addi r29, r29, 0x1
/* 8009E370 0009B450  38 03 FF FF */	addi r0, r3, -0x1
/* 8009E374 0009B454  90 0D 8F E8 */	stw r0, sLightTotal@sda21(r13)
.L_8009E378:
/* 8009E378 0009B458  7C 1D F0 00 */	cmpw r29, r30
/* 8009E37C 0009B45C  41 80 FF E0 */	blt .L_8009E35C
/* 8009E380 0009B460  38 00 00 00 */	li r0, 0x0
/* 8009E384 0009B464  90 0D 8F E8 */	stw r0, sLightTotal@sda21(r13)
/* 8009E388 0009B468  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8009E38C 0009B46C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8009E390 0009B470  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8009E394 0009B474  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8009E398 0009B478  7C 08 03 A6 */	mtlr r0
/* 8009E39C 0009B47C  38 21 00 20 */	addi r1, r1, 0x20
/* 8009E3A0 0009B480  4E 80 00 20 */	blr
.endfn zLightDestroyAll__Fv

# zLightDestroy(_zLight*)
.fn zLightDestroy__FP7_zLight, global
/* 8009E3A4 0009B484  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009E3A8 0009B488  7C 08 02 A6 */	mflr r0
/* 8009E3AC 0009B48C  38 63 00 18 */	addi r3, r3, 0x18
/* 8009E3B0 0009B490  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009E3B4 0009B494  48 02 69 F5 */	bl iLightDestroy__FP6iLight
/* 8009E3B8 0009B498  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009E3BC 0009B49C  7C 08 03 A6 */	mtlr r0
/* 8009E3C0 0009B4A0  38 21 00 10 */	addi r1, r1, 0x10
/* 8009E3C4 0009B4A4  4E 80 00 20 */	blr
.endfn zLightDestroy__FP7_zLight

# zLightReset(_zLight*)
.fn zLightReset__FP7_zLight, global
/* 8009E3C8 0009B4A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009E3CC 0009B4AC  7C 08 02 A6 */	mflr r0
/* 8009E3D0 0009B4B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009E3D4 0009B4B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8009E3D8 0009B4B8  7C 7F 1B 78 */	mr r31, r3
/* 8009E3DC 0009B4BC  80 83 00 14 */	lwz r4, 0x14(r3)
/* 8009E3E0 0009B4C0  4B F6 B1 19 */	bl xBaseReset__FP5xBaseP10xBaseAsset
/* 8009E3E4 0009B4C4  38 00 00 00 */	li r0, 0x0
/* 8009E3E8 0009B4C8  90 1F 00 10 */	stw r0, 0x10(r31)
/* 8009E3EC 0009B4CC  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 8009E3F0 0009B4D0  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8009E3F4 0009B4D4  54 00 06 B5 */	rlwinm. r0, r0, 0, 26, 26
/* 8009E3F8 0009B4D8  41 82 00 10 */	beq .L_8009E408
/* 8009E3FC 0009B4DC  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 8009E400 0009B4E0  60 00 00 01 */	ori r0, r0, 0x1
/* 8009E404 0009B4E4  90 1F 00 10 */	stw r0, 0x10(r31)
.L_8009E408:
/* 8009E408 0009B4E8  80 9F 00 14 */	lwz r4, 0x14(r31)
/* 8009E40C 0009B4EC  7F E3 FB 78 */	mr r3, r31
/* 8009E410 0009B4F0  88 84 00 09 */	lbz r4, 0x9(r4)
/* 8009E414 0009B4F4  48 00 03 E5 */	bl zLightEffectSet__FP7_zLighti
/* 8009E418 0009B4F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009E41C 0009B4FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8009E420 0009B500  7C 08 03 A6 */	mtlr r0
/* 8009E424 0009B504  38 21 00 10 */	addi r1, r1, 0x10
/* 8009E428 0009B508  4E 80 00 20 */	blr
.endfn zLightReset__FP7_zLight

# zLightSave(_zLight*, xSerial*)
.fn zLightSave__FP7_zLightP7xSerial, global
/* 8009E42C 0009B50C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009E430 0009B510  7C 08 02 A6 */	mflr r0
/* 8009E434 0009B514  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009E438 0009B518  4B F6 B0 15 */	bl xBaseSave__FP5xBaseP7xSerial
/* 8009E43C 0009B51C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009E440 0009B520  7C 08 03 A6 */	mtlr r0
/* 8009E444 0009B524  38 21 00 10 */	addi r1, r1, 0x10
/* 8009E448 0009B528  4E 80 00 20 */	blr
.endfn zLightSave__FP7_zLightP7xSerial

# zLightLoad(_zLight*, xSerial*)
.fn zLightLoad__FP7_zLightP7xSerial, global
/* 8009E44C 0009B52C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009E450 0009B530  7C 08 02 A6 */	mflr r0
/* 8009E454 0009B534  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009E458 0009B538  4B F6 B0 45 */	bl xBaseLoad__FP5xBaseP7xSerial
/* 8009E45C 0009B53C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009E460 0009B540  7C 08 03 A6 */	mtlr r0
/* 8009E464 0009B544  38 21 00 10 */	addi r1, r1, 0x10
/* 8009E468 0009B548  4E 80 00 20 */	blr
.endfn zLightLoad__FP7_zLightP7xSerial

# zLightEventCB(xBase*, xBase*, unsigned int, const float*, xBase*)
.fn zLightEventCB__FP5xBaseP5xBaseUiPCfP5xBase, global
/* 8009E46C 0009B54C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009E470 0009B550  7C 08 02 A6 */	mflr r0
/* 8009E474 0009B554  2C 05 00 26 */	cmpwi r5, 0x26
/* 8009E478 0009B558  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009E47C 0009B55C  41 82 00 20 */	beq .L_8009E49C
/* 8009E480 0009B560  40 80 00 10 */	bge .L_8009E490
/* 8009E484 0009B564  2C 05 00 0A */	cmpwi r5, 0xa
/* 8009E488 0009B568  41 82 00 34 */	beq .L_8009E4BC
/* 8009E48C 0009B56C  48 00 00 38 */	b .L_8009E4C4
.L_8009E490:
/* 8009E490 0009B570  2C 05 00 28 */	cmpwi r5, 0x28
/* 8009E494 0009B574  40 80 00 30 */	bge .L_8009E4C4
/* 8009E498 0009B578  48 00 00 14 */	b .L_8009E4AC
.L_8009E49C:
/* 8009E49C 0009B57C  80 04 00 10 */	lwz r0, 0x10(r4)
/* 8009E4A0 0009B580  60 00 00 01 */	ori r0, r0, 0x1
/* 8009E4A4 0009B584  90 04 00 10 */	stw r0, 0x10(r4)
/* 8009E4A8 0009B588  48 00 00 1C */	b .L_8009E4C4
.L_8009E4AC:
/* 8009E4AC 0009B58C  80 04 00 10 */	lwz r0, 0x10(r4)
/* 8009E4B0 0009B590  54 00 00 3C */	clrrwi r0, r0, 1
/* 8009E4B4 0009B594  90 04 00 10 */	stw r0, 0x10(r4)
/* 8009E4B8 0009B598  48 00 00 0C */	b .L_8009E4C4
.L_8009E4BC:
/* 8009E4BC 0009B59C  7C 83 23 78 */	mr r3, r4
/* 8009E4C0 0009B5A0  4B FF FF 09 */	bl zLightReset__FP7_zLight
.L_8009E4C4:
/* 8009E4C4 0009B5A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009E4C8 0009B5A8  38 60 00 01 */	li r3, 0x1
/* 8009E4CC 0009B5AC  7C 08 03 A6 */	mtlr r0
/* 8009E4D0 0009B5B0  38 21 00 10 */	addi r1, r1, 0x10
/* 8009E4D4 0009B5B4  4E 80 00 20 */	blr
.endfn zLightEventCB__FP5xBaseP5xBaseUiPCfP5xBase

# zLightUpdate(xBase*, xScene*, float)
.fn zLightUpdate__FP5xBaseP6xScenef, global
/* 8009E4D8 0009B5B8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8009E4DC 0009B5BC  7C 08 02 A6 */	mflr r0
/* 8009E4E0 0009B5C0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8009E4E4 0009B5C4  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8009E4E8 0009B5C8  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8009E4EC 0009B5CC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8009E4F0 0009B5D0  80 03 00 10 */	lwz r0, 0x10(r3)
/* 8009E4F4 0009B5D4  FF E0 08 90 */	fmr f31, f1
/* 8009E4F8 0009B5D8  7C 7F 1B 78 */	mr r31, r3
/* 8009E4FC 0009B5DC  54 00 07 FF */	clrlwi. r0, r0, 31
/* 8009E500 0009B5E0  41 82 00 70 */	beq .L_8009E570
/* 8009E504 0009B5E4  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 8009E508 0009B5E8  28 03 00 00 */	cmplwi r3, 0x0
/* 8009E50C 0009B5EC  41 82 00 64 */	beq .L_8009E570
/* 8009E510 0009B5F0  4B F7 D2 F9 */	bl xEntGetPos__FPC4xEnt
/* 8009E514 0009B5F4  80 A3 00 00 */	lwz r5, 0x0(r3)
/* 8009E518 0009B5F8  38 81 00 08 */	addi r4, r1, 0x8
/* 8009E51C 0009B5FC  80 03 00 04 */	lwz r0, 0x4(r3)
/* 8009E520 0009B600  90 01 00 0C */	stw r0, 0xc(r1)
/* 8009E524 0009B604  90 A1 00 08 */	stw r5, 0x8(r1)
/* 8009E528 0009B608  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8009E52C 0009B60C  80 03 00 08 */	lwz r0, 0x8(r3)
/* 8009E530 0009B610  38 7F 00 18 */	addi r3, r31, 0x18
/* 8009E534 0009B614  90 01 00 10 */	stw r0, 0x10(r1)
/* 8009E538 0009B618  C0 02 91 D8 */	lfs f0, "@752"@sda21(r2)
/* 8009E53C 0009B61C  EC 01 00 2A */	fadds f0, f1, f0
/* 8009E540 0009B620  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8009E544 0009B624  48 02 68 11 */	bl iLightSetPos__FP6iLightP5xVec3
/* 8009E548 0009B628  38 7F 00 20 */	addi r3, r31, 0x20
/* 8009E54C 0009B62C  38 81 00 08 */	addi r4, r1, 0x8
/* 8009E550 0009B630  4B F6 CD 15 */	bl __as__5xVec3FRC5xVec3
/* 8009E554 0009B634  3C 60 80 2F */	lis r3, sLightPart@ha
/* 8009E558 0009B638  80 BF 00 58 */	lwz r5, 0x58(r31)
/* 8009E55C 0009B63C  38 63 90 08 */	addi r3, r3, sLightPart@l
/* 8009E560 0009B640  7F E4 FB 78 */	mr r4, r31
/* 8009E564 0009B644  38 C1 00 08 */	addi r6, r1, 0x8
/* 8009E568 0009B648  4B F9 AB 51 */	bl xPartitionUpdate__FP13_tagPartitionPviP5xVec3
/* 8009E56C 0009B64C  90 7F 00 58 */	stw r3, 0x58(r31)
.L_8009E570:
/* 8009E570 0009B650  80 1F 00 60 */	lwz r0, 0x60(r31)
/* 8009E574 0009B654  3C 60 80 29 */	lis r3, sEffectFuncs@ha
/* 8009E578 0009B658  38 63 FA C0 */	addi r3, r3, sEffectFuncs@l
/* 8009E57C 0009B65C  54 00 10 3A */	slwi r0, r0, 2
/* 8009E580 0009B660  7D 83 00 2E */	lwzx r12, r3, r0
/* 8009E584 0009B664  28 0C 00 00 */	cmplwi r12, 0x0
/* 8009E588 0009B668  41 82 00 14 */	beq .L_8009E59C
/* 8009E58C 0009B66C  FC 20 F8 90 */	fmr f1, f31
/* 8009E590 0009B670  7F E3 FB 78 */	mr r3, r31
/* 8009E594 0009B674  7D 89 03 A6 */	mtctr r12
/* 8009E598 0009B678  4E 80 04 21 */	bctrl
.L_8009E59C:
/* 8009E59C 0009B67C  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 8009E5A0 0009B680  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8009E5A4 0009B684  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8009E5A8 0009B688  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8009E5AC 0009B68C  7C 08 03 A6 */	mtlr r0
/* 8009E5B0 0009B690  38 21 00 30 */	addi r1, r1, 0x30
/* 8009E5B4 0009B694  4E 80 00 20 */	blr
.endfn zLightUpdate__FP5xBaseP6xScenef

# zLightAddLocalEnv()
.fn zLightAddLocalEnv__Fv, global
/* 8009E5B8 0009B698  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8009E5BC 0009B69C  7C 08 02 A6 */	mflr r0
/* 8009E5C0 0009B6A0  3C 60 80 2F */	lis r3, sLight@ha
/* 8009E5C4 0009B6A4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8009E5C8 0009B6A8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8009E5CC 0009B6AC  3B E3 8F 88 */	addi r31, r3, sLight@l
/* 8009E5D0 0009B6B0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8009E5D4 0009B6B4  3B C0 00 00 */	li r30, 0x0
/* 8009E5D8 0009B6B8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8009E5DC 0009B6BC  93 81 00 10 */	stw r28, 0x10(r1)
/* 8009E5E0 0009B6C0  48 00 00 A0 */	b .L_8009E680
.L_8009E5E4:
/* 8009E5E4 0009B6C4  83 BF 00 00 */	lwz r29, 0x0(r31)
/* 8009E5E8 0009B6C8  80 1D 00 10 */	lwz r0, 0x10(r29)
/* 8009E5EC 0009B6CC  54 00 07 FF */	clrlwi. r0, r0, 31
/* 8009E5F0 0009B6D0  41 82 00 88 */	beq .L_8009E678
/* 8009E5F4 0009B6D4  80 7D 00 14 */	lwz r3, 0x14(r29)
/* 8009E5F8 0009B6D8  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8009E5FC 0009B6DC  54 00 07 39 */	rlwinm. r0, r0, 0, 28, 28
/* 8009E600 0009B6E0  41 82 00 78 */	beq .L_8009E678
/* 8009E604 0009B6E4  3B 9D 00 18 */	addi r28, r29, 0x18
/* 8009E608 0009B6E8  38 80 00 01 */	li r4, 0x1
/* 8009E60C 0009B6EC  7F 83 E3 78 */	mr r3, r28
/* 8009E610 0009B6F0  48 02 67 E9 */	bl iLightEnv__FP6iLighti
/* 8009E614 0009B6F4  80 AD 92 08 */	lwz r5, gLightWorld@sda21(r13)
/* 8009E618 0009B6F8  3C 60 80 2F */	lis r3, gTemporaryLights@ha
/* 8009E61C 0009B6FC  80 9C 00 04 */	lwz r4, 0x4(r28)
/* 8009E620 0009B700  38 63 90 48 */	addi r3, r3, gTemporaryLights@l
/* 8009E624 0009B704  80 05 00 40 */	lwz r0, 0x40(r5)
/* 8009E628 0009B708  90 04 00 38 */	stw r0, 0x38(r4)
/* 8009E62C 0009B70C  80 AD 92 08 */	lwz r5, gLightWorld@sda21(r13)
/* 8009E630 0009B710  80 9C 00 04 */	lwz r4, 0x4(r28)
/* 8009E634 0009B714  38 05 00 3C */	addi r0, r5, 0x3c
/* 8009E638 0009B718  90 04 00 34 */	stw r0, 0x34(r4)
/* 8009E63C 0009B71C  80 8D 92 08 */	lwz r4, gLightWorld@sda21(r13)
/* 8009E640 0009B720  80 BC 00 04 */	lwz r5, 0x4(r28)
/* 8009E644 0009B724  80 84 00 40 */	lwz r4, 0x40(r4)
/* 8009E648 0009B728  38 05 00 34 */	addi r0, r5, 0x34
/* 8009E64C 0009B72C  90 04 00 00 */	stw r0, 0x0(r4)
/* 8009E650 0009B730  80 BC 00 04 */	lwz r5, 0x4(r28)
/* 8009E654 0009B734  80 8D 92 08 */	lwz r4, gLightWorld@sda21(r13)
/* 8009E658 0009B738  38 05 00 34 */	addi r0, r5, 0x34
/* 8009E65C 0009B73C  90 04 00 40 */	stw r0, 0x40(r4)
/* 8009E660 0009B740  80 0D 8F F0 */	lwz r0, gNumTemporaryLights@sda21(r13)
/* 8009E664 0009B744  54 00 10 3A */	slwi r0, r0, 2
/* 8009E668 0009B748  7F A3 01 2E */	stwx r29, r3, r0
/* 8009E66C 0009B74C  80 6D 8F F0 */	lwz r3, gNumTemporaryLights@sda21(r13)
/* 8009E670 0009B750  38 03 00 01 */	addi r0, r3, 0x1
/* 8009E674 0009B754  90 0D 8F F0 */	stw r0, gNumTemporaryLights@sda21(r13)
.L_8009E678:
/* 8009E678 0009B758  3B FF 00 04 */	addi r31, r31, 0x4
/* 8009E67C 0009B75C  3B DE 00 01 */	addi r30, r30, 0x1
.L_8009E680:
/* 8009E680 0009B760  80 0D 8F E8 */	lwz r0, sLightTotal@sda21(r13)
/* 8009E684 0009B764  7C 1E 00 00 */	cmpw r30, r0
/* 8009E688 0009B768  41 80 FF 5C */	blt .L_8009E5E4
/* 8009E68C 0009B76C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8009E690 0009B770  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8009E694 0009B774  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8009E698 0009B778  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8009E69C 0009B77C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8009E6A0 0009B780  7C 08 03 A6 */	mtlr r0
/* 8009E6A4 0009B784  38 21 00 20 */	addi r1, r1, 0x20
/* 8009E6A8 0009B788  4E 80 00 20 */	blr
.endfn zLightAddLocalEnv__Fv

# zLightAddLocal(xEnt*)
.fn zLightAddLocal__FP4xEnt, global
/* 8009E6AC 0009B78C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8009E6B0 0009B790  7C 08 02 A6 */	mflr r0
/* 8009E6B4 0009B794  90 01 00 24 */	stw r0, 0x24(r1)
/* 8009E6B8 0009B798  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8009E6BC 0009B79C  7C 7F 1B 78 */	mr r31, r3
/* 8009E6C0 0009B7A0  4B F7 D1 49 */	bl xEntGetPos__FPC4xEnt
/* 8009E6C4 0009B7A4  80 83 00 00 */	lwz r4, 0x0(r3)
/* 8009E6C8 0009B7A8  80 03 00 04 */	lwz r0, 0x4(r3)
/* 8009E6CC 0009B7AC  90 01 00 0C */	stw r0, 0xc(r1)
/* 8009E6D0 0009B7B0  90 81 00 08 */	stw r4, 0x8(r1)
/* 8009E6D4 0009B7B4  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8009E6D8 0009B7B8  80 03 00 08 */	lwz r0, 0x8(r3)
/* 8009E6DC 0009B7BC  90 01 00 10 */	stw r0, 0x10(r1)
/* 8009E6E0 0009B7C0  C0 02 91 D8 */	lfs f0, "@752"@sda21(r2)
/* 8009E6E4 0009B7C4  EC 01 00 2A */	fadds f0, f1, f0
/* 8009E6E8 0009B7C8  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8009E6EC 0009B7CC  80 1F 00 C4 */	lwz r0, 0xc4(r31)
/* 8009E6F0 0009B7D0  28 00 00 00 */	cmplwi r0, 0x0
/* 8009E6F4 0009B7D4  40 82 00 44 */	bne .L_8009E738
/* 8009E6F8 0009B7D8  80 6D 89 E0 */	lwz r3, gActiveHeap@sda21(r13)
/* 8009E6FC 0009B7DC  38 80 00 28 */	li r4, 0x28
/* 8009E700 0009B7E0  38 A0 00 00 */	li r5, 0x0
/* 8009E704 0009B7E4  4B F9 52 3D */	bl xMemAlloc__FUiUii
/* 8009E708 0009B7E8  90 7F 00 C4 */	stw r3, 0xc4(r31)
/* 8009E70C 0009B7EC  7F E3 FB 78 */	mr r3, r31
/* 8009E710 0009B7F0  80 9F 00 C4 */	lwz r4, 0xc4(r31)
/* 8009E714 0009B7F4  4B F7 CF F9 */	bl xEntInitShadow__FR4xEntR10xEntShadow
/* 8009E718 0009B7F8  80 7F 00 C4 */	lwz r3, 0xc4(r31)
/* 8009E71C 0009B7FC  38 81 00 08 */	addi r4, r1, 0x8
/* 8009E720 0009B800  4B F6 CB 45 */	bl __as__5xVec3FRC5xVec3
/* 8009E724 0009B804  80 BF 00 C4 */	lwz r5, 0xc4(r31)
/* 8009E728 0009B808  3C 60 80 29 */	lis r3, sDefaultShadowVec@ha
/* 8009E72C 0009B80C  38 83 FB 50 */	addi r4, r3, sDefaultShadowVec@l
/* 8009E730 0009B810  38 65 00 0C */	addi r3, r5, 0xc
/* 8009E734 0009B814  4B F6 CB 31 */	bl __as__5xVec3FRC5xVec3
.L_8009E738:
/* 8009E738 0009B818  80 7F 00 C4 */	lwz r3, 0xc4(r31)
/* 8009E73C 0009B81C  C0 22 91 D8 */	lfs f1, "@752"@sda21(r2)
/* 8009E740 0009B820  38 83 00 0C */	addi r4, r3, 0xc
/* 8009E744 0009B824  4B FA 61 7D */	bl xShadowSetLight__FP5xVec3P5xVec3f
/* 8009E748 0009B828  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8009E74C 0009B82C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8009E750 0009B830  7C 08 03 A6 */	mtlr r0
/* 8009E754 0009B834  38 21 00 20 */	addi r1, r1, 0x20
/* 8009E758 0009B838  4E 80 00 20 */	blr
.endfn zLightAddLocal__FP4xEnt

# zLightRemoveLocalEnv()
.fn zLightRemoveLocalEnv__Fv, global
/* 8009E75C 0009B83C  38 80 00 00 */	li r4, 0x0
/* 8009E760 0009B840  48 00 00 28 */	b .L_8009E788
.L_8009E764:
/* 8009E764 0009B844  80 6D 92 08 */	lwz r3, gLightWorld@sda21(r13)
/* 8009E768 0009B848  38 84 00 01 */	addi r4, r4, 0x1
/* 8009E76C 0009B84C  80 A3 00 40 */	lwz r5, 0x40(r3)
/* 8009E770 0009B850  80 05 00 00 */	lwz r0, 0x0(r5)
/* 8009E774 0009B854  80 65 00 04 */	lwz r3, 0x4(r5)
/* 8009E778 0009B858  90 03 00 00 */	stw r0, 0x0(r3)
/* 8009E77C 0009B85C  80 05 00 04 */	lwz r0, 0x4(r5)
/* 8009E780 0009B860  80 65 00 00 */	lwz r3, 0x0(r5)
/* 8009E784 0009B864  90 03 00 04 */	stw r0, 0x4(r3)
.L_8009E788:
/* 8009E788 0009B868  80 0D 8F F0 */	lwz r0, gNumTemporaryLights@sda21(r13)
/* 8009E78C 0009B86C  7C 04 00 00 */	cmpw r4, r0
/* 8009E790 0009B870  41 80 FF D4 */	blt .L_8009E764
/* 8009E794 0009B874  38 00 00 00 */	li r0, 0x0
/* 8009E798 0009B878  90 0D 8F F0 */	stw r0, gNumTemporaryLights@sda21(r13)
/* 8009E79C 0009B87C  4E 80 00 20 */	blr
.endfn zLightRemoveLocalEnv__Fv

# zLightSetVolume(zVolume*)
.fn zLightSetVolume__FP7zVolume, global
/* 8009E7A0 0009B880  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009E7A4 0009B884  7C 08 02 A6 */	mflr r0
/* 8009E7A8 0009B888  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009E7AC 0009B88C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8009E7B0 0009B890  7C 7F 1B 79 */	mr. r31, r3
/* 8009E7B4 0009B894  40 82 00 10 */	bne .L_8009E7C4
/* 8009E7B8 0009B898  38 00 00 00 */	li r0, 0x0
/* 8009E7BC 0009B89C  90 0D 8F EC */	stw r0, sPartitionVolume@sda21(r13)
/* 8009E7C0 0009B8A0  48 00 00 24 */	b .L_8009E7E4
.L_8009E7C4:
/* 8009E7C4 0009B8A4  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 8009E7C8 0009B8A8  38 63 CD 30 */	addi r3, r3, "@stringBase0"@l
/* 8009E7CC 0009B8AC  38 63 00 09 */	addi r3, r3, 0x9
/* 8009E7D0 0009B8B0  4B FA DA 45 */	bl xStrHash__FPCc
/* 8009E7D4 0009B8B4  80 1F 00 00 */	lwz r0, 0x0(r31)
/* 8009E7D8 0009B8B8  7C 00 18 40 */	cmplw r0, r3
/* 8009E7DC 0009B8BC  40 82 00 08 */	bne .L_8009E7E4
/* 8009E7E0 0009B8C0  93 ED 8F EC */	stw r31, sPartitionVolume@sda21(r13)
.L_8009E7E4:
/* 8009E7E4 0009B8C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009E7E8 0009B8C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8009E7EC 0009B8CC  7C 08 03 A6 */	mtlr r0
/* 8009E7F0 0009B8D0  38 21 00 10 */	addi r1, r1, 0x10
/* 8009E7F4 0009B8D4  4E 80 00 20 */	blr
.endfn zLightSetVolume__FP7zVolume

# zLightEffectSet(_zLight*, int)
.fn zLightEffectSet__FP7_zLighti, global
/* 8009E7F8 0009B8D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009E7FC 0009B8DC  7C 08 02 A6 */	mflr r0
/* 8009E800 0009B8E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009E804 0009B8E4  80 03 00 5C */	lwz r0, 0x5c(r3)
/* 8009E808 0009B8E8  28 00 00 00 */	cmplwi r0, 0x0
/* 8009E80C 0009B8EC  41 82 00 2C */	beq .L_8009E838
/* 8009E810 0009B8F0  90 83 00 60 */	stw r4, 0x60(r3)
/* 8009E814 0009B8F4  3C 80 80 29 */	lis r4, sEffectInitFuncs@ha
/* 8009E818 0009B8F8  38 84 FB 08 */	addi r4, r4, sEffectInitFuncs@l
/* 8009E81C 0009B8FC  80 03 00 60 */	lwz r0, 0x60(r3)
/* 8009E820 0009B900  54 00 10 3A */	slwi r0, r0, 2
/* 8009E824 0009B904  7D 84 00 2E */	lwzx r12, r4, r0
/* 8009E828 0009B908  28 0C 00 00 */	cmplwi r12, 0x0
/* 8009E82C 0009B90C  41 82 00 0C */	beq .L_8009E838
/* 8009E830 0009B910  7D 89 03 A6 */	mtctr r12
/* 8009E834 0009B914  4E 80 04 21 */	bctrl
.L_8009E838:
/* 8009E838 0009B918  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009E83C 0009B91C  7C 08 03 A6 */	mtlr r0
/* 8009E840 0009B920  38 21 00 10 */	addi r1, r1, 0x10
/* 8009E844 0009B924  4E 80 00 20 */	blr
.endfn zLightEffectSet__FP7_zLighti

# zLightOn(_zLight*, int)
.fn zLightOn__FP7_zLighti, global
/* 8009E848 0009B928  2C 04 00 00 */	cmpwi r4, 0x0
/* 8009E84C 0009B92C  41 82 00 14 */	beq .L_8009E860
/* 8009E850 0009B930  80 03 00 10 */	lwz r0, 0x10(r3)
/* 8009E854 0009B934  60 00 00 01 */	ori r0, r0, 0x1
/* 8009E858 0009B938  90 03 00 10 */	stw r0, 0x10(r3)
/* 8009E85C 0009B93C  4E 80 00 20 */	blr
.L_8009E860:
/* 8009E860 0009B940  80 03 00 10 */	lwz r0, 0x10(r3)
/* 8009E864 0009B944  54 00 00 3C */	clrrwi r0, r0, 1
/* 8009E868 0009B948  90 03 00 10 */	stw r0, 0x10(r3)
/* 8009E86C 0009B94C  4E 80 00 20 */	blr
.endfn zLightOn__FP7_zLighti

# 0x8025CD30 - 0x8025CD50
.rodata
.balign 8

.obj "@stringBase0", local
	.4byte 0x4C696768
	.4byte 0x74696E67
	.4byte 0x004C4947
	.4byte 0x48545F50
	.4byte 0x41525449
	.4byte 0x54494F4E
	.byte 0x00
.endobj "@stringBase0"
	.4byte 0x00000000
	.byte 0x00, 0x00, 0x00

# 0x8028FAC0 - 0x8028FB60
.data
.balign 8

.obj sEffectFuncs, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte zLightEffectFlickerSlow__FP7_zLightf
	.4byte zLightEffectFlicker__FP7_zLightf
	.4byte zLightEffectFlickerErratic__FP7_zLightf
	.4byte zLightEffectStrobeSlow__FP7_zLightf
	.4byte zLightEffectStrobe__FP7_zLightf
	.4byte zLightEffectStrobeFast__FP7_zLightf
	.4byte zLightEffectDimSlow__FP7_zLightf
	.4byte zLightEffectDim__FP7_zLightf
	.4byte zLightEffectDimFast__FP7_zLightf
	.4byte zLightEffectHalfDimSlow__FP7_zLightf
	.4byte zLightEffectHalfDim__FP7_zLightf
	.4byte zLightEffectHalfDimFast__FP7_zLightf
	.4byte zLightEffectRandomColSlow__FP7_zLightf
	.4byte zLightEffectRandomCol__FP7_zLightf
	.4byte zLightEffectRandomColFast__FP7_zLightf
	.4byte zLightEffectCauldron__FP7_zLightf
.endobj sEffectFuncs

.obj sEffectInitFuncs, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte zLightEffectInitFlicker__FP7_zLight
	.4byte zLightEffectInitFlicker__FP7_zLight
	.4byte zLightEffectInitFlicker__FP7_zLight
	.4byte zLightEffectInitStrobe__FP7_zLight
	.4byte zLightEffectInitStrobe__FP7_zLight
	.4byte zLightEffectInitStrobe__FP7_zLight
	.4byte zLightEffectInitDim__FP7_zLight
	.4byte zLightEffectInitDim__FP7_zLight
	.4byte zLightEffectInitDim__FP7_zLight
	.4byte zLightEffectInitHalfDim__FP7_zLight
	.4byte zLightEffectInitHalfDim__FP7_zLight
	.4byte zLightEffectInitHalfDim__FP7_zLight
	.4byte zLightEffectInitRandomCol__FP7_zLight
	.4byte zLightEffectInitRandomCol__FP7_zLight
	.4byte zLightEffectInitRandomCol__FP7_zLight
	.4byte zLightEffectInitCauldron__FP7_zLight
.endobj sEffectInitFuncs

.obj sDefaultShadowVec, local
	.4byte 0x00000000
	.4byte 0x3F800000
	.4byte 0x00000000
.endobj sDefaultShadowVec
	.4byte 0x00000000

# 0x802E8F88 - 0x802E90C8
.section .bss, "wa", @nobits
.balign 8

.obj sLight, local
	.skip 0x80
.endobj sLight

.obj sLightPart, local
	.skip 0x40
.endobj sLightPart

.obj gTemporaryLights, local
	.skip 0x80
.endobj gTemporaryLights

# 0x803CB8E8 - 0x803CB8F8
.section .sbss, "wa", @nobits
.balign 8

.obj sLightTotal, local
	.skip 0x4
.endobj sLightTotal

.obj sPartitionVolume, local
	.skip 0x4
.endobj sPartitionVolume

.obj gNumTemporaryLights, local
	.skip 0x4
.endobj gNumTemporaryLights
	.skip 0x4

# 0x803CDB58 - 0x803CDB60
.section .sdata2, "a"
.balign 8

.obj "@752", local
	.4byte 0x3F800000
.endobj "@752"
	.4byte 0x00000000
