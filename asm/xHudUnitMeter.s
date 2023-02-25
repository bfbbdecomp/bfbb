.include "macros.inc"
.file "xHudUnitMeter.cpp"

# 0x8002FF80 - 0x8003062C
.text
.balign 4

# xhud::unit_meter_widget::load(xBase&, xDynAsset&, unsigned long)
.fn load__Q24xhud17unit_meter_widgetFR5xBaseR9xDynAssetUl, global
/* 8002FF80 0002D060  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002FF84 0002D064  7C 08 02 A6 */	mflr r0
/* 8002FF88 0002D068  38 A0 01 9C */	li r5, 0x19c
/* 8002FF8C 0002D06C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002FF90 0002D070  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002FF94 0002D074  7C 9F 23 78 */	mr r31, r4
/* 8002FF98 0002D078  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8002FF9C 0002D07C  7C 7E 1B 78 */	mr r30, r3
/* 8002FFA0 0002D080  4B FF DD 91 */	bl init_base__Q24xhud6widgetFR5xBaseRC10xBaseAssetUl
/* 8002FFA4 0002D084  38 9E 00 10 */	addi r4, r30, 0x10
/* 8002FFA8 0002D088  38 60 01 8C */	li r3, 0x18c
/* 8002FFAC 0002D08C  4B FF F0 35 */	bl __nw__FUlPv
/* 8002FFB0 0002D090  28 03 00 00 */	cmplwi r3, 0x0
/* 8002FFB4 0002D094  41 82 00 0C */	beq .L_8002FFC0
/* 8002FFB8 0002D098  7F E4 FB 78 */	mr r4, r31
/* 8002FFBC 0002D09C  48 00 00 1D */	bl __ct__Q24xhud17unit_meter_widgetFRCQ24xhud16unit_meter_asset
.L_8002FFC0:
/* 8002FFC0 0002D0A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002FFC4 0002D0A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002FFC8 0002D0A8  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8002FFCC 0002D0AC  7C 08 03 A6 */	mtlr r0
/* 8002FFD0 0002D0B0  38 21 00 10 */	addi r1, r1, 0x10
/* 8002FFD4 0002D0B4  4E 80 00 20 */	blr
.endfn load__Q24xhud17unit_meter_widgetFR5xBaseR9xDynAssetUl

