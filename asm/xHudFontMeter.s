.include "macros.inc"
.file "xHudFontMeter.cpp"

# 0x8002F008 - 0x8002F504
.text
.balign 4

# xhud::font_meter_widget::load(xBase&, xDynAsset&, unsigned long)
.fn load__Q24xhud17font_meter_widgetFR5xBaseR9xDynAssetUl, global
/* 8002F008 0002C0E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002F00C 0002C0EC  7C 08 02 A6 */	mflr r0
/* 8002F010 0002C0F0  38 A0 01 5C */	li r5, 0x15c
/* 8002F014 0002C0F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002F018 0002C0F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002F01C 0002C0FC  7C 9F 23 78 */	mr r31, r4
/* 8002F020 0002C100  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8002F024 0002C104  7C 7E 1B 78 */	mr r30, r3
/* 8002F028 0002C108  4B FF ED 09 */	bl init_base__Q24xhud6widgetFR5xBaseRC10xBaseAssetUl
/* 8002F02C 0002C10C  38 9E 00 10 */	addi r4, r30, 0x10
/* 8002F030 0002C110  38 60 01 4C */	li r3, 0x14c
/* 8002F034 0002C114  4B FF FF AD */	bl __nw__FUlPv
/* 8002F038 0002C118  28 03 00 00 */	cmplwi r3, 0x0
/* 8002F03C 0002C11C  41 82 00 0C */	beq .L_8002F048
/* 8002F040 0002C120  7F E4 FB 78 */	mr r4, r31
/* 8002F044 0002C124  48 00 00 1D */	bl __ct__Q24xhud17font_meter_widgetFRCQ24xhud16font_meter_asset
.L_8002F048:
/* 8002F048 0002C128  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002F04C 0002C12C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002F050 0002C130  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8002F054 0002C134  7C 08 03 A6 */	mtlr r0
/* 8002F058 0002C138  38 21 00 10 */	addi r1, r1, 0x10
/* 8002F05C 0002C13C  4E 80 00 20 */	blr
.endfn load__Q24xhud17font_meter_widgetFR5xBaseR9xDynAssetUl

