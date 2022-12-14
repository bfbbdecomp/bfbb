.include "macros.inc"
.file "zHud.cpp"

# 0x8009B684 - 0x8009BFB4
.text
.balign 4

# zhud::@unnamed@zHud_cpp@::hide_widget(xhud::widget&, xhud::motive&)
.fn "hide_widget__Q24zhud18@unnamed@zHud_cpp@FRQ24xhud6widgetRQ24xhud6motive", local
/* 8009B684 00098764  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009B688 00098768  7C 08 02 A6 */	mflr r0
/* 8009B68C 0009876C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009B690 00098770  4B F9 2A D9 */	bl hide__Q24xhud6widgetFv
/* 8009B694 00098774  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009B698 00098778  7C 08 03 A6 */	mtlr r0
/* 8009B69C 0009877C  38 21 00 10 */	addi r1, r1, 0x10
/* 8009B6A0 00098780  4E 80 00 20 */	blr
.endfn "hide_widget__Q24zhud18@unnamed@zHud_cpp@FRQ24xhud6widgetRQ24xhud6motive"

# zhud::@unnamed@zHud_cpp@::ping_widget(xhud::widget&)
.fn "ping_widget__Q24zhud18@unnamed@zHud_cpp@FRQ24xhud6widget", local
/* 8009B6A4 00098784  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8009B6A8 00098788  7C 08 02 A6 */	mflr r0
/* 8009B6AC 0009878C  90 01 00 44 */	stw r0, 0x44(r1)
/* 8009B6B0 00098790  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8009B6B4 00098794  7C 7F 1B 78 */	mr r31, r3
/* 8009B6B8 00098798  4B F9 29 1D */	bl show__Q24xhud6widgetFv
/* 8009B6BC 0009879C  3C 60 80 03 */	lis r3, shake_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef@ha
/* 8009B6C0 000987A0  C0 22 91 40 */	lfs f1, "@707"@sda21(r2)
/* 8009B6C4 000987A4  38 A3 EA F0 */	addi r5, r3, shake_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef@l
/* 8009B6C8 000987A8  C0 42 91 44 */	lfs f2, "@708"@sda21(r2)
/* 8009B6CC 000987AC  C0 62 91 48 */	lfs f3, "@709"@sda21(r2)
/* 8009B6D0 000987B0  38 61 00 08 */	addi r3, r1, 0x8
/* 8009B6D4 000987B4  38 9F 00 04 */	addi r4, r31, 0x4
/* 8009B6D8 000987B8  38 C0 00 00 */	li r6, 0x0
/* 8009B6DC 000987BC  4B F9 37 99 */	bl __ct__Q24xhud6motiveFPffffPFRQ24xhud6widgetRQ24xhud6motivef_bPv
/* 8009B6E0 000987C0  7C 64 1B 78 */	mr r4, r3
/* 8009B6E4 000987C4  7F E3 FB 78 */	mr r3, r31
/* 8009B6E8 000987C8  4B F9 2E 9D */	bl add_motive__Q24xhud6widgetFRCQ24xhud6motive
/* 8009B6EC 000987CC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8009B6F0 000987D0  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8009B6F4 000987D4  7C 08 03 A6 */	mtlr r0
/* 8009B6F8 000987D8  38 21 00 40 */	addi r1, r1, 0x40
/* 8009B6FC 000987DC  4E 80 00 20 */	blr
.endfn "ping_widget__Q24zhud18@unnamed@zHud_cpp@FRQ24xhud6widget"

# zhud::@unnamed@zHud_cpp@::delay_hide_widget(xhud::widget&)
.fn "delay_hide_widget__Q24zhud18@unnamed@zHud_cpp@FRQ24xhud6widget", local
/* 8009B700 000987E0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8009B704 000987E4  7C 08 02 A6 */	mflr r0
/* 8009B708 000987E8  3C A0 80 03 */	lis r5, delay_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef@ha
/* 8009B70C 000987EC  3C 80 80 0A */	lis r4, "hide_widget__Q24zhud18@unnamed@zHud_cpp@FRQ24xhud6widgetRQ24xhud6motive"@ha
/* 8009B710 000987F0  90 01 00 44 */	stw r0, 0x44(r1)
/* 8009B714 000987F4  38 C4 B6 84 */	addi r6, r4, "hide_widget__Q24zhud18@unnamed@zHud_cpp@FRQ24xhud6widgetRQ24xhud6motive"@l
/* 8009B718 000987F8  38 A5 EB 84 */	addi r5, r5, delay_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef@l
/* 8009B71C 000987FC  38 80 00 00 */	li r4, 0x0
/* 8009B720 00098800  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8009B724 00098804  7C 7F 1B 78 */	mr r31, r3
/* 8009B728 00098808  38 61 00 08 */	addi r3, r1, 0x8
/* 8009B72C 0009880C  C0 22 91 44 */	lfs f1, "@708"@sda21(r2)
/* 8009B730 00098810  C0 42 91 4C */	lfs f2, "@716"@sda21(r2)
/* 8009B734 00098814  FC 60 08 90 */	fmr f3, f1
/* 8009B738 00098818  4B F9 37 3D */	bl __ct__Q24xhud6motiveFPffffPFRQ24xhud6widgetRQ24xhud6motivef_bPv
/* 8009B73C 0009881C  7C 64 1B 78 */	mr r4, r3
/* 8009B740 00098820  7F E3 FB 78 */	mr r3, r31
/* 8009B744 00098824  4B F9 2E 41 */	bl add_motive__Q24xhud6widgetFRCQ24xhud6motive
/* 8009B748 00098828  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8009B74C 0009882C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8009B750 00098830  7C 08 03 A6 */	mtlr r0
/* 8009B754 00098834  38 21 00 40 */	addi r1, r1, 0x40
/* 8009B758 00098838  4E 80 00 20 */	blr
.endfn "delay_hide_widget__Q24zhud18@unnamed@zHud_cpp@FRQ24xhud6widget"

# zhud::@unnamed@zHud_cpp@::get_meter_widget(int)
.fn "get_meter_widget__Q24zhud18@unnamed@zHud_cpp@Fi", local
/* 8009B75C 0009883C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009B760 00098840  7C 08 02 A6 */	mflr r0
/* 8009B764 00098844  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009B768 00098848  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8009B76C 0009884C  7C 7F 1B 78 */	mr r31, r3
/* 8009B770 00098850  88 0D 8F CC */	lbz r0, init$729@sda21(r13)
/* 8009B774 00098854  7C 00 07 75 */	extsb. r0, r0
/* 8009B778 00098858  40 82 00 18 */	bne .L_8009B790
/* 8009B77C 0009885C  4B F9 44 DD */	bl type_name__Q24xhud11meter_assetFv
/* 8009B780 00098860  4B FB 0A 95 */	bl xStrHash__FPCc
/* 8009B784 00098864  90 6D 8F C8 */	stw r3, meter_type$728@sda21(r13)
/* 8009B788 00098868  38 00 00 01 */	li r0, 0x1
/* 8009B78C 0009886C  98 0D 8F CC */	stb r0, init$729@sda21(r13)
.L_8009B790:
/* 8009B790 00098870  3C 60 80 2E */	lis r3, "widgets__Q24zhud18@unnamed@zHud_cpp@"@ha
/* 8009B794 00098874  57 E0 10 3A */	slwi r0, r31, 2
/* 8009B798 00098878  38 63 57 60 */	addi r3, r3, "widgets__Q24zhud18@unnamed@zHud_cpp@"@l
/* 8009B79C 0009887C  7C 63 00 2E */	lwzx r3, r3, r0
/* 8009B7A0 00098880  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8009B7A4 00098884  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009B7A8 00098888  7C 08 03 A6 */	mtlr r0
/* 8009B7AC 0009888C  38 21 00 10 */	addi r1, r1, 0x10
/* 8009B7B0 00098890  4E 80 00 20 */	blr
.endfn "get_meter_widget__Q24zhud18@unnamed@zHud_cpp@Fi"

