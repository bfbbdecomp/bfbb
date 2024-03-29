.include "macros.inc"
.file "nodeGameCubeAtomicAllInOne.c"

# 0x8021FEE4 - 0x802207E8
.text
.balign 4

.fn _rxGCAtomicDefaultLightingCallback, local
/* 8021FEE4 0021CFC4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8021FEE8 0021CFC8  7C 08 02 A6 */	mflr r0
/* 8021FEEC 0021CFCC  90 01 00 34 */	stw r0, 0x34(r1)
/* 8021FEF0 0021CFD0  39 61 00 30 */	addi r11, r1, 0x30
/* 8021FEF4 0021CFD4  4B FC D6 05 */	bl _savegpr_24
/* 8021FEF8 0021CFD8  7C 7E 1B 78 */	mr r30, r3
/* 8021FEFC 0021CFDC  38 60 00 00 */	li r3, 0x0
/* 8021FF00 0021CFE0  80 BE 00 18 */	lwz r5, 0x18(r30)
/* 8021FF04 0021CFE4  7C 9F 23 78 */	mr r31, r4
/* 8021FF08 0021CFE8  80 05 00 08 */	lwz r0, 0x8(r5)
/* 8021FF0C 0021CFEC  90 64 00 20 */	stw r3, 0x20(r4)
/* 8021FF10 0021CFF0  54 00 06 B5 */	rlwinm. r0, r0, 0, 26, 26
/* 8021FF14 0021CFF4  C0 02 BB D0 */	lfs f0, "@311"@sda21(r2)
/* 8021FF18 0021CFF8  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 8021FF1C 0021CFFC  C0 02 BB D0 */	lfs f0, "@311"@sda21(r2)
/* 8021FF20 0021D000  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 8021FF24 0021D004  C0 02 BB D0 */	lfs f0, "@311"@sda21(r2)
/* 8021FF28 0021D008  D0 04 00 14 */	stfs f0, 0x14(r4)
/* 8021FF2C 0021D00C  C0 02 BB D4 */	lfs f0, "@312"@sda21(r2)
/* 8021FF30 0021D010  D0 04 00 18 */	stfs f0, 0x18(r4)
/* 8021FF34 0021D014  90 64 00 1C */	stw r3, 0x1c(r4)
/* 8021FF38 0021D018  90 64 00 24 */	stw r3, 0x24(r4)
/* 8021FF3C 0021D01C  41 82 00 F8 */	beq .L_80220034
/* 8021FF40 0021D020  80 6D 9F 7C */	lwz r3, RwEngineInstance@sda21(r13)
/* 8021FF44 0021D024  80 03 00 04 */	lwz r0, 0x4(r3)
/* 8021FF48 0021D028  28 00 00 00 */	cmplwi r0, 0x0
/* 8021FF4C 0021D02C  41 82 00 E8 */	beq .L_80220034
/* 8021FF50 0021D030  38 60 00 01 */	li r3, 0x1
/* 8021FF54 0021D034  48 00 0C 75 */	bl _rwGCLightsGlobalEnable
/* 8021FF58 0021D038  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8021FF5C 0021D03C  3B 5E 00 64 */	addi r26, r30, 0x64
/* 8021FF60 0021D040  A0 64 00 0A */	lhz r3, 0xa(r4)
/* 8021FF64 0021D044  38 03 00 01 */	addi r0, r3, 0x1
/* 8021FF68 0021D048  B0 04 00 0A */	sth r0, 0xa(r4)
/* 8021FF6C 0021D04C  83 7E 00 64 */	lwz r27, 0x64(r30)
/* 8021FF70 0021D050  48 00 00 BC */	b .L_8022002C
.L_8021FF74:
/* 8021FF74 0021D054  80 7B 00 08 */	lwz r3, 0x8(r27)
/* 8021FF78 0021D058  3B 83 00 48 */	addi r28, r3, 0x48
/* 8021FF7C 0021D05C  83 23 00 48 */	lwz r25, 0x48(r3)
/* 8021FF80 0021D060  48 00 00 A0 */	b .L_80220020
.L_8021FF84:
/* 8021FF84 0021D064  83 19 00 08 */	lwz r24, 0x8(r25)
/* 8021FF88 0021D068  28 18 00 00 */	cmplwi r24, 0x0
/* 8021FF8C 0021D06C  41 82 00 90 */	beq .L_8022001C
/* 8021FF90 0021D070  80 6D 9F 7C */	lwz r3, RwEngineInstance@sda21(r13)
/* 8021FF94 0021D074  A0 18 00 3C */	lhz r0, 0x3c(r24)
/* 8021FF98 0021D078  A0 63 00 0A */	lhz r3, 0xa(r3)
/* 8021FF9C 0021D07C  7C 00 18 40 */	cmplw r0, r3
/* 8021FFA0 0021D080  41 82 00 7C */	beq .L_8022001C
/* 8021FFA4 0021D084  88 18 00 02 */	lbz r0, 0x2(r24)
/* 8021FFA8 0021D088  54 00 07 FF */	clrlwi. r0, r0, 31
/* 8021FFAC 0021D08C  41 82 00 70 */	beq .L_8022001C
/* 8021FFB0 0021D090  B0 78 00 3C */	sth r3, 0x3c(r24)
/* 8021FFB4 0021D094  80 78 00 04 */	lwz r3, 0x4(r24)
/* 8021FFB8 0021D098  48 01 90 79 */	bl RwFrameGetLTM
/* 8021FFBC 0021D09C  7C 7D 1B 78 */	mr r29, r3
/* 8021FFC0 0021D0A0  7F C3 F3 78 */	mr r3, r30
/* 8021FFC4 0021D0A4  4B FF 2B 3D */	bl RpAtomicGetWorldBoundingSphere
/* 8021FFC8 0021D0A8  C0 23 00 04 */	lfs f1, 0x4(r3)
/* 8021FFCC 0021D0AC  C0 1D 00 34 */	lfs f0, 0x34(r29)
/* 8021FFD0 0021D0B0  C0 43 00 00 */	lfs f2, 0x0(r3)
/* 8021FFD4 0021D0B4  EC A1 00 28 */	fsubs f5, f1, f0
/* 8021FFD8 0021D0B8  C0 1D 00 30 */	lfs f0, 0x30(r29)
/* 8021FFDC 0021D0BC  C0 63 00 08 */	lfs f3, 0x8(r3)
/* 8021FFE0 0021D0C0  EC 82 00 28 */	fsubs f4, f2, f0
/* 8021FFE4 0021D0C4  C0 3D 00 38 */	lfs f1, 0x38(r29)
/* 8021FFE8 0021D0C8  EC 05 01 72 */	fmuls f0, f5, f5
/* 8021FFEC 0021D0CC  C0 43 00 0C */	lfs f2, 0xc(r3)
/* 8021FFF0 0021D0D0  EC 63 08 28 */	fsubs f3, f3, f1
/* 8021FFF4 0021D0D4  C0 38 00 14 */	lfs f1, 0x14(r24)
/* 8021FFF8 0021D0D8  EC 04 01 3A */	fmadds f0, f4, f4, f0
/* 8021FFFC 0021D0DC  EC 42 08 2A */	fadds f2, f2, f1
/* 80220000 0021D0E0  EC 23 00 FA */	fmadds f1, f3, f3, f0
/* 80220004 0021D0E4  EC 02 00 B2 */	fmuls f0, f2, f2
/* 80220008 0021D0E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8022000C 0021D0EC  40 80 00 10 */	bge .L_8022001C
/* 80220010 0021D0F0  80 79 00 08 */	lwz r3, 0x8(r25)
/* 80220014 0021D0F4  7F E4 FB 78 */	mr r4, r31
/* 80220018 0021D0F8  48 00 0D D1 */	bl _rwGCLightsLocalEnable
.L_8022001C:
/* 8022001C 0021D0FC  83 39 00 00 */	lwz r25, 0x0(r25)
.L_80220020:
/* 80220020 0021D100  7C 19 E0 40 */	cmplw r25, r28
/* 80220024 0021D104  40 82 FF 60 */	bne .L_8021FF84
/* 80220028 0021D108  83 7B 00 00 */	lwz r27, 0x0(r27)
.L_8022002C:
/* 8022002C 0021D10C  7C 1B D0 40 */	cmplw r27, r26
/* 80220030 0021D110  40 82 FF 44 */	bne .L_8021FF74
.L_80220034:
/* 80220034 0021D114  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 80220038 0021D118  2C 00 00 00 */	cmpwi r0, 0x0
/* 8022003C 0021D11C  41 82 00 40 */	beq .L_8022007C
/* 80220040 0021D120  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 80220044 0021D124  C0 02 BB D4 */	lfs f0, "@312"@sda21(r2)
/* 80220048 0021D128  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8022004C 0021D12C  40 81 00 08 */	ble .L_80220054
/* 80220050 0021D130  D0 1F 00 0C */	stfs f0, 0xc(r31)
.L_80220054:
/* 80220054 0021D134  C0 3F 00 10 */	lfs f1, 0x10(r31)
/* 80220058 0021D138  C0 02 BB D4 */	lfs f0, "@312"@sda21(r2)
/* 8022005C 0021D13C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80220060 0021D140  40 81 00 08 */	ble .L_80220068
/* 80220064 0021D144  D0 1F 00 10 */	stfs f0, 0x10(r31)
.L_80220068:
/* 80220068 0021D148  C0 3F 00 14 */	lfs f1, 0x14(r31)
/* 8022006C 0021D14C  C0 02 BB D4 */	lfs f0, "@312"@sda21(r2)
/* 80220070 0021D150  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80220074 0021D154  40 81 00 08 */	ble .L_8022007C
/* 80220078 0021D158  D0 1F 00 14 */	stfs f0, 0x14(r31)
.L_8022007C:
/* 8022007C 0021D15C  7F C3 F3 78 */	mr r3, r30
/* 80220080 0021D160  39 61 00 30 */	addi r11, r1, 0x30
/* 80220084 0021D164  4B FC D4 C1 */	bl _restgpr_24
/* 80220088 0021D168  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8022008C 0021D16C  7C 08 03 A6 */	mtlr r0
/* 80220090 0021D170  38 21 00 30 */	addi r1, r1, 0x30
/* 80220094 0021D174  4E 80 00 20 */	blr
.endfn _rxGCAtomicDefaultLightingCallback

