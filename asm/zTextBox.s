.include "macros.inc"
.file "zTextBox.cpp"

# 0x80133E38 - 0x8013496C
.text
.balign 4

# @unnamed@zTextBox_cpp@::render_bk_fill(const ztextbox&)
.fn "render_bk_fill__22@unnamed@zTextBox_cpp@FRC8ztextbox", local
/* 80133E38 00130F18  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80133E3C 00130F1C  7C 08 02 A6 */	mflr r0
/* 80133E40 00130F20  90 01 00 24 */	stw r0, 0x24(r1)
/* 80133E44 00130F24  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80133E48 00130F28  7C 7F 1B 78 */	mr r31, r3
/* 80133E4C 00130F2C  80 63 00 14 */	lwz r3, 0x14(r3)
/* 80133E50 00130F30  38 63 00 5C */	addi r3, r3, 0x5c
/* 80133E54 00130F34  48 00 0B 19 */	bl convert__FRCQ38ztextbox10asset_type10color_type
/* 80133E58 00130F38  90 61 00 08 */	stw r3, 0x8(r1)
/* 80133E5C 00130F3C  38 7F 00 2C */	addi r3, r31, 0x2c
/* 80133E60 00130F40  38 81 00 08 */	addi r4, r1, 0x8
/* 80133E64 00130F44  4B EF 1F 2D */	bl "render_fill_rect__FRC13basic_rect<f>10iColor_tag"
/* 80133E68 00130F48  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80133E6C 00130F4C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80133E70 00130F50  7C 08 03 A6 */	mtlr r0
/* 80133E74 00130F54  38 21 00 20 */	addi r1, r1, 0x20
/* 80133E78 00130F58  4E 80 00 20 */	blr
.endfn "render_bk_fill__22@unnamed@zTextBox_cpp@FRC8ztextbox"

# @unnamed@zTextBox_cpp@::render_bk_tex_scale(const ztextbox&)
.fn "render_bk_tex_scale__22@unnamed@zTextBox_cpp@FRC8ztextbox", local
/* 80133E7C 00130F5C  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80133E80 00130F60  7C 08 02 A6 */	mflr r0
/* 80133E84 00130F64  90 01 00 64 */	stw r0, 0x64(r1)
/* 80133E88 00130F68  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80133E8C 00130F6C  F3 E1 00 58 */	psq_st f31, 0x58(r1), 0, qr0
/* 80133E90 00130F70  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 80133E94 00130F74  F3 C1 00 48 */	psq_st f30, 0x48(r1), 0, qr0
/* 80133E98 00130F78  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80133E9C 00130F7C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80133EA0 00130F80  7C 7E 1B 78 */	mr r30, r3
/* 80133EA4 00130F84  80 63 00 14 */	lwz r3, 0x14(r3)
/* 80133EA8 00130F88  38 63 00 5C */	addi r3, r3, 0x5c
/* 80133EAC 00130F8C  48 00 0A C1 */	bl convert__FRCQ38ztextbox10asset_type10color_type
/* 80133EB0 00130F90  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 80133EB4 00130F94  C0 22 A3 48 */	lfs f1, "@720"@sda21(r2)
/* 80133EB8 00130F98  80 84 00 00 */	lwz r4, 0x0(r4)
/* 80133EBC 00130F9C  90 61 00 18 */	stw r3, 0x18(r1)
/* 80133EC0 00130FA0  C0 04 00 80 */	lfs f0, 0x80(r4)
/* 80133EC4 00130FA4  EF E1 00 24 */	fdivs f31, f1, f0
/* 80133EC8 00130FA8  48 0F B8 FD */	bl RwIm2DGetNearScreenZ
/* 80133ECC 00130FAC  FF C0 08 90 */	fmr f30, f1
/* 80133ED0 00130FB0  80 7E 00 CC */	lwz r3, 0xcc(r30)
/* 80133ED4 00130FB4  4B EE D1 BD */	bl set_render_state__5xfontFP8RwRaster
/* 80133ED8 00130FB8  80 DE 00 2C */	lwz r6, 0x2c(r30)
/* 80133EDC 00130FBC  38 61 00 1C */	addi r3, r1, 0x1c
/* 80133EE0 00130FC0  80 BE 00 30 */	lwz r5, 0x30(r30)
/* 80133EE4 00130FC4  80 9E 00 34 */	lwz r4, 0x34(r30)
/* 80133EE8 00130FC8  80 1E 00 38 */	lwz r0, 0x38(r30)
/* 80133EEC 00130FCC  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 80133EF0 00130FD0  90 A1 00 20 */	stw r5, 0x20(r1)
/* 80133EF4 00130FD4  90 81 00 24 */	stw r4, 0x24(r1)
/* 80133EF8 00130FD8  90 01 00 28 */	stw r0, 0x28(r1)
/* 80133EFC 00130FDC  C0 22 A3 4C */	lfs f1, "@721"@sda21(r2)
/* 80133F00 00130FE0  C0 42 A3 50 */	lfs f2, "@722"@sda21(r2)
/* 80133F04 00130FE4  4B EF 20 F9 */	bl "scale__13basic_rect<f>Fff"
/* 80133F08 00130FE8  80 01 00 18 */	lwz r0, 0x18(r1)
/* 80133F0C 00130FEC  3C 60 80 32 */	lis r3, vert$701@ha
/* 80133F10 00130FF0  FC A0 F0 90 */	fmr f5, f30
/* 80133F14 00130FF4  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 80133F18 00130FF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80133F1C 00130FFC  FC C0 F8 90 */	fmr f6, f31
/* 80133F20 00131000  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 80133F24 00131004  38 63 42 58 */	addi r3, r3, vert$701@l
/* 80133F28 00131008  C0 62 A3 54 */	lfs f3, "@723"@sda21(r2)
/* 80133F2C 0013100C  38 81 00 14 */	addi r4, r1, 0x14
/* 80133F30 00131010  FC 80 18 90 */	fmr f4, f3
/* 80133F34 00131014  48 00 01 31 */	bl "set_vert__22@unnamed@zTextBox_cpp@FR18rwGameCube2DVertexffff10iColor_tagff"
/* 80133F38 00131018  80 01 00 18 */	lwz r0, 0x18(r1)
/* 80133F3C 0013101C  3C 60 80 32 */	lis r3, vert$701@ha
/* 80133F40 00131020  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 80133F44 00131024  38 63 42 58 */	addi r3, r3, vert$701@l
/* 80133F48 00131028  90 01 00 10 */	stw r0, 0x10(r1)
/* 80133F4C 0013102C  3B C3 00 18 */	addi r30, r3, 0x18
/* 80133F50 00131030  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80133F54 00131034  FC A0 F0 90 */	fmr f5, f30
/* 80133F58 00131038  FC C0 F8 90 */	fmr f6, f31
/* 80133F5C 0013103C  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 80133F60 00131040  EC 42 00 2A */	fadds f2, f2, f0
/* 80133F64 00131044  C0 62 A3 54 */	lfs f3, "@723"@sda21(r2)
/* 80133F68 00131048  C0 82 A3 48 */	lfs f4, "@720"@sda21(r2)
/* 80133F6C 0013104C  7F C3 F3 78 */	mr r3, r30
/* 80133F70 00131050  38 81 00 10 */	addi r4, r1, 0x10
/* 80133F74 00131054  48 00 00 F1 */	bl "set_vert__22@unnamed@zTextBox_cpp@FR18rwGameCube2DVertexffff10iColor_tagff"
/* 80133F78 00131058  80 01 00 18 */	lwz r0, 0x18(r1)
/* 80133F7C 0013105C  3C 60 80 32 */	lis r3, vert$701@ha
/* 80133F80 00131060  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 80133F84 00131064  38 63 42 58 */	addi r3, r3, vert$701@l
/* 80133F88 00131068  90 01 00 0C */	stw r0, 0xc(r1)
/* 80133F8C 0013106C  3B E3 00 30 */	addi r31, r3, 0x30
/* 80133F90 00131070  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80133F94 00131074  FC A0 F0 90 */	fmr f5, f30
/* 80133F98 00131078  FC C0 F8 90 */	fmr f6, f31
/* 80133F9C 0013107C  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 80133FA0 00131080  EC 21 00 2A */	fadds f1, f1, f0
/* 80133FA4 00131084  C0 62 A3 48 */	lfs f3, "@720"@sda21(r2)
/* 80133FA8 00131088  C0 82 A3 54 */	lfs f4, "@723"@sda21(r2)
/* 80133FAC 0013108C  7F E3 FB 78 */	mr r3, r31
/* 80133FB0 00131090  38 81 00 0C */	addi r4, r1, 0xc
/* 80133FB4 00131094  48 00 00 B1 */	bl "set_vert__22@unnamed@zTextBox_cpp@FR18rwGameCube2DVertexffff10iColor_tagff"
/* 80133FB8 00131098  3C 60 80 32 */	lis r3, vert$701@ha
/* 80133FBC 0013109C  7F E4 FB 78 */	mr r4, r31
/* 80133FC0 001310A0  38 63 42 58 */	addi r3, r3, vert$701@l
/* 80133FC4 001310A4  38 63 00 48 */	addi r3, r3, 0x48
/* 80133FC8 001310A8  4B EE CC 01 */	bl __as__18rwGameCube2DVertexFRC18rwGameCube2DVertex
/* 80133FCC 001310AC  3C 60 80 32 */	lis r3, vert$701@ha
/* 80133FD0 001310B0  7F C4 F3 78 */	mr r4, r30
/* 80133FD4 001310B4  38 63 42 58 */	addi r3, r3, vert$701@l
/* 80133FD8 001310B8  38 63 00 60 */	addi r3, r3, 0x60
/* 80133FDC 001310BC  4B EE CB ED */	bl __as__18rwGameCube2DVertexFRC18rwGameCube2DVertex
/* 80133FE0 001310C0  80 01 00 18 */	lwz r0, 0x18(r1)
/* 80133FE4 001310C4  3C 60 80 32 */	lis r3, vert$701@ha
/* 80133FE8 001310C8  38 63 42 58 */	addi r3, r3, vert$701@l
/* 80133FEC 001310CC  C0 E1 00 1C */	lfs f7, 0x1c(r1)
/* 80133FF0 001310D0  90 01 00 08 */	stw r0, 0x8(r1)
/* 80133FF4 001310D4  FC A0 F0 90 */	fmr f5, f30
/* 80133FF8 001310D8  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80133FFC 001310DC  FC C0 F8 90 */	fmr f6, f31
/* 80134000 001310E0  C0 62 A3 48 */	lfs f3, "@720"@sda21(r2)
/* 80134004 001310E4  38 63 00 78 */	addi r3, r3, 0x78
/* 80134008 001310E8  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 8013400C 001310EC  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80134010 001310F0  FC 80 18 90 */	fmr f4, f3
/* 80134014 001310F4  EC 27 08 2A */	fadds f1, f7, f1
/* 80134018 001310F8  38 81 00 08 */	addi r4, r1, 0x8
/* 8013401C 001310FC  EC 42 00 2A */	fadds f2, f2, f0
/* 80134020 00131100  48 00 00 45 */	bl "set_vert__22@unnamed@zTextBox_cpp@FR18rwGameCube2DVertexffff10iColor_tagff"
/* 80134024 00131104  3C 80 80 32 */	lis r4, vert$701@ha
/* 80134028 00131108  38 60 00 03 */	li r3, 0x3
/* 8013402C 0013110C  38 84 42 58 */	addi r4, r4, vert$701@l
/* 80134030 00131110  38 A0 00 06 */	li r5, 0x6
/* 80134034 00131114  48 0F B8 61 */	bl RwIm2DRenderPrimitive
/* 80134038 00131118  4B EE D1 9D */	bl restore_render_state__5xfontFv
/* 8013403C 0013111C  E3 E1 00 58 */	psq_l f31, 0x58(r1), 0, qr0
/* 80134040 00131120  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 80134044 00131124  E3 C1 00 48 */	psq_l f30, 0x48(r1), 0, qr0
/* 80134048 00131128  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 8013404C 0013112C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80134050 00131130  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80134054 00131134  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80134058 00131138  7C 08 03 A6 */	mtlr r0
/* 8013405C 0013113C  38 21 00 60 */	addi r1, r1, 0x60
/* 80134060 00131140  4E 80 00 20 */	blr
.endfn "render_bk_tex_scale__22@unnamed@zTextBox_cpp@FRC8ztextbox"