# xhud::font_meter_widget::font_meter_widget(const xhud::font_meter_asset&)
.fn __ct__Q24xhud17font_meter_widgetFRCQ24xhud16font_meter_asset, global
/* 8002F060 0002C140  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002F064 0002C144  7C 08 02 A6 */	mflr r0
/* 8002F068 0002C148  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002F06C 0002C14C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8002F070 0002C150  7C 7F 1B 78 */	mr r31, r3
/* 8002F074 0002C154  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8002F078 0002C158  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8002F07C 0002C15C  7C 9D 23 78 */	mr r29, r4
/* 8002F080 0002C160  48 00 06 DD */	bl __ct__Q24xhud12meter_widgetFRCQ24xhud11meter_asset
/* 8002F084 0002C164  3C 60 80 28 */	lis r3, __vt__Q24xhud17font_meter_widget@ha
/* 8002F088 0002C168  83 DD 00 4C */	lwz r30, 0x4c(r29)
/* 8002F08C 0002C16C  38 03 D6 4C */	addi r0, r3, __vt__Q24xhud17font_meter_widget@l
/* 8002F090 0002C170  81 9D 00 50 */	lwz r12, 0x50(r29)
/* 8002F094 0002C174  90 1F 00 74 */	stw r0, 0x74(r31)
/* 8002F098 0002C178  38 00 00 00 */	li r0, 0x0
/* 8002F09C 0002C17C  81 7D 00 54 */	lwz r11, 0x54(r29)
/* 8002F0A0 0002C180  38 7F 01 38 */	addi r3, r31, 0x138
/* 8002F0A4 0002C184  93 DF 00 C4 */	stw r30, 0xc4(r31)
/* 8002F0A8 0002C188  38 9F 00 E0 */	addi r4, r31, 0xe0
/* 8002F0AC 0002C18C  81 5D 00 58 */	lwz r10, 0x58(r29)
/* 8002F0B0 0002C190  91 9F 00 C8 */	stw r12, 0xc8(r31)
/* 8002F0B4 0002C194  81 3D 00 5C */	lwz r9, 0x5c(r29)
/* 8002F0B8 0002C198  91 7F 00 CC */	stw r11, 0xcc(r31)
/* 8002F0BC 0002C19C  81 1D 00 60 */	lwz r8, 0x60(r29)
/* 8002F0C0 0002C1A0  91 5F 00 D0 */	stw r10, 0xd0(r31)
/* 8002F0C4 0002C1A4  80 FD 00 64 */	lwz r7, 0x64(r29)
/* 8002F0C8 0002C1A8  91 3F 00 D4 */	stw r9, 0xd4(r31)
/* 8002F0CC 0002C1AC  80 DD 00 68 */	lwz r6, 0x68(r29)
/* 8002F0D0 0002C1B0  91 1F 00 D8 */	stw r8, 0xd8(r31)
/* 8002F0D4 0002C1B4  80 BD 00 6C */	lwz r5, 0x6c(r29)
/* 8002F0D8 0002C1B8  90 FF 00 DC */	stw r7, 0xdc(r31)
/* 8002F0DC 0002C1BC  90 DF 00 E0 */	stw r6, 0xe0(r31)
/* 8002F0E0 0002C1C0  90 BF 00 E4 */	stw r5, 0xe4(r31)
/* 8002F0E4 0002C1C4  93 DF 00 E8 */	stw r30, 0xe8(r31)
/* 8002F0E8 0002C1C8  91 9F 00 EC */	stw r12, 0xec(r31)
/* 8002F0EC 0002C1CC  91 7F 00 F0 */	stw r11, 0xf0(r31)
/* 8002F0F0 0002C1D0  91 5F 00 F4 */	stw r10, 0xf4(r31)
/* 8002F0F4 0002C1D4  91 3F 00 F8 */	stw r9, 0xf8(r31)
/* 8002F0F8 0002C1D8  91 1F 00 FC */	stw r8, 0xfc(r31)
/* 8002F0FC 0002C1DC  90 FF 01 00 */	stw r7, 0x100(r31)
/* 8002F100 0002C1E0  90 DF 01 04 */	stw r6, 0x104(r31)
/* 8002F104 0002C1E4  90 BF 01 08 */	stw r5, 0x108(r31)
/* 8002F108 0002C1E8  C0 1F 00 88 */	lfs f0, 0x88(r31)
/* 8002F10C 0002C1EC  FC 00 00 1E */	fctiwz f0, f0
/* 8002F110 0002C1F0  D8 01 00 08 */	stfd f0, 0x8(r1)
/* 8002F114 0002C1F4  80 A1 00 0C */	lwz r5, 0xc(r1)
/* 8002F118 0002C1F8  38 A5 FF EC */	addi r5, r5, -0x14
/* 8002F11C 0002C1FC  90 BF 01 24 */	stw r5, 0x124(r31)
/* 8002F120 0002C200  90 1F 01 28 */	stw r0, 0x128(r31)
/* 8002F124 0002C204  C0 1F 00 CC */	lfs f0, 0xcc(r31)
/* 8002F128 0002C208  D0 1F 01 2C */	stfs f0, 0x12c(r31)
/* 8002F12C 0002C20C  C0 1F 00 D0 */	lfs f0, 0xd0(r31)
/* 8002F130 0002C210  D0 1F 01 30 */	stfs f0, 0x130(r31)
/* 8002F134 0002C214  C0 1F 00 D4 */	lfs f0, 0xd4(r31)
/* 8002F138 0002C218  D0 1F 01 34 */	stfs f0, 0x134(r31)
/* 8002F13C 0002C21C  4B FE 8E 5D */	bl __as__10iColor_tagFRC10iColor_tag
/* 8002F140 0002C220  3C 80 80 25 */	lis r4, screen_bounds@ha
/* 8002F144 0002C224  38 7F 01 3C */	addi r3, r31, 0x13c
/* 8002F148 0002C228  38 84 2F 00 */	addi r4, r4, screen_bounds@l
/* 8002F14C 0002C22C  4B FE 8E F5 */	bl "__as__13basic_rect<f>FRC13basic_rect<f>"
/* 8002F150 0002C230  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002F154 0002C234  7F E3 FB 78 */	mr r3, r31
/* 8002F158 0002C238  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8002F15C 0002C23C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8002F160 0002C240  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8002F164 0002C244  7C 08 03 A6 */	mtlr r0
/* 8002F168 0002C248  38 21 00 20 */	addi r1, r1, 0x20
/* 8002F16C 0002C24C  4E 80 00 20 */	blr
.endfn __ct__Q24xhud17font_meter_widgetFRCQ24xhud16font_meter_asset

