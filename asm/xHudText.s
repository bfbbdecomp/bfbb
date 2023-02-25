.include "macros.inc"
.file "xHudText.cpp"

# 0x80195428 - 0x80195900
.text
.balign 4

# xhud::text_widget::load(xBase&, xDynAsset&, unsigned long)
.fn load__Q24xhud11text_widgetFR5xBaseR9xDynAssetUl, global
/* 80195428 00192508  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8019542C 0019250C  7C 08 02 A6 */	mflr r0
/* 80195430 00192510  38 A0 01 7C */	li r5, 0x17c
/* 80195434 00192514  90 01 00 14 */	stw r0, 0x14(r1)
/* 80195438 00192518  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8019543C 0019251C  7C 9F 23 78 */	mr r31, r4
/* 80195440 00192520  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80195444 00192524  7C 7E 1B 78 */	mr r30, r3
/* 80195448 00192528  4B E9 88 E9 */	bl init_base__Q24xhud6widgetFR5xBaseRC10xBaseAssetUl
/* 8019544C 0019252C  38 9E 00 10 */	addi r4, r30, 0x10
/* 80195450 00192530  38 60 01 6C */	li r3, 0x16c
/* 80195454 00192534  4B E9 9B 8D */	bl __nw__FUlPv
/* 80195458 00192538  28 03 00 00 */	cmplwi r3, 0x0
/* 8019545C 0019253C  41 82 00 0C */	beq .L_80195468
/* 80195460 00192540  7F E4 FB 78 */	mr r4, r31
/* 80195464 00192544  48 00 00 1D */	bl __ct__Q24xhud11text_widgetFRCQ24xhud10text_asset
.L_80195468:
/* 80195468 00192548  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8019546C 0019254C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80195470 00192550  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80195474 00192554  7C 08 03 A6 */	mtlr r0
/* 80195478 00192558  38 21 00 10 */	addi r1, r1, 0x10
/* 8019547C 0019255C  4E 80 00 20 */	blr
.endfn load__Q24xhud11text_widgetFR5xBaseR9xDynAssetUl

# xhud::text_widget::text_widget(const xhud::text_asset&)
.fn __ct__Q24xhud11text_widgetFRCQ24xhud10text_asset, global
/* 80195480 00192560  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80195484 00192564  7C 08 02 A6 */	mflr r0
/* 80195488 00192568  90 01 00 14 */	stw r0, 0x14(r1)
/* 8019548C 0019256C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80195490 00192570  7C 7F 1B 78 */	mr r31, r3
/* 80195494 00192574  4B E9 87 95 */	bl __ct__Q24xhud6widgetFRCQ24xhud5asset
/* 80195498 00192578  3C 60 80 2A */	lis r3, __vt__Q24xhud11text_widget@ha
/* 8019549C 0019257C  38 00 00 00 */	li r0, 0x0
/* 801954A0 00192580  38 83 1B 60 */	addi r4, r3, __vt__Q24xhud11text_widget@l
/* 801954A4 00192584  7F E3 FB 78 */	mr r3, r31
/* 801954A8 00192588  90 9F 00 74 */	stw r4, 0x74(r31)
/* 801954AC 0019258C  98 1F 00 84 */	stb r0, 0x84(r31)
/* 801954B0 00192590  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801954B4 00192594  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801954B8 00192598  7C 08 03 A6 */	mtlr r0
/* 801954BC 0019259C  38 21 00 10 */	addi r1, r1, 0x10
/* 801954C0 001925A0  4E 80 00 20 */	blr
.endfn __ct__Q24xhud11text_widgetFRCQ24xhud10text_asset

# xhud::text_widget::destruct()
.fn destruct__Q24xhud11text_widgetFv, global
/* 801954C4 001925A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801954C8 001925A8  7C 08 02 A6 */	mflr r0
/* 801954CC 001925AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801954D0 001925B0  4B E9 88 C5 */	bl destruct__Q24xhud6widgetFv
/* 801954D4 001925B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801954D8 001925B8  7C 08 03 A6 */	mtlr r0
/* 801954DC 001925BC  38 21 00 10 */	addi r1, r1, 0x10
/* 801954E0 001925C0  4E 80 00 20 */	blr
.endfn destruct__Q24xhud11text_widgetFv