# @unnamed@zTextBox_cpp@::set_vert(rwGameCube2DVertex&, float, float, float, float, iColor_tag, float, float)
.fn "set_vert__22@unnamed@zTextBox_cpp@FR18rwGameCube2DVertexffff10iColor_tagff", local
/* 80134064 00131144  D0 23 00 00 */	stfs f1, 0x0(r3)
/* 80134068 00131148  D0 43 00 04 */	stfs f2, 0x4(r3)
/* 8013406C 0013114C  D0 A3 00 08 */	stfs f5, 0x8(r3)
/* 80134070 00131150  D0 63 00 10 */	stfs f3, 0x10(r3)
/* 80134074 00131154  D0 83 00 14 */	stfs f4, 0x14(r3)
/* 80134078 00131158  88 04 00 00 */	lbz r0, 0x0(r4)
/* 8013407C 0013115C  98 03 00 0C */	stb r0, 0xc(r3)
/* 80134080 00131160  88 04 00 01 */	lbz r0, 0x1(r4)
/* 80134084 00131164  98 03 00 0D */	stb r0, 0xd(r3)
/* 80134088 00131168  88 04 00 02 */	lbz r0, 0x2(r4)
/* 8013408C 0013116C  98 03 00 0E */	stb r0, 0xe(r3)
/* 80134090 00131170  88 04 00 03 */	lbz r0, 0x3(r4)
/* 80134094 00131174  98 03 00 0F */	stb r0, 0xf(r3)
/* 80134098 00131178  4E 80 00 20 */	blr
.endfn "set_vert__22@unnamed@zTextBox_cpp@FR18rwGameCube2DVertexffff10iColor_tagff"

# @unnamed@zTextBox_cpp@::render_bk_tex_wrap(const ztextbox&)
.fn "render_bk_tex_wrap__22@unnamed@zTextBox_cpp@FRC8ztextbox", local
/* 8013409C 0013117C  4E 80 00 20 */	blr
.endfn "render_bk_tex_wrap__22@unnamed@zTextBox_cpp@FRC8ztextbox"