# xhud::font_meter_widget::destruct()
.fn destruct__Q24xhud17font_meter_widgetFv, global
/* 8002F170 0002C250  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002F174 0002C254  7C 08 02 A6 */	mflr r0
/* 8002F178 0002C258  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002F17C 0002C25C  48 00 06 65 */	bl destruct__Q24xhud12meter_widgetFv
/* 8002F180 0002C260  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002F184 0002C264  7C 08 03 A6 */	mtlr r0
/* 8002F188 0002C268  38 21 00 10 */	addi r1, r1, 0x10
/* 8002F18C 0002C26C  4E 80 00 20 */	blr
.endfn destruct__Q24xhud17font_meter_widgetFv

# xhud::font_meter_widget::destroy()
.fn destroy__Q24xhud17font_meter_widgetFv, global
/* 8002F190 0002C270  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002F194 0002C274  7C 08 02 A6 */	mflr r0
/* 8002F198 0002C278  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002F19C 0002C27C  4B FF FF D5 */	bl destruct__Q24xhud17font_meter_widgetFv
/* 8002F1A0 0002C280  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002F1A4 0002C284  7C 08 03 A6 */	mtlr r0
/* 8002F1A8 0002C288  38 21 00 10 */	addi r1, r1, 0x10
/* 8002F1AC 0002C28C  4E 80 00 20 */	blr
.endfn destroy__Q24xhud17font_meter_widgetFv

# xhud::font_meter_widget::type() const
.fn type__Q24xhud17font_meter_widgetCFv, global
/* 8002F1B0 0002C290  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002F1B4 0002C294  7C 08 02 A6 */	mflr r0
/* 8002F1B8 0002C298  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002F1BC 0002C29C  88 0D 89 AC */	lbz r0, init$693@sda21(r13)
/* 8002F1C0 0002C2A0  7C 00 07 75 */	extsb. r0, r0
/* 8002F1C4 0002C2A4  40 82 00 18 */	bne .L_8002F1DC
/* 8002F1C8 0002C2A8  48 00 03 3D */	bl type_name__Q24xhud16font_meter_assetFv
/* 8002F1CC 0002C2AC  48 01 D0 49 */	bl xStrHash__FPCc
/* 8002F1D0 0002C2B0  90 6D 89 A8 */	stw r3, myid$692@sda21(r13)
/* 8002F1D4 0002C2B4  38 00 00 01 */	li r0, 0x1
/* 8002F1D8 0002C2B8  98 0D 89 AC */	stb r0, init$693@sda21(r13)
.L_8002F1DC:
/* 8002F1DC 0002C2BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002F1E0 0002C2C0  80 6D 89 A8 */	lwz r3, myid$692@sda21(r13)
/* 8002F1E4 0002C2C4  7C 08 03 A6 */	mtlr r0
/* 8002F1E8 0002C2C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8002F1EC 0002C2CC  4E 80 00 20 */	blr
.endfn type__Q24xhud17font_meter_widgetCFv