# zhud::@unnamed@zHud_cpp@::get_model_widget(int)
.fn "get_model_widget__Q24zhud18@unnamed@zHud_cpp@Fi", local
/* 8009B7B4 00098894  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009B7B8 00098898  7C 08 02 A6 */	mflr r0
/* 8009B7BC 0009889C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009B7C0 000988A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8009B7C4 000988A4  7C 7F 1B 78 */	mr r31, r3
/* 8009B7C8 000988A8  88 0D 8F D4 */	lbz r0, init$737@sda21(r13)
/* 8009B7CC 000988AC  7C 00 07 75 */	extsb. r0, r0
/* 8009B7D0 000988B0  40 82 00 18 */	bne .L_8009B7E8
/* 8009B7D4 000988B4  4B F9 47 9D */	bl type_name__Q24xhud11model_assetFv
/* 8009B7D8 000988B8  4B FB 0A 3D */	bl xStrHash__FPCc
/* 8009B7DC 000988BC  90 6D 8F D0 */	stw r3, model_type$736@sda21(r13)
/* 8009B7E0 000988C0  38 00 00 01 */	li r0, 0x1
/* 8009B7E4 000988C4  98 0D 8F D4 */	stb r0, init$737@sda21(r13)
.L_8009B7E8:
/* 8009B7E8 000988C8  3C 60 80 2E */	lis r3, "widgets__Q24zhud18@unnamed@zHud_cpp@"@ha
/* 8009B7EC 000988CC  57 E0 10 3A */	slwi r0, r31, 2
/* 8009B7F0 000988D0  38 63 57 60 */	addi r3, r3, "widgets__Q24zhud18@unnamed@zHud_cpp@"@l
/* 8009B7F4 000988D4  7C 63 00 2E */	lwzx r3, r3, r0
/* 8009B7F8 000988D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8009B7FC 000988DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009B800 000988E0  7C 08 03 A6 */	mtlr r0
/* 8009B804 000988E4  38 21 00 10 */	addi r1, r1, 0x10
/* 8009B808 000988E8  4E 80 00 20 */	blr
.endfn "get_model_widget__Q24zhud18@unnamed@zHud_cpp@Fi"

# zhud::@unnamed@zHud_cpp@::on_pause()
.fn "on_pause__Q24zhud18@unnamed@zHud_cpp@Fv", local
/* 8009B80C 000988EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009B810 000988F0  7C 08 02 A6 */	mflr r0
/* 8009B814 000988F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009B818 000988F8  48 00 05 CD */	bl show__4zhudFv
/* 8009B81C 000988FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009B820 00098900  7C 08 03 A6 */	mtlr r0
/* 8009B824 00098904  38 21 00 10 */	addi r1, r1, 0x10
/* 8009B828 00098908  4E 80 00 20 */	blr
.endfn "on_pause__Q24zhud18@unnamed@zHud_cpp@Fv"

# zhud::@unnamed@zHud_cpp@::on_unpause()
.fn "on_unpause__Q24zhud18@unnamed@zHud_cpp@Fv", local
/* 8009B82C 0009890C  88 0D 8F C5 */	lbz r0, "inited__Q24zhud18@unnamed@zHud_cpp@"@sda21(r13)
/* 8009B830 00098910  28 00 00 00 */	cmplwi r0, 0x0
/* 8009B834 00098914  4E 80 00 20 */	blr
.endfn "on_unpause__Q24zhud18@unnamed@zHud_cpp@Fv"

# zhud::init()
.fn init__4zhudFv, global
/* 8009B838 00098918  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009B83C 0009891C  7C 08 02 A6 */	mflr r0
/* 8009B840 00098920  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009B844 00098924  38 00 00 01 */	li r0, 0x1
/* 8009B848 00098928  98 0D 8F C5 */	stb r0, "inited__Q24zhud18@unnamed@zHud_cpp@"@sda21(r13)
/* 8009B84C 0009892C  4B F9 23 01 */	bl init__4xhudFv
/* 8009B850 00098930  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009B854 00098934  7C 08 03 A6 */	mtlr r0
/* 8009B858 00098938  38 21 00 10 */	addi r1, r1, 0x10
/* 8009B85C 0009893C  4E 80 00 20 */	blr
.endfn init__4zhudFv