# @unnamed@zTextBox_cpp@::init_textbox(ztextbox&)
.fn "init_textbox__22@unnamed@zTextBox_cpp@FR8ztextbox", local
/* 801340A0 00131180  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801340A4 00131184  7C 08 02 A6 */	mflr r0
/* 801340A8 00131188  90 01 00 34 */	stw r0, 0x34(r1)
/* 801340AC 0013118C  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 801340B0 00131190  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 801340B4 00131194  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801340B8 00131198  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801340BC 0013119C  7C 7E 1B 78 */	mr r30, r3
/* 801340C0 001311A0  38 00 00 00 */	li r0, 0x0
/* 801340C4 001311A4  83 E3 00 14 */	lwz r31, 0x14(r3)
/* 801340C8 001311A8  90 03 00 4C */	stw r0, 0x4c(r3)
/* 801340CC 001311AC  38 7F 00 38 */	addi r3, r31, 0x38
/* 801340D0 001311B0  80 1F 00 24 */	lwz r0, 0x24(r31)
/* 801340D4 001311B4  90 1E 00 18 */	stw r0, 0x18(r30)
/* 801340D8 001311B8  C0 1F 00 28 */	lfs f0, 0x28(r31)
/* 801340DC 001311BC  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 801340E0 001311C0  C0 1F 00 2C */	lfs f0, 0x2c(r31)
/* 801340E4 001311C4  D0 1E 00 20 */	stfs f0, 0x20(r30)
/* 801340E8 001311C8  C0 1F 00 30 */	lfs f0, 0x30(r31)
/* 801340EC 001311CC  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 801340F0 001311D0  C0 1F 00 34 */	lfs f0, 0x34(r31)
/* 801340F4 001311D4  D0 1E 00 50 */	stfs f0, 0x50(r30)
/* 801340F8 001311D8  48 00 08 75 */	bl convert__FRCQ38ztextbox10asset_type10color_type
/* 801340FC 001311DC  90 61 00 08 */	stw r3, 0x8(r1)
/* 80134100 001311E0  38 7E 00 28 */	addi r3, r30, 0x28
/* 80134104 001311E4  38 81 00 08 */	addi r4, r1, 0x8
/* 80134108 001311E8  4B EE 3E 91 */	bl __as__10iColor_tagFRC10iColor_tag
/* 8013410C 001311EC  C0 3F 00 14 */	lfs f1, 0x14(r31)
/* 80134110 001311F0  C0 1F 00 3C */	lfs f0, 0x3c(r31)
/* 80134114 001311F4  EC 01 00 2A */	fadds f0, f1, f0
/* 80134118 001311F8  D0 1E 00 3C */	stfs f0, 0x3c(r30)
/* 8013411C 001311FC  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 80134120 00131200  C0 1F 00 40 */	lfs f0, 0x40(r31)
/* 80134124 00131204  EC 01 00 2A */	fadds f0, f1, f0
/* 80134128 00131208  D0 1E 00 40 */	stfs f0, 0x40(r30)
/* 8013412C 0013120C  C0 5F 00 1C */	lfs f2, 0x1c(r31)
/* 80134130 00131210  C0 3F 00 3C */	lfs f1, 0x3c(r31)
/* 80134134 00131214  C0 1F 00 44 */	lfs f0, 0x44(r31)
/* 80134138 00131218  EC 22 08 28 */	fsubs f1, f2, f1
/* 8013413C 0013121C  EC 01 00 28 */	fsubs f0, f1, f0
/* 80134140 00131220  D0 1E 00 44 */	stfs f0, 0x44(r30)
/* 80134144 00131224  C0 5F 00 20 */	lfs f2, 0x20(r31)
/* 80134148 00131228  C0 3F 00 40 */	lfs f1, 0x40(r31)
/* 8013414C 0013122C  C0 1F 00 48 */	lfs f0, 0x48(r31)
/* 80134150 00131230  EC 22 08 28 */	fsubs f1, f2, f1
/* 80134154 00131234  EC 01 00 28 */	fsubs f0, f1, f0
/* 80134158 00131238  D0 1E 00 48 */	stfs f0, 0x48(r30)
/* 8013415C 0013123C  80 1F 00 4C */	lwz r0, 0x4c(r31)
/* 80134160 00131240  2C 00 00 03 */	cmpwi r0, 0x3
/* 80134164 00131244  41 80 00 10 */	blt .L_80134174
/* 80134168 00131248  3C 60 80 27 */	lis r3, xjlookup$739@ha
/* 8013416C 0013124C  80 A3 CA 38 */	lwz r5, xjlookup$739@l(r3)
/* 80134170 00131250  48 00 00 14 */	b .L_80134184
.L_80134174:
/* 80134174 00131254  3C 60 80 27 */	lis r3, xjlookup$739@ha
/* 80134178 00131258  54 00 10 3A */	slwi r0, r0, 2
/* 8013417C 0013125C  38 63 CA 38 */	addi r3, r3, xjlookup$739@l
/* 80134180 00131260  7C A3 00 2E */	lwzx r5, r3, r0
.L_80134184:
/* 80134184 00131264  80 1E 00 4C */	lwz r0, 0x4c(r30)
/* 80134188 00131268  38 7E 00 18 */	addi r3, r30, 0x18
/* 8013418C 0013126C  38 9E 00 80 */	addi r4, r30, 0x80
/* 80134190 00131270  7C 00 2B 78 */	or r0, r0, r5
/* 80134194 00131274  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 80134198 00131278  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 8013419C 0013127C  4B EE E3 A5 */	bl set_text__8xtextboxFPPCcUl
/* 801341A0 00131280  80 1F 00 50 */	lwz r0, 0x50(r31)
/* 801341A4 00131284  2C 00 00 03 */	cmpwi r0, 0x3
/* 801341A8 00131288  40 80 00 8C */	bge .L_80134234
/* 801341AC 0013128C  C0 5F 00 54 */	lfs f2, 0x54(r31)
/* 801341B0 00131290  C0 1F 00 20 */	lfs f0, 0x20(r31)
/* 801341B4 00131294  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801341B8 00131298  40 81 00 7C */	ble .L_80134234
/* 801341BC 0013129C  C0 3F 00 40 */	lfs f1, 0x40(r31)
/* 801341C0 001312A0  38 7E 00 18 */	addi r3, r30, 0x18
/* 801341C4 001312A4  C0 1F 00 48 */	lfs f0, 0x48(r31)
/* 801341C8 001312A8  38 81 00 0C */	addi r4, r1, 0xc
/* 801341CC 001312AC  EC 22 08 28 */	fsubs f1, f2, f1
/* 801341D0 001312B0  C3 FE 00 48 */	lfs f31, 0x48(r30)
/* 801341D4 001312B4  38 A0 00 01 */	li r5, 0x1
/* 801341D8 001312B8  EC 21 00 28 */	fsubs f1, f1, f0
/* 801341DC 001312BC  D0 3E 00 48 */	stfs f1, 0x48(r30)
/* 801341E0 001312C0  4B F8 8F 6D */	bl yextent__8xtextboxCFfRib
/* 801341E4 001312C4  D0 3E 00 48 */	stfs f1, 0x48(r30)
/* 801341E8 001312C8  C0 1E 00 48 */	lfs f0, 0x48(r30)
/* 801341EC 001312CC  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 801341F0 001312D0  40 81 00 40 */	ble .L_80134230
/* 801341F4 001312D4  80 1F 00 50 */	lwz r0, 0x50(r31)
/* 801341F8 001312D8  EC 40 F8 28 */	fsubs f2, f0, f31
/* 801341FC 001312DC  2C 00 00 01 */	cmpwi r0, 0x1
/* 80134200 001312E0  40 82 00 18 */	bne .L_80134218
/* 80134204 001312E4  C0 22 A3 58 */	lfs f1, "@761"@sda21(r2)
/* 80134208 001312E8  C0 1E 00 40 */	lfs f0, 0x40(r30)
/* 8013420C 001312EC  EC 01 00 BC */	fnmsubs f0, f1, f2, f0
/* 80134210 001312F0  D0 1E 00 40 */	stfs f0, 0x40(r30)
/* 80134214 001312F4  48 00 00 20 */	b .L_80134234
.L_80134218:
/* 80134218 001312F8  2C 00 00 00 */	cmpwi r0, 0x0
/* 8013421C 001312FC  40 82 00 18 */	bne .L_80134234
/* 80134220 00131300  C0 1E 00 40 */	lfs f0, 0x40(r30)
/* 80134224 00131304  EC 00 10 28 */	fsubs f0, f0, f2
/* 80134228 00131308  D0 1E 00 40 */	stfs f0, 0x40(r30)
/* 8013422C 0013130C  48 00 00 08 */	b .L_80134234
.L_80134230:
/* 80134230 00131310  D3 FE 00 48 */	stfs f31, 0x48(r30)
.L_80134234:
/* 80134234 00131314  C0 3E 00 3C */	lfs f1, 0x3c(r30)
/* 80134238 00131318  C0 1F 00 3C */	lfs f0, 0x3c(r31)
/* 8013423C 0013131C  EC 01 00 28 */	fsubs f0, f1, f0
/* 80134240 00131320  D0 1E 00 2C */	stfs f0, 0x2c(r30)
/* 80134244 00131324  C0 3E 00 40 */	lfs f1, 0x40(r30)
/* 80134248 00131328  C0 1F 00 40 */	lfs f0, 0x40(r31)
/* 8013424C 0013132C  EC 01 00 28 */	fsubs f0, f1, f0
/* 80134250 00131330  D0 1E 00 30 */	stfs f0, 0x30(r30)
/* 80134254 00131334  C0 3E 00 44 */	lfs f1, 0x44(r30)
/* 80134258 00131338  C0 1F 00 3C */	lfs f0, 0x3c(r31)
/* 8013425C 0013133C  C0 5F 00 44 */	lfs f2, 0x44(r31)
/* 80134260 00131340  EC 01 00 2A */	fadds f0, f1, f0
/* 80134264 00131344  EC 02 00 2A */	fadds f0, f2, f0
/* 80134268 00131348  D0 1E 00 34 */	stfs f0, 0x34(r30)
/* 8013426C 0013134C  C0 3E 00 48 */	lfs f1, 0x48(r30)
/* 80134270 00131350  C0 1F 00 40 */	lfs f0, 0x40(r31)
/* 80134274 00131354  C0 5F 00 48 */	lfs f2, 0x48(r31)
/* 80134278 00131358  EC 01 00 2A */	fadds f0, f1, f0
/* 8013427C 0013135C  EC 02 00 2A */	fadds f0, f2, f0
/* 80134280 00131360  D0 1E 00 38 */	stfs f0, 0x38(r30)
/* 80134284 00131364  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80134288 00131368  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8013428C 0013136C  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80134290 00131370  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80134294 00131374  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80134298 00131378  7C 08 03 A6 */	mtlr r0
/* 8013429C 0013137C  38 21 00 30 */	addi r1, r1, 0x30
/* 801342A0 00131380  4E 80 00 20 */	blr
.endfn "init_textbox__22@unnamed@zTextBox_cpp@FR8ztextbox"