# xhud::unit_meter_widget::unit_meter_widget(const xhud::unit_meter_asset&)
.fn __ct__Q24xhud17unit_meter_widgetFRCQ24xhud16unit_meter_asset, global
/* 8002FFD8 0002D0B8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002FFDC 0002D0BC  7C 08 02 A6 */	mflr r0
/* 8002FFE0 0002D0C0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002FFE4 0002D0C4  BF 41 00 08 */	stmw r26, 0x8(r1)
/* 8002FFE8 0002D0C8  7C 7F 1B 78 */	mr r31, r3
/* 8002FFEC 0002D0CC  7C 9A 23 78 */	mr r26, r4
/* 8002FFF0 0002D0D0  4B FF F7 6D */	bl __ct__Q24xhud12meter_widgetFRCQ24xhud11meter_asset
/* 8002FFF4 0002D0D4  3C 60 80 28 */	lis r3, __vt__Q24xhud17unit_meter_widget@ha
/* 8002FFF8 0002D0D8  38 00 00 12 */	li r0, 0x12
/* 8002FFFC 0002D0DC  38 63 D6 C8 */	addi r3, r3, __vt__Q24xhud17unit_meter_widget@l
/* 80030000 0002D0E0  38 BF 00 C0 */	addi r5, r31, 0xc0
/* 80030004 0002D0E4  90 7F 00 74 */	stw r3, 0x74(r31)
/* 80030008 0002D0E8  38 9A FF FC */	addi r4, r26, -0x4
/* 8003000C 0002D0EC  7C 09 03 A6 */	mtctr r0
.L_80030010:
/* 80030010 0002D0F0  80 64 00 04 */	lwz r3, 0x4(r4)
/* 80030014 0002D0F4  84 04 00 08 */	lwzu r0, 0x8(r4)
/* 80030018 0002D0F8  90 65 00 04 */	stw r3, 0x4(r5)
/* 8003001C 0002D0FC  94 05 00 08 */	stwu r0, 0x8(r5)
/* 80030020 0002D100  42 00 FF F0 */	bdnz .L_80030010
/* 80030024 0002D104  80 04 00 04 */	lwz r0, 0x4(r4)
/* 80030028 0002D108  3B DF 01 10 */	addi r30, r31, 0x110
/* 8003002C 0002D10C  3B 60 00 00 */	li r27, 0x0
/* 80030030 0002D110  3B 80 00 00 */	li r28, 0x0
/* 80030034 0002D114  90 05 00 04 */	stw r0, 0x4(r5)
/* 80030038 0002D118  C0 02 84 70 */	lfs f0, "@692"@sda21(r2)
/* 8003003C 0002D11C  D0 1F 01 88 */	stfs f0, 0x188(r31)
.L_80030040:
/* 80030040 0002D120  3B 40 00 00 */	li r26, 0x0
/* 80030044 0002D124  3B A0 00 00 */	li r29, 0x0
.L_80030048:
/* 80030048 0002D128  80 7E 00 00 */	lwz r3, 0x0(r30)
/* 8003004C 0002D12C  4B FF E7 11 */	bl load_model__4xhudFUi
/* 80030050 0002D130  7C 9F EA 14 */	add r4, r31, r29
/* 80030054 0002D134  3B 5A 00 01 */	addi r26, r26, 0x1
/* 80030058 0002D138  38 04 01 58 */	addi r0, r4, 0x158
/* 8003005C 0002D13C  3B BD 00 08 */	addi r29, r29, 0x8
/* 80030060 0002D140  2C 1A 00 06 */	cmpwi r26, 0x6
/* 80030064 0002D144  7C 7C 01 2E */	stwx r3, r28, r0
/* 80030068 0002D148  41 80 FF E0 */	blt .L_80030048
/* 8003006C 0002D14C  3B 7B 00 01 */	addi r27, r27, 0x1
/* 80030070 0002D150  3B 9C 00 04 */	addi r28, r28, 0x4
/* 80030074 0002D154  2C 1B 00 02 */	cmpwi r27, 0x2
/* 80030078 0002D158  3B DE 00 1C */	addi r30, r30, 0x1c
/* 8003007C 0002D15C  41 80 FF C4 */	blt .L_80030040
/* 80030080 0002D160  88 0D 89 C1 */	lbz r0, init$682@sda21(r13)
/* 80030084 0002D164  7C 00 07 75 */	extsb. r0, r0
/* 80030088 0002D168  40 82 00 14 */	bne .L_8003009C
/* 8003008C 0002D16C  38 60 00 00 */	li r3, 0x0
/* 80030090 0002D170  38 00 00 01 */	li r0, 0x1
/* 80030094 0002D174  98 6D 89 C0 */	stb r3, registered$681@sda21(r13)
/* 80030098 0002D178  98 0D 89 C1 */	stb r0, init$682@sda21(r13)
.L_8003009C:
/* 8003009C 0002D17C  88 0D 89 C0 */	lbz r0, registered$681@sda21(r13)
/* 800300A0 0002D180  28 00 00 00 */	cmplwi r0, 0x0
/* 800300A4 0002D184  40 82 00 30 */	bne .L_800300D4
/* 800300A8 0002D188  38 00 00 01 */	li r0, 0x1
/* 800300AC 0002D18C  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 800300B0 0002D190  98 0D 89 C0 */	stb r0, registered$681@sda21(r13)
/* 800300B4 0002D194  38 63 2F 90 */	addi r3, r3, "@stringBase0"@l
/* 800300B8 0002D198  38 8D 80 80 */	addi r4, r13, "tweak_anim_time_delta__Q24xhud27@unnamed@xHudUnitMeter_cpp@"@sda21
/* 800300BC 0002D19C  38 A0 00 00 */	li r5, 0x0
/* 800300C0 0002D1A0  C0 22 84 70 */	lfs f1, "@692"@sda21(r2)
/* 800300C4 0002D1A4  38 C0 00 00 */	li r6, 0x0
/* 800300C8 0002D1A8  C0 42 84 74 */	lfs f2, "@693"@sda21(r2)
/* 800300CC 0002D1AC  38 E0 00 00 */	li r7, 0x0
/* 800300D0 0002D1B0  48 00 05 5D */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
.L_800300D4:
/* 800300D4 0002D1B4  7F E3 FB 78 */	mr r3, r31
/* 800300D8 0002D1B8  BB 41 00 08 */	lmw r26, 0x8(r1)
/* 800300DC 0002D1BC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800300E0 0002D1C0  7C 08 03 A6 */	mtlr r0
/* 800300E4 0002D1C4  38 21 00 20 */	addi r1, r1, 0x20
/* 800300E8 0002D1C8  4E 80 00 20 */	blr
.endfn __ct__Q24xhud17unit_meter_widgetFRCQ24xhud16unit_meter_asset

# xhud::unit_meter_widget::destruct()
.fn destruct__Q24xhud17unit_meter_widgetFv, global
/* 800300EC 0002D1CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800300F0 0002D1D0  7C 08 02 A6 */	mflr r0
/* 800300F4 0002D1D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800300F8 0002D1D8  4B FF F6 E9 */	bl destruct__Q24xhud12meter_widgetFv
/* 800300FC 0002D1DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80030100 0002D1E0  7C 08 03 A6 */	mtlr r0
/* 80030104 0002D1E4  38 21 00 10 */	addi r1, r1, 0x10
/* 80030108 0002D1E8  4E 80 00 20 */	blr
.endfn destruct__Q24xhud17unit_meter_widgetFv

# xhud::unit_meter_widget::destroy()
.fn destroy__Q24xhud17unit_meter_widgetFv, global
/* 8003010C 0002D1EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80030110 0002D1F0  7C 08 02 A6 */	mflr r0
/* 80030114 0002D1F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80030118 0002D1F8  4B FF FF D5 */	bl destruct__Q24xhud17unit_meter_widgetFv
/* 8003011C 0002D1FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80030120 0002D200  7C 08 03 A6 */	mtlr r0
/* 80030124 0002D204  38 21 00 10 */	addi r1, r1, 0x10
/* 80030128 0002D208  4E 80 00 20 */	blr
.endfn destroy__Q24xhud17unit_meter_widgetFv

