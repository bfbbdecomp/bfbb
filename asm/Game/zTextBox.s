.include "macros.inc"

.if 0

.section .text  # 0x80133E38 - 0x8013499C

render_bk_tex_scale__22_esc__2_unnamed_esc__2_zTextBox_cpp_esc__2_FRC8ztextbox:
/* 80133E7C 00130C7C  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80133E80 00130C80  7C 08 02 A6 */	mflr r0
/* 80133E84 00130C84  90 01 00 64 */	stw r0, 0x64(r1)
/* 80133E88 00130C88  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80133E8C 00130C8C  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 80133E90 00130C90  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 80133E94 00130C94  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 80133E98 00130C98  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80133E9C 00130C9C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80133EA0 00130CA0  7C 7E 1B 78 */	mr r30, r3
/* 80133EA4 00130CA4  80 63 00 14 */	lwz r3, 0x14(r3)
/* 80133EA8 00130CA8  38 63 00 5C */	addi r3, r3, 0x5c
/* 80133EAC 00130CAC  48 00 0A C1 */	bl convert__FRCQ38ztextbox10asset_type10color_type
/* 80133EB0 00130CB0  80 8D 9F 7C */	lwz r4, RwEngineInstance-_SDA_BASE_(r13)
/* 80133EB4 00130CB4  C0 22 A3 48 */	lfs f1, _720_1-_SDA2_BASE_(r2)
/* 80133EB8 00130CB8  80 84 00 00 */	lwz r4, 0(r4)
/* 80133EBC 00130CBC  90 61 00 18 */	stw r3, 0x18(r1)
/* 80133EC0 00130CC0  C0 04 00 80 */	lfs f0, 0x80(r4)
/* 80133EC4 00130CC4  EF E1 00 24 */	fdivs f31, f1, f0
/* 80133EC8 00130CC8  48 0F B8 FD */	bl RwIm2DGetNearScreenZ
/* 80133ECC 00130CCC  FF C0 08 90 */	fmr f30, f1
/* 80133ED0 00130CD0  80 7E 00 CC */	lwz r3, 0xcc(r30)
/* 80133ED4 00130CD4  4B EE D1 BD */	bl set_render_state__5xfontFP8RwRaster
/* 80133ED8 00130CD8  80 DE 00 2C */	lwz r6, 0x2c(r30)
/* 80133EDC 00130CDC  38 61 00 1C */	addi r3, r1, 0x1c
/* 80133EE0 00130CE0  80 BE 00 30 */	lwz r5, 0x30(r30)
/* 80133EE4 00130CE4  80 9E 00 34 */	lwz r4, 0x34(r30)
/* 80133EE8 00130CE8  80 1E 00 38 */	lwz r0, 0x38(r30)
/* 80133EEC 00130CEC  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 80133EF0 00130CF0  90 A1 00 20 */	stw r5, 0x20(r1)
/* 80133EF4 00130CF4  90 81 00 24 */	stw r4, 0x24(r1)
/* 80133EF8 00130CF8  90 01 00 28 */	stw r0, 0x28(r1)
/* 80133EFC 00130CFC  C0 22 A3 4C */	lfs f1, _721_1-_SDA2_BASE_(r2)
/* 80133F00 00130D00  C0 42 A3 50 */	lfs f2, _722_0-_SDA2_BASE_(r2)
/* 80133F04 00130D04  4B EF 20 F9 */	bl scale__13basic_rect_esc__0_f_esc__1_Fff
/* 80133F08 00130D08  80 01 00 18 */	lwz r0, 0x18(r1)
/* 80133F0C 00130D0C  3C 60 80 32 */	lis r3, vert_701@ha
/* 80133F10 00130D10  FC A0 F0 90 */	fmr f5, f30
/* 80133F14 00130D14  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 80133F18 00130D18  90 01 00 14 */	stw r0, 0x14(r1)
/* 80133F1C 00130D1C  FC C0 F8 90 */	fmr f6, f31
/* 80133F20 00130D20  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 80133F24 00130D24  38 63 42 58 */	addi r3, r3, vert_701@l
/* 80133F28 00130D28  C0 62 A3 54 */	lfs f3, _723_0-_SDA2_BASE_(r2)
/* 80133F2C 00130D2C  38 81 00 14 */	addi r4, r1, 0x14
/* 80133F30 00130D30  FC 80 18 90 */	fmr f4, f3
/* 80133F34 00130D34  48 00 01 31 */	bl set_vert__22_esc__2_unnamed_esc__2_zTextBox_cpp_esc__2_FR18rwGameCube2DVertexffff10iColor_tagff
/* 80133F38 00130D38  80 01 00 18 */	lwz r0, 0x18(r1)
/* 80133F3C 00130D3C  3C 60 80 32 */	lis r3, vert_701@ha
/* 80133F40 00130D40  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 80133F44 00130D44  38 63 42 58 */	addi r3, r3, vert_701@l
/* 80133F48 00130D48  90 01 00 10 */	stw r0, 0x10(r1)
/* 80133F4C 00130D4C  3B C3 00 18 */	addi r30, r3, 0x18
/* 80133F50 00130D50  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80133F54 00130D54  FC A0 F0 90 */	fmr f5, f30
/* 80133F58 00130D58  FC C0 F8 90 */	fmr f6, f31
/* 80133F5C 00130D5C  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 80133F60 00130D60  EC 42 00 2A */	fadds f2, f2, f0
/* 80133F64 00130D64  C0 62 A3 54 */	lfs f3, _723_0-_SDA2_BASE_(r2)
/* 80133F68 00130D68  C0 82 A3 48 */	lfs f4, _720_1-_SDA2_BASE_(r2)
/* 80133F6C 00130D6C  7F C3 F3 78 */	mr r3, r30
/* 80133F70 00130D70  38 81 00 10 */	addi r4, r1, 0x10
/* 80133F74 00130D74  48 00 00 F1 */	bl set_vert__22_esc__2_unnamed_esc__2_zTextBox_cpp_esc__2_FR18rwGameCube2DVertexffff10iColor_tagff
/* 80133F78 00130D78  80 01 00 18 */	lwz r0, 0x18(r1)
/* 80133F7C 00130D7C  3C 60 80 32 */	lis r3, vert_701@ha
/* 80133F80 00130D80  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 80133F84 00130D84  38 63 42 58 */	addi r3, r3, vert_701@l
/* 80133F88 00130D88  90 01 00 0C */	stw r0, 0xc(r1)
/* 80133F8C 00130D8C  3B E3 00 30 */	addi r31, r3, 0x30
/* 80133F90 00130D90  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80133F94 00130D94  FC A0 F0 90 */	fmr f5, f30
/* 80133F98 00130D98  FC C0 F8 90 */	fmr f6, f31
/* 80133F9C 00130D9C  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 80133FA0 00130DA0  EC 21 00 2A */	fadds f1, f1, f0
/* 80133FA4 00130DA4  C0 62 A3 48 */	lfs f3, _720_1-_SDA2_BASE_(r2)
/* 80133FA8 00130DA8  C0 82 A3 54 */	lfs f4, _723_0-_SDA2_BASE_(r2)
/* 80133FAC 00130DAC  7F E3 FB 78 */	mr r3, r31
/* 80133FB0 00130DB0  38 81 00 0C */	addi r4, r1, 0xc
/* 80133FB4 00130DB4  48 00 00 B1 */	bl set_vert__22_esc__2_unnamed_esc__2_zTextBox_cpp_esc__2_FR18rwGameCube2DVertexffff10iColor_tagff
/* 80133FB8 00130DB8  3C 60 80 32 */	lis r3, vert_701@ha
/* 80133FBC 00130DBC  7F E4 FB 78 */	mr r4, r31
/* 80133FC0 00130DC0  38 63 42 58 */	addi r3, r3, vert_701@l
/* 80133FC4 00130DC4  38 63 00 48 */	addi r3, r3, 0x48
/* 80133FC8 00130DC8  4B EE CC 01 */	bl __as__18rwGameCube2DVertexFRC18rwGameCube2DVertex
/* 80133FCC 00130DCC  3C 60 80 32 */	lis r3, vert_701@ha
/* 80133FD0 00130DD0  7F C4 F3 78 */	mr r4, r30
/* 80133FD4 00130DD4  38 63 42 58 */	addi r3, r3, vert_701@l
/* 80133FD8 00130DD8  38 63 00 60 */	addi r3, r3, 0x60
/* 80133FDC 00130DDC  4B EE CB ED */	bl __as__18rwGameCube2DVertexFRC18rwGameCube2DVertex
/* 80133FE0 00130DE0  80 01 00 18 */	lwz r0, 0x18(r1)
/* 80133FE4 00130DE4  3C 60 80 32 */	lis r3, vert_701@ha
/* 80133FE8 00130DE8  38 63 42 58 */	addi r3, r3, vert_701@l
/* 80133FEC 00130DEC  C0 E1 00 1C */	lfs f7, 0x1c(r1)
/* 80133FF0 00130DF0  90 01 00 08 */	stw r0, 8(r1)
/* 80133FF4 00130DF4  FC A0 F0 90 */	fmr f5, f30
/* 80133FF8 00130DF8  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80133FFC 00130DFC  FC C0 F8 90 */	fmr f6, f31
/* 80134000 00130E00  C0 62 A3 48 */	lfs f3, _720_1-_SDA2_BASE_(r2)
/* 80134004 00130E04  38 63 00 78 */	addi r3, r3, 0x78
/* 80134008 00130E08  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 8013400C 00130E0C  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80134010 00130E10  FC 80 18 90 */	fmr f4, f3
/* 80134014 00130E14  EC 27 08 2A */	fadds f1, f7, f1
/* 80134018 00130E18  38 81 00 08 */	addi r4, r1, 8
/* 8013401C 00130E1C  EC 42 00 2A */	fadds f2, f2, f0
/* 80134020 00130E20  48 00 00 45 */	bl set_vert__22_esc__2_unnamed_esc__2_zTextBox_cpp_esc__2_FR18rwGameCube2DVertexffff10iColor_tagff
/* 80134024 00130E24  3C 80 80 32 */	lis r4, vert_701@ha
/* 80134028 00130E28  38 60 00 03 */	li r3, 3
/* 8013402C 00130E2C  38 84 42 58 */	addi r4, r4, vert_701@l
/* 80134030 00130E30  38 A0 00 06 */	li r5, 6
/* 80134034 00130E34  48 0F B8 61 */	bl RwIm2DRenderPrimitive
/* 80134038 00130E38  4B EE D1 9D */	bl restore_render_state__5xfontFv
/* 8013403C 00130E3C  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 80134040 00130E40  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 80134044 00130E44  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 80134048 00130E48  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 8013404C 00130E4C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80134050 00130E50  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80134054 00130E54  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80134058 00130E58  7C 08 03 A6 */	mtlr r0
/* 8013405C 00130E5C  38 21 00 60 */	addi r1, r1, 0x60
/* 80134060 00130E60  4E 80 00 20 */	blr 

.endif

.section .sdata2
.global _720_1
_720_1:
	.incbin "baserom.dol", 0x2B8568, 0x4
.global _721_1
_721_1:
	.incbin "baserom.dol", 0x2B856C, 0x4
.global _722_0
_722_0:
	.incbin "baserom.dol", 0x2B8570, 0x4
.global _723_0
_723_0:
	.incbin "baserom.dol", 0x2B8574, 0x4
.global _761_1
_761_1:
	.incbin "baserom.dol", 0x2B8578, 0x8