# @unnamed@zTextBox_cpp@::parse_tag_blahblah(xtextbox::jot&, const xtextbox&, const xtextbox&, const xtextbox::split_tag&)
.fn "parse_tag_blahblah__22@unnamed@zTextBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag", local
/* 801342A4 00131384  4E 80 00 20 */	blr
.endfn "parse_tag_blahblah__22@unnamed@zTextBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"

# @unnamed@zTextBox_cpp@::cb_dispatch(xBase*, xBase*, unsigned int, const float*, xBase*)
.fn "cb_dispatch__22@unnamed@zTextBox_cpp@FP5xBaseP5xBaseUiPCfP5xBase", local
/* 801342A8 00131388  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801342AC 0013138C  7C 08 02 A6 */	mflr r0
/* 801342B0 00131390  2C 05 00 4E */	cmpwi r5, 0x4e
/* 801342B4 00131394  90 01 00 14 */	stw r0, 0x14(r1)
/* 801342B8 00131398  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801342BC 0013139C  7C 9F 23 78 */	mr r31, r4
/* 801342C0 001313A0  41 82 00 88 */	beq .L_80134348
/* 801342C4 001313A4  40 80 00 34 */	bge .L_801342F8
/* 801342C8 001313A8  2C 05 00 0A */	cmpwi r5, 0xa
/* 801342CC 001313AC  41 82 00 5C */	beq .L_80134328
/* 801342D0 001313B0  40 80 00 1C */	bge .L_801342EC
/* 801342D4 001313B4  2C 05 00 04 */	cmpwi r5, 0x4
/* 801342D8 001313B8  41 82 00 AC */	beq .L_80134384
/* 801342DC 001313BC  40 80 00 EC */	bge .L_801343C8
/* 801342E0 001313C0  2C 05 00 03 */	cmpwi r5, 0x3
/* 801342E4 001313C4  40 80 00 78 */	bge .L_8013435C
/* 801342E8 001313C8  48 00 00 E0 */	b .L_801343C8
.L_801342EC:
/* 801342EC 001313CC  2C 05 00 4D */	cmpwi r5, 0x4d
/* 801342F0 001313D0  40 80 00 44 */	bge .L_80134334
/* 801342F4 001313D4  48 00 00 D4 */	b .L_801343C8
.L_801342F8:
/* 801342F8 001313D8  2C 05 01 4E */	cmpwi r5, 0x14e
/* 801342FC 001313DC  41 82 00 94 */	beq .L_80134390
/* 80134300 001313E0  40 80 00 10 */	bge .L_80134310
/* 80134304 001313E4  2C 05 00 58 */	cmpwi r5, 0x58
/* 80134308 001313E8  41 82 00 20 */	beq .L_80134328
/* 8013430C 001313EC  48 00 00 BC */	b .L_801343C8
.L_80134310:
/* 80134310 001313F0  2C 05 01 53 */	cmpwi r5, 0x153
/* 80134314 001313F4  41 82 00 AC */	beq .L_801343C0
/* 80134318 001313F8  40 80 00 B0 */	bge .L_801343C8
/* 8013431C 001313FC  2C 05 01 52 */	cmpwi r5, 0x152
/* 80134320 00131400  40 80 00 88 */	bge .L_801343A8
/* 80134324 00131404  48 00 00 A4 */	b .L_801343C8
.L_80134328:
/* 80134328 00131408  7F E3 FB 78 */	mr r3, r31
/* 8013432C 0013140C  48 00 01 69 */	bl reset__8ztextboxFv
/* 80134330 00131410  48 00 00 98 */	b .L_801343C8
.L_80134334:
/* 80134334 00131414  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 80134338 00131418  38 60 00 01 */	li r3, 0x1
/* 8013433C 0013141C  50 60 2E B4 */	rlwimi r0, r3, 5, 26, 26
/* 80134340 00131420  98 1F 00 10 */	stb r0, 0x10(r31)
/* 80134344 00131424  48 00 00 84 */	b .L_801343C8
.L_80134348:
/* 80134348 00131428  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 8013434C 0013142C  38 60 00 00 */	li r3, 0x0
/* 80134350 00131430  50 60 2E B4 */	rlwimi r0, r3, 5, 26, 26
/* 80134354 00131434  98 1F 00 10 */	stb r0, 0x10(r31)
/* 80134358 00131438  48 00 00 70 */	b .L_801343C8
.L_8013435C:
/* 8013435C 0013143C  28 06 00 00 */	cmplwi r6, 0x0
/* 80134360 00131440  41 82 00 18 */	beq .L_80134378
/* 80134364 00131444  80 86 00 00 */	lwz r4, 0x0(r6)
/* 80134368 00131448  28 04 00 00 */	cmplwi r4, 0x0
/* 8013436C 0013144C  41 82 00 0C */	beq .L_80134378
/* 80134370 00131450  7F E3 FB 78 */	mr r3, r31
/* 80134374 00131454  48 00 03 21 */	bl set_text__8ztextboxFUi
.L_80134378:
/* 80134378 00131458  7F E3 FB 78 */	mr r3, r31
/* 8013437C 0013145C  48 00 02 25 */	bl activate__8ztextboxFv
/* 80134380 00131460  48 00 00 48 */	b .L_801343C8
.L_80134384:
/* 80134384 00131464  7F E3 FB 78 */	mr r3, r31
/* 80134388 00131468  48 00 02 65 */	bl deactivate__8ztextboxFv
/* 8013438C 0013146C  48 00 00 3C */	b .L_801343C8
.L_80134390:
/* 80134390 00131470  28 06 00 00 */	cmplwi r6, 0x0
/* 80134394 00131474  41 82 00 34 */	beq .L_801343C8
/* 80134398 00131478  80 86 00 00 */	lwz r4, 0x0(r6)
/* 8013439C 0013147C  7F E3 FB 78 */	mr r3, r31
/* 801343A0 00131480  48 00 02 F5 */	bl set_text__8ztextboxFUi
/* 801343A4 00131484  48 00 00 24 */	b .L_801343C8
.L_801343A8:
/* 801343A8 00131488  28 06 00 00 */	cmplwi r6, 0x0
/* 801343AC 0013148C  41 82 00 1C */	beq .L_801343C8
/* 801343B0 00131490  80 86 00 00 */	lwz r4, 0x0(r6)
/* 801343B4 00131494  7F E3 FB 78 */	mr r3, r31
/* 801343B8 00131498  48 00 03 71 */	bl add_text__8ztextboxFUi
/* 801343BC 0013149C  48 00 00 0C */	b .L_801343C8
.L_801343C0:
/* 801343C0 001314A0  7F E3 FB 78 */	mr r3, r31
/* 801343C4 001314A4  48 00 03 B5 */	bl clear_text__8ztextboxFv
.L_801343C8:
/* 801343C8 001314A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801343CC 001314AC  38 60 00 01 */	li r3, 0x1
/* 801343D0 001314B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801343D4 001314B4  7C 08 03 A6 */	mtlr r0
/* 801343D8 001314B8  38 21 00 10 */	addi r1, r1, 0x10
/* 801343DC 001314BC  4E 80 00 20 */	blr
.endfn "cb_dispatch__22@unnamed@zTextBox_cpp@FP5xBaseP5xBaseUiPCfP5xBase"