# xhud::unit_meter_widget::type() const
.fn type__Q24xhud17unit_meter_widgetCFv, global
/* 8003012C 0002D20C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80030130 0002D210  7C 08 02 A6 */	mflr r0
/* 80030134 0002D214  90 01 00 14 */	stw r0, 0x14(r1)
/* 80030138 0002D218  88 0D 89 C8 */	lbz r0, init$712@sda21(r13)
/* 8003013C 0002D21C  7C 00 07 75 */	extsb. r0, r0
/* 80030140 0002D220  40 82 00 18 */	bne .L_80030158
/* 80030144 0002D224  48 00 04 ED */	bl type_name__Q24xhud16unit_meter_assetFv
/* 80030148 0002D228  48 01 C0 CD */	bl xStrHash__FPCc
/* 8003014C 0002D22C  90 6D 89 C4 */	stw r3, myid$711@sda21(r13)
/* 80030150 0002D230  38 00 00 01 */	li r0, 0x1
/* 80030154 0002D234  98 0D 89 C8 */	stb r0, init$712@sda21(r13)
.L_80030158:
/* 80030158 0002D238  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8003015C 0002D23C  80 6D 89 C4 */	lwz r3, myid$711@sda21(r13)
/* 80030160 0002D240  7C 08 03 A6 */	mtlr r0
/* 80030164 0002D244  38 21 00 10 */	addi r1, r1, 0x10
/* 80030168 0002D248  4E 80 00 20 */	blr
.endfn type__Q24xhud17unit_meter_widgetCFv

# xhud::unit_meter_widget::is(unsigned int) const
.fn is__Q24xhud17unit_meter_widgetCFUi, global
/* 8003016C 0002D24C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80030170 0002D250  7C 08 02 A6 */	mflr r0
/* 80030174 0002D254  90 01 00 24 */	stw r0, 0x24(r1)
/* 80030178 0002D258  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8003017C 0002D25C  3B E0 00 00 */	li r31, 0x0
/* 80030180 0002D260  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80030184 0002D264  7C 9E 23 78 */	mr r30, r4
/* 80030188 0002D268  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8003018C 0002D26C  7C 7D 1B 78 */	mr r29, r3
/* 80030190 0002D270  4B FF FF 9D */	bl type__Q24xhud17unit_meter_widgetCFv
/* 80030194 0002D274  7C 1E 18 40 */	cmplw r30, r3
/* 80030198 0002D278  41 82 00 18 */	beq .L_800301B0
/* 8003019C 0002D27C  7F A3 EB 78 */	mr r3, r29
/* 800301A0 0002D280  7F C4 F3 78 */	mr r4, r30
/* 800301A4 0002D284  4B FF F6 9D */	bl is__Q24xhud12meter_widgetCFUi
/* 800301A8 0002D288  54 60 06 3F */	clrlwi. r0, r3, 24
/* 800301AC 0002D28C  41 82 00 08 */	beq .L_800301B4
.L_800301B0:
/* 800301B0 0002D290  3B E0 00 01 */	li r31, 0x1
.L_800301B4:
/* 800301B4 0002D294  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800301B8 0002D298  7F E3 FB 78 */	mr r3, r31
/* 800301BC 0002D29C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800301C0 0002D2A0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800301C4 0002D2A4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 800301C8 0002D2A8  7C 08 03 A6 */	mtlr r0
/* 800301CC 0002D2AC  38 21 00 20 */	addi r1, r1, 0x20
/* 800301D0 0002D2B0  4E 80 00 20 */	blr
.endfn is__Q24xhud17unit_meter_widgetCFUi

# xhud::unit_meter_widget::setup()
.fn setup__Q24xhud17unit_meter_widgetFv, global
/* 800301D4 0002D2B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800301D8 0002D2B8  7C 08 02 A6 */	mflr r0
/* 800301DC 0002D2BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800301E0 0002D2C0  4B FF DB D5 */	bl presetup__Q24xhud6widgetFv
/* 800301E4 0002D2C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800301E8 0002D2C8  7C 08 03 A6 */	mtlr r0
/* 800301EC 0002D2CC  38 21 00 10 */	addi r1, r1, 0x10
/* 800301F0 0002D2D0  4E 80 00 20 */	blr
.endfn setup__Q24xhud17unit_meter_widgetFv