# zhud::setup()
.fn setup__4zhudFv, global
/* 8009B860 00098940  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8009B864 00098944  7C 08 02 A6 */	mflr r0
/* 8009B868 00098948  3C 60 80 2E */	lis r3, ...bss.0@ha
/* 8009B86C 0009894C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8009B870 00098950  BF 01 00 10 */	stmw r24, 0x10(r1)
/* 8009B874 00098954  3B E3 57 10 */	addi r31, r3, ...bss.0@l
/* 8009B878 00098958  4B F9 23 11 */	bl setup__4xhudFv
/* 8009B87C 0009895C  3C 60 80 29 */	lis r3, "widget_resources__Q24zhud18@unnamed@zHud_cpp@"@ha
/* 8009B880 00098960  3B 3F 00 50 */	addi r25, r31, 0x50
/* 8009B884 00098964  3B 03 FA 20 */	addi r24, r3, "widget_resources__Q24zhud18@unnamed@zHud_cpp@"@l
/* 8009B888 00098968  3B 40 00 00 */	li r26, 0x0
.L_8009B88C:
/* 8009B88C 0009896C  80 78 00 00 */	lwz r3, 0x0(r24)
/* 8009B890 00098970  4B FB 09 85 */	bl xStrHash__FPCc
/* 8009B894 00098974  48 01 91 A9 */	bl zSceneFindObject__FUi
/* 8009B898 00098978  38 03 00 10 */	addi r0, r3, 0x10
/* 8009B89C 0009897C  90 19 00 00 */	stw r0, 0x0(r25)
/* 8009B8A0 00098980  80 79 00 00 */	lwz r3, 0x0(r25)
/* 8009B8A4 00098984  4B F9 35 C5 */	bl enable__Q24xhud6widgetFv
/* 8009B8A8 00098988  3B 5A 00 01 */	addi r26, r26, 0x1
/* 8009B8AC 0009898C  3B 39 00 04 */	addi r25, r25, 0x4
/* 8009B8B0 00098990  2C 1A 00 07 */	cmpwi r26, 0x7
/* 8009B8B4 00098994  3B 18 00 04 */	addi r24, r24, 0x4
/* 8009B8B8 00098998  41 80 FF D4 */	blt .L_8009B88C
/* 8009B8BC 0009899C  48 01 95 05 */	bl zSceneGetLevelIndex__Fv
/* 8009B8C0 000989A0  3C 80 80 29 */	lis r4, "level_specials__Q24zhud18@unnamed@zHud_cpp@"@ha
/* 8009B8C4 000989A4  54 63 18 38 */	slwi r3, r3, 3
/* 8009B8C8 000989A8  38 04 FA 44 */	addi r0, r4, "level_specials__Q24zhud18@unnamed@zHud_cpp@"@l
/* 8009B8CC 000989AC  7F 20 1A 14 */	add r25, r0, r3
/* 8009B8D0 000989B0  80 19 00 00 */	lwz r0, 0x0(r25)
/* 8009B8D4 000989B4  28 00 00 00 */	cmplwi r0, 0x0
/* 8009B8D8 000989B8  40 82 00 18 */	bne .L_8009B8F0
/* 8009B8DC 000989BC  38 7F 00 50 */	addi r3, r31, 0x50
/* 8009B8E0 000989C0  38 00 00 00 */	li r0, 0x0
/* 8009B8E4 000989C4  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8009B8E8 000989C8  90 03 00 20 */	stw r0, 0x20(r3)
/* 8009B8EC 000989CC  48 00 00 7C */	b .L_8009B968
.L_8009B8F0:
/* 8009B8F0 000989D0  3C 60 80 29 */	lis r3, "widget_resources__Q24zhud18@unnamed@zHud_cpp@"@ha
/* 8009B8F4 000989D4  38 63 FA 20 */	addi r3, r3, "widget_resources__Q24zhud18@unnamed@zHud_cpp@"@l
/* 8009B8F8 000989D8  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 8009B8FC 000989DC  4B FB 09 19 */	bl xStrHash__FPCc
/* 8009B900 000989E0  48 01 91 3D */	bl zSceneFindObject__FUi
/* 8009B904 000989E4  80 99 00 04 */	lwz r4, 0x4(r25)
/* 8009B908 000989E8  3C 00 43 30 */	lis r0, 0x4330
/* 8009B90C 000989EC  3B 43 00 10 */	addi r26, r3, 0x10
/* 8009B910 000989F0  90 01 00 08 */	stw r0, 0x8(r1)
/* 8009B914 000989F4  6C 80 80 00 */	xoris r0, r4, 0x8000
/* 8009B918 000989F8  C8 22 91 50 */	lfd f1, "@795"@sda21(r2)
/* 8009B91C 000989FC  90 01 00 0C */	stw r0, 0xc(r1)
/* 8009B920 00098A00  7F 43 D3 78 */	mr r3, r26
/* 8009B924 00098A04  3B 00 00 01 */	li r24, 0x1
/* 8009B928 00098A08  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 8009B92C 00098A0C  EC 00 08 28 */	fsubs f0, f0, f1
/* 8009B930 00098A10  D0 1A 00 90 */	stfs f0, 0x90(r26)
/* 8009B934 00098A14  48 00 06 A9 */	bl get_asset__Q24xhud17font_meter_widgetFv
/* 8009B938 00098A18  9B 03 00 70 */	stb r24, 0x70(r3)
/* 8009B93C 00098A1C  38 9F 00 50 */	addi r4, r31, 0x50
/* 8009B940 00098A20  7F 43 D3 78 */	mr r3, r26
/* 8009B944 00098A24  93 44 00 1C */	stw r26, 0x1c(r4)
/* 8009B948 00098A28  4B F9 35 21 */	bl enable__Q24xhud6widgetFv
/* 8009B94C 00098A2C  80 79 00 00 */	lwz r3, 0x0(r25)
/* 8009B950 00098A30  4B FB 08 C5 */	bl xStrHash__FPCc
/* 8009B954 00098A34  48 01 90 E9 */	bl zSceneFindObject__FUi
/* 8009B958 00098A38  38 63 00 10 */	addi r3, r3, 0x10
/* 8009B95C 00098A3C  38 9F 00 50 */	addi r4, r31, 0x50
/* 8009B960 00098A40  90 64 00 20 */	stw r3, 0x20(r4)
/* 8009B964 00098A44  4B F9 35 05 */	bl enable__Q24xhud6widgetFv
.L_8009B968:
/* 8009B968 00098A48  38 7F 00 28 */	addi r3, r31, 0x28
/* 8009B96C 00098A4C  38 80 00 00 */	li r4, 0x0
/* 8009B970 00098A50  38 A0 00 14 */	li r5, 0x14
/* 8009B974 00098A54  4B F6 7A E5 */	bl memset
/* 8009B978 00098A58  3C 60 80 3C */	lis r3, globals@ha
/* 8009B97C 00098A5C  3B 7F 00 00 */	addi r27, r31, 0x0
/* 8009B980 00098A60  39 23 05 58 */	addi r9, r3, globals@l
/* 8009B984 00098A64  3B BF 00 28 */	addi r29, r31, 0x28
/* 8009B988 00098A68  39 09 16 B0 */	addi r8, r9, 0x16b0
/* 8009B98C 00098A6C  3C 60 80 26 */	lis r3, "meter_widget_index__Q24zhud18@unnamed@zHud_cpp@"@ha
/* 8009B990 00098A70  38 E9 17 38 */	addi r7, r9, 0x1738
/* 8009B994 00098A74  38 C9 1B 00 */	addi r6, r9, 0x1b00
/* 8009B998 00098A78  38 A9 1B 04 */	addi r5, r9, 0x1b04
/* 8009B99C 00098A7C  38 89 1B C4 */	addi r4, r9, 0x1bc4
/* 8009B9A0 00098A80  38 09 1B C0 */	addi r0, r9, 0x1bc0
/* 8009B9A4 00098A84  91 1F 00 00 */	stw r8, 0x0(r31)
/* 8009B9A8 00098A88  3B C3 CB 78 */	addi r30, r3, "meter_widget_index__Q24zhud18@unnamed@zHud_cpp@"@l
/* 8009B9AC 00098A8C  3B 9F 00 3C */	addi r28, r31, 0x3c
/* 8009B9B0 00098A90  90 FF 00 28 */	stw r7, 0x28(r31)
/* 8009B9B4 00098A94  3B 5F 00 14 */	addi r26, r31, 0x14
/* 8009B9B8 00098A98  3B FF 00 50 */	addi r31, r31, 0x50
/* 8009B9BC 00098A9C  3B 00 00 00 */	li r24, 0x0
/* 8009B9C0 00098AA0  90 DB 00 04 */	stw r6, 0x4(r27)
/* 8009B9C4 00098AA4  3B 2D 8F C0 */	addi r25, r13, "hiding__Q24zhud18@unnamed@zHud_cpp@"@sda21
/* 8009B9C8 00098AA8  90 BB 00 08 */	stw r5, 0x8(r27)
/* 8009B9CC 00098AAC  90 9B 00 0C */	stw r4, 0xc(r27)
/* 8009B9D0 00098AB0  90 1B 00 10 */	stw r0, 0x10(r27)
.L_8009B9D4:
/* 8009B9D4 00098AB4  80 7E 00 00 */	lwz r3, 0x0(r30)
/* 8009B9D8 00098AB8  54 60 10 3A */	slwi r0, r3, 2
/* 8009B9DC 00098ABC  7C 1F 00 2E */	lwzx r0, r31, r0
/* 8009B9E0 00098AC0  28 00 00 00 */	cmplwi r0, 0x0
/* 8009B9E4 00098AC4  41 82 00 70 */	beq .L_8009BA54
/* 8009B9E8 00098AC8  4B FF FD 75 */	bl "get_meter_widget__Q24zhud18@unnamed@zHud_cpp@Fi"
/* 8009B9EC 00098ACC  80 9D 00 00 */	lwz r4, 0x0(r29)
/* 8009B9F0 00098AD0  28 04 00 00 */	cmplwi r4, 0x0
/* 8009B9F4 00098AD4  41 82 00 2C */	beq .L_8009BA20
/* 8009B9F8 00098AD8  80 84 00 00 */	lwz r4, 0x0(r4)
/* 8009B9FC 00098ADC  3C 00 43 30 */	lis r0, 0x4330
/* 8009BA00 00098AE0  90 01 00 08 */	stw r0, 0x8(r1)
/* 8009BA04 00098AE4  90 9C 00 00 */	stw r4, 0x0(r28)
/* 8009BA08 00098AE8  80 1C 00 00 */	lwz r0, 0x0(r28)
/* 8009BA0C 00098AEC  C8 22 91 58 */	lfd f1, "@796"@sda21(r2)
/* 8009BA10 00098AF0  90 01 00 0C */	stw r0, 0xc(r1)
/* 8009BA14 00098AF4  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 8009BA18 00098AF8  EC 00 08 28 */	fsubs f0, f0, f1
/* 8009BA1C 00098AFC  D0 03 00 90 */	stfs f0, 0x90(r3)
.L_8009BA20:
/* 8009BA20 00098B00  80 9B 00 00 */	lwz r4, 0x0(r27)
/* 8009BA24 00098B04  3C 00 43 30 */	lis r0, 0x4330
/* 8009BA28 00098B08  90 01 00 08 */	stw r0, 0x8(r1)
/* 8009BA2C 00098B0C  80 04 00 00 */	lwz r0, 0x0(r4)
/* 8009BA30 00098B10  90 1A 00 00 */	stw r0, 0x0(r26)
/* 8009BA34 00098B14  80 1A 00 00 */	lwz r0, 0x0(r26)
/* 8009BA38 00098B18  C8 22 91 58 */	lfd f1, "@796"@sda21(r2)
/* 8009BA3C 00098B1C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8009BA40 00098B20  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 8009BA44 00098B24  EC 20 08 28 */	fsubs f1, f0, f1
/* 8009BA48 00098B28  4B F9 3D 01 */	bl set_value_immediate__Q24xhud12meter_widgetFf
/* 8009BA4C 00098B2C  38 00 00 00 */	li r0, 0x0
/* 8009BA50 00098B30  98 19 00 00 */	stb r0, 0x0(r25)
.L_8009BA54:
/* 8009BA54 00098B34  3B 18 00 01 */	addi r24, r24, 0x1
/* 8009BA58 00098B38  3B BD 00 04 */	addi r29, r29, 0x4
/* 8009BA5C 00098B3C  2C 18 00 05 */	cmpwi r24, 0x5
/* 8009BA60 00098B40  3B 9C 00 04 */	addi r28, r28, 0x4
/* 8009BA64 00098B44  3B 7B 00 04 */	addi r27, r27, 0x4
/* 8009BA68 00098B48  3B 5A 00 04 */	addi r26, r26, 0x4
/* 8009BA6C 00098B4C  3B 39 00 01 */	addi r25, r25, 0x1
/* 8009BA70 00098B50  3B DE 00 04 */	addi r30, r30, 0x4
/* 8009BA74 00098B54  41 80 FF 60 */	blt .L_8009B9D4
/* 8009BA78 00098B58  BB 01 00 10 */	lmw r24, 0x10(r1)
/* 8009BA7C 00098B5C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8009BA80 00098B60  7C 08 03 A6 */	mtlr r0
/* 8009BA84 00098B64  38 21 00 30 */	addi r1, r1, 0x30
/* 8009BA88 00098B68  4E 80 00 20 */	blr
.endfn setup__4zhudFv