# ztextbox::load(const ztextbox::asset_type&)
.fn load__8ztextboxFRCQ28ztextbox10asset_type, global
/* 801343E0 001314C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801343E4 001314C4  7C 08 02 A6 */	mflr r0
/* 801343E8 001314C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801343EC 001314CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801343F0 001314D0  7C 9F 23 78 */	mr r31, r4
/* 801343F4 001314D4  93 C1 00 08 */	stw r30, 0x8(r1)
/* 801343F8 001314D8  7C 7E 1B 78 */	mr r30, r3
/* 801343FC 001314DC  4B ED 50 05 */	bl xBaseInit__FP5xBaseP10xBaseAsset
/* 80134400 001314E0  38 00 00 33 */	li r0, 0x33
/* 80134404 001314E4  3C 60 80 13 */	lis r3, "cb_dispatch__22@unnamed@zTextBox_cpp@FP5xBaseP5xBaseUiPCfP5xBase"@ha
/* 80134408 001314E8  98 1E 00 04 */	stb r0, 0x4(r30)
/* 8013440C 001314EC  38 03 42 A8 */	addi r0, r3, "cb_dispatch__22@unnamed@zTextBox_cpp@FP5xBaseP5xBaseUiPCfP5xBase"@l
/* 80134410 001314F0  93 FE 00 14 */	stw r31, 0x14(r30)
/* 80134414 001314F4  90 1E 00 0C */	stw r0, 0xc(r30)
/* 80134418 001314F8  88 1E 00 05 */	lbz r0, 0x5(r30)
/* 8013441C 001314FC  28 00 00 00 */	cmplwi r0, 0x0
/* 80134420 00131500  41 82 00 0C */	beq .L_8013442C
/* 80134424 00131504  38 1F 00 64 */	addi r0, r31, 0x64
/* 80134428 00131508  90 1E 00 08 */	stw r0, 0x8(r30)
.L_8013442C:
/* 8013442C 0013150C  93 DE 00 64 */	stw r30, 0x64(r30)
/* 80134430 00131510  38 00 00 00 */	li r0, 0x0
/* 80134434 00131514  38 7E 00 10 */	addi r3, r30, 0x10
/* 80134438 00131518  38 80 00 00 */	li r4, 0x0
/* 8013443C 0013151C  90 1E 00 C8 */	stw r0, 0xc8(r30)
/* 80134440 00131520  38 A0 00 01 */	li r5, 0x1
/* 80134444 00131524  90 1E 00 C4 */	stw r0, 0xc4(r30)
/* 80134448 00131528  4B EC F0 11 */	bl memset
/* 8013444C 0013152C  80 7F 00 60 */	lwz r3, 0x60(r31)
/* 80134450 00131530  38 00 00 00 */	li r0, 0x0
/* 80134454 00131534  90 1E 00 CC */	stw r0, 0xcc(r30)
/* 80134458 00131538  28 03 00 00 */	cmplwi r3, 0x0
/* 8013445C 0013153C  41 82 00 14 */	beq .L_80134470
/* 80134460 00131540  38 80 00 00 */	li r4, 0x0
/* 80134464 00131544  4B F1 72 A9 */	bl xSTFindAsset__FUiPUi
/* 80134468 00131548  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8013446C 0013154C  90 1E 00 CC */	stw r0, 0xcc(r30)
.L_80134470:
/* 80134470 00131550  7F C3 F3 78 */	mr r3, r30
/* 80134474 00131554  48 00 00 21 */	bl reset__8ztextboxFv
/* 80134478 00131558  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013447C 0013155C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80134480 00131560  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80134484 00131564  7C 08 03 A6 */	mtlr r0
/* 80134488 00131568  38 21 00 10 */	addi r1, r1, 0x10
/* 8013448C 0013156C  4E 80 00 20 */	blr
.endfn load__8ztextboxFRCQ28ztextbox10asset_type

# ztextbox::update(xScene&, float)
.fn update__8ztextboxFR6xScenef, global
/* 80134490 00131570  4E 80 00 20 */	blr
.endfn update__8ztextboxFR6xScenef

# ztextbox::reset()
.fn reset__8ztextboxFv, global
/* 80134494 00131574  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80134498 00131578  7C 08 02 A6 */	mflr r0
/* 8013449C 0013157C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801344A0 00131580  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801344A4 00131584  7C 7F 1B 78 */	mr r31, r3
/* 801344A8 00131588  48 00 01 45 */	bl deactivate__8ztextboxFv
/* 801344AC 0013158C  38 00 00 00 */	li r0, 0x0
/* 801344B0 00131590  38 80 00 01 */	li r4, 0x1
/* 801344B4 00131594  90 1F 00 C0 */	stw r0, 0xc0(r31)
/* 801344B8 00131598  7F E3 FB 78 */	mr r3, r31
/* 801344BC 0013159C  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 801344C0 001315A0  50 80 36 72 */	rlwimi r0, r4, 6, 25, 25
/* 801344C4 001315A4  98 1F 00 10 */	stb r0, 0x10(r31)
/* 801344C8 001315A8  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 801344CC 001315AC  50 80 2E B4 */	rlwimi r0, r4, 5, 26, 26
/* 801344D0 001315B0  98 1F 00 10 */	stb r0, 0x10(r31)
/* 801344D4 001315B4  80 9F 00 14 */	lwz r4, 0x14(r31)
/* 801344D8 001315B8  80 84 00 10 */	lwz r4, 0x10(r4)
/* 801344DC 001315BC  48 00 01 B9 */	bl set_text__8ztextboxFUi
/* 801344E0 001315C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801344E4 001315C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801344E8 001315C8  7C 08 03 A6 */	mtlr r0
/* 801344EC 001315CC  38 21 00 10 */	addi r1, r1, 0x10
/* 801344F0 001315D0  4E 80 00 20 */	blr
.endfn reset__8ztextboxFv

# ztextbox::render()
.fn render__8ztextboxFv, global
/* 801344F4 001315D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801344F8 001315D8  7C 08 02 A6 */	mflr r0
/* 801344FC 001315DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80134500 001315E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80134504 001315E4  7C 7F 1B 78 */	mr r31, r3
/* 80134508 001315E8  88 03 00 10 */	lbz r0, 0x10(r3)
/* 8013450C 001315EC  54 00 D7 FF */	extrwi. r0, r0, 1, 25
/* 80134510 001315F0  41 82 00 18 */	beq .L_80134528
/* 80134514 001315F4  4B FF FB 8D */	bl "init_textbox__22@unnamed@zTextBox_cpp@FR8ztextbox"
/* 80134518 001315F8  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 8013451C 001315FC  38 60 00 00 */	li r3, 0x0
/* 80134520 00131600  50 60 36 72 */	rlwimi r0, r3, 6, 25, 25
/* 80134524 00131604  98 1F 00 10 */	stb r0, 0x10(r31)
.L_80134528:
/* 80134528 00131608  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 8013452C 0013160C  54 00 DF FF */	extrwi. r0, r0, 1, 26
/* 80134530 00131610  41 82 00 0C */	beq .L_8013453C
/* 80134534 00131614  7F E3 FB 78 */	mr r3, r31
/* 80134538 00131618  48 00 00 25 */	bl render_backdrop__8ztextboxFv
.L_8013453C:
/* 8013453C 0013161C  38 7F 00 18 */	addi r3, r31, 0x18
/* 80134540 00131620  38 80 00 01 */	li r4, 0x1
/* 80134544 00131624  4B EE 38 61 */	bl render__8xtextboxCFb
/* 80134548 00131628  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013454C 0013162C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80134550 00131630  7C 08 03 A6 */	mtlr r0
/* 80134554 00131634  38 21 00 10 */	addi r1, r1, 0x10
/* 80134558 00131638  4E 80 00 20 */	blr
.endfn render__8ztextboxFv

# ztextbox::render_backdrop()
.fn render_backdrop__8ztextboxFv, global
/* 8013455C 0013163C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80134560 00131640  7C 08 02 A6 */	mflr r0
/* 80134564 00131644  90 01 00 14 */	stw r0, 0x14(r1)
/* 80134568 00131648  80 83 00 14 */	lwz r4, 0x14(r3)
/* 8013456C 0013164C  80 04 00 58 */	lwz r0, 0x58(r4)
/* 80134570 00131650  28 00 00 03 */	cmplwi r0, 0x3
/* 80134574 00131654  40 80 00 1C */	bge .L_80134590
/* 80134578 00131658  3C 80 80 2A */	lis r4, "render_bk_table__22@unnamed@zTextBox_cpp@"@ha
/* 8013457C 0013165C  54 00 10 3A */	slwi r0, r0, 2
/* 80134580 00131660  38 84 8F 80 */	addi r4, r4, "render_bk_table__22@unnamed@zTextBox_cpp@"@l
/* 80134584 00131664  7D 84 00 2E */	lwzx r12, r4, r0
/* 80134588 00131668  7D 89 03 A6 */	mtctr r12
/* 8013458C 0013166C  4E 80 04 21 */	bctrl
.L_80134590:
/* 80134590 00131670  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80134594 00131674  7C 08 03 A6 */	mtlr r0
/* 80134598 00131678  38 21 00 10 */	addi r1, r1, 0x10
/* 8013459C 0013167C  4E 80 00 20 */	blr
.endfn render_backdrop__8ztextboxFv