# xhud::unit_meter_widget::update(float)
.fn update__Q24xhud17unit_meter_widgetFf, global
/* 800301F4 0002D2D4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 800301F8 0002D2D8  7C 08 02 A6 */	mflr r0
/* 800301FC 0002D2DC  90 01 00 44 */	stw r0, 0x44(r1)
/* 80030200 0002D2E0  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80030204 0002D2E4  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 80030208 0002D2E8  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 8003020C 0002D2EC  7C 7C 1B 78 */	mr r28, r3
/* 80030210 0002D2F0  FF E0 08 90 */	fmr f31, f1
/* 80030214 0002D2F4  4B FF F6 95 */	bl updater__Q24xhud12meter_widgetFf
/* 80030218 0002D2F8  7F 83 E3 78 */	mr r3, r28
/* 8003021C 0002D2FC  4B FF EC A5 */	bl visible__Q24xhud6widgetCFv
/* 80030220 0002D300  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80030224 0002D304  41 82 01 6C */	beq .L_80030390
/* 80030228 0002D308  C0 3C 00 34 */	lfs f1, 0x34(r28)
/* 8003022C 0002D30C  C0 02 84 78 */	lfs f0, "@756"@sda21(r2)
/* 80030230 0002D310  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80030234 0002D314  4C 40 13 82 */	cror eq, lt, eq
/* 80030238 0002D318  40 82 00 08 */	bne .L_80030240
/* 8003023C 0002D31C  48 00 01 54 */	b .L_80030390
.L_80030240:
/* 80030240 0002D320  C0 1C 01 88 */	lfs f0, 0x188(r28)
/* 80030244 0002D324  EC 00 F8 2A */	fadds f0, f0, f31
/* 80030248 0002D328  D0 1C 01 88 */	stfs f0, 0x188(r28)
/* 8003024C 0002D32C  C0 22 84 7C */	lfs f1, "@757"@sda21(r2)
/* 80030250 0002D330  C0 1C 00 90 */	lfs f0, 0x90(r28)
/* 80030254 0002D334  EC 01 00 2A */	fadds f0, f1, f0
/* 80030258 0002D338  FC 00 00 1E */	fctiwz f0, f0
/* 8003025C 0002D33C  D8 01 00 08 */	stfd f0, 0x8(r1)
/* 80030260 0002D340  83 C1 00 0C */	lwz r30, 0xc(r1)
/* 80030264 0002D344  2C 1E 00 06 */	cmpwi r30, 0x6
/* 80030268 0002D348  40 81 00 08 */	ble .L_80030270
/* 8003026C 0002D34C  3B C0 00 06 */	li r30, 0x6
.L_80030270:
/* 80030270 0002D350  7F 9F E3 78 */	mr r31, r28
/* 80030274 0002D354  3B A0 00 00 */	li r29, 0x0
/* 80030278 0002D358  48 00 01 10 */	b .L_80030388
.L_8003027C:
/* 8003027C 0002D35C  80 9C 01 54 */	lwz r4, 0x154(r28)
/* 80030280 0002D360  38 A0 00 00 */	li r5, 0x0
/* 80030284 0002D364  28 04 00 00 */	cmplwi r4, 0x0
/* 80030288 0002D368  41 82 00 34 */	beq .L_800302BC
/* 8003028C 0002D36C  38 7D 00 01 */	addi r3, r29, 0x1
/* 80030290 0002D370  3C 00 43 30 */	lis r0, 0x4330
/* 80030294 0002D374  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80030298 0002D378  90 01 00 08 */	stw r0, 0x8(r1)
/* 8003029C 0002D37C  C8 22 84 80 */	lfd f1, "@759"@sda21(r2)
/* 800302A0 0002D380  90 61 00 0C */	stw r3, 0xc(r1)
/* 800302A4 0002D384  C0 5C 00 88 */	lfs f2, 0x88(r28)
/* 800302A8 0002D388  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 800302AC 0002D38C  EC 00 08 28 */	fsubs f0, f0, f1
/* 800302B0 0002D390  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 800302B4 0002D394  4C 41 13 82 */	cror eq, gt, eq
/* 800302B8 0002D398  41 82 00 3C */	beq .L_800302F4
.L_800302BC:
/* 800302BC 0002D39C  28 04 00 00 */	cmplwi r4, 0x0
/* 800302C0 0002D3A0  40 82 00 38 */	bne .L_800302F8
/* 800302C4 0002D3A4  7C 7D F0 50 */	subf r3, r29, r30
/* 800302C8 0002D3A8  3C 00 43 30 */	lis r0, 0x4330
/* 800302CC 0002D3AC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 800302D0 0002D3B0  90 01 00 08 */	stw r0, 0x8(r1)
/* 800302D4 0002D3B4  C8 22 84 80 */	lfd f1, "@759"@sda21(r2)
/* 800302D8 0002D3B8  90 61 00 0C */	stw r3, 0xc(r1)
/* 800302DC 0002D3BC  C0 5C 00 88 */	lfs f2, 0x88(r28)
/* 800302E0 0002D3C0  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 800302E4 0002D3C4  EC 00 08 28 */	fsubs f0, f0, f1
/* 800302E8 0002D3C8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 800302EC 0002D3CC  4C 41 13 82 */	cror eq, gt, eq
/* 800302F0 0002D3D0  40 82 00 08 */	bne .L_800302F8
.L_800302F4:
/* 800302F4 0002D3D4  38 A0 00 01 */	li r5, 0x1
.L_800302F8:
/* 800302F8 0002D3D8  54 A3 10 3A */	slwi r3, r5, 2
/* 800302FC 0002D3DC  38 03 01 58 */	addi r0, r3, 0x158
/* 80030300 0002D3E0  7F 7F 00 2E */	lwzx r27, r31, r0
/* 80030304 0002D3E4  28 1B 00 00 */	cmplwi r27, 0x0
/* 80030308 0002D3E8  41 82 00 78 */	beq .L_80030380
/* 8003030C 0002D3EC  80 7B 00 0C */	lwz r3, 0xc(r27)
/* 80030310 0002D3F0  28 03 00 00 */	cmplwi r3, 0x0
/* 80030314 0002D3F4  41 82 00 6C */	beq .L_80030380
/* 80030318 0002D3F8  80 63 00 08 */	lwz r3, 0x8(r3)
/* 8003031C 0002D3FC  C0 02 84 70 */	lfs f0, "@692"@sda21(r2)
/* 80030320 0002D400  80 63 00 04 */	lwz r3, 0x4(r3)
/* 80030324 0002D404  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80030328 0002D408  C0 43 00 10 */	lfs f2, 0x10(r3)
/* 8003032C 0002D40C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80030330 0002D410  4C 40 13 82 */	cror eq, lt, eq
/* 80030334 0002D414  41 82 00 4C */	beq .L_80030380
/* 80030338 0002D418  6F A3 80 00 */	xoris r3, r29, 0x8000
/* 8003033C 0002D41C  3C 00 43 30 */	lis r0, 0x4330
/* 80030340 0002D420  90 61 00 0C */	stw r3, 0xc(r1)
/* 80030344 0002D424  C8 82 84 80 */	lfd f4, "@759"@sda21(r2)
/* 80030348 0002D428  90 01 00 08 */	stw r0, 0x8(r1)
/* 8003034C 0002D42C  C0 2D 80 80 */	lfs f1, "tweak_anim_time_delta__Q24xhud27@unnamed@xHudUnitMeter_cpp@"@sda21(r13)
/* 80030350 0002D430  C8 61 00 08 */	lfd f3, 0x8(r1)
/* 80030354 0002D434  C0 1C 01 88 */	lfs f0, 0x188(r28)
/* 80030358 0002D438  EC 63 20 28 */	fsubs f3, f3, f4
/* 8003035C 0002D43C  EC 23 00 7A */	fmadds f1, f3, f1, f0
/* 80030360 0002D440  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80030364 0002D444  40 81 00 08 */	ble .L_8003036C
/* 80030368 0002D448  48 00 00 45 */	bl xfmod__Fff
.L_8003036C:
/* 8003036C 0002D44C  80 9B 00 0C */	lwz r4, 0xc(r27)
/* 80030370 0002D450  7F 63 DB 78 */	mr r3, r27
/* 80030374 0002D454  80 84 00 08 */	lwz r4, 0x8(r4)
/* 80030378 0002D458  D0 24 00 08 */	stfs f1, 0x8(r4)
/* 8003037C 0002D45C  48 00 43 35 */	bl xModelEval__FP14xModelInstance
.L_80030380:
/* 80030380 0002D460  3B FF 00 08 */	addi r31, r31, 0x8
/* 80030384 0002D464  3B BD 00 01 */	addi r29, r29, 0x1
.L_80030388:
/* 80030388 0002D468  7C 1D F0 00 */	cmpw r29, r30
/* 8003038C 0002D46C  41 80 FE F0 */	blt .L_8003027C
.L_80030390:
/* 80030390 0002D470  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 80030394 0002D474  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80030398 0002D478  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 8003039C 0002D47C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 800303A0 0002D480  7C 08 03 A6 */	mtlr r0
/* 800303A4 0002D484  38 21 00 40 */	addi r1, r1, 0x40
/* 800303A8 0002D488  4E 80 00 20 */	blr
.endfn update__Q24xhud17unit_meter_widgetFf