# xhud::font_meter_widget::is(unsigned int) const
.fn is__Q24xhud17font_meter_widgetCFUi, global
/* 8002F1F0 0002C2D0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002F1F4 0002C2D4  7C 08 02 A6 */	mflr r0
/* 8002F1F8 0002C2D8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002F1FC 0002C2DC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8002F200 0002C2E0  3B E0 00 00 */	li r31, 0x0
/* 8002F204 0002C2E4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8002F208 0002C2E8  7C 9E 23 78 */	mr r30, r4
/* 8002F20C 0002C2EC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8002F210 0002C2F0  7C 7D 1B 78 */	mr r29, r3
/* 8002F214 0002C2F4  4B FF FF 9D */	bl type__Q24xhud17font_meter_widgetCFv
/* 8002F218 0002C2F8  7C 1E 18 40 */	cmplw r30, r3
/* 8002F21C 0002C2FC  41 82 00 18 */	beq .L_8002F234
/* 8002F220 0002C300  7F A3 EB 78 */	mr r3, r29
/* 8002F224 0002C304  7F C4 F3 78 */	mr r4, r30
/* 8002F228 0002C308  48 00 06 19 */	bl is__Q24xhud12meter_widgetCFUi
/* 8002F22C 0002C30C  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8002F230 0002C310  41 82 00 08 */	beq .L_8002F238
.L_8002F234:
/* 8002F234 0002C314  3B E0 00 01 */	li r31, 0x1
.L_8002F238:
/* 8002F238 0002C318  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002F23C 0002C31C  7F E3 FB 78 */	mr r3, r31
/* 8002F240 0002C320  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8002F244 0002C324  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8002F248 0002C328  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8002F24C 0002C32C  7C 08 03 A6 */	mtlr r0
/* 8002F250 0002C330  38 21 00 20 */	addi r1, r1, 0x20
/* 8002F254 0002C334  4E 80 00 20 */	blr
.endfn is__Q24xhud17font_meter_widgetCFUi

