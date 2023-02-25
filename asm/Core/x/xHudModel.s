.include "macros.inc"
.file "xHudModel.cpp"

# 0x8002FC88 - 0x8002FF70
.text
.balign 4

# XHUD_AnimTable_Idle()
.fn XHUD_AnimTable_Idle__Fv, global
/* 8002FC88 0002CD68  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002FC8C 0002CD6C  7C 08 02 A6 */	mflr r0
/* 8002FC90 0002CD70  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8002FC94 0002CD74  38 80 00 00 */	li r4, 0x0
/* 8002FC98 0002CD78  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002FC9C 0002CD7C  38 63 2F 68 */	addi r3, r3, "@stringBase0"@l
/* 8002FCA0 0002CD80  38 A0 00 00 */	li r5, 0x0
/* 8002FCA4 0002CD84  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8002FCA8 0002CD88  4B FD 6F C9 */	bl xAnimTableNew__FPCcPP10xAnimTableUi
/* 8002FCAC 0002CD8C  3C A0 80 00 */	lis r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8002FCB0 0002CD90  3C 80 80 25 */	lis r4, "@stringBase0"@ha
/* 8002FCB4 0002CD94  38 05 6C FC */	addi r0, r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8002FCB8 0002CD98  7C 7F 1B 78 */	mr r31, r3
/* 8002FCBC 0002CD9C  90 01 00 08 */	stw r0, 0x8(r1)
/* 8002FCC0 0002CDA0  38 00 00 00 */	li r0, 0x0
/* 8002FCC4 0002CDA4  38 84 2F 68 */	addi r4, r4, "@stringBase0"@l
/* 8002FCC8 0002CDA8  38 A0 00 10 */	li r5, 0x10
/* 8002FCCC 0002CDAC  90 01 00 0C */	stw r0, 0xc(r1)
/* 8002FCD0 0002CDB0  38 84 00 14 */	addi r4, r4, 0x14
/* 8002FCD4 0002CDB4  38 C0 00 01 */	li r6, 0x1
/* 8002FCD8 0002CDB8  38 E0 00 00 */	li r7, 0x0
/* 8002FCDC 0002CDBC  90 01 00 10 */	stw r0, 0x10(r1)
/* 8002FCE0 0002CDC0  39 00 00 00 */	li r8, 0x0
/* 8002FCE4 0002CDC4  39 20 00 00 */	li r9, 0x0
/* 8002FCE8 0002CDC8  39 40 00 00 */	li r10, 0x0
/* 8002FCEC 0002CDCC  C0 22 84 60 */	lfs f1, "@654"@sda21(r2)
/* 8002FCF0 0002CDD0  C0 42 84 64 */	lfs f2, "@655"@sda21(r2)
/* 8002FCF4 0002CDD4  4B FD 70 65 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8002FCF8 0002CDD8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002FCFC 0002CDDC  7F E3 FB 78 */	mr r3, r31
/* 8002FD00 0002CDE0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8002FD04 0002CDE4  7C 08 03 A6 */	mtlr r0
/* 8002FD08 0002CDE8  38 21 00 20 */	addi r1, r1, 0x20
/* 8002FD0C 0002CDEC  4E 80 00 20 */	blr
.endfn XHUD_AnimTable_Idle__Fv

# xhud::model_widget::load(xBase&, xDynAsset&, unsigned long)
.fn load__Q24xhud12model_widgetFR5xBaseR9xDynAssetUl, global
/* 8002FD10 0002CDF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002FD14 0002CDF4  7C 08 02 A6 */	mflr r0
/* 8002FD18 0002CDF8  38 A0 00 9C */	li r5, 0x9c
/* 8002FD1C 0002CDFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002FD20 0002CE00  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002FD24 0002CE04  7C 9F 23 78 */	mr r31, r4
/* 8002FD28 0002CE08  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8002FD2C 0002CE0C  7C 7E 1B 78 */	mr r30, r3
/* 8002FD30 0002CE10  4B FF E0 01 */	bl init_base__Q24xhud6widgetFR5xBaseRC10xBaseAssetUl
/* 8002FD34 0002CE14  38 9E 00 10 */	addi r4, r30, 0x10
/* 8002FD38 0002CE18  38 60 00 8C */	li r3, 0x8c
/* 8002FD3C 0002CE1C  4B FF F2 A5 */	bl __nw__FUlPv
/* 8002FD40 0002CE20  28 03 00 00 */	cmplwi r3, 0x0
/* 8002FD44 0002CE24  41 82 00 0C */	beq .L_8002FD50
/* 8002FD48 0002CE28  7F E4 FB 78 */	mr r4, r31
/* 8002FD4C 0002CE2C  48 00 00 1D */	bl __ct__Q24xhud12model_widgetFRCQ24xhud11model_asset
.L_8002FD50:
/* 8002FD50 0002CE30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002FD54 0002CE34  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002FD58 0002CE38  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8002FD5C 0002CE3C  7C 08 03 A6 */	mtlr r0
/* 8002FD60 0002CE40  38 21 00 10 */	addi r1, r1, 0x10
/* 8002FD64 0002CE44  4E 80 00 20 */	blr
.endfn load__Q24xhud12model_widgetFR5xBaseR9xDynAssetUl