# xhud::text_widget::setup()
.fn setup__Q24xhud11text_widgetFv, global
/* 801954E4 001925C4  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 801954E8 001925C8  7C 08 02 A6 */	mflr r0
/* 801954EC 001925CC  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 801954F0 001925D0  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 801954F4 001925D4  93 C1 00 98 */	stw r30, 0x98(r1)
/* 801954F8 001925D8  93 A1 00 94 */	stw r29, 0x94(r1)
/* 801954FC 001925DC  7C 7D 1B 78 */	mr r29, r3
/* 80195500 001925E0  4B E9 88 B5 */	bl presetup__Q24xhud6widgetFv
/* 80195504 001925E4  83 FD 00 6C */	lwz r31, 0x6c(r29)
/* 80195508 001925E8  80 7F 00 28 */	lwz r3, 0x28(r31)
/* 8019550C 001925EC  4B F1 F5 31 */	bl zSceneFindObject__FUi
/* 80195510 001925F0  7C 7E 1B 79 */	mr. r30, r3
/* 80195514 001925F4  40 82 00 1C */	bne .L_80195530
/* 80195518 001925F8  38 61 00 08 */	addi r3, r1, 0x8
/* 8019551C 001925FC  4B E9 10 A1 */	bl create__8xtextboxFv
/* 80195520 00192600  38 7D 01 04 */	addi r3, r29, 0x104
/* 80195524 00192604  38 81 00 08 */	addi r4, r1, 0x8
/* 80195528 00192608  4B E8 D2 B5 */	bl __as__8xtextboxFRC8xtextbox
/* 8019552C 0019260C  48 00 00 E8 */	b .L_80195614
.L_80195530:
/* 80195530 00192610  4B F9 F2 65 */	bl refresh__8ztextboxFv
/* 80195534 00192614  38 7D 01 04 */	addi r3, r29, 0x104
/* 80195538 00192618  38 9E 00 18 */	addi r4, r30, 0x18
/* 8019553C 0019261C  4B E8 D2 A1 */	bl __as__8xtextboxFRC8xtextbox
/* 80195540 00192620  7F C3 F3 78 */	mr r3, r30
/* 80195544 00192624  38 9D 00 84 */	addi r4, r29, 0x84
/* 80195548 00192628  38 A0 00 80 */	li r5, 0x80
/* 8019554C 0019262C  4B F9 F2 91 */	bl get_text__8ztextboxCFPcUl
/* 80195550 00192630  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 80195554 00192634  28 03 00 00 */	cmplwi r3, 0x0
/* 80195558 00192638  41 82 00 4C */	beq .L_801955A4
/* 8019555C 0019263C  38 80 00 00 */	li r4, 0x0
/* 80195560 00192640  4B EB 61 AD */	bl xSTFindAsset__FUiPUi
/* 80195564 00192644  28 03 00 00 */	cmplwi r3, 0x0
/* 80195568 00192648  41 82 00 3C */	beq .L_801955A4
/* 8019556C 0019264C  3B C3 00 04 */	addi r30, r3, 0x4
/* 80195570 00192650  7F C3 F3 78 */	mr r3, r30
/* 80195574 00192654  48 05 22 45 */	bl strlen
/* 80195578 00192658  7C 7F 1B 78 */	mr r31, r3
/* 8019557C 0019265C  28 1F 00 80 */	cmplwi r31, 0x80
/* 80195580 00192660  41 80 00 08 */	blt .L_80195588
/* 80195584 00192664  3B E0 00 7F */	li r31, 0x7f
.L_80195588:
/* 80195588 00192668  7F C4 F3 78 */	mr r4, r30
/* 8019558C 0019266C  7F E5 FB 78 */	mr r5, r31
/* 80195590 00192670  38 7D 00 84 */	addi r3, r29, 0x84
/* 80195594 00192674  4B E6 DF AD */	bl memcpy
/* 80195598 00192678  7C 7D FA 14 */	add r3, r29, r31
/* 8019559C 0019267C  38 00 00 00 */	li r0, 0x0
/* 801955A0 00192680  98 03 00 84 */	stb r0, 0x84(r3)
.L_801955A4:
/* 801955A4 00192684  88 7D 01 14 */	lbz r3, 0x114(r29)
/* 801955A8 00192688  3C 00 43 30 */	lis r0, 0x4330
/* 801955AC 0019268C  90 01 00 70 */	stw r0, 0x70(r1)
/* 801955B0 00192690  C8 42 B2 48 */	lfd f2, "@727"@sda21(r2)
/* 801955B4 00192694  90 61 00 74 */	stw r3, 0x74(r1)
/* 801955B8 00192698  C0 02 B2 40 */	lfs f0, "@725"@sda21(r2)
/* 801955BC 0019269C  C8 21 00 70 */	lfd f1, 0x70(r1)
/* 801955C0 001926A0  90 01 00 78 */	stw r0, 0x78(r1)
/* 801955C4 001926A4  EC 21 10 28 */	fsubs f1, f1, f2
/* 801955C8 001926A8  90 01 00 80 */	stw r0, 0x80(r1)
/* 801955CC 001926AC  EC 01 00 24 */	fdivs f0, f1, f0
/* 801955D0 001926B0  D0 1D 00 28 */	stfs f0, 0x28(r29)
/* 801955D4 001926B4  88 1D 01 15 */	lbz r0, 0x115(r29)
/* 801955D8 001926B8  C8 42 B2 48 */	lfd f2, "@727"@sda21(r2)
/* 801955DC 001926BC  90 01 00 7C */	stw r0, 0x7c(r1)
/* 801955E0 001926C0  C0 02 B2 40 */	lfs f0, "@725"@sda21(r2)
/* 801955E4 001926C4  C8 21 00 78 */	lfd f1, 0x78(r1)
/* 801955E8 001926C8  EC 21 10 28 */	fsubs f1, f1, f2
/* 801955EC 001926CC  EC 01 00 24 */	fdivs f0, f1, f0
/* 801955F0 001926D0  D0 1D 00 2C */	stfs f0, 0x2c(r29)
/* 801955F4 001926D4  88 1D 01 16 */	lbz r0, 0x116(r29)
/* 801955F8 001926D8  C8 42 B2 48 */	lfd f2, "@727"@sda21(r2)
/* 801955FC 001926DC  90 01 00 84 */	stw r0, 0x84(r1)
/* 80195600 001926E0  C0 02 B2 40 */	lfs f0, "@725"@sda21(r2)
/* 80195604 001926E4  C8 21 00 80 */	lfd f1, 0x80(r1)
/* 80195608 001926E8  EC 21 10 28 */	fsubs f1, f1, f2
/* 8019560C 001926EC  EC 01 00 24 */	fdivs f0, f1, f0
/* 80195610 001926F0  D0 1D 00 30 */	stfs f0, 0x30(r29)
.L_80195614:
/* 80195614 001926F4  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80195618 001926F8  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 8019561C 001926FC  83 C1 00 98 */	lwz r30, 0x98(r1)
/* 80195620 00192700  83 A1 00 94 */	lwz r29, 0x94(r1)
/* 80195624 00192704  7C 08 03 A6 */	mtlr r0
/* 80195628 00192708  38 21 00 A0 */	addi r1, r1, 0xa0
/* 8019562C 0019270C  4E 80 00 20 */	blr
.endfn setup__Q24xhud11text_widgetFv