.fn _rxGCDefaultReinstance, local
/* 80220098 0021D178  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8022009C 0021D17C  7C 08 02 A6 */	mflr r0
/* 802200A0 0021D180  90 01 00 34 */	stw r0, 0x34(r1)
/* 802200A4 0021D184  39 61 00 30 */	addi r11, r1, 0x30
/* 802200A8 0021D188  4B FC D4 51 */	bl _savegpr_24
/* 802200AC 0021D18C  80 0D 9F 00 */	lwz r0, _rpDlGeomVtxFmtOffset@sda21(r13)
/* 802200B0 0021D190  7C 79 1B 78 */	mr r25, r3
/* 802200B4 0021D194  80 63 00 08 */	lwz r3, 0x8(r3)
/* 802200B8 0021D198  7C 9A 23 78 */	mr r26, r4
/* 802200BC 0021D19C  7F 79 00 2E */	lwzx r27, r25, r0
/* 802200C0 0021D1A0  3B A0 00 00 */	li r29, 0x0
/* 802200C4 0021D1A4  A3 99 00 0C */	lhz r28, 0xc(r25)
/* 802200C8 0021D1A8  60 7E 00 02 */	ori r30, r3, 0x2
/* 802200CC 0021D1AC  28 1B 00 00 */	cmplwi r27, 0x0
/* 802200D0 0021D1B0  83 F9 00 14 */	lwz r31, 0x14(r25)
/* 802200D4 0021D1B4  40 82 00 0C */	bne .L_802200E0
/* 802200D8 0021D1B8  4B FF F8 69 */	bl _rpGameCubeVtxFmtGetDefault
/* 802200DC 0021D1BC  7C 7B 1B 78 */	mr r27, r3
.L_802200E0:
/* 802200E0 0021D1C0  57 C0 07 BD */	rlwinm. r0, r30, 0, 30, 30
/* 802200E4 0021D1C4  41 82 00 64 */	beq .L_80220148
/* 802200E8 0021D1C8  57 80 07 BD */	rlwinm. r0, r28, 0, 30, 30
/* 802200EC 0021D1CC  41 82 00 58 */	beq .L_80220144
/* 802200F0 0021D1D0  88 7B 00 0C */	lbz r3, 0xc(r27)
/* 802200F4 0021D1D4  38 80 00 01 */	li r4, 0x1
/* 802200F8 0021D1D8  3C 00 43 30 */	lis r0, 0x4330
/* 802200FC 0021D1DC  80 B9 00 5C */	lwz r5, 0x5c(r25)
/* 80220100 0021D1E0  7C 83 18 30 */	slw r3, r4, r3
/* 80220104 0021D1E4  90 01 00 08 */	stw r0, 0x8(r1)
/* 80220108 0021D1E8  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8022010C 0021D1EC  C8 22 BB D8 */	lfd f1, "@366"@sda21(r2)
/* 80220110 0021D1F0  90 01 00 0C */	stw r0, 0xc(r1)
/* 80220114 0021D1F4  80 7A 00 0C */	lwz r3, 0xc(r26)
/* 80220118 0021D1F8  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 8022011C 0021D1FC  80 85 00 14 */	lwz r4, 0x14(r5)
/* 80220120 0021D200  EC 20 08 28 */	fsubs f1, f0, f1
/* 80220124 0021D204  88 BB 00 00 */	lbz r5, 0x0(r27)
/* 80220128 0021D208  80 D9 00 14 */	lwz r6, 0x14(r25)
/* 8022012C 0021D20C  88 FA 00 11 */	lbz r7, 0x11(r26)
/* 80220130 0021D210  48 00 34 55 */	bl _rwGCNVtxFmtInstPos3D
/* 80220134 0021D214  7C 60 1B 78 */	mr r0, r3
/* 80220138 0021D218  80 7A 00 0C */	lwz r3, 0xc(r26)
/* 8022013C 0021D21C  7C 04 03 78 */	mr r4, r0
/* 80220140 0021D220  4B FB 22 19 */	bl DCFlushRange
.L_80220144:
/* 80220144 0021D224  3B A0 00 01 */	li r29, 0x1
.L_80220148:
/* 80220148 0021D228  57 C0 06 F7 */	rlwinm. r0, r30, 0, 27, 27
/* 8022014C 0021D22C  41 82 00 40 */	beq .L_8022018C
/* 80220150 0021D230  57 80 07 7B */	rlwinm. r0, r28, 0, 29, 29
/* 80220154 0021D234  41 82 00 34 */	beq .L_80220188
/* 80220158 0021D238  57 A0 18 38 */	slwi r0, r29, 3
/* 8022015C 0021D23C  80 99 00 5C */	lwz r4, 0x5c(r25)
/* 80220160 0021D240  7F 1A 02 14 */	add r24, r26, r0
/* 80220164 0021D244  88 BB 00 01 */	lbz r5, 0x1(r27)
/* 80220168 0021D248  80 78 00 0C */	lwz r3, 0xc(r24)
/* 8022016C 0021D24C  80 84 00 18 */	lwz r4, 0x18(r4)
/* 80220170 0021D250  80 D9 00 14 */	lwz r6, 0x14(r25)
/* 80220174 0021D254  88 F8 00 11 */	lbz r7, 0x11(r24)
/* 80220178 0021D258  48 00 42 01 */	bl _rwGCNVtxFmtInstNrm
/* 8022017C 0021D25C  7C 64 1B 78 */	mr r4, r3
/* 80220180 0021D260  80 78 00 0C */	lwz r3, 0xc(r24)
/* 80220184 0021D264  4B FB 21 D5 */	bl DCFlushRange
.L_80220188:
/* 80220188 0021D268  3B BD 00 01 */	addi r29, r29, 0x1
.L_8022018C:
/* 8022018C 0021D26C  57 C0 07 39 */	rlwinm. r0, r30, 0, 28, 28
/* 80220190 0021D270  41 82 00 C0 */	beq .L_80220250
/* 80220194 0021D274  57 80 07 39 */	rlwinm. r0, r28, 0, 28, 28
/* 80220198 0021D278  41 82 00 B4 */	beq .L_8022024C
/* 8022019C 0021D27C  80 0D 9F 00 */	lwz r0, _rpDlGeomVtxFmtOffset@sda21(r13)
/* 802201A0 0021D280  7C 19 00 2E */	lwzx r0, r25, r0
/* 802201A4 0021D284  28 00 00 00 */	cmplwi r0, 0x0
/* 802201A8 0021D288  40 82 00 50 */	bne .L_802201F8
/* 802201AC 0021D28C  80 1A 00 04 */	lwz r0, 0x4(r26)
/* 802201B0 0021D290  38 80 00 00 */	li r4, 0x0
/* 802201B4 0021D294  54 00 00 3C */	clrrwi r0, r0, 1
/* 802201B8 0021D298  90 1A 00 04 */	stw r0, 0x4(r26)
/* 802201BC 0021D29C  7F E9 03 A6 */	mtctr r31
/* 802201C0 0021D2A0  28 1F 00 00 */	cmplwi r31, 0x0
/* 802201C4 0021D2A4  40 81 00 5C */	ble .L_80220220
.L_802201C8:
/* 802201C8 0021D2A8  80 79 00 30 */	lwz r3, 0x30(r25)
/* 802201CC 0021D2AC  38 04 00 03 */	addi r0, r4, 0x3
/* 802201D0 0021D2B0  7C 03 00 AE */	lbzx r0, r3, r0
/* 802201D4 0021D2B4  28 00 00 FF */	cmplwi r0, 0xff
/* 802201D8 0021D2B8  40 80 00 14 */	bge .L_802201EC
/* 802201DC 0021D2BC  80 1A 00 04 */	lwz r0, 0x4(r26)
/* 802201E0 0021D2C0  60 00 00 01 */	ori r0, r0, 0x1
/* 802201E4 0021D2C4  90 1A 00 04 */	stw r0, 0x4(r26)
/* 802201E8 0021D2C8  48 00 00 38 */	b .L_80220220
.L_802201EC:
/* 802201EC 0021D2CC  38 84 00 04 */	addi r4, r4, 0x4
/* 802201F0 0021D2D0  42 00 FF D8 */	bdnz .L_802201C8
/* 802201F4 0021D2D4  48 00 00 2C */	b .L_80220220
.L_802201F8:
/* 802201F8 0021D2D8  88 1B 00 0A */	lbz r0, 0xa(r27)
/* 802201FC 0021D2DC  28 00 00 02 */	cmplwi r0, 0x2
/* 80220200 0021D2E0  40 81 00 14 */	ble .L_80220214
/* 80220204 0021D2E4  80 1A 00 04 */	lwz r0, 0x4(r26)
/* 80220208 0021D2E8  60 00 00 01 */	ori r0, r0, 0x1
/* 8022020C 0021D2EC  90 1A 00 04 */	stw r0, 0x4(r26)
/* 80220210 0021D2F0  48 00 00 10 */	b .L_80220220
.L_80220214:
/* 80220214 0021D2F4  80 1A 00 04 */	lwz r0, 0x4(r26)
/* 80220218 0021D2F8  54 00 00 3C */	clrrwi r0, r0, 1
/* 8022021C 0021D2FC  90 1A 00 04 */	stw r0, 0x4(r26)
.L_80220220:
/* 80220220 0021D300  57 A0 18 38 */	slwi r0, r29, 3
/* 80220224 0021D304  80 99 00 30 */	lwz r4, 0x30(r25)
/* 80220228 0021D308  7F 1A 02 14 */	add r24, r26, r0
/* 8022022C 0021D30C  88 BB 00 0A */	lbz r5, 0xa(r27)
/* 80220230 0021D310  80 78 00 0C */	lwz r3, 0xc(r24)
/* 80220234 0021D314  80 D9 00 14 */	lwz r6, 0x14(r25)
/* 80220238 0021D318  88 F8 00 11 */	lbz r7, 0x11(r24)
/* 8022023C 0021D31C  48 00 61 85 */	bl _rwGCNVtxFmtInstClr
/* 80220240 0021D320  7C 64 1B 78 */	mr r4, r3
/* 80220244 0021D324  80 78 00 0C */	lwz r3, 0xc(r24)
/* 80220248 0021D328  4B FB 21 11 */	bl DCFlushRange
.L_8022024C:
/* 8022024C 0021D32C  3B BD 00 01 */	addi r29, r29, 0x1
.L_80220250:
/* 80220250 0021D330  73 C0 00 84 */	andi. r0, r30, 0x84
/* 80220254 0021D334  41 82 00 90 */	beq .L_802202E4
/* 80220258 0021D338  57 A0 18 38 */	slwi r0, r29, 3
/* 8022025C 0021D33C  7F 3F CB 78 */	mr r31, r25
/* 80220260 0021D340  7F 5A 02 14 */	add r26, r26, r0
/* 80220264 0021D344  3B A0 00 00 */	li r29, 0x0
/* 80220268 0021D348  48 00 00 70 */	b .L_802202D8
.L_8022026C:
/* 8022026C 0021D34C  38 00 00 10 */	li r0, 0x10
/* 80220270 0021D350  7C 00 E8 30 */	slw r0, r0, r29
/* 80220274 0021D354  7C 00 E0 39 */	and. r0, r0, r28
/* 80220278 0021D358  41 82 00 54 */	beq .L_802202CC
/* 8022027C 0021D35C  7C BB EA 14 */	add r5, r27, r29
/* 80220280 0021D360  3C 00 43 30 */	lis r0, 0x4330
/* 80220284 0021D364  88 65 00 0E */	lbz r3, 0xe(r5)
/* 80220288 0021D368  38 80 00 01 */	li r4, 0x1
/* 8022028C 0021D36C  90 01 00 08 */	stw r0, 0x8(r1)
/* 80220290 0021D370  7C 80 18 30 */	slw r0, r4, r3
/* 80220294 0021D374  C8 22 BB D8 */	lfd f1, "@366"@sda21(r2)
/* 80220298 0021D378  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8022029C 0021D37C  80 7A 00 0C */	lwz r3, 0xc(r26)
/* 802202A0 0021D380  90 01 00 0C */	stw r0, 0xc(r1)
/* 802202A4 0021D384  80 9F 00 34 */	lwz r4, 0x34(r31)
/* 802202A8 0021D388  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 802202AC 0021D38C  88 A5 00 02 */	lbz r5, 0x2(r5)
/* 802202B0 0021D390  EC 20 08 28 */	fsubs f1, f0, f1
/* 802202B4 0021D394  80 D9 00 14 */	lwz r6, 0x14(r25)
/* 802202B8 0021D398  88 FA 00 11 */	lbz r7, 0x11(r26)
/* 802202BC 0021D39C  48 00 69 85 */	bl _rwGCNVtxFmtInstTex
/* 802202C0 0021D3A0  7C 64 1B 78 */	mr r4, r3
/* 802202C4 0021D3A4  80 7A 00 0C */	lwz r3, 0xc(r26)
/* 802202C8 0021D3A8  4B FB 20 91 */	bl DCFlushRange
.L_802202CC:
/* 802202CC 0021D3AC  3B 5A 00 08 */	addi r26, r26, 0x8
/* 802202D0 0021D3B0  3B FF 00 04 */	addi r31, r31, 0x4
/* 802202D4 0021D3B4  3B BD 00 01 */	addi r29, r29, 0x1
.L_802202D8:
/* 802202D8 0021D3B8  80 19 00 1C */	lwz r0, 0x1c(r25)
/* 802202DC 0021D3BC  7C 1D 00 00 */	cmpw r29, r0
/* 802202E0 0021D3C0  41 80 FF 8C */	blt .L_8022026C
.L_802202E4:
/* 802202E4 0021D3C4  4B FA B5 01 */	bl GXInvalidateVtxCache
/* 802202E8 0021D3C8  39 61 00 30 */	addi r11, r1, 0x30
/* 802202EC 0021D3CC  4B FC D2 59 */	bl _restgpr_24
/* 802202F0 0021D3D0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802202F4 0021D3D4  7C 08 03 A6 */	mtlr r0
/* 802202F8 0021D3D8  38 21 00 30 */	addi r1, r1, 0x30
/* 802202FC 0021D3DC  4E 80 00 20 */	blr
.endfn _rxGCDefaultReinstance

