.include "macros.inc"
.file "zEntPlayerBungeeState.cpp"

# 0x801102B8 - 0x801162AC
.text
.balign 4

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::play_sound(bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::sound_enum, float)
.fn "play_sound__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FQ312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10sound_enumf", local
/* 801102B8 0010D398  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801102BC 0010D39C  7C 08 02 A6 */	mflr r0
/* 801102C0 0010D3A0  1C 83 00 0C */	mulli r4, r3, 0xc
/* 801102C4 0010D3A4  3C 60 80 27 */	lis r3, "sound_groups__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801102C8 0010D3A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801102CC 0010D3AC  38 03 A5 70 */	addi r0, r3, "sound_groups__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801102D0 0010D3B0  7C A0 22 14 */	add r5, r0, r4
/* 801102D4 0010D3B4  80 65 00 00 */	lwz r3, 0x0(r5)
/* 801102D8 0010D3B8  80 85 00 04 */	lwz r4, 0x4(r5)
/* 801102DC 0010D3BC  7C 03 20 00 */	cmpw r3, r4
/* 801102E0 0010D3C0  41 81 00 3C */	bgt .L_8011031C
/* 801102E4 0010D3C4  40 82 00 20 */	bne .L_80110304
/* 801102E8 0010D3C8  88 05 00 08 */	lbz r0, 0x8(r5)
/* 801102EC 0010D3CC  28 00 00 00 */	cmplwi r0, 0x0
/* 801102F0 0010D3D0  41 82 00 0C */	beq .L_801102FC
/* 801102F4 0010D3D4  4B F7 07 CD */	bl zEntPlayer_SNDPlayStreamRandom__F20_tagePlayerStreamSnd20_tagePlayerStreamSndf
/* 801102F8 0010D3D8  48 00 00 24 */	b .L_8011031C
.L_801102FC:
/* 801102FC 0010D3DC  4B F7 04 95 */	bl zEntPlayer_SNDPlay__F14_tagePlayerSndf
/* 80110300 0010D3E0  48 00 00 1C */	b .L_8011031C
.L_80110304:
/* 80110304 0010D3E4  88 05 00 08 */	lbz r0, 0x8(r5)
/* 80110308 0010D3E8  28 00 00 00 */	cmplwi r0, 0x0
/* 8011030C 0010D3EC  41 82 00 0C */	beq .L_80110318
/* 80110310 0010D3F0  4B F7 07 B1 */	bl zEntPlayer_SNDPlayStreamRandom__F20_tagePlayerStreamSnd20_tagePlayerStreamSndf
/* 80110314 0010D3F4  48 00 00 08 */	b .L_8011031C
.L_80110318:
/* 80110318 0010D3F8  4B F7 0B DD */	bl zEntPlayer_SNDPlayRandom__F14_tagePlayerSnd14_tagePlayerSndf
.L_8011031C:
/* 8011031C 0010D3FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80110320 0010D400  7C 08 03 A6 */	mtlr r0
/* 80110324 0010D404  38 21 00 10 */	addi r1, r1, 0x10
/* 80110328 0010D408  4E 80 00 20 */	blr
.endfn "play_sound__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FQ312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10sound_enumf"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::stop_sound(int)
.fn "stop_sound__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fi", local
/* 8011032C 0010D40C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80110330 0010D410  7C 08 02 A6 */	mflr r0
/* 80110334 0010D414  1C 83 00 0C */	mulli r4, r3, 0xc
/* 80110338 0010D418  3C 60 80 27 */	lis r3, "sound_groups__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 8011033C 0010D41C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80110340 0010D420  38 03 A5 70 */	addi r0, r3, "sound_groups__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80110344 0010D424  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80110348 0010D428  7F E0 22 14 */	add r31, r0, r4
/* 8011034C 0010D42C  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 80110350 0010D430  80 1F 00 04 */	lwz r0, 0x4(r31)
/* 80110354 0010D434  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80110358 0010D438  7C 03 00 00 */	cmpw r3, r0
/* 8011035C 0010D43C  41 81 00 30 */	bgt .L_8011038C
/* 80110360 0010D440  88 1F 00 08 */	lbz r0, 0x8(r31)
/* 80110364 0010D444  28 00 00 00 */	cmplwi r0, 0x0
/* 80110368 0010D448  40 82 00 24 */	bne .L_8011038C
/* 8011036C 0010D44C  7C 7E 1B 78 */	mr r30, r3
/* 80110370 0010D450  48 00 00 10 */	b .L_80110380
.L_80110374:
/* 80110374 0010D454  7F C3 F3 78 */	mr r3, r30
/* 80110378 0010D458  4B F7 0E C9 */	bl zEntPlayer_SNDStop__F14_tagePlayerSnd
/* 8011037C 0010D45C  3B DE 00 01 */	addi r30, r30, 0x1
.L_80110380:
/* 80110380 0010D460  80 1F 00 04 */	lwz r0, 0x4(r31)
/* 80110384 0010D464  7C 1E 00 00 */	cmpw r30, r0
/* 80110388 0010D468  40 81 FF EC */	ble .L_80110374
.L_8011038C:
/* 8011038C 0010D46C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80110390 0010D470  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80110394 0010D474  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80110398 0010D478  7C 08 03 A6 */	mtlr r0
/* 8011039C 0010D47C  38 21 00 10 */	addi r1, r1, 0x10
/* 801103A0 0010D480  4E 80 00 20 */	blr
.endfn "stop_sound__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fi"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::set_volume(int, float)
.fn "set_volume__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fif", local
/* 801103A4 0010D484  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801103A8 0010D488  7C 08 02 A6 */	mflr r0
/* 801103AC 0010D48C  1C 83 00 0C */	mulli r4, r3, 0xc
/* 801103B0 0010D490  3C 60 80 27 */	lis r3, "sound_groups__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801103B4 0010D494  90 01 00 24 */	stw r0, 0x24(r1)
/* 801103B8 0010D498  38 03 A5 70 */	addi r0, r3, "sound_groups__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801103BC 0010D49C  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 801103C0 0010D4A0  FF E0 08 90 */	fmr f31, f1
/* 801103C4 0010D4A4  93 E1 00 14 */	stw r31, 0x14(r1)
/* 801103C8 0010D4A8  7F E0 22 14 */	add r31, r0, r4
/* 801103CC 0010D4AC  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 801103D0 0010D4B0  80 1F 00 04 */	lwz r0, 0x4(r31)
/* 801103D4 0010D4B4  93 C1 00 10 */	stw r30, 0x10(r1)
/* 801103D8 0010D4B8  7C 03 00 00 */	cmpw r3, r0
/* 801103DC 0010D4BC  41 81 00 34 */	bgt .L_80110410
/* 801103E0 0010D4C0  88 1F 00 08 */	lbz r0, 0x8(r31)
/* 801103E4 0010D4C4  28 00 00 00 */	cmplwi r0, 0x0
/* 801103E8 0010D4C8  40 82 00 28 */	bne .L_80110410
/* 801103EC 0010D4CC  7C 7E 1B 78 */	mr r30, r3
/* 801103F0 0010D4D0  48 00 00 14 */	b .L_80110404
.L_801103F4:
/* 801103F4 0010D4D4  FC 20 F8 90 */	fmr f1, f31
/* 801103F8 0010D4D8  7F C3 F3 78 */	mr r3, r30
/* 801103FC 0010D4DC  4B F7 0D 9D */	bl zEntPlayer_SNDSetVol__F14_tagePlayerSndf
/* 80110400 0010D4E0  3B DE 00 01 */	addi r30, r30, 0x1
.L_80110404:
/* 80110404 0010D4E4  80 1F 00 04 */	lwz r0, 0x4(r31)
/* 80110408 0010D4E8  7C 1E 00 00 */	cmpw r30, r0
/* 8011040C 0010D4EC  40 81 FF E8 */	ble .L_801103F4
.L_80110410:
/* 80110410 0010D4F0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80110414 0010D4F4  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80110418 0010D4F8  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8011041C 0010D4FC  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 80110420 0010D500  7C 08 03 A6 */	mtlr r0
/* 80110424 0010D504  38 21 00 20 */	addi r1, r1, 0x20
/* 80110428 0010D508  4E 80 00 20 */	blr
.endfn "set_volume__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fif"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::init_models()
.fn "init_models__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv", local
/* 8011042C 0010D50C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80110430 0010D510  7C 08 02 A6 */	mflr r0
/* 80110434 0010D514  3C 60 80 3C */	lis r3, globals@ha
/* 80110438 0010D518  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 8011043C 0010D51C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80110440 0010D520  38 C3 05 58 */	addi r6, r3, globals@l
/* 80110444 0010D524  38 84 7A 68 */	addi r4, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80110448 0010D528  80 66 1F 58 */	lwz r3, 0x1f58(r6)
/* 8011044C 0010D52C  80 A6 07 04 */	lwz r5, 0x704(r6)
/* 80110450 0010D530  80 06 1F 54 */	lwz r0, 0x1f54(r6)
/* 80110454 0010D534  90 A4 01 68 */	stw r5, 0x168(r4)
/* 80110458 0010D538  90 04 01 6C */	stw r0, 0x16c(r4)
/* 8011045C 0010D53C  90 64 01 70 */	stw r3, 0x170(r4)
/* 80110460 0010D540  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 80110464 0010D544  70 00 DF FF */	andi. r0, r0, 0xdfff
/* 80110468 0010D548  60 04 00 08 */	ori r4, r0, 0x8
/* 8011046C 0010D54C  4B F2 3F ED */	bl xModelInstanceUpgradeBrotherShared__FP14xModelInstanceUi
/* 80110470 0010D550  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80110474 0010D554  7C 08 03 A6 */	mtlr r0
/* 80110478 0010D558  38 21 00 10 */	addi r1, r1, 0x10
/* 8011047C 0010D55C  4E 80 00 20 */	blr
.endfn "init_models__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::show_models()
.fn "show_models__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv", local
/* 80110480 0010D560  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80110484 0010D564  38 83 7A 68 */	addi r4, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80110488 0010D568  80 64 01 6C */	lwz r3, 0x16c(r4)
/* 8011048C 0010D56C  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 80110490 0010D570  60 00 00 03 */	ori r0, r0, 0x3
/* 80110494 0010D574  B0 03 00 44 */	sth r0, 0x44(r3)
/* 80110498 0010D578  80 64 01 70 */	lwz r3, 0x170(r4)
/* 8011049C 0010D57C  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 801104A0 0010D580  70 00 FF F7 */	andi. r0, r0, 0xfff7
/* 801104A4 0010D584  B0 03 00 44 */	sth r0, 0x44(r3)
/* 801104A8 0010D588  80 64 01 70 */	lwz r3, 0x170(r4)
/* 801104AC 0010D58C  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 801104B0 0010D590  60 00 00 22 */	ori r0, r0, 0x22
/* 801104B4 0010D594  B0 03 00 44 */	sth r0, 0x44(r3)
/* 801104B8 0010D598  80 84 01 70 */	lwz r4, 0x170(r4)
/* 801104BC 0010D59C  80 64 00 10 */	lwz r3, 0x10(r4)
/* 801104C0 0010D5A0  C0 03 00 28 */	lfs f0, 0x28(r3)
/* 801104C4 0010D5A4  D0 0D 94 F0 */	stfs f0, "old_pants_clip_radius__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@sda21(r13)
/* 801104C8 0010D5A8  C0 02 9E 80 */	lfs f0, "@945"@sda21(r2)
/* 801104CC 0010D5AC  80 64 00 10 */	lwz r3, 0x10(r4)
/* 801104D0 0010D5B0  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 801104D4 0010D5B4  4E 80 00 20 */	blr
.endfn "show_models__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hide_models()
.fn "hide_models__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv", local
/* 801104D8 0010D5B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801104DC 0010D5BC  7C 08 02 A6 */	mflr r0
/* 801104E0 0010D5C0  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801104E4 0010D5C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801104E8 0010D5C8  38 83 7A 68 */	addi r4, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801104EC 0010D5CC  80 64 01 70 */	lwz r3, 0x170(r4)
/* 801104F0 0010D5D0  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 801104F4 0010D5D4  70 00 FF DC */	andi. r0, r0, 0xffdc
/* 801104F8 0010D5D8  B0 03 00 44 */	sth r0, 0x44(r3)
/* 801104FC 0010D5DC  80 64 01 70 */	lwz r3, 0x170(r4)
/* 80110500 0010D5E0  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 80110504 0010D5E4  60 00 00 08 */	ori r0, r0, 0x8
/* 80110508 0010D5E8  B0 03 00 44 */	sth r0, 0x44(r3)
/* 8011050C 0010D5EC  80 64 01 70 */	lwz r3, 0x170(r4)
/* 80110510 0010D5F0  C0 0D 94 F0 */	lfs f0, "old_pants_clip_radius__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@sda21(r13)
/* 80110514 0010D5F4  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80110518 0010D5F8  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 8011051C 0010D5FC  4B F8 95 E9 */	bl zGameExtras_CheatFlags__Fv
/* 80110520 0010D600  54 60 00 C7 */	rlwinm. r0, r3, 0, 3, 3
/* 80110524 0010D604  41 82 00 20 */	beq .L_80110544
/* 80110528 0010D608  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 8011052C 0010D60C  38 63 7A 68 */	addi r3, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80110530 0010D610  80 63 01 6C */	lwz r3, 0x16c(r3)
/* 80110534 0010D614  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 80110538 0010D618  60 00 00 03 */	ori r0, r0, 0x3
/* 8011053C 0010D61C  B0 03 00 44 */	sth r0, 0x44(r3)
/* 80110540 0010D620  48 00 00 1C */	b .L_8011055C
.L_80110544:
/* 80110544 0010D624  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80110548 0010D628  38 63 7A 68 */	addi r3, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 8011054C 0010D62C  80 63 01 6C */	lwz r3, 0x16c(r3)
/* 80110550 0010D630  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 80110554 0010D634  54 00 04 3A */	rlwinm r0, r0, 0, 16, 29
/* 80110558 0010D638  B0 03 00 44 */	sth r0, 0x44(r3)
.L_8011055C:
/* 8011055C 0010D63C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80110560 0010D640  7C 08 03 A6 */	mtlr r0
/* 80110564 0010D644  38 21 00 10 */	addi r1, r1, 0x10
/* 80110568 0010D648  4E 80 00 20 */	blr
.endfn "hide_models__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::render_player(bool)
.fn "render_player__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fb", local
/* 8011056C 0010D64C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80110570 0010D650  7C 08 02 A6 */	mflr r0
/* 80110574 0010D654  3C 80 80 3C */	lis r4, globals@ha
/* 80110578 0010D658  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011057C 0010D65C  38 84 05 58 */	addi r4, r4, globals@l
/* 80110580 0010D660  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80110584 0010D664  3B E4 06 E0 */	addi r31, r4, 0x6e0
/* 80110588 0010D668  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8011058C 0010D66C  7C 7E 1B 78 */	mr r30, r3
/* 80110590 0010D670  7F E3 FB 78 */	mr r3, r31
/* 80110594 0010D674  C0 22 9E 84 */	lfs f1, "@960"@sda21(r2)
/* 80110598 0010D678  4B F3 50 35 */	bl xShadowRender__FP4xEntf
/* 8011059C 0010D67C  7F E3 FB 78 */	mr r3, r31
/* 801105A0 0010D680  4B F0 8F 2D */	bl xEntRender__FP4xEnt
/* 801105A4 0010D684  57 C0 06 3F */	clrlwi. r0, r30, 24
/* 801105A8 0010D688  41 82 00 24 */	beq .L_801105CC
/* 801105AC 0010D68C  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801105B0 0010D690  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801105B4 0010D694  38 A4 7A 68 */	addi r5, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801105B8 0010D698  C0 22 9E 88 */	lfs f1, "@961"@sda21(r2)
/* 801105BC 0010D69C  38 83 37 88 */	addi r4, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801105C0 0010D6A0  80 65 01 70 */	lwz r3, 0x170(r5)
/* 801105C4 0010D6A4  C0 44 00 20 */	lfs f2, 0x20(r4)
/* 801105C8 0010D6A8  4B F1 77 BD */	bl xFXRenderProximityFade__FRC14xModelInstanceff
.L_801105CC:
/* 801105CC 0010D6AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801105D0 0010D6B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801105D4 0010D6B4  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 801105D8 0010D6B8  7C 08 03 A6 */	mtlr r0
/* 801105DC 0010D6BC  38 21 00 10 */	addi r1, r1, 0x10
/* 801105E0 0010D6C0  4E 80 00 20 */	blr
.endfn "render_player__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fb"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::move_wedgie(const xVec3&)
.fn "move_wedgie__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FRC5xVec3", local
/* 801105E4 0010D6C4  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 801105E8 0010D6C8  7C 08 02 A6 */	mflr r0
/* 801105EC 0010D6CC  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801105F0 0010D6D0  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 801105F4 0010D6D4  93 E1 00 DC */	stw r31, 0xdc(r1)
/* 801105F8 0010D6D8  3B E4 7A 68 */	addi r31, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801105FC 0010D6DC  93 C1 00 D8 */	stw r30, 0xd8(r1)
/* 80110600 0010D6E0  93 A1 00 D4 */	stw r29, 0xd4(r1)
/* 80110604 0010D6E4  7C 7D 1B 78 */	mr r29, r3
/* 80110608 0010D6E8  80 1F 01 6C */	lwz r0, 0x16c(r31)
/* 8011060C 0010D6EC  28 00 00 00 */	cmplwi r0, 0x0
/* 80110610 0010D6F0  41 82 01 40 */	beq .L_80110750
/* 80110614 0010D6F4  80 9F 01 70 */	lwz r4, 0x170(r31)
/* 80110618 0010D6F8  28 04 00 00 */	cmplwi r4, 0x0
/* 8011061C 0010D6FC  40 82 00 08 */	bne .L_80110624
/* 80110620 0010D700  48 00 01 30 */	b .L_80110750
.L_80110624:
/* 80110624 0010D704  80 7F 01 68 */	lwz r3, 0x168(r31)
/* 80110628 0010D708  80 A4 00 4C */	lwz r5, 0x4c(r4)
/* 8011062C 0010D70C  80 83 00 4C */	lwz r4, 0x4c(r3)
/* 80110630 0010D710  38 65 00 80 */	addi r3, r5, 0x80
/* 80110634 0010D714  38 84 00 80 */	addi r4, r4, 0x80
/* 80110638 0010D718  4B F2 43 65 */	bl __as__11RwMatrixTagFRC11RwMatrixTag
/* 8011063C 0010D71C  80 9F 01 68 */	lwz r4, 0x168(r31)
/* 80110640 0010D720  38 61 00 88 */	addi r3, r1, 0x88
/* 80110644 0010D724  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80110648 0010D728  4B F0 4B 5D */	bl xMat4x3OrthoInv__FP7xMat4x3PC7xMat4x3
/* 8011064C 0010D72C  38 61 00 48 */	addi r3, r1, 0x48
/* 80110650 0010D730  4B EF E9 BD */	bl xMat3x3Identity__FP7xMat3x3
/* 80110654 0010D734  3B C1 00 78 */	addi r30, r1, 0x78
/* 80110658 0010D738  7F A4 EB 78 */	mr r4, r29
/* 8011065C 0010D73C  7F C3 F3 78 */	mr r3, r30
/* 80110660 0010D740  4B EF AC 05 */	bl __as__5xVec3FRC5xVec3
/* 80110664 0010D744  88 0D 94 F5 */	lbz r0, init$1012@sda21(r13)
/* 80110668 0010D748  7C 00 07 75 */	extsb. r0, r0
/* 8011066C 0010D74C  40 82 00 14 */	bne .L_80110680
/* 80110670 0010D750  38 60 00 00 */	li r3, 0x0
/* 80110674 0010D754  38 00 00 01 */	li r0, 0x1
/* 80110678 0010D758  98 6D 94 F4 */	stb r3, registered$1011@sda21(r13)
/* 8011067C 0010D75C  98 0D 94 F5 */	stb r0, init$1012@sda21(r13)
.L_80110680:
/* 80110680 0010D760  88 0D 94 F4 */	lbz r0, registered$1011@sda21(r13)
/* 80110684 0010D764  28 00 00 00 */	cmplwi r0, 0x0
/* 80110688 0010D768  40 82 00 94 */	bne .L_8011071C
/* 8011068C 0010D76C  38 00 00 01 */	li r0, 0x1
/* 80110690 0010D770  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80110694 0010D774  98 0D 94 F4 */	stb r0, registered$1011@sda21(r13)
/* 80110698 0010D778  3C 80 80 29 */	lis r4, tweak_cord_off$1014@ha
/* 8011069C 0010D77C  38 63 A6 88 */	addi r3, r3, "@stringBase0"@l
/* 801106A0 0010D780  38 A0 00 00 */	li r5, 0x0
/* 801106A4 0010D784  C0 22 9E 94 */	lfs f1, "@1028"@sda21(r2)
/* 801106A8 0010D788  38 84 7C 04 */	addi r4, r4, tweak_cord_off$1014@l
/* 801106AC 0010D78C  C0 42 9E 98 */	lfs f2, "@1029"@sda21(r2)
/* 801106B0 0010D790  38 C0 00 00 */	li r6, 0x0
/* 801106B4 0010D794  38 E0 00 00 */	li r7, 0x0
/* 801106B8 0010D798  4B F1 FF 75 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 801106BC 0010D79C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801106C0 0010D7A0  3C 60 80 29 */	lis r3, tweak_cord_off$1014@ha
/* 801106C4 0010D7A4  38 A4 A6 88 */	addi r5, r4, "@stringBase0"@l
/* 801106C8 0010D7A8  C0 22 9E 94 */	lfs f1, "@1028"@sda21(r2)
/* 801106CC 0010D7AC  38 83 7C 04 */	addi r4, r3, tweak_cord_off$1014@l
/* 801106D0 0010D7B0  C0 42 9E 98 */	lfs f2, "@1029"@sda21(r2)
/* 801106D4 0010D7B4  38 65 00 16 */	addi r3, r5, 0x16
/* 801106D8 0010D7B8  38 A0 00 00 */	li r5, 0x0
/* 801106DC 0010D7BC  38 84 00 04 */	addi r4, r4, 0x4
/* 801106E0 0010D7C0  38 C0 00 00 */	li r6, 0x0
/* 801106E4 0010D7C4  38 E0 00 00 */	li r7, 0x0
/* 801106E8 0010D7C8  4B F1 FF 45 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 801106EC 0010D7CC  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801106F0 0010D7D0  3C 60 80 29 */	lis r3, tweak_cord_off$1014@ha
/* 801106F4 0010D7D4  38 A4 A6 88 */	addi r5, r4, "@stringBase0"@l
/* 801106F8 0010D7D8  C0 22 9E 94 */	lfs f1, "@1028"@sda21(r2)
/* 801106FC 0010D7DC  38 83 7C 04 */	addi r4, r3, tweak_cord_off$1014@l
/* 80110700 0010D7E0  C0 42 9E 98 */	lfs f2, "@1029"@sda21(r2)
/* 80110704 0010D7E4  38 65 00 2C */	addi r3, r5, 0x2c
/* 80110708 0010D7E8  38 A0 00 00 */	li r5, 0x0
/* 8011070C 0010D7EC  38 84 00 08 */	addi r4, r4, 0x8
/* 80110710 0010D7F0  38 C0 00 00 */	li r6, 0x0
/* 80110714 0010D7F4  38 E0 00 00 */	li r7, 0x0
/* 80110718 0010D7F8  4B F1 FF 15 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
.L_8011071C:
/* 8011071C 0010D7FC  3C 80 80 29 */	lis r4, tweak_cord_off$1014@ha
/* 80110720 0010D800  7F C3 F3 78 */	mr r3, r30
/* 80110724 0010D804  38 84 7C 04 */	addi r4, r4, tweak_cord_off$1014@l
/* 80110728 0010D808  4B F0 4D 1D */	bl __apl__5xVec3FRC5xVec3
/* 8011072C 0010D80C  38 61 00 08 */	addi r3, r1, 0x8
/* 80110730 0010D810  38 81 00 48 */	addi r4, r1, 0x48
/* 80110734 0010D814  38 A1 00 88 */	addi r5, r1, 0x88
/* 80110738 0010D818  4B F2 24 E1 */	bl xMat4x3Mul__FP7xMat4x3PC7xMat4x3PC7xMat4x3
/* 8011073C 0010D81C  80 7F 01 70 */	lwz r3, 0x170(r31)
/* 80110740 0010D820  38 81 00 08 */	addi r4, r1, 0x8
/* 80110744 0010D824  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80110748 0010D828  38 63 08 80 */	addi r3, r3, 0x880
/* 8011074C 0010D82C  4B F2 42 51 */	bl __as__11RwMatrixTagFRC11RwMatrixTag
.L_80110750:
/* 80110750 0010D830  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 80110754 0010D834  83 E1 00 DC */	lwz r31, 0xdc(r1)
/* 80110758 0010D838  83 C1 00 D8 */	lwz r30, 0xd8(r1)
/* 8011075C 0010D83C  83 A1 00 D4 */	lwz r29, 0xd4(r1)
/* 80110760 0010D840  7C 08 03 A6 */	mtlr r0
/* 80110764 0010D844  38 21 00 E0 */	addi r1, r1, 0xe0
/* 80110768 0010D848  4E 80 00 20 */	blr
.endfn "move_wedgie__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FRC5xVec3"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::update_hook_loc()
.fn "update_hook_loc__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv", local
/* 8011076C 0010D84C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80110770 0010D850  7C 08 02 A6 */	mflr r0
/* 80110774 0010D854  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80110778 0010D858  90 01 00 24 */	stw r0, 0x24(r1)
/* 8011077C 0010D85C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80110780 0010D860  3B E3 7A 68 */	addi r31, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80110784 0010D864  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 80110788 0010D868  28 03 00 00 */	cmplwi r3, 0x0
/* 8011078C 0010D86C  41 82 00 44 */	beq .L_801107D0
/* 80110790 0010D870  80 63 00 14 */	lwz r3, 0x14(r3)
/* 80110794 0010D874  28 03 00 00 */	cmplwi r3, 0x0
/* 80110798 0010D878  40 82 00 08 */	bne .L_801107A0
/* 8011079C 0010D87C  48 00 00 34 */	b .L_801107D0
.L_801107A0:
/* 801107A0 0010D880  4B F0 B0 69 */	bl xEntGetPos__FPC4xEnt
/* 801107A4 0010D884  80 BF 00 3C */	lwz r5, 0x3c(r31)
/* 801107A8 0010D888  7C 64 1B 78 */	mr r4, r3
/* 801107AC 0010D88C  38 61 00 08 */	addi r3, r1, 0x8
/* 801107B0 0010D890  80 A5 00 10 */	lwz r5, 0x10(r5)
/* 801107B4 0010D894  38 A5 00 14 */	addi r5, r5, 0x14
/* 801107B8 0010D898  4B F0 4C 29 */	bl __pl__5xVec3CFRC5xVec3
/* 801107BC 0010D89C  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801107C0 0010D8A0  38 81 00 08 */	addi r4, r1, 0x8
/* 801107C4 0010D8A4  38 63 7A 68 */	addi r3, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801107C8 0010D8A8  38 63 01 74 */	addi r3, r3, 0x174
/* 801107CC 0010D8AC  4B EF AA 99 */	bl __as__5xVec3FRC5xVec3
.L_801107D0:
/* 801107D0 0010D8B0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801107D4 0010D8B4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801107D8 0010D8B8  7C 08 03 A6 */	mtlr r0
/* 801107DC 0010D8BC  38 21 00 20 */	addi r1, r1, 0x20
/* 801107E0 0010D8C0  4E 80 00 20 */	blr
.endfn "update_hook_loc__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::find_drop_off()
.fn "find_drop_off__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv", local
/* 801107E4 0010D8C4  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801107E8 0010D8C8  7C 08 02 A6 */	mflr r0
/* 801107EC 0010D8CC  90 01 00 54 */	stw r0, 0x54(r1)
/* 801107F0 0010D8D0  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 801107F4 0010D8D4  F3 E1 00 48 */	psq_st f31, 0x48(r1), 0, qr0
/* 801107F8 0010D8D8  BF 61 00 2C */	stmw r27, 0x2c(r1)
/* 801107FC 0010D8DC  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80110800 0010D8E0  3B 80 FF FF */	li r28, -0x1
/* 80110804 0010D8E4  3B E3 7A 68 */	addi r31, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80110808 0010D8E8  3B 60 00 00 */	li r27, 0x0
/* 8011080C 0010D8EC  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 80110810 0010D8F0  7F FE FB 78 */	mr r30, r31
/* 80110814 0010D8F4  3B BF 01 74 */	addi r29, r31, 0x174
/* 80110818 0010D8F8  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8011081C 0010D8FC  C0 03 00 28 */	lfs f0, 0x28(r3)
/* 80110820 0010D900  EF E0 00 32 */	fmuls f31, f0, f0
/* 80110824 0010D904  48 00 00 50 */	b .L_80110874
.L_80110828:
/* 80110828 0010D908  80 9E 00 E0 */	lwz r4, 0xe0(r30)
/* 8011082C 0010D90C  7F A5 EB 78 */	mr r5, r29
/* 80110830 0010D910  38 61 00 08 */	addi r3, r1, 0x8
/* 80110834 0010D914  4B EF A9 99 */	bl __mi__5xVec3CFRC5xVec3
/* 80110838 0010D918  80 A1 00 08 */	lwz r5, 0x8(r1)
/* 8011083C 0010D91C  38 61 00 14 */	addi r3, r1, 0x14
/* 80110840 0010D920  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80110844 0010D924  80 01 00 10 */	lwz r0, 0x10(r1)
/* 80110848 0010D928  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8011084C 0010D92C  90 81 00 18 */	stw r4, 0x18(r1)
/* 80110850 0010D930  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80110854 0010D934  4B EF A8 A9 */	bl length2__5xVec3CFv
/* 80110858 0010D938  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 8011085C 0010D93C  4C 41 13 82 */	cror eq, gt, eq
/* 80110860 0010D940  41 82 00 0C */	beq .L_8011086C
/* 80110864 0010D944  7F 7C DB 78 */	mr r28, r27
/* 80110868 0010D948  FF E0 08 90 */	fmr f31, f1
.L_8011086C:
/* 8011086C 0010D94C  3B DE 00 04 */	addi r30, r30, 0x4
/* 80110870 0010D950  3B 7B 00 01 */	addi r27, r27, 0x1
.L_80110874:
/* 80110874 0010D954  80 1F 01 64 */	lwz r0, 0x164(r31)
/* 80110878 0010D958  7C 1B 00 00 */	cmpw r27, r0
/* 8011087C 0010D95C  41 80 FF AC */	blt .L_80110828
/* 80110880 0010D960  2C 1C FF FF */	cmpwi r28, -0x1
/* 80110884 0010D964  41 82 00 58 */	beq .L_801108DC
/* 80110888 0010D968  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 8011088C 0010D96C  57 9D 10 3A */	slwi r29, r28, 2
/* 80110890 0010D970  38 A3 7A 68 */	addi r5, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80110894 0010D974  7C 65 EA 14 */	add r3, r5, r29
/* 80110898 0010D978  80 83 00 E0 */	lwz r4, 0xe0(r3)
/* 8011089C 0010D97C  38 65 01 80 */	addi r3, r5, 0x180
/* 801108A0 0010D980  4B EF A9 C5 */	bl __as__5xVec3FRC5xVec3
/* 801108A4 0010D984  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801108A8 0010D988  38 60 00 01 */	li r3, 0x1
/* 801108AC 0010D98C  38 A4 7A 68 */	addi r5, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801108B0 0010D990  7C C5 EA 14 */	add r6, r5, r29
/* 801108B4 0010D994  80 86 00 60 */	lwz r4, 0x60(r6)
/* 801108B8 0010D998  80 84 00 14 */	lwz r4, 0x14(r4)
/* 801108BC 0010D99C  7C 04 00 D0 */	neg r0, r4
/* 801108C0 0010D9A0  7C 00 23 78 */	or r0, r0, r4
/* 801108C4 0010D9A4  54 00 0F FE */	srwi r0, r0, 31
/* 801108C8 0010D9A8  98 05 01 8C */	stb r0, 0x18c(r5)
/* 801108CC 0010D9AC  80 86 00 60 */	lwz r4, 0x60(r6)
/* 801108D0 0010D9B0  C0 04 00 18 */	lfs f0, 0x18(r4)
/* 801108D4 0010D9B4  D0 05 01 90 */	stfs f0, 0x190(r5)
/* 801108D8 0010D9B8  48 00 00 08 */	b .L_801108E0
.L_801108DC:
/* 801108DC 0010D9BC  38 60 00 00 */	li r3, 0x0
.L_801108E0:
/* 801108E0 0010D9C0  E3 E1 00 48 */	psq_l f31, 0x48(r1), 0, qr0
/* 801108E4 0010D9C4  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 801108E8 0010D9C8  BB 61 00 2C */	lmw r27, 0x2c(r1)
/* 801108EC 0010D9CC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801108F0 0010D9D0  7C 08 03 A6 */	mtlr r0
/* 801108F4 0010D9D4  38 21 00 50 */	addi r1, r1, 0x50
/* 801108F8 0010D9D8  4E 80 00 20 */	blr
.endfn "find_drop_off__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::trigger(unsigned int)
.fn "trigger__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FUi", local
/* 801108FC 0010D9DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80110900 0010D9E0  7C 08 02 A6 */	mflr r0
/* 80110904 0010D9E4  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80110908 0010D9E8  7C 65 1B 78 */	mr r5, r3
/* 8011090C 0010D9EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80110910 0010D9F0  38 84 7A 68 */	addi r4, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80110914 0010D9F4  80 84 00 3C */	lwz r4, 0x3c(r4)
/* 80110918 0010D9F8  7C 83 23 78 */	mr r3, r4
/* 8011091C 0010D9FC  4B F0 ED C5 */	bl zEntEvent__FP5xBaseP5xBaseUi
/* 80110920 0010DA00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80110924 0010DA04  7C 08 03 A6 */	mtlr r0
/* 80110928 0010DA08  38 21 00 10 */	addi r1, r1, 0x10
/* 8011092C 0010DA0C  4E 80 00 20 */	blr
.endfn "trigger__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FUi"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::on_tweak_collision(const tweak_info&)
.fn "on_tweak_collision__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC10tweak_info", local
/* 80110930 0010DA10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80110934 0010DA14  7C 08 02 A6 */	mflr r0
/* 80110938 0010DA18  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8011093C 0010DA1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80110940 0010DA20  48 00 00 15 */	bl "reset_props_collision__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv"
/* 80110944 0010DA24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80110948 0010DA28  7C 08 03 A6 */	mtlr r0
/* 8011094C 0010DA2C  38 21 00 10 */	addi r1, r1, 0x10
/* 80110950 0010DA30  4E 80 00 20 */	blr
.endfn "on_tweak_collision__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC10tweak_info"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::reset_props_collision()
.fn "reset_props_collision__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv", local
/* 80110954 0010DA34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80110958 0010DA38  7C 08 02 A6 */	mflr r0
/* 8011095C 0010DA3C  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80110960 0010DA40  90 01 00 14 */	stw r0, 0x14(r1)
/* 80110964 0010DA44  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80110968 0010DA48  7C 7F 1B 78 */	mr r31, r3
/* 8011096C 0010DA4C  38 64 7A 68 */	addi r3, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80110970 0010DA50  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 80110974 0010DA54  28 03 00 00 */	cmplwi r3, 0x0
/* 80110978 0010DA58  41 82 00 64 */	beq .L_801109DC
/* 8011097C 0010DA5C  80 83 00 10 */	lwz r4, 0x10(r3)
/* 80110980 0010DA60  38 7F 01 8C */	addi r3, r31, 0x18c
/* 80110984 0010DA64  38 84 00 80 */	addi r4, r4, 0x80
/* 80110988 0010DA68  48 00 00 69 */	bl "__as__Q312bungee_state10hook_asset35@class$913zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35@class$913zEntPlayerBungeeState_cpp"
/* 8011098C 0010DA6C  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80110990 0010DA70  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 80110994 0010DA74  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 80110998 0010DA78  40 82 00 10 */	bne .L_801109A8
/* 8011099C 0010DA7C  C0 02 9E A4 */	lfs f0, "@1784"@sda21(r2)
/* 801109A0 0010DA80  D0 1F 01 90 */	stfs f0, 0x190(r31)
/* 801109A4 0010DA84  48 00 00 10 */	b .L_801109B4
.L_801109A8:
/* 801109A8 0010DA88  C0 1F 00 A8 */	lfs f0, 0xa8(r31)
/* 801109AC 0010DA8C  EC 01 00 32 */	fmuls f0, f1, f0
/* 801109B0 0010DA90  D0 1F 01 90 */	stfs f0, 0x190(r31)
.L_801109B4:
/* 801109B4 0010DA94  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 801109B8 0010DA98  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 801109BC 0010DA9C  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 801109C0 0010DAA0  40 82 00 10 */	bne .L_801109D0
/* 801109C4 0010DAA4  C0 02 9E A4 */	lfs f0, "@1784"@sda21(r2)
/* 801109C8 0010DAA8  D0 1F 01 94 */	stfs f0, 0x194(r31)
/* 801109CC 0010DAAC  48 00 00 10 */	b .L_801109DC
.L_801109D0:
/* 801109D0 0010DAB0  C0 1F 00 A8 */	lfs f0, 0xa8(r31)
/* 801109D4 0010DAB4  EC 01 00 32 */	fmuls f0, f1, f0
/* 801109D8 0010DAB8  D0 1F 01 94 */	stfs f0, 0x194(r31)
.L_801109DC:
/* 801109DC 0010DABC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801109E0 0010DAC0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801109E4 0010DAC4  7C 08 03 A6 */	mtlr r0
/* 801109E8 0010DAC8  38 21 00 10 */	addi r1, r1, 0x10
/* 801109EC 0010DACC  4E 80 00 20 */	blr
.endfn "reset_props_collision__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv"

# bungee_state::hook_asset::@class$913zEntPlayerBungeeState_cpp::operator=(const bungee_state::hook_asset::@class$913zEntPlayerBungeeState_cpp&)
.fn "__as__Q312bungee_state10hook_asset35@class$913zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35@class$913zEntPlayerBungeeState_cpp", weak
/* 801109F0 0010DAD0  C0 04 00 00 */	lfs f0, 0x0(r4)
/* 801109F4 0010DAD4  C0 24 00 04 */	lfs f1, 0x4(r4)
/* 801109F8 0010DAD8  D0 03 00 00 */	stfs f0, 0x0(r3)
/* 801109FC 0010DADC  C0 04 00 08 */	lfs f0, 0x8(r4)
/* 80110A00 0010DAE0  D0 23 00 04 */	stfs f1, 0x4(r3)
/* 80110A04 0010DAE4  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 80110A08 0010DAE8  4E 80 00 20 */	blr
.endfn "__as__Q312bungee_state10hook_asset35@class$913zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35@class$913zEntPlayerBungeeState_cpp"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::on_tweak_camera(const tweak_info&)
.fn "on_tweak_camera__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC10tweak_info", local
/* 80110A0C 0010DAEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80110A10 0010DAF0  7C 08 02 A6 */	mflr r0
/* 80110A14 0010DAF4  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80110A18 0010DAF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80110A1C 0010DAFC  48 00 00 15 */	bl "reset_props_camera__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv"
/* 80110A20 0010DB00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80110A24 0010DB04  7C 08 03 A6 */	mtlr r0
/* 80110A28 0010DB08  38 21 00 10 */	addi r1, r1, 0x10
/* 80110A2C 0010DB0C  4E 80 00 20 */	blr
.endfn "on_tweak_camera__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC10tweak_info"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::reset_props_camera()
.fn "reset_props_camera__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv", local
/* 80110A30 0010DB10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80110A34 0010DB14  7C 08 02 A6 */	mflr r0
/* 80110A38 0010DB18  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80110A3C 0010DB1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80110A40 0010DB20  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80110A44 0010DB24  7C 7F 1B 78 */	mr r31, r3
/* 80110A48 0010DB28  38 64 7A 68 */	addi r3, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80110A4C 0010DB2C  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 80110A50 0010DB30  28 03 00 00 */	cmplwi r3, 0x0
/* 80110A54 0010DB34  41 82 00 64 */	beq .L_80110AB8
/* 80110A58 0010DB38  80 83 00 10 */	lwz r4, 0x10(r3)
/* 80110A5C 0010DB3C  38 7F 01 64 */	addi r3, r31, 0x164
/* 80110A60 0010DB40  38 84 00 58 */	addi r4, r4, 0x58
/* 80110A64 0010DB44  48 00 00 69 */	bl "__as__Q312bungee_state10hook_asset35@class$912zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35@class$912zEntPlayerBungeeState_cpp"
/* 80110A68 0010DB48  C0 3F 01 78 */	lfs f1, 0x178(r31)
/* 80110A6C 0010DB4C  C0 1F 00 A8 */	lfs f0, 0xa8(r31)
/* 80110A70 0010DB50  EC 01 00 24 */	fdivs f0, f1, f0
/* 80110A74 0010DB54  D0 1F 01 78 */	stfs f0, 0x178(r31)
/* 80110A78 0010DB58  C0 3F 01 68 */	lfs f1, 0x168(r31)
/* 80110A7C 0010DB5C  C0 02 9E A8 */	lfs f0, "@1792"@sda21(r2)
/* 80110A80 0010DB60  EC 01 00 32 */	fmuls f0, f1, f0
/* 80110A84 0010DB64  D0 1F 01 68 */	stfs f0, 0x168(r31)
/* 80110A88 0010DB68  C0 3F 01 70 */	lfs f1, 0x170(r31)
/* 80110A8C 0010DB6C  C0 02 9E A8 */	lfs f0, "@1792"@sda21(r2)
/* 80110A90 0010DB70  EC 01 00 32 */	fmuls f0, f1, f0
/* 80110A94 0010DB74  D0 1F 01 70 */	stfs f0, 0x170(r31)
/* 80110A98 0010DB78  C0 3F 01 70 */	lfs f1, 0x170(r31)
/* 80110A9C 0010DB7C  C0 1F 01 68 */	lfs f0, 0x168(r31)
/* 80110AA0 0010DB80  EC 01 00 28 */	fsubs f0, f1, f0
/* 80110AA4 0010DB84  D0 1F 01 70 */	stfs f0, 0x170(r31)
/* 80110AA8 0010DB88  C0 22 9E 88 */	lfs f1, "@961"@sda21(r2)
/* 80110AAC 0010DB8C  C0 1F 01 7C */	lfs f0, 0x17c(r31)
/* 80110AB0 0010DB90  EC 01 00 28 */	fsubs f0, f1, f0
/* 80110AB4 0010DB94  D0 1F 01 B4 */	stfs f0, 0x1b4(r31)
.L_80110AB8:
/* 80110AB8 0010DB98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80110ABC 0010DB9C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80110AC0 0010DBA0  7C 08 03 A6 */	mtlr r0
/* 80110AC4 0010DBA4  38 21 00 10 */	addi r1, r1, 0x10
/* 80110AC8 0010DBA8  4E 80 00 20 */	blr
.endfn "reset_props_camera__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv"

# bungee_state::hook_asset::@class$912zEntPlayerBungeeState_cpp::operator=(const bungee_state::hook_asset::@class$912zEntPlayerBungeeState_cpp&)
.fn "__as__Q312bungee_state10hook_asset35@class$912zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35@class$912zEntPlayerBungeeState_cpp", weak
/* 80110ACC 0010DBAC  C0 04 00 00 */	lfs f0, 0x0(r4)
/* 80110AD0 0010DBB0  C0 24 00 04 */	lfs f1, 0x4(r4)
/* 80110AD4 0010DBB4  D0 03 00 00 */	stfs f0, 0x0(r3)
/* 80110AD8 0010DBB8  C0 04 00 08 */	lfs f0, 0x8(r4)
/* 80110ADC 0010DBBC  D0 23 00 04 */	stfs f1, 0x4(r3)
/* 80110AE0 0010DBC0  C0 24 00 0C */	lfs f1, 0xc(r4)
/* 80110AE4 0010DBC4  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 80110AE8 0010DBC8  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 80110AEC 0010DBCC  D0 23 00 0C */	stfs f1, 0xc(r3)
/* 80110AF0 0010DBD0  C0 24 00 14 */	lfs f1, 0x14(r4)
/* 80110AF4 0010DBD4  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 80110AF8 0010DBD8  C0 04 00 18 */	lfs f0, 0x18(r4)
/* 80110AFC 0010DBDC  D0 23 00 14 */	stfs f1, 0x14(r3)
/* 80110B00 0010DBE0  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 80110B04 0010DBE4  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 80110B08 0010DBE8  80 A4 00 20 */	lwz r5, 0x20(r4)
/* 80110B0C 0010DBEC  90 03 00 1C */	stw r0, 0x1c(r3)
/* 80110B10 0010DBF0  80 04 00 24 */	lwz r0, 0x24(r4)
/* 80110B14 0010DBF4  90 A3 00 20 */	stw r5, 0x20(r3)
/* 80110B18 0010DBF8  90 03 00 24 */	stw r0, 0x24(r3)
/* 80110B1C 0010DBFC  4E 80 00 20 */	blr
.endfn "__as__Q312bungee_state10hook_asset35@class$912zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35@class$912zEntPlayerBungeeState_cpp"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::on_tweak_horizontal(const tweak_info&)
.fn "on_tweak_horizontal__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC10tweak_info", local
/* 80110B20 0010DC00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80110B24 0010DC04  7C 08 02 A6 */	mflr r0
/* 80110B28 0010DC08  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80110B2C 0010DC0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80110B30 0010DC10  48 00 00 15 */	bl "reset_props_horizontal__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv"
/* 80110B34 0010DC14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80110B38 0010DC18  7C 08 03 A6 */	mtlr r0
/* 80110B3C 0010DC1C  38 21 00 10 */	addi r1, r1, 0x10
/* 80110B40 0010DC20  4E 80 00 20 */	blr
.endfn "on_tweak_horizontal__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC10tweak_info"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::reset_props_horizontal()
.fn "reset_props_horizontal__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv", local
/* 80110B44 0010DC24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80110B48 0010DC28  7C 08 02 A6 */	mflr r0
/* 80110B4C 0010DC2C  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80110B50 0010DC30  90 01 00 14 */	stw r0, 0x14(r1)
/* 80110B54 0010DC34  38 84 7A 68 */	addi r4, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80110B58 0010DC38  80 84 00 3C */	lwz r4, 0x3c(r4)
/* 80110B5C 0010DC3C  28 04 00 00 */	cmplwi r4, 0x0
/* 80110B60 0010DC40  41 82 00 14 */	beq .L_80110B74
/* 80110B64 0010DC44  80 84 00 10 */	lwz r4, 0x10(r4)
/* 80110B68 0010DC48  38 63 01 60 */	addi r3, r3, 0x160
/* 80110B6C 0010DC4C  38 84 00 54 */	addi r4, r4, 0x54
/* 80110B70 0010DC50  48 00 00 15 */	bl "__as__Q312bungee_state10hook_asset35@class$911zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35@class$911zEntPlayerBungeeState_cpp"
.L_80110B74:
/* 80110B74 0010DC54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80110B78 0010DC58  7C 08 03 A6 */	mtlr r0
/* 80110B7C 0010DC5C  38 21 00 10 */	addi r1, r1, 0x10
/* 80110B80 0010DC60  4E 80 00 20 */	blr
.endfn "reset_props_horizontal__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv"

# bungee_state::hook_asset::@class$911zEntPlayerBungeeState_cpp::operator=(const bungee_state::hook_asset::@class$911zEntPlayerBungeeState_cpp&)
.fn "__as__Q312bungee_state10hook_asset35@class$911zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35@class$911zEntPlayerBungeeState_cpp", weak
/* 80110B84 0010DC64  C0 04 00 00 */	lfs f0, 0x0(r4)
/* 80110B88 0010DC68  D0 03 00 00 */	stfs f0, 0x0(r3)
/* 80110B8C 0010DC6C  4E 80 00 20 */	blr
.endfn "__as__Q312bungee_state10hook_asset35@class$911zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35@class$911zEntPlayerBungeeState_cpp"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::on_tweak_vertical(const tweak_info&)
.fn "on_tweak_vertical__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC10tweak_info", local
/* 80110B90 0010DC70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80110B94 0010DC74  7C 08 02 A6 */	mflr r0
/* 80110B98 0010DC78  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80110B9C 0010DC7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80110BA0 0010DC80  48 00 00 15 */	bl "reset_props_vertical__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv"
/* 80110BA4 0010DC84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80110BA8 0010DC88  7C 08 03 A6 */	mtlr r0
/* 80110BAC 0010DC8C  38 21 00 10 */	addi r1, r1, 0x10
/* 80110BB0 0010DC90  4E 80 00 20 */	blr
.endfn "on_tweak_vertical__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC10tweak_info"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::reset_props_vertical()
.fn "reset_props_vertical__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv", local
/* 80110BB4 0010DC94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80110BB8 0010DC98  7C 08 02 A6 */	mflr r0
/* 80110BBC 0010DC9C  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80110BC0 0010DCA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80110BC4 0010DCA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80110BC8 0010DCA8  3B E4 7A 68 */	addi r31, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80110BCC 0010DCAC  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80110BD0 0010DCB0  7C 7E 1B 78 */	mr r30, r3
/* 80110BD4 0010DCB4  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 80110BD8 0010DCB8  28 03 00 00 */	cmplwi r3, 0x0
/* 80110BDC 0010DCBC  41 82 01 44 */	beq .L_80110D20
/* 80110BE0 0010DCC0  80 83 00 10 */	lwz r4, 0x10(r3)
/* 80110BE4 0010DCC4  38 7E 01 48 */	addi r3, r30, 0x148
/* 80110BE8 0010DCC8  38 84 00 3C */	addi r4, r4, 0x3c
/* 80110BEC 0010DCCC  48 00 03 79 */	bl "__as__Q312bungee_state10hook_asset35@class$910zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35@class$910zEntPlayerBungeeState_cpp"
/* 80110BF0 0010DCD0  C0 5E 01 48 */	lfs f2, 0x148(r30)
/* 80110BF4 0010DCD4  C0 02 9E AC */	lfs f0, "@1811"@sda21(r2)
/* 80110BF8 0010DCD8  C0 3E 01 4C */	lfs f1, 0x14c(r30)
/* 80110BFC 0010DCDC  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80110C00 0010DCE0  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80110C04 0010DCE4  EC 01 00 32 */	fmuls f0, f1, f0
/* 80110C08 0010DCE8  D0 1E 01 4C */	stfs f0, 0x14c(r30)
/* 80110C0C 0010DCEC  C0 3E 01 50 */	lfs f1, 0x150(r30)
/* 80110C10 0010DCF0  C0 1E 01 4C */	lfs f0, 0x14c(r30)
/* 80110C14 0010DCF4  EC 01 00 32 */	fmuls f0, f1, f0
/* 80110C18 0010DCF8  D0 1E 01 50 */	stfs f0, 0x150(r30)
/* 80110C1C 0010DCFC  C0 3E 01 5C */	lfs f1, 0x15c(r30)
/* 80110C20 0010DD00  C0 42 9E A0 */	lfs f2, "@1783"@sda21(r2)
/* 80110C24 0010DD04  C0 62 9E 88 */	lfs f3, "@961"@sda21(r2)
/* 80110C28 0010DD08  4B EF DD 11 */	bl "range_limit<f>__Ffff"
/* 80110C2C 0010DD0C  D0 3E 01 5C */	stfs f1, 0x15c(r30)
/* 80110C30 0010DD10  7F C3 F3 78 */	mr r3, r30
/* 80110C34 0010DD14  C0 3E 01 54 */	lfs f1, 0x154(r30)
/* 80110C38 0010DD18  C0 02 9E AC */	lfs f0, "@1811"@sda21(r2)
/* 80110C3C 0010DD1C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80110C40 0010DD20  D0 1E 01 54 */	stfs f0, 0x154(r30)
/* 80110C44 0010DD24  C0 3E 01 58 */	lfs f1, 0x158(r30)
/* 80110C48 0010DD28  C0 02 9E AC */	lfs f0, "@1811"@sda21(r2)
/* 80110C4C 0010DD2C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80110C50 0010DD30  D0 1E 01 58 */	stfs f0, 0x158(r30)
/* 80110C54 0010DD34  C0 3E 01 54 */	lfs f1, 0x154(r30)
/* 80110C58 0010DD38  C0 5E 01 58 */	lfs f2, 0x158(r30)
/* 80110C5C 0010DD3C  C0 7E 01 4C */	lfs f3, 0x14c(r30)
/* 80110C60 0010DD40  C0 9E 01 5C */	lfs f4, 0x15c(r30)
/* 80110C64 0010DD44  48 00 02 71 */	bl "find_spring_min__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFffff"
/* 80110C68 0010DD48  D0 3E 01 54 */	stfs f1, 0x154(r30)
/* 80110C6C 0010DD4C  C0 3E 01 58 */	lfs f1, 0x158(r30)
/* 80110C70 0010DD50  C0 1E 01 54 */	lfs f0, 0x154(r30)
/* 80110C74 0010DD54  C0 42 9E 8C */	lfs f2, "@969"@sda21(r2)
/* 80110C78 0010DD58  EC 01 00 2A */	fadds f0, f1, f0
/* 80110C7C 0010DD5C  EC 02 00 32 */	fmuls f0, f2, f0
/* 80110C80 0010DD60  D0 1E 01 98 */	stfs f0, 0x198(r30)
/* 80110C84 0010DD64  C0 3E 01 4C */	lfs f1, 0x14c(r30)
/* 80110C88 0010DD68  C0 1E 01 98 */	lfs f0, 0x198(r30)
/* 80110C8C 0010DD6C  EC 01 00 24 */	fdivs f0, f1, f0
/* 80110C90 0010DD70  D0 1E 01 A0 */	stfs f0, 0x1a0(r30)
/* 80110C94 0010DD74  C0 3E 01 A0 */	lfs f1, 0x1a0(r30)
/* 80110C98 0010DD78  4B EF 9B 65 */	bl xsqrt__Ff
/* 80110C9C 0010DD7C  C0 1E 01 5C */	lfs f0, 0x15c(r30)
/* 80110CA0 0010DD80  FC 00 00 50 */	fneg f0, f0
/* 80110CA4 0010DD84  EC 00 00 72 */	fmuls f0, f0, f1
/* 80110CA8 0010DD88  D0 1E 01 A4 */	stfs f0, 0x1a4(r30)
/* 80110CAC 0010DD8C  C0 1E 01 A4 */	lfs f0, 0x1a4(r30)
/* 80110CB0 0010DD90  C0 3E 01 A0 */	lfs f1, 0x1a0(r30)
/* 80110CB4 0010DD94  EC 00 00 32 */	fmuls f0, f0, f0
/* 80110CB8 0010DD98  EC 21 00 28 */	fsubs f1, f1, f0
/* 80110CBC 0010DD9C  4B EF 9B 41 */	bl xsqrt__Ff
/* 80110CC0 0010DDA0  D0 3E 01 A8 */	stfs f1, 0x1a8(r30)
/* 80110CC4 0010DDA4  7F C3 F3 78 */	mr r3, r30
/* 80110CC8 0010DDA8  C0 3E 01 58 */	lfs f1, 0x158(r30)
/* 80110CCC 0010DDAC  C0 42 9E A0 */	lfs f2, "@1783"@sda21(r2)
/* 80110CD0 0010DDB0  C0 7E 01 A0 */	lfs f3, 0x1a0(r30)
/* 80110CD4 0010DDB4  C0 9E 01 4C */	lfs f4, 0x14c(r30)
/* 80110CD8 0010DDB8  C0 BE 01 98 */	lfs f5, 0x198(r30)
/* 80110CDC 0010DDBC  48 00 01 79 */	bl "spring_energy__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFfffff"
/* 80110CE0 0010DDC0  D0 3E 01 9C */	stfs f1, 0x19c(r30)
/* 80110CE4 0010DDC4  7F C3 F3 78 */	mr r3, r30
/* 80110CE8 0010DDC8  C0 3E 01 98 */	lfs f1, 0x198(r30)
/* 80110CEC 0010DDCC  C0 42 9E 88 */	lfs f2, "@961"@sda21(r2)
/* 80110CF0 0010DDD0  FC C0 08 90 */	fmr f6, f1
/* 80110CF4 0010DDD4  C0 7E 01 9C */	lfs f3, 0x19c(r30)
/* 80110CF8 0010DDD8  C0 9E 01 A0 */	lfs f4, 0x1a0(r30)
/* 80110CFC 0010DDDC  C0 BE 01 4C */	lfs f5, 0x14c(r30)
/* 80110D00 0010DDE0  48 00 00 39 */	bl "spring_velocity__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFffffff"
/* 80110D04 0010DDE4  D0 3E 00 A8 */	stfs f1, 0xa8(r30)
/* 80110D08 0010DDE8  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 80110D0C 0010DDEC  C0 1E 00 A8 */	lfs f0, 0xa8(r30)
/* 80110D10 0010DDF0  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80110D14 0010DDF4  C0 23 00 6C */	lfs f1, 0x6c(r3)
/* 80110D18 0010DDF8  EC 01 00 24 */	fdivs f0, f1, f0
/* 80110D1C 0010DDFC  D0 1E 01 78 */	stfs f0, 0x178(r30)
.L_80110D20:
/* 80110D20 0010DE00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80110D24 0010DE04  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80110D28 0010DE08  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80110D2C 0010DE0C  7C 08 03 A6 */	mtlr r0
/* 80110D30 0010DE10  38 21 00 10 */	addi r1, r1, 0x10
/* 80110D34 0010DE14  4E 80 00 20 */	blr
.endfn "reset_props_vertical__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::spring_velocity(float, float, float, float, float, float) const
.fn "spring_velocity__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFffffff", local
/* 80110D38 0010DE18  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80110D3C 0010DE1C  7C 08 02 A6 */	mflr r0
/* 80110D40 0010DE20  90 01 00 34 */	stw r0, 0x34(r1)
/* 80110D44 0010DE24  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80110D48 0010DE28  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 80110D4C 0010DE2C  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 80110D50 0010DE30  F3 C1 00 18 */	psq_st f30, 0x18(r1), 0, qr0
/* 80110D54 0010DE34  FF C0 10 90 */	fmr f30, f2
/* 80110D58 0010DE38  FF E0 18 90 */	fmr f31, f3
/* 80110D5C 0010DE3C  FC 40 20 90 */	fmr f2, f4
/* 80110D60 0010DE40  FC 60 28 90 */	fmr f3, f5
/* 80110D64 0010DE44  FC 80 30 90 */	fmr f4, f6
/* 80110D68 0010DE48  48 00 00 71 */	bl "spring_potential_energy__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFffff"
/* 80110D6C 0010DE4C  EC 5F 08 28 */	fsubs f2, f31, f1
/* 80110D70 0010DE50  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80110D74 0010DE54  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80110D78 0010DE58  4C 40 13 82 */	cror eq, lt, eq
/* 80110D7C 0010DE5C  40 82 00 08 */	bne .L_80110D84
/* 80110D80 0010DE60  48 00 00 38 */	b .L_80110DB8
.L_80110D84:
/* 80110D84 0010DE64  C0 02 9E B0 */	lfs f0, "@1817"@sda21(r2)
/* 80110D88 0010DE68  EC 20 00 B2 */	fmuls f1, f0, f2
/* 80110D8C 0010DE6C  4B EF 9A 71 */	bl xsqrt__Ff
/* 80110D90 0010DE70  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80110D94 0010DE74  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80110D98 0010DE78  40 80 00 14 */	bge .L_80110DAC
/* 80110D9C 0010DE7C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80110DA0 0010DE80  40 81 00 18 */	ble .L_80110DB8
/* 80110DA4 0010DE84  FC 20 08 50 */	fneg f1, f1
/* 80110DA8 0010DE88  48 00 00 10 */	b .L_80110DB8
.L_80110DAC:
/* 80110DAC 0010DE8C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80110DB0 0010DE90  40 80 00 08 */	bge .L_80110DB8
/* 80110DB4 0010DE94  FC 20 08 50 */	fneg f1, f1
.L_80110DB8:
/* 80110DB8 0010DE98  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80110DBC 0010DE9C  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80110DC0 0010DEA0  E3 C1 00 18 */	psq_l f30, 0x18(r1), 0, qr0
/* 80110DC4 0010DEA4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80110DC8 0010DEA8  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 80110DCC 0010DEAC  7C 08 03 A6 */	mtlr r0
/* 80110DD0 0010DEB0  38 21 00 30 */	addi r1, r1, 0x30
/* 80110DD4 0010DEB4  4E 80 00 20 */	blr
.endfn "spring_velocity__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFffffff"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::spring_potential_energy(float, float, float, float) const
.fn "spring_potential_energy__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFffff", local
/* 80110DD8 0010DEB8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80110DDC 0010DEBC  7C 08 02 A6 */	mflr r0
/* 80110DE0 0010DEC0  90 01 00 44 */	stw r0, 0x44(r1)
/* 80110DE4 0010DEC4  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80110DE8 0010DEC8  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 80110DEC 0010DECC  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 80110DF0 0010DED0  F3 C1 00 28 */	psq_st f30, 0x28(r1), 0, qr0
/* 80110DF4 0010DED4  DB A1 00 10 */	stfd f29, 0x10(r1)
/* 80110DF8 0010DED8  F3 A1 00 18 */	psq_st f29, 0x18(r1), 0, qr0
/* 80110DFC 0010DEDC  FF A0 08 90 */	fmr f29, f1
/* 80110E00 0010DEE0  FF C0 18 90 */	fmr f30, f3
/* 80110E04 0010DEE4  FF E0 20 90 */	fmr f31, f4
/* 80110E08 0010DEE8  48 00 00 39 */	bl "spring_potential_energy__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFff"
/* 80110E0C 0010DEEC  C0 02 9E 8C */	lfs f0, "@969"@sda21(r2)
/* 80110E10 0010DEF0  EC 00 EF FC */	fnmsubs f0, f0, f31, f29
/* 80110E14 0010DEF4  EC 3E 08 3C */	fnmsubs f1, f30, f0, f1
/* 80110E18 0010DEF8  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 80110E1C 0010DEFC  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80110E20 0010DF00  E3 C1 00 28 */	psq_l f30, 0x28(r1), 0, qr0
/* 80110E24 0010DF04  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 80110E28 0010DF08  E3 A1 00 18 */	psq_l f29, 0x18(r1), 0, qr0
/* 80110E2C 0010DF0C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80110E30 0010DF10  CB A1 00 10 */	lfd f29, 0x10(r1)
/* 80110E34 0010DF14  7C 08 03 A6 */	mtlr r0
/* 80110E38 0010DF18  38 21 00 40 */	addi r1, r1, 0x40
/* 80110E3C 0010DF1C  4E 80 00 20 */	blr
.endfn "spring_potential_energy__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFffff"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::spring_potential_energy(float, float) const
.fn "spring_potential_energy__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFff", local
/* 80110E40 0010DF20  C0 02 9E 8C */	lfs f0, "@969"@sda21(r2)
/* 80110E44 0010DF24  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80110E48 0010DF28  EC 00 00 72 */	fmuls f0, f0, f1
/* 80110E4C 0010DF2C  EC 21 00 32 */	fmuls f1, f1, f0
/* 80110E50 0010DF30  4E 80 00 20 */	blr
.endfn "spring_potential_energy__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFff"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::spring_energy(float, float, float, float, float) const
.fn "spring_energy__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFfffff", local
/* 80110E54 0010DF34  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80110E58 0010DF38  7C 08 02 A6 */	mflr r0
/* 80110E5C 0010DF3C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80110E60 0010DF40  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80110E64 0010DF44  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 80110E68 0010DF48  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 80110E6C 0010DF4C  F3 C1 00 18 */	psq_st f30, 0x18(r1), 0, qr0
/* 80110E70 0010DF50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80110E74 0010DF54  FF C0 10 90 */	fmr f30, f2
/* 80110E78 0010DF58  7C 7F 1B 78 */	mr r31, r3
/* 80110E7C 0010DF5C  FC 40 18 90 */	fmr f2, f3
/* 80110E80 0010DF60  FC 60 20 90 */	fmr f3, f4
/* 80110E84 0010DF64  FC 80 28 90 */	fmr f4, f5
/* 80110E88 0010DF68  4B FF FF 51 */	bl "spring_potential_energy__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFffff"
/* 80110E8C 0010DF6C  FF E0 08 90 */	fmr f31, f1
/* 80110E90 0010DF70  7F E3 FB 78 */	mr r3, r31
/* 80110E94 0010DF74  FC 20 F0 90 */	fmr f1, f30
/* 80110E98 0010DF78  48 00 00 2D */	bl "kinetic_energy__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFf"
/* 80110E9C 0010DF7C  EC 21 F8 2A */	fadds f1, f1, f31
/* 80110EA0 0010DF80  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80110EA4 0010DF84  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80110EA8 0010DF88  E3 C1 00 18 */	psq_l f30, 0x18(r1), 0, qr0
/* 80110EAC 0010DF8C  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 80110EB0 0010DF90  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80110EB4 0010DF94  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80110EB8 0010DF98  7C 08 03 A6 */	mtlr r0
/* 80110EBC 0010DF9C  38 21 00 30 */	addi r1, r1, 0x30
/* 80110EC0 0010DFA0  4E 80 00 20 */	blr
.endfn "spring_energy__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFfffff"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::kinetic_energy(float) const
.fn "kinetic_energy__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFf", local
/* 80110EC4 0010DFA4  C0 02 9E 8C */	lfs f0, "@969"@sda21(r2)
/* 80110EC8 0010DFA8  EC 00 00 72 */	fmuls f0, f0, f1
/* 80110ECC 0010DFAC  EC 20 00 72 */	fmuls f1, f0, f1
/* 80110ED0 0010DFB0  4E 80 00 20 */	blr
.endfn "kinetic_energy__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFf"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::find_spring_min(float, float, float, float) const
.fn "find_spring_min__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFffff", local
/* 80110ED4 0010DFB4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80110ED8 0010DFB8  7C 08 02 A6 */	mflr r0
/* 80110EDC 0010DFBC  90 01 00 44 */	stw r0, 0x44(r1)
/* 80110EE0 0010DFC0  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80110EE4 0010DFC4  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 80110EE8 0010DFC8  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 80110EEC 0010DFCC  F3 C1 00 28 */	psq_st f30, 0x28(r1), 0, qr0
/* 80110EF0 0010DFD0  DB A1 00 10 */	stfd f29, 0x10(r1)
/* 80110EF4 0010DFD4  F3 A1 00 18 */	psq_st f29, 0x18(r1), 0, qr0
/* 80110EF8 0010DFD8  FF E0 20 90 */	fmr f31, f4
/* 80110EFC 0010DFDC  C0 02 9E 88 */	lfs f0, "@961"@sda21(r2)
/* 80110F00 0010DFE0  FF A0 08 90 */	fmr f29, f1
/* 80110F04 0010DFE4  FF C0 10 90 */	fmr f30, f2
/* 80110F08 0010DFE8  EC 3F 07 FC */	fnmsubs f1, f31, f31, f0
/* 80110F0C 0010DFEC  4B EF 98 F1 */	bl xsqrt__Ff
/* 80110F10 0010DFF0  C0 02 9E C0 */	lfs f0, "@1833"@sda21(r2)
/* 80110F14 0010DFF4  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80110F18 0010DFF8  EC 20 00 72 */	fmuls f1, f0, f1
/* 80110F1C 0010DFFC  4B EF D8 95 */	bl xexp__Ff
/* 80110F20 0010E000  C0 02 9E 88 */	lfs f0, "@961"@sda21(r2)
/* 80110F24 0010E004  C0 62 9E B0 */	lfs f3, "@1817"@sda21(r2)
/* 80110F28 0010E008  EC 41 00 28 */	fsubs f2, f1, f0
/* 80110F2C 0010E00C  EC 00 08 2A */	fadds f0, f0, f1
/* 80110F30 0010E010  EC 3E 00 B2 */	fmuls f1, f30, f2
/* 80110F34 0010E014  EC 23 0F 7A */	fmadds f1, f3, f29, f1
/* 80110F38 0010E018  EC 21 00 24 */	fdivs f1, f1, f0
/* 80110F3C 0010E01C  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 80110F40 0010E020  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80110F44 0010E024  E3 C1 00 28 */	psq_l f30, 0x28(r1), 0, qr0
/* 80110F48 0010E028  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 80110F4C 0010E02C  E3 A1 00 18 */	psq_l f29, 0x18(r1), 0, qr0
/* 80110F50 0010E030  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80110F54 0010E034  CB A1 00 10 */	lfd f29, 0x10(r1)
/* 80110F58 0010E038  7C 08 03 A6 */	mtlr r0
/* 80110F5C 0010E03C  38 21 00 40 */	addi r1, r1, 0x40
/* 80110F60 0010E040  4E 80 00 20 */	blr
.endfn "find_spring_min__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFffff"

# bungee_state::hook_asset::@class$910zEntPlayerBungeeState_cpp::operator=(const bungee_state::hook_asset::@class$910zEntPlayerBungeeState_cpp&)
.fn "__as__Q312bungee_state10hook_asset35@class$910zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35@class$910zEntPlayerBungeeState_cpp", weak
/* 80110F64 0010E044  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 80110F68 0010E048  C0 04 00 04 */	lfs f0, 0x4(r4)
/* 80110F6C 0010E04C  D0 23 00 00 */	stfs f1, 0x0(r3)
/* 80110F70 0010E050  C0 24 00 08 */	lfs f1, 0x8(r4)
/* 80110F74 0010E054  D0 03 00 04 */	stfs f0, 0x4(r3)
/* 80110F78 0010E058  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 80110F7C 0010E05C  D0 23 00 08 */	stfs f1, 0x8(r3)
/* 80110F80 0010E060  C0 24 00 10 */	lfs f1, 0x10(r4)
/* 80110F84 0010E064  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 80110F88 0010E068  C0 04 00 14 */	lfs f0, 0x14(r4)
/* 80110F8C 0010E06C  D0 23 00 10 */	stfs f1, 0x10(r3)
/* 80110F90 0010E070  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 80110F94 0010E074  4E 80 00 20 */	blr
.endfn "__as__Q312bungee_state10hook_asset35@class$910zEntPlayerBungeeState_cppFRCQ312bungee_state10hook_asset35@class$910zEntPlayerBungeeState_cpp"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::check_anim_start(xAnimTransition*, xAnimSingle*, void*)
.fn "check_anim_start__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FP15xAnimTransitionP11xAnimSinglePv", local
/* 80110F98 0010E078  38 60 00 00 */	li r3, 0x0
/* 80110F9C 0010E07C  4E 80 00 20 */	blr
.endfn "check_anim_start__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FP15xAnimTransitionP11xAnimSinglePv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::check_anim_hit_to_dive(xAnimTransition*, xAnimSingle*, void*)
.fn "check_anim_hit_to_dive__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FP15xAnimTransitionP11xAnimSinglePv", local
/* 80110FA0 0010E080  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80110FA4 0010E084  38 60 00 00 */	li r3, 0x0
/* 80110FA8 0010E088  38 A4 7A 68 */	addi r5, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80110FAC 0010E08C  80 85 01 98 */	lwz r4, 0x198(r5)
/* 80110FB0 0010E090  54 80 07 BD */	rlwinm. r0, r4, 0, 30, 30
/* 80110FB4 0010E094  54 84 06 B0 */	rlwinm r4, r4, 0, 26, 24
/* 80110FB8 0010E098  90 85 01 98 */	stw r4, 0x198(r5)
/* 80110FBC 0010E09C  41 82 00 10 */	beq .L_80110FCC
/* 80110FC0 0010E0A0  54 80 06 31 */	rlwinm. r0, r4, 0, 24, 24
/* 80110FC4 0010E0A4  40 82 00 08 */	bne .L_80110FCC
/* 80110FC8 0010E0A8  38 60 00 01 */	li r3, 0x1
.L_80110FCC:
/* 80110FCC 0010E0AC  54 63 06 3E */	clrlwi r3, r3, 24
/* 80110FD0 0010E0B0  4E 80 00 20 */	blr
.endfn "check_anim_hit_to_dive__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FP15xAnimTransitionP11xAnimSinglePv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::check_anim_hit_to_top(xAnimTransition*, xAnimSingle*, void*)
.fn "check_anim_hit_to_top__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FP15xAnimTransitionP11xAnimSinglePv", local
/* 80110FD4 0010E0B4  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80110FD8 0010E0B8  38 60 00 00 */	li r3, 0x0
/* 80110FDC 0010E0BC  38 A4 7A 68 */	addi r5, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80110FE0 0010E0C0  80 85 01 98 */	lwz r4, 0x198(r5)
/* 80110FE4 0010E0C4  54 80 07 39 */	rlwinm. r0, r4, 0, 28, 28
/* 80110FE8 0010E0C8  54 84 06 B0 */	rlwinm r4, r4, 0, 26, 24
/* 80110FEC 0010E0CC  90 85 01 98 */	stw r4, 0x198(r5)
/* 80110FF0 0010E0D0  41 82 00 10 */	beq .L_80111000
/* 80110FF4 0010E0D4  54 80 06 31 */	rlwinm. r0, r4, 0, 24, 24
/* 80110FF8 0010E0D8  40 82 00 08 */	bne .L_80111000
/* 80110FFC 0010E0DC  38 60 00 01 */	li r3, 0x1
.L_80111000:
/* 80111000 0010E0E0  54 63 06 3E */	clrlwi r3, r3, 24
/* 80111004 0010E0E4  4E 80 00 20 */	blr
.endfn "check_anim_hit_to_top__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FP15xAnimTransitionP11xAnimSinglePv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::check_anim_hit_to_bottom(xAnimTransition*, xAnimSingle*, void*)
.fn "check_anim_hit_to_bottom__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FP15xAnimTransitionP11xAnimSinglePv", local
/* 80111008 0010E0E8  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 8011100C 0010E0EC  38 60 00 00 */	li r3, 0x0
/* 80111010 0010E0F0  38 A4 7A 68 */	addi r5, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80111014 0010E0F4  80 85 01 98 */	lwz r4, 0x198(r5)
/* 80111018 0010E0F8  54 80 06 B5 */	rlwinm. r0, r4, 0, 26, 26
/* 8011101C 0010E0FC  54 84 06 B0 */	rlwinm r4, r4, 0, 26, 24
/* 80111020 0010E100  90 85 01 98 */	stw r4, 0x198(r5)
/* 80111024 0010E104  41 82 00 10 */	beq .L_80111034
/* 80111028 0010E108  54 80 06 31 */	rlwinm. r0, r4, 0, 24, 24
/* 8011102C 0010E10C  40 82 00 08 */	bne .L_80111034
/* 80111030 0010E110  38 60 00 01 */	li r3, 0x1
.L_80111034:
/* 80111034 0010E114  54 63 06 3E */	clrlwi r3, r3, 24
/* 80111038 0010E118  4E 80 00 20 */	blr
.endfn "check_anim_hit_to_bottom__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FP15xAnimTransitionP11xAnimSinglePv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::check_anim_hit_to_cycle(xAnimTransition*, xAnimSingle*, void*)
.fn "check_anim_hit_to_cycle__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FP15xAnimTransitionP11xAnimSinglePv", local
/* 8011103C 0010E11C  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80111040 0010E120  38 60 00 00 */	li r3, 0x0
/* 80111044 0010E124  38 A4 7A 68 */	addi r5, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80111048 0010E128  80 05 01 98 */	lwz r0, 0x198(r5)
/* 8011104C 0010E12C  54 04 06 B0 */	rlwinm r4, r0, 0, 26, 24
/* 80111050 0010E130  70 80 00 2A */	andi. r0, r4, 0x2a
/* 80111054 0010E134  90 85 01 98 */	stw r4, 0x198(r5)
/* 80111058 0010E138  40 82 00 10 */	bne .L_80111068
/* 8011105C 0010E13C  54 80 06 31 */	rlwinm. r0, r4, 0, 24, 24
/* 80111060 0010E140  40 82 00 08 */	bne .L_80111068
/* 80111064 0010E144  38 60 00 01 */	li r3, 0x1
.L_80111068:
/* 80111068 0010E148  54 63 06 3E */	clrlwi r3, r3, 24
/* 8011106C 0010E14C  4E 80 00 20 */	blr
.endfn "check_anim_hit_to_cycle__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FP15xAnimTransitionP11xAnimSinglePv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::check_anim_hit_to_death(xAnimTransition*, xAnimSingle*, void*)
.fn "check_anim_hit_to_death__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FP15xAnimTransitionP11xAnimSinglePv", local
/* 80111070 0010E150  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80111074 0010E154  7C 08 02 A6 */	mflr r0
/* 80111078 0010E158  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 8011107C 0010E15C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80111080 0010E160  38 83 7A 68 */	addi r4, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80111084 0010E164  80 64 01 98 */	lwz r3, 0x198(r4)
/* 80111088 0010E168  54 60 06 31 */	rlwinm. r0, r3, 0, 24, 24
/* 8011108C 0010E16C  54 63 06 B0 */	rlwinm r3, r3, 0, 26, 24
/* 80111090 0010E170  90 64 01 98 */	stw r3, 0x198(r4)
/* 80111094 0010E174  41 82 00 18 */	beq .L_801110AC
/* 80111098 0010E178  C0 22 9E 88 */	lfs f1, "@961"@sda21(r2)
/* 8011109C 0010E17C  38 60 00 08 */	li r3, 0x8
/* 801110A0 0010E180  4B FF F2 19 */	bl "play_sound__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FQ312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10sound_enumf"
/* 801110A4 0010E184  38 60 00 01 */	li r3, 0x1
/* 801110A8 0010E188  48 00 00 08 */	b .L_801110B0
.L_801110AC:
/* 801110AC 0010E18C  38 60 00 00 */	li r3, 0x0
.L_801110B0:
/* 801110B0 0010E190  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801110B4 0010E194  7C 08 03 A6 */	mtlr r0
/* 801110B8 0010E198  38 21 00 10 */	addi r1, r1, 0x10
/* 801110BC 0010E19C  4E 80 00 20 */	blr
.endfn "check_anim_hit_to_death__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FP15xAnimTransitionP11xAnimSinglePv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::find_nearest_hook(const xVec3&)
.fn "find_nearest_hook__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FRC5xVec3", local
/* 801110C0 0010E1A0  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 801110C4 0010E1A4  7C 08 02 A6 */	mflr r0
/* 801110C8 0010E1A8  90 01 00 74 */	stw r0, 0x74(r1)
/* 801110CC 0010E1AC  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 801110D0 0010E1B0  F3 E1 00 68 */	psq_st f31, 0x68(r1), 0, qr0
/* 801110D4 0010E1B4  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 801110D8 0010E1B8  F3 C1 00 58 */	psq_st f30, 0x58(r1), 0, qr0
/* 801110DC 0010E1BC  BF 61 00 3C */	stmw r27, 0x3c(r1)
/* 801110E0 0010E1C0  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801110E4 0010E1C4  C3 E2 9E C4 */	lfs f31, "@1903"@sda21(r2)
/* 801110E8 0010E1C8  3B E4 7A 68 */	addi r31, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801110EC 0010E1CC  7C 7B 1B 78 */	mr r27, r3
/* 801110F0 0010E1D0  7F FE FB 78 */	mr r30, r31
/* 801110F4 0010E1D4  3B A0 FF FF */	li r29, -0x1
/* 801110F8 0010E1D8  3B 80 00 00 */	li r28, 0x0
/* 801110FC 0010E1DC  48 00 00 88 */	b .L_80111184
.L_80111100:
/* 80111100 0010E1E0  80 7E 00 40 */	lwz r3, 0x40(r30)
/* 80111104 0010E1E4  80 83 00 10 */	lwz r4, 0x10(r3)
/* 80111108 0010E1E8  80 63 00 14 */	lwz r3, 0x14(r3)
/* 8011110C 0010E1EC  C3 C4 00 20 */	lfs f30, 0x20(r4)
/* 80111110 0010E1F0  4B F0 A6 F9 */	bl xEntGetPos__FPC4xEnt
/* 80111114 0010E1F4  80 BE 00 40 */	lwz r5, 0x40(r30)
/* 80111118 0010E1F8  7C 64 1B 78 */	mr r4, r3
/* 8011111C 0010E1FC  38 61 00 08 */	addi r3, r1, 0x8
/* 80111120 0010E200  80 A5 00 10 */	lwz r5, 0x10(r5)
/* 80111124 0010E204  38 A5 00 14 */	addi r5, r5, 0x14
/* 80111128 0010E208  4B F0 42 B9 */	bl __pl__5xVec3CFRC5xVec3
/* 8011112C 0010E20C  7F 65 DB 78 */	mr r5, r27
/* 80111130 0010E210  38 61 00 14 */	addi r3, r1, 0x14
/* 80111134 0010E214  38 81 00 08 */	addi r4, r1, 0x8
/* 80111138 0010E218  4B EF A0 95 */	bl __mi__5xVec3CFRC5xVec3
/* 8011113C 0010E21C  80 A1 00 14 */	lwz r5, 0x14(r1)
/* 80111140 0010E220  38 61 00 20 */	addi r3, r1, 0x20
/* 80111144 0010E224  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80111148 0010E228  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8011114C 0010E22C  90 A1 00 20 */	stw r5, 0x20(r1)
/* 80111150 0010E230  90 81 00 24 */	stw r4, 0x24(r1)
/* 80111154 0010E234  90 01 00 28 */	stw r0, 0x28(r1)
/* 80111158 0010E238  4B EF 9F A5 */	bl length2__5xVec3CFv
/* 8011115C 0010E23C  EC 1E 07 B2 */	fmuls f0, f30, f30
/* 80111160 0010E240  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111164 0010E244  4C 40 13 82 */	cror eq, lt, eq
/* 80111168 0010E248  40 82 00 14 */	bne .L_8011117C
/* 8011116C 0010E24C  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 80111170 0010E250  40 80 00 0C */	bge .L_8011117C
/* 80111174 0010E254  7F 9D E3 78 */	mr r29, r28
/* 80111178 0010E258  FF E0 08 90 */	fmr f31, f1
.L_8011117C:
/* 8011117C 0010E25C  3B DE 00 04 */	addi r30, r30, 0x4
/* 80111180 0010E260  3B 9C 00 01 */	addi r28, r28, 0x1
.L_80111184:
/* 80111184 0010E264  80 1F 01 60 */	lwz r0, 0x160(r31)
/* 80111188 0010E268  7C 1C 00 00 */	cmpw r28, r0
/* 8011118C 0010E26C  41 80 FF 74 */	blt .L_80111100
/* 80111190 0010E270  7F A3 EB 78 */	mr r3, r29
/* 80111194 0010E274  E3 E1 00 68 */	psq_l f31, 0x68(r1), 0, qr0
/* 80111198 0010E278  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8011119C 0010E27C  E3 C1 00 58 */	psq_l f30, 0x58(r1), 0, qr0
/* 801111A0 0010E280  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 801111A4 0010E284  BB 61 00 3C */	lmw r27, 0x3c(r1)
/* 801111A8 0010E288  80 01 00 74 */	lwz r0, 0x74(r1)
/* 801111AC 0010E28C  7C 08 03 A6 */	mtlr r0
/* 801111B0 0010E290  38 21 00 70 */	addi r1, r1, 0x70
/* 801111B4 0010E294  4E 80 00 20 */	blr
.endfn "find_nearest_hook__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FRC5xVec3"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::init_sounds()
.fn "init_sounds__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv", local
/* 801111B8 0010E298  4E 80 00 20 */	blr
.endfn "init_sounds__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::get_hook_model()
.fn "get_hook_model__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv", local
/* 801111BC 0010E29C  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801111C0 0010E2A0  38 63 7A 68 */	addi r3, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801111C4 0010E2A4  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 801111C8 0010E2A8  28 03 00 00 */	cmplwi r3, 0x0
/* 801111CC 0010E2AC  41 82 00 10 */	beq .L_801111DC
/* 801111D0 0010E2B0  80 63 00 14 */	lwz r3, 0x14(r3)
/* 801111D4 0010E2B4  28 03 00 00 */	cmplwi r3, 0x0
/* 801111D8 0010E2B8  40 82 00 0C */	bne .L_801111E4
.L_801111DC:
/* 801111DC 0010E2BC  38 60 00 00 */	li r3, 0x0
/* 801111E0 0010E2C0  4E 80 00 20 */	blr
.L_801111E4:
/* 801111E4 0010E2C4  80 63 00 24 */	lwz r3, 0x24(r3)
/* 801111E8 0010E2C8  4E 80 00 20 */	blr
.endfn "get_hook_model__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::fade_hook_reset()
.fn "fade_hook_reset__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv", local
/* 801111EC 0010E2CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801111F0 0010E2D0  7C 08 02 A6 */	mflr r0
/* 801111F4 0010E2D4  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801111F8 0010E2D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801111FC 0010E2DC  38 83 7A 68 */	addi r4, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80111200 0010E2E0  80 64 00 00 */	lwz r3, 0x0(r4)
/* 80111204 0010E2E4  54 60 06 75 */	rlwinm. r0, r3, 0, 25, 26
/* 80111208 0010E2E8  41 82 00 38 */	beq .L_80111240
/* 8011120C 0010E2EC  54 60 06 F0 */	rlwinm r0, r3, 0, 27, 24
/* 80111210 0010E2F0  90 04 00 00 */	stw r0, 0x0(r4)
/* 80111214 0010E2F4  4B FF FF A9 */	bl "get_hook_model__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"
/* 80111218 0010E2F8  28 03 00 00 */	cmplwi r3, 0x0
/* 8011121C 0010E2FC  41 82 00 24 */	beq .L_80111240
/* 80111220 0010E300  C0 02 9E 88 */	lfs f0, "@961"@sda21(r2)
/* 80111224 0010E304  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 80111228 0010E308  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 8011122C 0010E30C  70 00 BF FF */	andi. r0, r0, 0xbfff
/* 80111230 0010E310  B0 03 00 44 */	sth r0, 0x44(r3)
/* 80111234 0010E314  80 03 00 14 */	lwz r0, 0x14(r3)
/* 80111238 0010E318  54 00 07 32 */	rlwinm r0, r0, 0, 28, 25
/* 8011123C 0010E31C  90 03 00 14 */	stw r0, 0x14(r3)
.L_80111240:
/* 80111240 0010E320  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80111244 0010E324  7C 08 03 A6 */	mtlr r0
/* 80111248 0010E328  38 21 00 10 */	addi r1, r1, 0x10
/* 8011124C 0010E32C  4E 80 00 20 */	blr
.endfn "fade_hook_reset__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::fade_hook_out()
.fn "fade_hook_out__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv", local
/* 80111250 0010E330  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80111254 0010E334  7C 08 02 A6 */	mflr r0
/* 80111258 0010E338  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 8011125C 0010E33C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80111260 0010E340  38 83 7A 68 */	addi r4, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80111264 0010E344  80 64 00 00 */	lwz r3, 0x0(r4)
/* 80111268 0010E348  54 60 06 73 */	rlwinm. r0, r3, 0, 25, 25
/* 8011126C 0010E34C  40 82 00 44 */	bne .L_801112B0
/* 80111270 0010E350  54 60 06 F0 */	rlwinm r0, r3, 0, 27, 24
/* 80111274 0010E354  90 04 00 00 */	stw r0, 0x0(r4)
/* 80111278 0010E358  4B FF FF 45 */	bl "get_hook_model__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"
/* 8011127C 0010E35C  28 03 00 00 */	cmplwi r3, 0x0
/* 80111280 0010E360  41 82 00 30 */	beq .L_801112B0
/* 80111284 0010E364  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 80111288 0010E368  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 8011128C 0010E36C  60 00 40 00 */	ori r0, r0, 0x4000
/* 80111290 0010E370  B0 03 00 44 */	sth r0, 0x44(r3)
/* 80111294 0010E374  80 03 00 14 */	lwz r0, 0x14(r3)
/* 80111298 0010E378  54 00 07 32 */	rlwinm r0, r0, 0, 28, 25
/* 8011129C 0010E37C  60 00 00 30 */	ori r0, r0, 0x30
/* 801112A0 0010E380  90 03 00 14 */	stw r0, 0x14(r3)
/* 801112A4 0010E384  84 04 7A 68 */	lwzu r0, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l(r4)
/* 801112A8 0010E388  60 00 00 40 */	ori r0, r0, 0x40
/* 801112AC 0010E38C  90 04 00 00 */	stw r0, 0x0(r4)
.L_801112B0:
/* 801112B0 0010E390  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801112B4 0010E394  7C 08 03 A6 */	mtlr r0
/* 801112B8 0010E398  38 21 00 10 */	addi r1, r1, 0x10
/* 801112BC 0010E39C  4E 80 00 20 */	blr
.endfn "fade_hook_out__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::fade_hook_in()
.fn "fade_hook_in__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv", local
/* 801112C0 0010E3A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801112C4 0010E3A4  7C 08 02 A6 */	mflr r0
/* 801112C8 0010E3A8  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801112CC 0010E3AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801112D0 0010E3B0  38 83 7A 68 */	addi r4, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801112D4 0010E3B4  80 64 00 00 */	lwz r3, 0x0(r4)
/* 801112D8 0010E3B8  54 60 06 B5 */	rlwinm. r0, r3, 0, 26, 26
/* 801112DC 0010E3BC  40 82 00 44 */	bne .L_80111320
/* 801112E0 0010E3C0  54 60 06 F0 */	rlwinm r0, r3, 0, 27, 24
/* 801112E4 0010E3C4  90 04 00 00 */	stw r0, 0x0(r4)
/* 801112E8 0010E3C8  4B FF FE D5 */	bl "get_hook_model__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"
/* 801112EC 0010E3CC  28 03 00 00 */	cmplwi r3, 0x0
/* 801112F0 0010E3D0  41 82 00 30 */	beq .L_80111320
/* 801112F4 0010E3D4  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 801112F8 0010E3D8  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801112FC 0010E3DC  60 00 40 00 */	ori r0, r0, 0x4000
/* 80111300 0010E3E0  B0 03 00 44 */	sth r0, 0x44(r3)
/* 80111304 0010E3E4  80 03 00 14 */	lwz r0, 0x14(r3)
/* 80111308 0010E3E8  54 00 07 32 */	rlwinm r0, r0, 0, 28, 25
/* 8011130C 0010E3EC  60 00 00 30 */	ori r0, r0, 0x30
/* 80111310 0010E3F0  90 03 00 14 */	stw r0, 0x14(r3)
/* 80111314 0010E3F4  84 04 7A 68 */	lwzu r0, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l(r4)
/* 80111318 0010E3F8  60 00 00 20 */	ori r0, r0, 0x20
/* 8011131C 0010E3FC  90 04 00 00 */	stw r0, 0x0(r4)
.L_80111320:
/* 80111320 0010E400  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80111324 0010E404  7C 08 03 A6 */	mtlr r0
/* 80111328 0010E408  38 21 00 10 */	addi r1, r1, 0x10
/* 8011132C 0010E40C  4E 80 00 20 */	blr
.endfn "fade_hook_in__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::fade_hook_update(float)
.fn "fade_hook_update__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Ff", local
/* 80111330 0010E410  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80111334 0010E414  7C 08 02 A6 */	mflr r0
/* 80111338 0010E418  90 01 00 24 */	stw r0, 0x24(r1)
/* 8011133C 0010E41C  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80111340 0010E420  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 80111344 0010E424  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80111348 0010E428  FF E0 08 90 */	fmr f31, f1
/* 8011134C 0010E42C  80 03 7A 68 */	lwz r0, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l(r3)
/* 80111350 0010E430  54 00 06 75 */	rlwinm. r0, r0, 0, 25, 26
/* 80111354 0010E434  41 82 00 B8 */	beq .L_8011140C
/* 80111358 0010E438  4B FF FE 65 */	bl "get_hook_model__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"
/* 8011135C 0010E43C  28 03 00 00 */	cmplwi r3, 0x0
/* 80111360 0010E440  41 82 00 AC */	beq .L_8011140C
/* 80111364 0010E444  3C A0 80 31 */	lis r5, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80111368 0010E448  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 8011136C 0010E44C  38 A5 37 88 */	addi r5, r5, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80111370 0010E450  84 04 7A 68 */	lwzu r0, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l(r4)
/* 80111374 0010E454  C0 22 9E 88 */	lfs f1, "@961"@sda21(r2)
/* 80111378 0010E458  C0 05 00 28 */	lfs f0, 0x28(r5)
/* 8011137C 0010E45C  54 00 06 73 */	rlwinm. r0, r0, 0, 25, 25
/* 80111380 0010E460  EC 21 00 28 */	fsubs f1, f1, f0
/* 80111384 0010E464  C0 05 00 2C */	lfs f0, 0x2c(r5)
/* 80111388 0010E468  EC 21 00 24 */	fdivs f1, f1, f0
/* 8011138C 0010E46C  41 82 00 38 */	beq .L_801113C4
/* 80111390 0010E470  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 80111394 0010E474  EC 01 07 FC */	fnmsubs f0, f1, f31, f0
/* 80111398 0010E478  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 8011139C 0010E47C  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 801113A0 0010E480  C0 25 00 28 */	lfs f1, 0x28(r5)
/* 801113A4 0010E484  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 801113A8 0010E488  4C 40 13 82 */	cror eq, lt, eq
/* 801113AC 0010E48C  40 82 00 60 */	bne .L_8011140C
/* 801113B0 0010E490  D0 23 00 24 */	stfs f1, 0x24(r3)
/* 801113B4 0010E494  80 04 00 00 */	lwz r0, 0x0(r4)
/* 801113B8 0010E498  54 00 06 B0 */	rlwinm r0, r0, 0, 26, 24
/* 801113BC 0010E49C  90 04 00 00 */	stw r0, 0x0(r4)
/* 801113C0 0010E4A0  48 00 00 4C */	b .L_8011140C
.L_801113C4:
/* 801113C4 0010E4A4  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 801113C8 0010E4A8  EC 01 07 FA */	fmadds f0, f1, f31, f0
/* 801113CC 0010E4AC  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 801113D0 0010E4B0  C0 23 00 24 */	lfs f1, 0x24(r3)
/* 801113D4 0010E4B4  C0 02 9E 88 */	lfs f0, "@961"@sda21(r2)
/* 801113D8 0010E4B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801113DC 0010E4BC  4C 41 13 82 */	cror eq, gt, eq
/* 801113E0 0010E4C0  40 82 00 2C */	bne .L_8011140C
/* 801113E4 0010E4C4  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 801113E8 0010E4C8  80 04 00 00 */	lwz r0, 0x0(r4)
/* 801113EC 0010E4CC  54 00 06 F2 */	rlwinm r0, r0, 0, 27, 25
/* 801113F0 0010E4D0  90 04 00 00 */	stw r0, 0x0(r4)
/* 801113F4 0010E4D4  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 801113F8 0010E4D8  70 00 BF FF */	andi. r0, r0, 0xbfff
/* 801113FC 0010E4DC  B0 03 00 44 */	sth r0, 0x44(r3)
/* 80111400 0010E4E0  80 03 00 14 */	lwz r0, 0x14(r3)
/* 80111404 0010E4E4  54 00 07 32 */	rlwinm r0, r0, 0, 28, 25
/* 80111408 0010E4E8  90 03 00 14 */	stw r0, 0x14(r3)
.L_8011140C:
/* 8011140C 0010E4EC  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 80111410 0010E4F0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80111414 0010E4F4  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80111418 0010E4F8  7C 08 03 A6 */	mtlr r0
/* 8011141C 0010E4FC  38 21 00 20 */	addi r1, r1, 0x20
/* 80111420 0010E500  4E 80 00 20 */	blr
.endfn "fade_hook_update__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Ff"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::start()
.fn "start__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv", local
/* 80111424 0010E504  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80111428 0010E508  7C 08 02 A6 */	mflr r0
/* 8011142C 0010E50C  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80111430 0010E510  90 01 00 24 */	stw r0, 0x24(r1)
/* 80111434 0010E514  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80111438 0010E518  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8011143C 0010E51C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80111440 0010E520  3B A3 7A 68 */	addi r29, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80111444 0010E524  93 81 00 10 */	stw r28, 0x10(r1)
/* 80111448 0010E528  80 1D 00 00 */	lwz r0, 0x0(r29)
/* 8011144C 0010E52C  54 00 07 7E */	clrlwi r0, r0, 29
/* 80111450 0010E530  2C 00 00 03 */	cmpwi r0, 0x3
/* 80111454 0010E534  40 82 01 B8 */	bne .L_8011160C
/* 80111458 0010E538  3C 60 80 3C */	lis r3, globals@ha
/* 8011145C 0010E53C  80 1D 00 3C */	lwz r0, 0x3c(r29)
/* 80111460 0010E540  3B C3 05 58 */	addi r30, r3, globals@l
/* 80111464 0010E544  3B E0 00 00 */	li r31, 0x0
/* 80111468 0010E548  80 7E 07 04 */	lwz r3, 0x704(r30)
/* 8011146C 0010E54C  28 00 00 00 */	cmplwi r0, 0x0
/* 80111470 0010E550  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80111474 0010E554  80 63 00 08 */	lwz r3, 0x8(r3)
/* 80111478 0010E558  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8011147C 0010E55C  83 83 00 04 */	lwz r28, 0x4(r3)
/* 80111480 0010E560  40 82 00 FC */	bne .L_8011157C
/* 80111484 0010E564  80 7E 09 C4 */	lwz r3, 0x9c4(r30)
/* 80111488 0010E568  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8011148C 0010E56C  2C 00 00 00 */	cmpwi r0, 0x0
/* 80111490 0010E570  40 82 00 EC */	bne .L_8011157C
/* 80111494 0010E574  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80111498 0010E578  7F 83 E3 78 */	mr r3, r28
/* 8011149C 0010E57C  38 84 A6 88 */	addi r4, r4, "@stringBase0"@l
/* 801114A0 0010E580  38 84 00 42 */	addi r4, r4, 0x42
/* 801114A4 0010E584  48 0D 60 79 */	bl strcmp
/* 801114A8 0010E588  2C 03 00 00 */	cmpwi r3, 0x0
/* 801114AC 0010E58C  40 82 00 AC */	bne .L_80111558
/* 801114B0 0010E590  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801114B4 0010E594  7F 83 E3 78 */	mr r3, r28
/* 801114B8 0010E598  38 84 A6 88 */	addi r4, r4, "@stringBase0"@l
/* 801114BC 0010E59C  38 84 00 4E */	addi r4, r4, 0x4e
/* 801114C0 0010E5A0  48 0D 60 5D */	bl strcmp
/* 801114C4 0010E5A4  2C 03 00 00 */	cmpwi r3, 0x0
/* 801114C8 0010E5A8  40 82 00 90 */	bne .L_80111558
/* 801114CC 0010E5AC  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801114D0 0010E5B0  7F 83 E3 78 */	mr r3, r28
/* 801114D4 0010E5B4  38 84 A6 88 */	addi r4, r4, "@stringBase0"@l
/* 801114D8 0010E5B8  38 84 00 59 */	addi r4, r4, 0x59
/* 801114DC 0010E5BC  48 0D 60 41 */	bl strcmp
/* 801114E0 0010E5C0  2C 03 00 00 */	cmpwi r3, 0x0
/* 801114E4 0010E5C4  40 82 00 74 */	bne .L_80111558
/* 801114E8 0010E5C8  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801114EC 0010E5CC  7F 83 E3 78 */	mr r3, r28
/* 801114F0 0010E5D0  38 84 A6 88 */	addi r4, r4, "@stringBase0"@l
/* 801114F4 0010E5D4  38 84 00 64 */	addi r4, r4, 0x64
/* 801114F8 0010E5D8  48 0D 60 25 */	bl strcmp
/* 801114FC 0010E5DC  2C 03 00 00 */	cmpwi r3, 0x0
/* 80111500 0010E5E0  40 82 00 58 */	bne .L_80111558
/* 80111504 0010E5E4  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80111508 0010E5E8  7F 83 E3 78 */	mr r3, r28
/* 8011150C 0010E5EC  38 84 A6 88 */	addi r4, r4, "@stringBase0"@l
/* 80111510 0010E5F0  38 84 00 71 */	addi r4, r4, 0x71
/* 80111514 0010E5F4  48 0D 60 09 */	bl strcmp
/* 80111518 0010E5F8  2C 03 00 00 */	cmpwi r3, 0x0
/* 8011151C 0010E5FC  40 82 00 3C */	bne .L_80111558
/* 80111520 0010E600  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80111524 0010E604  7F 83 E3 78 */	mr r3, r28
/* 80111528 0010E608  38 84 A6 88 */	addi r4, r4, "@stringBase0"@l
/* 8011152C 0010E60C  38 84 00 7D */	addi r4, r4, 0x7d
/* 80111530 0010E610  48 0D 5F ED */	bl strcmp
/* 80111534 0010E614  2C 03 00 00 */	cmpwi r3, 0x0
/* 80111538 0010E618  40 82 00 20 */	bne .L_80111558
/* 8011153C 0010E61C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80111540 0010E620  7F 83 E3 78 */	mr r3, r28
/* 80111544 0010E624  38 84 A6 88 */	addi r4, r4, "@stringBase0"@l
/* 80111548 0010E628  38 84 00 84 */	addi r4, r4, 0x84
/* 8011154C 0010E62C  48 0D 5F D1 */	bl strcmp
/* 80111550 0010E630  2C 03 00 00 */	cmpwi r3, 0x0
/* 80111554 0010E634  41 82 00 28 */	beq .L_8011157C
.L_80111558:
/* 80111558 0010E638  3C 60 80 3C */	lis r3, globals@ha
/* 8011155C 0010E63C  38 63 05 58 */	addi r3, r3, globals@l
/* 80111560 0010E640  80 03 1A FC */	lwz r0, 0x1afc(r3)
/* 80111564 0010E644  2C 00 00 00 */	cmpwi r0, 0x0
/* 80111568 0010E648  40 82 00 14 */	bne .L_8011157C
/* 8011156C 0010E64C  80 03 17 88 */	lwz r0, 0x1788(r3)
/* 80111570 0010E650  54 00 04 A1 */	rlwinm. r0, r0, 0, 18, 16
/* 80111574 0010E654  40 82 00 08 */	bne .L_8011157C
/* 80111578 0010E658  3B E0 00 01 */	li r31, 0x1
.L_8011157C:
/* 8011157C 0010E65C  38 60 00 00 */	li r3, 0x0
/* 80111580 0010E660  57 E0 06 3F */	clrlwi. r0, r31, 24
/* 80111584 0010E664  90 7D 00 3C */	stw r3, 0x3c(r29)
/* 80111588 0010E668  41 82 00 3C */	beq .L_801115C4
/* 8011158C 0010E66C  80 7E 07 28 */	lwz r3, 0x728(r30)
/* 80111590 0010E670  38 63 00 30 */	addi r3, r3, 0x30
/* 80111594 0010E674  4B FF FB 2D */	bl "find_nearest_hook__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FRC5xVec3"
/* 80111598 0010E678  2C 03 00 00 */	cmpwi r3, 0x0
/* 8011159C 0010E67C  41 80 00 28 */	blt .L_801115C4
/* 801115A0 0010E680  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801115A4 0010E684  54 60 10 3A */	slwi r0, r3, 2
/* 801115A8 0010E688  38 64 7A 68 */	addi r3, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801115AC 0010E68C  7C 63 02 14 */	add r3, r3, r0
/* 801115B0 0010E690  80 83 00 40 */	lwz r4, 0x40(r3)
/* 801115B4 0010E694  90 9D 00 3C */	stw r4, 0x3c(r29)
/* 801115B8 0010E698  80 63 00 40 */	lwz r3, 0x40(r3)
/* 801115BC 0010E69C  80 03 00 14 */	lwz r0, 0x14(r3)
/* 801115C0 0010E6A0  90 04 00 14 */	stw r0, 0x14(r4)
.L_801115C4:
/* 801115C4 0010E6A4  80 1D 00 3C */	lwz r0, 0x3c(r29)
/* 801115C8 0010E6A8  28 00 00 00 */	cmplwi r0, 0x0
/* 801115CC 0010E6AC  41 82 00 40 */	beq .L_8011160C
/* 801115D0 0010E6B0  38 60 40 00 */	li r3, 0x4000
/* 801115D4 0010E6B4  4B F5 4F 2D */	bl zEntPlayerControlOn__F13zControlOwner
/* 801115D8 0010E6B8  4B FF FC 79 */	bl "fade_hook_out__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"
/* 801115DC 0010E6BC  4B FF FB DD */	bl "init_sounds__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"
/* 801115E0 0010E6C0  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801115E4 0010E6C4  38 83 7A 68 */	addi r4, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801115E8 0010E6C8  80 04 00 00 */	lwz r0, 0x0(r4)
/* 801115EC 0010E6CC  80 64 00 08 */	lwz r3, 0x8(r4)
/* 801115F0 0010E6D0  60 00 00 04 */	ori r0, r0, 0x4
/* 801115F4 0010E6D4  90 04 00 00 */	stw r0, 0x0(r4)
/* 801115F8 0010E6D8  90 64 00 04 */	stw r3, 0x4(r4)
/* 801115FC 0010E6DC  81 83 00 04 */	lwz r12, 0x4(r3)
/* 80111600 0010E6E0  81 8C 00 08 */	lwz r12, 0x8(r12)
/* 80111604 0010E6E4  7D 89 03 A6 */	mtctr r12
/* 80111608 0010E6E8  4E 80 04 21 */	bctrl
.L_8011160C:
/* 8011160C 0010E6EC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80111610 0010E6F0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80111614 0010E6F4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80111618 0010E6F8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8011161C 0010E6FC  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80111620 0010E700  7C 08 03 A6 */	mtlr r0
/* 80111624 0010E704  38 21 00 20 */	addi r1, r1, 0x20
/* 80111628 0010E708  4E 80 00 20 */	blr
.endfn "start__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::state_type::start()
.fn "start__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10state_typeFv", local
/* 8011162C 0010E70C  4E 80 00 20 */	blr
.endfn "start__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10state_typeFv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::cache_hook(bungee_state::hook_type&)
.fn "cache_hook__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FRQ212bungee_state9hook_type", local
/* 80111630 0010E710  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80111634 0010E714  38 A4 7A 68 */	addi r5, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80111638 0010E718  80 05 01 60 */	lwz r0, 0x160(r5)
/* 8011163C 0010E71C  54 00 10 3A */	slwi r0, r0, 2
/* 80111640 0010E720  7C 85 02 14 */	add r4, r5, r0
/* 80111644 0010E724  90 64 00 40 */	stw r3, 0x40(r4)
/* 80111648 0010E728  80 65 01 60 */	lwz r3, 0x160(r5)
/* 8011164C 0010E72C  38 03 00 01 */	addi r0, r3, 0x1
/* 80111650 0010E730  90 05 01 60 */	stw r0, 0x160(r5)
/* 80111654 0010E734  4E 80 00 20 */	blr
.endfn "cache_hook__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FRQ212bungee_state9hook_type"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::cache_drop(const bungee_state::drop_asset&, unsigned int)
.fn "cache_drop__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FRCQ212bungee_state10drop_assetUi", local
/* 80111658 0010E738  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8011165C 0010E73C  7C 08 02 A6 */	mflr r0
/* 80111660 0010E740  90 01 00 24 */	stw r0, 0x24(r1)
/* 80111664 0010E744  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80111668 0010E748  7C 7F 1B 78 */	mr r31, r3
/* 8011166C 0010E74C  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80111670 0010E750  90 81 00 08 */	stw r4, 0x8(r1)
/* 80111674 0010E754  38 81 00 08 */	addi r4, r1, 0x8
/* 80111678 0010E758  4B F3 A0 95 */	bl xSTFindAsset__FUiPUi
/* 8011167C 0010E75C  28 03 00 00 */	cmplwi r3, 0x0
/* 80111680 0010E760  41 82 00 44 */	beq .L_801116C4
/* 80111684 0010E764  80 01 00 08 */	lwz r0, 0x8(r1)
/* 80111688 0010E768  28 00 00 0C */	cmplwi r0, 0xc
/* 8011168C 0010E76C  40 82 00 38 */	bne .L_801116C4
/* 80111690 0010E770  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80111694 0010E774  38 A4 7A 68 */	addi r5, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80111698 0010E778  80 05 01 64 */	lwz r0, 0x164(r5)
/* 8011169C 0010E77C  54 00 10 3A */	slwi r0, r0, 2
/* 801116A0 0010E780  7C 85 02 14 */	add r4, r5, r0
/* 801116A4 0010E784  93 E4 00 60 */	stw r31, 0x60(r4)
/* 801116A8 0010E788  80 05 01 64 */	lwz r0, 0x164(r5)
/* 801116AC 0010E78C  54 00 10 3A */	slwi r0, r0, 2
/* 801116B0 0010E790  7C 85 02 14 */	add r4, r5, r0
/* 801116B4 0010E794  90 64 00 E0 */	stw r3, 0xe0(r4)
/* 801116B8 0010E798  80 65 01 64 */	lwz r3, 0x164(r5)
/* 801116BC 0010E79C  38 03 00 01 */	addi r0, r3, 0x1
/* 801116C0 0010E7A0  90 05 01 64 */	stw r0, 0x164(r5)
.L_801116C4:
/* 801116C4 0010E7A4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801116C8 0010E7A8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801116CC 0010E7AC  7C 08 03 A6 */	mtlr r0
/* 801116D0 0010E7B0  38 21 00 20 */	addi r1, r1, 0x20
/* 801116D4 0010E7B4  4E 80 00 20 */	blr
.endfn "cache_drop__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FRCQ212bungee_state10drop_assetUi"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::init_cache()
.fn "init_cache__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv", local
/* 801116D8 0010E7B8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801116DC 0010E7BC  7C 08 02 A6 */	mflr r0
/* 801116E0 0010E7C0  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801116E4 0010E7C4  3C 60 80 3C */	lis r3, globals@ha
/* 801116E8 0010E7C8  90 01 00 34 */	stw r0, 0x34(r1)
/* 801116EC 0010E7CC  38 63 05 58 */	addi r3, r3, globals@l
/* 801116F0 0010E7D0  38 00 00 00 */	li r0, 0x0
/* 801116F4 0010E7D4  38 84 7A 68 */	addi r4, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801116F8 0010E7D8  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 801116FC 0010E7DC  80 63 1F C0 */	lwz r3, 0x1fc0(r3)
/* 80111700 0010E7E0  90 04 01 60 */	stw r0, 0x160(r4)
/* 80111704 0010E7E4  80 03 01 78 */	lwz r0, 0x178(r3)
/* 80111708 0010E7E8  83 83 02 98 */	lwz r28, 0x298(r3)
/* 8011170C 0010E7EC  1C 00 00 18 */	mulli r0, r0, 0x18
/* 80111710 0010E7F0  7F BC 02 14 */	add r29, r28, r0
/* 80111714 0010E7F4  48 00 00 10 */	b .L_80111724
.L_80111718:
/* 80111718 0010E7F8  7F 83 E3 78 */	mr r3, r28
/* 8011171C 0010E7FC  4B FF FF 15 */	bl "cache_hook__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FRQ212bungee_state9hook_type"
/* 80111720 0010E800  3B 9C 00 18 */	addi r28, r28, 0x18
.L_80111724:
/* 80111724 0010E804  7C 1C E8 40 */	cmplw r28, r29
/* 80111728 0010E808  40 82 FF F0 */	bne .L_80111718
/* 8011172C 0010E80C  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80111730 0010E810  3C 60 44 59 */	lis r3, 0x4459
/* 80111734 0010E814  38 84 7A 68 */	addi r4, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80111738 0010E818  38 00 00 00 */	li r0, 0x0
/* 8011173C 0010E81C  90 04 01 64 */	stw r0, 0x164(r4)
/* 80111740 0010E820  38 63 4E 41 */	addi r3, r3, 0x4e41
/* 80111744 0010E824  4B F3 A0 D5 */	bl xSTAssetCountByType__FUi
/* 80111748 0010E828  7C 7C 1B 78 */	mr r28, r3
/* 8011174C 0010E82C  48 00 00 6D */	bl type_name__Q212bungee_state10drop_assetFv
/* 80111750 0010E830  4B F3 AA C5 */	bl xStrHash__FPCc
/* 80111754 0010E834  7C 7D 1B 78 */	mr r29, r3
/* 80111758 0010E838  3B 60 00 00 */	li r27, 0x0
/* 8011175C 0010E83C  3B C0 00 00 */	li r30, 0x0
/* 80111760 0010E840  3F E0 44 59 */	lis r31, 0x4459
/* 80111764 0010E844  48 00 00 38 */	b .L_8011179C
.L_80111768:
/* 80111768 0010E848  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8011176C 0010E84C  7F 64 DB 78 */	mr r4, r27
/* 80111770 0010E850  38 7F 4E 41 */	addi r3, r31, 0x4e41
/* 80111774 0010E854  38 A1 00 08 */	addi r5, r1, 0x8
/* 80111778 0010E858  4B F3 A1 29 */	bl xSTFindAssetByType__FUiiPUi
/* 8011177C 0010E85C  28 03 00 00 */	cmplwi r3, 0x0
/* 80111780 0010E860  41 82 00 18 */	beq .L_80111798
/* 80111784 0010E864  80 03 00 08 */	lwz r0, 0x8(r3)
/* 80111788 0010E868  7C 00 E8 40 */	cmplw r0, r29
/* 8011178C 0010E86C  40 82 00 0C */	bne .L_80111798
/* 80111790 0010E870  80 81 00 08 */	lwz r4, 0x8(r1)
/* 80111794 0010E874  4B FF FE C5 */	bl "cache_drop__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FRCQ212bungee_state10drop_assetUi"
.L_80111798:
/* 80111798 0010E878  3B 7B 00 01 */	addi r27, r27, 0x1
.L_8011179C:
/* 8011179C 0010E87C  7C 1B E0 00 */	cmpw r27, r28
/* 801117A0 0010E880  41 80 FF C8 */	blt .L_80111768
/* 801117A4 0010E884  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 801117A8 0010E888  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801117AC 0010E88C  7C 08 03 A6 */	mtlr r0
/* 801117B0 0010E890  38 21 00 30 */	addi r1, r1, 0x30
/* 801117B4 0010E894  4E 80 00 20 */	blr
.endfn "init_cache__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"

# bungee_state::drop_asset::type_name()
.fn type_name__Q212bungee_state10drop_assetFv, weak
/* 801117B8 0010E898  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801117BC 0010E89C  38 63 A6 88 */	addi r3, r3, "@stringBase0"@l
/* 801117C0 0010E8A0  38 63 00 8F */	addi r3, r3, 0x8f
/* 801117C4 0010E8A4  4E 80 00 20 */	blr
.endfn type_name__Q212bungee_state10drop_assetFv

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::common_update(xScene&, float)
.fn "common_update__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FR6xScenef", local
/* 801117C8 0010E8A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801117CC 0010E8AC  7C 08 02 A6 */	mflr r0
/* 801117D0 0010E8B0  3C 80 80 3C */	lis r4, globals@ha
/* 801117D4 0010E8B4  38 A4 05 58 */	addi r5, r4, globals@l
/* 801117D8 0010E8B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801117DC 0010E8BC  7C 64 1B 78 */	mr r4, r3
/* 801117E0 0010E8C0  38 65 06 E0 */	addi r3, r5, 0x6e0
/* 801117E4 0010E8C4  4B F6 AD 79 */	bl zEntPlayerCollTrigger__FP4xEntP6xScene
/* 801117E8 0010E8C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801117EC 0010E8CC  7C 08 03 A6 */	mtlr r0
/* 801117F0 0010E8D0  38 21 00 10 */	addi r1, r1, 0x10
/* 801117F4 0010E8D4  4E 80 00 20 */	blr
.endfn "common_update__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FR6xScenef"

# bungee_state::load(xBase&, xDynAsset&, unsigned long)
.fn load__12bungee_stateFR5xBaseR9xDynAssetUl, global
/* 801117F8 0010E8D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801117FC 0010E8DC  7C 08 02 A6 */	mflr r0
/* 80111800 0010E8E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80111804 0010E8E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80111808 0010E8E8  7C 9F 23 78 */	mr r31, r4
/* 8011180C 0010E8EC  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80111810 0010E8F0  7C 7E 1B 78 */	mr r30, r3
/* 80111814 0010E8F4  4B EF 7B ED */	bl xBaseInit__FP5xBaseP10xBaseAsset
/* 80111818 0010E8F8  93 FE 00 10 */	stw r31, 0x10(r30)
/* 8011181C 0010E8FC  88 1E 00 05 */	lbz r0, 0x5(r30)
/* 80111820 0010E900  28 00 00 00 */	cmplwi r0, 0x0
/* 80111824 0010E904  41 82 00 10 */	beq .L_80111834
/* 80111828 0010E908  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 8011182C 0010E90C  38 03 00 8C */	addi r0, r3, 0x8c
/* 80111830 0010E910  90 1E 00 08 */	stw r0, 0x8(r30)
.L_80111834:
/* 80111834 0010E914  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 80111838 0010E918  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8011183C 0010E91C  4B FA 32 01 */	bl zSceneFindObject__FUi
/* 80111840 0010E920  90 7E 00 14 */	stw r3, 0x14(r30)
/* 80111844 0010E924  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80111848 0010E928  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8011184C 0010E92C  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80111850 0010E930  7C 08 03 A6 */	mtlr r0
/* 80111854 0010E934  38 21 00 10 */	addi r1, r1, 0x10
/* 80111858 0010E938  4E 80 00 20 */	blr
.endfn load__12bungee_stateFR5xBaseR9xDynAssetUl

# bungee_state::load_settings(xIniFile&)
.fn load_settings__12bungee_stateFR8xIniFile, global
/* 8011185C 0010E93C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80111860 0010E940  7C 08 02 A6 */	mflr r0
/* 80111864 0010E944  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80111868 0010E948  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011186C 0010E94C  38 84 A6 88 */	addi r4, r4, "@stringBase0"@l
/* 80111870 0010E950  38 84 00 A7 */	addi r4, r4, 0xa7
/* 80111874 0010E954  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80111878 0010E958  7C 7F 1B 78 */	mr r31, r3
/* 8011187C 0010E95C  C0 22 9E C8 */	lfs f1, "@2183"@sda21(r2)
/* 80111880 0010E960  4B F1 F2 C5 */	bl xIniGetFloat__FP8xIniFilePcf
/* 80111884 0010E964  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80111888 0010E968  D4 23 37 88 */	stfsu f1, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l(r3)
/* 8011188C 0010E96C  FC 40 08 18 */	frsp f2, f1
/* 80111890 0010E970  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80111894 0010E974  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111898 0010E978  40 80 00 08 */	bge .L_801118A0
/* 8011189C 0010E97C  D0 03 00 00 */	stfs f0, 0x0(r3)
.L_801118A0:
/* 801118A0 0010E980  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801118A4 0010E984  C0 02 9E 8C */	lfs f0, "@969"@sda21(r2)
/* 801118A8 0010E988  C4 23 37 88 */	lfsu f1, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l(r3)
/* 801118AC 0010E98C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801118B0 0010E990  40 81 00 08 */	ble .L_801118B8
/* 801118B4 0010E994  D0 03 00 00 */	stfs f0, 0x0(r3)
.L_801118B8:
/* 801118B8 0010E998  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801118BC 0010E99C  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801118C0 0010E9A0  38 A4 A6 88 */	addi r5, r4, "@stringBase0"@l
/* 801118C4 0010E9A4  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 801118C8 0010E9A8  38 83 37 88 */	addi r4, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801118CC 0010E9AC  C0 42 9E 8C */	lfs f2, "@969"@sda21(r2)
/* 801118D0 0010E9B0  38 65 00 C8 */	addi r3, r5, 0xc8
/* 801118D4 0010E9B4  38 A0 00 00 */	li r5, 0x0
/* 801118D8 0010E9B8  38 C0 00 00 */	li r6, 0x0
/* 801118DC 0010E9BC  38 E0 00 00 */	li r7, 0x0
/* 801118E0 0010E9C0  4B F1 ED 4D */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 801118E4 0010E9C4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801118E8 0010E9C8  C0 22 9E 90 */	lfs f1, "@987"@sda21(r2)
/* 801118EC 0010E9CC  38 83 A6 88 */	addi r4, r3, "@stringBase0"@l
/* 801118F0 0010E9D0  7F E3 FB 78 */	mr r3, r31
/* 801118F4 0010E9D4  38 84 00 EC */	addi r4, r4, 0xec
/* 801118F8 0010E9D8  4B F1 F2 4D */	bl xIniGetFloat__FP8xIniFilePcf
/* 801118FC 0010E9DC  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80111900 0010E9E0  FC 40 08 18 */	frsp f2, f1
/* 80111904 0010E9E4  38 63 37 88 */	addi r3, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80111908 0010E9E8  38 83 00 04 */	addi r4, r3, 0x4
/* 8011190C 0010E9EC  D0 23 00 04 */	stfs f1, 0x4(r3)
/* 80111910 0010E9F0  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80111914 0010E9F4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111918 0010E9F8  40 80 00 08 */	bge .L_80111920
/* 8011191C 0010E9FC  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80111920:
/* 80111920 0010EA00  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 80111924 0010EA04  C0 02 9E 8C */	lfs f0, "@969"@sda21(r2)
/* 80111928 0010EA08  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011192C 0010EA0C  40 81 00 08 */	ble .L_80111934
/* 80111930 0010EA10  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80111934:
/* 80111934 0010EA14  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80111938 0010EA18  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 8011193C 0010EA1C  38 63 A6 88 */	addi r3, r3, "@stringBase0"@l
/* 80111940 0010EA20  C0 42 9E 8C */	lfs f2, "@969"@sda21(r2)
/* 80111944 0010EA24  38 A0 00 00 */	li r5, 0x0
/* 80111948 0010EA28  38 C0 00 00 */	li r6, 0x0
/* 8011194C 0010EA2C  38 63 01 0A */	addi r3, r3, 0x10a
/* 80111950 0010EA30  38 E0 00 00 */	li r7, 0x0
/* 80111954 0010EA34  4B F1 EC D9 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80111958 0010EA38  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8011195C 0010EA3C  C0 22 9E 90 */	lfs f1, "@987"@sda21(r2)
/* 80111960 0010EA40  38 83 A6 88 */	addi r4, r3, "@stringBase0"@l
/* 80111964 0010EA44  7F E3 FB 78 */	mr r3, r31
/* 80111968 0010EA48  38 84 01 2B */	addi r4, r4, 0x12b
/* 8011196C 0010EA4C  4B F1 F1 D9 */	bl xIniGetFloat__FP8xIniFilePcf
/* 80111970 0010EA50  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80111974 0010EA54  FC 40 08 18 */	frsp f2, f1
/* 80111978 0010EA58  38 63 37 88 */	addi r3, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 8011197C 0010EA5C  38 83 00 08 */	addi r4, r3, 0x8
/* 80111980 0010EA60  D0 23 00 08 */	stfs f1, 0x8(r3)
/* 80111984 0010EA64  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80111988 0010EA68  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8011198C 0010EA6C  40 80 00 08 */	bge .L_80111994
/* 80111990 0010EA70  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80111994:
/* 80111994 0010EA74  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 80111998 0010EA78  C0 02 9E B0 */	lfs f0, "@1817"@sda21(r2)
/* 8011199C 0010EA7C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801119A0 0010EA80  40 81 00 08 */	ble .L_801119A8
/* 801119A4 0010EA84  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_801119A8:
/* 801119A8 0010EA88  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801119AC 0010EA8C  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 801119B0 0010EA90  38 63 A6 88 */	addi r3, r3, "@stringBase0"@l
/* 801119B4 0010EA94  C0 42 9E B0 */	lfs f2, "@1817"@sda21(r2)
/* 801119B8 0010EA98  38 A0 00 00 */	li r5, 0x0
/* 801119BC 0010EA9C  38 C0 00 00 */	li r6, 0x0
/* 801119C0 0010EAA0  38 63 01 4C */	addi r3, r3, 0x14c
/* 801119C4 0010EAA4  38 E0 00 00 */	li r7, 0x0
/* 801119C8 0010EAA8  4B F1 EC 65 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 801119CC 0010EAAC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801119D0 0010EAB0  C0 22 9E 90 */	lfs f1, "@987"@sda21(r2)
/* 801119D4 0010EAB4  38 83 A6 88 */	addi r4, r3, "@stringBase0"@l
/* 801119D8 0010EAB8  7F E3 FB 78 */	mr r3, r31
/* 801119DC 0010EABC  38 84 01 72 */	addi r4, r4, 0x172
/* 801119E0 0010EAC0  4B F1 F1 65 */	bl xIniGetFloat__FP8xIniFilePcf
/* 801119E4 0010EAC4  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801119E8 0010EAC8  FC 40 08 18 */	frsp f2, f1
/* 801119EC 0010EACC  38 63 37 88 */	addi r3, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801119F0 0010EAD0  38 83 00 0C */	addi r4, r3, 0xc
/* 801119F4 0010EAD4  D0 23 00 0C */	stfs f1, 0xc(r3)
/* 801119F8 0010EAD8  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 801119FC 0010EADC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111A00 0010EAE0  40 80 00 08 */	bge .L_80111A08
/* 80111A04 0010EAE4  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80111A08:
/* 80111A08 0010EAE8  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 80111A0C 0010EAEC  C0 02 9E B0 */	lfs f0, "@1817"@sda21(r2)
/* 80111A10 0010EAF0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111A14 0010EAF4  40 81 00 08 */	ble .L_80111A1C
/* 80111A18 0010EAF8  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80111A1C:
/* 80111A1C 0010EAFC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80111A20 0010EB00  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80111A24 0010EB04  38 63 A6 88 */	addi r3, r3, "@stringBase0"@l
/* 80111A28 0010EB08  C0 42 9E B0 */	lfs f2, "@1817"@sda21(r2)
/* 80111A2C 0010EB0C  38 A0 00 00 */	li r5, 0x0
/* 80111A30 0010EB10  38 C0 00 00 */	li r6, 0x0
/* 80111A34 0010EB14  38 63 01 90 */	addi r3, r3, 0x190
/* 80111A38 0010EB18  38 E0 00 00 */	li r7, 0x0
/* 80111A3C 0010EB1C  4B F1 EB F1 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80111A40 0010EB20  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80111A44 0010EB24  C0 22 9E 90 */	lfs f1, "@987"@sda21(r2)
/* 80111A48 0010EB28  38 83 A6 88 */	addi r4, r3, "@stringBase0"@l
/* 80111A4C 0010EB2C  7F E3 FB 78 */	mr r3, r31
/* 80111A50 0010EB30  38 84 01 B3 */	addi r4, r4, 0x1b3
/* 80111A54 0010EB34  4B F1 F0 F1 */	bl xIniGetFloat__FP8xIniFilePcf
/* 80111A58 0010EB38  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80111A5C 0010EB3C  FC 40 08 18 */	frsp f2, f1
/* 80111A60 0010EB40  38 63 37 88 */	addi r3, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80111A64 0010EB44  38 83 00 10 */	addi r4, r3, 0x10
/* 80111A68 0010EB48  D0 23 00 10 */	stfs f1, 0x10(r3)
/* 80111A6C 0010EB4C  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80111A70 0010EB50  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111A74 0010EB54  40 80 00 08 */	bge .L_80111A7C
/* 80111A78 0010EB58  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80111A7C:
/* 80111A7C 0010EB5C  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 80111A80 0010EB60  C0 02 9E B0 */	lfs f0, "@1817"@sda21(r2)
/* 80111A84 0010EB64  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111A88 0010EB68  40 81 00 08 */	ble .L_80111A90
/* 80111A8C 0010EB6C  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80111A90:
/* 80111A90 0010EB70  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80111A94 0010EB74  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80111A98 0010EB78  38 63 A6 88 */	addi r3, r3, "@stringBase0"@l
/* 80111A9C 0010EB7C  C0 42 9E B0 */	lfs f2, "@1817"@sda21(r2)
/* 80111AA0 0010EB80  38 A0 00 00 */	li r5, 0x0
/* 80111AA4 0010EB84  38 C0 00 00 */	li r6, 0x0
/* 80111AA8 0010EB88  38 63 01 D1 */	addi r3, r3, 0x1d1
/* 80111AAC 0010EB8C  38 E0 00 00 */	li r7, 0x0
/* 80111AB0 0010EB90  4B F1 EB 7D */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80111AB4 0010EB94  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80111AB8 0010EB98  C0 22 9E CC */	lfs f1, "@2184"@sda21(r2)
/* 80111ABC 0010EB9C  38 83 A6 88 */	addi r4, r3, "@stringBase0"@l
/* 80111AC0 0010EBA0  7F E3 FB 78 */	mr r3, r31
/* 80111AC4 0010EBA4  38 84 01 F4 */	addi r4, r4, 0x1f4
/* 80111AC8 0010EBA8  4B F1 F0 7D */	bl xIniGetFloat__FP8xIniFilePcf
/* 80111ACC 0010EBAC  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80111AD0 0010EBB0  FC 40 08 18 */	frsp f2, f1
/* 80111AD4 0010EBB4  38 63 37 88 */	addi r3, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80111AD8 0010EBB8  38 83 00 14 */	addi r4, r3, 0x14
/* 80111ADC 0010EBBC  D0 23 00 14 */	stfs f1, 0x14(r3)
/* 80111AE0 0010EBC0  C0 02 9E CC */	lfs f0, "@2184"@sda21(r2)
/* 80111AE4 0010EBC4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111AE8 0010EBC8  40 80 00 08 */	bge .L_80111AF0
/* 80111AEC 0010EBCC  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80111AF0:
/* 80111AF0 0010EBD0  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 80111AF4 0010EBD4  C0 02 9E D0 */	lfs f0, "@2185"@sda21(r2)
/* 80111AF8 0010EBD8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111AFC 0010EBDC  40 81 00 08 */	ble .L_80111B04
/* 80111B00 0010EBE0  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80111B04:
/* 80111B04 0010EBE4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80111B08 0010EBE8  C0 22 9E CC */	lfs f1, "@2184"@sda21(r2)
/* 80111B0C 0010EBEC  38 63 A6 88 */	addi r3, r3, "@stringBase0"@l
/* 80111B10 0010EBF0  C0 42 9E D0 */	lfs f2, "@2185"@sda21(r2)
/* 80111B14 0010EBF4  38 A0 00 00 */	li r5, 0x0
/* 80111B18 0010EBF8  38 C0 00 00 */	li r6, 0x0
/* 80111B1C 0010EBFC  38 63 02 0F */	addi r3, r3, 0x20f
/* 80111B20 0010EC00  38 E0 00 00 */	li r7, 0x0
/* 80111B24 0010EC04  4B F1 EB 09 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80111B28 0010EC08  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80111B2C 0010EC0C  C0 22 9E D4 */	lfs f1, "@2186"@sda21(r2)
/* 80111B30 0010EC10  38 83 A6 88 */	addi r4, r3, "@stringBase0"@l
/* 80111B34 0010EC14  7F E3 FB 78 */	mr r3, r31
/* 80111B38 0010EC18  38 84 02 2E */	addi r4, r4, 0x22e
/* 80111B3C 0010EC1C  4B F1 F0 09 */	bl xIniGetFloat__FP8xIniFilePcf
/* 80111B40 0010EC20  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80111B44 0010EC24  FC 40 08 18 */	frsp f2, f1
/* 80111B48 0010EC28  38 63 37 88 */	addi r3, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80111B4C 0010EC2C  38 83 00 18 */	addi r4, r3, 0x18
/* 80111B50 0010EC30  D0 23 00 18 */	stfs f1, 0x18(r3)
/* 80111B54 0010EC34  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80111B58 0010EC38  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111B5C 0010EC3C  40 80 00 08 */	bge .L_80111B64
/* 80111B60 0010EC40  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80111B64:
/* 80111B64 0010EC44  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 80111B68 0010EC48  C0 02 9E D8 */	lfs f0, "@2187"@sda21(r2)
/* 80111B6C 0010EC4C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111B70 0010EC50  40 81 00 08 */	ble .L_80111B78
/* 80111B74 0010EC54  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80111B78:
/* 80111B78 0010EC58  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80111B7C 0010EC5C  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80111B80 0010EC60  38 63 A6 88 */	addi r3, r3, "@stringBase0"@l
/* 80111B84 0010EC64  C0 42 9E D8 */	lfs f2, "@2187"@sda21(r2)
/* 80111B88 0010EC68  38 A0 00 00 */	li r5, 0x0
/* 80111B8C 0010EC6C  38 C0 00 00 */	li r6, 0x0
/* 80111B90 0010EC70  38 63 02 49 */	addi r3, r3, 0x249
/* 80111B94 0010EC74  38 E0 00 00 */	li r7, 0x0
/* 80111B98 0010EC78  4B F1 EA 95 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80111B9C 0010EC7C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80111BA0 0010EC80  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80111BA4 0010EC84  38 83 A6 88 */	addi r4, r3, "@stringBase0"@l
/* 80111BA8 0010EC88  7F E3 FB 78 */	mr r3, r31
/* 80111BAC 0010EC8C  38 84 02 6C */	addi r4, r4, 0x26c
/* 80111BB0 0010EC90  4B F1 EF 95 */	bl xIniGetFloat__FP8xIniFilePcf
/* 80111BB4 0010EC94  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80111BB8 0010EC98  FC 40 08 18 */	frsp f2, f1
/* 80111BBC 0010EC9C  38 63 37 88 */	addi r3, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80111BC0 0010ECA0  38 83 00 1C */	addi r4, r3, 0x1c
/* 80111BC4 0010ECA4  D0 23 00 1C */	stfs f1, 0x1c(r3)
/* 80111BC8 0010ECA8  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80111BCC 0010ECAC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111BD0 0010ECB0  40 80 00 08 */	bge .L_80111BD8
/* 80111BD4 0010ECB4  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80111BD8:
/* 80111BD8 0010ECB8  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 80111BDC 0010ECBC  C0 02 9E 88 */	lfs f0, "@961"@sda21(r2)
/* 80111BE0 0010ECC0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111BE4 0010ECC4  40 81 00 08 */	ble .L_80111BEC
/* 80111BE8 0010ECC8  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80111BEC:
/* 80111BEC 0010ECCC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80111BF0 0010ECD0  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80111BF4 0010ECD4  38 63 A6 88 */	addi r3, r3, "@stringBase0"@l
/* 80111BF8 0010ECD8  C0 42 9E 88 */	lfs f2, "@961"@sda21(r2)
/* 80111BFC 0010ECDC  38 A0 00 00 */	li r5, 0x0
/* 80111C00 0010ECE0  38 C0 00 00 */	li r6, 0x0
/* 80111C04 0010ECE4  38 63 02 85 */	addi r3, r3, 0x285
/* 80111C08 0010ECE8  38 E0 00 00 */	li r7, 0x0
/* 80111C0C 0010ECEC  4B F1 EA 21 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80111C10 0010ECF0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80111C14 0010ECF4  C0 22 9E B0 */	lfs f1, "@1817"@sda21(r2)
/* 80111C18 0010ECF8  38 83 A6 88 */	addi r4, r3, "@stringBase0"@l
/* 80111C1C 0010ECFC  7F E3 FB 78 */	mr r3, r31
/* 80111C20 0010ED00  38 84 02 A2 */	addi r4, r4, 0x2a2
/* 80111C24 0010ED04  4B F1 EF 21 */	bl xIniGetFloat__FP8xIniFilePcf
/* 80111C28 0010ED08  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80111C2C 0010ED0C  FC 40 08 18 */	frsp f2, f1
/* 80111C30 0010ED10  38 63 37 88 */	addi r3, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80111C34 0010ED14  38 83 00 20 */	addi r4, r3, 0x20
/* 80111C38 0010ED18  D0 23 00 20 */	stfs f1, 0x20(r3)
/* 80111C3C 0010ED1C  C0 02 9E 88 */	lfs f0, "@961"@sda21(r2)
/* 80111C40 0010ED20  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111C44 0010ED24  40 80 00 08 */	bge .L_80111C4C
/* 80111C48 0010ED28  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80111C4C:
/* 80111C4C 0010ED2C  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 80111C50 0010ED30  C0 02 9E 98 */	lfs f0, "@1029"@sda21(r2)
/* 80111C54 0010ED34  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111C58 0010ED38  40 81 00 08 */	ble .L_80111C60
/* 80111C5C 0010ED3C  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80111C60:
/* 80111C60 0010ED40  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80111C64 0010ED44  C0 22 9E 88 */	lfs f1, "@961"@sda21(r2)
/* 80111C68 0010ED48  38 63 A6 88 */	addi r3, r3, "@stringBase0"@l
/* 80111C6C 0010ED4C  C0 42 9E 98 */	lfs f2, "@1029"@sda21(r2)
/* 80111C70 0010ED50  38 A0 00 00 */	li r5, 0x0
/* 80111C74 0010ED54  38 C0 00 00 */	li r6, 0x0
/* 80111C78 0010ED58  38 63 02 BC */	addi r3, r3, 0x2bc
/* 80111C7C 0010ED5C  38 E0 00 00 */	li r7, 0x0
/* 80111C80 0010ED60  4B F1 E9 AD */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80111C84 0010ED64  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80111C88 0010ED68  C0 22 9E 88 */	lfs f1, "@961"@sda21(r2)
/* 80111C8C 0010ED6C  38 83 A6 88 */	addi r4, r3, "@stringBase0"@l
/* 80111C90 0010ED70  7F E3 FB 78 */	mr r3, r31
/* 80111C94 0010ED74  38 84 02 DE */	addi r4, r4, 0x2de
/* 80111C98 0010ED78  4B F1 EE AD */	bl xIniGetFloat__FP8xIniFilePcf
/* 80111C9C 0010ED7C  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80111CA0 0010ED80  FC 40 08 18 */	frsp f2, f1
/* 80111CA4 0010ED84  38 63 37 88 */	addi r3, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80111CA8 0010ED88  38 83 00 24 */	addi r4, r3, 0x24
/* 80111CAC 0010ED8C  D0 23 00 24 */	stfs f1, 0x24(r3)
/* 80111CB0 0010ED90  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80111CB4 0010ED94  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111CB8 0010ED98  40 80 00 08 */	bge .L_80111CC0
/* 80111CBC 0010ED9C  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80111CC0:
/* 80111CC0 0010EDA0  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 80111CC4 0010EDA4  C0 02 9E CC */	lfs f0, "@2184"@sda21(r2)
/* 80111CC8 0010EDA8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111CCC 0010EDAC  40 81 00 08 */	ble .L_80111CD4
/* 80111CD0 0010EDB0  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80111CD4:
/* 80111CD4 0010EDB4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80111CD8 0010EDB8  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80111CDC 0010EDBC  38 63 A6 88 */	addi r3, r3, "@stringBase0"@l
/* 80111CE0 0010EDC0  C0 42 9E CC */	lfs f2, "@2184"@sda21(r2)
/* 80111CE4 0010EDC4  38 A0 00 00 */	li r5, 0x0
/* 80111CE8 0010EDC8  38 C0 00 00 */	li r6, 0x0
/* 80111CEC 0010EDCC  38 63 02 FC */	addi r3, r3, 0x2fc
/* 80111CF0 0010EDD0  38 E0 00 00 */	li r7, 0x0
/* 80111CF4 0010EDD4  4B F1 E9 39 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80111CF8 0010EDD8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80111CFC 0010EDDC  C0 22 9E DC */	lfs f1, "@2188"@sda21(r2)
/* 80111D00 0010EDE0  38 83 A6 88 */	addi r4, r3, "@stringBase0"@l
/* 80111D04 0010EDE4  7F E3 FB 78 */	mr r3, r31
/* 80111D08 0010EDE8  38 84 03 19 */	addi r4, r4, 0x319
/* 80111D0C 0010EDEC  4B F1 EE 39 */	bl xIniGetFloat__FP8xIniFilePcf
/* 80111D10 0010EDF0  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80111D14 0010EDF4  FC 40 08 18 */	frsp f2, f1
/* 80111D18 0010EDF8  38 63 37 88 */	addi r3, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80111D1C 0010EDFC  38 83 00 28 */	addi r4, r3, 0x28
/* 80111D20 0010EE00  D0 23 00 28 */	stfs f1, 0x28(r3)
/* 80111D24 0010EE04  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80111D28 0010EE08  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111D2C 0010EE0C  40 80 00 08 */	bge .L_80111D34
/* 80111D30 0010EE10  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80111D34:
/* 80111D34 0010EE14  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 80111D38 0010EE18  C0 02 9E 88 */	lfs f0, "@961"@sda21(r2)
/* 80111D3C 0010EE1C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111D40 0010EE20  40 81 00 08 */	ble .L_80111D48
/* 80111D44 0010EE24  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80111D48:
/* 80111D48 0010EE28  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80111D4C 0010EE2C  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80111D50 0010EE30  38 63 A6 88 */	addi r3, r3, "@stringBase0"@l
/* 80111D54 0010EE34  C0 42 9E 88 */	lfs f2, "@961"@sda21(r2)
/* 80111D58 0010EE38  38 A0 00 00 */	li r5, 0x0
/* 80111D5C 0010EE3C  38 C0 00 00 */	li r6, 0x0
/* 80111D60 0010EE40  38 63 03 39 */	addi r3, r3, 0x339
/* 80111D64 0010EE44  38 E0 00 00 */	li r7, 0x0
/* 80111D68 0010EE48  4B F1 E8 C5 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80111D6C 0010EE4C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80111D70 0010EE50  C0 22 9E 88 */	lfs f1, "@961"@sda21(r2)
/* 80111D74 0010EE54  38 83 A6 88 */	addi r4, r3, "@stringBase0"@l
/* 80111D78 0010EE58  7F E3 FB 78 */	mr r3, r31
/* 80111D7C 0010EE5C  38 84 03 58 */	addi r4, r4, 0x358
/* 80111D80 0010EE60  4B F1 ED C5 */	bl xIniGetFloat__FP8xIniFilePcf
/* 80111D84 0010EE64  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80111D88 0010EE68  FC 40 08 18 */	frsp f2, f1
/* 80111D8C 0010EE6C  38 63 37 88 */	addi r3, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80111D90 0010EE70  38 83 00 2C */	addi r4, r3, 0x2c
/* 80111D94 0010EE74  D0 23 00 2C */	stfs f1, 0x2c(r3)
/* 80111D98 0010EE78  C0 02 9E E0 */	lfs f0, "@2189"@sda21(r2)
/* 80111D9C 0010EE7C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111DA0 0010EE80  40 80 00 08 */	bge .L_80111DA8
/* 80111DA4 0010EE84  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80111DA8:
/* 80111DA8 0010EE88  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 80111DAC 0010EE8C  C0 02 9E CC */	lfs f0, "@2184"@sda21(r2)
/* 80111DB0 0010EE90  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111DB4 0010EE94  40 81 00 08 */	ble .L_80111DBC
/* 80111DB8 0010EE98  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80111DBC:
/* 80111DBC 0010EE9C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80111DC0 0010EEA0  C0 22 9E E0 */	lfs f1, "@2189"@sda21(r2)
/* 80111DC4 0010EEA4  38 63 A6 88 */	addi r3, r3, "@stringBase0"@l
/* 80111DC8 0010EEA8  C0 42 9E CC */	lfs f2, "@2184"@sda21(r2)
/* 80111DCC 0010EEAC  38 A0 00 00 */	li r5, 0x0
/* 80111DD0 0010EEB0  38 C0 00 00 */	li r6, 0x0
/* 80111DD4 0010EEB4  38 63 03 77 */	addi r3, r3, 0x377
/* 80111DD8 0010EEB8  38 E0 00 00 */	li r7, 0x0
/* 80111DDC 0010EEBC  4B F1 E8 51 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80111DE0 0010EEC0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80111DE4 0010EEC4  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80111DE8 0010EEC8  38 83 A6 88 */	addi r4, r3, "@stringBase0"@l
/* 80111DEC 0010EECC  7F E3 FB 78 */	mr r3, r31
/* 80111DF0 0010EED0  38 84 03 95 */	addi r4, r4, 0x395
/* 80111DF4 0010EED4  4B F1 ED 51 */	bl xIniGetFloat__FP8xIniFilePcf
/* 80111DF8 0010EED8  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80111DFC 0010EEDC  FC 40 08 18 */	frsp f2, f1
/* 80111E00 0010EEE0  38 63 37 88 */	addi r3, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80111E04 0010EEE4  38 83 00 30 */	addi r4, r3, 0x30
/* 80111E08 0010EEE8  D0 23 00 30 */	stfs f1, 0x30(r3)
/* 80111E0C 0010EEEC  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80111E10 0010EEF0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111E14 0010EEF4  40 80 00 08 */	bge .L_80111E1C
/* 80111E18 0010EEF8  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80111E1C:
/* 80111E1C 0010EEFC  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 80111E20 0010EF00  C0 02 9E E4 */	lfs f0, "@2190"@sda21(r2)
/* 80111E24 0010EF04  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111E28 0010EF08  40 81 00 08 */	ble .L_80111E30
/* 80111E2C 0010EF0C  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80111E30:
/* 80111E30 0010EF10  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80111E34 0010EF14  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80111E38 0010EF18  38 63 A6 88 */	addi r3, r3, "@stringBase0"@l
/* 80111E3C 0010EF1C  C0 42 9E E4 */	lfs f2, "@2190"@sda21(r2)
/* 80111E40 0010EF20  38 A0 00 00 */	li r5, 0x0
/* 80111E44 0010EF24  38 C0 00 00 */	li r6, 0x0
/* 80111E48 0010EF28  38 63 03 BA */	addi r3, r3, 0x3ba
/* 80111E4C 0010EF2C  38 E0 00 00 */	li r7, 0x0
/* 80111E50 0010EF30  4B F1 E7 DD */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80111E54 0010EF34  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80111E58 0010EF38  C0 22 9E B4 */	lfs f1, "@1829"@sda21(r2)
/* 80111E5C 0010EF3C  38 83 A6 88 */	addi r4, r3, "@stringBase0"@l
/* 80111E60 0010EF40  7F E3 FB 78 */	mr r3, r31
/* 80111E64 0010EF44  38 84 03 D8 */	addi r4, r4, 0x3d8
/* 80111E68 0010EF48  4B F1 EC DD */	bl xIniGetFloat__FP8xIniFilePcf
/* 80111E6C 0010EF4C  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80111E70 0010EF50  FC 40 08 18 */	frsp f2, f1
/* 80111E74 0010EF54  38 63 37 88 */	addi r3, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80111E78 0010EF58  38 83 00 34 */	addi r4, r3, 0x34
/* 80111E7C 0010EF5C  D0 23 00 34 */	stfs f1, 0x34(r3)
/* 80111E80 0010EF60  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80111E84 0010EF64  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111E88 0010EF68  40 80 00 08 */	bge .L_80111E90
/* 80111E8C 0010EF6C  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80111E90:
/* 80111E90 0010EF70  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 80111E94 0010EF74  C0 02 9E 98 */	lfs f0, "@1029"@sda21(r2)
/* 80111E98 0010EF78  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111E9C 0010EF7C  40 81 00 08 */	ble .L_80111EA4
/* 80111EA0 0010EF80  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80111EA4:
/* 80111EA4 0010EF84  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80111EA8 0010EF88  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80111EAC 0010EF8C  38 63 A6 88 */	addi r3, r3, "@stringBase0"@l
/* 80111EB0 0010EF90  C0 42 9E 98 */	lfs f2, "@1029"@sda21(r2)
/* 80111EB4 0010EF94  38 A0 00 00 */	li r5, 0x0
/* 80111EB8 0010EF98  38 C0 00 00 */	li r6, 0x0
/* 80111EBC 0010EF9C  38 63 03 F8 */	addi r3, r3, 0x3f8
/* 80111EC0 0010EFA0  38 E0 00 00 */	li r7, 0x0
/* 80111EC4 0010EFA4  4B F1 E7 69 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80111EC8 0010EFA8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80111ECC 0010EFAC  C0 22 9E E8 */	lfs f1, "@2191"@sda21(r2)
/* 80111ED0 0010EFB0  38 83 A6 88 */	addi r4, r3, "@stringBase0"@l
/* 80111ED4 0010EFB4  7F E3 FB 78 */	mr r3, r31
/* 80111ED8 0010EFB8  38 84 04 17 */	addi r4, r4, 0x417
/* 80111EDC 0010EFBC  4B F1 EC 69 */	bl xIniGetFloat__FP8xIniFilePcf
/* 80111EE0 0010EFC0  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80111EE4 0010EFC4  FC 40 08 18 */	frsp f2, f1
/* 80111EE8 0010EFC8  38 63 37 88 */	addi r3, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80111EEC 0010EFCC  38 83 00 38 */	addi r4, r3, 0x38
/* 80111EF0 0010EFD0  D0 23 00 38 */	stfs f1, 0x38(r3)
/* 80111EF4 0010EFD4  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80111EF8 0010EFD8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111EFC 0010EFDC  40 80 00 08 */	bge .L_80111F04
/* 80111F00 0010EFE0  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80111F04:
/* 80111F04 0010EFE4  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 80111F08 0010EFE8  C0 02 9E 88 */	lfs f0, "@961"@sda21(r2)
/* 80111F0C 0010EFEC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111F10 0010EFF0  40 81 00 08 */	ble .L_80111F18
/* 80111F14 0010EFF4  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80111F18:
/* 80111F18 0010EFF8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80111F1C 0010EFFC  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80111F20 0010F000  38 63 A6 88 */	addi r3, r3, "@stringBase0"@l
/* 80111F24 0010F004  C0 42 9E 88 */	lfs f2, "@961"@sda21(r2)
/* 80111F28 0010F008  38 A0 00 00 */	li r5, 0x0
/* 80111F2C 0010F00C  38 C0 00 00 */	li r6, 0x0
/* 80111F30 0010F010  38 63 04 38 */	addi r3, r3, 0x438
/* 80111F34 0010F014  38 E0 00 00 */	li r7, 0x0
/* 80111F38 0010F018  4B F1 E6 F5 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80111F3C 0010F01C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80111F40 0010F020  C0 22 9E 8C */	lfs f1, "@969"@sda21(r2)
/* 80111F44 0010F024  38 83 A6 88 */	addi r4, r3, "@stringBase0"@l
/* 80111F48 0010F028  7F E3 FB 78 */	mr r3, r31
/* 80111F4C 0010F02C  38 84 04 5B */	addi r4, r4, 0x45b
/* 80111F50 0010F030  4B F1 EB F5 */	bl xIniGetFloat__FP8xIniFilePcf
/* 80111F54 0010F034  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80111F58 0010F038  FC 40 08 18 */	frsp f2, f1
/* 80111F5C 0010F03C  38 63 37 88 */	addi r3, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80111F60 0010F040  38 83 00 3C */	addi r4, r3, 0x3c
/* 80111F64 0010F044  D0 23 00 3C */	stfs f1, 0x3c(r3)
/* 80111F68 0010F048  C0 02 9E E0 */	lfs f0, "@2189"@sda21(r2)
/* 80111F6C 0010F04C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111F70 0010F050  40 80 00 08 */	bge .L_80111F78
/* 80111F74 0010F054  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80111F78:
/* 80111F78 0010F058  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 80111F7C 0010F05C  C0 02 9E EC */	lfs f0, "@2192"@sda21(r2)
/* 80111F80 0010F060  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111F84 0010F064  40 81 00 08 */	ble .L_80111F8C
/* 80111F88 0010F068  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80111F8C:
/* 80111F8C 0010F06C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80111F90 0010F070  C0 22 9E E0 */	lfs f1, "@2189"@sda21(r2)
/* 80111F94 0010F074  38 63 A6 88 */	addi r3, r3, "@stringBase0"@l
/* 80111F98 0010F078  C0 42 9E EC */	lfs f2, "@2192"@sda21(r2)
/* 80111F9C 0010F07C  38 A0 00 00 */	li r5, 0x0
/* 80111FA0 0010F080  38 C0 00 00 */	li r6, 0x0
/* 80111FA4 0010F084  38 63 04 75 */	addi r3, r3, 0x475
/* 80111FA8 0010F088  38 E0 00 00 */	li r7, 0x0
/* 80111FAC 0010F08C  4B F1 E6 81 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80111FB0 0010F090  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80111FB4 0010F094  C0 22 9E 8C */	lfs f1, "@969"@sda21(r2)
/* 80111FB8 0010F098  38 83 A6 88 */	addi r4, r3, "@stringBase0"@l
/* 80111FBC 0010F09C  7F E3 FB 78 */	mr r3, r31
/* 80111FC0 0010F0A0  38 84 04 8E */	addi r4, r4, 0x48e
/* 80111FC4 0010F0A4  4B F1 EB 81 */	bl xIniGetFloat__FP8xIniFilePcf
/* 80111FC8 0010F0A8  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80111FCC 0010F0AC  FC 40 08 18 */	frsp f2, f1
/* 80111FD0 0010F0B0  38 63 37 88 */	addi r3, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80111FD4 0010F0B4  38 83 00 40 */	addi r4, r3, 0x40
/* 80111FD8 0010F0B8  D0 23 00 40 */	stfs f1, 0x40(r3)
/* 80111FDC 0010F0BC  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80111FE0 0010F0C0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80111FE4 0010F0C4  40 80 00 08 */	bge .L_80111FEC
/* 80111FE8 0010F0C8  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80111FEC:
/* 80111FEC 0010F0CC  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 80111FF0 0010F0D0  C0 02 9E EC */	lfs f0, "@2192"@sda21(r2)
/* 80111FF4 0010F0D4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80111FF8 0010F0D8  40 81 00 08 */	ble .L_80112000
/* 80111FFC 0010F0DC  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80112000:
/* 80112000 0010F0E0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80112004 0010F0E4  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80112008 0010F0E8  38 63 A6 88 */	addi r3, r3, "@stringBase0"@l
/* 8011200C 0010F0EC  C0 42 9E EC */	lfs f2, "@2192"@sda21(r2)
/* 80112010 0010F0F0  38 A0 00 00 */	li r5, 0x0
/* 80112014 0010F0F4  38 C0 00 00 */	li r6, 0x0
/* 80112018 0010F0F8  38 63 04 B1 */	addi r3, r3, 0x4b1
/* 8011201C 0010F0FC  38 E0 00 00 */	li r7, 0x0
/* 80112020 0010F100  4B F1 E6 0D */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80112024 0010F104  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80112028 0010F108  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 8011202C 0010F10C  38 83 A6 88 */	addi r4, r3, "@stringBase0"@l
/* 80112030 0010F110  7F E3 FB 78 */	mr r3, r31
/* 80112034 0010F114  38 84 04 D3 */	addi r4, r4, 0x4d3
/* 80112038 0010F118  4B F1 EB 0D */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011203C 0010F11C  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80112040 0010F120  FC 40 08 18 */	frsp f2, f1
/* 80112044 0010F124  38 63 37 88 */	addi r3, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80112048 0010F128  38 83 00 44 */	addi r4, r3, 0x44
/* 8011204C 0010F12C  D0 23 00 44 */	stfs f1, 0x44(r3)
/* 80112050 0010F130  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80112054 0010F134  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80112058 0010F138  40 80 00 08 */	bge .L_80112060
/* 8011205C 0010F13C  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80112060:
/* 80112060 0010F140  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 80112064 0010F144  C0 02 9E 88 */	lfs f0, "@961"@sda21(r2)
/* 80112068 0010F148  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011206C 0010F14C  40 81 00 08 */	ble .L_80112074
/* 80112070 0010F150  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80112074:
/* 80112074 0010F154  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80112078 0010F158  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 8011207C 0010F15C  38 63 A6 88 */	addi r3, r3, "@stringBase0"@l
/* 80112080 0010F160  C0 42 9E 88 */	lfs f2, "@961"@sda21(r2)
/* 80112084 0010F164  38 A0 00 00 */	li r5, 0x0
/* 80112088 0010F168  38 C0 00 00 */	li r6, 0x0
/* 8011208C 0010F16C  38 63 04 F1 */	addi r3, r3, 0x4f1
/* 80112090 0010F170  38 E0 00 00 */	li r7, 0x0
/* 80112094 0010F174  4B F1 E5 99 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80112098 0010F178  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8011209C 0010F17C  C0 22 9E F0 */	lfs f1, "@2193"@sda21(r2)
/* 801120A0 0010F180  38 83 A6 88 */	addi r4, r3, "@stringBase0"@l
/* 801120A4 0010F184  7F E3 FB 78 */	mr r3, r31
/* 801120A8 0010F188  38 84 05 12 */	addi r4, r4, 0x512
/* 801120AC 0010F18C  4B F1 EA 99 */	bl xIniGetFloat__FP8xIniFilePcf
/* 801120B0 0010F190  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801120B4 0010F194  FC 40 08 18 */	frsp f2, f1
/* 801120B8 0010F198  38 63 37 88 */	addi r3, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801120BC 0010F19C  38 83 00 48 */	addi r4, r3, 0x48
/* 801120C0 0010F1A0  D0 23 00 48 */	stfs f1, 0x48(r3)
/* 801120C4 0010F1A4  C0 02 9E F4 */	lfs f0, "@2194"@sda21(r2)
/* 801120C8 0010F1A8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801120CC 0010F1AC  40 80 00 08 */	bge .L_801120D4
/* 801120D0 0010F1B0  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_801120D4:
/* 801120D4 0010F1B4  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 801120D8 0010F1B8  C0 02 9E 88 */	lfs f0, "@961"@sda21(r2)
/* 801120DC 0010F1BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801120E0 0010F1C0  40 81 00 08 */	ble .L_801120E8
/* 801120E4 0010F1C4  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_801120E8:
/* 801120E8 0010F1C8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801120EC 0010F1CC  C0 22 9E F4 */	lfs f1, "@2194"@sda21(r2)
/* 801120F0 0010F1D0  38 63 A6 88 */	addi r3, r3, "@stringBase0"@l
/* 801120F4 0010F1D4  C0 42 9E 88 */	lfs f2, "@961"@sda21(r2)
/* 801120F8 0010F1D8  38 A0 00 00 */	li r5, 0x0
/* 801120FC 0010F1DC  38 C0 00 00 */	li r6, 0x0
/* 80112100 0010F1E0  38 63 05 30 */	addi r3, r3, 0x530
/* 80112104 0010F1E4  38 E0 00 00 */	li r7, 0x0
/* 80112108 0010F1E8  4B F1 E5 25 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8011210C 0010F1EC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80112110 0010F1F0  C0 22 9E CC */	lfs f1, "@2184"@sda21(r2)
/* 80112114 0010F1F4  38 83 A6 88 */	addi r4, r3, "@stringBase0"@l
/* 80112118 0010F1F8  7F E3 FB 78 */	mr r3, r31
/* 8011211C 0010F1FC  38 84 05 51 */	addi r4, r4, 0x551
/* 80112120 0010F200  4B F1 EA 25 */	bl xIniGetFloat__FP8xIniFilePcf
/* 80112124 0010F204  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80112128 0010F208  FC 40 08 18 */	frsp f2, f1
/* 8011212C 0010F20C  38 63 37 88 */	addi r3, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80112130 0010F210  38 83 00 4C */	addi r4, r3, 0x4c
/* 80112134 0010F214  D0 23 00 4C */	stfs f1, 0x4c(r3)
/* 80112138 0010F218  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 8011213C 0010F21C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80112140 0010F220  40 80 00 08 */	bge .L_80112148
/* 80112144 0010F224  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80112148:
/* 80112148 0010F228  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 8011214C 0010F22C  C0 02 9E F8 */	lfs f0, "@2195"@sda21(r2)
/* 80112150 0010F230  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80112154 0010F234  40 81 00 08 */	ble .L_8011215C
/* 80112158 0010F238  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_8011215C:
/* 8011215C 0010F23C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80112160 0010F240  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80112164 0010F244  38 63 A6 88 */	addi r3, r3, "@stringBase0"@l
/* 80112168 0010F248  C0 42 9E F8 */	lfs f2, "@2195"@sda21(r2)
/* 8011216C 0010F24C  38 A0 00 00 */	li r5, 0x0
/* 80112170 0010F250  38 C0 00 00 */	li r6, 0x0
/* 80112174 0010F254  38 63 05 6E */	addi r3, r3, 0x56e
/* 80112178 0010F258  38 E0 00 00 */	li r7, 0x0
/* 8011217C 0010F25C  4B F1 E4 B1 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80112180 0010F260  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80112184 0010F264  C0 22 9E FC */	lfs f1, "@2196"@sda21(r2)
/* 80112188 0010F268  38 83 A6 88 */	addi r4, r3, "@stringBase0"@l
/* 8011218C 0010F26C  7F E3 FB 78 */	mr r3, r31
/* 80112190 0010F270  38 84 05 8A */	addi r4, r4, 0x58a
/* 80112194 0010F274  4B F1 E9 B1 */	bl xIniGetFloat__FP8xIniFilePcf
/* 80112198 0010F278  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 8011219C 0010F27C  FC 40 08 18 */	frsp f2, f1
/* 801121A0 0010F280  38 63 37 88 */	addi r3, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801121A4 0010F284  38 83 00 50 */	addi r4, r3, 0x50
/* 801121A8 0010F288  D0 23 00 50 */	stfs f1, 0x50(r3)
/* 801121AC 0010F28C  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 801121B0 0010F290  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801121B4 0010F294  40 80 00 08 */	bge .L_801121BC
/* 801121B8 0010F298  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_801121BC:
/* 801121BC 0010F29C  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 801121C0 0010F2A0  C0 02 9E B8 */	lfs f0, "@1830"@sda21(r2)
/* 801121C4 0010F2A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801121C8 0010F2A8  40 81 00 08 */	ble .L_801121D0
/* 801121CC 0010F2AC  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_801121D0:
/* 801121D0 0010F2B0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801121D4 0010F2B4  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 801121D8 0010F2B8  38 63 A6 88 */	addi r3, r3, "@stringBase0"@l
/* 801121DC 0010F2BC  C0 42 9E B8 */	lfs f2, "@1830"@sda21(r2)
/* 801121E0 0010F2C0  38 A0 00 00 */	li r5, 0x0
/* 801121E4 0010F2C4  38 C0 00 00 */	li r6, 0x0
/* 801121E8 0010F2C8  38 63 05 A6 */	addi r3, r3, 0x5a6
/* 801121EC 0010F2CC  38 E0 00 00 */	li r7, 0x0
/* 801121F0 0010F2D0  4B F1 E4 3D */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 801121F4 0010F2D4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801121F8 0010F2D8  C0 22 9F 00 */	lfs f1, "@2197"@sda21(r2)
/* 801121FC 0010F2DC  38 83 A6 88 */	addi r4, r3, "@stringBase0"@l
/* 80112200 0010F2E0  7F E3 FB 78 */	mr r3, r31
/* 80112204 0010F2E4  38 84 05 C1 */	addi r4, r4, 0x5c1
/* 80112208 0010F2E8  4B F1 E9 3D */	bl xIniGetFloat__FP8xIniFilePcf
/* 8011220C 0010F2EC  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80112210 0010F2F0  FC 40 08 18 */	frsp f2, f1
/* 80112214 0010F2F4  38 63 37 88 */	addi r3, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80112218 0010F2F8  38 83 00 54 */	addi r4, r3, 0x54
/* 8011221C 0010F2FC  D0 23 00 54 */	stfs f1, 0x54(r3)
/* 80112220 0010F300  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80112224 0010F304  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80112228 0010F308  40 80 00 08 */	bge .L_80112230
/* 8011222C 0010F30C  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80112230:
/* 80112230 0010F310  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 80112234 0010F314  C0 02 9E 88 */	lfs f0, "@961"@sda21(r2)
/* 80112238 0010F318  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011223C 0010F31C  40 81 00 08 */	ble .L_80112244
/* 80112240 0010F320  D0 04 00 00 */	stfs f0, 0x0(r4)
.L_80112244:
/* 80112244 0010F324  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80112248 0010F328  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 8011224C 0010F32C  38 63 A6 88 */	addi r3, r3, "@stringBase0"@l
/* 80112250 0010F330  C0 42 9E 88 */	lfs f2, "@961"@sda21(r2)
/* 80112254 0010F334  38 A0 00 00 */	li r5, 0x0
/* 80112258 0010F338  38 C0 00 00 */	li r6, 0x0
/* 8011225C 0010F33C  38 63 05 DC */	addi r3, r3, 0x5dc
/* 80112260 0010F340  38 E0 00 00 */	li r7, 0x0
/* 80112264 0010F344  4B F1 E3 C9 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80112268 0010F348  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011226C 0010F34C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80112270 0010F350  7C 08 03 A6 */	mtlr r0
/* 80112274 0010F354  38 21 00 10 */	addi r1, r1, 0x10
/* 80112278 0010F358  4E 80 00 20 */	blr
.endfn load_settings__12bungee_stateFR8xIniFile

# bungee_state::init()
.fn init__12bungee_stateFv, global
/* 8011227C 0010F35C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80112280 0010F360  7C 08 02 A6 */	mflr r0
/* 80112284 0010F364  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80112288 0010F368  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011228C 0010F36C  38 83 7A 68 */	addi r4, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80112290 0010F370  80 04 00 00 */	lwz r0, 0x0(r4)
/* 80112294 0010F374  54 00 07 FE */	clrlwi r0, r0, 31
/* 80112298 0010F378  2C 00 00 01 */	cmpwi r0, 0x1
/* 8011229C 0010F37C  40 82 00 84 */	bne .L_80112320
/* 801122A0 0010F380  38 00 00 00 */	li r0, 0x0
/* 801122A4 0010F384  38 60 00 03 */	li r3, 0x3
/* 801122A8 0010F388  90 64 00 00 */	stw r3, 0x0(r4)
/* 801122AC 0010F38C  90 04 00 04 */	stw r0, 0x4(r4)
/* 801122B0 0010F390  90 04 00 3C */	stw r0, 0x3c(r4)
/* 801122B4 0010F394  88 0D 94 F6 */	lbz r0, init$2204@sda21(r13)
/* 801122B8 0010F398  7C 00 07 75 */	extsb. r0, r0
/* 801122BC 0010F39C  40 82 00 18 */	bne .L_801122D4
/* 801122C0 0010F3A0  3C 60 80 31 */	lis r3, attaching_state$2203@ha
/* 801122C4 0010F3A4  38 63 37 E0 */	addi r3, r3, attaching_state$2203@l
/* 801122C8 0010F3A8  48 00 00 BD */	bl "__ct__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@20attaching_state_typeFv"
/* 801122CC 0010F3AC  38 00 00 01 */	li r0, 0x1
/* 801122D0 0010F3B0  98 0D 94 F6 */	stb r0, init$2204@sda21(r13)
.L_801122D4:
/* 801122D4 0010F3B4  3C 80 80 31 */	lis r4, attaching_state$2203@ha
/* 801122D8 0010F3B8  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801122DC 0010F3BC  38 04 37 E0 */	addi r0, r4, attaching_state$2203@l
/* 801122E0 0010F3C0  38 63 7A 68 */	addi r3, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801122E4 0010F3C4  90 03 00 08 */	stw r0, 0x8(r3)
/* 801122E8 0010F3C8  88 0D 94 F7 */	lbz r0, init$2207@sda21(r13)
/* 801122EC 0010F3CC  7C 00 07 75 */	extsb. r0, r0
/* 801122F0 0010F3D0  40 82 00 18 */	bne .L_80112308
/* 801122F4 0010F3D4  3C 60 80 31 */	lis r3, hanging_state$2206@ha
/* 801122F8 0010F3D8  38 63 38 2C */	addi r3, r3, hanging_state$2206@l
/* 801122FC 0010F3DC  48 00 00 35 */	bl "__ct__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv"
/* 80112300 0010F3E0  38 00 00 01 */	li r0, 0x1
/* 80112304 0010F3E4  98 0D 94 F7 */	stb r0, init$2207@sda21(r13)
.L_80112308:
/* 80112308 0010F3E8  3C 80 80 31 */	lis r4, hanging_state$2206@ha
/* 8011230C 0010F3EC  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80112310 0010F3F0  38 04 38 2C */	addi r0, r4, hanging_state$2206@l
/* 80112314 0010F3F4  38 63 7A 68 */	addi r3, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80112318 0010F3F8  90 03 00 0C */	stw r0, 0xc(r3)
/* 8011231C 0010F3FC  4B FF F3 BD */	bl "init_cache__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"
.L_80112320:
/* 80112320 0010F400  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80112324 0010F404  7C 08 03 A6 */	mtlr r0
/* 80112328 0010F408  38 21 00 10 */	addi r1, r1, 0x10
/* 8011232C 0010F40C  4E 80 00 20 */	blr
.endfn init__12bungee_stateFv

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::hanging_state_type()
.fn "__ct__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv", local
/* 80112330 0010F410  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80112334 0010F414  7C 08 02 A6 */	mflr r0
/* 80112338 0010F418  38 80 00 01 */	li r4, 0x1
/* 8011233C 0010F41C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80112340 0010F420  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80112344 0010F424  7C 7F 1B 78 */	mr r31, r3
/* 80112348 0010F428  48 00 00 29 */	bl "__ct__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10state_typeFQ312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10state_enum"
/* 8011234C 0010F42C  3C 80 80 29 */	lis r4, "__vt__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type"@ha
/* 80112350 0010F430  7F E3 FB 78 */	mr r3, r31
/* 80112354 0010F434  38 04 7C 40 */	addi r0, r4, "__vt__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type"@l
/* 80112358 0010F438  90 1F 00 04 */	stw r0, 0x4(r31)
/* 8011235C 0010F43C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80112360 0010F440  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80112364 0010F444  7C 08 03 A6 */	mtlr r0
/* 80112368 0010F448  38 21 00 10 */	addi r1, r1, 0x10
/* 8011236C 0010F44C  4E 80 00 20 */	blr
.endfn "__ct__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::state_type::state_type(bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::state_enum)
.fn "__ct__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10state_typeFQ312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10state_enum", local
/* 80112370 0010F450  3C A0 80 29 */	lis r5, "__vt__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10state_type"@ha
/* 80112374 0010F454  38 05 7C 28 */	addi r0, r5, "__vt__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10state_type"@l
/* 80112378 0010F458  90 03 00 04 */	stw r0, 0x4(r3)
/* 8011237C 0010F45C  90 83 00 00 */	stw r4, 0x0(r3)
/* 80112380 0010F460  4E 80 00 20 */	blr
.endfn "__ct__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10state_typeFQ312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10state_enum"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::attaching_state_type::attaching_state_type()
.fn "__ct__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@20attaching_state_typeFv", local
/* 80112384 0010F464  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80112388 0010F468  7C 08 02 A6 */	mflr r0
/* 8011238C 0010F46C  38 80 00 00 */	li r4, 0x0
/* 80112390 0010F470  90 01 00 14 */	stw r0, 0x14(r1)
/* 80112394 0010F474  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80112398 0010F478  7C 7F 1B 78 */	mr r31, r3
/* 8011239C 0010F47C  4B FF FF D5 */	bl "__ct__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10state_typeFQ312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10state_enum"
/* 801123A0 0010F480  3C 80 80 29 */	lis r4, "__vt__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@20attaching_state_type"@ha
/* 801123A4 0010F484  7F E3 FB 78 */	mr r3, r31
/* 801123A8 0010F488  38 04 7C 10 */	addi r0, r4, "__vt__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@20attaching_state_type"@l
/* 801123AC 0010F48C  90 1F 00 04 */	stw r0, 0x4(r31)
/* 801123B0 0010F490  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801123B4 0010F494  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801123B8 0010F498  7C 08 03 A6 */	mtlr r0
/* 801123BC 0010F49C  38 21 00 10 */	addi r1, r1, 0x10
/* 801123C0 0010F4A0  4E 80 00 20 */	blr
.endfn "__ct__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@20attaching_state_typeFv"

# bungee_state::destroy()
.fn destroy__12bungee_stateFv, global
/* 801123C4 0010F4A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801123C8 0010F4A8  7C 08 02 A6 */	mflr r0
/* 801123CC 0010F4AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801123D0 0010F4B0  48 00 02 A1 */	bl stop__12bungee_stateFv
/* 801123D4 0010F4B4  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 801123D8 0010F4B8  4B FB D1 75 */	bl iCameraSetBlurriness__Ff
/* 801123DC 0010F4BC  38 60 00 04 */	li r3, 0x4
/* 801123E0 0010F4C0  4B F3 FD 31 */	bl zCameraEnableTracking__F17camera_owner_enum
/* 801123E4 0010F4C4  38 60 00 01 */	li r3, 0x1
/* 801123E8 0010F4C8  38 80 00 04 */	li r4, 0x4
/* 801123EC 0010F4CC  4B EF B1 A5 */	bl xCameraDoCollisions__Fii
/* 801123F0 0010F4D0  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801123F4 0010F4D4  38 00 00 03 */	li r0, 0x3
/* 801123F8 0010F4D8  90 03 7A 68 */	stw r0, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l(r3)
/* 801123FC 0010F4DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80112400 0010F4E0  7C 08 03 A6 */	mtlr r0
/* 80112404 0010F4E4  38 21 00 10 */	addi r1, r1, 0x10
/* 80112408 0010F4E8  4E 80 00 20 */	blr
.endfn destroy__12bungee_stateFv

# bungee_state::reset()
.fn reset__12bungee_stateFv, global
/* 8011240C 0010F4EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80112410 0010F4F0  7C 08 02 A6 */	mflr r0
/* 80112414 0010F4F4  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80112418 0010F4F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011241C 0010F4FC  80 03 7A 68 */	lwz r0, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l(r3)
/* 80112420 0010F500  54 00 07 BE */	clrlwi r0, r0, 30
/* 80112424 0010F504  2C 00 00 03 */	cmpwi r0, 0x3
/* 80112428 0010F508  40 82 00 34 */	bne .L_8011245C
/* 8011242C 0010F50C  48 00 02 45 */	bl stop__12bungee_stateFv
/* 80112430 0010F510  4B FF ED BD */	bl "fade_hook_reset__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"
/* 80112434 0010F514  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80112438 0010F518  4B FB D1 15 */	bl iCameraSetBlurriness__Ff
/* 8011243C 0010F51C  38 60 00 04 */	li r3, 0x4
/* 80112440 0010F520  4B F3 FC D1 */	bl zCameraEnableTracking__F17camera_owner_enum
/* 80112444 0010F524  38 60 00 01 */	li r3, 0x1
/* 80112448 0010F528  38 80 00 04 */	li r4, 0x4
/* 8011244C 0010F52C  4B EF B1 45 */	bl xCameraDoCollisions__Fii
/* 80112450 0010F530  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80112454 0010F534  38 00 00 03 */	li r0, 0x3
/* 80112458 0010F538  90 03 7A 68 */	stw r0, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l(r3)
.L_8011245C:
/* 8011245C 0010F53C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80112460 0010F540  7C 08 03 A6 */	mtlr r0
/* 80112464 0010F544  38 21 00 10 */	addi r1, r1, 0x10
/* 80112468 0010F548  4E 80 00 20 */	blr
.endfn reset__12bungee_stateFv

# bungee_state::active()
.fn active__12bungee_stateFv, global
/* 8011246C 0010F54C  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80112470 0010F550  38 63 7A 68 */	addi r3, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80112474 0010F554  80 63 00 04 */	lwz r3, 0x4(r3)
/* 80112478 0010F558  7C 03 00 D0 */	neg r0, r3
/* 8011247C 0010F55C  7C 00 1B 78 */	or r0, r0, r3
/* 80112480 0010F560  54 03 0F FE */	srwi r3, r0, 31
/* 80112484 0010F564  4E 80 00 20 */	blr
.endfn active__12bungee_stateFv

# bungee_state::landed()
.fn landed__12bungee_stateFv, global
/* 80112488 0010F568  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 8011248C 0010F56C  38 60 00 00 */	li r3, 0x0
/* 80112490 0010F570  38 84 7A 68 */	addi r4, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80112494 0010F574  80 04 00 04 */	lwz r0, 0x4(r4)
/* 80112498 0010F578  28 00 00 00 */	cmplwi r0, 0x0
/* 8011249C 0010F57C  4C 82 00 20 */	bnelr
/* 801124A0 0010F580  C0 24 01 94 */	lfs f1, 0x194(r4)
/* 801124A4 0010F584  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 801124A8 0010F588  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801124AC 0010F58C  4C 40 13 82 */	cror eq, lt, eq
/* 801124B0 0010F590  4C 82 00 20 */	bnelr
/* 801124B4 0010F594  38 60 00 01 */	li r3, 0x1
/* 801124B8 0010F598  4E 80 00 20 */	blr
.endfn landed__12bungee_stateFv

# bungee_state::update(xScene*, float)
.fn update__12bungee_stateFP6xScenef, global
/* 801124BC 0010F59C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801124C0 0010F5A0  7C 08 02 A6 */	mflr r0
/* 801124C4 0010F5A4  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801124C8 0010F5A8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801124CC 0010F5AC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801124D0 0010F5B0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801124D4 0010F5B4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801124D8 0010F5B8  7C 7D 1B 78 */	mr r29, r3
/* 801124DC 0010F5BC  80 04 7A 68 */	lwz r0, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l(r4)
/* 801124E0 0010F5C0  D0 21 00 08 */	stfs f1, 0x8(r1)
/* 801124E4 0010F5C4  54 00 07 BE */	clrlwi r0, r0, 30
/* 801124E8 0010F5C8  2C 00 00 03 */	cmpwi r0, 0x3
/* 801124EC 0010F5CC  41 82 00 0C */	beq .L_801124F8
/* 801124F0 0010F5D0  38 60 00 00 */	li r3, 0x0
/* 801124F4 0010F5D4  48 00 01 08 */	b .L_801125FC
.L_801124F8:
/* 801124F8 0010F5D8  FC 20 08 18 */	frsp f1, f1
/* 801124FC 0010F5DC  4B FF EE 35 */	bl "fade_hook_update__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Ff"
/* 80112500 0010F5E0  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80112504 0010F5E4  C0 01 00 08 */	lfs f0, 0x8(r1)
/* 80112508 0010F5E8  38 63 7A 68 */	addi r3, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 8011250C 0010F5EC  C0 43 01 94 */	lfs f2, 0x194(r3)
/* 80112510 0010F5F0  EC 22 00 28 */	fsubs f1, f2, f0
/* 80112514 0010F5F4  D0 23 01 94 */	stfs f1, 0x194(r3)
/* 80112518 0010F5F8  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 8011251C 0010F5FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80112520 0010F600  40 81 00 0C */	ble .L_8011252C
/* 80112524 0010F604  38 60 00 00 */	li r3, 0x0
/* 80112528 0010F608  48 00 00 D4 */	b .L_801125FC
.L_8011252C:
/* 8011252C 0010F60C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80112530 0010F610  40 81 00 10 */	ble .L_80112540
/* 80112534 0010F614  38 60 00 01 */	li r3, 0x1
/* 80112538 0010F618  38 80 00 04 */	li r4, 0x4
/* 8011253C 0010F61C  4B EF B0 55 */	bl xCameraDoCollisions__Fii
.L_80112540:
/* 80112540 0010F620  38 60 20 00 */	li r3, 0x2000
/* 80112544 0010F624  4B F5 3F BD */	bl zEntPlayerControlOn__F13zControlOwner
/* 80112548 0010F628  4B FF EE DD */	bl "start__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"
/* 8011254C 0010F62C  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80112550 0010F630  3B C3 7A 68 */	addi r30, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80112554 0010F634  80 1E 00 04 */	lwz r0, 0x4(r30)
/* 80112558 0010F638  28 00 00 00 */	cmplwi r0, 0x0
/* 8011255C 0010F63C  40 82 00 0C */	bne .L_80112568
/* 80112560 0010F640  38 60 00 00 */	li r3, 0x0
/* 80112564 0010F644  48 00 00 98 */	b .L_801125FC
.L_80112568:
/* 80112568 0010F648  80 7E 00 04 */	lwz r3, 0x4(r30)
/* 8011256C 0010F64C  7F A4 EB 78 */	mr r4, r29
/* 80112570 0010F650  38 A1 00 08 */	addi r5, r1, 0x8
/* 80112574 0010F654  81 83 00 04 */	lwz r12, 0x4(r3)
/* 80112578 0010F658  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8011257C 0010F65C  7D 89 03 A6 */	mtctr r12
/* 80112580 0010F660  4E 80 04 21 */	bctrl
/* 80112584 0010F664  80 9E 00 04 */	lwz r4, 0x4(r30)
/* 80112588 0010F668  7C 7F 1B 78 */	mr r31, r3
/* 8011258C 0010F66C  80 04 00 00 */	lwz r0, 0x0(r4)
/* 80112590 0010F670  7C 1F 00 00 */	cmpw r31, r0
/* 80112594 0010F674  41 82 00 4C */	beq .L_801125E0
/* 80112598 0010F678  2C 1F FF FF */	cmpwi r31, -0x1
/* 8011259C 0010F67C  40 82 00 0C */	bne .L_801125A8
/* 801125A0 0010F680  48 00 00 D1 */	bl stop__12bungee_stateFv
/* 801125A4 0010F684  48 00 00 3C */	b .L_801125E0
.L_801125A8:
/* 801125A8 0010F688  7C 83 23 78 */	mr r3, r4
/* 801125AC 0010F68C  81 84 00 04 */	lwz r12, 0x4(r4)
/* 801125B0 0010F690  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801125B4 0010F694  7D 89 03 A6 */	mtctr r12
/* 801125B8 0010F698  4E 80 04 21 */	bctrl
/* 801125BC 0010F69C  57 E0 10 3A */	slwi r0, r31, 2
/* 801125C0 0010F6A0  7C 7E 02 14 */	add r3, r30, r0
/* 801125C4 0010F6A4  80 63 00 08 */	lwz r3, 0x8(r3)
/* 801125C8 0010F6A8  90 7E 00 04 */	stw r3, 0x4(r30)
/* 801125CC 0010F6AC  81 83 00 04 */	lwz r12, 0x4(r3)
/* 801125D0 0010F6B0  81 8C 00 08 */	lwz r12, 0x8(r12)
/* 801125D4 0010F6B4  7D 89 03 A6 */	mtctr r12
/* 801125D8 0010F6B8  4E 80 04 21 */	bctrl
/* 801125DC 0010F6BC  4B FF FF 8C */	b .L_80112568
.L_801125E0:
/* 801125E0 0010F6C0  C0 21 00 08 */	lfs f1, 0x8(r1)
/* 801125E4 0010F6C4  7F A3 EB 78 */	mr r3, r29
/* 801125E8 0010F6C8  4B FF F1 E1 */	bl "common_update__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FR6xScenef"
/* 801125EC 0010F6CC  80 7E 00 04 */	lwz r3, 0x4(r30)
/* 801125F0 0010F6D0  7C 03 00 D0 */	neg r0, r3
/* 801125F4 0010F6D4  7C 00 1B 78 */	or r0, r0, r3
/* 801125F8 0010F6D8  54 03 0F FE */	srwi r3, r0, 31
.L_801125FC:
/* 801125FC 0010F6DC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80112600 0010F6E0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80112604 0010F6E4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80112608 0010F6E8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8011260C 0010F6EC  7C 08 03 A6 */	mtlr r0
/* 80112610 0010F6F0  38 21 00 20 */	addi r1, r1, 0x20
/* 80112614 0010F6F4  4E 80 00 20 */	blr
.endfn update__12bungee_stateFP6xScenef

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::state_type::stop()
.fn "stop__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10state_typeFv", local
/* 80112618 0010F6F8  4E 80 00 20 */	blr
.endfn "stop__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10state_typeFv"

# bungee_state::render()
.fn render__12bungee_stateFv, global
/* 8011261C 0010F6FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80112620 0010F700  7C 08 02 A6 */	mflr r0
/* 80112624 0010F704  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80112628 0010F708  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011262C 0010F70C  84 03 7A 68 */	lwzu r0, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l(r3)
/* 80112630 0010F710  54 00 07 7E */	clrlwi r0, r0, 29
/* 80112634 0010F714  2C 00 00 07 */	cmpwi r0, 0x7
/* 80112638 0010F718  41 82 00 0C */	beq .L_80112644
/* 8011263C 0010F71C  38 60 00 00 */	li r3, 0x0
/* 80112640 0010F720  48 00 00 1C */	b .L_8011265C
.L_80112644:
/* 80112644 0010F724  80 63 00 04 */	lwz r3, 0x4(r3)
/* 80112648 0010F728  81 83 00 04 */	lwz r12, 0x4(r3)
/* 8011264C 0010F72C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80112650 0010F730  7D 89 03 A6 */	mtctr r12
/* 80112654 0010F734  4E 80 04 21 */	bctrl
/* 80112658 0010F738  38 60 00 01 */	li r3, 0x1
.L_8011265C:
/* 8011265C 0010F73C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80112660 0010F740  7C 08 03 A6 */	mtlr r0
/* 80112664 0010F744  38 21 00 10 */	addi r1, r1, 0x10
/* 80112668 0010F748  4E 80 00 20 */	blr
.endfn render__12bungee_stateFv

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::state_type::render()
.fn "render__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10state_typeFv", local
/* 8011266C 0010F74C  4E 80 00 20 */	blr
.endfn "render__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10state_typeFv"

# bungee_state::stop()
.fn stop__12bungee_stateFv, global
/* 80112670 0010F750  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80112674 0010F754  7C 08 02 A6 */	mflr r0
/* 80112678 0010F758  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 8011267C 0010F75C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80112680 0010F760  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80112684 0010F764  80 03 7A 68 */	lwz r0, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l(r3)
/* 80112688 0010F768  54 00 07 7E */	clrlwi r0, r0, 29
/* 8011268C 0010F76C  2C 00 00 07 */	cmpwi r0, 0x7
/* 80112690 0010F770  40 82 00 44 */	bne .L_801126D4
/* 80112694 0010F774  4B FF EC 2D */	bl "fade_hook_in__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"
/* 80112698 0010F778  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 8011269C 0010F77C  3B E3 7A 68 */	addi r31, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801126A0 0010F780  80 7F 00 04 */	lwz r3, 0x4(r31)
/* 801126A4 0010F784  28 03 00 00 */	cmplwi r3, 0x0
/* 801126A8 0010F788  41 82 00 14 */	beq .L_801126BC
/* 801126AC 0010F78C  81 83 00 04 */	lwz r12, 0x4(r3)
/* 801126B0 0010F790  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801126B4 0010F794  7D 89 03 A6 */	mtctr r12
/* 801126B8 0010F798  4E 80 04 21 */	bctrl
.L_801126BC:
/* 801126BC 0010F79C  38 00 00 00 */	li r0, 0x0
/* 801126C0 0010F7A0  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801126C4 0010F7A4  90 1F 00 04 */	stw r0, 0x4(r31)
/* 801126C8 0010F7A8  84 03 7A 68 */	lwzu r0, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l(r3)
/* 801126CC 0010F7AC  54 00 07 B8 */	rlwinm r0, r0, 0, 30, 28
/* 801126D0 0010F7B0  90 03 00 00 */	stw r0, 0x0(r3)
.L_801126D4:
/* 801126D4 0010F7B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801126D8 0010F7B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801126DC 0010F7BC  7C 08 03 A6 */	mtlr r0
/* 801126E0 0010F7C0  38 21 00 10 */	addi r1, r1, 0x10
/* 801126E4 0010F7C4  4E 80 00 20 */	blr
.endfn stop__12bungee_stateFv

# bungee_state::insert_animations(xAnimTable&)
.fn insert_animations__12bungee_stateFR10xAnimTable, global
/* 801126E8 0010F7C8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801126EC 0010F7CC  7C 08 02 A6 */	mflr r0
/* 801126F0 0010F7D0  3C A0 80 00 */	lis r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 801126F4 0010F7D4  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801126F8 0010F7D8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801126FC 0010F7DC  38 84 A6 88 */	addi r4, r4, "@stringBase0"@l
/* 80112700 0010F7E0  38 A5 6C FC */	addi r5, r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80112704 0010F7E4  38 00 00 00 */	li r0, 0x0
/* 80112708 0010F7E8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8011270C 0010F7EC  38 84 05 F6 */	addi r4, r4, 0x5f6
/* 80112710 0010F7F0  38 C0 00 00 */	li r6, 0x0
/* 80112714 0010F7F4  38 E0 00 00 */	li r7, 0x0
/* 80112718 0010F7F8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8011271C 0010F7FC  7C 7E 1B 78 */	mr r30, r3
/* 80112720 0010F800  39 00 00 00 */	li r8, 0x0
/* 80112724 0010F804  39 20 00 00 */	li r9, 0x0
/* 80112728 0010F808  90 A1 00 08 */	stw r5, 0x8(r1)
/* 8011272C 0010F80C  38 A0 00 10 */	li r5, 0x10
/* 80112730 0010F810  39 40 00 00 */	li r10, 0x0
/* 80112734 0010F814  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112738 0010F818  90 01 00 10 */	stw r0, 0x10(r1)
/* 8011273C 0010F81C  C0 22 9E 88 */	lfs f1, "@961"@sda21(r2)
/* 80112740 0010F820  C0 42 9E A0 */	lfs f2, "@1783"@sda21(r2)
/* 80112744 0010F824  4B EF 46 15 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80112748 0010F828  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8011274C 0010F82C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80112750 0010F830  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80112754 0010F834  38 00 00 00 */	li r0, 0x0
/* 80112758 0010F838  90 81 00 08 */	stw r4, 0x8(r1)
/* 8011275C 0010F83C  38 83 A6 88 */	addi r4, r3, "@stringBase0"@l
/* 80112760 0010F840  7F C3 F3 78 */	mr r3, r30
/* 80112764 0010F844  38 A0 00 10 */	li r5, 0x10
/* 80112768 0010F848  90 01 00 0C */	stw r0, 0xc(r1)
/* 8011276C 0010F84C  38 84 06 06 */	addi r4, r4, 0x606
/* 80112770 0010F850  38 C0 00 00 */	li r6, 0x0
/* 80112774 0010F854  38 E0 00 00 */	li r7, 0x0
/* 80112778 0010F858  90 01 00 10 */	stw r0, 0x10(r1)
/* 8011277C 0010F85C  39 00 00 00 */	li r8, 0x0
/* 80112780 0010F860  39 20 00 00 */	li r9, 0x0
/* 80112784 0010F864  39 40 00 00 */	li r10, 0x0
/* 80112788 0010F868  C0 22 9E 88 */	lfs f1, "@961"@sda21(r2)
/* 8011278C 0010F86C  C0 42 9E A0 */	lfs f2, "@1783"@sda21(r2)
/* 80112790 0010F870  4B EF 45 C9 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80112794 0010F874  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80112798 0010F878  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8011279C 0010F87C  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 801127A0 0010F880  38 00 00 00 */	li r0, 0x0
/* 801127A4 0010F884  90 81 00 08 */	stw r4, 0x8(r1)
/* 801127A8 0010F888  38 83 A6 88 */	addi r4, r3, "@stringBase0"@l
/* 801127AC 0010F88C  7F C3 F3 78 */	mr r3, r30
/* 801127B0 0010F890  38 A0 00 00 */	li r5, 0x0
/* 801127B4 0010F894  90 01 00 0C */	stw r0, 0xc(r1)
/* 801127B8 0010F898  38 84 06 13 */	addi r4, r4, 0x613
/* 801127BC 0010F89C  38 C0 00 00 */	li r6, 0x0
/* 801127C0 0010F8A0  38 E0 00 00 */	li r7, 0x0
/* 801127C4 0010F8A4  90 01 00 10 */	stw r0, 0x10(r1)
/* 801127C8 0010F8A8  39 00 00 00 */	li r8, 0x0
/* 801127CC 0010F8AC  39 20 00 00 */	li r9, 0x0
/* 801127D0 0010F8B0  39 40 00 00 */	li r10, 0x0
/* 801127D4 0010F8B4  C0 22 9E 88 */	lfs f1, "@961"@sda21(r2)
/* 801127D8 0010F8B8  C0 42 9E A0 */	lfs f2, "@1783"@sda21(r2)
/* 801127DC 0010F8BC  4B EF 45 7D */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 801127E0 0010F8C0  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 801127E4 0010F8C4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801127E8 0010F8C8  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 801127EC 0010F8CC  38 00 00 00 */	li r0, 0x0
/* 801127F0 0010F8D0  90 81 00 08 */	stw r4, 0x8(r1)
/* 801127F4 0010F8D4  38 83 A6 88 */	addi r4, r3, "@stringBase0"@l
/* 801127F8 0010F8D8  7F C3 F3 78 */	mr r3, r30
/* 801127FC 0010F8DC  38 A0 00 20 */	li r5, 0x20
/* 80112800 0010F8E0  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112804 0010F8E4  38 84 06 21 */	addi r4, r4, 0x621
/* 80112808 0010F8E8  38 C0 00 00 */	li r6, 0x0
/* 8011280C 0010F8EC  38 E0 00 00 */	li r7, 0x0
/* 80112810 0010F8F0  90 01 00 10 */	stw r0, 0x10(r1)
/* 80112814 0010F8F4  39 00 00 00 */	li r8, 0x0
/* 80112818 0010F8F8  39 20 00 00 */	li r9, 0x0
/* 8011281C 0010F8FC  39 40 00 00 */	li r10, 0x0
/* 80112820 0010F900  C0 22 9E 88 */	lfs f1, "@961"@sda21(r2)
/* 80112824 0010F904  C0 42 9E A0 */	lfs f2, "@1783"@sda21(r2)
/* 80112828 0010F908  4B EF 45 31 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8011282C 0010F90C  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80112830 0010F910  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80112834 0010F914  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80112838 0010F918  38 00 00 00 */	li r0, 0x0
/* 8011283C 0010F91C  90 81 00 08 */	stw r4, 0x8(r1)
/* 80112840 0010F920  38 83 A6 88 */	addi r4, r3, "@stringBase0"@l
/* 80112844 0010F924  7F C3 F3 78 */	mr r3, r30
/* 80112848 0010F928  38 A0 00 20 */	li r5, 0x20
/* 8011284C 0010F92C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112850 0010F930  38 84 06 2E */	addi r4, r4, 0x62e
/* 80112854 0010F934  38 C0 00 00 */	li r6, 0x0
/* 80112858 0010F938  38 E0 00 00 */	li r7, 0x0
/* 8011285C 0010F93C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80112860 0010F940  39 00 00 00 */	li r8, 0x0
/* 80112864 0010F944  39 20 00 00 */	li r9, 0x0
/* 80112868 0010F948  39 40 00 00 */	li r10, 0x0
/* 8011286C 0010F94C  C0 22 9E 88 */	lfs f1, "@961"@sda21(r2)
/* 80112870 0010F950  C0 42 9E A0 */	lfs f2, "@1783"@sda21(r2)
/* 80112874 0010F954  4B EF 44 E5 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80112878 0010F958  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8011287C 0010F95C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80112880 0010F960  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80112884 0010F964  38 00 00 00 */	li r0, 0x0
/* 80112888 0010F968  90 81 00 08 */	stw r4, 0x8(r1)
/* 8011288C 0010F96C  38 83 A6 88 */	addi r4, r3, "@stringBase0"@l
/* 80112890 0010F970  7F C3 F3 78 */	mr r3, r30
/* 80112894 0010F974  38 A0 00 10 */	li r5, 0x10
/* 80112898 0010F978  90 01 00 0C */	stw r0, 0xc(r1)
/* 8011289C 0010F97C  38 84 06 3D */	addi r4, r4, 0x63d
/* 801128A0 0010F980  38 C0 00 00 */	li r6, 0x0
/* 801128A4 0010F984  38 E0 00 00 */	li r7, 0x0
/* 801128A8 0010F988  90 01 00 10 */	stw r0, 0x10(r1)
/* 801128AC 0010F98C  39 00 00 00 */	li r8, 0x0
/* 801128B0 0010F990  39 20 00 00 */	li r9, 0x0
/* 801128B4 0010F994  39 40 00 00 */	li r10, 0x0
/* 801128B8 0010F998  C0 22 9E 88 */	lfs f1, "@961"@sda21(r2)
/* 801128BC 0010F99C  C0 42 9E A0 */	lfs f2, "@1783"@sda21(r2)
/* 801128C0 0010F9A0  4B EF 44 99 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 801128C4 0010F9A4  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 801128C8 0010F9A8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801128CC 0010F9AC  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 801128D0 0010F9B0  38 00 00 00 */	li r0, 0x0
/* 801128D4 0010F9B4  90 81 00 08 */	stw r4, 0x8(r1)
/* 801128D8 0010F9B8  38 83 A6 88 */	addi r4, r3, "@stringBase0"@l
/* 801128DC 0010F9BC  7F C3 F3 78 */	mr r3, r30
/* 801128E0 0010F9C0  38 A0 00 00 */	li r5, 0x0
/* 801128E4 0010F9C4  90 01 00 0C */	stw r0, 0xc(r1)
/* 801128E8 0010F9C8  38 84 06 4C */	addi r4, r4, 0x64c
/* 801128EC 0010F9CC  38 C0 00 00 */	li r6, 0x0
/* 801128F0 0010F9D0  38 E0 00 00 */	li r7, 0x0
/* 801128F4 0010F9D4  90 01 00 10 */	stw r0, 0x10(r1)
/* 801128F8 0010F9D8  39 00 00 00 */	li r8, 0x0
/* 801128FC 0010F9DC  39 20 00 00 */	li r9, 0x0
/* 80112900 0010F9E0  39 40 00 00 */	li r10, 0x0
/* 80112904 0010F9E4  C0 22 9E 88 */	lfs f1, "@961"@sda21(r2)
/* 80112908 0010F9E8  C0 42 9E A0 */	lfs f2, "@1783"@sda21(r2)
/* 8011290C 0010F9EC  4B EF 44 4D */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80112910 0010F9F0  88 0D 94 FC */	lbz r0, init$2299@sda21(r13)
/* 80112914 0010F9F4  7C 00 07 75 */	extsb. r0, r0
/* 80112918 0010F9F8  40 82 00 1C */	bne .L_80112934
/* 8011291C 0010F9FC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80112920 0010FA00  38 00 00 01 */	li r0, 0x1
/* 80112924 0010FA04  38 63 A6 88 */	addi r3, r3, "@stringBase0"@l
/* 80112928 0010FA08  38 63 06 5B */	addi r3, r3, 0x65b
/* 8011292C 0010FA0C  90 6D 94 F8 */	stw r3, start_from$2298@sda21(r13)
/* 80112930 0010FA10  98 0D 94 FC */	stb r0, init$2299@sda21(r13)
.L_80112934:
/* 80112934 0010FA14  88 0D 95 04 */	lbz r0, init$2302@sda21(r13)
/* 80112938 0010FA18  7C 00 07 75 */	extsb. r0, r0
/* 8011293C 0010FA1C  40 82 00 1C */	bne .L_80112958
/* 80112940 0010FA20  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80112944 0010FA24  38 00 00 01 */	li r0, 0x1
/* 80112948 0010FA28  38 63 A6 88 */	addi r3, r3, "@stringBase0"@l
/* 8011294C 0010FA2C  38 63 06 3D */	addi r3, r3, 0x63d
/* 80112950 0010FA30  90 6D 95 00 */	stw r3, start_to$2301@sda21(r13)
/* 80112954 0010FA34  98 0D 95 04 */	stb r0, init$2302@sda21(r13)
.L_80112958:
/* 80112958 0010FA38  38 00 00 00 */	li r0, 0x0
/* 8011295C 0010FA3C  3C 60 80 11 */	lis r3, "check_anim_start__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FP15xAnimTransitionP11xAnimSinglePv"@ha
/* 80112960 0010FA40  90 01 00 08 */	stw r0, 0x8(r1)
/* 80112964 0010FA44  38 C3 0F 98 */	addi r6, r3, "check_anim_start__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FP15xAnimTransitionP11xAnimSinglePv"@l
/* 80112968 0010FA48  7F C3 F3 78 */	mr r3, r30
/* 8011296C 0010FA4C  38 E0 00 00 */	li r7, 0x0
/* 80112970 0010FA50  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112974 0010FA54  39 00 00 10 */	li r8, 0x10
/* 80112978 0010FA58  39 20 00 00 */	li r9, 0x0
/* 8011297C 0010FA5C  39 40 00 00 */	li r10, 0x0
/* 80112980 0010FA60  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80112984 0010FA64  80 8D 94 F8 */	lwz r4, start_from$2298@sda21(r13)
/* 80112988 0010FA68  FC 40 08 90 */	fmr f2, f1
/* 8011298C 0010FA6C  80 AD 95 00 */	lwz r5, start_to$2301@sda21(r13)
/* 80112990 0010FA70  C0 62 9E 8C */	lfs f3, "@969"@sda21(r2)
/* 80112994 0010FA74  4B EF 4A 2D */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80112998 0010FA78  3C A0 80 29 */	lis r5, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 8011299C 0010FA7C  3C 80 80 31 */	lis r4, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801129A0 0010FA80  38 C5 7A 68 */	addi r6, r5, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801129A4 0010FA84  3C A0 80 27 */	lis r5, "@stringBase0"@ha
/* 801129A8 0010FA88  90 66 00 10 */	stw r3, 0x10(r6)
/* 801129AC 0010FA8C  38 A5 A6 88 */	addi r5, r5, "@stringBase0"@l
/* 801129B0 0010FA90  38 00 00 00 */	li r0, 0x0
/* 801129B4 0010FA94  39 44 37 88 */	addi r10, r4, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801129B8 0010FA98  90 01 00 08 */	stw r0, 0x8(r1)
/* 801129BC 0010FA9C  7F C3 F3 78 */	mr r3, r30
/* 801129C0 0010FAA0  38 85 06 3D */	addi r4, r5, 0x63d
/* 801129C4 0010FAA4  38 A5 06 13 */	addi r5, r5, 0x613
/* 801129C8 0010FAA8  90 01 00 0C */	stw r0, 0xc(r1)
/* 801129CC 0010FAAC  38 C0 00 00 */	li r6, 0x0
/* 801129D0 0010FAB0  38 E0 00 00 */	li r7, 0x0
/* 801129D4 0010FAB4  39 00 00 10 */	li r8, 0x10
/* 801129D8 0010FAB8  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 801129DC 0010FABC  39 20 00 00 */	li r9, 0x0
/* 801129E0 0010FAC0  C0 6A 00 3C */	lfs f3, 0x3c(r10)
/* 801129E4 0010FAC4  39 40 00 00 */	li r10, 0x0
/* 801129E8 0010FAC8  FC 40 08 90 */	fmr f2, f1
/* 801129EC 0010FACC  4B EF 49 D5 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 801129F0 0010FAD0  3C A0 80 29 */	lis r5, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801129F4 0010FAD4  3C 80 80 31 */	lis r4, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801129F8 0010FAD8  38 C5 7A 68 */	addi r6, r5, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801129FC 0010FADC  3C A0 80 27 */	lis r5, "@stringBase0"@ha
/* 80112A00 0010FAE0  90 66 00 20 */	stw r3, 0x20(r6)
/* 80112A04 0010FAE4  38 A5 A6 88 */	addi r5, r5, "@stringBase0"@l
/* 80112A08 0010FAE8  38 00 00 00 */	li r0, 0x0
/* 80112A0C 0010FAEC  39 44 37 88 */	addi r10, r4, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80112A10 0010FAF0  90 01 00 08 */	stw r0, 0x8(r1)
/* 80112A14 0010FAF4  7F C3 F3 78 */	mr r3, r30
/* 80112A18 0010FAF8  38 85 06 13 */	addi r4, r5, 0x613
/* 80112A1C 0010FAFC  38 A5 06 3D */	addi r5, r5, 0x63d
/* 80112A20 0010FB00  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112A24 0010FB04  38 C0 00 00 */	li r6, 0x0
/* 80112A28 0010FB08  38 E0 00 00 */	li r7, 0x0
/* 80112A2C 0010FB0C  39 00 00 10 */	li r8, 0x10
/* 80112A30 0010FB10  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80112A34 0010FB14  39 20 00 00 */	li r9, 0x0
/* 80112A38 0010FB18  C0 6A 00 40 */	lfs f3, 0x40(r10)
/* 80112A3C 0010FB1C  39 40 00 00 */	li r10, 0x0
/* 80112A40 0010FB20  FC 40 08 90 */	fmr f2, f1
/* 80112A44 0010FB24  4B EF 49 7D */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80112A48 0010FB28  3C A0 80 29 */	lis r5, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80112A4C 0010FB2C  3C 80 80 31 */	lis r4, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80112A50 0010FB30  38 C5 7A 68 */	addi r6, r5, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80112A54 0010FB34  3C A0 80 27 */	lis r5, "@stringBase0"@ha
/* 80112A58 0010FB38  90 66 00 24 */	stw r3, 0x24(r6)
/* 80112A5C 0010FB3C  38 A5 A6 88 */	addi r5, r5, "@stringBase0"@l
/* 80112A60 0010FB40  38 00 00 00 */	li r0, 0x0
/* 80112A64 0010FB44  3B E4 37 88 */	addi r31, r4, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80112A68 0010FB48  90 01 00 08 */	stw r0, 0x8(r1)
/* 80112A6C 0010FB4C  7F C3 F3 78 */	mr r3, r30
/* 80112A70 0010FB50  38 85 06 3D */	addi r4, r5, 0x63d
/* 80112A74 0010FB54  38 A5 06 06 */	addi r5, r5, 0x606
/* 80112A78 0010FB58  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112A7C 0010FB5C  38 C0 00 00 */	li r6, 0x0
/* 80112A80 0010FB60  38 E0 00 00 */	li r7, 0x0
/* 80112A84 0010FB64  39 00 00 10 */	li r8, 0x10
/* 80112A88 0010FB68  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80112A8C 0010FB6C  39 20 00 00 */	li r9, 0x0
/* 80112A90 0010FB70  C0 7F 00 0C */	lfs f3, 0xc(r31)
/* 80112A94 0010FB74  39 40 00 00 */	li r10, 0x0
/* 80112A98 0010FB78  FC 40 08 90 */	fmr f2, f1
/* 80112A9C 0010FB7C  4B EF 49 25 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80112AA0 0010FB80  3C A0 80 29 */	lis r5, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80112AA4 0010FB84  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80112AA8 0010FB88  38 A5 7A 68 */	addi r5, r5, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80112AAC 0010FB8C  38 00 00 00 */	li r0, 0x0
/* 80112AB0 0010FB90  90 65 00 28 */	stw r3, 0x28(r5)
/* 80112AB4 0010FB94  38 A4 A6 88 */	addi r5, r4, "@stringBase0"@l
/* 80112AB8 0010FB98  7F C3 F3 78 */	mr r3, r30
/* 80112ABC 0010FB9C  38 C0 00 00 */	li r6, 0x0
/* 80112AC0 0010FBA0  90 01 00 08 */	stw r0, 0x8(r1)
/* 80112AC4 0010FBA4  38 85 06 06 */	addi r4, r5, 0x606
/* 80112AC8 0010FBA8  38 A5 06 3D */	addi r5, r5, 0x63d
/* 80112ACC 0010FBAC  38 E0 00 00 */	li r7, 0x0
/* 80112AD0 0010FBB0  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112AD4 0010FBB4  39 00 00 10 */	li r8, 0x10
/* 80112AD8 0010FBB8  39 20 00 00 */	li r9, 0x0
/* 80112ADC 0010FBBC  39 40 00 00 */	li r10, 0x0
/* 80112AE0 0010FBC0  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80112AE4 0010FBC4  C0 7F 00 0C */	lfs f3, 0xc(r31)
/* 80112AE8 0010FBC8  FC 40 08 90 */	fmr f2, f1
/* 80112AEC 0010FBCC  4B EF 48 D5 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80112AF0 0010FBD0  3C A0 80 29 */	lis r5, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80112AF4 0010FBD4  3C 80 80 31 */	lis r4, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80112AF8 0010FBD8  38 C5 7A 68 */	addi r6, r5, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80112AFC 0010FBDC  3C A0 80 27 */	lis r5, "@stringBase0"@ha
/* 80112B00 0010FBE0  90 66 00 2C */	stw r3, 0x2c(r6)
/* 80112B04 0010FBE4  38 A5 A6 88 */	addi r5, r5, "@stringBase0"@l
/* 80112B08 0010FBE8  38 00 00 00 */	li r0, 0x0
/* 80112B0C 0010FBEC  3B E4 37 88 */	addi r31, r4, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80112B10 0010FBF0  90 01 00 08 */	stw r0, 0x8(r1)
/* 80112B14 0010FBF4  7F C3 F3 78 */	mr r3, r30
/* 80112B18 0010FBF8  38 85 06 3D */	addi r4, r5, 0x63d
/* 80112B1C 0010FBFC  38 A5 05 F6 */	addi r5, r5, 0x5f6
/* 80112B20 0010FC00  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112B24 0010FC04  38 C0 00 00 */	li r6, 0x0
/* 80112B28 0010FC08  38 E0 00 00 */	li r7, 0x0
/* 80112B2C 0010FC0C  39 00 00 10 */	li r8, 0x10
/* 80112B30 0010FC10  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80112B34 0010FC14  39 20 00 00 */	li r9, 0x0
/* 80112B38 0010FC18  C0 7F 00 08 */	lfs f3, 0x8(r31)
/* 80112B3C 0010FC1C  39 40 00 00 */	li r10, 0x0
/* 80112B40 0010FC20  FC 40 08 90 */	fmr f2, f1
/* 80112B44 0010FC24  4B EF 48 7D */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80112B48 0010FC28  3C A0 80 29 */	lis r5, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80112B4C 0010FC2C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80112B50 0010FC30  38 A5 7A 68 */	addi r5, r5, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80112B54 0010FC34  38 00 00 00 */	li r0, 0x0
/* 80112B58 0010FC38  90 65 00 30 */	stw r3, 0x30(r5)
/* 80112B5C 0010FC3C  38 A4 A6 88 */	addi r5, r4, "@stringBase0"@l
/* 80112B60 0010FC40  7F C3 F3 78 */	mr r3, r30
/* 80112B64 0010FC44  38 C0 00 00 */	li r6, 0x0
/* 80112B68 0010FC48  90 01 00 08 */	stw r0, 0x8(r1)
/* 80112B6C 0010FC4C  38 85 05 F6 */	addi r4, r5, 0x5f6
/* 80112B70 0010FC50  38 A5 06 3D */	addi r5, r5, 0x63d
/* 80112B74 0010FC54  38 E0 00 00 */	li r7, 0x0
/* 80112B78 0010FC58  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112B7C 0010FC5C  39 00 00 10 */	li r8, 0x10
/* 80112B80 0010FC60  39 20 00 00 */	li r9, 0x0
/* 80112B84 0010FC64  39 40 00 00 */	li r10, 0x0
/* 80112B88 0010FC68  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80112B8C 0010FC6C  C0 7F 00 08 */	lfs f3, 0x8(r31)
/* 80112B90 0010FC70  FC 40 08 90 */	fmr f2, f1
/* 80112B94 0010FC74  4B EF 48 2D */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80112B98 0010FC78  3C A0 80 29 */	lis r5, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80112B9C 0010FC7C  3C 80 80 31 */	lis r4, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80112BA0 0010FC80  38 C5 7A 68 */	addi r6, r5, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80112BA4 0010FC84  3C A0 80 27 */	lis r5, "@stringBase0"@ha
/* 80112BA8 0010FC88  90 66 00 34 */	stw r3, 0x34(r6)
/* 80112BAC 0010FC8C  38 A5 A6 88 */	addi r5, r5, "@stringBase0"@l
/* 80112BB0 0010FC90  38 00 00 00 */	li r0, 0x0
/* 80112BB4 0010FC94  3B E4 37 88 */	addi r31, r4, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80112BB8 0010FC98  90 01 00 08 */	stw r0, 0x8(r1)
/* 80112BBC 0010FC9C  7F C3 F3 78 */	mr r3, r30
/* 80112BC0 0010FCA0  38 85 06 A8 */	addi r4, r5, 0x6a8
/* 80112BC4 0010FCA4  38 A5 06 21 */	addi r5, r5, 0x621
/* 80112BC8 0010FCA8  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112BCC 0010FCAC  38 C0 00 00 */	li r6, 0x0
/* 80112BD0 0010FCB0  38 E0 00 00 */	li r7, 0x0
/* 80112BD4 0010FCB4  39 00 00 10 */	li r8, 0x10
/* 80112BD8 0010FCB8  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80112BDC 0010FCBC  39 20 00 00 */	li r9, 0x0
/* 80112BE0 0010FCC0  C0 7F 00 10 */	lfs f3, 0x10(r31)
/* 80112BE4 0010FCC4  39 40 00 00 */	li r10, 0x0
/* 80112BE8 0010FCC8  FC 40 08 90 */	fmr f2, f1
/* 80112BEC 0010FCCC  4B EF 47 D5 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80112BF0 0010FCD0  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80112BF4 0010FCD4  3C A0 80 27 */	lis r5, "@stringBase0"@ha
/* 80112BF8 0010FCD8  38 C4 7A 68 */	addi r6, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80112BFC 0010FCDC  38 00 00 00 */	li r0, 0x0
/* 80112C00 0010FCE0  90 66 00 38 */	stw r3, 0x38(r6)
/* 80112C04 0010FCE4  3C 80 80 11 */	lis r4, "check_anim_hit_to_dive__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FP15xAnimTransitionP11xAnimSinglePv"@ha
/* 80112C08 0010FCE8  38 A5 A6 88 */	addi r5, r5, "@stringBase0"@l
/* 80112C0C 0010FCEC  7F C3 F3 78 */	mr r3, r30
/* 80112C10 0010FCF0  90 01 00 08 */	stw r0, 0x8(r1)
/* 80112C14 0010FCF4  38 C4 0F A0 */	addi r6, r4, "check_anim_hit_to_dive__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FP15xAnimTransitionP11xAnimSinglePv"@l
/* 80112C18 0010FCF8  38 85 06 21 */	addi r4, r5, 0x621
/* 80112C1C 0010FCFC  38 A5 06 13 */	addi r5, r5, 0x613
/* 80112C20 0010FD00  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112C24 0010FD04  38 E0 00 00 */	li r7, 0x0
/* 80112C28 0010FD08  39 00 00 10 */	li r8, 0x10
/* 80112C2C 0010FD0C  39 20 00 00 */	li r9, 0x0
/* 80112C30 0010FD10  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80112C34 0010FD14  39 40 00 00 */	li r10, 0x0
/* 80112C38 0010FD18  C0 7F 00 10 */	lfs f3, 0x10(r31)
/* 80112C3C 0010FD1C  FC 40 08 90 */	fmr f2, f1
/* 80112C40 0010FD20  4B EF 47 81 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80112C44 0010FD24  38 00 00 00 */	li r0, 0x0
/* 80112C48 0010FD28  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80112C4C 0010FD2C  90 01 00 08 */	stw r0, 0x8(r1)
/* 80112C50 0010FD30  38 A3 A6 88 */	addi r5, r3, "@stringBase0"@l
/* 80112C54 0010FD34  3C 80 80 11 */	lis r4, "check_anim_hit_to_top__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FP15xAnimTransitionP11xAnimSinglePv"@ha
/* 80112C58 0010FD38  7F C3 F3 78 */	mr r3, r30
/* 80112C5C 0010FD3C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112C60 0010FD40  38 C4 0F D4 */	addi r6, r4, "check_anim_hit_to_top__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FP15xAnimTransitionP11xAnimSinglePv"@l
/* 80112C64 0010FD44  38 85 06 21 */	addi r4, r5, 0x621
/* 80112C68 0010FD48  38 A5 06 06 */	addi r5, r5, 0x606
/* 80112C6C 0010FD4C  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80112C70 0010FD50  38 E0 00 00 */	li r7, 0x0
/* 80112C74 0010FD54  C0 7F 00 10 */	lfs f3, 0x10(r31)
/* 80112C78 0010FD58  39 00 00 10 */	li r8, 0x10
/* 80112C7C 0010FD5C  FC 40 08 90 */	fmr f2, f1
/* 80112C80 0010FD60  39 20 00 00 */	li r9, 0x0
/* 80112C84 0010FD64  39 40 00 00 */	li r10, 0x0
/* 80112C88 0010FD68  4B EF 47 39 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80112C8C 0010FD6C  38 00 00 00 */	li r0, 0x0
/* 80112C90 0010FD70  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80112C94 0010FD74  90 01 00 08 */	stw r0, 0x8(r1)
/* 80112C98 0010FD78  38 A3 A6 88 */	addi r5, r3, "@stringBase0"@l
/* 80112C9C 0010FD7C  3C 80 80 11 */	lis r4, "check_anim_hit_to_bottom__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FP15xAnimTransitionP11xAnimSinglePv"@ha
/* 80112CA0 0010FD80  7F C3 F3 78 */	mr r3, r30
/* 80112CA4 0010FD84  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112CA8 0010FD88  38 C4 10 08 */	addi r6, r4, "check_anim_hit_to_bottom__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FP15xAnimTransitionP11xAnimSinglePv"@l
/* 80112CAC 0010FD8C  38 85 06 21 */	addi r4, r5, 0x621
/* 80112CB0 0010FD90  38 A5 05 F6 */	addi r5, r5, 0x5f6
/* 80112CB4 0010FD94  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80112CB8 0010FD98  38 E0 00 00 */	li r7, 0x0
/* 80112CBC 0010FD9C  C0 7F 00 10 */	lfs f3, 0x10(r31)
/* 80112CC0 0010FDA0  39 00 00 10 */	li r8, 0x10
/* 80112CC4 0010FDA4  FC 40 08 90 */	fmr f2, f1
/* 80112CC8 0010FDA8  39 20 00 00 */	li r9, 0x0
/* 80112CCC 0010FDAC  39 40 00 00 */	li r10, 0x0
/* 80112CD0 0010FDB0  4B EF 46 F1 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80112CD4 0010FDB4  38 00 00 00 */	li r0, 0x0
/* 80112CD8 0010FDB8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80112CDC 0010FDBC  90 01 00 08 */	stw r0, 0x8(r1)
/* 80112CE0 0010FDC0  38 A3 A6 88 */	addi r5, r3, "@stringBase0"@l
/* 80112CE4 0010FDC4  3C 80 80 11 */	lis r4, "check_anim_hit_to_cycle__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FP15xAnimTransitionP11xAnimSinglePv"@ha
/* 80112CE8 0010FDC8  7F C3 F3 78 */	mr r3, r30
/* 80112CEC 0010FDCC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112CF0 0010FDD0  38 C4 10 3C */	addi r6, r4, "check_anim_hit_to_cycle__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FP15xAnimTransitionP11xAnimSinglePv"@l
/* 80112CF4 0010FDD4  38 85 06 21 */	addi r4, r5, 0x621
/* 80112CF8 0010FDD8  38 A5 06 3D */	addi r5, r5, 0x63d
/* 80112CFC 0010FDDC  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80112D00 0010FDE0  38 E0 00 00 */	li r7, 0x0
/* 80112D04 0010FDE4  C0 7F 00 10 */	lfs f3, 0x10(r31)
/* 80112D08 0010FDE8  39 00 00 10 */	li r8, 0x10
/* 80112D0C 0010FDEC  FC 40 08 90 */	fmr f2, f1
/* 80112D10 0010FDF0  39 20 00 00 */	li r9, 0x0
/* 80112D14 0010FDF4  39 40 00 00 */	li r10, 0x0
/* 80112D18 0010FDF8  4B EF 46 A9 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80112D1C 0010FDFC  38 00 00 00 */	li r0, 0x0
/* 80112D20 0010FE00  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80112D24 0010FE04  90 01 00 08 */	stw r0, 0x8(r1)
/* 80112D28 0010FE08  38 A3 A6 88 */	addi r5, r3, "@stringBase0"@l
/* 80112D2C 0010FE0C  3C 80 80 11 */	lis r4, "check_anim_hit_to_death__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FP15xAnimTransitionP11xAnimSinglePv"@ha
/* 80112D30 0010FE10  7F C3 F3 78 */	mr r3, r30
/* 80112D34 0010FE14  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112D38 0010FE18  38 C4 10 70 */	addi r6, r4, "check_anim_hit_to_death__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FP15xAnimTransitionP11xAnimSinglePv"@l
/* 80112D3C 0010FE1C  38 85 06 21 */	addi r4, r5, 0x621
/* 80112D40 0010FE20  38 A5 06 4C */	addi r5, r5, 0x64c
/* 80112D44 0010FE24  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80112D48 0010FE28  38 E0 00 00 */	li r7, 0x0
/* 80112D4C 0010FE2C  C0 7F 00 10 */	lfs f3, 0x10(r31)
/* 80112D50 0010FE30  39 00 00 10 */	li r8, 0x10
/* 80112D54 0010FE34  FC 40 08 90 */	fmr f2, f1
/* 80112D58 0010FE38  39 20 00 00 */	li r9, 0x0
/* 80112D5C 0010FE3C  39 40 00 00 */	li r10, 0x0
/* 80112D60 0010FE40  4B EF 46 61 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80112D64 0010FE44  38 00 00 00 */	li r0, 0x0
/* 80112D68 0010FE48  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80112D6C 0010FE4C  90 01 00 08 */	stw r0, 0x8(r1)
/* 80112D70 0010FE50  38 A3 A6 88 */	addi r5, r3, "@stringBase0"@l
/* 80112D74 0010FE54  7F C3 F3 78 */	mr r3, r30
/* 80112D78 0010FE58  38 C0 00 00 */	li r6, 0x0
/* 80112D7C 0010FE5C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80112D80 0010FE60  38 85 06 A8 */	addi r4, r5, 0x6a8
/* 80112D84 0010FE64  38 A5 00 7D */	addi r5, r5, 0x7d
/* 80112D88 0010FE68  38 E0 00 00 */	li r7, 0x0
/* 80112D8C 0010FE6C  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80112D90 0010FE70  39 00 00 10 */	li r8, 0x10
/* 80112D94 0010FE74  C0 62 9E 8C */	lfs f3, "@969"@sda21(r2)
/* 80112D98 0010FE78  39 20 00 00 */	li r9, 0x0
/* 80112D9C 0010FE7C  FC 40 08 90 */	fmr f2, f1
/* 80112DA0 0010FE80  39 40 00 00 */	li r10, 0x0
/* 80112DA4 0010FE84  4B EF 46 1D */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 80112DA8 0010FE88  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80112DAC 0010FE8C  38 84 7A 68 */	addi r4, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80112DB0 0010FE90  90 64 00 1C */	stw r3, 0x1c(r4)
/* 80112DB4 0010FE94  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80112DB8 0010FE98  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80112DBC 0010FE9C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80112DC0 0010FEA0  7C 08 03 A6 */	mtlr r0
/* 80112DC4 0010FEA4  38 21 00 20 */	addi r1, r1, 0x20
/* 80112DC8 0010FEA8  4E 80 00 20 */	blr
.endfn insert_animations__12bungee_stateFR10xAnimTable

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::attaching_state_type::start()
.fn "start__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@20attaching_state_typeFv", local
/* 80112DCC 0010FEAC  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80112DD0 0010FEB0  7C 08 02 A6 */	mflr r0
/* 80112DD4 0010FEB4  3C 80 80 3C */	lis r4, globals@ha
/* 80112DD8 0010FEB8  90 01 00 54 */	stw r0, 0x54(r1)
/* 80112DDC 0010FEBC  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80112DE0 0010FEC0  7C 7F 1B 78 */	mr r31, r3
/* 80112DE4 0010FEC4  38 64 05 58 */	addi r3, r4, globals@l
/* 80112DE8 0010FEC8  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80112DEC 0010FECC  93 A1 00 44 */	stw r29, 0x44(r1)
/* 80112DF0 0010FED0  83 A3 07 28 */	lwz r29, 0x728(r3)
/* 80112DF4 0010FED4  38 7D 00 30 */	addi r3, r29, 0x30
/* 80112DF8 0010FED8  38 1D 00 D4 */	addi r0, r29, 0xd4
/* 80112DFC 0010FEDC  90 7F 00 08 */	stw r3, 0x8(r31)
/* 80112E00 0010FEE0  90 1F 00 0C */	stw r0, 0xc(r31)
/* 80112E04 0010FEE4  4B FF D6 29 */	bl "init_models__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"
/* 80112E08 0010FEE8  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80112E0C 0010FEEC  80 7F 00 08 */	lwz r3, 0x8(r31)
/* 80112E10 0010FEF0  38 84 7A 68 */	addi r4, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80112E14 0010FEF4  80 84 01 68 */	lwz r4, 0x168(r4)
/* 80112E18 0010FEF8  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80112E1C 0010FEFC  38 84 00 30 */	addi r4, r4, 0x30
/* 80112E20 0010FF00  4B EF 84 45 */	bl __as__5xVec3FRC5xVec3
/* 80112E24 0010FF04  4B FF D9 49 */	bl "update_hook_loc__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"
/* 80112E28 0010FF08  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80112E2C 0010FF0C  38 7F 00 10 */	addi r3, r31, 0x10
/* 80112E30 0010FF10  38 84 7A 68 */	addi r4, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80112E34 0010FF14  3B C4 01 74 */	addi r30, r4, 0x174
/* 80112E38 0010FF18  7F C4 F3 78 */	mr r4, r30
/* 80112E3C 0010FF1C  4B EF 84 29 */	bl __as__5xVec3FRC5xVec3
/* 80112E40 0010FF20  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80112E44 0010FF24  38 7F 00 1C */	addi r3, r31, 0x1c
/* 80112E48 0010FF28  4B F0 9A 31 */	bl __as__5xVec3Ff
/* 80112E4C 0010FF2C  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80112E50 0010FF30  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80112E54 0010FF34  38 83 7A 68 */	addi r4, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80112E58 0010FF38  38 7F 00 34 */	addi r3, r31, 0x34
/* 80112E5C 0010FF3C  D0 1F 00 2C */	stfs f0, 0x2c(r31)
/* 80112E60 0010FF40  80 84 00 3C */	lwz r4, 0x3c(r4)
/* 80112E64 0010FF44  80 84 00 10 */	lwz r4, 0x10(r4)
/* 80112E68 0010FF48  C0 04 00 24 */	lfs f0, 0x24(r4)
/* 80112E6C 0010FF4C  D0 1F 00 30 */	stfs f0, 0x30(r31)
/* 80112E70 0010FF50  80 9F 00 08 */	lwz r4, 0x8(r31)
/* 80112E74 0010FF54  4B EF 83 F1 */	bl __as__5xVec3FRC5xVec3
/* 80112E78 0010FF58  38 61 00 14 */	addi r3, r1, 0x14
/* 80112E7C 0010FF5C  38 9D 00 30 */	addi r4, r29, 0x30
/* 80112E80 0010FF60  38 BD 00 70 */	addi r5, r29, 0x70
/* 80112E84 0010FF64  4B EF 83 49 */	bl __mi__5xVec3CFRC5xVec3
/* 80112E88 0010FF68  3C 80 80 3C */	lis r4, globals@ha
/* 80112E8C 0010FF6C  38 61 00 20 */	addi r3, r1, 0x20
/* 80112E90 0010FF70  38 A4 05 58 */	addi r5, r4, globals@l
/* 80112E94 0010FF74  38 81 00 14 */	addi r4, r1, 0x14
/* 80112E98 0010FF78  C0 25 06 C8 */	lfs f1, 0x6c8(r5)
/* 80112E9C 0010FF7C  4B F0 27 4D */	bl __dv__5xVec3CFf
/* 80112EA0 0010FF80  38 7F 00 40 */	addi r3, r31, 0x40
/* 80112EA4 0010FF84  38 81 00 20 */	addi r4, r1, 0x20
/* 80112EA8 0010FF88  4B EF 83 BD */	bl __as__5xVec3FRC5xVec3
/* 80112EAC 0010FF8C  80 BF 00 08 */	lwz r5, 0x8(r31)
/* 80112EB0 0010FF90  7F C4 F3 78 */	mr r4, r30
/* 80112EB4 0010FF94  38 61 00 08 */	addi r3, r1, 0x8
/* 80112EB8 0010FF98  4B EF 83 15 */	bl __mi__5xVec3CFRC5xVec3
/* 80112EBC 0010FF9C  80 A1 00 08 */	lwz r5, 0x8(r1)
/* 80112EC0 0010FFA0  38 61 00 2C */	addi r3, r1, 0x2c
/* 80112EC4 0010FFA4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80112EC8 0010FFA8  80 01 00 10 */	lwz r0, 0x10(r1)
/* 80112ECC 0010FFAC  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 80112ED0 0010FFB0  90 81 00 30 */	stw r4, 0x30(r1)
/* 80112ED4 0010FFB4  90 01 00 34 */	stw r0, 0x34(r1)
/* 80112ED8 0010FFB8  4B EF 82 D1 */	bl length__5xVec3CFv
/* 80112EDC 0010FFBC  C0 5F 00 30 */	lfs f2, 0x30(r31)
/* 80112EE0 0010FFC0  C0 02 9E CC */	lfs f0, "@2184"@sda21(r2)
/* 80112EE4 0010FFC4  EC 41 10 24 */	fdivs f2, f1, f2
/* 80112EE8 0010FFC8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80112EEC 0010FFCC  40 81 00 10 */	ble .L_80112EFC
/* 80112EF0 0010FFD0  C0 02 9E 90 */	lfs f0, "@987"@sda21(r2)
/* 80112EF4 0010FFD4  EC 00 00 72 */	fmuls f0, f0, f1
/* 80112EF8 0010FFD8  D0 1F 00 30 */	stfs f0, 0x30(r31)
.L_80112EFC:
/* 80112EFC 0010FFDC  3C 80 80 3C */	lis r4, globals@ha
/* 80112F00 0010FFE0  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80112F04 0010FFE4  38 84 05 58 */	addi r4, r4, globals@l
/* 80112F08 0010FFE8  80 A4 07 04 */	lwz r5, 0x704(r4)
/* 80112F0C 0010FFEC  38 63 7A 68 */	addi r3, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80112F10 0010FFF0  80 83 00 10 */	lwz r4, 0x10(r3)
/* 80112F14 0010FFF4  80 65 00 0C */	lwz r3, 0xc(r5)
/* 80112F18 0010FFF8  4B EF 5B 2D */	bl xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition
/* 80112F1C 0010FFFC  38 60 00 20 */	li r3, 0x20
/* 80112F20 00110000  4B FF D9 DD */	bl "trigger__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FUi"
/* 80112F24 00110004  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80112F28 00110008  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80112F2C 0011000C  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 80112F30 00110010  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 80112F34 00110014  7C 08 03 A6 */	mtlr r0
/* 80112F38 00110018  38 21 00 50 */	addi r1, r1, 0x50
/* 80112F3C 0011001C  4E 80 00 20 */	blr
.endfn "start__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@20attaching_state_typeFv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::attaching_state_type::stop()
.fn "stop__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@20attaching_state_typeFv", local
/* 80112F40 00110020  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80112F44 00110024  7C 08 02 A6 */	mflr r0
/* 80112F48 00110028  90 01 00 14 */	stw r0, 0x14(r1)
/* 80112F4C 0011002C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80112F50 00110030  7C 7F 1B 78 */	mr r31, r3
/* 80112F54 00110034  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80112F58 00110038  38 83 7A 68 */	addi r4, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80112F5C 0011003C  80 7F 00 08 */	lwz r3, 0x8(r31)
/* 80112F60 00110040  38 84 01 74 */	addi r4, r4, 0x174
/* 80112F64 00110044  4B EF 83 01 */	bl __as__5xVec3FRC5xVec3
/* 80112F68 00110048  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 80112F6C 0011004C  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80112F70 00110050  4B F0 99 09 */	bl __as__5xVec3Ff
/* 80112F74 00110054  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80112F78 00110058  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80112F7C 0011005C  7C 08 03 A6 */	mtlr r0
/* 80112F80 00110060  38 21 00 10 */	addi r1, r1, 0x10
/* 80112F84 00110064  4E 80 00 20 */	blr
.endfn "stop__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@20attaching_state_typeFv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::attaching_state_type::update(xScene&, float&)
.fn "update__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@20attaching_state_typeFR6xSceneRf", local
/* 80112F88 00110068  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80112F8C 0011006C  7C 08 02 A6 */	mflr r0
/* 80112F90 00110070  90 01 00 54 */	stw r0, 0x54(r1)
/* 80112F94 00110074  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80112F98 00110078  F3 E1 00 48 */	psq_st f31, 0x48(r1), 0, qr0
/* 80112F9C 0011007C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80112FA0 00110080  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80112FA4 00110084  93 A1 00 34 */	stw r29, 0x34(r1)
/* 80112FA8 00110088  7C 7D 1B 78 */	mr r29, r3
/* 80112FAC 0011008C  7C BE 2B 78 */	mr r30, r5
/* 80112FB0 00110090  4B FF D7 BD */	bl "update_hook_loc__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"
/* 80112FB4 00110094  C0 3D 00 2C */	lfs f1, 0x2c(r29)
/* 80112FB8 00110098  C0 1E 00 00 */	lfs f0, 0x0(r30)
/* 80112FBC 0011009C  EC 01 00 2A */	fadds f0, f1, f0
/* 80112FC0 001100A0  D0 1D 00 2C */	stfs f0, 0x2c(r29)
/* 80112FC4 001100A4  C0 3D 00 2C */	lfs f1, 0x2c(r29)
/* 80112FC8 001100A8  C0 1D 00 30 */	lfs f0, 0x30(r29)
/* 80112FCC 001100AC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80112FD0 001100B0  4C 41 13 82 */	cror eq, gt, eq
/* 80112FD4 001100B4  40 82 00 14 */	bne .L_80112FE8
/* 80112FD8 001100B8  EC 01 00 28 */	fsubs f0, f1, f0
/* 80112FDC 001100BC  38 60 00 01 */	li r3, 0x1
/* 80112FE0 001100C0  D0 1E 00 00 */	stfs f0, 0x0(r30)
/* 80112FE4 001100C4  48 00 01 48 */	b .L_8011312C
.L_80112FE8:
/* 80112FE8 001100C8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80112FEC 001100CC  40 80 00 DC */	bge .L_801130C8
/* 80112FF0 001100D0  C0 5D 00 40 */	lfs f2, 0x40(r29)
/* 80112FF4 001100D4  3C 60 80 3C */	lis r3, globals@ha
/* 80112FF8 001100D8  C0 3E 00 00 */	lfs f1, 0x0(r30)
/* 80112FFC 001100DC  38 63 05 58 */	addi r3, r3, globals@l
/* 80113000 001100E0  C0 1D 00 34 */	lfs f0, 0x34(r29)
/* 80113004 001100E4  C0 63 09 24 */	lfs f3, 0x924(r3)
/* 80113008 001100E8  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8011300C 001100EC  FC 80 18 50 */	fneg f4, f3
/* 80113010 001100F0  D0 1D 00 34 */	stfs f0, 0x34(r29)
/* 80113014 001100F4  C0 02 9E 8C */	lfs f0, "@969"@sda21(r2)
/* 80113018 001100F8  C0 7E 00 00 */	lfs f3, 0x0(r30)
/* 8011301C 001100FC  EC 00 01 32 */	fmuls f0, f0, f4
/* 80113020 00110100  C0 3D 00 44 */	lfs f1, 0x44(r29)
/* 80113024 00110104  C0 5D 00 38 */	lfs f2, 0x38(r29)
/* 80113028 00110108  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8011302C 0011010C  EC 03 00 32 */	fmuls f0, f3, f0
/* 80113030 00110110  EC 01 00 FA */	fmadds f0, f1, f3, f0
/* 80113034 00110114  EC 02 00 2A */	fadds f0, f2, f0
/* 80113038 00110118  D0 1D 00 38 */	stfs f0, 0x38(r29)
/* 8011303C 0011011C  C0 5D 00 48 */	lfs f2, 0x48(r29)
/* 80113040 00110120  C0 3E 00 00 */	lfs f1, 0x0(r30)
/* 80113044 00110124  C0 1D 00 3C */	lfs f0, 0x3c(r29)
/* 80113048 00110128  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8011304C 0011012C  D0 1D 00 3C */	stfs f0, 0x3c(r29)
/* 80113050 00110130  C0 3E 00 00 */	lfs f1, 0x0(r30)
/* 80113054 00110134  C0 1D 00 44 */	lfs f0, 0x44(r29)
/* 80113058 00110138  EC 04 00 7A */	fmadds f0, f4, f1, f0
/* 8011305C 0011013C  D0 1D 00 44 */	stfs f0, 0x44(r29)
/* 80113060 00110140  C0 3D 00 2C */	lfs f1, 0x2c(r29)
/* 80113064 00110144  C0 1D 00 30 */	lfs f0, 0x30(r29)
/* 80113068 00110148  EC 21 00 24 */	fdivs f1, f1, f0
/* 8011306C 0011014C  4B F4 C0 95 */	bl xSCurve__Ff
/* 80113070 00110150  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80113074 00110154  FF E0 08 90 */	fmr f31, f1
/* 80113078 00110158  38 83 7A 68 */	addi r4, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 8011307C 0011015C  38 BD 00 34 */	addi r5, r29, 0x34
/* 80113080 00110160  38 61 00 08 */	addi r3, r1, 0x8
/* 80113084 00110164  38 84 01 74 */	addi r4, r4, 0x174
/* 80113088 00110168  4B EF 81 45 */	bl __mi__5xVec3CFRC5xVec3
/* 8011308C 0011016C  FC 20 F8 90 */	fmr f1, f31
/* 80113090 00110170  38 61 00 14 */	addi r3, r1, 0x14
/* 80113094 00110174  38 81 00 08 */	addi r4, r1, 0x8
/* 80113098 00110178  4B EF 80 89 */	bl __ml__5xVec3CFf
/* 8011309C 0011017C  38 61 00 20 */	addi r3, r1, 0x20
/* 801130A0 00110180  38 9D 00 34 */	addi r4, r29, 0x34
/* 801130A4 00110184  38 A1 00 14 */	addi r5, r1, 0x14
/* 801130A8 00110188  4B F0 23 39 */	bl __pl__5xVec3CFRC5xVec3
/* 801130AC 0011018C  80 7D 00 08 */	lwz r3, 0x8(r29)
/* 801130B0 00110190  38 81 00 20 */	addi r4, r1, 0x20
/* 801130B4 00110194  4B EF 81 B1 */	bl __as__5xVec3FRC5xVec3
/* 801130B8 00110198  80 7D 00 0C */	lwz r3, 0xc(r29)
/* 801130BC 0011019C  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 801130C0 001101A0  4B F0 97 B9 */	bl __as__5xVec3Ff
/* 801130C4 001101A4  48 00 00 0C */	b .L_801130D0
.L_801130C8:
/* 801130C8 001101A8  EC 01 00 28 */	fsubs f0, f1, f0
/* 801130CC 001101AC  D0 1E 00 00 */	stfs f0, 0x0(r30)
.L_801130D0:
/* 801130D0 001101B0  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801130D4 001101B4  80 9D 00 08 */	lwz r4, 0x8(r29)
/* 801130D8 001101B8  38 63 7A 68 */	addi r3, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801130DC 001101BC  80 63 01 68 */	lwz r3, 0x168(r3)
/* 801130E0 001101C0  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 801130E4 001101C4  38 63 00 30 */	addi r3, r3, 0x30
/* 801130E8 001101C8  4B EF 81 7D */	bl __as__5xVec3FRC5xVec3
/* 801130EC 001101CC  3C 60 80 3C */	lis r3, globals@ha
/* 801130F0 001101D0  C0 3E 00 00 */	lfs f1, 0x0(r30)
/* 801130F4 001101D4  3B E3 05 58 */	addi r31, r3, globals@l
/* 801130F8 001101D8  80 7F 07 04 */	lwz r3, 0x704(r31)
/* 801130FC 001101DC  4B F2 13 D1 */	bl xModelUpdate__FP14xModelInstancef
/* 80113100 001101E0  80 7F 07 04 */	lwz r3, 0x704(r31)
/* 80113104 001101E4  4B F2 15 AD */	bl xModelEval__FP14xModelInstance
/* 80113108 001101E8  C0 3D 00 2C */	lfs f1, 0x2c(r29)
/* 8011310C 001101EC  C0 1D 00 30 */	lfs f0, 0x30(r29)
/* 80113110 001101F0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80113114 001101F4  40 80 00 0C */	bge .L_80113120
/* 80113118 001101F8  38 60 00 00 */	li r3, 0x0
/* 8011311C 001101FC  48 00 00 10 */	b .L_8011312C
.L_80113120:
/* 80113120 00110200  EC 01 00 28 */	fsubs f0, f1, f0
/* 80113124 00110204  38 60 00 01 */	li r3, 0x1
/* 80113128 00110208  D0 1E 00 00 */	stfs f0, 0x0(r30)
.L_8011312C:
/* 8011312C 0011020C  E3 E1 00 48 */	psq_l f31, 0x48(r1), 0, qr0
/* 80113130 00110210  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80113134 00110214  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80113138 00110218  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8011313C 0011021C  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80113140 00110220  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 80113144 00110224  7C 08 03 A6 */	mtlr r0
/* 80113148 00110228  38 21 00 50 */	addi r1, r1, 0x50
/* 8011314C 0011022C  4E 80 00 20 */	blr
.endfn "update__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@20attaching_state_typeFR6xSceneRf"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::attaching_state_type::render()
.fn "render__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@20attaching_state_typeFv", local
/* 80113150 00110230  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80113154 00110234  7C 08 02 A6 */	mflr r0
/* 80113158 00110238  38 60 00 00 */	li r3, 0x0
/* 8011315C 0011023C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80113160 00110240  4B FF D4 0D */	bl "render_player__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fb"
/* 80113164 00110244  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80113168 00110248  7C 08 03 A6 */	mtlr r0
/* 8011316C 0011024C  38 21 00 10 */	addi r1, r1, 0x10
/* 80113170 00110250  4E 80 00 20 */	blr
.endfn "render__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@20attaching_state_typeFv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::start()
.fn "start__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv", local
/* 80113174 00110254  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80113178 00110258  7C 08 02 A6 */	mflr r0
/* 8011317C 0011025C  3C 80 80 27 */	lis r4, ...rodata.0@ha
/* 80113180 00110260  90 01 00 34 */	stw r0, 0x34(r1)
/* 80113184 00110264  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80113188 00110268  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8011318C 0011026C  3B C4 A4 08 */	addi r30, r4, ...rodata.0@l
/* 80113190 00110270  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80113194 00110274  7C 7D 1B 78 */	mr r29, r3
/* 80113198 00110278  93 81 00 20 */	stw r28, 0x20(r1)
/* 8011319C 0011027C  48 00 08 51 */	bl "show_help__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv"
/* 801131A0 00110280  38 00 00 00 */	li r0, 0x0
/* 801131A4 00110284  7F A3 EB 78 */	mr r3, r29
/* 801131A8 00110288  98 1D 00 B8 */	stb r0, 0xb8(r29)
/* 801131AC 0011028C  38 80 00 00 */	li r4, 0x0
/* 801131B0 00110290  48 00 07 95 */	bl "allow_dive__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFb"
/* 801131B4 00110294  3C 60 80 3C */	lis r3, globals@ha
/* 801131B8 00110298  38 00 00 00 */	li r0, 0x0
/* 801131BC 0011029C  38 83 05 58 */	addi r4, r3, globals@l
/* 801131C0 001102A0  80 64 16 B0 */	lwz r3, 0x16b0(r4)
/* 801131C4 001102A4  90 7D 00 BC */	stw r3, 0xbc(r29)
/* 801131C8 001102A8  98 1D 00 AC */	stb r0, 0xac(r29)
/* 801131CC 001102AC  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 801131D0 001102B0  D0 1D 00 B0 */	stfs f0, 0xb0(r29)
/* 801131D4 001102B4  C0 02 9E 88 */	lfs f0, "@961"@sda21(r2)
/* 801131D8 001102B8  D0 1D 00 B4 */	stfs f0, 0xb4(r29)
/* 801131DC 001102BC  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 801131E0 001102C0  D0 04 17 08 */	stfs f0, 0x1708(r4)
/* 801131E4 001102C4  98 1D 00 98 */	stb r0, 0x98(r29)
/* 801131E8 001102C8  4B FF D2 99 */	bl "show_models__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"
/* 801131EC 001102CC  4B FF D5 81 */	bl "update_hook_loc__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"
/* 801131F0 001102D0  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801131F4 001102D4  84 04 7A 68 */	lwzu r0, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l(r4)
/* 801131F8 001102D8  38 60 00 04 */	li r3, 0x4
/* 801131FC 001102DC  60 00 00 08 */	ori r0, r0, 0x8
/* 80113200 001102E0  54 00 07 34 */	rlwinm r0, r0, 0, 28, 26
/* 80113204 001102E4  90 04 00 00 */	stw r0, 0x0(r4)
/* 80113208 001102E8  4B F3 EE F9 */	bl zCameraDisableTracking__F17camera_owner_enum
/* 8011320C 001102EC  38 60 00 00 */	li r3, 0x0
/* 80113210 001102F0  38 80 00 04 */	li r4, 0x4
/* 80113214 001102F4  4B EF A3 7D */	bl xCameraDoCollisions__Fii
/* 80113218 001102F8  3C 80 80 3C */	lis r4, globals@ha
/* 8011321C 001102FC  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80113220 00110300  3B E3 7A 68 */	addi r31, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80113224 00110304  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80113228 00110308  38 64 05 58 */	addi r3, r4, globals@l
/* 8011322C 0011030C  38 00 00 00 */	li r0, 0x0
/* 80113230 00110310  D0 03 17 10 */	stfs f0, 0x1710(r3)
/* 80113234 00110314  38 7D 01 0C */	addi r3, r29, 0x10c
/* 80113238 00110318  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 8011323C 0011031C  90 1F 01 98 */	stw r0, 0x198(r31)
/* 80113240 00110320  80 84 00 10 */	lwz r4, 0x10(r4)
/* 80113244 00110324  48 00 05 CD */	bl __as__Q212bungee_state10hook_assetFRCQ212bungee_state10hook_asset
/* 80113248 00110328  4B FF D5 25 */	bl "update_hook_loc__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"
/* 8011324C 0011032C  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80113250 00110330  38 7D 00 2C */	addi r3, r29, 0x2c
/* 80113254 00110334  38 84 7A 68 */	addi r4, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80113258 00110338  38 84 01 74 */	addi r4, r4, 0x174
/* 8011325C 0011033C  4B EF 80 09 */	bl __as__5xVec3FRC5xVec3
/* 80113260 00110340  7F A3 EB 78 */	mr r3, r29
/* 80113264 00110344  4B FF D9 51 */	bl "reset_props_vertical__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv"
/* 80113268 00110348  C0 1D 01 4C */	lfs f0, 0x14c(r29)
/* 8011326C 0011034C  7F A3 EB 78 */	mr r3, r29
/* 80113270 00110350  C0 3D 01 3C */	lfs f1, 0x13c(r29)
/* 80113274 00110354  FC 00 00 50 */	fneg f0, f0
/* 80113278 00110358  EC 01 00 32 */	fmuls f0, f1, f0
/* 8011327C 0011035C  D0 1D 01 3C */	stfs f0, 0x13c(r29)
/* 80113280 00110360  4B FF D7 B1 */	bl "reset_props_camera__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv"
/* 80113284 00110364  3C 60 80 3C */	lis r3, globals@ha
/* 80113288 00110368  7F A4 EB 78 */	mr r4, r29
/* 8011328C 0011036C  3B 83 05 58 */	addi r28, r3, globals@l
/* 80113290 00110370  38 61 00 08 */	addi r3, r1, 0x8
/* 80113294 00110374  80 BC 07 28 */	lwz r5, 0x728(r28)
/* 80113298 00110378  38 A5 00 30 */	addi r5, r5, 0x30
/* 8011329C 0011037C  48 00 05 39 */	bl "world_to_local__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFRC5xVec3"
/* 801132A0 00110380  38 7D 00 08 */	addi r3, r29, 0x8
/* 801132A4 00110384  38 81 00 08 */	addi r4, r1, 0x8
/* 801132A8 00110388  4B EF 7F BD */	bl __as__5xVec3FRC5xVec3
/* 801132AC 0011038C  38 7D 00 20 */	addi r3, r29, 0x20
/* 801132B0 00110390  38 9D 00 08 */	addi r4, r29, 0x8
/* 801132B4 00110394  4B EF 7F B1 */	bl __as__5xVec3FRC5xVec3
/* 801132B8 00110398  80 9C 07 28 */	lwz r4, 0x728(r28)
/* 801132BC 0011039C  38 7D 00 14 */	addi r3, r29, 0x14
/* 801132C0 001103A0  38 84 00 D4 */	addi r4, r4, 0xd4
/* 801132C4 001103A4  4B EF 7F A1 */	bl __as__5xVec3FRC5xVec3
/* 801132C8 001103A8  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 801132CC 001103AC  7F A3 EB 78 */	mr r3, r29
/* 801132D0 001103B0  D0 1D 00 68 */	stfs f0, 0x68(r29)
/* 801132D4 001103B4  48 00 03 E5 */	bl "init_camera__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv"
/* 801132D8 001103B8  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801132DC 001103BC  38 81 00 14 */	addi r4, r1, 0x14
/* 801132E0 001103C0  38 63 7A 68 */	addi r3, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801132E4 001103C4  80 63 01 68 */	lwz r3, 0x168(r3)
/* 801132E8 001103C8  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 801132EC 001103CC  4B F1 EB 49 */	bl xMat3x3GetEuler__FPC7xMat3x3P5xVec3
/* 801132F0 001103D0  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 801132F4 001103D4  7F A3 EB 78 */	mr r3, r29
/* 801132F8 001103D8  D0 1D 00 6C */	stfs f0, 0x6c(r29)
/* 801132FC 001103DC  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80113300 001103E0  D0 1D 00 70 */	stfs f0, 0x70(r29)
/* 80113304 001103E4  4B FF D6 51 */	bl "reset_props_collision__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv"
/* 80113308 001103E8  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 8011330C 001103EC  3C 80 80 3C */	lis r4, globals@ha
/* 80113310 001103F0  38 A3 37 88 */	addi r5, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80113314 001103F4  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80113318 001103F8  C0 05 00 24 */	lfs f0, 0x24(r5)
/* 8011331C 001103FC  38 84 05 58 */	addi r4, r4, globals@l
/* 80113320 00110400  38 63 7A 68 */	addi r3, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80113324 00110404  80 A4 07 04 */	lwz r5, 0x704(r4)
/* 80113328 00110408  D0 04 07 74 */	stfs f0, 0x774(r4)
/* 8011332C 0011040C  80 83 00 10 */	lwz r4, 0x10(r3)
/* 80113330 00110410  80 65 00 0C */	lwz r3, 0xc(r5)
/* 80113334 00110414  4B EF 57 11 */	bl xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition
/* 80113338 00110418  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 8011333C 0011041C  38 60 00 00 */	li r3, 0x0
/* 80113340 00110420  4B FF CF 79 */	bl "play_sound__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FQ312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10sound_enumf"
/* 80113344 00110424  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80113348 00110428  38 60 00 01 */	li r3, 0x1
/* 8011334C 0011042C  4B FF CF 6D */	bl "play_sound__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FQ312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10sound_enumf"
/* 80113350 00110430  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80113354 00110434  38 60 00 05 */	li r3, 0x5
/* 80113358 00110438  4B FF CF 61 */	bl "play_sound__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FQ312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10sound_enumf"
/* 8011335C 0011043C  C0 22 9E 8C */	lfs f1, "@969"@sda21(r2)
/* 80113360 00110440  C0 42 9E 88 */	lfs f2, "@961"@sda21(r2)
/* 80113364 00110444  4B F9 48 FD */	bl zMusicSetVolume__Fff
/* 80113368 00110448  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8011336C 0011044C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80113370 00110450  38 A4 A6 88 */	addi r5, r4, "@stringBase0"@l
/* 80113374 00110454  C0 22 9E 90 */	lfs f1, "@987"@sda21(r2)
/* 80113378 00110458  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8011337C 0011045C  7F A6 EB 78 */	mr r6, r29
/* 80113380 00110460  C0 42 9E 84 */	lfs f2, "@960"@sda21(r2)
/* 80113384 00110464  38 65 06 E2 */	addi r3, r5, 0x6e2
/* 80113388 00110468  38 84 00 3C */	addi r4, r4, 0x3c
/* 8011338C 0011046C  38 BE 01 E0 */	addi r5, r30, 0x1e0
/* 80113390 00110470  38 E0 00 00 */	li r7, 0x0
/* 80113394 00110474  4B F1 D2 99 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80113398 00110478  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8011339C 0011047C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801133A0 00110480  38 A4 A6 88 */	addi r5, r4, "@stringBase0"@l
/* 801133A4 00110484  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 801133A8 00110488  80 83 00 10 */	lwz r4, 0x10(r3)
/* 801133AC 0011048C  7F A6 EB 78 */	mr r6, r29
/* 801133B0 00110490  C0 42 9E 98 */	lfs f2, "@1029"@sda21(r2)
/* 801133B4 00110494  38 65 07 01 */	addi r3, r5, 0x701
/* 801133B8 00110498  38 84 00 44 */	addi r4, r4, 0x44
/* 801133BC 0011049C  38 BE 01 E0 */	addi r5, r30, 0x1e0
/* 801133C0 001104A0  38 E0 00 00 */	li r7, 0x0
/* 801133C4 001104A4  4B F1 D2 69 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 801133C8 001104A8  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 801133CC 001104AC  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801133D0 001104B0  38 A4 A6 88 */	addi r5, r4, "@stringBase0"@l
/* 801133D4 001104B4  C0 22 9E 90 */	lfs f1, "@987"@sda21(r2)
/* 801133D8 001104B8  80 83 00 10 */	lwz r4, 0x10(r3)
/* 801133DC 001104BC  7F A6 EB 78 */	mr r6, r29
/* 801133E0 001104C0  C0 42 9E D0 */	lfs f2, "@2185"@sda21(r2)
/* 801133E4 001104C4  38 65 07 24 */	addi r3, r5, 0x724
/* 801133E8 001104C8  38 84 00 40 */	addi r4, r4, 0x40
/* 801133EC 001104CC  38 BE 01 E0 */	addi r5, r30, 0x1e0
/* 801133F0 001104D0  38 E0 00 00 */	li r7, 0x0
/* 801133F4 001104D4  4B F1 D2 39 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 801133F8 001104D8  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 801133FC 001104DC  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80113400 001104E0  38 A4 A6 88 */	addi r5, r4, "@stringBase0"@l
/* 80113404 001104E4  C0 22 9E 8C */	lfs f1, "@969"@sda21(r2)
/* 80113408 001104E8  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8011340C 001104EC  7F A6 EB 78 */	mr r6, r29
/* 80113410 001104F0  C0 42 9E 84 */	lfs f2, "@960"@sda21(r2)
/* 80113414 001104F4  38 65 07 41 */	addi r3, r5, 0x741
/* 80113418 001104F8  38 84 00 48 */	addi r4, r4, 0x48
/* 8011341C 001104FC  38 BE 01 E0 */	addi r5, r30, 0x1e0
/* 80113420 00110500  38 E0 00 00 */	li r7, 0x0
/* 80113424 00110504  4B F1 D2 09 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80113428 00110508  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8011342C 0011050C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80113430 00110510  38 A4 A6 88 */	addi r5, r4, "@stringBase0"@l
/* 80113434 00110514  C0 22 9E 8C */	lfs f1, "@969"@sda21(r2)
/* 80113438 00110518  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8011343C 0011051C  7F A6 EB 78 */	mr r6, r29
/* 80113440 00110520  C0 42 9E 80 */	lfs f2, "@945"@sda21(r2)
/* 80113444 00110524  38 65 07 63 */	addi r3, r5, 0x763
/* 80113448 00110528  38 84 00 4C */	addi r4, r4, 0x4c
/* 8011344C 0011052C  38 BE 01 E0 */	addi r5, r30, 0x1e0
/* 80113450 00110530  38 E0 00 00 */	li r7, 0x0
/* 80113454 00110534  4B F1 D1 D9 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80113458 00110538  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8011345C 0011053C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80113460 00110540  38 A4 A6 88 */	addi r5, r4, "@stringBase0"@l
/* 80113464 00110544  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80113468 00110548  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8011346C 0011054C  7F A6 EB 78 */	mr r6, r29
/* 80113470 00110550  C0 42 9E 88 */	lfs f2, "@961"@sda21(r2)
/* 80113474 00110554  38 65 07 85 */	addi r3, r5, 0x785
/* 80113478 00110558  38 84 00 50 */	addi r4, r4, 0x50
/* 8011347C 0011055C  38 BE 01 E0 */	addi r5, r30, 0x1e0
/* 80113480 00110560  38 E0 00 00 */	li r7, 0x0
/* 80113484 00110564  4B F1 D1 A9 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80113488 00110568  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8011348C 0011056C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80113490 00110570  38 A4 A6 88 */	addi r5, r4, "@stringBase0"@l
/* 80113494 00110574  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80113498 00110578  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8011349C 0011057C  7F A6 EB 78 */	mr r6, r29
/* 801134A0 00110580  C0 42 9E 84 */	lfs f2, "@960"@sda21(r2)
/* 801134A4 00110584  38 65 07 A4 */	addi r3, r5, 0x7a4
/* 801134A8 00110588  38 84 00 54 */	addi r4, r4, 0x54
/* 801134AC 0011058C  38 BE 02 08 */	addi r5, r30, 0x208
/* 801134B0 00110590  38 E0 00 00 */	li r7, 0x0
/* 801134B4 00110594  4B F1 D1 79 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 801134B8 00110598  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 801134BC 0011059C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801134C0 001105A0  38 A4 A6 88 */	addi r5, r4, "@stringBase0"@l
/* 801134C4 001105A4  C0 22 9E 88 */	lfs f1, "@961"@sda21(r2)
/* 801134C8 001105A8  80 83 00 10 */	lwz r4, 0x10(r3)
/* 801134CC 001105AC  7F A6 EB 78 */	mr r6, r29
/* 801134D0 001105B0  C0 42 9F 04 */	lfs f2, "@2336"@sda21(r2)
/* 801134D4 001105B4  38 65 07 C8 */	addi r3, r5, 0x7c8
/* 801134D8 001105B8  38 84 00 58 */	addi r4, r4, 0x58
/* 801134DC 001105BC  38 BE 02 30 */	addi r5, r30, 0x230
/* 801134E0 001105C0  38 E0 00 00 */	li r7, 0x0
/* 801134E4 001105C4  4B F1 D1 49 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 801134E8 001105C8  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 801134EC 001105CC  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801134F0 001105D0  38 A4 A6 88 */	addi r5, r4, "@stringBase0"@l
/* 801134F4 001105D4  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 801134F8 001105D8  80 83 00 10 */	lwz r4, 0x10(r3)
/* 801134FC 001105DC  7F A6 EB 78 */	mr r6, r29
/* 80113500 001105E0  C0 42 9F 08 */	lfs f2, "@2337"@sda21(r2)
/* 80113504 001105E4  38 65 07 E9 */	addi r3, r5, 0x7e9
/* 80113508 001105E8  38 84 00 5C */	addi r4, r4, 0x5c
/* 8011350C 001105EC  38 BE 02 30 */	addi r5, r30, 0x230
/* 80113510 001105F0  38 E0 00 00 */	li r7, 0x0
/* 80113514 001105F4  4B F1 D1 19 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80113518 001105F8  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8011351C 001105FC  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80113520 00110600  38 A4 A6 88 */	addi r5, r4, "@stringBase0"@l
/* 80113524 00110604  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80113528 00110608  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8011352C 0011060C  7F A6 EB 78 */	mr r6, r29
/* 80113530 00110610  C0 42 9E 84 */	lfs f2, "@960"@sda21(r2)
/* 80113534 00110614  38 65 08 07 */	addi r3, r5, 0x807
/* 80113538 00110618  38 84 00 60 */	addi r4, r4, 0x60
/* 8011353C 0011061C  38 BE 02 30 */	addi r5, r30, 0x230
/* 80113540 00110620  38 E0 00 00 */	li r7, 0x0
/* 80113544 00110624  4B F1 D0 E9 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80113548 00110628  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8011354C 0011062C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80113550 00110630  38 A4 A6 88 */	addi r5, r4, "@stringBase0"@l
/* 80113554 00110634  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80113558 00110638  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8011355C 0011063C  7F A6 EB 78 */	mr r6, r29
/* 80113560 00110640  C0 42 9F 08 */	lfs f2, "@2337"@sda21(r2)
/* 80113564 00110644  38 65 08 21 */	addi r3, r5, 0x821
/* 80113568 00110648  38 84 00 64 */	addi r4, r4, 0x64
/* 8011356C 0011064C  38 BE 02 30 */	addi r5, r30, 0x230
/* 80113570 00110650  38 E0 00 00 */	li r7, 0x0
/* 80113574 00110654  4B F1 D0 B9 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80113578 00110658  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8011357C 0011065C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80113580 00110660  38 A4 A6 88 */	addi r5, r4, "@stringBase0"@l
/* 80113584 00110664  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80113588 00110668  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8011358C 0011066C  7F A6 EB 78 */	mr r6, r29
/* 80113590 00110670  C0 42 9E 88 */	lfs f2, "@961"@sda21(r2)
/* 80113594 00110674  38 65 08 45 */	addi r3, r5, 0x845
/* 80113598 00110678  38 84 00 68 */	addi r4, r4, 0x68
/* 8011359C 0011067C  38 BE 02 30 */	addi r5, r30, 0x230
/* 801135A0 00110680  38 E0 00 00 */	li r7, 0x0
/* 801135A4 00110684  4B F1 D0 89 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 801135A8 00110688  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 801135AC 0011068C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801135B0 00110690  38 A4 A6 88 */	addi r5, r4, "@stringBase0"@l
/* 801135B4 00110694  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 801135B8 00110698  80 83 00 10 */	lwz r4, 0x10(r3)
/* 801135BC 0011069C  7F A6 EB 78 */	mr r6, r29
/* 801135C0 001106A0  C0 42 9E D0 */	lfs f2, "@2185"@sda21(r2)
/* 801135C4 001106A4  38 65 08 63 */	addi r3, r5, 0x863
/* 801135C8 001106A8  38 84 00 6C */	addi r4, r4, 0x6c
/* 801135CC 001106AC  38 BE 02 30 */	addi r5, r30, 0x230
/* 801135D0 001106B0  38 E0 00 00 */	li r7, 0x0
/* 801135D4 001106B4  4B F1 D0 59 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 801135D8 001106B8  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 801135DC 001106BC  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801135E0 001106C0  38 A4 A6 88 */	addi r5, r4, "@stringBase0"@l
/* 801135E4 001106C4  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 801135E8 001106C8  80 83 00 10 */	lwz r4, 0x10(r3)
/* 801135EC 001106CC  7F A6 EB 78 */	mr r6, r29
/* 801135F0 001106D0  C0 42 9E 88 */	lfs f2, "@961"@sda21(r2)
/* 801135F4 001106D4  38 65 08 85 */	addi r3, r5, 0x885
/* 801135F8 001106D8  38 84 00 70 */	addi r4, r4, 0x70
/* 801135FC 001106DC  38 BE 02 30 */	addi r5, r30, 0x230
/* 80113600 001106E0  38 E0 00 00 */	li r7, 0x0
/* 80113604 001106E4  4B F1 D0 29 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80113608 001106E8  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8011360C 001106EC  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80113610 001106F0  38 A4 A6 88 */	addi r5, r4, "@stringBase0"@l
/* 80113614 001106F4  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80113618 001106F8  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8011361C 001106FC  7F A6 EB 78 */	mr r6, r29
/* 80113620 00110700  C0 42 9E 88 */	lfs f2, "@961"@sda21(r2)
/* 80113624 00110704  38 65 08 A3 */	addi r3, r5, 0x8a3
/* 80113628 00110708  38 84 00 80 */	addi r4, r4, 0x80
/* 8011362C 0011070C  38 BE 02 58 */	addi r5, r30, 0x258
/* 80113630 00110710  38 E0 00 00 */	li r7, 0x0
/* 80113634 00110714  4B F1 CF F9 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80113638 00110718  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8011363C 0011071C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80113640 00110720  38 A4 A6 88 */	addi r5, r4, "@stringBase0"@l
/* 80113644 00110724  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80113648 00110728  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8011364C 0011072C  7F A6 EB 78 */	mr r6, r29
/* 80113650 00110730  C0 42 9E 88 */	lfs f2, "@961"@sda21(r2)
/* 80113654 00110734  38 65 08 C0 */	addi r3, r5, 0x8c0
/* 80113658 00110738  38 84 00 84 */	addi r4, r4, 0x84
/* 8011365C 0011073C  38 BE 02 58 */	addi r5, r30, 0x258
/* 80113660 00110740  38 E0 00 00 */	li r7, 0x0
/* 80113664 00110744  4B F1 CF C9 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80113668 00110748  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8011366C 0011074C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80113670 00110750  38 A4 A6 88 */	addi r5, r4, "@stringBase0"@l
/* 80113674 00110754  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80113678 00110758  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8011367C 0011075C  7F A6 EB 78 */	mr r6, r29
/* 80113680 00110760  C0 42 9E 88 */	lfs f2, "@961"@sda21(r2)
/* 80113684 00110764  38 65 08 E4 */	addi r3, r5, 0x8e4
/* 80113688 00110768  38 84 00 88 */	addi r4, r4, 0x88
/* 8011368C 0011076C  38 BE 02 58 */	addi r5, r30, 0x258
/* 80113690 00110770  38 E0 00 00 */	li r7, 0x0
/* 80113694 00110774  4B F1 CF 99 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80113698 00110778  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8011369C 0011077C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801136A0 00110780  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 801136A4 00110784  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 801136A8 00110788  83 81 00 20 */	lwz r28, 0x20(r1)
/* 801136AC 0011078C  7C 08 03 A6 */	mtlr r0
/* 801136B0 00110790  38 21 00 30 */	addi r1, r1, 0x30
/* 801136B4 00110794  4E 80 00 20 */	blr
.endfn "start__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::init_camera()
.fn "init_camera__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv", local
/* 801136B8 00110798  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801136BC 0011079C  7C 08 02 A6 */	mflr r0
/* 801136C0 001107A0  90 01 00 44 */	stw r0, 0x44(r1)
/* 801136C4 001107A4  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 801136C8 001107A8  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 801136CC 001107AC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801136D0 001107B0  93 C1 00 28 */	stw r30, 0x28(r1)
/* 801136D4 001107B4  3C 80 80 3C */	lis r4, globals@ha
/* 801136D8 001107B8  7C 7E 1B 78 */	mr r30, r3
/* 801136DC 001107BC  38 84 05 58 */	addi r4, r4, globals@l
/* 801136E0 001107C0  38 61 00 08 */	addi r3, r1, 0x8
/* 801136E4 001107C4  3B E4 00 14 */	addi r31, r4, 0x14
/* 801136E8 001107C8  7F C4 F3 78 */	mr r4, r30
/* 801136EC 001107CC  38 BF 00 30 */	addi r5, r31, 0x30
/* 801136F0 001107D0  48 00 00 E5 */	bl "world_to_local__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFRC5xVec3"
/* 801136F4 001107D4  38 7E 00 38 */	addi r3, r30, 0x38
/* 801136F8 001107D8  38 81 00 08 */	addi r4, r1, 0x8
/* 801136FC 001107DC  4B EF 7B 69 */	bl __as__5xVec3FRC5xVec3
/* 80113700 001107E0  7F E3 FB 78 */	mr r3, r31
/* 80113704 001107E4  38 81 00 14 */	addi r4, r1, 0x14
/* 80113708 001107E8  4B F1 E7 2D */	bl xMat3x3GetEuler__FPC7xMat3x3P5xVec3
/* 8011370C 001107EC  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80113710 001107F0  4B FB 17 81 */	bl icos__Ff
/* 80113714 001107F4  FF E0 08 90 */	fmr f31, f1
/* 80113718 001107F8  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8011371C 001107FC  4B FB 17 31 */	bl isin__Ff
/* 80113720 00110800  EC 1F 00 72 */	fmuls f0, f31, f1
/* 80113724 00110804  D0 1E 00 50 */	stfs f0, 0x50(r30)
/* 80113728 00110808  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8011372C 0011080C  4B FB 17 21 */	bl isin__Ff
/* 80113730 00110810  FC 00 08 50 */	fneg f0, f1
/* 80113734 00110814  D0 1E 00 54 */	stfs f0, 0x54(r30)
/* 80113738 00110818  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8011373C 0011081C  4B FB 17 55 */	bl icos__Ff
/* 80113740 00110820  EC 1F 00 72 */	fmuls f0, f31, f1
/* 80113744 00110824  D0 1E 00 58 */	stfs f0, 0x58(r30)
/* 80113748 00110828  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8011374C 0011082C  C0 1E 01 68 */	lfs f0, 0x168(r30)
/* 80113750 00110830  EC 01 00 28 */	fsubs f0, f1, f0
/* 80113754 00110834  FC 00 00 50 */	fneg f0, f0
/* 80113758 00110838  D0 1E 00 94 */	stfs f0, 0x94(r30)
/* 8011375C 0011083C  C0 22 9F 0C */	lfs f1, "@2341"@sda21(r2)
/* 80113760 00110840  C0 1E 00 94 */	lfs f0, 0x94(r30)
/* 80113764 00110844  EC 21 00 2A */	fadds f1, f1, f0
/* 80113768 00110848  4B EF B0 8D */	bl xrmod__Ff
/* 8011376C 0011084C  D0 3E 00 94 */	stfs f1, 0x94(r30)
/* 80113770 00110850  C0 3E 00 94 */	lfs f1, 0x94(r30)
/* 80113774 00110854  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80113778 00110858  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011377C 0011085C  40 80 00 10 */	bge .L_8011378C
/* 80113780 00110860  C0 02 9F 10 */	lfs f0, "@2342"@sda21(r2)
/* 80113784 00110864  EC 01 00 2A */	fadds f0, f1, f0
/* 80113788 00110868  D0 1E 00 94 */	stfs f0, 0x94(r30)
.L_8011378C:
/* 8011378C 0011086C  C0 3E 00 94 */	lfs f1, 0x94(r30)
/* 80113790 00110870  38 7E 00 44 */	addi r3, r30, 0x44
/* 80113794 00110874  C0 02 9F 0C */	lfs f0, "@2341"@sda21(r2)
/* 80113798 00110878  EC 01 00 28 */	fsubs f0, f1, f0
/* 8011379C 0011087C  D0 1E 00 94 */	stfs f0, 0x94(r30)
/* 801137A0 00110880  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 801137A4 00110884  4B F0 90 D5 */	bl __as__5xVec3Ff
/* 801137A8 00110888  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 801137AC 0011088C  38 7E 00 5C */	addi r3, r30, 0x5c
/* 801137B0 00110890  4B F0 90 C9 */	bl __as__5xVec3Ff
/* 801137B4 00110894  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 801137B8 00110898  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801137BC 0011089C  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 801137C0 001108A0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801137C4 001108A4  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 801137C8 001108A8  7C 08 03 A6 */	mtlr r0
/* 801137CC 001108AC  38 21 00 40 */	addi r1, r1, 0x40
/* 801137D0 001108B0  4E 80 00 20 */	blr
.endfn "init_camera__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::world_to_local(const xVec3&) const
.fn "world_to_local__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFRC5xVec3", local
/* 801137D4 001108B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801137D8 001108B8  7C 08 02 A6 */	mflr r0
/* 801137DC 001108BC  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801137E0 001108C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801137E4 001108C4  38 C4 7A 68 */	addi r6, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801137E8 001108C8  7C A4 2B 78 */	mr r4, r5
/* 801137EC 001108CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801137F0 001108D0  7C 7F 1B 78 */	mr r31, r3
/* 801137F4 001108D4  38 A6 01 74 */	addi r5, r6, 0x174
/* 801137F8 001108D8  4B EF 79 D5 */	bl __mi__5xVec3CFRC5xVec3
/* 801137FC 001108DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80113800 001108E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80113804 001108E4  7C 08 03 A6 */	mtlr r0
/* 80113808 001108E8  38 21 00 10 */	addi r1, r1, 0x10
/* 8011380C 001108EC  4E 80 00 20 */	blr
.endfn "world_to_local__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFRC5xVec3"

# bungee_state::hook_asset::operator=(const bungee_state::hook_asset&)
.fn __as__Q212bungee_state10hook_assetFRCQ212bungee_state10hook_asset, weak
/* 80113810 001108F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80113814 001108F4  7C 08 02 A6 */	mflr r0
/* 80113818 001108F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011381C 001108FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80113820 00110900  7C 9F 23 78 */	mr r31, r4
/* 80113824 00110904  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80113828 00110908  7C 7E 1B 78 */	mr r30, r3
/* 8011382C 0011090C  4B FE 0F E5 */	bl __as__9xDynAssetFRC9xDynAsset
/* 80113830 00110910  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 80113834 00110914  7F C3 F3 78 */	mr r3, r30
/* 80113838 00110918  80 9F 00 14 */	lwz r4, 0x14(r31)
/* 8011383C 0011091C  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80113840 00110920  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 80113844 00110924  90 9E 00 14 */	stw r4, 0x14(r30)
/* 80113848 00110928  80 9F 00 1C */	lwz r4, 0x1c(r31)
/* 8011384C 0011092C  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80113850 00110930  80 1F 00 20 */	lwz r0, 0x20(r31)
/* 80113854 00110934  90 9E 00 1C */	stw r4, 0x1c(r30)
/* 80113858 00110938  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 8011385C 0011093C  90 1E 00 20 */	stw r0, 0x20(r30)
/* 80113860 00110940  80 1F 00 28 */	lwz r0, 0x28(r31)
/* 80113864 00110944  90 9E 00 24 */	stw r4, 0x24(r30)
/* 80113868 00110948  80 9F 00 2C */	lwz r4, 0x2c(r31)
/* 8011386C 0011094C  90 1E 00 28 */	stw r0, 0x28(r30)
/* 80113870 00110950  80 1F 00 30 */	lwz r0, 0x30(r31)
/* 80113874 00110954  90 9E 00 2C */	stw r4, 0x2c(r30)
/* 80113878 00110958  80 9F 00 34 */	lwz r4, 0x34(r31)
/* 8011387C 0011095C  90 1E 00 30 */	stw r0, 0x30(r30)
/* 80113880 00110960  80 1F 00 38 */	lwz r0, 0x38(r31)
/* 80113884 00110964  90 9E 00 34 */	stw r4, 0x34(r30)
/* 80113888 00110968  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 8011388C 0011096C  90 1E 00 38 */	stw r0, 0x38(r30)
/* 80113890 00110970  80 1F 00 40 */	lwz r0, 0x40(r31)
/* 80113894 00110974  90 9E 00 3C */	stw r4, 0x3c(r30)
/* 80113898 00110978  80 9F 00 44 */	lwz r4, 0x44(r31)
/* 8011389C 0011097C  90 1E 00 40 */	stw r0, 0x40(r30)
/* 801138A0 00110980  80 1F 00 48 */	lwz r0, 0x48(r31)
/* 801138A4 00110984  90 9E 00 44 */	stw r4, 0x44(r30)
/* 801138A8 00110988  80 9F 00 4C */	lwz r4, 0x4c(r31)
/* 801138AC 0011098C  90 1E 00 48 */	stw r0, 0x48(r30)
/* 801138B0 00110990  80 1F 00 50 */	lwz r0, 0x50(r31)
/* 801138B4 00110994  90 9E 00 4C */	stw r4, 0x4c(r30)
/* 801138B8 00110998  80 9F 00 54 */	lwz r4, 0x54(r31)
/* 801138BC 0011099C  90 1E 00 50 */	stw r0, 0x50(r30)
/* 801138C0 001109A0  80 1F 00 58 */	lwz r0, 0x58(r31)
/* 801138C4 001109A4  90 9E 00 54 */	stw r4, 0x54(r30)
/* 801138C8 001109A8  80 9F 00 5C */	lwz r4, 0x5c(r31)
/* 801138CC 001109AC  90 1E 00 58 */	stw r0, 0x58(r30)
/* 801138D0 001109B0  80 1F 00 60 */	lwz r0, 0x60(r31)
/* 801138D4 001109B4  90 9E 00 5C */	stw r4, 0x5c(r30)
/* 801138D8 001109B8  80 9F 00 64 */	lwz r4, 0x64(r31)
/* 801138DC 001109BC  90 1E 00 60 */	stw r0, 0x60(r30)
/* 801138E0 001109C0  80 1F 00 68 */	lwz r0, 0x68(r31)
/* 801138E4 001109C4  90 9E 00 64 */	stw r4, 0x64(r30)
/* 801138E8 001109C8  80 9F 00 6C */	lwz r4, 0x6c(r31)
/* 801138EC 001109CC  90 1E 00 68 */	stw r0, 0x68(r30)
/* 801138F0 001109D0  80 1F 00 70 */	lwz r0, 0x70(r31)
/* 801138F4 001109D4  90 9E 00 6C */	stw r4, 0x6c(r30)
/* 801138F8 001109D8  80 9F 00 74 */	lwz r4, 0x74(r31)
/* 801138FC 001109DC  90 1E 00 70 */	stw r0, 0x70(r30)
/* 80113900 001109E0  80 1F 00 78 */	lwz r0, 0x78(r31)
/* 80113904 001109E4  90 9E 00 74 */	stw r4, 0x74(r30)
/* 80113908 001109E8  80 9F 00 7C */	lwz r4, 0x7c(r31)
/* 8011390C 001109EC  90 1E 00 78 */	stw r0, 0x78(r30)
/* 80113910 001109F0  80 1F 00 80 */	lwz r0, 0x80(r31)
/* 80113914 001109F4  90 9E 00 7C */	stw r4, 0x7c(r30)
/* 80113918 001109F8  80 9F 00 84 */	lwz r4, 0x84(r31)
/* 8011391C 001109FC  90 1E 00 80 */	stw r0, 0x80(r30)
/* 80113920 00110A00  80 1F 00 88 */	lwz r0, 0x88(r31)
/* 80113924 00110A04  90 9E 00 84 */	stw r4, 0x84(r30)
/* 80113928 00110A08  90 1E 00 88 */	stw r0, 0x88(r30)
/* 8011392C 00110A0C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80113930 00110A10  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80113934 00110A14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80113938 00110A18  7C 08 03 A6 */	mtlr r0
/* 8011393C 00110A1C  38 21 00 10 */	addi r1, r1, 0x10
/* 80113940 00110A20  4E 80 00 20 */	blr
.endfn __as__Q212bungee_state10hook_assetFRCQ212bungee_state10hook_asset

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::allow_dive(bool)
.fn "allow_dive__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFb", local
/* 80113944 00110A24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80113948 00110A28  7C 08 02 A6 */	mflr r0
/* 8011394C 00110A2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80113950 00110A30  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80113954 00110A34  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80113958 00110A38  7C 7E 1B 78 */	mr r30, r3
/* 8011395C 00110A3C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80113960 00110A40  38 63 A6 88 */	addi r3, r3, "@stringBase0"@l
/* 80113964 00110A44  98 9E 00 B9 */	stb r4, 0xb9(r30)
/* 80113968 00110A48  38 63 09 05 */	addi r3, r3, 0x905
/* 8011396C 00110A4C  4B F3 88 A9 */	bl xStrHash__FPCc
/* 80113970 00110A50  4B FA 10 CD */	bl zSceneFindObject__FUi
/* 80113974 00110A54  7C 7F 1B 79 */	mr. r31, r3
/* 80113978 00110A58  41 82 00 5C */	beq .L_801139D4
/* 8011397C 00110A5C  88 1F 00 04 */	lbz r0, 0x4(r31)
/* 80113980 00110A60  28 00 00 33 */	cmplwi r0, 0x33
/* 80113984 00110A64  41 82 00 08 */	beq .L_8011398C
/* 80113988 00110A68  48 00 00 4C */	b .L_801139D4
.L_8011398C:
/* 8011398C 00110A6C  88 1E 00 B9 */	lbz r0, 0xb9(r30)
/* 80113990 00110A70  28 00 00 00 */	cmplwi r0, 0x0
/* 80113994 00110A74  41 82 00 24 */	beq .L_801139B8
/* 80113998 00110A78  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8011399C 00110A7C  38 63 A6 88 */	addi r3, r3, "@stringBase0"@l
/* 801139A0 00110A80  38 63 09 19 */	addi r3, r3, 0x919
/* 801139A4 00110A84  4B F3 88 71 */	bl xStrHash__FPCc
/* 801139A8 00110A88  7C 64 1B 78 */	mr r4, r3
/* 801139AC 00110A8C  7F E3 FB 78 */	mr r3, r31
/* 801139B0 00110A90  48 02 0C E5 */	bl set_text__8ztextboxFUi
/* 801139B4 00110A94  48 00 00 20 */	b .L_801139D4
.L_801139B8:
/* 801139B8 00110A98  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801139BC 00110A9C  38 63 A6 88 */	addi r3, r3, "@stringBase0"@l
/* 801139C0 00110AA0  38 63 09 2A */	addi r3, r3, 0x92a
/* 801139C4 00110AA4  4B F3 88 51 */	bl xStrHash__FPCc
/* 801139C8 00110AA8  7C 64 1B 78 */	mr r4, r3
/* 801139CC 00110AAC  7F E3 FB 78 */	mr r3, r31
/* 801139D0 00110AB0  48 02 0C C5 */	bl set_text__8ztextboxFUi
.L_801139D4:
/* 801139D4 00110AB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801139D8 00110AB8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801139DC 00110ABC  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 801139E0 00110AC0  7C 08 03 A6 */	mtlr r0
/* 801139E4 00110AC4  38 21 00 10 */	addi r1, r1, 0x10
/* 801139E8 00110AC8  4E 80 00 20 */	blr
.endfn "allow_dive__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFb"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::show_help()
.fn "show_help__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv", local
/* 801139EC 00110ACC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801139F0 00110AD0  7C 08 02 A6 */	mflr r0
/* 801139F4 00110AD4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801139F8 00110AD8  38 63 A6 88 */	addi r3, r3, "@stringBase0"@l
/* 801139FC 00110ADC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80113A00 00110AE0  38 63 09 05 */	addi r3, r3, 0x905
/* 80113A04 00110AE4  4B F3 88 11 */	bl xStrHash__FPCc
/* 80113A08 00110AE8  4B FA 10 35 */	bl zSceneFindObject__FUi
/* 80113A0C 00110AEC  28 03 00 00 */	cmplwi r3, 0x0
/* 80113A10 00110AF0  41 82 00 18 */	beq .L_80113A28
/* 80113A14 00110AF4  88 03 00 04 */	lbz r0, 0x4(r3)
/* 80113A18 00110AF8  28 00 00 33 */	cmplwi r0, 0x33
/* 80113A1C 00110AFC  41 82 00 08 */	beq .L_80113A24
/* 80113A20 00110B00  48 00 00 08 */	b .L_80113A28
.L_80113A24:
/* 80113A24 00110B04  48 02 0B 7D */	bl activate__8ztextboxFv
.L_80113A28:
/* 80113A28 00110B08  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80113A2C 00110B0C  7C 08 03 A6 */	mtlr r0
/* 80113A30 00110B10  38 21 00 10 */	addi r1, r1, 0x10
/* 80113A34 00110B14  4E 80 00 20 */	blr
.endfn "show_help__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::stop()
.fn "stop__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv", local
/* 80113A38 00110B18  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80113A3C 00110B1C  7C 08 02 A6 */	mflr r0
/* 80113A40 00110B20  90 01 00 24 */	stw r0, 0x24(r1)
/* 80113A44 00110B24  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80113A48 00110B28  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80113A4C 00110B2C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80113A50 00110B30  7C 7D 1B 78 */	mr r29, r3
/* 80113A54 00110B34  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80113A58 00110B38  4B FB BA F5 */	bl iCameraSetBlurriness__Ff
/* 80113A5C 00110B3C  7F A3 EB 78 */	mr r3, r29
/* 80113A60 00110B40  48 00 01 19 */	bl "hide_help__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv"
/* 80113A64 00110B44  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80113A68 00110B48  38 60 20 00 */	li r3, 0x2000
/* 80113A6C 00110B4C  3B E4 7A 68 */	addi r31, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80113A70 00110B50  80 1F 00 00 */	lwz r0, 0x0(r31)
/* 80113A74 00110B54  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 80113A78 00110B58  54 00 07 76 */	rlwinm r0, r0, 0, 29, 27
/* 80113A7C 00110B5C  90 1F 00 00 */	stw r0, 0x0(r31)
/* 80113A80 00110B60  80 84 00 10 */	lwz r4, 0x10(r4)
/* 80113A84 00110B64  C0 04 00 2C */	lfs f0, 0x2c(r4)
/* 80113A88 00110B68  D0 1F 01 94 */	stfs f0, 0x194(r31)
/* 80113A8C 00110B6C  4B F5 2A CD */	bl zEntPlayerControlOff__F13zControlOwner
/* 80113A90 00110B70  4B FF CA 49 */	bl "hide_models__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"
/* 80113A94 00110B74  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80113A98 00110B78  38 83 7A 68 */	addi r4, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80113A9C 00110B7C  80 64 01 68 */	lwz r3, 0x168(r4)
/* 80113AA0 00110B80  38 84 01 74 */	addi r4, r4, 0x174
/* 80113AA4 00110B84  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80113AA8 00110B88  38 63 00 30 */	addi r3, r3, 0x30
/* 80113AAC 00110B8C  4B EF 77 B9 */	bl __as__5xVec3FRC5xVec3
/* 80113AB0 00110B90  3C 80 80 3C */	lis r4, globals@ha
/* 80113AB4 00110B94  3B C4 05 58 */	addi r30, r4, globals@l
/* 80113AB8 00110B98  80 BE 07 28 */	lwz r5, 0x728(r30)
/* 80113ABC 00110B9C  7C 64 1B 78 */	mr r4, r3
/* 80113AC0 00110BA0  38 65 00 30 */	addi r3, r5, 0x30
/* 80113AC4 00110BA4  4B EF 77 A1 */	bl __as__5xVec3FRC5xVec3
/* 80113AC8 00110BA8  80 7E 07 28 */	lwz r3, 0x728(r30)
/* 80113ACC 00110BAC  38 9D 00 9C */	addi r4, r29, 0x9c
/* 80113AD0 00110BB0  38 63 00 D4 */	addi r3, r3, 0xd4
/* 80113AD4 00110BB4  4B EF 77 91 */	bl __as__5xVec3FRC5xVec3
/* 80113AD8 00110BB8  3C 60 80 3C */	lis r3, globals@ha
/* 80113ADC 00110BBC  C0 0D 81 D8 */	lfs f0, default_player_radius@sda21(r13)
/* 80113AE0 00110BC0  38 83 05 58 */	addi r4, r3, globals@l
/* 80113AE4 00110BC4  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80113AE8 00110BC8  D0 04 07 74 */	stfs f0, 0x774(r4)
/* 80113AEC 00110BCC  38 63 7A 68 */	addi r3, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80113AF0 00110BD0  80 A4 07 04 */	lwz r5, 0x704(r4)
/* 80113AF4 00110BD4  80 83 00 1C */	lwz r4, 0x1c(r3)
/* 80113AF8 00110BD8  80 65 00 0C */	lwz r3, 0xc(r5)
/* 80113AFC 00110BDC  4B EF 4F 49 */	bl xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition
/* 80113B00 00110BE0  38 60 00 05 */	li r3, 0x5
/* 80113B04 00110BE4  4B FF C8 29 */	bl "stop_sound__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fi"
/* 80113B08 00110BE8  C0 22 9E 88 */	lfs f1, "@961"@sda21(r2)
/* 80113B0C 00110BEC  FC 40 08 90 */	fmr f2, f1
/* 80113B10 00110BF0  4B F9 41 51 */	bl zMusicSetVolume__Fff
/* 80113B14 00110BF4  38 60 00 04 */	li r3, 0x4
/* 80113B18 00110BF8  4B F3 E5 F9 */	bl zCameraEnableTracking__F17camera_owner_enum
/* 80113B1C 00110BFC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80113B20 00110C00  38 63 A6 88 */	addi r3, r3, "@stringBase0"@l
/* 80113B24 00110C04  38 63 09 42 */	addi r3, r3, 0x942
/* 80113B28 00110C08  4B F0 23 79 */	bl xDebugRemoveTweak__FPCc
/* 80113B2C 00110C0C  38 60 00 21 */	li r3, 0x21
/* 80113B30 00110C10  4B FF CD CD */	bl "trigger__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FUi"
/* 80113B34 00110C14  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 80113B38 00110C18  80 63 00 14 */	lwz r3, 0x14(r3)
/* 80113B3C 00110C1C  28 03 00 00 */	cmplwi r3, 0x0
/* 80113B40 00110C20  41 82 00 1C */	beq .L_80113B5C
/* 80113B44 00110C24  88 03 00 22 */	lbz r0, 0x22(r3)
/* 80113B48 00110C28  70 00 00 EF */	andi. r0, r0, 0xef
/* 80113B4C 00110C2C  98 03 00 22 */	stb r0, 0x22(r3)
/* 80113B50 00110C30  88 03 00 23 */	lbz r0, 0x23(r3)
/* 80113B54 00110C34  70 00 00 EF */	andi. r0, r0, 0xef
/* 80113B58 00110C38  98 03 00 23 */	stb r0, 0x23(r3)
.L_80113B5C:
/* 80113B5C 00110C3C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80113B60 00110C40  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80113B64 00110C44  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80113B68 00110C48  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80113B6C 00110C4C  7C 08 03 A6 */	mtlr r0
/* 80113B70 00110C50  38 21 00 20 */	addi r1, r1, 0x20
/* 80113B74 00110C54  4E 80 00 20 */	blr
.endfn "stop__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::hide_help()
.fn "hide_help__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv", local
/* 80113B78 00110C58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80113B7C 00110C5C  7C 08 02 A6 */	mflr r0
/* 80113B80 00110C60  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80113B84 00110C64  38 63 A6 88 */	addi r3, r3, "@stringBase0"@l
/* 80113B88 00110C68  90 01 00 14 */	stw r0, 0x14(r1)
/* 80113B8C 00110C6C  38 63 09 05 */	addi r3, r3, 0x905
/* 80113B90 00110C70  4B F3 86 85 */	bl xStrHash__FPCc
/* 80113B94 00110C74  4B FA 0E A9 */	bl zSceneFindObject__FUi
/* 80113B98 00110C78  28 03 00 00 */	cmplwi r3, 0x0
/* 80113B9C 00110C7C  41 82 00 18 */	beq .L_80113BB4
/* 80113BA0 00110C80  88 03 00 04 */	lbz r0, 0x4(r3)
/* 80113BA4 00110C84  28 00 00 33 */	cmplwi r0, 0x33
/* 80113BA8 00110C88  41 82 00 08 */	beq .L_80113BB0
/* 80113BAC 00110C8C  48 00 00 08 */	b .L_80113BB4
.L_80113BB0:
/* 80113BB0 00110C90  48 02 0A 3D */	bl deactivate__8ztextboxFv
.L_80113BB4:
/* 80113BB4 00110C94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80113BB8 00110C98  7C 08 03 A6 */	mtlr r0
/* 80113BBC 00110C9C  38 21 00 10 */	addi r1, r1, 0x10
/* 80113BC0 00110CA0  4E 80 00 20 */	blr
.endfn "hide_help__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::update(xScene&, float&)
.fn "update__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFR6xSceneRf", local
/* 80113BC4 00110CA4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80113BC8 00110CA8  7C 08 02 A6 */	mflr r0
/* 80113BCC 00110CAC  3C C0 80 3C */	lis r6, globals@ha
/* 80113BD0 00110CB0  90 01 00 34 */	stw r0, 0x34(r1)
/* 80113BD4 00110CB4  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 80113BD8 00110CB8  3B 66 05 58 */	addi r27, r6, globals@l
/* 80113BDC 00110CBC  7C 7D 1B 78 */	mr r29, r3
/* 80113BE0 00110CC0  7C 9E 23 78 */	mr r30, r4
/* 80113BE4 00110CC4  7C BF 2B 78 */	mr r31, r5
/* 80113BE8 00110CC8  80 7B 03 1C */	lwz r3, 0x31c(r27)
/* 80113BEC 00110CCC  80 03 00 30 */	lwz r0, 0x30(r3)
/* 80113BF0 00110CD0  54 00 03 19 */	rlwinm. r0, r0, 0, 12, 12
/* 80113BF4 00110CD4  41 82 00 30 */	beq .L_80113C24
/* 80113BF8 00110CD8  88 1D 00 AC */	lbz r0, 0xac(r29)
/* 80113BFC 00110CDC  28 00 00 00 */	cmplwi r0, 0x0
/* 80113C00 00110CE0  40 82 00 24 */	bne .L_80113C24
/* 80113C04 00110CE4  88 1D 00 98 */	lbz r0, 0x98(r29)
/* 80113C08 00110CE8  28 00 00 00 */	cmplwi r0, 0x0
/* 80113C0C 00110CEC  40 82 00 18 */	bne .L_80113C24
/* 80113C10 00110CF0  4B FF CB D5 */	bl "find_drop_off__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"
/* 80113C14 00110CF4  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80113C18 00110CF8  41 82 00 0C */	beq .L_80113C24
/* 80113C1C 00110CFC  7F A3 EB 78 */	mr r3, r29
/* 80113C20 00110D00  48 00 22 B1 */	bl "start_detaching__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv"
.L_80113C24:
/* 80113C24 00110D04  88 1D 00 98 */	lbz r0, 0x98(r29)
/* 80113C28 00110D08  28 00 00 00 */	cmplwi r0, 0x0
/* 80113C2C 00110D0C  41 82 00 18 */	beq .L_80113C44
/* 80113C30 00110D10  7F A3 EB 78 */	mr r3, r29
/* 80113C34 00110D14  7F C4 F3 78 */	mr r4, r30
/* 80113C38 00110D18  7F E5 FB 78 */	mr r5, r31
/* 80113C3C 00110D1C  48 00 1F D1 */	bl "detach_update__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFR6xSceneRf"
/* 80113C40 00110D20  48 00 01 CC */	b .L_80113E0C
.L_80113C44:
/* 80113C44 00110D24  3C 80 80 3C */	lis r4, globals@ha
/* 80113C48 00110D28  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80113C4C 00110D2C  3B 84 05 58 */	addi r28, r4, globals@l
/* 80113C50 00110D30  C0 3F 00 00 */	lfs f1, 0x0(r31)
/* 80113C54 00110D34  C0 1C 17 08 */	lfs f0, 0x1708(r28)
/* 80113C58 00110D38  38 83 7A 68 */	addi r4, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80113C5C 00110D3C  38 7D 00 2C */	addi r3, r29, 0x2c
/* 80113C60 00110D40  EC 00 08 28 */	fsubs f0, f0, f1
/* 80113C64 00110D44  38 84 01 74 */	addi r4, r4, 0x174
/* 80113C68 00110D48  D0 1C 17 08 */	stfs f0, 0x1708(r28)
/* 80113C6C 00110D4C  C0 1D 00 B0 */	lfs f0, 0xb0(r29)
/* 80113C70 00110D50  EC 00 08 28 */	fsubs f0, f0, f1
/* 80113C74 00110D54  D0 1D 00 B0 */	stfs f0, 0xb0(r29)
/* 80113C78 00110D58  4B EF 75 ED */	bl __as__5xVec3FRC5xVec3
/* 80113C7C 00110D5C  4B FF CA F1 */	bl "update_hook_loc__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"
/* 80113C80 00110D60  C0 02 9E 88 */	lfs f0, "@961"@sda21(r2)
/* 80113C84 00110D64  D0 1D 00 84 */	stfs f0, 0x84(r29)
/* 80113C88 00110D68  C0 3D 00 B0 */	lfs f1, 0xb0(r29)
/* 80113C8C 00110D6C  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80113C90 00110D70  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80113C94 00110D74  40 81 00 2C */	ble .L_80113CC0
/* 80113C98 00110D78  C0 5D 00 B4 */	lfs f2, 0xb4(r29)
/* 80113C9C 00110D7C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80113CA0 00110D80  4C 40 13 82 */	cror eq, lt, eq
/* 80113CA4 00110D84  40 82 00 10 */	bne .L_80113CB4
/* 80113CA8 00110D88  C0 02 9E 90 */	lfs f0, "@987"@sda21(r2)
/* 80113CAC 00110D8C  D0 1D 00 84 */	stfs f0, 0x84(r29)
/* 80113CB0 00110D90  48 00 00 10 */	b .L_80113CC0
.L_80113CB4:
/* 80113CB4 00110D94  EC 02 08 28 */	fsubs f0, f2, f1
/* 80113CB8 00110D98  EC 00 10 24 */	fdivs f0, f0, f2
/* 80113CBC 00110D9C  D0 1D 00 84 */	stfs f0, 0x84(r29)
.L_80113CC0:
/* 80113CC0 00110DA0  88 1D 00 AC */	lbz r0, 0xac(r29)
/* 80113CC4 00110DA4  28 00 00 00 */	cmplwi r0, 0x0
/* 80113CC8 00110DA8  41 82 00 20 */	beq .L_80113CE8
/* 80113CCC 00110DAC  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80113CD0 00110DB0  38 7D 00 74 */	addi r3, r29, 0x74
/* 80113CD4 00110DB4  4B EF AC 8D */	bl __as__5xVec2Ff
/* 80113CD8 00110DB8  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80113CDC 00110DBC  D0 1D 00 7C */	stfs f0, 0x7c(r29)
/* 80113CE0 00110DC0  D0 1D 00 80 */	stfs f0, 0x80(r29)
/* 80113CE4 00110DC4  48 00 00 50 */	b .L_80113D34
.L_80113CE8:
/* 80113CE8 00110DC8  80 7B 03 1C */	lwz r3, 0x31c(r27)
/* 80113CEC 00110DCC  C0 3D 00 84 */	lfs f1, 0x84(r29)
/* 80113CF0 00110DD0  C0 03 01 28 */	lfs f0, 0x128(r3)
/* 80113CF4 00110DD4  EC 01 00 32 */	fmuls f0, f1, f0
/* 80113CF8 00110DD8  D0 1D 00 80 */	stfs f0, 0x80(r29)
/* 80113CFC 00110DDC  C0 23 01 2C */	lfs f1, 0x12c(r3)
/* 80113D00 00110DE0  C0 1D 01 68 */	lfs f0, 0x168(r29)
/* 80113D04 00110DE4  EC 01 00 28 */	fsubs f0, f1, f0
/* 80113D08 00110DE8  D0 1D 00 7C */	stfs f0, 0x7c(r29)
/* 80113D0C 00110DEC  C0 3D 00 7C */	lfs f1, 0x7c(r29)
/* 80113D10 00110DF0  4B FB 11 3D */	bl isin__Ff
/* 80113D14 00110DF4  C0 1D 00 80 */	lfs f0, 0x80(r29)
/* 80113D18 00110DF8  EC 00 00 72 */	fmuls f0, f0, f1
/* 80113D1C 00110DFC  D0 1D 00 78 */	stfs f0, 0x78(r29)
/* 80113D20 00110E00  C0 3D 00 7C */	lfs f1, 0x7c(r29)
/* 80113D24 00110E04  4B FB 11 6D */	bl icos__Ff
/* 80113D28 00110E08  C0 1D 00 80 */	lfs f0, 0x80(r29)
/* 80113D2C 00110E0C  EC 00 00 72 */	fmuls f0, f0, f1
/* 80113D30 00110E10  D0 1D 00 74 */	stfs f0, 0x74(r29)
.L_80113D34:
/* 80113D34 00110E14  38 7D 00 20 */	addi r3, r29, 0x20
/* 80113D38 00110E18  38 9D 00 08 */	addi r4, r29, 0x8
/* 80113D3C 00110E1C  4B EF 75 29 */	bl __as__5xVec3FRC5xVec3
/* 80113D40 00110E20  C0 3F 00 00 */	lfs f1, 0x0(r31)
/* 80113D44 00110E24  7F A3 EB 78 */	mr r3, r29
/* 80113D48 00110E28  48 00 18 7D */	bl "update_movement__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf"
/* 80113D4C 00110E2C  C0 3F 00 00 */	lfs f1, 0x0(r31)
/* 80113D50 00110E30  7F A3 EB 78 */	mr r3, r29
/* 80113D54 00110E34  48 00 15 31 */	bl "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf"
/* 80113D58 00110E38  C0 3F 00 00 */	lfs f1, 0x0(r31)
/* 80113D5C 00110E3C  7F A3 EB 78 */	mr r3, r29
/* 80113D60 00110E40  48 00 0E 95 */	bl "update_camera__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf"
/* 80113D64 00110E44  3C 60 80 3C */	lis r3, globals@ha
/* 80113D68 00110E48  38 63 05 58 */	addi r3, r3, globals@l
/* 80113D6C 00110E4C  38 63 07 44 */	addi r3, r3, 0x744
/* 80113D70 00110E50  7C 64 1B 78 */	mr r4, r3
/* 80113D74 00110E54  4B EF 71 C9 */	bl xQuickCullForBound__FP7xQCDataPC6xBound
/* 80113D78 00110E58  C0 3F 00 00 */	lfs f1, 0x0(r31)
/* 80113D7C 00110E5C  7F A3 EB 78 */	mr r3, r29
/* 80113D80 00110E60  7F C4 F3 78 */	mr r4, r30
/* 80113D84 00110E64  48 00 04 1D */	bl "update_collision__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFR6xScenef"
/* 80113D88 00110E68  7F A3 EB 78 */	mr r3, r29
/* 80113D8C 00110E6C  38 80 00 00 */	li r4, 0x0
/* 80113D90 00110E70  48 00 01 DD */	bl "check_damage__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFb"
/* 80113D94 00110E74  7F A4 EB 78 */	mr r4, r29
/* 80113D98 00110E78  38 61 00 08 */	addi r3, r1, 0x8
/* 80113D9C 00110E7C  48 00 01 25 */	bl "player_bound__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFv"
/* 80113DA0 00110E80  3C 60 80 3C */	lis r3, globals@ha
/* 80113DA4 00110E84  38 81 00 08 */	addi r4, r1, 0x8
/* 80113DA8 00110E88  38 63 05 58 */	addi r3, r3, globals@l
/* 80113DAC 00110E8C  38 63 07 68 */	addi r3, r3, 0x768
/* 80113DB0 00110E90  4B EF 74 D1 */	bl __as__7xSphereFRC7xSphere
/* 80113DB4 00110E94  C0 3F 00 00 */	lfs f1, 0x0(r31)
/* 80113DB8 00110E98  7F A3 EB 78 */	mr r3, r29
/* 80113DBC 00110E9C  48 00 00 BD */	bl "update_sound__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf"
/* 80113DC0 00110EA0  C0 3F 00 00 */	lfs f1, 0x0(r31)
/* 80113DC4 00110EA4  7F A3 EB 78 */	mr r3, r29
/* 80113DC8 00110EA8  48 00 00 59 */	bl "update_blur__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf"
/* 80113DCC 00110EAC  C0 3F 00 00 */	lfs f1, 0x0(r31)
/* 80113DD0 00110EB0  7F C3 F3 78 */	mr r3, r30
/* 80113DD4 00110EB4  4B F4 F4 19 */	bl zEntPickup_CheckAllPickupsAgainstPlayer__FP6xScenef
/* 80113DD8 00110EB8  88 1D 00 AC */	lbz r0, 0xac(r29)
/* 80113DDC 00110EBC  28 00 00 00 */	cmplwi r0, 0x0
/* 80113DE0 00110EC0  41 82 00 28 */	beq .L_80113E08
/* 80113DE4 00110EC4  C0 3C 17 08 */	lfs f1, 0x1708(r28)
/* 80113DE8 00110EC8  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80113DEC 00110ECC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80113DF0 00110ED0  4C 40 13 82 */	cror eq, lt, eq
/* 80113DF4 00110ED4  40 82 00 14 */	bne .L_80113E08
/* 80113DF8 00110ED8  38 60 00 04 */	li r3, 0x4
/* 80113DFC 00110EDC  4B F3 E3 15 */	bl zCameraEnableTracking__F17camera_owner_enum
/* 80113E00 00110EE0  38 60 FF FF */	li r3, -0x1
/* 80113E04 00110EE4  48 00 00 08 */	b .L_80113E0C
.L_80113E08:
/* 80113E08 00110EE8  38 60 00 01 */	li r3, 0x1
.L_80113E0C:
/* 80113E0C 00110EEC  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 80113E10 00110EF0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80113E14 00110EF4  7C 08 03 A6 */	mtlr r0
/* 80113E18 00110EF8  38 21 00 30 */	addi r1, r1, 0x30
/* 80113E1C 00110EFC  4E 80 00 20 */	blr
.endfn "update__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFR6xSceneRf"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::update_blur(float)
.fn "update_blur__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", local
/* 80113E20 00110F00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80113E24 00110F04  7C 08 02 A6 */	mflr r0
/* 80113E28 00110F08  90 01 00 14 */	stw r0, 0x14(r1)
/* 80113E2C 00110F0C  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80113E30 00110F10  C0 23 00 A8 */	lfs f1, 0xa8(r3)
/* 80113E34 00110F14  FC 40 02 10 */	fabs f2, f0
/* 80113E38 00110F18  C0 02 9E 88 */	lfs f0, "@961"@sda21(r2)
/* 80113E3C 00110F1C  FC 40 10 18 */	frsp f2, f2
/* 80113E40 00110F20  EC 22 08 24 */	fdivs f1, f2, f1
/* 80113E44 00110F24  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80113E48 00110F28  40 81 00 08 */	ble .L_80113E50
/* 80113E4C 00110F2C  FC 20 00 90 */	fmr f1, f0
.L_80113E50:
/* 80113E50 00110F30  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80113E54 00110F34  38 63 37 88 */	addi r3, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80113E58 00110F38  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 80113E5C 00110F3C  EC 00 00 72 */	fmuls f0, f0, f1
/* 80113E60 00110F40  EC 21 00 32 */	fmuls f1, f1, f0
/* 80113E64 00110F44  4B FB B6 E9 */	bl iCameraSetBlurriness__Ff
/* 80113E68 00110F48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80113E6C 00110F4C  7C 08 03 A6 */	mtlr r0
/* 80113E70 00110F50  38 21 00 10 */	addi r1, r1, 0x10
/* 80113E74 00110F54  4E 80 00 20 */	blr
.endfn "update_blur__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::update_sound(float)
.fn "update_sound__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", local
/* 80113E78 00110F58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80113E7C 00110F5C  7C 08 02 A6 */	mflr r0
/* 80113E80 00110F60  90 01 00 14 */	stw r0, 0x14(r1)
/* 80113E84 00110F64  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80113E88 00110F68  C0 23 00 A8 */	lfs f1, 0xa8(r3)
/* 80113E8C 00110F6C  FC 40 02 10 */	fabs f2, f0
/* 80113E90 00110F70  C0 02 9E 88 */	lfs f0, "@961"@sda21(r2)
/* 80113E94 00110F74  FC 40 10 18 */	frsp f2, f2
/* 80113E98 00110F78  EC 22 08 24 */	fdivs f1, f2, f1
/* 80113E9C 00110F7C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80113EA0 00110F80  40 81 00 08 */	ble .L_80113EA8
/* 80113EA4 00110F84  FC 20 00 90 */	fmr f1, f0
.L_80113EA8:
/* 80113EA8 00110F88  38 60 00 05 */	li r3, 0x5
/* 80113EAC 00110F8C  4B FF C4 F9 */	bl "set_volume__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fif"
/* 80113EB0 00110F90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80113EB4 00110F94  7C 08 03 A6 */	mtlr r0
/* 80113EB8 00110F98  38 21 00 10 */	addi r1, r1, 0x10
/* 80113EBC 00110F9C  4E 80 00 20 */	blr
.endfn "update_sound__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::player_bound() const
.fn "player_bound__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFv", local
/* 80113EC0 00110FA0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80113EC4 00110FA4  7C 08 02 A6 */	mflr r0
/* 80113EC8 00110FA8  3C A0 80 3C */	lis r5, globals@ha
/* 80113ECC 00110FAC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80113ED0 00110FB0  38 A5 05 58 */	addi r5, r5, globals@l
/* 80113ED4 00110FB4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80113ED8 00110FB8  7C 7F 1B 78 */	mr r31, r3
/* 80113EDC 00110FBC  38 61 00 08 */	addi r3, r1, 0x8
/* 80113EE0 00110FC0  C0 05 07 74 */	lfs f0, 0x774(r5)
/* 80113EE4 00110FC4  38 A4 00 08 */	addi r5, r4, 0x8
/* 80113EE8 00110FC8  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80113EEC 00110FCC  48 00 00 45 */	bl "local_to_world__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFRC5xVec3"
/* 80113EF0 00110FD0  38 61 00 14 */	addi r3, r1, 0x14
/* 80113EF4 00110FD4  38 81 00 08 */	addi r4, r1, 0x8
/* 80113EF8 00110FD8  4B EF 73 6D */	bl __as__5xVec3FRC5xVec3
/* 80113EFC 00110FDC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80113F00 00110FE0  80 01 00 18 */	lwz r0, 0x18(r1)
/* 80113F04 00110FE4  90 7F 00 00 */	stw r3, 0x0(r31)
/* 80113F08 00110FE8  90 1F 00 04 */	stw r0, 0x4(r31)
/* 80113F0C 00110FEC  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80113F10 00110FF0  80 01 00 20 */	lwz r0, 0x20(r1)
/* 80113F14 00110FF4  90 7F 00 08 */	stw r3, 0x8(r31)
/* 80113F18 00110FF8  90 1F 00 0C */	stw r0, 0xc(r31)
/* 80113F1C 00110FFC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80113F20 00111000  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80113F24 00111004  7C 08 03 A6 */	mtlr r0
/* 80113F28 00111008  38 21 00 30 */	addi r1, r1, 0x30
/* 80113F2C 0011100C  4E 80 00 20 */	blr
.endfn "player_bound__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::local_to_world(const xVec3&) const
.fn "local_to_world__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFRC5xVec3", local
/* 80113F30 00111010  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80113F34 00111014  7C 08 02 A6 */	mflr r0
/* 80113F38 00111018  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80113F3C 0011101C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80113F40 00111020  38 C4 7A 68 */	addi r6, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80113F44 00111024  7C A4 2B 78 */	mr r4, r5
/* 80113F48 00111028  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80113F4C 0011102C  7C 7F 1B 78 */	mr r31, r3
/* 80113F50 00111030  38 A6 01 74 */	addi r5, r6, 0x174
/* 80113F54 00111034  4B F0 14 8D */	bl __pl__5xVec3CFRC5xVec3
/* 80113F58 00111038  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80113F5C 0011103C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80113F60 00111040  7C 08 03 A6 */	mtlr r0
/* 80113F64 00111044  38 21 00 10 */	addi r1, r1, 0x10
/* 80113F68 00111048  4E 80 00 20 */	blr
.endfn "local_to_world__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFRC5xVec3"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::check_damage(bool)
.fn "check_damage__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFb", local
/* 80113F6C 0011104C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80113F70 00111050  7C 08 02 A6 */	mflr r0
/* 80113F74 00111054  90 01 00 24 */	stw r0, 0x24(r1)
/* 80113F78 00111058  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80113F7C 0011105C  7C 7F 1B 78 */	mr r31, r3
/* 80113F80 00111060  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80113F84 00111064  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80113F88 00111068  7C 9D 23 78 */	mr r29, r4
/* 80113F8C 0011106C  88 03 00 AC */	lbz r0, 0xac(r3)
/* 80113F90 00111070  28 00 00 00 */	cmplwi r0, 0x0
/* 80113F94 00111074  40 82 00 C4 */	bne .L_80114058
/* 80113F98 00111078  3C 60 80 3C */	lis r3, globals@ha
/* 80113F9C 0011107C  80 9F 00 BC */	lwz r4, 0xbc(r31)
/* 80113FA0 00111080  3B C3 05 58 */	addi r30, r3, globals@l
/* 80113FA4 00111084  80 1E 16 B0 */	lwz r0, 0x16b0(r30)
/* 80113FA8 00111088  90 1F 00 BC */	stw r0, 0xbc(r31)
/* 80113FAC 0011108C  80 1E 16 B0 */	lwz r0, 0x16b0(r30)
/* 80113FB0 00111090  7C 00 20 40 */	cmplw r0, r4
/* 80113FB4 00111094  40 80 00 A4 */	bge .L_80114058
/* 80113FB8 00111098  C0 02 9E B0 */	lfs f0, "@1817"@sda21(r2)
/* 80113FBC 0011109C  D0 1E 17 08 */	stfs f0, 0x1708(r30)
/* 80113FC0 001110A0  D0 1F 00 B4 */	stfs f0, 0xb4(r31)
/* 80113FC4 001110A4  D0 1F 00 B0 */	stfs f0, 0xb0(r31)
/* 80113FC8 001110A8  4B F1 CC C1 */	bl xurand__Fv
/* 80113FCC 001110AC  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80113FD0 001110B0  C0 02 9E 8C */	lfs f0, "@969"@sda21(r2)
/* 80113FD4 001110B4  38 A3 37 88 */	addi r5, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80113FD8 001110B8  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80113FDC 001110BC  C0 62 9F 10 */	lfs f3, "@2342"@sda21(r2)
/* 80113FE0 001110C0  3C 60 80 3C */	lis r3, globals@ha
/* 80113FE4 001110C4  C0 45 00 14 */	lfs f2, 0x14(r5)
/* 80113FE8 001110C8  EC 81 00 28 */	fsubs f4, f1, f0
/* 80113FEC 001110CC  C0 1F 00 70 */	lfs f0, 0x70(r31)
/* 80113FF0 001110D0  38 A4 7A 68 */	addi r5, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80113FF4 001110D4  EC 23 00 B2 */	fmuls f1, f3, f2
/* 80113FF8 001110D8  38 63 05 58 */	addi r3, r3, globals@l
/* 80113FFC 001110DC  EC 01 01 3A */	fmadds f0, f1, f4, f0
/* 80114000 001110E0  D0 1F 00 70 */	stfs f0, 0x70(r31)
/* 80114004 001110E4  80 05 01 98 */	lwz r0, 0x198(r5)
/* 80114008 001110E8  80 63 07 04 */	lwz r3, 0x704(r3)
/* 8011400C 001110EC  60 00 00 40 */	ori r0, r0, 0x40
/* 80114010 001110F0  80 85 00 38 */	lwz r4, 0x38(r5)
/* 80114014 001110F4  90 05 01 98 */	stw r0, 0x198(r5)
/* 80114018 001110F8  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8011401C 001110FC  4B EF 4A 29 */	bl xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition
/* 80114020 00111100  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 80114024 00111104  41 82 00 14 */	beq .L_80114038
/* 80114028 00111108  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 8011402C 0011110C  38 60 00 06 */	li r3, 0x6
/* 80114030 00111110  4B FF C2 89 */	bl "play_sound__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FQ312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10sound_enumf"
/* 80114034 00111114  48 00 00 10 */	b .L_80114044
.L_80114038:
/* 80114038 00111118  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 8011403C 0011111C  38 60 00 07 */	li r3, 0x7
/* 80114040 00111120  4B FF C2 79 */	bl "play_sound__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FQ312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10sound_enumf"
.L_80114044:
/* 80114044 00111124  80 1E 16 B0 */	lwz r0, 0x16b0(r30)
/* 80114048 00111128  28 00 00 00 */	cmplwi r0, 0x0
/* 8011404C 0011112C  40 82 00 0C */	bne .L_80114058
/* 80114050 00111130  7F E3 FB 78 */	mr r3, r31
/* 80114054 00111134  48 00 00 21 */	bl "short_drop_sudden_stop__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv"
.L_80114058:
/* 80114058 00111138  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8011405C 0011113C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80114060 00111140  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80114064 00111144  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80114068 00111148  7C 08 03 A6 */	mtlr r0
/* 8011406C 0011114C  38 21 00 20 */	addi r1, r1, 0x20
/* 80114070 00111150  4E 80 00 20 */	blr
.endfn "check_damage__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFb"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::short_drop_sudden_stop()
.fn "short_drop_sudden_stop__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv", local
/* 80114074 00111154  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80114078 00111158  7C 08 02 A6 */	mflr r0
/* 8011407C 0011115C  38 80 00 00 */	li r4, 0x0
/* 80114080 00111160  38 A0 00 33 */	li r5, 0x33
/* 80114084 00111164  90 01 00 14 */	stw r0, 0x14(r1)
/* 80114088 00111168  38 00 00 01 */	li r0, 0x1
/* 8011408C 0011116C  38 C0 00 00 */	li r6, 0x0
/* 80114090 00111170  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80114094 00111174  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80114098 00111178  7C 7E 1B 78 */	mr r30, r3
/* 8011409C 0011117C  98 03 00 AC */	stb r0, 0xac(r3)
/* 801140A0 00111180  3C 60 80 3C */	lis r3, globals@ha
/* 801140A4 00111184  3B E3 05 58 */	addi r31, r3, globals@l
/* 801140A8 00111188  C0 02 9E D8 */	lfs f0, "@2187"@sda21(r2)
/* 801140AC 0011118C  38 60 00 00 */	li r3, 0x0
/* 801140B0 00111190  D0 1F 17 08 */	stfs f0, 0x1708(r31)
/* 801140B4 00111194  4B F4 12 CD */	bl zEntEventAll__FP5xBaseUiUiPf
/* 801140B8 00111198  C0 1F 17 08 */	lfs f0, 0x1708(r31)
/* 801140BC 0011119C  7F C3 F3 78 */	mr r3, r30
/* 801140C0 001111A0  D0 1E 00 B0 */	stfs f0, 0xb0(r30)
/* 801140C4 001111A4  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 801140C8 001111A8  D0 1E 00 B4 */	stfs f0, 0xb4(r30)
/* 801140CC 001111AC  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 801140D0 001111B0  D0 1E 00 68 */	stfs f0, 0x68(r30)
/* 801140D4 001111B4  C0 22 9E EC */	lfs f1, "@2192"@sda21(r2)
/* 801140D8 001111B8  48 00 00 31 */	bl "multiply_dampening__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf"
/* 801140DC 001111BC  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801140E0 001111C0  38 63 7A 68 */	addi r3, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801140E4 001111C4  80 03 01 98 */	lwz r0, 0x198(r3)
/* 801140E8 001111C8  60 00 00 80 */	ori r0, r0, 0x80
/* 801140EC 001111CC  90 03 01 98 */	stw r0, 0x198(r3)
/* 801140F0 001111D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801140F4 001111D4  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 801140F8 001111D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801140FC 001111DC  7C 08 03 A6 */	mtlr r0
/* 80114100 001111E0  38 21 00 10 */	addi r1, r1, 0x10
/* 80114104 001111E4  4E 80 00 20 */	blr
.endfn "short_drop_sudden_stop__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::multiply_dampening(float)
.fn "multiply_dampening__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", local
/* 80114108 001111E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011410C 001111EC  7C 08 02 A6 */	mflr r0
/* 80114110 001111F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80114114 001111F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80114118 001111F8  7C 7F 1B 78 */	mr r31, r3
/* 8011411C 001111FC  C0 03 01 5C */	lfs f0, 0x15c(r3)
/* 80114120 00111200  EC 00 00 72 */	fmuls f0, f0, f1
/* 80114124 00111204  D0 03 01 5C */	stfs f0, 0x15c(r3)
/* 80114128 00111208  C0 23 01 5C */	lfs f1, 0x15c(r3)
/* 8011412C 0011120C  C0 02 9E 88 */	lfs f0, "@961"@sda21(r2)
/* 80114130 00111210  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80114134 00111214  40 81 00 08 */	ble .L_8011413C
/* 80114138 00111218  D0 1F 01 5C */	stfs f0, 0x15c(r31)
.L_8011413C:
/* 8011413C 0011121C  C0 3F 01 A0 */	lfs f1, 0x1a0(r31)
/* 80114140 00111220  4B EF 66 BD */	bl xsqrt__Ff
/* 80114144 00111224  C0 1F 01 5C */	lfs f0, 0x15c(r31)
/* 80114148 00111228  FC 00 00 50 */	fneg f0, f0
/* 8011414C 0011122C  EC 00 00 72 */	fmuls f0, f0, f1
/* 80114150 00111230  D0 1F 01 A4 */	stfs f0, 0x1a4(r31)
/* 80114154 00111234  C0 1F 01 A4 */	lfs f0, 0x1a4(r31)
/* 80114158 00111238  C0 3F 01 A0 */	lfs f1, 0x1a0(r31)
/* 8011415C 0011123C  EC 00 00 32 */	fmuls f0, f0, f0
/* 80114160 00111240  EC 21 00 28 */	fsubs f1, f1, f0
/* 80114164 00111244  4B EF 66 99 */	bl xsqrt__Ff
/* 80114168 00111248  D0 3F 01 A8 */	stfs f1, 0x1a8(r31)
/* 8011416C 0011124C  7F E3 FB 78 */	mr r3, r31
/* 80114170 00111250  C0 3F 01 58 */	lfs f1, 0x158(r31)
/* 80114174 00111254  C0 42 9E A0 */	lfs f2, "@1783"@sda21(r2)
/* 80114178 00111258  C0 7F 01 A0 */	lfs f3, 0x1a0(r31)
/* 8011417C 0011125C  C0 9F 01 4C */	lfs f4, 0x14c(r31)
/* 80114180 00111260  C0 BF 01 98 */	lfs f5, 0x198(r31)
/* 80114184 00111264  4B FF CC D1 */	bl "spring_energy__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFfffff"
/* 80114188 00111268  D0 3F 01 9C */	stfs f1, 0x19c(r31)
/* 8011418C 0011126C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80114190 00111270  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80114194 00111274  7C 08 03 A6 */	mtlr r0
/* 80114198 00111278  38 21 00 10 */	addi r1, r1, 0x10
/* 8011419C 0011127C  4E 80 00 20 */	blr
.endfn "multiply_dampening__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::update_collision(xScene&, float)
.fn "update_collision__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFR6xScenef", local
/* 801141A0 00111280  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801141A4 00111284  7C 08 02 A6 */	mflr r0
/* 801141A8 00111288  90 01 00 24 */	stw r0, 0x24(r1)
/* 801141AC 0011128C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801141B0 00111290  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801141B4 00111294  7C 9E 23 78 */	mr r30, r4
/* 801141B8 00111298  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801141BC 0011129C  7C 7D 1B 78 */	mr r29, r3
/* 801141C0 001112A0  48 00 08 3D */	bl "collide_start__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFR6xScene"
/* 801141C4 001112A4  38 60 00 01 */	li r3, 0x1
/* 801141C8 001112A8  3B E0 00 00 */	li r31, 0x0
/* 801141CC 001112AC  48 00 00 14 */	b .L_801141E0
.L_801141D0:
/* 801141D0 001112B0  7F A3 EB 78 */	mr r3, r29
/* 801141D4 001112B4  7F C4 F3 78 */	mr r4, r30
/* 801141D8 001112B8  48 00 00 35 */	bl "repath__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC6xScene"
/* 801141DC 001112BC  3B FF 00 01 */	addi r31, r31, 0x1
.L_801141E0:
/* 801141E0 001112C0  54 60 06 3F */	clrlwi. r0, r3, 24
/* 801141E4 001112C4  41 82 00 0C */	beq .L_801141F0
/* 801141E8 001112C8  2C 1F 00 08 */	cmpwi r31, 0x8
/* 801141EC 001112CC  41 80 FF E4 */	blt .L_801141D0
.L_801141F0:
/* 801141F0 001112D0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801141F4 001112D4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801141F8 001112D8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801141FC 001112DC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80114200 001112E0  7C 08 03 A6 */	mtlr r0
/* 80114204 001112E4  38 21 00 20 */	addi r1, r1, 0x20
/* 80114208 001112E8  4E 80 00 20 */	blr
.endfn "update_collision__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFR6xScenef"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::repath(const xScene&)
.fn "repath__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC6xScene", local
/* 8011420C 001112EC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80114210 001112F0  7C 08 02 A6 */	mflr r0
/* 80114214 001112F4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80114218 001112F8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8011421C 001112FC  3B E0 00 01 */	li r31, 0x1
/* 80114220 00111300  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80114224 00111304  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80114228 00111308  7C 9D 23 78 */	mr r29, r4
/* 8011422C 0011130C  93 81 00 10 */	stw r28, 0x10(r1)
/* 80114230 00111310  7C 7C 1B 78 */	mr r28, r3
/* 80114234 00111314  48 00 04 45 */	bl "ents_repath__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC6xScene"
/* 80114238 00111318  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8011423C 0011131C  40 82 00 08 */	bne .L_80114244
/* 80114240 00111320  3B E0 00 00 */	li r31, 0x0
.L_80114244:
/* 80114244 00111324  7F 83 E3 78 */	mr r3, r28
/* 80114248 00111328  7F A4 EB 78 */	mr r4, r29
/* 8011424C 0011132C  3B C0 00 00 */	li r30, 0x0
/* 80114250 00111330  48 00 02 15 */	bl "env_repath__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC6xScene"
/* 80114254 00111334  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80114258 00111338  40 82 00 0C */	bne .L_80114264
/* 8011425C 0011133C  57 E0 06 3F */	clrlwi. r0, r31, 24
/* 80114260 00111340  41 82 00 08 */	beq .L_80114268
.L_80114264:
/* 80114264 00111344  3B C0 00 01 */	li r30, 0x1
.L_80114268:
/* 80114268 00111348  7F 83 E3 78 */	mr r3, r28
/* 8011426C 0011134C  7F A4 EB 78 */	mr r4, r29
/* 80114270 00111350  3B E0 00 00 */	li r31, 0x0
/* 80114274 00111354  48 00 00 3D */	bl "boundary_repath__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC6xScene"
/* 80114278 00111358  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8011427C 0011135C  40 82 00 0C */	bne .L_80114288
/* 80114280 00111360  57 C0 06 3F */	clrlwi. r0, r30, 24
/* 80114284 00111364  41 82 00 08 */	beq .L_8011428C
.L_80114288:
/* 80114288 00111368  3B E0 00 01 */	li r31, 0x1
.L_8011428C:
/* 8011428C 0011136C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80114290 00111370  7F E3 FB 78 */	mr r3, r31
/* 80114294 00111374  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80114298 00111378  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8011429C 0011137C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801142A0 00111380  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801142A4 00111384  7C 08 03 A6 */	mtlr r0
/* 801142A8 00111388  38 21 00 20 */	addi r1, r1, 0x20
/* 801142AC 0011138C  4E 80 00 20 */	blr
.endfn "repath__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC6xScene"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::boundary_repath(const xScene&)
.fn "boundary_repath__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC6xScene", local
/* 801142B0 00111390  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801142B4 00111394  7C 08 02 A6 */	mflr r0
/* 801142B8 00111398  90 01 00 44 */	stw r0, 0x44(r1)
/* 801142BC 0011139C  38 81 00 20 */	addi r4, r1, 0x20
/* 801142C0 001113A0  38 A1 00 14 */	addi r5, r1, 0x14
/* 801142C4 001113A4  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 801142C8 001113A8  7C 7F 1B 78 */	mr r31, r3
/* 801142CC 001113AC  38 DF 00 08 */	addi r6, r31, 0x8
/* 801142D0 001113B0  48 00 00 5D */	bl "hit_boundary__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFR5xVec3R5xVec3RC5xVec3"
/* 801142D4 001113B4  54 60 06 3F */	clrlwi. r0, r3, 24
/* 801142D8 001113B8  40 82 00 0C */	bne .L_801142E4
/* 801142DC 001113BC  38 60 00 00 */	li r3, 0x0
/* 801142E0 001113C0  48 00 00 38 */	b .L_80114318
.L_801142E4:
/* 801142E4 001113C4  38 7F 00 08 */	addi r3, r31, 0x8
/* 801142E8 001113C8  38 81 00 14 */	addi r4, r1, 0x14
/* 801142EC 001113CC  4B F0 11 59 */	bl __apl__5xVec3FRC5xVec3
/* 801142F0 001113D0  38 61 00 20 */	addi r3, r1, 0x20
/* 801142F4 001113D4  38 9F 00 14 */	addi r4, r31, 0x14
/* 801142F8 001113D8  4B F0 12 15 */	bl dot__5xVec3CFRC5xVec3
/* 801142FC 001113DC  38 61 00 08 */	addi r3, r1, 0x8
/* 80114300 001113E0  38 81 00 20 */	addi r4, r1, 0x20
/* 80114304 001113E4  4B EF 6E 1D */	bl __ml__5xVec3CFf
/* 80114308 001113E8  38 7F 00 14 */	addi r3, r31, 0x14
/* 8011430C 001113EC  38 81 00 08 */	addi r4, r1, 0x8
/* 80114310 001113F0  4B EF 6F 21 */	bl __ami__5xVec3FRC5xVec3
/* 80114314 001113F4  38 60 00 01 */	li r3, 0x1
.L_80114318:
/* 80114318 001113F8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8011431C 001113FC  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80114320 00111400  7C 08 03 A6 */	mtlr r0
/* 80114324 00111404  38 21 00 40 */	addi r1, r1, 0x40
/* 80114328 00111408  4E 80 00 20 */	blr
.endfn "boundary_repath__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC6xScene"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::hit_boundary(xVec3&, xVec3&, const xVec3&) const
.fn "hit_boundary__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFR5xVec3R5xVec3RC5xVec3", local
/* 8011432C 0011140C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80114330 00111410  7C 08 02 A6 */	mflr r0
/* 80114334 00111414  C0 63 01 60 */	lfs f3, 0x160(r3)
/* 80114338 00111418  90 01 00 24 */	stw r0, 0x24(r1)
/* 8011433C 0011141C  FC 40 18 50 */	fneg f2, f3
/* 80114340 00111420  C0 26 00 00 */	lfs f1, 0x0(r6)
/* 80114344 00111424  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80114348 00111428  7C 7B 1B 78 */	mr r27, r3
/* 8011434C 0011142C  7C DE 33 78 */	mr r30, r6
/* 80114350 00111430  7C 9C 23 78 */	mr r28, r4
/* 80114354 00111434  7C BD 2B 78 */	mr r29, r5
/* 80114358 00111438  48 00 00 B5 */	bl "clip_nearest__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFRfRffff"
/* 8011435C 0011143C  C0 3E 00 04 */	lfs f1, 0x4(r30)
/* 80114360 00111440  7C 7F 1B 78 */	mr r31, r3
/* 80114364 00111444  C0 5B 01 58 */	lfs f2, 0x158(r27)
/* 80114368 00111448  7F 63 DB 78 */	mr r3, r27
/* 8011436C 0011144C  C0 7B 01 54 */	lfs f3, 0x154(r27)
/* 80114370 00111450  38 9C 00 04 */	addi r4, r28, 0x4
/* 80114374 00111454  38 BD 00 04 */	addi r5, r29, 0x4
/* 80114378 00111458  48 00 00 95 */	bl "clip_nearest__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFRfRffff"
/* 8011437C 0011145C  C0 7B 01 60 */	lfs f3, 0x160(r27)
/* 80114380 00111460  7F FF 1A 14 */	add r31, r31, r3
/* 80114384 00111464  C0 3E 00 08 */	lfs f1, 0x8(r30)
/* 80114388 00111468  7F 63 DB 78 */	mr r3, r27
/* 8011438C 0011146C  FC 40 18 50 */	fneg f2, f3
/* 80114390 00111470  38 9C 00 08 */	addi r4, r28, 0x8
/* 80114394 00111474  38 BD 00 08 */	addi r5, r29, 0x8
/* 80114398 00111478  48 00 00 75 */	bl "clip_nearest__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFRfRffff"
/* 8011439C 0011147C  7F FF 1A 14 */	add r31, r31, r3
/* 801143A0 00111480  2C 1F 00 02 */	cmpwi r31, 0x2
/* 801143A4 00111484  41 82 00 28 */	beq .L_801143CC
/* 801143A8 00111488  40 80 00 10 */	bge .L_801143B8
/* 801143AC 0011148C  2C 1F 00 01 */	cmpwi r31, 0x1
/* 801143B0 00111490  40 80 00 14 */	bge .L_801143C4
/* 801143B4 00111494  48 00 00 40 */	b .L_801143F4
.L_801143B8:
/* 801143B8 00111498  2C 1F 00 04 */	cmpwi r31, 0x4
/* 801143BC 0011149C  40 80 00 38 */	bge .L_801143F4
/* 801143C0 001114A0  48 00 00 20 */	b .L_801143E0
.L_801143C4:
/* 801143C4 001114A4  38 60 00 01 */	li r3, 0x1
/* 801143C8 001114A8  48 00 00 30 */	b .L_801143F8
.L_801143CC:
/* 801143CC 001114AC  C0 22 9F 14 */	lfs f1, "@2435"@sda21(r2)
/* 801143D0 001114B0  7F 83 E3 78 */	mr r3, r28
/* 801143D4 001114B4  4B EF 6D AD */	bl __amu__5xVec3Ff
/* 801143D8 001114B8  38 60 00 01 */	li r3, 0x1
/* 801143DC 001114BC  48 00 00 1C */	b .L_801143F8
.L_801143E0:
/* 801143E0 001114C0  C0 22 9F 18 */	lfs f1, "@2436"@sda21(r2)
/* 801143E4 001114C4  7F 83 E3 78 */	mr r3, r28
/* 801143E8 001114C8  4B EF 6D 99 */	bl __amu__5xVec3Ff
/* 801143EC 001114CC  38 60 00 01 */	li r3, 0x1
/* 801143F0 001114D0  48 00 00 08 */	b .L_801143F8
.L_801143F4:
/* 801143F4 001114D4  38 60 00 00 */	li r3, 0x0
.L_801143F8:
/* 801143F8 001114D8  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 801143FC 001114DC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80114400 001114E0  7C 08 03 A6 */	mtlr r0
/* 80114404 001114E4  38 21 00 20 */	addi r1, r1, 0x20
/* 80114408 001114E8  4E 80 00 20 */	blr
.endfn "hit_boundary__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFR5xVec3R5xVec3RC5xVec3"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::clip_nearest(float&, float&, float, float, float) const
.fn "clip_nearest__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFRfRffff", local
/* 8011440C 001114EC  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 80114410 001114F0  38 60 00 00 */	li r3, 0x0
/* 80114414 001114F4  40 81 00 1C */	ble .L_80114430
/* 80114418 001114F8  C0 42 9E AC */	lfs f2, "@1811"@sda21(r2)
/* 8011441C 001114FC  EC 03 08 28 */	fsubs f0, f3, f1
/* 80114420 00111500  38 60 00 01 */	li r3, 0x1
/* 80114424 00111504  D0 44 00 00 */	stfs f2, 0x0(r4)
/* 80114428 00111508  D0 05 00 00 */	stfs f0, 0x0(r5)
/* 8011442C 0011150C  4E 80 00 20 */	blr
.L_80114430:
/* 80114430 00111510  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80114434 00111514  40 80 00 1C */	bge .L_80114450
/* 80114438 00111518  C0 62 9E 88 */	lfs f3, "@961"@sda21(r2)
/* 8011443C 0011151C  EC 02 08 28 */	fsubs f0, f2, f1
/* 80114440 00111520  38 60 00 01 */	li r3, 0x1
/* 80114444 00111524  D0 64 00 00 */	stfs f3, 0x0(r4)
/* 80114448 00111528  D0 05 00 00 */	stfs f0, 0x0(r5)
/* 8011444C 0011152C  4E 80 00 20 */	blr
.L_80114450:
/* 80114450 00111530  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80114454 00111534  D0 04 00 00 */	stfs f0, 0x0(r4)
/* 80114458 00111538  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 8011445C 0011153C  D0 05 00 00 */	stfs f0, 0x0(r5)
/* 80114460 00111540  4E 80 00 20 */	blr
.endfn "clip_nearest__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFRfRffff"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::env_repath(const xScene&)
.fn "env_repath__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC6xScene", local
/* 80114464 00111544  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 80114468 00111548  7C 08 02 A6 */	mflr r0
/* 8011446C 0011154C  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80114470 00111550  DB E1 00 98 */	stfd f31, 0x98(r1)
/* 80114474 00111554  93 E1 00 94 */	stw r31, 0x94(r1)
/* 80114478 00111558  7C 9F 23 78 */	mr r31, r4
/* 8011447C 0011155C  93 C1 00 90 */	stw r30, 0x90(r1)
/* 80114480 00111560  7C 7E 1B 78 */	mr r30, r3
/* 80114484 00111564  88 03 09 C0 */	lbz r0, 0x9c0(r3)
/* 80114488 00111568  28 00 00 00 */	cmplwi r0, 0x0
/* 8011448C 0011156C  40 82 00 0C */	bne .L_80114498
/* 80114490 00111570  38 60 00 00 */	li r3, 0x0
/* 80114494 00111574  48 00 00 BC */	b .L_80114550
.L_80114498:
/* 80114498 00111578  38 61 00 34 */	addi r3, r1, 0x34
/* 8011449C 0011157C  38 80 00 00 */	li r4, 0x0
/* 801144A0 00111580  38 A0 00 50 */	li r5, 0x50
/* 801144A4 00111584  4B EE EF B5 */	bl memset
/* 801144A8 00111588  38 00 0A 00 */	li r0, 0xa00
/* 801144AC 0011158C  7F C4 F3 78 */	mr r4, r30
/* 801144B0 00111590  90 01 00 34 */	stw r0, 0x34(r1)
/* 801144B4 00111594  38 61 00 14 */	addi r3, r1, 0x14
/* 801144B8 00111598  4B FF FA 09 */	bl "player_bound__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFv"
/* 801144BC 0011159C  80 81 00 14 */	lwz r4, 0x14(r1)
/* 801144C0 001115A0  38 61 00 24 */	addi r3, r1, 0x24
/* 801144C4 001115A4  80 E1 00 18 */	lwz r7, 0x18(r1)
/* 801144C8 001115A8  38 A1 00 34 */	addi r5, r1, 0x34
/* 801144CC 001115AC  80 C1 00 1C */	lwz r6, 0x1c(r1)
/* 801144D0 001115B0  80 01 00 20 */	lwz r0, 0x20(r1)
/* 801144D4 001115B4  90 81 00 24 */	stw r4, 0x24(r1)
/* 801144D8 001115B8  80 9F 00 44 */	lwz r4, 0x44(r31)
/* 801144DC 001115BC  90 E1 00 28 */	stw r7, 0x28(r1)
/* 801144E0 001115C0  90 C1 00 2C */	stw r6, 0x2c(r1)
/* 801144E4 001115C4  90 01 00 30 */	stw r0, 0x30(r1)
/* 801144E8 001115C8  4B FA D7 81 */	bl iSphereHitsEnv__FPC7xSpherePC4xEnvP7xCollis
/* 801144EC 001115CC  28 03 00 00 */	cmplwi r3, 0x0
/* 801144F0 001115D0  40 82 00 0C */	bne .L_801144FC
/* 801144F4 001115D4  38 60 00 00 */	li r3, 0x0
/* 801144F8 001115D8  48 00 00 58 */	b .L_80114550
.L_801144FC:
/* 801144FC 001115DC  38 7E 00 08 */	addi r3, r30, 0x8
/* 80114500 001115E0  38 81 00 60 */	addi r4, r1, 0x60
/* 80114504 001115E4  4B F0 0F 41 */	bl __apl__5xVec3FRC5xVec3
/* 80114508 001115E8  3B E1 00 48 */	addi r31, r1, 0x48
/* 8011450C 001115EC  38 9E 00 14 */	addi r4, r30, 0x14
/* 80114510 001115F0  7F E3 FB 78 */	mr r3, r31
/* 80114514 001115F4  4B F0 0F F9 */	bl dot__5xVec3CFRC5xVec3
/* 80114518 001115F8  FF E0 08 50 */	fneg f31, f1
/* 8011451C 001115FC  7F E4 FB 78 */	mr r4, r31
/* 80114520 00111600  38 61 00 08 */	addi r3, r1, 0x8
/* 80114524 00111604  FC 20 F8 90 */	fmr f1, f31
/* 80114528 00111608  4B EF 6B F9 */	bl __ml__5xVec3CFf
/* 8011452C 0011160C  38 7E 00 14 */	addi r3, r30, 0x14
/* 80114530 00111610  38 81 00 08 */	addi r4, r1, 0x8
/* 80114534 00111614  4B F0 0F 11 */	bl __apl__5xVec3FRC5xVec3
/* 80114538 00111618  FC 20 F8 90 */	fmr f1, f31
/* 8011453C 0011161C  7F C3 F3 78 */	mr r3, r30
/* 80114540 00111620  38 9E 09 BC */	addi r4, r30, 0x9bc
/* 80114544 00111624  38 A1 00 34 */	addi r5, r1, 0x34
/* 80114548 00111628  48 00 00 25 */	bl "trigger_collision__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRQ412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type8env_infofRC7xCollis"
/* 8011454C 0011162C  38 60 00 01 */	li r3, 0x1
.L_80114550:
/* 80114550 00111630  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80114554 00111634  CB E1 00 98 */	lfd f31, 0x98(r1)
/* 80114558 00111638  83 E1 00 94 */	lwz r31, 0x94(r1)
/* 8011455C 0011163C  83 C1 00 90 */	lwz r30, 0x90(r1)
/* 80114560 00111640  7C 08 03 A6 */	mtlr r0
/* 80114564 00111644  38 21 00 A0 */	addi r1, r1, 0xa0
/* 80114568 00111648  4E 80 00 20 */	blr
.endfn "env_repath__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC6xScene"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::trigger_collision(bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::env_info&, float, const xCollis&)
.fn "trigger_collision__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRQ412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type8env_infofRC7xCollis", local
/* 8011456C 0011164C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80114570 00111650  7C 08 02 A6 */	mflr r0
/* 80114574 00111654  90 01 00 24 */	stw r0, 0x24(r1)
/* 80114578 00111658  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8011457C 0011165C  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 80114580 00111660  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80114584 00111664  80 C4 00 08 */	lwz r6, 0x8(r4)
/* 80114588 00111668  FF E0 08 90 */	fmr f31, f1
/* 8011458C 0011166C  7C 7F 1B 78 */	mr r31, r3
/* 80114590 00111670  38 06 00 01 */	addi r0, r6, 0x1
/* 80114594 00111674  90 04 00 08 */	stw r0, 0x8(r4)
/* 80114598 00111678  88 03 00 AC */	lbz r0, 0xac(r3)
/* 8011459C 0011167C  28 00 00 00 */	cmplwi r0, 0x0
/* 801145A0 00111680  40 82 00 54 */	bne .L_801145F4
/* 801145A4 00111684  7C A3 2B 78 */	mr r3, r5
/* 801145A8 00111688  4B FA 14 3D */	bl zSurfaceGetSurface__FPC7xCollis
/* 801145AC 0011168C  28 03 00 00 */	cmplwi r3, 0x0
/* 801145B0 00111690  41 82 00 28 */	beq .L_801145D8
/* 801145B4 00111694  88 03 00 20 */	lbz r0, 0x20(r3)
/* 801145B8 00111698  28 00 00 00 */	cmplwi r0, 0x0
/* 801145BC 0011169C  40 82 00 1C */	bne .L_801145D8
/* 801145C0 001116A0  4B FA 15 BD */	bl zSurfaceGetDamageType__FPC8xSurface
/* 801145C4 001116A4  2C 03 00 00 */	cmpwi r3, 0x0
/* 801145C8 001116A8  41 82 00 10 */	beq .L_801145D8
/* 801145CC 001116AC  7F E3 FB 78 */	mr r3, r31
/* 801145D0 001116B0  38 80 00 01 */	li r4, 0x1
/* 801145D4 001116B4  48 00 00 3D */	bl "ouchie__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFb"
.L_801145D8:
/* 801145D8 001116B8  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 801145DC 001116BC  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 801145E0 001116C0  4C 41 13 82 */	cror eq, gt, eq
/* 801145E4 001116C4  40 82 00 10 */	bne .L_801145F4
/* 801145E8 001116C8  7F E3 FB 78 */	mr r3, r31
/* 801145EC 001116CC  38 80 00 01 */	li r4, 0x1
/* 801145F0 001116D0  48 00 00 21 */	bl "ouchie__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFb"
.L_801145F4:
/* 801145F4 001116D4  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 801145F8 001116D8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801145FC 001116DC  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80114600 001116E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80114604 001116E4  7C 08 03 A6 */	mtlr r0
/* 80114608 001116E8  38 21 00 20 */	addi r1, r1, 0x20
/* 8011460C 001116EC  4E 80 00 20 */	blr
.endfn "trigger_collision__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRQ412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type8env_infofRC7xCollis"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::ouchie(bool)
.fn "ouchie__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFb", local
/* 80114610 001116F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80114614 001116F4  7C 08 02 A6 */	mflr r0
/* 80114618 001116F8  3C A0 80 3C */	lis r5, globals@ha
/* 8011461C 001116FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80114620 00111700  38 C5 05 58 */	addi r6, r5, globals@l
/* 80114624 00111704  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80114628 00111708  C0 26 17 08 */	lfs f1, 0x1708(r6)
/* 8011462C 0011170C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80114630 00111710  41 81 00 38 */	bgt .L_80114668
/* 80114634 00111714  88 03 00 AC */	lbz r0, 0xac(r3)
/* 80114638 00111718  28 00 00 00 */	cmplwi r0, 0x0
/* 8011463C 0011171C  40 82 00 2C */	bne .L_80114668
/* 80114640 00111720  80 06 08 E4 */	lwz r0, 0x8e4(r6)
/* 80114644 00111724  28 00 00 00 */	cmplwi r0, 0x0
/* 80114648 00111728  40 82 00 08 */	bne .L_80114650
/* 8011464C 0011172C  48 00 00 1C */	b .L_80114668
.L_80114650:
/* 80114650 00111730  80 A6 16 B0 */	lwz r5, 0x16b0(r6)
/* 80114654 00111734  28 05 00 00 */	cmplwi r5, 0x0
/* 80114658 00111738  41 82 00 0C */	beq .L_80114664
/* 8011465C 0011173C  38 05 FF FF */	addi r0, r5, -0x1
/* 80114660 00111740  90 06 16 B0 */	stw r0, 0x16b0(r6)
.L_80114664:
/* 80114664 00111744  4B FF F9 09 */	bl "check_damage__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFb"
.L_80114668:
/* 80114668 00111748  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011466C 0011174C  7C 08 03 A6 */	mtlr r0
/* 80114670 00111750  38 21 00 10 */	addi r1, r1, 0x10
/* 80114674 00111754  4E 80 00 20 */	blr
.endfn "ouchie__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFb"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::ents_repath(const xScene&)
.fn "ents_repath__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC6xScene", local
/* 80114678 00111758  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 8011467C 0011175C  7C 08 02 A6 */	mflr r0
/* 80114680 00111760  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 80114684 00111764  DB E1 00 B0 */	stfd f31, 0xb0(r1)
/* 80114688 00111768  F3 E1 00 B8 */	psq_st f31, 0xb8(r1), 0, qr0
/* 8011468C 0011176C  BF 41 00 98 */	stmw r26, 0x98(r1)
/* 80114690 00111770  7C 7A 1B 78 */	mr r26, r3
/* 80114694 00111774  80 03 09 B8 */	lwz r0, 0x9b8(r3)
/* 80114698 00111778  2C 00 00 00 */	cmpwi r0, 0x0
/* 8011469C 0011177C  41 81 00 0C */	bgt .L_801146A8
/* 801146A0 00111780  38 60 00 00 */	li r3, 0x0
/* 801146A4 00111784  48 00 00 FC */	b .L_801147A0
.L_801146A8:
/* 801146A8 00111788  38 60 0A 00 */	li r3, 0xa00
/* 801146AC 0011178C  3B 9A 01 B8 */	addi r28, r26, 0x1b8
/* 801146B0 00111790  54 00 18 38 */	slwi r0, r0, 3
/* 801146B4 00111794  90 61 00 40 */	stw r3, 0x40(r1)
/* 801146B8 00111798  7F 7C 02 14 */	add r27, r28, r0
/* 801146BC 0011179C  3B E1 00 6C */	addi r31, r1, 0x6c
/* 801146C0 001117A0  3B C1 00 54 */	addi r30, r1, 0x54
/* 801146C4 001117A4  3B A0 00 00 */	li r29, 0x0
/* 801146C8 001117A8  48 00 00 CC */	b .L_80114794
.L_801146CC:
/* 801146CC 001117AC  7F 44 D3 78 */	mr r4, r26
/* 801146D0 001117B0  38 61 00 20 */	addi r3, r1, 0x20
/* 801146D4 001117B4  4B FF F7 ED */	bl "player_bound__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFv"
/* 801146D8 001117B8  81 01 00 20 */	lwz r8, 0x20(r1)
/* 801146DC 001117BC  7F 43 D3 78 */	mr r3, r26
/* 801146E0 001117C0  80 E1 00 24 */	lwz r7, 0x24(r1)
/* 801146E4 001117C4  38 81 00 40 */	addi r4, r1, 0x40
/* 801146E8 001117C8  80 C1 00 28 */	lwz r6, 0x28(r1)
/* 801146EC 001117CC  38 A1 00 30 */	addi r5, r1, 0x30
/* 801146F0 001117D0  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 801146F4 001117D4  91 01 00 30 */	stw r8, 0x30(r1)
/* 801146F8 001117D8  90 E1 00 34 */	stw r7, 0x34(r1)
/* 801146FC 001117DC  90 C1 00 38 */	stw r6, 0x38(r1)
/* 80114700 001117E0  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80114704 001117E4  80 DC 00 00 */	lwz r6, 0x0(r28)
/* 80114708 001117E8  48 00 02 3D */	bl "collide__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFR7xCollisRC7xSphereRC4xEnt"
/* 8011470C 001117EC  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80114710 001117F0  41 82 00 80 */	beq .L_80114790
/* 80114714 001117F4  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 80114718 001117F8  7F 43 D3 78 */	mr r3, r26
/* 8011471C 001117FC  C0 3A 00 18 */	lfs f1, 0x18(r26)
/* 80114720 00111800  7F 84 E3 78 */	mr r4, r28
/* 80114724 00111804  FC 00 02 10 */	fabs f0, f0
/* 80114728 00111808  38 A1 00 40 */	addi r5, r1, 0x40
/* 8011472C 0011180C  FC 20 08 50 */	fneg f1, f1
/* 80114730 00111810  FC 00 00 18 */	frsp f0, f0
/* 80114734 00111814  EC 21 00 32 */	fmuls f1, f1, f0
/* 80114738 00111818  48 00 00 85 */	bl "trigger_collision__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRQ412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type8ent_infofRC7xCollis"
/* 8011473C 0011181C  FF E0 08 90 */	fmr f31, f1
/* 80114740 00111820  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80114744 00111824  FC 00 F8 00 */	fcmpu cr0, f0, f31
/* 80114748 00111828  41 82 00 48 */	beq .L_80114790
/* 8011474C 0011182C  7F E4 FB 78 */	mr r4, r31
/* 80114750 00111830  38 61 00 14 */	addi r3, r1, 0x14
/* 80114754 00111834  3B A0 00 01 */	li r29, 0x1
/* 80114758 00111838  4B EF 69 C9 */	bl __ml__5xVec3CFf
/* 8011475C 0011183C  38 7A 00 08 */	addi r3, r26, 0x8
/* 80114760 00111840  38 81 00 14 */	addi r4, r1, 0x14
/* 80114764 00111844  4B F0 0C E1 */	bl __apl__5xVec3FRC5xVec3
/* 80114768 00111848  7F C3 F3 78 */	mr r3, r30
/* 8011476C 0011184C  38 9A 00 14 */	addi r4, r26, 0x14
/* 80114770 00111850  4B F0 0D 9D */	bl dot__5xVec3CFRC5xVec3
/* 80114774 00111854  EC 3F 00 72 */	fmuls f1, f31, f1
/* 80114778 00111858  7F C4 F3 78 */	mr r4, r30
/* 8011477C 0011185C  38 61 00 08 */	addi r3, r1, 0x8
/* 80114780 00111860  4B EF 69 A1 */	bl __ml__5xVec3CFf
/* 80114784 00111864  38 7A 00 14 */	addi r3, r26, 0x14
/* 80114788 00111868  38 81 00 08 */	addi r4, r1, 0x8
/* 8011478C 0011186C  4B EF 6A A5 */	bl __ami__5xVec3FRC5xVec3
.L_80114790:
/* 80114790 00111870  3B 9C 00 08 */	addi r28, r28, 0x8
.L_80114794:
/* 80114794 00111874  7C 1C D8 40 */	cmplw r28, r27
/* 80114798 00111878  40 82 FF 34 */	bne .L_801146CC
/* 8011479C 0011187C  7F A3 EB 78 */	mr r3, r29
.L_801147A0:
/* 801147A0 00111880  E3 E1 00 B8 */	psq_l f31, 0xb8(r1), 0, qr0
/* 801147A4 00111884  CB E1 00 B0 */	lfd f31, 0xb0(r1)
/* 801147A8 00111888  BB 41 00 98 */	lmw r26, 0x98(r1)
/* 801147AC 0011188C  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 801147B0 00111890  7C 08 03 A6 */	mtlr r0
/* 801147B4 00111894  38 21 00 C0 */	addi r1, r1, 0xc0
/* 801147B8 00111898  4E 80 00 20 */	blr
.endfn "ents_repath__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC6xScene"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::trigger_collision(bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::ent_info&, float, const xCollis&)
.fn "trigger_collision__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRQ412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type8ent_infofRC7xCollis", local
/* 801147BC 0011189C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801147C0 001118A0  7C 08 02 A6 */	mflr r0
/* 801147C4 001118A4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801147C8 001118A8  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 801147CC 001118AC  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 801147D0 001118B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801147D4 001118B4  93 C1 00 08 */	stw r30, 0x8(r1)
/* 801147D8 001118B8  7C 9F 23 78 */	mr r31, r4
/* 801147DC 001118BC  7C 7E 1B 78 */	mr r30, r3
/* 801147E0 001118C0  80 64 00 04 */	lwz r3, 0x4(r4)
/* 801147E4 001118C4  FF E0 08 90 */	fmr f31, f1
/* 801147E8 001118C8  38 03 00 01 */	addi r0, r3, 0x1
/* 801147EC 001118CC  90 04 00 04 */	stw r0, 0x4(r4)
/* 801147F0 001118D0  88 1E 00 AC */	lbz r0, 0xac(r30)
/* 801147F4 001118D4  28 00 00 00 */	cmplwi r0, 0x0
/* 801147F8 001118D8  41 82 00 0C */	beq .L_80114804
/* 801147FC 001118DC  C0 22 9E 88 */	lfs f1, "@961"@sda21(r2)
/* 80114800 001118E0  48 00 01 24 */	b .L_80114924
.L_80114804:
/* 80114804 001118E4  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 80114808 001118E8  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8011480C 001118EC  80 63 00 30 */	lwz r3, 0x30(r3)
/* 80114810 001118F0  28 03 00 00 */	cmplwi r3, 0x0
/* 80114814 001118F4  41 82 00 28 */	beq .L_8011483C
/* 80114818 001118F8  88 03 00 20 */	lbz r0, 0x20(r3)
/* 8011481C 001118FC  28 00 00 00 */	cmplwi r0, 0x0
/* 80114820 00111900  40 82 00 1C */	bne .L_8011483C
/* 80114824 00111904  4B FA 13 59 */	bl zSurfaceGetDamageType__FPC8xSurface
/* 80114828 00111908  2C 03 00 00 */	cmpwi r3, 0x0
/* 8011482C 0011190C  41 82 00 10 */	beq .L_8011483C
/* 80114830 00111910  7F C3 F3 78 */	mr r3, r30
/* 80114834 00111914  38 80 00 01 */	li r4, 0x1
/* 80114838 00111918  4B FF FD D9 */	bl "ouchie__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFb"
.L_8011483C:
/* 8011483C 0011191C  C0 1E 01 94 */	lfs f0, 0x194(r30)
/* 80114840 00111920  38 80 00 01 */	li r4, 0x1
/* 80114844 00111924  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80114848 00111928  4C 41 13 82 */	cror eq, gt, eq
/* 8011484C 0011192C  40 82 00 B0 */	bne .L_801148FC
/* 80114850 00111930  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 80114854 00111934  88 03 00 04 */	lbz r0, 0x4(r3)
/* 80114858 00111938  28 00 00 2B */	cmplwi r0, 0x2b
/* 8011485C 0011193C  40 82 00 8C */	bne .L_801148E8
/* 80114860 00111940  80 1F 00 04 */	lwz r0, 0x4(r31)
/* 80114864 00111944  7C 7F 1B 78 */	mr r31, r3
/* 80114868 00111948  2C 00 00 01 */	cmpwi r0, 0x1
/* 8011486C 0011194C  40 82 00 54 */	bne .L_801148C0
/* 80114870 00111950  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80114874 00111954  3C 80 80 3C */	lis r4, globals@ha
/* 80114878 00111958  38 84 05 58 */	addi r4, r4, globals@l
/* 8011487C 0011195C  38 DE 00 14 */	addi r6, r30, 0x14
/* 80114880 00111960  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 80114884 00111964  38 A4 06 E0 */	addi r5, r4, 0x6e0
/* 80114888 00111968  38 80 00 0F */	li r4, 0xf
/* 8011488C 0011196C  7D 89 03 A6 */	mtctr r12
/* 80114890 00111970  4E 80 04 21 */	bctrl
/* 80114894 00111974  7F E3 FB 78 */	mr r3, r31
/* 80114898 00111978  81 9F 01 B8 */	lwz r12, 0x1b8(r31)
/* 8011489C 0011197C  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 801148A0 00111980  7D 89 03 A6 */	mtctr r12
/* 801148A4 00111984  4E 80 04 21 */	bctrl
/* 801148A8 00111988  2C 03 00 00 */	cmpwi r3, 0x0
/* 801148AC 0011198C  41 82 00 0C */	beq .L_801148B8
/* 801148B0 00111990  C0 22 9E 88 */	lfs f1, "@961"@sda21(r2)
/* 801148B4 00111994  48 00 00 70 */	b .L_80114924
.L_801148B8:
/* 801148B8 00111998  C0 3E 01 8C */	lfs f1, 0x18c(r30)
/* 801148BC 0011199C  48 00 00 68 */	b .L_80114924
.L_801148C0:
/* 801148C0 001119A0  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 801148C4 001119A4  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 801148C8 001119A8  7D 89 03 A6 */	mtctr r12
/* 801148CC 001119AC  4E 80 04 21 */	bctrl
/* 801148D0 001119B0  2C 03 00 00 */	cmpwi r3, 0x0
/* 801148D4 001119B4  41 82 00 0C */	beq .L_801148E0
/* 801148D8 001119B8  C0 22 9E 88 */	lfs f1, "@961"@sda21(r2)
/* 801148DC 001119BC  48 00 00 48 */	b .L_80114924
.L_801148E0:
/* 801148E0 001119C0  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 801148E4 001119C4  48 00 00 40 */	b .L_80114924
.L_801148E8:
/* 801148E8 001119C8  28 00 00 18 */	cmplwi r0, 0x18
/* 801148EC 001119CC  40 82 00 10 */	bne .L_801148FC
/* 801148F0 001119D0  38 80 00 20 */	li r4, 0x20
/* 801148F4 001119D4  4B F4 24 5D */	bl zEntButton_Press__FP11_zEntButtonUi
/* 801148F8 001119D8  38 80 00 00 */	li r4, 0x0
.L_801148FC:
/* 801148FC 001119DC  C0 1E 01 90 */	lfs f0, 0x190(r30)
/* 80114900 001119E0  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80114904 001119E4  4C 41 13 82 */	cror eq, gt, eq
/* 80114908 001119E8  40 82 00 18 */	bne .L_80114920
/* 8011490C 001119EC  54 80 06 3F */	clrlwi. r0, r4, 24
/* 80114910 001119F0  41 82 00 10 */	beq .L_80114920
/* 80114914 001119F4  7F C3 F3 78 */	mr r3, r30
/* 80114918 001119F8  38 80 00 01 */	li r4, 0x1
/* 8011491C 001119FC  4B FF FC F5 */	bl "ouchie__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFb"
.L_80114920:
/* 80114920 00111A00  C0 22 9E 88 */	lfs f1, "@961"@sda21(r2)
.L_80114924:
/* 80114924 00111A04  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 80114928 00111A08  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8011492C 00111A0C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80114930 00111A10  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80114934 00111A14  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80114938 00111A18  7C 08 03 A6 */	mtlr r0
/* 8011493C 00111A1C  38 21 00 20 */	addi r1, r1, 0x20
/* 80114940 00111A20  4E 80 00 20 */	blr
.endfn "trigger_collision__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRQ412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type8ent_infofRC7xCollis"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::collide(xCollis&, const xSphere&, const xEnt&) const
.fn "collide__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFR7xCollisRC7xSphereRC4xEnt", local
/* 80114944 00111A24  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80114948 00111A28  7C 08 02 A6 */	mflr r0
/* 8011494C 00111A2C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80114950 00111A30  88 06 00 22 */	lbz r0, 0x22(r6)
/* 80114954 00111A34  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80114958 00111A38  7C DF 33 78 */	mr r31, r6
/* 8011495C 00111A3C  54 00 06 F7 */	rlwinm. r0, r0, 0, 27, 27
/* 80114960 00111A40  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80114964 00111A44  7C BE 2B 78 */	mr r30, r5
/* 80114968 00111A48  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8011496C 00111A4C  7C 9D 23 78 */	mr r29, r4
/* 80114970 00111A50  41 82 00 10 */	beq .L_80114980
/* 80114974 00111A54  88 1F 00 23 */	lbz r0, 0x23(r31)
/* 80114978 00111A58  54 00 06 F7 */	rlwinm. r0, r0, 0, 27, 27
/* 8011497C 00111A5C  40 82 00 0C */	bne .L_80114988
.L_80114980:
/* 80114980 00111A60  38 60 00 00 */	li r3, 0x0
/* 80114984 00111A64  48 00 00 5C */	b .L_801149E0
.L_80114988:
/* 80114988 00111A68  7F C3 F3 78 */	mr r3, r30
/* 8011498C 00111A6C  7F A5 EB 78 */	mr r5, r29
/* 80114990 00111A70  38 9F 00 64 */	addi r4, r31, 0x64
/* 80114994 00111A74  4B EF 64 11 */	bl xSphereHitsBound__FPC7xSpherePC6xBoundP7xCollis
/* 80114998 00111A78  80 1D 00 00 */	lwz r0, 0x0(r29)
/* 8011499C 00111A7C  54 00 07 FF */	clrlwi. r0, r0, 31
/* 801149A0 00111A80  40 82 00 0C */	bne .L_801149AC
/* 801149A4 00111A84  38 60 00 00 */	li r3, 0x0
/* 801149A8 00111A88  48 00 00 38 */	b .L_801149E0
.L_801149AC:
/* 801149AC 00111A8C  88 1F 00 21 */	lbz r0, 0x21(r31)
/* 801149B0 00111A90  28 00 00 05 */	cmplwi r0, 0x5
/* 801149B4 00111A94  40 82 00 28 */	bne .L_801149DC
/* 801149B8 00111A98  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 801149BC 00111A9C  7F C3 F3 78 */	mr r3, r30
/* 801149C0 00111AA0  7F A5 EB 78 */	mr r5, r29
/* 801149C4 00111AA4  4B EF AE A1 */	bl xSphereHitsModel__FPC7xSpherePC14xModelInstanceP7xCollis
/* 801149C8 00111AA8  80 1D 00 00 */	lwz r0, 0x0(r29)
/* 801149CC 00111AAC  54 00 07 FF */	clrlwi. r0, r0, 31
/* 801149D0 00111AB0  40 82 00 0C */	bne .L_801149DC
/* 801149D4 00111AB4  38 60 00 00 */	li r3, 0x0
/* 801149D8 00111AB8  48 00 00 08 */	b .L_801149E0
.L_801149DC:
/* 801149DC 00111ABC  38 60 00 01 */	li r3, 0x1
.L_801149E0:
/* 801149E0 00111AC0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801149E4 00111AC4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801149E8 00111AC8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801149EC 00111ACC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801149F0 00111AD0  7C 08 03 A6 */	mtlr r0
/* 801149F4 00111AD4  38 21 00 20 */	addi r1, r1, 0x20
/* 801149F8 00111AD8  4E 80 00 20 */	blr
.endfn "collide__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFR7xCollisRC7xSphereRC4xEnt"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::collide_start(xScene&)
.fn "collide_start__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFR6xScene", local
/* 801149FC 00111ADC  94 21 FE D0 */	stwu r1, -0x130(r1)
/* 80114A00 00111AE0  7C 08 02 A6 */	mflr r0
/* 80114A04 00111AE4  90 01 01 34 */	stw r0, 0x134(r1)
/* 80114A08 00111AE8  93 E1 01 2C */	stw r31, 0x12c(r1)
/* 80114A0C 00111AEC  7C 9F 23 78 */	mr r31, r4
/* 80114A10 00111AF0  93 C1 01 28 */	stw r30, 0x128(r1)
/* 80114A14 00111AF4  7C 7E 1B 78 */	mr r30, r3
/* 80114A18 00111AF8  38 61 00 50 */	addi r3, r1, 0x50
/* 80114A1C 00111AFC  93 A1 01 24 */	stw r29, 0x124(r1)
/* 80114A20 00111B00  38 9E 00 20 */	addi r4, r30, 0x20
/* 80114A24 00111B04  38 BE 00 08 */	addi r5, r30, 0x8
/* 80114A28 00111B08  93 81 01 20 */	stw r28, 0x120(r1)
/* 80114A2C 00111B0C  4B EF 67 A1 */	bl __mi__5xVec3CFRC5xVec3
/* 80114A30 00111B10  38 61 00 50 */	addi r3, r1, 0x50
/* 80114A34 00111B14  4B EF 67 75 */	bl length__5xVec3CFv
/* 80114A38 00111B18  3C 60 80 3C */	lis r3, globals@ha
/* 80114A3C 00111B1C  C0 42 9E 8C */	lfs f2, "@969"@sda21(r2)
/* 80114A40 00111B20  38 83 05 58 */	addi r4, r3, globals@l
/* 80114A44 00111B24  38 61 00 38 */	addi r3, r1, 0x38
/* 80114A48 00111B28  C0 04 07 74 */	lfs f0, 0x774(r4)
/* 80114A4C 00111B2C  38 9E 00 20 */	addi r4, r30, 0x20
/* 80114A50 00111B30  38 BE 00 08 */	addi r5, r30, 0x8
/* 80114A54 00111B34  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80114A58 00111B38  D0 01 00 74 */	stfs f0, 0x74(r1)
/* 80114A5C 00111B3C  4B F0 09 85 */	bl __pl__5xVec3CFRC5xVec3
/* 80114A60 00111B40  C0 22 9E 8C */	lfs f1, "@969"@sda21(r2)
/* 80114A64 00111B44  38 61 00 44 */	addi r3, r1, 0x44
/* 80114A68 00111B48  38 81 00 38 */	addi r4, r1, 0x38
/* 80114A6C 00111B4C  4B EF 66 B5 */	bl __ml__5xVec3CFf
/* 80114A70 00111B50  38 61 00 68 */	addi r3, r1, 0x68
/* 80114A74 00111B54  38 81 00 44 */	addi r4, r1, 0x44
/* 80114A78 00111B58  4B EF 67 ED */	bl __as__5xVec3FRC5xVec3
/* 80114A7C 00111B5C  7F C4 F3 78 */	mr r4, r30
/* 80114A80 00111B60  38 61 00 2C */	addi r3, r1, 0x2c
/* 80114A84 00111B64  38 A1 00 68 */	addi r5, r1, 0x68
/* 80114A88 00111B68  4B FF F4 A9 */	bl "local_to_world__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFRC5xVec3"
/* 80114A8C 00111B6C  38 61 00 68 */	addi r3, r1, 0x68
/* 80114A90 00111B70  38 81 00 2C */	addi r4, r1, 0x2c
/* 80114A94 00111B74  4B EF 67 D1 */	bl __as__5xVec3FRC5xVec3
/* 80114A98 00111B78  38 00 00 02 */	li r0, 0x2
/* 80114A9C 00111B7C  3B A1 00 F8 */	addi r29, r1, 0xf8
/* 80114AA0 00111B80  98 01 00 E8 */	stb r0, 0xe8(r1)
/* 80114AA4 00111B84  7F A3 EB 78 */	mr r3, r29
/* 80114AA8 00111B88  38 81 00 68 */	addi r4, r1, 0x68
/* 80114AAC 00111B8C  48 00 18 C5 */	bl xBoxFromSphere__FR4xBoxRC7xSphere
/* 80114AB0 00111B90  3B 81 00 EC */	addi r28, r1, 0xec
/* 80114AB4 00111B94  7F A5 EB 78 */	mr r5, r29
/* 80114AB8 00111B98  7F 83 E3 78 */	mr r3, r28
/* 80114ABC 00111B9C  38 81 01 04 */	addi r4, r1, 0x104
/* 80114AC0 00111BA0  4B EF 65 F9 */	bl xVec3Add__FP5xVec3PC5xVec3PC5xVec3
/* 80114AC4 00111BA4  C0 22 9E 8C */	lfs f1, "@969"@sda21(r2)
/* 80114AC8 00111BA8  7F 83 E3 78 */	mr r3, r28
/* 80114ACC 00111BAC  7F 84 E3 78 */	mr r4, r28
/* 80114AD0 00111BB0  4B EF 65 C1 */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 80114AD4 00111BB4  7F A4 EB 78 */	mr r4, r29
/* 80114AD8 00111BB8  38 61 00 C8 */	addi r3, r1, 0xc8
/* 80114ADC 00111BBC  4B F0 0E 4D */	bl xQuickCullForBox__FP7xQCDataPC4xBox
/* 80114AE0 00111BC0  38 00 00 00 */	li r0, 0x0
/* 80114AE4 00111BC4  38 61 00 5C */	addi r3, r1, 0x5c
/* 80114AE8 00111BC8  90 1E 09 B8 */	stw r0, 0x9b8(r30)
/* 80114AEC 00111BCC  38 81 00 68 */	addi r4, r1, 0x68
/* 80114AF0 00111BD0  38 BE 01 B8 */	addi r5, r30, 0x1b8
/* 80114AF4 00111BD4  38 DE 09 B8 */	addi r6, r30, 0x9b8
/* 80114AF8 00111BD8  48 00 00 ED */	bl "__ct__Q412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type19cb_cache_collisionsFRC7xSpherePQ412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type8ent_infoRi"
/* 80114AFC 00111BDC  80 A1 00 5C */	lwz r5, 0x5c(r1)
/* 80114B00 00111BE0  3C 60 80 3D */	lis r3, colls_grid@ha
/* 80114B04 00111BE4  80 E1 00 60 */	lwz r7, 0x60(r1)
/* 80114B08 00111BE8  38 81 00 C8 */	addi r4, r1, 0xc8
/* 80114B0C 00111BEC  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80114B10 00111BF0  38 63 A6 D8 */	addi r3, r3, colls_grid@l
/* 80114B14 00111BF4  90 A1 00 20 */	stw r5, 0x20(r1)
/* 80114B18 00111BF8  7C 85 23 78 */	mr r5, r4
/* 80114B1C 00111BFC  38 C1 00 20 */	addi r6, r1, 0x20
/* 80114B20 00111C00  90 E1 00 24 */	stw r7, 0x24(r1)
/* 80114B24 00111C04  90 01 00 28 */	stw r0, 0x28(r1)
/* 80114B28 00111C08  48 00 18 A9 */	bl "xGridCheckBound<Q412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type19cb_cache_collisions>__FR5xGridRC6xBoundRC7xQCDataQ412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type19cb_cache_collisions"
/* 80114B2C 00111C0C  80 A1 00 5C */	lwz r5, 0x5c(r1)
/* 80114B30 00111C10  3C 60 80 3D */	lis r3, colls_oso_grid@ha
/* 80114B34 00111C14  80 E1 00 60 */	lwz r7, 0x60(r1)
/* 80114B38 00111C18  38 81 00 C8 */	addi r4, r1, 0xc8
/* 80114B3C 00111C1C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80114B40 00111C20  38 63 A7 74 */	addi r3, r3, colls_oso_grid@l
/* 80114B44 00111C24  90 A1 00 14 */	stw r5, 0x14(r1)
/* 80114B48 00111C28  7C 85 23 78 */	mr r5, r4
/* 80114B4C 00111C2C  38 C1 00 14 */	addi r6, r1, 0x14
/* 80114B50 00111C30  90 E1 00 18 */	stw r7, 0x18(r1)
/* 80114B54 00111C34  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80114B58 00111C38  48 00 18 79 */	bl "xGridCheckBound<Q412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type19cb_cache_collisions>__FR5xGridRC6xBoundRC7xQCDataQ412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type19cb_cache_collisions"
/* 80114B5C 00111C3C  80 A1 00 5C */	lwz r5, 0x5c(r1)
/* 80114B60 00111C40  3C 60 80 3D */	lis r3, npcs_grid@ha
/* 80114B64 00111C44  80 E1 00 60 */	lwz r7, 0x60(r1)
/* 80114B68 00111C48  38 81 00 C8 */	addi r4, r1, 0xc8
/* 80114B6C 00111C4C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80114B70 00111C50  38 63 A7 A8 */	addi r3, r3, npcs_grid@l
/* 80114B74 00111C54  90 A1 00 08 */	stw r5, 0x8(r1)
/* 80114B78 00111C58  7C 85 23 78 */	mr r5, r4
/* 80114B7C 00111C5C  38 C1 00 08 */	addi r6, r1, 0x8
/* 80114B80 00111C60  90 E1 00 0C */	stw r7, 0xc(r1)
/* 80114B84 00111C64  90 01 00 10 */	stw r0, 0x10(r1)
/* 80114B88 00111C68  48 00 18 49 */	bl "xGridCheckBound<Q412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type19cb_cache_collisions>__FR5xGridRC6xBoundRC7xQCDataQ412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type19cb_cache_collisions"
/* 80114B8C 00111C6C  38 00 00 00 */	li r0, 0x0
/* 80114B90 00111C70  38 61 00 68 */	addi r3, r1, 0x68
/* 80114B94 00111C74  90 01 00 78 */	stw r0, 0x78(r1)
/* 80114B98 00111C78  38 A1 00 78 */	addi r5, r1, 0x78
/* 80114B9C 00111C7C  80 1F 00 44 */	lwz r0, 0x44(r31)
/* 80114BA0 00111C80  90 1E 09 BC */	stw r0, 0x9bc(r30)
/* 80114BA4 00111C84  80 9F 00 44 */	lwz r4, 0x44(r31)
/* 80114BA8 00111C88  4B FA D0 C1 */	bl iSphereHitsEnv__FPC7xSpherePC4xEnvP7xCollis
/* 80114BAC 00111C8C  7C 83 00 D0 */	neg r4, r3
/* 80114BB0 00111C90  38 00 00 00 */	li r0, 0x0
/* 80114BB4 00111C94  7C 83 1B 78 */	or r3, r4, r3
/* 80114BB8 00111C98  54 63 0F FE */	srwi r3, r3, 31
/* 80114BBC 00111C9C  98 7E 09 C0 */	stb r3, 0x9c0(r30)
/* 80114BC0 00111CA0  90 1E 09 C4 */	stw r0, 0x9c4(r30)
/* 80114BC4 00111CA4  83 E1 01 2C */	lwz r31, 0x12c(r1)
/* 80114BC8 00111CA8  83 C1 01 28 */	lwz r30, 0x128(r1)
/* 80114BCC 00111CAC  83 A1 01 24 */	lwz r29, 0x124(r1)
/* 80114BD0 00111CB0  83 81 01 20 */	lwz r28, 0x120(r1)
/* 80114BD4 00111CB4  80 01 01 34 */	lwz r0, 0x134(r1)
/* 80114BD8 00111CB8  7C 08 03 A6 */	mtlr r0
/* 80114BDC 00111CBC  38 21 01 30 */	addi r1, r1, 0x130
/* 80114BE0 00111CC0  4E 80 00 20 */	blr
.endfn "collide_start__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFR6xScene"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::cb_cache_collisions::cb_cache_collisions(const xSphere&, bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::ent_info*, int&)
.fn "__ct__Q412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type19cb_cache_collisionsFRC7xSpherePQ412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type8ent_infoRi", local
/* 80114BE4 00111CC4  90 83 00 00 */	stw r4, 0x0(r3)
/* 80114BE8 00111CC8  90 A3 00 04 */	stw r5, 0x4(r3)
/* 80114BEC 00111CCC  90 C3 00 08 */	stw r6, 0x8(r3)
/* 80114BF0 00111CD0  4E 80 00 20 */	blr
.endfn "__ct__Q412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type19cb_cache_collisionsFRC7xSpherePQ412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type8ent_infoRi"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::update_camera(float)
.fn "update_camera__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", local
/* 80114BF4 00111CD4  94 21 FE D0 */	stwu r1, -0x130(r1)
/* 80114BF8 00111CD8  7C 08 02 A6 */	mflr r0
/* 80114BFC 00111CDC  90 01 01 34 */	stw r0, 0x134(r1)
/* 80114C00 00111CE0  DB E1 01 20 */	stfd f31, 0x120(r1)
/* 80114C04 00111CE4  F3 E1 01 28 */	psq_st f31, 0x128(r1), 0, qr0
/* 80114C08 00111CE8  DB C1 01 10 */	stfd f30, 0x110(r1)
/* 80114C0C 00111CEC  F3 C1 01 18 */	psq_st f30, 0x118(r1), 0, qr0
/* 80114C10 00111CF0  93 E1 01 0C */	stw r31, 0x10c(r1)
/* 80114C14 00111CF4  7C 7F 1B 78 */	mr r31, r3
/* 80114C18 00111CF8  FF E0 08 90 */	fmr f31, f1
/* 80114C1C 00111CFC  48 00 06 61 */	bl "update_free_look__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf"
/* 80114C20 00111D00  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80114C24 00111D04  40 82 03 24 */	bne .L_80114F48
/* 80114C28 00111D08  3C 60 80 27 */	lis r3, "@1502"@ha
/* 80114C2C 00111D0C  38 A3 A5 DC */	addi r5, r3, "@1502"@l
/* 80114C30 00111D10  80 85 00 00 */	lwz r4, 0x0(r5)
/* 80114C34 00111D14  80 65 00 04 */	lwz r3, 0x4(r5)
/* 80114C38 00111D18  80 05 00 08 */	lwz r0, 0x8(r5)
/* 80114C3C 00111D1C  90 81 00 98 */	stw r4, 0x98(r1)
/* 80114C40 00111D20  90 61 00 9C */	stw r3, 0x9c(r1)
/* 80114C44 00111D24  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 80114C48 00111D28  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 80114C4C 00111D2C  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80114C50 00111D30  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80114C54 00111D34  4C 41 13 82 */	cror eq, gt, eq
/* 80114C58 00111D38  40 82 00 14 */	bne .L_80114C6C
/* 80114C5C 00111D3C  38 61 00 C8 */	addi r3, r1, 0xc8
/* 80114C60 00111D40  38 81 00 98 */	addi r4, r1, 0x98
/* 80114C64 00111D44  4B EF 66 01 */	bl __as__5xVec3FRC5xVec3
/* 80114C68 00111D48  48 00 00 A4 */	b .L_80114D0C
.L_80114C6C:
/* 80114C6C 00111D4C  38 7F 00 08 */	addi r3, r31, 0x8
/* 80114C70 00111D50  4B EF 65 39 */	bl length__5xVec3CFv
/* 80114C74 00111D54  C0 5F 01 64 */	lfs f2, 0x164(r31)
/* 80114C78 00111D58  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80114C7C 00111D5C  40 80 00 70 */	bge .L_80114CEC
/* 80114C80 00111D60  C0 02 9E E0 */	lfs f0, "@2189"@sda21(r2)
/* 80114C84 00111D64  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80114C88 00111D68  40 80 00 14 */	bge .L_80114C9C
/* 80114C8C 00111D6C  38 61 00 C8 */	addi r3, r1, 0xc8
/* 80114C90 00111D70  38 81 00 98 */	addi r4, r1, 0x98
/* 80114C94 00111D74  4B EF 65 D1 */	bl __as__5xVec3FRC5xVec3
/* 80114C98 00111D78  48 00 00 74 */	b .L_80114D0C
.L_80114C9C:
/* 80114C9C 00111D7C  EF C1 10 24 */	fdivs f30, f1, f2
/* 80114CA0 00111D80  38 61 00 5C */	addi r3, r1, 0x5c
/* 80114CA4 00111D84  38 9F 00 08 */	addi r4, r31, 0x8
/* 80114CA8 00111D88  EC 3E 08 24 */	fdivs f1, f30, f1
/* 80114CAC 00111D8C  4B EF 64 75 */	bl __ml__5xVec3CFf
/* 80114CB0 00111D90  C0 02 9E 88 */	lfs f0, "@961"@sda21(r2)
/* 80114CB4 00111D94  38 61 00 68 */	addi r3, r1, 0x68
/* 80114CB8 00111D98  38 81 00 98 */	addi r4, r1, 0x98
/* 80114CBC 00111D9C  EC 20 F0 28 */	fsubs f1, f0, f30
/* 80114CC0 00111DA0  4B EF 64 61 */	bl __ml__5xVec3CFf
/* 80114CC4 00111DA4  38 61 00 74 */	addi r3, r1, 0x74
/* 80114CC8 00111DA8  38 81 00 68 */	addi r4, r1, 0x68
/* 80114CCC 00111DAC  38 A1 00 5C */	addi r5, r1, 0x5c
/* 80114CD0 00111DB0  4B F0 07 11 */	bl __pl__5xVec3CFRC5xVec3
/* 80114CD4 00111DB4  38 61 00 C8 */	addi r3, r1, 0xc8
/* 80114CD8 00111DB8  38 81 00 74 */	addi r4, r1, 0x74
/* 80114CDC 00111DBC  4B EF 65 89 */	bl __as__5xVec3FRC5xVec3
/* 80114CE0 00111DC0  38 61 00 C8 */	addi r3, r1, 0xc8
/* 80114CE4 00111DC4  4B F0 08 CD */	bl normalize__5xVec3Fv
/* 80114CE8 00111DC8  48 00 00 24 */	b .L_80114D0C
.L_80114CEC:
/* 80114CEC 00111DCC  C0 02 9E 88 */	lfs f0, "@961"@sda21(r2)
/* 80114CF0 00111DD0  38 61 00 50 */	addi r3, r1, 0x50
/* 80114CF4 00111DD4  38 9F 00 08 */	addi r4, r31, 0x8
/* 80114CF8 00111DD8  EC 20 08 24 */	fdivs f1, f0, f1
/* 80114CFC 00111DDC  4B EF 64 25 */	bl __ml__5xVec3CFf
/* 80114D00 00111DE0  38 61 00 C8 */	addi r3, r1, 0xc8
/* 80114D04 00111DE4  38 81 00 50 */	addi r4, r1, 0x50
/* 80114D08 00111DE8  4B EF 65 5D */	bl __as__5xVec3FRC5xVec3
.L_80114D0C:
/* 80114D0C 00111DEC  C0 1F 00 18 */	lfs f0, 0x18(r31)
/* 80114D10 00111DF0  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80114D14 00111DF4  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80114D18 00111DF8  4C 41 13 82 */	cror eq, gt, eq
/* 80114D1C 00111DFC  40 82 00 08 */	bne .L_80114D24
/* 80114D20 00111E00  48 00 00 10 */	b .L_80114D30
.L_80114D24:
/* 80114D24 00111E04  FC 20 00 50 */	fneg f1, f0
/* 80114D28 00111E08  C0 1F 01 78 */	lfs f0, 0x178(r31)
/* 80114D2C 00111E0C  EC 21 00 32 */	fmuls f1, f1, f0
.L_80114D30:
/* 80114D30 00111E10  C0 1F 01 64 */	lfs f0, 0x164(r31)
/* 80114D34 00111E14  38 61 00 44 */	addi r3, r1, 0x44
/* 80114D38 00111E18  38 81 00 C8 */	addi r4, r1, 0xc8
/* 80114D3C 00111E1C  EC 00 08 2A */	fadds f0, f0, f1
/* 80114D40 00111E20  FC 20 00 50 */	fneg f1, f0
/* 80114D44 00111E24  4B EF 63 DD */	bl __ml__5xVec3CFf
/* 80114D48 00111E28  38 61 00 BC */	addi r3, r1, 0xbc
/* 80114D4C 00111E2C  38 81 00 44 */	addi r4, r1, 0x44
/* 80114D50 00111E30  4B EF 65 15 */	bl __as__5xVec3FRC5xVec3
/* 80114D54 00111E34  C0 01 00 CC */	lfs f0, 0xcc(r1)
/* 80114D58 00111E38  38 61 00 B0 */	addi r3, r1, 0xb0
/* 80114D5C 00111E3C  C0 42 9E A0 */	lfs f2, "@1783"@sda21(r2)
/* 80114D60 00111E40  FC 00 00 50 */	fneg f0, f0
/* 80114D64 00111E44  C0 21 00 D0 */	lfs f1, 0xd0(r1)
/* 80114D68 00111E48  D0 41 00 B0 */	stfs f2, 0xb0(r1)
/* 80114D6C 00111E4C  D0 21 00 B4 */	stfs f1, 0xb4(r1)
/* 80114D70 00111E50  D0 01 00 B8 */	stfs f0, 0xb8(r1)
/* 80114D74 00111E54  4B F0 08 3D */	bl normalize__5xVec3Fv
/* 80114D78 00111E58  C0 3F 01 70 */	lfs f1, 0x170(r31)
/* 80114D7C 00111E5C  38 61 00 D4 */	addi r3, r1, 0xd4
/* 80114D80 00111E60  38 81 00 C8 */	addi r4, r1, 0xc8
/* 80114D84 00111E64  4B F0 6B 59 */	bl xMat3x3Rot__FP7xMat3x3PC5xVec3f
/* 80114D88 00111E68  38 61 00 B0 */	addi r3, r1, 0xb0
/* 80114D8C 00111E6C  38 81 00 D4 */	addi r4, r1, 0xd4
/* 80114D90 00111E70  7C 65 1B 78 */	mr r5, r3
/* 80114D94 00111E74  48 00 15 79 */	bl xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 80114D98 00111E78  C0 3F 01 6C */	lfs f1, 0x16c(r31)
/* 80114D9C 00111E7C  38 61 00 38 */	addi r3, r1, 0x38
/* 80114DA0 00111E80  38 81 00 B0 */	addi r4, r1, 0xb0
/* 80114DA4 00111E84  4B EF 63 7D */	bl __ml__5xVec3CFf
/* 80114DA8 00111E88  38 61 00 BC */	addi r3, r1, 0xbc
/* 80114DAC 00111E8C  38 81 00 38 */	addi r4, r1, 0x38
/* 80114DB0 00111E90  4B F0 06 95 */	bl __apl__5xVec3FRC5xVec3
/* 80114DB4 00111E94  38 61 00 2C */	addi r3, r1, 0x2c
/* 80114DB8 00111E98  38 9F 00 08 */	addi r4, r31, 0x8
/* 80114DBC 00111E9C  38 A1 00 BC */	addi r5, r1, 0xbc
/* 80114DC0 00111EA0  4B F0 06 21 */	bl __pl__5xVec3CFRC5xVec3
/* 80114DC4 00111EA4  38 61 00 A4 */	addi r3, r1, 0xa4
/* 80114DC8 00111EA8  38 81 00 2C */	addi r4, r1, 0x2c
/* 80114DCC 00111EAC  4B EF 64 99 */	bl __as__5xVec3FRC5xVec3
/* 80114DD0 00111EB0  38 61 00 20 */	addi r3, r1, 0x20
/* 80114DD4 00111EB4  38 81 00 A4 */	addi r4, r1, 0xa4
/* 80114DD8 00111EB8  38 BF 00 38 */	addi r5, r31, 0x38
/* 80114DDC 00111EBC  4B EF 63 F1 */	bl __mi__5xVec3CFRC5xVec3
/* 80114DE0 00111EC0  38 61 00 20 */	addi r3, r1, 0x20
/* 80114DE4 00111EC4  4B EF 63 19 */	bl length2__5xVec3CFv
/* 80114DE8 00111EC8  C0 02 9F 1C */	lfs f0, "@2550"@sda21(r2)
/* 80114DEC 00111ECC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80114DF0 00111ED0  40 81 01 2C */	ble .L_80114F1C
/* 80114DF4 00111ED4  80 BF 00 50 */	lwz r5, 0x50(r31)
/* 80114DF8 00111ED8  FC 20 F8 90 */	fmr f1, f31
/* 80114DFC 00111EDC  80 1F 00 54 */	lwz r0, 0x54(r31)
/* 80114E00 00111EE0  7F E3 FB 78 */	mr r3, r31
/* 80114E04 00111EE4  38 81 00 A4 */	addi r4, r1, 0xa4
/* 80114E08 00111EE8  90 A1 00 8C */	stw r5, 0x8c(r1)
/* 80114E0C 00111EEC  90 01 00 90 */	stw r0, 0x90(r1)
/* 80114E10 00111EF0  80 1F 00 58 */	lwz r0, 0x58(r31)
/* 80114E14 00111EF4  90 01 00 94 */	stw r0, 0x94(r1)
/* 80114E18 00111EF8  48 00 02 C9 */	bl "interpolate_camera_loc__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC5xVec3f"
/* 80114E1C 00111EFC  38 61 00 14 */	addi r3, r1, 0x14
/* 80114E20 00111F00  38 9F 00 50 */	addi r4, r31, 0x50
/* 80114E24 00111F04  38 A1 00 8C */	addi r5, r1, 0x8c
/* 80114E28 00111F08  4B EF 63 A5 */	bl __mi__5xVec3CFRC5xVec3
/* 80114E2C 00111F0C  C0 3F 00 14 */	lfs f1, 0x14(r31)
/* 80114E30 00111F10  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80114E34 00111F14  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80114E38 00111F18  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80114E3C 00111F1C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80114E40 00111F20  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80114E44 00111F24  90 81 00 80 */	stw r4, 0x80(r1)
/* 80114E48 00111F28  90 61 00 84 */	stw r3, 0x84(r1)
/* 80114E4C 00111F2C  90 01 00 88 */	stw r0, 0x88(r1)
/* 80114E50 00111F30  40 80 00 0C */	bge .L_80114E5C
/* 80114E54 00111F34  38 60 00 01 */	li r3, 0x1
/* 80114E58 00111F38  48 00 00 08 */	b .L_80114E60
.L_80114E5C:
/* 80114E5C 00111F3C  38 60 00 00 */	li r3, 0x0
.L_80114E60:
/* 80114E60 00111F40  C0 21 00 80 */	lfs f1, 0x80(r1)
/* 80114E64 00111F44  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80114E68 00111F48  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80114E6C 00111F4C  40 80 00 0C */	bge .L_80114E78
/* 80114E70 00111F50  38 00 00 01 */	li r0, 0x1
/* 80114E74 00111F54  48 00 00 08 */	b .L_80114E7C
.L_80114E78:
/* 80114E78 00111F58  38 00 00 00 */	li r0, 0x0
.L_80114E7C:
/* 80114E7C 00111F5C  7C 00 18 00 */	cmpw r0, r3
/* 80114E80 00111F60  41 82 00 0C */	beq .L_80114E8C
/* 80114E84 00111F64  C0 01 00 8C */	lfs f0, 0x8c(r1)
/* 80114E88 00111F68  D0 1F 00 50 */	stfs f0, 0x50(r31)
.L_80114E8C:
/* 80114E8C 00111F6C  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 80114E90 00111F70  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80114E94 00111F74  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80114E98 00111F78  40 80 00 0C */	bge .L_80114EA4
/* 80114E9C 00111F7C  38 60 00 01 */	li r3, 0x1
/* 80114EA0 00111F80  48 00 00 08 */	b .L_80114EA8
.L_80114EA4:
/* 80114EA4 00111F84  38 60 00 00 */	li r3, 0x0
.L_80114EA8:
/* 80114EA8 00111F88  C0 21 00 84 */	lfs f1, 0x84(r1)
/* 80114EAC 00111F8C  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80114EB0 00111F90  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80114EB4 00111F94  40 80 00 0C */	bge .L_80114EC0
/* 80114EB8 00111F98  38 00 00 01 */	li r0, 0x1
/* 80114EBC 00111F9C  48 00 00 08 */	b .L_80114EC4
.L_80114EC0:
/* 80114EC0 00111FA0  38 00 00 00 */	li r0, 0x0
.L_80114EC4:
/* 80114EC4 00111FA4  7C 00 18 00 */	cmpw r0, r3
/* 80114EC8 00111FA8  41 82 00 0C */	beq .L_80114ED4
/* 80114ECC 00111FAC  C0 01 00 90 */	lfs f0, 0x90(r1)
/* 80114ED0 00111FB0  D0 1F 00 54 */	stfs f0, 0x54(r31)
.L_80114ED4:
/* 80114ED4 00111FB4  C0 3F 00 1C */	lfs f1, 0x1c(r31)
/* 80114ED8 00111FB8  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80114EDC 00111FBC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80114EE0 00111FC0  40 80 00 0C */	bge .L_80114EEC
/* 80114EE4 00111FC4  38 60 00 01 */	li r3, 0x1
/* 80114EE8 00111FC8  48 00 00 08 */	b .L_80114EF0
.L_80114EEC:
/* 80114EEC 00111FCC  38 60 00 00 */	li r3, 0x0
.L_80114EF0:
/* 80114EF0 00111FD0  C0 21 00 88 */	lfs f1, 0x88(r1)
/* 80114EF4 00111FD4  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80114EF8 00111FD8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80114EFC 00111FDC  40 80 00 0C */	bge .L_80114F08
/* 80114F00 00111FE0  38 00 00 01 */	li r0, 0x1
/* 80114F04 00111FE4  48 00 00 08 */	b .L_80114F0C
.L_80114F08:
/* 80114F08 00111FE8  38 00 00 00 */	li r0, 0x0
.L_80114F0C:
/* 80114F0C 00111FEC  7C 00 18 00 */	cmpw r0, r3
/* 80114F10 00111FF0  41 82 00 0C */	beq .L_80114F1C
/* 80114F14 00111FF4  C0 01 00 94 */	lfs f0, 0x94(r1)
/* 80114F18 00111FF8  D0 1F 00 58 */	stfs f0, 0x58(r31)
.L_80114F1C:
/* 80114F1C 00111FFC  7F E4 FB 78 */	mr r4, r31
/* 80114F20 00112000  38 61 00 08 */	addi r3, r1, 0x8
/* 80114F24 00112004  38 BF 00 38 */	addi r5, r31, 0x38
/* 80114F28 00112008  4B FF F0 09 */	bl "local_to_world__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFRC5xVec3"
/* 80114F2C 0011200C  3C 60 80 3C */	lis r3, globals@ha
/* 80114F30 00112010  38 81 00 08 */	addi r4, r1, 0x8
/* 80114F34 00112014  38 63 05 58 */	addi r3, r3, globals@l
/* 80114F38 00112018  4B EF 87 E1 */	bl xCameraMove__FP7xCameraRC5xVec3
/* 80114F3C 0011201C  FC 20 F8 90 */	fmr f1, f31
/* 80114F40 00112020  7F E3 FB 78 */	mr r3, r31
/* 80114F44 00112024  48 00 00 29 */	bl "update_camera_direction__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf"
.L_80114F48:
/* 80114F48 00112028  E3 E1 01 28 */	psq_l f31, 0x128(r1), 0, qr0
/* 80114F4C 0011202C  CB E1 01 20 */	lfd f31, 0x120(r1)
/* 80114F50 00112030  E3 C1 01 18 */	psq_l f30, 0x118(r1), 0, qr0
/* 80114F54 00112034  CB C1 01 10 */	lfd f30, 0x110(r1)
/* 80114F58 00112038  80 01 01 34 */	lwz r0, 0x134(r1)
/* 80114F5C 0011203C  83 E1 01 0C */	lwz r31, 0x10c(r1)
/* 80114F60 00112040  7C 08 03 A6 */	mtlr r0
/* 80114F64 00112044  38 21 01 30 */	addi r1, r1, 0x130
/* 80114F68 00112048  4E 80 00 20 */	blr
.endfn "update_camera__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::update_camera_direction(float)
.fn "update_camera_direction__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", local
/* 80114F6C 0011204C  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80114F70 00112050  7C 08 02 A6 */	mflr r0
/* 80114F74 00112054  90 01 00 74 */	stw r0, 0x74(r1)
/* 80114F78 00112058  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 80114F7C 0011205C  7C 7F 1B 78 */	mr r31, r3
/* 80114F80 00112060  38 61 00 2C */	addi r3, r1, 0x2c
/* 80114F84 00112064  80 DF 00 50 */	lwz r6, 0x50(r31)
/* 80114F88 00112068  38 9F 00 08 */	addi r4, r31, 0x8
/* 80114F8C 0011206C  80 1F 00 54 */	lwz r0, 0x54(r31)
/* 80114F90 00112070  38 BF 00 38 */	addi r5, r31, 0x38
/* 80114F94 00112074  90 C1 00 50 */	stw r6, 0x50(r1)
/* 80114F98 00112078  90 01 00 54 */	stw r0, 0x54(r1)
/* 80114F9C 0011207C  80 1F 00 58 */	lwz r0, 0x58(r31)
/* 80114FA0 00112080  90 01 00 58 */	stw r0, 0x58(r1)
/* 80114FA4 00112084  4B EF 62 29 */	bl __mi__5xVec3CFRC5xVec3
/* 80114FA8 00112088  38 61 00 38 */	addi r3, r1, 0x38
/* 80114FAC 0011208C  38 81 00 2C */	addi r4, r1, 0x2c
/* 80114FB0 00112090  48 00 12 FD */	bl normal__5xVec3CFv
/* 80114FB4 00112094  80 E1 00 38 */	lwz r7, 0x38(r1)
/* 80114FB8 00112098  38 61 00 08 */	addi r3, r1, 0x8
/* 80114FBC 0011209C  80 C1 00 3C */	lwz r6, 0x3c(r1)
/* 80114FC0 001120A0  38 81 00 44 */	addi r4, r1, 0x44
/* 80114FC4 001120A4  80 01 00 40 */	lwz r0, 0x40(r1)
/* 80114FC8 001120A8  38 A1 00 50 */	addi r5, r1, 0x50
/* 80114FCC 001120AC  90 E1 00 44 */	stw r7, 0x44(r1)
/* 80114FD0 001120B0  90 C1 00 48 */	stw r6, 0x48(r1)
/* 80114FD4 001120B4  90 01 00 4C */	stw r0, 0x4c(r1)
/* 80114FD8 001120B8  4B EF 61 F5 */	bl __mi__5xVec3CFRC5xVec3
/* 80114FDC 001120BC  C0 3F 01 74 */	lfs f1, 0x174(r31)
/* 80114FE0 001120C0  38 61 00 14 */	addi r3, r1, 0x14
/* 80114FE4 001120C4  38 81 00 08 */	addi r4, r1, 0x8
/* 80114FE8 001120C8  4B EF 61 39 */	bl __ml__5xVec3CFf
/* 80114FEC 001120CC  38 61 00 20 */	addi r3, r1, 0x20
/* 80114FF0 001120D0  38 81 00 50 */	addi r4, r1, 0x50
/* 80114FF4 001120D4  38 A1 00 14 */	addi r5, r1, 0x14
/* 80114FF8 001120D8  4B F0 03 E9 */	bl __pl__5xVec3CFRC5xVec3
/* 80114FFC 001120DC  38 7F 00 50 */	addi r3, r31, 0x50
/* 80115000 001120E0  38 81 00 20 */	addi r4, r1, 0x20
/* 80115004 001120E4  4B EF 62 61 */	bl __as__5xVec3FRC5xVec3
/* 80115008 001120E8  38 7F 00 50 */	addi r3, r31, 0x50
/* 8011500C 001120EC  4B F0 05 A5 */	bl normalize__5xVec3Fv
/* 80115010 001120F0  7F E3 FB 78 */	mr r3, r31
/* 80115014 001120F4  48 00 00 19 */	bl "rotate_camera__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv"
/* 80115018 001120F8  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8011501C 001120FC  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 80115020 00112100  7C 08 03 A6 */	mtlr r0
/* 80115024 00112104  38 21 00 70 */	addi r1, r1, 0x70
/* 80115028 00112108  4E 80 00 20 */	blr
.endfn "update_camera_direction__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::rotate_camera()
.fn "rotate_camera__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv", local
/* 8011502C 0011210C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80115030 00112110  7C 08 02 A6 */	mflr r0
/* 80115034 00112114  90 01 00 24 */	stw r0, 0x24(r1)
/* 80115038 00112118  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8011503C 0011211C  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 80115040 00112120  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80115044 00112124  7C 7F 1B 78 */	mr r31, r3
/* 80115048 00112128  C0 02 9E AC */	lfs f0, "@1811"@sda21(r2)
/* 8011504C 0011212C  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80115050 00112130  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80115054 00112134  4C 40 13 82 */	cror eq, lt, eq
/* 80115058 00112138  40 82 00 10 */	bne .L_80115068
/* 8011505C 0011213C  C3 E2 9E A0 */	lfs f31, "@1783"@sda21(r2)
/* 80115060 00112140  C0 42 9F 20 */	lfs f2, "@2555"@sda21(r2)
/* 80115064 00112144  48 00 00 24 */	b .L_80115088
.L_80115068:
/* 80115068 00112148  C0 3F 00 50 */	lfs f1, 0x50(r31)
/* 8011506C 0011214C  C0 5F 00 58 */	lfs f2, 0x58(r31)
/* 80115070 00112150  4B EF 10 01 */	bl xatan2__Fff
/* 80115074 00112154  FC 00 08 90 */	fmr f0, f1
/* 80115078 00112158  C0 3F 00 54 */	lfs f1, 0x54(r31)
/* 8011507C 0011215C  FF E0 00 90 */	fmr f31, f0
/* 80115080 00112160  4B EF 8C F9 */	bl xasin__Ff
/* 80115084 00112164  FC 40 08 50 */	fneg f2, f1
.L_80115088:
/* 80115088 00112168  C0 9F 00 94 */	lfs f4, 0x94(r31)
/* 8011508C 0011216C  3C 60 80 3C */	lis r3, globals@ha
/* 80115090 00112170  C0 1F 01 B4 */	lfs f0, 0x1b4(r31)
/* 80115094 00112174  FC 20 F8 90 */	fmr f1, f31
/* 80115098 00112178  C0 7F 01 68 */	lfs f3, 0x168(r31)
/* 8011509C 0011217C  38 63 05 58 */	addi r3, r3, globals@l
/* 801150A0 00112180  EC 04 00 32 */	fmuls f0, f4, f0
/* 801150A4 00112184  38 80 00 00 */	li r4, 0x0
/* 801150A8 00112188  EC 7F 18 28 */	fsubs f3, f31, f3
/* 801150AC 0011218C  D0 1F 00 94 */	stfs f0, 0x94(r31)
/* 801150B0 00112190  EC 64 18 2A */	fadds f3, f4, f3
/* 801150B4 00112194  C0 82 9E A0 */	lfs f4, "@1783"@sda21(r2)
/* 801150B8 00112198  FC A0 20 90 */	fmr f5, f4
/* 801150BC 0011219C  FC C0 20 90 */	fmr f6, f4
/* 801150C0 001121A0  4B EF 89 2D */	bl xCameraLookYPR__FP7xCameraUiffffff
/* 801150C4 001121A4  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 801150C8 001121A8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801150CC 001121AC  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 801150D0 001121B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801150D4 001121B4  7C 08 03 A6 */	mtlr r0
/* 801150D8 001121B8  38 21 00 20 */	addi r1, r1, 0x20
/* 801150DC 001121BC  4E 80 00 20 */	blr
.endfn "rotate_camera__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::interpolate_camera_loc(const xVec3&, float)
.fn "interpolate_camera_loc__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC5xVec3f", local
/* 801150E0 001121C0  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 801150E4 001121C4  7C 08 02 A6 */	mflr r0
/* 801150E8 001121C8  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 801150EC 001121CC  DB E1 00 E0 */	stfd f31, 0xe0(r1)
/* 801150F0 001121D0  F3 E1 00 E8 */	psq_st f31, 0xe8(r1), 0, qr0
/* 801150F4 001121D4  DB C1 00 D0 */	stfd f30, 0xd0(r1)
/* 801150F8 001121D8  F3 C1 00 D8 */	psq_st f30, 0xd8(r1), 0, qr0
/* 801150FC 001121DC  DB A1 00 C0 */	stfd f29, 0xc0(r1)
/* 80115100 001121E0  F3 A1 00 C8 */	psq_st f29, 0xc8(r1), 0, qr0
/* 80115104 001121E4  93 E1 00 BC */	stw r31, 0xbc(r1)
/* 80115108 001121E8  93 C1 00 B8 */	stw r30, 0xb8(r1)
/* 8011510C 001121EC  93 A1 00 B4 */	stw r29, 0xb4(r1)
/* 80115110 001121F0  7C 7D 1B 78 */	mr r29, r3
/* 80115114 001121F4  FF A0 08 90 */	fmr f29, f1
/* 80115118 001121F8  C0 23 01 68 */	lfs f1, 0x168(r3)
/* 8011511C 001121FC  7C 9E 23 78 */	mr r30, r4
/* 80115120 00112200  C0 03 01 70 */	lfs f0, 0x170(r3)
/* 80115124 00112204  EF C1 00 28 */	fsubs f30, f1, f0
/* 80115128 00112208  FC 20 F0 90 */	fmr f1, f30
/* 8011512C 0011220C  4B FA FD 21 */	bl isin__Ff
/* 80115130 00112210  FF E0 08 90 */	fmr f31, f1
/* 80115134 00112214  FC 20 F0 90 */	fmr f1, f30
/* 80115138 00112218  4B FA FD 59 */	bl icos__Ff
/* 8011513C 0011221C  FC 60 F8 90 */	fmr f3, f31
/* 80115140 00112220  C0 42 9E A0 */	lfs f2, "@1783"@sda21(r2)
/* 80115144 00112224  38 61 00 20 */	addi r3, r1, 0x20
/* 80115148 00112228  4B F4 AE 41 */	bl create__5xVec3Ffff
/* 8011514C 0011222C  38 61 00 74 */	addi r3, r1, 0x74
/* 80115150 00112230  38 81 00 20 */	addi r4, r1, 0x20
/* 80115154 00112234  4B EF 61 11 */	bl __as__5xVec3FRC5xVec3
/* 80115158 00112238  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 8011515C 0011223C  38 61 00 14 */	addi r3, r1, 0x14
/* 80115160 00112240  C0 42 9E 88 */	lfs f2, "@961"@sda21(r2)
/* 80115164 00112244  FC 60 08 90 */	fmr f3, f1
/* 80115168 00112248  4B F4 AE 21 */	bl create__5xVec3Ffff
/* 8011516C 0011224C  38 61 00 84 */	addi r3, r1, 0x84
/* 80115170 00112250  38 81 00 14 */	addi r4, r1, 0x14
/* 80115174 00112254  4B EF 60 F1 */	bl __as__5xVec3FRC5xVec3
/* 80115178 00112258  C0 01 00 7C */	lfs f0, 0x7c(r1)
/* 8011517C 0011225C  38 61 00 08 */	addi r3, r1, 0x8
/* 80115180 00112260  C0 42 9E A0 */	lfs f2, "@1783"@sda21(r2)
/* 80115184 00112264  FC 20 00 50 */	fneg f1, f0
/* 80115188 00112268  C0 61 00 74 */	lfs f3, 0x74(r1)
/* 8011518C 0011226C  4B F4 AD FD */	bl create__5xVec3Ffff
/* 80115190 00112270  3B E1 00 94 */	addi r31, r1, 0x94
/* 80115194 00112274  38 81 00 08 */	addi r4, r1, 0x8
/* 80115198 00112278  7F E3 FB 78 */	mr r3, r31
/* 8011519C 0011227C  4B EF 60 C9 */	bl __as__5xVec3FRC5xVec3
/* 801151A0 00112280  38 61 00 74 */	addi r3, r1, 0x74
/* 801151A4 00112284  4B F0 04 0D */	bl normalize__5xVec3Fv
/* 801151A8 00112288  7F E3 FB 78 */	mr r3, r31
/* 801151AC 0011228C  4B F0 04 05 */	bl normalize__5xVec3Fv
/* 801151B0 00112290  38 61 00 38 */	addi r3, r1, 0x38
/* 801151B4 00112294  38 81 00 74 */	addi r4, r1, 0x74
/* 801151B8 00112298  38 BD 00 38 */	addi r5, r29, 0x38
/* 801151BC 0011229C  48 00 11 51 */	bl xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 801151C0 001122A0  7F C5 F3 78 */	mr r5, r30
/* 801151C4 001122A4  38 61 00 2C */	addi r3, r1, 0x2c
/* 801151C8 001122A8  38 81 00 74 */	addi r4, r1, 0x74
/* 801151CC 001122AC  48 00 11 41 */	bl xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 801151D0 001122B0  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801151D4 001122B4  38 63 37 88 */	addi r3, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801151D8 001122B8  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 801151DC 001122BC  FC 00 00 50 */	fneg f0, f0
/* 801151E0 001122C0  EC 20 07 72 */	fmuls f1, f0, f29
/* 801151E4 001122C4  4B EF 95 CD */	bl xexp__Ff
/* 801151E8 001122C8  C0 42 9E 88 */	lfs f2, "@961"@sda21(r2)
/* 801151EC 001122CC  38 61 00 44 */	addi r3, r1, 0x44
/* 801151F0 001122D0  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 801151F4 001122D4  38 81 00 74 */	addi r4, r1, 0x74
/* 801151F8 001122D8  C0 A1 00 38 */	lfs f5, 0x38(r1)
/* 801151FC 001122DC  EC C2 08 28 */	fsubs f6, f2, f1
/* 80115200 001122E0  C0 41 00 30 */	lfs f2, 0x30(r1)
/* 80115204 001122E4  C0 61 00 3C */	lfs f3, 0x3c(r1)
/* 80115208 001122E8  EC 80 28 28 */	fsubs f4, f0, f5
/* 8011520C 001122EC  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 80115210 001122F0  C0 21 00 40 */	lfs f1, 0x40(r1)
/* 80115214 001122F4  EC 42 18 28 */	fsubs f2, f2, f3
/* 80115218 001122F8  EC 86 29 3A */	fmadds f4, f6, f4, f5
/* 8011521C 001122FC  EC 00 08 28 */	fsubs f0, f0, f1
/* 80115220 00112300  EC 46 18 BA */	fmadds f2, f6, f2, f3
/* 80115224 00112304  D0 81 00 38 */	stfs f4, 0x38(r1)
/* 80115228 00112308  EC 06 08 3A */	fmadds f0, f6, f0, f1
/* 8011522C 0011230C  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 80115230 00112310  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 80115234 00112314  4B F1 D5 F1 */	bl xMat3x3Transpose__FP7xMat3x3PC7xMat3x3
/* 80115238 00112318  38 7D 00 38 */	addi r3, r29, 0x38
/* 8011523C 0011231C  38 81 00 44 */	addi r4, r1, 0x44
/* 80115240 00112320  38 A1 00 38 */	addi r5, r1, 0x38
/* 80115244 00112324  48 00 10 C9 */	bl xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 80115248 00112328  E3 E1 00 E8 */	psq_l f31, 0xe8(r1), 0, qr0
/* 8011524C 0011232C  CB E1 00 E0 */	lfd f31, 0xe0(r1)
/* 80115250 00112330  E3 C1 00 D8 */	psq_l f30, 0xd8(r1), 0, qr0
/* 80115254 00112334  CB C1 00 D0 */	lfd f30, 0xd0(r1)
/* 80115258 00112338  E3 A1 00 C8 */	psq_l f29, 0xc8(r1), 0, qr0
/* 8011525C 0011233C  CB A1 00 C0 */	lfd f29, 0xc0(r1)
/* 80115260 00112340  83 E1 00 BC */	lwz r31, 0xbc(r1)
/* 80115264 00112344  83 C1 00 B8 */	lwz r30, 0xb8(r1)
/* 80115268 00112348  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 8011526C 0011234C  83 A1 00 B4 */	lwz r29, 0xb4(r1)
/* 80115270 00112350  7C 08 03 A6 */	mtlr r0
/* 80115274 00112354  38 21 00 F0 */	addi r1, r1, 0xf0
/* 80115278 00112358  4E 80 00 20 */	blr
.endfn "interpolate_camera_loc__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC5xVec3f"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::update_free_look(float)
.fn "update_free_look__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", local
/* 8011527C 0011235C  38 60 00 00 */	li r3, 0x0
/* 80115280 00112360  4E 80 00 20 */	blr
.endfn "update_free_look__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::update_animation(float)
.fn "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", local
/* 80115284 00112364  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80115288 00112368  7C 08 02 A6 */	mflr r0
/* 8011528C 0011236C  90 01 00 64 */	stw r0, 0x64(r1)
/* 80115290 00112370  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80115294 00112374  F3 E1 00 58 */	psq_st f31, 0x58(r1), 0, qr0
/* 80115298 00112378  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 8011529C 0011237C  F3 C1 00 48 */	psq_st f30, 0x48(r1), 0, qr0
/* 801152A0 00112380  BF 61 00 2C */	stmw r27, 0x2c(r1)
/* 801152A4 00112384  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801152A8 00112388  3C A0 80 3C */	lis r5, globals@ha
/* 801152AC 0011238C  3B E4 7A 68 */	addi r31, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801152B0 00112390  FF E0 08 90 */	fmr f31, f1
/* 801152B4 00112394  80 1F 01 98 */	lwz r0, 0x198(r31)
/* 801152B8 00112398  3B C5 05 58 */	addi r30, r5, globals@l
/* 801152BC 0011239C  80 9E 07 04 */	lwz r4, 0x704(r30)
/* 801152C0 001123A0  7C 7C 1B 78 */	mr r28, r3
/* 801152C4 001123A4  54 00 06 31 */	rlwinm. r0, r0, 0, 24, 24
/* 801152C8 001123A8  83 A4 00 0C */	lwz r29, 0xc(r4)
/* 801152CC 001123AC  41 82 00 60 */	beq .L_8011532C
/* 801152D0 001123B0  80 7D 00 08 */	lwz r3, 0x8(r29)
/* 801152D4 001123B4  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 801152D8 001123B8  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 801152DC 001123BC  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 801152E0 001123C0  40 82 00 4C */	bne .L_8011532C
/* 801152E4 001123C4  4B F2 C8 F9 */	bl xScrFxIsFading__Fv
/* 801152E8 001123C8  2C 03 00 00 */	cmpwi r3, 0x0
/* 801152EC 001123CC  40 82 00 40 */	bne .L_8011532C
/* 801152F0 001123D0  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801152F4 001123D4  3C 80 80 3C */	lis r4, globals@ha
/* 801152F8 001123D8  38 A3 37 88 */	addi r5, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801152FC 001123DC  C0 25 00 18 */	lfs f1, 0x18(r5)
/* 80115300 001123E0  38 C4 05 58 */	addi r6, r4, globals@l
/* 80115304 001123E4  38 61 00 08 */	addi r3, r1, 0x8
/* 80115308 001123E8  38 81 00 0C */	addi r4, r1, 0xc
/* 8011530C 001123EC  D0 26 17 08 */	stfs f1, 0x1708(r6)
/* 80115310 001123F0  38 A0 00 00 */	li r5, 0x0
/* 80115314 001123F4  38 C0 00 01 */	li r6, 0x1
/* 80115318 001123F8  80 02 9E 9C */	lwz r0, "@1560"@sda21(r2)
/* 8011531C 001123FC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80115320 00112400  80 02 BF 40 */	lwz r0, "@1561"@sda21(r2)
/* 80115324 00112404  90 01 00 08 */	stw r0, 0x8(r1)
/* 80115328 00112408  4B F2 C7 F1 */	bl xScrFxFade__FP10iColor_tagP10iColor_tagfPFv_vi
.L_8011532C:
/* 8011532C 0011240C  80 DE 07 04 */	lwz r6, 0x704(r30)
/* 80115330 00112410  7F 84 E3 78 */	mr r4, r28
/* 80115334 00112414  38 61 00 10 */	addi r3, r1, 0x10
/* 80115338 00112418  38 BC 00 08 */	addi r5, r28, 0x8
/* 8011533C 0011241C  83 66 00 4C */	lwz r27, 0x4c(r6)
/* 80115340 00112420  4B FF EB F1 */	bl "local_to_world__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFRC5xVec3"
/* 80115344 00112424  38 7B 00 30 */	addi r3, r27, 0x30
/* 80115348 00112428  38 81 00 10 */	addi r4, r1, 0x10
/* 8011534C 0011242C  4B EF 5F 19 */	bl __as__5xVec3FRC5xVec3
/* 80115350 00112430  C0 42 9E A0 */	lfs f2, "@1783"@sda21(r2)
/* 80115354 00112434  7F 63 DB 78 */	mr r3, r27
/* 80115358 00112438  C0 3C 00 6C */	lfs f1, 0x6c(r28)
/* 8011535C 0011243C  FC 60 10 90 */	fmr f3, f2
/* 80115360 00112440  4B F1 CE 71 */	bl xMat3x3Euler__FP7xMat3x3fff
/* 80115364 00112444  C0 5C 01 54 */	lfs f2, 0x154(r28)
/* 80115368 00112448  C0 3C 00 0C */	lfs f1, 0xc(r28)
/* 8011536C 0011244C  C0 1C 01 58 */	lfs f0, 0x158(r28)
/* 80115370 00112450  EC 61 10 28 */	fsubs f3, f1, f2
/* 80115374 00112454  C0 3C 00 68 */	lfs f1, 0x68(r28)
/* 80115378 00112458  EC 40 10 28 */	fsubs f2, f0, f2
/* 8011537C 0011245C  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80115380 00112460  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80115384 00112464  EF C3 10 24 */	fdivs f30, f3, f2
/* 80115388 00112468  40 81 00 18 */	ble .L_801153A0
/* 8011538C 0011246C  80 1F 01 98 */	lwz r0, 0x198(r31)
/* 80115390 00112470  54 00 07 B2 */	rlwinm r0, r0, 0, 30, 25
/* 80115394 00112474  60 00 00 01 */	ori r0, r0, 0x1
/* 80115398 00112478  90 1F 01 98 */	stw r0, 0x198(r31)
/* 8011539C 0011247C  48 00 00 5C */	b .L_801153F8
.L_801153A0:
/* 801153A0 00112480  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801153A4 00112484  38 63 37 88 */	addi r3, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801153A8 00112488  C0 03 00 04 */	lfs f0, 0x4(r3)
/* 801153AC 0011248C  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 801153B0 00112490  4C 40 13 82 */	cror eq, lt, eq
/* 801153B4 00112494  40 82 00 1C */	bne .L_801153D0
/* 801153B8 00112498  80 7F 01 98 */	lwz r3, 0x198(r31)
/* 801153BC 0011249C  38 00 FF CC */	li r0, -0x34
/* 801153C0 001124A0  7C 60 00 38 */	and r0, r3, r0
/* 801153C4 001124A4  60 00 00 04 */	ori r0, r0, 0x4
/* 801153C8 001124A8  90 1F 01 98 */	stw r0, 0x198(r31)
/* 801153CC 001124AC  48 00 00 2C */	b .L_801153F8
.L_801153D0:
/* 801153D0 001124B0  C0 22 9E 88 */	lfs f1, "@961"@sda21(r2)
/* 801153D4 001124B4  C0 03 00 00 */	lfs f0, 0x0(r3)
/* 801153D8 001124B8  EC 01 00 28 */	fsubs f0, f1, f0
/* 801153DC 001124BC  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 801153E0 001124C0  4C 41 13 82 */	cror eq, gt, eq
/* 801153E4 001124C4  40 82 00 14 */	bne .L_801153F8
/* 801153E8 001124C8  80 1F 01 98 */	lwz r0, 0x198(r31)
/* 801153EC 001124CC  54 00 00 36 */	clrrwi r0, r0, 4
/* 801153F0 001124D0  60 00 00 10 */	ori r0, r0, 0x10
/* 801153F4 001124D4  90 1F 01 98 */	stw r0, 0x198(r31)
.L_801153F8:
/* 801153F8 001124D8  80 1F 01 98 */	lwz r0, 0x198(r31)
/* 801153FC 001124DC  28 00 00 20 */	cmplwi r0, 0x20
/* 80115400 001124E0  41 81 01 14 */	bgt .L_80115514
/* 80115404 001124E4  3C 60 80 29 */	lis r3, "@2594"@ha
/* 80115408 001124E8  54 00 10 3A */	slwi r0, r0, 2
/* 8011540C 001124EC  38 63 7C 58 */	addi r3, r3, "@2594"@l
/* 80115410 001124F0  7C 03 00 2E */	lwzx r0, r3, r0
/* 80115414 001124F4  7C 09 03 A6 */	mtctr r0
/* 80115418 001124F8  4E 80 04 20 */	bctr
.L_8011541C:
/* 8011541C 001124FC  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80115420 00112500  38 60 00 03 */	li r3, 0x3
/* 80115424 00112504  4B FF AE 95 */	bl "play_sound__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FQ312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10sound_enumf"
/* 80115428 00112508  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 8011542C 0011250C  38 60 00 00 */	li r3, 0x0
/* 80115430 00112510  4B FF AE 89 */	bl "play_sound__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FQ312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10sound_enumf"
/* 80115434 00112514  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80115438 00112518  7F A3 EB 78 */	mr r3, r29
/* 8011543C 0011251C  38 84 7A 68 */	addi r4, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80115440 00112520  80 84 00 20 */	lwz r4, 0x20(r4)
/* 80115444 00112524  4B EF 36 01 */	bl xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition
/* 80115448 00112528  80 1F 01 98 */	lwz r0, 0x198(r31)
/* 8011544C 0011252C  60 00 00 02 */	ori r0, r0, 0x2
/* 80115450 00112530  90 1F 01 98 */	stw r0, 0x198(r31)
/* 80115454 00112534  48 00 00 C0 */	b .L_80115514
.L_80115458:
/* 80115458 00112538  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 8011545C 0011253C  7F A3 EB 78 */	mr r3, r29
/* 80115460 00112540  38 84 7A 68 */	addi r4, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80115464 00112544  80 84 00 24 */	lwz r4, 0x24(r4)
/* 80115468 00112548  4B EF 35 DD */	bl xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition
/* 8011546C 0011254C  80 1F 01 98 */	lwz r0, 0x198(r31)
/* 80115470 00112550  54 00 07 FA */	rlwinm r0, r0, 0, 31, 29
/* 80115474 00112554  90 1F 01 98 */	stw r0, 0x198(r31)
/* 80115478 00112558  48 00 00 9C */	b .L_80115514
.L_8011547C:
/* 8011547C 0011255C  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80115480 00112560  38 60 00 04 */	li r3, 0x4
/* 80115484 00112564  4B FF AE 35 */	bl "play_sound__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FQ312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10sound_enumf"
/* 80115488 00112568  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 8011548C 0011256C  7F A3 EB 78 */	mr r3, r29
/* 80115490 00112570  38 84 7A 68 */	addi r4, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80115494 00112574  80 84 00 28 */	lwz r4, 0x28(r4)
/* 80115498 00112578  4B EF 35 AD */	bl xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition
/* 8011549C 0011257C  80 1F 01 98 */	lwz r0, 0x198(r31)
/* 801154A0 00112580  60 00 00 08 */	ori r0, r0, 0x8
/* 801154A4 00112584  90 1F 01 98 */	stw r0, 0x198(r31)
/* 801154A8 00112588  48 00 00 6C */	b .L_80115514
.L_801154AC:
/* 801154AC 0011258C  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801154B0 00112590  7F A3 EB 78 */	mr r3, r29
/* 801154B4 00112594  38 84 7A 68 */	addi r4, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801154B8 00112598  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 801154BC 0011259C  4B EF 35 89 */	bl xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition
/* 801154C0 001125A0  80 1F 01 98 */	lwz r0, 0x198(r31)
/* 801154C4 001125A4  54 00 07 76 */	rlwinm r0, r0, 0, 29, 27
/* 801154C8 001125A8  90 1F 01 98 */	stw r0, 0x198(r31)
/* 801154CC 001125AC  48 00 00 48 */	b .L_80115514
.L_801154D0:
/* 801154D0 001125B0  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801154D4 001125B4  7F A3 EB 78 */	mr r3, r29
/* 801154D8 001125B8  38 84 7A 68 */	addi r4, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801154DC 001125BC  80 84 00 30 */	lwz r4, 0x30(r4)
/* 801154E0 001125C0  4B EF 35 65 */	bl xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition
/* 801154E4 001125C4  80 1F 01 98 */	lwz r0, 0x198(r31)
/* 801154E8 001125C8  60 00 00 20 */	ori r0, r0, 0x20
/* 801154EC 001125CC  90 1F 01 98 */	stw r0, 0x198(r31)
/* 801154F0 001125D0  48 00 00 24 */	b .L_80115514
.L_801154F4:
/* 801154F4 001125D4  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801154F8 001125D8  7F A3 EB 78 */	mr r3, r29
/* 801154FC 001125DC  38 84 7A 68 */	addi r4, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80115500 001125E0  80 84 00 34 */	lwz r4, 0x34(r4)
/* 80115504 001125E4  4B EF 35 41 */	bl xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition
/* 80115508 001125E8  80 1F 01 98 */	lwz r0, 0x198(r31)
/* 8011550C 001125EC  54 00 06 F2 */	rlwinm r0, r0, 0, 27, 25
/* 80115510 001125F0  90 1F 01 98 */	stw r0, 0x198(r31)
.L_80115514:
/* 80115514 001125F4  80 7F 01 98 */	lwz r3, 0x198(r31)
/* 80115518 001125F8  38 00 FF EA */	li r0, -0x16
/* 8011551C 001125FC  7C 60 00 39 */	and. r0, r3, r0
/* 80115520 00112600  90 1F 01 98 */	stw r0, 0x198(r31)
/* 80115524 00112604  40 82 00 58 */	bne .L_8011557C
/* 80115528 00112608  C0 3C 01 98 */	lfs f1, 0x198(r28)
/* 8011552C 0011260C  7F 83 E3 78 */	mr r3, r28
/* 80115530 00112610  C0 42 9E 88 */	lfs f2, "@961"@sda21(r2)
/* 80115534 00112614  FC C0 08 90 */	fmr f6, f1
/* 80115538 00112618  C0 7C 01 9C */	lfs f3, 0x19c(r28)
/* 8011553C 0011261C  C0 9C 01 A0 */	lfs f4, 0x1a0(r28)
/* 80115540 00112620  C0 BC 01 4C */	lfs f5, 0x14c(r28)
/* 80115544 00112624  4B FF B7 F5 */	bl "spring_velocity__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFffffff"
/* 80115548 00112628  C0 1C 00 18 */	lfs f0, 0x18(r28)
/* 8011554C 0011262C  80 7E 07 04 */	lwz r3, 0x704(r30)
/* 80115550 00112630  EC 20 08 24 */	fdivs f1, f0, f1
/* 80115554 00112634  C0 02 9E B4 */	lfs f0, "@1829"@sda21(r2)
/* 80115558 00112638  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8011555C 0011263C  80 63 00 08 */	lwz r3, 0x8(r3)
/* 80115560 00112640  EC 00 07 B2 */	fmuls f0, f0, f30
/* 80115564 00112644  FC 20 0A 10 */	fabs f1, f1
/* 80115568 00112648  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 8011556C 0011264C  FC 20 08 18 */	frsp f1, f1
/* 80115570 00112650  C0 02 9E B0 */	lfs f0, "@1817"@sda21(r2)
/* 80115574 00112654  EC 00 00 72 */	fmuls f0, f0, f1
/* 80115578 00112658  D0 03 00 14 */	stfs f0, 0x14(r3)
.L_8011557C:
/* 8011557C 0011265C  3C 60 80 29 */	lis r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80115580 00112660  38 63 7A 68 */	addi r3, r3, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80115584 00112664  38 63 01 74 */	addi r3, r3, 0x174
/* 80115588 00112668  4B FF B0 5D */	bl "move_wedgie__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FRC5xVec3"
/* 8011558C 0011266C  FC 20 F8 90 */	fmr f1, f31
/* 80115590 00112670  80 7E 07 04 */	lwz r3, 0x704(r30)
/* 80115594 00112674  4B F1 EF 39 */	bl xModelUpdate__FP14xModelInstancef
/* 80115598 00112678  80 7E 07 04 */	lwz r3, 0x704(r30)
/* 8011559C 0011267C  4B F1 F1 15 */	bl xModelEval__FP14xModelInstance
/* 801155A0 00112680  E3 E1 00 58 */	psq_l f31, 0x58(r1), 0, qr0
/* 801155A4 00112684  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 801155A8 00112688  E3 C1 00 48 */	psq_l f30, 0x48(r1), 0, qr0
/* 801155AC 0011268C  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 801155B0 00112690  BB 61 00 2C */	lmw r27, 0x2c(r1)
/* 801155B4 00112694  80 01 00 64 */	lwz r0, 0x64(r1)
/* 801155B8 00112698  7C 08 03 A6 */	mtlr r0
/* 801155BC 0011269C  38 21 00 60 */	addi r1, r1, 0x60
/* 801155C0 001126A0  4E 80 00 20 */	blr
.endfn "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::update_movement(float)
.fn "update_movement__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", local
/* 801155C4 001126A4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801155C8 001126A8  7C 08 02 A6 */	mflr r0
/* 801155CC 001126AC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801155D0 001126B0  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 801155D4 001126B4  FF E0 08 90 */	fmr f31, f1
/* 801155D8 001126B8  93 E1 00 14 */	stw r31, 0x14(r1)
/* 801155DC 001126BC  7C 7F 1B 78 */	mr r31, r3
/* 801155E0 001126C0  48 00 05 85 */	bl "update_heading__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf"
/* 801155E4 001126C4  FC 20 F8 90 */	fmr f1, f31
/* 801155E8 001126C8  7F E3 FB 78 */	mr r3, r31
/* 801155EC 001126CC  48 00 01 41 */	bl "update_vmovement__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf"
/* 801155F0 001126D0  FC 20 F8 90 */	fmr f1, f31
/* 801155F4 001126D4  7F E3 FB 78 */	mr r3, r31
/* 801155F8 001126D8  48 00 00 1D */	bl "update_hmovement__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf"
/* 801155FC 001126DC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80115600 001126E0  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80115604 001126E4  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 80115608 001126E8  7C 08 03 A6 */	mtlr r0
/* 8011560C 001126EC  38 21 00 20 */	addi r1, r1, 0x20
/* 80115610 001126F0  4E 80 00 20 */	blr
.endfn "update_movement__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::update_hmovement(float)
.fn "update_hmovement__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", local
/* 80115614 001126F4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80115618 001126F8  7C 08 02 A6 */	mflr r0
/* 8011561C 001126FC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80115620 00112700  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80115624 00112704  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 80115628 00112708  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8011562C 0011270C  7C 7F 1B 78 */	mr r31, r3
/* 80115630 00112710  FF E0 08 90 */	fmr f31, f1
/* 80115634 00112714  C0 03 00 74 */	lfs f0, 0x74(r3)
/* 80115638 00112718  38 9F 00 08 */	addi r4, r31, 0x8
/* 8011563C 0011271C  C0 23 00 08 */	lfs f1, 0x8(r3)
/* 80115640 00112720  38 BF 00 14 */	addi r5, r31, 0x14
/* 80115644 00112724  FC 60 F8 90 */	fmr f3, f31
/* 80115648 00112728  FC 80 00 50 */	fneg f4, f0
/* 8011564C 0011272C  C0 43 00 14 */	lfs f2, 0x14(r3)
/* 80115650 00112730  48 00 00 45 */	bl "update_hmovement__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRfRfffff"
/* 80115654 00112734  C0 1F 00 78 */	lfs f0, 0x78(r31)
/* 80115658 00112738  FC 60 F8 90 */	fmr f3, f31
/* 8011565C 0011273C  C0 3F 00 10 */	lfs f1, 0x10(r31)
/* 80115660 00112740  7F E3 FB 78 */	mr r3, r31
/* 80115664 00112744  FC 80 00 50 */	fneg f4, f0
/* 80115668 00112748  C0 5F 00 1C */	lfs f2, 0x1c(r31)
/* 8011566C 0011274C  38 9F 00 10 */	addi r4, r31, 0x10
/* 80115670 00112750  38 BF 00 1C */	addi r5, r31, 0x1c
/* 80115674 00112754  48 00 00 21 */	bl "update_hmovement__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRfRfffff"
/* 80115678 00112758  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8011567C 0011275C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80115680 00112760  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80115684 00112764  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80115688 00112768  7C 08 03 A6 */	mtlr r0
/* 8011568C 0011276C  38 21 00 20 */	addi r1, r1, 0x20
/* 80115690 00112770  4E 80 00 20 */	blr
.endfn "update_hmovement__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::update_hmovement(float&, float&, float, float, float, float)
.fn "update_hmovement__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRfRfffff", local
/* 80115694 00112774  3C C0 80 31 */	lis r6, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80115698 00112778  C0 E3 01 60 */	lfs f7, 0x160(r3)
/* 8011569C 0011277C  38 C6 37 88 */	addi r6, r6, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801156A0 00112780  C0 C2 9E 88 */	lfs f6, "@961"@sda21(r2)
/* 801156A4 00112784  C0 A6 00 30 */	lfs f5, 0x30(r6)
/* 801156A8 00112788  EC 07 01 32 */	fmuls f0, f7, f4
/* 801156AC 0011278C  EC 86 28 2A */	fadds f4, f6, f5
/* 801156B0 00112790  EC 84 00 32 */	fmuls f4, f4, f0
/* 801156B4 00112794  FC 04 38 40 */	fcmpo cr0, f4, f7
/* 801156B8 00112798  40 81 00 0C */	ble .L_801156C4
/* 801156BC 0011279C  FC 80 38 90 */	fmr f4, f7
/* 801156C0 001127A0  48 00 00 14 */	b .L_801156D4
.L_801156C4:
/* 801156C4 001127A4  FC 00 38 50 */	fneg f0, f7
/* 801156C8 001127A8  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 801156CC 001127AC  40 80 00 08 */	bge .L_801156D4
/* 801156D0 001127B0  FC 80 00 90 */	fmr f4, f0
.L_801156D4:
/* 801156D4 001127B4  3C C0 80 31 */	lis r6, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801156D8 001127B8  C0 A3 00 84 */	lfs f5, 0x84(r3)
/* 801156DC 001127BC  38 66 37 88 */	addi r3, r6, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801156E0 001127C0  EC 04 08 28 */	fsubs f0, f4, f1
/* 801156E4 001127C4  C0 83 00 34 */	lfs f4, 0x34(r3)
/* 801156E8 001127C8  EC 85 01 32 */	fmuls f4, f5, f4
/* 801156EC 001127CC  EC 84 00 32 */	fmuls f4, f4, f0
/* 801156F0 001127D0  EC 04 10 FA */	fmadds f0, f4, f3, f2
/* 801156F4 001127D4  D0 05 00 00 */	stfs f0, 0x0(r5)
/* 801156F8 001127D8  C0 42 9E 8C */	lfs f2, "@969"@sda21(r2)
/* 801156FC 001127DC  C0 05 00 00 */	lfs f0, 0x0(r5)
/* 80115700 001127E0  EC 42 01 32 */	fmuls f2, f2, f4
/* 80115704 001127E4  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80115708 001127E8  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8011570C 001127EC  EC 03 00 BA */	fmadds f0, f3, f2, f0
/* 80115710 001127F0  EC 01 00 2A */	fadds f0, f1, f0
/* 80115714 001127F4  D0 04 00 00 */	stfs f0, 0x0(r4)
/* 80115718 001127F8  C0 25 00 00 */	lfs f1, 0x0(r5)
/* 8011571C 001127FC  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 80115720 00112800  EC 01 00 32 */	fmuls f0, f1, f0
/* 80115724 00112804  D0 05 00 00 */	stfs f0, 0x0(r5)
/* 80115728 00112808  4E 80 00 20 */	blr
.endfn "update_hmovement__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRfRfffff"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::update_vmovement(float)
.fn "update_vmovement__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", local
/* 8011572C 0011280C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80115730 00112810  7C 08 02 A6 */	mflr r0
/* 80115734 00112814  90 01 00 44 */	stw r0, 0x44(r1)
/* 80115738 00112818  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8011573C 0011281C  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 80115740 00112820  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 80115744 00112824  F3 C1 00 28 */	psq_st f30, 0x28(r1), 0, qr0
/* 80115748 00112828  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8011574C 0011282C  7C 7F 1B 78 */	mr r31, r3
/* 80115750 00112830  FF C0 08 90 */	fmr f30, f1
/* 80115754 00112834  88 03 00 B9 */	lbz r0, 0xb9(r3)
/* 80115758 00112838  28 00 00 00 */	cmplwi r0, 0x0
/* 8011575C 0011283C  41 82 00 6C */	beq .L_801157C8
/* 80115760 00112840  3C 80 80 3C */	lis r4, globals@ha
/* 80115764 00112844  38 84 05 58 */	addi r4, r4, globals@l
/* 80115768 00112848  80 84 03 1C */	lwz r4, 0x31c(r4)
/* 8011576C 0011284C  80 04 00 30 */	lwz r0, 0x30(r4)
/* 80115770 00112850  54 00 03 DF */	rlwinm. r0, r0, 0, 15, 15
/* 80115774 00112854  41 82 00 54 */	beq .L_801157C8
/* 80115778 00112858  C0 1F 00 B0 */	lfs f0, 0xb0(r31)
/* 8011577C 0011285C  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80115780 00112860  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80115784 00112864  4C 40 13 82 */	cror eq, lt, eq
/* 80115788 00112868  40 82 00 40 */	bne .L_801157C8
/* 8011578C 0011286C  88 1F 00 AC */	lbz r0, 0xac(r31)
/* 80115790 00112870  28 00 00 00 */	cmplwi r0, 0x0
/* 80115794 00112874  40 82 00 34 */	bne .L_801157C8
/* 80115798 00112878  C0 1F 00 68 */	lfs f0, 0x68(r31)
/* 8011579C 0011287C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 801157A0 00112880  4C 40 13 82 */	cror eq, lt, eq
/* 801157A4 00112884  40 82 00 24 */	bne .L_801157C8
/* 801157A8 00112888  38 00 00 01 */	li r0, 0x1
/* 801157AC 0011288C  38 80 00 00 */	li r4, 0x0
/* 801157B0 00112890  98 1F 00 B8 */	stb r0, 0xb8(r31)
/* 801157B4 00112894  4B FF E1 91 */	bl "allow_dive__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFb"
/* 801157B8 00112898  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 801157BC 0011289C  38 63 37 88 */	addi r3, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 801157C0 001128A0  C0 03 00 3C */	lfs f0, 0x3c(r3)
/* 801157C4 001128A4  D0 1F 00 68 */	stfs f0, 0x68(r31)
.L_801157C8:
/* 801157C8 001128A8  C0 3F 00 68 */	lfs f1, 0x68(r31)
/* 801157CC 001128AC  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 801157D0 001128B0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801157D4 001128B4  40 81 00 B4 */	ble .L_80115888
/* 801157D8 001128B8  EC 01 F0 28 */	fsubs f0, f1, f30
/* 801157DC 001128BC  D0 1F 00 68 */	stfs f0, 0x68(r31)
/* 801157E0 001128C0  C0 1F 00 68 */	lfs f0, 0x68(r31)
/* 801157E4 001128C4  C0 42 9E A0 */	lfs f2, "@1783"@sda21(r2)
/* 801157E8 001128C8  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 801157EC 001128CC  40 80 00 18 */	bge .L_80115804
/* 801157F0 001128D0  EC 1E 00 2A */	fadds f0, f30, f0
/* 801157F4 001128D4  C0 3F 01 50 */	lfs f1, 0x150(r31)
/* 801157F8 001128D8  D0 5F 00 68 */	stfs f2, 0x68(r31)
/* 801157FC 001128DC  EF E1 00 32 */	fmuls f31, f1, f0
/* 80115800 001128E0  48 00 00 0C */	b .L_8011580C
.L_80115804:
/* 80115804 001128E4  C0 1F 01 50 */	lfs f0, 0x150(r31)
/* 80115808 001128E8  EF E0 07 B2 */	fmuls f31, f0, f30
.L_8011580C:
/* 8011580C 001128EC  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 80115810 001128F0  7F E3 FB 78 */	mr r3, r31
/* 80115814 001128F4  C0 5F 00 18 */	lfs f2, 0x18(r31)
/* 80115818 001128F8  C0 7F 01 A0 */	lfs f3, 0x1a0(r31)
/* 8011581C 001128FC  C0 9F 01 4C */	lfs f4, 0x14c(r31)
/* 80115820 00112900  C0 BF 01 98 */	lfs f5, 0x198(r31)
/* 80115824 00112904  4B FF B6 31 */	bl "spring_energy__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFfffff"
/* 80115828 00112908  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 8011582C 0011290C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80115830 00112910  40 80 00 58 */	bge .L_80115888
/* 80115834 00112914  C0 1F 00 18 */	lfs f0, 0x18(r31)
/* 80115838 00112918  7F E3 FB 78 */	mr r3, r31
/* 8011583C 0011291C  EC 00 F8 2A */	fadds f0, f0, f31
/* 80115840 00112920  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80115844 00112924  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 80115848 00112928  C0 5F 00 18 */	lfs f2, 0x18(r31)
/* 8011584C 0011292C  C0 7F 01 A0 */	lfs f3, 0x1a0(r31)
/* 80115850 00112930  C0 9F 01 4C */	lfs f4, 0x14c(r31)
/* 80115854 00112934  C0 BF 01 98 */	lfs f5, 0x198(r31)
/* 80115858 00112938  4B FF B5 FD */	bl "spring_energy__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFfffff"
/* 8011585C 0011293C  C0 7F 01 9C */	lfs f3, 0x19c(r31)
/* 80115860 00112940  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 80115864 00112944  40 81 00 24 */	ble .L_80115888
/* 80115868 00112948  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 8011586C 0011294C  7F E3 FB 78 */	mr r3, r31
/* 80115870 00112950  C0 5F 00 18 */	lfs f2, 0x18(r31)
/* 80115874 00112954  C0 9F 01 A0 */	lfs f4, 0x1a0(r31)
/* 80115878 00112958  C0 BF 01 4C */	lfs f5, 0x14c(r31)
/* 8011587C 0011295C  C0 DF 01 98 */	lfs f6, 0x198(r31)
/* 80115880 00112960  4B FF B4 B9 */	bl "spring_velocity__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFffffff"
/* 80115884 00112964  D0 3F 00 18 */	stfs f1, 0x18(r31)
.L_80115888:
/* 80115888 00112968  FC 60 F0 90 */	fmr f3, f30
/* 8011588C 0011296C  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 80115890 00112970  C0 5F 00 18 */	lfs f2, 0x18(r31)
/* 80115894 00112974  7F E3 FB 78 */	mr r3, r31
/* 80115898 00112978  C0 9F 01 98 */	lfs f4, 0x198(r31)
/* 8011589C 0011297C  38 9F 00 0C */	addi r4, r31, 0xc
/* 801158A0 00112980  C0 BF 01 A4 */	lfs f5, 0x1a4(r31)
/* 801158A4 00112984  38 A1 00 08 */	addi r5, r1, 0x8
/* 801158A8 00112988  C0 DF 01 A8 */	lfs f6, 0x1a8(r31)
/* 801158AC 0011298C  38 C1 00 0C */	addi r6, r1, 0xc
/* 801158B0 00112990  48 00 01 55 */	bl "calc_movement__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRfRfRfffffff"
/* 801158B4 00112994  C0 41 00 08 */	lfs f2, 0x8(r1)
/* 801158B8 00112998  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 801158BC 0011299C  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 801158C0 001129A0  EC 22 08 28 */	fsubs f1, f2, f1
/* 801158C4 001129A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801158C8 001129A8  40 80 00 68 */	bge .L_80115930
/* 801158CC 001129AC  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 801158D0 001129B0  C0 1F 01 54 */	lfs f0, 0x154(r31)
/* 801158D4 001129B4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801158D8 001129B8  40 80 00 58 */	bge .L_80115930
/* 801158DC 001129BC  C0 7F 01 A0 */	lfs f3, 0x1a0(r31)
/* 801158E0 001129C0  7F E3 FB 78 */	mr r3, r31
/* 801158E4 001129C4  C0 9F 01 4C */	lfs f4, 0x14c(r31)
/* 801158E8 001129C8  C0 BF 01 98 */	lfs f5, 0x198(r31)
/* 801158EC 001129CC  4B FF B5 69 */	bl "spring_energy__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFfffff"
/* 801158F0 001129D0  C0 7F 01 9C */	lfs f3, 0x19c(r31)
/* 801158F4 001129D4  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 801158F8 001129D8  40 81 00 24 */	ble .L_8011591C
/* 801158FC 001129DC  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 80115900 001129E0  7F E3 FB 78 */	mr r3, r31
/* 80115904 001129E4  C0 41 00 08 */	lfs f2, 0x8(r1)
/* 80115908 001129E8  C0 9F 01 A0 */	lfs f4, 0x1a0(r31)
/* 8011590C 001129EC  C0 BF 01 4C */	lfs f5, 0x14c(r31)
/* 80115910 001129F0  C0 DF 01 98 */	lfs f6, 0x198(r31)
/* 80115914 001129F4  4B FF B4 25 */	bl "spring_velocity__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFffffff"
/* 80115918 001129F8  D0 21 00 08 */	stfs f1, 0x8(r1)
.L_8011591C:
/* 8011591C 001129FC  C0 01 00 08 */	lfs f0, 0x8(r1)
/* 80115920 00112A00  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 80115924 00112A04  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80115928 00112A08  40 81 00 08 */	ble .L_80115930
/* 8011592C 00112A0C  D0 21 00 08 */	stfs f1, 0x8(r1)
.L_80115930:
/* 80115930 00112A10  C0 01 00 08 */	lfs f0, 0x8(r1)
/* 80115934 00112A14  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80115938 00112A18  C0 22 9E 90 */	lfs f1, "@987"@sda21(r2)
/* 8011593C 00112A1C  C0 1F 00 A8 */	lfs f0, 0xa8(r31)
/* 80115940 00112A20  C0 5F 00 18 */	lfs f2, 0x18(r31)
/* 80115944 00112A24  EC 01 00 32 */	fmuls f0, f1, f0
/* 80115948 00112A28  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8011594C 00112A2C  40 81 00 10 */	ble .L_8011595C
/* 80115950 00112A30  38 00 00 00 */	li r0, 0x0
/* 80115954 00112A34  98 1F 00 B8 */	stb r0, 0xb8(r31)
/* 80115958 00112A38  48 00 00 88 */	b .L_801159E0
.L_8011595C:
/* 8011595C 00112A3C  88 1F 00 B8 */	lbz r0, 0xb8(r31)
/* 80115960 00112A40  28 00 00 00 */	cmplwi r0, 0x0
/* 80115964 00112A44  40 82 00 7C */	bne .L_801159E0
/* 80115968 00112A48  C0 5F 01 54 */	lfs f2, 0x154(r31)
/* 8011596C 00112A4C  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80115970 00112A50  C0 3F 01 58 */	lfs f1, 0x158(r31)
/* 80115974 00112A54  38 63 37 88 */	addi r3, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80115978 00112A58  FC 60 10 50 */	fneg f3, f2
/* 8011597C 00112A5C  C0 03 00 44 */	lfs f0, 0x44(r3)
/* 80115980 00112A60  EC 81 10 28 */	fsubs f4, f1, f2
/* 80115984 00112A64  C0 23 00 48 */	lfs f1, 0x48(r3)
/* 80115988 00112A68  C0 5F 00 0C */	lfs f2, 0xc(r31)
/* 8011598C 00112A6C  EC 04 18 3C */	fnmsubs f0, f4, f0, f3
/* 80115990 00112A70  EC 24 18 7C */	fnmsubs f1, f4, f1, f3
/* 80115994 00112A74  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80115998 00112A78  4C 40 13 82 */	cror eq, lt, eq
/* 8011599C 00112A7C  40 82 00 2C */	bne .L_801159C8
/* 801159A0 00112A80  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 801159A4 00112A84  4C 40 13 82 */	cror eq, lt, eq
/* 801159A8 00112A88  40 82 00 20 */	bne .L_801159C8
/* 801159AC 00112A8C  88 1F 00 B9 */	lbz r0, 0xb9(r31)
/* 801159B0 00112A90  28 00 00 00 */	cmplwi r0, 0x0
/* 801159B4 00112A94  40 82 00 2C */	bne .L_801159E0
/* 801159B8 00112A98  7F E3 FB 78 */	mr r3, r31
/* 801159BC 00112A9C  38 80 00 01 */	li r4, 0x1
/* 801159C0 00112AA0  4B FF DF 85 */	bl "allow_dive__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFb"
/* 801159C4 00112AA4  48 00 00 1C */	b .L_801159E0
.L_801159C8:
/* 801159C8 00112AA8  88 1F 00 B9 */	lbz r0, 0xb9(r31)
/* 801159CC 00112AAC  28 00 00 00 */	cmplwi r0, 0x0
/* 801159D0 00112AB0  41 82 00 10 */	beq .L_801159E0
/* 801159D4 00112AB4  7F E3 FB 78 */	mr r3, r31
/* 801159D8 00112AB8  38 80 00 00 */	li r4, 0x0
/* 801159DC 00112ABC  4B FF DF 69 */	bl "allow_dive__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFb"
.L_801159E0:
/* 801159E0 00112AC0  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 801159E4 00112AC4  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 801159E8 00112AC8  E3 C1 00 28 */	psq_l f30, 0x28(r1), 0, qr0
/* 801159EC 00112ACC  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 801159F0 00112AD0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801159F4 00112AD4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801159F8 00112AD8  7C 08 03 A6 */	mtlr r0
/* 801159FC 00112ADC  38 21 00 40 */	addi r1, r1, 0x40
/* 80115A00 00112AE0  4E 80 00 20 */	blr
.endfn "update_vmovement__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::calc_movement(float&, float&, float&, float, float, float, float, float, float)
.fn "calc_movement__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRfRfRfffffff", local
/* 80115A04 00112AE4  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 80115A08 00112AE8  7C 08 02 A6 */	mflr r0
/* 80115A0C 00112AEC  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 80115A10 00112AF0  DB E1 00 A0 */	stfd f31, 0xa0(r1)
/* 80115A14 00112AF4  F3 E1 00 A8 */	psq_st f31, 0xa8(r1), 0, qr0
/* 80115A18 00112AF8  DB C1 00 90 */	stfd f30, 0x90(r1)
/* 80115A1C 00112AFC  F3 C1 00 98 */	psq_st f30, 0x98(r1), 0, qr0
/* 80115A20 00112B00  DB A1 00 80 */	stfd f29, 0x80(r1)
/* 80115A24 00112B04  F3 A1 00 88 */	psq_st f29, 0x88(r1), 0, qr0
/* 80115A28 00112B08  DB 81 00 70 */	stfd f28, 0x70(r1)
/* 80115A2C 00112B0C  F3 81 00 78 */	psq_st f28, 0x78(r1), 0, qr0
/* 80115A30 00112B10  DB 61 00 60 */	stfd f27, 0x60(r1)
/* 80115A34 00112B14  F3 61 00 68 */	psq_st f27, 0x68(r1), 0, qr0
/* 80115A38 00112B18  DB 41 00 50 */	stfd f26, 0x50(r1)
/* 80115A3C 00112B1C  F3 41 00 58 */	psq_st f26, 0x58(r1), 0, qr0
/* 80115A40 00112B20  DB 21 00 40 */	stfd f25, 0x40(r1)
/* 80115A44 00112B24  F3 21 00 48 */	psq_st f25, 0x48(r1), 0, qr0
/* 80115A48 00112B28  DB 01 00 30 */	stfd f24, 0x30(r1)
/* 80115A4C 00112B2C  F3 01 00 38 */	psq_st f24, 0x38(r1), 0, qr0
/* 80115A50 00112B30  DA E1 00 20 */	stfd f23, 0x20(r1)
/* 80115A54 00112B34  F2 E1 00 28 */	psq_st f23, 0x28(r1), 0, qr0
/* 80115A58 00112B38  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80115A5C 00112B3C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80115A60 00112B40  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80115A64 00112B44  FF 20 18 90 */	fmr f25, f3
/* 80115A68 00112B48  7C 9D 23 78 */	mr r29, r4
/* 80115A6C 00112B4C  FF 00 30 90 */	fmr f24, f6
/* 80115A70 00112B50  7C BE 2B 78 */	mr r30, r5
/* 80115A74 00112B54  FF 40 08 90 */	fmr f26, f1
/* 80115A78 00112B58  7C DF 33 78 */	mr r31, r6
/* 80115A7C 00112B5C  EF B8 06 72 */	fmuls f29, f24, f25
/* 80115A80 00112B60  FF C0 10 90 */	fmr f30, f2
/* 80115A84 00112B64  FF E0 20 90 */	fmr f31, f4
/* 80115A88 00112B68  FE E0 28 90 */	fmr f23, f5
/* 80115A8C 00112B6C  FC 20 E8 90 */	fmr f1, f29
/* 80115A90 00112B70  4B FA F3 BD */	bl isin__Ff
/* 80115A94 00112B74  FF 80 08 90 */	fmr f28, f1
/* 80115A98 00112B78  FC 20 E8 90 */	fmr f1, f29
/* 80115A9C 00112B7C  4B FA F3 F5 */	bl icos__Ff
/* 80115AA0 00112B80  EF 5A F8 28 */	fsubs f26, f26, f31
/* 80115AA4 00112B84  FF A0 08 90 */	fmr f29, f1
/* 80115AA8 00112B88  EC 37 06 72 */	fmuls f1, f23, f25
/* 80115AAC 00112B8C  EC 5A F5 FC */	fnmsubs f2, f26, f23, f30
/* 80115AB0 00112B90  EC 1A 06 32 */	fmuls f0, f26, f24
/* 80115AB4 00112B94  EF 22 C0 24 */	fdivs f25, f2, f24
/* 80115AB8 00112B98  EF 79 05 F8 */	fmsubs f27, f25, f23, f0
/* 80115ABC 00112B9C  4B EF 8C F5 */	bl xexp__Ff
/* 80115AC0 00112BA0  EC 1E 06 32 */	fmuls f0, f30, f24
/* 80115AC4 00112BA4  EC 99 07 32 */	fmuls f4, f25, f28
/* 80115AC8 00112BA8  EC 5B 06 32 */	fmuls f2, f27, f24
/* 80115ACC 00112BAC  EC 1B 05 F8 */	fmsubs f0, f27, f23, f0
/* 80115AD0 00112BB0  EC 7B 07 32 */	fmuls f3, f27, f28
/* 80115AD4 00112BB4  EC 9A 27 7A */	fmadds f4, f26, f29, f4
/* 80115AD8 00112BB8  EC 5E 15 FA */	fmadds f2, f30, f23, f2
/* 80115ADC 00112BBC  EC 1C 00 32 */	fmuls f0, f28, f0
/* 80115AE0 00112BC0  EC 7E 1F 7A */	fmadds f3, f30, f29, f3
/* 80115AE4 00112BC4  EC 81 F9 3A */	fmadds f4, f1, f4, f31
/* 80115AE8 00112BC8  EC 1D 00 BA */	fmadds f0, f29, f2, f0
/* 80115AEC 00112BCC  EC 41 00 F2 */	fmuls f2, f1, f3
/* 80115AF0 00112BD0  D0 9D 00 00 */	stfs f4, 0x0(r29)
/* 80115AF4 00112BD4  EC 01 00 32 */	fmuls f0, f1, f0
/* 80115AF8 00112BD8  D0 5E 00 00 */	stfs f2, 0x0(r30)
/* 80115AFC 00112BDC  D0 1F 00 00 */	stfs f0, 0x0(r31)
/* 80115B00 00112BE0  E3 E1 00 A8 */	psq_l f31, 0xa8(r1), 0, qr0
/* 80115B04 00112BE4  CB E1 00 A0 */	lfd f31, 0xa0(r1)
/* 80115B08 00112BE8  E3 C1 00 98 */	psq_l f30, 0x98(r1), 0, qr0
/* 80115B0C 00112BEC  CB C1 00 90 */	lfd f30, 0x90(r1)
/* 80115B10 00112BF0  E3 A1 00 88 */	psq_l f29, 0x88(r1), 0, qr0
/* 80115B14 00112BF4  CB A1 00 80 */	lfd f29, 0x80(r1)
/* 80115B18 00112BF8  E3 81 00 78 */	psq_l f28, 0x78(r1), 0, qr0
/* 80115B1C 00112BFC  CB 81 00 70 */	lfd f28, 0x70(r1)
/* 80115B20 00112C00  E3 61 00 68 */	psq_l f27, 0x68(r1), 0, qr0
/* 80115B24 00112C04  CB 61 00 60 */	lfd f27, 0x60(r1)
/* 80115B28 00112C08  E3 41 00 58 */	psq_l f26, 0x58(r1), 0, qr0
/* 80115B2C 00112C0C  CB 41 00 50 */	lfd f26, 0x50(r1)
/* 80115B30 00112C10  E3 21 00 48 */	psq_l f25, 0x48(r1), 0, qr0
/* 80115B34 00112C14  CB 21 00 40 */	lfd f25, 0x40(r1)
/* 80115B38 00112C18  E3 01 00 38 */	psq_l f24, 0x38(r1), 0, qr0
/* 80115B3C 00112C1C  CB 01 00 30 */	lfd f24, 0x30(r1)
/* 80115B40 00112C20  E2 E1 00 28 */	psq_l f23, 0x28(r1), 0, qr0
/* 80115B44 00112C24  CA E1 00 20 */	lfd f23, 0x20(r1)
/* 80115B48 00112C28  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80115B4C 00112C2C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80115B50 00112C30  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 80115B54 00112C34  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80115B58 00112C38  7C 08 03 A6 */	mtlr r0
/* 80115B5C 00112C3C  38 21 00 B0 */	addi r1, r1, 0xb0
/* 80115B60 00112C40  4E 80 00 20 */	blr
.endfn "calc_movement__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRfRfRfffffff"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::update_heading(float)
.fn "update_heading__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", local
/* 80115B64 00112C44  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80115B68 00112C48  7C 08 02 A6 */	mflr r0
/* 80115B6C 00112C4C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80115B70 00112C50  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80115B74 00112C54  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 80115B78 00112C58  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80115B7C 00112C5C  7C 7F 1B 78 */	mr r31, r3
/* 80115B80 00112C60  C0 62 9F 20 */	lfs f3, "@2555"@sda21(r2)
/* 80115B84 00112C64  C0 43 00 7C */	lfs f2, 0x7c(r3)
/* 80115B88 00112C68  FF E0 08 90 */	fmr f31, f1
/* 80115B8C 00112C6C  C0 03 00 6C */	lfs f0, 0x6c(r3)
/* 80115B90 00112C70  EC 23 10 28 */	fsubs f1, f3, f2
/* 80115B94 00112C74  EC 21 00 28 */	fsubs f1, f1, f0
/* 80115B98 00112C78  4B EF 8C 5D */	bl xrmod__Ff
/* 80115B9C 00112C7C  C0 02 9F 0C */	lfs f0, "@2341"@sda21(r2)
/* 80115BA0 00112C80  3C 60 80 31 */	lis r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80115BA4 00112C84  38 63 37 88 */	addi r3, r3, "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80115BA8 00112C88  C0 5F 00 84 */	lfs f2, 0x84(r31)
/* 80115BAC 00112C8C  EC 21 00 28 */	fsubs f1, f1, f0
/* 80115BB0 00112C90  C0 63 00 50 */	lfs f3, 0x50(r3)
/* 80115BB4 00112C94  C0 9F 00 80 */	lfs f4, 0x80(r31)
/* 80115BB8 00112C98  C0 1F 00 70 */	lfs f0, 0x70(r31)
/* 80115BBC 00112C9C  EC 22 00 72 */	fmuls f1, f2, f1
/* 80115BC0 00112CA0  EC 23 00 72 */	fmuls f1, f3, f1
/* 80115BC4 00112CA4  EC 24 00 72 */	fmuls f1, f4, f1
/* 80115BC8 00112CA8  EC 1F 00 7A */	fmadds f0, f31, f1, f0
/* 80115BCC 00112CAC  D0 1F 00 70 */	stfs f0, 0x70(r31)
/* 80115BD0 00112CB0  C0 3F 00 70 */	lfs f1, 0x70(r31)
/* 80115BD4 00112CB4  C0 1F 00 6C */	lfs f0, 0x6c(r31)
/* 80115BD8 00112CB8  EC 01 07 FA */	fmadds f0, f1, f31, f0
/* 80115BDC 00112CBC  D0 1F 00 6C */	stfs f0, 0x6c(r31)
/* 80115BE0 00112CC0  C0 3F 00 70 */	lfs f1, 0x70(r31)
/* 80115BE4 00112CC4  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80115BE8 00112CC8  EC 01 00 32 */	fmuls f0, f1, f0
/* 80115BEC 00112CCC  D0 1F 00 70 */	stfs f0, 0x70(r31)
/* 80115BF0 00112CD0  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 80115BF4 00112CD4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80115BF8 00112CD8  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80115BFC 00112CDC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80115C00 00112CE0  7C 08 03 A6 */	mtlr r0
/* 80115C04 00112CE4  38 21 00 20 */	addi r1, r1, 0x20
/* 80115C08 00112CE8  4E 80 00 20 */	blr
.endfn "update_heading__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::detach_update(xScene&, float&)
.fn "detach_update__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFR6xSceneRf", local
/* 80115C0C 00112CEC  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 80115C10 00112CF0  7C 08 02 A6 */	mflr r0
/* 80115C14 00112CF4  90 01 00 94 */	stw r0, 0x94(r1)
/* 80115C18 00112CF8  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 80115C1C 00112CFC  F3 E1 00 88 */	psq_st f31, 0x88(r1), 0, qr0
/* 80115C20 00112D00  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 80115C24 00112D04  93 C1 00 78 */	stw r30, 0x78(r1)
/* 80115C28 00112D08  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80115C2C 00112D0C  7C 7E 1B 78 */	mr r30, r3
/* 80115C30 00112D10  38 84 7A 68 */	addi r4, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80115C34 00112D14  7C BF 2B 78 */	mr r31, r5
/* 80115C38 00112D18  38 7E 00 2C */	addi r3, r30, 0x2c
/* 80115C3C 00112D1C  38 84 01 74 */	addi r4, r4, 0x174
/* 80115C40 00112D20  4B EF 56 25 */	bl __as__5xVec3FRC5xVec3
/* 80115C44 00112D24  4B FF AB 29 */	bl "update_hook_loc__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fv"
/* 80115C48 00112D28  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80115C4C 00112D2C  38 7E 00 20 */	addi r3, r30, 0x20
/* 80115C50 00112D30  38 9E 00 08 */	addi r4, r30, 0x8
/* 80115C54 00112D34  D0 1E 00 78 */	stfs f0, 0x78(r30)
/* 80115C58 00112D38  D0 1E 00 74 */	stfs f0, 0x74(r30)
/* 80115C5C 00112D3C  4B EF 56 09 */	bl __as__5xVec3FRC5xVec3
/* 80115C60 00112D40  38 61 00 54 */	addi r3, r1, 0x54
/* 80115C64 00112D44  38 9E 00 08 */	addi r4, r30, 0x8
/* 80115C68 00112D48  48 00 06 45 */	bl normal__5xVec3CFv
/* 80115C6C 00112D4C  C0 1E 01 3C */	lfs f0, 0x13c(r30)
/* 80115C70 00112D50  38 61 00 60 */	addi r3, r1, 0x60
/* 80115C74 00112D54  38 81 00 54 */	addi r4, r1, 0x54
/* 80115C78 00112D58  FC 20 00 50 */	fneg f1, f0
/* 80115C7C 00112D5C  4B EF 54 A5 */	bl __ml__5xVec3CFf
/* 80115C80 00112D60  80 C1 00 60 */	lwz r6, 0x60(r1)
/* 80115C84 00112D64  38 61 00 48 */	addi r3, r1, 0x48
/* 80115C88 00112D68  80 A1 00 64 */	lwz r5, 0x64(r1)
/* 80115C8C 00112D6C  38 81 00 6C */	addi r4, r1, 0x6c
/* 80115C90 00112D70  80 01 00 68 */	lwz r0, 0x68(r1)
/* 80115C94 00112D74  90 C1 00 6C */	stw r6, 0x6c(r1)
/* 80115C98 00112D78  90 A1 00 70 */	stw r5, 0x70(r1)
/* 80115C9C 00112D7C  90 01 00 74 */	stw r0, 0x74(r1)
/* 80115CA0 00112D80  C0 3F 00 00 */	lfs f1, 0x0(r31)
/* 80115CA4 00112D84  4B EF 54 7D */	bl __ml__5xVec3CFf
/* 80115CA8 00112D88  38 7E 00 14 */	addi r3, r30, 0x14
/* 80115CAC 00112D8C  38 81 00 48 */	addi r4, r1, 0x48
/* 80115CB0 00112D90  4B EF F7 95 */	bl __apl__5xVec3FRC5xVec3
/* 80115CB4 00112D94  C0 3F 00 00 */	lfs f1, 0x0(r31)
/* 80115CB8 00112D98  38 61 00 18 */	addi r3, r1, 0x18
/* 80115CBC 00112D9C  38 9E 00 14 */	addi r4, r30, 0x14
/* 80115CC0 00112DA0  4B EF 54 61 */	bl __ml__5xVec3CFf
/* 80115CC4 00112DA4  C3 FF 00 00 */	lfs f31, 0x0(r31)
/* 80115CC8 00112DA8  38 61 00 24 */	addi r3, r1, 0x24
/* 80115CCC 00112DAC  38 81 00 6C */	addi r4, r1, 0x6c
/* 80115CD0 00112DB0  FC 20 F8 90 */	fmr f1, f31
/* 80115CD4 00112DB4  4B EF 54 4D */	bl __ml__5xVec3CFf
/* 80115CD8 00112DB8  FC 20 F8 90 */	fmr f1, f31
/* 80115CDC 00112DBC  38 61 00 30 */	addi r3, r1, 0x30
/* 80115CE0 00112DC0  38 81 00 24 */	addi r4, r1, 0x24
/* 80115CE4 00112DC4  4B EF 54 3D */	bl __ml__5xVec3CFf
/* 80115CE8 00112DC8  38 61 00 3C */	addi r3, r1, 0x3c
/* 80115CEC 00112DCC  38 81 00 30 */	addi r4, r1, 0x30
/* 80115CF0 00112DD0  38 A1 00 18 */	addi r5, r1, 0x18
/* 80115CF4 00112DD4  4B EF F6 ED */	bl __pl__5xVec3CFRC5xVec3
/* 80115CF8 00112DD8  38 7E 00 08 */	addi r3, r30, 0x8
/* 80115CFC 00112DDC  38 81 00 3C */	addi r4, r1, 0x3c
/* 80115D00 00112DE0  4B EF F7 45 */	bl __apl__5xVec3FRC5xVec3
/* 80115D04 00112DE4  C0 3F 00 00 */	lfs f1, 0x0(r31)
/* 80115D08 00112DE8  7F C3 F3 78 */	mr r3, r30
/* 80115D0C 00112DEC  4B FF F5 79 */	bl "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf"
/* 80115D10 00112DF0  C0 3F 00 00 */	lfs f1, 0x0(r31)
/* 80115D14 00112DF4  7F C3 F3 78 */	mr r3, r30
/* 80115D18 00112DF8  48 00 00 A1 */	bl "update_detach_camera__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf"
/* 80115D1C 00112DFC  7F C4 F3 78 */	mr r4, r30
/* 80115D20 00112E00  38 61 00 08 */	addi r3, r1, 0x8
/* 80115D24 00112E04  4B FF E1 9D */	bl "player_bound__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFv"
/* 80115D28 00112E08  3C 60 80 3C */	lis r3, globals@ha
/* 80115D2C 00112E0C  38 81 00 08 */	addi r4, r1, 0x8
/* 80115D30 00112E10  38 63 05 58 */	addi r3, r3, globals@l
/* 80115D34 00112E14  38 63 07 68 */	addi r3, r3, 0x768
/* 80115D38 00112E18  4B EF 55 49 */	bl __as__7xSphereFRC7xSphere
/* 80115D3C 00112E1C  C0 3F 00 00 */	lfs f1, 0x0(r31)
/* 80115D40 00112E20  7F C3 F3 78 */	mr r3, r30
/* 80115D44 00112E24  4B FF E1 35 */	bl "update_sound__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf"
/* 80115D48 00112E28  C0 3F 00 00 */	lfs f1, 0x0(r31)
/* 80115D4C 00112E2C  7F C3 F3 78 */	mr r3, r30
/* 80115D50 00112E30  4B FF E0 D1 */	bl "update_blur__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf"
/* 80115D54 00112E34  C0 3E 00 0C */	lfs f1, 0xc(r30)
/* 80115D58 00112E38  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80115D5C 00112E3C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80115D60 00112E40  4C 41 13 82 */	cror eq, gt, eq
/* 80115D64 00112E44  41 82 00 1C */	beq .L_80115D80
/* 80115D68 00112E48  38 7E 00 08 */	addi r3, r30, 0x8
/* 80115D6C 00112E4C  4B EF 53 91 */	bl length2__5xVec3CFv
/* 80115D70 00112E50  C0 02 9E 90 */	lfs f0, "@987"@sda21(r2)
/* 80115D74 00112E54  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80115D78 00112E58  4C 40 13 82 */	cror eq, lt, eq
/* 80115D7C 00112E5C  40 82 00 18 */	bne .L_80115D94
.L_80115D80:
/* 80115D80 00112E60  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80115D84 00112E64  38 60 00 02 */	li r3, 0x2
/* 80115D88 00112E68  4B FF A5 31 */	bl "play_sound__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@FQ312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10sound_enumf"
/* 80115D8C 00112E6C  38 60 FF FF */	li r3, -0x1
/* 80115D90 00112E70  48 00 00 08 */	b .L_80115D98
.L_80115D94:
/* 80115D94 00112E74  38 60 00 01 */	li r3, 0x1
.L_80115D98:
/* 80115D98 00112E78  E3 E1 00 88 */	psq_l f31, 0x88(r1), 0, qr0
/* 80115D9C 00112E7C  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80115DA0 00112E80  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 80115DA4 00112E84  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 80115DA8 00112E88  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 80115DAC 00112E8C  7C 08 03 A6 */	mtlr r0
/* 80115DB0 00112E90  38 21 00 90 */	addi r1, r1, 0x90
/* 80115DB4 00112E94  4E 80 00 20 */	blr
.endfn "detach_update__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFR6xSceneRf"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::update_detach_camera(float)
.fn "update_detach_camera__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", local
/* 80115DB8 00112E98  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 80115DBC 00112E9C  7C 08 02 A6 */	mflr r0
/* 80115DC0 00112EA0  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80115DC4 00112EA4  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 80115DC8 00112EA8  F3 E1 00 98 */	psq_st f31, 0x98(r1), 0, qr0
/* 80115DCC 00112EAC  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 80115DD0 00112EB0  93 C1 00 88 */	stw r30, 0x88(r1)
/* 80115DD4 00112EB4  7C 7E 1B 78 */	mr r30, r3
/* 80115DD8 00112EB8  C0 03 00 C0 */	lfs f0, 0xc0(r3)
/* 80115DDC 00112EBC  EC 00 08 2A */	fadds f0, f0, f1
/* 80115DE0 00112EC0  D0 03 00 C0 */	stfs f0, 0xc0(r3)
/* 80115DE4 00112EC4  C0 23 00 C0 */	lfs f1, 0xc0(r3)
/* 80115DE8 00112EC8  C0 03 00 C4 */	lfs f0, 0xc4(r3)
/* 80115DEC 00112ECC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80115DF0 00112ED0  40 80 00 0C */	bge .L_80115DFC
/* 80115DF4 00112ED4  EC 21 00 24 */	fdivs f1, f1, f0
/* 80115DF8 00112ED8  48 00 00 08 */	b .L_80115E00
.L_80115DFC:
/* 80115DFC 00112EDC  C0 22 9E 88 */	lfs f1, "@961"@sda21(r2)
.L_80115E00:
/* 80115E00 00112EE0  4B F4 93 01 */	bl xSCurve__Ff
/* 80115E04 00112EE4  FF E0 08 90 */	fmr f31, f1
/* 80115E08 00112EE8  38 61 00 14 */	addi r3, r1, 0x14
/* 80115E0C 00112EEC  38 9E 00 D4 */	addi r4, r30, 0xd4
/* 80115E10 00112EF0  38 BE 00 C8 */	addi r5, r30, 0xc8
/* 80115E14 00112EF4  4B EF 53 B9 */	bl __mi__5xVec3CFRC5xVec3
/* 80115E18 00112EF8  FC 20 F8 90 */	fmr f1, f31
/* 80115E1C 00112EFC  38 61 00 20 */	addi r3, r1, 0x20
/* 80115E20 00112F00  38 81 00 14 */	addi r4, r1, 0x14
/* 80115E24 00112F04  4B EF 52 FD */	bl __ml__5xVec3CFf
/* 80115E28 00112F08  38 61 00 2C */	addi r3, r1, 0x2c
/* 80115E2C 00112F0C  38 9E 00 C8 */	addi r4, r30, 0xc8
/* 80115E30 00112F10  38 A1 00 20 */	addi r5, r1, 0x20
/* 80115E34 00112F14  4B EF F5 AD */	bl __pl__5xVec3CFRC5xVec3
/* 80115E38 00112F18  3B E1 00 78 */	addi r31, r1, 0x78
/* 80115E3C 00112F1C  38 81 00 2C */	addi r4, r1, 0x2c
/* 80115E40 00112F20  7F E3 FB 78 */	mr r3, r31
/* 80115E44 00112F24  4B EF 54 21 */	bl __as__5xVec3FRC5xVec3
/* 80115E48 00112F28  7F C4 F3 78 */	mr r4, r30
/* 80115E4C 00112F2C  38 61 00 08 */	addi r3, r1, 0x8
/* 80115E50 00112F30  38 BE 00 08 */	addi r5, r30, 0x8
/* 80115E54 00112F34  4B FF E0 DD */	bl "local_to_world__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFRC5xVec3"
/* 80115E58 00112F38  7F E3 FB 78 */	mr r3, r31
/* 80115E5C 00112F3C  38 81 00 08 */	addi r4, r1, 0x8
/* 80115E60 00112F40  4B EF F5 E5 */	bl __apl__5xVec3FRC5xVec3
/* 80115E64 00112F44  FC 20 F8 90 */	fmr f1, f31
/* 80115E68 00112F48  38 61 00 38 */	addi r3, r1, 0x38
/* 80115E6C 00112F4C  38 9E 00 E0 */	addi r4, r30, 0xe0
/* 80115E70 00112F50  38 BE 00 F0 */	addi r5, r30, 0xf0
/* 80115E74 00112F54  4B F1 D2 5D */	bl xQuatSlerp__FP5xQuatPC5xQuatPC5xQuatf
/* 80115E78 00112F58  38 61 00 38 */	addi r3, r1, 0x38
/* 80115E7C 00112F5C  38 81 00 48 */	addi r4, r1, 0x48
/* 80115E80 00112F60  4B F1 D0 81 */	bl xQuatToMat__FPC5xQuatP7xMat3x3
/* 80115E84 00112F64  3C 60 80 3C */	lis r3, globals@ha
/* 80115E88 00112F68  7F E4 FB 78 */	mr r4, r31
/* 80115E8C 00112F6C  38 63 05 58 */	addi r3, r3, globals@l
/* 80115E90 00112F70  4B EF 78 89 */	bl xCameraMove__FP7xCameraRC5xVec3
/* 80115E94 00112F74  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80115E98 00112F78  3C 60 80 3C */	lis r3, globals@ha
/* 80115E9C 00112F7C  38 63 05 58 */	addi r3, r3, globals@l
/* 80115EA0 00112F80  38 81 00 48 */	addi r4, r1, 0x48
/* 80115EA4 00112F84  FC 40 08 90 */	fmr f2, f1
/* 80115EA8 00112F88  FC 60 08 90 */	fmr f3, f1
/* 80115EAC 00112F8C  4B EF 7C 69 */	bl xCameraRotate__FP7xCameraRC7xMat3x3fff
/* 80115EB0 00112F90  E3 E1 00 98 */	psq_l f31, 0x98(r1), 0, qr0
/* 80115EB4 00112F94  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80115EB8 00112F98  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 80115EBC 00112F9C  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 80115EC0 00112FA0  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 80115EC4 00112FA4  7C 08 03 A6 */	mtlr r0
/* 80115EC8 00112FA8  38 21 00 A0 */	addi r1, r1, 0xa0
/* 80115ECC 00112FAC  4E 80 00 20 */	blr
.endfn "update_detach_camera__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::start_detaching()
.fn "start_detaching__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv", local
/* 80115ED0 00112FB0  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 80115ED4 00112FB4  7C 08 02 A6 */	mflr r0
/* 80115ED8 00112FB8  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 80115EDC 00112FBC  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 80115EE0 00112FC0  F3 E1 00 D8 */	psq_st f31, 0xd8(r1), 0, qr0
/* 80115EE4 00112FC4  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 80115EE8 00112FC8  F3 C1 00 C8 */	psq_st f30, 0xc8(r1), 0, qr0
/* 80115EEC 00112FCC  93 E1 00 BC */	stw r31, 0xbc(r1)
/* 80115EF0 00112FD0  93 C1 00 B8 */	stw r30, 0xb8(r1)
/* 80115EF4 00112FD4  93 A1 00 B4 */	stw r29, 0xb4(r1)
/* 80115EF8 00112FD8  93 81 00 B0 */	stw r28, 0xb0(r1)
/* 80115EFC 00112FDC  7C 7F 1B 78 */	mr r31, r3
/* 80115F00 00112FE0  38 00 00 01 */	li r0, 0x1
/* 80115F04 00112FE4  3C 80 80 29 */	lis r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@ha
/* 80115F08 00112FE8  98 03 00 98 */	stb r0, 0x98(r3)
/* 80115F0C 00112FEC  38 C4 7A 68 */	addi r6, r4, "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"@l
/* 80115F10 00112FF0  3C 80 80 3C */	lis r4, globals@ha
/* 80115F14 00112FF4  80 A6 00 3C */	lwz r5, 0x3c(r6)
/* 80115F18 00112FF8  38 84 05 58 */	addi r4, r4, globals@l
/* 80115F1C 00112FFC  C0 24 09 24 */	lfs f1, 0x924(r4)
/* 80115F20 00113000  38 9F 00 9C */	addi r4, r31, 0x9c
/* 80115F24 00113004  80 E5 00 10 */	lwz r7, 0x10(r5)
/* 80115F28 00113008  38 A6 01 74 */	addi r5, r6, 0x174
/* 80115F2C 0011300C  38 C6 01 80 */	addi r6, r6, 0x180
/* 80115F30 00113010  C0 47 00 2C */	lfs f2, 0x2c(r7)
/* 80115F34 00113014  48 00 01 E1 */	bl "calc_drop_off_velocity__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFR5xVec3RC5xVec3RC5xVec3ff"
/* 80115F38 00113018  3C 60 80 3C */	lis r3, globals@ha
/* 80115F3C 0011301C  7F E4 FB 78 */	mr r4, r31
/* 80115F40 00113020  38 A3 05 58 */	addi r5, r3, globals@l
/* 80115F44 00113024  38 61 00 44 */	addi r3, r1, 0x44
/* 80115F48 00113028  3B 85 00 14 */	addi r28, r5, 0x14
/* 80115F4C 0011302C  38 BF 00 08 */	addi r5, r31, 0x8
/* 80115F50 00113030  4B FF DF E1 */	bl "local_to_world__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeCFRC5xVec3"
/* 80115F54 00113034  80 C1 00 44 */	lwz r6, 0x44(r1)
/* 80115F58 00113038  7F 84 E3 78 */	mr r4, r28
/* 80115F5C 0011303C  80 A1 00 48 */	lwz r5, 0x48(r1)
/* 80115F60 00113040  38 61 00 68 */	addi r3, r1, 0x68
/* 80115F64 00113044  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 80115F68 00113048  90 C1 00 5C */	stw r6, 0x5c(r1)
/* 80115F6C 0011304C  90 A1 00 60 */	stw r5, 0x60(r1)
/* 80115F70 00113050  90 01 00 64 */	stw r0, 0x64(r1)
/* 80115F74 00113054  4B EF 52 F1 */	bl __as__5xVec3FRC5xVec3
/* 80115F78 00113058  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 80115F7C 0011305C  3B C1 00 78 */	addi r30, r1, 0x78
/* 80115F80 00113060  C0 42 9E 88 */	lfs f2, "@961"@sda21(r2)
/* 80115F84 00113064  7F C3 F3 78 */	mr r3, r30
/* 80115F88 00113068  FC 60 08 90 */	fmr f3, f1
/* 80115F8C 0011306C  4B EF 51 61 */	bl assign__5xVec3Ffff
/* 80115F90 00113070  7F C5 F3 78 */	mr r5, r30
/* 80115F94 00113074  38 61 00 38 */	addi r3, r1, 0x38
/* 80115F98 00113078  38 81 00 68 */	addi r4, r1, 0x68
/* 80115F9C 0011307C  4B EF F5 99 */	bl cross__5xVec3CFRC5xVec3
/* 80115FA0 00113080  3B A1 00 88 */	addi r29, r1, 0x88
/* 80115FA4 00113084  38 81 00 38 */	addi r4, r1, 0x38
/* 80115FA8 00113088  7F A3 EB 78 */	mr r3, r29
/* 80115FAC 0011308C  4B EF 52 B9 */	bl __as__5xVec3FRC5xVec3
/* 80115FB0 00113090  3C 80 80 3C */	lis r4, globals@ha
/* 80115FB4 00113094  38 61 00 2C */	addi r3, r1, 0x2c
/* 80115FB8 00113098  38 C4 05 58 */	addi r6, r4, globals@l
/* 80115FBC 0011309C  38 9C 00 30 */	addi r4, r28, 0x30
/* 80115FC0 001130A0  C3 E6 01 74 */	lfs f31, 0x174(r6)
/* 80115FC4 001130A4  38 A1 00 5C */	addi r5, r1, 0x5c
/* 80115FC8 001130A8  C3 C6 01 64 */	lfs f30, 0x164(r6)
/* 80115FCC 001130AC  4B EF 52 01 */	bl __mi__5xVec3CFRC5xVec3
/* 80115FD0 001130B0  38 7F 00 C8 */	addi r3, r31, 0xc8
/* 80115FD4 001130B4  38 81 00 2C */	addi r4, r1, 0x2c
/* 80115FD8 001130B8  4B EF 52 8D */	bl __as__5xVec3FRC5xVec3
/* 80115FDC 001130BC  FC 20 F0 50 */	fneg f1, f30
/* 80115FE0 001130C0  7F A4 EB 78 */	mr r4, r29
/* 80115FE4 001130C4  38 61 00 08 */	addi r3, r1, 0x8
/* 80115FE8 001130C8  4B EF 51 39 */	bl __ml__5xVec3CFf
/* 80115FEC 001130CC  FC 20 F8 90 */	fmr f1, f31
/* 80115FF0 001130D0  7F C4 F3 78 */	mr r4, r30
/* 80115FF4 001130D4  38 61 00 14 */	addi r3, r1, 0x14
/* 80115FF8 001130D8  4B EF 51 29 */	bl __ml__5xVec3CFf
/* 80115FFC 001130DC  38 61 00 20 */	addi r3, r1, 0x20
/* 80116000 001130E0  38 81 00 14 */	addi r4, r1, 0x14
/* 80116004 001130E4  38 A1 00 08 */	addi r5, r1, 0x8
/* 80116008 001130E8  4B EF F3 D9 */	bl __pl__5xVec3CFRC5xVec3
/* 8011600C 001130EC  38 7F 00 D4 */	addi r3, r31, 0xd4
/* 80116010 001130F0  38 81 00 20 */	addi r4, r1, 0x20
/* 80116014 001130F4  4B EF 52 51 */	bl __as__5xVec3FRC5xVec3
/* 80116018 001130F8  38 61 00 68 */	addi r3, r1, 0x68
/* 8011601C 001130FC  38 81 00 50 */	addi r4, r1, 0x50
/* 80116020 00113100  4B F1 BE 15 */	bl xMat3x3GetEuler__FPC7xMat3x3P5xVec3
/* 80116024 00113104  48 06 94 15 */	bl zCameraTweakGlobal_GetPitch__Fv
/* 80116028 00113108  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 8011602C 0011310C  38 61 00 68 */	addi r3, r1, 0x68
/* 80116030 00113110  38 81 00 50 */	addi r4, r1, 0x50
/* 80116034 00113114  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 80116038 00113118  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 8011603C 0011311C  4B F1 C1 69 */	bl xMat3x3Euler__FP7xMat3x3PC5xVec3
/* 80116040 00113120  7F 84 E3 78 */	mr r4, r28
/* 80116044 00113124  38 7F 00 E0 */	addi r3, r31, 0xe0
/* 80116048 00113128  4B F1 CC 3D */	bl xQuatFromMat__FP5xQuatPC7xMat3x3
/* 8011604C 0011312C  38 7F 00 F0 */	addi r3, r31, 0xf0
/* 80116050 00113130  38 81 00 68 */	addi r4, r1, 0x68
/* 80116054 00113134  4B F1 CC 31 */	bl xQuatFromMat__FP5xQuatPC7xMat3x3
/* 80116058 00113138  C0 02 9E A0 */	lfs f0, "@1783"@sda21(r2)
/* 8011605C 0011313C  38 7F 00 08 */	addi r3, r31, 0x8
/* 80116060 00113140  D0 1F 00 C0 */	stfs f0, 0xc0(r31)
/* 80116064 00113144  4B EF 51 45 */	bl length__5xVec3CFv
/* 80116068 00113148  C0 1F 01 3C */	lfs f0, 0x13c(r31)
/* 8011606C 0011314C  EC 01 00 24 */	fdivs f0, f1, f0
/* 80116070 00113150  FC 00 02 10 */	fabs f0, f0
/* 80116074 00113154  FC 20 00 18 */	frsp f1, f0
/* 80116078 00113158  4B EF 47 85 */	bl xsqrt__Ff
/* 8011607C 0011315C  D0 3F 00 C4 */	stfs f1, 0xc4(r31)
/* 80116080 00113160  C0 3F 00 C4 */	lfs f1, 0xc4(r31)
/* 80116084 00113164  C0 02 9F 24 */	lfs f0, "@2649"@sda21(r2)
/* 80116088 00113168  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011608C 0011316C  4C 41 13 82 */	cror eq, gt, eq
/* 80116090 00113170  40 82 00 1C */	bne .L_801160AC
/* 80116094 00113174  C0 02 9E BC */	lfs f0, "@1831"@sda21(r2)
/* 80116098 00113178  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8011609C 0011317C  4C 40 13 82 */	cror eq, lt, eq
/* 801160A0 00113180  40 82 00 0C */	bne .L_801160AC
/* 801160A4 00113184  C0 02 9E E0 */	lfs f0, "@2189"@sda21(r2)
/* 801160A8 00113188  D0 1F 00 C4 */	stfs f0, 0xc4(r31)
.L_801160AC:
/* 801160AC 0011318C  3C 60 80 3C */	lis r3, globals@ha
/* 801160B0 00113190  C0 22 9E A0 */	lfs f1, "@1783"@sda21(r2)
/* 801160B4 00113194  38 63 05 58 */	addi r3, r3, globals@l
/* 801160B8 00113198  C0 01 00 50 */	lfs f0, 0x50(r1)
/* 801160BC 0011319C  D0 23 01 48 */	stfs f1, 0x148(r3)
/* 801160C0 001131A0  D0 23 01 44 */	stfs f1, 0x144(r3)
/* 801160C4 001131A4  D0 23 01 40 */	stfs f1, 0x140(r3)
/* 801160C8 001131A8  D0 23 01 54 */	stfs f1, 0x154(r3)
/* 801160CC 001131AC  D0 23 01 50 */	stfs f1, 0x150(r3)
/* 801160D0 001131B0  D0 23 01 4C */	stfs f1, 0x14c(r3)
/* 801160D4 001131B4  C0 22 9F 0C */	lfs f1, "@2341"@sda21(r2)
/* 801160D8 001131B8  EC 01 00 2A */	fadds f0, f1, f0
/* 801160DC 001131BC  D0 03 01 84 */	stfs f0, 0x184(r3)
/* 801160E0 001131C0  D0 03 01 80 */	stfs f0, 0x180(r3)
/* 801160E4 001131C4  E3 E1 00 D8 */	psq_l f31, 0xd8(r1), 0, qr0
/* 801160E8 001131C8  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 801160EC 001131CC  E3 C1 00 C8 */	psq_l f30, 0xc8(r1), 0, qr0
/* 801160F0 001131D0  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 801160F4 001131D4  83 E1 00 BC */	lwz r31, 0xbc(r1)
/* 801160F8 001131D8  83 C1 00 B8 */	lwz r30, 0xb8(r1)
/* 801160FC 001131DC  83 A1 00 B4 */	lwz r29, 0xb4(r1)
/* 80116100 001131E0  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 80116104 001131E4  83 81 00 B0 */	lwz r28, 0xb0(r1)
/* 80116108 001131E8  7C 08 03 A6 */	mtlr r0
/* 8011610C 001131EC  38 21 00 E0 */	addi r1, r1, 0xe0
/* 80116110 001131F0  4E 80 00 20 */	blr
.endfn "start_detaching__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::calc_drop_off_velocity(xVec3&, const xVec3&, const xVec3&, float, float)
.fn "calc_drop_off_velocity__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFR5xVec3RC5xVec3RC5xVec3ff", local
/* 80116114 001131F4  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80116118 001131F8  7C 08 02 A6 */	mflr r0
/* 8011611C 001131FC  90 01 00 54 */	stw r0, 0x54(r1)
/* 80116120 00113200  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80116124 00113204  F3 E1 00 48 */	psq_st f31, 0x48(r1), 0, qr0
/* 80116128 00113208  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 8011612C 0011320C  F3 C1 00 38 */	psq_st f30, 0x38(r1), 0, qr0
/* 80116130 00113210  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80116134 00113214  FF C0 08 90 */	fmr f30, f1
/* 80116138 00113218  7C 9F 23 78 */	mr r31, r4
/* 8011613C 0011321C  FF E0 10 90 */	fmr f31, f2
/* 80116140 00113220  7C C4 33 78 */	mr r4, r6
/* 80116144 00113224  38 61 00 08 */	addi r3, r1, 0x8
/* 80116148 00113228  4B EF 50 85 */	bl __mi__5xVec3CFRC5xVec3
/* 8011614C 0011322C  C0 02 9E 88 */	lfs f0, "@961"@sda21(r2)
/* 80116150 00113230  38 61 00 14 */	addi r3, r1, 0x14
/* 80116154 00113234  38 81 00 08 */	addi r4, r1, 0x8
/* 80116158 00113238  EC 20 F8 24 */	fdivs f1, f0, f31
/* 8011615C 0011323C  4B EF 4F C5 */	bl __ml__5xVec3CFf
/* 80116160 00113240  7F E3 FB 78 */	mr r3, r31
/* 80116164 00113244  38 81 00 14 */	addi r4, r1, 0x14
/* 80116168 00113248  4B EF 50 FD */	bl __as__5xVec3FRC5xVec3
/* 8011616C 0011324C  C0 22 9E 8C */	lfs f1, "@969"@sda21(r2)
/* 80116170 00113250  C0 1F 00 04 */	lfs f0, 0x4(r31)
/* 80116174 00113254  EC 21 07 B2 */	fmuls f1, f1, f30
/* 80116178 00113258  EC 01 07 FA */	fmadds f0, f1, f31, f0
/* 8011617C 0011325C  D0 1F 00 04 */	stfs f0, 0x4(r31)
/* 80116180 00113260  E3 E1 00 48 */	psq_l f31, 0x48(r1), 0, qr0
/* 80116184 00113264  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80116188 00113268  E3 C1 00 38 */	psq_l f30, 0x38(r1), 0, qr0
/* 8011618C 0011326C  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 80116190 00113270  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80116194 00113274  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80116198 00113278  7C 08 03 A6 */	mtlr r0
/* 8011619C 0011327C  38 21 00 50 */	addi r1, r1, 0x50
/* 801161A0 00113280  4E 80 00 20 */	blr
.endfn "calc_drop_off_velocity__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFR5xVec3RC5xVec3RC5xVec3ff"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::render()
.fn "render__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv", local
/* 801161A4 00113284  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801161A8 00113288  7C 08 02 A6 */	mflr r0
/* 801161AC 0011328C  38 60 00 01 */	li r3, 0x1
/* 801161B0 00113290  90 01 00 14 */	stw r0, 0x14(r1)
/* 801161B4 00113294  4B FF A3 B9 */	bl "render_player__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@Fb"
/* 801161B8 00113298  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801161BC 0011329C  7C 08 03 A6 */	mtlr r0
/* 801161C0 001132A0  38 21 00 10 */	addi r1, r1, 0x10
/* 801161C4 001132A4  4E 80 00 20 */	blr
.endfn "render__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::cb_cache_collisions::operator()(xEnt&, xGridBound&)
.fn "__cl__Q412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type19cb_cache_collisionsFR4xEntR10xGridBound", local
/* 801161C8 001132A8  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 801161CC 001132AC  7C 08 02 A6 */	mflr r0
/* 801161D0 001132B0  90 01 00 64 */	stw r0, 0x64(r1)
/* 801161D4 001132B4  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 801161D8 001132B8  7C 9F 23 78 */	mr r31, r4
/* 801161DC 001132BC  93 C1 00 58 */	stw r30, 0x58(r1)
/* 801161E0 001132C0  7C 7E 1B 78 */	mr r30, r3
/* 801161E4 001132C4  88 04 00 22 */	lbz r0, 0x22(r4)
/* 801161E8 001132C8  54 00 06 F7 */	rlwinm. r0, r0, 0, 27, 27
/* 801161EC 001132CC  41 82 00 10 */	beq .L_801161FC
/* 801161F0 001132D0  88 1F 00 23 */	lbz r0, 0x23(r31)
/* 801161F4 001132D4  54 00 06 F7 */	rlwinm. r0, r0, 0, 27, 27
/* 801161F8 001132D8  40 82 00 0C */	bne .L_80116204
.L_801161FC:
/* 801161FC 001132DC  38 60 00 01 */	li r3, 0x1
/* 80116200 001132E0  48 00 00 94 */	b .L_80116294
.L_80116204:
/* 80116204 001132E4  38 00 00 00 */	li r0, 0x0
/* 80116208 001132E8  38 9F 00 64 */	addi r4, r31, 0x64
/* 8011620C 001132EC  90 01 00 08 */	stw r0, 0x8(r1)
/* 80116210 001132F0  38 A1 00 08 */	addi r5, r1, 0x8
/* 80116214 001132F4  80 7E 00 00 */	lwz r3, 0x0(r30)
/* 80116218 001132F8  4B EF 4B 8D */	bl xSphereHitsBound__FPC7xSpherePC6xBoundP7xCollis
/* 8011621C 001132FC  80 01 00 08 */	lwz r0, 0x8(r1)
/* 80116220 00113300  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80116224 00113304  40 82 00 0C */	bne .L_80116230
/* 80116228 00113308  38 60 00 01 */	li r3, 0x1
/* 8011622C 0011330C  48 00 00 68 */	b .L_80116294
.L_80116230:
/* 80116230 00113310  88 1F 00 21 */	lbz r0, 0x21(r31)
/* 80116234 00113314  28 00 00 05 */	cmplwi r0, 0x5
/* 80116238 00113318  40 82 00 28 */	bne .L_80116260
/* 8011623C 0011331C  80 7E 00 00 */	lwz r3, 0x0(r30)
/* 80116240 00113320  38 A1 00 08 */	addi r5, r1, 0x8
/* 80116244 00113324  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 80116248 00113328  4B EF 96 1D */	bl xSphereHitsModel__FPC7xSpherePC14xModelInstanceP7xCollis
/* 8011624C 0011332C  80 01 00 08 */	lwz r0, 0x8(r1)
/* 80116250 00113330  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80116254 00113334  40 82 00 0C */	bne .L_80116260
/* 80116258 00113338  38 60 00 01 */	li r3, 0x1
/* 8011625C 0011333C  48 00 00 38 */	b .L_80116294
.L_80116260:
/* 80116260 00113340  80 9E 00 08 */	lwz r4, 0x8(r30)
/* 80116264 00113344  38 00 00 00 */	li r0, 0x0
/* 80116268 00113348  80 BE 00 04 */	lwz r5, 0x4(r30)
/* 8011626C 0011334C  38 60 00 01 */	li r3, 0x1
/* 80116270 00113350  80 84 00 00 */	lwz r4, 0x0(r4)
/* 80116274 00113354  54 84 18 38 */	slwi r4, r4, 3
/* 80116278 00113358  7C 85 22 14 */	add r4, r5, r4
/* 8011627C 0011335C  93 E4 00 00 */	stw r31, 0x0(r4)
/* 80116280 00113360  90 04 00 04 */	stw r0, 0x4(r4)
/* 80116284 00113364  80 BE 00 08 */	lwz r5, 0x8(r30)
/* 80116288 00113368  80 85 00 00 */	lwz r4, 0x0(r5)
/* 8011628C 0011336C  38 04 00 01 */	addi r0, r4, 0x1
/* 80116290 00113370  90 05 00 00 */	stw r0, 0x0(r5)
.L_80116294:
/* 80116294 00113374  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80116298 00113378  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8011629C 0011337C  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 801162A0 00113380  7C 08 03 A6 */	mtlr r0
/* 801162A4 00113384  38 21 00 60 */	addi r1, r1, 0x60
/* 801162A8 00113388  4E 80 00 20 */	blr
.endfn "__cl__Q412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type19cb_cache_collisionsFR4xEntR10xGridBound"

# 0x801162AC - 0x8011630C
.section .text, "ax", unique, 1
.balign 4

# xVec3::normal() const
.fn normal__5xVec3CFv, weak
/* 801162AC 0011338C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801162B0 00113390  7C 08 02 A6 */	mflr r0
/* 801162B4 00113394  80 C4 00 00 */	lwz r6, 0x0(r4)
/* 801162B8 00113398  90 01 00 24 */	stw r0, 0x24(r1)
/* 801162BC 0011339C  80 A4 00 04 */	lwz r5, 0x4(r4)
/* 801162C0 001133A0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801162C4 001133A4  7C 7F 1B 78 */	mr r31, r3
/* 801162C8 001133A8  80 04 00 08 */	lwz r0, 0x8(r4)
/* 801162CC 001133AC  38 61 00 08 */	addi r3, r1, 0x8
/* 801162D0 001133B0  90 C1 00 08 */	stw r6, 0x8(r1)
/* 801162D4 001133B4  90 A1 00 0C */	stw r5, 0xc(r1)
/* 801162D8 001133B8  90 01 00 10 */	stw r0, 0x10(r1)
/* 801162DC 001133BC  4B EF F2 D5 */	bl normalize__5xVec3Fv
/* 801162E0 001133C0  80 83 00 00 */	lwz r4, 0x0(r3)
/* 801162E4 001133C4  80 03 00 04 */	lwz r0, 0x4(r3)
/* 801162E8 001133C8  90 9F 00 00 */	stw r4, 0x0(r31)
/* 801162EC 001133CC  90 1F 00 04 */	stw r0, 0x4(r31)
/* 801162F0 001133D0  80 03 00 08 */	lwz r0, 0x8(r3)
/* 801162F4 001133D4  90 1F 00 08 */	stw r0, 0x8(r31)
/* 801162F8 001133D8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801162FC 001133DC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80116300 001133E0  7C 08 03 A6 */	mtlr r0
/* 80116304 001133E4  38 21 00 20 */	addi r1, r1, 0x20
/* 80116308 001133E8  4E 80 00 20 */	blr
.endfn normal__5xVec3CFv

# 0x8011630C - 0x801163D0
.section .text, "ax", unique, 2
.balign 4

# xMat3x3RMulVec(xVec3*, const xMat3x3*, const xVec3*)
.fn xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3, local
/* 8011630C 001133EC  C0 65 00 04 */	lfs f3, 0x4(r5)
/* 80116310 001133F0  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 80116314 001133F4  C0 44 00 14 */	lfs f2, 0x14(r4)
/* 80116318 001133F8  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8011631C 001133FC  C0 C5 00 00 */	lfs f6, 0x0(r5)
/* 80116320 00113400  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 80116324 00113404  EC 82 00 F2 */	fmuls f4, f2, f3
/* 80116328 00113408  C0 44 00 18 */	lfs f2, 0x18(r4)
/* 8011632C 0011340C  C0 A4 00 04 */	lfs f5, 0x4(r4)
/* 80116330 00113410  EC 01 01 BA */	fmadds f0, f1, f6, f0
/* 80116334 00113414  C0 E5 00 08 */	lfs f7, 0x8(r5)
/* 80116338 00113418  C0 24 00 20 */	lfs f1, 0x20(r4)
/* 8011633C 0011341C  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80116340 00113420  C0 64 00 08 */	lfs f3, 0x8(r4)
/* 80116344 00113424  EC 85 21 BA */	fmadds f4, f5, f6, f4
/* 80116348 00113428  EC 01 01 FA */	fmadds f0, f1, f7, f0
/* 8011634C 0011342C  C0 A4 00 24 */	lfs f5, 0x24(r4)
/* 80116350 00113430  EC 23 11 BA */	fmadds f1, f3, f6, f2
/* 80116354 00113434  C0 44 00 28 */	lfs f2, 0x28(r4)
/* 80116358 00113438  EC 65 21 FA */	fmadds f3, f5, f7, f4
/* 8011635C 0011343C  D0 03 00 00 */	stfs f0, 0x0(r3)
/* 80116360 00113440  EC 02 09 FA */	fmadds f0, f2, f7, f1
/* 80116364 00113444  D0 63 00 04 */	stfs f3, 0x4(r3)
/* 80116368 00113448  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 8011636C 0011344C  4E 80 00 20 */	blr
.endfn xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3

# xBoxFromSphere(xBox&, const xSphere&)
.fn xBoxFromSphere__FR4xBoxRC7xSphere, weak
/* 80116370 00113450  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80116374 00113454  7C 08 02 A6 */	mflr r0
/* 80116378 00113458  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011637C 0011345C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80116380 00113460  7C 9F 23 78 */	mr r31, r4
/* 80116384 00113464  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80116388 00113468  7C 7E 1B 78 */	mr r30, r3
/* 8011638C 0011346C  38 7E 00 0C */	addi r3, r30, 0xc
/* 80116390 00113470  4B EF 4E D5 */	bl __as__5xVec3FRC5xVec3
/* 80116394 00113474  7C 64 1B 78 */	mr r4, r3
/* 80116398 00113478  7F C3 F3 78 */	mr r3, r30
/* 8011639C 0011347C  4B EF 4E C9 */	bl __as__5xVec3FRC5xVec3
/* 801163A0 00113480  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 801163A4 00113484  7F C3 F3 78 */	mr r3, r30
/* 801163A8 00113488  4B F0 54 09 */	bl __apl__5xVec3Ff
/* 801163AC 0011348C  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 801163B0 00113490  38 7E 00 0C */	addi r3, r30, 0xc
/* 801163B4 00113494  4B F0 53 D5 */	bl __ami__5xVec3Ff
/* 801163B8 00113498  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801163BC 0011349C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801163C0 001134A0  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 801163C4 001134A4  7C 08 03 A6 */	mtlr r0
/* 801163C8 001134A8  38 21 00 10 */	addi r1, r1, 0x10
/* 801163CC 001134AC  4E 80 00 20 */	blr
.endfn xBoxFromSphere__FR4xBoxRC7xSphere

# 0x801163D0 - 0x80116588
.section .text, "ax", unique, 3
.balign 4

# xGridCheckBound<bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::cb_cache_collisions>(xGrid&, const xBound&, const xQCData&, bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::cb_cache_collisions)
.fn "xGridCheckBound<Q412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type19cb_cache_collisions>__FR5xGridRC6xBoundRC7xQCDataQ412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type19cb_cache_collisions", weak
/* 801163D0 001134B0  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 801163D4 001134B4  7C 08 02 A6 */	mflr r0
/* 801163D8 001134B8  90 01 00 64 */	stw r0, 0x64(r1)
/* 801163DC 001134BC  BF 21 00 44 */	stmw r25, 0x44(r1)
/* 801163E0 001134C0  7C 7D 1B 78 */	mr r29, r3
/* 801163E4 001134C4  7C BE 2B 78 */	mr r30, r5
/* 801163E8 001134C8  7C DF 33 78 */	mr r31, r6
/* 801163EC 001134CC  38 61 00 24 */	addi r3, r1, 0x24
/* 801163F0 001134D0  4B EF 41 E1 */	bl xBoundGetBox__FR4xBoxRC6xBound
/* 801163F4 001134D4  C0 42 9E E4 */	lfs f2, "@2190"@sda21(r2)
/* 801163F8 001134D8  7F A3 EB 78 */	mr r3, r29
/* 801163FC 001134DC  C0 1D 00 1C */	lfs f0, 0x1c(r29)
/* 80116400 001134E0  C0 3D 00 18 */	lfs f1, 0x18(r29)
/* 80116404 001134E4  EC A2 00 32 */	fmuls f5, f2, f0
/* 80116408 001134E8  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 8011640C 001134EC  EC 82 00 72 */	fmuls f4, f2, f1
/* 80116410 001134F0  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 80116414 001134F4  C0 61 00 24 */	lfs f3, 0x24(r1)
/* 80116418 001134F8  EC 40 28 28 */	fsubs f2, f0, f5
/* 8011641C 001134FC  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 80116420 00113500  EC 21 20 28 */	fsubs f1, f1, f4
/* 80116424 00113504  EC 63 20 2A */	fadds f3, f3, f4
/* 80116428 00113508  EC 00 28 2A */	fadds f0, f0, f5
/* 8011642C 0011350C  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 80116430 00113510  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 80116434 00113514  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 80116438 00113518  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8011643C 0011351C  4B F2 B1 D9 */	bl get_grid_index__FRC5xGridff
/* 80116440 00113520  90 61 00 0C */	stw r3, 0xc(r1)
/* 80116444 00113524  38 61 00 10 */	addi r3, r1, 0x10
/* 80116448 00113528  38 81 00 0C */	addi r4, r1, 0xc
/* 8011644C 0011352C  4B F2 AF DD */	bl __as__10grid_indexFRC10grid_index
/* 80116450 00113530  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80116454 00113534  7F A3 EB 78 */	mr r3, r29
/* 80116458 00113538  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 8011645C 0011353C  4B F2 B1 B9 */	bl get_grid_index__FRC5xGridff
/* 80116460 00113540  90 61 00 08 */	stw r3, 0x8(r1)
/* 80116464 00113544  38 61 00 14 */	addi r3, r1, 0x14
/* 80116468 00113548  38 81 00 08 */	addi r4, r1, 0x8
/* 8011646C 0011354C  4B F2 AF BD */	bl __as__10grid_indexFRC10grid_index
/* 80116470 00113550  38 7D 00 30 */	addi r3, r29, 0x30
/* 80116474 00113554  38 81 00 18 */	addi r4, r1, 0x18
/* 80116478 00113558  4B F0 55 1D */	bl xGridIterFirstCell__FPP10xGridBoundR13xGridIterator
/* 8011647C 0011355C  7C 7C 1B 78 */	mr r28, r3
/* 80116480 00113560  48 00 00 48 */	b .L_801164C8
.L_80116484:
/* 80116484 00113564  7F C3 F3 78 */	mr r3, r30
/* 80116488 00113568  38 9C 00 14 */	addi r4, r28, 0x14
/* 8011648C 0011356C  4B F2 61 35 */	bl xQuickCullIsects__FPC7xQCDataPC7xQCData
/* 80116490 00113570  2C 03 00 00 */	cmpwi r3, 0x0
/* 80116494 00113574  41 82 00 28 */	beq .L_801164BC
/* 80116498 00113578  80 9C 00 00 */	lwz r4, 0x0(r28)
/* 8011649C 0011357C  7F E3 FB 78 */	mr r3, r31
/* 801164A0 00113580  7F 85 E3 78 */	mr r5, r28
/* 801164A4 00113584  4B FF FD 25 */	bl "__cl__Q412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type19cb_cache_collisionsFR4xEntR10xGridBound"
/* 801164A8 00113588  54 60 06 3F */	clrlwi. r0, r3, 24
/* 801164AC 0011358C  40 82 00 10 */	bne .L_801164BC
/* 801164B0 00113590  38 61 00 18 */	addi r3, r1, 0x18
/* 801164B4 00113594  4B F0 55 FD */	bl xGridIterClose__FR13xGridIterator
/* 801164B8 00113598  48 00 00 BC */	b .L_80116574
.L_801164BC:
/* 801164BC 0011359C  38 61 00 18 */	addi r3, r1, 0x18
/* 801164C0 001135A0  4B F0 55 81 */	bl xGridIterNextCell__FR13xGridIterator
/* 801164C4 001135A4  7C 7C 1B 78 */	mr r28, r3
.L_801164C8:
/* 801164C8 001135A8  28 1C 00 00 */	cmplwi r28, 0x0
/* 801164CC 001135AC  40 82 FF B8 */	bne .L_80116484
/* 801164D0 001135B0  A3 61 00 10 */	lhz r27, 0x10(r1)
/* 801164D4 001135B4  48 00 00 90 */	b .L_80116564
.L_801164D8:
/* 801164D8 001135B8  A3 41 00 12 */	lhz r26, 0x12(r1)
/* 801164DC 001135BC  57 7C 04 3E */	clrlwi r28, r27, 16
/* 801164E0 001135C0  48 00 00 70 */	b .L_80116550
.L_801164E4:
/* 801164E4 001135C4  7F A3 EB 78 */	mr r3, r29
/* 801164E8 001135C8  7F 84 E3 78 */	mr r4, r28
/* 801164EC 001135CC  57 45 04 3E */	clrlwi r5, r26, 16
/* 801164F0 001135D0  38 C1 00 18 */	addi r6, r1, 0x18
/* 801164F4 001135D4  4B F0 54 D9 */	bl xGridIterFirstCell__FP5xGridiiR13xGridIterator
/* 801164F8 001135D8  7C 79 1B 78 */	mr r25, r3
/* 801164FC 001135DC  48 00 00 48 */	b .L_80116544
.L_80116500:
/* 80116500 001135E0  7F C3 F3 78 */	mr r3, r30
/* 80116504 001135E4  38 99 00 14 */	addi r4, r25, 0x14
/* 80116508 001135E8  4B F2 60 B9 */	bl xQuickCullIsects__FPC7xQCDataPC7xQCData
/* 8011650C 001135EC  2C 03 00 00 */	cmpwi r3, 0x0
/* 80116510 001135F0  41 82 00 28 */	beq .L_80116538
/* 80116514 001135F4  80 99 00 00 */	lwz r4, 0x0(r25)
/* 80116518 001135F8  7F E3 FB 78 */	mr r3, r31
/* 8011651C 001135FC  7F 25 CB 78 */	mr r5, r25
/* 80116520 00113600  4B FF FC A9 */	bl "__cl__Q412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type19cb_cache_collisionsFR4xEntR10xGridBound"
/* 80116524 00113604  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80116528 00113608  40 82 00 10 */	bne .L_80116538
/* 8011652C 0011360C  38 61 00 18 */	addi r3, r1, 0x18
/* 80116530 00113610  4B F0 55 81 */	bl xGridIterClose__FR13xGridIterator
/* 80116534 00113614  48 00 00 40 */	b .L_80116574
.L_80116538:
/* 80116538 00113618  38 61 00 18 */	addi r3, r1, 0x18
/* 8011653C 0011361C  4B F0 55 05 */	bl xGridIterNextCell__FR13xGridIterator
/* 80116540 00113620  7C 79 1B 78 */	mr r25, r3
.L_80116544:
/* 80116544 00113624  28 19 00 00 */	cmplwi r25, 0x0
/* 80116548 00113628  40 82 FF B8 */	bne .L_80116500
/* 8011654C 0011362C  3B 5A 00 01 */	addi r26, r26, 0x1
.L_80116550:
/* 80116550 00113630  A0 01 00 16 */	lhz r0, 0x16(r1)
/* 80116554 00113634  57 43 04 3E */	clrlwi r3, r26, 16
/* 80116558 00113638  7C 03 00 40 */	cmplw r3, r0
/* 8011655C 0011363C  40 81 FF 88 */	ble .L_801164E4
/* 80116560 00113640  3B 7B 00 01 */	addi r27, r27, 0x1
.L_80116564:
/* 80116564 00113644  A0 01 00 14 */	lhz r0, 0x14(r1)
/* 80116568 00113648  57 63 04 3E */	clrlwi r3, r27, 16
/* 8011656C 0011364C  7C 03 00 40 */	cmplw r3, r0
/* 80116570 00113650  40 81 FF 68 */	ble .L_801164D8
.L_80116574:
/* 80116574 00113654  BB 21 00 44 */	lmw r25, 0x44(r1)
/* 80116578 00113658  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8011657C 0011365C  7C 08 03 A6 */	mtlr r0
/* 80116580 00113660  38 21 00 60 */	addi r1, r1, 0x60
/* 80116584 00113664  4E 80 00 20 */	blr
.endfn "xGridCheckBound<Q412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type19cb_cache_collisions>__FR5xGridRC6xBoundRC7xQCDataQ412bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type19cb_cache_collisions"

# 0x8026A408 - 0x8026AFD8
.rodata
.balign 8

.obj "@405", local
.sym ...rodata.0, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@405"

.obj "@406", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@406"

.obj "@410", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@410"

.obj "@441", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@441"

.obj "@624", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@624"

.obj "@625", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@625"

.obj "@626", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@626"

.obj "@627", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@627"

.obj "@628", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@628"

.obj "@629", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@629"

.obj "@630", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@630"

.obj screen_bounds, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x3F800000
	.4byte 0x3F800000
.endobj screen_bounds

.obj default_adjust, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x3F800000
	.4byte 0x3F800000
.endobj default_adjust

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::sound_groups
.obj "sound_groups__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@", local
	.4byte 0x00000028
	.4byte 0x00000028
	.4byte 0x00000000
	.4byte 0x00000061
	.4byte 0x00000061
	.4byte 0x01000000
	.4byte 0x00000029
	.4byte 0x00000029
	.4byte 0x00000000
	.4byte 0x0000002B
	.4byte 0x0000002C
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte 0x00000000
	.4byte 0x00000027
	.4byte 0x00000027
	.4byte 0x00000000
	.4byte 0x0000001B
	.4byte 0x0000001E
	.4byte 0x00000000
	.4byte 0x0000001B
	.4byte 0x0000001E
	.4byte 0x00000000
	.4byte 0x00000064
	.4byte 0x00000075
	.4byte 0x01000000
.endobj "sound_groups__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"

.obj "@1502", local
	.4byte 0x00000000
	.4byte 0xBF800000
	.4byte 0x00000000
.endobj "@1502"

.obj vertical_cb$1766, local
	.4byte "on_tweak_vertical__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC10tweak_info"
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj vertical_cb$1766

.obj horizontal_cb$1767, local
	.4byte "on_tweak_horizontal__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC10tweak_info"
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj horizontal_cb$1767

.obj camera_cb$1768, local
	.4byte "on_tweak_camera__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC10tweak_info"
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj camera_cb$1768

.obj collision_cb$1769, local
	.4byte "on_tweak_collision__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFRC10tweak_info"
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj collision_cb$1769

.obj "@stringBase0", local
	.4byte 0x42756E67
	.4byte 0x65657C48
	.4byte 0x6F6F6B7C
	.4byte 0x74656D70
	.4byte 0x20786F66
	.4byte 0x66004275
	.4byte 0x6E676565
	.4byte 0x7C486F6F
	.4byte 0x6B7C7465
	.4byte 0x6D702079
	.4byte 0x6F666600
	.4byte 0x42756E67
	.4byte 0x65657C48
	.4byte 0x6F6F6B7C
	.4byte 0x74656D70
	.4byte 0x207A6F66
	.4byte 0x66004A75
	.4byte 0x6D705374
	.4byte 0x61727430
	.4byte 0x31004A75
	.4byte 0x6D704C69
	.4byte 0x66743031
	.4byte 0x004A756D
	.4byte 0x70417065
	.4byte 0x78303100
	.4byte 0x444A756D
	.4byte 0x70537461
	.4byte 0x72743031
	.4byte 0x00444A75
	.4byte 0x6D704C69
	.4byte 0x66743031
	.4byte 0x0046616C
	.4byte 0x6C303100
	.4byte 0x46616C6C
	.4byte 0x48696768
	.4byte 0x30310067
	.4byte 0x616D655F
	.4byte 0x6F626A65
	.4byte 0x63743A62
	.4byte 0x756E6765
	.4byte 0x655F6472
	.4byte 0x6F700053
	.4byte 0x422E7374
	.4byte 0x6174652E
	.4byte 0x62756E67
	.4byte 0x65652E62
	.4byte 0x6F74746F
	.4byte 0x6D5F616E
	.4byte 0x696D5F66
	.4byte 0x72616300
	.4byte 0x42756E67
	.4byte 0x65657C47
	.4byte 0x6C6F6261
	.4byte 0x6C737C41
	.4byte 0x6E696D20
	.4byte 0x426F7474
	.4byte 0x6F6D2046
	.4byte 0x72616374
	.4byte 0x696F6E00
	.4byte 0x53422E73
	.4byte 0x74617465
	.4byte 0x2E62756E
	.4byte 0x6765652E
	.4byte 0x746F705F
	.4byte 0x616E696D
	.4byte 0x5F667261
	.4byte 0x63004275
	.4byte 0x6E676565
	.4byte 0x7C476C6F
	.4byte 0x62616C73
	.4byte 0x7C416E69
	.4byte 0x6D20546F
	.4byte 0x70204672
	.4byte 0x61637469
	.4byte 0x6F6E0053
	.4byte 0x422E7374
	.4byte 0x6174652E
	.4byte 0x62756E67
	.4byte 0x65652E62
	.4byte 0x6F74746F
	.4byte 0x6D5F616E
	.4byte 0x696D5F74
	.4byte 0x696D6500
	.4byte 0x42756E67
	.4byte 0x65657C47
	.4byte 0x6C6F6261
	.4byte 0x6C737C41
	.4byte 0x6E696D20
	.4byte 0x5472616E
	.4byte 0x7320426F
	.4byte 0x74746F6D
	.4byte 0x2D54696D
	.4byte 0x65005342
	.4byte 0x2E737461
	.4byte 0x74652E62
	.4byte 0x756E6765
	.4byte 0x652E746F
	.4byte 0x705F616E
	.4byte 0x696D5F74
	.4byte 0x696D6500
	.4byte 0x42756E67
	.4byte 0x65657C47
	.4byte 0x6C6F6261
	.4byte 0x6C737C41
	.4byte 0x6E696D20
	.4byte 0x5472616E
	.4byte 0x7320546F
	.4byte 0x702D5469
	.4byte 0x6D650053
	.4byte 0x422E7374
	.4byte 0x6174652E
	.4byte 0x62756E67
	.4byte 0x65652E68
	.4byte 0x69745F61
	.4byte 0x6E696D5F
	.4byte 0x74696D65
	.4byte 0x0042756E
	.4byte 0x6765657C
	.4byte 0x476C6F62
	.4byte 0x616C737C
	.4byte 0x416E696D
	.4byte 0x20547261
	.4byte 0x6E732048
	.4byte 0x69742D54
	.4byte 0x696D6500
	.4byte 0x53422E73
	.4byte 0x74617465
	.4byte 0x2E62756E
	.4byte 0x6765652E
	.4byte 0x64616D61
	.4byte 0x67655F72
	.4byte 0x6F740042
	.4byte 0x756E6765
	.4byte 0x657C476C
	.4byte 0x6F62616C
	.4byte 0x737C4461
	.4byte 0x6D616765
	.4byte 0x20526F74
	.4byte 0x6174696F
	.4byte 0x6E005342
	.4byte 0x2E737461
	.4byte 0x74652E62
	.4byte 0x756E6765
	.4byte 0x652E6465
	.4byte 0x6174685F
	.4byte 0x74696D65
	.4byte 0x0042756E
	.4byte 0x6765657C
	.4byte 0x476C6F62
	.4byte 0x616C737C
	.4byte 0x44656174
	.4byte 0x68204661
	.4byte 0x64652D4F
	.4byte 0x75742054
	.4byte 0x696D6500
	.4byte 0x53422E73
	.4byte 0x74617465
	.4byte 0x2E62756E
	.4byte 0x6765652E
	.4byte 0x76656C5F
	.4byte 0x626C7572
	.4byte 0x0042756E
	.4byte 0x6765657C
	.4byte 0x476C6F62
	.4byte 0x616C737C
	.4byte 0x56656C6F
	.4byte 0x63697479
	.4byte 0x20426C75
	.4byte 0x72005342
	.4byte 0x2E737461
	.4byte 0x74652E62
	.4byte 0x756E6765
	.4byte 0x652E6661
	.4byte 0x64655F64
	.4byte 0x69737400
	.4byte 0x42756E67
	.4byte 0x65657C47
	.4byte 0x6C6F6261
	.4byte 0x6C737C43
	.4byte 0x6F726420
	.4byte 0x46616465
	.4byte 0x20446973
	.4byte 0x74616E63
	.4byte 0x65005342
	.4byte 0x2E737461
	.4byte 0x74652E62
	.4byte 0x756E6765
	.4byte 0x652E706C
	.4byte 0x61796572
	.4byte 0x5F726164
	.4byte 0x69757300
	.4byte 0x42756E67
	.4byte 0x65657C47
	.4byte 0x6C6F6261
	.4byte 0x6C737C50
	.4byte 0x6C617965
	.4byte 0x72205261
	.4byte 0x64697573
	.4byte 0x0053422E
	.4byte 0x73746174
	.4byte 0x652E6275
	.4byte 0x6E676565
	.4byte 0x2E686F6F
	.4byte 0x6B5F6661
	.4byte 0x64655F61
	.4byte 0x6C706861
	.4byte 0x0042756E
	.4byte 0x6765657C
	.4byte 0x476C6F62
	.4byte 0x616C737C
	.4byte 0x486F6F6B
	.4byte 0x20466164
	.4byte 0x6520416C
	.4byte 0x70686100
	.4byte 0x53422E73
	.4byte 0x74617465
	.4byte 0x2E62756E
	.4byte 0x6765652E
	.4byte 0x686F6F6B
	.4byte 0x5F666164
	.4byte 0x655F7469
	.4byte 0x6D650042
	.4byte 0x756E6765
	.4byte 0x657C476C
	.4byte 0x6F62616C
	.4byte 0x737C486F
	.4byte 0x6F6B2046
	.4byte 0x61646520
	.4byte 0x54696D65
	.4byte 0x0053422E
	.4byte 0x73746174
	.4byte 0x652E6275
	.4byte 0x6E676565
	.4byte 0x2E686F72
	.4byte 0x697A6F6E
	.4byte 0x74616C2E
	.4byte 0x65646765
	.4byte 0x5F7A6F6E
	.4byte 0x65004275
	.4byte 0x6E676565
	.4byte 0x7C476C6F
	.4byte 0x62616C73
	.4byte 0x7C486F72
	.4byte 0x7A204564
	.4byte 0x6765205A
	.4byte 0x6F6E6500
	.4byte 0x53422E73
	.4byte 0x74617465
	.4byte 0x2E62756E
	.4byte 0x6765652E
	.4byte 0x686F7269
	.4byte 0x7A6F6E74
	.4byte 0x616C2E73
	.4byte 0x77617900
	.4byte 0x42756E67
	.4byte 0x65657C47
	.4byte 0x6C6F6261
	.4byte 0x6C737C48
	.4byte 0x6F727A20
	.4byte 0x53776179
	.4byte 0x20466F72
	.4byte 0x63650053
	.4byte 0x422E7374
	.4byte 0x6174652E
	.4byte 0x62756E67
	.4byte 0x65652E68
	.4byte 0x6F72697A
	.4byte 0x6F6E7461
	.4byte 0x6C2E6465
	.4byte 0x63617900
	.4byte 0x42756E67
	.4byte 0x65657C47
	.4byte 0x6C6F6261
	.4byte 0x6C737C48
	.4byte 0x6F727A20
	.4byte 0x56656C6F
	.4byte 0x63697479
	.4byte 0x20446563
	.4byte 0x61790053
	.4byte 0x422E7374
	.4byte 0x6174652E
	.4byte 0x62756E67
	.4byte 0x65652E64
	.4byte 0x6976652E
	.4byte 0x74696D65
	.4byte 0x0042756E
	.4byte 0x6765657C
	.4byte 0x476C6F62
	.4byte 0x616C737C
	.4byte 0x44697665
	.4byte 0x2054696D
	.4byte 0x65005342
	.4byte 0x2E737461
	.4byte 0x74652E62
	.4byte 0x756E6765
	.4byte 0x652E6469
	.4byte 0x76652E61
	.4byte 0x6E696D5F
	.4byte 0x6F75745F
	.4byte 0x74696D65
	.4byte 0x0042756E
	.4byte 0x6765657C
	.4byte 0x476C6F62
	.4byte 0x616C737C
	.4byte 0x44697665
	.4byte 0x20416E69
	.4byte 0x6D204F75
	.4byte 0x742D5469
	.4byte 0x6D650053
	.4byte 0x422E7374
	.4byte 0x6174652E
	.4byte 0x62756E67
	.4byte 0x65652E64
	.4byte 0x6976652E
	.4byte 0x6D696E5F
	.4byte 0x64697374
	.4byte 0x0042756E
	.4byte 0x6765657C
	.4byte 0x476C6F62
	.4byte 0x616C737C
	.4byte 0x44697665
	.4byte 0x204D696E
	.4byte 0x20446973
	.4byte 0x74616E63
	.4byte 0x65005342
	.4byte 0x2E737461
	.4byte 0x74652E62
	.4byte 0x756E6765
	.4byte 0x652E6469
	.4byte 0x76652E6D
	.4byte 0x61785F64
	.4byte 0x69737400
	.4byte 0x42756E67
	.4byte 0x65657C47
	.4byte 0x6C6F6261
	.4byte 0x6C737C44
	.4byte 0x69766520
	.4byte 0x4D617820
	.4byte 0x44697374
	.4byte 0x616E6365
	.4byte 0x0053422E
	.4byte 0x73746174
	.4byte 0x652E6275
	.4byte 0x6E676565
	.4byte 0x2E63616D
	.4byte 0x6572612E
	.4byte 0x73706565
	.4byte 0x64004275
	.4byte 0x6E676565
	.4byte 0x7C476C6F
	.4byte 0x62616C73
	.4byte 0x7C43616D
	.4byte 0x65726120
	.4byte 0x53706565
	.4byte 0x64005342
	.4byte 0x2E737461
	.4byte 0x74652E62
	.4byte 0x756E6765
	.4byte 0x652E7475
	.4byte 0x726E2E73
	.4byte 0x7072696E
	.4byte 0x67004275
	.4byte 0x6E676565
	.4byte 0x7C476C6F
	.4byte 0x62616C73
	.4byte 0x7C547572
	.4byte 0x6E205370
	.4byte 0x72696E67
	.4byte 0x0053422E
	.4byte 0x73746174
	.4byte 0x652E6275
	.4byte 0x6E676565
	.4byte 0x2E747572
	.4byte 0x6E2E6465
	.4byte 0x63617900
	.4byte 0x42756E67
	.4byte 0x65657C47
	.4byte 0x6C6F6261
	.4byte 0x6C737C54
	.4byte 0x75726E20
	.4byte 0x44656361
	.4byte 0x79006275
	.4byte 0x6E676565
	.4byte 0x5F626F74
	.4byte 0x746F6D5F
	.4byte 0x30006275
	.4byte 0x6E676565
	.4byte 0x5F746F70
	.4byte 0x5F300062
	.4byte 0x756E6765
	.4byte 0x655F6469
	.4byte 0x76655F30
	.4byte 0x0062756E
	.4byte 0x6765655F
	.4byte 0x6869745F
	.4byte 0x30006275
	.4byte 0x6E676565
	.4byte 0x5F6D6F75
	.4byte 0x6E745F30
	.4byte 0x0062756E
	.4byte 0x6765655F
	.4byte 0x6379636C
	.4byte 0x655F3000
	.4byte 0x62756E67
	.4byte 0x65655F64
	.4byte 0x65617468
	.4byte 0x5F30004A
	.4byte 0x756D7053
	.4byte 0x74617274
	.4byte 0x3031204A
	.4byte 0x756D704C
	.4byte 0x69667430
	.4byte 0x31204A75
	.4byte 0x6D704170
	.4byte 0x65783031
	.4byte 0x20444A75
	.4byte 0x6D705374
	.4byte 0x61727430
	.4byte 0x3120444A
	.4byte 0x756D704C
	.4byte 0x69667430
	.4byte 0x31204661
	.4byte 0x6C6C3031
	.4byte 0x2046616C
	.4byte 0x6C486967
	.4byte 0x68303100
	.4byte 0x62756E67
	.4byte 0x65655F63
	.4byte 0x79636C65
	.4byte 0x5F302062
	.4byte 0x756E6765
	.4byte 0x655F6469
	.4byte 0x76655F30
	.4byte 0x2062756E
	.4byte 0x6765655F
	.4byte 0x746F705F
	.4byte 0x30206275
	.4byte 0x6E676565
	.4byte 0x5F626F74
	.4byte 0x746F6D5F
	.4byte 0x30004275
	.4byte 0x6E676565
	.4byte 0x7C486F6F
	.4byte 0x6B7C5665
	.4byte 0x72746963
	.4byte 0x616C2046
	.4byte 0x72657175
	.4byte 0x656E6379
	.4byte 0x0042756E
	.4byte 0x6765657C
	.4byte 0x486F6F6B
	.4byte 0x7C566572
	.4byte 0x74696361
	.4byte 0x6C204469
	.4byte 0x76652053
	.4byte 0x7472656E
	.4byte 0x67746800
	.4byte 0x42756E67
	.4byte 0x65657C48
	.4byte 0x6F6F6B7C
	.4byte 0x56657274
	.4byte 0x6963616C
	.4byte 0x20477261
	.4byte 0x76697479
	.4byte 0x0042756E
	.4byte 0x6765657C
	.4byte 0x486F6F6B
	.4byte 0x7C566572
	.4byte 0x74696361
	.4byte 0x6C204D69
	.4byte 0x6E204469
	.4byte 0x7374616E
	.4byte 0x63650042
	.4byte 0x756E6765
	.4byte 0x657C486F
	.4byte 0x6F6B7C56
	.4byte 0x65727469
	.4byte 0x63616C20
	.4byte 0x4D617820
	.4byte 0x44697374
	.4byte 0x616E6365
	.4byte 0x0042756E
	.4byte 0x6765657C
	.4byte 0x486F6F6B
	.4byte 0x7C566572
	.4byte 0x74696361
	.4byte 0x6C204461
	.4byte 0x6D70656E
	.4byte 0x696E6700
	.4byte 0x42756E67
	.4byte 0x65657C48
	.4byte 0x6F6F6B7C
	.4byte 0x486F7269
	.4byte 0x7A6F6E74
	.4byte 0x616C204D
	.4byte 0x61782044
	.4byte 0x69737461
	.4byte 0x6E636500
	.4byte 0x42756E67
	.4byte 0x65657C48
	.4byte 0x6F6F6B7C
	.4byte 0x43616D65
	.4byte 0x72612052
	.4byte 0x65737420
	.4byte 0x44697374
	.4byte 0x616E6365
	.4byte 0x0042756E
	.4byte 0x6765657C
	.4byte 0x486F6F6B
	.4byte 0x7C43616D
	.4byte 0x65726120
	.4byte 0x56696577
	.4byte 0x20416E67
	.4byte 0x6C650042
	.4byte 0x756E6765
	.4byte 0x657C486F
	.4byte 0x6F6B7C43
	.4byte 0x616D6572
	.4byte 0x61204F66
	.4byte 0x66736574
	.4byte 0x0042756E
	.4byte 0x6765657C
	.4byte 0x486F6F6B
	.4byte 0x7C43616D
	.4byte 0x65726120
	.4byte 0x4F666673
	.4byte 0x65742044
	.4byte 0x69726563
	.4byte 0x74696F6E
	.4byte 0x0042756E
	.4byte 0x6765657C
	.4byte 0x486F6F6B
	.4byte 0x7C43616D
	.4byte 0x65726120
	.4byte 0x5475726E
	.4byte 0x20537065
	.4byte 0x65640042
	.4byte 0x756E6765
	.4byte 0x657C486F
	.4byte 0x6F6B7C43
	.4byte 0x616D6572
	.4byte 0x61205665
	.4byte 0x6C6F6369
	.4byte 0x74792053
	.4byte 0x63616C65
	.4byte 0x0042756E
	.4byte 0x6765657C
	.4byte 0x486F6F6B
	.4byte 0x7C43616D
	.4byte 0x65726120
	.4byte 0x526F6C6C
	.4byte 0x20537065
	.4byte 0x65640042
	.4byte 0x756E6765
	.4byte 0x657C486F
	.4byte 0x6F6B7C43
	.4byte 0x6F6C6C69
	.4byte 0x64652048
	.4byte 0x6974204C
	.4byte 0x6F737300
	.4byte 0x42756E67
	.4byte 0x65657C48
	.4byte 0x6F6F6B7C
	.4byte 0x436F6C6C
	.4byte 0x69646520
	.4byte 0x44616D61
	.4byte 0x67652056
	.4byte 0x656C6F63
	.4byte 0x69747900
	.4byte 0x42756E67
	.4byte 0x65657C48
	.4byte 0x6F6F6B7C
	.4byte 0x436F6C6C
	.4byte 0x69646520
	.4byte 0x48697420
	.4byte 0x56656C6F
	.4byte 0x63697479
	.4byte 0x00544558
	.4byte 0x54424F58
	.4byte 0x5F42554E
	.4byte 0x4745455F
	.4byte 0x48454C50
	.4byte 0x00746578
	.4byte 0x745F6275
	.4byte 0x6E676565
	.4byte 0x5F68656C
	.4byte 0x70007465
	.4byte 0x78745F62
	.4byte 0x756E6765
	.4byte 0x655F6865
	.4byte 0x6C705F6E
	.4byte 0x6F646976
	.4byte 0x65004275
	.4byte 0x6E676565
	.4byte 0x7C486F6F
	.2byte 0x6B00
.endobj "@stringBase0"
	.2byte 0x0000

# 0x80297A68 - 0x80297CE0
.data
.balign 8

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::shared
.obj "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@", local
	.4byte 0x00000001
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "shared__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"

.obj tweak_cord_off$1014, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj tweak_cord_off$1014

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::attaching_state_type::__vtable
.obj "__vt__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@20attaching_state_type", weak
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "start__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@20attaching_state_typeFv"
	.4byte "stop__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@20attaching_state_typeFv"
	.4byte "update__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@20attaching_state_typeFR6xSceneRf"
	.4byte "render__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@20attaching_state_typeFv"
.endobj "__vt__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@20attaching_state_type"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::state_type::__vtable
.obj "__vt__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10state_type", weak
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "start__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10state_typeFv"
	.4byte "stop__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10state_typeFv"
	.4byte 0x00000000
	.4byte "render__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10state_typeFv"
.endobj "__vt__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@10state_type"

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::hanging_state_type::__vtable
.obj "__vt__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type", weak
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "start__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv"
	.4byte "stop__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv"
	.4byte "update__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFR6xSceneRf"
	.4byte "render__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFv"
.endobj "__vt__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_type"

.obj "@2594", local
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_80115514
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_8011541C
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_80115458
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_80115514
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_8011547C
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_80115514
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_80115514
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_80115514
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_801154AC
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_80115514
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_80115514
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_80115514
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_80115514
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_80115514
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_80115514
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_80115514
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_801154D0
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_80115514
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_80115514
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_80115514
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_80115514
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_80115514
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_80115514
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_80115514
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_80115514
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_80115514
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_80115514
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_80115514
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_80115514
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_80115514
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_80115514
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_80115514
	.rel "update_animation__Q312bungee_state35@unnamed@zEntPlayerBungeeState_cpp@18hanging_state_typeFf", .L_801154F4
.endobj "@2594"
	.4byte 0x00000000

# 0x80313788 - 0x803141F8
.section .bss, "wa", @nobits
.balign 8

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::fixed
.obj "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@", local
	.skip 0x58
.endobj "fixed__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"

.obj attaching_state$2203, local
	.skip 0x4C
.endobj attaching_state$2203

.obj hanging_state$2206, local
	.skip 0x9C8
.endobj hanging_state$2206
	.skip 0x4

# 0x803CBDF0 - 0x803CBE08
.section .sbss, "wa", @nobits
.balign 8

# bungee_state::@unnamed@zEntPlayerBungeeState_cpp@::old_pants_clip_radius
.obj "old_pants_clip_radius__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@", local
	.skip 0x4
.endobj "old_pants_clip_radius__Q212bungee_state35@unnamed@zEntPlayerBungeeState_cpp@"

.obj registered$1011, local
	.skip 0x1
.endobj registered$1011

.obj init$1012, local
	.skip 0x1
.endobj init$1012

.obj init$2204, local
	.skip 0x1
.endobj init$2204

.obj init$2207, local
	.skip 0x1
.endobj init$2207

.obj start_from$2298, local
	.skip 0x4
.endobj start_from$2298

.obj init$2299, local
	.skip 0x1
.endobj init$2299
	.skip 0x3

.obj start_to$2301, local
	.skip 0x4
.endobj start_to$2301

.obj init$2302, local
	.skip 0x1
.endobj init$2302
	.skip 0x3

# 0x803CE800 - 0x803CE8A8
.section .sdata2, "a"
.balign 8

.obj "@945", local
	.4byte 0x43FA0000
.endobj "@945"

.obj "@960", local
	.4byte 0x42C80000
.endobj "@960"

.obj "@961", local
	.4byte 0x3F800000
.endobj "@961"

.obj "@969", local
	.4byte 0x3F000000
.endobj "@969"

.obj "@987", local
	.4byte 0x3DCCCCCD
.endobj "@987"

.obj "@1028", local
	.4byte 0xC61C4000
.endobj "@1028"

.obj "@1029", local
	.4byte 0x461C4000
.endobj "@1029"

.obj "@1560", local
	.4byte 0x000000FF
.endobj "@1560"

.obj "@1783", local
	.4byte 0x00000000
.endobj "@1783"

.obj "@1784", local
	.4byte 0xFE967699
.endobj "@1784"

.obj "@1792", local
	.4byte 0x3C8EFA35
.endobj "@1792"

.obj "@1811", local
	.4byte 0xBF800000
.endobj "@1811"

.obj "@1817", local
	.4byte 0x40000000
.endobj "@1817"

.obj "@1829", local
	.4byte 0x40400000
.endobj "@1829"

.obj "@1830", local
	.4byte 0x47C35000
.endobj "@1830"

.obj "@1831", local
	.4byte 0x3727C5AC
.endobj "@1831"

.obj "@1833", local
	.4byte 0xC0490FDB
.endobj "@1833"

.obj "@1903", local
	.4byte 0x501502F9
.endobj "@1903"

.obj "@2183", local
	.4byte 0x3D4CCCCD
.endobj "@2183"

.obj "@2184", local
	.4byte 0x41200000
.endobj "@2184"

.obj "@2185", local
	.4byte 0x447A0000
.endobj "@2185"

.obj "@2186", local
	.4byte 0x3FC00000
.endobj "@2186"

.obj "@2187", local
	.4byte 0x41A00000
.endobj "@2187"

.obj "@2188", local
	.4byte 0x3E99999A
.endobj "@2188"

.obj "@2189", local
	.4byte 0x3C23D70A
.endobj "@2189"

.obj "@2190", local
	.4byte 0x3E800000
.endobj "@2190"

.obj "@2191", local
	.4byte 0x3F68F5C3
.endobj "@2191"

.obj "@2192", local
	.4byte 0x40A00000
.endobj "@2192"

.obj "@2193", local
	.4byte 0x3F19999A
.endobj "@2193"

.obj "@2194", local
	.4byte 0x3F028F5C
.endobj "@2194"

.obj "@2195", local
	.4byte 0x4E6E6B28
.endobj "@2195"

.obj "@2196", local
	.4byte 0x41C80000
.endobj "@2196"

.obj "@2197", local
	.4byte 0x3F733333
.endobj "@2197"

.obj "@2336", local
	.4byte 0x43480000
.endobj "@2336"

.obj "@2337", local
	.4byte 0x43B40000
.endobj "@2337"

.obj "@2341", local
	.4byte 0x40490FDB
.endobj "@2341"

.obj "@2342", local
	.4byte 0x40C90FDB
.endobj "@2342"

.obj "@2435", local
	.4byte 0x3F3504F3
.endobj "@2435"

.obj "@2436", local
	.4byte 0x3F13CD3A
.endobj "@2436"

.obj "@2550", local
	.4byte 0x38D1B717
.endobj "@2550"

.obj "@2555", local
	.4byte 0x3FC90FDB
.endobj "@2555"

.obj "@2649", local
	.4byte 0xB727C5AC
.endobj "@2649"

# 0x803D08C0 - 0x803D08C8
.section .sbss2, "a", @nobits
.balign 8

.obj "@1561", local
	.skip 0x4
.endobj "@1561"
	.skip 0x4