# xhud::model_widget::model_widget(const xhud::model_asset&)
.fn __ct__Q24xhud12model_widgetFRCQ24xhud11model_asset, global
/* 8002FD68 0002CE48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002FD6C 0002CE4C  7C 08 02 A6 */	mflr r0
/* 8002FD70 0002CE50  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002FD74 0002CE54  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002FD78 0002CE58  7C 9F 23 78 */	mr r31, r4
/* 8002FD7C 0002CE5C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8002FD80 0002CE60  7C 7E 1B 78 */	mr r30, r3
/* 8002FD84 0002CE64  4B FF DE A5 */	bl __ct__Q24xhud6widgetFRCQ24xhud5asset
/* 8002FD88 0002CE68  3C 80 80 28 */	lis r4, __vt__Q24xhud12model_widget@ha
/* 8002FD8C 0002CE6C  80 7F 00 28 */	lwz r3, 0x28(r31)
/* 8002FD90 0002CE70  38 84 D6 A0 */	addi r4, r4, __vt__Q24xhud12model_widget@l
/* 8002FD94 0002CE74  38 00 00 00 */	li r0, 0x0
/* 8002FD98 0002CE78  90 9E 00 74 */	stw r4, 0x74(r30)
/* 8002FD9C 0002CE7C  90 7E 00 84 */	stw r3, 0x84(r30)
/* 8002FDA0 0002CE80  90 1E 00 88 */	stw r0, 0x88(r30)
/* 8002FDA4 0002CE84  80 7E 00 84 */	lwz r3, 0x84(r30)
/* 8002FDA8 0002CE88  4B FF E9 B5 */	bl load_model__4xhudFUi
/* 8002FDAC 0002CE8C  90 7E 00 88 */	stw r3, 0x88(r30)
/* 8002FDB0 0002CE90  7F C3 F3 78 */	mr r3, r30
/* 8002FDB4 0002CE94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002FDB8 0002CE98  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002FDBC 0002CE9C  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8002FDC0 0002CEA0  7C 08 03 A6 */	mtlr r0
/* 8002FDC4 0002CEA4  38 21 00 10 */	addi r1, r1, 0x10
/* 8002FDC8 0002CEA8  4E 80 00 20 */	blr
.endfn __ct__Q24xhud12model_widgetFRCQ24xhud11model_asset

# xhud::model_widget::destruct()
.fn destruct__Q24xhud12model_widgetFv, global
/* 8002FDCC 0002CEAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002FDD0 0002CEB0  7C 08 02 A6 */	mflr r0
/* 8002FDD4 0002CEB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002FDD8 0002CEB8  4B FF DF BD */	bl destruct__Q24xhud6widgetFv
/* 8002FDDC 0002CEBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002FDE0 0002CEC0  7C 08 03 A6 */	mtlr r0
/* 8002FDE4 0002CEC4  38 21 00 10 */	addi r1, r1, 0x10
/* 8002FDE8 0002CEC8  4E 80 00 20 */	blr
.endfn destruct__Q24xhud12model_widgetFv

# xhud::model_widget::destroy()
.fn destroy__Q24xhud12model_widgetFv, global
/* 8002FDEC 0002CECC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002FDF0 0002CED0  7C 08 02 A6 */	mflr r0
/* 8002FDF4 0002CED4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002FDF8 0002CED8  4B FF FF D5 */	bl destruct__Q24xhud12model_widgetFv
/* 8002FDFC 0002CEDC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002FE00 0002CEE0  7C 08 03 A6 */	mtlr r0
/* 8002FE04 0002CEE4  38 21 00 10 */	addi r1, r1, 0x10
/* 8002FE08 0002CEE8  4E 80 00 20 */	blr
.endfn destroy__Q24xhud12model_widgetFv