.fn _rxGCAtomicDefaultReinstanceCallback, local
/* 80220300 0021D3E0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80220304 0021D3E4  7C 08 02 A6 */	mflr r0
/* 80220308 0021D3E8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8022030C 0021D3EC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80220310 0021D3F0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80220314 0021D3F4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80220318 0021D3F8  7C 9D 23 78 */	mr r29, r4
/* 8022031C 0021D3FC  93 81 00 10 */	stw r28, 0x10(r1)
/* 80220320 0021D400  7C 7C 1B 78 */	mr r28, r3
/* 80220324 0021D404  83 E3 00 18 */	lwz r31, 0x18(r3)
/* 80220328 0021D408  80 64 00 00 */	lwz r3, 0x0(r4)
/* 8022032C 0021D40C  A0 1F 00 0C */	lhz r0, 0xc(r31)
/* 80220330 0021D410  3B C3 00 18 */	addi r30, r3, 0x18
/* 80220334 0021D414  28 00 00 00 */	cmplwi r0, 0x0
/* 80220338 0021D418  41 82 00 7C */	beq .L_802203B4
/* 8022033C 0021D41C  A0 7E 00 00 */	lhz r3, 0x0(r30)
/* 80220340 0021D420  A0 0D 88 30 */	lhz r0, _RwDlTokenCurrent@sda21(r13)
/* 80220344 0021D424  7C 03 00 40 */	cmplw r3, r0
/* 80220348 0021D428  40 82 00 44 */	bne .L_8022038C
/* 8022034C 0021D42C  A0 6D 88 30 */	lhz r3, _RwDlTokenCurrent@sda21(r13)
/* 80220350 0021D430  4B FA B9 BD */	bl GXSetDrawSync
/* 80220354 0021D434  A0 AD 88 30 */	lhz r5, _RwDlTokenCurrent@sda21(r13)
/* 80220358 0021D438  3C 80 92 49 */	lis r4, 0x9249
/* 8022035C 0021D43C  38 04 24 93 */	addi r0, r4, 0x2493
/* 80220360 0021D440  3C 60 00 01 */	lis r3, 0x1
/* 80220364 0021D444  38 A5 00 01 */	addi r5, r5, 0x1
/* 80220368 0021D448  7C 80 28 96 */	mulhw r4, r0, r5
/* 8022036C 0021D44C  38 03 E0 00 */	addi r0, r3, -0x2000
/* 80220370 0021D450  7C 64 2A 14 */	add r3, r4, r5
/* 80220374 0021D454  7C 63 7E 70 */	srawi r3, r3, 15
/* 80220378 0021D458  54 64 0F FE */	srwi r4, r3, 31
/* 8022037C 0021D45C  7C 63 22 14 */	add r3, r3, r4
/* 80220380 0021D460  7C 03 01 D6 */	mullw r0, r3, r0
/* 80220384 0021D464  7C 00 28 50 */	subf r0, r0, r5
/* 80220388 0021D468  B0 0D 88 30 */	sth r0, _RwDlTokenCurrent@sda21(r13)
.L_8022038C:
/* 8022038C 0021D46C  A0 7E 00 00 */	lhz r3, 0x0(r30)
/* 80220390 0021D470  48 02 B8 45 */	bl _rwDlTokenQueryDone
/* 80220394 0021D474  2C 03 00 00 */	cmpwi r3, 0x0
/* 80220398 0021D478  41 82 FF F4 */	beq .L_8022038C
/* 8022039C 0021D47C  80 BD 00 28 */	lwz r5, 0x28(r29)
/* 802203A0 0021D480  7F E3 FB 78 */	mr r3, r31
/* 802203A4 0021D484  7F C4 F3 78 */	mr r4, r30
/* 802203A8 0021D488  4B FF FC F1 */	bl _rxGCDefaultReinstance
/* 802203AC 0021D48C  38 00 00 00 */	li r0, 0x0
/* 802203B0 0021D490  B0 1F 00 0C */	sth r0, 0xc(r31)
.L_802203B4:
/* 802203B4 0021D494  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 802203B8 0021D498  2C 00 00 01 */	cmpwi r0, 0x1
/* 802203BC 0021D49C  41 82 00 8C */	beq .L_80220448
/* 802203C0 0021D4A0  80 1C 00 4C */	lwz r0, 0x4c(r28)
/* 802203C4 0021D4A4  54 00 07 FF */	clrlwi. r0, r0, 31
/* 802203C8 0021D4A8  41 82 00 80 */	beq .L_80220448
/* 802203CC 0021D4AC  A0 7E 00 00 */	lhz r3, 0x0(r30)
/* 802203D0 0021D4B0  A0 0D 88 30 */	lhz r0, _RwDlTokenCurrent@sda21(r13)
/* 802203D4 0021D4B4  7C 03 00 40 */	cmplw r3, r0
/* 802203D8 0021D4B8  40 82 00 44 */	bne .L_8022041C
/* 802203DC 0021D4BC  A0 6D 88 30 */	lhz r3, _RwDlTokenCurrent@sda21(r13)
/* 802203E0 0021D4C0  4B FA B9 2D */	bl GXSetDrawSync
/* 802203E4 0021D4C4  A0 AD 88 30 */	lhz r5, _RwDlTokenCurrent@sda21(r13)
/* 802203E8 0021D4C8  3C 80 92 49 */	lis r4, 0x9249
/* 802203EC 0021D4CC  38 04 24 93 */	addi r0, r4, 0x2493
/* 802203F0 0021D4D0  3C 60 00 01 */	lis r3, 0x1
/* 802203F4 0021D4D4  38 A5 00 01 */	addi r5, r5, 0x1
/* 802203F8 0021D4D8  7C 80 28 96 */	mulhw r4, r0, r5
/* 802203FC 0021D4DC  38 03 E0 00 */	addi r0, r3, -0x2000
/* 80220400 0021D4E0  7C 64 2A 14 */	add r3, r4, r5
/* 80220404 0021D4E4  7C 63 7E 70 */	srawi r3, r3, 15
/* 80220408 0021D4E8  54 64 0F FE */	srwi r4, r3, 31
/* 8022040C 0021D4EC  7C 63 22 14 */	add r3, r3, r4
/* 80220410 0021D4F0  7C 03 01 D6 */	mullw r0, r3, r0
/* 80220414 0021D4F4  7C 00 28 50 */	subf r0, r0, r5
/* 80220418 0021D4F8  B0 0D 88 30 */	sth r0, _RwDlTokenCurrent@sda21(r13)
.L_8022041C:
/* 8022041C 0021D4FC  A0 7E 00 00 */	lhz r3, 0x0(r30)
/* 80220420 0021D500  48 02 B7 B5 */	bl _rwDlTokenQueryDone
/* 80220424 0021D504  2C 03 00 00 */	cmpwi r3, 0x0
/* 80220428 0021D508  41 82 FF F4 */	beq .L_8022041C
/* 8022042C 0021D50C  7F E3 FB 78 */	mr r3, r31
/* 80220430 0021D510  7F C4 F3 78 */	mr r4, r30
/* 80220434 0021D514  38 BC 00 4C */	addi r5, r28, 0x4c
/* 80220438 0021D518  48 00 0D ED */	bl _rxGCInstanceMorphUpdate
/* 8022043C 0021D51C  80 1C 00 4C */	lwz r0, 0x4c(r28)
/* 80220440 0021D520  54 00 00 3C */	clrrwi r0, r0, 1
/* 80220444 0021D524  90 1C 00 4C */	stw r0, 0x4c(r28)
.L_80220448:
/* 80220448 0021D528  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8022044C 0021D52C  7F 83 E3 78 */	mr r3, r28
/* 80220450 0021D530  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80220454 0021D534  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80220458 0021D538  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8022045C 0021D53C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80220460 0021D540  7C 08 03 A6 */	mtlr r0
/* 80220464 0021D544  38 21 00 20 */	addi r1, r1, 0x20
/* 80220468 0021D548  4E 80 00 20 */	blr
.endfn _rxGCAtomicDefaultReinstanceCallback