# zhud::destroy()
.fn destroy__4zhudFv, global
/* 8009BA8C 00098B6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009BA90 00098B70  7C 08 02 A6 */	mflr r0
/* 8009BA94 00098B74  3C 60 80 2E */	lis r3, "widgets__Q24zhud18@unnamed@zHud_cpp@"@ha
/* 8009BA98 00098B78  38 80 00 00 */	li r4, 0x0
/* 8009BA9C 00098B7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009BAA0 00098B80  38 00 00 00 */	li r0, 0x0
/* 8009BAA4 00098B84  38 63 57 60 */	addi r3, r3, "widgets__Q24zhud18@unnamed@zHud_cpp@"@l
/* 8009BAA8 00098B88  38 A0 00 24 */	li r5, 0x24
/* 8009BAAC 00098B8C  98 0D 8F C5 */	stb r0, "inited__Q24zhud18@unnamed@zHud_cpp@"@sda21(r13)
/* 8009BAB0 00098B90  4B F6 79 A9 */	bl memset
/* 8009BAB4 00098B94  4B F9 20 F5 */	bl destroy__4xhudFv
/* 8009BAB8 00098B98  38 00 00 01 */	li r0, 0x1
/* 8009BABC 00098B9C  98 0D 82 70 */	stb r0, "last_paused__Q24zhud18@unnamed@zHud_cpp@"@sda21(r13)
/* 8009BAC0 00098BA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009BAC4 00098BA4  7C 08 03 A6 */	mtlr r0
/* 8009BAC8 00098BA8  38 21 00 10 */	addi r1, r1, 0x10
/* 8009BACC 00098BAC  4E 80 00 20 */	blr
.endfn destroy__4zhudFv

