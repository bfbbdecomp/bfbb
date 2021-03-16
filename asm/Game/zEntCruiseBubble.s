.include "macros.inc"

.if 0

.section .text  # 0x8005720C - 0x800609B4

/* play_sound__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fif */
play_sound__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fif:
/* 80057320 00054120  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80057324 00054124  7C 08 02 A6 */	mflr r0
/* 80057328 00054128  1C 83 00 28 */	mulli r4, r3, 0x28
/* 8005732C 0005412C  3C 60 80 29 */	lis r3, sounds@ha
/* 80057330 00054130  90 01 00 14 */	stw r0, 0x14(r1)
/* 80057334 00054134  38 03 C4 30 */	addi r0, r3, sounds@l
/* 80057338 00054138  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005733C 0005413C  7F E0 22 14 */	add r31, r0, r4
/* 80057340 00054140  93 C1 00 08 */	stw r30, 8(r1)
/* 80057344 00054144  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 80057348 00054148  28 03 00 00 */	cmplwi r3, 0
/* 8005734C 0005414C  40 82 00 64 */	bne lbl_800573B0
/* 80057350 00054150  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 80057354 00054154  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 80057358 00054158  7C 83 00 50 */	subf r4, r3, r0
/* 8005735C 0005415C  3B C4 00 01 */	addi r30, r4, 1
/* 80057360 00054160  2C 1E 00 01 */	cmpwi r30, 1
/* 80057364 00054164  41 81 00 08 */	bgt lbl_8005736C
/* 80057368 00054168  48 00 00 20 */	b lbl_80057388
lbl_8005736C:
/* 8005736C 0005416C  4B FD 98 FD */	bl xrand__Fv
/* 80057370 00054170  54 64 9B 7E */	srwi r4, r3, 0xd
/* 80057374 00054174  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 80057378 00054178  7C 64 F3 96 */	divwu r3, r4, r30
/* 8005737C 0005417C  7C 63 F1 D6 */	mullw r3, r3, r30
/* 80057380 00054180  7C 63 20 50 */	subf r3, r3, r4
/* 80057384 00054184  7C 60 1A 14 */	add r3, r0, r3
lbl_80057388:
/* 80057388 00054188  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 8005738C 0005418C  28 00 00 00 */	cmplwi r0, 0
/* 80057390 00054190  41 82 00 0C */	beq lbl_8005739C
/* 80057394 00054194  48 02 94 E5 */	bl zEntPlayer_SNDPlayStream__F20_tagePlayerStreamSnd
/* 80057398 00054198  48 00 00 0C */	b lbl_800573A4
lbl_8005739C:
/* 8005739C 0005419C  C0 22 89 B8 */	lfs f1, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 800573A0 000541A0  48 02 93 F1 */	bl zEntPlayer_SNDPlay__F14_tagePlayerSndf
lbl_800573A4:
/* 800573A4 000541A4  38 00 00 00 */	li r0, 0
/* 800573A8 000541A8  90 1F 00 24 */	stw r0, 0x24(r31)
/* 800573AC 000541AC  48 00 00 2C */	b lbl_800573D8
lbl_800573B0:
/* 800573B0 000541B0  C0 1F 00 04 */	lfs f0, 4(r31)
/* 800573B4 000541B4  38 80 00 80 */	li r4, 0x80
/* 800573B8 000541B8  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 800573BC 000541BC  38 A0 00 00 */	li r5, 0
/* 800573C0 000541C0  EC 20 00 72 */	fmuls f1, f0, f1
/* 800573C4 000541C4  38 C0 00 00 */	li r6, 0
/* 800573C8 000541C8  FC 60 10 90 */	fmr f3, f2
/* 800573CC 000541CC  38 E0 00 00 */	li r7, 0
/* 800573D0 000541D0  4B FF 16 5D */	bl xSndPlay__FUiffUiUiUi14sound_categoryf
/* 800573D4 000541D4  90 7F 00 24 */	stw r3, 0x24(r31)
lbl_800573D8:
/* 800573D8 000541D8  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 800573DC 000541DC  2C 03 00 00 */	cmpwi r3, 0
/* 800573E0 000541E0  41 82 00 08 */	beq lbl_800573E8
/* 800573E4 000541E4  48 05 5C 71 */	bl zRumbleStart__F16_tagSDRumbleType
lbl_800573E8:
/* 800573E8 000541E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800573EC 000541EC  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 800573F0 000541F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800573F4 000541F4  83 C1 00 08 */	lwz r30, 8(r1)
/* 800573F8 000541F8  7C 08 03 A6 */	mtlr r0
/* 800573FC 000541FC  38 21 00 10 */	addi r1, r1, 0x10
/* 80057400 00054200  4E 80 00 20 */	blr 

/* play_sound__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FifPC5xVec3 */
play_sound__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FifPC5xVec3:
/* 80057404 00054204  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80057408 00054208  7C 08 02 A6 */	mflr r0
/* 8005740C 0005420C  1C A3 00 28 */	mulli r5, r3, 0x28
/* 80057410 00054210  3C 60 80 29 */	lis r3, sounds@ha
/* 80057414 00054214  90 01 00 14 */	stw r0, 0x14(r1)
/* 80057418 00054218  38 03 C4 30 */	addi r0, r3, sounds@l
/* 8005741C 0005421C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80057420 00054220  7F E0 2A 14 */	add r31, r0, r5
/* 80057424 00054224  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 80057428 00054228  28 03 00 00 */	cmplwi r3, 0
/* 8005742C 0005422C  41 82 00 34 */	beq lbl_80057460
/* 80057430 00054230  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80057434 00054234  7C 86 23 78 */	mr r6, r4
/* 80057438 00054238  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005743C 0005423C  38 80 00 80 */	li r4, 0x80
/* 80057440 00054240  EC 20 00 72 */	fmuls f1, f0, f1
/* 80057444 00054244  C0 7F 00 08 */	lfs f3, 8(r31)
/* 80057448 00054248  FC A0 10 90 */	fmr f5, f2
/* 8005744C 0005424C  C0 9F 00 0C */	lfs f4, 0xc(r31)
/* 80057450 00054250  38 A0 08 00 */	li r5, 0x800
/* 80057454 00054254  38 E0 00 00 */	li r7, 0
/* 80057458 00054258  4B FF 16 3D */	bl xSndPlay3D__FUiffUiUiPC5xVec3ff14sound_categoryf
/* 8005745C 0005425C  90 7F 00 24 */	stw r3, 0x24(r31)
lbl_80057460:
/* 80057460 00054260  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 80057464 00054264  2C 03 00 00 */	cmpwi r3, 0
/* 80057468 00054268  41 82 00 08 */	beq lbl_80057470
/* 8005746C 0005426C  48 05 5B E9 */	bl zRumbleStart__F16_tagSDRumbleType
lbl_80057470:
/* 80057470 00054270  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80057474 00054274  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 80057478 00054278  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005747C 0005427C  7C 08 03 A6 */	mtlr r0
/* 80057480 00054280  38 21 00 10 */	addi r1, r1, 0x10
/* 80057484 00054284  4E 80 00 20 */	blr 

/* camera_taken__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv */
camera_taken__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv:
/* 800575FC 000543FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80057600 00054400  7C 08 02 A6 */	mflr r0
/* 80057604 00054404  90 01 00 14 */	stw r0, 0x14(r1)
/* 80057608 00054408  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005760C 0005440C  3B E0 00 00 */	li r31, 0
/* 80057610 00054410  4B FF AB 59 */	bl zCameraGetConvers__Fv
/* 80057614 00054414  2C 03 00 00 */	cmpwi r3, 0
/* 80057618 00054418  40 82 00 10 */	bne lbl_80057628
/* 8005761C 0005441C  4B FF AB 05 */	bl zCameraIsTrackingDisabled__Fv
/* 80057620 00054420  54 60 07 FB */	rlwinm. r0, r3, 0, 0x1f, 0x1d
/* 80057624 00054424  41 82 00 08 */	beq lbl_8005762C
lbl_80057628:
/* 80057628 00054428  3B E0 00 01 */	li r31, 1
lbl_8005762C:
/* 8005762C 0005442C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80057630 00054430  7F E3 FB 78 */	mr r3, r31
/* 80057634 00054434  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80057638 00054438  7C 08 03 A6 */	mtlr r0
/* 8005763C 0005443C  38 21 00 10 */	addi r1, r1, 0x10
/* 80057640 00054440  4E 80 00 20 */	blr 

/* damage_entity__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FR4xEntRC5xVec3RC5xVec3RC5xVec3fb */
damage_entity__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FR4xEntRC5xVec3RC5xVec3RC5xVec3fb:
/* 80057684 00054484  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 80057688 00054488  7C 08 02 A6 */	mflr r0
/* 8005768C 0005448C  3D 00 80 29 */	lis r8, shared__13cruise_bubble@ha
/* 80057690 00054490  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 80057694 00054494  39 08 C2 A4 */	addi r8, r8, shared__13cruise_bubble@l
/* 80057698 00054498  DB E1 00 B8 */	stfd f31, 0xb8(r1)
/* 8005769C 0005449C  FF E0 08 90 */	fmr f31, f1
/* 800576A0 000544A0  93 E1 00 B4 */	stw r31, 0xb4(r1)
/* 800576A4 000544A4  7C BF 2B 78 */	mr r31, r5
/* 800576A8 000544A8  93 C1 00 B0 */	stw r30, 0xb0(r1)
/* 800576AC 000544AC  7C 9E 23 78 */	mr r30, r4
/* 800576B0 000544B0  93 A1 00 AC */	stw r29, 0xac(r1)
/* 800576B4 000544B4  7C 7D 1B 78 */	mr r29, r3
/* 800576B8 000544B8  80 08 00 EC */	lwz r0, 0xec(r8)
/* 800576BC 000544BC  2C 00 00 20 */	cmpwi r0, 0x20
/* 800576C0 000544C0  40 80 02 08 */	bge lbl_800578C8
/* 800576C4 000544C4  54 00 10 3A */	slwi r0, r0, 2
/* 800576C8 000544C8  7C 88 02 14 */	add r4, r8, r0
/* 800576CC 000544CC  93 A4 00 6C */	stw r29, 0x6c(r4)
/* 800576D0 000544D0  80 88 00 EC */	lwz r4, 0xec(r8)
/* 800576D4 000544D4  38 04 00 01 */	addi r0, r4, 1
/* 800576D8 000544D8  90 08 00 EC */	stw r0, 0xec(r8)
/* 800576DC 000544DC  88 1D 00 04 */	lbz r0, 4(r29)
/* 800576E0 000544E0  2C 00 00 1B */	cmpwi r0, 0x1b
/* 800576E4 000544E4  41 82 00 38 */	beq lbl_8005771C
/* 800576E8 000544E8  40 80 00 1C */	bge lbl_80057704
/* 800576EC 000544EC  2C 00 00 18 */	cmpwi r0, 0x18
/* 800576F0 000544F0  41 82 00 20 */	beq lbl_80057710
/* 800576F4 000544F4  40 80 01 C8 */	bge lbl_800578BC
/* 800576F8 000544F8  2C 00 00 06 */	cmpwi r0, 6
/* 800576FC 000544FC  41 82 00 2C */	beq lbl_80057728
/* 80057700 00054500  48 00 01 BC */	b lbl_800578BC
lbl_80057704:
/* 80057704 00054504  2C 00 00 2B */	cmpwi r0, 0x2b
/* 80057708 00054508  41 82 01 28 */	beq lbl_80057830
/* 8005770C 0005450C  48 00 01 B0 */	b lbl_800578BC
lbl_80057710:
/* 80057710 00054510  38 80 00 10 */	li r4, 0x10
/* 80057714 00054514  4B FF F6 3D */	bl zEntButton_Press__FP11_zEntButtonUi
/* 80057718 00054518  48 00 01 B0 */	b lbl_800578C8
lbl_8005771C:
/* 8005771C 0005451C  3C 80 00 01 */	lis r4, 1
/* 80057720 00054520  48 00 98 95 */	bl zEntDestructObj_Hit__FP15zEntDestructObjUi
/* 80057724 00054524  48 00 01 A4 */	b lbl_800578C8
lbl_80057728:
/* 80057728 00054528  88 1D 00 1A */	lbz r0, 0x1a(r29)
/* 8005772C 0005452C  2C 00 00 0C */	cmpwi r0, 0xc
/* 80057730 00054530  41 82 00 08 */	beq lbl_80057738
/* 80057734 00054534  48 00 01 88 */	b lbl_800578BC
lbl_80057738:
/* 80057738 00054538  80 7D 00 D4 */	lwz r3, 0xd4(r29)
/* 8005773C 0005453C  80 03 00 28 */	lwz r0, 0x28(r3)
/* 80057740 00054540  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 80057744 00054544  41 82 01 84 */	beq lbl_800578C8
/* 80057748 00054548  93 A1 00 5C */	stw r29, 0x5c(r1)
/* 8005774C 0005454C  80 7D 00 28 */	lwz r3, 0x28(r29)
/* 80057750 00054550  28 03 00 00 */	cmplwi r3, 0
/* 80057754 00054554  41 82 00 08 */	beq lbl_8005775C
/* 80057758 00054558  48 00 00 08 */	b lbl_80057760
lbl_8005775C:
/* 8005775C 0005455C  80 7D 00 24 */	lwz r3, 0x24(r29)
lbl_80057760:
/* 80057760 00054560  54 E0 06 3F */	clrlwi. r0, r7, 0x18
/* 80057764 00054564  90 61 00 60 */	stw r3, 0x60(r1)
/* 80057768 00054568  41 82 00 9C */	beq lbl_80057804
/* 8005776C 0005456C  38 00 06 00 */	li r0, 0x600
/* 80057770 00054570  7F C4 F3 78 */	mr r4, r30
/* 80057774 00054574  90 01 00 54 */	stw r0, 0x54(r1)
/* 80057778 00054578  38 61 00 44 */	addi r3, r1, 0x44
/* 8005777C 0005457C  4B FB 3A E9 */	bl __as__5xVec3FRC5xVec3
/* 80057780 00054580  D3 E1 00 50 */	stfs f31, 0x50(r1)
/* 80057784 00054584  38 61 00 44 */	addi r3, r1, 0x44
/* 80057788 00054588  38 9D 00 64 */	addi r4, r29, 0x64
/* 8005778C 0005458C  38 A1 00 54 */	addi r5, r1, 0x54
/* 80057790 00054590  4B FB 36 15 */	bl xSphereHitsBound__FPC7xSpherePC6xBoundP7xCollis
/* 80057794 00054594  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80057798 00054598  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8005779C 0005459C  41 82 01 2C */	beq lbl_800578C8
/* 800577A0 000545A0  88 1D 00 21 */	lbz r0, 0x21(r29)
/* 800577A4 000545A4  28 00 00 05 */	cmplwi r0, 5
/* 800577A8 000545A8  40 82 00 20 */	bne lbl_800577C8
/* 800577AC 000545AC  80 81 00 60 */	lwz r4, 0x60(r1)
/* 800577B0 000545B0  38 61 00 44 */	addi r3, r1, 0x44
/* 800577B4 000545B4  38 A1 00 54 */	addi r5, r1, 0x54
/* 800577B8 000545B8  4B FB 80 AD */	bl xSphereHitsModel__FPC7xSpherePC14xModelInstanceP7xCollis
/* 800577BC 000545BC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 800577C0 000545C0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 800577C4 000545C4  41 82 01 04 */	beq lbl_800578C8
lbl_800577C8:
/* 800577C8 000545C8  38 61 00 20 */	addi r3, r1, 0x20
/* 800577CC 000545CC  38 81 00 74 */	addi r4, r1, 0x74
/* 800577D0 000545D0  48 00 86 C1 */	bl up_normal__5xVec3CFv
/* 800577D4 000545D4  80 C1 00 20 */	lwz r6, 0x20(r1)
/* 800577D8 000545D8  7F C4 F3 78 */	mr r4, r30
/* 800577DC 000545DC  80 E1 00 24 */	lwz r7, 0x24(r1)
/* 800577E0 000545E0  38 61 00 54 */	addi r3, r1, 0x54
/* 800577E4 000545E4  80 01 00 28 */	lwz r0, 0x28(r1)
/* 800577E8 000545E8  38 A1 00 38 */	addi r5, r1, 0x38
/* 800577EC 000545EC  90 C1 00 38 */	stw r6, 0x38(r1)
/* 800577F0 000545F0  38 C0 00 01 */	li r6, 1
/* 800577F4 000545F4  90 E1 00 3C */	stw r7, 0x3c(r1)
/* 800577F8 000545F8  90 01 00 40 */	stw r0, 0x40(r1)
/* 800577FC 000545FC  48 05 24 6D */	bl zPlatform_PaddleCollide__FP7xCollisPC5xVec3PC5xVec3Ui
/* 80057800 00054600  48 00 00 C8 */	b lbl_800578C8
lbl_80057804:
/* 80057804 00054604  38 00 02 01 */	li r0, 0x201
/* 80057808 00054608  7C C4 33 78 */	mr r4, r6
/* 8005780C 0005460C  90 01 00 54 */	stw r0, 0x54(r1)
/* 80057810 00054610  38 61 00 68 */	addi r3, r1, 0x68
/* 80057814 00054614  4B FB 3A 51 */	bl __as__5xVec3FRC5xVec3
/* 80057818 00054618  7F C4 F3 78 */	mr r4, r30
/* 8005781C 0005461C  7F E5 FB 78 */	mr r5, r31
/* 80057820 00054620  38 61 00 54 */	addi r3, r1, 0x54
/* 80057824 00054624  38 C0 00 01 */	li r6, 1
/* 80057828 00054628  48 05 24 41 */	bl zPlatform_PaddleCollide__FP7xCollisPC5xVec3PC5xVec3Ui
/* 8005782C 0005462C  48 00 00 9C */	b lbl_800578C8
lbl_80057830:
/* 80057830 00054630  54 E0 06 3F */	clrlwi. r0, r7, 0x18
/* 80057834 00054634  41 82 00 64 */	beq lbl_80057898
/* 80057838 00054638  4B FC 3F F9 */	bl xEntGetCenter__FPC4xEnt
/* 8005783C 0005463C  7C 64 1B 78 */	mr r4, r3
/* 80057840 00054640  7F C5 F3 78 */	mr r5, r30
/* 80057844 00054644  38 61 00 08 */	addi r3, r1, 8
/* 80057848 00054648  4B FB 39 85 */	bl __mi__5xVec3CFRC5xVec3
/* 8005784C 0005464C  38 61 00 14 */	addi r3, r1, 0x14
/* 80057850 00054650  38 81 00 08 */	addi r4, r1, 8
/* 80057854 00054654  48 00 86 3D */	bl up_normal__5xVec3CFv
/* 80057858 00054658  81 9D 01 B8 */	lwz r12, 0x1b8(r29)
/* 8005785C 0005465C  3C 80 80 29 */	lis r4, base__13cruise_bubble@ha
/* 80057860 00054660  81 01 00 14 */	lwz r8, 0x14(r1)
/* 80057864 00054664  38 A4 C2 00 */	addi r5, r4, base__13cruise_bubble@l
/* 80057868 00054668  80 E1 00 18 */	lwz r7, 0x18(r1)
/* 8005786C 0005466C  7F A3 EB 78 */	mr r3, r29
/* 80057870 00054670  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80057874 00054674  38 C1 00 2C */	addi r6, r1, 0x2c
/* 80057878 00054678  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 8005787C 0005467C  38 80 00 09 */	li r4, 9
/* 80057880 00054680  91 01 00 2C */	stw r8, 0x2c(r1)
/* 80057884 00054684  90 E1 00 30 */	stw r7, 0x30(r1)
/* 80057888 00054688  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005788C 0005468C  7D 89 03 A6 */	mtctr r12
/* 80057890 00054690  4E 80 04 21 */	bctrl 
/* 80057894 00054694  48 00 00 34 */	b lbl_800578C8
lbl_80057898:
/* 80057898 00054698  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 8005789C 0005469C  3C 80 80 29 */	lis r4, base__13cruise_bubble@ha
/* 800578A0 000546A0  38 A4 C2 00 */	addi r5, r4, base__13cruise_bubble@l
/* 800578A4 000546A4  7F E6 FB 78 */	mr r6, r31
/* 800578A8 000546A8  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 800578AC 000546AC  38 80 00 09 */	li r4, 9
/* 800578B0 000546B0  7D 89 03 A6 */	mtctr r12
/* 800578B4 000546B4  4E 80 04 21 */	bctrl 
/* 800578B8 000546B8  48 00 00 10 */	b lbl_800578C8
lbl_800578BC:
/* 800578BC 000546BC  7F A3 EB 78 */	mr r3, r29
/* 800578C0 000546C0  38 80 01 C7 */	li r4, 0x1c7
/* 800578C4 000546C4  4B FC 7D 2D */	bl zEntEvent__FP5xBaseUi
lbl_800578C8:
/* 800578C8 000546C8  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 800578CC 000546CC  CB E1 00 B8 */	lfd f31, 0xb8(r1)
/* 800578D0 000546D0  83 E1 00 B4 */	lwz r31, 0xb4(r1)
/* 800578D4 000546D4  83 C1 00 B0 */	lwz r30, 0xb0(r1)
/* 800578D8 000546D8  83 A1 00 AC */	lwz r29, 0xac(r1)
/* 800578DC 000546DC  7C 08 03 A6 */	mtlr r0
/* 800578E0 000546E0  38 21 00 C0 */	addi r1, r1, 0xc0
/* 800578E4 000546E4  4E 80 00 20 */	blr 

/* notify_triggers__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FR6xSceneRC7xSphereRC5xVec3 */
notify_triggers__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FR6xSceneRC7xSphereRC5xVec3:
/* 800579C8 000547C8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 800579CC 000547CC  7C 08 02 A6 */	mflr r0
/* 800579D0 000547D0  90 01 00 34 */	stw r0, 0x34(r1)
/* 800579D4 000547D4  BF 21 00 14 */	stmw r25, 0x14(r1)
/* 800579D8 000547D8  7C 99 23 78 */	mr r25, r4
/* 800579DC 000547DC  7C BA 2B 78 */	mr r26, r5
/* 800579E0 000547E0  A0 03 00 08 */	lhz r0, 8(r3)
/* 800579E4 000547E4  83 A3 00 2C */	lwz r29, 0x2c(r3)
/* 800579E8 000547E8  54 00 10 3A */	slwi r0, r0, 2
/* 800579EC 000547EC  7F 9D 02 14 */	add r28, r29, r0
/* 800579F0 000547F0  48 00 01 24 */	b lbl_80057B14
lbl_800579F4:
/* 800579F4 000547F4  83 7D 00 00 */	lwz r27, 0(r29)
/* 800579F8 000547F8  7F 63 DB 78 */	mr r3, r27
/* 800579FC 000547FC  4B FB 1B 3D */	bl xBaseIsEnabled__FPC5xBase
/* 80057A00 00054800  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80057A04 00054804  41 82 01 0C */	beq lbl_80057B10
/* 80057A08 00054808  7F 63 DB 78 */	mr r3, r27
/* 80057A0C 0005480C  48 00 86 25 */	bl zEntTriggerAsset__FRC11zEntTrigger
/* 80057A10 00054810  88 1B 00 05 */	lbz r0, 5(r27)
/* 80057A14 00054814  38 60 00 00 */	li r3, 0
/* 80057A18 00054818  80 BB 00 08 */	lwz r5, 8(r27)
/* 80057A1C 0005481C  38 80 00 00 */	li r4, 0
/* 80057A20 00054820  54 00 28 34 */	slwi r0, r0, 5
/* 80057A24 00054824  7C C5 02 14 */	add r6, r5, r0
/* 80057A28 00054828  48 00 00 28 */	b lbl_80057A50
lbl_80057A2C:
/* 80057A2C 0005482C  A0 05 00 00 */	lhz r0, 0(r5)
/* 80057A30 00054830  28 00 02 01 */	cmplwi r0, 0x201
/* 80057A34 00054834  40 82 00 0C */	bne lbl_80057A40
/* 80057A38 00054838  38 60 00 01 */	li r3, 1
/* 80057A3C 0005483C  48 00 00 10 */	b lbl_80057A4C
lbl_80057A40:
/* 80057A40 00054840  28 00 02 02 */	cmplwi r0, 0x202
/* 80057A44 00054844  40 82 00 08 */	bne lbl_80057A4C
/* 80057A48 00054848  38 80 00 01 */	li r4, 1
lbl_80057A4C:
/* 80057A4C 0005484C  38 A5 00 20 */	addi r5, r5, 0x20
lbl_80057A50:
/* 80057A50 00054850  7C 05 30 40 */	cmplw r5, r6
/* 80057A54 00054854  40 82 FF D8 */	bne lbl_80057A2C
/* 80057A58 00054858  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80057A5C 0005485C  3B E0 00 00 */	li r31, 0
/* 80057A60 00054860  41 82 00 14 */	beq lbl_80057A74
/* 80057A64 00054864  80 1B 01 2C */	lwz r0, 0x12c(r27)
/* 80057A68 00054868  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 80057A6C 0005486C  40 82 00 08 */	bne lbl_80057A74
/* 80057A70 00054870  3B E0 00 01 */	li r31, 1
lbl_80057A74:
/* 80057A74 00054874  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80057A78 00054878  3B C0 00 00 */	li r30, 0
/* 80057A7C 0005487C  41 82 00 14 */	beq lbl_80057A90
/* 80057A80 00054880  80 1B 01 2C */	lwz r0, 0x12c(r27)
/* 80057A84 00054884  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 80057A88 00054888  41 82 00 08 */	beq lbl_80057A90
/* 80057A8C 0005488C  3B C0 00 01 */	li r30, 1
lbl_80057A90:
/* 80057A90 00054890  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80057A94 00054894  40 82 00 0C */	bne lbl_80057AA0
/* 80057A98 00054898  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 80057A9C 0005489C  41 82 00 74 */	beq lbl_80057B10
lbl_80057AA0:
/* 80057AA0 000548A0  7F 63 DB 78 */	mr r3, r27
/* 80057AA4 000548A4  7F 24 CB 78 */	mr r4, r25
/* 80057AA8 000548A8  7F 45 D3 78 */	mr r5, r26
/* 80057AAC 000548AC  48 03 AA C5 */	bl zEntTriggerHitsSphere__FRC11zEntTriggerRC7xSphereRC5xVec3
/* 80057AB0 000548B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80057AB4 000548B4  41 82 00 14 */	beq lbl_80057AC8
/* 80057AB8 000548B8  80 1B 01 2C */	lwz r0, 0x12c(r27)
/* 80057ABC 000548BC  60 00 00 02 */	ori r0, r0, 2
/* 80057AC0 000548C0  90 1B 01 2C */	stw r0, 0x12c(r27)
/* 80057AC4 000548C4  48 00 00 10 */	b lbl_80057AD4
lbl_80057AC8:
/* 80057AC8 000548C8  80 1B 01 2C */	lwz r0, 0x12c(r27)
/* 80057ACC 000548CC  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 80057AD0 000548D0  90 1B 01 2C */	stw r0, 0x12c(r27)
lbl_80057AD4:
/* 80057AD4 000548D4  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80057AD8 000548D8  41 82 00 1C */	beq lbl_80057AF4
/* 80057ADC 000548DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80057AE0 000548E0  41 82 00 14 */	beq lbl_80057AF4
/* 80057AE4 000548E4  7F 63 DB 78 */	mr r3, r27
/* 80057AE8 000548E8  38 80 02 01 */	li r4, 0x201
/* 80057AEC 000548EC  4B FC 7B 05 */	bl zEntEvent__FP5xBaseUi
/* 80057AF0 000548F0  48 00 00 20 */	b lbl_80057B10
lbl_80057AF4:
/* 80057AF4 000548F4  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 80057AF8 000548F8  41 82 00 18 */	beq lbl_80057B10
/* 80057AFC 000548FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80057B00 00054900  40 82 00 10 */	bne lbl_80057B10
/* 80057B04 00054904  7F 63 DB 78 */	mr r3, r27
/* 80057B08 00054908  38 80 02 02 */	li r4, 0x202
/* 80057B0C 0005490C  4B FC 7A E5 */	bl zEntEvent__FP5xBaseUi
lbl_80057B10:
/* 80057B10 00054910  3B BD 00 04 */	addi r29, r29, 4
lbl_80057B14:
/* 80057B14 00054914  7C 1D E0 40 */	cmplw r29, r28
/* 80057B18 00054918  40 82 FE DC */	bne lbl_800579F4
/* 80057B1C 0005491C  BB 21 00 14 */	lmw r25, 0x14(r1)
/* 80057B20 00054920  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80057B24 00054924  7C 08 03 A6 */	mtlr r0
/* 80057B28 00054928  38 21 00 30 */	addi r1, r1, 0x30
/* 80057B2C 0005492C  4E 80 00 20 */	blr 

/* exit_triggers__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FR6xScene */
exit_triggers__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FR6xScene:
/* 80057B30 00054930  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80057B34 00054934  7C 08 02 A6 */	mflr r0
/* 80057B38 00054938  90 01 00 24 */	stw r0, 0x24(r1)
/* 80057B3C 0005493C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80057B40 00054940  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80057B44 00054944  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80057B48 00054948  A0 03 00 08 */	lhz r0, 8(r3)
/* 80057B4C 0005494C  83 E3 00 2C */	lwz r31, 0x2c(r3)
/* 80057B50 00054950  54 00 10 3A */	slwi r0, r0, 2
/* 80057B54 00054954  7F DF 02 14 */	add r30, r31, r0
/* 80057B58 00054958  48 00 00 74 */	b lbl_80057BCC
lbl_80057B5C:
/* 80057B5C 0005495C  83 BF 00 00 */	lwz r29, 0(r31)
/* 80057B60 00054960  7F A3 EB 78 */	mr r3, r29
/* 80057B64 00054964  4B FB 19 D5 */	bl xBaseIsEnabled__FPC5xBase
/* 80057B68 00054968  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80057B6C 0005496C  41 82 00 5C */	beq lbl_80057BC8
/* 80057B70 00054970  7F A3 EB 78 */	mr r3, r29
/* 80057B74 00054974  48 00 84 BD */	bl zEntTriggerAsset__FRC11zEntTrigger
/* 80057B78 00054978  80 7D 01 2C */	lwz r3, 0x12c(r29)
/* 80057B7C 0005497C  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 80057B80 00054980  41 82 00 48 */	beq lbl_80057BC8
/* 80057B84 00054984  54 60 07 FA */	rlwinm r0, r3, 0, 0x1f, 0x1d
/* 80057B88 00054988  90 1D 01 2C */	stw r0, 0x12c(r29)
/* 80057B8C 0005498C  88 1D 00 05 */	lbz r0, 5(r29)
/* 80057B90 00054990  80 7D 00 08 */	lwz r3, 8(r29)
/* 80057B94 00054994  54 00 28 34 */	slwi r0, r0, 5
/* 80057B98 00054998  7C 83 02 14 */	add r4, r3, r0
/* 80057B9C 0005499C  48 00 00 24 */	b lbl_80057BC0
lbl_80057BA0:
/* 80057BA0 000549A0  A0 03 00 00 */	lhz r0, 0(r3)
/* 80057BA4 000549A4  28 00 02 02 */	cmplwi r0, 0x202
/* 80057BA8 000549A8  40 82 00 14 */	bne lbl_80057BBC
/* 80057BAC 000549AC  7F A3 EB 78 */	mr r3, r29
/* 80057BB0 000549B0  38 80 02 02 */	li r4, 0x202
/* 80057BB4 000549B4  4B FC 7A 3D */	bl zEntEvent__FP5xBaseUi
/* 80057BB8 000549B8  48 00 00 10 */	b lbl_80057BC8
lbl_80057BBC:
/* 80057BBC 000549BC  38 63 00 20 */	addi r3, r3, 0x20
lbl_80057BC0:
/* 80057BC0 000549C0  7C 03 20 40 */	cmplw r3, r4
/* 80057BC4 000549C4  40 82 FF DC */	bne lbl_80057BA0
lbl_80057BC8:
/* 80057BC8 000549C8  3B FF 00 04 */	addi r31, r31, 4
lbl_80057BCC:
/* 80057BCC 000549CC  7C 1F F0 40 */	cmplw r31, r30
/* 80057BD0 000549D0  40 82 FF 8C */	bne lbl_80057B5C
/* 80057BD4 000549D4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80057BD8 000549D8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80057BDC 000549DC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80057BE0 000549E0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80057BE4 000549E4  7C 08 03 A6 */	mtlr r0
/* 80057BE8 000549E8  38 21 00 20 */	addi r1, r1, 0x20
/* 80057BEC 000549EC  4E 80 00 20 */	blr 

/* start_trail__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv */
start_trail__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv:
/* 80057C78 00054A78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80057C7C 00054A7C  7C 08 02 A6 */	mflr r0
/* 80057C80 00054A80  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 80057C84 00054A84  90 01 00 14 */	stw r0, 0x14(r1)
/* 80057C88 00054A88  38 A3 C2 A4 */	addi r5, r3, shared__13cruise_bubble@l
/* 80057C8C 00054A8C  80 65 00 00 */	lwz r3, 0(r5)
/* 80057C90 00054A90  54 60 06 31 */	rlwinm. r0, r3, 0, 0x18, 0x18
/* 80057C94 00054A94  40 82 00 24 */	bne lbl_80057CB8
/* 80057C98 00054A98  60 60 01 80 */	ori r0, r3, 0x180
/* 80057C9C 00054A9C  38 65 01 14 */	addi r3, r5, 0x114
/* 80057CA0 00054AA0  90 05 00 00 */	stw r0, 0(r5)
/* 80057CA4 00054AA4  38 85 01 54 */	addi r4, r5, 0x154
/* 80057CA8 00054AA8  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 80057CAC 00054AAC  D0 05 01 10 */	stfs f0, 0x110(r5)
/* 80057CB0 00054AB0  D0 05 01 0C */	stfs f0, 0x10c(r5)
/* 80057CB4 00054AB4  4B FF FF 71 */	bl refresh_trail__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FR7xMat4x3R5xQuat
lbl_80057CB8:
/* 80057CB8 00054AB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80057CBC 00054ABC  7C 08 03 A6 */	mtlr r0
/* 80057CC0 00054AC0  38 21 00 10 */	addi r1, r1, 0x10
/* 80057CC4 00054AC4  4E 80 00 20 */	blr 

start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_typeFv:
/* 80057D78 00054B78  4E 80 00 20 */	blr 

stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_typeFv:
/* 80057D7C 00054B7C  4E 80 00 20 */	blr 

/* kill__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fbb */
/* changed from ... */
/* kill__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fbb: */
/* ... so linker can find it */
kill__13cruise_bubbleFbb:
/* 80057E6C 00054C6C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80057E70 00054C70  7C 08 02 A6 */	mflr r0
/* 80057E74 00054C74  90 01 00 24 */	stw r0, 0x24(r1)
/* 80057E78 00054C78  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80057E7C 00054C7C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80057E80 00054C80  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80057E84 00054C84  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80057E88 00054C88  93 81 00 10 */	stw r28, 0x10(r1)
/* 80057E8C 00054C8C  7C 7C 1B 78 */	mr r28, r3
/* 80057E90 00054C90  41 82 00 48 */	beq lbl_80057ED8
/* 80057E94 00054C94  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 80057E98 00054C98  3B A0 00 00 */	li r29, 0
/* 80057E9C 00054C9C  3B C3 C2 A4 */	addi r30, r3, shared__13cruise_bubble@l
/* 80057EA0 00054CA0  3B E0 00 00 */	li r31, 0
lbl_80057EA4:
/* 80057EA4 00054CA4  80 7E 00 04 */	lwz r3, 4(r30)
/* 80057EA8 00054CA8  28 03 00 00 */	cmplwi r3, 0
/* 80057EAC 00054CAC  41 82 00 18 */	beq lbl_80057EC4
/* 80057EB0 00054CB0  81 83 00 04 */	lwz r12, 4(r3)
/* 80057EB4 00054CB4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80057EB8 00054CB8  7D 89 03 A6 */	mtctr r12
/* 80057EBC 00054CBC  4E 80 04 21 */	bctrl 
/* 80057EC0 00054CC0  93 FE 00 04 */	stw r31, 4(r30)
lbl_80057EC4:
/* 80057EC4 00054CC4  3B BD 00 01 */	addi r29, r29, 1
/* 80057EC8 00054CC8  3B DE 00 04 */	addi r30, r30, 4
/* 80057ECC 00054CCC  2C 1D 00 03 */	cmpwi r29, 3
/* 80057ED0 00054CD0  41 80 FF D4 */	blt lbl_80057EA4
/* 80057ED4 00054CD4  48 00 00 20 */	b lbl_80057EF4
lbl_80057ED8:
/* 80057ED8 00054CD8  3B A0 00 00 */	li r29, 0
lbl_80057EDC:
/* 80057EDC 00054CDC  7F A3 EB 78 */	mr r3, r29
/* 80057EE0 00054CE0  38 80 FF FF */	li r4, -1
/* 80057EE4 00054CE4  4B FF FD F9 */	bl set_state__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_11thread_enumQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_enum
/* 80057EE8 00054CE8  3B BD 00 01 */	addi r29, r29, 1
/* 80057EEC 00054CEC  2C 1D 00 03 */	cmpwi r29, 3
/* 80057EF0 00054CF0  41 80 FF EC */	blt lbl_80057EDC
lbl_80057EF4:
/* 80057EF4 00054CF4  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 80057EF8 00054CF8  38 00 00 03 */	li r0, 3
/* 80057EFC 00054CFC  38 83 C2 A4 */	addi r4, r3, shared__13cruise_bubble@l
/* 80057F00 00054D00  38 60 00 02 */	li r3, 2
/* 80057F04 00054D04  90 04 00 00 */	stw r0, 0(r4)
/* 80057F08 00054D08  4B FF A2 09 */	bl zCameraEnableTracking__F17camera_owner_enum
/* 80057F0C 00054D0C  38 60 FF FF */	li r3, -1
/* 80057F10 00054D10  38 80 00 00 */	li r4, 0
/* 80057F14 00054D14  48 0D B4 45 */	bl permit__8ztalkboxFUiUi
/* 80057F18 00054D18  57 80 06 3F */	clrlwi. r0, r28, 0x18
/* 80057F1C 00054D1C  41 82 00 20 */	beq lbl_80057F3C
/* 80057F20 00054D20  4B FF A2 15 */	bl zCameraEnableInput__Fv
/* 80057F24 00054D24  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 80057F28 00054D28  3C A0 80 3C */	lis r5, globals@ha
/* 80057F2C 00054D2C  38 83 C2 A4 */	addi r4, r3, shared__13cruise_bubble@l
/* 80057F30 00054D30  C0 24 01 00 */	lfs f1, 0x100(r4)
/* 80057F34 00054D34  38 65 05 58 */	addi r3, r5, globals@l
/* 80057F38 00054D38  4B FB 65 59 */	bl xCameraSetFOV__FP7xCameraf
lbl_80057F3C:
/* 80057F3C 00054D3C  4B FF F6 05 */	bl hide_wand__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 80057F40 00054D40  4B FF F6 39 */	bl hide_missle__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 80057F44 00054D44  48 00 23 FD */	bl hide_hud__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 80057F48 00054D48  4B FF FD 81 */	bl stop_trail__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 80057F4C 00054D4C  C0 22 89 B8 */	lfs f1, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 80057F50 00054D50  48 00 00 91 */	bl distort_screen__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Ff
/* 80057F54 00054D54  38 60 00 00 */	li r3, 0
/* 80057F58 00054D58  4B FF 0A A1 */	bl xSndSelectListenerMode__F24sound_listener_game_mode
/* 80057F5C 00054D5C  3C 80 80 3C */	lis r4, globals@ha
/* 80057F60 00054D60  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 80057F64 00054D64  38 84 05 58 */	addi r4, r4, globals@l
/* 80057F68 00054D68  80 A4 07 04 */	lwz r5, 0x704(r4)
/* 80057F6C 00054D6C  38 83 C2 A4 */	addi r4, r3, shared__13cruise_bubble@l
/* 80057F70 00054D70  80 04 01 64 */	lwz r0, 0x164(r4)
/* 80057F74 00054D74  80 65 00 0C */	lwz r3, 0xc(r5)
/* 80057F78 00054D78  80 A3 00 08 */	lwz r5, 8(r3)
/* 80057F7C 00054D7C  80 A5 00 04 */	lwz r5, 4(r5)
/* 80057F80 00054D80  7C 05 00 40 */	cmplw r5, r0
/* 80057F84 00054D84  41 82 00 1C */	beq lbl_80057FA0
/* 80057F88 00054D88  80 04 01 68 */	lwz r0, 0x168(r4)
/* 80057F8C 00054D8C  7C 05 00 40 */	cmplw r5, r0
/* 80057F90 00054D90  41 82 00 10 */	beq lbl_80057FA0
/* 80057F94 00054D94  80 04 01 6C */	lwz r0, 0x16c(r4)
/* 80057F98 00054D98  7C 05 00 40 */	cmplw r5, r0
/* 80057F9C 00054D9C  40 82 00 14 */	bne lbl_80057FB0
lbl_80057FA0:
/* 80057FA0 00054DA0  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 80057FA4 00054DA4  38 84 C2 A4 */	addi r4, r4, shared__13cruise_bubble@l
/* 80057FA8 00054DA8  80 84 01 84 */	lwz r4, 0x184(r4)
/* 80057FAC 00054DAC  4B FB 0A 99 */	bl xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition
lbl_80057FB0:
/* 80057FB0 00054DB0  3C 60 80 3C */	lis r3, globals@ha
/* 80057FB4 00054DB4  38 63 05 58 */	addi r3, r3, globals@l
/* 80057FB8 00054DB8  80 63 1F C0 */	lwz r3, 0x1fc0(r3)
/* 80057FBC 00054DBC  4B FF FB 75 */	bl exit_triggers__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FR6xScene
/* 80057FC0 00054DC0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80057FC4 00054DC4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80057FC8 00054DC8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80057FCC 00054DCC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80057FD0 00054DD0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80057FD4 00054DD4  7C 08 03 A6 */	mtlr r0
/* 80057FD8 00054DD8  38 21 00 20 */	addi r1, r1, 0x20
/* 80057FDC 00054DDC  4E 80 00 20 */	blr 

/* distort_screen__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Ff */
distort_screen__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Ff:
/* 80057FE0 00054DE0  4E 80 00 20 */	blr 

abort__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_typeFv:
/* 80057FE4 00054DE4  4E 80 00 20 */	blr 

/* update_player__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FR6xScenef */
update_player__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FR6xScenef:
/* 80057FE8 00054DE8  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80057FEC 00054DEC  7C 08 02 A6 */	mflr r0
/* 80057FF0 00054DF0  90 01 00 54 */	stw r0, 0x54(r1)
/* 80057FF4 00054DF4  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80057FF8 00054DF8  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 80057FFC 00054DFC  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80058000 00054E00  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80058004 00054E04  7C 7E 1B 78 */	mr r30, r3
/* 80058008 00054E08  FF E0 08 90 */	fmr f31, f1
/* 8005800C 00054E0C  48 00 00 FD */	bl get_player_loc__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 80058010 00054E10  80 C3 00 00 */	lwz r6, 0(r3)
/* 80058014 00054E14  3C 80 80 3C */	lis r4, globals@ha
/* 80058018 00054E18  80 A3 00 04 */	lwz r5, 4(r3)
/* 8005801C 00054E1C  FC 20 F8 90 */	fmr f1, f31
/* 80058020 00054E20  80 03 00 08 */	lwz r0, 8(r3)
/* 80058024 00054E24  38 64 05 58 */	addi r3, r4, globals@l
/* 80058028 00054E28  90 C1 00 2C */	stw r6, 0x2c(r1)
/* 8005802C 00054E2C  7F C4 F3 78 */	mr r4, r30
/* 80058030 00054E30  38 63 06 E0 */	addi r3, r3, 0x6e0
/* 80058034 00054E34  90 A1 00 30 */	stw r5, 0x30(r1)
/* 80058038 00054E38  38 A1 00 20 */	addi r5, r1, 0x20
/* 8005803C 00054E3C  3B E0 00 00 */	li r31, 0
/* 80058040 00054E40  90 01 00 34 */	stw r0, 0x34(r1)
/* 80058044 00054E44  48 02 A6 31 */	bl zEntPlayer_MinimalUpdate__FP4xEntP6xScenefR5xVec3
/* 80058048 00054E48  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8005804C 00054E4C  40 82 00 24 */	bne lbl_80058070
/* 80058050 00054E50  3C 80 80 3C */	lis r4, globals@ha
/* 80058054 00054E54  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 80058058 00054E58  38 84 05 58 */	addi r4, r4, globals@l
/* 8005805C 00054E5C  38 63 C2 A4 */	addi r3, r3, shared__13cruise_bubble@l
/* 80058060 00054E60  80 84 16 B0 */	lwz r4, 0x16b0(r4)
/* 80058064 00054E64  80 03 00 F0 */	lwz r0, 0xf0(r3)
/* 80058068 00054E68  7C 04 00 40 */	cmplw r4, r0
/* 8005806C 00054E6C  40 80 00 08 */	bge lbl_80058074
lbl_80058070:
/* 80058070 00054E70  3B E0 00 01 */	li r31, 1
lbl_80058074:
/* 80058074 00054E74  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80058078 00054E78  7F FE FB 78 */	mr r30, r31
/* 8005807C 00054E7C  40 82 00 58 */	bne lbl_800580D4
/* 80058080 00054E80  48 00 00 89 */	bl get_player_loc__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 80058084 00054E84  7C 64 1B 78 */	mr r4, r3
/* 80058088 00054E88  38 61 00 08 */	addi r3, r1, 8
/* 8005808C 00054E8C  38 A1 00 2C */	addi r5, r1, 0x2c
/* 80058090 00054E90  4B FB 31 3D */	bl __mi__5xVec3CFRC5xVec3
/* 80058094 00054E94  38 61 00 14 */	addi r3, r1, 0x14
/* 80058098 00054E98  38 81 00 08 */	addi r4, r1, 8
/* 8005809C 00054E9C  38 A1 00 20 */	addi r5, r1, 0x20
/* 800580A0 00054EA0  4B FB 31 2D */	bl __mi__5xVec3CFRC5xVec3
/* 800580A4 00054EA4  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 800580A8 00054EA8  38 81 00 14 */	addi r4, r1, 0x14
/* 800580AC 00054EAC  38 63 C2 A4 */	addi r3, r3, shared__13cruise_bubble@l
/* 800580B0 00054EB0  3B E3 00 F4 */	addi r31, r3, 0xf4
/* 800580B4 00054EB4  7F E3 FB 78 */	mr r3, r31
/* 800580B8 00054EB8  4B FB D3 8D */	bl __apl__5xVec3FRC5xVec3
/* 800580BC 00054EBC  7F E3 FB 78 */	mr r3, r31
/* 800580C0 00054EC0  4B FB 30 3D */	bl length2__5xVec3CFv
/* 800580C4 00054EC4  C0 02 89 D8 */	lfs f0, zEntCruiseBubble_f_0_25-_SDA2_BASE_(r2)
/* 800580C8 00054EC8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800580CC 00054ECC  40 81 00 08 */	ble lbl_800580D4
/* 800580D0 00054ED0  3B C0 00 01 */	li r30, 1
lbl_800580D4:
/* 800580D4 00054ED4  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 800580D8 00054ED8  41 82 00 10 */	beq lbl_800580E8
/* 800580DC 00054EDC  38 60 00 01 */	li r3, 1
/* 800580E0 00054EE0  38 80 00 00 */	li r4, 0
/* 800580E4 00054EE4  4B FF FD 89 */	bl kill__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fbb
lbl_800580E8:
/* 800580E8 00054EE8  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 800580EC 00054EEC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 800580F0 00054EF0  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 800580F4 00054EF4  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 800580F8 00054EF8  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 800580FC 00054EFC  7C 08 03 A6 */	mtlr r0
/* 80058100 00054F00  38 21 00 50 */	addi r1, r1, 0x50
/* 80058104 00054F04  4E 80 00 20 */	blr 

render__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_typeFv:
/* 80058310 00055110  4E 80 00 20 */	blr 

/* changed from ... */
/* custom_bubble_render__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FP8RpAtomic: */
/* ... so linker can find it */
custom_bubble_render__13cruise_bubbleFP8RpAtomic:
/* 80058314 00055114  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80058318 00055118  7C 08 02 A6 */	mflr r0
/* 8005831C 0005511C  90 01 00 44 */	stw r0, 0x44(r1)
/* 80058320 00055120  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80058324 00055124  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 80058328 00055128  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8005832C 0005512C  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 80058330 00055130  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80058334 00055134  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 80058338 00055138  7C 7F 1B 78 */	mr r31, r3
/* 8005833C 0005513C  38 64 C2 A4 */	addi r3, r4, shared__13cruise_bubble@l
/* 80058340 00055140  38 81 00 08 */	addi r4, r1, 8
/* 80058344 00055144  80 A3 00 68 */	lwz r5, 0x68(r3)
/* 80058348 00055148  38 60 00 14 */	li r3, 0x14
/* 8005834C 0005514C  C3 E5 00 24 */	lfs f31, 0x24(r5)
/* 80058350 00055150  48 1D 74 ED */	bl RwRenderStateGet
/* 80058354 00055154  38 60 00 14 */	li r3, 0x14
/* 80058358 00055158  38 80 00 01 */	li r4, 1
/* 8005835C 0005515C  48 1D 74 81 */	bl RwRenderStateSet
/* 80058360 00055160  38 60 FF FF */	li r3, -1
/* 80058364 00055164  48 06 AA D9 */	bl iDrawSetFBMSK__FUi
/* 80058368 00055168  7F E3 FB 78 */	mr r3, r31
/* 8005836C 0005516C  4B FC F0 81 */	bl AtomicDisableMatFX__FP8RpAtomic
/* 80058370 00055170  7F E3 FB 78 */	mr r3, r31
/* 80058374 00055174  38 80 00 02 */	li r4, 2
/* 80058378 00055178  48 1B 2E F1 */	bl RpSkinAtomicSetType
/* 8005837C 0005517C  81 8D 89 30 */	lwz r12, gAtomicRenderCallBack-_SDA_BASE_(r13)
/* 80058380 00055180  7F E3 FB 78 */	mr r3, r31
/* 80058384 00055184  7D 89 03 A6 */	mtctr r12
/* 80058388 00055188  4E 80 04 21 */	bctrl 
/* 8005838C 0005518C  38 60 00 00 */	li r3, 0
/* 80058390 00055190  48 06 AA AD */	bl iDrawSetFBMSK__FUi
/* 80058394 00055194  80 8D 81 80 */	lwz r4, lbl_803CAA80-_SDA_BASE_(r13)
/* 80058398 00055198  80 04 00 E0 */	lwz r0, 0xe0(r4)
/* 8005839C 0005519C  28 00 00 00 */	cmplwi r0, 0
/* 800583A0 000551A0  41 82 00 6C */	beq lbl_8005840C
/* 800583A4 000551A4  C0 22 89 DC */	lfs f1, lbl_803CD35C-_SDA2_BASE_(r2)
/* 800583A8 000551A8  7F E3 FB 78 */	mr r3, r31
/* 800583AC 000551AC  C0 04 00 D8 */	lfs f0, 0xd8(r4)
/* 800583B0 000551B0  C0 44 00 DC */	lfs f2, 0xdc(r4)
/* 800583B4 000551B4  EC 21 00 32 */	fmuls f1, f1, f0
/* 800583B8 000551B8  C0 02 89 C8 */	lfs f0, lbl_803CD348-_SDA2_BASE_(r2)
/* 800583BC 000551BC  EF C2 07 F2 */	fmuls f30, f2, f31
/* 800583C0 000551C0  EC 01 07 FA */	fmadds f0, f1, f31, f0
/* 800583C4 000551C4  FC 00 00 1E */	fctiwz f0, f0
/* 800583C8 000551C8  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 800583CC 000551CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800583D0 000551D0  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 800583D4 000551D4  48 07 0E 19 */	bl iModelSetMaterialAlpha__FP8RpAtomicUc
/* 800583D8 000551D8  38 00 00 10 */	li r0, 0x10
/* 800583DC 000551DC  FC 20 F0 90 */	fmr f1, f30
/* 800583E0 000551E0  90 0D 8E 88 */	stw r0, gFXSurfaceFlags-_SDA_BASE_(r13)
/* 800583E4 000551E4  7F E3 FB 78 */	mr r3, r31
/* 800583E8 000551E8  80 8D 81 80 */	lwz r4, lbl_803CAA80-_SDA_BASE_(r13)
/* 800583EC 000551EC  80 84 00 E0 */	lwz r4, 0xe0(r4)
/* 800583F0 000551F0  4B FC F5 95 */	bl xFXAtomicEnvMapSetup__FP8RpAtomicUif
/* 800583F4 000551F4  38 00 00 00 */	li r0, 0
/* 800583F8 000551F8  7F E3 FB 78 */	mr r3, r31
/* 800583FC 000551FC  90 0D 8E 88 */	stw r0, gFXSurfaceFlags-_SDA_BASE_(r13)
/* 80058400 00055200  81 8D 89 30 */	lwz r12, gAtomicRenderCallBack-_SDA_BASE_(r13)
/* 80058404 00055204  7D 89 03 A6 */	mtctr r12
/* 80058408 00055208  4E 80 04 21 */	bctrl 
lbl_8005840C:
/* 8005840C 0005520C  80 8D 81 80 */	lwz r4, lbl_803CAA80-_SDA_BASE_(r13)
/* 80058410 00055210  80 04 00 D4 */	lwz r0, 0xd4(r4)
/* 80058414 00055214  28 00 00 00 */	cmplwi r0, 0
/* 80058418 00055218  41 82 00 74 */	beq lbl_8005848C
/* 8005841C 0005521C  C0 22 89 DC */	lfs f1, lbl_803CD35C-_SDA2_BASE_(r2)
/* 80058420 00055220  7F E3 FB 78 */	mr r3, r31
/* 80058424 00055224  C0 04 00 CC */	lfs f0, 0xcc(r4)
/* 80058428 00055228  C0 44 00 D0 */	lfs f2, 0xd0(r4)
/* 8005842C 0005522C  EC 21 00 32 */	fmuls f1, f1, f0
/* 80058430 00055230  C0 02 89 C8 */	lfs f0, lbl_803CD348-_SDA2_BASE_(r2)
/* 80058434 00055234  EF C2 07 F2 */	fmuls f30, f2, f31
/* 80058438 00055238  EC 01 07 FA */	fmadds f0, f1, f31, f0
/* 8005843C 0005523C  FC 00 00 1E */	fctiwz f0, f0
/* 80058440 00055240  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80058444 00055244  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058448 00055248  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 8005844C 0005524C  48 07 0D A1 */	bl iModelSetMaterialAlpha__FP8RpAtomicUc
/* 80058450 00055250  7F E3 FB 78 */	mr r3, r31
/* 80058454 00055254  4B FC EF 99 */	bl AtomicDisableMatFX__FP8RpAtomic
/* 80058458 00055258  38 00 00 10 */	li r0, 0x10
/* 8005845C 0005525C  FC 20 F0 90 */	fmr f1, f30
/* 80058460 00055260  90 0D 8E 88 */	stw r0, gFXSurfaceFlags-_SDA_BASE_(r13)
/* 80058464 00055264  7F E3 FB 78 */	mr r3, r31
/* 80058468 00055268  80 8D 81 80 */	lwz r4, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005846C 0005526C  80 84 00 D4 */	lwz r4, 0xd4(r4)
/* 80058470 00055270  4B FC F5 15 */	bl xFXAtomicEnvMapSetup__FP8RpAtomicUif
/* 80058474 00055274  38 00 00 00 */	li r0, 0
/* 80058478 00055278  7F E3 FB 78 */	mr r3, r31
/* 8005847C 0005527C  90 0D 8E 88 */	stw r0, gFXSurfaceFlags-_SDA_BASE_(r13)
/* 80058480 00055280  81 8D 89 30 */	lwz r12, gAtomicRenderCallBack-_SDA_BASE_(r13)
/* 80058484 00055284  7D 89 03 A6 */	mtctr r12
/* 80058488 00055288  4E 80 04 21 */	bctrl 
lbl_8005848C:
/* 8005848C 0005528C  80 81 00 08 */	lwz r4, 8(r1)
/* 80058490 00055290  38 60 00 14 */	li r3, 0x14
/* 80058494 00055294  48 1D 73 49 */	bl RwRenderStateSet
/* 80058498 00055298  7F E3 FB 78 */	mr r3, r31
/* 8005849C 0005529C  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 800584A0 000552A0  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 800584A4 000552A4  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 800584A8 000552A8  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 800584AC 000552AC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 800584B0 000552B0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800584B4 000552B4  7C 08 03 A6 */	mtlr r0
/* 800584B8 000552B8  38 21 00 40 */	addi r1, r1, 0x40
/* 800584BC 000552BC  4E 80 00 20 */	blr 

/* init_states__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv */
init_states__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv:
/* 800584C0 000552C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800584C4 000552C4  7C 08 02 A6 */	mflr r0
/* 800584C8 000552C8  3C 60 80 2E */	lis r3, lbl_802DBA80@ha
/* 800584CC 000552CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800584D0 000552D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800584D4 000552D4  3B E3 BA 80 */	addi r31, r3, lbl_802DBA80@l
/* 800584D8 000552D8  88 0D 8C 48 */	lbz r0, lbl_803CB548-_SDA_BASE_(r13)
/* 800584DC 000552DC  7C 00 07 75 */	extsb. r0, r0
/* 800584E0 000552E0  40 82 00 14 */	bne lbl_800584F4
/* 800584E4 000552E4  38 7F 0E B4 */	addi r3, r31, 0xeb4
/* 800584E8 000552E8  48 00 04 E9 */	bl __ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_haltFv
/* 800584EC 000552EC  38 00 00 01 */	li r0, 1
/* 800584F0 000552F0  98 0D 8C 48 */	stb r0, lbl_803CB548-_SDA_BASE_(r13)
lbl_800584F4:
/* 800584F4 000552F4  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 800584F8 000552F8  38 1F 0E B4 */	addi r0, r31, 0xeb4
/* 800584FC 000552FC  38 63 C2 A4 */	addi r3, r3, shared__13cruise_bubble@l
/* 80058500 00055300  90 03 00 10 */	stw r0, 0x10(r3)
/* 80058504 00055304  88 0D 8C 49 */	lbz r0, lbl_803CB549-_SDA_BASE_(r13)
/* 80058508 00055308  7C 00 07 75 */	extsb. r0, r0
/* 8005850C 0005530C  40 82 00 14 */	bne lbl_80058520
/* 80058510 00055310  38 7F 0E D0 */	addi r3, r31, 0xed0
/* 80058514 00055314  48 00 04 7D */	bl __ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_player_aimFv
/* 80058518 00055318  38 00 00 01 */	li r0, 1
/* 8005851C 0005531C  98 0D 8C 49 */	stb r0, lbl_803CB549-_SDA_BASE_(r13)
lbl_80058520:
/* 80058520 00055320  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 80058524 00055324  38 1F 0E D0 */	addi r0, r31, 0xed0
/* 80058528 00055328  38 63 C2 A4 */	addi r3, r3, shared__13cruise_bubble@l
/* 8005852C 0005532C  90 03 00 14 */	stw r0, 0x14(r3)
/* 80058530 00055330  88 0D 8C 4A */	lbz r0, lbl_803CB54A-_SDA_BASE_(r13)
/* 80058534 00055334  7C 00 07 75 */	extsb. r0, r0
/* 80058538 00055338  40 82 00 14 */	bne lbl_8005854C
/* 8005853C 0005533C  38 7F 0E E4 */	addi r3, r31, 0xee4
/* 80058540 00055340  48 00 04 11 */	bl __ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_fireFv
/* 80058544 00055344  38 00 00 01 */	li r0, 1
/* 80058548 00055348  98 0D 8C 4A */	stb r0, lbl_803CB54A-_SDA_BASE_(r13)
lbl_8005854C:
/* 8005854C 0005534C  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 80058550 00055350  38 1F 0E E4 */	addi r0, r31, 0xee4
/* 80058554 00055354  38 63 C2 A4 */	addi r3, r3, shared__13cruise_bubble@l
/* 80058558 00055358  90 03 00 18 */	stw r0, 0x18(r3)
/* 8005855C 0005535C  88 0D 8C 4B */	lbz r0, lbl_803CB54B-_SDA_BASE_(r13)
/* 80058560 00055360  7C 00 07 75 */	extsb. r0, r0
/* 80058564 00055364  40 82 00 14 */	bne lbl_80058578
/* 80058568 00055368  38 6D 8C 4C */	addi r3, r13, lbl_803CB54C-_SDA_BASE_
/* 8005856C 0005536C  48 00 03 A5 */	bl __ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_waitFv
/* 80058570 00055370  38 00 00 01 */	li r0, 1
/* 80058574 00055374  98 0D 8C 4B */	stb r0, lbl_803CB54B-_SDA_BASE_(r13)
lbl_80058578:
/* 80058578 00055378  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005857C 0005537C  38 0D 8C 4C */	addi r0, r13, lbl_803CB54C-_SDA_BASE_
/* 80058580 00055380  38 63 C2 A4 */	addi r3, r3, shared__13cruise_bubble@l
/* 80058584 00055384  90 03 00 1C */	stw r0, 0x1c(r3)
/* 80058588 00055388  88 0D 8C 54 */	lbz r0, lbl_803CB554-_SDA_BASE_(r13)
/* 8005858C 0005538C  7C 00 07 75 */	extsb. r0, r0
/* 80058590 00055390  40 82 00 14 */	bne lbl_800585A4
/* 80058594 00055394  38 6D 8C 58 */	addi r3, r13, lbl_803CB558-_SDA_BASE_
/* 80058598 00055398  48 00 03 39 */	bl __ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_missle_appearFv
/* 8005859C 0005539C  38 00 00 01 */	li r0, 1
/* 800585A0 000553A0  98 0D 8C 54 */	stb r0, lbl_803CB554-_SDA_BASE_(r13)
lbl_800585A4:
/* 800585A4 000553A4  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 800585A8 000553A8  38 0D 8C 58 */	addi r0, r13, lbl_803CB558-_SDA_BASE_
/* 800585AC 000553AC  38 63 C2 A4 */	addi r3, r3, shared__13cruise_bubble@l
/* 800585B0 000553B0  90 03 00 20 */	stw r0, 0x20(r3)
/* 800585B4 000553B4  88 0D 8C 60 */	lbz r0, lbl_803CB560-_SDA_BASE_(r13)
/* 800585B8 000553B8  7C 00 07 75 */	extsb. r0, r0
/* 800585BC 000553BC  40 82 00 14 */	bne lbl_800585D0
/* 800585C0 000553C0  38 7F 0E F0 */	addi r3, r31, 0xef0
/* 800585C4 000553C4  48 00 02 CD */	bl __ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFv
/* 800585C8 000553C8  38 00 00 01 */	li r0, 1
/* 800585CC 000553CC  98 0D 8C 60 */	stb r0, lbl_803CB560-_SDA_BASE_(r13)
lbl_800585D0:
/* 800585D0 000553D0  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 800585D4 000553D4  38 1F 0E F0 */	addi r0, r31, 0xef0
/* 800585D8 000553D8  38 63 C2 A4 */	addi r3, r3, shared__13cruise_bubble@l
/* 800585DC 000553DC  90 03 00 24 */	stw r0, 0x24(r3)
/* 800585E0 000553E0  88 0D 8C 61 */	lbz r0, lbl_803CB561-_SDA_BASE_(r13)
/* 800585E4 000553E4  7C 00 07 75 */	extsb. r0, r0
/* 800585E8 000553E8  40 82 00 14 */	bne lbl_800585FC
/* 800585EC 000553EC  38 7F 0F 2C */	addi r3, r31, 0xf2c
/* 800585F0 000553F0  48 00 02 61 */	bl __ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFv
/* 800585F4 000553F4  38 00 00 01 */	li r0, 1
/* 800585F8 000553F8  98 0D 8C 61 */	stb r0, lbl_803CB561-_SDA_BASE_(r13)
lbl_800585FC:
/* 800585FC 000553FC  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 80058600 00055400  38 1F 0F 2C */	addi r0, r31, 0xf2c
/* 80058604 00055404  38 63 C2 A4 */	addi r3, r3, shared__13cruise_bubble@l
/* 80058608 00055408  90 03 00 28 */	stw r0, 0x28(r3)
/* 8005860C 0005540C  88 0D 8C 62 */	lbz r0, lbl_803CB562-_SDA_BASE_(r13)
/* 80058610 00055410  7C 00 07 75 */	extsb. r0, r0
/* 80058614 00055414  40 82 00 14 */	bne lbl_80058628
/* 80058618 00055418  38 7F 0F 38 */	addi r3, r31, 0xf38
/* 8005861C 0005541C  48 00 01 F5 */	bl __ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimFv
/* 80058620 00055420  38 00 00 01 */	li r0, 1
/* 80058624 00055424  98 0D 8C 62 */	stb r0, lbl_803CB562-_SDA_BASE_(r13)
lbl_80058628:
/* 80058628 00055428  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005862C 0005542C  38 1F 0F 38 */	addi r0, r31, 0xf38
/* 80058630 00055430  38 63 C2 A4 */	addi r3, r3, shared__13cruise_bubble@l
/* 80058634 00055434  90 03 00 2C */	stw r0, 0x2c(r3)
/* 80058638 00055438  88 0D 8C 63 */	lbz r0, lbl_803CB563-_SDA_BASE_(r13)
/* 8005863C 0005543C  7C 00 07 75 */	extsb. r0, r0
/* 80058640 00055440  40 82 00 14 */	bne lbl_80058654
/* 80058644 00055444  38 7F 0F 80 */	addi r3, r31, 0xf80
/* 80058648 00055448  48 00 01 89 */	bl __ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18state_camera_seizeFv
/* 8005864C 0005544C  38 00 00 01 */	li r0, 1
/* 80058650 00055450  98 0D 8C 63 */	stb r0, lbl_803CB563-_SDA_BASE_(r13)
lbl_80058654:
/* 80058654 00055454  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 80058658 00055458  38 1F 0F 80 */	addi r0, r31, 0xf80
/* 8005865C 0005545C  38 63 C2 A4 */	addi r3, r3, shared__13cruise_bubble@l
/* 80058660 00055460  90 03 00 30 */	stw r0, 0x30(r3)
/* 80058664 00055464  88 0D 8C 64 */	lbz r0, lbl_803CB564-_SDA_BASE_(r13)
/* 80058668 00055468  7C 00 07 75 */	extsb. r0, r0
/* 8005866C 0005546C  40 82 00 14 */	bne lbl_80058680
/* 80058670 00055470  38 7F 0F D4 */	addi r3, r31, 0xfd4
/* 80058674 00055474  48 00 01 1D */	bl __ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attachFv
/* 80058678 00055478  38 00 00 01 */	li r0, 1
/* 8005867C 0005547C  98 0D 8C 64 */	stb r0, lbl_803CB564-_SDA_BASE_(r13)
lbl_80058680:
/* 80058680 00055480  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 80058684 00055484  38 1F 0F D4 */	addi r0, r31, 0xfd4
/* 80058688 00055488  38 63 C2 A4 */	addi r3, r3, shared__13cruise_bubble@l
/* 8005868C 0005548C  90 03 00 34 */	stw r0, 0x34(r3)
/* 80058690 00055490  88 0D 8C 65 */	lbz r0, lbl_803CB565-_SDA_BASE_(r13)
/* 80058694 00055494  7C 00 07 75 */	extsb. r0, r0
/* 80058698 00055498  40 82 00 14 */	bne lbl_800586AC
/* 8005869C 0005549C  38 7F 0F E0 */	addi r3, r31, 0xfe0
/* 800586A0 000554A0  48 00 00 B1 */	bl __ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyFv
/* 800586A4 000554A4  38 00 00 01 */	li r0, 1
/* 800586A8 000554A8  98 0D 8C 65 */	stb r0, lbl_803CB565-_SDA_BASE_(r13)
lbl_800586AC:
/* 800586AC 000554AC  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 800586B0 000554B0  38 1F 0F E0 */	addi r0, r31, 0xfe0
/* 800586B4 000554B4  38 63 C2 A4 */	addi r3, r3, shared__13cruise_bubble@l
/* 800586B8 000554B8  90 03 00 38 */	stw r0, 0x38(r3)
/* 800586BC 000554BC  88 0D 8C 66 */	lbz r0, lbl_803CB566-_SDA_BASE_(r13)
/* 800586C0 000554C0  7C 00 07 75 */	extsb. r0, r0
/* 800586C4 000554C4  40 82 00 14 */	bne lbl_800586D8
/* 800586C8 000554C8  38 7F 11 F0 */	addi r3, r31, 0x11f0
/* 800586CC 000554CC  48 00 00 31 */	bl __ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_camera_restoreFv
/* 800586D0 000554D0  38 00 00 01 */	li r0, 1
/* 800586D4 000554D4  98 0D 8C 66 */	stb r0, lbl_803CB566-_SDA_BASE_(r13)
lbl_800586D8:
/* 800586D8 000554D8  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 800586DC 000554DC  38 1F 11 F0 */	addi r0, r31, 0x11f0
/* 800586E0 000554E0  38 63 C2 A4 */	addi r3, r3, shared__13cruise_bubble@l
/* 800586E4 000554E4  90 03 00 3C */	stw r0, 0x3c(r3)
/* 800586E8 000554E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800586EC 000554EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800586F0 000554F0  7C 08 03 A6 */	mtlr r0
/* 800586F4 000554F4  38 21 00 10 */	addi r1, r1, 0x10
/* 800586F8 000554F8  4E 80 00 20 */	blr 

/* __ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_camera_restoreFv */
__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_camera_restoreFv:
/* 800586FC 000554FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80058700 00055500  7C 08 02 A6 */	mflr r0
/* 80058704 00055504  38 80 00 0B */	li r4, 0xb
/* 80058708 00055508  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005870C 0005550C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80058710 00055510  7C 7F 1B 78 */	mr r31, r3
/* 80058714 00055514  48 00 00 29 */	bl __ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_typeFQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_enum
/* 80058718 00055518  3C 80 80 29 */	lis r4, __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_camera_restore@ha
/* 8005871C 0005551C  7F E3 FB 78 */	mr r3, r31
/* 80058720 00055520  38 04 C6 20 */	addi r0, r4, __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_camera_restore@l
/* 80058724 00055524  90 1F 00 04 */	stw r0, 4(r31)
/* 80058728 00055528  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005872C 0005552C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058730 00055530  7C 08 03 A6 */	mtlr r0
/* 80058734 00055534  38 21 00 10 */	addi r1, r1, 0x10
/* 80058738 00055538  4E 80 00 20 */	blr 

/* __ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_enum */
__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_typeFQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_enum:
/* 8005873C 0005553C  3C A0 80 29 */	lis r5, __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_type@ha
/* 80058740 00055540  38 05 C6 04 */	addi r0, r5, __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_type@l
/* 80058744 00055544  90 03 00 04 */	stw r0, 4(r3)
/* 80058748 00055548  90 83 00 00 */	stw r4, 0(r3)
/* 8005874C 0005554C  4E 80 00 20 */	blr 

/* __ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyFv */
__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyFv:
/* 80058750 00055550  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80058754 00055554  7C 08 02 A6 */	mflr r0
/* 80058758 00055558  38 80 00 0A */	li r4, 0xa
/* 8005875C 0005555C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80058760 00055560  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80058764 00055564  7C 7F 1B 78 */	mr r31, r3
/* 80058768 00055568  4B FF FF D5 */	bl __ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_typeFQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_enum
/* 8005876C 0005556C  3C 80 80 29 */	lis r4, __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_survey@ha
/* 80058770 00055570  7F E3 FB 78 */	mr r3, r31
/* 80058774 00055574  38 04 C5 E8 */	addi r0, r4, __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_survey@l
/* 80058778 00055578  90 1F 00 04 */	stw r0, 4(r31)
/* 8005877C 0005557C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80058780 00055580  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058784 00055584  7C 08 03 A6 */	mtlr r0
/* 80058788 00055588  38 21 00 10 */	addi r1, r1, 0x10
/* 8005878C 0005558C  4E 80 00 20 */	blr 

/* __ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attachFv */
__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attachFv:
/* 80058790 00055590  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80058794 00055594  7C 08 02 A6 */	mflr r0
/* 80058798 00055598  38 80 00 09 */	li r4, 9
/* 8005879C 0005559C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800587A0 000555A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800587A4 000555A4  7C 7F 1B 78 */	mr r31, r3
/* 800587A8 000555A8  4B FF FF 95 */	bl __ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_typeFQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_enum
/* 800587AC 000555AC  3C 80 80 29 */	lis r4, __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attach@ha
/* 800587B0 000555B0  7F E3 FB 78 */	mr r3, r31
/* 800587B4 000555B4  38 04 C5 CC */	addi r0, r4, __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attach@l
/* 800587B8 000555B8  90 1F 00 04 */	stw r0, 4(r31)
/* 800587BC 000555BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800587C0 000555C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800587C4 000555C4  7C 08 03 A6 */	mtlr r0
/* 800587C8 000555C8  38 21 00 10 */	addi r1, r1, 0x10
/* 800587CC 000555CC  4E 80 00 20 */	blr 

/* __ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18state_camera_seizeFv */
__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18state_camera_seizeFv:
/* 800587D0 000555D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800587D4 000555D4  7C 08 02 A6 */	mflr r0
/* 800587D8 000555D8  38 80 00 08 */	li r4, 8
/* 800587DC 000555DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800587E0 000555E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800587E4 000555E4  7C 7F 1B 78 */	mr r31, r3
/* 800587E8 000555E8  4B FF FF 55 */	bl __ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_typeFQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_enum
/* 800587EC 000555EC  3C 80 80 29 */	lis r4, __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18state_camera_seize@ha
/* 800587F0 000555F0  7F E3 FB 78 */	mr r3, r31
/* 800587F4 000555F4  38 04 C5 B0 */	addi r0, r4, __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18state_camera_seize@l
/* 800587F8 000555F8  90 1F 00 04 */	stw r0, 4(r31)
/* 800587FC 000555FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80058800 00055600  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058804 00055604  7C 08 03 A6 */	mtlr r0
/* 80058808 00055608  38 21 00 10 */	addi r1, r1, 0x10
/* 8005880C 0005560C  4E 80 00 20 */	blr 

/* __ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimFv */
__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimFv:
/* 80058810 00055610  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80058814 00055614  7C 08 02 A6 */	mflr r0
/* 80058818 00055618  38 80 00 07 */	li r4, 7
/* 8005881C 0005561C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80058820 00055620  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80058824 00055624  7C 7F 1B 78 */	mr r31, r3
/* 80058828 00055628  4B FF FF 15 */	bl __ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_typeFQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_enum
/* 8005882C 0005562C  3C 80 80 29 */	lis r4, __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aim@ha
/* 80058830 00055630  7F E3 FB 78 */	mr r3, r31
/* 80058834 00055634  38 04 C5 94 */	addi r0, r4, __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aim@l
/* 80058838 00055638  90 1F 00 04 */	stw r0, 4(r31)
/* 8005883C 0005563C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80058840 00055640  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058844 00055644  7C 08 03 A6 */	mtlr r0
/* 80058848 00055648  38 21 00 10 */	addi r1, r1, 0x10
/* 8005884C 0005564C  4E 80 00 20 */	blr 

/* __ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFv */
__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFv:
/* 80058850 00055650  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80058854 00055654  7C 08 02 A6 */	mflr r0
/* 80058858 00055658  38 80 00 06 */	li r4, 6
/* 8005885C 0005565C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80058860 00055660  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80058864 00055664  7C 7F 1B 78 */	mr r31, r3
/* 80058868 00055668  4B FF FE D5 */	bl __ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_typeFQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_enum
/* 8005886C 0005566C  3C 80 80 29 */	lis r4, __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explode@ha
/* 80058870 00055670  7F E3 FB 78 */	mr r3, r31
/* 80058874 00055674  38 04 C5 78 */	addi r0, r4, __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explode@l
/* 80058878 00055678  90 1F 00 04 */	stw r0, 4(r31)
/* 8005887C 0005567C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80058880 00055680  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058884 00055684  7C 08 03 A6 */	mtlr r0
/* 80058888 00055688  38 21 00 10 */	addi r1, r1, 0x10
/* 8005888C 0005568C  4E 80 00 20 */	blr 

/* __ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFv */
__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFv:
/* 80058890 00055690  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80058894 00055694  7C 08 02 A6 */	mflr r0
/* 80058898 00055698  38 80 00 05 */	li r4, 5
/* 8005889C 0005569C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800588A0 000556A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800588A4 000556A4  7C 7F 1B 78 */	mr r31, r3
/* 800588A8 000556A8  4B FF FE 95 */	bl __ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_typeFQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_enum
/* 800588AC 000556AC  3C 80 80 29 */	lis r4, __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_fly@ha
/* 800588B0 000556B0  7F E3 FB 78 */	mr r3, r31
/* 800588B4 000556B4  38 04 C5 5C */	addi r0, r4, __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_fly@l
/* 800588B8 000556B8  90 1F 00 04 */	stw r0, 4(r31)
/* 800588BC 000556BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800588C0 000556C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800588C4 000556C4  7C 08 03 A6 */	mtlr r0
/* 800588C8 000556C8  38 21 00 10 */	addi r1, r1, 0x10
/* 800588CC 000556CC  4E 80 00 20 */	blr 

/* __ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_missle_appearFv */
__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_missle_appearFv:
/* 800588D0 000556D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800588D4 000556D4  7C 08 02 A6 */	mflr r0
/* 800588D8 000556D8  38 80 00 04 */	li r4, 4
/* 800588DC 000556DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800588E0 000556E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800588E4 000556E4  7C 7F 1B 78 */	mr r31, r3
/* 800588E8 000556E8  4B FF FE 55 */	bl __ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_typeFQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_enum
/* 800588EC 000556EC  3C 80 80 29 */	lis r4, __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_missle_appear@ha
/* 800588F0 000556F0  7F E3 FB 78 */	mr r3, r31
/* 800588F4 000556F4  38 04 C5 40 */	addi r0, r4, __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_missle_appear@l
/* 800588F8 000556F8  90 1F 00 04 */	stw r0, 4(r31)
/* 800588FC 000556FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80058900 00055700  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058904 00055704  7C 08 03 A6 */	mtlr r0
/* 80058908 00055708  38 21 00 10 */	addi r1, r1, 0x10
/* 8005890C 0005570C  4E 80 00 20 */	blr 

/* __ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_waitFv */
__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_waitFv:
/* 80058910 00055710  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80058914 00055714  7C 08 02 A6 */	mflr r0
/* 80058918 00055718  38 80 00 03 */	li r4, 3
/* 8005891C 0005571C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80058920 00055720  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80058924 00055724  7C 7F 1B 78 */	mr r31, r3
/* 80058928 00055728  4B FF FE 15 */	bl __ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_typeFQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_enum
/* 8005892C 0005572C  3C 80 80 29 */	lis r4, __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_wait@ha
/* 80058930 00055730  7F E3 FB 78 */	mr r3, r31
/* 80058934 00055734  38 04 C5 24 */	addi r0, r4, __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_wait@l
/* 80058938 00055738  90 1F 00 04 */	stw r0, 4(r31)
/* 8005893C 0005573C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80058940 00055740  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058944 00055744  7C 08 03 A6 */	mtlr r0
/* 80058948 00055748  38 21 00 10 */	addi r1, r1, 0x10
/* 8005894C 0005574C  4E 80 00 20 */	blr 

/* __ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_fireFv */
__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_fireFv:
/* 80058950 00055750  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80058954 00055754  7C 08 02 A6 */	mflr r0
/* 80058958 00055758  38 80 00 02 */	li r4, 2
/* 8005895C 0005575C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80058960 00055760  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80058964 00055764  7C 7F 1B 78 */	mr r31, r3
/* 80058968 00055768  4B FF FD D5 */	bl __ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_typeFQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_enum
/* 8005896C 0005576C  3C 80 80 29 */	lis r4, __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_fire@ha
/* 80058970 00055770  7F E3 FB 78 */	mr r3, r31
/* 80058974 00055774  38 04 C5 08 */	addi r0, r4, __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_fire@l
/* 80058978 00055778  90 1F 00 04 */	stw r0, 4(r31)
/* 8005897C 0005577C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80058980 00055780  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058984 00055784  7C 08 03 A6 */	mtlr r0
/* 80058988 00055788  38 21 00 10 */	addi r1, r1, 0x10
/* 8005898C 0005578C  4E 80 00 20 */	blr 

/* __ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_player_aimFv */
__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_player_aimFv:
/* 80058990 00055790  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80058994 00055794  7C 08 02 A6 */	mflr r0
/* 80058998 00055798  38 80 00 01 */	li r4, 1
/* 8005899C 0005579C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800589A0 000557A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800589A4 000557A4  7C 7F 1B 78 */	mr r31, r3
/* 800589A8 000557A8  4B FF FD 95 */	bl __ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_typeFQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_enum
/* 800589AC 000557AC  3C 80 80 29 */	lis r4, __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_player_aim@ha
/* 800589B0 000557B0  7F E3 FB 78 */	mr r3, r31
/* 800589B4 000557B4  38 04 C4 EC */	addi r0, r4, __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_player_aim@l
/* 800589B8 000557B8  90 1F 00 04 */	stw r0, 4(r31)
/* 800589BC 000557BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800589C0 000557C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800589C4 000557C4  7C 08 03 A6 */	mtlr r0
/* 800589C8 000557C8  38 21 00 10 */	addi r1, r1, 0x10
/* 800589CC 000557CC  4E 80 00 20 */	blr 

/* __ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_haltFv */
__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_haltFv:
/* 800589D0 000557D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800589D4 000557D4  7C 08 02 A6 */	mflr r0
/* 800589D8 000557D8  38 80 00 00 */	li r4, 0
/* 800589DC 000557DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800589E0 000557E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800589E4 000557E4  7C 7F 1B 78 */	mr r31, r3
/* 800589E8 000557E8  4B FF FD 55 */	bl __ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_typeFQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_enum
/* 800589EC 000557EC  3C 80 80 29 */	lis r4, __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_halt@ha
/* 800589F0 000557F0  7F E3 FB 78 */	mr r3, r31
/* 800589F4 000557F4  38 04 C4 D0 */	addi r0, r4, __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_halt@l
/* 800589F8 000557F8  90 1F 00 04 */	stw r0, 4(r31)
/* 800589FC 000557FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80058A00 00055800  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058A04 00055804  7C 08 03 A6 */	mtlr r0
/* 80058A08 00055808  38 21 00 10 */	addi r1, r1, 0x10
/* 80058A0C 0005580C  4E 80 00 20 */	blr 

/* reset_wake_ribbons__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv */
/* changed from ... */
/* reset_wake_ribbons__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv: */
/* ... so linker can find it */
reset_wake_ribbons__13cruise_bubbleFv:
/* 80058A94 00055894  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80058A98 00055898  7C 08 02 A6 */	mflr r0
/* 80058A9C 0005589C  3C 60 80 2E */	lis r3, wake_ribbon__13cruise_bubble@ha
/* 80058AA0 000558A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80058AA4 000558A4  38 63 C6 38 */	addi r3, r3, wake_ribbon__13cruise_bubble@l
/* 80058AA8 000558A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80058AAC 000558AC  4B FD 19 59 */	bl set_default_config__9xFXRibbonFv
/* 80058AB0 000558B0  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 80058AB4 000558B4  3C 80 80 2E */	lis r4, wake_ribbon__13cruise_bubble@ha
/* 80058AB8 000558B8  80 03 C2 A4 */	lwz r0, shared__13cruise_bubble@l(r3)
/* 80058ABC 000558BC  38 64 C6 38 */	addi r3, r4, wake_ribbon__13cruise_bubble@l
/* 80058AC0 000558C0  38 A0 00 05 */	li r5, 5
/* 80058AC4 000558C4  38 80 00 02 */	li r4, 2
/* 80058AC8 000558C8  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 80058ACC 000558CC  90 A3 00 04 */	stw r5, 4(r3)
/* 80058AD0 000558D0  90 83 00 08 */	stw r4, 8(r3)
/* 80058AD4 000558D4  40 82 00 70 */	bne lbl_80058B44
/* 80058AD8 000558D8  3C 80 80 25 */	lis r4, stringBase0__13cruise_bubble@ha
/* 80058ADC 000558DC  38 84 53 3C */	addi r4, r4, stringBase0__13cruise_bubble@l
/* 80058AE0 000558E0  38 84 01 7B */	addi r4, r4, 0x17b
/* 80058AE4 000558E4  4B FD 1F 29 */	bl set_texture__9xFXRibbonFPCc
/* 80058AE8 000558E8  3C 80 80 2E */	lis r4, wake_ribbon__13cruise_bubble@ha
/* 80058AEC 000558EC  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 80058AF0 000558F0  38 84 C6 38 */	addi r4, r4, wake_ribbon__13cruise_bubble@l
/* 80058AF4 000558F4  3B E4 01 40 */	addi r31, r4, 0x140
/* 80058AF8 000558F8  38 83 53 3C */	addi r4, r3, stringBase0__13cruise_bubble@l
/* 80058AFC 000558FC  7F E3 FB 78 */	mr r3, r31
/* 80058B00 00055900  38 84 01 7B */	addi r4, r4, 0x17b
/* 80058B04 00055904  4B FD 1F 09 */	bl set_texture__9xFXRibbonFPCc
/* 80058B08 00055908  3C 60 80 2E */	lis r3, wake_ribbon__13cruise_bubble@ha
/* 80058B0C 0005590C  3C 80 80 25 */	lis r4, wake_ribbon_curve__13cruise_bubble@ha
/* 80058B10 00055910  38 63 C6 38 */	addi r3, r3, wake_ribbon__13cruise_bubble@l
/* 80058B14 00055914  38 A0 00 02 */	li r5, 2
/* 80058B18 00055918  38 84 52 3C */	addi r4, r4, wake_ribbon_curve__13cruise_bubble@l
/* 80058B1C 0005591C  4B FD 19 89 */	bl set_curve__9xFXRibbonFPCQ29xFXRibbon10curve_nodeUl
/* 80058B20 00055920  3C 80 80 25 */	lis r4, wake_ribbon_curve__13cruise_bubble@ha
/* 80058B24 00055924  7F E3 FB 78 */	mr r3, r31
/* 80058B28 00055928  38 84 52 3C */	addi r4, r4, wake_ribbon_curve__13cruise_bubble@l
/* 80058B2C 0005592C  38 A0 00 02 */	li r5, 2
/* 80058B30 00055930  4B FD 19 75 */	bl set_curve__9xFXRibbonFPCQ29xFXRibbon10curve_nodeUl
/* 80058B34 00055934  C0 02 89 CC */	lfs f0, zEntCruiseBubble_f_3_0-_SDA2_BASE_(r2)
/* 80058B38 00055938  3C 60 80 2E */	lis r3, wake_ribbon__13cruise_bubble@ha
/* 80058B3C 0005593C  D0 03 C6 38 */	stfs f0, wake_ribbon__13cruise_bubble@l(r3)
/* 80058B40 00055940  48 00 00 6C */	b lbl_80058BAC
lbl_80058B44:
/* 80058B44 00055944  3C 80 80 25 */	lis r4, stringBase0__13cruise_bubble@ha
/* 80058B48 00055948  38 84 53 3C */	addi r4, r4, stringBase0__13cruise_bubble@l
/* 80058B4C 0005594C  38 84 01 7B */	addi r4, r4, 0x17b
/* 80058B50 00055950  4B FD 1E BD */	bl set_texture__9xFXRibbonFPCc
/* 80058B54 00055954  3C 80 80 2E */	lis r4, wake_ribbon__13cruise_bubble@ha
/* 80058B58 00055958  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 80058B5C 0005595C  38 84 C6 38 */	addi r4, r4, wake_ribbon__13cruise_bubble@l
/* 80058B60 00055960  3B E4 01 40 */	addi r31, r4, 0x140
/* 80058B64 00055964  38 83 53 3C */	addi r4, r3, stringBase0__13cruise_bubble@l
/* 80058B68 00055968  7F E3 FB 78 */	mr r3, r31
/* 80058B6C 0005596C  38 84 01 7B */	addi r4, r4, 0x17b
/* 80058B70 00055970  4B FD 1E 9D */	bl set_texture__9xFXRibbonFPCc
/* 80058B74 00055974  3C 60 80 2E */	lis r3, wake_ribbon__13cruise_bubble@ha
/* 80058B78 00055978  3C 80 80 25 */	lis r4, cheat_wake_ribbon_curve__13cruise_bubble@ha
/* 80058B7C 0005597C  38 63 C6 38 */	addi r3, r3, wake_ribbon__13cruise_bubble@l
/* 80058B80 00055980  38 A0 00 02 */	li r5, 2
/* 80058B84 00055984  38 84 52 54 */	addi r4, r4, cheat_wake_ribbon_curve__13cruise_bubble@l
/* 80058B88 00055988  4B FD 19 1D */	bl set_curve__9xFXRibbonFPCQ29xFXRibbon10curve_nodeUl
/* 80058B8C 0005598C  3C 80 80 25 */	lis r4, cheat_wake_ribbon_curve__13cruise_bubble@ha
/* 80058B90 00055990  7F E3 FB 78 */	mr r3, r31
/* 80058B94 00055994  38 84 52 54 */	addi r4, r4, cheat_wake_ribbon_curve__13cruise_bubble@l
/* 80058B98 00055998  38 A0 00 02 */	li r5, 2
/* 80058B9C 0005599C  4B FD 19 09 */	bl set_curve__9xFXRibbonFPCQ29xFXRibbon10curve_nodeUl
/* 80058BA0 000559A0  C0 02 89 CC */	lfs f0, zEntCruiseBubble_f_3_0-_SDA2_BASE_(r2)
/* 80058BA4 000559A4  3C 60 80 2E */	lis r3, wake_ribbon__13cruise_bubble@ha
/* 80058BA8 000559A8  D0 03 C6 38 */	stfs f0, wake_ribbon__13cruise_bubble@l(r3)
lbl_80058BAC:
/* 80058BAC 000559AC  3C 60 80 2E */	lis r3, wake_ribbon__13cruise_bubble@ha
/* 80058BB0 000559B0  C0 02 89 C0 */	lfs f0, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 80058BB4 000559B4  38 83 C6 38 */	addi r4, r3, wake_ribbon__13cruise_bubble@l
/* 80058BB8 000559B8  3B E4 01 40 */	addi r31, r4, 0x140
/* 80058BBC 000559BC  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 80058BC0 000559C0  7F E3 FB 78 */	mr r3, r31
/* 80058BC4 000559C4  48 00 00 2D */	bl __as__Q29xFXRibbon6configFRCQ29xFXRibbon6config
/* 80058BC8 000559C8  3C 60 80 2E */	lis r3, wake_ribbon__13cruise_bubble@ha
/* 80058BCC 000559CC  38 63 C6 38 */	addi r3, r3, wake_ribbon__13cruise_bubble@l
/* 80058BD0 000559D0  4B FD 18 75 */	bl refresh_config__9xFXRibbonFv
/* 80058BD4 000559D4  7F E3 FB 78 */	mr r3, r31
/* 80058BD8 000559D8  4B FD 18 6D */	bl refresh_config__9xFXRibbonFv
/* 80058BDC 000559DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058BE0 000559E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80058BE4 000559E4  7C 08 03 A6 */	mtlr r0
/* 80058BE8 000559E8  38 21 00 10 */	addi r1, r1, 0x10
/* 80058BEC 000559EC  4E 80 00 20 */	blr 

/* reset_explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv */
reset_explode_decal__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv:
/* 80058C70 00055A70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80058C74 00055A74  7C 08 02 A6 */	mflr r0
/* 80058C78 00055A78  3C 60 80 2E */	lis r3, lbl_802DC8B8@ha
/* 80058C7C 00055A7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80058C80 00055A80  38 63 C8 B8 */	addi r3, r3, lbl_802DC8B8@l
/* 80058C84 00055A84  48 12 38 A9 */	bl set_default_config__13xDecalEmitterFv
/* 80058C88 00055A88  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 80058C8C 00055A8C  3C 80 80 2E */	lis r4, lbl_802DC8B8@ha
/* 80058C90 00055A90  80 03 C2 A4 */	lwz r0, shared__13cruise_bubble@l(r3)
/* 80058C94 00055A94  38 64 C8 B8 */	addi r3, r4, lbl_802DC8B8@l
/* 80058C98 00055A98  38 C0 00 03 */	li r6, 3
/* 80058C9C 00055A9C  38 A0 00 05 */	li r5, 5
/* 80058CA0 00055AA0  38 80 00 02 */	li r4, 2
/* 80058CA4 00055AA4  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 80058CA8 00055AA8  90 C3 00 00 */	stw r6, 0(r3)
/* 80058CAC 00055AAC  90 A3 00 08 */	stw r5, 8(r3)
/* 80058CB0 00055AB0  90 83 00 0C */	stw r4, 0xc(r3)
/* 80058CB4 00055AB4  40 82 00 38 */	bne lbl_80058CEC
/* 80058CB8 00055AB8  C0 02 89 C8 */	lfs f0, lbl_803CD348-_SDA2_BASE_(r2)
/* 80058CBC 00055ABC  3C 80 80 25 */	lis r4, lbl_8025526C@ha
/* 80058CC0 00055AC0  38 84 52 6C */	addi r4, r4, lbl_8025526C@l
/* 80058CC4 00055AC4  38 A0 00 03 */	li r5, 3
/* 80058CC8 00055AC8  D0 03 00 04 */	stfs f0, 4(r3)
/* 80058CCC 00055ACC  48 12 3A DD */	bl set_curve__13xDecalEmitterFPCQ213xDecalEmitter10curve_nodeUl
/* 80058CD0 00055AD0  3C 80 80 25 */	lis r4, stringBase0__13cruise_bubble@ha
/* 80058CD4 00055AD4  3C 60 80 2E */	lis r3, lbl_802DC8B8@ha
/* 80058CD8 00055AD8  38 84 53 3C */	addi r4, r4, stringBase0__13cruise_bubble@l
/* 80058CDC 00055ADC  38 63 C8 B8 */	addi r3, r3, lbl_802DC8B8@l
/* 80058CE0 00055AE0  38 84 01 E9 */	addi r4, r4, 0x1e9
/* 80058CE4 00055AE4  48 12 38 CD */	bl set_texture__13xDecalEmitterFPCc
/* 80058CE8 00055AE8  48 00 00 34 */	b lbl_80058D1C
lbl_80058CEC:
/* 80058CEC 00055AEC  C0 02 89 C8 */	lfs f0, lbl_803CD348-_SDA2_BASE_(r2)
/* 80058CF0 00055AF0  3C 80 80 25 */	lis r4, lbl_80255290@ha
/* 80058CF4 00055AF4  38 84 52 90 */	addi r4, r4, lbl_80255290@l
/* 80058CF8 00055AF8  38 A0 00 03 */	li r5, 3
/* 80058CFC 00055AFC  D0 03 00 04 */	stfs f0, 4(r3)
/* 80058D00 00055B00  48 12 3A A9 */	bl set_curve__13xDecalEmitterFPCQ213xDecalEmitter10curve_nodeUl
/* 80058D04 00055B04  3C 80 80 25 */	lis r4, stringBase0__13cruise_bubble@ha
/* 80058D08 00055B08  3C 60 80 2E */	lis r3, lbl_802DC8B8@ha
/* 80058D0C 00055B0C  38 84 53 3C */	addi r4, r4, stringBase0__13cruise_bubble@l
/* 80058D10 00055B10  38 63 C8 B8 */	addi r3, r3, lbl_802DC8B8@l
/* 80058D14 00055B14  38 84 01 E9 */	addi r4, r4, 0x1e9
/* 80058D18 00055B18  48 12 38 99 */	bl set_texture__13xDecalEmitterFPCc
lbl_80058D1C:
/* 80058D1C 00055B1C  3C 60 80 2E */	lis r3, lbl_802DC8B8@ha
/* 80058D20 00055B20  38 63 C8 B8 */	addi r3, r3, lbl_802DC8B8@l
/* 80058D24 00055B24  48 12 39 29 */	bl refresh_config__13xDecalEmitterFv
/* 80058D28 00055B28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058D2C 00055B2C  7C 08 03 A6 */	mtlr r0
/* 80058D30 00055B30  38 21 00 10 */	addi r1, r1, 0x10
/* 80058D34 00055B34  4E 80 00 20 */	blr 

/* init_explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv */
init_explode_decal__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv:
/* 80058D38 00055B38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80058D3C 00055B3C  7C 08 02 A6 */	mflr r0
/* 80058D40 00055B40  3C A0 80 25 */	lis r5, stringBase0__13cruise_bubble@ha
/* 80058D44 00055B44  3C 60 80 2E */	lis r3, lbl_802DC8B8@ha
/* 80058D48 00055B48  38 A5 53 3C */	addi r5, r5, stringBase0__13cruise_bubble@l
/* 80058D4C 00055B4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80058D50 00055B50  38 63 C8 B8 */	addi r3, r3, lbl_802DC8B8@l
/* 80058D54 00055B54  38 80 00 01 */	li r4, 1
/* 80058D58 00055B58  38 A5 01 FC */	addi r5, r5, 0x1fc
/* 80058D5C 00055B5C  48 12 37 75 */	bl init__13xDecalEmitterFiPCc
/* 80058D60 00055B60  3C 60 80 2E */	lis r3, lbl_802DC8B8@ha
/* 80058D64 00055B64  38 63 C8 B8 */	addi r3, r3, lbl_802DC8B8@l
/* 80058D68 00055B68  48 12 37 C5 */	bl set_default_config__13xDecalEmitterFv
/* 80058D6C 00055B6C  38 00 00 03 */	li r0, 3
/* 80058D70 00055B70  3C 60 80 2E */	lis r3, lbl_802DC8B8@ha
/* 80058D74 00055B74  94 03 C8 B8 */	stwu r0, lbl_802DC8B8@l(r3)
/* 80058D78 00055B78  3C 80 80 25 */	lis r4, lbl_8025526C@ha
/* 80058D7C 00055B7C  38 C0 00 05 */	li r6, 5
/* 80058D80 00055B80  38 00 00 02 */	li r0, 2
/* 80058D84 00055B84  C0 02 89 C8 */	lfs f0, lbl_803CD348-_SDA2_BASE_(r2)
/* 80058D88 00055B88  38 84 52 6C */	addi r4, r4, lbl_8025526C@l
/* 80058D8C 00055B8C  38 A0 00 03 */	li r5, 3
/* 80058D90 00055B90  D0 03 00 04 */	stfs f0, 4(r3)
/* 80058D94 00055B94  90 C3 00 08 */	stw r6, 8(r3)
/* 80058D98 00055B98  90 03 00 0C */	stw r0, 0xc(r3)
/* 80058D9C 00055B9C  48 12 3A 0D */	bl set_curve__13xDecalEmitterFPCQ213xDecalEmitter10curve_nodeUl
/* 80058DA0 00055BA0  3C 80 80 25 */	lis r4, stringBase0__13cruise_bubble@ha
/* 80058DA4 00055BA4  3C 60 80 2E */	lis r3, lbl_802DC8B8@ha
/* 80058DA8 00055BA8  38 84 53 3C */	addi r4, r4, stringBase0__13cruise_bubble@l
/* 80058DAC 00055BAC  38 63 C8 B8 */	addi r3, r3, lbl_802DC8B8@l
/* 80058DB0 00055BB0  38 84 01 E9 */	addi r4, r4, 0x1e9
/* 80058DB4 00055BB4  48 12 37 FD */	bl set_texture__13xDecalEmitterFPCc
/* 80058DB8 00055BB8  3C 60 80 2E */	lis r3, lbl_802DC8B8@ha
/* 80058DBC 00055BBC  38 63 C8 B8 */	addi r3, r3, lbl_802DC8B8@l
/* 80058DC0 00055BC0  48 12 38 8D */	bl refresh_config__13xDecalEmitterFv
/* 80058DC4 00055BC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058DC8 00055BC8  7C 08 03 A6 */	mtlr r0
/* 80058DCC 00055BCC  38 21 00 10 */	addi r1, r1, 0x10
/* 80058DD0 00055BD0  4E 80 00 20 */	blr 

/* init_shrapnel__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv */
init_shrapnel__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv:
/* 80058DD4 00055BD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80058DD8 00055BD8  7C 08 02 A6 */	mflr r0
/* 80058DDC 00055BDC  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 80058DE0 00055BE0  38 63 53 3C */	addi r3, r3, stringBase0__13cruise_bubble@l
/* 80058DE4 00055BE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80058DE8 00055BE8  38 63 02 14 */	addi r3, r3, 0x214
/* 80058DEC 00055BEC  4B FF 34 29 */	bl xStrHash__FPCc
/* 80058DF0 00055BF0  38 80 00 00 */	li r4, 0
/* 80058DF4 00055BF4  4B FF 29 19 */	bl xSTFindAsset__FUiPUi
/* 80058DF8 00055BF8  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 80058DFC 00055BFC  38 84 C2 A4 */	addi r4, r4, shared__13cruise_bubble@l
/* 80058E00 00055C00  90 64 01 04 */	stw r3, 0x104(r4)
/* 80058E04 00055C04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058E08 00055C08  7C 08 03 A6 */	mtlr r0
/* 80058E0C 00055C0C  38 21 00 10 */	addi r1, r1, 0x10
/* 80058E10 00055C10  4E 80 00 20 */	blr 

/* add_trail_sample__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FRC5xVec3RC5xVec3RC5xVec3RC5xVec3f */
add_trail_sample__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FRC5xVec3RC5xVec3RC5xVec3RC5xVec3f:
/* 80058E14 00055C14  94 21 FE F0 */	stwu r1, -0x110(r1)
/* 80058E18 00055C18  7C 08 02 A6 */	mflr r0
/* 80058E1C 00055C1C  3C E0 80 29 */	lis r7, shared__13cruise_bubble@ha
/* 80058E20 00055C20  90 01 01 14 */	stw r0, 0x114(r1)
/* 80058E24 00055C24  BF 21 00 F4 */	stmw r25, 0xf4(r1)
/* 80058E28 00055C28  3B 47 C2 A4 */	addi r26, r7, shared__13cruise_bubble@l
/* 80058E2C 00055C2C  3C E0 80 25 */	lis r7, lbl_802550B8@ha
/* 80058E30 00055C30  7C 7B 1B 78 */	mr r27, r3
/* 80058E34 00055C34  7C 99 23 78 */	mr r25, r4
/* 80058E38 00055C38  7C BC 2B 78 */	mr r28, r5
/* 80058E3C 00055C3C  7C DD 33 78 */	mr r29, r6
/* 80058E40 00055C40  3B E7 50 B8 */	addi r31, r7, lbl_802550B8@l
/* 80058E44 00055C44  81 0D 81 80 */	lwz r8, lbl_803CAA80-_SDA_BASE_(r13)
/* 80058E48 00055C48  C0 1A 01 10 */	lfs f0, 0x110(r26)
/* 80058E4C 00055C4C  C0 48 00 FC */	lfs f2, 0xfc(r8)
/* 80058E50 00055C50  EC 21 00 BA */	fmadds f1, f1, f2, f0
/* 80058E54 00055C54  D0 3A 01 10 */	stfs f1, 0x110(r26)
/* 80058E58 00055C58  48 19 45 85 */	bl __cvt_fp2unsigned
/* 80058E5C 00055C5C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80058E60 00055C60  41 82 01 E0 */	beq lbl_80059040
/* 80058E64 00055C64  3C 00 43 30 */	lis r0, 0x4330
/* 80058E68 00055C68  81 3F 02 30 */	lwz r9, 0x230(r31)
/* 80058E6C 00055C6C  93 C1 00 E4 */	stw r30, 0xe4(r1)
/* 80058E70 00055C70  7F 63 DB 78 */	mr r3, r27
/* 80058E74 00055C74  81 1F 02 34 */	lwz r8, 0x234(r31)
/* 80058E78 00055C78  7F 84 E3 78 */	mr r4, r28
/* 80058E7C 00055C7C  90 01 00 E0 */	stw r0, 0xe0(r1)
/* 80058E80 00055C80  7F C5 F3 78 */	mr r5, r30
/* 80058E84 00055C84  C8 22 89 E0 */	lfd f1, lbl_803CD360-_SDA2_BASE_(r2)
/* 80058E88 00055C88  38 C1 00 A4 */	addi r6, r1, 0xa4
/* 80058E8C 00055C8C  C8 01 00 E0 */	lfd f0, 0xe0(r1)
/* 80058E90 00055C90  38 E0 00 00 */	li r7, 0
/* 80058E94 00055C94  C0 5A 01 10 */	lfs f2, 0x110(r26)
/* 80058E98 00055C98  EC 00 08 28 */	fsubs f0, f0, f1
/* 80058E9C 00055C9C  80 1F 02 38 */	lwz r0, 0x238(r31)
/* 80058EA0 00055CA0  91 21 00 A4 */	stw r9, 0xa4(r1)
/* 80058EA4 00055CA4  EC 02 00 28 */	fsubs f0, f2, f0
/* 80058EA8 00055CA8  91 01 00 A8 */	stw r8, 0xa8(r1)
/* 80058EAC 00055CAC  90 01 00 AC */	stw r0, 0xac(r1)
/* 80058EB0 00055CB0  D0 1A 01 10 */	stfs f0, 0x110(r26)
/* 80058EB4 00055CB4  48 03 C0 6D */	bl zFX_SpawnBubbleTrail__FPC5xVec3PC5xVec3UiPC5xVec3PC5xVec3
/* 80058EB8 00055CB8  80 AD 81 80 */	lwz r5, lbl_803CAA80-_SDA_BASE_(r13)
/* 80058EBC 00055CBC  7F 24 CB 78 */	mr r4, r25
/* 80058EC0 00055CC0  38 61 00 74 */	addi r3, r1, 0x74
/* 80058EC4 00055CC4  C0 25 01 00 */	lfs f1, 0x100(r5)
/* 80058EC8 00055CC8  4B FB 22 59 */	bl __ml__5xVec3CFf
/* 80058ECC 00055CCC  80 E1 00 74 */	lwz r7, 0x74(r1)
/* 80058ED0 00055CD0  7F A4 EB 78 */	mr r4, r29
/* 80058ED4 00055CD4  80 C1 00 78 */	lwz r6, 0x78(r1)
/* 80058ED8 00055CD8  38 61 00 68 */	addi r3, r1, 0x68
/* 80058EDC 00055CDC  80 01 00 7C */	lwz r0, 0x7c(r1)
/* 80058EE0 00055CE0  80 AD 81 80 */	lwz r5, lbl_803CAA80-_SDA_BASE_(r13)
/* 80058EE4 00055CE4  90 E1 00 98 */	stw r7, 0x98(r1)
/* 80058EE8 00055CE8  C0 25 01 00 */	lfs f1, 0x100(r5)
/* 80058EEC 00055CEC  90 C1 00 9C */	stw r6, 0x9c(r1)
/* 80058EF0 00055CF0  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 80058EF4 00055CF4  4B FB 22 2D */	bl __ml__5xVec3CFf
/* 80058EF8 00055CF8  83 41 00 68 */	lwz r26, 0x68(r1)
/* 80058EFC 00055CFC  7F 64 DB 78 */	mr r4, r27
/* 80058F00 00055D00  81 81 00 6C */	lwz r12, 0x6c(r1)
/* 80058F04 00055D04  38 61 00 5C */	addi r3, r1, 0x5c
/* 80058F08 00055D08  81 61 00 70 */	lwz r11, 0x70(r1)
/* 80058F0C 00055D0C  38 A1 00 98 */	addi r5, r1, 0x98
/* 80058F10 00055D10  81 5F 02 3C */	lwz r10, 0x23c(r31)
/* 80058F14 00055D14  81 3F 02 40 */	lwz r9, 0x240(r31)
/* 80058F18 00055D18  81 1F 02 44 */	lwz r8, 0x244(r31)
/* 80058F1C 00055D1C  80 FF 02 48 */	lwz r7, 0x248(r31)
/* 80058F20 00055D20  80 DF 02 4C */	lwz r6, 0x24c(r31)
/* 80058F24 00055D24  80 1F 02 50 */	lwz r0, 0x250(r31)
/* 80058F28 00055D28  93 41 00 8C */	stw r26, 0x8c(r1)
/* 80058F2C 00055D2C  91 81 00 90 */	stw r12, 0x90(r1)
/* 80058F30 00055D30  91 61 00 94 */	stw r11, 0x94(r1)
/* 80058F34 00055D34  91 41 00 C8 */	stw r10, 0xc8(r1)
/* 80058F38 00055D38  91 21 00 CC */	stw r9, 0xcc(r1)
/* 80058F3C 00055D3C  91 01 00 D0 */	stw r8, 0xd0(r1)
/* 80058F40 00055D40  90 E1 00 D4 */	stw r7, 0xd4(r1)
/* 80058F44 00055D44  90 C1 00 D8 */	stw r6, 0xd8(r1)
/* 80058F48 00055D48  90 01 00 DC */	stw r0, 0xdc(r1)
/* 80058F4C 00055D4C  4B FB C4 95 */	bl __pl__5xVec3CFRC5xVec3
/* 80058F50 00055D50  80 E1 00 5C */	lwz r7, 0x5c(r1)
/* 80058F54 00055D54  7F 64 DB 78 */	mr r4, r27
/* 80058F58 00055D58  80 C1 00 60 */	lwz r6, 0x60(r1)
/* 80058F5C 00055D5C  38 61 00 50 */	addi r3, r1, 0x50
/* 80058F60 00055D60  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80058F64 00055D64  38 A1 00 98 */	addi r5, r1, 0x98
/* 80058F68 00055D68  90 E1 00 C8 */	stw r7, 0xc8(r1)
/* 80058F6C 00055D6C  90 C1 00 CC */	stw r6, 0xcc(r1)
/* 80058F70 00055D70  90 01 00 D0 */	stw r0, 0xd0(r1)
/* 80058F74 00055D74  4B FB 22 59 */	bl __mi__5xVec3CFRC5xVec3
/* 80058F78 00055D78  83 61 00 50 */	lwz r27, 0x50(r1)
/* 80058F7C 00055D7C  7F 84 E3 78 */	mr r4, r28
/* 80058F80 00055D80  81 81 00 54 */	lwz r12, 0x54(r1)
/* 80058F84 00055D84  38 61 00 44 */	addi r3, r1, 0x44
/* 80058F88 00055D88  81 61 00 58 */	lwz r11, 0x58(r1)
/* 80058F8C 00055D8C  38 A1 00 8C */	addi r5, r1, 0x8c
/* 80058F90 00055D90  81 5F 02 54 */	lwz r10, 0x254(r31)
/* 80058F94 00055D94  81 3F 02 58 */	lwz r9, 0x258(r31)
/* 80058F98 00055D98  81 1F 02 5C */	lwz r8, 0x25c(r31)
/* 80058F9C 00055D9C  80 FF 02 60 */	lwz r7, 0x260(r31)
/* 80058FA0 00055DA0  80 DF 02 64 */	lwz r6, 0x264(r31)
/* 80058FA4 00055DA4  80 1F 02 68 */	lwz r0, 0x268(r31)
/* 80058FA8 00055DA8  93 61 00 D4 */	stw r27, 0xd4(r1)
/* 80058FAC 00055DAC  91 81 00 D8 */	stw r12, 0xd8(r1)
/* 80058FB0 00055DB0  91 61 00 DC */	stw r11, 0xdc(r1)
/* 80058FB4 00055DB4  91 41 00 B0 */	stw r10, 0xb0(r1)
/* 80058FB8 00055DB8  91 21 00 B4 */	stw r9, 0xb4(r1)
/* 80058FBC 00055DBC  91 01 00 B8 */	stw r8, 0xb8(r1)
/* 80058FC0 00055DC0  90 E1 00 BC */	stw r7, 0xbc(r1)
/* 80058FC4 00055DC4  90 C1 00 C0 */	stw r6, 0xc0(r1)
/* 80058FC8 00055DC8  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 80058FCC 00055DCC  4B FB C4 15 */	bl __pl__5xVec3CFRC5xVec3
/* 80058FD0 00055DD0  80 E1 00 44 */	lwz r7, 0x44(r1)
/* 80058FD4 00055DD4  7F 84 E3 78 */	mr r4, r28
/* 80058FD8 00055DD8  80 C1 00 48 */	lwz r6, 0x48(r1)
/* 80058FDC 00055DDC  38 61 00 38 */	addi r3, r1, 0x38
/* 80058FE0 00055DE0  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 80058FE4 00055DE4  38 A1 00 8C */	addi r5, r1, 0x8c
/* 80058FE8 00055DE8  90 E1 00 B0 */	stw r7, 0xb0(r1)
/* 80058FEC 00055DEC  90 C1 00 B4 */	stw r6, 0xb4(r1)
/* 80058FF0 00055DF0  90 01 00 B8 */	stw r0, 0xb8(r1)
/* 80058FF4 00055DF4  4B FB 21 D9 */	bl __mi__5xVec3CFRC5xVec3
/* 80058FF8 00055DF8  80 C1 00 38 */	lwz r6, 0x38(r1)
/* 80058FFC 00055DFC  7F C5 F3 78 */	mr r5, r30
/* 80059000 00055E00  81 01 00 3C */	lwz r8, 0x3c(r1)
/* 80059004 00055E04  38 61 00 C8 */	addi r3, r1, 0xc8
/* 80059008 00055E08  80 01 00 40 */	lwz r0, 0x40(r1)
/* 8005900C 00055E0C  38 81 00 B0 */	addi r4, r1, 0xb0
/* 80059010 00055E10  90 C1 00 BC */	stw r6, 0xbc(r1)
/* 80059014 00055E14  38 C1 00 A4 */	addi r6, r1, 0xa4
/* 80059018 00055E18  38 E0 00 00 */	li r7, 0
/* 8005901C 00055E1C  91 01 00 C0 */	stw r8, 0xc0(r1)
/* 80059020 00055E20  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 80059024 00055E24  48 03 BE FD */	bl zFX_SpawnBubbleTrail__FPC5xVec3PC5xVec3UiPC5xVec3PC5xVec3
/* 80059028 00055E28  7F C5 F3 78 */	mr r5, r30
/* 8005902C 00055E2C  38 61 00 D4 */	addi r3, r1, 0xd4
/* 80059030 00055E30  38 81 00 BC */	addi r4, r1, 0xbc
/* 80059034 00055E34  38 C1 00 A4 */	addi r6, r1, 0xa4
/* 80059038 00055E38  38 E0 00 00 */	li r7, 0
/* 8005903C 00055E3C  48 03 BE E5 */	bl zFX_SpawnBubbleTrail__FPC5xVec3PC5xVec3UiPC5xVec3PC5xVec3
lbl_80059040:
/* 80059040 00055E40  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 80059044 00055E44  80 AD 81 80 */	lwz r5, lbl_803CAA80-_SDA_BASE_(r13)
/* 80059048 00055E48  80 03 C2 A4 */	lwz r0, shared__13cruise_bubble@l(r3)
/* 8005904C 00055E4C  7F A4 EB 78 */	mr r4, r29
/* 80059050 00055E50  C0 25 01 04 */	lfs f1, 0x104(r5)
/* 80059054 00055E54  38 61 00 2C */	addi r3, r1, 0x2c
/* 80059058 00055E58  54 1A C7 FE */	rlwinm r26, r0, 0x18, 0x1f, 0x1f
/* 8005905C 00055E5C  4B FB 20 C5 */	bl __ml__5xVec3CFf
/* 80059060 00055E60  80 E1 00 2C */	lwz r7, 0x2c(r1)
/* 80059064 00055E64  7F 84 E3 78 */	mr r4, r28
/* 80059068 00055E68  80 C1 00 30 */	lwz r6, 0x30(r1)
/* 8005906C 00055E6C  38 61 00 20 */	addi r3, r1, 0x20
/* 80059070 00055E70  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80059074 00055E74  38 A1 00 80 */	addi r5, r1, 0x80
/* 80059078 00055E78  90 E1 00 80 */	stw r7, 0x80(r1)
/* 8005907C 00055E7C  90 C1 00 84 */	stw r6, 0x84(r1)
/* 80059080 00055E80  90 01 00 88 */	stw r0, 0x88(r1)
/* 80059084 00055E84  4B FB C3 5D */	bl __pl__5xVec3CFRC5xVec3
/* 80059088 00055E88  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005908C 00055E8C  3C 60 80 2E */	lis r3, wake_ribbon__13cruise_bubble@ha
/* 80059090 00055E90  38 63 C6 38 */	addi r3, r3, wake_ribbon__13cruise_bubble@l
/* 80059094 00055E94  7F A5 EB 78 */	mr r5, r29
/* 80059098 00055E98  FC 40 08 90 */	fmr f2, f1
/* 8005909C 00055E9C  7F 46 D3 78 */	mr r6, r26
/* 800590A0 00055EA0  38 81 00 20 */	addi r4, r1, 0x20
/* 800590A4 00055EA4  4B FD 14 3D */	bl insert__9xFXRibbonFRC5xVec3RC5xVec3ffUi
/* 800590A8 00055EA8  7F A4 EB 78 */	mr r4, r29
/* 800590AC 00055EAC  38 61 00 08 */	addi r3, r1, 8
/* 800590B0 00055EB0  48 00 6E 79 */	bl __mi__5xVec3CFv
/* 800590B4 00055EB4  7F 84 E3 78 */	mr r4, r28
/* 800590B8 00055EB8  38 61 00 14 */	addi r3, r1, 0x14
/* 800590BC 00055EBC  38 A1 00 80 */	addi r5, r1, 0x80
/* 800590C0 00055EC0  4B FB 21 0D */	bl __mi__5xVec3CFRC5xVec3
/* 800590C4 00055EC4  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 800590C8 00055EC8  3C 60 80 2E */	lis r3, wake_ribbon__13cruise_bubble@ha
/* 800590CC 00055ECC  38 63 C6 38 */	addi r3, r3, wake_ribbon__13cruise_bubble@l
/* 800590D0 00055ED0  7F 46 D3 78 */	mr r6, r26
/* 800590D4 00055ED4  FC 40 08 90 */	fmr f2, f1
/* 800590D8 00055ED8  38 63 01 40 */	addi r3, r3, 0x140
/* 800590DC 00055EDC  38 81 00 14 */	addi r4, r1, 0x14
/* 800590E0 00055EE0  38 A1 00 08 */	addi r5, r1, 8
/* 800590E4 00055EE4  4B FD 13 FD */	bl insert__9xFXRibbonFRC5xVec3RC5xVec3ffUi
/* 800590E8 00055EE8  BB 21 00 F4 */	lmw r25, 0xf4(r1)
/* 800590EC 00055EEC  80 01 01 14 */	lwz r0, 0x114(r1)
/* 800590F0 00055EF0  7C 08 03 A6 */	mtlr r0
/* 800590F4 00055EF4  38 21 01 10 */	addi r1, r1, 0x110
/* 800590F8 00055EF8  4E 80 00 20 */	blr 

/* update_trail__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Ff */
/* changed from ... */
/* update_trail__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Ff: */
/* ... so linker can find it */
update_trail__13cruise_bubbleFf:
/* 800590FC 00055EFC  94 21 FE 90 */	stwu r1, -0x170(r1)
/* 80059100 00055F00  7C 08 02 A6 */	mflr r0
/* 80059104 00055F04  90 01 01 74 */	stw r0, 0x174(r1)
/* 80059108 00055F08  DB E1 01 60 */	stfd f31, 0x160(r1)
/* 8005910C 00055F0C  F3 E1 01 68 */	psq_st f31, 360(r1), 0, qr0
/* 80059110 00055F10  DB C1 01 50 */	stfd f30, 0x150(r1)
/* 80059114 00055F14  F3 C1 01 58 */	psq_st f30, 344(r1), 0, qr0
/* 80059118 00055F18  DB A1 01 40 */	stfd f29, 0x140(r1)
/* 8005911C 00055F1C  F3 A1 01 48 */	psq_st f29, 328(r1), 0, qr0
/* 80059120 00055F20  BF 21 01 24 */	stmw r25, 0x124(r1)
/* 80059124 00055F24  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 80059128 00055F28  FF A0 08 90 */	fmr f29, f1
/* 8005912C 00055F2C  38 83 C2 A4 */	addi r4, r3, shared__13cruise_bubble@l
/* 80059130 00055F30  80 04 00 00 */	lwz r0, 0(r4)
/* 80059134 00055F34  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 80059138 00055F38  41 82 01 B0 */	beq lbl_800592E8
/* 8005913C 00055F3C  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 80059140 00055F40  C0 04 01 0C */	lfs f0, 0x10c(r4)
/* 80059144 00055F44  C0 23 00 F8 */	lfs f1, 0xf8(r3)
/* 80059148 00055F48  EC 5D 00 7A */	fmadds f2, f29, f1, f0
/* 8005914C 00055F4C  FC 00 10 1E */	fctiwz f0, f2
/* 80059150 00055F50  D0 44 01 0C */	stfs f2, 0x10c(r4)
/* 80059154 00055F54  D8 01 01 18 */	stfd f0, 0x118(r1)
/* 80059158 00055F58  83 E1 01 1C */	lwz r31, 0x11c(r1)
/* 8005915C 00055F5C  2C 1F 00 00 */	cmpwi r31, 0
/* 80059160 00055F60  41 81 00 14 */	bgt lbl_80059174
/* 80059164 00055F64  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 80059168 00055F68  3B E0 00 01 */	li r31, 1
/* 8005916C 00055F6C  D0 04 01 0C */	stfs f0, 0x10c(r4)
/* 80059170 00055F70  48 00 00 28 */	b lbl_80059198
lbl_80059174:
/* 80059174 00055F74  6F E3 80 00 */	xoris r3, r31, 0x8000
/* 80059178 00055F78  3C 00 43 30 */	lis r0, 0x4330
/* 8005917C 00055F7C  90 61 01 1C */	stw r3, 0x11c(r1)
/* 80059180 00055F80  C8 22 89 E8 */	lfd f1, lbl_803CD368-_SDA2_BASE_(r2)
/* 80059184 00055F84  90 01 01 18 */	stw r0, 0x118(r1)
/* 80059188 00055F88  C8 01 01 18 */	lfd f0, 0x118(r1)
/* 8005918C 00055F8C  EC 00 08 28 */	fsubs f0, f0, f1
/* 80059190 00055F90  EC 02 00 28 */	fsubs f0, f2, f0
/* 80059194 00055F94  D0 04 01 0C */	stfs f0, 0x10c(r4)
lbl_80059198:
/* 80059198 00055F98  38 61 00 58 */	addi r3, r1, 0x58
/* 8005919C 00055F9C  38 81 00 48 */	addi r4, r1, 0x48
/* 800591A0 00055FA0  4B FF EA 85 */	bl refresh_trail__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FR7xMat4x3R5xQuat
/* 800591A4 00055FA4  6F E3 80 00 */	xoris r3, r31, 0x8000
/* 800591A8 00055FA8  3C 00 43 30 */	lis r0, 0x4330
/* 800591AC 00055FAC  90 61 01 1C */	stw r3, 0x11c(r1)
/* 800591B0 00055FB0  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 800591B4 00055FB4  38 A3 C2 A4 */	addi r5, r3, shared__13cruise_bubble@l
/* 800591B8 00055FB8  C8 22 89 E8 */	lfd f1, lbl_803CD368-_SDA2_BASE_(r2)
/* 800591BC 00055FBC  90 01 01 18 */	stw r0, 0x118(r1)
/* 800591C0 00055FC0  38 61 00 14 */	addi r3, r1, 0x14
/* 800591C4 00055FC4  C0 42 89 C0 */	lfs f2, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 800591C8 00055FC8  38 81 00 88 */	addi r4, r1, 0x88
/* 800591CC 00055FCC  C8 01 01 18 */	lfd f0, 0x118(r1)
/* 800591D0 00055FD0  38 A5 01 44 */	addi r5, r5, 0x144
/* 800591D4 00055FD4  EC 00 08 28 */	fsubs f0, f0, f1
/* 800591D8 00055FD8  EF E2 00 24 */	fdivs f31, f2, f0
/* 800591DC 00055FDC  EF DD 07 F2 */	fmuls f30, f29, f31
/* 800591E0 00055FE0  4B FB 1F ED */	bl __mi__5xVec3CFRC5xVec3
/* 800591E4 00055FE4  FC 20 F8 90 */	fmr f1, f31
/* 800591E8 00055FE8  38 61 00 20 */	addi r3, r1, 0x20
/* 800591EC 00055FEC  38 81 00 14 */	addi r4, r1, 0x14
/* 800591F0 00055FF0  4B FB 1F 31 */	bl __ml__5xVec3CFf
/* 800591F4 00055FF4  80 81 00 20 */	lwz r4, 0x20(r1)
/* 800591F8 00055FF8  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 800591FC 00055FFC  80 A1 00 24 */	lwz r5, 0x24(r1)
/* 80059200 00056000  38 63 C2 A4 */	addi r3, r3, shared__13cruise_bubble@l
/* 80059204 00056004  80 01 00 28 */	lwz r0, 0x28(r1)
/* 80059208 00056008  3B C3 01 14 */	addi r30, r3, 0x114
/* 8005920C 0005600C  FF A0 F8 90 */	fmr f29, f31
/* 80059210 00056010  90 81 00 3C */	stw r4, 0x3c(r1)
/* 80059214 00056014  7F C4 F3 78 */	mr r4, r30
/* 80059218 00056018  38 61 00 98 */	addi r3, r1, 0x98
/* 8005921C 0005601C  90 A1 00 40 */	stw r5, 0x40(r1)
/* 80059220 00056020  3B 80 00 00 */	li r28, 0
/* 80059224 00056024  90 01 00 44 */	stw r0, 0x44(r1)
/* 80059228 00056028  4B FB 23 45 */	bl __as__7xMat4x3FRC7xMat4x3
/* 8005922C 0005602C  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 80059230 00056030  3B 60 00 00 */	li r27, 0
/* 80059234 00056034  38 63 C2 A4 */	addi r3, r3, shared__13cruise_bubble@l
/* 80059238 00056038  3B A3 01 54 */	addi r29, r3, 0x154
/* 8005923C 0005603C  48 00 00 7C */	b lbl_800592B8
lbl_80059240:
/* 80059240 00056040  57 83 30 32 */	slwi r3, r28, 6
/* 80059244 00056044  6B 9C 00 01 */	xori r28, r28, 1
/* 80059248 00056048  3B 41 00 98 */	addi r26, r1, 0x98
/* 8005924C 0005604C  FC 20 E8 90 */	fmr f1, f29
/* 80059250 00056050  7F 59 D3 78 */	mr r25, r26
/* 80059254 00056054  57 80 30 32 */	slwi r0, r28, 6
/* 80059258 00056058  7F 5A 1A 14 */	add r26, r26, r3
/* 8005925C 0005605C  7F A4 EB 78 */	mr r4, r29
/* 80059260 00056060  7F 39 02 14 */	add r25, r25, r0
/* 80059264 00056064  38 61 00 2C */	addi r3, r1, 0x2c
/* 80059268 00056068  38 A1 00 48 */	addi r5, r1, 0x48
/* 8005926C 0005606C  4B FD 9E 65 */	bl xQuatSlerp__FP5xQuatPC5xQuatPC5xQuatf
/* 80059270 00056070  7F 24 CB 78 */	mr r4, r25
/* 80059274 00056074  38 61 00 2C */	addi r3, r1, 0x2c
/* 80059278 00056078  4B FD 9C 89 */	bl xQuatToMat__FPC5xQuatP7xMat3x3
/* 8005927C 0005607C  38 61 00 08 */	addi r3, r1, 8
/* 80059280 00056080  38 9A 00 30 */	addi r4, r26, 0x30
/* 80059284 00056084  38 A1 00 3C */	addi r5, r1, 0x3c
/* 80059288 00056088  4B FB C1 59 */	bl __pl__5xVec3CFRC5xVec3
/* 8005928C 0005608C  38 79 00 30 */	addi r3, r25, 0x30
/* 80059290 00056090  38 81 00 08 */	addi r4, r1, 8
/* 80059294 00056094  4B FB 1F D1 */	bl __as__5xVec3FRC5xVec3
/* 80059298 00056098  FC 20 F0 90 */	fmr f1, f30
/* 8005929C 0005609C  7F 44 D3 78 */	mr r4, r26
/* 800592A0 000560A0  7F 26 CB 78 */	mr r6, r25
/* 800592A4 000560A4  38 7A 00 30 */	addi r3, r26, 0x30
/* 800592A8 000560A8  38 B9 00 30 */	addi r5, r25, 0x30
/* 800592AC 000560AC  4B FF FB 69 */	bl add_trail_sample__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FRC5xVec3RC5xVec3RC5xVec3RC5xVec3f
/* 800592B0 000560B0  EF BD F8 2A */	fadds f29, f29, f31
/* 800592B4 000560B4  3B 7B 00 01 */	addi r27, r27, 1
lbl_800592B8:
/* 800592B8 000560B8  7C 1B F8 00 */	cmpw r27, r31
/* 800592BC 000560BC  41 80 FF 84 */	blt lbl_80059240
/* 800592C0 000560C0  7F C3 F3 78 */	mr r3, r30
/* 800592C4 000560C4  38 81 00 58 */	addi r4, r1, 0x58
/* 800592C8 000560C8  4B FB 22 A5 */	bl __as__7xMat4x3FRC7xMat4x3
/* 800592CC 000560CC  7F A3 EB 78 */	mr r3, r29
/* 800592D0 000560D0  38 81 00 48 */	addi r4, r1, 0x48
/* 800592D4 000560D4  4B FB 54 19 */	bl __as__5xQuatFRC5xQuat
/* 800592D8 000560D8  3C 60 80 29 */	lis r3, lbl_80290000@ha
/* 800592DC 000560DC  84 03 C2 A4 */	lwzu r0, -0x3d5c(r3)
/* 800592E0 000560E0  54 00 06 2C */	rlwinm r0, r0, 0, 0x18, 0x16
/* 800592E4 000560E4  90 03 00 00 */	stw r0, lbl_80290000@l(r3)
lbl_800592E8:
/* 800592E8 000560E8  E3 E1 01 68 */	psq_l f31, 360(r1), 0, qr0
/* 800592EC 000560EC  CB E1 01 60 */	lfd f31, 0x160(r1)
/* 800592F0 000560F0  E3 C1 01 58 */	psq_l f30, 344(r1), 0, qr0
/* 800592F4 000560F4  CB C1 01 50 */	lfd f30, 0x150(r1)
/* 800592F8 000560F8  E3 A1 01 48 */	psq_l f29, 328(r1), 0, qr0
/* 800592FC 000560FC  CB A1 01 40 */	lfd f29, 0x140(r1)
/* 80059300 00056100  BB 21 01 24 */	lmw r25, 0x124(r1)
/* 80059304 00056104  80 01 01 74 */	lwz r0, 0x174(r1)
/* 80059308 00056108  7C 08 03 A6 */	mtlr r0
/* 8005930C 0005610C  38 21 01 70 */	addi r1, r1, 0x170
/* 80059310 00056110  4E 80 00 20 */	blr 

/* refresh_missle_model__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv */
refresh_missle_model__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv:
/* 80059314 00056114  4E 80 00 20 */	blr 

/* render_model_2d__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FP14xModelInstanceRC13basic_rect<f>f */
render_model_2d__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FP14xModelInstanceRC13basic_rect_esc__0_f_esc__1_f:
/* 80059458 00056258  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 8005945C 0005625C  7C 08 02 A6 */	mflr r0
/* 80059460 00056260  90 01 00 94 */	stw r0, 0x94(r1)
/* 80059464 00056264  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 80059468 00056268  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 8005946C 0005626C  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 80059470 00056270  93 C1 00 78 */	stw r30, 0x78(r1)
/* 80059474 00056274  93 A1 00 74 */	stw r29, 0x74(r1)
/* 80059478 00056278  3C C0 80 25 */	lis r6, lbl_80250004@ha
/* 8005947C 0005627C  85 46 53 24 */	lwzu r10, 0x5324(r6)
/* 80059480 00056280  3C A0 80 25 */	lis r5, lbl_80255330@ha
/* 80059484 00056284  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 80059488 00056288  38 E5 53 30 */	addi r7, r5, lbl_80255330@l
/* 8005948C 0005628C  81 26 00 04 */	lwz r9, lbl_80250004@l(r6)
/* 80059490 00056290  81 06 00 08 */	lwz r8, 8(r6)
/* 80059494 00056294  FF E0 08 90 */	fmr f31, f1
/* 80059498 00056298  80 C7 00 00 */	lwz r6, 0(r7)
/* 8005949C 0005629C  FC 60 10 90 */	fmr f3, f2
/* 800594A0 000562A0  80 A7 00 04 */	lwz r5, 4(r7)
/* 800594A4 000562A4  7C 7D 1B 78 */	mr r29, r3
/* 800594A8 000562A8  80 07 00 08 */	lwz r0, 8(r7)
/* 800594AC 000562AC  91 41 00 14 */	stw r10, 0x14(r1)
/* 800594B0 000562B0  7C 9E 23 78 */	mr r30, r4
/* 800594B4 000562B4  C0 22 89 F0 */	lfs f1, lbl_803CD370-_SDA2_BASE_(r2)
/* 800594B8 000562B8  38 61 00 20 */	addi r3, r1, 0x20
/* 800594BC 000562BC  91 21 00 18 */	stw r9, 0x18(r1)
/* 800594C0 000562C0  91 01 00 1C */	stw r8, 0x1c(r1)
/* 800594C4 000562C4  90 C1 00 08 */	stw r6, 8(r1)
/* 800594C8 000562C8  90 A1 00 0C */	stw r5, 0xc(r1)
/* 800594CC 000562CC  90 01 00 10 */	stw r0, 0x10(r1)
/* 800594D0 000562D0  4B FB 1C 1D */	bl assign__5xVec3Ffff
/* 800594D4 000562D4  C0 22 89 B8 */	lfs f1, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 800594D8 000562D8  38 61 00 30 */	addi r3, r1, 0x30
/* 800594DC 000562DC  C0 42 89 F0 */	lfs f2, lbl_803CD370-_SDA2_BASE_(r2)
/* 800594E0 000562E0  FC 60 08 90 */	fmr f3, f1
/* 800594E4 000562E4  4B FB 1C 09 */	bl assign__5xVec3Ffff
/* 800594E8 000562E8  C0 22 89 B8 */	lfs f1, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 800594EC 000562EC  38 61 00 40 */	addi r3, r1, 0x40
/* 800594F0 000562F0  C0 62 89 F4 */	lfs f3, lbl_803CD374-_SDA2_BASE_(r2)
/* 800594F4 000562F4  FC 40 08 90 */	fmr f2, f1
/* 800594F8 000562F8  4B FB 1B F5 */	bl assign__5xVec3Ffff
/* 800594FC 000562FC  C0 22 89 B8 */	lfs f1, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 80059500 00056300  38 61 00 50 */	addi r3, r1, 0x50
/* 80059504 00056304  4B FC 33 75 */	bl __as__5xVec3Ff
/* 80059508 00056308  C0 22 89 DC */	lfs f1, lbl_803CD35C-_SDA2_BASE_(r2)
/* 8005950C 0005630C  C0 02 89 C8 */	lfs f0, lbl_803CD348-_SDA2_BASE_(r2)
/* 80059510 00056310  EC 01 07 FA */	fmadds f0, f1, f31, f0
/* 80059514 00056314  FC 00 00 1E */	fctiwz f0, f0
/* 80059518 00056318  D8 01 00 60 */	stfd f0, 0x60(r1)
/* 8005951C 0005631C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80059520 00056320  54 1F 06 3E */	clrlwi r31, r0, 0x18
/* 80059524 00056324  48 00 00 34 */	b lbl_80059558
lbl_80059528:
/* 80059528 00056328  7F A3 EB 78 */	mr r3, r29
/* 8005952C 0005632C  7F E4 FB 78 */	mr r4, r31
/* 80059530 00056330  4B FD B8 21 */	bl xModelSetMaterialAlpha__FP14xModelInstanceUc
/* 80059534 00056334  7F A3 EB 78 */	mr r3, r29
/* 80059538 00056338  38 81 00 20 */	addi r4, r1, 0x20
/* 8005953C 0005633C  4B FC 23 D1 */	bl xModelSetFrame__FP14xModelInstancePC7xMat4x3
/* 80059540 00056340  7F A3 EB 78 */	mr r3, r29
/* 80059544 00056344  7F C4 F3 78 */	mr r4, r30
/* 80059548 00056348  38 A1 00 14 */	addi r5, r1, 0x14
/* 8005954C 0005634C  38 C1 00 08 */	addi r6, r1, 8
/* 80059550 00056350  4B FD B4 D1 */	bl xModelRender2D__FRC14xModelInstanceRC13basic_rect_esc__0_f_esc__1_RC5xVec3RC5xVec3
/* 80059554 00056354  83 BD 00 00 */	lwz r29, 0(r29)
lbl_80059558:
/* 80059558 00056358  28 1D 00 00 */	cmplwi r29, 0
/* 8005955C 0005635C  40 82 FF CC */	bne lbl_80059528
/* 80059560 00056360  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 80059564 00056364  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80059568 00056368  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 8005956C 0005636C  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 80059570 00056370  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 80059574 00056374  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 80059578 00056378  7C 08 03 A6 */	mtlr r0
/* 8005957C 0005637C  38 21 00 90 */	addi r1, r1, 0x90
/* 80059580 00056380  4E 80 00 20 */	blr 

/* render_glow__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FP14xModelInstanceRC13basic_rect<f>ff */
render_glow__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FP14xModelInstanceRC13basic_rect_esc__0_f_esc__1_ff:
/* 80059584 00056384  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80059588 00056388  7C 08 02 A6 */	mflr r0
/* 8005958C 0005638C  90 01 00 64 */	stw r0, 0x64(r1)
/* 80059590 00056390  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80059594 00056394  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 80059598 00056398  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 8005959C 0005639C  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 800595A0 000563A0  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 800595A4 000563A4  F3 A1 00 38 */	psq_st f29, 56(r1), 0, qr0
/* 800595A8 000563A8  DB 81 00 20 */	stfd f28, 0x20(r1)
/* 800595AC 000563AC  F3 81 00 28 */	psq_st f28, 40(r1), 0, qr0
/* 800595B0 000563B0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800595B4 000563B4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800595B8 000563B8  80 AD 81 80 */	lwz r5, lbl_803CAA80-_SDA_BASE_(r13)
/* 800595BC 000563BC  EF E2 00 72 */	fmuls f31, f2, f1
/* 800595C0 000563C0  C0 82 89 F8 */	lfs f4, lbl_803CD378-_SDA2_BASE_(r2)
/* 800595C4 000563C4  7C 7E 1B 78 */	mr r30, r3
/* 800595C8 000563C8  C0 45 01 3C */	lfs f2, 0x13c(r5)
/* 800595CC 000563CC  3B E0 00 00 */	li r31, 0
/* 800595D0 000563D0  FC 00 F8 50 */	fneg f0, f31
/* 800595D4 000563D4  EC 61 00 B2 */	fmuls f3, f1, f2
/* 800595D8 000563D8  C0 22 89 D8 */	lfs f1, zEntCruiseBubble_f_0_25-_SDA2_BASE_(r2)
/* 800595DC 000563DC  C0 42 89 C8 */	lfs f2, lbl_803CD348-_SDA2_BASE_(r2)
/* 800595E0 000563E0  80 C4 00 00 */	lwz r6, 0(r4)
/* 800595E4 000563E4  EF 81 00 32 */	fmuls f28, f1, f0
/* 800595E8 000563E8  EF C4 00 F2 */	fmuls f30, f4, f3
/* 800595EC 000563EC  80 A4 00 04 */	lwz r5, 4(r4)
/* 800595F0 000563F0  80 64 00 08 */	lwz r3, 8(r4)
/* 800595F4 000563F4  FC 00 F0 50 */	fneg f0, f30
/* 800595F8 000563F8  80 04 00 0C */	lwz r0, 0xc(r4)
/* 800595FC 000563FC  90 C1 00 08 */	stw r6, 8(r1)
/* 80059600 00056400  EF A2 00 32 */	fmuls f29, f2, f0
/* 80059604 00056404  90 A1 00 0C */	stw r5, 0xc(r1)
/* 80059608 00056408  90 61 00 10 */	stw r3, 0x10(r1)
/* 8005960C 0005640C  90 01 00 14 */	stw r0, 0x14(r1)
lbl_80059610:
/* 80059610 00056410  FC 20 F8 90 */	fmr f1, f31
/* 80059614 00056414  7F C3 F3 78 */	mr r3, r30
/* 80059618 00056418  38 81 00 08 */	addi r4, r1, 8
/* 8005961C 0005641C  4B FF FE 3D */	bl render_model_2d__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FP14xModelInstanceRC13basic_rect_esc__0_f_esc__1_f
/* 80059620 00056420  C0 01 00 08 */	lfs f0, 8(r1)
/* 80059624 00056424  3B FF 00 01 */	addi r31, r31, 1
/* 80059628 00056428  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8005962C 0005642C  2C 1F 00 03 */	cmpwi r31, 3
/* 80059630 00056430  EC 60 E8 2A */	fadds f3, f0, f29
/* 80059634 00056434  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80059638 00056438  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8005963C 0005643C  EC 42 E8 2A */	fadds f2, f2, f29
/* 80059640 00056440  EC 21 F0 2A */	fadds f1, f1, f30
/* 80059644 00056444  EC 00 F0 2A */	fadds f0, f0, f30
/* 80059648 00056448  EF FF E0 2A */	fadds f31, f31, f28
/* 8005964C 0005644C  D0 61 00 08 */	stfs f3, 8(r1)
/* 80059650 00056450  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 80059654 00056454  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 80059658 00056458  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8005965C 0005645C  41 80 FF B4 */	blt lbl_80059610
/* 80059660 00056460  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 80059664 00056464  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 80059668 00056468  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 8005966C 0005646C  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 80059670 00056470  E3 A1 00 38 */	psq_l f29, 56(r1), 0, qr0
/* 80059674 00056474  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 80059678 00056478  E3 81 00 28 */	psq_l f28, 40(r1), 0, qr0
/* 8005967C 0005647C  CB 81 00 20 */	lfd f28, 0x20(r1)
/* 80059680 00056480  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80059684 00056484  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80059688 00056488  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8005968C 0005648C  7C 08 03 A6 */	mtlr r0
/* 80059690 00056490  38 21 00 60 */	addi r1, r1, 0x60
/* 80059694 00056494  4E 80 00 20 */	blr 

/* init_hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv */
init_hud__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv:
/* 80059698 00056498  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005969C 0005649C  7C 08 02 A6 */	mflr r0
/* 800596A0 000564A0  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 800596A4 000564A4  3C 80 80 2E */	lis r4, lbl_802DCC7C@ha
/* 800596A8 000564A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 800596AC 000564AC  38 00 00 00 */	li r0, 0
/* 800596B0 000564B0  38 63 53 3C */	addi r3, r3, stringBase0__13cruise_bubble@l
/* 800596B4 000564B4  9C 04 CC 7C */	stbu r0, lbl_802DCC7C@l(r4)
/* 800596B8 000564B8  38 63 02 3E */	addi r3, r3, 0x23e
/* 800596BC 000564BC  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 800596C0 000564C0  D0 04 00 04 */	stfs f0, 4(r4)
/* 800596C4 000564C4  D0 04 00 08 */	stfs f0, 8(r4)
/* 800596C8 000564C8  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 800596CC 000564CC  90 04 06 54 */	stw r0, 0x654(r4)
/* 800596D0 000564D0  4B FF 2B 45 */	bl xStrHash__FPCc
/* 800596D4 000564D4  4B FF FC DD */	bl load_model__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FUi
/* 800596D8 000564D8  3C A0 80 2E */	lis r5, lbl_802DCC7C@ha
/* 800596DC 000564DC  3C 80 80 25 */	lis r4, stringBase0__13cruise_bubble@ha
/* 800596E0 000564E0  38 A5 CC 7C */	addi r5, r5, lbl_802DCC7C@l
/* 800596E4 000564E4  90 65 00 14 */	stw r3, 0x14(r5)
/* 800596E8 000564E8  38 64 53 3C */	addi r3, r4, stringBase0__13cruise_bubble@l
/* 800596EC 000564EC  38 63 02 50 */	addi r3, r3, 0x250
/* 800596F0 000564F0  4B FF 2B 25 */	bl xStrHash__FPCc
/* 800596F4 000564F4  4B FF FC BD */	bl load_model__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FUi
/* 800596F8 000564F8  3C A0 80 2E */	lis r5, lbl_802DCC7C@ha
/* 800596FC 000564FC  3C 80 80 25 */	lis r4, stringBase0__13cruise_bubble@ha
/* 80059700 00056500  38 A5 CC 7C */	addi r5, r5, lbl_802DCC7C@l
/* 80059704 00056504  90 65 00 18 */	stw r3, 0x18(r5)
/* 80059708 00056508  38 64 53 3C */	addi r3, r4, stringBase0__13cruise_bubble@l
/* 8005970C 0005650C  38 63 02 66 */	addi r3, r3, 0x266
/* 80059710 00056510  4B FF 2B 05 */	bl xStrHash__FPCc
/* 80059714 00056514  4B FF FC 9D */	bl load_model__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FUi
/* 80059718 00056518  3C 80 80 2E */	lis r4, lbl_802DCC7C@ha
/* 8005971C 0005651C  7C 65 1B 78 */	mr r5, r3
/* 80059720 00056520  38 64 CC 7C */	addi r3, r4, lbl_802DCC7C@l
/* 80059724 00056524  90 A3 00 20 */	stw r5, 0x20(r3)
/* 80059728 00056528  38 63 06 74 */	addi r3, r3, 0x674
/* 8005972C 0005652C  80 85 00 10 */	lwz r4, 0x10(r5)
/* 80059730 00056530  48 00 00 31 */	bl init__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17uv_animated_modelFP8RpAtomic
/* 80059734 00056534  80 8D 81 80 */	lwz r4, lbl_803CAA80-_SDA_BASE_(r13)
/* 80059738 00056538  3C 60 80 2E */	lis r3, lbl_802DCC7C@ha
/* 8005973C 0005653C  38 63 CC 7C */	addi r3, r3, lbl_802DCC7C@l
/* 80059740 00056540  C0 24 01 58 */	lfs f1, 0x158(r4)
/* 80059744 00056544  38 63 06 88 */	addi r3, r3, 0x688
/* 80059748 00056548  C0 44 01 5C */	lfs f2, 0x15c(r4)
/* 8005974C 0005654C  4B FC CB CD */	bl assign__5xVec2Fff
/* 80059750 00056550  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80059754 00056554  7C 08 03 A6 */	mtlr r0
/* 80059758 00056558  38 21 00 10 */	addi r1, r1, 0x10
/* 8005975C 0005655C  4E 80 00 20 */	blr 

/* init__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17uv_animated_modelFP8RpAtomic */
init__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17uv_animated_modelFP8RpAtomic:
/* 80059760 00056560  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80059764 00056564  7C 08 02 A6 */	mflr r0
/* 80059768 00056568  28 04 00 00 */	cmplwi r4, 0
/* 8005976C 0005656C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80059770 00056570  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80059774 00056574  7C 7F 1B 78 */	mr r31, r3
/* 80059778 00056578  90 83 00 00 */	stw r4, 0(r3)
/* 8005977C 0005657C  40 82 00 0C */	bne lbl_80059788
/* 80059780 00056580  38 60 00 00 */	li r3, 0
/* 80059784 00056584  48 00 00 48 */	b lbl_800597CC
lbl_80059788:
/* 80059788 00056588  7C 86 23 78 */	mr r6, r4
/* 8005978C 0005658C  38 9F 00 04 */	addi r4, r31, 4
/* 80059790 00056590  38 BF 00 08 */	addi r5, r31, 8
/* 80059794 00056594  48 00 00 4D */	bl clone_uv__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17uv_animated_modelCFRP11RwTexCoordsRiP8RpAtomic
/* 80059798 00056598  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8005979C 0005659C  40 82 00 0C */	bne lbl_800597A8
/* 800597A0 000565A0  38 60 00 00 */	li r3, 0
/* 800597A4 000565A4  48 00 00 28 */	b lbl_800597CC
lbl_800597A8:
/* 800597A8 000565A8  C0 22 89 B8 */	lfs f1, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 800597AC 000565AC  38 7F 00 0C */	addi r3, r31, 0xc
/* 800597B0 000565B0  FC 40 08 90 */	fmr f2, f1
/* 800597B4 000565B4  4B FC CB 65 */	bl assign__5xVec2Fff
/* 800597B8 000565B8  C0 22 89 B8 */	lfs f1, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 800597BC 000565BC  38 7F 00 14 */	addi r3, r31, 0x14
/* 800597C0 000565C0  FC 40 08 90 */	fmr f2, f1
/* 800597C4 000565C4  4B FC CB 55 */	bl assign__5xVec2Fff
/* 800597C8 000565C8  38 60 00 01 */	li r3, 1
lbl_800597CC:
/* 800597CC 000565CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800597D0 000565D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800597D4 000565D4  7C 08 03 A6 */	mtlr r0
/* 800597D8 000565D8  38 21 00 10 */	addi r1, r1, 0x10
/* 800597DC 000565DC  4E 80 00 20 */	blr 

/* clone_uv__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17uv_animated_modelCFRP11RwTexCoordsRiP8RpAtomic */
clone_uv__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17uv_animated_modelCFRP11RwTexCoordsRiP8RpAtomic:
/* 800597E0 000565E0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800597E4 000565E4  7C 08 02 A6 */	mflr r0
/* 800597E8 000565E8  90 01 00 24 */	stw r0, 0x24(r1)
/* 800597EC 000565EC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800597F0 000565F0  7C BF 2B 78 */	mr r31, r5
/* 800597F4 000565F4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800597F8 000565F8  7C 9E 23 78 */	mr r30, r4
/* 800597FC 000565FC  38 81 00 08 */	addi r4, r1, 8
/* 80059800 00056600  48 00 00 6D */	bl get_uv__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17uv_animated_modelCFRP11RwTexCoordsRiP8RpAtomic
/* 80059804 00056604  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80059808 00056608  40 82 00 0C */	bne lbl_80059814
/* 8005980C 0005660C  38 60 00 00 */	li r3, 0
/* 80059810 00056610  48 00 00 44 */	b lbl_80059854
lbl_80059814:
/* 80059814 00056614  80 1F 00 00 */	lwz r0, 0(r31)
/* 80059818 00056618  38 A0 00 00 */	li r5, 0
/* 8005981C 0005661C  80 6D 89 E0 */	lwz r3, gActiveHeap-_SDA_BASE_(r13)
/* 80059820 00056620  54 04 18 38 */	slwi r4, r0, 3
/* 80059824 00056624  4B FD A1 1D */	bl xMemAlloc__FUiUii
/* 80059828 00056628  90 7E 00 00 */	stw r3, 0(r30)
/* 8005982C 0005662C  80 7E 00 00 */	lwz r3, 0(r30)
/* 80059830 00056630  28 03 00 00 */	cmplwi r3, 0
/* 80059834 00056634  40 82 00 0C */	bne lbl_80059840
/* 80059838 00056638  38 60 00 00 */	li r3, 0
/* 8005983C 0005663C  48 00 00 18 */	b lbl_80059854
lbl_80059840:
/* 80059840 00056640  80 1F 00 00 */	lwz r0, 0(r31)
/* 80059844 00056644  80 81 00 08 */	lwz r4, 8(r1)
/* 80059848 00056648  54 05 18 38 */	slwi r5, r0, 3
/* 8005984C 0005664C  4B FA 9C F5 */	bl memcpy
/* 80059850 00056650  38 60 00 01 */	li r3, 1
lbl_80059854:
/* 80059854 00056654  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80059858 00056658  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8005985C 0005665C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80059860 00056660  7C 08 03 A6 */	mtlr r0
/* 80059864 00056664  38 21 00 20 */	addi r1, r1, 0x20
/* 80059868 00056668  4E 80 00 20 */	blr 

/* get_uv__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17uv_animated_modelCFRP11RwTexCoordsRiP8RpAtomic */
get_uv__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17uv_animated_modelCFRP11RwTexCoordsRiP8RpAtomic:
/* 8005986C 0005666C  38 00 00 00 */	li r0, 0
/* 80059870 00056670  90 04 00 00 */	stw r0, 0(r4)
/* 80059874 00056674  90 05 00 00 */	stw r0, 0(r5)
/* 80059878 00056678  80 66 00 18 */	lwz r3, 0x18(r6)
/* 8005987C 0005667C  28 03 00 00 */	cmplwi r3, 0
/* 80059880 00056680  40 82 00 0C */	bne lbl_8005988C
/* 80059884 00056684  38 60 00 00 */	li r3, 0
/* 80059888 00056688  4E 80 00 20 */	blr 
lbl_8005988C:
/* 8005988C 0005668C  80 03 00 14 */	lwz r0, 0x14(r3)
/* 80059890 00056690  90 05 00 00 */	stw r0, 0(r5)
/* 80059894 00056694  80 05 00 00 */	lwz r0, 0(r5)
/* 80059898 00056698  2C 00 00 00 */	cmpwi r0, 0
/* 8005989C 0005669C  41 81 00 0C */	bgt lbl_800598A8
/* 800598A0 000566A0  38 60 00 00 */	li r3, 0
/* 800598A4 000566A4  4E 80 00 20 */	blr 
lbl_800598A8:
/* 800598A8 000566A8  80 03 00 34 */	lwz r0, 0x34(r3)
/* 800598AC 000566AC  90 04 00 00 */	stw r0, 0(r4)
/* 800598B0 000566B0  80 64 00 00 */	lwz r3, 0(r4)
/* 800598B4 000566B4  7C 03 00 D0 */	neg r0, r3
/* 800598B8 000566B8  7C 00 1B 78 */	or r0, r0, r3
/* 800598BC 000566BC  54 03 0F FE */	srwi r3, r0, 0x1f
/* 800598C0 000566C0  4E 80 00 20 */	blr 

/* show_gizmo__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FRQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@9hud_gizmoRC13basic_rect<f>P14xModelInstance */
show_gizmo__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FRQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_9hud_gizmoRC13basic_rect_esc__0_f_esc__1_P14xModelInstance:
/* 800598C4 000566C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800598C8 000566C8  7C 08 02 A6 */	mflr r0
/* 800598CC 000566CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800598D0 000566D0  38 00 00 01 */	li r0, 1
/* 800598D4 000566D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800598D8 000566D8  7C BF 2B 78 */	mr r31, r5
/* 800598DC 000566DC  93 C1 00 08 */	stw r30, 8(r1)
/* 800598E0 000566E0  7C 7E 1B 78 */	mr r30, r3
/* 800598E4 000566E4  90 03 00 00 */	stw r0, 0(r3)
/* 800598E8 000566E8  38 7E 00 04 */	addi r3, r30, 4
/* 800598EC 000566EC  4B FB E7 55 */	bl __as__13basic_rect_esc__0_f_esc__1_FRC13basic_rect_esc__0_f_esc__1_
/* 800598F0 000566F0  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 800598F4 000566F4  38 00 00 00 */	li r0, 0
/* 800598F8 000566F8  D0 1E 00 14 */	stfs f0, 0x14(r30)
/* 800598FC 000566FC  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 80059900 00056700  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 80059904 00056704  C0 03 01 40 */	lfs f0, 0x140(r3)
/* 80059908 00056708  EC 01 00 24 */	fdivs f0, f1, f0
/* 8005990C 0005670C  D0 1E 00 18 */	stfs f0, 0x18(r30)
/* 80059910 00056710  C0 02 89 C0 */	lfs f0, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 80059914 00056714  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 80059918 00056718  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005991C 0005671C  C0 22 89 FC */	lfs f1, lbl_803CD37C-_SDA2_BASE_(r2)
/* 80059920 00056720  C0 03 01 44 */	lfs f0, 0x144(r3)
/* 80059924 00056724  EC 01 00 24 */	fdivs f0, f1, f0
/* 80059928 00056728  D0 1E 00 20 */	stfs f0, 0x20(r30)
/* 8005992C 0005672C  C0 02 89 C0 */	lfs f0, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 80059930 00056730  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 80059934 00056734  90 1E 00 28 */	stw r0, 0x28(r30)
/* 80059938 00056738  93 FE 00 2C */	stw r31, 0x2c(r30)
/* 8005993C 0005673C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80059940 00056740  83 C1 00 08 */	lwz r30, 8(r1)
/* 80059944 00056744  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80059948 00056748  7C 08 03 A6 */	mtlr r0
/* 8005994C 0005674C  38 21 00 10 */	addi r1, r1, 0x10
/* 80059950 00056750  4E 80 00 20 */	blr 

/* update_gizmo__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FRQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@9hud_gizmof */
update_gizmo__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FRQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_9hud_gizmof:
/* 80059954 00056754  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80059958 00056758  7C 08 02 A6 */	mflr r0
/* 8005995C 0005675C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80059960 00056760  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80059964 00056764  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 80059968 00056768  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005996C 0005676C  7C 7F 1B 78 */	mr r31, r3
/* 80059970 00056770  FF E0 08 90 */	fmr f31, f1
/* 80059974 00056774  C0 23 00 18 */	lfs f1, 0x18(r3)
/* 80059978 00056778  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 8005997C 0005677C  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 80059980 00056780  EC 21 07 FA */	fmadds f1, f1, f31, f0
/* 80059984 00056784  C0 62 89 C0 */	lfs f3, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 80059988 00056788  4B FB 4F B1 */	bl range_limit_esc__0_f_esc__1___Ffff
/* 8005998C 0005678C  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 80059990 00056790  C0 3F 00 20 */	lfs f1, 0x20(r31)
/* 80059994 00056794  C0 1F 00 1C */	lfs f0, 0x1c(r31)
/* 80059998 00056798  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005999C 0005679C  EC 21 07 FA */	fmadds f1, f1, f31, f0
/* 800599A0 000567A0  C0 62 89 C0 */	lfs f3, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 800599A4 000567A4  4B FB 4F 95 */	bl range_limit_esc__0_f_esc__1___Ffff
/* 800599A8 000567A8  D0 3F 00 1C */	stfs f1, 0x1c(r31)
/* 800599AC 000567AC  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 800599B0 000567B0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800599B4 000567B4  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 800599B8 000567B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800599BC 000567BC  7C 08 03 A6 */	mtlr r0
/* 800599C0 000567C0  38 21 00 20 */	addi r1, r1, 0x20
/* 800599C4 000567C4  4E 80 00 20 */	blr 

/* flash_hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv */
flash_hud__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv:
/* 800599C8 000567C8  3C 60 80 2E */	lis r3, lbl_802DCC7C@ha
/* 800599CC 000567CC  C0 02 89 C0 */	lfs f0, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 800599D0 000567D0  38 83 CC 7C */	addi r4, r3, lbl_802DCC7C@l
/* 800599D4 000567D4  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 800599D8 000567D8  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 800599DC 000567DC  C0 22 89 FC */	lfs f1, lbl_803CD37C-_SDA2_BASE_(r2)
/* 800599E0 000567E0  C0 03 01 44 */	lfs f0, 0x144(r3)
/* 800599E4 000567E4  EC 01 00 24 */	fdivs f0, f1, f0
/* 800599E8 000567E8  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 800599EC 000567EC  4E 80 00 20 */	blr 

/* render_timer__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fff */
render_timer__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fff:
/* 800599F0 000567F0  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 800599F4 000567F4  7C 08 02 A6 */	mflr r0
/* 800599F8 000567F8  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 800599FC 000567FC  DB E1 00 C0 */	stfd f31, 0xc0(r1)
/* 80059A00 00056800  F3 E1 00 C8 */	psq_st f31, 200(r1), 0, qr0
/* 80059A04 00056804  DB C1 00 B0 */	stfd f30, 0xb0(r1)
/* 80059A08 00056808  F3 C1 00 B8 */	psq_st f30, 184(r1), 0, qr0
/* 80059A0C 0005680C  93 E1 00 AC */	stw r31, 0xac(r1)
/* 80059A10 00056810  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 80059A14 00056814  FF C0 08 90 */	fmr f30, f1
/* 80059A18 00056818  38 63 C2 A4 */	addi r3, r3, shared__13cruise_bubble@l
/* 80059A1C 0005681C  FF E0 10 90 */	fmr f31, f2
/* 80059A20 00056820  80 63 00 08 */	lwz r3, 8(r3)
/* 80059A24 00056824  28 03 00 00 */	cmplwi r3, 0
/* 80059A28 00056828  41 82 01 8C */	beq lbl_80059BB4
/* 80059A2C 0005682C  80 03 00 00 */	lwz r0, 0(r3)
/* 80059A30 00056830  2C 00 00 05 */	cmpwi r0, 5
/* 80059A34 00056834  41 82 00 08 */	beq lbl_80059A3C
/* 80059A38 00056838  48 00 01 7C */	b lbl_80059BB4
lbl_80059A3C:
/* 80059A3C 0005683C  C0 43 00 08 */	lfs f2, 8(r3)
/* 80059A40 00056840  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 80059A44 00056844  C0 02 8A 08 */	lfs f0, lbl_803CD388-_SDA2_BASE_(r2)
/* 80059A48 00056848  38 83 53 3C */	addi r4, r3, stringBase0__13cruise_bubble@l
/* 80059A4C 0005684C  FC 20 10 1E */	fctiwz f1, f2
/* 80059A50 00056850  38 61 00 34 */	addi r3, r1, 0x34
/* 80059A54 00056854  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80059A58 00056858  38 84 02 80 */	addi r4, r4, 0x280
/* 80059A5C 0005685C  D8 21 00 90 */	stfd f1, 0x90(r1)
/* 80059A60 00056860  FC 00 00 1E */	fctiwz f0, f0
/* 80059A64 00056864  80 A1 00 94 */	lwz r5, 0x94(r1)
/* 80059A68 00056868  D8 01 00 98 */	stfd f0, 0x98(r1)
/* 80059A6C 0005686C  1C C5 00 64 */	mulli r6, r5, 0x64
/* 80059A70 00056870  80 01 00 9C */	lwz r0, 0x9c(r1)
/* 80059A74 00056874  7C C6 00 50 */	subf r6, r6, r0
/* 80059A78 00056878  4C C6 31 82 */	crclr 6
/* 80059A7C 0005687C  48 18 A4 B9 */	bl sprintf
/* 80059A80 00056880  80 8D 81 80 */	lwz r4, lbl_803CAA80-_SDA_BASE_(r13)
/* 80059A84 00056884  3C 60 80 25 */	lis r3, lbl_80255200@ha
/* 80059A88 00056888  38 C3 52 00 */	addi r6, r3, lbl_80255200@l
/* 80059A8C 0005688C  80 02 81 94 */	lwz r0, g_WHITE-_SDA2_BASE_(r2)
/* 80059A90 00056890  C0 04 01 7C */	lfs f0, 0x17c(r4)
/* 80059A94 00056894  38 61 00 44 */	addi r3, r1, 0x44
/* 80059A98 00056898  38 A1 00 10 */	addi r5, r1, 0x10
/* 80059A9C 0005689C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80059AA0 000568A0  EC 5F 00 32 */	fmuls f2, f31, f0
/* 80059AA4 000568A4  C0 24 01 6C */	lfs f1, 0x16c(r4)
/* 80059AA8 000568A8  C0 04 01 70 */	lfs f0, 0x170(r4)
/* 80059AAC 000568AC  EC 21 10 2A */	fadds f1, f1, f2
/* 80059AB0 000568B0  80 84 01 68 */	lwz r4, 0x168(r4)
/* 80059AB4 000568B4  EC 40 10 2A */	fadds f2, f0, f2
/* 80059AB8 000568B8  C0 62 89 B8 */	lfs f3, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 80059ABC 000568BC  4B FB E4 39 */	bl create__5xfontFUifff10iColor_tagRC13basic_rect_esc__0_f_esc__1_
/* 80059AC0 000568C0  83 E1 00 44 */	lwz r31, 0x44(r1)
/* 80059AC4 000568C4  FC 20 F8 90 */	fmr f1, f31
/* 80059AC8 000568C8  81 81 00 48 */	lwz r12, 0x48(r1)
/* 80059ACC 000568CC  38 61 00 78 */	addi r3, r1, 0x78
/* 80059AD0 000568D0  81 61 00 4C */	lwz r11, 0x4c(r1)
/* 80059AD4 000568D4  38 81 00 0C */	addi r4, r1, 0xc
/* 80059AD8 000568D8  81 41 00 50 */	lwz r10, 0x50(r1)
/* 80059ADC 000568DC  81 21 00 54 */	lwz r9, 0x54(r1)
/* 80059AE0 000568E0  38 A1 00 08 */	addi r5, r1, 8
/* 80059AE4 000568E4  81 01 00 58 */	lwz r8, 0x58(r1)
/* 80059AE8 000568E8  80 E1 00 5C */	lwz r7, 0x5c(r1)
/* 80059AEC 000568EC  80 C1 00 60 */	lwz r6, 0x60(r1)
/* 80059AF0 000568F0  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80059AF4 000568F4  93 E1 00 68 */	stw r31, 0x68(r1)
/* 80059AF8 000568F8  91 81 00 6C */	stw r12, 0x6c(r1)
/* 80059AFC 000568FC  91 61 00 70 */	stw r11, 0x70(r1)
/* 80059B00 00056900  91 41 00 74 */	stw r10, 0x74(r1)
/* 80059B04 00056904  91 21 00 78 */	stw r9, 0x78(r1)
/* 80059B08 00056908  91 01 00 7C */	stw r8, 0x7c(r1)
/* 80059B0C 0005690C  90 E1 00 80 */	stw r7, 0x80(r1)
/* 80059B10 00056910  90 C1 00 84 */	stw r6, 0x84(r1)
/* 80059B14 00056914  90 01 00 88 */	stw r0, 0x88(r1)
/* 80059B18 00056918  80 02 8A 04 */	lwz r0, lbl_803CD384-_SDA2_BASE_(r2)
/* 80059B1C 0005691C  90 01 00 08 */	stw r0, 8(r1)
/* 80059B20 00056920  80 02 8A 00 */	lwz r0, lbl_803CD380-_SDA2_BASE_(r2)
/* 80059B24 00056924  90 01 00 0C */	stw r0, 0xc(r1)
/* 80059B28 00056928  48 00 00 B1 */	bl lerp__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FR10iColor_tagf10iColor_tag10iColor_tag
/* 80059B2C 0005692C  C0 22 89 DC */	lfs f1, lbl_803CD35C-_SDA2_BASE_(r2)
/* 80059B30 00056930  38 61 00 14 */	addi r3, r1, 0x14
/* 80059B34 00056934  C0 02 89 C8 */	lfs f0, lbl_803CD348-_SDA2_BASE_(r2)
/* 80059B38 00056938  38 81 00 68 */	addi r4, r1, 0x68
/* 80059B3C 0005693C  38 A1 00 34 */	addi r5, r1, 0x34
/* 80059B40 00056940  EC 01 07 BA */	fmadds f0, f1, f30, f0
/* 80059B44 00056944  FC 00 00 1E */	fctiwz f0, f0
/* 80059B48 00056948  D8 01 00 A0 */	stfd f0, 0xa0(r1)
/* 80059B4C 0005694C  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80059B50 00056950  98 01 00 7B */	stb r0, 0x7b(r1)
/* 80059B54 00056954  4B FC 78 25 */	bl bounds__5xfontCFPCc
/* 80059B58 00056958  80 A1 00 14 */	lwz r5, 0x14(r1)
/* 80059B5C 0005695C  38 61 00 68 */	addi r3, r1, 0x68
/* 80059B60 00056960  80 01 00 18 */	lwz r0, 0x18(r1)
/* 80059B64 00056964  38 81 00 34 */	addi r4, r1, 0x34
/* 80059B68 00056968  80 CD 81 80 */	lwz r6, lbl_803CAA80-_SDA_BASE_(r13)
/* 80059B6C 0005696C  90 A1 00 24 */	stw r5, 0x24(r1)
/* 80059B70 00056970  80 A1 00 1C */	lwz r5, 0x1c(r1)
/* 80059B74 00056974  90 01 00 28 */	stw r0, 0x28(r1)
/* 80059B78 00056978  80 01 00 20 */	lwz r0, 0x20(r1)
/* 80059B7C 0005697C  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 80059B80 00056980  C0 46 01 74 */	lfs f2, 0x174(r6)
/* 80059B84 00056984  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80059B88 00056988  90 01 00 30 */	stw r0, 0x30(r1)
/* 80059B8C 0005698C  C0 26 01 78 */	lfs f1, 0x178(r6)
/* 80059B90 00056990  EC 62 00 28 */	fsubs f3, f2, f0
/* 80059B94 00056994  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80059B98 00056998  C0 A2 89 C8 */	lfs f5, lbl_803CD348-_SDA2_BASE_(r2)
/* 80059B9C 0005699C  C0 81 00 2C */	lfs f4, 0x2c(r1)
/* 80059BA0 000569A0  EC 01 00 28 */	fsubs f0, f1, f0
/* 80059BA4 000569A4  C0 41 00 30 */	lfs f2, 0x30(r1)
/* 80059BA8 000569A8  EC 25 19 3C */	fnmsubs f1, f5, f4, f3
/* 80059BAC 000569AC  EC 45 00 BC */	fnmsubs f2, f5, f2, f0
/* 80059BB0 000569B0  4B FD 59 61 */	bl render__5xfontCFPCcff
lbl_80059BB4:
/* 80059BB4 000569B4  E3 E1 00 C8 */	psq_l f31, 200(r1), 0, qr0
/* 80059BB8 000569B8  CB E1 00 C0 */	lfd f31, 0xc0(r1)
/* 80059BBC 000569BC  E3 C1 00 B8 */	psq_l f30, 184(r1), 0, qr0
/* 80059BC0 000569C0  CB C1 00 B0 */	lfd f30, 0xb0(r1)
/* 80059BC4 000569C4  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 80059BC8 000569C8  83 E1 00 AC */	lwz r31, 0xac(r1)
/* 80059BCC 000569CC  7C 08 03 A6 */	mtlr r0
/* 80059BD0 000569D0  38 21 00 D0 */	addi r1, r1, 0xd0
/* 80059BD4 000569D4  4E 80 00 20 */	blr 

/* lerp__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FR10iColor_tagf10iColor_tag10iColor_tag */
lerp__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FR10iColor_tagf10iColor_tag10iColor_tag:
/* 80059BD8 000569D8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80059BDC 000569DC  7C 08 02 A6 */	mflr r0
/* 80059BE0 000569E0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80059BE4 000569E4  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 80059BE8 000569E8  FF E0 08 90 */	fmr f31, f1
/* 80059BEC 000569EC  93 E1 00 14 */	stw r31, 0x14(r1)
/* 80059BF0 000569F0  7C BF 2B 78 */	mr r31, r5
/* 80059BF4 000569F4  93 C1 00 10 */	stw r30, 0x10(r1)
/* 80059BF8 000569F8  7C 9E 23 78 */	mr r30, r4
/* 80059BFC 000569FC  93 A1 00 0C */	stw r29, 0xc(r1)
/* 80059C00 00056A00  7C 7D 1B 78 */	mr r29, r3
/* 80059C04 00056A04  88 84 00 00 */	lbz r4, 0(r4)
/* 80059C08 00056A08  88 A5 00 00 */	lbz r5, 0(r5)
/* 80059C0C 00056A0C  48 00 00 61 */	bl lerp__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FRUcfUcUc
/* 80059C10 00056A10  FC 20 F8 90 */	fmr f1, f31
/* 80059C14 00056A14  88 9E 00 01 */	lbz r4, 1(r30)
/* 80059C18 00056A18  88 BF 00 01 */	lbz r5, 1(r31)
/* 80059C1C 00056A1C  38 7D 00 01 */	addi r3, r29, 1
/* 80059C20 00056A20  48 00 00 4D */	bl lerp__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FRUcfUcUc
/* 80059C24 00056A24  FC 20 F8 90 */	fmr f1, f31
/* 80059C28 00056A28  88 9E 00 02 */	lbz r4, 2(r30)
/* 80059C2C 00056A2C  88 BF 00 02 */	lbz r5, 2(r31)
/* 80059C30 00056A30  38 7D 00 02 */	addi r3, r29, 2
/* 80059C34 00056A34  48 00 00 39 */	bl lerp__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FRUcfUcUc
/* 80059C38 00056A38  FC 20 F8 90 */	fmr f1, f31
/* 80059C3C 00056A3C  88 9E 00 03 */	lbz r4, 3(r30)
/* 80059C40 00056A40  88 BF 00 03 */	lbz r5, 3(r31)
/* 80059C44 00056A44  38 7D 00 03 */	addi r3, r29, 3
/* 80059C48 00056A48  48 00 00 25 */	bl lerp__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FRUcfUcUc
/* 80059C4C 00056A4C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80059C50 00056A50  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80059C54 00056A54  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 80059C58 00056A58  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 80059C5C 00056A5C  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 80059C60 00056A60  7C 08 03 A6 */	mtlr r0
/* 80059C64 00056A64  38 21 00 20 */	addi r1, r1, 0x20
/* 80059C68 00056A68  4E 80 00 20 */	blr 

/* lerp__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FRUcfUcUc */
lerp__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FRUcfUcUc:
/* 80059C6C 00056A6C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80059C70 00056A70  3C C0 43 30 */	lis r6, 0x4330
/* 80059C74 00056A74  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 80059C78 00056A78  54 A4 06 3E */	clrlwi r4, r5, 0x18
/* 80059C7C 00056A7C  90 C1 00 08 */	stw r6, 8(r1)
/* 80059C80 00056A80  C8 82 89 E0 */	lfd f4, lbl_803CD360-_SDA2_BASE_(r2)
/* 80059C84 00056A84  90 81 00 0C */	stw r4, 0xc(r1)
/* 80059C88 00056A88  C0 A2 89 C8 */	lfs f5, lbl_803CD348-_SDA2_BASE_(r2)
/* 80059C8C 00056A8C  C8 01 00 08 */	lfd f0, 8(r1)
/* 80059C90 00056A90  90 01 00 14 */	stw r0, 0x14(r1)
/* 80059C94 00056A94  EC 60 20 28 */	fsubs f3, f0, f4
/* 80059C98 00056A98  90 C1 00 10 */	stw r6, 0x10(r1)
/* 80059C9C 00056A9C  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80059CA0 00056AA0  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80059CA4 00056AA4  EC 40 20 28 */	fsubs f2, f0, f4
/* 80059CA8 00056AA8  90 C1 00 18 */	stw r6, 0x18(r1)
/* 80059CAC 00056AAC  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 80059CB0 00056AB0  EC 43 10 28 */	fsubs f2, f3, f2
/* 80059CB4 00056AB4  EC 00 20 28 */	fsubs f0, f0, f4
/* 80059CB8 00056AB8  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 80059CBC 00056ABC  EC 05 00 2A */	fadds f0, f5, f0
/* 80059CC0 00056AC0  FC 00 00 1E */	fctiwz f0, f0
/* 80059CC4 00056AC4  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 80059CC8 00056AC8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80059CCC 00056ACC  98 03 00 00 */	stb r0, 0(r3)
/* 80059CD0 00056AD0  38 21 00 30 */	addi r1, r1, 0x30
/* 80059CD4 00056AD4  4E 80 00 20 */	blr 

/* update_hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Ff */
update_hud__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Ff:
/* 80059CD8 00056AD8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80059CDC 00056ADC  7C 08 02 A6 */	mflr r0
/* 80059CE0 00056AE0  90 01 00 44 */	stw r0, 0x44(r1)
/* 80059CE4 00056AE4  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80059CE8 00056AE8  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 80059CEC 00056AEC  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 80059CF0 00056AF0  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 80059CF4 00056AF4  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80059CF8 00056AF8  3C 60 80 2E */	lis r3, lbl_802DCC7C@ha
/* 80059CFC 00056AFC  FF C0 08 90 */	fmr f30, f1
/* 80059D00 00056B00  3B E3 CC 7C */	addi r31, r3, lbl_802DCC7C@l
/* 80059D04 00056B04  80 1F 06 54 */	lwz r0, 0x654(r31)
/* 80059D08 00056B08  28 00 00 00 */	cmplwi r0, 0
/* 80059D0C 00056B0C  41 82 01 84 */	beq lbl_80059E90
/* 80059D10 00056B10  C0 3F 00 08 */	lfs f1, 8(r31)
/* 80059D14 00056B14  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80059D18 00056B18  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 80059D1C 00056B1C  EC 21 07 BA */	fmadds f1, f1, f30, f0
/* 80059D20 00056B20  C0 62 89 C0 */	lfs f3, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 80059D24 00056B24  4B FB 4C 15 */	bl range_limit_esc__0_f_esc__1___Ffff
/* 80059D28 00056B28  3C 60 80 2E */	lis r3, lbl_802DCC7C@ha
/* 80059D2C 00056B2C  D0 3F 00 04 */	stfs f1, 4(r31)
/* 80059D30 00056B30  3B C3 CC 7C */	addi r30, r3, lbl_802DCC7C@l
/* 80059D34 00056B34  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 80059D38 00056B38  C0 1E 00 0C */	lfs f0, 0xc(r30)
/* 80059D3C 00056B3C  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 80059D40 00056B40  EC 21 07 BA */	fmadds f1, f1, f30, f0
/* 80059D44 00056B44  C0 62 89 C0 */	lfs f3, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 80059D48 00056B48  4B FB 4B F1 */	bl range_limit_esc__0_f_esc__1___Ffff
/* 80059D4C 00056B4C  D0 3E 00 0C */	stfs f1, 0xc(r30)
/* 80059D50 00056B50  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 80059D54 00056B54  38 83 C2 A4 */	addi r4, r3, shared__13cruise_bubble@l
/* 80059D58 00056B58  3C 60 80 2E */	lis r3, lbl_802DCC7C@ha
/* 80059D5C 00056B5C  80 AD 81 80 */	lwz r5, lbl_803CAA80-_SDA_BASE_(r13)
/* 80059D60 00056B60  38 63 CC 7C */	addi r3, r3, lbl_802DCC7C@l
/* 80059D64 00056B64  80 84 00 24 */	lwz r4, 0x24(r4)
/* 80059D68 00056B68  3B A3 06 88 */	addi r29, r3, 0x688
/* 80059D6C 00056B6C  C0 05 00 40 */	lfs f0, 0x40(r5)
/* 80059D70 00056B70  7F A3 EB 78 */	mr r3, r29
/* 80059D74 00056B74  C0 44 00 0C */	lfs f2, 0xc(r4)
/* 80059D78 00056B78  C0 25 01 58 */	lfs f1, 0x158(r5)
/* 80059D7C 00056B7C  EF E2 00 24 */	fdivs f31, f2, f0
/* 80059D80 00056B80  C0 45 01 5C */	lfs f2, 0x15c(r5)
/* 80059D84 00056B84  4B FC C5 95 */	bl assign__5xVec2Fff
/* 80059D88 00056B88  FC 20 F8 90 */	fmr f1, f31
/* 80059D8C 00056B8C  7F A3 EB 78 */	mr r3, r29
/* 80059D90 00056B90  48 00 63 71 */	bl __amu__5xVec2Ff
/* 80059D94 00056B94  3C 60 80 2E */	lis r3, lbl_802DCC7C@ha
/* 80059D98 00056B98  FC 20 F0 90 */	fmr f1, f30
/* 80059D9C 00056B9C  38 63 CC 7C */	addi r3, r3, lbl_802DCC7C@l
/* 80059DA0 00056BA0  80 83 00 20 */	lwz r4, 0x20(r3)
/* 80059DA4 00056BA4  38 63 06 74 */	addi r3, r3, 0x674
/* 80059DA8 00056BA8  D3 E4 00 24 */	stfs f31, 0x24(r4)
/* 80059DAC 00056BAC  48 00 01 6D */	bl update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17uv_animated_modelFf
/* 80059DB0 00056BB0  3C 80 80 2E */	lis r4, lbl_802DCC7C@ha
/* 80059DB4 00056BB4  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 80059DB8 00056BB8  38 84 CC 7C */	addi r4, r4, lbl_802DCC7C@l
/* 80059DBC 00056BBC  38 A0 00 01 */	li r5, 1
/* 80059DC0 00056BC0  3B 84 00 30 */	addi r28, r4, 0x30
/* 80059DC4 00056BC4  7F 84 E3 78 */	mr r4, r28
/* 80059DC8 00056BC8  48 00 00 28 */	b lbl_80059DF0
lbl_80059DCC:
/* 80059DCC 00056BCC  80 04 00 24 */	lwz r0, 0x24(r4)
/* 80059DD0 00056BD0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80059DD4 00056BD4  40 82 00 14 */	bne lbl_80059DE8
/* 80059DD8 00056BD8  C0 22 89 FC */	lfs f1, lbl_803CD37C-_SDA2_BASE_(r2)
/* 80059DDC 00056BDC  C0 03 01 40 */	lfs f0, 0x140(r3)
/* 80059DE0 00056BE0  EC 01 00 24 */	fdivs f0, f1, f0
/* 80059DE4 00056BE4  D0 04 00 3C */	stfs f0, 0x3c(r4)
lbl_80059DE8:
/* 80059DE8 00056BE8  38 84 00 30 */	addi r4, r4, 0x30
/* 80059DEC 00056BEC  38 A5 00 01 */	addi r5, r5, 1
lbl_80059DF0:
/* 80059DF0 00056BF0  80 1F 06 54 */	lwz r0, 0x654(r31)
/* 80059DF4 00056BF4  7C 05 00 40 */	cmplw r5, r0
/* 80059DF8 00056BF8  41 80 FF D4 */	blt lbl_80059DCC
/* 80059DFC 00056BFC  3C 60 80 2E */	lis r3, lbl_802DCC7C@ha
/* 80059E00 00056C00  3B 60 00 00 */	li r27, 0
/* 80059E04 00056C04  3B C3 CC 7C */	addi r30, r3, lbl_802DCC7C@l
/* 80059E08 00056C08  7F DD F3 78 */	mr r29, r30
/* 80059E0C 00056C0C  48 00 00 50 */	b lbl_80059E5C
lbl_80059E10:
/* 80059E10 00056C10  FC 20 F0 90 */	fmr f1, f30
/* 80059E14 00056C14  38 7D 00 24 */	addi r3, r29, 0x24
/* 80059E18 00056C18  4B FF FB 3D */	bl update_gizmo__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FRQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_9hud_gizmof
/* 80059E1C 00056C1C  C0 3D 00 38 */	lfs f1, 0x38(r29)
/* 80059E20 00056C20  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 80059E24 00056C24  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80059E28 00056C28  4C 40 13 82 */	cror 2, 0, 2
/* 80059E2C 00056C2C  40 82 00 28 */	bne lbl_80059E54
/* 80059E30 00056C30  80 9F 06 54 */	lwz r4, 0x654(r31)
/* 80059E34 00056C34  38 7D 00 24 */	addi r3, r29, 0x24
/* 80059E38 00056C38  38 84 FF FF */	addi r4, r4, -1
/* 80059E3C 00056C3C  1C 04 00 30 */	mulli r0, r4, 0x30
/* 80059E40 00056C40  90 9F 06 54 */	stw r4, 0x654(r31)
/* 80059E44 00056C44  7C 9E 02 14 */	add r4, r30, r0
/* 80059E48 00056C48  38 84 00 24 */	addi r4, r4, 0x24
/* 80059E4C 00056C4C  48 00 00 69 */	bl __as__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_9hud_gizmoFRCQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_9hud_gizmo
/* 80059E50 00056C50  48 00 00 0C */	b lbl_80059E5C
lbl_80059E54:
/* 80059E54 00056C54  3B BD 00 30 */	addi r29, r29, 0x30
/* 80059E58 00056C58  3B 7B 00 01 */	addi r27, r27, 1
lbl_80059E5C:
/* 80059E5C 00056C5C  80 1F 06 54 */	lwz r0, 0x654(r31)
/* 80059E60 00056C60  7C 1B 00 40 */	cmplw r27, r0
/* 80059E64 00056C64  41 80 FF AC */	blt lbl_80059E10
/* 80059E68 00056C68  38 60 00 01 */	li r3, 1
/* 80059E6C 00056C6C  48 00 00 18 */	b lbl_80059E84
lbl_80059E70:
/* 80059E70 00056C70  80 1C 00 24 */	lwz r0, 0x24(r28)
/* 80059E74 00056C74  38 63 00 01 */	addi r3, r3, 1
/* 80059E78 00056C78  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 80059E7C 00056C7C  90 1C 00 24 */	stw r0, 0x24(r28)
/* 80059E80 00056C80  3B 9C 00 30 */	addi r28, r28, 0x30
lbl_80059E84:
/* 80059E84 00056C84  80 1F 06 54 */	lwz r0, 0x654(r31)
/* 80059E88 00056C88  7C 03 00 40 */	cmplw r3, r0
/* 80059E8C 00056C8C  41 80 FF E4 */	blt lbl_80059E70
lbl_80059E90:
/* 80059E90 00056C90  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 80059E94 00056C94  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80059E98 00056C98  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 80059E9C 00056C9C  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 80059EA0 00056CA0  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 80059EA4 00056CA4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80059EA8 00056CA8  7C 08 03 A6 */	mtlr r0
/* 80059EAC 00056CAC  38 21 00 40 */	addi r1, r1, 0x40
/* 80059EB0 00056CB0  4E 80 00 20 */	blr 

/* __as__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@9hud_gizmoFRCQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@9hud_gizmo */
__as__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_9hud_gizmoFRCQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_9hud_gizmo:
/* 80059EB4 00056CB4  80 04 00 00 */	lwz r0, 0(r4)
/* 80059EB8 00056CB8  80 A4 00 04 */	lwz r5, 4(r4)
/* 80059EBC 00056CBC  90 03 00 00 */	stw r0, 0(r3)
/* 80059EC0 00056CC0  80 04 00 08 */	lwz r0, 8(r4)
/* 80059EC4 00056CC4  90 A3 00 04 */	stw r5, 4(r3)
/* 80059EC8 00056CC8  80 A4 00 0C */	lwz r5, 0xc(r4)
/* 80059ECC 00056CCC  90 03 00 08 */	stw r0, 8(r3)
/* 80059ED0 00056CD0  80 04 00 10 */	lwz r0, 0x10(r4)
/* 80059ED4 00056CD4  90 A3 00 0C */	stw r5, 0xc(r3)
/* 80059ED8 00056CD8  C0 04 00 14 */	lfs f0, 0x14(r4)
/* 80059EDC 00056CDC  90 03 00 10 */	stw r0, 0x10(r3)
/* 80059EE0 00056CE0  C0 24 00 18 */	lfs f1, 0x18(r4)
/* 80059EE4 00056CE4  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 80059EE8 00056CE8  C0 04 00 1C */	lfs f0, 0x1c(r4)
/* 80059EEC 00056CEC  D0 23 00 18 */	stfs f1, 0x18(r3)
/* 80059EF0 00056CF0  C0 24 00 20 */	lfs f1, 0x20(r4)
/* 80059EF4 00056CF4  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 80059EF8 00056CF8  C0 04 00 24 */	lfs f0, 0x24(r4)
/* 80059EFC 00056CFC  D0 23 00 20 */	stfs f1, 0x20(r3)
/* 80059F00 00056D00  80 A4 00 28 */	lwz r5, 0x28(r4)
/* 80059F04 00056D04  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 80059F08 00056D08  80 04 00 2C */	lwz r0, 0x2c(r4)
/* 80059F0C 00056D0C  90 A3 00 28 */	stw r5, 0x28(r3)
/* 80059F10 00056D10  90 03 00 2C */	stw r0, 0x2c(r3)
/* 80059F14 00056D14  4E 80 00 20 */	blr 

/* update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17uv_animated_modelFf */
update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17uv_animated_modelFf:
/* 80059F18 00056D18  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80059F1C 00056D1C  7C 08 02 A6 */	mflr r0
/* 80059F20 00056D20  90 01 00 24 */	stw r0, 0x24(r1)
/* 80059F24 00056D24  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80059F28 00056D28  7C 7F 1B 78 */	mr r31, r3
/* 80059F2C 00056D2C  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 80059F30 00056D30  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 80059F34 00056D34  FC 02 00 00 */	fcmpu cr0, f2, f0
/* 80059F38 00056D38  40 82 00 10 */	bne lbl_80059F48
/* 80059F3C 00056D3C  C0 1F 00 18 */	lfs f0, 0x18(r31)
/* 80059F40 00056D40  FC 02 00 00 */	fcmpu cr0, f2, f0
/* 80059F44 00056D44  41 82 00 48 */	beq lbl_80059F8C
lbl_80059F48:
/* 80059F48 00056D48  38 7F 00 14 */	addi r3, r31, 0x14
/* 80059F4C 00056D4C  48 00 61 79 */	bl __ml__5xVec2CFf
/* 80059F50 00056D50  90 81 00 0C */	stw r4, 0xc(r1)
/* 80059F54 00056D54  38 81 00 08 */	addi r4, r1, 8
/* 80059F58 00056D58  90 61 00 08 */	stw r3, 8(r1)
/* 80059F5C 00056D5C  38 7F 00 0C */	addi r3, r31, 0xc
/* 80059F60 00056D60  48 00 61 41 */	bl __apl__5xVec2FRC5xVec2
/* 80059F64 00056D64  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 80059F68 00056D68  C0 42 89 C0 */	lfs f2, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 80059F6C 00056D6C  4B FD 64 41 */	bl xfmod__Fff
/* 80059F70 00056D70  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 80059F74 00056D74  C0 3F 00 10 */	lfs f1, 0x10(r31)
/* 80059F78 00056D78  C0 42 89 C0 */	lfs f2, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 80059F7C 00056D7C  4B FD 64 31 */	bl xfmod__Fff
/* 80059F80 00056D80  D0 3F 00 10 */	stfs f1, 0x10(r31)
/* 80059F84 00056D84  7F E3 FB 78 */	mr r3, r31
/* 80059F88 00056D88  48 00 00 19 */	bl refresh__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17uv_animated_modelFv
lbl_80059F8C:
/* 80059F8C 00056D8C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80059F90 00056D90  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80059F94 00056D94  7C 08 03 A6 */	mtlr r0
/* 80059F98 00056D98  38 21 00 20 */	addi r1, r1, 0x20
/* 80059F9C 00056D9C  4E 80 00 20 */	blr 

/* refresh__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17uv_animated_modelFv */
refresh__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17uv_animated_modelFv:
/* 80059FA0 00056DA0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80059FA4 00056DA4  7C 08 02 A6 */	mflr r0
/* 80059FA8 00056DA8  38 80 00 10 */	li r4, 0x10
/* 80059FAC 00056DAC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80059FB0 00056DB0  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80059FB4 00056DB4  7C 7B 1B 78 */	mr r27, r3
/* 80059FB8 00056DB8  80 63 00 00 */	lwz r3, 0(r3)
/* 80059FBC 00056DBC  80 1B 00 08 */	lwz r0, 8(r27)
/* 80059FC0 00056DC0  83 E3 00 18 */	lwz r31, 0x18(r3)
/* 80059FC4 00056DC4  80 BB 00 04 */	lwz r5, 4(r27)
/* 80059FC8 00056DC8  54 00 18 38 */	slwi r0, r0, 3
/* 80059FCC 00056DCC  83 9F 00 34 */	lwz r28, 0x34(r31)
/* 80059FD0 00056DD0  7F E3 FB 78 */	mr r3, r31
/* 80059FD4 00056DD4  7C BE 2B 78 */	mr r30, r5
/* 80059FD8 00056DD8  7F A5 02 14 */	add r29, r5, r0
/* 80059FDC 00056DDC  48 1B B5 5D */	bl RpGeometryLock
/* 80059FE0 00056DE0  38 7D 00 07 */	addi r3, r29, 7
/* 80059FE4 00056DE4  7C 1E E8 40 */	cmplw r30, r29
/* 80059FE8 00056DE8  7C 7E 18 50 */	subf r3, r30, r3
/* 80059FEC 00056DEC  54 63 E8 FE */	srwi r3, r3, 3
/* 80059FF0 00056DF0  40 80 00 D4 */	bge lbl_8005A0C4
/* 80059FF4 00056DF4  54 60 F0 BF */	rlwinm. r0, r3, 0x1e, 2, 0x1f
/* 80059FF8 00056DF8  7C 09 03 A6 */	mtctr r0
/* 80059FFC 00056DFC  41 82 00 98 */	beq lbl_8005A094
lbl_8005A000:
/* 8005A000 00056E00  C0 3E 00 00 */	lfs f1, 0(r30)
/* 8005A004 00056E04  C0 1B 00 0C */	lfs f0, 0xc(r27)
/* 8005A008 00056E08  EC 01 00 2A */	fadds f0, f1, f0
/* 8005A00C 00056E0C  D0 1C 00 00 */	stfs f0, 0(r28)
/* 8005A010 00056E10  C0 3E 00 04 */	lfs f1, 4(r30)
/* 8005A014 00056E14  C0 1B 00 10 */	lfs f0, 0x10(r27)
/* 8005A018 00056E18  EC 01 00 2A */	fadds f0, f1, f0
/* 8005A01C 00056E1C  D0 1C 00 04 */	stfs f0, 4(r28)
/* 8005A020 00056E20  C0 3E 00 08 */	lfs f1, 8(r30)
/* 8005A024 00056E24  C0 1B 00 0C */	lfs f0, 0xc(r27)
/* 8005A028 00056E28  EC 01 00 2A */	fadds f0, f1, f0
/* 8005A02C 00056E2C  D0 1C 00 08 */	stfs f0, 8(r28)
/* 8005A030 00056E30  C0 3E 00 0C */	lfs f1, 0xc(r30)
/* 8005A034 00056E34  C0 1B 00 10 */	lfs f0, 0x10(r27)
/* 8005A038 00056E38  EC 01 00 2A */	fadds f0, f1, f0
/* 8005A03C 00056E3C  D0 1C 00 0C */	stfs f0, 0xc(r28)
/* 8005A040 00056E40  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 8005A044 00056E44  C0 1B 00 0C */	lfs f0, 0xc(r27)
/* 8005A048 00056E48  EC 01 00 2A */	fadds f0, f1, f0
/* 8005A04C 00056E4C  D0 1C 00 10 */	stfs f0, 0x10(r28)
/* 8005A050 00056E50  C0 3E 00 14 */	lfs f1, 0x14(r30)
/* 8005A054 00056E54  C0 1B 00 10 */	lfs f0, 0x10(r27)
/* 8005A058 00056E58  EC 01 00 2A */	fadds f0, f1, f0
/* 8005A05C 00056E5C  D0 1C 00 14 */	stfs f0, 0x14(r28)
/* 8005A060 00056E60  C0 3E 00 18 */	lfs f1, 0x18(r30)
/* 8005A064 00056E64  C0 1B 00 0C */	lfs f0, 0xc(r27)
/* 8005A068 00056E68  EC 01 00 2A */	fadds f0, f1, f0
/* 8005A06C 00056E6C  D0 1C 00 18 */	stfs f0, 0x18(r28)
/* 8005A070 00056E70  C0 3E 00 1C */	lfs f1, 0x1c(r30)
/* 8005A074 00056E74  3B DE 00 20 */	addi r30, r30, 0x20
/* 8005A078 00056E78  C0 1B 00 10 */	lfs f0, 0x10(r27)
/* 8005A07C 00056E7C  EC 01 00 2A */	fadds f0, f1, f0
/* 8005A080 00056E80  D0 1C 00 1C */	stfs f0, 0x1c(r28)
/* 8005A084 00056E84  3B 9C 00 20 */	addi r28, r28, 0x20
/* 8005A088 00056E88  42 00 FF 78 */	bdnz lbl_8005A000
/* 8005A08C 00056E8C  70 63 00 03 */	andi. r3, r3, 3
/* 8005A090 00056E90  41 82 00 34 */	beq lbl_8005A0C4
lbl_8005A094:
/* 8005A094 00056E94  7C 69 03 A6 */	mtctr r3
lbl_8005A098:
/* 8005A098 00056E98  C0 3E 00 00 */	lfs f1, 0(r30)
/* 8005A09C 00056E9C  C0 1B 00 0C */	lfs f0, 0xc(r27)
/* 8005A0A0 00056EA0  EC 01 00 2A */	fadds f0, f1, f0
/* 8005A0A4 00056EA4  D0 1C 00 00 */	stfs f0, 0(r28)
/* 8005A0A8 00056EA8  C0 3E 00 04 */	lfs f1, 4(r30)
/* 8005A0AC 00056EAC  3B DE 00 08 */	addi r30, r30, 8
/* 8005A0B0 00056EB0  C0 1B 00 10 */	lfs f0, 0x10(r27)
/* 8005A0B4 00056EB4  EC 01 00 2A */	fadds f0, f1, f0
/* 8005A0B8 00056EB8  D0 1C 00 04 */	stfs f0, 4(r28)
/* 8005A0BC 00056EBC  3B 9C 00 08 */	addi r28, r28, 8
/* 8005A0C0 00056EC0  42 00 FF D8 */	bdnz lbl_8005A098
lbl_8005A0C4:
/* 8005A0C4 00056EC4  7F E3 FB 78 */	mr r3, r31
/* 8005A0C8 00056EC8  48 1B B4 C9 */	bl RpGeometryUnlock
/* 8005A0CC 00056ECC  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8005A0D0 00056ED0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005A0D4 00056ED4  7C 08 03 A6 */	mtlr r0
/* 8005A0D8 00056ED8  38 21 00 20 */	addi r1, r1, 0x20
/* 8005A0DC 00056EDC  4E 80 00 20 */	blr 

/* render_hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv */
render_hud__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv:
/* 8005A0E0 00056EE0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8005A0E4 00056EE4  7C 08 02 A6 */	mflr r0
/* 8005A0E8 00056EE8  3C 60 80 2E */	lis r3, lbl_802DCC7C@ha
/* 8005A0EC 00056EEC  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005A0F0 00056EF0  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 8005A0F4 00056EF4  3B C3 CC 7C */	addi r30, r3, lbl_802DCC7C@l
/* 8005A0F8 00056EF8  80 1E 06 54 */	lwz r0, 0x654(r30)
/* 8005A0FC 00056EFC  28 00 00 00 */	cmplwi r0, 0
/* 8005A100 00056F00  41 82 01 98 */	beq lbl_8005A298
/* 8005A104 00056F04  38 60 00 15 */	li r3, 0x15
/* 8005A108 00056F08  48 05 28 F5 */	bl zRenderState__F14_SDRenderState
/* 8005A10C 00056F0C  3C 60 80 2E */	lis r3, lbl_802DCC7C@ha
/* 8005A110 00056F10  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005A114 00056F14  3B E3 CC 7C */	addi r31, r3, lbl_802DCC7C@l
/* 8005A118 00056F18  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 8005A11C 00056F1C  C0 23 00 24 */	lfs f1, 0x24(r3)
/* 8005A120 00056F20  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005A124 00056F24  40 81 00 50 */	ble lbl_8005A174
/* 8005A128 00056F28  38 60 00 0A */	li r3, 0xa
/* 8005A12C 00056F2C  38 80 00 05 */	li r4, 5
/* 8005A130 00056F30  48 1D 56 AD */	bl RwRenderStateSet
/* 8005A134 00056F34  38 60 00 0B */	li r3, 0xb
/* 8005A138 00056F38  38 80 00 02 */	li r4, 2
/* 8005A13C 00056F3C  48 1D 56 A1 */	bl RwRenderStateSet
/* 8005A140 00056F40  80 8D 81 80 */	lwz r4, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005A144 00056F44  38 61 00 08 */	addi r3, r1, 8
/* 8005A148 00056F48  C0 24 01 54 */	lfs f1, 0x154(r4)
/* 8005A14C 00056F4C  FC 40 08 90 */	fmr f2, f1
/* 8005A150 00056F50  48 00 5F F1 */	bl set_size__13basic_rect_esc__0_f_esc__1_Fff
/* 8005A154 00056F54  C0 22 89 C8 */	lfs f1, lbl_803CD348-_SDA2_BASE_(r2)
/* 8005A158 00056F58  38 61 00 08 */	addi r3, r1, 8
/* 8005A15C 00056F5C  FC 40 08 90 */	fmr f2, f1
/* 8005A160 00056F60  48 00 5F BD */	bl center__13basic_rect_esc__0_f_esc__1_Fff
/* 8005A164 00056F64  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 8005A168 00056F68  38 81 00 08 */	addi r4, r1, 8
/* 8005A16C 00056F6C  C0 23 00 24 */	lfs f1, 0x24(r3)
/* 8005A170 00056F70  4B FF F2 E9 */	bl render_model_2d__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FP14xModelInstanceRC13basic_rect_esc__0_f_esc__1_f
lbl_8005A174:
/* 8005A174 00056F74  38 60 00 0A */	li r3, 0xa
/* 8005A178 00056F78  38 80 00 05 */	li r4, 5
/* 8005A17C 00056F7C  48 1D 56 61 */	bl RwRenderStateSet
/* 8005A180 00056F80  38 60 00 0B */	li r3, 0xb
/* 8005A184 00056F84  38 80 00 06 */	li r4, 6
/* 8005A188 00056F88  48 1D 56 55 */	bl RwRenderStateSet
/* 8005A18C 00056F8C  3C 60 80 2E */	lis r3, lbl_802DCC7C@ha
/* 8005A190 00056F90  3B A0 00 00 */	li r29, 0
/* 8005A194 00056F94  3B 83 CC 7C */	addi r28, r3, lbl_802DCC7C@l
/* 8005A198 00056F98  7F 9F E3 78 */	mr r31, r28
/* 8005A19C 00056F9C  48 00 00 40 */	b lbl_8005A1DC
lbl_8005A1A0:
/* 8005A1A0 00056FA0  38 9F 00 24 */	addi r4, r31, 0x24
/* 8005A1A4 00056FA4  C0 3C 00 04 */	lfs f1, 4(r28)
/* 8005A1A8 00056FA8  C0 1F 00 38 */	lfs f0, 0x38(r31)
/* 8005A1AC 00056FAC  C0 5F 00 48 */	lfs f2, 0x48(r31)
/* 8005A1B0 00056FB0  EC 21 00 32 */	fmuls f1, f1, f0
/* 8005A1B4 00056FB4  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005A1B8 00056FB8  EC 22 00 72 */	fmuls f1, f2, f1
/* 8005A1BC 00056FBC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005A1C0 00056FC0  4C 40 13 82 */	cror 2, 0, 2
/* 8005A1C4 00056FC4  41 82 00 10 */	beq lbl_8005A1D4
/* 8005A1C8 00056FC8  80 64 00 2C */	lwz r3, 0x2c(r4)
/* 8005A1CC 00056FCC  38 84 00 04 */	addi r4, r4, 4
/* 8005A1D0 00056FD0  4B FF F2 89 */	bl render_model_2d__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FP14xModelInstanceRC13basic_rect_esc__0_f_esc__1_f
lbl_8005A1D4:
/* 8005A1D4 00056FD4  3B FF 00 30 */	addi r31, r31, 0x30
/* 8005A1D8 00056FD8  3B BD 00 01 */	addi r29, r29, 1
lbl_8005A1DC:
/* 8005A1DC 00056FDC  80 1E 06 54 */	lwz r0, 0x654(r30)
/* 8005A1E0 00056FE0  7C 1D 00 40 */	cmplw r29, r0
/* 8005A1E4 00056FE4  41 80 FF BC */	blt lbl_8005A1A0
/* 8005A1E8 00056FE8  38 60 00 0A */	li r3, 0xa
/* 8005A1EC 00056FEC  38 80 00 05 */	li r4, 5
/* 8005A1F0 00056FF0  48 1D 55 ED */	bl RwRenderStateSet
/* 8005A1F4 00056FF4  38 60 00 0B */	li r3, 0xb
/* 8005A1F8 00056FF8  38 80 00 02 */	li r4, 2
/* 8005A1FC 00056FFC  48 1D 55 E1 */	bl RwRenderStateSet
/* 8005A200 00057000  3C 60 80 2E */	lis r3, lbl_802DCC7C@ha
/* 8005A204 00057004  7F 9D E3 78 */	mr r29, r28
/* 8005A208 00057008  3B E3 CC 7C */	addi r31, r3, lbl_802DCC7C@l
/* 8005A20C 0005700C  3B 60 00 00 */	li r27, 0
/* 8005A210 00057010  48 00 00 70 */	b lbl_8005A280
lbl_8005A214:
/* 8005A214 00057014  38 9D 00 24 */	addi r4, r29, 0x24
/* 8005A218 00057018  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 8005A21C 0005701C  C0 5D 00 40 */	lfs f2, 0x40(r29)
/* 8005A220 00057020  C0 02 89 C0 */	lfs f0, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005A224 00057024  EC 22 08 2A */	fadds f1, f2, f1
/* 8005A228 00057028  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005A22C 0005702C  40 81 00 0C */	ble lbl_8005A238
/* 8005A230 00057030  FC 20 00 90 */	fmr f1, f0
/* 8005A234 00057034  48 00 00 14 */	b lbl_8005A248
lbl_8005A238:
/* 8005A238 00057038  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005A23C 0005703C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005A240 00057040  4C 40 13 82 */	cror 2, 0, 2
/* 8005A244 00057044  41 82 00 34 */	beq lbl_8005A278
lbl_8005A248:
/* 8005A248 00057048  C0 5C 00 04 */	lfs f2, 4(r28)
/* 8005A24C 0005704C  C0 04 00 14 */	lfs f0, 0x14(r4)
/* 8005A250 00057050  C0 64 00 24 */	lfs f3, 0x24(r4)
/* 8005A254 00057054  EC 42 00 32 */	fmuls f2, f2, f0
/* 8005A258 00057058  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005A25C 0005705C  EC 43 00 B2 */	fmuls f2, f3, f2
/* 8005A260 00057060  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8005A264 00057064  4C 40 13 82 */	cror 2, 0, 2
/* 8005A268 00057068  41 82 00 10 */	beq lbl_8005A278
/* 8005A26C 0005706C  80 64 00 2C */	lwz r3, 0x2c(r4)
/* 8005A270 00057070  38 84 00 04 */	addi r4, r4, 4
/* 8005A274 00057074  4B FF F3 11 */	bl render_glow__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FP14xModelInstanceRC13basic_rect_esc__0_f_esc__1_ff
lbl_8005A278:
/* 8005A278 00057078  3B BD 00 30 */	addi r29, r29, 0x30
/* 8005A27C 0005707C  3B 7B 00 01 */	addi r27, r27, 1
lbl_8005A280:
/* 8005A280 00057080  80 1E 06 54 */	lwz r0, 0x654(r30)
/* 8005A284 00057084  7C 1B 00 40 */	cmplw r27, r0
/* 8005A288 00057088  41 80 FF 8C */	blt lbl_8005A214
/* 8005A28C 0005708C  C0 3C 00 04 */	lfs f1, 4(r28)
/* 8005A290 00057090  C0 5F 00 0C */	lfs f2, 0xc(r31)
/* 8005A294 00057094  4B FF F7 5D */	bl render_timer__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fff
lbl_8005A298:
/* 8005A298 00057098  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 8005A29C 0005709C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8005A2A0 000570A0  7C 08 03 A6 */	mtlr r0
/* 8005A2A4 000570A4  38 21 00 30 */	addi r1, r1, 0x30
/* 8005A2A8 000570A8  4E 80 00 20 */	blr 

/* show_hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv */
show_hud__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv:
/* 8005A2AC 000570AC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005A2B0 000570B0  7C 08 02 A6 */	mflr r0
/* 8005A2B4 000570B4  3C 60 80 2E */	lis r3, lbl_802DCC7C@ha
/* 8005A2B8 000570B8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005A2BC 000570BC  38 83 CC 7C */	addi r4, r3, lbl_802DCC7C@l
/* 8005A2C0 000570C0  38 00 00 01 */	li r0, 1
/* 8005A2C4 000570C4  38 61 00 08 */	addi r3, r1, 8
/* 8005A2C8 000570C8  90 04 06 54 */	stw r0, 0x654(r4)
/* 8005A2CC 000570CC  80 8D 81 80 */	lwz r4, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005A2D0 000570D0  C0 24 01 60 */	lfs f1, 0x160(r4)
/* 8005A2D4 000570D4  48 00 5E 79 */	bl set_size__13basic_rect_esc__0_f_esc__1_Ff
/* 8005A2D8 000570D8  C0 22 89 C8 */	lfs f1, lbl_803CD348-_SDA2_BASE_(r2)
/* 8005A2DC 000570DC  FC 40 08 90 */	fmr f2, f1
/* 8005A2E0 000570E0  48 00 5E 3D */	bl center__13basic_rect_esc__0_f_esc__1_Fff
/* 8005A2E4 000570E4  3C 60 80 2E */	lis r3, lbl_802DCC7C@ha
/* 8005A2E8 000570E8  38 81 00 08 */	addi r4, r1, 8
/* 8005A2EC 000570EC  38 63 CC 7C */	addi r3, r3, lbl_802DCC7C@l
/* 8005A2F0 000570F0  80 A3 00 14 */	lwz r5, 0x14(r3)
/* 8005A2F4 000570F4  38 63 00 24 */	addi r3, r3, 0x24
/* 8005A2F8 000570F8  4B FF F5 CD */	bl show_gizmo__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FRQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_9hud_gizmoRC13basic_rect_esc__0_f_esc__1_P14xModelInstance
/* 8005A2FC 000570FC  3C 60 80 2E */	lis r3, lbl_802DCC7C@ha
/* 8005A300 00057100  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005A304 00057104  38 83 CC 7C */	addi r4, r3, lbl_802DCC7C@l
/* 8005A308 00057108  80 64 00 20 */	lwz r3, 0x20(r4)
/* 8005A30C 0005710C  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 8005A310 00057110  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005A314 00057114  D0 04 00 04 */	stfs f0, 4(r4)
/* 8005A318 00057118  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005A31C 0005711C  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005A320 00057120  C0 03 01 40 */	lfs f0, 0x140(r3)
/* 8005A324 00057124  EC 01 00 24 */	fdivs f0, f1, f0
/* 8005A328 00057128  D0 04 00 08 */	stfs f0, 8(r4)
/* 8005A32C 0005712C  4B FF F6 9D */	bl flash_hud__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005A330 00057130  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005A334 00057134  7C 08 03 A6 */	mtlr r0
/* 8005A338 00057138  38 21 00 20 */	addi r1, r1, 0x20
/* 8005A33C 0005713C  4E 80 00 20 */	blr 

/* hide_hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv */
hide_hud__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv:
/* 8005A340 00057140  3C 60 80 2E */	lis r3, lbl_802DCC7C@ha
/* 8005A344 00057144  38 00 00 00 */	li r0, 0
/* 8005A348 00057148  38 63 CC 7C */	addi r3, r3, lbl_802DCC7C@l
/* 8005A34C 0005714C  90 03 06 54 */	stw r0, 0x654(r3)
/* 8005A350 00057150  80 63 00 20 */	lwz r3, 0x20(r3)
/* 8005A354 00057154  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005A358 00057158  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 8005A35C 0005715C  4E 80 00 20 */	blr 

/* world_to_screen__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FRC5xVec3 */
world_to_screen__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FRC5xVec3:
/* 8005A360 00057160  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8005A364 00057164  7C 08 02 A6 */	mflr r0
/* 8005A368 00057168  3C A0 80 3C */	lis r5, globals@ha
/* 8005A36C 0005716C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005A370 00057170  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8005A374 00057174  3B E5 05 58 */	addi r31, r5, globals@l
/* 8005A378 00057178  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8005A37C 0005717C  7C 9E 23 78 */	mr r30, r4
/* 8005A380 00057180  38 9F 00 14 */	addi r4, r31, 0x14
/* 8005A384 00057184  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8005A388 00057188  7C 7D 1B 78 */	mr r29, r3
/* 8005A38C 0005718C  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 8005A390 00057190  48 06 61 A1 */	bl iCameraUpdatePos__FP8RwCameraP7xMat4x3
/* 8005A394 00057194  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 8005A398 00057198  7F C5 F3 78 */	mr r5, r30
/* 8005A39C 0005719C  38 61 00 14 */	addi r3, r1, 0x14
/* 8005A3A0 000571A0  38 84 00 20 */	addi r4, r4, 0x20
/* 8005A3A4 000571A4  4B FB 0B CD */	bl xMat4x3Toworld__FP5xVec3PC7xMat4x3PC5xVec3
/* 8005A3A8 000571A8  C0 62 89 C0 */	lfs f3, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005A3AC 000571AC  38 61 00 08 */	addi r3, r1, 8
/* 8005A3B0 000571B0  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8005A3B4 000571B4  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8005A3B8 000571B8  EC 43 00 24 */	fdivs f2, f3, f0
/* 8005A3BC 000571BC  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8005A3C0 000571C0  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8005A3C4 000571C4  EC 40 00 B2 */	fmuls f2, f0, f2
/* 8005A3C8 000571C8  4B FB 0D 25 */	bl assign__5xVec3Ffff
/* 8005A3CC 000571CC  80 61 00 08 */	lwz r3, 8(r1)
/* 8005A3D0 000571D0  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8005A3D4 000571D4  90 7D 00 00 */	stw r3, 0(r29)
/* 8005A3D8 000571D8  90 1D 00 04 */	stw r0, 4(r29)
/* 8005A3DC 000571DC  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8005A3E0 000571E0  90 1D 00 08 */	stw r0, 8(r29)
/* 8005A3E4 000571E4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8005A3E8 000571E8  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8005A3EC 000571EC  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8005A3F0 000571F0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8005A3F4 000571F4  7C 08 03 A6 */	mtlr r0
/* 8005A3F8 000571F8  38 21 00 30 */	addi r1, r1, 0x30
/* 8005A3FC 000571FC  4E 80 00 20 */	blr 

/* find_locked_target__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FPC5xVec3 */
find_locked_target__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FPC5xVec3:
/* 8005A400 00057200  3C 80 80 2E */	lis r4, lbl_802DCC7C@ha
/* 8005A404 00057204  38 C0 00 01 */	li r6, 1
/* 8005A408 00057208  38 84 CC 7C */	addi r4, r4, lbl_802DCC7C@l
/* 8005A40C 0005720C  80 A4 06 54 */	lwz r5, 0x654(r4)
/* 8005A410 00057210  38 84 00 30 */	addi r4, r4, 0x30
/* 8005A414 00057214  38 05 FF FF */	addi r0, r5, -1
/* 8005A418 00057218  7C 09 03 A6 */	mtctr r0
/* 8005A41C 0005721C  28 05 00 01 */	cmplwi r5, 1
/* 8005A420 00057220  40 81 00 24 */	ble lbl_8005A444
lbl_8005A424:
/* 8005A424 00057224  80 04 00 4C */	lwz r0, 0x4c(r4)
/* 8005A428 00057228  7C 00 18 40 */	cmplw r0, r3
/* 8005A42C 0005722C  40 82 00 0C */	bne lbl_8005A438
/* 8005A430 00057230  7C C3 33 78 */	mr r3, r6
/* 8005A434 00057234  4E 80 00 20 */	blr 
lbl_8005A438:
/* 8005A438 00057238  38 84 00 30 */	addi r4, r4, 0x30
/* 8005A43C 0005723C  38 C6 00 01 */	addi r6, r6, 1
/* 8005A440 00057240  42 00 FF E4 */	bdnz lbl_8005A424
lbl_8005A444:
/* 8005A444 00057244  38 60 FF FF */	li r3, -1
/* 8005A448 00057248  4E 80 00 20 */	blr 

/* lock_target__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FiPC5xVec3f */
lock_target__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FiPC5xVec3f:
/* 8005A44C 0005724C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8005A450 00057250  7C 08 02 A6 */	mflr r0
/* 8005A454 00057254  90 01 00 44 */	stw r0, 0x44(r1)
/* 8005A458 00057258  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8005A45C 0005725C  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8005A460 00057260  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8005A464 00057264  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8005A468 00057268  7C 7E 1B 78 */	mr r30, r3
/* 8005A46C 0005726C  FF E0 08 90 */	fmr f31, f1
/* 8005A470 00057270  2C 1E FF FF */	cmpwi r30, -1
/* 8005A474 00057274  7C 9F 23 78 */	mr r31, r4
/* 8005A478 00057278  41 81 00 18 */	bgt lbl_8005A490
/* 8005A47C 0005727C  3C 60 80 2E */	lis r3, lbl_802DCC7C@ha
/* 8005A480 00057280  38 63 CC 7C */	addi r3, r3, lbl_802DCC7C@l
/* 8005A484 00057284  80 03 06 54 */	lwz r0, 0x654(r3)
/* 8005A488 00057288  28 00 00 21 */	cmplwi r0, 0x21
/* 8005A48C 0005728C  40 80 00 C4 */	bge lbl_8005A550
lbl_8005A490:
/* 8005A490 00057290  2C 1E FF FF */	cmpwi r30, -1
/* 8005A494 00057294  41 81 00 30 */	bgt lbl_8005A4C4
/* 8005A498 00057298  3C 60 80 2E */	lis r3, lbl_802DCC7C@ha
/* 8005A49C 0005729C  38 83 CC 7C */	addi r4, r3, lbl_802DCC7C@l
/* 8005A4A0 000572A0  83 C4 06 54 */	lwz r30, 0x654(r4)
/* 8005A4A4 000572A4  80 A4 00 18 */	lwz r5, 0x18(r4)
/* 8005A4A8 000572A8  1C 1E 00 30 */	mulli r0, r30, 0x30
/* 8005A4AC 000572AC  38 7E 00 01 */	addi r3, r30, 1
/* 8005A4B0 000572B0  90 64 06 54 */	stw r3, 0x654(r4)
/* 8005A4B4 000572B4  7C 84 02 14 */	add r4, r4, r0
/* 8005A4B8 000572B8  38 64 00 24 */	addi r3, r4, 0x24
/* 8005A4BC 000572BC  38 84 00 28 */	addi r4, r4, 0x28
/* 8005A4C0 000572C0  4B FF F4 05 */	bl show_gizmo__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FRQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_9hud_gizmoRC13basic_rect_esc__0_f_esc__1_P14xModelInstance
lbl_8005A4C4:
/* 8005A4C4 000572C4  1C BE 00 30 */	mulli r5, r30, 0x30
/* 8005A4C8 000572C8  3C 60 80 2E */	lis r3, lbl_802DCC7C@ha
/* 8005A4CC 000572CC  7F E4 FB 78 */	mr r4, r31
/* 8005A4D0 000572D0  38 03 CC 7C */	addi r0, r3, lbl_802DCC7C@l
/* 8005A4D4 000572D4  7C A0 2A 14 */	add r5, r0, r5
/* 8005A4D8 000572D8  38 61 00 08 */	addi r3, r1, 8
/* 8005A4DC 000572DC  3B C5 00 24 */	addi r30, r5, 0x24
/* 8005A4E0 000572E0  4B FF FE 81 */	bl world_to_screen__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FRC5xVec3
/* 8005A4E4 000572E4  80 C1 00 08 */	lwz r6, 8(r1)
/* 8005A4E8 000572E8  38 7E 00 04 */	addi r3, r30, 4
/* 8005A4EC 000572EC  80 A1 00 0C */	lwz r5, 0xc(r1)
/* 8005A4F0 000572F0  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8005A4F4 000572F4  80 8D 81 80 */	lwz r4, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005A4F8 000572F8  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8005A4FC 000572FC  C0 24 01 64 */	lfs f1, 0x164(r4)
/* 8005A500 00057300  90 A1 00 18 */	stw r5, 0x18(r1)
/* 8005A504 00057304  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8005A508 00057308  48 00 5C 45 */	bl set_size__13basic_rect_esc__0_f_esc__1_Ff
/* 8005A50C 0005730C  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8005A510 00057310  38 7E 00 04 */	addi r3, r30, 4
/* 8005A514 00057314  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 8005A518 00057318  48 00 5C 05 */	bl center__13basic_rect_esc__0_f_esc__1_Fff
/* 8005A51C 0005731C  38 00 00 01 */	li r0, 1
/* 8005A520 00057320  3C 60 80 2E */	lis r3, lbl_802DCC7C@ha
/* 8005A524 00057324  90 1E 00 00 */	stw r0, 0(r30)
/* 8005A528 00057328  38 63 CC 7C */	addi r3, r3, lbl_802DCC7C@l
/* 8005A52C 0005732C  80 8D 81 80 */	lwz r4, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005A530 00057330  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005A534 00057334  C0 04 01 40 */	lfs f0, 0x140(r4)
/* 8005A538 00057338  EC 01 00 24 */	fdivs f0, f1, f0
/* 8005A53C 0005733C  D0 1E 00 18 */	stfs f0, 0x18(r30)
/* 8005A540 00057340  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8005A544 00057344  90 1E 00 2C */	stw r0, 0x2c(r30)
/* 8005A548 00057348  93 FE 00 28 */	stw r31, 0x28(r30)
/* 8005A54C 0005734C  D3 FE 00 24 */	stfs f31, 0x24(r30)
lbl_8005A550:
/* 8005A550 00057350  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8005A554 00057354  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8005A558 00057358  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8005A55C 0005735C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8005A560 00057360  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8005A564 00057364  7C 08 03 A6 */	mtlr r0
/* 8005A568 00057368  38 21 00 40 */	addi r1, r1, 0x40
/* 8005A56C 0005736C  4E 80 00 20 */	blr 

/* check_lock_target__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FPC5xVec3 */
check_lock_target__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FPC5xVec3:
/* 8005A570 00057370  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8005A574 00057374  7C 08 02 A6 */	mflr r0
/* 8005A578 00057378  90 01 00 64 */	stw r0, 0x64(r1)
/* 8005A57C 0005737C  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8005A580 00057380  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 8005A584 00057384  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 8005A588 00057388  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 8005A58C 0005738C  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 8005A590 00057390  F3 A1 00 38 */	psq_st f29, 56(r1), 0, qr0
/* 8005A594 00057394  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8005A598 00057398  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8005A59C 0005739C  3C 80 80 3C */	lis r4, globals@ha
/* 8005A5A0 000573A0  7C 7E 1B 78 */	mr r30, r3
/* 8005A5A4 000573A4  3B E4 05 58 */	addi r31, r4, globals@l
/* 8005A5A8 000573A8  38 61 00 08 */	addi r3, r1, 8
/* 8005A5AC 000573AC  7F C4 F3 78 */	mr r4, r30
/* 8005A5B0 000573B0  38 BF 00 44 */	addi r5, r31, 0x44
/* 8005A5B4 000573B4  4B FB 0C 19 */	bl __mi__5xVec3CFRC5xVec3
/* 8005A5B8 000573B8  80 C1 00 08 */	lwz r6, 8(r1)
/* 8005A5BC 000573BC  38 61 00 14 */	addi r3, r1, 0x14
/* 8005A5C0 000573C0  80 A1 00 0C */	lwz r5, 0xc(r1)
/* 8005A5C4 000573C4  38 9F 00 34 */	addi r4, r31, 0x34
/* 8005A5C8 000573C8  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8005A5CC 000573CC  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8005A5D0 000573D0  90 A1 00 18 */	stw r5, 0x18(r1)
/* 8005A5D4 000573D4  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8005A5D8 000573D8  4B FB AF 35 */	bl dot__5xVec3CFRC5xVec3
/* 8005A5DC 000573DC  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005A5E0 000573E0  C0 03 00 E4 */	lfs f0, 0xe4(r3)
/* 8005A5E4 000573E4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005A5E8 000573E8  41 80 00 C0 */	blt lbl_8005A6A8
/* 8005A5EC 000573EC  C0 03 00 E8 */	lfs f0, 0xe8(r3)
/* 8005A5F0 000573F0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005A5F4 000573F4  40 81 00 08 */	ble lbl_8005A5FC
/* 8005A5F8 000573F8  48 00 00 B0 */	b lbl_8005A6A8
lbl_8005A5FC:
/* 8005A5FC 000573FC  38 61 00 14 */	addi r3, r1, 0x14
/* 8005A600 00057400  4B FB 0B A9 */	bl length__5xVec3CFv
/* 8005A604 00057404  FF E0 08 90 */	fmr f31, f1
/* 8005A608 00057408  C0 02 8A 0C */	lfs f0, lbl_803CD38C-_SDA2_BASE_(r2)
/* 8005A60C 0005740C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8005A610 00057410  4C 41 13 82 */	cror 2, 1, 2
/* 8005A614 00057414  40 82 00 1C */	bne lbl_8005A630
/* 8005A618 00057418  C0 02 89 D4 */	lfs f0, lbl_803CD354-_SDA2_BASE_(r2)
/* 8005A61C 0005741C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8005A620 00057420  4C 40 13 82 */	cror 2, 0, 2
/* 8005A624 00057424  40 82 00 0C */	bne lbl_8005A630
/* 8005A628 00057428  C3 E2 89 B8 */	lfs f31, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005A62C 0005742C  48 00 00 1C */	b lbl_8005A648
lbl_8005A630:
/* 8005A630 00057430  38 61 00 14 */	addi r3, r1, 0x14
/* 8005A634 00057434  38 9F 00 34 */	addi r4, r31, 0x34
/* 8005A638 00057438  4B FB AE D5 */	bl dot__5xVec3CFRC5xVec3
/* 8005A63C 0005743C  EC 21 F8 24 */	fdivs f1, f1, f31
/* 8005A640 00057440  4B FB 40 D1 */	bl xacos__Ff
/* 8005A644 00057444  FF E0 08 90 */	fmr f31, f1
lbl_8005A648:
/* 8005A648 00057448  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005A64C 0005744C  C3 A3 00 F0 */	lfs f29, 0xf0(r3)
/* 8005A650 00057450  C3 C3 00 EC */	lfs f30, 0xec(r3)
/* 8005A654 00057454  FC 1F E8 40 */	fcmpo cr0, f31, f29
/* 8005A658 00057458  4C 41 13 82 */	cror 2, 1, 2
/* 8005A65C 0005745C  41 82 00 4C */	beq lbl_8005A6A8
/* 8005A660 00057460  FC 1F F0 40 */	fcmpo cr0, f31, f30
/* 8005A664 00057464  4C 41 13 82 */	cror 2, 1, 2
/* 8005A668 00057468  40 82 00 2C */	bne lbl_8005A694
/* 8005A66C 0005746C  7F C3 F3 78 */	mr r3, r30
/* 8005A670 00057470  4B FF FD 91 */	bl find_locked_target__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FPC5xVec3
/* 8005A674 00057474  2C 03 00 00 */	cmpwi r3, 0
/* 8005A678 00057478  41 80 00 30 */	blt lbl_8005A6A8
/* 8005A67C 0005747C  EC 3D F8 28 */	fsubs f1, f29, f31
/* 8005A680 00057480  7F C4 F3 78 */	mr r4, r30
/* 8005A684 00057484  EC 1D F0 28 */	fsubs f0, f29, f30
/* 8005A688 00057488  EC 21 00 24 */	fdivs f1, f1, f0
/* 8005A68C 0005748C  4B FF FD C1 */	bl lock_target__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FiPC5xVec3f
/* 8005A690 00057490  48 00 00 18 */	b lbl_8005A6A8
lbl_8005A694:
/* 8005A694 00057494  7F C3 F3 78 */	mr r3, r30
/* 8005A698 00057498  4B FF FD 69 */	bl find_locked_target__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FPC5xVec3
/* 8005A69C 0005749C  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005A6A0 000574A0  7F C4 F3 78 */	mr r4, r30
/* 8005A6A4 000574A4  4B FF FD A9 */	bl lock_target__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FiPC5xVec3f
lbl_8005A6A8:
/* 8005A6A8 000574A8  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 8005A6AC 000574AC  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8005A6B0 000574B0  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 8005A6B4 000574B4  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 8005A6B8 000574B8  E3 A1 00 38 */	psq_l f29, 56(r1), 0, qr0
/* 8005A6BC 000574BC  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 8005A6C0 000574C0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8005A6C4 000574C4  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8005A6C8 000574C8  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8005A6CC 000574CC  7C 08 03 A6 */	mtlr r0
/* 8005A6D0 000574D0  38 21 00 60 */	addi r1, r1, 0x60
/* 8005A6D4 000574D4  4E 80 00 20 */	blr 

check_anim_aim__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FP15xAnimTransitionP11xAnimSinglePv:
/* 8005A6D8 000574D8  38 60 00 00 */	li r3, 0
/* 8005A6DC 000574DC  4E 80 00 20 */	blr 

/* load_cheat_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv */
load_cheat_tweak__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv:
/* 8005A6E0 000574E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005A6E4 000574E4  7C 08 02 A6 */	mflr r0
/* 8005A6E8 000574E8  3C 60 80 2E */	lis r3, lbl_802DBC38@ha
/* 8005A6EC 000574EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005A6F0 000574F0  38 83 BC 38 */	addi r4, r3, lbl_802DBC38@l
/* 8005A6F4 000574F4  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005A6F8 000574F8  C0 02 8A 10 */	lfs f0, lbl_803CD390-_SDA2_BASE_(r2)
/* 8005A6FC 000574FC  38 63 53 3C */	addi r3, r3, stringBase0__13cruise_bubble@l
/* 8005A700 00057500  38 63 02 8A */	addi r3, r3, 0x28a
/* 8005A704 00057504  D0 04 00 1C */	stfs f0, 0x1c(r4)
/* 8005A708 00057508  C0 02 8A 14 */	lfs f0, lbl_803CD394-_SDA2_BASE_(r2)
/* 8005A70C 0005750C  D0 04 00 20 */	stfs f0, 0x20(r4)
/* 8005A710 00057510  C0 02 8A 18 */	lfs f0, lbl_803CD398-_SDA2_BASE_(r2)
/* 8005A714 00057514  D0 04 00 2C */	stfs f0, 0x2c(r4)
/* 8005A718 00057518  C0 02 8A 1C */	lfs f0, lbl_803CD39C-_SDA2_BASE_(r2)
/* 8005A71C 0005751C  D0 04 00 3C */	stfs f0, 0x3c(r4)
/* 8005A720 00057520  C0 02 8A 20 */	lfs f0, lbl_803CD3A0-_SDA2_BASE_(r2)
/* 8005A724 00057524  D0 04 00 50 */	stfs f0, 0x50(r4)
/* 8005A728 00057528  C0 02 8A 24 */	lfs f0, lbl_803CD3A4-_SDA2_BASE_(r2)
/* 8005A72C 0005752C  D0 04 00 54 */	stfs f0, 0x54(r4)
/* 8005A730 00057530  C0 02 8A 28 */	lfs f0, lbl_803CD3A8-_SDA2_BASE_(r2)
/* 8005A734 00057534  D0 04 00 58 */	stfs f0, 0x58(r4)
/* 8005A738 00057538  D0 04 00 5C */	stfs f0, 0x5c(r4)
/* 8005A73C 0005753C  C0 02 8A 2C */	lfs f0, lbl_803CD3AC-_SDA2_BASE_(r2)
/* 8005A740 00057540  D0 04 00 60 */	stfs f0, 0x60(r4)
/* 8005A744 00057544  C0 22 8A 30 */	lfs f1, lbl_803CD3B0-_SDA2_BASE_(r2)
/* 8005A748 00057548  D0 24 00 64 */	stfs f1, 0x64(r4)
/* 8005A74C 0005754C  C0 02 8A 34 */	lfs f0, lbl_803CD3B4-_SDA2_BASE_(r2)
/* 8005A750 00057550  D0 04 00 68 */	stfs f0, 0x68(r4)
/* 8005A754 00057554  C0 02 8A 38 */	lfs f0, lbl_803CD3B8-_SDA2_BASE_(r2)
/* 8005A758 00057558  D0 04 00 98 */	stfs f0, 0x98(r4)
/* 8005A75C 0005755C  C0 02 89 C0 */	lfs f0, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005A760 00057560  D0 04 00 A8 */	stfs f0, 0xa8(r4)
/* 8005A764 00057564  D0 24 00 AC */	stfs f1, 0xac(r4)
/* 8005A768 00057568  C0 02 8A 3C */	lfs f0, lbl_803CD3BC-_SDA2_BASE_(r2)
/* 8005A76C 0005756C  D0 04 00 B8 */	stfs f0, 0xb8(r4)
/* 8005A770 00057570  C0 02 8A 40 */	lfs f0, lbl_803CD3C0-_SDA2_BASE_(r2)
/* 8005A774 00057574  D0 04 00 CC */	stfs f0, 0xcc(r4)
/* 8005A778 00057578  4B FF 1A 9D */	bl xStrHash__FPCc
/* 8005A77C 0005757C  3C A0 80 2E */	lis r5, lbl_802DBC38@ha
/* 8005A780 00057580  3C 80 80 25 */	lis r4, stringBase0__13cruise_bubble@ha
/* 8005A784 00057584  38 A5 BC 38 */	addi r5, r5, lbl_802DBC38@l
/* 8005A788 00057588  90 65 00 D4 */	stw r3, 0xd4(r5)
/* 8005A78C 0005758C  38 64 53 3C */	addi r3, r4, stringBase0__13cruise_bubble@l
/* 8005A790 00057590  38 63 01 E9 */	addi r3, r3, 0x1e9
/* 8005A794 00057594  C0 02 8A 30 */	lfs f0, lbl_803CD3B0-_SDA2_BASE_(r2)
/* 8005A798 00057598  D0 05 00 D8 */	stfs f0, 0xd8(r5)
/* 8005A79C 0005759C  C0 02 89 C0 */	lfs f0, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005A7A0 000575A0  D0 05 00 DC */	stfs f0, 0xdc(r5)
/* 8005A7A4 000575A4  4B FF 1A 71 */	bl xStrHash__FPCc
/* 8005A7A8 000575A8  3C A0 80 2E */	lis r5, lbl_802DBC38@ha
/* 8005A7AC 000575AC  38 80 01 90 */	li r4, 0x190
/* 8005A7B0 000575B0  38 A5 BC 38 */	addi r5, r5, lbl_802DBC38@l
/* 8005A7B4 000575B4  38 00 00 0F */	li r0, 0xf
/* 8005A7B8 000575B8  90 65 00 E0 */	stw r3, 0xe0(r5)
/* 8005A7BC 000575BC  C0 02 8A 44 */	lfs f0, lbl_803CD3C4-_SDA2_BASE_(r2)
/* 8005A7C0 000575C0  D0 05 00 FC */	stfs f0, 0xfc(r5)
/* 8005A7C4 000575C4  C0 02 8A 38 */	lfs f0, lbl_803CD3B8-_SDA2_BASE_(r2)
/* 8005A7C8 000575C8  D0 05 01 00 */	stfs f0, 0x100(r5)
/* 8005A7CC 000575CC  C0 02 8A 48 */	lfs f0, lbl_803CD3C8-_SDA2_BASE_(r2)
/* 8005A7D0 000575D0  D0 05 01 04 */	stfs f0, 0x104(r5)
/* 8005A7D4 000575D4  90 85 01 08 */	stw r4, 0x108(r5)
/* 8005A7D8 000575D8  C0 02 8A 4C */	lfs f0, lbl_803CD3CC-_SDA2_BASE_(r2)
/* 8005A7DC 000575DC  D0 05 01 10 */	stfs f0, 0x110(r5)
/* 8005A7E0 000575E0  90 05 01 20 */	stw r0, 0x120(r5)
/* 8005A7E4 000575E4  C0 02 8A 50 */	lfs f0, lbl_803CD3D0-_SDA2_BASE_(r2)
/* 8005A7E8 000575E8  D0 05 01 28 */	stfs f0, 0x128(r5)
/* 8005A7EC 000575EC  C0 02 8A 54 */	lfs f0, lbl_803CD3D4-_SDA2_BASE_(r2)
/* 8005A7F0 000575F0  D0 05 01 2C */	stfs f0, 0x12c(r5)
/* 8005A7F4 000575F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005A7F8 000575F8  7C 08 03 A6 */	mtlr r0
/* 8005A7FC 000575FC  38 21 00 10 */	addi r1, r1, 0x10
/* 8005A800 00057600  4E 80 00 20 */	blr 

/* load_settings__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv */
load_settings__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv:
/* 8005A804 00057604  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005A808 00057608  7C 08 02 A6 */	mflr r0
/* 8005A80C 0005760C  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005A810 00057610  38 63 53 3C */	addi r3, r3, stringBase0__13cruise_bubble@l
/* 8005A814 00057614  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005A818 00057618  38 63 01 63 */	addi r3, r3, 0x163
/* 8005A81C 0005761C  4B FF 19 F9 */	bl xStrHash__FPCc
/* 8005A820 00057620  38 81 00 08 */	addi r4, r1, 8
/* 8005A824 00057624  4B FF B6 D1 */	bl zEntGetModelParams__FUiPUi
/* 8005A828 00057628  28 03 00 00 */	cmplwi r3, 0
/* 8005A82C 0005762C  40 82 00 0C */	bne lbl_8005A838
/* 8005A830 00057630  38 00 00 00 */	li r0, 0
/* 8005A834 00057634  90 01 00 08 */	stw r0, 8(r1)
lbl_8005A838:
/* 8005A838 00057638  3C 80 80 2E */	lis r4, lbl_802DBA80@ha
/* 8005A83C 0005763C  80 A1 00 08 */	lwz r5, 8(r1)
/* 8005A840 00057640  38 04 BA 80 */	addi r0, r4, lbl_802DBA80@l
/* 8005A844 00057644  7C 64 1B 78 */	mr r4, r3
/* 8005A848 00057648  7C 03 03 78 */	mr r3, r0
/* 8005A84C 0005764C  48 00 00 35 */	bl load__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_11tweak_groupFP16xModelAssetParamUi
/* 8005A850 00057650  3C 60 80 2E */	lis r3, lbl_802DBC38@ha
/* 8005A854 00057654  3C 80 80 2E */	lis r4, lbl_802DBA80@ha
/* 8005A858 00057658  38 63 BC 38 */	addi r3, r3, lbl_802DBC38@l
/* 8005A85C 0005765C  38 A0 01 B8 */	li r5, 0x1b8
/* 8005A860 00057660  38 84 BA 80 */	addi r4, r4, lbl_802DBA80@l
/* 8005A864 00057664  4B FA 8C DD */	bl memcpy
/* 8005A868 00057668  4B FF FE 79 */	bl load_cheat_tweak__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005A86C 0005766C  4B FF EA A9 */	bl refresh_missle_model__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005A870 00057670  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005A874 00057674  7C 08 03 A6 */	mtlr r0
/* 8005A878 00057678  38 21 00 10 */	addi r1, r1, 0x10
/* 8005A87C 0005767C  4E 80 00 20 */	blr 

/* load__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@11tweak_groupFP16xModelAssetParamUi */
load__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_11tweak_groupFP16xModelAssetParamUi:
/* 8005A880 00057680  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005A884 00057684  7C 08 02 A6 */	mflr r0
/* 8005A888 00057688  7C A6 2B 78 */	mr r6, r5
/* 8005A88C 0005768C  7C 85 23 78 */	mr r5, r4
/* 8005A890 00057690  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005A894 00057694  38 80 00 01 */	li r4, 1
/* 8005A898 00057698  38 E0 00 00 */	li r7, 0
/* 8005A89C 0005769C  48 00 00 15 */	bl register_tweaks__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_11tweak_groupFbP16xModelAssetParamUiPCc
/* 8005A8A0 000576A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005A8A4 000576A4  7C 08 03 A6 */	mtlr r0
/* 8005A8A8 000576A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8005A8AC 000576AC  4E 80 00 20 */	blr 

/* register_tweaks__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@11tweak_groupFbP16xModelAssetParamUiPCc */
register_tweaks__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_11tweak_groupFbP16xModelAssetParamUiPCc:
/* 8005A8B0 000576B0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8005A8B4 000576B4  7C 08 02 A6 */	mflr r0
/* 8005A8B8 000576B8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005A8BC 000576BC  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8005A8C0 000576C0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8005A8C4 000576C4  7C DF 33 78 */	mr r31, r6
/* 8005A8C8 000576C8  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8005A8CC 000576CC  7C BE 2B 78 */	mr r30, r5
/* 8005A8D0 000576D0  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8005A8D4 000576D4  7C 9D 23 78 */	mr r29, r4
/* 8005A8D8 000576D8  93 81 00 20 */	stw r28, 0x20(r1)
/* 8005A8DC 000576DC  7C 7C 1B 78 */	mr r28, r3
/* 8005A8E0 000576E0  41 82 00 30 */	beq lbl_8005A910
/* 8005A8E4 000576E4  C0 02 8A 40 */	lfs f0, lbl_803CD3C0-_SDA2_BASE_(r2)
/* 8005A8E8 000576E8  3C 80 80 25 */	lis r4, stringBase0__13cruise_bubble@ha
/* 8005A8EC 000576EC  38 C4 53 3C */	addi r6, r4, stringBase0__13cruise_bubble@l
/* 8005A8F0 000576F0  7F C4 F3 78 */	mr r4, r30
/* 8005A8F4 000576F4  D0 1C 00 00 */	stfs f0, 0(r28)
/* 8005A8F8 000576F8  7F E5 FB 78 */	mr r5, r31
/* 8005A8FC 000576FC  38 C6 02 90 */	addi r6, r6, 0x290
/* 8005A900 00057700  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005A904 00057704  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005A908 00057708  FC 60 08 90 */	fmr f3, f1
/* 8005A90C 0005770C  48 00 59 A5 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005A910:
/* 8005A910 00057710  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005A914 00057714  41 82 00 34 */	beq lbl_8005A948
/* 8005A918 00057718  C0 02 89 C8 */	lfs f0, lbl_803CD348-_SDA2_BASE_(r2)
/* 8005A91C 0005771C  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005A920 00057720  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005A924 00057724  7F C4 F3 78 */	mr r4, r30
/* 8005A928 00057728  D0 1C 00 04 */	stfs f0, 4(r28)
/* 8005A92C 0005772C  7F E5 FB 78 */	mr r5, r31
/* 8005A930 00057730  38 7C 00 04 */	addi r3, r28, 4
/* 8005A934 00057734  38 C6 02 9A */	addi r6, r6, 0x29a
/* 8005A938 00057738  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005A93C 0005773C  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005A940 00057740  FC 60 08 90 */	fmr f3, f1
/* 8005A944 00057744  48 00 59 6D */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005A948:
/* 8005A948 00057748  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005A94C 0005774C  41 82 00 34 */	beq lbl_8005A980
/* 8005A950 00057750  C0 02 8A 14 */	lfs f0, lbl_803CD394-_SDA2_BASE_(r2)
/* 8005A954 00057754  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005A958 00057758  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005A95C 0005775C  7F C4 F3 78 */	mr r4, r30
/* 8005A960 00057760  D0 1C 00 08 */	stfs f0, 8(r28)
/* 8005A964 00057764  7F E5 FB 78 */	mr r5, r31
/* 8005A968 00057768  38 7C 00 08 */	addi r3, r28, 8
/* 8005A96C 0005776C  38 C6 02 AB */	addi r6, r6, 0x2ab
/* 8005A970 00057770  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005A974 00057774  C0 42 89 F4 */	lfs f2, lbl_803CD374-_SDA2_BASE_(r2)
/* 8005A978 00057778  C0 62 8A 58 */	lfs f3, lbl_803CD3D8-_SDA2_BASE_(r2)
/* 8005A97C 0005777C  48 00 59 35 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005A980:
/* 8005A980 00057780  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005A984 00057784  41 82 00 34 */	beq lbl_8005A9B8
/* 8005A988 00057788  C0 02 89 C8 */	lfs f0, lbl_803CD348-_SDA2_BASE_(r2)
/* 8005A98C 0005778C  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005A990 00057790  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005A994 00057794  7F C4 F3 78 */	mr r4, r30
/* 8005A998 00057798  D0 1C 00 0C */	stfs f0, 0xc(r28)
/* 8005A99C 0005779C  7F E5 FB 78 */	mr r5, r31
/* 8005A9A0 000577A0  38 7C 00 0C */	addi r3, r28, 0xc
/* 8005A9A4 000577A4  38 C6 02 C1 */	addi r6, r6, 0x2c1
/* 8005A9A8 000577A8  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005A9AC 000577AC  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005A9B0 000577B0  C0 62 8A 58 */	lfs f3, lbl_803CD3D8-_SDA2_BASE_(r2)
/* 8005A9B4 000577B4  48 00 58 FD */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005A9B8:
/* 8005A9B8 000577B8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005A9BC 000577BC  41 82 00 34 */	beq lbl_8005A9F0
/* 8005A9C0 000577C0  C0 02 8A 5C */	lfs f0, lbl_803CD3DC-_SDA2_BASE_(r2)
/* 8005A9C4 000577C4  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005A9C8 000577C8  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005A9CC 000577CC  7F C4 F3 78 */	mr r4, r30
/* 8005A9D0 000577D0  D0 1C 00 10 */	stfs f0, 0x10(r28)
/* 8005A9D4 000577D4  7F E5 FB 78 */	mr r5, r31
/* 8005A9D8 000577D8  38 7C 00 10 */	addi r3, r28, 0x10
/* 8005A9DC 000577DC  38 C6 02 D7 */	addi r6, r6, 0x2d7
/* 8005A9E0 000577E0  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005A9E4 000577E4  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005A9E8 000577E8  C0 62 8A 08 */	lfs f3, lbl_803CD388-_SDA2_BASE_(r2)
/* 8005A9EC 000577EC  48 00 58 C5 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005A9F0:
/* 8005A9F0 000577F0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005A9F4 000577F4  41 82 00 34 */	beq lbl_8005AA28
/* 8005A9F8 000577F8  C0 02 8A 60 */	lfs f0, lbl_803CD3E0-_SDA2_BASE_(r2)
/* 8005A9FC 000577FC  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005AA00 00057800  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005AA04 00057804  7F C4 F3 78 */	mr r4, r30
/* 8005AA08 00057808  D0 1C 00 14 */	stfs f0, 0x14(r28)
/* 8005AA0C 0005780C  7F E5 FB 78 */	mr r5, r31
/* 8005AA10 00057810  38 7C 00 14 */	addi r3, r28, 0x14
/* 8005AA14 00057814  38 C6 02 EE */	addi r6, r6, 0x2ee
/* 8005AA18 00057818  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005AA1C 0005781C  C0 42 89 F4 */	lfs f2, lbl_803CD374-_SDA2_BASE_(r2)
/* 8005AA20 00057820  C0 62 8A 58 */	lfs f3, lbl_803CD3D8-_SDA2_BASE_(r2)
/* 8005AA24 00057824  48 00 58 8D */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005AA28:
/* 8005AA28 00057828  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005AA2C 0005782C  41 82 00 34 */	beq lbl_8005AA60
/* 8005AA30 00057830  C0 02 8A 48 */	lfs f0, lbl_803CD3C8-_SDA2_BASE_(r2)
/* 8005AA34 00057834  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005AA38 00057838  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005AA3C 0005783C  7F C4 F3 78 */	mr r4, r30
/* 8005AA40 00057840  D0 1C 00 18 */	stfs f0, 0x18(r28)
/* 8005AA44 00057844  7F E5 FB 78 */	mr r5, r31
/* 8005AA48 00057848  38 7C 00 18 */	addi r3, r28, 0x18
/* 8005AA4C 0005784C  38 C6 02 FA */	addi r6, r6, 0x2fa
/* 8005AA50 00057850  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005AA54 00057854  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005AA58 00057858  FC 60 08 90 */	fmr f3, f1
/* 8005AA5C 0005785C  48 00 58 55 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005AA60:
/* 8005AA60 00057860  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005AA64 00057864  41 82 00 34 */	beq lbl_8005AA98
/* 8005AA68 00057868  C0 02 8A 64 */	lfs f0, lbl_803CD3E4-_SDA2_BASE_(r2)
/* 8005AA6C 0005786C  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005AA70 00057870  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005AA74 00057874  7F C4 F3 78 */	mr r4, r30
/* 8005AA78 00057878  D0 1C 00 1C */	stfs f0, 0x1c(r28)
/* 8005AA7C 0005787C  7F E5 FB 78 */	mr r5, r31
/* 8005AA80 00057880  38 7C 00 1C */	addi r3, r28, 0x1c
/* 8005AA84 00057884  38 C6 03 0A */	addi r6, r6, 0x30a
/* 8005AA88 00057888  C0 22 8A 68 */	lfs f1, lbl_803CD3E8-_SDA2_BASE_(r2)
/* 8005AA8C 0005788C  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005AA90 00057890  C0 62 8A 6C */	lfs f3, lbl_803CD3EC-_SDA2_BASE_(r2)
/* 8005AA94 00057894  48 00 58 1D */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005AA98:
/* 8005AA98 00057898  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005AA9C 0005789C  41 82 00 34 */	beq lbl_8005AAD0
/* 8005AAA0 000578A0  C0 02 8A 70 */	lfs f0, lbl_803CD3F0-_SDA2_BASE_(r2)
/* 8005AAA4 000578A4  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005AAA8 000578A8  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005AAAC 000578AC  7F C4 F3 78 */	mr r4, r30
/* 8005AAB0 000578B0  D0 1C 00 20 */	stfs f0, 0x20(r28)
/* 8005AAB4 000578B4  7F E5 FB 78 */	mr r5, r31
/* 8005AAB8 000578B8  38 7C 00 20 */	addi r3, r28, 0x20
/* 8005AABC 000578BC  38 C6 03 1D */	addi r6, r6, 0x31d
/* 8005AAC0 000578C0  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005AAC4 000578C4  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005AAC8 000578C8  FC 60 08 90 */	fmr f3, f1
/* 8005AACC 000578CC  48 00 57 E5 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005AAD0:
/* 8005AAD0 000578D0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005AAD4 000578D4  41 82 00 34 */	beq lbl_8005AB08
/* 8005AAD8 000578D8  38 00 00 04 */	li r0, 4
/* 8005AADC 000578DC  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005AAE0 000578E0  38 83 53 3C */	addi r4, r3, stringBase0__13cruise_bubble@l
/* 8005AAE4 000578E4  90 1C 00 24 */	stw r0, 0x24(r28)
/* 8005AAE8 000578E8  7F C7 F3 78 */	mr r7, r30
/* 8005AAEC 000578EC  7F E8 FB 78 */	mr r8, r31
/* 8005AAF0 000578F0  38 7C 00 24 */	addi r3, r28, 0x24
/* 8005AAF4 000578F4  39 24 03 32 */	addi r9, r4, 0x332
/* 8005AAF8 000578F8  38 80 00 01 */	li r4, 1
/* 8005AAFC 000578FC  38 A0 00 01 */	li r5, 1
/* 8005AB00 00057900  38 C0 00 64 */	li r6, 0x64
/* 8005AB04 00057904  48 00 57 29 */	bl load_param_esc__0_i_esc__4_i_esc__1___10auto_tweakFRiiiiP16xModelAssetParamUiPCc
lbl_8005AB08:
/* 8005AB08 00057908  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005AB0C 0005790C  41 82 00 34 */	beq lbl_8005AB40
/* 8005AB10 00057910  C0 02 8A 74 */	lfs f0, lbl_803CD3F4-_SDA2_BASE_(r2)
/* 8005AB14 00057914  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005AB18 00057918  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005AB1C 0005791C  7F C4 F3 78 */	mr r4, r30
/* 8005AB20 00057920  D0 1C 00 28 */	stfs f0, 0x28(r28)
/* 8005AB24 00057924  7F E5 FB 78 */	mr r5, r31
/* 8005AB28 00057928  38 7C 00 28 */	addi r3, r28, 0x28
/* 8005AB2C 0005792C  38 C6 03 43 */	addi r6, r6, 0x343
/* 8005AB30 00057930  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005AB34 00057934  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005AB38 00057938  C0 62 8A 08 */	lfs f3, lbl_803CD388-_SDA2_BASE_(r2)
/* 8005AB3C 0005793C  48 00 57 75 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005AB40:
/* 8005AB40 00057940  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005AB44 00057944  41 82 00 34 */	beq lbl_8005AB78
/* 8005AB48 00057948  C0 02 8A 78 */	lfs f0, lbl_803CD3F8-_SDA2_BASE_(r2)
/* 8005AB4C 0005794C  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005AB50 00057950  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005AB54 00057954  7F C4 F3 78 */	mr r4, r30
/* 8005AB58 00057958  D0 1C 00 2C */	stfs f0, 0x2c(r28)
/* 8005AB5C 0005795C  7F E5 FB 78 */	mr r5, r31
/* 8005AB60 00057960  38 7C 00 2C */	addi r3, r28, 0x2c
/* 8005AB64 00057964  38 C6 03 5C */	addi r6, r6, 0x35c
/* 8005AB68 00057968  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005AB6C 0005796C  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005AB70 00057970  C0 62 8A 08 */	lfs f3, lbl_803CD388-_SDA2_BASE_(r2)
/* 8005AB74 00057974  48 00 57 3D */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005AB78:
/* 8005AB78 00057978  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005AB7C 0005797C  41 82 00 4C */	beq lbl_8005ABC8
/* 8005AB80 00057980  C0 22 8A 7C */	lfs f1, lbl_803CD3FC-_SDA2_BASE_(r2)
/* 8005AB84 00057984  38 61 00 08 */	addi r3, r1, 8
/* 8005AB88 00057988  C0 42 8A 80 */	lfs f2, lbl_803CD400-_SDA2_BASE_(r2)
/* 8005AB8C 0005798C  C0 62 8A 84 */	lfs f3, lbl_803CD404-_SDA2_BASE_(r2)
/* 8005AB90 00057990  48 00 53 F9 */	bl create__5xVec3Ffff
/* 8005AB94 00057994  38 7C 00 30 */	addi r3, r28, 0x30
/* 8005AB98 00057998  38 81 00 08 */	addi r4, r1, 8
/* 8005AB9C 0005799C  4B FB 06 C9 */	bl __as__5xVec3FRC5xVec3
/* 8005ABA0 000579A0  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005ABA4 000579A4  7F C7 F3 78 */	mr r7, r30
/* 8005ABA8 000579A8  38 A3 53 3C */	addi r5, r3, stringBase0__13cruise_bubble@l
/* 8005ABAC 000579AC  7F E8 FB 78 */	mr r8, r31
/* 8005ABB0 000579B0  38 7C 00 30 */	addi r3, r28, 0x30
/* 8005ABB4 000579B4  38 80 00 00 */	li r4, 0
/* 8005ABB8 000579B8  39 25 03 74 */	addi r9, r5, 0x374
/* 8005ABBC 000579BC  38 A0 00 00 */	li r5, 0
/* 8005ABC0 000579C0  38 C0 00 00 */	li r6, 0
/* 8005ABC4 000579C4  48 00 56 19 */	bl load_param_esc__0_5xVec3_esc__4_i_esc__1___10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc
lbl_8005ABC8:
/* 8005ABC8 000579C8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005ABCC 000579CC  41 82 00 34 */	beq lbl_8005AC00
/* 8005ABD0 000579D0  C0 02 8A 60 */	lfs f0, lbl_803CD3E0-_SDA2_BASE_(r2)
/* 8005ABD4 000579D4  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005ABD8 000579D8  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005ABDC 000579DC  7F C4 F3 78 */	mr r4, r30
/* 8005ABE0 000579E0  D0 1C 00 3C */	stfs f0, 0x3c(r28)
/* 8005ABE4 000579E4  7F E5 FB 78 */	mr r5, r31
/* 8005ABE8 000579E8  38 7C 00 3C */	addi r3, r28, 0x3c
/* 8005ABEC 000579EC  38 C6 03 89 */	addi r6, r6, 0x389
/* 8005ABF0 000579F0  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005ABF4 000579F4  C0 42 89 F4 */	lfs f2, lbl_803CD374-_SDA2_BASE_(r2)
/* 8005ABF8 000579F8  C0 62 8A 58 */	lfs f3, lbl_803CD3D8-_SDA2_BASE_(r2)
/* 8005ABFC 000579FC  48 00 56 B5 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005AC00:
/* 8005AC00 00057A00  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005AC04 00057A04  41 82 00 34 */	beq lbl_8005AC38
/* 8005AC08 00057A08  C0 02 8A 1C */	lfs f0, lbl_803CD39C-_SDA2_BASE_(r2)
/* 8005AC0C 00057A0C  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005AC10 00057A10  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005AC14 00057A14  7F C4 F3 78 */	mr r4, r30
/* 8005AC18 00057A18  D0 1C 00 40 */	stfs f0, 0x40(r28)
/* 8005AC1C 00057A1C  7F E5 FB 78 */	mr r5, r31
/* 8005AC20 00057A20  38 7C 00 40 */	addi r3, r28, 0x40
/* 8005AC24 00057A24  38 C6 03 9A */	addi r6, r6, 0x39a
/* 8005AC28 00057A28  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005AC2C 00057A2C  C0 42 89 F4 */	lfs f2, lbl_803CD374-_SDA2_BASE_(r2)
/* 8005AC30 00057A30  C0 62 8A 58 */	lfs f3, lbl_803CD3D8-_SDA2_BASE_(r2)
/* 8005AC34 00057A34  48 00 56 7D */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005AC38:
/* 8005AC38 00057A38  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005AC3C 00057A3C  41 82 00 34 */	beq lbl_8005AC70
/* 8005AC40 00057A40  C0 02 8A 3C */	lfs f0, lbl_803CD3BC-_SDA2_BASE_(r2)
/* 8005AC44 00057A44  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005AC48 00057A48  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005AC4C 00057A4C  7F C4 F3 78 */	mr r4, r30
/* 8005AC50 00057A50  D0 1C 00 44 */	stfs f0, 0x44(r28)
/* 8005AC54 00057A54  7F E5 FB 78 */	mr r5, r31
/* 8005AC58 00057A58  38 7C 00 44 */	addi r3, r28, 0x44
/* 8005AC5C 00057A5C  38 C6 03 AD */	addi r6, r6, 0x3ad
/* 8005AC60 00057A60  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005AC64 00057A64  C0 42 89 F4 */	lfs f2, lbl_803CD374-_SDA2_BASE_(r2)
/* 8005AC68 00057A68  C0 62 8A 58 */	lfs f3, lbl_803CD3D8-_SDA2_BASE_(r2)
/* 8005AC6C 00057A6C  48 00 56 45 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005AC70:
/* 8005AC70 00057A70  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005AC74 00057A74  41 82 00 34 */	beq lbl_8005ACA8
/* 8005AC78 00057A78  C0 02 8A 88 */	lfs f0, lbl_803CD408-_SDA2_BASE_(r2)
/* 8005AC7C 00057A7C  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005AC80 00057A80  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005AC84 00057A84  7F C4 F3 78 */	mr r4, r30
/* 8005AC88 00057A88  D0 1C 00 48 */	stfs f0, 0x48(r28)
/* 8005AC8C 00057A8C  7F E5 FB 78 */	mr r5, r31
/* 8005AC90 00057A90  38 7C 00 48 */	addi r3, r28, 0x48
/* 8005AC94 00057A94  38 C6 03 C9 */	addi r6, r6, 0x3c9
/* 8005AC98 00057A98  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005AC9C 00057A9C  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005ACA0 00057AA0  FC 60 08 90 */	fmr f3, f1
/* 8005ACA4 00057AA4  48 00 56 0D */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005ACA8:
/* 8005ACA8 00057AA8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005ACAC 00057AAC  41 82 00 34 */	beq lbl_8005ACE0
/* 8005ACB0 00057AB0  C0 02 8A 34 */	lfs f0, lbl_803CD3B4-_SDA2_BASE_(r2)
/* 8005ACB4 00057AB4  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005ACB8 00057AB8  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005ACBC 00057ABC  7F C4 F3 78 */	mr r4, r30
/* 8005ACC0 00057AC0  D0 1C 00 4C */	stfs f0, 0x4c(r28)
/* 8005ACC4 00057AC4  7F E5 FB 78 */	mr r5, r31
/* 8005ACC8 00057AC8  38 7C 00 4C */	addi r3, r28, 0x4c
/* 8005ACCC 00057ACC  38 C6 03 ED */	addi r6, r6, 0x3ed
/* 8005ACD0 00057AD0  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005ACD4 00057AD4  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005ACD8 00057AD8  C0 62 8A 58 */	lfs f3, lbl_803CD3D8-_SDA2_BASE_(r2)
/* 8005ACDC 00057ADC  48 00 55 D5 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005ACE0:
/* 8005ACE0 00057AE0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005ACE4 00057AE4  41 82 00 34 */	beq lbl_8005AD18
/* 8005ACE8 00057AE8  C0 02 8A 24 */	lfs f0, lbl_803CD3A4-_SDA2_BASE_(r2)
/* 8005ACEC 00057AEC  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005ACF0 00057AF0  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005ACF4 00057AF4  7F C4 F3 78 */	mr r4, r30
/* 8005ACF8 00057AF8  D0 1C 00 50 */	stfs f0, 0x50(r28)
/* 8005ACFC 00057AFC  7F E5 FB 78 */	mr r5, r31
/* 8005AD00 00057B00  38 7C 00 50 */	addi r3, r28, 0x50
/* 8005AD04 00057B04  38 C6 04 07 */	addi r6, r6, 0x407
/* 8005AD08 00057B08  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005AD0C 00057B0C  C0 42 89 F4 */	lfs f2, lbl_803CD374-_SDA2_BASE_(r2)
/* 8005AD10 00057B10  C0 62 8A 58 */	lfs f3, lbl_803CD3D8-_SDA2_BASE_(r2)
/* 8005AD14 00057B14  48 00 55 9D */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005AD18:
/* 8005AD18 00057B18  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005AD1C 00057B1C  41 82 00 34 */	beq lbl_8005AD50
/* 8005AD20 00057B20  C0 02 8A 50 */	lfs f0, lbl_803CD3D0-_SDA2_BASE_(r2)
/* 8005AD24 00057B24  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005AD28 00057B28  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005AD2C 00057B2C  7F C4 F3 78 */	mr r4, r30
/* 8005AD30 00057B30  D0 1C 00 54 */	stfs f0, 0x54(r28)
/* 8005AD34 00057B34  7F E5 FB 78 */	mr r5, r31
/* 8005AD38 00057B38  38 7C 00 54 */	addi r3, r28, 0x54
/* 8005AD3C 00057B3C  38 C6 04 1E */	addi r6, r6, 0x41e
/* 8005AD40 00057B40  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005AD44 00057B44  C0 42 89 F4 */	lfs f2, lbl_803CD374-_SDA2_BASE_(r2)
/* 8005AD48 00057B48  C0 62 8A 58 */	lfs f3, lbl_803CD3D8-_SDA2_BASE_(r2)
/* 8005AD4C 00057B4C  48 00 55 65 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005AD50:
/* 8005AD50 00057B50  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005AD54 00057B54  41 82 00 34 */	beq lbl_8005AD88
/* 8005AD58 00057B58  C0 02 8A 8C */	lfs f0, lbl_803CD40C-_SDA2_BASE_(r2)
/* 8005AD5C 00057B5C  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005AD60 00057B60  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005AD64 00057B64  7F C4 F3 78 */	mr r4, r30
/* 8005AD68 00057B68  D0 1C 00 58 */	stfs f0, 0x58(r28)
/* 8005AD6C 00057B6C  7F E5 FB 78 */	mr r5, r31
/* 8005AD70 00057B70  38 7C 00 58 */	addi r3, r28, 0x58
/* 8005AD74 00057B74  38 C6 04 35 */	addi r6, r6, 0x435
/* 8005AD78 00057B78  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005AD7C 00057B7C  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005AD80 00057B80  FC 60 08 90 */	fmr f3, f1
/* 8005AD84 00057B84  48 00 55 2D */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005AD88:
/* 8005AD88 00057B88  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005AD8C 00057B8C  41 82 00 34 */	beq lbl_8005ADC0
/* 8005AD90 00057B90  C0 02 8A 8C */	lfs f0, lbl_803CD40C-_SDA2_BASE_(r2)
/* 8005AD94 00057B94  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005AD98 00057B98  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005AD9C 00057B9C  7F C4 F3 78 */	mr r4, r30
/* 8005ADA0 00057BA0  D0 1C 00 5C */	stfs f0, 0x5c(r28)
/* 8005ADA4 00057BA4  7F E5 FB 78 */	mr r5, r31
/* 8005ADA8 00057BA8  38 7C 00 5C */	addi r3, r28, 0x5c
/* 8005ADAC 00057BAC  38 C6 04 4C */	addi r6, r6, 0x44c
/* 8005ADB0 00057BB0  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005ADB4 00057BB4  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005ADB8 00057BB8  FC 60 08 90 */	fmr f3, f1
/* 8005ADBC 00057BBC  48 00 54 F5 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005ADC0:
/* 8005ADC0 00057BC0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005ADC4 00057BC4  41 82 00 34 */	beq lbl_8005ADF8
/* 8005ADC8 00057BC8  C0 02 8A 90 */	lfs f0, lbl_803CD410-_SDA2_BASE_(r2)
/* 8005ADCC 00057BCC  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005ADD0 00057BD0  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005ADD4 00057BD4  7F C4 F3 78 */	mr r4, r30
/* 8005ADD8 00057BD8  D0 1C 00 60 */	stfs f0, 0x60(r28)
/* 8005ADDC 00057BDC  7F E5 FB 78 */	mr r5, r31
/* 8005ADE0 00057BE0  38 7C 00 60 */	addi r3, r28, 0x60
/* 8005ADE4 00057BE4  38 C6 04 63 */	addi r6, r6, 0x463
/* 8005ADE8 00057BE8  C0 22 8A 94 */	lfs f1, lbl_803CD414-_SDA2_BASE_(r2)
/* 8005ADEC 00057BEC  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005ADF0 00057BF0  C0 62 89 C0 */	lfs f3, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005ADF4 00057BF4  48 00 54 BD */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005ADF8:
/* 8005ADF8 00057BF8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005ADFC 00057BFC  41 82 00 34 */	beq lbl_8005AE30
/* 8005AE00 00057C00  C0 02 8A 40 */	lfs f0, lbl_803CD3C0-_SDA2_BASE_(r2)
/* 8005AE04 00057C04  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005AE08 00057C08  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005AE0C 00057C0C  7F C4 F3 78 */	mr r4, r30
/* 8005AE10 00057C10  D0 1C 00 64 */	stfs f0, 0x64(r28)
/* 8005AE14 00057C14  7F E5 FB 78 */	mr r5, r31
/* 8005AE18 00057C18  38 7C 00 64 */	addi r3, r28, 0x64
/* 8005AE1C 00057C1C  38 C6 04 7A */	addi r6, r6, 0x47a
/* 8005AE20 00057C20  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005AE24 00057C24  C0 42 89 FC */	lfs f2, lbl_803CD37C-_SDA2_BASE_(r2)
/* 8005AE28 00057C28  FC 60 08 90 */	fmr f3, f1
/* 8005AE2C 00057C2C  48 00 54 85 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005AE30:
/* 8005AE30 00057C30  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005AE34 00057C34  41 82 00 34 */	beq lbl_8005AE68
/* 8005AE38 00057C38  C0 02 89 C0 */	lfs f0, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005AE3C 00057C3C  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005AE40 00057C40  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005AE44 00057C44  7F C4 F3 78 */	mr r4, r30
/* 8005AE48 00057C48  D0 1C 00 68 */	stfs f0, 0x68(r28)
/* 8005AE4C 00057C4C  7F E5 FB 78 */	mr r5, r31
/* 8005AE50 00057C50  38 7C 00 68 */	addi r3, r28, 0x68
/* 8005AE54 00057C54  38 C6 04 94 */	addi r6, r6, 0x494
/* 8005AE58 00057C58  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005AE5C 00057C5C  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005AE60 00057C60  C0 62 8A 3C */	lfs f3, lbl_803CD3BC-_SDA2_BASE_(r2)
/* 8005AE64 00057C64  48 00 54 4D */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005AE68:
/* 8005AE68 00057C68  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005AE6C 00057C6C  41 82 00 34 */	beq lbl_8005AEA0
/* 8005AE70 00057C70  C0 02 89 D8 */	lfs f0, zEntCruiseBubble_f_0_25-_SDA2_BASE_(r2)
/* 8005AE74 00057C74  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005AE78 00057C78  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005AE7C 00057C7C  7F C4 F3 78 */	mr r4, r30
/* 8005AE80 00057C80  D0 1C 00 6C */	stfs f0, 0x6c(r28)
/* 8005AE84 00057C84  7F E5 FB 78 */	mr r5, r31
/* 8005AE88 00057C88  38 7C 00 6C */	addi r3, r28, 0x6c
/* 8005AE8C 00057C8C  38 C6 04 AE */	addi r6, r6, 0x4ae
/* 8005AE90 00057C90  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005AE94 00057C94  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005AE98 00057C98  C0 62 8A 3C */	lfs f3, lbl_803CD3BC-_SDA2_BASE_(r2)
/* 8005AE9C 00057C9C  48 00 54 15 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005AEA0:
/* 8005AEA0 00057CA0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005AEA4 00057CA4  41 82 00 34 */	beq lbl_8005AED8
/* 8005AEA8 00057CA8  C0 02 8A 34 */	lfs f0, lbl_803CD3B4-_SDA2_BASE_(r2)
/* 8005AEAC 00057CAC  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005AEB0 00057CB0  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005AEB4 00057CB4  7F C4 F3 78 */	mr r4, r30
/* 8005AEB8 00057CB8  D0 1C 00 70 */	stfs f0, 0x70(r28)
/* 8005AEBC 00057CBC  7F E5 FB 78 */	mr r5, r31
/* 8005AEC0 00057CC0  38 7C 00 70 */	addi r3, r28, 0x70
/* 8005AEC4 00057CC4  38 C6 04 CA */	addi r6, r6, 0x4ca
/* 8005AEC8 00057CC8  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005AECC 00057CCC  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005AED0 00057CD0  C0 62 8A 08 */	lfs f3, lbl_803CD388-_SDA2_BASE_(r2)
/* 8005AED4 00057CD4  48 00 53 DD */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005AED8:
/* 8005AED8 00057CD8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005AEDC 00057CDC  41 82 00 34 */	beq lbl_8005AF10
/* 8005AEE0 00057CE0  C0 02 8A 98 */	lfs f0, lbl_803CD418-_SDA2_BASE_(r2)
/* 8005AEE4 00057CE4  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005AEE8 00057CE8  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005AEEC 00057CEC  7F C4 F3 78 */	mr r4, r30
/* 8005AEF0 00057CF0  D0 1C 00 74 */	stfs f0, 0x74(r28)
/* 8005AEF4 00057CF4  7F E5 FB 78 */	mr r5, r31
/* 8005AEF8 00057CF8  38 7C 00 74 */	addi r3, r28, 0x74
/* 8005AEFC 00057CFC  38 C6 04 DA */	addi r6, r6, 0x4da
/* 8005AF00 00057D00  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005AF04 00057D04  C0 42 8A 9C */	lfs f2, lbl_803CD41C-_SDA2_BASE_(r2)
/* 8005AF08 00057D08  C0 62 8A 3C */	lfs f3, lbl_803CD3BC-_SDA2_BASE_(r2)
/* 8005AF0C 00057D0C  48 00 53 A5 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005AF10:
/* 8005AF10 00057D10  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005AF14 00057D14  41 82 00 34 */	beq lbl_8005AF48
/* 8005AF18 00057D18  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005AF1C 00057D1C  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005AF20 00057D20  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005AF24 00057D24  7F C4 F3 78 */	mr r4, r30
/* 8005AF28 00057D28  D0 1C 00 78 */	stfs f0, 0x78(r28)
/* 8005AF2C 00057D2C  7F E5 FB 78 */	mr r5, r31
/* 8005AF30 00057D30  38 7C 00 78 */	addi r3, r28, 0x78
/* 8005AF34 00057D34  38 C6 04 EC */	addi r6, r6, 0x4ec
/* 8005AF38 00057D38  C0 22 8A 68 */	lfs f1, lbl_803CD3E8-_SDA2_BASE_(r2)
/* 8005AF3C 00057D3C  C0 42 8A A0 */	lfs f2, lbl_803CD420-_SDA2_BASE_(r2)
/* 8005AF40 00057D40  C0 62 8A 44 */	lfs f3, lbl_803CD3C4-_SDA2_BASE_(r2)
/* 8005AF44 00057D44  48 00 53 6D */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005AF48:
/* 8005AF48 00057D48  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005AF4C 00057D4C  41 82 00 34 */	beq lbl_8005AF80
/* 8005AF50 00057D50  C0 02 8A 3C */	lfs f0, lbl_803CD3BC-_SDA2_BASE_(r2)
/* 8005AF54 00057D54  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005AF58 00057D58  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005AF5C 00057D5C  7F C4 F3 78 */	mr r4, r30
/* 8005AF60 00057D60  D0 1C 00 7C */	stfs f0, 0x7c(r28)
/* 8005AF64 00057D64  7F E5 FB 78 */	mr r5, r31
/* 8005AF68 00057D68  38 7C 00 7C */	addi r3, r28, 0x7c
/* 8005AF6C 00057D6C  38 C6 04 FD */	addi r6, r6, 0x4fd
/* 8005AF70 00057D70  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005AF74 00057D74  C0 42 89 F4 */	lfs f2, lbl_803CD374-_SDA2_BASE_(r2)
/* 8005AF78 00057D78  C0 62 8A 58 */	lfs f3, lbl_803CD3D8-_SDA2_BASE_(r2)
/* 8005AF7C 00057D7C  48 00 53 35 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005AF80:
/* 8005AF80 00057D80  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005AF84 00057D84  41 82 00 34 */	beq lbl_8005AFB8
/* 8005AF88 00057D88  C0 02 8A 24 */	lfs f0, lbl_803CD3A4-_SDA2_BASE_(r2)
/* 8005AF8C 00057D8C  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005AF90 00057D90  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005AF94 00057D94  7F C4 F3 78 */	mr r4, r30
/* 8005AF98 00057D98  D0 1C 00 80 */	stfs f0, 0x80(r28)
/* 8005AF9C 00057D9C  7F E5 FB 78 */	mr r5, r31
/* 8005AFA0 00057DA0  38 7C 00 80 */	addi r3, r28, 0x80
/* 8005AFA4 00057DA4  38 C6 05 0E */	addi r6, r6, 0x50e
/* 8005AFA8 00057DA8  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005AFAC 00057DAC  C0 42 89 F4 */	lfs f2, lbl_803CD374-_SDA2_BASE_(r2)
/* 8005AFB0 00057DB0  C0 62 8A 58 */	lfs f3, lbl_803CD3D8-_SDA2_BASE_(r2)
/* 8005AFB4 00057DB4  48 00 52 FD */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005AFB8:
/* 8005AFB8 00057DB8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005AFBC 00057DBC  41 82 00 34 */	beq lbl_8005AFF0
/* 8005AFC0 00057DC0  C0 02 8A A4 */	lfs f0, lbl_803CD424-_SDA2_BASE_(r2)
/* 8005AFC4 00057DC4  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005AFC8 00057DC8  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005AFCC 00057DCC  7F C4 F3 78 */	mr r4, r30
/* 8005AFD0 00057DD0  D0 1C 00 84 */	stfs f0, 0x84(r28)
/* 8005AFD4 00057DD4  7F E5 FB 78 */	mr r5, r31
/* 8005AFD8 00057DD8  38 7C 00 84 */	addi r3, r28, 0x84
/* 8005AFDC 00057DDC  38 C6 05 21 */	addi r6, r6, 0x521
/* 8005AFE0 00057DE0  C0 22 8A 68 */	lfs f1, lbl_803CD3E8-_SDA2_BASE_(r2)
/* 8005AFE4 00057DE4  C0 42 89 F4 */	lfs f2, lbl_803CD374-_SDA2_BASE_(r2)
/* 8005AFE8 00057DE8  C0 62 8A 58 */	lfs f3, lbl_803CD3D8-_SDA2_BASE_(r2)
/* 8005AFEC 00057DEC  48 00 52 C5 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005AFF0:
/* 8005AFF0 00057DF0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005AFF4 00057DF4  41 82 00 34 */	beq lbl_8005B028
/* 8005AFF8 00057DF8  C0 02 8A A8 */	lfs f0, lbl_803CD428-_SDA2_BASE_(r2)
/* 8005AFFC 00057DFC  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B000 00057E00  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B004 00057E04  7F C4 F3 78 */	mr r4, r30
/* 8005B008 00057E08  D0 1C 00 88 */	stfs f0, 0x88(r28)
/* 8005B00C 00057E0C  7F E5 FB 78 */	mr r5, r31
/* 8005B010 00057E10  38 7C 00 88 */	addi r3, r28, 0x88
/* 8005B014 00057E14  38 C6 05 38 */	addi r6, r6, 0x538
/* 8005B018 00057E18  C0 22 8A 68 */	lfs f1, lbl_803CD3E8-_SDA2_BASE_(r2)
/* 8005B01C 00057E1C  C0 42 89 F4 */	lfs f2, lbl_803CD374-_SDA2_BASE_(r2)
/* 8005B020 00057E20  C0 62 8A 58 */	lfs f3, lbl_803CD3D8-_SDA2_BASE_(r2)
/* 8005B024 00057E24  48 00 52 8D */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B028:
/* 8005B028 00057E28  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B02C 00057E2C  41 82 00 34 */	beq lbl_8005B060
/* 8005B030 00057E30  C0 02 8A AC */	lfs f0, lbl_803CD42C-_SDA2_BASE_(r2)
/* 8005B034 00057E34  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B038 00057E38  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B03C 00057E3C  7F C4 F3 78 */	mr r4, r30
/* 8005B040 00057E40  D0 1C 00 8C */	stfs f0, 0x8c(r28)
/* 8005B044 00057E44  7F E5 FB 78 */	mr r5, r31
/* 8005B048 00057E48  38 7C 00 8C */	addi r3, r28, 0x8c
/* 8005B04C 00057E4C  38 C6 05 4F */	addi r6, r6, 0x54f
/* 8005B050 00057E50  C0 22 8A 68 */	lfs f1, lbl_803CD3E8-_SDA2_BASE_(r2)
/* 8005B054 00057E54  C0 42 89 F4 */	lfs f2, lbl_803CD374-_SDA2_BASE_(r2)
/* 8005B058 00057E58  C0 62 8A 58 */	lfs f3, lbl_803CD3D8-_SDA2_BASE_(r2)
/* 8005B05C 00057E5C  48 00 52 55 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B060:
/* 8005B060 00057E60  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B064 00057E64  41 82 00 34 */	beq lbl_8005B098
/* 8005B068 00057E68  C0 02 8A 40 */	lfs f0, lbl_803CD3C0-_SDA2_BASE_(r2)
/* 8005B06C 00057E6C  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B070 00057E70  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B074 00057E74  7F C4 F3 78 */	mr r4, r30
/* 8005B078 00057E78  D0 1C 00 90 */	stfs f0, 0x90(r28)
/* 8005B07C 00057E7C  7F E5 FB 78 */	mr r5, r31
/* 8005B080 00057E80  38 7C 00 90 */	addi r3, r28, 0x90
/* 8005B084 00057E84  38 C6 05 68 */	addi r6, r6, 0x568
/* 8005B088 00057E88  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B08C 00057E8C  C0 42 8A B0 */	lfs f2, lbl_803CD430-_SDA2_BASE_(r2)
/* 8005B090 00057E90  C0 62 8A 58 */	lfs f3, lbl_803CD3D8-_SDA2_BASE_(r2)
/* 8005B094 00057E94  48 00 52 1D */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B098:
/* 8005B098 00057E98  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B09C 00057E9C  41 82 00 34 */	beq lbl_8005B0D0
/* 8005B0A0 00057EA0  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B0A4 00057EA4  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B0A8 00057EA8  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B0AC 00057EAC  7F C4 F3 78 */	mr r4, r30
/* 8005B0B0 00057EB0  D0 1C 00 94 */	stfs f0, 0x94(r28)
/* 8005B0B4 00057EB4  7F E5 FB 78 */	mr r5, r31
/* 8005B0B8 00057EB8  38 7C 00 94 */	addi r3, r28, 0x94
/* 8005B0BC 00057EBC  38 C6 05 7E */	addi r6, r6, 0x57e
/* 8005B0C0 00057EC0  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B0C4 00057EC4  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B0C8 00057EC8  C0 62 8A 58 */	lfs f3, lbl_803CD3D8-_SDA2_BASE_(r2)
/* 8005B0CC 00057ECC  48 00 51 E5 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B0D0:
/* 8005B0D0 00057ED0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B0D4 00057ED4  41 82 00 34 */	beq lbl_8005B108
/* 8005B0D8 00057ED8  C0 02 8A 98 */	lfs f0, lbl_803CD418-_SDA2_BASE_(r2)
/* 8005B0DC 00057EDC  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B0E0 00057EE0  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B0E4 00057EE4  7F C4 F3 78 */	mr r4, r30
/* 8005B0E8 00057EE8  D0 1C 00 98 */	stfs f0, 0x98(r28)
/* 8005B0EC 00057EEC  7F E5 FB 78 */	mr r5, r31
/* 8005B0F0 00057EF0  38 7C 00 98 */	addi r3, r28, 0x98
/* 8005B0F4 00057EF4  38 C6 05 91 */	addi r6, r6, 0x591
/* 8005B0F8 00057EF8  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B0FC 00057EFC  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B100 00057F00  C0 62 8A 58 */	lfs f3, lbl_803CD3D8-_SDA2_BASE_(r2)
/* 8005B104 00057F04  48 00 51 AD */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B108:
/* 8005B108 00057F08  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B10C 00057F0C  41 82 00 34 */	beq lbl_8005B140
/* 8005B110 00057F10  C0 02 8A 34 */	lfs f0, lbl_803CD3B4-_SDA2_BASE_(r2)
/* 8005B114 00057F14  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B118 00057F18  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B11C 00057F1C  7F C4 F3 78 */	mr r4, r30
/* 8005B120 00057F20  D0 1C 00 9C */	stfs f0, 0x9c(r28)
/* 8005B124 00057F24  7F E5 FB 78 */	mr r5, r31
/* 8005B128 00057F28  38 7C 00 9C */	addi r3, r28, 0x9c
/* 8005B12C 00057F2C  38 C6 05 A9 */	addi r6, r6, 0x5a9
/* 8005B130 00057F30  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B134 00057F34  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B138 00057F38  C0 62 8A 3C */	lfs f3, lbl_803CD3BC-_SDA2_BASE_(r2)
/* 8005B13C 00057F3C  48 00 51 75 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B140:
/* 8005B140 00057F40  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B144 00057F44  41 82 00 34 */	beq lbl_8005B178
/* 8005B148 00057F48  C0 02 89 C0 */	lfs f0, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B14C 00057F4C  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B150 00057F50  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B154 00057F54  7F C4 F3 78 */	mr r4, r30
/* 8005B158 00057F58  D0 1C 00 A0 */	stfs f0, 0xa0(r28)
/* 8005B15C 00057F5C  7F E5 FB 78 */	mr r5, r31
/* 8005B160 00057F60  38 7C 00 A0 */	addi r3, r28, 0xa0
/* 8005B164 00057F64  38 C6 05 C0 */	addi r6, r6, 0x5c0
/* 8005B168 00057F68  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B16C 00057F6C  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B170 00057F70  C0 62 8A 3C */	lfs f3, lbl_803CD3BC-_SDA2_BASE_(r2)
/* 8005B174 00057F74  48 00 51 3D */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B178:
/* 8005B178 00057F78  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B17C 00057F7C  41 82 00 34 */	beq lbl_8005B1B0
/* 8005B180 00057F80  C0 02 8A B4 */	lfs f0, lbl_803CD434-_SDA2_BASE_(r2)
/* 8005B184 00057F84  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B188 00057F88  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B18C 00057F8C  7F C4 F3 78 */	mr r4, r30
/* 8005B190 00057F90  D0 1C 00 A4 */	stfs f0, 0xa4(r28)
/* 8005B194 00057F94  7F E5 FB 78 */	mr r5, r31
/* 8005B198 00057F98  38 7C 00 A4 */	addi r3, r28, 0xa4
/* 8005B19C 00057F9C  38 C6 05 D7 */	addi r6, r6, 0x5d7
/* 8005B1A0 00057FA0  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B1A4 00057FA4  C0 42 8A 3C */	lfs f2, lbl_803CD3BC-_SDA2_BASE_(r2)
/* 8005B1A8 00057FA8  C0 62 8A B8 */	lfs f3, lbl_803CD438-_SDA2_BASE_(r2)
/* 8005B1AC 00057FAC  48 00 51 05 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B1B0:
/* 8005B1B0 00057FB0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B1B4 00057FB4  41 82 00 34 */	beq lbl_8005B1E8
/* 8005B1B8 00057FB8  C0 02 8A 34 */	lfs f0, lbl_803CD3B4-_SDA2_BASE_(r2)
/* 8005B1BC 00057FBC  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B1C0 00057FC0  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B1C4 00057FC4  7F C4 F3 78 */	mr r4, r30
/* 8005B1C8 00057FC8  D0 1C 00 A8 */	stfs f0, 0xa8(r28)
/* 8005B1CC 00057FCC  7F E5 FB 78 */	mr r5, r31
/* 8005B1D0 00057FD0  38 7C 00 A8 */	addi r3, r28, 0xa8
/* 8005B1D4 00057FD4  38 C6 05 E8 */	addi r6, r6, 0x5e8
/* 8005B1D8 00057FD8  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B1DC 00057FDC  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B1E0 00057FE0  C0 62 8A 3C */	lfs f3, lbl_803CD3BC-_SDA2_BASE_(r2)
/* 8005B1E4 00057FE4  48 00 50 CD */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B1E8:
/* 8005B1E8 00057FE8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B1EC 00057FEC  41 82 00 34 */	beq lbl_8005B220
/* 8005B1F0 00057FF0  C0 02 89 D8 */	lfs f0, zEntCruiseBubble_f_0_25-_SDA2_BASE_(r2)
/* 8005B1F4 00057FF4  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B1F8 00057FF8  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B1FC 00057FFC  7F C4 F3 78 */	mr r4, r30
/* 8005B200 00058000  D0 1C 00 AC */	stfs f0, 0xac(r28)
/* 8005B204 00058004  7F E5 FB 78 */	mr r5, r31
/* 8005B208 00058008  38 7C 00 AC */	addi r3, r28, 0xac
/* 8005B20C 0005800C  38 C6 05 FF */	addi r6, r6, 0x5ff
/* 8005B210 00058010  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B214 00058014  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B218 00058018  C0 62 8A 3C */	lfs f3, lbl_803CD3BC-_SDA2_BASE_(r2)
/* 8005B21C 0005801C  48 00 50 95 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B220:
/* 8005B220 00058020  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B224 00058024  41 82 00 34 */	beq lbl_8005B258
/* 8005B228 00058028  C0 02 8A 3C */	lfs f0, lbl_803CD3BC-_SDA2_BASE_(r2)
/* 8005B22C 0005802C  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B230 00058030  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B234 00058034  7F C4 F3 78 */	mr r4, r30
/* 8005B238 00058038  D0 1C 00 B0 */	stfs f0, 0xb0(r28)
/* 8005B23C 0005803C  7F E5 FB 78 */	mr r5, r31
/* 8005B240 00058040  38 7C 00 B0 */	addi r3, r28, 0xb0
/* 8005B244 00058044  38 C6 06 1A */	addi r6, r6, 0x61a
/* 8005B248 00058048  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B24C 0005804C  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B250 00058050  C0 62 8A 08 */	lfs f3, lbl_803CD388-_SDA2_BASE_(r2)
/* 8005B254 00058054  48 00 50 5D */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B258:
/* 8005B258 00058058  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B25C 0005805C  41 82 00 34 */	beq lbl_8005B290
/* 8005B260 00058060  C0 02 8A 60 */	lfs f0, lbl_803CD3E0-_SDA2_BASE_(r2)
/* 8005B264 00058064  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B268 00058068  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B26C 0005806C  7F C4 F3 78 */	mr r4, r30
/* 8005B270 00058070  D0 1C 00 B4 */	stfs f0, 0xb4(r28)
/* 8005B274 00058074  7F E5 FB 78 */	mr r5, r31
/* 8005B278 00058078  38 7C 00 B4 */	addi r3, r28, 0xb4
/* 8005B27C 0005807C  38 C6 06 31 */	addi r6, r6, 0x631
/* 8005B280 00058080  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B284 00058084  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B288 00058088  C0 62 8A 08 */	lfs f3, lbl_803CD388-_SDA2_BASE_(r2)
/* 8005B28C 0005808C  48 00 50 25 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B290:
/* 8005B290 00058090  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B294 00058094  41 82 00 34 */	beq lbl_8005B2C8
/* 8005B298 00058098  C0 02 8A 54 */	lfs f0, lbl_803CD3D4-_SDA2_BASE_(r2)
/* 8005B29C 0005809C  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B2A0 000580A0  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B2A4 000580A4  7F C4 F3 78 */	mr r4, r30
/* 8005B2A8 000580A8  D0 1C 00 B8 */	stfs f0, 0xb8(r28)
/* 8005B2AC 000580AC  7F E5 FB 78 */	mr r5, r31
/* 8005B2B0 000580B0  38 7C 00 B8 */	addi r3, r28, 0xb8
/* 8005B2B4 000580B4  38 C6 06 48 */	addi r6, r6, 0x648
/* 8005B2B8 000580B8  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B2BC 000580BC  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B2C0 000580C0  C0 62 8A 08 */	lfs f3, lbl_803CD388-_SDA2_BASE_(r2)
/* 8005B2C4 000580C4  48 00 4F ED */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B2C8:
/* 8005B2C8 000580C8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B2CC 000580CC  41 82 00 34 */	beq lbl_8005B300
/* 8005B2D0 000580D0  C0 02 8A 30 */	lfs f0, lbl_803CD3B0-_SDA2_BASE_(r2)
/* 8005B2D4 000580D4  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B2D8 000580D8  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B2DC 000580DC  7F C4 F3 78 */	mr r4, r30
/* 8005B2E0 000580E0  D0 1C 00 BC */	stfs f0, 0xbc(r28)
/* 8005B2E4 000580E4  7F E5 FB 78 */	mr r5, r31
/* 8005B2E8 000580E8  38 7C 00 BC */	addi r3, r28, 0xbc
/* 8005B2EC 000580EC  38 C6 06 61 */	addi r6, r6, 0x661
/* 8005B2F0 000580F0  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B2F4 000580F4  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B2F8 000580F8  C0 62 89 C8 */	lfs f3, lbl_803CD348-_SDA2_BASE_(r2)
/* 8005B2FC 000580FC  48 00 4F B5 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B300:
/* 8005B300 00058100  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B304 00058104  41 82 00 34 */	beq lbl_8005B338
/* 8005B308 00058108  C0 02 8A BC */	lfs f0, lbl_803CD43C-_SDA2_BASE_(r2)
/* 8005B30C 0005810C  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B310 00058110  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B314 00058114  7F C4 F3 78 */	mr r4, r30
/* 8005B318 00058118  D0 1C 00 C0 */	stfs f0, 0xc0(r28)
/* 8005B31C 0005811C  7F E5 FB 78 */	mr r5, r31
/* 8005B320 00058120  38 7C 00 C0 */	addi r3, r28, 0xc0
/* 8005B324 00058124  38 C6 06 7E */	addi r6, r6, 0x67e
/* 8005B328 00058128  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B32C 0005812C  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B330 00058130  C0 62 8A 34 */	lfs f3, lbl_803CD3B4-_SDA2_BASE_(r2)
/* 8005B334 00058134  48 00 4F 7D */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B338:
/* 8005B338 00058138  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B33C 0005813C  41 82 00 34 */	beq lbl_8005B370
/* 8005B340 00058140  C0 02 8A 90 */	lfs f0, lbl_803CD410-_SDA2_BASE_(r2)
/* 8005B344 00058144  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B348 00058148  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B34C 0005814C  7F C4 F3 78 */	mr r4, r30
/* 8005B350 00058150  D0 1C 00 C4 */	stfs f0, 0xc4(r28)
/* 8005B354 00058154  7F E5 FB 78 */	mr r5, r31
/* 8005B358 00058158  38 7C 00 C4 */	addi r3, r28, 0xc4
/* 8005B35C 0005815C  38 C6 06 98 */	addi r6, r6, 0x698
/* 8005B360 00058160  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B364 00058164  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B368 00058168  FC 60 08 90 */	fmr f3, f1
/* 8005B36C 0005816C  48 00 4F 45 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B370:
/* 8005B370 00058170  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B374 00058174  41 82 00 34 */	beq lbl_8005B3A8
/* 8005B378 00058178  C0 02 89 D8 */	lfs f0, zEntCruiseBubble_f_0_25-_SDA2_BASE_(r2)
/* 8005B37C 0005817C  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B380 00058180  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B384 00058184  7F C4 F3 78 */	mr r4, r30
/* 8005B388 00058188  D0 1C 00 C8 */	stfs f0, 0xc8(r28)
/* 8005B38C 0005818C  7F E5 FB 78 */	mr r5, r31
/* 8005B390 00058190  38 7C 00 C8 */	addi r3, r28, 0xc8
/* 8005B394 00058194  38 C6 06 B3 */	addi r6, r6, 0x6b3
/* 8005B398 00058198  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B39C 0005819C  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B3A0 000581A0  FC 60 08 90 */	fmr f3, f1
/* 8005B3A4 000581A4  48 00 4F 0D */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B3A8:
/* 8005B3A8 000581A8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B3AC 000581AC  41 82 00 34 */	beq lbl_8005B3E0
/* 8005B3B0 000581B0  C0 02 89 C8 */	lfs f0, lbl_803CD348-_SDA2_BASE_(r2)
/* 8005B3B4 000581B4  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B3B8 000581B8  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B3BC 000581BC  7F C4 F3 78 */	mr r4, r30
/* 8005B3C0 000581C0  D0 1C 00 CC */	stfs f0, 0xcc(r28)
/* 8005B3C4 000581C4  7F E5 FB 78 */	mr r5, r31
/* 8005B3C8 000581C8  38 7C 00 CC */	addi r3, r28, 0xcc
/* 8005B3CC 000581CC  38 C6 06 D0 */	addi r6, r6, 0x6d0
/* 8005B3D0 000581D0  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B3D4 000581D4  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B3D8 000581D8  FC 60 08 90 */	fmr f3, f1
/* 8005B3DC 000581DC  48 00 4E D5 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B3E0:
/* 8005B3E0 000581E0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B3E4 000581E4  41 82 00 34 */	beq lbl_8005B418
/* 8005B3E8 000581E8  C0 02 89 C8 */	lfs f0, lbl_803CD348-_SDA2_BASE_(r2)
/* 8005B3EC 000581EC  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B3F0 000581F0  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B3F4 000581F4  7F C4 F3 78 */	mr r4, r30
/* 8005B3F8 000581F8  D0 1C 00 D0 */	stfs f0, 0xd0(r28)
/* 8005B3FC 000581FC  7F E5 FB 78 */	mr r5, r31
/* 8005B400 00058200  38 7C 00 D0 */	addi r3, r28, 0xd0
/* 8005B404 00058204  38 C6 06 E3 */	addi r6, r6, 0x6e3
/* 8005B408 00058208  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B40C 0005820C  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B410 00058210  FC 60 08 90 */	fmr f3, f1
/* 8005B414 00058214  48 00 4E 9D */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B418:
/* 8005B418 00058218  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B41C 0005821C  41 82 00 34 */	beq lbl_8005B450
/* 8005B420 00058220  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B424 00058224  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B428 00058228  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B42C 0005822C  7F C4 F3 78 */	mr r4, r30
/* 8005B430 00058230  D0 1C 00 D8 */	stfs f0, 0xd8(r28)
/* 8005B434 00058234  7F E5 FB 78 */	mr r5, r31
/* 8005B438 00058238  38 7C 00 D8 */	addi r3, r28, 0xd8
/* 8005B43C 0005823C  38 C6 06 F6 */	addi r6, r6, 0x6f6
/* 8005B440 00058240  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B444 00058244  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B448 00058248  FC 60 08 90 */	fmr f3, f1
/* 8005B44C 0005824C  48 00 4E 65 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B450:
/* 8005B450 00058250  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B454 00058254  41 82 00 34 */	beq lbl_8005B488
/* 8005B458 00058258  C0 02 8A 38 */	lfs f0, lbl_803CD3B8-_SDA2_BASE_(r2)
/* 8005B45C 0005825C  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B460 00058260  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B464 00058264  7F C4 F3 78 */	mr r4, r30
/* 8005B468 00058268  D0 1C 00 DC */	stfs f0, 0xdc(r28)
/* 8005B46C 0005826C  7F E5 FB 78 */	mr r5, r31
/* 8005B470 00058270  38 7C 00 DC */	addi r3, r28, 0xdc
/* 8005B474 00058274  38 C6 07 0D */	addi r6, r6, 0x70d
/* 8005B478 00058278  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B47C 0005827C  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B480 00058280  FC 60 08 90 */	fmr f3, f1
/* 8005B484 00058284  48 00 4E 2D */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B488:
/* 8005B488 00058288  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B48C 0005828C  41 82 00 34 */	beq lbl_8005B4C0
/* 8005B490 00058290  C0 02 89 CC */	lfs f0, zEntCruiseBubble_f_3_0-_SDA2_BASE_(r2)
/* 8005B494 00058294  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B498 00058298  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B49C 0005829C  7F C4 F3 78 */	mr r4, r30
/* 8005B4A0 000582A0  D0 1C 00 E4 */	stfs f0, 0xe4(r28)
/* 8005B4A4 000582A4  7F E5 FB 78 */	mr r5, r31
/* 8005B4A8 000582A8  38 7C 00 E4 */	addi r3, r28, 0xe4
/* 8005B4AC 000582AC  38 C6 07 24 */	addi r6, r6, 0x724
/* 8005B4B0 000582B0  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B4B4 000582B4  C0 62 8A 3C */	lfs f3, lbl_803CD3BC-_SDA2_BASE_(r2)
/* 8005B4B8 000582B8  FC 40 08 90 */	fmr f2, f1
/* 8005B4BC 000582BC  48 00 4D F5 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B4C0:
/* 8005B4C0 000582C0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B4C4 000582C4  41 82 00 34 */	beq lbl_8005B4F8
/* 8005B4C8 000582C8  C0 02 8A 64 */	lfs f0, lbl_803CD3E4-_SDA2_BASE_(r2)
/* 8005B4CC 000582CC  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B4D0 000582D0  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B4D4 000582D4  7F C4 F3 78 */	mr r4, r30
/* 8005B4D8 000582D8  D0 1C 00 E8 */	stfs f0, 0xe8(r28)
/* 8005B4DC 000582DC  7F E5 FB 78 */	mr r5, r31
/* 8005B4E0 000582E0  38 7C 00 E8 */	addi r3, r28, 0xe8
/* 8005B4E4 000582E4  38 C6 07 35 */	addi r6, r6, 0x735
/* 8005B4E8 000582E8  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B4EC 000582EC  C0 62 8A C0 */	lfs f3, lbl_803CD440-_SDA2_BASE_(r2)
/* 8005B4F0 000582F0  FC 40 08 90 */	fmr f2, f1
/* 8005B4F4 000582F4  48 00 4D BD */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B4F8:
/* 8005B4F8 000582F8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B4FC 000582FC  41 82 00 34 */	beq lbl_8005B530
/* 8005B500 00058300  C0 02 8A 50 */	lfs f0, lbl_803CD3D0-_SDA2_BASE_(r2)
/* 8005B504 00058304  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B508 00058308  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B50C 0005830C  7F C4 F3 78 */	mr r4, r30
/* 8005B510 00058310  D0 1C 00 EC */	stfs f0, 0xec(r28)
/* 8005B514 00058314  7F E5 FB 78 */	mr r5, r31
/* 8005B518 00058318  38 7C 00 EC */	addi r3, r28, 0xec
/* 8005B51C 0005831C  38 C6 07 46 */	addi r6, r6, 0x746
/* 8005B520 00058320  C0 22 8A 68 */	lfs f1, lbl_803CD3E8-_SDA2_BASE_(r2)
/* 8005B524 00058324  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B528 00058328  C0 62 8A 44 */	lfs f3, lbl_803CD3C4-_SDA2_BASE_(r2)
/* 8005B52C 0005832C  48 00 4D 85 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B530:
/* 8005B530 00058330  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B534 00058334  41 82 00 34 */	beq lbl_8005B568
/* 8005B538 00058338  C0 02 8A C4 */	lfs f0, lbl_803CD444-_SDA2_BASE_(r2)
/* 8005B53C 0005833C  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B540 00058340  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B544 00058344  7F C4 F3 78 */	mr r4, r30
/* 8005B548 00058348  D0 1C 00 F0 */	stfs f0, 0xf0(r28)
/* 8005B54C 0005834C  7F E5 FB 78 */	mr r5, r31
/* 8005B550 00058350  38 7C 00 F0 */	addi r3, r28, 0xf0
/* 8005B554 00058354  38 C6 07 57 */	addi r6, r6, 0x757
/* 8005B558 00058358  C0 22 8A 68 */	lfs f1, lbl_803CD3E8-_SDA2_BASE_(r2)
/* 8005B55C 0005835C  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B560 00058360  C0 62 8A 44 */	lfs f3, lbl_803CD3C4-_SDA2_BASE_(r2)
/* 8005B564 00058364  48 00 4D 4D */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B568:
/* 8005B568 00058368  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B56C 0005836C  41 82 00 34 */	beq lbl_8005B5A0
/* 8005B570 00058370  C0 02 89 D8 */	lfs f0, zEntCruiseBubble_f_0_25-_SDA2_BASE_(r2)
/* 8005B574 00058374  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B578 00058378  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B57C 0005837C  7F C4 F3 78 */	mr r4, r30
/* 8005B580 00058380  D0 1C 00 F4 */	stfs f0, 0xf4(r28)
/* 8005B584 00058384  7F E5 FB 78 */	mr r5, r31
/* 8005B588 00058388  38 7C 00 F4 */	addi r3, r28, 0xf4
/* 8005B58C 0005838C  38 C6 07 68 */	addi r6, r6, 0x768
/* 8005B590 00058390  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B594 00058394  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B598 00058398  C0 62 8A 24 */	lfs f3, lbl_803CD3A4-_SDA2_BASE_(r2)
/* 8005B59C 0005839C  48 00 4D 15 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B5A0:
/* 8005B5A0 000583A0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B5A4 000583A4  41 82 00 34 */	beq lbl_8005B5D8
/* 8005B5A8 000583A8  C0 02 8A 6C */	lfs f0, lbl_803CD3EC-_SDA2_BASE_(r2)
/* 8005B5AC 000583AC  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B5B0 000583B0  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B5B4 000583B4  7F C4 F3 78 */	mr r4, r30
/* 8005B5B8 000583B8  D0 1C 00 F8 */	stfs f0, 0xf8(r28)
/* 8005B5BC 000583BC  7F E5 FB 78 */	mr r5, r31
/* 8005B5C0 000583C0  38 7C 00 F8 */	addi r3, r28, 0xf8
/* 8005B5C4 000583C4  38 C6 07 7F */	addi r6, r6, 0x77f
/* 8005B5C8 000583C8  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B5CC 000583CC  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B5D0 000583D0  C0 62 8A C0 */	lfs f3, lbl_803CD440-_SDA2_BASE_(r2)
/* 8005B5D4 000583D4  48 00 4C DD */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B5D8:
/* 8005B5D8 000583D8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B5DC 000583DC  41 82 00 34 */	beq lbl_8005B610
/* 8005B5E0 000583E0  C0 02 8A 6C */	lfs f0, lbl_803CD3EC-_SDA2_BASE_(r2)
/* 8005B5E4 000583E4  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B5E8 000583E8  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B5EC 000583EC  7F C4 F3 78 */	mr r4, r30
/* 8005B5F0 000583F0  D0 1C 00 FC */	stfs f0, 0xfc(r28)
/* 8005B5F4 000583F4  7F E5 FB 78 */	mr r5, r31
/* 8005B5F8 000583F8  38 7C 00 FC */	addi r3, r28, 0xfc
/* 8005B5FC 000583FC  38 C6 07 91 */	addi r6, r6, 0x791
/* 8005B600 00058400  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B604 00058404  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B608 00058408  C0 62 8A C0 */	lfs f3, lbl_803CD440-_SDA2_BASE_(r2)
/* 8005B60C 0005840C  48 00 4C A5 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B610:
/* 8005B610 00058410  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B614 00058414  41 82 00 34 */	beq lbl_8005B648
/* 8005B618 00058418  C0 02 89 C8 */	lfs f0, lbl_803CD348-_SDA2_BASE_(r2)
/* 8005B61C 0005841C  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B620 00058420  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B624 00058424  7F C4 F3 78 */	mr r4, r30
/* 8005B628 00058428  D0 1C 01 00 */	stfs f0, 0x100(r28)
/* 8005B62C 0005842C  7F E5 FB 78 */	mr r5, r31
/* 8005B630 00058430  38 7C 01 00 */	addi r3, r28, 0x100
/* 8005B634 00058434  38 C6 07 A3 */	addi r6, r6, 0x7a3
/* 8005B638 00058438  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B63C 0005843C  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B640 00058440  C0 62 8A 3C */	lfs f3, lbl_803CD3BC-_SDA2_BASE_(r2)
/* 8005B644 00058444  48 00 4C 6D */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B648:
/* 8005B648 00058448  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B64C 0005844C  41 82 00 34 */	beq lbl_8005B680
/* 8005B650 00058450  C0 02 8A 30 */	lfs f0, lbl_803CD3B0-_SDA2_BASE_(r2)
/* 8005B654 00058454  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B658 00058458  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B65C 0005845C  7F C4 F3 78 */	mr r4, r30
/* 8005B660 00058460  D0 1C 01 04 */	stfs f0, 0x104(r28)
/* 8005B664 00058464  7F E5 FB 78 */	mr r5, r31
/* 8005B668 00058468  38 7C 01 04 */	addi r3, r28, 0x104
/* 8005B66C 0005846C  38 C6 07 BC */	addi r6, r6, 0x7bc
/* 8005B670 00058470  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B674 00058474  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B678 00058478  C0 62 8A 3C */	lfs f3, lbl_803CD3BC-_SDA2_BASE_(r2)
/* 8005B67C 0005847C  48 00 4C 35 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B680:
/* 8005B680 00058480  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B684 00058484  41 82 00 34 */	beq lbl_8005B6B8
/* 8005B688 00058488  38 00 01 2C */	li r0, 0x12c
/* 8005B68C 0005848C  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B690 00058490  38 83 53 3C */	addi r4, r3, stringBase0__13cruise_bubble@l
/* 8005B694 00058494  90 1C 01 08 */	stw r0, 0x108(r28)
/* 8005B698 00058498  7F C7 F3 78 */	mr r7, r30
/* 8005B69C 0005849C  7F E8 FB 78 */	mr r8, r31
/* 8005B6A0 000584A0  38 7C 01 08 */	addi r3, r28, 0x108
/* 8005B6A4 000584A4  39 24 07 D3 */	addi r9, r4, 0x7d3
/* 8005B6A8 000584A8  38 80 00 01 */	li r4, 1
/* 8005B6AC 000584AC  38 A0 00 00 */	li r5, 0
/* 8005B6B0 000584B0  38 C0 03 E8 */	li r6, 0x3e8
/* 8005B6B4 000584B4  48 00 4A A5 */	bl load_param_esc__0_Ui_esc__4_i_esc__1___10auto_tweakFRUiiiiP16xModelAssetParamUiPCc
lbl_8005B6B8:
/* 8005B6B8 000584B8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B6BC 000584BC  41 82 00 34 */	beq lbl_8005B6F0
/* 8005B6C0 000584C0  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B6C4 000584C4  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B6C8 000584C8  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B6CC 000584CC  7F C4 F3 78 */	mr r4, r30
/* 8005B6D0 000584D0  D0 1C 01 0C */	stfs f0, 0x10c(r28)
/* 8005B6D4 000584D4  7F E5 FB 78 */	mr r5, r31
/* 8005B6D8 000584D8  38 7C 01 0C */	addi r3, r28, 0x10c
/* 8005B6DC 000584DC  38 C6 07 DE */	addi r6, r6, 0x7de
/* 8005B6E0 000584E0  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B6E4 000584E4  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B6E8 000584E8  C0 62 8A 3C */	lfs f3, lbl_803CD3BC-_SDA2_BASE_(r2)
/* 8005B6EC 000584EC  48 00 4B C5 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B6F0:
/* 8005B6F0 000584F0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B6F4 000584F4  41 82 00 34 */	beq lbl_8005B728
/* 8005B6F8 000584F8  C0 02 8A 24 */	lfs f0, lbl_803CD3A4-_SDA2_BASE_(r2)
/* 8005B6FC 000584FC  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B700 00058500  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B704 00058504  7F C4 F3 78 */	mr r4, r30
/* 8005B708 00058508  D0 1C 01 10 */	stfs f0, 0x110(r28)
/* 8005B70C 0005850C  7F E5 FB 78 */	mr r5, r31
/* 8005B710 00058510  38 7C 01 10 */	addi r3, r28, 0x110
/* 8005B714 00058514  38 C6 07 EB */	addi r6, r6, 0x7eb
/* 8005B718 00058518  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B71C 0005851C  C0 42 8A C8 */	lfs f2, lbl_803CD448-_SDA2_BASE_(r2)
/* 8005B720 00058520  C0 62 89 D0 */	lfs f3, lbl_803CD350-_SDA2_BASE_(r2)
/* 8005B724 00058524  48 00 4B 8D */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B728:
/* 8005B728 00058528  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B72C 0005852C  41 82 00 34 */	beq lbl_8005B760
/* 8005B730 00058530  C0 02 89 C8 */	lfs f0, lbl_803CD348-_SDA2_BASE_(r2)
/* 8005B734 00058534  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B738 00058538  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B73C 0005853C  7F C4 F3 78 */	mr r4, r30
/* 8005B740 00058540  D0 1C 01 14 */	stfs f0, 0x114(r28)
/* 8005B744 00058544  7F E5 FB 78 */	mr r5, r31
/* 8005B748 00058548  38 7C 01 14 */	addi r3, r28, 0x114
/* 8005B74C 0005854C  38 C6 07 F5 */	addi r6, r6, 0x7f5
/* 8005B750 00058550  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B754 00058554  C0 42 8A C8 */	lfs f2, lbl_803CD448-_SDA2_BASE_(r2)
/* 8005B758 00058558  C0 62 89 D0 */	lfs f3, lbl_803CD350-_SDA2_BASE_(r2)
/* 8005B75C 0005855C  48 00 4B 55 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B760:
/* 8005B760 00058560  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B764 00058564  41 82 00 34 */	beq lbl_8005B798
/* 8005B768 00058568  C0 02 89 C0 */	lfs f0, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B76C 0005856C  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B770 00058570  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B774 00058574  7F C4 F3 78 */	mr r4, r30
/* 8005B778 00058578  D0 1C 01 18 */	stfs f0, 0x118(r28)
/* 8005B77C 0005857C  7F E5 FB 78 */	mr r5, r31
/* 8005B780 00058580  38 7C 01 18 */	addi r3, r28, 0x118
/* 8005B784 00058584  38 C6 08 04 */	addi r6, r6, 0x804
/* 8005B788 00058588  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B78C 0005858C  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B790 00058590  C0 62 8A 3C */	lfs f3, lbl_803CD3BC-_SDA2_BASE_(r2)
/* 8005B794 00058594  48 00 4B 1D */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B798:
/* 8005B798 00058598  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B79C 0005859C  41 82 00 34 */	beq lbl_8005B7D0
/* 8005B7A0 000585A0  C0 02 8A 34 */	lfs f0, lbl_803CD3B4-_SDA2_BASE_(r2)
/* 8005B7A4 000585A4  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B7A8 000585A8  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B7AC 000585AC  7F C4 F3 78 */	mr r4, r30
/* 8005B7B0 000585B0  D0 1C 01 1C */	stfs f0, 0x11c(r28)
/* 8005B7B4 000585B4  7F E5 FB 78 */	mr r5, r31
/* 8005B7B8 000585B8  38 7C 01 1C */	addi r3, r28, 0x11c
/* 8005B7BC 000585BC  38 C6 08 15 */	addi r6, r6, 0x815
/* 8005B7C0 000585C0  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B7C4 000585C4  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B7C8 000585C8  C0 62 8A 3C */	lfs f3, lbl_803CD3BC-_SDA2_BASE_(r2)
/* 8005B7CC 000585CC  48 00 4A E5 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B7D0:
/* 8005B7D0 000585D0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B7D4 000585D4  41 82 00 34 */	beq lbl_8005B808
/* 8005B7D8 000585D8  38 00 00 0A */	li r0, 0xa
/* 8005B7DC 000585DC  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B7E0 000585E0  38 83 53 3C */	addi r4, r3, stringBase0__13cruise_bubble@l
/* 8005B7E4 000585E4  90 1C 01 20 */	stw r0, 0x120(r28)
/* 8005B7E8 000585E8  7F C7 F3 78 */	mr r7, r30
/* 8005B7EC 000585EC  7F E8 FB 78 */	mr r8, r31
/* 8005B7F0 000585F0  38 7C 01 20 */	addi r3, r28, 0x120
/* 8005B7F4 000585F4  39 24 08 26 */	addi r9, r4, 0x826
/* 8005B7F8 000585F8  38 80 00 01 */	li r4, 1
/* 8005B7FC 000585FC  38 A0 00 00 */	li r5, 0
/* 8005B800 00058600  38 C0 00 1E */	li r6, 0x1e
/* 8005B804 00058604  48 00 49 55 */	bl load_param_esc__0_Ui_esc__4_i_esc__1___10auto_tweakFRUiiiiP16xModelAssetParamUiPCc
lbl_8005B808:
/* 8005B808 00058608  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B80C 0005860C  41 82 00 34 */	beq lbl_8005B840
/* 8005B810 00058610  38 00 00 14 */	li r0, 0x14
/* 8005B814 00058614  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B818 00058618  38 83 53 3C */	addi r4, r3, stringBase0__13cruise_bubble@l
/* 8005B81C 0005861C  90 1C 01 24 */	stw r0, 0x124(r28)
/* 8005B820 00058620  7F C7 F3 78 */	mr r7, r30
/* 8005B824 00058624  7F E8 FB 78 */	mr r8, r31
/* 8005B828 00058628  38 7C 01 24 */	addi r3, r28, 0x124
/* 8005B82C 0005862C  39 24 08 37 */	addi r9, r4, 0x837
/* 8005B830 00058630  38 80 00 01 */	li r4, 1
/* 8005B834 00058634  38 A0 00 00 */	li r5, 0
/* 8005B838 00058638  38 C0 00 1E */	li r6, 0x1e
/* 8005B83C 0005863C  48 00 49 1D */	bl load_param_esc__0_Ui_esc__4_i_esc__1___10auto_tweakFRUiiiiP16xModelAssetParamUiPCc
lbl_8005B840:
/* 8005B840 00058640  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B844 00058644  41 82 00 34 */	beq lbl_8005B878
/* 8005B848 00058648  C0 02 8A 34 */	lfs f0, lbl_803CD3B4-_SDA2_BASE_(r2)
/* 8005B84C 0005864C  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B850 00058650  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B854 00058654  7F C4 F3 78 */	mr r4, r30
/* 8005B858 00058658  D0 1C 01 28 */	stfs f0, 0x128(r28)
/* 8005B85C 0005865C  7F E5 FB 78 */	mr r5, r31
/* 8005B860 00058660  38 7C 01 28 */	addi r3, r28, 0x128
/* 8005B864 00058664  38 C6 08 48 */	addi r6, r6, 0x848
/* 8005B868 00058668  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B86C 0005866C  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B870 00058670  C0 62 89 D0 */	lfs f3, lbl_803CD350-_SDA2_BASE_(r2)
/* 8005B874 00058674  48 00 4A 3D */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B878:
/* 8005B878 00058678  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B87C 0005867C  41 82 00 34 */	beq lbl_8005B8B0
/* 8005B880 00058680  C0 02 8A 60 */	lfs f0, lbl_803CD3E0-_SDA2_BASE_(r2)
/* 8005B884 00058684  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B888 00058688  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B88C 0005868C  7F C4 F3 78 */	mr r4, r30
/* 8005B890 00058690  D0 1C 01 2C */	stfs f0, 0x12c(r28)
/* 8005B894 00058694  7F E5 FB 78 */	mr r5, r31
/* 8005B898 00058698  38 7C 01 2C */	addi r3, r28, 0x12c
/* 8005B89C 0005869C  38 C6 08 58 */	addi r6, r6, 0x858
/* 8005B8A0 000586A0  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B8A4 000586A4  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B8A8 000586A8  C0 62 89 D0 */	lfs f3, lbl_803CD350-_SDA2_BASE_(r2)
/* 8005B8AC 000586AC  48 00 4A 05 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B8B0:
/* 8005B8B0 000586B0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B8B4 000586B4  41 82 00 34 */	beq lbl_8005B8E8
/* 8005B8B8 000586B8  C0 02 89 D8 */	lfs f0, zEntCruiseBubble_f_0_25-_SDA2_BASE_(r2)
/* 8005B8BC 000586BC  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B8C0 000586C0  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B8C4 000586C4  7F C4 F3 78 */	mr r4, r30
/* 8005B8C8 000586C8  D0 1C 01 30 */	stfs f0, 0x130(r28)
/* 8005B8CC 000586CC  7F E5 FB 78 */	mr r5, r31
/* 8005B8D0 000586D0  38 7C 01 30 */	addi r3, r28, 0x130
/* 8005B8D4 000586D4  38 C6 08 68 */	addi r6, r6, 0x868
/* 8005B8D8 000586D8  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B8DC 000586DC  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B8E0 000586E0  C0 62 89 D0 */	lfs f3, lbl_803CD350-_SDA2_BASE_(r2)
/* 8005B8E4 000586E4  48 00 49 CD */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B8E8:
/* 8005B8E8 000586E8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B8EC 000586EC  41 82 00 34 */	beq lbl_8005B920
/* 8005B8F0 000586F0  C0 02 8A 6C */	lfs f0, lbl_803CD3EC-_SDA2_BASE_(r2)
/* 8005B8F4 000586F4  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B8F8 000586F8  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B8FC 000586FC  7F C4 F3 78 */	mr r4, r30
/* 8005B900 00058700  D0 1C 01 34 */	stfs f0, 0x134(r28)
/* 8005B904 00058704  7F E5 FB 78 */	mr r5, r31
/* 8005B908 00058708  38 7C 01 34 */	addi r3, r28, 0x134
/* 8005B90C 0005870C  38 C6 08 7C */	addi r6, r6, 0x87c
/* 8005B910 00058710  C0 22 8A 68 */	lfs f1, lbl_803CD3E8-_SDA2_BASE_(r2)
/* 8005B914 00058714  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B918 00058718  C0 62 89 D0 */	lfs f3, lbl_803CD350-_SDA2_BASE_(r2)
/* 8005B91C 0005871C  48 00 49 95 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B920:
/* 8005B920 00058720  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B924 00058724  41 82 00 34 */	beq lbl_8005B958
/* 8005B928 00058728  C0 02 8A A8 */	lfs f0, lbl_803CD428-_SDA2_BASE_(r2)
/* 8005B92C 0005872C  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B930 00058730  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B934 00058734  7F C4 F3 78 */	mr r4, r30
/* 8005B938 00058738  D0 1C 01 38 */	stfs f0, 0x138(r28)
/* 8005B93C 0005873C  7F E5 FB 78 */	mr r5, r31
/* 8005B940 00058740  38 7C 01 38 */	addi r3, r28, 0x138
/* 8005B944 00058744  38 C6 08 8E */	addi r6, r6, 0x88e
/* 8005B948 00058748  C0 22 8A 68 */	lfs f1, lbl_803CD3E8-_SDA2_BASE_(r2)
/* 8005B94C 0005874C  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005B950 00058750  C0 62 89 D0 */	lfs f3, lbl_803CD350-_SDA2_BASE_(r2)
/* 8005B954 00058754  48 00 49 5D */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B958:
/* 8005B958 00058758  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B95C 0005875C  41 82 00 34 */	beq lbl_8005B990
/* 8005B960 00058760  C0 02 8A 14 */	lfs f0, lbl_803CD394-_SDA2_BASE_(r2)
/* 8005B964 00058764  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B968 00058768  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B96C 0005876C  7F C4 F3 78 */	mr r4, r30
/* 8005B970 00058770  D0 1C 01 3C */	stfs f0, 0x13c(r28)
/* 8005B974 00058774  7F E5 FB 78 */	mr r5, r31
/* 8005B978 00058778  38 7C 01 3C */	addi r3, r28, 0x13c
/* 8005B97C 0005877C  38 C6 08 A2 */	addi r6, r6, 0x8a2
/* 8005B980 00058780  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B984 00058784  C0 42 8A B0 */	lfs f2, lbl_803CD430-_SDA2_BASE_(r2)
/* 8005B988 00058788  C0 62 8A 3C */	lfs f3, lbl_803CD3BC-_SDA2_BASE_(r2)
/* 8005B98C 0005878C  48 00 49 25 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B990:
/* 8005B990 00058790  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B994 00058794  41 82 00 34 */	beq lbl_8005B9C8
/* 8005B998 00058798  C0 02 89 D8 */	lfs f0, zEntCruiseBubble_f_0_25-_SDA2_BASE_(r2)
/* 8005B99C 0005879C  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B9A0 000587A0  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B9A4 000587A4  7F C4 F3 78 */	mr r4, r30
/* 8005B9A8 000587A8  D0 1C 01 40 */	stfs f0, 0x140(r28)
/* 8005B9AC 000587AC  7F E5 FB 78 */	mr r5, r31
/* 8005B9B0 000587B0  38 7C 01 40 */	addi r3, r28, 0x140
/* 8005B9B4 000587B4  38 C6 08 B0 */	addi r6, r6, 0x8b0
/* 8005B9B8 000587B8  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B9BC 000587BC  C0 42 8A B0 */	lfs f2, lbl_803CD430-_SDA2_BASE_(r2)
/* 8005B9C0 000587C0  C0 62 8A 3C */	lfs f3, lbl_803CD3BC-_SDA2_BASE_(r2)
/* 8005B9C4 000587C4  48 00 48 ED */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005B9C8:
/* 8005B9C8 000587C8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005B9CC 000587CC  41 82 00 34 */	beq lbl_8005BA00
/* 8005B9D0 000587D0  C0 02 89 C8 */	lfs f0, lbl_803CD348-_SDA2_BASE_(r2)
/* 8005B9D4 000587D4  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005B9D8 000587D8  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005B9DC 000587DC  7F C4 F3 78 */	mr r4, r30
/* 8005B9E0 000587E0  D0 1C 01 44 */	stfs f0, 0x144(r28)
/* 8005B9E4 000587E4  7F E5 FB 78 */	mr r5, r31
/* 8005B9E8 000587E8  38 7C 01 44 */	addi r3, r28, 0x144
/* 8005B9EC 000587EC  38 C6 08 BE */	addi r6, r6, 0x8be
/* 8005B9F0 000587F0  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005B9F4 000587F4  C0 42 8A B0 */	lfs f2, lbl_803CD430-_SDA2_BASE_(r2)
/* 8005B9F8 000587F8  C0 62 8A 3C */	lfs f3, lbl_803CD3BC-_SDA2_BASE_(r2)
/* 8005B9FC 000587FC  48 00 48 B5 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005BA00:
/* 8005BA00 00058800  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005BA04 00058804  41 82 00 34 */	beq lbl_8005BA38
/* 8005BA08 00058808  C0 02 8A 38 */	lfs f0, lbl_803CD3B8-_SDA2_BASE_(r2)
/* 8005BA0C 0005880C  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005BA10 00058810  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005BA14 00058814  7F C4 F3 78 */	mr r4, r30
/* 8005BA18 00058818  D0 1C 01 54 */	stfs f0, 0x154(r28)
/* 8005BA1C 0005881C  7F E5 FB 78 */	mr r5, r31
/* 8005BA20 00058820  38 7C 01 54 */	addi r3, r28, 0x154
/* 8005BA24 00058824  38 C6 08 CC */	addi r6, r6, 0x8cc
/* 8005BA28 00058828  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005BA2C 0005882C  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005BA30 00058830  C0 62 8A 08 */	lfs f3, lbl_803CD388-_SDA2_BASE_(r2)
/* 8005BA34 00058834  48 00 48 7D */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005BA38:
/* 8005BA38 00058838  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005BA3C 0005883C  41 82 00 34 */	beq lbl_8005BA70
/* 8005BA40 00058840  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005BA44 00058844  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005BA48 00058848  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005BA4C 0005884C  7F C4 F3 78 */	mr r4, r30
/* 8005BA50 00058850  D0 1C 01 58 */	stfs f0, 0x158(r28)
/* 8005BA54 00058854  7F E5 FB 78 */	mr r5, r31
/* 8005BA58 00058858  38 7C 01 58 */	addi r3, r28, 0x158
/* 8005BA5C 0005885C  38 C6 08 DA */	addi r6, r6, 0x8da
/* 8005BA60 00058860  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005BA64 00058864  C0 42 8A CC */	lfs f2, lbl_803CD44C-_SDA2_BASE_(r2)
/* 8005BA68 00058868  C0 62 8A 58 */	lfs f3, lbl_803CD3D8-_SDA2_BASE_(r2)
/* 8005BA6C 0005886C  48 00 48 45 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005BA70:
/* 8005BA70 00058870  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005BA74 00058874  41 82 00 34 */	beq lbl_8005BAA8
/* 8005BA78 00058878  C0 02 8A 50 */	lfs f0, lbl_803CD3D0-_SDA2_BASE_(r2)
/* 8005BA7C 0005887C  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005BA80 00058880  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005BA84 00058884  7F C4 F3 78 */	mr r4, r30
/* 8005BA88 00058888  D0 1C 01 5C */	stfs f0, 0x15c(r28)
/* 8005BA8C 0005888C  7F E5 FB 78 */	mr r5, r31
/* 8005BA90 00058890  38 7C 01 5C */	addi r3, r28, 0x15c
/* 8005BA94 00058894  38 C6 08 E6 */	addi r6, r6, 0x8e6
/* 8005BA98 00058898  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005BA9C 0005889C  C0 42 8A CC */	lfs f2, lbl_803CD44C-_SDA2_BASE_(r2)
/* 8005BAA0 000588A0  C0 62 8A 58 */	lfs f3, lbl_803CD3D8-_SDA2_BASE_(r2)
/* 8005BAA4 000588A4  48 00 48 0D */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005BAA8:
/* 8005BAA8 000588A8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005BAAC 000588AC  41 82 00 34 */	beq lbl_8005BAE0
/* 8005BAB0 000588B0  C0 02 8A 30 */	lfs f0, lbl_803CD3B0-_SDA2_BASE_(r2)
/* 8005BAB4 000588B4  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005BAB8 000588B8  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005BABC 000588BC  7F C4 F3 78 */	mr r4, r30
/* 8005BAC0 000588C0  D0 1C 01 60 */	stfs f0, 0x160(r28)
/* 8005BAC4 000588C4  7F E5 FB 78 */	mr r5, r31
/* 8005BAC8 000588C8  38 7C 01 60 */	addi r3, r28, 0x160
/* 8005BACC 000588CC  38 C6 08 F2 */	addi r6, r6, 0x8f2
/* 8005BAD0 000588D0  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005BAD4 000588D4  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005BAD8 000588D8  C0 62 8A 08 */	lfs f3, lbl_803CD388-_SDA2_BASE_(r2)
/* 8005BADC 000588DC  48 00 47 D5 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005BAE0:
/* 8005BAE0 000588E0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005BAE4 000588E4  41 82 00 34 */	beq lbl_8005BB18
/* 8005BAE8 000588E8  C0 02 8A 30 */	lfs f0, lbl_803CD3B0-_SDA2_BASE_(r2)
/* 8005BAEC 000588EC  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005BAF0 000588F0  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005BAF4 000588F4  7F C4 F3 78 */	mr r4, r30
/* 8005BAF8 000588F8  D0 1C 01 64 */	stfs f0, 0x164(r28)
/* 8005BAFC 000588FC  7F E5 FB 78 */	mr r5, r31
/* 8005BB00 00058900  38 7C 01 64 */	addi r3, r28, 0x164
/* 8005BB04 00058904  38 C6 09 03 */	addi r6, r6, 0x903
/* 8005BB08 00058908  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005BB0C 0005890C  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005BB10 00058910  C0 62 8A 08 */	lfs f3, lbl_803CD388-_SDA2_BASE_(r2)
/* 8005BB14 00058914  48 00 47 9D */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005BB18:
/* 8005BB18 00058918  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005BB1C 0005891C  41 82 00 34 */	beq lbl_8005BB50
/* 8005BB20 00058920  38 00 00 02 */	li r0, 2
/* 8005BB24 00058924  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005BB28 00058928  38 83 53 3C */	addi r4, r3, stringBase0__13cruise_bubble@l
/* 8005BB2C 0005892C  90 1C 01 68 */	stw r0, 0x168(r28)
/* 8005BB30 00058930  7F C7 F3 78 */	mr r7, r30
/* 8005BB34 00058934  7F E8 FB 78 */	mr r8, r31
/* 8005BB38 00058938  38 7C 01 68 */	addi r3, r28, 0x168
/* 8005BB3C 0005893C  39 24 09 13 */	addi r9, r4, 0x913
/* 8005BB40 00058940  38 80 00 01 */	li r4, 1
/* 8005BB44 00058944  38 A0 00 00 */	li r5, 0
/* 8005BB48 00058948  38 C0 00 04 */	li r6, 4
/* 8005BB4C 0005894C  48 00 46 E1 */	bl load_param_esc__0_i_esc__4_i_esc__1___10auto_tweakFRiiiiP16xModelAssetParamUiPCc
lbl_8005BB50:
/* 8005BB50 00058950  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005BB54 00058954  41 82 00 34 */	beq lbl_8005BB88
/* 8005BB58 00058958  C0 02 8A D0 */	lfs f0, lbl_803CD450-_SDA2_BASE_(r2)
/* 8005BB5C 0005895C  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005BB60 00058960  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005BB64 00058964  7F C4 F3 78 */	mr r4, r30
/* 8005BB68 00058968  D0 1C 01 6C */	stfs f0, 0x16c(r28)
/* 8005BB6C 0005896C  7F E5 FB 78 */	mr r5, r31
/* 8005BB70 00058970  38 7C 01 6C */	addi r3, r28, 0x16c
/* 8005BB74 00058974  38 C6 09 22 */	addi r6, r6, 0x922
/* 8005BB78 00058978  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005BB7C 0005897C  C0 42 8A B0 */	lfs f2, lbl_803CD430-_SDA2_BASE_(r2)
/* 8005BB80 00058980  FC 60 08 90 */	fmr f3, f1
/* 8005BB84 00058984  48 00 47 2D */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005BB88:
/* 8005BB88 00058988  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005BB8C 0005898C  41 82 00 34 */	beq lbl_8005BBC0
/* 8005BB90 00058990  C0 02 8A D4 */	lfs f0, lbl_803CD454-_SDA2_BASE_(r2)
/* 8005BB94 00058994  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005BB98 00058998  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005BB9C 0005899C  7F C4 F3 78 */	mr r4, r30
/* 8005BBA0 000589A0  D0 1C 01 70 */	stfs f0, 0x170(r28)
/* 8005BBA4 000589A4  7F E5 FB 78 */	mr r5, r31
/* 8005BBA8 000589A8  38 7C 01 70 */	addi r3, r28, 0x170
/* 8005BBAC 000589AC  38 C6 09 37 */	addi r6, r6, 0x937
/* 8005BBB0 000589B0  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005BBB4 000589B4  C0 42 8A B0 */	lfs f2, lbl_803CD430-_SDA2_BASE_(r2)
/* 8005BBB8 000589B8  FC 60 08 90 */	fmr f3, f1
/* 8005BBBC 000589BC  48 00 46 F5 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005BBC0:
/* 8005BBC0 000589C0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005BBC4 000589C4  41 82 00 34 */	beq lbl_8005BBF8
/* 8005BBC8 000589C8  C0 02 8A D8 */	lfs f0, lbl_803CD458-_SDA2_BASE_(r2)
/* 8005BBCC 000589CC  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005BBD0 000589D0  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005BBD4 000589D4  7F C4 F3 78 */	mr r4, r30
/* 8005BBD8 000589D8  D0 1C 01 74 */	stfs f0, 0x174(r28)
/* 8005BBDC 000589DC  7F E5 FB 78 */	mr r5, r31
/* 8005BBE0 000589E0  38 7C 01 74 */	addi r3, r28, 0x174
/* 8005BBE4 000589E4  38 C6 09 4D */	addi r6, r6, 0x94d
/* 8005BBE8 000589E8  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005BBEC 000589EC  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005BBF0 000589F0  FC 60 08 90 */	fmr f3, f1
/* 8005BBF4 000589F4  48 00 46 BD */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005BBF8:
/* 8005BBF8 000589F8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005BBFC 000589FC  41 82 00 34 */	beq lbl_8005BC30
/* 8005BC00 00058A00  C0 02 8A DC */	lfs f0, lbl_803CD45C-_SDA2_BASE_(r2)
/* 8005BC04 00058A04  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005BC08 00058A08  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005BC0C 00058A0C  7F C4 F3 78 */	mr r4, r30
/* 8005BC10 00058A10  D0 1C 01 78 */	stfs f0, 0x178(r28)
/* 8005BC14 00058A14  7F E5 FB 78 */	mr r5, r31
/* 8005BC18 00058A18  38 7C 01 78 */	addi r3, r28, 0x178
/* 8005BC1C 00058A1C  38 C6 09 59 */	addi r6, r6, 0x959
/* 8005BC20 00058A20  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005BC24 00058A24  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005BC28 00058A28  FC 60 08 90 */	fmr f3, f1
/* 8005BC2C 00058A2C  48 00 46 85 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005BC30:
/* 8005BC30 00058A30  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005BC34 00058A34  41 82 00 34 */	beq lbl_8005BC68
/* 8005BC38 00058A38  C0 02 89 F4 */	lfs f0, lbl_803CD374-_SDA2_BASE_(r2)
/* 8005BC3C 00058A3C  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005BC40 00058A40  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005BC44 00058A44  7F C4 F3 78 */	mr r4, r30
/* 8005BC48 00058A48  D0 1C 01 7C */	stfs f0, 0x17c(r28)
/* 8005BC4C 00058A4C  7F E5 FB 78 */	mr r5, r31
/* 8005BC50 00058A50  38 7C 01 7C */	addi r3, r28, 0x17c
/* 8005BC54 00058A54  38 C6 09 65 */	addi r6, r6, 0x965
/* 8005BC58 00058A58  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005BC5C 00058A5C  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005BC60 00058A60  C0 62 8A 3C */	lfs f3, lbl_803CD3BC-_SDA2_BASE_(r2)
/* 8005BC64 00058A64  48 00 46 4D */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005BC68:
/* 8005BC68 00058A68  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005BC6C 00058A6C  41 82 00 34 */	beq lbl_8005BCA0
/* 8005BC70 00058A70  C0 02 89 C0 */	lfs f0, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005BC74 00058A74  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005BC78 00058A78  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005BC7C 00058A7C  7F C4 F3 78 */	mr r4, r30
/* 8005BC80 00058A80  D0 1C 01 80 */	stfs f0, 0x180(r28)
/* 8005BC84 00058A84  7F E5 FB 78 */	mr r5, r31
/* 8005BC88 00058A88  38 7C 01 80 */	addi r3, r28, 0x180
/* 8005BC8C 00058A8C  38 C6 09 79 */	addi r6, r6, 0x979
/* 8005BC90 00058A90  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005BC94 00058A94  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005BC98 00058A98  FC 60 08 90 */	fmr f3, f1
/* 8005BC9C 00058A9C  48 00 46 15 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005BCA0:
/* 8005BCA0 00058AA0  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005BCA4 00058AA4  41 82 00 34 */	beq lbl_8005BCD8
/* 8005BCA8 00058AA8  C0 02 8A 38 */	lfs f0, lbl_803CD3B8-_SDA2_BASE_(r2)
/* 8005BCAC 00058AAC  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005BCB0 00058AB0  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005BCB4 00058AB4  7F C4 F3 78 */	mr r4, r30
/* 8005BCB8 00058AB8  D0 1C 01 84 */	stfs f0, 0x184(r28)
/* 8005BCBC 00058ABC  7F E5 FB 78 */	mr r5, r31
/* 8005BCC0 00058AC0  38 7C 01 84 */	addi r3, r28, 0x184
/* 8005BCC4 00058AC4  38 C6 09 85 */	addi r6, r6, 0x985
/* 8005BCC8 00058AC8  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005BCCC 00058ACC  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005BCD0 00058AD0  FC 60 08 90 */	fmr f3, f1
/* 8005BCD4 00058AD4  48 00 45 DD */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005BCD8:
/* 8005BCD8 00058AD8  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005BCDC 00058ADC  41 82 00 34 */	beq lbl_8005BD10
/* 8005BCE0 00058AE0  C0 02 8A 30 */	lfs f0, lbl_803CD3B0-_SDA2_BASE_(r2)
/* 8005BCE4 00058AE4  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005BCE8 00058AE8  38 C3 53 3C */	addi r6, r3, stringBase0__13cruise_bubble@l
/* 8005BCEC 00058AEC  7F C4 F3 78 */	mr r4, r30
/* 8005BCF0 00058AF0  D0 1C 01 88 */	stfs f0, 0x188(r28)
/* 8005BCF4 00058AF4  7F E5 FB 78 */	mr r5, r31
/* 8005BCF8 00058AF8  38 7C 01 88 */	addi r3, r28, 0x188
/* 8005BCFC 00058AFC  38 C6 09 92 */	addi r6, r6, 0x992
/* 8005BD00 00058B00  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005BD04 00058B04  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005BD08 00058B08  FC 60 08 90 */	fmr f3, f1
/* 8005BD0C 00058B0C  48 00 45 A5 */	bl load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc
lbl_8005BD10:
/* 8005BD10 00058B10  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8005BD14 00058B14  41 82 00 2C */	beq lbl_8005BD40
/* 8005BD18 00058B18  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005BD1C 00058B1C  38 63 53 3C */	addi r3, r3, stringBase0__13cruise_bubble@l
/* 8005BD20 00058B20  38 63 09 A2 */	addi r3, r3, 0x9a2
/* 8005BD24 00058B24  4B FF 04 F1 */	bl xStrHash__FPCc
/* 8005BD28 00058B28  3C 80 80 25 */	lis r4, stringBase0__13cruise_bubble@ha
/* 8005BD2C 00058B2C  90 7C 00 E0 */	stw r3, 0xe0(r28)
/* 8005BD30 00058B30  38 64 53 3C */	addi r3, r4, stringBase0__13cruise_bubble@l
/* 8005BD34 00058B34  38 63 09 AD */	addi r3, r3, 0x9ad
/* 8005BD38 00058B38  4B FF 04 DD */	bl xStrHash__FPCc
/* 8005BD3C 00058B3C  90 7C 00 D4 */	stw r3, 0xd4(r28)
lbl_8005BD40:
/* 8005BD40 00058B40  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8005BD44 00058B44  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8005BD48 00058B48  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8005BD4C 00058B4C  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8005BD50 00058B50  83 81 00 20 */	lwz r28, 0x20(r1)
/* 8005BD54 00058B54  7C 08 03 A6 */	mtlr r0
/* 8005BD58 00058B58  38 21 00 30 */	addi r1, r1, 0x30
/* 8005BD5C 00058B5C  4E 80 00 20 */	blr 

.global init__13cruise_bubbleFv
init__13cruise_bubbleFv:
/* 8005BD60 00058B60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005BD64 00058B64  7C 08 02 A6 */	mflr r0
/* 8005BD68 00058B68  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005BD6C 00058B6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005BD70 00058B70  80 03 C2 A4 */	lwz r0, shared__13cruise_bubble@l(r3)
/* 8005BD74 00058B74  54 00 07 FE */	clrlwi r0, r0, 0x1f
/* 8005BD78 00058B78  2C 00 00 01 */	cmpwi r0, 1
/* 8005BD7C 00058B7C  40 82 00 5C */	bne lbl_8005BDD8
/* 8005BD80 00058B80  4B FF B4 8D */	bl init_sound__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005BD84 00058B84  3C 60 80 29 */	lis r3, lbl_80290000@ha
/* 8005BD88 00058B88  84 03 C2 A4 */	lwzu r0, -0x3d5c(r3)
/* 8005BD8C 00058B8C  60 00 00 02 */	ori r0, r0, 2
/* 8005BD90 00058B90  90 03 00 00 */	stw r0, lbl_80290000@l(r3)
/* 8005BD94 00058B94  4B FF EA 71 */	bl load_settings__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005BD98 00058B98  4B FF C7 29 */	bl init_states__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005BD9C 00058B9C  4B FF CC 75 */	bl init_missle_model__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005BDA0 00058BA0  4B FF CE 75 */	bl init_wake_ribbons__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005BDA4 00058BA4  4B FF CF 95 */	bl init_explode_decal__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005BDA8 00058BA8  4B FF D0 2D */	bl init_shrapnel__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005BDAC 00058BAC  4B FF D8 ED */	bl init_hud__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005BDB0 00058BB0  48 00 00 39 */	bl init_debug__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005BDB4 00058BB4  3C 60 80 3C */	lis r3, globals@ha
/* 8005BDB8 00058BB8  38 63 05 58 */	addi r3, r3, globals@l
/* 8005BDBC 00058BBC  4B FB 26 FD */	bl xCameraGetFOV__FPC7xCamera
/* 8005BDC0 00058BC0  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005BDC4 00058BC4  38 83 C2 A4 */	addi r4, r3, shared__13cruise_bubble@l
/* 8005BDC8 00058BC8  D0 24 01 00 */	stfs f1, 0x100(r4)
/* 8005BDCC 00058BCC  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005BDD0 00058BD0  C0 03 01 80 */	lfs f0, 0x180(r3)
/* 8005BDD4 00058BD4  D0 04 01 08 */	stfs f0, 0x108(r4)
lbl_8005BDD8:
/* 8005BDD8 00058BD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005BDDC 00058BDC  7C 08 03 A6 */	mtlr r0
/* 8005BDE0 00058BE0  38 21 00 10 */	addi r1, r1, 0x10
/* 8005BDE4 00058BE4  4E 80 00 20 */	blr 

/* init_debug__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv */
init_debug__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv:
/* 8005BDE8 00058BE8  4E 80 00 20 */	blr 

.global reset__13cruise_bubbleFv
reset__13cruise_bubbleFv:
/* 8005BDEC 00058BEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005BDF0 00058BF0  7C 08 02 A6 */	mflr r0
/* 8005BDF4 00058BF4  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005BDF8 00058BF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005BDFC 00058BFC  80 03 C2 A4 */	lwz r0, shared__13cruise_bubble@l(r3)
/* 8005BE00 00058C00  54 00 07 BE */	clrlwi r0, r0, 0x1e
/* 8005BE04 00058C04  2C 00 00 03 */	cmpwi r0, 3
/* 8005BE08 00058C08  40 82 00 10 */	bne lbl_8005BE18
/* 8005BE0C 00058C0C  38 60 00 01 */	li r3, 1
/* 8005BE10 00058C10  38 80 00 00 */	li r4, 0
/* 8005BE14 00058C14  4B FF C0 59 */	bl kill__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fbb
lbl_8005BE18:
/* 8005BE18 00058C18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005BE1C 00058C1C  7C 08 03 A6 */	mtlr r0
/* 8005BE20 00058C20  38 21 00 10 */	addi r1, r1, 0x10
/* 8005BE24 00058C24  4E 80 00 20 */	blr 

.global launch__13cruise_bubbleFv
launch__13cruise_bubbleFv:
/* 8005BE28 00058C28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005BE2C 00058C2C  7C 08 02 A6 */	mflr r0
/* 8005BE30 00058C30  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005BE34 00058C34  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005BE38 00058C38  80 03 C2 A4 */	lwz r0, shared__13cruise_bubble@l(r3)
/* 8005BE3C 00058C3C  70 00 00 13 */	andi. r0, r0, 0x13
/* 8005BE40 00058C40  2C 00 00 03 */	cmpwi r0, 3
/* 8005BE44 00058C44  40 82 00 DC */	bne lbl_8005BF20
/* 8005BE48 00058C48  48 03 DC BD */	bl zGameExtras_CheatFlags__Fv
/* 8005BE4C 00058C4C  54 60 00 85 */	rlwinm. r0, r3, 0, 2, 2
/* 8005BE50 00058C50  41 82 00 28 */	beq lbl_8005BE78
/* 8005BE54 00058C54  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 8005BE58 00058C58  3C 60 80 2E */	lis r3, lbl_802DBC38@ha
/* 8005BE5C 00058C5C  38 A4 C2 A4 */	addi r5, r4, shared__13cruise_bubble@l
/* 8005BE60 00058C60  80 85 00 00 */	lwz r4, 0(r5)
/* 8005BE64 00058C64  38 03 BC 38 */	addi r0, r3, lbl_802DBC38@l
/* 8005BE68 00058C68  60 83 02 00 */	ori r3, r4, 0x200
/* 8005BE6C 00058C6C  90 65 00 00 */	stw r3, 0(r5)
/* 8005BE70 00058C70  90 0D 81 80 */	stw r0, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005BE74 00058C74  48 00 00 10 */	b lbl_8005BE84
lbl_8005BE78:
/* 8005BE78 00058C78  3C 60 80 2E */	lis r3, lbl_802DBA80@ha
/* 8005BE7C 00058C7C  38 03 BA 80 */	addi r0, r3, lbl_802DBA80@l
/* 8005BE80 00058C80  90 0D 81 80 */	stw r0, lbl_803CAA80-_SDA_BASE_(r13)
lbl_8005BE84:
/* 8005BE84 00058C84  4B FF CC 11 */	bl reset_wake_ribbons__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005BE88 00058C88  4B FF CD E9 */	bl reset_explode_decal__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005BE8C 00058C8C  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 8005BE90 00058C90  3C 60 80 3C */	lis r3, globals@ha
/* 8005BE94 00058C94  38 A4 C2 A4 */	addi r5, r4, shared__13cruise_bubble@l
/* 8005BE98 00058C98  80 05 00 00 */	lwz r0, 0(r5)
/* 8005BE9C 00058C9C  38 63 05 58 */	addi r3, r3, globals@l
/* 8005BEA0 00058CA0  80 83 03 1C */	lwz r4, 0x31c(r3)
/* 8005BEA4 00058CA4  38 65 00 48 */	addi r3, r5, 0x48
/* 8005BEA8 00058CA8  60 00 00 14 */	ori r0, r0, 0x14
/* 8005BEAC 00058CAC  90 05 00 00 */	stw r0, 0(r5)
/* 8005BEB0 00058CB0  38 84 01 18 */	addi r4, r4, 0x118
/* 8005BEB4 00058CB4  4B FC 99 45 */	bl __as__5xVec2FRC5xVec2
/* 8005BEB8 00058CB8  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 8005BEBC 00058CBC  38 A4 C2 A4 */	addi r5, r4, shared__13cruise_bubble@l
/* 8005BEC0 00058CC0  7C 64 1B 78 */	mr r4, r3
/* 8005BEC4 00058CC4  38 65 00 40 */	addi r3, r5, 0x40
/* 8005BEC8 00058CC8  4B FC 99 31 */	bl __as__5xVec2FRC5xVec2
/* 8005BECC 00058CCC  3C 80 80 3C */	lis r4, globals@ha
/* 8005BED0 00058CD0  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005BED4 00058CD4  38 84 05 58 */	addi r4, r4, globals@l
/* 8005BED8 00058CD8  80 04 16 B0 */	lwz r0, 0x16b0(r4)
/* 8005BEDC 00058CDC  38 83 C2 A4 */	addi r4, r3, shared__13cruise_bubble@l
/* 8005BEE0 00058CE0  38 64 00 F4 */	addi r3, r4, 0xf4
/* 8005BEE4 00058CE4  90 04 00 F0 */	stw r0, 0xf0(r4)
/* 8005BEE8 00058CE8  C0 22 89 B8 */	lfs f1, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005BEEC 00058CEC  4B FC 09 8D */	bl __as__5xVec3Ff
/* 8005BEF0 00058CF0  3C 60 80 3C */	lis r3, globals@ha
/* 8005BEF4 00058CF4  38 63 05 58 */	addi r3, r3, globals@l
/* 8005BEF8 00058CF8  4B FB 25 C1 */	bl xCameraGetFOV__FPC7xCamera
/* 8005BEFC 00058CFC  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 8005BF00 00058D00  38 60 00 00 */	li r3, 0
/* 8005BF04 00058D04  38 A4 C2 A4 */	addi r5, r4, shared__13cruise_bubble@l
/* 8005BF08 00058D08  38 80 FF FF */	li r4, -1
/* 8005BF0C 00058D0C  D0 25 01 00 */	stfs f1, 0x100(r5)
/* 8005BF10 00058D10  48 0D 74 49 */	bl permit__8ztalkboxFUiUi
/* 8005BF14 00058D14  38 60 00 00 */	li r3, 0
/* 8005BF18 00058D18  38 80 00 00 */	li r4, 0
/* 8005BF1C 00058D1C  4B FF BD C1 */	bl set_state__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_11thread_enumQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_enum
lbl_8005BF20:
/* 8005BF20 00058D20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005BF24 00058D24  7C 08 03 A6 */	mtlr r0
/* 8005BF28 00058D28  38 21 00 10 */	addi r1, r1, 0x10
/* 8005BF2C 00058D2C  4E 80 00 20 */	blr 

.global update__13cruise_bubbleFP6xScenef
update__13cruise_bubbleFP6xScenef:
/* 8005BF30 00058D30  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005BF34 00058D34  7C 08 02 A6 */	mflr r0
/* 8005BF38 00058D38  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 8005BF3C 00058D3C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005BF40 00058D40  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8005BF44 00058D44  FF E0 08 90 */	fmr f31, f1
/* 8005BF48 00058D48  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8005BF4C 00058D4C  7C 7F 1B 78 */	mr r31, r3
/* 8005BF50 00058D50  80 64 C2 A4 */	lwz r3, shared__13cruise_bubble@l(r4)
/* 8005BF54 00058D54  54 60 07 BE */	clrlwi r0, r3, 0x1e
/* 8005BF58 00058D58  2C 00 00 03 */	cmpwi r0, 3
/* 8005BF5C 00058D5C  41 82 00 0C */	beq lbl_8005BF68
/* 8005BF60 00058D60  38 60 00 00 */	li r3, 0
/* 8005BF64 00058D64  48 00 00 9C */	b lbl_8005C000
lbl_8005BF68:
/* 8005BF68 00058D68  54 60 06 F7 */	rlwinm. r0, r3, 0, 0x1b, 0x1b
/* 8005BF6C 00058D6C  40 82 00 20 */	bne lbl_8005BF8C
/* 8005BF70 00058D70  4B FF BE 11 */	bl check_launch__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005BF74 00058D74  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8005BF78 00058D78  41 82 00 0C */	beq lbl_8005BF84
/* 8005BF7C 00058D7C  4B FF FE AD */	bl launch__13cruise_bubbleFv
/* 8005BF80 00058D80  48 00 00 0C */	b lbl_8005BF8C
lbl_8005BF84:
/* 8005BF84 00058D84  38 60 00 00 */	li r3, 0
/* 8005BF88 00058D88  48 00 00 78 */	b lbl_8005C000
lbl_8005BF8C:
/* 8005BF8C 00058D8C  3C 60 80 3C */	lis r3, globals@ha
/* 8005BF90 00058D90  38 63 05 58 */	addi r3, r3, globals@l
/* 8005BF94 00058D94  80 03 17 88 */	lwz r0, 0x1788(r3)
/* 8005BF98 00058D98  28 00 00 00 */	cmplwi r0, 0
/* 8005BF9C 00058D9C  41 82 00 18 */	beq lbl_8005BFB4
/* 8005BFA0 00058DA0  38 60 00 01 */	li r3, 1
/* 8005BFA4 00058DA4  38 80 00 00 */	li r4, 0
/* 8005BFA8 00058DA8  4B FF BE C5 */	bl kill__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fbb
/* 8005BFAC 00058DAC  38 60 00 00 */	li r3, 0
/* 8005BFB0 00058DB0  48 00 00 50 */	b lbl_8005C000
lbl_8005BFB4:
/* 8005BFB4 00058DB4  4B FF C1 99 */	bl refresh_controls__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005BFB8 00058DB8  FC 20 F8 90 */	fmr f1, f31
/* 8005BFBC 00058DBC  7F E3 FB 78 */	mr r3, r31
/* 8005BFC0 00058DC0  4B FF C1 E1 */	bl update_state__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FP6xScenef
/* 8005BFC4 00058DC4  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005BFC8 00058DC8  80 03 C2 A4 */	lwz r0, shared__13cruise_bubble@l(r3)
/* 8005BFCC 00058DCC  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 8005BFD0 00058DD0  40 82 00 0C */	bne lbl_8005BFDC
/* 8005BFD4 00058DD4  38 60 00 00 */	li r3, 0
/* 8005BFD8 00058DD8  48 00 00 28 */	b lbl_8005C000
lbl_8005BFDC:
/* 8005BFDC 00058DDC  FC 20 F8 90 */	fmr f1, f31
/* 8005BFE0 00058DE0  7F E3 FB 78 */	mr r3, r31
/* 8005BFE4 00058DE4  4B FF C0 05 */	bl update_player__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FR6xScenef
/* 8005BFE8 00058DE8  FC 20 F8 90 */	fmr f1, f31
/* 8005BFEC 00058DEC  7F E3 FB 78 */	mr r3, r31
/* 8005BFF0 00058DF0  4B FF D3 29 */	bl update_missle__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FR6xScenef
/* 8005BFF4 00058DF4  FC 20 F8 90 */	fmr f1, f31
/* 8005BFF8 00058DF8  4B FF DC E1 */	bl update_hud__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Ff
/* 8005BFFC 00058DFC  38 60 00 01 */	li r3, 1
lbl_8005C000:
/* 8005C000 00058E00  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005C004 00058E04  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8005C008 00058E08  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8005C00C 00058E0C  7C 08 03 A6 */	mtlr r0
/* 8005C010 00058E10  38 21 00 20 */	addi r1, r1, 0x20
/* 8005C014 00058E14  4E 80 00 20 */	blr 

.global render__13cruise_bubbleFv
render__13cruise_bubbleFv:
/* 8005C018 00058E18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005C01C 00058E1C  7C 08 02 A6 */	mflr r0
/* 8005C020 00058E20  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005C024 00058E24  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005C028 00058E28  80 03 C2 A4 */	lwz r0, shared__13cruise_bubble@l(r3)
/* 8005C02C 00058E2C  54 00 07 7E */	clrlwi r0, r0, 0x1d
/* 8005C030 00058E30  2C 00 00 07 */	cmpwi r0, 7
/* 8005C034 00058E34  41 82 00 0C */	beq lbl_8005C040
/* 8005C038 00058E38  38 60 00 00 */	li r3, 0
/* 8005C03C 00058E3C  48 00 00 18 */	b lbl_8005C054
lbl_8005C040:
/* 8005C040 00058E40  4B FF C2 6D */	bl render_state__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005C044 00058E44  4B FF C0 DD */	bl render_player__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005C048 00058E48  4B FF D3 31 */	bl render_missle__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005C04C 00058E4C  48 00 00 19 */	bl render_debug__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005C050 00058E50  38 60 00 01 */	li r3, 1
lbl_8005C054:
/* 8005C054 00058E54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005C058 00058E58  7C 08 03 A6 */	mtlr r0
/* 8005C05C 00058E5C  38 21 00 10 */	addi r1, r1, 0x10
/* 8005C060 00058E60  4E 80 00 20 */	blr 

/* render_debug__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv */
render_debug__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv:
/* 8005C064 00058E64  4E 80 00 20 */	blr 

.global render_screen__13cruise_bubbleFv
render_screen__13cruise_bubbleFv:
/* 8005C068 00058E68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005C06C 00058E6C  7C 08 02 A6 */	mflr r0
/* 8005C070 00058E70  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005C074 00058E74  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005C078 00058E78  80 03 C2 A4 */	lwz r0, shared__13cruise_bubble@l(r3)
/* 8005C07C 00058E7C  54 00 07 7E */	clrlwi r0, r0, 0x1d
/* 8005C080 00058E80  2C 00 00 07 */	cmpwi r0, 7
/* 8005C084 00058E84  40 82 00 08 */	bne lbl_8005C08C
/* 8005C088 00058E88  4B FF E0 59 */	bl render_hud__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
lbl_8005C08C:
/* 8005C08C 00058E8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005C090 00058E90  7C 08 03 A6 */	mtlr r0
/* 8005C094 00058E94  38 21 00 10 */	addi r1, r1, 0x10
/* 8005C098 00058E98  4E 80 00 20 */	blr 

.global insert_player_animations__13cruise_bubbleFR10xAnimTable
insert_player_animations__13cruise_bubbleFR10xAnimTable:
/* 8005C09C 00058E9C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8005C0A0 00058EA0  7C 08 02 A6 */	mflr r0
/* 8005C0A4 00058EA4  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 8005C0A8 00058EA8  90 01 00 44 */	stw r0, 0x44(r1)
/* 8005C0AC 00058EAC  BF 21 00 24 */	stmw r25, 0x24(r1)
/* 8005C0B0 00058EB0  3B 84 C2 A4 */	addi r28, r4, shared__13cruise_bubble@l
/* 8005C0B4 00058EB4  7C 7E 1B 78 */	mr r30, r3
/* 8005C0B8 00058EB8  80 1C 01 64 */	lwz r0, 0x164(r28)
/* 8005C0BC 00058EBC  28 00 00 00 */	cmplwi r0, 0
/* 8005C0C0 00058EC0  40 82 02 AC */	bne lbl_8005C36C
/* 8005C0C4 00058EC4  3C A0 80 00 */	lis r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8005C0C8 00058EC8  3C 80 80 25 */	lis r4, stringBase0__13cruise_bubble@ha
/* 8005C0CC 00058ECC  38 A5 6C FC */	addi r5, r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8005C0D0 00058ED0  38 00 00 00 */	li r0, 0
/* 8005C0D4 00058ED4  90 A1 00 08 */	stw r5, 8(r1)
/* 8005C0D8 00058ED8  38 84 53 3C */	addi r4, r4, stringBase0__13cruise_bubble@l
/* 8005C0DC 00058EDC  38 84 09 C2 */	addi r4, r4, 0x9c2
/* 8005C0E0 00058EE0  38 A0 00 10 */	li r5, 0x10
/* 8005C0E4 00058EE4  90 01 00 0C */	stw r0, 0xc(r1)
/* 8005C0E8 00058EE8  38 C0 00 00 */	li r6, 0
/* 8005C0EC 00058EEC  38 E0 00 00 */	li r7, 0
/* 8005C0F0 00058EF0  39 00 00 00 */	li r8, 0
/* 8005C0F4 00058EF4  90 01 00 10 */	stw r0, 0x10(r1)
/* 8005C0F8 00058EF8  39 20 00 00 */	li r9, 0
/* 8005C0FC 00058EFC  39 40 00 00 */	li r10, 0
/* 8005C100 00058F00  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005C104 00058F04  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005C108 00058F08  4B FA AC 51 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8005C10C 00058F0C  90 7C 01 64 */	stw r3, 0x164(r28)
/* 8005C110 00058F10  3C 60 80 00 */	lis r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8005C114 00058F14  38 03 6C FC */	addi r0, r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8005C118 00058F18  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005C11C 00058F1C  90 01 00 08 */	stw r0, 8(r1)
/* 8005C120 00058F20  38 00 00 00 */	li r0, 0
/* 8005C124 00058F24  38 83 53 3C */	addi r4, r3, stringBase0__13cruise_bubble@l
/* 8005C128 00058F28  7F C3 F3 78 */	mr r3, r30
/* 8005C12C 00058F2C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8005C130 00058F30  38 84 09 D4 */	addi r4, r4, 0x9d4
/* 8005C134 00058F34  38 A0 00 20 */	li r5, 0x20
/* 8005C138 00058F38  38 C0 00 00 */	li r6, 0
/* 8005C13C 00058F3C  90 01 00 10 */	stw r0, 0x10(r1)
/* 8005C140 00058F40  38 E0 00 00 */	li r7, 0
/* 8005C144 00058F44  39 00 00 00 */	li r8, 0
/* 8005C148 00058F48  39 20 00 00 */	li r9, 0
/* 8005C14C 00058F4C  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005C150 00058F50  39 40 00 00 */	li r10, 0
/* 8005C154 00058F54  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005C158 00058F58  4B FA AC 01 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8005C15C 00058F5C  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 8005C160 00058F60  3C A0 80 00 */	lis r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8005C164 00058F64  38 C4 C2 A4 */	addi r6, r4, shared__13cruise_bubble@l
/* 8005C168 00058F68  3C 80 80 25 */	lis r4, stringBase0__13cruise_bubble@ha
/* 8005C16C 00058F6C  90 66 01 68 */	stw r3, 0x168(r6)
/* 8005C170 00058F70  38 65 6C FC */	addi r3, r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8005C174 00058F74  38 84 53 3C */	addi r4, r4, stringBase0__13cruise_bubble@l
/* 8005C178 00058F78  38 00 00 00 */	li r0, 0
/* 8005C17C 00058F7C  90 61 00 08 */	stw r3, 8(r1)
/* 8005C180 00058F80  7F C3 F3 78 */	mr r3, r30
/* 8005C184 00058F84  38 84 09 E7 */	addi r4, r4, 0x9e7
/* 8005C188 00058F88  38 A0 00 10 */	li r5, 0x10
/* 8005C18C 00058F8C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8005C190 00058F90  38 C0 00 00 */	li r6, 0
/* 8005C194 00058F94  38 E0 00 00 */	li r7, 0
/* 8005C198 00058F98  39 00 00 00 */	li r8, 0
/* 8005C19C 00058F9C  90 01 00 10 */	stw r0, 0x10(r1)
/* 8005C1A0 00058FA0  39 20 00 00 */	li r9, 0
/* 8005C1A4 00058FA4  39 40 00 00 */	li r10, 0
/* 8005C1A8 00058FA8  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005C1AC 00058FAC  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005C1B0 00058FB0  4B FA AB A9 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8005C1B4 00058FB4  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 8005C1B8 00058FB8  38 84 C2 A4 */	addi r4, r4, shared__13cruise_bubble@l
/* 8005C1BC 00058FBC  90 64 01 6C */	stw r3, 0x16c(r4)
/* 8005C1C0 00058FC0  38 60 02 50 */	li r3, 0x250
/* 8005C1C4 00058FC4  4B FD 78 95 */	bl xMemPushTemp__FUi
/* 8005C1C8 00058FC8  38 80 00 00 */	li r4, 0
/* 8005C1CC 00058FCC  7C 7F 1B 78 */	mr r31, r3
/* 8005C1D0 00058FD0  38 A0 02 50 */	li r5, 0x250
/* 8005C1D4 00058FD4  4B FA 72 85 */	bl memset
/* 8005C1D8 00058FD8  3B 80 00 00 */	li r28, 0
/* 8005C1DC 00058FDC  3C 60 80 29 */	lis r3, start_anim_states__13cruise_bubble@ha
/* 8005C1E0 00058FE0  9B 9F 00 00 */	stb r28, 0(r31)
/* 8005C1E4 00058FE4  3B 63 C2 10 */	addi r27, r3, start_anim_states__13cruise_bubble@l
/* 8005C1E8 00058FE8  7F FA FB 78 */	mr r26, r31
/* 8005C1EC 00058FEC  3B 20 00 00 */	li r25, 0
/* 8005C1F0 00058FF0  3B A0 00 20 */	li r29, 0x20
lbl_8005C1F4:
/* 8005C1F4 00058FF4  80 9B 00 00 */	lwz r4, 0(r27)
/* 8005C1F8 00058FF8  7F 43 D3 78 */	mr r3, r26
/* 8005C1FC 00058FFC  48 18 B4 95 */	bl strcat
/* 8005C200 00059000  7F 43 D3 78 */	mr r3, r26
/* 8005C204 00059004  48 18 B5 B5 */	bl strlen
/* 8005C208 00059008  7F 5A 1A 14 */	add r26, r26, r3
/* 8005C20C 0005900C  3B 39 00 01 */	addi r25, r25, 1
/* 8005C210 00059010  9B BA 00 00 */	stb r29, 0(r26)
/* 8005C214 00059014  28 19 00 25 */	cmplwi r25, 0x25
/* 8005C218 00059018  3B 7B 00 04 */	addi r27, r27, 4
/* 8005C21C 0005901C  9F 9A 00 01 */	stbu r28, 1(r26)
/* 8005C220 00059020  41 80 FF D4 */	blt lbl_8005C1F4
/* 8005C224 00059024  38 00 00 00 */	li r0, 0
/* 8005C228 00059028  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005C22C 0005902C  90 01 00 08 */	stw r0, 8(r1)
/* 8005C230 00059030  38 A3 53 3C */	addi r5, r3, stringBase0__13cruise_bubble@l
/* 8005C234 00059034  3C 80 80 06 */	lis r4, check_anim_aim__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FP15xAnimTransitionP11xAnimSinglePv@ha
/* 8005C238 00059038  7F C3 F3 78 */	mr r3, r30
/* 8005C23C 0005903C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8005C240 00059040  38 C4 A6 D8 */	addi r6, r4, check_anim_aim__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FP15xAnimTransitionP11xAnimSinglePv@l
/* 8005C244 00059044  7F E4 FB 78 */	mr r4, r31
/* 8005C248 00059048  38 A5 09 C2 */	addi r5, r5, 0x9c2
/* 8005C24C 0005904C  C0 22 89 B8 */	lfs f1, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005C250 00059050  38 E0 00 00 */	li r7, 0
/* 8005C254 00059054  C0 62 8A E0 */	lfs f3, lbl_803CD460-_SDA2_BASE_(r2)
/* 8005C258 00059058  39 00 00 00 */	li r8, 0
/* 8005C25C 0005905C  FC 40 08 90 */	fmr f2, f1
/* 8005C260 00059060  39 20 00 00 */	li r9, 0
/* 8005C264 00059064  39 40 00 00 */	li r10, 0
/* 8005C268 00059068  4B FA B1 59 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 8005C26C 0005906C  3C A0 80 29 */	lis r5, shared__13cruise_bubble@ha
/* 8005C270 00059070  3C 80 80 25 */	lis r4, stringBase0__13cruise_bubble@ha
/* 8005C274 00059074  38 A5 C2 A4 */	addi r5, r5, shared__13cruise_bubble@l
/* 8005C278 00059078  38 00 00 00 */	li r0, 0
/* 8005C27C 0005907C  90 65 01 78 */	stw r3, 0x178(r5)
/* 8005C280 00059080  38 A4 53 3C */	addi r5, r4, stringBase0__13cruise_bubble@l
/* 8005C284 00059084  7F C3 F3 78 */	mr r3, r30
/* 8005C288 00059088  38 C0 00 00 */	li r6, 0
/* 8005C28C 0005908C  90 01 00 08 */	stw r0, 8(r1)
/* 8005C290 00059090  38 85 09 C2 */	addi r4, r5, 0x9c2
/* 8005C294 00059094  38 A5 09 D4 */	addi r5, r5, 0x9d4
/* 8005C298 00059098  38 E0 00 00 */	li r7, 0
/* 8005C29C 0005909C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8005C2A0 000590A0  39 00 00 00 */	li r8, 0
/* 8005C2A4 000590A4  39 20 00 00 */	li r9, 0
/* 8005C2A8 000590A8  39 40 00 00 */	li r10, 0
/* 8005C2AC 000590AC  C0 22 89 B8 */	lfs f1, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005C2B0 000590B0  C0 62 8A E0 */	lfs f3, lbl_803CD460-_SDA2_BASE_(r2)
/* 8005C2B4 000590B4  FC 40 08 90 */	fmr f2, f1
/* 8005C2B8 000590B8  4B FA B1 09 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 8005C2BC 000590BC  3C A0 80 29 */	lis r5, shared__13cruise_bubble@ha
/* 8005C2C0 000590C0  3C 80 80 25 */	lis r4, stringBase0__13cruise_bubble@ha
/* 8005C2C4 000590C4  38 A5 C2 A4 */	addi r5, r5, shared__13cruise_bubble@l
/* 8005C2C8 000590C8  38 00 00 00 */	li r0, 0
/* 8005C2CC 000590CC  90 65 01 7C */	stw r3, 0x17c(r5)
/* 8005C2D0 000590D0  38 A4 53 3C */	addi r5, r4, stringBase0__13cruise_bubble@l
/* 8005C2D4 000590D4  7F C3 F3 78 */	mr r3, r30
/* 8005C2D8 000590D8  38 C0 00 00 */	li r6, 0
/* 8005C2DC 000590DC  90 01 00 08 */	stw r0, 8(r1)
/* 8005C2E0 000590E0  38 85 09 D4 */	addi r4, r5, 0x9d4
/* 8005C2E4 000590E4  38 A5 09 E7 */	addi r5, r5, 0x9e7
/* 8005C2E8 000590E8  38 E0 00 00 */	li r7, 0
/* 8005C2EC 000590EC  90 01 00 0C */	stw r0, 0xc(r1)
/* 8005C2F0 000590F0  39 00 00 10 */	li r8, 0x10
/* 8005C2F4 000590F4  39 20 00 00 */	li r9, 0
/* 8005C2F8 000590F8  39 40 00 00 */	li r10, 0
/* 8005C2FC 000590FC  C0 22 89 B8 */	lfs f1, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005C300 00059100  C0 62 8A E0 */	lfs f3, lbl_803CD460-_SDA2_BASE_(r2)
/* 8005C304 00059104  FC 40 08 90 */	fmr f2, f1
/* 8005C308 00059108  4B FA B0 B9 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 8005C30C 0005910C  3C A0 80 29 */	lis r5, shared__13cruise_bubble@ha
/* 8005C310 00059110  38 00 00 00 */	li r0, 0
/* 8005C314 00059114  38 A5 C2 A4 */	addi r5, r5, shared__13cruise_bubble@l
/* 8005C318 00059118  3C 80 80 25 */	lis r4, stringBase0__13cruise_bubble@ha
/* 8005C31C 0005911C  90 65 01 80 */	stw r3, 0x180(r5)
/* 8005C320 00059120  38 A4 53 3C */	addi r5, r4, stringBase0__13cruise_bubble@l
/* 8005C324 00059124  7F C3 F3 78 */	mr r3, r30
/* 8005C328 00059128  38 C0 00 00 */	li r6, 0
/* 8005C32C 0005912C  90 01 00 08 */	stw r0, 8(r1)
/* 8005C330 00059130  38 85 09 FA */	addi r4, r5, 0x9fa
/* 8005C334 00059134  38 E0 00 00 */	li r7, 0
/* 8005C338 00059138  39 00 00 00 */	li r8, 0
/* 8005C33C 0005913C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8005C340 00059140  39 20 00 00 */	li r9, 0
/* 8005C344 00059144  39 40 00 00 */	li r10, 0
/* 8005C348 00059148  C0 22 89 B8 */	lfs f1, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005C34C 0005914C  C0 62 8A E0 */	lfs f3, lbl_803CD460-_SDA2_BASE_(r2)
/* 8005C350 00059150  FC 40 08 90 */	fmr f2, f1
/* 8005C354 00059154  4B FA B0 6D */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 8005C358 00059158  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 8005C35C 0005915C  38 84 C2 A4 */	addi r4, r4, shared__13cruise_bubble@l
/* 8005C360 00059160  90 64 01 84 */	stw r3, 0x184(r4)
/* 8005C364 00059164  7F E3 FB 78 */	mr r3, r31
/* 8005C368 00059168  4B FD 77 1D */	bl xMemPopTemp__FPv
lbl_8005C36C:
/* 8005C36C 0005916C  BB 21 00 24 */	lmw r25, 0x24(r1)
/* 8005C370 00059170  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8005C374 00059174  7C 08 03 A6 */	mtlr r0
/* 8005C378 00059178  38 21 00 40 */	addi r1, r1, 0x40
/* 8005C37C 0005917C  4E 80 00 20 */	blr 

anim_table__13cruise_bubbleFv:
/* 8005C380 00059180  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005C384 00059184  7C 08 02 A6 */	mflr r0
/* 8005C388 00059188  3C 60 80 25 */	lis r3, stringBase0__13cruise_bubble@ha
/* 8005C38C 0005918C  38 80 00 00 */	li r4, 0
/* 8005C390 00059190  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005C394 00059194  38 63 53 3C */	addi r3, r3, stringBase0__13cruise_bubble@l
/* 8005C398 00059198  38 A0 00 00 */	li r5, 0
/* 8005C39C 0005919C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8005C3A0 000591A0  38 63 0A 32 */	addi r3, r3, 0xa32
/* 8005C3A4 000591A4  4B FA A8 CD */	bl xAnimTableNew__FPCcPP10xAnimTableUi
/* 8005C3A8 000591A8  3C A0 80 00 */	lis r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8005C3AC 000591AC  3C 80 80 25 */	lis r4, stringBase0__13cruise_bubble@ha
/* 8005C3B0 000591B0  38 05 6C FC */	addi r0, r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8005C3B4 000591B4  7C 7F 1B 78 */	mr r31, r3
/* 8005C3B8 000591B8  90 01 00 08 */	stw r0, 8(r1)
/* 8005C3BC 000591BC  38 00 00 00 */	li r0, 0
/* 8005C3C0 000591C0  38 84 53 3C */	addi r4, r4, stringBase0__13cruise_bubble@l
/* 8005C3C4 000591C4  38 A0 00 20 */	li r5, 0x20
/* 8005C3C8 000591C8  90 01 00 0C */	stw r0, 0xc(r1)
/* 8005C3CC 000591CC  38 84 0A 40 */	addi r4, r4, 0xa40
/* 8005C3D0 000591D0  38 C0 00 00 */	li r6, 0
/* 8005C3D4 000591D4  38 E0 00 00 */	li r7, 0
/* 8005C3D8 000591D8  90 01 00 10 */	stw r0, 0x10(r1)
/* 8005C3DC 000591DC  39 00 00 00 */	li r8, 0
/* 8005C3E0 000591E0  39 20 00 00 */	li r9, 0
/* 8005C3E4 000591E4  39 40 00 00 */	li r10, 0
/* 8005C3E8 000591E8  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005C3EC 000591EC  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005C3F0 000591F0  4B FA A9 69 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8005C3F4 000591F4  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 8005C3F8 000591F8  3C A0 80 00 */	lis r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8005C3FC 000591FC  38 C4 C2 A4 */	addi r6, r4, shared__13cruise_bubble@l
/* 8005C400 00059200  3C 80 80 25 */	lis r4, stringBase0__13cruise_bubble@ha
/* 8005C404 00059204  90 66 01 70 */	stw r3, 0x170(r6)
/* 8005C408 00059208  38 65 6C FC */	addi r3, r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8005C40C 0005920C  38 84 53 3C */	addi r4, r4, stringBase0__13cruise_bubble@l
/* 8005C410 00059210  38 00 00 00 */	li r0, 0
/* 8005C414 00059214  90 61 00 08 */	stw r3, 8(r1)
/* 8005C418 00059218  7F E3 FB 78 */	mr r3, r31
/* 8005C41C 0005921C  38 84 0A 45 */	addi r4, r4, 0xa45
/* 8005C420 00059220  38 A0 00 10 */	li r5, 0x10
/* 8005C424 00059224  90 01 00 0C */	stw r0, 0xc(r1)
/* 8005C428 00059228  38 C0 00 00 */	li r6, 0
/* 8005C42C 0005922C  38 E0 00 00 */	li r7, 0
/* 8005C430 00059230  39 00 00 00 */	li r8, 0
/* 8005C434 00059234  90 01 00 10 */	stw r0, 0x10(r1)
/* 8005C438 00059238  39 20 00 00 */	li r9, 0
/* 8005C43C 0005923C  39 40 00 00 */	li r10, 0
/* 8005C440 00059240  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005C444 00059244  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005C448 00059248  4B FA A9 11 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8005C44C 0005924C  3C A0 80 29 */	lis r5, shared__13cruise_bubble@ha
/* 8005C450 00059250  3C 80 80 25 */	lis r4, stringBase0__13cruise_bubble@ha
/* 8005C454 00059254  38 A5 C2 A4 */	addi r5, r5, shared__13cruise_bubble@l
/* 8005C458 00059258  38 00 00 00 */	li r0, 0
/* 8005C45C 0005925C  90 65 01 74 */	stw r3, 0x174(r5)
/* 8005C460 00059260  38 A4 53 3C */	addi r5, r4, stringBase0__13cruise_bubble@l
/* 8005C464 00059264  7F E3 FB 78 */	mr r3, r31
/* 8005C468 00059268  38 C0 00 00 */	li r6, 0
/* 8005C46C 0005926C  90 01 00 08 */	stw r0, 8(r1)
/* 8005C470 00059270  38 85 0A 40 */	addi r4, r5, 0xa40
/* 8005C474 00059274  38 A5 0A 45 */	addi r5, r5, 0xa45
/* 8005C478 00059278  38 E0 00 00 */	li r7, 0
/* 8005C47C 0005927C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8005C480 00059280  39 00 00 10 */	li r8, 0x10
/* 8005C484 00059284  39 20 00 00 */	li r9, 0
/* 8005C488 00059288  39 40 00 00 */	li r10, 0
/* 8005C48C 0005928C  C0 22 89 B8 */	lfs f1, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005C490 00059290  C0 62 8A E0 */	lfs f3, lbl_803CD460-_SDA2_BASE_(r2)
/* 8005C494 00059294  FC 40 08 90 */	fmr f2, f1
/* 8005C498 00059298  4B FA AF 29 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 8005C49C 0005929C  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 8005C4A0 000592A0  38 84 C2 A4 */	addi r4, r4, shared__13cruise_bubble@l
/* 8005C4A4 000592A4  90 64 01 88 */	stw r3, 0x188(r4)
/* 8005C4A8 000592A8  7F E3 FB 78 */	mr r3, r31
/* 8005C4AC 000592AC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8005C4B0 000592B0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005C4B4 000592B4  7C 08 03 A6 */	mtlr r0
/* 8005C4B8 000592B8  38 21 00 20 */	addi r1, r1, 0x20
/* 8005C4BC 000592BC  4E 80 00 20 */	blr 

.global active__13cruise_bubbleFv
active__13cruise_bubbleFv:
/* 8005C4C0 000592C0  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005C4C4 000592C4  80 03 C2 A4 */	lwz r0, shared__13cruise_bubble@l(r3)
/* 8005C4C8 000592C8  54 03 E7 FE */	rlwinm r3, r0, 0x1c, 0x1f, 0x1f
/* 8005C4CC 000592CC  4E 80 00 20 */	blr 

.global exploding__13cruise_bubbleFv
exploding__13cruise_bubbleFv:
/* 8005C4D0 000592D0  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005C4D4 000592D4  38 63 C2 A4 */	addi r3, r3, shared__13cruise_bubble@l
/* 8005C4D8 000592D8  80 83 00 08 */	lwz r4, 8(r3)
/* 8005C4DC 000592DC  28 04 00 00 */	cmplwi r4, 0
/* 8005C4E0 000592E0  41 82 00 10 */	beq lbl_8005C4F0
/* 8005C4E4 000592E4  80 04 00 00 */	lwz r0, 0(r4)
/* 8005C4E8 000592E8  2C 00 00 06 */	cmpwi r0, 6
/* 8005C4EC 000592EC  41 82 00 0C */	beq lbl_8005C4F8
lbl_8005C4F0:
/* 8005C4F0 000592F0  C0 22 89 B8 */	lfs f1, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005C4F4 000592F4  4E 80 00 20 */	blr 
lbl_8005C4F8:
/* 8005C4F8 000592F8  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005C4FC 000592FC  C0 04 00 08 */	lfs f0, 8(r4)
/* 8005C500 00059300  C0 23 00 6C */	lfs f1, 0x6c(r3)
/* 8005C504 00059304  EC 21 00 28 */	fsubs f1, f1, f0
/* 8005C508 00059308  4E 80 00 20 */	blr 

.global get_explode_sphere__13cruise_bubbleFR5xVec3Rf
get_explode_sphere__13cruise_bubbleFR5xVec3Rf:
/* 8005C50C 0005930C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005C510 00059310  7C 08 02 A6 */	mflr r0
/* 8005C514 00059314  3C A0 80 29 */	lis r5, shared__13cruise_bubble@ha
/* 8005C518 00059318  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005C51C 0005931C  38 A5 C2 A4 */	addi r5, r5, shared__13cruise_bubble@l
/* 8005C520 00059320  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005C524 00059324  93 C1 00 08 */	stw r30, 8(r1)
/* 8005C528 00059328  7C 9E 23 78 */	mr r30, r4
/* 8005C52C 0005932C  83 E5 00 08 */	lwz r31, 8(r5)
/* 8005C530 00059330  28 1F 00 00 */	cmplwi r31, 0
/* 8005C534 00059334  41 82 00 40 */	beq lbl_8005C574
/* 8005C538 00059338  80 1F 00 00 */	lwz r0, 0(r31)
/* 8005C53C 0005933C  2C 00 00 06 */	cmpwi r0, 6
/* 8005C540 00059340  41 82 00 08 */	beq lbl_8005C548
/* 8005C544 00059344  48 00 00 30 */	b lbl_8005C574
lbl_8005C548:
/* 8005C548 00059348  80 8D 81 80 */	lwz r4, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005C54C 0005934C  C0 3F 00 08 */	lfs f1, 8(r31)
/* 8005C550 00059350  C0 04 00 6C */	lfs f0, 0x6c(r4)
/* 8005C554 00059354  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005C558 00059358  4C 41 13 82 */	cror 2, 1, 2
/* 8005C55C 0005935C  41 82 00 18 */	beq lbl_8005C574
/* 8005C560 00059360  38 85 00 50 */	addi r4, r5, 0x50
/* 8005C564 00059364  4B FA ED 01 */	bl __as__5xVec3FRC5xVec3
/* 8005C568 00059368  7F E3 FB 78 */	mr r3, r31
/* 8005C56C 0005936C  48 00 00 21 */	bl get_radius__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeCFv
/* 8005C570 00059370  D0 3E 00 00 */	stfs f1, 0(r30)
lbl_8005C574:
/* 8005C574 00059374  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005C578 00059378  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005C57C 0005937C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8005C580 00059380  7C 08 03 A6 */	mtlr r0
/* 8005C584 00059384  38 21 00 10 */	addi r1, r1, 0x10
/* 8005C588 00059388  4E 80 00 20 */	blr 

/* get_radius__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeCFv */
get_radius__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeCFv:
/* 8005C58C 0005938C  80 8D 81 80 */	lwz r4, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005C590 00059390  C0 43 00 08 */	lfs f2, 8(r3)
/* 8005C594 00059394  C0 24 00 6C */	lfs f1, 0x6c(r4)
/* 8005C598 00059398  C0 04 00 68 */	lfs f0, 0x68(r4)
/* 8005C59C 0005939C  EC 22 08 24 */	fdivs f1, f2, f1
/* 8005C5A0 000593A0  EC 21 00 32 */	fmuls f1, f1, f0
/* 8005C5A4 000593A4  4E 80 00 20 */	blr 

.global get_explode_hits__13cruise_bubbleFRi
get_explode_hits__13cruise_bubbleFRi:
/* 8005C5A8 000593A8  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 8005C5AC 000593AC  38 A4 C2 A4 */	addi r5, r4, shared__13cruise_bubble@l
/* 8005C5B0 000593B0  80 C5 00 08 */	lwz r6, 8(r5)
/* 8005C5B4 000593B4  28 06 00 00 */	cmplwi r6, 0
/* 8005C5B8 000593B8  41 82 00 10 */	beq lbl_8005C5C8
/* 8005C5BC 000593BC  80 06 00 00 */	lwz r0, 0(r6)
/* 8005C5C0 000593C0  2C 00 00 06 */	cmpwi r0, 6
/* 8005C5C4 000593C4  41 82 00 14 */	beq lbl_8005C5D8
lbl_8005C5C8:
/* 8005C5C8 000593C8  38 00 00 00 */	li r0, 0
/* 8005C5CC 000593CC  90 03 00 00 */	stw r0, 0(r3)
/* 8005C5D0 000593D0  38 60 00 00 */	li r3, 0
/* 8005C5D4 000593D4  4E 80 00 20 */	blr 
lbl_8005C5D8:
/* 8005C5D8 000593D8  80 8D 81 80 */	lwz r4, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005C5DC 000593DC  C0 26 00 08 */	lfs f1, 8(r6)
/* 8005C5E0 000593E0  C0 04 00 6C */	lfs f0, 0x6c(r4)
/* 8005C5E4 000593E4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005C5E8 000593E8  4C 41 13 82 */	cror 2, 1, 2
/* 8005C5EC 000593EC  40 82 00 14 */	bne lbl_8005C600
/* 8005C5F0 000593F0  38 00 00 00 */	li r0, 0
/* 8005C5F4 000593F4  90 03 00 00 */	stw r0, 0(r3)
/* 8005C5F8 000593F8  38 60 00 00 */	li r3, 0
/* 8005C5FC 000593FC  4E 80 00 20 */	blr 
lbl_8005C600:
/* 8005C600 00059400  80 05 00 EC */	lwz r0, 0xec(r5)
/* 8005C604 00059404  90 03 00 00 */	stw r0, 0(r3)
/* 8005C608 00059408  38 65 00 6C */	addi r3, r5, 0x6c
/* 8005C60C 0005940C  4E 80 00 20 */	blr 

.global add_life__13cruise_bubbleFff
add_life__13cruise_bubbleFff:
/* 8005C610 00059410  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005C614 00059414  38 63 C2 A4 */	addi r3, r3, shared__13cruise_bubble@l
/* 8005C618 00059418  80 83 00 08 */	lwz r4, 8(r3)
/* 8005C61C 0005941C  28 04 00 00 */	cmplwi r4, 0
/* 8005C620 00059420  4D 82 00 20 */	beqlr 
/* 8005C624 00059424  80 04 00 00 */	lwz r0, 0(r4)
/* 8005C628 00059428  2C 00 00 05 */	cmpwi r0, 5
/* 8005C62C 0005942C  41 82 00 08 */	beq lbl_8005C634
/* 8005C630 00059430  4E 80 00 20 */	blr 
lbl_8005C634:
/* 8005C634 00059434  C0 04 00 08 */	lfs f0, 8(r4)
/* 8005C638 00059438  EC 00 08 2A */	fadds f0, f0, f1
/* 8005C63C 0005943C  D0 04 00 08 */	stfs f0, 8(r4)
/* 8005C640 00059440  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005C644 00059444  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8005C648 00059448  40 80 00 0C */	bge lbl_8005C654
/* 8005C64C 0005944C  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005C650 00059450  C0 43 00 14 */	lfs f2, 0x14(r3)
lbl_8005C654:
/* 8005C654 00059454  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005C658 00059458  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8005C65C 0005945C  4C 81 00 20 */	blelr 
/* 8005C660 00059460  C0 04 00 08 */	lfs f0, 8(r4)
/* 8005C664 00059464  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8005C668 00059468  4C 81 00 20 */	blelr 
/* 8005C66C 0005946C  D0 44 00 08 */	stfs f2, 8(r4)
/* 8005C670 00059470  4E 80 00 20 */	blr 

.global set_life__13cruise_bubbleFf
set_life__13cruise_bubbleFf:
/* 8005C674 00059474  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005C678 00059478  38 63 C2 A4 */	addi r3, r3, shared__13cruise_bubble@l
/* 8005C67C 0005947C  80 63 00 08 */	lwz r3, 8(r3)
/* 8005C680 00059480  28 03 00 00 */	cmplwi r3, 0
/* 8005C684 00059484  4D 82 00 20 */	beqlr 
/* 8005C688 00059488  80 03 00 00 */	lwz r0, 0(r3)
/* 8005C68C 0005948C  2C 00 00 05 */	cmpwi r0, 5
/* 8005C690 00059490  41 82 00 08 */	beq lbl_8005C698
/* 8005C694 00059494  4E 80 00 20 */	blr 
lbl_8005C698:
/* 8005C698 00059498  D0 23 00 08 */	stfs f1, 8(r3)
/* 8005C69C 0005949C  4E 80 00 20 */	blr 

.global reset_life__13cruise_bubbleFv
reset_life__13cruise_bubbleFv:
/* 8005C6A0 000594A0  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005C6A4 000594A4  38 63 C2 A4 */	addi r3, r3, shared__13cruise_bubble@l
/* 8005C6A8 000594A8  80 83 00 08 */	lwz r4, 8(r3)
/* 8005C6AC 000594AC  28 04 00 00 */	cmplwi r4, 0
/* 8005C6B0 000594B0  4D 82 00 20 */	beqlr 
/* 8005C6B4 000594B4  80 04 00 00 */	lwz r0, 0(r4)
/* 8005C6B8 000594B8  2C 00 00 05 */	cmpwi r0, 5
/* 8005C6BC 000594BC  41 82 00 08 */	beq lbl_8005C6C4
/* 8005C6C0 000594C0  4E 80 00 20 */	blr 
lbl_8005C6C4:
/* 8005C6C4 000594C4  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005C6C8 000594C8  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 8005C6CC 000594CC  D0 04 00 08 */	stfs f0, 8(r4)
/* 8005C6D0 000594D0  4E 80 00 20 */	blr 

.global event_handler__13cruise_bubbleFP5xBaseUiPCfP5xBase
event_handler__13cruise_bubbleFP5xBaseUiPCfP5xBase:
/* 8005C6D4 000594D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005C6D8 000594D8  7C 08 02 A6 */	mflr r0
/* 8005C6DC 000594DC  2C 04 02 06 */	cmpwi r4, 0x206
/* 8005C6E0 000594E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005C6E4 000594E4  41 82 00 3C */	beq lbl_8005C720
/* 8005C6E8 000594E8  40 80 00 18 */	bge lbl_8005C700
/* 8005C6EC 000594EC  2C 04 02 05 */	cmpwi r4, 0x205
/* 8005C6F0 000594F0  40 80 00 1C */	bge lbl_8005C70C
/* 8005C6F4 000594F4  2C 04 02 03 */	cmpwi r4, 0x203
/* 8005C6F8 000594F8  40 80 00 44 */	bge lbl_8005C73C
/* 8005C6FC 000594FC  48 00 00 48 */	b lbl_8005C744
lbl_8005C700:
/* 8005C700 00059500  2C 04 02 08 */	cmpwi r4, 0x208
/* 8005C704 00059504  40 80 00 40 */	bge lbl_8005C744
/* 8005C708 00059508  48 00 00 28 */	b lbl_8005C730
lbl_8005C70C:
/* 8005C70C 0005950C  C0 25 00 00 */	lfs f1, 0(r5)
/* 8005C710 00059510  C0 45 00 04 */	lfs f2, 4(r5)
/* 8005C714 00059514  4B FF FE FD */	bl add_life__13cruise_bubbleFff
/* 8005C718 00059518  38 60 00 01 */	li r3, 1
/* 8005C71C 0005951C  48 00 00 2C */	b lbl_8005C748
lbl_8005C720:
/* 8005C720 00059520  C0 25 00 00 */	lfs f1, 0(r5)
/* 8005C724 00059524  4B FF FF 51 */	bl set_life__13cruise_bubbleFf
/* 8005C728 00059528  38 60 00 01 */	li r3, 1
/* 8005C72C 0005952C  48 00 00 1C */	b lbl_8005C748
lbl_8005C730:
/* 8005C730 00059530  4B FF FF 71 */	bl reset_life__13cruise_bubbleFv
/* 8005C734 00059534  38 60 00 01 */	li r3, 1
/* 8005C738 00059538  48 00 00 10 */	b lbl_8005C748
lbl_8005C73C:
/* 8005C73C 0005953C  38 60 00 01 */	li r3, 1
/* 8005C740 00059540  48 00 00 08 */	b lbl_8005C748
lbl_8005C744:
/* 8005C744 00059544  38 60 00 00 */	li r3, 0
lbl_8005C748:
/* 8005C748 00059548  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005C74C 0005954C  7C 08 03 A6 */	mtlr r0
/* 8005C750 00059550  38 21 00 10 */	addi r1, r1, 0x10
/* 8005C754 00059554  4E 80 00 20 */	blr 

start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_haltFv:
/* 8005C758 00059558  38 00 00 01 */	li r0, 1
/* 8005C75C 0005955C  98 03 00 08 */	stb r0, 8(r3)
/* 8005C760 00059560  4E 80 00 20 */	blr 

stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_haltFv:
/* 8005C764 00059564  3C 60 80 29 */	lis r3, lbl_80290000@ha
/* 8005C768 00059568  84 03 C2 A4 */	lwzu r0, -0x3d5c(r3)
/* 8005C76C 0005956C  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 8005C770 00059570  90 03 00 00 */	stw r0, lbl_80290000@l(r3)
/* 8005C774 00059574  4E 80 00 20 */	blr 

update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_haltFf:
/* 8005C778 00059578  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8005C77C 0005957C  7C 08 02 A6 */	mflr r0
/* 8005C780 00059580  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005C784 00059584  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8005C788 00059588  7C 7F 1B 78 */	mr r31, r3
/* 8005C78C 0005958C  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 8005C790 00059590  EC 00 08 2A */	fadds f0, f0, f1
/* 8005C794 00059594  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 8005C798 00059598  88 03 00 08 */	lbz r0, 8(r3)
/* 8005C79C 0005959C  28 00 00 00 */	cmplwi r0, 0
/* 8005C7A0 000595A0  41 82 00 28 */	beq lbl_8005C7C8
/* 8005C7A4 000595A4  38 00 00 00 */	li r0, 0
/* 8005C7A8 000595A8  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005C7AC 000595AC  38 83 C2 A4 */	addi r4, r3, shared__13cruise_bubble@l
/* 8005C7B0 000595B0  98 1F 00 08 */	stb r0, 8(r31)
/* 8005C7B4 000595B4  38 7F 00 10 */	addi r3, r31, 0x10
/* 8005C7B8 000595B8  38 84 00 F4 */	addi r4, r4, 0xf4
/* 8005C7BC 000595BC  4B FA EA A9 */	bl __as__5xVec3FRC5xVec3
/* 8005C7C0 000595C0  38 60 00 00 */	li r3, 0
/* 8005C7C4 000595C4  48 00 00 70 */	b lbl_8005C834
lbl_8005C7C8:
/* 8005C7C8 000595C8  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 8005C7CC 000595CC  38 61 00 08 */	addi r3, r1, 8
/* 8005C7D0 000595D0  38 84 C2 A4 */	addi r4, r4, shared__13cruise_bubble@l
/* 8005C7D4 000595D4  38 BF 00 10 */	addi r5, r31, 0x10
/* 8005C7D8 000595D8  38 84 00 F4 */	addi r4, r4, 0xf4
/* 8005C7DC 000595DC  4B FA E9 F1 */	bl __mi__5xVec3CFRC5xVec3
/* 8005C7E0 000595E0  80 A1 00 08 */	lwz r5, 8(r1)
/* 8005C7E4 000595E4  38 61 00 14 */	addi r3, r1, 0x14
/* 8005C7E8 000595E8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8005C7EC 000595EC  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8005C7F0 000595F0  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8005C7F4 000595F4  90 81 00 18 */	stw r4, 0x18(r1)
/* 8005C7F8 000595F8  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8005C7FC 000595FC  4B FA E9 01 */	bl length2__5xVec3CFv
/* 8005C800 00059600  C0 02 89 C4 */	lfs f0, lbl_803CD344-_SDA2_BASE_(r2)
/* 8005C804 00059604  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005C808 00059608  40 80 00 0C */	bge lbl_8005C814
/* 8005C80C 0005960C  38 60 00 01 */	li r3, 1
/* 8005C810 00059610  48 00 00 24 */	b lbl_8005C834
lbl_8005C814:
/* 8005C814 00059614  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005C818 00059618  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 8005C81C 0005961C  C0 03 00 04 */	lfs f0, 4(r3)
/* 8005C820 00059620  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005C824 00059624  40 81 00 0C */	ble lbl_8005C830
/* 8005C828 00059628  38 60 FF FF */	li r3, -1
/* 8005C82C 0005962C  48 00 00 08 */	b lbl_8005C834
lbl_8005C830:
/* 8005C830 00059630  38 60 00 00 */	li r3, 0
lbl_8005C834:
/* 8005C834 00059634  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8005C838 00059638  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8005C83C 0005963C  7C 08 03 A6 */	mtlr r0
/* 8005C840 00059640  38 21 00 30 */	addi r1, r1, 0x30
/* 8005C844 00059644  4E 80 00 20 */	blr 

start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_player_aimFv:
/* 8005C848 00059648  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005C84C 0005964C  7C 08 02 A6 */	mflr r0
/* 8005C850 00059650  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 8005C854 00059654  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005C858 00059658  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005C85C 0005965C  7C 7F 1B 78 */	mr r31, r3
/* 8005C860 00059660  38 64 C2 A4 */	addi r3, r4, shared__13cruise_bubble@l
/* 8005C864 00059664  80 03 00 00 */	lwz r0, 0(r3)
/* 8005C868 00059668  60 00 00 20 */	ori r0, r0, 0x20
/* 8005C86C 0005966C  90 03 00 00 */	stw r0, 0(r3)
/* 8005C870 00059670  48 00 00 65 */	bl get_player_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005C874 00059674  C0 23 00 20 */	lfs f1, 0x20(r3)
/* 8005C878 00059678  C0 43 00 28 */	lfs f2, 0x28(r3)
/* 8005C87C 0005967C  4B FA 97 F5 */	bl xatan2__Fff
/* 8005C880 00059680  D0 3F 00 08 */	stfs f1, 8(r31)
/* 8005C884 00059684  3C 80 80 3C */	lis r4, globals@ha
/* 8005C888 00059688  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005C88C 0005968C  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005C890 00059690  38 84 05 58 */	addi r4, r4, globals@l
/* 8005C894 00059694  38 63 C2 A4 */	addi r3, r3, shared__13cruise_bubble@l
/* 8005C898 00059698  D0 1F 00 0C */	stfs f0, 0xc(r31)
/* 8005C89C 0005969C  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005C8A0 000596A0  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 8005C8A4 000596A4  80 A4 07 04 */	lwz r5, 0x704(r4)
/* 8005C8A8 000596A8  80 83 01 78 */	lwz r4, 0x178(r3)
/* 8005C8AC 000596AC  80 65 00 0C */	lwz r3, 0xc(r5)
/* 8005C8B0 000596B0  4B FA C1 95 */	bl xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition
/* 8005C8B4 000596B4  38 60 00 02 */	li r3, 2
/* 8005C8B8 000596B8  38 80 00 07 */	li r4, 7
/* 8005C8BC 000596BC  4B FF B4 21 */	bl set_state__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_11thread_enumQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_enum
/* 8005C8C0 000596C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005C8C4 000596C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005C8C8 000596C8  7C 08 03 A6 */	mtlr r0
/* 8005C8CC 000596CC  38 21 00 10 */	addi r1, r1, 0x10
/* 8005C8D0 000596D0  4E 80 00 20 */	blr 

/* get_player_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv */
get_player_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv:
/* 8005C8D4 000596D4  3C 60 80 3C */	lis r3, globals@ha
/* 8005C8D8 000596D8  38 63 05 58 */	addi r3, r3, globals@l
/* 8005C8DC 000596DC  80 63 07 04 */	lwz r3, 0x704(r3)
/* 8005C8E0 000596E0  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8005C8E4 000596E4  4E 80 00 20 */	blr 

stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_player_aimFv:
/* 8005C8E8 000596E8  3C 60 80 29 */	lis r3, lbl_80290000@ha
/* 8005C8EC 000596EC  84 03 C2 A4 */	lwzu r0, -0x3d5c(r3)
/* 8005C8F0 000596F0  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 8005C8F4 000596F4  90 03 00 00 */	stw r0, lbl_80290000@l(r3)
/* 8005C8F8 000596F8  4E 80 00 20 */	blr 

update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_player_aimFf:
/* 8005C8FC 000596FC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005C900 00059700  7C 08 02 A6 */	mflr r0
/* 8005C904 00059704  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005C908 00059708  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8005C90C 0005970C  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8005C910 00059710  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005C914 00059714  7C 7F 1B 78 */	mr r31, r3
/* 8005C918 00059718  FF E0 08 90 */	fmr f31, f1
/* 8005C91C 0005971C  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 8005C920 00059720  EC 00 F8 2A */	fadds f0, f0, f31
/* 8005C924 00059724  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 8005C928 00059728  80 8D 81 80 */	lwz r4, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005C92C 0005972C  C0 43 00 10 */	lfs f2, 0x10(r3)
/* 8005C930 00059730  C0 04 00 00 */	lfs f0, 0(r4)
/* 8005C934 00059734  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8005C938 00059738  4C 41 13 82 */	cror 2, 1, 2
/* 8005C93C 0005973C  40 82 00 08 */	bne lbl_8005C944
/* 8005C940 00059740  48 00 01 59 */	bl face_camera__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_player_aimFf
lbl_8005C944:
/* 8005C944 00059744  7F E3 FB 78 */	mr r3, r31
/* 8005C948 00059748  48 00 00 B9 */	bl apply_yaw__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_player_aimFv
/* 8005C94C 0005974C  FC 20 F8 90 */	fmr f1, f31
/* 8005C950 00059750  7F E3 FB 78 */	mr r3, r31
/* 8005C954 00059754  48 00 00 45 */	bl update_animation__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_player_aimFf
/* 8005C958 00059758  3C 60 80 3C */	lis r3, globals@ha
/* 8005C95C 0005975C  38 63 05 58 */	addi r3, r3, globals@l
/* 8005C960 00059760  80 63 03 1C */	lwz r3, 0x31c(r3)
/* 8005C964 00059764  80 03 00 2C */	lwz r0, 0x2c(r3)
/* 8005C968 00059768  54 00 05 EF */	rlwinm. r0, r0, 0, 0x17, 0x17
/* 8005C96C 0005976C  40 82 00 0C */	bne lbl_8005C978
/* 8005C970 00059770  38 60 00 02 */	li r3, 2
/* 8005C974 00059774  48 00 00 08 */	b lbl_8005C97C
lbl_8005C978:
/* 8005C978 00059778  38 60 00 01 */	li r3, 1
lbl_8005C97C:
/* 8005C97C 0005977C  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8005C980 00059780  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005C984 00059784  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8005C988 00059788  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005C98C 0005978C  7C 08 03 A6 */	mtlr r0
/* 8005C990 00059790  38 21 00 20 */	addi r1, r1, 0x20
/* 8005C994 00059794  4E 80 00 20 */	blr 

/* update_animation__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_player_aimFf */
update_animation__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_player_aimFf:
/* 8005C998 00059798  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005C99C 0005979C  7C 08 02 A6 */	mflr r0
/* 8005C9A0 000597A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005C9A4 000597A4  80 8D 81 80 */	lwz r4, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005C9A8 000597A8  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 8005C9AC 000597AC  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 8005C9B0 000597B0  C0 42 89 FC */	lfs f2, lbl_803CD37C-_SDA2_BASE_(r2)
/* 8005C9B4 000597B4  EC 21 00 32 */	fmuls f1, f1, f0
/* 8005C9B8 000597B8  C0 62 89 C0 */	lfs f3, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005C9BC 000597BC  4B FB 1F 7D */	bl range_limit_esc__0_f_esc__1___Ffff
/* 8005C9C0 000597C0  3C 60 80 3C */	lis r3, globals@ha
/* 8005C9C4 000597C4  C0 42 89 C0 */	lfs f2, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005C9C8 000597C8  38 63 05 58 */	addi r3, r3, globals@l
/* 8005C9CC 000597CC  C0 62 89 C8 */	lfs f3, lbl_803CD348-_SDA2_BASE_(r2)
/* 8005C9D0 000597D0  80 63 07 04 */	lwz r3, 0x704(r3)
/* 8005C9D4 000597D4  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8005C9D8 000597D8  80 63 00 08 */	lwz r3, 8(r3)
/* 8005C9DC 000597DC  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 8005C9E0 000597E0  EC 02 00 2A */	fadds f0, f2, f0
/* 8005C9E4 000597E4  EC 00 08 2A */	fadds f0, f0, f1
/* 8005C9E8 000597E8  EC 03 00 32 */	fmuls f0, f3, f0
/* 8005C9EC 000597EC  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 8005C9F0 000597F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005C9F4 000597F4  7C 08 03 A6 */	mtlr r0
/* 8005C9F8 000597F8  38 21 00 10 */	addi r1, r1, 0x10
/* 8005C9FC 000597FC  4E 80 00 20 */	blr 

/* apply_yaw__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_player_aimFv */
apply_yaw__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_player_aimFv:
/* 8005CA00 00059800  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005CA04 00059804  7C 08 02 A6 */	mflr r0
/* 8005CA08 00059808  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005CA0C 0005980C  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8005CA10 00059810  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8005CA14 00059814  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005CA18 00059818  93 C1 00 08 */	stw r30, 8(r1)
/* 8005CA1C 0005981C  7C 7E 1B 78 */	mr r30, r3
/* 8005CA20 00059820  4B FF FE B5 */	bl get_player_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005CA24 00059824  C0 3E 00 08 */	lfs f1, 8(r30)
/* 8005CA28 00059828  7C 7F 1B 78 */	mr r31, r3
/* 8005CA2C 0005982C  48 06 84 65 */	bl icos__Ff
/* 8005CA30 00059830  FF E0 08 90 */	fmr f31, f1
/* 8005CA34 00059834  C0 3E 00 08 */	lfs f1, 8(r30)
/* 8005CA38 00059838  48 06 84 15 */	bl isin__Ff
/* 8005CA3C 0005983C  FC 60 F8 90 */	fmr f3, f31
/* 8005CA40 00059840  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005CA44 00059844  38 7F 00 20 */	addi r3, r31, 0x20
/* 8005CA48 00059848  4B FA E6 A5 */	bl assign__5xVec3Ffff
/* 8005CA4C 0005984C  C0 1F 00 20 */	lfs f0, 0x20(r31)
/* 8005CA50 00059850  7F E3 FB 78 */	mr r3, r31
/* 8005CA54 00059854  C0 3F 00 28 */	lfs f1, 0x28(r31)
/* 8005CA58 00059858  FC 60 00 50 */	fneg f3, f0
/* 8005CA5C 0005985C  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005CA60 00059860  4B FA E6 8D */	bl assign__5xVec3Ffff
/* 8005CA64 00059864  C0 22 89 B8 */	lfs f1, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005CA68 00059868  38 7F 00 10 */	addi r3, r31, 0x10
/* 8005CA6C 0005986C  C0 42 89 C0 */	lfs f2, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005CA70 00059870  FC 60 08 90 */	fmr f3, f1
/* 8005CA74 00059874  4B FA E6 79 */	bl assign__5xVec3Ffff
/* 8005CA78 00059878  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8005CA7C 0005987C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005CA80 00059880  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8005CA84 00059884  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005CA88 00059888  83 C1 00 08 */	lwz r30, 8(r1)
/* 8005CA8C 0005988C  7C 08 03 A6 */	mtlr r0
/* 8005CA90 00059890  38 21 00 20 */	addi r1, r1, 0x20
/* 8005CA94 00059894  4E 80 00 20 */	blr 

/* face_camera__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_player_aimFf */
face_camera__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_player_aimFf:
/* 8005CA98 00059898  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8005CA9C 0005989C  7C 08 02 A6 */	mflr r0
/* 8005CAA0 000598A0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005CAA4 000598A4  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8005CAA8 000598A8  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8005CAAC 000598AC  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 8005CAB0 000598B0  F3 C1 00 18 */	psq_st f30, 24(r1), 0, qr0
/* 8005CAB4 000598B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005CAB8 000598B8  3C 80 80 3C */	lis r4, globals@ha
/* 8005CABC 000598BC  C0 42 8A 0C */	lfs f2, lbl_803CD38C-_SDA2_BASE_(r2)
/* 8005CAC0 000598C0  38 84 05 58 */	addi r4, r4, globals@l
/* 8005CAC4 000598C4  FF C0 08 90 */	fmr f30, f1
/* 8005CAC8 000598C8  C0 24 00 34 */	lfs f1, 0x34(r4)
/* 8005CACC 000598CC  7C 7F 1B 78 */	mr r31, r3
/* 8005CAD0 000598D0  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 8005CAD4 000598D4  4C 41 13 82 */	cror 2, 1, 2
/* 8005CAD8 000598D8  40 82 00 38 */	bne lbl_8005CB10
/* 8005CADC 000598DC  C0 02 89 D4 */	lfs f0, lbl_803CD354-_SDA2_BASE_(r2)
/* 8005CAE0 000598E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005CAE4 000598E4  4C 40 13 82 */	cror 2, 0, 2
/* 8005CAE8 000598E8  40 82 00 28 */	bne lbl_8005CB10
/* 8005CAEC 000598EC  C0 64 00 3C */	lfs f3, 0x3c(r4)
/* 8005CAF0 000598F0  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 8005CAF4 000598F4  4C 41 13 82 */	cror 2, 1, 2
/* 8005CAF8 000598F8  40 82 00 18 */	bne lbl_8005CB10
/* 8005CAFC 000598FC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8005CB00 00059900  4C 40 13 82 */	cror 2, 0, 2
/* 8005CB04 00059904  40 82 00 0C */	bne lbl_8005CB10
/* 8005CB08 00059908  C0 3F 00 08 */	lfs f1, 8(r31)
/* 8005CB0C 0005990C  48 00 00 0C */	b lbl_8005CB18
lbl_8005CB10:
/* 8005CB10 00059910  C0 44 00 3C */	lfs f2, 0x3c(r4)
/* 8005CB14 00059914  4B FA 95 5D */	bl xatan2__Fff
lbl_8005CB18:
/* 8005CB18 00059918  C0 5F 00 08 */	lfs f2, 8(r31)
/* 8005CB1C 0005991C  C0 02 8A E4 */	lfs f0, lbl_803CD464-_SDA2_BASE_(r2)
/* 8005CB20 00059920  EF E1 10 28 */	fsubs f31, f1, f2
/* 8005CB24 00059924  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8005CB28 00059928  40 81 00 10 */	ble lbl_8005CB38
/* 8005CB2C 0005992C  C0 02 8A E8 */	lfs f0, lbl_803CD468-_SDA2_BASE_(r2)
/* 8005CB30 00059930  EF FF 00 28 */	fsubs f31, f31, f0
/* 8005CB34 00059934  48 00 00 18 */	b lbl_8005CB4C
lbl_8005CB38:
/* 8005CB38 00059938  C0 02 8A EC */	lfs f0, lbl_803CD46C-_SDA2_BASE_(r2)
/* 8005CB3C 0005993C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8005CB40 00059940  40 80 00 0C */	bge lbl_8005CB4C
/* 8005CB44 00059944  C0 02 8A E8 */	lfs f0, lbl_803CD468-_SDA2_BASE_(r2)
/* 8005CB48 00059948  EF FF 00 2A */	fadds f31, f31, f0
lbl_8005CB4C:
/* 8005CB4C 0005994C  FC 20 F0 90 */	fmr f1, f30
/* 8005CB50 00059950  4B FB 1C 61 */	bl xexp__Ff
/* 8005CB54 00059954  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005CB58 00059958  C0 02 89 C0 */	lfs f0, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005CB5C 0005995C  C0 43 00 08 */	lfs f2, 8(r3)
/* 8005CB60 00059960  EC 22 00 72 */	fmuls f1, f2, f1
/* 8005CB64 00059964  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005CB68 00059968  40 81 00 08 */	ble lbl_8005CB70
/* 8005CB6C 0005996C  FC 20 00 90 */	fmr f1, f0
lbl_8005CB70:
/* 8005CB70 00059970  EC 3F 00 72 */	fmuls f1, f31, f1
/* 8005CB74 00059974  EC 01 F0 24 */	fdivs f0, f1, f30
/* 8005CB78 00059978  D0 1F 00 0C */	stfs f0, 0xc(r31)
/* 8005CB7C 0005997C  C0 1F 00 08 */	lfs f0, 8(r31)
/* 8005CB80 00059980  EC 00 08 2A */	fadds f0, f0, f1
/* 8005CB84 00059984  D0 1F 00 08 */	stfs f0, 8(r31)
/* 8005CB88 00059988  C0 3F 00 08 */	lfs f1, 8(r31)
/* 8005CB8C 0005998C  4B FB 1C 69 */	bl xrmod__Ff
/* 8005CB90 00059990  D0 3F 00 08 */	stfs f1, 8(r31)
/* 8005CB94 00059994  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8005CB98 00059998  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8005CB9C 0005999C  E3 C1 00 18 */	psq_l f30, 24(r1), 0, qr0
/* 8005CBA0 000599A0  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 8005CBA4 000599A4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8005CBA8 000599A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005CBAC 000599AC  7C 08 03 A6 */	mtlr r0
/* 8005CBB0 000599B0  38 21 00 30 */	addi r1, r1, 0x30
/* 8005CBB4 000599B4  4E 80 00 20 */	blr 

start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_fireFv:
/* 8005CBB8 000599B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005CBBC 000599BC  7C 08 02 A6 */	mflr r0
/* 8005CBC0 000599C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005CBC4 000599C4  38 00 00 00 */	li r0, 0
/* 8005CBC8 000599C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005CBCC 000599CC  98 03 00 08 */	stb r0, 8(r3)
/* 8005CBD0 000599D0  48 00 00 A1 */	bl get_missle_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005CBD4 000599D4  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005CBD8 000599D8  38 83 00 30 */	addi r4, r3, 0x30
/* 8005CBDC 000599DC  38 60 00 00 */	li r3, 0
/* 8005CBE0 000599E0  4B FF A8 25 */	bl play_sound__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FifPC5xVec3
/* 8005CBE4 000599E4  3C 80 80 3C */	lis r4, globals@ha
/* 8005CBE8 000599E8  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005CBEC 000599EC  38 84 05 58 */	addi r4, r4, globals@l
/* 8005CBF0 000599F0  80 A4 07 04 */	lwz r5, 0x704(r4)
/* 8005CBF4 000599F4  38 63 C2 A4 */	addi r3, r3, shared__13cruise_bubble@l
/* 8005CBF8 000599F8  80 83 01 7C */	lwz r4, 0x17c(r3)
/* 8005CBFC 000599FC  80 65 00 0C */	lwz r3, 0xc(r5)
/* 8005CC00 00059A00  4B FA BE 45 */	bl xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition
/* 8005CC04 00059A04  38 60 00 01 */	li r3, 1
/* 8005CC08 00059A08  38 80 00 04 */	li r4, 4
/* 8005CC0C 00059A0C  4B FF B0 D1 */	bl set_state__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_11thread_enumQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_enum
/* 8005CC10 00059A10  4B FD 40 79 */	bl xurand__Fv
/* 8005CC14 00059A14  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005CC18 00059A18  3B E3 C2 A4 */	addi r31, r3, shared__13cruise_bubble@l
/* 8005CC1C 00059A1C  C0 1F 01 08 */	lfs f0, 0x108(r31)
/* 8005CC20 00059A20  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005CC24 00059A24  4C 40 13 82 */	cror 2, 0, 2
/* 8005CC28 00059A28  40 82 00 34 */	bne lbl_8005CC5C
/* 8005CC2C 00059A2C  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005CC30 00059A30  38 60 00 03 */	li r3, 3
/* 8005CC34 00059A34  4B FF A6 ED */	bl play_sound__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fif
/* 8005CC38 00059A38  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005CC3C 00059A3C  C0 3F 01 08 */	lfs f1, 0x108(r31)
/* 8005CC40 00059A40  C0 03 01 84 */	lfs f0, 0x184(r3)
/* 8005CC44 00059A44  EC 01 00 32 */	fmuls f0, f1, f0
/* 8005CC48 00059A48  D0 1F 01 08 */	stfs f0, 0x108(r31)
/* 8005CC4C 00059A4C  C0 23 01 88 */	lfs f1, 0x188(r3)
/* 8005CC50 00059A50  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8005CC54 00059A54  40 80 00 08 */	bge lbl_8005CC5C
/* 8005CC58 00059A58  D0 3F 01 08 */	stfs f1, 0x108(r31)
lbl_8005CC5C:
/* 8005CC5C 00059A5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005CC60 00059A60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005CC64 00059A64  7C 08 03 A6 */	mtlr r0
/* 8005CC68 00059A68  38 21 00 10 */	addi r1, r1, 0x10
/* 8005CC6C 00059A6C  4E 80 00 20 */	blr 

/* get_missle_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv */
get_missle_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv:
/* 8005CC70 00059A70  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005CC74 00059A74  38 63 C2 A4 */	addi r3, r3, shared__13cruise_bubble@l
/* 8005CC78 00059A78  80 63 00 68 */	lwz r3, 0x68(r3)
/* 8005CC7C 00059A7C  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8005CC80 00059A80  4E 80 00 20 */	blr 

stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_fireFv:
/* 8005CC84 00059A84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005CC88 00059A88  7C 08 02 A6 */	mflr r0
/* 8005CC8C 00059A8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005CC90 00059A90  4B FF A8 B1 */	bl hide_wand__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005CC94 00059A94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005CC98 00059A98  7C 08 03 A6 */	mtlr r0
/* 8005CC9C 00059A9C  38 21 00 10 */	addi r1, r1, 0x10
/* 8005CCA0 00059AA0  4E 80 00 20 */	blr 

update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_fireFf:
/* 8005CCA4 00059AA4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8005CCA8 00059AA8  7C 08 02 A6 */	mflr r0
/* 8005CCAC 00059AAC  90 01 00 44 */	stw r0, 0x44(r1)
/* 8005CCB0 00059AB0  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8005CCB4 00059AB4  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8005CCB8 00059AB8  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8005CCBC 00059ABC  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 8005CCC0 00059AC0  DB A1 00 10 */	stfd f29, 0x10(r1)
/* 8005CCC4 00059AC4  F3 A1 00 18 */	psq_st f29, 24(r1), 0, qr0
/* 8005CCC8 00059AC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005CCCC 00059ACC  3C A0 80 3C */	lis r5, globals@ha
/* 8005CCD0 00059AD0  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 8005CCD4 00059AD4  38 A5 05 58 */	addi r5, r5, globals@l
/* 8005CCD8 00059AD8  FF A0 08 90 */	fmr f29, f1
/* 8005CCDC 00059ADC  80 A5 07 04 */	lwz r5, 0x704(r5)
/* 8005CCE0 00059AE0  38 84 C2 A4 */	addi r4, r4, shared__13cruise_bubble@l
/* 8005CCE4 00059AE4  80 04 01 68 */	lwz r0, 0x168(r4)
/* 8005CCE8 00059AE8  7C 7F 1B 78 */	mr r31, r3
/* 8005CCEC 00059AEC  80 65 00 0C */	lwz r3, 0xc(r5)
/* 8005CCF0 00059AF0  80 63 00 08 */	lwz r3, 8(r3)
/* 8005CCF4 00059AF4  80 83 00 04 */	lwz r4, 4(r3)
/* 8005CCF8 00059AF8  7C 04 00 40 */	cmplw r4, r0
/* 8005CCFC 00059AFC  40 82 00 4C */	bne lbl_8005CD48
/* 8005CD00 00059B00  C0 03 00 08 */	lfs f0, 8(r3)
/* 8005CD04 00059B04  88 1F 00 08 */	lbz r0, 8(r31)
/* 8005CD08 00059B08  80 64 00 18 */	lwz r3, 0x18(r4)
/* 8005CD0C 00059B0C  EF C0 E8 2A */	fadds f30, f0, f29
/* 8005CD10 00059B10  28 00 00 00 */	cmplwi r0, 0
/* 8005CD14 00059B14  C3 E3 00 10 */	lfs f31, 0x10(r3)
/* 8005CD18 00059B18  40 82 00 1C */	bne lbl_8005CD34
/* 8005CD1C 00059B1C  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005CD20 00059B20  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 8005CD24 00059B24  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 8005CD28 00059B28  4C 41 13 82 */	cror 2, 1, 2
/* 8005CD2C 00059B2C  40 82 00 08 */	bne lbl_8005CD34
/* 8005CD30 00059B30  4B FF A7 F5 */	bl show_wand__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
lbl_8005CD34:
/* 8005CD34 00059B34  FC 1E F8 40 */	fcmpo cr0, f30, f31
/* 8005CD38 00059B38  4C 41 13 82 */	cror 2, 1, 2
/* 8005CD3C 00059B3C  40 82 00 0C */	bne lbl_8005CD48
/* 8005CD40 00059B40  38 60 00 03 */	li r3, 3
/* 8005CD44 00059B44  48 00 00 20 */	b lbl_8005CD64
lbl_8005CD48:
/* 8005CD48 00059B48  88 1F 00 08 */	lbz r0, 8(r31)
/* 8005CD4C 00059B4C  28 00 00 00 */	cmplwi r0, 0
/* 8005CD50 00059B50  41 82 00 10 */	beq lbl_8005CD60
/* 8005CD54 00059B54  FC 20 E8 90 */	fmr f1, f29
/* 8005CD58 00059B58  7F E3 FB 78 */	mr r3, r31
/* 8005CD5C 00059B5C  48 00 00 35 */	bl update_wand__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_fireFf
lbl_8005CD60:
/* 8005CD60 00059B60  38 60 00 02 */	li r3, 2
lbl_8005CD64:
/* 8005CD64 00059B64  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8005CD68 00059B68  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8005CD6C 00059B6C  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 8005CD70 00059B70  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8005CD74 00059B74  E3 A1 00 18 */	psq_l f29, 24(r1), 0, qr0
/* 8005CD78 00059B78  CB A1 00 10 */	lfd f29, 0x10(r1)
/* 8005CD7C 00059B7C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8005CD80 00059B80  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005CD84 00059B84  7C 08 03 A6 */	mtlr r0
/* 8005CD88 00059B88  38 21 00 40 */	addi r1, r1, 0x40
/* 8005CD8C 00059B8C  4E 80 00 20 */	blr 

/* update_wand__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_fireFf */
update_wand__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_fireFf:
/* 8005CD90 00059B90  4E 80 00 20 */	blr 

start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_waitFv:
/* 8005CD94 00059B94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005CD98 00059B98  7C 08 02 A6 */	mflr r0
/* 8005CD9C 00059B9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005CDA0 00059BA0  4B FF A7 A1 */	bl hide_wand__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005CDA4 00059BA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005CDA8 00059BA8  7C 08 03 A6 */	mtlr r0
/* 8005CDAC 00059BAC  38 21 00 10 */	addi r1, r1, 0x10
/* 8005CDB0 00059BB0  4E 80 00 20 */	blr 

update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_waitFf:
/* 8005CDB4 00059BB4  38 60 00 03 */	li r3, 3
/* 8005CDB8 00059BB8  4E 80 00 20 */	blr 

start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_missle_appearFv:
/* 8005CDBC 00059BBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005CDC0 00059BC0  7C 08 02 A6 */	mflr r0
/* 8005CDC4 00059BC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005CDC8 00059BC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005CDCC 00059BCC  7C 7F 1B 78 */	mr r31, r3
/* 8005CDD0 00059BD0  4B FF A7 8D */	bl show_missle__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005CDD4 00059BD4  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005CDD8 00059BD8  38 83 C2 A4 */	addi r4, r3, shared__13cruise_bubble@l
/* 8005CDDC 00059BDC  80 64 00 68 */	lwz r3, 0x68(r4)
/* 8005CDE0 00059BE0  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 8005CDE4 00059BE4  54 00 04 3C */	rlwinm r0, r0, 0, 0x10, 0x1e
/* 8005CDE8 00059BE8  B0 03 00 44 */	sth r0, 0x44(r3)
/* 8005CDEC 00059BEC  C0 02 89 C0 */	lfs f0, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005CDF0 00059BF0  80 64 00 68 */	lwz r3, 0x68(r4)
/* 8005CDF4 00059BF4  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 8005CDF8 00059BF8  80 64 00 68 */	lwz r3, 0x68(r4)
/* 8005CDFC 00059BFC  80 84 01 70 */	lwz r4, 0x170(r4)
/* 8005CE00 00059C00  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8005CE04 00059C04  C0 22 89 B8 */	lfs f1, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005CE08 00059C08  80 63 00 08 */	lwz r3, 8(r3)
/* 8005CE0C 00059C0C  4B FA B1 11 */	bl xAnimPlaySetState__FP11xAnimSingleP10xAnimStatef
/* 8005CE10 00059C10  7F E3 FB 78 */	mr r3, r31
/* 8005CE14 00059C14  48 00 00 19 */	bl move__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_missle_appearFv
/* 8005CE18 00059C18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005CE1C 00059C1C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005CE20 00059C20  7C 08 03 A6 */	mtlr r0
/* 8005CE24 00059C24  38 21 00 10 */	addi r1, r1, 0x10
/* 8005CE28 00059C28  4E 80 00 20 */	blr 

/* move__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_missle_appearFv */
move__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_missle_appearFv:
/* 8005CE2C 00059C2C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8005CE30 00059C30  7C 08 02 A6 */	mflr r0
/* 8005CE34 00059C34  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005CE38 00059C38  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8005CE3C 00059C3C  4B FF FE 35 */	bl get_missle_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005CE40 00059C40  7C 7F 1B 78 */	mr r31, r3
/* 8005CE44 00059C44  4B FF FA 91 */	bl get_player_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005CE48 00059C48  7C 64 1B 78 */	mr r4, r3
/* 8005CE4C 00059C4C  7F E3 FB 78 */	mr r3, r31
/* 8005CE50 00059C50  4B FA E7 1D */	bl __as__7xMat4x3FRC7xMat4x3
/* 8005CE54 00059C54  7F E3 FB 78 */	mr r3, r31
/* 8005CE58 00059C58  38 81 00 14 */	addi r4, r1, 0x14
/* 8005CE5C 00059C5C  4B FD 4F D9 */	bl xMat3x3GetEuler__FPC7xMat3x3P5xVec3
/* 8005CE60 00059C60  7F E3 FB 78 */	mr r3, r31
/* 8005CE64 00059C64  38 81 00 14 */	addi r4, r1, 0x14
/* 8005CE68 00059C68  4B FD 53 3D */	bl xMat3x3Euler__FP7xMat3x3PC5xVec3
/* 8005CE6C 00059C6C  80 AD 81 80 */	lwz r5, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005CE70 00059C70  7F E4 FB 78 */	mr r4, r31
/* 8005CE74 00059C74  38 61 00 08 */	addi r3, r1, 8
/* 8005CE78 00059C78  38 A5 00 30 */	addi r5, r5, 0x30
/* 8005CE7C 00059C7C  48 00 31 C1 */	bl xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 8005CE80 00059C80  38 7F 00 30 */	addi r3, r31, 0x30
/* 8005CE84 00059C84  38 81 00 08 */	addi r4, r1, 8
/* 8005CE88 00059C88  4B FB 85 BD */	bl __apl__5xVec3FRC5xVec3
/* 8005CE8C 00059C8C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8005CE90 00059C90  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8005CE94 00059C94  7C 08 03 A6 */	mtlr r0
/* 8005CE98 00059C98  38 21 00 30 */	addi r1, r1, 0x30
/* 8005CE9C 00059C9C  4E 80 00 20 */	blr 

stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_missle_appearFv:
/* 8005CEA0 00059CA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005CEA4 00059CA4  7C 08 02 A6 */	mflr r0
/* 8005CEA8 00059CA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005CEAC 00059CAC  4B FF A6 CD */	bl hide_missle__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005CEB0 00059CB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005CEB4 00059CB4  7C 08 03 A6 */	mtlr r0
/* 8005CEB8 00059CB8  38 21 00 10 */	addi r1, r1, 0x10
/* 8005CEBC 00059CBC  4E 80 00 20 */	blr 

update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_missle_appearFf:
/* 8005CEC0 00059CC0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8005CEC4 00059CC4  7C 08 02 A6 */	mflr r0
/* 8005CEC8 00059CC8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005CECC 00059CCC  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8005CED0 00059CD0  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8005CED4 00059CD4  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 8005CED8 00059CD8  F3 C1 00 18 */	psq_st f30, 24(r1), 0, qr0
/* 8005CEDC 00059CDC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005CEE0 00059CE0  3C A0 80 29 */	lis r5, shared__13cruise_bubble@ha
/* 8005CEE4 00059CE4  80 8D 81 80 */	lwz r4, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005CEE8 00059CE8  38 A5 C2 A4 */	addi r5, r5, shared__13cruise_bubble@l
/* 8005CEEC 00059CEC  FF C0 08 90 */	fmr f30, f1
/* 8005CEF0 00059CF0  80 A5 00 68 */	lwz r5, 0x68(r5)
/* 8005CEF4 00059CF4  7C 7F 1B 78 */	mr r31, r3
/* 8005CEF8 00059CF8  C0 04 00 28 */	lfs f0, 0x28(r4)
/* 8005CEFC 00059CFC  80 65 00 0C */	lwz r3, 0xc(r5)
/* 8005CF00 00059D00  80 63 00 08 */	lwz r3, 8(r3)
/* 8005CF04 00059D04  C0 23 00 08 */	lfs f1, 8(r3)
/* 8005CF08 00059D08  EF E1 F0 2A */	fadds f31, f1, f30
/* 8005CF0C 00059D0C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8005CF10 00059D10  4C 41 13 82 */	cror 2, 1, 2
/* 8005CF14 00059D14  40 82 00 14 */	bne lbl_8005CF28
/* 8005CF18 00059D18  A0 05 00 44 */	lhz r0, 0x44(r5)
/* 8005CF1C 00059D1C  60 00 00 01 */	ori r0, r0, 1
/* 8005CF20 00059D20  B0 05 00 44 */	sth r0, 0x44(r5)
/* 8005CF24 00059D24  4B FF AD 55 */	bl start_trail__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
lbl_8005CF28:
/* 8005CF28 00059D28  7F E3 FB 78 */	mr r3, r31
/* 8005CF2C 00059D2C  4B FF FF 01 */	bl move__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_missle_appearFv
/* 8005CF30 00059D30  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005CF34 00059D34  C0 03 00 2C */	lfs f0, 0x2c(r3)
/* 8005CF38 00059D38  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8005CF3C 00059D3C  4C 41 13 82 */	cror 2, 1, 2
/* 8005CF40 00059D40  40 82 00 0C */	bne lbl_8005CF4C
/* 8005CF44 00059D44  38 60 00 05 */	li r3, 5
/* 8005CF48 00059D48  48 00 00 14 */	b lbl_8005CF5C
lbl_8005CF4C:
/* 8005CF4C 00059D4C  FC 20 F0 90 */	fmr f1, f30
/* 8005CF50 00059D50  7F E3 FB 78 */	mr r3, r31
/* 8005CF54 00059D54  48 00 00 2D */	bl update_effects__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_missle_appearFf
/* 8005CF58 00059D58  38 60 00 04 */	li r3, 4
lbl_8005CF5C:
/* 8005CF5C 00059D5C  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8005CF60 00059D60  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8005CF64 00059D64  E3 C1 00 18 */	psq_l f30, 24(r1), 0, qr0
/* 8005CF68 00059D68  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 8005CF6C 00059D6C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8005CF70 00059D70  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005CF74 00059D74  7C 08 03 A6 */	mtlr r0
/* 8005CF78 00059D78  38 21 00 30 */	addi r1, r1, 0x30
/* 8005CF7C 00059D7C  4E 80 00 20 */	blr 

/* update_effects__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_missle_appearFf */
update_effects__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_missle_appearFf:
/* 8005CF80 00059D80  4E 80 00 20 */	blr 

start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFv:
/* 8005CF84 00059D84  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8005CF88 00059D88  7C 08 02 A6 */	mflr r0
/* 8005CF8C 00059D8C  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 8005CF90 00059D90  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005CF94 00059D94  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8005CF98 00059D98  7C 7F 1B 78 */	mr r31, r3
/* 8005CF9C 00059D9C  38 64 C2 A4 */	addi r3, r4, shared__13cruise_bubble@l
/* 8005CFA0 00059DA0  80 03 00 00 */	lwz r0, 0(r3)
/* 8005CFA4 00059DA4  60 00 00 08 */	ori r0, r0, 8
/* 8005CFA8 00059DA8  90 03 00 00 */	stw r0, 0(r3)
/* 8005CFAC 00059DAC  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005CFB0 00059DB0  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 8005CFB4 00059DB4  D0 1F 00 08 */	stfs f0, 8(r31)
/* 8005CFB8 00059DB8  4B FF A5 A5 */	bl show_missle__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005CFBC 00059DBC  4B FF AC BD */	bl start_trail__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005CFC0 00059DC0  4B FF A6 B1 */	bl start_damaging__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005CFC4 00059DC4  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005CFC8 00059DC8  D0 1F 00 0C */	stfs f0, 0xc(r31)
/* 8005CFCC 00059DCC  4B FF FC A5 */	bl get_missle_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005CFD0 00059DD0  38 9F 00 10 */	addi r4, r31, 0x10
/* 8005CFD4 00059DD4  4B FD 4E 61 */	bl xMat3x3GetEuler__FPC7xMat3x3P5xVec3
/* 8005CFD8 00059DD8  C0 22 89 B8 */	lfs f1, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005CFDC 00059DDC  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8005CFE0 00059DE0  4B FB F8 99 */	bl __as__5xVec3Ff
/* 8005CFE4 00059DE4  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005CFE8 00059DE8  3C 60 80 3C */	lis r3, globals@ha
/* 8005CFEC 00059DEC  38 83 05 58 */	addi r4, r3, globals@l
/* 8005CFF0 00059DF0  38 7F 00 2C */	addi r3, r31, 0x2c
/* 8005CFF4 00059DF4  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 8005CFF8 00059DF8  38 84 07 68 */	addi r4, r4, 0x768
/* 8005CFFC 00059DFC  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005D000 00059E00  D0 1F 00 38 */	stfs f0, 0x38(r31)
/* 8005D004 00059E04  4B FA E2 61 */	bl __as__5xVec3FRC5xVec3
/* 8005D008 00059E08  3C 60 80 2E */	lis r3, lbl_802DBE30@ha
/* 8005D00C 00059E0C  38 63 BE 30 */	addi r3, r3, lbl_802DBE30@l
/* 8005D010 00059E10  48 00 34 55 */	bl reset__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fv
/* 8005D014 00059E14  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 8005D018 00059E18  38 61 00 18 */	addi r3, r1, 0x18
/* 8005D01C 00059E1C  38 9F 00 2C */	addi r4, r31, 0x2c
/* 8005D020 00059E20  48 00 00 6D */	bl __ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_dataFRC5xVec3f
/* 8005D024 00059E24  3C A0 80 2E */	lis r5, lbl_802DBE30@ha
/* 8005D028 00059E28  7C 64 1B 78 */	mr r4, r3
/* 8005D02C 00059E2C  38 65 BE 30 */	addi r3, r5, lbl_802DBE30@l
/* 8005D030 00059E30  48 00 33 29 */	bl push_front__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_FRCQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data
/* 8005D034 00059E34  4B FF FC 3D */	bl get_missle_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005D038 00059E38  7C 64 1B 78 */	mr r4, r3
/* 8005D03C 00059E3C  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 8005D040 00059E40  38 61 00 08 */	addi r3, r1, 8
/* 8005D044 00059E44  38 84 00 30 */	addi r4, r4, 0x30
/* 8005D048 00059E48  48 00 00 45 */	bl __ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_dataFRC5xVec3f
/* 8005D04C 00059E4C  3C A0 80 2E */	lis r5, lbl_802DBE30@ha
/* 8005D050 00059E50  7C 64 1B 78 */	mr r4, r3
/* 8005D054 00059E54  38 65 BE 30 */	addi r3, r5, lbl_802DBE30@l
/* 8005D058 00059E58  48 00 33 01 */	bl push_front__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_FRCQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data
/* 8005D05C 00059E5C  4B FF FC 15 */	bl get_missle_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005D060 00059E60  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005D064 00059E64  38 83 00 30 */	addi r4, r3, 0x30
/* 8005D068 00059E68  38 60 00 02 */	li r3, 2
/* 8005D06C 00059E6C  4B FF A3 99 */	bl play_sound__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FifPC5xVec3
/* 8005D070 00059E70  38 60 02 03 */	li r3, 0x203
/* 8005D074 00059E74  4B FF AB 7D */	bl signal_event__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FUi
/* 8005D078 00059E78  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8005D07C 00059E7C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8005D080 00059E80  7C 08 03 A6 */	mtlr r0
/* 8005D084 00059E84  38 21 00 30 */	addi r1, r1, 0x30
/* 8005D088 00059E88  4E 80 00 20 */	blr 

/* __ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_dataFRC5xVec3f */
__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_dataFRC5xVec3f:
/* 8005D08C 00059E8C  80 04 00 00 */	lwz r0, 0(r4)
/* 8005D090 00059E90  80 A4 00 04 */	lwz r5, 4(r4)
/* 8005D094 00059E94  90 03 00 00 */	stw r0, 0(r3)
/* 8005D098 00059E98  80 04 00 08 */	lwz r0, 8(r4)
/* 8005D09C 00059E9C  90 A3 00 04 */	stw r5, 4(r3)
/* 8005D0A0 00059EA0  90 03 00 08 */	stw r0, 8(r3)
/* 8005D0A4 00059EA4  D0 23 00 0C */	stfs f1, 0xc(r3)
/* 8005D0A8 00059EA8  4E 80 00 20 */	blr 

stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFv:
/* 8005D0AC 00059EAC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8005D0B0 00059EB0  7C 08 02 A6 */	mflr r0
/* 8005D0B4 00059EB4  3C 60 80 29 */	lis r3, lbl_80290000@ha
/* 8005D0B8 00059EB8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005D0BC 00059EBC  84 03 C2 A4 */	lwzu r0, -0x3d5c(r3)
/* 8005D0C0 00059EC0  54 00 07 76 */	rlwinm r0, r0, 0, 0x1d, 0x1b
/* 8005D0C4 00059EC4  90 03 00 00 */	stw r0, lbl_80290000@l(r3)
/* 8005D0C8 00059EC8  4B FF A4 B1 */	bl hide_missle__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005D0CC 00059ECC  4B FF AB FD */	bl stop_trail__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005D0D0 00059ED0  38 60 00 02 */	li r3, 2
/* 8005D0D4 00059ED4  38 80 00 00 */	li r4, 0
/* 8005D0D8 00059ED8  4B FF A1 AD */	bl stop_sound__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FiUi
/* 8005D0DC 00059EDC  38 60 02 04 */	li r3, 0x204
/* 8005D0E0 00059EE0  4B FF AB 11 */	bl signal_event__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FUi
/* 8005D0E4 00059EE4  C0 22 89 BC */	lfs f1, lbl_803CD33C-_SDA2_BASE_(r2)
/* 8005D0E8 00059EE8  38 61 00 14 */	addi r3, r1, 0x14
/* 8005D0EC 00059EEC  4B FB F7 8D */	bl __as__5xVec3Ff
/* 8005D0F0 00059EF0  C0 22 89 B8 */	lfs f1, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005D0F4 00059EF4  38 61 00 08 */	addi r3, r1, 8
/* 8005D0F8 00059EF8  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 8005D0FC 00059EFC  48 00 2E DD */	bl create__5xVec3Ff
/* 8005D100 00059F00  3C 60 80 3C */	lis r3, globals@ha
/* 8005D104 00059F04  38 81 00 14 */	addi r4, r1, 0x14
/* 8005D108 00059F08  38 63 05 58 */	addi r3, r3, globals@l
/* 8005D10C 00059F0C  38 A1 00 08 */	addi r5, r1, 8
/* 8005D110 00059F10  80 63 1F C0 */	lwz r3, 0x1fc0(r3)
/* 8005D114 00059F14  4B FF A8 B5 */	bl notify_triggers__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FR6xSceneRC7xSphereRC5xVec3
/* 8005D118 00059F18  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8005D11C 00059F1C  7C 08 03 A6 */	mtlr r0
/* 8005D120 00059F20  38 21 00 30 */	addi r1, r1, 0x30
/* 8005D124 00059F24  4E 80 00 20 */	blr 

abort__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFv:
/* 8005D128 00059F28  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8005D12C 00059F2C  7C 08 02 A6 */	mflr r0
/* 8005D130 00059F30  38 60 00 02 */	li r3, 2
/* 8005D134 00059F34  38 80 00 00 */	li r4, 0
/* 8005D138 00059F38  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005D13C 00059F3C  4B FF A1 49 */	bl stop_sound__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FiUi
/* 8005D140 00059F40  38 60 02 04 */	li r3, 0x204
/* 8005D144 00059F44  4B FF AA AD */	bl signal_event__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FUi
/* 8005D148 00059F48  C0 22 89 BC */	lfs f1, lbl_803CD33C-_SDA2_BASE_(r2)
/* 8005D14C 00059F4C  38 61 00 14 */	addi r3, r1, 0x14
/* 8005D150 00059F50  4B FB F7 29 */	bl __as__5xVec3Ff
/* 8005D154 00059F54  C0 22 89 B8 */	lfs f1, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005D158 00059F58  38 61 00 08 */	addi r3, r1, 8
/* 8005D15C 00059F5C  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 8005D160 00059F60  48 00 2E 79 */	bl create__5xVec3Ff
/* 8005D164 00059F64  3C 60 80 3C */	lis r3, globals@ha
/* 8005D168 00059F68  38 81 00 14 */	addi r4, r1, 0x14
/* 8005D16C 00059F6C  38 63 05 58 */	addi r3, r3, globals@l
/* 8005D170 00059F70  38 A1 00 08 */	addi r5, r1, 8
/* 8005D174 00059F74  80 63 1F C0 */	lwz r3, 0x1fc0(r3)
/* 8005D178 00059F78  4B FF A8 51 */	bl notify_triggers__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FR6xSceneRC7xSphereRC5xVec3
/* 8005D17C 00059F7C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8005D180 00059F80  7C 08 03 A6 */	mtlr r0
/* 8005D184 00059F84  38 21 00 30 */	addi r1, r1, 0x30
/* 8005D188 00059F88  4E 80 00 20 */	blr 

update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFf:
/* 8005D18C 00059F8C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8005D190 00059F90  7C 08 02 A6 */	mflr r0
/* 8005D194 00059F94  90 01 00 54 */	stw r0, 0x54(r1)
/* 8005D198 00059F98  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8005D19C 00059F9C  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8005D1A0 00059FA0  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8005D1A4 00059FA4  7C 7F 1B 78 */	mr r31, r3
/* 8005D1A8 00059FA8  FF E0 08 90 */	fmr f31, f1
/* 8005D1AC 00059FAC  C0 03 00 08 */	lfs f0, 8(r3)
/* 8005D1B0 00059FB0  EC 00 F8 28 */	fsubs f0, f0, f31
/* 8005D1B4 00059FB4  D0 03 00 08 */	stfs f0, 8(r3)
/* 8005D1B8 00059FB8  C0 43 00 08 */	lfs f2, 8(r3)
/* 8005D1BC 00059FBC  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005D1C0 00059FC0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8005D1C4 00059FC4  4C 40 13 82 */	cror 2, 0, 2
/* 8005D1C8 00059FC8  41 82 00 1C */	beq lbl_8005D1E4
/* 8005D1CC 00059FCC  3C 80 80 3C */	lis r4, globals@ha
/* 8005D1D0 00059FD0  38 84 05 58 */	addi r4, r4, globals@l
/* 8005D1D4 00059FD4  80 84 03 1C */	lwz r4, 0x31c(r4)
/* 8005D1D8 00059FD8  80 04 00 30 */	lwz r0, 0x30(r4)
/* 8005D1DC 00059FDC  54 00 05 EF */	rlwinm. r0, r0, 0, 0x17, 0x17
/* 8005D1E0 00059FE0  41 82 00 44 */	beq lbl_8005D224
lbl_8005D1E4:
/* 8005D1E4 00059FE4  4B FF FA 8D */	bl get_missle_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005D1E8 00059FE8  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 8005D1EC 00059FEC  7C 65 1B 78 */	mr r5, r3
/* 8005D1F0 00059FF0  38 64 C2 A4 */	addi r3, r4, shared__13cruise_bubble@l
/* 8005D1F4 00059FF4  38 63 00 50 */	addi r3, r3, 0x50
/* 8005D1F8 00059FF8  38 85 00 30 */	addi r4, r5, 0x30
/* 8005D1FC 00059FFC  4B FA E0 69 */	bl __as__5xVec3FRC5xVec3
/* 8005D200 0005A000  4B FF FA 71 */	bl get_missle_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005D204 0005A004  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 8005D208 0005A008  7C 65 1B 78 */	mr r5, r3
/* 8005D20C 0005A00C  38 64 C2 A4 */	addi r3, r4, shared__13cruise_bubble@l
/* 8005D210 0005A010  38 63 00 5C */	addi r3, r3, 0x5c
/* 8005D214 0005A014  38 85 00 20 */	addi r4, r5, 0x20
/* 8005D218 0005A018  4B FA E0 4D */	bl __as__5xVec3FRC5xVec3
/* 8005D21C 0005A01C  38 60 00 06 */	li r3, 6
/* 8005D220 0005A020  48 00 01 14 */	b lbl_8005D334
lbl_8005D224:
/* 8005D224 0005A024  48 00 07 75 */	bl update_turn__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFf
/* 8005D228 0005A028  FC 20 F8 90 */	fmr f1, f31
/* 8005D22C 0005A02C  7F E3 FB 78 */	mr r3, r31
/* 8005D230 0005A030  48 00 06 F9 */	bl update_move__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFf
/* 8005D234 0005A034  3C 60 80 2E */	lis r3, lbl_802DBE30@ha
/* 8005D238 0005A038  38 63 BE 30 */	addi r3, r3, lbl_802DBE30@l
/* 8005D23C 0005A03C  48 00 32 6D */	bl full__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFv
/* 8005D240 0005A040  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8005D244 0005A044  41 82 00 10 */	beq lbl_8005D254
/* 8005D248 0005A048  3C 60 80 2E */	lis r3, lbl_802DBE30@ha
/* 8005D24C 0005A04C  38 63 BE 30 */	addi r3, r3, lbl_802DBE30@l
/* 8005D250 0005A050  48 00 32 45 */	bl pop_back__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fv
lbl_8005D254:
/* 8005D254 0005A054  7F E3 FB 78 */	mr r3, r31
/* 8005D258 0005A058  48 00 03 15 */	bl collide__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFv
/* 8005D25C 0005A05C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8005D260 0005A060  40 82 00 14 */	bne lbl_8005D274
/* 8005D264 0005A064  7F E3 FB 78 */	mr r3, r31
/* 8005D268 0005A068  48 00 01 E1 */	bl collide_hazards__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFv
/* 8005D26C 0005A06C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8005D270 0005A070  41 82 00 34 */	beq lbl_8005D2A4
lbl_8005D274:
/* 8005D274 0005A074  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005D278 0005A078  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 8005D27C 0005A07C  38 83 C2 A4 */	addi r4, r3, shared__13cruise_bubble@l
/* 8005D280 0005A080  38 61 00 18 */	addi r3, r1, 0x18
/* 8005D284 0005A084  38 84 00 50 */	addi r4, r4, 0x50
/* 8005D288 0005A088  4B FF FE 05 */	bl __ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_dataFRC5xVec3f
/* 8005D28C 0005A08C  3C A0 80 2E */	lis r5, lbl_802DBE30@ha
/* 8005D290 0005A090  7C 64 1B 78 */	mr r4, r3
/* 8005D294 0005A094  38 65 BE 30 */	addi r3, r5, lbl_802DBE30@l
/* 8005D298 0005A098  48 00 30 C1 */	bl push_front__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_FRCQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data
/* 8005D29C 0005A09C  38 60 00 06 */	li r3, 6
/* 8005D2A0 0005A0A0  48 00 00 94 */	b lbl_8005D334
lbl_8005D2A4:
/* 8005D2A4 0005A0A4  4B FF F9 CD */	bl get_missle_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005D2A8 0005A0A8  7C 64 1B 78 */	mr r4, r3
/* 8005D2AC 0005A0AC  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 8005D2B0 0005A0B0  38 61 00 08 */	addi r3, r1, 8
/* 8005D2B4 0005A0B4  38 84 00 30 */	addi r4, r4, 0x30
/* 8005D2B8 0005A0B8  4B FF FD D5 */	bl __ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_dataFRC5xVec3f
/* 8005D2BC 0005A0BC  3C A0 80 2E */	lis r5, lbl_802DBE30@ha
/* 8005D2C0 0005A0C0  7C 64 1B 78 */	mr r4, r3
/* 8005D2C4 0005A0C4  38 65 BE 30 */	addi r3, r5, lbl_802DBE30@l
/* 8005D2C8 0005A0C8  48 00 30 91 */	bl push_front__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_FRCQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data
/* 8005D2CC 0005A0CC  4B FF F9 A5 */	bl get_missle_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005D2D0 0005A0D0  7C 64 1B 78 */	mr r4, r3
/* 8005D2D4 0005A0D4  38 7F 00 2C */	addi r3, r31, 0x2c
/* 8005D2D8 0005A0D8  38 84 00 30 */	addi r4, r4, 0x30
/* 8005D2DC 0005A0DC  4B FA DF 89 */	bl __as__5xVec3FRC5xVec3
/* 8005D2E0 0005A0E0  FC 20 F8 90 */	fmr f1, f31
/* 8005D2E4 0005A0E4  7F E3 FB 78 */	mr r3, r31
/* 8005D2E8 0005A0E8  48 00 00 ED */	bl update_engine_sound__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFf
/* 8005D2EC 0005A0EC  FC 20 F8 90 */	fmr f1, f31
/* 8005D2F0 0005A0F0  7F E3 FB 78 */	mr r3, r31
/* 8005D2F4 0005A0F4  48 00 00 5D */	bl update_flash__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFf
/* 8005D2F8 0005A0F8  4B FF F9 79 */	bl get_missle_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005D2FC 0005A0FC  7C 7F 1B 78 */	mr r31, r3
/* 8005D300 0005A100  38 61 00 28 */	addi r3, r1, 0x28
/* 8005D304 0005A104  38 9F 00 30 */	addi r4, r31, 0x30
/* 8005D308 0005A108  4B FA DF 5D */	bl __as__5xVec3FRC5xVec3
/* 8005D30C 0005A10C  80 AD 81 80 */	lwz r5, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005D310 0005A110  3C 60 80 3C */	lis r3, globals@ha
/* 8005D314 0005A114  38 63 05 58 */	addi r3, r3, globals@l
/* 8005D318 0005A118  38 81 00 28 */	addi r4, r1, 0x28
/* 8005D31C 0005A11C  C0 05 00 18 */	lfs f0, 0x18(r5)
/* 8005D320 0005A120  38 BF 00 20 */	addi r5, r31, 0x20
/* 8005D324 0005A124  80 63 1F C0 */	lwz r3, 0x1fc0(r3)
/* 8005D328 0005A128  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8005D32C 0005A12C  4B FF A6 9D */	bl notify_triggers__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FR6xSceneRC7xSphereRC5xVec3
/* 8005D330 0005A130  38 60 00 05 */	li r3, 5
lbl_8005D334:
/* 8005D334 0005A134  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8005D338 0005A138  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8005D33C 0005A13C  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8005D340 0005A140  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8005D344 0005A144  7C 08 03 A6 */	mtlr r0
/* 8005D348 0005A148  38 21 00 50 */	addi r1, r1, 0x50
/* 8005D34C 0005A14C  4E 80 00 20 */	blr 

/* update_flash__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFf */
update_flash__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFf:
/* 8005D350 0005A150  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005D354 0005A154  7C 08 02 A6 */	mflr r0
/* 8005D358 0005A158  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005D35C 0005A15C  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8005D360 0005A160  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8005D364 0005A164  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005D368 0005A168  7C 7F 1B 78 */	mr r31, r3
/* 8005D36C 0005A16C  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 8005D370 0005A170  EC 00 08 2A */	fadds f0, f0, f1
/* 8005D374 0005A174  D0 03 00 38 */	stfs f0, 0x38(r3)
/* 8005D378 0005A178  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005D37C 0005A17C  C0 3F 00 08 */	lfs f1, 8(r31)
/* 8005D380 0005A180  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 8005D384 0005A184  C0 43 00 4C */	lfs f2, 0x4c(r3)
/* 8005D388 0005A188  EC 21 00 24 */	fdivs f1, f1, f0
/* 8005D38C 0005A18C  C0 1F 00 38 */	lfs f0, 0x38(r31)
/* 8005D390 0005A190  EF E2 00 72 */	fmuls f31, f2, f1
/* 8005D394 0005A194  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 8005D398 0005A198  40 81 00 20 */	ble lbl_8005D3B8
/* 8005D39C 0005A19C  4B FF C6 2D */	bl flash_hud__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005D3A0 0005A1A0  C0 1F 00 38 */	lfs f0, 0x38(r31)
/* 8005D3A4 0005A1A4  EC 20 F8 24 */	fdivs f1, f0, f31
/* 8005D3A8 0005A1A8  4B FA 97 D1 */	bl floorf__3stdFf
/* 8005D3AC 0005A1AC  C0 1F 00 38 */	lfs f0, 0x38(r31)
/* 8005D3B0 0005A1B0  EC 01 07 FC */	fnmsubs f0, f1, f31, f0
/* 8005D3B4 0005A1B4  D0 1F 00 38 */	stfs f0, 0x38(r31)
lbl_8005D3B8:
/* 8005D3B8 0005A1B8  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8005D3BC 0005A1BC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005D3C0 0005A1C0  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8005D3C4 0005A1C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005D3C8 0005A1C8  7C 08 03 A6 */	mtlr r0
/* 8005D3CC 0005A1CC  38 21 00 20 */	addi r1, r1, 0x20
/* 8005D3D0 0005A1D0  4E 80 00 20 */	blr 

/* update_engine_sound__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFf */
update_engine_sound__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFf:
/* 8005D3D4 0005A1D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005D3D8 0005A1D8  7C 08 02 A6 */	mflr r0
/* 8005D3DC 0005A1DC  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 8005D3E0 0005A1E0  7C 66 1B 78 */	mr r6, r3
/* 8005D3E4 0005A1E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005D3E8 0005A1E8  38 84 C2 A4 */	addi r4, r4, shared__13cruise_bubble@l
/* 8005D3EC 0005A1EC  38 60 00 02 */	li r3, 2
/* 8005D3F0 0005A1F0  C0 24 00 40 */	lfs f1, 0x40(r4)
/* 8005D3F4 0005A1F4  C0 04 00 44 */	lfs f0, 0x44(r4)
/* 8005D3F8 0005A1F8  38 80 00 00 */	li r4, 0
/* 8005D3FC 0005A1FC  FC 60 0A 10 */	fabs f3, f1
/* 8005D400 0005A200  80 AD 81 80 */	lwz r5, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005D404 0005A204  FC 00 02 10 */	fabs f0, f0
/* 8005D408 0005A208  C0 26 00 28 */	lfs f1, 0x28(r6)
/* 8005D40C 0005A20C  C0 85 00 44 */	lfs f4, 0x44(r5)
/* 8005D410 0005A210  FC 60 18 18 */	frsp f3, f3
/* 8005D414 0005A214  FC 00 00 18 */	frsp f0, f0
/* 8005D418 0005A218  C0 45 00 48 */	lfs f2, 0x48(r5)
/* 8005D41C 0005A21C  EC 03 00 2A */	fadds f0, f3, f0
/* 8005D420 0005A220  EC 04 00 32 */	fmuls f0, f4, f0
/* 8005D424 0005A224  EC 00 08 28 */	fsubs f0, f0, f1
/* 8005D428 0005A228  EC 02 08 3A */	fmadds f0, f2, f0, f1
/* 8005D42C 0005A22C  D0 06 00 28 */	stfs f0, 0x28(r6)
/* 8005D430 0005A230  C0 26 00 28 */	lfs f1, 0x28(r6)
/* 8005D434 0005A234  4B FF A0 55 */	bl set_pitch__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FifUi
/* 8005D438 0005A238  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005D43C 0005A23C  7C 08 03 A6 */	mtlr r0
/* 8005D440 0005A240  38 21 00 10 */	addi r1, r1, 0x10
/* 8005D444 0005A244  4E 80 00 20 */	blr 

/* collide_hazards__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFv */
collide_hazards__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFv:
/* 8005D448 0005A248  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005D44C 0005A24C  7C 08 02 A6 */	mflr r0
/* 8005D450 0005A250  3C 60 80 06 */	lis r3, hazard_check__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFR9NPCHazardPv@ha
/* 8005D454 0005A254  3C A0 00 01 */	lis r5, 0x0000A000@ha
/* 8005D458 0005A258  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005D45C 0005A25C  38 00 00 00 */	li r0, 0
/* 8005D460 0005A260  38 63 D4 C8 */	addi r3, r3, hazard_check__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFR9NPCHazardPv@l
/* 8005D464 0005A264  38 81 00 08 */	addi r4, r1, 8
/* 8005D468 0005A268  90 01 00 08 */	stw r0, 8(r1)
/* 8005D46C 0005A26C  38 A5 A0 00 */	addi r5, r5, 0x0000A000@l
/* 8005D470 0005A270  48 12 AD A9 */	bl HAZ_Iterate__FPFR9NPCHazardPv_bPvi
/* 8005D474 0005A274  80 61 00 08 */	lwz r3, 8(r1)
/* 8005D478 0005A278  28 03 00 00 */	cmplwi r3, 0
/* 8005D47C 0005A27C  40 82 00 0C */	bne lbl_8005D488
/* 8005D480 0005A280  38 60 00 00 */	li r3, 0
/* 8005D484 0005A284  48 00 00 34 */	b lbl_8005D4B8
lbl_8005D488:
/* 8005D488 0005A288  80 03 00 04 */	lwz r0, 4(r3)
/* 8005D48C 0005A28C  54 00 02 95 */	rlwinm. r0, r0, 0, 0xa, 0xa
/* 8005D490 0005A290  41 82 00 08 */	beq lbl_8005D498
/* 8005D494 0005A294  48 00 31 6D */	bl MarkForRecycle__9NPCHazardFv
lbl_8005D498:
/* 8005D498 0005A298  4B FF F7 D9 */	bl get_missle_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005D49C 0005A29C  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 8005D4A0 0005A2A0  7C 65 1B 78 */	mr r5, r3
/* 8005D4A4 0005A2A4  38 64 C2 A4 */	addi r3, r4, shared__13cruise_bubble@l
/* 8005D4A8 0005A2A8  38 63 00 50 */	addi r3, r3, 0x50
/* 8005D4AC 0005A2AC  38 85 00 30 */	addi r4, r5, 0x30
/* 8005D4B0 0005A2B0  4B FA DD B5 */	bl __as__5xVec3FRC5xVec3
/* 8005D4B4 0005A2B4  38 60 00 01 */	li r3, 1
lbl_8005D4B8:
/* 8005D4B8 0005A2B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005D4BC 0005A2BC  7C 08 03 A6 */	mtlr r0
/* 8005D4C0 0005A2C0  38 21 00 10 */	addi r1, r1, 0x10
/* 8005D4C4 0005A2C4  4E 80 00 20 */	blr 

hazard_check__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFR9NPCHazardPv:
/* 8005D4C8 0005A2C8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8005D4CC 0005A2CC  7C 08 02 A6 */	mflr r0
/* 8005D4D0 0005A2D0  90 01 00 44 */	stw r0, 0x44(r1)
/* 8005D4D4 0005A2D4  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8005D4D8 0005A2D8  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8005D4DC 0005A2DC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8005D4E0 0005A2E0  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8005D4E4 0005A2E4  7C 7E 1B 78 */	mr r30, r3
/* 8005D4E8 0005A2E8  7C 9F 23 78 */	mr r31, r4
/* 8005D4EC 0005A2EC  4B FF F7 85 */	bl get_missle_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005D4F0 0005A2F0  38 A3 00 30 */	addi r5, r3, 0x30
/* 8005D4F4 0005A2F4  38 61 00 08 */	addi r3, r1, 8
/* 8005D4F8 0005A2F8  38 9E 00 08 */	addi r4, r30, 8
/* 8005D4FC 0005A2FC  4B FA DC D1 */	bl __mi__5xVec3CFRC5xVec3
/* 8005D500 0005A300  80 8D 81 80 */	lwz r4, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005D504 0005A304  38 61 00 14 */	addi r3, r1, 0x14
/* 8005D508 0005A308  80 A1 00 08 */	lwz r5, 8(r1)
/* 8005D50C 0005A30C  C0 24 00 18 */	lfs f1, 0x18(r4)
/* 8005D510 0005A310  C0 1E 00 68 */	lfs f0, 0x68(r30)
/* 8005D514 0005A314  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8005D518 0005A318  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8005D51C 0005A31C  EF E1 00 2A */	fadds f31, f1, f0
/* 8005D520 0005A320  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8005D524 0005A324  90 81 00 18 */	stw r4, 0x18(r1)
/* 8005D528 0005A328  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8005D52C 0005A32C  4B FA DB D1 */	bl length2__5xVec3CFv
/* 8005D530 0005A330  EC 1F 07 F2 */	fmuls f0, f31, f31
/* 8005D534 0005A334  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005D538 0005A338  40 80 00 10 */	bge lbl_8005D548
/* 8005D53C 0005A33C  93 DF 00 00 */	stw r30, 0(r31)
/* 8005D540 0005A340  38 60 00 00 */	li r3, 0
/* 8005D544 0005A344  48 00 00 08 */	b lbl_8005D54C
lbl_8005D548:
/* 8005D548 0005A348  38 60 00 01 */	li r3, 1
lbl_8005D54C:
/* 8005D54C 0005A34C  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8005D550 0005A350  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8005D554 0005A354  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8005D558 0005A358  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8005D55C 0005A35C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8005D560 0005A360  7C 08 03 A6 */	mtlr r0
/* 8005D564 0005A364  38 21 00 40 */	addi r1, r1, 0x40
/* 8005D568 0005A368  4E 80 00 20 */	blr 

/* collide__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFv */
collide__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFv:
/* 8005D56C 0005A36C  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8005D570 0005A370  7C 08 02 A6 */	mflr r0
/* 8005D574 0005A374  90 01 00 74 */	stw r0, 0x74(r1)
/* 8005D578 0005A378  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8005D57C 0005A37C  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 8005D580 0005A380  BF 61 00 4C */	stmw r27, 0x4c(r1)
/* 8005D584 0005A384  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 8005D588 0005A388  7C 7C 1B 78 */	mr r28, r3
/* 8005D58C 0005A38C  38 64 C2 A4 */	addi r3, r4, shared__13cruise_bubble@l
/* 8005D590 0005A390  3B A0 00 00 */	li r29, 0
/* 8005D594 0005A394  3B E3 00 5C */	addi r31, r3, 0x5c
/* 8005D598 0005A398  3B C3 00 50 */	addi r30, r3, 0x50
lbl_8005D59C:
/* 8005D59C 0005A39C  7F 83 E3 78 */	mr r3, r28
/* 8005D5A0 0005A3A0  7F C4 F3 78 */	mr r4, r30
/* 8005D5A4 0005A3A4  7F E5 FB 78 */	mr r5, r31
/* 8005D5A8 0005A3A8  38 C1 00 3C */	addi r6, r1, 0x3c
/* 8005D5AC 0005A3AC  38 E1 00 08 */	addi r7, r1, 8
/* 8005D5B0 0005A3B0  48 00 02 25 */	bl hit_test__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyCFR5xVec3R5xVec3R5xVec3RP4xEnt
/* 8005D5B4 0005A3B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8005D5B8 0005A3B8  40 82 00 0C */	bne lbl_8005D5C4
/* 8005D5BC 0005A3BC  38 60 00 00 */	li r3, 0
/* 8005D5C0 0005A3C0  48 00 01 F8 */	b lbl_8005D7B8
lbl_8005D5C4:
/* 8005D5C4 0005A3C4  80 61 00 08 */	lwz r3, 8(r1)
/* 8005D5C8 0005A3C8  4B FF A3 21 */	bl can_damage__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FP4xEnt
/* 8005D5CC 0005A3CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8005D5D0 0005A3D0  41 82 00 30 */	beq lbl_8005D600
/* 8005D5D4 0005A3D4  4B FF F6 9D */	bl get_missle_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005D5D8 0005A3D8  7C 65 1B 78 */	mr r5, r3
/* 8005D5DC 0005A3DC  80 61 00 08 */	lwz r3, 8(r1)
/* 8005D5E0 0005A3E0  C0 22 89 B8 */	lfs f1, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005D5E4 0005A3E4  7F C4 F3 78 */	mr r4, r30
/* 8005D5E8 0005A3E8  7F E6 FB 78 */	mr r6, r31
/* 8005D5EC 0005A3EC  38 A5 00 20 */	addi r5, r5, 0x20
/* 8005D5F0 0005A3F0  38 E0 00 00 */	li r7, 0
/* 8005D5F4 0005A3F4  4B FF A0 91 */	bl damage_entity__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FR4xEntRC5xVec3RC5xVec3RC5xVec3fb
/* 8005D5F8 0005A3F8  38 60 00 01 */	li r3, 1
/* 8005D5FC 0005A3FC  48 00 01 BC */	b lbl_8005D7B8
lbl_8005D600:
/* 8005D600 0005A400  4B FF F6 71 */	bl get_missle_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005D604 0005A404  7C 7B 1B 78 */	mr r27, r3
/* 8005D608 0005A408  7F E4 FB 78 */	mr r4, r31
/* 8005D60C 0005A40C  38 7B 00 20 */	addi r3, r27, 0x20
/* 8005D610 0005A410  4B FB 7E FD */	bl dot__5xVec3CFRC5xVec3
/* 8005D614 0005A414  4B FB 07 65 */	bl xasin__Ff
/* 8005D618 0005A418  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005D61C 0005A41C  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 8005D620 0005A420  FC 00 00 50 */	fneg f0, f0
/* 8005D624 0005A424  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005D628 0005A428  40 80 00 0C */	bge lbl_8005D634
/* 8005D62C 0005A42C  38 60 00 01 */	li r3, 1
/* 8005D630 0005A430  48 00 01 88 */	b lbl_8005D7B8
lbl_8005D634:
/* 8005D634 0005A434  38 7B 00 30 */	addi r3, r27, 0x30
/* 8005D638 0005A438  38 81 00 3C */	addi r4, r1, 0x3c
/* 8005D63C 0005A43C  4B FB 7E 09 */	bl __apl__5xVec3FRC5xVec3
/* 8005D640 0005A440  38 61 00 18 */	addi r3, r1, 0x18
/* 8005D644 0005A444  38 9B 00 30 */	addi r4, r27, 0x30
/* 8005D648 0005A448  38 BC 00 2C */	addi r5, r28, 0x2c
/* 8005D64C 0005A44C  4B FA DB 81 */	bl __mi__5xVec3CFRC5xVec3
/* 8005D650 0005A450  80 A1 00 18 */	lwz r5, 0x18(r1)
/* 8005D654 0005A454  38 61 00 30 */	addi r3, r1, 0x30
/* 8005D658 0005A458  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 8005D65C 0005A45C  80 01 00 20 */	lwz r0, 0x20(r1)
/* 8005D660 0005A460  90 A1 00 30 */	stw r5, 0x30(r1)
/* 8005D664 0005A464  90 81 00 34 */	stw r4, 0x34(r1)
/* 8005D668 0005A468  90 01 00 38 */	stw r0, 0x38(r1)
/* 8005D66C 0005A46C  4B FA DA 91 */	bl length2__5xVec3CFv
/* 8005D670 0005A470  C0 02 8A B0 */	lfs f0, lbl_803CD430-_SDA2_BASE_(r2)
/* 8005D674 0005A474  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005D678 0005A478  40 80 00 0C */	bge lbl_8005D684
/* 8005D67C 0005A47C  38 60 00 00 */	li r3, 0
/* 8005D680 0005A480  48 00 01 38 */	b lbl_8005D7B8
lbl_8005D684:
/* 8005D684 0005A484  4B FA D1 79 */	bl xsqrt__Ff
/* 8005D688 0005A488  C0 02 89 C0 */	lfs f0, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005D68C 0005A48C  38 61 00 0C */	addi r3, r1, 0xc
/* 8005D690 0005A490  38 81 00 30 */	addi r4, r1, 0x30
/* 8005D694 0005A494  EC 20 08 24 */	fdivs f1, f0, f1
/* 8005D698 0005A498  4B FA DA 89 */	bl __ml__5xVec3CFf
/* 8005D69C 0005A49C  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8005D6A0 0005A4A0  80 61 00 0C */	lwz r3, 0xc(r1)
/* 8005D6A4 0005A4A4  90 01 00 28 */	stw r0, 0x28(r1)
/* 8005D6A8 0005A4A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005D6AC 0005A4AC  90 61 00 24 */	stw r3, 0x24(r1)
/* 8005D6B0 0005A4B0  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 8005D6B4 0005A4B4  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8005D6B8 0005A4B8  4B FB 06 C1 */	bl xasin__Ff
/* 8005D6BC 0005A4BC  FF E0 08 50 */	fneg f31, f1
/* 8005D6C0 0005A4C0  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005D6C4 0005A4C4  C0 22 8A 94 */	lfs f1, lbl_803CD414-_SDA2_BASE_(r2)
/* 8005D6C8 0005A4C8  C0 03 00 60 */	lfs f0, 0x60(r3)
/* 8005D6CC 0005A4CC  FC 40 FA 10 */	fabs f2, f31
/* 8005D6D0 0005A4D0  EC 01 00 32 */	fmuls f0, f1, f0
/* 8005D6D4 0005A4D4  FC 20 10 18 */	frsp f1, f2
/* 8005D6D8 0005A4D8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005D6DC 0005A4DC  40 81 00 0C */	ble lbl_8005D6E8
/* 8005D6E0 0005A4E0  38 60 00 01 */	li r3, 1
/* 8005D6E4 0005A4E4  48 00 00 D4 */	b lbl_8005D7B8
lbl_8005D6E8:
/* 8005D6E8 0005A4E8  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 8005D6EC 0005A4EC  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 8005D6F0 0005A4F0  4B FA 89 81 */	bl xatan2__Fff
/* 8005D6F4 0005A4F4  C0 1C 00 10 */	lfs f0, 0x10(r28)
/* 8005D6F8 0005A4F8  C0 42 8A E4 */	lfs f2, lbl_803CD464-_SDA2_BASE_(r2)
/* 8005D6FC 0005A4FC  EC 01 00 28 */	fsubs f0, f1, f0
/* 8005D700 0005A500  EC 22 00 2A */	fadds f1, f2, f0
/* 8005D704 0005A504  4B FB 10 F1 */	bl xrmod__Ff
/* 8005D708 0005A508  C0 02 8A E4 */	lfs f0, lbl_803CD464-_SDA2_BASE_(r2)
/* 8005D70C 0005A50C  7F 63 DB 78 */	mr r3, r27
/* 8005D710 0005A510  80 AD 81 80 */	lwz r5, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005D714 0005A514  38 9C 00 10 */	addi r4, r28, 0x10
/* 8005D718 0005A518  EC 41 00 28 */	fsubs f2, f1, f0
/* 8005D71C 0005A51C  C0 1C 00 10 */	lfs f0, 0x10(r28)
/* 8005D720 0005A520  C0 25 00 20 */	lfs f1, 0x20(r5)
/* 8005D724 0005A524  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8005D728 0005A528  D0 1C 00 10 */	stfs f0, 0x10(r28)
/* 8005D72C 0005A52C  C0 3C 00 14 */	lfs f1, 0x14(r28)
/* 8005D730 0005A530  80 AD 81 80 */	lwz r5, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005D734 0005A534  EC 1F 08 28 */	fsubs f0, f31, f1
/* 8005D738 0005A538  C0 45 00 20 */	lfs f2, 0x20(r5)
/* 8005D73C 0005A53C  EC 02 08 3A */	fmadds f0, f2, f0, f1
/* 8005D740 0005A540  D0 1C 00 14 */	stfs f0, 0x14(r28)
/* 8005D744 0005A544  4B FD 4A 61 */	bl xMat3x3Euler__FP7xMat3x3PC5xVec3
/* 8005D748 0005A548  38 61 00 3C */	addi r3, r1, 0x3c
/* 8005D74C 0005A54C  4B FA D9 B1 */	bl length2__5xVec3CFv
/* 8005D750 0005A550  C0 02 8A F0 */	lfs f0, lbl_803CD470-_SDA2_BASE_(r2)
/* 8005D754 0005A554  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005D758 0005A558  40 80 00 0C */	bge lbl_8005D764
/* 8005D75C 0005A55C  38 60 00 00 */	li r3, 0
/* 8005D760 0005A560  48 00 00 58 */	b lbl_8005D7B8
lbl_8005D764:
/* 8005D764 0005A564  80 8D 81 80 */	lwz r4, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005D768 0005A568  3B BD 00 01 */	addi r29, r29, 1
/* 8005D76C 0005A56C  80 04 00 24 */	lwz r0, 0x24(r4)
/* 8005D770 0005A570  7C 1D 00 00 */	cmpw r29, r0
/* 8005D774 0005A574  41 80 FE 28 */	blt lbl_8005D59C
/* 8005D778 0005A578  C0 22 8A 30 */	lfs f1, lbl_803CD3B0-_SDA2_BASE_(r2)
/* 8005D77C 0005A57C  38 61 00 3C */	addi r3, r1, 0x3c
/* 8005D780 0005A580  C0 04 00 18 */	lfs f0, 0x18(r4)
/* 8005D784 0005A584  EF E1 00 32 */	fmuls f31, f1, f0
/* 8005D788 0005A588  4B FA D9 75 */	bl length2__5xVec3CFv
/* 8005D78C 0005A58C  EC 1F 07 F2 */	fmuls f0, f31, f31
/* 8005D790 0005A590  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005D794 0005A594  40 80 00 0C */	bge lbl_8005D7A0
/* 8005D798 0005A598  38 60 00 00 */	li r3, 0
/* 8005D79C 0005A59C  48 00 00 1C */	b lbl_8005D7B8
lbl_8005D7A0:
/* 8005D7A0 0005A5A0  7F 83 E3 78 */	mr r3, r28
/* 8005D7A4 0005A5A4  7F C4 F3 78 */	mr r4, r30
/* 8005D7A8 0005A5A8  7F E5 FB 78 */	mr r5, r31
/* 8005D7AC 0005A5AC  38 C1 00 3C */	addi r6, r1, 0x3c
/* 8005D7B0 0005A5B0  38 E1 00 08 */	addi r7, r1, 8
/* 8005D7B4 0005A5B4  48 00 00 21 */	bl hit_test__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyCFR5xVec3R5xVec3R5xVec3RP4xEnt
lbl_8005D7B8:
/* 8005D7B8 0005A5B8  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 8005D7BC 0005A5BC  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8005D7C0 0005A5C0  BB 61 00 4C */	lmw r27, 0x4c(r1)
/* 8005D7C4 0005A5C4  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8005D7C8 0005A5C8  7C 08 03 A6 */	mtlr r0
/* 8005D7CC 0005A5CC  38 21 00 70 */	addi r1, r1, 0x70
/* 8005D7D0 0005A5D0  4E 80 00 20 */	blr 

/* hit_test__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyCFR5xVec3R5xVec3R5xVec3RP4xEnt */
hit_test__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyCFR5xVec3R5xVec3R5xVec3RP4xEnt:
/* 8005D7D4 0005A5D4  94 21 FE 60 */	stwu r1, -0x1a0(r1)
/* 8005D7D8 0005A5D8  7C 08 02 A6 */	mflr r0
/* 8005D7DC 0005A5DC  3D 00 80 3C */	lis r8, globals@ha
/* 8005D7E0 0005A5E0  90 01 01 A4 */	stw r0, 0x1a4(r1)
/* 8005D7E4 0005A5E4  BF 21 01 84 */	stmw r25, 0x184(r1)
/* 8005D7E8 0005A5E8  7C 7F 1B 78 */	mr r31, r3
/* 8005D7EC 0005A5EC  38 68 05 58 */	addi r3, r8, globals@l
/* 8005D7F0 0005A5F0  7C 99 23 78 */	mr r25, r4
/* 8005D7F4 0005A5F4  7C BA 2B 78 */	mr r26, r5
/* 8005D7F8 0005A5F8  7C DB 33 78 */	mr r27, r6
/* 8005D7FC 0005A5FC  7C FC 3B 78 */	mr r28, r7
/* 8005D800 0005A600  83 C3 1F C0 */	lwz r30, 0x1fc0(r3)
/* 8005D804 0005A604  4B FF F4 6D */	bl get_missle_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005D808 0005A608  80 8D 81 80 */	lwz r4, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005D80C 0005A60C  3B A3 00 30 */	addi r29, r3, 0x30
/* 8005D810 0005A610  7F A5 EB 78 */	mr r5, r29
/* 8005D814 0005A614  38 61 00 38 */	addi r3, r1, 0x38
/* 8005D818 0005A618  C0 24 00 18 */	lfs f1, 0x18(r4)
/* 8005D81C 0005A61C  38 9F 00 2C */	addi r4, r31, 0x2c
/* 8005D820 0005A620  4B FB 47 45 */	bl xSweptSpherePrepare__FP12xSweptSphereP5xVec3P5xVec3f
/* 8005D824 0005A624  38 00 00 00 */	li r0, 0
/* 8005D828 0005A628  7F C4 F3 78 */	mr r4, r30
/* 8005D82C 0005A62C  90 01 01 34 */	stw r0, 0x134(r1)
/* 8005D830 0005A630  38 61 00 38 */	addi r3, r1, 0x38
/* 8005D834 0005A634  38 A0 00 00 */	li r5, 0
/* 8005D838 0005A638  38 C0 00 10 */	li r6, 0x10
/* 8005D83C 0005A63C  4B FB 68 4D */	bl xSweptSphereToScene__FP12xSweptSphereP6xSceneP4xEntUc
/* 8005D840 0005A640  2C 03 00 00 */	cmpwi r3, 0
/* 8005D844 0005A644  40 82 00 0C */	bne lbl_8005D850
/* 8005D848 0005A648  38 60 00 00 */	li r3, 0
/* 8005D84C 0005A64C  48 00 00 C8 */	b lbl_8005D914
lbl_8005D850:
/* 8005D850 0005A650  38 61 00 38 */	addi r3, r1, 0x38
/* 8005D854 0005A654  4B FB 49 4D */	bl xSweptSphereGetResults__FP12xSweptSphere
/* 8005D858 0005A658  C0 3D 00 00 */	lfs f1, 0(r29)
/* 8005D85C 0005A65C  3C 60 80 25 */	lis r3, lbl_80250004@ha
/* 8005D860 0005A660  84 C3 52 B4 */	lwzu r6, 0x52b4(r3)
/* 8005D864 0005A664  3B E1 01 64 */	addi r31, r1, 0x164
/* 8005D868 0005A668  C0 01 01 40 */	lfs f0, 0x140(r1)
/* 8005D86C 0005A66C  7F E4 FB 78 */	mr r4, r31
/* 8005D870 0005A670  80 A3 00 04 */	lwz r5, lbl_80250004@l(r3)
/* 8005D874 0005A674  3B C1 01 40 */	addi r30, r1, 0x140
/* 8005D878 0005A678  EC 81 00 28 */	fsubs f4, f1, f0
/* 8005D87C 0005A67C  80 03 00 08 */	lwz r0, 8(r3)
/* 8005D880 0005A680  90 C1 00 2C */	stw r6, 0x2c(r1)
/* 8005D884 0005A684  38 61 00 2C */	addi r3, r1, 0x2c
/* 8005D888 0005A688  C0 7D 00 04 */	lfs f3, 4(r29)
/* 8005D88C 0005A68C  C0 41 01 44 */	lfs f2, 0x144(r1)
/* 8005D890 0005A690  C0 3D 00 08 */	lfs f1, 8(r29)
/* 8005D894 0005A694  C0 01 01 48 */	lfs f0, 0x148(r1)
/* 8005D898 0005A698  EC 43 10 28 */	fsubs f2, f3, f2
/* 8005D89C 0005A69C  90 A1 00 30 */	stw r5, 0x30(r1)
/* 8005D8A0 0005A6A0  EC 01 00 28 */	fsubs f0, f1, f0
/* 8005D8A4 0005A6A4  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005D8A8 0005A6A8  D0 81 00 2C */	stfs f4, 0x2c(r1)
/* 8005D8AC 0005A6AC  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 8005D8B0 0005A6B0  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8005D8B4 0005A6B4  4B FB 7C 59 */	bl dot__5xVec3CFRC5xVec3
/* 8005D8B8 0005A6B8  7F E4 FB 78 */	mr r4, r31
/* 8005D8BC 0005A6BC  38 61 00 14 */	addi r3, r1, 0x14
/* 8005D8C0 0005A6C0  4B FA D8 61 */	bl __ml__5xVec3CFf
/* 8005D8C4 0005A6C4  7F C4 F3 78 */	mr r4, r30
/* 8005D8C8 0005A6C8  38 61 00 20 */	addi r3, r1, 0x20
/* 8005D8CC 0005A6CC  38 A1 00 14 */	addi r5, r1, 0x14
/* 8005D8D0 0005A6D0  4B FB 7B 11 */	bl __pl__5xVec3CFRC5xVec3
/* 8005D8D4 0005A6D4  7F 23 CB 78 */	mr r3, r25
/* 8005D8D8 0005A6D8  38 81 00 20 */	addi r4, r1, 0x20
/* 8005D8DC 0005A6DC  4B FA D9 89 */	bl __as__5xVec3FRC5xVec3
/* 8005D8E0 0005A6E0  7F 24 CB 78 */	mr r4, r25
/* 8005D8E4 0005A6E4  7F A5 EB 78 */	mr r5, r29
/* 8005D8E8 0005A6E8  38 61 00 08 */	addi r3, r1, 8
/* 8005D8EC 0005A6EC  4B FA D8 E1 */	bl __mi__5xVec3CFRC5xVec3
/* 8005D8F0 0005A6F0  7F 63 DB 78 */	mr r3, r27
/* 8005D8F4 0005A6F4  38 81 00 08 */	addi r4, r1, 8
/* 8005D8F8 0005A6F8  4B FA D9 6D */	bl __as__5xVec3FRC5xVec3
/* 8005D8FC 0005A6FC  7F 43 D3 78 */	mr r3, r26
/* 8005D900 0005A700  38 81 01 58 */	addi r4, r1, 0x158
/* 8005D904 0005A704  4B FA D9 61 */	bl __as__5xVec3FRC5xVec3
/* 8005D908 0005A708  80 01 01 34 */	lwz r0, 0x134(r1)
/* 8005D90C 0005A70C  38 60 00 01 */	li r3, 1
/* 8005D910 0005A710  90 1C 00 00 */	stw r0, 0(r28)
lbl_8005D914:
/* 8005D914 0005A714  BB 21 01 84 */	lmw r25, 0x184(r1)
/* 8005D918 0005A718  80 01 01 A4 */	lwz r0, 0x1a4(r1)
/* 8005D91C 0005A71C  7C 08 03 A6 */	mtlr r0
/* 8005D920 0005A720  38 21 01 A0 */	addi r1, r1, 0x1a0
/* 8005D924 0005A724  4E 80 00 20 */	blr 

/* update_move__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFf */
update_move__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFf:
/* 8005D928 0005A728  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005D92C 0005A72C  7C 08 02 A6 */	mflr r0
/* 8005D930 0005A730  7C 65 1B 78 */	mr r5, r3
/* 8005D934 0005A734  FC 40 08 90 */	fmr f2, f1
/* 8005D938 0005A738  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005D93C 0005A73C  38 61 00 08 */	addi r3, r1, 8
/* 8005D940 0005A740  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8005D944 0005A744  80 8D 81 80 */	lwz r4, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005D948 0005A748  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005D94C 0005A74C  C0 24 00 3C */	lfs f1, 0x3c(r4)
/* 8005D950 0005A750  C0 64 00 40 */	lfs f3, 0x40(r4)
/* 8005D954 0005A754  38 85 00 0C */	addi r4, r5, 0xc
/* 8005D958 0005A758  D0 01 00 08 */	stfs f0, 8(r1)
/* 8005D95C 0005A75C  4B FD 3B 35 */	bl xAccelMove__FRfRffff
/* 8005D960 0005A760  4B FF F3 11 */	bl get_missle_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005D964 0005A764  7C 7F 1B 78 */	mr r31, r3
/* 8005D968 0005A768  C0 21 00 08 */	lfs f1, 8(r1)
/* 8005D96C 0005A76C  38 61 00 0C */	addi r3, r1, 0xc
/* 8005D970 0005A770  38 9F 00 20 */	addi r4, r31, 0x20
/* 8005D974 0005A774  4B FA D7 AD */	bl __ml__5xVec3CFf
/* 8005D978 0005A778  38 7F 00 30 */	addi r3, r31, 0x30
/* 8005D97C 0005A77C  38 81 00 0C */	addi r4, r1, 0xc
/* 8005D980 0005A780  4B FB 7A C5 */	bl __apl__5xVec3FRC5xVec3
/* 8005D984 0005A784  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005D988 0005A788  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8005D98C 0005A78C  7C 08 03 A6 */	mtlr r0
/* 8005D990 0005A790  38 21 00 20 */	addi r1, r1, 0x20
/* 8005D994 0005A794  4E 80 00 20 */	blr 

/* update_turn__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFf */
update_turn__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyFf:
/* 8005D998 0005A798  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 8005D99C 0005A79C  7C 08 02 A6 */	mflr r0
/* 8005D9A0 0005A7A0  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8005D9A4 0005A7A4  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 8005D9A8 0005A7A8  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 8005D9AC 0005A7AC  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 8005D9B0 0005A7B0  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 8005D9B4 0005A7B4  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 8005D9B8 0005A7B8  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 8005D9BC 0005A7BC  DB 81 00 60 */	stfd f28, 0x60(r1)
/* 8005D9C0 0005A7C0  F3 81 00 68 */	psq_st f28, 104(r1), 0, qr0
/* 8005D9C4 0005A7C4  DB 61 00 50 */	stfd f27, 0x50(r1)
/* 8005D9C8 0005A7C8  F3 61 00 58 */	psq_st f27, 88(r1), 0, qr0
/* 8005D9CC 0005A7CC  DB 41 00 40 */	stfd f26, 0x40(r1)
/* 8005D9D0 0005A7D0  F3 41 00 48 */	psq_st f26, 72(r1), 0, qr0
/* 8005D9D4 0005A7D4  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8005D9D8 0005A7D8  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8005D9DC 0005A7DC  80 8D 81 80 */	lwz r4, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005D9E0 0005A7E0  7C 7E 1B 78 */	mr r30, r3
/* 8005D9E4 0005A7E4  FF 60 08 90 */	fmr f27, f1
/* 8005D9E8 0005A7E8  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005D9EC 0005A7EC  C0 64 00 50 */	lfs f3, 0x50(r4)
/* 8005D9F0 0005A7F0  3B E3 C2 A4 */	addi r31, r3, shared__13cruise_bubble@l
/* 8005D9F4 0005A7F4  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 8005D9F8 0005A7F8  C0 24 00 64 */	lfs f1, 0x64(r4)
/* 8005D9FC 0005A7FC  C0 84 00 58 */	lfs f4, 0x58(r4)
/* 8005DA00 0005A800  FC 40 D8 90 */	fmr f2, f27
/* 8005DA04 0005A804  C3 44 00 5C */	lfs f26, 0x5c(r4)
/* 8005DA08 0005A808  FF C0 18 50 */	fneg f30, f3
/* 8005DA0C 0005A80C  C3 E4 00 60 */	lfs f31, 0x60(r4)
/* 8005DA10 0005A810  FF A0 00 50 */	fneg f29, f0
/* 8005DA14 0005A814  C0 1E 00 10 */	lfs f0, 0x10(r30)
/* 8005DA18 0005A818  FF 80 08 50 */	fneg f28, f1
/* 8005DA1C 0005A81C  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8005DA20 0005A820  C0 1E 00 14 */	lfs f0, 0x14(r30)
/* 8005DA24 0005A824  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8005DA28 0005A828  C0 02 89 C0 */	lfs f0, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005DA2C 0005A82C  EC 20 20 28 */	fsubs f1, f0, f4
/* 8005DA30 0005A830  4B FD 21 E5 */	bl xpow__Fff
/* 8005DA34 0005A834  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 8005DA38 0005A838  FC 40 D8 90 */	fmr f2, f27
/* 8005DA3C 0005A83C  EC 00 00 72 */	fmuls f0, f0, f1
/* 8005DA40 0005A840  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8005DA44 0005A844  C0 02 89 C0 */	lfs f0, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005DA48 0005A848  EC 20 D0 28 */	fsubs f1, f0, f26
/* 8005DA4C 0005A84C  4B FD 21 C9 */	bl xpow__Fff
/* 8005DA50 0005A850  C0 5E 00 20 */	lfs f2, 0x20(r30)
/* 8005DA54 0005A854  C0 1F 00 4C */	lfs f0, 0x4c(r31)
/* 8005DA58 0005A858  EC 22 00 72 */	fmuls f1, f2, f1
/* 8005DA5C 0005A85C  C0 41 00 34 */	lfs f2, 0x34(r1)
/* 8005DA60 0005A860  EC 1D 00 32 */	fmuls f0, f29, f0
/* 8005DA64 0005A864  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8005DA68 0005A868  EC 22 00 32 */	fmuls f1, f2, f0
/* 8005DA6C 0005A86C  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005DA70 0005A870  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005DA74 0005A874  4C 40 13 82 */	cror 2, 0, 2
/* 8005DA78 0005A878  40 82 00 0C */	bne lbl_8005DA84
/* 8005DA7C 0005A87C  C0 A2 89 C0 */	lfs f5, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005DA80 0005A880  48 00 00 18 */	b lbl_8005DA98
lbl_8005DA84:
/* 8005DA84 0005A884  FC 00 12 10 */	fabs f0, f2
/* 8005DA88 0005A888  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005DA8C 0005A88C  FC 00 00 18 */	frsp f0, f0
/* 8005DA90 0005A890  EC 00 F8 24 */	fdivs f0, f0, f31
/* 8005DA94 0005A894  EC A1 00 28 */	fsubs f5, f1, f0
lbl_8005DA98:
/* 8005DA98 0005A898  C0 5F 00 44 */	lfs f2, 0x44(r31)
/* 8005DA9C 0005A89C  FC 20 D8 90 */	fmr f1, f27
/* 8005DAA0 0005A8A0  C0 1F 00 4C */	lfs f0, 0x4c(r31)
/* 8005DAA4 0005A8A4  7F C3 F3 78 */	mr r3, r30
/* 8005DAA8 0005A8A8  EC 7D 00 B2 */	fmuls f3, f29, f2
/* 8005DAAC 0005A8AC  C0 9F 00 40 */	lfs f4, 0x40(r31)
/* 8005DAB0 0005A8B0  EC 1D 00 32 */	fmuls f0, f29, f0
/* 8005DAB4 0005A8B4  C0 5F 00 48 */	lfs f2, 0x48(r31)
/* 8005DAB8 0005A8B8  EC 9E 01 32 */	fmuls f4, f30, f4
/* 8005DABC 0005A8BC  EC 65 00 F2 */	fmuls f3, f5, f3
/* 8005DAC0 0005A8C0  EC 5E 00 B2 */	fmuls f2, f30, f2
/* 8005DAC4 0005A8C4  38 81 00 28 */	addi r4, r1, 0x28
/* 8005DAC8 0005A8C8  EC 05 00 32 */	fmuls f0, f5, f0
/* 8005DACC 0005A8CC  D0 81 00 10 */	stfs f4, 0x10(r1)
/* 8005DAD0 0005A8D0  38 A1 00 18 */	addi r5, r1, 0x18
/* 8005DAD4 0005A8D4  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 8005DAD8 0005A8D8  38 C1 00 30 */	addi r6, r1, 0x30
/* 8005DADC 0005A8DC  38 E1 00 20 */	addi r7, r1, 0x20
/* 8005DAE0 0005A8E0  D0 41 00 08 */	stfs f2, 8(r1)
/* 8005DAE4 0005A8E4  39 01 00 10 */	addi r8, r1, 0x10
/* 8005DAE8 0005A8E8  39 21 00 08 */	addi r9, r1, 8
/* 8005DAEC 0005A8EC  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8005DAF0 0005A8F0  48 00 00 A9 */	bl calculate_rotation__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyCFR5xVec2R5xVec2fRC5xVec2RC5xVec2RC5xVec2RC5xVec2
/* 8005DAF4 0005A8F4  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8005DAF8 0005A8F8  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 8005DAFC 0005A8FC  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 8005DB00 0005A900  D0 1E 00 14 */	stfs f0, 0x14(r30)
/* 8005DB04 0005A904  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8005DB08 0005A908  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 8005DB0C 0005A90C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8005DB10 0005A910  D0 1E 00 20 */	stfs f0, 0x20(r30)
/* 8005DB14 0005A914  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 8005DB18 0005A918  EC 00 00 32 */	fmuls f0, f0, f0
/* 8005DB1C 0005A91C  EC 1C 00 32 */	fmuls f0, f28, f0
/* 8005DB20 0005A920  D0 1E 00 18 */	stfs f0, 0x18(r30)
/* 8005DB24 0005A924  C0 3E 00 1C */	lfs f1, 0x1c(r30)
/* 8005DB28 0005A928  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005DB2C 0005A92C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005DB30 0005A930  40 80 00 14 */	bge lbl_8005DB44
/* 8005DB34 0005A934  C0 3E 00 18 */	lfs f1, 0x18(r30)
/* 8005DB38 0005A938  C0 02 89 FC */	lfs f0, lbl_803CD37C-_SDA2_BASE_(r2)
/* 8005DB3C 0005A93C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8005DB40 0005A940  D0 1E 00 18 */	stfs f0, 0x18(r30)
lbl_8005DB44:
/* 8005DB44 0005A944  4B FF F1 2D */	bl get_missle_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005DB48 0005A948  38 9E 00 10 */	addi r4, r30, 0x10
/* 8005DB4C 0005A94C  4B FD 46 59 */	bl xMat3x3Euler__FP7xMat3x3PC5xVec3
/* 8005DB50 0005A950  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 8005DB54 0005A954  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 8005DB58 0005A958  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 8005DB5C 0005A95C  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 8005DB60 0005A960  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 8005DB64 0005A964  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 8005DB68 0005A968  E3 81 00 68 */	psq_l f28, 104(r1), 0, qr0
/* 8005DB6C 0005A96C  CB 81 00 60 */	lfd f28, 0x60(r1)
/* 8005DB70 0005A970  E3 61 00 58 */	psq_l f27, 88(r1), 0, qr0
/* 8005DB74 0005A974  CB 61 00 50 */	lfd f27, 0x50(r1)
/* 8005DB78 0005A978  E3 41 00 48 */	psq_l f26, 72(r1), 0, qr0
/* 8005DB7C 0005A97C  CB 41 00 40 */	lfd f26, 0x40(r1)
/* 8005DB80 0005A980  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8005DB84 0005A984  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 8005DB88 0005A988  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8005DB8C 0005A98C  7C 08 03 A6 */	mtlr r0
/* 8005DB90 0005A990  38 21 00 A0 */	addi r1, r1, 0xa0
/* 8005DB94 0005A994  4E 80 00 20 */	blr 

/* calculate_rotation__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyCFR5xVec2R5xVec2fRC5xVec2RC5xVec2RC5xVec2RC5xVec2 */
calculate_rotation__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_flyCFR5xVec2R5xVec2fRC5xVec2RC5xVec2RC5xVec2RC5xVec2:
/* 8005DB98 0005A998  C0 08 00 00 */	lfs f0, 0(r8)
/* 8005DB9C 0005A99C  C1 69 00 00 */	lfs f11, 0(r9)
/* 8005DBA0 0005A9A0  C0 A7 00 00 */	lfs f5, 0(r7)
/* 8005DBA4 0005A9A4  EC 40 00 2A */	fadds f2, f0, f0
/* 8005DBA8 0005A9A8  EC 00 58 2A */	fadds f0, f0, f11
/* 8005DBAC 0005A9AC  C0 C2 89 C8 */	lfs f6, lbl_803CD348-_SDA2_BASE_(r2)
/* 8005DBB0 0005A9B0  C0 88 00 04 */	lfs f4, 4(r8)
/* 8005DBB4 0005A9B4  EC 65 00 72 */	fmuls f3, f5, f1
/* 8005DBB8 0005A9B8  C1 29 00 04 */	lfs f9, 4(r9)
/* 8005DBBC 0005A9BC  ED 46 00 32 */	fmuls f10, f6, f0
/* 8005DBC0 0005A9C0  C0 C7 00 04 */	lfs f6, 4(r7)
/* 8005DBC4 0005A9C4  EC 04 20 2A */	fadds f0, f4, f4
/* 8005DBC8 0005A9C8  ED 04 48 2A */	fadds f8, f4, f9
/* 8005DBCC 0005A9CC  C0 E6 00 00 */	lfs f7, 0(r6)
/* 8005DBD0 0005A9D0  ED 41 2A BA */	fmadds f10, f1, f10, f5
/* 8005DBD4 0005A9D4  EC AB 10 2A */	fadds f5, f11, f2
/* 8005DBD8 0005A9D8  C0 86 00 04 */	lfs f4, 4(r6)
/* 8005DBDC 0005A9DC  EC 49 00 2A */	fadds f2, f9, f0
/* 8005DBE0 0005A9E0  D1 45 00 00 */	stfs f10, 0(r5)
/* 8005DBE4 0005A9E4  EC 06 00 72 */	fmuls f0, f6, f1
/* 8005DBE8 0005A9E8  C1 22 89 C8 */	lfs f9, lbl_803CD348-_SDA2_BASE_(r2)
/* 8005DBEC 0005A9EC  ED 09 02 32 */	fmuls f8, f9, f8
/* 8005DBF0 0005A9F0  EC C1 32 3A */	fmadds f6, f1, f8, f6
/* 8005DBF4 0005A9F4  D0 C5 00 04 */	stfs f6, 4(r5)
/* 8005DBF8 0005A9F8  C0 C2 8A 18 */	lfs f6, lbl_803CD398-_SDA2_BASE_(r2)
/* 8005DBFC 0005A9FC  EC A6 01 72 */	fmuls f5, f6, f5
/* 8005DC00 0005AA00  EC A1 01 72 */	fmuls f5, f1, f5
/* 8005DC04 0005AA04  EC 61 19 7A */	fmadds f3, f1, f5, f3
/* 8005DC08 0005AA08  EC 67 18 2A */	fadds f3, f7, f3
/* 8005DC0C 0005AA0C  D0 64 00 00 */	stfs f3, 0(r4)
/* 8005DC10 0005AA10  C0 62 8A 18 */	lfs f3, lbl_803CD398-_SDA2_BASE_(r2)
/* 8005DC14 0005AA14  EC 43 00 B2 */	fmuls f2, f3, f2
/* 8005DC18 0005AA18  EC 41 00 B2 */	fmuls f2, f1, f2
/* 8005DC1C 0005AA1C  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 8005DC20 0005AA20  EC 04 00 2A */	fadds f0, f4, f0
/* 8005DC24 0005AA24  D0 04 00 04 */	stfs f0, 4(r4)
/* 8005DC28 0005AA28  4E 80 00 20 */	blr 

start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFv:
/* 8005DC2C 0005AA2C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005DC30 0005AA30  7C 08 02 A6 */	mflr r0
/* 8005DC34 0005AA34  3C 80 80 29 */	lis r4, lbl_80290000@ha
/* 8005DC38 0005AA38  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005DC3C 0005AA3C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8005DC40 0005AA40  7C 7F 1B 78 */	mr r31, r3
/* 8005DC44 0005AA44  84 04 C2 A4 */	lwzu r0, -0x3d5c(r4)
/* 8005DC48 0005AA48  60 00 00 40 */	ori r0, r0, 0x40
/* 8005DC4C 0005AA4C  90 04 00 00 */	stw r0, lbl_80290000@l(r4)
/* 8005DC50 0005AA50  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005DC54 0005AA54  D0 03 00 08 */	stfs f0, 8(r3)
/* 8005DC58 0005AA58  80 8D 81 80 */	lwz r4, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005DC5C 0005AA5C  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005DC60 0005AA60  C0 24 00 6C */	lfs f1, 0x6c(r4)
/* 8005DC64 0005AA64  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005DC68 0005AA68  4C 40 13 82 */	cror 2, 0, 2
/* 8005DC6C 0005AA6C  40 82 00 0C */	bne lbl_8005DC78
/* 8005DC70 0005AA70  C0 24 00 68 */	lfs f1, 0x68(r4)
/* 8005DC74 0005AA74  48 00 07 49 */	bl apply_damage__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFf
lbl_8005DC78:
/* 8005DC78 0005AA78  4B FF A4 91 */	bl get_player_loc__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005DC7C 0005AA7C  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 8005DC80 0005AA80  7C 65 1B 78 */	mr r5, r3
/* 8005DC84 0005AA84  38 84 C2 A4 */	addi r4, r4, shared__13cruise_bubble@l
/* 8005DC88 0005AA88  38 61 00 08 */	addi r3, r1, 8
/* 8005DC8C 0005AA8C  38 84 00 50 */	addi r4, r4, 0x50
/* 8005DC90 0005AA90  4B FA D5 3D */	bl __mi__5xVec3CFRC5xVec3
/* 8005DC94 0005AA94  38 61 00 08 */	addi r3, r1, 8
/* 8005DC98 0005AA98  4B FA D4 65 */	bl length2__5xVec3CFv
/* 8005DC9C 0005AA9C  80 8D 81 80 */	lwz r4, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005DCA0 0005AAA0  38 60 00 02 */	li r3, 2
/* 8005DCA4 0005AAA4  C0 04 00 B0 */	lfs f0, 0xb0(r4)
/* 8005DCA8 0005AAA8  EC 00 00 32 */	fmuls f0, f0, f0
/* 8005DCAC 0005AAAC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005DCB0 0005AAB0  4C 40 13 82 */	cror 2, 0, 2
/* 8005DCB4 0005AAB4  40 82 00 0C */	bne lbl_8005DCC0
/* 8005DCB8 0005AAB8  38 80 00 0B */	li r4, 0xb
/* 8005DCBC 0005AABC  48 00 00 08 */	b lbl_8005DCC4
lbl_8005DCC0:
/* 8005DCC0 0005AAC0  38 80 00 0A */	li r4, 0xa
lbl_8005DCC4:
/* 8005DCC4 0005AAC4  4B FF A0 19 */	bl set_state__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_11thread_enumQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_enum
/* 8005DCC8 0005AAC8  4B FF EF A9 */	bl get_missle_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005DCCC 0005AACC  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005DCD0 0005AAD0  38 83 00 30 */	addi r4, r3, 0x30
/* 8005DCD4 0005AAD4  38 60 00 01 */	li r3, 1
/* 8005DCD8 0005AAD8  4B FF 97 2D */	bl play_sound__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FifPC5xVec3
/* 8005DCDC 0005AADC  7F E3 FB 78 */	mr r3, r31
/* 8005DCE0 0005AAE0  48 00 00 19 */	bl start_effects__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFv
/* 8005DCE4 0005AAE4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005DCE8 0005AAE8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8005DCEC 0005AAEC  7C 08 03 A6 */	mtlr r0
/* 8005DCF0 0005AAF0  38 21 00 20 */	addi r1, r1, 0x20
/* 8005DCF4 0005AAF4  4E 80 00 20 */	blr 

/* start_effects__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFv */
start_effects__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFv:
/* 8005DCF8 0005AAF8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8005DCFC 0005AAFC  7C 08 02 A6 */	mflr r0
/* 8005DD00 0005AB00  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005DD04 0005AB04  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 8005DD08 0005AB08  83 AD 81 80 */	lwz r29, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005DD0C 0005AB0C  4B FF EF 65 */	bl get_missle_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005DD10 0005AB10  80 9D 01 08 */	lwz r4, 0x108(r29)
/* 8005DD14 0005AB14  38 63 00 30 */	addi r3, r3, 0x30
/* 8005DD18 0005AB18  C0 3D 01 0C */	lfs f1, 0x10c(r29)
/* 8005DD1C 0005AB1C  C0 5D 01 10 */	lfs f2, 0x110(r29)
/* 8005DD20 0005AB20  C0 7D 01 14 */	lfs f3, 0x114(r29)
/* 8005DD24 0005AB24  48 03 7A E1 */	bl zFX_SpawnBubbleBlast__FPC5xVec3Uifff
/* 8005DD28 0005AB28  3C 60 80 25 */	lis r3, lbl_802552C0@ha
/* 8005DD2C 0005AB2C  38 A3 52 C0 */	addi r5, r3, lbl_802552C0@l
/* 8005DD30 0005AB30  80 85 00 00 */	lwz r4, 0(r5)
/* 8005DD34 0005AB34  80 65 00 04 */	lwz r3, 4(r5)
/* 8005DD38 0005AB38  80 05 00 08 */	lwz r0, 8(r5)
/* 8005DD3C 0005AB3C  90 81 00 08 */	stw r4, 8(r1)
/* 8005DD40 0005AB40  90 61 00 0C */	stw r3, 0xc(r1)
/* 8005DD44 0005AB44  90 01 00 10 */	stw r0, 0x10(r1)
/* 8005DD48 0005AB48  4B FF EF 29 */	bl get_missle_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005DD4C 0005AB4C  3C A0 80 2E */	lis r5, lbl_802DC8B8@ha
/* 8005DD50 0005AB50  7C 64 1B 78 */	mr r4, r3
/* 8005DD54 0005AB54  38 65 C8 B8 */	addi r3, r5, lbl_802DC8B8@l
/* 8005DD58 0005AB58  38 C0 FF FF */	li r6, -1
/* 8005DD5C 0005AB5C  38 A1 00 08 */	addi r5, r1, 8
/* 8005DD60 0005AB60  48 11 EB E5 */	bl emit__13xDecalEmitterFRC7xMat4x3RC5xVec3i
/* 8005DD64 0005AB64  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005DD68 0005AB68  38 63 C2 A4 */	addi r3, r3, shared__13cruise_bubble@l
/* 8005DD6C 0005AB6C  83 83 01 04 */	lwz r28, 0x104(r3)
/* 8005DD70 0005AB70  28 1C 00 00 */	cmplwi r28, 0
/* 8005DD74 0005AB74  41 82 00 98 */	beq lbl_8005DE0C
/* 8005DD78 0005AB78  80 1C 00 08 */	lwz r0, 8(r28)
/* 8005DD7C 0005AB7C  28 00 00 00 */	cmplwi r0, 0
/* 8005DD80 0005AB80  41 82 00 8C */	beq lbl_8005DE0C
/* 8005DD84 0005AB84  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005DD88 0005AB88  83 A3 01 20 */	lwz r29, 0x120(r3)
/* 8005DD8C 0005AB8C  83 C3 01 24 */	lwz r30, 0x124(r3)
/* 8005DD90 0005AB90  7C 1D F0 40 */	cmplw r29, r30
/* 8005DD94 0005AB94  41 80 00 0C */	blt lbl_8005DDA0
/* 8005DD98 0005AB98  7F DD F3 78 */	mr r29, r30
/* 8005DD9C 0005AB9C  48 00 00 20 */	b lbl_8005DDBC
lbl_8005DDA0:
/* 8005DDA0 0005ABA0  4B FD 2E C9 */	bl xrand__Fv
/* 8005DDA4 0005ABA4  54 64 9B 7E */	srwi r4, r3, 0xd
/* 8005DDA8 0005ABA8  7C 7D F0 50 */	subf r3, r29, r30
/* 8005DDAC 0005ABAC  7C 04 1B 96 */	divwu r0, r4, r3
/* 8005DDB0 0005ABB0  7C 00 19 D6 */	mullw r0, r0, r3
/* 8005DDB4 0005ABB4  7C 00 20 50 */	subf r0, r0, r4
/* 8005DDB8 0005ABB8  7F BD 02 14 */	add r29, r29, r0
lbl_8005DDBC:
/* 8005DDBC 0005ABBC  80 8D 81 80 */	lwz r4, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005DDC0 0005ABC0  7F A3 EB 78 */	mr r3, r29
/* 8005DDC4 0005ABC4  C0 24 01 34 */	lfs f1, 0x134(r4)
/* 8005DDC8 0005ABC8  48 00 04 81 */	bl reset_quadrants__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFUif
/* 8005DDCC 0005ABCC  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 8005DDD0 0005ABD0  3C 60 80 06 */	lis r3, cb_droplet__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFP5zFragP10zFragAsset@ha
/* 8005DDD4 0005ABD4  3B C4 C2 A4 */	addi r30, r4, shared__13cruise_bubble@l
/* 8005DDD8 0005ABD8  3B 60 00 00 */	li r27, 0
/* 8005DDDC 0005ABDC  3B E3 DE 20 */	addi r31, r3, cb_droplet__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFP5zFragP10zFragAsset@l
/* 8005DDE0 0005ABE0  48 00 00 24 */	b lbl_8005DE04
lbl_8005DDE4:
/* 8005DDE4 0005ABE4  81 9C 00 08 */	lwz r12, 8(r28)
/* 8005DDE8 0005ABE8  7F 83 E3 78 */	mr r3, r28
/* 8005DDEC 0005ABEC  7F E6 FB 78 */	mr r6, r31
/* 8005DDF0 0005ABF0  80 9E 00 68 */	lwz r4, 0x68(r30)
/* 8005DDF4 0005ABF4  38 A0 00 00 */	li r5, 0
/* 8005DDF8 0005ABF8  7D 89 03 A6 */	mtctr r12
/* 8005DDFC 0005ABFC  4E 80 04 21 */	bctrl 
/* 8005DE00 0005AC00  3B 7B 00 01 */	addi r27, r27, 1
lbl_8005DE04:
/* 8005DE04 0005AC04  7C 1B E8 40 */	cmplw r27, r29
/* 8005DE08 0005AC08  41 80 FF DC */	blt lbl_8005DDE4
lbl_8005DE0C:
/* 8005DE0C 0005AC0C  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 8005DE10 0005AC10  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8005DE14 0005AC14  7C 08 03 A6 */	mtlr r0
/* 8005DE18 0005AC18  38 21 00 30 */	addi r1, r1, 0x30
/* 8005DE1C 0005AC1C  4E 80 00 20 */	blr 

cb_droplet__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFP5zFragP10zFragAsset:
/* 8005DE20 0005AC20  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8005DE24 0005AC24  7C 08 02 A6 */	mflr r0
/* 8005DE28 0005AC28  90 01 00 74 */	stw r0, 0x74(r1)
/* 8005DE2C 0005AC2C  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8005DE30 0005AC30  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 8005DE34 0005AC34  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8005DE38 0005AC38  93 C1 00 58 */	stw r30, 0x58(r1)
/* 8005DE3C 0005AC3C  7C 7E 1B 78 */	mr r30, r3
/* 8005DE40 0005AC40  38 61 00 14 */	addi r3, r1, 0x14
/* 8005DE44 0005AC44  80 FE 00 04 */	lwz r7, 4(r30)
/* 8005DE48 0005AC48  38 81 00 10 */	addi r4, r1, 0x10
/* 8005DE4C 0005AC4C  38 A1 00 0C */	addi r5, r1, 0xc
/* 8005DE50 0005AC50  38 C1 00 08 */	addi r6, r1, 8
/* 8005DE54 0005AC54  80 07 00 70 */	lwz r0, 0x70(r7)
/* 8005DE58 0005AC58  60 00 00 22 */	ori r0, r0, 0x22
/* 8005DE5C 0005AC5C  90 07 00 70 */	stw r0, 0x70(r7)
/* 8005DE60 0005AC60  48 00 03 19 */	bl get_next_quadrant__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFRfRfRfRf
/* 8005DE64 0005AC64  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005DE68 0005AC68  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8005DE6C 0005AC6C  38 83 C2 A4 */	addi r4, r3, shared__13cruise_bubble@l
/* 8005DE70 0005AC70  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8005DE74 0005AC74  C0 61 00 0C */	lfs f3, 0xc(r1)
/* 8005DE78 0005AC78  38 61 00 3C */	addi r3, r1, 0x3c
/* 8005DE7C 0005AC7C  C0 81 00 08 */	lfs f4, 8(r1)
/* 8005DE80 0005AC80  38 84 00 5C */	addi r4, r4, 0x5c
/* 8005DE84 0005AC84  48 00 01 39 */	bl perturb_direction__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFRC5xVec3ffff
/* 8005DE88 0005AC88  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 8005DE8C 0005AC8C  80 61 00 40 */	lwz r3, 0x40(r1)
/* 8005DE90 0005AC90  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8005DE94 0005AC94  90 81 00 48 */	stw r4, 0x48(r1)
/* 8005DE98 0005AC98  90 61 00 4C */	stw r3, 0x4c(r1)
/* 8005DE9C 0005AC9C  90 01 00 50 */	stw r0, 0x50(r1)
/* 8005DEA0 0005ACA0  4B FD 2D E9 */	bl xurand__Fv
/* 8005DEA4 0005ACA4  C0 42 89 F8 */	lfs f2, lbl_803CD378-_SDA2_BASE_(r2)
/* 8005DEA8 0005ACA8  4B FD 1D 6D */	bl xpow__Fff
/* 8005DEAC 0005ACAC  80 AD 81 80 */	lwz r5, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005DEB0 0005ACB0  38 61 00 24 */	addi r3, r1, 0x24
/* 8005DEB4 0005ACB4  38 81 00 48 */	addi r4, r1, 0x48
/* 8005DEB8 0005ACB8  C0 45 01 18 */	lfs f2, 0x118(r5)
/* 8005DEBC 0005ACBC  C0 05 01 1C */	lfs f0, 0x11c(r5)
/* 8005DEC0 0005ACC0  EC 00 10 28 */	fsubs f0, f0, f2
/* 8005DEC4 0005ACC4  EC 21 10 3A */	fmadds f1, f1, f0, f2
/* 8005DEC8 0005ACC8  4B FA D2 59 */	bl __ml__5xVec3CFf
/* 8005DECC 0005ACCC  4B FF ED A5 */	bl get_missle_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005DED0 0005ACD0  7C 64 1B 78 */	mr r4, r3
/* 8005DED4 0005ACD4  38 61 00 30 */	addi r3, r1, 0x30
/* 8005DED8 0005ACD8  38 84 00 30 */	addi r4, r4, 0x30
/* 8005DEDC 0005ACDC  38 A1 00 24 */	addi r5, r1, 0x24
/* 8005DEE0 0005ACE0  4B FB 75 01 */	bl __pl__5xVec3CFRC5xVec3
/* 8005DEE4 0005ACE4  38 7E 00 0C */	addi r3, r30, 0xc
/* 8005DEE8 0005ACE8  38 81 00 30 */	addi r4, r1, 0x30
/* 8005DEEC 0005ACEC  4B FA D3 79 */	bl __as__5xVec3FRC5xVec3
/* 8005DEF0 0005ACF0  83 ED 81 80 */	lwz r31, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005DEF4 0005ACF4  C3 FF 01 28 */	lfs f31, 0x128(r31)
/* 8005DEF8 0005ACF8  4B FD 2D 91 */	bl xurand__Fv
/* 8005DEFC 0005ACFC  C0 1F 01 2C */	lfs f0, 0x12c(r31)
/* 8005DF00 0005AD00  38 61 00 18 */	addi r3, r1, 0x18
/* 8005DF04 0005AD04  38 81 00 48 */	addi r4, r1, 0x48
/* 8005DF08 0005AD08  EC 00 F8 28 */	fsubs f0, f0, f31
/* 8005DF0C 0005AD0C  EC 20 F8 7A */	fmadds f1, f0, f1, f31
/* 8005DF10 0005AD10  4B FA D2 11 */	bl __ml__5xVec3CFf
/* 8005DF14 0005AD14  38 7E 00 18 */	addi r3, r30, 0x18
/* 8005DF18 0005AD18  38 81 00 18 */	addi r4, r1, 0x18
/* 8005DF1C 0005AD1C  4B FA D3 49 */	bl __as__5xVec3FRC5xVec3
/* 8005DF20 0005AD20  4B FD 2D 69 */	bl xurand__Fv
/* 8005DF24 0005AD24  C0 02 89 C8 */	lfs f0, lbl_803CD348-_SDA2_BASE_(r2)
/* 8005DF28 0005AD28  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005DF2C 0005AD2C  EC 41 00 28 */	fsubs f2, f1, f0
/* 8005DF30 0005AD30  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 8005DF34 0005AD34  C0 23 01 30 */	lfs f1, 0x130(r3)
/* 8005DF38 0005AD38  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 8005DF3C 0005AD3C  D0 1E 00 18 */	stfs f0, 0x18(r30)
/* 8005DF40 0005AD40  4B FD 2D 49 */	bl xurand__Fv
/* 8005DF44 0005AD44  C0 02 89 C8 */	lfs f0, lbl_803CD348-_SDA2_BASE_(r2)
/* 8005DF48 0005AD48  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005DF4C 0005AD4C  EC 41 00 28 */	fsubs f2, f1, f0
/* 8005DF50 0005AD50  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 8005DF54 0005AD54  C0 23 01 30 */	lfs f1, 0x130(r3)
/* 8005DF58 0005AD58  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 8005DF5C 0005AD5C  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 8005DF60 0005AD60  4B FD 2D 29 */	bl xurand__Fv
/* 8005DF64 0005AD64  C0 02 89 C8 */	lfs f0, lbl_803CD348-_SDA2_BASE_(r2)
/* 8005DF68 0005AD68  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005DF6C 0005AD6C  EC 41 00 28 */	fsubs f2, f1, f0
/* 8005DF70 0005AD70  C0 1E 00 20 */	lfs f0, 0x20(r30)
/* 8005DF74 0005AD74  C0 23 01 30 */	lfs f1, 0x130(r3)
/* 8005DF78 0005AD78  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 8005DF7C 0005AD7C  D0 1E 00 20 */	stfs f0, 0x20(r30)
/* 8005DF80 0005AD80  4B FD 2D 09 */	bl xurand__Fv
/* 8005DF84 0005AD84  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005DF88 0005AD88  C0 03 01 38 */	lfs f0, 0x138(r3)
/* 8005DF8C 0005AD8C  EC 00 00 72 */	fmuls f0, f0, f1
/* 8005DF90 0005AD90  D0 1E 00 30 */	stfs f0, 0x30(r30)
/* 8005DF94 0005AD94  C0 02 89 D8 */	lfs f0, zEntCruiseBubble_f_0_25-_SDA2_BASE_(r2)
/* 8005DF98 0005AD98  D0 1E 00 48 */	stfs f0, 0x48(r30)
/* 8005DF9C 0005AD9C  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 8005DFA0 0005ADA0  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8005DFA4 0005ADA4  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8005DFA8 0005ADA8  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8005DFAC 0005ADAC  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 8005DFB0 0005ADB0  7C 08 03 A6 */	mtlr r0
/* 8005DFB4 0005ADB4  38 21 00 70 */	addi r1, r1, 0x70
/* 8005DFB8 0005ADB8  4E 80 00 20 */	blr 

/* perturb_direction__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFRC5xVec3ffff */
perturb_direction__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFRC5xVec3ffff:
/* 8005DFBC 0005ADBC  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 8005DFC0 0005ADC0  7C 08 02 A6 */	mflr r0
/* 8005DFC4 0005ADC4  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 8005DFC8 0005ADC8  DB E1 00 B0 */	stfd f31, 0xb0(r1)
/* 8005DFCC 0005ADCC  F3 E1 00 B8 */	psq_st f31, 184(r1), 0, qr0
/* 8005DFD0 0005ADD0  DB C1 00 A0 */	stfd f30, 0xa0(r1)
/* 8005DFD4 0005ADD4  F3 C1 00 A8 */	psq_st f30, 168(r1), 0, qr0
/* 8005DFD8 0005ADD8  DB A1 00 90 */	stfd f29, 0x90(r1)
/* 8005DFDC 0005ADDC  F3 A1 00 98 */	psq_st f29, 152(r1), 0, qr0
/* 8005DFE0 0005ADE0  DB 81 00 80 */	stfd f28, 0x80(r1)
/* 8005DFE4 0005ADE4  F3 81 00 88 */	psq_st f28, 136(r1), 0, qr0
/* 8005DFE8 0005ADE8  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 8005DFEC 0005ADEC  93 C1 00 78 */	stw r30, 0x78(r1)
/* 8005DFF0 0005ADF0  93 A1 00 74 */	stw r29, 0x74(r1)
/* 8005DFF4 0005ADF4  93 81 00 70 */	stw r28, 0x70(r1)
/* 8005DFF8 0005ADF8  FF 80 08 90 */	fmr f28, f1
/* 8005DFFC 0005ADFC  7C 7C 1B 78 */	mr r28, r3
/* 8005E000 0005AE00  FF E0 10 90 */	fmr f31, f2
/* 8005E004 0005AE04  7C 9D 23 78 */	mr r29, r4
/* 8005E008 0005AE08  FF C0 18 90 */	fmr f30, f3
/* 8005E00C 0005AE0C  FF A0 20 90 */	fmr f29, f4
/* 8005E010 0005AE10  4B FD 2C 79 */	bl xurand__Fv
/* 8005E014 0005AE14  EC 1D F0 28 */	fsubs f0, f29, f30
/* 8005E018 0005AE18  EF C0 F0 7A */	fmadds f30, f0, f1, f30
/* 8005E01C 0005AE1C  4B FD 2C 6D */	bl xurand__Fv
/* 8005E020 0005AE20  EC 5F E0 28 */	fsubs f2, f31, f28
/* 8005E024 0005AE24  C0 02 89 C0 */	lfs f0, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005E028 0005AE28  EF A2 E0 7A */	fmadds f29, f2, f1, f28
/* 8005E02C 0005AE2C  EC 3D 07 7C */	fnmsubs f1, f29, f29, f0
/* 8005E030 0005AE30  4B FA C7 CD */	bl xsqrt__Ff
/* 8005E034 0005AE34  3C 60 80 25 */	lis r3, lbl_802552CC@ha
/* 8005E038 0005AE38  FF E0 08 90 */	fmr f31, f1
/* 8005E03C 0005AE3C  38 A3 52 CC */	addi r5, r3, lbl_802552CC@l
/* 8005E040 0005AE40  FC 20 F0 90 */	fmr f1, f30
/* 8005E044 0005AE44  80 85 00 00 */	lwz r4, 0(r5)
/* 8005E048 0005AE48  80 65 00 04 */	lwz r3, 4(r5)
/* 8005E04C 0005AE4C  80 05 00 08 */	lwz r0, 8(r5)
/* 8005E050 0005AE50  90 81 00 2C */	stw r4, 0x2c(r1)
/* 8005E054 0005AE54  90 61 00 30 */	stw r3, 0x30(r1)
/* 8005E058 0005AE58  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005E05C 0005AE5C  48 06 6E 35 */	bl icos__Ff
/* 8005E060 0005AE60  EC 1F 00 72 */	fmuls f0, f31, f1
/* 8005E064 0005AE64  FC 20 F0 90 */	fmr f1, f30
/* 8005E068 0005AE68  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8005E06C 0005AE6C  48 06 6D E1 */	bl isin__Ff
/* 8005E070 0005AE70  EC 1F 00 72 */	fmuls f0, f31, f1
/* 8005E074 0005AE74  3B E1 00 58 */	addi r31, r1, 0x58
/* 8005E078 0005AE78  D3 A1 00 34 */	stfs f29, 0x34(r1)
/* 8005E07C 0005AE7C  7F E3 FB 78 */	mr r3, r31
/* 8005E080 0005AE80  38 81 00 2C */	addi r4, r1, 0x2c
/* 8005E084 0005AE84  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8005E088 0005AE88  4B FA D1 DD */	bl __as__5xVec3FRC5xVec3
/* 8005E08C 0005AE8C  FC 20 EA 10 */	fabs f1, f29
/* 8005E090 0005AE90  C0 02 89 C8 */	lfs f0, lbl_803CD348-_SDA2_BASE_(r2)
/* 8005E094 0005AE94  FC 20 08 18 */	frsp f1, f1
/* 8005E098 0005AE98  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005E09C 0005AE9C  40 81 00 1C */	ble lbl_8005E0B8
/* 8005E0A0 0005AEA0  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005E0A4 0005AEA4  38 61 00 38 */	addi r3, r1, 0x38
/* 8005E0A8 0005AEA8  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005E0AC 0005AEAC  FC 60 10 90 */	fmr f3, f2
/* 8005E0B0 0005AEB0  4B FA D0 3D */	bl assign__5xVec3Ffff
/* 8005E0B4 0005AEB4  48 00 00 18 */	b lbl_8005E0CC
lbl_8005E0B8:
/* 8005E0B8 0005AEB8  C0 22 89 B8 */	lfs f1, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005E0BC 0005AEBC  38 61 00 38 */	addi r3, r1, 0x38
/* 8005E0C0 0005AEC0  C0 62 89 C0 */	lfs f3, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005E0C4 0005AEC4  FC 40 08 90 */	fmr f2, f1
/* 8005E0C8 0005AEC8  4B FA D0 25 */	bl assign__5xVec3Ffff
lbl_8005E0CC:
/* 8005E0CC 0005AECC  7F E4 FB 78 */	mr r4, r31
/* 8005E0D0 0005AED0  38 61 00 14 */	addi r3, r1, 0x14
/* 8005E0D4 0005AED4  38 A1 00 38 */	addi r5, r1, 0x38
/* 8005E0D8 0005AED8  4B FB 74 5D */	bl cross__5xVec3CFRC5xVec3
/* 8005E0DC 0005AEDC  3B C1 00 48 */	addi r30, r1, 0x48
/* 8005E0E0 0005AEE0  38 81 00 14 */	addi r4, r1, 0x14
/* 8005E0E4 0005AEE4  7F C3 F3 78 */	mr r3, r30
/* 8005E0E8 0005AEE8  4B FA D1 7D */	bl __as__5xVec3FRC5xVec3
/* 8005E0EC 0005AEEC  7F C3 F3 78 */	mr r3, r30
/* 8005E0F0 0005AEF0  4B FB 74 C1 */	bl normalize__5xVec3Fv
/* 8005E0F4 0005AEF4  7F C4 F3 78 */	mr r4, r30
/* 8005E0F8 0005AEF8  7F E5 FB 78 */	mr r5, r31
/* 8005E0FC 0005AEFC  38 61 00 08 */	addi r3, r1, 8
/* 8005E100 0005AF00  4B FB 74 35 */	bl cross__5xVec3CFRC5xVec3
/* 8005E104 0005AF04  38 61 00 38 */	addi r3, r1, 0x38
/* 8005E108 0005AF08  38 81 00 08 */	addi r4, r1, 8
/* 8005E10C 0005AF0C  4B FA D1 59 */	bl __as__5xVec3FRC5xVec3
/* 8005E110 0005AF10  7F A5 EB 78 */	mr r5, r29
/* 8005E114 0005AF14  38 61 00 20 */	addi r3, r1, 0x20
/* 8005E118 0005AF18  38 81 00 38 */	addi r4, r1, 0x38
/* 8005E11C 0005AF1C  4B FD 49 41 */	bl xMat3x3LMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 8005E120 0005AF20  80 61 00 20 */	lwz r3, 0x20(r1)
/* 8005E124 0005AF24  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005E128 0005AF28  90 7C 00 00 */	stw r3, 0(r28)
/* 8005E12C 0005AF2C  90 1C 00 04 */	stw r0, 4(r28)
/* 8005E130 0005AF30  80 01 00 28 */	lwz r0, 0x28(r1)
/* 8005E134 0005AF34  90 1C 00 08 */	stw r0, 8(r28)
/* 8005E138 0005AF38  E3 E1 00 B8 */	psq_l f31, 184(r1), 0, qr0
/* 8005E13C 0005AF3C  CB E1 00 B0 */	lfd f31, 0xb0(r1)
/* 8005E140 0005AF40  E3 C1 00 A8 */	psq_l f30, 168(r1), 0, qr0
/* 8005E144 0005AF44  CB C1 00 A0 */	lfd f30, 0xa0(r1)
/* 8005E148 0005AF48  E3 A1 00 98 */	psq_l f29, 152(r1), 0, qr0
/* 8005E14C 0005AF4C  CB A1 00 90 */	lfd f29, 0x90(r1)
/* 8005E150 0005AF50  E3 81 00 88 */	psq_l f28, 136(r1), 0, qr0
/* 8005E154 0005AF54  CB 81 00 80 */	lfd f28, 0x80(r1)
/* 8005E158 0005AF58  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 8005E15C 0005AF5C  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 8005E160 0005AF60  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 8005E164 0005AF64  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 8005E168 0005AF68  83 81 00 70 */	lwz r28, 0x70(r1)
/* 8005E16C 0005AF6C  7C 08 03 A6 */	mtlr r0
/* 8005E170 0005AF70  38 21 00 C0 */	addi r1, r1, 0xc0
/* 8005E174 0005AF74  4E 80 00 20 */	blr 

/* get_next_quadrant__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFRfRfRfRf */
get_next_quadrant__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFRfRfRfRf:
/* 8005E178 0005AF78  3C E0 80 2E */	lis r7, lbl_802DC920@ha
/* 8005E17C 0005AF7C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005E180 0005AF80  39 27 C9 20 */	addi r9, r7, lbl_802DC920@l
/* 8005E184 0005AF84  39 40 00 01 */	li r10, 1
/* 8005E188 0005AF88  80 09 00 00 */	lwz r0, 0(r9)
/* 8005E18C 0005AF8C  80 E9 00 04 */	lwz r7, 4(r9)
/* 8005E190 0005AF90  7D 48 00 30 */	slw r8, r10, r0
/* 8005E194 0005AF94  48 00 00 14 */	b lbl_8005E1A8
lbl_8005E198:
/* 8005E198 0005AF98  81 09 00 00 */	lwz r8, 0(r9)
/* 8005E19C 0005AF9C  38 08 00 01 */	addi r0, r8, 1
/* 8005E1A0 0005AFA0  7D 48 40 30 */	slw r8, r10, r8
/* 8005E1A4 0005AFA4  90 09 00 00 */	stw r0, 0(r9)
lbl_8005E1A8:
/* 8005E1A8 0005AFA8  7C E0 40 39 */	and. r0, r7, r8
/* 8005E1AC 0005AFAC  41 82 FF EC */	beq lbl_8005E198
/* 8005E1B0 0005AFB0  3C E0 80 2E */	lis r7, lbl_802DC920@ha
/* 8005E1B4 0005AFB4  3C 00 43 30 */	lis r0, 0x4330
/* 8005E1B8 0005AFB8  39 07 C9 20 */	addi r8, r7, lbl_802DC920@l
/* 8005E1BC 0005AFBC  90 01 00 08 */	stw r0, 8(r1)
/* 8005E1C0 0005AFC0  81 48 00 00 */	lwz r10, 0(r8)
/* 8005E1C4 0005AFC4  81 28 00 08 */	lwz r9, 8(r8)
/* 8005E1C8 0005AFC8  C8 62 89 E0 */	lfd f3, lbl_803CD360-_SDA2_BASE_(r2)
/* 8005E1CC 0005AFCC  7C EA 4B 96 */	divwu r7, r10, r9
/* 8005E1D0 0005AFD0  C0 28 00 0C */	lfs f1, 0xc(r8)
/* 8005E1D4 0005AFD4  C0 02 89 C0 */	lfs f0, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005E1D8 0005AFD8  90 01 00 10 */	stw r0, 0x10(r1)
/* 8005E1DC 0005AFDC  90 E1 00 0C */	stw r7, 0xc(r1)
/* 8005E1E0 0005AFE0  7C 07 49 D6 */	mullw r0, r7, r9
/* 8005E1E4 0005AFE4  C8 41 00 08 */	lfd f2, 8(r1)
/* 8005E1E8 0005AFE8  EC 42 18 28 */	fsubs f2, f2, f3
/* 8005E1EC 0005AFEC  7C 00 50 50 */	subf r0, r0, r10
/* 8005E1F0 0005AFF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005E1F4 0005AFF4  EC 02 00 7C */	fnmsubs f0, f2, f1, f0
/* 8005E1F8 0005AFF8  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 8005E1FC 0005AFFC  D0 04 00 00 */	stfs f0, 0(r4)
/* 8005E200 0005B000  C0 44 00 00 */	lfs f2, 0(r4)
/* 8005E204 0005B004  C0 08 00 0C */	lfs f0, 0xc(r8)
/* 8005E208 0005B008  EC 02 00 28 */	fsubs f0, f2, f0
/* 8005E20C 0005B00C  D0 03 00 00 */	stfs f0, 0(r3)
/* 8005E210 0005B010  C8 42 89 E0 */	lfd f2, lbl_803CD360-_SDA2_BASE_(r2)
/* 8005E214 0005B014  C0 08 00 10 */	lfs f0, 0x10(r8)
/* 8005E218 0005B018  EC 21 10 28 */	fsubs f1, f1, f2
/* 8005E21C 0005B01C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8005E220 0005B020  D0 05 00 00 */	stfs f0, 0(r5)
/* 8005E224 0005B024  C0 25 00 00 */	lfs f1, 0(r5)
/* 8005E228 0005B028  C0 08 00 10 */	lfs f0, 0x10(r8)
/* 8005E22C 0005B02C  EC 01 00 2A */	fadds f0, f1, f0
/* 8005E230 0005B030  D0 06 00 00 */	stfs f0, 0(r6)
/* 8005E234 0005B034  80 68 00 00 */	lwz r3, 0(r8)
/* 8005E238 0005B038  38 03 00 01 */	addi r0, r3, 1
/* 8005E23C 0005B03C  90 08 00 00 */	stw r0, 0(r8)
/* 8005E240 0005B040  38 21 00 20 */	addi r1, r1, 0x20
/* 8005E244 0005B044  4E 80 00 20 */	blr 

/* reset_quadrants__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFUif */
reset_quadrants__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFUif:
/* 8005E248 0005B048  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8005E24C 0005B04C  7C 08 02 A6 */	mflr r0
/* 8005E250 0005B050  90 01 00 44 */	stw r0, 0x44(r1)
/* 8005E254 0005B054  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8005E258 0005B058  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8005E25C 0005B05C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8005E260 0005B060  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8005E264 0005B064  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8005E268 0005B068  93 81 00 20 */	stw r28, 0x20(r1)
/* 8005E26C 0005B06C  7C 7E 1B 78 */	mr r30, r3
/* 8005E270 0005B070  3C 00 43 30 */	lis r0, 0x4330
/* 8005E274 0005B074  3C 80 80 2E */	lis r4, lbl_802DC920@ha
/* 8005E278 0005B078  38 A0 00 00 */	li r5, 0
/* 8005E27C 0005B07C  93 C1 00 0C */	stw r30, 0xc(r1)
/* 8005E280 0005B080  FF E0 08 90 */	fmr f31, f1
/* 8005E284 0005B084  90 A4 C9 20 */	stw r5, lbl_802DC920@l(r4)
/* 8005E288 0005B088  90 01 00 08 */	stw r0, 8(r1)
/* 8005E28C 0005B08C  C8 22 89 E0 */	lfd f1, lbl_803CD360-_SDA2_BASE_(r2)
/* 8005E290 0005B090  C8 01 00 08 */	lfd f0, 8(r1)
/* 8005E294 0005B094  EC 20 08 28 */	fsubs f1, f0, f1
/* 8005E298 0005B098  4B FA C5 65 */	bl xsqrt__Ff
/* 8005E29C 0005B09C  48 18 F1 41 */	bl __cvt_fp2unsigned
/* 8005E2A0 0005B0A0  38 03 FF FF */	addi r0, r3, -1
/* 8005E2A4 0005B0A4  3C 80 80 2E */	lis r4, lbl_802DC920@ha
/* 8005E2A8 0005B0A8  7C 1E 02 14 */	add r0, r30, r0
/* 8005E2AC 0005B0AC  FC 20 F8 90 */	fmr f1, f31
/* 8005E2B0 0005B0B0  7F E0 1B 96 */	divwu r31, r0, r3
/* 8005E2B4 0005B0B4  3B A4 C9 20 */	addi r29, r4, lbl_802DC920@l
/* 8005E2B8 0005B0B8  90 7D 00 08 */	stw r3, 8(r29)
/* 8005E2BC 0005B0BC  48 06 6B D5 */	bl icos__Ff
/* 8005E2C0 0005B0C0  3C C0 43 30 */	lis r6, 0x4330
/* 8005E2C4 0005B0C4  80 9D 00 08 */	lwz r4, 8(r29)
/* 8005E2C8 0005B0C8  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8005E2CC 0005B0CC  3C A0 80 2E */	lis r5, lbl_802DC920@ha
/* 8005E2D0 0005B0D0  C0 02 89 C0 */	lfs f0, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005E2D4 0005B0D4  7F FF 21 D6 */	mullw r31, r31, r4
/* 8005E2D8 0005B0D8  90 C1 00 10 */	stw r6, 0x10(r1)
/* 8005E2DC 0005B0DC  38 00 00 01 */	li r0, 1
/* 8005E2E0 0005B0E0  C8 42 89 E0 */	lfd f2, lbl_803CD360-_SDA2_BASE_(r2)
/* 8005E2E4 0005B0E4  EC 20 08 28 */	fsubs f1, f0, f1
/* 8005E2E8 0005B0E8  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8005E2EC 0005B0EC  EC 00 10 28 */	fsubs f0, f0, f2
/* 8005E2F0 0005B0F0  7C 03 F8 30 */	slw r3, r0, r31
/* 8005E2F4 0005B0F4  90 81 00 1C */	stw r4, 0x1c(r1)
/* 8005E2F8 0005B0F8  3B A5 C9 20 */	addi r29, r5, lbl_802DC920@l
/* 8005E2FC 0005B0FC  38 03 FF FF */	addi r0, r3, -1
/* 8005E300 0005B100  7F 9E F8 50 */	subf r28, r30, r31
/* 8005E304 0005B104  EC 21 00 24 */	fdivs f1, f1, f0
/* 8005E308 0005B108  90 C1 00 18 */	stw r6, 0x18(r1)
/* 8005E30C 0005B10C  3B C0 00 00 */	li r30, 0
/* 8005E310 0005B110  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8005E314 0005B114  D0 3D 00 0C */	stfs f1, 0xc(r29)
/* 8005E318 0005B118  EC 00 10 28 */	fsubs f0, f0, f2
/* 8005E31C 0005B11C  C0 22 8A E8 */	lfs f1, lbl_803CD468-_SDA2_BASE_(r2)
/* 8005E320 0005B120  EC 01 00 24 */	fdivs f0, f1, f0
/* 8005E324 0005B124  90 1D 00 04 */	stw r0, 4(r29)
/* 8005E328 0005B128  D0 1D 00 10 */	stfs f0, 0x10(r29)
/* 8005E32C 0005B12C  48 00 00 60 */	b lbl_8005E38C
lbl_8005E330:
/* 8005E330 0005B130  4B FD 29 39 */	bl xrand__Fv
/* 8005E334 0005B134  54 65 9B 7E */	srwi r5, r3, 0xd
/* 8005E338 0005B138  7C 9E F8 50 */	subf r4, r30, r31
/* 8005E33C 0005B13C  7C 05 23 96 */	divwu r0, r5, r4
/* 8005E340 0005B140  80 DD 00 04 */	lwz r6, 4(r29)
/* 8005E344 0005B144  38 E0 00 00 */	li r7, 0
/* 8005E348 0005B148  39 00 00 00 */	li r8, 0
/* 8005E34C 0005B14C  38 60 00 01 */	li r3, 1
/* 8005E350 0005B150  7C 00 21 D6 */	mullw r0, r0, r4
/* 8005E354 0005B154  7C A0 28 50 */	subf r5, r0, r5
lbl_8005E358:
/* 8005E358 0005B158  7C 64 38 30 */	slw r4, r3, r7
/* 8005E35C 0005B15C  7C C0 20 39 */	and. r0, r6, r4
/* 8005E360 0005B160  41 82 00 20 */	beq lbl_8005E380
/* 8005E364 0005B164  7C 08 28 40 */	cmplw r8, r5
/* 8005E368 0005B168  41 80 00 14 */	blt lbl_8005E37C
/* 8005E36C 0005B16C  80 1D 00 04 */	lwz r0, 4(r29)
/* 8005E370 0005B170  7C 00 20 78 */	andc r0, r0, r4
/* 8005E374 0005B174  90 1D 00 04 */	stw r0, 4(r29)
/* 8005E378 0005B178  48 00 00 10 */	b lbl_8005E388
lbl_8005E37C:
/* 8005E37C 0005B17C  39 08 00 01 */	addi r8, r8, 1
lbl_8005E380:
/* 8005E380 0005B180  38 E7 00 01 */	addi r7, r7, 1
/* 8005E384 0005B184  4B FF FF D4 */	b lbl_8005E358
lbl_8005E388:
/* 8005E388 0005B188  3B DE 00 01 */	addi r30, r30, 1
lbl_8005E38C:
/* 8005E38C 0005B18C  7C 1E E0 40 */	cmplw r30, r28
/* 8005E390 0005B190  41 80 FF A0 */	blt lbl_8005E330
/* 8005E394 0005B194  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8005E398 0005B198  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8005E39C 0005B19C  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8005E3A0 0005B1A0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8005E3A4 0005B1A4  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8005E3A8 0005B1A8  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8005E3AC 0005B1AC  83 81 00 20 */	lwz r28, 0x20(r1)
/* 8005E3B0 0005B1B0  7C 08 03 A6 */	mtlr r0
/* 8005E3B4 0005B1B4  38 21 00 40 */	addi r1, r1, 0x40
/* 8005E3B8 0005B1B8  4E 80 00 20 */	blr 

/* apply_damage__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFf */
apply_damage__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFf:
/* 8005E3BC 0005B1BC  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8005E3C0 0005B1C0  7C 08 02 A6 */	mflr r0
/* 8005E3C4 0005B1C4  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 8005E3C8 0005B1C8  90 01 00 84 */	stw r0, 0x84(r1)
/* 8005E3CC 0005B1CC  38 84 C2 A4 */	addi r4, r4, shared__13cruise_bubble@l
/* 8005E3D0 0005B1D0  38 00 00 01 */	li r0, 1
/* 8005E3D4 0005B1D4  DB E1 00 78 */	stfd f31, 0x78(r1)
/* 8005E3D8 0005B1D8  FF E0 08 90 */	fmr f31, f1
/* 8005E3DC 0005B1DC  38 84 00 50 */	addi r4, r4, 0x50
/* 8005E3E0 0005B1E0  93 E1 00 74 */	stw r31, 0x74(r1)
/* 8005E3E4 0005B1E4  3B E1 00 3C */	addi r31, r1, 0x3c
/* 8005E3E8 0005B1E8  93 C1 00 70 */	stw r30, 0x70(r1)
/* 8005E3EC 0005B1EC  7C 7E 1B 78 */	mr r30, r3
/* 8005E3F0 0005B1F0  7F E3 FB 78 */	mr r3, r31
/* 8005E3F4 0005B1F4  98 01 00 38 */	stb r0, 0x38(r1)
/* 8005E3F8 0005B1F8  4B FA CE 6D */	bl __as__5xVec3FRC5xVec3
/* 8005E3FC 0005B1FC  D3 E1 00 48 */	stfs f31, 0x48(r1)
/* 8005E400 0005B200  7F E4 FB 78 */	mr r4, r31
/* 8005E404 0005B204  38 61 00 18 */	addi r3, r1, 0x18
/* 8005E408 0005B208  48 00 22 09 */	bl xQuickCullForSphere__FP7xQCDataPC7xSphere
/* 8005E40C 0005B20C  FC 20 F8 90 */	fmr f1, f31
/* 8005E410 0005B210  38 61 00 14 */	addi r3, r1, 0x14
/* 8005E414 0005B214  48 00 01 5D */	bl __ct__Q413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explode13cb_damage_entFf
/* 8005E418 0005B218  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005E41C 0005B21C  3C 60 80 3D */	lis r3, colls_grid@ha
/* 8005E420 0005B220  38 81 00 18 */	addi r4, r1, 0x18
/* 8005E424 0005B224  38 C1 00 10 */	addi r6, r1, 0x10
/* 8005E428 0005B228  90 01 00 10 */	stw r0, 0x10(r1)
/* 8005E42C 0005B22C  38 63 A6 D8 */	addi r3, r3, colls_grid@l
/* 8005E430 0005B230  7C 85 23 78 */	mr r5, r4
/* 8005E434 0005B234  48 00 22 11 */	bl xGridCheckBound_esc__0_Q413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explode13cb_damage_ent_esc__1___FR5xGridRC6xBoundRC7xQCDataQ413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explode13cb_damage_ent
/* 8005E438 0005B238  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005E43C 0005B23C  3C 60 80 3D */	lis r3, colls_oso_grid@ha
/* 8005E440 0005B240  38 81 00 18 */	addi r4, r1, 0x18
/* 8005E444 0005B244  38 C1 00 0C */	addi r6, r1, 0xc
/* 8005E448 0005B248  90 01 00 0C */	stw r0, 0xc(r1)
/* 8005E44C 0005B24C  38 63 A7 74 */	addi r3, r3, colls_oso_grid@l
/* 8005E450 0005B250  7C 85 23 78 */	mr r5, r4
/* 8005E454 0005B254  48 00 21 F1 */	bl xGridCheckBound_esc__0_Q413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explode13cb_damage_ent_esc__1___FR5xGridRC6xBoundRC7xQCDataQ413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explode13cb_damage_ent
/* 8005E458 0005B258  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005E45C 0005B25C  3C 60 80 3D */	lis r3, npcs_grid@ha
/* 8005E460 0005B260  38 81 00 18 */	addi r4, r1, 0x18
/* 8005E464 0005B264  38 C1 00 08 */	addi r6, r1, 8
/* 8005E468 0005B268  90 01 00 08 */	stw r0, 8(r1)
/* 8005E46C 0005B26C  38 63 A7 A8 */	addi r3, r3, npcs_grid@l
/* 8005E470 0005B270  7C 85 23 78 */	mr r5, r4
/* 8005E474 0005B274  48 00 21 D1 */	bl xGridCheckBound_esc__0_Q413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explode13cb_damage_ent_esc__1___FR5xGridRC6xBoundRC7xQCDataQ413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explode13cb_damage_ent
/* 8005E478 0005B278  FC 20 F8 90 */	fmr f1, f31
/* 8005E47C 0005B27C  7F C3 F3 78 */	mr r3, r30
/* 8005E480 0005B280  48 00 00 21 */	bl apply_damage_hazards__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFf
/* 8005E484 0005B284  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8005E488 0005B288  CB E1 00 78 */	lfd f31, 0x78(r1)
/* 8005E48C 0005B28C  83 E1 00 74 */	lwz r31, 0x74(r1)
/* 8005E490 0005B290  83 C1 00 70 */	lwz r30, 0x70(r1)
/* 8005E494 0005B294  7C 08 03 A6 */	mtlr r0
/* 8005E498 0005B298  38 21 00 80 */	addi r1, r1, 0x80
/* 8005E49C 0005B29C  4E 80 00 20 */	blr 

/* apply_damage_hazards__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFf */
apply_damage_hazards__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFf:
/* 8005E4A0 0005B2A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005E4A4 0005B2A4  7C 08 02 A6 */	mflr r0
/* 8005E4A8 0005B2A8  3C 60 80 06 */	lis r3, hazard_check__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFR9NPCHazardPv@ha
/* 8005E4AC 0005B2AC  3C A0 00 21 */	lis r5, 0x00208000@ha
/* 8005E4B0 0005B2B0  D0 21 00 08 */	stfs f1, 8(r1)
/* 8005E4B4 0005B2B4  38 63 E4 D8 */	addi r3, r3, hazard_check__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFR9NPCHazardPv@l
/* 8005E4B8 0005B2B8  38 A5 80 00 */	addi r5, r5, 0x00208000@l
/* 8005E4BC 0005B2BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005E4C0 0005B2C0  80 81 00 08 */	lwz r4, 8(r1)
/* 8005E4C4 0005B2C4  48 12 9D 55 */	bl HAZ_Iterate__FPFR9NPCHazardPv_bPvi
/* 8005E4C8 0005B2C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005E4CC 0005B2CC  7C 08 03 A6 */	mtlr r0
/* 8005E4D0 0005B2D0  38 21 00 10 */	addi r1, r1, 0x10
/* 8005E4D4 0005B2D4  4E 80 00 20 */	blr 

hazard_check__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFR9NPCHazardPv:
/* 8005E4D8 0005B2D8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8005E4DC 0005B2DC  7C 08 02 A6 */	mflr r0
/* 8005E4E0 0005B2E0  90 01 00 44 */	stw r0, 0x44(r1)
/* 8005E4E4 0005B2E4  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8005E4E8 0005B2E8  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8005E4EC 0005B2EC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8005E4F0 0005B2F0  90 81 00 08 */	stw r4, 8(r1)
/* 8005E4F4 0005B2F4  7C 7F 1B 78 */	mr r31, r3
/* 8005E4F8 0005B2F8  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 8005E4FC 0005B2FC  38 61 00 0C */	addi r3, r1, 0xc
/* 8005E500 0005B300  38 A4 C2 A4 */	addi r5, r4, shared__13cruise_bubble@l
/* 8005E504 0005B304  C3 E1 00 08 */	lfs f31, 8(r1)
/* 8005E508 0005B308  38 9F 00 08 */	addi r4, r31, 8
/* 8005E50C 0005B30C  38 A5 00 50 */	addi r5, r5, 0x50
/* 8005E510 0005B310  4B FA CC BD */	bl __mi__5xVec3CFRC5xVec3
/* 8005E514 0005B314  C0 1F 00 68 */	lfs f0, 0x68(r31)
/* 8005E518 0005B318  38 61 00 18 */	addi r3, r1, 0x18
/* 8005E51C 0005B31C  80 A1 00 0C */	lwz r5, 0xc(r1)
/* 8005E520 0005B320  80 81 00 10 */	lwz r4, 0x10(r1)
/* 8005E524 0005B324  EF FF 00 2A */	fadds f31, f31, f0
/* 8005E528 0005B328  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005E52C 0005B32C  90 A1 00 18 */	stw r5, 0x18(r1)
/* 8005E530 0005B330  90 81 00 1C */	stw r4, 0x1c(r1)
/* 8005E534 0005B334  90 01 00 20 */	stw r0, 0x20(r1)
/* 8005E538 0005B338  4B FA CB C5 */	bl length2__5xVec3CFv
/* 8005E53C 0005B33C  EC 1F 07 F2 */	fmuls f0, f31, f31
/* 8005E540 0005B340  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005E544 0005B344  40 80 00 0C */	bge lbl_8005E550
/* 8005E548 0005B348  7F E3 FB 78 */	mr r3, r31
/* 8005E54C 0005B34C  48 00 20 B5 */	bl MarkForRecycle__9NPCHazardFv
lbl_8005E550:
/* 8005E550 0005B350  38 60 00 01 */	li r3, 1
/* 8005E554 0005B354  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8005E558 0005B358  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8005E55C 0005B35C  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8005E560 0005B360  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8005E564 0005B364  7C 08 03 A6 */	mtlr r0
/* 8005E568 0005B368  38 21 00 40 */	addi r1, r1, 0x40
/* 8005E56C 0005B36C  4E 80 00 20 */	blr 

/* __ct__Q413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode13cb_damage_entFf */
__ct__Q413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explode13cb_damage_entFf:
/* 8005E570 0005B370  D0 23 00 00 */	stfs f1, 0(r3)
/* 8005E574 0005B374  4E 80 00 20 */	blr 

stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFv:
/* 8005E578 0005B378  3C 60 80 29 */	lis r3, lbl_80290000@ha
/* 8005E57C 0005B37C  84 03 C2 A4 */	lwzu r0, -0x3d5c(r3)
/* 8005E580 0005B380  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 8005E584 0005B384  90 03 00 00 */	stw r0, lbl_80290000@l(r3)
/* 8005E588 0005B388  4E 80 00 20 */	blr 

update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFf:
/* 8005E58C 0005B38C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005E590 0005B390  7C 08 02 A6 */	mflr r0
/* 8005E594 0005B394  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005E598 0005B398  C0 03 00 08 */	lfs f0, 8(r3)
/* 8005E59C 0005B39C  EC 00 08 2A */	fadds f0, f0, f1
/* 8005E5A0 0005B3A0  D0 03 00 08 */	stfs f0, 8(r3)
/* 8005E5A4 0005B3A4  80 8D 81 80 */	lwz r4, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005E5A8 0005B3A8  C0 23 00 08 */	lfs f1, 8(r3)
/* 8005E5AC 0005B3AC  C0 04 00 6C */	lfs f0, 0x6c(r4)
/* 8005E5B0 0005B3B0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005E5B4 0005B3B4  4C 40 13 82 */	cror 2, 0, 2
/* 8005E5B8 0005B3B8  40 82 00 14 */	bne lbl_8005E5CC
/* 8005E5BC 0005B3BC  EC 21 00 24 */	fdivs f1, f1, f0
/* 8005E5C0 0005B3C0  C0 04 00 68 */	lfs f0, 0x68(r4)
/* 8005E5C4 0005B3C4  EC 21 00 32 */	fmuls f1, f1, f0
/* 8005E5C8 0005B3C8  4B FF FD F5 */	bl apply_damage__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explodeFf
lbl_8005E5CC:
/* 8005E5CC 0005B3CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005E5D0 0005B3D0  38 60 00 06 */	li r3, 6
/* 8005E5D4 0005B3D4  7C 08 03 A6 */	mtlr r0
/* 8005E5D8 0005B3D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8005E5DC 0005B3DC  4E 80 00 20 */	blr 

start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimFv:
/* 8005E5E0 0005B3E0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005E5E4 0005B3E4  7C 08 02 A6 */	mflr r0
/* 8005E5E8 0005B3E8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005E5EC 0005B3EC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8005E5F0 0005B3F0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8005E5F4 0005B3F4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8005E5F8 0005B3F8  7C 7D 1B 78 */	mr r29, r3
/* 8005E5FC 0005B3FC  4B FF 8F 99 */	bl capture_camera__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005E600 0005B400  38 60 00 01 */	li r3, 1
/* 8005E604 0005B404  4B FE A3 F5 */	bl xSndSelectListenerMode__F24sound_listener_game_mode
/* 8005E608 0005B408  3C 60 80 3C */	lis r3, globals@ha
/* 8005E60C 0005B40C  C0 22 8A B0 */	lfs f1, lbl_803CD430-_SDA2_BASE_(r2)
/* 8005E610 0005B410  38 63 05 58 */	addi r3, r3, globals@l
/* 8005E614 0005B414  4B FA E5 FD */	bl xCameraUpdate__FP7xCameraf
/* 8005E618 0005B418  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005E61C 0005B41C  3C 60 80 3C */	lis r3, globals@ha
/* 8005E620 0005B420  38 63 05 58 */	addi r3, r3, globals@l
/* 8005E624 0005B424  D0 1D 00 1C */	stfs f0, 0x1c(r29)
/* 8005E628 0005B428  3B E3 00 14 */	addi r31, r3, 0x14
/* 8005E62C 0005B42C  D0 1D 00 14 */	stfs f0, 0x14(r29)
/* 8005E630 0005B430  D0 1D 00 0C */	stfs f0, 0xc(r29)
/* 8005E634 0005B434  4B FF 9A D5 */	bl get_player_loc__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005E638 0005B438  C0 7F 00 30 */	lfs f3, 0x30(r31)
/* 8005E63C 0005B43C  7C 7E 1B 78 */	mr r30, r3
/* 8005E640 0005B440  C0 23 00 00 */	lfs f1, 0(r3)
/* 8005E644 0005B444  80 82 BE B0 */	lwz r4, lbl_803D0830-_SDA2_BASE_(r2)
/* 8005E648 0005B448  80 02 BE B4 */	lwz r0, lbl_803D0834-_SDA2_BASE_(r2)
/* 8005E64C 0005B44C  EC 23 08 28 */	fsubs f1, f3, f1
/* 8005E650 0005B450  90 81 00 08 */	stw r4, 8(r1)
/* 8005E654 0005B454  C0 5F 00 38 */	lfs f2, 0x38(r31)
/* 8005E658 0005B458  C0 03 00 08 */	lfs f0, 8(r3)
/* 8005E65C 0005B45C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8005E660 0005B460  EC 42 00 28 */	fsubs f2, f2, f0
/* 8005E664 0005B464  D0 21 00 08 */	stfs f1, 8(r1)
/* 8005E668 0005B468  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 8005E66C 0005B46C  4B FA 7A 05 */	bl xatan2__Fff
/* 8005E670 0005B470  D0 3D 00 08 */	stfs f1, 8(r29)
/* 8005E674 0005B474  38 61 00 08 */	addi r3, r1, 8
/* 8005E678 0005B478  C0 3F 00 34 */	lfs f1, 0x34(r31)
/* 8005E67C 0005B47C  C0 1E 00 04 */	lfs f0, 4(r30)
/* 8005E680 0005B480  EC 01 00 28 */	fsubs f0, f1, f0
/* 8005E684 0005B484  D0 1D 00 10 */	stfs f0, 0x10(r29)
/* 8005E688 0005B488  4B FD 81 D1 */	bl length__5xVec2CFv
/* 8005E68C 0005B48C  D0 3D 00 18 */	stfs f1, 0x18(r29)
/* 8005E690 0005B490  7F E4 FB 78 */	mr r4, r31
/* 8005E694 0005B494  38 7D 00 20 */	addi r3, r29, 0x20
/* 8005E698 0005B498  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005E69C 0005B49C  D0 1D 00 44 */	stfs f0, 0x44(r29)
/* 8005E6A0 0005B4A0  D0 1D 00 40 */	stfs f0, 0x40(r29)
/* 8005E6A4 0005B4A4  4B FD 45 E1 */	bl xQuatFromMat__FP5xQuatPC7xMat3x3
/* 8005E6A8 0005B4A8  3C 60 80 2E */	lis r3, lbl_802DBDF0@ha
/* 8005E6AC 0005B4AC  7F E4 FB 78 */	mr r4, r31
/* 8005E6B0 0005B4B0  38 63 BD F0 */	addi r3, r3, lbl_802DBDF0@l
/* 8005E6B4 0005B4B4  4B FA CE B9 */	bl __as__7xMat4x3FRC7xMat4x3
/* 8005E6B8 0005B4B8  3C 60 80 2E */	lis r3, lbl_802DBDF0@ha
/* 8005E6BC 0005B4BC  7F C4 F3 78 */	mr r4, r30
/* 8005E6C0 0005B4C0  38 63 BD F0 */	addi r3, r3, lbl_802DBDF0@l
/* 8005E6C4 0005B4C4  38 63 00 30 */	addi r3, r3, 0x30
/* 8005E6C8 0005B4C8  4B FA CB 69 */	bl __ami__5xVec3FRC5xVec3
/* 8005E6CC 0005B4CC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005E6D0 0005B4D0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8005E6D4 0005B4D4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8005E6D8 0005B4D8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8005E6DC 0005B4DC  7C 08 03 A6 */	mtlr r0
/* 8005E6E0 0005B4E0  38 21 00 20 */	addi r1, r1, 0x20
/* 8005E6E4 0005B4E4  4E 80 00 20 */	blr 

stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimFv:
/* 8005E6E8 0005B4E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005E6EC 0005B4EC  7C 08 02 A6 */	mflr r0
/* 8005E6F0 0005B4F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005E6F4 0005B4F4  4B FF 8E D5 */	bl release_camera__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005E6F8 0005B4F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005E6FC 0005B4FC  7C 08 03 A6 */	mtlr r0
/* 8005E700 0005B500  38 21 00 10 */	addi r1, r1, 0x10
/* 8005E704 0005B504  4E 80 00 20 */	blr 

update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimFf:
/* 8005E708 0005B508  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005E70C 0005B50C  7C 08 02 A6 */	mflr r0
/* 8005E710 0005B510  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005E714 0005B514  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8005E718 0005B518  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8005E71C 0005B51C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005E720 0005B520  FF E0 08 90 */	fmr f31, f1
/* 8005E724 0005B524  C0 03 00 40 */	lfs f0, 0x40(r3)
/* 8005E728 0005B528  7C 7F 1B 78 */	mr r31, r3
/* 8005E72C 0005B52C  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005E730 0005B530  38 80 00 00 */	li r4, 0
/* 8005E734 0005B534  EC 00 F8 2A */	fadds f0, f0, f31
/* 8005E738 0005B538  D0 1F 00 40 */	stfs f0, 0x40(r31)
/* 8005E73C 0005B53C  80 03 C2 A4 */	lwz r0, shared__13cruise_bubble@l(r3)
/* 8005E740 0005B540  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 8005E744 0005B544  41 82 00 20 */	beq lbl_8005E764
/* 8005E748 0005B548  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005E74C 0005B54C  C0 3F 00 40 */	lfs f1, 0x40(r31)
/* 8005E750 0005B550  C0 03 00 00 */	lfs f0, 0(r3)
/* 8005E754 0005B554  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005E758 0005B558  4C 41 13 82 */	cror 2, 1, 2
/* 8005E75C 0005B55C  40 82 00 08 */	bne lbl_8005E764
/* 8005E760 0005B560  38 80 00 01 */	li r4, 1
lbl_8005E764:
/* 8005E764 0005B564  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8005E768 0005B568  41 82 00 14 */	beq lbl_8005E77C
/* 8005E76C 0005B56C  FC 20 F8 90 */	fmr f1, f31
/* 8005E770 0005B570  7F E3 FB 78 */	mr r3, r31
/* 8005E774 0005B574  48 00 04 AD */	bl move__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimFf
/* 8005E778 0005B578  48 00 00 10 */	b lbl_8005E788
lbl_8005E77C:
/* 8005E77C 0005B57C  FC 20 F8 90 */	fmr f1, f31
/* 8005E780 0005B580  7F E3 FB 78 */	mr r3, r31
/* 8005E784 0005B584  48 00 04 0D */	bl stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimFf
lbl_8005E788:
/* 8005E788 0005B588  7F E3 FB 78 */	mr r3, r31
/* 8005E78C 0005B58C  48 00 03 71 */	bl apply_motion__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimCFv
/* 8005E790 0005B590  7F E3 FB 78 */	mr r3, r31
/* 8005E794 0005B594  48 00 01 B1 */	bl collide_inward__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimFv
/* 8005E798 0005B598  FC 20 F8 90 */	fmr f1, f31
/* 8005E79C 0005B59C  7F E3 FB 78 */	mr r3, r31
/* 8005E7A0 0005B5A0  48 00 00 AD */	bl turn__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimFf
/* 8005E7A4 0005B5A4  7F E3 FB 78 */	mr r3, r31
/* 8005E7A8 0005B5A8  48 00 00 61 */	bl apply_turn__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimCFv
/* 8005E7AC 0005B5AC  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005E7B0 0005B5B0  80 03 C2 A4 */	lwz r0, shared__13cruise_bubble@l(r3)
/* 8005E7B4 0005B5B4  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 8005E7B8 0005B5B8  41 82 00 30 */	beq lbl_8005E7E8
/* 8005E7BC 0005B5BC  C0 1F 00 44 */	lfs f0, 0x44(r31)
/* 8005E7C0 0005B5C0  EC 00 F8 2A */	fadds f0, f0, f31
/* 8005E7C4 0005B5C4  D0 1F 00 44 */	stfs f0, 0x44(r31)
/* 8005E7C8 0005B5C8  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005E7CC 0005B5CC  C0 3F 00 44 */	lfs f1, 0x44(r31)
/* 8005E7D0 0005B5D0  C0 03 00 94 */	lfs f0, 0x94(r3)
/* 8005E7D4 0005B5D4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005E7D8 0005B5D8  4C 41 13 82 */	cror 2, 1, 2
/* 8005E7DC 0005B5DC  40 82 00 0C */	bne lbl_8005E7E8
/* 8005E7E0 0005B5E0  38 60 00 08 */	li r3, 8
/* 8005E7E4 0005B5E4  48 00 00 08 */	b lbl_8005E7EC
lbl_8005E7E8:
/* 8005E7E8 0005B5E8  38 60 00 07 */	li r3, 7
lbl_8005E7EC:
/* 8005E7EC 0005B5EC  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8005E7F0 0005B5F0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005E7F4 0005B5F4  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8005E7F8 0005B5F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005E7FC 0005B5FC  7C 08 03 A6 */	mtlr r0
/* 8005E800 0005B600  38 21 00 20 */	addi r1, r1, 0x20
/* 8005E804 0005B604  4E 80 00 20 */	blr 

/* apply_turn__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimCFv */
apply_turn__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimCFv:
/* 8005E808 0005B608  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8005E80C 0005B60C  7C 08 02 A6 */	mflr r0
/* 8005E810 0005B610  38 63 00 20 */	addi r3, r3, 0x20
/* 8005E814 0005B614  90 01 00 44 */	stw r0, 0x44(r1)
/* 8005E818 0005B618  38 81 00 08 */	addi r4, r1, 8
/* 8005E81C 0005B61C  4B FD 46 E5 */	bl xQuatToMat__FPC5xQuatP7xMat3x3
/* 8005E820 0005B620  C0 22 89 B8 */	lfs f1, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005E824 0005B624  3C 60 80 3C */	lis r3, globals@ha
/* 8005E828 0005B628  38 63 05 58 */	addi r3, r3, globals@l
/* 8005E82C 0005B62C  38 81 00 08 */	addi r4, r1, 8
/* 8005E830 0005B630  FC 40 08 90 */	fmr f2, f1
/* 8005E834 0005B634  FC 60 08 90 */	fmr f3, f1
/* 8005E838 0005B638  4B FA F2 DD */	bl xCameraRotate__FP7xCameraRC7xMat3x3fff
/* 8005E83C 0005B63C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8005E840 0005B640  7C 08 03 A6 */	mtlr r0
/* 8005E844 0005B644  38 21 00 40 */	addi r1, r1, 0x40
/* 8005E848 0005B648  4E 80 00 20 */	blr 

/* turn__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimFf */
turn__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimFf:
/* 8005E84C 0005B64C  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8005E850 0005B650  7C 08 02 A6 */	mflr r0
/* 8005E854 0005B654  90 01 00 84 */	stw r0, 0x84(r1)
/* 8005E858 0005B658  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 8005E85C 0005B65C  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 8005E860 0005B660  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 8005E864 0005B664  7C 7F 1B 78 */	mr r31, r3
/* 8005E868 0005B668  FF E0 08 90 */	fmr f31, f1
/* 8005E86C 0005B66C  4B FF 98 9D */	bl get_player_loc__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005E870 0005B670  80 C3 00 00 */	lwz r6, 0(r3)
/* 8005E874 0005B674  3C 80 80 3C */	lis r4, globals@ha
/* 8005E878 0005B678  80 03 00 04 */	lwz r0, 4(r3)
/* 8005E87C 0005B67C  38 84 05 58 */	addi r4, r4, globals@l
/* 8005E880 0005B680  38 84 00 44 */	addi r4, r4, 0x44
/* 8005E884 0005B684  38 A1 00 20 */	addi r5, r1, 0x20
/* 8005E888 0005B688  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005E88C 0005B68C  90 C1 00 20 */	stw r6, 0x20(r1)
/* 8005E890 0005B690  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 8005E894 0005B694  80 03 00 08 */	lwz r0, 8(r3)
/* 8005E898 0005B698  38 61 00 08 */	addi r3, r1, 8
/* 8005E89C 0005B69C  90 01 00 28 */	stw r0, 0x28(r1)
/* 8005E8A0 0005B6A0  80 CD 81 80 */	lwz r6, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005E8A4 0005B6A4  C0 06 00 74 */	lfs f0, 0x74(r6)
/* 8005E8A8 0005B6A8  EC 01 00 2A */	fadds f0, f1, f0
/* 8005E8AC 0005B6AC  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8005E8B0 0005B6B0  4B FA C9 1D */	bl __mi__5xVec3CFRC5xVec3
/* 8005E8B4 0005B6B4  80 C1 00 08 */	lwz r6, 8(r1)
/* 8005E8B8 0005B6B8  38 61 00 2C */	addi r3, r1, 0x2c
/* 8005E8BC 0005B6BC  80 A1 00 0C */	lwz r5, 0xc(r1)
/* 8005E8C0 0005B6C0  38 81 00 14 */	addi r4, r1, 0x14
/* 8005E8C4 0005B6C4  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8005E8C8 0005B6C8  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8005E8CC 0005B6CC  90 A1 00 18 */	stw r5, 0x18(r1)
/* 8005E8D0 0005B6D0  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8005E8D4 0005B6D4  4B FD 36 DD */	bl xMat3x3LookVec__FP7xMat3x3PC5xVec3
/* 8005E8D8 0005B6D8  38 7F 00 30 */	addi r3, r31, 0x30
/* 8005E8DC 0005B6DC  38 81 00 2C */	addi r4, r1, 0x2c
/* 8005E8E0 0005B6E0  4B FD 43 A5 */	bl xQuatFromMat__FP5xQuatPC7xMat3x3
/* 8005E8E4 0005B6E4  FC 20 F8 90 */	fmr f1, f31
/* 8005E8E8 0005B6E8  4B FA FE C9 */	bl xexp__Ff
/* 8005E8EC 0005B6EC  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005E8F0 0005B6F0  C0 02 89 C0 */	lfs f0, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005E8F4 0005B6F4  C0 43 00 90 */	lfs f2, 0x90(r3)
/* 8005E8F8 0005B6F8  EC 22 00 72 */	fmuls f1, f2, f1
/* 8005E8FC 0005B6FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005E900 0005B700  4C 41 13 82 */	cror 2, 1, 2
/* 8005E904 0005B704  40 82 00 14 */	bne lbl_8005E918
/* 8005E908 0005B708  38 7F 00 20 */	addi r3, r31, 0x20
/* 8005E90C 0005B70C  38 9F 00 30 */	addi r4, r31, 0x30
/* 8005E910 0005B710  4B FA FD DD */	bl __as__5xQuatFRC5xQuat
/* 8005E914 0005B714  48 00 00 14 */	b lbl_8005E928
lbl_8005E918:
/* 8005E918 0005B718  38 7F 00 20 */	addi r3, r31, 0x20
/* 8005E91C 0005B71C  38 BF 00 30 */	addi r5, r31, 0x30
/* 8005E920 0005B720  7C 64 1B 78 */	mr r4, r3
/* 8005E924 0005B724  4B FD 47 AD */	bl xQuatSlerp__FP5xQuatPC5xQuatPC5xQuatf
lbl_8005E928:
/* 8005E928 0005B728  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 8005E92C 0005B72C  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8005E930 0005B730  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 8005E934 0005B734  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 8005E938 0005B738  7C 08 03 A6 */	mtlr r0
/* 8005E93C 0005B73C  38 21 00 80 */	addi r1, r1, 0x80
/* 8005E940 0005B740  4E 80 00 20 */	blr 

/* collide_inward__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimFv */
collide_inward__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimFv:
/* 8005E944 0005B744  94 21 FE 70 */	stwu r1, -0x190(r1)
/* 8005E948 0005B748  7C 08 02 A6 */	mflr r0
/* 8005E94C 0005B74C  3C 60 80 3C */	lis r3, globals@ha
/* 8005E950 0005B750  90 01 01 94 */	stw r0, 0x194(r1)
/* 8005E954 0005B754  93 E1 01 8C */	stw r31, 0x18c(r1)
/* 8005E958 0005B758  3B E3 05 58 */	addi r31, r3, globals@l
/* 8005E95C 0005B75C  93 C1 01 88 */	stw r30, 0x188(r1)
/* 8005E960 0005B760  93 A1 01 84 */	stw r29, 0x184(r1)
/* 8005E964 0005B764  4B FF 97 A5 */	bl get_player_loc__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005E968 0005B768  80 C3 00 00 */	lwz r6, 0(r3)
/* 8005E96C 0005B76C  3C 80 80 3C */	lis r4, globals@ha
/* 8005E970 0005B770  80 03 00 04 */	lwz r0, 4(r3)
/* 8005E974 0005B774  38 A4 05 58 */	addi r5, r4, globals@l
/* 8005E978 0005B778  38 81 00 08 */	addi r4, r1, 8
/* 8005E97C 0005B77C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8005E980 0005B780  38 A5 00 44 */	addi r5, r5, 0x44
/* 8005E984 0005B784  90 C1 00 08 */	stw r6, 8(r1)
/* 8005E988 0005B788  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8005E98C 0005B78C  80 03 00 08 */	lwz r0, 8(r3)
/* 8005E990 0005B790  38 61 00 38 */	addi r3, r1, 0x38
/* 8005E994 0005B794  90 01 00 10 */	stw r0, 0x10(r1)
/* 8005E998 0005B798  80 CD 81 80 */	lwz r6, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005E99C 0005B79C  C0 06 00 74 */	lfs f0, 0x74(r6)
/* 8005E9A0 0005B7A0  EC 01 00 2A */	fadds f0, f1, f0
/* 8005E9A4 0005B7A4  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8005E9A8 0005B7A8  C0 22 8A F4 */	lfs f1, lbl_803CD474-_SDA2_BASE_(r2)
/* 8005E9AC 0005B7AC  4B FB 35 B9 */	bl xSweptSpherePrepare__FP12xSweptSphereP5xVec3P5xVec3f
/* 8005E9B0 0005B7B0  3C 80 80 3C */	lis r4, globals@ha
/* 8005E9B4 0005B7B4  38 61 00 38 */	addi r3, r1, 0x38
/* 8005E9B8 0005B7B8  3B C4 05 58 */	addi r30, r4, globals@l
/* 8005E9BC 0005B7BC  80 9E 1F C0 */	lwz r4, 0x1fc0(r30)
/* 8005E9C0 0005B7C0  80 84 00 44 */	lwz r4, 0x44(r4)
/* 8005E9C4 0005B7C4  4B FB 4E 25 */	bl xSweptSphereToEnv__FP12xSweptSphereP4xEnv
/* 8005E9C8 0005B7C8  38 61 00 14 */	addi r3, r1, 0x14
/* 8005E9CC 0005B7CC  38 81 00 38 */	addi r4, r1, 0x38
/* 8005E9D0 0005B7D0  4B FE FB 0D */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 8005E9D4 0005B7D4  3B A1 00 20 */	addi r29, r1, 0x20
/* 8005E9D8 0005B7D8  38 81 00 44 */	addi r4, r1, 0x44
/* 8005E9DC 0005B7DC  7F A3 EB 78 */	mr r3, r29
/* 8005E9E0 0005B7E0  38 A1 00 38 */	addi r5, r1, 0x38
/* 8005E9E4 0005B7E4  4B FA FC AD */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 8005E9E8 0005B7E8  7F A3 EB 78 */	mr r3, r29
/* 8005E9EC 0005B7EC  4B FA FC 65 */	bl xVec3Length__FPC5xVec3
/* 8005E9F0 0005B7F0  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8005E9F4 0005B7F4  FC 20 08 18 */	frsp f1, f1
/* 8005E9F8 0005B7F8  C0 02 89 D4 */	lfs f0, lbl_803CD354-_SDA2_BASE_(r2)
/* 8005E9FC 0005B7FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005EA00 0005B800  40 81 00 08 */	ble lbl_8005EA08
/* 8005EA04 0005B804  48 00 00 08 */	b lbl_8005EA0C
lbl_8005EA08:
/* 8005EA08 0005B808  FC 20 00 90 */	fmr f1, f0
lbl_8005EA0C:
/* 8005EA0C 0005B80C  C0 02 89 C0 */	lfs f0, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005EA10 0005B810  7F A3 EB 78 */	mr r3, r29
/* 8005EA14 0005B814  7F A4 EB 78 */	mr r4, r29
/* 8005EA18 0005B818  EC 20 08 24 */	fdivs f1, f0, f1
/* 8005EA1C 0005B81C  4B FA C6 75 */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 8005EA20 0005B820  38 60 08 00 */	li r3, 0x800
/* 8005EA24 0005B824  54 60 05 6B */	rlwinm. r0, r3, 0, 0x15, 0x15
/* 8005EA28 0005B828  90 61 00 34 */	stw r3, 0x34(r1)
/* 8005EA2C 0005B82C  40 82 00 14 */	bne lbl_8005EA40
/* 8005EA30 0005B830  60 60 04 00 */	ori r0, r3, 0x400
/* 8005EA34 0005B834  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005EA38 0005B838  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005EA3C 0005B83C  D0 01 00 2C */	stfs f0, 0x2c(r1)
lbl_8005EA40:
/* 8005EA40 0005B840  3C 80 80 01 */	lis r4, SweptSphereHitsCameraEnt__FP6xSceneP5xRay3P7xQCDataP4xEntPv@ha
/* 8005EA44 0005B844  3C 60 80 3D */	lis r3, colls_grid@ha
/* 8005EA48 0005B848  3B A1 00 F0 */	addi r29, r1, 0xf0
/* 8005EA4C 0005B84C  38 A1 00 14 */	addi r5, r1, 0x14
/* 8005EA50 0005B850  38 C4 BB BC */	addi r6, r4, SweptSphereHitsCameraEnt__FP6xSceneP5xRay3P7xQCDataP4xEntPv@l
/* 8005EA54 0005B854  80 9E 1F C0 */	lwz r4, 0x1fc0(r30)
/* 8005EA58 0005B858  38 63 A6 D8 */	addi r3, r3, colls_grid@l
/* 8005EA5C 0005B85C  7F A7 EB 78 */	mr r7, r29
/* 8005EA60 0005B860  39 01 00 38 */	addi r8, r1, 0x38
/* 8005EA64 0005B864  4B FE 0E 2D */	bl xRayHitsGrid__FP5xGridP6xSceneP5xRay3PFP6xSceneP5xRay3P7xQCDataP4xEntPv_vP7xQCDataPv
/* 8005EA68 0005B868  3C 60 80 3D */	lis r3, colls_oso_grid@ha
/* 8005EA6C 0005B86C  3C A0 80 01 */	lis r5, SweptSphereHitsCameraEnt__FP6xSceneP5xRay3P7xQCDataP4xEntPv@ha
/* 8005EA70 0005B870  38 C5 BB BC */	addi r6, r5, SweptSphereHitsCameraEnt__FP6xSceneP5xRay3P7xQCDataP4xEntPv@l
/* 8005EA74 0005B874  80 9E 1F C0 */	lwz r4, 0x1fc0(r30)
/* 8005EA78 0005B878  38 63 A7 74 */	addi r3, r3, colls_oso_grid@l
/* 8005EA7C 0005B87C  7F A7 EB 78 */	mr r7, r29
/* 8005EA80 0005B880  38 A1 00 14 */	addi r5, r1, 0x14
/* 8005EA84 0005B884  39 01 00 38 */	addi r8, r1, 0x38
/* 8005EA88 0005B888  4B FE 0E 09 */	bl xRayHitsGrid__FP5xGridP6xSceneP5xRay3PFP6xSceneP5xRay3P7xQCDataP4xEntPv_vP7xQCDataPv
/* 8005EA8C 0005B88C  C0 A1 01 14 */	lfs f5, 0x114(r1)
/* 8005EA90 0005B890  C0 01 00 54 */	lfs f0, 0x54(r1)
/* 8005EA94 0005B894  FC 05 00 00 */	fcmpu cr0, f5, f0
/* 8005EA98 0005B898  41 82 00 48 */	beq lbl_8005EAE0
/* 8005EA9C 0005B89C  C0 02 89 C8 */	lfs f0, lbl_803CD348-_SDA2_BASE_(r2)
/* 8005EAA0 0005B8A0  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 8005EAA4 0005B8A4  40 81 00 08 */	ble lbl_8005EAAC
/* 8005EAA8 0005B8A8  48 00 00 08 */	b lbl_8005EAB0
lbl_8005EAAC:
/* 8005EAAC 0005B8AC  FC A0 00 90 */	fmr f5, f0
lbl_8005EAB0:
/* 8005EAB0 0005B8B0  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 8005EAB4 0005B8B4  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8005EAB8 0005B8B8  C0 61 00 24 */	lfs f3, 0x24(r1)
/* 8005EABC 0005B8BC  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 8005EAC0 0005B8C0  EC 85 00 7A */	fmadds f4, f5, f1, f0
/* 8005EAC4 0005B8C4  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 8005EAC8 0005B8C8  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8005EACC 0005B8CC  EC 45 10 FA */	fmadds f2, f5, f3, f2
/* 8005EAD0 0005B8D0  D0 9F 00 44 */	stfs f4, 0x44(r31)
/* 8005EAD4 0005B8D4  EC 05 00 7A */	fmadds f0, f5, f1, f0
/* 8005EAD8 0005B8D8  D0 5F 00 48 */	stfs f2, 0x48(r31)
/* 8005EADC 0005B8DC  D0 1F 00 4C */	stfs f0, 0x4c(r31)
lbl_8005EAE0:
/* 8005EAE0 0005B8E0  80 01 01 94 */	lwz r0, 0x194(r1)
/* 8005EAE4 0005B8E4  83 E1 01 8C */	lwz r31, 0x18c(r1)
/* 8005EAE8 0005B8E8  83 C1 01 88 */	lwz r30, 0x188(r1)
/* 8005EAEC 0005B8EC  83 A1 01 84 */	lwz r29, 0x184(r1)
/* 8005EAF0 0005B8F0  7C 08 03 A6 */	mtlr r0
/* 8005EAF4 0005B8F4  38 21 01 90 */	addi r1, r1, 0x190
/* 8005EAF8 0005B8F8  4E 80 00 20 */	blr 

/* apply_motion__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimCFv */
apply_motion__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimCFv:
/* 8005EAFC 0005B8FC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005EB00 0005B900  7C 08 02 A6 */	mflr r0
/* 8005EB04 0005B904  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005EB08 0005B908  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8005EB0C 0005B90C  7C 7F 1B 78 */	mr r31, r3
/* 8005EB10 0005B910  4B FF 95 F9 */	bl get_player_loc__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005EB14 0005B914  80 83 00 00 */	lwz r4, 0(r3)
/* 8005EB18 0005B918  80 03 00 04 */	lwz r0, 4(r3)
/* 8005EB1C 0005B91C  C0 3F 00 08 */	lfs f1, 8(r31)
/* 8005EB20 0005B920  90 81 00 08 */	stw r4, 8(r1)
/* 8005EB24 0005B924  90 01 00 0C */	stw r0, 0xc(r1)
/* 8005EB28 0005B928  80 03 00 08 */	lwz r0, 8(r3)
/* 8005EB2C 0005B92C  90 01 00 10 */	stw r0, 0x10(r1)
/* 8005EB30 0005B930  48 06 63 1D */	bl isin__Ff
/* 8005EB34 0005B934  C0 7F 00 18 */	lfs f3, 0x18(r31)
/* 8005EB38 0005B938  C0 01 00 08 */	lfs f0, 8(r1)
/* 8005EB3C 0005B93C  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8005EB40 0005B940  EC 63 00 7A */	fmadds f3, f3, f1, f0
/* 8005EB44 0005B944  C0 1F 00 10 */	lfs f0, 0x10(r31)
/* 8005EB48 0005B948  C0 3F 00 08 */	lfs f1, 8(r31)
/* 8005EB4C 0005B94C  EC 02 00 2A */	fadds f0, f2, f0
/* 8005EB50 0005B950  D0 61 00 08 */	stfs f3, 8(r1)
/* 8005EB54 0005B954  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8005EB58 0005B958  48 06 63 39 */	bl icos__Ff
/* 8005EB5C 0005B95C  C0 5F 00 18 */	lfs f2, 0x18(r31)
/* 8005EB60 0005B960  3C 60 80 3C */	lis r3, globals@ha
/* 8005EB64 0005B964  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8005EB68 0005B968  38 63 05 58 */	addi r3, r3, globals@l
/* 8005EB6C 0005B96C  38 81 00 08 */	addi r4, r1, 8
/* 8005EB70 0005B970  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8005EB74 0005B974  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8005EB78 0005B978  4B FA EB A1 */	bl xCameraMove__FP7xCameraRC5xVec3
/* 8005EB7C 0005B97C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005EB80 0005B980  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8005EB84 0005B984  7C 08 03 A6 */	mtlr r0
/* 8005EB88 0005B988  38 21 00 20 */	addi r1, r1, 0x20
/* 8005EB8C 0005B98C  4E 80 00 20 */	blr 

/* stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimFf */
stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimFf:
/* 8005EB90 0005B990  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005EB94 0005B994  7C 08 02 A6 */	mflr r0
/* 8005EB98 0005B998  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005EB9C 0005B99C  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8005EBA0 0005B9A0  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8005EBA4 0005B9A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005EBA8 0005B9A8  FF E0 08 90 */	fmr f31, f1
/* 8005EBAC 0005B9AC  7C 7F 1B 78 */	mr r31, r3
/* 8005EBB0 0005B9B0  80 AD 81 80 */	lwz r5, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005EBB4 0005B9B4  38 7F 00 10 */	addi r3, r31, 0x10
/* 8005EBB8 0005B9B8  38 9F 00 14 */	addi r4, r31, 0x14
/* 8005EBBC 0005B9BC  FC 40 F8 90 */	fmr f2, f31
/* 8005EBC0 0005B9C0  C0 25 00 7C */	lfs f1, 0x7c(r5)
/* 8005EBC4 0005B9C4  4B FD 29 B9 */	bl xAccelStop__FRfRfff
/* 8005EBC8 0005B9C8  80 AD 81 80 */	lwz r5, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005EBCC 0005B9CC  FC 40 F8 90 */	fmr f2, f31
/* 8005EBD0 0005B9D0  38 7F 00 18 */	addi r3, r31, 0x18
/* 8005EBD4 0005B9D4  38 9F 00 1C */	addi r4, r31, 0x1c
/* 8005EBD8 0005B9D8  C0 25 00 7C */	lfs f1, 0x7c(r5)
/* 8005EBDC 0005B9DC  4B FD 29 A1 */	bl xAccelStop__FRfRfff
/* 8005EBE0 0005B9E0  80 AD 81 80 */	lwz r5, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005EBE4 0005B9E4  FC 40 F8 90 */	fmr f2, f31
/* 8005EBE8 0005B9E8  38 7F 00 08 */	addi r3, r31, 8
/* 8005EBEC 0005B9EC  38 9F 00 0C */	addi r4, r31, 0xc
/* 8005EBF0 0005B9F0  C0 25 00 84 */	lfs f1, 0x84(r5)
/* 8005EBF4 0005B9F4  4B FD 29 89 */	bl xAccelStop__FRfRfff
/* 8005EBF8 0005B9F8  C0 3F 00 08 */	lfs f1, 8(r31)
/* 8005EBFC 0005B9FC  4B FA FB F9 */	bl xrmod__Ff
/* 8005EC00 0005BA00  D0 3F 00 08 */	stfs f1, 8(r31)
/* 8005EC04 0005BA04  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8005EC08 0005BA08  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005EC0C 0005BA0C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8005EC10 0005BA10  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005EC14 0005BA14  7C 08 03 A6 */	mtlr r0
/* 8005EC18 0005BA18  38 21 00 20 */	addi r1, r1, 0x20
/* 8005EC1C 0005BA1C  4E 80 00 20 */	blr 

/* move__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimFf */
move__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aimFf:
/* 8005EC20 0005BA20  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005EC24 0005BA24  7C 08 02 A6 */	mflr r0
/* 8005EC28 0005BA28  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005EC2C 0005BA2C  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8005EC30 0005BA30  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8005EC34 0005BA34  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005EC38 0005BA38  FF E0 08 90 */	fmr f31, f1
/* 8005EC3C 0005BA3C  80 AD 81 80 */	lwz r5, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005EC40 0005BA40  7C 7F 1B 78 */	mr r31, r3
/* 8005EC44 0005BA44  C0 25 00 7C */	lfs f1, 0x7c(r5)
/* 8005EC48 0005BA48  38 7F 00 10 */	addi r3, r31, 0x10
/* 8005EC4C 0005BA4C  FC 40 F8 90 */	fmr f2, f31
/* 8005EC50 0005BA50  C0 65 00 74 */	lfs f3, 0x74(r5)
/* 8005EC54 0005BA54  38 9F 00 14 */	addi r4, r31, 0x14
/* 8005EC58 0005BA58  C0 85 00 80 */	lfs f4, 0x80(r5)
/* 8005EC5C 0005BA5C  4B FD 24 F9 */	bl xAccelMove__FRfRfffff
/* 8005EC60 0005BA60  80 AD 81 80 */	lwz r5, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005EC64 0005BA64  FC 40 F8 90 */	fmr f2, f31
/* 8005EC68 0005BA68  38 7F 00 18 */	addi r3, r31, 0x18
/* 8005EC6C 0005BA6C  38 9F 00 1C */	addi r4, r31, 0x1c
/* 8005EC70 0005BA70  C0 25 00 7C */	lfs f1, 0x7c(r5)
/* 8005EC74 0005BA74  C0 65 00 70 */	lfs f3, 0x70(r5)
/* 8005EC78 0005BA78  C0 85 00 80 */	lfs f4, 0x80(r5)
/* 8005EC7C 0005BA7C  4B FD 24 D9 */	bl xAccelMove__FRfRfffff
/* 8005EC80 0005BA80  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005EC84 0005BA84  80 8D 81 80 */	lwz r4, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005EC88 0005BA88  38 63 C2 A4 */	addi r3, r3, shared__13cruise_bubble@l
/* 8005EC8C 0005BA8C  C0 42 89 C0 */	lfs f2, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005EC90 0005BA90  C0 03 00 48 */	lfs f0, 0x48(r3)
/* 8005EC94 0005BA94  C0 24 00 84 */	lfs f1, 0x84(r4)
/* 8005EC98 0005BA98  FC 80 00 50 */	fneg f4, f0
/* 8005EC9C 0005BA9C  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005ECA0 0005BAA0  C0 64 00 88 */	lfs f3, 0x88(r4)
/* 8005ECA4 0005BAA4  FC A0 22 10 */	fabs f5, f4
/* 8005ECA8 0005BAA8  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8005ECAC 0005BAAC  FC A0 28 18 */	frsp f5, f5
/* 8005ECB0 0005BAB0  EC 42 28 28 */	fsubs f2, f2, f5
/* 8005ECB4 0005BAB4  EC 22 00 72 */	fmuls f1, f2, f1
/* 8005ECB8 0005BAB8  EC 25 08 FA */	fmadds f1, f5, f3, f1
/* 8005ECBC 0005BABC  40 80 00 14 */	bge lbl_8005ECD0
/* 8005ECC0 0005BAC0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005ECC4 0005BAC4  40 81 00 18 */	ble lbl_8005ECDC
/* 8005ECC8 0005BAC8  FC 20 08 50 */	fneg f1, f1
/* 8005ECCC 0005BACC  48 00 00 10 */	b lbl_8005ECDC
lbl_8005ECD0:
/* 8005ECD0 0005BAD0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005ECD4 0005BAD4  40 80 00 08 */	bge lbl_8005ECDC
/* 8005ECD8 0005BAD8  FC 20 08 50 */	fneg f1, f1
lbl_8005ECDC:
/* 8005ECDC 0005BADC  C0 04 00 8C */	lfs f0, 0x8c(r4)
/* 8005ECE0 0005BAE0  FC 40 F8 90 */	fmr f2, f31
/* 8005ECE4 0005BAE4  38 7F 00 08 */	addi r3, r31, 8
/* 8005ECE8 0005BAE8  38 9F 00 0C */	addi r4, r31, 0xc
/* 8005ECEC 0005BAEC  EC 65 00 32 */	fmuls f3, f5, f0
/* 8005ECF0 0005BAF0  4B FD 27 A1 */	bl xAccelMove__FRfRffff
/* 8005ECF4 0005BAF4  C0 3F 00 08 */	lfs f1, 8(r31)
/* 8005ECF8 0005BAF8  4B FA FA FD */	bl xrmod__Ff
/* 8005ECFC 0005BAFC  D0 3F 00 08 */	stfs f1, 8(r31)
/* 8005ED00 0005BB00  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8005ED04 0005BB04  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005ED08 0005BB08  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8005ED0C 0005BB0C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005ED10 0005BB10  7C 08 03 A6 */	mtlr r0
/* 8005ED14 0005BB14  38 21 00 20 */	addi r1, r1, 0x20
/* 8005ED18 0005BB18  4E 80 00 20 */	blr 

start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18state_camera_seizeFv:
/* 8005ED1C 0005BB1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005ED20 0005BB20  7C 08 02 A6 */	mflr r0
/* 8005ED24 0005BB24  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005ED28 0005BB28  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005ED2C 0005BB2C  7C 7F 1B 78 */	mr r31, r3
/* 8005ED30 0005BB30  4B FF 88 65 */	bl capture_camera__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005ED34 0005BB34  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005ED38 0005BB38  3C 60 80 3C */	lis r3, globals@ha
/* 8005ED3C 0005BB3C  38 83 05 58 */	addi r4, r3, globals@l
/* 8005ED40 0005BB40  38 7F 00 0C */	addi r3, r31, 0xc
/* 8005ED44 0005BB44  D0 1F 00 08 */	stfs f0, 8(r31)
/* 8005ED48 0005BB48  38 84 00 44 */	addi r4, r4, 0x44
/* 8005ED4C 0005BB4C  4B FA C5 19 */	bl __as__5xVec3FRC5xVec3
/* 8005ED50 0005BB50  3C 80 80 3C */	lis r4, globals@ha
/* 8005ED54 0005BB54  38 7F 00 18 */	addi r3, r31, 0x18
/* 8005ED58 0005BB58  38 84 05 58 */	addi r4, r4, globals@l
/* 8005ED5C 0005BB5C  38 84 00 14 */	addi r4, r4, 0x14
/* 8005ED60 0005BB60  4B FD 3F 25 */	bl xQuatFromMat__FP5xQuatPC7xMat3x3
/* 8005ED64 0005BB64  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005ED68 0005BB68  D0 1F 00 48 */	stfs f0, 0x48(r31)
/* 8005ED6C 0005BB6C  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005ED70 0005BB70  D0 1F 00 4C */	stfs f0, 0x4c(r31)
/* 8005ED74 0005BB74  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005ED78 0005BB78  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 8005ED7C 0005BB7C  4B FF B5 31 */	bl show_hud__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005ED80 0005BB80  C0 22 89 B8 */	lfs f1, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005ED84 0005BB84  4B FF 92 5D */	bl distort_screen__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Ff
/* 8005ED88 0005BB88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005ED8C 0005BB8C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005ED90 0005BB90  7C 08 03 A6 */	mtlr r0
/* 8005ED94 0005BB94  38 21 00 10 */	addi r1, r1, 0x10
/* 8005ED98 0005BB98  4E 80 00 20 */	blr 

stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18state_camera_seizeFv:
/* 8005ED9C 0005BB9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005EDA0 0005BBA0  7C 08 02 A6 */	mflr r0
/* 8005EDA4 0005BBA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005EDA8 0005BBA8  4B FF 88 21 */	bl release_camera__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005EDAC 0005BBAC  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005EDB0 0005BBB0  3C A0 80 3C */	lis r5, globals@ha
/* 8005EDB4 0005BBB4  38 83 C2 A4 */	addi r4, r3, shared__13cruise_bubble@l
/* 8005EDB8 0005BBB8  C0 24 01 00 */	lfs f1, 0x100(r4)
/* 8005EDBC 0005BBBC  38 65 05 58 */	addi r3, r5, globals@l
/* 8005EDC0 0005BBC0  4B FA F6 D1 */	bl xCameraSetFOV__FP7xCameraf
/* 8005EDC4 0005BBC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005EDC8 0005BBC8  7C 08 03 A6 */	mtlr r0
/* 8005EDCC 0005BBCC  38 21 00 10 */	addi r1, r1, 0x10
/* 8005EDD0 0005BBD0  4E 80 00 20 */	blr 

update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18state_camera_seizeFf:
/* 8005EDD4 0005BBD4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8005EDD8 0005BBD8  7C 08 02 A6 */	mflr r0
/* 8005EDDC 0005BBDC  90 01 00 44 */	stw r0, 0x44(r1)
/* 8005EDE0 0005BBE0  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8005EDE4 0005BBE4  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8005EDE8 0005BBE8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8005EDEC 0005BBEC  7C 7F 1B 78 */	mr r31, r3
/* 8005EDF0 0005BBF0  C0 03 00 08 */	lfs f0, 8(r3)
/* 8005EDF4 0005BBF4  EC 00 08 2A */	fadds f0, f0, f1
/* 8005EDF8 0005BBF8  D0 03 00 08 */	stfs f0, 8(r3)
/* 8005EDFC 0005BBFC  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005EE00 0005BC00  C0 3F 00 08 */	lfs f1, 8(r31)
/* 8005EE04 0005BC04  C0 03 00 98 */	lfs f0, 0x98(r3)
/* 8005EE08 0005BC08  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005EE0C 0005BC0C  4C 41 13 82 */	cror 2, 1, 2
/* 8005EE10 0005BC10  40 82 00 0C */	bne lbl_8005EE1C
/* 8005EE14 0005BC14  38 60 00 09 */	li r3, 9
/* 8005EE18 0005BC18  48 00 00 A0 */	b lbl_8005EEB8
lbl_8005EE1C:
/* 8005EE1C 0005BC1C  EC 21 00 24 */	fdivs f1, f1, f0
/* 8005EE20 0005BC20  48 00 02 E1 */	bl xSCurve__Ff
/* 8005EE24 0005BC24  FF E0 08 90 */	fmr f31, f1
/* 8005EE28 0005BC28  7F E3 FB 78 */	mr r3, r31
/* 8005EE2C 0005BC2C  48 00 02 2D */	bl update_move__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18state_camera_seizeFf
/* 8005EE30 0005BC30  FC 20 F8 90 */	fmr f1, f31
/* 8005EE34 0005BC34  7F E3 FB 78 */	mr r3, r31
/* 8005EE38 0005BC38  48 00 01 35 */	bl update_turn__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18state_camera_seizeFf
/* 8005EE3C 0005BC3C  4B FF DE 35 */	bl get_missle_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005EE40 0005BC40  3C 80 80 3C */	lis r4, globals@ha
/* 8005EE44 0005BC44  7C 66 1B 78 */	mr r6, r3
/* 8005EE48 0005BC48  38 A4 05 58 */	addi r5, r4, globals@l
/* 8005EE4C 0005BC4C  38 61 00 08 */	addi r3, r1, 8
/* 8005EE50 0005BC50  38 86 00 30 */	addi r4, r6, 0x30
/* 8005EE54 0005BC54  38 A5 00 44 */	addi r5, r5, 0x44
/* 8005EE58 0005BC58  4B FA C3 75 */	bl __mi__5xVec3CFRC5xVec3
/* 8005EE5C 0005BC5C  80 A1 00 08 */	lwz r5, 8(r1)
/* 8005EE60 0005BC60  38 61 00 14 */	addi r3, r1, 0x14
/* 8005EE64 0005BC64  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8005EE68 0005BC68  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8005EE6C 0005BC6C  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8005EE70 0005BC70  90 81 00 18 */	stw r4, 0x18(r1)
/* 8005EE74 0005BC74  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8005EE78 0005BC78  4B FA C3 31 */	bl length__5xVec3CFv
/* 8005EE7C 0005BC7C  7F E3 FB 78 */	mr r3, r31
/* 8005EE80 0005BC80  48 00 00 55 */	bl refresh_missle_alpha__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18state_camera_seizeFf
/* 8005EE84 0005BC84  80 8D 81 80 */	lwz r4, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005EE88 0005BC88  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005EE8C 0005BC8C  38 63 C2 A4 */	addi r3, r3, shared__13cruise_bubble@l
/* 8005EE90 0005BC90  3C A0 80 3C */	lis r5, globals@ha
/* 8005EE94 0005BC94  C0 23 01 00 */	lfs f1, 0x100(r3)
/* 8005EE98 0005BC98  38 65 05 58 */	addi r3, r5, globals@l
/* 8005EE9C 0005BC9C  C0 04 00 A4 */	lfs f0, 0xa4(r4)
/* 8005EEA0 0005BCA0  EC 00 08 28 */	fsubs f0, f0, f1
/* 8005EEA4 0005BCA4  EC 3F 08 3A */	fmadds f1, f31, f0, f1
/* 8005EEA8 0005BCA8  4B FA F5 E9 */	bl xCameraSetFOV__FP7xCameraf
/* 8005EEAC 0005BCAC  FC 20 F8 90 */	fmr f1, f31
/* 8005EEB0 0005BCB0  4B FF 91 31 */	bl distort_screen__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Ff
/* 8005EEB4 0005BCB4  38 60 00 08 */	li r3, 8
lbl_8005EEB8:
/* 8005EEB8 0005BCB8  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8005EEBC 0005BCBC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8005EEC0 0005BCC0  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8005EEC4 0005BCC4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8005EEC8 0005BCC8  7C 08 03 A6 */	mtlr r0
/* 8005EECC 0005BCCC  38 21 00 40 */	addi r1, r1, 0x40
/* 8005EED0 0005BCD0  4E 80 00 20 */	blr 

/* refresh_missle_alpha__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18state_camera_seizeFf */
refresh_missle_alpha__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18state_camera_seizeFf:
/* 8005EED4 0005BCD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005EED8 0005BCD8  7C 08 02 A6 */	mflr r0
/* 8005EEDC 0005BCDC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005EEE0 0005BCE0  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005EEE4 0005BCE4  C0 03 00 9C */	lfs f0, 0x9c(r3)
/* 8005EEE8 0005BCE8  C0 43 00 A0 */	lfs f2, 0xa0(r3)
/* 8005EEEC 0005BCEC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005EEF0 0005BCF0  4C 41 13 82 */	cror 2, 1, 2
/* 8005EEF4 0005BCF4  40 82 00 20 */	bne lbl_8005EF14
/* 8005EEF8 0005BCF8  4B FF 86 65 */	bl show_missle__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005EEFC 0005BCFC  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005EF00 0005BD00  C0 02 89 C0 */	lfs f0, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005EF04 0005BD04  38 63 C2 A4 */	addi r3, r3, shared__13cruise_bubble@l
/* 8005EF08 0005BD08  80 63 00 68 */	lwz r3, 0x68(r3)
/* 8005EF0C 0005BD0C  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 8005EF10 0005BD10  48 00 00 4C */	b lbl_8005EF5C
lbl_8005EF14:
/* 8005EF14 0005BD14  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 8005EF18 0005BD18  4C 40 13 82 */	cror 2, 0, 2
/* 8005EF1C 0005BD1C  40 82 00 24 */	bne lbl_8005EF40
/* 8005EF20 0005BD20  4B FF 86 59 */	bl hide_missle__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005EF24 0005BD24  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005EF28 0005BD28  38 63 C2 A4 */	addi r3, r3, shared__13cruise_bubble@l
/* 8005EF2C 0005BD2C  80 63 00 68 */	lwz r3, 0x68(r3)
/* 8005EF30 0005BD30  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 8005EF34 0005BD34  60 00 00 02 */	ori r0, r0, 2
/* 8005EF38 0005BD38  B0 03 00 44 */	sth r0, 0x44(r3)
/* 8005EF3C 0005BD3C  48 00 00 20 */	b lbl_8005EF5C
lbl_8005EF40:
/* 8005EF40 0005BD40  EC 22 08 28 */	fsubs f1, f2, f1
/* 8005EF44 0005BD44  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005EF48 0005BD48  EC 02 00 28 */	fsubs f0, f2, f0
/* 8005EF4C 0005BD4C  38 63 C2 A4 */	addi r3, r3, shared__13cruise_bubble@l
/* 8005EF50 0005BD50  80 63 00 68 */	lwz r3, 0x68(r3)
/* 8005EF54 0005BD54  EC 01 00 24 */	fdivs f0, f1, f0
/* 8005EF58 0005BD58  D0 03 00 24 */	stfs f0, 0x24(r3)
lbl_8005EF5C:
/* 8005EF5C 0005BD5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005EF60 0005BD60  7C 08 03 A6 */	mtlr r0
/* 8005EF64 0005BD64  38 21 00 10 */	addi r1, r1, 0x10
/* 8005EF68 0005BD68  4E 80 00 20 */	blr 

/* update_turn__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18state_camera_seizeFf */
update_turn__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18state_camera_seizeFf:
/* 8005EF6C 0005BD6C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8005EF70 0005BD70  7C 08 02 A6 */	mflr r0
/* 8005EF74 0005BD74  90 01 00 54 */	stw r0, 0x54(r1)
/* 8005EF78 0005BD78  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8005EF7C 0005BD7C  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8005EF80 0005BD80  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8005EF84 0005BD84  FF E0 08 90 */	fmr f31, f1
/* 8005EF88 0005BD88  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005EF8C 0005BD8C  C0 02 89 C4 */	lfs f0, lbl_803CD344-_SDA2_BASE_(r2)
/* 8005EF90 0005BD90  7C 7F 1B 78 */	mr r31, r3
/* 8005EF94 0005BD94  EC 3F 08 28 */	fsubs f1, f31, f1
/* 8005EF98 0005BD98  FC 20 0A 10 */	fabs f1, f1
/* 8005EF9C 0005BD9C  FC 20 08 18 */	frsp f1, f1
/* 8005EFA0 0005BDA0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005EFA4 0005BDA4  4C 40 13 82 */	cror 2, 0, 2
/* 8005EFA8 0005BDA8  40 82 00 28 */	bne lbl_8005EFD0
/* 8005EFAC 0005BDAC  4B FF DC C5 */	bl get_missle_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005EFB0 0005BDB0  C0 22 89 B8 */	lfs f1, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005EFB4 0005BDB4  3C A0 80 3C */	lis r5, globals@ha
/* 8005EFB8 0005BDB8  7C 64 1B 78 */	mr r4, r3
/* 8005EFBC 0005BDBC  FC 40 08 90 */	fmr f2, f1
/* 8005EFC0 0005BDC0  38 65 05 58 */	addi r3, r5, globals@l
/* 8005EFC4 0005BDC4  FC 60 08 90 */	fmr f3, f1
/* 8005EFC8 0005BDC8  4B FA EB 4D */	bl xCameraRotate__FP7xCameraRC7xMat3x3fff
/* 8005EFCC 0005BDCC  48 00 00 70 */	b lbl_8005F03C
lbl_8005EFD0:
/* 8005EFD0 0005BDD0  4B FF DC A1 */	bl get_missle_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005EFD4 0005BDD4  7C 64 1B 78 */	mr r4, r3
/* 8005EFD8 0005BDD8  38 7F 00 28 */	addi r3, r31, 0x28
/* 8005EFDC 0005BDDC  4B FD 3C A9 */	bl xQuatFromMat__FP5xQuatPC7xMat3x3
/* 8005EFE0 0005BDE0  C0 5F 00 48 */	lfs f2, 0x48(r31)
/* 8005EFE4 0005BDE4  38 7F 00 38 */	addi r3, r31, 0x38
/* 8005EFE8 0005BDE8  C0 02 89 C0 */	lfs f0, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005EFEC 0005BDEC  38 9F 00 18 */	addi r4, r31, 0x18
/* 8005EFF0 0005BDF0  EC 3F 10 28 */	fsubs f1, f31, f2
/* 8005EFF4 0005BDF4  38 BF 00 28 */	addi r5, r31, 0x28
/* 8005EFF8 0005BDF8  EC 00 10 28 */	fsubs f0, f0, f2
/* 8005EFFC 0005BDFC  EC 21 00 24 */	fdivs f1, f1, f0
/* 8005F000 0005BE00  4B FD 40 D1 */	bl xQuatSlerp__FP5xQuatPC5xQuatPC5xQuatf
/* 8005F004 0005BE04  38 7F 00 18 */	addi r3, r31, 0x18
/* 8005F008 0005BE08  38 9F 00 38 */	addi r4, r31, 0x38
/* 8005F00C 0005BE0C  4B FA F6 E1 */	bl __as__5xQuatFRC5xQuat
/* 8005F010 0005BE10  D3 FF 00 48 */	stfs f31, 0x48(r31)
/* 8005F014 0005BE14  38 7F 00 38 */	addi r3, r31, 0x38
/* 8005F018 0005BE18  38 81 00 08 */	addi r4, r1, 8
/* 8005F01C 0005BE1C  4B FD 3E E5 */	bl xQuatToMat__FPC5xQuatP7xMat3x3
/* 8005F020 0005BE20  C0 22 89 B8 */	lfs f1, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005F024 0005BE24  3C 60 80 3C */	lis r3, globals@ha
/* 8005F028 0005BE28  38 63 05 58 */	addi r3, r3, globals@l
/* 8005F02C 0005BE2C  38 81 00 08 */	addi r4, r1, 8
/* 8005F030 0005BE30  FC 40 08 90 */	fmr f2, f1
/* 8005F034 0005BE34  FC 60 08 90 */	fmr f3, f1
/* 8005F038 0005BE38  4B FA EA DD */	bl xCameraRotate__FP7xCameraRC7xMat3x3fff
lbl_8005F03C:
/* 8005F03C 0005BE3C  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8005F040 0005BE40  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8005F044 0005BE44  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8005F048 0005BE48  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8005F04C 0005BE4C  7C 08 03 A6 */	mtlr r0
/* 8005F050 0005BE50  38 21 00 50 */	addi r1, r1, 0x50
/* 8005F054 0005BE54  4E 80 00 20 */	blr 

/* update_move__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18state_camera_seizeFf */
update_move__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18state_camera_seizeFf:
/* 8005F058 0005BE58  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8005F05C 0005BE5C  7C 08 02 A6 */	mflr r0
/* 8005F060 0005BE60  90 01 00 64 */	stw r0, 0x64(r1)
/* 8005F064 0005BE64  DB E1 00 58 */	stfd f31, 0x58(r1)
/* 8005F068 0005BE68  FF E0 08 90 */	fmr f31, f1
/* 8005F06C 0005BE6C  93 E1 00 54 */	stw r31, 0x54(r1)
/* 8005F070 0005BE70  7C 7F 1B 78 */	mr r31, r3
/* 8005F074 0005BE74  4B FF DB FD */	bl get_missle_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005F078 0005BE78  38 83 00 30 */	addi r4, r3, 0x30
/* 8005F07C 0005BE7C  38 61 00 20 */	addi r3, r1, 0x20
/* 8005F080 0005BE80  38 BF 00 0C */	addi r5, r31, 0xc
/* 8005F084 0005BE84  4B FA C1 49 */	bl __mi__5xVec3CFRC5xVec3
/* 8005F088 0005BE88  80 C1 00 20 */	lwz r6, 0x20(r1)
/* 8005F08C 0005BE8C  FC 20 F8 90 */	fmr f1, f31
/* 8005F090 0005BE90  80 A1 00 24 */	lwz r5, 0x24(r1)
/* 8005F094 0005BE94  38 61 00 08 */	addi r3, r1, 8
/* 8005F098 0005BE98  80 01 00 28 */	lwz r0, 0x28(r1)
/* 8005F09C 0005BE9C  38 81 00 38 */	addi r4, r1, 0x38
/* 8005F0A0 0005BEA0  90 C1 00 38 */	stw r6, 0x38(r1)
/* 8005F0A4 0005BEA4  90 A1 00 3C */	stw r5, 0x3c(r1)
/* 8005F0A8 0005BEA8  90 01 00 40 */	stw r0, 0x40(r1)
/* 8005F0AC 0005BEAC  4B FA C0 75 */	bl __ml__5xVec3CFf
/* 8005F0B0 0005BEB0  38 61 00 14 */	addi r3, r1, 0x14
/* 8005F0B4 0005BEB4  38 9F 00 0C */	addi r4, r31, 0xc
/* 8005F0B8 0005BEB8  38 A1 00 08 */	addi r5, r1, 8
/* 8005F0BC 0005BEBC  4B FB 63 25 */	bl __pl__5xVec3CFRC5xVec3
/* 8005F0C0 0005BEC0  80 81 00 14 */	lwz r4, 0x14(r1)
/* 8005F0C4 0005BEC4  3C 60 80 3C */	lis r3, globals@ha
/* 8005F0C8 0005BEC8  80 A1 00 18 */	lwz r5, 0x18(r1)
/* 8005F0CC 0005BECC  38 63 05 58 */	addi r3, r3, globals@l
/* 8005F0D0 0005BED0  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8005F0D4 0005BED4  90 81 00 2C */	stw r4, 0x2c(r1)
/* 8005F0D8 0005BED8  38 81 00 2C */	addi r4, r1, 0x2c
/* 8005F0DC 0005BEDC  90 A1 00 30 */	stw r5, 0x30(r1)
/* 8005F0E0 0005BEE0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005F0E4 0005BEE4  4B FA E6 35 */	bl xCameraMove__FP7xCameraRC5xVec3
/* 8005F0E8 0005BEE8  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8005F0EC 0005BEEC  CB E1 00 58 */	lfd f31, 0x58(r1)
/* 8005F0F0 0005BEF0  83 E1 00 54 */	lwz r31, 0x54(r1)
/* 8005F0F4 0005BEF4  7C 08 03 A6 */	mtlr r0
/* 8005F0F8 0005BEF8  38 21 00 60 */	addi r1, r1, 0x60
/* 8005F0FC 0005BEFC  4E 80 00 20 */	blr 

.global xSCurve__Ff
xSCurve__Ff:
/* 8005F100 0005BF00  C0 02 89 C8 */	lfs f0, lbl_803CD348-_SDA2_BASE_(r2)
/* 8005F104 0005BF04  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005F108 0005BF08  4C 40 13 82 */	cror 2, 0, 2
/* 8005F10C 0005BF0C  40 82 00 14 */	bne lbl_8005F120
/* 8005F110 0005BF10  C0 02 8A 34 */	lfs f0, lbl_803CD3B4-_SDA2_BASE_(r2)
/* 8005F114 0005BF14  EC 00 00 72 */	fmuls f0, f0, f1
/* 8005F118 0005BF18  EC 20 00 72 */	fmuls f1, f0, f1
/* 8005F11C 0005BF1C  4E 80 00 20 */	blr 
lbl_8005F120:
/* 8005F120 0005BF20  C0 42 89 C0 */	lfs f2, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005F124 0005BF24  C0 02 8A 34 */	lfs f0, lbl_803CD3B4-_SDA2_BASE_(r2)
/* 8005F128 0005BF28  EC 22 08 28 */	fsubs f1, f2, f1
/* 8005F12C 0005BF2C  EC 00 00 72 */	fmuls f0, f0, f1
/* 8005F130 0005BF30  EC 20 10 7C */	fnmsubs f1, f0, f1, f2
/* 8005F134 0005BF34  4E 80 00 20 */	blr 

start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attachFv:
/* 8005F138 0005BF38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005F13C 0005BF3C  7C 08 02 A6 */	mflr r0
/* 8005F140 0005BF40  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005F144 0005BF44  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005F148 0005BF48  4B FF 84 4D */	bl capture_camera__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005F14C 0005BF4C  4B FF DB 25 */	bl get_missle_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005F150 0005BF50  3C 80 80 3C */	lis r4, globals@ha
/* 8005F154 0005BF54  7C 7F 1B 78 */	mr r31, r3
/* 8005F158 0005BF58  38 64 05 58 */	addi r3, r4, globals@l
/* 8005F15C 0005BF5C  38 9F 00 30 */	addi r4, r31, 0x30
/* 8005F160 0005BF60  4B FA E5 B9 */	bl xCameraMove__FP7xCameraRC5xVec3
/* 8005F164 0005BF64  C0 22 89 B8 */	lfs f1, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005F168 0005BF68  3C 60 80 3C */	lis r3, globals@ha
/* 8005F16C 0005BF6C  38 63 05 58 */	addi r3, r3, globals@l
/* 8005F170 0005BF70  7F E4 FB 78 */	mr r4, r31
/* 8005F174 0005BF74  FC 40 08 90 */	fmr f2, f1
/* 8005F178 0005BF78  FC 60 08 90 */	fmr f3, f1
/* 8005F17C 0005BF7C  4B FA E9 99 */	bl xCameraRotate__FP7xCameraRC7xMat3x3fff
/* 8005F180 0005BF80  80 8D 81 80 */	lwz r4, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005F184 0005BF84  3C 60 80 3C */	lis r3, globals@ha
/* 8005F188 0005BF88  38 63 05 58 */	addi r3, r3, globals@l
/* 8005F18C 0005BF8C  C0 24 00 A4 */	lfs f1, 0xa4(r4)
/* 8005F190 0005BF90  4B FA F3 01 */	bl xCameraSetFOV__FP7xCameraf
/* 8005F194 0005BF94  C0 22 89 C0 */	lfs f1, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005F198 0005BF98  4B FF 8E 49 */	bl distort_screen__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Ff
/* 8005F19C 0005BF9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005F1A0 0005BFA0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005F1A4 0005BFA4  7C 08 03 A6 */	mtlr r0
/* 8005F1A8 0005BFA8  38 21 00 10 */	addi r1, r1, 0x10
/* 8005F1AC 0005BFAC  4E 80 00 20 */	blr 

stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attachFv:
/* 8005F1B0 0005BFB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005F1B4 0005BFB4  7C 08 02 A6 */	mflr r0
/* 8005F1B8 0005BFB8  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005F1BC 0005BFBC  3C A0 80 3C */	lis r5, globals@ha
/* 8005F1C0 0005BFC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005F1C4 0005BFC4  38 83 C2 A4 */	addi r4, r3, shared__13cruise_bubble@l
/* 8005F1C8 0005BFC8  38 65 05 58 */	addi r3, r5, globals@l
/* 8005F1CC 0005BFCC  C0 24 01 00 */	lfs f1, 0x100(r4)
/* 8005F1D0 0005BFD0  4B FA F2 C1 */	bl xCameraSetFOV__FP7xCameraf
/* 8005F1D4 0005BFD4  4B FF 83 F5 */	bl release_camera__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005F1D8 0005BFD8  4B FF B1 69 */	bl hide_hud__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005F1DC 0005BFDC  C0 22 89 B8 */	lfs f1, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005F1E0 0005BFE0  4B FF 8E 01 */	bl distort_screen__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Ff
/* 8005F1E4 0005BFE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005F1E8 0005BFE8  7C 08 03 A6 */	mtlr r0
/* 8005F1EC 0005BFEC  38 21 00 10 */	addi r1, r1, 0x10
/* 8005F1F0 0005BFF0  4E 80 00 20 */	blr 

update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attachFf:
/* 8005F1F4 0005BFF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005F1F8 0005BFF8  7C 08 02 A6 */	mflr r0
/* 8005F1FC 0005BFFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005F200 0005C000  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005F204 0005C004  93 C1 00 08 */	stw r30, 8(r1)
/* 8005F208 0005C008  7C 7E 1B 78 */	mr r30, r3
/* 8005F20C 0005C00C  4B FF DA 65 */	bl get_missle_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005F210 0005C010  3C 80 80 3C */	lis r4, globals@ha
/* 8005F214 0005C014  7C 7F 1B 78 */	mr r31, r3
/* 8005F218 0005C018  38 64 05 58 */	addi r3, r4, globals@l
/* 8005F21C 0005C01C  38 9F 00 30 */	addi r4, r31, 0x30
/* 8005F220 0005C020  4B FA E4 F9 */	bl xCameraMove__FP7xCameraRC5xVec3
/* 8005F224 0005C024  C0 22 89 B8 */	lfs f1, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005F228 0005C028  3C 60 80 3C */	lis r3, globals@ha
/* 8005F22C 0005C02C  38 63 05 58 */	addi r3, r3, globals@l
/* 8005F230 0005C030  7F E4 FB 78 */	mr r4, r31
/* 8005F234 0005C034  FC 40 08 90 */	fmr f2, f1
/* 8005F238 0005C038  FC 60 08 90 */	fmr f3, f1
/* 8005F23C 0005C03C  4B FA E8 D9 */	bl xCameraRotate__FP7xCameraRC7xMat3x3fff
/* 8005F240 0005C040  7F C3 F3 78 */	mr r3, r30
/* 8005F244 0005C044  48 00 00 21 */	bl lock_targets__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attachFv
/* 8005F248 0005C048  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005F24C 0005C04C  38 60 00 09 */	li r3, 9
/* 8005F250 0005C050  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005F254 0005C054  83 C1 00 08 */	lwz r30, 8(r1)
/* 8005F258 0005C058  7C 08 03 A6 */	mtlr r0
/* 8005F25C 0005C05C  38 21 00 10 */	addi r1, r1, 0x10
/* 8005F260 0005C060  4E 80 00 20 */	blr 

/* lock_targets__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attachFv */
lock_targets__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attachFv:
/* 8005F264 0005C064  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8005F268 0005C068  7C 08 02 A6 */	mflr r0
/* 8005F26C 0005C06C  90 01 00 74 */	stw r0, 0x74(r1)
/* 8005F270 0005C070  38 81 00 18 */	addi r4, r1, 0x18
/* 8005F274 0005C074  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 8005F278 0005C078  7C 7F 1B 78 */	mr r31, r3
/* 8005F27C 0005C07C  48 00 00 DD */	bl get_view_bound__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attachCFR6xBound
/* 8005F280 0005C080  88 01 00 14 */	lbz r0, 0x14(r1)
/* 8005F284 0005C084  3C 60 80 3D */	lis r3, colls_grid@ha
/* 8005F288 0005C088  38 81 00 18 */	addi r4, r1, 0x18
/* 8005F28C 0005C08C  38 C1 00 10 */	addi r6, r1, 0x10
/* 8005F290 0005C090  98 01 00 10 */	stb r0, 0x10(r1)
/* 8005F294 0005C094  38 63 A6 D8 */	addi r3, r3, colls_grid@l
/* 8005F298 0005C098  7C 85 23 78 */	mr r5, r4
/* 8005F29C 0005C09C  48 00 15 61 */	bl xGridCheckBound_esc__0_Q413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attach15cb_lock_targets_esc__1___FR5xGridRC6xBoundRC7xQCDataQ413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attach15cb_lock_targets
/* 8005F2A0 0005C0A0  88 01 00 14 */	lbz r0, 0x14(r1)
/* 8005F2A4 0005C0A4  3C 60 80 3D */	lis r3, colls_oso_grid@ha
/* 8005F2A8 0005C0A8  38 81 00 18 */	addi r4, r1, 0x18
/* 8005F2AC 0005C0AC  38 C1 00 0C */	addi r6, r1, 0xc
/* 8005F2B0 0005C0B0  98 01 00 0C */	stb r0, 0xc(r1)
/* 8005F2B4 0005C0B4  38 63 A7 74 */	addi r3, r3, colls_oso_grid@l
/* 8005F2B8 0005C0B8  7C 85 23 78 */	mr r5, r4
/* 8005F2BC 0005C0BC  48 00 15 41 */	bl xGridCheckBound_esc__0_Q413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attach15cb_lock_targets_esc__1___FR5xGridRC6xBoundRC7xQCDataQ413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attach15cb_lock_targets
/* 8005F2C0 0005C0C0  88 01 00 14 */	lbz r0, 0x14(r1)
/* 8005F2C4 0005C0C4  3C 60 80 3D */	lis r3, npcs_grid@ha
/* 8005F2C8 0005C0C8  38 81 00 18 */	addi r4, r1, 0x18
/* 8005F2CC 0005C0CC  38 C1 00 08 */	addi r6, r1, 8
/* 8005F2D0 0005C0D0  98 01 00 08 */	stb r0, 8(r1)
/* 8005F2D4 0005C0D4  38 63 A7 A8 */	addi r3, r3, npcs_grid@l
/* 8005F2D8 0005C0D8  7C 85 23 78 */	mr r5, r4
/* 8005F2DC 0005C0DC  48 00 15 21 */	bl xGridCheckBound_esc__0_Q413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attach15cb_lock_targets_esc__1___FR5xGridRC6xBoundRC7xQCDataQ413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attach15cb_lock_targets
/* 8005F2E0 0005C0E0  7F E3 FB 78 */	mr r3, r31
/* 8005F2E4 0005C0E4  48 00 00 19 */	bl lock_hazard_targets__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attachFv
/* 8005F2E8 0005C0E8  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8005F2EC 0005C0EC  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 8005F2F0 0005C0F0  7C 08 03 A6 */	mtlr r0
/* 8005F2F4 0005C0F4  38 21 00 70 */	addi r1, r1, 0x70
/* 8005F2F8 0005C0F8  4E 80 00 20 */	blr 

/* lock_hazard_targets__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attachFv */
lock_hazard_targets__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attachFv:
/* 8005F2FC 0005C0FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005F300 0005C100  7C 08 02 A6 */	mflr r0
/* 8005F304 0005C104  3C 60 80 06 */	lis r3, hazard_check__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attachFR9NPCHazardPv@ha
/* 8005F308 0005C108  3C A0 00 21 */	lis r5, 0x00208000@ha
/* 8005F30C 0005C10C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005F310 0005C110  38 63 F3 30 */	addi r3, r3, hazard_check__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attachFR9NPCHazardPv@l
/* 8005F314 0005C114  38 80 00 00 */	li r4, 0
/* 8005F318 0005C118  38 A5 80 00 */	addi r5, r5, 0x00208000@l
/* 8005F31C 0005C11C  48 12 8E FD */	bl HAZ_Iterate__FPFR9NPCHazardPv_bPvi
/* 8005F320 0005C120  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005F324 0005C124  7C 08 03 A6 */	mtlr r0
/* 8005F328 0005C128  38 21 00 10 */	addi r1, r1, 0x10
/* 8005F32C 0005C12C  4E 80 00 20 */	blr 

hazard_check__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attachFR9NPCHazardPv:
/* 8005F330 0005C130  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005F334 0005C134  7C 08 02 A6 */	mflr r0
/* 8005F338 0005C138  38 63 00 08 */	addi r3, r3, 8
/* 8005F33C 0005C13C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005F340 0005C140  4B FF B2 31 */	bl check_lock_target__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FPC5xVec3
/* 8005F344 0005C144  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005F348 0005C148  38 60 00 01 */	li r3, 1
/* 8005F34C 0005C14C  7C 08 03 A6 */	mtlr r0
/* 8005F350 0005C150  38 21 00 10 */	addi r1, r1, 0x10
/* 8005F354 0005C154  4E 80 00 20 */	blr 

/* get_view_bound__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attachCFR6xBound */
get_view_bound__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attachCFR6xBound:
/* 8005F358 0005C158  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8005F35C 0005C15C  7C 08 02 A6 */	mflr r0
/* 8005F360 0005C160  90 01 00 84 */	stw r0, 0x84(r1)
/* 8005F364 0005C164  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 8005F368 0005C168  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 8005F36C 0005C16C  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 8005F370 0005C170  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 8005F374 0005C174  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 8005F378 0005C178  F3 A1 00 58 */	psq_st f29, 88(r1), 0, qr0
/* 8005F37C 0005C17C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8005F380 0005C180  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8005F384 0005C184  7C 9E 23 78 */	mr r30, r4
/* 8005F388 0005C188  38 00 00 02 */	li r0, 2
/* 8005F38C 0005C18C  98 04 00 20 */	stb r0, 0x20(r4)
/* 8005F390 0005C190  3C 60 80 3C */	lis r3, globals@ha
/* 8005F394 0005C194  3B E3 05 58 */	addi r31, r3, globals@l
/* 8005F398 0005C198  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005F39C 0005C19C  C0 43 00 E8 */	lfs f2, 0xe8(r3)
/* 8005F3A0 0005C1A0  C0 03 00 E4 */	lfs f0, 0xe4(r3)
/* 8005F3A4 0005C1A4  C0 23 00 F0 */	lfs f1, 0xf0(r3)
/* 8005F3A8 0005C1A8  EF E2 00 28 */	fsubs f31, f2, f0
/* 8005F3AC 0005C1AC  48 06 5A A1 */	bl isin__Ff
/* 8005F3B0 0005C1B0  80 AD 81 80 */	lwz r5, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005F3B4 0005C1B4  38 61 00 20 */	addi r3, r1, 0x20
/* 8005F3B8 0005C1B8  38 9F 00 34 */	addi r4, r31, 0x34
/* 8005F3BC 0005C1BC  C0 45 00 E4 */	lfs f2, 0xe4(r5)
/* 8005F3C0 0005C1C0  C0 05 00 E8 */	lfs f0, 0xe8(r5)
/* 8005F3C4 0005C1C4  EF C1 00 B2 */	fmuls f30, f1, f2
/* 8005F3C8 0005C1C8  EF A1 00 32 */	fmuls f29, f1, f0
/* 8005F3CC 0005C1CC  FC 20 10 90 */	fmr f1, f2
/* 8005F3D0 0005C1D0  4B FA BD 51 */	bl __ml__5xVec3CFf
/* 8005F3D4 0005C1D4  38 61 00 2C */	addi r3, r1, 0x2c
/* 8005F3D8 0005C1D8  38 9F 00 44 */	addi r4, r31, 0x44
/* 8005F3DC 0005C1DC  38 A1 00 20 */	addi r5, r1, 0x20
/* 8005F3E0 0005C1E0  4B FB 60 01 */	bl __pl__5xVec3CFRC5xVec3
/* 8005F3E4 0005C1E4  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 8005F3E8 0005C1E8  FC 20 F8 90 */	fmr f1, f31
/* 8005F3EC 0005C1EC  80 A1 00 30 */	lwz r5, 0x30(r1)
/* 8005F3F0 0005C1F0  FC 40 F0 90 */	fmr f2, f30
/* 8005F3F4 0005C1F4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8005F3F8 0005C1F8  FC 60 E8 90 */	fmr f3, f29
/* 8005F3FC 0005C1FC  90 61 00 38 */	stw r3, 0x38(r1)
/* 8005F400 0005C200  38 7E 00 30 */	addi r3, r30, 0x30
/* 8005F404 0005C204  38 81 00 38 */	addi r4, r1, 0x38
/* 8005F408 0005C208  90 A1 00 3C */	stw r5, 0x3c(r1)
/* 8005F40C 0005C20C  38 BF 00 34 */	addi r5, r31, 0x34
/* 8005F410 0005C210  90 01 00 40 */	stw r0, 0x40(r1)
/* 8005F414 0005C214  4B FD 29 2D */	bl xBoxFromCone__FR4xBoxRC5xVec3RC5xVec3fff
/* 8005F418 0005C218  38 61 00 08 */	addi r3, r1, 8
/* 8005F41C 0005C21C  38 9E 00 30 */	addi r4, r30, 0x30
/* 8005F420 0005C220  38 BE 00 3C */	addi r5, r30, 0x3c
/* 8005F424 0005C224  4B FB 5F BD */	bl __pl__5xVec3CFRC5xVec3
/* 8005F428 0005C228  C0 22 89 C8 */	lfs f1, lbl_803CD348-_SDA2_BASE_(r2)
/* 8005F42C 0005C22C  38 61 00 14 */	addi r3, r1, 0x14
/* 8005F430 0005C230  38 81 00 08 */	addi r4, r1, 8
/* 8005F434 0005C234  4B FA BC ED */	bl __ml__5xVec3CFf
/* 8005F438 0005C238  38 7E 00 24 */	addi r3, r30, 0x24
/* 8005F43C 0005C23C  38 81 00 14 */	addi r4, r1, 0x14
/* 8005F440 0005C240  4B FA BE 25 */	bl __as__5xVec3FRC5xVec3
/* 8005F444 0005C244  7F C3 F3 78 */	mr r3, r30
/* 8005F448 0005C248  38 9E 00 30 */	addi r4, r30, 0x30
/* 8005F44C 0005C24C  4B FB 64 DD */	bl xQuickCullForBox__FP7xQCDataPC4xBox
/* 8005F450 0005C250  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 8005F454 0005C254  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 8005F458 0005C258  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 8005F45C 0005C25C  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 8005F460 0005C260  E3 A1 00 58 */	psq_l f29, 88(r1), 0, qr0
/* 8005F464 0005C264  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 8005F468 0005C268  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8005F46C 0005C26C  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8005F470 0005C270  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8005F474 0005C274  7C 08 03 A6 */	mtlr r0
/* 8005F478 0005C278  38 21 00 80 */	addi r1, r1, 0x80
/* 8005F47C 0005C27C  4E 80 00 20 */	blr 

start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyFv:
/* 8005F480 0005C280  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005F484 0005C284  7C 08 02 A6 */	mflr r0
/* 8005F488 0005C288  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005F48C 0005C28C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005F490 0005C290  7C 7F 1B 78 */	mr r31, r3
/* 8005F494 0005C294  4B FF 81 69 */	bl camera_taken__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005F498 0005C298  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8005F49C 0005C29C  41 82 00 18 */	beq lbl_8005F4B4
/* 8005F4A0 0005C2A0  4B FF 81 29 */	bl release_camera__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005F4A4 0005C2A4  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005F4A8 0005C2A8  C0 03 00 A8 */	lfs f0, 0xa8(r3)
/* 8005F4AC 0005C2AC  D0 1F 00 08 */	stfs f0, 8(r31)
/* 8005F4B0 0005C2B0  48 00 00 34 */	b lbl_8005F4E4
lbl_8005F4B4:
/* 8005F4B4 0005C2B4  4B FF 80 E1 */	bl capture_camera__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005F4B8 0005C2B8  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005F4BC 0005C2BC  7F E3 FB 78 */	mr r3, r31
/* 8005F4C0 0005C2C0  D0 1F 00 08 */	stfs f0, 8(r31)
/* 8005F4C4 0005C2C4  48 00 04 01 */	bl init_path__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyFv
/* 8005F4C8 0005C2C8  7F E3 FB 78 */	mr r3, r31
/* 8005F4CC 0005C2CC  48 00 00 2D */	bl move__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyFv
/* 8005F4D0 0005C2D0  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 8005F4D4 0005C2D4  38 7F 00 0C */	addi r3, r31, 0xc
/* 8005F4D8 0005C2D8  38 84 C2 A4 */	addi r4, r4, shared__13cruise_bubble@l
/* 8005F4DC 0005C2DC  38 84 00 48 */	addi r4, r4, 0x48
/* 8005F4E0 0005C2E0  4B FC 63 19 */	bl __as__5xVec2FRC5xVec2
lbl_8005F4E4:
/* 8005F4E4 0005C2E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005F4E8 0005C2E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005F4EC 0005C2EC  7C 08 03 A6 */	mtlr r0
/* 8005F4F0 0005C2F0  38 21 00 10 */	addi r1, r1, 0x10
/* 8005F4F4 0005C2F4  4E 80 00 20 */	blr 

/* move__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyFv */
move__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyFv:
/* 8005F4F8 0005C2F8  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8005F4FC 0005C2FC  7C 08 02 A6 */	mflr r0
/* 8005F500 0005C300  90 01 00 64 */	stw r0, 0x64(r1)
/* 8005F504 0005C304  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8005F508 0005C308  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 8005F50C 0005C30C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8005F510 0005C310  80 8D 81 80 */	lwz r4, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005F514 0005C314  7C 7F 1B 78 */	mr r31, r3
/* 8005F518 0005C318  C0 23 00 08 */	lfs f1, 8(r3)
/* 8005F51C 0005C31C  C0 04 00 A8 */	lfs f0, 0xa8(r4)
/* 8005F520 0005C320  C0 44 00 BC */	lfs f2, 0xbc(r4)
/* 8005F524 0005C324  EC 21 00 24 */	fdivs f1, f1, f0
/* 8005F528 0005C328  48 00 03 3D */	bl xSCurve__Fff
/* 8005F52C 0005C32C  80 CD 81 80 */	lwz r6, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005F530 0005C330  FF E0 08 90 */	fmr f31, f1
/* 8005F534 0005C334  7F E3 FB 78 */	mr r3, r31
/* 8005F538 0005C338  38 81 00 30 */	addi r4, r1, 0x30
/* 8005F53C 0005C33C  C0 26 00 B4 */	lfs f1, 0xb4(r6)
/* 8005F540 0005C340  38 A1 00 08 */	addi r5, r1, 8
/* 8005F544 0005C344  C0 06 00 B8 */	lfs f0, 0xb8(r6)
/* 8005F548 0005C348  EC 00 08 28 */	fsubs f0, f0, f1
/* 8005F54C 0005C34C  EC 3F 08 3A */	fmadds f1, f31, f0, f1
/* 8005F550 0005C350  48 00 00 9D */	bl eval_missle_path__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyCFfR5xVec3Rf
/* 8005F554 0005C354  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 8005F558 0005C358  38 61 00 0C */	addi r3, r1, 0xc
/* 8005F55C 0005C35C  38 84 C2 A4 */	addi r4, r4, shared__13cruise_bubble@l
/* 8005F560 0005C360  38 A1 00 30 */	addi r5, r1, 0x30
/* 8005F564 0005C364  38 84 00 50 */	addi r4, r4, 0x50
/* 8005F568 0005C368  4B FA BC 65 */	bl __mi__5xVec3CFRC5xVec3
/* 8005F56C 0005C36C  38 61 00 18 */	addi r3, r1, 0x18
/* 8005F570 0005C370  38 81 00 0C */	addi r4, r1, 0xc
/* 8005F574 0005C374  48 00 09 1D */	bl up_normal__5xVec3CFv
/* 8005F578 0005C378  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8005F57C 0005C37C  3C 60 80 3C */	lis r3, globals@ha
/* 8005F580 0005C380  80 A1 00 1C */	lwz r5, 0x1c(r1)
/* 8005F584 0005C384  38 63 05 58 */	addi r3, r3, globals@l
/* 8005F588 0005C388  80 01 00 20 */	lwz r0, 0x20(r1)
/* 8005F58C 0005C38C  90 81 00 24 */	stw r4, 0x24(r1)
/* 8005F590 0005C390  38 81 00 30 */	addi r4, r1, 0x30
/* 8005F594 0005C394  90 A1 00 28 */	stw r5, 0x28(r1)
/* 8005F598 0005C398  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8005F59C 0005C39C  4B FA E1 7D */	bl xCameraMove__FP7xCameraRC5xVec3
/* 8005F5A0 0005C3A0  C0 02 89 C0 */	lfs f0, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005F5A4 0005C3A4  3C 60 80 3C */	lis r3, globals@ha
/* 8005F5A8 0005C3A8  C0 21 00 08 */	lfs f1, 8(r1)
/* 8005F5AC 0005C3AC  38 63 05 58 */	addi r3, r3, globals@l
/* 8005F5B0 0005C3B0  EC 00 F8 28 */	fsubs f0, f0, f31
/* 8005F5B4 0005C3B4  38 81 00 24 */	addi r4, r1, 0x24
/* 8005F5B8 0005C3B8  EC 21 00 32 */	fmuls f1, f1, f0
/* 8005F5BC 0005C3BC  D0 21 00 08 */	stfs f1, 8(r1)
/* 8005F5C0 0005C3C0  C0 42 89 B8 */	lfs f2, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005F5C4 0005C3C4  FC 60 10 90 */	fmr f3, f2
/* 8005F5C8 0005C3C8  FC 80 10 90 */	fmr f4, f2
/* 8005F5CC 0005C3CC  4B FA E6 6D */	bl xCameraRotate__FP7xCameraRC5xVec3ffff
/* 8005F5D0 0005C3D0  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 8005F5D4 0005C3D4  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8005F5D8 0005C3D8  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8005F5DC 0005C3DC  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8005F5E0 0005C3E0  7C 08 03 A6 */	mtlr r0
/* 8005F5E4 0005C3E4  38 21 00 60 */	addi r1, r1, 0x60
/* 8005F5E8 0005C3E8  4E 80 00 20 */	blr 

/* eval_missle_path__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyCFfR5xVec3Rf */
eval_missle_path__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyCFfR5xVec3Rf:
/* 8005F5EC 0005C3EC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8005F5F0 0005C3F0  7C 08 02 A6 */	mflr r0
/* 8005F5F4 0005C3F4  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005F5F8 0005C3F8  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8005F5FC 0005C3FC  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8005F600 0005C400  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8005F604 0005C404  FF E0 08 90 */	fmr f31, f1
/* 8005F608 0005C408  7C 7D 1B 78 */	mr r29, r3
/* 8005F60C 0005C40C  7C 9E 23 78 */	mr r30, r4
/* 8005F610 0005C410  7C BF 2B 78 */	mr r31, r5
/* 8005F614 0005C414  48 00 01 AD */	bl find_nearest__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyCFf
/* 8005F618 0005C418  7C 7C 1B 79 */	or. r28, r3, r3
/* 8005F61C 0005C41C  41 81 00 0C */	bgt lbl_8005F628
/* 8005F620 0005C420  3B 9C 00 01 */	addi r28, r28, 1
/* 8005F624 0005C424  48 00 00 28 */	b lbl_8005F64C
lbl_8005F628:
/* 8005F628 0005C428  3C 60 80 2E */	lis r3, lbl_802DBE30@ha
/* 8005F62C 0005C42C  38 63 BE 30 */	addi r3, r3, lbl_802DBE30@l
/* 8005F630 0005C430  48 00 0E CD */	bl size__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFv
/* 8005F634 0005C434  7C 1C 18 00 */	cmpw r28, r3
/* 8005F638 0005C438  41 80 00 14 */	blt lbl_8005F64C
/* 8005F63C 0005C43C  3C 60 80 2E */	lis r3, lbl_802DBE30@ha
/* 8005F640 0005C440  38 63 BE 30 */	addi r3, r3, lbl_802DBE30@l
/* 8005F644 0005C444  48 00 0E B9 */	bl size__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFv
/* 8005F648 0005C448  3B 83 FF FF */	addi r28, r3, -1
lbl_8005F64C:
/* 8005F64C 0005C44C  3C 60 80 2E */	lis r3, lbl_802DBE30@ha
/* 8005F650 0005C450  38 9C FF FF */	addi r4, r28, -1
/* 8005F654 0005C454  38 63 BE 30 */	addi r3, r3, lbl_802DBE30@l
/* 8005F658 0005C458  48 00 0E BD */	bl __vc__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fi
/* 8005F65C 0005C45C  3C 80 80 2E */	lis r4, lbl_802DBE30@ha
/* 8005F660 0005C460  7C 7B 1B 78 */	mr r27, r3
/* 8005F664 0005C464  38 04 BE 30 */	addi r0, r4, lbl_802DBE30@l
/* 8005F668 0005C468  7F 84 E3 78 */	mr r4, r28
/* 8005F66C 0005C46C  7C 03 03 78 */	mr r3, r0
/* 8005F670 0005C470  48 00 0E A5 */	bl __vc__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fi
/* 8005F674 0005C474  57 80 10 3A */	slwi r0, r28, 2
/* 8005F678 0005C478  C0 02 89 C4 */	lfs f0, lbl_803CD344-_SDA2_BASE_(r2)
/* 8005F67C 0005C47C  7C 9D 02 14 */	add r4, r29, r0
/* 8005F680 0005C480  7C 7C 1B 78 */	mr r28, r3
/* 8005F684 0005C484  C0 44 00 10 */	lfs f2, 0x10(r4)
/* 8005F688 0005C488  C0 64 00 14 */	lfs f3, 0x14(r4)
/* 8005F68C 0005C48C  EC 22 18 28 */	fsubs f1, f2, f3
/* 8005F690 0005C490  FC 20 0A 10 */	fabs f1, f1
/* 8005F694 0005C494  FC 20 08 18 */	frsp f1, f1
/* 8005F698 0005C498  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005F69C 0005C49C  4C 40 13 82 */	cror 2, 0, 2
/* 8005F6A0 0005C4A0  40 82 00 1C */	bne lbl_8005F6BC
/* 8005F6A4 0005C4A4  7F C3 F3 78 */	mr r3, r30
/* 8005F6A8 0005C4A8  7F 64 DB 78 */	mr r4, r27
/* 8005F6AC 0005C4AC  4B FA BB B9 */	bl __as__5xVec3FRC5xVec3
/* 8005F6B0 0005C4B0  C0 1B 00 0C */	lfs f0, 0xc(r27)
/* 8005F6B4 0005C4B4  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8005F6B8 0005C4B8  48 00 00 40 */	b lbl_8005F6F8
lbl_8005F6BC:
/* 8005F6BC 0005C4BC  EC 3F 10 28 */	fsubs f1, f31, f2
/* 8005F6C0 0005C4C0  7F A3 EB 78 */	mr r3, r29
/* 8005F6C4 0005C4C4  EC 03 10 28 */	fsubs f0, f3, f2
/* 8005F6C8 0005C4C8  7F C4 F3 78 */	mr r4, r30
/* 8005F6CC 0005C4CC  7F 65 DB 78 */	mr r5, r27
/* 8005F6D0 0005C4D0  7F 86 E3 78 */	mr r6, r28
/* 8005F6D4 0005C4D4  EF E1 00 24 */	fdivs f31, f1, f0
/* 8005F6D8 0005C4D8  FC 20 F8 90 */	fmr f1, f31
/* 8005F6DC 0005C4DC  48 00 00 49 */	bl lerp__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyCFR5xVec3fRC5xVec3RC5xVec3
/* 8005F6E0 0005C4E0  FC 20 F8 90 */	fmr f1, f31
/* 8005F6E4 0005C4E4  C0 5B 00 0C */	lfs f2, 0xc(r27)
/* 8005F6E8 0005C4E8  C0 7C 00 0C */	lfs f3, 0xc(r28)
/* 8005F6EC 0005C4EC  7F A3 EB 78 */	mr r3, r29
/* 8005F6F0 0005C4F0  7F E4 FB 78 */	mr r4, r31
/* 8005F6F4 0005C4F4  48 00 00 21 */	bl lerp__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyCFRffff
lbl_8005F6F8:
/* 8005F6F8 0005C4F8  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8005F6FC 0005C4FC  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8005F700 0005C500  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8005F704 0005C504  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8005F708 0005C508  7C 08 03 A6 */	mtlr r0
/* 8005F70C 0005C50C  38 21 00 30 */	addi r1, r1, 0x30
/* 8005F710 0005C510  4E 80 00 20 */	blr 

/* lerp__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyCFRffff */
lerp__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyCFRffff:
/* 8005F714 0005C514  EC 03 10 28 */	fsubs f0, f3, f2
/* 8005F718 0005C518  EC 01 10 3A */	fmadds f0, f1, f0, f2
/* 8005F71C 0005C51C  D0 04 00 00 */	stfs f0, 0(r4)
/* 8005F720 0005C520  4E 80 00 20 */	blr 

/* lerp__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyCFR5xVec3fRC5xVec3RC5xVec3 */
lerp__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyCFR5xVec3fRC5xVec3RC5xVec3:
/* 8005F724 0005C524  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8005F728 0005C528  7C 08 02 A6 */	mflr r0
/* 8005F72C 0005C52C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005F730 0005C530  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8005F734 0005C534  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8005F738 0005C538  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8005F73C 0005C53C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8005F740 0005C540  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8005F744 0005C544  93 81 00 10 */	stw r28, 0x10(r1)
/* 8005F748 0005C548  7C BE 2B 78 */	mr r30, r5
/* 8005F74C 0005C54C  7C DF 33 78 */	mr r31, r6
/* 8005F750 0005C550  FF E0 08 90 */	fmr f31, f1
/* 8005F754 0005C554  C0 45 00 00 */	lfs f2, 0(r5)
/* 8005F758 0005C558  C0 66 00 00 */	lfs f3, 0(r6)
/* 8005F75C 0005C55C  7C 7C 1B 78 */	mr r28, r3
/* 8005F760 0005C560  7C 9D 23 78 */	mr r29, r4
/* 8005F764 0005C564  4B FF FF B1 */	bl lerp__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyCFRffff
/* 8005F768 0005C568  FC 20 F8 90 */	fmr f1, f31
/* 8005F76C 0005C56C  C0 5E 00 04 */	lfs f2, 4(r30)
/* 8005F770 0005C570  C0 7F 00 04 */	lfs f3, 4(r31)
/* 8005F774 0005C574  7F 83 E3 78 */	mr r3, r28
/* 8005F778 0005C578  38 9D 00 04 */	addi r4, r29, 4
/* 8005F77C 0005C57C  4B FF FF 99 */	bl lerp__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyCFRffff
/* 8005F780 0005C580  FC 20 F8 90 */	fmr f1, f31
/* 8005F784 0005C584  C0 5E 00 08 */	lfs f2, 8(r30)
/* 8005F788 0005C588  C0 7F 00 08 */	lfs f3, 8(r31)
/* 8005F78C 0005C58C  7F 83 E3 78 */	mr r3, r28
/* 8005F790 0005C590  38 9D 00 08 */	addi r4, r29, 8
/* 8005F794 0005C594  4B FF FF 81 */	bl lerp__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyCFRffff
/* 8005F798 0005C598  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8005F79C 0005C59C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8005F7A0 0005C5A0  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8005F7A4 0005C5A4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8005F7A8 0005C5A8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8005F7AC 0005C5AC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8005F7B0 0005C5B0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8005F7B4 0005C5B4  7C 08 03 A6 */	mtlr r0
/* 8005F7B8 0005C5B8  38 21 00 30 */	addi r1, r1, 0x30
/* 8005F7BC 0005C5BC  4E 80 00 20 */	blr 

/* find_nearest__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyCFf */
find_nearest__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyCFf:
/* 8005F7C0 0005C5C0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005F7C4 0005C5C4  7C 08 02 A6 */	mflr r0
/* 8005F7C8 0005C5C8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005F7CC 0005C5CC  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8005F7D0 0005C5D0  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 8005F7D4 0005C5D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005F7D8 0005C5D8  93 C1 00 08 */	stw r30, 8(r1)
/* 8005F7DC 0005C5DC  3C 80 80 2E */	lis r4, lbl_802DBE30@ha
/* 8005F7E0 0005C5E0  FF E0 08 90 */	fmr f31, f1
/* 8005F7E4 0005C5E4  38 04 BE 30 */	addi r0, r4, lbl_802DBE30@l
/* 8005F7E8 0005C5E8  7C 7E 1B 78 */	mr r30, r3
/* 8005F7EC 0005C5EC  7C 03 03 78 */	mr r3, r0
/* 8005F7F0 0005C5F0  3B E0 00 00 */	li r31, 0
/* 8005F7F4 0005C5F4  48 00 0D 09 */	bl size__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFv
/* 8005F7F8 0005C5F8  48 00 00 40 */	b lbl_8005F838
lbl_8005F7FC:
/* 8005F7FC 0005C5FC  7C 9F 1A 14 */	add r4, r31, r3
/* 8005F800 0005C600  54 80 0F FE */	srwi r0, r4, 0x1f
/* 8005F804 0005C604  7C 00 22 14 */	add r0, r0, r4
/* 8005F808 0005C608  7C 05 0E 70 */	srawi r5, r0, 1
/* 8005F80C 0005C60C  54 A4 10 3A */	slwi r4, r5, 2
/* 8005F810 0005C610  38 04 00 14 */	addi r0, r4, 0x14
/* 8005F814 0005C614  7C 1E 04 2E */	lfsx f0, r30, r0
/* 8005F818 0005C618  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8005F81C 0005C61C  4C 40 13 82 */	cror 2, 0, 2
/* 8005F820 0005C620  40 82 00 0C */	bne lbl_8005F82C
/* 8005F824 0005C624  7C A3 2B 78 */	mr r3, r5
/* 8005F828 0005C628  48 00 00 10 */	b lbl_8005F838
lbl_8005F82C:
/* 8005F82C 0005C62C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8005F830 0005C630  40 81 00 08 */	ble lbl_8005F838
/* 8005F834 0005C634  3B E5 00 01 */	addi r31, r5, 1
lbl_8005F838:
/* 8005F838 0005C638  7C 1F 18 00 */	cmpw r31, r3
/* 8005F83C 0005C63C  41 80 FF C0 */	blt lbl_8005F7FC
/* 8005F840 0005C640  7F E3 FB 78 */	mr r3, r31
/* 8005F844 0005C644  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8005F848 0005C648  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005F84C 0005C64C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8005F850 0005C650  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005F854 0005C654  83 C1 00 08 */	lwz r30, 8(r1)
/* 8005F858 0005C658  7C 08 03 A6 */	mtlr r0
/* 8005F85C 0005C65C  38 21 00 20 */	addi r1, r1, 0x20
/* 8005F860 0005C660  4E 80 00 20 */	blr 

.global xSCurve__Fff
xSCurve__Fff:
/* 8005F864 0005C664  C0 62 89 C0 */	lfs f3, zEntCruiseBubble_f_1_0-_SDA2_BASE_(r2)
/* 8005F868 0005C668  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 8005F86C 0005C66C  EC 83 10 28 */	fsubs f4, f3, f2
/* 8005F870 0005C670  40 80 00 1C */	bge lbl_8005F88C
/* 8005F874 0005C674  C0 62 89 C8 */	lfs f3, lbl_803CD348-_SDA2_BASE_(r2)
/* 8005F878 0005C678  EC 02 01 32 */	fmuls f0, f2, f4
/* 8005F87C 0005C67C  EC 43 00 72 */	fmuls f2, f3, f1
/* 8005F880 0005C680  EC 22 00 72 */	fmuls f1, f2, f1
/* 8005F884 0005C684  EC 21 00 24 */	fdivs f1, f1, f0
/* 8005F888 0005C688  4E 80 00 20 */	blr 
lbl_8005F88C:
/* 8005F88C 0005C68C  FC 01 20 40 */	fcmpo cr0, f1, f4
/* 8005F890 0005C690  40 81 00 24 */	ble lbl_8005F8B4
/* 8005F894 0005C694  EC A3 08 28 */	fsubs f5, f3, f1
/* 8005F898 0005C698  C0 22 89 C8 */	lfs f1, lbl_803CD348-_SDA2_BASE_(r2)
/* 8005F89C 0005C69C  EC 02 01 32 */	fmuls f0, f2, f4
/* 8005F8A0 0005C6A0  EC 21 01 72 */	fmuls f1, f1, f5
/* 8005F8A4 0005C6A4  EC 21 01 72 */	fmuls f1, f1, f5
/* 8005F8A8 0005C6A8  EC 01 00 24 */	fdivs f0, f1, f0
/* 8005F8AC 0005C6AC  EC 23 00 28 */	fsubs f1, f3, f0
/* 8005F8B0 0005C6B0  4E 80 00 20 */	blr 
lbl_8005F8B4:
/* 8005F8B4 0005C6B4  C0 02 89 C8 */	lfs f0, lbl_803CD348-_SDA2_BASE_(r2)
/* 8005F8B8 0005C6B8  EC 00 08 BC */	fnmsubs f0, f0, f2, f1
/* 8005F8BC 0005C6BC  EC 20 20 24 */	fdivs f1, f0, f4
/* 8005F8C0 0005C6C0  4E 80 00 20 */	blr 

/* init_path__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyFv */
init_path__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyFv:
/* 8005F8C4 0005C6C4  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8005F8C8 0005C6C8  7C 08 02 A6 */	mflr r0
/* 8005F8CC 0005C6CC  90 01 00 54 */	stw r0, 0x54(r1)
/* 8005F8D0 0005C6D0  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8005F8D4 0005C6D4  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8005F8D8 0005C6D8  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8005F8DC 0005C6DC  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8005F8E0 0005C6E0  3C 80 80 2E */	lis r4, lbl_802DBE30@ha
/* 8005F8E4 0005C6E4  C3 E2 89 B8 */	lfs f31, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005F8E8 0005C6E8  38 04 BE 30 */	addi r0, r4, lbl_802DBE30@l
/* 8005F8EC 0005C6EC  7C 7E 1B 78 */	mr r30, r3
/* 8005F8F0 0005C6F0  7C 03 03 78 */	mr r3, r0
/* 8005F8F4 0005C6F4  48 00 0B 19 */	bl begin__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFv
/* 8005F8F8 0005C6F8  3C A0 80 2E */	lis r5, lbl_802DBE30@ha
/* 8005F8FC 0005C6FC  90 81 00 14 */	stw r4, 0x14(r1)
/* 8005F900 0005C700  38 05 BE 30 */	addi r0, r5, lbl_802DBE30@l
/* 8005F904 0005C704  90 61 00 10 */	stw r3, 0x10(r1)
/* 8005F908 0005C708  7C 03 03 78 */	mr r3, r0
/* 8005F90C 0005C70C  48 00 0C D1 */	bl end__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFv
/* 8005F910 0005C710  90 61 00 08 */	stw r3, 8(r1)
/* 8005F914 0005C714  38 61 00 10 */	addi r3, r1, 0x10
/* 8005F918 0005C718  90 81 00 0C */	stw r4, 0xc(r1)
/* 8005F91C 0005C71C  48 00 0C A1 */	bl __rf__Q286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iteratorCFv
/* 8005F920 0005C720  80 83 00 00 */	lwz r4, 0(r3)
/* 8005F924 0005C724  3B FE 00 14 */	addi r31, r30, 0x14
/* 8005F928 0005C728  80 03 00 04 */	lwz r0, 4(r3)
/* 8005F92C 0005C72C  90 81 00 24 */	stw r4, 0x24(r1)
/* 8005F930 0005C730  90 01 00 28 */	stw r0, 0x28(r1)
/* 8005F934 0005C734  80 03 00 08 */	lwz r0, 8(r3)
/* 8005F938 0005C738  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8005F93C 0005C73C  48 00 00 50 */	b lbl_8005F98C
lbl_8005F940:
/* 8005F940 0005C740  38 61 00 10 */	addi r3, r1, 0x10
/* 8005F944 0005C744  48 00 0C 79 */	bl __rf__Q286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iteratorCFv
/* 8005F948 0005C748  7C 60 1B 78 */	mr r0, r3
/* 8005F94C 0005C74C  38 61 00 18 */	addi r3, r1, 0x18
/* 8005F950 0005C750  7C 1E 03 78 */	mr r30, r0
/* 8005F954 0005C754  38 A1 00 24 */	addi r5, r1, 0x24
/* 8005F958 0005C758  7F C4 F3 78 */	mr r4, r30
/* 8005F95C 0005C75C  4B FA B8 71 */	bl __mi__5xVec3CFRC5xVec3
/* 8005F960 0005C760  38 61 00 18 */	addi r3, r1, 0x18
/* 8005F964 0005C764  4B FA B8 45 */	bl length__5xVec3CFv
/* 8005F968 0005C768  EC 1F 08 2A */	fadds f0, f31, f1
/* 8005F96C 0005C76C  7F C4 F3 78 */	mr r4, r30
/* 8005F970 0005C770  38 61 00 24 */	addi r3, r1, 0x24
/* 8005F974 0005C774  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8005F978 0005C778  C3 FF 00 00 */	lfs f31, 0(r31)
/* 8005F97C 0005C77C  4B FA B8 E9 */	bl __as__5xVec3FRC5xVec3
/* 8005F980 0005C780  38 61 00 10 */	addi r3, r1, 0x10
/* 8005F984 0005C784  48 00 0B ED */	bl __pp__Q286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iteratorFv
/* 8005F988 0005C788  3B FF 00 04 */	addi r31, r31, 4
lbl_8005F98C:
/* 8005F98C 0005C78C  38 61 00 10 */	addi r3, r1, 0x10
/* 8005F990 0005C790  38 81 00 08 */	addi r4, r1, 8
/* 8005F994 0005C794  48 00 0B C1 */	bl __ne__Q286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iteratorCFRCQ286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iterator
/* 8005F998 0005C798  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8005F99C 0005C79C  40 82 FF A4 */	bne lbl_8005F940
/* 8005F9A0 0005C7A0  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8005F9A4 0005C7A4  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8005F9A8 0005C7A8  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8005F9AC 0005C7AC  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8005F9B0 0005C7B0  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8005F9B4 0005C7B4  7C 08 03 A6 */	mtlr r0
/* 8005F9B8 0005C7B8  38 21 00 50 */	addi r1, r1, 0x50
/* 8005F9BC 0005C7BC  4E 80 00 20 */	blr 

stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyFv:
/* 8005F9C0 0005C7C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005F9C4 0005C7C4  7C 08 02 A6 */	mflr r0
/* 8005F9C8 0005C7C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005F9CC 0005C7CC  4B FF 7B FD */	bl release_camera__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005F9D0 0005C7D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005F9D4 0005C7D4  7C 08 03 A6 */	mtlr r0
/* 8005F9D8 0005C7D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8005F9DC 0005C7DC  4E 80 00 20 */	blr 

update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyFf:
/* 8005F9E0 0005C7E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005F9E4 0005C7E4  7C 08 02 A6 */	mflr r0
/* 8005F9E8 0005C7E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005F9EC 0005C7EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005F9F0 0005C7F0  7C 7F 1B 78 */	mr r31, r3
/* 8005F9F4 0005C7F4  C0 03 00 08 */	lfs f0, 8(r3)
/* 8005F9F8 0005C7F8  EC 00 08 2A */	fadds f0, f0, f1
/* 8005F9FC 0005C7FC  D0 03 00 08 */	stfs f0, 8(r3)
/* 8005FA00 0005C800  4B FF 7B FD */	bl camera_taken__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005FA04 0005C804  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8005FA08 0005C808  41 82 00 0C */	beq lbl_8005FA14
/* 8005FA0C 0005C80C  38 60 00 0B */	li r3, 0xb
/* 8005FA10 0005C810  48 00 00 70 */	b lbl_8005FA80
lbl_8005FA14:
/* 8005FA14 0005C814  80 6D 81 80 */	lwz r3, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005FA18 0005C818  C0 3F 00 08 */	lfs f1, 8(r31)
/* 8005FA1C 0005C81C  C0 03 00 A8 */	lfs f0, 0xa8(r3)
/* 8005FA20 0005C820  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005FA24 0005C824  4C 41 13 82 */	cror 2, 1, 2
/* 8005FA28 0005C828  40 82 00 0C */	bne lbl_8005FA34
/* 8005FA2C 0005C82C  38 60 00 0B */	li r3, 0xb
/* 8005FA30 0005C830  48 00 00 50 */	b lbl_8005FA80
lbl_8005FA34:
/* 8005FA34 0005C834  C0 03 00 AC */	lfs f0, 0xac(r3)
/* 8005FA38 0005C838  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005FA3C 0005C83C  4C 41 13 82 */	cror 2, 1, 2
/* 8005FA40 0005C840  40 82 00 34 */	bne lbl_8005FA74
/* 8005FA44 0005C844  3C 60 80 3C */	lis r3, globals@ha
/* 8005FA48 0005C848  38 63 05 58 */	addi r3, r3, globals@l
/* 8005FA4C 0005C84C  80 63 03 1C */	lwz r3, 0x31c(r3)
/* 8005FA50 0005C850  80 03 00 30 */	lwz r0, 0x30(r3)
/* 8005FA54 0005C854  54 00 05 EF */	rlwinm. r0, r0, 0, 0x17, 0x17
/* 8005FA58 0005C858  40 82 00 14 */	bne lbl_8005FA6C
/* 8005FA5C 0005C85C  7F E3 FB 78 */	mr r3, r31
/* 8005FA60 0005C860  48 00 00 35 */	bl control_jerked__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyCFv
/* 8005FA64 0005C864  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8005FA68 0005C868  41 82 00 0C */	beq lbl_8005FA74
lbl_8005FA6C:
/* 8005FA6C 0005C86C  38 60 00 0B */	li r3, 0xb
/* 8005FA70 0005C870  48 00 00 10 */	b lbl_8005FA80
lbl_8005FA74:
/* 8005FA74 0005C874  7F E3 FB 78 */	mr r3, r31
/* 8005FA78 0005C878  4B FF FA 81 */	bl move__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyFv
/* 8005FA7C 0005C87C  38 60 00 0A */	li r3, 0xa
lbl_8005FA80:
/* 8005FA80 0005C880  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005FA84 0005C884  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005FA88 0005C888  7C 08 03 A6 */	mtlr r0
/* 8005FA8C 0005C88C  38 21 00 10 */	addi r1, r1, 0x10
/* 8005FA90 0005C890  4E 80 00 20 */	blr 

/* control_jerked__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyCFv */
control_jerked__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_surveyCFv:
/* 8005FA94 0005C894  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8005FA98 0005C898  7C 08 02 A6 */	mflr r0
/* 8005FA9C 0005C89C  90 01 00 44 */	stw r0, 0x44(r1)
/* 8005FAA0 0005C8A0  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8005FAA4 0005C8A4  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8005FAA8 0005C8A8  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8005FAAC 0005C8AC  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 8005FAB0 0005C8B0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8005FAB4 0005C8B4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8005FAB8 0005C8B8  80 AD 81 80 */	lwz r5, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005FABC 0005C8BC  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 8005FAC0 0005C8C0  38 84 C2 A4 */	addi r4, r4, shared__13cruise_bubble@l
/* 8005FAC4 0005C8C4  7C 66 1B 78 */	mr r6, r3
/* 8005FAC8 0005C8C8  3B C4 00 48 */	addi r30, r4, 0x48
/* 8005FACC 0005C8CC  C3 E5 00 C0 */	lfs f31, 0xc0(r5)
/* 8005FAD0 0005C8D0  C3 C5 00 C4 */	lfs f30, 0xc4(r5)
/* 8005FAD4 0005C8D4  7F C3 F3 78 */	mr r3, r30
/* 8005FAD8 0005C8D8  38 86 00 0C */	addi r4, r6, 0xc
/* 8005FADC 0005C8DC  4B FB 5E 99 */	bl __mi__5xVec2CFRC5xVec2
/* 8005FAE0 0005C8E0  90 61 00 08 */	stw r3, 8(r1)
/* 8005FAE4 0005C8E4  38 61 00 08 */	addi r3, r1, 8
/* 8005FAE8 0005C8E8  3B E0 00 00 */	li r31, 0
/* 8005FAEC 0005C8EC  90 81 00 0C */	stw r4, 0xc(r1)
/* 8005FAF0 0005C8F0  4B FB 5E 6D */	bl length2__5xVec2CFv
/* 8005FAF4 0005C8F4  EC 1F 07 F2 */	fmuls f0, f31, f31
/* 8005FAF8 0005C8F8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005FAFC 0005C8FC  4C 41 13 82 */	cror 2, 1, 2
/* 8005FB00 0005C900  40 82 00 20 */	bne lbl_8005FB20
/* 8005FB04 0005C904  7F C3 F3 78 */	mr r3, r30
/* 8005FB08 0005C908  4B FB 5E 55 */	bl length2__5xVec2CFv
/* 8005FB0C 0005C90C  EC 1E 07 B2 */	fmuls f0, f30, f30
/* 8005FB10 0005C910  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005FB14 0005C914  4C 41 13 82 */	cror 2, 1, 2
/* 8005FB18 0005C918  40 82 00 08 */	bne lbl_8005FB20
/* 8005FB1C 0005C91C  3B E0 00 01 */	li r31, 1
lbl_8005FB20:
/* 8005FB20 0005C920  7F E3 FB 78 */	mr r3, r31
/* 8005FB24 0005C924  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8005FB28 0005C928  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8005FB2C 0005C92C  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 8005FB30 0005C930  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8005FB34 0005C934  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8005FB38 0005C938  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8005FB3C 0005C93C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8005FB40 0005C940  7C 08 03 A6 */	mtlr r0
/* 8005FB44 0005C944  38 21 00 40 */	addi r1, r1, 0x40
/* 8005FB48 0005C948  4E 80 00 20 */	blr 

start__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_camera_restoreFv:
/* 8005FB4C 0005C94C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005FB50 0005C950  7C 08 02 A6 */	mflr r0
/* 8005FB54 0005C954  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005FB58 0005C958  C0 02 89 B8 */	lfs f0, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005FB5C 0005C95C  D0 03 00 08 */	stfs f0, 8(r3)
/* 8005FB60 0005C960  4B FF A7 E1 */	bl hide_hud__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005FB64 0005C964  4B FF 7A E1 */	bl camera_leave__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005FB68 0005C968  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8005FB6C 0005C96C  40 82 00 68 */	bne lbl_8005FBD4
/* 8005FB70 0005C970  4B FF 85 99 */	bl get_player_loc__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005FB74 0005C974  3C A0 80 2E */	lis r5, lbl_802DBDF0@ha
/* 8005FB78 0005C978  7C 64 1B 78 */	mr r4, r3
/* 8005FB7C 0005C97C  38 A5 BD F0 */	addi r5, r5, lbl_802DBDF0@l
/* 8005FB80 0005C980  38 61 00 08 */	addi r3, r1, 8
/* 8005FB84 0005C984  38 A5 00 30 */	addi r5, r5, 0x30
/* 8005FB88 0005C988  4B FB 58 59 */	bl __pl__5xVec3CFRC5xVec3
/* 8005FB8C 0005C98C  80 81 00 08 */	lwz r4, 8(r1)
/* 8005FB90 0005C990  3C 60 80 3C */	lis r3, globals@ha
/* 8005FB94 0005C994  80 A1 00 0C */	lwz r5, 0xc(r1)
/* 8005FB98 0005C998  38 63 05 58 */	addi r3, r3, globals@l
/* 8005FB9C 0005C99C  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8005FBA0 0005C9A0  90 81 00 14 */	stw r4, 0x14(r1)
/* 8005FBA4 0005C9A4  38 81 00 14 */	addi r4, r1, 0x14
/* 8005FBA8 0005C9A8  90 A1 00 18 */	stw r5, 0x18(r1)
/* 8005FBAC 0005C9AC  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8005FBB0 0005C9B0  4B FA DB 69 */	bl xCameraMove__FP7xCameraRC5xVec3
/* 8005FBB4 0005C9B4  C0 22 89 B8 */	lfs f1, zEntCruiseBubble_f_0_0-_SDA2_BASE_(r2)
/* 8005FBB8 0005C9B8  3C 60 80 3C */	lis r3, globals@ha
/* 8005FBBC 0005C9BC  3C 80 80 2E */	lis r4, lbl_802DBDF0@ha
/* 8005FBC0 0005C9C0  FC 40 08 90 */	fmr f2, f1
/* 8005FBC4 0005C9C4  38 63 05 58 */	addi r3, r3, globals@l
/* 8005FBC8 0005C9C8  FC 60 08 90 */	fmr f3, f1
/* 8005FBCC 0005C9CC  38 84 BD F0 */	addi r4, r4, lbl_802DBDF0@l
/* 8005FBD0 0005C9D0  4B FA DF 45 */	bl xCameraRotate__FP7xCameraRC7xMat3x3fff
lbl_8005FBD4:
/* 8005FBD4 0005C9D4  4B FF 7A 29 */	bl camera_taken__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005FBD8 0005C9D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8005FBDC 0005C9DC  41 82 00 0C */	beq lbl_8005FBE8
/* 8005FBE0 0005C9E0  4B FF 79 E9 */	bl release_camera__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005FBE4 0005C9E4  48 00 00 08 */	b lbl_8005FBEC
lbl_8005FBE8:
/* 8005FBE8 0005C9E8  4B FF 79 AD */	bl capture_camera__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
lbl_8005FBEC:
/* 8005FBEC 0005C9EC  38 60 00 00 */	li r3, 0
/* 8005FBF0 0005C9F0  4B FE 8E 09 */	bl xSndSelectListenerMode__F24sound_listener_game_mode
/* 8005FBF4 0005C9F4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005FBF8 0005C9F8  7C 08 03 A6 */	mtlr r0
/* 8005FBFC 0005C9FC  38 21 00 20 */	addi r1, r1, 0x20
/* 8005FC00 0005CA00  4E 80 00 20 */	blr 

stop__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_camera_restoreFv:
/* 8005FC04 0005CA04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005FC08 0005CA08  7C 08 02 A6 */	mflr r0
/* 8005FC0C 0005CA0C  38 60 00 00 */	li r3, 0
/* 8005FC10 0005CA10  38 80 FF FF */	li r4, -1
/* 8005FC14 0005CA14  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005FC18 0005CA18  4B FF 80 C5 */	bl set_state__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_11thread_enumQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_enum
/* 8005FC1C 0005CA1C  4B FF 79 AD */	bl release_camera__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005FC20 0005CA20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005FC24 0005CA24  7C 08 03 A6 */	mtlr r0
/* 8005FC28 0005CA28  38 21 00 10 */	addi r1, r1, 0x10
/* 8005FC2C 0005CA2C  4E 80 00 20 */	blr 

update__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_camera_restoreFf:
/* 8005FC30 0005CA30  C0 03 00 08 */	lfs f0, 8(r3)
/* 8005FC34 0005CA34  EC 00 08 2A */	fadds f0, f0, f1
/* 8005FC38 0005CA38  D0 03 00 08 */	stfs f0, 8(r3)
/* 8005FC3C 0005CA3C  80 8D 81 80 */	lwz r4, lbl_803CAA80-_SDA_BASE_(r13)
/* 8005FC40 0005CA40  C0 23 00 08 */	lfs f1, 8(r3)
/* 8005FC44 0005CA44  C0 04 00 C8 */	lfs f0, 0xc8(r4)
/* 8005FC48 0005CA48  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005FC4C 0005CA4C  4C 41 13 82 */	cror 2, 1, 2
/* 8005FC50 0005CA50  40 82 00 0C */	bne lbl_8005FC5C
/* 8005FC54 0005CA54  38 60 FF FF */	li r3, -1
/* 8005FC58 0005CA58  4E 80 00 20 */	blr 
lbl_8005FC5C:
/* 8005FC5C 0005CA5C  38 60 00 0B */	li r3, 0xb
/* 8005FC60 0005CA60  4E 80 00 20 */	blr 

/* __cl__Q413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode13cb_damage_entFR4xEntR10xGridBound */
__cl__Q413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explode13cb_damage_entFR4xEntR10xGridBound:
/* 8005FC64 0005CA64  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8005FC68 0005CA68  7C 08 02 A6 */	mflr r0
/* 8005FC6C 0005CA6C  90 01 00 84 */	stw r0, 0x84(r1)
/* 8005FC70 0005CA70  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 8005FC74 0005CA74  93 C1 00 78 */	stw r30, 0x78(r1)
/* 8005FC78 0005CA78  7C 9E 23 78 */	mr r30, r4
/* 8005FC7C 0005CA7C  93 A1 00 74 */	stw r29, 0x74(r1)
/* 8005FC80 0005CA80  7C 7D 1B 78 */	mr r29, r3
/* 8005FC84 0005CA84  88 04 00 22 */	lbz r0, 0x22(r4)
/* 8005FC88 0005CA88  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 8005FC8C 0005CA8C  40 82 00 0C */	bne lbl_8005FC98
/* 8005FC90 0005CA90  38 60 00 01 */	li r3, 1
/* 8005FC94 0005CA94  48 00 01 08 */	b lbl_8005FD9C
lbl_8005FC98:
/* 8005FC98 0005CA98  7F C3 F3 78 */	mr r3, r30
/* 8005FC9C 0005CA9C  4B FF 7C 4D */	bl can_damage__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FP4xEnt
/* 8005FCA0 0005CAA0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8005FCA4 0005CAA4  40 82 00 0C */	bne lbl_8005FCB0
/* 8005FCA8 0005CAA8  38 60 00 01 */	li r3, 1
/* 8005FCAC 0005CAAC  48 00 00 F0 */	b lbl_8005FD9C
lbl_8005FCB0:
/* 8005FCB0 0005CAB0  3C 80 80 25 */	lis r4, lbl_80250004@ha
/* 8005FCB4 0005CAB4  84 A4 52 D8 */	lwzu r5, 0x52d8(r4)
/* 8005FCB8 0005CAB8  3C 60 80 29 */	lis r3, shared__13cruise_bubble@ha
/* 8005FCBC 0005CABC  C0 1D 00 00 */	lfs f0, 0(r29)
/* 8005FCC0 0005CAC0  38 63 C2 A4 */	addi r3, r3, shared__13cruise_bubble@l
/* 8005FCC4 0005CAC4  81 04 00 04 */	lwz r8, lbl_80250004@l(r4)
/* 8005FCC8 0005CAC8  3B E3 00 50 */	addi r31, r3, 0x50
/* 8005FCCC 0005CACC  80 E4 00 08 */	lwz r7, 8(r4)
/* 8005FCD0 0005CAD0  80 04 00 0C */	lwz r0, 0xc(r4)
/* 8005FCD4 0005CAD4  38 61 00 08 */	addi r3, r1, 8
/* 8005FCD8 0005CAD8  90 A1 00 08 */	stw r5, 8(r1)
/* 8005FCDC 0005CADC  38 9E 00 64 */	addi r4, r30, 0x64
/* 8005FCE0 0005CAE0  80 DF 00 00 */	lwz r6, 0(r31)
/* 8005FCE4 0005CAE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005FCE8 0005CAE8  80 BF 00 04 */	lwz r5, 4(r31)
/* 8005FCEC 0005CAEC  91 01 00 0C */	stw r8, 0xc(r1)
/* 8005FCF0 0005CAF0  80 1F 00 08 */	lwz r0, 8(r31)
/* 8005FCF4 0005CAF4  90 E1 00 10 */	stw r7, 0x10(r1)
/* 8005FCF8 0005CAF8  90 C1 00 08 */	stw r6, 8(r1)
/* 8005FCFC 0005CAFC  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8005FD00 0005CB00  90 01 00 10 */	stw r0, 0x10(r1)
/* 8005FD04 0005CB04  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8005FD08 0005CB08  4B FB 4A 09 */	bl xSphereHitsBound__FRC7xSphereRC6xBound
/* 8005FD0C 0005CB0C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8005FD10 0005CB10  40 82 00 0C */	bne lbl_8005FD1C
/* 8005FD14 0005CB14  38 60 00 01 */	li r3, 1
/* 8005FD18 0005CB18  48 00 00 84 */	b lbl_8005FD9C
lbl_8005FD1C:
/* 8005FD1C 0005CB1C  7F C3 F3 78 */	mr r3, r30
/* 8005FD20 0005CB20  4B FF 7C 65 */	bl was_damaged__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FP4xEnt
/* 8005FD24 0005CB24  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8005FD28 0005CB28  41 82 00 0C */	beq lbl_8005FD34
/* 8005FD2C 0005CB2C  38 60 00 01 */	li r3, 1
/* 8005FD30 0005CB30  48 00 00 6C */	b lbl_8005FD9C
lbl_8005FD34:
/* 8005FD34 0005CB34  88 1E 00 21 */	lbz r0, 0x21(r30)
/* 8005FD38 0005CB38  28 00 00 05 */	cmplwi r0, 5
/* 8005FD3C 0005CB3C  40 82 00 30 */	bne lbl_8005FD6C
/* 8005FD40 0005CB40  38 00 00 00 */	li r0, 0
/* 8005FD44 0005CB44  38 61 00 08 */	addi r3, r1, 8
/* 8005FD48 0005CB48  90 01 00 18 */	stw r0, 0x18(r1)
/* 8005FD4C 0005CB4C  38 A1 00 18 */	addi r5, r1, 0x18
/* 8005FD50 0005CB50  80 9E 00 24 */	lwz r4, 0x24(r30)
/* 8005FD54 0005CB54  4B FA FB 11 */	bl xSphereHitsModel__FPC7xSpherePC14xModelInstanceP7xCollis
/* 8005FD58 0005CB58  80 01 00 18 */	lwz r0, 0x18(r1)
/* 8005FD5C 0005CB5C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8005FD60 0005CB60  40 82 00 0C */	bne lbl_8005FD6C
/* 8005FD64 0005CB64  38 60 00 01 */	li r3, 1
/* 8005FD68 0005CB68  48 00 00 34 */	b lbl_8005FD9C
lbl_8005FD6C:
/* 8005FD6C 0005CB6C  4B FF CF 05 */	bl get_missle_mat__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_Fv
/* 8005FD70 0005CB70  3C 80 80 29 */	lis r4, shared__13cruise_bubble@ha
/* 8005FD74 0005CB74  7C 65 1B 78 */	mr r5, r3
/* 8005FD78 0005CB78  38 C4 C2 A4 */	addi r6, r4, shared__13cruise_bubble@l
/* 8005FD7C 0005CB7C  C0 3D 00 00 */	lfs f1, 0(r29)
/* 8005FD80 0005CB80  7F C3 F3 78 */	mr r3, r30
/* 8005FD84 0005CB84  7F E4 FB 78 */	mr r4, r31
/* 8005FD88 0005CB88  38 A5 00 20 */	addi r5, r5, 0x20
/* 8005FD8C 0005CB8C  38 C6 00 5C */	addi r6, r6, 0x5c
/* 8005FD90 0005CB90  38 E0 00 01 */	li r7, 1
/* 8005FD94 0005CB94  4B FF 78 F1 */	bl damage_entity__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FR4xEntRC5xVec3RC5xVec3RC5xVec3fb
/* 8005FD98 0005CB98  38 60 00 01 */	li r3, 1
lbl_8005FD9C:
/* 8005FD9C 0005CB9C  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8005FDA0 0005CBA0  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 8005FDA4 0005CBA4  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 8005FDA8 0005CBA8  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 8005FDAC 0005CBAC  7C 08 03 A6 */	mtlr r0
/* 8005FDB0 0005CBB0  38 21 00 80 */	addi r1, r1, 0x80
/* 8005FDB4 0005CBB4  4E 80 00 20 */	blr 

/* __cl__Q413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attach15cb_lock_targetsFR4xEntR10xGridBound */
__cl__Q413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attach15cb_lock_targetsFR4xEntR10xGridBound:
/* 8005FDB8 0005CBB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005FDBC 0005CBBC  7C 08 02 A6 */	mflr r0
/* 8005FDC0 0005CBC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005FDC4 0005CBC4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005FDC8 0005CBC8  7C 9F 23 78 */	mr r31, r4
/* 8005FDCC 0005CBCC  88 04 00 22 */	lbz r0, 0x22(r4)
/* 8005FDD0 0005CBD0  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 8005FDD4 0005CBD4  40 82 00 0C */	bne lbl_8005FDE0
/* 8005FDD8 0005CBD8  38 60 00 01 */	li r3, 1
/* 8005FDDC 0005CBDC  48 00 00 2C */	b lbl_8005FE08
lbl_8005FDE0:
/* 8005FDE0 0005CBE0  7F E3 FB 78 */	mr r3, r31
/* 8005FDE4 0005CBE4  4B FF 7B 05 */	bl can_damage__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FP4xEnt
/* 8005FDE8 0005CBE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8005FDEC 0005CBEC  40 82 00 0C */	bne lbl_8005FDF8
/* 8005FDF0 0005CBF0  38 60 00 01 */	li r3, 1
/* 8005FDF4 0005CBF4  48 00 00 14 */	b lbl_8005FE08
lbl_8005FDF8:
/* 8005FDF8 0005CBF8  7F E3 FB 78 */	mr r3, r31
/* 8005FDFC 0005CBFC  4B FB BA 35 */	bl xEntGetCenter__FPC4xEnt
/* 8005FE00 0005CC00  4B FF A7 71 */	bl check_lock_target__Q213cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_FPC5xVec3
/* 8005FE04 0005CC04  38 60 00 01 */	li r3, 1
lbl_8005FE08:
/* 8005FE08 0005CC08  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005FE0C 0005CC0C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005FE10 0005CC10  7C 08 03 A6 */	mtlr r0
/* 8005FE14 0005CC14  38 21 00 10 */	addi r1, r1, 0x10
/* 8005FE18 0005CC18  4E 80 00 20 */	blr 

__sinit_zEntCruiseBubble_cpp:
/* 8005FE1C 0005CC1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005FE20 0005CC20  7C 08 02 A6 */	mflr r0
/* 8005FE24 0005CC24  3C 60 80 2E */	lis r3, lbl_802DBE30@ha
/* 8005FE28 0005CC28  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005FE2C 0005CC2C  38 63 BE 30 */	addi r3, r3, lbl_802DBE30@l
/* 8005FE30 0005CC30  48 00 00 15 */	bl __ct__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fv
/* 8005FE34 0005CC34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005FE38 0005CC38  7C 08 03 A6 */	mtlr r0
/* 8005FE3C 0005CC3C  38 21 00 10 */	addi r1, r1, 0x10
/* 8005FE40 0005CC40  4E 80 00 20 */	blr 

/* __ct__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>Fv */
.global __ct__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fv
__ct__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fv:
/* 8005FE44 0005CC44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005FE48 0005CC48  7C 08 02 A6 */	mflr r0
/* 8005FE4C 0005CC4C  3C 80 80 06 */	lis r4, __ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_dataFv@ha
/* 8005FE50 0005CC50  38 A0 00 00 */	li r5, 0
/* 8005FE54 0005CC54  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005FE58 0005CC58  38 84 FE 8C */	addi r4, r4, __ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_dataFv@l
/* 8005FE5C 0005CC5C  38 C0 00 10 */	li r6, 0x10
/* 8005FE60 0005CC60  38 E0 00 80 */	li r7, 0x80
/* 8005FE64 0005CC64  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005FE68 0005CC68  7C 7F 1B 78 */	mr r31, r3
/* 8005FE6C 0005CC6C  38 7F 00 08 */	addi r3, r31, 8
/* 8005FE70 0005CC70  48 18 D0 F9 */	bl func_801ECF68
/* 8005FE74 0005CC74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005FE78 0005CC78  7F E3 FB 78 */	mr r3, r31
/* 8005FE7C 0005CC7C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005FE80 0005CC80  7C 08 03 A6 */	mtlr r0
/* 8005FE84 0005CC84  38 21 00 10 */	addi r1, r1, 0x10
/* 8005FE88 0005CC88  4E 80 00 20 */	blr 

__ct__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_dataFv:
/* 8005FE8C 0005CC8C  4E 80 00 20 */	blr 

.global up_normal__5xVec3CFv
up_normal__5xVec3CFv:
/* 8005FE90 0005CC90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005FE94 0005CC94  7C 08 02 A6 */	mflr r0
/* 8005FE98 0005CC98  3C A0 80 25 */	lis r5, m_UnitAxisY__5xVec3@ha
/* 8005FE9C 0005CC9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005FEA0 0005CCA0  38 A5 42 F8 */	addi r5, r5, m_UnitAxisY__5xVec3@l
/* 8005FEA4 0005CCA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005FEA8 0005CCA8  7C 7F 1B 78 */	mr r31, r3
/* 8005FEAC 0005CCAC  48 00 00 19 */	bl safe_normal__5xVec3CFRC5xVec3
/* 8005FEB0 0005CCB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005FEB4 0005CCB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005FEB8 0005CCB8  7C 08 03 A6 */	mtlr r0
/* 8005FEBC 0005CCBC  38 21 00 10 */	addi r1, r1, 0x10
/* 8005FEC0 0005CCC0  4E 80 00 20 */	blr 

.global safe_normal__5xVec3CFRC5xVec3
safe_normal__5xVec3CFRC5xVec3:
/* 8005FEC4 0005CCC4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005FEC8 0005CCC8  7C 08 02 A6 */	mflr r0
/* 8005FECC 0005CCCC  80 E4 00 00 */	lwz r7, 0(r4)
/* 8005FED0 0005CCD0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005FED4 0005CCD4  80 C4 00 04 */	lwz r6, 4(r4)
/* 8005FED8 0005CCD8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8005FEDC 0005CCDC  7C 7F 1B 78 */	mr r31, r3
/* 8005FEE0 0005CCE0  80 04 00 08 */	lwz r0, 8(r4)
/* 8005FEE4 0005CCE4  7C A4 2B 78 */	mr r4, r5
/* 8005FEE8 0005CCE8  90 E1 00 08 */	stw r7, 8(r1)
/* 8005FEEC 0005CCEC  38 61 00 08 */	addi r3, r1, 8
/* 8005FEF0 0005CCF0  90 C1 00 0C */	stw r6, 0xc(r1)
/* 8005FEF4 0005CCF4  90 01 00 10 */	stw r0, 0x10(r1)
/* 8005FEF8 0005CCF8  4B FA E9 D9 */	bl safe_normalize__5xVec3FRC5xVec3
/* 8005FEFC 0005CCFC  80 83 00 00 */	lwz r4, 0(r3)
/* 8005FF00 0005CD00  80 03 00 04 */	lwz r0, 4(r3)
/* 8005FF04 0005CD04  90 9F 00 00 */	stw r4, 0(r31)
/* 8005FF08 0005CD08  90 1F 00 04 */	stw r0, 4(r31)
/* 8005FF0C 0005CD0C  80 03 00 08 */	lwz r0, 8(r3)
/* 8005FF10 0005CD10  90 1F 00 08 */	stw r0, 8(r31)
/* 8005FF14 0005CD14  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8005FF18 0005CD18  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005FF1C 0005CD1C  7C 08 03 A6 */	mtlr r0
/* 8005FF20 0005CD20  38 21 00 20 */	addi r1, r1, 0x20
/* 8005FF24 0005CD24  4E 80 00 20 */	blr 

.global __mi__5xVec3CFv
__mi__5xVec3CFv:
/* 8005FF28 0005CD28  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005FF2C 0005CD2C  80 04 00 00 */	lwz r0, 0(r4)
/* 8005FF30 0005CD30  80 A4 00 04 */	lwz r5, 4(r4)
/* 8005FF34 0005CD34  90 01 00 08 */	stw r0, 8(r1)
/* 8005FF38 0005CD38  80 04 00 08 */	lwz r0, 8(r4)
/* 8005FF3C 0005CD3C  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8005FF40 0005CD40  C0 01 00 08 */	lfs f0, 8(r1)
/* 8005FF44 0005CD44  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8005FF48 0005CD48  FC 40 00 50 */	fneg f2, f0
/* 8005FF4C 0005CD4C  90 01 00 10 */	stw r0, 0x10(r1)
/* 8005FF50 0005CD50  FC 20 08 50 */	fneg f1, f1
/* 8005FF54 0005CD54  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8005FF58 0005CD58  D0 41 00 08 */	stfs f2, 8(r1)
/* 8005FF5C 0005CD5C  FC 00 00 50 */	fneg f0, f0
/* 8005FF60 0005CD60  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8005FF64 0005CD64  80 01 00 08 */	lwz r0, 8(r1)
/* 8005FF68 0005CD68  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8005FF6C 0005CD6C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8005FF70 0005CD70  90 03 00 00 */	stw r0, 0(r3)
/* 8005FF74 0005CD74  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8005FF78 0005CD78  90 83 00 04 */	stw r4, 4(r3)
/* 8005FF7C 0005CD7C  90 03 00 08 */	stw r0, 8(r3)
/* 8005FF80 0005CD80  38 21 00 20 */	addi r1, r1, 0x20
/* 8005FF84 0005CD84  4E 80 00 20 */	blr 

.global create__5xVec3Ffff
create__5xVec3Ffff:
/* 8005FF88 0005CD88  3C 80 80 25 */	lis r4, lbl_802550B8@ha
/* 8005FF8C 0005CD8C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005FF90 0005CD90  38 A4 50 B8 */	addi r5, r4, lbl_802550B8@l
/* 8005FF94 0005CD94  80 05 00 00 */	lwz r0, 0(r5)
/* 8005FF98 0005CD98  80 85 00 04 */	lwz r4, 4(r5)
/* 8005FF9C 0005CD9C  90 01 00 08 */	stw r0, 8(r1)
/* 8005FFA0 0005CDA0  80 05 00 08 */	lwz r0, 8(r5)
/* 8005FFA4 0005CDA4  90 81 00 0C */	stw r4, 0xc(r1)
/* 8005FFA8 0005CDA8  90 01 00 10 */	stw r0, 0x10(r1)
/* 8005FFAC 0005CDAC  D0 21 00 08 */	stfs f1, 8(r1)
/* 8005FFB0 0005CDB0  80 01 00 08 */	lwz r0, 8(r1)
/* 8005FFB4 0005CDB4  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 8005FFB8 0005CDB8  D0 61 00 10 */	stfs f3, 0x10(r1)
/* 8005FFBC 0005CDBC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8005FFC0 0005CDC0  90 03 00 00 */	stw r0, 0(r3)
/* 8005FFC4 0005CDC4  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8005FFC8 0005CDC8  90 83 00 04 */	stw r4, 4(r3)
/* 8005FFCC 0005CDCC  90 03 00 08 */	stw r0, 8(r3)
/* 8005FFD0 0005CDD0  38 21 00 20 */	addi r1, r1, 0x20
/* 8005FFD4 0005CDD4  4E 80 00 20 */	blr 

.global create__5xVec3Ff
create__5xVec3Ff:
/* 8005FFD8 0005CDD8  3C 80 80 25 */	lis r4, lbl_802550C4@ha
/* 8005FFDC 0005CDDC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005FFE0 0005CDE0  38 A4 50 C4 */	addi r5, r4, lbl_802550C4@l
/* 8005FFE4 0005CDE4  80 05 00 00 */	lwz r0, 0(r5)
/* 8005FFE8 0005CDE8  80 85 00 04 */	lwz r4, 4(r5)
/* 8005FFEC 0005CDEC  90 01 00 08 */	stw r0, 8(r1)
/* 8005FFF0 0005CDF0  80 05 00 08 */	lwz r0, 8(r5)
/* 8005FFF4 0005CDF4  90 81 00 0C */	stw r4, 0xc(r1)
/* 8005FFF8 0005CDF8  90 01 00 10 */	stw r0, 0x10(r1)
/* 8005FFFC 0005CDFC  D0 21 00 08 */	stfs f1, 8(r1)
/* 80060000 0005CE00  80 01 00 08 */	lwz r0, 8(r1)
/* 80060004 0005CE04  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80060008 0005CE08  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8006000C 0005CE0C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80060010 0005CE10  90 03 00 00 */	stw r0, 0(r3)
/* 80060014 0005CE14  80 01 00 10 */	lwz r0, 0x10(r1)
/* 80060018 0005CE18  90 83 00 04 */	stw r4, 4(r3)
/* 8006001C 0005CE1C  90 03 00 08 */	stw r0, 8(r3)
/* 80060020 0005CE20  38 21 00 20 */	addi r1, r1, 0x20
/* 80060024 0005CE24  4E 80 00 20 */	blr 

.global IsHealthy__10zNPCCommonFv
IsHealthy__10zNPCCommonFv:
/* 80060028 0005CE28  38 60 00 01 */	li r3, 1
/* 8006002C 0005CE2C  4E 80 00 20 */	blr 

.global zEntTriggerAsset__FRC11zEntTrigger
zEntTriggerAsset__FRC11zEntTrigger:
/* 80060030 0005CE30  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80060034 0005CE34  38 63 00 54 */	addi r3, r3, 0x54
/* 80060038 0005CE38  4E 80 00 20 */	blr 

.global __apl__5xVec2FRC5xVec2
__apl__5xVec2FRC5xVec2:
/* 800600A0 0005CEA0  C0 43 00 00 */	lfs f2, 0(r3)
/* 800600A4 0005CEA4  C0 24 00 00 */	lfs f1, 0(r4)
/* 800600A8 0005CEA8  C0 04 00 04 */	lfs f0, 4(r4)
/* 800600AC 0005CEAC  EC 22 08 2A */	fadds f1, f2, f1
/* 800600B0 0005CEB0  D0 23 00 00 */	stfs f1, 0(r3)
/* 800600B4 0005CEB4  C0 23 00 04 */	lfs f1, 4(r3)
/* 800600B8 0005CEB8  EC 01 00 2A */	fadds f0, f1, f0
/* 800600BC 0005CEBC  D0 03 00 04 */	stfs f0, 4(r3)
/* 800600C0 0005CEC0  4E 80 00 20 */	blr 

.global __ml__5xVec2CFf
__ml__5xVec2CFf:
/* 800600C4 0005CEC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800600C8 0005CEC8  7C 08 02 A6 */	mflr r0
/* 800600CC 0005CECC  80 83 00 00 */	lwz r4, 0(r3)
/* 800600D0 0005CED0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800600D4 0005CED4  80 03 00 04 */	lwz r0, 4(r3)
/* 800600D8 0005CED8  38 61 00 08 */	addi r3, r1, 8
/* 800600DC 0005CEDC  90 81 00 08 */	stw r4, 8(r1)
/* 800600E0 0005CEE0  90 01 00 0C */	stw r0, 0xc(r1)
/* 800600E4 0005CEE4  48 00 00 1D */	bl __amu__5xVec2Ff
/* 800600E8 0005CEE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800600EC 0005CEEC  80 61 00 08 */	lwz r3, 8(r1)
/* 800600F0 0005CEF0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 800600F4 0005CEF4  7C 08 03 A6 */	mtlr r0
/* 800600F8 0005CEF8  38 21 00 10 */	addi r1, r1, 0x10
/* 800600FC 0005CEFC  4E 80 00 20 */	blr 

.global __amu__5xVec2Ff
__amu__5xVec2Ff:
/* 80060100 0005CF00  C0 03 00 00 */	lfs f0, 0(r3)
/* 80060104 0005CF04  EC 00 00 72 */	fmuls f0, f0, f1
/* 80060108 0005CF08  D0 03 00 00 */	stfs f0, 0(r3)
/* 8006010C 0005CF0C  C0 03 00 04 */	lfs f0, 4(r3)
/* 80060110 0005CF10  EC 00 00 72 */	fmuls f0, f0, f1
/* 80060114 0005CF14  D0 03 00 04 */	stfs f0, 4(r3)
/* 80060118 0005CF18  4E 80 00 20 */	blr 

/* center__13basic_rect<f>Fff */
.global center__13basic_rect_esc__0_f_esc__1_Fff
center__13basic_rect_esc__0_f_esc__1_Fff:
/* 8006011C 0005CF1C  C0 62 89 C8 */	lfs f3, lbl_803CD348-_SDA2_BASE_(r2)
/* 80060120 0005CF20  C0 03 00 08 */	lfs f0, 8(r3)
/* 80060124 0005CF24  EC 03 08 3C */	fnmsubs f0, f3, f0, f1
/* 80060128 0005CF28  D0 03 00 00 */	stfs f0, 0(r3)
/* 8006012C 0005CF2C  C0 22 89 C8 */	lfs f1, lbl_803CD348-_SDA2_BASE_(r2)
/* 80060130 0005CF30  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80060134 0005CF34  EC 01 10 3C */	fnmsubs f0, f1, f0, f2
/* 80060138 0005CF38  D0 03 00 04 */	stfs f0, 4(r3)
/* 8006013C 0005CF3C  4E 80 00 20 */	blr 

/* set_size__13basic_rect<f>Fff */
.global set_size__13basic_rect_esc__0_f_esc__1_Fff
set_size__13basic_rect_esc__0_f_esc__1_Fff:
/* 80060140 0005CF40  D0 23 00 08 */	stfs f1, 8(r3)
/* 80060144 0005CF44  D0 43 00 0C */	stfs f2, 0xc(r3)
/* 80060148 0005CF48  4E 80 00 20 */	blr 

/* set_size__13basic_rect<f>Ff */
.global set_size__13basic_rect_esc__0_f_esc__1_Ff
set_size__13basic_rect_esc__0_f_esc__1_Ff:
/* 8006014C 0005CF4C  D0 23 00 0C */	stfs f1, 0xc(r3)
/* 80060150 0005CF50  D0 23 00 08 */	stfs f1, 8(r3)
/* 80060154 0005CF54  4E 80 00 20 */	blr 

/* load_param<Ui,i>__10auto_tweakFRUiiiiP16xModelAssetParamUiPCc */
load_param_esc__0_Ui_esc__4_i_esc__1___10auto_tweakFRUiiiiP16xModelAssetParamUiPCc:
/* 80060158 0005CF58  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8006015C 0005CF5C  7C 08 02 A6 */	mflr r0
/* 80060160 0005CF60  90 01 00 24 */	stw r0, 0x24(r1)
/* 80060164 0005CF64  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80060168 0005CF68  7C DF 33 78 */	mr r31, r6
/* 8006016C 0005CF6C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80060170 0005CF70  7C BE 2B 78 */	mr r30, r5
/* 80060174 0005CF74  7D 25 4B 78 */	mr r5, r9
/* 80060178 0005CF78  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8006017C 0005CF7C  7C 9D 23 78 */	mr r29, r4
/* 80060180 0005CF80  7D 04 43 78 */	mr r4, r8
/* 80060184 0005CF84  93 81 00 10 */	stw r28, 0x10(r1)
/* 80060188 0005CF88  7C 7C 1B 78 */	mr r28, r3
/* 8006018C 0005CF8C  80 C3 00 00 */	lwz r6, 0(r3)
/* 80060190 0005CF90  7C E3 3B 78 */	mr r3, r7
/* 80060194 0005CF94  4B FF 5E 71 */	bl zParamGetInt__FP16xModelAssetParamUiPCci
/* 80060198 0005CF98  7C 03 F0 00 */	cmpw r3, r30
/* 8006019C 0005CF9C  40 80 00 0C */	bge lbl_800601A8
/* 800601A0 0005CFA0  7F C3 F3 78 */	mr r3, r30
/* 800601A4 0005CFA4  48 00 00 10 */	b lbl_800601B4
lbl_800601A8:
/* 800601A8 0005CFA8  7C 03 F8 00 */	cmpw r3, r31
/* 800601AC 0005CFAC  40 81 00 08 */	ble lbl_800601B4
/* 800601B0 0005CFB0  7F E3 FB 78 */	mr r3, r31
lbl_800601B4:
/* 800601B4 0005CFB4  7C 63 E9 D6 */	mullw r3, r3, r29
/* 800601B8 0005CFB8  90 7C 00 00 */	stw r3, 0(r28)
/* 800601BC 0005CFBC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800601C0 0005CFC0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800601C4 0005CFC4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800601C8 0005CFC8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 800601CC 0005CFCC  83 81 00 10 */	lwz r28, 0x10(r1)
/* 800601D0 0005CFD0  7C 08 03 A6 */	mtlr r0
/* 800601D4 0005CFD4  38 21 00 20 */	addi r1, r1, 0x20
/* 800601D8 0005CFD8  4E 80 00 20 */	blr 

/* load_param<5xVec3,i>__10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc */
load_param_esc__0_5xVec3_esc__4_i_esc__1___10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc:
/* 800601DC 0005CFDC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800601E0 0005CFE0  7C 08 02 A6 */	mflr r0
/* 800601E4 0005CFE4  7C 6A 1B 78 */	mr r10, r3
/* 800601E8 0005CFE8  7D 04 43 78 */	mr r4, r8
/* 800601EC 0005CFEC  90 01 00 24 */	stw r0, 0x24(r1)
/* 800601F0 0005CFF0  38 C1 00 08 */	addi r6, r1, 8
/* 800601F4 0005CFF4  80 A3 00 00 */	lwz r5, 0(r3)
/* 800601F8 0005CFF8  80 03 00 04 */	lwz r0, 4(r3)
/* 800601FC 0005CFFC  7C E3 3B 78 */	mr r3, r7
/* 80060200 0005D000  7D 47 53 78 */	mr r7, r10
/* 80060204 0005D004  90 A1 00 08 */	stw r5, 8(r1)
/* 80060208 0005D008  7D 25 4B 78 */	mr r5, r9
/* 8006020C 0005D00C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80060210 0005D010  80 0A 00 08 */	lwz r0, 8(r10)
/* 80060214 0005D014  90 01 00 10 */	stw r0, 0x10(r1)
/* 80060218 0005D018  4B FF 5F F5 */	bl zParamGetVector__FP16xModelAssetParamUiPCc5xVec3P5xVec3
/* 8006021C 0005D01C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80060220 0005D020  7C 08 03 A6 */	mtlr r0
/* 80060224 0005D024  38 21 00 20 */	addi r1, r1, 0x20
/* 80060228 0005D028  4E 80 00 20 */	blr 

/* load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc */
load_param_esc__0_i_esc__4_i_esc__1___10auto_tweakFRiiiiP16xModelAssetParamUiPCc:
/* 8006022C 0005D02C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80060230 0005D030  7C 08 02 A6 */	mflr r0
/* 80060234 0005D034  90 01 00 24 */	stw r0, 0x24(r1)
/* 80060238 0005D038  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8006023C 0005D03C  7C DF 33 78 */	mr r31, r6
/* 80060240 0005D040  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80060244 0005D044  7C BE 2B 78 */	mr r30, r5
/* 80060248 0005D048  7D 25 4B 78 */	mr r5, r9
/* 8006024C 0005D04C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80060250 0005D050  7C 9D 23 78 */	mr r29, r4
/* 80060254 0005D054  7D 04 43 78 */	mr r4, r8
/* 80060258 0005D058  93 81 00 10 */	stw r28, 0x10(r1)
/* 8006025C 0005D05C  7C 7C 1B 78 */	mr r28, r3
/* 80060260 0005D060  80 C3 00 00 */	lwz r6, 0(r3)
/* 80060264 0005D064  7C E3 3B 78 */	mr r3, r7
/* 80060268 0005D068  4B FF 5D 9D */	bl zParamGetInt__FP16xModelAssetParamUiPCci
/* 8006026C 0005D06C  7C 03 F0 00 */	cmpw r3, r30
/* 80060270 0005D070  40 80 00 0C */	bge lbl_8006027C
/* 80060274 0005D074  7F C3 F3 78 */	mr r3, r30
/* 80060278 0005D078  48 00 00 10 */	b lbl_80060288
lbl_8006027C:
/* 8006027C 0005D07C  7C 03 F8 00 */	cmpw r3, r31
/* 80060280 0005D080  40 81 00 08 */	ble lbl_80060288
/* 80060284 0005D084  7F E3 FB 78 */	mr r3, r31
lbl_80060288:
/* 80060288 0005D088  7C 63 E9 D6 */	mullw r3, r3, r29
/* 8006028C 0005D08C  90 7C 00 00 */	stw r3, 0(r28)
/* 80060290 0005D090  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80060294 0005D094  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80060298 0005D098  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8006029C 0005D09C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 800602A0 0005D0A0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 800602A4 0005D0A4  7C 08 03 A6 */	mtlr r0
/* 800602A8 0005D0A8  38 21 00 20 */	addi r1, r1, 0x20
/* 800602AC 0005D0AC  4E 80 00 20 */	blr 

/* load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc */
load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc:
/* 800602B0 0005D0B0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 800602B4 0005D0B4  7C 08 02 A6 */	mflr r0
/* 800602B8 0005D0B8  90 01 00 44 */	stw r0, 0x44(r1)
/* 800602BC 0005D0BC  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 800602C0 0005D0C0  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 800602C4 0005D0C4  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 800602C8 0005D0C8  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 800602CC 0005D0CC  DB A1 00 10 */	stfd f29, 0x10(r1)
/* 800602D0 0005D0D0  F3 A1 00 18 */	psq_st f29, 24(r1), 0, qr0
/* 800602D4 0005D0D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800602D8 0005D0D8  FF A0 08 90 */	fmr f29, f1
/* 800602DC 0005D0DC  C0 23 00 00 */	lfs f1, 0(r3)
/* 800602E0 0005D0E0  FF C0 10 90 */	fmr f30, f2
/* 800602E4 0005D0E4  7C 7F 1B 78 */	mr r31, r3
/* 800602E8 0005D0E8  7C 83 23 78 */	mr r3, r4
/* 800602EC 0005D0EC  7C A4 2B 78 */	mr r4, r5
/* 800602F0 0005D0F0  FF E0 18 90 */	fmr f31, f3
/* 800602F4 0005D0F4  7C C5 33 78 */	mr r5, r6
/* 800602F8 0005D0F8  4B FF 5D 71 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 800602FC 0005D0FC  D0 3F 00 00 */	stfs f1, 0(r31)
/* 80060300 0005D100  C0 1F 00 00 */	lfs f0, 0(r31)
/* 80060304 0005D104  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 80060308 0005D108  40 80 00 0C */	bge lbl_80060314
/* 8006030C 0005D10C  D3 DF 00 00 */	stfs f30, 0(r31)
/* 80060310 0005D110  48 00 00 10 */	b lbl_80060320
lbl_80060314:
/* 80060314 0005D114  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 80060318 0005D118  40 81 00 08 */	ble lbl_80060320
/* 8006031C 0005D11C  D3 FF 00 00 */	stfs f31, 0(r31)
lbl_80060320:
/* 80060320 0005D120  C0 1F 00 00 */	lfs f0, 0(r31)
/* 80060324 0005D124  EC 00 07 72 */	fmuls f0, f0, f29
/* 80060328 0005D128  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8006032C 0005D12C  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 80060330 0005D130  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80060334 0005D134  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 80060338 0005D138  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8006033C 0005D13C  E3 A1 00 18 */	psq_l f29, 24(r1), 0, qr0
/* 80060340 0005D140  CB A1 00 10 */	lfd f29, 0x10(r1)
/* 80060344 0005D144  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80060348 0005D148  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8006034C 0005D14C  7C 08 03 A6 */	mtlr r0
/* 80060350 0005D150  38 21 00 40 */	addi r1, r1, 0x40
/* 80060354 0005D154  4E 80 00 20 */	blr 

/* push_front__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>FRCQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data */
.global push_front__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_FRCQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data
push_front__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_FRCQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data:
/* 80060358 0005D158  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8006035C 0005D15C  7C 08 02 A6 */	mflr r0
/* 80060360 0005D160  90 01 00 14 */	stw r0, 0x14(r1)
/* 80060364 0005D164  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80060368 0005D168  7C 9F 23 78 */	mr r31, r4
/* 8006036C 0005D16C  93 C1 00 08 */	stw r30, 8(r1)
/* 80060370 0005D170  7C 7E 1B 78 */	mr r30, r3
/* 80060374 0005D174  48 00 00 DD */	bl push_front__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fv
/* 80060378 0005D178  7F C3 F3 78 */	mr r3, r30
/* 8006037C 0005D17C  48 00 00 49 */	bl front__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fv
/* 80060380 0005D180  7F E4 FB 78 */	mr r4, r31
/* 80060384 0005D184  48 00 00 1D */	bl __as__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_dataFRCQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data
/* 80060388 0005D188  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8006038C 0005D18C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80060390 0005D190  83 C1 00 08 */	lwz r30, 8(r1)
/* 80060394 0005D194  7C 08 03 A6 */	mtlr r0
/* 80060398 0005D198  38 21 00 10 */	addi r1, r1, 0x10
/* 8006039C 0005D19C  4E 80 00 20 */	blr 

/* __as__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_dataFRCQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data */
__as__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_dataFRCQ313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data:
/* 800603A0 0005D1A0  80 04 00 00 */	lwz r0, 0(r4)
/* 800603A4 0005D1A4  80 A4 00 04 */	lwz r5, 4(r4)
/* 800603A8 0005D1A8  90 03 00 00 */	stw r0, 0(r3)
/* 800603AC 0005D1AC  80 04 00 08 */	lwz r0, 8(r4)
/* 800603B0 0005D1B0  90 A3 00 04 */	stw r5, 4(r3)
/* 800603B4 0005D1B4  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 800603B8 0005D1B8  90 03 00 08 */	stw r0, 8(r3)
/* 800603BC 0005D1BC  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 800603C0 0005D1C0  4E 80 00 20 */	blr 

/* front__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>Fv */
.global front__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fv
front__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fv:
/* 800603C4 0005D1C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800603C8 0005D1C8  7C 08 02 A6 */	mflr r0
/* 800603CC 0005D1CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800603D0 0005D1D0  48 00 00 3D */	bl begin__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFv
/* 800603D4 0005D1D4  90 61 00 08 */	stw r3, 8(r1)
/* 800603D8 0005D1D8  38 61 00 08 */	addi r3, r1, 8
/* 800603DC 0005D1DC  90 81 00 0C */	stw r4, 0xc(r1)
/* 800603E0 0005D1E0  48 00 00 15 */	bl __ml__Q286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iteratorCFv
/* 800603E4 0005D1E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800603E8 0005D1E8  7C 08 03 A6 */	mtlr r0
/* 800603EC 0005D1EC  38 21 00 10 */	addi r1, r1, 0x10
/* 800603F0 0005D1F0  4E 80 00 20 */	blr 

/* __ml__Q286fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>8iteratorCFv */
.global __ml__Q286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iteratorCFv
__ml__Q286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iteratorCFv:
/* 800603F4 0005D1F4  80 03 00 00 */	lwz r0, 0(r3)
/* 800603F8 0005D1F8  80 83 00 04 */	lwz r4, 4(r3)
/* 800603FC 0005D1FC  54 03 20 36 */	slwi r3, r0, 4
/* 80060400 0005D200  38 63 00 08 */	addi r3, r3, 8
/* 80060404 0005D204  7C 64 1A 14 */	add r3, r4, r3
/* 80060408 0005D208  4E 80 00 20 */	blr 

/* begin__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFv */
.global begin__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFv
begin__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFv:
/* 8006040C 0005D20C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80060410 0005D210  7C 08 02 A6 */	mflr r0
/* 80060414 0005D214  80 83 00 00 */	lwz r4, 0(r3)
/* 80060418 0005D218  90 01 00 14 */	stw r0, 0x14(r1)
/* 8006041C 0005D21C  48 00 00 15 */	bl create_iterator__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFUl
/* 80060420 0005D220  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80060424 0005D224  7C 08 03 A6 */	mtlr r0
/* 80060428 0005D228  38 21 00 10 */	addi r1, r1, 0x10
/* 8006042C 0005D22C  4E 80 00 20 */	blr 

/* create_iterator__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFUl */
.global create_iterator__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFUl
create_iterator__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFUl:
/* 80060430 0005D230  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80060434 0005D234  7C 60 1B 78 */	mr r0, r3
/* 80060438 0005D238  7C 83 23 78 */	mr r3, r4
/* 8006043C 0005D23C  90 81 00 08 */	stw r4, 8(r1)
/* 80060440 0005D240  7C 04 03 78 */	mr r4, r0
/* 80060444 0005D244  90 01 00 0C */	stw r0, 0xc(r1)
/* 80060448 0005D248  38 21 00 10 */	addi r1, r1, 0x10
/* 8006044C 0005D24C  4E 80 00 20 */	blr 

/* push_front__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>Fv */
.global push_front__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fv
push_front__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fv:
/* 80060450 0005D250  80 83 00 00 */	lwz r4, 0(r3)
/* 80060454 0005D254  38 04 00 7F */	addi r0, r4, 0x7f
/* 80060458 0005D258  54 00 06 7E */	clrlwi r0, r0, 0x19
/* 8006045C 0005D25C  90 03 00 00 */	stw r0, 0(r3)
/* 80060460 0005D260  4E 80 00 20 */	blr 

/* reset__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>Fv */
.global reset__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fv
reset__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fv:
/* 80060464 0005D264  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80060468 0005D268  7C 08 02 A6 */	mflr r0
/* 8006046C 0005D26C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80060470 0005D270  48 00 00 15 */	bl clear__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fv
/* 80060474 0005D274  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80060478 0005D278  7C 08 03 A6 */	mtlr r0
/* 8006047C 0005D27C  38 21 00 10 */	addi r1, r1, 0x10
/* 80060480 0005D280  4E 80 00 20 */	blr 

/* clear__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>Fv */
.global clear__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fv
clear__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fv:
/* 80060484 0005D284  38 00 00 00 */	li r0, 0
/* 80060488 0005D288  90 03 00 04 */	stw r0, 4(r3)
/* 8006048C 0005D28C  90 03 00 00 */	stw r0, 0(r3)
/* 80060490 0005D290  4E 80 00 20 */	blr 

/* pop_back__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>Fv */
.global pop_back__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fv
pop_back__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fv:
/* 80060494 0005D294  80 83 00 04 */	lwz r4, 4(r3)
/* 80060498 0005D298  38 04 00 7F */	addi r0, r4, 0x7f
/* 8006049C 0005D29C  54 00 06 7E */	clrlwi r0, r0, 0x19
/* 800604A0 0005D2A0  90 03 00 04 */	stw r0, 4(r3)
/* 800604A4 0005D2A4  4E 80 00 20 */	blr 

/* full__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFv */
.global full__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFv
full__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFv:
/* 800604A8 0005D2A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800604AC 0005D2AC  7C 08 02 A6 */	mflr r0
/* 800604B0 0005D2B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800604B4 0005D2B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800604B8 0005D2B8  93 C1 00 08 */	stw r30, 8(r1)
/* 800604BC 0005D2BC  7C 7E 1B 78 */	mr r30, r3
/* 800604C0 0005D2C0  48 00 00 35 */	bl max_size__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFv
/* 800604C4 0005D2C4  7C 7F 1B 78 */	mr r31, r3
/* 800604C8 0005D2C8  7F C3 F3 78 */	mr r3, r30
/* 800604CC 0005D2CC  48 00 00 31 */	bl size__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFv
/* 800604D0 0005D2D0  7C 03 F8 50 */	subf r0, r3, r31
/* 800604D4 0005D2D4  7C 00 00 34 */	cntlzw r0, r0
/* 800604D8 0005D2D8  54 03 D9 7E */	srwi r3, r0, 5
/* 800604DC 0005D2DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800604E0 0005D2E0  83 C1 00 08 */	lwz r30, 8(r1)
/* 800604E4 0005D2E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800604E8 0005D2E8  7C 08 03 A6 */	mtlr r0
/* 800604EC 0005D2EC  38 21 00 10 */	addi r1, r1, 0x10
/* 800604F0 0005D2F0  4E 80 00 20 */	blr 

/* max_size__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFv */
.global max_size__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFv
max_size__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFv:
/* 800604F4 0005D2F4  38 60 00 7F */	li r3, 0x7f
/* 800604F8 0005D2F8  4E 80 00 20 */	blr 

/* size__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFv */
.global size__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFv
size__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFv:
/* 800604FC 0005D2FC  80 83 00 04 */	lwz r4, 4(r3)
/* 80060500 0005D300  80 63 00 00 */	lwz r3, 0(r3)
/* 80060504 0005D304  38 04 00 80 */	addi r0, r4, 0x80
/* 80060508 0005D308  7C 03 00 50 */	subf r0, r3, r0
/* 8006050C 0005D30C  54 03 06 7E */	clrlwi r3, r0, 0x19
/* 80060510 0005D310  4E 80 00 20 */	blr 

/* __vc__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>Fi */
.global __vc__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fi
__vc__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_Fi:
/* 80060514 0005D314  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80060518 0005D318  7C 08 02 A6 */	mflr r0
/* 8006051C 0005D31C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80060520 0005D320  48 00 00 15 */	bl get_at__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFi
/* 80060524 0005D324  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80060528 0005D328  7C 08 03 A6 */	mtlr r0
/* 8006052C 0005D32C  38 21 00 10 */	addi r1, r1, 0x10
/* 80060530 0005D330  4E 80 00 20 */	blr 

/* get_at__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFi */
.global get_at__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFi
get_at__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFi:
/* 80060534 0005D334  80 03 00 00 */	lwz r0, 0(r3)
/* 80060538 0005D338  7C 65 1B 78 */	mr r5, r3
/* 8006053C 0005D33C  7C 60 22 14 */	add r3, r0, r4
/* 80060540 0005D340  38 03 00 80 */	addi r0, r3, 0x80
/* 80060544 0005D344  54 03 25 76 */	rlwinm r3, r0, 4, 0x15, 0x1b
/* 80060548 0005D348  38 63 00 08 */	addi r3, r3, 8
/* 8006054C 0005D34C  7C 65 1A 14 */	add r3, r5, r3
/* 80060550 0005D350  4E 80 00 20 */	blr 

/* __ne__Q286fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>8iteratorCFRCQ286fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>8iterator */
.global __ne__Q286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iteratorCFRCQ286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iterator
__ne__Q286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iteratorCFRCQ286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iterator:
/* 80060554 0005D354  80 A3 00 00 */	lwz r5, 0(r3)
/* 80060558 0005D358  80 04 00 00 */	lwz r0, 0(r4)
/* 8006055C 0005D35C  7C 65 00 50 */	subf r3, r5, r0
/* 80060560 0005D360  7C 00 28 50 */	subf r0, r0, r5
/* 80060564 0005D364  7C 60 03 78 */	or r0, r3, r0
/* 80060568 0005D368  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8006056C 0005D36C  4E 80 00 20 */	blr 

/* __pp__Q286fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>8iteratorFv */
.global __pp__Q286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iteratorFv
__pp__Q286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iteratorFv:
/* 80060570 0005D370  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80060574 0005D374  7C 08 02 A6 */	mflr r0
/* 80060578 0005D378  38 80 00 01 */	li r4, 1
/* 8006057C 0005D37C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80060580 0005D380  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80060584 0005D384  7C 7F 1B 78 */	mr r31, r3
/* 80060588 0005D388  48 00 00 1D */	bl __apl__Q286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iteratorFi
/* 8006058C 0005D38C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80060590 0005D390  7F E3 FB 78 */	mr r3, r31
/* 80060594 0005D394  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80060598 0005D398  7C 08 03 A6 */	mtlr r0
/* 8006059C 0005D39C  38 21 00 10 */	addi r1, r1, 0x10
/* 800605A0 0005D3A0  4E 80 00 20 */	blr 

/* __apl__Q286fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>8iteratorFi */
.global __apl__Q286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iteratorFi
__apl__Q286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iteratorFi:
/* 800605A4 0005D3A4  80 03 00 00 */	lwz r0, 0(r3)
/* 800605A8 0005D3A8  7C 80 22 14 */	add r4, r0, r4
/* 800605AC 0005D3AC  38 04 00 80 */	addi r0, r4, 0x80
/* 800605B0 0005D3B0  54 00 06 7E */	clrlwi r0, r0, 0x19
/* 800605B4 0005D3B4  90 03 00 00 */	stw r0, 0(r3)
/* 800605B8 0005D3B8  4E 80 00 20 */	blr 

/* __rf__Q286fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>8iteratorCFv */
.global __rf__Q286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iteratorCFv
__rf__Q286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iteratorCFv:
/* 800605BC 0005D3BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800605C0 0005D3C0  7C 08 02 A6 */	mflr r0
/* 800605C4 0005D3C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800605C8 0005D3C8  4B FF FE 2D */	bl __ml__Q286fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_8iteratorCFv
/* 800605CC 0005D3CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800605D0 0005D3D0  7C 08 03 A6 */	mtlr r0
/* 800605D4 0005D3D4  38 21 00 10 */	addi r1, r1, 0x10
/* 800605D8 0005D3D8  4E 80 00 20 */	blr 

/* end__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFv */
.global end__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFv
end__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFv:
/* 800605DC 0005D3DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800605E0 0005D3E0  7C 08 02 A6 */	mflr r0
/* 800605E4 0005D3E4  80 83 00 04 */	lwz r4, 4(r3)
/* 800605E8 0005D3E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 800605EC 0005D3EC  4B FF FE 45 */	bl create_iterator__86fixed_queue_esc__0_Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18missle_record_data_esc__4_127_esc__1_CFUl
/* 800605F0 0005D3F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800605F4 0005D3F4  7C 08 03 A6 */	mtlr r0
/* 800605F8 0005D3F8  38 21 00 10 */	addi r1, r1, 0x10
/* 800605FC 0005D3FC  4E 80 00 20 */	blr 

.global MarkForRecycle__9NPCHazardFv
MarkForRecycle__9NPCHazardFv:
/* 80060600 0005D400  80 03 00 04 */	lwz r0, 4(r3)
/* 80060604 0005D404  60 00 00 04 */	ori r0, r0, 4
/* 80060608 0005D408  90 03 00 04 */	stw r0, 4(r3)
/* 8006060C 0005D40C  4E 80 00 20 */	blr 

.global xQuickCullForSphere__FP7xQCDataPC7xSphere
xQuickCullForSphere__FP7xQCDataPC7xSphere:
/* 80060610 0005D410  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80060614 0005D414  7C 08 02 A6 */	mflr r0
/* 80060618 0005D418  3C A0 80 3C */	lis r5, xqc_def_ctrl@ha
/* 8006061C 0005D41C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80060620 0005D420  7C 60 1B 78 */	mr r0, r3
/* 80060624 0005D424  38 65 C0 B0 */	addi r3, r5, xqc_def_ctrl@l
/* 80060628 0005D428  7C 85 23 78 */	mr r5, r4
/* 8006062C 0005D42C  7C 04 03 78 */	mr r4, r0
/* 80060630 0005D430  4B FD C4 69 */	bl xQuickCullForSphere__FP10xQCControlP7xQCDataPC7xSphere
/* 80060634 0005D434  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80060638 0005D438  7C 08 03 A6 */	mtlr r0
/* 8006063C 0005D43C  38 21 00 10 */	addi r1, r1, 0x10
/* 80060640 0005D440  4E 80 00 20 */	blr 

/* xGridCheckBound<Q413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode13cb_damage_ent>__FR5xGridRC6xBoundRC7xQCDataQ413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode13cb_damage_ent */
.global xGridCheckBound_esc__0_Q413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explode13cb_damage_ent_esc__1___FR5xGridRC6xBoundRC7xQCDataQ413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explode13cb_damage_ent
xGridCheckBound_esc__0_Q413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explode13cb_damage_ent_esc__1___FR5xGridRC6xBoundRC7xQCDataQ413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explode13cb_damage_ent:
/* 80060644 0005D444  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80060648 0005D448  7C 08 02 A6 */	mflr r0
/* 8006064C 0005D44C  90 01 00 64 */	stw r0, 0x64(r1)
/* 80060650 0005D450  BF 21 00 44 */	stmw r25, 0x44(r1)
/* 80060654 0005D454  7C 7D 1B 78 */	mr r29, r3
/* 80060658 0005D458  7C BE 2B 78 */	mr r30, r5
/* 8006065C 0005D45C  7C DF 33 78 */	mr r31, r6
/* 80060660 0005D460  38 61 00 24 */	addi r3, r1, 0x24
/* 80060664 0005D464  4B FA 9F 6D */	bl xBoundGetBox__FR4xBoxRC6xBound
/* 80060668 0005D468  C0 42 89 D8 */	lfs f2, zEntCruiseBubble_f_0_25-_SDA2_BASE_(r2)
/* 8006066C 0005D46C  7F A3 EB 78 */	mr r3, r29
/* 80060670 0005D470  C0 1D 00 1C */	lfs f0, 0x1c(r29)
/* 80060674 0005D474  C0 3D 00 18 */	lfs f1, 0x18(r29)
/* 80060678 0005D478  EC A2 00 32 */	fmuls f5, f2, f0
/* 8006067C 0005D47C  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 80060680 0005D480  EC 82 00 72 */	fmuls f4, f2, f1
/* 80060684 0005D484  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 80060688 0005D488  C0 61 00 24 */	lfs f3, 0x24(r1)
/* 8006068C 0005D48C  EC 40 28 28 */	fsubs f2, f0, f5
/* 80060690 0005D490  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 80060694 0005D494  EC 21 20 28 */	fsubs f1, f1, f4
/* 80060698 0005D498  EC 63 20 2A */	fadds f3, f3, f4
/* 8006069C 0005D49C  EC 00 28 2A */	fadds f0, f0, f5
/* 800606A0 0005D4A0  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 800606A4 0005D4A4  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 800606A8 0005D4A8  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 800606AC 0005D4AC  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 800606B0 0005D4B0  4B FE 0F 65 */	bl get_grid_index__FRC5xGridff
/* 800606B4 0005D4B4  90 61 00 0C */	stw r3, 0xc(r1)
/* 800606B8 0005D4B8  38 61 00 10 */	addi r3, r1, 0x10
/* 800606BC 0005D4BC  38 81 00 0C */	addi r4, r1, 0xc
/* 800606C0 0005D4C0  4B FE 0D 69 */	bl __as__10grid_indexFRC10grid_index
/* 800606C4 0005D4C4  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 800606C8 0005D4C8  7F A3 EB 78 */	mr r3, r29
/* 800606CC 0005D4CC  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 800606D0 0005D4D0  4B FE 0F 45 */	bl get_grid_index__FRC5xGridff
/* 800606D4 0005D4D4  90 61 00 08 */	stw r3, 8(r1)
/* 800606D8 0005D4D8  38 61 00 14 */	addi r3, r1, 0x14
/* 800606DC 0005D4DC  38 81 00 08 */	addi r4, r1, 8
/* 800606E0 0005D4E0  4B FE 0D 49 */	bl __as__10grid_indexFRC10grid_index
/* 800606E4 0005D4E4  38 7D 00 30 */	addi r3, r29, 0x30
/* 800606E8 0005D4E8  38 81 00 18 */	addi r4, r1, 0x18
/* 800606EC 0005D4EC  4B FB B2 A9 */	bl xGridIterFirstCell__FPP10xGridBoundR13xGridIterator
/* 800606F0 0005D4F0  7C 7C 1B 78 */	mr r28, r3
/* 800606F4 0005D4F4  48 00 00 48 */	b lbl_8006073C
lbl_800606F8:
/* 800606F8 0005D4F8  7F C3 F3 78 */	mr r3, r30
/* 800606FC 0005D4FC  38 9C 00 14 */	addi r4, r28, 0x14
/* 80060700 0005D500  4B FD BE C1 */	bl xQuickCullIsects__FPC7xQCDataPC7xQCData
/* 80060704 0005D504  2C 03 00 00 */	cmpwi r3, 0
/* 80060708 0005D508  41 82 00 28 */	beq lbl_80060730
/* 8006070C 0005D50C  80 9C 00 00 */	lwz r4, 0(r28)
/* 80060710 0005D510  7F E3 FB 78 */	mr r3, r31
/* 80060714 0005D514  7F 85 E3 78 */	mr r5, r28
/* 80060718 0005D518  4B FF F5 4D */	bl __cl__Q413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explode13cb_damage_entFR4xEntR10xGridBound
/* 8006071C 0005D51C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80060720 0005D520  40 82 00 10 */	bne lbl_80060730
/* 80060724 0005D524  38 61 00 18 */	addi r3, r1, 0x18
/* 80060728 0005D528  4B FB B3 89 */	bl xGridIterClose__FR13xGridIterator
/* 8006072C 0005D52C  48 00 00 BC */	b lbl_800607E8
lbl_80060730:
/* 80060730 0005D530  38 61 00 18 */	addi r3, r1, 0x18
/* 80060734 0005D534  4B FB B3 0D */	bl xGridIterNextCell__FR13xGridIterator
/* 80060738 0005D538  7C 7C 1B 78 */	mr r28, r3
lbl_8006073C:
/* 8006073C 0005D53C  28 1C 00 00 */	cmplwi r28, 0
/* 80060740 0005D540  40 82 FF B8 */	bne lbl_800606F8
/* 80060744 0005D544  A3 61 00 10 */	lhz r27, 0x10(r1)
/* 80060748 0005D548  48 00 00 90 */	b lbl_800607D8
lbl_8006074C:
/* 8006074C 0005D54C  A3 41 00 12 */	lhz r26, 0x12(r1)
/* 80060750 0005D550  57 7C 04 3E */	clrlwi r28, r27, 0x10
/* 80060754 0005D554  48 00 00 70 */	b lbl_800607C4
lbl_80060758:
/* 80060758 0005D558  7F A3 EB 78 */	mr r3, r29
/* 8006075C 0005D55C  7F 84 E3 78 */	mr r4, r28
/* 80060760 0005D560  57 45 04 3E */	clrlwi r5, r26, 0x10
/* 80060764 0005D564  38 C1 00 18 */	addi r6, r1, 0x18
/* 80060768 0005D568  4B FB B2 65 */	bl xGridIterFirstCell__FP5xGridiiR13xGridIterator
/* 8006076C 0005D56C  7C 79 1B 78 */	mr r25, r3
/* 80060770 0005D570  48 00 00 48 */	b lbl_800607B8
lbl_80060774:
/* 80060774 0005D574  7F C3 F3 78 */	mr r3, r30
/* 80060778 0005D578  38 99 00 14 */	addi r4, r25, 0x14
/* 8006077C 0005D57C  4B FD BE 45 */	bl xQuickCullIsects__FPC7xQCDataPC7xQCData
/* 80060780 0005D580  2C 03 00 00 */	cmpwi r3, 0
/* 80060784 0005D584  41 82 00 28 */	beq lbl_800607AC
/* 80060788 0005D588  80 99 00 00 */	lwz r4, 0(r25)
/* 8006078C 0005D58C  7F E3 FB 78 */	mr r3, r31
/* 80060790 0005D590  7F 25 CB 78 */	mr r5, r25
/* 80060794 0005D594  4B FF F4 D1 */	bl __cl__Q413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explode13cb_damage_entFR4xEntR10xGridBound
/* 80060798 0005D598  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8006079C 0005D59C  40 82 00 10 */	bne lbl_800607AC
/* 800607A0 0005D5A0  38 61 00 18 */	addi r3, r1, 0x18
/* 800607A4 0005D5A4  4B FB B3 0D */	bl xGridIterClose__FR13xGridIterator
/* 800607A8 0005D5A8  48 00 00 40 */	b lbl_800607E8
lbl_800607AC:
/* 800607AC 0005D5AC  38 61 00 18 */	addi r3, r1, 0x18
/* 800607B0 0005D5B0  4B FB B2 91 */	bl xGridIterNextCell__FR13xGridIterator
/* 800607B4 0005D5B4  7C 79 1B 78 */	mr r25, r3
lbl_800607B8:
/* 800607B8 0005D5B8  28 19 00 00 */	cmplwi r25, 0
/* 800607BC 0005D5BC  40 82 FF B8 */	bne lbl_80060774
/* 800607C0 0005D5C0  3B 5A 00 01 */	addi r26, r26, 1
lbl_800607C4:
/* 800607C4 0005D5C4  A0 01 00 16 */	lhz r0, 0x16(r1)
/* 800607C8 0005D5C8  57 43 04 3E */	clrlwi r3, r26, 0x10
/* 800607CC 0005D5CC  7C 03 00 40 */	cmplw r3, r0
/* 800607D0 0005D5D0  40 81 FF 88 */	ble lbl_80060758
/* 800607D4 0005D5D4  3B 7B 00 01 */	addi r27, r27, 1
lbl_800607D8:
/* 800607D8 0005D5D8  A0 01 00 14 */	lhz r0, 0x14(r1)
/* 800607DC 0005D5DC  57 63 04 3E */	clrlwi r3, r27, 0x10
/* 800607E0 0005D5E0  7C 03 00 40 */	cmplw r3, r0
/* 800607E4 0005D5E4  40 81 FF 68 */	ble lbl_8006074C
lbl_800607E8:
/* 800607E8 0005D5E8  BB 21 00 44 */	lmw r25, 0x44(r1)
/* 800607EC 0005D5EC  80 01 00 64 */	lwz r0, 0x64(r1)
/* 800607F0 0005D5F0  7C 08 03 A6 */	mtlr r0
/* 800607F4 0005D5F4  38 21 00 60 */	addi r1, r1, 0x60
/* 800607F8 0005D5F8  4E 80 00 20 */	blr 

/* xGridCheckBound<Q413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attach15cb_lock_targets>__FR5xGridRC6xBoundRC7xQCDataQ413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attach15cb_lock_targets */
.global xGridCheckBound_esc__0_Q413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attach15cb_lock_targets_esc__1___FR5xGridRC6xBoundRC7xQCDataQ413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attach15cb_lock_targets
xGridCheckBound_esc__0_Q413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attach15cb_lock_targets_esc__1___FR5xGridRC6xBoundRC7xQCDataQ413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attach15cb_lock_targets:
/* 800607FC 0005D5FC  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80060800 0005D600  7C 08 02 A6 */	mflr r0
/* 80060804 0005D604  90 01 00 64 */	stw r0, 0x64(r1)
/* 80060808 0005D608  BF 21 00 44 */	stmw r25, 0x44(r1)
/* 8006080C 0005D60C  7C 7D 1B 78 */	mr r29, r3
/* 80060810 0005D610  7C BE 2B 78 */	mr r30, r5
/* 80060814 0005D614  7C DF 33 78 */	mr r31, r6
/* 80060818 0005D618  38 61 00 24 */	addi r3, r1, 0x24
/* 8006081C 0005D61C  4B FA 9D B5 */	bl xBoundGetBox__FR4xBoxRC6xBound
/* 80060820 0005D620  C0 42 89 D8 */	lfs f2, zEntCruiseBubble_f_0_25-_SDA2_BASE_(r2)
/* 80060824 0005D624  7F A3 EB 78 */	mr r3, r29
/* 80060828 0005D628  C0 1D 00 1C */	lfs f0, 0x1c(r29)
/* 8006082C 0005D62C  C0 3D 00 18 */	lfs f1, 0x18(r29)
/* 80060830 0005D630  EC A2 00 32 */	fmuls f5, f2, f0
/* 80060834 0005D634  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 80060838 0005D638  EC 82 00 72 */	fmuls f4, f2, f1
/* 8006083C 0005D63C  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 80060840 0005D640  C0 61 00 24 */	lfs f3, 0x24(r1)
/* 80060844 0005D644  EC 40 28 28 */	fsubs f2, f0, f5
/* 80060848 0005D648  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 8006084C 0005D64C  EC 21 20 28 */	fsubs f1, f1, f4
/* 80060850 0005D650  EC 63 20 2A */	fadds f3, f3, f4
/* 80060854 0005D654  EC 00 28 2A */	fadds f0, f0, f5
/* 80060858 0005D658  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 8006085C 0005D65C  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 80060860 0005D660  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 80060864 0005D664  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80060868 0005D668  4B FE 0D AD */	bl get_grid_index__FRC5xGridff
/* 8006086C 0005D66C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80060870 0005D670  38 61 00 10 */	addi r3, r1, 0x10
/* 80060874 0005D674  38 81 00 0C */	addi r4, r1, 0xc
/* 80060878 0005D678  4B FE 0B B1 */	bl __as__10grid_indexFRC10grid_index
/* 8006087C 0005D67C  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80060880 0005D680  7F A3 EB 78 */	mr r3, r29
/* 80060884 0005D684  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 80060888 0005D688  4B FE 0D 8D */	bl get_grid_index__FRC5xGridff
/* 8006088C 0005D68C  90 61 00 08 */	stw r3, 8(r1)
/* 80060890 0005D690  38 61 00 14 */	addi r3, r1, 0x14
/* 80060894 0005D694  38 81 00 08 */	addi r4, r1, 8
/* 80060898 0005D698  4B FE 0B 91 */	bl __as__10grid_indexFRC10grid_index
/* 8006089C 0005D69C  38 7D 00 30 */	addi r3, r29, 0x30
/* 800608A0 0005D6A0  38 81 00 18 */	addi r4, r1, 0x18
/* 800608A4 0005D6A4  4B FB B0 F1 */	bl xGridIterFirstCell__FPP10xGridBoundR13xGridIterator
/* 800608A8 0005D6A8  7C 7C 1B 78 */	mr r28, r3
/* 800608AC 0005D6AC  48 00 00 48 */	b lbl_800608F4
lbl_800608B0:
/* 800608B0 0005D6B0  7F C3 F3 78 */	mr r3, r30
/* 800608B4 0005D6B4  38 9C 00 14 */	addi r4, r28, 0x14
/* 800608B8 0005D6B8  4B FD BD 09 */	bl xQuickCullIsects__FPC7xQCDataPC7xQCData
/* 800608BC 0005D6BC  2C 03 00 00 */	cmpwi r3, 0
/* 800608C0 0005D6C0  41 82 00 28 */	beq lbl_800608E8
/* 800608C4 0005D6C4  80 9C 00 00 */	lwz r4, 0(r28)
/* 800608C8 0005D6C8  7F E3 FB 78 */	mr r3, r31
/* 800608CC 0005D6CC  7F 85 E3 78 */	mr r5, r28
/* 800608D0 0005D6D0  4B FF F4 E9 */	bl __cl__Q413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attach15cb_lock_targetsFR4xEntR10xGridBound
/* 800608D4 0005D6D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800608D8 0005D6D8  40 82 00 10 */	bne lbl_800608E8
/* 800608DC 0005D6DC  38 61 00 18 */	addi r3, r1, 0x18
/* 800608E0 0005D6E0  4B FB B1 D1 */	bl xGridIterClose__FR13xGridIterator
/* 800608E4 0005D6E4  48 00 00 BC */	b lbl_800609A0
lbl_800608E8:
/* 800608E8 0005D6E8  38 61 00 18 */	addi r3, r1, 0x18
/* 800608EC 0005D6EC  4B FB B1 55 */	bl xGridIterNextCell__FR13xGridIterator
/* 800608F0 0005D6F0  7C 7C 1B 78 */	mr r28, r3
lbl_800608F4:
/* 800608F4 0005D6F4  28 1C 00 00 */	cmplwi r28, 0
/* 800608F8 0005D6F8  40 82 FF B8 */	bne lbl_800608B0
/* 800608FC 0005D6FC  A3 61 00 10 */	lhz r27, 0x10(r1)
/* 80060900 0005D700  48 00 00 90 */	b lbl_80060990
lbl_80060904:
/* 80060904 0005D704  A3 41 00 12 */	lhz r26, 0x12(r1)
/* 80060908 0005D708  57 7C 04 3E */	clrlwi r28, r27, 0x10
/* 8006090C 0005D70C  48 00 00 70 */	b lbl_8006097C
lbl_80060910:
/* 80060910 0005D710  7F A3 EB 78 */	mr r3, r29
/* 80060914 0005D714  7F 84 E3 78 */	mr r4, r28
/* 80060918 0005D718  57 45 04 3E */	clrlwi r5, r26, 0x10
/* 8006091C 0005D71C  38 C1 00 18 */	addi r6, r1, 0x18
/* 80060920 0005D720  4B FB B0 AD */	bl xGridIterFirstCell__FP5xGridiiR13xGridIterator
/* 80060924 0005D724  7C 79 1B 78 */	mr r25, r3
/* 80060928 0005D728  48 00 00 48 */	b lbl_80060970
lbl_8006092C:
/* 8006092C 0005D72C  7F C3 F3 78 */	mr r3, r30
/* 80060930 0005D730  38 99 00 14 */	addi r4, r25, 0x14
/* 80060934 0005D734  4B FD BC 8D */	bl xQuickCullIsects__FPC7xQCDataPC7xQCData
/* 80060938 0005D738  2C 03 00 00 */	cmpwi r3, 0
/* 8006093C 0005D73C  41 82 00 28 */	beq lbl_80060964
/* 80060940 0005D740  80 99 00 00 */	lwz r4, 0(r25)
/* 80060944 0005D744  7F E3 FB 78 */	mr r3, r31
/* 80060948 0005D748  7F 25 CB 78 */	mr r5, r25
/* 8006094C 0005D74C  4B FF F4 6D */	bl __cl__Q413cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attach15cb_lock_targetsFR4xEntR10xGridBound
/* 80060950 0005D750  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80060954 0005D754  40 82 00 10 */	bne lbl_80060964
/* 80060958 0005D758  38 61 00 18 */	addi r3, r1, 0x18
/* 8006095C 0005D75C  4B FB B1 55 */	bl xGridIterClose__FR13xGridIterator
/* 80060960 0005D760  48 00 00 40 */	b lbl_800609A0
lbl_80060964:
/* 80060964 0005D764  38 61 00 18 */	addi r3, r1, 0x18
/* 80060968 0005D768  4B FB B0 D9 */	bl xGridIterNextCell__FR13xGridIterator
/* 8006096C 0005D76C  7C 79 1B 78 */	mr r25, r3
lbl_80060970:
/* 80060970 0005D770  28 19 00 00 */	cmplwi r25, 0
/* 80060974 0005D774  40 82 FF B8 */	bne lbl_8006092C
/* 80060978 0005D778  3B 5A 00 01 */	addi r26, r26, 1
lbl_8006097C:
/* 8006097C 0005D77C  A0 01 00 16 */	lhz r0, 0x16(r1)
/* 80060980 0005D780  57 43 04 3E */	clrlwi r3, r26, 0x10
/* 80060984 0005D784  7C 03 00 40 */	cmplw r3, r0
/* 80060988 0005D788  40 81 FF 88 */	ble lbl_80060910
/* 8006098C 0005D78C  3B 7B 00 01 */	addi r27, r27, 1
lbl_80060990:
/* 80060990 0005D790  A0 01 00 14 */	lhz r0, 0x14(r1)
/* 80060994 0005D794  57 63 04 3E */	clrlwi r3, r27, 0x10
/* 80060998 0005D798  7C 03 00 40 */	cmplw r3, r0
/* 8006099C 0005D79C  40 81 FF 68 */	ble lbl_80060904
lbl_800609A0:
/* 800609A0 0005D7A0  BB 21 00 44 */	lmw r25, 0x44(r1)
/* 800609A4 0005D7A4  80 01 00 64 */	lwz r0, 0x64(r1)
/* 800609A8 0005D7A8  7C 08 03 A6 */	mtlr r0
/* 800609AC 0005D7AC  38 21 00 60 */	addi r1, r1, 0x60
/* 800609B0 0005D7B0  4E 80 00 20 */	blr 

.endif

.section .rodata
lbl_802550B8:
	.incbin "baserom.dol", 0x252098, 0xC
lbl_802550C4:
	.incbin "baserom.dol", 0x2520A4, 0x13C
lbl_80255200:
	.incbin "baserom.dol", 0x2521E0, 0x3C
.global wake_ribbon_curve__13cruise_bubble
wake_ribbon_curve__13cruise_bubble:
	.incbin "baserom.dol", 0x25221C, 0x18
.global cheat_wake_ribbon_curve__13cruise_bubble
cheat_wake_ribbon_curve__13cruise_bubble:
	.incbin "baserom.dol", 0x252234, 0x18
lbl_8025526C:
	.incbin "baserom.dol", 0x25224C, 0x24
lbl_80255290:
	.incbin "baserom.dol", 0x252270, 0x30
lbl_802552C0:
	.incbin "baserom.dol", 0x2522A0, 0xC
lbl_802552CC:
	.incbin "baserom.dol", 0x2522AC, 0x64
lbl_80255330:
	.incbin "baserom.dol", 0x252310, 0xC
.global stringBase0__13cruise_bubble
stringBase0__13cruise_bubble:
	.incbin "baserom.dol", 0x25231C, 0xA4C

.section .data
.global base__13cruise_bubble
base__13cruise_bubble:
	.incbin "baserom.dol", 0x2891E0, 0x10
.global start_anim_states__13cruise_bubble
start_anim_states__13cruise_bubble:
	.incbin "baserom.dol", 0x2891F0, 0x94
.global shared__13cruise_bubble
shared__13cruise_bubble:
	.incbin "baserom.dol", 0x289284, 0x18C
.global sounds__13cruise_bubble
sounds__13cruise_bubble:
	.incbin "baserom.dol", 0x289410, 0xA0
/* SPECULATION: link order */
.global __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_halt
__vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_halt:
	.incbin "baserom.dol", 0x2894B0, 0x1C
/* SPECULATION: link order */
.global __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_player_aim
__vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_player_aim:
	.incbin "baserom.dol", 0x2894CC, 0x1C
/* SPECULATION: link order */
.global __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_fire
__vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_fire:
	.incbin "baserom.dol", 0x2894E8, 0x1C
/* SPECULATION: link order */
.global __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_wait
__vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_17state_player_wait:
	.incbin "baserom.dol", 0x289504, 0x1C
/* SPECULATION: link order */
.global __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_missle_appear
__vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_missle_appear:
	.incbin "baserom.dol", 0x289520, 0x1C
/* SPECULATION: link order */
.global __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_fly
__vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_missle_fly:
	.incbin "baserom.dol", 0x28953C, 0x1C
/* SPECULATION: link order */
.global __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explode
__vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_missle_explode:
	.incbin "baserom.dol", 0x289558, 0x1C
/* SPECULATION: link order */
.global __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aim
__vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_16state_camera_aim:
	.incbin "baserom.dol", 0x289574, 0x1C
/* SPECULATION: link order */
.global __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18state_camera_seize
__vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_18state_camera_seize:
	.incbin "baserom.dol", 0x289590, 0x1C
/* SPECULATION: link order */
.global __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attach
__vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_attach:
	.incbin "baserom.dol", 0x2895AC, 0x1C
/* SPECULATION: link order */
.global __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_survey
__vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_19state_camera_survey:
	.incbin "baserom.dol", 0x2895C8, 0x1C
/* SPECULATION: link order */
.global __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_type
__vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_10state_type:
	.incbin "baserom.dol", 0x2895E4, 0x1C
/* SPECULATION: link order */
.global __vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_camera_restore
__vt__Q313cruise_bubble30_esc__2_unnamed_esc__2_zEntCruiseBubble_cpp_esc__2_20state_camera_restore:
	.incbin "baserom.dol", 0x289600, 0x20

.section .bss
lbl_802DBA80:
	.skip 0x1B8
lbl_802DBC38:
	.skip 0x1B8
lbl_802DBDF0:
	.skip 0x40
lbl_802DBE30:
	.skip 0x808
.global wake_ribbon__13cruise_bubble
wake_ribbon__13cruise_bubble:
	.skip 0x280
lbl_802DC8B8:
	.skip 0x68
lbl_802DC920:
	.skip 0x35C
lbl_802DCC7C:
	.skip 0x694

.section .sbss
lbl_803CB548:
	.skip 0x1
lbl_803CB549:
	.skip 0x1
lbl_803CB54A:
	.skip 0x1
lbl_803CB54B:
	.skip 0x1
lbl_803CB54C:
	.skip 0x8
lbl_803CB554:
	.skip 0x4
lbl_803CB558:
	.skip 0x8
lbl_803CB560:
	.skip 0x1
lbl_803CB561:
	.skip 0x1
lbl_803CB562:
	.skip 0x1
lbl_803CB563:
	.skip 0x1
lbl_803CB564:
	.skip 0x1
lbl_803CB565:
	.skip 0x1
lbl_803CB566:
	.skip 0x2

.section .sbss2
lbl_803D0830:
	.skip 0x4
/* SPECULATION: link order */
.global lbl_803D0834
lbl_803D0834:
	.skip 0x4

.section .sdata
lbl_803CAA80:
	.incbin "baserom.dol", 0x2B5B40, 0x8

.section .sdata2
.global zEntCruiseBubble_f_0_0
zEntCruiseBubble_f_0_0:
	.incbin "baserom.dol", 0x2B6BD8, 0x4
lbl_803CD33C:
	.incbin "baserom.dol", 0x2B6BDC, 0x4
.global zEntCruiseBubble_f_1_0
zEntCruiseBubble_f_1_0:
	.incbin "baserom.dol", 0x2B6BE0, 0x4
lbl_803CD344:
	.incbin "baserom.dol", 0x2B6BE4, 0x4
lbl_803CD348:
	.incbin "baserom.dol", 0x2B6BE8, 0x4
.global zEntCruiseBubble_f_3_0
zEntCruiseBubble_f_3_0:
	.incbin "baserom.dol", 0x2B6BEC, 0x4
lbl_803CD350:
	.incbin "baserom.dol", 0x2B6BF0, 0x4
lbl_803CD354:
	.incbin "baserom.dol", 0x2B6BF4, 0x4
.global zEntCruiseBubble_f_0_25
zEntCruiseBubble_f_0_25:
	.incbin "baserom.dol", 0x2B6BF8, 0x4
lbl_803CD35C:
	.incbin "baserom.dol", 0x2B6BFC, 0x4
lbl_803CD360:
	.incbin "baserom.dol", 0x2B6C00, 0x8
lbl_803CD368:
	.incbin "baserom.dol", 0x2B6C08, 0x8
lbl_803CD370:
	.incbin "baserom.dol", 0x2B6C10, 0x4
lbl_803CD374:
	.incbin "baserom.dol", 0x2B6C14, 0x4
lbl_803CD378:
	.incbin "baserom.dol", 0x2B6C18, 0x4
lbl_803CD37C:
	.incbin "baserom.dol", 0x2B6C1C, 0x4
lbl_803CD380:
	.incbin "baserom.dol", 0x2B6C20, 0x4
lbl_803CD384:
	.incbin "baserom.dol", 0x2B6C24, 0x4
lbl_803CD388:
	.incbin "baserom.dol", 0x2B6C28, 0x4
lbl_803CD38C:
	.incbin "baserom.dol", 0x2B6C2C, 0x4
lbl_803CD390:
	.incbin "baserom.dol", 0x2B6C30, 0x4
lbl_803CD394:
	.incbin "baserom.dol", 0x2B6C34, 0x4
lbl_803CD398:
	.incbin "baserom.dol", 0x2B6C38, 0x4
lbl_803CD39C:
	.incbin "baserom.dol", 0x2B6C3C, 0x4
lbl_803CD3A0:
	.incbin "baserom.dol", 0x2B6C40, 0x4
lbl_803CD3A4:
	.incbin "baserom.dol", 0x2B6C44, 0x4
lbl_803CD3A8:
	.incbin "baserom.dol", 0x2B6C48, 0x4
lbl_803CD3AC:
	.incbin "baserom.dol", 0x2B6C4C, 0x4
lbl_803CD3B0:
	.incbin "baserom.dol", 0x2B6C50, 0x4
lbl_803CD3B4:
	.incbin "baserom.dol", 0x2B6C54, 0x4
lbl_803CD3B8:
	.incbin "baserom.dol", 0x2B6C58, 0x4
lbl_803CD3BC:
	.incbin "baserom.dol", 0x2B6C5C, 0x4
lbl_803CD3C0:
	.incbin "baserom.dol", 0x2B6C60, 0x4
lbl_803CD3C4:
	.incbin "baserom.dol", 0x2B6C64, 0x4
lbl_803CD3C8:
	.incbin "baserom.dol", 0x2B6C68, 0x4
lbl_803CD3CC:
	.incbin "baserom.dol", 0x2B6C6C, 0x4
lbl_803CD3D0:
	.incbin "baserom.dol", 0x2B6C70, 0x4
lbl_803CD3D4:
	.incbin "baserom.dol", 0x2B6C74, 0x4
lbl_803CD3D8:
	.incbin "baserom.dol", 0x2B6C78, 0x4
lbl_803CD3DC:
	.incbin "baserom.dol", 0x2B6C7C, 0x4
lbl_803CD3E0:
	.incbin "baserom.dol", 0x2B6C80, 0x4
lbl_803CD3E4:
	.incbin "baserom.dol", 0x2B6C84, 0x4
lbl_803CD3E8:
	.incbin "baserom.dol", 0x2B6C88, 0x4
lbl_803CD3EC:
	.incbin "baserom.dol", 0x2B6C8C, 0x4
lbl_803CD3F0:
	.incbin "baserom.dol", 0x2B6C90, 0x4
lbl_803CD3F4:
	.incbin "baserom.dol", 0x2B6C94, 0x4
lbl_803CD3F8:
	.incbin "baserom.dol", 0x2B6C98, 0x4
lbl_803CD3FC:
	.incbin "baserom.dol", 0x2B6C9C, 0x4
lbl_803CD400:
	.incbin "baserom.dol", 0x2B6CA0, 0x4
lbl_803CD404:
	.incbin "baserom.dol", 0x2B6CA4, 0x4
lbl_803CD408:
	.incbin "baserom.dol", 0x2B6CA8, 0x4
lbl_803CD40C:
	.incbin "baserom.dol", 0x2B6CAC, 0x4
lbl_803CD410:
	.incbin "baserom.dol", 0x2B6CB0, 0x4
lbl_803CD414:
	.incbin "baserom.dol", 0x2B6CB4, 0x4
lbl_803CD418:
	.incbin "baserom.dol", 0x2B6CB8, 0x4
lbl_803CD41C:
	.incbin "baserom.dol", 0x2B6CBC, 0x4
lbl_803CD420:
	.incbin "baserom.dol", 0x2B6CC0, 0x4
lbl_803CD424:
	.incbin "baserom.dol", 0x2B6CC4, 0x4
lbl_803CD428:
	.incbin "baserom.dol", 0x2B6CC8, 0x4
lbl_803CD42C:
	.incbin "baserom.dol", 0x2B6CCC, 0x4
lbl_803CD430:
	.incbin "baserom.dol", 0x2B6CD0, 0x4
lbl_803CD434:
	.incbin "baserom.dol", 0x2B6CD4, 0x4
lbl_803CD438:
	.incbin "baserom.dol", 0x2B6CD8, 0x4
lbl_803CD43C:
	.incbin "baserom.dol", 0x2B6CDC, 0x4
lbl_803CD440:
	.incbin "baserom.dol", 0x2B6CE0, 0x4
lbl_803CD444:
	.incbin "baserom.dol", 0x2B6CE4, 0x4
lbl_803CD448:
	.incbin "baserom.dol", 0x2B6CE8, 0x4
lbl_803CD44C:
	.incbin "baserom.dol", 0x2B6CEC, 0x4
lbl_803CD450:
	.incbin "baserom.dol", 0x2B6CF0, 0x4
lbl_803CD454:
	.incbin "baserom.dol", 0x2B6CF4, 0x4
lbl_803CD458:
	.incbin "baserom.dol", 0x2B6CF8, 0x4
lbl_803CD45C:
	.incbin "baserom.dol", 0x2B6CFC, 0x4
lbl_803CD460:
	.incbin "baserom.dol", 0x2B6D00, 0x4
lbl_803CD464:
	.incbin "baserom.dol", 0x2B6D04, 0x4
lbl_803CD468:
	.incbin "baserom.dol", 0x2B6D08, 0x4
lbl_803CD46C:
	.incbin "baserom.dol", 0x2B6D0C, 0x4
lbl_803CD470:
	.incbin "baserom.dol", 0x2B6D10, 0x4
lbl_803CD474:
	.incbin "baserom.dol", 0x2B6D14, 0x4