# xhud::text_widget::destroy()
.fn destroy__Q24xhud11text_widgetFv, global
/* 80195630 00192710  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80195634 00192714  7C 08 02 A6 */	mflr r0
/* 80195638 00192718  90 01 00 14 */	stw r0, 0x14(r1)
/* 8019563C 0019271C  4B FF FE 89 */	bl destruct__Q24xhud11text_widgetFv
/* 80195640 00192720  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80195644 00192724  7C 08 03 A6 */	mtlr r0
/* 80195648 00192728  38 21 00 10 */	addi r1, r1, 0x10
/* 8019564C 0019272C  4E 80 00 20 */	blr
.endfn destroy__Q24xhud11text_widgetFv

# xhud::text_widget::type() const
.fn type__Q24xhud11text_widgetCFv, global
/* 80195650 00192730  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80195654 00192734  7C 08 02 A6 */	mflr r0
/* 80195658 00192738  90 01 00 14 */	stw r0, 0x14(r1)
/* 8019565C 0019273C  88 0D 98 CC */	lbz r0, init$756@sda21(r13)
/* 80195660 00192740  7C 00 07 75 */	extsb. r0, r0
/* 80195664 00192744  40 82 00 18 */	bne .L_8019567C
/* 80195668 00192748  48 00 02 99 */	bl type_name__Q24xhud10text_assetFv
/* 8019566C 0019274C  4B EB 6B A9 */	bl xStrHash__FPCc
/* 80195670 00192750  90 6D 98 C8 */	stw r3, myid$755@sda21(r13)
/* 80195674 00192754  38 00 00 01 */	li r0, 0x1
/* 80195678 00192758  98 0D 98 CC */	stb r0, init$756@sda21(r13)
.L_8019567C:
/* 8019567C 0019275C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80195680 00192760  80 6D 98 C8 */	lwz r3, myid$755@sda21(r13)
/* 80195684 00192764  7C 08 03 A6 */	mtlr r0
/* 80195688 00192768  38 21 00 10 */	addi r1, r1, 0x10
/* 8019568C 0019276C  4E 80 00 20 */	blr
.endfn type__Q24xhud11text_widgetCFv