# zhud::update(float)
.fn update__4zhudFf, global
/* 8009BAD0 00098BB0  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8009BAD4 00098BB4  7C 08 02 A6 */	mflr r0
/* 8009BAD8 00098BB8  90 01 00 64 */	stw r0, 0x64(r1)
/* 8009BADC 00098BBC  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8009BAE0 00098BC0  F3 E1 00 58 */	psq_st f31, 0x58(r1), 0, qr0
/* 8009BAE4 00098BC4  BE 61 00 1C */	stmw r19, 0x1c(r1)
/* 8009BAE8 00098BC8  3C 60 80 3C */	lis r3, globals@ha
/* 8009BAEC 00098BCC  3C 80 80 2E */	lis r4, ...bss.0@ha
/* 8009BAF0 00098BD0  38 63 05 58 */	addi r3, r3, globals@l
/* 8009BAF4 00098BD4  FF E0 08 90 */	fmr f31, f1
/* 8009BAF8 00098BD8  80 63 1F BC */	lwz r3, 0x1fbc(r3)
/* 8009BAFC 00098BDC  3B 84 57 10 */	addi r28, r4, ...bss.0@l
/* 8009BB00 00098BE0  28 03 00 00 */	cmplwi r3, 0x0
/* 8009BB04 00098BE4  41 82 00 18 */	beq .L_8009BB1C
/* 8009BB08 00098BE8  80 63 00 14 */	lwz r3, 0x14(r3)
/* 8009BB0C 00098BEC  80 03 00 3C */	lwz r0, 0x3c(r3)
/* 8009BB10 00098BF0  28 00 00 00 */	cmplwi r0, 0x0
/* 8009BB14 00098BF4  41 82 00 08 */	beq .L_8009BB1C
/* 8009BB18 00098BF8  48 00 03 BD */	bl hide__4zhudFv
.L_8009BB1C:
/* 8009BB1C 00098BFC  80 0D 8F A8 */	lwz r0, gGameMode@sda21(r13)
/* 8009BB20 00098C00  2C 00 00 08 */	cmpwi r0, 0x8
/* 8009BB24 00098C04  40 82 00 08 */	bne .L_8009BB2C
/* 8009BB28 00098C08  48 00 03 AD */	bl hide__4zhudFv
.L_8009BB2C:
/* 8009BB2C 00098C0C  3C 60 80 3C */	lis r3, globals@ha
/* 8009BB30 00098C10  38 63 05 58 */	addi r3, r3, globals@l
/* 8009BB34 00098C14  80 03 17 88 */	lwz r0, 0x1788(r3)
/* 8009BB38 00098C18  28 00 00 00 */	cmplwi r0, 0x0
/* 8009BB3C 00098C1C  40 82 00 40 */	bne .L_8009BB7C
/* 8009BB40 00098C20  80 63 03 1C */	lwz r3, 0x31c(r3)
/* 8009BB44 00098C24  80 03 00 30 */	lwz r0, 0x30(r3)
/* 8009BB48 00098C28  54 00 02 D7 */	rlwinm. r0, r0, 0, 11, 11
/* 8009BB4C 00098C2C  41 82 00 30 */	beq .L_8009BB7C
/* 8009BB50 00098C30  4B FF C6 2D */	bl zGameIsPaused__Fv
/* 8009BB54 00098C34  2C 03 00 00 */	cmpwi r3, 0x0
/* 8009BB58 00098C38  40 82 00 24 */	bne .L_8009BB7C
/* 8009BB5C 00098C3C  3C 60 80 3C */	lis r3, globals@ha
/* 8009BB60 00098C40  38 63 05 58 */	addi r3, r3, globals@l
/* 8009BB64 00098C44  80 63 1F C0 */	lwz r3, 0x1fc0(r3)
/* 8009BB68 00098C48  80 63 00 00 */	lwz r3, 0x0(r3)
/* 8009BB6C 00098C4C  3C 03 AF B9 */	addis r0, r3, 0xafb9
/* 8009BB70 00098C50  28 00 31 32 */	cmplwi r0, 0x3132
/* 8009BB74 00098C54  41 82 00 08 */	beq .L_8009BB7C
/* 8009BB78 00098C58  48 00 02 6D */	bl show__4zhudFv
.L_8009BB7C:
/* 8009BB7C 00098C5C  88 0D 82 70 */	lbz r0, "last_paused__Q24zhud18@unnamed@zHud_cpp@"@sda21(r13)
/* 8009BB80 00098C60  28 00 00 00 */	cmplwi r0, 0x0
/* 8009BB84 00098C64  40 82 00 20 */	bne .L_8009BBA4
/* 8009BB88 00098C68  4B FF C5 F5 */	bl zGameIsPaused__Fv
/* 8009BB8C 00098C6C  2C 03 00 00 */	cmpwi r3, 0x0
/* 8009BB90 00098C70  41 82 00 14 */	beq .L_8009BBA4
/* 8009BB94 00098C74  4B FF FC 79 */	bl "on_pause__Q24zhud18@unnamed@zHud_cpp@Fv"
/* 8009BB98 00098C78  38 00 00 01 */	li r0, 0x1
/* 8009BB9C 00098C7C  98 0D 82 70 */	stb r0, "last_paused__Q24zhud18@unnamed@zHud_cpp@"@sda21(r13)
/* 8009BBA0 00098C80  48 00 00 28 */	b .L_8009BBC8
.L_8009BBA4:
/* 8009BBA4 00098C84  88 0D 82 70 */	lbz r0, "last_paused__Q24zhud18@unnamed@zHud_cpp@"@sda21(r13)
/* 8009BBA8 00098C88  28 00 00 00 */	cmplwi r0, 0x0
/* 8009BBAC 00098C8C  41 82 00 1C */	beq .L_8009BBC8
/* 8009BBB0 00098C90  4B FF C5 CD */	bl zGameIsPaused__Fv
/* 8009BBB4 00098C94  2C 03 00 00 */	cmpwi r3, 0x0
/* 8009BBB8 00098C98  40 82 00 10 */	bne .L_8009BBC8
/* 8009BBBC 00098C9C  4B FF FC 71 */	bl "on_unpause__Q24zhud18@unnamed@zHud_cpp@Fv"
/* 8009BBC0 00098CA0  38 00 00 00 */	li r0, 0x0
/* 8009BBC4 00098CA4  98 0D 82 70 */	stb r0, "last_paused__Q24zhud18@unnamed@zHud_cpp@"@sda21(r13)
.L_8009BBC8:
/* 8009BBC8 00098CA8  3C 80 80 26 */	lis r4, "meter_widget_index__Q24zhud18@unnamed@zHud_cpp@"@ha
/* 8009BBCC 00098CAC  3C 60 80 26 */	lis r3, "model_widget_index__Q24zhud18@unnamed@zHud_cpp@"@ha
/* 8009BBD0 00098CB0  3B E4 CB 78 */	addi r31, r4, "meter_widget_index__Q24zhud18@unnamed@zHud_cpp@"@l
/* 8009BBD4 00098CB4  3B CD 8F C0 */	addi r30, r13, "hiding__Q24zhud18@unnamed@zHud_cpp@"@sda21
/* 8009BBD8 00098CB8  3B A3 CB 8C */	addi r29, r3, "model_widget_index__Q24zhud18@unnamed@zHud_cpp@"@l
/* 8009BBDC 00098CBC  3B 7C 00 00 */	addi r27, r28, 0x0
/* 8009BBE0 00098CC0  7F F7 FB 78 */	mr r23, r31
/* 8009BBE4 00098CC4  7F D6 F3 78 */	mr r22, r30
/* 8009BBE8 00098CC8  7F B5 EB 78 */	mr r21, r29
/* 8009BBEC 00098CCC  3B 5C 00 14 */	addi r26, r28, 0x14
/* 8009BBF0 00098CD0  3B 3C 00 28 */	addi r25, r28, 0x28
/* 8009BBF4 00098CD4  3B 1C 00 3C */	addi r24, r28, 0x3c
/* 8009BBF8 00098CD8  3A 80 00 00 */	li r20, 0x0
.L_8009BBFC:
/* 8009BBFC 00098CDC  80 7B 00 00 */	lwz r3, 0x0(r27)
/* 8009BC00 00098CE0  38 A0 00 01 */	li r5, 0x1
/* 8009BC04 00098CE4  80 9A 00 00 */	lwz r4, 0x0(r26)
/* 8009BC08 00098CE8  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8009BC0C 00098CEC  7C 04 00 40 */	cmplw r4, r0
/* 8009BC10 00098CF0  40 82 00 08 */	bne .L_8009BC18
/* 8009BC14 00098CF4  38 A0 00 00 */	li r5, 0x0
.L_8009BC18:
/* 8009BC18 00098CF8  54 A0 06 3F */	clrlwi. r0, r5, 24
/* 8009BC1C 00098CFC  38 80 00 00 */	li r4, 0x0
/* 8009BC20 00098D00  40 82 00 20 */	bne .L_8009BC40
/* 8009BC24 00098D04  80 B9 00 00 */	lwz r5, 0x0(r25)
/* 8009BC28 00098D08  28 05 00 00 */	cmplwi r5, 0x0
/* 8009BC2C 00098D0C  41 82 00 18 */	beq .L_8009BC44
/* 8009BC30 00098D10  80 78 00 00 */	lwz r3, 0x0(r24)
/* 8009BC34 00098D14  80 05 00 00 */	lwz r0, 0x0(r5)
/* 8009BC38 00098D18  7C 03 00 40 */	cmplw r3, r0
/* 8009BC3C 00098D1C  41 82 00 08 */	beq .L_8009BC44
.L_8009BC40:
/* 8009BC40 00098D20  38 80 00 01 */	li r4, 0x1
.L_8009BC44:
/* 8009BC44 00098D24  54 80 06 3F */	clrlwi. r0, r4, 24
/* 8009BC48 00098D28  41 82 00 AC */	beq .L_8009BCF4
/* 8009BC4C 00098D2C  80 77 00 00 */	lwz r3, 0x0(r23)
/* 8009BC50 00098D30  38 9C 00 50 */	addi r4, r28, 0x50
/* 8009BC54 00098D34  54 60 10 3A */	slwi r0, r3, 2
/* 8009BC58 00098D38  7C 04 00 2E */	lwzx r0, r4, r0
/* 8009BC5C 00098D3C  28 00 00 00 */	cmplwi r0, 0x0
/* 8009BC60 00098D40  41 82 00 94 */	beq .L_8009BCF4
/* 8009BC64 00098D44  4B FF FA F9 */	bl "get_meter_widget__Q24zhud18@unnamed@zHud_cpp@Fi"
/* 8009BC68 00098D48  80 99 00 00 */	lwz r4, 0x0(r25)
/* 8009BC6C 00098D4C  7C 73 1B 78 */	mr r19, r3
/* 8009BC70 00098D50  28 04 00 00 */	cmplwi r4, 0x0
/* 8009BC74 00098D54  41 82 00 2C */	beq .L_8009BCA0
/* 8009BC78 00098D58  80 64 00 00 */	lwz r3, 0x0(r4)
/* 8009BC7C 00098D5C  3C 00 43 30 */	lis r0, 0x4330
/* 8009BC80 00098D60  90 01 00 08 */	stw r0, 0x8(r1)
/* 8009BC84 00098D64  90 78 00 00 */	stw r3, 0x0(r24)
/* 8009BC88 00098D68  80 18 00 00 */	lwz r0, 0x0(r24)
/* 8009BC8C 00098D6C  C8 22 91 58 */	lfd f1, "@796"@sda21(r2)
/* 8009BC90 00098D70  90 01 00 0C */	stw r0, 0xc(r1)
/* 8009BC94 00098D74  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 8009BC98 00098D78  EC 00 08 28 */	fsubs f0, f0, f1
/* 8009BC9C 00098D7C  D0 13 00 90 */	stfs f0, 0x90(r19)
.L_8009BCA0:
/* 8009BCA0 00098D80  80 9B 00 00 */	lwz r4, 0x0(r27)
/* 8009BCA4 00098D84  3C 00 43 30 */	lis r0, 0x4330
/* 8009BCA8 00098D88  90 01 00 08 */	stw r0, 0x8(r1)
/* 8009BCAC 00098D8C  7E 63 9B 78 */	mr r3, r19
/* 8009BCB0 00098D90  80 04 00 00 */	lwz r0, 0x0(r4)
/* 8009BCB4 00098D94  90 1A 00 00 */	stw r0, 0x0(r26)
/* 8009BCB8 00098D98  80 1A 00 00 */	lwz r0, 0x0(r26)
/* 8009BCBC 00098D9C  C8 22 91 58 */	lfd f1, "@796"@sda21(r2)
/* 8009BCC0 00098DA0  90 01 00 0C */	stw r0, 0xc(r1)
/* 8009BCC4 00098DA4  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 8009BCC8 00098DA8  EC 20 08 28 */	fsubs f1, f0, f1
/* 8009BCCC 00098DAC  4B F9 38 B5 */	bl set_value__Q24xhud12meter_widgetFf
/* 8009BCD0 00098DB0  38 00 00 00 */	li r0, 0x0
/* 8009BCD4 00098DB4  7E 63 9B 78 */	mr r3, r19
/* 8009BCD8 00098DB8  98 16 00 00 */	stb r0, 0x0(r22)
/* 8009BCDC 00098DBC  4B FF F9 C9 */	bl "ping_widget__Q24zhud18@unnamed@zHud_cpp@FRQ24xhud6widget"
/* 8009BCE0 00098DC0  80 75 00 00 */	lwz r3, 0x0(r21)
/* 8009BCE4 00098DC4  2C 03 FF FF */	cmpwi r3, -0x1
/* 8009BCE8 00098DC8  41 82 00 0C */	beq .L_8009BCF4
/* 8009BCEC 00098DCC  4B FF FA C9 */	bl "get_model_widget__Q24zhud18@unnamed@zHud_cpp@Fi"
/* 8009BCF0 00098DD0  4B FF F9 B5 */	bl "ping_widget__Q24zhud18@unnamed@zHud_cpp@FRQ24xhud6widget"
.L_8009BCF4:
/* 8009BCF4 00098DD4  3A 94 00 01 */	addi r20, r20, 0x1
/* 8009BCF8 00098DD8  3B 5A 00 04 */	addi r26, r26, 0x4
/* 8009BCFC 00098DDC  2C 14 00 05 */	cmpwi r20, 0x5
/* 8009BD00 00098DE0  3B 39 00 04 */	addi r25, r25, 0x4
/* 8009BD04 00098DE4  3B 18 00 04 */	addi r24, r24, 0x4
/* 8009BD08 00098DE8  3A F7 00 04 */	addi r23, r23, 0x4
/* 8009BD0C 00098DEC  3A D6 00 01 */	addi r22, r22, 0x1
/* 8009BD10 00098DF0  3A B5 00 04 */	addi r21, r21, 0x4
/* 8009BD14 00098DF4  3B 7B 00 04 */	addi r27, r27, 0x4
/* 8009BD18 00098DF8  41 80 FE E4 */	blt .L_8009BBFC
/* 8009BD1C 00098DFC  4B FF C4 61 */	bl zGameIsPaused__Fv
/* 8009BD20 00098E00  2C 03 00 00 */	cmpwi r3, 0x0
/* 8009BD24 00098E04  40 82 00 7C */	bne .L_8009BDA0
/* 8009BD28 00098E08  3A 7C 00 50 */	addi r19, r28, 0x50
/* 8009BD2C 00098E0C  3A 80 00 00 */	li r20, 0x0
.L_8009BD30:
/* 8009BD30 00098E10  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 8009BD34 00098E14  54 60 10 3A */	slwi r0, r3, 2
/* 8009BD38 00098E18  7C 13 00 2E */	lwzx r0, r19, r0
/* 8009BD3C 00098E1C  28 00 00 00 */	cmplwi r0, 0x0
/* 8009BD40 00098E20  41 82 00 48 */	beq .L_8009BD88
/* 8009BD44 00098E24  4B FF FA 19 */	bl "get_meter_widget__Q24zhud18@unnamed@zHud_cpp@Fi"
/* 8009BD48 00098E28  7C 75 1B 78 */	mr r21, r3
/* 8009BD4C 00098E2C  48 00 02 99 */	bl changing__Q24xhud12meter_widgetCFv
/* 8009BD50 00098E30  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8009BD54 00098E34  40 82 00 34 */	bne .L_8009BD88
/* 8009BD58 00098E38  88 1E 00 00 */	lbz r0, 0x0(r30)
/* 8009BD5C 00098E3C  28 00 00 00 */	cmplwi r0, 0x0
/* 8009BD60 00098E40  40 82 00 28 */	bne .L_8009BD88
/* 8009BD64 00098E44  38 00 00 01 */	li r0, 0x1
/* 8009BD68 00098E48  7E A3 AB 78 */	mr r3, r21
/* 8009BD6C 00098E4C  98 1E 00 00 */	stb r0, 0x0(r30)
/* 8009BD70 00098E50  4B FF F9 91 */	bl "delay_hide_widget__Q24zhud18@unnamed@zHud_cpp@FRQ24xhud6widget"
/* 8009BD74 00098E54  80 7D 00 00 */	lwz r3, 0x0(r29)
/* 8009BD78 00098E58  2C 03 FF FF */	cmpwi r3, -0x1
/* 8009BD7C 00098E5C  41 82 00 0C */	beq .L_8009BD88
/* 8009BD80 00098E60  4B FF FA 35 */	bl "get_model_widget__Q24zhud18@unnamed@zHud_cpp@Fi"
/* 8009BD84 00098E64  4B FF F9 7D */	bl "delay_hide_widget__Q24zhud18@unnamed@zHud_cpp@FRQ24xhud6widget"
.L_8009BD88:
/* 8009BD88 00098E68  3A 94 00 01 */	addi r20, r20, 0x1
/* 8009BD8C 00098E6C  3B DE 00 01 */	addi r30, r30, 0x1
/* 8009BD90 00098E70  2C 14 00 05 */	cmpwi r20, 0x5
/* 8009BD94 00098E74  3B BD 00 04 */	addi r29, r29, 0x4
/* 8009BD98 00098E78  3B FF 00 04 */	addi r31, r31, 0x4
/* 8009BD9C 00098E7C  41 80 FF 94 */	blt .L_8009BD30
.L_8009BDA0:
/* 8009BDA0 00098E80  FC 20 F8 90 */	fmr f1, f31
/* 8009BDA4 00098E84  4B F9 1E 39 */	bl update__4xhudFf
/* 8009BDA8 00098E88  E3 E1 00 58 */	psq_l f31, 0x58(r1), 0, qr0
/* 8009BDAC 00098E8C  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8009BDB0 00098E90  BA 61 00 1C */	lmw r19, 0x1c(r1)
/* 8009BDB4 00098E94  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8009BDB8 00098E98  7C 08 03 A6 */	mtlr r0
/* 8009BDBC 00098E9C  38 21 00 60 */	addi r1, r1, 0x60
/* 8009BDC0 00098EA0  4E 80 00 20 */	blr
.endfn update__4zhudFf