# xhud::font_meter_widget::update(float)
.fn update__Q24xhud17font_meter_widgetFf, global
/* 8002F258 0002C338  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8002F25C 0002C33C  7C 08 02 A6 */	mflr r0
/* 8002F260 0002C340  90 01 00 64 */	stw r0, 0x64(r1)
/* 8002F264 0002C344  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8002F268 0002C348  7C 7F 1B 78 */	mr r31, r3
/* 8002F26C 0002C34C  48 00 06 3D */	bl updater__Q24xhud12meter_widgetFf
/* 8002F270 0002C350  80 7F 00 C4 */	lwz r3, 0xc4(r31)
/* 8002F274 0002C354  3C 00 43 30 */	lis r0, 0x4330
/* 8002F278 0002C358  90 01 00 28 */	stw r0, 0x28(r1)
/* 8002F27C 0002C35C  90 7F 01 28 */	stw r3, 0x128(r31)
/* 8002F280 0002C360  C0 1F 00 D4 */	lfs f0, 0xd4(r31)
/* 8002F284 0002C364  D0 1F 01 34 */	stfs f0, 0x134(r31)
/* 8002F288 0002C368  C0 1F 00 10 */	lfs f0, 0x10(r31)
/* 8002F28C 0002C36C  D0 1F 00 CC */	stfs f0, 0xcc(r31)
/* 8002F290 0002C370  D0 1F 01 2C */	stfs f0, 0x12c(r31)
/* 8002F294 0002C374  C0 1F 00 14 */	lfs f0, 0x14(r31)
/* 8002F298 0002C378  D0 1F 00 D0 */	stfs f0, 0xd0(r31)
/* 8002F29C 0002C37C  D0 1F 01 30 */	stfs f0, 0x130(r31)
/* 8002F2A0 0002C380  88 1F 01 07 */	lbz r0, 0x107(r31)
/* 8002F2A4 0002C384  C8 42 84 18 */	lfd f2, "@733"@sda21(r2)
/* 8002F2A8 0002C388  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8002F2AC 0002C38C  C0 7F 00 34 */	lfs f3, 0x34(r31)
/* 8002F2B0 0002C390  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 8002F2B4 0002C394  C0 22 84 08 */	lfs f1, "@729"@sda21(r2)
/* 8002F2B8 0002C398  EC 40 10 28 */	fsubs f2, f0, f2
/* 8002F2BC 0002C39C  C0 02 84 10 */	lfs f0, "@731"@sda21(r2)
/* 8002F2C0 0002C3A0  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 8002F2C4 0002C3A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8002F2C8 0002C3A8  4C 40 13 82 */	cror eq, lt, eq
/* 8002F2CC 0002C3AC  40 82 00 0C */	bne .L_8002F2D8
/* 8002F2D0 0002C3B0  38 00 00 00 */	li r0, 0x0
/* 8002F2D4 0002C3B4  48 00 00 2C */	b .L_8002F300
.L_8002F2D8:
/* 8002F2D8 0002C3B8  C0 02 84 0C */	lfs f0, "@730"@sda21(r2)
/* 8002F2DC 0002C3BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8002F2E0 0002C3C0  4C 41 13 82 */	cror eq, gt, eq
/* 8002F2E4 0002C3C4  40 82 00 0C */	bne .L_8002F2F0
/* 8002F2E8 0002C3C8  38 00 00 FF */	li r0, 0xff
/* 8002F2EC 0002C3CC  48 00 00 14 */	b .L_8002F300
.L_8002F2F0:
/* 8002F2F0 0002C3D0  FC 00 08 1E */	fctiwz f0, f1
/* 8002F2F4 0002C3D4  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 8002F2F8 0002C3D8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8002F2FC 0002C3DC  54 00 06 3E */	clrlwi r0, r0, 24
.L_8002F300:
/* 8002F300 0002C3E0  98 1F 00 E3 */	stb r0, 0xe3(r31)
/* 8002F304 0002C3E4  3C 00 43 30 */	lis r0, 0x4330
/* 8002F308 0002C3E8  88 7F 01 0B */	lbz r3, 0x10b(r31)
/* 8002F30C 0002C3EC  90 01 00 38 */	stw r0, 0x38(r1)
/* 8002F310 0002C3F0  C8 42 84 18 */	lfd f2, "@733"@sda21(r2)
/* 8002F314 0002C3F4  90 61 00 3C */	stw r3, 0x3c(r1)
/* 8002F318 0002C3F8  C0 7F 00 34 */	lfs f3, 0x34(r31)
/* 8002F31C 0002C3FC  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 8002F320 0002C400  C0 22 84 08 */	lfs f1, "@729"@sda21(r2)
/* 8002F324 0002C404  EC 40 10 28 */	fsubs f2, f0, f2
/* 8002F328 0002C408  C0 02 84 10 */	lfs f0, "@731"@sda21(r2)
/* 8002F32C 0002C40C  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 8002F330 0002C410  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8002F334 0002C414  4C 40 13 82 */	cror eq, lt, eq
/* 8002F338 0002C418  40 82 00 0C */	bne .L_8002F344
/* 8002F33C 0002C41C  38 00 00 00 */	li r0, 0x0
/* 8002F340 0002C420  48 00 00 2C */	b .L_8002F36C
.L_8002F344:
/* 8002F344 0002C424  C0 02 84 0C */	lfs f0, "@730"@sda21(r2)
/* 8002F348 0002C428  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8002F34C 0002C42C  4C 41 13 82 */	cror eq, gt, eq
/* 8002F350 0002C430  40 82 00 0C */	bne .L_8002F35C
/* 8002F354 0002C434  38 00 00 FF */	li r0, 0xff
/* 8002F358 0002C438  48 00 00 14 */	b .L_8002F36C
.L_8002F35C:
/* 8002F35C 0002C43C  FC 00 08 1E */	fctiwz f0, f1
/* 8002F360 0002C440  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 8002F364 0002C444  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8002F368 0002C448  54 00 06 3E */	clrlwi r0, r0, 24
.L_8002F36C:
/* 8002F36C 0002C44C  98 1F 00 E7 */	stb r0, 0xe7(r31)
/* 8002F370 0002C450  C0 22 84 08 */	lfs f1, "@729"@sda21(r2)
/* 8002F374 0002C454  C0 1F 00 88 */	lfs f0, 0x88(r31)
/* 8002F378 0002C458  80 1F 01 24 */	lwz r0, 0x124(r31)
/* 8002F37C 0002C45C  EC 01 00 2A */	fadds f0, f1, f0
/* 8002F380 0002C460  FC 00 00 1E */	fctiwz f0, f0
/* 8002F384 0002C464  D8 01 00 48 */	stfd f0, 0x48(r1)
/* 8002F388 0002C468  80 A1 00 4C */	lwz r5, 0x4c(r1)
/* 8002F38C 0002C46C  7C 00 28 00 */	cmpw r0, r5
/* 8002F390 0002C470  41 82 00 A0 */	beq .L_8002F430
/* 8002F394 0002C474  90 BF 01 24 */	stw r5, 0x124(r31)
/* 8002F398 0002C478  C0 3F 00 90 */	lfs f1, 0x90(r31)
/* 8002F39C 0002C47C  C0 1F 00 8C */	lfs f0, 0x8c(r31)
/* 8002F3A0 0002C480  80 7F 00 6C */	lwz r3, 0x6c(r31)
/* 8002F3A4 0002C484  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8002F3A8 0002C488  40 80 00 0C */	bge .L_8002F3B4
/* 8002F3AC 0002C48C  38 00 00 00 */	li r0, 0x0
/* 8002F3B0 0002C490  48 00 00 08 */	b .L_8002F3B8
.L_8002F3B4:
/* 8002F3B4 0002C494  88 03 00 70 */	lbz r0, 0x70(r3)
.L_8002F3B8:
/* 8002F3B8 0002C498  C0 02 84 08 */	lfs f0, "@729"@sda21(r2)
/* 8002F3BC 0002C49C  3C 60 80 28 */	lis r3, format_text$709@ha
/* 8002F3C0 0002C4A0  54 00 15 BA */	clrlslwi r0, r0, 24, 2
/* 8002F3C4 0002C4A4  EC 00 08 2A */	fadds f0, f0, f1
/* 8002F3C8 0002C4A8  38 63 D6 40 */	addi r3, r3, format_text$709@l
/* 8002F3CC 0002C4AC  7C 83 00 2E */	lwzx r4, r3, r0
/* 8002F3D0 0002C4B0  38 7F 01 18 */	addi r3, r31, 0x118
/* 8002F3D4 0002C4B4  FC 00 00 1E */	fctiwz f0, f0
/* 8002F3D8 0002C4B8  D8 01 00 48 */	stfd f0, 0x48(r1)
/* 8002F3DC 0002C4BC  80 C1 00 4C */	lwz r6, 0x4c(r1)
/* 8002F3E0 0002C4C0  4C C6 31 82 */	crclr 4*cr1+eq
/* 8002F3E4 0002C4C4  48 1B 4B 51 */	bl sprintf
/* 8002F3E8 0002C4C8  38 61 00 08 */	addi r3, r1, 0x8
/* 8002F3EC 0002C4CC  38 9F 01 28 */	addi r4, r31, 0x128
/* 8002F3F0 0002C4D0  38 BF 01 18 */	addi r5, r31, 0x118
/* 8002F3F4 0002C4D4  4B FF 1F 85 */	bl bounds__5xfontCFPCc
/* 8002F3F8 0002C4D8  80 61 00 08 */	lwz r3, 0x8(r1)
/* 8002F3FC 0002C4DC  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8002F400 0002C4E0  90 61 00 18 */	stw r3, 0x18(r1)
/* 8002F404 0002C4E4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8002F408 0002C4E8  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8002F40C 0002C4EC  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8002F410 0002C4F0  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8002F414 0002C4F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002F418 0002C4F8  FC 20 08 50 */	fneg f1, f1
/* 8002F41C 0002C4FC  FC 00 00 50 */	fneg f0, f0
/* 8002F420 0002C500  90 61 00 20 */	stw r3, 0x20(r1)
/* 8002F424 0002C504  D0 3F 01 10 */	stfs f1, 0x110(r31)
/* 8002F428 0002C508  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002F42C 0002C50C  D0 1F 01 14 */	stfs f0, 0x114(r31)
.L_8002F430:
/* 8002F430 0002C510  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8002F434 0002C514  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8002F438 0002C518  7C 08 03 A6 */	mtlr r0
/* 8002F43C 0002C51C  38 21 00 60 */	addi r1, r1, 0x60
/* 8002F440 0002C520  4E 80 00 20 */	blr
.endfn update__Q24xhud17font_meter_widgetFf

