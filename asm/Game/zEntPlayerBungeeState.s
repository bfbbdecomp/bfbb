.include "macros.inc"

.if 0

.section .text  # 0x801102B8 - 0x80116588

/* play_sound__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FQ312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10sound_enumf */
play_sound__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FQ312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_10sound_enumf:
/* 801102B8 0010D0B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801102BC 0010D0BC  7C 08 02 A6 */	mflr r0
/* 801102C0 0010D0C0  1C 83 00 0C */	mulli r4, r3, 0xc
/* 801102C4 0010D0C4  3C 60 80 27 */	lis r3, lbl_8026A570@ha
/* 801102C8 0010D0C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801102CC 0010D0CC  38 03 A5 70 */	addi r0, r3, lbl_8026A570@l
/* 801102D0 0010D0D0  7C A0 22 14 */	add r5, r0, r4
/* 801102D4 0010D0D4  80 65 00 00 */	lwz r3, 0(r5)
/* 801102D8 0010D0D8  80 85 00 04 */	lwz r4, 4(r5)
/* 801102DC 0010D0DC  7C 03 20 00 */	cmpw r3, r4
/* 801102E0 0010D0E0  41 81 00 3C */	bgt lbl_8011031C
/* 801102E4 0010D0E4  40 82 00 20 */	bne lbl_80110304
/* 801102E8 0010D0E8  88 05 00 08 */	lbz r0, 8(r5)
/* 801102EC 0010D0EC  28 00 00 00 */	cmplwi r0, 0
/* 801102F0 0010D0F0  41 82 00 0C */	beq lbl_801102FC
/* 801102F4 0010D0F4  4B F7 07 CD */	bl zEntPlayer_SNDPlayStreamRandom__F20_tagePlayerStreamSnd20_tagePlayerStreamSndf
/* 801102F8 0010D0F8  48 00 00 24 */	b lbl_8011031C
lbl_801102FC:
/* 801102FC 0010D0FC  4B F7 04 95 */	bl zEntPlayer_SNDPlay__F14_tagePlayerSndf
/* 80110300 0010D100  48 00 00 1C */	b lbl_8011031C
lbl_80110304:
/* 80110304 0010D104  88 05 00 08 */	lbz r0, 8(r5)
/* 80110308 0010D108  28 00 00 00 */	cmplwi r0, 0
/* 8011030C 0010D10C  41 82 00 0C */	beq lbl_80110318
/* 80110310 0010D110  4B F7 07 B1 */	bl zEntPlayer_SNDPlayStreamRandom__F20_tagePlayerStreamSnd20_tagePlayerStreamSndf
/* 80110314 0010D114  48 00 00 08 */	b lbl_8011031C
lbl_80110318:
/* 80110318 0010D118  4B F7 0B DD */	bl zEntPlayer_SNDPlayRandom__F14_tagePlayerSnd14_tagePlayerSndf
lbl_8011031C:
/* 8011031C 0010D11C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80110320 0010D120  7C 08 03 A6 */	mtlr r0
/* 80110324 0010D124  38 21 00 10 */	addi r1, r1, 0x10
/* 80110328 0010D128  4E 80 00 20 */	blr 

/* stop_sound__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fi */
stop_sound__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fi:
/* 8011032C 0010D12C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80110330 0010D130  7C 08 02 A6 */	mflr r0
/* 80110334 0010D134  1C 83 00 0C */	mulli r4, r3, 0xc
/* 80110338 0010D138  3C 60 80 27 */	lis r3, lbl_8026A570@ha
/* 8011033C 0010D13C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80110340 0010D140  38 03 A5 70 */	addi r0, r3, lbl_8026A570@l
/* 80110344 0010D144  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80110348 0010D148  7F E0 22 14 */	add r31, r0, r4
/* 8011034C 0010D14C  80 7F 00 00 */	lwz r3, 0(r31)
/* 80110350 0010D150  80 1F 00 04 */	lwz r0, 4(r31)
/* 80110354 0010D154  93 C1 00 08 */	stw r30, 8(r1)
/* 80110358 0010D158  7C 03 00 00 */	cmpw r3, r0
/* 8011035C 0010D15C  41 81 00 30 */	bgt lbl_8011038C
/* 80110360 0010D160  88 1F 00 08 */	lbz r0, 8(r31)
/* 80110364 0010D164  28 00 00 00 */	cmplwi r0, 0
/* 80110368 0010D168  40 82 00 24 */	bne lbl_8011038C
/* 8011036C 0010D16C  7C 7E 1B 78 */	mr r30, r3
/* 80110370 0010D170  48 00 00 10 */	b lbl_80110380
lbl_80110374:
/* 80110374 0010D174  7F C3 F3 78 */	mr r3, r30
/* 80110378 0010D178  4B F7 0E C9 */	bl zEntPlayer_SNDStop__F14_tagePlayerSnd
/* 8011037C 0010D17C  3B DE 00 01 */	addi r30, r30, 1
lbl_80110380:
/* 80110380 0010D180  80 1F 00 04 */	lwz r0, 4(r31)
/* 80110384 0010D184  7C 1E 00 00 */	cmpw r30, r0
/* 80110388 0010D188  40 81 FF EC */	ble lbl_80110374
lbl_8011038C:
/* 8011038C 0010D18C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80110390 0010D190  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80110394 0010D194  83 C1 00 08 */	lwz r30, 8(r1)
/* 80110398 0010D198  7C 08 03 A6 */	mtlr r0
/* 8011039C 0010D19C  38 21 00 10 */	addi r1, r1, 0x10
/* 801103A0 0010D1A0  4E 80 00 20 */	blr 

/* set_volume__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fif */
set_volume__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fif:
/* 801103A4 0010D1A4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801103A8 0010D1A8  7C 08 02 A6 */	mflr r0
/* 801103AC 0010D1AC  1C 83 00 0C */	mulli r4, r3, 0xc
/* 801103B0 0010D1B0  3C 60 80 27 */	lis r3, lbl_8026A570@ha
/* 801103B4 0010D1B4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801103B8 0010D1B8  38 03 A5 70 */	addi r0, r3, lbl_8026A570@l
/* 801103BC 0010D1BC  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 801103C0 0010D1C0  FF E0 08 90 */	fmr f31, f1
/* 801103C4 0010D1C4  93 E1 00 14 */	stw r31, 0x14(r1)
/* 801103C8 0010D1C8  7F E0 22 14 */	add r31, r0, r4
/* 801103CC 0010D1CC  80 7F 00 00 */	lwz r3, 0(r31)
/* 801103D0 0010D1D0  80 1F 00 04 */	lwz r0, 4(r31)
/* 801103D4 0010D1D4  93 C1 00 10 */	stw r30, 0x10(r1)
/* 801103D8 0010D1D8  7C 03 00 00 */	cmpw r3, r0
/* 801103DC 0010D1DC  41 81 00 34 */	bgt lbl_80110410
/* 801103E0 0010D1E0  88 1F 00 08 */	lbz r0, 8(r31)
/* 801103E4 0010D1E4  28 00 00 00 */	cmplwi r0, 0
/* 801103E8 0010D1E8  40 82 00 28 */	bne lbl_80110410
/* 801103EC 0010D1EC  7C 7E 1B 78 */	mr r30, r3
/* 801103F0 0010D1F0  48 00 00 14 */	b lbl_80110404
lbl_801103F4:
/* 801103F4 0010D1F4  FC 20 F8 90 */	fmr f1, f31
/* 801103F8 0010D1F8  7F C3 F3 78 */	mr r3, r30
/* 801103FC 0010D1FC  4B F7 0D 9D */	bl zEntPlayer_SNDSetVol__F14_tagePlayerSndf
/* 80110400 0010D200  3B DE 00 01 */	addi r30, r30, 1
lbl_80110404:
/* 80110404 0010D204  80 1F 00 04 */	lwz r0, 4(r31)
/* 80110408 0010D208  7C 1E 00 00 */	cmpw r30, r0
/* 8011040C 0010D20C  40 81 FF E8 */	ble lbl_801103F4
lbl_80110410:
/* 80110410 0010D210  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80110414 0010D214  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80110418 0010D218  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8011041C 0010D21C  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 80110420 0010D220  7C 08 03 A6 */	mtlr r0
/* 80110424 0010D224  38 21 00 20 */	addi r1, r1, 0x20
/* 80110428 0010D228  4E 80 00 20 */	blr 

/* init_models__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv */
init_models__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv:
/* 8011042C 0010D22C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80110430 0010D230  7C 08 02 A6 */	mflr r0
/* 80110434 0010D234  3C 60 80 3C */	lis r3, globals@ha
/* 80110438 0010D238  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 8011043C 0010D23C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80110440 0010D240  38 C3 05 58 */	addi r6, r3, globals@l
/* 80110444 0010D244  38 84 7A 68 */	addi r4, r4, lbl_80297A68@l
/* 80110448 0010D248  80 66 1F 58 */	lwz r3, 0x1f58(r6)
/* 8011044C 0010D24C  80 A6 07 04 */	lwz r5, 0x704(r6)
/* 80110450 0010D250  80 06 1F 54 */	lwz r0, 0x1f54(r6)
/* 80110454 0010D254  90 A4 01 68 */	stw r5, 0x168(r4)
/* 80110458 0010D258  90 04 01 6C */	stw r0, 0x16c(r4)
/* 8011045C 0010D25C  90 64 01 70 */	stw r3, 0x170(r4)
/* 80110460 0010D260  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 80110464 0010D264  70 00 DF FF */	andi. r0, r0, 0xdfff
/* 80110468 0010D268  60 04 00 08 */	ori r4, r0, 8
/* 8011046C 0010D26C  4B F2 3F ED */	bl xModelInstanceUpgradeBrotherShared__FP14xModelInstanceUi
/* 80110470 0010D270  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80110474 0010D274  7C 08 03 A6 */	mtlr r0
/* 80110478 0010D278  38 21 00 10 */	addi r1, r1, 0x10
/* 8011047C 0010D27C  4E 80 00 20 */	blr 

/* show_models__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv */
show_models__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv:
/* 80110480 0010D280  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 80110484 0010D284  38 83 7A 68 */	addi r4, r3, lbl_80297A68@l
/* 80110488 0010D288  80 64 01 6C */	lwz r3, 0x16c(r4)
/* 8011048C 0010D28C  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 80110490 0010D290  60 00 00 03 */	ori r0, r0, 3
/* 80110494 0010D294  B0 03 00 44 */	sth r0, 0x44(r3)
/* 80110498 0010D298  80 64 01 70 */	lwz r3, 0x170(r4)
/* 8011049C 0010D29C  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 801104A0 0010D2A0  70 00 FF F7 */	andi. r0, r0, 0xfff7
/* 801104A4 0010D2A4  B0 03 00 44 */	sth r0, 0x44(r3)
/* 801104A8 0010D2A8  80 64 01 70 */	lwz r3, 0x170(r4)
/* 801104AC 0010D2AC  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 801104B0 0010D2B0  60 00 00 22 */	ori r0, r0, 0x22
/* 801104B4 0010D2B4  B0 03 00 44 */	sth r0, 0x44(r3)
/* 801104B8 0010D2B8  80 84 01 70 */	lwz r4, 0x170(r4)
/* 801104BC 0010D2BC  80 64 00 10 */	lwz r3, 0x10(r4)
/* 801104C0 0010D2C0  C0 03 00 28 */	lfs f0, 0x28(r3)
/* 801104C4 0010D2C4  D0 0D 94 F0 */	stfs f0, lbl_803CBDF0-_SDA_BASE_(r13)
/* 801104C8 0010D2C8  C0 02 9E 80 */	lfs f0, lbl_803CE800-_SDA2_BASE_(r2)
/* 801104CC 0010D2CC  80 64 00 10 */	lwz r3, 0x10(r4)
/* 801104D0 0010D2D0  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 801104D4 0010D2D4  4E 80 00 20 */	blr 

/* hide_models__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv */
hide_models__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv:
/* 801104D8 0010D2D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801104DC 0010D2DC  7C 08 02 A6 */	mflr r0
/* 801104E0 0010D2E0  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 801104E4 0010D2E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801104E8 0010D2E8  38 83 7A 68 */	addi r4, r3, lbl_80297A68@l
/* 801104EC 0010D2EC  80 64 01 70 */	lwz r3, 0x170(r4)
/* 801104F0 0010D2F0  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 801104F4 0010D2F4  70 00 FF DC */	andi. r0, r0, 0xffdc
/* 801104F8 0010D2F8  B0 03 00 44 */	sth r0, 0x44(r3)
/* 801104FC 0010D2FC  80 64 01 70 */	lwz r3, 0x170(r4)
/* 80110500 0010D300  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 80110504 0010D304  60 00 00 08 */	ori r0, r0, 8
/* 80110508 0010D308  B0 03 00 44 */	sth r0, 0x44(r3)
/* 8011050C 0010D30C  80 64 01 70 */	lwz r3, 0x170(r4)
/* 80110510 0010D310  C0 0D 94 F0 */	lfs f0, lbl_803CBDF0-_SDA_BASE_(r13)
/* 80110514 0010D314  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80110518 0010D318  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 8011051C 0010D31C  4B F8 95 E9 */	bl zGameExtras_CheatFlags__Fv
/* 80110520 0010D320  54 60 00 C7 */	rlwinm. r0, r3, 0, 3, 3
/* 80110524 0010D324  41 82 00 20 */	beq lbl_80110544
/* 80110528 0010D328  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 8011052C 0010D32C  38 63 7A 68 */	addi r3, r3, lbl_80297A68@l
/* 80110530 0010D330  80 63 01 6C */	lwz r3, 0x16c(r3)
/* 80110534 0010D334  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 80110538 0010D338  60 00 00 03 */	ori r0, r0, 3
/* 8011053C 0010D33C  B0 03 00 44 */	sth r0, 0x44(r3)
/* 80110540 0010D340  48 00 00 1C */	b lbl_8011055C
lbl_80110544:
/* 80110544 0010D344  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 80110548 0010D348  38 63 7A 68 */	addi r3, r3, lbl_80297A68@l
/* 8011054C 0010D34C  80 63 01 6C */	lwz r3, 0x16c(r3)
/* 80110550 0010D350  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 80110554 0010D354  54 00 04 3A */	rlwinm r0, r0, 0, 0x10, 0x1d
/* 80110558 0010D358  B0 03 00 44 */	sth r0, 0x44(r3)
lbl_8011055C:
/* 8011055C 0010D35C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80110560 0010D360  7C 08 03 A6 */	mtlr r0
/* 80110564 0010D364  38 21 00 10 */	addi r1, r1, 0x10
/* 80110568 0010D368  4E 80 00 20 */	blr 

/* render_player__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fb */
render_player__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fb:
/* 8011056C 0010D36C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80110570 0010D370  7C 08 02 A6 */	mflr r0
/* 80110574 0010D374  3C 80 80 3C */	lis r4, globals@ha
/* 80110578 0010D378  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011057C 0010D37C  38 84 05 58 */	addi r4, r4, globals@l
/* 80110580 0010D380  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80110584 0010D384  3B E4 06 E0 */	addi r31, r4, 0x6e0
/* 80110588 0010D388  93 C1 00 08 */	stw r30, 8(r1)
/* 8011058C 0010D38C  7C 7E 1B 78 */	mr r30, r3
/* 80110590 0010D390  7F E3 FB 78 */	mr r3, r31
/* 80110594 0010D394  C0 22 9E 84 */	lfs f1, lbl_803CE804-_SDA2_BASE_(r2)
/* 80110598 0010D398  4B F3 50 35 */	bl xShadowRender__FP4xEntf
/* 8011059C 0010D39C  7F E3 FB 78 */	mr r3, r31
/* 801105A0 0010D3A0  4B F0 8F 2D */	bl xEntRender__FP4xEnt
/* 801105A4 0010D3A4  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 801105A8 0010D3A8  41 82 00 24 */	beq lbl_801105CC
/* 801105AC 0010D3AC  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 801105B0 0010D3B0  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 801105B4 0010D3B4  38 A4 7A 68 */	addi r5, r4, lbl_80297A68@l
/* 801105B8 0010D3B8  C0 22 9E 88 */	lfs f1, lbl_803CE808-_SDA2_BASE_(r2)
/* 801105BC 0010D3BC  38 83 37 88 */	addi r4, r3, lbl_80313788@l
/* 801105C0 0010D3C0  80 65 01 70 */	lwz r3, 0x170(r5)
/* 801105C4 0010D3C4  C0 44 00 20 */	lfs f2, 0x20(r4)
/* 801105C8 0010D3C8  4B F1 77 BD */	bl xFXRenderProximityFade__FRC14xModelInstanceff
lbl_801105CC:
/* 801105CC 0010D3CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801105D0 0010D3D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801105D4 0010D3D4  83 C1 00 08 */	lwz r30, 8(r1)
/* 801105D8 0010D3D8  7C 08 03 A6 */	mtlr r0
/* 801105DC 0010D3DC  38 21 00 10 */	addi r1, r1, 0x10
/* 801105E0 0010D3E0  4E 80 00 20 */	blr 

/* move_wedgie__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FRC5xVec3 */
move_wedgie__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FRC5xVec3:
/* 801105E4 0010D3E4  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 801105E8 0010D3E8  7C 08 02 A6 */	mflr r0
/* 801105EC 0010D3EC  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 801105F0 0010D3F0  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 801105F4 0010D3F4  93 E1 00 DC */	stw r31, 0xdc(r1)
/* 801105F8 0010D3F8  3B E4 7A 68 */	addi r31, r4, lbl_80297A68@l
/* 801105FC 0010D3FC  93 C1 00 D8 */	stw r30, 0xd8(r1)
/* 80110600 0010D400  93 A1 00 D4 */	stw r29, 0xd4(r1)
/* 80110604 0010D404  7C 7D 1B 78 */	mr r29, r3
/* 80110608 0010D408  80 1F 01 6C */	lwz r0, 0x16c(r31)
/* 8011060C 0010D40C  28 00 00 00 */	cmplwi r0, 0
/* 80110610 0010D410  41 82 01 40 */	beq lbl_80110750
/* 80110614 0010D414  80 9F 01 70 */	lwz r4, 0x170(r31)
/* 80110618 0010D418  28 04 00 00 */	cmplwi r4, 0
/* 8011061C 0010D41C  40 82 00 08 */	bne lbl_80110624
/* 80110620 0010D420  48 00 01 30 */	b lbl_80110750
lbl_80110624:
/* 80110624 0010D424  80 7F 01 68 */	lwz r3, 0x168(r31)
/* 80110628 0010D428  80 A4 00 4C */	lwz r5, 0x4c(r4)
/* 8011062C 0010D42C  80 83 00 4C */	lwz r4, 0x4c(r3)
/* 80110630 0010D430  38 65 00 80 */	addi r3, r5, 0x80
/* 80110634 0010D434  38 84 00 80 */	addi r4, r4, 0x80
/* 80110638 0010D438  4B F2 43 65 */	bl __as__11RwMatrixTagFRC11RwMatrixTag
/* 8011063C 0010D43C  80 9F 01 68 */	lwz r4, 0x168(r31)
/* 80110640 0010D440  38 61 00 88 */	addi r3, r1, 0x88
/* 80110644 0010D444  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80110648 0010D448  4B F0 4B 5D */	bl xMat4x3OrthoInv__FP7xMat4x3PC7xMat4x3
/* 8011064C 0010D44C  38 61 00 48 */	addi r3, r1, 0x48
/* 80110650 0010D450  4B EF E9 BD */	bl xMat3x3Identity__FP7xMat3x3
/* 80110654 0010D454  3B C1 00 78 */	addi r30, r1, 0x78
/* 80110658 0010D458  7F A4 EB 78 */	mr r4, r29
/* 8011065C 0010D45C  7F C3 F3 78 */	mr r3, r30
/* 80110660 0010D460  4B EF AC 05 */	bl __as__5xVec3FRC5xVec3
/* 80110664 0010D464  88 0D 94 F5 */	lbz r0, lbl_803CBDF5-_SDA_BASE_(r13)
/* 80110668 0010D468  7C 00 07 75 */	extsb. r0, r0
/* 8011066C 0010D46C  40 82 00 14 */	bne lbl_80110680
/* 80110670 0010D470  38 60 00 00 */	li r3, 0
/* 80110674 0010D474  38 00 00 01 */	li r0, 1
/* 80110678 0010D478  98 6D 94 F4 */	stb r3, lbl_803CBDF4-_SDA_BASE_(r13)
/* 8011067C 0010D47C  98 0D 94 F5 */	stb r0, lbl_803CBDF5-_SDA_BASE_(r13)
lbl_80110680:
/* 80110680 0010D480  88 0D 94 F4 */	lbz r0, lbl_803CBDF4-_SDA_BASE_(r13)
/* 80110684 0010D484  28 00 00 00 */	cmplwi r0, 0
/* 80110688 0010D488  40 82 00 94 */	bne lbl_8011071C
/* 8011068C 0010D48C  38 00 00 01 */	li r0, 1
/* 80110690 0010D490  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80110694 0010D494  98 0D 94 F4 */	stb r0, lbl_803CBDF4-_SDA_BASE_(r13)
/* 80110698 0010D498  3C 80 80 29 */	lis r4, lbl_80297C04@ha
/* 8011069C 0010D49C  38 63 A6 88 */	addi r3, r3, lbl_8026A688@l
/* 801106A0 0010D4A0  38 A0 00 00 */	li r5, 0
/* 801106A4 0010D4A4  C0 22 9E 94 */	lfs f1, lbl_803CE814-_SDA2_BASE_(r2)
/* 801106A8 0010D4A8  38 84 7C 04 */	addi r4, r4, lbl_80297C04@l
/* 801106AC 0010D4AC  C0 42 9E 98 */	lfs f2, lbl_803CE818-_SDA2_BASE_(r2)
/* 801106B0 0010D4B0  38 C0 00 00 */	li r6, 0
/* 801106B4 0010D4B4  38 E0 00 00 */	li r7, 0
/* 801106B8 0010D4B8  4B F1 FF 75 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 801106BC 0010D4BC  3C 80 80 27 */	lis r4, lbl_8026A688@ha
/* 801106C0 0010D4C0  3C 60 80 29 */	lis r3, lbl_80297C04@ha
/* 801106C4 0010D4C4  38 A4 A6 88 */	addi r5, r4, lbl_8026A688@l
/* 801106C8 0010D4C8  C0 22 9E 94 */	lfs f1, lbl_803CE814-_SDA2_BASE_(r2)
/* 801106CC 0010D4CC  38 83 7C 04 */	addi r4, r3, lbl_80297C04@l
/* 801106D0 0010D4D0  C0 42 9E 98 */	lfs f2, lbl_803CE818-_SDA2_BASE_(r2)
/* 801106D4 0010D4D4  38 65 00 16 */	addi r3, r5, 0x16
/* 801106D8 0010D4D8  38 A0 00 00 */	li r5, 0
/* 801106DC 0010D4DC  38 84 00 04 */	addi r4, r4, 4
/* 801106E0 0010D4E0  38 C0 00 00 */	li r6, 0
/* 801106E4 0010D4E4  38 E0 00 00 */	li r7, 0
/* 801106E8 0010D4E8  4B F1 FF 45 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 801106EC 0010D4EC  3C 80 80 27 */	lis r4, lbl_8026A688@ha
/* 801106F0 0010D4F0  3C 60 80 29 */	lis r3, lbl_80297C04@ha
/* 801106F4 0010D4F4  38 A4 A6 88 */	addi r5, r4, lbl_8026A688@l
/* 801106F8 0010D4F8  C0 22 9E 94 */	lfs f1, lbl_803CE814-_SDA2_BASE_(r2)
/* 801106FC 0010D4FC  38 83 7C 04 */	addi r4, r3, lbl_80297C04@l
/* 80110700 0010D500  C0 42 9E 98 */	lfs f2, lbl_803CE818-_SDA2_BASE_(r2)
/* 80110704 0010D504  38 65 00 2C */	addi r3, r5, 0x2c
/* 80110708 0010D508  38 A0 00 00 */	li r5, 0
/* 8011070C 0010D50C  38 84 00 08 */	addi r4, r4, 8
/* 80110710 0010D510  38 C0 00 00 */	li r6, 0
/* 80110714 0010D514  38 E0 00 00 */	li r7, 0
/* 80110718 0010D518  4B F1 FF 15 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
lbl_8011071C:
/* 8011071C 0010D51C  3C 80 80 29 */	lis r4, lbl_80297C04@ha
/* 80110720 0010D520  7F C3 F3 78 */	mr r3, r30
/* 80110724 0010D524  38 84 7C 04 */	addi r4, r4, lbl_80297C04@l
/* 80110728 0010D528  4B F0 4D 1D */	bl __apl__5xVec3FRC5xVec3
/* 8011072C 0010D52C  38 61 00 08 */	addi r3, r1, 8
/* 80110730 0010D530  38 81 00 48 */	addi r4, r1, 0x48
/* 80110734 0010D534  38 A1 00 88 */	addi r5, r1, 0x88
/* 80110738 0010D538  4B F2 24 E1 */	bl xMat4x3Mul__FP7xMat4x3PC7xMat4x3PC7xMat4x3
/* 8011073C 0010D53C  80 7F 01 70 */	lwz r3, 0x170(r31)
/* 80110740 0010D540  38 81 00 08 */	addi r4, r1, 8
/* 80110744 0010D544  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80110748 0010D548  38 63 08 80 */	addi r3, r3, 0x880
/* 8011074C 0010D54C  4B F2 42 51 */	bl __as__11RwMatrixTagFRC11RwMatrixTag
lbl_80110750:
/* 80110750 0010D550  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 80110754 0010D554  83 E1 00 DC */	lwz r31, 0xdc(r1)
/* 80110758 0010D558  83 C1 00 D8 */	lwz r30, 0xd8(r1)
/* 8011075C 0010D55C  83 A1 00 D4 */	lwz r29, 0xd4(r1)
/* 80110760 0010D560  7C 08 03 A6 */	mtlr r0
/* 80110764 0010D564  38 21 00 E0 */	addi r1, r1, 0xe0
/* 80110768 0010D568  4E 80 00 20 */	blr 

/* update_hook_loc__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv */
update_hook_loc__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv:
/* 8011076C 0010D56C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80110770 0010D570  7C 08 02 A6 */	mflr r0
/* 80110774 0010D574  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 80110778 0010D578  90 01 00 24 */	stw r0, 0x24(r1)
/* 8011077C 0010D57C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80110780 0010D580  3B E3 7A 68 */	addi r31, r3, lbl_80297A68@l
/* 80110784 0010D584  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 80110788 0010D588  28 03 00 00 */	cmplwi r3, 0
/* 8011078C 0010D58C  41 82 00 44 */	beq lbl_801107D0
/* 80110790 0010D590  80 63 00 14 */	lwz r3, 0x14(r3)
/* 80110794 0010D594  28 03 00 00 */	cmplwi r3, 0
/* 80110798 0010D598  40 82 00 08 */	bne lbl_801107A0
/* 8011079C 0010D59C  48 00 00 34 */	b lbl_801107D0
lbl_801107A0:
/* 801107A0 0010D5A0  4B F0 B0 69 */	bl xEntGetPos__FPC4xEnt
/* 801107A4 0010D5A4  80 BF 00 3C */	lwz r5, 0x3c(r31)
/* 801107A8 0010D5A8  7C 64 1B 78 */	mr r4, r3
/* 801107AC 0010D5AC  38 61 00 08 */	addi r3, r1, 8
/* 801107B0 0010D5B0  80 A5 00 10 */	lwz r5, 0x10(r5)
/* 801107B4 0010D5B4  38 A5 00 14 */	addi r5, r5, 0x14
/* 801107B8 0010D5B8  4B F0 4C 29 */	bl __pl__5xVec3CFRC5xVec3
/* 801107BC 0010D5BC  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 801107C0 0010D5C0  38 81 00 08 */	addi r4, r1, 8
/* 801107C4 0010D5C4  38 63 7A 68 */	addi r3, r3, lbl_80297A68@l
/* 801107C8 0010D5C8  38 63 01 74 */	addi r3, r3, 0x174
/* 801107CC 0010D5CC  4B EF AA 99 */	bl __as__5xVec3FRC5xVec3
lbl_801107D0:
/* 801107D0 0010D5D0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801107D4 0010D5D4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801107D8 0010D5D8  7C 08 03 A6 */	mtlr r0
/* 801107DC 0010D5DC  38 21 00 20 */	addi r1, r1, 0x20
/* 801107E0 0010D5E0  4E 80 00 20 */	blr 

/* find_drop_off__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv */
find_drop_off__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv:
/* 801107E4 0010D5E4  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801107E8 0010D5E8  7C 08 02 A6 */	mflr r0
/* 801107EC 0010D5EC  90 01 00 54 */	stw r0, 0x54(r1)
/* 801107F0 0010D5F0  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 801107F4 0010D5F4  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 801107F8 0010D5F8  BF 61 00 2C */	stmw r27, 0x2c(r1)
/* 801107FC 0010D5FC  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 80110800 0010D600  3B 80 FF FF */	li r28, -1
/* 80110804 0010D604  3B E3 7A 68 */	addi r31, r3, lbl_80297A68@l
/* 80110808 0010D608  3B 60 00 00 */	li r27, 0
/* 8011080C 0010D60C  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 80110810 0010D610  7F FE FB 78 */	mr r30, r31
/* 80110814 0010D614  3B BF 01 74 */	addi r29, r31, 0x174
/* 80110818 0010D618  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8011081C 0010D61C  C0 03 00 28 */	lfs f0, 0x28(r3)
/* 80110820 0010D620  EF E0 00 32 */	fmuls f31, f0, f0
/* 80110824 0010D624  48 00 00 50 */	b lbl_80110874
lbl_80110828:
/* 80110828 0010D628  80 9E 00 E0 */	lwz r4, 0xe0(r30)
/* 8011082C 0010D62C  7F A5 EB 78 */	mr r5, r29
/* 80110830 0010D630  38 61 00 08 */	addi r3, r1, 8
/* 80110834 0010D634  4B EF A9 99 */	bl __mi__5xVec3CFRC5xVec3
/* 80110838 0010D638  80 A1 00 08 */	lwz r5, 8(r1)
/* 8011083C 0010D63C  38 61 00 14 */	addi r3, r1, 0x14
/* 80110840 0010D640  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80110844 0010D644  80 01 00 10 */	lwz r0, 0x10(r1)
/* 80110848 0010D648  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8011084C 0010D64C  90 81 00 18 */	stw r4, 0x18(r1)
/* 80110850 0010D650  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80110854 0010D654  4B EF A8 A9 */	bl length2__5xVec3CFv
/* 80110858 0010D658  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 8011085C 0010D65C  4C 41 13 82 */	cror 2, 1, 2
/* 80110860 0010D660  41 82 00 0C */	beq lbl_8011086C
/* 80110864 0010D664  7F 7C DB 78 */	mr r28, r27
/* 80110868 0010D668  FF E0 08 90 */	fmr f31, f1
lbl_8011086C:
/* 8011086C 0010D66C  3B DE 00 04 */	addi r30, r30, 4
/* 80110870 0010D670  3B 7B 00 01 */	addi r27, r27, 1
lbl_80110874:
/* 80110874 0010D674  80 1F 01 64 */	lwz r0, 0x164(r31)
/* 80110878 0010D678  7C 1B 00 00 */	cmpw r27, r0
/* 8011087C 0010D67C  41 80 FF AC */	blt lbl_80110828
/* 80110880 0010D680  2C 1C FF FF */	cmpwi r28, -1
/* 80110884 0010D684  41 82 00 58 */	beq lbl_801108DC
/* 80110888 0010D688  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 8011088C 0010D68C  57 9D 10 3A */	slwi r29, r28, 2
/* 80110890 0010D690  38 A3 7A 68 */	addi r5, r3, lbl_80297A68@l
/* 80110894 0010D694  7C 65 EA 14 */	add r3, r5, r29
/* 80110898 0010D698  80 83 00 E0 */	lwz r4, 0xe0(r3)
/* 8011089C 0010D69C  38 65 01 80 */	addi r3, r5, 0x180
/* 801108A0 0010D6A0  4B EF A9 C5 */	bl __as__5xVec3FRC5xVec3
/* 801108A4 0010D6A4  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 801108A8 0010D6A8  38 60 00 01 */	li r3, 1
/* 801108AC 0010D6AC  38 A4 7A 68 */	addi r5, r4, lbl_80297A68@l
/* 801108B0 0010D6B0  7C C5 EA 14 */	add r6, r5, r29
/* 801108B4 0010D6B4  80 86 00 60 */	lwz r4, 0x60(r6)
/* 801108B8 0010D6B8  80 84 00 14 */	lwz r4, 0x14(r4)
/* 801108BC 0010D6BC  7C 04 00 D0 */	neg r0, r4
/* 801108C0 0010D6C0  7C 00 23 78 */	or r0, r0, r4
/* 801108C4 0010D6C4  54 00 0F FE */	srwi r0, r0, 0x1f
/* 801108C8 0010D6C8  98 05 01 8C */	stb r0, 0x18c(r5)
/* 801108CC 0010D6CC  80 86 00 60 */	lwz r4, 0x60(r6)
/* 801108D0 0010D6D0  C0 04 00 18 */	lfs f0, 0x18(r4)
/* 801108D4 0010D6D4  D0 05 01 90 */	stfs f0, 0x190(r5)
/* 801108D8 0010D6D8  48 00 00 08 */	b lbl_801108E0
lbl_801108DC:
/* 801108DC 0010D6DC  38 60 00 00 */	li r3, 0
lbl_801108E0:
/* 801108E0 0010D6E0  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 801108E4 0010D6E4  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 801108E8 0010D6E8  BB 61 00 2C */	lmw r27, 0x2c(r1)
/* 801108EC 0010D6EC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801108F0 0010D6F0  7C 08 03 A6 */	mtlr r0
/* 801108F4 0010D6F4  38 21 00 50 */	addi r1, r1, 0x50
/* 801108F8 0010D6F8  4E 80 00 20 */	blr 

/* trigger__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FUi */
trigger__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FUi:
/* 801108FC 0010D6FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80110900 0010D700  7C 08 02 A6 */	mflr r0
/* 80110904 0010D704  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 80110908 0010D708  7C 65 1B 78 */	mr r5, r3
/* 8011090C 0010D70C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80110910 0010D710  38 84 7A 68 */	addi r4, r4, lbl_80297A68@l
/* 80110914 0010D714  80 84 00 3C */	lwz r4, 0x3c(r4)
/* 80110918 0010D718  7C 83 23 78 */	mr r3, r4
/* 8011091C 0010D71C  4B F0 ED C5 */	bl zEntEvent__FP5xBaseP5xBaseUi
/* 80110920 0010D720  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80110924 0010D724  7C 08 03 A6 */	mtlr r0
/* 80110928 0010D728  38 21 00 10 */	addi r1, r1, 0x10
/* 8011092C 0010D72C  4E 80 00 20 */	blr 

on_tweak_collision__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRC10tweak_info:
/* 80110930 0010D730  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80110934 0010D734  7C 08 02 A6 */	mflr r0
/* 80110938 0010D738  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8011093C 0010D73C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80110940 0010D740  48 00 00 15 */	bl reset_props_collision__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv
/* 80110944 0010D744  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80110948 0010D748  7C 08 03 A6 */	mtlr r0
/* 8011094C 0010D74C  38 21 00 10 */	addi r1, r1, 0x10
/* 80110950 0010D750  4E 80 00 20 */	blr 

/* reset_props_collision__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv */
reset_props_collision__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv:
/* 80110954 0010D754  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80110958 0010D758  7C 08 02 A6 */	mflr r0
/* 8011095C 0010D75C  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 80110960 0010D760  90 01 00 14 */	stw r0, 0x14(r1)
/* 80110964 0010D764  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80110968 0010D768  7C 7F 1B 78 */	mr r31, r3
/* 8011096C 0010D76C  38 64 7A 68 */	addi r3, r4, lbl_80297A68@l
/* 80110970 0010D770  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 80110974 0010D774  28 03 00 00 */	cmplwi r3, 0
/* 80110978 0010D778  41 82 00 64 */	beq lbl_801109DC
/* 8011097C 0010D77C  80 83 00 10 */	lwz r4, 0x10(r3)
/* 80110980 0010D780  38 7F 01 8C */	addi r3, r31, 0x18c
/* 80110984 0010D784  38 84 00 80 */	addi r4, r4, 0x80
/* 80110988 0010D788  48 00 00 69 */	bl __as__Q312bungee_state10hook_asset35_esc__2_class_esc__6_913zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35_esc__2_class_esc__6_913zEntPlayerBungeeState_cpp
/* 8011098C 0010D78C  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80110990 0010D790  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 80110994 0010D794  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 80110998 0010D798  40 82 00 10 */	bne lbl_801109A8
/* 8011099C 0010D79C  C0 02 9E A4 */	lfs f0, lbl_803CE824-_SDA2_BASE_(r2)
/* 801109A0 0010D7A0  D0 1F 01 90 */	stfs f0, 0x190(r31)
/* 801109A4 0010D7A4  48 00 00 10 */	b lbl_801109B4
lbl_801109A8:
/* 801109A8 0010D7A8  C0 1F 00 A8 */	lfs f0, 0xa8(r31)
/* 801109AC 0010D7AC  EC 01 00 32 */	fmuls f0, f1, f0
/* 801109B0 0010D7B0  D0 1F 01 90 */	stfs f0, 0x190(r31)
lbl_801109B4:
/* 801109B4 0010D7B4  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 801109B8 0010D7B8  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 801109BC 0010D7BC  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 801109C0 0010D7C0  40 82 00 10 */	bne lbl_801109D0
/* 801109C4 0010D7C4  C0 02 9E A4 */	lfs f0, lbl_803CE824-_SDA2_BASE_(r2)
/* 801109C8 0010D7C8  D0 1F 01 94 */	stfs f0, 0x194(r31)
/* 801109CC 0010D7CC  48 00 00 10 */	b lbl_801109DC
lbl_801109D0:
/* 801109D0 0010D7D0  C0 1F 00 A8 */	lfs f0, 0xa8(r31)
/* 801109D4 0010D7D4  EC 01 00 32 */	fmuls f0, f1, f0
/* 801109D8 0010D7D8  D0 1F 01 94 */	stfs f0, 0x194(r31)
lbl_801109DC:
/* 801109DC 0010D7DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801109E0 0010D7E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801109E4 0010D7E4  7C 08 03 A6 */	mtlr r0
/* 801109E8 0010D7E8  38 21 00 10 */	addi r1, r1, 0x10
/* 801109EC 0010D7EC  4E 80 00 20 */	blr 

/* __as__Q312bungee_state10hook_asset35@class$913zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35@class$913zEntPlayerBungeeState_cpp */
.global __as__Q312bungee_state10hook_asset35_esc__2_class_esc__6_913zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35_esc__2_class_esc__6_913zEntPlayerBungeeState_cpp

__as__Q312bungee_state10hook_asset35_esc__2_class_esc__6_913zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35_esc__2_class_esc__6_913zEntPlayerBungeeState_cpp:
/* 801109F0 0010D7F0  C0 04 00 00 */	lfs f0, 0(r4)
/* 801109F4 0010D7F4  C0 24 00 04 */	lfs f1, 4(r4)
/* 801109F8 0010D7F8  D0 03 00 00 */	stfs f0, 0(r3)
/* 801109FC 0010D7FC  C0 04 00 08 */	lfs f0, 8(r4)
/* 80110A00 0010D800  D0 23 00 04 */	stfs f1, 4(r3)
/* 80110A04 0010D804  D0 03 00 08 */	stfs f0, 8(r3)
/* 80110A08 0010D808  4E 80 00 20 */	blr 

on_tweak_camera__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRC10tweak_info:
/* 80110A0C 0010D80C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80110A10 0010D810  7C 08 02 A6 */	mflr r0
/* 80110A14 0010D814  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80110A18 0010D818  90 01 00 14 */	stw r0, 0x14(r1)
/* 80110A1C 0010D81C  48 00 00 15 */	bl reset_props_camera__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv
/* 80110A20 0010D820  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80110A24 0010D824  7C 08 03 A6 */	mtlr r0
/* 80110A28 0010D828  38 21 00 10 */	addi r1, r1, 0x10
/* 80110A2C 0010D82C  4E 80 00 20 */	blr 

/* reset_props_camera__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv */
reset_props_camera__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv:
/* 80110A30 0010D830  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80110A34 0010D834  7C 08 02 A6 */	mflr r0
/* 80110A38 0010D838  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 80110A3C 0010D83C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80110A40 0010D840  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80110A44 0010D844  7C 7F 1B 78 */	mr r31, r3
/* 80110A48 0010D848  38 64 7A 68 */	addi r3, r4, lbl_80297A68@l
/* 80110A4C 0010D84C  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 80110A50 0010D850  28 03 00 00 */	cmplwi r3, 0
/* 80110A54 0010D854  41 82 00 64 */	beq lbl_80110AB8
/* 80110A58 0010D858  80 83 00 10 */	lwz r4, 0x10(r3)
/* 80110A5C 0010D85C  38 7F 01 64 */	addi r3, r31, 0x164
/* 80110A60 0010D860  38 84 00 58 */	addi r4, r4, 0x58
/* 80110A64 0010D864  48 00 00 69 */	bl __as__Q312bungee_state10hook_asset35_esc__2_class_esc__6_912zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35_esc__2_class_esc__6_912zEntPlayerBungeeState_cpp
/* 80110A68 0010D868  C0 3F 01 78 */	lfs f1, 0x178(r31)
/* 80110A6C 0010D86C  C0 1F 00 A8 */	lfs f0, 0xa8(r31)
/* 80110A70 0010D870  EC 01 00 24 */	fdivs f0, f1, f0
/* 80110A74 0010D874  D0 1F 01 78 */	stfs f0, 0x178(r31)
/* 80110A78 0010D878  C0 3F 01 68 */	lfs f1, 0x168(r31)
/* 80110A7C 0010D87C  C0 02 9E A8 */	lfs f0, lbl_803CE828-_SDA2_BASE_(r2)
/* 80110A80 0010D880  EC 01 00 32 */	fmuls f0, f1, f0
/* 80110A84 0010D884  D0 1F 01 68 */	stfs f0, 0x168(r31)
/* 80110A88 0010D888  C0 3F 01 70 */	lfs f1, 0x170(r31)
/* 80110A8C 0010D88C  C0 02 9E A8 */	lfs f0, lbl_803CE828-_SDA2_BASE_(r2)
/* 80110A90 0010D890  EC 01 00 32 */	fmuls f0, f1, f0
/* 80110A94 0010D894  D0 1F 01 70 */	stfs f0, 0x170(r31)
/* 80110A98 0010D898  C0 3F 01 70 */	lfs f1, 0x170(r31)
/* 80110A9C 0010D89C  C0 1F 01 68 */	lfs f0, 0x168(r31)
/* 80110AA0 0010D8A0  EC 01 00 28 */	fsubs f0, f1, f0
/* 80110AA4 0010D8A4  D0 1F 01 70 */	stfs f0, 0x170(r31)
/* 80110AA8 0010D8A8  C0 22 9E 88 */	lfs f1, lbl_803CE808-_SDA2_BASE_(r2)
/* 80110AAC 0010D8AC  C0 1F 01 7C */	lfs f0, 0x17c(r31)
/* 80110AB0 0010D8B0  EC 01 00 28 */	fsubs f0, f1, f0
/* 80110AB4 0010D8B4  D0 1F 01 B4 */	stfs f0, 0x1b4(r31)
lbl_80110AB8:
/* 80110AB8 0010D8B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80110ABC 0010D8BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80110AC0 0010D8C0  7C 08 03 A6 */	mtlr r0
/* 80110AC4 0010D8C4  38 21 00 10 */	addi r1, r1, 0x10
/* 80110AC8 0010D8C8  4E 80 00 20 */	blr 

/* __as__Q312bungee_state10hook_asset35@class$912zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35@class$912zEntPlayerBungeeState_cpp */
.global __as__Q312bungee_state10hook_asset35_esc__2_class_esc__6_912zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35_esc__2_class_esc__6_912zEntPlayerBungeeState_cpp

__as__Q312bungee_state10hook_asset35_esc__2_class_esc__6_912zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35_esc__2_class_esc__6_912zEntPlayerBungeeState_cpp:
/* 80110ACC 0010D8CC  C0 04 00 00 */	lfs f0, 0(r4)
/* 80110AD0 0010D8D0  C0 24 00 04 */	lfs f1, 4(r4)
/* 80110AD4 0010D8D4  D0 03 00 00 */	stfs f0, 0(r3)
/* 80110AD8 0010D8D8  C0 04 00 08 */	lfs f0, 8(r4)
/* 80110ADC 0010D8DC  D0 23 00 04 */	stfs f1, 4(r3)
/* 80110AE0 0010D8E0  C0 24 00 0C */	lfs f1, 0xc(r4)
/* 80110AE4 0010D8E4  D0 03 00 08 */	stfs f0, 8(r3)
/* 80110AE8 0010D8E8  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 80110AEC 0010D8EC  D0 23 00 0C */	stfs f1, 0xc(r3)
/* 80110AF0 0010D8F0  C0 24 00 14 */	lfs f1, 0x14(r4)
/* 80110AF4 0010D8F4  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 80110AF8 0010D8F8  C0 04 00 18 */	lfs f0, 0x18(r4)
/* 80110AFC 0010D8FC  D0 23 00 14 */	stfs f1, 0x14(r3)
/* 80110B00 0010D900  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 80110B04 0010D904  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 80110B08 0010D908  80 A4 00 20 */	lwz r5, 0x20(r4)
/* 80110B0C 0010D90C  90 03 00 1C */	stw r0, 0x1c(r3)
/* 80110B10 0010D910  80 04 00 24 */	lwz r0, 0x24(r4)
/* 80110B14 0010D914  90 A3 00 20 */	stw r5, 0x20(r3)
/* 80110B18 0010D918  90 03 00 24 */	stw r0, 0x24(r3)
/* 80110B1C 0010D91C  4E 80 00 20 */	blr 

on_tweak_horizontal__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRC10tweak_info:
/* 80110B20 0010D920  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80110B24 0010D924  7C 08 02 A6 */	mflr r0
/* 80110B28 0010D928  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80110B2C 0010D92C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80110B30 0010D930  48 00 00 15 */	bl reset_props_horizontal__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv
/* 80110B34 0010D934  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80110B38 0010D938  7C 08 03 A6 */	mtlr r0
/* 80110B3C 0010D93C  38 21 00 10 */	addi r1, r1, 0x10
/* 80110B40 0010D940  4E 80 00 20 */	blr 

/* reset_props_horizontal__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv */
reset_props_horizontal__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv:
/* 80110B44 0010D944  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80110B48 0010D948  7C 08 02 A6 */	mflr r0
/* 80110B4C 0010D94C  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 80110B50 0010D950  90 01 00 14 */	stw r0, 0x14(r1)
/* 80110B54 0010D954  38 84 7A 68 */	addi r4, r4, lbl_80297A68@l
/* 80110B58 0010D958  80 84 00 3C */	lwz r4, 0x3c(r4)
/* 80110B5C 0010D95C  28 04 00 00 */	cmplwi r4, 0
/* 80110B60 0010D960  41 82 00 14 */	beq lbl_80110B74
/* 80110B64 0010D964  80 84 00 10 */	lwz r4, 0x10(r4)
/* 80110B68 0010D968  38 63 01 60 */	addi r3, r3, 0x160
/* 80110B6C 0010D96C  38 84 00 54 */	addi r4, r4, 0x54
/* 80110B70 0010D970  48 00 00 15 */	bl __as__Q312bungee_state10hook_asset35_esc__2_class_esc__6_911zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35_esc__2_class_esc__6_911zEntPlayerBungeeState_cpp
lbl_80110B74:
/* 80110B74 0010D974  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80110B78 0010D978  7C 08 03 A6 */	mtlr r0
/* 80110B7C 0010D97C  38 21 00 10 */	addi r1, r1, 0x10
/* 80110B80 0010D980  4E 80 00 20 */	blr 

/* __as__Q312bungee_state10hook_asset35@class$911zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35@class$911zEntPlayerBungeeState_cpp */
.global __as__Q312bungee_state10hook_asset35_esc__2_class_esc__6_911zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35_esc__2_class_esc__6_911zEntPlayerBungeeState_cpp

__as__Q312bungee_state10hook_asset35_esc__2_class_esc__6_911zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35_esc__2_class_esc__6_911zEntPlayerBungeeState_cpp:
/* 80110B84 0010D984  C0 04 00 00 */	lfs f0, 0(r4)
/* 80110B88 0010D988  D0 03 00 00 */	stfs f0, 0(r3)
/* 80110B8C 0010D98C  4E 80 00 20 */	blr 

on_tweak_vertical__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRC10tweak_info:
/* 80110B90 0010D990  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80110B94 0010D994  7C 08 02 A6 */	mflr r0
/* 80110B98 0010D998  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80110B9C 0010D99C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80110BA0 0010D9A0  48 00 00 15 */	bl reset_props_vertical__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv
/* 80110BA4 0010D9A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80110BA8 0010D9A8  7C 08 03 A6 */	mtlr r0
/* 80110BAC 0010D9AC  38 21 00 10 */	addi r1, r1, 0x10
/* 80110BB0 0010D9B0  4E 80 00 20 */	blr 

/* reset_props_vertical__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv */
reset_props_vertical__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv:
/* 80110BB4 0010D9B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80110BB8 0010D9B8  7C 08 02 A6 */	mflr r0
/* 80110BBC 0010D9BC  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 80110BC0 0010D9C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80110BC4 0010D9C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80110BC8 0010D9C8  3B E4 7A 68 */	addi r31, r4, lbl_80297A68@l
/* 80110BCC 0010D9CC  93 C1 00 08 */	stw r30, 8(r1)
/* 80110BD0 0010D9D0  7C 7E 1B 78 */	mr r30, r3
/* 80110BD4 0010D9D4  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 80110BD8 0010D9D8  28 03 00 00 */	cmplwi r3, 0
/* 80110BDC 0010D9DC  41 82 01 44 */	beq lbl_80110D20
/* 80110BE0 0010D9E0  80 83 00 10 */	lwz r4, 0x10(r3)
/* 80110BE4 0010D9E4  38 7E 01 48 */	addi r3, r30, 0x148
/* 80110BE8 0010D9E8  38 84 00 3C */	addi r4, r4, 0x3c
/* 80110BEC 0010D9EC  48 00 03 79 */	bl __as__Q312bungee_state10hook_asset35_esc__2_class_esc__6_910zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35_esc__2_class_esc__6_910zEntPlayerBungeeState_cpp
/* 80110BF0 0010D9F0  C0 5E 01 48 */	lfs f2, 0x148(r30)
/* 80110BF4 0010D9F4  C0 02 9E AC */	lfs f0, lbl_803CE82C-_SDA2_BASE_(r2)
/* 80110BF8 0010D9F8  C0 3E 01 4C */	lfs f1, 0x14c(r30)
/* 80110BFC 0010D9FC  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80110C00 0010DA00  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80110C04 0010DA04  EC 01 00 32 */	fmuls f0, f1, f0
/* 80110C08 0010DA08  D0 1E 01 4C */	stfs f0, 0x14c(r30)
/* 80110C0C 0010DA0C  C0 3E 01 50 */	lfs f1, 0x150(r30)
/* 80110C10 0010DA10  C0 1E 01 4C */	lfs f0, 0x14c(r30)
/* 80110C14 0010DA14  EC 01 00 32 */	fmuls f0, f1, f0
/* 80110C18 0010DA18  D0 1E 01 50 */	stfs f0, 0x150(r30)
/* 80110C1C 0010DA1C  C0 3E 01 5C */	lfs f1, 0x15c(r30)
/* 80110C20 0010DA20  C0 42 9E A0 */	lfs f2, lbl_803CE820-_SDA2_BASE_(r2)
/* 80110C24 0010DA24  C0 62 9E 88 */	lfs f3, lbl_803CE808-_SDA2_BASE_(r2)
/* 80110C28 0010DA28  4B EF DD 11 */	bl range_limit_esc__0_f_esc__1___Ffff
/* 80110C2C 0010DA2C  D0 3E 01 5C */	stfs f1, 0x15c(r30)
/* 80110C30 0010DA30  7F C3 F3 78 */	mr r3, r30
/* 80110C34 0010DA34  C0 3E 01 54 */	lfs f1, 0x154(r30)
/* 80110C38 0010DA38  C0 02 9E AC */	lfs f0, lbl_803CE82C-_SDA2_BASE_(r2)
/* 80110C3C 0010DA3C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80110C40 0010DA40  D0 1E 01 54 */	stfs f0, 0x154(r30)
/* 80110C44 0010DA44  C0 3E 01 58 */	lfs f1, 0x158(r30)
/* 80110C48 0010DA48  C0 02 9E AC */	lfs f0, lbl_803CE82C-_SDA2_BASE_(r2)
/* 80110C4C 0010DA4C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80110C50 0010DA50  D0 1E 01 58 */	stfs f0, 0x158(r30)
/* 80110C54 0010DA54  C0 3E 01 54 */	lfs f1, 0x154(r30)
/* 80110C58 0010DA58  C0 5E 01 58 */	lfs f2, 0x158(r30)
/* 80110C5C 0010DA5C  C0 7E 01 4C */	lfs f3, 0x14c(r30)
/* 80110C60 0010DA60  C0 9E 01 5C */	lfs f4, 0x15c(r30)
/* 80110C64 0010DA64  48 00 02 71 */	bl find_spring_min__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFffff
/* 80110C68 0010DA68  D0 3E 01 54 */	stfs f1, 0x154(r30)
/* 80110C6C 0010DA6C  C0 3E 01 58 */	lfs f1, 0x158(r30)
/* 80110C70 0010DA70  C0 1E 01 54 */	lfs f0, 0x154(r30)
/* 80110C74 0010DA74  C0 42 9E 8C */	lfs f2, lbl_803CE80C-_SDA2_BASE_(r2)
/* 80110C78 0010DA78  EC 01 00 2A */	fadds f0, f1, f0
/* 80110C7C 0010DA7C  EC 02 00 32 */	fmuls f0, f2, f0
/* 80110C80 0010DA80  D0 1E 01 98 */	stfs f0, 0x198(r30)
/* 80110C84 0010DA84  C0 3E 01 4C */	lfs f1, 0x14c(r30)
/* 80110C88 0010DA88  C0 1E 01 98 */	lfs f0, 0x198(r30)
/* 80110C8C 0010DA8C  EC 01 00 24 */	fdivs f0, f1, f0
/* 80110C90 0010DA90  D0 1E 01 A0 */	stfs f0, 0x1a0(r30)
/* 80110C94 0010DA94  C0 3E 01 A0 */	lfs f1, 0x1a0(r30)
/* 80110C98 0010DA98  4B EF 9B 65 */	bl xsqrt__Ff
/* 80110C9C 0010DA9C  C0 1E 01 5C */	lfs f0, 0x15c(r30)
/* 80110CA0 0010DAA0  FC 00 00 50 */	fneg f0, f0
/* 80110CA4 0010DAA4  EC 00 00 72 */	fmuls f0, f0, f1
/* 80110CA8 0010DAA8  D0 1E 01 A4 */	stfs f0, 0x1a4(r30)
/* 80110CAC 0010DAAC  C0 1E 01 A4 */	lfs f0, 0x1a4(r30)
/* 80110CB0 0010DAB0  C0 3E 01 A0 */	lfs f1, 0x1a0(r30)
/* 80110CB4 0010DAB4  EC 00 00 32 */	fmuls f0, f0, f0
/* 80110CB8 0010DAB8  EC 21 00 28 */	fsubs f1, f1, f0
/* 80110CBC 0010DABC  4B EF 9B 41 */	bl xsqrt__Ff
/* 80110CC0 0010DAC0  D0 3E 01 A8 */	stfs f1, 0x1a8(r30)
/* 80110CC4 0010DAC4  7F C3 F3 78 */	mr r3, r30
/* 80110CC8 0010DAC8  C0 3E 01 58 */	lfs f1, 0x158(r30)
/* 80110CCC 0010DACC  C0 42 9E A0 */	lfs f2, lbl_803CE820-_SDA2_BASE_(r2)
/* 80110CD0 0010DAD0  C0 7E 01 A0 */	lfs f3, 0x1a0(r30)
/* 80110CD4 0010DAD4  C0 9E 01 4C */	lfs f4, 0x14c(r30)
/* 80110CD8 0010DAD8  C0 BE 01 98 */	lfs f5, 0x198(r30)
/* 80110CDC 0010DADC  48 00 01 79 */	bl spring_energy__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFfffff
/* 80110CE0 0010DAE0  D0 3E 01 9C */	stfs f1, 0x19c(r30)
/* 80110CE4 0010DAE4  7F C3 F3 78 */	mr r3, r30
/* 80110CE8 0010DAE8  C0 3E 01 98 */	lfs f1, 0x198(r30)
/* 80110CEC 0010DAEC  C0 42 9E 88 */	lfs f2, lbl_803CE808-_SDA2_BASE_(r2)
/* 80110CF0 0010DAF0  FC C0 08 90 */	fmr f6, f1
/* 80110CF4 0010DAF4  C0 7E 01 9C */	lfs f3, 0x19c(r30)
/* 80110CF8 0010DAF8  C0 9E 01 A0 */	lfs f4, 0x1a0(r30)
/* 80110CFC 0010DAFC  C0 BE 01 4C */	lfs f5, 0x14c(r30)
/* 80110D00 0010DB00  48 00 00 39 */	bl spring_velocity__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFffffff
/* 80110D04 0010DB04  D0 3E 00 A8 */	stfs f1, 0xa8(r30)
/* 80110D08 0010DB08  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 80110D0C 0010DB0C  C0 1E 00 A8 */	lfs f0, 0xa8(r30)
/* 80110D10 0010DB10  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80110D14 0010DB14  C0 23 00 6C */	lfs f1, 0x6c(r3)
/* 80110D18 0010DB18  EC 01 00 24 */	fdivs f0, f1, f0
/* 80110D1C 0010DB1C  D0 1E 01 78 */	stfs f0, 0x178(r30)
lbl_80110D20:
/* 80110D20 0010DB20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80110D24 0010DB24  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80110D28 0010DB28  83 C1 00 08 */	lwz r30, 8(r1)
/* 80110D2C 0010DB2C  7C 08 03 A6 */	mtlr r0
/* 80110D30 0010DB30  38 21 00 10 */	addi r1, r1, 0x10
/* 80110D34 0010DB34  4E 80 00 20 */	blr 

/* spring_velocity__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFffffff */
spring_velocity__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFffffff:
/* 80110D38 0010DB38  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80110D3C 0010DB3C  7C 08 02 A6 */	mflr r0
/* 80110D40 0010DB40  90 01 00 34 */	stw r0, 0x34(r1)
/* 80110D44 0010DB44  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80110D48 0010DB48  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 80110D4C 0010DB4C  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 80110D50 0010DB50  F3 C1 00 18 */	psq_st f30, 24(r1), 0, qr0
/* 80110D54 0010DB54  FF C0 10 90 */	fmr f30, f2
/* 80110D58 0010DB58  FF E0 18 90 */	fmr f31, f3
/* 80110D5C 0010DB5C  FC 40 20 90 */	fmr f2, f4
/* 80110D60 0010DB60  FC 60 28 90 */	fmr f3, f5
/* 80110D64 0010DB64  FC 80 30 90 */	fmr f4, f6
/* 80110D68 0010DB68  48 00 00 71 */	bl spring_potential_energy__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFffff
/* 80110D6C 0010DB6C  EC 5F 08 28 */	fsubs f2, f31, f1
/* 80110D70 0010DB70  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80110D74 0010DB74  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80110D78 0010DB78  4C 40 13 82 */	cror 2, 0, 2
/* 80110D7C 0010DB7C  40 82 00 08 */	bne lbl_80110D84
/* 80110D80 0010DB80  48 00 00 38 */	b lbl_80110DB8
lbl_80110D84:
/* 80110D84 0010DB84  C0 02 9E B0 */	lfs f0, lbl_803CE830-_SDA2_BASE_(r2)
/* 80110D88 0010DB88  EC 20 00 B2 */	fmuls f1, f0, f2
/* 80110D8C 0010DB8C  4B EF 9A 71 */	bl xsqrt__Ff
/* 80110D90 0010DB90  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80110D94 0010DB94  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80110D98 0010DB98  40 80 00 14 */	bge lbl_80110DAC
/* 80110D9C 0010DB9C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80110DA0 0010DBA0  40 81 00 18 */	ble lbl_80110DB8
/* 80110DA4 0010DBA4  FC 20 08 50 */	fneg f1, f1
/* 80110DA8 0010DBA8  48 00 00 10 */	b lbl_80110DB8
lbl_80110DAC:
/* 80110DAC 0010DBAC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80110DB0 0010DBB0  40 80 00 08 */	bge lbl_80110DB8
/* 80110DB4 0010DBB4  FC 20 08 50 */	fneg f1, f1
lbl_80110DB8:
/* 80110DB8 0010DBB8  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 80110DBC 0010DBBC  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80110DC0 0010DBC0  E3 C1 00 18 */	psq_l f30, 24(r1), 0, qr0
/* 80110DC4 0010DBC4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80110DC8 0010DBC8  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 80110DCC 0010DBCC  7C 08 03 A6 */	mtlr r0
/* 80110DD0 0010DBD0  38 21 00 30 */	addi r1, r1, 0x30
/* 80110DD4 0010DBD4  4E 80 00 20 */	blr 

/* spring_potential_energy__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFffff */
spring_potential_energy__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFffff:
/* 80110DD8 0010DBD8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80110DDC 0010DBDC  7C 08 02 A6 */	mflr r0
/* 80110DE0 0010DBE0  90 01 00 44 */	stw r0, 0x44(r1)
/* 80110DE4 0010DBE4  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80110DE8 0010DBE8  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 80110DEC 0010DBEC  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 80110DF0 0010DBF0  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 80110DF4 0010DBF4  DB A1 00 10 */	stfd f29, 0x10(r1)
/* 80110DF8 0010DBF8  F3 A1 00 18 */	psq_st f29, 24(r1), 0, qr0
/* 80110DFC 0010DBFC  FF A0 08 90 */	fmr f29, f1
/* 80110E00 0010DC00  FF C0 18 90 */	fmr f30, f3
/* 80110E04 0010DC04  FF E0 20 90 */	fmr f31, f4
/* 80110E08 0010DC08  48 00 00 39 */	bl spring_potential_energy__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFff
/* 80110E0C 0010DC0C  C0 02 9E 8C */	lfs f0, lbl_803CE80C-_SDA2_BASE_(r2)
/* 80110E10 0010DC10  EC 00 EF FC */	fnmsubs f0, f0, f31, f29
/* 80110E14 0010DC14  EC 3E 08 3C */	fnmsubs f1, f30, f0, f1
/* 80110E18 0010DC18  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 80110E1C 0010DC1C  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80110E20 0010DC20  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 80110E24 0010DC24  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 80110E28 0010DC28  E3 A1 00 18 */	psq_l f29, 24(r1), 0, qr0
/* 80110E2C 0010DC2C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80110E30 0010DC30  CB A1 00 10 */	lfd f29, 0x10(r1)
/* 80110E34 0010DC34  7C 08 03 A6 */	mtlr r0
/* 80110E38 0010DC38  38 21 00 40 */	addi r1, r1, 0x40
/* 80110E3C 0010DC3C  4E 80 00 20 */	blr 

/* spring_potential_energy__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFff */
spring_potential_energy__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFff:
/* 80110E40 0010DC40  C0 02 9E 8C */	lfs f0, lbl_803CE80C-_SDA2_BASE_(r2)
/* 80110E44 0010DC44  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80110E48 0010DC48  EC 00 00 72 */	fmuls f0, f0, f1
/* 80110E4C 0010DC4C  EC 21 00 32 */	fmuls f1, f1, f0
/* 80110E50 0010DC50  4E 80 00 20 */	blr 

/* spring_energy__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFfffff */
spring_energy__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFfffff:
/* 80110E54 0010DC54  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80110E58 0010DC58  7C 08 02 A6 */	mflr r0
/* 80110E5C 0010DC5C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80110E60 0010DC60  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80110E64 0010DC64  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 80110E68 0010DC68  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 80110E6C 0010DC6C  F3 C1 00 18 */	psq_st f30, 24(r1), 0, qr0
/* 80110E70 0010DC70  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80110E74 0010DC74  FF C0 10 90 */	fmr f30, f2
/* 80110E78 0010DC78  7C 7F 1B 78 */	mr r31, r3
/* 80110E7C 0010DC7C  FC 40 18 90 */	fmr f2, f3
/* 80110E80 0010DC80  FC 60 20 90 */	fmr f3, f4
/* 80110E84 0010DC84  FC 80 28 90 */	fmr f4, f5
/* 80110E88 0010DC88  4B FF FF 51 */	bl spring_potential_energy__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFffff
/* 80110E8C 0010DC8C  FF E0 08 90 */	fmr f31, f1
/* 80110E90 0010DC90  7F E3 FB 78 */	mr r3, r31
/* 80110E94 0010DC94  FC 20 F0 90 */	fmr f1, f30
/* 80110E98 0010DC98  48 00 00 2D */	bl kinetic_energy__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFf
/* 80110E9C 0010DC9C  EC 21 F8 2A */	fadds f1, f1, f31
/* 80110EA0 0010DCA0  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 80110EA4 0010DCA4  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80110EA8 0010DCA8  E3 C1 00 18 */	psq_l f30, 24(r1), 0, qr0
/* 80110EAC 0010DCAC  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 80110EB0 0010DCB0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80110EB4 0010DCB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80110EB8 0010DCB8  7C 08 03 A6 */	mtlr r0
/* 80110EBC 0010DCBC  38 21 00 30 */	addi r1, r1, 0x30
/* 80110EC0 0010DCC0  4E 80 00 20 */	blr 

/* kinetic_energy__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFf */
kinetic_energy__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFf:
/* 80110EC4 0010DCC4  C0 02 9E 8C */	lfs f0, lbl_803CE80C-_SDA2_BASE_(r2)
/* 80110EC8 0010DCC8  EC 00 00 72 */	fmuls f0, f0, f1
/* 80110ECC 0010DCCC  EC 20 00 72 */	fmuls f1, f0, f1
/* 80110ED0 0010DCD0  4E 80 00 20 */	blr 

/* find_spring_min__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFffff */
find_spring_min__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFffff:
/* 80110ED4 0010DCD4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80110ED8 0010DCD8  7C 08 02 A6 */	mflr r0
/* 80110EDC 0010DCDC  90 01 00 44 */	stw r0, 0x44(r1)
/* 80110EE0 0010DCE0  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80110EE4 0010DCE4  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 80110EE8 0010DCE8  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 80110EEC 0010DCEC  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 80110EF0 0010DCF0  DB A1 00 10 */	stfd f29, 0x10(r1)
/* 80110EF4 0010DCF4  F3 A1 00 18 */	psq_st f29, 24(r1), 0, qr0
/* 80110EF8 0010DCF8  FF E0 20 90 */	fmr f31, f4
/* 80110EFC 0010DCFC  C0 02 9E 88 */	lfs f0, lbl_803CE808-_SDA2_BASE_(r2)
/* 80110F00 0010DD00  FF A0 08 90 */	fmr f29, f1
/* 80110F04 0010DD04  FF C0 10 90 */	fmr f30, f2
/* 80110F08 0010DD08  EC 3F 07 FC */	fnmsubs f1, f31, f31, f0
/* 80110F0C 0010DD0C  4B EF 98 F1 */	bl xsqrt__Ff
/* 80110F10 0010DD10  C0 02 9E C0 */	lfs f0, lbl_803CE840-_SDA2_BASE_(r2)
/* 80110F14 0010DD14  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80110F18 0010DD18  EC 20 00 72 */	fmuls f1, f0, f1
/* 80110F1C 0010DD1C  4B EF D8 95 */	bl xexp__Ff
/* 80110F20 0010DD20  C0 02 9E 88 */	lfs f0, lbl_803CE808-_SDA2_BASE_(r2)
/* 80110F24 0010DD24  C0 62 9E B0 */	lfs f3, lbl_803CE830-_SDA2_BASE_(r2)
/* 80110F28 0010DD28  EC 41 00 28 */	fsubs f2, f1, f0
/* 80110F2C 0010DD2C  EC 00 08 2A */	fadds f0, f0, f1
/* 80110F30 0010DD30  EC 3E 00 B2 */	fmuls f1, f30, f2
/* 80110F34 0010DD34  EC 23 0F 7A */	fmadds f1, f3, f29, f1
/* 80110F38 0010DD38  EC 21 00 24 */	fdivs f1, f1, f0
/* 80110F3C 0010DD3C  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 80110F40 0010DD40  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80110F44 0010DD44  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 80110F48 0010DD48  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 80110F4C 0010DD4C  E3 A1 00 18 */	psq_l f29, 24(r1), 0, qr0
/* 80110F50 0010DD50  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80110F54 0010DD54  CB A1 00 10 */	lfd f29, 0x10(r1)
/* 80110F58 0010DD58  7C 08 03 A6 */	mtlr r0
/* 80110F5C 0010DD5C  38 21 00 40 */	addi r1, r1, 0x40
/* 80110F60 0010DD60  4E 80 00 20 */	blr 

/* __as__Q312bungee_state10hook_asset35@class$910zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35@class$910zEntPlayerBungeeState_cpp */
.global __as__Q312bungee_state10hook_asset35_esc__2_class_esc__6_910zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35_esc__2_class_esc__6_910zEntPlayerBungeeState_cpp

__as__Q312bungee_state10hook_asset35_esc__2_class_esc__6_910zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35_esc__2_class_esc__6_910zEntPlayerBungeeState_cpp:
/* 80110F64 0010DD64  C0 24 00 00 */	lfs f1, 0(r4)
/* 80110F68 0010DD68  C0 04 00 04 */	lfs f0, 4(r4)
/* 80110F6C 0010DD6C  D0 23 00 00 */	stfs f1, 0(r3)
/* 80110F70 0010DD70  C0 24 00 08 */	lfs f1, 8(r4)
/* 80110F74 0010DD74  D0 03 00 04 */	stfs f0, 4(r3)
/* 80110F78 0010DD78  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 80110F7C 0010DD7C  D0 23 00 08 */	stfs f1, 8(r3)
/* 80110F80 0010DD80  C0 24 00 10 */	lfs f1, 0x10(r4)
/* 80110F84 0010DD84  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 80110F88 0010DD88  C0 04 00 14 */	lfs f0, 0x14(r4)
/* 80110F8C 0010DD8C  D0 23 00 10 */	stfs f1, 0x10(r3)
/* 80110F90 0010DD90  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 80110F94 0010DD94  4E 80 00 20 */	blr 

check_anim_start__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FP15xAnimTransitionP11xAnimSinglePv:
/* 80110F98 0010DD98  38 60 00 00 */	li r3, 0
/* 80110F9C 0010DD9C  4E 80 00 20 */	blr 

check_anim_hit_to_dive__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FP15xAnimTransitionP11xAnimSinglePv:
/* 80110FA0 0010DDA0  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 80110FA4 0010DDA4  38 60 00 00 */	li r3, 0
/* 80110FA8 0010DDA8  38 A4 7A 68 */	addi r5, r4, lbl_80297A68@l
/* 80110FAC 0010DDAC  80 85 01 98 */	lwz r4, 0x198(r5)
/* 80110FB0 0010DDB0  54 80 07 BD */	rlwinm. r0, r4, 0, 0x1e, 0x1e
/* 80110FB4 0010DDB4  54 84 06 B0 */	rlwinm r4, r4, 0, 0x1a, 0x18
/* 80110FB8 0010DDB8  90 85 01 98 */	stw r4, 0x198(r5)
/* 80110FBC 0010DDBC  41 82 00 10 */	beq lbl_80110FCC
/* 80110FC0 0010DDC0  54 80 06 31 */	rlwinm. r0, r4, 0, 0x18, 0x18
/* 80110FC4 0010DDC4  40 82 00 08 */	bne lbl_80110FCC
/* 80110FC8 0010DDC8  38 60 00 01 */	li r3, 1
lbl_80110FCC:
/* 80110FCC 0010DDCC  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 80110FD0 0010DDD0  4E 80 00 20 */	blr 

check_anim_hit_to_top__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FP15xAnimTransitionP11xAnimSinglePv:
/* 80110FD4 0010DDD4  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 80110FD8 0010DDD8  38 60 00 00 */	li r3, 0
/* 80110FDC 0010DDDC  38 A4 7A 68 */	addi r5, r4, lbl_80297A68@l
/* 80110FE0 0010DDE0  80 85 01 98 */	lwz r4, 0x198(r5)
/* 80110FE4 0010DDE4  54 80 07 39 */	rlwinm. r0, r4, 0, 0x1c, 0x1c
/* 80110FE8 0010DDE8  54 84 06 B0 */	rlwinm r4, r4, 0, 0x1a, 0x18
/* 80110FEC 0010DDEC  90 85 01 98 */	stw r4, 0x198(r5)
/* 80110FF0 0010DDF0  41 82 00 10 */	beq lbl_80111000
/* 80110FF4 0010DDF4  54 80 06 31 */	rlwinm. r0, r4, 0, 0x18, 0x18
/* 80110FF8 0010DDF8  40 82 00 08 */	bne lbl_80111000
/* 80110FFC 0010DDFC  38 60 00 01 */	li r3, 1
lbl_80111000:
/* 80111000 0010DE00  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 80111004 0010DE04  4E 80 00 20 */	blr 

check_anim_hit_to_bottom__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FP15xAnimTransitionP11xAnimSinglePv:
/* 80111008 0010DE08  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 8011100C 0010DE0C  38 60 00 00 */	li r3, 0
/* 80111010 0010DE10  38 A4 7A 68 */	addi r5, r4, lbl_80297A68@l
/* 80111014 0010DE14  80 85 01 98 */	lwz r4, 0x198(r5)
/* 80111018 0010DE18  54 80 06 B5 */	rlwinm. r0, r4, 0, 0x1a, 0x1a
/* 8011101C 0010DE1C  54 84 06 B0 */	rlwinm r4, r4, 0, 0x1a, 0x18
/* 80111020 0010DE20  90 85 01 98 */	stw r4, 0x198(r5)
/* 80111024 0010DE24  41 82 00 10 */	beq lbl_80111034
/* 80111028 0010DE28  54 80 06 31 */	rlwinm. r0, r4, 0, 0x18, 0x18
/* 8011102C 0010DE2C  40 82 00 08 */	bne lbl_80111034
/* 80111030 0010DE30  38 60 00 01 */	li r3, 1
lbl_80111034:
/* 80111034 0010DE34  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 80111038 0010DE38  4E 80 00 20 */	blr 

check_anim_hit_to_cycle__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FP15xAnimTransitionP11xAnimSinglePv:
/* 8011103C 0010DE3C  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 80111040 0010DE40  38 60 00 00 */	li r3, 0
/* 80111044 0010DE44  38 A4 7A 68 */	addi r5, r4, lbl_80297A68@l
/* 80111048 0010DE48  80 05 01 98 */	lwz r0, 0x198(r5)
/* 8011104C 0010DE4C  54 04 06 B0 */	rlwinm r4, r0, 0, 0x1a, 0x18
/* 80111050 0010DE50  70 80 00 2A */	andi. r0, r4, 0x2a
/* 80111054 0010DE54  90 85 01 98 */	stw r4, 0x198(r5)
/* 80111058 0010DE58  40 82 00 10 */	bne lbl_80111068
/* 8011105C 0010DE5C  54 80 06 31 */	rlwinm. r0, r4, 0, 0x18, 0x18
/* 80111060 0010DE60  40 82 00 08 */	bne lbl_80111068
/* 80111064 0010DE64  38 60 00 01 */	li r3, 1
lbl_80111068:
/* 80111068 0010DE68  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8011106C 0010DE6C  4E 80 00 20 */	blr 

check_anim_hit_to_death__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FP15xAnimTransitionP11xAnimSinglePv:
/* 80111070 0010DE70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80111074 0010DE74  7C 08 02 A6 */	mflr r0
/* 80111078 0010DE78  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 8011107C 0010DE7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80111080 0010DE80  38 83 7A 68 */	addi r4, r3, lbl_80297A68@l
/* 80111084 0010DE84  80 64 01 98 */	lwz r3, 0x198(r4)
/* 80111088 0010DE88  54 60 06 31 */	rlwinm. r0, r3, 0, 0x18, 0x18
/* 8011108C 0010DE8C  54 63 06 B0 */	rlwinm r3, r3, 0, 0x1a, 0x18
/* 80111090 0010DE90  90 64 01 98 */	stw r3, 0x198(r4)
/* 80111094 0010DE94  41 82 00 18 */	beq lbl_801110AC
/* 80111098 0010DE98  C0 22 9E 88 */	lfs f1, lbl_803CE808-_SDA2_BASE_(r2)
/* 8011109C 0010DE9C  38 60 00 08 */	li r3, 8
/* 801110A0 0010DEA0  4B FF F2 19 */	bl play_sound__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FQ312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_10sound_enumf
/* 801110A4 0010DEA4  38 60 00 01 */	li r3, 1
/* 801110A8 0010DEA8  48 00 00 08 */	b lbl_801110B0
lbl_801110AC:
/* 801110AC 0010DEAC  38 60 00 00 */	li r3, 0
lbl_801110B0:
/* 801110B0 0010DEB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801110B4 0010DEB4  7C 08 03 A6 */	mtlr r0
/* 801110B8 0010DEB8  38 21 00 10 */	addi r1, r1, 0x10
/* 801110BC 0010DEBC  4E 80 00 20 */	blr 

/* find_nearest_hook__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FRC5xVec3 */
find_nearest_hook__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FRC5xVec3:
/* 801110C0 0010DEC0  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 801110C4 0010DEC4  7C 08 02 A6 */	mflr r0
/* 801110C8 0010DEC8  90 01 00 74 */	stw r0, 0x74(r1)
/* 801110CC 0010DECC  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 801110D0 0010DED0  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 801110D4 0010DED4  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 801110D8 0010DED8  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 801110DC 0010DEDC  BF 61 00 3C */	stmw r27, 0x3c(r1)
/* 801110E0 0010DEE0  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 801110E4 0010DEE4  C3 E2 9E C4 */	lfs f31, lbl_803CE844-_SDA2_BASE_(r2)
/* 801110E8 0010DEE8  3B E4 7A 68 */	addi r31, r4, lbl_80297A68@l
/* 801110EC 0010DEEC  7C 7B 1B 78 */	mr r27, r3
/* 801110F0 0010DEF0  7F FE FB 78 */	mr r30, r31
/* 801110F4 0010DEF4  3B A0 FF FF */	li r29, -1
/* 801110F8 0010DEF8  3B 80 00 00 */	li r28, 0
/* 801110FC 0010DEFC  48 00 00 88 */	b lbl_80111184
lbl_80111100:
/* 80111100 0010DF00  80 7E 00 40 */	lwz r3, 0x40(r30)
/* 80111104 0010DF04  80 83 00 10 */	lwz r4, 0x10(r3)
/* 80111108 0010DF08  80 63 00 14 */	lwz r3, 0x14(r3)
/* 8011110C 0010DF0C  C3 C4 00 20 */	lfs f30, 0x20(r4)
/* 80111110 0010DF10  4B F0 A6 F9 */	bl xEntGetPos__FPC4xEnt
/* 80111114 0010DF14  80 BE 00 40 */	lwz r5, 0x40(r30)
/* 80111118 0010DF18  7C 64 1B 78 */	mr r4, r3
/* 8011111C 0010DF1C  38 61 00 08 */	addi r3, r1, 8
/* 80111120 0010DF20  80 A5 00 10 */	lwz r5, 0x10(r5)
/* 80111124 0010DF24  38 A5 00 14 */	addi r5, r5, 0x14
/* 80111128 0010DF28  4B F0 42 B9 */	bl __pl__5xVec3CFRC5xVec3
/* 8011112C 0010DF2C  7F 65 DB 78 */	mr r5, r27
/* 80111130 0010DF30  38 61 00 14 */	addi r3, r1, 0x14
/* 80111134 0010DF34  38 81 00 08 */	addi r4, r1, 8
/* 80111138 0010DF38  4B EF A0 95 */	bl __mi__5xVec3CFRC5xVec3
/* 8011113C 0010DF3C  80 A1 00 14 */	lwz r5, 0x14(r1)
/* 80111140 0010DF40  38 61 00 20 */	addi r3, r1, 0x20
/* 80111144 0010DF44  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80111148 0010DF48  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8011114C 0010DF4C  90 A1 00 20 */	stw r5, 0x20(r1)
/* 80111150 0010DF50  90 81 00 24 */	stw r4, 0x24(r1)
/* 80111154 0010DF54  90 01 00 28 */	stw r0, 0x28(r1)
/* 80111158 0010DF58  4B EF 9F A5 */	bl length2__5xVec3CFv
/* 8011115C 0010DF5C  EC 1E 07 B2 */	fmuls f0, f30, f30
/* 80111160 0010DF60  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111164 0010DF64  4C 40 13 82 */	cror 2, 0, 2
/* 80111168 0010DF68  40 82 00 14 */	bne lbl_8011117C
/* 8011116C 0010DF6C  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 80111170 0010DF70  40 80 00 0C */	bge lbl_8011117C
/* 80111174 0010DF74  7F 9D E3 78 */	mr r29, r28
/* 80111178 0010DF78  FF E0 08 90 */	fmr f31, f1
lbl_8011117C:
/* 8011117C 0010DF7C  3B DE 00 04 */	addi r30, r30, 4
/* 80111180 0010DF80  3B 9C 00 01 */	addi r28, r28, 1
lbl_80111184:
/* 80111184 0010DF84  80 1F 01 60 */	lwz r0, 0x160(r31)
/* 80111188 0010DF88  7C 1C 00 00 */	cmpw r28, r0
/* 8011118C 0010DF8C  41 80 FF 74 */	blt lbl_80111100
/* 80111190 0010DF90  7F A3 EB 78 */	mr r3, r29
/* 80111194 0010DF94  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 80111198 0010DF98  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8011119C 0010DF9C  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 801111A0 0010DFA0  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 801111A4 0010DFA4  BB 61 00 3C */	lmw r27, 0x3c(r1)
/* 801111A8 0010DFA8  80 01 00 74 */	lwz r0, 0x74(r1)
/* 801111AC 0010DFAC  7C 08 03 A6 */	mtlr r0
/* 801111B0 0010DFB0  38 21 00 70 */	addi r1, r1, 0x70
/* 801111B4 0010DFB4  4E 80 00 20 */	blr 

/* init_sounds__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv */
init_sounds__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv:
/* 801111B8 0010DFB8  4E 80 00 20 */	blr 

/* get_hook_model__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv */
get_hook_model__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv:
/* 801111BC 0010DFBC  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 801111C0 0010DFC0  38 63 7A 68 */	addi r3, r3, lbl_80297A68@l
/* 801111C4 0010DFC4  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 801111C8 0010DFC8  28 03 00 00 */	cmplwi r3, 0
/* 801111CC 0010DFCC  41 82 00 10 */	beq lbl_801111DC
/* 801111D0 0010DFD0  80 63 00 14 */	lwz r3, 0x14(r3)
/* 801111D4 0010DFD4  28 03 00 00 */	cmplwi r3, 0
/* 801111D8 0010DFD8  40 82 00 0C */	bne lbl_801111E4
lbl_801111DC:
/* 801111DC 0010DFDC  38 60 00 00 */	li r3, 0
/* 801111E0 0010DFE0  4E 80 00 20 */	blr 
lbl_801111E4:
/* 801111E4 0010DFE4  80 63 00 24 */	lwz r3, 0x24(r3)
/* 801111E8 0010DFE8  4E 80 00 20 */	blr 

/* fade_hook_reset__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv */
fade_hook_reset__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv:
/* 801111EC 0010DFEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801111F0 0010DFF0  7C 08 02 A6 */	mflr r0
/* 801111F4 0010DFF4  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 801111F8 0010DFF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801111FC 0010DFFC  38 83 7A 68 */	addi r4, r3, lbl_80297A68@l
/* 80111200 0010E000  80 64 00 00 */	lwz r3, 0(r4)
/* 80111204 0010E004  54 60 06 75 */	rlwinm. r0, r3, 0, 0x19, 0x1a
/* 80111208 0010E008  41 82 00 38 */	beq lbl_80111240
/* 8011120C 0010E00C  54 60 06 F0 */	rlwinm r0, r3, 0, 0x1b, 0x18
/* 80111210 0010E010  90 04 00 00 */	stw r0, 0(r4)
/* 80111214 0010E014  4B FF FF A9 */	bl get_hook_model__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv
/* 80111218 0010E018  28 03 00 00 */	cmplwi r3, 0
/* 8011121C 0010E01C  41 82 00 24 */	beq lbl_80111240
/* 80111220 0010E020  C0 02 9E 88 */	lfs f0, lbl_803CE808-_SDA2_BASE_(r2)
/* 80111224 0010E024  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 80111228 0010E028  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 8011122C 0010E02C  70 00 BF FF */	andi. r0, r0, 0xbfff
/* 80111230 0010E030  B0 03 00 44 */	sth r0, 0x44(r3)
/* 80111234 0010E034  80 03 00 14 */	lwz r0, 0x14(r3)
/* 80111238 0010E038  54 00 07 32 */	rlwinm r0, r0, 0, 0x1c, 0x19
/* 8011123C 0010E03C  90 03 00 14 */	stw r0, 0x14(r3)
lbl_80111240:
/* 80111240 0010E040  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80111244 0010E044  7C 08 03 A6 */	mtlr r0
/* 80111248 0010E048  38 21 00 10 */	addi r1, r1, 0x10
/* 8011124C 0010E04C  4E 80 00 20 */	blr 

/* fade_hook_out__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv */
fade_hook_out__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv:
/* 80111250 0010E050  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80111254 0010E054  7C 08 02 A6 */	mflr r0
/* 80111258 0010E058  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 8011125C 0010E05C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80111260 0010E060  38 83 7A 68 */	addi r4, r3, lbl_80297A68@l
/* 80111264 0010E064  80 64 00 00 */	lwz r3, 0(r4)
/* 80111268 0010E068  54 60 06 73 */	rlwinm. r0, r3, 0, 0x19, 0x19
/* 8011126C 0010E06C  40 82 00 44 */	bne lbl_801112B0
/* 80111270 0010E070  54 60 06 F0 */	rlwinm r0, r3, 0, 0x1b, 0x18
/* 80111274 0010E074  90 04 00 00 */	stw r0, 0(r4)
/* 80111278 0010E078  4B FF FF 45 */	bl get_hook_model__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv
/* 8011127C 0010E07C  28 03 00 00 */	cmplwi r3, 0
/* 80111280 0010E080  41 82 00 30 */	beq lbl_801112B0
/* 80111284 0010E084  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 80111288 0010E088  3C 80 80 29 */	lis r4, lbl_80290000@ha
/* 8011128C 0010E08C  60 00 40 00 */	ori r0, r0, 0x4000
/* 80111290 0010E090  B0 03 00 44 */	sth r0, 0x44(r3)
/* 80111294 0010E094  80 03 00 14 */	lwz r0, 0x14(r3)
/* 80111298 0010E098  54 00 07 32 */	rlwinm r0, r0, 0, 0x1c, 0x19
/* 8011129C 0010E09C  60 00 00 30 */	ori r0, r0, 0x30
/* 801112A0 0010E0A0  90 03 00 14 */	stw r0, 0x14(r3)
/* 801112A4 0010E0A4  84 04 7A 68 */	lwzu r0, 0x7a68(r4)
/* 801112A8 0010E0A8  60 00 00 40 */	ori r0, r0, 0x40
/* 801112AC 0010E0AC  90 04 00 00 */	stw r0, lbl_80290000@l(r4)
lbl_801112B0:
/* 801112B0 0010E0B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801112B4 0010E0B4  7C 08 03 A6 */	mtlr r0
/* 801112B8 0010E0B8  38 21 00 10 */	addi r1, r1, 0x10
/* 801112BC 0010E0BC  4E 80 00 20 */	blr 

/* fade_hook_in__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv */
fade_hook_in__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv:
/* 801112C0 0010E0C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801112C4 0010E0C4  7C 08 02 A6 */	mflr r0
/* 801112C8 0010E0C8  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 801112CC 0010E0CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801112D0 0010E0D0  38 83 7A 68 */	addi r4, r3, lbl_80297A68@l
/* 801112D4 0010E0D4  80 64 00 00 */	lwz r3, 0(r4)
/* 801112D8 0010E0D8  54 60 06 B5 */	rlwinm. r0, r3, 0, 0x1a, 0x1a
/* 801112DC 0010E0DC  40 82 00 44 */	bne lbl_80111320
/* 801112E0 0010E0E0  54 60 06 F0 */	rlwinm r0, r3, 0, 0x1b, 0x18
/* 801112E4 0010E0E4  90 04 00 00 */	stw r0, 0(r4)
/* 801112E8 0010E0E8  4B FF FE D5 */	bl get_hook_model__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv
/* 801112EC 0010E0EC  28 03 00 00 */	cmplwi r3, 0
/* 801112F0 0010E0F0  41 82 00 30 */	beq lbl_80111320
/* 801112F4 0010E0F4  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 801112F8 0010E0F8  3C 80 80 29 */	lis r4, lbl_80290000@ha
/* 801112FC 0010E0FC  60 00 40 00 */	ori r0, r0, 0x4000
/* 80111300 0010E100  B0 03 00 44 */	sth r0, 0x44(r3)
/* 80111304 0010E104  80 03 00 14 */	lwz r0, 0x14(r3)
/* 80111308 0010E108  54 00 07 32 */	rlwinm r0, r0, 0, 0x1c, 0x19
/* 8011130C 0010E10C  60 00 00 30 */	ori r0, r0, 0x30
/* 80111310 0010E110  90 03 00 14 */	stw r0, 0x14(r3)
/* 80111314 0010E114  84 04 7A 68 */	lwzu r0, 0x7a68(r4)
/* 80111318 0010E118  60 00 00 20 */	ori r0, r0, 0x20
/* 8011131C 0010E11C  90 04 00 00 */	stw r0, lbl_80290000@l(r4)
lbl_80111320:
/* 80111320 0010E120  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80111324 0010E124  7C 08 03 A6 */	mtlr r0
/* 80111328 0010E128  38 21 00 10 */	addi r1, r1, 0x10
/* 8011132C 0010E12C  4E 80 00 20 */	blr 

/* fade_hook_update__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Ff */
fade_hook_update__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Ff:
/* 80111330 0010E130  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80111334 0010E134  7C 08 02 A6 */	mflr r0
/* 80111338 0010E138  90 01 00 24 */	stw r0, 0x24(r1)
/* 8011133C 0010E13C  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80111340 0010E140  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 80111344 0010E144  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 80111348 0010E148  FF E0 08 90 */	fmr f31, f1
/* 8011134C 0010E14C  80 03 7A 68 */	lwz r0, lbl_80297A68@l(r3)
/* 80111350 0010E150  54 00 06 75 */	rlwinm. r0, r0, 0, 0x19, 0x1a
/* 80111354 0010E154  41 82 00 B8 */	beq lbl_8011140C
/* 80111358 0010E158  4B FF FE 65 */	bl get_hook_model__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv
/* 8011135C 0010E15C  28 03 00 00 */	cmplwi r3, 0
/* 80111360 0010E160  41 82 00 AC */	beq lbl_8011140C
/* 80111364 0010E164  3C A0 80 31 */	lis r5, lbl_80313788@ha
/* 80111368 0010E168  3C 80 80 29 */	lis r4, 0x8029
/* 8011136C 0010E16C  38 A5 37 88 */	addi r5, r5, lbl_80313788@l
/* 80111370 0010E170  84 04 7A 68 */	lwzu r0, 0x7a68(r4)
/* 80111374 0010E174  C0 22 9E 88 */	lfs f1, lbl_803CE808-_SDA2_BASE_(r2)
/* 80111378 0010E178  C0 05 00 28 */	lfs f0, 0x28(r5)
/* 8011137C 0010E17C  54 00 06 73 */	rlwinm. r0, r0, 0, 0x19, 0x19
/* 80111380 0010E180  EC 21 00 28 */	fsubs f1, f1, f0
/* 80111384 0010E184  C0 05 00 2C */	lfs f0, 0x2c(r5)
/* 80111388 0010E188  EC 21 00 24 */	fdivs f1, f1, f0
/* 8011138C 0010E18C  41 82 00 38 */	beq lbl_801113C4
/* 80111390 0010E190  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 80111394 0010E194  EC 01 07 FC */	fnmsubs f0, f1, f31, f0
/* 80111398 0010E198  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 8011139C 0010E19C  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 801113A0 0010E1A0  C0 25 00 28 */	lfs f1, 0x28(r5)
/* 801113A4 0010E1A4  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 801113A8 0010E1A8  4C 40 13 82 */	cror 2, 0, 2
/* 801113AC 0010E1AC  40 82 00 60 */	bne lbl_8011140C
/* 801113B0 0010E1B0  D0 23 00 24 */	stfs f1, 0x24(r3)
/* 801113B4 0010E1B4  80 04 00 00 */	lwz r0, 0(r4)
/* 801113B8 0010E1B8  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 801113BC 0010E1BC  90 04 00 00 */	stw r0, 0(r4)
/* 801113C0 0010E1C0  48 00 00 4C */	b lbl_8011140C
lbl_801113C4:
/* 801113C4 0010E1C4  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 801113C8 0010E1C8  EC 01 07 FA */	fmadds f0, f1, f31, f0
/* 801113CC 0010E1CC  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 801113D0 0010E1D0  C0 23 00 24 */	lfs f1, 0x24(r3)
/* 801113D4 0010E1D4  C0 02 9E 88 */	lfs f0, lbl_803CE808-_SDA2_BASE_(r2)
/* 801113D8 0010E1D8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801113DC 0010E1DC  4C 41 13 82 */	cror 2, 1, 2
/* 801113E0 0010E1E0  40 82 00 2C */	bne lbl_8011140C
/* 801113E4 0010E1E4  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 801113E8 0010E1E8  80 04 00 00 */	lwz r0, 0(r4)
/* 801113EC 0010E1EC  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 801113F0 0010E1F0  90 04 00 00 */	stw r0, 0(r4)
/* 801113F4 0010E1F4  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 801113F8 0010E1F8  70 00 BF FF */	andi. r0, r0, 0xbfff
/* 801113FC 0010E1FC  B0 03 00 44 */	sth r0, 0x44(r3)
/* 80111400 0010E200  80 03 00 14 */	lwz r0, 0x14(r3)
/* 80111404 0010E204  54 00 07 32 */	rlwinm r0, r0, 0, 0x1c, 0x19
/* 80111408 0010E208  90 03 00 14 */	stw r0, 0x14(r3)
lbl_8011140C:
/* 8011140C 0010E20C  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 80111410 0010E210  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80111414 0010E214  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80111418 0010E218  7C 08 03 A6 */	mtlr r0
/* 8011141C 0010E21C  38 21 00 20 */	addi r1, r1, 0x20
/* 80111420 0010E220  4E 80 00 20 */	blr 

/* start__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv */
start__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv:
/* 80111424 0010E224  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80111428 0010E228  7C 08 02 A6 */	mflr r0
/* 8011142C 0010E22C  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 80111430 0010E230  90 01 00 24 */	stw r0, 0x24(r1)
/* 80111434 0010E234  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80111438 0010E238  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8011143C 0010E23C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80111440 0010E240  3B A3 7A 68 */	addi r29, r3, lbl_80297A68@l
/* 80111444 0010E244  93 81 00 10 */	stw r28, 0x10(r1)
/* 80111448 0010E248  80 1D 00 00 */	lwz r0, 0(r29)
/* 8011144C 0010E24C  54 00 07 7E */	clrlwi r0, r0, 0x1d
/* 80111450 0010E250  2C 00 00 03 */	cmpwi r0, 3
/* 80111454 0010E254  40 82 01 B8 */	bne lbl_8011160C
/* 80111458 0010E258  3C 60 80 3C */	lis r3, globals@ha
/* 8011145C 0010E25C  80 1D 00 3C */	lwz r0, 0x3c(r29)
/* 80111460 0010E260  3B C3 05 58 */	addi r30, r3, globals@l
/* 80111464 0010E264  3B E0 00 00 */	li r31, 0
/* 80111468 0010E268  80 7E 07 04 */	lwz r3, 0x704(r30)
/* 8011146C 0010E26C  28 00 00 00 */	cmplwi r0, 0
/* 80111470 0010E270  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80111474 0010E274  80 63 00 08 */	lwz r3, 8(r3)
/* 80111478 0010E278  80 63 00 04 */	lwz r3, 4(r3)
/* 8011147C 0010E27C  83 83 00 04 */	lwz r28, 4(r3)
/* 80111480 0010E280  40 82 00 FC */	bne lbl_8011157C
/* 80111484 0010E284  80 7E 09 C4 */	lwz r3, 0x9c4(r30)
/* 80111488 0010E288  80 03 00 00 */	lwz r0, 0(r3)
/* 8011148C 0010E28C  2C 00 00 00 */	cmpwi r0, 0
/* 80111490 0010E290  40 82 00 EC */	bne lbl_8011157C
/* 80111494 0010E294  3C 80 80 27 */	lis r4, lbl_8026A688@ha
/* 80111498 0010E298  7F 83 E3 78 */	mr r3, r28
/* 8011149C 0010E29C  38 84 A6 88 */	addi r4, r4, lbl_8026A688@l
/* 801114A0 0010E2A0  38 84 00 42 */	addi r4, r4, 0x42
/* 801114A4 0010E2A4  48 0D 60 79 */	bl strcmp
/* 801114A8 0010E2A8  2C 03 00 00 */	cmpwi r3, 0
/* 801114AC 0010E2AC  40 82 00 AC */	bne lbl_80111558
/* 801114B0 0010E2B0  3C 80 80 27 */	lis r4, lbl_8026A688@ha
/* 801114B4 0010E2B4  7F 83 E3 78 */	mr r3, r28
/* 801114B8 0010E2B8  38 84 A6 88 */	addi r4, r4, lbl_8026A688@l
/* 801114BC 0010E2BC  38 84 00 4E */	addi r4, r4, 0x4e
/* 801114C0 0010E2C0  48 0D 60 5D */	bl strcmp
/* 801114C4 0010E2C4  2C 03 00 00 */	cmpwi r3, 0
/* 801114C8 0010E2C8  40 82 00 90 */	bne lbl_80111558
/* 801114CC 0010E2CC  3C 80 80 27 */	lis r4, lbl_8026A688@ha
/* 801114D0 0010E2D0  7F 83 E3 78 */	mr r3, r28
/* 801114D4 0010E2D4  38 84 A6 88 */	addi r4, r4, lbl_8026A688@l
/* 801114D8 0010E2D8  38 84 00 59 */	addi r4, r4, 0x59
/* 801114DC 0010E2DC  48 0D 60 41 */	bl strcmp
/* 801114E0 0010E2E0  2C 03 00 00 */	cmpwi r3, 0
/* 801114E4 0010E2E4  40 82 00 74 */	bne lbl_80111558
/* 801114E8 0010E2E8  3C 80 80 27 */	lis r4, lbl_8026A688@ha
/* 801114EC 0010E2EC  7F 83 E3 78 */	mr r3, r28
/* 801114F0 0010E2F0  38 84 A6 88 */	addi r4, r4, lbl_8026A688@l
/* 801114F4 0010E2F4  38 84 00 64 */	addi r4, r4, 0x64
/* 801114F8 0010E2F8  48 0D 60 25 */	bl strcmp
/* 801114FC 0010E2FC  2C 03 00 00 */	cmpwi r3, 0
/* 80111500 0010E300  40 82 00 58 */	bne lbl_80111558
/* 80111504 0010E304  3C 80 80 27 */	lis r4, lbl_8026A688@ha
/* 80111508 0010E308  7F 83 E3 78 */	mr r3, r28
/* 8011150C 0010E30C  38 84 A6 88 */	addi r4, r4, lbl_8026A688@l
/* 80111510 0010E310  38 84 00 71 */	addi r4, r4, 0x71
/* 80111514 0010E314  48 0D 60 09 */	bl strcmp
/* 80111518 0010E318  2C 03 00 00 */	cmpwi r3, 0
/* 8011151C 0010E31C  40 82 00 3C */	bne lbl_80111558
/* 80111520 0010E320  3C 80 80 27 */	lis r4, lbl_8026A688@ha
/* 80111524 0010E324  7F 83 E3 78 */	mr r3, r28
/* 80111528 0010E328  38 84 A6 88 */	addi r4, r4, lbl_8026A688@l
/* 8011152C 0010E32C  38 84 00 7D */	addi r4, r4, 0x7d
/* 80111530 0010E330  48 0D 5F ED */	bl strcmp
/* 80111534 0010E334  2C 03 00 00 */	cmpwi r3, 0
/* 80111538 0010E338  40 82 00 20 */	bne lbl_80111558
/* 8011153C 0010E33C  3C 80 80 27 */	lis r4, lbl_8026A688@ha
/* 80111540 0010E340  7F 83 E3 78 */	mr r3, r28
/* 80111544 0010E344  38 84 A6 88 */	addi r4, r4, lbl_8026A688@l
/* 80111548 0010E348  38 84 00 84 */	addi r4, r4, 0x84
/* 8011154C 0010E34C  48 0D 5F D1 */	bl strcmp
/* 80111550 0010E350  2C 03 00 00 */	cmpwi r3, 0
/* 80111554 0010E354  41 82 00 28 */	beq lbl_8011157C
lbl_80111558:
/* 80111558 0010E358  3C 60 80 3C */	lis r3, globals@ha
/* 8011155C 0010E35C  38 63 05 58 */	addi r3, r3, globals@l
/* 80111560 0010E360  80 03 1A FC */	lwz r0, 0x1afc(r3)
/* 80111564 0010E364  2C 00 00 00 */	cmpwi r0, 0
/* 80111568 0010E368  40 82 00 14 */	bne lbl_8011157C
/* 8011156C 0010E36C  80 03 17 88 */	lwz r0, 0x1788(r3)
/* 80111570 0010E370  54 00 04 A1 */	rlwinm. r0, r0, 0, 0x12, 0x10
/* 80111574 0010E374  40 82 00 08 */	bne lbl_8011157C
/* 80111578 0010E378  3B E0 00 01 */	li r31, 1
lbl_8011157C:
/* 8011157C 0010E37C  38 60 00 00 */	li r3, 0
/* 80111580 0010E380  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80111584 0010E384  90 7D 00 3C */	stw r3, 0x3c(r29)
/* 80111588 0010E388  41 82 00 3C */	beq lbl_801115C4
/* 8011158C 0010E38C  80 7E 07 28 */	lwz r3, 0x728(r30)
/* 80111590 0010E390  38 63 00 30 */	addi r3, r3, 0x30
/* 80111594 0010E394  4B FF FB 2D */	bl find_nearest_hook__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FRC5xVec3
/* 80111598 0010E398  2C 03 00 00 */	cmpwi r3, 0
/* 8011159C 0010E39C  41 80 00 28 */	blt lbl_801115C4
/* 801115A0 0010E3A0  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 801115A4 0010E3A4  54 60 10 3A */	slwi r0, r3, 2
/* 801115A8 0010E3A8  38 64 7A 68 */	addi r3, r4, lbl_80297A68@l
/* 801115AC 0010E3AC  7C 63 02 14 */	add r3, r3, r0
/* 801115B0 0010E3B0  80 83 00 40 */	lwz r4, 0x40(r3)
/* 801115B4 0010E3B4  90 9D 00 3C */	stw r4, 0x3c(r29)
/* 801115B8 0010E3B8  80 63 00 40 */	lwz r3, 0x40(r3)
/* 801115BC 0010E3BC  80 03 00 14 */	lwz r0, 0x14(r3)
/* 801115C0 0010E3C0  90 04 00 14 */	stw r0, 0x14(r4)
lbl_801115C4:
/* 801115C4 0010E3C4  80 1D 00 3C */	lwz r0, 0x3c(r29)
/* 801115C8 0010E3C8  28 00 00 00 */	cmplwi r0, 0
/* 801115CC 0010E3CC  41 82 00 40 */	beq lbl_8011160C
/* 801115D0 0010E3D0  38 60 40 00 */	li r3, 0x4000
/* 801115D4 0010E3D4  4B F5 4F 2D */	bl zEntPlayerControlOn__F13zControlOwner
/* 801115D8 0010E3D8  4B FF FC 79 */	bl fade_hook_out__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv
/* 801115DC 0010E3DC  4B FF FB DD */	bl init_sounds__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv
/* 801115E0 0010E3E0  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 801115E4 0010E3E4  38 83 7A 68 */	addi r4, r3, lbl_80297A68@l
/* 801115E8 0010E3E8  80 04 00 00 */	lwz r0, 0(r4)
/* 801115EC 0010E3EC  80 64 00 08 */	lwz r3, 8(r4)
/* 801115F0 0010E3F0  60 00 00 04 */	ori r0, r0, 4
/* 801115F4 0010E3F4  90 04 00 00 */	stw r0, 0(r4)
/* 801115F8 0010E3F8  90 64 00 04 */	stw r3, 4(r4)
/* 801115FC 0010E3FC  81 83 00 04 */	lwz r12, 4(r3)
/* 80111600 0010E400  81 8C 00 08 */	lwz r12, 8(r12)
/* 80111604 0010E404  7D 89 03 A6 */	mtctr r12
/* 80111608 0010E408  4E 80 04 21 */	bctrl 
lbl_8011160C:
/* 8011160C 0010E40C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80111610 0010E410  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80111614 0010E414  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80111618 0010E418  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8011161C 0010E41C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80111620 0010E420  7C 08 03 A6 */	mtlr r0
/* 80111624 0010E424  38 21 00 20 */	addi r1, r1, 0x20
/* 80111628 0010E428  4E 80 00 20 */	blr 

start__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_10state_typeFv:
/* 8011162C 0010E42C  4E 80 00 20 */	blr 

/* cache_hook__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FRQ212bungee_state9hook_type */
cache_hook__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FRQ212bungee_state9hook_type:
/* 80111630 0010E430  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 80111634 0010E434  38 A4 7A 68 */	addi r5, r4, lbl_80297A68@l
/* 80111638 0010E438  80 05 01 60 */	lwz r0, 0x160(r5)
/* 8011163C 0010E43C  54 00 10 3A */	slwi r0, r0, 2
/* 80111640 0010E440  7C 85 02 14 */	add r4, r5, r0
/* 80111644 0010E444  90 64 00 40 */	stw r3, 0x40(r4)
/* 80111648 0010E448  80 65 01 60 */	lwz r3, 0x160(r5)
/* 8011164C 0010E44C  38 03 00 01 */	addi r0, r3, 1
/* 80111650 0010E450  90 05 01 60 */	stw r0, 0x160(r5)
/* 80111654 0010E454  4E 80 00 20 */	blr 

/* cache_drop__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FRCQ212bungee_state10drop_assetUi */
cache_drop__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FRCQ212bungee_state10drop_assetUi:
/* 80111658 0010E458  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8011165C 0010E45C  7C 08 02 A6 */	mflr r0
/* 80111660 0010E460  90 01 00 24 */	stw r0, 0x24(r1)
/* 80111664 0010E464  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80111668 0010E468  7C 7F 1B 78 */	mr r31, r3
/* 8011166C 0010E46C  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80111670 0010E470  90 81 00 08 */	stw r4, 8(r1)
/* 80111674 0010E474  38 81 00 08 */	addi r4, r1, 8
/* 80111678 0010E478  4B F3 A0 95 */	bl xSTFindAsset__FUiPUi
/* 8011167C 0010E47C  28 03 00 00 */	cmplwi r3, 0
/* 80111680 0010E480  41 82 00 44 */	beq lbl_801116C4
/* 80111684 0010E484  80 01 00 08 */	lwz r0, 8(r1)
/* 80111688 0010E488  28 00 00 0C */	cmplwi r0, 0xc
/* 8011168C 0010E48C  40 82 00 38 */	bne lbl_801116C4
/* 80111690 0010E490  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 80111694 0010E494  38 A4 7A 68 */	addi r5, r4, lbl_80297A68@l
/* 80111698 0010E498  80 05 01 64 */	lwz r0, 0x164(r5)
/* 8011169C 0010E49C  54 00 10 3A */	slwi r0, r0, 2
/* 801116A0 0010E4A0  7C 85 02 14 */	add r4, r5, r0
/* 801116A4 0010E4A4  93 E4 00 60 */	stw r31, 0x60(r4)
/* 801116A8 0010E4A8  80 05 01 64 */	lwz r0, 0x164(r5)
/* 801116AC 0010E4AC  54 00 10 3A */	slwi r0, r0, 2
/* 801116B0 0010E4B0  7C 85 02 14 */	add r4, r5, r0
/* 801116B4 0010E4B4  90 64 00 E0 */	stw r3, 0xe0(r4)
/* 801116B8 0010E4B8  80 65 01 64 */	lwz r3, 0x164(r5)
/* 801116BC 0010E4BC  38 03 00 01 */	addi r0, r3, 1
/* 801116C0 0010E4C0  90 05 01 64 */	stw r0, 0x164(r5)
lbl_801116C4:
/* 801116C4 0010E4C4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801116C8 0010E4C8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801116CC 0010E4CC  7C 08 03 A6 */	mtlr r0
/* 801116D0 0010E4D0  38 21 00 20 */	addi r1, r1, 0x20
/* 801116D4 0010E4D4  4E 80 00 20 */	blr 

/* init_cache__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv */
init_cache__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv:
/* 801116D8 0010E4D8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801116DC 0010E4DC  7C 08 02 A6 */	mflr r0
/* 801116E0 0010E4E0  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 801116E4 0010E4E4  3C 60 80 3C */	lis r3, globals@ha
/* 801116E8 0010E4E8  90 01 00 34 */	stw r0, 0x34(r1)
/* 801116EC 0010E4EC  38 63 05 58 */	addi r3, r3, globals@l
/* 801116F0 0010E4F0  38 00 00 00 */	li r0, 0
/* 801116F4 0010E4F4  38 84 7A 68 */	addi r4, r4, lbl_80297A68@l
/* 801116F8 0010E4F8  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 801116FC 0010E4FC  80 63 1F C0 */	lwz r3, 0x1fc0(r3)
/* 80111700 0010E500  90 04 01 60 */	stw r0, 0x160(r4)
/* 80111704 0010E504  80 03 01 78 */	lwz r0, 0x178(r3)
/* 80111708 0010E508  83 83 02 98 */	lwz r28, 0x298(r3)
/* 8011170C 0010E50C  1C 00 00 18 */	mulli r0, r0, 0x18
/* 80111710 0010E510  7F BC 02 14 */	add r29, r28, r0
/* 80111714 0010E514  48 00 00 10 */	b lbl_80111724
lbl_80111718:
/* 80111718 0010E518  7F 83 E3 78 */	mr r3, r28
/* 8011171C 0010E51C  4B FF FF 15 */	bl cache_hook__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FRQ212bungee_state9hook_type
/* 80111720 0010E520  3B 9C 00 18 */	addi r28, r28, 0x18
lbl_80111724:
/* 80111724 0010E524  7C 1C E8 40 */	cmplw r28, r29
/* 80111728 0010E528  40 82 FF F0 */	bne lbl_80111718
/* 8011172C 0010E52C  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 80111730 0010E530  3C 60 44 59 */	lis r3, 0x44594E41@ha
/* 80111734 0010E534  38 84 7A 68 */	addi r4, r4, lbl_80297A68@l
/* 80111738 0010E538  38 00 00 00 */	li r0, 0
/* 8011173C 0010E53C  90 04 01 64 */	stw r0, 0x164(r4)
/* 80111740 0010E540  38 63 4E 41 */	addi r3, r3, 0x44594E41@l
/* 80111744 0010E544  4B F3 A0 D5 */	bl xSTAssetCountByType__FUi
/* 80111748 0010E548  7C 7C 1B 78 */	mr r28, r3
/* 8011174C 0010E54C  48 00 00 6D */	bl type_name__Q212bungee_state10drop_assetFv
/* 80111750 0010E550  4B F3 AA C5 */	bl xStrHash__FPCc
/* 80111754 0010E554  7C 7D 1B 78 */	mr r29, r3
/* 80111758 0010E558  3B 60 00 00 */	li r27, 0
/* 8011175C 0010E55C  3B C0 00 00 */	li r30, 0
/* 80111760 0010E560  3F E0 44 59 */	lis r31, 0x4459
/* 80111764 0010E564  48 00 00 38 */	b lbl_8011179C
lbl_80111768:
/* 80111768 0010E568  93 C1 00 08 */	stw r30, 8(r1)
/* 8011176C 0010E56C  7F 64 DB 78 */	mr r4, r27
/* 80111770 0010E570  38 7F 4E 41 */	addi r3, r31, 0x4e41
/* 80111774 0010E574  38 A1 00 08 */	addi r5, r1, 8
/* 80111778 0010E578  4B F3 A1 29 */	bl xSTFindAssetByType__FUiiPUi
/* 8011177C 0010E57C  28 03 00 00 */	cmplwi r3, 0
/* 80111780 0010E580  41 82 00 18 */	beq lbl_80111798
/* 80111784 0010E584  80 03 00 08 */	lwz r0, 8(r3)
/* 80111788 0010E588  7C 00 E8 40 */	cmplw r0, r29
/* 8011178C 0010E58C  40 82 00 0C */	bne lbl_80111798
/* 80111790 0010E590  80 81 00 08 */	lwz r4, 8(r1)
/* 80111794 0010E594  4B FF FE C5 */	bl cache_drop__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FRCQ212bungee_state10drop_assetUi
lbl_80111798:
/* 80111798 0010E598  3B 7B 00 01 */	addi r27, r27, 1
lbl_8011179C:
/* 8011179C 0010E59C  7C 1B E0 00 */	cmpw r27, r28
/* 801117A0 0010E5A0  41 80 FF C8 */	blt lbl_80111768
/* 801117A4 0010E5A4  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 801117A8 0010E5A8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801117AC 0010E5AC  7C 08 03 A6 */	mtlr r0
/* 801117B0 0010E5B0  38 21 00 30 */	addi r1, r1, 0x30
/* 801117B4 0010E5B4  4E 80 00 20 */	blr 

.global type_name__Q212bungee_state10drop_assetFv
type_name__Q212bungee_state10drop_assetFv:
/* 801117B8 0010E5B8  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 801117BC 0010E5BC  38 63 A6 88 */	addi r3, r3, lbl_8026A688@l
/* 801117C0 0010E5C0  38 63 00 8F */	addi r3, r3, 0x8f
/* 801117C4 0010E5C4  4E 80 00 20 */	blr 

/* common_update__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FR6xScenef */
common_update__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FR6xScenef:
/* 801117C8 0010E5C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801117CC 0010E5CC  7C 08 02 A6 */	mflr r0
/* 801117D0 0010E5D0  3C 80 80 3C */	lis r4, globals@ha
/* 801117D4 0010E5D4  38 A4 05 58 */	addi r5, r4, globals@l
/* 801117D8 0010E5D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801117DC 0010E5DC  7C 64 1B 78 */	mr r4, r3
/* 801117E0 0010E5E0  38 65 06 E0 */	addi r3, r5, 0x6e0
/* 801117E4 0010E5E4  4B F6 AD 79 */	bl zEntPlayerCollTrigger__FP4xEntP6xScene
/* 801117E8 0010E5E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801117EC 0010E5EC  7C 08 03 A6 */	mtlr r0
/* 801117F0 0010E5F0  38 21 00 10 */	addi r1, r1, 0x10
/* 801117F4 0010E5F4  4E 80 00 20 */	blr 

load__12bungee_stateFR5xBaseR9xDynAssetUl:
/* 801117F8 0010E5F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801117FC 0010E5FC  7C 08 02 A6 */	mflr r0
/* 80111800 0010E600  90 01 00 14 */	stw r0, 0x14(r1)
/* 80111804 0010E604  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80111808 0010E608  7C 9F 23 78 */	mr r31, r4
/* 8011180C 0010E60C  93 C1 00 08 */	stw r30, 8(r1)
/* 80111810 0010E610  7C 7E 1B 78 */	mr r30, r3
/* 80111814 0010E614  4B EF 7B ED */	bl xBaseInit__FP5xBaseP10xBaseAsset
/* 80111818 0010E618  93 FE 00 10 */	stw r31, 0x10(r30)
/* 8011181C 0010E61C  88 1E 00 05 */	lbz r0, 5(r30)
/* 80111820 0010E620  28 00 00 00 */	cmplwi r0, 0
/* 80111824 0010E624  41 82 00 10 */	beq lbl_80111834
/* 80111828 0010E628  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 8011182C 0010E62C  38 03 00 8C */	addi r0, r3, 0x8c
/* 80111830 0010E630  90 1E 00 08 */	stw r0, 8(r30)
lbl_80111834:
/* 80111834 0010E634  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 80111838 0010E638  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8011183C 0010E63C  4B FA 32 01 */	bl zSceneFindObject__FUi
/* 80111840 0010E640  90 7E 00 14 */	stw r3, 0x14(r30)
/* 80111844 0010E644  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80111848 0010E648  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011184C 0010E64C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80111850 0010E650  7C 08 03 A6 */	mtlr r0
/* 80111854 0010E654  38 21 00 10 */	addi r1, r1, 0x10
/* 80111858 0010E658  4E 80 00 20 */	blr 

.global load_settings__12bungee_stateFR8xIniFile
load_settings__12bungee_stateFR8xIniFile:
/* 8011185C 0010E65C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80111860 0010E660  7C 08 02 A6 */	mflr r0
/* 80111864 0010E664  3C 80 80 27 */	lis r4, lbl_8026A688@ha
/* 80111868 0010E668  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011186C 0010E66C  38 84 A6 88 */	addi r4, r4, lbl_8026A688@l
/* 80111870 0010E670  38 84 00 A7 */	addi r4, r4, 0xa7
/* 80111874 0010E674  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80111878 0010E678  7C 7F 1B 78 */	mr r31, r3
/* 8011187C 0010E67C  C0 22 9E C8 */	lfs f1, lbl_803CE848-_SDA2_BASE_(r2)
/* 80111880 0010E680  4B F1 F2 C5 */	bl xIniGetFloat__FP8xIniFilePcf
/* 80111884 0010E684  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 80111888 0010E688  D4 23 37 88 */	stfsu f1, lbl_80313788@l(r3)
/* 8011188C 0010E68C  FC 40 08 18 */	frsp f2, f1
/* 80111890 0010E690  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80111894 0010E694  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111898 0010E698  40 80 00 08 */	bge lbl_801118A0
/* 8011189C 0010E69C  D0 03 00 00 */	stfs f0, 0(r3)
lbl_801118A0:
/* 801118A0 0010E6A0  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 801118A4 0010E6A4  C0 02 9E 8C */	lfs f0, lbl_803CE80C-_SDA2_BASE_(r2)
/* 801118A8 0010E6A8  C4 23 37 88 */	lfsu f1, lbl_80313788@l(r3)
/* 801118AC 0010E6AC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801118B0 0010E6B0  40 81 00 08 */	ble lbl_801118B8
/* 801118B4 0010E6B4  D0 03 00 00 */	stfs f0, 0(r3)
lbl_801118B8:
/* 801118B8 0010E6B8  3C 80 80 27 */	lis r4, lbl_8026A688@ha
/* 801118BC 0010E6BC  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 801118C0 0010E6C0  38 A4 A6 88 */	addi r5, r4, lbl_8026A688@l
/* 801118C4 0010E6C4  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 801118C8 0010E6C8  38 83 37 88 */	addi r4, r3, lbl_80313788@l
/* 801118CC 0010E6CC  C0 42 9E 8C */	lfs f2, lbl_803CE80C-_SDA2_BASE_(r2)
/* 801118D0 0010E6D0  38 65 00 C8 */	addi r3, r5, 0xc8
/* 801118D4 0010E6D4  38 A0 00 00 */	li r5, 0
/* 801118D8 0010E6D8  38 C0 00 00 */	li r6, 0
/* 801118DC 0010E6DC  38 E0 00 00 */	li r7, 0
/* 801118E0 0010E6E0  4B F1 ED 4D */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 801118E4 0010E6E4  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 801118E8 0010E6E8  C0 22 9E 90 */	lfs f1, lbl_803CE810-_SDA2_BASE_(r2)
/* 801118EC 0010E6EC  38 83 A6 88 */	addi r4, r3, lbl_8026A688@l
/* 801118F0 0010E6F0  7F E3 FB 78 */	mr r3, r31
/* 801118F4 0010E6F4  38 84 00 EC */	addi r4, r4, 0xec
/* 801118F8 0010E6F8  4B F1 F2 4D */	bl xIniGetFloat__FP8xIniFilePcf
/* 801118FC 0010E6FC  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 80111900 0010E700  FC 40 08 18 */	frsp f2, f1
/* 80111904 0010E704  38 63 37 88 */	addi r3, r3, lbl_80313788@l
/* 80111908 0010E708  38 83 00 04 */	addi r4, r3, 4
/* 8011190C 0010E70C  D0 23 00 04 */	stfs f1, 4(r3)
/* 80111910 0010E710  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80111914 0010E714  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111918 0010E718  40 80 00 08 */	bge lbl_80111920
/* 8011191C 0010E71C  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80111920:
/* 80111920 0010E720  C0 24 00 00 */	lfs f1, 0(r4)
/* 80111924 0010E724  C0 02 9E 8C */	lfs f0, lbl_803CE80C-_SDA2_BASE_(r2)
/* 80111928 0010E728  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011192C 0010E72C  40 81 00 08 */	ble lbl_80111934
/* 80111930 0010E730  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80111934:
/* 80111934 0010E734  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80111938 0010E738  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 8011193C 0010E73C  38 63 A6 88 */	addi r3, r3, lbl_8026A688@l
/* 80111940 0010E740  C0 42 9E 8C */	lfs f2, lbl_803CE80C-_SDA2_BASE_(r2)
/* 80111944 0010E744  38 A0 00 00 */	li r5, 0
/* 80111948 0010E748  38 C0 00 00 */	li r6, 0
/* 8011194C 0010E74C  38 63 01 0A */	addi r3, r3, 0x10a
/* 80111950 0010E750  38 E0 00 00 */	li r7, 0
/* 80111954 0010E754  4B F1 EC D9 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80111958 0010E758  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 8011195C 0010E75C  C0 22 9E 90 */	lfs f1, lbl_803CE810-_SDA2_BASE_(r2)
/* 80111960 0010E760  38 83 A6 88 */	addi r4, r3, lbl_8026A688@l
/* 80111964 0010E764  7F E3 FB 78 */	mr r3, r31
/* 80111968 0010E768  38 84 01 2B */	addi r4, r4, 0x12b
/* 8011196C 0010E76C  4B F1 F1 D9 */	bl xIniGetFloat__FP8xIniFilePcf
/* 80111970 0010E770  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 80111974 0010E774  FC 40 08 18 */	frsp f2, f1
/* 80111978 0010E778  38 63 37 88 */	addi r3, r3, lbl_80313788@l
/* 8011197C 0010E77C  38 83 00 08 */	addi r4, r3, 8
/* 80111980 0010E780  D0 23 00 08 */	stfs f1, 8(r3)
/* 80111984 0010E784  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80111988 0010E788  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8011198C 0010E78C  40 80 00 08 */	bge lbl_80111994
/* 80111990 0010E790  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80111994:
/* 80111994 0010E794  C0 24 00 00 */	lfs f1, 0(r4)
/* 80111998 0010E798  C0 02 9E B0 */	lfs f0, lbl_803CE830-_SDA2_BASE_(r2)
/* 8011199C 0010E79C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801119A0 0010E7A0  40 81 00 08 */	ble lbl_801119A8
/* 801119A4 0010E7A4  D0 04 00 00 */	stfs f0, 0(r4)
lbl_801119A8:
/* 801119A8 0010E7A8  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 801119AC 0010E7AC  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 801119B0 0010E7B0  38 63 A6 88 */	addi r3, r3, lbl_8026A688@l
/* 801119B4 0010E7B4  C0 42 9E B0 */	lfs f2, lbl_803CE830-_SDA2_BASE_(r2)
/* 801119B8 0010E7B8  38 A0 00 00 */	li r5, 0
/* 801119BC 0010E7BC  38 C0 00 00 */	li r6, 0
/* 801119C0 0010E7C0  38 63 01 4C */	addi r3, r3, 0x14c
/* 801119C4 0010E7C4  38 E0 00 00 */	li r7, 0
/* 801119C8 0010E7C8  4B F1 EC 65 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 801119CC 0010E7CC  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 801119D0 0010E7D0  C0 22 9E 90 */	lfs f1, lbl_803CE810-_SDA2_BASE_(r2)
/* 801119D4 0010E7D4  38 83 A6 88 */	addi r4, r3, lbl_8026A688@l
/* 801119D8 0010E7D8  7F E3 FB 78 */	mr r3, r31
/* 801119DC 0010E7DC  38 84 01 72 */	addi r4, r4, 0x172
/* 801119E0 0010E7E0  4B F1 F1 65 */	bl xIniGetFloat__FP8xIniFilePcf
/* 801119E4 0010E7E4  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 801119E8 0010E7E8  FC 40 08 18 */	frsp f2, f1
/* 801119EC 0010E7EC  38 63 37 88 */	addi r3, r3, lbl_80313788@l
/* 801119F0 0010E7F0  38 83 00 0C */	addi r4, r3, 0xc
/* 801119F4 0010E7F4  D0 23 00 0C */	stfs f1, 0xc(r3)
/* 801119F8 0010E7F8  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 801119FC 0010E7FC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111A00 0010E800  40 80 00 08 */	bge lbl_80111A08
/* 80111A04 0010E804  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80111A08:
/* 80111A08 0010E808  C0 24 00 00 */	lfs f1, 0(r4)
/* 80111A0C 0010E80C  C0 02 9E B0 */	lfs f0, lbl_803CE830-_SDA2_BASE_(r2)
/* 80111A10 0010E810  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111A14 0010E814  40 81 00 08 */	ble lbl_80111A1C
/* 80111A18 0010E818  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80111A1C:
/* 80111A1C 0010E81C  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80111A20 0010E820  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80111A24 0010E824  38 63 A6 88 */	addi r3, r3, lbl_8026A688@l
/* 80111A28 0010E828  C0 42 9E B0 */	lfs f2, lbl_803CE830-_SDA2_BASE_(r2)
/* 80111A2C 0010E82C  38 A0 00 00 */	li r5, 0
/* 80111A30 0010E830  38 C0 00 00 */	li r6, 0
/* 80111A34 0010E834  38 63 01 90 */	addi r3, r3, 0x190
/* 80111A38 0010E838  38 E0 00 00 */	li r7, 0
/* 80111A3C 0010E83C  4B F1 EB F1 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80111A40 0010E840  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80111A44 0010E844  C0 22 9E 90 */	lfs f1, lbl_803CE810-_SDA2_BASE_(r2)
/* 80111A48 0010E848  38 83 A6 88 */	addi r4, r3, lbl_8026A688@l
/* 80111A4C 0010E84C  7F E3 FB 78 */	mr r3, r31
/* 80111A50 0010E850  38 84 01 B3 */	addi r4, r4, 0x1b3
/* 80111A54 0010E854  4B F1 F0 F1 */	bl xIniGetFloat__FP8xIniFilePcf
/* 80111A58 0010E858  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 80111A5C 0010E85C  FC 40 08 18 */	frsp f2, f1
/* 80111A60 0010E860  38 63 37 88 */	addi r3, r3, lbl_80313788@l
/* 80111A64 0010E864  38 83 00 10 */	addi r4, r3, 0x10
/* 80111A68 0010E868  D0 23 00 10 */	stfs f1, 0x10(r3)
/* 80111A6C 0010E86C  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80111A70 0010E870  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111A74 0010E874  40 80 00 08 */	bge lbl_80111A7C
/* 80111A78 0010E878  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80111A7C:
/* 80111A7C 0010E87C  C0 24 00 00 */	lfs f1, 0(r4)
/* 80111A80 0010E880  C0 02 9E B0 */	lfs f0, lbl_803CE830-_SDA2_BASE_(r2)
/* 80111A84 0010E884  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111A88 0010E888  40 81 00 08 */	ble lbl_80111A90
/* 80111A8C 0010E88C  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80111A90:
/* 80111A90 0010E890  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80111A94 0010E894  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80111A98 0010E898  38 63 A6 88 */	addi r3, r3, lbl_8026A688@l
/* 80111A9C 0010E89C  C0 42 9E B0 */	lfs f2, lbl_803CE830-_SDA2_BASE_(r2)
/* 80111AA0 0010E8A0  38 A0 00 00 */	li r5, 0
/* 80111AA4 0010E8A4  38 C0 00 00 */	li r6, 0
/* 80111AA8 0010E8A8  38 63 01 D1 */	addi r3, r3, 0x1d1
/* 80111AAC 0010E8AC  38 E0 00 00 */	li r7, 0
/* 80111AB0 0010E8B0  4B F1 EB 7D */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80111AB4 0010E8B4  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80111AB8 0010E8B8  C0 22 9E CC */	lfs f1, lbl_803CE84C-_SDA2_BASE_(r2)
/* 80111ABC 0010E8BC  38 83 A6 88 */	addi r4, r3, lbl_8026A688@l
/* 80111AC0 0010E8C0  7F E3 FB 78 */	mr r3, r31
/* 80111AC4 0010E8C4  38 84 01 F4 */	addi r4, r4, 0x1f4
/* 80111AC8 0010E8C8  4B F1 F0 7D */	bl xIniGetFloat__FP8xIniFilePcf
/* 80111ACC 0010E8CC  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 80111AD0 0010E8D0  FC 40 08 18 */	frsp f2, f1
/* 80111AD4 0010E8D4  38 63 37 88 */	addi r3, r3, lbl_80313788@l
/* 80111AD8 0010E8D8  38 83 00 14 */	addi r4, r3, 0x14
/* 80111ADC 0010E8DC  D0 23 00 14 */	stfs f1, 0x14(r3)
/* 80111AE0 0010E8E0  C0 02 9E CC */	lfs f0, lbl_803CE84C-_SDA2_BASE_(r2)
/* 80111AE4 0010E8E4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111AE8 0010E8E8  40 80 00 08 */	bge lbl_80111AF0
/* 80111AEC 0010E8EC  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80111AF0:
/* 80111AF0 0010E8F0  C0 24 00 00 */	lfs f1, 0(r4)
/* 80111AF4 0010E8F4  C0 02 9E D0 */	lfs f0, lbl_803CE850-_SDA2_BASE_(r2)
/* 80111AF8 0010E8F8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111AFC 0010E8FC  40 81 00 08 */	ble lbl_80111B04
/* 80111B00 0010E900  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80111B04:
/* 80111B04 0010E904  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80111B08 0010E908  C0 22 9E CC */	lfs f1, lbl_803CE84C-_SDA2_BASE_(r2)
/* 80111B0C 0010E90C  38 63 A6 88 */	addi r3, r3, lbl_8026A688@l
/* 80111B10 0010E910  C0 42 9E D0 */	lfs f2, lbl_803CE850-_SDA2_BASE_(r2)
/* 80111B14 0010E914  38 A0 00 00 */	li r5, 0
/* 80111B18 0010E918  38 C0 00 00 */	li r6, 0
/* 80111B1C 0010E91C  38 63 02 0F */	addi r3, r3, 0x20f
/* 80111B20 0010E920  38 E0 00 00 */	li r7, 0
/* 80111B24 0010E924  4B F1 EB 09 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80111B28 0010E928  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80111B2C 0010E92C  C0 22 9E D4 */	lfs f1, lbl_803CE854-_SDA2_BASE_(r2)
/* 80111B30 0010E930  38 83 A6 88 */	addi r4, r3, lbl_8026A688@l
/* 80111B34 0010E934  7F E3 FB 78 */	mr r3, r31
/* 80111B38 0010E938  38 84 02 2E */	addi r4, r4, 0x22e
/* 80111B3C 0010E93C  4B F1 F0 09 */	bl xIniGetFloat__FP8xIniFilePcf
/* 80111B40 0010E940  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 80111B44 0010E944  FC 40 08 18 */	frsp f2, f1
/* 80111B48 0010E948  38 63 37 88 */	addi r3, r3, lbl_80313788@l
/* 80111B4C 0010E94C  38 83 00 18 */	addi r4, r3, 0x18
/* 80111B50 0010E950  D0 23 00 18 */	stfs f1, 0x18(r3)
/* 80111B54 0010E954  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80111B58 0010E958  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111B5C 0010E95C  40 80 00 08 */	bge lbl_80111B64
/* 80111B60 0010E960  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80111B64:
/* 80111B64 0010E964  C0 24 00 00 */	lfs f1, 0(r4)
/* 80111B68 0010E968  C0 02 9E D8 */	lfs f0, lbl_803CE858-_SDA2_BASE_(r2)
/* 80111B6C 0010E96C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111B70 0010E970  40 81 00 08 */	ble lbl_80111B78
/* 80111B74 0010E974  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80111B78:
/* 80111B78 0010E978  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80111B7C 0010E97C  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80111B80 0010E980  38 63 A6 88 */	addi r3, r3, lbl_8026A688@l
/* 80111B84 0010E984  C0 42 9E D8 */	lfs f2, lbl_803CE858-_SDA2_BASE_(r2)
/* 80111B88 0010E988  38 A0 00 00 */	li r5, 0
/* 80111B8C 0010E98C  38 C0 00 00 */	li r6, 0
/* 80111B90 0010E990  38 63 02 49 */	addi r3, r3, 0x249
/* 80111B94 0010E994  38 E0 00 00 */	li r7, 0
/* 80111B98 0010E998  4B F1 EA 95 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80111B9C 0010E99C  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80111BA0 0010E9A0  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80111BA4 0010E9A4  38 83 A6 88 */	addi r4, r3, lbl_8026A688@l
/* 80111BA8 0010E9A8  7F E3 FB 78 */	mr r3, r31
/* 80111BAC 0010E9AC  38 84 02 6C */	addi r4, r4, 0x26c
/* 80111BB0 0010E9B0  4B F1 EF 95 */	bl xIniGetFloat__FP8xIniFilePcf
/* 80111BB4 0010E9B4  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 80111BB8 0010E9B8  FC 40 08 18 */	frsp f2, f1
/* 80111BBC 0010E9BC  38 63 37 88 */	addi r3, r3, lbl_80313788@l
/* 80111BC0 0010E9C0  38 83 00 1C */	addi r4, r3, 0x1c
/* 80111BC4 0010E9C4  D0 23 00 1C */	stfs f1, 0x1c(r3)
/* 80111BC8 0010E9C8  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80111BCC 0010E9CC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111BD0 0010E9D0  40 80 00 08 */	bge lbl_80111BD8
/* 80111BD4 0010E9D4  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80111BD8:
/* 80111BD8 0010E9D8  C0 24 00 00 */	lfs f1, 0(r4)
/* 80111BDC 0010E9DC  C0 02 9E 88 */	lfs f0, lbl_803CE808-_SDA2_BASE_(r2)
/* 80111BE0 0010E9E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111BE4 0010E9E4  40 81 00 08 */	ble lbl_80111BEC
/* 80111BE8 0010E9E8  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80111BEC:
/* 80111BEC 0010E9EC  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80111BF0 0010E9F0  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80111BF4 0010E9F4  38 63 A6 88 */	addi r3, r3, lbl_8026A688@l
/* 80111BF8 0010E9F8  C0 42 9E 88 */	lfs f2, lbl_803CE808-_SDA2_BASE_(r2)
/* 80111BFC 0010E9FC  38 A0 00 00 */	li r5, 0
/* 80111C00 0010EA00  38 C0 00 00 */	li r6, 0
/* 80111C04 0010EA04  38 63 02 85 */	addi r3, r3, 0x285
/* 80111C08 0010EA08  38 E0 00 00 */	li r7, 0
/* 80111C0C 0010EA0C  4B F1 EA 21 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80111C10 0010EA10  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80111C14 0010EA14  C0 22 9E B0 */	lfs f1, lbl_803CE830-_SDA2_BASE_(r2)
/* 80111C18 0010EA18  38 83 A6 88 */	addi r4, r3, lbl_8026A688@l
/* 80111C1C 0010EA1C  7F E3 FB 78 */	mr r3, r31
/* 80111C20 0010EA20  38 84 02 A2 */	addi r4, r4, 0x2a2
/* 80111C24 0010EA24  4B F1 EF 21 */	bl xIniGetFloat__FP8xIniFilePcf
/* 80111C28 0010EA28  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 80111C2C 0010EA2C  FC 40 08 18 */	frsp f2, f1
/* 80111C30 0010EA30  38 63 37 88 */	addi r3, r3, lbl_80313788@l
/* 80111C34 0010EA34  38 83 00 20 */	addi r4, r3, 0x20
/* 80111C38 0010EA38  D0 23 00 20 */	stfs f1, 0x20(r3)
/* 80111C3C 0010EA3C  C0 02 9E 88 */	lfs f0, lbl_803CE808-_SDA2_BASE_(r2)
/* 80111C40 0010EA40  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111C44 0010EA44  40 80 00 08 */	bge lbl_80111C4C
/* 80111C48 0010EA48  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80111C4C:
/* 80111C4C 0010EA4C  C0 24 00 00 */	lfs f1, 0(r4)
/* 80111C50 0010EA50  C0 02 9E 98 */	lfs f0, lbl_803CE818-_SDA2_BASE_(r2)
/* 80111C54 0010EA54  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111C58 0010EA58  40 81 00 08 */	ble lbl_80111C60
/* 80111C5C 0010EA5C  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80111C60:
/* 80111C60 0010EA60  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80111C64 0010EA64  C0 22 9E 88 */	lfs f1, lbl_803CE808-_SDA2_BASE_(r2)
/* 80111C68 0010EA68  38 63 A6 88 */	addi r3, r3, lbl_8026A688@l
/* 80111C6C 0010EA6C  C0 42 9E 98 */	lfs f2, lbl_803CE818-_SDA2_BASE_(r2)
/* 80111C70 0010EA70  38 A0 00 00 */	li r5, 0
/* 80111C74 0010EA74  38 C0 00 00 */	li r6, 0
/* 80111C78 0010EA78  38 63 02 BC */	addi r3, r3, 0x2bc
/* 80111C7C 0010EA7C  38 E0 00 00 */	li r7, 0
/* 80111C80 0010EA80  4B F1 E9 AD */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80111C84 0010EA84  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80111C88 0010EA88  C0 22 9E 88 */	lfs f1, lbl_803CE808-_SDA2_BASE_(r2)
/* 80111C8C 0010EA8C  38 83 A6 88 */	addi r4, r3, lbl_8026A688@l
/* 80111C90 0010EA90  7F E3 FB 78 */	mr r3, r31
/* 80111C94 0010EA94  38 84 02 DE */	addi r4, r4, 0x2de
/* 80111C98 0010EA98  4B F1 EE AD */	bl xIniGetFloat__FP8xIniFilePcf
/* 80111C9C 0010EA9C  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 80111CA0 0010EAA0  FC 40 08 18 */	frsp f2, f1
/* 80111CA4 0010EAA4  38 63 37 88 */	addi r3, r3, lbl_80313788@l
/* 80111CA8 0010EAA8  38 83 00 24 */	addi r4, r3, 0x24
/* 80111CAC 0010EAAC  D0 23 00 24 */	stfs f1, 0x24(r3)
/* 80111CB0 0010EAB0  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80111CB4 0010EAB4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111CB8 0010EAB8  40 80 00 08 */	bge lbl_80111CC0
/* 80111CBC 0010EABC  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80111CC0:
/* 80111CC0 0010EAC0  C0 24 00 00 */	lfs f1, 0(r4)
/* 80111CC4 0010EAC4  C0 02 9E CC */	lfs f0, lbl_803CE84C-_SDA2_BASE_(r2)
/* 80111CC8 0010EAC8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111CCC 0010EACC  40 81 00 08 */	ble lbl_80111CD4
/* 80111CD0 0010EAD0  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80111CD4:
/* 80111CD4 0010EAD4  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80111CD8 0010EAD8  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80111CDC 0010EADC  38 63 A6 88 */	addi r3, r3, lbl_8026A688@l
/* 80111CE0 0010EAE0  C0 42 9E CC */	lfs f2, lbl_803CE84C-_SDA2_BASE_(r2)
/* 80111CE4 0010EAE4  38 A0 00 00 */	li r5, 0
/* 80111CE8 0010EAE8  38 C0 00 00 */	li r6, 0
/* 80111CEC 0010EAEC  38 63 02 FC */	addi r3, r3, 0x2fc
/* 80111CF0 0010EAF0  38 E0 00 00 */	li r7, 0
/* 80111CF4 0010EAF4  4B F1 E9 39 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80111CF8 0010EAF8  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80111CFC 0010EAFC  C0 22 9E DC */	lfs f1, lbl_803CE85C-_SDA2_BASE_(r2)
/* 80111D00 0010EB00  38 83 A6 88 */	addi r4, r3, lbl_8026A688@l
/* 80111D04 0010EB04  7F E3 FB 78 */	mr r3, r31
/* 80111D08 0010EB08  38 84 03 19 */	addi r4, r4, 0x319
/* 80111D0C 0010EB0C  4B F1 EE 39 */	bl xIniGetFloat__FP8xIniFilePcf
/* 80111D10 0010EB10  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 80111D14 0010EB14  FC 40 08 18 */	frsp f2, f1
/* 80111D18 0010EB18  38 63 37 88 */	addi r3, r3, lbl_80313788@l
/* 80111D1C 0010EB1C  38 83 00 28 */	addi r4, r3, 0x28
/* 80111D20 0010EB20  D0 23 00 28 */	stfs f1, 0x28(r3)
/* 80111D24 0010EB24  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80111D28 0010EB28  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111D2C 0010EB2C  40 80 00 08 */	bge lbl_80111D34
/* 80111D30 0010EB30  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80111D34:
/* 80111D34 0010EB34  C0 24 00 00 */	lfs f1, 0(r4)
/* 80111D38 0010EB38  C0 02 9E 88 */	lfs f0, lbl_803CE808-_SDA2_BASE_(r2)
/* 80111D3C 0010EB3C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111D40 0010EB40  40 81 00 08 */	ble lbl_80111D48
/* 80111D44 0010EB44  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80111D48:
/* 80111D48 0010EB48  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80111D4C 0010EB4C  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80111D50 0010EB50  38 63 A6 88 */	addi r3, r3, lbl_8026A688@l
/* 80111D54 0010EB54  C0 42 9E 88 */	lfs f2, lbl_803CE808-_SDA2_BASE_(r2)
/* 80111D58 0010EB58  38 A0 00 00 */	li r5, 0
/* 80111D5C 0010EB5C  38 C0 00 00 */	li r6, 0
/* 80111D60 0010EB60  38 63 03 39 */	addi r3, r3, 0x339
/* 80111D64 0010EB64  38 E0 00 00 */	li r7, 0
/* 80111D68 0010EB68  4B F1 E8 C5 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80111D6C 0010EB6C  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80111D70 0010EB70  C0 22 9E 88 */	lfs f1, lbl_803CE808-_SDA2_BASE_(r2)
/* 80111D74 0010EB74  38 83 A6 88 */	addi r4, r3, lbl_8026A688@l
/* 80111D78 0010EB78  7F E3 FB 78 */	mr r3, r31
/* 80111D7C 0010EB7C  38 84 03 58 */	addi r4, r4, 0x358
/* 80111D80 0010EB80  4B F1 ED C5 */	bl xIniGetFloat__FP8xIniFilePcf
/* 80111D84 0010EB84  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 80111D88 0010EB88  FC 40 08 18 */	frsp f2, f1
/* 80111D8C 0010EB8C  38 63 37 88 */	addi r3, r3, lbl_80313788@l
/* 80111D90 0010EB90  38 83 00 2C */	addi r4, r3, 0x2c
/* 80111D94 0010EB94  D0 23 00 2C */	stfs f1, 0x2c(r3)
/* 80111D98 0010EB98  C0 02 9E E0 */	lfs f0, lbl_803CE860-_SDA2_BASE_(r2)
/* 80111D9C 0010EB9C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111DA0 0010EBA0  40 80 00 08 */	bge lbl_80111DA8
/* 80111DA4 0010EBA4  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80111DA8:
/* 80111DA8 0010EBA8  C0 24 00 00 */	lfs f1, 0(r4)
/* 80111DAC 0010EBAC  C0 02 9E CC */	lfs f0, lbl_803CE84C-_SDA2_BASE_(r2)
/* 80111DB0 0010EBB0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111DB4 0010EBB4  40 81 00 08 */	ble lbl_80111DBC
/* 80111DB8 0010EBB8  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80111DBC:
/* 80111DBC 0010EBBC  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80111DC0 0010EBC0  C0 22 9E E0 */	lfs f1, lbl_803CE860-_SDA2_BASE_(r2)
/* 80111DC4 0010EBC4  38 63 A6 88 */	addi r3, r3, lbl_8026A688@l
/* 80111DC8 0010EBC8  C0 42 9E CC */	lfs f2, lbl_803CE84C-_SDA2_BASE_(r2)
/* 80111DCC 0010EBCC  38 A0 00 00 */	li r5, 0
/* 80111DD0 0010EBD0  38 C0 00 00 */	li r6, 0
/* 80111DD4 0010EBD4  38 63 03 77 */	addi r3, r3, 0x377
/* 80111DD8 0010EBD8  38 E0 00 00 */	li r7, 0
/* 80111DDC 0010EBDC  4B F1 E8 51 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80111DE0 0010EBE0  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80111DE4 0010EBE4  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80111DE8 0010EBE8  38 83 A6 88 */	addi r4, r3, lbl_8026A688@l
/* 80111DEC 0010EBEC  7F E3 FB 78 */	mr r3, r31
/* 80111DF0 0010EBF0  38 84 03 95 */	addi r4, r4, 0x395
/* 80111DF4 0010EBF4  4B F1 ED 51 */	bl xIniGetFloat__FP8xIniFilePcf
/* 80111DF8 0010EBF8  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 80111DFC 0010EBFC  FC 40 08 18 */	frsp f2, f1
/* 80111E00 0010EC00  38 63 37 88 */	addi r3, r3, lbl_80313788@l
/* 80111E04 0010EC04  38 83 00 30 */	addi r4, r3, 0x30
/* 80111E08 0010EC08  D0 23 00 30 */	stfs f1, 0x30(r3)
/* 80111E0C 0010EC0C  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80111E10 0010EC10  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111E14 0010EC14  40 80 00 08 */	bge lbl_80111E1C
/* 80111E18 0010EC18  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80111E1C:
/* 80111E1C 0010EC1C  C0 24 00 00 */	lfs f1, 0(r4)
/* 80111E20 0010EC20  C0 02 9E E4 */	lfs f0, lbl_803CE864-_SDA2_BASE_(r2)
/* 80111E24 0010EC24  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111E28 0010EC28  40 81 00 08 */	ble lbl_80111E30
/* 80111E2C 0010EC2C  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80111E30:
/* 80111E30 0010EC30  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80111E34 0010EC34  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80111E38 0010EC38  38 63 A6 88 */	addi r3, r3, lbl_8026A688@l
/* 80111E3C 0010EC3C  C0 42 9E E4 */	lfs f2, lbl_803CE864-_SDA2_BASE_(r2)
/* 80111E40 0010EC40  38 A0 00 00 */	li r5, 0
/* 80111E44 0010EC44  38 C0 00 00 */	li r6, 0
/* 80111E48 0010EC48  38 63 03 BA */	addi r3, r3, 0x3ba
/* 80111E4C 0010EC4C  38 E0 00 00 */	li r7, 0
/* 80111E50 0010EC50  4B F1 E7 DD */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80111E54 0010EC54  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80111E58 0010EC58  C0 22 9E B4 */	lfs f1, lbl_803CE834-_SDA2_BASE_(r2)
/* 80111E5C 0010EC5C  38 83 A6 88 */	addi r4, r3, lbl_8026A688@l
/* 80111E60 0010EC60  7F E3 FB 78 */	mr r3, r31
/* 80111E64 0010EC64  38 84 03 D8 */	addi r4, r4, 0x3d8
/* 80111E68 0010EC68  4B F1 EC DD */	bl xIniGetFloat__FP8xIniFilePcf
/* 80111E6C 0010EC6C  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 80111E70 0010EC70  FC 40 08 18 */	frsp f2, f1
/* 80111E74 0010EC74  38 63 37 88 */	addi r3, r3, lbl_80313788@l
/* 80111E78 0010EC78  38 83 00 34 */	addi r4, r3, 0x34
/* 80111E7C 0010EC7C  D0 23 00 34 */	stfs f1, 0x34(r3)
/* 80111E80 0010EC80  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80111E84 0010EC84  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111E88 0010EC88  40 80 00 08 */	bge lbl_80111E90
/* 80111E8C 0010EC8C  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80111E90:
/* 80111E90 0010EC90  C0 24 00 00 */	lfs f1, 0(r4)
/* 80111E94 0010EC94  C0 02 9E 98 */	lfs f0, lbl_803CE818-_SDA2_BASE_(r2)
/* 80111E98 0010EC98  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111E9C 0010EC9C  40 81 00 08 */	ble lbl_80111EA4
/* 80111EA0 0010ECA0  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80111EA4:
/* 80111EA4 0010ECA4  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80111EA8 0010ECA8  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80111EAC 0010ECAC  38 63 A6 88 */	addi r3, r3, lbl_8026A688@l
/* 80111EB0 0010ECB0  C0 42 9E 98 */	lfs f2, lbl_803CE818-_SDA2_BASE_(r2)
/* 80111EB4 0010ECB4  38 A0 00 00 */	li r5, 0
/* 80111EB8 0010ECB8  38 C0 00 00 */	li r6, 0
/* 80111EBC 0010ECBC  38 63 03 F8 */	addi r3, r3, 0x3f8
/* 80111EC0 0010ECC0  38 E0 00 00 */	li r7, 0
/* 80111EC4 0010ECC4  4B F1 E7 69 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80111EC8 0010ECC8  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80111ECC 0010ECCC  C0 22 9E E8 */	lfs f1, lbl_803CE868-_SDA2_BASE_(r2)
/* 80111ED0 0010ECD0  38 83 A6 88 */	addi r4, r3, lbl_8026A688@l
/* 80111ED4 0010ECD4  7F E3 FB 78 */	mr r3, r31
/* 80111ED8 0010ECD8  38 84 04 17 */	addi r4, r4, 0x417
/* 80111EDC 0010ECDC  4B F1 EC 69 */	bl xIniGetFloat__FP8xIniFilePcf
/* 80111EE0 0010ECE0  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 80111EE4 0010ECE4  FC 40 08 18 */	frsp f2, f1
/* 80111EE8 0010ECE8  38 63 37 88 */	addi r3, r3, lbl_80313788@l
/* 80111EEC 0010ECEC  38 83 00 38 */	addi r4, r3, 0x38
/* 80111EF0 0010ECF0  D0 23 00 38 */	stfs f1, 0x38(r3)
/* 80111EF4 0010ECF4  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80111EF8 0010ECF8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111EFC 0010ECFC  40 80 00 08 */	bge lbl_80111F04
/* 80111F00 0010ED00  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80111F04:
/* 80111F04 0010ED04  C0 24 00 00 */	lfs f1, 0(r4)
/* 80111F08 0010ED08  C0 02 9E 88 */	lfs f0, lbl_803CE808-_SDA2_BASE_(r2)
/* 80111F0C 0010ED0C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111F10 0010ED10  40 81 00 08 */	ble lbl_80111F18
/* 80111F14 0010ED14  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80111F18:
/* 80111F18 0010ED18  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80111F1C 0010ED1C  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80111F20 0010ED20  38 63 A6 88 */	addi r3, r3, lbl_8026A688@l
/* 80111F24 0010ED24  C0 42 9E 88 */	lfs f2, lbl_803CE808-_SDA2_BASE_(r2)
/* 80111F28 0010ED28  38 A0 00 00 */	li r5, 0
/* 80111F2C 0010ED2C  38 C0 00 00 */	li r6, 0
/* 80111F30 0010ED30  38 63 04 38 */	addi r3, r3, 0x438
/* 80111F34 0010ED34  38 E0 00 00 */	li r7, 0
/* 80111F38 0010ED38  4B F1 E6 F5 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80111F3C 0010ED3C  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80111F40 0010ED40  C0 22 9E 8C */	lfs f1, lbl_803CE80C-_SDA2_BASE_(r2)
/* 80111F44 0010ED44  38 83 A6 88 */	addi r4, r3, lbl_8026A688@l
/* 80111F48 0010ED48  7F E3 FB 78 */	mr r3, r31
/* 80111F4C 0010ED4C  38 84 04 5B */	addi r4, r4, 0x45b
/* 80111F50 0010ED50  4B F1 EB F5 */	bl xIniGetFloat__FP8xIniFilePcf
/* 80111F54 0010ED54  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 80111F58 0010ED58  FC 40 08 18 */	frsp f2, f1
/* 80111F5C 0010ED5C  38 63 37 88 */	addi r3, r3, lbl_80313788@l
/* 80111F60 0010ED60  38 83 00 3C */	addi r4, r3, 0x3c
/* 80111F64 0010ED64  D0 23 00 3C */	stfs f1, 0x3c(r3)
/* 80111F68 0010ED68  C0 02 9E E0 */	lfs f0, lbl_803CE860-_SDA2_BASE_(r2)
/* 80111F6C 0010ED6C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111F70 0010ED70  40 80 00 08 */	bge lbl_80111F78
/* 80111F74 0010ED74  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80111F78:
/* 80111F78 0010ED78  C0 24 00 00 */	lfs f1, 0(r4)
/* 80111F7C 0010ED7C  C0 02 9E EC */	lfs f0, lbl_803CE86C-_SDA2_BASE_(r2)
/* 80111F80 0010ED80  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111F84 0010ED84  40 81 00 08 */	ble lbl_80111F8C
/* 80111F88 0010ED88  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80111F8C:
/* 80111F8C 0010ED8C  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80111F90 0010ED90  C0 22 9E E0 */	lfs f1, lbl_803CE860-_SDA2_BASE_(r2)
/* 80111F94 0010ED94  38 63 A6 88 */	addi r3, r3, lbl_8026A688@l
/* 80111F98 0010ED98  C0 42 9E EC */	lfs f2, lbl_803CE86C-_SDA2_BASE_(r2)
/* 80111F9C 0010ED9C  38 A0 00 00 */	li r5, 0
/* 80111FA0 0010EDA0  38 C0 00 00 */	li r6, 0
/* 80111FA4 0010EDA4  38 63 04 75 */	addi r3, r3, 0x475
/* 80111FA8 0010EDA8  38 E0 00 00 */	li r7, 0
/* 80111FAC 0010EDAC  4B F1 E6 81 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80111FB0 0010EDB0  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80111FB4 0010EDB4  C0 22 9E 8C */	lfs f1, lbl_803CE80C-_SDA2_BASE_(r2)
/* 80111FB8 0010EDB8  38 83 A6 88 */	addi r4, r3, lbl_8026A688@l
/* 80111FBC 0010EDBC  7F E3 FB 78 */	mr r3, r31
/* 80111FC0 0010EDC0  38 84 04 8E */	addi r4, r4, 0x48e
/* 80111FC4 0010EDC4  4B F1 EB 81 */	bl xIniGetFloat__FP8xIniFilePcf
/* 80111FC8 0010EDC8  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 80111FCC 0010EDCC  FC 40 08 18 */	frsp f2, f1
/* 80111FD0 0010EDD0  38 63 37 88 */	addi r3, r3, lbl_80313788@l
/* 80111FD4 0010EDD4  38 83 00 40 */	addi r4, r3, 0x40
/* 80111FD8 0010EDD8  D0 23 00 40 */	stfs f1, 0x40(r3)
/* 80111FDC 0010EDDC  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80111FE0 0010EDE0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111FE4 0010EDE4  40 80 00 08 */	bge lbl_80111FEC
/* 80111FE8 0010EDE8  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80111FEC:
/* 80111FEC 0010EDEC  C0 24 00 00 */	lfs f1, 0(r4)
/* 80111FF0 0010EDF0  C0 02 9E EC */	lfs f0, lbl_803CE86C-_SDA2_BASE_(r2)
/* 80111FF4 0010EDF4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111FF8 0010EDF8  40 81 00 08 */	ble lbl_80112000
/* 80111FFC 0010EDFC  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80112000:
/* 80112000 0010EE00  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80112004 0010EE04  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80112008 0010EE08  38 63 A6 88 */	addi r3, r3, lbl_8026A688@l
/* 8011200C 0010EE0C  C0 42 9E EC */	lfs f2, lbl_803CE86C-_SDA2_BASE_(r2)
/* 80112010 0010EE10  38 A0 00 00 */	li r5, 0
/* 80112014 0010EE14  38 C0 00 00 */	li r6, 0
/* 80112018 0010EE18  38 63 04 B1 */	addi r3, r3, 0x4b1
/* 8011201C 0010EE1C  38 E0 00 00 */	li r7, 0
/* 80112020 0010EE20  4B F1 E6 0D */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80112024 0010EE24  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80112028 0010EE28  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 8011202C 0010EE2C  38 83 A6 88 */	addi r4, r3, lbl_8026A688@l
/* 80112030 0010EE30  7F E3 FB 78 */	mr r3, r31
/* 80112034 0010EE34  38 84 04 D3 */	addi r4, r4, 0x4d3
/* 80112038 0010EE38  4B F1 EB 0D */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011203C 0010EE3C  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 80112040 0010EE40  FC 40 08 18 */	frsp f2, f1
/* 80112044 0010EE44  38 63 37 88 */	addi r3, r3, lbl_80313788@l
/* 80112048 0010EE48  38 83 00 44 */	addi r4, r3, 0x44
/* 8011204C 0010EE4C  D0 23 00 44 */	stfs f1, 0x44(r3)
/* 80112050 0010EE50  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80112054 0010EE54  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80112058 0010EE58  40 80 00 08 */	bge lbl_80112060
/* 8011205C 0010EE5C  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80112060:
/* 80112060 0010EE60  C0 24 00 00 */	lfs f1, 0(r4)
/* 80112064 0010EE64  C0 02 9E 88 */	lfs f0, lbl_803CE808-_SDA2_BASE_(r2)
/* 80112068 0010EE68  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011206C 0010EE6C  40 81 00 08 */	ble lbl_80112074
/* 80112070 0010EE70  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80112074:
/* 80112074 0010EE74  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80112078 0010EE78  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 8011207C 0010EE7C  38 63 A6 88 */	addi r3, r3, lbl_8026A688@l
/* 80112080 0010EE80  C0 42 9E 88 */	lfs f2, lbl_803CE808-_SDA2_BASE_(r2)
/* 80112084 0010EE84  38 A0 00 00 */	li r5, 0
/* 80112088 0010EE88  38 C0 00 00 */	li r6, 0
/* 8011208C 0010EE8C  38 63 04 F1 */	addi r3, r3, 0x4f1
/* 80112090 0010EE90  38 E0 00 00 */	li r7, 0
/* 80112094 0010EE94  4B F1 E5 99 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80112098 0010EE98  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 8011209C 0010EE9C  C0 22 9E F0 */	lfs f1, lbl_803CE870-_SDA2_BASE_(r2)
/* 801120A0 0010EEA0  38 83 A6 88 */	addi r4, r3, lbl_8026A688@l
/* 801120A4 0010EEA4  7F E3 FB 78 */	mr r3, r31
/* 801120A8 0010EEA8  38 84 05 12 */	addi r4, r4, 0x512
/* 801120AC 0010EEAC  4B F1 EA 99 */	bl xIniGetFloat__FP8xIniFilePcf
/* 801120B0 0010EEB0  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 801120B4 0010EEB4  FC 40 08 18 */	frsp f2, f1
/* 801120B8 0010EEB8  38 63 37 88 */	addi r3, r3, lbl_80313788@l
/* 801120BC 0010EEBC  38 83 00 48 */	addi r4, r3, 0x48
/* 801120C0 0010EEC0  D0 23 00 48 */	stfs f1, 0x48(r3)
/* 801120C4 0010EEC4  C0 02 9E F4 */	lfs f0, lbl_803CE874-_SDA2_BASE_(r2)
/* 801120C8 0010EEC8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801120CC 0010EECC  40 80 00 08 */	bge lbl_801120D4
/* 801120D0 0010EED0  D0 04 00 00 */	stfs f0, 0(r4)
lbl_801120D4:
/* 801120D4 0010EED4  C0 24 00 00 */	lfs f1, 0(r4)
/* 801120D8 0010EED8  C0 02 9E 88 */	lfs f0, lbl_803CE808-_SDA2_BASE_(r2)
/* 801120DC 0010EEDC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801120E0 0010EEE0  40 81 00 08 */	ble lbl_801120E8
/* 801120E4 0010EEE4  D0 04 00 00 */	stfs f0, 0(r4)
lbl_801120E8:
/* 801120E8 0010EEE8  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 801120EC 0010EEEC  C0 22 9E F4 */	lfs f1, lbl_803CE874-_SDA2_BASE_(r2)
/* 801120F0 0010EEF0  38 63 A6 88 */	addi r3, r3, lbl_8026A688@l
/* 801120F4 0010EEF4  C0 42 9E 88 */	lfs f2, lbl_803CE808-_SDA2_BASE_(r2)
/* 801120F8 0010EEF8  38 A0 00 00 */	li r5, 0
/* 801120FC 0010EEFC  38 C0 00 00 */	li r6, 0
/* 80112100 0010EF00  38 63 05 30 */	addi r3, r3, 0x530
/* 80112104 0010EF04  38 E0 00 00 */	li r7, 0
/* 80112108 0010EF08  4B F1 E5 25 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8011210C 0010EF0C  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80112110 0010EF10  C0 22 9E CC */	lfs f1, lbl_803CE84C-_SDA2_BASE_(r2)
/* 80112114 0010EF14  38 83 A6 88 */	addi r4, r3, lbl_8026A688@l
/* 80112118 0010EF18  7F E3 FB 78 */	mr r3, r31
/* 8011211C 0010EF1C  38 84 05 51 */	addi r4, r4, 0x551
/* 80112120 0010EF20  4B F1 EA 25 */	bl xIniGetFloat__FP8xIniFilePcf
/* 80112124 0010EF24  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 80112128 0010EF28  FC 40 08 18 */	frsp f2, f1
/* 8011212C 0010EF2C  38 63 37 88 */	addi r3, r3, lbl_80313788@l
/* 80112130 0010EF30  38 83 00 4C */	addi r4, r3, 0x4c
/* 80112134 0010EF34  D0 23 00 4C */	stfs f1, 0x4c(r3)
/* 80112138 0010EF38  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 8011213C 0010EF3C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80112140 0010EF40  40 80 00 08 */	bge lbl_80112148
/* 80112144 0010EF44  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80112148:
/* 80112148 0010EF48  C0 24 00 00 */	lfs f1, 0(r4)
/* 8011214C 0010EF4C  C0 02 9E F8 */	lfs f0, lbl_803CE878-_SDA2_BASE_(r2)
/* 80112150 0010EF50  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80112154 0010EF54  40 81 00 08 */	ble lbl_8011215C
/* 80112158 0010EF58  D0 04 00 00 */	stfs f0, 0(r4)
lbl_8011215C:
/* 8011215C 0010EF5C  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80112160 0010EF60  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80112164 0010EF64  38 63 A6 88 */	addi r3, r3, lbl_8026A688@l
/* 80112168 0010EF68  C0 42 9E F8 */	lfs f2, lbl_803CE878-_SDA2_BASE_(r2)
/* 8011216C 0010EF6C  38 A0 00 00 */	li r5, 0
/* 80112170 0010EF70  38 C0 00 00 */	li r6, 0
/* 80112174 0010EF74  38 63 05 6E */	addi r3, r3, 0x56e
/* 80112178 0010EF78  38 E0 00 00 */	li r7, 0
/* 8011217C 0010EF7C  4B F1 E4 B1 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80112180 0010EF80  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80112184 0010EF84  C0 22 9E FC */	lfs f1, lbl_803CE87C-_SDA2_BASE_(r2)
/* 80112188 0010EF88  38 83 A6 88 */	addi r4, r3, lbl_8026A688@l
/* 8011218C 0010EF8C  7F E3 FB 78 */	mr r3, r31
/* 80112190 0010EF90  38 84 05 8A */	addi r4, r4, 0x58a
/* 80112194 0010EF94  4B F1 E9 B1 */	bl xIniGetFloat__FP8xIniFilePcf
/* 80112198 0010EF98  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 8011219C 0010EF9C  FC 40 08 18 */	frsp f2, f1
/* 801121A0 0010EFA0  38 63 37 88 */	addi r3, r3, lbl_80313788@l
/* 801121A4 0010EFA4  38 83 00 50 */	addi r4, r3, 0x50
/* 801121A8 0010EFA8  D0 23 00 50 */	stfs f1, 0x50(r3)
/* 801121AC 0010EFAC  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 801121B0 0010EFB0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801121B4 0010EFB4  40 80 00 08 */	bge lbl_801121BC
/* 801121B8 0010EFB8  D0 04 00 00 */	stfs f0, 0(r4)
lbl_801121BC:
/* 801121BC 0010EFBC  C0 24 00 00 */	lfs f1, 0(r4)
/* 801121C0 0010EFC0  C0 02 9E B8 */	lfs f0, lbl_803CE838-_SDA2_BASE_(r2)
/* 801121C4 0010EFC4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801121C8 0010EFC8  40 81 00 08 */	ble lbl_801121D0
/* 801121CC 0010EFCC  D0 04 00 00 */	stfs f0, 0(r4)
lbl_801121D0:
/* 801121D0 0010EFD0  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 801121D4 0010EFD4  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 801121D8 0010EFD8  38 63 A6 88 */	addi r3, r3, lbl_8026A688@l
/* 801121DC 0010EFDC  C0 42 9E B8 */	lfs f2, lbl_803CE838-_SDA2_BASE_(r2)
/* 801121E0 0010EFE0  38 A0 00 00 */	li r5, 0
/* 801121E4 0010EFE4  38 C0 00 00 */	li r6, 0
/* 801121E8 0010EFE8  38 63 05 A6 */	addi r3, r3, 0x5a6
/* 801121EC 0010EFEC  38 E0 00 00 */	li r7, 0
/* 801121F0 0010EFF0  4B F1 E4 3D */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 801121F4 0010EFF4  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 801121F8 0010EFF8  C0 22 9F 00 */	lfs f1, lbl_803CE880-_SDA2_BASE_(r2)
/* 801121FC 0010EFFC  38 83 A6 88 */	addi r4, r3, lbl_8026A688@l
/* 80112200 0010F000  7F E3 FB 78 */	mr r3, r31
/* 80112204 0010F004  38 84 05 C1 */	addi r4, r4, 0x5c1
/* 80112208 0010F008  4B F1 E9 3D */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011220C 0010F00C  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 80112210 0010F010  FC 40 08 18 */	frsp f2, f1
/* 80112214 0010F014  38 63 37 88 */	addi r3, r3, lbl_80313788@l
/* 80112218 0010F018  38 83 00 54 */	addi r4, r3, 0x54
/* 8011221C 0010F01C  D0 23 00 54 */	stfs f1, 0x54(r3)
/* 80112220 0010F020  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80112224 0010F024  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80112228 0010F028  40 80 00 08 */	bge lbl_80112230
/* 8011222C 0010F02C  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80112230:
/* 80112230 0010F030  C0 24 00 00 */	lfs f1, 0(r4)
/* 80112234 0010F034  C0 02 9E 88 */	lfs f0, lbl_803CE808-_SDA2_BASE_(r2)
/* 80112238 0010F038  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011223C 0010F03C  40 81 00 08 */	ble lbl_80112244
/* 80112240 0010F040  D0 04 00 00 */	stfs f0, 0(r4)
lbl_80112244:
/* 80112244 0010F044  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80112248 0010F048  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 8011224C 0010F04C  38 63 A6 88 */	addi r3, r3, lbl_8026A688@l
/* 80112250 0010F050  C0 42 9E 88 */	lfs f2, lbl_803CE808-_SDA2_BASE_(r2)
/* 80112254 0010F054  38 A0 00 00 */	li r5, 0
/* 80112258 0010F058  38 C0 00 00 */	li r6, 0
/* 8011225C 0010F05C  38 63 05 DC */	addi r3, r3, 0x5dc
/* 80112260 0010F060  38 E0 00 00 */	li r7, 0
/* 80112264 0010F064  4B F1 E3 C9 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80112268 0010F068  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011226C 0010F06C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80112270 0010F070  7C 08 03 A6 */	mtlr r0
/* 80112274 0010F074  38 21 00 10 */	addi r1, r1, 0x10
/* 80112278 0010F078  4E 80 00 20 */	blr 

.global init__12bungee_stateFv
init__12bungee_stateFv:
/* 8011227C 0010F07C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80112280 0010F080  7C 08 02 A6 */	mflr r0
/* 80112284 0010F084  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 80112288 0010F088  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011228C 0010F08C  38 83 7A 68 */	addi r4, r3, lbl_80297A68@l
/* 80112290 0010F090  80 04 00 00 */	lwz r0, 0(r4)
/* 80112294 0010F094  54 00 07 FE */	clrlwi r0, r0, 0x1f
/* 80112298 0010F098  2C 00 00 01 */	cmpwi r0, 1
/* 8011229C 0010F09C  40 82 00 84 */	bne lbl_80112320
/* 801122A0 0010F0A0  38 00 00 00 */	li r0, 0
/* 801122A4 0010F0A4  38 60 00 03 */	li r3, 3
/* 801122A8 0010F0A8  90 64 00 00 */	stw r3, 0(r4)
/* 801122AC 0010F0AC  90 04 00 04 */	stw r0, 4(r4)
/* 801122B0 0010F0B0  90 04 00 3C */	stw r0, 0x3c(r4)
/* 801122B4 0010F0B4  88 0D 94 F6 */	lbz r0, lbl_803CBDF6-_SDA_BASE_(r13)
/* 801122B8 0010F0B8  7C 00 07 75 */	extsb. r0, r0
/* 801122BC 0010F0BC  40 82 00 18 */	bne lbl_801122D4
/* 801122C0 0010F0C0  3C 60 80 31 */	lis r3, lbl_803137E0@ha
/* 801122C4 0010F0C4  38 63 37 E0 */	addi r3, r3, lbl_803137E0@l
/* 801122C8 0010F0C8  48 00 00 BD */	bl __ct__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_20attaching_state_typeFv
/* 801122CC 0010F0CC  38 00 00 01 */	li r0, 1
/* 801122D0 0010F0D0  98 0D 94 F6 */	stb r0, lbl_803CBDF6-_SDA_BASE_(r13)
lbl_801122D4:
/* 801122D4 0010F0D4  3C 80 80 31 */	lis r4, lbl_803137E0@ha
/* 801122D8 0010F0D8  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 801122DC 0010F0DC  38 04 37 E0 */	addi r0, r4, lbl_803137E0@l
/* 801122E0 0010F0E0  38 63 7A 68 */	addi r3, r3, lbl_80297A68@l
/* 801122E4 0010F0E4  90 03 00 08 */	stw r0, 8(r3)
/* 801122E8 0010F0E8  88 0D 94 F7 */	lbz r0, lbl_803CBDF7-_SDA_BASE_(r13)
/* 801122EC 0010F0EC  7C 00 07 75 */	extsb. r0, r0
/* 801122F0 0010F0F0  40 82 00 18 */	bne lbl_80112308
/* 801122F4 0010F0F4  3C 60 80 31 */	lis r3, lbl_8031382C@ha
/* 801122F8 0010F0F8  38 63 38 2C */	addi r3, r3, lbl_8031382C@l
/* 801122FC 0010F0FC  48 00 00 35 */	bl __ct__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv
/* 80112300 0010F100  38 00 00 01 */	li r0, 1
/* 80112304 0010F104  98 0D 94 F7 */	stb r0, lbl_803CBDF7-_SDA_BASE_(r13)
lbl_80112308:
/* 80112308 0010F108  3C 80 80 31 */	lis r4, lbl_8031382C@ha
/* 8011230C 0010F10C  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 80112310 0010F110  38 04 38 2C */	addi r0, r4, lbl_8031382C@l
/* 80112314 0010F114  38 63 7A 68 */	addi r3, r3, lbl_80297A68@l
/* 80112318 0010F118  90 03 00 0C */	stw r0, 0xc(r3)
/* 8011231C 0010F11C  4B FF F3 BD */	bl init_cache__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv
lbl_80112320:
/* 80112320 0010F120  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80112324 0010F124  7C 08 03 A6 */	mtlr r0
/* 80112328 0010F128  38 21 00 10 */	addi r1, r1, 0x10
/* 8011232C 0010F12C  4E 80 00 20 */	blr 

/* __ct__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv */
__ct__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv:
/* 80112330 0010F130  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80112334 0010F134  7C 08 02 A6 */	mflr r0
/* 80112338 0010F138  38 80 00 01 */	li r4, 1
/* 8011233C 0010F13C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80112340 0010F140  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80112344 0010F144  7C 7F 1B 78 */	mr r31, r3
/* 80112348 0010F148  48 00 00 29 */	bl __ct__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_10state_typeFQ312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_10state_enum
/* 8011234C 0010F14C  3C 80 80 29 */	lis r4, __vt__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type@ha
/* 80112350 0010F150  7F E3 FB 78 */	mr r3, r31
/* 80112354 0010F154  38 04 7C 40 */	addi r0, r4, __vt__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type@l
/* 80112358 0010F158  90 1F 00 04 */	stw r0, 4(r31)
/* 8011235C 0010F15C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80112360 0010F160  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80112364 0010F164  7C 08 03 A6 */	mtlr r0
/* 80112368 0010F168  38 21 00 10 */	addi r1, r1, 0x10
/* 8011236C 0010F16C  4E 80 00 20 */	blr 

/* __ct__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10state_typeFQ312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10state_enum */
__ct__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_10state_typeFQ312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_10state_enum:
/* 80112370 0010F170  3C A0 80 29 */	lis r5, __vt__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_10state_type@ha
/* 80112374 0010F174  38 05 7C 28 */	addi r0, r5, __vt__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_10state_type@l
/* 80112378 0010F178  90 03 00 04 */	stw r0, 4(r3)
/* 8011237C 0010F17C  90 83 00 00 */	stw r4, 0(r3)
/* 80112380 0010F180  4E 80 00 20 */	blr 

/* __ct__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@20attaching_state_typeFv */
__ct__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_20attaching_state_typeFv:
/* 80112384 0010F184  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80112388 0010F188  7C 08 02 A6 */	mflr r0
/* 8011238C 0010F18C  38 80 00 00 */	li r4, 0
/* 80112390 0010F190  90 01 00 14 */	stw r0, 0x14(r1)
/* 80112394 0010F194  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80112398 0010F198  7C 7F 1B 78 */	mr r31, r3
/* 8011239C 0010F19C  4B FF FF D5 */	bl __ct__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_10state_typeFQ312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_10state_enum
/* 801123A0 0010F1A0  3C 80 80 29 */	lis r4, __vt__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_20attaching_state_type@ha
/* 801123A4 0010F1A4  7F E3 FB 78 */	mr r3, r31
/* 801123A8 0010F1A8  38 04 7C 10 */	addi r0, r4, __vt__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_20attaching_state_type@l
/* 801123AC 0010F1AC  90 1F 00 04 */	stw r0, 4(r31)
/* 801123B0 0010F1B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801123B4 0010F1B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801123B8 0010F1B8  7C 08 03 A6 */	mtlr r0
/* 801123BC 0010F1BC  38 21 00 10 */	addi r1, r1, 0x10
/* 801123C0 0010F1C0  4E 80 00 20 */	blr 

.global destroy__12bungee_stateFv
destroy__12bungee_stateFv:
/* 801123C4 0010F1C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801123C8 0010F1C8  7C 08 02 A6 */	mflr r0
/* 801123CC 0010F1CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801123D0 0010F1D0  48 00 02 A1 */	bl stop__12bungee_stateFv
/* 801123D4 0010F1D4  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 801123D8 0010F1D8  4B FB D1 75 */	bl iCameraSetBlurriness__Ff
/* 801123DC 0010F1DC  38 60 00 04 */	li r3, 4
/* 801123E0 0010F1E0  4B F3 FD 31 */	bl zCameraEnableTracking__F17camera_owner_enum
/* 801123E4 0010F1E4  38 60 00 01 */	li r3, 1
/* 801123E8 0010F1E8  38 80 00 04 */	li r4, 4
/* 801123EC 0010F1EC  4B EF B1 A5 */	bl xCameraDoCollisions__Fii
/* 801123F0 0010F1F0  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 801123F4 0010F1F4  38 00 00 03 */	li r0, 3
/* 801123F8 0010F1F8  90 03 7A 68 */	stw r0, lbl_80297A68@l(r3)
/* 801123FC 0010F1FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80112400 0010F200  7C 08 03 A6 */	mtlr r0
/* 80112404 0010F204  38 21 00 10 */	addi r1, r1, 0x10
/* 80112408 0010F208  4E 80 00 20 */	blr 

.global reset__12bungee_stateFv
reset__12bungee_stateFv:
/* 8011240C 0010F20C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80112410 0010F210  7C 08 02 A6 */	mflr r0
/* 80112414 0010F214  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 80112418 0010F218  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011241C 0010F21C  80 03 7A 68 */	lwz r0, lbl_80297A68@l(r3)
/* 80112420 0010F220  54 00 07 BE */	clrlwi r0, r0, 0x1e
/* 80112424 0010F224  2C 00 00 03 */	cmpwi r0, 3
/* 80112428 0010F228  40 82 00 34 */	bne lbl_8011245C
/* 8011242C 0010F22C  48 00 02 45 */	bl stop__12bungee_stateFv
/* 80112430 0010F230  4B FF ED BD */	bl fade_hook_reset__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv
/* 80112434 0010F234  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80112438 0010F238  4B FB D1 15 */	bl iCameraSetBlurriness__Ff
/* 8011243C 0010F23C  38 60 00 04 */	li r3, 4
/* 80112440 0010F240  4B F3 FC D1 */	bl zCameraEnableTracking__F17camera_owner_enum
/* 80112444 0010F244  38 60 00 01 */	li r3, 1
/* 80112448 0010F248  38 80 00 04 */	li r4, 4
/* 8011244C 0010F24C  4B EF B1 45 */	bl xCameraDoCollisions__Fii
/* 80112450 0010F250  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 80112454 0010F254  38 00 00 03 */	li r0, 3
/* 80112458 0010F258  90 03 7A 68 */	stw r0, lbl_80297A68@l(r3)
lbl_8011245C:
/* 8011245C 0010F25C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80112460 0010F260  7C 08 03 A6 */	mtlr r0
/* 80112464 0010F264  38 21 00 10 */	addi r1, r1, 0x10
/* 80112468 0010F268  4E 80 00 20 */	blr 

.global active__12bungee_stateFv
active__12bungee_stateFv:
/* 8011246C 0010F26C  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 80112470 0010F270  38 63 7A 68 */	addi r3, r3, lbl_80297A68@l
/* 80112474 0010F274  80 63 00 04 */	lwz r3, 4(r3)
/* 80112478 0010F278  7C 03 00 D0 */	neg r0, r3
/* 8011247C 0010F27C  7C 00 1B 78 */	or r0, r0, r3
/* 80112480 0010F280  54 03 0F FE */	srwi r3, r0, 0x1f
/* 80112484 0010F284  4E 80 00 20 */	blr 

.global landed__12bungee_stateFv
landed__12bungee_stateFv:
/* 80112488 0010F288  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 8011248C 0010F28C  38 60 00 00 */	li r3, 0
/* 80112490 0010F290  38 84 7A 68 */	addi r4, r4, lbl_80297A68@l
/* 80112494 0010F294  80 04 00 04 */	lwz r0, 4(r4)
/* 80112498 0010F298  28 00 00 00 */	cmplwi r0, 0
/* 8011249C 0010F29C  4C 82 00 20 */	bnelr 
/* 801124A0 0010F2A0  C0 24 01 94 */	lfs f1, 0x194(r4)
/* 801124A4 0010F2A4  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 801124A8 0010F2A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801124AC 0010F2AC  4C 40 13 82 */	cror 2, 0, 2
/* 801124B0 0010F2B0  4C 82 00 20 */	bnelr 
/* 801124B4 0010F2B4  38 60 00 01 */	li r3, 1
/* 801124B8 0010F2B8  4E 80 00 20 */	blr 

.global update__12bungee_stateFP6xScenef
update__12bungee_stateFP6xScenef:
/* 801124BC 0010F2BC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801124C0 0010F2C0  7C 08 02 A6 */	mflr r0
/* 801124C4 0010F2C4  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 801124C8 0010F2C8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801124CC 0010F2CC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801124D0 0010F2D0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801124D4 0010F2D4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801124D8 0010F2D8  7C 7D 1B 78 */	mr r29, r3
/* 801124DC 0010F2DC  80 04 7A 68 */	lwz r0, lbl_80297A68@l(r4)
/* 801124E0 0010F2E0  D0 21 00 08 */	stfs f1, 8(r1)
/* 801124E4 0010F2E4  54 00 07 BE */	clrlwi r0, r0, 0x1e
/* 801124E8 0010F2E8  2C 00 00 03 */	cmpwi r0, 3
/* 801124EC 0010F2EC  41 82 00 0C */	beq lbl_801124F8
/* 801124F0 0010F2F0  38 60 00 00 */	li r3, 0
/* 801124F4 0010F2F4  48 00 01 08 */	b lbl_801125FC
lbl_801124F8:
/* 801124F8 0010F2F8  FC 20 08 18 */	frsp f1, f1
/* 801124FC 0010F2FC  4B FF EE 35 */	bl fade_hook_update__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Ff
/* 80112500 0010F300  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 80112504 0010F304  C0 01 00 08 */	lfs f0, 8(r1)
/* 80112508 0010F308  38 63 7A 68 */	addi r3, r3, lbl_80297A68@l
/* 8011250C 0010F30C  C0 43 01 94 */	lfs f2, 0x194(r3)
/* 80112510 0010F310  EC 22 00 28 */	fsubs f1, f2, f0
/* 80112514 0010F314  D0 23 01 94 */	stfs f1, 0x194(r3)
/* 80112518 0010F318  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 8011251C 0010F31C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80112520 0010F320  40 81 00 0C */	ble lbl_8011252C
/* 80112524 0010F324  38 60 00 00 */	li r3, 0
/* 80112528 0010F328  48 00 00 D4 */	b lbl_801125FC
lbl_8011252C:
/* 8011252C 0010F32C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80112530 0010F330  40 81 00 10 */	ble lbl_80112540
/* 80112534 0010F334  38 60 00 01 */	li r3, 1
/* 80112538 0010F338  38 80 00 04 */	li r4, 4
/* 8011253C 0010F33C  4B EF B0 55 */	bl xCameraDoCollisions__Fii
lbl_80112540:
/* 80112540 0010F340  38 60 20 00 */	li r3, 0x2000
/* 80112544 0010F344  4B F5 3F BD */	bl zEntPlayerControlOn__F13zControlOwner
/* 80112548 0010F348  4B FF EE DD */	bl start__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv
/* 8011254C 0010F34C  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 80112550 0010F350  3B C3 7A 68 */	addi r30, r3, lbl_80297A68@l
/* 80112554 0010F354  80 1E 00 04 */	lwz r0, 4(r30)
/* 80112558 0010F358  28 00 00 00 */	cmplwi r0, 0
/* 8011255C 0010F35C  40 82 00 0C */	bne lbl_80112568
/* 80112560 0010F360  38 60 00 00 */	li r3, 0
/* 80112564 0010F364  48 00 00 98 */	b lbl_801125FC
lbl_80112568:
/* 80112568 0010F368  80 7E 00 04 */	lwz r3, 4(r30)
/* 8011256C 0010F36C  7F A4 EB 78 */	mr r4, r29
/* 80112570 0010F370  38 A1 00 08 */	addi r5, r1, 8
/* 80112574 0010F374  81 83 00 04 */	lwz r12, 4(r3)
/* 80112578 0010F378  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8011257C 0010F37C  7D 89 03 A6 */	mtctr r12
/* 80112580 0010F380  4E 80 04 21 */	bctrl 
/* 80112584 0010F384  80 9E 00 04 */	lwz r4, 4(r30)
/* 80112588 0010F388  7C 7F 1B 78 */	mr r31, r3
/* 8011258C 0010F38C  80 04 00 00 */	lwz r0, 0(r4)
/* 80112590 0010F390  7C 1F 00 00 */	cmpw r31, r0
/* 80112594 0010F394  41 82 00 4C */	beq lbl_801125E0
/* 80112598 0010F398  2C 1F FF FF */	cmpwi r31, -1
/* 8011259C 0010F39C  40 82 00 0C */	bne lbl_801125A8
/* 801125A0 0010F3A0  48 00 00 D1 */	bl stop__12bungee_stateFv
/* 801125A4 0010F3A4  48 00 00 3C */	b lbl_801125E0
lbl_801125A8:
/* 801125A8 0010F3A8  7C 83 23 78 */	mr r3, r4
/* 801125AC 0010F3AC  81 84 00 04 */	lwz r12, 4(r4)
/* 801125B0 0010F3B0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801125B4 0010F3B4  7D 89 03 A6 */	mtctr r12
/* 801125B8 0010F3B8  4E 80 04 21 */	bctrl 
/* 801125BC 0010F3BC  57 E0 10 3A */	slwi r0, r31, 2
/* 801125C0 0010F3C0  7C 7E 02 14 */	add r3, r30, r0
/* 801125C4 0010F3C4  80 63 00 08 */	lwz r3, 8(r3)
/* 801125C8 0010F3C8  90 7E 00 04 */	stw r3, 4(r30)
/* 801125CC 0010F3CC  81 83 00 04 */	lwz r12, 4(r3)
/* 801125D0 0010F3D0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801125D4 0010F3D4  7D 89 03 A6 */	mtctr r12
/* 801125D8 0010F3D8  4E 80 04 21 */	bctrl 
/* 801125DC 0010F3DC  4B FF FF 8C */	b lbl_80112568
lbl_801125E0:
/* 801125E0 0010F3E0  C0 21 00 08 */	lfs f1, 8(r1)
/* 801125E4 0010F3E4  7F A3 EB 78 */	mr r3, r29
/* 801125E8 0010F3E8  4B FF F1 E1 */	bl common_update__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FR6xScenef
/* 801125EC 0010F3EC  80 7E 00 04 */	lwz r3, 4(r30)
/* 801125F0 0010F3F0  7C 03 00 D0 */	neg r0, r3
/* 801125F4 0010F3F4  7C 00 1B 78 */	or r0, r0, r3
/* 801125F8 0010F3F8  54 03 0F FE */	srwi r3, r0, 0x1f
lbl_801125FC:
/* 801125FC 0010F3FC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80112600 0010F400  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80112604 0010F404  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80112608 0010F408  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8011260C 0010F40C  7C 08 03 A6 */	mtlr r0
/* 80112610 0010F410  38 21 00 20 */	addi r1, r1, 0x20
/* 80112614 0010F414  4E 80 00 20 */	blr 

stop__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_10state_typeFv:
/* 80112618 0010F418  4E 80 00 20 */	blr 

.global render__12bungee_stateFv
render__12bungee_stateFv:
/* 8011261C 0010F41C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80112620 0010F420  7C 08 02 A6 */	mflr r0
/* 80112624 0010F424  3C 60 80 29 */	lis r3, 0x8029
/* 80112628 0010F428  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011262C 0010F42C  84 03 7A 68 */	lwzu r0, 0x7a68(r3)
/* 80112630 0010F430  54 00 07 7E */	clrlwi r0, r0, 0x1d
/* 80112634 0010F434  2C 00 00 07 */	cmpwi r0, 7
/* 80112638 0010F438  41 82 00 0C */	beq lbl_80112644
/* 8011263C 0010F43C  38 60 00 00 */	li r3, 0
/* 80112640 0010F440  48 00 00 1C */	b lbl_8011265C
lbl_80112644:
/* 80112644 0010F444  80 63 00 04 */	lwz r3, 4(r3)
/* 80112648 0010F448  81 83 00 04 */	lwz r12, 4(r3)
/* 8011264C 0010F44C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80112650 0010F450  7D 89 03 A6 */	mtctr r12
/* 80112654 0010F454  4E 80 04 21 */	bctrl 
/* 80112658 0010F458  38 60 00 01 */	li r3, 1
lbl_8011265C:
/* 8011265C 0010F45C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80112660 0010F460  7C 08 03 A6 */	mtlr r0
/* 80112664 0010F464  38 21 00 10 */	addi r1, r1, 0x10
/* 80112668 0010F468  4E 80 00 20 */	blr 

render__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_10state_typeFv:
/* 8011266C 0010F46C  4E 80 00 20 */	blr 

.global stop__12bungee_stateFv
stop__12bungee_stateFv:
/* 80112670 0010F470  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80112674 0010F474  7C 08 02 A6 */	mflr r0
/* 80112678 0010F478  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 8011267C 0010F47C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80112680 0010F480  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80112684 0010F484  80 03 7A 68 */	lwz r0, lbl_80297A68@l(r3)
/* 80112688 0010F488  54 00 07 7E */	clrlwi r0, r0, 0x1d
/* 8011268C 0010F48C  2C 00 00 07 */	cmpwi r0, 7
/* 80112690 0010F490  40 82 00 44 */	bne lbl_801126D4
/* 80112694 0010F494  4B FF EC 2D */	bl fade_hook_in__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv
/* 80112698 0010F498  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 8011269C 0010F49C  3B E3 7A 68 */	addi r31, r3, lbl_80297A68@l
/* 801126A0 0010F4A0  80 7F 00 04 */	lwz r3, 4(r31)
/* 801126A4 0010F4A4  28 03 00 00 */	cmplwi r3, 0
/* 801126A8 0010F4A8  41 82 00 14 */	beq lbl_801126BC
/* 801126AC 0010F4AC  81 83 00 04 */	lwz r12, 4(r3)
/* 801126B0 0010F4B0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801126B4 0010F4B4  7D 89 03 A6 */	mtctr r12
/* 801126B8 0010F4B8  4E 80 04 21 */	bctrl 
lbl_801126BC:
/* 801126BC 0010F4BC  38 00 00 00 */	li r0, 0
/* 801126C0 0010F4C0  3C 60 80 29 */	lis r3, lbl_80290000@ha
/* 801126C4 0010F4C4  90 1F 00 04 */	stw r0, 4(r31)
/* 801126C8 0010F4C8  84 03 7A 68 */	lwzu r0, 0x7a68(r3)
/* 801126CC 0010F4CC  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 801126D0 0010F4D0  90 03 00 00 */	stw r0, lbl_80290000@l(r3)
lbl_801126D4:
/* 801126D4 0010F4D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801126D8 0010F4D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801126DC 0010F4DC  7C 08 03 A6 */	mtlr r0
/* 801126E0 0010F4E0  38 21 00 10 */	addi r1, r1, 0x10
/* 801126E4 0010F4E4  4E 80 00 20 */	blr 

.global insert_animations__12bungee_stateFR10xAnimTable
insert_animations__12bungee_stateFR10xAnimTable:
/* 801126E8 0010F4E8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801126EC 0010F4EC  7C 08 02 A6 */	mflr r0
/* 801126F0 0010F4F0  3C A0 80 00 */	lis r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 801126F4 0010F4F4  3C 80 80 27 */	lis r4, lbl_8026A688@ha
/* 801126F8 0010F4F8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801126FC 0010F4FC  38 84 A6 88 */	addi r4, r4, lbl_8026A688@l
/* 80112700 0010F500  38 A5 6C FC */	addi r5, r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80112704 0010F504  38 00 00 00 */	li r0, 0
/* 80112708 0010F508  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8011270C 0010F50C  38 84 05 F6 */	addi r4, r4, 0x5f6
/* 80112710 0010F510  38 C0 00 00 */	li r6, 0
/* 80112714 0010F514  38 E0 00 00 */	li r7, 0
/* 80112718 0010F518  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8011271C 0010F51C  7C 7E 1B 78 */	mr r30, r3
/* 80112720 0010F520  39 00 00 00 */	li r8, 0
/* 80112724 0010F524  39 20 00 00 */	li r9, 0
/* 80112728 0010F528  90 A1 00 08 */	stw r5, 8(r1)
/* 8011272C 0010F52C  38 A0 00 10 */	li r5, 0x10
/* 80112730 0010F530  39 40 00 00 */	li r10, 0
/* 80112734 0010F534  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112738 0010F538  90 01 00 10 */	stw r0, 0x10(r1)
/* 8011273C 0010F53C  C0 22 9E 88 */	lfs f1, lbl_803CE808-_SDA2_BASE_(r2)
/* 80112740 0010F540  C0 42 9E A0 */	lfs f2, lbl_803CE820-_SDA2_BASE_(r2)
/* 80112744 0010F544  4B EF 46 15 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80112748 0010F548  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8011274C 0010F54C  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80112750 0010F550  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80112754 0010F554  38 00 00 00 */	li r0, 0
/* 80112758 0010F558  90 81 00 08 */	stw r4, 8(r1)
/* 8011275C 0010F55C  38 83 A6 88 */	addi r4, r3, lbl_8026A688@l
/* 80112760 0010F560  7F C3 F3 78 */	mr r3, r30
/* 80112764 0010F564  38 A0 00 10 */	li r5, 0x10
/* 80112768 0010F568  90 01 00 0C */	stw r0, 0xc(r1)
/* 8011276C 0010F56C  38 84 06 06 */	addi r4, r4, 0x606
/* 80112770 0010F570  38 C0 00 00 */	li r6, 0
/* 80112774 0010F574  38 E0 00 00 */	li r7, 0
/* 80112778 0010F578  90 01 00 10 */	stw r0, 0x10(r1)
/* 8011277C 0010F57C  39 00 00 00 */	li r8, 0
/* 80112780 0010F580  39 20 00 00 */	li r9, 0
/* 80112784 0010F584  39 40 00 00 */	li r10, 0
/* 80112788 0010F588  C0 22 9E 88 */	lfs f1, lbl_803CE808-_SDA2_BASE_(r2)
/* 8011278C 0010F58C  C0 42 9E A0 */	lfs f2, lbl_803CE820-_SDA2_BASE_(r2)
/* 80112790 0010F590  4B EF 45 C9 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80112794 0010F594  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80112798 0010F598  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 8011279C 0010F59C  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 801127A0 0010F5A0  38 00 00 00 */	li r0, 0
/* 801127A4 0010F5A4  90 81 00 08 */	stw r4, 8(r1)
/* 801127A8 0010F5A8  38 83 A6 88 */	addi r4, r3, lbl_8026A688@l
/* 801127AC 0010F5AC  7F C3 F3 78 */	mr r3, r30
/* 801127B0 0010F5B0  38 A0 00 00 */	li r5, 0
/* 801127B4 0010F5B4  90 01 00 0C */	stw r0, 0xc(r1)
/* 801127B8 0010F5B8  38 84 06 13 */	addi r4, r4, 0x613
/* 801127BC 0010F5BC  38 C0 00 00 */	li r6, 0
/* 801127C0 0010F5C0  38 E0 00 00 */	li r7, 0
/* 801127C4 0010F5C4  90 01 00 10 */	stw r0, 0x10(r1)
/* 801127C8 0010F5C8  39 00 00 00 */	li r8, 0
/* 801127CC 0010F5CC  39 20 00 00 */	li r9, 0
/* 801127D0 0010F5D0  39 40 00 00 */	li r10, 0
/* 801127D4 0010F5D4  C0 22 9E 88 */	lfs f1, lbl_803CE808-_SDA2_BASE_(r2)
/* 801127D8 0010F5D8  C0 42 9E A0 */	lfs f2, lbl_803CE820-_SDA2_BASE_(r2)
/* 801127DC 0010F5DC  4B EF 45 7D */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 801127E0 0010F5E0  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 801127E4 0010F5E4  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 801127E8 0010F5E8  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 801127EC 0010F5EC  38 00 00 00 */	li r0, 0
/* 801127F0 0010F5F0  90 81 00 08 */	stw r4, 8(r1)
/* 801127F4 0010F5F4  38 83 A6 88 */	addi r4, r3, lbl_8026A688@l
/* 801127F8 0010F5F8  7F C3 F3 78 */	mr r3, r30
/* 801127FC 0010F5FC  38 A0 00 20 */	li r5, 0x20
/* 80112800 0010F600  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112804 0010F604  38 84 06 21 */	addi r4, r4, 0x621
/* 80112808 0010F608  38 C0 00 00 */	li r6, 0
/* 8011280C 0010F60C  38 E0 00 00 */	li r7, 0
/* 80112810 0010F610  90 01 00 10 */	stw r0, 0x10(r1)
/* 80112814 0010F614  39 00 00 00 */	li r8, 0
/* 80112818 0010F618  39 20 00 00 */	li r9, 0
/* 8011281C 0010F61C  39 40 00 00 */	li r10, 0
/* 80112820 0010F620  C0 22 9E 88 */	lfs f1, lbl_803CE808-_SDA2_BASE_(r2)
/* 80112824 0010F624  C0 42 9E A0 */	lfs f2, lbl_803CE820-_SDA2_BASE_(r2)
/* 80112828 0010F628  4B EF 45 31 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8011282C 0010F62C  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80112830 0010F630  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80112834 0010F634  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80112838 0010F638  38 00 00 00 */	li r0, 0
/* 8011283C 0010F63C  90 81 00 08 */	stw r4, 8(r1)
/* 80112840 0010F640  38 83 A6 88 */	addi r4, r3, lbl_8026A688@l
/* 80112844 0010F644  7F C3 F3 78 */	mr r3, r30
/* 80112848 0010F648  38 A0 00 20 */	li r5, 0x20
/* 8011284C 0010F64C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112850 0010F650  38 84 06 2E */	addi r4, r4, 0x62e
/* 80112854 0010F654  38 C0 00 00 */	li r6, 0
/* 80112858 0010F658  38 E0 00 00 */	li r7, 0
/* 8011285C 0010F65C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80112860 0010F660  39 00 00 00 */	li r8, 0
/* 80112864 0010F664  39 20 00 00 */	li r9, 0
/* 80112868 0010F668  39 40 00 00 */	li r10, 0
/* 8011286C 0010F66C  C0 22 9E 88 */	lfs f1, lbl_803CE808-_SDA2_BASE_(r2)
/* 80112870 0010F670  C0 42 9E A0 */	lfs f2, lbl_803CE820-_SDA2_BASE_(r2)
/* 80112874 0010F674  4B EF 44 E5 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80112878 0010F678  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8011287C 0010F67C  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80112880 0010F680  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80112884 0010F684  38 00 00 00 */	li r0, 0
/* 80112888 0010F688  90 81 00 08 */	stw r4, 8(r1)
/* 8011288C 0010F68C  38 83 A6 88 */	addi r4, r3, lbl_8026A688@l
/* 80112890 0010F690  7F C3 F3 78 */	mr r3, r30
/* 80112894 0010F694  38 A0 00 10 */	li r5, 0x10
/* 80112898 0010F698  90 01 00 0C */	stw r0, 0xc(r1)
/* 8011289C 0010F69C  38 84 06 3D */	addi r4, r4, 0x63d
/* 801128A0 0010F6A0  38 C0 00 00 */	li r6, 0
/* 801128A4 0010F6A4  38 E0 00 00 */	li r7, 0
/* 801128A8 0010F6A8  90 01 00 10 */	stw r0, 0x10(r1)
/* 801128AC 0010F6AC  39 00 00 00 */	li r8, 0
/* 801128B0 0010F6B0  39 20 00 00 */	li r9, 0
/* 801128B4 0010F6B4  39 40 00 00 */	li r10, 0
/* 801128B8 0010F6B8  C0 22 9E 88 */	lfs f1, lbl_803CE808-_SDA2_BASE_(r2)
/* 801128BC 0010F6BC  C0 42 9E A0 */	lfs f2, lbl_803CE820-_SDA2_BASE_(r2)
/* 801128C0 0010F6C0  4B EF 44 99 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 801128C4 0010F6C4  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 801128C8 0010F6C8  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 801128CC 0010F6CC  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 801128D0 0010F6D0  38 00 00 00 */	li r0, 0
/* 801128D4 0010F6D4  90 81 00 08 */	stw r4, 8(r1)
/* 801128D8 0010F6D8  38 83 A6 88 */	addi r4, r3, lbl_8026A688@l
/* 801128DC 0010F6DC  7F C3 F3 78 */	mr r3, r30
/* 801128E0 0010F6E0  38 A0 00 00 */	li r5, 0
/* 801128E4 0010F6E4  90 01 00 0C */	stw r0, 0xc(r1)
/* 801128E8 0010F6E8  38 84 06 4C */	addi r4, r4, 0x64c
/* 801128EC 0010F6EC  38 C0 00 00 */	li r6, 0
/* 801128F0 0010F6F0  38 E0 00 00 */	li r7, 0
/* 801128F4 0010F6F4  90 01 00 10 */	stw r0, 0x10(r1)
/* 801128F8 0010F6F8  39 00 00 00 */	li r8, 0
/* 801128FC 0010F6FC  39 20 00 00 */	li r9, 0
/* 80112900 0010F700  39 40 00 00 */	li r10, 0
/* 80112904 0010F704  C0 22 9E 88 */	lfs f1, lbl_803CE808-_SDA2_BASE_(r2)
/* 80112908 0010F708  C0 42 9E A0 */	lfs f2, lbl_803CE820-_SDA2_BASE_(r2)
/* 8011290C 0010F70C  4B EF 44 4D */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80112910 0010F710  88 0D 94 FC */	lbz r0, lbl_803CBDFC-_SDA_BASE_(r13)
/* 80112914 0010F714  7C 00 07 75 */	extsb. r0, r0
/* 80112918 0010F718  40 82 00 1C */	bne lbl_80112934
/* 8011291C 0010F71C  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80112920 0010F720  38 00 00 01 */	li r0, 1
/* 80112924 0010F724  38 63 A6 88 */	addi r3, r3, lbl_8026A688@l
/* 80112928 0010F728  38 63 06 5B */	addi r3, r3, 0x65b
/* 8011292C 0010F72C  90 6D 94 F8 */	stw r3, lbl_803CBDF8-_SDA_BASE_(r13)
/* 80112930 0010F730  98 0D 94 FC */	stb r0, lbl_803CBDFC-_SDA_BASE_(r13)
lbl_80112934:
/* 80112934 0010F734  88 0D 95 04 */	lbz r0, lbl_803CBE04-_SDA_BASE_(r13)
/* 80112938 0010F738  7C 00 07 75 */	extsb. r0, r0
/* 8011293C 0010F73C  40 82 00 1C */	bne lbl_80112958
/* 80112940 0010F740  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80112944 0010F744  38 00 00 01 */	li r0, 1
/* 80112948 0010F748  38 63 A6 88 */	addi r3, r3, lbl_8026A688@l
/* 8011294C 0010F74C  38 63 06 3D */	addi r3, r3, 0x63d
/* 80112950 0010F750  90 6D 95 00 */	stw r3, lbl_803CBE00-_SDA_BASE_(r13)
/* 80112954 0010F754  98 0D 95 04 */	stb r0, lbl_803CBE04-_SDA_BASE_(r13)
lbl_80112958:
/* 80112958 0010F758  38 00 00 00 */	li r0, 0
/* 8011295C 0010F75C  3C 60 80 11 */	lis r3, check_anim_start__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FP15xAnimTransitionP11xAnimSinglePv@ha
/* 80112960 0010F760  90 01 00 08 */	stw r0, 8(r1)
/* 80112964 0010F764  38 C3 0F 98 */	addi r6, r3, check_anim_start__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FP15xAnimTransitionP11xAnimSinglePv@l
/* 80112968 0010F768  7F C3 F3 78 */	mr r3, r30
/* 8011296C 0010F76C  38 E0 00 00 */	li r7, 0
/* 80112970 0010F770  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112974 0010F774  39 00 00 10 */	li r8, 0x10
/* 80112978 0010F778  39 20 00 00 */	li r9, 0
/* 8011297C 0010F77C  39 40 00 00 */	li r10, 0
/* 80112980 0010F780  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80112984 0010F784  80 8D 94 F8 */	lwz r4, lbl_803CBDF8-_SDA_BASE_(r13)
/* 80112988 0010F788  FC 40 08 90 */	fmr f2, f1
/* 8011298C 0010F78C  80 AD 95 00 */	lwz r5, lbl_803CBE00-_SDA_BASE_(r13)
/* 80112990 0010F790  C0 62 9E 8C */	lfs f3, lbl_803CE80C-_SDA2_BASE_(r2)
/* 80112994 0010F794  4B EF 4A 2D */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80112998 0010F798  3C A0 80 29 */	lis r5, lbl_80297A68@ha
/* 8011299C 0010F79C  3C 80 80 31 */	lis r4, lbl_80313788@ha
/* 801129A0 0010F7A0  38 C5 7A 68 */	addi r6, r5, lbl_80297A68@l
/* 801129A4 0010F7A4  3C A0 80 27 */	lis r5, lbl_8026A688@ha
/* 801129A8 0010F7A8  90 66 00 10 */	stw r3, 0x10(r6)
/* 801129AC 0010F7AC  38 A5 A6 88 */	addi r5, r5, lbl_8026A688@l
/* 801129B0 0010F7B0  38 00 00 00 */	li r0, 0
/* 801129B4 0010F7B4  39 44 37 88 */	addi r10, r4, lbl_80313788@l
/* 801129B8 0010F7B8  90 01 00 08 */	stw r0, 8(r1)
/* 801129BC 0010F7BC  7F C3 F3 78 */	mr r3, r30
/* 801129C0 0010F7C0  38 85 06 3D */	addi r4, r5, 0x63d
/* 801129C4 0010F7C4  38 A5 06 13 */	addi r5, r5, 0x613
/* 801129C8 0010F7C8  90 01 00 0C */	stw r0, 0xc(r1)
/* 801129CC 0010F7CC  38 C0 00 00 */	li r6, 0
/* 801129D0 0010F7D0  38 E0 00 00 */	li r7, 0
/* 801129D4 0010F7D4  39 00 00 10 */	li r8, 0x10
/* 801129D8 0010F7D8  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 801129DC 0010F7DC  39 20 00 00 */	li r9, 0
/* 801129E0 0010F7E0  C0 6A 00 3C */	lfs f3, 0x3c(r10)
/* 801129E4 0010F7E4  39 40 00 00 */	li r10, 0
/* 801129E8 0010F7E8  FC 40 08 90 */	fmr f2, f1
/* 801129EC 0010F7EC  4B EF 49 D5 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 801129F0 0010F7F0  3C A0 80 29 */	lis r5, lbl_80297A68@ha
/* 801129F4 0010F7F4  3C 80 80 31 */	lis r4, lbl_80313788@ha
/* 801129F8 0010F7F8  38 C5 7A 68 */	addi r6, r5, lbl_80297A68@l
/* 801129FC 0010F7FC  3C A0 80 27 */	lis r5, lbl_8026A688@ha
/* 80112A00 0010F800  90 66 00 20 */	stw r3, 0x20(r6)
/* 80112A04 0010F804  38 A5 A6 88 */	addi r5, r5, lbl_8026A688@l
/* 80112A08 0010F808  38 00 00 00 */	li r0, 0
/* 80112A0C 0010F80C  39 44 37 88 */	addi r10, r4, lbl_80313788@l
/* 80112A10 0010F810  90 01 00 08 */	stw r0, 8(r1)
/* 80112A14 0010F814  7F C3 F3 78 */	mr r3, r30
/* 80112A18 0010F818  38 85 06 13 */	addi r4, r5, 0x613
/* 80112A1C 0010F81C  38 A5 06 3D */	addi r5, r5, 0x63d
/* 80112A20 0010F820  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112A24 0010F824  38 C0 00 00 */	li r6, 0
/* 80112A28 0010F828  38 E0 00 00 */	li r7, 0
/* 80112A2C 0010F82C  39 00 00 10 */	li r8, 0x10
/* 80112A30 0010F830  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80112A34 0010F834  39 20 00 00 */	li r9, 0
/* 80112A38 0010F838  C0 6A 00 40 */	lfs f3, 0x40(r10)
/* 80112A3C 0010F83C  39 40 00 00 */	li r10, 0
/* 80112A40 0010F840  FC 40 08 90 */	fmr f2, f1
/* 80112A44 0010F844  4B EF 49 7D */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80112A48 0010F848  3C A0 80 29 */	lis r5, lbl_80297A68@ha
/* 80112A4C 0010F84C  3C 80 80 31 */	lis r4, lbl_80313788@ha
/* 80112A50 0010F850  38 C5 7A 68 */	addi r6, r5, lbl_80297A68@l
/* 80112A54 0010F854  3C A0 80 27 */	lis r5, lbl_8026A688@ha
/* 80112A58 0010F858  90 66 00 24 */	stw r3, 0x24(r6)
/* 80112A5C 0010F85C  38 A5 A6 88 */	addi r5, r5, lbl_8026A688@l
/* 80112A60 0010F860  38 00 00 00 */	li r0, 0
/* 80112A64 0010F864  3B E4 37 88 */	addi r31, r4, lbl_80313788@l
/* 80112A68 0010F868  90 01 00 08 */	stw r0, 8(r1)
/* 80112A6C 0010F86C  7F C3 F3 78 */	mr r3, r30
/* 80112A70 0010F870  38 85 06 3D */	addi r4, r5, 0x63d
/* 80112A74 0010F874  38 A5 06 06 */	addi r5, r5, 0x606
/* 80112A78 0010F878  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112A7C 0010F87C  38 C0 00 00 */	li r6, 0
/* 80112A80 0010F880  38 E0 00 00 */	li r7, 0
/* 80112A84 0010F884  39 00 00 10 */	li r8, 0x10
/* 80112A88 0010F888  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80112A8C 0010F88C  39 20 00 00 */	li r9, 0
/* 80112A90 0010F890  C0 7F 00 0C */	lfs f3, 0xc(r31)
/* 80112A94 0010F894  39 40 00 00 */	li r10, 0
/* 80112A98 0010F898  FC 40 08 90 */	fmr f2, f1
/* 80112A9C 0010F89C  4B EF 49 25 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80112AA0 0010F8A0  3C A0 80 29 */	lis r5, lbl_80297A68@ha
/* 80112AA4 0010F8A4  3C 80 80 27 */	lis r4, lbl_8026A688@ha
/* 80112AA8 0010F8A8  38 A5 7A 68 */	addi r5, r5, lbl_80297A68@l
/* 80112AAC 0010F8AC  38 00 00 00 */	li r0, 0
/* 80112AB0 0010F8B0  90 65 00 28 */	stw r3, 0x28(r5)
/* 80112AB4 0010F8B4  38 A4 A6 88 */	addi r5, r4, lbl_8026A688@l
/* 80112AB8 0010F8B8  7F C3 F3 78 */	mr r3, r30
/* 80112ABC 0010F8BC  38 C0 00 00 */	li r6, 0
/* 80112AC0 0010F8C0  90 01 00 08 */	stw r0, 8(r1)
/* 80112AC4 0010F8C4  38 85 06 06 */	addi r4, r5, 0x606
/* 80112AC8 0010F8C8  38 A5 06 3D */	addi r5, r5, 0x63d
/* 80112ACC 0010F8CC  38 E0 00 00 */	li r7, 0
/* 80112AD0 0010F8D0  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112AD4 0010F8D4  39 00 00 10 */	li r8, 0x10
/* 80112AD8 0010F8D8  39 20 00 00 */	li r9, 0
/* 80112ADC 0010F8DC  39 40 00 00 */	li r10, 0
/* 80112AE0 0010F8E0  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80112AE4 0010F8E4  C0 7F 00 0C */	lfs f3, 0xc(r31)
/* 80112AE8 0010F8E8  FC 40 08 90 */	fmr f2, f1
/* 80112AEC 0010F8EC  4B EF 48 D5 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80112AF0 0010F8F0  3C A0 80 29 */	lis r5, lbl_80297A68@ha
/* 80112AF4 0010F8F4  3C 80 80 31 */	lis r4, lbl_80313788@ha
/* 80112AF8 0010F8F8  38 C5 7A 68 */	addi r6, r5, lbl_80297A68@l
/* 80112AFC 0010F8FC  3C A0 80 27 */	lis r5, lbl_8026A688@ha
/* 80112B00 0010F900  90 66 00 2C */	stw r3, 0x2c(r6)
/* 80112B04 0010F904  38 A5 A6 88 */	addi r5, r5, lbl_8026A688@l
/* 80112B08 0010F908  38 00 00 00 */	li r0, 0
/* 80112B0C 0010F90C  3B E4 37 88 */	addi r31, r4, lbl_80313788@l
/* 80112B10 0010F910  90 01 00 08 */	stw r0, 8(r1)
/* 80112B14 0010F914  7F C3 F3 78 */	mr r3, r30
/* 80112B18 0010F918  38 85 06 3D */	addi r4, r5, 0x63d
/* 80112B1C 0010F91C  38 A5 05 F6 */	addi r5, r5, 0x5f6
/* 80112B20 0010F920  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112B24 0010F924  38 C0 00 00 */	li r6, 0
/* 80112B28 0010F928  38 E0 00 00 */	li r7, 0
/* 80112B2C 0010F92C  39 00 00 10 */	li r8, 0x10
/* 80112B30 0010F930  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80112B34 0010F934  39 20 00 00 */	li r9, 0
/* 80112B38 0010F938  C0 7F 00 08 */	lfs f3, 8(r31)
/* 80112B3C 0010F93C  39 40 00 00 */	li r10, 0
/* 80112B40 0010F940  FC 40 08 90 */	fmr f2, f1
/* 80112B44 0010F944  4B EF 48 7D */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80112B48 0010F948  3C A0 80 29 */	lis r5, lbl_80297A68@ha
/* 80112B4C 0010F94C  3C 80 80 27 */	lis r4, lbl_8026A688@ha
/* 80112B50 0010F950  38 A5 7A 68 */	addi r5, r5, lbl_80297A68@l
/* 80112B54 0010F954  38 00 00 00 */	li r0, 0
/* 80112B58 0010F958  90 65 00 30 */	stw r3, 0x30(r5)
/* 80112B5C 0010F95C  38 A4 A6 88 */	addi r5, r4, lbl_8026A688@l
/* 80112B60 0010F960  7F C3 F3 78 */	mr r3, r30
/* 80112B64 0010F964  38 C0 00 00 */	li r6, 0
/* 80112B68 0010F968  90 01 00 08 */	stw r0, 8(r1)
/* 80112B6C 0010F96C  38 85 05 F6 */	addi r4, r5, 0x5f6
/* 80112B70 0010F970  38 A5 06 3D */	addi r5, r5, 0x63d
/* 80112B74 0010F974  38 E0 00 00 */	li r7, 0
/* 80112B78 0010F978  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112B7C 0010F97C  39 00 00 10 */	li r8, 0x10
/* 80112B80 0010F980  39 20 00 00 */	li r9, 0
/* 80112B84 0010F984  39 40 00 00 */	li r10, 0
/* 80112B88 0010F988  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80112B8C 0010F98C  C0 7F 00 08 */	lfs f3, 8(r31)
/* 80112B90 0010F990  FC 40 08 90 */	fmr f2, f1
/* 80112B94 0010F994  4B EF 48 2D */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80112B98 0010F998  3C A0 80 29 */	lis r5, lbl_80297A68@ha
/* 80112B9C 0010F99C  3C 80 80 31 */	lis r4, lbl_80313788@ha
/* 80112BA0 0010F9A0  38 C5 7A 68 */	addi r6, r5, lbl_80297A68@l
/* 80112BA4 0010F9A4  3C A0 80 27 */	lis r5, lbl_8026A688@ha
/* 80112BA8 0010F9A8  90 66 00 34 */	stw r3, 0x34(r6)
/* 80112BAC 0010F9AC  38 A5 A6 88 */	addi r5, r5, lbl_8026A688@l
/* 80112BB0 0010F9B0  38 00 00 00 */	li r0, 0
/* 80112BB4 0010F9B4  3B E4 37 88 */	addi r31, r4, lbl_80313788@l
/* 80112BB8 0010F9B8  90 01 00 08 */	stw r0, 8(r1)
/* 80112BBC 0010F9BC  7F C3 F3 78 */	mr r3, r30
/* 80112BC0 0010F9C0  38 85 06 A8 */	addi r4, r5, 0x6a8
/* 80112BC4 0010F9C4  38 A5 06 21 */	addi r5, r5, 0x621
/* 80112BC8 0010F9C8  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112BCC 0010F9CC  38 C0 00 00 */	li r6, 0
/* 80112BD0 0010F9D0  38 E0 00 00 */	li r7, 0
/* 80112BD4 0010F9D4  39 00 00 10 */	li r8, 0x10
/* 80112BD8 0010F9D8  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80112BDC 0010F9DC  39 20 00 00 */	li r9, 0
/* 80112BE0 0010F9E0  C0 7F 00 10 */	lfs f3, 0x10(r31)
/* 80112BE4 0010F9E4  39 40 00 00 */	li r10, 0
/* 80112BE8 0010F9E8  FC 40 08 90 */	fmr f2, f1
/* 80112BEC 0010F9EC  4B EF 47 D5 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80112BF0 0010F9F0  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 80112BF4 0010F9F4  3C A0 80 27 */	lis r5, lbl_8026A688@ha
/* 80112BF8 0010F9F8  38 C4 7A 68 */	addi r6, r4, lbl_80297A68@l
/* 80112BFC 0010F9FC  38 00 00 00 */	li r0, 0
/* 80112C00 0010FA00  90 66 00 38 */	stw r3, 0x38(r6)
/* 80112C04 0010FA04  3C 80 80 11 */	lis r4, check_anim_hit_to_dive__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FP15xAnimTransitionP11xAnimSinglePv@ha
/* 80112C08 0010FA08  38 A5 A6 88 */	addi r5, r5, lbl_8026A688@l
/* 80112C0C 0010FA0C  7F C3 F3 78 */	mr r3, r30
/* 80112C10 0010FA10  90 01 00 08 */	stw r0, 8(r1)
/* 80112C14 0010FA14  38 C4 0F A0 */	addi r6, r4, check_anim_hit_to_dive__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FP15xAnimTransitionP11xAnimSinglePv@l
/* 80112C18 0010FA18  38 85 06 21 */	addi r4, r5, 0x621
/* 80112C1C 0010FA1C  38 A5 06 13 */	addi r5, r5, 0x613
/* 80112C20 0010FA20  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112C24 0010FA24  38 E0 00 00 */	li r7, 0
/* 80112C28 0010FA28  39 00 00 10 */	li r8, 0x10
/* 80112C2C 0010FA2C  39 20 00 00 */	li r9, 0
/* 80112C30 0010FA30  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80112C34 0010FA34  39 40 00 00 */	li r10, 0
/* 80112C38 0010FA38  C0 7F 00 10 */	lfs f3, 0x10(r31)
/* 80112C3C 0010FA3C  FC 40 08 90 */	fmr f2, f1
/* 80112C40 0010FA40  4B EF 47 81 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80112C44 0010FA44  38 00 00 00 */	li r0, 0
/* 80112C48 0010FA48  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80112C4C 0010FA4C  90 01 00 08 */	stw r0, 8(r1)
/* 80112C50 0010FA50  38 A3 A6 88 */	addi r5, r3, lbl_8026A688@l
/* 80112C54 0010FA54  3C 80 80 11 */	lis r4, check_anim_hit_to_top__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FP15xAnimTransitionP11xAnimSinglePv@ha
/* 80112C58 0010FA58  7F C3 F3 78 */	mr r3, r30
/* 80112C5C 0010FA5C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112C60 0010FA60  38 C4 0F D4 */	addi r6, r4, check_anim_hit_to_top__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FP15xAnimTransitionP11xAnimSinglePv@l
/* 80112C64 0010FA64  38 85 06 21 */	addi r4, r5, 0x621
/* 80112C68 0010FA68  38 A5 06 06 */	addi r5, r5, 0x606
/* 80112C6C 0010FA6C  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80112C70 0010FA70  38 E0 00 00 */	li r7, 0
/* 80112C74 0010FA74  C0 7F 00 10 */	lfs f3, 0x10(r31)
/* 80112C78 0010FA78  39 00 00 10 */	li r8, 0x10
/* 80112C7C 0010FA7C  FC 40 08 90 */	fmr f2, f1
/* 80112C80 0010FA80  39 20 00 00 */	li r9, 0
/* 80112C84 0010FA84  39 40 00 00 */	li r10, 0
/* 80112C88 0010FA88  4B EF 47 39 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80112C8C 0010FA8C  38 00 00 00 */	li r0, 0
/* 80112C90 0010FA90  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80112C94 0010FA94  90 01 00 08 */	stw r0, 8(r1)
/* 80112C98 0010FA98  38 A3 A6 88 */	addi r5, r3, lbl_8026A688@l
/* 80112C9C 0010FA9C  3C 80 80 11 */	lis r4, check_anim_hit_to_bottom__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FP15xAnimTransitionP11xAnimSinglePv@ha
/* 80112CA0 0010FAA0  7F C3 F3 78 */	mr r3, r30
/* 80112CA4 0010FAA4  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112CA8 0010FAA8  38 C4 10 08 */	addi r6, r4, check_anim_hit_to_bottom__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FP15xAnimTransitionP11xAnimSinglePv@l
/* 80112CAC 0010FAAC  38 85 06 21 */	addi r4, r5, 0x621
/* 80112CB0 0010FAB0  38 A5 05 F6 */	addi r5, r5, 0x5f6
/* 80112CB4 0010FAB4  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80112CB8 0010FAB8  38 E0 00 00 */	li r7, 0
/* 80112CBC 0010FABC  C0 7F 00 10 */	lfs f3, 0x10(r31)
/* 80112CC0 0010FAC0  39 00 00 10 */	li r8, 0x10
/* 80112CC4 0010FAC4  FC 40 08 90 */	fmr f2, f1
/* 80112CC8 0010FAC8  39 20 00 00 */	li r9, 0
/* 80112CCC 0010FACC  39 40 00 00 */	li r10, 0
/* 80112CD0 0010FAD0  4B EF 46 F1 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80112CD4 0010FAD4  38 00 00 00 */	li r0, 0
/* 80112CD8 0010FAD8  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80112CDC 0010FADC  90 01 00 08 */	stw r0, 8(r1)
/* 80112CE0 0010FAE0  38 A3 A6 88 */	addi r5, r3, lbl_8026A688@l
/* 80112CE4 0010FAE4  3C 80 80 11 */	lis r4, check_anim_hit_to_cycle__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FP15xAnimTransitionP11xAnimSinglePv@ha
/* 80112CE8 0010FAE8  7F C3 F3 78 */	mr r3, r30
/* 80112CEC 0010FAEC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112CF0 0010FAF0  38 C4 10 3C */	addi r6, r4, check_anim_hit_to_cycle__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FP15xAnimTransitionP11xAnimSinglePv@l
/* 80112CF4 0010FAF4  38 85 06 21 */	addi r4, r5, 0x621
/* 80112CF8 0010FAF8  38 A5 06 3D */	addi r5, r5, 0x63d
/* 80112CFC 0010FAFC  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80112D00 0010FB00  38 E0 00 00 */	li r7, 0
/* 80112D04 0010FB04  C0 7F 00 10 */	lfs f3, 0x10(r31)
/* 80112D08 0010FB08  39 00 00 10 */	li r8, 0x10
/* 80112D0C 0010FB0C  FC 40 08 90 */	fmr f2, f1
/* 80112D10 0010FB10  39 20 00 00 */	li r9, 0
/* 80112D14 0010FB14  39 40 00 00 */	li r10, 0
/* 80112D18 0010FB18  4B EF 46 A9 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80112D1C 0010FB1C  38 00 00 00 */	li r0, 0
/* 80112D20 0010FB20  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80112D24 0010FB24  90 01 00 08 */	stw r0, 8(r1)
/* 80112D28 0010FB28  38 A3 A6 88 */	addi r5, r3, lbl_8026A688@l
/* 80112D2C 0010FB2C  3C 80 80 11 */	lis r4, check_anim_hit_to_death__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FP15xAnimTransitionP11xAnimSinglePv@ha
/* 80112D30 0010FB30  7F C3 F3 78 */	mr r3, r30
/* 80112D34 0010FB34  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112D38 0010FB38  38 C4 10 70 */	addi r6, r4, check_anim_hit_to_death__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FP15xAnimTransitionP11xAnimSinglePv@l
/* 80112D3C 0010FB3C  38 85 06 21 */	addi r4, r5, 0x621
/* 80112D40 0010FB40  38 A5 06 4C */	addi r5, r5, 0x64c
/* 80112D44 0010FB44  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80112D48 0010FB48  38 E0 00 00 */	li r7, 0
/* 80112D4C 0010FB4C  C0 7F 00 10 */	lfs f3, 0x10(r31)
/* 80112D50 0010FB50  39 00 00 10 */	li r8, 0x10
/* 80112D54 0010FB54  FC 40 08 90 */	fmr f2, f1
/* 80112D58 0010FB58  39 20 00 00 */	li r9, 0
/* 80112D5C 0010FB5C  39 40 00 00 */	li r10, 0
/* 80112D60 0010FB60  4B EF 46 61 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80112D64 0010FB64  38 00 00 00 */	li r0, 0
/* 80112D68 0010FB68  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80112D6C 0010FB6C  90 01 00 08 */	stw r0, 8(r1)
/* 80112D70 0010FB70  38 A3 A6 88 */	addi r5, r3, lbl_8026A688@l
/* 80112D74 0010FB74  7F C3 F3 78 */	mr r3, r30
/* 80112D78 0010FB78  38 C0 00 00 */	li r6, 0
/* 80112D7C 0010FB7C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112D80 0010FB80  38 85 06 A8 */	addi r4, r5, 0x6a8
/* 80112D84 0010FB84  38 A5 00 7D */	addi r5, r5, 0x7d
/* 80112D88 0010FB88  38 E0 00 00 */	li r7, 0
/* 80112D8C 0010FB8C  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80112D90 0010FB90  39 00 00 10 */	li r8, 0x10
/* 80112D94 0010FB94  C0 62 9E 8C */	lfs f3, lbl_803CE80C-_SDA2_BASE_(r2)
/* 80112D98 0010FB98  39 20 00 00 */	li r9, 0
/* 80112D9C 0010FB9C  FC 40 08 90 */	fmr f2, f1
/* 80112DA0 0010FBA0  39 40 00 00 */	li r10, 0
/* 80112DA4 0010FBA4  4B EF 46 1D */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80112DA8 0010FBA8  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 80112DAC 0010FBAC  38 84 7A 68 */	addi r4, r4, lbl_80297A68@l
/* 80112DB0 0010FBB0  90 64 00 1C */	stw r3, 0x1c(r4)
/* 80112DB4 0010FBB4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80112DB8 0010FBB8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80112DBC 0010FBBC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80112DC0 0010FBC0  7C 08 03 A6 */	mtlr r0
/* 80112DC4 0010FBC4  38 21 00 20 */	addi r1, r1, 0x20
/* 80112DC8 0010FBC8  4E 80 00 20 */	blr 

start__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_20attaching_state_typeFv:
/* 80112DCC 0010FBCC  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80112DD0 0010FBD0  7C 08 02 A6 */	mflr r0
/* 80112DD4 0010FBD4  3C 80 80 3C */	lis r4, globals@ha
/* 80112DD8 0010FBD8  90 01 00 54 */	stw r0, 0x54(r1)
/* 80112DDC 0010FBDC  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80112DE0 0010FBE0  7C 7F 1B 78 */	mr r31, r3
/* 80112DE4 0010FBE4  38 64 05 58 */	addi r3, r4, globals@l
/* 80112DE8 0010FBE8  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80112DEC 0010FBEC  93 A1 00 44 */	stw r29, 0x44(r1)
/* 80112DF0 0010FBF0  83 A3 07 28 */	lwz r29, 0x728(r3)
/* 80112DF4 0010FBF4  38 7D 00 30 */	addi r3, r29, 0x30
/* 80112DF8 0010FBF8  38 1D 00 D4 */	addi r0, r29, 0xd4
/* 80112DFC 0010FBFC  90 7F 00 08 */	stw r3, 8(r31)
/* 80112E00 0010FC00  90 1F 00 0C */	stw r0, 0xc(r31)
/* 80112E04 0010FC04  4B FF D6 29 */	bl init_models__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv
/* 80112E08 0010FC08  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 80112E0C 0010FC0C  80 7F 00 08 */	lwz r3, 8(r31)
/* 80112E10 0010FC10  38 84 7A 68 */	addi r4, r4, lbl_80297A68@l
/* 80112E14 0010FC14  80 84 01 68 */	lwz r4, 0x168(r4)
/* 80112E18 0010FC18  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80112E1C 0010FC1C  38 84 00 30 */	addi r4, r4, 0x30
/* 80112E20 0010FC20  4B EF 84 45 */	bl __as__5xVec3FRC5xVec3
/* 80112E24 0010FC24  4B FF D9 49 */	bl update_hook_loc__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv
/* 80112E28 0010FC28  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 80112E2C 0010FC2C  38 7F 00 10 */	addi r3, r31, 0x10
/* 80112E30 0010FC30  38 84 7A 68 */	addi r4, r4, lbl_80297A68@l
/* 80112E34 0010FC34  3B C4 01 74 */	addi r30, r4, 0x174
/* 80112E38 0010FC38  7F C4 F3 78 */	mr r4, r30
/* 80112E3C 0010FC3C  4B EF 84 29 */	bl __as__5xVec3FRC5xVec3
/* 80112E40 0010FC40  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80112E44 0010FC44  38 7F 00 1C */	addi r3, r31, 0x1c
/* 80112E48 0010FC48  4B F0 9A 31 */	bl __as__5xVec3Ff
/* 80112E4C 0010FC4C  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80112E50 0010FC50  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 80112E54 0010FC54  38 83 7A 68 */	addi r4, r3, lbl_80297A68@l
/* 80112E58 0010FC58  38 7F 00 34 */	addi r3, r31, 0x34
/* 80112E5C 0010FC5C  D0 1F 00 2C */	stfs f0, 0x2c(r31)
/* 80112E60 0010FC60  80 84 00 3C */	lwz r4, 0x3c(r4)
/* 80112E64 0010FC64  80 84 00 10 */	lwz r4, 0x10(r4)
/* 80112E68 0010FC68  C0 04 00 24 */	lfs f0, 0x24(r4)
/* 80112E6C 0010FC6C  D0 1F 00 30 */	stfs f0, 0x30(r31)
/* 80112E70 0010FC70  80 9F 00 08 */	lwz r4, 8(r31)
/* 80112E74 0010FC74  4B EF 83 F1 */	bl __as__5xVec3FRC5xVec3
/* 80112E78 0010FC78  38 61 00 14 */	addi r3, r1, 0x14
/* 80112E7C 0010FC7C  38 9D 00 30 */	addi r4, r29, 0x30
/* 80112E80 0010FC80  38 BD 00 70 */	addi r5, r29, 0x70
/* 80112E84 0010FC84  4B EF 83 49 */	bl __mi__5xVec3CFRC5xVec3
/* 80112E88 0010FC88  3C 80 80 3C */	lis r4, globals@ha
/* 80112E8C 0010FC8C  38 61 00 20 */	addi r3, r1, 0x20
/* 80112E90 0010FC90  38 A4 05 58 */	addi r5, r4, globals@l
/* 80112E94 0010FC94  38 81 00 14 */	addi r4, r1, 0x14
/* 80112E98 0010FC98  C0 25 06 C8 */	lfs f1, 0x6c8(r5)
/* 80112E9C 0010FC9C  4B F0 27 4D */	bl __dv__5xVec3CFf
/* 80112EA0 0010FCA0  38 7F 00 40 */	addi r3, r31, 0x40
/* 80112EA4 0010FCA4  38 81 00 20 */	addi r4, r1, 0x20
/* 80112EA8 0010FCA8  4B EF 83 BD */	bl __as__5xVec3FRC5xVec3
/* 80112EAC 0010FCAC  80 BF 00 08 */	lwz r5, 8(r31)
/* 80112EB0 0010FCB0  7F C4 F3 78 */	mr r4, r30
/* 80112EB4 0010FCB4  38 61 00 08 */	addi r3, r1, 8
/* 80112EB8 0010FCB8  4B EF 83 15 */	bl __mi__5xVec3CFRC5xVec3
/* 80112EBC 0010FCBC  80 A1 00 08 */	lwz r5, 8(r1)
/* 80112EC0 0010FCC0  38 61 00 2C */	addi r3, r1, 0x2c
/* 80112EC4 0010FCC4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80112EC8 0010FCC8  80 01 00 10 */	lwz r0, 0x10(r1)
/* 80112ECC 0010FCCC  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 80112ED0 0010FCD0  90 81 00 30 */	stw r4, 0x30(r1)
/* 80112ED4 0010FCD4  90 01 00 34 */	stw r0, 0x34(r1)
/* 80112ED8 0010FCD8  4B EF 82 D1 */	bl length__5xVec3CFv
/* 80112EDC 0010FCDC  C0 5F 00 30 */	lfs f2, 0x30(r31)
/* 80112EE0 0010FCE0  C0 02 9E CC */	lfs f0, lbl_803CE84C-_SDA2_BASE_(r2)
/* 80112EE4 0010FCE4  EC 41 10 24 */	fdivs f2, f1, f2
/* 80112EE8 0010FCE8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80112EEC 0010FCEC  40 81 00 10 */	ble lbl_80112EFC
/* 80112EF0 0010FCF0  C0 02 9E 90 */	lfs f0, lbl_803CE810-_SDA2_BASE_(r2)
/* 80112EF4 0010FCF4  EC 00 00 72 */	fmuls f0, f0, f1
/* 80112EF8 0010FCF8  D0 1F 00 30 */	stfs f0, 0x30(r31)
lbl_80112EFC:
/* 80112EFC 0010FCFC  3C 80 80 3C */	lis r4, globals@ha
/* 80112F00 0010FD00  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 80112F04 0010FD04  38 84 05 58 */	addi r4, r4, globals@l
/* 80112F08 0010FD08  80 A4 07 04 */	lwz r5, 0x704(r4)
/* 80112F0C 0010FD0C  38 63 7A 68 */	addi r3, r3, lbl_80297A68@l
/* 80112F10 0010FD10  80 83 00 10 */	lwz r4, 0x10(r3)
/* 80112F14 0010FD14  80 65 00 0C */	lwz r3, 0xc(r5)
/* 80112F18 0010FD18  4B EF 5B 2D */	bl xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition
/* 80112F1C 0010FD1C  38 60 00 20 */	li r3, 0x20
/* 80112F20 0010FD20  4B FF D9 DD */	bl trigger__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FUi
/* 80112F24 0010FD24  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80112F28 0010FD28  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80112F2C 0010FD2C  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 80112F30 0010FD30  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 80112F34 0010FD34  7C 08 03 A6 */	mtlr r0
/* 80112F38 0010FD38  38 21 00 50 */	addi r1, r1, 0x50
/* 80112F3C 0010FD3C  4E 80 00 20 */	blr 

stop__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_20attaching_state_typeFv:
/* 80112F40 0010FD40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80112F44 0010FD44  7C 08 02 A6 */	mflr r0
/* 80112F48 0010FD48  90 01 00 14 */	stw r0, 0x14(r1)
/* 80112F4C 0010FD4C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80112F50 0010FD50  7C 7F 1B 78 */	mr r31, r3
/* 80112F54 0010FD54  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 80112F58 0010FD58  38 83 7A 68 */	addi r4, r3, lbl_80297A68@l
/* 80112F5C 0010FD5C  80 7F 00 08 */	lwz r3, 8(r31)
/* 80112F60 0010FD60  38 84 01 74 */	addi r4, r4, 0x174
/* 80112F64 0010FD64  4B EF 83 01 */	bl __as__5xVec3FRC5xVec3
/* 80112F68 0010FD68  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80112F6C 0010FD6C  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80112F70 0010FD70  4B F0 99 09 */	bl __as__5xVec3Ff
/* 80112F74 0010FD74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80112F78 0010FD78  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80112F7C 0010FD7C  7C 08 03 A6 */	mtlr r0
/* 80112F80 0010FD80  38 21 00 10 */	addi r1, r1, 0x10
/* 80112F84 0010FD84  4E 80 00 20 */	blr 

update__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_20attaching_state_typeFR6xSceneRf:
/* 80112F88 0010FD88  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80112F8C 0010FD8C  7C 08 02 A6 */	mflr r0
/* 80112F90 0010FD90  90 01 00 54 */	stw r0, 0x54(r1)
/* 80112F94 0010FD94  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80112F98 0010FD98  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 80112F9C 0010FD9C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80112FA0 0010FDA0  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80112FA4 0010FDA4  93 A1 00 34 */	stw r29, 0x34(r1)
/* 80112FA8 0010FDA8  7C 7D 1B 78 */	mr r29, r3
/* 80112FAC 0010FDAC  7C BE 2B 78 */	mr r30, r5
/* 80112FB0 0010FDB0  4B FF D7 BD */	bl update_hook_loc__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv
/* 80112FB4 0010FDB4  C0 3D 00 2C */	lfs f1, 0x2c(r29)
/* 80112FB8 0010FDB8  C0 1E 00 00 */	lfs f0, 0(r30)
/* 80112FBC 0010FDBC  EC 01 00 2A */	fadds f0, f1, f0
/* 80112FC0 0010FDC0  D0 1D 00 2C */	stfs f0, 0x2c(r29)
/* 80112FC4 0010FDC4  C0 3D 00 2C */	lfs f1, 0x2c(r29)
/* 80112FC8 0010FDC8  C0 1D 00 30 */	lfs f0, 0x30(r29)
/* 80112FCC 0010FDCC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80112FD0 0010FDD0  4C 41 13 82 */	cror 2, 1, 2
/* 80112FD4 0010FDD4  40 82 00 14 */	bne lbl_80112FE8
/* 80112FD8 0010FDD8  EC 01 00 28 */	fsubs f0, f1, f0
/* 80112FDC 0010FDDC  38 60 00 01 */	li r3, 1
/* 80112FE0 0010FDE0  D0 1E 00 00 */	stfs f0, 0(r30)
/* 80112FE4 0010FDE4  48 00 01 48 */	b lbl_8011312C
lbl_80112FE8:
/* 80112FE8 0010FDE8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80112FEC 0010FDEC  40 80 00 DC */	bge lbl_801130C8
/* 80112FF0 0010FDF0  C0 5D 00 40 */	lfs f2, 0x40(r29)
/* 80112FF4 0010FDF4  3C 60 80 3C */	lis r3, globals@ha
/* 80112FF8 0010FDF8  C0 3E 00 00 */	lfs f1, 0(r30)
/* 80112FFC 0010FDFC  38 63 05 58 */	addi r3, r3, globals@l
/* 80113000 0010FE00  C0 1D 00 34 */	lfs f0, 0x34(r29)
/* 80113004 0010FE04  C0 63 09 24 */	lfs f3, 0x924(r3)
/* 80113008 0010FE08  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8011300C 0010FE0C  FC 80 18 50 */	fneg f4, f3
/* 80113010 0010FE10  D0 1D 00 34 */	stfs f0, 0x34(r29)
/* 80113014 0010FE14  C0 02 9E 8C */	lfs f0, lbl_803CE80C-_SDA2_BASE_(r2)
/* 80113018 0010FE18  C0 7E 00 00 */	lfs f3, 0(r30)
/* 8011301C 0010FE1C  EC 00 01 32 */	fmuls f0, f0, f4
/* 80113020 0010FE20  C0 3D 00 44 */	lfs f1, 0x44(r29)
/* 80113024 0010FE24  C0 5D 00 38 */	lfs f2, 0x38(r29)
/* 80113028 0010FE28  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8011302C 0010FE2C  EC 03 00 32 */	fmuls f0, f3, f0
/* 80113030 0010FE30  EC 01 00 FA */	fmadds f0, f1, f3, f0
/* 80113034 0010FE34  EC 02 00 2A */	fadds f0, f2, f0
/* 80113038 0010FE38  D0 1D 00 38 */	stfs f0, 0x38(r29)
/* 8011303C 0010FE3C  C0 5D 00 48 */	lfs f2, 0x48(r29)
/* 80113040 0010FE40  C0 3E 00 00 */	lfs f1, 0(r30)
/* 80113044 0010FE44  C0 1D 00 3C */	lfs f0, 0x3c(r29)
/* 80113048 0010FE48  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8011304C 0010FE4C  D0 1D 00 3C */	stfs f0, 0x3c(r29)
/* 80113050 0010FE50  C0 3E 00 00 */	lfs f1, 0(r30)
/* 80113054 0010FE54  C0 1D 00 44 */	lfs f0, 0x44(r29)
/* 80113058 0010FE58  EC 04 00 7A */	fmadds f0, f4, f1, f0
/* 8011305C 0010FE5C  D0 1D 00 44 */	stfs f0, 0x44(r29)
/* 80113060 0010FE60  C0 3D 00 2C */	lfs f1, 0x2c(r29)
/* 80113064 0010FE64  C0 1D 00 30 */	lfs f0, 0x30(r29)
/* 80113068 0010FE68  EC 21 00 24 */	fdivs f1, f1, f0
/* 8011306C 0010FE6C  4B F4 C0 95 */	bl xSCurve__Ff
/* 80113070 0010FE70  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 80113074 0010FE74  FF E0 08 90 */	fmr f31, f1
/* 80113078 0010FE78  38 83 7A 68 */	addi r4, r3, lbl_80297A68@l
/* 8011307C 0010FE7C  38 BD 00 34 */	addi r5, r29, 0x34
/* 80113080 0010FE80  38 61 00 08 */	addi r3, r1, 8
/* 80113084 0010FE84  38 84 01 74 */	addi r4, r4, 0x174
/* 80113088 0010FE88  4B EF 81 45 */	bl __mi__5xVec3CFRC5xVec3
/* 8011308C 0010FE8C  FC 20 F8 90 */	fmr f1, f31
/* 80113090 0010FE90  38 61 00 14 */	addi r3, r1, 0x14
/* 80113094 0010FE94  38 81 00 08 */	addi r4, r1, 8
/* 80113098 0010FE98  4B EF 80 89 */	bl __ml__5xVec3CFf
/* 8011309C 0010FE9C  38 61 00 20 */	addi r3, r1, 0x20
/* 801130A0 0010FEA0  38 9D 00 34 */	addi r4, r29, 0x34
/* 801130A4 0010FEA4  38 A1 00 14 */	addi r5, r1, 0x14
/* 801130A8 0010FEA8  4B F0 23 39 */	bl __pl__5xVec3CFRC5xVec3
/* 801130AC 0010FEAC  80 7D 00 08 */	lwz r3, 8(r29)
/* 801130B0 0010FEB0  38 81 00 20 */	addi r4, r1, 0x20
/* 801130B4 0010FEB4  4B EF 81 B1 */	bl __as__5xVec3FRC5xVec3
/* 801130B8 0010FEB8  80 7D 00 0C */	lwz r3, 0xc(r29)
/* 801130BC 0010FEBC  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 801130C0 0010FEC0  4B F0 97 B9 */	bl __as__5xVec3Ff
/* 801130C4 0010FEC4  48 00 00 0C */	b lbl_801130D0
lbl_801130C8:
/* 801130C8 0010FEC8  EC 01 00 28 */	fsubs f0, f1, f0
/* 801130CC 0010FECC  D0 1E 00 00 */	stfs f0, 0(r30)
lbl_801130D0:
/* 801130D0 0010FED0  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 801130D4 0010FED4  80 9D 00 08 */	lwz r4, 8(r29)
/* 801130D8 0010FED8  38 63 7A 68 */	addi r3, r3, lbl_80297A68@l
/* 801130DC 0010FEDC  80 63 01 68 */	lwz r3, 0x168(r3)
/* 801130E0 0010FEE0  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 801130E4 0010FEE4  38 63 00 30 */	addi r3, r3, 0x30
/* 801130E8 0010FEE8  4B EF 81 7D */	bl __as__5xVec3FRC5xVec3
/* 801130EC 0010FEEC  3C 60 80 3C */	lis r3, globals@ha
/* 801130F0 0010FEF0  C0 3E 00 00 */	lfs f1, 0(r30)
/* 801130F4 0010FEF4  3B E3 05 58 */	addi r31, r3, globals@l
/* 801130F8 0010FEF8  80 7F 07 04 */	lwz r3, 0x704(r31)
/* 801130FC 0010FEFC  4B F2 13 D1 */	bl xModelUpdate__FP14xModelInstancef
/* 80113100 0010FF00  80 7F 07 04 */	lwz r3, 0x704(r31)
/* 80113104 0010FF04  4B F2 15 AD */	bl xModelEval__FP14xModelInstance
/* 80113108 0010FF08  C0 3D 00 2C */	lfs f1, 0x2c(r29)
/* 8011310C 0010FF0C  C0 1D 00 30 */	lfs f0, 0x30(r29)
/* 80113110 0010FF10  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80113114 0010FF14  40 80 00 0C */	bge lbl_80113120
/* 80113118 0010FF18  38 60 00 00 */	li r3, 0
/* 8011311C 0010FF1C  48 00 00 10 */	b lbl_8011312C
lbl_80113120:
/* 80113120 0010FF20  EC 01 00 28 */	fsubs f0, f1, f0
/* 80113124 0010FF24  38 60 00 01 */	li r3, 1
/* 80113128 0010FF28  D0 1E 00 00 */	stfs f0, 0(r30)
lbl_8011312C:
/* 8011312C 0010FF2C  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 80113130 0010FF30  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80113134 0010FF34  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80113138 0010FF38  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8011313C 0010FF3C  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80113140 0010FF40  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 80113144 0010FF44  7C 08 03 A6 */	mtlr r0
/* 80113148 0010FF48  38 21 00 50 */	addi r1, r1, 0x50
/* 8011314C 0010FF4C  4E 80 00 20 */	blr 

render__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_20attaching_state_typeFv:
/* 80113150 0010FF50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80113154 0010FF54  7C 08 02 A6 */	mflr r0
/* 80113158 0010FF58  38 60 00 00 */	li r3, 0
/* 8011315C 0010FF5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80113160 0010FF60  4B FF D4 0D */	bl render_player__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fb
/* 80113164 0010FF64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80113168 0010FF68  7C 08 03 A6 */	mtlr r0
/* 8011316C 0010FF6C  38 21 00 10 */	addi r1, r1, 0x10
/* 80113170 0010FF70  4E 80 00 20 */	blr 

start__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv:
/* 80113174 0010FF74  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80113178 0010FF78  7C 08 02 A6 */	mflr r0
/* 8011317C 0010FF7C  3C 80 80 27 */	lis r4, lbl_8026A408@ha
/* 80113180 0010FF80  90 01 00 34 */	stw r0, 0x34(r1)
/* 80113184 0010FF84  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80113188 0010FF88  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8011318C 0010FF8C  3B C4 A4 08 */	addi r30, r4, lbl_8026A408@l
/* 80113190 0010FF90  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80113194 0010FF94  7C 7D 1B 78 */	mr r29, r3
/* 80113198 0010FF98  93 81 00 20 */	stw r28, 0x20(r1)
/* 8011319C 0010FF9C  48 00 08 51 */	bl show_help__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv
/* 801131A0 0010FFA0  38 00 00 00 */	li r0, 0
/* 801131A4 0010FFA4  7F A3 EB 78 */	mr r3, r29
/* 801131A8 0010FFA8  98 1D 00 B8 */	stb r0, 0xb8(r29)
/* 801131AC 0010FFAC  38 80 00 00 */	li r4, 0
/* 801131B0 0010FFB0  48 00 07 95 */	bl allow_dive__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFb
/* 801131B4 0010FFB4  3C 60 80 3C */	lis r3, globals@ha
/* 801131B8 0010FFB8  38 00 00 00 */	li r0, 0
/* 801131BC 0010FFBC  38 83 05 58 */	addi r4, r3, globals@l
/* 801131C0 0010FFC0  80 64 16 B0 */	lwz r3, 0x16b0(r4)
/* 801131C4 0010FFC4  90 7D 00 BC */	stw r3, 0xbc(r29)
/* 801131C8 0010FFC8  98 1D 00 AC */	stb r0, 0xac(r29)
/* 801131CC 0010FFCC  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 801131D0 0010FFD0  D0 1D 00 B0 */	stfs f0, 0xb0(r29)
/* 801131D4 0010FFD4  C0 02 9E 88 */	lfs f0, lbl_803CE808-_SDA2_BASE_(r2)
/* 801131D8 0010FFD8  D0 1D 00 B4 */	stfs f0, 0xb4(r29)
/* 801131DC 0010FFDC  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 801131E0 0010FFE0  D0 04 17 08 */	stfs f0, 0x1708(r4)
/* 801131E4 0010FFE4  98 1D 00 98 */	stb r0, 0x98(r29)
/* 801131E8 0010FFE8  4B FF D2 99 */	bl show_models__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv
/* 801131EC 0010FFEC  4B FF D5 81 */	bl update_hook_loc__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv
/* 801131F0 0010FFF0  3C 80 80 29 */	lis r4, lbl_80290000@ha
/* 801131F4 0010FFF4  84 04 7A 68 */	lwzu r0, 0x7a68(r4)
/* 801131F8 0010FFF8  38 60 00 04 */	li r3, 4
/* 801131FC 0010FFFC  60 00 00 08 */	ori r0, r0, 8
/* 80113200 00110000  54 00 07 34 */	rlwinm r0, r0, 0, 0x1c, 0x1a
/* 80113204 00110004  90 04 00 00 */	stw r0, lbl_80290000@l(r4)
/* 80113208 00110008  4B F3 EE F9 */	bl zCameraDisableTracking__F17camera_owner_enum
/* 8011320C 0011000C  38 60 00 00 */	li r3, 0
/* 80113210 00110010  38 80 00 04 */	li r4, 4
/* 80113214 00110014  4B EF A3 7D */	bl xCameraDoCollisions__Fii
/* 80113218 00110018  3C 80 80 3C */	lis r4, globals@ha
/* 8011321C 0011001C  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 80113220 00110020  3B E3 7A 68 */	addi r31, r3, lbl_80297A68@l
/* 80113224 00110024  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80113228 00110028  38 64 05 58 */	addi r3, r4, globals@l
/* 8011322C 0011002C  38 00 00 00 */	li r0, 0
/* 80113230 00110030  D0 03 17 10 */	stfs f0, 0x1710(r3)
/* 80113234 00110034  38 7D 01 0C */	addi r3, r29, 0x10c
/* 80113238 00110038  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 8011323C 0011003C  90 1F 01 98 */	stw r0, 0x198(r31)
/* 80113240 00110040  80 84 00 10 */	lwz r4, 0x10(r4)
/* 80113244 00110044  48 00 05 CD */	bl __as__Q212bungee_state10hook_assetFRCQ212bungee_state10hook_asset
/* 80113248 00110048  4B FF D5 25 */	bl update_hook_loc__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv
/* 8011324C 0011004C  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 80113250 00110050  38 7D 00 2C */	addi r3, r29, 0x2c
/* 80113254 00110054  38 84 7A 68 */	addi r4, r4, lbl_80297A68@l
/* 80113258 00110058  38 84 01 74 */	addi r4, r4, 0x174
/* 8011325C 0011005C  4B EF 80 09 */	bl __as__5xVec3FRC5xVec3
/* 80113260 00110060  7F A3 EB 78 */	mr r3, r29
/* 80113264 00110064  4B FF D9 51 */	bl reset_props_vertical__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv
/* 80113268 00110068  C0 1D 01 4C */	lfs f0, 0x14c(r29)
/* 8011326C 0011006C  7F A3 EB 78 */	mr r3, r29
/* 80113270 00110070  C0 3D 01 3C */	lfs f1, 0x13c(r29)
/* 80113274 00110074  FC 00 00 50 */	fneg f0, f0
/* 80113278 00110078  EC 01 00 32 */	fmuls f0, f1, f0
/* 8011327C 0011007C  D0 1D 01 3C */	stfs f0, 0x13c(r29)
/* 80113280 00110080  4B FF D7 B1 */	bl reset_props_camera__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv
/* 80113284 00110084  3C 60 80 3C */	lis r3, globals@ha
/* 80113288 00110088  7F A4 EB 78 */	mr r4, r29
/* 8011328C 0011008C  3B 83 05 58 */	addi r28, r3, globals@l
/* 80113290 00110090  38 61 00 08 */	addi r3, r1, 8
/* 80113294 00110094  80 BC 07 28 */	lwz r5, 0x728(r28)
/* 80113298 00110098  38 A5 00 30 */	addi r5, r5, 0x30
/* 8011329C 0011009C  48 00 05 39 */	bl world_to_local__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFRC5xVec3
/* 801132A0 001100A0  38 7D 00 08 */	addi r3, r29, 8
/* 801132A4 001100A4  38 81 00 08 */	addi r4, r1, 8
/* 801132A8 001100A8  4B EF 7F BD */	bl __as__5xVec3FRC5xVec3
/* 801132AC 001100AC  38 7D 00 20 */	addi r3, r29, 0x20
/* 801132B0 001100B0  38 9D 00 08 */	addi r4, r29, 8
/* 801132B4 001100B4  4B EF 7F B1 */	bl __as__5xVec3FRC5xVec3
/* 801132B8 001100B8  80 9C 07 28 */	lwz r4, 0x728(r28)
/* 801132BC 001100BC  38 7D 00 14 */	addi r3, r29, 0x14
/* 801132C0 001100C0  38 84 00 D4 */	addi r4, r4, 0xd4
/* 801132C4 001100C4  4B EF 7F A1 */	bl __as__5xVec3FRC5xVec3
/* 801132C8 001100C8  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 801132CC 001100CC  7F A3 EB 78 */	mr r3, r29
/* 801132D0 001100D0  D0 1D 00 68 */	stfs f0, 0x68(r29)
/* 801132D4 001100D4  48 00 03 E5 */	bl init_camera__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv
/* 801132D8 001100D8  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 801132DC 001100DC  38 81 00 14 */	addi r4, r1, 0x14
/* 801132E0 001100E0  38 63 7A 68 */	addi r3, r3, lbl_80297A68@l
/* 801132E4 001100E4  80 63 01 68 */	lwz r3, 0x168(r3)
/* 801132E8 001100E8  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 801132EC 001100EC  4B F1 EB 49 */	bl xMat3x3GetEuler__FPC7xMat3x3P5xVec3
/* 801132F0 001100F0  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 801132F4 001100F4  7F A3 EB 78 */	mr r3, r29
/* 801132F8 001100F8  D0 1D 00 6C */	stfs f0, 0x6c(r29)
/* 801132FC 001100FC  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80113300 00110100  D0 1D 00 70 */	stfs f0, 0x70(r29)
/* 80113304 00110104  4B FF D6 51 */	bl reset_props_collision__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv
/* 80113308 00110108  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 8011330C 0011010C  3C 80 80 3C */	lis r4, globals@ha
/* 80113310 00110110  38 A3 37 88 */	addi r5, r3, lbl_80313788@l
/* 80113314 00110114  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 80113318 00110118  C0 05 00 24 */	lfs f0, 0x24(r5)
/* 8011331C 0011011C  38 84 05 58 */	addi r4, r4, globals@l
/* 80113320 00110120  38 63 7A 68 */	addi r3, r3, lbl_80297A68@l
/* 80113324 00110124  80 A4 07 04 */	lwz r5, 0x704(r4)
/* 80113328 00110128  D0 04 07 74 */	stfs f0, 0x774(r4)
/* 8011332C 0011012C  80 83 00 10 */	lwz r4, 0x10(r3)
/* 80113330 00110130  80 65 00 0C */	lwz r3, 0xc(r5)
/* 80113334 00110134  4B EF 57 11 */	bl xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition
/* 80113338 00110138  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 8011333C 0011013C  38 60 00 00 */	li r3, 0
/* 80113340 00110140  4B FF CF 79 */	bl play_sound__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FQ312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_10sound_enumf
/* 80113344 00110144  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80113348 00110148  38 60 00 01 */	li r3, 1
/* 8011334C 0011014C  4B FF CF 6D */	bl play_sound__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FQ312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_10sound_enumf
/* 80113350 00110150  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80113354 00110154  38 60 00 05 */	li r3, 5
/* 80113358 00110158  4B FF CF 61 */	bl play_sound__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FQ312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_10sound_enumf
/* 8011335C 0011015C  C0 22 9E 8C */	lfs f1, lbl_803CE80C-_SDA2_BASE_(r2)
/* 80113360 00110160  C0 42 9E 88 */	lfs f2, lbl_803CE808-_SDA2_BASE_(r2)
/* 80113364 00110164  4B F9 48 FD */	bl zMusicSetVolume__Fff
/* 80113368 00110168  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8011336C 0011016C  3C 80 80 27 */	lis r4, lbl_8026A688@ha
/* 80113370 00110170  38 A4 A6 88 */	addi r5, r4, lbl_8026A688@l
/* 80113374 00110174  C0 22 9E 90 */	lfs f1, lbl_803CE810-_SDA2_BASE_(r2)
/* 80113378 00110178  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8011337C 0011017C  7F A6 EB 78 */	mr r6, r29
/* 80113380 00110180  C0 42 9E 84 */	lfs f2, lbl_803CE804-_SDA2_BASE_(r2)
/* 80113384 00110184  38 65 06 E2 */	addi r3, r5, 0x6e2
/* 80113388 00110188  38 84 00 3C */	addi r4, r4, 0x3c
/* 8011338C 0011018C  38 BE 01 E0 */	addi r5, r30, 0x1e0
/* 80113390 00110190  38 E0 00 00 */	li r7, 0
/* 80113394 00110194  4B F1 D2 99 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80113398 00110198  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8011339C 0011019C  3C 80 80 27 */	lis r4, lbl_8026A688@ha
/* 801133A0 001101A0  38 A4 A6 88 */	addi r5, r4, lbl_8026A688@l
/* 801133A4 001101A4  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 801133A8 001101A8  80 83 00 10 */	lwz r4, 0x10(r3)
/* 801133AC 001101AC  7F A6 EB 78 */	mr r6, r29
/* 801133B0 001101B0  C0 42 9E 98 */	lfs f2, lbl_803CE818-_SDA2_BASE_(r2)
/* 801133B4 001101B4  38 65 07 01 */	addi r3, r5, 0x701
/* 801133B8 001101B8  38 84 00 44 */	addi r4, r4, 0x44
/* 801133BC 001101BC  38 BE 01 E0 */	addi r5, r30, 0x1e0
/* 801133C0 001101C0  38 E0 00 00 */	li r7, 0
/* 801133C4 001101C4  4B F1 D2 69 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 801133C8 001101C8  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 801133CC 001101CC  3C 80 80 27 */	lis r4, lbl_8026A688@ha
/* 801133D0 001101D0  38 A4 A6 88 */	addi r5, r4, lbl_8026A688@l
/* 801133D4 001101D4  C0 22 9E 90 */	lfs f1, lbl_803CE810-_SDA2_BASE_(r2)
/* 801133D8 001101D8  80 83 00 10 */	lwz r4, 0x10(r3)
/* 801133DC 001101DC  7F A6 EB 78 */	mr r6, r29
/* 801133E0 001101E0  C0 42 9E D0 */	lfs f2, lbl_803CE850-_SDA2_BASE_(r2)
/* 801133E4 001101E4  38 65 07 24 */	addi r3, r5, 0x724
/* 801133E8 001101E8  38 84 00 40 */	addi r4, r4, 0x40
/* 801133EC 001101EC  38 BE 01 E0 */	addi r5, r30, 0x1e0
/* 801133F0 001101F0  38 E0 00 00 */	li r7, 0
/* 801133F4 001101F4  4B F1 D2 39 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 801133F8 001101F8  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 801133FC 001101FC  3C 80 80 27 */	lis r4, lbl_8026A688@ha
/* 80113400 00110200  38 A4 A6 88 */	addi r5, r4, lbl_8026A688@l
/* 80113404 00110204  C0 22 9E 8C */	lfs f1, lbl_803CE80C-_SDA2_BASE_(r2)
/* 80113408 00110208  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8011340C 0011020C  7F A6 EB 78 */	mr r6, r29
/* 80113410 00110210  C0 42 9E 84 */	lfs f2, lbl_803CE804-_SDA2_BASE_(r2)
/* 80113414 00110214  38 65 07 41 */	addi r3, r5, 0x741
/* 80113418 00110218  38 84 00 48 */	addi r4, r4, 0x48
/* 8011341C 0011021C  38 BE 01 E0 */	addi r5, r30, 0x1e0
/* 80113420 00110220  38 E0 00 00 */	li r7, 0
/* 80113424 00110224  4B F1 D2 09 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80113428 00110228  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8011342C 0011022C  3C 80 80 27 */	lis r4, lbl_8026A688@ha
/* 80113430 00110230  38 A4 A6 88 */	addi r5, r4, lbl_8026A688@l
/* 80113434 00110234  C0 22 9E 8C */	lfs f1, lbl_803CE80C-_SDA2_BASE_(r2)
/* 80113438 00110238  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8011343C 0011023C  7F A6 EB 78 */	mr r6, r29
/* 80113440 00110240  C0 42 9E 80 */	lfs f2, lbl_803CE800-_SDA2_BASE_(r2)
/* 80113444 00110244  38 65 07 63 */	addi r3, r5, 0x763
/* 80113448 00110248  38 84 00 4C */	addi r4, r4, 0x4c
/* 8011344C 0011024C  38 BE 01 E0 */	addi r5, r30, 0x1e0
/* 80113450 00110250  38 E0 00 00 */	li r7, 0
/* 80113454 00110254  4B F1 D1 D9 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80113458 00110258  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8011345C 0011025C  3C 80 80 27 */	lis r4, lbl_8026A688@ha
/* 80113460 00110260  38 A4 A6 88 */	addi r5, r4, lbl_8026A688@l
/* 80113464 00110264  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80113468 00110268  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8011346C 0011026C  7F A6 EB 78 */	mr r6, r29
/* 80113470 00110270  C0 42 9E 88 */	lfs f2, lbl_803CE808-_SDA2_BASE_(r2)
/* 80113474 00110274  38 65 07 85 */	addi r3, r5, 0x785
/* 80113478 00110278  38 84 00 50 */	addi r4, r4, 0x50
/* 8011347C 0011027C  38 BE 01 E0 */	addi r5, r30, 0x1e0
/* 80113480 00110280  38 E0 00 00 */	li r7, 0
/* 80113484 00110284  4B F1 D1 A9 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80113488 00110288  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8011348C 0011028C  3C 80 80 27 */	lis r4, lbl_8026A688@ha
/* 80113490 00110290  38 A4 A6 88 */	addi r5, r4, lbl_8026A688@l
/* 80113494 00110294  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80113498 00110298  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8011349C 0011029C  7F A6 EB 78 */	mr r6, r29
/* 801134A0 001102A0  C0 42 9E 84 */	lfs f2, lbl_803CE804-_SDA2_BASE_(r2)
/* 801134A4 001102A4  38 65 07 A4 */	addi r3, r5, 0x7a4
/* 801134A8 001102A8  38 84 00 54 */	addi r4, r4, 0x54
/* 801134AC 001102AC  38 BE 02 08 */	addi r5, r30, 0x208
/* 801134B0 001102B0  38 E0 00 00 */	li r7, 0
/* 801134B4 001102B4  4B F1 D1 79 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 801134B8 001102B8  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 801134BC 001102BC  3C 80 80 27 */	lis r4, lbl_8026A688@ha
/* 801134C0 001102C0  38 A4 A6 88 */	addi r5, r4, lbl_8026A688@l
/* 801134C4 001102C4  C0 22 9E 88 */	lfs f1, lbl_803CE808-_SDA2_BASE_(r2)
/* 801134C8 001102C8  80 83 00 10 */	lwz r4, 0x10(r3)
/* 801134CC 001102CC  7F A6 EB 78 */	mr r6, r29
/* 801134D0 001102D0  C0 42 9F 04 */	lfs f2, lbl_803CE884-_SDA2_BASE_(r2)
/* 801134D4 001102D4  38 65 07 C8 */	addi r3, r5, 0x7c8
/* 801134D8 001102D8  38 84 00 58 */	addi r4, r4, 0x58
/* 801134DC 001102DC  38 BE 02 30 */	addi r5, r30, 0x230
/* 801134E0 001102E0  38 E0 00 00 */	li r7, 0
/* 801134E4 001102E4  4B F1 D1 49 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 801134E8 001102E8  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 801134EC 001102EC  3C 80 80 27 */	lis r4, lbl_8026A688@ha
/* 801134F0 001102F0  38 A4 A6 88 */	addi r5, r4, lbl_8026A688@l
/* 801134F4 001102F4  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 801134F8 001102F8  80 83 00 10 */	lwz r4, 0x10(r3)
/* 801134FC 001102FC  7F A6 EB 78 */	mr r6, r29
/* 80113500 00110300  C0 42 9F 08 */	lfs f2, lbl_803CE888-_SDA2_BASE_(r2)
/* 80113504 00110304  38 65 07 E9 */	addi r3, r5, 0x7e9
/* 80113508 00110308  38 84 00 5C */	addi r4, r4, 0x5c
/* 8011350C 0011030C  38 BE 02 30 */	addi r5, r30, 0x230
/* 80113510 00110310  38 E0 00 00 */	li r7, 0
/* 80113514 00110314  4B F1 D1 19 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80113518 00110318  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8011351C 0011031C  3C 80 80 27 */	lis r4, lbl_8026A688@ha
/* 80113520 00110320  38 A4 A6 88 */	addi r5, r4, lbl_8026A688@l
/* 80113524 00110324  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80113528 00110328  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8011352C 0011032C  7F A6 EB 78 */	mr r6, r29
/* 80113530 00110330  C0 42 9E 84 */	lfs f2, lbl_803CE804-_SDA2_BASE_(r2)
/* 80113534 00110334  38 65 08 07 */	addi r3, r5, 0x807
/* 80113538 00110338  38 84 00 60 */	addi r4, r4, 0x60
/* 8011353C 0011033C  38 BE 02 30 */	addi r5, r30, 0x230
/* 80113540 00110340  38 E0 00 00 */	li r7, 0
/* 80113544 00110344  4B F1 D0 E9 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80113548 00110348  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8011354C 0011034C  3C 80 80 27 */	lis r4, lbl_8026A688@ha
/* 80113550 00110350  38 A4 A6 88 */	addi r5, r4, lbl_8026A688@l
/* 80113554 00110354  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80113558 00110358  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8011355C 0011035C  7F A6 EB 78 */	mr r6, r29
/* 80113560 00110360  C0 42 9F 08 */	lfs f2, lbl_803CE888-_SDA2_BASE_(r2)
/* 80113564 00110364  38 65 08 21 */	addi r3, r5, 0x821
/* 80113568 00110368  38 84 00 64 */	addi r4, r4, 0x64
/* 8011356C 0011036C  38 BE 02 30 */	addi r5, r30, 0x230
/* 80113570 00110370  38 E0 00 00 */	li r7, 0
/* 80113574 00110374  4B F1 D0 B9 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80113578 00110378  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8011357C 0011037C  3C 80 80 27 */	lis r4, lbl_8026A688@ha
/* 80113580 00110380  38 A4 A6 88 */	addi r5, r4, lbl_8026A688@l
/* 80113584 00110384  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80113588 00110388  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8011358C 0011038C  7F A6 EB 78 */	mr r6, r29
/* 80113590 00110390  C0 42 9E 88 */	lfs f2, lbl_803CE808-_SDA2_BASE_(r2)
/* 80113594 00110394  38 65 08 45 */	addi r3, r5, 0x845
/* 80113598 00110398  38 84 00 68 */	addi r4, r4, 0x68
/* 8011359C 0011039C  38 BE 02 30 */	addi r5, r30, 0x230
/* 801135A0 001103A0  38 E0 00 00 */	li r7, 0
/* 801135A4 001103A4  4B F1 D0 89 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 801135A8 001103A8  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 801135AC 001103AC  3C 80 80 27 */	lis r4, lbl_8026A688@ha
/* 801135B0 001103B0  38 A4 A6 88 */	addi r5, r4, lbl_8026A688@l
/* 801135B4 001103B4  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 801135B8 001103B8  80 83 00 10 */	lwz r4, 0x10(r3)
/* 801135BC 001103BC  7F A6 EB 78 */	mr r6, r29
/* 801135C0 001103C0  C0 42 9E D0 */	lfs f2, lbl_803CE850-_SDA2_BASE_(r2)
/* 801135C4 001103C4  38 65 08 63 */	addi r3, r5, 0x863
/* 801135C8 001103C8  38 84 00 6C */	addi r4, r4, 0x6c
/* 801135CC 001103CC  38 BE 02 30 */	addi r5, r30, 0x230
/* 801135D0 001103D0  38 E0 00 00 */	li r7, 0
/* 801135D4 001103D4  4B F1 D0 59 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 801135D8 001103D8  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 801135DC 001103DC  3C 80 80 27 */	lis r4, lbl_8026A688@ha
/* 801135E0 001103E0  38 A4 A6 88 */	addi r5, r4, lbl_8026A688@l
/* 801135E4 001103E4  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 801135E8 001103E8  80 83 00 10 */	lwz r4, 0x10(r3)
/* 801135EC 001103EC  7F A6 EB 78 */	mr r6, r29
/* 801135F0 001103F0  C0 42 9E 88 */	lfs f2, lbl_803CE808-_SDA2_BASE_(r2)
/* 801135F4 001103F4  38 65 08 85 */	addi r3, r5, 0x885
/* 801135F8 001103F8  38 84 00 70 */	addi r4, r4, 0x70
/* 801135FC 001103FC  38 BE 02 30 */	addi r5, r30, 0x230
/* 80113600 00110400  38 E0 00 00 */	li r7, 0
/* 80113604 00110404  4B F1 D0 29 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80113608 00110408  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8011360C 0011040C  3C 80 80 27 */	lis r4, lbl_8026A688@ha
/* 80113610 00110410  38 A4 A6 88 */	addi r5, r4, lbl_8026A688@l
/* 80113614 00110414  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80113618 00110418  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8011361C 0011041C  7F A6 EB 78 */	mr r6, r29
/* 80113620 00110420  C0 42 9E 88 */	lfs f2, lbl_803CE808-_SDA2_BASE_(r2)
/* 80113624 00110424  38 65 08 A3 */	addi r3, r5, 0x8a3
/* 80113628 00110428  38 84 00 80 */	addi r4, r4, 0x80
/* 8011362C 0011042C  38 BE 02 58 */	addi r5, r30, 0x258
/* 80113630 00110430  38 E0 00 00 */	li r7, 0
/* 80113634 00110434  4B F1 CF F9 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80113638 00110438  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8011363C 0011043C  3C 80 80 27 */	lis r4, lbl_8026A688@ha
/* 80113640 00110440  38 A4 A6 88 */	addi r5, r4, lbl_8026A688@l
/* 80113644 00110444  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80113648 00110448  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8011364C 0011044C  7F A6 EB 78 */	mr r6, r29
/* 80113650 00110450  C0 42 9E 88 */	lfs f2, lbl_803CE808-_SDA2_BASE_(r2)
/* 80113654 00110454  38 65 08 C0 */	addi r3, r5, 0x8c0
/* 80113658 00110458  38 84 00 84 */	addi r4, r4, 0x84
/* 8011365C 0011045C  38 BE 02 58 */	addi r5, r30, 0x258
/* 80113660 00110460  38 E0 00 00 */	li r7, 0
/* 80113664 00110464  4B F1 CF C9 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80113668 00110468  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8011366C 0011046C  3C 80 80 27 */	lis r4, lbl_8026A688@ha
/* 80113670 00110470  38 A4 A6 88 */	addi r5, r4, lbl_8026A688@l
/* 80113674 00110474  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80113678 00110478  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8011367C 0011047C  7F A6 EB 78 */	mr r6, r29
/* 80113680 00110480  C0 42 9E 88 */	lfs f2, lbl_803CE808-_SDA2_BASE_(r2)
/* 80113684 00110484  38 65 08 E4 */	addi r3, r5, 0x8e4
/* 80113688 00110488  38 84 00 88 */	addi r4, r4, 0x88
/* 8011368C 0011048C  38 BE 02 58 */	addi r5, r30, 0x258
/* 80113690 00110490  38 E0 00 00 */	li r7, 0
/* 80113694 00110494  4B F1 CF 99 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80113698 00110498  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8011369C 0011049C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801136A0 001104A0  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 801136A4 001104A4  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 801136A8 001104A8  83 81 00 20 */	lwz r28, 0x20(r1)
/* 801136AC 001104AC  7C 08 03 A6 */	mtlr r0
/* 801136B0 001104B0  38 21 00 30 */	addi r1, r1, 0x30
/* 801136B4 001104B4  4E 80 00 20 */	blr 

/* init_camera__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv */
init_camera__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv:
/* 801136B8 001104B8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801136BC 001104BC  7C 08 02 A6 */	mflr r0
/* 801136C0 001104C0  90 01 00 44 */	stw r0, 0x44(r1)
/* 801136C4 001104C4  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 801136C8 001104C8  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 801136CC 001104CC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801136D0 001104D0  93 C1 00 28 */	stw r30, 0x28(r1)
/* 801136D4 001104D4  3C 80 80 3C */	lis r4, globals@ha
/* 801136D8 001104D8  7C 7E 1B 78 */	mr r30, r3
/* 801136DC 001104DC  38 84 05 58 */	addi r4, r4, globals@l
/* 801136E0 001104E0  38 61 00 08 */	addi r3, r1, 8
/* 801136E4 001104E4  3B E4 00 14 */	addi r31, r4, 0x14
/* 801136E8 001104E8  7F C4 F3 78 */	mr r4, r30
/* 801136EC 001104EC  38 BF 00 30 */	addi r5, r31, 0x30
/* 801136F0 001104F0  48 00 00 E5 */	bl world_to_local__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFRC5xVec3
/* 801136F4 001104F4  38 7E 00 38 */	addi r3, r30, 0x38
/* 801136F8 001104F8  38 81 00 08 */	addi r4, r1, 8
/* 801136FC 001104FC  4B EF 7B 69 */	bl __as__5xVec3FRC5xVec3
/* 80113700 00110500  7F E3 FB 78 */	mr r3, r31
/* 80113704 00110504  38 81 00 14 */	addi r4, r1, 0x14
/* 80113708 00110508  4B F1 E7 2D */	bl xMat3x3GetEuler__FPC7xMat3x3P5xVec3
/* 8011370C 0011050C  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80113710 00110510  4B FB 17 81 */	bl icos__Ff
/* 80113714 00110514  FF E0 08 90 */	fmr f31, f1
/* 80113718 00110518  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8011371C 0011051C  4B FB 17 31 */	bl isin__Ff
/* 80113720 00110520  EC 1F 00 72 */	fmuls f0, f31, f1
/* 80113724 00110524  D0 1E 00 50 */	stfs f0, 0x50(r30)
/* 80113728 00110528  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8011372C 0011052C  4B FB 17 21 */	bl isin__Ff
/* 80113730 00110530  FC 00 08 50 */	fneg f0, f1
/* 80113734 00110534  D0 1E 00 54 */	stfs f0, 0x54(r30)
/* 80113738 00110538  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8011373C 0011053C  4B FB 17 55 */	bl icos__Ff
/* 80113740 00110540  EC 1F 00 72 */	fmuls f0, f31, f1
/* 80113744 00110544  D0 1E 00 58 */	stfs f0, 0x58(r30)
/* 80113748 00110548  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8011374C 0011054C  C0 1E 01 68 */	lfs f0, 0x168(r30)
/* 80113750 00110550  EC 01 00 28 */	fsubs f0, f1, f0
/* 80113754 00110554  FC 00 00 50 */	fneg f0, f0
/* 80113758 00110558  D0 1E 00 94 */	stfs f0, 0x94(r30)
/* 8011375C 0011055C  C0 22 9F 0C */	lfs f1, lbl_803CE88C-_SDA2_BASE_(r2)
/* 80113760 00110560  C0 1E 00 94 */	lfs f0, 0x94(r30)
/* 80113764 00110564  EC 21 00 2A */	fadds f1, f1, f0
/* 80113768 00110568  4B EF B0 8D */	bl xrmod__Ff
/* 8011376C 0011056C  D0 3E 00 94 */	stfs f1, 0x94(r30)
/* 80113770 00110570  C0 3E 00 94 */	lfs f1, 0x94(r30)
/* 80113774 00110574  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80113778 00110578  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011377C 0011057C  40 80 00 10 */	bge lbl_8011378C
/* 80113780 00110580  C0 02 9F 10 */	lfs f0, lbl_803CE890-_SDA2_BASE_(r2)
/* 80113784 00110584  EC 01 00 2A */	fadds f0, f1, f0
/* 80113788 00110588  D0 1E 00 94 */	stfs f0, 0x94(r30)
lbl_8011378C:
/* 8011378C 0011058C  C0 3E 00 94 */	lfs f1, 0x94(r30)
/* 80113790 00110590  38 7E 00 44 */	addi r3, r30, 0x44
/* 80113794 00110594  C0 02 9F 0C */	lfs f0, lbl_803CE88C-_SDA2_BASE_(r2)
/* 80113798 00110598  EC 01 00 28 */	fsubs f0, f1, f0
/* 8011379C 0011059C  D0 1E 00 94 */	stfs f0, 0x94(r30)
/* 801137A0 001105A0  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 801137A4 001105A4  4B F0 90 D5 */	bl __as__5xVec3Ff
/* 801137A8 001105A8  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 801137AC 001105AC  38 7E 00 5C */	addi r3, r30, 0x5c
/* 801137B0 001105B0  4B F0 90 C9 */	bl __as__5xVec3Ff
/* 801137B4 001105B4  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 801137B8 001105B8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801137BC 001105BC  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 801137C0 001105C0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801137C4 001105C4  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 801137C8 001105C8  7C 08 03 A6 */	mtlr r0
/* 801137CC 001105CC  38 21 00 40 */	addi r1, r1, 0x40
/* 801137D0 001105D0  4E 80 00 20 */	blr 

/* world_to_local__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFRC5xVec3 */
world_to_local__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFRC5xVec3:
/* 801137D4 001105D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801137D8 001105D8  7C 08 02 A6 */	mflr r0
/* 801137DC 001105DC  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 801137E0 001105E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801137E4 001105E4  38 C4 7A 68 */	addi r6, r4, lbl_80297A68@l
/* 801137E8 001105E8  7C A4 2B 78 */	mr r4, r5
/* 801137EC 001105EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801137F0 001105F0  7C 7F 1B 78 */	mr r31, r3
/* 801137F4 001105F4  38 A6 01 74 */	addi r5, r6, 0x174
/* 801137F8 001105F8  4B EF 79 D5 */	bl __mi__5xVec3CFRC5xVec3
/* 801137FC 001105FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80113800 00110600  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80113804 00110604  7C 08 03 A6 */	mtlr r0
/* 80113808 00110608  38 21 00 10 */	addi r1, r1, 0x10
/* 8011380C 0011060C  4E 80 00 20 */	blr 

.global __as__Q212bungee_state10hook_assetFRCQ212bungee_state10hook_asset
__as__Q212bungee_state10hook_assetFRCQ212bungee_state10hook_asset:
/* 80113810 00110610  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80113814 00110614  7C 08 02 A6 */	mflr r0
/* 80113818 00110618  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011381C 0011061C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80113820 00110620  7C 9F 23 78 */	mr r31, r4
/* 80113824 00110624  93 C1 00 08 */	stw r30, 8(r1)
/* 80113828 00110628  7C 7E 1B 78 */	mr r30, r3
/* 8011382C 0011062C  4B FE 0F E5 */	bl __as__9xDynAssetFRC9xDynAsset
/* 80113830 00110630  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 80113834 00110634  7F C3 F3 78 */	mr r3, r30
/* 80113838 00110638  80 9F 00 14 */	lwz r4, 0x14(r31)
/* 8011383C 0011063C  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80113840 00110640  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 80113844 00110644  90 9E 00 14 */	stw r4, 0x14(r30)
/* 80113848 00110648  80 9F 00 1C */	lwz r4, 0x1c(r31)
/* 8011384C 0011064C  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80113850 00110650  80 1F 00 20 */	lwz r0, 0x20(r31)
/* 80113854 00110654  90 9E 00 1C */	stw r4, 0x1c(r30)
/* 80113858 00110658  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 8011385C 0011065C  90 1E 00 20 */	stw r0, 0x20(r30)
/* 80113860 00110660  80 1F 00 28 */	lwz r0, 0x28(r31)
/* 80113864 00110664  90 9E 00 24 */	stw r4, 0x24(r30)
/* 80113868 00110668  80 9F 00 2C */	lwz r4, 0x2c(r31)
/* 8011386C 0011066C  90 1E 00 28 */	stw r0, 0x28(r30)
/* 80113870 00110670  80 1F 00 30 */	lwz r0, 0x30(r31)
/* 80113874 00110674  90 9E 00 2C */	stw r4, 0x2c(r30)
/* 80113878 00110678  80 9F 00 34 */	lwz r4, 0x34(r31)
/* 8011387C 0011067C  90 1E 00 30 */	stw r0, 0x30(r30)
/* 80113880 00110680  80 1F 00 38 */	lwz r0, 0x38(r31)
/* 80113884 00110684  90 9E 00 34 */	stw r4, 0x34(r30)
/* 80113888 00110688  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 8011388C 0011068C  90 1E 00 38 */	stw r0, 0x38(r30)
/* 80113890 00110690  80 1F 00 40 */	lwz r0, 0x40(r31)
/* 80113894 00110694  90 9E 00 3C */	stw r4, 0x3c(r30)
/* 80113898 00110698  80 9F 00 44 */	lwz r4, 0x44(r31)
/* 8011389C 0011069C  90 1E 00 40 */	stw r0, 0x40(r30)
/* 801138A0 001106A0  80 1F 00 48 */	lwz r0, 0x48(r31)
/* 801138A4 001106A4  90 9E 00 44 */	stw r4, 0x44(r30)
/* 801138A8 001106A8  80 9F 00 4C */	lwz r4, 0x4c(r31)
/* 801138AC 001106AC  90 1E 00 48 */	stw r0, 0x48(r30)
/* 801138B0 001106B0  80 1F 00 50 */	lwz r0, 0x50(r31)
/* 801138B4 001106B4  90 9E 00 4C */	stw r4, 0x4c(r30)
/* 801138B8 001106B8  80 9F 00 54 */	lwz r4, 0x54(r31)
/* 801138BC 001106BC  90 1E 00 50 */	stw r0, 0x50(r30)
/* 801138C0 001106C0  80 1F 00 58 */	lwz r0, 0x58(r31)
/* 801138C4 001106C4  90 9E 00 54 */	stw r4, 0x54(r30)
/* 801138C8 001106C8  80 9F 00 5C */	lwz r4, 0x5c(r31)
/* 801138CC 001106CC  90 1E 00 58 */	stw r0, 0x58(r30)
/* 801138D0 001106D0  80 1F 00 60 */	lwz r0, 0x60(r31)
/* 801138D4 001106D4  90 9E 00 5C */	stw r4, 0x5c(r30)
/* 801138D8 001106D8  80 9F 00 64 */	lwz r4, 0x64(r31)
/* 801138DC 001106DC  90 1E 00 60 */	stw r0, 0x60(r30)
/* 801138E0 001106E0  80 1F 00 68 */	lwz r0, 0x68(r31)
/* 801138E4 001106E4  90 9E 00 64 */	stw r4, 0x64(r30)
/* 801138E8 001106E8  80 9F 00 6C */	lwz r4, 0x6c(r31)
/* 801138EC 001106EC  90 1E 00 68 */	stw r0, 0x68(r30)
/* 801138F0 001106F0  80 1F 00 70 */	lwz r0, 0x70(r31)
/* 801138F4 001106F4  90 9E 00 6C */	stw r4, 0x6c(r30)
/* 801138F8 001106F8  80 9F 00 74 */	lwz r4, 0x74(r31)
/* 801138FC 001106FC  90 1E 00 70 */	stw r0, 0x70(r30)
/* 80113900 00110700  80 1F 00 78 */	lwz r0, 0x78(r31)
/* 80113904 00110704  90 9E 00 74 */	stw r4, 0x74(r30)
/* 80113908 00110708  80 9F 00 7C */	lwz r4, 0x7c(r31)
/* 8011390C 0011070C  90 1E 00 78 */	stw r0, 0x78(r30)
/* 80113910 00110710  80 1F 00 80 */	lwz r0, 0x80(r31)
/* 80113914 00110714  90 9E 00 7C */	stw r4, 0x7c(r30)
/* 80113918 00110718  80 9F 00 84 */	lwz r4, 0x84(r31)
/* 8011391C 0011071C  90 1E 00 80 */	stw r0, 0x80(r30)
/* 80113920 00110720  80 1F 00 88 */	lwz r0, 0x88(r31)
/* 80113924 00110724  90 9E 00 84 */	stw r4, 0x84(r30)
/* 80113928 00110728  90 1E 00 88 */	stw r0, 0x88(r30)
/* 8011392C 0011072C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80113930 00110730  83 C1 00 08 */	lwz r30, 8(r1)
/* 80113934 00110734  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80113938 00110738  7C 08 03 A6 */	mtlr r0
/* 8011393C 0011073C  38 21 00 10 */	addi r1, r1, 0x10
/* 80113940 00110740  4E 80 00 20 */	blr 

/* allow_dive__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFb */
allow_dive__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFb:
/* 80113944 00110744  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80113948 00110748  7C 08 02 A6 */	mflr r0
/* 8011394C 0011074C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80113950 00110750  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80113954 00110754  93 C1 00 08 */	stw r30, 8(r1)
/* 80113958 00110758  7C 7E 1B 78 */	mr r30, r3
/* 8011395C 0011075C  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80113960 00110760  38 63 A6 88 */	addi r3, r3, lbl_8026A688@l
/* 80113964 00110764  98 9E 00 B9 */	stb r4, 0xb9(r30)
/* 80113968 00110768  38 63 09 05 */	addi r3, r3, 0x905
/* 8011396C 0011076C  4B F3 88 A9 */	bl xStrHash__FPCc
/* 80113970 00110770  4B FA 10 CD */	bl zSceneFindObject__FUi
/* 80113974 00110774  7C 7F 1B 79 */	or. r31, r3, r3
/* 80113978 00110778  41 82 00 5C */	beq lbl_801139D4
/* 8011397C 0011077C  88 1F 00 04 */	lbz r0, 4(r31)
/* 80113980 00110780  28 00 00 33 */	cmplwi r0, 0x33
/* 80113984 00110784  41 82 00 08 */	beq lbl_8011398C
/* 80113988 00110788  48 00 00 4C */	b lbl_801139D4
lbl_8011398C:
/* 8011398C 0011078C  88 1E 00 B9 */	lbz r0, 0xb9(r30)
/* 80113990 00110790  28 00 00 00 */	cmplwi r0, 0
/* 80113994 00110794  41 82 00 24 */	beq lbl_801139B8
/* 80113998 00110798  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 8011399C 0011079C  38 63 A6 88 */	addi r3, r3, lbl_8026A688@l
/* 801139A0 001107A0  38 63 09 19 */	addi r3, r3, 0x919
/* 801139A4 001107A4  4B F3 88 71 */	bl xStrHash__FPCc
/* 801139A8 001107A8  7C 64 1B 78 */	mr r4, r3
/* 801139AC 001107AC  7F E3 FB 78 */	mr r3, r31
/* 801139B0 001107B0  48 02 0C E5 */	bl set_text__8ztextboxFUi
/* 801139B4 001107B4  48 00 00 20 */	b lbl_801139D4
lbl_801139B8:
/* 801139B8 001107B8  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 801139BC 001107BC  38 63 A6 88 */	addi r3, r3, lbl_8026A688@l
/* 801139C0 001107C0  38 63 09 2A */	addi r3, r3, 0x92a
/* 801139C4 001107C4  4B F3 88 51 */	bl xStrHash__FPCc
/* 801139C8 001107C8  7C 64 1B 78 */	mr r4, r3
/* 801139CC 001107CC  7F E3 FB 78 */	mr r3, r31
/* 801139D0 001107D0  48 02 0C C5 */	bl set_text__8ztextboxFUi
lbl_801139D4:
/* 801139D4 001107D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801139D8 001107D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801139DC 001107DC  83 C1 00 08 */	lwz r30, 8(r1)
/* 801139E0 001107E0  7C 08 03 A6 */	mtlr r0
/* 801139E4 001107E4  38 21 00 10 */	addi r1, r1, 0x10
/* 801139E8 001107E8  4E 80 00 20 */	blr 

/* show_help__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv */
show_help__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv:
/* 801139EC 001107EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801139F0 001107F0  7C 08 02 A6 */	mflr r0
/* 801139F4 001107F4  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 801139F8 001107F8  38 63 A6 88 */	addi r3, r3, lbl_8026A688@l
/* 801139FC 001107FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80113A00 00110800  38 63 09 05 */	addi r3, r3, 0x905
/* 80113A04 00110804  4B F3 88 11 */	bl xStrHash__FPCc
/* 80113A08 00110808  4B FA 10 35 */	bl zSceneFindObject__FUi
/* 80113A0C 0011080C  28 03 00 00 */	cmplwi r3, 0
/* 80113A10 00110810  41 82 00 18 */	beq lbl_80113A28
/* 80113A14 00110814  88 03 00 04 */	lbz r0, 4(r3)
/* 80113A18 00110818  28 00 00 33 */	cmplwi r0, 0x33
/* 80113A1C 0011081C  41 82 00 08 */	beq lbl_80113A24
/* 80113A20 00110820  48 00 00 08 */	b lbl_80113A28
lbl_80113A24:
/* 80113A24 00110824  48 02 0B 7D */	bl activate__8ztextboxFv
lbl_80113A28:
/* 80113A28 00110828  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80113A2C 0011082C  7C 08 03 A6 */	mtlr r0
/* 80113A30 00110830  38 21 00 10 */	addi r1, r1, 0x10
/* 80113A34 00110834  4E 80 00 20 */	blr 

stop__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv:
/* 80113A38 00110838  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80113A3C 0011083C  7C 08 02 A6 */	mflr r0
/* 80113A40 00110840  90 01 00 24 */	stw r0, 0x24(r1)
/* 80113A44 00110844  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80113A48 00110848  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80113A4C 0011084C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80113A50 00110850  7C 7D 1B 78 */	mr r29, r3
/* 80113A54 00110854  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80113A58 00110858  4B FB BA F5 */	bl iCameraSetBlurriness__Ff
/* 80113A5C 0011085C  7F A3 EB 78 */	mr r3, r29
/* 80113A60 00110860  48 00 01 19 */	bl hide_help__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv
/* 80113A64 00110864  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 80113A68 00110868  38 60 20 00 */	li r3, 0x2000
/* 80113A6C 0011086C  3B E4 7A 68 */	addi r31, r4, lbl_80297A68@l
/* 80113A70 00110870  80 1F 00 00 */	lwz r0, 0(r31)
/* 80113A74 00110874  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 80113A78 00110878  54 00 07 76 */	rlwinm r0, r0, 0, 0x1d, 0x1b
/* 80113A7C 0011087C  90 1F 00 00 */	stw r0, 0(r31)
/* 80113A80 00110880  80 84 00 10 */	lwz r4, 0x10(r4)
/* 80113A84 00110884  C0 04 00 2C */	lfs f0, 0x2c(r4)
/* 80113A88 00110888  D0 1F 01 94 */	stfs f0, 0x194(r31)
/* 80113A8C 0011088C  4B F5 2A CD */	bl zEntPlayerControlOff__F13zControlOwner
/* 80113A90 00110890  4B FF CA 49 */	bl hide_models__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv
/* 80113A94 00110894  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 80113A98 00110898  38 83 7A 68 */	addi r4, r3, lbl_80297A68@l
/* 80113A9C 0011089C  80 64 01 68 */	lwz r3, 0x168(r4)
/* 80113AA0 001108A0  38 84 01 74 */	addi r4, r4, 0x174
/* 80113AA4 001108A4  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80113AA8 001108A8  38 63 00 30 */	addi r3, r3, 0x30
/* 80113AAC 001108AC  4B EF 77 B9 */	bl __as__5xVec3FRC5xVec3
/* 80113AB0 001108B0  3C 80 80 3C */	lis r4, globals@ha
/* 80113AB4 001108B4  3B C4 05 58 */	addi r30, r4, globals@l
/* 80113AB8 001108B8  80 BE 07 28 */	lwz r5, 0x728(r30)
/* 80113ABC 001108BC  7C 64 1B 78 */	mr r4, r3
/* 80113AC0 001108C0  38 65 00 30 */	addi r3, r5, 0x30
/* 80113AC4 001108C4  4B EF 77 A1 */	bl __as__5xVec3FRC5xVec3
/* 80113AC8 001108C8  80 7E 07 28 */	lwz r3, 0x728(r30)
/* 80113ACC 001108CC  38 9D 00 9C */	addi r4, r29, 0x9c
/* 80113AD0 001108D0  38 63 00 D4 */	addi r3, r3, 0xd4
/* 80113AD4 001108D4  4B EF 77 91 */	bl __as__5xVec3FRC5xVec3
/* 80113AD8 001108D8  3C 60 80 3C */	lis r3, globals@ha
/* 80113ADC 001108DC  C0 0D 81 D8 */	lfs f0, default_player_radius-_SDA_BASE_(r13)
/* 80113AE0 001108E0  38 83 05 58 */	addi r4, r3, globals@l
/* 80113AE4 001108E4  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 80113AE8 001108E8  D0 04 07 74 */	stfs f0, 0x774(r4)
/* 80113AEC 001108EC  38 63 7A 68 */	addi r3, r3, lbl_80297A68@l
/* 80113AF0 001108F0  80 A4 07 04 */	lwz r5, 0x704(r4)
/* 80113AF4 001108F4  80 83 00 1C */	lwz r4, 0x1c(r3)
/* 80113AF8 001108F8  80 65 00 0C */	lwz r3, 0xc(r5)
/* 80113AFC 001108FC  4B EF 4F 49 */	bl xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition
/* 80113B00 00110900  38 60 00 05 */	li r3, 5
/* 80113B04 00110904  4B FF C8 29 */	bl stop_sound__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fi
/* 80113B08 00110908  C0 22 9E 88 */	lfs f1, lbl_803CE808-_SDA2_BASE_(r2)
/* 80113B0C 0011090C  FC 40 08 90 */	fmr f2, f1
/* 80113B10 00110910  4B F9 41 51 */	bl zMusicSetVolume__Fff
/* 80113B14 00110914  38 60 00 04 */	li r3, 4
/* 80113B18 00110918  4B F3 E5 F9 */	bl zCameraEnableTracking__F17camera_owner_enum
/* 80113B1C 0011091C  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80113B20 00110920  38 63 A6 88 */	addi r3, r3, lbl_8026A688@l
/* 80113B24 00110924  38 63 09 42 */	addi r3, r3, 0x942
/* 80113B28 00110928  4B F0 23 79 */	bl xDebugRemoveTweak__FPCc
/* 80113B2C 0011092C  38 60 00 21 */	li r3, 0x21
/* 80113B30 00110930  4B FF CD CD */	bl trigger__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FUi
/* 80113B34 00110934  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 80113B38 00110938  80 63 00 14 */	lwz r3, 0x14(r3)
/* 80113B3C 0011093C  28 03 00 00 */	cmplwi r3, 0
/* 80113B40 00110940  41 82 00 1C */	beq lbl_80113B5C
/* 80113B44 00110944  88 03 00 22 */	lbz r0, 0x22(r3)
/* 80113B48 00110948  70 00 00 EF */	andi. r0, r0, 0xef
/* 80113B4C 0011094C  98 03 00 22 */	stb r0, 0x22(r3)
/* 80113B50 00110950  88 03 00 23 */	lbz r0, 0x23(r3)
/* 80113B54 00110954  70 00 00 EF */	andi. r0, r0, 0xef
/* 80113B58 00110958  98 03 00 23 */	stb r0, 0x23(r3)
lbl_80113B5C:
/* 80113B5C 0011095C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80113B60 00110960  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80113B64 00110964  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80113B68 00110968  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80113B6C 0011096C  7C 08 03 A6 */	mtlr r0
/* 80113B70 00110970  38 21 00 20 */	addi r1, r1, 0x20
/* 80113B74 00110974  4E 80 00 20 */	blr 

/* hide_help__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv */
hide_help__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv:
/* 80113B78 00110978  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80113B7C 0011097C  7C 08 02 A6 */	mflr r0
/* 80113B80 00110980  3C 60 80 27 */	lis r3, lbl_8026A688@ha
/* 80113B84 00110984  38 63 A6 88 */	addi r3, r3, lbl_8026A688@l
/* 80113B88 00110988  90 01 00 14 */	stw r0, 0x14(r1)
/* 80113B8C 0011098C  38 63 09 05 */	addi r3, r3, 0x905
/* 80113B90 00110990  4B F3 86 85 */	bl xStrHash__FPCc
/* 80113B94 00110994  4B FA 0E A9 */	bl zSceneFindObject__FUi
/* 80113B98 00110998  28 03 00 00 */	cmplwi r3, 0
/* 80113B9C 0011099C  41 82 00 18 */	beq lbl_80113BB4
/* 80113BA0 001109A0  88 03 00 04 */	lbz r0, 4(r3)
/* 80113BA4 001109A4  28 00 00 33 */	cmplwi r0, 0x33
/* 80113BA8 001109A8  41 82 00 08 */	beq lbl_80113BB0
/* 80113BAC 001109AC  48 00 00 08 */	b lbl_80113BB4
lbl_80113BB0:
/* 80113BB0 001109B0  48 02 0A 3D */	bl deactivate__8ztextboxFv
lbl_80113BB4:
/* 80113BB4 001109B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80113BB8 001109B8  7C 08 03 A6 */	mtlr r0
/* 80113BBC 001109BC  38 21 00 10 */	addi r1, r1, 0x10
/* 80113BC0 001109C0  4E 80 00 20 */	blr 

update__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFR6xSceneRf:
/* 80113BC4 001109C4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80113BC8 001109C8  7C 08 02 A6 */	mflr r0
/* 80113BCC 001109CC  3C C0 80 3C */	lis r6, globals@ha
/* 80113BD0 001109D0  90 01 00 34 */	stw r0, 0x34(r1)
/* 80113BD4 001109D4  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 80113BD8 001109D8  3B 66 05 58 */	addi r27, r6, globals@l
/* 80113BDC 001109DC  7C 7D 1B 78 */	mr r29, r3
/* 80113BE0 001109E0  7C 9E 23 78 */	mr r30, r4
/* 80113BE4 001109E4  7C BF 2B 78 */	mr r31, r5
/* 80113BE8 001109E8  80 7B 03 1C */	lwz r3, 0x31c(r27)
/* 80113BEC 001109EC  80 03 00 30 */	lwz r0, 0x30(r3)
/* 80113BF0 001109F0  54 00 03 19 */	rlwinm. r0, r0, 0, 0xc, 0xc
/* 80113BF4 001109F4  41 82 00 30 */	beq lbl_80113C24
/* 80113BF8 001109F8  88 1D 00 AC */	lbz r0, 0xac(r29)
/* 80113BFC 001109FC  28 00 00 00 */	cmplwi r0, 0
/* 80113C00 00110A00  40 82 00 24 */	bne lbl_80113C24
/* 80113C04 00110A04  88 1D 00 98 */	lbz r0, 0x98(r29)
/* 80113C08 00110A08  28 00 00 00 */	cmplwi r0, 0
/* 80113C0C 00110A0C  40 82 00 18 */	bne lbl_80113C24
/* 80113C10 00110A10  4B FF CB D5 */	bl find_drop_off__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv
/* 80113C14 00110A14  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80113C18 00110A18  41 82 00 0C */	beq lbl_80113C24
/* 80113C1C 00110A1C  7F A3 EB 78 */	mr r3, r29
/* 80113C20 00110A20  48 00 22 B1 */	bl start_detaching__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv
lbl_80113C24:
/* 80113C24 00110A24  88 1D 00 98 */	lbz r0, 0x98(r29)
/* 80113C28 00110A28  28 00 00 00 */	cmplwi r0, 0
/* 80113C2C 00110A2C  41 82 00 18 */	beq lbl_80113C44
/* 80113C30 00110A30  7F A3 EB 78 */	mr r3, r29
/* 80113C34 00110A34  7F C4 F3 78 */	mr r4, r30
/* 80113C38 00110A38  7F E5 FB 78 */	mr r5, r31
/* 80113C3C 00110A3C  48 00 1F D1 */	bl detach_update__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFR6xSceneRf
/* 80113C40 00110A40  48 00 01 CC */	b lbl_80113E0C
lbl_80113C44:
/* 80113C44 00110A44  3C 80 80 3C */	lis r4, globals@ha
/* 80113C48 00110A48  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 80113C4C 00110A4C  3B 84 05 58 */	addi r28, r4, globals@l
/* 80113C50 00110A50  C0 3F 00 00 */	lfs f1, 0(r31)
/* 80113C54 00110A54  C0 1C 17 08 */	lfs f0, 0x1708(r28)
/* 80113C58 00110A58  38 83 7A 68 */	addi r4, r3, lbl_80297A68@l
/* 80113C5C 00110A5C  38 7D 00 2C */	addi r3, r29, 0x2c
/* 80113C60 00110A60  EC 00 08 28 */	fsubs f0, f0, f1
/* 80113C64 00110A64  38 84 01 74 */	addi r4, r4, 0x174
/* 80113C68 00110A68  D0 1C 17 08 */	stfs f0, 0x1708(r28)
/* 80113C6C 00110A6C  C0 1D 00 B0 */	lfs f0, 0xb0(r29)
/* 80113C70 00110A70  EC 00 08 28 */	fsubs f0, f0, f1
/* 80113C74 00110A74  D0 1D 00 B0 */	stfs f0, 0xb0(r29)
/* 80113C78 00110A78  4B EF 75 ED */	bl __as__5xVec3FRC5xVec3
/* 80113C7C 00110A7C  4B FF CA F1 */	bl update_hook_loc__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv
/* 80113C80 00110A80  C0 02 9E 88 */	lfs f0, lbl_803CE808-_SDA2_BASE_(r2)
/* 80113C84 00110A84  D0 1D 00 84 */	stfs f0, 0x84(r29)
/* 80113C88 00110A88  C0 3D 00 B0 */	lfs f1, 0xb0(r29)
/* 80113C8C 00110A8C  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80113C90 00110A90  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80113C94 00110A94  40 81 00 2C */	ble lbl_80113CC0
/* 80113C98 00110A98  C0 5D 00 B4 */	lfs f2, 0xb4(r29)
/* 80113C9C 00110A9C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80113CA0 00110AA0  4C 40 13 82 */	cror 2, 0, 2
/* 80113CA4 00110AA4  40 82 00 10 */	bne lbl_80113CB4
/* 80113CA8 00110AA8  C0 02 9E 90 */	lfs f0, lbl_803CE810-_SDA2_BASE_(r2)
/* 80113CAC 00110AAC  D0 1D 00 84 */	stfs f0, 0x84(r29)
/* 80113CB0 00110AB0  48 00 00 10 */	b lbl_80113CC0
lbl_80113CB4:
/* 80113CB4 00110AB4  EC 02 08 28 */	fsubs f0, f2, f1
/* 80113CB8 00110AB8  EC 00 10 24 */	fdivs f0, f0, f2
/* 80113CBC 00110ABC  D0 1D 00 84 */	stfs f0, 0x84(r29)
lbl_80113CC0:
/* 80113CC0 00110AC0  88 1D 00 AC */	lbz r0, 0xac(r29)
/* 80113CC4 00110AC4  28 00 00 00 */	cmplwi r0, 0
/* 80113CC8 00110AC8  41 82 00 20 */	beq lbl_80113CE8
/* 80113CCC 00110ACC  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80113CD0 00110AD0  38 7D 00 74 */	addi r3, r29, 0x74
/* 80113CD4 00110AD4  4B EF AC 8D */	bl __as__5xVec2Ff
/* 80113CD8 00110AD8  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80113CDC 00110ADC  D0 1D 00 7C */	stfs f0, 0x7c(r29)
/* 80113CE0 00110AE0  D0 1D 00 80 */	stfs f0, 0x80(r29)
/* 80113CE4 00110AE4  48 00 00 50 */	b lbl_80113D34
lbl_80113CE8:
/* 80113CE8 00110AE8  80 7B 03 1C */	lwz r3, 0x31c(r27)
/* 80113CEC 00110AEC  C0 3D 00 84 */	lfs f1, 0x84(r29)
/* 80113CF0 00110AF0  C0 03 01 28 */	lfs f0, 0x128(r3)
/* 80113CF4 00110AF4  EC 01 00 32 */	fmuls f0, f1, f0
/* 80113CF8 00110AF8  D0 1D 00 80 */	stfs f0, 0x80(r29)
/* 80113CFC 00110AFC  C0 23 01 2C */	lfs f1, 0x12c(r3)
/* 80113D00 00110B00  C0 1D 01 68 */	lfs f0, 0x168(r29)
/* 80113D04 00110B04  EC 01 00 28 */	fsubs f0, f1, f0
/* 80113D08 00110B08  D0 1D 00 7C */	stfs f0, 0x7c(r29)
/* 80113D0C 00110B0C  C0 3D 00 7C */	lfs f1, 0x7c(r29)
/* 80113D10 00110B10  4B FB 11 3D */	bl isin__Ff
/* 80113D14 00110B14  C0 1D 00 80 */	lfs f0, 0x80(r29)
/* 80113D18 00110B18  EC 00 00 72 */	fmuls f0, f0, f1
/* 80113D1C 00110B1C  D0 1D 00 78 */	stfs f0, 0x78(r29)
/* 80113D20 00110B20  C0 3D 00 7C */	lfs f1, 0x7c(r29)
/* 80113D24 00110B24  4B FB 11 6D */	bl icos__Ff
/* 80113D28 00110B28  C0 1D 00 80 */	lfs f0, 0x80(r29)
/* 80113D2C 00110B2C  EC 00 00 72 */	fmuls f0, f0, f1
/* 80113D30 00110B30  D0 1D 00 74 */	stfs f0, 0x74(r29)
lbl_80113D34:
/* 80113D34 00110B34  38 7D 00 20 */	addi r3, r29, 0x20
/* 80113D38 00110B38  38 9D 00 08 */	addi r4, r29, 8
/* 80113D3C 00110B3C  4B EF 75 29 */	bl __as__5xVec3FRC5xVec3
/* 80113D40 00110B40  C0 3F 00 00 */	lfs f1, 0(r31)
/* 80113D44 00110B44  7F A3 EB 78 */	mr r3, r29
/* 80113D48 00110B48  48 00 18 7D */	bl update_movement__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf
/* 80113D4C 00110B4C  C0 3F 00 00 */	lfs f1, 0(r31)
/* 80113D50 00110B50  7F A3 EB 78 */	mr r3, r29
/* 80113D54 00110B54  48 00 15 31 */	bl update_animation__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf
/* 80113D58 00110B58  C0 3F 00 00 */	lfs f1, 0(r31)
/* 80113D5C 00110B5C  7F A3 EB 78 */	mr r3, r29
/* 80113D60 00110B60  48 00 0E 95 */	bl update_camera__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf
/* 80113D64 00110B64  3C 60 80 3C */	lis r3, globals@ha
/* 80113D68 00110B68  38 63 05 58 */	addi r3, r3, globals@l
/* 80113D6C 00110B6C  38 63 07 44 */	addi r3, r3, 0x744
/* 80113D70 00110B70  7C 64 1B 78 */	mr r4, r3
/* 80113D74 00110B74  4B EF 71 C9 */	bl xQuickCullForBound__FP7xQCDataPC6xBound
/* 80113D78 00110B78  C0 3F 00 00 */	lfs f1, 0(r31)
/* 80113D7C 00110B7C  7F A3 EB 78 */	mr r3, r29
/* 80113D80 00110B80  7F C4 F3 78 */	mr r4, r30
/* 80113D84 00110B84  48 00 04 1D */	bl update_collision__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFR6xScenef
/* 80113D88 00110B88  7F A3 EB 78 */	mr r3, r29
/* 80113D8C 00110B8C  38 80 00 00 */	li r4, 0
/* 80113D90 00110B90  48 00 01 DD */	bl check_damage__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFb
/* 80113D94 00110B94  7F A4 EB 78 */	mr r4, r29
/* 80113D98 00110B98  38 61 00 08 */	addi r3, r1, 8
/* 80113D9C 00110B9C  48 00 01 25 */	bl player_bound__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFv
/* 80113DA0 00110BA0  3C 60 80 3C */	lis r3, globals@ha
/* 80113DA4 00110BA4  38 81 00 08 */	addi r4, r1, 8
/* 80113DA8 00110BA8  38 63 05 58 */	addi r3, r3, globals@l
/* 80113DAC 00110BAC  38 63 07 68 */	addi r3, r3, 0x768
/* 80113DB0 00110BB0  4B EF 74 D1 */	bl __as__7xSphereFRC7xSphere
/* 80113DB4 00110BB4  C0 3F 00 00 */	lfs f1, 0(r31)
/* 80113DB8 00110BB8  7F A3 EB 78 */	mr r3, r29
/* 80113DBC 00110BBC  48 00 00 BD */	bl update_sound__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf
/* 80113DC0 00110BC0  C0 3F 00 00 */	lfs f1, 0(r31)
/* 80113DC4 00110BC4  7F A3 EB 78 */	mr r3, r29
/* 80113DC8 00110BC8  48 00 00 59 */	bl update_blur__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf
/* 80113DCC 00110BCC  C0 3F 00 00 */	lfs f1, 0(r31)
/* 80113DD0 00110BD0  7F C3 F3 78 */	mr r3, r30
/* 80113DD4 00110BD4  4B F4 F4 19 */	bl zEntPickup_CheckAllPickupsAgainstPlayer__FP6xScenef
/* 80113DD8 00110BD8  88 1D 00 AC */	lbz r0, 0xac(r29)
/* 80113DDC 00110BDC  28 00 00 00 */	cmplwi r0, 0
/* 80113DE0 00110BE0  41 82 00 28 */	beq lbl_80113E08
/* 80113DE4 00110BE4  C0 3C 17 08 */	lfs f1, 0x1708(r28)
/* 80113DE8 00110BE8  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80113DEC 00110BEC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80113DF0 00110BF0  4C 40 13 82 */	cror 2, 0, 2
/* 80113DF4 00110BF4  40 82 00 14 */	bne lbl_80113E08
/* 80113DF8 00110BF8  38 60 00 04 */	li r3, 4
/* 80113DFC 00110BFC  4B F3 E3 15 */	bl zCameraEnableTracking__F17camera_owner_enum
/* 80113E00 00110C00  38 60 FF FF */	li r3, -1
/* 80113E04 00110C04  48 00 00 08 */	b lbl_80113E0C
lbl_80113E08:
/* 80113E08 00110C08  38 60 00 01 */	li r3, 1
lbl_80113E0C:
/* 80113E0C 00110C0C  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 80113E10 00110C10  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80113E14 00110C14  7C 08 03 A6 */	mtlr r0
/* 80113E18 00110C18  38 21 00 30 */	addi r1, r1, 0x30
/* 80113E1C 00110C1C  4E 80 00 20 */	blr 

/* update_blur__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf */
update_blur__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf:
/* 80113E20 00110C20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80113E24 00110C24  7C 08 02 A6 */	mflr r0
/* 80113E28 00110C28  90 01 00 14 */	stw r0, 0x14(r1)
/* 80113E2C 00110C2C  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80113E30 00110C30  C0 23 00 A8 */	lfs f1, 0xa8(r3)
/* 80113E34 00110C34  FC 40 02 10 */	fabs f2, f0
/* 80113E38 00110C38  C0 02 9E 88 */	lfs f0, lbl_803CE808-_SDA2_BASE_(r2)
/* 80113E3C 00110C3C  FC 40 10 18 */	frsp f2, f2
/* 80113E40 00110C40  EC 22 08 24 */	fdivs f1, f2, f1
/* 80113E44 00110C44  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80113E48 00110C48  40 81 00 08 */	ble lbl_80113E50
/* 80113E4C 00110C4C  FC 20 00 90 */	fmr f1, f0
lbl_80113E50:
/* 80113E50 00110C50  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 80113E54 00110C54  38 63 37 88 */	addi r3, r3, lbl_80313788@l
/* 80113E58 00110C58  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 80113E5C 00110C5C  EC 00 00 72 */	fmuls f0, f0, f1
/* 80113E60 00110C60  EC 21 00 32 */	fmuls f1, f1, f0
/* 80113E64 00110C64  4B FB B6 E9 */	bl iCameraSetBlurriness__Ff
/* 80113E68 00110C68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80113E6C 00110C6C  7C 08 03 A6 */	mtlr r0
/* 80113E70 00110C70  38 21 00 10 */	addi r1, r1, 0x10
/* 80113E74 00110C74  4E 80 00 20 */	blr 

/* update_sound__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf */
update_sound__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf:
/* 80113E78 00110C78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80113E7C 00110C7C  7C 08 02 A6 */	mflr r0
/* 80113E80 00110C80  90 01 00 14 */	stw r0, 0x14(r1)
/* 80113E84 00110C84  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80113E88 00110C88  C0 23 00 A8 */	lfs f1, 0xa8(r3)
/* 80113E8C 00110C8C  FC 40 02 10 */	fabs f2, f0
/* 80113E90 00110C90  C0 02 9E 88 */	lfs f0, lbl_803CE808-_SDA2_BASE_(r2)
/* 80113E94 00110C94  FC 40 10 18 */	frsp f2, f2
/* 80113E98 00110C98  EC 22 08 24 */	fdivs f1, f2, f1
/* 80113E9C 00110C9C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80113EA0 00110CA0  40 81 00 08 */	ble lbl_80113EA8
/* 80113EA4 00110CA4  FC 20 00 90 */	fmr f1, f0
lbl_80113EA8:
/* 80113EA8 00110CA8  38 60 00 05 */	li r3, 5
/* 80113EAC 00110CAC  4B FF C4 F9 */	bl set_volume__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fif
/* 80113EB0 00110CB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80113EB4 00110CB4  7C 08 03 A6 */	mtlr r0
/* 80113EB8 00110CB8  38 21 00 10 */	addi r1, r1, 0x10
/* 80113EBC 00110CBC  4E 80 00 20 */	blr 

/* player_bound__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFv */
player_bound__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFv:
/* 80113EC0 00110CC0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80113EC4 00110CC4  7C 08 02 A6 */	mflr r0
/* 80113EC8 00110CC8  3C A0 80 3C */	lis r5, globals@ha
/* 80113ECC 00110CCC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80113ED0 00110CD0  38 A5 05 58 */	addi r5, r5, globals@l
/* 80113ED4 00110CD4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80113ED8 00110CD8  7C 7F 1B 78 */	mr r31, r3
/* 80113EDC 00110CDC  38 61 00 08 */	addi r3, r1, 8
/* 80113EE0 00110CE0  C0 05 07 74 */	lfs f0, 0x774(r5)
/* 80113EE4 00110CE4  38 A4 00 08 */	addi r5, r4, 8
/* 80113EE8 00110CE8  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80113EEC 00110CEC  48 00 00 45 */	bl local_to_world__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFRC5xVec3
/* 80113EF0 00110CF0  38 61 00 14 */	addi r3, r1, 0x14
/* 80113EF4 00110CF4  38 81 00 08 */	addi r4, r1, 8
/* 80113EF8 00110CF8  4B EF 73 6D */	bl __as__5xVec3FRC5xVec3
/* 80113EFC 00110CFC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80113F00 00110D00  80 01 00 18 */	lwz r0, 0x18(r1)
/* 80113F04 00110D04  90 7F 00 00 */	stw r3, 0(r31)
/* 80113F08 00110D08  90 1F 00 04 */	stw r0, 4(r31)
/* 80113F0C 00110D0C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80113F10 00110D10  80 01 00 20 */	lwz r0, 0x20(r1)
/* 80113F14 00110D14  90 7F 00 08 */	stw r3, 8(r31)
/* 80113F18 00110D18  90 1F 00 0C */	stw r0, 0xc(r31)
/* 80113F1C 00110D1C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80113F20 00110D20  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80113F24 00110D24  7C 08 03 A6 */	mtlr r0
/* 80113F28 00110D28  38 21 00 30 */	addi r1, r1, 0x30
/* 80113F2C 00110D2C  4E 80 00 20 */	blr 

/* local_to_world__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFRC5xVec3 */
local_to_world__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFRC5xVec3:
/* 80113F30 00110D30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80113F34 00110D34  7C 08 02 A6 */	mflr r0
/* 80113F38 00110D38  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 80113F3C 00110D3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80113F40 00110D40  38 C4 7A 68 */	addi r6, r4, lbl_80297A68@l
/* 80113F44 00110D44  7C A4 2B 78 */	mr r4, r5
/* 80113F48 00110D48  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80113F4C 00110D4C  7C 7F 1B 78 */	mr r31, r3
/* 80113F50 00110D50  38 A6 01 74 */	addi r5, r6, 0x174
/* 80113F54 00110D54  4B F0 14 8D */	bl __pl__5xVec3CFRC5xVec3
/* 80113F58 00110D58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80113F5C 00110D5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80113F60 00110D60  7C 08 03 A6 */	mtlr r0
/* 80113F64 00110D64  38 21 00 10 */	addi r1, r1, 0x10
/* 80113F68 00110D68  4E 80 00 20 */	blr 

/* check_damage__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFb */
check_damage__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFb:
/* 80113F6C 00110D6C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80113F70 00110D70  7C 08 02 A6 */	mflr r0
/* 80113F74 00110D74  90 01 00 24 */	stw r0, 0x24(r1)
/* 80113F78 00110D78  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80113F7C 00110D7C  7C 7F 1B 78 */	mr r31, r3
/* 80113F80 00110D80  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80113F84 00110D84  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80113F88 00110D88  7C 9D 23 78 */	mr r29, r4
/* 80113F8C 00110D8C  88 03 00 AC */	lbz r0, 0xac(r3)
/* 80113F90 00110D90  28 00 00 00 */	cmplwi r0, 0
/* 80113F94 00110D94  40 82 00 C4 */	bne lbl_80114058
/* 80113F98 00110D98  3C 60 80 3C */	lis r3, globals@ha
/* 80113F9C 00110D9C  80 9F 00 BC */	lwz r4, 0xbc(r31)
/* 80113FA0 00110DA0  3B C3 05 58 */	addi r30, r3, globals@l
/* 80113FA4 00110DA4  80 1E 16 B0 */	lwz r0, 0x16b0(r30)
/* 80113FA8 00110DA8  90 1F 00 BC */	stw r0, 0xbc(r31)
/* 80113FAC 00110DAC  80 1E 16 B0 */	lwz r0, 0x16b0(r30)
/* 80113FB0 00110DB0  7C 00 20 40 */	cmplw r0, r4
/* 80113FB4 00110DB4  40 80 00 A4 */	bge lbl_80114058
/* 80113FB8 00110DB8  C0 02 9E B0 */	lfs f0, lbl_803CE830-_SDA2_BASE_(r2)
/* 80113FBC 00110DBC  D0 1E 17 08 */	stfs f0, 0x1708(r30)
/* 80113FC0 00110DC0  D0 1F 00 B4 */	stfs f0, 0xb4(r31)
/* 80113FC4 00110DC4  D0 1F 00 B0 */	stfs f0, 0xb0(r31)
/* 80113FC8 00110DC8  4B F1 CC C1 */	bl xurand__Fv
/* 80113FCC 00110DCC  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 80113FD0 00110DD0  C0 02 9E 8C */	lfs f0, lbl_803CE80C-_SDA2_BASE_(r2)
/* 80113FD4 00110DD4  38 A3 37 88 */	addi r5, r3, lbl_80313788@l
/* 80113FD8 00110DD8  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 80113FDC 00110DDC  C0 62 9F 10 */	lfs f3, lbl_803CE890-_SDA2_BASE_(r2)
/* 80113FE0 00110DE0  3C 60 80 3C */	lis r3, globals@ha
/* 80113FE4 00110DE4  C0 45 00 14 */	lfs f2, 0x14(r5)
/* 80113FE8 00110DE8  EC 81 00 28 */	fsubs f4, f1, f0
/* 80113FEC 00110DEC  C0 1F 00 70 */	lfs f0, 0x70(r31)
/* 80113FF0 00110DF0  38 A4 7A 68 */	addi r5, r4, lbl_80297A68@l
/* 80113FF4 00110DF4  EC 23 00 B2 */	fmuls f1, f3, f2
/* 80113FF8 00110DF8  38 63 05 58 */	addi r3, r3, globals@l
/* 80113FFC 00110DFC  EC 01 01 3A */	fmadds f0, f1, f4, f0
/* 80114000 00110E00  D0 1F 00 70 */	stfs f0, 0x70(r31)
/* 80114004 00110E04  80 05 01 98 */	lwz r0, 0x198(r5)
/* 80114008 00110E08  80 63 07 04 */	lwz r3, 0x704(r3)
/* 8011400C 00110E0C  60 00 00 40 */	ori r0, r0, 0x40
/* 80114010 00110E10  80 85 00 38 */	lwz r4, 0x38(r5)
/* 80114014 00110E14  90 05 01 98 */	stw r0, 0x198(r5)
/* 80114018 00110E18  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8011401C 00110E1C  4B EF 4A 29 */	bl xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition
/* 80114020 00110E20  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 80114024 00110E24  41 82 00 14 */	beq lbl_80114038
/* 80114028 00110E28  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 8011402C 00110E2C  38 60 00 06 */	li r3, 6
/* 80114030 00110E30  4B FF C2 89 */	bl play_sound__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FQ312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_10sound_enumf
/* 80114034 00110E34  48 00 00 10 */	b lbl_80114044
lbl_80114038:
/* 80114038 00110E38  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 8011403C 00110E3C  38 60 00 07 */	li r3, 7
/* 80114040 00110E40  4B FF C2 79 */	bl play_sound__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FQ312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_10sound_enumf
lbl_80114044:
/* 80114044 00110E44  80 1E 16 B0 */	lwz r0, 0x16b0(r30)
/* 80114048 00110E48  28 00 00 00 */	cmplwi r0, 0
/* 8011404C 00110E4C  40 82 00 0C */	bne lbl_80114058
/* 80114050 00110E50  7F E3 FB 78 */	mr r3, r31
/* 80114054 00110E54  48 00 00 21 */	bl short_drop_sudden_stop__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv
lbl_80114058:
/* 80114058 00110E58  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8011405C 00110E5C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80114060 00110E60  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80114064 00110E64  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80114068 00110E68  7C 08 03 A6 */	mtlr r0
/* 8011406C 00110E6C  38 21 00 20 */	addi r1, r1, 0x20
/* 80114070 00110E70  4E 80 00 20 */	blr 

/* short_drop_sudden_stop__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv */
short_drop_sudden_stop__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv:
/* 80114074 00110E74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80114078 00110E78  7C 08 02 A6 */	mflr r0
/* 8011407C 00110E7C  38 80 00 00 */	li r4, 0
/* 80114080 00110E80  38 A0 00 33 */	li r5, 0x33
/* 80114084 00110E84  90 01 00 14 */	stw r0, 0x14(r1)
/* 80114088 00110E88  38 00 00 01 */	li r0, 1
/* 8011408C 00110E8C  38 C0 00 00 */	li r6, 0
/* 80114090 00110E90  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80114094 00110E94  93 C1 00 08 */	stw r30, 8(r1)
/* 80114098 00110E98  7C 7E 1B 78 */	mr r30, r3
/* 8011409C 00110E9C  98 03 00 AC */	stb r0, 0xac(r3)
/* 801140A0 00110EA0  3C 60 80 3C */	lis r3, globals@ha
/* 801140A4 00110EA4  3B E3 05 58 */	addi r31, r3, globals@l
/* 801140A8 00110EA8  C0 02 9E D8 */	lfs f0, lbl_803CE858-_SDA2_BASE_(r2)
/* 801140AC 00110EAC  38 60 00 00 */	li r3, 0
/* 801140B0 00110EB0  D0 1F 17 08 */	stfs f0, 0x1708(r31)
/* 801140B4 00110EB4  4B F4 12 CD */	bl zEntEventAll__FP5xBaseUiUiPf
/* 801140B8 00110EB8  C0 1F 17 08 */	lfs f0, 0x1708(r31)
/* 801140BC 00110EBC  7F C3 F3 78 */	mr r3, r30
/* 801140C0 00110EC0  D0 1E 00 B0 */	stfs f0, 0xb0(r30)
/* 801140C4 00110EC4  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 801140C8 00110EC8  D0 1E 00 B4 */	stfs f0, 0xb4(r30)
/* 801140CC 00110ECC  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 801140D0 00110ED0  D0 1E 00 68 */	stfs f0, 0x68(r30)
/* 801140D4 00110ED4  C0 22 9E EC */	lfs f1, lbl_803CE86C-_SDA2_BASE_(r2)
/* 801140D8 00110ED8  48 00 00 31 */	bl multiply_dampening__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf
/* 801140DC 00110EDC  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 801140E0 00110EE0  38 63 7A 68 */	addi r3, r3, lbl_80297A68@l
/* 801140E4 00110EE4  80 03 01 98 */	lwz r0, 0x198(r3)
/* 801140E8 00110EE8  60 00 00 80 */	ori r0, r0, 0x80
/* 801140EC 00110EEC  90 03 01 98 */	stw r0, 0x198(r3)
/* 801140F0 00110EF0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801140F4 00110EF4  83 C1 00 08 */	lwz r30, 8(r1)
/* 801140F8 00110EF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801140FC 00110EFC  7C 08 03 A6 */	mtlr r0
/* 80114100 00110F00  38 21 00 10 */	addi r1, r1, 0x10
/* 80114104 00110F04  4E 80 00 20 */	blr 

/* multiply_dampening__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf */
multiply_dampening__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf:
/* 80114108 00110F08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011410C 00110F0C  7C 08 02 A6 */	mflr r0
/* 80114110 00110F10  90 01 00 14 */	stw r0, 0x14(r1)
/* 80114114 00110F14  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80114118 00110F18  7C 7F 1B 78 */	mr r31, r3
/* 8011411C 00110F1C  C0 03 01 5C */	lfs f0, 0x15c(r3)
/* 80114120 00110F20  EC 00 00 72 */	fmuls f0, f0, f1
/* 80114124 00110F24  D0 03 01 5C */	stfs f0, 0x15c(r3)
/* 80114128 00110F28  C0 23 01 5C */	lfs f1, 0x15c(r3)
/* 8011412C 00110F2C  C0 02 9E 88 */	lfs f0, lbl_803CE808-_SDA2_BASE_(r2)
/* 80114130 00110F30  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80114134 00110F34  40 81 00 08 */	ble lbl_8011413C
/* 80114138 00110F38  D0 1F 01 5C */	stfs f0, 0x15c(r31)
lbl_8011413C:
/* 8011413C 00110F3C  C0 3F 01 A0 */	lfs f1, 0x1a0(r31)
/* 80114140 00110F40  4B EF 66 BD */	bl xsqrt__Ff
/* 80114144 00110F44  C0 1F 01 5C */	lfs f0, 0x15c(r31)
/* 80114148 00110F48  FC 00 00 50 */	fneg f0, f0
/* 8011414C 00110F4C  EC 00 00 72 */	fmuls f0, f0, f1
/* 80114150 00110F50  D0 1F 01 A4 */	stfs f0, 0x1a4(r31)
/* 80114154 00110F54  C0 1F 01 A4 */	lfs f0, 0x1a4(r31)
/* 80114158 00110F58  C0 3F 01 A0 */	lfs f1, 0x1a0(r31)
/* 8011415C 00110F5C  EC 00 00 32 */	fmuls f0, f0, f0
/* 80114160 00110F60  EC 21 00 28 */	fsubs f1, f1, f0
/* 80114164 00110F64  4B EF 66 99 */	bl xsqrt__Ff
/* 80114168 00110F68  D0 3F 01 A8 */	stfs f1, 0x1a8(r31)
/* 8011416C 00110F6C  7F E3 FB 78 */	mr r3, r31
/* 80114170 00110F70  C0 3F 01 58 */	lfs f1, 0x158(r31)
/* 80114174 00110F74  C0 42 9E A0 */	lfs f2, lbl_803CE820-_SDA2_BASE_(r2)
/* 80114178 00110F78  C0 7F 01 A0 */	lfs f3, 0x1a0(r31)
/* 8011417C 00110F7C  C0 9F 01 4C */	lfs f4, 0x14c(r31)
/* 80114180 00110F80  C0 BF 01 98 */	lfs f5, 0x198(r31)
/* 80114184 00110F84  4B FF CC D1 */	bl spring_energy__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFfffff
/* 80114188 00110F88  D0 3F 01 9C */	stfs f1, 0x19c(r31)
/* 8011418C 00110F8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80114190 00110F90  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80114194 00110F94  7C 08 03 A6 */	mtlr r0
/* 80114198 00110F98  38 21 00 10 */	addi r1, r1, 0x10
/* 8011419C 00110F9C  4E 80 00 20 */	blr 

/* update_collision__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFR6xScenef */
update_collision__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFR6xScenef:
/* 801141A0 00110FA0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801141A4 00110FA4  7C 08 02 A6 */	mflr r0
/* 801141A8 00110FA8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801141AC 00110FAC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801141B0 00110FB0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801141B4 00110FB4  7C 9E 23 78 */	mr r30, r4
/* 801141B8 00110FB8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801141BC 00110FBC  7C 7D 1B 78 */	mr r29, r3
/* 801141C0 00110FC0  48 00 08 3D */	bl collide_start__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFR6xScene
/* 801141C4 00110FC4  38 60 00 01 */	li r3, 1
/* 801141C8 00110FC8  3B E0 00 00 */	li r31, 0
/* 801141CC 00110FCC  48 00 00 14 */	b lbl_801141E0
lbl_801141D0:
/* 801141D0 00110FD0  7F A3 EB 78 */	mr r3, r29
/* 801141D4 00110FD4  7F C4 F3 78 */	mr r4, r30
/* 801141D8 00110FD8  48 00 00 35 */	bl repath__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRC6xScene
/* 801141DC 00110FDC  3B FF 00 01 */	addi r31, r31, 1
lbl_801141E0:
/* 801141E0 00110FE0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801141E4 00110FE4  41 82 00 0C */	beq lbl_801141F0
/* 801141E8 00110FE8  2C 1F 00 08 */	cmpwi r31, 8
/* 801141EC 00110FEC  41 80 FF E4 */	blt lbl_801141D0
lbl_801141F0:
/* 801141F0 00110FF0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801141F4 00110FF4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801141F8 00110FF8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801141FC 00110FFC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80114200 00111000  7C 08 03 A6 */	mtlr r0
/* 80114204 00111004  38 21 00 20 */	addi r1, r1, 0x20
/* 80114208 00111008  4E 80 00 20 */	blr 

/* repath__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC6xScene */
repath__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRC6xScene:
/* 8011420C 0011100C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80114210 00111010  7C 08 02 A6 */	mflr r0
/* 80114214 00111014  90 01 00 24 */	stw r0, 0x24(r1)
/* 80114218 00111018  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8011421C 0011101C  3B E0 00 01 */	li r31, 1
/* 80114220 00111020  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80114224 00111024  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80114228 00111028  7C 9D 23 78 */	mr r29, r4
/* 8011422C 0011102C  93 81 00 10 */	stw r28, 0x10(r1)
/* 80114230 00111030  7C 7C 1B 78 */	mr r28, r3
/* 80114234 00111034  48 00 04 45 */	bl ents_repath__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRC6xScene
/* 80114238 00111038  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8011423C 0011103C  40 82 00 08 */	bne lbl_80114244
/* 80114240 00111040  3B E0 00 00 */	li r31, 0
lbl_80114244:
/* 80114244 00111044  7F 83 E3 78 */	mr r3, r28
/* 80114248 00111048  7F A4 EB 78 */	mr r4, r29
/* 8011424C 0011104C  3B C0 00 00 */	li r30, 0
/* 80114250 00111050  48 00 02 15 */	bl env_repath__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRC6xScene
/* 80114254 00111054  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80114258 00111058  40 82 00 0C */	bne lbl_80114264
/* 8011425C 0011105C  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80114260 00111060  41 82 00 08 */	beq lbl_80114268
lbl_80114264:
/* 80114264 00111064  3B C0 00 01 */	li r30, 1
lbl_80114268:
/* 80114268 00111068  7F 83 E3 78 */	mr r3, r28
/* 8011426C 0011106C  7F A4 EB 78 */	mr r4, r29
/* 80114270 00111070  3B E0 00 00 */	li r31, 0
/* 80114274 00111074  48 00 00 3D */	bl boundary_repath__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRC6xScene
/* 80114278 00111078  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8011427C 0011107C  40 82 00 0C */	bne lbl_80114288
/* 80114280 00111080  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 80114284 00111084  41 82 00 08 */	beq lbl_8011428C
lbl_80114288:
/* 80114288 00111088  3B E0 00 01 */	li r31, 1
lbl_8011428C:
/* 8011428C 0011108C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80114290 00111090  7F E3 FB 78 */	mr r3, r31
/* 80114294 00111094  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80114298 00111098  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8011429C 0011109C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801142A0 001110A0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801142A4 001110A4  7C 08 03 A6 */	mtlr r0
/* 801142A8 001110A8  38 21 00 20 */	addi r1, r1, 0x20
/* 801142AC 001110AC  4E 80 00 20 */	blr 

/* boundary_repath__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC6xScene */
boundary_repath__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRC6xScene:
/* 801142B0 001110B0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801142B4 001110B4  7C 08 02 A6 */	mflr r0
/* 801142B8 001110B8  90 01 00 44 */	stw r0, 0x44(r1)
/* 801142BC 001110BC  38 81 00 20 */	addi r4, r1, 0x20
/* 801142C0 001110C0  38 A1 00 14 */	addi r5, r1, 0x14
/* 801142C4 001110C4  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 801142C8 001110C8  7C 7F 1B 78 */	mr r31, r3
/* 801142CC 001110CC  38 DF 00 08 */	addi r6, r31, 8
/* 801142D0 001110D0  48 00 00 5D */	bl hit_boundary__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFR5xVec3R5xVec3RC5xVec3
/* 801142D4 001110D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801142D8 001110D8  40 82 00 0C */	bne lbl_801142E4
/* 801142DC 001110DC  38 60 00 00 */	li r3, 0
/* 801142E0 001110E0  48 00 00 38 */	b lbl_80114318
lbl_801142E4:
/* 801142E4 001110E4  38 7F 00 08 */	addi r3, r31, 8
/* 801142E8 001110E8  38 81 00 14 */	addi r4, r1, 0x14
/* 801142EC 001110EC  4B F0 11 59 */	bl __apl__5xVec3FRC5xVec3
/* 801142F0 001110F0  38 61 00 20 */	addi r3, r1, 0x20
/* 801142F4 001110F4  38 9F 00 14 */	addi r4, r31, 0x14
/* 801142F8 001110F8  4B F0 12 15 */	bl dot__5xVec3CFRC5xVec3
/* 801142FC 001110FC  38 61 00 08 */	addi r3, r1, 8
/* 80114300 00111100  38 81 00 20 */	addi r4, r1, 0x20
/* 80114304 00111104  4B EF 6E 1D */	bl __ml__5xVec3CFf
/* 80114308 00111108  38 7F 00 14 */	addi r3, r31, 0x14
/* 8011430C 0011110C  38 81 00 08 */	addi r4, r1, 8
/* 80114310 00111110  4B EF 6F 21 */	bl __ami__5xVec3FRC5xVec3
/* 80114314 00111114  38 60 00 01 */	li r3, 1
lbl_80114318:
/* 80114318 00111118  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8011431C 0011111C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80114320 00111120  7C 08 03 A6 */	mtlr r0
/* 80114324 00111124  38 21 00 40 */	addi r1, r1, 0x40
/* 80114328 00111128  4E 80 00 20 */	blr 

/* hit_boundary__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFR5xVec3R5xVec3RC5xVec3 */
hit_boundary__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFR5xVec3R5xVec3RC5xVec3:
/* 8011432C 0011112C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80114330 00111130  7C 08 02 A6 */	mflr r0
/* 80114334 00111134  C0 63 01 60 */	lfs f3, 0x160(r3)
/* 80114338 00111138  90 01 00 24 */	stw r0, 0x24(r1)
/* 8011433C 0011113C  FC 40 18 50 */	fneg f2, f3
/* 80114340 00111140  C0 26 00 00 */	lfs f1, 0(r6)
/* 80114344 00111144  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80114348 00111148  7C 7B 1B 78 */	mr r27, r3
/* 8011434C 0011114C  7C DE 33 78 */	mr r30, r6
/* 80114350 00111150  7C 9C 23 78 */	mr r28, r4
/* 80114354 00111154  7C BD 2B 78 */	mr r29, r5
/* 80114358 00111158  48 00 00 B5 */	bl clip_nearest__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFRfRffff
/* 8011435C 0011115C  C0 3E 00 04 */	lfs f1, 4(r30)
/* 80114360 00111160  7C 7F 1B 78 */	mr r31, r3
/* 80114364 00111164  C0 5B 01 58 */	lfs f2, 0x158(r27)
/* 80114368 00111168  7F 63 DB 78 */	mr r3, r27
/* 8011436C 0011116C  C0 7B 01 54 */	lfs f3, 0x154(r27)
/* 80114370 00111170  38 9C 00 04 */	addi r4, r28, 4
/* 80114374 00111174  38 BD 00 04 */	addi r5, r29, 4
/* 80114378 00111178  48 00 00 95 */	bl clip_nearest__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFRfRffff
/* 8011437C 0011117C  C0 7B 01 60 */	lfs f3, 0x160(r27)
/* 80114380 00111180  7F FF 1A 14 */	add r31, r31, r3
/* 80114384 00111184  C0 3E 00 08 */	lfs f1, 8(r30)
/* 80114388 00111188  7F 63 DB 78 */	mr r3, r27
/* 8011438C 0011118C  FC 40 18 50 */	fneg f2, f3
/* 80114390 00111190  38 9C 00 08 */	addi r4, r28, 8
/* 80114394 00111194  38 BD 00 08 */	addi r5, r29, 8
/* 80114398 00111198  48 00 00 75 */	bl clip_nearest__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFRfRffff
/* 8011439C 0011119C  7F FF 1A 14 */	add r31, r31, r3
/* 801143A0 001111A0  2C 1F 00 02 */	cmpwi r31, 2
/* 801143A4 001111A4  41 82 00 28 */	beq lbl_801143CC
/* 801143A8 001111A8  40 80 00 10 */	bge lbl_801143B8
/* 801143AC 001111AC  2C 1F 00 01 */	cmpwi r31, 1
/* 801143B0 001111B0  40 80 00 14 */	bge lbl_801143C4
/* 801143B4 001111B4  48 00 00 40 */	b lbl_801143F4
lbl_801143B8:
/* 801143B8 001111B8  2C 1F 00 04 */	cmpwi r31, 4
/* 801143BC 001111BC  40 80 00 38 */	bge lbl_801143F4
/* 801143C0 001111C0  48 00 00 20 */	b lbl_801143E0
lbl_801143C4:
/* 801143C4 001111C4  38 60 00 01 */	li r3, 1
/* 801143C8 001111C8  48 00 00 30 */	b lbl_801143F8
lbl_801143CC:
/* 801143CC 001111CC  C0 22 9F 14 */	lfs f1, lbl_803CE894-_SDA2_BASE_(r2)
/* 801143D0 001111D0  7F 83 E3 78 */	mr r3, r28
/* 801143D4 001111D4  4B EF 6D AD */	bl __amu__5xVec3Ff
/* 801143D8 001111D8  38 60 00 01 */	li r3, 1
/* 801143DC 001111DC  48 00 00 1C */	b lbl_801143F8
lbl_801143E0:
/* 801143E0 001111E0  C0 22 9F 18 */	lfs f1, lbl_803CE898-_SDA2_BASE_(r2)
/* 801143E4 001111E4  7F 83 E3 78 */	mr r3, r28
/* 801143E8 001111E8  4B EF 6D 99 */	bl __amu__5xVec3Ff
/* 801143EC 001111EC  38 60 00 01 */	li r3, 1
/* 801143F0 001111F0  48 00 00 08 */	b lbl_801143F8
lbl_801143F4:
/* 801143F4 001111F4  38 60 00 00 */	li r3, 0
lbl_801143F8:
/* 801143F8 001111F8  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 801143FC 001111FC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80114400 00111200  7C 08 03 A6 */	mtlr r0
/* 80114404 00111204  38 21 00 20 */	addi r1, r1, 0x20
/* 80114408 00111208  4E 80 00 20 */	blr 

/* clip_nearest__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFRfRffff */
clip_nearest__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFRfRffff:
/* 8011440C 0011120C  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 80114410 00111210  38 60 00 00 */	li r3, 0
/* 80114414 00111214  40 81 00 1C */	ble lbl_80114430
/* 80114418 00111218  C0 42 9E AC */	lfs f2, lbl_803CE82C-_SDA2_BASE_(r2)
/* 8011441C 0011121C  EC 03 08 28 */	fsubs f0, f3, f1
/* 80114420 00111220  38 60 00 01 */	li r3, 1
/* 80114424 00111224  D0 44 00 00 */	stfs f2, 0(r4)
/* 80114428 00111228  D0 05 00 00 */	stfs f0, 0(r5)
/* 8011442C 0011122C  4E 80 00 20 */	blr 
lbl_80114430:
/* 80114430 00111230  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80114434 00111234  40 80 00 1C */	bge lbl_80114450
/* 80114438 00111238  C0 62 9E 88 */	lfs f3, lbl_803CE808-_SDA2_BASE_(r2)
/* 8011443C 0011123C  EC 02 08 28 */	fsubs f0, f2, f1
/* 80114440 00111240  38 60 00 01 */	li r3, 1
/* 80114444 00111244  D0 64 00 00 */	stfs f3, 0(r4)
/* 80114448 00111248  D0 05 00 00 */	stfs f0, 0(r5)
/* 8011444C 0011124C  4E 80 00 20 */	blr 
lbl_80114450:
/* 80114450 00111250  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80114454 00111254  D0 04 00 00 */	stfs f0, 0(r4)
/* 80114458 00111258  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 8011445C 0011125C  D0 05 00 00 */	stfs f0, 0(r5)
/* 80114460 00111260  4E 80 00 20 */	blr 

/* env_repath__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC6xScene */
env_repath__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRC6xScene:
/* 80114464 00111264  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 80114468 00111268  7C 08 02 A6 */	mflr r0
/* 8011446C 0011126C  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80114470 00111270  DB E1 00 98 */	stfd f31, 0x98(r1)
/* 80114474 00111274  93 E1 00 94 */	stw r31, 0x94(r1)
/* 80114478 00111278  7C 9F 23 78 */	mr r31, r4
/* 8011447C 0011127C  93 C1 00 90 */	stw r30, 0x90(r1)
/* 80114480 00111280  7C 7E 1B 78 */	mr r30, r3
/* 80114484 00111284  88 03 09 C0 */	lbz r0, 0x9c0(r3)
/* 80114488 00111288  28 00 00 00 */	cmplwi r0, 0
/* 8011448C 0011128C  40 82 00 0C */	bne lbl_80114498
/* 80114490 00111290  38 60 00 00 */	li r3, 0
/* 80114494 00111294  48 00 00 BC */	b lbl_80114550
lbl_80114498:
/* 80114498 00111298  38 61 00 34 */	addi r3, r1, 0x34
/* 8011449C 0011129C  38 80 00 00 */	li r4, 0
/* 801144A0 001112A0  38 A0 00 50 */	li r5, 0x50
/* 801144A4 001112A4  4B EE EF B5 */	bl memset
/* 801144A8 001112A8  38 00 0A 00 */	li r0, 0xa00
/* 801144AC 001112AC  7F C4 F3 78 */	mr r4, r30
/* 801144B0 001112B0  90 01 00 34 */	stw r0, 0x34(r1)
/* 801144B4 001112B4  38 61 00 14 */	addi r3, r1, 0x14
/* 801144B8 001112B8  4B FF FA 09 */	bl player_bound__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFv
/* 801144BC 001112BC  80 81 00 14 */	lwz r4, 0x14(r1)
/* 801144C0 001112C0  38 61 00 24 */	addi r3, r1, 0x24
/* 801144C4 001112C4  80 E1 00 18 */	lwz r7, 0x18(r1)
/* 801144C8 001112C8  38 A1 00 34 */	addi r5, r1, 0x34
/* 801144CC 001112CC  80 C1 00 1C */	lwz r6, 0x1c(r1)
/* 801144D0 001112D0  80 01 00 20 */	lwz r0, 0x20(r1)
/* 801144D4 001112D4  90 81 00 24 */	stw r4, 0x24(r1)
/* 801144D8 001112D8  80 9F 00 44 */	lwz r4, 0x44(r31)
/* 801144DC 001112DC  90 E1 00 28 */	stw r7, 0x28(r1)
/* 801144E0 001112E0  90 C1 00 2C */	stw r6, 0x2c(r1)
/* 801144E4 001112E4  90 01 00 30 */	stw r0, 0x30(r1)
/* 801144E8 001112E8  4B FA D7 81 */	bl iSphereHitsEnv__FPC7xSpherePC4xEnvP7xCollis
/* 801144EC 001112EC  28 03 00 00 */	cmplwi r3, 0
/* 801144F0 001112F0  40 82 00 0C */	bne lbl_801144FC
/* 801144F4 001112F4  38 60 00 00 */	li r3, 0
/* 801144F8 001112F8  48 00 00 58 */	b lbl_80114550
lbl_801144FC:
/* 801144FC 001112FC  38 7E 00 08 */	addi r3, r30, 8
/* 80114500 00111300  38 81 00 60 */	addi r4, r1, 0x60
/* 80114504 00111304  4B F0 0F 41 */	bl __apl__5xVec3FRC5xVec3
/* 80114508 00111308  3B E1 00 48 */	addi r31, r1, 0x48
/* 8011450C 0011130C  38 9E 00 14 */	addi r4, r30, 0x14
/* 80114510 00111310  7F E3 FB 78 */	mr r3, r31
/* 80114514 00111314  4B F0 0F F9 */	bl dot__5xVec3CFRC5xVec3
/* 80114518 00111318  FF E0 08 50 */	fneg f31, f1
/* 8011451C 0011131C  7F E4 FB 78 */	mr r4, r31
/* 80114520 00111320  38 61 00 08 */	addi r3, r1, 8
/* 80114524 00111324  FC 20 F8 90 */	fmr f1, f31
/* 80114528 00111328  4B EF 6B F9 */	bl __ml__5xVec3CFf
/* 8011452C 0011132C  38 7E 00 14 */	addi r3, r30, 0x14
/* 80114530 00111330  38 81 00 08 */	addi r4, r1, 8
/* 80114534 00111334  4B F0 0F 11 */	bl __apl__5xVec3FRC5xVec3
/* 80114538 00111338  FC 20 F8 90 */	fmr f1, f31
/* 8011453C 0011133C  7F C3 F3 78 */	mr r3, r30
/* 80114540 00111340  38 9E 09 BC */	addi r4, r30, 0x9bc
/* 80114544 00111344  38 A1 00 34 */	addi r5, r1, 0x34
/* 80114548 00111348  48 00 00 25 */	bl trigger_collision__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRQ412bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type8env_infofRC7xCollis
/* 8011454C 0011134C  38 60 00 01 */	li r3, 1
lbl_80114550:
/* 80114550 00111350  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80114554 00111354  CB E1 00 98 */	lfd f31, 0x98(r1)
/* 80114558 00111358  83 E1 00 94 */	lwz r31, 0x94(r1)
/* 8011455C 0011135C  83 C1 00 90 */	lwz r30, 0x90(r1)
/* 80114560 00111360  7C 08 03 A6 */	mtlr r0
/* 80114564 00111364  38 21 00 A0 */	addi r1, r1, 0xa0
/* 80114568 00111368  4E 80 00 20 */	blr 

/* trigger_collision__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRQ412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type8env_infofRC7xCollis */
trigger_collision__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRQ412bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type8env_infofRC7xCollis:
/* 8011456C 0011136C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80114570 00111370  7C 08 02 A6 */	mflr r0
/* 80114574 00111374  90 01 00 24 */	stw r0, 0x24(r1)
/* 80114578 00111378  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8011457C 0011137C  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 80114580 00111380  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80114584 00111384  80 C4 00 08 */	lwz r6, 8(r4)
/* 80114588 00111388  FF E0 08 90 */	fmr f31, f1
/* 8011458C 0011138C  7C 7F 1B 78 */	mr r31, r3
/* 80114590 00111390  38 06 00 01 */	addi r0, r6, 1
/* 80114594 00111394  90 04 00 08 */	stw r0, 8(r4)
/* 80114598 00111398  88 03 00 AC */	lbz r0, 0xac(r3)
/* 8011459C 0011139C  28 00 00 00 */	cmplwi r0, 0
/* 801145A0 001113A0  40 82 00 54 */	bne lbl_801145F4
/* 801145A4 001113A4  7C A3 2B 78 */	mr r3, r5
/* 801145A8 001113A8  4B FA 14 3D */	bl zSurfaceGetSurface__FPC7xCollis
/* 801145AC 001113AC  28 03 00 00 */	cmplwi r3, 0
/* 801145B0 001113B0  41 82 00 28 */	beq lbl_801145D8
/* 801145B4 001113B4  88 03 00 20 */	lbz r0, 0x20(r3)
/* 801145B8 001113B8  28 00 00 00 */	cmplwi r0, 0
/* 801145BC 001113BC  40 82 00 1C */	bne lbl_801145D8
/* 801145C0 001113C0  4B FA 15 BD */	bl zSurfaceGetDamageType__FPC8xSurface
/* 801145C4 001113C4  2C 03 00 00 */	cmpwi r3, 0
/* 801145C8 001113C8  41 82 00 10 */	beq lbl_801145D8
/* 801145CC 001113CC  7F E3 FB 78 */	mr r3, r31
/* 801145D0 001113D0  38 80 00 01 */	li r4, 1
/* 801145D4 001113D4  48 00 00 3D */	bl ouchie__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFb
lbl_801145D8:
/* 801145D8 001113D8  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 801145DC 001113DC  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 801145E0 001113E0  4C 41 13 82 */	cror 2, 1, 2
/* 801145E4 001113E4  40 82 00 10 */	bne lbl_801145F4
/* 801145E8 001113E8  7F E3 FB 78 */	mr r3, r31
/* 801145EC 001113EC  38 80 00 01 */	li r4, 1
/* 801145F0 001113F0  48 00 00 21 */	bl ouchie__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFb
lbl_801145F4:
/* 801145F4 001113F4  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 801145F8 001113F8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801145FC 001113FC  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80114600 00111400  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80114604 00111404  7C 08 03 A6 */	mtlr r0
/* 80114608 00111408  38 21 00 20 */	addi r1, r1, 0x20
/* 8011460C 0011140C  4E 80 00 20 */	blr 

/* ouchie__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFb */
ouchie__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFb:
/* 80114610 00111410  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80114614 00111414  7C 08 02 A6 */	mflr r0
/* 80114618 00111418  3C A0 80 3C */	lis r5, globals@ha
/* 8011461C 0011141C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80114620 00111420  38 C5 05 58 */	addi r6, r5, globals@l
/* 80114624 00111424  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80114628 00111428  C0 26 17 08 */	lfs f1, 0x1708(r6)
/* 8011462C 0011142C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80114630 00111430  41 81 00 38 */	bgt lbl_80114668
/* 80114634 00111434  88 03 00 AC */	lbz r0, 0xac(r3)
/* 80114638 00111438  28 00 00 00 */	cmplwi r0, 0
/* 8011463C 0011143C  40 82 00 2C */	bne lbl_80114668
/* 80114640 00111440  80 06 08 E4 */	lwz r0, 0x8e4(r6)
/* 80114644 00111444  28 00 00 00 */	cmplwi r0, 0
/* 80114648 00111448  40 82 00 08 */	bne lbl_80114650
/* 8011464C 0011144C  48 00 00 1C */	b lbl_80114668
lbl_80114650:
/* 80114650 00111450  80 A6 16 B0 */	lwz r5, 0x16b0(r6)
/* 80114654 00111454  28 05 00 00 */	cmplwi r5, 0
/* 80114658 00111458  41 82 00 0C */	beq lbl_80114664
/* 8011465C 0011145C  38 05 FF FF */	addi r0, r5, -1
/* 80114660 00111460  90 06 16 B0 */	stw r0, 0x16b0(r6)
lbl_80114664:
/* 80114664 00111464  4B FF F9 09 */	bl check_damage__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFb
lbl_80114668:
/* 80114668 00111468  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011466C 0011146C  7C 08 03 A6 */	mtlr r0
/* 80114670 00111470  38 21 00 10 */	addi r1, r1, 0x10
/* 80114674 00111474  4E 80 00 20 */	blr 

/* ents_repath__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC6xScene */
ents_repath__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRC6xScene:
/* 80114678 00111478  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 8011467C 0011147C  7C 08 02 A6 */	mflr r0
/* 80114680 00111480  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 80114684 00111484  DB E1 00 B0 */	stfd f31, 0xb0(r1)
/* 80114688 00111488  F3 E1 00 B8 */	psq_st f31, 184(r1), 0, qr0
/* 8011468C 0011148C  BF 41 00 98 */	stmw r26, 0x98(r1)
/* 80114690 00111490  7C 7A 1B 78 */	mr r26, r3
/* 80114694 00111494  80 03 09 B8 */	lwz r0, 0x9b8(r3)
/* 80114698 00111498  2C 00 00 00 */	cmpwi r0, 0
/* 8011469C 0011149C  41 81 00 0C */	bgt lbl_801146A8
/* 801146A0 001114A0  38 60 00 00 */	li r3, 0
/* 801146A4 001114A4  48 00 00 FC */	b lbl_801147A0
lbl_801146A8:
/* 801146A8 001114A8  38 60 0A 00 */	li r3, 0xa00
/* 801146AC 001114AC  3B 9A 01 B8 */	addi r28, r26, 0x1b8
/* 801146B0 001114B0  54 00 18 38 */	slwi r0, r0, 3
/* 801146B4 001114B4  90 61 00 40 */	stw r3, 0x40(r1)
/* 801146B8 001114B8  7F 7C 02 14 */	add r27, r28, r0
/* 801146BC 001114BC  3B E1 00 6C */	addi r31, r1, 0x6c
/* 801146C0 001114C0  3B C1 00 54 */	addi r30, r1, 0x54
/* 801146C4 001114C4  3B A0 00 00 */	li r29, 0
/* 801146C8 001114C8  48 00 00 CC */	b lbl_80114794
lbl_801146CC:
/* 801146CC 001114CC  7F 44 D3 78 */	mr r4, r26
/* 801146D0 001114D0  38 61 00 20 */	addi r3, r1, 0x20
/* 801146D4 001114D4  4B FF F7 ED */	bl player_bound__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFv
/* 801146D8 001114D8  81 01 00 20 */	lwz r8, 0x20(r1)
/* 801146DC 001114DC  7F 43 D3 78 */	mr r3, r26
/* 801146E0 001114E0  80 E1 00 24 */	lwz r7, 0x24(r1)
/* 801146E4 001114E4  38 81 00 40 */	addi r4, r1, 0x40
/* 801146E8 001114E8  80 C1 00 28 */	lwz r6, 0x28(r1)
/* 801146EC 001114EC  38 A1 00 30 */	addi r5, r1, 0x30
/* 801146F0 001114F0  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 801146F4 001114F4  91 01 00 30 */	stw r8, 0x30(r1)
/* 801146F8 001114F8  90 E1 00 34 */	stw r7, 0x34(r1)
/* 801146FC 001114FC  90 C1 00 38 */	stw r6, 0x38(r1)
/* 80114700 00111500  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80114704 00111504  80 DC 00 00 */	lwz r6, 0(r28)
/* 80114708 00111508  48 00 02 3D */	bl collide__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFR7xCollisRC7xSphereRC4xEnt
/* 8011470C 0011150C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80114710 00111510  41 82 00 80 */	beq lbl_80114790
/* 80114714 00111514  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 80114718 00111518  7F 43 D3 78 */	mr r3, r26
/* 8011471C 0011151C  C0 3A 00 18 */	lfs f1, 0x18(r26)
/* 80114720 00111520  7F 84 E3 78 */	mr r4, r28
/* 80114724 00111524  FC 00 02 10 */	fabs f0, f0
/* 80114728 00111528  38 A1 00 40 */	addi r5, r1, 0x40
/* 8011472C 0011152C  FC 20 08 50 */	fneg f1, f1
/* 80114730 00111530  FC 00 00 18 */	frsp f0, f0
/* 80114734 00111534  EC 21 00 32 */	fmuls f1, f1, f0
/* 80114738 00111538  48 00 00 85 */	bl trigger_collision__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRQ412bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type8ent_infofRC7xCollis
/* 8011473C 0011153C  FF E0 08 90 */	fmr f31, f1
/* 80114740 00111540  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80114744 00111544  FC 00 F8 00 */	fcmpu cr0, f0, f31
/* 80114748 00111548  41 82 00 48 */	beq lbl_80114790
/* 8011474C 0011154C  7F E4 FB 78 */	mr r4, r31
/* 80114750 00111550  38 61 00 14 */	addi r3, r1, 0x14
/* 80114754 00111554  3B A0 00 01 */	li r29, 1
/* 80114758 00111558  4B EF 69 C9 */	bl __ml__5xVec3CFf
/* 8011475C 0011155C  38 7A 00 08 */	addi r3, r26, 8
/* 80114760 00111560  38 81 00 14 */	addi r4, r1, 0x14
/* 80114764 00111564  4B F0 0C E1 */	bl __apl__5xVec3FRC5xVec3
/* 80114768 00111568  7F C3 F3 78 */	mr r3, r30
/* 8011476C 0011156C  38 9A 00 14 */	addi r4, r26, 0x14
/* 80114770 00111570  4B F0 0D 9D */	bl dot__5xVec3CFRC5xVec3
/* 80114774 00111574  EC 3F 00 72 */	fmuls f1, f31, f1
/* 80114778 00111578  7F C4 F3 78 */	mr r4, r30
/* 8011477C 0011157C  38 61 00 08 */	addi r3, r1, 8
/* 80114780 00111580  4B EF 69 A1 */	bl __ml__5xVec3CFf
/* 80114784 00111584  38 7A 00 14 */	addi r3, r26, 0x14
/* 80114788 00111588  38 81 00 08 */	addi r4, r1, 8
/* 8011478C 0011158C  4B EF 6A A5 */	bl __ami__5xVec3FRC5xVec3
lbl_80114790:
/* 80114790 00111590  3B 9C 00 08 */	addi r28, r28, 8
lbl_80114794:
/* 80114794 00111594  7C 1C D8 40 */	cmplw r28, r27
/* 80114798 00111598  40 82 FF 34 */	bne lbl_801146CC
/* 8011479C 0011159C  7F A3 EB 78 */	mr r3, r29
lbl_801147A0:
/* 801147A0 001115A0  E3 E1 00 B8 */	psq_l f31, 184(r1), 0, qr0
/* 801147A4 001115A4  CB E1 00 B0 */	lfd f31, 0xb0(r1)
/* 801147A8 001115A8  BB 41 00 98 */	lmw r26, 0x98(r1)
/* 801147AC 001115AC  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 801147B0 001115B0  7C 08 03 A6 */	mtlr r0
/* 801147B4 001115B4  38 21 00 C0 */	addi r1, r1, 0xc0
/* 801147B8 001115B8  4E 80 00 20 */	blr 

/* trigger_collision__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRQ412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type8ent_infofRC7xCollis */
trigger_collision__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRQ412bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type8ent_infofRC7xCollis:
/* 801147BC 001115BC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801147C0 001115C0  7C 08 02 A6 */	mflr r0
/* 801147C4 001115C4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801147C8 001115C8  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 801147CC 001115CC  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 801147D0 001115D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801147D4 001115D4  93 C1 00 08 */	stw r30, 8(r1)
/* 801147D8 001115D8  7C 9F 23 78 */	mr r31, r4
/* 801147DC 001115DC  7C 7E 1B 78 */	mr r30, r3
/* 801147E0 001115E0  80 64 00 04 */	lwz r3, 4(r4)
/* 801147E4 001115E4  FF E0 08 90 */	fmr f31, f1
/* 801147E8 001115E8  38 03 00 01 */	addi r0, r3, 1
/* 801147EC 001115EC  90 04 00 04 */	stw r0, 4(r4)
/* 801147F0 001115F0  88 1E 00 AC */	lbz r0, 0xac(r30)
/* 801147F4 001115F4  28 00 00 00 */	cmplwi r0, 0
/* 801147F8 001115F8  41 82 00 0C */	beq lbl_80114804
/* 801147FC 001115FC  C0 22 9E 88 */	lfs f1, lbl_803CE808-_SDA2_BASE_(r2)
/* 80114800 00111600  48 00 01 24 */	b lbl_80114924
lbl_80114804:
/* 80114804 00111604  80 7F 00 00 */	lwz r3, 0(r31)
/* 80114808 00111608  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8011480C 0011160C  80 63 00 30 */	lwz r3, 0x30(r3)
/* 80114810 00111610  28 03 00 00 */	cmplwi r3, 0
/* 80114814 00111614  41 82 00 28 */	beq lbl_8011483C
/* 80114818 00111618  88 03 00 20 */	lbz r0, 0x20(r3)
/* 8011481C 0011161C  28 00 00 00 */	cmplwi r0, 0
/* 80114820 00111620  40 82 00 1C */	bne lbl_8011483C
/* 80114824 00111624  4B FA 13 59 */	bl zSurfaceGetDamageType__FPC8xSurface
/* 80114828 00111628  2C 03 00 00 */	cmpwi r3, 0
/* 8011482C 0011162C  41 82 00 10 */	beq lbl_8011483C
/* 80114830 00111630  7F C3 F3 78 */	mr r3, r30
/* 80114834 00111634  38 80 00 01 */	li r4, 1
/* 80114838 00111638  4B FF FD D9 */	bl ouchie__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFb
lbl_8011483C:
/* 8011483C 0011163C  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 80114840 00111640  38 80 00 01 */	li r4, 1
/* 80114844 00111644  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80114848 00111648  4C 41 13 82 */	cror 2, 1, 2
/* 8011484C 0011164C  40 82 00 B0 */	bne lbl_801148FC
/* 80114850 00111650  80 7F 00 00 */	lwz r3, 0(r31)
/* 80114854 00111654  88 03 00 04 */	lbz r0, 4(r3)
/* 80114858 00111658  28 00 00 2B */	cmplwi r0, 0x2b
/* 8011485C 0011165C  40 82 00 8C */	bne lbl_801148E8
/* 80114860 00111660  80 1F 00 04 */	lwz r0, 4(r31)
/* 80114864 00111664  7C 7F 1B 78 */	mr r31, r3
/* 80114868 00111668  2C 00 00 01 */	cmpwi r0, 1
/* 8011486C 0011166C  40 82 00 54 */	bne lbl_801148C0
/* 80114870 00111670  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80114874 00111674  3C 80 80 3C */	lis r4, globals@ha
/* 80114878 00111678  38 84 05 58 */	addi r4, r4, globals@l
/* 8011487C 0011167C  38 DE 00 14 */	addi r6, r30, 0x14
/* 80114880 00111680  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 80114884 00111684  38 A4 06 E0 */	addi r5, r4, 0x6e0
/* 80114888 00111688  38 80 00 0F */	li r4, 0xf
/* 8011488C 0011168C  7D 89 03 A6 */	mtctr r12
/* 80114890 00111690  4E 80 04 21 */	bctrl 
/* 80114894 00111694  7F E3 FB 78 */	mr r3, r31
/* 80114898 00111698  81 9F 01 B8 */	lwz r12, 0x1b8(r31)
/* 8011489C 0011169C  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 801148A0 001116A0  7D 89 03 A6 */	mtctr r12
/* 801148A4 001116A4  4E 80 04 21 */	bctrl 
/* 801148A8 001116A8  2C 03 00 00 */	cmpwi r3, 0
/* 801148AC 001116AC  41 82 00 0C */	beq lbl_801148B8
/* 801148B0 001116B0  C0 22 9E 88 */	lfs f1, lbl_803CE808-_SDA2_BASE_(r2)
/* 801148B4 001116B4  48 00 00 70 */	b lbl_80114924
lbl_801148B8:
/* 801148B8 001116B8  C0 3E 01 8C */	lfs f1, 0x18c(r30)
/* 801148BC 001116BC  48 00 00 68 */	b lbl_80114924
lbl_801148C0:
/* 801148C0 001116C0  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 801148C4 001116C4  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 801148C8 001116C8  7D 89 03 A6 */	mtctr r12
/* 801148CC 001116CC  4E 80 04 21 */	bctrl 
/* 801148D0 001116D0  2C 03 00 00 */	cmpwi r3, 0
/* 801148D4 001116D4  41 82 00 0C */	beq lbl_801148E0
/* 801148D8 001116D8  C0 22 9E 88 */	lfs f1, lbl_803CE808-_SDA2_BASE_(r2)
/* 801148DC 001116DC  48 00 00 48 */	b lbl_80114924
lbl_801148E0:
/* 801148E0 001116E0  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 801148E4 001116E4  48 00 00 40 */	b lbl_80114924
lbl_801148E8:
/* 801148E8 001116E8  28 00 00 18 */	cmplwi r0, 0x18
/* 801148EC 001116EC  40 82 00 10 */	bne lbl_801148FC
/* 801148F0 001116F0  38 80 00 20 */	li r4, 0x20
/* 801148F4 001116F4  4B F4 24 5D */	bl zEntButton_Press__FP11_zEntButtonUi
/* 801148F8 001116F8  38 80 00 00 */	li r4, 0
lbl_801148FC:
/* 801148FC 001116FC  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 80114900 00111700  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80114904 00111704  4C 41 13 82 */	cror 2, 1, 2
/* 80114908 00111708  40 82 00 18 */	bne lbl_80114920
/* 8011490C 0011170C  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80114910 00111710  41 82 00 10 */	beq lbl_80114920
/* 80114914 00111714  7F C3 F3 78 */	mr r3, r30
/* 80114918 00111718  38 80 00 01 */	li r4, 1
/* 8011491C 0011171C  4B FF FC F5 */	bl ouchie__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFb
lbl_80114920:
/* 80114920 00111720  C0 22 9E 88 */	lfs f1, lbl_803CE808-_SDA2_BASE_(r2)
lbl_80114924:
/* 80114924 00111724  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 80114928 00111728  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8011492C 0011172C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80114930 00111730  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80114934 00111734  83 C1 00 08 */	lwz r30, 8(r1)
/* 80114938 00111738  7C 08 03 A6 */	mtlr r0
/* 8011493C 0011173C  38 21 00 20 */	addi r1, r1, 0x20
/* 80114940 00111740  4E 80 00 20 */	blr 

/* collide__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFR7xCollisRC7xSphereRC4xEnt */
collide__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFR7xCollisRC7xSphereRC4xEnt:
/* 80114944 00111744  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80114948 00111748  7C 08 02 A6 */	mflr r0
/* 8011494C 0011174C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80114950 00111750  88 06 00 22 */	lbz r0, 0x22(r6)
/* 80114954 00111754  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80114958 00111758  7C DF 33 78 */	mr r31, r6
/* 8011495C 0011175C  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 80114960 00111760  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80114964 00111764  7C BE 2B 78 */	mr r30, r5
/* 80114968 00111768  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8011496C 0011176C  7C 9D 23 78 */	mr r29, r4
/* 80114970 00111770  41 82 00 10 */	beq lbl_80114980
/* 80114974 00111774  88 1F 00 23 */	lbz r0, 0x23(r31)
/* 80114978 00111778  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 8011497C 0011177C  40 82 00 0C */	bne lbl_80114988
lbl_80114980:
/* 80114980 00111780  38 60 00 00 */	li r3, 0
/* 80114984 00111784  48 00 00 5C */	b lbl_801149E0
lbl_80114988:
/* 80114988 00111788  7F C3 F3 78 */	mr r3, r30
/* 8011498C 0011178C  7F A5 EB 78 */	mr r5, r29
/* 80114990 00111790  38 9F 00 64 */	addi r4, r31, 0x64
/* 80114994 00111794  4B EF 64 11 */	bl xSphereHitsBound__FPC7xSpherePC6xBoundP7xCollis
/* 80114998 00111798  80 1D 00 00 */	lwz r0, 0(r29)
/* 8011499C 0011179C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801149A0 001117A0  40 82 00 0C */	bne lbl_801149AC
/* 801149A4 001117A4  38 60 00 00 */	li r3, 0
/* 801149A8 001117A8  48 00 00 38 */	b lbl_801149E0
lbl_801149AC:
/* 801149AC 001117AC  88 1F 00 21 */	lbz r0, 0x21(r31)
/* 801149B0 001117B0  28 00 00 05 */	cmplwi r0, 5
/* 801149B4 001117B4  40 82 00 28 */	bne lbl_801149DC
/* 801149B8 001117B8  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 801149BC 001117BC  7F C3 F3 78 */	mr r3, r30
/* 801149C0 001117C0  7F A5 EB 78 */	mr r5, r29
/* 801149C4 001117C4  4B EF AE A1 */	bl xSphereHitsModel__FPC7xSpherePC14xModelInstanceP7xCollis
/* 801149C8 001117C8  80 1D 00 00 */	lwz r0, 0(r29)
/* 801149CC 001117CC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801149D0 001117D0  40 82 00 0C */	bne lbl_801149DC
/* 801149D4 001117D4  38 60 00 00 */	li r3, 0
/* 801149D8 001117D8  48 00 00 08 */	b lbl_801149E0
lbl_801149DC:
/* 801149DC 001117DC  38 60 00 01 */	li r3, 1
lbl_801149E0:
/* 801149E0 001117E0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801149E4 001117E4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801149E8 001117E8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801149EC 001117EC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801149F0 001117F0  7C 08 03 A6 */	mtlr r0
/* 801149F4 001117F4  38 21 00 20 */	addi r1, r1, 0x20
/* 801149F8 001117F8  4E 80 00 20 */	blr 

/* collide_start__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFR6xScene */
collide_start__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFR6xScene:
/* 801149FC 001117FC  94 21 FE D0 */	stwu r1, -0x130(r1)
/* 80114A00 00111800  7C 08 02 A6 */	mflr r0
/* 80114A04 00111804  90 01 01 34 */	stw r0, 0x134(r1)
/* 80114A08 00111808  93 E1 01 2C */	stw r31, 0x12c(r1)
/* 80114A0C 0011180C  7C 9F 23 78 */	mr r31, r4
/* 80114A10 00111810  93 C1 01 28 */	stw r30, 0x128(r1)
/* 80114A14 00111814  7C 7E 1B 78 */	mr r30, r3
/* 80114A18 00111818  38 61 00 50 */	addi r3, r1, 0x50
/* 80114A1C 0011181C  93 A1 01 24 */	stw r29, 0x124(r1)
/* 80114A20 00111820  38 9E 00 20 */	addi r4, r30, 0x20
/* 80114A24 00111824  38 BE 00 08 */	addi r5, r30, 8
/* 80114A28 00111828  93 81 01 20 */	stw r28, 0x120(r1)
/* 80114A2C 0011182C  4B EF 67 A1 */	bl __mi__5xVec3CFRC5xVec3
/* 80114A30 00111830  38 61 00 50 */	addi r3, r1, 0x50
/* 80114A34 00111834  4B EF 67 75 */	bl length__5xVec3CFv
/* 80114A38 00111838  3C 60 80 3C */	lis r3, globals@ha
/* 80114A3C 0011183C  C0 42 9E 8C */	lfs f2, lbl_803CE80C-_SDA2_BASE_(r2)
/* 80114A40 00111840  38 83 05 58 */	addi r4, r3, globals@l
/* 80114A44 00111844  38 61 00 38 */	addi r3, r1, 0x38
/* 80114A48 00111848  C0 04 07 74 */	lfs f0, 0x774(r4)
/* 80114A4C 0011184C  38 9E 00 20 */	addi r4, r30, 0x20
/* 80114A50 00111850  38 BE 00 08 */	addi r5, r30, 8
/* 80114A54 00111854  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80114A58 00111858  D0 01 00 74 */	stfs f0, 0x74(r1)
/* 80114A5C 0011185C  4B F0 09 85 */	bl __pl__5xVec3CFRC5xVec3
/* 80114A60 00111860  C0 22 9E 8C */	lfs f1, lbl_803CE80C-_SDA2_BASE_(r2)
/* 80114A64 00111864  38 61 00 44 */	addi r3, r1, 0x44
/* 80114A68 00111868  38 81 00 38 */	addi r4, r1, 0x38
/* 80114A6C 0011186C  4B EF 66 B5 */	bl __ml__5xVec3CFf
/* 80114A70 00111870  38 61 00 68 */	addi r3, r1, 0x68
/* 80114A74 00111874  38 81 00 44 */	addi r4, r1, 0x44
/* 80114A78 00111878  4B EF 67 ED */	bl __as__5xVec3FRC5xVec3
/* 80114A7C 0011187C  7F C4 F3 78 */	mr r4, r30
/* 80114A80 00111880  38 61 00 2C */	addi r3, r1, 0x2c
/* 80114A84 00111884  38 A1 00 68 */	addi r5, r1, 0x68
/* 80114A88 00111888  4B FF F4 A9 */	bl local_to_world__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFRC5xVec3
/* 80114A8C 0011188C  38 61 00 68 */	addi r3, r1, 0x68
/* 80114A90 00111890  38 81 00 2C */	addi r4, r1, 0x2c
/* 80114A94 00111894  4B EF 67 D1 */	bl __as__5xVec3FRC5xVec3
/* 80114A98 00111898  38 00 00 02 */	li r0, 2
/* 80114A9C 0011189C  3B A1 00 F8 */	addi r29, r1, 0xf8
/* 80114AA0 001118A0  98 01 00 E8 */	stb r0, 0xe8(r1)
/* 80114AA4 001118A4  7F A3 EB 78 */	mr r3, r29
/* 80114AA8 001118A8  38 81 00 68 */	addi r4, r1, 0x68
/* 80114AAC 001118AC  48 00 18 C5 */	bl xBoxFromSphere__FR4xBoxRC7xSphere
/* 80114AB0 001118B0  3B 81 00 EC */	addi r28, r1, 0xec
/* 80114AB4 001118B4  7F A5 EB 78 */	mr r5, r29
/* 80114AB8 001118B8  7F 83 E3 78 */	mr r3, r28
/* 80114ABC 001118BC  38 81 01 04 */	addi r4, r1, 0x104
/* 80114AC0 001118C0  4B EF 65 F9 */	bl xVec3Add__FP5xVec3PC5xVec3PC5xVec3
/* 80114AC4 001118C4  C0 22 9E 8C */	lfs f1, lbl_803CE80C-_SDA2_BASE_(r2)
/* 80114AC8 001118C8  7F 83 E3 78 */	mr r3, r28
/* 80114ACC 001118CC  7F 84 E3 78 */	mr r4, r28
/* 80114AD0 001118D0  4B EF 65 C1 */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 80114AD4 001118D4  7F A4 EB 78 */	mr r4, r29
/* 80114AD8 001118D8  38 61 00 C8 */	addi r3, r1, 0xc8
/* 80114ADC 001118DC  4B F0 0E 4D */	bl xQuickCullForBox__FP7xQCDataPC4xBox
/* 80114AE0 001118E0  38 00 00 00 */	li r0, 0
/* 80114AE4 001118E4  38 61 00 5C */	addi r3, r1, 0x5c
/* 80114AE8 001118E8  90 1E 09 B8 */	stw r0, 0x9b8(r30)
/* 80114AEC 001118EC  38 81 00 68 */	addi r4, r1, 0x68
/* 80114AF0 001118F0  38 BE 01 B8 */	addi r5, r30, 0x1b8
/* 80114AF4 001118F4  38 DE 09 B8 */	addi r6, r30, 0x9b8
/* 80114AF8 001118F8  48 00 00 ED */	bl __ct__Q412bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type19cb_cache_collisionsFRC7xSpherePQ412bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type8ent_infoRi
/* 80114AFC 001118FC  80 A1 00 5C */	lwz r5, 0x5c(r1)
/* 80114B00 00111900  3C 60 80 3D */	lis r3, colls_grid@ha
/* 80114B04 00111904  80 E1 00 60 */	lwz r7, 0x60(r1)
/* 80114B08 00111908  38 81 00 C8 */	addi r4, r1, 0xc8
/* 80114B0C 0011190C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80114B10 00111910  38 63 A6 D8 */	addi r3, r3, colls_grid@l
/* 80114B14 00111914  90 A1 00 20 */	stw r5, 0x20(r1)
/* 80114B18 00111918  7C 85 23 78 */	mr r5, r4
/* 80114B1C 0011191C  38 C1 00 20 */	addi r6, r1, 0x20
/* 80114B20 00111920  90 E1 00 24 */	stw r7, 0x24(r1)
/* 80114B24 00111924  90 01 00 28 */	stw r0, 0x28(r1)
/* 80114B28 00111928  48 00 18 A9 */	bl xGridCheckBound_esc__0_Q412bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type19cb_cache_collisions_esc__1___FR5xGridRC6xBoundRC7xQCDataQ412bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type19cb_cache_collisions
/* 80114B2C 0011192C  80 A1 00 5C */	lwz r5, 0x5c(r1)
/* 80114B30 00111930  3C 60 80 3D */	lis r3, colls_oso_grid@ha
/* 80114B34 00111934  80 E1 00 60 */	lwz r7, 0x60(r1)
/* 80114B38 00111938  38 81 00 C8 */	addi r4, r1, 0xc8
/* 80114B3C 0011193C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80114B40 00111940  38 63 A7 74 */	addi r3, r3, colls_oso_grid@l
/* 80114B44 00111944  90 A1 00 14 */	stw r5, 0x14(r1)
/* 80114B48 00111948  7C 85 23 78 */	mr r5, r4
/* 80114B4C 0011194C  38 C1 00 14 */	addi r6, r1, 0x14
/* 80114B50 00111950  90 E1 00 18 */	stw r7, 0x18(r1)
/* 80114B54 00111954  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80114B58 00111958  48 00 18 79 */	bl xGridCheckBound_esc__0_Q412bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type19cb_cache_collisions_esc__1___FR5xGridRC6xBoundRC7xQCDataQ412bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type19cb_cache_collisions
/* 80114B5C 0011195C  80 A1 00 5C */	lwz r5, 0x5c(r1)
/* 80114B60 00111960  3C 60 80 3D */	lis r3, npcs_grid@ha
/* 80114B64 00111964  80 E1 00 60 */	lwz r7, 0x60(r1)
/* 80114B68 00111968  38 81 00 C8 */	addi r4, r1, 0xc8
/* 80114B6C 0011196C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80114B70 00111970  38 63 A7 A8 */	addi r3, r3, npcs_grid@l
/* 80114B74 00111974  90 A1 00 08 */	stw r5, 8(r1)
/* 80114B78 00111978  7C 85 23 78 */	mr r5, r4
/* 80114B7C 0011197C  38 C1 00 08 */	addi r6, r1, 8
/* 80114B80 00111980  90 E1 00 0C */	stw r7, 0xc(r1)
/* 80114B84 00111984  90 01 00 10 */	stw r0, 0x10(r1)
/* 80114B88 00111988  48 00 18 49 */	bl xGridCheckBound_esc__0_Q412bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type19cb_cache_collisions_esc__1___FR5xGridRC6xBoundRC7xQCDataQ412bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type19cb_cache_collisions
/* 80114B8C 0011198C  38 00 00 00 */	li r0, 0
/* 80114B90 00111990  38 61 00 68 */	addi r3, r1, 0x68
/* 80114B94 00111994  90 01 00 78 */	stw r0, 0x78(r1)
/* 80114B98 00111998  38 A1 00 78 */	addi r5, r1, 0x78
/* 80114B9C 0011199C  80 1F 00 44 */	lwz r0, 0x44(r31)
/* 80114BA0 001119A0  90 1E 09 BC */	stw r0, 0x9bc(r30)
/* 80114BA4 001119A4  80 9F 00 44 */	lwz r4, 0x44(r31)
/* 80114BA8 001119A8  4B FA D0 C1 */	bl iSphereHitsEnv__FPC7xSpherePC4xEnvP7xCollis
/* 80114BAC 001119AC  7C 83 00 D0 */	neg r4, r3
/* 80114BB0 001119B0  38 00 00 00 */	li r0, 0
/* 80114BB4 001119B4  7C 83 1B 78 */	or r3, r4, r3
/* 80114BB8 001119B8  54 63 0F FE */	srwi r3, r3, 0x1f
/* 80114BBC 001119BC  98 7E 09 C0 */	stb r3, 0x9c0(r30)
/* 80114BC0 001119C0  90 1E 09 C4 */	stw r0, 0x9c4(r30)
/* 80114BC4 001119C4  83 E1 01 2C */	lwz r31, 0x12c(r1)
/* 80114BC8 001119C8  83 C1 01 28 */	lwz r30, 0x128(r1)
/* 80114BCC 001119CC  83 A1 01 24 */	lwz r29, 0x124(r1)
/* 80114BD0 001119D0  83 81 01 20 */	lwz r28, 0x120(r1)
/* 80114BD4 001119D4  80 01 01 34 */	lwz r0, 0x134(r1)
/* 80114BD8 001119D8  7C 08 03 A6 */	mtlr r0
/* 80114BDC 001119DC  38 21 01 30 */	addi r1, r1, 0x130
/* 80114BE0 001119E0  4E 80 00 20 */	blr 

/* __ct__Q412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type19cb_cache_collisionsFRC7xSpherePQ412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type8ent_infoRi */
__ct__Q412bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type19cb_cache_collisionsFRC7xSpherePQ412bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type8ent_infoRi:
/* 80114BE4 001119E4  90 83 00 00 */	stw r4, 0(r3)
/* 80114BE8 001119E8  90 A3 00 04 */	stw r5, 4(r3)
/* 80114BEC 001119EC  90 C3 00 08 */	stw r6, 8(r3)
/* 80114BF0 001119F0  4E 80 00 20 */	blr 

/* update_camera__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf */
update_camera__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf:
/* 80114BF4 001119F4  94 21 FE D0 */	stwu r1, -0x130(r1)
/* 80114BF8 001119F8  7C 08 02 A6 */	mflr r0
/* 80114BFC 001119FC  90 01 01 34 */	stw r0, 0x134(r1)
/* 80114C00 00111A00  DB E1 01 20 */	stfd f31, 0x120(r1)
/* 80114C04 00111A04  F3 E1 01 28 */	psq_st f31, 296(r1), 0, qr0
/* 80114C08 00111A08  DB C1 01 10 */	stfd f30, 0x110(r1)
/* 80114C0C 00111A0C  F3 C1 01 18 */	psq_st f30, 280(r1), 0, qr0
/* 80114C10 00111A10  93 E1 01 0C */	stw r31, 0x10c(r1)
/* 80114C14 00111A14  7C 7F 1B 78 */	mr r31, r3
/* 80114C18 00111A18  FF E0 08 90 */	fmr f31, f1
/* 80114C1C 00111A1C  48 00 06 61 */	bl update_free_look__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf
/* 80114C20 00111A20  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80114C24 00111A24  40 82 03 24 */	bne lbl_80114F48
/* 80114C28 00111A28  3C 60 80 27 */	lis r3, lbl_8026A5DC@ha
/* 80114C2C 00111A2C  38 A3 A5 DC */	addi r5, r3, lbl_8026A5DC@l
/* 80114C30 00111A30  80 85 00 00 */	lwz r4, 0(r5)
/* 80114C34 00111A34  80 65 00 04 */	lwz r3, 4(r5)
/* 80114C38 00111A38  80 05 00 08 */	lwz r0, 8(r5)
/* 80114C3C 00111A3C  90 81 00 98 */	stw r4, 0x98(r1)
/* 80114C40 00111A40  90 61 00 9C */	stw r3, 0x9c(r1)
/* 80114C44 00111A44  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 80114C48 00111A48  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 80114C4C 00111A4C  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80114C50 00111A50  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80114C54 00111A54  4C 41 13 82 */	cror 2, 1, 2
/* 80114C58 00111A58  40 82 00 14 */	bne lbl_80114C6C
/* 80114C5C 00111A5C  38 61 00 C8 */	addi r3, r1, 0xc8
/* 80114C60 00111A60  38 81 00 98 */	addi r4, r1, 0x98
/* 80114C64 00111A64  4B EF 66 01 */	bl __as__5xVec3FRC5xVec3
/* 80114C68 00111A68  48 00 00 A4 */	b lbl_80114D0C
lbl_80114C6C:
/* 80114C6C 00111A6C  38 7F 00 08 */	addi r3, r31, 8
/* 80114C70 00111A70  4B EF 65 39 */	bl length__5xVec3CFv
/* 80114C74 00111A74  C0 5F 01 64 */	lfs f2, 0x164(r31)
/* 80114C78 00111A78  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80114C7C 00111A7C  40 80 00 70 */	bge lbl_80114CEC
/* 80114C80 00111A80  C0 02 9E E0 */	lfs f0, lbl_803CE860-_SDA2_BASE_(r2)
/* 80114C84 00111A84  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80114C88 00111A88  40 80 00 14 */	bge lbl_80114C9C
/* 80114C8C 00111A8C  38 61 00 C8 */	addi r3, r1, 0xc8
/* 80114C90 00111A90  38 81 00 98 */	addi r4, r1, 0x98
/* 80114C94 00111A94  4B EF 65 D1 */	bl __as__5xVec3FRC5xVec3
/* 80114C98 00111A98  48 00 00 74 */	b lbl_80114D0C
lbl_80114C9C:
/* 80114C9C 00111A9C  EF C1 10 24 */	fdivs f30, f1, f2
/* 80114CA0 00111AA0  38 61 00 5C */	addi r3, r1, 0x5c
/* 80114CA4 00111AA4  38 9F 00 08 */	addi r4, r31, 8
/* 80114CA8 00111AA8  EC 3E 08 24 */	fdivs f1, f30, f1
/* 80114CAC 00111AAC  4B EF 64 75 */	bl __ml__5xVec3CFf
/* 80114CB0 00111AB0  C0 02 9E 88 */	lfs f0, lbl_803CE808-_SDA2_BASE_(r2)
/* 80114CB4 00111AB4  38 61 00 68 */	addi r3, r1, 0x68
/* 80114CB8 00111AB8  38 81 00 98 */	addi r4, r1, 0x98
/* 80114CBC 00111ABC  EC 20 F0 28 */	fsubs f1, f0, f30
/* 80114CC0 00111AC0  4B EF 64 61 */	bl __ml__5xVec3CFf
/* 80114CC4 00111AC4  38 61 00 74 */	addi r3, r1, 0x74
/* 80114CC8 00111AC8  38 81 00 68 */	addi r4, r1, 0x68
/* 80114CCC 00111ACC  38 A1 00 5C */	addi r5, r1, 0x5c
/* 80114CD0 00111AD0  4B F0 07 11 */	bl __pl__5xVec3CFRC5xVec3
/* 80114CD4 00111AD4  38 61 00 C8 */	addi r3, r1, 0xc8
/* 80114CD8 00111AD8  38 81 00 74 */	addi r4, r1, 0x74
/* 80114CDC 00111ADC  4B EF 65 89 */	bl __as__5xVec3FRC5xVec3
/* 80114CE0 00111AE0  38 61 00 C8 */	addi r3, r1, 0xc8
/* 80114CE4 00111AE4  4B F0 08 CD */	bl normalize__5xVec3Fv
/* 80114CE8 00111AE8  48 00 00 24 */	b lbl_80114D0C
lbl_80114CEC:
/* 80114CEC 00111AEC  C0 02 9E 88 */	lfs f0, lbl_803CE808-_SDA2_BASE_(r2)
/* 80114CF0 00111AF0  38 61 00 50 */	addi r3, r1, 0x50
/* 80114CF4 00111AF4  38 9F 00 08 */	addi r4, r31, 8
/* 80114CF8 00111AF8  EC 20 08 24 */	fdivs f1, f0, f1
/* 80114CFC 00111AFC  4B EF 64 25 */	bl __ml__5xVec3CFf
/* 80114D00 00111B00  38 61 00 C8 */	addi r3, r1, 0xc8
/* 80114D04 00111B04  38 81 00 50 */	addi r4, r1, 0x50
/* 80114D08 00111B08  4B EF 65 5D */	bl __as__5xVec3FRC5xVec3
lbl_80114D0C:
/* 80114D0C 00111B0C  C0 1F 00 18 */	lfs f0, 0x18(r31)
/* 80114D10 00111B10  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80114D14 00111B14  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80114D18 00111B18  4C 41 13 82 */	cror 2, 1, 2
/* 80114D1C 00111B1C  40 82 00 08 */	bne lbl_80114D24
/* 80114D20 00111B20  48 00 00 10 */	b lbl_80114D30
lbl_80114D24:
/* 80114D24 00111B24  FC 20 00 50 */	fneg f1, f0
/* 80114D28 00111B28  C0 1F 01 78 */	lfs f0, 0x178(r31)
/* 80114D2C 00111B2C  EC 21 00 32 */	fmuls f1, f1, f0
lbl_80114D30:
/* 80114D30 00111B30  C0 1F 01 64 */	lfs f0, 0x164(r31)
/* 80114D34 00111B34  38 61 00 44 */	addi r3, r1, 0x44
/* 80114D38 00111B38  38 81 00 C8 */	addi r4, r1, 0xc8
/* 80114D3C 00111B3C  EC 00 08 2A */	fadds f0, f0, f1
/* 80114D40 00111B40  FC 20 00 50 */	fneg f1, f0
/* 80114D44 00111B44  4B EF 63 DD */	bl __ml__5xVec3CFf
/* 80114D48 00111B48  38 61 00 BC */	addi r3, r1, 0xbc
/* 80114D4C 00111B4C  38 81 00 44 */	addi r4, r1, 0x44
/* 80114D50 00111B50  4B EF 65 15 */	bl __as__5xVec3FRC5xVec3
/* 80114D54 00111B54  C0 01 00 CC */	lfs f0, 0xcc(r1)
/* 80114D58 00111B58  38 61 00 B0 */	addi r3, r1, 0xb0
/* 80114D5C 00111B5C  C0 42 9E A0 */	lfs f2, lbl_803CE820-_SDA2_BASE_(r2)
/* 80114D60 00111B60  FC 00 00 50 */	fneg f0, f0
/* 80114D64 00111B64  C0 21 00 D0 */	lfs f1, 0xd0(r1)
/* 80114D68 00111B68  D0 41 00 B0 */	stfs f2, 0xb0(r1)
/* 80114D6C 00111B6C  D0 21 00 B4 */	stfs f1, 0xb4(r1)
/* 80114D70 00111B70  D0 01 00 B8 */	stfs f0, 0xb8(r1)
/* 80114D74 00111B74  4B F0 08 3D */	bl normalize__5xVec3Fv
/* 80114D78 00111B78  C0 3F 01 70 */	lfs f1, 0x170(r31)
/* 80114D7C 00111B7C  38 61 00 D4 */	addi r3, r1, 0xd4
/* 80114D80 00111B80  38 81 00 C8 */	addi r4, r1, 0xc8
/* 80114D84 00111B84  4B F0 6B 59 */	bl xMat3x3Rot__FP7xMat3x3PC5xVec3f
/* 80114D88 00111B88  38 61 00 B0 */	addi r3, r1, 0xb0
/* 80114D8C 00111B8C  38 81 00 D4 */	addi r4, r1, 0xd4
/* 80114D90 00111B90  7C 65 1B 78 */	mr r5, r3
/* 80114D94 00111B94  48 00 15 79 */	bl xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 80114D98 00111B98  C0 3F 01 6C */	lfs f1, 0x16c(r31)
/* 80114D9C 00111B9C  38 61 00 38 */	addi r3, r1, 0x38
/* 80114DA0 00111BA0  38 81 00 B0 */	addi r4, r1, 0xb0
/* 80114DA4 00111BA4  4B EF 63 7D */	bl __ml__5xVec3CFf
/* 80114DA8 00111BA8  38 61 00 BC */	addi r3, r1, 0xbc
/* 80114DAC 00111BAC  38 81 00 38 */	addi r4, r1, 0x38
/* 80114DB0 00111BB0  4B F0 06 95 */	bl __apl__5xVec3FRC5xVec3
/* 80114DB4 00111BB4  38 61 00 2C */	addi r3, r1, 0x2c
/* 80114DB8 00111BB8  38 9F 00 08 */	addi r4, r31, 8
/* 80114DBC 00111BBC  38 A1 00 BC */	addi r5, r1, 0xbc
/* 80114DC0 00111BC0  4B F0 06 21 */	bl __pl__5xVec3CFRC5xVec3
/* 80114DC4 00111BC4  38 61 00 A4 */	addi r3, r1, 0xa4
/* 80114DC8 00111BC8  38 81 00 2C */	addi r4, r1, 0x2c
/* 80114DCC 00111BCC  4B EF 64 99 */	bl __as__5xVec3FRC5xVec3
/* 80114DD0 00111BD0  38 61 00 20 */	addi r3, r1, 0x20
/* 80114DD4 00111BD4  38 81 00 A4 */	addi r4, r1, 0xa4
/* 80114DD8 00111BD8  38 BF 00 38 */	addi r5, r31, 0x38
/* 80114DDC 00111BDC  4B EF 63 F1 */	bl __mi__5xVec3CFRC5xVec3
/* 80114DE0 00111BE0  38 61 00 20 */	addi r3, r1, 0x20
/* 80114DE4 00111BE4  4B EF 63 19 */	bl length2__5xVec3CFv
/* 80114DE8 00111BE8  C0 02 9F 1C */	lfs f0, lbl_803CE89C-_SDA2_BASE_(r2)
/* 80114DEC 00111BEC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80114DF0 00111BF0  40 81 01 2C */	ble lbl_80114F1C
/* 80114DF4 00111BF4  80 BF 00 50 */	lwz r5, 0x50(r31)
/* 80114DF8 00111BF8  FC 20 F8 90 */	fmr f1, f31
/* 80114DFC 00111BFC  80 1F 00 54 */	lwz r0, 0x54(r31)
/* 80114E00 00111C00  7F E3 FB 78 */	mr r3, r31
/* 80114E04 00111C04  38 81 00 A4 */	addi r4, r1, 0xa4
/* 80114E08 00111C08  90 A1 00 8C */	stw r5, 0x8c(r1)
/* 80114E0C 00111C0C  90 01 00 90 */	stw r0, 0x90(r1)
/* 80114E10 00111C10  80 1F 00 58 */	lwz r0, 0x58(r31)
/* 80114E14 00111C14  90 01 00 94 */	stw r0, 0x94(r1)
/* 80114E18 00111C18  48 00 02 C9 */	bl interpolate_camera_loc__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRC5xVec3f
/* 80114E1C 00111C1C  38 61 00 14 */	addi r3, r1, 0x14
/* 80114E20 00111C20  38 9F 00 50 */	addi r4, r31, 0x50
/* 80114E24 00111C24  38 A1 00 8C */	addi r5, r1, 0x8c
/* 80114E28 00111C28  4B EF 63 A5 */	bl __mi__5xVec3CFRC5xVec3
/* 80114E2C 00111C2C  C0 3F 00 14 */	lfs f1, 0x14(r31)
/* 80114E30 00111C30  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80114E34 00111C34  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80114E38 00111C38  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80114E3C 00111C3C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80114E40 00111C40  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80114E44 00111C44  90 81 00 80 */	stw r4, 0x80(r1)
/* 80114E48 00111C48  90 61 00 84 */	stw r3, 0x84(r1)
/* 80114E4C 00111C4C  90 01 00 88 */	stw r0, 0x88(r1)
/* 80114E50 00111C50  40 80 00 0C */	bge lbl_80114E5C
/* 80114E54 00111C54  38 60 00 01 */	li r3, 1
/* 80114E58 00111C58  48 00 00 08 */	b lbl_80114E60
lbl_80114E5C:
/* 80114E5C 00111C5C  38 60 00 00 */	li r3, 0
lbl_80114E60:
/* 80114E60 00111C60  C0 21 00 80 */	lfs f1, 0x80(r1)
/* 80114E64 00111C64  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80114E68 00111C68  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80114E6C 00111C6C  40 80 00 0C */	bge lbl_80114E78
/* 80114E70 00111C70  38 00 00 01 */	li r0, 1
/* 80114E74 00111C74  48 00 00 08 */	b lbl_80114E7C
lbl_80114E78:
/* 80114E78 00111C78  38 00 00 00 */	li r0, 0
lbl_80114E7C:
/* 80114E7C 00111C7C  7C 00 18 00 */	cmpw r0, r3
/* 80114E80 00111C80  41 82 00 0C */	beq lbl_80114E8C
/* 80114E84 00111C84  C0 01 00 8C */	lfs f0, 0x8c(r1)
/* 80114E88 00111C88  D0 1F 00 50 */	stfs f0, 0x50(r31)
lbl_80114E8C:
/* 80114E8C 00111C8C  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 80114E90 00111C90  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80114E94 00111C94  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80114E98 00111C98  40 80 00 0C */	bge lbl_80114EA4
/* 80114E9C 00111C9C  38 60 00 01 */	li r3, 1
/* 80114EA0 00111CA0  48 00 00 08 */	b lbl_80114EA8
lbl_80114EA4:
/* 80114EA4 00111CA4  38 60 00 00 */	li r3, 0
lbl_80114EA8:
/* 80114EA8 00111CA8  C0 21 00 84 */	lfs f1, 0x84(r1)
/* 80114EAC 00111CAC  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80114EB0 00111CB0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80114EB4 00111CB4  40 80 00 0C */	bge lbl_80114EC0
/* 80114EB8 00111CB8  38 00 00 01 */	li r0, 1
/* 80114EBC 00111CBC  48 00 00 08 */	b lbl_80114EC4
lbl_80114EC0:
/* 80114EC0 00111CC0  38 00 00 00 */	li r0, 0
lbl_80114EC4:
/* 80114EC4 00111CC4  7C 00 18 00 */	cmpw r0, r3
/* 80114EC8 00111CC8  41 82 00 0C */	beq lbl_80114ED4
/* 80114ECC 00111CCC  C0 01 00 90 */	lfs f0, 0x90(r1)
/* 80114ED0 00111CD0  D0 1F 00 54 */	stfs f0, 0x54(r31)
lbl_80114ED4:
/* 80114ED4 00111CD4  C0 3F 00 1C */	lfs f1, 0x1c(r31)
/* 80114ED8 00111CD8  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80114EDC 00111CDC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80114EE0 00111CE0  40 80 00 0C */	bge lbl_80114EEC
/* 80114EE4 00111CE4  38 60 00 01 */	li r3, 1
/* 80114EE8 00111CE8  48 00 00 08 */	b lbl_80114EF0
lbl_80114EEC:
/* 80114EEC 00111CEC  38 60 00 00 */	li r3, 0
lbl_80114EF0:
/* 80114EF0 00111CF0  C0 21 00 88 */	lfs f1, 0x88(r1)
/* 80114EF4 00111CF4  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80114EF8 00111CF8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80114EFC 00111CFC  40 80 00 0C */	bge lbl_80114F08
/* 80114F00 00111D00  38 00 00 01 */	li r0, 1
/* 80114F04 00111D04  48 00 00 08 */	b lbl_80114F0C
lbl_80114F08:
/* 80114F08 00111D08  38 00 00 00 */	li r0, 0
lbl_80114F0C:
/* 80114F0C 00111D0C  7C 00 18 00 */	cmpw r0, r3
/* 80114F10 00111D10  41 82 00 0C */	beq lbl_80114F1C
/* 80114F14 00111D14  C0 01 00 94 */	lfs f0, 0x94(r1)
/* 80114F18 00111D18  D0 1F 00 58 */	stfs f0, 0x58(r31)
lbl_80114F1C:
/* 80114F1C 00111D1C  7F E4 FB 78 */	mr r4, r31
/* 80114F20 00111D20  38 61 00 08 */	addi r3, r1, 8
/* 80114F24 00111D24  38 BF 00 38 */	addi r5, r31, 0x38
/* 80114F28 00111D28  4B FF F0 09 */	bl local_to_world__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFRC5xVec3
/* 80114F2C 00111D2C  3C 60 80 3C */	lis r3, globals@ha
/* 80114F30 00111D30  38 81 00 08 */	addi r4, r1, 8
/* 80114F34 00111D34  38 63 05 58 */	addi r3, r3, globals@l
/* 80114F38 00111D38  4B EF 87 E1 */	bl xCameraMove__FP7xCameraRC5xVec3
/* 80114F3C 00111D3C  FC 20 F8 90 */	fmr f1, f31
/* 80114F40 00111D40  7F E3 FB 78 */	mr r3, r31
/* 80114F44 00111D44  48 00 00 29 */	bl update_camera_direction__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf
lbl_80114F48:
/* 80114F48 00111D48  E3 E1 01 28 */	psq_l f31, 296(r1), 0, qr0
/* 80114F4C 00111D4C  CB E1 01 20 */	lfd f31, 0x120(r1)
/* 80114F50 00111D50  E3 C1 01 18 */	psq_l f30, 280(r1), 0, qr0
/* 80114F54 00111D54  CB C1 01 10 */	lfd f30, 0x110(r1)
/* 80114F58 00111D58  80 01 01 34 */	lwz r0, 0x134(r1)
/* 80114F5C 00111D5C  83 E1 01 0C */	lwz r31, 0x10c(r1)
/* 80114F60 00111D60  7C 08 03 A6 */	mtlr r0
/* 80114F64 00111D64  38 21 01 30 */	addi r1, r1, 0x130
/* 80114F68 00111D68  4E 80 00 20 */	blr 

/* update_camera_direction__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf */
update_camera_direction__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf:
/* 80114F6C 00111D6C  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80114F70 00111D70  7C 08 02 A6 */	mflr r0
/* 80114F74 00111D74  90 01 00 74 */	stw r0, 0x74(r1)
/* 80114F78 00111D78  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 80114F7C 00111D7C  7C 7F 1B 78 */	mr r31, r3
/* 80114F80 00111D80  38 61 00 2C */	addi r3, r1, 0x2c
/* 80114F84 00111D84  80 DF 00 50 */	lwz r6, 0x50(r31)
/* 80114F88 00111D88  38 9F 00 08 */	addi r4, r31, 8
/* 80114F8C 00111D8C  80 1F 00 54 */	lwz r0, 0x54(r31)
/* 80114F90 00111D90  38 BF 00 38 */	addi r5, r31, 0x38
/* 80114F94 00111D94  90 C1 00 50 */	stw r6, 0x50(r1)
/* 80114F98 00111D98  90 01 00 54 */	stw r0, 0x54(r1)
/* 80114F9C 00111D9C  80 1F 00 58 */	lwz r0, 0x58(r31)
/* 80114FA0 00111DA0  90 01 00 58 */	stw r0, 0x58(r1)
/* 80114FA4 00111DA4  4B EF 62 29 */	bl __mi__5xVec3CFRC5xVec3
/* 80114FA8 00111DA8  38 61 00 38 */	addi r3, r1, 0x38
/* 80114FAC 00111DAC  38 81 00 2C */	addi r4, r1, 0x2c
/* 80114FB0 00111DB0  48 00 12 FD */	bl normal__5xVec3CFv
/* 80114FB4 00111DB4  80 E1 00 38 */	lwz r7, 0x38(r1)
/* 80114FB8 00111DB8  38 61 00 08 */	addi r3, r1, 8
/* 80114FBC 00111DBC  80 C1 00 3C */	lwz r6, 0x3c(r1)
/* 80114FC0 00111DC0  38 81 00 44 */	addi r4, r1, 0x44
/* 80114FC4 00111DC4  80 01 00 40 */	lwz r0, 0x40(r1)
/* 80114FC8 00111DC8  38 A1 00 50 */	addi r5, r1, 0x50
/* 80114FCC 00111DCC  90 E1 00 44 */	stw r7, 0x44(r1)
/* 80114FD0 00111DD0  90 C1 00 48 */	stw r6, 0x48(r1)
/* 80114FD4 00111DD4  90 01 00 4C */	stw r0, 0x4c(r1)
/* 80114FD8 00111DD8  4B EF 61 F5 */	bl __mi__5xVec3CFRC5xVec3
/* 80114FDC 00111DDC  C0 3F 01 74 */	lfs f1, 0x174(r31)
/* 80114FE0 00111DE0  38 61 00 14 */	addi r3, r1, 0x14
/* 80114FE4 00111DE4  38 81 00 08 */	addi r4, r1, 8
/* 80114FE8 00111DE8  4B EF 61 39 */	bl __ml__5xVec3CFf
/* 80114FEC 00111DEC  38 61 00 20 */	addi r3, r1, 0x20
/* 80114FF0 00111DF0  38 81 00 50 */	addi r4, r1, 0x50
/* 80114FF4 00111DF4  38 A1 00 14 */	addi r5, r1, 0x14
/* 80114FF8 00111DF8  4B F0 03 E9 */	bl __pl__5xVec3CFRC5xVec3
/* 80114FFC 00111DFC  38 7F 00 50 */	addi r3, r31, 0x50
/* 80115000 00111E00  38 81 00 20 */	addi r4, r1, 0x20
/* 80115004 00111E04  4B EF 62 61 */	bl __as__5xVec3FRC5xVec3
/* 80115008 00111E08  38 7F 00 50 */	addi r3, r31, 0x50
/* 8011500C 00111E0C  4B F0 05 A5 */	bl normalize__5xVec3Fv
/* 80115010 00111E10  7F E3 FB 78 */	mr r3, r31
/* 80115014 00111E14  48 00 00 19 */	bl rotate_camera__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv
/* 80115018 00111E18  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8011501C 00111E1C  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 80115020 00111E20  7C 08 03 A6 */	mtlr r0
/* 80115024 00111E24  38 21 00 70 */	addi r1, r1, 0x70
/* 80115028 00111E28  4E 80 00 20 */	blr 

/* rotate_camera__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv */
rotate_camera__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv:
/* 8011502C 00111E2C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80115030 00111E30  7C 08 02 A6 */	mflr r0
/* 80115034 00111E34  90 01 00 24 */	stw r0, 0x24(r1)
/* 80115038 00111E38  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8011503C 00111E3C  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 80115040 00111E40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80115044 00111E44  7C 7F 1B 78 */	mr r31, r3
/* 80115048 00111E48  C0 02 9E AC */	lfs f0, lbl_803CE82C-_SDA2_BASE_(r2)
/* 8011504C 00111E4C  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80115050 00111E50  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80115054 00111E54  4C 40 13 82 */	cror 2, 0, 2
/* 80115058 00111E58  40 82 00 10 */	bne lbl_80115068
/* 8011505C 00111E5C  C3 E2 9E A0 */	lfs f31, lbl_803CE820-_SDA2_BASE_(r2)
/* 80115060 00111E60  C0 42 9F 20 */	lfs f2, lbl_803CE8A0-_SDA2_BASE_(r2)
/* 80115064 00111E64  48 00 00 24 */	b lbl_80115088
lbl_80115068:
/* 80115068 00111E68  C0 3F 00 50 */	lfs f1, 0x50(r31)
/* 8011506C 00111E6C  C0 5F 00 58 */	lfs f2, 0x58(r31)
/* 80115070 00111E70  4B EF 10 01 */	bl xatan2__Fff
/* 80115074 00111E74  FC 00 08 90 */	fmr f0, f1
/* 80115078 00111E78  C0 3F 00 54 */	lfs f1, 0x54(r31)
/* 8011507C 00111E7C  FF E0 00 90 */	fmr f31, f0
/* 80115080 00111E80  4B EF 8C F9 */	bl xasin__Ff
/* 80115084 00111E84  FC 40 08 50 */	fneg f2, f1
lbl_80115088:
/* 80115088 00111E88  C0 9F 00 94 */	lfs f4, 0x94(r31)
/* 8011508C 00111E8C  3C 60 80 3C */	lis r3, globals@ha
/* 80115090 00111E90  C0 1F 01 B4 */	lfs f0, 0x1b4(r31)
/* 80115094 00111E94  FC 20 F8 90 */	fmr f1, f31
/* 80115098 00111E98  C0 7F 01 68 */	lfs f3, 0x168(r31)
/* 8011509C 00111E9C  38 63 05 58 */	addi r3, r3, globals@l
/* 801150A0 00111EA0  EC 04 00 32 */	fmuls f0, f4, f0
/* 801150A4 00111EA4  38 80 00 00 */	li r4, 0
/* 801150A8 00111EA8  EC 7F 18 28 */	fsubs f3, f31, f3
/* 801150AC 00111EAC  D0 1F 00 94 */	stfs f0, 0x94(r31)
/* 801150B0 00111EB0  EC 64 18 2A */	fadds f3, f4, f3
/* 801150B4 00111EB4  C0 82 9E A0 */	lfs f4, lbl_803CE820-_SDA2_BASE_(r2)
/* 801150B8 00111EB8  FC A0 20 90 */	fmr f5, f4
/* 801150BC 00111EBC  FC C0 20 90 */	fmr f6, f4
/* 801150C0 00111EC0  4B EF 89 2D */	bl xCameraLookYPR__FP7xCameraUiffffff
/* 801150C4 00111EC4  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 801150C8 00111EC8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801150CC 00111ECC  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 801150D0 00111ED0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801150D4 00111ED4  7C 08 03 A6 */	mtlr r0
/* 801150D8 00111ED8  38 21 00 20 */	addi r1, r1, 0x20
/* 801150DC 00111EDC  4E 80 00 20 */	blr 

/* interpolate_camera_loc__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC5xVec3f */
interpolate_camera_loc__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRC5xVec3f:
/* 801150E0 00111EE0  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 801150E4 00111EE4  7C 08 02 A6 */	mflr r0
/* 801150E8 00111EE8  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 801150EC 00111EEC  DB E1 00 E0 */	stfd f31, 0xe0(r1)
/* 801150F0 00111EF0  F3 E1 00 E8 */	psq_st f31, 232(r1), 0, qr0
/* 801150F4 00111EF4  DB C1 00 D0 */	stfd f30, 0xd0(r1)
/* 801150F8 00111EF8  F3 C1 00 D8 */	psq_st f30, 216(r1), 0, qr0
/* 801150FC 00111EFC  DB A1 00 C0 */	stfd f29, 0xc0(r1)
/* 80115100 00111F00  F3 A1 00 C8 */	psq_st f29, 200(r1), 0, qr0
/* 80115104 00111F04  93 E1 00 BC */	stw r31, 0xbc(r1)
/* 80115108 00111F08  93 C1 00 B8 */	stw r30, 0xb8(r1)
/* 8011510C 00111F0C  93 A1 00 B4 */	stw r29, 0xb4(r1)
/* 80115110 00111F10  7C 7D 1B 78 */	mr r29, r3
/* 80115114 00111F14  FF A0 08 90 */	fmr f29, f1
/* 80115118 00111F18  C0 23 01 68 */	lfs f1, 0x168(r3)
/* 8011511C 00111F1C  7C 9E 23 78 */	mr r30, r4
/* 80115120 00111F20  C0 03 01 70 */	lfs f0, 0x170(r3)
/* 80115124 00111F24  EF C1 00 28 */	fsubs f30, f1, f0
/* 80115128 00111F28  FC 20 F0 90 */	fmr f1, f30
/* 8011512C 00111F2C  4B FA FD 21 */	bl isin__Ff
/* 80115130 00111F30  FF E0 08 90 */	fmr f31, f1
/* 80115134 00111F34  FC 20 F0 90 */	fmr f1, f30
/* 80115138 00111F38  4B FA FD 59 */	bl icos__Ff
/* 8011513C 00111F3C  FC 60 F8 90 */	fmr f3, f31
/* 80115140 00111F40  C0 42 9E A0 */	lfs f2, lbl_803CE820-_SDA2_BASE_(r2)
/* 80115144 00111F44  38 61 00 20 */	addi r3, r1, 0x20
/* 80115148 00111F48  4B F4 AE 41 */	bl create__5xVec3Ffff
/* 8011514C 00111F4C  38 61 00 74 */	addi r3, r1, 0x74
/* 80115150 00111F50  38 81 00 20 */	addi r4, r1, 0x20
/* 80115154 00111F54  4B EF 61 11 */	bl __as__5xVec3FRC5xVec3
/* 80115158 00111F58  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 8011515C 00111F5C  38 61 00 14 */	addi r3, r1, 0x14
/* 80115160 00111F60  C0 42 9E 88 */	lfs f2, lbl_803CE808-_SDA2_BASE_(r2)
/* 80115164 00111F64  FC 60 08 90 */	fmr f3, f1
/* 80115168 00111F68  4B F4 AE 21 */	bl create__5xVec3Ffff
/* 8011516C 00111F6C  38 61 00 84 */	addi r3, r1, 0x84
/* 80115170 00111F70  38 81 00 14 */	addi r4, r1, 0x14
/* 80115174 00111F74  4B EF 60 F1 */	bl __as__5xVec3FRC5xVec3
/* 80115178 00111F78  C0 01 00 7C */	lfs f0, 0x7c(r1)
/* 8011517C 00111F7C  38 61 00 08 */	addi r3, r1, 8
/* 80115180 00111F80  C0 42 9E A0 */	lfs f2, lbl_803CE820-_SDA2_BASE_(r2)
/* 80115184 00111F84  FC 20 00 50 */	fneg f1, f0
/* 80115188 00111F88  C0 61 00 74 */	lfs f3, 0x74(r1)
/* 8011518C 00111F8C  4B F4 AD FD */	bl create__5xVec3Ffff
/* 80115190 00111F90  3B E1 00 94 */	addi r31, r1, 0x94
/* 80115194 00111F94  38 81 00 08 */	addi r4, r1, 8
/* 80115198 00111F98  7F E3 FB 78 */	mr r3, r31
/* 8011519C 00111F9C  4B EF 60 C9 */	bl __as__5xVec3FRC5xVec3
/* 801151A0 00111FA0  38 61 00 74 */	addi r3, r1, 0x74
/* 801151A4 00111FA4  4B F0 04 0D */	bl normalize__5xVec3Fv
/* 801151A8 00111FA8  7F E3 FB 78 */	mr r3, r31
/* 801151AC 00111FAC  4B F0 04 05 */	bl normalize__5xVec3Fv
/* 801151B0 00111FB0  38 61 00 38 */	addi r3, r1, 0x38
/* 801151B4 00111FB4  38 81 00 74 */	addi r4, r1, 0x74
/* 801151B8 00111FB8  38 BD 00 38 */	addi r5, r29, 0x38
/* 801151BC 00111FBC  48 00 11 51 */	bl xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 801151C0 00111FC0  7F C5 F3 78 */	mr r5, r30
/* 801151C4 00111FC4  38 61 00 2C */	addi r3, r1, 0x2c
/* 801151C8 00111FC8  38 81 00 74 */	addi r4, r1, 0x74
/* 801151CC 00111FCC  48 00 11 41 */	bl xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 801151D0 00111FD0  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 801151D4 00111FD4  38 63 37 88 */	addi r3, r3, lbl_80313788@l
/* 801151D8 00111FD8  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 801151DC 00111FDC  FC 00 00 50 */	fneg f0, f0
/* 801151E0 00111FE0  EC 20 07 72 */	fmuls f1, f0, f29
/* 801151E4 00111FE4  4B EF 95 CD */	bl xexp__Ff
/* 801151E8 00111FE8  C0 42 9E 88 */	lfs f2, lbl_803CE808-_SDA2_BASE_(r2)
/* 801151EC 00111FEC  38 61 00 44 */	addi r3, r1, 0x44
/* 801151F0 00111FF0  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 801151F4 00111FF4  38 81 00 74 */	addi r4, r1, 0x74
/* 801151F8 00111FF8  C0 A1 00 38 */	lfs f5, 0x38(r1)
/* 801151FC 00111FFC  EC C2 08 28 */	fsubs f6, f2, f1
/* 80115200 00112000  C0 41 00 30 */	lfs f2, 0x30(r1)
/* 80115204 00112004  C0 61 00 3C */	lfs f3, 0x3c(r1)
/* 80115208 00112008  EC 80 28 28 */	fsubs f4, f0, f5
/* 8011520C 0011200C  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 80115210 00112010  C0 21 00 40 */	lfs f1, 0x40(r1)
/* 80115214 00112014  EC 42 18 28 */	fsubs f2, f2, f3
/* 80115218 00112018  EC 86 29 3A */	fmadds f4, f6, f4, f5
/* 8011521C 0011201C  EC 00 08 28 */	fsubs f0, f0, f1
/* 80115220 00112020  EC 46 18 BA */	fmadds f2, f6, f2, f3
/* 80115224 00112024  D0 81 00 38 */	stfs f4, 0x38(r1)
/* 80115228 00112028  EC 06 08 3A */	fmadds f0, f6, f0, f1
/* 8011522C 0011202C  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 80115230 00112030  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 80115234 00112034  4B F1 D5 F1 */	bl xMat3x3Transpose__FP7xMat3x3PC7xMat3x3
/* 80115238 00112038  38 7D 00 38 */	addi r3, r29, 0x38
/* 8011523C 0011203C  38 81 00 44 */	addi r4, r1, 0x44
/* 80115240 00112040  38 A1 00 38 */	addi r5, r1, 0x38
/* 80115244 00112044  48 00 10 C9 */	bl xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 80115248 00112048  E3 E1 00 E8 */	psq_l f31, 232(r1), 0, qr0
/* 8011524C 0011204C  CB E1 00 E0 */	lfd f31, 0xe0(r1)
/* 80115250 00112050  E3 C1 00 D8 */	psq_l f30, 216(r1), 0, qr0
/* 80115254 00112054  CB C1 00 D0 */	lfd f30, 0xd0(r1)
/* 80115258 00112058  E3 A1 00 C8 */	psq_l f29, 200(r1), 0, qr0
/* 8011525C 0011205C  CB A1 00 C0 */	lfd f29, 0xc0(r1)
/* 80115260 00112060  83 E1 00 BC */	lwz r31, 0xbc(r1)
/* 80115264 00112064  83 C1 00 B8 */	lwz r30, 0xb8(r1)
/* 80115268 00112068  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 8011526C 0011206C  83 A1 00 B4 */	lwz r29, 0xb4(r1)
/* 80115270 00112070  7C 08 03 A6 */	mtlr r0
/* 80115274 00112074  38 21 00 F0 */	addi r1, r1, 0xf0
/* 80115278 00112078  4E 80 00 20 */	blr 

/* update_free_look__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf */
update_free_look__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf:
/* 8011527C 0011207C  38 60 00 00 */	li r3, 0
/* 80115280 00112080  4E 80 00 20 */	blr 

/* update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf */
update_animation__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf:
/* 80115284 00112084  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80115288 00112088  7C 08 02 A6 */	mflr r0
/* 8011528C 0011208C  90 01 00 64 */	stw r0, 0x64(r1)
/* 80115290 00112090  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80115294 00112094  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 80115298 00112098  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 8011529C 0011209C  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 801152A0 001120A0  BF 61 00 2C */	stmw r27, 0x2c(r1)
/* 801152A4 001120A4  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 801152A8 001120A8  3C A0 80 3C */	lis r5, globals@ha
/* 801152AC 001120AC  3B E4 7A 68 */	addi r31, r4, lbl_80297A68@l
/* 801152B0 001120B0  FF E0 08 90 */	fmr f31, f1
/* 801152B4 001120B4  80 1F 01 98 */	lwz r0, 0x198(r31)
/* 801152B8 001120B8  3B C5 05 58 */	addi r30, r5, globals@l
/* 801152BC 001120BC  80 9E 07 04 */	lwz r4, 0x704(r30)
/* 801152C0 001120C0  7C 7C 1B 78 */	mr r28, r3
/* 801152C4 001120C4  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 801152C8 001120C8  83 A4 00 0C */	lwz r29, 0xc(r4)
/* 801152CC 001120CC  41 82 00 60 */	beq lbl_8011532C
/* 801152D0 001120D0  80 7D 00 08 */	lwz r3, 8(r29)
/* 801152D4 001120D4  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 801152D8 001120D8  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 801152DC 001120DC  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 801152E0 001120E0  40 82 00 4C */	bne lbl_8011532C
/* 801152E4 001120E4  4B F2 C8 F9 */	bl xScrFxIsFading__Fv
/* 801152E8 001120E8  2C 03 00 00 */	cmpwi r3, 0
/* 801152EC 001120EC  40 82 00 40 */	bne lbl_8011532C
/* 801152F0 001120F0  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 801152F4 001120F4  3C 80 80 3C */	lis r4, globals@ha
/* 801152F8 001120F8  38 A3 37 88 */	addi r5, r3, lbl_80313788@l
/* 801152FC 001120FC  C0 25 00 18 */	lfs f1, 0x18(r5)
/* 80115300 00112100  38 C4 05 58 */	addi r6, r4, globals@l
/* 80115304 00112104  38 61 00 08 */	addi r3, r1, 8
/* 80115308 00112108  38 81 00 0C */	addi r4, r1, 0xc
/* 8011530C 0011210C  D0 26 17 08 */	stfs f1, 0x1708(r6)
/* 80115310 00112110  38 A0 00 00 */	li r5, 0
/* 80115314 00112114  38 C0 00 01 */	li r6, 1
/* 80115318 00112118  80 02 9E 9C */	lwz r0, lbl_803CE81C-_SDA2_BASE_(r2)
/* 8011531C 0011211C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80115320 00112120  80 02 BF 40 */	lwz r0, lbl_803D08C0-_SDA2_BASE_(r2)
/* 80115324 00112124  90 01 00 08 */	stw r0, 8(r1)
/* 80115328 00112128  4B F2 C7 F1 */	bl xScrFxFade__FP10iColor_tagP10iColor_tagfPFv_vi
lbl_8011532C:
/* 8011532C 0011212C  80 DE 07 04 */	lwz r6, 0x704(r30)
/* 80115330 00112130  7F 84 E3 78 */	mr r4, r28
/* 80115334 00112134  38 61 00 10 */	addi r3, r1, 0x10
/* 80115338 00112138  38 BC 00 08 */	addi r5, r28, 8
/* 8011533C 0011213C  83 66 00 4C */	lwz r27, 0x4c(r6)
/* 80115340 00112140  4B FF EB F1 */	bl local_to_world__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFRC5xVec3
/* 80115344 00112144  38 7B 00 30 */	addi r3, r27, 0x30
/* 80115348 00112148  38 81 00 10 */	addi r4, r1, 0x10
/* 8011534C 0011214C  4B EF 5F 19 */	bl __as__5xVec3FRC5xVec3
/* 80115350 00112150  C0 42 9E A0 */	lfs f2, lbl_803CE820-_SDA2_BASE_(r2)
/* 80115354 00112154  7F 63 DB 78 */	mr r3, r27
/* 80115358 00112158  C0 3C 00 6C */	lfs f1, 0x6c(r28)
/* 8011535C 0011215C  FC 60 10 90 */	fmr f3, f2
/* 80115360 00112160  4B F1 CE 71 */	bl xMat3x3Euler__FP7xMat3x3fff
/* 80115364 00112164  C0 5C 01 54 */	lfs f2, 0x154(r28)
/* 80115368 00112168  C0 3C 00 0C */	lfs f1, 0xc(r28)
/* 8011536C 0011216C  C0 1C 01 58 */	lfs f0, 0x158(r28)
/* 80115370 00112170  EC 61 10 28 */	fsubs f3, f1, f2
/* 80115374 00112174  C0 3C 00 68 */	lfs f1, 0x68(r28)
/* 80115378 00112178  EC 40 10 28 */	fsubs f2, f0, f2
/* 8011537C 0011217C  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80115380 00112180  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80115384 00112184  EF C3 10 24 */	fdivs f30, f3, f2
/* 80115388 00112188  40 81 00 18 */	ble lbl_801153A0
/* 8011538C 0011218C  80 1F 01 98 */	lwz r0, 0x198(r31)
/* 80115390 00112190  54 00 07 B2 */	rlwinm r0, r0, 0, 0x1e, 0x19
/* 80115394 00112194  60 00 00 01 */	ori r0, r0, 1
/* 80115398 00112198  90 1F 01 98 */	stw r0, 0x198(r31)
/* 8011539C 0011219C  48 00 00 5C */	b lbl_801153F8
lbl_801153A0:
/* 801153A0 001121A0  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 801153A4 001121A4  38 63 37 88 */	addi r3, r3, lbl_80313788@l
/* 801153A8 001121A8  C0 03 00 04 */	lfs f0, 4(r3)
/* 801153AC 001121AC  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 801153B0 001121B0  4C 40 13 82 */	cror 2, 0, 2
/* 801153B4 001121B4  40 82 00 1C */	bne lbl_801153D0
/* 801153B8 001121B8  80 7F 01 98 */	lwz r3, 0x198(r31)
/* 801153BC 001121BC  38 00 FF CC */	li r0, -52
/* 801153C0 001121C0  7C 60 00 38 */	and r0, r3, r0
/* 801153C4 001121C4  60 00 00 04 */	ori r0, r0, 4
/* 801153C8 001121C8  90 1F 01 98 */	stw r0, 0x198(r31)
/* 801153CC 001121CC  48 00 00 2C */	b lbl_801153F8
lbl_801153D0:
/* 801153D0 001121D0  C0 22 9E 88 */	lfs f1, lbl_803CE808-_SDA2_BASE_(r2)
/* 801153D4 001121D4  C0 03 00 00 */	lfs f0, 0(r3)
/* 801153D8 001121D8  EC 01 00 28 */	fsubs f0, f1, f0
/* 801153DC 001121DC  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 801153E0 001121E0  4C 41 13 82 */	cror 2, 1, 2
/* 801153E4 001121E4  40 82 00 14 */	bne lbl_801153F8
/* 801153E8 001121E8  80 1F 01 98 */	lwz r0, 0x198(r31)
/* 801153EC 001121EC  54 00 00 36 */	rlwinm r0, r0, 0, 0, 0x1b
/* 801153F0 001121F0  60 00 00 10 */	ori r0, r0, 0x10
/* 801153F4 001121F4  90 1F 01 98 */	stw r0, 0x198(r31)
lbl_801153F8:
/* 801153F8 001121F8  80 1F 01 98 */	lwz r0, 0x198(r31)
/* 801153FC 001121FC  28 00 00 20 */	cmplwi r0, 0x20
/* 80115400 00112200  41 81 01 14 */	bgt lbl_80115514
/* 80115404 00112204  3C 60 80 29 */	lis r3, lbl_80297C58@ha
/* 80115408 00112208  54 00 10 3A */	slwi r0, r0, 2
/* 8011540C 0011220C  38 63 7C 58 */	addi r3, r3, lbl_80297C58@l
/* 80115410 00112210  7C 03 00 2E */	lwzx r0, r3, r0
/* 80115414 00112214  7C 09 03 A6 */	mtctr r0
/* 80115418 00112218  4E 80 04 20 */	bctr 
/* 8011541C 0011221C  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80115420 00112220  38 60 00 03 */	li r3, 3
/* 80115424 00112224  4B FF AE 95 */	bl play_sound__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FQ312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_10sound_enumf
/* 80115428 00112228  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 8011542C 0011222C  38 60 00 00 */	li r3, 0
/* 80115430 00112230  4B FF AE 89 */	bl play_sound__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FQ312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_10sound_enumf
/* 80115434 00112234  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 80115438 00112238  7F A3 EB 78 */	mr r3, r29
/* 8011543C 0011223C  38 84 7A 68 */	addi r4, r4, lbl_80297A68@l
/* 80115440 00112240  80 84 00 20 */	lwz r4, 0x20(r4)
/* 80115444 00112244  4B EF 36 01 */	bl xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition
/* 80115448 00112248  80 1F 01 98 */	lwz r0, 0x198(r31)
/* 8011544C 0011224C  60 00 00 02 */	ori r0, r0, 2
/* 80115450 00112250  90 1F 01 98 */	stw r0, 0x198(r31)
/* 80115454 00112254  48 00 00 C0 */	b lbl_80115514
/* 80115458 00112258  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 8011545C 0011225C  7F A3 EB 78 */	mr r3, r29
/* 80115460 00112260  38 84 7A 68 */	addi r4, r4, lbl_80297A68@l
/* 80115464 00112264  80 84 00 24 */	lwz r4, 0x24(r4)
/* 80115468 00112268  4B EF 35 DD */	bl xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition
/* 8011546C 0011226C  80 1F 01 98 */	lwz r0, 0x198(r31)
/* 80115470 00112270  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 80115474 00112274  90 1F 01 98 */	stw r0, 0x198(r31)
/* 80115478 00112278  48 00 00 9C */	b lbl_80115514
/* 8011547C 0011227C  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80115480 00112280  38 60 00 04 */	li r3, 4
/* 80115484 00112284  4B FF AE 35 */	bl play_sound__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FQ312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_10sound_enumf
/* 80115488 00112288  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 8011548C 0011228C  7F A3 EB 78 */	mr r3, r29
/* 80115490 00112290  38 84 7A 68 */	addi r4, r4, lbl_80297A68@l
/* 80115494 00112294  80 84 00 28 */	lwz r4, 0x28(r4)
/* 80115498 00112298  4B EF 35 AD */	bl xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition
/* 8011549C 0011229C  80 1F 01 98 */	lwz r0, 0x198(r31)
/* 801154A0 001122A0  60 00 00 08 */	ori r0, r0, 8
/* 801154A4 001122A4  90 1F 01 98 */	stw r0, 0x198(r31)
/* 801154A8 001122A8  48 00 00 6C */	b lbl_80115514
/* 801154AC 001122AC  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 801154B0 001122B0  7F A3 EB 78 */	mr r3, r29
/* 801154B4 001122B4  38 84 7A 68 */	addi r4, r4, lbl_80297A68@l
/* 801154B8 001122B8  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 801154BC 001122BC  4B EF 35 89 */	bl xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition
/* 801154C0 001122C0  80 1F 01 98 */	lwz r0, 0x198(r31)
/* 801154C4 001122C4  54 00 07 76 */	rlwinm r0, r0, 0, 0x1d, 0x1b
/* 801154C8 001122C8  90 1F 01 98 */	stw r0, 0x198(r31)
/* 801154CC 001122CC  48 00 00 48 */	b lbl_80115514
/* 801154D0 001122D0  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 801154D4 001122D4  7F A3 EB 78 */	mr r3, r29
/* 801154D8 001122D8  38 84 7A 68 */	addi r4, r4, lbl_80297A68@l
/* 801154DC 001122DC  80 84 00 30 */	lwz r4, 0x30(r4)
/* 801154E0 001122E0  4B EF 35 65 */	bl xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition
/* 801154E4 001122E4  80 1F 01 98 */	lwz r0, 0x198(r31)
/* 801154E8 001122E8  60 00 00 20 */	ori r0, r0, 0x20
/* 801154EC 001122EC  90 1F 01 98 */	stw r0, 0x198(r31)
/* 801154F0 001122F0  48 00 00 24 */	b lbl_80115514
/* 801154F4 001122F4  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 801154F8 001122F8  7F A3 EB 78 */	mr r3, r29
/* 801154FC 001122FC  38 84 7A 68 */	addi r4, r4, lbl_80297A68@l
/* 80115500 00112300  80 84 00 34 */	lwz r4, 0x34(r4)
/* 80115504 00112304  4B EF 35 41 */	bl xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition
/* 80115508 00112308  80 1F 01 98 */	lwz r0, 0x198(r31)
/* 8011550C 0011230C  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 80115510 00112310  90 1F 01 98 */	stw r0, 0x198(r31)
lbl_80115514:
/* 80115514 00112314  80 7F 01 98 */	lwz r3, 0x198(r31)
/* 80115518 00112318  38 00 FF EA */	li r0, -22
/* 8011551C 0011231C  7C 60 00 39 */	and. r0, r3, r0
/* 80115520 00112320  90 1F 01 98 */	stw r0, 0x198(r31)
/* 80115524 00112324  40 82 00 58 */	bne lbl_8011557C
/* 80115528 00112328  C0 3C 01 98 */	lfs f1, 0x198(r28)
/* 8011552C 0011232C  7F 83 E3 78 */	mr r3, r28
/* 80115530 00112330  C0 42 9E 88 */	lfs f2, lbl_803CE808-_SDA2_BASE_(r2)
/* 80115534 00112334  FC C0 08 90 */	fmr f6, f1
/* 80115538 00112338  C0 7C 01 9C */	lfs f3, 0x19c(r28)
/* 8011553C 0011233C  C0 9C 01 A0 */	lfs f4, 0x1a0(r28)
/* 80115540 00112340  C0 BC 01 4C */	lfs f5, 0x14c(r28)
/* 80115544 00112344  4B FF B7 F5 */	bl spring_velocity__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFffffff
/* 80115548 00112348  C0 1C 00 18 */	lfs f0, 0x18(r28)
/* 8011554C 0011234C  80 7E 07 04 */	lwz r3, 0x704(r30)
/* 80115550 00112350  EC 20 08 24 */	fdivs f1, f0, f1
/* 80115554 00112354  C0 02 9E B4 */	lfs f0, lbl_803CE834-_SDA2_BASE_(r2)
/* 80115558 00112358  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8011555C 0011235C  80 63 00 08 */	lwz r3, 8(r3)
/* 80115560 00112360  EC 00 07 B2 */	fmuls f0, f0, f30
/* 80115564 00112364  FC 20 0A 10 */	fabs f1, f1
/* 80115568 00112368  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 8011556C 0011236C  FC 20 08 18 */	frsp f1, f1
/* 80115570 00112370  C0 02 9E B0 */	lfs f0, lbl_803CE830-_SDA2_BASE_(r2)
/* 80115574 00112374  EC 00 00 72 */	fmuls f0, f0, f1
/* 80115578 00112378  D0 03 00 14 */	stfs f0, 0x14(r3)
lbl_8011557C:
/* 8011557C 0011237C  3C 60 80 29 */	lis r3, lbl_80297A68@ha
/* 80115580 00112380  38 63 7A 68 */	addi r3, r3, lbl_80297A68@l
/* 80115584 00112384  38 63 01 74 */	addi r3, r3, 0x174
/* 80115588 00112388  4B FF B0 5D */	bl move_wedgie__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FRC5xVec3
/* 8011558C 0011238C  FC 20 F8 90 */	fmr f1, f31
/* 80115590 00112390  80 7E 07 04 */	lwz r3, 0x704(r30)
/* 80115594 00112394  4B F1 EF 39 */	bl xModelUpdate__FP14xModelInstancef
/* 80115598 00112398  80 7E 07 04 */	lwz r3, 0x704(r30)
/* 8011559C 0011239C  4B F1 F1 15 */	bl xModelEval__FP14xModelInstance
/* 801155A0 001123A0  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 801155A4 001123A4  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 801155A8 001123A8  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 801155AC 001123AC  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 801155B0 001123B0  BB 61 00 2C */	lmw r27, 0x2c(r1)
/* 801155B4 001123B4  80 01 00 64 */	lwz r0, 0x64(r1)
/* 801155B8 001123B8  7C 08 03 A6 */	mtlr r0
/* 801155BC 001123BC  38 21 00 60 */	addi r1, r1, 0x60
/* 801155C0 001123C0  4E 80 00 20 */	blr 

/* update_movement__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf */
update_movement__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf:
/* 801155C4 001123C4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801155C8 001123C8  7C 08 02 A6 */	mflr r0
/* 801155CC 001123CC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801155D0 001123D0  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 801155D4 001123D4  FF E0 08 90 */	fmr f31, f1
/* 801155D8 001123D8  93 E1 00 14 */	stw r31, 0x14(r1)
/* 801155DC 001123DC  7C 7F 1B 78 */	mr r31, r3
/* 801155E0 001123E0  48 00 05 85 */	bl update_heading__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf
/* 801155E4 001123E4  FC 20 F8 90 */	fmr f1, f31
/* 801155E8 001123E8  7F E3 FB 78 */	mr r3, r31
/* 801155EC 001123EC  48 00 01 41 */	bl update_vmovement__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf
/* 801155F0 001123F0  FC 20 F8 90 */	fmr f1, f31
/* 801155F4 001123F4  7F E3 FB 78 */	mr r3, r31
/* 801155F8 001123F8  48 00 00 1D */	bl update_hmovement__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf
/* 801155FC 001123FC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80115600 00112400  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80115604 00112404  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 80115608 00112408  7C 08 03 A6 */	mtlr r0
/* 8011560C 0011240C  38 21 00 20 */	addi r1, r1, 0x20
/* 80115610 00112410  4E 80 00 20 */	blr 

/* update_hmovement__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf */
update_hmovement__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf:
/* 80115614 00112414  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80115618 00112418  7C 08 02 A6 */	mflr r0
/* 8011561C 0011241C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80115620 00112420  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80115624 00112424  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 80115628 00112428  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011562C 0011242C  7C 7F 1B 78 */	mr r31, r3
/* 80115630 00112430  FF E0 08 90 */	fmr f31, f1
/* 80115634 00112434  C0 03 00 74 */	lfs f0, 0x74(r3)
/* 80115638 00112438  38 9F 00 08 */	addi r4, r31, 8
/* 8011563C 0011243C  C0 23 00 08 */	lfs f1, 8(r3)
/* 80115640 00112440  38 BF 00 14 */	addi r5, r31, 0x14
/* 80115644 00112444  FC 60 F8 90 */	fmr f3, f31
/* 80115648 00112448  FC 80 00 50 */	fneg f4, f0
/* 8011564C 0011244C  C0 43 00 14 */	lfs f2, 0x14(r3)
/* 80115650 00112450  48 00 00 45 */	bl update_hmovement__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRfRfffff
/* 80115654 00112454  C0 1F 00 78 */	lfs f0, 0x78(r31)
/* 80115658 00112458  FC 60 F8 90 */	fmr f3, f31
/* 8011565C 0011245C  C0 3F 00 10 */	lfs f1, 0x10(r31)
/* 80115660 00112460  7F E3 FB 78 */	mr r3, r31
/* 80115664 00112464  FC 80 00 50 */	fneg f4, f0
/* 80115668 00112468  C0 5F 00 1C */	lfs f2, 0x1c(r31)
/* 8011566C 0011246C  38 9F 00 10 */	addi r4, r31, 0x10
/* 80115670 00112470  38 BF 00 1C */	addi r5, r31, 0x1c
/* 80115674 00112474  48 00 00 21 */	bl update_hmovement__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRfRfffff
/* 80115678 00112478  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 8011567C 0011247C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80115680 00112480  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80115684 00112484  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80115688 00112488  7C 08 03 A6 */	mtlr r0
/* 8011568C 0011248C  38 21 00 20 */	addi r1, r1, 0x20
/* 80115690 00112490  4E 80 00 20 */	blr 

/* update_hmovement__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRfRfffff */
update_hmovement__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRfRfffff:
/* 80115694 00112494  3C C0 80 31 */	lis r6, lbl_80313788@ha
/* 80115698 00112498  C0 E3 01 60 */	lfs f7, 0x160(r3)
/* 8011569C 0011249C  38 C6 37 88 */	addi r6, r6, lbl_80313788@l
/* 801156A0 001124A0  C0 C2 9E 88 */	lfs f6, lbl_803CE808-_SDA2_BASE_(r2)
/* 801156A4 001124A4  C0 A6 00 30 */	lfs f5, 0x30(r6)
/* 801156A8 001124A8  EC 07 01 32 */	fmuls f0, f7, f4
/* 801156AC 001124AC  EC 86 28 2A */	fadds f4, f6, f5
/* 801156B0 001124B0  EC 84 00 32 */	fmuls f4, f4, f0
/* 801156B4 001124B4  FC 04 38 40 */	fcmpo cr0, f4, f7
/* 801156B8 001124B8  40 81 00 0C */	ble lbl_801156C4
/* 801156BC 001124BC  FC 80 38 90 */	fmr f4, f7
/* 801156C0 001124C0  48 00 00 14 */	b lbl_801156D4
lbl_801156C4:
/* 801156C4 001124C4  FC 00 38 50 */	fneg f0, f7
/* 801156C8 001124C8  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 801156CC 001124CC  40 80 00 08 */	bge lbl_801156D4
/* 801156D0 001124D0  FC 80 00 90 */	fmr f4, f0
lbl_801156D4:
/* 801156D4 001124D4  3C C0 80 31 */	lis r6, lbl_80313788@ha
/* 801156D8 001124D8  C0 A3 00 84 */	lfs f5, 0x84(r3)
/* 801156DC 001124DC  38 66 37 88 */	addi r3, r6, lbl_80313788@l
/* 801156E0 001124E0  EC 04 08 28 */	fsubs f0, f4, f1
/* 801156E4 001124E4  C0 83 00 34 */	lfs f4, 0x34(r3)
/* 801156E8 001124E8  EC 85 01 32 */	fmuls f4, f5, f4
/* 801156EC 001124EC  EC 84 00 32 */	fmuls f4, f4, f0
/* 801156F0 001124F0  EC 04 10 FA */	fmadds f0, f4, f3, f2
/* 801156F4 001124F4  D0 05 00 00 */	stfs f0, 0(r5)
/* 801156F8 001124F8  C0 42 9E 8C */	lfs f2, lbl_803CE80C-_SDA2_BASE_(r2)
/* 801156FC 001124FC  C0 05 00 00 */	lfs f0, 0(r5)
/* 80115700 00112500  EC 42 01 32 */	fmuls f2, f2, f4
/* 80115704 00112504  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80115708 00112508  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8011570C 0011250C  EC 03 00 BA */	fmadds f0, f3, f2, f0
/* 80115710 00112510  EC 01 00 2A */	fadds f0, f1, f0
/* 80115714 00112514  D0 04 00 00 */	stfs f0, 0(r4)
/* 80115718 00112518  C0 25 00 00 */	lfs f1, 0(r5)
/* 8011571C 0011251C  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 80115720 00112520  EC 01 00 32 */	fmuls f0, f1, f0
/* 80115724 00112524  D0 05 00 00 */	stfs f0, 0(r5)
/* 80115728 00112528  4E 80 00 20 */	blr 

/* update_vmovement__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf */
update_vmovement__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf:
/* 8011572C 0011252C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80115730 00112530  7C 08 02 A6 */	mflr r0
/* 80115734 00112534  90 01 00 44 */	stw r0, 0x44(r1)
/* 80115738 00112538  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8011573C 0011253C  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 80115740 00112540  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 80115744 00112544  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 80115748 00112548  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8011574C 0011254C  7C 7F 1B 78 */	mr r31, r3
/* 80115750 00112550  FF C0 08 90 */	fmr f30, f1
/* 80115754 00112554  88 03 00 B9 */	lbz r0, 0xb9(r3)
/* 80115758 00112558  28 00 00 00 */	cmplwi r0, 0
/* 8011575C 0011255C  41 82 00 6C */	beq lbl_801157C8
/* 80115760 00112560  3C 80 80 3C */	lis r4, globals@ha
/* 80115764 00112564  38 84 05 58 */	addi r4, r4, globals@l
/* 80115768 00112568  80 84 03 1C */	lwz r4, 0x31c(r4)
/* 8011576C 0011256C  80 04 00 30 */	lwz r0, 0x30(r4)
/* 80115770 00112570  54 00 03 DF */	rlwinm. r0, r0, 0, 0xf, 0xf
/* 80115774 00112574  41 82 00 54 */	beq lbl_801157C8
/* 80115778 00112578  C0 1F 00 B0 */	lfs f0, 0xb0(r31)
/* 8011577C 0011257C  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80115780 00112580  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80115784 00112584  4C 40 13 82 */	cror 2, 0, 2
/* 80115788 00112588  40 82 00 40 */	bne lbl_801157C8
/* 8011578C 0011258C  88 1F 00 AC */	lbz r0, 0xac(r31)
/* 80115790 00112590  28 00 00 00 */	cmplwi r0, 0
/* 80115794 00112594  40 82 00 34 */	bne lbl_801157C8
/* 80115798 00112598  C0 1F 00 68 */	lfs f0, 0x68(r31)
/* 8011579C 0011259C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 801157A0 001125A0  4C 40 13 82 */	cror 2, 0, 2
/* 801157A4 001125A4  40 82 00 24 */	bne lbl_801157C8
/* 801157A8 001125A8  38 00 00 01 */	li r0, 1
/* 801157AC 001125AC  38 80 00 00 */	li r4, 0
/* 801157B0 001125B0  98 1F 00 B8 */	stb r0, 0xb8(r31)
/* 801157B4 001125B4  4B FF E1 91 */	bl allow_dive__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFb
/* 801157B8 001125B8  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 801157BC 001125BC  38 63 37 88 */	addi r3, r3, lbl_80313788@l
/* 801157C0 001125C0  C0 03 00 3C */	lfs f0, 0x3c(r3)
/* 801157C4 001125C4  D0 1F 00 68 */	stfs f0, 0x68(r31)
lbl_801157C8:
/* 801157C8 001125C8  C0 3F 00 68 */	lfs f1, 0x68(r31)
/* 801157CC 001125CC  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 801157D0 001125D0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801157D4 001125D4  40 81 00 B4 */	ble lbl_80115888
/* 801157D8 001125D8  EC 01 F0 28 */	fsubs f0, f1, f30
/* 801157DC 001125DC  D0 1F 00 68 */	stfs f0, 0x68(r31)
/* 801157E0 001125E0  C0 1F 00 68 */	lfs f0, 0x68(r31)
/* 801157E4 001125E4  C0 42 9E A0 */	lfs f2, lbl_803CE820-_SDA2_BASE_(r2)
/* 801157E8 001125E8  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 801157EC 001125EC  40 80 00 18 */	bge lbl_80115804
/* 801157F0 001125F0  EC 1E 00 2A */	fadds f0, f30, f0
/* 801157F4 001125F4  C0 3F 01 50 */	lfs f1, 0x150(r31)
/* 801157F8 001125F8  D0 5F 00 68 */	stfs f2, 0x68(r31)
/* 801157FC 001125FC  EF E1 00 32 */	fmuls f31, f1, f0
/* 80115800 00112600  48 00 00 0C */	b lbl_8011580C
lbl_80115804:
/* 80115804 00112604  C0 1F 01 50 */	lfs f0, 0x150(r31)
/* 80115808 00112608  EF E0 07 B2 */	fmuls f31, f0, f30
lbl_8011580C:
/* 8011580C 0011260C  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 80115810 00112610  7F E3 FB 78 */	mr r3, r31
/* 80115814 00112614  C0 5F 00 18 */	lfs f2, 0x18(r31)
/* 80115818 00112618  C0 7F 01 A0 */	lfs f3, 0x1a0(r31)
/* 8011581C 0011261C  C0 9F 01 4C */	lfs f4, 0x14c(r31)
/* 80115820 00112620  C0 BF 01 98 */	lfs f5, 0x198(r31)
/* 80115824 00112624  4B FF B6 31 */	bl spring_energy__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFfffff
/* 80115828 00112628  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 8011582C 0011262C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80115830 00112630  40 80 00 58 */	bge lbl_80115888
/* 80115834 00112634  C0 1F 00 18 */	lfs f0, 0x18(r31)
/* 80115838 00112638  7F E3 FB 78 */	mr r3, r31
/* 8011583C 0011263C  EC 00 F8 2A */	fadds f0, f0, f31
/* 80115840 00112640  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80115844 00112644  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 80115848 00112648  C0 5F 00 18 */	lfs f2, 0x18(r31)
/* 8011584C 0011264C  C0 7F 01 A0 */	lfs f3, 0x1a0(r31)
/* 80115850 00112650  C0 9F 01 4C */	lfs f4, 0x14c(r31)
/* 80115854 00112654  C0 BF 01 98 */	lfs f5, 0x198(r31)
/* 80115858 00112658  4B FF B5 FD */	bl spring_energy__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFfffff
/* 8011585C 0011265C  C0 7F 01 9C */	lfs f3, 0x19c(r31)
/* 80115860 00112660  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 80115864 00112664  40 81 00 24 */	ble lbl_80115888
/* 80115868 00112668  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 8011586C 0011266C  7F E3 FB 78 */	mr r3, r31
/* 80115870 00112670  C0 5F 00 18 */	lfs f2, 0x18(r31)
/* 80115874 00112674  C0 9F 01 A0 */	lfs f4, 0x1a0(r31)
/* 80115878 00112678  C0 BF 01 4C */	lfs f5, 0x14c(r31)
/* 8011587C 0011267C  C0 DF 01 98 */	lfs f6, 0x198(r31)
/* 80115880 00112680  4B FF B4 B9 */	bl spring_velocity__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFffffff
/* 80115884 00112684  D0 3F 00 18 */	stfs f1, 0x18(r31)
lbl_80115888:
/* 80115888 00112688  FC 60 F0 90 */	fmr f3, f30
/* 8011588C 0011268C  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 80115890 00112690  C0 5F 00 18 */	lfs f2, 0x18(r31)
/* 80115894 00112694  7F E3 FB 78 */	mr r3, r31
/* 80115898 00112698  C0 9F 01 98 */	lfs f4, 0x198(r31)
/* 8011589C 0011269C  38 9F 00 0C */	addi r4, r31, 0xc
/* 801158A0 001126A0  C0 BF 01 A4 */	lfs f5, 0x1a4(r31)
/* 801158A4 001126A4  38 A1 00 08 */	addi r5, r1, 8
/* 801158A8 001126A8  C0 DF 01 A8 */	lfs f6, 0x1a8(r31)
/* 801158AC 001126AC  38 C1 00 0C */	addi r6, r1, 0xc
/* 801158B0 001126B0  48 00 01 55 */	bl calc_movement__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRfRfRfffffff
/* 801158B4 001126B4  C0 41 00 08 */	lfs f2, 8(r1)
/* 801158B8 001126B8  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 801158BC 001126BC  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 801158C0 001126C0  EC 22 08 28 */	fsubs f1, f2, f1
/* 801158C4 001126C4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801158C8 001126C8  40 80 00 68 */	bge lbl_80115930
/* 801158CC 001126CC  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 801158D0 001126D0  C0 1F 01 54 */	lfs f0, 0x154(r31)
/* 801158D4 001126D4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801158D8 001126D8  40 80 00 58 */	bge lbl_80115930
/* 801158DC 001126DC  C0 7F 01 A0 */	lfs f3, 0x1a0(r31)
/* 801158E0 001126E0  7F E3 FB 78 */	mr r3, r31
/* 801158E4 001126E4  C0 9F 01 4C */	lfs f4, 0x14c(r31)
/* 801158E8 001126E8  C0 BF 01 98 */	lfs f5, 0x198(r31)
/* 801158EC 001126EC  4B FF B5 69 */	bl spring_energy__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFfffff
/* 801158F0 001126F0  C0 7F 01 9C */	lfs f3, 0x19c(r31)
/* 801158F4 001126F4  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 801158F8 001126F8  40 81 00 24 */	ble lbl_8011591C
/* 801158FC 001126FC  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 80115900 00112700  7F E3 FB 78 */	mr r3, r31
/* 80115904 00112704  C0 41 00 08 */	lfs f2, 8(r1)
/* 80115908 00112708  C0 9F 01 A0 */	lfs f4, 0x1a0(r31)
/* 8011590C 0011270C  C0 BF 01 4C */	lfs f5, 0x14c(r31)
/* 80115910 00112710  C0 DF 01 98 */	lfs f6, 0x198(r31)
/* 80115914 00112714  4B FF B4 25 */	bl spring_velocity__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFffffff
/* 80115918 00112718  D0 21 00 08 */	stfs f1, 8(r1)
lbl_8011591C:
/* 8011591C 0011271C  C0 01 00 08 */	lfs f0, 8(r1)
/* 80115920 00112720  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 80115924 00112724  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80115928 00112728  40 81 00 08 */	ble lbl_80115930
/* 8011592C 0011272C  D0 21 00 08 */	stfs f1, 8(r1)
lbl_80115930:
/* 80115930 00112730  C0 01 00 08 */	lfs f0, 8(r1)
/* 80115934 00112734  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80115938 00112738  C0 22 9E 90 */	lfs f1, lbl_803CE810-_SDA2_BASE_(r2)
/* 8011593C 0011273C  C0 1F 00 A8 */	lfs f0, 0xa8(r31)
/* 80115940 00112740  C0 5F 00 18 */	lfs f2, 0x18(r31)
/* 80115944 00112744  EC 01 00 32 */	fmuls f0, f1, f0
/* 80115948 00112748  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8011594C 0011274C  40 81 00 10 */	ble lbl_8011595C
/* 80115950 00112750  38 00 00 00 */	li r0, 0
/* 80115954 00112754  98 1F 00 B8 */	stb r0, 0xb8(r31)
/* 80115958 00112758  48 00 00 88 */	b lbl_801159E0
lbl_8011595C:
/* 8011595C 0011275C  88 1F 00 B8 */	lbz r0, 0xb8(r31)
/* 80115960 00112760  28 00 00 00 */	cmplwi r0, 0
/* 80115964 00112764  40 82 00 7C */	bne lbl_801159E0
/* 80115968 00112768  C0 5F 01 54 */	lfs f2, 0x154(r31)
/* 8011596C 0011276C  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 80115970 00112770  C0 3F 01 58 */	lfs f1, 0x158(r31)
/* 80115974 00112774  38 63 37 88 */	addi r3, r3, lbl_80313788@l
/* 80115978 00112778  FC 60 10 50 */	fneg f3, f2
/* 8011597C 0011277C  C0 03 00 44 */	lfs f0, 0x44(r3)
/* 80115980 00112780  EC 81 10 28 */	fsubs f4, f1, f2
/* 80115984 00112784  C0 23 00 48 */	lfs f1, 0x48(r3)
/* 80115988 00112788  C0 5F 00 0C */	lfs f2, 0xc(r31)
/* 8011598C 0011278C  EC 04 18 3C */	fnmsubs f0, f4, f0, f3
/* 80115990 00112790  EC 24 18 7C */	fnmsubs f1, f4, f1, f3
/* 80115994 00112794  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80115998 00112798  4C 40 13 82 */	cror 2, 0, 2
/* 8011599C 0011279C  40 82 00 2C */	bne lbl_801159C8
/* 801159A0 001127A0  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 801159A4 001127A4  4C 40 13 82 */	cror 2, 0, 2
/* 801159A8 001127A8  40 82 00 20 */	bne lbl_801159C8
/* 801159AC 001127AC  88 1F 00 B9 */	lbz r0, 0xb9(r31)
/* 801159B0 001127B0  28 00 00 00 */	cmplwi r0, 0
/* 801159B4 001127B4  40 82 00 2C */	bne lbl_801159E0
/* 801159B8 001127B8  7F E3 FB 78 */	mr r3, r31
/* 801159BC 001127BC  38 80 00 01 */	li r4, 1
/* 801159C0 001127C0  4B FF DF 85 */	bl allow_dive__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFb
/* 801159C4 001127C4  48 00 00 1C */	b lbl_801159E0
lbl_801159C8:
/* 801159C8 001127C8  88 1F 00 B9 */	lbz r0, 0xb9(r31)
/* 801159CC 001127CC  28 00 00 00 */	cmplwi r0, 0
/* 801159D0 001127D0  41 82 00 10 */	beq lbl_801159E0
/* 801159D4 001127D4  7F E3 FB 78 */	mr r3, r31
/* 801159D8 001127D8  38 80 00 00 */	li r4, 0
/* 801159DC 001127DC  4B FF DF 69 */	bl allow_dive__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFb
lbl_801159E0:
/* 801159E0 001127E0  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 801159E4 001127E4  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 801159E8 001127E8  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 801159EC 001127EC  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 801159F0 001127F0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801159F4 001127F4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801159F8 001127F8  7C 08 03 A6 */	mtlr r0
/* 801159FC 001127FC  38 21 00 40 */	addi r1, r1, 0x40
/* 80115A00 00112800  4E 80 00 20 */	blr 

/* calc_movement__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRfRfRfffffff */
calc_movement__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFRfRfRfffffff:
/* 80115A04 00112804  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 80115A08 00112808  7C 08 02 A6 */	mflr r0
/* 80115A0C 0011280C  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 80115A10 00112810  DB E1 00 A0 */	stfd f31, 0xa0(r1)
/* 80115A14 00112814  F3 E1 00 A8 */	psq_st f31, 168(r1), 0, qr0
/* 80115A18 00112818  DB C1 00 90 */	stfd f30, 0x90(r1)
/* 80115A1C 0011281C  F3 C1 00 98 */	psq_st f30, 152(r1), 0, qr0
/* 80115A20 00112820  DB A1 00 80 */	stfd f29, 0x80(r1)
/* 80115A24 00112824  F3 A1 00 88 */	psq_st f29, 136(r1), 0, qr0
/* 80115A28 00112828  DB 81 00 70 */	stfd f28, 0x70(r1)
/* 80115A2C 0011282C  F3 81 00 78 */	psq_st f28, 120(r1), 0, qr0
/* 80115A30 00112830  DB 61 00 60 */	stfd f27, 0x60(r1)
/* 80115A34 00112834  F3 61 00 68 */	psq_st f27, 104(r1), 0, qr0
/* 80115A38 00112838  DB 41 00 50 */	stfd f26, 0x50(r1)
/* 80115A3C 0011283C  F3 41 00 58 */	psq_st f26, 88(r1), 0, qr0
/* 80115A40 00112840  DB 21 00 40 */	stfd f25, 0x40(r1)
/* 80115A44 00112844  F3 21 00 48 */	psq_st f25, 72(r1), 0, qr0
/* 80115A48 00112848  DB 01 00 30 */	stfd f24, 0x30(r1)
/* 80115A4C 0011284C  F3 01 00 38 */	psq_st f24, 56(r1), 0, qr0
/* 80115A50 00112850  DA E1 00 20 */	stfd f23, 0x20(r1)
/* 80115A54 00112854  F2 E1 00 28 */	psq_st f23, 40(r1), 0, qr0
/* 80115A58 00112858  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80115A5C 0011285C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80115A60 00112860  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80115A64 00112864  FF 20 18 90 */	fmr f25, f3
/* 80115A68 00112868  7C 9D 23 78 */	mr r29, r4
/* 80115A6C 0011286C  FF 00 30 90 */	fmr f24, f6
/* 80115A70 00112870  7C BE 2B 78 */	mr r30, r5
/* 80115A74 00112874  FF 40 08 90 */	fmr f26, f1
/* 80115A78 00112878  7C DF 33 78 */	mr r31, r6
/* 80115A7C 0011287C  EF B8 06 72 */	fmuls f29, f24, f25
/* 80115A80 00112880  FF C0 10 90 */	fmr f30, f2
/* 80115A84 00112884  FF E0 20 90 */	fmr f31, f4
/* 80115A88 00112888  FE E0 28 90 */	fmr f23, f5
/* 80115A8C 0011288C  FC 20 E8 90 */	fmr f1, f29
/* 80115A90 00112890  4B FA F3 BD */	bl isin__Ff
/* 80115A94 00112894  FF 80 08 90 */	fmr f28, f1
/* 80115A98 00112898  FC 20 E8 90 */	fmr f1, f29
/* 80115A9C 0011289C  4B FA F3 F5 */	bl icos__Ff
/* 80115AA0 001128A0  EF 5A F8 28 */	fsubs f26, f26, f31
/* 80115AA4 001128A4  FF A0 08 90 */	fmr f29, f1
/* 80115AA8 001128A8  EC 37 06 72 */	fmuls f1, f23, f25
/* 80115AAC 001128AC  EC 5A F5 FC */	fnmsubs f2, f26, f23, f30
/* 80115AB0 001128B0  EC 1A 06 32 */	fmuls f0, f26, f24
/* 80115AB4 001128B4  EF 22 C0 24 */	fdivs f25, f2, f24
/* 80115AB8 001128B8  EF 79 05 F8 */	fmsubs f27, f25, f23, f0
/* 80115ABC 001128BC  4B EF 8C F5 */	bl xexp__Ff
/* 80115AC0 001128C0  EC 1E 06 32 */	fmuls f0, f30, f24
/* 80115AC4 001128C4  EC 99 07 32 */	fmuls f4, f25, f28
/* 80115AC8 001128C8  EC 5B 06 32 */	fmuls f2, f27, f24
/* 80115ACC 001128CC  EC 1B 05 F8 */	fmsubs f0, f27, f23, f0
/* 80115AD0 001128D0  EC 7B 07 32 */	fmuls f3, f27, f28
/* 80115AD4 001128D4  EC 9A 27 7A */	fmadds f4, f26, f29, f4
/* 80115AD8 001128D8  EC 5E 15 FA */	fmadds f2, f30, f23, f2
/* 80115ADC 001128DC  EC 1C 00 32 */	fmuls f0, f28, f0
/* 80115AE0 001128E0  EC 7E 1F 7A */	fmadds f3, f30, f29, f3
/* 80115AE4 001128E4  EC 81 F9 3A */	fmadds f4, f1, f4, f31
/* 80115AE8 001128E8  EC 1D 00 BA */	fmadds f0, f29, f2, f0
/* 80115AEC 001128EC  EC 41 00 F2 */	fmuls f2, f1, f3
/* 80115AF0 001128F0  D0 9D 00 00 */	stfs f4, 0(r29)
/* 80115AF4 001128F4  EC 01 00 32 */	fmuls f0, f1, f0
/* 80115AF8 001128F8  D0 5E 00 00 */	stfs f2, 0(r30)
/* 80115AFC 001128FC  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80115B00 00112900  E3 E1 00 A8 */	psq_l f31, 168(r1), 0, qr0
/* 80115B04 00112904  CB E1 00 A0 */	lfd f31, 0xa0(r1)
/* 80115B08 00112908  E3 C1 00 98 */	psq_l f30, 152(r1), 0, qr0
/* 80115B0C 0011290C  CB C1 00 90 */	lfd f30, 0x90(r1)
/* 80115B10 00112910  E3 A1 00 88 */	psq_l f29, 136(r1), 0, qr0
/* 80115B14 00112914  CB A1 00 80 */	lfd f29, 0x80(r1)
/* 80115B18 00112918  E3 81 00 78 */	psq_l f28, 120(r1), 0, qr0
/* 80115B1C 0011291C  CB 81 00 70 */	lfd f28, 0x70(r1)
/* 80115B20 00112920  E3 61 00 68 */	psq_l f27, 104(r1), 0, qr0
/* 80115B24 00112924  CB 61 00 60 */	lfd f27, 0x60(r1)
/* 80115B28 00112928  E3 41 00 58 */	psq_l f26, 88(r1), 0, qr0
/* 80115B2C 0011292C  CB 41 00 50 */	lfd f26, 0x50(r1)
/* 80115B30 00112930  E3 21 00 48 */	psq_l f25, 72(r1), 0, qr0
/* 80115B34 00112934  CB 21 00 40 */	lfd f25, 0x40(r1)
/* 80115B38 00112938  E3 01 00 38 */	psq_l f24, 56(r1), 0, qr0
/* 80115B3C 0011293C  CB 01 00 30 */	lfd f24, 0x30(r1)
/* 80115B40 00112940  E2 E1 00 28 */	psq_l f23, 40(r1), 0, qr0
/* 80115B44 00112944  CA E1 00 20 */	lfd f23, 0x20(r1)
/* 80115B48 00112948  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80115B4C 0011294C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80115B50 00112950  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 80115B54 00112954  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80115B58 00112958  7C 08 03 A6 */	mtlr r0
/* 80115B5C 0011295C  38 21 00 B0 */	addi r1, r1, 0xb0
/* 80115B60 00112960  4E 80 00 20 */	blr 

/* update_heading__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf */
update_heading__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf:
/* 80115B64 00112964  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80115B68 00112968  7C 08 02 A6 */	mflr r0
/* 80115B6C 0011296C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80115B70 00112970  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80115B74 00112974  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 80115B78 00112978  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80115B7C 0011297C  7C 7F 1B 78 */	mr r31, r3
/* 80115B80 00112980  C0 62 9F 20 */	lfs f3, lbl_803CE8A0-_SDA2_BASE_(r2)
/* 80115B84 00112984  C0 43 00 7C */	lfs f2, 0x7c(r3)
/* 80115B88 00112988  FF E0 08 90 */	fmr f31, f1
/* 80115B8C 0011298C  C0 03 00 6C */	lfs f0, 0x6c(r3)
/* 80115B90 00112990  EC 23 10 28 */	fsubs f1, f3, f2
/* 80115B94 00112994  EC 21 00 28 */	fsubs f1, f1, f0
/* 80115B98 00112998  4B EF 8C 5D */	bl xrmod__Ff
/* 80115B9C 0011299C  C0 02 9F 0C */	lfs f0, lbl_803CE88C-_SDA2_BASE_(r2)
/* 80115BA0 001129A0  3C 60 80 31 */	lis r3, lbl_80313788@ha
/* 80115BA4 001129A4  38 63 37 88 */	addi r3, r3, lbl_80313788@l
/* 80115BA8 001129A8  C0 5F 00 84 */	lfs f2, 0x84(r31)
/* 80115BAC 001129AC  EC 21 00 28 */	fsubs f1, f1, f0
/* 80115BB0 001129B0  C0 63 00 50 */	lfs f3, 0x50(r3)
/* 80115BB4 001129B4  C0 9F 00 80 */	lfs f4, 0x80(r31)
/* 80115BB8 001129B8  C0 1F 00 70 */	lfs f0, 0x70(r31)
/* 80115BBC 001129BC  EC 22 00 72 */	fmuls f1, f2, f1
/* 80115BC0 001129C0  EC 23 00 72 */	fmuls f1, f3, f1
/* 80115BC4 001129C4  EC 24 00 72 */	fmuls f1, f4, f1
/* 80115BC8 001129C8  EC 1F 00 7A */	fmadds f0, f31, f1, f0
/* 80115BCC 001129CC  D0 1F 00 70 */	stfs f0, 0x70(r31)
/* 80115BD0 001129D0  C0 3F 00 70 */	lfs f1, 0x70(r31)
/* 80115BD4 001129D4  C0 1F 00 6C */	lfs f0, 0x6c(r31)
/* 80115BD8 001129D8  EC 01 07 FA */	fmadds f0, f1, f31, f0
/* 80115BDC 001129DC  D0 1F 00 6C */	stfs f0, 0x6c(r31)
/* 80115BE0 001129E0  C0 3F 00 70 */	lfs f1, 0x70(r31)
/* 80115BE4 001129E4  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80115BE8 001129E8  EC 01 00 32 */	fmuls f0, f1, f0
/* 80115BEC 001129EC  D0 1F 00 70 */	stfs f0, 0x70(r31)
/* 80115BF0 001129F0  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 80115BF4 001129F4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80115BF8 001129F8  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80115BFC 001129FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80115C00 00112A00  7C 08 03 A6 */	mtlr r0
/* 80115C04 00112A04  38 21 00 20 */	addi r1, r1, 0x20
/* 80115C08 00112A08  4E 80 00 20 */	blr 

/* detach_update__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFR6xSceneRf */
detach_update__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFR6xSceneRf:
/* 80115C0C 00112A0C  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 80115C10 00112A10  7C 08 02 A6 */	mflr r0
/* 80115C14 00112A14  90 01 00 94 */	stw r0, 0x94(r1)
/* 80115C18 00112A18  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 80115C1C 00112A1C  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 80115C20 00112A20  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 80115C24 00112A24  93 C1 00 78 */	stw r30, 0x78(r1)
/* 80115C28 00112A28  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 80115C2C 00112A2C  7C 7E 1B 78 */	mr r30, r3
/* 80115C30 00112A30  38 84 7A 68 */	addi r4, r4, lbl_80297A68@l
/* 80115C34 00112A34  7C BF 2B 78 */	mr r31, r5
/* 80115C38 00112A38  38 7E 00 2C */	addi r3, r30, 0x2c
/* 80115C3C 00112A3C  38 84 01 74 */	addi r4, r4, 0x174
/* 80115C40 00112A40  4B EF 56 25 */	bl __as__5xVec3FRC5xVec3
/* 80115C44 00112A44  4B FF AB 29 */	bl update_hook_loc__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fv
/* 80115C48 00112A48  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80115C4C 00112A4C  38 7E 00 20 */	addi r3, r30, 0x20
/* 80115C50 00112A50  38 9E 00 08 */	addi r4, r30, 8
/* 80115C54 00112A54  D0 1E 00 78 */	stfs f0, 0x78(r30)
/* 80115C58 00112A58  D0 1E 00 74 */	stfs f0, 0x74(r30)
/* 80115C5C 00112A5C  4B EF 56 09 */	bl __as__5xVec3FRC5xVec3
/* 80115C60 00112A60  38 61 00 54 */	addi r3, r1, 0x54
/* 80115C64 00112A64  38 9E 00 08 */	addi r4, r30, 8
/* 80115C68 00112A68  48 00 06 45 */	bl normal__5xVec3CFv
/* 80115C6C 00112A6C  C0 1E 01 3C */	lfs f0, 0x13c(r30)
/* 80115C70 00112A70  38 61 00 60 */	addi r3, r1, 0x60
/* 80115C74 00112A74  38 81 00 54 */	addi r4, r1, 0x54
/* 80115C78 00112A78  FC 20 00 50 */	fneg f1, f0
/* 80115C7C 00112A7C  4B EF 54 A5 */	bl __ml__5xVec3CFf
/* 80115C80 00112A80  80 C1 00 60 */	lwz r6, 0x60(r1)
/* 80115C84 00112A84  38 61 00 48 */	addi r3, r1, 0x48
/* 80115C88 00112A88  80 A1 00 64 */	lwz r5, 0x64(r1)
/* 80115C8C 00112A8C  38 81 00 6C */	addi r4, r1, 0x6c
/* 80115C90 00112A90  80 01 00 68 */	lwz r0, 0x68(r1)
/* 80115C94 00112A94  90 C1 00 6C */	stw r6, 0x6c(r1)
/* 80115C98 00112A98  90 A1 00 70 */	stw r5, 0x70(r1)
/* 80115C9C 00112A9C  90 01 00 74 */	stw r0, 0x74(r1)
/* 80115CA0 00112AA0  C0 3F 00 00 */	lfs f1, 0(r31)
/* 80115CA4 00112AA4  4B EF 54 7D */	bl __ml__5xVec3CFf
/* 80115CA8 00112AA8  38 7E 00 14 */	addi r3, r30, 0x14
/* 80115CAC 00112AAC  38 81 00 48 */	addi r4, r1, 0x48
/* 80115CB0 00112AB0  4B EF F7 95 */	bl __apl__5xVec3FRC5xVec3
/* 80115CB4 00112AB4  C0 3F 00 00 */	lfs f1, 0(r31)
/* 80115CB8 00112AB8  38 61 00 18 */	addi r3, r1, 0x18
/* 80115CBC 00112ABC  38 9E 00 14 */	addi r4, r30, 0x14
/* 80115CC0 00112AC0  4B EF 54 61 */	bl __ml__5xVec3CFf
/* 80115CC4 00112AC4  C3 FF 00 00 */	lfs f31, 0(r31)
/* 80115CC8 00112AC8  38 61 00 24 */	addi r3, r1, 0x24
/* 80115CCC 00112ACC  38 81 00 6C */	addi r4, r1, 0x6c
/* 80115CD0 00112AD0  FC 20 F8 90 */	fmr f1, f31
/* 80115CD4 00112AD4  4B EF 54 4D */	bl __ml__5xVec3CFf
/* 80115CD8 00112AD8  FC 20 F8 90 */	fmr f1, f31
/* 80115CDC 00112ADC  38 61 00 30 */	addi r3, r1, 0x30
/* 80115CE0 00112AE0  38 81 00 24 */	addi r4, r1, 0x24
/* 80115CE4 00112AE4  4B EF 54 3D */	bl __ml__5xVec3CFf
/* 80115CE8 00112AE8  38 61 00 3C */	addi r3, r1, 0x3c
/* 80115CEC 00112AEC  38 81 00 30 */	addi r4, r1, 0x30
/* 80115CF0 00112AF0  38 A1 00 18 */	addi r5, r1, 0x18
/* 80115CF4 00112AF4  4B EF F6 ED */	bl __pl__5xVec3CFRC5xVec3
/* 80115CF8 00112AF8  38 7E 00 08 */	addi r3, r30, 8
/* 80115CFC 00112AFC  38 81 00 3C */	addi r4, r1, 0x3c
/* 80115D00 00112B00  4B EF F7 45 */	bl __apl__5xVec3FRC5xVec3
/* 80115D04 00112B04  C0 3F 00 00 */	lfs f1, 0(r31)
/* 80115D08 00112B08  7F C3 F3 78 */	mr r3, r30
/* 80115D0C 00112B0C  4B FF F5 79 */	bl update_animation__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf
/* 80115D10 00112B10  C0 3F 00 00 */	lfs f1, 0(r31)
/* 80115D14 00112B14  7F C3 F3 78 */	mr r3, r30
/* 80115D18 00112B18  48 00 00 A1 */	bl update_detach_camera__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf
/* 80115D1C 00112B1C  7F C4 F3 78 */	mr r4, r30
/* 80115D20 00112B20  38 61 00 08 */	addi r3, r1, 8
/* 80115D24 00112B24  4B FF E1 9D */	bl player_bound__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFv
/* 80115D28 00112B28  3C 60 80 3C */	lis r3, globals@ha
/* 80115D2C 00112B2C  38 81 00 08 */	addi r4, r1, 8
/* 80115D30 00112B30  38 63 05 58 */	addi r3, r3, globals@l
/* 80115D34 00112B34  38 63 07 68 */	addi r3, r3, 0x768
/* 80115D38 00112B38  4B EF 55 49 */	bl __as__7xSphereFRC7xSphere
/* 80115D3C 00112B3C  C0 3F 00 00 */	lfs f1, 0(r31)
/* 80115D40 00112B40  7F C3 F3 78 */	mr r3, r30
/* 80115D44 00112B44  4B FF E1 35 */	bl update_sound__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf
/* 80115D48 00112B48  C0 3F 00 00 */	lfs f1, 0(r31)
/* 80115D4C 00112B4C  7F C3 F3 78 */	mr r3, r30
/* 80115D50 00112B50  4B FF E0 D1 */	bl update_blur__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf
/* 80115D54 00112B54  C0 3E 00 0C */	lfs f1, 0xc(r30)
/* 80115D58 00112B58  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80115D5C 00112B5C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80115D60 00112B60  4C 41 13 82 */	cror 2, 1, 2
/* 80115D64 00112B64  41 82 00 1C */	beq lbl_80115D80
/* 80115D68 00112B68  38 7E 00 08 */	addi r3, r30, 8
/* 80115D6C 00112B6C  4B EF 53 91 */	bl length2__5xVec3CFv
/* 80115D70 00112B70  C0 02 9E 90 */	lfs f0, lbl_803CE810-_SDA2_BASE_(r2)
/* 80115D74 00112B74  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80115D78 00112B78  4C 40 13 82 */	cror 2, 0, 2
/* 80115D7C 00112B7C  40 82 00 18 */	bne lbl_80115D94
lbl_80115D80:
/* 80115D80 00112B80  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80115D84 00112B84  38 60 00 02 */	li r3, 2
/* 80115D88 00112B88  4B FF A5 31 */	bl play_sound__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_FQ312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_10sound_enumf
/* 80115D8C 00112B8C  38 60 FF FF */	li r3, -1
/* 80115D90 00112B90  48 00 00 08 */	b lbl_80115D98
lbl_80115D94:
/* 80115D94 00112B94  38 60 00 01 */	li r3, 1
lbl_80115D98:
/* 80115D98 00112B98  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 80115D9C 00112B9C  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80115DA0 00112BA0  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 80115DA4 00112BA4  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 80115DA8 00112BA8  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 80115DAC 00112BAC  7C 08 03 A6 */	mtlr r0
/* 80115DB0 00112BB0  38 21 00 90 */	addi r1, r1, 0x90
/* 80115DB4 00112BB4  4E 80 00 20 */	blr 

/* update_detach_camera__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf */
update_detach_camera__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFf:
/* 80115DB8 00112BB8  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 80115DBC 00112BBC  7C 08 02 A6 */	mflr r0
/* 80115DC0 00112BC0  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80115DC4 00112BC4  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 80115DC8 00112BC8  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 80115DCC 00112BCC  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 80115DD0 00112BD0  93 C1 00 88 */	stw r30, 0x88(r1)
/* 80115DD4 00112BD4  7C 7E 1B 78 */	mr r30, r3
/* 80115DD8 00112BD8  C0 03 00 C0 */	lfs f0, 0xc0(r3)
/* 80115DDC 00112BDC  EC 00 08 2A */	fadds f0, f0, f1
/* 80115DE0 00112BE0  D0 03 00 C0 */	stfs f0, 0xc0(r3)
/* 80115DE4 00112BE4  C0 23 00 C0 */	lfs f1, 0xc0(r3)
/* 80115DE8 00112BE8  C0 03 00 C4 */	lfs f0, 0xc4(r3)
/* 80115DEC 00112BEC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80115DF0 00112BF0  40 80 00 0C */	bge lbl_80115DFC
/* 80115DF4 00112BF4  EC 21 00 24 */	fdivs f1, f1, f0
/* 80115DF8 00112BF8  48 00 00 08 */	b lbl_80115E00
lbl_80115DFC:
/* 80115DFC 00112BFC  C0 22 9E 88 */	lfs f1, lbl_803CE808-_SDA2_BASE_(r2)
lbl_80115E00:
/* 80115E00 00112C00  4B F4 93 01 */	bl xSCurve__Ff
/* 80115E04 00112C04  FF E0 08 90 */	fmr f31, f1
/* 80115E08 00112C08  38 61 00 14 */	addi r3, r1, 0x14
/* 80115E0C 00112C0C  38 9E 00 D4 */	addi r4, r30, 0xd4
/* 80115E10 00112C10  38 BE 00 C8 */	addi r5, r30, 0xc8
/* 80115E14 00112C14  4B EF 53 B9 */	bl __mi__5xVec3CFRC5xVec3
/* 80115E18 00112C18  FC 20 F8 90 */	fmr f1, f31
/* 80115E1C 00112C1C  38 61 00 20 */	addi r3, r1, 0x20
/* 80115E20 00112C20  38 81 00 14 */	addi r4, r1, 0x14
/* 80115E24 00112C24  4B EF 52 FD */	bl __ml__5xVec3CFf
/* 80115E28 00112C28  38 61 00 2C */	addi r3, r1, 0x2c
/* 80115E2C 00112C2C  38 9E 00 C8 */	addi r4, r30, 0xc8
/* 80115E30 00112C30  38 A1 00 20 */	addi r5, r1, 0x20
/* 80115E34 00112C34  4B EF F5 AD */	bl __pl__5xVec3CFRC5xVec3
/* 80115E38 00112C38  3B E1 00 78 */	addi r31, r1, 0x78
/* 80115E3C 00112C3C  38 81 00 2C */	addi r4, r1, 0x2c
/* 80115E40 00112C40  7F E3 FB 78 */	mr r3, r31
/* 80115E44 00112C44  4B EF 54 21 */	bl __as__5xVec3FRC5xVec3
/* 80115E48 00112C48  7F C4 F3 78 */	mr r4, r30
/* 80115E4C 00112C4C  38 61 00 08 */	addi r3, r1, 8
/* 80115E50 00112C50  38 BE 00 08 */	addi r5, r30, 8
/* 80115E54 00112C54  4B FF E0 DD */	bl local_to_world__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFRC5xVec3
/* 80115E58 00112C58  7F E3 FB 78 */	mr r3, r31
/* 80115E5C 00112C5C  38 81 00 08 */	addi r4, r1, 8
/* 80115E60 00112C60  4B EF F5 E5 */	bl __apl__5xVec3FRC5xVec3
/* 80115E64 00112C64  FC 20 F8 90 */	fmr f1, f31
/* 80115E68 00112C68  38 61 00 38 */	addi r3, r1, 0x38
/* 80115E6C 00112C6C  38 9E 00 E0 */	addi r4, r30, 0xe0
/* 80115E70 00112C70  38 BE 00 F0 */	addi r5, r30, 0xf0
/* 80115E74 00112C74  4B F1 D2 5D */	bl xQuatSlerp__FP5xQuatPC5xQuatPC5xQuatf
/* 80115E78 00112C78  38 61 00 38 */	addi r3, r1, 0x38
/* 80115E7C 00112C7C  38 81 00 48 */	addi r4, r1, 0x48
/* 80115E80 00112C80  4B F1 D0 81 */	bl xQuatToMat__FPC5xQuatP7xMat3x3
/* 80115E84 00112C84  3C 60 80 3C */	lis r3, globals@ha
/* 80115E88 00112C88  7F E4 FB 78 */	mr r4, r31
/* 80115E8C 00112C8C  38 63 05 58 */	addi r3, r3, globals@l
/* 80115E90 00112C90  4B EF 78 89 */	bl xCameraMove__FP7xCameraRC5xVec3
/* 80115E94 00112C94  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80115E98 00112C98  3C 60 80 3C */	lis r3, globals@ha
/* 80115E9C 00112C9C  38 63 05 58 */	addi r3, r3, globals@l
/* 80115EA0 00112CA0  38 81 00 48 */	addi r4, r1, 0x48
/* 80115EA4 00112CA4  FC 40 08 90 */	fmr f2, f1
/* 80115EA8 00112CA8  FC 60 08 90 */	fmr f3, f1
/* 80115EAC 00112CAC  4B EF 7C 69 */	bl xCameraRotate__FP7xCameraRC7xMat3x3fff
/* 80115EB0 00112CB0  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 80115EB4 00112CB4  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80115EB8 00112CB8  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 80115EBC 00112CBC  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 80115EC0 00112CC0  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 80115EC4 00112CC4  7C 08 03 A6 */	mtlr r0
/* 80115EC8 00112CC8  38 21 00 A0 */	addi r1, r1, 0xa0
/* 80115ECC 00112CCC  4E 80 00 20 */	blr 

/* start_detaching__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv */
start_detaching__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv:
/* 80115ED0 00112CD0  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 80115ED4 00112CD4  7C 08 02 A6 */	mflr r0
/* 80115ED8 00112CD8  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 80115EDC 00112CDC  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 80115EE0 00112CE0  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 80115EE4 00112CE4  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 80115EE8 00112CE8  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 80115EEC 00112CEC  93 E1 00 BC */	stw r31, 0xbc(r1)
/* 80115EF0 00112CF0  93 C1 00 B8 */	stw r30, 0xb8(r1)
/* 80115EF4 00112CF4  93 A1 00 B4 */	stw r29, 0xb4(r1)
/* 80115EF8 00112CF8  93 81 00 B0 */	stw r28, 0xb0(r1)
/* 80115EFC 00112CFC  7C 7F 1B 78 */	mr r31, r3
/* 80115F00 00112D00  38 00 00 01 */	li r0, 1
/* 80115F04 00112D04  3C 80 80 29 */	lis r4, lbl_80297A68@ha
/* 80115F08 00112D08  98 03 00 98 */	stb r0, 0x98(r3)
/* 80115F0C 00112D0C  38 C4 7A 68 */	addi r6, r4, lbl_80297A68@l
/* 80115F10 00112D10  3C 80 80 3C */	lis r4, globals@ha
/* 80115F14 00112D14  80 A6 00 3C */	lwz r5, 0x3c(r6)
/* 80115F18 00112D18  38 84 05 58 */	addi r4, r4, globals@l
/* 80115F1C 00112D1C  C0 24 09 24 */	lfs f1, 0x924(r4)
/* 80115F20 00112D20  38 9F 00 9C */	addi r4, r31, 0x9c
/* 80115F24 00112D24  80 E5 00 10 */	lwz r7, 0x10(r5)
/* 80115F28 00112D28  38 A6 01 74 */	addi r5, r6, 0x174
/* 80115F2C 00112D2C  38 C6 01 80 */	addi r6, r6, 0x180
/* 80115F30 00112D30  C0 47 00 2C */	lfs f2, 0x2c(r7)
/* 80115F34 00112D34  48 00 01 E1 */	bl calc_drop_off_velocity__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFR5xVec3RC5xVec3RC5xVec3ff
/* 80115F38 00112D38  3C 60 80 3C */	lis r3, globals@ha
/* 80115F3C 00112D3C  7F E4 FB 78 */	mr r4, r31
/* 80115F40 00112D40  38 A3 05 58 */	addi r5, r3, globals@l
/* 80115F44 00112D44  38 61 00 44 */	addi r3, r1, 0x44
/* 80115F48 00112D48  3B 85 00 14 */	addi r28, r5, 0x14
/* 80115F4C 00112D4C  38 BF 00 08 */	addi r5, r31, 8
/* 80115F50 00112D50  4B FF DF E1 */	bl local_to_world__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeCFRC5xVec3
/* 80115F54 00112D54  80 C1 00 44 */	lwz r6, 0x44(r1)
/* 80115F58 00112D58  7F 84 E3 78 */	mr r4, r28
/* 80115F5C 00112D5C  80 A1 00 48 */	lwz r5, 0x48(r1)
/* 80115F60 00112D60  38 61 00 68 */	addi r3, r1, 0x68
/* 80115F64 00112D64  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 80115F68 00112D68  90 C1 00 5C */	stw r6, 0x5c(r1)
/* 80115F6C 00112D6C  90 A1 00 60 */	stw r5, 0x60(r1)
/* 80115F70 00112D70  90 01 00 64 */	stw r0, 0x64(r1)
/* 80115F74 00112D74  4B EF 52 F1 */	bl __as__5xVec3FRC5xVec3
/* 80115F78 00112D78  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 80115F7C 00112D7C  3B C1 00 78 */	addi r30, r1, 0x78
/* 80115F80 00112D80  C0 42 9E 88 */	lfs f2, lbl_803CE808-_SDA2_BASE_(r2)
/* 80115F84 00112D84  7F C3 F3 78 */	mr r3, r30
/* 80115F88 00112D88  FC 60 08 90 */	fmr f3, f1
/* 80115F8C 00112D8C  4B EF 51 61 */	bl assign__5xVec3Ffff
/* 80115F90 00112D90  7F C5 F3 78 */	mr r5, r30
/* 80115F94 00112D94  38 61 00 38 */	addi r3, r1, 0x38
/* 80115F98 00112D98  38 81 00 68 */	addi r4, r1, 0x68
/* 80115F9C 00112D9C  4B EF F5 99 */	bl cross__5xVec3CFRC5xVec3
/* 80115FA0 00112DA0  3B A1 00 88 */	addi r29, r1, 0x88
/* 80115FA4 00112DA4  38 81 00 38 */	addi r4, r1, 0x38
/* 80115FA8 00112DA8  7F A3 EB 78 */	mr r3, r29
/* 80115FAC 00112DAC  4B EF 52 B9 */	bl __as__5xVec3FRC5xVec3
/* 80115FB0 00112DB0  3C 80 80 3C */	lis r4, globals@ha
/* 80115FB4 00112DB4  38 61 00 2C */	addi r3, r1, 0x2c
/* 80115FB8 00112DB8  38 C4 05 58 */	addi r6, r4, globals@l
/* 80115FBC 00112DBC  38 9C 00 30 */	addi r4, r28, 0x30
/* 80115FC0 00112DC0  C3 E6 01 74 */	lfs f31, 0x174(r6)
/* 80115FC4 00112DC4  38 A1 00 5C */	addi r5, r1, 0x5c
/* 80115FC8 00112DC8  C3 C6 01 64 */	lfs f30, 0x164(r6)
/* 80115FCC 00112DCC  4B EF 52 01 */	bl __mi__5xVec3CFRC5xVec3
/* 80115FD0 00112DD0  38 7F 00 C8 */	addi r3, r31, 0xc8
/* 80115FD4 00112DD4  38 81 00 2C */	addi r4, r1, 0x2c
/* 80115FD8 00112DD8  4B EF 52 8D */	bl __as__5xVec3FRC5xVec3
/* 80115FDC 00112DDC  FC 20 F0 50 */	fneg f1, f30
/* 80115FE0 00112DE0  7F A4 EB 78 */	mr r4, r29
/* 80115FE4 00112DE4  38 61 00 08 */	addi r3, r1, 8
/* 80115FE8 00112DE8  4B EF 51 39 */	bl __ml__5xVec3CFf
/* 80115FEC 00112DEC  FC 20 F8 90 */	fmr f1, f31
/* 80115FF0 00112DF0  7F C4 F3 78 */	mr r4, r30
/* 80115FF4 00112DF4  38 61 00 14 */	addi r3, r1, 0x14
/* 80115FF8 00112DF8  4B EF 51 29 */	bl __ml__5xVec3CFf
/* 80115FFC 00112DFC  38 61 00 20 */	addi r3, r1, 0x20
/* 80116000 00112E00  38 81 00 14 */	addi r4, r1, 0x14
/* 80116004 00112E04  38 A1 00 08 */	addi r5, r1, 8
/* 80116008 00112E08  4B EF F3 D9 */	bl __pl__5xVec3CFRC5xVec3
/* 8011600C 00112E0C  38 7F 00 D4 */	addi r3, r31, 0xd4
/* 80116010 00112E10  38 81 00 20 */	addi r4, r1, 0x20
/* 80116014 00112E14  4B EF 52 51 */	bl __as__5xVec3FRC5xVec3
/* 80116018 00112E18  38 61 00 68 */	addi r3, r1, 0x68
/* 8011601C 00112E1C  38 81 00 50 */	addi r4, r1, 0x50
/* 80116020 00112E20  4B F1 BE 15 */	bl xMat3x3GetEuler__FPC7xMat3x3P5xVec3
/* 80116024 00112E24  48 06 94 15 */	bl zCameraTweakGlobal_GetPitch__Fv
/* 80116028 00112E28  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 8011602C 00112E2C  38 61 00 68 */	addi r3, r1, 0x68
/* 80116030 00112E30  38 81 00 50 */	addi r4, r1, 0x50
/* 80116034 00112E34  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 80116038 00112E38  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 8011603C 00112E3C  4B F1 C1 69 */	bl xMat3x3Euler__FP7xMat3x3PC5xVec3
/* 80116040 00112E40  7F 84 E3 78 */	mr r4, r28
/* 80116044 00112E44  38 7F 00 E0 */	addi r3, r31, 0xe0
/* 80116048 00112E48  4B F1 CC 3D */	bl xQuatFromMat__FP5xQuatPC7xMat3x3
/* 8011604C 00112E4C  38 7F 00 F0 */	addi r3, r31, 0xf0
/* 80116050 00112E50  38 81 00 68 */	addi r4, r1, 0x68
/* 80116054 00112E54  4B F1 CC 31 */	bl xQuatFromMat__FP5xQuatPC7xMat3x3
/* 80116058 00112E58  C0 02 9E A0 */	lfs f0, lbl_803CE820-_SDA2_BASE_(r2)
/* 8011605C 00112E5C  38 7F 00 08 */	addi r3, r31, 8
/* 80116060 00112E60  D0 1F 00 C0 */	stfs f0, 0xc0(r31)
/* 80116064 00112E64  4B EF 51 45 */	bl length__5xVec3CFv
/* 80116068 00112E68  C0 1F 01 3C */	lfs f0, 0x13c(r31)
/* 8011606C 00112E6C  EC 01 00 24 */	fdivs f0, f1, f0
/* 80116070 00112E70  FC 00 02 10 */	fabs f0, f0
/* 80116074 00112E74  FC 20 00 18 */	frsp f1, f0
/* 80116078 00112E78  4B EF 47 85 */	bl xsqrt__Ff
/* 8011607C 00112E7C  D0 3F 00 C4 */	stfs f1, 0xc4(r31)
/* 80116080 00112E80  C0 3F 00 C4 */	lfs f1, 0xc4(r31)
/* 80116084 00112E84  C0 02 9F 24 */	lfs f0, lbl_803CE8A4-_SDA2_BASE_(r2)
/* 80116088 00112E88  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011608C 00112E8C  4C 41 13 82 */	cror 2, 1, 2
/* 80116090 00112E90  40 82 00 1C */	bne lbl_801160AC
/* 80116094 00112E94  C0 02 9E BC */	lfs f0, lbl_803CE83C-_SDA2_BASE_(r2)
/* 80116098 00112E98  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011609C 00112E9C  4C 40 13 82 */	cror 2, 0, 2
/* 801160A0 00112EA0  40 82 00 0C */	bne lbl_801160AC
/* 801160A4 00112EA4  C0 02 9E E0 */	lfs f0, lbl_803CE860-_SDA2_BASE_(r2)
/* 801160A8 00112EA8  D0 1F 00 C4 */	stfs f0, 0xc4(r31)
lbl_801160AC:
/* 801160AC 00112EAC  3C 60 80 3C */	lis r3, globals@ha
/* 801160B0 00112EB0  C0 22 9E A0 */	lfs f1, lbl_803CE820-_SDA2_BASE_(r2)
/* 801160B4 00112EB4  38 63 05 58 */	addi r3, r3, globals@l
/* 801160B8 00112EB8  C0 01 00 50 */	lfs f0, 0x50(r1)
/* 801160BC 00112EBC  D0 23 01 48 */	stfs f1, 0x148(r3)
/* 801160C0 00112EC0  D0 23 01 44 */	stfs f1, 0x144(r3)
/* 801160C4 00112EC4  D0 23 01 40 */	stfs f1, 0x140(r3)
/* 801160C8 00112EC8  D0 23 01 54 */	stfs f1, 0x154(r3)
/* 801160CC 00112ECC  D0 23 01 50 */	stfs f1, 0x150(r3)
/* 801160D0 00112ED0  D0 23 01 4C */	stfs f1, 0x14c(r3)
/* 801160D4 00112ED4  C0 22 9F 0C */	lfs f1, lbl_803CE88C-_SDA2_BASE_(r2)
/* 801160D8 00112ED8  EC 01 00 2A */	fadds f0, f1, f0
/* 801160DC 00112EDC  D0 03 01 84 */	stfs f0, 0x184(r3)
/* 801160E0 00112EE0  D0 03 01 80 */	stfs f0, 0x180(r3)
/* 801160E4 00112EE4  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 801160E8 00112EE8  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 801160EC 00112EEC  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 801160F0 00112EF0  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 801160F4 00112EF4  83 E1 00 BC */	lwz r31, 0xbc(r1)
/* 801160F8 00112EF8  83 C1 00 B8 */	lwz r30, 0xb8(r1)
/* 801160FC 00112EFC  83 A1 00 B4 */	lwz r29, 0xb4(r1)
/* 80116100 00112F00  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 80116104 00112F04  83 81 00 B0 */	lwz r28, 0xb0(r1)
/* 80116108 00112F08  7C 08 03 A6 */	mtlr r0
/* 8011610C 00112F0C  38 21 00 E0 */	addi r1, r1, 0xe0
/* 80116110 00112F10  4E 80 00 20 */	blr 

/* calc_drop_off_velocity__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFR5xVec3RC5xVec3RC5xVec3ff */
calc_drop_off_velocity__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFR5xVec3RC5xVec3RC5xVec3ff:
/* 80116114 00112F14  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80116118 00112F18  7C 08 02 A6 */	mflr r0
/* 8011611C 00112F1C  90 01 00 54 */	stw r0, 0x54(r1)
/* 80116120 00112F20  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80116124 00112F24  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 80116128 00112F28  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 8011612C 00112F2C  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 80116130 00112F30  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80116134 00112F34  FF C0 08 90 */	fmr f30, f1
/* 80116138 00112F38  7C 9F 23 78 */	mr r31, r4
/* 8011613C 00112F3C  FF E0 10 90 */	fmr f31, f2
/* 80116140 00112F40  7C C4 33 78 */	mr r4, r6
/* 80116144 00112F44  38 61 00 08 */	addi r3, r1, 8
/* 80116148 00112F48  4B EF 50 85 */	bl __mi__5xVec3CFRC5xVec3
/* 8011614C 00112F4C  C0 02 9E 88 */	lfs f0, lbl_803CE808-_SDA2_BASE_(r2)
/* 80116150 00112F50  38 61 00 14 */	addi r3, r1, 0x14
/* 80116154 00112F54  38 81 00 08 */	addi r4, r1, 8
/* 80116158 00112F58  EC 20 F8 24 */	fdivs f1, f0, f31
/* 8011615C 00112F5C  4B EF 4F C5 */	bl __ml__5xVec3CFf
/* 80116160 00112F60  7F E3 FB 78 */	mr r3, r31
/* 80116164 00112F64  38 81 00 14 */	addi r4, r1, 0x14
/* 80116168 00112F68  4B EF 50 FD */	bl __as__5xVec3FRC5xVec3
/* 8011616C 00112F6C  C0 22 9E 8C */	lfs f1, lbl_803CE80C-_SDA2_BASE_(r2)
/* 80116170 00112F70  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80116174 00112F74  EC 21 07 B2 */	fmuls f1, f1, f30
/* 80116178 00112F78  EC 01 07 FA */	fmadds f0, f1, f31, f0
/* 8011617C 00112F7C  D0 1F 00 04 */	stfs f0, 4(r31)
/* 80116180 00112F80  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 80116184 00112F84  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80116188 00112F88  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 8011618C 00112F8C  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 80116190 00112F90  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80116194 00112F94  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80116198 00112F98  7C 08 03 A6 */	mtlr r0
/* 8011619C 00112F9C  38 21 00 50 */	addi r1, r1, 0x50
/* 801161A0 00112FA0  4E 80 00 20 */	blr 

render__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_typeFv:
/* 801161A4 00112FA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801161A8 00112FA8  7C 08 02 A6 */	mflr r0
/* 801161AC 00112FAC  38 60 00 01 */	li r3, 1
/* 801161B0 00112FB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801161B4 00112FB4  4B FF A3 B9 */	bl render_player__Q212bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_Fb
/* 801161B8 00112FB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801161BC 00112FBC  7C 08 03 A6 */	mtlr r0
/* 801161C0 00112FC0  38 21 00 10 */	addi r1, r1, 0x10
/* 801161C4 00112FC4  4E 80 00 20 */	blr 

/* __cl__Q412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type19cb_cache_collisionsFR4xEntR10xGridBound */
__cl__Q412bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type19cb_cache_collisionsFR4xEntR10xGridBound:
/* 801161C8 00112FC8  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 801161CC 00112FCC  7C 08 02 A6 */	mflr r0
/* 801161D0 00112FD0  90 01 00 64 */	stw r0, 0x64(r1)
/* 801161D4 00112FD4  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 801161D8 00112FD8  7C 9F 23 78 */	mr r31, r4
/* 801161DC 00112FDC  93 C1 00 58 */	stw r30, 0x58(r1)
/* 801161E0 00112FE0  7C 7E 1B 78 */	mr r30, r3
/* 801161E4 00112FE4  88 04 00 22 */	lbz r0, 0x22(r4)
/* 801161E8 00112FE8  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 801161EC 00112FEC  41 82 00 10 */	beq lbl_801161FC
/* 801161F0 00112FF0  88 1F 00 23 */	lbz r0, 0x23(r31)
/* 801161F4 00112FF4  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 801161F8 00112FF8  40 82 00 0C */	bne lbl_80116204
lbl_801161FC:
/* 801161FC 00112FFC  38 60 00 01 */	li r3, 1
/* 80116200 00113000  48 00 00 94 */	b lbl_80116294
lbl_80116204:
/* 80116204 00113004  38 00 00 00 */	li r0, 0
/* 80116208 00113008  38 9F 00 64 */	addi r4, r31, 0x64
/* 8011620C 0011300C  90 01 00 08 */	stw r0, 8(r1)
/* 80116210 00113010  38 A1 00 08 */	addi r5, r1, 8
/* 80116214 00113014  80 7E 00 00 */	lwz r3, 0(r30)
/* 80116218 00113018  4B EF 4B 8D */	bl xSphereHitsBound__FPC7xSpherePC6xBoundP7xCollis
/* 8011621C 0011301C  80 01 00 08 */	lwz r0, 8(r1)
/* 80116220 00113020  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80116224 00113024  40 82 00 0C */	bne lbl_80116230
/* 80116228 00113028  38 60 00 01 */	li r3, 1
/* 8011622C 0011302C  48 00 00 68 */	b lbl_80116294
lbl_80116230:
/* 80116230 00113030  88 1F 00 21 */	lbz r0, 0x21(r31)
/* 80116234 00113034  28 00 00 05 */	cmplwi r0, 5
/* 80116238 00113038  40 82 00 28 */	bne lbl_80116260
/* 8011623C 0011303C  80 7E 00 00 */	lwz r3, 0(r30)
/* 80116240 00113040  38 A1 00 08 */	addi r5, r1, 8
/* 80116244 00113044  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 80116248 00113048  4B EF 96 1D */	bl xSphereHitsModel__FPC7xSpherePC14xModelInstanceP7xCollis
/* 8011624C 0011304C  80 01 00 08 */	lwz r0, 8(r1)
/* 80116250 00113050  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80116254 00113054  40 82 00 0C */	bne lbl_80116260
/* 80116258 00113058  38 60 00 01 */	li r3, 1
/* 8011625C 0011305C  48 00 00 38 */	b lbl_80116294
lbl_80116260:
/* 80116260 00113060  80 9E 00 08 */	lwz r4, 8(r30)
/* 80116264 00113064  38 00 00 00 */	li r0, 0
/* 80116268 00113068  80 BE 00 04 */	lwz r5, 4(r30)
/* 8011626C 0011306C  38 60 00 01 */	li r3, 1
/* 80116270 00113070  80 84 00 00 */	lwz r4, 0(r4)
/* 80116274 00113074  54 84 18 38 */	slwi r4, r4, 3
/* 80116278 00113078  7C 85 22 14 */	add r4, r5, r4
/* 8011627C 0011307C  93 E4 00 00 */	stw r31, 0(r4)
/* 80116280 00113080  90 04 00 04 */	stw r0, 4(r4)
/* 80116284 00113084  80 BE 00 08 */	lwz r5, 8(r30)
/* 80116288 00113088  80 85 00 00 */	lwz r4, 0(r5)
/* 8011628C 0011308C  38 04 00 01 */	addi r0, r4, 1
/* 80116290 00113090  90 05 00 00 */	stw r0, 0(r5)
lbl_80116294:
/* 80116294 00113094  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80116298 00113098  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8011629C 0011309C  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 801162A0 001130A0  7C 08 03 A6 */	mtlr r0
/* 801162A4 001130A4  38 21 00 60 */	addi r1, r1, 0x60
/* 801162A8 001130A8  4E 80 00 20 */	blr 

.global normal__5xVec3CFv
normal__5xVec3CFv:
/* 801162AC 001130AC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801162B0 001130B0  7C 08 02 A6 */	mflr r0
/* 801162B4 001130B4  80 C4 00 00 */	lwz r6, 0(r4)
/* 801162B8 001130B8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801162BC 001130BC  80 A4 00 04 */	lwz r5, 4(r4)
/* 801162C0 001130C0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801162C4 001130C4  7C 7F 1B 78 */	mr r31, r3
/* 801162C8 001130C8  80 04 00 08 */	lwz r0, 8(r4)
/* 801162CC 001130CC  38 61 00 08 */	addi r3, r1, 8
/* 801162D0 001130D0  90 C1 00 08 */	stw r6, 8(r1)
/* 801162D4 001130D4  90 A1 00 0C */	stw r5, 0xc(r1)
/* 801162D8 001130D8  90 01 00 10 */	stw r0, 0x10(r1)
/* 801162DC 001130DC  4B EF F2 D5 */	bl normalize__5xVec3Fv
/* 801162E0 001130E0  80 83 00 00 */	lwz r4, 0(r3)
/* 801162E4 001130E4  80 03 00 04 */	lwz r0, 4(r3)
/* 801162E8 001130E8  90 9F 00 00 */	stw r4, 0(r31)
/* 801162EC 001130EC  90 1F 00 04 */	stw r0, 4(r31)
/* 801162F0 001130F0  80 03 00 08 */	lwz r0, 8(r3)
/* 801162F4 001130F4  90 1F 00 08 */	stw r0, 8(r31)
/* 801162F8 001130F8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801162FC 001130FC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80116300 00113100  7C 08 03 A6 */	mtlr r0
/* 80116304 00113104  38 21 00 20 */	addi r1, r1, 0x20
/* 80116308 00113108  4E 80 00 20 */	blr 

.global xBoxFromSphere__FR4xBoxRC7xSphere
xBoxFromSphere__FR4xBoxRC7xSphere:
/* 80116370 00113170  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80116374 00113174  7C 08 02 A6 */	mflr r0
/* 80116378 00113178  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011637C 0011317C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80116380 00113180  7C 9F 23 78 */	mr r31, r4
/* 80116384 00113184  93 C1 00 08 */	stw r30, 8(r1)
/* 80116388 00113188  7C 7E 1B 78 */	mr r30, r3
/* 8011638C 0011318C  38 7E 00 0C */	addi r3, r30, 0xc
/* 80116390 00113190  4B EF 4E D5 */	bl __as__5xVec3FRC5xVec3
/* 80116394 00113194  7C 64 1B 78 */	mr r4, r3
/* 80116398 00113198  7F C3 F3 78 */	mr r3, r30
/* 8011639C 0011319C  4B EF 4E C9 */	bl __as__5xVec3FRC5xVec3
/* 801163A0 001131A0  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 801163A4 001131A4  7F C3 F3 78 */	mr r3, r30
/* 801163A8 001131A8  4B F0 54 09 */	bl __apl__5xVec3Ff
/* 801163AC 001131AC  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 801163B0 001131B0  38 7E 00 0C */	addi r3, r30, 0xc
/* 801163B4 001131B4  4B F0 53 D5 */	bl __ami__5xVec3Ff
/* 801163B8 001131B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801163BC 001131BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801163C0 001131C0  83 C1 00 08 */	lwz r30, 8(r1)
/* 801163C4 001131C4  7C 08 03 A6 */	mtlr r0
/* 801163C8 001131C8  38 21 00 10 */	addi r1, r1, 0x10
/* 801163CC 001131CC  4E 80 00 20 */	blr 

/* xGridCheckBound<Q412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type19cb_cache_collisions>__FR5xGridRC6xBoundRC7xQCDataQ412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type19cb_cache_collisions */
.global xGridCheckBound_esc__0_Q412bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type19cb_cache_collisions_esc__1___FR5xGridRC6xBoundRC7xQCDataQ412bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type19cb_cache_collisions
xGridCheckBound_esc__0_Q412bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type19cb_cache_collisions_esc__1___FR5xGridRC6xBoundRC7xQCDataQ412bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type19cb_cache_collisions:
/* 801163D0 001131D0  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 801163D4 001131D4  7C 08 02 A6 */	mflr r0
/* 801163D8 001131D8  90 01 00 64 */	stw r0, 0x64(r1)
/* 801163DC 001131DC  BF 21 00 44 */	stmw r25, 0x44(r1)
/* 801163E0 001131E0  7C 7D 1B 78 */	mr r29, r3
/* 801163E4 001131E4  7C BE 2B 78 */	mr r30, r5
/* 801163E8 001131E8  7C DF 33 78 */	mr r31, r6
/* 801163EC 001131EC  38 61 00 24 */	addi r3, r1, 0x24
/* 801163F0 001131F0  4B EF 41 E1 */	bl xBoundGetBox__FR4xBoxRC6xBound
/* 801163F4 001131F4  C0 42 9E E4 */	lfs f2, lbl_803CE864-_SDA2_BASE_(r2)
/* 801163F8 001131F8  7F A3 EB 78 */	mr r3, r29
/* 801163FC 001131FC  C0 1D 00 1C */	lfs f0, 0x1c(r29)
/* 80116400 00113200  C0 3D 00 18 */	lfs f1, 0x18(r29)
/* 80116404 00113204  EC A2 00 32 */	fmuls f5, f2, f0
/* 80116408 00113208  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 8011640C 0011320C  EC 82 00 72 */	fmuls f4, f2, f1
/* 80116410 00113210  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 80116414 00113214  C0 61 00 24 */	lfs f3, 0x24(r1)
/* 80116418 00113218  EC 40 28 28 */	fsubs f2, f0, f5
/* 8011641C 0011321C  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 80116420 00113220  EC 21 20 28 */	fsubs f1, f1, f4
/* 80116424 00113224  EC 63 20 2A */	fadds f3, f3, f4
/* 80116428 00113228  EC 00 28 2A */	fadds f0, f0, f5
/* 8011642C 0011322C  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 80116430 00113230  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 80116434 00113234  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 80116438 00113238  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8011643C 0011323C  4B F2 B1 D9 */	bl get_grid_index__FRC5xGridff
/* 80116440 00113240  90 61 00 0C */	stw r3, 0xc(r1)
/* 80116444 00113244  38 61 00 10 */	addi r3, r1, 0x10
/* 80116448 00113248  38 81 00 0C */	addi r4, r1, 0xc
/* 8011644C 0011324C  4B F2 AF DD */	bl __as__10grid_indexFRC10grid_index
/* 80116450 00113250  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80116454 00113254  7F A3 EB 78 */	mr r3, r29
/* 80116458 00113258  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 8011645C 0011325C  4B F2 B1 B9 */	bl get_grid_index__FRC5xGridff
/* 80116460 00113260  90 61 00 08 */	stw r3, 8(r1)
/* 80116464 00113264  38 61 00 14 */	addi r3, r1, 0x14
/* 80116468 00113268  38 81 00 08 */	addi r4, r1, 8
/* 8011646C 0011326C  4B F2 AF BD */	bl __as__10grid_indexFRC10grid_index
/* 80116470 00113270  38 7D 00 30 */	addi r3, r29, 0x30
/* 80116474 00113274  38 81 00 18 */	addi r4, r1, 0x18
/* 80116478 00113278  4B F0 55 1D */	bl xGridIterFirstCell__FPP10xGridBoundR13xGridIterator
/* 8011647C 0011327C  7C 7C 1B 78 */	mr r28, r3
/* 80116480 00113280  48 00 00 48 */	b lbl_801164C8
lbl_80116484:
/* 80116484 00113284  7F C3 F3 78 */	mr r3, r30
/* 80116488 00113288  38 9C 00 14 */	addi r4, r28, 0x14
/* 8011648C 0011328C  4B F2 61 35 */	bl xQuickCullIsects__FPC7xQCDataPC7xQCData
/* 80116490 00113290  2C 03 00 00 */	cmpwi r3, 0
/* 80116494 00113294  41 82 00 28 */	beq lbl_801164BC
/* 80116498 00113298  80 9C 00 00 */	lwz r4, 0(r28)
/* 8011649C 0011329C  7F E3 FB 78 */	mr r3, r31
/* 801164A0 001132A0  7F 85 E3 78 */	mr r5, r28
/* 801164A4 001132A4  4B FF FD 25 */	bl __cl__Q412bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type19cb_cache_collisionsFR4xEntR10xGridBound
/* 801164A8 001132A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801164AC 001132AC  40 82 00 10 */	bne lbl_801164BC
/* 801164B0 001132B0  38 61 00 18 */	addi r3, r1, 0x18
/* 801164B4 001132B4  4B F0 55 FD */	bl xGridIterClose__FR13xGridIterator
/* 801164B8 001132B8  48 00 00 BC */	b lbl_80116574
lbl_801164BC:
/* 801164BC 001132BC  38 61 00 18 */	addi r3, r1, 0x18
/* 801164C0 001132C0  4B F0 55 81 */	bl xGridIterNextCell__FR13xGridIterator
/* 801164C4 001132C4  7C 7C 1B 78 */	mr r28, r3
lbl_801164C8:
/* 801164C8 001132C8  28 1C 00 00 */	cmplwi r28, 0
/* 801164CC 001132CC  40 82 FF B8 */	bne lbl_80116484
/* 801164D0 001132D0  A3 61 00 10 */	lhz r27, 0x10(r1)
/* 801164D4 001132D4  48 00 00 90 */	b lbl_80116564
lbl_801164D8:
/* 801164D8 001132D8  A3 41 00 12 */	lhz r26, 0x12(r1)
/* 801164DC 001132DC  57 7C 04 3E */	clrlwi r28, r27, 0x10
/* 801164E0 001132E0  48 00 00 70 */	b lbl_80116550
lbl_801164E4:
/* 801164E4 001132E4  7F A3 EB 78 */	mr r3, r29
/* 801164E8 001132E8  7F 84 E3 78 */	mr r4, r28
/* 801164EC 001132EC  57 45 04 3E */	clrlwi r5, r26, 0x10
/* 801164F0 001132F0  38 C1 00 18 */	addi r6, r1, 0x18
/* 801164F4 001132F4  4B F0 54 D9 */	bl xGridIterFirstCell__FP5xGridiiR13xGridIterator
/* 801164F8 001132F8  7C 79 1B 78 */	mr r25, r3
/* 801164FC 001132FC  48 00 00 48 */	b lbl_80116544
lbl_80116500:
/* 80116500 00113300  7F C3 F3 78 */	mr r3, r30
/* 80116504 00113304  38 99 00 14 */	addi r4, r25, 0x14
/* 80116508 00113308  4B F2 60 B9 */	bl xQuickCullIsects__FPC7xQCDataPC7xQCData
/* 8011650C 0011330C  2C 03 00 00 */	cmpwi r3, 0
/* 80116510 00113310  41 82 00 28 */	beq lbl_80116538
/* 80116514 00113314  80 99 00 00 */	lwz r4, 0(r25)
/* 80116518 00113318  7F E3 FB 78 */	mr r3, r31
/* 8011651C 0011331C  7F 25 CB 78 */	mr r5, r25
/* 80116520 00113320  4B FF FC A9 */	bl __cl__Q412bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type19cb_cache_collisionsFR4xEntR10xGridBound
/* 80116524 00113324  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80116528 00113328  40 82 00 10 */	bne lbl_80116538
/* 8011652C 0011332C  38 61 00 18 */	addi r3, r1, 0x18
/* 80116530 00113330  4B F0 55 81 */	bl xGridIterClose__FR13xGridIterator
/* 80116534 00113334  48 00 00 40 */	b lbl_80116574
lbl_80116538:
/* 80116538 00113338  38 61 00 18 */	addi r3, r1, 0x18
/* 8011653C 0011333C  4B F0 55 05 */	bl xGridIterNextCell__FR13xGridIterator
/* 80116540 00113340  7C 79 1B 78 */	mr r25, r3
lbl_80116544:
/* 80116544 00113344  28 19 00 00 */	cmplwi r25, 0
/* 80116548 00113348  40 82 FF B8 */	bne lbl_80116500
/* 8011654C 0011334C  3B 5A 00 01 */	addi r26, r26, 1
lbl_80116550:
/* 80116550 00113350  A0 01 00 16 */	lhz r0, 0x16(r1)
/* 80116554 00113354  57 43 04 3E */	clrlwi r3, r26, 0x10
/* 80116558 00113358  7C 03 00 40 */	cmplw r3, r0
/* 8011655C 0011335C  40 81 FF 88 */	ble lbl_801164E4
/* 80116560 00113360  3B 7B 00 01 */	addi r27, r27, 1
lbl_80116564:
/* 80116564 00113364  A0 01 00 14 */	lhz r0, 0x14(r1)
/* 80116568 00113368  57 63 04 3E */	clrlwi r3, r27, 0x10
/* 8011656C 0011336C  7C 03 00 40 */	cmplw r3, r0
/* 80116570 00113370  40 81 FF 68 */	ble lbl_801164D8
lbl_80116574:
/* 80116574 00113374  BB 21 00 44 */	lmw r25, 0x44(r1)
/* 80116578 00113378  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8011657C 0011337C  7C 08 03 A6 */	mtlr r0
/* 80116580 00113380  38 21 00 60 */	addi r1, r1, 0x60
/* 80116584 00113384  4E 80 00 20 */	blr 

.endif

.section .rodata
lbl_8026A408:
	.incbin "baserom.dol", 0x2673E8, 0x168
lbl_8026A570:
	.incbin "baserom.dol", 0x267550, 0x6C
lbl_8026A5DC:
	.incbin "baserom.dol", 0x2675BC, 0xAC
lbl_8026A688:
	.incbin "baserom.dol", 0x267668, 0x950

.section .data
lbl_80297A68:
	.incbin "baserom.dol", 0x294A48, 0x19C
lbl_80297C04:
	.incbin "baserom.dol", 0x294BE4, 0xC
/* SPECULATION: link order */
.global __vt__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_20attaching_state_type
__vt__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_20attaching_state_type:
	.incbin "baserom.dol", 0x294BF0, 0x18
/* SPECULATION: link order */
.global __vt__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_10state_type
__vt__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_10state_type:
	.incbin "baserom.dol", 0x294C08, 0x18
/* SPECULATION: link order */
.global __vt__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type
__vt__Q312bungee_state35_esc__2_unnamed_esc__2_zEntPlayerBungeeState_cpp_esc__2_18hanging_state_type:
	.incbin "baserom.dol", 0x294C20, 0x18
lbl_80297C58:
	.incbin "baserom.dol", 0x294C38, 0x88

.section .bss
lbl_80313788:
	.skip 0x58
lbl_803137E0:
	.skip 0x4C
lbl_8031382C:
	.skip 0x9CC

.section .sbss
.balign 8
lbl_803CBDF0:
	.skip 0x4
lbl_803CBDF4:
	.skip 0x1
lbl_803CBDF5:
	.skip 0x1
lbl_803CBDF6:
	.skip 0x1
lbl_803CBDF7:
	.skip 0x1
lbl_803CBDF8:
	.skip 0x4
lbl_803CBDFC:
	.skip 0x4
lbl_803CBE00:
	.skip 0x4
lbl_803CBE04:
	.skip 0x4

.section .sbss2
lbl_803D08C0:
	.skip 0x8

.section .sdata2
lbl_803CE800:
	.incbin "baserom.dol", 0x2B80A0, 0x4
lbl_803CE804:
	.incbin "baserom.dol", 0x2B80A4, 0x4
lbl_803CE808:
	.incbin "baserom.dol", 0x2B80A8, 0x4
lbl_803CE80C:
	.incbin "baserom.dol", 0x2B80AC, 0x4
lbl_803CE810:
	.incbin "baserom.dol", 0x2B80B0, 0x4
lbl_803CE814:
	.incbin "baserom.dol", 0x2B80B4, 0x4
lbl_803CE818:
	.incbin "baserom.dol", 0x2B80B8, 0x4
lbl_803CE81C:
	.incbin "baserom.dol", 0x2B80BC, 0x4
lbl_803CE820:
	.incbin "baserom.dol", 0x2B80C0, 0x4
lbl_803CE824:
	.incbin "baserom.dol", 0x2B80C4, 0x4
lbl_803CE828:
	.incbin "baserom.dol", 0x2B80C8, 0x4
lbl_803CE82C:
	.incbin "baserom.dol", 0x2B80CC, 0x4
lbl_803CE830:
	.incbin "baserom.dol", 0x2B80D0, 0x4
lbl_803CE834:
	.incbin "baserom.dol", 0x2B80D4, 0x4
lbl_803CE838:
	.incbin "baserom.dol", 0x2B80D8, 0x4
lbl_803CE83C:
	.incbin "baserom.dol", 0x2B80DC, 0x4
lbl_803CE840:
	.incbin "baserom.dol", 0x2B80E0, 0x4
lbl_803CE844:
	.incbin "baserom.dol", 0x2B80E4, 0x4
lbl_803CE848:
	.incbin "baserom.dol", 0x2B80E8, 0x4
lbl_803CE84C:
	.incbin "baserom.dol", 0x2B80EC, 0x4
lbl_803CE850:
	.incbin "baserom.dol", 0x2B80F0, 0x4
lbl_803CE854:
	.incbin "baserom.dol", 0x2B80F4, 0x4
lbl_803CE858:
	.incbin "baserom.dol", 0x2B80F8, 0x4
lbl_803CE85C:
	.incbin "baserom.dol", 0x2B80FC, 0x4
lbl_803CE860:
	.incbin "baserom.dol", 0x2B8100, 0x4
lbl_803CE864:
	.incbin "baserom.dol", 0x2B8104, 0x4
lbl_803CE868:
	.incbin "baserom.dol", 0x2B8108, 0x4
lbl_803CE86C:
	.incbin "baserom.dol", 0x2B810C, 0x4
lbl_803CE870:
	.incbin "baserom.dol", 0x2B8110, 0x4
lbl_803CE874:
	.incbin "baserom.dol", 0x2B8114, 0x4
lbl_803CE878:
	.incbin "baserom.dol", 0x2B8118, 0x4
lbl_803CE87C:
	.incbin "baserom.dol", 0x2B811C, 0x4
lbl_803CE880:
	.incbin "baserom.dol", 0x2B8120, 0x4
lbl_803CE884:
	.incbin "baserom.dol", 0x2B8124, 0x4
lbl_803CE888:
	.incbin "baserom.dol", 0x2B8128, 0x4
lbl_803CE88C:
	.incbin "baserom.dol", 0x2B812C, 0x4
lbl_803CE890:
	.incbin "baserom.dol", 0x2B8130, 0x4
lbl_803CE894:
	.incbin "baserom.dol", 0x2B8134, 0x4
lbl_803CE898:
	.incbin "baserom.dol", 0x2B8138, 0x4
lbl_803CE89C:
	.incbin "baserom.dol", 0x2B813C, 0x4
lbl_803CE8A0:
	.incbin "baserom.dol", 0x2B8140, 0x4
lbl_803CE8A4:
	.incbin "baserom.dol", 0x2B8144, 0x4