.fn _rxGCAtomicDefaultInstanceCallback, local
/* 8022046C 0021D54C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80220470 0021D550  7C 08 02 A6 */	mflr r0
/* 80220474 0021D554  90 01 00 24 */	stw r0, 0x24(r1)
/* 80220478 0021D558  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8022047C 0021D55C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80220480 0021D560  7C 9E 23 78 */	mr r30, r4
/* 80220484 0021D564  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80220488 0021D568  7C 7D 1B 78 */	mr r29, r3
/* 8022048C 0021D56C  83 E3 00 18 */	lwz r31, 0x18(r3)
/* 80220490 0021D570  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 80220494 0021D574  2C 00 00 01 */	cmpwi r0, 0x1
/* 80220498 0021D578  41 82 00 10 */	beq .L_802204A8
/* 8022049C 0021D57C  7C 64 1B 78 */	mr r4, r3
/* 802204A0 0021D580  38 A3 00 14 */	addi r5, r3, 0x14
/* 802204A4 0021D584  48 00 00 0C */	b .L_802204B0
.L_802204A8:
/* 802204A8 0021D588  7F E4 FB 78 */	mr r4, r31
/* 802204AC 0021D58C  38 BF 00 58 */	addi r5, r31, 0x58
.L_802204B0:
/* 802204B0 0021D590  80 1F 00 08 */	lwz r0, 0x8(r31)
/* 802204B4 0021D594  54 00 01 8D */	rlwinm. r0, r0, 0, 6, 6
/* 802204B8 0021D598  41 82 00 30 */	beq .L_802204E8
/* 802204BC 0021D59C  80 0D 87 78 */	lwz r0, _RwDlPreInstanceOptimize@sda21(r13)
/* 802204C0 0021D5A0  2C 00 00 01 */	cmpwi r0, 0x1
/* 802204C4 0021D5A4  40 82 00 14 */	bne .L_802204D8
/* 802204C8 0021D5A8  7F E3 FB 78 */	mr r3, r31
/* 802204CC 0021D5AC  48 00 7C 7D */	bl _rwDlGeometryInstanceOptimized
/* 802204D0 0021D5B0  90 7E 00 00 */	stw r3, 0x0(r30)
/* 802204D4 0021D5B4  48 00 00 20 */	b .L_802204F4
.L_802204D8:
/* 802204D8 0021D5B8  7F E3 FB 78 */	mr r3, r31
/* 802204DC 0021D5BC  48 00 85 8D */	bl _rwDlGeometryInstanceFast
/* 802204E0 0021D5C0  90 7E 00 00 */	stw r3, 0x0(r30)
/* 802204E4 0021D5C4  48 00 00 10 */	b .L_802204F4
.L_802204E8:
/* 802204E8 0021D5C8  7F E3 FB 78 */	mr r3, r31
/* 802204EC 0021D5CC  48 00 85 7D */	bl _rwDlGeometryInstanceFast
/* 802204F0 0021D5D0  90 7E 00 00 */	stw r3, 0x0(r30)
.L_802204F4:
/* 802204F4 0021D5D4  38 00 00 00 */	li r0, 0x0
/* 802204F8 0021D5D8  7F A3 EB 78 */	mr r3, r29
/* 802204FC 0021D5DC  B0 1F 00 0C */	sth r0, 0xc(r31)
/* 80220500 0021D5E0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80220504 0021D5E4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80220508 0021D5E8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8022050C 0021D5EC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80220510 0021D5F0  7C 08 03 A6 */	mtlr r0
/* 80220514 0021D5F4  38 21 00 20 */	addi r1, r1, 0x20
/* 80220518 0021D5F8  4E 80 00 20 */	blr
.endfn _rxGCAtomicDefaultInstanceCallback