# zhud::render()
.fn render__4zhudFv, global
/* 8009BDC4 00098EA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009BDC8 00098EA8  7C 08 02 A6 */	mflr r0
/* 8009BDCC 00098EAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009BDD0 00098EB0  4B F9 1E 2D */	bl render__4xhudFv
/* 8009BDD4 00098EB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009BDD8 00098EB8  7C 08 03 A6 */	mtlr r0
/* 8009BDDC 00098EBC  38 21 00 10 */	addi r1, r1, 0x10
/* 8009BDE0 00098EC0  4E 80 00 20 */	blr
.endfn render__4zhudFv

# zhud::show()
.fn show__4zhudFv, global
/* 8009BDE4 00098EC4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8009BDE8 00098EC8  7C 08 02 A6 */	mflr r0
/* 8009BDEC 00098ECC  3C 60 80 2E */	lis r3, "widgets__Q24zhud18@unnamed@zHud_cpp@"@ha
/* 8009BDF0 00098ED0  3C 80 80 03 */	lis r4, delay_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef@ha
/* 8009BDF4 00098ED4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8009BDF8 00098ED8  38 A3 57 60 */	addi r5, r3, "widgets__Q24zhud18@unnamed@zHud_cpp@"@l
/* 8009BDFC 00098EDC  3C 60 80 0A */	lis r3, "hide_widget__Q24zhud18@unnamed@zHud_cpp@FRQ24xhud6widgetRQ24xhud6motive"@ha
/* 8009BE00 00098EE0  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8009BE04 00098EE4  7C BD 2B 78 */	mr r29, r5
/* 8009BE08 00098EE8  3B C4 EB 84 */	addi r30, r4, delay_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef@l
/* 8009BE0C 00098EEC  3B 85 00 24 */	addi r28, r5, 0x24
/* 8009BE10 00098EF0  3B E3 B6 84 */	addi r31, r3, "hide_widget__Q24zhud18@unnamed@zHud_cpp@FRQ24xhud6widgetRQ24xhud6motive"@l
/* 8009BE14 00098EF4  48 00 00 3C */	b .L_8009BE50
.L_8009BE18:
/* 8009BE18 00098EF8  83 7D 00 00 */	lwz r27, 0x0(r29)
/* 8009BE1C 00098EFC  28 1B 00 00 */	cmplwi r27, 0x0
/* 8009BE20 00098F00  41 82 00 2C */	beq .L_8009BE4C
/* 8009BE24 00098F04  7F 63 DB 78 */	mr r3, r27
/* 8009BE28 00098F08  7F C4 F3 78 */	mr r4, r30
/* 8009BE2C 00098F0C  7F E5 FB 78 */	mr r5, r31
/* 8009BE30 00098F10  4B F9 28 61 */	bl clear_motives__Q24xhud6widgetFPFRQ24xhud6widgetRQ24xhud6motivef_bPv
/* 8009BE34 00098F14  7F 63 DB 78 */	mr r3, r27
/* 8009BE38 00098F18  48 00 01 7D */	bl showing__Q24xhud6widgetCFv
/* 8009BE3C 00098F1C  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8009BE40 00098F20  40 82 00 0C */	bne .L_8009BE4C
/* 8009BE44 00098F24  7F 63 DB 78 */	mr r3, r27
/* 8009BE48 00098F28  4B F9 21 8D */	bl show__Q24xhud6widgetFv
.L_8009BE4C:
/* 8009BE4C 00098F2C  3B BD 00 04 */	addi r29, r29, 0x4
.L_8009BE50:
/* 8009BE50 00098F30  7C 1D E0 40 */	cmplw r29, r28
/* 8009BE54 00098F34  41 80 FF C4 */	blt .L_8009BE18
/* 8009BE58 00098F38  38 6D 8F C0 */	addi r3, r13, "hiding__Q24zhud18@unnamed@zHud_cpp@"@sda21
/* 8009BE5C 00098F3C  38 AD 8F C0 */	addi r5, r13, "hiding__Q24zhud18@unnamed@zHud_cpp@"@sda21
/* 8009BE60 00098F40  38 63 00 05 */	addi r3, r3, 0x5
/* 8009BE64 00098F44  38 80 00 00 */	li r4, 0x0
/* 8009BE68 00098F48  7C 05 18 40 */	cmplw r5, r3
/* 8009BE6C 00098F4C  7C 65 18 50 */	subf r3, r5, r3
/* 8009BE70 00098F50  41 82 00 50 */	beq .L_8009BEC0
/* 8009BE74 00098F54  54 60 E8 FF */	srwi. r0, r3, 3
/* 8009BE78 00098F58  7C 09 03 A6 */	mtctr r0
/* 8009BE7C 00098F5C  41 82 00 34 */	beq .L_8009BEB0
.L_8009BE80:
/* 8009BE80 00098F60  98 85 00 00 */	stb r4, 0x0(r5)
/* 8009BE84 00098F64  98 85 00 01 */	stb r4, 0x1(r5)
/* 8009BE88 00098F68  98 85 00 02 */	stb r4, 0x2(r5)
/* 8009BE8C 00098F6C  98 85 00 03 */	stb r4, 0x3(r5)
/* 8009BE90 00098F70  98 85 00 04 */	stb r4, 0x4(r5)
/* 8009BE94 00098F74  98 85 00 05 */	stb r4, 0x5(r5)
/* 8009BE98 00098F78  98 85 00 06 */	stb r4, 0x6(r5)
/* 8009BE9C 00098F7C  98 85 00 07 */	stb r4, 0x7(r5)
/* 8009BEA0 00098F80  38 A5 00 08 */	addi r5, r5, 0x8
/* 8009BEA4 00098F84  42 00 FF DC */	bdnz .L_8009BE80
/* 8009BEA8 00098F88  70 63 00 07 */	andi. r3, r3, 0x7
/* 8009BEAC 00098F8C  41 82 00 14 */	beq .L_8009BEC0
.L_8009BEB0:
/* 8009BEB0 00098F90  7C 69 03 A6 */	mtctr r3
.L_8009BEB4:
/* 8009BEB4 00098F94  98 85 00 00 */	stb r4, 0x0(r5)
/* 8009BEB8 00098F98  38 A5 00 01 */	addi r5, r5, 0x1
/* 8009BEBC 00098F9C  42 00 FF F8 */	bdnz .L_8009BEB4
.L_8009BEC0:
/* 8009BEC0 00098FA0  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8009BEC4 00098FA4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8009BEC8 00098FA8  7C 08 03 A6 */	mtlr r0
/* 8009BECC 00098FAC  38 21 00 20 */	addi r1, r1, 0x20
/* 8009BED0 00098FB0  4E 80 00 20 */	blr
.endfn show__4zhudFv