# xhud::model_widget::type() const
.fn type__Q24xhud12model_widgetCFv, global
/* 8002FE0C 0002CEEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002FE10 0002CEF0  7C 08 02 A6 */	mflr r0
/* 8002FE14 0002CEF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002FE18 0002CEF8  88 0D 89 BC */	lbz r0, init$687@sda21(r13)
/* 8002FE1C 0002CEFC  7C 00 07 75 */	extsb. r0, r0
/* 8002FE20 0002CF00  40 82 00 18 */	bne .L_8002FE38
/* 8002FE24 0002CF04  48 00 01 4D */	bl type_name__Q24xhud11model_assetFv
/* 8002FE28 0002CF08  48 01 C3 ED */	bl xStrHash__FPCc
/* 8002FE2C 0002CF0C  90 6D 89 B8 */	stw r3, myid$686@sda21(r13)
/* 8002FE30 0002CF10  38 00 00 01 */	li r0, 0x1
/* 8002FE34 0002CF14  98 0D 89 BC */	stb r0, init$687@sda21(r13)
.L_8002FE38:
/* 8002FE38 0002CF18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002FE3C 0002CF1C  80 6D 89 B8 */	lwz r3, myid$686@sda21(r13)
/* 8002FE40 0002CF20  7C 08 03 A6 */	mtlr r0
/* 8002FE44 0002CF24  38 21 00 10 */	addi r1, r1, 0x10
/* 8002FE48 0002CF28  4E 80 00 20 */	blr
.endfn type__Q24xhud12model_widgetCFv

# xhud::model_widget::is(unsigned int) const
.fn is__Q24xhud12model_widgetCFUi, global
/* 8002FE4C 0002CF2C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002FE50 0002CF30  7C 08 02 A6 */	mflr r0
/* 8002FE54 0002CF34  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002FE58 0002CF38  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8002FE5C 0002CF3C  3B E0 00 00 */	li r31, 0x0
/* 8002FE60 0002CF40  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8002FE64 0002CF44  7C 9E 23 78 */	mr r30, r4
/* 8002FE68 0002CF48  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8002FE6C 0002CF4C  7C 7D 1B 78 */	mr r29, r3
/* 8002FE70 0002CF50  4B FF FF 9D */	bl type__Q24xhud12model_widgetCFv
/* 8002FE74 0002CF54  7C 1E 18 40 */	cmplw r30, r3
/* 8002FE78 0002CF58  41 82 00 18 */	beq .L_8002FE90
/* 8002FE7C 0002CF5C  7F A3 EB 78 */	mr r3, r29
/* 8002FE80 0002CF60  7F C4 F3 78 */	mr r4, r30
/* 8002FE84 0002CF64  4B FF E1 19 */	bl is__Q24xhud6widgetCFUi
/* 8002FE88 0002CF68  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8002FE8C 0002CF6C  41 82 00 08 */	beq .L_8002FE94
.L_8002FE90:
/* 8002FE90 0002CF70  3B E0 00 01 */	li r31, 0x1
.L_8002FE94:
/* 8002FE94 0002CF74  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002FE98 0002CF78  7F E3 FB 78 */	mr r3, r31
/* 8002FE9C 0002CF7C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8002FEA0 0002CF80  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8002FEA4 0002CF84  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8002FEA8 0002CF88  7C 08 03 A6 */	mtlr r0
/* 8002FEAC 0002CF8C  38 21 00 20 */	addi r1, r1, 0x20
/* 8002FEB0 0002CF90  4E 80 00 20 */	blr
.endfn is__Q24xhud12model_widgetCFUi

# xhud::model_widget::update(float)
.fn update__Q24xhud12model_widgetFf, global
/* 8002FEB4 0002CF94  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002FEB8 0002CF98  7C 08 02 A6 */	mflr r0
/* 8002FEBC 0002CF9C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8002FEC0 0002CFA0  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8002FEC4 0002CFA4  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8002FEC8 0002CFA8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8002FECC 0002CFAC  7C 7F 1B 78 */	mr r31, r3
/* 8002FED0 0002CFB0  FF E0 08 90 */	fmr f31, f1
/* 8002FED4 0002CFB4  4B FF DF 09 */	bl updater__Q24xhud6widgetFf
/* 8002FED8 0002CFB8  7F E3 FB 78 */	mr r3, r31
/* 8002FEDC 0002CFBC  4B FF EF E5 */	bl visible__Q24xhud6widgetCFv
/* 8002FEE0 0002CFC0  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8002FEE4 0002CFC4  41 82 00 30 */	beq .L_8002FF14
/* 8002FEE8 0002CFC8  C0 3F 00 34 */	lfs f1, 0x34(r31)
/* 8002FEEC 0002CFCC  C0 02 84 68 */	lfs f0, "@705"@sda21(r2)
/* 8002FEF0 0002CFD0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8002FEF4 0002CFD4  4C 40 13 82 */	cror eq, lt, eq
/* 8002FEF8 0002CFD8  40 82 00 08 */	bne .L_8002FF00
/* 8002FEFC 0002CFDC  48 00 00 18 */	b .L_8002FF14
.L_8002FF00:
/* 8002FF00 0002CFE0  FC 20 F8 90 */	fmr f1, f31
/* 8002FF04 0002CFE4  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8002FF08 0002CFE8  48 00 45 C5 */	bl xModelUpdate__FP14xModelInstancef
/* 8002FF0C 0002CFEC  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 8002FF10 0002CFF0  48 00 47 A1 */	bl xModelEval__FP14xModelInstance
.L_8002FF14:
/* 8002FF14 0002CFF4  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8002FF18 0002CFF8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002FF1C 0002CFFC  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8002FF20 0002D000  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8002FF24 0002D004  7C 08 03 A6 */	mtlr r0
/* 8002FF28 0002D008  38 21 00 20 */	addi r1, r1, 0x20
/* 8002FF2C 0002D00C  4E 80 00 20 */	blr
.endfn update__Q24xhud12model_widgetFf