# xfmod(float, float)
.fn xfmod__Fff, weak
/* 800303AC 0002D48C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800303B0 0002D490  7C 08 02 A6 */	mflr r0
/* 800303B4 0002D494  90 01 00 14 */	stw r0, 0x14(r1)
/* 800303B8 0002D498  48 00 00 15 */	bl fmodf__3stdFff
/* 800303BC 0002D49C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800303C0 0002D4A0  7C 08 03 A6 */	mtlr r0
/* 800303C4 0002D4A4  38 21 00 10 */	addi r1, r1, 0x10
/* 800303C8 0002D4A8  4E 80 00 20 */	blr
.endfn xfmod__Fff

# std::fmodf(float, float)
.fn fmodf__3stdFff, weak
/* 800303CC 0002D4AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800303D0 0002D4B0  7C 08 02 A6 */	mflr r0
/* 800303D4 0002D4B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800303D8 0002D4B8  48 1B C7 19 */	bl fmod
/* 800303DC 0002D4BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800303E0 0002D4C0  FC 20 08 18 */	frsp f1, f1
/* 800303E4 0002D4C4  7C 08 03 A6 */	mtlr r0
/* 800303E8 0002D4C8  38 21 00 10 */	addi r1, r1, 0x10
/* 800303EC 0002D4CC  4E 80 00 20 */	blr
.endfn fmodf__3stdFff