.fn _rxGCAtomicAllInOneNode, local
/* 8022051C 0021D5FC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80220520 0021D600  7C 08 02 A6 */	mflr r0
/* 80220524 0021D604  90 01 00 44 */	stw r0, 0x44(r1)
/* 80220528 0021D608  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8022052C 0021D60C  83 E4 00 00 */	lwz r31, 0x0(r4)
/* 80220530 0021D610  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80220534 0021D614  83 C3 00 14 */	lwz r30, 0x14(r3)
/* 80220538 0021D618  80 9F 00 18 */	lwz r4, 0x18(r31)
/* 8022053C 0021D61C  93 C1 00 30 */	stw r30, 0x30(r1)
/* 80220540 0021D620  80 64 00 08 */	lwz r3, 0x8(r4)
/* 80220544 0021D624  54 60 01 CF */	rlwinm. r0, r3, 0, 7, 7
/* 80220548 0021D628  40 82 01 A4 */	bne .L_802206EC
/* 8022054C 0021D62C  80 04 00 14 */	lwz r0, 0x14(r4)
/* 80220550 0021D630  28 00 00 00 */	cmplwi r0, 0x0
/* 80220554 0021D634  40 82 00 0C */	bne .L_80220560
/* 80220558 0021D638  38 60 00 01 */	li r3, 0x1
/* 8022055C 0021D63C  48 00 02 2C */	b .L_80220788
.L_80220560:
/* 80220560 0021D640  80 A4 00 54 */	lwz r5, 0x54(r4)
/* 80220564 0021D644  A0 05 00 04 */	lhz r0, 0x4(r5)
/* 80220568 0021D648  28 00 00 00 */	cmplwi r0, 0x0
/* 8022056C 0021D64C  40 82 00 0C */	bne .L_80220578
/* 80220570 0021D650  38 60 00 01 */	li r3, 0x1
/* 80220574 0021D654  48 00 02 14 */	b .L_80220788
.L_80220578:
/* 80220578 0021D658  80 04 00 18 */	lwz r0, 0x18(r4)
/* 8022057C 0021D65C  2C 00 00 01 */	cmpwi r0, 0x1
/* 80220580 0021D660  41 82 00 0C */	beq .L_8022058C
/* 80220584 0021D664  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 80220588 0021D668  48 00 00 08 */	b .L_80220590
.L_8022058C:
/* 8022058C 0021D66C  80 64 00 58 */	lwz r3, 0x58(r4)
.L_80220590:
/* 80220590 0021D670  90 61 00 08 */	stw r3, 0x8(r1)
/* 80220594 0021D674  28 03 00 00 */	cmplwi r3, 0x0
/* 80220598 0021D678  80 04 00 54 */	lwz r0, 0x54(r4)
/* 8022059C 0021D67C  90 01 00 0C */	stw r0, 0xc(r1)
/* 802205A0 0021D680  80 04 00 08 */	lwz r0, 0x8(r4)
/* 802205A4 0021D684  90 01 00 10 */	stw r0, 0x10(r1)
/* 802205A8 0021D688  41 82 00 20 */	beq .L_802205C8
/* 802205AC 0021D68C  A0 83 00 1A */	lhz r4, 0x1a(r3)
/* 802205B0 0021D690  A0 05 00 06 */	lhz r0, 0x6(r5)
/* 802205B4 0021D694  7C 04 00 40 */	cmplw r4, r0
/* 802205B8 0021D698  41 82 00 10 */	beq .L_802205C8
/* 802205BC 0021D69C  48 01 18 61 */	bl RwResourcesFreeResEntry
/* 802205C0 0021D6A0  38 00 00 00 */	li r0, 0x0
/* 802205C4 0021D6A4  90 01 00 08 */	stw r0, 0x8(r1)
.L_802205C8:
/* 802205C8 0021D6A8  80 01 00 08 */	lwz r0, 0x8(r1)
/* 802205CC 0021D6AC  28 00 00 00 */	cmplwi r0, 0x0
/* 802205D0 0021D6B0  41 82 00 C4 */	beq .L_80220694
/* 802205D4 0021D6B4  81 9E 00 04 */	lwz r12, 0x4(r30)
/* 802205D8 0021D6B8  28 0C 00 00 */	cmplwi r12, 0x0
/* 802205DC 0021D6BC  41 82 00 24 */	beq .L_80220600
/* 802205E0 0021D6C0  7F E3 FB 78 */	mr r3, r31
/* 802205E4 0021D6C4  38 81 00 08 */	addi r4, r1, 0x8
/* 802205E8 0021D6C8  7D 89 03 A6 */	mtctr r12
/* 802205EC 0021D6CC  4E 80 04 21 */	bctrl
/* 802205F0 0021D6D0  7C 03 F8 40 */	cmplw r3, r31
/* 802205F4 0021D6D4  41 82 00 0C */	beq .L_80220600
/* 802205F8 0021D6D8  38 60 00 00 */	li r3, 0x0
/* 802205FC 0021D6DC  48 00 01 8C */	b .L_80220788
.L_80220600:
/* 80220600 0021D6E0  80 61 00 08 */	lwz r3, 0x8(r1)
/* 80220604 0021D6E4  80 03 00 00 */	lwz r0, 0x0(r3)
/* 80220608 0021D6E8  28 00 00 00 */	cmplwi r0, 0x0
/* 8022060C 0021D6EC  41 82 01 20 */	beq .L_8022072C
/* 80220610 0021D6F0  80 63 00 04 */	lwz r3, 0x4(r3)
/* 80220614 0021D6F4  90 03 00 00 */	stw r0, 0x0(r3)
/* 80220618 0021D6F8  80 61 00 08 */	lwz r3, 0x8(r1)
/* 8022061C 0021D6FC  80 03 00 04 */	lwz r0, 0x4(r3)
/* 80220620 0021D700  80 63 00 00 */	lwz r3, 0x0(r3)
/* 80220624 0021D704  90 03 00 04 */	stw r0, 0x4(r3)
/* 80220628 0021D708  80 6D 9F 48 */	lwz r3, resourcesModule@sda21(r13)
/* 8022062C 0021D70C  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 80220630 0021D710  38 03 00 24 */	addi r0, r3, 0x24
/* 80220634 0021D714  80 61 00 08 */	lwz r3, 0x8(r1)
/* 80220638 0021D718  7C 84 00 2E */	lwzx r4, r4, r0
/* 8022063C 0021D71C  80 04 00 00 */	lwz r0, 0x0(r4)
/* 80220640 0021D720  90 03 00 00 */	stw r0, 0x0(r3)
/* 80220644 0021D724  80 6D 9F 48 */	lwz r3, resourcesModule@sda21(r13)
/* 80220648 0021D728  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8022064C 0021D72C  38 03 00 24 */	addi r0, r3, 0x24
/* 80220650 0021D730  80 61 00 08 */	lwz r3, 0x8(r1)
/* 80220654 0021D734  7C 04 00 2E */	lwzx r0, r4, r0
/* 80220658 0021D738  90 03 00 04 */	stw r0, 0x4(r3)
/* 8022065C 0021D73C  80 6D 9F 48 */	lwz r3, resourcesModule@sda21(r13)
/* 80220660 0021D740  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 80220664 0021D744  38 03 00 24 */	addi r0, r3, 0x24
/* 80220668 0021D748  80 A1 00 08 */	lwz r5, 0x8(r1)
/* 8022066C 0021D74C  7C 64 00 2E */	lwzx r3, r4, r0
/* 80220670 0021D750  80 63 00 00 */	lwz r3, 0x0(r3)
/* 80220674 0021D754  90 A3 00 04 */	stw r5, 0x4(r3)
/* 80220678 0021D758  80 6D 9F 48 */	lwz r3, resourcesModule@sda21(r13)
/* 8022067C 0021D75C  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 80220680 0021D760  38 03 00 24 */	addi r0, r3, 0x24
/* 80220684 0021D764  80 A1 00 08 */	lwz r5, 0x8(r1)
/* 80220688 0021D768  7C 64 00 2E */	lwzx r3, r4, r0
/* 8022068C 0021D76C  90 A3 00 00 */	stw r5, 0x0(r3)
/* 80220690 0021D770  48 00 00 9C */	b .L_8022072C
.L_80220694:
/* 80220694 0021D774  81 9E 00 00 */	lwz r12, 0x0(r30)
/* 80220698 0021D778  28 0C 00 00 */	cmplwi r12, 0x0
/* 8022069C 0021D77C  41 82 00 24 */	beq .L_802206C0
/* 802206A0 0021D780  7F E3 FB 78 */	mr r3, r31
/* 802206A4 0021D784  38 81 00 08 */	addi r4, r1, 0x8
/* 802206A8 0021D788  7D 89 03 A6 */	mtctr r12
/* 802206AC 0021D78C  4E 80 04 21 */	bctrl
/* 802206B0 0021D790  7C 03 F8 40 */	cmplw r3, r31
/* 802206B4 0021D794  41 82 00 0C */	beq .L_802206C0
/* 802206B8 0021D798  38 60 00 00 */	li r3, 0x0
/* 802206BC 0021D79C  48 00 00 CC */	b .L_80220788
.L_802206C0:
/* 802206C0 0021D7A0  81 9E 00 04 */	lwz r12, 0x4(r30)
/* 802206C4 0021D7A4  28 0C 00 00 */	cmplwi r12, 0x0
/* 802206C8 0021D7A8  41 82 00 64 */	beq .L_8022072C
/* 802206CC 0021D7AC  7F E3 FB 78 */	mr r3, r31
/* 802206D0 0021D7B0  38 81 00 08 */	addi r4, r1, 0x8
/* 802206D4 0021D7B4  7D 89 03 A6 */	mtctr r12
/* 802206D8 0021D7B8  4E 80 04 21 */	bctrl
/* 802206DC 0021D7BC  7C 03 F8 40 */	cmplw r3, r31
/* 802206E0 0021D7C0  41 82 00 4C */	beq .L_8022072C
/* 802206E4 0021D7C4  38 60 00 00 */	li r3, 0x0
/* 802206E8 0021D7C8  48 00 00 A0 */	b .L_80220788
.L_802206EC:
/* 802206EC 0021D7CC  80 04 00 58 */	lwz r0, 0x58(r4)
/* 802206F0 0021D7D0  90 01 00 08 */	stw r0, 0x8(r1)
/* 802206F4 0021D7D4  80 04 00 54 */	lwz r0, 0x54(r4)
/* 802206F8 0021D7D8  90 01 00 0C */	stw r0, 0xc(r1)
/* 802206FC 0021D7DC  90 61 00 10 */	stw r3, 0x10(r1)
/* 80220700 0021D7E0  81 9E 00 04 */	lwz r12, 0x4(r30)
/* 80220704 0021D7E4  28 0C 00 00 */	cmplwi r12, 0x0
/* 80220708 0021D7E8  41 82 00 24 */	beq .L_8022072C
/* 8022070C 0021D7EC  7F E3 FB 78 */	mr r3, r31
/* 80220710 0021D7F0  38 81 00 08 */	addi r4, r1, 0x8
/* 80220714 0021D7F4  7D 89 03 A6 */	mtctr r12
/* 80220718 0021D7F8  4E 80 04 21 */	bctrl
/* 8022071C 0021D7FC  7C 03 F8 40 */	cmplw r3, r31
/* 80220720 0021D800  41 82 00 0C */	beq .L_8022072C
/* 80220724 0021D804  38 60 00 00 */	li r3, 0x0
/* 80220728 0021D808  48 00 00 60 */	b .L_80220788
.L_8022072C:
/* 8022072C 0021D80C  81 9E 00 08 */	lwz r12, 0x8(r30)
/* 80220730 0021D810  28 0C 00 00 */	cmplwi r12, 0x0
/* 80220734 0021D814  41 82 00 24 */	beq .L_80220758
/* 80220738 0021D818  7F E3 FB 78 */	mr r3, r31
/* 8022073C 0021D81C  38 81 00 08 */	addi r4, r1, 0x8
/* 80220740 0021D820  7D 89 03 A6 */	mtctr r12
/* 80220744 0021D824  4E 80 04 21 */	bctrl
/* 80220748 0021D828  7C 03 F8 40 */	cmplw r3, r31
/* 8022074C 0021D82C  41 82 00 0C */	beq .L_80220758
/* 80220750 0021D830  38 60 00 00 */	li r3, 0x0
/* 80220754 0021D834  48 00 00 34 */	b .L_80220788
.L_80220758:
/* 80220758 0021D838  81 9E 00 0C */	lwz r12, 0xc(r30)
/* 8022075C 0021D83C  28 0C 00 00 */	cmplwi r12, 0x0
/* 80220760 0021D840  41 82 00 24 */	beq .L_80220784
/* 80220764 0021D844  7F E3 FB 78 */	mr r3, r31
/* 80220768 0021D848  38 81 00 08 */	addi r4, r1, 0x8
/* 8022076C 0021D84C  7D 89 03 A6 */	mtctr r12
/* 80220770 0021D850  4E 80 04 21 */	bctrl
/* 80220774 0021D854  7C 03 F8 40 */	cmplw r3, r31
/* 80220778 0021D858  41 82 00 0C */	beq .L_80220784
/* 8022077C 0021D85C  38 60 00 00 */	li r3, 0x0
/* 80220780 0021D860  48 00 00 08 */	b .L_80220788
.L_80220784:
/* 80220784 0021D864  38 60 00 01 */	li r3, 0x1
.L_80220788:
/* 80220788 0021D868  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8022078C 0021D86C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80220790 0021D870  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80220794 0021D874  7C 08 03 A6 */	mtlr r0
/* 80220798 0021D878  38 21 00 40 */	addi r1, r1, 0x40
/* 8022079C 0021D87C  4E 80 00 20 */	blr
.endfn _rxGCAtomicAllInOneNode