# xhud::text_widget::is(unsigned int) const
.fn is__Q24xhud11text_widgetCFUi, global
/* 80195690 00192770  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80195694 00192774  7C 08 02 A6 */	mflr r0
/* 80195698 00192778  90 01 00 24 */	stw r0, 0x24(r1)
/* 8019569C 0019277C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801956A0 00192780  3B E0 00 00 */	li r31, 0x0
/* 801956A4 00192784  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801956A8 00192788  7C 9E 23 78 */	mr r30, r4
/* 801956AC 0019278C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801956B0 00192790  7C 7D 1B 78 */	mr r29, r3
/* 801956B4 00192794  4B FF FF 9D */	bl type__Q24xhud11text_widgetCFv
/* 801956B8 00192798  7C 1E 18 40 */	cmplw r30, r3
/* 801956BC 0019279C  41 82 00 18 */	beq .L_801956D4
/* 801956C0 001927A0  7F A3 EB 78 */	mr r3, r29
/* 801956C4 001927A4  7F C4 F3 78 */	mr r4, r30
/* 801956C8 001927A8  4B E9 88 D5 */	bl is__Q24xhud6widgetCFUi
/* 801956CC 001927AC  54 60 06 3F */	clrlwi. r0, r3, 24
/* 801956D0 001927B0  41 82 00 08 */	beq .L_801956D8
.L_801956D4:
/* 801956D4 001927B4  3B E0 00 01 */	li r31, 0x1
.L_801956D8:
/* 801956D8 001927B8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801956DC 001927BC  7F E3 FB 78 */	mr r3, r31
/* 801956E0 001927C0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801956E4 001927C4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801956E8 001927C8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801956EC 001927CC  7C 08 03 A6 */	mtlr r0
/* 801956F0 001927D0  38 21 00 20 */	addi r1, r1, 0x20
/* 801956F4 001927D4  4E 80 00 20 */	blr
.endfn is__Q24xhud11text_widgetCFUi