# ztextbox::activate()
.fn activate__8ztextboxFv, global
/* 801345A0 00131680  88 83 00 10 */	lbz r4, 0x10(r3)
/* 801345A4 00131684  54 80 CF FF */	extrwi. r0, r4, 1, 24
/* 801345A8 00131688  4C 82 00 20 */	bnelr
/* 801345AC 0013168C  38 A0 00 01 */	li r5, 0x1
/* 801345B0 00131690  38 00 00 00 */	li r0, 0x0
/* 801345B4 00131694  50 A4 3E 30 */	rlwimi r4, r5, 7, 24, 24
/* 801345B8 00131698  98 83 00 10 */	stb r4, 0x10(r3)
/* 801345BC 0013169C  88 83 00 10 */	lbz r4, 0x10(r3)
/* 801345C0 001316A0  50 A4 26 F6 */	rlwimi r4, r5, 4, 27, 27
/* 801345C4 001316A4  98 83 00 10 */	stb r4, 0x10(r3)
/* 801345C8 001316A8  90 03 00 C8 */	stw r0, 0xc8(r3)
/* 801345CC 001316AC  80 0D 96 18 */	lwz r0, "head_active__22@unnamed@zTextBox_cpp@"@sda21(r13)
/* 801345D0 001316B0  90 03 00 C4 */	stw r0, 0xc4(r3)
/* 801345D4 001316B4  80 8D 96 18 */	lwz r4, "head_active__22@unnamed@zTextBox_cpp@"@sda21(r13)
/* 801345D8 001316B8  28 04 00 00 */	cmplwi r4, 0x0
/* 801345DC 001316BC  41 82 00 08 */	beq .L_801345E4
/* 801345E0 001316C0  90 64 00 C8 */	stw r3, 0xc8(r4)
.L_801345E4:
/* 801345E4 001316C4  90 6D 96 18 */	stw r3, "head_active__22@unnamed@zTextBox_cpp@"@sda21(r13)
/* 801345E8 001316C8  4E 80 00 20 */	blr
.endfn activate__8ztextboxFv

# ztextbox::deactivate()
.fn deactivate__8ztextboxFv, global
/* 801345EC 001316CC  88 A3 00 10 */	lbz r5, 0x10(r3)
/* 801345F0 001316D0  54 A0 CF FF */	extrwi. r0, r5, 1, 24
/* 801345F4 001316D4  4D 82 00 20 */	beqlr
/* 801345F8 001316D8  38 80 00 00 */	li r4, 0x0
/* 801345FC 001316DC  50 85 3E 30 */	rlwimi r5, r4, 7, 24, 24
/* 80134600 001316E0  98 A3 00 10 */	stb r5, 0x10(r3)
/* 80134604 001316E4  88 03 00 10 */	lbz r0, 0x10(r3)
/* 80134608 001316E8  50 80 26 F6 */	rlwimi r0, r4, 4, 27, 27
/* 8013460C 001316EC  98 03 00 10 */	stb r0, 0x10(r3)
/* 80134610 001316F0  80 83 00 C8 */	lwz r4, 0xc8(r3)
/* 80134614 001316F4  28 04 00 00 */	cmplwi r4, 0x0
/* 80134618 001316F8  41 82 00 0C */	beq .L_80134624
/* 8013461C 001316FC  80 03 00 C4 */	lwz r0, 0xc4(r3)
/* 80134620 00131700  90 04 00 C4 */	stw r0, 0xc4(r4)
.L_80134624:
/* 80134624 00131704  80 83 00 C4 */	lwz r4, 0xc4(r3)
/* 80134628 00131708  28 04 00 00 */	cmplwi r4, 0x0
/* 8013462C 0013170C  41 82 00 0C */	beq .L_80134638
/* 80134630 00131710  80 03 00 C8 */	lwz r0, 0xc8(r3)
/* 80134634 00131714  90 04 00 C8 */	stw r0, 0xc8(r4)
.L_80134638:
/* 80134638 00131718  80 0D 96 18 */	lwz r0, "head_active__22@unnamed@zTextBox_cpp@"@sda21(r13)
/* 8013463C 0013171C  7C 00 18 40 */	cmplw r0, r3
/* 80134640 00131720  4C 82 00 20 */	bnelr
/* 80134644 00131724  80 03 00 C4 */	lwz r0, 0xc4(r3)
/* 80134648 00131728  90 0D 96 18 */	stw r0, "head_active__22@unnamed@zTextBox_cpp@"@sda21(r13)
/* 8013464C 0013172C  4E 80 00 20 */	blr
.endfn deactivate__8ztextboxFv

# ztextbox::set_text(const char*)
.fn set_text__8ztextboxFPCc, global
/* 80134650 00131730  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80134654 00131734  7C 08 02 A6 */	mflr r0
/* 80134658 00131738  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013465C 0013173C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80134660 00131740  7C 9F 23 78 */	mr r31, r4
/* 80134664 00131744  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80134668 00131748  7C 7E 1B 78 */	mr r30, r3
/* 8013466C 0013174C  48 00 01 0D */	bl clear_text__8ztextboxFv
/* 80134670 00131750  7F C3 F3 78 */	mr r3, r30
/* 80134674 00131754  7F E4 FB 78 */	mr r4, r31
/* 80134678 00131758  48 00 00 79 */	bl add_text__8ztextboxFPCc
/* 8013467C 0013175C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80134680 00131760  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80134684 00131764  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80134688 00131768  7C 08 03 A6 */	mtlr r0
/* 8013468C 0013176C  38 21 00 10 */	addi r1, r1, 0x10
/* 80134690 00131770  4E 80 00 20 */	blr
.endfn set_text__8ztextboxFPCc

# ztextbox::set_text(unsigned int)
.fn set_text__8ztextboxFUi, global
/* 80134694 00131774  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80134698 00131778  7C 08 02 A6 */	mflr r0
/* 8013469C 0013177C  28 04 00 00 */	cmplwi r4, 0x0
/* 801346A0 00131780  90 01 00 14 */	stw r0, 0x14(r1)
/* 801346A4 00131784  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801346A8 00131788  7C 7F 1B 78 */	mr r31, r3
/* 801346AC 0013178C  41 82 00 30 */	beq .L_801346DC
/* 801346B0 00131790  7C 83 23 78 */	mr r3, r4
/* 801346B4 00131794  38 80 00 00 */	li r4, 0x0
/* 801346B8 00131798  4B F1 70 55 */	bl xSTFindAsset__FUiPUi
/* 801346BC 0013179C  7C 64 1B 79 */	mr. r4, r3
/* 801346C0 001317A0  40 82 00 10 */	bne .L_801346D0
/* 801346C4 001317A4  7F E3 FB 78 */	mr r3, r31
/* 801346C8 001317A8  48 00 00 B1 */	bl clear_text__8ztextboxFv
/* 801346CC 001317AC  48 00 00 10 */	b .L_801346DC
.L_801346D0:
/* 801346D0 001317B0  7F E3 FB 78 */	mr r3, r31
/* 801346D4 001317B4  38 84 00 04 */	addi r4, r4, 0x4
/* 801346D8 001317B8  4B FF FF 79 */	bl set_text__8ztextboxFPCc
.L_801346DC:
/* 801346DC 001317BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801346E0 001317C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801346E4 001317C4  7C 08 03 A6 */	mtlr r0
/* 801346E8 001317C8  38 21 00 10 */	addi r1, r1, 0x10
/* 801346EC 001317CC  4E 80 00 20 */	blr
.endfn set_text__8ztextboxFUi

# ztextbox::add_text(const char*)
.fn add_text__8ztextboxFPCc, global
/* 801346F0 001317D0  28 04 00 00 */	cmplwi r4, 0x0
/* 801346F4 001317D4  4D 82 00 20 */	beqlr
/* 801346F8 001317D8  80 03 00 C0 */	lwz r0, 0xc0(r3)
/* 801346FC 001317DC  38 A0 00 01 */	li r5, 0x1
/* 80134700 001317E0  54 00 10 3A */	slwi r0, r0, 2
/* 80134704 001317E4  7C C3 02 14 */	add r6, r3, r0
/* 80134708 001317E8  90 86 00 80 */	stw r4, 0x80(r6)
/* 8013470C 001317EC  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 80134710 001317F0  38 04 00 01 */	addi r0, r4, 0x1
/* 80134714 001317F4  90 03 00 C0 */	stw r0, 0xc0(r3)
/* 80134718 001317F8  88 03 00 10 */	lbz r0, 0x10(r3)
/* 8013471C 001317FC  50 A0 36 72 */	rlwimi r0, r5, 6, 25, 25
/* 80134720 00131800  98 03 00 10 */	stb r0, 0x10(r3)
/* 80134724 00131804  4E 80 00 20 */	blr
.endfn add_text__8ztextboxFPCc