# xhud::font_meter_widget::render()
.fn render__Q24xhud17font_meter_widgetFv, global
/* 8002F444 0002C524  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8002F448 0002C528  7C 08 02 A6 */	mflr r0
/* 8002F44C 0002C52C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8002F450 0002C530  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8002F454 0002C534  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8002F458 0002C538  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 8002F45C 0002C53C  F3 C1 00 18 */	psq_st f30, 0x18(r1), 0, qr0
/* 8002F460 0002C540  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002F464 0002C544  7C 7F 1B 78 */	mr r31, r3
/* 8002F468 0002C548  88 03 00 E7 */	lbz r0, 0xe7(r3)
/* 8002F46C 0002C54C  C0 63 01 10 */	lfs f3, 0x110(r3)
/* 8002F470 0002C550  C0 43 00 04 */	lfs f2, 0x4(r3)
/* 8002F474 0002C554  28 00 00 00 */	cmplwi r0, 0x0
/* 8002F478 0002C558  C0 23 01 14 */	lfs f1, 0x114(r3)
/* 8002F47C 0002C55C  C0 03 00 08 */	lfs f0, 0x8(r3)
/* 8002F480 0002C560  EF E3 10 2A */	fadds f31, f3, f2
/* 8002F484 0002C564  EF C1 00 2A */	fadds f30, f1, f0
/* 8002F488 0002C568  41 82 00 2C */	beq .L_8002F4B4
/* 8002F48C 0002C56C  38 7F 01 38 */	addi r3, r31, 0x138
/* 8002F490 0002C570  38 9F 00 E4 */	addi r4, r31, 0xe4
/* 8002F494 0002C574  4B FE 8B 05 */	bl __as__10iColor_tagFRC10iColor_tag
/* 8002F498 0002C578  C0 3F 00 D8 */	lfs f1, 0xd8(r31)
/* 8002F49C 0002C57C  38 7F 01 28 */	addi r3, r31, 0x128
/* 8002F4A0 0002C580  C0 1F 00 DC */	lfs f0, 0xdc(r31)
/* 8002F4A4 0002C584  38 9F 01 18 */	addi r4, r31, 0x118
/* 8002F4A8 0002C588  EC 3F 08 2A */	fadds f1, f31, f1
/* 8002F4AC 0002C58C  EC 5E 00 2A */	fadds f2, f30, f0
/* 8002F4B0 0002C590  48 00 00 61 */	bl render__5xfontCFPCcff
.L_8002F4B4:
/* 8002F4B4 0002C594  88 1F 00 E3 */	lbz r0, 0xe3(r31)
/* 8002F4B8 0002C598  28 00 00 00 */	cmplwi r0, 0x0
/* 8002F4BC 0002C59C  41 82 00 24 */	beq .L_8002F4E0
/* 8002F4C0 0002C5A0  38 7F 01 38 */	addi r3, r31, 0x138
/* 8002F4C4 0002C5A4  38 9F 00 E0 */	addi r4, r31, 0xe0
/* 8002F4C8 0002C5A8  4B FE 8A D1 */	bl __as__10iColor_tagFRC10iColor_tag
/* 8002F4CC 0002C5AC  FC 20 F8 90 */	fmr f1, f31
/* 8002F4D0 0002C5B0  38 7F 01 28 */	addi r3, r31, 0x128
/* 8002F4D4 0002C5B4  FC 40 F0 90 */	fmr f2, f30
/* 8002F4D8 0002C5B8  38 9F 01 18 */	addi r4, r31, 0x118
/* 8002F4DC 0002C5BC  48 00 00 35 */	bl render__5xfontCFPCcff
.L_8002F4E0:
/* 8002F4E0 0002C5C0  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 8002F4E4 0002C5C4  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8002F4E8 0002C5C8  E3 C1 00 18 */	psq_l f30, 0x18(r1), 0, qr0
/* 8002F4EC 0002C5CC  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 8002F4F0 0002C5D0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8002F4F4 0002C5D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002F4F8 0002C5D8  7C 08 03 A6 */	mtlr r0
/* 8002F4FC 0002C5DC  38 21 00 30 */	addi r1, r1, 0x30
/* 8002F500 0002C5E0  4E 80 00 20 */	blr
.endfn render__Q24xhud17font_meter_widgetFv