# xhud::unit_meter_widget::render()
.fn render__Q24xhud17unit_meter_widgetFv, global
/* 800303F0 0002D4D0  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 800303F4 0002D4D4  7C 08 02 A6 */	mflr r0
/* 800303F8 0002D4D8  90 01 00 74 */	stw r0, 0x74(r1)
/* 800303FC 0002D4DC  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 80030400 0002D4E0  93 C1 00 68 */	stw r30, 0x68(r1)
/* 80030404 0002D4E4  93 A1 00 64 */	stw r29, 0x64(r1)
/* 80030408 0002D4E8  7C 7D 1B 78 */	mr r29, r3
/* 8003040C 0002D4EC  93 81 00 60 */	stw r28, 0x60(r1)
/* 80030410 0002D4F0  80 63 00 04 */	lwz r3, 0x4(r3)
/* 80030414 0002D4F4  80 1D 00 08 */	lwz r0, 0x8(r29)
/* 80030418 0002D4F8  90 61 00 08 */	stw r3, 0x8(r1)
/* 8003041C 0002D4FC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80030420 0002D500  80 7D 00 0C */	lwz r3, 0xc(r29)
/* 80030424 0002D504  80 1D 00 10 */	lwz r0, 0x10(r29)
/* 80030428 0002D508  90 61 00 10 */	stw r3, 0x10(r1)
/* 8003042C 0002D50C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80030430 0002D510  80 7D 00 14 */	lwz r3, 0x14(r29)
/* 80030434 0002D514  80 1D 00 18 */	lwz r0, 0x18(r29)
/* 80030438 0002D518  90 61 00 18 */	stw r3, 0x18(r1)
/* 8003043C 0002D51C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80030440 0002D520  80 7D 00 1C */	lwz r3, 0x1c(r29)
/* 80030444 0002D524  80 1D 00 20 */	lwz r0, 0x20(r29)
/* 80030448 0002D528  90 61 00 20 */	stw r3, 0x20(r1)
/* 8003044C 0002D52C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80030450 0002D530  80 7D 00 24 */	lwz r3, 0x24(r29)
/* 80030454 0002D534  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 80030458 0002D538  90 61 00 28 */	stw r3, 0x28(r1)
/* 8003045C 0002D53C  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80030460 0002D540  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 80030464 0002D544  80 1D 00 30 */	lwz r0, 0x30(r29)
/* 80030468 0002D548  90 61 00 30 */	stw r3, 0x30(r1)
/* 8003046C 0002D54C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80030470 0002D550  80 1D 00 34 */	lwz r0, 0x34(r29)
/* 80030474 0002D554  90 01 00 38 */	stw r0, 0x38(r1)
/* 80030478 0002D558  C0 22 84 7C */	lfs f1, "@757"@sda21(r2)
/* 8003047C 0002D55C  C0 1D 00 90 */	lfs f0, 0x90(r29)
/* 80030480 0002D560  EC 01 00 2A */	fadds f0, f1, f0
/* 80030484 0002D564  FC 00 00 1E */	fctiwz f0, f0
/* 80030488 0002D568  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 8003048C 0002D56C  83 E1 00 44 */	lwz r31, 0x44(r1)
/* 80030490 0002D570  2C 1F 00 06 */	cmpwi r31, 0x6
/* 80030494 0002D574  40 81 00 08 */	ble .L_8003049C
/* 80030498 0002D578  3B E0 00 06 */	li r31, 0x6
.L_8003049C:
/* 8003049C 0002D57C  7F BC EB 78 */	mr r28, r29
/* 800304A0 0002D580  3B C0 00 00 */	li r30, 0x0
/* 800304A4 0002D584  48 00 01 60 */	b .L_80030604
.L_800304A8:
/* 800304A8 0002D588  80 9D 01 54 */	lwz r4, 0x154(r29)
/* 800304AC 0002D58C  38 A0 00 00 */	li r5, 0x0
/* 800304B0 0002D590  28 04 00 00 */	cmplwi r4, 0x0
/* 800304B4 0002D594  41 82 00 34 */	beq .L_800304E8
/* 800304B8 0002D598  38 7E 00 01 */	addi r3, r30, 0x1
/* 800304BC 0002D59C  3C 00 43 30 */	lis r0, 0x4330
/* 800304C0 0002D5A0  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 800304C4 0002D5A4  90 01 00 40 */	stw r0, 0x40(r1)
/* 800304C8 0002D5A8  C8 22 84 80 */	lfd f1, "@759"@sda21(r2)
/* 800304CC 0002D5AC  90 61 00 44 */	stw r3, 0x44(r1)
/* 800304D0 0002D5B0  C0 5D 00 88 */	lfs f2, 0x88(r29)
/* 800304D4 0002D5B4  C8 01 00 40 */	lfd f0, 0x40(r1)
/* 800304D8 0002D5B8  EC 00 08 28 */	fsubs f0, f0, f1
/* 800304DC 0002D5BC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 800304E0 0002D5C0  4C 41 13 82 */	cror eq, gt, eq
/* 800304E4 0002D5C4  41 82 00 3C */	beq .L_80030520
.L_800304E8:
/* 800304E8 0002D5C8  28 04 00 00 */	cmplwi r4, 0x0
/* 800304EC 0002D5CC  40 82 00 38 */	bne .L_80030524
/* 800304F0 0002D5D0  7C 7E F8 50 */	subf r3, r30, r31
/* 800304F4 0002D5D4  3C 00 43 30 */	lis r0, 0x4330
/* 800304F8 0002D5D8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 800304FC 0002D5DC  90 01 00 40 */	stw r0, 0x40(r1)
/* 80030500 0002D5E0  C8 22 84 80 */	lfd f1, "@759"@sda21(r2)
/* 80030504 0002D5E4  90 61 00 44 */	stw r3, 0x44(r1)
/* 80030508 0002D5E8  C0 5D 00 88 */	lfs f2, 0x88(r29)
/* 8003050C 0002D5EC  C8 01 00 40 */	lfd f0, 0x40(r1)
/* 80030510 0002D5F0  EC 00 08 28 */	fsubs f0, f0, f1
/* 80030514 0002D5F4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80030518 0002D5F8  4C 41 13 82 */	cror eq, gt, eq
/* 8003051C 0002D5FC  40 82 00 08 */	bne .L_80030524
.L_80030520:
/* 80030520 0002D600  38 A0 00 01 */	li r5, 0x1
.L_80030524:
/* 80030524 0002D604  54 A3 10 3A */	slwi r3, r5, 2
/* 80030528 0002D608  38 03 01 58 */	addi r0, r3, 0x158
/* 8003052C 0002D60C  7C 7C 00 2E */	lwzx r3, r28, r0
/* 80030530 0002D610  28 03 00 00 */	cmplwi r3, 0x0
/* 80030534 0002D614  41 82 00 C8 */	beq .L_800305FC
/* 80030538 0002D618  1C 05 00 1C */	mulli r0, r5, 0x1c
/* 8003053C 0002D61C  6F C6 80 00 */	xoris r6, r30, 0x8000
/* 80030540 0002D620  3C A0 43 30 */	lis r5, 0x4330
/* 80030544 0002D624  90 C1 00 44 */	stw r6, 0x44(r1)
/* 80030548 0002D628  C8 82 84 80 */	lfd f4, "@759"@sda21(r2)
/* 8003054C 0002D62C  38 81 00 08 */	addi r4, r1, 0x8
/* 80030550 0002D630  90 A1 00 40 */	stw r5, 0x40(r1)
/* 80030554 0002D634  7C FD 02 14 */	add r7, r29, r0
/* 80030558 0002D638  C0 3D 00 04 */	lfs f1, 0x4(r29)
/* 8003055C 0002D63C  C8 41 00 40 */	lfd f2, 0x40(r1)
/* 80030560 0002D640  C0 07 01 14 */	lfs f0, 0x114(r7)
/* 80030564 0002D644  EC 42 20 28 */	fsubs f2, f2, f4
/* 80030568 0002D648  C0 7D 01 48 */	lfs f3, 0x148(r29)
/* 8003056C 0002D64C  EC 01 00 2A */	fadds f0, f1, f0
/* 80030570 0002D650  90 C1 00 4C */	stw r6, 0x4c(r1)
/* 80030574 0002D654  90 A1 00 48 */	stw r5, 0x48(r1)
/* 80030578 0002D658  EC 23 00 BA */	fmadds f1, f3, f2, f0
/* 8003057C 0002D65C  C8 01 00 48 */	lfd f0, 0x48(r1)
/* 80030580 0002D660  90 C1 00 54 */	stw r6, 0x54(r1)
/* 80030584 0002D664  EC 40 20 28 */	fsubs f2, f0, f4
/* 80030588 0002D668  D0 21 00 08 */	stfs f1, 0x8(r1)
/* 8003058C 0002D66C  C0 3D 00 08 */	lfs f1, 0x8(r29)
/* 80030590 0002D670  C0 07 01 18 */	lfs f0, 0x118(r7)
/* 80030594 0002D674  C0 7D 01 4C */	lfs f3, 0x14c(r29)
/* 80030598 0002D678  EC 21 00 2A */	fadds f1, f1, f0
/* 8003059C 0002D67C  90 A1 00 50 */	stw r5, 0x50(r1)
/* 800305A0 0002D680  C8 01 00 50 */	lfd f0, 0x50(r1)
/* 800305A4 0002D684  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 800305A8 0002D688  EC 40 20 28 */	fsubs f2, f0, f4
/* 800305AC 0002D68C  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 800305B0 0002D690  C0 3D 00 0C */	lfs f1, 0xc(r29)
/* 800305B4 0002D694  C0 07 01 1C */	lfs f0, 0x11c(r7)
/* 800305B8 0002D698  C0 7D 01 50 */	lfs f3, 0x150(r29)
/* 800305BC 0002D69C  EC 01 00 2A */	fadds f0, f1, f0
/* 800305C0 0002D6A0  EC 03 00 BA */	fmadds f0, f3, f2, f0
/* 800305C4 0002D6A4  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 800305C8 0002D6A8  C0 3D 00 10 */	lfs f1, 0x10(r29)
/* 800305CC 0002D6AC  C0 07 01 20 */	lfs f0, 0x120(r7)
/* 800305D0 0002D6B0  EC 01 00 32 */	fmuls f0, f1, f0
/* 800305D4 0002D6B4  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 800305D8 0002D6B8  C0 3D 00 14 */	lfs f1, 0x14(r29)
/* 800305DC 0002D6BC  C0 07 01 24 */	lfs f0, 0x124(r7)
/* 800305E0 0002D6C0  EC 01 00 32 */	fmuls f0, f1, f0
/* 800305E4 0002D6C4  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 800305E8 0002D6C8  C0 3D 00 18 */	lfs f1, 0x18(r29)
/* 800305EC 0002D6CC  C0 07 01 28 */	lfs f0, 0x128(r7)
/* 800305F0 0002D6D0  EC 01 00 32 */	fmuls f0, f1, f0
/* 800305F4 0002D6D4  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 800305F8 0002D6D8  4B FF E2 81 */	bl render_model__4xhudFR14xModelInstanceRCQ24xhud14render_context
.L_800305FC:
/* 800305FC 0002D6DC  3B 9C 00 08 */	addi r28, r28, 0x8
/* 80030600 0002D6E0  3B DE 00 01 */	addi r30, r30, 0x1
.L_80030604:
/* 80030604 0002D6E4  7C 1E F8 00 */	cmpw r30, r31
/* 80030608 0002D6E8  41 80 FE A0 */	blt .L_800304A8
/* 8003060C 0002D6EC  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80030610 0002D6F0  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 80030614 0002D6F4  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 80030618 0002D6F8  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 8003061C 0002D6FC  83 81 00 60 */	lwz r28, 0x60(r1)
/* 80030620 0002D700  7C 08 03 A6 */	mtlr r0
/* 80030624 0002D704  38 21 00 70 */	addi r1, r1, 0x70
/* 80030628 0002D708  4E 80 00 20 */	blr
.endfn render__Q24xhud17unit_meter_widgetFv