.fn _rxGCAtomicAllInOnePipelineInit, local
/* 802207A0 0021D880  80 A3 00 14 */	lwz r5, 0x14(r3)
/* 802207A4 0021D884  3C 60 80 22 */	lis r3, _rxGCAtomicDefaultInstanceCallback@ha
/* 802207A8 0021D888  38 03 04 6C */	addi r0, r3, _rxGCAtomicDefaultInstanceCallback@l
/* 802207AC 0021D88C  3C 60 80 22 */	lis r3, _rxGCAtomicDefaultReinstanceCallback@ha
/* 802207B0 0021D890  90 05 00 00 */	stw r0, 0x0(r5)
/* 802207B4 0021D894  38 03 03 00 */	addi r0, r3, _rxGCAtomicDefaultReinstanceCallback@l
/* 802207B8 0021D898  3C 80 80 22 */	lis r4, _rxGCAtomicDefaultLightingCallback@ha
/* 802207BC 0021D89C  3C 60 80 22 */	lis r3, _rxGCDefaultRenderCallback@ha
/* 802207C0 0021D8A0  90 05 00 04 */	stw r0, 0x4(r5)
/* 802207C4 0021D8A4  38 84 FE E4 */	addi r4, r4, _rxGCAtomicDefaultLightingCallback@l
/* 802207C8 0021D8A8  38 03 F5 30 */	addi r0, r3, _rxGCDefaultRenderCallback@l
/* 802207CC 0021D8AC  38 60 00 01 */	li r3, 0x1
/* 802207D0 0021D8B0  90 85 00 08 */	stw r4, 0x8(r5)
/* 802207D4 0021D8B4  90 05 00 0C */	stw r0, 0xc(r5)
/* 802207D8 0021D8B8  4E 80 00 20 */	blr
.endfn _rxGCAtomicAllInOnePipelineInit