# 0x8002F504 - 0x8002F510
.section .text, "ax", unique, 1
.balign 4

# xhud::font_meter_asset::type_name()
.fn type_name__Q24xhud16font_meter_assetFv, weak
/* 8002F504 0002C5E4  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8002F508 0002C5E8  38 63 2F 10 */	addi r3, r3, "@stringBase0"@l
/* 8002F50C 0002C5EC  4E 80 00 20 */	blr
.endfn type_name__Q24xhud16font_meter_assetFv

# 0x8002F510 - 0x8002F57C
.section .text, "ax", unique, 2
.balign 4

# xfont::render(const char*, float, float) const
.fn render__5xfontCFPCcff, weak
/* 8002F510 0002C5F0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002F514 0002C5F4  7C 08 02 A6 */	mflr r0
/* 8002F518 0002C5F8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002F51C 0002C5FC  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8002F520 0002C600  FF E0 10 90 */	fmr f31, f2
/* 8002F524 0002C604  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 8002F528 0002C608  FF C0 08 90 */	fmr f30, f1
/* 8002F52C 0002C60C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002F530 0002C610  7C 9F 23 78 */	mr r31, r4
/* 8002F534 0002C614  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8002F538 0002C618  7C 7E 1B 78 */	mr r30, r3
/* 8002F53C 0002C61C  4B FF 1F A9 */	bl start_render__5xfontCFv
/* 8002F540 0002C620  FC 20 F0 90 */	fmr f1, f30
/* 8002F544 0002C624  7F C3 F3 78 */	mr r3, r30
/* 8002F548 0002C628  FC 40 F8 90 */	fmr f2, f31
/* 8002F54C 0002C62C  7F E4 FB 78 */	mr r4, r31
/* 8002F550 0002C630  4B FF 21 2D */	bl irender__5xfontCFPCcff
/* 8002F554 0002C634  7F C3 F3 78 */	mr r3, r30
/* 8002F558 0002C638  4B FF 1F B1 */	bl stop_render__5xfontCFv
/* 8002F55C 0002C63C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002F560 0002C640  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8002F564 0002C644  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 8002F568 0002C648  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002F56C 0002C64C  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8002F570 0002C650  7C 08 03 A6 */	mtlr r0
/* 8002F574 0002C654  38 21 00 20 */	addi r1, r1, 0x20
/* 8002F578 0002C658  4E 80 00 20 */	blr
.endfn render__5xfontCFPCcff