# 0x8003062C - 0x80030630
.section .text, "ax", unique, 1
.balign 4

# xDebugAddTweak(const char*, float*, float, float, const tweak_callback*, void*, unsigned int)
.fn xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi, weak
/* 8003062C 0002D70C  4E 80 00 20 */	blr
.endfn xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi

# 0x80030630 - 0x80030640
.section .text, "ax", unique, 2
.balign 4

# xhud::unit_meter_asset::type_name()
.fn type_name__Q24xhud16unit_meter_assetFv, weak
/* 80030630 0002D710  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 80030634 0002D714  38 63 2F 90 */	addi r3, r3, "@stringBase0"@l
/* 80030638 0002D718  38 63 00 19 */	addi r3, r3, 0x19
/* 8003063C 0002D71C  4E 80 00 20 */	blr
.endfn type_name__Q24xhud16unit_meter_assetFv

# 0x80252F90 - 0x80252FB8
.rodata
.balign 8

.obj "@stringBase0", local
	.4byte 0x54656D70
	.4byte 0x7C485544
	.4byte 0x20556E69
	.4byte 0x7420416E
	.4byte 0x696D2044
	.4byte 0x656C7461
	.4byte 0x00687564
	.4byte 0x3A6D6574
	.4byte 0x65723A75
	.4byte 0x6E697400