# xhud::text_widget::update(float)
.fn update__Q24xhud11text_widgetFf, global
/* 801956F8 001927D8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801956FC 001927DC  7C 08 02 A6 */	mflr r0
/* 80195700 001927E0  90 01 00 34 */	stw r0, 0x34(r1)
/* 80195704 001927E4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80195708 001927E8  7C 7F 1B 78 */	mr r31, r3
/* 8019570C 001927EC  4B E9 86 D1 */	bl updater__Q24xhud6widgetFf
/* 80195710 001927F0  38 7F 01 04 */	addi r3, r31, 0x104
/* 80195714 001927F4  38 9F 00 84 */	addi r4, r31, 0x84
/* 80195718 001927F8  4B E8 CD B1 */	bl set_text__8xtextboxFPCc
/* 8019571C 001927FC  C0 1F 00 04 */	lfs f0, 0x4(r31)
/* 80195720 00192800  38 7F 01 18 */	addi r3, r31, 0x118
/* 80195724 00192804  38 9F 01 28 */	addi r4, r31, 0x128
/* 80195728 00192808  D0 1F 01 28 */	stfs f0, 0x128(r31)
/* 8019572C 0019280C  C0 1F 00 08 */	lfs f0, 0x8(r31)
/* 80195730 00192810  D0 1F 01 2C */	stfs f0, 0x12c(r31)
/* 80195734 00192814  C0 1F 00 10 */	lfs f0, 0x10(r31)
/* 80195738 00192818  D0 1F 01 30 */	stfs f0, 0x130(r31)
/* 8019573C 0019281C  C0 1F 00 14 */	lfs f0, 0x14(r31)
/* 80195740 00192820  D0 1F 01 34 */	stfs f0, 0x134(r31)
/* 80195744 00192824  4B E8 28 FD */	bl "__as__13basic_rect<f>FRC13basic_rect<f>"
/* 80195748 00192828  C0 42 B2 40 */	lfs f2, "@725"@sda21(r2)
/* 8019574C 0019282C  C0 3F 00 28 */	lfs f1, 0x28(r31)
/* 80195750 00192830  C0 02 B2 54 */	lfs f0, "@771"@sda21(r2)
/* 80195754 00192834  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80195758 00192838  FC 00 00 1E */	fctiwz f0, f0
/* 8019575C 0019283C  D8 01 00 08 */	stfd f0, 0x8(r1)
/* 80195760 00192840  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80195764 00192844  98 1F 01 14 */	stb r0, 0x114(r31)
/* 80195768 00192848  C0 42 B2 40 */	lfs f2, "@725"@sda21(r2)
/* 8019576C 0019284C  C0 3F 00 2C */	lfs f1, 0x2c(r31)
/* 80195770 00192850  C0 02 B2 54 */	lfs f0, "@771"@sda21(r2)
/* 80195774 00192854  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80195778 00192858  FC 00 00 1E */	fctiwz f0, f0
/* 8019577C 0019285C  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80195780 00192860  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80195784 00192864  98 1F 01 15 */	stb r0, 0x115(r31)
/* 80195788 00192868  C0 42 B2 40 */	lfs f2, "@725"@sda21(r2)
/* 8019578C 0019286C  C0 3F 00 30 */	lfs f1, 0x30(r31)
/* 80195790 00192870  C0 02 B2 54 */	lfs f0, "@771"@sda21(r2)
/* 80195794 00192874  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80195798 00192878  FC 00 00 1E */	fctiwz f0, f0
/* 8019579C 0019287C  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 801957A0 00192880  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 801957A4 00192884  98 1F 01 16 */	stb r0, 0x116(r31)
/* 801957A8 00192888  C0 42 B2 40 */	lfs f2, "@725"@sda21(r2)
/* 801957AC 0019288C  C0 3F 00 34 */	lfs f1, 0x34(r31)
/* 801957B0 00192890  C0 02 B2 54 */	lfs f0, "@771"@sda21(r2)
/* 801957B4 00192894  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 801957B8 00192898  FC 00 00 1E */	fctiwz f0, f0
/* 801957BC 0019289C  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 801957C0 001928A0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801957C4 001928A4  98 1F 01 17 */	stb r0, 0x117(r31)
/* 801957C8 001928A8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801957CC 001928AC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801957D0 001928B0  7C 08 03 A6 */	mtlr r0
/* 801957D4 001928B4  38 21 00 30 */	addi r1, r1, 0x30
/* 801957D8 001928B8  4E 80 00 20 */	blr
.endfn update__Q24xhud11text_widgetFf