# 0x80252F00 - 0x80252F38
.rodata
.balign 8

.obj screen_bounds, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x3F800000
	.4byte 0x3F800000
.endobj screen_bounds

.obj "@stringBase0", local
	.4byte 0x6875643A
	.4byte 0x6D657465
	.4byte 0x723A666F
	.4byte 0x6E740025
	.4byte 0x64002564
	.4byte 0x2F256400
	.4byte 0x2564206F
	.4byte 0x66202564
	.byte 0x00
.endobj "@stringBase0"
	.4byte 0x00000000
	.byte 0x00, 0x00, 0x00

# 0x8027D640 - 0x8027D678
.data
.balign 8

.obj format_text$709, local
	.4byte "@stringBase0"+0xF
	.4byte "@stringBase0"+0x12
	.4byte "@stringBase0"+0x18
.endobj format_text$709

# xhud::font_meter_widget::__vtable
.obj __vt__Q24xhud17font_meter_widget, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte destroy__Q24xhud17font_meter_widgetFv
	.4byte type__Q24xhud17font_meter_widgetCFv
	.4byte is__Q24xhud17font_meter_widgetCFUi
	.4byte init__Q24xhud6widgetFv
	.4byte setup__Q24xhud6widgetFv
	.4byte update__Q24xhud17font_meter_widgetFf
	.4byte render__Q24xhud17font_meter_widgetFv
	.4byte dispatch__Q24xhud6widgetFP5xBaseUiPCfP5xBase
.endobj __vt__Q24xhud17font_meter_widget
	.4byte 0x00000000

# 0x803CB2A8 - 0x803CB2B0
.section .sbss, "wa", @nobits
.balign 8

.obj myid$692, local
	.skip 0x4
.endobj myid$692

.obj init$693, local
	.skip 0x1
.endobj init$693
	.skip 0x3

# 0x803CCD88 - 0x803CCDA0
.section .sdata2, "a"
.balign 8

.obj "@729", local
	.4byte 0x3F000000
.endobj "@729"

.obj "@730", local
	.4byte 0x437F0000
.endobj "@730"

.obj "@731", local
	.4byte 0x00000000
.endobj "@731"
	.4byte 0x00000000

.obj "@733", local
	.4byte 0x43300000
	.4byte 0x00000000
.endobj "@733"