.fn RxNodeDefinitionGetGameCubeAtomicAllInOne, global
/* 802207DC 0021D8BC  3C 60 80 2B */	lis r3, nodeGameCubeAtomicAllInOneCSL$487@ha
/* 802207E0 0021D8C0  38 63 78 1C */	addi r3, r3, nodeGameCubeAtomicAllInOneCSL$487@l
/* 802207E4 0021D8C4  4E 80 00 20 */	blr
.endfn RxNodeDefinitionGetGameCubeAtomicAllInOne

# 0x802B7800 - 0x802B7860
.data
.balign 8

.obj "@488", local
	.4byte 0x47616D65
	.4byte 0x43756265
	.4byte 0x41746F6D
	.4byte 0x6963416C
	.4byte 0x6C496E4F
	.4byte 0x6E652E63
	.byte 0x73, 0x6C, 0x00
.endobj "@488"
	.byte 0x00

.obj nodeGameCubeAtomicAllInOneCSL$487, local
	.4byte "@488"
	.4byte _rxGCAtomicAllInOneNode
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte _rxGCAtomicAllInOnePipelineInit
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000010
	.4byte 0x00000000
	.4byte 0x00000000
.endobj nodeGameCubeAtomicAllInOneCSL$487
	.4byte 0x00000000

# 0x803D0550 - 0x803D0560
.section .sdata2, "a"
.balign 8

.obj "@311", local
	.4byte 0x00000000
.endobj "@311"

.obj "@312", local
	.4byte 0x3F800000
.endobj "@312"

.obj "@366", local
	.4byte 0x43300000
	.4byte 0x80000000
.endobj "@366"