# xhud::model_widget::render()
.fn render__Q24xhud12model_widgetFv, global
/* 8002FF30 0002D010  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002FF34 0002D014  7C 08 02 A6 */	mflr r0
/* 8002FF38 0002D018  7C 64 1B 78 */	mr r4, r3
/* 8002FF3C 0002D01C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8002FF40 0002D020  C0 02 84 64 */	lfs f0, "@655"@sda21(r2)
/* 8002FF44 0002D024  C0 23 00 34 */	lfs f1, 0x34(r3)
/* 8002FF48 0002D028  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8002FF4C 0002D02C  4C 40 13 82 */	cror eq, lt, eq
/* 8002FF50 0002D030  41 82 00 10 */	beq .L_8002FF60
/* 8002FF54 0002D034  80 64 00 88 */	lwz r3, 0x88(r4)
/* 8002FF58 0002D038  38 84 00 04 */	addi r4, r4, 0x4
/* 8002FF5C 0002D03C  4B FF E9 1D */	bl render_model__4xhudFR14xModelInstanceRCQ24xhud14render_context
.L_8002FF60:
/* 8002FF60 0002D040  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002FF64 0002D044  7C 08 03 A6 */	mtlr r0
/* 8002FF68 0002D048  38 21 00 10 */	addi r1, r1, 0x10
/* 8002FF6C 0002D04C  4E 80 00 20 */	blr
.endfn render__Q24xhud12model_widgetFv

# 0x8002FF70 - 0x8002FF80
.section .text, "ax", unique, 1
.balign 4

# xhud::model_asset::type_name()
.fn type_name__Q24xhud11model_assetFv, weak
/* 8002FF70 0002D050  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8002FF74 0002D054  38 63 2F 68 */	addi r3, r3, "@stringBase0"@l
/* 8002FF78 0002D058  38 63 00 1B */	addi r3, r3, 0x1b
/* 8002FF7C 0002D05C  4E 80 00 20 */	blr
.endfn type_name__Q24xhud11model_assetFv

# 0x80252F68 - 0x80252F90
.rodata
.balign 8

.obj "@stringBase0", local
	.4byte 0x58485544
	.4byte 0x5F416E69
	.4byte 0x6D546162
	.4byte 0x6C655F49
	.4byte 0x646C6500
	.4byte 0x49646C65
	.4byte 0x30310068
	.4byte 0x75643A6D
	.4byte 0x6F64656C
	.byte 0x00
.endobj "@stringBase0"
	.byte 0x00, 0x00, 0x00

# 0x8027D6A0 - 0x8027D6C8
.data
.balign 8

# xhud::model_widget::__vtable
.obj __vt__Q24xhud12model_widget, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte destroy__Q24xhud12model_widgetFv
	.4byte type__Q24xhud12model_widgetCFv
	.4byte is__Q24xhud12model_widgetCFUi
	.4byte init__Q24xhud6widgetFv
	.4byte setup__Q24xhud6widgetFv
	.4byte update__Q24xhud12model_widgetFf
	.4byte render__Q24xhud12model_widgetFv
	.4byte dispatch__Q24xhud6widgetFP5xBaseUiPCfP5xBase
.endobj __vt__Q24xhud12model_widget

# 0x803CB2B8 - 0x803CB2C0
.section .sbss, "wa", @nobits
.balign 8

.obj myid$686, local
	.skip 0x4
.endobj myid$686

.obj init$687, local
	.skip 0x1
.endobj init$687
	.skip 0x3

# 0x803CCDE0 - 0x803CCDF0
.section .sdata2, "a"
.balign 8

.obj "@654", local
	.4byte 0x3F800000
.endobj "@654"

.obj "@655", local
	.4byte 0x00000000
.endobj "@655"

.obj "@705", local
	.4byte 0x3B008081
.endobj "@705"
	.4byte 0x00000000