# xhud::text_widget::render()
.fn render__Q24xhud11text_widgetFv, global
/* 801957DC 001928BC  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801957E0 001928C0  7C 08 02 A6 */	mflr r0
/* 801957E4 001928C4  90 01 00 54 */	stw r0, 0x54(r1)
/* 801957E8 001928C8  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 801957EC 001928CC  F3 E1 00 48 */	psq_st f31, 0x48(r1), 0, qr0
/* 801957F0 001928D0  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 801957F4 001928D4  F3 C1 00 38 */	psq_st f30, 0x38(r1), 0, qr0
/* 801957F8 001928D8  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 801957FC 001928DC  7C 7B 1B 78 */	mr r27, r3
/* 80195800 001928E0  3C 00 43 30 */	lis r0, 0x4330
/* 80195804 001928E4  8B 83 01 17 */	lbz r28, 0x117(r3)
/* 80195808 001928E8  90 01 00 08 */	stw r0, 0x8(r1)
/* 8019580C 001928EC  C8 42 B2 48 */	lfd f2, "@727"@sda21(r2)
/* 80195810 001928F0  93 81 00 0C */	stw r28, 0xc(r1)
/* 80195814 001928F4  C0 62 B2 58 */	lfs f3, "@786"@sda21(r2)
/* 80195818 001928F8  C8 21 00 08 */	lfd f1, 0x8(r1)
/* 8019581C 001928FC  C0 02 B2 40 */	lfs f0, "@725"@sda21(r2)
/* 80195820 00192900  EC 21 10 28 */	fsubs f1, f1, f2
/* 80195824 00192904  C3 E3 01 28 */	lfs f31, 0x128(r3)
/* 80195828 00192908  C3 C3 01 2C */	lfs f30, 0x12c(r3)
/* 8019582C 0019290C  8B E3 01 14 */	lbz r31, 0x114(r3)
/* 80195830 00192910  EC 23 00 72 */	fmuls f1, f3, f1
/* 80195834 00192914  8B C3 01 15 */	lbz r30, 0x115(r3)
/* 80195838 00192918  8B A3 01 16 */	lbz r29, 0x116(r3)
/* 8019583C 0019291C  EC 21 00 24 */	fdivs f1, f1, f0
/* 80195840 00192920  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80195844 00192924  40 81 00 0C */	ble .L_80195850
/* 80195848 00192928  38 E0 00 FF */	li r7, 0xff
/* 8019584C 0019292C  48 00 00 24 */	b .L_80195870
.L_80195850:
/* 80195850 00192930  C0 02 B2 50 */	lfs f0, "@733"@sda21(r2)
/* 80195854 00192934  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80195858 00192938  40 80 00 0C */	bge .L_80195864
/* 8019585C 0019293C  38 E0 00 00 */	li r7, 0x0
/* 80195860 00192940  48 00 00 10 */	b .L_80195870
.L_80195864:
/* 80195864 00192944  FC 00 08 1E */	fctiwz f0, f1
/* 80195868 00192948  D8 01 00 08 */	stfd f0, 0x8(r1)
/* 8019586C 0019294C  80 E1 00 0C */	lwz r7, 0xc(r1)
.L_80195870:
/* 80195870 00192950  C0 3B 01 28 */	lfs f1, 0x128(r27)
/* 80195874 00192954  38 C0 00 00 */	li r6, 0x0
/* 80195878 00192958  C0 02 B2 5C */	lfs f0, "@787"@sda21(r2)
/* 8019587C 0019295C  38 A0 00 46 */	li r5, 0x46
/* 80195880 00192960  38 00 00 55 */	li r0, 0x55
/* 80195884 00192964  38 7B 01 04 */	addi r3, r27, 0x104
/* 80195888 00192968  EC 01 00 2A */	fadds f0, f1, f0
/* 8019588C 0019296C  38 80 00 01 */	li r4, 0x1
/* 80195890 00192970  D0 1B 01 28 */	stfs f0, 0x128(r27)
/* 80195894 00192974  C0 3B 01 2C */	lfs f1, 0x12c(r27)
/* 80195898 00192978  C0 02 B2 5C */	lfs f0, "@787"@sda21(r2)
/* 8019589C 0019297C  EC 01 00 2A */	fadds f0, f1, f0
/* 801958A0 00192980  D0 1B 01 2C */	stfs f0, 0x12c(r27)
/* 801958A4 00192984  98 DB 01 14 */	stb r6, 0x114(r27)
/* 801958A8 00192988  98 BB 01 15 */	stb r5, 0x115(r27)
/* 801958AC 0019298C  98 1B 01 16 */	stb r0, 0x116(r27)
/* 801958B0 00192990  98 FB 01 17 */	stb r7, 0x117(r27)
/* 801958B4 00192994  4B E8 24 F1 */	bl render__8xtextboxCFb
/* 801958B8 00192998  D3 FB 01 28 */	stfs f31, 0x128(r27)
/* 801958BC 0019299C  38 7B 01 04 */	addi r3, r27, 0x104
/* 801958C0 001929A0  38 80 00 01 */	li r4, 0x1
/* 801958C4 001929A4  D3 DB 01 2C */	stfs f30, 0x12c(r27)
/* 801958C8 001929A8  9B FB 01 14 */	stb r31, 0x114(r27)
/* 801958CC 001929AC  9B DB 01 15 */	stb r30, 0x115(r27)
/* 801958D0 001929B0  9B BB 01 16 */	stb r29, 0x116(r27)
/* 801958D4 001929B4  9B 9B 01 17 */	stb r28, 0x117(r27)
/* 801958D8 001929B8  4B E8 24 CD */	bl render__8xtextboxCFb
/* 801958DC 001929BC  E3 E1 00 48 */	psq_l f31, 0x48(r1), 0, qr0
/* 801958E0 001929C0  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 801958E4 001929C4  E3 C1 00 38 */	psq_l f30, 0x38(r1), 0, qr0
/* 801958E8 001929C8  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 801958EC 001929CC  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 801958F0 001929D0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801958F4 001929D4  7C 08 03 A6 */	mtlr r0
/* 801958F8 001929D8  38 21 00 50 */	addi r1, r1, 0x50
/* 801958FC 001929DC  4E 80 00 20 */	blr
.endfn render__Q24xhud11text_widgetFv