# ztextbox::add_text(unsigned int)
.fn add_text__8ztextboxFUi, global
/* 80134728 00131808  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013472C 0013180C  7C 08 02 A6 */	mflr r0
/* 80134730 00131810  28 04 00 00 */	cmplwi r4, 0x0
/* 80134734 00131814  90 01 00 14 */	stw r0, 0x14(r1)
/* 80134738 00131818  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013473C 0013181C  7C 7F 1B 78 */	mr r31, r3
/* 80134740 00131820  41 82 00 24 */	beq .L_80134764
/* 80134744 00131824  7C 83 23 78 */	mr r3, r4
/* 80134748 00131828  38 80 00 00 */	li r4, 0x0
/* 8013474C 0013182C  4B F1 6F C1 */	bl xSTFindAsset__FUiPUi
/* 80134750 00131830  7C 64 1B 79 */	mr. r4, r3
/* 80134754 00131834  41 82 00 10 */	beq .L_80134764
/* 80134758 00131838  7F E3 FB 78 */	mr r3, r31
/* 8013475C 0013183C  38 84 00 04 */	addi r4, r4, 0x4
/* 80134760 00131840  4B FF FF 91 */	bl add_text__8ztextboxFPCc
.L_80134764:
/* 80134764 00131844  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80134768 00131848  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013476C 0013184C  7C 08 03 A6 */	mtlr r0
/* 80134770 00131850  38 21 00 10 */	addi r1, r1, 0x10
/* 80134774 00131854  4E 80 00 20 */	blr
.endfn add_text__8ztextboxFUi

# ztextbox::clear_text()
.fn clear_text__8ztextboxFv, global
/* 80134778 00131858  38 00 00 00 */	li r0, 0x0
/* 8013477C 0013185C  38 80 00 01 */	li r4, 0x1
/* 80134780 00131860  90 03 00 C0 */	stw r0, 0xc0(r3)
/* 80134784 00131864  88 03 00 10 */	lbz r0, 0x10(r3)
/* 80134788 00131868  50 80 36 72 */	rlwimi r0, r4, 6, 25, 25
/* 8013478C 0013186C  98 03 00 10 */	stb r0, 0x10(r3)
/* 80134790 00131870  4E 80 00 20 */	blr
.endfn clear_text__8ztextboxFv

# ztextbox::refresh()
.fn refresh__8ztextboxFv, global
/* 80134794 00131874  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80134798 00131878  7C 08 02 A6 */	mflr r0
/* 8013479C 0013187C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801347A0 00131880  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801347A4 00131884  7C 7F 1B 78 */	mr r31, r3
/* 801347A8 00131888  88 03 00 10 */	lbz r0, 0x10(r3)
/* 801347AC 0013188C  54 00 D7 FF */	extrwi. r0, r0, 1, 25
/* 801347B0 00131890  41 82 00 18 */	beq .L_801347C8
/* 801347B4 00131894  4B FF F8 ED */	bl "init_textbox__22@unnamed@zTextBox_cpp@FR8ztextbox"
/* 801347B8 00131898  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 801347BC 0013189C  38 60 00 00 */	li r3, 0x0
/* 801347C0 001318A0  50 60 36 72 */	rlwimi r0, r3, 6, 25, 25
/* 801347C4 001318A4  98 1F 00 10 */	stb r0, 0x10(r31)
.L_801347C8:
/* 801347C8 001318A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801347CC 001318AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801347D0 001318B0  7C 08 03 A6 */	mtlr r0
/* 801347D4 001318B4  38 21 00 10 */	addi r1, r1, 0x10
/* 801347D8 001318B8  4E 80 00 20 */	blr
.endfn refresh__8ztextboxFv

# ztextbox::get_text(char*, unsigned long) const
.fn get_text__8ztextboxCFPcUl, global
/* 801347DC 001318BC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801347E0 001318C0  7C 08 02 A6 */	mflr r0
/* 801347E4 001318C4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801347E8 001318C8  BF 41 00 08 */	stmw r26, 0x8(r1)
/* 801347EC 001318CC  3B E3 00 80 */	addi r31, r3, 0x80
/* 801347F0 001318D0  7C 9A 23 78 */	mr r26, r4
/* 801347F4 001318D4  7C BB 2B 78 */	mr r27, r5
/* 801347F8 001318D8  80 03 00 C0 */	lwz r0, 0xc0(r3)
/* 801347FC 001318DC  54 00 10 3A */	slwi r0, r0, 2
/* 80134800 001318E0  7F DF 02 14 */	add r30, r31, r0
/* 80134804 001318E4  48 00 00 50 */	b .L_80134854
.L_80134808:
/* 80134808 001318E8  83 BF 00 00 */	lwz r29, 0x0(r31)
/* 8013480C 001318EC  7F A3 EB 78 */	mr r3, r29
/* 80134810 001318F0  48 0B 2F A9 */	bl strlen
/* 80134814 001318F4  7C 7C 1B 78 */	mr r28, r3
/* 80134818 001318F8  7C 1C D8 40 */	cmplw r28, r27
/* 8013481C 001318FC  41 80 00 20 */	blt .L_8013483C
/* 80134820 00131900  7F 43 D3 78 */	mr r3, r26
/* 80134824 00131904  7F A4 EB 78 */	mr r4, r29
/* 80134828 00131908  38 BB FF FF */	addi r5, r27, -0x1
/* 8013482C 0013190C  4B EC ED 15 */	bl memcpy
/* 80134830 00131910  7F 5B D2 14 */	add r26, r27, r26
/* 80134834 00131914  3B 5A FF FF */	addi r26, r26, -0x1
/* 80134838 00131918  48 00 00 24 */	b .L_8013485C
.L_8013483C:
/* 8013483C 0013191C  7F 43 D3 78 */	mr r3, r26
/* 80134840 00131920  7F A4 EB 78 */	mr r4, r29
/* 80134844 00131924  7F 85 E3 78 */	mr r5, r28
/* 80134848 00131928  4B EC EC F9 */	bl memcpy
/* 8013484C 0013192C  7F 5A E2 14 */	add r26, r26, r28
/* 80134850 00131930  3B FF 00 04 */	addi r31, r31, 0x4
.L_80134854:
/* 80134854 00131934  7C 1F F0 40 */	cmplw r31, r30
/* 80134858 00131938  40 82 FF B0 */	bne .L_80134808
.L_8013485C:
/* 8013485C 0013193C  38 00 00 00 */	li r0, 0x0
/* 80134860 00131940  98 1A 00 00 */	stb r0, 0x0(r26)
/* 80134864 00131944  BB 41 00 08 */	lmw r26, 0x8(r1)
/* 80134868 00131948  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013486C 0013194C  7C 08 03 A6 */	mtlr r0
/* 80134870 00131950  38 21 00 20 */	addi r1, r1, 0x20
/* 80134874 00131954  4E 80 00 20 */	blr
.endfn get_text__8ztextboxCFPcUl

# ztextbox::init()
.fn init__8ztextboxFv, global
/* 80134878 00131958  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013487C 0013195C  7C 08 02 A6 */	mflr r0
/* 80134880 00131960  3C 60 80 2A */	lis r3, "new_tags__22@unnamed@zTextBox_cpp@"@ha
/* 80134884 00131964  90 01 00 14 */	stw r0, 0x14(r1)
/* 80134888 00131968  38 63 8F 8C */	addi r3, r3, "new_tags__22@unnamed@zTextBox_cpp@"@l
/* 8013488C 0013196C  80 8D 84 78 */	lwz r4, "new_tags_size__22@unnamed@zTextBox_cpp@"@sda21(r13)
/* 80134890 00131970  4B EF 13 05 */	bl register_tags__8xtextboxFPCQ28xtextbox8tag_typeUl
/* 80134894 00131974  38 00 00 00 */	li r0, 0x0
/* 80134898 00131978  90 0D 96 18 */	stw r0, "head_active__22@unnamed@zTextBox_cpp@"@sda21(r13)
/* 8013489C 0013197C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801348A0 00131980  7C 08 03 A6 */	mtlr r0
/* 801348A4 00131984  38 21 00 10 */	addi r1, r1, 0x10
/* 801348A8 00131988  4E 80 00 20 */	blr
.endfn init__8ztextboxFv