# zhud::hide()
.fn hide__4zhudFv, global
/* 8009BED4 00098FB4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8009BED8 00098FB8  7C 08 02 A6 */	mflr r0
/* 8009BEDC 00098FBC  3C 60 80 2E */	lis r3, "widgets__Q24zhud18@unnamed@zHud_cpp@"@ha
/* 8009BEE0 00098FC0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8009BEE4 00098FC4  38 63 57 60 */	addi r3, r3, "widgets__Q24zhud18@unnamed@zHud_cpp@"@l
/* 8009BEE8 00098FC8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8009BEEC 00098FCC  7C 7F 1B 78 */	mr r31, r3
/* 8009BEF0 00098FD0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8009BEF4 00098FD4  3B C3 00 24 */	addi r30, r3, 0x24
/* 8009BEF8 00098FD8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8009BEFC 00098FDC  48 00 00 2C */	b .L_8009BF28
.L_8009BF00:
/* 8009BF00 00098FE0  83 BF 00 00 */	lwz r29, 0x0(r31)
/* 8009BF04 00098FE4  28 1D 00 00 */	cmplwi r29, 0x0
/* 8009BF08 00098FE8  41 82 00 1C */	beq .L_8009BF24
/* 8009BF0C 00098FEC  7F A3 EB 78 */	mr r3, r29
/* 8009BF10 00098FF0  48 00 00 B9 */	bl hiding__Q24xhud6widgetCFv
/* 8009BF14 00098FF4  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8009BF18 00098FF8  40 82 00 0C */	bne .L_8009BF24
/* 8009BF1C 00098FFC  7F A3 EB 78 */	mr r3, r29
/* 8009BF20 00099000  4B F9 22 49 */	bl hide__Q24xhud6widgetFv
.L_8009BF24:
/* 8009BF24 00099004  3B FF 00 04 */	addi r31, r31, 0x4
.L_8009BF28:
/* 8009BF28 00099008  7C 1F F0 40 */	cmplw r31, r30
/* 8009BF2C 0009900C  41 80 FF D4 */	blt .L_8009BF00
/* 8009BF30 00099010  38 6D 8F C0 */	addi r3, r13, "hiding__Q24zhud18@unnamed@zHud_cpp@"@sda21
/* 8009BF34 00099014  38 AD 8F C0 */	addi r5, r13, "hiding__Q24zhud18@unnamed@zHud_cpp@"@sda21
/* 8009BF38 00099018  38 63 00 05 */	addi r3, r3, 0x5
/* 8009BF3C 0009901C  38 80 00 01 */	li r4, 0x1
/* 8009BF40 00099020  7C 05 18 40 */	cmplw r5, r3
/* 8009BF44 00099024  7C 65 18 50 */	subf r3, r5, r3
/* 8009BF48 00099028  41 82 00 50 */	beq .L_8009BF98
/* 8009BF4C 0009902C  54 60 E8 FF */	srwi. r0, r3, 3
/* 8009BF50 00099030  7C 09 03 A6 */	mtctr r0
/* 8009BF54 00099034  41 82 00 34 */	beq .L_8009BF88
.L_8009BF58:
/* 8009BF58 00099038  98 85 00 00 */	stb r4, 0x0(r5)
/* 8009BF5C 0009903C  98 85 00 01 */	stb r4, 0x1(r5)
/* 8009BF60 00099040  98 85 00 02 */	stb r4, 0x2(r5)
/* 8009BF64 00099044  98 85 00 03 */	stb r4, 0x3(r5)
/* 8009BF68 00099048  98 85 00 04 */	stb r4, 0x4(r5)
/* 8009BF6C 0009904C  98 85 00 05 */	stb r4, 0x5(r5)
/* 8009BF70 00099050  98 85 00 06 */	stb r4, 0x6(r5)
/* 8009BF74 00099054  98 85 00 07 */	stb r4, 0x7(r5)
/* 8009BF78 00099058  38 A5 00 08 */	addi r5, r5, 0x8
/* 8009BF7C 0009905C  42 00 FF DC */	bdnz .L_8009BF58
/* 8009BF80 00099060  70 63 00 07 */	andi. r3, r3, 0x7
/* 8009BF84 00099064  41 82 00 14 */	beq .L_8009BF98
.L_8009BF88:
/* 8009BF88 00099068  7C 69 03 A6 */	mtctr r3
.L_8009BF8C:
/* 8009BF8C 0009906C  98 85 00 00 */	stb r4, 0x0(r5)
/* 8009BF90 00099070  38 A5 00 01 */	addi r5, r5, 0x1
/* 8009BF94 00099074  42 00 FF F8 */	bdnz .L_8009BF8C
.L_8009BF98:
/* 8009BF98 00099078  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8009BF9C 0009907C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8009BFA0 00099080  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8009BFA4 00099084  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8009BFA8 00099088  7C 08 03 A6 */	mtlr r0
/* 8009BFAC 0009908C  38 21 00 20 */	addi r1, r1, 0x20
/* 8009BFB0 00099090  4E 80 00 20 */	blr
.endfn hide__4zhudFv

# 0x8009BFB4 - 0x8009BFDC
.section .text, "ax", unique, 1
.balign 4

# xhud::widget::showing() const
.fn showing__Q24xhud6widgetCFv, weak
/* 8009BFB4 00099094  80 03 00 70 */	lwz r0, 0x70(r3)
/* 8009BFB8 00099098  20 00 00 01 */	subfic r0, r0, 0x1
/* 8009BFBC 0009909C  7C 00 00 34 */	cntlzw r0, r0
/* 8009BFC0 000990A0  54 03 D9 7E */	srwi r3, r0, 5
/* 8009BFC4 000990A4  4E 80 00 20 */	blr
.endfn showing__Q24xhud6widgetCFv

# xhud::widget::hiding() const
.fn hiding__Q24xhud6widgetCFv, weak
/* 8009BFC8 000990A8  80 03 00 70 */	lwz r0, 0x70(r3)
/* 8009BFCC 000990AC  20 00 00 02 */	subfic r0, r0, 0x2
/* 8009BFD0 000990B0  7C 00 00 34 */	cntlzw r0, r0
/* 8009BFD4 000990B4  54 03 D9 7E */	srwi r3, r0, 5
/* 8009BFD8 000990B8  4E 80 00 20 */	blr
.endfn hiding__Q24xhud6widgetCFv

# 0x8009BFDC - 0x8009BFE4
.section .text, "ax", unique, 2
.balign 4

# xhud::font_meter_widget::get_asset()
.fn get_asset__Q24xhud17font_meter_widgetFv, weak
/* 8009BFDC 000990BC  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 8009BFE0 000990C0  4E 80 00 20 */	blr
.endfn get_asset__Q24xhud17font_meter_widgetFv

# 0x8009BFE4 - 0x8009C000
.section .text, "ax", unique, 3
.balign 4

# xhud::meter_widget::changing() const
.fn changing__Q24xhud12meter_widgetCFv, weak
/* 8009BFE4 000990C4  C0 23 00 88 */	lfs f1, 0x88(r3)
/* 8009BFE8 000990C8  C0 03 00 94 */	lfs f0, 0x94(r3)
/* 8009BFEC 000990CC  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8009BFF0 000990D0  7C 00 00 26 */	mfcr r0
/* 8009BFF4 000990D4  54 00 1F FE */	extrwi r0, r0, 1, 2
/* 8009BFF8 000990D8  68 03 00 01 */	xori r3, r0, 0x1
/* 8009BFFC 000990DC  4E 80 00 20 */	blr
.endfn changing__Q24xhud12meter_widgetCFv

# 0x8025CB78 - 0x8025CD18
.rodata
.balign 8