.endobj "@stringBase0"

# 0x8027D6C8 - 0x8027D6F0
.data
.balign 8

# xhud::unit_meter_widget::__vtable
.obj __vt__Q24xhud17unit_meter_widget, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte destroy__Q24xhud17unit_meter_widgetFv
	.4byte type__Q24xhud17unit_meter_widgetCFv
	.4byte is__Q24xhud17unit_meter_widgetCFUi
	.4byte init__Q24xhud6widgetFv
	.4byte setup__Q24xhud17unit_meter_widgetFv
	.4byte update__Q24xhud17unit_meter_widgetFf
	.4byte render__Q24xhud17unit_meter_widgetFv
	.4byte dispatch__Q24xhud6widgetFP5xBaseUiPCfP5xBase
.endobj __vt__Q24xhud17unit_meter_widget

# 0x803CA980 - 0x803CA988
.section .sdata, "wa"
.balign 8

# xhud::@unnamed@xHudUnitMeter_cpp@::tweak_anim_time_delta
.obj "tweak_anim_time_delta__Q24xhud27@unnamed@xHudUnitMeter_cpp@", local
	.4byte 0x3DCCCCCD
.endobj "tweak_anim_time_delta__Q24xhud27@unnamed@xHudUnitMeter_cpp@"
	.4byte 0x00000000

# 0x803CB2C0 - 0x803CB2D0
.section .sbss, "wa", @nobits
.balign 8

.obj registered$681, local
	.skip 0x1
.endobj registered$681

.obj init$682, local
	.skip 0x1
.endobj init$682
	.skip 0x2

.obj myid$711, local
	.skip 0x4
.endobj myid$711

.obj init$712, local
	.skip 0x1
.endobj init$712
	.skip 0x7

# 0x803CCDF0 - 0x803CCE08
.section .sdata2, "a"
.balign 8

.obj "@692", local
	.4byte 0x00000000
.endobj "@692"

.obj "@693", local
	.4byte 0x41200000
.endobj "@693"

.obj "@756", local
	.4byte 0x3B008081
.endobj "@756"

.obj "@757", local
	.4byte 0x3F000000
.endobj "@757"

.obj "@759", local
	.4byte 0x43300000
	.4byte 0x80000000
.endobj "@759"