# ztextbox::load(xBase&, xDynAsset&, unsigned long)
.fn load__8ztextboxFR5xBaseR9xDynAssetUl, global
/* 801348AC 0013198C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801348B0 00131990  7C 08 02 A6 */	mflr r0
/* 801348B4 00131994  90 01 00 14 */	stw r0, 0x14(r1)
/* 801348B8 00131998  4B FF FB 29 */	bl load__8ztextboxFRCQ28ztextbox10asset_type
/* 801348BC 0013199C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801348C0 001319A0  7C 08 03 A6 */	mtlr r0
/* 801348C4 001319A4  38 21 00 10 */	addi r1, r1, 0x10
/* 801348C8 001319A8  4E 80 00 20 */	blr
.endfn load__8ztextboxFR5xBaseR9xDynAssetUl

# ztextbox::update_all(xScene&, float)
.fn update_all__8ztextboxFR6xScenef, global
/* 801348CC 001319AC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801348D0 001319B0  7C 08 02 A6 */	mflr r0
/* 801348D4 001319B4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801348D8 001319B8  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 801348DC 001319BC  FF E0 08 90 */	fmr f31, f1
/* 801348E0 001319C0  93 E1 00 14 */	stw r31, 0x14(r1)
/* 801348E4 001319C4  93 C1 00 10 */	stw r30, 0x10(r1)
/* 801348E8 001319C8  7C 7E 1B 78 */	mr r30, r3
/* 801348EC 001319CC  83 ED 96 18 */	lwz r31, "head_active__22@unnamed@zTextBox_cpp@"@sda21(r13)
/* 801348F0 001319D0  48 00 00 18 */	b .L_80134908
.L_801348F4:
/* 801348F4 001319D4  FC 20 F8 90 */	fmr f1, f31
/* 801348F8 001319D8  7F E3 FB 78 */	mr r3, r31
/* 801348FC 001319DC  7F C4 F3 78 */	mr r4, r30
/* 80134900 001319E0  4B FF FB 91 */	bl update__8ztextboxFR6xScenef
/* 80134904 001319E4  83 FF 00 C4 */	lwz r31, 0xc4(r31)
.L_80134908:
/* 80134908 001319E8  28 1F 00 00 */	cmplwi r31, 0x0
/* 8013490C 001319EC  40 82 FF E8 */	bne .L_801348F4
/* 80134910 001319F0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80134914 001319F4  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80134918 001319F8  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8013491C 001319FC  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 80134920 00131A00  7C 08 03 A6 */	mtlr r0
/* 80134924 00131A04  38 21 00 20 */	addi r1, r1, 0x20
/* 80134928 00131A08  4E 80 00 20 */	blr
.endfn update_all__8ztextboxFR6xScenef

# ztextbox::render_all()
.fn render_all__8ztextboxFv, global
/* 8013492C 00131A0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80134930 00131A10  7C 08 02 A6 */	mflr r0
/* 80134934 00131A14  90 01 00 14 */	stw r0, 0x14(r1)
/* 80134938 00131A18  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013493C 00131A1C  83 ED 96 18 */	lwz r31, "head_active__22@unnamed@zTextBox_cpp@"@sda21(r13)
/* 80134940 00131A20  48 00 00 10 */	b .L_80134950
.L_80134944:
/* 80134944 00131A24  7F E3 FB 78 */	mr r3, r31
/* 80134948 00131A28  4B FF FB AD */	bl render__8ztextboxFv
/* 8013494C 00131A2C  83 FF 00 C4 */	lwz r31, 0xc4(r31)
.L_80134950:
/* 80134950 00131A30  28 1F 00 00 */	cmplwi r31, 0x0
/* 80134954 00131A34  40 82 FF F0 */	bne .L_80134944
/* 80134958 00131A38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013495C 00131A3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80134960 00131A40  7C 08 03 A6 */	mtlr r0
/* 80134964 00131A44  38 21 00 10 */	addi r1, r1, 0x10
/* 80134968 00131A48  4E 80 00 20 */	blr
.endfn render_all__8ztextboxFv

# 0x8013496C - 0x8013499C
.section .text, "ax", unique, 1
.balign 4

# convert(const ztextbox::asset_type::color_type&)
.fn convert__FRCQ38ztextbox10asset_type10color_type, weak
/* 8013496C 00131A4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80134970 00131A50  88 C3 00 00 */	lbz r6, 0x0(r3)
/* 80134974 00131A54  88 A3 00 01 */	lbz r5, 0x1(r3)
/* 80134978 00131A58  88 83 00 02 */	lbz r4, 0x2(r3)
/* 8013497C 00131A5C  88 03 00 03 */	lbz r0, 0x3(r3)
/* 80134980 00131A60  98 C1 00 08 */	stb r6, 0x8(r1)
/* 80134984 00131A64  98 A1 00 09 */	stb r5, 0x9(r1)
/* 80134988 00131A68  98 81 00 0A */	stb r4, 0xa(r1)
/* 8013498C 00131A6C  98 01 00 0B */	stb r0, 0xb(r1)
/* 80134990 00131A70  80 61 00 08 */	lwz r3, 0x8(r1)
/* 80134994 00131A74  38 21 00 10 */	addi r1, r1, 0x10
/* 80134998 00131A78  4E 80 00 20 */	blr
.endfn convert__FRCQ38ztextbox10asset_type10color_type

# 0x8026CA38 - 0x8026CA50
.rodata
.balign 8

.obj xjlookup$739, local
	.4byte 0x00000000
	.4byte 0x00000002
	.4byte 0x00000001
.endobj xjlookup$739

.obj "@stringBase0", local
	.4byte 0x626C6168
	.4byte 0x626C6168
	.byte 0x00
.endobj "@stringBase0"
	.byte 0x00, 0x00, 0x00

# 0x80298F80 - 0x80298FA0
.data
.balign 8

# @unnamed@zTextBox_cpp@::render_bk_table
.obj "render_bk_table__22@unnamed@zTextBox_cpp@", local
	.4byte "render_bk_fill__22@unnamed@zTextBox_cpp@FRC8ztextbox"
	.4byte "render_bk_tex_scale__22@unnamed@zTextBox_cpp@FRC8ztextbox"
	.4byte "render_bk_tex_wrap__22@unnamed@zTextBox_cpp@FRC8ztextbox"
.endobj "render_bk_table__22@unnamed@zTextBox_cpp@"

# @unnamed@zTextBox_cpp@::new_tags
.obj "new_tags__22@unnamed@zTextBox_cpp@", local
	.4byte "@stringBase0"
	.4byte 0x00000008
	.4byte "parse_tag_blahblah__22@unnamed@zTextBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "new_tags__22@unnamed@zTextBox_cpp@"

# 0x80324258 - 0x803242E8
.section .bss, "wa", @nobits
.balign 8

.obj vert$701, local
	.skip 0x90
.endobj vert$701

# 0x803CAD78 - 0x803CAD80
.section .sdata, "wa"
.balign 8

# @unnamed@zTextBox_cpp@::new_tags_size
.obj "new_tags_size__22@unnamed@zTextBox_cpp@", local
	.4byte 0x00000001
.endobj "new_tags_size__22@unnamed@zTextBox_cpp@"
	.4byte 0x00000000

# 0x803CBF18 - 0x803CBF20
.section .sbss, "wa", @nobits
.balign 8

# @unnamed@zTextBox_cpp@::head_active
.obj "head_active__22@unnamed@zTextBox_cpp@", local
	.skip 0x4
.endobj "head_active__22@unnamed@zTextBox_cpp@"
	.skip 0x4

# 0x803CECC8 - 0x803CECE0
.section .sdata2, "a"
.balign 8

.obj "@720", local
	.4byte 0x3F800000
.endobj "@720"

.obj "@721", local
	.4byte 0x44200000
.endobj "@721"

.obj "@722", local
	.4byte 0x43F00000
.endobj "@722"

.obj "@723", local
	.4byte 0x00000000
.endobj "@723"

.obj "@761", local
	.4byte 0x3F000000
.endobj "@761"
	.4byte 0x00000000