# zhud::@unnamed@zHud_cpp@::meter_widget_index
.obj "meter_widget_index__Q24zhud18@unnamed@zHud_cpp@", local
	.4byte 0x00000004
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte 0x00000005
	.4byte 0x00000007
.endobj "meter_widget_index__Q24zhud18@unnamed@zHud_cpp@"

# zhud::@unnamed@zHud_cpp@::model_widget_index
.obj "model_widget_index__Q24zhud18@unnamed@zHud_cpp@", local
	.4byte 0xFFFFFFFF
	.4byte 0x00000002
	.4byte 0x00000003
	.4byte 0x00000006
	.4byte 0x00000008
.endobj "model_widget_index__Q24zhud18@unnamed@zHud_cpp@"

.obj "@stringBase0", local
	.4byte 0x4855445F
	.4byte 0x494E545F
	.4byte 0x4D455445
	.4byte 0x525F5348
	.4byte 0x494E5900
	.4byte 0x4855445F
	.4byte 0x494E545F
	.4byte 0x4D455445
	.4byte 0x525F5350
	.4byte 0x4154554C
	.4byte 0x41004855
	.4byte 0x445F4D4F
	.4byte 0x44454C5F
	.4byte 0x5348494E
	.4byte 0x59004855
	.4byte 0x445F4D4F
	.4byte 0x44454C5F
	.4byte 0x53504154
	.4byte 0x554C4100
	.4byte 0x4855445F
	.4byte 0x554E4954
	.4byte 0x5F4D4554
	.4byte 0x45525F48
	.4byte 0x45414C54
	.4byte 0x48004855
	.4byte 0x445F494E
	.4byte 0x545F4D45
	.4byte 0x5445525F
	.4byte 0x50415453
	.4byte 0x534F434B
	.4byte 0x00485544
	.4byte 0x5F4D4F44
	.4byte 0x454C5F50
	.4byte 0x41545353
	.4byte 0x4F434B00
	.4byte 0x4855445F
	.4byte 0x494E545F
	.4byte 0x4D455445
	.4byte 0x525F5350
	.4byte 0x45434941
	.4byte 0x4C004855
	.4byte 0x445F4D4F
	.4byte 0x44454C5F
.L_8025CC4C:
	.4byte 0x53504543
	.4byte 0x49414C00
	.4byte 0x4855445F
	.4byte 0x4D4F4445
	.4byte 0x4C5F4A46
	.4byte 0x5F414E54
	.4byte 0x49544F44
	.4byte 0x45004855
	.4byte 0x445F4D4F
	.4byte 0x44454C5F
	.4byte 0x42425F53
	.4byte 0x54454552
	.4byte 0x494E4757
	.4byte 0x4845454C
	.4byte 0x00485544
	.4byte 0x5F4D4F44
	.4byte 0x454C5F47
	.4byte 0x4C5F4241
	.4byte 0x4C4C4F4F
	.4byte 0x4E004855
	.4byte 0x445F4D4F
	.4byte 0x44454C5F
	.4byte 0x52425F41
	.4byte 0x52545049
	.4byte 0x45434553
	.4byte 0x00485544
	.4byte 0x5F4D4F44
	.4byte 0x454C5F42
	.4byte 0x435F5345
	.4byte 0x43555249
	.4byte 0x54594255
	.4byte 0x54544F4E
	.4byte 0x53004855
	.4byte 0x445F4D4F
	.4byte 0x44454C5F
	.4byte 0x4B465F4C
	.4byte 0x49474854
	.4byte 0x43525953
	.4byte 0x54414C53
	.4byte 0x00485544
	.4byte 0x5F4D4F44
	.4byte 0x454C5F47
	.4byte 0x595F4341
	.4byte 0x4E4E4F4E
	.4byte 0x53006875
	.4byte 0x64006875
	.4byte 0x643A6D65
	.4byte 0x74657200
	.4byte 0x6875643A
	.4byte 0x6D6F6465
	.2byte 0x6C00
.endobj "@stringBase0"
	.2byte 0x0000

# 0x8028FA20 - 0x8028FAC0
.data
.balign 8

# zhud::@unnamed@zHud_cpp@::widget_resources
.obj "widget_resources__Q24zhud18@unnamed@zHud_cpp@", local
	.4byte "@stringBase0"
	.4byte "@stringBase0"+0x14
	.4byte "@stringBase0"+0x2A
	.4byte "@stringBase0"+0x3A
	.4byte "@stringBase0"+0x4C
	.4byte "@stringBase0"+0x62
	.4byte "@stringBase0"+0x79
	.4byte "@stringBase0"+0x8C
	.4byte "@stringBase0"+0xA2
.endobj "widget_resources__Q24zhud18@unnamed@zHud_cpp@"

# zhud::@unnamed@zHud_cpp@::level_specials
.obj "level_specials__Q24zhud18@unnamed@zHud_cpp@", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "@stringBase0"+0xB4
	.4byte 0x00000001
	.4byte "@stringBase0"+0xCA
	.4byte 0x0000000B
	.4byte "@stringBase0"+0xE5
	.4byte 0x00000005
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "@stringBase0"+0xFA
	.4byte 0x00000006
	.4byte "@stringBase0"+0x111
	.4byte 0x00000004
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "@stringBase0"+0x12E
	.4byte 0x00000006
	.4byte "@stringBase0"+0x149
	.4byte 0x00000004
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "level_specials__Q24zhud18@unnamed@zHud_cpp@"
	.4byte 0x00000000

# 0x802E5710 - 0x802E5788
.section .bss, "wa", @nobits
.balign 8

# zhud::@unnamed@zHud_cpp@::value
.obj "value__Q24zhud18@unnamed@zHud_cpp@", local
.sym ...bss.0, local
	.skip 0x14
.endobj "value__Q24zhud18@unnamed@zHud_cpp@"

# zhud::@unnamed@zHud_cpp@::old_value
.obj "old_value__Q24zhud18@unnamed@zHud_cpp@", local
	.skip 0x14
.endobj "old_value__Q24zhud18@unnamed@zHud_cpp@"

# zhud::@unnamed@zHud_cpp@::max_value
.obj "max_value__Q24zhud18@unnamed@zHud_cpp@", local
	.skip 0x14
.endobj "max_value__Q24zhud18@unnamed@zHud_cpp@"

# zhud::@unnamed@zHud_cpp@::old_max_value
.obj "old_max_value__Q24zhud18@unnamed@zHud_cpp@", local
	.skip 0x14
.endobj "old_max_value__Q24zhud18@unnamed@zHud_cpp@"

# zhud::@unnamed@zHud_cpp@::widgets
.obj "widgets__Q24zhud18@unnamed@zHud_cpp@", local
	.skip 0x24
.endobj "widgets__Q24zhud18@unnamed@zHud_cpp@"
	.skip 0x4

# 0x803CAB70 - 0x803CAB78
.section .sdata, "wa"
.balign 8

# zhud::@unnamed@zHud_cpp@::last_paused
.obj "last_paused__Q24zhud18@unnamed@zHud_cpp@", local
	.byte 0x01
.endobj "last_paused__Q24zhud18@unnamed@zHud_cpp@"
	.4byte 0x00000000
	.byte 0x00, 0x00, 0x00

# 0x803CB8C0 - 0x803CB8D8
.section .sbss, "wa", @nobits
.balign 8

# zhud::@unnamed@zHud_cpp@::hiding
.obj "hiding__Q24zhud18@unnamed@zHud_cpp@", local
	.skip 0x5
.endobj "hiding__Q24zhud18@unnamed@zHud_cpp@"

# zhud::@unnamed@zHud_cpp@::inited
.obj "inited__Q24zhud18@unnamed@zHud_cpp@", local
	.skip 0x1
.endobj "inited__Q24zhud18@unnamed@zHud_cpp@"
	.skip 0x2

.obj meter_type$728, local
	.skip 0x4
.endobj meter_type$728

.obj init$729, local
	.skip 0x1
.endobj init$729
	.skip 0x3

.obj model_type$736, local
	.skip 0x4
.endobj model_type$736

.obj init$737, local
	.skip 0x1
.endobj init$737
	.skip 0x3

# 0x803CDAC0 - 0x803CDAE0
.section .sdata2, "a"
.balign 8

.obj "@707", local
	.4byte 0x3CA3D70A
.endobj "@707"

.obj "@708", local
	.4byte 0x00000000
.endobj "@708"

.obj "@709", local
	.4byte 0x3F000000
.endobj "@709"

.obj "@716", local
	.4byte 0x40800000
.endobj "@716"

.obj "@795", local
	.4byte 0x43300000
	.4byte 0x80000000
.endobj "@795"

.obj "@796", local
	.4byte 0x43300000
	.4byte 0x00000000
.endobj "@796"