# 0x80195900 - 0x8019590C
.section .text, "ax", unique, 1
.balign 4

# xhud::text_asset::type_name()
.fn type_name__Q24xhud10text_assetFv, weak
/* 80195900 001929E0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80195904 001929E4  38 63 49 F0 */	addi r3, r3, "@stringBase0"@l
/* 80195908 001929E8  4E 80 00 20 */	blr
.endfn type_name__Q24xhud10text_assetFv

# 0x802749F0 - 0x80274A00
.rodata
.balign 8

.obj "@stringBase0", local
	.4byte 0x6875643A
	.4byte 0x74657874
	.byte 0x00
.endobj "@stringBase0"
	.4byte 0x00000000
	.byte 0x00, 0x00, 0x00

# 0x802A1B60 - 0x802A1B88
.data
.balign 8

# xhud::text_widget::__vtable
.obj __vt__Q24xhud11text_widget, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte destroy__Q24xhud11text_widgetFv
	.4byte type__Q24xhud11text_widgetCFv
	.4byte is__Q24xhud11text_widgetCFUi
	.4byte init__Q24xhud6widgetFv
	.4byte setup__Q24xhud11text_widgetFv
	.4byte update__Q24xhud11text_widgetFf
	.4byte render__Q24xhud11text_widgetFv
	.4byte dispatch__Q24xhud6widgetFP5xBaseUiPCfP5xBase
.endobj __vt__Q24xhud11text_widget

# 0x803CC1C8 - 0x803CC1D0
.section .sbss, "wa", @nobits
.balign 8

.obj myid$755, local
	.skip 0x4
.endobj myid$755

.obj init$756, local
	.skip 0x1
.endobj init$756
	.skip 0x3

# 0x803CFBC0 - 0x803CFBE0
.section .sdata2, "a"
.balign 8

.obj "@725", local
	.4byte 0x437F0000
.endobj "@725"
	.4byte 0x00000000

.obj "@727", local
	.4byte 0x43300000
	.4byte 0x00000000
.endobj "@727"

.obj "@733", local
	.4byte 0x00000000
.endobj "@733"

.obj "@771", local
	.4byte 0x3F000000
.endobj "@771"

.obj "@786", local
	.4byte 0x43480000
.endobj "@786"

.obj "@787", local
	.4byte 0x3BF5C28F
.endobj "@787"
