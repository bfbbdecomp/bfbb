.include "macros.inc"
.file "zEntCruiseBubble.cpp"

# 0x8005720C - 0x8005FE90
.text
.balign 4

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::init_sound()
.fn "init_sound__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 8005720C 000542EC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80057210 000542F0  7C 08 02 A6 */	mflr r0
/* 80057214 000542F4  3C 60 80 29 */	lis r3, "sounds__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80057218 000542F8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005721C 000542FC  38 63 C4 30 */	addi r3, r3, "sounds__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80057220 00054300  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80057224 00054304  3B E0 00 00 */	li r31, 0x0
/* 80057228 00054308  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8005722C 0005430C  7C 7E 1B 78 */	mr r30, r3
/* 80057230 00054310  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80057234 00054314  3B A3 00 A0 */	addi r29, r3, 0xa0
/* 80057238 00054318  48 00 00 28 */	b .L_80057260
.L_8005723C:
/* 8005723C 0005431C  80 7E 00 00 */	lwz r3, 0x0(r30)
/* 80057240 00054320  28 03 00 00 */	cmplwi r3, 0x0
/* 80057244 00054324  40 82 00 0C */	bne .L_80057250
/* 80057248 00054328  38 60 00 00 */	li r3, 0x0
/* 8005724C 0005432C  48 00 00 08 */	b .L_80057254
.L_80057250:
/* 80057250 00054330  4B FF 4F C5 */	bl xStrHash__FPCc
.L_80057254:
/* 80057254 00054334  90 7E 00 20 */	stw r3, 0x20(r30)
/* 80057258 00054338  93 FE 00 24 */	stw r31, 0x24(r30)
/* 8005725C 0005433C  3B DE 00 28 */	addi r30, r30, 0x28
.L_80057260:
/* 80057260 00054340  7C 1E E8 40 */	cmplw r30, r29
/* 80057264 00054344  40 82 FF D8 */	bne .L_8005723C
/* 80057268 00054348  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005726C 0005434C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80057270 00054350  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80057274 00054354  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80057278 00054358  7C 08 03 A6 */	mtlr r0
/* 8005727C 0005435C  38 21 00 20 */	addi r1, r1, 0x20
/* 80057280 00054360  4E 80 00 20 */	blr
.endfn "init_sound__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::stop_sound(int, unsigned int)
.fn "stop_sound__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FiUi", local
/* 80057284 00054364  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80057288 00054368  7C 08 02 A6 */	mflr r0
/* 8005728C 0005436C  1C A3 00 28 */	mulli r5, r3, 0x28
/* 80057290 00054370  3C 60 80 29 */	lis r3, "sounds__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80057294 00054374  90 01 00 14 */	stw r0, 0x14(r1)
/* 80057298 00054378  38 03 C4 30 */	addi r0, r3, "sounds__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005729C 0005437C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800572A0 00054380  7F E0 2A 14 */	add r31, r0, r5
/* 800572A4 00054384  93 C1 00 08 */	stw r30, 0x8(r1)
/* 800572A8 00054388  80 1F 00 20 */	lwz r0, 0x20(r31)
/* 800572AC 0005438C  28 00 00 00 */	cmplwi r0, 0x0
/* 800572B0 00054390  40 82 00 34 */	bne .L_800572E4
/* 800572B4 00054394  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 800572B8 00054398  28 00 00 00 */	cmplwi r0, 0x0
/* 800572BC 0005439C  40 82 00 4C */	bne .L_80057308
/* 800572C0 000543A0  83 DF 00 18 */	lwz r30, 0x18(r31)
/* 800572C4 000543A4  48 00 00 10 */	b .L_800572D4
.L_800572C8:
/* 800572C8 000543A8  7F C3 F3 78 */	mr r3, r30
/* 800572CC 000543AC  48 02 9F 75 */	bl zEntPlayer_SNDStop__F14_tagePlayerSnd
/* 800572D0 000543B0  3B DE 00 01 */	addi r30, r30, 0x1
.L_800572D4:
/* 800572D4 000543B4  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 800572D8 000543B8  7C 1E 00 00 */	cmpw r30, r0
/* 800572DC 000543BC  40 81 FF EC */	ble .L_800572C8
/* 800572E0 000543C0  48 00 00 28 */	b .L_80057308
.L_800572E4:
/* 800572E4 000543C4  28 04 00 00 */	cmplwi r4, 0x0
/* 800572E8 000543C8  40 82 00 08 */	bne .L_800572F0
/* 800572EC 000543CC  80 9F 00 24 */	lwz r4, 0x24(r31)
.L_800572F0:
/* 800572F0 000543D0  28 04 00 00 */	cmplwi r4, 0x0
/* 800572F4 000543D4  41 82 00 0C */	beq .L_80057300
/* 800572F8 000543D8  7C 83 23 78 */	mr r3, r4
/* 800572FC 000543DC  4B FF 1F 05 */	bl xSndStop__FUi
.L_80057300:
/* 80057300 000543E0  38 00 00 00 */	li r0, 0x0
/* 80057304 000543E4  90 1F 00 24 */	stw r0, 0x24(r31)
.L_80057308:
/* 80057308 000543E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005730C 000543EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80057310 000543F0  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80057314 000543F4  7C 08 03 A6 */	mtlr r0
/* 80057318 000543F8  38 21 00 10 */	addi r1, r1, 0x10
/* 8005731C 000543FC  4E 80 00 20 */	blr
.endfn "stop_sound__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FiUi"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::play_sound(int, float)
.fn "play_sound__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fif", local
/* 80057320 00054400  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80057324 00054404  7C 08 02 A6 */	mflr r0
/* 80057328 00054408  1C 83 00 28 */	mulli r4, r3, 0x28
/* 8005732C 0005440C  3C 60 80 29 */	lis r3, "sounds__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80057330 00054410  90 01 00 14 */	stw r0, 0x14(r1)
/* 80057334 00054414  38 03 C4 30 */	addi r0, r3, "sounds__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80057338 00054418  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005733C 0005441C  7F E0 22 14 */	add r31, r0, r4
/* 80057340 00054420  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80057344 00054424  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 80057348 00054428  28 03 00 00 */	cmplwi r3, 0x0
/* 8005734C 0005442C  40 82 00 64 */	bne .L_800573B0
/* 80057350 00054430  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 80057354 00054434  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 80057358 00054438  7C 83 00 50 */	subf r4, r3, r0
/* 8005735C 0005443C  3B C4 00 01 */	addi r30, r4, 0x1
/* 80057360 00054440  2C 1E 00 01 */	cmpwi r30, 0x1
/* 80057364 00054444  41 81 00 08 */	bgt .L_8005736C
/* 80057368 00054448  48 00 00 20 */	b .L_80057388
.L_8005736C:
/* 8005736C 0005444C  4B FD 98 FD */	bl xrand__Fv
/* 80057370 00054450  54 64 9B 7E */	srwi r4, r3, 13
/* 80057374 00054454  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 80057378 00054458  7C 64 F3 96 */	divwu r3, r4, r30
/* 8005737C 0005445C  7C 63 F1 D6 */	mullw r3, r3, r30
/* 80057380 00054460  7C 63 20 50 */	subf r3, r3, r4
/* 80057384 00054464  7C 60 1A 14 */	add r3, r0, r3
.L_80057388:
/* 80057388 00054468  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 8005738C 0005446C  28 00 00 00 */	cmplwi r0, 0x0
/* 80057390 00054470  41 82 00 0C */	beq .L_8005739C
/* 80057394 00054474  48 02 94 E5 */	bl zEntPlayer_SNDPlayStream__F20_tagePlayerStreamSnd
/* 80057398 00054478  48 00 00 0C */	b .L_800573A4
.L_8005739C:
/* 8005739C 0005447C  C0 22 89 B8 */	lfs f1, "@1551"@sda21(r2)
/* 800573A0 00054480  48 02 93 F1 */	bl zEntPlayer_SNDPlay__F14_tagePlayerSndf
.L_800573A4:
/* 800573A4 00054484  38 00 00 00 */	li r0, 0x0
/* 800573A8 00054488  90 1F 00 24 */	stw r0, 0x24(r31)
/* 800573AC 0005448C  48 00 00 2C */	b .L_800573D8
.L_800573B0:
/* 800573B0 00054490  C0 1F 00 04 */	lfs f0, 0x4(r31)
/* 800573B4 00054494  38 80 00 80 */	li r4, 0x80
/* 800573B8 00054498  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 800573BC 0005449C  38 A0 00 00 */	li r5, 0x0
/* 800573C0 000544A0  EC 20 00 72 */	fmuls f1, f0, f1
/* 800573C4 000544A4  38 C0 00 00 */	li r6, 0x0
/* 800573C8 000544A8  FC 60 10 90 */	fmr f3, f2
/* 800573CC 000544AC  38 E0 00 00 */	li r7, 0x0
/* 800573D0 000544B0  4B FF 16 5D */	bl xSndPlay__FUiffUiUiUi14sound_categoryf
/* 800573D4 000544B4  90 7F 00 24 */	stw r3, 0x24(r31)
.L_800573D8:
/* 800573D8 000544B8  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 800573DC 000544BC  2C 03 00 00 */	cmpwi r3, 0x0
/* 800573E0 000544C0  41 82 00 08 */	beq .L_800573E8
/* 800573E4 000544C4  48 05 5C 71 */	bl zRumbleStart__F16_tagSDRumbleType
.L_800573E8:
/* 800573E8 000544C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800573EC 000544CC  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 800573F0 000544D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800573F4 000544D4  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 800573F8 000544D8  7C 08 03 A6 */	mtlr r0
/* 800573FC 000544DC  38 21 00 10 */	addi r1, r1, 0x10
/* 80057400 000544E0  4E 80 00 20 */	blr
.endfn "play_sound__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fif"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::play_sound(int, float, const xVec3*)
.fn "play_sound__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FifPC5xVec3", local
/* 80057404 000544E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80057408 000544E8  7C 08 02 A6 */	mflr r0
/* 8005740C 000544EC  1C A3 00 28 */	mulli r5, r3, 0x28
/* 80057410 000544F0  3C 60 80 29 */	lis r3, "sounds__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80057414 000544F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80057418 000544F8  38 03 C4 30 */	addi r0, r3, "sounds__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005741C 000544FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80057420 00054500  7F E0 2A 14 */	add r31, r0, r5
/* 80057424 00054504  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 80057428 00054508  28 03 00 00 */	cmplwi r3, 0x0
/* 8005742C 0005450C  41 82 00 34 */	beq .L_80057460
/* 80057430 00054510  C0 1F 00 04 */	lfs f0, 0x4(r31)
/* 80057434 00054514  7C 86 23 78 */	mr r6, r4
/* 80057438 00054518  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005743C 0005451C  38 80 00 80 */	li r4, 0x80
/* 80057440 00054520  EC 20 00 72 */	fmuls f1, f0, f1
/* 80057444 00054524  C0 7F 00 08 */	lfs f3, 0x8(r31)
/* 80057448 00054528  FC A0 10 90 */	fmr f5, f2
/* 8005744C 0005452C  C0 9F 00 0C */	lfs f4, 0xc(r31)
/* 80057450 00054530  38 A0 08 00 */	li r5, 0x800
/* 80057454 00054534  38 E0 00 00 */	li r7, 0x0
/* 80057458 00054538  4B FF 16 3D */	bl xSndPlay3D__FUiffUiUiPC5xVec3ff14sound_categoryf
/* 8005745C 0005453C  90 7F 00 24 */	stw r3, 0x24(r31)
.L_80057460:
/* 80057460 00054540  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 80057464 00054544  2C 03 00 00 */	cmpwi r3, 0x0
/* 80057468 00054548  41 82 00 08 */	beq .L_80057470
/* 8005746C 0005454C  48 05 5B E9 */	bl zRumbleStart__F16_tagSDRumbleType
.L_80057470:
/* 80057470 00054550  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80057474 00054554  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 80057478 00054558  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005747C 0005455C  7C 08 03 A6 */	mtlr r0
/* 80057480 00054560  38 21 00 10 */	addi r1, r1, 0x10
/* 80057484 00054564  4E 80 00 20 */	blr
.endfn "play_sound__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FifPC5xVec3"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::set_pitch(int, float, unsigned int)
.fn "set_pitch__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FifUi", local
/* 80057488 00054568  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005748C 0005456C  7C 08 02 A6 */	mflr r0
/* 80057490 00054570  1C A3 00 28 */	mulli r5, r3, 0x28
/* 80057494 00054574  3C 60 80 29 */	lis r3, "sounds__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80057498 00054578  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005749C 0005457C  38 03 C4 30 */	addi r0, r3, "sounds__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 800574A0 00054580  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 800574A4 00054584  FF E0 08 90 */	fmr f31, f1
/* 800574A8 00054588  93 E1 00 14 */	stw r31, 0x14(r1)
/* 800574AC 0005458C  7F E0 2A 14 */	add r31, r0, r5
/* 800574B0 00054590  93 C1 00 10 */	stw r30, 0x10(r1)
/* 800574B4 00054594  80 1F 00 20 */	lwz r0, 0x20(r31)
/* 800574B8 00054598  28 00 00 00 */	cmplwi r0, 0x0
/* 800574BC 0005459C  40 82 00 2C */	bne .L_800574E8
/* 800574C0 000545A0  83 DF 00 18 */	lwz r30, 0x18(r31)
/* 800574C4 000545A4  48 00 00 14 */	b .L_800574D8
.L_800574C8:
/* 800574C8 000545A8  FC 20 F8 90 */	fmr f1, f31
/* 800574CC 000545AC  7F C3 F3 78 */	mr r3, r30
/* 800574D0 000545B0  48 02 9D 1D */	bl zEntPlayer_SNDSetPitch__F14_tagePlayerSndf
/* 800574D4 000545B4  3B DE 00 01 */	addi r30, r30, 0x1
.L_800574D8:
/* 800574D8 000545B8  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 800574DC 000545BC  7C 1E 00 00 */	cmpw r30, r0
/* 800574E0 000545C0  40 81 FF E8 */	ble .L_800574C8
/* 800574E4 000545C4  48 00 00 24 */	b .L_80057508
.L_800574E8:
/* 800574E8 000545C8  28 04 00 00 */	cmplwi r4, 0x0
/* 800574EC 000545CC  40 82 00 08 */	bne .L_800574F4
/* 800574F0 000545D0  80 9F 00 24 */	lwz r4, 0x24(r31)
.L_800574F4:
/* 800574F4 000545D4  28 04 00 00 */	cmplwi r4, 0x0
/* 800574F8 000545D8  41 82 00 10 */	beq .L_80057508
/* 800574FC 000545DC  FC 20 F8 90 */	fmr f1, f31
/* 80057500 000545E0  7C 83 23 78 */	mr r3, r4
/* 80057504 000545E4  4B FF 1E C5 */	bl xSndSetPitch__FUif
.L_80057508:
/* 80057508 000545E8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005750C 000545EC  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80057510 000545F0  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 80057514 000545F4  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 80057518 000545F8  7C 08 03 A6 */	mtlr r0
/* 8005751C 000545FC  38 21 00 20 */	addi r1, r1, 0x20
/* 80057520 00054600  4E 80 00 20 */	blr
.endfn "set_pitch__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FifUi"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::show_wand()
.fn "show_wand__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 80057524 00054604  3C 60 80 3C */	lis r3, globals@ha
/* 80057528 00054608  38 63 05 58 */	addi r3, r3, globals@l
/* 8005752C 0005460C  80 63 1F 5C */	lwz r3, 0x1f5c(r3)
/* 80057530 00054610  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 80057534 00054614  60 00 00 01 */	ori r0, r0, 0x1
/* 80057538 00054618  B0 03 00 44 */	sth r0, 0x44(r3)
/* 8005753C 0005461C  4E 80 00 20 */	blr
.endfn "show_wand__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::hide_wand()
.fn "hide_wand__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 80057540 00054620  3C 60 80 3C */	lis r3, globals@ha
/* 80057544 00054624  38 63 05 58 */	addi r3, r3, globals@l
/* 80057548 00054628  80 63 1F 5C */	lwz r3, 0x1f5c(r3)
/* 8005754C 0005462C  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 80057550 00054630  54 00 04 3C */	rlwinm r0, r0, 0, 16, 30
/* 80057554 00054634  B0 03 00 44 */	sth r0, 0x44(r3)
/* 80057558 00054638  4E 80 00 20 */	blr
.endfn "hide_wand__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::show_missle()
.fn "show_missle__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 8005755C 0005463C  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80057560 00054640  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80057564 00054644  80 63 00 68 */	lwz r3, 0x68(r3)
/* 80057568 00054648  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 8005756C 0005464C  60 00 00 03 */	ori r0, r0, 0x3
/* 80057570 00054650  B0 03 00 44 */	sth r0, 0x44(r3)
/* 80057574 00054654  4E 80 00 20 */	blr
.endfn "show_missle__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::hide_missle()
.fn "hide_missle__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 80057578 00054658  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005757C 0005465C  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80057580 00054660  80 63 00 68 */	lwz r3, 0x68(r3)
/* 80057584 00054664  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 80057588 00054668  54 00 04 3A */	rlwinm r0, r0, 0, 16, 29
/* 8005758C 0005466C  B0 03 00 44 */	sth r0, 0x44(r3)
/* 80057590 00054670  4E 80 00 20 */	blr
.endfn "hide_missle__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::capture_camera()
.fn "capture_camera__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 80057594 00054674  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80057598 00054678  7C 08 02 A6 */	mflr r0
/* 8005759C 0005467C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800575A0 00054680  4B FF AB 89 */	bl zCameraDisableInput__Fv
/* 800575A4 00054684  38 60 00 02 */	li r3, 0x2
/* 800575A8 00054688  4B FF AB 59 */	bl zCameraDisableTracking__F17camera_owner_enum
/* 800575AC 0005468C  38 60 00 00 */	li r3, 0x0
/* 800575B0 00054690  38 80 00 01 */	li r4, 0x1
/* 800575B4 00054694  4B FB 5F DD */	bl xCameraDoCollisions__Fii
/* 800575B8 00054698  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800575BC 0005469C  7C 08 03 A6 */	mtlr r0
/* 800575C0 000546A0  38 21 00 10 */	addi r1, r1, 0x10
/* 800575C4 000546A4  4E 80 00 20 */	blr
.endfn "capture_camera__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::release_camera()
.fn "release_camera__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 800575C8 000546A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800575CC 000546AC  7C 08 02 A6 */	mflr r0
/* 800575D0 000546B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800575D4 000546B4  4B FF AB 61 */	bl zCameraEnableInput__Fv
/* 800575D8 000546B8  38 60 00 02 */	li r3, 0x2
/* 800575DC 000546BC  4B FF AB 35 */	bl zCameraEnableTracking__F17camera_owner_enum
/* 800575E0 000546C0  38 60 00 01 */	li r3, 0x1
/* 800575E4 000546C4  38 80 00 01 */	li r4, 0x1
/* 800575E8 000546C8  4B FB 5F A9 */	bl xCameraDoCollisions__Fii
/* 800575EC 000546CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800575F0 000546D0  7C 08 03 A6 */	mtlr r0
/* 800575F4 000546D4  38 21 00 10 */	addi r1, r1, 0x10
/* 800575F8 000546D8  4E 80 00 20 */	blr
.endfn "release_camera__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::camera_taken()
.fn "camera_taken__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 800575FC 000546DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80057600 000546E0  7C 08 02 A6 */	mflr r0
/* 80057604 000546E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80057608 000546E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005760C 000546EC  3B E0 00 00 */	li r31, 0x0
/* 80057610 000546F0  4B FF AB 59 */	bl zCameraGetConvers__Fv
/* 80057614 000546F4  2C 03 00 00 */	cmpwi r3, 0x0
/* 80057618 000546F8  40 82 00 10 */	bne .L_80057628
/* 8005761C 000546FC  4B FF AB 05 */	bl zCameraIsTrackingDisabled__Fv
/* 80057620 00054700  54 60 07 FB */	rlwinm. r0, r3, 0, 31, 29
/* 80057624 00054704  41 82 00 08 */	beq .L_8005762C
.L_80057628:
/* 80057628 00054708  3B E0 00 01 */	li r31, 0x1
.L_8005762C:
/* 8005762C 0005470C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80057630 00054710  7F E3 FB 78 */	mr r3, r31
/* 80057634 00054714  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80057638 00054718  7C 08 03 A6 */	mtlr r0
/* 8005763C 0005471C  38 21 00 10 */	addi r1, r1, 0x10
/* 80057640 00054720  4E 80 00 20 */	blr
.endfn "camera_taken__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::camera_leave()
.fn "camera_leave__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 80057644 00054724  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80057648 00054728  7C 08 02 A6 */	mflr r0
/* 8005764C 0005472C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80057650 00054730  4B FF AB 19 */	bl zCameraGetConvers__Fv
/* 80057654 00054734  7C 03 00 D0 */	neg r0, r3
/* 80057658 00054738  7C 00 1B 78 */	or r0, r0, r3
/* 8005765C 0005473C  54 03 0F FE */	srwi r3, r0, 31
/* 80057660 00054740  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80057664 00054744  7C 08 03 A6 */	mtlr r0
/* 80057668 00054748  38 21 00 10 */	addi r1, r1, 0x10
/* 8005766C 0005474C  4E 80 00 20 */	blr
.endfn "camera_leave__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::start_damaging()
.fn "start_damaging__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 80057670 00054750  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80057674 00054754  38 00 00 00 */	li r0, 0x0
/* 80057678 00054758  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005767C 0005475C  90 03 00 EC */	stw r0, 0xec(r3)
/* 80057680 00054760  4E 80 00 20 */	blr
.endfn "start_damaging__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::damage_entity(xEnt&, const xVec3&, const xVec3&, const xVec3&, float, bool)
.fn "damage_entity__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FR4xEntRC5xVec3RC5xVec3RC5xVec3fb", local
/* 80057684 00054764  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 80057688 00054768  7C 08 02 A6 */	mflr r0
/* 8005768C 0005476C  3D 00 80 29 */	lis r8, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80057690 00054770  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 80057694 00054774  39 08 C2 A4 */	addi r8, r8, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80057698 00054778  DB E1 00 B8 */	stfd f31, 0xb8(r1)
/* 8005769C 0005477C  FF E0 08 90 */	fmr f31, f1
/* 800576A0 00054780  93 E1 00 B4 */	stw r31, 0xb4(r1)
/* 800576A4 00054784  7C BF 2B 78 */	mr r31, r5
/* 800576A8 00054788  93 C1 00 B0 */	stw r30, 0xb0(r1)
/* 800576AC 0005478C  7C 9E 23 78 */	mr r30, r4
/* 800576B0 00054790  93 A1 00 AC */	stw r29, 0xac(r1)
/* 800576B4 00054794  7C 7D 1B 78 */	mr r29, r3
/* 800576B8 00054798  80 08 00 EC */	lwz r0, 0xec(r8)
/* 800576BC 0005479C  2C 00 00 20 */	cmpwi r0, 0x20
/* 800576C0 000547A0  40 80 02 08 */	bge .L_800578C8
/* 800576C4 000547A4  54 00 10 3A */	slwi r0, r0, 2
/* 800576C8 000547A8  7C 88 02 14 */	add r4, r8, r0
/* 800576CC 000547AC  93 A4 00 6C */	stw r29, 0x6c(r4)
/* 800576D0 000547B0  80 88 00 EC */	lwz r4, 0xec(r8)
/* 800576D4 000547B4  38 04 00 01 */	addi r0, r4, 0x1
/* 800576D8 000547B8  90 08 00 EC */	stw r0, 0xec(r8)
/* 800576DC 000547BC  88 1D 00 04 */	lbz r0, 0x4(r29)
/* 800576E0 000547C0  2C 00 00 1B */	cmpwi r0, 0x1b
/* 800576E4 000547C4  41 82 00 38 */	beq .L_8005771C
/* 800576E8 000547C8  40 80 00 1C */	bge .L_80057704
/* 800576EC 000547CC  2C 00 00 18 */	cmpwi r0, 0x18
/* 800576F0 000547D0  41 82 00 20 */	beq .L_80057710
/* 800576F4 000547D4  40 80 01 C8 */	bge .L_800578BC
/* 800576F8 000547D8  2C 00 00 06 */	cmpwi r0, 0x6
/* 800576FC 000547DC  41 82 00 2C */	beq .L_80057728
/* 80057700 000547E0  48 00 01 BC */	b .L_800578BC
.L_80057704:
/* 80057704 000547E4  2C 00 00 2B */	cmpwi r0, 0x2b
/* 80057708 000547E8  41 82 01 28 */	beq .L_80057830
/* 8005770C 000547EC  48 00 01 B0 */	b .L_800578BC
.L_80057710:
/* 80057710 000547F0  38 80 00 10 */	li r4, 0x10
/* 80057714 000547F4  4B FF F6 3D */	bl zEntButton_Press__FP11_zEntButtonUi
/* 80057718 000547F8  48 00 01 B0 */	b .L_800578C8
.L_8005771C:
/* 8005771C 000547FC  3C 80 00 01 */	lis r4, 0x1
/* 80057720 00054800  48 00 98 95 */	bl zEntDestructObj_Hit__FP15zEntDestructObjUi
/* 80057724 00054804  48 00 01 A4 */	b .L_800578C8
.L_80057728:
/* 80057728 00054808  88 1D 00 1A */	lbz r0, 0x1a(r29)
/* 8005772C 0005480C  2C 00 00 0C */	cmpwi r0, 0xc
/* 80057730 00054810  41 82 00 08 */	beq .L_80057738
/* 80057734 00054814  48 00 01 88 */	b .L_800578BC
.L_80057738:
/* 80057738 00054818  80 7D 00 D4 */	lwz r3, 0xd4(r29)
/* 8005773C 0005481C  80 03 00 28 */	lwz r0, 0x28(r3)
/* 80057740 00054820  54 00 06 B5 */	rlwinm. r0, r0, 0, 26, 26
/* 80057744 00054824  41 82 01 84 */	beq .L_800578C8
/* 80057748 00054828  93 A1 00 5C */	stw r29, 0x5c(r1)
/* 8005774C 0005482C  80 7D 00 28 */	lwz r3, 0x28(r29)
/* 80057750 00054830  28 03 00 00 */	cmplwi r3, 0x0
/* 80057754 00054834  41 82 00 08 */	beq .L_8005775C
/* 80057758 00054838  48 00 00 08 */	b .L_80057760
.L_8005775C:
/* 8005775C 0005483C  80 7D 00 24 */	lwz r3, 0x24(r29)
.L_80057760:
/* 80057760 00054840  54 E0 06 3F */	clrlwi. r0, r7, 24
/* 80057764 00054844  90 61 00 60 */	stw r3, 0x60(r1)
/* 80057768 00054848  41 82 00 9C */	beq .L_80057804
/* 8005776C 0005484C  38 00 06 00 */	li r0, 0x600
/* 80057770 00054850  7F C4 F3 78 */	mr r4, r30
/* 80057774 00054854  90 01 00 54 */	stw r0, 0x54(r1)
/* 80057778 00054858  38 61 00 44 */	addi r3, r1, 0x44
/* 8005777C 0005485C  4B FB 3A E9 */	bl __as__5xVec3FRC5xVec3
/* 80057780 00054860  D3 E1 00 50 */	stfs f31, 0x50(r1)
/* 80057784 00054864  38 61 00 44 */	addi r3, r1, 0x44
/* 80057788 00054868  38 9D 00 64 */	addi r4, r29, 0x64
/* 8005778C 0005486C  38 A1 00 54 */	addi r5, r1, 0x54
/* 80057790 00054870  4B FB 36 15 */	bl xSphereHitsBound__FPC7xSpherePC6xBoundP7xCollis
/* 80057794 00054874  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80057798 00054878  54 00 07 FF */	clrlwi. r0, r0, 31
/* 8005779C 0005487C  41 82 01 2C */	beq .L_800578C8
/* 800577A0 00054880  88 1D 00 21 */	lbz r0, 0x21(r29)
/* 800577A4 00054884  28 00 00 05 */	cmplwi r0, 0x5
/* 800577A8 00054888  40 82 00 20 */	bne .L_800577C8
/* 800577AC 0005488C  80 81 00 60 */	lwz r4, 0x60(r1)
/* 800577B0 00054890  38 61 00 44 */	addi r3, r1, 0x44
/* 800577B4 00054894  38 A1 00 54 */	addi r5, r1, 0x54
/* 800577B8 00054898  4B FB 80 AD */	bl xSphereHitsModel__FPC7xSpherePC14xModelInstanceP7xCollis
/* 800577BC 0005489C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 800577C0 000548A0  54 00 07 FF */	clrlwi. r0, r0, 31
/* 800577C4 000548A4  41 82 01 04 */	beq .L_800578C8
.L_800577C8:
/* 800577C8 000548A8  38 61 00 20 */	addi r3, r1, 0x20
/* 800577CC 000548AC  38 81 00 74 */	addi r4, r1, 0x74
/* 800577D0 000548B0  48 00 86 C1 */	bl up_normal__5xVec3CFv
/* 800577D4 000548B4  80 C1 00 20 */	lwz r6, 0x20(r1)
/* 800577D8 000548B8  7F C4 F3 78 */	mr r4, r30
/* 800577DC 000548BC  80 E1 00 24 */	lwz r7, 0x24(r1)
/* 800577E0 000548C0  38 61 00 54 */	addi r3, r1, 0x54
/* 800577E4 000548C4  80 01 00 28 */	lwz r0, 0x28(r1)
/* 800577E8 000548C8  38 A1 00 38 */	addi r5, r1, 0x38
/* 800577EC 000548CC  90 C1 00 38 */	stw r6, 0x38(r1)
/* 800577F0 000548D0  38 C0 00 01 */	li r6, 0x1
/* 800577F4 000548D4  90 E1 00 3C */	stw r7, 0x3c(r1)
/* 800577F8 000548D8  90 01 00 40 */	stw r0, 0x40(r1)
/* 800577FC 000548DC  48 05 24 6D */	bl zPlatform_PaddleCollide__FP7xCollisPC5xVec3PC5xVec3Ui
/* 80057800 000548E0  48 00 00 C8 */	b .L_800578C8
.L_80057804:
/* 80057804 000548E4  38 00 02 01 */	li r0, 0x201
/* 80057808 000548E8  7C C4 33 78 */	mr r4, r6
/* 8005780C 000548EC  90 01 00 54 */	stw r0, 0x54(r1)
/* 80057810 000548F0  38 61 00 68 */	addi r3, r1, 0x68
/* 80057814 000548F4  4B FB 3A 51 */	bl __as__5xVec3FRC5xVec3
/* 80057818 000548F8  7F C4 F3 78 */	mr r4, r30
/* 8005781C 000548FC  7F E5 FB 78 */	mr r5, r31
/* 80057820 00054900  38 61 00 54 */	addi r3, r1, 0x54
/* 80057824 00054904  38 C0 00 01 */	li r6, 0x1
/* 80057828 00054908  48 05 24 41 */	bl zPlatform_PaddleCollide__FP7xCollisPC5xVec3PC5xVec3Ui
/* 8005782C 0005490C  48 00 00 9C */	b .L_800578C8
.L_80057830:
/* 80057830 00054910  54 E0 06 3F */	clrlwi. r0, r7, 24
/* 80057834 00054914  41 82 00 64 */	beq .L_80057898
/* 80057838 00054918  4B FC 3F F9 */	bl xEntGetCenter__FPC4xEnt
/* 8005783C 0005491C  7C 64 1B 78 */	mr r4, r3
/* 80057840 00054920  7F C5 F3 78 */	mr r5, r30
/* 80057844 00054924  38 61 00 08 */	addi r3, r1, 0x8
/* 80057848 00054928  4B FB 39 85 */	bl __mi__5xVec3CFRC5xVec3
/* 8005784C 0005492C  38 61 00 14 */	addi r3, r1, 0x14
/* 80057850 00054930  38 81 00 08 */	addi r4, r1, 0x8
/* 80057854 00054934  48 00 86 3D */	bl up_normal__5xVec3CFv
/* 80057858 00054938  81 9D 01 B8 */	lwz r12, 0x1b8(r29)
/* 8005785C 0005493C  3C 80 80 29 */	lis r4, "base__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80057860 00054940  81 01 00 14 */	lwz r8, 0x14(r1)
/* 80057864 00054944  38 A4 C2 00 */	addi r5, r4, "base__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80057868 00054948  80 E1 00 18 */	lwz r7, 0x18(r1)
/* 8005786C 0005494C  7F A3 EB 78 */	mr r3, r29
/* 80057870 00054950  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80057874 00054954  38 C1 00 2C */	addi r6, r1, 0x2c
/* 80057878 00054958  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 8005787C 0005495C  38 80 00 09 */	li r4, 0x9
/* 80057880 00054960  91 01 00 2C */	stw r8, 0x2c(r1)
/* 80057884 00054964  90 E1 00 30 */	stw r7, 0x30(r1)
/* 80057888 00054968  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005788C 0005496C  7D 89 03 A6 */	mtctr r12
/* 80057890 00054970  4E 80 04 21 */	bctrl
/* 80057894 00054974  48 00 00 34 */	b .L_800578C8
.L_80057898:
/* 80057898 00054978  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 8005789C 0005497C  3C 80 80 29 */	lis r4, "base__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 800578A0 00054980  38 A4 C2 00 */	addi r5, r4, "base__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 800578A4 00054984  7F E6 FB 78 */	mr r6, r31
/* 800578A8 00054988  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 800578AC 0005498C  38 80 00 09 */	li r4, 0x9
/* 800578B0 00054990  7D 89 03 A6 */	mtctr r12
/* 800578B4 00054994  4E 80 04 21 */	bctrl
/* 800578B8 00054998  48 00 00 10 */	b .L_800578C8
.L_800578BC:
/* 800578BC 0005499C  7F A3 EB 78 */	mr r3, r29
/* 800578C0 000549A0  38 80 01 C7 */	li r4, 0x1c7
/* 800578C4 000549A4  4B FC 7D 2D */	bl zEntEvent__FP5xBaseUi
.L_800578C8:
/* 800578C8 000549A8  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 800578CC 000549AC  CB E1 00 B8 */	lfd f31, 0xb8(r1)
/* 800578D0 000549B0  83 E1 00 B4 */	lwz r31, 0xb4(r1)
/* 800578D4 000549B4  83 C1 00 B0 */	lwz r30, 0xb0(r1)
/* 800578D8 000549B8  83 A1 00 AC */	lwz r29, 0xac(r1)
/* 800578DC 000549BC  7C 08 03 A6 */	mtlr r0
/* 800578E0 000549C0  38 21 00 C0 */	addi r1, r1, 0xc0
/* 800578E4 000549C4  4E 80 00 20 */	blr
.endfn "damage_entity__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FR4xEntRC5xVec3RC5xVec3RC5xVec3fb"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::can_damage(xEnt*)
.fn "can_damage__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FP4xEnt", local
/* 800578E8 000549C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800578EC 000549CC  7C 08 02 A6 */	mflr r0
/* 800578F0 000549D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800578F4 000549D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800578F8 000549D8  7C 7F 1B 79 */	mr. r31, r3
/* 800578FC 000549DC  40 82 00 0C */	bne .L_80057908
/* 80057900 000549E0  38 60 00 00 */	li r3, 0x0
/* 80057904 000549E4  48 00 00 6C */	b .L_80057970
.L_80057908:
/* 80057908 000549E8  88 1F 00 1C */	lbz r0, 0x1c(r31)
/* 8005790C 000549EC  54 00 06 F7 */	rlwinm. r0, r0, 0, 27, 27
/* 80057910 000549F0  40 82 00 0C */	bne .L_8005791C
/* 80057914 000549F4  38 60 00 00 */	li r3, 0x0
/* 80057918 000549F8  48 00 00 58 */	b .L_80057970
.L_8005791C:
/* 8005791C 000549FC  88 1F 00 04 */	lbz r0, 0x4(r31)
/* 80057920 00054A00  28 00 00 1B */	cmplwi r0, 0x1b
/* 80057924 00054A04  40 82 00 18 */	bne .L_8005793C
/* 80057928 00054A08  48 00 98 D5 */	bl zEntDestructObj_isDestroyed__FP15zEntDestructObj
/* 8005792C 00054A0C  28 03 00 00 */	cmplwi r3, 0x0
/* 80057930 00054A10  41 82 00 0C */	beq .L_8005793C
/* 80057934 00054A14  38 60 00 00 */	li r3, 0x0
/* 80057938 00054A18  48 00 00 38 */	b .L_80057970
.L_8005793C:
/* 8005793C 00054A1C  88 1F 00 04 */	lbz r0, 0x4(r31)
/* 80057940 00054A20  28 00 00 2B */	cmplwi r0, 0x2b
/* 80057944 00054A24  40 82 00 28 */	bne .L_8005796C
/* 80057948 00054A28  7F E3 FB 78 */	mr r3, r31
/* 8005794C 00054A2C  81 9F 01 B8 */	lwz r12, 0x1b8(r31)
/* 80057950 00054A30  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 80057954 00054A34  7D 89 03 A6 */	mtctr r12
/* 80057958 00054A38  4E 80 04 21 */	bctrl
/* 8005795C 00054A3C  2C 03 00 00 */	cmpwi r3, 0x0
/* 80057960 00054A40  40 82 00 0C */	bne .L_8005796C
/* 80057964 00054A44  38 60 00 00 */	li r3, 0x0
/* 80057968 00054A48  48 00 00 08 */	b .L_80057970
.L_8005796C:
/* 8005796C 00054A4C  38 60 00 01 */	li r3, 0x1
.L_80057970:
/* 80057970 00054A50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80057974 00054A54  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80057978 00054A58  7C 08 03 A6 */	mtlr r0
/* 8005797C 00054A5C  38 21 00 10 */	addi r1, r1, 0x10
/* 80057980 00054A60  4E 80 00 20 */	blr
.endfn "can_damage__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FP4xEnt"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::was_damaged(xEnt*)
.fn "was_damaged__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FP4xEnt", local
/* 80057984 00054A64  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80057988 00054A68  38 84 C2 A4 */	addi r4, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005798C 00054A6C  80 04 00 EC */	lwz r0, 0xec(r4)
/* 80057990 00054A70  38 84 00 6C */	addi r4, r4, 0x6c
/* 80057994 00054A74  54 00 10 3A */	slwi r0, r0, 2
/* 80057998 00054A78  7C A4 02 14 */	add r5, r4, r0
/* 8005799C 00054A7C  48 00 00 1C */	b .L_800579B8
.L_800579A0:
/* 800579A0 00054A80  80 04 00 00 */	lwz r0, 0x0(r4)
/* 800579A4 00054A84  7C 03 00 40 */	cmplw r3, r0
/* 800579A8 00054A88  40 82 00 0C */	bne .L_800579B4
/* 800579AC 00054A8C  38 60 00 01 */	li r3, 0x1
/* 800579B0 00054A90  4E 80 00 20 */	blr
.L_800579B4:
/* 800579B4 00054A94  38 84 00 04 */	addi r4, r4, 0x4
.L_800579B8:
/* 800579B8 00054A98  7C 04 28 40 */	cmplw r4, r5
/* 800579BC 00054A9C  40 82 FF E4 */	bne .L_800579A0
/* 800579C0 00054AA0  38 60 00 00 */	li r3, 0x0
/* 800579C4 00054AA4  4E 80 00 20 */	blr
.endfn "was_damaged__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FP4xEnt"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::notify_triggers(xScene&, const xSphere&, const xVec3&)
.fn "notify_triggers__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FR6xSceneRC7xSphereRC5xVec3", local
/* 800579C8 00054AA8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 800579CC 00054AAC  7C 08 02 A6 */	mflr r0
/* 800579D0 00054AB0  90 01 00 34 */	stw r0, 0x34(r1)
/* 800579D4 00054AB4  BF 21 00 14 */	stmw r25, 0x14(r1)
/* 800579D8 00054AB8  7C 99 23 78 */	mr r25, r4
/* 800579DC 00054ABC  7C BA 2B 78 */	mr r26, r5
/* 800579E0 00054AC0  A0 03 00 08 */	lhz r0, 0x8(r3)
/* 800579E4 00054AC4  83 A3 00 2C */	lwz r29, 0x2c(r3)
/* 800579E8 00054AC8  54 00 10 3A */	slwi r0, r0, 2
/* 800579EC 00054ACC  7F 9D 02 14 */	add r28, r29, r0
/* 800579F0 00054AD0  48 00 01 24 */	b .L_80057B14
.L_800579F4:
/* 800579F4 00054AD4  83 7D 00 00 */	lwz r27, 0x0(r29)
/* 800579F8 00054AD8  7F 63 DB 78 */	mr r3, r27
/* 800579FC 00054ADC  4B FB 1B 3D */	bl xBaseIsEnabled__FPC5xBase
/* 80057A00 00054AE0  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80057A04 00054AE4  41 82 01 0C */	beq .L_80057B10
/* 80057A08 00054AE8  7F 63 DB 78 */	mr r3, r27
/* 80057A0C 00054AEC  48 00 86 25 */	bl zEntTriggerAsset__FRC11zEntTrigger
/* 80057A10 00054AF0  88 1B 00 05 */	lbz r0, 0x5(r27)
/* 80057A14 00054AF4  38 60 00 00 */	li r3, 0x0
/* 80057A18 00054AF8  80 BB 00 08 */	lwz r5, 0x8(r27)
/* 80057A1C 00054AFC  38 80 00 00 */	li r4, 0x0
/* 80057A20 00054B00  54 00 28 34 */	slwi r0, r0, 5
/* 80057A24 00054B04  7C C5 02 14 */	add r6, r5, r0
/* 80057A28 00054B08  48 00 00 28 */	b .L_80057A50
.L_80057A2C:
/* 80057A2C 00054B0C  A0 05 00 00 */	lhz r0, 0x0(r5)
/* 80057A30 00054B10  28 00 02 01 */	cmplwi r0, 0x201
/* 80057A34 00054B14  40 82 00 0C */	bne .L_80057A40
/* 80057A38 00054B18  38 60 00 01 */	li r3, 0x1
/* 80057A3C 00054B1C  48 00 00 10 */	b .L_80057A4C
.L_80057A40:
/* 80057A40 00054B20  28 00 02 02 */	cmplwi r0, 0x202
/* 80057A44 00054B24  40 82 00 08 */	bne .L_80057A4C
/* 80057A48 00054B28  38 80 00 01 */	li r4, 0x1
.L_80057A4C:
/* 80057A4C 00054B2C  38 A5 00 20 */	addi r5, r5, 0x20
.L_80057A50:
/* 80057A50 00054B30  7C 05 30 40 */	cmplw r5, r6
/* 80057A54 00054B34  40 82 FF D8 */	bne .L_80057A2C
/* 80057A58 00054B38  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80057A5C 00054B3C  3B E0 00 00 */	li r31, 0x0
/* 80057A60 00054B40  41 82 00 14 */	beq .L_80057A74
/* 80057A64 00054B44  80 1B 01 2C */	lwz r0, 0x12c(r27)
/* 80057A68 00054B48  54 00 07 BD */	rlwinm. r0, r0, 0, 30, 30
/* 80057A6C 00054B4C  40 82 00 08 */	bne .L_80057A74
/* 80057A70 00054B50  3B E0 00 01 */	li r31, 0x1
.L_80057A74:
/* 80057A74 00054B54  54 80 06 3F */	clrlwi. r0, r4, 24
/* 80057A78 00054B58  3B C0 00 00 */	li r30, 0x0
/* 80057A7C 00054B5C  41 82 00 14 */	beq .L_80057A90
/* 80057A80 00054B60  80 1B 01 2C */	lwz r0, 0x12c(r27)
/* 80057A84 00054B64  54 00 07 BD */	rlwinm. r0, r0, 0, 30, 30
/* 80057A88 00054B68  41 82 00 08 */	beq .L_80057A90
/* 80057A8C 00054B6C  3B C0 00 01 */	li r30, 0x1
.L_80057A90:
/* 80057A90 00054B70  57 E0 06 3F */	clrlwi. r0, r31, 24
/* 80057A94 00054B74  40 82 00 0C */	bne .L_80057AA0
/* 80057A98 00054B78  57 C0 06 3F */	clrlwi. r0, r30, 24
/* 80057A9C 00054B7C  41 82 00 74 */	beq .L_80057B10
.L_80057AA0:
/* 80057AA0 00054B80  7F 63 DB 78 */	mr r3, r27
/* 80057AA4 00054B84  7F 24 CB 78 */	mr r4, r25
/* 80057AA8 00054B88  7F 45 D3 78 */	mr r5, r26
/* 80057AAC 00054B8C  48 03 AA C5 */	bl zEntTriggerHitsSphere__FRC11zEntTriggerRC7xSphereRC5xVec3
/* 80057AB0 00054B90  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80057AB4 00054B94  41 82 00 14 */	beq .L_80057AC8
/* 80057AB8 00054B98  80 1B 01 2C */	lwz r0, 0x12c(r27)
/* 80057ABC 00054B9C  60 00 00 02 */	ori r0, r0, 0x2
/* 80057AC0 00054BA0  90 1B 01 2C */	stw r0, 0x12c(r27)
/* 80057AC4 00054BA4  48 00 00 10 */	b .L_80057AD4
.L_80057AC8:
/* 80057AC8 00054BA8  80 1B 01 2C */	lwz r0, 0x12c(r27)
/* 80057ACC 00054BAC  54 00 07 FA */	rlwinm r0, r0, 0, 31, 29
/* 80057AD0 00054BB0  90 1B 01 2C */	stw r0, 0x12c(r27)
.L_80057AD4:
/* 80057AD4 00054BB4  57 E0 06 3F */	clrlwi. r0, r31, 24
/* 80057AD8 00054BB8  41 82 00 1C */	beq .L_80057AF4
/* 80057ADC 00054BBC  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80057AE0 00054BC0  41 82 00 14 */	beq .L_80057AF4
/* 80057AE4 00054BC4  7F 63 DB 78 */	mr r3, r27
/* 80057AE8 00054BC8  38 80 02 01 */	li r4, 0x201
/* 80057AEC 00054BCC  4B FC 7B 05 */	bl zEntEvent__FP5xBaseUi
/* 80057AF0 00054BD0  48 00 00 20 */	b .L_80057B10
.L_80057AF4:
/* 80057AF4 00054BD4  57 C0 06 3F */	clrlwi. r0, r30, 24
/* 80057AF8 00054BD8  41 82 00 18 */	beq .L_80057B10
/* 80057AFC 00054BDC  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80057B00 00054BE0  40 82 00 10 */	bne .L_80057B10
/* 80057B04 00054BE4  7F 63 DB 78 */	mr r3, r27
/* 80057B08 00054BE8  38 80 02 02 */	li r4, 0x202
/* 80057B0C 00054BEC  4B FC 7A E5 */	bl zEntEvent__FP5xBaseUi
.L_80057B10:
/* 80057B10 00054BF0  3B BD 00 04 */	addi r29, r29, 0x4
.L_80057B14:
/* 80057B14 00054BF4  7C 1D E0 40 */	cmplw r29, r28
/* 80057B18 00054BF8  40 82 FE DC */	bne .L_800579F4
/* 80057B1C 00054BFC  BB 21 00 14 */	lmw r25, 0x14(r1)
/* 80057B20 00054C00  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80057B24 00054C04  7C 08 03 A6 */	mtlr r0
/* 80057B28 00054C08  38 21 00 30 */	addi r1, r1, 0x30
/* 80057B2C 00054C0C  4E 80 00 20 */	blr
.endfn "notify_triggers__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FR6xSceneRC7xSphereRC5xVec3"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::exit_triggers(xScene&)
.fn "exit_triggers__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FR6xScene", local
/* 80057B30 00054C10  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80057B34 00054C14  7C 08 02 A6 */	mflr r0
/* 80057B38 00054C18  90 01 00 24 */	stw r0, 0x24(r1)
/* 80057B3C 00054C1C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80057B40 00054C20  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80057B44 00054C24  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80057B48 00054C28  A0 03 00 08 */	lhz r0, 0x8(r3)
/* 80057B4C 00054C2C  83 E3 00 2C */	lwz r31, 0x2c(r3)
/* 80057B50 00054C30  54 00 10 3A */	slwi r0, r0, 2
/* 80057B54 00054C34  7F DF 02 14 */	add r30, r31, r0
/* 80057B58 00054C38  48 00 00 74 */	b .L_80057BCC
.L_80057B5C:
/* 80057B5C 00054C3C  83 BF 00 00 */	lwz r29, 0x0(r31)
/* 80057B60 00054C40  7F A3 EB 78 */	mr r3, r29
/* 80057B64 00054C44  4B FB 19 D5 */	bl xBaseIsEnabled__FPC5xBase
/* 80057B68 00054C48  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80057B6C 00054C4C  41 82 00 5C */	beq .L_80057BC8
/* 80057B70 00054C50  7F A3 EB 78 */	mr r3, r29
/* 80057B74 00054C54  48 00 84 BD */	bl zEntTriggerAsset__FRC11zEntTrigger
/* 80057B78 00054C58  80 7D 01 2C */	lwz r3, 0x12c(r29)
/* 80057B7C 00054C5C  54 60 07 BD */	rlwinm. r0, r3, 0, 30, 30
/* 80057B80 00054C60  41 82 00 48 */	beq .L_80057BC8
/* 80057B84 00054C64  54 60 07 FA */	rlwinm r0, r3, 0, 31, 29
/* 80057B88 00054C68  90 1D 01 2C */	stw r0, 0x12c(r29)
/* 80057B8C 00054C6C  88 1D 00 05 */	lbz r0, 0x5(r29)
/* 80057B90 00054C70  80 7D 00 08 */	lwz r3, 0x8(r29)
/* 80057B94 00054C74  54 00 28 34 */	slwi r0, r0, 5
/* 80057B98 00054C78  7C 83 02 14 */	add r4, r3, r0
/* 80057B9C 00054C7C  48 00 00 24 */	b .L_80057BC0
.L_80057BA0:
/* 80057BA0 00054C80  A0 03 00 00 */	lhz r0, 0x0(r3)
/* 80057BA4 00054C84  28 00 02 02 */	cmplwi r0, 0x202
/* 80057BA8 00054C88  40 82 00 14 */	bne .L_80057BBC
/* 80057BAC 00054C8C  7F A3 EB 78 */	mr r3, r29
/* 80057BB0 00054C90  38 80 02 02 */	li r4, 0x202
/* 80057BB4 00054C94  4B FC 7A 3D */	bl zEntEvent__FP5xBaseUi
/* 80057BB8 00054C98  48 00 00 10 */	b .L_80057BC8
.L_80057BBC:
/* 80057BBC 00054C9C  38 63 00 20 */	addi r3, r3, 0x20
.L_80057BC0:
/* 80057BC0 00054CA0  7C 03 20 40 */	cmplw r3, r4
/* 80057BC4 00054CA4  40 82 FF DC */	bne .L_80057BA0
.L_80057BC8:
/* 80057BC8 00054CA8  3B FF 00 04 */	addi r31, r31, 0x4
.L_80057BCC:
/* 80057BCC 00054CAC  7C 1F F0 40 */	cmplw r31, r30
/* 80057BD0 00054CB0  40 82 FF 8C */	bne .L_80057B5C
/* 80057BD4 00054CB4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80057BD8 00054CB8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80057BDC 00054CBC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80057BE0 00054CC0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80057BE4 00054CC4  7C 08 03 A6 */	mtlr r0
/* 80057BE8 00054CC8  38 21 00 20 */	addi r1, r1, 0x20
/* 80057BEC 00054CCC  4E 80 00 20 */	blr
.endfn "exit_triggers__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FR6xScene"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::signal_event(unsigned int)
.fn "signal_event__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FUi", local
/* 80057BF0 00054CD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80057BF4 00054CD4  7C 08 02 A6 */	mflr r0
/* 80057BF8 00054CD8  3C 80 80 3C */	lis r4, globals@ha
/* 80057BFC 00054CDC  7C 65 1B 78 */	mr r5, r3
/* 80057C00 00054CE0  38 84 05 58 */	addi r4, r4, globals@l
/* 80057C04 00054CE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80057C08 00054CE8  38 84 06 E0 */	addi r4, r4, 0x6e0
/* 80057C0C 00054CEC  7C 83 23 78 */	mr r3, r4
/* 80057C10 00054CF0  4B FC 7A D1 */	bl zEntEvent__FP5xBaseP5xBaseUi
/* 80057C14 00054CF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80057C18 00054CF8  7C 08 03 A6 */	mtlr r0
/* 80057C1C 00054CFC  38 21 00 10 */	addi r1, r1, 0x10
/* 80057C20 00054D00  4E 80 00 20 */	blr
.endfn "signal_event__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FUi"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::refresh_trail(xMat4x3&, xQuat&)
.fn "refresh_trail__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FR7xMat4x3R5xQuat", local
/* 80057C24 00054D04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80057C28 00054D08  7C 08 02 A6 */	mflr r0
/* 80057C2C 00054D0C  3C A0 80 29 */	lis r5, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80057C30 00054D10  90 01 00 14 */	stw r0, 0x14(r1)
/* 80057C34 00054D14  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80057C38 00054D18  7C 9F 23 78 */	mr r31, r4
/* 80057C3C 00054D1C  38 85 C2 A4 */	addi r4, r5, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80057C40 00054D20  38 A0 00 08 */	li r5, 0x8
/* 80057C44 00054D24  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80057C48 00054D28  7C 7E 1B 78 */	mr r30, r3
/* 80057C4C 00054D2C  80 84 00 68 */	lwz r4, 0x68(r4)
/* 80057C50 00054D30  4B FD D3 A5 */	bl xModelGetBoneMat__FR7xMat4x3RC14xModelInstanceUl
/* 80057C54 00054D34  7F E3 FB 78 */	mr r3, r31
/* 80057C58 00054D38  7F C4 F3 78 */	mr r4, r30
/* 80057C5C 00054D3C  4B FD B0 29 */	bl xQuatFromMat__FP5xQuatPC7xMat3x3
/* 80057C60 00054D40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80057C64 00054D44  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80057C68 00054D48  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80057C6C 00054D4C  7C 08 03 A6 */	mtlr r0
/* 80057C70 00054D50  38 21 00 10 */	addi r1, r1, 0x10
/* 80057C74 00054D54  4E 80 00 20 */	blr
.endfn "refresh_trail__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FR7xMat4x3R5xQuat"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::start_trail()
.fn "start_trail__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 80057C78 00054D58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80057C7C 00054D5C  7C 08 02 A6 */	mflr r0
/* 80057C80 00054D60  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80057C84 00054D64  90 01 00 14 */	stw r0, 0x14(r1)
/* 80057C88 00054D68  38 A3 C2 A4 */	addi r5, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80057C8C 00054D6C  80 65 00 00 */	lwz r3, 0x0(r5)
/* 80057C90 00054D70  54 60 06 31 */	rlwinm. r0, r3, 0, 24, 24
/* 80057C94 00054D74  40 82 00 24 */	bne .L_80057CB8
/* 80057C98 00054D78  60 60 01 80 */	ori r0, r3, 0x180
/* 80057C9C 00054D7C  38 65 01 14 */	addi r3, r5, 0x114
/* 80057CA0 00054D80  90 05 00 00 */	stw r0, 0x0(r5)
/* 80057CA4 00054D84  38 85 01 54 */	addi r4, r5, 0x154
/* 80057CA8 00054D88  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 80057CAC 00054D8C  D0 05 01 10 */	stfs f0, 0x110(r5)
/* 80057CB0 00054D90  D0 05 01 0C */	stfs f0, 0x10c(r5)
/* 80057CB4 00054D94  4B FF FF 71 */	bl "refresh_trail__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FR7xMat4x3R5xQuat"
.L_80057CB8:
/* 80057CB8 00054D98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80057CBC 00054D9C  7C 08 03 A6 */	mtlr r0
/* 80057CC0 00054DA0  38 21 00 10 */	addi r1, r1, 0x10
/* 80057CC4 00054DA4  4E 80 00 20 */	blr
.endfn "start_trail__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::stop_trail()
.fn "stop_trail__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 80057CC8 00054DA8  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80057CCC 00054DAC  84 03 C2 A4 */	lwzu r0, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l(r3)
/* 80057CD0 00054DB0  54 00 06 6E */	rlwinm r0, r0, 0, 25, 23
/* 80057CD4 00054DB4  90 03 00 00 */	stw r0, 0x0(r3)
/* 80057CD8 00054DB8  4E 80 00 20 */	blr
.endfn "stop_trail__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::set_state(cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::thread_enum, cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_enum)
.fn "set_state__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@11thread_enumQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_enum", local
/* 80057CDC 00054DBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80057CE0 00054DC0  7C 08 02 A6 */	mflr r0
/* 80057CE4 00054DC4  3C A0 80 29 */	lis r5, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80057CE8 00054DC8  54 63 10 3A */	slwi r3, r3, 2
/* 80057CEC 00054DCC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80057CF0 00054DD0  38 05 C2 A4 */	addi r0, r5, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80057CF4 00054DD4  7C 60 1A 14 */	add r3, r0, r3
/* 80057CF8 00054DD8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80057CFC 00054DDC  3B E3 00 04 */	addi r31, r3, 0x4
/* 80057D00 00054DE0  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80057D04 00054DE4  7C 9E 23 78 */	mr r30, r4
/* 80057D08 00054DE8  80 63 00 04 */	lwz r3, 0x4(r3)
/* 80057D0C 00054DEC  28 03 00 00 */	cmplwi r3, 0x0
/* 80057D10 00054DF0  41 82 00 1C */	beq .L_80057D2C
/* 80057D14 00054DF4  81 83 00 04 */	lwz r12, 0x4(r3)
/* 80057D18 00054DF8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80057D1C 00054DFC  7D 89 03 A6 */	mtctr r12
/* 80057D20 00054E00  4E 80 04 21 */	bctrl
/* 80057D24 00054E04  38 00 00 00 */	li r0, 0x0
/* 80057D28 00054E08  90 1F 00 00 */	stw r0, 0x0(r31)
.L_80057D2C:
/* 80057D2C 00054E0C  2C 1E FF FF */	cmpwi r30, -0x1
/* 80057D30 00054E10  41 82 00 30 */	beq .L_80057D60
/* 80057D34 00054E14  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80057D38 00054E18  57 C0 10 3A */	slwi r0, r30, 2
/* 80057D3C 00054E1C  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80057D40 00054E20  7C 63 02 14 */	add r3, r3, r0
/* 80057D44 00054E24  80 03 00 10 */	lwz r0, 0x10(r3)
/* 80057D48 00054E28  90 1F 00 00 */	stw r0, 0x0(r31)
/* 80057D4C 00054E2C  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 80057D50 00054E30  81 83 00 04 */	lwz r12, 0x4(r3)
/* 80057D54 00054E34  81 8C 00 08 */	lwz r12, 0x8(r12)
/* 80057D58 00054E38  7D 89 03 A6 */	mtctr r12
/* 80057D5C 00054E3C  4E 80 04 21 */	bctrl
.L_80057D60:
/* 80057D60 00054E40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80057D64 00054E44  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80057D68 00054E48  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80057D6C 00054E4C  7C 08 03 A6 */	mtlr r0
/* 80057D70 00054E50  38 21 00 10 */	addi r1, r1, 0x10
/* 80057D74 00054E54  4E 80 00 20 */	blr
.endfn "set_state__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@11thread_enumQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_enum"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_type::start()
.fn "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv", local
/* 80057D78 00054E58  4E 80 00 20 */	blr
.endfn "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_type::stop()
.fn "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv", local
/* 80057D7C 00054E5C  4E 80 00 20 */	blr
.endfn "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::check_launch()
.fn "check_launch__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 80057D80 00054E60  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80057D84 00054E64  7C 08 02 A6 */	mflr r0
/* 80057D88 00054E68  3C 60 80 3C */	lis r3, globals@ha
/* 80057D8C 00054E6C  38 A0 00 00 */	li r5, 0x0
/* 80057D90 00054E70  90 01 00 24 */	stw r0, 0x24(r1)
/* 80057D94 00054E74  38 83 05 58 */	addi r4, r3, globals@l
/* 80057D98 00054E78  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80057D9C 00054E7C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80057DA0 00054E80  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80057DA4 00054E84  80 04 17 88 */	lwz r0, 0x1788(r4)
/* 80057DA8 00054E88  28 00 00 00 */	cmplwi r0, 0x0
/* 80057DAC 00054E8C  40 82 00 40 */	bne .L_80057DEC
/* 80057DB0 00054E90  80 04 1A FC */	lwz r0, 0x1afc(r4)
/* 80057DB4 00054E94  2C 00 00 00 */	cmpwi r0, 0x0
/* 80057DB8 00054E98  40 82 00 34 */	bne .L_80057DEC
/* 80057DBC 00054E9C  88 04 09 BE */	lbz r0, 0x9be(r4)
/* 80057DC0 00054EA0  28 00 00 00 */	cmplwi r0, 0x0
/* 80057DC4 00054EA4  41 82 00 28 */	beq .L_80057DEC
/* 80057DC8 00054EA8  80 64 09 C4 */	lwz r3, 0x9c4(r4)
/* 80057DCC 00054EAC  80 03 00 00 */	lwz r0, 0x0(r3)
/* 80057DD0 00054EB0  2C 00 00 00 */	cmpwi r0, 0x0
/* 80057DD4 00054EB4  40 82 00 18 */	bne .L_80057DEC
/* 80057DD8 00054EB8  80 64 03 1C */	lwz r3, 0x31c(r4)
/* 80057DDC 00054EBC  80 03 00 30 */	lwz r0, 0x30(r3)
/* 80057DE0 00054EC0  54 00 05 EF */	rlwinm. r0, r0, 0, 23, 23
/* 80057DE4 00054EC4  41 82 00 08 */	beq .L_80057DEC
/* 80057DE8 00054EC8  38 A0 00 01 */	li r5, 0x1
.L_80057DEC:
/* 80057DEC 00054ECC  54 A0 06 3F */	clrlwi. r0, r5, 24
/* 80057DF0 00054ED0  40 82 00 0C */	bne .L_80057DFC
/* 80057DF4 00054ED4  38 60 00 00 */	li r3, 0x0
/* 80057DF8 00054ED8  48 00 00 58 */	b .L_80057E50
.L_80057DFC:
/* 80057DFC 00054EDC  3C 80 80 3C */	lis r4, globals@ha
/* 80057E00 00054EE0  3C 60 80 29 */	lis r3, "start_anim_states__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80057E04 00054EE4  38 84 05 58 */	addi r4, r4, globals@l
/* 80057E08 00054EE8  3B A0 00 00 */	li r29, 0x0
/* 80057E0C 00054EEC  80 84 07 04 */	lwz r4, 0x704(r4)
/* 80057E10 00054EF0  3B E3 C2 10 */	addi r31, r3, "start_anim_states__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80057E14 00054EF4  80 64 00 0C */	lwz r3, 0xc(r4)
/* 80057E18 00054EF8  80 63 00 08 */	lwz r3, 0x8(r3)
/* 80057E1C 00054EFC  83 C3 00 04 */	lwz r30, 0x4(r3)
.L_80057E20:
/* 80057E20 00054F00  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 80057E24 00054F04  80 9E 00 04 */	lwz r4, 0x4(r30)
/* 80057E28 00054F08  48 19 4E A9 */	bl stricmp
/* 80057E2C 00054F0C  2C 03 00 00 */	cmpwi r3, 0x0
/* 80057E30 00054F10  40 82 00 0C */	bne .L_80057E3C
/* 80057E34 00054F14  38 60 00 01 */	li r3, 0x1
/* 80057E38 00054F18  48 00 00 18 */	b .L_80057E50
.L_80057E3C:
/* 80057E3C 00054F1C  3B BD 00 01 */	addi r29, r29, 0x1
/* 80057E40 00054F20  3B FF 00 04 */	addi r31, r31, 0x4
/* 80057E44 00054F24  28 1D 00 25 */	cmplwi r29, 0x25
/* 80057E48 00054F28  41 80 FF D8 */	blt .L_80057E20
/* 80057E4C 00054F2C  38 60 00 00 */	li r3, 0x0
.L_80057E50:
/* 80057E50 00054F30  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80057E54 00054F34  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80057E58 00054F38  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80057E5C 00054F3C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80057E60 00054F40  7C 08 03 A6 */	mtlr r0
/* 80057E64 00054F44  38 21 00 20 */	addi r1, r1, 0x20
/* 80057E68 00054F48  4E 80 00 20 */	blr
.endfn "check_launch__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::kill(bool, bool)
.fn "kill__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fbb", local
/* 80057E6C 00054F4C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80057E70 00054F50  7C 08 02 A6 */	mflr r0
/* 80057E74 00054F54  90 01 00 24 */	stw r0, 0x24(r1)
/* 80057E78 00054F58  54 80 06 3F */	clrlwi. r0, r4, 24
/* 80057E7C 00054F5C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80057E80 00054F60  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80057E84 00054F64  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80057E88 00054F68  93 81 00 10 */	stw r28, 0x10(r1)
/* 80057E8C 00054F6C  7C 7C 1B 78 */	mr r28, r3
/* 80057E90 00054F70  41 82 00 48 */	beq .L_80057ED8
/* 80057E94 00054F74  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80057E98 00054F78  3B A0 00 00 */	li r29, 0x0
/* 80057E9C 00054F7C  3B C3 C2 A4 */	addi r30, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80057EA0 00054F80  3B E0 00 00 */	li r31, 0x0
.L_80057EA4:
/* 80057EA4 00054F84  80 7E 00 04 */	lwz r3, 0x4(r30)
/* 80057EA8 00054F88  28 03 00 00 */	cmplwi r3, 0x0
/* 80057EAC 00054F8C  41 82 00 18 */	beq .L_80057EC4
/* 80057EB0 00054F90  81 83 00 04 */	lwz r12, 0x4(r3)
/* 80057EB4 00054F94  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80057EB8 00054F98  7D 89 03 A6 */	mtctr r12
/* 80057EBC 00054F9C  4E 80 04 21 */	bctrl
/* 80057EC0 00054FA0  93 FE 00 04 */	stw r31, 0x4(r30)
.L_80057EC4:
/* 80057EC4 00054FA4  3B BD 00 01 */	addi r29, r29, 0x1
/* 80057EC8 00054FA8  3B DE 00 04 */	addi r30, r30, 0x4
/* 80057ECC 00054FAC  2C 1D 00 03 */	cmpwi r29, 0x3
/* 80057ED0 00054FB0  41 80 FF D4 */	blt .L_80057EA4
/* 80057ED4 00054FB4  48 00 00 20 */	b .L_80057EF4
.L_80057ED8:
/* 80057ED8 00054FB8  3B A0 00 00 */	li r29, 0x0
.L_80057EDC:
/* 80057EDC 00054FBC  7F A3 EB 78 */	mr r3, r29
/* 80057EE0 00054FC0  38 80 FF FF */	li r4, -0x1
/* 80057EE4 00054FC4  4B FF FD F9 */	bl "set_state__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@11thread_enumQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_enum"
/* 80057EE8 00054FC8  3B BD 00 01 */	addi r29, r29, 0x1
/* 80057EEC 00054FCC  2C 1D 00 03 */	cmpwi r29, 0x3
/* 80057EF0 00054FD0  41 80 FF EC */	blt .L_80057EDC
.L_80057EF4:
/* 80057EF4 00054FD4  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80057EF8 00054FD8  38 00 00 03 */	li r0, 0x3
/* 80057EFC 00054FDC  38 83 C2 A4 */	addi r4, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80057F00 00054FE0  38 60 00 02 */	li r3, 0x2
/* 80057F04 00054FE4  90 04 00 00 */	stw r0, 0x0(r4)
/* 80057F08 00054FE8  4B FF A2 09 */	bl zCameraEnableTracking__F17camera_owner_enum
/* 80057F0C 00054FEC  38 60 FF FF */	li r3, -0x1
/* 80057F10 00054FF0  38 80 00 00 */	li r4, 0x0
/* 80057F14 00054FF4  48 0D B4 45 */	bl permit__8ztalkboxFUiUi
/* 80057F18 00054FF8  57 80 06 3F */	clrlwi. r0, r28, 24
/* 80057F1C 00054FFC  41 82 00 20 */	beq .L_80057F3C
/* 80057F20 00055000  4B FF A2 15 */	bl zCameraEnableInput__Fv
/* 80057F24 00055004  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80057F28 00055008  3C A0 80 3C */	lis r5, globals@ha
/* 80057F2C 0005500C  38 83 C2 A4 */	addi r4, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80057F30 00055010  C0 24 01 00 */	lfs f1, 0x100(r4)
/* 80057F34 00055014  38 65 05 58 */	addi r3, r5, globals@l
/* 80057F38 00055018  4B FB 65 59 */	bl xCameraSetFOV__FP7xCameraf
.L_80057F3C:
/* 80057F3C 0005501C  4B FF F6 05 */	bl "hide_wand__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 80057F40 00055020  4B FF F6 39 */	bl "hide_missle__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 80057F44 00055024  48 00 23 FD */	bl "hide_hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 80057F48 00055028  4B FF FD 81 */	bl "stop_trail__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 80057F4C 0005502C  C0 22 89 B8 */	lfs f1, "@1551"@sda21(r2)
/* 80057F50 00055030  48 00 00 91 */	bl "distort_screen__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Ff"
/* 80057F54 00055034  38 60 00 00 */	li r3, 0x0
/* 80057F58 00055038  4B FF 0A A1 */	bl xSndSelectListenerMode__F24sound_listener_game_mode
/* 80057F5C 0005503C  3C 80 80 3C */	lis r4, globals@ha
/* 80057F60 00055040  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80057F64 00055044  38 84 05 58 */	addi r4, r4, globals@l
/* 80057F68 00055048  80 A4 07 04 */	lwz r5, 0x704(r4)
/* 80057F6C 0005504C  38 83 C2 A4 */	addi r4, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80057F70 00055050  80 04 01 64 */	lwz r0, 0x164(r4)
/* 80057F74 00055054  80 65 00 0C */	lwz r3, 0xc(r5)
/* 80057F78 00055058  80 A3 00 08 */	lwz r5, 0x8(r3)
/* 80057F7C 0005505C  80 A5 00 04 */	lwz r5, 0x4(r5)
/* 80057F80 00055060  7C 05 00 40 */	cmplw r5, r0
/* 80057F84 00055064  41 82 00 1C */	beq .L_80057FA0
/* 80057F88 00055068  80 04 01 68 */	lwz r0, 0x168(r4)
/* 80057F8C 0005506C  7C 05 00 40 */	cmplw r5, r0
/* 80057F90 00055070  41 82 00 10 */	beq .L_80057FA0
/* 80057F94 00055074  80 04 01 6C */	lwz r0, 0x16c(r4)
/* 80057F98 00055078  7C 05 00 40 */	cmplw r5, r0
/* 80057F9C 0005507C  40 82 00 14 */	bne .L_80057FB0
.L_80057FA0:
/* 80057FA0 00055080  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80057FA4 00055084  38 84 C2 A4 */	addi r4, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80057FA8 00055088  80 84 01 84 */	lwz r4, 0x184(r4)
/* 80057FAC 0005508C  4B FB 0A 99 */	bl xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition
.L_80057FB0:
/* 80057FB0 00055090  3C 60 80 3C */	lis r3, globals@ha
/* 80057FB4 00055094  38 63 05 58 */	addi r3, r3, globals@l
/* 80057FB8 00055098  80 63 1F C0 */	lwz r3, 0x1fc0(r3)
/* 80057FBC 0005509C  4B FF FB 75 */	bl "exit_triggers__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FR6xScene"
/* 80057FC0 000550A0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80057FC4 000550A4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80057FC8 000550A8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80057FCC 000550AC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80057FD0 000550B0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80057FD4 000550B4  7C 08 03 A6 */	mtlr r0
/* 80057FD8 000550B8  38 21 00 20 */	addi r1, r1, 0x20
/* 80057FDC 000550BC  4E 80 00 20 */	blr
.endfn "kill__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fbb"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::distort_screen(float)
.fn "distort_screen__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Ff", local
/* 80057FE0 000550C0  4E 80 00 20 */	blr
.endfn "distort_screen__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Ff"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_type::abort()
.fn "abort__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv", local
/* 80057FE4 000550C4  4E 80 00 20 */	blr
.endfn "abort__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::update_player(xScene&, float)
.fn "update_player__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FR6xScenef", local
/* 80057FE8 000550C8  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80057FEC 000550CC  7C 08 02 A6 */	mflr r0
/* 80057FF0 000550D0  90 01 00 54 */	stw r0, 0x54(r1)
/* 80057FF4 000550D4  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80057FF8 000550D8  F3 E1 00 48 */	psq_st f31, 0x48(r1), 0, qr0
/* 80057FFC 000550DC  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80058000 000550E0  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80058004 000550E4  7C 7E 1B 78 */	mr r30, r3
/* 80058008 000550E8  FF E0 08 90 */	fmr f31, f1
/* 8005800C 000550EC  48 00 00 FD */	bl "get_player_loc__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 80058010 000550F0  80 C3 00 00 */	lwz r6, 0x0(r3)
/* 80058014 000550F4  3C 80 80 3C */	lis r4, globals@ha
/* 80058018 000550F8  80 A3 00 04 */	lwz r5, 0x4(r3)
/* 8005801C 000550FC  FC 20 F8 90 */	fmr f1, f31
/* 80058020 00055100  80 03 00 08 */	lwz r0, 0x8(r3)
/* 80058024 00055104  38 64 05 58 */	addi r3, r4, globals@l
/* 80058028 00055108  90 C1 00 2C */	stw r6, 0x2c(r1)
/* 8005802C 0005510C  7F C4 F3 78 */	mr r4, r30
/* 80058030 00055110  38 63 06 E0 */	addi r3, r3, 0x6e0
/* 80058034 00055114  90 A1 00 30 */	stw r5, 0x30(r1)
/* 80058038 00055118  38 A1 00 20 */	addi r5, r1, 0x20
/* 8005803C 0005511C  3B E0 00 00 */	li r31, 0x0
/* 80058040 00055120  90 01 00 34 */	stw r0, 0x34(r1)
/* 80058044 00055124  48 02 A6 31 */	bl zEntPlayer_MinimalUpdate__FP4xEntP6xScenefR5xVec3
/* 80058048 00055128  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8005804C 0005512C  40 82 00 24 */	bne .L_80058070
/* 80058050 00055130  3C 80 80 3C */	lis r4, globals@ha
/* 80058054 00055134  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058058 00055138  38 84 05 58 */	addi r4, r4, globals@l
/* 8005805C 0005513C  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058060 00055140  80 84 16 B0 */	lwz r4, 0x16b0(r4)
/* 80058064 00055144  80 03 00 F0 */	lwz r0, 0xf0(r3)
/* 80058068 00055148  7C 04 00 40 */	cmplw r4, r0
/* 8005806C 0005514C  40 80 00 08 */	bge .L_80058074
.L_80058070:
/* 80058070 00055150  3B E0 00 01 */	li r31, 0x1
.L_80058074:
/* 80058074 00055154  57 E0 06 3F */	clrlwi. r0, r31, 24
/* 80058078 00055158  7F FE FB 78 */	mr r30, r31
/* 8005807C 0005515C  40 82 00 58 */	bne .L_800580D4
/* 80058080 00055160  48 00 00 89 */	bl "get_player_loc__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 80058084 00055164  7C 64 1B 78 */	mr r4, r3
/* 80058088 00055168  38 61 00 08 */	addi r3, r1, 0x8
/* 8005808C 0005516C  38 A1 00 2C */	addi r5, r1, 0x2c
/* 80058090 00055170  4B FB 31 3D */	bl __mi__5xVec3CFRC5xVec3
/* 80058094 00055174  38 61 00 14 */	addi r3, r1, 0x14
/* 80058098 00055178  38 81 00 08 */	addi r4, r1, 0x8
/* 8005809C 0005517C  38 A1 00 20 */	addi r5, r1, 0x20
/* 800580A0 00055180  4B FB 31 2D */	bl __mi__5xVec3CFRC5xVec3
/* 800580A4 00055184  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 800580A8 00055188  38 81 00 14 */	addi r4, r1, 0x14
/* 800580AC 0005518C  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 800580B0 00055190  3B E3 00 F4 */	addi r31, r3, 0xf4
/* 800580B4 00055194  7F E3 FB 78 */	mr r3, r31
/* 800580B8 00055198  4B FB D3 8D */	bl __apl__5xVec3FRC5xVec3
/* 800580BC 0005519C  7F E3 FB 78 */	mr r3, r31
/* 800580C0 000551A0  4B FB 30 3D */	bl length2__5xVec3CFv
/* 800580C4 000551A4  C0 02 89 D8 */	lfs f0, "@2509"@sda21(r2)
/* 800580C8 000551A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800580CC 000551AC  40 81 00 08 */	ble .L_800580D4
/* 800580D0 000551B0  3B C0 00 01 */	li r30, 0x1
.L_800580D4:
/* 800580D4 000551B4  57 C0 06 3F */	clrlwi. r0, r30, 24
/* 800580D8 000551B8  41 82 00 10 */	beq .L_800580E8
/* 800580DC 000551BC  38 60 00 01 */	li r3, 0x1
/* 800580E0 000551C0  38 80 00 00 */	li r4, 0x0
/* 800580E4 000551C4  4B FF FD 89 */	bl "kill__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fbb"
.L_800580E8:
/* 800580E8 000551C8  E3 E1 00 48 */	psq_l f31, 0x48(r1), 0, qr0
/* 800580EC 000551CC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 800580F0 000551D0  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 800580F4 000551D4  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 800580F8 000551D8  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 800580FC 000551DC  7C 08 03 A6 */	mtlr r0
/* 80058100 000551E0  38 21 00 50 */	addi r1, r1, 0x50
/* 80058104 000551E4  4E 80 00 20 */	blr
.endfn "update_player__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FR6xScenef"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::get_player_loc()
.fn "get_player_loc__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 80058108 000551E8  3C 60 80 3C */	lis r3, globals@ha
/* 8005810C 000551EC  38 63 05 58 */	addi r3, r3, globals@l
/* 80058110 000551F0  80 63 07 04 */	lwz r3, 0x704(r3)
/* 80058114 000551F4  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80058118 000551F8  38 63 00 30 */	addi r3, r3, 0x30
/* 8005811C 000551FC  4E 80 00 20 */	blr
.endfn "get_player_loc__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::render_player()
.fn "render_player__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 80058120 00055200  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80058124 00055204  7C 08 02 A6 */	mflr r0
/* 80058128 00055208  3C 60 80 3C */	lis r3, globals@ha
/* 8005812C 0005520C  38 63 05 58 */	addi r3, r3, globals@l
/* 80058130 00055210  90 01 00 14 */	stw r0, 0x14(r1)
/* 80058134 00055214  38 63 06 E0 */	addi r3, r3, 0x6e0
/* 80058138 00055218  48 02 A8 6D */	bl zEntPlayer_MinimalRender__FP4zEnt
/* 8005813C 0005521C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058140 00055220  7C 08 03 A6 */	mtlr r0
/* 80058144 00055224  38 21 00 10 */	addi r1, r1, 0x10
/* 80058148 00055228  4E 80 00 20 */	blr
.endfn "render_player__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::refresh_controls()
.fn "refresh_controls__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 8005814C 0005522C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80058150 00055230  7C 08 02 A6 */	mflr r0
/* 80058154 00055234  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058158 00055238  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005815C 0005523C  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058160 00055240  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80058164 00055244  3B E3 00 48 */	addi r31, r3, 0x48
/* 80058168 00055248  7F E4 FB 78 */	mr r4, r31
/* 8005816C 0005524C  38 63 00 40 */	addi r3, r3, 0x40
/* 80058170 00055250  4B FC D6 89 */	bl __as__5xVec2FRC5xVec2
/* 80058174 00055254  3C 80 80 3C */	lis r4, globals@ha
/* 80058178 00055258  7F E3 FB 78 */	mr r3, r31
/* 8005817C 0005525C  38 84 05 58 */	addi r4, r4, globals@l
/* 80058180 00055260  80 84 03 1C */	lwz r4, 0x31c(r4)
/* 80058184 00055264  38 84 01 18 */	addi r4, r4, 0x118
/* 80058188 00055268  4B FC D6 71 */	bl __as__5xVec2FRC5xVec2
/* 8005818C 0005526C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058190 00055270  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80058194 00055274  7C 08 03 A6 */	mtlr r0
/* 80058198 00055278  38 21 00 10 */	addi r1, r1, 0x10
/* 8005819C 0005527C  4E 80 00 20 */	blr
.endfn "refresh_controls__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::update_state(xScene*, float)
.fn "update_state__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FP6xScenef", local
/* 800581A0 00055280  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800581A4 00055284  7C 08 02 A6 */	mflr r0
/* 800581A8 00055288  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 800581AC 0005528C  90 01 00 24 */	stw r0, 0x24(r1)
/* 800581B0 00055290  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 800581B4 00055294  FF E0 08 90 */	fmr f31, f1
/* 800581B8 00055298  93 E1 00 14 */	stw r31, 0x14(r1)
/* 800581BC 0005529C  93 C1 00 10 */	stw r30, 0x10(r1)
/* 800581C0 000552A0  3B C3 C2 A4 */	addi r30, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 800581C4 000552A4  93 A1 00 0C */	stw r29, 0xc(r1)
/* 800581C8 000552A8  3B A0 00 00 */	li r29, 0x0
/* 800581CC 000552AC  93 81 00 08 */	stw r28, 0x8(r1)
.L_800581D0:
/* 800581D0 000552B0  3B 9E 00 04 */	addi r28, r30, 0x4
/* 800581D4 000552B4  80 7E 00 04 */	lwz r3, 0x4(r30)
/* 800581D8 000552B8  28 03 00 00 */	cmplwi r3, 0x0
/* 800581DC 000552BC  41 82 00 7C */	beq .L_80058258
/* 800581E0 000552C0  81 83 00 04 */	lwz r12, 0x4(r3)
/* 800581E4 000552C4  FC 20 F8 90 */	fmr f1, f31
/* 800581E8 000552C8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 800581EC 000552CC  7D 89 03 A6 */	mtctr r12
/* 800581F0 000552D0  4E 80 04 21 */	bctrl
/* 800581F4 000552D4  80 9C 00 00 */	lwz r4, 0x0(r28)
/* 800581F8 000552D8  7C 7F 1B 78 */	mr r31, r3
/* 800581FC 000552DC  80 04 00 00 */	lwz r0, 0x0(r4)
/* 80058200 000552E0  7C 1F 00 00 */	cmpw r31, r0
/* 80058204 000552E4  41 82 00 54 */	beq .L_80058258
/* 80058208 000552E8  7C 83 23 78 */	mr r3, r4
/* 8005820C 000552EC  81 84 00 04 */	lwz r12, 0x4(r4)
/* 80058210 000552F0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80058214 000552F4  7D 89 03 A6 */	mtctr r12
/* 80058218 000552F8  4E 80 04 21 */	bctrl
/* 8005821C 000552FC  38 00 00 00 */	li r0, 0x0
/* 80058220 00055300  2C 1F FF FF */	cmpwi r31, -0x1
/* 80058224 00055304  90 1C 00 00 */	stw r0, 0x0(r28)
/* 80058228 00055308  41 82 00 30 */	beq .L_80058258
/* 8005822C 0005530C  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058230 00055310  57 E4 10 3A */	slwi r4, r31, 2
/* 80058234 00055314  38 03 C2 A4 */	addi r0, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058238 00055318  7C 60 22 14 */	add r3, r0, r4
/* 8005823C 0005531C  80 03 00 10 */	lwz r0, 0x10(r3)
/* 80058240 00055320  90 1C 00 00 */	stw r0, 0x0(r28)
/* 80058244 00055324  80 7C 00 00 */	lwz r3, 0x0(r28)
/* 80058248 00055328  81 83 00 04 */	lwz r12, 0x4(r3)
/* 8005824C 0005532C  81 8C 00 08 */	lwz r12, 0x8(r12)
/* 80058250 00055330  7D 89 03 A6 */	mtctr r12
/* 80058254 00055334  4E 80 04 21 */	bctrl
.L_80058258:
/* 80058258 00055338  3B BD 00 01 */	addi r29, r29, 0x1
/* 8005825C 0005533C  3B DE 00 04 */	addi r30, r30, 0x4
/* 80058260 00055340  2C 1D 00 03 */	cmpwi r29, 0x3
/* 80058264 00055344  41 80 FF 6C */	blt .L_800581D0
/* 80058268 00055348  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005826C 0005534C  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058270 00055350  80 03 00 04 */	lwz r0, 0x4(r3)
/* 80058274 00055354  28 00 00 00 */	cmplwi r0, 0x0
/* 80058278 00055358  40 82 00 10 */	bne .L_80058288
/* 8005827C 0005535C  38 60 00 01 */	li r3, 0x1
/* 80058280 00055360  38 80 00 00 */	li r4, 0x0
/* 80058284 00055364  4B FF FB E9 */	bl "kill__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fbb"
.L_80058288:
/* 80058288 00055368  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005828C 0005536C  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80058290 00055370  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 80058294 00055374  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 80058298 00055378  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 8005829C 0005537C  83 81 00 08 */	lwz r28, 0x8(r1)
/* 800582A0 00055380  7C 08 03 A6 */	mtlr r0
/* 800582A4 00055384  38 21 00 20 */	addi r1, r1, 0x20
/* 800582A8 00055388  4E 80 00 20 */	blr
.endfn "update_state__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FP6xScenef"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::render_state()
.fn "render_state__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 800582AC 0005538C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800582B0 00055390  7C 08 02 A6 */	mflr r0
/* 800582B4 00055394  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 800582B8 00055398  90 01 00 14 */	stw r0, 0x14(r1)
/* 800582BC 0005539C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800582C0 000553A0  3B E3 C2 A4 */	addi r31, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 800582C4 000553A4  93 C1 00 08 */	stw r30, 0x8(r1)
/* 800582C8 000553A8  3B C0 00 00 */	li r30, 0x0
.L_800582CC:
/* 800582CC 000553AC  80 7F 00 04 */	lwz r3, 0x4(r31)
/* 800582D0 000553B0  28 03 00 00 */	cmplwi r3, 0x0
/* 800582D4 000553B4  41 82 00 14 */	beq .L_800582E8
/* 800582D8 000553B8  81 83 00 04 */	lwz r12, 0x4(r3)
/* 800582DC 000553BC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 800582E0 000553C0  7D 89 03 A6 */	mtctr r12
/* 800582E4 000553C4  4E 80 04 21 */	bctrl
.L_800582E8:
/* 800582E8 000553C8  3B DE 00 01 */	addi r30, r30, 0x1
/* 800582EC 000553CC  3B FF 00 04 */	addi r31, r31, 0x4
/* 800582F0 000553D0  2C 1E 00 03 */	cmpwi r30, 0x3
/* 800582F4 000553D4  41 80 FF D8 */	blt .L_800582CC
/* 800582F8 000553D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800582FC 000553DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80058300 000553E0  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80058304 000553E4  7C 08 03 A6 */	mtlr r0
/* 80058308 000553E8  38 21 00 10 */	addi r1, r1, 0x10
/* 8005830C 000553EC  4E 80 00 20 */	blr
.endfn "render_state__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_type::render()
.fn "render__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv", local
/* 80058310 000553F0  4E 80 00 20 */	blr
.endfn "render__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::custom_bubble_render(RpAtomic*)
.fn "custom_bubble_render__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FP8RpAtomic", local
/* 80058314 000553F4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80058318 000553F8  7C 08 02 A6 */	mflr r0
/* 8005831C 000553FC  90 01 00 44 */	stw r0, 0x44(r1)
/* 80058320 00055400  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80058324 00055404  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 80058328 00055408  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8005832C 0005540C  F3 C1 00 28 */	psq_st f30, 0x28(r1), 0, qr0
/* 80058330 00055410  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80058334 00055414  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058338 00055418  7C 7F 1B 78 */	mr r31, r3
/* 8005833C 0005541C  38 64 C2 A4 */	addi r3, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058340 00055420  38 81 00 08 */	addi r4, r1, 0x8
/* 80058344 00055424  80 A3 00 68 */	lwz r5, 0x68(r3)
/* 80058348 00055428  38 60 00 14 */	li r3, 0x14
/* 8005834C 0005542C  C3 E5 00 24 */	lfs f31, 0x24(r5)
/* 80058350 00055430  48 1D 74 ED */	bl RwRenderStateGet
/* 80058354 00055434  38 60 00 14 */	li r3, 0x14
/* 80058358 00055438  38 80 00 01 */	li r4, 0x1
/* 8005835C 0005543C  48 1D 74 81 */	bl RwRenderStateSet
/* 80058360 00055440  38 60 FF FF */	li r3, -0x1
/* 80058364 00055444  48 06 AA D9 */	bl iDrawSetFBMSK__FUi
/* 80058368 00055448  7F E3 FB 78 */	mr r3, r31
/* 8005836C 0005544C  4B FC F0 81 */	bl AtomicDisableMatFX__FP8RpAtomic
/* 80058370 00055450  7F E3 FB 78 */	mr r3, r31
/* 80058374 00055454  38 80 00 02 */	li r4, 0x2
/* 80058378 00055458  48 1B 2E F1 */	bl RpSkinAtomicSetType
/* 8005837C 0005545C  81 8D 89 30 */	lwz r12, gAtomicRenderCallBack@sda21(r13)
/* 80058380 00055460  7F E3 FB 78 */	mr r3, r31
/* 80058384 00055464  7D 89 03 A6 */	mtctr r12
/* 80058388 00055468  4E 80 04 21 */	bctrl
/* 8005838C 0005546C  38 60 00 00 */	li r3, 0x0
/* 80058390 00055470  48 06 AA AD */	bl iDrawSetFBMSK__FUi
/* 80058394 00055474  80 8D 81 80 */	lwz r4, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 80058398 00055478  80 04 00 E0 */	lwz r0, 0xe0(r4)
/* 8005839C 0005547C  28 00 00 00 */	cmplwi r0, 0x0
/* 800583A0 00055480  41 82 00 6C */	beq .L_8005840C
/* 800583A4 00055484  C0 22 89 DC */	lfs f1, "@2568"@sda21(r2)
/* 800583A8 00055488  7F E3 FB 78 */	mr r3, r31
/* 800583AC 0005548C  C0 04 00 D8 */	lfs f0, 0xd8(r4)
/* 800583B0 00055490  C0 44 00 DC */	lfs f2, 0xdc(r4)
/* 800583B4 00055494  EC 21 00 32 */	fmuls f1, f1, f0
/* 800583B8 00055498  C0 02 89 C8 */	lfs f0, "@1728"@sda21(r2)
/* 800583BC 0005549C  EF C2 07 F2 */	fmuls f30, f2, f31
/* 800583C0 000554A0  EC 01 07 FA */	fmadds f0, f1, f31, f0
/* 800583C4 000554A4  FC 00 00 1E */	fctiwz f0, f0
/* 800583C8 000554A8  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 800583CC 000554AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800583D0 000554B0  54 04 06 3E */	clrlwi r4, r0, 24
/* 800583D4 000554B4  48 07 0E 19 */	bl iModelSetMaterialAlpha__FP8RpAtomicUc
/* 800583D8 000554B8  38 00 00 10 */	li r0, 0x10
/* 800583DC 000554BC  FC 20 F0 90 */	fmr f1, f30
/* 800583E0 000554C0  90 0D 8E 88 */	stw r0, gFXSurfaceFlags@sda21(r13)
/* 800583E4 000554C4  7F E3 FB 78 */	mr r3, r31
/* 800583E8 000554C8  80 8D 81 80 */	lwz r4, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 800583EC 000554CC  80 84 00 E0 */	lwz r4, 0xe0(r4)
/* 800583F0 000554D0  4B FC F5 95 */	bl xFXAtomicEnvMapSetup__FP8RpAtomicUif
/* 800583F4 000554D4  38 00 00 00 */	li r0, 0x0
/* 800583F8 000554D8  7F E3 FB 78 */	mr r3, r31
/* 800583FC 000554DC  90 0D 8E 88 */	stw r0, gFXSurfaceFlags@sda21(r13)
/* 80058400 000554E0  81 8D 89 30 */	lwz r12, gAtomicRenderCallBack@sda21(r13)
/* 80058404 000554E4  7D 89 03 A6 */	mtctr r12
/* 80058408 000554E8  4E 80 04 21 */	bctrl
.L_8005840C:
/* 8005840C 000554EC  80 8D 81 80 */	lwz r4, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 80058410 000554F0  80 04 00 D4 */	lwz r0, 0xd4(r4)
/* 80058414 000554F4  28 00 00 00 */	cmplwi r0, 0x0
/* 80058418 000554F8  41 82 00 74 */	beq .L_8005848C
/* 8005841C 000554FC  C0 22 89 DC */	lfs f1, "@2568"@sda21(r2)
/* 80058420 00055500  7F E3 FB 78 */	mr r3, r31
/* 80058424 00055504  C0 04 00 CC */	lfs f0, 0xcc(r4)
/* 80058428 00055508  C0 44 00 D0 */	lfs f2, 0xd0(r4)
/* 8005842C 0005550C  EC 21 00 32 */	fmuls f1, f1, f0
/* 80058430 00055510  C0 02 89 C8 */	lfs f0, "@1728"@sda21(r2)
/* 80058434 00055514  EF C2 07 F2 */	fmuls f30, f2, f31
/* 80058438 00055518  EC 01 07 FA */	fmadds f0, f1, f31, f0
/* 8005843C 0005551C  FC 00 00 1E */	fctiwz f0, f0
/* 80058440 00055520  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80058444 00055524  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058448 00055528  54 04 06 3E */	clrlwi r4, r0, 24
/* 8005844C 0005552C  48 07 0D A1 */	bl iModelSetMaterialAlpha__FP8RpAtomicUc
/* 80058450 00055530  7F E3 FB 78 */	mr r3, r31
/* 80058454 00055534  4B FC EF 99 */	bl AtomicDisableMatFX__FP8RpAtomic
/* 80058458 00055538  38 00 00 10 */	li r0, 0x10
/* 8005845C 0005553C  FC 20 F0 90 */	fmr f1, f30
/* 80058460 00055540  90 0D 8E 88 */	stw r0, gFXSurfaceFlags@sda21(r13)
/* 80058464 00055544  7F E3 FB 78 */	mr r3, r31
/* 80058468 00055548  80 8D 81 80 */	lwz r4, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005846C 0005554C  80 84 00 D4 */	lwz r4, 0xd4(r4)
/* 80058470 00055550  4B FC F5 15 */	bl xFXAtomicEnvMapSetup__FP8RpAtomicUif
/* 80058474 00055554  38 00 00 00 */	li r0, 0x0
/* 80058478 00055558  7F E3 FB 78 */	mr r3, r31
/* 8005847C 0005555C  90 0D 8E 88 */	stw r0, gFXSurfaceFlags@sda21(r13)
/* 80058480 00055560  81 8D 89 30 */	lwz r12, gAtomicRenderCallBack@sda21(r13)
/* 80058484 00055564  7D 89 03 A6 */	mtctr r12
/* 80058488 00055568  4E 80 04 21 */	bctrl
.L_8005848C:
/* 8005848C 0005556C  80 81 00 08 */	lwz r4, 0x8(r1)
/* 80058490 00055570  38 60 00 14 */	li r3, 0x14
/* 80058494 00055574  48 1D 73 49 */	bl RwRenderStateSet
/* 80058498 00055578  7F E3 FB 78 */	mr r3, r31
/* 8005849C 0005557C  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 800584A0 00055580  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 800584A4 00055584  E3 C1 00 28 */	psq_l f30, 0x28(r1), 0, qr0
/* 800584A8 00055588  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 800584AC 0005558C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 800584B0 00055590  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800584B4 00055594  7C 08 03 A6 */	mtlr r0
/* 800584B8 00055598  38 21 00 40 */	addi r1, r1, 0x40
/* 800584BC 0005559C  4E 80 00 20 */	blr
.endfn "custom_bubble_render__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FP8RpAtomic"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::init_states()
.fn "init_states__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 800584C0 000555A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800584C4 000555A4  7C 08 02 A6 */	mflr r0
/* 800584C8 000555A8  3C 60 80 2E */	lis r3, ...bss.0@ha
/* 800584CC 000555AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800584D0 000555B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800584D4 000555B4  3B E3 BA 80 */	addi r31, r3, ...bss.0@l
/* 800584D8 000555B8  88 0D 8C 48 */	lbz r0, init$2574@sda21(r13)
/* 800584DC 000555BC  7C 00 07 75 */	extsb. r0, r0
/* 800584E0 000555C0  40 82 00 14 */	bne .L_800584F4
/* 800584E4 000555C4  38 7F 0E B4 */	addi r3, r31, 0xeb4
/* 800584E8 000555C8  48 00 04 E9 */	bl "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_haltFv"
/* 800584EC 000555CC  38 00 00 01 */	li r0, 0x1
/* 800584F0 000555D0  98 0D 8C 48 */	stb r0, init$2574@sda21(r13)
.L_800584F4:
/* 800584F4 000555D4  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 800584F8 000555D8  38 1F 0E B4 */	addi r0, r31, 0xeb4
/* 800584FC 000555DC  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058500 000555E0  90 03 00 10 */	stw r0, 0x10(r3)
/* 80058504 000555E4  88 0D 8C 49 */	lbz r0, init$2577@sda21(r13)
/* 80058508 000555E8  7C 00 07 75 */	extsb. r0, r0
/* 8005850C 000555EC  40 82 00 14 */	bne .L_80058520
/* 80058510 000555F0  38 7F 0E D0 */	addi r3, r31, 0xed0
/* 80058514 000555F4  48 00 04 7D */	bl "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_player_aimFv"
/* 80058518 000555F8  38 00 00 01 */	li r0, 0x1
/* 8005851C 000555FC  98 0D 8C 49 */	stb r0, init$2577@sda21(r13)
.L_80058520:
/* 80058520 00055600  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058524 00055604  38 1F 0E D0 */	addi r0, r31, 0xed0
/* 80058528 00055608  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005852C 0005560C  90 03 00 14 */	stw r0, 0x14(r3)
/* 80058530 00055610  88 0D 8C 4A */	lbz r0, init$2580@sda21(r13)
/* 80058534 00055614  7C 00 07 75 */	extsb. r0, r0
/* 80058538 00055618  40 82 00 14 */	bne .L_8005854C
/* 8005853C 0005561C  38 7F 0E E4 */	addi r3, r31, 0xee4
/* 80058540 00055620  48 00 04 11 */	bl "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_fireFv"
/* 80058544 00055624  38 00 00 01 */	li r0, 0x1
/* 80058548 00055628  98 0D 8C 4A */	stb r0, init$2580@sda21(r13)
.L_8005854C:
/* 8005854C 0005562C  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058550 00055630  38 1F 0E E4 */	addi r0, r31, 0xee4
/* 80058554 00055634  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058558 00055638  90 03 00 18 */	stw r0, 0x18(r3)
/* 8005855C 0005563C  88 0D 8C 4B */	lbz r0, init$2583@sda21(r13)
/* 80058560 00055640  7C 00 07 75 */	extsb. r0, r0
/* 80058564 00055644  40 82 00 14 */	bne .L_80058578
/* 80058568 00055648  38 6D 8C 4C */	addi r3, r13, player_wait$2582@sda21
/* 8005856C 0005564C  48 00 03 A5 */	bl "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_waitFv"
/* 80058570 00055650  38 00 00 01 */	li r0, 0x1
/* 80058574 00055654  98 0D 8C 4B */	stb r0, init$2583@sda21(r13)
.L_80058578:
/* 80058578 00055658  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005857C 0005565C  38 0D 8C 4C */	addi r0, r13, player_wait$2582@sda21
/* 80058580 00055660  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058584 00055664  90 03 00 1C */	stw r0, 0x1c(r3)
/* 80058588 00055668  88 0D 8C 54 */	lbz r0, init$2586@sda21(r13)
/* 8005858C 0005566C  7C 00 07 75 */	extsb. r0, r0
/* 80058590 00055670  40 82 00 14 */	bne .L_800585A4
/* 80058594 00055674  38 6D 8C 58 */	addi r3, r13, missle_appear$2585@sda21
/* 80058598 00055678  48 00 03 39 */	bl "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_missle_appearFv"
/* 8005859C 0005567C  38 00 00 01 */	li r0, 0x1
/* 800585A0 00055680  98 0D 8C 54 */	stb r0, init$2586@sda21(r13)
.L_800585A4:
/* 800585A4 00055684  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 800585A8 00055688  38 0D 8C 58 */	addi r0, r13, missle_appear$2585@sda21
/* 800585AC 0005568C  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 800585B0 00055690  90 03 00 20 */	stw r0, 0x20(r3)
/* 800585B4 00055694  88 0D 8C 60 */	lbz r0, init$2589@sda21(r13)
/* 800585B8 00055698  7C 00 07 75 */	extsb. r0, r0
/* 800585BC 0005569C  40 82 00 14 */	bne .L_800585D0
/* 800585C0 000556A0  38 7F 0E F0 */	addi r3, r31, 0xef0
/* 800585C4 000556A4  48 00 02 CD */	bl "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFv"
/* 800585C8 000556A8  38 00 00 01 */	li r0, 0x1
/* 800585CC 000556AC  98 0D 8C 60 */	stb r0, init$2589@sda21(r13)
.L_800585D0:
/* 800585D0 000556B0  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 800585D4 000556B4  38 1F 0E F0 */	addi r0, r31, 0xef0
/* 800585D8 000556B8  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 800585DC 000556BC  90 03 00 24 */	stw r0, 0x24(r3)
/* 800585E0 000556C0  88 0D 8C 61 */	lbz r0, init$2592@sda21(r13)
/* 800585E4 000556C4  7C 00 07 75 */	extsb. r0, r0
/* 800585E8 000556C8  40 82 00 14 */	bne .L_800585FC
/* 800585EC 000556CC  38 7F 0F 2C */	addi r3, r31, 0xf2c
/* 800585F0 000556D0  48 00 02 61 */	bl "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFv"
/* 800585F4 000556D4  38 00 00 01 */	li r0, 0x1
/* 800585F8 000556D8  98 0D 8C 61 */	stb r0, init$2592@sda21(r13)
.L_800585FC:
/* 800585FC 000556DC  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058600 000556E0  38 1F 0F 2C */	addi r0, r31, 0xf2c
/* 80058604 000556E4  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058608 000556E8  90 03 00 28 */	stw r0, 0x28(r3)
/* 8005860C 000556EC  88 0D 8C 62 */	lbz r0, init$2595@sda21(r13)
/* 80058610 000556F0  7C 00 07 75 */	extsb. r0, r0
/* 80058614 000556F4  40 82 00 14 */	bne .L_80058628
/* 80058618 000556F8  38 7F 0F 38 */	addi r3, r31, 0xf38
/* 8005861C 000556FC  48 00 01 F5 */	bl "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimFv"
/* 80058620 00055700  38 00 00 01 */	li r0, 0x1
/* 80058624 00055704  98 0D 8C 62 */	stb r0, init$2595@sda21(r13)
.L_80058628:
/* 80058628 00055708  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005862C 0005570C  38 1F 0F 38 */	addi r0, r31, 0xf38
/* 80058630 00055710  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058634 00055714  90 03 00 2C */	stw r0, 0x2c(r3)
/* 80058638 00055718  88 0D 8C 63 */	lbz r0, init$2598@sda21(r13)
/* 8005863C 0005571C  7C 00 07 75 */	extsb. r0, r0
/* 80058640 00055720  40 82 00 14 */	bne .L_80058654
/* 80058644 00055724  38 7F 0F 80 */	addi r3, r31, 0xf80
/* 80058648 00055728  48 00 01 89 */	bl "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18state_camera_seizeFv"
/* 8005864C 0005572C  38 00 00 01 */	li r0, 0x1
/* 80058650 00055730  98 0D 8C 63 */	stb r0, init$2598@sda21(r13)
.L_80058654:
/* 80058654 00055734  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058658 00055738  38 1F 0F 80 */	addi r0, r31, 0xf80
/* 8005865C 0005573C  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058660 00055740  90 03 00 30 */	stw r0, 0x30(r3)
/* 80058664 00055744  88 0D 8C 64 */	lbz r0, init$2601@sda21(r13)
/* 80058668 00055748  7C 00 07 75 */	extsb. r0, r0
/* 8005866C 0005574C  40 82 00 14 */	bne .L_80058680
/* 80058670 00055750  38 7F 0F D4 */	addi r3, r31, 0xfd4
/* 80058674 00055754  48 00 01 1D */	bl "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attachFv"
/* 80058678 00055758  38 00 00 01 */	li r0, 0x1
/* 8005867C 0005575C  98 0D 8C 64 */	stb r0, init$2601@sda21(r13)
.L_80058680:
/* 80058680 00055760  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058684 00055764  38 1F 0F D4 */	addi r0, r31, 0xfd4
/* 80058688 00055768  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005868C 0005576C  90 03 00 34 */	stw r0, 0x34(r3)
/* 80058690 00055770  88 0D 8C 65 */	lbz r0, init$2604@sda21(r13)
/* 80058694 00055774  7C 00 07 75 */	extsb. r0, r0
/* 80058698 00055778  40 82 00 14 */	bne .L_800586AC
/* 8005869C 0005577C  38 7F 0F E0 */	addi r3, r31, 0xfe0
/* 800586A0 00055780  48 00 00 B1 */	bl "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyFv"
/* 800586A4 00055784  38 00 00 01 */	li r0, 0x1
/* 800586A8 00055788  98 0D 8C 65 */	stb r0, init$2604@sda21(r13)
.L_800586AC:
/* 800586AC 0005578C  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 800586B0 00055790  38 1F 0F E0 */	addi r0, r31, 0xfe0
/* 800586B4 00055794  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 800586B8 00055798  90 03 00 38 */	stw r0, 0x38(r3)
/* 800586BC 0005579C  88 0D 8C 66 */	lbz r0, init$2607@sda21(r13)
/* 800586C0 000557A0  7C 00 07 75 */	extsb. r0, r0
/* 800586C4 000557A4  40 82 00 14 */	bne .L_800586D8
/* 800586C8 000557A8  38 7F 11 F0 */	addi r3, r31, 0x11f0
/* 800586CC 000557AC  48 00 00 31 */	bl "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_camera_restoreFv"
/* 800586D0 000557B0  38 00 00 01 */	li r0, 0x1
/* 800586D4 000557B4  98 0D 8C 66 */	stb r0, init$2607@sda21(r13)
.L_800586D8:
/* 800586D8 000557B8  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 800586DC 000557BC  38 1F 11 F0 */	addi r0, r31, 0x11f0
/* 800586E0 000557C0  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 800586E4 000557C4  90 03 00 3C */	stw r0, 0x3c(r3)
/* 800586E8 000557C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800586EC 000557CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800586F0 000557D0  7C 08 03 A6 */	mtlr r0
/* 800586F4 000557D4  38 21 00 10 */	addi r1, r1, 0x10
/* 800586F8 000557D8  4E 80 00 20 */	blr
.endfn "init_states__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_restore::state_camera_restore()
.fn "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_camera_restoreFv", local
/* 800586FC 000557DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80058700 000557E0  7C 08 02 A6 */	mflr r0
/* 80058704 000557E4  38 80 00 0B */	li r4, 0xb
/* 80058708 000557E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005870C 000557EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80058710 000557F0  7C 7F 1B 78 */	mr r31, r3
/* 80058714 000557F4  48 00 00 29 */	bl "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_enum"
/* 80058718 000557F8  3C 80 80 29 */	lis r4, "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_camera_restore"@ha
/* 8005871C 000557FC  7F E3 FB 78 */	mr r3, r31
/* 80058720 00055800  38 04 C6 20 */	addi r0, r4, "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_camera_restore"@l
/* 80058724 00055804  90 1F 00 04 */	stw r0, 0x4(r31)
/* 80058728 00055808  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005872C 0005580C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058730 00055810  7C 08 03 A6 */	mtlr r0
/* 80058734 00055814  38 21 00 10 */	addi r1, r1, 0x10
/* 80058738 00055818  4E 80 00 20 */	blr
.endfn "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_camera_restoreFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_type::state_type(cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_enum)
.fn "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_enum", local
/* 8005873C 0005581C  3C A0 80 29 */	lis r5, "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_type"@ha
/* 80058740 00055820  38 05 C6 04 */	addi r0, r5, "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_type"@l
/* 80058744 00055824  90 03 00 04 */	stw r0, 0x4(r3)
/* 80058748 00055828  90 83 00 00 */	stw r4, 0x0(r3)
/* 8005874C 0005582C  4E 80 00 20 */	blr
.endfn "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_enum"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_survey::state_camera_survey()
.fn "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyFv", local
/* 80058750 00055830  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80058754 00055834  7C 08 02 A6 */	mflr r0
/* 80058758 00055838  38 80 00 0A */	li r4, 0xa
/* 8005875C 0005583C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80058760 00055840  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80058764 00055844  7C 7F 1B 78 */	mr r31, r3
/* 80058768 00055848  4B FF FF D5 */	bl "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_enum"
/* 8005876C 0005584C  3C 80 80 29 */	lis r4, "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_survey"@ha
/* 80058770 00055850  7F E3 FB 78 */	mr r3, r31
/* 80058774 00055854  38 04 C5 E8 */	addi r0, r4, "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_survey"@l
/* 80058778 00055858  90 1F 00 04 */	stw r0, 0x4(r31)
/* 8005877C 0005585C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80058780 00055860  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058784 00055864  7C 08 03 A6 */	mtlr r0
/* 80058788 00055868  38 21 00 10 */	addi r1, r1, 0x10
/* 8005878C 0005586C  4E 80 00 20 */	blr
.endfn "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_attach::state_camera_attach()
.fn "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attachFv", local
/* 80058790 00055870  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80058794 00055874  7C 08 02 A6 */	mflr r0
/* 80058798 00055878  38 80 00 09 */	li r4, 0x9
/* 8005879C 0005587C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800587A0 00055880  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800587A4 00055884  7C 7F 1B 78 */	mr r31, r3
/* 800587A8 00055888  4B FF FF 95 */	bl "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_enum"
/* 800587AC 0005588C  3C 80 80 29 */	lis r4, "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attach"@ha
/* 800587B0 00055890  7F E3 FB 78 */	mr r3, r31
/* 800587B4 00055894  38 04 C5 CC */	addi r0, r4, "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attach"@l
/* 800587B8 00055898  90 1F 00 04 */	stw r0, 0x4(r31)
/* 800587BC 0005589C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800587C0 000558A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800587C4 000558A4  7C 08 03 A6 */	mtlr r0
/* 800587C8 000558A8  38 21 00 10 */	addi r1, r1, 0x10
/* 800587CC 000558AC  4E 80 00 20 */	blr
.endfn "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attachFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_seize::state_camera_seize()
.fn "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18state_camera_seizeFv", local
/* 800587D0 000558B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800587D4 000558B4  7C 08 02 A6 */	mflr r0
/* 800587D8 000558B8  38 80 00 08 */	li r4, 0x8
/* 800587DC 000558BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800587E0 000558C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800587E4 000558C4  7C 7F 1B 78 */	mr r31, r3
/* 800587E8 000558C8  4B FF FF 55 */	bl "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_enum"
/* 800587EC 000558CC  3C 80 80 29 */	lis r4, "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18state_camera_seize"@ha
/* 800587F0 000558D0  7F E3 FB 78 */	mr r3, r31
/* 800587F4 000558D4  38 04 C5 B0 */	addi r0, r4, "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18state_camera_seize"@l
/* 800587F8 000558D8  90 1F 00 04 */	stw r0, 0x4(r31)
/* 800587FC 000558DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80058800 000558E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058804 000558E4  7C 08 03 A6 */	mtlr r0
/* 80058808 000558E8  38 21 00 10 */	addi r1, r1, 0x10
/* 8005880C 000558EC  4E 80 00 20 */	blr
.endfn "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18state_camera_seizeFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_aim::state_camera_aim()
.fn "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimFv", local
/* 80058810 000558F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80058814 000558F4  7C 08 02 A6 */	mflr r0
/* 80058818 000558F8  38 80 00 07 */	li r4, 0x7
/* 8005881C 000558FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80058820 00055900  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80058824 00055904  7C 7F 1B 78 */	mr r31, r3
/* 80058828 00055908  4B FF FF 15 */	bl "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_enum"
/* 8005882C 0005590C  3C 80 80 29 */	lis r4, "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aim"@ha
/* 80058830 00055910  7F E3 FB 78 */	mr r3, r31
/* 80058834 00055914  38 04 C5 94 */	addi r0, r4, "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aim"@l
/* 80058838 00055918  90 1F 00 04 */	stw r0, 0x4(r31)
/* 8005883C 0005591C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80058840 00055920  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058844 00055924  7C 08 03 A6 */	mtlr r0
/* 80058848 00055928  38 21 00 10 */	addi r1, r1, 0x10
/* 8005884C 0005592C  4E 80 00 20 */	blr
.endfn "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_explode::state_missle_explode()
.fn "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFv", local
/* 80058850 00055930  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80058854 00055934  7C 08 02 A6 */	mflr r0
/* 80058858 00055938  38 80 00 06 */	li r4, 0x6
/* 8005885C 0005593C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80058860 00055940  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80058864 00055944  7C 7F 1B 78 */	mr r31, r3
/* 80058868 00055948  4B FF FE D5 */	bl "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_enum"
/* 8005886C 0005594C  3C 80 80 29 */	lis r4, "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode"@ha
/* 80058870 00055950  7F E3 FB 78 */	mr r3, r31
/* 80058874 00055954  38 04 C5 78 */	addi r0, r4, "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode"@l
/* 80058878 00055958  90 1F 00 04 */	stw r0, 0x4(r31)
/* 8005887C 0005595C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80058880 00055960  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058884 00055964  7C 08 03 A6 */	mtlr r0
/* 80058888 00055968  38 21 00 10 */	addi r1, r1, 0x10
/* 8005888C 0005596C  4E 80 00 20 */	blr
.endfn "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_fly::state_missle_fly()
.fn "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFv", local
/* 80058890 00055970  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80058894 00055974  7C 08 02 A6 */	mflr r0
/* 80058898 00055978  38 80 00 05 */	li r4, 0x5
/* 8005889C 0005597C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800588A0 00055980  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800588A4 00055984  7C 7F 1B 78 */	mr r31, r3
/* 800588A8 00055988  4B FF FE 95 */	bl "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_enum"
/* 800588AC 0005598C  3C 80 80 29 */	lis r4, "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_fly"@ha
/* 800588B0 00055990  7F E3 FB 78 */	mr r3, r31
/* 800588B4 00055994  38 04 C5 5C */	addi r0, r4, "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_fly"@l
/* 800588B8 00055998  90 1F 00 04 */	stw r0, 0x4(r31)
/* 800588BC 0005599C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800588C0 000559A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800588C4 000559A4  7C 08 03 A6 */	mtlr r0
/* 800588C8 000559A8  38 21 00 10 */	addi r1, r1, 0x10
/* 800588CC 000559AC  4E 80 00 20 */	blr
.endfn "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_appear::state_missle_appear()
.fn "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_missle_appearFv", local
/* 800588D0 000559B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800588D4 000559B4  7C 08 02 A6 */	mflr r0
/* 800588D8 000559B8  38 80 00 04 */	li r4, 0x4
/* 800588DC 000559BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800588E0 000559C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800588E4 000559C4  7C 7F 1B 78 */	mr r31, r3
/* 800588E8 000559C8  4B FF FE 55 */	bl "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_enum"
/* 800588EC 000559CC  3C 80 80 29 */	lis r4, "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_missle_appear"@ha
/* 800588F0 000559D0  7F E3 FB 78 */	mr r3, r31
/* 800588F4 000559D4  38 04 C5 40 */	addi r0, r4, "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_missle_appear"@l
/* 800588F8 000559D8  90 1F 00 04 */	stw r0, 0x4(r31)
/* 800588FC 000559DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80058900 000559E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058904 000559E4  7C 08 03 A6 */	mtlr r0
/* 80058908 000559E8  38 21 00 10 */	addi r1, r1, 0x10
/* 8005890C 000559EC  4E 80 00 20 */	blr
.endfn "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_missle_appearFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_player_wait::state_player_wait()
.fn "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_waitFv", local
/* 80058910 000559F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80058914 000559F4  7C 08 02 A6 */	mflr r0
/* 80058918 000559F8  38 80 00 03 */	li r4, 0x3
/* 8005891C 000559FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80058920 00055A00  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80058924 00055A04  7C 7F 1B 78 */	mr r31, r3
/* 80058928 00055A08  4B FF FE 15 */	bl "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_enum"
/* 8005892C 00055A0C  3C 80 80 29 */	lis r4, "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_wait"@ha
/* 80058930 00055A10  7F E3 FB 78 */	mr r3, r31
/* 80058934 00055A14  38 04 C5 24 */	addi r0, r4, "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_wait"@l
/* 80058938 00055A18  90 1F 00 04 */	stw r0, 0x4(r31)
/* 8005893C 00055A1C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80058940 00055A20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058944 00055A24  7C 08 03 A6 */	mtlr r0
/* 80058948 00055A28  38 21 00 10 */	addi r1, r1, 0x10
/* 8005894C 00055A2C  4E 80 00 20 */	blr
.endfn "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_waitFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_player_fire::state_player_fire()
.fn "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_fireFv", local
/* 80058950 00055A30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80058954 00055A34  7C 08 02 A6 */	mflr r0
/* 80058958 00055A38  38 80 00 02 */	li r4, 0x2
/* 8005895C 00055A3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80058960 00055A40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80058964 00055A44  7C 7F 1B 78 */	mr r31, r3
/* 80058968 00055A48  4B FF FD D5 */	bl "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_enum"
/* 8005896C 00055A4C  3C 80 80 29 */	lis r4, "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_fire"@ha
/* 80058970 00055A50  7F E3 FB 78 */	mr r3, r31
/* 80058974 00055A54  38 04 C5 08 */	addi r0, r4, "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_fire"@l
/* 80058978 00055A58  90 1F 00 04 */	stw r0, 0x4(r31)
/* 8005897C 00055A5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80058980 00055A60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058984 00055A64  7C 08 03 A6 */	mtlr r0
/* 80058988 00055A68  38 21 00 10 */	addi r1, r1, 0x10
/* 8005898C 00055A6C  4E 80 00 20 */	blr
.endfn "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_fireFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_player_aim::state_player_aim()
.fn "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_player_aimFv", local
/* 80058990 00055A70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80058994 00055A74  7C 08 02 A6 */	mflr r0
/* 80058998 00055A78  38 80 00 01 */	li r4, 0x1
/* 8005899C 00055A7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800589A0 00055A80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800589A4 00055A84  7C 7F 1B 78 */	mr r31, r3
/* 800589A8 00055A88  4B FF FD 95 */	bl "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_enum"
/* 800589AC 00055A8C  3C 80 80 29 */	lis r4, "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_player_aim"@ha
/* 800589B0 00055A90  7F E3 FB 78 */	mr r3, r31
/* 800589B4 00055A94  38 04 C4 EC */	addi r0, r4, "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_player_aim"@l
/* 800589B8 00055A98  90 1F 00 04 */	stw r0, 0x4(r31)
/* 800589BC 00055A9C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800589C0 00055AA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800589C4 00055AA4  7C 08 03 A6 */	mtlr r0
/* 800589C8 00055AA8  38 21 00 10 */	addi r1, r1, 0x10
/* 800589CC 00055AAC  4E 80 00 20 */	blr
.endfn "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_player_aimFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_player_halt::state_player_halt()
.fn "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_haltFv", local
/* 800589D0 00055AB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800589D4 00055AB4  7C 08 02 A6 */	mflr r0
/* 800589D8 00055AB8  38 80 00 00 */	li r4, 0x0
/* 800589DC 00055ABC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800589E0 00055AC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800589E4 00055AC4  7C 7F 1B 78 */	mr r31, r3
/* 800589E8 00055AC8  4B FF FD 55 */	bl "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_enum"
/* 800589EC 00055ACC  3C 80 80 29 */	lis r4, "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_halt"@ha
/* 800589F0 00055AD0  7F E3 FB 78 */	mr r3, r31
/* 800589F4 00055AD4  38 04 C4 D0 */	addi r0, r4, "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_halt"@l
/* 800589F8 00055AD8  90 1F 00 04 */	stw r0, 0x4(r31)
/* 800589FC 00055ADC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80058A00 00055AE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058A04 00055AE4  7C 08 03 A6 */	mtlr r0
/* 80058A08 00055AE8  38 21 00 10 */	addi r1, r1, 0x10
/* 80058A0C 00055AEC  4E 80 00 20 */	blr
.endfn "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_haltFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::init_missle_model()
.fn "init_missle_model__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 80058A10 00055AF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80058A14 00055AF4  7C 08 02 A6 */	mflr r0
/* 80058A18 00055AF8  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 80058A1C 00055AFC  38 63 53 3C */	addi r3, r3, "@stringBase0"@l
/* 80058A20 00055B00  90 01 00 14 */	stw r0, 0x14(r1)
/* 80058A24 00055B04  38 63 01 63 */	addi r3, r3, 0x163
/* 80058A28 00055B08  4B FF 37 ED */	bl xStrHash__FPCc
/* 80058A2C 00055B0C  38 80 00 00 */	li r4, 0x0
/* 80058A30 00055B10  4B FF 2C DD */	bl xSTFindAsset__FUiPUi
/* 80058A34 00055B14  38 80 00 00 */	li r4, 0x0
/* 80058A38 00055B18  4B FF CA 9D */	bl zEntRecurseModelInfo__FPvP4xEnt
/* 80058A3C 00055B1C  80 A3 00 14 */	lwz r5, 0x14(r3)
/* 80058A40 00055B20  3C 80 80 06 */	lis r4, "custom_bubble_render__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FP8RpAtomic"@ha
/* 80058A44 00055B24  38 04 83 14 */	addi r0, r4, "custom_bubble_render__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FP8RpAtomic"@l
/* 80058A48 00055B28  54 A4 07 32 */	rlwinm r4, r5, 0, 28, 25
/* 80058A4C 00055B2C  60 84 00 10 */	ori r4, r4, 0x10
/* 80058A50 00055B30  90 83 00 14 */	stw r4, 0x14(r3)
/* 80058A54 00055B34  80 83 00 10 */	lwz r4, 0x10(r3)
/* 80058A58 00055B38  90 04 00 48 */	stw r0, 0x48(r4)
/* 80058A5C 00055B3C  80 A3 00 10 */	lwz r5, 0x10(r3)
/* 80058A60 00055B40  80 05 00 48 */	lwz r0, 0x48(r5)
/* 80058A64 00055B44  28 00 00 00 */	cmplwi r0, 0x0
/* 80058A68 00055B48  40 82 00 10 */	bne .L_80058A78
/* 80058A6C 00055B4C  3C 80 80 21 */	lis r4, AtomicDefaultRenderCallBack@ha
/* 80058A70 00055B50  38 04 20 B0 */	addi r0, r4, AtomicDefaultRenderCallBack@l
/* 80058A74 00055B54  90 05 00 48 */	stw r0, 0x48(r5)
.L_80058A78:
/* 80058A78 00055B58  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058A7C 00055B5C  38 84 C2 A4 */	addi r4, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058A80 00055B60  90 64 00 68 */	stw r3, 0x68(r4)
/* 80058A84 00055B64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058A88 00055B68  7C 08 03 A6 */	mtlr r0
/* 80058A8C 00055B6C  38 21 00 10 */	addi r1, r1, 0x10
/* 80058A90 00055B70  4E 80 00 20 */	blr
.endfn "init_missle_model__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::reset_wake_ribbons()
.fn "reset_wake_ribbons__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 80058A94 00055B74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80058A98 00055B78  7C 08 02 A6 */	mflr r0
/* 80058A9C 00055B7C  3C 60 80 2E */	lis r3, "wake_ribbon__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058AA0 00055B80  90 01 00 14 */	stw r0, 0x14(r1)
/* 80058AA4 00055B84  38 63 C6 38 */	addi r3, r3, "wake_ribbon__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058AA8 00055B88  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80058AAC 00055B8C  4B FD 19 59 */	bl set_default_config__9xFXRibbonFv
/* 80058AB0 00055B90  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058AB4 00055B94  3C 80 80 2E */	lis r4, "wake_ribbon__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058AB8 00055B98  80 03 C2 A4 */	lwz r0, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l(r3)
/* 80058ABC 00055B9C  38 64 C6 38 */	addi r3, r4, "wake_ribbon__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058AC0 00055BA0  38 A0 00 05 */	li r5, 0x5
/* 80058AC4 00055BA4  38 80 00 02 */	li r4, 0x2
/* 80058AC8 00055BA8  54 00 05 AD */	rlwinm. r0, r0, 0, 22, 22
/* 80058ACC 00055BAC  90 A3 00 04 */	stw r5, 0x4(r3)
/* 80058AD0 00055BB0  90 83 00 08 */	stw r4, 0x8(r3)
/* 80058AD4 00055BB4  40 82 00 70 */	bne .L_80058B44
/* 80058AD8 00055BB8  3C 80 80 25 */	lis r4, "@stringBase0"@ha
/* 80058ADC 00055BBC  38 84 53 3C */	addi r4, r4, "@stringBase0"@l
/* 80058AE0 00055BC0  38 84 01 7B */	addi r4, r4, 0x17b
/* 80058AE4 00055BC4  4B FD 1F 29 */	bl set_texture__9xFXRibbonFPCc
/* 80058AE8 00055BC8  3C 80 80 2E */	lis r4, "wake_ribbon__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058AEC 00055BCC  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 80058AF0 00055BD0  38 84 C6 38 */	addi r4, r4, "wake_ribbon__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058AF4 00055BD4  3B E4 01 40 */	addi r31, r4, 0x140
/* 80058AF8 00055BD8  38 83 53 3C */	addi r4, r3, "@stringBase0"@l
/* 80058AFC 00055BDC  7F E3 FB 78 */	mr r3, r31
/* 80058B00 00055BE0  38 84 01 7B */	addi r4, r4, 0x17b
/* 80058B04 00055BE4  4B FD 1F 09 */	bl set_texture__9xFXRibbonFPCc
/* 80058B08 00055BE8  3C 60 80 2E */	lis r3, "wake_ribbon__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058B0C 00055BEC  3C 80 80 25 */	lis r4, "wake_ribbon_curve__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058B10 00055BF0  38 63 C6 38 */	addi r3, r3, "wake_ribbon__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058B14 00055BF4  38 A0 00 02 */	li r5, 0x2
/* 80058B18 00055BF8  38 84 52 3C */	addi r4, r4, "wake_ribbon_curve__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058B1C 00055BFC  4B FD 19 89 */	bl set_curve__9xFXRibbonFPCQ29xFXRibbon10curve_nodeUl
/* 80058B20 00055C00  3C 80 80 25 */	lis r4, "wake_ribbon_curve__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058B24 00055C04  7F E3 FB 78 */	mr r3, r31
/* 80058B28 00055C08  38 84 52 3C */	addi r4, r4, "wake_ribbon_curve__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058B2C 00055C0C  38 A0 00 02 */	li r5, 0x2
/* 80058B30 00055C10  4B FD 19 75 */	bl set_curve__9xFXRibbonFPCQ29xFXRibbon10curve_nodeUl
/* 80058B34 00055C14  C0 02 89 CC */	lfs f0, "@1729"@sda21(r2)
/* 80058B38 00055C18  3C 60 80 2E */	lis r3, "wake_ribbon__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058B3C 00055C1C  D0 03 C6 38 */	stfs f0, "wake_ribbon__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l(r3)
/* 80058B40 00055C20  48 00 00 6C */	b .L_80058BAC
.L_80058B44:
/* 80058B44 00055C24  3C 80 80 25 */	lis r4, "@stringBase0"@ha
/* 80058B48 00055C28  38 84 53 3C */	addi r4, r4, "@stringBase0"@l
/* 80058B4C 00055C2C  38 84 01 7B */	addi r4, r4, 0x17b
/* 80058B50 00055C30  4B FD 1E BD */	bl set_texture__9xFXRibbonFPCc
/* 80058B54 00055C34  3C 80 80 2E */	lis r4, "wake_ribbon__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058B58 00055C38  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 80058B5C 00055C3C  38 84 C6 38 */	addi r4, r4, "wake_ribbon__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058B60 00055C40  3B E4 01 40 */	addi r31, r4, 0x140
/* 80058B64 00055C44  38 83 53 3C */	addi r4, r3, "@stringBase0"@l
/* 80058B68 00055C48  7F E3 FB 78 */	mr r3, r31
/* 80058B6C 00055C4C  38 84 01 7B */	addi r4, r4, 0x17b
/* 80058B70 00055C50  4B FD 1E 9D */	bl set_texture__9xFXRibbonFPCc
/* 80058B74 00055C54  3C 60 80 2E */	lis r3, "wake_ribbon__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058B78 00055C58  3C 80 80 25 */	lis r4, "cheat_wake_ribbon_curve__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058B7C 00055C5C  38 63 C6 38 */	addi r3, r3, "wake_ribbon__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058B80 00055C60  38 A0 00 02 */	li r5, 0x2
/* 80058B84 00055C64  38 84 52 54 */	addi r4, r4, "cheat_wake_ribbon_curve__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058B88 00055C68  4B FD 19 1D */	bl set_curve__9xFXRibbonFPCQ29xFXRibbon10curve_nodeUl
/* 80058B8C 00055C6C  3C 80 80 25 */	lis r4, "cheat_wake_ribbon_curve__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058B90 00055C70  7F E3 FB 78 */	mr r3, r31
/* 80058B94 00055C74  38 84 52 54 */	addi r4, r4, "cheat_wake_ribbon_curve__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058B98 00055C78  38 A0 00 02 */	li r5, 0x2
/* 80058B9C 00055C7C  4B FD 19 09 */	bl set_curve__9xFXRibbonFPCQ29xFXRibbon10curve_nodeUl
/* 80058BA0 00055C80  C0 02 89 CC */	lfs f0, "@1729"@sda21(r2)
/* 80058BA4 00055C84  3C 60 80 2E */	lis r3, "wake_ribbon__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058BA8 00055C88  D0 03 C6 38 */	stfs f0, "wake_ribbon__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l(r3)
.L_80058BAC:
/* 80058BAC 00055C8C  3C 60 80 2E */	lis r3, "wake_ribbon__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058BB0 00055C90  C0 02 89 C0 */	lfs f0, "@1720"@sda21(r2)
/* 80058BB4 00055C94  38 83 C6 38 */	addi r4, r3, "wake_ribbon__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058BB8 00055C98  3B E4 01 40 */	addi r31, r4, 0x140
/* 80058BBC 00055C9C  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 80058BC0 00055CA0  7F E3 FB 78 */	mr r3, r31
/* 80058BC4 00055CA4  48 00 00 2D */	bl __as__Q29xFXRibbon6configFRCQ29xFXRibbon6config
/* 80058BC8 00055CA8  3C 60 80 2E */	lis r3, "wake_ribbon__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058BCC 00055CAC  38 63 C6 38 */	addi r3, r3, "wake_ribbon__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058BD0 00055CB0  4B FD 18 75 */	bl refresh_config__9xFXRibbonFv
/* 80058BD4 00055CB4  7F E3 FB 78 */	mr r3, r31
/* 80058BD8 00055CB8  4B FD 18 6D */	bl refresh_config__9xFXRibbonFv
/* 80058BDC 00055CBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058BE0 00055CC0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80058BE4 00055CC4  7C 08 03 A6 */	mtlr r0
/* 80058BE8 00055CC8  38 21 00 10 */	addi r1, r1, 0x10
/* 80058BEC 00055CCC  4E 80 00 20 */	blr
.endfn "reset_wake_ribbons__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# xFXRibbon::config::operator=(const xFXRibbon::config&)
.fn __as__Q29xFXRibbon6configFRCQ29xFXRibbon6config, weak
/* 80058BF0 00055CD0  C0 04 00 00 */	lfs f0, 0x0(r4)
/* 80058BF4 00055CD4  80 A4 00 04 */	lwz r5, 0x4(r4)
/* 80058BF8 00055CD8  D0 03 00 00 */	stfs f0, 0x0(r3)
/* 80058BFC 00055CDC  80 04 00 08 */	lwz r0, 0x8(r4)
/* 80058C00 00055CE0  90 A3 00 04 */	stw r5, 0x4(r3)
/* 80058C04 00055CE4  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 80058C08 00055CE8  90 03 00 08 */	stw r0, 0x8(r3)
/* 80058C0C 00055CEC  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 80058C10 00055CF0  4E 80 00 20 */	blr
.endfn __as__Q29xFXRibbon6configFRCQ29xFXRibbon6config

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::init_wake_ribbons()
.fn "init_wake_ribbons__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 80058C14 00055CF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80058C18 00055CF8  7C 08 02 A6 */	mflr r0
/* 80058C1C 00055CFC  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 80058C20 00055D00  3C 80 80 2E */	lis r4, "wake_ribbon__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058C24 00055D04  38 A3 53 3C */	addi r5, r3, "@stringBase0"@l
/* 80058C28 00055D08  90 01 00 14 */	stw r0, 0x14(r1)
/* 80058C2C 00055D0C  38 64 C6 38 */	addi r3, r4, "wake_ribbon__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058C30 00055D10  38 85 01 85 */	addi r4, r5, 0x185
/* 80058C34 00055D14  38 A5 01 93 */	addi r5, r5, 0x193
/* 80058C38 00055D18  4B FD 17 41 */	bl init__9xFXRibbonFPCcPCc
/* 80058C3C 00055D1C  3C 80 80 2E */	lis r4, "wake_ribbon__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058C40 00055D20  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 80058C44 00055D24  38 A3 53 3C */	addi r5, r3, "@stringBase0"@l
/* 80058C48 00055D28  38 64 C6 38 */	addi r3, r4, "wake_ribbon__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058C4C 00055D2C  38 63 01 40 */	addi r3, r3, 0x140
/* 80058C50 00055D30  38 85 01 B7 */	addi r4, r5, 0x1b7
/* 80058C54 00055D34  38 A5 01 C5 */	addi r5, r5, 0x1c5
/* 80058C58 00055D38  4B FD 17 21 */	bl init__9xFXRibbonFPCcPCc
/* 80058C5C 00055D3C  4B FF FE 39 */	bl "reset_wake_ribbons__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 80058C60 00055D40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058C64 00055D44  7C 08 03 A6 */	mtlr r0
/* 80058C68 00055D48  38 21 00 10 */	addi r1, r1, 0x10
/* 80058C6C 00055D4C  4E 80 00 20 */	blr
.endfn "init_wake_ribbons__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::reset_explode_decal()
.fn "reset_explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 80058C70 00055D50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80058C74 00055D54  7C 08 02 A6 */	mflr r0
/* 80058C78 00055D58  3C 60 80 2E */	lis r3, "explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058C7C 00055D5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80058C80 00055D60  38 63 C8 B8 */	addi r3, r3, "explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058C84 00055D64  48 12 38 A9 */	bl set_default_config__13xDecalEmitterFv
/* 80058C88 00055D68  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058C8C 00055D6C  3C 80 80 2E */	lis r4, "explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058C90 00055D70  80 03 C2 A4 */	lwz r0, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l(r3)
/* 80058C94 00055D74  38 64 C8 B8 */	addi r3, r4, "explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058C98 00055D78  38 C0 00 03 */	li r6, 0x3
/* 80058C9C 00055D7C  38 A0 00 05 */	li r5, 0x5
/* 80058CA0 00055D80  38 80 00 02 */	li r4, 0x2
/* 80058CA4 00055D84  54 00 05 AD */	rlwinm. r0, r0, 0, 22, 22
/* 80058CA8 00055D88  90 C3 00 00 */	stw r6, 0x0(r3)
/* 80058CAC 00055D8C  90 A3 00 08 */	stw r5, 0x8(r3)
/* 80058CB0 00055D90  90 83 00 0C */	stw r4, 0xc(r3)
/* 80058CB4 00055D94  40 82 00 38 */	bne .L_80058CEC
/* 80058CB8 00055D98  C0 02 89 C8 */	lfs f0, "@1728"@sda21(r2)
/* 80058CBC 00055D9C  3C 80 80 25 */	lis r4, "explode_curve__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058CC0 00055DA0  38 84 52 6C */	addi r4, r4, "explode_curve__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058CC4 00055DA4  38 A0 00 03 */	li r5, 0x3
/* 80058CC8 00055DA8  D0 03 00 04 */	stfs f0, 0x4(r3)
/* 80058CCC 00055DAC  48 12 3A DD */	bl set_curve__13xDecalEmitterFPCQ213xDecalEmitter10curve_nodeUl
/* 80058CD0 00055DB0  3C 80 80 25 */	lis r4, "@stringBase0"@ha
/* 80058CD4 00055DB4  3C 60 80 2E */	lis r3, "explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058CD8 00055DB8  38 84 53 3C */	addi r4, r4, "@stringBase0"@l
/* 80058CDC 00055DBC  38 63 C8 B8 */	addi r3, r3, "explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058CE0 00055DC0  38 84 01 E9 */	addi r4, r4, 0x1e9
/* 80058CE4 00055DC4  48 12 38 CD */	bl set_texture__13xDecalEmitterFPCc
/* 80058CE8 00055DC8  48 00 00 34 */	b .L_80058D1C
.L_80058CEC:
/* 80058CEC 00055DCC  C0 02 89 C8 */	lfs f0, "@1728"@sda21(r2)
/* 80058CF0 00055DD0  3C 80 80 25 */	lis r4, "cheat_explode_curve__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058CF4 00055DD4  38 84 52 90 */	addi r4, r4, "cheat_explode_curve__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058CF8 00055DD8  38 A0 00 03 */	li r5, 0x3
/* 80058CFC 00055DDC  D0 03 00 04 */	stfs f0, 0x4(r3)
/* 80058D00 00055DE0  48 12 3A A9 */	bl set_curve__13xDecalEmitterFPCQ213xDecalEmitter10curve_nodeUl
/* 80058D04 00055DE4  3C 80 80 25 */	lis r4, "@stringBase0"@ha
/* 80058D08 00055DE8  3C 60 80 2E */	lis r3, "explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058D0C 00055DEC  38 84 53 3C */	addi r4, r4, "@stringBase0"@l
/* 80058D10 00055DF0  38 63 C8 B8 */	addi r3, r3, "explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058D14 00055DF4  38 84 01 E9 */	addi r4, r4, 0x1e9
/* 80058D18 00055DF8  48 12 38 99 */	bl set_texture__13xDecalEmitterFPCc
.L_80058D1C:
/* 80058D1C 00055DFC  3C 60 80 2E */	lis r3, "explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058D20 00055E00  38 63 C8 B8 */	addi r3, r3, "explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058D24 00055E04  48 12 39 29 */	bl refresh_config__13xDecalEmitterFv
/* 80058D28 00055E08  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058D2C 00055E0C  7C 08 03 A6 */	mtlr r0
/* 80058D30 00055E10  38 21 00 10 */	addi r1, r1, 0x10
/* 80058D34 00055E14  4E 80 00 20 */	blr
.endfn "reset_explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::init_explode_decal()
.fn "init_explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 80058D38 00055E18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80058D3C 00055E1C  7C 08 02 A6 */	mflr r0
/* 80058D40 00055E20  3C A0 80 25 */	lis r5, "@stringBase0"@ha
/* 80058D44 00055E24  3C 60 80 2E */	lis r3, "explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058D48 00055E28  38 A5 53 3C */	addi r5, r5, "@stringBase0"@l
/* 80058D4C 00055E2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80058D50 00055E30  38 63 C8 B8 */	addi r3, r3, "explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058D54 00055E34  38 80 00 01 */	li r4, 0x1
/* 80058D58 00055E38  38 A5 01 FC */	addi r5, r5, 0x1fc
/* 80058D5C 00055E3C  48 12 37 75 */	bl init__13xDecalEmitterFiPCc
/* 80058D60 00055E40  3C 60 80 2E */	lis r3, "explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058D64 00055E44  38 63 C8 B8 */	addi r3, r3, "explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058D68 00055E48  48 12 37 C5 */	bl set_default_config__13xDecalEmitterFv
/* 80058D6C 00055E4C  38 00 00 03 */	li r0, 0x3
/* 80058D70 00055E50  3C 60 80 2E */	lis r3, "explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058D74 00055E54  94 03 C8 B8 */	stwu r0, "explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l(r3)
/* 80058D78 00055E58  3C 80 80 25 */	lis r4, "explode_curve__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058D7C 00055E5C  38 C0 00 05 */	li r6, 0x5
/* 80058D80 00055E60  38 00 00 02 */	li r0, 0x2
/* 80058D84 00055E64  C0 02 89 C8 */	lfs f0, "@1728"@sda21(r2)
/* 80058D88 00055E68  38 84 52 6C */	addi r4, r4, "explode_curve__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058D8C 00055E6C  38 A0 00 03 */	li r5, 0x3
/* 80058D90 00055E70  D0 03 00 04 */	stfs f0, 0x4(r3)
/* 80058D94 00055E74  90 C3 00 08 */	stw r6, 0x8(r3)
/* 80058D98 00055E78  90 03 00 0C */	stw r0, 0xc(r3)
/* 80058D9C 00055E7C  48 12 3A 0D */	bl set_curve__13xDecalEmitterFPCQ213xDecalEmitter10curve_nodeUl
/* 80058DA0 00055E80  3C 80 80 25 */	lis r4, "@stringBase0"@ha
/* 80058DA4 00055E84  3C 60 80 2E */	lis r3, "explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058DA8 00055E88  38 84 53 3C */	addi r4, r4, "@stringBase0"@l
/* 80058DAC 00055E8C  38 63 C8 B8 */	addi r3, r3, "explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058DB0 00055E90  38 84 01 E9 */	addi r4, r4, 0x1e9
/* 80058DB4 00055E94  48 12 37 FD */	bl set_texture__13xDecalEmitterFPCc
/* 80058DB8 00055E98  3C 60 80 2E */	lis r3, "explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058DBC 00055E9C  38 63 C8 B8 */	addi r3, r3, "explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058DC0 00055EA0  48 12 38 8D */	bl refresh_config__13xDecalEmitterFv
/* 80058DC4 00055EA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058DC8 00055EA8  7C 08 03 A6 */	mtlr r0
/* 80058DCC 00055EAC  38 21 00 10 */	addi r1, r1, 0x10
/* 80058DD0 00055EB0  4E 80 00 20 */	blr
.endfn "init_explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::init_shrapnel()
.fn "init_shrapnel__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 80058DD4 00055EB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80058DD8 00055EB8  7C 08 02 A6 */	mflr r0
/* 80058DDC 00055EBC  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 80058DE0 00055EC0  38 63 53 3C */	addi r3, r3, "@stringBase0"@l
/* 80058DE4 00055EC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80058DE8 00055EC8  38 63 02 14 */	addi r3, r3, 0x214
/* 80058DEC 00055ECC  4B FF 34 29 */	bl xStrHash__FPCc
/* 80058DF0 00055ED0  38 80 00 00 */	li r4, 0x0
/* 80058DF4 00055ED4  4B FF 29 19 */	bl xSTFindAsset__FUiPUi
/* 80058DF8 00055ED8  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058DFC 00055EDC  38 84 C2 A4 */	addi r4, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058E00 00055EE0  90 64 01 04 */	stw r3, 0x104(r4)
/* 80058E04 00055EE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80058E08 00055EE8  7C 08 03 A6 */	mtlr r0
/* 80058E0C 00055EEC  38 21 00 10 */	addi r1, r1, 0x10
/* 80058E10 00055EF0  4E 80 00 20 */	blr
.endfn "init_shrapnel__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::add_trail_sample(const xVec3&, const xVec3&, const xVec3&, const xVec3&, float)
.fn "add_trail_sample__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FRC5xVec3RC5xVec3RC5xVec3RC5xVec3f", local
/* 80058E14 00055EF4  94 21 FE F0 */	stwu r1, -0x110(r1)
/* 80058E18 00055EF8  7C 08 02 A6 */	mflr r0
/* 80058E1C 00055EFC  3C E0 80 29 */	lis r7, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80058E20 00055F00  90 01 01 14 */	stw r0, 0x114(r1)
/* 80058E24 00055F04  BF 21 00 F4 */	stmw r25, 0xf4(r1)
/* 80058E28 00055F08  3B 47 C2 A4 */	addi r26, r7, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80058E2C 00055F0C  3C E0 80 25 */	lis r7, ...rodata.0@ha
/* 80058E30 00055F10  7C 7B 1B 78 */	mr r27, r3
/* 80058E34 00055F14  7C 99 23 78 */	mr r25, r4
/* 80058E38 00055F18  7C BC 2B 78 */	mr r28, r5
/* 80058E3C 00055F1C  7C DD 33 78 */	mr r29, r6
/* 80058E40 00055F20  3B E7 50 B8 */	addi r31, r7, ...rodata.0@l
/* 80058E44 00055F24  81 0D 81 80 */	lwz r8, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 80058E48 00055F28  C0 1A 01 10 */	lfs f0, 0x110(r26)
/* 80058E4C 00055F2C  C0 48 00 FC */	lfs f2, 0xfc(r8)
/* 80058E50 00055F30  EC 21 00 BA */	fmadds f1, f1, f2, f0
/* 80058E54 00055F34  D0 3A 01 10 */	stfs f1, 0x110(r26)
/* 80058E58 00055F38  48 19 45 85 */	bl __cvt_fp2unsigned
/* 80058E5C 00055F3C  7C 7E 1B 79 */	mr. r30, r3
/* 80058E60 00055F40  41 82 01 E0 */	beq .L_80059040
/* 80058E64 00055F44  3C 00 43 30 */	lis r0, 0x4330
/* 80058E68 00055F48  81 3F 02 30 */	lwz r9, 0x230(r31)
/* 80058E6C 00055F4C  93 C1 00 E4 */	stw r30, 0xe4(r1)
/* 80058E70 00055F50  7F 63 DB 78 */	mr r3, r27
/* 80058E74 00055F54  81 1F 02 34 */	lwz r8, 0x234(r31)
/* 80058E78 00055F58  7F 84 E3 78 */	mr r4, r28
/* 80058E7C 00055F5C  90 01 00 E0 */	stw r0, 0xe0(r1)
/* 80058E80 00055F60  7F C5 F3 78 */	mr r5, r30
/* 80058E84 00055F64  C8 22 89 E0 */	lfd f1, "@2700"@sda21(r2)
/* 80058E88 00055F68  38 C1 00 A4 */	addi r6, r1, 0xa4
/* 80058E8C 00055F6C  C8 01 00 E0 */	lfd f0, 0xe0(r1)
/* 80058E90 00055F70  38 E0 00 00 */	li r7, 0x0
/* 80058E94 00055F74  C0 5A 01 10 */	lfs f2, 0x110(r26)
/* 80058E98 00055F78  EC 00 08 28 */	fsubs f0, f0, f1
/* 80058E9C 00055F7C  80 1F 02 38 */	lwz r0, 0x238(r31)
/* 80058EA0 00055F80  91 21 00 A4 */	stw r9, 0xa4(r1)
/* 80058EA4 00055F84  EC 02 00 28 */	fsubs f0, f2, f0
/* 80058EA8 00055F88  91 01 00 A8 */	stw r8, 0xa8(r1)
/* 80058EAC 00055F8C  90 01 00 AC */	stw r0, 0xac(r1)
/* 80058EB0 00055F90  D0 1A 01 10 */	stfs f0, 0x110(r26)
/* 80058EB4 00055F94  48 03 C0 6D */	bl zFX_SpawnBubbleTrail__FPC5xVec3PC5xVec3UiPC5xVec3PC5xVec3
/* 80058EB8 00055F98  80 AD 81 80 */	lwz r5, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 80058EBC 00055F9C  7F 24 CB 78 */	mr r4, r25
/* 80058EC0 00055FA0  38 61 00 74 */	addi r3, r1, 0x74
/* 80058EC4 00055FA4  C0 25 01 00 */	lfs f1, 0x100(r5)
/* 80058EC8 00055FA8  4B FB 22 59 */	bl __ml__5xVec3CFf
/* 80058ECC 00055FAC  80 E1 00 74 */	lwz r7, 0x74(r1)
/* 80058ED0 00055FB0  7F A4 EB 78 */	mr r4, r29
/* 80058ED4 00055FB4  80 C1 00 78 */	lwz r6, 0x78(r1)
/* 80058ED8 00055FB8  38 61 00 68 */	addi r3, r1, 0x68
/* 80058EDC 00055FBC  80 01 00 7C */	lwz r0, 0x7c(r1)
/* 80058EE0 00055FC0  80 AD 81 80 */	lwz r5, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 80058EE4 00055FC4  90 E1 00 98 */	stw r7, 0x98(r1)
/* 80058EE8 00055FC8  C0 25 01 00 */	lfs f1, 0x100(r5)
/* 80058EEC 00055FCC  90 C1 00 9C */	stw r6, 0x9c(r1)
/* 80058EF0 00055FD0  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 80058EF4 00055FD4  4B FB 22 2D */	bl __ml__5xVec3CFf
/* 80058EF8 00055FD8  83 41 00 68 */	lwz r26, 0x68(r1)
/* 80058EFC 00055FDC  7F 64 DB 78 */	mr r4, r27
/* 80058F00 00055FE0  81 81 00 6C */	lwz r12, 0x6c(r1)
/* 80058F04 00055FE4  38 61 00 5C */	addi r3, r1, 0x5c
/* 80058F08 00055FE8  81 61 00 70 */	lwz r11, 0x70(r1)
/* 80058F0C 00055FEC  38 A1 00 98 */	addi r5, r1, 0x98
/* 80058F10 00055FF0  81 5F 02 3C */	lwz r10, 0x23c(r31)
/* 80058F14 00055FF4  81 3F 02 40 */	lwz r9, 0x240(r31)
/* 80058F18 00055FF8  81 1F 02 44 */	lwz r8, 0x244(r31)
/* 80058F1C 00055FFC  80 FF 02 48 */	lwz r7, 0x248(r31)
/* 80058F20 00056000  80 DF 02 4C */	lwz r6, 0x24c(r31)
/* 80058F24 00056004  80 1F 02 50 */	lwz r0, 0x250(r31)
/* 80058F28 00056008  93 41 00 8C */	stw r26, 0x8c(r1)
/* 80058F2C 0005600C  91 81 00 90 */	stw r12, 0x90(r1)
/* 80058F30 00056010  91 61 00 94 */	stw r11, 0x94(r1)
/* 80058F34 00056014  91 41 00 C8 */	stw r10, 0xc8(r1)
/* 80058F38 00056018  91 21 00 CC */	stw r9, 0xcc(r1)
/* 80058F3C 0005601C  91 01 00 D0 */	stw r8, 0xd0(r1)
/* 80058F40 00056020  90 E1 00 D4 */	stw r7, 0xd4(r1)
/* 80058F44 00056024  90 C1 00 D8 */	stw r6, 0xd8(r1)
/* 80058F48 00056028  90 01 00 DC */	stw r0, 0xdc(r1)
/* 80058F4C 0005602C  4B FB C4 95 */	bl __pl__5xVec3CFRC5xVec3
/* 80058F50 00056030  80 E1 00 5C */	lwz r7, 0x5c(r1)
/* 80058F54 00056034  7F 64 DB 78 */	mr r4, r27
/* 80058F58 00056038  80 C1 00 60 */	lwz r6, 0x60(r1)
/* 80058F5C 0005603C  38 61 00 50 */	addi r3, r1, 0x50
/* 80058F60 00056040  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80058F64 00056044  38 A1 00 98 */	addi r5, r1, 0x98
/* 80058F68 00056048  90 E1 00 C8 */	stw r7, 0xc8(r1)
/* 80058F6C 0005604C  90 C1 00 CC */	stw r6, 0xcc(r1)
/* 80058F70 00056050  90 01 00 D0 */	stw r0, 0xd0(r1)
/* 80058F74 00056054  4B FB 22 59 */	bl __mi__5xVec3CFRC5xVec3
/* 80058F78 00056058  83 61 00 50 */	lwz r27, 0x50(r1)
/* 80058F7C 0005605C  7F 84 E3 78 */	mr r4, r28
/* 80058F80 00056060  81 81 00 54 */	lwz r12, 0x54(r1)
/* 80058F84 00056064  38 61 00 44 */	addi r3, r1, 0x44
/* 80058F88 00056068  81 61 00 58 */	lwz r11, 0x58(r1)
/* 80058F8C 0005606C  38 A1 00 8C */	addi r5, r1, 0x8c
/* 80058F90 00056070  81 5F 02 54 */	lwz r10, 0x254(r31)
/* 80058F94 00056074  81 3F 02 58 */	lwz r9, 0x258(r31)
/* 80058F98 00056078  81 1F 02 5C */	lwz r8, 0x25c(r31)
/* 80058F9C 0005607C  80 FF 02 60 */	lwz r7, 0x260(r31)
/* 80058FA0 00056080  80 DF 02 64 */	lwz r6, 0x264(r31)
/* 80058FA4 00056084  80 1F 02 68 */	lwz r0, 0x268(r31)
/* 80058FA8 00056088  93 61 00 D4 */	stw r27, 0xd4(r1)
/* 80058FAC 0005608C  91 81 00 D8 */	stw r12, 0xd8(r1)
/* 80058FB0 00056090  91 61 00 DC */	stw r11, 0xdc(r1)
/* 80058FB4 00056094  91 41 00 B0 */	stw r10, 0xb0(r1)
/* 80058FB8 00056098  91 21 00 B4 */	stw r9, 0xb4(r1)
/* 80058FBC 0005609C  91 01 00 B8 */	stw r8, 0xb8(r1)
/* 80058FC0 000560A0  90 E1 00 BC */	stw r7, 0xbc(r1)
/* 80058FC4 000560A4  90 C1 00 C0 */	stw r6, 0xc0(r1)
/* 80058FC8 000560A8  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 80058FCC 000560AC  4B FB C4 15 */	bl __pl__5xVec3CFRC5xVec3
/* 80058FD0 000560B0  80 E1 00 44 */	lwz r7, 0x44(r1)
/* 80058FD4 000560B4  7F 84 E3 78 */	mr r4, r28
/* 80058FD8 000560B8  80 C1 00 48 */	lwz r6, 0x48(r1)
/* 80058FDC 000560BC  38 61 00 38 */	addi r3, r1, 0x38
/* 80058FE0 000560C0  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 80058FE4 000560C4  38 A1 00 8C */	addi r5, r1, 0x8c
/* 80058FE8 000560C8  90 E1 00 B0 */	stw r7, 0xb0(r1)
/* 80058FEC 000560CC  90 C1 00 B4 */	stw r6, 0xb4(r1)
/* 80058FF0 000560D0  90 01 00 B8 */	stw r0, 0xb8(r1)
/* 80058FF4 000560D4  4B FB 21 D9 */	bl __mi__5xVec3CFRC5xVec3
/* 80058FF8 000560D8  80 C1 00 38 */	lwz r6, 0x38(r1)
/* 80058FFC 000560DC  7F C5 F3 78 */	mr r5, r30
/* 80059000 000560E0  81 01 00 3C */	lwz r8, 0x3c(r1)
/* 80059004 000560E4  38 61 00 C8 */	addi r3, r1, 0xc8
/* 80059008 000560E8  80 01 00 40 */	lwz r0, 0x40(r1)
/* 8005900C 000560EC  38 81 00 B0 */	addi r4, r1, 0xb0
/* 80059010 000560F0  90 C1 00 BC */	stw r6, 0xbc(r1)
/* 80059014 000560F4  38 C1 00 A4 */	addi r6, r1, 0xa4
/* 80059018 000560F8  38 E0 00 00 */	li r7, 0x0
/* 8005901C 000560FC  91 01 00 C0 */	stw r8, 0xc0(r1)
/* 80059020 00056100  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 80059024 00056104  48 03 BE FD */	bl zFX_SpawnBubbleTrail__FPC5xVec3PC5xVec3UiPC5xVec3PC5xVec3
/* 80059028 00056108  7F C5 F3 78 */	mr r5, r30
/* 8005902C 0005610C  38 61 00 D4 */	addi r3, r1, 0xd4
/* 80059030 00056110  38 81 00 BC */	addi r4, r1, 0xbc
/* 80059034 00056114  38 C1 00 A4 */	addi r6, r1, 0xa4
/* 80059038 00056118  38 E0 00 00 */	li r7, 0x0
/* 8005903C 0005611C  48 03 BE E5 */	bl zFX_SpawnBubbleTrail__FPC5xVec3PC5xVec3UiPC5xVec3PC5xVec3
.L_80059040:
/* 80059040 00056120  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80059044 00056124  80 AD 81 80 */	lwz r5, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 80059048 00056128  80 03 C2 A4 */	lwz r0, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l(r3)
/* 8005904C 0005612C  7F A4 EB 78 */	mr r4, r29
/* 80059050 00056130  C0 25 01 04 */	lfs f1, 0x104(r5)
/* 80059054 00056134  38 61 00 2C */	addi r3, r1, 0x2c
/* 80059058 00056138  54 1A C7 FE */	extrwi r26, r0, 1, 23
/* 8005905C 0005613C  4B FB 20 C5 */	bl __ml__5xVec3CFf
/* 80059060 00056140  80 E1 00 2C */	lwz r7, 0x2c(r1)
/* 80059064 00056144  7F 84 E3 78 */	mr r4, r28
/* 80059068 00056148  80 C1 00 30 */	lwz r6, 0x30(r1)
/* 8005906C 0005614C  38 61 00 20 */	addi r3, r1, 0x20
/* 80059070 00056150  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80059074 00056154  38 A1 00 80 */	addi r5, r1, 0x80
/* 80059078 00056158  90 E1 00 80 */	stw r7, 0x80(r1)
/* 8005907C 0005615C  90 C1 00 84 */	stw r6, 0x84(r1)
/* 80059080 00056160  90 01 00 88 */	stw r0, 0x88(r1)
/* 80059084 00056164  4B FB C3 5D */	bl __pl__5xVec3CFRC5xVec3
/* 80059088 00056168  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005908C 0005616C  3C 60 80 2E */	lis r3, "wake_ribbon__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80059090 00056170  38 63 C6 38 */	addi r3, r3, "wake_ribbon__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80059094 00056174  7F A5 EB 78 */	mr r5, r29
/* 80059098 00056178  FC 40 08 90 */	fmr f2, f1
/* 8005909C 0005617C  7F 46 D3 78 */	mr r6, r26
/* 800590A0 00056180  38 81 00 20 */	addi r4, r1, 0x20
/* 800590A4 00056184  4B FD 14 3D */	bl insert__9xFXRibbonFRC5xVec3RC5xVec3ffUi
/* 800590A8 00056188  7F A4 EB 78 */	mr r4, r29
/* 800590AC 0005618C  38 61 00 08 */	addi r3, r1, 0x8
/* 800590B0 00056190  48 00 6E 79 */	bl __mi__5xVec3CFv
/* 800590B4 00056194  7F 84 E3 78 */	mr r4, r28
/* 800590B8 00056198  38 61 00 14 */	addi r3, r1, 0x14
/* 800590BC 0005619C  38 A1 00 80 */	addi r5, r1, 0x80
/* 800590C0 000561A0  4B FB 21 0D */	bl __mi__5xVec3CFRC5xVec3
/* 800590C4 000561A4  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 800590C8 000561A8  3C 60 80 2E */	lis r3, "wake_ribbon__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 800590CC 000561AC  38 63 C6 38 */	addi r3, r3, "wake_ribbon__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 800590D0 000561B0  7F 46 D3 78 */	mr r6, r26
/* 800590D4 000561B4  FC 40 08 90 */	fmr f2, f1
/* 800590D8 000561B8  38 63 01 40 */	addi r3, r3, 0x140
/* 800590DC 000561BC  38 81 00 14 */	addi r4, r1, 0x14
/* 800590E0 000561C0  38 A1 00 08 */	addi r5, r1, 0x8
/* 800590E4 000561C4  4B FD 13 FD */	bl insert__9xFXRibbonFRC5xVec3RC5xVec3ffUi
/* 800590E8 000561C8  BB 21 00 F4 */	lmw r25, 0xf4(r1)
/* 800590EC 000561CC  80 01 01 14 */	lwz r0, 0x114(r1)
/* 800590F0 000561D0  7C 08 03 A6 */	mtlr r0
/* 800590F4 000561D4  38 21 01 10 */	addi r1, r1, 0x110
/* 800590F8 000561D8  4E 80 00 20 */	blr
.endfn "add_trail_sample__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FRC5xVec3RC5xVec3RC5xVec3RC5xVec3f"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::update_trail(float)
.fn "update_trail__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Ff", local
/* 800590FC 000561DC  94 21 FE 90 */	stwu r1, -0x170(r1)
/* 80059100 000561E0  7C 08 02 A6 */	mflr r0
/* 80059104 000561E4  90 01 01 74 */	stw r0, 0x174(r1)
/* 80059108 000561E8  DB E1 01 60 */	stfd f31, 0x160(r1)
/* 8005910C 000561EC  F3 E1 01 68 */	psq_st f31, 0x168(r1), 0, qr0
/* 80059110 000561F0  DB C1 01 50 */	stfd f30, 0x150(r1)
/* 80059114 000561F4  F3 C1 01 58 */	psq_st f30, 0x158(r1), 0, qr0
/* 80059118 000561F8  DB A1 01 40 */	stfd f29, 0x140(r1)
/* 8005911C 000561FC  F3 A1 01 48 */	psq_st f29, 0x148(r1), 0, qr0
/* 80059120 00056200  BF 21 01 24 */	stmw r25, 0x124(r1)
/* 80059124 00056204  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80059128 00056208  FF A0 08 90 */	fmr f29, f1
/* 8005912C 0005620C  38 83 C2 A4 */	addi r4, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80059130 00056210  80 04 00 00 */	lwz r0, 0x0(r4)
/* 80059134 00056214  54 00 06 31 */	rlwinm. r0, r0, 0, 24, 24
/* 80059138 00056218  41 82 01 B0 */	beq .L_800592E8
/* 8005913C 0005621C  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 80059140 00056220  C0 04 01 0C */	lfs f0, 0x10c(r4)
/* 80059144 00056224  C0 23 00 F8 */	lfs f1, 0xf8(r3)
/* 80059148 00056228  EC 5D 00 7A */	fmadds f2, f29, f1, f0
/* 8005914C 0005622C  FC 00 10 1E */	fctiwz f0, f2
/* 80059150 00056230  D0 44 01 0C */	stfs f2, 0x10c(r4)
/* 80059154 00056234  D8 01 01 18 */	stfd f0, 0x118(r1)
/* 80059158 00056238  83 E1 01 1C */	lwz r31, 0x11c(r1)
/* 8005915C 0005623C  2C 1F 00 00 */	cmpwi r31, 0x0
/* 80059160 00056240  41 81 00 14 */	bgt .L_80059174
/* 80059164 00056244  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 80059168 00056248  3B E0 00 01 */	li r31, 0x1
/* 8005916C 0005624C  D0 04 01 0C */	stfs f0, 0x10c(r4)
/* 80059170 00056250  48 00 00 28 */	b .L_80059198
.L_80059174:
/* 80059174 00056254  6F E3 80 00 */	xoris r3, r31, 0x8000
/* 80059178 00056258  3C 00 43 30 */	lis r0, 0x4330
/* 8005917C 0005625C  90 61 01 1C */	stw r3, 0x11c(r1)
/* 80059180 00056260  C8 22 89 E8 */	lfd f1, "@2733"@sda21(r2)
/* 80059184 00056264  90 01 01 18 */	stw r0, 0x118(r1)
/* 80059188 00056268  C8 01 01 18 */	lfd f0, 0x118(r1)
/* 8005918C 0005626C  EC 00 08 28 */	fsubs f0, f0, f1
/* 80059190 00056270  EC 02 00 28 */	fsubs f0, f2, f0
/* 80059194 00056274  D0 04 01 0C */	stfs f0, 0x10c(r4)
.L_80059198:
/* 80059198 00056278  38 61 00 58 */	addi r3, r1, 0x58
/* 8005919C 0005627C  38 81 00 48 */	addi r4, r1, 0x48
/* 800591A0 00056280  4B FF EA 85 */	bl "refresh_trail__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FR7xMat4x3R5xQuat"
/* 800591A4 00056284  6F E3 80 00 */	xoris r3, r31, 0x8000
/* 800591A8 00056288  3C 00 43 30 */	lis r0, 0x4330
/* 800591AC 0005628C  90 61 01 1C */	stw r3, 0x11c(r1)
/* 800591B0 00056290  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 800591B4 00056294  38 A3 C2 A4 */	addi r5, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 800591B8 00056298  C8 22 89 E8 */	lfd f1, "@2733"@sda21(r2)
/* 800591BC 0005629C  90 01 01 18 */	stw r0, 0x118(r1)
/* 800591C0 000562A0  38 61 00 14 */	addi r3, r1, 0x14
/* 800591C4 000562A4  C0 42 89 C0 */	lfs f2, "@1720"@sda21(r2)
/* 800591C8 000562A8  38 81 00 88 */	addi r4, r1, 0x88
/* 800591CC 000562AC  C8 01 01 18 */	lfd f0, 0x118(r1)
/* 800591D0 000562B0  38 A5 01 44 */	addi r5, r5, 0x144
/* 800591D4 000562B4  EC 00 08 28 */	fsubs f0, f0, f1
/* 800591D8 000562B8  EF E2 00 24 */	fdivs f31, f2, f0
/* 800591DC 000562BC  EF DD 07 F2 */	fmuls f30, f29, f31
/* 800591E0 000562C0  4B FB 1F ED */	bl __mi__5xVec3CFRC5xVec3
/* 800591E4 000562C4  FC 20 F8 90 */	fmr f1, f31
/* 800591E8 000562C8  38 61 00 20 */	addi r3, r1, 0x20
/* 800591EC 000562CC  38 81 00 14 */	addi r4, r1, 0x14
/* 800591F0 000562D0  4B FB 1F 31 */	bl __ml__5xVec3CFf
/* 800591F4 000562D4  80 81 00 20 */	lwz r4, 0x20(r1)
/* 800591F8 000562D8  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 800591FC 000562DC  80 A1 00 24 */	lwz r5, 0x24(r1)
/* 80059200 000562E0  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80059204 000562E4  80 01 00 28 */	lwz r0, 0x28(r1)
/* 80059208 000562E8  3B C3 01 14 */	addi r30, r3, 0x114
/* 8005920C 000562EC  FF A0 F8 90 */	fmr f29, f31
/* 80059210 000562F0  90 81 00 3C */	stw r4, 0x3c(r1)
/* 80059214 000562F4  7F C4 F3 78 */	mr r4, r30
/* 80059218 000562F8  38 61 00 98 */	addi r3, r1, 0x98
/* 8005921C 000562FC  90 A1 00 40 */	stw r5, 0x40(r1)
/* 80059220 00056300  3B 80 00 00 */	li r28, 0x0
/* 80059224 00056304  90 01 00 44 */	stw r0, 0x44(r1)
/* 80059228 00056308  4B FB 23 45 */	bl __as__7xMat4x3FRC7xMat4x3
/* 8005922C 0005630C  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80059230 00056310  3B 60 00 00 */	li r27, 0x0
/* 80059234 00056314  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80059238 00056318  3B A3 01 54 */	addi r29, r3, 0x154
/* 8005923C 0005631C  48 00 00 7C */	b .L_800592B8
.L_80059240:
/* 80059240 00056320  57 83 30 32 */	slwi r3, r28, 6
/* 80059244 00056324  6B 9C 00 01 */	xori r28, r28, 0x1
/* 80059248 00056328  3B 41 00 98 */	addi r26, r1, 0x98
/* 8005924C 0005632C  FC 20 E8 90 */	fmr f1, f29
/* 80059250 00056330  7F 59 D3 78 */	mr r25, r26
/* 80059254 00056334  57 80 30 32 */	slwi r0, r28, 6
/* 80059258 00056338  7F 5A 1A 14 */	add r26, r26, r3
/* 8005925C 0005633C  7F A4 EB 78 */	mr r4, r29
/* 80059260 00056340  7F 39 02 14 */	add r25, r25, r0
/* 80059264 00056344  38 61 00 2C */	addi r3, r1, 0x2c
/* 80059268 00056348  38 A1 00 48 */	addi r5, r1, 0x48
/* 8005926C 0005634C  4B FD 9E 65 */	bl xQuatSlerp__FP5xQuatPC5xQuatPC5xQuatf
/* 80059270 00056350  7F 24 CB 78 */	mr r4, r25
/* 80059274 00056354  38 61 00 2C */	addi r3, r1, 0x2c
/* 80059278 00056358  4B FD 9C 89 */	bl xQuatToMat__FPC5xQuatP7xMat3x3
/* 8005927C 0005635C  38 61 00 08 */	addi r3, r1, 0x8
/* 80059280 00056360  38 9A 00 30 */	addi r4, r26, 0x30
/* 80059284 00056364  38 A1 00 3C */	addi r5, r1, 0x3c
/* 80059288 00056368  4B FB C1 59 */	bl __pl__5xVec3CFRC5xVec3
/* 8005928C 0005636C  38 79 00 30 */	addi r3, r25, 0x30
/* 80059290 00056370  38 81 00 08 */	addi r4, r1, 0x8
/* 80059294 00056374  4B FB 1F D1 */	bl __as__5xVec3FRC5xVec3
/* 80059298 00056378  FC 20 F0 90 */	fmr f1, f30
/* 8005929C 0005637C  7F 44 D3 78 */	mr r4, r26
/* 800592A0 00056380  7F 26 CB 78 */	mr r6, r25
/* 800592A4 00056384  38 7A 00 30 */	addi r3, r26, 0x30
/* 800592A8 00056388  38 B9 00 30 */	addi r5, r25, 0x30
/* 800592AC 0005638C  4B FF FB 69 */	bl "add_trail_sample__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FRC5xVec3RC5xVec3RC5xVec3RC5xVec3f"
/* 800592B0 00056390  EF BD F8 2A */	fadds f29, f29, f31
/* 800592B4 00056394  3B 7B 00 01 */	addi r27, r27, 0x1
.L_800592B8:
/* 800592B8 00056398  7C 1B F8 00 */	cmpw r27, r31
/* 800592BC 0005639C  41 80 FF 84 */	blt .L_80059240
/* 800592C0 000563A0  7F C3 F3 78 */	mr r3, r30
/* 800592C4 000563A4  38 81 00 58 */	addi r4, r1, 0x58
/* 800592C8 000563A8  4B FB 22 A5 */	bl __as__7xMat4x3FRC7xMat4x3
/* 800592CC 000563AC  7F A3 EB 78 */	mr r3, r29
/* 800592D0 000563B0  38 81 00 48 */	addi r4, r1, 0x48
/* 800592D4 000563B4  4B FB 54 19 */	bl __as__5xQuatFRC5xQuat
/* 800592D8 000563B8  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 800592DC 000563BC  84 03 C2 A4 */	lwzu r0, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l(r3)
/* 800592E0 000563C0  54 00 06 2C */	rlwinm r0, r0, 0, 24, 22
/* 800592E4 000563C4  90 03 00 00 */	stw r0, 0x0(r3)
.L_800592E8:
/* 800592E8 000563C8  E3 E1 01 68 */	psq_l f31, 0x168(r1), 0, qr0
/* 800592EC 000563CC  CB E1 01 60 */	lfd f31, 0x160(r1)
/* 800592F0 000563D0  E3 C1 01 58 */	psq_l f30, 0x158(r1), 0, qr0
/* 800592F4 000563D4  CB C1 01 50 */	lfd f30, 0x150(r1)
/* 800592F8 000563D8  E3 A1 01 48 */	psq_l f29, 0x148(r1), 0, qr0
/* 800592FC 000563DC  CB A1 01 40 */	lfd f29, 0x140(r1)
/* 80059300 000563E0  BB 21 01 24 */	lmw r25, 0x124(r1)
/* 80059304 000563E4  80 01 01 74 */	lwz r0, 0x174(r1)
/* 80059308 000563E8  7C 08 03 A6 */	mtlr r0
/* 8005930C 000563EC  38 21 01 70 */	addi r1, r1, 0x170
/* 80059310 000563F0  4E 80 00 20 */	blr
.endfn "update_trail__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Ff"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::refresh_missle_model()
.fn "refresh_missle_model__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 80059314 000563F4  4E 80 00 20 */	blr
.endfn "refresh_missle_model__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::update_missle(xScene&, float)
.fn "update_missle__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FR6xScenef", local
/* 80059318 000563F8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005931C 000563FC  7C 08 02 A6 */	mflr r0
/* 80059320 00056400  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80059324 00056404  90 01 00 24 */	stw r0, 0x24(r1)
/* 80059328 00056408  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005932C 0005640C  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 80059330 00056410  FF E0 08 90 */	fmr f31, f1
/* 80059334 00056414  93 E1 00 14 */	stw r31, 0x14(r1)
/* 80059338 00056418  83 E3 00 68 */	lwz r31, 0x68(r3)
/* 8005933C 0005641C  A0 1F 00 44 */	lhz r0, 0x44(r31)
/* 80059340 00056420  54 00 07 BD */	rlwinm. r0, r0, 0, 30, 30
/* 80059344 00056424  41 82 00 1C */	beq .L_80059360
/* 80059348 00056428  7F E3 FB 78 */	mr r3, r31
/* 8005934C 0005642C  4B FD B1 81 */	bl xModelUpdate__FP14xModelInstancef
/* 80059350 00056430  7F E3 FB 78 */	mr r3, r31
/* 80059354 00056434  4B FD B3 5D */	bl xModelEval__FP14xModelInstance
/* 80059358 00056438  FC 20 F8 90 */	fmr f1, f31
/* 8005935C 0005643C  4B FF FD A1 */	bl "update_trail__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Ff"
.L_80059360:
/* 80059360 00056440  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80059364 00056444  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80059368 00056448  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8005936C 0005644C  7C 08 03 A6 */	mtlr r0
/* 80059370 00056450  38 21 00 20 */	addi r1, r1, 0x20
/* 80059374 00056454  4E 80 00 20 */	blr
.endfn "update_missle__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FR6xScenef"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::render_missle()
.fn "render_missle__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 80059378 00056458  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005937C 0005645C  7C 08 02 A6 */	mflr r0
/* 80059380 00056460  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80059384 00056464  90 01 00 14 */	stw r0, 0x14(r1)
/* 80059388 00056468  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005938C 0005646C  80 63 00 68 */	lwz r3, 0x68(r3)
/* 80059390 00056470  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 80059394 00056474  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80059398 00056478  41 82 00 08 */	beq .L_800593A0
/* 8005939C 0005647C  4B FD B5 A9 */	bl xModelRender__FP14xModelInstance
.L_800593A0:
/* 800593A0 00056480  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800593A4 00056484  7C 08 03 A6 */	mtlr r0
/* 800593A8 00056488  38 21 00 10 */	addi r1, r1, 0x10
/* 800593AC 0005648C  4E 80 00 20 */	blr
.endfn "render_missle__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::load_model(unsigned int)
.fn "load_model__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FUi", local
/* 800593B0 00056490  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800593B4 00056494  7C 08 02 A6 */	mflr r0
/* 800593B8 00056498  3C 80 80 25 */	lis r4, "@stringBase0"@ha
/* 800593BC 0005649C  90 01 00 24 */	stw r0, 0x24(r1)
/* 800593C0 000564A0  38 84 53 3C */	addi r4, r4, "@stringBase0"@l
/* 800593C4 000564A4  38 84 02 33 */	addi r4, r4, 0x233
/* 800593C8 000564A8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800593CC 000564AC  7C 7F 1B 78 */	mr r31, r3
/* 800593D0 000564B0  4B FF 2E CD */	bl xStrHashCat__FUiPCc
/* 800593D4 000564B4  38 81 00 08 */	addi r4, r1, 0x8
/* 800593D8 000564B8  4B FF 23 35 */	bl xSTFindAsset__FUiPUi
/* 800593DC 000564BC  28 03 00 00 */	cmplwi r3, 0x0
/* 800593E0 000564C0  41 82 00 10 */	beq .L_800593F0
/* 800593E4 000564C4  38 80 00 00 */	li r4, 0x0
/* 800593E8 000564C8  4B FF C0 ED */	bl zEntRecurseModelInfo__FPvP4xEnt
/* 800593EC 000564CC  48 00 00 58 */	b .L_80059444
.L_800593F0:
/* 800593F0 000564D0  7F E3 FB 78 */	mr r3, r31
/* 800593F4 000564D4  38 81 00 08 */	addi r4, r1, 0x8
/* 800593F8 000564D8  4B FF 23 15 */	bl xSTFindAsset__FUiPUi
/* 800593FC 000564DC  28 03 00 00 */	cmplwi r3, 0x0
/* 80059400 000564E0  40 82 00 20 */	bne .L_80059420
/* 80059404 000564E4  3C 80 80 25 */	lis r4, "@stringBase0"@ha
/* 80059408 000564E8  7F E3 FB 78 */	mr r3, r31
/* 8005940C 000564EC  38 84 53 3C */	addi r4, r4, "@stringBase0"@l
/* 80059410 000564F0  38 84 02 39 */	addi r4, r4, 0x239
/* 80059414 000564F4  4B FF 2E 89 */	bl xStrHashCat__FUiPCc
/* 80059418 000564F8  38 81 00 08 */	addi r4, r1, 0x8
/* 8005941C 000564FC  4B FF 22 F1 */	bl xSTFindAsset__FUiPUi
.L_80059420:
/* 80059420 00056500  28 03 00 00 */	cmplwi r3, 0x0
/* 80059424 00056504  40 82 00 0C */	bne .L_80059430
/* 80059428 00056508  38 60 00 00 */	li r3, 0x0
/* 8005942C 0005650C  48 00 00 18 */	b .L_80059444
.L_80059430:
/* 80059430 00056510  38 80 00 00 */	li r4, 0x0
/* 80059434 00056514  38 A0 00 00 */	li r5, 0x0
/* 80059438 00056518  38 C0 00 00 */	li r6, 0x0
/* 8005943C 0005651C  38 E0 00 00 */	li r7, 0x0
/* 80059440 00056520  4B FD AC B1 */	bl xModelInstanceAlloc__FP8RpAtomicPvUsUcPUc
.L_80059444:
/* 80059444 00056524  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80059448 00056528  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8005944C 0005652C  7C 08 03 A6 */	mtlr r0
/* 80059450 00056530  38 21 00 20 */	addi r1, r1, 0x20
/* 80059454 00056534  4E 80 00 20 */	blr
.endfn "load_model__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FUi"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::render_model_2d(xModelInstance*, const basic_rect<float>&, float)
.fn "render_model_2d__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FP14xModelInstanceRC13basic_rect<f>f", local
/* 80059458 00056538  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 8005945C 0005653C  7C 08 02 A6 */	mflr r0
/* 80059460 00056540  90 01 00 94 */	stw r0, 0x94(r1)
/* 80059464 00056544  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 80059468 00056548  F3 E1 00 88 */	psq_st f31, 0x88(r1), 0, qr0
/* 8005946C 0005654C  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 80059470 00056550  93 C1 00 78 */	stw r30, 0x78(r1)
/* 80059474 00056554  93 A1 00 74 */	stw r29, 0x74(r1)
/* 80059478 00056558  3C C0 80 25 */	lis r6, "@2825"@ha
/* 8005947C 0005655C  85 46 53 24 */	lwzu r10, "@2825"@l(r6)
/* 80059480 00056560  3C A0 80 25 */	lis r5, "@2826"@ha
/* 80059484 00056564  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 80059488 00056568  38 E5 53 30 */	addi r7, r5, "@2826"@l
/* 8005948C 0005656C  81 26 00 04 */	lwz r9, 0x4(r6)
/* 80059490 00056570  81 06 00 08 */	lwz r8, 0x8(r6)
/* 80059494 00056574  FF E0 08 90 */	fmr f31, f1
/* 80059498 00056578  80 C7 00 00 */	lwz r6, 0x0(r7)
/* 8005949C 0005657C  FC 60 10 90 */	fmr f3, f2
/* 800594A0 00056580  80 A7 00 04 */	lwz r5, 0x4(r7)
/* 800594A4 00056584  7C 7D 1B 78 */	mr r29, r3
/* 800594A8 00056588  80 07 00 08 */	lwz r0, 0x8(r7)
/* 800594AC 0005658C  91 41 00 14 */	stw r10, 0x14(r1)
/* 800594B0 00056590  7C 9E 23 78 */	mr r30, r4
/* 800594B4 00056594  C0 22 89 F0 */	lfs f1, "@2834"@sda21(r2)
/* 800594B8 00056598  38 61 00 20 */	addi r3, r1, 0x20
/* 800594BC 0005659C  91 21 00 18 */	stw r9, 0x18(r1)
/* 800594C0 000565A0  91 01 00 1C */	stw r8, 0x1c(r1)
/* 800594C4 000565A4  90 C1 00 08 */	stw r6, 0x8(r1)
/* 800594C8 000565A8  90 A1 00 0C */	stw r5, 0xc(r1)
/* 800594CC 000565AC  90 01 00 10 */	stw r0, 0x10(r1)
/* 800594D0 000565B0  4B FB 1C 1D */	bl assign__5xVec3Ffff
/* 800594D4 000565B4  C0 22 89 B8 */	lfs f1, "@1551"@sda21(r2)
/* 800594D8 000565B8  38 61 00 30 */	addi r3, r1, 0x30
/* 800594DC 000565BC  C0 42 89 F0 */	lfs f2, "@2834"@sda21(r2)
/* 800594E0 000565C0  FC 60 08 90 */	fmr f3, f1
/* 800594E4 000565C4  4B FB 1C 09 */	bl assign__5xVec3Ffff
/* 800594E8 000565C8  C0 22 89 B8 */	lfs f1, "@1551"@sda21(r2)
/* 800594EC 000565CC  38 61 00 40 */	addi r3, r1, 0x40
/* 800594F0 000565D0  C0 62 89 F4 */	lfs f3, "@2835"@sda21(r2)
/* 800594F4 000565D4  FC 40 08 90 */	fmr f2, f1
/* 800594F8 000565D8  4B FB 1B F5 */	bl assign__5xVec3Ffff
/* 800594FC 000565DC  C0 22 89 B8 */	lfs f1, "@1551"@sda21(r2)
/* 80059500 000565E0  38 61 00 50 */	addi r3, r1, 0x50
/* 80059504 000565E4  4B FC 33 75 */	bl __as__5xVec3Ff
/* 80059508 000565E8  C0 22 89 DC */	lfs f1, "@2568"@sda21(r2)
/* 8005950C 000565EC  C0 02 89 C8 */	lfs f0, "@1728"@sda21(r2)
/* 80059510 000565F0  EC 01 07 FA */	fmadds f0, f1, f31, f0
/* 80059514 000565F4  FC 00 00 1E */	fctiwz f0, f0
/* 80059518 000565F8  D8 01 00 60 */	stfd f0, 0x60(r1)
/* 8005951C 000565FC  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80059520 00056600  54 1F 06 3E */	clrlwi r31, r0, 24
/* 80059524 00056604  48 00 00 34 */	b .L_80059558
.L_80059528:
/* 80059528 00056608  7F A3 EB 78 */	mr r3, r29
/* 8005952C 0005660C  7F E4 FB 78 */	mr r4, r31
/* 80059530 00056610  4B FD B8 21 */	bl xModelSetMaterialAlpha__FP14xModelInstanceUc
/* 80059534 00056614  7F A3 EB 78 */	mr r3, r29
/* 80059538 00056618  38 81 00 20 */	addi r4, r1, 0x20
/* 8005953C 0005661C  4B FC 23 D1 */	bl xModelSetFrame__FP14xModelInstancePC7xMat4x3
/* 80059540 00056620  7F A3 EB 78 */	mr r3, r29
/* 80059544 00056624  7F C4 F3 78 */	mr r4, r30
/* 80059548 00056628  38 A1 00 14 */	addi r5, r1, 0x14
/* 8005954C 0005662C  38 C1 00 08 */	addi r6, r1, 0x8
/* 80059550 00056630  4B FD B4 D1 */	bl "xModelRender2D__FRC14xModelInstanceRC13basic_rect<f>RC5xVec3RC5xVec3"
/* 80059554 00056634  83 BD 00 00 */	lwz r29, 0x0(r29)
.L_80059558:
/* 80059558 00056638  28 1D 00 00 */	cmplwi r29, 0x0
/* 8005955C 0005663C  40 82 FF CC */	bne .L_80059528
/* 80059560 00056640  E3 E1 00 88 */	psq_l f31, 0x88(r1), 0, qr0
/* 80059564 00056644  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80059568 00056648  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 8005956C 0005664C  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 80059570 00056650  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 80059574 00056654  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 80059578 00056658  7C 08 03 A6 */	mtlr r0
/* 8005957C 0005665C  38 21 00 90 */	addi r1, r1, 0x90
/* 80059580 00056660  4E 80 00 20 */	blr
.endfn "render_model_2d__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FP14xModelInstanceRC13basic_rect<f>f"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::render_glow(xModelInstance*, const basic_rect<float>&, float, float)
.fn "render_glow__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FP14xModelInstanceRC13basic_rect<f>ff", local
/* 80059584 00056664  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80059588 00056668  7C 08 02 A6 */	mflr r0
/* 8005958C 0005666C  90 01 00 64 */	stw r0, 0x64(r1)
/* 80059590 00056670  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80059594 00056674  F3 E1 00 58 */	psq_st f31, 0x58(r1), 0, qr0
/* 80059598 00056678  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 8005959C 0005667C  F3 C1 00 48 */	psq_st f30, 0x48(r1), 0, qr0
/* 800595A0 00056680  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 800595A4 00056684  F3 A1 00 38 */	psq_st f29, 0x38(r1), 0, qr0
/* 800595A8 00056688  DB 81 00 20 */	stfd f28, 0x20(r1)
/* 800595AC 0005668C  F3 81 00 28 */	psq_st f28, 0x28(r1), 0, qr0
/* 800595B0 00056690  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800595B4 00056694  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800595B8 00056698  80 AD 81 80 */	lwz r5, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 800595BC 0005669C  EF E2 00 72 */	fmuls f31, f2, f1
/* 800595C0 000566A0  C0 82 89 F8 */	lfs f4, "@2856"@sda21(r2)
/* 800595C4 000566A4  7C 7E 1B 78 */	mr r30, r3
/* 800595C8 000566A8  C0 45 01 3C */	lfs f2, 0x13c(r5)
/* 800595CC 000566AC  3B E0 00 00 */	li r31, 0x0
/* 800595D0 000566B0  FC 00 F8 50 */	fneg f0, f31
/* 800595D4 000566B4  EC 61 00 B2 */	fmuls f3, f1, f2
/* 800595D8 000566B8  C0 22 89 D8 */	lfs f1, "@2509"@sda21(r2)
/* 800595DC 000566BC  C0 42 89 C8 */	lfs f2, "@1728"@sda21(r2)
/* 800595E0 000566C0  80 C4 00 00 */	lwz r6, 0x0(r4)
/* 800595E4 000566C4  EF 81 00 32 */	fmuls f28, f1, f0
/* 800595E8 000566C8  EF C4 00 F2 */	fmuls f30, f4, f3
/* 800595EC 000566CC  80 A4 00 04 */	lwz r5, 0x4(r4)
/* 800595F0 000566D0  80 64 00 08 */	lwz r3, 0x8(r4)
/* 800595F4 000566D4  FC 00 F0 50 */	fneg f0, f30
/* 800595F8 000566D8  80 04 00 0C */	lwz r0, 0xc(r4)
/* 800595FC 000566DC  90 C1 00 08 */	stw r6, 0x8(r1)
/* 80059600 000566E0  EF A2 00 32 */	fmuls f29, f2, f0
/* 80059604 000566E4  90 A1 00 0C */	stw r5, 0xc(r1)
/* 80059608 000566E8  90 61 00 10 */	stw r3, 0x10(r1)
/* 8005960C 000566EC  90 01 00 14 */	stw r0, 0x14(r1)
.L_80059610:
/* 80059610 000566F0  FC 20 F8 90 */	fmr f1, f31
/* 80059614 000566F4  7F C3 F3 78 */	mr r3, r30
/* 80059618 000566F8  38 81 00 08 */	addi r4, r1, 0x8
/* 8005961C 000566FC  4B FF FE 3D */	bl "render_model_2d__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FP14xModelInstanceRC13basic_rect<f>f"
/* 80059620 00056700  C0 01 00 08 */	lfs f0, 0x8(r1)
/* 80059624 00056704  3B FF 00 01 */	addi r31, r31, 0x1
/* 80059628 00056708  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8005962C 0005670C  2C 1F 00 03 */	cmpwi r31, 0x3
/* 80059630 00056710  EC 60 E8 2A */	fadds f3, f0, f29
/* 80059634 00056714  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80059638 00056718  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8005963C 0005671C  EC 42 E8 2A */	fadds f2, f2, f29
/* 80059640 00056720  EC 21 F0 2A */	fadds f1, f1, f30
/* 80059644 00056724  EC 00 F0 2A */	fadds f0, f0, f30
/* 80059648 00056728  EF FF E0 2A */	fadds f31, f31, f28
/* 8005964C 0005672C  D0 61 00 08 */	stfs f3, 0x8(r1)
/* 80059650 00056730  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 80059654 00056734  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 80059658 00056738  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8005965C 0005673C  41 80 FF B4 */	blt .L_80059610
/* 80059660 00056740  E3 E1 00 58 */	psq_l f31, 0x58(r1), 0, qr0
/* 80059664 00056744  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 80059668 00056748  E3 C1 00 48 */	psq_l f30, 0x48(r1), 0, qr0
/* 8005966C 0005674C  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 80059670 00056750  E3 A1 00 38 */	psq_l f29, 0x38(r1), 0, qr0
/* 80059674 00056754  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 80059678 00056758  E3 81 00 28 */	psq_l f28, 0x28(r1), 0, qr0
/* 8005967C 0005675C  CB 81 00 20 */	lfd f28, 0x20(r1)
/* 80059680 00056760  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80059684 00056764  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80059688 00056768  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8005968C 0005676C  7C 08 03 A6 */	mtlr r0
/* 80059690 00056770  38 21 00 60 */	addi r1, r1, 0x60
/* 80059694 00056774  4E 80 00 20 */	blr
.endfn "render_glow__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FP14xModelInstanceRC13basic_rect<f>ff"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::init_hud()
.fn "init_hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 80059698 00056778  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005969C 0005677C  7C 08 02 A6 */	mflr r0
/* 800596A0 00056780  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 800596A4 00056784  3C 80 80 2E */	lis r4, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 800596A8 00056788  90 01 00 14 */	stw r0, 0x14(r1)
/* 800596AC 0005678C  38 00 00 00 */	li r0, 0x0
/* 800596B0 00056790  38 63 53 3C */	addi r3, r3, "@stringBase0"@l
/* 800596B4 00056794  9C 04 CC 7C */	stbu r0, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l(r4)
/* 800596B8 00056798  38 63 02 3E */	addi r3, r3, 0x23e
/* 800596BC 0005679C  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 800596C0 000567A0  D0 04 00 04 */	stfs f0, 0x4(r4)
/* 800596C4 000567A4  D0 04 00 08 */	stfs f0, 0x8(r4)
/* 800596C8 000567A8  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 800596CC 000567AC  90 04 06 54 */	stw r0, 0x654(r4)
/* 800596D0 000567B0  4B FF 2B 45 */	bl xStrHash__FPCc
/* 800596D4 000567B4  4B FF FC DD */	bl "load_model__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FUi"
/* 800596D8 000567B8  3C A0 80 2E */	lis r5, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 800596DC 000567BC  3C 80 80 25 */	lis r4, "@stringBase0"@ha
/* 800596E0 000567C0  38 A5 CC 7C */	addi r5, r5, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 800596E4 000567C4  90 65 00 14 */	stw r3, 0x14(r5)
/* 800596E8 000567C8  38 64 53 3C */	addi r3, r4, "@stringBase0"@l
/* 800596EC 000567CC  38 63 02 50 */	addi r3, r3, 0x250
/* 800596F0 000567D0  4B FF 2B 25 */	bl xStrHash__FPCc
/* 800596F4 000567D4  4B FF FC BD */	bl "load_model__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FUi"
/* 800596F8 000567D8  3C A0 80 2E */	lis r5, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 800596FC 000567DC  3C 80 80 25 */	lis r4, "@stringBase0"@ha
/* 80059700 000567E0  38 A5 CC 7C */	addi r5, r5, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80059704 000567E4  90 65 00 18 */	stw r3, 0x18(r5)
/* 80059708 000567E8  38 64 53 3C */	addi r3, r4, "@stringBase0"@l
/* 8005970C 000567EC  38 63 02 66 */	addi r3, r3, 0x266
/* 80059710 000567F0  4B FF 2B 05 */	bl xStrHash__FPCc
/* 80059714 000567F4  4B FF FC 9D */	bl "load_model__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FUi"
/* 80059718 000567F8  3C 80 80 2E */	lis r4, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005971C 000567FC  7C 65 1B 78 */	mr r5, r3
/* 80059720 00056800  38 64 CC 7C */	addi r3, r4, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80059724 00056804  90 A3 00 20 */	stw r5, 0x20(r3)
/* 80059728 00056808  38 63 06 74 */	addi r3, r3, 0x674
/* 8005972C 0005680C  80 85 00 10 */	lwz r4, 0x10(r5)
/* 80059730 00056810  48 00 00 31 */	bl "init__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17uv_animated_modelFP8RpAtomic"
/* 80059734 00056814  80 8D 81 80 */	lwz r4, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 80059738 00056818  3C 60 80 2E */	lis r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005973C 0005681C  38 63 CC 7C */	addi r3, r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80059740 00056820  C0 24 01 58 */	lfs f1, 0x158(r4)
/* 80059744 00056824  38 63 06 88 */	addi r3, r3, 0x688
/* 80059748 00056828  C0 44 01 5C */	lfs f2, 0x15c(r4)
/* 8005974C 0005682C  4B FC CB CD */	bl assign__5xVec2Fff
/* 80059750 00056830  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80059754 00056834  7C 08 03 A6 */	mtlr r0
/* 80059758 00056838  38 21 00 10 */	addi r1, r1, 0x10
/* 8005975C 0005683C  4E 80 00 20 */	blr
.endfn "init_hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::uv_animated_model::init(RpAtomic*)
.fn "init__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17uv_animated_modelFP8RpAtomic", local
/* 80059760 00056840  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80059764 00056844  7C 08 02 A6 */	mflr r0
/* 80059768 00056848  28 04 00 00 */	cmplwi r4, 0x0
/* 8005976C 0005684C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80059770 00056850  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80059774 00056854  7C 7F 1B 78 */	mr r31, r3
/* 80059778 00056858  90 83 00 00 */	stw r4, 0x0(r3)
/* 8005977C 0005685C  40 82 00 0C */	bne .L_80059788
/* 80059780 00056860  38 60 00 00 */	li r3, 0x0
/* 80059784 00056864  48 00 00 48 */	b .L_800597CC
.L_80059788:
/* 80059788 00056868  7C 86 23 78 */	mr r6, r4
/* 8005978C 0005686C  38 9F 00 04 */	addi r4, r31, 0x4
/* 80059790 00056870  38 BF 00 08 */	addi r5, r31, 0x8
/* 80059794 00056874  48 00 00 4D */	bl "clone_uv__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17uv_animated_modelCFRP11RwTexCoordsRiP8RpAtomic"
/* 80059798 00056878  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8005979C 0005687C  40 82 00 0C */	bne .L_800597A8
/* 800597A0 00056880  38 60 00 00 */	li r3, 0x0
/* 800597A4 00056884  48 00 00 28 */	b .L_800597CC
.L_800597A8:
/* 800597A8 00056888  C0 22 89 B8 */	lfs f1, "@1551"@sda21(r2)
/* 800597AC 0005688C  38 7F 00 0C */	addi r3, r31, 0xc
/* 800597B0 00056890  FC 40 08 90 */	fmr f2, f1
/* 800597B4 00056894  4B FC CB 65 */	bl assign__5xVec2Fff
/* 800597B8 00056898  C0 22 89 B8 */	lfs f1, "@1551"@sda21(r2)
/* 800597BC 0005689C  38 7F 00 14 */	addi r3, r31, 0x14
/* 800597C0 000568A0  FC 40 08 90 */	fmr f2, f1
/* 800597C4 000568A4  4B FC CB 55 */	bl assign__5xVec2Fff
/* 800597C8 000568A8  38 60 00 01 */	li r3, 0x1
.L_800597CC:
/* 800597CC 000568AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800597D0 000568B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800597D4 000568B4  7C 08 03 A6 */	mtlr r0
/* 800597D8 000568B8  38 21 00 10 */	addi r1, r1, 0x10
/* 800597DC 000568BC  4E 80 00 20 */	blr
.endfn "init__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17uv_animated_modelFP8RpAtomic"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::uv_animated_model::clone_uv(RwTexCoords*&, int&, RpAtomic*) const
.fn "clone_uv__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17uv_animated_modelCFRP11RwTexCoordsRiP8RpAtomic", local
/* 800597E0 000568C0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800597E4 000568C4  7C 08 02 A6 */	mflr r0
/* 800597E8 000568C8  90 01 00 24 */	stw r0, 0x24(r1)
/* 800597EC 000568CC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800597F0 000568D0  7C BF 2B 78 */	mr r31, r5
/* 800597F4 000568D4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800597F8 000568D8  7C 9E 23 78 */	mr r30, r4
/* 800597FC 000568DC  38 81 00 08 */	addi r4, r1, 0x8
/* 80059800 000568E0  48 00 00 6D */	bl "get_uv__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17uv_animated_modelCFRP11RwTexCoordsRiP8RpAtomic"
/* 80059804 000568E4  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80059808 000568E8  40 82 00 0C */	bne .L_80059814
/* 8005980C 000568EC  38 60 00 00 */	li r3, 0x0
/* 80059810 000568F0  48 00 00 44 */	b .L_80059854
.L_80059814:
/* 80059814 000568F4  80 1F 00 00 */	lwz r0, 0x0(r31)
/* 80059818 000568F8  38 A0 00 00 */	li r5, 0x0
/* 8005981C 000568FC  80 6D 89 E0 */	lwz r3, gActiveHeap@sda21(r13)
/* 80059820 00056900  54 04 18 38 */	slwi r4, r0, 3
/* 80059824 00056904  4B FD A1 1D */	bl xMemAlloc__FUiUii
/* 80059828 00056908  90 7E 00 00 */	stw r3, 0x0(r30)
/* 8005982C 0005690C  80 7E 00 00 */	lwz r3, 0x0(r30)
/* 80059830 00056910  28 03 00 00 */	cmplwi r3, 0x0
/* 80059834 00056914  40 82 00 0C */	bne .L_80059840
/* 80059838 00056918  38 60 00 00 */	li r3, 0x0
/* 8005983C 0005691C  48 00 00 18 */	b .L_80059854
.L_80059840:
/* 80059840 00056920  80 1F 00 00 */	lwz r0, 0x0(r31)
/* 80059844 00056924  80 81 00 08 */	lwz r4, 0x8(r1)
/* 80059848 00056928  54 05 18 38 */	slwi r5, r0, 3
/* 8005984C 0005692C  4B FA 9C F5 */	bl memcpy
/* 80059850 00056930  38 60 00 01 */	li r3, 0x1
.L_80059854:
/* 80059854 00056934  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80059858 00056938  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8005985C 0005693C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80059860 00056940  7C 08 03 A6 */	mtlr r0
/* 80059864 00056944  38 21 00 20 */	addi r1, r1, 0x20
/* 80059868 00056948  4E 80 00 20 */	blr
.endfn "clone_uv__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17uv_animated_modelCFRP11RwTexCoordsRiP8RpAtomic"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::uv_animated_model::get_uv(RwTexCoords*&, int&, RpAtomic*) const
.fn "get_uv__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17uv_animated_modelCFRP11RwTexCoordsRiP8RpAtomic", local
/* 8005986C 0005694C  38 00 00 00 */	li r0, 0x0
/* 80059870 00056950  90 04 00 00 */	stw r0, 0x0(r4)
/* 80059874 00056954  90 05 00 00 */	stw r0, 0x0(r5)
/* 80059878 00056958  80 66 00 18 */	lwz r3, 0x18(r6)
/* 8005987C 0005695C  28 03 00 00 */	cmplwi r3, 0x0
/* 80059880 00056960  40 82 00 0C */	bne .L_8005988C
/* 80059884 00056964  38 60 00 00 */	li r3, 0x0
/* 80059888 00056968  4E 80 00 20 */	blr
.L_8005988C:
/* 8005988C 0005696C  80 03 00 14 */	lwz r0, 0x14(r3)
/* 80059890 00056970  90 05 00 00 */	stw r0, 0x0(r5)
/* 80059894 00056974  80 05 00 00 */	lwz r0, 0x0(r5)
/* 80059898 00056978  2C 00 00 00 */	cmpwi r0, 0x0
/* 8005989C 0005697C  41 81 00 0C */	bgt .L_800598A8
/* 800598A0 00056980  38 60 00 00 */	li r3, 0x0
/* 800598A4 00056984  4E 80 00 20 */	blr
.L_800598A8:
/* 800598A8 00056988  80 03 00 34 */	lwz r0, 0x34(r3)
/* 800598AC 0005698C  90 04 00 00 */	stw r0, 0x0(r4)
/* 800598B0 00056990  80 64 00 00 */	lwz r3, 0x0(r4)
/* 800598B4 00056994  7C 03 00 D0 */	neg r0, r3
/* 800598B8 00056998  7C 00 1B 78 */	or r0, r0, r3
/* 800598BC 0005699C  54 03 0F FE */	srwi r3, r0, 31
/* 800598C0 000569A0  4E 80 00 20 */	blr
.endfn "get_uv__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17uv_animated_modelCFRP11RwTexCoordsRiP8RpAtomic"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::show_gizmo(cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::hud_gizmo&, const basic_rect<float>&, xModelInstance*)
.fn "show_gizmo__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FRQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@9hud_gizmoRC13basic_rect<f>P14xModelInstance", local
/* 800598C4 000569A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800598C8 000569A8  7C 08 02 A6 */	mflr r0
/* 800598CC 000569AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800598D0 000569B0  38 00 00 01 */	li r0, 0x1
/* 800598D4 000569B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800598D8 000569B8  7C BF 2B 78 */	mr r31, r5
/* 800598DC 000569BC  93 C1 00 08 */	stw r30, 0x8(r1)
/* 800598E0 000569C0  7C 7E 1B 78 */	mr r30, r3
/* 800598E4 000569C4  90 03 00 00 */	stw r0, 0x0(r3)
/* 800598E8 000569C8  38 7E 00 04 */	addi r3, r30, 0x4
/* 800598EC 000569CC  4B FB E7 55 */	bl "__as__13basic_rect<f>FRC13basic_rect<f>"
/* 800598F0 000569D0  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 800598F4 000569D4  38 00 00 00 */	li r0, 0x0
/* 800598F8 000569D8  D0 1E 00 14 */	stfs f0, 0x14(r30)
/* 800598FC 000569DC  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 80059900 000569E0  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 80059904 000569E4  C0 03 01 40 */	lfs f0, 0x140(r3)
/* 80059908 000569E8  EC 01 00 24 */	fdivs f0, f1, f0
/* 8005990C 000569EC  D0 1E 00 18 */	stfs f0, 0x18(r30)
/* 80059910 000569F0  C0 02 89 C0 */	lfs f0, "@1720"@sda21(r2)
/* 80059914 000569F4  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 80059918 000569F8  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005991C 000569FC  C0 22 89 FC */	lfs f1, "@2883"@sda21(r2)
/* 80059920 00056A00  C0 03 01 44 */	lfs f0, 0x144(r3)
/* 80059924 00056A04  EC 01 00 24 */	fdivs f0, f1, f0
/* 80059928 00056A08  D0 1E 00 20 */	stfs f0, 0x20(r30)
/* 8005992C 00056A0C  C0 02 89 C0 */	lfs f0, "@1720"@sda21(r2)
/* 80059930 00056A10  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 80059934 00056A14  90 1E 00 28 */	stw r0, 0x28(r30)
/* 80059938 00056A18  93 FE 00 2C */	stw r31, 0x2c(r30)
/* 8005993C 00056A1C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80059940 00056A20  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80059944 00056A24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80059948 00056A28  7C 08 03 A6 */	mtlr r0
/* 8005994C 00056A2C  38 21 00 10 */	addi r1, r1, 0x10
/* 80059950 00056A30  4E 80 00 20 */	blr
.endfn "show_gizmo__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FRQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@9hud_gizmoRC13basic_rect<f>P14xModelInstance"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::update_gizmo(cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::hud_gizmo&, float)
.fn "update_gizmo__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FRQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@9hud_gizmof", local
/* 80059954 00056A34  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80059958 00056A38  7C 08 02 A6 */	mflr r0
/* 8005995C 00056A3C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80059960 00056A40  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80059964 00056A44  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 80059968 00056A48  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005996C 00056A4C  7C 7F 1B 78 */	mr r31, r3
/* 80059970 00056A50  FF E0 08 90 */	fmr f31, f1
/* 80059974 00056A54  C0 23 00 18 */	lfs f1, 0x18(r3)
/* 80059978 00056A58  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 8005997C 00056A5C  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 80059980 00056A60  EC 21 07 FA */	fmadds f1, f1, f31, f0
/* 80059984 00056A64  C0 62 89 C0 */	lfs f3, "@1720"@sda21(r2)
/* 80059988 00056A68  4B FB 4F B1 */	bl "range_limit<f>__Ffff"
/* 8005998C 00056A6C  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 80059990 00056A70  C0 3F 00 20 */	lfs f1, 0x20(r31)
/* 80059994 00056A74  C0 1F 00 1C */	lfs f0, 0x1c(r31)
/* 80059998 00056A78  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005999C 00056A7C  EC 21 07 FA */	fmadds f1, f1, f31, f0
/* 800599A0 00056A80  C0 62 89 C0 */	lfs f3, "@1720"@sda21(r2)
/* 800599A4 00056A84  4B FB 4F 95 */	bl "range_limit<f>__Ffff"
/* 800599A8 00056A88  D0 3F 00 1C */	stfs f1, 0x1c(r31)
/* 800599AC 00056A8C  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 800599B0 00056A90  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800599B4 00056A94  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 800599B8 00056A98  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800599BC 00056A9C  7C 08 03 A6 */	mtlr r0
/* 800599C0 00056AA0  38 21 00 20 */	addi r1, r1, 0x20
/* 800599C4 00056AA4  4E 80 00 20 */	blr
.endfn "update_gizmo__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FRQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@9hud_gizmof"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::flash_hud()
.fn "flash_hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 800599C8 00056AA8  3C 60 80 2E */	lis r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 800599CC 00056AAC  C0 02 89 C0 */	lfs f0, "@1720"@sda21(r2)
/* 800599D0 00056AB0  38 83 CC 7C */	addi r4, r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 800599D4 00056AB4  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 800599D8 00056AB8  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 800599DC 00056ABC  C0 22 89 FC */	lfs f1, "@2883"@sda21(r2)
/* 800599E0 00056AC0  C0 03 01 44 */	lfs f0, 0x144(r3)
/* 800599E4 00056AC4  EC 01 00 24 */	fdivs f0, f1, f0
/* 800599E8 00056AC8  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 800599EC 00056ACC  4E 80 00 20 */	blr
.endfn "flash_hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::render_timer(float, float)
.fn "render_timer__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fff", local
/* 800599F0 00056AD0  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 800599F4 00056AD4  7C 08 02 A6 */	mflr r0
/* 800599F8 00056AD8  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 800599FC 00056ADC  DB E1 00 C0 */	stfd f31, 0xc0(r1)
/* 80059A00 00056AE0  F3 E1 00 C8 */	psq_st f31, 0xc8(r1), 0, qr0
/* 80059A04 00056AE4  DB C1 00 B0 */	stfd f30, 0xb0(r1)
/* 80059A08 00056AE8  F3 C1 00 B8 */	psq_st f30, 0xb8(r1), 0, qr0
/* 80059A0C 00056AEC  93 E1 00 AC */	stw r31, 0xac(r1)
/* 80059A10 00056AF0  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80059A14 00056AF4  FF C0 08 90 */	fmr f30, f1
/* 80059A18 00056AF8  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80059A1C 00056AFC  FF E0 10 90 */	fmr f31, f2
/* 80059A20 00056B00  80 63 00 08 */	lwz r3, 0x8(r3)
/* 80059A24 00056B04  28 03 00 00 */	cmplwi r3, 0x0
/* 80059A28 00056B08  41 82 01 8C */	beq .L_80059BB4
/* 80059A2C 00056B0C  80 03 00 00 */	lwz r0, 0x0(r3)
/* 80059A30 00056B10  2C 00 00 05 */	cmpwi r0, 0x5
/* 80059A34 00056B14  41 82 00 08 */	beq .L_80059A3C
/* 80059A38 00056B18  48 00 01 7C */	b .L_80059BB4
.L_80059A3C:
/* 80059A3C 00056B1C  C0 43 00 08 */	lfs f2, 0x8(r3)
/* 80059A40 00056B20  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 80059A44 00056B24  C0 02 8A 08 */	lfs f0, "@2917"@sda21(r2)
/* 80059A48 00056B28  38 83 53 3C */	addi r4, r3, "@stringBase0"@l
/* 80059A4C 00056B2C  FC 20 10 1E */	fctiwz f1, f2
/* 80059A50 00056B30  38 61 00 34 */	addi r3, r1, 0x34
/* 80059A54 00056B34  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80059A58 00056B38  38 84 02 80 */	addi r4, r4, 0x280
/* 80059A5C 00056B3C  D8 21 00 90 */	stfd f1, 0x90(r1)
/* 80059A60 00056B40  FC 00 00 1E */	fctiwz f0, f0
/* 80059A64 00056B44  80 A1 00 94 */	lwz r5, 0x94(r1)
/* 80059A68 00056B48  D8 01 00 98 */	stfd f0, 0x98(r1)
/* 80059A6C 00056B4C  1C C5 00 64 */	mulli r6, r5, 0x64
/* 80059A70 00056B50  80 01 00 9C */	lwz r0, 0x9c(r1)
/* 80059A74 00056B54  7C C6 00 50 */	subf r6, r6, r0
/* 80059A78 00056B58  4C C6 31 82 */	crclr 4*cr1+eq
/* 80059A7C 00056B5C  48 18 A4 B9 */	bl sprintf
/* 80059A80 00056B60  80 8D 81 80 */	lwz r4, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 80059A84 00056B64  3C 60 80 25 */	lis r3, screen_bounds@ha
/* 80059A88 00056B68  38 C3 52 00 */	addi r6, r3, screen_bounds@l
/* 80059A8C 00056B6C  80 02 81 94 */	lwz r0, g_WHITE@sda21(r2)
/* 80059A90 00056B70  C0 04 01 7C */	lfs f0, 0x17c(r4)
/* 80059A94 00056B74  38 61 00 44 */	addi r3, r1, 0x44
/* 80059A98 00056B78  38 A1 00 10 */	addi r5, r1, 0x10
/* 80059A9C 00056B7C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80059AA0 00056B80  EC 5F 00 32 */	fmuls f2, f31, f0
/* 80059AA4 00056B84  C0 24 01 6C */	lfs f1, 0x16c(r4)
/* 80059AA8 00056B88  C0 04 01 70 */	lfs f0, 0x170(r4)
/* 80059AAC 00056B8C  EC 21 10 2A */	fadds f1, f1, f2
/* 80059AB0 00056B90  80 84 01 68 */	lwz r4, 0x168(r4)
/* 80059AB4 00056B94  EC 40 10 2A */	fadds f2, f0, f2
/* 80059AB8 00056B98  C0 62 89 B8 */	lfs f3, "@1551"@sda21(r2)
/* 80059ABC 00056B9C  4B FB E4 39 */	bl "create__5xfontFUifff10iColor_tagRC13basic_rect<f>"
/* 80059AC0 00056BA0  83 E1 00 44 */	lwz r31, 0x44(r1)
/* 80059AC4 00056BA4  FC 20 F8 90 */	fmr f1, f31
/* 80059AC8 00056BA8  81 81 00 48 */	lwz r12, 0x48(r1)
/* 80059ACC 00056BAC  38 61 00 78 */	addi r3, r1, 0x78
/* 80059AD0 00056BB0  81 61 00 4C */	lwz r11, 0x4c(r1)
/* 80059AD4 00056BB4  38 81 00 0C */	addi r4, r1, 0xc
/* 80059AD8 00056BB8  81 41 00 50 */	lwz r10, 0x50(r1)
/* 80059ADC 00056BBC  81 21 00 54 */	lwz r9, 0x54(r1)
/* 80059AE0 00056BC0  38 A1 00 08 */	addi r5, r1, 0x8
/* 80059AE4 00056BC4  81 01 00 58 */	lwz r8, 0x58(r1)
/* 80059AE8 00056BC8  80 E1 00 5C */	lwz r7, 0x5c(r1)
/* 80059AEC 00056BCC  80 C1 00 60 */	lwz r6, 0x60(r1)
/* 80059AF0 00056BD0  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80059AF4 00056BD4  93 E1 00 68 */	stw r31, 0x68(r1)
/* 80059AF8 00056BD8  91 81 00 6C */	stw r12, 0x6c(r1)
/* 80059AFC 00056BDC  91 61 00 70 */	stw r11, 0x70(r1)
/* 80059B00 00056BE0  91 41 00 74 */	stw r10, 0x74(r1)
/* 80059B04 00056BE4  91 21 00 78 */	stw r9, 0x78(r1)
/* 80059B08 00056BE8  91 01 00 7C */	stw r8, 0x7c(r1)
/* 80059B0C 00056BEC  90 E1 00 80 */	stw r7, 0x80(r1)
/* 80059B10 00056BF0  90 C1 00 84 */	stw r6, 0x84(r1)
/* 80059B14 00056BF4  90 01 00 88 */	stw r0, 0x88(r1)
/* 80059B18 00056BF8  80 02 8A 04 */	lwz r0, "@2902"@sda21(r2)
/* 80059B1C 00056BFC  90 01 00 08 */	stw r0, 0x8(r1)
/* 80059B20 00056C00  80 02 8A 00 */	lwz r0, "@2901"@sda21(r2)
/* 80059B24 00056C04  90 01 00 0C */	stw r0, 0xc(r1)
/* 80059B28 00056C08  48 00 00 B1 */	bl "lerp__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FR10iColor_tagf10iColor_tag10iColor_tag"
/* 80059B2C 00056C0C  C0 22 89 DC */	lfs f1, "@2568"@sda21(r2)
/* 80059B30 00056C10  38 61 00 14 */	addi r3, r1, 0x14
/* 80059B34 00056C14  C0 02 89 C8 */	lfs f0, "@1728"@sda21(r2)
/* 80059B38 00056C18  38 81 00 68 */	addi r4, r1, 0x68
/* 80059B3C 00056C1C  38 A1 00 34 */	addi r5, r1, 0x34
/* 80059B40 00056C20  EC 01 07 BA */	fmadds f0, f1, f30, f0
/* 80059B44 00056C24  FC 00 00 1E */	fctiwz f0, f0
/* 80059B48 00056C28  D8 01 00 A0 */	stfd f0, 0xa0(r1)
/* 80059B4C 00056C2C  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80059B50 00056C30  98 01 00 7B */	stb r0, 0x7b(r1)
/* 80059B54 00056C34  4B FC 78 25 */	bl bounds__5xfontCFPCc
/* 80059B58 00056C38  80 A1 00 14 */	lwz r5, 0x14(r1)
/* 80059B5C 00056C3C  38 61 00 68 */	addi r3, r1, 0x68
/* 80059B60 00056C40  80 01 00 18 */	lwz r0, 0x18(r1)
/* 80059B64 00056C44  38 81 00 34 */	addi r4, r1, 0x34
/* 80059B68 00056C48  80 CD 81 80 */	lwz r6, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 80059B6C 00056C4C  90 A1 00 24 */	stw r5, 0x24(r1)
/* 80059B70 00056C50  80 A1 00 1C */	lwz r5, 0x1c(r1)
/* 80059B74 00056C54  90 01 00 28 */	stw r0, 0x28(r1)
/* 80059B78 00056C58  80 01 00 20 */	lwz r0, 0x20(r1)
/* 80059B7C 00056C5C  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 80059B80 00056C60  C0 46 01 74 */	lfs f2, 0x174(r6)
/* 80059B84 00056C64  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80059B88 00056C68  90 01 00 30 */	stw r0, 0x30(r1)
/* 80059B8C 00056C6C  C0 26 01 78 */	lfs f1, 0x178(r6)
/* 80059B90 00056C70  EC 62 00 28 */	fsubs f3, f2, f0
/* 80059B94 00056C74  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80059B98 00056C78  C0 A2 89 C8 */	lfs f5, "@1728"@sda21(r2)
/* 80059B9C 00056C7C  C0 81 00 2C */	lfs f4, 0x2c(r1)
/* 80059BA0 00056C80  EC 01 00 28 */	fsubs f0, f1, f0
/* 80059BA4 00056C84  C0 41 00 30 */	lfs f2, 0x30(r1)
/* 80059BA8 00056C88  EC 25 19 3C */	fnmsubs f1, f5, f4, f3
/* 80059BAC 00056C8C  EC 45 00 BC */	fnmsubs f2, f5, f2, f0
/* 80059BB0 00056C90  4B FD 59 61 */	bl render__5xfontCFPCcff
.L_80059BB4:
/* 80059BB4 00056C94  E3 E1 00 C8 */	psq_l f31, 0xc8(r1), 0, qr0
/* 80059BB8 00056C98  CB E1 00 C0 */	lfd f31, 0xc0(r1)
/* 80059BBC 00056C9C  E3 C1 00 B8 */	psq_l f30, 0xb8(r1), 0, qr0
/* 80059BC0 00056CA0  CB C1 00 B0 */	lfd f30, 0xb0(r1)
/* 80059BC4 00056CA4  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 80059BC8 00056CA8  83 E1 00 AC */	lwz r31, 0xac(r1)
/* 80059BCC 00056CAC  7C 08 03 A6 */	mtlr r0
/* 80059BD0 00056CB0  38 21 00 D0 */	addi r1, r1, 0xd0
/* 80059BD4 00056CB4  4E 80 00 20 */	blr
.endfn "render_timer__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fff"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::lerp(iColor_tag&, float, iColor_tag, iColor_tag)
.fn "lerp__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FR10iColor_tagf10iColor_tag10iColor_tag", local
/* 80059BD8 00056CB8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80059BDC 00056CBC  7C 08 02 A6 */	mflr r0
/* 80059BE0 00056CC0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80059BE4 00056CC4  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 80059BE8 00056CC8  FF E0 08 90 */	fmr f31, f1
/* 80059BEC 00056CCC  93 E1 00 14 */	stw r31, 0x14(r1)
/* 80059BF0 00056CD0  7C BF 2B 78 */	mr r31, r5
/* 80059BF4 00056CD4  93 C1 00 10 */	stw r30, 0x10(r1)
/* 80059BF8 00056CD8  7C 9E 23 78 */	mr r30, r4
/* 80059BFC 00056CDC  93 A1 00 0C */	stw r29, 0xc(r1)
/* 80059C00 00056CE0  7C 7D 1B 78 */	mr r29, r3
/* 80059C04 00056CE4  88 84 00 00 */	lbz r4, 0x0(r4)
/* 80059C08 00056CE8  88 A5 00 00 */	lbz r5, 0x0(r5)
/* 80059C0C 00056CEC  48 00 00 61 */	bl "lerp__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FRUcfUcUc"
/* 80059C10 00056CF0  FC 20 F8 90 */	fmr f1, f31
/* 80059C14 00056CF4  88 9E 00 01 */	lbz r4, 0x1(r30)
/* 80059C18 00056CF8  88 BF 00 01 */	lbz r5, 0x1(r31)
/* 80059C1C 00056CFC  38 7D 00 01 */	addi r3, r29, 0x1
/* 80059C20 00056D00  48 00 00 4D */	bl "lerp__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FRUcfUcUc"
/* 80059C24 00056D04  FC 20 F8 90 */	fmr f1, f31
/* 80059C28 00056D08  88 9E 00 02 */	lbz r4, 0x2(r30)
/* 80059C2C 00056D0C  88 BF 00 02 */	lbz r5, 0x2(r31)
/* 80059C30 00056D10  38 7D 00 02 */	addi r3, r29, 0x2
/* 80059C34 00056D14  48 00 00 39 */	bl "lerp__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FRUcfUcUc"
/* 80059C38 00056D18  FC 20 F8 90 */	fmr f1, f31
/* 80059C3C 00056D1C  88 9E 00 03 */	lbz r4, 0x3(r30)
/* 80059C40 00056D20  88 BF 00 03 */	lbz r5, 0x3(r31)
/* 80059C44 00056D24  38 7D 00 03 */	addi r3, r29, 0x3
/* 80059C48 00056D28  48 00 00 25 */	bl "lerp__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FRUcfUcUc"
/* 80059C4C 00056D2C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80059C50 00056D30  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80059C54 00056D34  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 80059C58 00056D38  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 80059C5C 00056D3C  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 80059C60 00056D40  7C 08 03 A6 */	mtlr r0
/* 80059C64 00056D44  38 21 00 20 */	addi r1, r1, 0x20
/* 80059C68 00056D48  4E 80 00 20 */	blr
.endfn "lerp__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FR10iColor_tagf10iColor_tag10iColor_tag"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::lerp(unsigned char&, float, unsigned char, unsigned char)
.fn "lerp__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FRUcfUcUc", local
/* 80059C6C 00056D4C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80059C70 00056D50  3C C0 43 30 */	lis r6, 0x4330
/* 80059C74 00056D54  54 80 06 3E */	clrlwi r0, r4, 24
/* 80059C78 00056D58  54 A4 06 3E */	clrlwi r4, r5, 24
/* 80059C7C 00056D5C  90 C1 00 08 */	stw r6, 0x8(r1)
/* 80059C80 00056D60  C8 82 89 E0 */	lfd f4, "@2700"@sda21(r2)
/* 80059C84 00056D64  90 81 00 0C */	stw r4, 0xc(r1)
/* 80059C88 00056D68  C0 A2 89 C8 */	lfs f5, "@1728"@sda21(r2)
/* 80059C8C 00056D6C  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 80059C90 00056D70  90 01 00 14 */	stw r0, 0x14(r1)
/* 80059C94 00056D74  EC 60 20 28 */	fsubs f3, f0, f4
/* 80059C98 00056D78  90 C1 00 10 */	stw r6, 0x10(r1)
/* 80059C9C 00056D7C  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80059CA0 00056D80  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80059CA4 00056D84  EC 40 20 28 */	fsubs f2, f0, f4
/* 80059CA8 00056D88  90 C1 00 18 */	stw r6, 0x18(r1)
/* 80059CAC 00056D8C  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 80059CB0 00056D90  EC 43 10 28 */	fsubs f2, f3, f2
/* 80059CB4 00056D94  EC 00 20 28 */	fsubs f0, f0, f4
/* 80059CB8 00056D98  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 80059CBC 00056D9C  EC 05 00 2A */	fadds f0, f5, f0
/* 80059CC0 00056DA0  FC 00 00 1E */	fctiwz f0, f0
/* 80059CC4 00056DA4  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 80059CC8 00056DA8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80059CCC 00056DAC  98 03 00 00 */	stb r0, 0x0(r3)
/* 80059CD0 00056DB0  38 21 00 30 */	addi r1, r1, 0x30
/* 80059CD4 00056DB4  4E 80 00 20 */	blr
.endfn "lerp__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FRUcfUcUc"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::update_hud(float)
.fn "update_hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Ff", local
/* 80059CD8 00056DB8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80059CDC 00056DBC  7C 08 02 A6 */	mflr r0
/* 80059CE0 00056DC0  90 01 00 44 */	stw r0, 0x44(r1)
/* 80059CE4 00056DC4  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80059CE8 00056DC8  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 80059CEC 00056DCC  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 80059CF0 00056DD0  F3 C1 00 28 */	psq_st f30, 0x28(r1), 0, qr0
/* 80059CF4 00056DD4  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80059CF8 00056DD8  3C 60 80 2E */	lis r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80059CFC 00056DDC  FF C0 08 90 */	fmr f30, f1
/* 80059D00 00056DE0  3B E3 CC 7C */	addi r31, r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80059D04 00056DE4  80 1F 06 54 */	lwz r0, 0x654(r31)
/* 80059D08 00056DE8  28 00 00 00 */	cmplwi r0, 0x0
/* 80059D0C 00056DEC  41 82 01 84 */	beq .L_80059E90
/* 80059D10 00056DF0  C0 3F 00 08 */	lfs f1, 0x8(r31)
/* 80059D14 00056DF4  C0 1F 00 04 */	lfs f0, 0x4(r31)
/* 80059D18 00056DF8  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 80059D1C 00056DFC  EC 21 07 BA */	fmadds f1, f1, f30, f0
/* 80059D20 00056E00  C0 62 89 C0 */	lfs f3, "@1720"@sda21(r2)
/* 80059D24 00056E04  4B FB 4C 15 */	bl "range_limit<f>__Ffff"
/* 80059D28 00056E08  3C 60 80 2E */	lis r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80059D2C 00056E0C  D0 3F 00 04 */	stfs f1, 0x4(r31)
/* 80059D30 00056E10  3B C3 CC 7C */	addi r30, r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80059D34 00056E14  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 80059D38 00056E18  C0 1E 00 0C */	lfs f0, 0xc(r30)
/* 80059D3C 00056E1C  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 80059D40 00056E20  EC 21 07 BA */	fmadds f1, f1, f30, f0
/* 80059D44 00056E24  C0 62 89 C0 */	lfs f3, "@1720"@sda21(r2)
/* 80059D48 00056E28  4B FB 4B F1 */	bl "range_limit<f>__Ffff"
/* 80059D4C 00056E2C  D0 3E 00 0C */	stfs f1, 0xc(r30)
/* 80059D50 00056E30  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80059D54 00056E34  38 83 C2 A4 */	addi r4, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80059D58 00056E38  3C 60 80 2E */	lis r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80059D5C 00056E3C  80 AD 81 80 */	lwz r5, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 80059D60 00056E40  38 63 CC 7C */	addi r3, r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80059D64 00056E44  80 84 00 24 */	lwz r4, 0x24(r4)
/* 80059D68 00056E48  3B A3 06 88 */	addi r29, r3, 0x688
/* 80059D6C 00056E4C  C0 05 00 40 */	lfs f0, 0x40(r5)
/* 80059D70 00056E50  7F A3 EB 78 */	mr r3, r29
/* 80059D74 00056E54  C0 44 00 0C */	lfs f2, 0xc(r4)
/* 80059D78 00056E58  C0 25 01 58 */	lfs f1, 0x158(r5)
/* 80059D7C 00056E5C  EF E2 00 24 */	fdivs f31, f2, f0
/* 80059D80 00056E60  C0 45 01 5C */	lfs f2, 0x15c(r5)
/* 80059D84 00056E64  4B FC C5 95 */	bl assign__5xVec2Fff
/* 80059D88 00056E68  FC 20 F8 90 */	fmr f1, f31
/* 80059D8C 00056E6C  7F A3 EB 78 */	mr r3, r29
/* 80059D90 00056E70  48 00 63 71 */	bl __amu__5xVec2Ff
/* 80059D94 00056E74  3C 60 80 2E */	lis r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80059D98 00056E78  FC 20 F0 90 */	fmr f1, f30
/* 80059D9C 00056E7C  38 63 CC 7C */	addi r3, r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80059DA0 00056E80  80 83 00 20 */	lwz r4, 0x20(r3)
/* 80059DA4 00056E84  38 63 06 74 */	addi r3, r3, 0x674
/* 80059DA8 00056E88  D3 E4 00 24 */	stfs f31, 0x24(r4)
/* 80059DAC 00056E8C  48 00 01 6D */	bl "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17uv_animated_modelFf"
/* 80059DB0 00056E90  3C 80 80 2E */	lis r4, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80059DB4 00056E94  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 80059DB8 00056E98  38 84 CC 7C */	addi r4, r4, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80059DBC 00056E9C  38 A0 00 01 */	li r5, 0x1
/* 80059DC0 00056EA0  3B 84 00 30 */	addi r28, r4, 0x30
/* 80059DC4 00056EA4  7F 84 E3 78 */	mr r4, r28
/* 80059DC8 00056EA8  48 00 00 28 */	b .L_80059DF0
.L_80059DCC:
/* 80059DCC 00056EAC  80 04 00 24 */	lwz r0, 0x24(r4)
/* 80059DD0 00056EB0  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80059DD4 00056EB4  40 82 00 14 */	bne .L_80059DE8
/* 80059DD8 00056EB8  C0 22 89 FC */	lfs f1, "@2883"@sda21(r2)
/* 80059DDC 00056EBC  C0 03 01 40 */	lfs f0, 0x140(r3)
/* 80059DE0 00056EC0  EC 01 00 24 */	fdivs f0, f1, f0
/* 80059DE4 00056EC4  D0 04 00 3C */	stfs f0, 0x3c(r4)
.L_80059DE8:
/* 80059DE8 00056EC8  38 84 00 30 */	addi r4, r4, 0x30
/* 80059DEC 00056ECC  38 A5 00 01 */	addi r5, r5, 0x1
.L_80059DF0:
/* 80059DF0 00056ED0  80 1F 06 54 */	lwz r0, 0x654(r31)
/* 80059DF4 00056ED4  7C 05 00 40 */	cmplw r5, r0
/* 80059DF8 00056ED8  41 80 FF D4 */	blt .L_80059DCC
/* 80059DFC 00056EDC  3C 60 80 2E */	lis r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 80059E00 00056EE0  3B 60 00 00 */	li r27, 0x0
/* 80059E04 00056EE4  3B C3 CC 7C */	addi r30, r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 80059E08 00056EE8  7F DD F3 78 */	mr r29, r30
/* 80059E0C 00056EEC  48 00 00 50 */	b .L_80059E5C
.L_80059E10:
/* 80059E10 00056EF0  FC 20 F0 90 */	fmr f1, f30
/* 80059E14 00056EF4  38 7D 00 24 */	addi r3, r29, 0x24
/* 80059E18 00056EF8  4B FF FB 3D */	bl "update_gizmo__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FRQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@9hud_gizmof"
/* 80059E1C 00056EFC  C0 3D 00 38 */	lfs f1, 0x38(r29)
/* 80059E20 00056F00  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 80059E24 00056F04  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80059E28 00056F08  4C 40 13 82 */	cror eq, lt, eq
/* 80059E2C 00056F0C  40 82 00 28 */	bne .L_80059E54
/* 80059E30 00056F10  80 9F 06 54 */	lwz r4, 0x654(r31)
/* 80059E34 00056F14  38 7D 00 24 */	addi r3, r29, 0x24
/* 80059E38 00056F18  38 84 FF FF */	addi r4, r4, -0x1
/* 80059E3C 00056F1C  1C 04 00 30 */	mulli r0, r4, 0x30
/* 80059E40 00056F20  90 9F 06 54 */	stw r4, 0x654(r31)
/* 80059E44 00056F24  7C 9E 02 14 */	add r4, r30, r0
/* 80059E48 00056F28  38 84 00 24 */	addi r4, r4, 0x24
/* 80059E4C 00056F2C  48 00 00 69 */	bl "__as__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@9hud_gizmoFRCQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@9hud_gizmo"
/* 80059E50 00056F30  48 00 00 0C */	b .L_80059E5C
.L_80059E54:
/* 80059E54 00056F34  3B BD 00 30 */	addi r29, r29, 0x30
/* 80059E58 00056F38  3B 7B 00 01 */	addi r27, r27, 0x1
.L_80059E5C:
/* 80059E5C 00056F3C  80 1F 06 54 */	lwz r0, 0x654(r31)
/* 80059E60 00056F40  7C 1B 00 40 */	cmplw r27, r0
/* 80059E64 00056F44  41 80 FF AC */	blt .L_80059E10
/* 80059E68 00056F48  38 60 00 01 */	li r3, 0x1
/* 80059E6C 00056F4C  48 00 00 18 */	b .L_80059E84
.L_80059E70:
/* 80059E70 00056F50  80 1C 00 24 */	lwz r0, 0x24(r28)
/* 80059E74 00056F54  38 63 00 01 */	addi r3, r3, 0x1
/* 80059E78 00056F58  54 00 00 3C */	clrrwi r0, r0, 1
/* 80059E7C 00056F5C  90 1C 00 24 */	stw r0, 0x24(r28)
/* 80059E80 00056F60  3B 9C 00 30 */	addi r28, r28, 0x30
.L_80059E84:
/* 80059E84 00056F64  80 1F 06 54 */	lwz r0, 0x654(r31)
/* 80059E88 00056F68  7C 03 00 40 */	cmplw r3, r0
/* 80059E8C 00056F6C  41 80 FF E4 */	blt .L_80059E70
.L_80059E90:
/* 80059E90 00056F70  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 80059E94 00056F74  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80059E98 00056F78  E3 C1 00 28 */	psq_l f30, 0x28(r1), 0, qr0
/* 80059E9C 00056F7C  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 80059EA0 00056F80  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 80059EA4 00056F84  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80059EA8 00056F88  7C 08 03 A6 */	mtlr r0
/* 80059EAC 00056F8C  38 21 00 40 */	addi r1, r1, 0x40
/* 80059EB0 00056F90  4E 80 00 20 */	blr
.endfn "update_hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Ff"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::hud_gizmo::operator=(const cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::hud_gizmo&)
.fn "__as__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@9hud_gizmoFRCQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@9hud_gizmo", local
/* 80059EB4 00056F94  80 04 00 00 */	lwz r0, 0x0(r4)
/* 80059EB8 00056F98  80 A4 00 04 */	lwz r5, 0x4(r4)
/* 80059EBC 00056F9C  90 03 00 00 */	stw r0, 0x0(r3)
/* 80059EC0 00056FA0  80 04 00 08 */	lwz r0, 0x8(r4)
/* 80059EC4 00056FA4  90 A3 00 04 */	stw r5, 0x4(r3)
/* 80059EC8 00056FA8  80 A4 00 0C */	lwz r5, 0xc(r4)
/* 80059ECC 00056FAC  90 03 00 08 */	stw r0, 0x8(r3)
/* 80059ED0 00056FB0  80 04 00 10 */	lwz r0, 0x10(r4)
/* 80059ED4 00056FB4  90 A3 00 0C */	stw r5, 0xc(r3)
/* 80059ED8 00056FB8  C0 04 00 14 */	lfs f0, 0x14(r4)
/* 80059EDC 00056FBC  90 03 00 10 */	stw r0, 0x10(r3)
/* 80059EE0 00056FC0  C0 24 00 18 */	lfs f1, 0x18(r4)
/* 80059EE4 00056FC4  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 80059EE8 00056FC8  C0 04 00 1C */	lfs f0, 0x1c(r4)
/* 80059EEC 00056FCC  D0 23 00 18 */	stfs f1, 0x18(r3)
/* 80059EF0 00056FD0  C0 24 00 20 */	lfs f1, 0x20(r4)
/* 80059EF4 00056FD4  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 80059EF8 00056FD8  C0 04 00 24 */	lfs f0, 0x24(r4)
/* 80059EFC 00056FDC  D0 23 00 20 */	stfs f1, 0x20(r3)
/* 80059F00 00056FE0  80 A4 00 28 */	lwz r5, 0x28(r4)
/* 80059F04 00056FE4  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 80059F08 00056FE8  80 04 00 2C */	lwz r0, 0x2c(r4)
/* 80059F0C 00056FEC  90 A3 00 28 */	stw r5, 0x28(r3)
/* 80059F10 00056FF0  90 03 00 2C */	stw r0, 0x2c(r3)
/* 80059F14 00056FF4  4E 80 00 20 */	blr
.endfn "__as__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@9hud_gizmoFRCQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@9hud_gizmo"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::uv_animated_model::update(float)
.fn "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17uv_animated_modelFf", local
/* 80059F18 00056FF8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80059F1C 00056FFC  7C 08 02 A6 */	mflr r0
/* 80059F20 00057000  90 01 00 24 */	stw r0, 0x24(r1)
/* 80059F24 00057004  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80059F28 00057008  7C 7F 1B 78 */	mr r31, r3
/* 80059F2C 0005700C  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 80059F30 00057010  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 80059F34 00057014  FC 02 00 00 */	fcmpu cr0, f2, f0
/* 80059F38 00057018  40 82 00 10 */	bne .L_80059F48
/* 80059F3C 0005701C  C0 1F 00 18 */	lfs f0, 0x18(r31)
/* 80059F40 00057020  FC 02 00 00 */	fcmpu cr0, f2, f0
/* 80059F44 00057024  41 82 00 48 */	beq .L_80059F8C
.L_80059F48:
/* 80059F48 00057028  38 7F 00 14 */	addi r3, r31, 0x14
/* 80059F4C 0005702C  48 00 61 79 */	bl __ml__5xVec2CFf
/* 80059F50 00057030  90 81 00 0C */	stw r4, 0xc(r1)
/* 80059F54 00057034  38 81 00 08 */	addi r4, r1, 0x8
/* 80059F58 00057038  90 61 00 08 */	stw r3, 0x8(r1)
/* 80059F5C 0005703C  38 7F 00 0C */	addi r3, r31, 0xc
/* 80059F60 00057040  48 00 61 41 */	bl __apl__5xVec2FRC5xVec2
/* 80059F64 00057044  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 80059F68 00057048  C0 42 89 C0 */	lfs f2, "@1720"@sda21(r2)
/* 80059F6C 0005704C  4B FD 64 41 */	bl xfmod__Fff
/* 80059F70 00057050  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 80059F74 00057054  C0 3F 00 10 */	lfs f1, 0x10(r31)
/* 80059F78 00057058  C0 42 89 C0 */	lfs f2, "@1720"@sda21(r2)
/* 80059F7C 0005705C  4B FD 64 31 */	bl xfmod__Fff
/* 80059F80 00057060  D0 3F 00 10 */	stfs f1, 0x10(r31)
/* 80059F84 00057064  7F E3 FB 78 */	mr r3, r31
/* 80059F88 00057068  48 00 00 19 */	bl "refresh__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17uv_animated_modelFv"
.L_80059F8C:
/* 80059F8C 0005706C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80059F90 00057070  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80059F94 00057074  7C 08 03 A6 */	mtlr r0
/* 80059F98 00057078  38 21 00 20 */	addi r1, r1, 0x20
/* 80059F9C 0005707C  4E 80 00 20 */	blr
.endfn "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17uv_animated_modelFf"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::uv_animated_model::refresh()
.fn "refresh__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17uv_animated_modelFv", local
/* 80059FA0 00057080  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80059FA4 00057084  7C 08 02 A6 */	mflr r0
/* 80059FA8 00057088  38 80 00 10 */	li r4, 0x10
/* 80059FAC 0005708C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80059FB0 00057090  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80059FB4 00057094  7C 7B 1B 78 */	mr r27, r3
/* 80059FB8 00057098  80 63 00 00 */	lwz r3, 0x0(r3)
/* 80059FBC 0005709C  80 1B 00 08 */	lwz r0, 0x8(r27)
/* 80059FC0 000570A0  83 E3 00 18 */	lwz r31, 0x18(r3)
/* 80059FC4 000570A4  80 BB 00 04 */	lwz r5, 0x4(r27)
/* 80059FC8 000570A8  54 00 18 38 */	slwi r0, r0, 3
/* 80059FCC 000570AC  83 9F 00 34 */	lwz r28, 0x34(r31)
/* 80059FD0 000570B0  7F E3 FB 78 */	mr r3, r31
/* 80059FD4 000570B4  7C BE 2B 78 */	mr r30, r5
/* 80059FD8 000570B8  7F A5 02 14 */	add r29, r5, r0
/* 80059FDC 000570BC  48 1B B5 5D */	bl RpGeometryLock
/* 80059FE0 000570C0  38 7D 00 07 */	addi r3, r29, 0x7
/* 80059FE4 000570C4  7C 1E E8 40 */	cmplw r30, r29
/* 80059FE8 000570C8  7C 7E 18 50 */	subf r3, r30, r3
/* 80059FEC 000570CC  54 63 E8 FE */	srwi r3, r3, 3
/* 80059FF0 000570D0  40 80 00 D4 */	bge .L_8005A0C4
/* 80059FF4 000570D4  54 60 F0 BF */	srwi. r0, r3, 2
/* 80059FF8 000570D8  7C 09 03 A6 */	mtctr r0
/* 80059FFC 000570DC  41 82 00 98 */	beq .L_8005A094
.L_8005A000:
/* 8005A000 000570E0  C0 3E 00 00 */	lfs f1, 0x0(r30)
/* 8005A004 000570E4  C0 1B 00 0C */	lfs f0, 0xc(r27)
/* 8005A008 000570E8  EC 01 00 2A */	fadds f0, f1, f0
/* 8005A00C 000570EC  D0 1C 00 00 */	stfs f0, 0x0(r28)
/* 8005A010 000570F0  C0 3E 00 04 */	lfs f1, 0x4(r30)
/* 8005A014 000570F4  C0 1B 00 10 */	lfs f0, 0x10(r27)
/* 8005A018 000570F8  EC 01 00 2A */	fadds f0, f1, f0
/* 8005A01C 000570FC  D0 1C 00 04 */	stfs f0, 0x4(r28)
/* 8005A020 00057100  C0 3E 00 08 */	lfs f1, 0x8(r30)
/* 8005A024 00057104  C0 1B 00 0C */	lfs f0, 0xc(r27)
/* 8005A028 00057108  EC 01 00 2A */	fadds f0, f1, f0
/* 8005A02C 0005710C  D0 1C 00 08 */	stfs f0, 0x8(r28)
/* 8005A030 00057110  C0 3E 00 0C */	lfs f1, 0xc(r30)
/* 8005A034 00057114  C0 1B 00 10 */	lfs f0, 0x10(r27)
/* 8005A038 00057118  EC 01 00 2A */	fadds f0, f1, f0
/* 8005A03C 0005711C  D0 1C 00 0C */	stfs f0, 0xc(r28)
/* 8005A040 00057120  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 8005A044 00057124  C0 1B 00 0C */	lfs f0, 0xc(r27)
/* 8005A048 00057128  EC 01 00 2A */	fadds f0, f1, f0
/* 8005A04C 0005712C  D0 1C 00 10 */	stfs f0, 0x10(r28)
/* 8005A050 00057130  C0 3E 00 14 */	lfs f1, 0x14(r30)
/* 8005A054 00057134  C0 1B 00 10 */	lfs f0, 0x10(r27)
/* 8005A058 00057138  EC 01 00 2A */	fadds f0, f1, f0
/* 8005A05C 0005713C  D0 1C 00 14 */	stfs f0, 0x14(r28)
/* 8005A060 00057140  C0 3E 00 18 */	lfs f1, 0x18(r30)
/* 8005A064 00057144  C0 1B 00 0C */	lfs f0, 0xc(r27)
/* 8005A068 00057148  EC 01 00 2A */	fadds f0, f1, f0
/* 8005A06C 0005714C  D0 1C 00 18 */	stfs f0, 0x18(r28)
/* 8005A070 00057150  C0 3E 00 1C */	lfs f1, 0x1c(r30)
/* 8005A074 00057154  3B DE 00 20 */	addi r30, r30, 0x20
/* 8005A078 00057158  C0 1B 00 10 */	lfs f0, 0x10(r27)
/* 8005A07C 0005715C  EC 01 00 2A */	fadds f0, f1, f0
/* 8005A080 00057160  D0 1C 00 1C */	stfs f0, 0x1c(r28)
/* 8005A084 00057164  3B 9C 00 20 */	addi r28, r28, 0x20
/* 8005A088 00057168  42 00 FF 78 */	bdnz .L_8005A000
/* 8005A08C 0005716C  70 63 00 03 */	andi. r3, r3, 0x3
/* 8005A090 00057170  41 82 00 34 */	beq .L_8005A0C4
.L_8005A094:
/* 8005A094 00057174  7C 69 03 A6 */	mtctr r3
.L_8005A098:
/* 8005A098 00057178  C0 3E 00 00 */	lfs f1, 0x0(r30)
/* 8005A09C 0005717C  C0 1B 00 0C */	lfs f0, 0xc(r27)
/* 8005A0A0 00057180  EC 01 00 2A */	fadds f0, f1, f0
/* 8005A0A4 00057184  D0 1C 00 00 */	stfs f0, 0x0(r28)
/* 8005A0A8 00057188  C0 3E 00 04 */	lfs f1, 0x4(r30)
/* 8005A0AC 0005718C  3B DE 00 08 */	addi r30, r30, 0x8
/* 8005A0B0 00057190  C0 1B 00 10 */	lfs f0, 0x10(r27)
/* 8005A0B4 00057194  EC 01 00 2A */	fadds f0, f1, f0
/* 8005A0B8 00057198  D0 1C 00 04 */	stfs f0, 0x4(r28)
/* 8005A0BC 0005719C  3B 9C 00 08 */	addi r28, r28, 0x8
/* 8005A0C0 000571A0  42 00 FF D8 */	bdnz .L_8005A098
.L_8005A0C4:
/* 8005A0C4 000571A4  7F E3 FB 78 */	mr r3, r31
/* 8005A0C8 000571A8  48 1B B4 C9 */	bl RpGeometryUnlock
/* 8005A0CC 000571AC  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8005A0D0 000571B0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005A0D4 000571B4  7C 08 03 A6 */	mtlr r0
/* 8005A0D8 000571B8  38 21 00 20 */	addi r1, r1, 0x20
/* 8005A0DC 000571BC  4E 80 00 20 */	blr
.endfn "refresh__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17uv_animated_modelFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::render_hud()
.fn "render_hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 8005A0E0 000571C0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8005A0E4 000571C4  7C 08 02 A6 */	mflr r0
/* 8005A0E8 000571C8  3C 60 80 2E */	lis r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005A0EC 000571CC  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005A0F0 000571D0  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 8005A0F4 000571D4  3B C3 CC 7C */	addi r30, r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005A0F8 000571D8  80 1E 06 54 */	lwz r0, 0x654(r30)
/* 8005A0FC 000571DC  28 00 00 00 */	cmplwi r0, 0x0
/* 8005A100 000571E0  41 82 01 98 */	beq .L_8005A298
/* 8005A104 000571E4  38 60 00 15 */	li r3, 0x15
/* 8005A108 000571E8  48 05 28 F5 */	bl zRenderState__F14_SDRenderState
/* 8005A10C 000571EC  3C 60 80 2E */	lis r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005A110 000571F0  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005A114 000571F4  3B E3 CC 7C */	addi r31, r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005A118 000571F8  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 8005A11C 000571FC  C0 23 00 24 */	lfs f1, 0x24(r3)
/* 8005A120 00057200  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005A124 00057204  40 81 00 50 */	ble .L_8005A174
/* 8005A128 00057208  38 60 00 0A */	li r3, 0xa
/* 8005A12C 0005720C  38 80 00 05 */	li r4, 0x5
/* 8005A130 00057210  48 1D 56 AD */	bl RwRenderStateSet
/* 8005A134 00057214  38 60 00 0B */	li r3, 0xb
/* 8005A138 00057218  38 80 00 02 */	li r4, 0x2
/* 8005A13C 0005721C  48 1D 56 A1 */	bl RwRenderStateSet
/* 8005A140 00057220  80 8D 81 80 */	lwz r4, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005A144 00057224  38 61 00 08 */	addi r3, r1, 0x8
/* 8005A148 00057228  C0 24 01 54 */	lfs f1, 0x154(r4)
/* 8005A14C 0005722C  FC 40 08 90 */	fmr f2, f1
/* 8005A150 00057230  48 00 5F F1 */	bl "set_size__13basic_rect<f>Fff"
/* 8005A154 00057234  C0 22 89 C8 */	lfs f1, "@1728"@sda21(r2)
/* 8005A158 00057238  38 61 00 08 */	addi r3, r1, 0x8
/* 8005A15C 0005723C  FC 40 08 90 */	fmr f2, f1
/* 8005A160 00057240  48 00 5F BD */	bl "center__13basic_rect<f>Fff"
/* 8005A164 00057244  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 8005A168 00057248  38 81 00 08 */	addi r4, r1, 0x8
/* 8005A16C 0005724C  C0 23 00 24 */	lfs f1, 0x24(r3)
/* 8005A170 00057250  4B FF F2 E9 */	bl "render_model_2d__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FP14xModelInstanceRC13basic_rect<f>f"
.L_8005A174:
/* 8005A174 00057254  38 60 00 0A */	li r3, 0xa
/* 8005A178 00057258  38 80 00 05 */	li r4, 0x5
/* 8005A17C 0005725C  48 1D 56 61 */	bl RwRenderStateSet
/* 8005A180 00057260  38 60 00 0B */	li r3, 0xb
/* 8005A184 00057264  38 80 00 06 */	li r4, 0x6
/* 8005A188 00057268  48 1D 56 55 */	bl RwRenderStateSet
/* 8005A18C 0005726C  3C 60 80 2E */	lis r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005A190 00057270  3B A0 00 00 */	li r29, 0x0
/* 8005A194 00057274  3B 83 CC 7C */	addi r28, r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005A198 00057278  7F 9F E3 78 */	mr r31, r28
/* 8005A19C 0005727C  48 00 00 40 */	b .L_8005A1DC
.L_8005A1A0:
/* 8005A1A0 00057280  38 9F 00 24 */	addi r4, r31, 0x24
/* 8005A1A4 00057284  C0 3C 00 04 */	lfs f1, 0x4(r28)
/* 8005A1A8 00057288  C0 1F 00 38 */	lfs f0, 0x38(r31)
/* 8005A1AC 0005728C  C0 5F 00 48 */	lfs f2, 0x48(r31)
/* 8005A1B0 00057290  EC 21 00 32 */	fmuls f1, f1, f0
/* 8005A1B4 00057294  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005A1B8 00057298  EC 22 00 72 */	fmuls f1, f2, f1
/* 8005A1BC 0005729C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005A1C0 000572A0  4C 40 13 82 */	cror eq, lt, eq
/* 8005A1C4 000572A4  41 82 00 10 */	beq .L_8005A1D4
/* 8005A1C8 000572A8  80 64 00 2C */	lwz r3, 0x2c(r4)
/* 8005A1CC 000572AC  38 84 00 04 */	addi r4, r4, 0x4
/* 8005A1D0 000572B0  4B FF F2 89 */	bl "render_model_2d__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FP14xModelInstanceRC13basic_rect<f>f"
.L_8005A1D4:
/* 8005A1D4 000572B4  3B FF 00 30 */	addi r31, r31, 0x30
/* 8005A1D8 000572B8  3B BD 00 01 */	addi r29, r29, 0x1
.L_8005A1DC:
/* 8005A1DC 000572BC  80 1E 06 54 */	lwz r0, 0x654(r30)
/* 8005A1E0 000572C0  7C 1D 00 40 */	cmplw r29, r0
/* 8005A1E4 000572C4  41 80 FF BC */	blt .L_8005A1A0
/* 8005A1E8 000572C8  38 60 00 0A */	li r3, 0xa
/* 8005A1EC 000572CC  38 80 00 05 */	li r4, 0x5
/* 8005A1F0 000572D0  48 1D 55 ED */	bl RwRenderStateSet
/* 8005A1F4 000572D4  38 60 00 0B */	li r3, 0xb
/* 8005A1F8 000572D8  38 80 00 02 */	li r4, 0x2
/* 8005A1FC 000572DC  48 1D 55 E1 */	bl RwRenderStateSet
/* 8005A200 000572E0  3C 60 80 2E */	lis r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005A204 000572E4  7F 9D E3 78 */	mr r29, r28
/* 8005A208 000572E8  3B E3 CC 7C */	addi r31, r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005A20C 000572EC  3B 60 00 00 */	li r27, 0x0
/* 8005A210 000572F0  48 00 00 70 */	b .L_8005A280
.L_8005A214:
/* 8005A214 000572F4  38 9D 00 24 */	addi r4, r29, 0x24
/* 8005A218 000572F8  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 8005A21C 000572FC  C0 5D 00 40 */	lfs f2, 0x40(r29)
/* 8005A220 00057300  C0 02 89 C0 */	lfs f0, "@1720"@sda21(r2)
/* 8005A224 00057304  EC 22 08 2A */	fadds f1, f2, f1
/* 8005A228 00057308  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005A22C 0005730C  40 81 00 0C */	ble .L_8005A238
/* 8005A230 00057310  FC 20 00 90 */	fmr f1, f0
/* 8005A234 00057314  48 00 00 14 */	b .L_8005A248
.L_8005A238:
/* 8005A238 00057318  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005A23C 0005731C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005A240 00057320  4C 40 13 82 */	cror eq, lt, eq
/* 8005A244 00057324  41 82 00 34 */	beq .L_8005A278
.L_8005A248:
/* 8005A248 00057328  C0 5C 00 04 */	lfs f2, 0x4(r28)
/* 8005A24C 0005732C  C0 04 00 14 */	lfs f0, 0x14(r4)
/* 8005A250 00057330  C0 64 00 24 */	lfs f3, 0x24(r4)
/* 8005A254 00057334  EC 42 00 32 */	fmuls f2, f2, f0
/* 8005A258 00057338  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005A25C 0005733C  EC 43 00 B2 */	fmuls f2, f3, f2
/* 8005A260 00057340  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8005A264 00057344  4C 40 13 82 */	cror eq, lt, eq
/* 8005A268 00057348  41 82 00 10 */	beq .L_8005A278
/* 8005A26C 0005734C  80 64 00 2C */	lwz r3, 0x2c(r4)
/* 8005A270 00057350  38 84 00 04 */	addi r4, r4, 0x4
/* 8005A274 00057354  4B FF F3 11 */	bl "render_glow__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FP14xModelInstanceRC13basic_rect<f>ff"
.L_8005A278:
/* 8005A278 00057358  3B BD 00 30 */	addi r29, r29, 0x30
/* 8005A27C 0005735C  3B 7B 00 01 */	addi r27, r27, 0x1
.L_8005A280:
/* 8005A280 00057360  80 1E 06 54 */	lwz r0, 0x654(r30)
/* 8005A284 00057364  7C 1B 00 40 */	cmplw r27, r0
/* 8005A288 00057368  41 80 FF 8C */	blt .L_8005A214
/* 8005A28C 0005736C  C0 3C 00 04 */	lfs f1, 0x4(r28)
/* 8005A290 00057370  C0 5F 00 0C */	lfs f2, 0xc(r31)
/* 8005A294 00057374  4B FF F7 5D */	bl "render_timer__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fff"
.L_8005A298:
/* 8005A298 00057378  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 8005A29C 0005737C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8005A2A0 00057380  7C 08 03 A6 */	mtlr r0
/* 8005A2A4 00057384  38 21 00 30 */	addi r1, r1, 0x30
/* 8005A2A8 00057388  4E 80 00 20 */	blr
.endfn "render_hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::show_hud()
.fn "show_hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 8005A2AC 0005738C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005A2B0 00057390  7C 08 02 A6 */	mflr r0
/* 8005A2B4 00057394  3C 60 80 2E */	lis r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005A2B8 00057398  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005A2BC 0005739C  38 83 CC 7C */	addi r4, r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005A2C0 000573A0  38 00 00 01 */	li r0, 0x1
/* 8005A2C4 000573A4  38 61 00 08 */	addi r3, r1, 0x8
/* 8005A2C8 000573A8  90 04 06 54 */	stw r0, 0x654(r4)
/* 8005A2CC 000573AC  80 8D 81 80 */	lwz r4, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005A2D0 000573B0  C0 24 01 60 */	lfs f1, 0x160(r4)
/* 8005A2D4 000573B4  48 00 5E 79 */	bl "set_size__13basic_rect<f>Ff"
/* 8005A2D8 000573B8  C0 22 89 C8 */	lfs f1, "@1728"@sda21(r2)
/* 8005A2DC 000573BC  FC 40 08 90 */	fmr f2, f1
/* 8005A2E0 000573C0  48 00 5E 3D */	bl "center__13basic_rect<f>Fff"
/* 8005A2E4 000573C4  3C 60 80 2E */	lis r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005A2E8 000573C8  38 81 00 08 */	addi r4, r1, 0x8
/* 8005A2EC 000573CC  38 63 CC 7C */	addi r3, r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005A2F0 000573D0  80 A3 00 14 */	lwz r5, 0x14(r3)
/* 8005A2F4 000573D4  38 63 00 24 */	addi r3, r3, 0x24
/* 8005A2F8 000573D8  4B FF F5 CD */	bl "show_gizmo__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FRQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@9hud_gizmoRC13basic_rect<f>P14xModelInstance"
/* 8005A2FC 000573DC  3C 60 80 2E */	lis r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005A300 000573E0  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005A304 000573E4  38 83 CC 7C */	addi r4, r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005A308 000573E8  80 64 00 20 */	lwz r3, 0x20(r4)
/* 8005A30C 000573EC  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 8005A310 000573F0  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005A314 000573F4  D0 04 00 04 */	stfs f0, 0x4(r4)
/* 8005A318 000573F8  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005A31C 000573FC  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005A320 00057400  C0 03 01 40 */	lfs f0, 0x140(r3)
/* 8005A324 00057404  EC 01 00 24 */	fdivs f0, f1, f0
/* 8005A328 00057408  D0 04 00 08 */	stfs f0, 0x8(r4)
/* 8005A32C 0005740C  4B FF F6 9D */	bl "flash_hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005A330 00057410  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005A334 00057414  7C 08 03 A6 */	mtlr r0
/* 8005A338 00057418  38 21 00 20 */	addi r1, r1, 0x20
/* 8005A33C 0005741C  4E 80 00 20 */	blr
.endfn "show_hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::hide_hud()
.fn "hide_hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 8005A340 00057420  3C 60 80 2E */	lis r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005A344 00057424  38 00 00 00 */	li r0, 0x0
/* 8005A348 00057428  38 63 CC 7C */	addi r3, r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005A34C 0005742C  90 03 06 54 */	stw r0, 0x654(r3)
/* 8005A350 00057430  80 63 00 20 */	lwz r3, 0x20(r3)
/* 8005A354 00057434  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005A358 00057438  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 8005A35C 0005743C  4E 80 00 20 */	blr
.endfn "hide_hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::world_to_screen(const xVec3&)
.fn "world_to_screen__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FRC5xVec3", local
/* 8005A360 00057440  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8005A364 00057444  7C 08 02 A6 */	mflr r0
/* 8005A368 00057448  3C A0 80 3C */	lis r5, globals@ha
/* 8005A36C 0005744C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005A370 00057450  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8005A374 00057454  3B E5 05 58 */	addi r31, r5, globals@l
/* 8005A378 00057458  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8005A37C 0005745C  7C 9E 23 78 */	mr r30, r4
/* 8005A380 00057460  38 9F 00 14 */	addi r4, r31, 0x14
/* 8005A384 00057464  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8005A388 00057468  7C 7D 1B 78 */	mr r29, r3
/* 8005A38C 0005746C  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 8005A390 00057470  48 06 61 A1 */	bl iCameraUpdatePos__FP8RwCameraP7xMat4x3
/* 8005A394 00057474  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 8005A398 00057478  7F C5 F3 78 */	mr r5, r30
/* 8005A39C 0005747C  38 61 00 14 */	addi r3, r1, 0x14
/* 8005A3A0 00057480  38 84 00 20 */	addi r4, r4, 0x20
/* 8005A3A4 00057484  4B FB 0B CD */	bl xMat4x3Toworld__FP5xVec3PC7xMat4x3PC5xVec3
/* 8005A3A8 00057488  C0 62 89 C0 */	lfs f3, "@1720"@sda21(r2)
/* 8005A3AC 0005748C  38 61 00 08 */	addi r3, r1, 0x8
/* 8005A3B0 00057490  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8005A3B4 00057494  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8005A3B8 00057498  EC 43 00 24 */	fdivs f2, f3, f0
/* 8005A3BC 0005749C  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8005A3C0 000574A0  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8005A3C4 000574A4  EC 40 00 B2 */	fmuls f2, f0, f2
/* 8005A3C8 000574A8  4B FB 0D 25 */	bl assign__5xVec3Ffff
/* 8005A3CC 000574AC  80 61 00 08 */	lwz r3, 0x8(r1)
/* 8005A3D0 000574B0  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8005A3D4 000574B4  90 7D 00 00 */	stw r3, 0x0(r29)
/* 8005A3D8 000574B8  90 1D 00 04 */	stw r0, 0x4(r29)
/* 8005A3DC 000574BC  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8005A3E0 000574C0  90 1D 00 08 */	stw r0, 0x8(r29)
/* 8005A3E4 000574C4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8005A3E8 000574C8  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8005A3EC 000574CC  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8005A3F0 000574D0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8005A3F4 000574D4  7C 08 03 A6 */	mtlr r0
/* 8005A3F8 000574D8  38 21 00 30 */	addi r1, r1, 0x30
/* 8005A3FC 000574DC  4E 80 00 20 */	blr
.endfn "world_to_screen__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FRC5xVec3"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::find_locked_target(const xVec3*)
.fn "find_locked_target__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FPC5xVec3", local
/* 8005A400 000574E0  3C 80 80 2E */	lis r4, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005A404 000574E4  38 C0 00 01 */	li r6, 0x1
/* 8005A408 000574E8  38 84 CC 7C */	addi r4, r4, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005A40C 000574EC  80 A4 06 54 */	lwz r5, 0x654(r4)
/* 8005A410 000574F0  38 84 00 30 */	addi r4, r4, 0x30
/* 8005A414 000574F4  38 05 FF FF */	addi r0, r5, -0x1
/* 8005A418 000574F8  7C 09 03 A6 */	mtctr r0
/* 8005A41C 000574FC  28 05 00 01 */	cmplwi r5, 0x1
/* 8005A420 00057500  40 81 00 24 */	ble .L_8005A444
.L_8005A424:
/* 8005A424 00057504  80 04 00 4C */	lwz r0, 0x4c(r4)
/* 8005A428 00057508  7C 00 18 40 */	cmplw r0, r3
/* 8005A42C 0005750C  40 82 00 0C */	bne .L_8005A438
/* 8005A430 00057510  7C C3 33 78 */	mr r3, r6
/* 8005A434 00057514  4E 80 00 20 */	blr
.L_8005A438:
/* 8005A438 00057518  38 84 00 30 */	addi r4, r4, 0x30
/* 8005A43C 0005751C  38 C6 00 01 */	addi r6, r6, 0x1
/* 8005A440 00057520  42 00 FF E4 */	bdnz .L_8005A424
.L_8005A444:
/* 8005A444 00057524  38 60 FF FF */	li r3, -0x1
/* 8005A448 00057528  4E 80 00 20 */	blr
.endfn "find_locked_target__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FPC5xVec3"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::lock_target(int, const xVec3*, float)
.fn "lock_target__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FiPC5xVec3f", local
/* 8005A44C 0005752C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8005A450 00057530  7C 08 02 A6 */	mflr r0
/* 8005A454 00057534  90 01 00 44 */	stw r0, 0x44(r1)
/* 8005A458 00057538  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8005A45C 0005753C  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 8005A460 00057540  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8005A464 00057544  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8005A468 00057548  7C 7E 1B 78 */	mr r30, r3
/* 8005A46C 0005754C  FF E0 08 90 */	fmr f31, f1
/* 8005A470 00057550  2C 1E FF FF */	cmpwi r30, -0x1
/* 8005A474 00057554  7C 9F 23 78 */	mr r31, r4
/* 8005A478 00057558  41 81 00 18 */	bgt .L_8005A490
/* 8005A47C 0005755C  3C 60 80 2E */	lis r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005A480 00057560  38 63 CC 7C */	addi r3, r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005A484 00057564  80 03 06 54 */	lwz r0, 0x654(r3)
/* 8005A488 00057568  28 00 00 21 */	cmplwi r0, 0x21
/* 8005A48C 0005756C  40 80 00 C4 */	bge .L_8005A550
.L_8005A490:
/* 8005A490 00057570  2C 1E FF FF */	cmpwi r30, -0x1
/* 8005A494 00057574  41 81 00 30 */	bgt .L_8005A4C4
/* 8005A498 00057578  3C 60 80 2E */	lis r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005A49C 0005757C  38 83 CC 7C */	addi r4, r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005A4A0 00057580  83 C4 06 54 */	lwz r30, 0x654(r4)
/* 8005A4A4 00057584  80 A4 00 18 */	lwz r5, 0x18(r4)
/* 8005A4A8 00057588  1C 1E 00 30 */	mulli r0, r30, 0x30
/* 8005A4AC 0005758C  38 7E 00 01 */	addi r3, r30, 0x1
/* 8005A4B0 00057590  90 64 06 54 */	stw r3, 0x654(r4)
/* 8005A4B4 00057594  7C 84 02 14 */	add r4, r4, r0
/* 8005A4B8 00057598  38 64 00 24 */	addi r3, r4, 0x24
/* 8005A4BC 0005759C  38 84 00 28 */	addi r4, r4, 0x28
/* 8005A4C0 000575A0  4B FF F4 05 */	bl "show_gizmo__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FRQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@9hud_gizmoRC13basic_rect<f>P14xModelInstance"
.L_8005A4C4:
/* 8005A4C4 000575A4  1C BE 00 30 */	mulli r5, r30, 0x30
/* 8005A4C8 000575A8  3C 60 80 2E */	lis r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005A4CC 000575AC  7F E4 FB 78 */	mr r4, r31
/* 8005A4D0 000575B0  38 03 CC 7C */	addi r0, r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005A4D4 000575B4  7C A0 2A 14 */	add r5, r0, r5
/* 8005A4D8 000575B8  38 61 00 08 */	addi r3, r1, 0x8
/* 8005A4DC 000575BC  3B C5 00 24 */	addi r30, r5, 0x24
/* 8005A4E0 000575C0  4B FF FE 81 */	bl "world_to_screen__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FRC5xVec3"
/* 8005A4E4 000575C4  80 C1 00 08 */	lwz r6, 0x8(r1)
/* 8005A4E8 000575C8  38 7E 00 04 */	addi r3, r30, 0x4
/* 8005A4EC 000575CC  80 A1 00 0C */	lwz r5, 0xc(r1)
/* 8005A4F0 000575D0  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8005A4F4 000575D4  80 8D 81 80 */	lwz r4, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005A4F8 000575D8  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8005A4FC 000575DC  C0 24 01 64 */	lfs f1, 0x164(r4)
/* 8005A500 000575E0  90 A1 00 18 */	stw r5, 0x18(r1)
/* 8005A504 000575E4  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8005A508 000575E8  48 00 5C 45 */	bl "set_size__13basic_rect<f>Ff"
/* 8005A50C 000575EC  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8005A510 000575F0  38 7E 00 04 */	addi r3, r30, 0x4
/* 8005A514 000575F4  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 8005A518 000575F8  48 00 5C 05 */	bl "center__13basic_rect<f>Fff"
/* 8005A51C 000575FC  38 00 00 01 */	li r0, 0x1
/* 8005A520 00057600  3C 60 80 2E */	lis r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005A524 00057604  90 1E 00 00 */	stw r0, 0x0(r30)
/* 8005A528 00057608  38 63 CC 7C */	addi r3, r3, "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005A52C 0005760C  80 8D 81 80 */	lwz r4, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005A530 00057610  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005A534 00057614  C0 04 01 40 */	lfs f0, 0x140(r4)
/* 8005A538 00057618  EC 01 00 24 */	fdivs f0, f1, f0
/* 8005A53C 0005761C  D0 1E 00 18 */	stfs f0, 0x18(r30)
/* 8005A540 00057620  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8005A544 00057624  90 1E 00 2C */	stw r0, 0x2c(r30)
/* 8005A548 00057628  93 FE 00 28 */	stw r31, 0x28(r30)
/* 8005A54C 0005762C  D3 FE 00 24 */	stfs f31, 0x24(r30)
.L_8005A550:
/* 8005A550 00057630  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8005A554 00057634  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8005A558 00057638  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8005A55C 0005763C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8005A560 00057640  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8005A564 00057644  7C 08 03 A6 */	mtlr r0
/* 8005A568 00057648  38 21 00 40 */	addi r1, r1, 0x40
/* 8005A56C 0005764C  4E 80 00 20 */	blr
.endfn "lock_target__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FiPC5xVec3f"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::check_lock_target(const xVec3*)
.fn "check_lock_target__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FPC5xVec3", local
/* 8005A570 00057650  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8005A574 00057654  7C 08 02 A6 */	mflr r0
/* 8005A578 00057658  90 01 00 64 */	stw r0, 0x64(r1)
/* 8005A57C 0005765C  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8005A580 00057660  F3 E1 00 58 */	psq_st f31, 0x58(r1), 0, qr0
/* 8005A584 00057664  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 8005A588 00057668  F3 C1 00 48 */	psq_st f30, 0x48(r1), 0, qr0
/* 8005A58C 0005766C  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 8005A590 00057670  F3 A1 00 38 */	psq_st f29, 0x38(r1), 0, qr0
/* 8005A594 00057674  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8005A598 00057678  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8005A59C 0005767C  3C 80 80 3C */	lis r4, globals@ha
/* 8005A5A0 00057680  7C 7E 1B 78 */	mr r30, r3
/* 8005A5A4 00057684  3B E4 05 58 */	addi r31, r4, globals@l
/* 8005A5A8 00057688  38 61 00 08 */	addi r3, r1, 0x8
/* 8005A5AC 0005768C  7F C4 F3 78 */	mr r4, r30
/* 8005A5B0 00057690  38 BF 00 44 */	addi r5, r31, 0x44
/* 8005A5B4 00057694  4B FB 0C 19 */	bl __mi__5xVec3CFRC5xVec3
/* 8005A5B8 00057698  80 C1 00 08 */	lwz r6, 0x8(r1)
/* 8005A5BC 0005769C  38 61 00 14 */	addi r3, r1, 0x14
/* 8005A5C0 000576A0  80 A1 00 0C */	lwz r5, 0xc(r1)
/* 8005A5C4 000576A4  38 9F 00 34 */	addi r4, r31, 0x34
/* 8005A5C8 000576A8  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8005A5CC 000576AC  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8005A5D0 000576B0  90 A1 00 18 */	stw r5, 0x18(r1)
/* 8005A5D4 000576B4  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8005A5D8 000576B8  4B FB AF 35 */	bl dot__5xVec3CFRC5xVec3
/* 8005A5DC 000576BC  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005A5E0 000576C0  C0 03 00 E4 */	lfs f0, 0xe4(r3)
/* 8005A5E4 000576C4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005A5E8 000576C8  41 80 00 C0 */	blt .L_8005A6A8
/* 8005A5EC 000576CC  C0 03 00 E8 */	lfs f0, 0xe8(r3)
/* 8005A5F0 000576D0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005A5F4 000576D4  40 81 00 08 */	ble .L_8005A5FC
/* 8005A5F8 000576D8  48 00 00 B0 */	b .L_8005A6A8
.L_8005A5FC:
/* 8005A5FC 000576DC  38 61 00 14 */	addi r3, r1, 0x14
/* 8005A600 000576E0  4B FB 0B A9 */	bl length__5xVec3CFv
/* 8005A604 000576E4  FF E0 08 90 */	fmr f31, f1
/* 8005A608 000576E8  C0 02 8A 0C */	lfs f0, "@3153"@sda21(r2)
/* 8005A60C 000576EC  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8005A610 000576F0  4C 41 13 82 */	cror eq, gt, eq
/* 8005A614 000576F4  40 82 00 1C */	bne .L_8005A630
/* 8005A618 000576F8  C0 02 89 D4 */	lfs f0, "@1731"@sda21(r2)
/* 8005A61C 000576FC  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8005A620 00057700  4C 40 13 82 */	cror eq, lt, eq
/* 8005A624 00057704  40 82 00 0C */	bne .L_8005A630
/* 8005A628 00057708  C3 E2 89 B8 */	lfs f31, "@1551"@sda21(r2)
/* 8005A62C 0005770C  48 00 00 1C */	b .L_8005A648
.L_8005A630:
/* 8005A630 00057710  38 61 00 14 */	addi r3, r1, 0x14
/* 8005A634 00057714  38 9F 00 34 */	addi r4, r31, 0x34
/* 8005A638 00057718  4B FB AE D5 */	bl dot__5xVec3CFRC5xVec3
/* 8005A63C 0005771C  EC 21 F8 24 */	fdivs f1, f1, f31
/* 8005A640 00057720  4B FB 40 D1 */	bl xacos__Ff
/* 8005A644 00057724  FF E0 08 90 */	fmr f31, f1
.L_8005A648:
/* 8005A648 00057728  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005A64C 0005772C  C3 A3 00 F0 */	lfs f29, 0xf0(r3)
/* 8005A650 00057730  C3 C3 00 EC */	lfs f30, 0xec(r3)
/* 8005A654 00057734  FC 1F E8 40 */	fcmpo cr0, f31, f29
/* 8005A658 00057738  4C 41 13 82 */	cror eq, gt, eq
/* 8005A65C 0005773C  41 82 00 4C */	beq .L_8005A6A8
/* 8005A660 00057740  FC 1F F0 40 */	fcmpo cr0, f31, f30
/* 8005A664 00057744  4C 41 13 82 */	cror eq, gt, eq
/* 8005A668 00057748  40 82 00 2C */	bne .L_8005A694
/* 8005A66C 0005774C  7F C3 F3 78 */	mr r3, r30
/* 8005A670 00057750  4B FF FD 91 */	bl "find_locked_target__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FPC5xVec3"
/* 8005A674 00057754  2C 03 00 00 */	cmpwi r3, 0x0
/* 8005A678 00057758  41 80 00 30 */	blt .L_8005A6A8
/* 8005A67C 0005775C  EC 3D F8 28 */	fsubs f1, f29, f31
/* 8005A680 00057760  7F C4 F3 78 */	mr r4, r30
/* 8005A684 00057764  EC 1D F0 28 */	fsubs f0, f29, f30
/* 8005A688 00057768  EC 21 00 24 */	fdivs f1, f1, f0
/* 8005A68C 0005776C  4B FF FD C1 */	bl "lock_target__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FiPC5xVec3f"
/* 8005A690 00057770  48 00 00 18 */	b .L_8005A6A8
.L_8005A694:
/* 8005A694 00057774  7F C3 F3 78 */	mr r3, r30
/* 8005A698 00057778  4B FF FD 69 */	bl "find_locked_target__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FPC5xVec3"
/* 8005A69C 0005777C  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005A6A0 00057780  7F C4 F3 78 */	mr r4, r30
/* 8005A6A4 00057784  4B FF FD A9 */	bl "lock_target__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FiPC5xVec3f"
.L_8005A6A8:
/* 8005A6A8 00057788  E3 E1 00 58 */	psq_l f31, 0x58(r1), 0, qr0
/* 8005A6AC 0005778C  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8005A6B0 00057790  E3 C1 00 48 */	psq_l f30, 0x48(r1), 0, qr0
/* 8005A6B4 00057794  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 8005A6B8 00057798  E3 A1 00 38 */	psq_l f29, 0x38(r1), 0, qr0
/* 8005A6BC 0005779C  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 8005A6C0 000577A0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8005A6C4 000577A4  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8005A6C8 000577A8  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8005A6CC 000577AC  7C 08 03 A6 */	mtlr r0
/* 8005A6D0 000577B0  38 21 00 60 */	addi r1, r1, 0x60
/* 8005A6D4 000577B4  4E 80 00 20 */	blr
.endfn "check_lock_target__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FPC5xVec3"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::check_anim_aim(xAnimTransition*, xAnimSingle*, void*)
.fn "check_anim_aim__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FP15xAnimTransitionP11xAnimSinglePv", local
/* 8005A6D8 000577B8  38 60 00 00 */	li r3, 0x0
/* 8005A6DC 000577BC  4E 80 00 20 */	blr
.endfn "check_anim_aim__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FP15xAnimTransitionP11xAnimSinglePv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::load_cheat_tweak()
.fn "load_cheat_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 8005A6E0 000577C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005A6E4 000577C4  7C 08 02 A6 */	mflr r0
/* 8005A6E8 000577C8  3C 60 80 2E */	lis r3, "cheat_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005A6EC 000577CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005A6F0 000577D0  38 83 BC 38 */	addi r4, r3, "cheat_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005A6F4 000577D4  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005A6F8 000577D8  C0 02 8A 10 */	lfs f0, "@3178"@sda21(r2)
/* 8005A6FC 000577DC  38 63 53 3C */	addi r3, r3, "@stringBase0"@l
/* 8005A700 000577E0  38 63 02 8A */	addi r3, r3, 0x28a
/* 8005A704 000577E4  D0 04 00 1C */	stfs f0, 0x1c(r4)
/* 8005A708 000577E8  C0 02 8A 14 */	lfs f0, "@3179"@sda21(r2)
/* 8005A70C 000577EC  D0 04 00 20 */	stfs f0, 0x20(r4)
/* 8005A710 000577F0  C0 02 8A 18 */	lfs f0, "@3180"@sda21(r2)
/* 8005A714 000577F4  D0 04 00 2C */	stfs f0, 0x2c(r4)
/* 8005A718 000577F8  C0 02 8A 1C */	lfs f0, "@3181"@sda21(r2)
/* 8005A71C 000577FC  D0 04 00 3C */	stfs f0, 0x3c(r4)
/* 8005A720 00057800  C0 02 8A 20 */	lfs f0, "@3182"@sda21(r2)
/* 8005A724 00057804  D0 04 00 50 */	stfs f0, 0x50(r4)
/* 8005A728 00057808  C0 02 8A 24 */	lfs f0, "@3183"@sda21(r2)
/* 8005A72C 0005780C  D0 04 00 54 */	stfs f0, 0x54(r4)
/* 8005A730 00057810  C0 02 8A 28 */	lfs f0, "@3184"@sda21(r2)
/* 8005A734 00057814  D0 04 00 58 */	stfs f0, 0x58(r4)
/* 8005A738 00057818  D0 04 00 5C */	stfs f0, 0x5c(r4)
/* 8005A73C 0005781C  C0 02 8A 2C */	lfs f0, "@3185"@sda21(r2)
/* 8005A740 00057820  D0 04 00 60 */	stfs f0, 0x60(r4)
/* 8005A744 00057824  C0 22 8A 30 */	lfs f1, "@3186"@sda21(r2)
/* 8005A748 00057828  D0 24 00 64 */	stfs f1, 0x64(r4)
/* 8005A74C 0005782C  C0 02 8A 34 */	lfs f0, "@3187"@sda21(r2)
/* 8005A750 00057830  D0 04 00 68 */	stfs f0, 0x68(r4)
/* 8005A754 00057834  C0 02 8A 38 */	lfs f0, "@3188"@sda21(r2)
/* 8005A758 00057838  D0 04 00 98 */	stfs f0, 0x98(r4)
/* 8005A75C 0005783C  C0 02 89 C0 */	lfs f0, "@1720"@sda21(r2)
/* 8005A760 00057840  D0 04 00 A8 */	stfs f0, 0xa8(r4)
/* 8005A764 00057844  D0 24 00 AC */	stfs f1, 0xac(r4)
/* 8005A768 00057848  C0 02 8A 3C */	lfs f0, "@3189"@sda21(r2)
/* 8005A76C 0005784C  D0 04 00 B8 */	stfs f0, 0xb8(r4)
/* 8005A770 00057850  C0 02 8A 40 */	lfs f0, "@3190"@sda21(r2)
/* 8005A774 00057854  D0 04 00 CC */	stfs f0, 0xcc(r4)
/* 8005A778 00057858  4B FF 1A 9D */	bl xStrHash__FPCc
/* 8005A77C 0005785C  3C A0 80 2E */	lis r5, "cheat_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005A780 00057860  3C 80 80 25 */	lis r4, "@stringBase0"@ha
/* 8005A784 00057864  38 A5 BC 38 */	addi r5, r5, "cheat_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005A788 00057868  90 65 00 D4 */	stw r3, 0xd4(r5)
/* 8005A78C 0005786C  38 64 53 3C */	addi r3, r4, "@stringBase0"@l
/* 8005A790 00057870  38 63 01 E9 */	addi r3, r3, 0x1e9
/* 8005A794 00057874  C0 02 8A 30 */	lfs f0, "@3186"@sda21(r2)
/* 8005A798 00057878  D0 05 00 D8 */	stfs f0, 0xd8(r5)
/* 8005A79C 0005787C  C0 02 89 C0 */	lfs f0, "@1720"@sda21(r2)
/* 8005A7A0 00057880  D0 05 00 DC */	stfs f0, 0xdc(r5)
/* 8005A7A4 00057884  4B FF 1A 71 */	bl xStrHash__FPCc
/* 8005A7A8 00057888  3C A0 80 2E */	lis r5, "cheat_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005A7AC 0005788C  38 80 01 90 */	li r4, 0x190
/* 8005A7B0 00057890  38 A5 BC 38 */	addi r5, r5, "cheat_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005A7B4 00057894  38 00 00 0F */	li r0, 0xf
/* 8005A7B8 00057898  90 65 00 E0 */	stw r3, 0xe0(r5)
/* 8005A7BC 0005789C  C0 02 8A 44 */	lfs f0, "@3191"@sda21(r2)
/* 8005A7C0 000578A0  D0 05 00 FC */	stfs f0, 0xfc(r5)
/* 8005A7C4 000578A4  C0 02 8A 38 */	lfs f0, "@3188"@sda21(r2)
/* 8005A7C8 000578A8  D0 05 01 00 */	stfs f0, 0x100(r5)
/* 8005A7CC 000578AC  C0 02 8A 48 */	lfs f0, "@3192"@sda21(r2)
/* 8005A7D0 000578B0  D0 05 01 04 */	stfs f0, 0x104(r5)
/* 8005A7D4 000578B4  90 85 01 08 */	stw r4, 0x108(r5)
/* 8005A7D8 000578B8  C0 02 8A 4C */	lfs f0, "@3193"@sda21(r2)
/* 8005A7DC 000578BC  D0 05 01 10 */	stfs f0, 0x110(r5)
/* 8005A7E0 000578C0  90 05 01 20 */	stw r0, 0x120(r5)
/* 8005A7E4 000578C4  C0 02 8A 50 */	lfs f0, "@3194"@sda21(r2)
/* 8005A7E8 000578C8  D0 05 01 28 */	stfs f0, 0x128(r5)
/* 8005A7EC 000578CC  C0 02 8A 54 */	lfs f0, "@3195"@sda21(r2)
/* 8005A7F0 000578D0  D0 05 01 2C */	stfs f0, 0x12c(r5)
/* 8005A7F4 000578D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005A7F8 000578D8  7C 08 03 A6 */	mtlr r0
/* 8005A7FC 000578DC  38 21 00 10 */	addi r1, r1, 0x10
/* 8005A800 000578E0  4E 80 00 20 */	blr
.endfn "load_cheat_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::load_settings()
.fn "load_settings__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 8005A804 000578E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005A808 000578E8  7C 08 02 A6 */	mflr r0
/* 8005A80C 000578EC  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005A810 000578F0  38 63 53 3C */	addi r3, r3, "@stringBase0"@l
/* 8005A814 000578F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005A818 000578F8  38 63 01 63 */	addi r3, r3, 0x163
/* 8005A81C 000578FC  4B FF 19 F9 */	bl xStrHash__FPCc
/* 8005A820 00057900  38 81 00 08 */	addi r4, r1, 0x8
/* 8005A824 00057904  4B FF B6 D1 */	bl zEntGetModelParams__FUiPUi
/* 8005A828 00057908  28 03 00 00 */	cmplwi r3, 0x0
/* 8005A82C 0005790C  40 82 00 0C */	bne .L_8005A838
/* 8005A830 00057910  38 00 00 00 */	li r0, 0x0
/* 8005A834 00057914  90 01 00 08 */	stw r0, 0x8(r1)
.L_8005A838:
/* 8005A838 00057918  3C 80 80 2E */	lis r4, "normal_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005A83C 0005791C  80 A1 00 08 */	lwz r5, 0x8(r1)
/* 8005A840 00057920  38 04 BA 80 */	addi r0, r4, "normal_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005A844 00057924  7C 64 1B 78 */	mr r4, r3
/* 8005A848 00057928  7C 03 03 78 */	mr r3, r0
/* 8005A84C 0005792C  48 00 00 35 */	bl "load__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@11tweak_groupFP16xModelAssetParamUi"
/* 8005A850 00057930  3C 60 80 2E */	lis r3, "cheat_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005A854 00057934  3C 80 80 2E */	lis r4, "normal_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005A858 00057938  38 63 BC 38 */	addi r3, r3, "cheat_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005A85C 0005793C  38 A0 01 B8 */	li r5, 0x1b8
/* 8005A860 00057940  38 84 BA 80 */	addi r4, r4, "normal_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005A864 00057944  4B FA 8C DD */	bl memcpy
/* 8005A868 00057948  4B FF FE 79 */	bl "load_cheat_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005A86C 0005794C  4B FF EA A9 */	bl "refresh_missle_model__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005A870 00057950  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005A874 00057954  7C 08 03 A6 */	mtlr r0
/* 8005A878 00057958  38 21 00 10 */	addi r1, r1, 0x10
/* 8005A87C 0005795C  4E 80 00 20 */	blr
.endfn "load_settings__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::tweak_group::load(xModelAssetParam*, unsigned int)
.fn "load__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@11tweak_groupFP16xModelAssetParamUi", local
/* 8005A880 00057960  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005A884 00057964  7C 08 02 A6 */	mflr r0
/* 8005A888 00057968  7C A6 2B 78 */	mr r6, r5
/* 8005A88C 0005796C  7C 85 23 78 */	mr r5, r4
/* 8005A890 00057970  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005A894 00057974  38 80 00 01 */	li r4, 0x1
/* 8005A898 00057978  38 E0 00 00 */	li r7, 0x0
/* 8005A89C 0005797C  48 00 00 15 */	bl "register_tweaks__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@11tweak_groupFbP16xModelAssetParamUiPCc"
/* 8005A8A0 00057980  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005A8A4 00057984  7C 08 03 A6 */	mtlr r0
/* 8005A8A8 00057988  38 21 00 10 */	addi r1, r1, 0x10
/* 8005A8AC 0005798C  4E 80 00 20 */	blr
.endfn "load__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@11tweak_groupFP16xModelAssetParamUi"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::tweak_group::register_tweaks(bool, xModelAssetParam*, unsigned int, const char*)
.fn "register_tweaks__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@11tweak_groupFbP16xModelAssetParamUiPCc", local
/* 8005A8B0 00057990  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8005A8B4 00057994  7C 08 02 A6 */	mflr r0
/* 8005A8B8 00057998  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005A8BC 0005799C  54 80 06 3F */	clrlwi. r0, r4, 24
/* 8005A8C0 000579A0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8005A8C4 000579A4  7C DF 33 78 */	mr r31, r6
/* 8005A8C8 000579A8  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8005A8CC 000579AC  7C BE 2B 78 */	mr r30, r5
/* 8005A8D0 000579B0  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8005A8D4 000579B4  7C 9D 23 78 */	mr r29, r4
/* 8005A8D8 000579B8  93 81 00 20 */	stw r28, 0x20(r1)
/* 8005A8DC 000579BC  7C 7C 1B 78 */	mr r28, r3
/* 8005A8E0 000579C0  41 82 00 30 */	beq .L_8005A910
/* 8005A8E4 000579C4  C0 02 8A 40 */	lfs f0, "@3190"@sda21(r2)
/* 8005A8E8 000579C8  3C 80 80 25 */	lis r4, "@stringBase0"@ha
/* 8005A8EC 000579CC  38 C4 53 3C */	addi r6, r4, "@stringBase0"@l
/* 8005A8F0 000579D0  7F C4 F3 78 */	mr r4, r30
/* 8005A8F4 000579D4  D0 1C 00 00 */	stfs f0, 0x0(r28)
/* 8005A8F8 000579D8  7F E5 FB 78 */	mr r5, r31
/* 8005A8FC 000579DC  38 C6 02 90 */	addi r6, r6, 0x290
/* 8005A900 000579E0  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005A904 000579E4  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005A908 000579E8  FC 60 08 90 */	fmr f3, f1
/* 8005A90C 000579EC  48 00 59 A5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005A910:
/* 8005A910 000579F0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005A914 000579F4  41 82 00 34 */	beq .L_8005A948
/* 8005A918 000579F8  C0 02 89 C8 */	lfs f0, "@1728"@sda21(r2)
/* 8005A91C 000579FC  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005A920 00057A00  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005A924 00057A04  7F C4 F3 78 */	mr r4, r30
/* 8005A928 00057A08  D0 1C 00 04 */	stfs f0, 0x4(r28)
/* 8005A92C 00057A0C  7F E5 FB 78 */	mr r5, r31
/* 8005A930 00057A10  38 7C 00 04 */	addi r3, r28, 0x4
/* 8005A934 00057A14  38 C6 02 9A */	addi r6, r6, 0x29a
/* 8005A938 00057A18  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005A93C 00057A1C  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005A940 00057A20  FC 60 08 90 */	fmr f3, f1
/* 8005A944 00057A24  48 00 59 6D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005A948:
/* 8005A948 00057A28  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005A94C 00057A2C  41 82 00 34 */	beq .L_8005A980
/* 8005A950 00057A30  C0 02 8A 14 */	lfs f0, "@3179"@sda21(r2)
/* 8005A954 00057A34  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005A958 00057A38  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005A95C 00057A3C  7F C4 F3 78 */	mr r4, r30
/* 8005A960 00057A40  D0 1C 00 08 */	stfs f0, 0x8(r28)
/* 8005A964 00057A44  7F E5 FB 78 */	mr r5, r31
/* 8005A968 00057A48  38 7C 00 08 */	addi r3, r28, 0x8
/* 8005A96C 00057A4C  38 C6 02 AB */	addi r6, r6, 0x2ab
/* 8005A970 00057A50  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005A974 00057A54  C0 42 89 F4 */	lfs f2, "@2835"@sda21(r2)
/* 8005A978 00057A58  C0 62 8A 58 */	lfs f3, "@3297"@sda21(r2)
/* 8005A97C 00057A5C  48 00 59 35 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005A980:
/* 8005A980 00057A60  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005A984 00057A64  41 82 00 34 */	beq .L_8005A9B8
/* 8005A988 00057A68  C0 02 89 C8 */	lfs f0, "@1728"@sda21(r2)
/* 8005A98C 00057A6C  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005A990 00057A70  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005A994 00057A74  7F C4 F3 78 */	mr r4, r30
/* 8005A998 00057A78  D0 1C 00 0C */	stfs f0, 0xc(r28)
/* 8005A99C 00057A7C  7F E5 FB 78 */	mr r5, r31
/* 8005A9A0 00057A80  38 7C 00 0C */	addi r3, r28, 0xc
/* 8005A9A4 00057A84  38 C6 02 C1 */	addi r6, r6, 0x2c1
/* 8005A9A8 00057A88  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005A9AC 00057A8C  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005A9B0 00057A90  C0 62 8A 58 */	lfs f3, "@3297"@sda21(r2)
/* 8005A9B4 00057A94  48 00 58 FD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005A9B8:
/* 8005A9B8 00057A98  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005A9BC 00057A9C  41 82 00 34 */	beq .L_8005A9F0
/* 8005A9C0 00057AA0  C0 02 8A 5C */	lfs f0, "@3298"@sda21(r2)
/* 8005A9C4 00057AA4  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005A9C8 00057AA8  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005A9CC 00057AAC  7F C4 F3 78 */	mr r4, r30
/* 8005A9D0 00057AB0  D0 1C 00 10 */	stfs f0, 0x10(r28)
/* 8005A9D4 00057AB4  7F E5 FB 78 */	mr r5, r31
/* 8005A9D8 00057AB8  38 7C 00 10 */	addi r3, r28, 0x10
/* 8005A9DC 00057ABC  38 C6 02 D7 */	addi r6, r6, 0x2d7
/* 8005A9E0 00057AC0  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005A9E4 00057AC4  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005A9E8 00057AC8  C0 62 8A 08 */	lfs f3, "@2917"@sda21(r2)
/* 8005A9EC 00057ACC  48 00 58 C5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005A9F0:
/* 8005A9F0 00057AD0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005A9F4 00057AD4  41 82 00 34 */	beq .L_8005AA28
/* 8005A9F8 00057AD8  C0 02 8A 60 */	lfs f0, "@3299"@sda21(r2)
/* 8005A9FC 00057ADC  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005AA00 00057AE0  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005AA04 00057AE4  7F C4 F3 78 */	mr r4, r30
/* 8005AA08 00057AE8  D0 1C 00 14 */	stfs f0, 0x14(r28)
/* 8005AA0C 00057AEC  7F E5 FB 78 */	mr r5, r31
/* 8005AA10 00057AF0  38 7C 00 14 */	addi r3, r28, 0x14
/* 8005AA14 00057AF4  38 C6 02 EE */	addi r6, r6, 0x2ee
/* 8005AA18 00057AF8  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005AA1C 00057AFC  C0 42 89 F4 */	lfs f2, "@2835"@sda21(r2)
/* 8005AA20 00057B00  C0 62 8A 58 */	lfs f3, "@3297"@sda21(r2)
/* 8005AA24 00057B04  48 00 58 8D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005AA28:
/* 8005AA28 00057B08  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005AA2C 00057B0C  41 82 00 34 */	beq .L_8005AA60
/* 8005AA30 00057B10  C0 02 8A 48 */	lfs f0, "@3192"@sda21(r2)
/* 8005AA34 00057B14  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005AA38 00057B18  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005AA3C 00057B1C  7F C4 F3 78 */	mr r4, r30
/* 8005AA40 00057B20  D0 1C 00 18 */	stfs f0, 0x18(r28)
/* 8005AA44 00057B24  7F E5 FB 78 */	mr r5, r31
/* 8005AA48 00057B28  38 7C 00 18 */	addi r3, r28, 0x18
/* 8005AA4C 00057B2C  38 C6 02 FA */	addi r6, r6, 0x2fa
/* 8005AA50 00057B30  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005AA54 00057B34  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005AA58 00057B38  FC 60 08 90 */	fmr f3, f1
/* 8005AA5C 00057B3C  48 00 58 55 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005AA60:
/* 8005AA60 00057B40  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005AA64 00057B44  41 82 00 34 */	beq .L_8005AA98
/* 8005AA68 00057B48  C0 02 8A 64 */	lfs f0, "@3300"@sda21(r2)
/* 8005AA6C 00057B4C  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005AA70 00057B50  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005AA74 00057B54  7F C4 F3 78 */	mr r4, r30
/* 8005AA78 00057B58  D0 1C 00 1C */	stfs f0, 0x1c(r28)
/* 8005AA7C 00057B5C  7F E5 FB 78 */	mr r5, r31
/* 8005AA80 00057B60  38 7C 00 1C */	addi r3, r28, 0x1c
/* 8005AA84 00057B64  38 C6 03 0A */	addi r6, r6, 0x30a
/* 8005AA88 00057B68  C0 22 8A 68 */	lfs f1, "@3301"@sda21(r2)
/* 8005AA8C 00057B6C  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005AA90 00057B70  C0 62 8A 6C */	lfs f3, "@3302"@sda21(r2)
/* 8005AA94 00057B74  48 00 58 1D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005AA98:
/* 8005AA98 00057B78  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005AA9C 00057B7C  41 82 00 34 */	beq .L_8005AAD0
/* 8005AAA0 00057B80  C0 02 8A 70 */	lfs f0, "@3303"@sda21(r2)
/* 8005AAA4 00057B84  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005AAA8 00057B88  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005AAAC 00057B8C  7F C4 F3 78 */	mr r4, r30
/* 8005AAB0 00057B90  D0 1C 00 20 */	stfs f0, 0x20(r28)
/* 8005AAB4 00057B94  7F E5 FB 78 */	mr r5, r31
/* 8005AAB8 00057B98  38 7C 00 20 */	addi r3, r28, 0x20
/* 8005AABC 00057B9C  38 C6 03 1D */	addi r6, r6, 0x31d
/* 8005AAC0 00057BA0  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005AAC4 00057BA4  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005AAC8 00057BA8  FC 60 08 90 */	fmr f3, f1
/* 8005AACC 00057BAC  48 00 57 E5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005AAD0:
/* 8005AAD0 00057BB0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005AAD4 00057BB4  41 82 00 34 */	beq .L_8005AB08
/* 8005AAD8 00057BB8  38 00 00 04 */	li r0, 0x4
/* 8005AADC 00057BBC  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005AAE0 00057BC0  38 83 53 3C */	addi r4, r3, "@stringBase0"@l
/* 8005AAE4 00057BC4  90 1C 00 24 */	stw r0, 0x24(r28)
/* 8005AAE8 00057BC8  7F C7 F3 78 */	mr r7, r30
/* 8005AAEC 00057BCC  7F E8 FB 78 */	mr r8, r31
/* 8005AAF0 00057BD0  38 7C 00 24 */	addi r3, r28, 0x24
/* 8005AAF4 00057BD4  39 24 03 32 */	addi r9, r4, 0x332
/* 8005AAF8 00057BD8  38 80 00 01 */	li r4, 0x1
/* 8005AAFC 00057BDC  38 A0 00 01 */	li r5, 0x1
/* 8005AB00 00057BE0  38 C0 00 64 */	li r6, 0x64
/* 8005AB04 00057BE4  48 00 57 29 */	bl "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc"
.L_8005AB08:
/* 8005AB08 00057BE8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005AB0C 00057BEC  41 82 00 34 */	beq .L_8005AB40
/* 8005AB10 00057BF0  C0 02 8A 74 */	lfs f0, "@3304"@sda21(r2)
/* 8005AB14 00057BF4  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005AB18 00057BF8  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005AB1C 00057BFC  7F C4 F3 78 */	mr r4, r30
/* 8005AB20 00057C00  D0 1C 00 28 */	stfs f0, 0x28(r28)
/* 8005AB24 00057C04  7F E5 FB 78 */	mr r5, r31
/* 8005AB28 00057C08  38 7C 00 28 */	addi r3, r28, 0x28
/* 8005AB2C 00057C0C  38 C6 03 43 */	addi r6, r6, 0x343
/* 8005AB30 00057C10  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005AB34 00057C14  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005AB38 00057C18  C0 62 8A 08 */	lfs f3, "@2917"@sda21(r2)
/* 8005AB3C 00057C1C  48 00 57 75 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005AB40:
/* 8005AB40 00057C20  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005AB44 00057C24  41 82 00 34 */	beq .L_8005AB78
/* 8005AB48 00057C28  C0 02 8A 78 */	lfs f0, "@3305"@sda21(r2)
/* 8005AB4C 00057C2C  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005AB50 00057C30  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005AB54 00057C34  7F C4 F3 78 */	mr r4, r30
/* 8005AB58 00057C38  D0 1C 00 2C */	stfs f0, 0x2c(r28)
/* 8005AB5C 00057C3C  7F E5 FB 78 */	mr r5, r31
/* 8005AB60 00057C40  38 7C 00 2C */	addi r3, r28, 0x2c
/* 8005AB64 00057C44  38 C6 03 5C */	addi r6, r6, 0x35c
/* 8005AB68 00057C48  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005AB6C 00057C4C  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005AB70 00057C50  C0 62 8A 08 */	lfs f3, "@2917"@sda21(r2)
/* 8005AB74 00057C54  48 00 57 3D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005AB78:
/* 8005AB78 00057C58  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005AB7C 00057C5C  41 82 00 4C */	beq .L_8005ABC8
/* 8005AB80 00057C60  C0 22 8A 7C */	lfs f1, "@3306"@sda21(r2)
/* 8005AB84 00057C64  38 61 00 08 */	addi r3, r1, 0x8
/* 8005AB88 00057C68  C0 42 8A 80 */	lfs f2, "@3307"@sda21(r2)
/* 8005AB8C 00057C6C  C0 62 8A 84 */	lfs f3, "@3308"@sda21(r2)
/* 8005AB90 00057C70  48 00 53 F9 */	bl create__5xVec3Ffff
/* 8005AB94 00057C74  38 7C 00 30 */	addi r3, r28, 0x30
/* 8005AB98 00057C78  38 81 00 08 */	addi r4, r1, 0x8
/* 8005AB9C 00057C7C  4B FB 06 C9 */	bl __as__5xVec3FRC5xVec3
/* 8005ABA0 00057C80  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005ABA4 00057C84  7F C7 F3 78 */	mr r7, r30
/* 8005ABA8 00057C88  38 A3 53 3C */	addi r5, r3, "@stringBase0"@l
/* 8005ABAC 00057C8C  7F E8 FB 78 */	mr r8, r31
/* 8005ABB0 00057C90  38 7C 00 30 */	addi r3, r28, 0x30
/* 8005ABB4 00057C94  38 80 00 00 */	li r4, 0x0
/* 8005ABB8 00057C98  39 25 03 74 */	addi r9, r5, 0x374
/* 8005ABBC 00057C9C  38 A0 00 00 */	li r5, 0x0
/* 8005ABC0 00057CA0  38 C0 00 00 */	li r6, 0x0
/* 8005ABC4 00057CA4  48 00 56 19 */	bl "load_param<5xVec3,i>__10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc"
.L_8005ABC8:
/* 8005ABC8 00057CA8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005ABCC 00057CAC  41 82 00 34 */	beq .L_8005AC00
/* 8005ABD0 00057CB0  C0 02 8A 60 */	lfs f0, "@3299"@sda21(r2)
/* 8005ABD4 00057CB4  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005ABD8 00057CB8  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005ABDC 00057CBC  7F C4 F3 78 */	mr r4, r30
/* 8005ABE0 00057CC0  D0 1C 00 3C */	stfs f0, 0x3c(r28)
/* 8005ABE4 00057CC4  7F E5 FB 78 */	mr r5, r31
/* 8005ABE8 00057CC8  38 7C 00 3C */	addi r3, r28, 0x3c
/* 8005ABEC 00057CCC  38 C6 03 89 */	addi r6, r6, 0x389
/* 8005ABF0 00057CD0  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005ABF4 00057CD4  C0 42 89 F4 */	lfs f2, "@2835"@sda21(r2)
/* 8005ABF8 00057CD8  C0 62 8A 58 */	lfs f3, "@3297"@sda21(r2)
/* 8005ABFC 00057CDC  48 00 56 B5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005AC00:
/* 8005AC00 00057CE0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005AC04 00057CE4  41 82 00 34 */	beq .L_8005AC38
/* 8005AC08 00057CE8  C0 02 8A 1C */	lfs f0, "@3181"@sda21(r2)
/* 8005AC0C 00057CEC  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005AC10 00057CF0  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005AC14 00057CF4  7F C4 F3 78 */	mr r4, r30
/* 8005AC18 00057CF8  D0 1C 00 40 */	stfs f0, 0x40(r28)
/* 8005AC1C 00057CFC  7F E5 FB 78 */	mr r5, r31
/* 8005AC20 00057D00  38 7C 00 40 */	addi r3, r28, 0x40
/* 8005AC24 00057D04  38 C6 03 9A */	addi r6, r6, 0x39a
/* 8005AC28 00057D08  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005AC2C 00057D0C  C0 42 89 F4 */	lfs f2, "@2835"@sda21(r2)
/* 8005AC30 00057D10  C0 62 8A 58 */	lfs f3, "@3297"@sda21(r2)
/* 8005AC34 00057D14  48 00 56 7D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005AC38:
/* 8005AC38 00057D18  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005AC3C 00057D1C  41 82 00 34 */	beq .L_8005AC70
/* 8005AC40 00057D20  C0 02 8A 3C */	lfs f0, "@3189"@sda21(r2)
/* 8005AC44 00057D24  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005AC48 00057D28  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005AC4C 00057D2C  7F C4 F3 78 */	mr r4, r30
/* 8005AC50 00057D30  D0 1C 00 44 */	stfs f0, 0x44(r28)
/* 8005AC54 00057D34  7F E5 FB 78 */	mr r5, r31
/* 8005AC58 00057D38  38 7C 00 44 */	addi r3, r28, 0x44
/* 8005AC5C 00057D3C  38 C6 03 AD */	addi r6, r6, 0x3ad
/* 8005AC60 00057D40  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005AC64 00057D44  C0 42 89 F4 */	lfs f2, "@2835"@sda21(r2)
/* 8005AC68 00057D48  C0 62 8A 58 */	lfs f3, "@3297"@sda21(r2)
/* 8005AC6C 00057D4C  48 00 56 45 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005AC70:
/* 8005AC70 00057D50  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005AC74 00057D54  41 82 00 34 */	beq .L_8005ACA8
/* 8005AC78 00057D58  C0 02 8A 88 */	lfs f0, "@3309"@sda21(r2)
/* 8005AC7C 00057D5C  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005AC80 00057D60  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005AC84 00057D64  7F C4 F3 78 */	mr r4, r30
/* 8005AC88 00057D68  D0 1C 00 48 */	stfs f0, 0x48(r28)
/* 8005AC8C 00057D6C  7F E5 FB 78 */	mr r5, r31
/* 8005AC90 00057D70  38 7C 00 48 */	addi r3, r28, 0x48
/* 8005AC94 00057D74  38 C6 03 C9 */	addi r6, r6, 0x3c9
/* 8005AC98 00057D78  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005AC9C 00057D7C  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005ACA0 00057D80  FC 60 08 90 */	fmr f3, f1
/* 8005ACA4 00057D84  48 00 56 0D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005ACA8:
/* 8005ACA8 00057D88  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005ACAC 00057D8C  41 82 00 34 */	beq .L_8005ACE0
/* 8005ACB0 00057D90  C0 02 8A 34 */	lfs f0, "@3187"@sda21(r2)
/* 8005ACB4 00057D94  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005ACB8 00057D98  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005ACBC 00057D9C  7F C4 F3 78 */	mr r4, r30
/* 8005ACC0 00057DA0  D0 1C 00 4C */	stfs f0, 0x4c(r28)
/* 8005ACC4 00057DA4  7F E5 FB 78 */	mr r5, r31
/* 8005ACC8 00057DA8  38 7C 00 4C */	addi r3, r28, 0x4c
/* 8005ACCC 00057DAC  38 C6 03 ED */	addi r6, r6, 0x3ed
/* 8005ACD0 00057DB0  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005ACD4 00057DB4  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005ACD8 00057DB8  C0 62 8A 58 */	lfs f3, "@3297"@sda21(r2)
/* 8005ACDC 00057DBC  48 00 55 D5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005ACE0:
/* 8005ACE0 00057DC0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005ACE4 00057DC4  41 82 00 34 */	beq .L_8005AD18
/* 8005ACE8 00057DC8  C0 02 8A 24 */	lfs f0, "@3183"@sda21(r2)
/* 8005ACEC 00057DCC  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005ACF0 00057DD0  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005ACF4 00057DD4  7F C4 F3 78 */	mr r4, r30
/* 8005ACF8 00057DD8  D0 1C 00 50 */	stfs f0, 0x50(r28)
/* 8005ACFC 00057DDC  7F E5 FB 78 */	mr r5, r31
/* 8005AD00 00057DE0  38 7C 00 50 */	addi r3, r28, 0x50
/* 8005AD04 00057DE4  38 C6 04 07 */	addi r6, r6, 0x407
/* 8005AD08 00057DE8  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005AD0C 00057DEC  C0 42 89 F4 */	lfs f2, "@2835"@sda21(r2)
/* 8005AD10 00057DF0  C0 62 8A 58 */	lfs f3, "@3297"@sda21(r2)
/* 8005AD14 00057DF4  48 00 55 9D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005AD18:
/* 8005AD18 00057DF8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005AD1C 00057DFC  41 82 00 34 */	beq .L_8005AD50
/* 8005AD20 00057E00  C0 02 8A 50 */	lfs f0, "@3194"@sda21(r2)
/* 8005AD24 00057E04  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005AD28 00057E08  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005AD2C 00057E0C  7F C4 F3 78 */	mr r4, r30
/* 8005AD30 00057E10  D0 1C 00 54 */	stfs f0, 0x54(r28)
/* 8005AD34 00057E14  7F E5 FB 78 */	mr r5, r31
/* 8005AD38 00057E18  38 7C 00 54 */	addi r3, r28, 0x54
/* 8005AD3C 00057E1C  38 C6 04 1E */	addi r6, r6, 0x41e
/* 8005AD40 00057E20  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005AD44 00057E24  C0 42 89 F4 */	lfs f2, "@2835"@sda21(r2)
/* 8005AD48 00057E28  C0 62 8A 58 */	lfs f3, "@3297"@sda21(r2)
/* 8005AD4C 00057E2C  48 00 55 65 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005AD50:
/* 8005AD50 00057E30  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005AD54 00057E34  41 82 00 34 */	beq .L_8005AD88
/* 8005AD58 00057E38  C0 02 8A 8C */	lfs f0, "@3310"@sda21(r2)
/* 8005AD5C 00057E3C  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005AD60 00057E40  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005AD64 00057E44  7F C4 F3 78 */	mr r4, r30
/* 8005AD68 00057E48  D0 1C 00 58 */	stfs f0, 0x58(r28)
/* 8005AD6C 00057E4C  7F E5 FB 78 */	mr r5, r31
/* 8005AD70 00057E50  38 7C 00 58 */	addi r3, r28, 0x58
/* 8005AD74 00057E54  38 C6 04 35 */	addi r6, r6, 0x435
/* 8005AD78 00057E58  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005AD7C 00057E5C  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005AD80 00057E60  FC 60 08 90 */	fmr f3, f1
/* 8005AD84 00057E64  48 00 55 2D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005AD88:
/* 8005AD88 00057E68  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005AD8C 00057E6C  41 82 00 34 */	beq .L_8005ADC0
/* 8005AD90 00057E70  C0 02 8A 8C */	lfs f0, "@3310"@sda21(r2)
/* 8005AD94 00057E74  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005AD98 00057E78  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005AD9C 00057E7C  7F C4 F3 78 */	mr r4, r30
/* 8005ADA0 00057E80  D0 1C 00 5C */	stfs f0, 0x5c(r28)
/* 8005ADA4 00057E84  7F E5 FB 78 */	mr r5, r31
/* 8005ADA8 00057E88  38 7C 00 5C */	addi r3, r28, 0x5c
/* 8005ADAC 00057E8C  38 C6 04 4C */	addi r6, r6, 0x44c
/* 8005ADB0 00057E90  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005ADB4 00057E94  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005ADB8 00057E98  FC 60 08 90 */	fmr f3, f1
/* 8005ADBC 00057E9C  48 00 54 F5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005ADC0:
/* 8005ADC0 00057EA0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005ADC4 00057EA4  41 82 00 34 */	beq .L_8005ADF8
/* 8005ADC8 00057EA8  C0 02 8A 90 */	lfs f0, "@3311"@sda21(r2)
/* 8005ADCC 00057EAC  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005ADD0 00057EB0  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005ADD4 00057EB4  7F C4 F3 78 */	mr r4, r30
/* 8005ADD8 00057EB8  D0 1C 00 60 */	stfs f0, 0x60(r28)
/* 8005ADDC 00057EBC  7F E5 FB 78 */	mr r5, r31
/* 8005ADE0 00057EC0  38 7C 00 60 */	addi r3, r28, 0x60
/* 8005ADE4 00057EC4  38 C6 04 63 */	addi r6, r6, 0x463
/* 8005ADE8 00057EC8  C0 22 8A 94 */	lfs f1, "@3312"@sda21(r2)
/* 8005ADEC 00057ECC  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005ADF0 00057ED0  C0 62 89 C0 */	lfs f3, "@1720"@sda21(r2)
/* 8005ADF4 00057ED4  48 00 54 BD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005ADF8:
/* 8005ADF8 00057ED8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005ADFC 00057EDC  41 82 00 34 */	beq .L_8005AE30
/* 8005AE00 00057EE0  C0 02 8A 40 */	lfs f0, "@3190"@sda21(r2)
/* 8005AE04 00057EE4  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005AE08 00057EE8  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005AE0C 00057EEC  7F C4 F3 78 */	mr r4, r30
/* 8005AE10 00057EF0  D0 1C 00 64 */	stfs f0, 0x64(r28)
/* 8005AE14 00057EF4  7F E5 FB 78 */	mr r5, r31
/* 8005AE18 00057EF8  38 7C 00 64 */	addi r3, r28, 0x64
/* 8005AE1C 00057EFC  38 C6 04 7A */	addi r6, r6, 0x47a
/* 8005AE20 00057F00  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005AE24 00057F04  C0 42 89 FC */	lfs f2, "@2883"@sda21(r2)
/* 8005AE28 00057F08  FC 60 08 90 */	fmr f3, f1
/* 8005AE2C 00057F0C  48 00 54 85 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005AE30:
/* 8005AE30 00057F10  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005AE34 00057F14  41 82 00 34 */	beq .L_8005AE68
/* 8005AE38 00057F18  C0 02 89 C0 */	lfs f0, "@1720"@sda21(r2)
/* 8005AE3C 00057F1C  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005AE40 00057F20  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005AE44 00057F24  7F C4 F3 78 */	mr r4, r30
/* 8005AE48 00057F28  D0 1C 00 68 */	stfs f0, 0x68(r28)
/* 8005AE4C 00057F2C  7F E5 FB 78 */	mr r5, r31
/* 8005AE50 00057F30  38 7C 00 68 */	addi r3, r28, 0x68
/* 8005AE54 00057F34  38 C6 04 94 */	addi r6, r6, 0x494
/* 8005AE58 00057F38  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005AE5C 00057F3C  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005AE60 00057F40  C0 62 8A 3C */	lfs f3, "@3189"@sda21(r2)
/* 8005AE64 00057F44  48 00 54 4D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005AE68:
/* 8005AE68 00057F48  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005AE6C 00057F4C  41 82 00 34 */	beq .L_8005AEA0
/* 8005AE70 00057F50  C0 02 89 D8 */	lfs f0, "@2509"@sda21(r2)
/* 8005AE74 00057F54  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005AE78 00057F58  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005AE7C 00057F5C  7F C4 F3 78 */	mr r4, r30
/* 8005AE80 00057F60  D0 1C 00 6C */	stfs f0, 0x6c(r28)
/* 8005AE84 00057F64  7F E5 FB 78 */	mr r5, r31
/* 8005AE88 00057F68  38 7C 00 6C */	addi r3, r28, 0x6c
/* 8005AE8C 00057F6C  38 C6 04 AE */	addi r6, r6, 0x4ae
/* 8005AE90 00057F70  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005AE94 00057F74  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005AE98 00057F78  C0 62 8A 3C */	lfs f3, "@3189"@sda21(r2)
/* 8005AE9C 00057F7C  48 00 54 15 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005AEA0:
/* 8005AEA0 00057F80  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005AEA4 00057F84  41 82 00 34 */	beq .L_8005AED8
/* 8005AEA8 00057F88  C0 02 8A 34 */	lfs f0, "@3187"@sda21(r2)
/* 8005AEAC 00057F8C  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005AEB0 00057F90  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005AEB4 00057F94  7F C4 F3 78 */	mr r4, r30
/* 8005AEB8 00057F98  D0 1C 00 70 */	stfs f0, 0x70(r28)
/* 8005AEBC 00057F9C  7F E5 FB 78 */	mr r5, r31
/* 8005AEC0 00057FA0  38 7C 00 70 */	addi r3, r28, 0x70
/* 8005AEC4 00057FA4  38 C6 04 CA */	addi r6, r6, 0x4ca
/* 8005AEC8 00057FA8  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005AECC 00057FAC  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005AED0 00057FB0  C0 62 8A 08 */	lfs f3, "@2917"@sda21(r2)
/* 8005AED4 00057FB4  48 00 53 DD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005AED8:
/* 8005AED8 00057FB8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005AEDC 00057FBC  41 82 00 34 */	beq .L_8005AF10
/* 8005AEE0 00057FC0  C0 02 8A 98 */	lfs f0, "@3313"@sda21(r2)
/* 8005AEE4 00057FC4  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005AEE8 00057FC8  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005AEEC 00057FCC  7F C4 F3 78 */	mr r4, r30
/* 8005AEF0 00057FD0  D0 1C 00 74 */	stfs f0, 0x74(r28)
/* 8005AEF4 00057FD4  7F E5 FB 78 */	mr r5, r31
/* 8005AEF8 00057FD8  38 7C 00 74 */	addi r3, r28, 0x74
/* 8005AEFC 00057FDC  38 C6 04 DA */	addi r6, r6, 0x4da
/* 8005AF00 00057FE0  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005AF04 00057FE4  C0 42 8A 9C */	lfs f2, "@3314"@sda21(r2)
/* 8005AF08 00057FE8  C0 62 8A 3C */	lfs f3, "@3189"@sda21(r2)
/* 8005AF0C 00057FEC  48 00 53 A5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005AF10:
/* 8005AF10 00057FF0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005AF14 00057FF4  41 82 00 34 */	beq .L_8005AF48
/* 8005AF18 00057FF8  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005AF1C 00057FFC  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005AF20 00058000  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005AF24 00058004  7F C4 F3 78 */	mr r4, r30
/* 8005AF28 00058008  D0 1C 00 78 */	stfs f0, 0x78(r28)
/* 8005AF2C 0005800C  7F E5 FB 78 */	mr r5, r31
/* 8005AF30 00058010  38 7C 00 78 */	addi r3, r28, 0x78
/* 8005AF34 00058014  38 C6 04 EC */	addi r6, r6, 0x4ec
/* 8005AF38 00058018  C0 22 8A 68 */	lfs f1, "@3301"@sda21(r2)
/* 8005AF3C 0005801C  C0 42 8A A0 */	lfs f2, "@3315"@sda21(r2)
/* 8005AF40 00058020  C0 62 8A 44 */	lfs f3, "@3191"@sda21(r2)
/* 8005AF44 00058024  48 00 53 6D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005AF48:
/* 8005AF48 00058028  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005AF4C 0005802C  41 82 00 34 */	beq .L_8005AF80
/* 8005AF50 00058030  C0 02 8A 3C */	lfs f0, "@3189"@sda21(r2)
/* 8005AF54 00058034  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005AF58 00058038  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005AF5C 0005803C  7F C4 F3 78 */	mr r4, r30
/* 8005AF60 00058040  D0 1C 00 7C */	stfs f0, 0x7c(r28)
/* 8005AF64 00058044  7F E5 FB 78 */	mr r5, r31
/* 8005AF68 00058048  38 7C 00 7C */	addi r3, r28, 0x7c
/* 8005AF6C 0005804C  38 C6 04 FD */	addi r6, r6, 0x4fd
/* 8005AF70 00058050  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005AF74 00058054  C0 42 89 F4 */	lfs f2, "@2835"@sda21(r2)
/* 8005AF78 00058058  C0 62 8A 58 */	lfs f3, "@3297"@sda21(r2)
/* 8005AF7C 0005805C  48 00 53 35 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005AF80:
/* 8005AF80 00058060  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005AF84 00058064  41 82 00 34 */	beq .L_8005AFB8
/* 8005AF88 00058068  C0 02 8A 24 */	lfs f0, "@3183"@sda21(r2)
/* 8005AF8C 0005806C  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005AF90 00058070  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005AF94 00058074  7F C4 F3 78 */	mr r4, r30
/* 8005AF98 00058078  D0 1C 00 80 */	stfs f0, 0x80(r28)
/* 8005AF9C 0005807C  7F E5 FB 78 */	mr r5, r31
/* 8005AFA0 00058080  38 7C 00 80 */	addi r3, r28, 0x80
/* 8005AFA4 00058084  38 C6 05 0E */	addi r6, r6, 0x50e
/* 8005AFA8 00058088  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005AFAC 0005808C  C0 42 89 F4 */	lfs f2, "@2835"@sda21(r2)
/* 8005AFB0 00058090  C0 62 8A 58 */	lfs f3, "@3297"@sda21(r2)
/* 8005AFB4 00058094  48 00 52 FD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005AFB8:
/* 8005AFB8 00058098  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005AFBC 0005809C  41 82 00 34 */	beq .L_8005AFF0
/* 8005AFC0 000580A0  C0 02 8A A4 */	lfs f0, "@3316"@sda21(r2)
/* 8005AFC4 000580A4  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005AFC8 000580A8  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005AFCC 000580AC  7F C4 F3 78 */	mr r4, r30
/* 8005AFD0 000580B0  D0 1C 00 84 */	stfs f0, 0x84(r28)
/* 8005AFD4 000580B4  7F E5 FB 78 */	mr r5, r31
/* 8005AFD8 000580B8  38 7C 00 84 */	addi r3, r28, 0x84
/* 8005AFDC 000580BC  38 C6 05 21 */	addi r6, r6, 0x521
/* 8005AFE0 000580C0  C0 22 8A 68 */	lfs f1, "@3301"@sda21(r2)
/* 8005AFE4 000580C4  C0 42 89 F4 */	lfs f2, "@2835"@sda21(r2)
/* 8005AFE8 000580C8  C0 62 8A 58 */	lfs f3, "@3297"@sda21(r2)
/* 8005AFEC 000580CC  48 00 52 C5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005AFF0:
/* 8005AFF0 000580D0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005AFF4 000580D4  41 82 00 34 */	beq .L_8005B028
/* 8005AFF8 000580D8  C0 02 8A A8 */	lfs f0, "@3317"@sda21(r2)
/* 8005AFFC 000580DC  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B000 000580E0  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B004 000580E4  7F C4 F3 78 */	mr r4, r30
/* 8005B008 000580E8  D0 1C 00 88 */	stfs f0, 0x88(r28)
/* 8005B00C 000580EC  7F E5 FB 78 */	mr r5, r31
/* 8005B010 000580F0  38 7C 00 88 */	addi r3, r28, 0x88
/* 8005B014 000580F4  38 C6 05 38 */	addi r6, r6, 0x538
/* 8005B018 000580F8  C0 22 8A 68 */	lfs f1, "@3301"@sda21(r2)
/* 8005B01C 000580FC  C0 42 89 F4 */	lfs f2, "@2835"@sda21(r2)
/* 8005B020 00058100  C0 62 8A 58 */	lfs f3, "@3297"@sda21(r2)
/* 8005B024 00058104  48 00 52 8D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B028:
/* 8005B028 00058108  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B02C 0005810C  41 82 00 34 */	beq .L_8005B060
/* 8005B030 00058110  C0 02 8A AC */	lfs f0, "@3318"@sda21(r2)
/* 8005B034 00058114  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B038 00058118  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B03C 0005811C  7F C4 F3 78 */	mr r4, r30
/* 8005B040 00058120  D0 1C 00 8C */	stfs f0, 0x8c(r28)
/* 8005B044 00058124  7F E5 FB 78 */	mr r5, r31
/* 8005B048 00058128  38 7C 00 8C */	addi r3, r28, 0x8c
/* 8005B04C 0005812C  38 C6 05 4F */	addi r6, r6, 0x54f
/* 8005B050 00058130  C0 22 8A 68 */	lfs f1, "@3301"@sda21(r2)
/* 8005B054 00058134  C0 42 89 F4 */	lfs f2, "@2835"@sda21(r2)
/* 8005B058 00058138  C0 62 8A 58 */	lfs f3, "@3297"@sda21(r2)
/* 8005B05C 0005813C  48 00 52 55 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B060:
/* 8005B060 00058140  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B064 00058144  41 82 00 34 */	beq .L_8005B098
/* 8005B068 00058148  C0 02 8A 40 */	lfs f0, "@3190"@sda21(r2)
/* 8005B06C 0005814C  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B070 00058150  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B074 00058154  7F C4 F3 78 */	mr r4, r30
/* 8005B078 00058158  D0 1C 00 90 */	stfs f0, 0x90(r28)
/* 8005B07C 0005815C  7F E5 FB 78 */	mr r5, r31
/* 8005B080 00058160  38 7C 00 90 */	addi r3, r28, 0x90
/* 8005B084 00058164  38 C6 05 68 */	addi r6, r6, 0x568
/* 8005B088 00058168  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B08C 0005816C  C0 42 8A B0 */	lfs f2, "@3319"@sda21(r2)
/* 8005B090 00058170  C0 62 8A 58 */	lfs f3, "@3297"@sda21(r2)
/* 8005B094 00058174  48 00 52 1D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B098:
/* 8005B098 00058178  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B09C 0005817C  41 82 00 34 */	beq .L_8005B0D0
/* 8005B0A0 00058180  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005B0A4 00058184  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B0A8 00058188  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B0AC 0005818C  7F C4 F3 78 */	mr r4, r30
/* 8005B0B0 00058190  D0 1C 00 94 */	stfs f0, 0x94(r28)
/* 8005B0B4 00058194  7F E5 FB 78 */	mr r5, r31
/* 8005B0B8 00058198  38 7C 00 94 */	addi r3, r28, 0x94
/* 8005B0BC 0005819C  38 C6 05 7E */	addi r6, r6, 0x57e
/* 8005B0C0 000581A0  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B0C4 000581A4  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B0C8 000581A8  C0 62 8A 58 */	lfs f3, "@3297"@sda21(r2)
/* 8005B0CC 000581AC  48 00 51 E5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B0D0:
/* 8005B0D0 000581B0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B0D4 000581B4  41 82 00 34 */	beq .L_8005B108
/* 8005B0D8 000581B8  C0 02 8A 98 */	lfs f0, "@3313"@sda21(r2)
/* 8005B0DC 000581BC  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B0E0 000581C0  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B0E4 000581C4  7F C4 F3 78 */	mr r4, r30
/* 8005B0E8 000581C8  D0 1C 00 98 */	stfs f0, 0x98(r28)
/* 8005B0EC 000581CC  7F E5 FB 78 */	mr r5, r31
/* 8005B0F0 000581D0  38 7C 00 98 */	addi r3, r28, 0x98
/* 8005B0F4 000581D4  38 C6 05 91 */	addi r6, r6, 0x591
/* 8005B0F8 000581D8  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B0FC 000581DC  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B100 000581E0  C0 62 8A 58 */	lfs f3, "@3297"@sda21(r2)
/* 8005B104 000581E4  48 00 51 AD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B108:
/* 8005B108 000581E8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B10C 000581EC  41 82 00 34 */	beq .L_8005B140
/* 8005B110 000581F0  C0 02 8A 34 */	lfs f0, "@3187"@sda21(r2)
/* 8005B114 000581F4  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B118 000581F8  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B11C 000581FC  7F C4 F3 78 */	mr r4, r30
/* 8005B120 00058200  D0 1C 00 9C */	stfs f0, 0x9c(r28)
/* 8005B124 00058204  7F E5 FB 78 */	mr r5, r31
/* 8005B128 00058208  38 7C 00 9C */	addi r3, r28, 0x9c
/* 8005B12C 0005820C  38 C6 05 A9 */	addi r6, r6, 0x5a9
/* 8005B130 00058210  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B134 00058214  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B138 00058218  C0 62 8A 3C */	lfs f3, "@3189"@sda21(r2)
/* 8005B13C 0005821C  48 00 51 75 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B140:
/* 8005B140 00058220  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B144 00058224  41 82 00 34 */	beq .L_8005B178
/* 8005B148 00058228  C0 02 89 C0 */	lfs f0, "@1720"@sda21(r2)
/* 8005B14C 0005822C  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B150 00058230  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B154 00058234  7F C4 F3 78 */	mr r4, r30
/* 8005B158 00058238  D0 1C 00 A0 */	stfs f0, 0xa0(r28)
/* 8005B15C 0005823C  7F E5 FB 78 */	mr r5, r31
/* 8005B160 00058240  38 7C 00 A0 */	addi r3, r28, 0xa0
/* 8005B164 00058244  38 C6 05 C0 */	addi r6, r6, 0x5c0
/* 8005B168 00058248  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B16C 0005824C  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B170 00058250  C0 62 8A 3C */	lfs f3, "@3189"@sda21(r2)
/* 8005B174 00058254  48 00 51 3D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B178:
/* 8005B178 00058258  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B17C 0005825C  41 82 00 34 */	beq .L_8005B1B0
/* 8005B180 00058260  C0 02 8A B4 */	lfs f0, "@3320"@sda21(r2)
/* 8005B184 00058264  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B188 00058268  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B18C 0005826C  7F C4 F3 78 */	mr r4, r30
/* 8005B190 00058270  D0 1C 00 A4 */	stfs f0, 0xa4(r28)
/* 8005B194 00058274  7F E5 FB 78 */	mr r5, r31
/* 8005B198 00058278  38 7C 00 A4 */	addi r3, r28, 0xa4
/* 8005B19C 0005827C  38 C6 05 D7 */	addi r6, r6, 0x5d7
/* 8005B1A0 00058280  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B1A4 00058284  C0 42 8A 3C */	lfs f2, "@3189"@sda21(r2)
/* 8005B1A8 00058288  C0 62 8A B8 */	lfs f3, "@3321"@sda21(r2)
/* 8005B1AC 0005828C  48 00 51 05 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B1B0:
/* 8005B1B0 00058290  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B1B4 00058294  41 82 00 34 */	beq .L_8005B1E8
/* 8005B1B8 00058298  C0 02 8A 34 */	lfs f0, "@3187"@sda21(r2)
/* 8005B1BC 0005829C  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B1C0 000582A0  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B1C4 000582A4  7F C4 F3 78 */	mr r4, r30
/* 8005B1C8 000582A8  D0 1C 00 A8 */	stfs f0, 0xa8(r28)
/* 8005B1CC 000582AC  7F E5 FB 78 */	mr r5, r31
/* 8005B1D0 000582B0  38 7C 00 A8 */	addi r3, r28, 0xa8
/* 8005B1D4 000582B4  38 C6 05 E8 */	addi r6, r6, 0x5e8
/* 8005B1D8 000582B8  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B1DC 000582BC  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B1E0 000582C0  C0 62 8A 3C */	lfs f3, "@3189"@sda21(r2)
/* 8005B1E4 000582C4  48 00 50 CD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B1E8:
/* 8005B1E8 000582C8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B1EC 000582CC  41 82 00 34 */	beq .L_8005B220
/* 8005B1F0 000582D0  C0 02 89 D8 */	lfs f0, "@2509"@sda21(r2)
/* 8005B1F4 000582D4  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B1F8 000582D8  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B1FC 000582DC  7F C4 F3 78 */	mr r4, r30
/* 8005B200 000582E0  D0 1C 00 AC */	stfs f0, 0xac(r28)
/* 8005B204 000582E4  7F E5 FB 78 */	mr r5, r31
/* 8005B208 000582E8  38 7C 00 AC */	addi r3, r28, 0xac
/* 8005B20C 000582EC  38 C6 05 FF */	addi r6, r6, 0x5ff
/* 8005B210 000582F0  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B214 000582F4  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B218 000582F8  C0 62 8A 3C */	lfs f3, "@3189"@sda21(r2)
/* 8005B21C 000582FC  48 00 50 95 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B220:
/* 8005B220 00058300  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B224 00058304  41 82 00 34 */	beq .L_8005B258
/* 8005B228 00058308  C0 02 8A 3C */	lfs f0, "@3189"@sda21(r2)
/* 8005B22C 0005830C  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B230 00058310  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B234 00058314  7F C4 F3 78 */	mr r4, r30
/* 8005B238 00058318  D0 1C 00 B0 */	stfs f0, 0xb0(r28)
/* 8005B23C 0005831C  7F E5 FB 78 */	mr r5, r31
/* 8005B240 00058320  38 7C 00 B0 */	addi r3, r28, 0xb0
/* 8005B244 00058324  38 C6 06 1A */	addi r6, r6, 0x61a
/* 8005B248 00058328  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B24C 0005832C  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B250 00058330  C0 62 8A 08 */	lfs f3, "@2917"@sda21(r2)
/* 8005B254 00058334  48 00 50 5D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B258:
/* 8005B258 00058338  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B25C 0005833C  41 82 00 34 */	beq .L_8005B290
/* 8005B260 00058340  C0 02 8A 60 */	lfs f0, "@3299"@sda21(r2)
/* 8005B264 00058344  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B268 00058348  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B26C 0005834C  7F C4 F3 78 */	mr r4, r30
/* 8005B270 00058350  D0 1C 00 B4 */	stfs f0, 0xb4(r28)
/* 8005B274 00058354  7F E5 FB 78 */	mr r5, r31
/* 8005B278 00058358  38 7C 00 B4 */	addi r3, r28, 0xb4
/* 8005B27C 0005835C  38 C6 06 31 */	addi r6, r6, 0x631
/* 8005B280 00058360  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B284 00058364  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B288 00058368  C0 62 8A 08 */	lfs f3, "@2917"@sda21(r2)
/* 8005B28C 0005836C  48 00 50 25 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B290:
/* 8005B290 00058370  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B294 00058374  41 82 00 34 */	beq .L_8005B2C8
/* 8005B298 00058378  C0 02 8A 54 */	lfs f0, "@3195"@sda21(r2)
/* 8005B29C 0005837C  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B2A0 00058380  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B2A4 00058384  7F C4 F3 78 */	mr r4, r30
/* 8005B2A8 00058388  D0 1C 00 B8 */	stfs f0, 0xb8(r28)
/* 8005B2AC 0005838C  7F E5 FB 78 */	mr r5, r31
/* 8005B2B0 00058390  38 7C 00 B8 */	addi r3, r28, 0xb8
/* 8005B2B4 00058394  38 C6 06 48 */	addi r6, r6, 0x648
/* 8005B2B8 00058398  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B2BC 0005839C  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B2C0 000583A0  C0 62 8A 08 */	lfs f3, "@2917"@sda21(r2)
/* 8005B2C4 000583A4  48 00 4F ED */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B2C8:
/* 8005B2C8 000583A8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B2CC 000583AC  41 82 00 34 */	beq .L_8005B300
/* 8005B2D0 000583B0  C0 02 8A 30 */	lfs f0, "@3186"@sda21(r2)
/* 8005B2D4 000583B4  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B2D8 000583B8  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B2DC 000583BC  7F C4 F3 78 */	mr r4, r30
/* 8005B2E0 000583C0  D0 1C 00 BC */	stfs f0, 0xbc(r28)
/* 8005B2E4 000583C4  7F E5 FB 78 */	mr r5, r31
/* 8005B2E8 000583C8  38 7C 00 BC */	addi r3, r28, 0xbc
/* 8005B2EC 000583CC  38 C6 06 61 */	addi r6, r6, 0x661
/* 8005B2F0 000583D0  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B2F4 000583D4  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B2F8 000583D8  C0 62 89 C8 */	lfs f3, "@1728"@sda21(r2)
/* 8005B2FC 000583DC  48 00 4F B5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B300:
/* 8005B300 000583E0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B304 000583E4  41 82 00 34 */	beq .L_8005B338
/* 8005B308 000583E8  C0 02 8A BC */	lfs f0, "@3322"@sda21(r2)
/* 8005B30C 000583EC  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B310 000583F0  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B314 000583F4  7F C4 F3 78 */	mr r4, r30
/* 8005B318 000583F8  D0 1C 00 C0 */	stfs f0, 0xc0(r28)
/* 8005B31C 000583FC  7F E5 FB 78 */	mr r5, r31
/* 8005B320 00058400  38 7C 00 C0 */	addi r3, r28, 0xc0
/* 8005B324 00058404  38 C6 06 7E */	addi r6, r6, 0x67e
/* 8005B328 00058408  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B32C 0005840C  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B330 00058410  C0 62 8A 34 */	lfs f3, "@3187"@sda21(r2)
/* 8005B334 00058414  48 00 4F 7D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B338:
/* 8005B338 00058418  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B33C 0005841C  41 82 00 34 */	beq .L_8005B370
/* 8005B340 00058420  C0 02 8A 90 */	lfs f0, "@3311"@sda21(r2)
/* 8005B344 00058424  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B348 00058428  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B34C 0005842C  7F C4 F3 78 */	mr r4, r30
/* 8005B350 00058430  D0 1C 00 C4 */	stfs f0, 0xc4(r28)
/* 8005B354 00058434  7F E5 FB 78 */	mr r5, r31
/* 8005B358 00058438  38 7C 00 C4 */	addi r3, r28, 0xc4
/* 8005B35C 0005843C  38 C6 06 98 */	addi r6, r6, 0x698
/* 8005B360 00058440  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B364 00058444  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B368 00058448  FC 60 08 90 */	fmr f3, f1
/* 8005B36C 0005844C  48 00 4F 45 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B370:
/* 8005B370 00058450  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B374 00058454  41 82 00 34 */	beq .L_8005B3A8
/* 8005B378 00058458  C0 02 89 D8 */	lfs f0, "@2509"@sda21(r2)
/* 8005B37C 0005845C  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B380 00058460  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B384 00058464  7F C4 F3 78 */	mr r4, r30
/* 8005B388 00058468  D0 1C 00 C8 */	stfs f0, 0xc8(r28)
/* 8005B38C 0005846C  7F E5 FB 78 */	mr r5, r31
/* 8005B390 00058470  38 7C 00 C8 */	addi r3, r28, 0xc8
/* 8005B394 00058474  38 C6 06 B3 */	addi r6, r6, 0x6b3
/* 8005B398 00058478  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B39C 0005847C  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B3A0 00058480  FC 60 08 90 */	fmr f3, f1
/* 8005B3A4 00058484  48 00 4F 0D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B3A8:
/* 8005B3A8 00058488  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B3AC 0005848C  41 82 00 34 */	beq .L_8005B3E0
/* 8005B3B0 00058490  C0 02 89 C8 */	lfs f0, "@1728"@sda21(r2)
/* 8005B3B4 00058494  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B3B8 00058498  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B3BC 0005849C  7F C4 F3 78 */	mr r4, r30
/* 8005B3C0 000584A0  D0 1C 00 CC */	stfs f0, 0xcc(r28)
/* 8005B3C4 000584A4  7F E5 FB 78 */	mr r5, r31
/* 8005B3C8 000584A8  38 7C 00 CC */	addi r3, r28, 0xcc
/* 8005B3CC 000584AC  38 C6 06 D0 */	addi r6, r6, 0x6d0
/* 8005B3D0 000584B0  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B3D4 000584B4  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B3D8 000584B8  FC 60 08 90 */	fmr f3, f1
/* 8005B3DC 000584BC  48 00 4E D5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B3E0:
/* 8005B3E0 000584C0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B3E4 000584C4  41 82 00 34 */	beq .L_8005B418
/* 8005B3E8 000584C8  C0 02 89 C8 */	lfs f0, "@1728"@sda21(r2)
/* 8005B3EC 000584CC  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B3F0 000584D0  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B3F4 000584D4  7F C4 F3 78 */	mr r4, r30
/* 8005B3F8 000584D8  D0 1C 00 D0 */	stfs f0, 0xd0(r28)
/* 8005B3FC 000584DC  7F E5 FB 78 */	mr r5, r31
/* 8005B400 000584E0  38 7C 00 D0 */	addi r3, r28, 0xd0
/* 8005B404 000584E4  38 C6 06 E3 */	addi r6, r6, 0x6e3
/* 8005B408 000584E8  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B40C 000584EC  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B410 000584F0  FC 60 08 90 */	fmr f3, f1
/* 8005B414 000584F4  48 00 4E 9D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B418:
/* 8005B418 000584F8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B41C 000584FC  41 82 00 34 */	beq .L_8005B450
/* 8005B420 00058500  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005B424 00058504  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B428 00058508  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B42C 0005850C  7F C4 F3 78 */	mr r4, r30
/* 8005B430 00058510  D0 1C 00 D8 */	stfs f0, 0xd8(r28)
/* 8005B434 00058514  7F E5 FB 78 */	mr r5, r31
/* 8005B438 00058518  38 7C 00 D8 */	addi r3, r28, 0xd8
/* 8005B43C 0005851C  38 C6 06 F6 */	addi r6, r6, 0x6f6
/* 8005B440 00058520  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B444 00058524  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B448 00058528  FC 60 08 90 */	fmr f3, f1
/* 8005B44C 0005852C  48 00 4E 65 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B450:
/* 8005B450 00058530  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B454 00058534  41 82 00 34 */	beq .L_8005B488
/* 8005B458 00058538  C0 02 8A 38 */	lfs f0, "@3188"@sda21(r2)
/* 8005B45C 0005853C  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B460 00058540  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B464 00058544  7F C4 F3 78 */	mr r4, r30
/* 8005B468 00058548  D0 1C 00 DC */	stfs f0, 0xdc(r28)
/* 8005B46C 0005854C  7F E5 FB 78 */	mr r5, r31
/* 8005B470 00058550  38 7C 00 DC */	addi r3, r28, 0xdc
/* 8005B474 00058554  38 C6 07 0D */	addi r6, r6, 0x70d
/* 8005B478 00058558  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B47C 0005855C  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B480 00058560  FC 60 08 90 */	fmr f3, f1
/* 8005B484 00058564  48 00 4E 2D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B488:
/* 8005B488 00058568  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B48C 0005856C  41 82 00 34 */	beq .L_8005B4C0
/* 8005B490 00058570  C0 02 89 CC */	lfs f0, "@1729"@sda21(r2)
/* 8005B494 00058574  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B498 00058578  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B49C 0005857C  7F C4 F3 78 */	mr r4, r30
/* 8005B4A0 00058580  D0 1C 00 E4 */	stfs f0, 0xe4(r28)
/* 8005B4A4 00058584  7F E5 FB 78 */	mr r5, r31
/* 8005B4A8 00058588  38 7C 00 E4 */	addi r3, r28, 0xe4
/* 8005B4AC 0005858C  38 C6 07 24 */	addi r6, r6, 0x724
/* 8005B4B0 00058590  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B4B4 00058594  C0 62 8A 3C */	lfs f3, "@3189"@sda21(r2)
/* 8005B4B8 00058598  FC 40 08 90 */	fmr f2, f1
/* 8005B4BC 0005859C  48 00 4D F5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B4C0:
/* 8005B4C0 000585A0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B4C4 000585A4  41 82 00 34 */	beq .L_8005B4F8
/* 8005B4C8 000585A8  C0 02 8A 64 */	lfs f0, "@3300"@sda21(r2)
/* 8005B4CC 000585AC  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B4D0 000585B0  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B4D4 000585B4  7F C4 F3 78 */	mr r4, r30
/* 8005B4D8 000585B8  D0 1C 00 E8 */	stfs f0, 0xe8(r28)
/* 8005B4DC 000585BC  7F E5 FB 78 */	mr r5, r31
/* 8005B4E0 000585C0  38 7C 00 E8 */	addi r3, r28, 0xe8
/* 8005B4E4 000585C4  38 C6 07 35 */	addi r6, r6, 0x735
/* 8005B4E8 000585C8  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B4EC 000585CC  C0 62 8A C0 */	lfs f3, "@3323"@sda21(r2)
/* 8005B4F0 000585D0  FC 40 08 90 */	fmr f2, f1
/* 8005B4F4 000585D4  48 00 4D BD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B4F8:
/* 8005B4F8 000585D8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B4FC 000585DC  41 82 00 34 */	beq .L_8005B530
/* 8005B500 000585E0  C0 02 8A 50 */	lfs f0, "@3194"@sda21(r2)
/* 8005B504 000585E4  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B508 000585E8  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B50C 000585EC  7F C4 F3 78 */	mr r4, r30
/* 8005B510 000585F0  D0 1C 00 EC */	stfs f0, 0xec(r28)
/* 8005B514 000585F4  7F E5 FB 78 */	mr r5, r31
/* 8005B518 000585F8  38 7C 00 EC */	addi r3, r28, 0xec
/* 8005B51C 000585FC  38 C6 07 46 */	addi r6, r6, 0x746
/* 8005B520 00058600  C0 22 8A 68 */	lfs f1, "@3301"@sda21(r2)
/* 8005B524 00058604  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B528 00058608  C0 62 8A 44 */	lfs f3, "@3191"@sda21(r2)
/* 8005B52C 0005860C  48 00 4D 85 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B530:
/* 8005B530 00058610  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B534 00058614  41 82 00 34 */	beq .L_8005B568
/* 8005B538 00058618  C0 02 8A C4 */	lfs f0, "@3324"@sda21(r2)
/* 8005B53C 0005861C  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B540 00058620  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B544 00058624  7F C4 F3 78 */	mr r4, r30
/* 8005B548 00058628  D0 1C 00 F0 */	stfs f0, 0xf0(r28)
/* 8005B54C 0005862C  7F E5 FB 78 */	mr r5, r31
/* 8005B550 00058630  38 7C 00 F0 */	addi r3, r28, 0xf0
/* 8005B554 00058634  38 C6 07 57 */	addi r6, r6, 0x757
/* 8005B558 00058638  C0 22 8A 68 */	lfs f1, "@3301"@sda21(r2)
/* 8005B55C 0005863C  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B560 00058640  C0 62 8A 44 */	lfs f3, "@3191"@sda21(r2)
/* 8005B564 00058644  48 00 4D 4D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B568:
/* 8005B568 00058648  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B56C 0005864C  41 82 00 34 */	beq .L_8005B5A0
/* 8005B570 00058650  C0 02 89 D8 */	lfs f0, "@2509"@sda21(r2)
/* 8005B574 00058654  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B578 00058658  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B57C 0005865C  7F C4 F3 78 */	mr r4, r30
/* 8005B580 00058660  D0 1C 00 F4 */	stfs f0, 0xf4(r28)
/* 8005B584 00058664  7F E5 FB 78 */	mr r5, r31
/* 8005B588 00058668  38 7C 00 F4 */	addi r3, r28, 0xf4
/* 8005B58C 0005866C  38 C6 07 68 */	addi r6, r6, 0x768
/* 8005B590 00058670  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B594 00058674  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B598 00058678  C0 62 8A 24 */	lfs f3, "@3183"@sda21(r2)
/* 8005B59C 0005867C  48 00 4D 15 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B5A0:
/* 8005B5A0 00058680  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B5A4 00058684  41 82 00 34 */	beq .L_8005B5D8
/* 8005B5A8 00058688  C0 02 8A 6C */	lfs f0, "@3302"@sda21(r2)
/* 8005B5AC 0005868C  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B5B0 00058690  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B5B4 00058694  7F C4 F3 78 */	mr r4, r30
/* 8005B5B8 00058698  D0 1C 00 F8 */	stfs f0, 0xf8(r28)
/* 8005B5BC 0005869C  7F E5 FB 78 */	mr r5, r31
/* 8005B5C0 000586A0  38 7C 00 F8 */	addi r3, r28, 0xf8
/* 8005B5C4 000586A4  38 C6 07 7F */	addi r6, r6, 0x77f
/* 8005B5C8 000586A8  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B5CC 000586AC  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B5D0 000586B0  C0 62 8A C0 */	lfs f3, "@3323"@sda21(r2)
/* 8005B5D4 000586B4  48 00 4C DD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B5D8:
/* 8005B5D8 000586B8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B5DC 000586BC  41 82 00 34 */	beq .L_8005B610
/* 8005B5E0 000586C0  C0 02 8A 6C */	lfs f0, "@3302"@sda21(r2)
/* 8005B5E4 000586C4  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B5E8 000586C8  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B5EC 000586CC  7F C4 F3 78 */	mr r4, r30
/* 8005B5F0 000586D0  D0 1C 00 FC */	stfs f0, 0xfc(r28)
/* 8005B5F4 000586D4  7F E5 FB 78 */	mr r5, r31
/* 8005B5F8 000586D8  38 7C 00 FC */	addi r3, r28, 0xfc
/* 8005B5FC 000586DC  38 C6 07 91 */	addi r6, r6, 0x791
/* 8005B600 000586E0  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B604 000586E4  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B608 000586E8  C0 62 8A C0 */	lfs f3, "@3323"@sda21(r2)
/* 8005B60C 000586EC  48 00 4C A5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B610:
/* 8005B610 000586F0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B614 000586F4  41 82 00 34 */	beq .L_8005B648
/* 8005B618 000586F8  C0 02 89 C8 */	lfs f0, "@1728"@sda21(r2)
/* 8005B61C 000586FC  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B620 00058700  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B624 00058704  7F C4 F3 78 */	mr r4, r30
/* 8005B628 00058708  D0 1C 01 00 */	stfs f0, 0x100(r28)
/* 8005B62C 0005870C  7F E5 FB 78 */	mr r5, r31
/* 8005B630 00058710  38 7C 01 00 */	addi r3, r28, 0x100
/* 8005B634 00058714  38 C6 07 A3 */	addi r6, r6, 0x7a3
/* 8005B638 00058718  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B63C 0005871C  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B640 00058720  C0 62 8A 3C */	lfs f3, "@3189"@sda21(r2)
/* 8005B644 00058724  48 00 4C 6D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B648:
/* 8005B648 00058728  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B64C 0005872C  41 82 00 34 */	beq .L_8005B680
/* 8005B650 00058730  C0 02 8A 30 */	lfs f0, "@3186"@sda21(r2)
/* 8005B654 00058734  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B658 00058738  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B65C 0005873C  7F C4 F3 78 */	mr r4, r30
/* 8005B660 00058740  D0 1C 01 04 */	stfs f0, 0x104(r28)
/* 8005B664 00058744  7F E5 FB 78 */	mr r5, r31
/* 8005B668 00058748  38 7C 01 04 */	addi r3, r28, 0x104
/* 8005B66C 0005874C  38 C6 07 BC */	addi r6, r6, 0x7bc
/* 8005B670 00058750  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B674 00058754  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B678 00058758  C0 62 8A 3C */	lfs f3, "@3189"@sda21(r2)
/* 8005B67C 0005875C  48 00 4C 35 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B680:
/* 8005B680 00058760  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B684 00058764  41 82 00 34 */	beq .L_8005B6B8
/* 8005B688 00058768  38 00 01 2C */	li r0, 0x12c
/* 8005B68C 0005876C  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B690 00058770  38 83 53 3C */	addi r4, r3, "@stringBase0"@l
/* 8005B694 00058774  90 1C 01 08 */	stw r0, 0x108(r28)
/* 8005B698 00058778  7F C7 F3 78 */	mr r7, r30
/* 8005B69C 0005877C  7F E8 FB 78 */	mr r8, r31
/* 8005B6A0 00058780  38 7C 01 08 */	addi r3, r28, 0x108
/* 8005B6A4 00058784  39 24 07 D3 */	addi r9, r4, 0x7d3
/* 8005B6A8 00058788  38 80 00 01 */	li r4, 0x1
/* 8005B6AC 0005878C  38 A0 00 00 */	li r5, 0x0
/* 8005B6B0 00058790  38 C0 03 E8 */	li r6, 0x3e8
/* 8005B6B4 00058794  48 00 4A A5 */	bl "load_param<Ui,i>__10auto_tweakFRUiiiiP16xModelAssetParamUiPCc"
.L_8005B6B8:
/* 8005B6B8 00058798  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B6BC 0005879C  41 82 00 34 */	beq .L_8005B6F0
/* 8005B6C0 000587A0  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005B6C4 000587A4  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B6C8 000587A8  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B6CC 000587AC  7F C4 F3 78 */	mr r4, r30
/* 8005B6D0 000587B0  D0 1C 01 0C */	stfs f0, 0x10c(r28)
/* 8005B6D4 000587B4  7F E5 FB 78 */	mr r5, r31
/* 8005B6D8 000587B8  38 7C 01 0C */	addi r3, r28, 0x10c
/* 8005B6DC 000587BC  38 C6 07 DE */	addi r6, r6, 0x7de
/* 8005B6E0 000587C0  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B6E4 000587C4  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B6E8 000587C8  C0 62 8A 3C */	lfs f3, "@3189"@sda21(r2)
/* 8005B6EC 000587CC  48 00 4B C5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B6F0:
/* 8005B6F0 000587D0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B6F4 000587D4  41 82 00 34 */	beq .L_8005B728
/* 8005B6F8 000587D8  C0 02 8A 24 */	lfs f0, "@3183"@sda21(r2)
/* 8005B6FC 000587DC  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B700 000587E0  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B704 000587E4  7F C4 F3 78 */	mr r4, r30
/* 8005B708 000587E8  D0 1C 01 10 */	stfs f0, 0x110(r28)
/* 8005B70C 000587EC  7F E5 FB 78 */	mr r5, r31
/* 8005B710 000587F0  38 7C 01 10 */	addi r3, r28, 0x110
/* 8005B714 000587F4  38 C6 07 EB */	addi r6, r6, 0x7eb
/* 8005B718 000587F8  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B71C 000587FC  C0 42 8A C8 */	lfs f2, "@3325"@sda21(r2)
/* 8005B720 00058800  C0 62 89 D0 */	lfs f3, "@1730"@sda21(r2)
/* 8005B724 00058804  48 00 4B 8D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B728:
/* 8005B728 00058808  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B72C 0005880C  41 82 00 34 */	beq .L_8005B760
/* 8005B730 00058810  C0 02 89 C8 */	lfs f0, "@1728"@sda21(r2)
/* 8005B734 00058814  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B738 00058818  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B73C 0005881C  7F C4 F3 78 */	mr r4, r30
/* 8005B740 00058820  D0 1C 01 14 */	stfs f0, 0x114(r28)
/* 8005B744 00058824  7F E5 FB 78 */	mr r5, r31
/* 8005B748 00058828  38 7C 01 14 */	addi r3, r28, 0x114
/* 8005B74C 0005882C  38 C6 07 F5 */	addi r6, r6, 0x7f5
/* 8005B750 00058830  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B754 00058834  C0 42 8A C8 */	lfs f2, "@3325"@sda21(r2)
/* 8005B758 00058838  C0 62 89 D0 */	lfs f3, "@1730"@sda21(r2)
/* 8005B75C 0005883C  48 00 4B 55 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B760:
/* 8005B760 00058840  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B764 00058844  41 82 00 34 */	beq .L_8005B798
/* 8005B768 00058848  C0 02 89 C0 */	lfs f0, "@1720"@sda21(r2)
/* 8005B76C 0005884C  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B770 00058850  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B774 00058854  7F C4 F3 78 */	mr r4, r30
/* 8005B778 00058858  D0 1C 01 18 */	stfs f0, 0x118(r28)
/* 8005B77C 0005885C  7F E5 FB 78 */	mr r5, r31
/* 8005B780 00058860  38 7C 01 18 */	addi r3, r28, 0x118
/* 8005B784 00058864  38 C6 08 04 */	addi r6, r6, 0x804
/* 8005B788 00058868  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B78C 0005886C  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B790 00058870  C0 62 8A 3C */	lfs f3, "@3189"@sda21(r2)
/* 8005B794 00058874  48 00 4B 1D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B798:
/* 8005B798 00058878  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B79C 0005887C  41 82 00 34 */	beq .L_8005B7D0
/* 8005B7A0 00058880  C0 02 8A 34 */	lfs f0, "@3187"@sda21(r2)
/* 8005B7A4 00058884  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B7A8 00058888  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B7AC 0005888C  7F C4 F3 78 */	mr r4, r30
/* 8005B7B0 00058890  D0 1C 01 1C */	stfs f0, 0x11c(r28)
/* 8005B7B4 00058894  7F E5 FB 78 */	mr r5, r31
/* 8005B7B8 00058898  38 7C 01 1C */	addi r3, r28, 0x11c
/* 8005B7BC 0005889C  38 C6 08 15 */	addi r6, r6, 0x815
/* 8005B7C0 000588A0  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B7C4 000588A4  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B7C8 000588A8  C0 62 8A 3C */	lfs f3, "@3189"@sda21(r2)
/* 8005B7CC 000588AC  48 00 4A E5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B7D0:
/* 8005B7D0 000588B0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B7D4 000588B4  41 82 00 34 */	beq .L_8005B808
/* 8005B7D8 000588B8  38 00 00 0A */	li r0, 0xa
/* 8005B7DC 000588BC  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B7E0 000588C0  38 83 53 3C */	addi r4, r3, "@stringBase0"@l
/* 8005B7E4 000588C4  90 1C 01 20 */	stw r0, 0x120(r28)
/* 8005B7E8 000588C8  7F C7 F3 78 */	mr r7, r30
/* 8005B7EC 000588CC  7F E8 FB 78 */	mr r8, r31
/* 8005B7F0 000588D0  38 7C 01 20 */	addi r3, r28, 0x120
/* 8005B7F4 000588D4  39 24 08 26 */	addi r9, r4, 0x826
/* 8005B7F8 000588D8  38 80 00 01 */	li r4, 0x1
/* 8005B7FC 000588DC  38 A0 00 00 */	li r5, 0x0
/* 8005B800 000588E0  38 C0 00 1E */	li r6, 0x1e
/* 8005B804 000588E4  48 00 49 55 */	bl "load_param<Ui,i>__10auto_tweakFRUiiiiP16xModelAssetParamUiPCc"
.L_8005B808:
/* 8005B808 000588E8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B80C 000588EC  41 82 00 34 */	beq .L_8005B840
/* 8005B810 000588F0  38 00 00 14 */	li r0, 0x14
/* 8005B814 000588F4  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B818 000588F8  38 83 53 3C */	addi r4, r3, "@stringBase0"@l
/* 8005B81C 000588FC  90 1C 01 24 */	stw r0, 0x124(r28)
/* 8005B820 00058900  7F C7 F3 78 */	mr r7, r30
/* 8005B824 00058904  7F E8 FB 78 */	mr r8, r31
/* 8005B828 00058908  38 7C 01 24 */	addi r3, r28, 0x124
/* 8005B82C 0005890C  39 24 08 37 */	addi r9, r4, 0x837
/* 8005B830 00058910  38 80 00 01 */	li r4, 0x1
/* 8005B834 00058914  38 A0 00 00 */	li r5, 0x0
/* 8005B838 00058918  38 C0 00 1E */	li r6, 0x1e
/* 8005B83C 0005891C  48 00 49 1D */	bl "load_param<Ui,i>__10auto_tweakFRUiiiiP16xModelAssetParamUiPCc"
.L_8005B840:
/* 8005B840 00058920  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B844 00058924  41 82 00 34 */	beq .L_8005B878
/* 8005B848 00058928  C0 02 8A 34 */	lfs f0, "@3187"@sda21(r2)
/* 8005B84C 0005892C  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B850 00058930  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B854 00058934  7F C4 F3 78 */	mr r4, r30
/* 8005B858 00058938  D0 1C 01 28 */	stfs f0, 0x128(r28)
/* 8005B85C 0005893C  7F E5 FB 78 */	mr r5, r31
/* 8005B860 00058940  38 7C 01 28 */	addi r3, r28, 0x128
/* 8005B864 00058944  38 C6 08 48 */	addi r6, r6, 0x848
/* 8005B868 00058948  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B86C 0005894C  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B870 00058950  C0 62 89 D0 */	lfs f3, "@1730"@sda21(r2)
/* 8005B874 00058954  48 00 4A 3D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B878:
/* 8005B878 00058958  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B87C 0005895C  41 82 00 34 */	beq .L_8005B8B0
/* 8005B880 00058960  C0 02 8A 60 */	lfs f0, "@3299"@sda21(r2)
/* 8005B884 00058964  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B888 00058968  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B88C 0005896C  7F C4 F3 78 */	mr r4, r30
/* 8005B890 00058970  D0 1C 01 2C */	stfs f0, 0x12c(r28)
/* 8005B894 00058974  7F E5 FB 78 */	mr r5, r31
/* 8005B898 00058978  38 7C 01 2C */	addi r3, r28, 0x12c
/* 8005B89C 0005897C  38 C6 08 58 */	addi r6, r6, 0x858
/* 8005B8A0 00058980  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B8A4 00058984  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B8A8 00058988  C0 62 89 D0 */	lfs f3, "@1730"@sda21(r2)
/* 8005B8AC 0005898C  48 00 4A 05 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B8B0:
/* 8005B8B0 00058990  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B8B4 00058994  41 82 00 34 */	beq .L_8005B8E8
/* 8005B8B8 00058998  C0 02 89 D8 */	lfs f0, "@2509"@sda21(r2)
/* 8005B8BC 0005899C  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B8C0 000589A0  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B8C4 000589A4  7F C4 F3 78 */	mr r4, r30
/* 8005B8C8 000589A8  D0 1C 01 30 */	stfs f0, 0x130(r28)
/* 8005B8CC 000589AC  7F E5 FB 78 */	mr r5, r31
/* 8005B8D0 000589B0  38 7C 01 30 */	addi r3, r28, 0x130
/* 8005B8D4 000589B4  38 C6 08 68 */	addi r6, r6, 0x868
/* 8005B8D8 000589B8  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B8DC 000589BC  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B8E0 000589C0  C0 62 89 D0 */	lfs f3, "@1730"@sda21(r2)
/* 8005B8E4 000589C4  48 00 49 CD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B8E8:
/* 8005B8E8 000589C8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B8EC 000589CC  41 82 00 34 */	beq .L_8005B920
/* 8005B8F0 000589D0  C0 02 8A 6C */	lfs f0, "@3302"@sda21(r2)
/* 8005B8F4 000589D4  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B8F8 000589D8  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B8FC 000589DC  7F C4 F3 78 */	mr r4, r30
/* 8005B900 000589E0  D0 1C 01 34 */	stfs f0, 0x134(r28)
/* 8005B904 000589E4  7F E5 FB 78 */	mr r5, r31
/* 8005B908 000589E8  38 7C 01 34 */	addi r3, r28, 0x134
/* 8005B90C 000589EC  38 C6 08 7C */	addi r6, r6, 0x87c
/* 8005B910 000589F0  C0 22 8A 68 */	lfs f1, "@3301"@sda21(r2)
/* 8005B914 000589F4  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B918 000589F8  C0 62 89 D0 */	lfs f3, "@1730"@sda21(r2)
/* 8005B91C 000589FC  48 00 49 95 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B920:
/* 8005B920 00058A00  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B924 00058A04  41 82 00 34 */	beq .L_8005B958
/* 8005B928 00058A08  C0 02 8A A8 */	lfs f0, "@3317"@sda21(r2)
/* 8005B92C 00058A0C  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B930 00058A10  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B934 00058A14  7F C4 F3 78 */	mr r4, r30
/* 8005B938 00058A18  D0 1C 01 38 */	stfs f0, 0x138(r28)
/* 8005B93C 00058A1C  7F E5 FB 78 */	mr r5, r31
/* 8005B940 00058A20  38 7C 01 38 */	addi r3, r28, 0x138
/* 8005B944 00058A24  38 C6 08 8E */	addi r6, r6, 0x88e
/* 8005B948 00058A28  C0 22 8A 68 */	lfs f1, "@3301"@sda21(r2)
/* 8005B94C 00058A2C  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005B950 00058A30  C0 62 89 D0 */	lfs f3, "@1730"@sda21(r2)
/* 8005B954 00058A34  48 00 49 5D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B958:
/* 8005B958 00058A38  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B95C 00058A3C  41 82 00 34 */	beq .L_8005B990
/* 8005B960 00058A40  C0 02 8A 14 */	lfs f0, "@3179"@sda21(r2)
/* 8005B964 00058A44  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B968 00058A48  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B96C 00058A4C  7F C4 F3 78 */	mr r4, r30
/* 8005B970 00058A50  D0 1C 01 3C */	stfs f0, 0x13c(r28)
/* 8005B974 00058A54  7F E5 FB 78 */	mr r5, r31
/* 8005B978 00058A58  38 7C 01 3C */	addi r3, r28, 0x13c
/* 8005B97C 00058A5C  38 C6 08 A2 */	addi r6, r6, 0x8a2
/* 8005B980 00058A60  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B984 00058A64  C0 42 8A B0 */	lfs f2, "@3319"@sda21(r2)
/* 8005B988 00058A68  C0 62 8A 3C */	lfs f3, "@3189"@sda21(r2)
/* 8005B98C 00058A6C  48 00 49 25 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B990:
/* 8005B990 00058A70  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B994 00058A74  41 82 00 34 */	beq .L_8005B9C8
/* 8005B998 00058A78  C0 02 89 D8 */	lfs f0, "@2509"@sda21(r2)
/* 8005B99C 00058A7C  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B9A0 00058A80  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B9A4 00058A84  7F C4 F3 78 */	mr r4, r30
/* 8005B9A8 00058A88  D0 1C 01 40 */	stfs f0, 0x140(r28)
/* 8005B9AC 00058A8C  7F E5 FB 78 */	mr r5, r31
/* 8005B9B0 00058A90  38 7C 01 40 */	addi r3, r28, 0x140
/* 8005B9B4 00058A94  38 C6 08 B0 */	addi r6, r6, 0x8b0
/* 8005B9B8 00058A98  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B9BC 00058A9C  C0 42 8A B0 */	lfs f2, "@3319"@sda21(r2)
/* 8005B9C0 00058AA0  C0 62 8A 3C */	lfs f3, "@3189"@sda21(r2)
/* 8005B9C4 00058AA4  48 00 48 ED */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005B9C8:
/* 8005B9C8 00058AA8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005B9CC 00058AAC  41 82 00 34 */	beq .L_8005BA00
/* 8005B9D0 00058AB0  C0 02 89 C8 */	lfs f0, "@1728"@sda21(r2)
/* 8005B9D4 00058AB4  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005B9D8 00058AB8  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005B9DC 00058ABC  7F C4 F3 78 */	mr r4, r30
/* 8005B9E0 00058AC0  D0 1C 01 44 */	stfs f0, 0x144(r28)
/* 8005B9E4 00058AC4  7F E5 FB 78 */	mr r5, r31
/* 8005B9E8 00058AC8  38 7C 01 44 */	addi r3, r28, 0x144
/* 8005B9EC 00058ACC  38 C6 08 BE */	addi r6, r6, 0x8be
/* 8005B9F0 00058AD0  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005B9F4 00058AD4  C0 42 8A B0 */	lfs f2, "@3319"@sda21(r2)
/* 8005B9F8 00058AD8  C0 62 8A 3C */	lfs f3, "@3189"@sda21(r2)
/* 8005B9FC 00058ADC  48 00 48 B5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005BA00:
/* 8005BA00 00058AE0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005BA04 00058AE4  41 82 00 34 */	beq .L_8005BA38
/* 8005BA08 00058AE8  C0 02 8A 38 */	lfs f0, "@3188"@sda21(r2)
/* 8005BA0C 00058AEC  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005BA10 00058AF0  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005BA14 00058AF4  7F C4 F3 78 */	mr r4, r30
/* 8005BA18 00058AF8  D0 1C 01 54 */	stfs f0, 0x154(r28)
/* 8005BA1C 00058AFC  7F E5 FB 78 */	mr r5, r31
/* 8005BA20 00058B00  38 7C 01 54 */	addi r3, r28, 0x154
/* 8005BA24 00058B04  38 C6 08 CC */	addi r6, r6, 0x8cc
/* 8005BA28 00058B08  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005BA2C 00058B0C  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005BA30 00058B10  C0 62 8A 08 */	lfs f3, "@2917"@sda21(r2)
/* 8005BA34 00058B14  48 00 48 7D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005BA38:
/* 8005BA38 00058B18  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005BA3C 00058B1C  41 82 00 34 */	beq .L_8005BA70
/* 8005BA40 00058B20  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005BA44 00058B24  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005BA48 00058B28  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005BA4C 00058B2C  7F C4 F3 78 */	mr r4, r30
/* 8005BA50 00058B30  D0 1C 01 58 */	stfs f0, 0x158(r28)
/* 8005BA54 00058B34  7F E5 FB 78 */	mr r5, r31
/* 8005BA58 00058B38  38 7C 01 58 */	addi r3, r28, 0x158
/* 8005BA5C 00058B3C  38 C6 08 DA */	addi r6, r6, 0x8da
/* 8005BA60 00058B40  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005BA64 00058B44  C0 42 8A CC */	lfs f2, "@3326"@sda21(r2)
/* 8005BA68 00058B48  C0 62 8A 58 */	lfs f3, "@3297"@sda21(r2)
/* 8005BA6C 00058B4C  48 00 48 45 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005BA70:
/* 8005BA70 00058B50  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005BA74 00058B54  41 82 00 34 */	beq .L_8005BAA8
/* 8005BA78 00058B58  C0 02 8A 50 */	lfs f0, "@3194"@sda21(r2)
/* 8005BA7C 00058B5C  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005BA80 00058B60  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005BA84 00058B64  7F C4 F3 78 */	mr r4, r30
/* 8005BA88 00058B68  D0 1C 01 5C */	stfs f0, 0x15c(r28)
/* 8005BA8C 00058B6C  7F E5 FB 78 */	mr r5, r31
/* 8005BA90 00058B70  38 7C 01 5C */	addi r3, r28, 0x15c
/* 8005BA94 00058B74  38 C6 08 E6 */	addi r6, r6, 0x8e6
/* 8005BA98 00058B78  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005BA9C 00058B7C  C0 42 8A CC */	lfs f2, "@3326"@sda21(r2)
/* 8005BAA0 00058B80  C0 62 8A 58 */	lfs f3, "@3297"@sda21(r2)
/* 8005BAA4 00058B84  48 00 48 0D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005BAA8:
/* 8005BAA8 00058B88  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005BAAC 00058B8C  41 82 00 34 */	beq .L_8005BAE0
/* 8005BAB0 00058B90  C0 02 8A 30 */	lfs f0, "@3186"@sda21(r2)
/* 8005BAB4 00058B94  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005BAB8 00058B98  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005BABC 00058B9C  7F C4 F3 78 */	mr r4, r30
/* 8005BAC0 00058BA0  D0 1C 01 60 */	stfs f0, 0x160(r28)
/* 8005BAC4 00058BA4  7F E5 FB 78 */	mr r5, r31
/* 8005BAC8 00058BA8  38 7C 01 60 */	addi r3, r28, 0x160
/* 8005BACC 00058BAC  38 C6 08 F2 */	addi r6, r6, 0x8f2
/* 8005BAD0 00058BB0  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005BAD4 00058BB4  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005BAD8 00058BB8  C0 62 8A 08 */	lfs f3, "@2917"@sda21(r2)
/* 8005BADC 00058BBC  48 00 47 D5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005BAE0:
/* 8005BAE0 00058BC0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005BAE4 00058BC4  41 82 00 34 */	beq .L_8005BB18
/* 8005BAE8 00058BC8  C0 02 8A 30 */	lfs f0, "@3186"@sda21(r2)
/* 8005BAEC 00058BCC  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005BAF0 00058BD0  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005BAF4 00058BD4  7F C4 F3 78 */	mr r4, r30
/* 8005BAF8 00058BD8  D0 1C 01 64 */	stfs f0, 0x164(r28)
/* 8005BAFC 00058BDC  7F E5 FB 78 */	mr r5, r31
/* 8005BB00 00058BE0  38 7C 01 64 */	addi r3, r28, 0x164
/* 8005BB04 00058BE4  38 C6 09 03 */	addi r6, r6, 0x903
/* 8005BB08 00058BE8  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005BB0C 00058BEC  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005BB10 00058BF0  C0 62 8A 08 */	lfs f3, "@2917"@sda21(r2)
/* 8005BB14 00058BF4  48 00 47 9D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005BB18:
/* 8005BB18 00058BF8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005BB1C 00058BFC  41 82 00 34 */	beq .L_8005BB50
/* 8005BB20 00058C00  38 00 00 02 */	li r0, 0x2
/* 8005BB24 00058C04  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005BB28 00058C08  38 83 53 3C */	addi r4, r3, "@stringBase0"@l
/* 8005BB2C 00058C0C  90 1C 01 68 */	stw r0, 0x168(r28)
/* 8005BB30 00058C10  7F C7 F3 78 */	mr r7, r30
/* 8005BB34 00058C14  7F E8 FB 78 */	mr r8, r31
/* 8005BB38 00058C18  38 7C 01 68 */	addi r3, r28, 0x168
/* 8005BB3C 00058C1C  39 24 09 13 */	addi r9, r4, 0x913
/* 8005BB40 00058C20  38 80 00 01 */	li r4, 0x1
/* 8005BB44 00058C24  38 A0 00 00 */	li r5, 0x0
/* 8005BB48 00058C28  38 C0 00 04 */	li r6, 0x4
/* 8005BB4C 00058C2C  48 00 46 E1 */	bl "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc"
.L_8005BB50:
/* 8005BB50 00058C30  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005BB54 00058C34  41 82 00 34 */	beq .L_8005BB88
/* 8005BB58 00058C38  C0 02 8A D0 */	lfs f0, "@3327"@sda21(r2)
/* 8005BB5C 00058C3C  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005BB60 00058C40  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005BB64 00058C44  7F C4 F3 78 */	mr r4, r30
/* 8005BB68 00058C48  D0 1C 01 6C */	stfs f0, 0x16c(r28)
/* 8005BB6C 00058C4C  7F E5 FB 78 */	mr r5, r31
/* 8005BB70 00058C50  38 7C 01 6C */	addi r3, r28, 0x16c
/* 8005BB74 00058C54  38 C6 09 22 */	addi r6, r6, 0x922
/* 8005BB78 00058C58  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005BB7C 00058C5C  C0 42 8A B0 */	lfs f2, "@3319"@sda21(r2)
/* 8005BB80 00058C60  FC 60 08 90 */	fmr f3, f1
/* 8005BB84 00058C64  48 00 47 2D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005BB88:
/* 8005BB88 00058C68  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005BB8C 00058C6C  41 82 00 34 */	beq .L_8005BBC0
/* 8005BB90 00058C70  C0 02 8A D4 */	lfs f0, "@3328"@sda21(r2)
/* 8005BB94 00058C74  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005BB98 00058C78  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005BB9C 00058C7C  7F C4 F3 78 */	mr r4, r30
/* 8005BBA0 00058C80  D0 1C 01 70 */	stfs f0, 0x170(r28)
/* 8005BBA4 00058C84  7F E5 FB 78 */	mr r5, r31
/* 8005BBA8 00058C88  38 7C 01 70 */	addi r3, r28, 0x170
/* 8005BBAC 00058C8C  38 C6 09 37 */	addi r6, r6, 0x937
/* 8005BBB0 00058C90  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005BBB4 00058C94  C0 42 8A B0 */	lfs f2, "@3319"@sda21(r2)
/* 8005BBB8 00058C98  FC 60 08 90 */	fmr f3, f1
/* 8005BBBC 00058C9C  48 00 46 F5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005BBC0:
/* 8005BBC0 00058CA0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005BBC4 00058CA4  41 82 00 34 */	beq .L_8005BBF8
/* 8005BBC8 00058CA8  C0 02 8A D8 */	lfs f0, "@3329"@sda21(r2)
/* 8005BBCC 00058CAC  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005BBD0 00058CB0  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005BBD4 00058CB4  7F C4 F3 78 */	mr r4, r30
/* 8005BBD8 00058CB8  D0 1C 01 74 */	stfs f0, 0x174(r28)
/* 8005BBDC 00058CBC  7F E5 FB 78 */	mr r5, r31
/* 8005BBE0 00058CC0  38 7C 01 74 */	addi r3, r28, 0x174
/* 8005BBE4 00058CC4  38 C6 09 4D */	addi r6, r6, 0x94d
/* 8005BBE8 00058CC8  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005BBEC 00058CCC  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005BBF0 00058CD0  FC 60 08 90 */	fmr f3, f1
/* 8005BBF4 00058CD4  48 00 46 BD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005BBF8:
/* 8005BBF8 00058CD8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005BBFC 00058CDC  41 82 00 34 */	beq .L_8005BC30
/* 8005BC00 00058CE0  C0 02 8A DC */	lfs f0, "@3330"@sda21(r2)
/* 8005BC04 00058CE4  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005BC08 00058CE8  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005BC0C 00058CEC  7F C4 F3 78 */	mr r4, r30
/* 8005BC10 00058CF0  D0 1C 01 78 */	stfs f0, 0x178(r28)
/* 8005BC14 00058CF4  7F E5 FB 78 */	mr r5, r31
/* 8005BC18 00058CF8  38 7C 01 78 */	addi r3, r28, 0x178
/* 8005BC1C 00058CFC  38 C6 09 59 */	addi r6, r6, 0x959
/* 8005BC20 00058D00  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005BC24 00058D04  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005BC28 00058D08  FC 60 08 90 */	fmr f3, f1
/* 8005BC2C 00058D0C  48 00 46 85 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005BC30:
/* 8005BC30 00058D10  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005BC34 00058D14  41 82 00 34 */	beq .L_8005BC68
/* 8005BC38 00058D18  C0 02 89 F4 */	lfs f0, "@2835"@sda21(r2)
/* 8005BC3C 00058D1C  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005BC40 00058D20  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005BC44 00058D24  7F C4 F3 78 */	mr r4, r30
/* 8005BC48 00058D28  D0 1C 01 7C */	stfs f0, 0x17c(r28)
/* 8005BC4C 00058D2C  7F E5 FB 78 */	mr r5, r31
/* 8005BC50 00058D30  38 7C 01 7C */	addi r3, r28, 0x17c
/* 8005BC54 00058D34  38 C6 09 65 */	addi r6, r6, 0x965
/* 8005BC58 00058D38  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005BC5C 00058D3C  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005BC60 00058D40  C0 62 8A 3C */	lfs f3, "@3189"@sda21(r2)
/* 8005BC64 00058D44  48 00 46 4D */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005BC68:
/* 8005BC68 00058D48  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005BC6C 00058D4C  41 82 00 34 */	beq .L_8005BCA0
/* 8005BC70 00058D50  C0 02 89 C0 */	lfs f0, "@1720"@sda21(r2)
/* 8005BC74 00058D54  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005BC78 00058D58  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005BC7C 00058D5C  7F C4 F3 78 */	mr r4, r30
/* 8005BC80 00058D60  D0 1C 01 80 */	stfs f0, 0x180(r28)
/* 8005BC84 00058D64  7F E5 FB 78 */	mr r5, r31
/* 8005BC88 00058D68  38 7C 01 80 */	addi r3, r28, 0x180
/* 8005BC8C 00058D6C  38 C6 09 79 */	addi r6, r6, 0x979
/* 8005BC90 00058D70  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005BC94 00058D74  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005BC98 00058D78  FC 60 08 90 */	fmr f3, f1
/* 8005BC9C 00058D7C  48 00 46 15 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005BCA0:
/* 8005BCA0 00058D80  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005BCA4 00058D84  41 82 00 34 */	beq .L_8005BCD8
/* 8005BCA8 00058D88  C0 02 8A 38 */	lfs f0, "@3188"@sda21(r2)
/* 8005BCAC 00058D8C  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005BCB0 00058D90  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005BCB4 00058D94  7F C4 F3 78 */	mr r4, r30
/* 8005BCB8 00058D98  D0 1C 01 84 */	stfs f0, 0x184(r28)
/* 8005BCBC 00058D9C  7F E5 FB 78 */	mr r5, r31
/* 8005BCC0 00058DA0  38 7C 01 84 */	addi r3, r28, 0x184
/* 8005BCC4 00058DA4  38 C6 09 85 */	addi r6, r6, 0x985
/* 8005BCC8 00058DA8  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005BCCC 00058DAC  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005BCD0 00058DB0  FC 60 08 90 */	fmr f3, f1
/* 8005BCD4 00058DB4  48 00 45 DD */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005BCD8:
/* 8005BCD8 00058DB8  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005BCDC 00058DBC  41 82 00 34 */	beq .L_8005BD10
/* 8005BCE0 00058DC0  C0 02 8A 30 */	lfs f0, "@3186"@sda21(r2)
/* 8005BCE4 00058DC4  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005BCE8 00058DC8  38 C3 53 3C */	addi r6, r3, "@stringBase0"@l
/* 8005BCEC 00058DCC  7F C4 F3 78 */	mr r4, r30
/* 8005BCF0 00058DD0  D0 1C 01 88 */	stfs f0, 0x188(r28)
/* 8005BCF4 00058DD4  7F E5 FB 78 */	mr r5, r31
/* 8005BCF8 00058DD8  38 7C 01 88 */	addi r3, r28, 0x188
/* 8005BCFC 00058DDC  38 C6 09 92 */	addi r6, r6, 0x992
/* 8005BD00 00058DE0  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005BD04 00058DE4  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005BD08 00058DE8  FC 60 08 90 */	fmr f3, f1
/* 8005BD0C 00058DEC  48 00 45 A5 */	bl "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"
.L_8005BD10:
/* 8005BD10 00058DF0  57 A0 06 3F */	clrlwi. r0, r29, 24
/* 8005BD14 00058DF4  41 82 00 2C */	beq .L_8005BD40
/* 8005BD18 00058DF8  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005BD1C 00058DFC  38 63 53 3C */	addi r3, r3, "@stringBase0"@l
/* 8005BD20 00058E00  38 63 09 A2 */	addi r3, r3, 0x9a2
/* 8005BD24 00058E04  4B FF 04 F1 */	bl xStrHash__FPCc
/* 8005BD28 00058E08  3C 80 80 25 */	lis r4, "@stringBase0"@ha
/* 8005BD2C 00058E0C  90 7C 00 E0 */	stw r3, 0xe0(r28)
/* 8005BD30 00058E10  38 64 53 3C */	addi r3, r4, "@stringBase0"@l
/* 8005BD34 00058E14  38 63 09 AD */	addi r3, r3, 0x9ad
/* 8005BD38 00058E18  4B FF 04 DD */	bl xStrHash__FPCc
/* 8005BD3C 00058E1C  90 7C 00 D4 */	stw r3, 0xd4(r28)
.L_8005BD40:
/* 8005BD40 00058E20  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8005BD44 00058E24  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8005BD48 00058E28  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8005BD4C 00058E2C  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8005BD50 00058E30  83 81 00 20 */	lwz r28, 0x20(r1)
/* 8005BD54 00058E34  7C 08 03 A6 */	mtlr r0
/* 8005BD58 00058E38  38 21 00 30 */	addi r1, r1, 0x30
/* 8005BD5C 00058E3C  4E 80 00 20 */	blr
.endfn "register_tweaks__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@11tweak_groupFbP16xModelAssetParamUiPCc"

# cruise_bubble::init()
.fn init__13cruise_bubbleFv, global
/* 8005BD60 00058E40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005BD64 00058E44  7C 08 02 A6 */	mflr r0
/* 8005BD68 00058E48  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005BD6C 00058E4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005BD70 00058E50  80 03 C2 A4 */	lwz r0, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l(r3)
/* 8005BD74 00058E54  54 00 07 FE */	clrlwi r0, r0, 31
/* 8005BD78 00058E58  2C 00 00 01 */	cmpwi r0, 0x1
/* 8005BD7C 00058E5C  40 82 00 5C */	bne .L_8005BDD8
/* 8005BD80 00058E60  4B FF B4 8D */	bl "init_sound__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005BD84 00058E64  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005BD88 00058E68  84 03 C2 A4 */	lwzu r0, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l(r3)
/* 8005BD8C 00058E6C  60 00 00 02 */	ori r0, r0, 0x2
/* 8005BD90 00058E70  90 03 00 00 */	stw r0, 0x0(r3)
/* 8005BD94 00058E74  4B FF EA 71 */	bl "load_settings__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005BD98 00058E78  4B FF C7 29 */	bl "init_states__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005BD9C 00058E7C  4B FF CC 75 */	bl "init_missle_model__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005BDA0 00058E80  4B FF CE 75 */	bl "init_wake_ribbons__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005BDA4 00058E84  4B FF CF 95 */	bl "init_explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005BDA8 00058E88  4B FF D0 2D */	bl "init_shrapnel__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005BDAC 00058E8C  4B FF D8 ED */	bl "init_hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005BDB0 00058E90  48 00 00 39 */	bl "init_debug__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005BDB4 00058E94  3C 60 80 3C */	lis r3, globals@ha
/* 8005BDB8 00058E98  38 63 05 58 */	addi r3, r3, globals@l
/* 8005BDBC 00058E9C  4B FB 26 FD */	bl xCameraGetFOV__FPC7xCamera
/* 8005BDC0 00058EA0  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005BDC4 00058EA4  38 83 C2 A4 */	addi r4, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005BDC8 00058EA8  D0 24 01 00 */	stfs f1, 0x100(r4)
/* 8005BDCC 00058EAC  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005BDD0 00058EB0  C0 03 01 80 */	lfs f0, 0x180(r3)
/* 8005BDD4 00058EB4  D0 04 01 08 */	stfs f0, 0x108(r4)
.L_8005BDD8:
/* 8005BDD8 00058EB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005BDDC 00058EBC  7C 08 03 A6 */	mtlr r0
/* 8005BDE0 00058EC0  38 21 00 10 */	addi r1, r1, 0x10
/* 8005BDE4 00058EC4  4E 80 00 20 */	blr
.endfn init__13cruise_bubbleFv

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::init_debug()
.fn "init_debug__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 8005BDE8 00058EC8  4E 80 00 20 */	blr
.endfn "init_debug__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::reset()
.fn reset__13cruise_bubbleFv, global
/* 8005BDEC 00058ECC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005BDF0 00058ED0  7C 08 02 A6 */	mflr r0
/* 8005BDF4 00058ED4  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005BDF8 00058ED8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005BDFC 00058EDC  80 03 C2 A4 */	lwz r0, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l(r3)
/* 8005BE00 00058EE0  54 00 07 BE */	clrlwi r0, r0, 30
/* 8005BE04 00058EE4  2C 00 00 03 */	cmpwi r0, 0x3
/* 8005BE08 00058EE8  40 82 00 10 */	bne .L_8005BE18
/* 8005BE0C 00058EEC  38 60 00 01 */	li r3, 0x1
/* 8005BE10 00058EF0  38 80 00 00 */	li r4, 0x0
/* 8005BE14 00058EF4  4B FF C0 59 */	bl "kill__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fbb"
.L_8005BE18:
/* 8005BE18 00058EF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005BE1C 00058EFC  7C 08 03 A6 */	mtlr r0
/* 8005BE20 00058F00  38 21 00 10 */	addi r1, r1, 0x10
/* 8005BE24 00058F04  4E 80 00 20 */	blr
.endfn reset__13cruise_bubbleFv

# cruise_bubble::launch()
.fn launch__13cruise_bubbleFv, global
/* 8005BE28 00058F08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005BE2C 00058F0C  7C 08 02 A6 */	mflr r0
/* 8005BE30 00058F10  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005BE34 00058F14  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005BE38 00058F18  80 03 C2 A4 */	lwz r0, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l(r3)
/* 8005BE3C 00058F1C  70 00 00 13 */	andi. r0, r0, 0x13
/* 8005BE40 00058F20  2C 00 00 03 */	cmpwi r0, 0x3
/* 8005BE44 00058F24  40 82 00 DC */	bne .L_8005BF20
/* 8005BE48 00058F28  48 03 DC BD */	bl zGameExtras_CheatFlags__Fv
/* 8005BE4C 00058F2C  54 60 00 85 */	rlwinm. r0, r3, 0, 2, 2
/* 8005BE50 00058F30  41 82 00 28 */	beq .L_8005BE78
/* 8005BE54 00058F34  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005BE58 00058F38  3C 60 80 2E */	lis r3, "cheat_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005BE5C 00058F3C  38 A4 C2 A4 */	addi r5, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005BE60 00058F40  80 85 00 00 */	lwz r4, 0x0(r5)
/* 8005BE64 00058F44  38 03 BC 38 */	addi r0, r3, "cheat_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005BE68 00058F48  60 83 02 00 */	ori r3, r4, 0x200
/* 8005BE6C 00058F4C  90 65 00 00 */	stw r3, 0x0(r5)
/* 8005BE70 00058F50  90 0D 81 80 */	stw r0, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005BE74 00058F54  48 00 00 10 */	b .L_8005BE84
.L_8005BE78:
/* 8005BE78 00058F58  3C 60 80 2E */	lis r3, "normal_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005BE7C 00058F5C  38 03 BA 80 */	addi r0, r3, "normal_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005BE80 00058F60  90 0D 81 80 */	stw r0, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
.L_8005BE84:
/* 8005BE84 00058F64  4B FF CC 11 */	bl "reset_wake_ribbons__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005BE88 00058F68  4B FF CD E9 */	bl "reset_explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005BE8C 00058F6C  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005BE90 00058F70  3C 60 80 3C */	lis r3, globals@ha
/* 8005BE94 00058F74  38 A4 C2 A4 */	addi r5, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005BE98 00058F78  80 05 00 00 */	lwz r0, 0x0(r5)
/* 8005BE9C 00058F7C  38 63 05 58 */	addi r3, r3, globals@l
/* 8005BEA0 00058F80  80 83 03 1C */	lwz r4, 0x31c(r3)
/* 8005BEA4 00058F84  38 65 00 48 */	addi r3, r5, 0x48
/* 8005BEA8 00058F88  60 00 00 14 */	ori r0, r0, 0x14
/* 8005BEAC 00058F8C  90 05 00 00 */	stw r0, 0x0(r5)
/* 8005BEB0 00058F90  38 84 01 18 */	addi r4, r4, 0x118
/* 8005BEB4 00058F94  4B FC 99 45 */	bl __as__5xVec2FRC5xVec2
/* 8005BEB8 00058F98  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005BEBC 00058F9C  38 A4 C2 A4 */	addi r5, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005BEC0 00058FA0  7C 64 1B 78 */	mr r4, r3
/* 8005BEC4 00058FA4  38 65 00 40 */	addi r3, r5, 0x40
/* 8005BEC8 00058FA8  4B FC 99 31 */	bl __as__5xVec2FRC5xVec2
/* 8005BECC 00058FAC  3C 80 80 3C */	lis r4, globals@ha
/* 8005BED0 00058FB0  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005BED4 00058FB4  38 84 05 58 */	addi r4, r4, globals@l
/* 8005BED8 00058FB8  80 04 16 B0 */	lwz r0, 0x16b0(r4)
/* 8005BEDC 00058FBC  38 83 C2 A4 */	addi r4, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005BEE0 00058FC0  38 64 00 F4 */	addi r3, r4, 0xf4
/* 8005BEE4 00058FC4  90 04 00 F0 */	stw r0, 0xf0(r4)
/* 8005BEE8 00058FC8  C0 22 89 B8 */	lfs f1, "@1551"@sda21(r2)
/* 8005BEEC 00058FCC  4B FC 09 8D */	bl __as__5xVec3Ff
/* 8005BEF0 00058FD0  3C 60 80 3C */	lis r3, globals@ha
/* 8005BEF4 00058FD4  38 63 05 58 */	addi r3, r3, globals@l
/* 8005BEF8 00058FD8  4B FB 25 C1 */	bl xCameraGetFOV__FPC7xCamera
/* 8005BEFC 00058FDC  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005BF00 00058FE0  38 60 00 00 */	li r3, 0x0
/* 8005BF04 00058FE4  38 A4 C2 A4 */	addi r5, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005BF08 00058FE8  38 80 FF FF */	li r4, -0x1
/* 8005BF0C 00058FEC  D0 25 01 00 */	stfs f1, 0x100(r5)
/* 8005BF10 00058FF0  48 0D 74 49 */	bl permit__8ztalkboxFUiUi
/* 8005BF14 00058FF4  38 60 00 00 */	li r3, 0x0
/* 8005BF18 00058FF8  38 80 00 00 */	li r4, 0x0
/* 8005BF1C 00058FFC  4B FF BD C1 */	bl "set_state__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@11thread_enumQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_enum"
.L_8005BF20:
/* 8005BF20 00059000  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005BF24 00059004  7C 08 03 A6 */	mtlr r0
/* 8005BF28 00059008  38 21 00 10 */	addi r1, r1, 0x10
/* 8005BF2C 0005900C  4E 80 00 20 */	blr
.endfn launch__13cruise_bubbleFv

# cruise_bubble::update(xScene*, float)
.fn update__13cruise_bubbleFP6xScenef, global
/* 8005BF30 00059010  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005BF34 00059014  7C 08 02 A6 */	mflr r0
/* 8005BF38 00059018  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005BF3C 0005901C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005BF40 00059020  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8005BF44 00059024  FF E0 08 90 */	fmr f31, f1
/* 8005BF48 00059028  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8005BF4C 0005902C  7C 7F 1B 78 */	mr r31, r3
/* 8005BF50 00059030  80 64 C2 A4 */	lwz r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l(r4)
/* 8005BF54 00059034  54 60 07 BE */	clrlwi r0, r3, 30
/* 8005BF58 00059038  2C 00 00 03 */	cmpwi r0, 0x3
/* 8005BF5C 0005903C  41 82 00 0C */	beq .L_8005BF68
/* 8005BF60 00059040  38 60 00 00 */	li r3, 0x0
/* 8005BF64 00059044  48 00 00 9C */	b .L_8005C000
.L_8005BF68:
/* 8005BF68 00059048  54 60 06 F7 */	rlwinm. r0, r3, 0, 27, 27
/* 8005BF6C 0005904C  40 82 00 20 */	bne .L_8005BF8C
/* 8005BF70 00059050  4B FF BE 11 */	bl "check_launch__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005BF74 00059054  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8005BF78 00059058  41 82 00 0C */	beq .L_8005BF84
/* 8005BF7C 0005905C  4B FF FE AD */	bl launch__13cruise_bubbleFv
/* 8005BF80 00059060  48 00 00 0C */	b .L_8005BF8C
.L_8005BF84:
/* 8005BF84 00059064  38 60 00 00 */	li r3, 0x0
/* 8005BF88 00059068  48 00 00 78 */	b .L_8005C000
.L_8005BF8C:
/* 8005BF8C 0005906C  3C 60 80 3C */	lis r3, globals@ha
/* 8005BF90 00059070  38 63 05 58 */	addi r3, r3, globals@l
/* 8005BF94 00059074  80 03 17 88 */	lwz r0, 0x1788(r3)
/* 8005BF98 00059078  28 00 00 00 */	cmplwi r0, 0x0
/* 8005BF9C 0005907C  41 82 00 18 */	beq .L_8005BFB4
/* 8005BFA0 00059080  38 60 00 01 */	li r3, 0x1
/* 8005BFA4 00059084  38 80 00 00 */	li r4, 0x0
/* 8005BFA8 00059088  4B FF BE C5 */	bl "kill__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fbb"
/* 8005BFAC 0005908C  38 60 00 00 */	li r3, 0x0
/* 8005BFB0 00059090  48 00 00 50 */	b .L_8005C000
.L_8005BFB4:
/* 8005BFB4 00059094  4B FF C1 99 */	bl "refresh_controls__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005BFB8 00059098  FC 20 F8 90 */	fmr f1, f31
/* 8005BFBC 0005909C  7F E3 FB 78 */	mr r3, r31
/* 8005BFC0 000590A0  4B FF C1 E1 */	bl "update_state__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FP6xScenef"
/* 8005BFC4 000590A4  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005BFC8 000590A8  80 03 C2 A4 */	lwz r0, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l(r3)
/* 8005BFCC 000590AC  54 00 06 F7 */	rlwinm. r0, r0, 0, 27, 27
/* 8005BFD0 000590B0  40 82 00 0C */	bne .L_8005BFDC
/* 8005BFD4 000590B4  38 60 00 00 */	li r3, 0x0
/* 8005BFD8 000590B8  48 00 00 28 */	b .L_8005C000
.L_8005BFDC:
/* 8005BFDC 000590BC  FC 20 F8 90 */	fmr f1, f31
/* 8005BFE0 000590C0  7F E3 FB 78 */	mr r3, r31
/* 8005BFE4 000590C4  4B FF C0 05 */	bl "update_player__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FR6xScenef"
/* 8005BFE8 000590C8  FC 20 F8 90 */	fmr f1, f31
/* 8005BFEC 000590CC  7F E3 FB 78 */	mr r3, r31
/* 8005BFF0 000590D0  4B FF D3 29 */	bl "update_missle__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FR6xScenef"
/* 8005BFF4 000590D4  FC 20 F8 90 */	fmr f1, f31
/* 8005BFF8 000590D8  4B FF DC E1 */	bl "update_hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Ff"
/* 8005BFFC 000590DC  38 60 00 01 */	li r3, 0x1
.L_8005C000:
/* 8005C000 000590E0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005C004 000590E4  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 8005C008 000590E8  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8005C00C 000590EC  7C 08 03 A6 */	mtlr r0
/* 8005C010 000590F0  38 21 00 20 */	addi r1, r1, 0x20
/* 8005C014 000590F4  4E 80 00 20 */	blr
.endfn update__13cruise_bubbleFP6xScenef

# cruise_bubble::render()
.fn render__13cruise_bubbleFv, global
/* 8005C018 000590F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005C01C 000590FC  7C 08 02 A6 */	mflr r0
/* 8005C020 00059100  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005C024 00059104  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005C028 00059108  80 03 C2 A4 */	lwz r0, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l(r3)
/* 8005C02C 0005910C  54 00 07 7E */	clrlwi r0, r0, 29
/* 8005C030 00059110  2C 00 00 07 */	cmpwi r0, 0x7
/* 8005C034 00059114  41 82 00 0C */	beq .L_8005C040
/* 8005C038 00059118  38 60 00 00 */	li r3, 0x0
/* 8005C03C 0005911C  48 00 00 18 */	b .L_8005C054
.L_8005C040:
/* 8005C040 00059120  4B FF C2 6D */	bl "render_state__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005C044 00059124  4B FF C0 DD */	bl "render_player__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005C048 00059128  4B FF D3 31 */	bl "render_missle__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005C04C 0005912C  48 00 00 19 */	bl "render_debug__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005C050 00059130  38 60 00 01 */	li r3, 0x1
.L_8005C054:
/* 8005C054 00059134  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005C058 00059138  7C 08 03 A6 */	mtlr r0
/* 8005C05C 0005913C  38 21 00 10 */	addi r1, r1, 0x10
/* 8005C060 00059140  4E 80 00 20 */	blr
.endfn render__13cruise_bubbleFv

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::render_debug()
.fn "render_debug__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 8005C064 00059144  4E 80 00 20 */	blr
.endfn "render_debug__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::render_screen()
.fn render_screen__13cruise_bubbleFv, global
/* 8005C068 00059148  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005C06C 0005914C  7C 08 02 A6 */	mflr r0
/* 8005C070 00059150  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005C074 00059154  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005C078 00059158  80 03 C2 A4 */	lwz r0, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l(r3)
/* 8005C07C 0005915C  54 00 07 7E */	clrlwi r0, r0, 29
/* 8005C080 00059160  2C 00 00 07 */	cmpwi r0, 0x7
/* 8005C084 00059164  40 82 00 08 */	bne .L_8005C08C
/* 8005C088 00059168  4B FF E0 59 */	bl "render_hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
.L_8005C08C:
/* 8005C08C 0005916C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005C090 00059170  7C 08 03 A6 */	mtlr r0
/* 8005C094 00059174  38 21 00 10 */	addi r1, r1, 0x10
/* 8005C098 00059178  4E 80 00 20 */	blr
.endfn render_screen__13cruise_bubbleFv

# cruise_bubble::insert_player_animations(xAnimTable&)
.fn insert_player_animations__13cruise_bubbleFR10xAnimTable, global
/* 8005C09C 0005917C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8005C0A0 00059180  7C 08 02 A6 */	mflr r0
/* 8005C0A4 00059184  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005C0A8 00059188  90 01 00 44 */	stw r0, 0x44(r1)
/* 8005C0AC 0005918C  BF 21 00 24 */	stmw r25, 0x24(r1)
/* 8005C0B0 00059190  3B 84 C2 A4 */	addi r28, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005C0B4 00059194  7C 7E 1B 78 */	mr r30, r3
/* 8005C0B8 00059198  80 1C 01 64 */	lwz r0, 0x164(r28)
/* 8005C0BC 0005919C  28 00 00 00 */	cmplwi r0, 0x0
/* 8005C0C0 000591A0  40 82 02 AC */	bne .L_8005C36C
/* 8005C0C4 000591A4  3C A0 80 00 */	lis r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8005C0C8 000591A8  3C 80 80 25 */	lis r4, "@stringBase0"@ha
/* 8005C0CC 000591AC  38 A5 6C FC */	addi r5, r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8005C0D0 000591B0  38 00 00 00 */	li r0, 0x0
/* 8005C0D4 000591B4  90 A1 00 08 */	stw r5, 0x8(r1)
/* 8005C0D8 000591B8  38 84 53 3C */	addi r4, r4, "@stringBase0"@l
/* 8005C0DC 000591BC  38 84 09 C2 */	addi r4, r4, 0x9c2
/* 8005C0E0 000591C0  38 A0 00 10 */	li r5, 0x10
/* 8005C0E4 000591C4  90 01 00 0C */	stw r0, 0xc(r1)
/* 8005C0E8 000591C8  38 C0 00 00 */	li r6, 0x0
/* 8005C0EC 000591CC  38 E0 00 00 */	li r7, 0x0
/* 8005C0F0 000591D0  39 00 00 00 */	li r8, 0x0
/* 8005C0F4 000591D4  90 01 00 10 */	stw r0, 0x10(r1)
/* 8005C0F8 000591D8  39 20 00 00 */	li r9, 0x0
/* 8005C0FC 000591DC  39 40 00 00 */	li r10, 0x0
/* 8005C100 000591E0  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005C104 000591E4  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005C108 000591E8  4B FA AC 51 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8005C10C 000591EC  90 7C 01 64 */	stw r3, 0x164(r28)
/* 8005C110 000591F0  3C 60 80 00 */	lis r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8005C114 000591F4  38 03 6C FC */	addi r0, r3, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8005C118 000591F8  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005C11C 000591FC  90 01 00 08 */	stw r0, 0x8(r1)
/* 8005C120 00059200  38 00 00 00 */	li r0, 0x0
/* 8005C124 00059204  38 83 53 3C */	addi r4, r3, "@stringBase0"@l
/* 8005C128 00059208  7F C3 F3 78 */	mr r3, r30
/* 8005C12C 0005920C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8005C130 00059210  38 84 09 D4 */	addi r4, r4, 0x9d4
/* 8005C134 00059214  38 A0 00 20 */	li r5, 0x20
/* 8005C138 00059218  38 C0 00 00 */	li r6, 0x0
/* 8005C13C 0005921C  90 01 00 10 */	stw r0, 0x10(r1)
/* 8005C140 00059220  38 E0 00 00 */	li r7, 0x0
/* 8005C144 00059224  39 00 00 00 */	li r8, 0x0
/* 8005C148 00059228  39 20 00 00 */	li r9, 0x0
/* 8005C14C 0005922C  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005C150 00059230  39 40 00 00 */	li r10, 0x0
/* 8005C154 00059234  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005C158 00059238  4B FA AC 01 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8005C15C 0005923C  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005C160 00059240  3C A0 80 00 */	lis r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8005C164 00059244  38 C4 C2 A4 */	addi r6, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005C168 00059248  3C 80 80 25 */	lis r4, "@stringBase0"@ha
/* 8005C16C 0005924C  90 66 01 68 */	stw r3, 0x168(r6)
/* 8005C170 00059250  38 65 6C FC */	addi r3, r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8005C174 00059254  38 84 53 3C */	addi r4, r4, "@stringBase0"@l
/* 8005C178 00059258  38 00 00 00 */	li r0, 0x0
/* 8005C17C 0005925C  90 61 00 08 */	stw r3, 0x8(r1)
/* 8005C180 00059260  7F C3 F3 78 */	mr r3, r30
/* 8005C184 00059264  38 84 09 E7 */	addi r4, r4, 0x9e7
/* 8005C188 00059268  38 A0 00 10 */	li r5, 0x10
/* 8005C18C 0005926C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8005C190 00059270  38 C0 00 00 */	li r6, 0x0
/* 8005C194 00059274  38 E0 00 00 */	li r7, 0x0
/* 8005C198 00059278  39 00 00 00 */	li r8, 0x0
/* 8005C19C 0005927C  90 01 00 10 */	stw r0, 0x10(r1)
/* 8005C1A0 00059280  39 20 00 00 */	li r9, 0x0
/* 8005C1A4 00059284  39 40 00 00 */	li r10, 0x0
/* 8005C1A8 00059288  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005C1AC 0005928C  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005C1B0 00059290  4B FA AB A9 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8005C1B4 00059294  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005C1B8 00059298  38 84 C2 A4 */	addi r4, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005C1BC 0005929C  90 64 01 6C */	stw r3, 0x16c(r4)
/* 8005C1C0 000592A0  38 60 02 50 */	li r3, 0x250
/* 8005C1C4 000592A4  4B FD 78 95 */	bl xMemPushTemp__FUi
/* 8005C1C8 000592A8  38 80 00 00 */	li r4, 0x0
/* 8005C1CC 000592AC  7C 7F 1B 78 */	mr r31, r3
/* 8005C1D0 000592B0  38 A0 02 50 */	li r5, 0x250
/* 8005C1D4 000592B4  4B FA 72 85 */	bl memset
/* 8005C1D8 000592B8  3B 80 00 00 */	li r28, 0x0
/* 8005C1DC 000592BC  3C 60 80 29 */	lis r3, "start_anim_states__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005C1E0 000592C0  9B 9F 00 00 */	stb r28, 0x0(r31)
/* 8005C1E4 000592C4  3B 63 C2 10 */	addi r27, r3, "start_anim_states__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005C1E8 000592C8  7F FA FB 78 */	mr r26, r31
/* 8005C1EC 000592CC  3B 20 00 00 */	li r25, 0x0
/* 8005C1F0 000592D0  3B A0 00 20 */	li r29, 0x20
.L_8005C1F4:
/* 8005C1F4 000592D4  80 9B 00 00 */	lwz r4, 0x0(r27)
/* 8005C1F8 000592D8  7F 43 D3 78 */	mr r3, r26
/* 8005C1FC 000592DC  48 18 B4 95 */	bl strcat
/* 8005C200 000592E0  7F 43 D3 78 */	mr r3, r26
/* 8005C204 000592E4  48 18 B5 B5 */	bl strlen
/* 8005C208 000592E8  7F 5A 1A 14 */	add r26, r26, r3
/* 8005C20C 000592EC  3B 39 00 01 */	addi r25, r25, 0x1
/* 8005C210 000592F0  9B BA 00 00 */	stb r29, 0x0(r26)
/* 8005C214 000592F4  28 19 00 25 */	cmplwi r25, 0x25
/* 8005C218 000592F8  3B 7B 00 04 */	addi r27, r27, 0x4
/* 8005C21C 000592FC  9F 9A 00 01 */	stbu r28, 0x1(r26)
/* 8005C220 00059300  41 80 FF D4 */	blt .L_8005C1F4
/* 8005C224 00059304  38 00 00 00 */	li r0, 0x0
/* 8005C228 00059308  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005C22C 0005930C  90 01 00 08 */	stw r0, 0x8(r1)
/* 8005C230 00059310  38 A3 53 3C */	addi r5, r3, "@stringBase0"@l
/* 8005C234 00059314  3C 80 80 06 */	lis r4, "check_anim_aim__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FP15xAnimTransitionP11xAnimSinglePv"@ha
/* 8005C238 00059318  7F C3 F3 78 */	mr r3, r30
/* 8005C23C 0005931C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8005C240 00059320  38 C4 A6 D8 */	addi r6, r4, "check_anim_aim__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FP15xAnimTransitionP11xAnimSinglePv"@l
/* 8005C244 00059324  7F E4 FB 78 */	mr r4, r31
/* 8005C248 00059328  38 A5 09 C2 */	addi r5, r5, 0x9c2
/* 8005C24C 0005932C  C0 22 89 B8 */	lfs f1, "@1551"@sda21(r2)
/* 8005C250 00059330  38 E0 00 00 */	li r7, 0x0
/* 8005C254 00059334  C0 62 8A E0 */	lfs f3, "@3447"@sda21(r2)
/* 8005C258 00059338  39 00 00 00 */	li r8, 0x0
/* 8005C25C 0005933C  FC 40 08 90 */	fmr f2, f1
/* 8005C260 00059340  39 20 00 00 */	li r9, 0x0
/* 8005C264 00059344  39 40 00 00 */	li r10, 0x0
/* 8005C268 00059348  4B FA B1 59 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 8005C26C 0005934C  3C A0 80 29 */	lis r5, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005C270 00059350  3C 80 80 25 */	lis r4, "@stringBase0"@ha
/* 8005C274 00059354  38 A5 C2 A4 */	addi r5, r5, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005C278 00059358  38 00 00 00 */	li r0, 0x0
/* 8005C27C 0005935C  90 65 01 78 */	stw r3, 0x178(r5)
/* 8005C280 00059360  38 A4 53 3C */	addi r5, r4, "@stringBase0"@l
/* 8005C284 00059364  7F C3 F3 78 */	mr r3, r30
/* 8005C288 00059368  38 C0 00 00 */	li r6, 0x0
/* 8005C28C 0005936C  90 01 00 08 */	stw r0, 0x8(r1)
/* 8005C290 00059370  38 85 09 C2 */	addi r4, r5, 0x9c2
/* 8005C294 00059374  38 A5 09 D4 */	addi r5, r5, 0x9d4
/* 8005C298 00059378  38 E0 00 00 */	li r7, 0x0
/* 8005C29C 0005937C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8005C2A0 00059380  39 00 00 00 */	li r8, 0x0
/* 8005C2A4 00059384  39 20 00 00 */	li r9, 0x0
/* 8005C2A8 00059388  39 40 00 00 */	li r10, 0x0
/* 8005C2AC 0005938C  C0 22 89 B8 */	lfs f1, "@1551"@sda21(r2)
/* 8005C2B0 00059390  C0 62 8A E0 */	lfs f3, "@3447"@sda21(r2)
/* 8005C2B4 00059394  FC 40 08 90 */	fmr f2, f1
/* 8005C2B8 00059398  4B FA B1 09 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 8005C2BC 0005939C  3C A0 80 29 */	lis r5, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005C2C0 000593A0  3C 80 80 25 */	lis r4, "@stringBase0"@ha
/* 8005C2C4 000593A4  38 A5 C2 A4 */	addi r5, r5, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005C2C8 000593A8  38 00 00 00 */	li r0, 0x0
/* 8005C2CC 000593AC  90 65 01 7C */	stw r3, 0x17c(r5)
/* 8005C2D0 000593B0  38 A4 53 3C */	addi r5, r4, "@stringBase0"@l
/* 8005C2D4 000593B4  7F C3 F3 78 */	mr r3, r30
/* 8005C2D8 000593B8  38 C0 00 00 */	li r6, 0x0
/* 8005C2DC 000593BC  90 01 00 08 */	stw r0, 0x8(r1)
/* 8005C2E0 000593C0  38 85 09 D4 */	addi r4, r5, 0x9d4
/* 8005C2E4 000593C4  38 A5 09 E7 */	addi r5, r5, 0x9e7
/* 8005C2E8 000593C8  38 E0 00 00 */	li r7, 0x0
/* 8005C2EC 000593CC  90 01 00 0C */	stw r0, 0xc(r1)
/* 8005C2F0 000593D0  39 00 00 10 */	li r8, 0x10
/* 8005C2F4 000593D4  39 20 00 00 */	li r9, 0x0
/* 8005C2F8 000593D8  39 40 00 00 */	li r10, 0x0
/* 8005C2FC 000593DC  C0 22 89 B8 */	lfs f1, "@1551"@sda21(r2)
/* 8005C300 000593E0  C0 62 8A E0 */	lfs f3, "@3447"@sda21(r2)
/* 8005C304 000593E4  FC 40 08 90 */	fmr f2, f1
/* 8005C308 000593E8  4B FA B0 B9 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 8005C30C 000593EC  3C A0 80 29 */	lis r5, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005C310 000593F0  38 00 00 00 */	li r0, 0x0
/* 8005C314 000593F4  38 A5 C2 A4 */	addi r5, r5, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005C318 000593F8  3C 80 80 25 */	lis r4, "@stringBase0"@ha
/* 8005C31C 000593FC  90 65 01 80 */	stw r3, 0x180(r5)
/* 8005C320 00059400  38 A4 53 3C */	addi r5, r4, "@stringBase0"@l
/* 8005C324 00059404  7F C3 F3 78 */	mr r3, r30
/* 8005C328 00059408  38 C0 00 00 */	li r6, 0x0
/* 8005C32C 0005940C  90 01 00 08 */	stw r0, 0x8(r1)
/* 8005C330 00059410  38 85 09 FA */	addi r4, r5, 0x9fa
/* 8005C334 00059414  38 E0 00 00 */	li r7, 0x0
/* 8005C338 00059418  39 00 00 00 */	li r8, 0x0
/* 8005C33C 0005941C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8005C340 00059420  39 20 00 00 */	li r9, 0x0
/* 8005C344 00059424  39 40 00 00 */	li r10, 0x0
/* 8005C348 00059428  C0 22 89 B8 */	lfs f1, "@1551"@sda21(r2)
/* 8005C34C 0005942C  C0 62 8A E0 */	lfs f3, "@3447"@sda21(r2)
/* 8005C350 00059430  FC 40 08 90 */	fmr f2, f1
/* 8005C354 00059434  4B FA B0 6D */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 8005C358 00059438  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005C35C 0005943C  38 84 C2 A4 */	addi r4, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005C360 00059440  90 64 01 84 */	stw r3, 0x184(r4)
/* 8005C364 00059444  7F E3 FB 78 */	mr r3, r31
/* 8005C368 00059448  4B FD 77 1D */	bl xMemPopTemp__FPv
.L_8005C36C:
/* 8005C36C 0005944C  BB 21 00 24 */	lmw r25, 0x24(r1)
/* 8005C370 00059450  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8005C374 00059454  7C 08 03 A6 */	mtlr r0
/* 8005C378 00059458  38 21 00 40 */	addi r1, r1, 0x40
/* 8005C37C 0005945C  4E 80 00 20 */	blr
.endfn insert_player_animations__13cruise_bubbleFR10xAnimTable

# cruise_bubble::anim_table()
.fn anim_table__13cruise_bubbleFv, global
/* 8005C380 00059460  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005C384 00059464  7C 08 02 A6 */	mflr r0
/* 8005C388 00059468  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8005C38C 0005946C  38 80 00 00 */	li r4, 0x0
/* 8005C390 00059470  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005C394 00059474  38 63 53 3C */	addi r3, r3, "@stringBase0"@l
/* 8005C398 00059478  38 A0 00 00 */	li r5, 0x0
/* 8005C39C 0005947C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8005C3A0 00059480  38 63 0A 32 */	addi r3, r3, 0xa32
/* 8005C3A4 00059484  4B FA A8 CD */	bl xAnimTableNew__FPCcPP10xAnimTableUi
/* 8005C3A8 00059488  3C A0 80 00 */	lis r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8005C3AC 0005948C  3C 80 80 25 */	lis r4, "@stringBase0"@ha
/* 8005C3B0 00059490  38 05 6C FC */	addi r0, r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8005C3B4 00059494  7C 7F 1B 78 */	mr r31, r3
/* 8005C3B8 00059498  90 01 00 08 */	stw r0, 0x8(r1)
/* 8005C3BC 0005949C  38 00 00 00 */	li r0, 0x0
/* 8005C3C0 000594A0  38 84 53 3C */	addi r4, r4, "@stringBase0"@l
/* 8005C3C4 000594A4  38 A0 00 20 */	li r5, 0x20
/* 8005C3C8 000594A8  90 01 00 0C */	stw r0, 0xc(r1)
/* 8005C3CC 000594AC  38 84 0A 40 */	addi r4, r4, 0xa40
/* 8005C3D0 000594B0  38 C0 00 00 */	li r6, 0x0
/* 8005C3D4 000594B4  38 E0 00 00 */	li r7, 0x0
/* 8005C3D8 000594B8  90 01 00 10 */	stw r0, 0x10(r1)
/* 8005C3DC 000594BC  39 00 00 00 */	li r8, 0x0
/* 8005C3E0 000594C0  39 20 00 00 */	li r9, 0x0
/* 8005C3E4 000594C4  39 40 00 00 */	li r10, 0x0
/* 8005C3E8 000594C8  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005C3EC 000594CC  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005C3F0 000594D0  4B FA A9 69 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8005C3F4 000594D4  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005C3F8 000594D8  3C A0 80 00 */	lis r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8005C3FC 000594DC  38 C4 C2 A4 */	addi r6, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005C400 000594E0  3C 80 80 25 */	lis r4, "@stringBase0"@ha
/* 8005C404 000594E4  90 66 01 70 */	stw r3, 0x170(r6)
/* 8005C408 000594E8  38 65 6C FC */	addi r3, r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8005C40C 000594EC  38 84 53 3C */	addi r4, r4, "@stringBase0"@l
/* 8005C410 000594F0  38 00 00 00 */	li r0, 0x0
/* 8005C414 000594F4  90 61 00 08 */	stw r3, 0x8(r1)
/* 8005C418 000594F8  7F E3 FB 78 */	mr r3, r31
/* 8005C41C 000594FC  38 84 0A 45 */	addi r4, r4, 0xa45
/* 8005C420 00059500  38 A0 00 10 */	li r5, 0x10
/* 8005C424 00059504  90 01 00 0C */	stw r0, 0xc(r1)
/* 8005C428 00059508  38 C0 00 00 */	li r6, 0x0
/* 8005C42C 0005950C  38 E0 00 00 */	li r7, 0x0
/* 8005C430 00059510  39 00 00 00 */	li r8, 0x0
/* 8005C434 00059514  90 01 00 10 */	stw r0, 0x10(r1)
/* 8005C438 00059518  39 20 00 00 */	li r9, 0x0
/* 8005C43C 0005951C  39 40 00 00 */	li r10, 0x0
/* 8005C440 00059520  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005C444 00059524  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005C448 00059528  4B FA A9 11 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8005C44C 0005952C  3C A0 80 29 */	lis r5, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005C450 00059530  3C 80 80 25 */	lis r4, "@stringBase0"@ha
/* 8005C454 00059534  38 A5 C2 A4 */	addi r5, r5, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005C458 00059538  38 00 00 00 */	li r0, 0x0
/* 8005C45C 0005953C  90 65 01 74 */	stw r3, 0x174(r5)
/* 8005C460 00059540  38 A4 53 3C */	addi r5, r4, "@stringBase0"@l
/* 8005C464 00059544  7F E3 FB 78 */	mr r3, r31
/* 8005C468 00059548  38 C0 00 00 */	li r6, 0x0
/* 8005C46C 0005954C  90 01 00 08 */	stw r0, 0x8(r1)
/* 8005C470 00059550  38 85 0A 40 */	addi r4, r5, 0xa40
/* 8005C474 00059554  38 A5 0A 45 */	addi r5, r5, 0xa45
/* 8005C478 00059558  38 E0 00 00 */	li r7, 0x0
/* 8005C47C 0005955C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8005C480 00059560  39 00 00 10 */	li r8, 0x10
/* 8005C484 00059564  39 20 00 00 */	li r9, 0x0
/* 8005C488 00059568  39 40 00 00 */	li r10, 0x0
/* 8005C48C 0005956C  C0 22 89 B8 */	lfs f1, "@1551"@sda21(r2)
/* 8005C490 00059570  C0 62 8A E0 */	lfs f3, "@3447"@sda21(r2)
/* 8005C494 00059574  FC 40 08 90 */	fmr f2, f1
/* 8005C498 00059578  4B FA AF 29 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 8005C49C 0005957C  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005C4A0 00059580  38 84 C2 A4 */	addi r4, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005C4A4 00059584  90 64 01 88 */	stw r3, 0x188(r4)
/* 8005C4A8 00059588  7F E3 FB 78 */	mr r3, r31
/* 8005C4AC 0005958C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8005C4B0 00059590  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005C4B4 00059594  7C 08 03 A6 */	mtlr r0
/* 8005C4B8 00059598  38 21 00 20 */	addi r1, r1, 0x20
/* 8005C4BC 0005959C  4E 80 00 20 */	blr
.endfn anim_table__13cruise_bubbleFv

# cruise_bubble::active()
.fn active__13cruise_bubbleFv, global
/* 8005C4C0 000595A0  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005C4C4 000595A4  80 03 C2 A4 */	lwz r0, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l(r3)
/* 8005C4C8 000595A8  54 03 E7 FE */	extrwi r3, r0, 1, 27
/* 8005C4CC 000595AC  4E 80 00 20 */	blr
.endfn active__13cruise_bubbleFv

# cruise_bubble::exploding()
.fn exploding__13cruise_bubbleFv, global
/* 8005C4D0 000595B0  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005C4D4 000595B4  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005C4D8 000595B8  80 83 00 08 */	lwz r4, 0x8(r3)
/* 8005C4DC 000595BC  28 04 00 00 */	cmplwi r4, 0x0
/* 8005C4E0 000595C0  41 82 00 10 */	beq .L_8005C4F0
/* 8005C4E4 000595C4  80 04 00 00 */	lwz r0, 0x0(r4)
/* 8005C4E8 000595C8  2C 00 00 06 */	cmpwi r0, 0x6
/* 8005C4EC 000595CC  41 82 00 0C */	beq .L_8005C4F8
.L_8005C4F0:
/* 8005C4F0 000595D0  C0 22 89 B8 */	lfs f1, "@1551"@sda21(r2)
/* 8005C4F4 000595D4  4E 80 00 20 */	blr
.L_8005C4F8:
/* 8005C4F8 000595D8  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005C4FC 000595DC  C0 04 00 08 */	lfs f0, 0x8(r4)
/* 8005C500 000595E0  C0 23 00 6C */	lfs f1, 0x6c(r3)
/* 8005C504 000595E4  EC 21 00 28 */	fsubs f1, f1, f0
/* 8005C508 000595E8  4E 80 00 20 */	blr
.endfn exploding__13cruise_bubbleFv

# cruise_bubble::get_explode_sphere(xVec3&, float&)
.fn get_explode_sphere__13cruise_bubbleFR5xVec3Rf, global
/* 8005C50C 000595EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005C510 000595F0  7C 08 02 A6 */	mflr r0
/* 8005C514 000595F4  3C A0 80 29 */	lis r5, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005C518 000595F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005C51C 000595FC  38 A5 C2 A4 */	addi r5, r5, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005C520 00059600  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005C524 00059604  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8005C528 00059608  7C 9E 23 78 */	mr r30, r4
/* 8005C52C 0005960C  83 E5 00 08 */	lwz r31, 0x8(r5)
/* 8005C530 00059610  28 1F 00 00 */	cmplwi r31, 0x0
/* 8005C534 00059614  41 82 00 40 */	beq .L_8005C574
/* 8005C538 00059618  80 1F 00 00 */	lwz r0, 0x0(r31)
/* 8005C53C 0005961C  2C 00 00 06 */	cmpwi r0, 0x6
/* 8005C540 00059620  41 82 00 08 */	beq .L_8005C548
/* 8005C544 00059624  48 00 00 30 */	b .L_8005C574
.L_8005C548:
/* 8005C548 00059628  80 8D 81 80 */	lwz r4, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005C54C 0005962C  C0 3F 00 08 */	lfs f1, 0x8(r31)
/* 8005C550 00059630  C0 04 00 6C */	lfs f0, 0x6c(r4)
/* 8005C554 00059634  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005C558 00059638  4C 41 13 82 */	cror eq, gt, eq
/* 8005C55C 0005963C  41 82 00 18 */	beq .L_8005C574
/* 8005C560 00059640  38 85 00 50 */	addi r4, r5, 0x50
/* 8005C564 00059644  4B FA ED 01 */	bl __as__5xVec3FRC5xVec3
/* 8005C568 00059648  7F E3 FB 78 */	mr r3, r31
/* 8005C56C 0005964C  48 00 00 21 */	bl "get_radius__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeCFv"
/* 8005C570 00059650  D0 3E 00 00 */	stfs f1, 0x0(r30)
.L_8005C574:
/* 8005C574 00059654  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005C578 00059658  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005C57C 0005965C  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8005C580 00059660  7C 08 03 A6 */	mtlr r0
/* 8005C584 00059664  38 21 00 10 */	addi r1, r1, 0x10
/* 8005C588 00059668  4E 80 00 20 */	blr
.endfn get_explode_sphere__13cruise_bubbleFR5xVec3Rf

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_explode::get_radius() const
.fn "get_radius__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeCFv", local
/* 8005C58C 0005966C  80 8D 81 80 */	lwz r4, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005C590 00059670  C0 43 00 08 */	lfs f2, 0x8(r3)
/* 8005C594 00059674  C0 24 00 6C */	lfs f1, 0x6c(r4)
/* 8005C598 00059678  C0 04 00 68 */	lfs f0, 0x68(r4)
/* 8005C59C 0005967C  EC 22 08 24 */	fdivs f1, f2, f1
/* 8005C5A0 00059680  EC 21 00 32 */	fmuls f1, f1, f0
/* 8005C5A4 00059684  4E 80 00 20 */	blr
.endfn "get_radius__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeCFv"

# cruise_bubble::get_explode_hits(int&)
.fn get_explode_hits__13cruise_bubbleFRi, global
/* 8005C5A8 00059688  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005C5AC 0005968C  38 A4 C2 A4 */	addi r5, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005C5B0 00059690  80 C5 00 08 */	lwz r6, 0x8(r5)
/* 8005C5B4 00059694  28 06 00 00 */	cmplwi r6, 0x0
/* 8005C5B8 00059698  41 82 00 10 */	beq .L_8005C5C8
/* 8005C5BC 0005969C  80 06 00 00 */	lwz r0, 0x0(r6)
/* 8005C5C0 000596A0  2C 00 00 06 */	cmpwi r0, 0x6
/* 8005C5C4 000596A4  41 82 00 14 */	beq .L_8005C5D8
.L_8005C5C8:
/* 8005C5C8 000596A8  38 00 00 00 */	li r0, 0x0
/* 8005C5CC 000596AC  90 03 00 00 */	stw r0, 0x0(r3)
/* 8005C5D0 000596B0  38 60 00 00 */	li r3, 0x0
/* 8005C5D4 000596B4  4E 80 00 20 */	blr
.L_8005C5D8:
/* 8005C5D8 000596B8  80 8D 81 80 */	lwz r4, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005C5DC 000596BC  C0 26 00 08 */	lfs f1, 0x8(r6)
/* 8005C5E0 000596C0  C0 04 00 6C */	lfs f0, 0x6c(r4)
/* 8005C5E4 000596C4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005C5E8 000596C8  4C 41 13 82 */	cror eq, gt, eq
/* 8005C5EC 000596CC  40 82 00 14 */	bne .L_8005C600
/* 8005C5F0 000596D0  38 00 00 00 */	li r0, 0x0
/* 8005C5F4 000596D4  90 03 00 00 */	stw r0, 0x0(r3)
/* 8005C5F8 000596D8  38 60 00 00 */	li r3, 0x0
/* 8005C5FC 000596DC  4E 80 00 20 */	blr
.L_8005C600:
/* 8005C600 000596E0  80 05 00 EC */	lwz r0, 0xec(r5)
/* 8005C604 000596E4  90 03 00 00 */	stw r0, 0x0(r3)
/* 8005C608 000596E8  38 65 00 6C */	addi r3, r5, 0x6c
/* 8005C60C 000596EC  4E 80 00 20 */	blr
.endfn get_explode_hits__13cruise_bubbleFRi

# cruise_bubble::add_life(float, float)
.fn add_life__13cruise_bubbleFff, global
/* 8005C610 000596F0  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005C614 000596F4  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005C618 000596F8  80 83 00 08 */	lwz r4, 0x8(r3)
/* 8005C61C 000596FC  28 04 00 00 */	cmplwi r4, 0x0
/* 8005C620 00059700  4D 82 00 20 */	beqlr
/* 8005C624 00059704  80 04 00 00 */	lwz r0, 0x0(r4)
/* 8005C628 00059708  2C 00 00 05 */	cmpwi r0, 0x5
/* 8005C62C 0005970C  41 82 00 08 */	beq .L_8005C634
/* 8005C630 00059710  4E 80 00 20 */	blr
.L_8005C634:
/* 8005C634 00059714  C0 04 00 08 */	lfs f0, 0x8(r4)
/* 8005C638 00059718  EC 00 08 2A */	fadds f0, f0, f1
/* 8005C63C 0005971C  D0 04 00 08 */	stfs f0, 0x8(r4)
/* 8005C640 00059720  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005C644 00059724  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8005C648 00059728  40 80 00 0C */	bge .L_8005C654
/* 8005C64C 0005972C  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005C650 00059730  C0 43 00 14 */	lfs f2, 0x14(r3)
.L_8005C654:
/* 8005C654 00059734  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005C658 00059738  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8005C65C 0005973C  4C 81 00 20 */	blelr
/* 8005C660 00059740  C0 04 00 08 */	lfs f0, 0x8(r4)
/* 8005C664 00059744  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8005C668 00059748  4C 81 00 20 */	blelr
/* 8005C66C 0005974C  D0 44 00 08 */	stfs f2, 0x8(r4)
/* 8005C670 00059750  4E 80 00 20 */	blr
.endfn add_life__13cruise_bubbleFff

# cruise_bubble::set_life(float)
.fn set_life__13cruise_bubbleFf, global
/* 8005C674 00059754  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005C678 00059758  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005C67C 0005975C  80 63 00 08 */	lwz r3, 0x8(r3)
/* 8005C680 00059760  28 03 00 00 */	cmplwi r3, 0x0
/* 8005C684 00059764  4D 82 00 20 */	beqlr
/* 8005C688 00059768  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8005C68C 0005976C  2C 00 00 05 */	cmpwi r0, 0x5
/* 8005C690 00059770  41 82 00 08 */	beq .L_8005C698
/* 8005C694 00059774  4E 80 00 20 */	blr
.L_8005C698:
/* 8005C698 00059778  D0 23 00 08 */	stfs f1, 0x8(r3)
/* 8005C69C 0005977C  4E 80 00 20 */	blr
.endfn set_life__13cruise_bubbleFf

# cruise_bubble::reset_life()
.fn reset_life__13cruise_bubbleFv, global
/* 8005C6A0 00059780  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005C6A4 00059784  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005C6A8 00059788  80 83 00 08 */	lwz r4, 0x8(r3)
/* 8005C6AC 0005978C  28 04 00 00 */	cmplwi r4, 0x0
/* 8005C6B0 00059790  4D 82 00 20 */	beqlr
/* 8005C6B4 00059794  80 04 00 00 */	lwz r0, 0x0(r4)
/* 8005C6B8 00059798  2C 00 00 05 */	cmpwi r0, 0x5
/* 8005C6BC 0005979C  41 82 00 08 */	beq .L_8005C6C4
/* 8005C6C0 000597A0  4E 80 00 20 */	blr
.L_8005C6C4:
/* 8005C6C4 000597A4  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005C6C8 000597A8  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 8005C6CC 000597AC  D0 04 00 08 */	stfs f0, 0x8(r4)
/* 8005C6D0 000597B0  4E 80 00 20 */	blr
.endfn reset_life__13cruise_bubbleFv

# cruise_bubble::event_handler(xBase*, unsigned int, const float*, xBase*)
.fn event_handler__13cruise_bubbleFP5xBaseUiPCfP5xBase, global
/* 8005C6D4 000597B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005C6D8 000597B8  7C 08 02 A6 */	mflr r0
/* 8005C6DC 000597BC  2C 04 02 06 */	cmpwi r4, 0x206
/* 8005C6E0 000597C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005C6E4 000597C4  41 82 00 3C */	beq .L_8005C720
/* 8005C6E8 000597C8  40 80 00 18 */	bge .L_8005C700
/* 8005C6EC 000597CC  2C 04 02 05 */	cmpwi r4, 0x205
/* 8005C6F0 000597D0  40 80 00 1C */	bge .L_8005C70C
/* 8005C6F4 000597D4  2C 04 02 03 */	cmpwi r4, 0x203
/* 8005C6F8 000597D8  40 80 00 44 */	bge .L_8005C73C
/* 8005C6FC 000597DC  48 00 00 48 */	b .L_8005C744
.L_8005C700:
/* 8005C700 000597E0  2C 04 02 08 */	cmpwi r4, 0x208
/* 8005C704 000597E4  40 80 00 40 */	bge .L_8005C744
/* 8005C708 000597E8  48 00 00 28 */	b .L_8005C730
.L_8005C70C:
/* 8005C70C 000597EC  C0 25 00 00 */	lfs f1, 0x0(r5)
/* 8005C710 000597F0  C0 45 00 04 */	lfs f2, 0x4(r5)
/* 8005C714 000597F4  4B FF FE FD */	bl add_life__13cruise_bubbleFff
/* 8005C718 000597F8  38 60 00 01 */	li r3, 0x1
/* 8005C71C 000597FC  48 00 00 2C */	b .L_8005C748
.L_8005C720:
/* 8005C720 00059800  C0 25 00 00 */	lfs f1, 0x0(r5)
/* 8005C724 00059804  4B FF FF 51 */	bl set_life__13cruise_bubbleFf
/* 8005C728 00059808  38 60 00 01 */	li r3, 0x1
/* 8005C72C 0005980C  48 00 00 1C */	b .L_8005C748
.L_8005C730:
/* 8005C730 00059810  4B FF FF 71 */	bl reset_life__13cruise_bubbleFv
/* 8005C734 00059814  38 60 00 01 */	li r3, 0x1
/* 8005C738 00059818  48 00 00 10 */	b .L_8005C748
.L_8005C73C:
/* 8005C73C 0005981C  38 60 00 01 */	li r3, 0x1
/* 8005C740 00059820  48 00 00 08 */	b .L_8005C748
.L_8005C744:
/* 8005C744 00059824  38 60 00 00 */	li r3, 0x0
.L_8005C748:
/* 8005C748 00059828  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005C74C 0005982C  7C 08 03 A6 */	mtlr r0
/* 8005C750 00059830  38 21 00 10 */	addi r1, r1, 0x10
/* 8005C754 00059834  4E 80 00 20 */	blr
.endfn event_handler__13cruise_bubbleFP5xBaseUiPCfP5xBase

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_player_halt::start()
.fn "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_haltFv", local
/* 8005C758 00059838  38 00 00 01 */	li r0, 0x1
/* 8005C75C 0005983C  98 03 00 08 */	stb r0, 0x8(r3)
/* 8005C760 00059840  4E 80 00 20 */	blr
.endfn "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_haltFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_player_halt::stop()
.fn "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_haltFv", local
/* 8005C764 00059844  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005C768 00059848  84 03 C2 A4 */	lwzu r0, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l(r3)
/* 8005C76C 0005984C  54 00 06 F2 */	rlwinm r0, r0, 0, 27, 25
/* 8005C770 00059850  90 03 00 00 */	stw r0, 0x0(r3)
/* 8005C774 00059854  4E 80 00 20 */	blr
.endfn "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_haltFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_player_halt::update(float)
.fn "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_haltFf", local
/* 8005C778 00059858  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8005C77C 0005985C  7C 08 02 A6 */	mflr r0
/* 8005C780 00059860  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005C784 00059864  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8005C788 00059868  7C 7F 1B 78 */	mr r31, r3
/* 8005C78C 0005986C  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 8005C790 00059870  EC 00 08 2A */	fadds f0, f0, f1
/* 8005C794 00059874  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 8005C798 00059878  88 03 00 08 */	lbz r0, 0x8(r3)
/* 8005C79C 0005987C  28 00 00 00 */	cmplwi r0, 0x0
/* 8005C7A0 00059880  41 82 00 28 */	beq .L_8005C7C8
/* 8005C7A4 00059884  38 00 00 00 */	li r0, 0x0
/* 8005C7A8 00059888  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005C7AC 0005988C  38 83 C2 A4 */	addi r4, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005C7B0 00059890  98 1F 00 08 */	stb r0, 0x8(r31)
/* 8005C7B4 00059894  38 7F 00 10 */	addi r3, r31, 0x10
/* 8005C7B8 00059898  38 84 00 F4 */	addi r4, r4, 0xf4
/* 8005C7BC 0005989C  4B FA EA A9 */	bl __as__5xVec3FRC5xVec3
/* 8005C7C0 000598A0  38 60 00 00 */	li r3, 0x0
/* 8005C7C4 000598A4  48 00 00 70 */	b .L_8005C834
.L_8005C7C8:
/* 8005C7C8 000598A8  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005C7CC 000598AC  38 61 00 08 */	addi r3, r1, 0x8
/* 8005C7D0 000598B0  38 84 C2 A4 */	addi r4, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005C7D4 000598B4  38 BF 00 10 */	addi r5, r31, 0x10
/* 8005C7D8 000598B8  38 84 00 F4 */	addi r4, r4, 0xf4
/* 8005C7DC 000598BC  4B FA E9 F1 */	bl __mi__5xVec3CFRC5xVec3
/* 8005C7E0 000598C0  80 A1 00 08 */	lwz r5, 0x8(r1)
/* 8005C7E4 000598C4  38 61 00 14 */	addi r3, r1, 0x14
/* 8005C7E8 000598C8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8005C7EC 000598CC  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8005C7F0 000598D0  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8005C7F4 000598D4  90 81 00 18 */	stw r4, 0x18(r1)
/* 8005C7F8 000598D8  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8005C7FC 000598DC  4B FA E9 01 */	bl length2__5xVec3CFv
/* 8005C800 000598E0  C0 02 89 C4 */	lfs f0, "@1721"@sda21(r2)
/* 8005C804 000598E4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005C808 000598E8  40 80 00 0C */	bge .L_8005C814
/* 8005C80C 000598EC  38 60 00 01 */	li r3, 0x1
/* 8005C810 000598F0  48 00 00 24 */	b .L_8005C834
.L_8005C814:
/* 8005C814 000598F4  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005C818 000598F8  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 8005C81C 000598FC  C0 03 00 04 */	lfs f0, 0x4(r3)
/* 8005C820 00059900  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005C824 00059904  40 81 00 0C */	ble .L_8005C830
/* 8005C828 00059908  38 60 FF FF */	li r3, -0x1
/* 8005C82C 0005990C  48 00 00 08 */	b .L_8005C834
.L_8005C830:
/* 8005C830 00059910  38 60 00 00 */	li r3, 0x0
.L_8005C834:
/* 8005C834 00059914  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8005C838 00059918  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8005C83C 0005991C  7C 08 03 A6 */	mtlr r0
/* 8005C840 00059920  38 21 00 30 */	addi r1, r1, 0x30
/* 8005C844 00059924  4E 80 00 20 */	blr
.endfn "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_haltFf"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_player_aim::start()
.fn "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_player_aimFv", local
/* 8005C848 00059928  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005C84C 0005992C  7C 08 02 A6 */	mflr r0
/* 8005C850 00059930  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005C854 00059934  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005C858 00059938  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005C85C 0005993C  7C 7F 1B 78 */	mr r31, r3
/* 8005C860 00059940  38 64 C2 A4 */	addi r3, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005C864 00059944  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8005C868 00059948  60 00 00 20 */	ori r0, r0, 0x20
/* 8005C86C 0005994C  90 03 00 00 */	stw r0, 0x0(r3)
/* 8005C870 00059950  48 00 00 65 */	bl "get_player_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005C874 00059954  C0 23 00 20 */	lfs f1, 0x20(r3)
/* 8005C878 00059958  C0 43 00 28 */	lfs f2, 0x28(r3)
/* 8005C87C 0005995C  4B FA 97 F5 */	bl xatan2__Fff
/* 8005C880 00059960  D0 3F 00 08 */	stfs f1, 0x8(r31)
/* 8005C884 00059964  3C 80 80 3C */	lis r4, globals@ha
/* 8005C888 00059968  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005C88C 0005996C  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005C890 00059970  38 84 05 58 */	addi r4, r4, globals@l
/* 8005C894 00059974  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005C898 00059978  D0 1F 00 0C */	stfs f0, 0xc(r31)
/* 8005C89C 0005997C  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005C8A0 00059980  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 8005C8A4 00059984  80 A4 07 04 */	lwz r5, 0x704(r4)
/* 8005C8A8 00059988  80 83 01 78 */	lwz r4, 0x178(r3)
/* 8005C8AC 0005998C  80 65 00 0C */	lwz r3, 0xc(r5)
/* 8005C8B0 00059990  4B FA C1 95 */	bl xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition
/* 8005C8B4 00059994  38 60 00 02 */	li r3, 0x2
/* 8005C8B8 00059998  38 80 00 07 */	li r4, 0x7
/* 8005C8BC 0005999C  4B FF B4 21 */	bl "set_state__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@11thread_enumQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_enum"
/* 8005C8C0 000599A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005C8C4 000599A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005C8C8 000599A8  7C 08 03 A6 */	mtlr r0
/* 8005C8CC 000599AC  38 21 00 10 */	addi r1, r1, 0x10
/* 8005C8D0 000599B0  4E 80 00 20 */	blr
.endfn "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_player_aimFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::get_player_mat()
.fn "get_player_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 8005C8D4 000599B4  3C 60 80 3C */	lis r3, globals@ha
/* 8005C8D8 000599B8  38 63 05 58 */	addi r3, r3, globals@l
/* 8005C8DC 000599BC  80 63 07 04 */	lwz r3, 0x704(r3)
/* 8005C8E0 000599C0  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8005C8E4 000599C4  4E 80 00 20 */	blr
.endfn "get_player_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_player_aim::stop()
.fn "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_player_aimFv", local
/* 8005C8E8 000599C8  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005C8EC 000599CC  84 03 C2 A4 */	lwzu r0, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l(r3)
/* 8005C8F0 000599D0  54 00 06 F2 */	rlwinm r0, r0, 0, 27, 25
/* 8005C8F4 000599D4  90 03 00 00 */	stw r0, 0x0(r3)
/* 8005C8F8 000599D8  4E 80 00 20 */	blr
.endfn "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_player_aimFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_player_aim::update(float)
.fn "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_player_aimFf", local
/* 8005C8FC 000599DC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005C900 000599E0  7C 08 02 A6 */	mflr r0
/* 8005C904 000599E4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005C908 000599E8  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8005C90C 000599EC  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8005C910 000599F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005C914 000599F4  7C 7F 1B 78 */	mr r31, r3
/* 8005C918 000599F8  FF E0 08 90 */	fmr f31, f1
/* 8005C91C 000599FC  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 8005C920 00059A00  EC 00 F8 2A */	fadds f0, f0, f31
/* 8005C924 00059A04  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 8005C928 00059A08  80 8D 81 80 */	lwz r4, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005C92C 00059A0C  C0 43 00 10 */	lfs f2, 0x10(r3)
/* 8005C930 00059A10  C0 04 00 00 */	lfs f0, 0x0(r4)
/* 8005C934 00059A14  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8005C938 00059A18  4C 41 13 82 */	cror eq, gt, eq
/* 8005C93C 00059A1C  40 82 00 08 */	bne .L_8005C944
/* 8005C940 00059A20  48 00 01 59 */	bl "face_camera__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_player_aimFf"
.L_8005C944:
/* 8005C944 00059A24  7F E3 FB 78 */	mr r3, r31
/* 8005C948 00059A28  48 00 00 B9 */	bl "apply_yaw__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_player_aimFv"
/* 8005C94C 00059A2C  FC 20 F8 90 */	fmr f1, f31
/* 8005C950 00059A30  7F E3 FB 78 */	mr r3, r31
/* 8005C954 00059A34  48 00 00 45 */	bl "update_animation__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_player_aimFf"
/* 8005C958 00059A38  3C 60 80 3C */	lis r3, globals@ha
/* 8005C95C 00059A3C  38 63 05 58 */	addi r3, r3, globals@l
/* 8005C960 00059A40  80 63 03 1C */	lwz r3, 0x31c(r3)
/* 8005C964 00059A44  80 03 00 2C */	lwz r0, 0x2c(r3)
/* 8005C968 00059A48  54 00 05 EF */	rlwinm. r0, r0, 0, 23, 23
/* 8005C96C 00059A4C  40 82 00 0C */	bne .L_8005C978
/* 8005C970 00059A50  38 60 00 02 */	li r3, 0x2
/* 8005C974 00059A54  48 00 00 08 */	b .L_8005C97C
.L_8005C978:
/* 8005C978 00059A58  38 60 00 01 */	li r3, 0x1
.L_8005C97C:
/* 8005C97C 00059A5C  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8005C980 00059A60  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005C984 00059A64  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8005C988 00059A68  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005C98C 00059A6C  7C 08 03 A6 */	mtlr r0
/* 8005C990 00059A70  38 21 00 20 */	addi r1, r1, 0x20
/* 8005C994 00059A74  4E 80 00 20 */	blr
.endfn "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_player_aimFf"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_player_aim::update_animation(float)
.fn "update_animation__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_player_aimFf", local
/* 8005C998 00059A78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005C99C 00059A7C  7C 08 02 A6 */	mflr r0
/* 8005C9A0 00059A80  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005C9A4 00059A84  80 8D 81 80 */	lwz r4, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005C9A8 00059A88  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 8005C9AC 00059A8C  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 8005C9B0 00059A90  C0 42 89 FC */	lfs f2, "@2883"@sda21(r2)
/* 8005C9B4 00059A94  EC 21 00 32 */	fmuls f1, f1, f0
/* 8005C9B8 00059A98  C0 62 89 C0 */	lfs f3, "@1720"@sda21(r2)
/* 8005C9BC 00059A9C  4B FB 1F 7D */	bl "range_limit<f>__Ffff"
/* 8005C9C0 00059AA0  3C 60 80 3C */	lis r3, globals@ha
/* 8005C9C4 00059AA4  C0 42 89 C0 */	lfs f2, "@1720"@sda21(r2)
/* 8005C9C8 00059AA8  38 63 05 58 */	addi r3, r3, globals@l
/* 8005C9CC 00059AAC  C0 62 89 C8 */	lfs f3, "@1728"@sda21(r2)
/* 8005C9D0 00059AB0  80 63 07 04 */	lwz r3, 0x704(r3)
/* 8005C9D4 00059AB4  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8005C9D8 00059AB8  80 63 00 08 */	lwz r3, 0x8(r3)
/* 8005C9DC 00059ABC  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 8005C9E0 00059AC0  EC 02 00 2A */	fadds f0, f2, f0
/* 8005C9E4 00059AC4  EC 00 08 2A */	fadds f0, f0, f1
/* 8005C9E8 00059AC8  EC 03 00 32 */	fmuls f0, f3, f0
/* 8005C9EC 00059ACC  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 8005C9F0 00059AD0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005C9F4 00059AD4  7C 08 03 A6 */	mtlr r0
/* 8005C9F8 00059AD8  38 21 00 10 */	addi r1, r1, 0x10
/* 8005C9FC 00059ADC  4E 80 00 20 */	blr
.endfn "update_animation__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_player_aimFf"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_player_aim::apply_yaw()
.fn "apply_yaw__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_player_aimFv", local
/* 8005CA00 00059AE0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005CA04 00059AE4  7C 08 02 A6 */	mflr r0
/* 8005CA08 00059AE8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005CA0C 00059AEC  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8005CA10 00059AF0  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8005CA14 00059AF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005CA18 00059AF8  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8005CA1C 00059AFC  7C 7E 1B 78 */	mr r30, r3
/* 8005CA20 00059B00  4B FF FE B5 */	bl "get_player_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005CA24 00059B04  C0 3E 00 08 */	lfs f1, 0x8(r30)
/* 8005CA28 00059B08  7C 7F 1B 78 */	mr r31, r3
/* 8005CA2C 00059B0C  48 06 84 65 */	bl icos__Ff
/* 8005CA30 00059B10  FF E0 08 90 */	fmr f31, f1
/* 8005CA34 00059B14  C0 3E 00 08 */	lfs f1, 0x8(r30)
/* 8005CA38 00059B18  48 06 84 15 */	bl isin__Ff
/* 8005CA3C 00059B1C  FC 60 F8 90 */	fmr f3, f31
/* 8005CA40 00059B20  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005CA44 00059B24  38 7F 00 20 */	addi r3, r31, 0x20
/* 8005CA48 00059B28  4B FA E6 A5 */	bl assign__5xVec3Ffff
/* 8005CA4C 00059B2C  C0 1F 00 20 */	lfs f0, 0x20(r31)
/* 8005CA50 00059B30  7F E3 FB 78 */	mr r3, r31
/* 8005CA54 00059B34  C0 3F 00 28 */	lfs f1, 0x28(r31)
/* 8005CA58 00059B38  FC 60 00 50 */	fneg f3, f0
/* 8005CA5C 00059B3C  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005CA60 00059B40  4B FA E6 8D */	bl assign__5xVec3Ffff
/* 8005CA64 00059B44  C0 22 89 B8 */	lfs f1, "@1551"@sda21(r2)
/* 8005CA68 00059B48  38 7F 00 10 */	addi r3, r31, 0x10
/* 8005CA6C 00059B4C  C0 42 89 C0 */	lfs f2, "@1720"@sda21(r2)
/* 8005CA70 00059B50  FC 60 08 90 */	fmr f3, f1
/* 8005CA74 00059B54  4B FA E6 79 */	bl assign__5xVec3Ffff
/* 8005CA78 00059B58  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8005CA7C 00059B5C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005CA80 00059B60  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8005CA84 00059B64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005CA88 00059B68  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8005CA8C 00059B6C  7C 08 03 A6 */	mtlr r0
/* 8005CA90 00059B70  38 21 00 20 */	addi r1, r1, 0x20
/* 8005CA94 00059B74  4E 80 00 20 */	blr
.endfn "apply_yaw__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_player_aimFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_player_aim::face_camera(float)
.fn "face_camera__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_player_aimFf", local
/* 8005CA98 00059B78  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8005CA9C 00059B7C  7C 08 02 A6 */	mflr r0
/* 8005CAA0 00059B80  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005CAA4 00059B84  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8005CAA8 00059B88  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8005CAAC 00059B8C  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 8005CAB0 00059B90  F3 C1 00 18 */	psq_st f30, 0x18(r1), 0, qr0
/* 8005CAB4 00059B94  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005CAB8 00059B98  3C 80 80 3C */	lis r4, globals@ha
/* 8005CABC 00059B9C  C0 42 8A 0C */	lfs f2, "@3153"@sda21(r2)
/* 8005CAC0 00059BA0  38 84 05 58 */	addi r4, r4, globals@l
/* 8005CAC4 00059BA4  FF C0 08 90 */	fmr f30, f1
/* 8005CAC8 00059BA8  C0 24 00 34 */	lfs f1, 0x34(r4)
/* 8005CACC 00059BAC  7C 7F 1B 78 */	mr r31, r3
/* 8005CAD0 00059BB0  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 8005CAD4 00059BB4  4C 41 13 82 */	cror eq, gt, eq
/* 8005CAD8 00059BB8  40 82 00 38 */	bne .L_8005CB10
/* 8005CADC 00059BBC  C0 02 89 D4 */	lfs f0, "@1731"@sda21(r2)
/* 8005CAE0 00059BC0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005CAE4 00059BC4  4C 40 13 82 */	cror eq, lt, eq
/* 8005CAE8 00059BC8  40 82 00 28 */	bne .L_8005CB10
/* 8005CAEC 00059BCC  C0 64 00 3C */	lfs f3, 0x3c(r4)
/* 8005CAF0 00059BD0  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 8005CAF4 00059BD4  4C 41 13 82 */	cror eq, gt, eq
/* 8005CAF8 00059BD8  40 82 00 18 */	bne .L_8005CB10
/* 8005CAFC 00059BDC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8005CB00 00059BE0  4C 40 13 82 */	cror eq, lt, eq
/* 8005CB04 00059BE4  40 82 00 0C */	bne .L_8005CB10
/* 8005CB08 00059BE8  C0 3F 00 08 */	lfs f1, 0x8(r31)
/* 8005CB0C 00059BEC  48 00 00 0C */	b .L_8005CB18
.L_8005CB10:
/* 8005CB10 00059BF0  C0 44 00 3C */	lfs f2, 0x3c(r4)
/* 8005CB14 00059BF4  4B FA 95 5D */	bl xatan2__Fff
.L_8005CB18:
/* 8005CB18 00059BF8  C0 5F 00 08 */	lfs f2, 0x8(r31)
/* 8005CB1C 00059BFC  C0 02 8A E4 */	lfs f0, "@3563"@sda21(r2)
/* 8005CB20 00059C00  EF E1 10 28 */	fsubs f31, f1, f2
/* 8005CB24 00059C04  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8005CB28 00059C08  40 81 00 10 */	ble .L_8005CB38
/* 8005CB2C 00059C0C  C0 02 8A E8 */	lfs f0, "@3564"@sda21(r2)
/* 8005CB30 00059C10  EF FF 00 28 */	fsubs f31, f31, f0
/* 8005CB34 00059C14  48 00 00 18 */	b .L_8005CB4C
.L_8005CB38:
/* 8005CB38 00059C18  C0 02 8A EC */	lfs f0, "@3565"@sda21(r2)
/* 8005CB3C 00059C1C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8005CB40 00059C20  40 80 00 0C */	bge .L_8005CB4C
/* 8005CB44 00059C24  C0 02 8A E8 */	lfs f0, "@3564"@sda21(r2)
/* 8005CB48 00059C28  EF FF 00 2A */	fadds f31, f31, f0
.L_8005CB4C:
/* 8005CB4C 00059C2C  FC 20 F0 90 */	fmr f1, f30
/* 8005CB50 00059C30  4B FB 1C 61 */	bl xexp__Ff
/* 8005CB54 00059C34  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005CB58 00059C38  C0 02 89 C0 */	lfs f0, "@1720"@sda21(r2)
/* 8005CB5C 00059C3C  C0 43 00 08 */	lfs f2, 0x8(r3)
/* 8005CB60 00059C40  EC 22 00 72 */	fmuls f1, f2, f1
/* 8005CB64 00059C44  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005CB68 00059C48  40 81 00 08 */	ble .L_8005CB70
/* 8005CB6C 00059C4C  FC 20 00 90 */	fmr f1, f0
.L_8005CB70:
/* 8005CB70 00059C50  EC 3F 00 72 */	fmuls f1, f31, f1
/* 8005CB74 00059C54  EC 01 F0 24 */	fdivs f0, f1, f30
/* 8005CB78 00059C58  D0 1F 00 0C */	stfs f0, 0xc(r31)
/* 8005CB7C 00059C5C  C0 1F 00 08 */	lfs f0, 0x8(r31)
/* 8005CB80 00059C60  EC 00 08 2A */	fadds f0, f0, f1
/* 8005CB84 00059C64  D0 1F 00 08 */	stfs f0, 0x8(r31)
/* 8005CB88 00059C68  C0 3F 00 08 */	lfs f1, 0x8(r31)
/* 8005CB8C 00059C6C  4B FB 1C 69 */	bl xrmod__Ff
/* 8005CB90 00059C70  D0 3F 00 08 */	stfs f1, 0x8(r31)
/* 8005CB94 00059C74  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 8005CB98 00059C78  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8005CB9C 00059C7C  E3 C1 00 18 */	psq_l f30, 0x18(r1), 0, qr0
/* 8005CBA0 00059C80  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 8005CBA4 00059C84  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8005CBA8 00059C88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005CBAC 00059C8C  7C 08 03 A6 */	mtlr r0
/* 8005CBB0 00059C90  38 21 00 30 */	addi r1, r1, 0x30
/* 8005CBB4 00059C94  4E 80 00 20 */	blr
.endfn "face_camera__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_player_aimFf"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_player_fire::start()
.fn "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_fireFv", local
/* 8005CBB8 00059C98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005CBBC 00059C9C  7C 08 02 A6 */	mflr r0
/* 8005CBC0 00059CA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005CBC4 00059CA4  38 00 00 00 */	li r0, 0x0
/* 8005CBC8 00059CA8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005CBCC 00059CAC  98 03 00 08 */	stb r0, 0x8(r3)
/* 8005CBD0 00059CB0  48 00 00 A1 */	bl "get_missle_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005CBD4 00059CB4  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005CBD8 00059CB8  38 83 00 30 */	addi r4, r3, 0x30
/* 8005CBDC 00059CBC  38 60 00 00 */	li r3, 0x0
/* 8005CBE0 00059CC0  4B FF A8 25 */	bl "play_sound__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FifPC5xVec3"
/* 8005CBE4 00059CC4  3C 80 80 3C */	lis r4, globals@ha
/* 8005CBE8 00059CC8  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005CBEC 00059CCC  38 84 05 58 */	addi r4, r4, globals@l
/* 8005CBF0 00059CD0  80 A4 07 04 */	lwz r5, 0x704(r4)
/* 8005CBF4 00059CD4  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005CBF8 00059CD8  80 83 01 7C */	lwz r4, 0x17c(r3)
/* 8005CBFC 00059CDC  80 65 00 0C */	lwz r3, 0xc(r5)
/* 8005CC00 00059CE0  4B FA BE 45 */	bl xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition
/* 8005CC04 00059CE4  38 60 00 01 */	li r3, 0x1
/* 8005CC08 00059CE8  38 80 00 04 */	li r4, 0x4
/* 8005CC0C 00059CEC  4B FF B0 D1 */	bl "set_state__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@11thread_enumQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_enum"
/* 8005CC10 00059CF0  4B FD 40 79 */	bl xurand__Fv
/* 8005CC14 00059CF4  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005CC18 00059CF8  3B E3 C2 A4 */	addi r31, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005CC1C 00059CFC  C0 1F 01 08 */	lfs f0, 0x108(r31)
/* 8005CC20 00059D00  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005CC24 00059D04  4C 40 13 82 */	cror eq, lt, eq
/* 8005CC28 00059D08  40 82 00 34 */	bne .L_8005CC5C
/* 8005CC2C 00059D0C  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005CC30 00059D10  38 60 00 03 */	li r3, 0x3
/* 8005CC34 00059D14  4B FF A6 ED */	bl "play_sound__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fif"
/* 8005CC38 00059D18  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005CC3C 00059D1C  C0 3F 01 08 */	lfs f1, 0x108(r31)
/* 8005CC40 00059D20  C0 03 01 84 */	lfs f0, 0x184(r3)
/* 8005CC44 00059D24  EC 01 00 32 */	fmuls f0, f1, f0
/* 8005CC48 00059D28  D0 1F 01 08 */	stfs f0, 0x108(r31)
/* 8005CC4C 00059D2C  C0 23 01 88 */	lfs f1, 0x188(r3)
/* 8005CC50 00059D30  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8005CC54 00059D34  40 80 00 08 */	bge .L_8005CC5C
/* 8005CC58 00059D38  D0 3F 01 08 */	stfs f1, 0x108(r31)
.L_8005CC5C:
/* 8005CC5C 00059D3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005CC60 00059D40  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005CC64 00059D44  7C 08 03 A6 */	mtlr r0
/* 8005CC68 00059D48  38 21 00 10 */	addi r1, r1, 0x10
/* 8005CC6C 00059D4C  4E 80 00 20 */	blr
.endfn "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_fireFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::get_missle_mat()
.fn "get_missle_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv", local
/* 8005CC70 00059D50  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005CC74 00059D54  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005CC78 00059D58  80 63 00 68 */	lwz r3, 0x68(r3)
/* 8005CC7C 00059D5C  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8005CC80 00059D60  4E 80 00 20 */	blr
.endfn "get_missle_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_player_fire::stop()
.fn "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_fireFv", local
/* 8005CC84 00059D64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005CC88 00059D68  7C 08 02 A6 */	mflr r0
/* 8005CC8C 00059D6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005CC90 00059D70  4B FF A8 B1 */	bl "hide_wand__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005CC94 00059D74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005CC98 00059D78  7C 08 03 A6 */	mtlr r0
/* 8005CC9C 00059D7C  38 21 00 10 */	addi r1, r1, 0x10
/* 8005CCA0 00059D80  4E 80 00 20 */	blr
.endfn "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_fireFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_player_fire::update(float)
.fn "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_fireFf", local
/* 8005CCA4 00059D84  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8005CCA8 00059D88  7C 08 02 A6 */	mflr r0
/* 8005CCAC 00059D8C  90 01 00 44 */	stw r0, 0x44(r1)
/* 8005CCB0 00059D90  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8005CCB4 00059D94  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 8005CCB8 00059D98  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8005CCBC 00059D9C  F3 C1 00 28 */	psq_st f30, 0x28(r1), 0, qr0
/* 8005CCC0 00059DA0  DB A1 00 10 */	stfd f29, 0x10(r1)
/* 8005CCC4 00059DA4  F3 A1 00 18 */	psq_st f29, 0x18(r1), 0, qr0
/* 8005CCC8 00059DA8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005CCCC 00059DAC  3C A0 80 3C */	lis r5, globals@ha
/* 8005CCD0 00059DB0  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005CCD4 00059DB4  38 A5 05 58 */	addi r5, r5, globals@l
/* 8005CCD8 00059DB8  FF A0 08 90 */	fmr f29, f1
/* 8005CCDC 00059DBC  80 A5 07 04 */	lwz r5, 0x704(r5)
/* 8005CCE0 00059DC0  38 84 C2 A4 */	addi r4, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005CCE4 00059DC4  80 04 01 68 */	lwz r0, 0x168(r4)
/* 8005CCE8 00059DC8  7C 7F 1B 78 */	mr r31, r3
/* 8005CCEC 00059DCC  80 65 00 0C */	lwz r3, 0xc(r5)
/* 8005CCF0 00059DD0  80 63 00 08 */	lwz r3, 0x8(r3)
/* 8005CCF4 00059DD4  80 83 00 04 */	lwz r4, 0x4(r3)
/* 8005CCF8 00059DD8  7C 04 00 40 */	cmplw r4, r0
/* 8005CCFC 00059DDC  40 82 00 4C */	bne .L_8005CD48
/* 8005CD00 00059DE0  C0 03 00 08 */	lfs f0, 0x8(r3)
/* 8005CD04 00059DE4  88 1F 00 08 */	lbz r0, 0x8(r31)
/* 8005CD08 00059DE8  80 64 00 18 */	lwz r3, 0x18(r4)
/* 8005CD0C 00059DEC  EF C0 E8 2A */	fadds f30, f0, f29
/* 8005CD10 00059DF0  28 00 00 00 */	cmplwi r0, 0x0
/* 8005CD14 00059DF4  C3 E3 00 10 */	lfs f31, 0x10(r3)
/* 8005CD18 00059DF8  40 82 00 1C */	bne .L_8005CD34
/* 8005CD1C 00059DFC  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005CD20 00059E00  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 8005CD24 00059E04  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 8005CD28 00059E08  4C 41 13 82 */	cror eq, gt, eq
/* 8005CD2C 00059E0C  40 82 00 08 */	bne .L_8005CD34
/* 8005CD30 00059E10  4B FF A7 F5 */	bl "show_wand__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
.L_8005CD34:
/* 8005CD34 00059E14  FC 1E F8 40 */	fcmpo cr0, f30, f31
/* 8005CD38 00059E18  4C 41 13 82 */	cror eq, gt, eq
/* 8005CD3C 00059E1C  40 82 00 0C */	bne .L_8005CD48
/* 8005CD40 00059E20  38 60 00 03 */	li r3, 0x3
/* 8005CD44 00059E24  48 00 00 20 */	b .L_8005CD64
.L_8005CD48:
/* 8005CD48 00059E28  88 1F 00 08 */	lbz r0, 0x8(r31)
/* 8005CD4C 00059E2C  28 00 00 00 */	cmplwi r0, 0x0
/* 8005CD50 00059E30  41 82 00 10 */	beq .L_8005CD60
/* 8005CD54 00059E34  FC 20 E8 90 */	fmr f1, f29
/* 8005CD58 00059E38  7F E3 FB 78 */	mr r3, r31
/* 8005CD5C 00059E3C  48 00 00 35 */	bl "update_wand__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_fireFf"
.L_8005CD60:
/* 8005CD60 00059E40  38 60 00 02 */	li r3, 0x2
.L_8005CD64:
/* 8005CD64 00059E44  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8005CD68 00059E48  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8005CD6C 00059E4C  E3 C1 00 28 */	psq_l f30, 0x28(r1), 0, qr0
/* 8005CD70 00059E50  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8005CD74 00059E54  E3 A1 00 18 */	psq_l f29, 0x18(r1), 0, qr0
/* 8005CD78 00059E58  CB A1 00 10 */	lfd f29, 0x10(r1)
/* 8005CD7C 00059E5C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8005CD80 00059E60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005CD84 00059E64  7C 08 03 A6 */	mtlr r0
/* 8005CD88 00059E68  38 21 00 40 */	addi r1, r1, 0x40
/* 8005CD8C 00059E6C  4E 80 00 20 */	blr
.endfn "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_fireFf"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_player_fire::update_wand(float)
.fn "update_wand__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_fireFf", local
/* 8005CD90 00059E70  4E 80 00 20 */	blr
.endfn "update_wand__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_fireFf"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_player_wait::start()
.fn "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_waitFv", local
/* 8005CD94 00059E74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005CD98 00059E78  7C 08 02 A6 */	mflr r0
/* 8005CD9C 00059E7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005CDA0 00059E80  4B FF A7 A1 */	bl "hide_wand__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005CDA4 00059E84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005CDA8 00059E88  7C 08 03 A6 */	mtlr r0
/* 8005CDAC 00059E8C  38 21 00 10 */	addi r1, r1, 0x10
/* 8005CDB0 00059E90  4E 80 00 20 */	blr
.endfn "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_waitFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_player_wait::update(float)
.fn "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_waitFf", local
/* 8005CDB4 00059E94  38 60 00 03 */	li r3, 0x3
/* 8005CDB8 00059E98  4E 80 00 20 */	blr
.endfn "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_waitFf"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_appear::start()
.fn "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_missle_appearFv", local
/* 8005CDBC 00059E9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005CDC0 00059EA0  7C 08 02 A6 */	mflr r0
/* 8005CDC4 00059EA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005CDC8 00059EA8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005CDCC 00059EAC  7C 7F 1B 78 */	mr r31, r3
/* 8005CDD0 00059EB0  4B FF A7 8D */	bl "show_missle__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005CDD4 00059EB4  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005CDD8 00059EB8  38 83 C2 A4 */	addi r4, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005CDDC 00059EBC  80 64 00 68 */	lwz r3, 0x68(r4)
/* 8005CDE0 00059EC0  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 8005CDE4 00059EC4  54 00 04 3C */	rlwinm r0, r0, 0, 16, 30
/* 8005CDE8 00059EC8  B0 03 00 44 */	sth r0, 0x44(r3)
/* 8005CDEC 00059ECC  C0 02 89 C0 */	lfs f0, "@1720"@sda21(r2)
/* 8005CDF0 00059ED0  80 64 00 68 */	lwz r3, 0x68(r4)
/* 8005CDF4 00059ED4  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 8005CDF8 00059ED8  80 64 00 68 */	lwz r3, 0x68(r4)
/* 8005CDFC 00059EDC  80 84 01 70 */	lwz r4, 0x170(r4)
/* 8005CE00 00059EE0  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8005CE04 00059EE4  C0 22 89 B8 */	lfs f1, "@1551"@sda21(r2)
/* 8005CE08 00059EE8  80 63 00 08 */	lwz r3, 0x8(r3)
/* 8005CE0C 00059EEC  4B FA B1 11 */	bl xAnimPlaySetState__FP11xAnimSingleP10xAnimStatef
/* 8005CE10 00059EF0  7F E3 FB 78 */	mr r3, r31
/* 8005CE14 00059EF4  48 00 00 19 */	bl "move__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_missle_appearFv"
/* 8005CE18 00059EF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005CE1C 00059EFC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005CE20 00059F00  7C 08 03 A6 */	mtlr r0
/* 8005CE24 00059F04  38 21 00 10 */	addi r1, r1, 0x10
/* 8005CE28 00059F08  4E 80 00 20 */	blr
.endfn "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_missle_appearFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_appear::move()
.fn "move__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_missle_appearFv", local
/* 8005CE2C 00059F0C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8005CE30 00059F10  7C 08 02 A6 */	mflr r0
/* 8005CE34 00059F14  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005CE38 00059F18  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8005CE3C 00059F1C  4B FF FE 35 */	bl "get_missle_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005CE40 00059F20  7C 7F 1B 78 */	mr r31, r3
/* 8005CE44 00059F24  4B FF FA 91 */	bl "get_player_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005CE48 00059F28  7C 64 1B 78 */	mr r4, r3
/* 8005CE4C 00059F2C  7F E3 FB 78 */	mr r3, r31
/* 8005CE50 00059F30  4B FA E7 1D */	bl __as__7xMat4x3FRC7xMat4x3
/* 8005CE54 00059F34  7F E3 FB 78 */	mr r3, r31
/* 8005CE58 00059F38  38 81 00 14 */	addi r4, r1, 0x14
/* 8005CE5C 00059F3C  4B FD 4F D9 */	bl xMat3x3GetEuler__FPC7xMat3x3P5xVec3
/* 8005CE60 00059F40  7F E3 FB 78 */	mr r3, r31
/* 8005CE64 00059F44  38 81 00 14 */	addi r4, r1, 0x14
/* 8005CE68 00059F48  4B FD 53 3D */	bl xMat3x3Euler__FP7xMat3x3PC5xVec3
/* 8005CE6C 00059F4C  80 AD 81 80 */	lwz r5, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005CE70 00059F50  7F E4 FB 78 */	mr r4, r31
/* 8005CE74 00059F54  38 61 00 08 */	addi r3, r1, 0x8
/* 8005CE78 00059F58  38 A5 00 30 */	addi r5, r5, 0x30
/* 8005CE7C 00059F5C  48 00 31 C1 */	bl xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 8005CE80 00059F60  38 7F 00 30 */	addi r3, r31, 0x30
/* 8005CE84 00059F64  38 81 00 08 */	addi r4, r1, 0x8
/* 8005CE88 00059F68  4B FB 85 BD */	bl __apl__5xVec3FRC5xVec3
/* 8005CE8C 00059F6C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8005CE90 00059F70  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8005CE94 00059F74  7C 08 03 A6 */	mtlr r0
/* 8005CE98 00059F78  38 21 00 30 */	addi r1, r1, 0x30
/* 8005CE9C 00059F7C  4E 80 00 20 */	blr
.endfn "move__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_missle_appearFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_appear::stop()
.fn "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_missle_appearFv", local
/* 8005CEA0 00059F80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005CEA4 00059F84  7C 08 02 A6 */	mflr r0
/* 8005CEA8 00059F88  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005CEAC 00059F8C  4B FF A6 CD */	bl "hide_missle__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005CEB0 00059F90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005CEB4 00059F94  7C 08 03 A6 */	mtlr r0
/* 8005CEB8 00059F98  38 21 00 10 */	addi r1, r1, 0x10
/* 8005CEBC 00059F9C  4E 80 00 20 */	blr
.endfn "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_missle_appearFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_appear::update(float)
.fn "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_missle_appearFf", local
/* 8005CEC0 00059FA0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8005CEC4 00059FA4  7C 08 02 A6 */	mflr r0
/* 8005CEC8 00059FA8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005CECC 00059FAC  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8005CED0 00059FB0  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8005CED4 00059FB4  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 8005CED8 00059FB8  F3 C1 00 18 */	psq_st f30, 0x18(r1), 0, qr0
/* 8005CEDC 00059FBC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005CEE0 00059FC0  3C A0 80 29 */	lis r5, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005CEE4 00059FC4  80 8D 81 80 */	lwz r4, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005CEE8 00059FC8  38 A5 C2 A4 */	addi r5, r5, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005CEEC 00059FCC  FF C0 08 90 */	fmr f30, f1
/* 8005CEF0 00059FD0  80 A5 00 68 */	lwz r5, 0x68(r5)
/* 8005CEF4 00059FD4  7C 7F 1B 78 */	mr r31, r3
/* 8005CEF8 00059FD8  C0 04 00 28 */	lfs f0, 0x28(r4)
/* 8005CEFC 00059FDC  80 65 00 0C */	lwz r3, 0xc(r5)
/* 8005CF00 00059FE0  80 63 00 08 */	lwz r3, 0x8(r3)
/* 8005CF04 00059FE4  C0 23 00 08 */	lfs f1, 0x8(r3)
/* 8005CF08 00059FE8  EF E1 F0 2A */	fadds f31, f1, f30
/* 8005CF0C 00059FEC  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8005CF10 00059FF0  4C 41 13 82 */	cror eq, gt, eq
/* 8005CF14 00059FF4  40 82 00 14 */	bne .L_8005CF28
/* 8005CF18 00059FF8  A0 05 00 44 */	lhz r0, 0x44(r5)
/* 8005CF1C 00059FFC  60 00 00 01 */	ori r0, r0, 0x1
/* 8005CF20 0005A000  B0 05 00 44 */	sth r0, 0x44(r5)
/* 8005CF24 0005A004  4B FF AD 55 */	bl "start_trail__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
.L_8005CF28:
/* 8005CF28 0005A008  7F E3 FB 78 */	mr r3, r31
/* 8005CF2C 0005A00C  4B FF FF 01 */	bl "move__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_missle_appearFv"
/* 8005CF30 0005A010  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005CF34 0005A014  C0 03 00 2C */	lfs f0, 0x2c(r3)
/* 8005CF38 0005A018  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8005CF3C 0005A01C  4C 41 13 82 */	cror eq, gt, eq
/* 8005CF40 0005A020  40 82 00 0C */	bne .L_8005CF4C
/* 8005CF44 0005A024  38 60 00 05 */	li r3, 0x5
/* 8005CF48 0005A028  48 00 00 14 */	b .L_8005CF5C
.L_8005CF4C:
/* 8005CF4C 0005A02C  FC 20 F0 90 */	fmr f1, f30
/* 8005CF50 0005A030  7F E3 FB 78 */	mr r3, r31
/* 8005CF54 0005A034  48 00 00 2D */	bl "update_effects__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_missle_appearFf"
/* 8005CF58 0005A038  38 60 00 04 */	li r3, 0x4
.L_8005CF5C:
/* 8005CF5C 0005A03C  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 8005CF60 0005A040  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8005CF64 0005A044  E3 C1 00 18 */	psq_l f30, 0x18(r1), 0, qr0
/* 8005CF68 0005A048  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 8005CF6C 0005A04C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8005CF70 0005A050  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005CF74 0005A054  7C 08 03 A6 */	mtlr r0
/* 8005CF78 0005A058  38 21 00 30 */	addi r1, r1, 0x30
/* 8005CF7C 0005A05C  4E 80 00 20 */	blr
.endfn "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_missle_appearFf"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_appear::update_effects(float)
.fn "update_effects__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_missle_appearFf", local
/* 8005CF80 0005A060  4E 80 00 20 */	blr
.endfn "update_effects__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_missle_appearFf"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_fly::start()
.fn "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFv", local
/* 8005CF84 0005A064  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8005CF88 0005A068  7C 08 02 A6 */	mflr r0
/* 8005CF8C 0005A06C  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005CF90 0005A070  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005CF94 0005A074  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8005CF98 0005A078  7C 7F 1B 78 */	mr r31, r3
/* 8005CF9C 0005A07C  38 64 C2 A4 */	addi r3, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005CFA0 0005A080  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8005CFA4 0005A084  60 00 00 08 */	ori r0, r0, 0x8
/* 8005CFA8 0005A088  90 03 00 00 */	stw r0, 0x0(r3)
/* 8005CFAC 0005A08C  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005CFB0 0005A090  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 8005CFB4 0005A094  D0 1F 00 08 */	stfs f0, 0x8(r31)
/* 8005CFB8 0005A098  4B FF A5 A5 */	bl "show_missle__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005CFBC 0005A09C  4B FF AC BD */	bl "start_trail__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005CFC0 0005A0A0  4B FF A6 B1 */	bl "start_damaging__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005CFC4 0005A0A4  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005CFC8 0005A0A8  D0 1F 00 0C */	stfs f0, 0xc(r31)
/* 8005CFCC 0005A0AC  4B FF FC A5 */	bl "get_missle_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005CFD0 0005A0B0  38 9F 00 10 */	addi r4, r31, 0x10
/* 8005CFD4 0005A0B4  4B FD 4E 61 */	bl xMat3x3GetEuler__FPC7xMat3x3P5xVec3
/* 8005CFD8 0005A0B8  C0 22 89 B8 */	lfs f1, "@1551"@sda21(r2)
/* 8005CFDC 0005A0BC  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8005CFE0 0005A0C0  4B FB F8 99 */	bl __as__5xVec3Ff
/* 8005CFE4 0005A0C4  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005CFE8 0005A0C8  3C 60 80 3C */	lis r3, globals@ha
/* 8005CFEC 0005A0CC  38 83 05 58 */	addi r4, r3, globals@l
/* 8005CFF0 0005A0D0  38 7F 00 2C */	addi r3, r31, 0x2c
/* 8005CFF4 0005A0D4  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 8005CFF8 0005A0D8  38 84 07 68 */	addi r4, r4, 0x768
/* 8005CFFC 0005A0DC  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005D000 0005A0E0  D0 1F 00 38 */	stfs f0, 0x38(r31)
/* 8005D004 0005A0E4  4B FA E2 61 */	bl __as__5xVec3FRC5xVec3
/* 8005D008 0005A0E8  3C 60 80 2E */	lis r3, "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005D00C 0005A0EC  38 63 BE 30 */	addi r3, r3, "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005D010 0005A0F0  48 00 34 55 */	bl "reset__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>Fv"
/* 8005D014 0005A0F4  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 8005D018 0005A0F8  38 61 00 18 */	addi r3, r1, 0x18
/* 8005D01C 0005A0FC  38 9F 00 2C */	addi r4, r31, 0x2c
/* 8005D020 0005A100  48 00 00 6D */	bl "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_dataFRC5xVec3f"
/* 8005D024 0005A104  3C A0 80 2E */	lis r5, "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005D028 0005A108  7C 64 1B 78 */	mr r4, r3
/* 8005D02C 0005A10C  38 65 BE 30 */	addi r3, r5, "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005D030 0005A110  48 00 33 29 */	bl "push_front__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>FRCQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data"
/* 8005D034 0005A114  4B FF FC 3D */	bl "get_missle_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005D038 0005A118  7C 64 1B 78 */	mr r4, r3
/* 8005D03C 0005A11C  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 8005D040 0005A120  38 61 00 08 */	addi r3, r1, 0x8
/* 8005D044 0005A124  38 84 00 30 */	addi r4, r4, 0x30
/* 8005D048 0005A128  48 00 00 45 */	bl "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_dataFRC5xVec3f"
/* 8005D04C 0005A12C  3C A0 80 2E */	lis r5, "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005D050 0005A130  7C 64 1B 78 */	mr r4, r3
/* 8005D054 0005A134  38 65 BE 30 */	addi r3, r5, "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005D058 0005A138  48 00 33 01 */	bl "push_front__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>FRCQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data"
/* 8005D05C 0005A13C  4B FF FC 15 */	bl "get_missle_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005D060 0005A140  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005D064 0005A144  38 83 00 30 */	addi r4, r3, 0x30
/* 8005D068 0005A148  38 60 00 02 */	li r3, 0x2
/* 8005D06C 0005A14C  4B FF A3 99 */	bl "play_sound__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FifPC5xVec3"
/* 8005D070 0005A150  38 60 02 03 */	li r3, 0x203
/* 8005D074 0005A154  4B FF AB 7D */	bl "signal_event__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FUi"
/* 8005D078 0005A158  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8005D07C 0005A15C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8005D080 0005A160  7C 08 03 A6 */	mtlr r0
/* 8005D084 0005A164  38 21 00 30 */	addi r1, r1, 0x30
/* 8005D088 0005A168  4E 80 00 20 */	blr
.endfn "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::missle_record_data::missle_record_data(const xVec3&, float)
.fn "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_dataFRC5xVec3f", local
/* 8005D08C 0005A16C  80 04 00 00 */	lwz r0, 0x0(r4)
/* 8005D090 0005A170  80 A4 00 04 */	lwz r5, 0x4(r4)
/* 8005D094 0005A174  90 03 00 00 */	stw r0, 0x0(r3)
/* 8005D098 0005A178  80 04 00 08 */	lwz r0, 0x8(r4)
/* 8005D09C 0005A17C  90 A3 00 04 */	stw r5, 0x4(r3)
/* 8005D0A0 0005A180  90 03 00 08 */	stw r0, 0x8(r3)
/* 8005D0A4 0005A184  D0 23 00 0C */	stfs f1, 0xc(r3)
/* 8005D0A8 0005A188  4E 80 00 20 */	blr
.endfn "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_dataFRC5xVec3f"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_fly::stop()
.fn "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFv", local
/* 8005D0AC 0005A18C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8005D0B0 0005A190  7C 08 02 A6 */	mflr r0
/* 8005D0B4 0005A194  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005D0B8 0005A198  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005D0BC 0005A19C  84 03 C2 A4 */	lwzu r0, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l(r3)
/* 8005D0C0 0005A1A0  54 00 07 76 */	rlwinm r0, r0, 0, 29, 27
/* 8005D0C4 0005A1A4  90 03 00 00 */	stw r0, 0x0(r3)
/* 8005D0C8 0005A1A8  4B FF A4 B1 */	bl "hide_missle__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005D0CC 0005A1AC  4B FF AB FD */	bl "stop_trail__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005D0D0 0005A1B0  38 60 00 02 */	li r3, 0x2
/* 8005D0D4 0005A1B4  38 80 00 00 */	li r4, 0x0
/* 8005D0D8 0005A1B8  4B FF A1 AD */	bl "stop_sound__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FiUi"
/* 8005D0DC 0005A1BC  38 60 02 04 */	li r3, 0x204
/* 8005D0E0 0005A1C0  4B FF AB 11 */	bl "signal_event__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FUi"
/* 8005D0E4 0005A1C4  C0 22 89 BC */	lfs f1, "@1655"@sda21(r2)
/* 8005D0E8 0005A1C8  38 61 00 14 */	addi r3, r1, 0x14
/* 8005D0EC 0005A1CC  4B FB F7 8D */	bl __as__5xVec3Ff
/* 8005D0F0 0005A1D0  C0 22 89 B8 */	lfs f1, "@1551"@sda21(r2)
/* 8005D0F4 0005A1D4  38 61 00 08 */	addi r3, r1, 0x8
/* 8005D0F8 0005A1D8  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 8005D0FC 0005A1DC  48 00 2E DD */	bl create__5xVec3Ff
/* 8005D100 0005A1E0  3C 60 80 3C */	lis r3, globals@ha
/* 8005D104 0005A1E4  38 81 00 14 */	addi r4, r1, 0x14
/* 8005D108 0005A1E8  38 63 05 58 */	addi r3, r3, globals@l
/* 8005D10C 0005A1EC  38 A1 00 08 */	addi r5, r1, 0x8
/* 8005D110 0005A1F0  80 63 1F C0 */	lwz r3, 0x1fc0(r3)
/* 8005D114 0005A1F4  4B FF A8 B5 */	bl "notify_triggers__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FR6xSceneRC7xSphereRC5xVec3"
/* 8005D118 0005A1F8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8005D11C 0005A1FC  7C 08 03 A6 */	mtlr r0
/* 8005D120 0005A200  38 21 00 30 */	addi r1, r1, 0x30
/* 8005D124 0005A204  4E 80 00 20 */	blr
.endfn "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_fly::abort()
.fn "abort__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFv", local
/* 8005D128 0005A208  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8005D12C 0005A20C  7C 08 02 A6 */	mflr r0
/* 8005D130 0005A210  38 60 00 02 */	li r3, 0x2
/* 8005D134 0005A214  38 80 00 00 */	li r4, 0x0
/* 8005D138 0005A218  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005D13C 0005A21C  4B FF A1 49 */	bl "stop_sound__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FiUi"
/* 8005D140 0005A220  38 60 02 04 */	li r3, 0x204
/* 8005D144 0005A224  4B FF AA AD */	bl "signal_event__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FUi"
/* 8005D148 0005A228  C0 22 89 BC */	lfs f1, "@1655"@sda21(r2)
/* 8005D14C 0005A22C  38 61 00 14 */	addi r3, r1, 0x14
/* 8005D150 0005A230  4B FB F7 29 */	bl __as__5xVec3Ff
/* 8005D154 0005A234  C0 22 89 B8 */	lfs f1, "@1551"@sda21(r2)
/* 8005D158 0005A238  38 61 00 08 */	addi r3, r1, 0x8
/* 8005D15C 0005A23C  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 8005D160 0005A240  48 00 2E 79 */	bl create__5xVec3Ff
/* 8005D164 0005A244  3C 60 80 3C */	lis r3, globals@ha
/* 8005D168 0005A248  38 81 00 14 */	addi r4, r1, 0x14
/* 8005D16C 0005A24C  38 63 05 58 */	addi r3, r3, globals@l
/* 8005D170 0005A250  38 A1 00 08 */	addi r5, r1, 0x8
/* 8005D174 0005A254  80 63 1F C0 */	lwz r3, 0x1fc0(r3)
/* 8005D178 0005A258  4B FF A8 51 */	bl "notify_triggers__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FR6xSceneRC7xSphereRC5xVec3"
/* 8005D17C 0005A25C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8005D180 0005A260  7C 08 03 A6 */	mtlr r0
/* 8005D184 0005A264  38 21 00 30 */	addi r1, r1, 0x30
/* 8005D188 0005A268  4E 80 00 20 */	blr
.endfn "abort__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_fly::update(float)
.fn "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFf", local
/* 8005D18C 0005A26C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8005D190 0005A270  7C 08 02 A6 */	mflr r0
/* 8005D194 0005A274  90 01 00 54 */	stw r0, 0x54(r1)
/* 8005D198 0005A278  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8005D19C 0005A27C  F3 E1 00 48 */	psq_st f31, 0x48(r1), 0, qr0
/* 8005D1A0 0005A280  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8005D1A4 0005A284  7C 7F 1B 78 */	mr r31, r3
/* 8005D1A8 0005A288  FF E0 08 90 */	fmr f31, f1
/* 8005D1AC 0005A28C  C0 03 00 08 */	lfs f0, 0x8(r3)
/* 8005D1B0 0005A290  EC 00 F8 28 */	fsubs f0, f0, f31
/* 8005D1B4 0005A294  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 8005D1B8 0005A298  C0 43 00 08 */	lfs f2, 0x8(r3)
/* 8005D1BC 0005A29C  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005D1C0 0005A2A0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8005D1C4 0005A2A4  4C 40 13 82 */	cror eq, lt, eq
/* 8005D1C8 0005A2A8  41 82 00 1C */	beq .L_8005D1E4
/* 8005D1CC 0005A2AC  3C 80 80 3C */	lis r4, globals@ha
/* 8005D1D0 0005A2B0  38 84 05 58 */	addi r4, r4, globals@l
/* 8005D1D4 0005A2B4  80 84 03 1C */	lwz r4, 0x31c(r4)
/* 8005D1D8 0005A2B8  80 04 00 30 */	lwz r0, 0x30(r4)
/* 8005D1DC 0005A2BC  54 00 05 EF */	rlwinm. r0, r0, 0, 23, 23
/* 8005D1E0 0005A2C0  41 82 00 44 */	beq .L_8005D224
.L_8005D1E4:
/* 8005D1E4 0005A2C4  4B FF FA 8D */	bl "get_missle_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005D1E8 0005A2C8  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005D1EC 0005A2CC  7C 65 1B 78 */	mr r5, r3
/* 8005D1F0 0005A2D0  38 64 C2 A4 */	addi r3, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005D1F4 0005A2D4  38 63 00 50 */	addi r3, r3, 0x50
/* 8005D1F8 0005A2D8  38 85 00 30 */	addi r4, r5, 0x30
/* 8005D1FC 0005A2DC  4B FA E0 69 */	bl __as__5xVec3FRC5xVec3
/* 8005D200 0005A2E0  4B FF FA 71 */	bl "get_missle_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005D204 0005A2E4  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005D208 0005A2E8  7C 65 1B 78 */	mr r5, r3
/* 8005D20C 0005A2EC  38 64 C2 A4 */	addi r3, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005D210 0005A2F0  38 63 00 5C */	addi r3, r3, 0x5c
/* 8005D214 0005A2F4  38 85 00 20 */	addi r4, r5, 0x20
/* 8005D218 0005A2F8  4B FA E0 4D */	bl __as__5xVec3FRC5xVec3
/* 8005D21C 0005A2FC  38 60 00 06 */	li r3, 0x6
/* 8005D220 0005A300  48 00 01 14 */	b .L_8005D334
.L_8005D224:
/* 8005D224 0005A304  48 00 07 75 */	bl "update_turn__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFf"
/* 8005D228 0005A308  FC 20 F8 90 */	fmr f1, f31
/* 8005D22C 0005A30C  7F E3 FB 78 */	mr r3, r31
/* 8005D230 0005A310  48 00 06 F9 */	bl "update_move__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFf"
/* 8005D234 0005A314  3C 60 80 2E */	lis r3, "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005D238 0005A318  38 63 BE 30 */	addi r3, r3, "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005D23C 0005A31C  48 00 32 6D */	bl "full__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFv"
/* 8005D240 0005A320  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8005D244 0005A324  41 82 00 10 */	beq .L_8005D254
/* 8005D248 0005A328  3C 60 80 2E */	lis r3, "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005D24C 0005A32C  38 63 BE 30 */	addi r3, r3, "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005D250 0005A330  48 00 32 45 */	bl "pop_back__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>Fv"
.L_8005D254:
/* 8005D254 0005A334  7F E3 FB 78 */	mr r3, r31
/* 8005D258 0005A338  48 00 03 15 */	bl "collide__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFv"
/* 8005D25C 0005A33C  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8005D260 0005A340  40 82 00 14 */	bne .L_8005D274
/* 8005D264 0005A344  7F E3 FB 78 */	mr r3, r31
/* 8005D268 0005A348  48 00 01 E1 */	bl "collide_hazards__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFv"
/* 8005D26C 0005A34C  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8005D270 0005A350  41 82 00 34 */	beq .L_8005D2A4
.L_8005D274:
/* 8005D274 0005A354  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005D278 0005A358  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 8005D27C 0005A35C  38 83 C2 A4 */	addi r4, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005D280 0005A360  38 61 00 18 */	addi r3, r1, 0x18
/* 8005D284 0005A364  38 84 00 50 */	addi r4, r4, 0x50
/* 8005D288 0005A368  4B FF FE 05 */	bl "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_dataFRC5xVec3f"
/* 8005D28C 0005A36C  3C A0 80 2E */	lis r5, "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005D290 0005A370  7C 64 1B 78 */	mr r4, r3
/* 8005D294 0005A374  38 65 BE 30 */	addi r3, r5, "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005D298 0005A378  48 00 30 C1 */	bl "push_front__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>FRCQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data"
/* 8005D29C 0005A37C  38 60 00 06 */	li r3, 0x6
/* 8005D2A0 0005A380  48 00 00 94 */	b .L_8005D334
.L_8005D2A4:
/* 8005D2A4 0005A384  4B FF F9 CD */	bl "get_missle_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005D2A8 0005A388  7C 64 1B 78 */	mr r4, r3
/* 8005D2AC 0005A38C  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 8005D2B0 0005A390  38 61 00 08 */	addi r3, r1, 0x8
/* 8005D2B4 0005A394  38 84 00 30 */	addi r4, r4, 0x30
/* 8005D2B8 0005A398  4B FF FD D5 */	bl "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_dataFRC5xVec3f"
/* 8005D2BC 0005A39C  3C A0 80 2E */	lis r5, "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005D2C0 0005A3A0  7C 64 1B 78 */	mr r4, r3
/* 8005D2C4 0005A3A4  38 65 BE 30 */	addi r3, r5, "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005D2C8 0005A3A8  48 00 30 91 */	bl "push_front__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>FRCQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data"
/* 8005D2CC 0005A3AC  4B FF F9 A5 */	bl "get_missle_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005D2D0 0005A3B0  7C 64 1B 78 */	mr r4, r3
/* 8005D2D4 0005A3B4  38 7F 00 2C */	addi r3, r31, 0x2c
/* 8005D2D8 0005A3B8  38 84 00 30 */	addi r4, r4, 0x30
/* 8005D2DC 0005A3BC  4B FA DF 89 */	bl __as__5xVec3FRC5xVec3
/* 8005D2E0 0005A3C0  FC 20 F8 90 */	fmr f1, f31
/* 8005D2E4 0005A3C4  7F E3 FB 78 */	mr r3, r31
/* 8005D2E8 0005A3C8  48 00 00 ED */	bl "update_engine_sound__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFf"
/* 8005D2EC 0005A3CC  FC 20 F8 90 */	fmr f1, f31
/* 8005D2F0 0005A3D0  7F E3 FB 78 */	mr r3, r31
/* 8005D2F4 0005A3D4  48 00 00 5D */	bl "update_flash__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFf"
/* 8005D2F8 0005A3D8  4B FF F9 79 */	bl "get_missle_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005D2FC 0005A3DC  7C 7F 1B 78 */	mr r31, r3
/* 8005D300 0005A3E0  38 61 00 28 */	addi r3, r1, 0x28
/* 8005D304 0005A3E4  38 9F 00 30 */	addi r4, r31, 0x30
/* 8005D308 0005A3E8  4B FA DF 5D */	bl __as__5xVec3FRC5xVec3
/* 8005D30C 0005A3EC  80 AD 81 80 */	lwz r5, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005D310 0005A3F0  3C 60 80 3C */	lis r3, globals@ha
/* 8005D314 0005A3F4  38 63 05 58 */	addi r3, r3, globals@l
/* 8005D318 0005A3F8  38 81 00 28 */	addi r4, r1, 0x28
/* 8005D31C 0005A3FC  C0 05 00 18 */	lfs f0, 0x18(r5)
/* 8005D320 0005A400  38 BF 00 20 */	addi r5, r31, 0x20
/* 8005D324 0005A404  80 63 1F C0 */	lwz r3, 0x1fc0(r3)
/* 8005D328 0005A408  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8005D32C 0005A40C  4B FF A6 9D */	bl "notify_triggers__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FR6xSceneRC7xSphereRC5xVec3"
/* 8005D330 0005A410  38 60 00 05 */	li r3, 0x5
.L_8005D334:
/* 8005D334 0005A414  E3 E1 00 48 */	psq_l f31, 0x48(r1), 0, qr0
/* 8005D338 0005A418  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8005D33C 0005A41C  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8005D340 0005A420  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8005D344 0005A424  7C 08 03 A6 */	mtlr r0
/* 8005D348 0005A428  38 21 00 50 */	addi r1, r1, 0x50
/* 8005D34C 0005A42C  4E 80 00 20 */	blr
.endfn "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFf"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_fly::update_flash(float)
.fn "update_flash__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFf", local
/* 8005D350 0005A430  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005D354 0005A434  7C 08 02 A6 */	mflr r0
/* 8005D358 0005A438  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005D35C 0005A43C  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8005D360 0005A440  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8005D364 0005A444  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005D368 0005A448  7C 7F 1B 78 */	mr r31, r3
/* 8005D36C 0005A44C  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 8005D370 0005A450  EC 00 08 2A */	fadds f0, f0, f1
/* 8005D374 0005A454  D0 03 00 38 */	stfs f0, 0x38(r3)
/* 8005D378 0005A458  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005D37C 0005A45C  C0 3F 00 08 */	lfs f1, 0x8(r31)
/* 8005D380 0005A460  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 8005D384 0005A464  C0 43 00 4C */	lfs f2, 0x4c(r3)
/* 8005D388 0005A468  EC 21 00 24 */	fdivs f1, f1, f0
/* 8005D38C 0005A46C  C0 1F 00 38 */	lfs f0, 0x38(r31)
/* 8005D390 0005A470  EF E2 00 72 */	fmuls f31, f2, f1
/* 8005D394 0005A474  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 8005D398 0005A478  40 81 00 20 */	ble .L_8005D3B8
/* 8005D39C 0005A47C  4B FF C6 2D */	bl "flash_hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005D3A0 0005A480  C0 1F 00 38 */	lfs f0, 0x38(r31)
/* 8005D3A4 0005A484  EC 20 F8 24 */	fdivs f1, f0, f31
/* 8005D3A8 0005A488  4B FA 97 D1 */	bl floorf__3stdFf
/* 8005D3AC 0005A48C  C0 1F 00 38 */	lfs f0, 0x38(r31)
/* 8005D3B0 0005A490  EC 01 07 FC */	fnmsubs f0, f1, f31, f0
/* 8005D3B4 0005A494  D0 1F 00 38 */	stfs f0, 0x38(r31)
.L_8005D3B8:
/* 8005D3B8 0005A498  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8005D3BC 0005A49C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005D3C0 0005A4A0  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8005D3C4 0005A4A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005D3C8 0005A4A8  7C 08 03 A6 */	mtlr r0
/* 8005D3CC 0005A4AC  38 21 00 20 */	addi r1, r1, 0x20
/* 8005D3D0 0005A4B0  4E 80 00 20 */	blr
.endfn "update_flash__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFf"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_fly::update_engine_sound(float)
.fn "update_engine_sound__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFf", local
/* 8005D3D4 0005A4B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005D3D8 0005A4B8  7C 08 02 A6 */	mflr r0
/* 8005D3DC 0005A4BC  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005D3E0 0005A4C0  7C 66 1B 78 */	mr r6, r3
/* 8005D3E4 0005A4C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005D3E8 0005A4C8  38 84 C2 A4 */	addi r4, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005D3EC 0005A4CC  38 60 00 02 */	li r3, 0x2
/* 8005D3F0 0005A4D0  C0 24 00 40 */	lfs f1, 0x40(r4)
/* 8005D3F4 0005A4D4  C0 04 00 44 */	lfs f0, 0x44(r4)
/* 8005D3F8 0005A4D8  38 80 00 00 */	li r4, 0x0
/* 8005D3FC 0005A4DC  FC 60 0A 10 */	fabs f3, f1
/* 8005D400 0005A4E0  80 AD 81 80 */	lwz r5, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005D404 0005A4E4  FC 00 02 10 */	fabs f0, f0
/* 8005D408 0005A4E8  C0 26 00 28 */	lfs f1, 0x28(r6)
/* 8005D40C 0005A4EC  C0 85 00 44 */	lfs f4, 0x44(r5)
/* 8005D410 0005A4F0  FC 60 18 18 */	frsp f3, f3
/* 8005D414 0005A4F4  FC 00 00 18 */	frsp f0, f0
/* 8005D418 0005A4F8  C0 45 00 48 */	lfs f2, 0x48(r5)
/* 8005D41C 0005A4FC  EC 03 00 2A */	fadds f0, f3, f0
/* 8005D420 0005A500  EC 04 00 32 */	fmuls f0, f4, f0
/* 8005D424 0005A504  EC 00 08 28 */	fsubs f0, f0, f1
/* 8005D428 0005A508  EC 02 08 3A */	fmadds f0, f2, f0, f1
/* 8005D42C 0005A50C  D0 06 00 28 */	stfs f0, 0x28(r6)
/* 8005D430 0005A510  C0 26 00 28 */	lfs f1, 0x28(r6)
/* 8005D434 0005A514  4B FF A0 55 */	bl "set_pitch__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FifUi"
/* 8005D438 0005A518  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005D43C 0005A51C  7C 08 03 A6 */	mtlr r0
/* 8005D440 0005A520  38 21 00 10 */	addi r1, r1, 0x10
/* 8005D444 0005A524  4E 80 00 20 */	blr
.endfn "update_engine_sound__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFf"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_fly::collide_hazards()
.fn "collide_hazards__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFv", local
/* 8005D448 0005A528  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005D44C 0005A52C  7C 08 02 A6 */	mflr r0
/* 8005D450 0005A530  3C 60 80 06 */	lis r3, "hazard_check__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFR9NPCHazardPv"@ha
/* 8005D454 0005A534  3C A0 00 01 */	lis r5, 0x1
/* 8005D458 0005A538  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005D45C 0005A53C  38 00 00 00 */	li r0, 0x0
/* 8005D460 0005A540  38 63 D4 C8 */	addi r3, r3, "hazard_check__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFR9NPCHazardPv"@l
/* 8005D464 0005A544  38 81 00 08 */	addi r4, r1, 0x8
/* 8005D468 0005A548  90 01 00 08 */	stw r0, 0x8(r1)
/* 8005D46C 0005A54C  38 A5 A0 00 */	addi r5, r5, -0x6000
/* 8005D470 0005A550  48 12 AD A9 */	bl HAZ_Iterate__FPFR9NPCHazardPv_bPvi
/* 8005D474 0005A554  80 61 00 08 */	lwz r3, 0x8(r1)
/* 8005D478 0005A558  28 03 00 00 */	cmplwi r3, 0x0
/* 8005D47C 0005A55C  40 82 00 0C */	bne .L_8005D488
/* 8005D480 0005A560  38 60 00 00 */	li r3, 0x0
/* 8005D484 0005A564  48 00 00 34 */	b .L_8005D4B8
.L_8005D488:
/* 8005D488 0005A568  80 03 00 04 */	lwz r0, 0x4(r3)
/* 8005D48C 0005A56C  54 00 02 95 */	rlwinm. r0, r0, 0, 10, 10
/* 8005D490 0005A570  41 82 00 08 */	beq .L_8005D498
/* 8005D494 0005A574  48 00 31 6D */	bl MarkForRecycle__9NPCHazardFv
.L_8005D498:
/* 8005D498 0005A578  4B FF F7 D9 */	bl "get_missle_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005D49C 0005A57C  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005D4A0 0005A580  7C 65 1B 78 */	mr r5, r3
/* 8005D4A4 0005A584  38 64 C2 A4 */	addi r3, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005D4A8 0005A588  38 63 00 50 */	addi r3, r3, 0x50
/* 8005D4AC 0005A58C  38 85 00 30 */	addi r4, r5, 0x30
/* 8005D4B0 0005A590  4B FA DD B5 */	bl __as__5xVec3FRC5xVec3
/* 8005D4B4 0005A594  38 60 00 01 */	li r3, 0x1
.L_8005D4B8:
/* 8005D4B8 0005A598  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005D4BC 0005A59C  7C 08 03 A6 */	mtlr r0
/* 8005D4C0 0005A5A0  38 21 00 10 */	addi r1, r1, 0x10
/* 8005D4C4 0005A5A4  4E 80 00 20 */	blr
.endfn "collide_hazards__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_fly::hazard_check(NPCHazard&, void*)
.fn "hazard_check__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFR9NPCHazardPv", local
/* 8005D4C8 0005A5A8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8005D4CC 0005A5AC  7C 08 02 A6 */	mflr r0
/* 8005D4D0 0005A5B0  90 01 00 44 */	stw r0, 0x44(r1)
/* 8005D4D4 0005A5B4  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8005D4D8 0005A5B8  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 8005D4DC 0005A5BC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8005D4E0 0005A5C0  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8005D4E4 0005A5C4  7C 7E 1B 78 */	mr r30, r3
/* 8005D4E8 0005A5C8  7C 9F 23 78 */	mr r31, r4
/* 8005D4EC 0005A5CC  4B FF F7 85 */	bl "get_missle_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005D4F0 0005A5D0  38 A3 00 30 */	addi r5, r3, 0x30
/* 8005D4F4 0005A5D4  38 61 00 08 */	addi r3, r1, 0x8
/* 8005D4F8 0005A5D8  38 9E 00 08 */	addi r4, r30, 0x8
/* 8005D4FC 0005A5DC  4B FA DC D1 */	bl __mi__5xVec3CFRC5xVec3
/* 8005D500 0005A5E0  80 8D 81 80 */	lwz r4, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005D504 0005A5E4  38 61 00 14 */	addi r3, r1, 0x14
/* 8005D508 0005A5E8  80 A1 00 08 */	lwz r5, 0x8(r1)
/* 8005D50C 0005A5EC  C0 24 00 18 */	lfs f1, 0x18(r4)
/* 8005D510 0005A5F0  C0 1E 00 68 */	lfs f0, 0x68(r30)
/* 8005D514 0005A5F4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8005D518 0005A5F8  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8005D51C 0005A5FC  EF E1 00 2A */	fadds f31, f1, f0
/* 8005D520 0005A600  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8005D524 0005A604  90 81 00 18 */	stw r4, 0x18(r1)
/* 8005D528 0005A608  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8005D52C 0005A60C  4B FA DB D1 */	bl length2__5xVec3CFv
/* 8005D530 0005A610  EC 1F 07 F2 */	fmuls f0, f31, f31
/* 8005D534 0005A614  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005D538 0005A618  40 80 00 10 */	bge .L_8005D548
/* 8005D53C 0005A61C  93 DF 00 00 */	stw r30, 0x0(r31)
/* 8005D540 0005A620  38 60 00 00 */	li r3, 0x0
/* 8005D544 0005A624  48 00 00 08 */	b .L_8005D54C
.L_8005D548:
/* 8005D548 0005A628  38 60 00 01 */	li r3, 0x1
.L_8005D54C:
/* 8005D54C 0005A62C  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8005D550 0005A630  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8005D554 0005A634  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8005D558 0005A638  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8005D55C 0005A63C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8005D560 0005A640  7C 08 03 A6 */	mtlr r0
/* 8005D564 0005A644  38 21 00 40 */	addi r1, r1, 0x40
/* 8005D568 0005A648  4E 80 00 20 */	blr
.endfn "hazard_check__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFR9NPCHazardPv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_fly::collide()
.fn "collide__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFv", local
/* 8005D56C 0005A64C  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8005D570 0005A650  7C 08 02 A6 */	mflr r0
/* 8005D574 0005A654  90 01 00 74 */	stw r0, 0x74(r1)
/* 8005D578 0005A658  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8005D57C 0005A65C  F3 E1 00 68 */	psq_st f31, 0x68(r1), 0, qr0
/* 8005D580 0005A660  BF 61 00 4C */	stmw r27, 0x4c(r1)
/* 8005D584 0005A664  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005D588 0005A668  7C 7C 1B 78 */	mr r28, r3
/* 8005D58C 0005A66C  38 64 C2 A4 */	addi r3, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005D590 0005A670  3B A0 00 00 */	li r29, 0x0
/* 8005D594 0005A674  3B E3 00 5C */	addi r31, r3, 0x5c
/* 8005D598 0005A678  3B C3 00 50 */	addi r30, r3, 0x50
.L_8005D59C:
/* 8005D59C 0005A67C  7F 83 E3 78 */	mr r3, r28
/* 8005D5A0 0005A680  7F C4 F3 78 */	mr r4, r30
/* 8005D5A4 0005A684  7F E5 FB 78 */	mr r5, r31
/* 8005D5A8 0005A688  38 C1 00 3C */	addi r6, r1, 0x3c
/* 8005D5AC 0005A68C  38 E1 00 08 */	addi r7, r1, 0x8
/* 8005D5B0 0005A690  48 00 02 25 */	bl "hit_test__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyCFR5xVec3R5xVec3R5xVec3RP4xEnt"
/* 8005D5B4 0005A694  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8005D5B8 0005A698  40 82 00 0C */	bne .L_8005D5C4
/* 8005D5BC 0005A69C  38 60 00 00 */	li r3, 0x0
/* 8005D5C0 0005A6A0  48 00 01 F8 */	b .L_8005D7B8
.L_8005D5C4:
/* 8005D5C4 0005A6A4  80 61 00 08 */	lwz r3, 0x8(r1)
/* 8005D5C8 0005A6A8  4B FF A3 21 */	bl "can_damage__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FP4xEnt"
/* 8005D5CC 0005A6AC  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8005D5D0 0005A6B0  41 82 00 30 */	beq .L_8005D600
/* 8005D5D4 0005A6B4  4B FF F6 9D */	bl "get_missle_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005D5D8 0005A6B8  7C 65 1B 78 */	mr r5, r3
/* 8005D5DC 0005A6BC  80 61 00 08 */	lwz r3, 0x8(r1)
/* 8005D5E0 0005A6C0  C0 22 89 B8 */	lfs f1, "@1551"@sda21(r2)
/* 8005D5E4 0005A6C4  7F C4 F3 78 */	mr r4, r30
/* 8005D5E8 0005A6C8  7F E6 FB 78 */	mr r6, r31
/* 8005D5EC 0005A6CC  38 A5 00 20 */	addi r5, r5, 0x20
/* 8005D5F0 0005A6D0  38 E0 00 00 */	li r7, 0x0
/* 8005D5F4 0005A6D4  4B FF A0 91 */	bl "damage_entity__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FR4xEntRC5xVec3RC5xVec3RC5xVec3fb"
/* 8005D5F8 0005A6D8  38 60 00 01 */	li r3, 0x1
/* 8005D5FC 0005A6DC  48 00 01 BC */	b .L_8005D7B8
.L_8005D600:
/* 8005D600 0005A6E0  4B FF F6 71 */	bl "get_missle_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005D604 0005A6E4  7C 7B 1B 78 */	mr r27, r3
/* 8005D608 0005A6E8  7F E4 FB 78 */	mr r4, r31
/* 8005D60C 0005A6EC  38 7B 00 20 */	addi r3, r27, 0x20
/* 8005D610 0005A6F0  4B FB 7E FD */	bl dot__5xVec3CFRC5xVec3
/* 8005D614 0005A6F4  4B FB 07 65 */	bl xasin__Ff
/* 8005D618 0005A6F8  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005D61C 0005A6FC  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 8005D620 0005A700  FC 00 00 50 */	fneg f0, f0
/* 8005D624 0005A704  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005D628 0005A708  40 80 00 0C */	bge .L_8005D634
/* 8005D62C 0005A70C  38 60 00 01 */	li r3, 0x1
/* 8005D630 0005A710  48 00 01 88 */	b .L_8005D7B8
.L_8005D634:
/* 8005D634 0005A714  38 7B 00 30 */	addi r3, r27, 0x30
/* 8005D638 0005A718  38 81 00 3C */	addi r4, r1, 0x3c
/* 8005D63C 0005A71C  4B FB 7E 09 */	bl __apl__5xVec3FRC5xVec3
/* 8005D640 0005A720  38 61 00 18 */	addi r3, r1, 0x18
/* 8005D644 0005A724  38 9B 00 30 */	addi r4, r27, 0x30
/* 8005D648 0005A728  38 BC 00 2C */	addi r5, r28, 0x2c
/* 8005D64C 0005A72C  4B FA DB 81 */	bl __mi__5xVec3CFRC5xVec3
/* 8005D650 0005A730  80 A1 00 18 */	lwz r5, 0x18(r1)
/* 8005D654 0005A734  38 61 00 30 */	addi r3, r1, 0x30
/* 8005D658 0005A738  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 8005D65C 0005A73C  80 01 00 20 */	lwz r0, 0x20(r1)
/* 8005D660 0005A740  90 A1 00 30 */	stw r5, 0x30(r1)
/* 8005D664 0005A744  90 81 00 34 */	stw r4, 0x34(r1)
/* 8005D668 0005A748  90 01 00 38 */	stw r0, 0x38(r1)
/* 8005D66C 0005A74C  4B FA DA 91 */	bl length2__5xVec3CFv
/* 8005D670 0005A750  C0 02 8A B0 */	lfs f0, "@3319"@sda21(r2)
/* 8005D674 0005A754  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005D678 0005A758  40 80 00 0C */	bge .L_8005D684
/* 8005D67C 0005A75C  38 60 00 00 */	li r3, 0x0
/* 8005D680 0005A760  48 00 01 38 */	b .L_8005D7B8
.L_8005D684:
/* 8005D684 0005A764  4B FA D1 79 */	bl xsqrt__Ff
/* 8005D688 0005A768  C0 02 89 C0 */	lfs f0, "@1720"@sda21(r2)
/* 8005D68C 0005A76C  38 61 00 0C */	addi r3, r1, 0xc
/* 8005D690 0005A770  38 81 00 30 */	addi r4, r1, 0x30
/* 8005D694 0005A774  EC 20 08 24 */	fdivs f1, f0, f1
/* 8005D698 0005A778  4B FA DA 89 */	bl __ml__5xVec3CFf
/* 8005D69C 0005A77C  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8005D6A0 0005A780  80 61 00 0C */	lwz r3, 0xc(r1)
/* 8005D6A4 0005A784  90 01 00 28 */	stw r0, 0x28(r1)
/* 8005D6A8 0005A788  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005D6AC 0005A78C  90 61 00 24 */	stw r3, 0x24(r1)
/* 8005D6B0 0005A790  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 8005D6B4 0005A794  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8005D6B8 0005A798  4B FB 06 C1 */	bl xasin__Ff
/* 8005D6BC 0005A79C  FF E0 08 50 */	fneg f31, f1
/* 8005D6C0 0005A7A0  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005D6C4 0005A7A4  C0 22 8A 94 */	lfs f1, "@3312"@sda21(r2)
/* 8005D6C8 0005A7A8  C0 03 00 60 */	lfs f0, 0x60(r3)
/* 8005D6CC 0005A7AC  FC 40 FA 10 */	fabs f2, f31
/* 8005D6D0 0005A7B0  EC 01 00 32 */	fmuls f0, f1, f0
/* 8005D6D4 0005A7B4  FC 20 10 18 */	frsp f1, f2
/* 8005D6D8 0005A7B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005D6DC 0005A7BC  40 81 00 0C */	ble .L_8005D6E8
/* 8005D6E0 0005A7C0  38 60 00 01 */	li r3, 0x1
/* 8005D6E4 0005A7C4  48 00 00 D4 */	b .L_8005D7B8
.L_8005D6E8:
/* 8005D6E8 0005A7C8  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 8005D6EC 0005A7CC  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 8005D6F0 0005A7D0  4B FA 89 81 */	bl xatan2__Fff
/* 8005D6F4 0005A7D4  C0 1C 00 10 */	lfs f0, 0x10(r28)
/* 8005D6F8 0005A7D8  C0 42 8A E4 */	lfs f2, "@3563"@sda21(r2)
/* 8005D6FC 0005A7DC  EC 01 00 28 */	fsubs f0, f1, f0
/* 8005D700 0005A7E0  EC 22 00 2A */	fadds f1, f2, f0
/* 8005D704 0005A7E4  4B FB 10 F1 */	bl xrmod__Ff
/* 8005D708 0005A7E8  C0 02 8A E4 */	lfs f0, "@3563"@sda21(r2)
/* 8005D70C 0005A7EC  7F 63 DB 78 */	mr r3, r27
/* 8005D710 0005A7F0  80 AD 81 80 */	lwz r5, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005D714 0005A7F4  38 9C 00 10 */	addi r4, r28, 0x10
/* 8005D718 0005A7F8  EC 41 00 28 */	fsubs f2, f1, f0
/* 8005D71C 0005A7FC  C0 1C 00 10 */	lfs f0, 0x10(r28)
/* 8005D720 0005A800  C0 25 00 20 */	lfs f1, 0x20(r5)
/* 8005D724 0005A804  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8005D728 0005A808  D0 1C 00 10 */	stfs f0, 0x10(r28)
/* 8005D72C 0005A80C  C0 3C 00 14 */	lfs f1, 0x14(r28)
/* 8005D730 0005A810  80 AD 81 80 */	lwz r5, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005D734 0005A814  EC 1F 08 28 */	fsubs f0, f31, f1
/* 8005D738 0005A818  C0 45 00 20 */	lfs f2, 0x20(r5)
/* 8005D73C 0005A81C  EC 02 08 3A */	fmadds f0, f2, f0, f1
/* 8005D740 0005A820  D0 1C 00 14 */	stfs f0, 0x14(r28)
/* 8005D744 0005A824  4B FD 4A 61 */	bl xMat3x3Euler__FP7xMat3x3PC5xVec3
/* 8005D748 0005A828  38 61 00 3C */	addi r3, r1, 0x3c
/* 8005D74C 0005A82C  4B FA D9 B1 */	bl length2__5xVec3CFv
/* 8005D750 0005A830  C0 02 8A F0 */	lfs f0, "@3657"@sda21(r2)
/* 8005D754 0005A834  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005D758 0005A838  40 80 00 0C */	bge .L_8005D764
/* 8005D75C 0005A83C  38 60 00 00 */	li r3, 0x0
/* 8005D760 0005A840  48 00 00 58 */	b .L_8005D7B8
.L_8005D764:
/* 8005D764 0005A844  80 8D 81 80 */	lwz r4, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005D768 0005A848  3B BD 00 01 */	addi r29, r29, 0x1
/* 8005D76C 0005A84C  80 04 00 24 */	lwz r0, 0x24(r4)
/* 8005D770 0005A850  7C 1D 00 00 */	cmpw r29, r0
/* 8005D774 0005A854  41 80 FE 28 */	blt .L_8005D59C
/* 8005D778 0005A858  C0 22 8A 30 */	lfs f1, "@3186"@sda21(r2)
/* 8005D77C 0005A85C  38 61 00 3C */	addi r3, r1, 0x3c
/* 8005D780 0005A860  C0 04 00 18 */	lfs f0, 0x18(r4)
/* 8005D784 0005A864  EF E1 00 32 */	fmuls f31, f1, f0
/* 8005D788 0005A868  4B FA D9 75 */	bl length2__5xVec3CFv
/* 8005D78C 0005A86C  EC 1F 07 F2 */	fmuls f0, f31, f31
/* 8005D790 0005A870  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005D794 0005A874  40 80 00 0C */	bge .L_8005D7A0
/* 8005D798 0005A878  38 60 00 00 */	li r3, 0x0
/* 8005D79C 0005A87C  48 00 00 1C */	b .L_8005D7B8
.L_8005D7A0:
/* 8005D7A0 0005A880  7F 83 E3 78 */	mr r3, r28
/* 8005D7A4 0005A884  7F C4 F3 78 */	mr r4, r30
/* 8005D7A8 0005A888  7F E5 FB 78 */	mr r5, r31
/* 8005D7AC 0005A88C  38 C1 00 3C */	addi r6, r1, 0x3c
/* 8005D7B0 0005A890  38 E1 00 08 */	addi r7, r1, 0x8
/* 8005D7B4 0005A894  48 00 00 21 */	bl "hit_test__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyCFR5xVec3R5xVec3R5xVec3RP4xEnt"
.L_8005D7B8:
/* 8005D7B8 0005A898  E3 E1 00 68 */	psq_l f31, 0x68(r1), 0, qr0
/* 8005D7BC 0005A89C  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8005D7C0 0005A8A0  BB 61 00 4C */	lmw r27, 0x4c(r1)
/* 8005D7C4 0005A8A4  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8005D7C8 0005A8A8  7C 08 03 A6 */	mtlr r0
/* 8005D7CC 0005A8AC  38 21 00 70 */	addi r1, r1, 0x70
/* 8005D7D0 0005A8B0  4E 80 00 20 */	blr
.endfn "collide__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_fly::hit_test(xVec3&, xVec3&, xVec3&, xEnt*&) const
.fn "hit_test__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyCFR5xVec3R5xVec3R5xVec3RP4xEnt", local
/* 8005D7D4 0005A8B4  94 21 FE 60 */	stwu r1, -0x1a0(r1)
/* 8005D7D8 0005A8B8  7C 08 02 A6 */	mflr r0
/* 8005D7DC 0005A8BC  3D 00 80 3C */	lis r8, globals@ha
/* 8005D7E0 0005A8C0  90 01 01 A4 */	stw r0, 0x1a4(r1)
/* 8005D7E4 0005A8C4  BF 21 01 84 */	stmw r25, 0x184(r1)
/* 8005D7E8 0005A8C8  7C 7F 1B 78 */	mr r31, r3
/* 8005D7EC 0005A8CC  38 68 05 58 */	addi r3, r8, globals@l
/* 8005D7F0 0005A8D0  7C 99 23 78 */	mr r25, r4
/* 8005D7F4 0005A8D4  7C BA 2B 78 */	mr r26, r5
/* 8005D7F8 0005A8D8  7C DB 33 78 */	mr r27, r6
/* 8005D7FC 0005A8DC  7C FC 3B 78 */	mr r28, r7
/* 8005D800 0005A8E0  83 C3 1F C0 */	lwz r30, 0x1fc0(r3)
/* 8005D804 0005A8E4  4B FF F4 6D */	bl "get_missle_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005D808 0005A8E8  80 8D 81 80 */	lwz r4, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005D80C 0005A8EC  3B A3 00 30 */	addi r29, r3, 0x30
/* 8005D810 0005A8F0  7F A5 EB 78 */	mr r5, r29
/* 8005D814 0005A8F4  38 61 00 38 */	addi r3, r1, 0x38
/* 8005D818 0005A8F8  C0 24 00 18 */	lfs f1, 0x18(r4)
/* 8005D81C 0005A8FC  38 9F 00 2C */	addi r4, r31, 0x2c
/* 8005D820 0005A900  4B FB 47 45 */	bl xSweptSpherePrepare__FP12xSweptSphereP5xVec3P5xVec3f
/* 8005D824 0005A904  38 00 00 00 */	li r0, 0x0
/* 8005D828 0005A908  7F C4 F3 78 */	mr r4, r30
/* 8005D82C 0005A90C  90 01 01 34 */	stw r0, 0x134(r1)
/* 8005D830 0005A910  38 61 00 38 */	addi r3, r1, 0x38
/* 8005D834 0005A914  38 A0 00 00 */	li r5, 0x0
/* 8005D838 0005A918  38 C0 00 10 */	li r6, 0x10
/* 8005D83C 0005A91C  4B FB 68 4D */	bl xSweptSphereToScene__FP12xSweptSphereP6xSceneP4xEntUc
/* 8005D840 0005A920  2C 03 00 00 */	cmpwi r3, 0x0
/* 8005D844 0005A924  40 82 00 0C */	bne .L_8005D850
/* 8005D848 0005A928  38 60 00 00 */	li r3, 0x0
/* 8005D84C 0005A92C  48 00 00 C8 */	b .L_8005D914
.L_8005D850:
/* 8005D850 0005A930  38 61 00 38 */	addi r3, r1, 0x38
/* 8005D854 0005A934  4B FB 49 4D */	bl xSweptSphereGetResults__FP12xSweptSphere
/* 8005D858 0005A938  C0 3D 00 00 */	lfs f1, 0x0(r29)
/* 8005D85C 0005A93C  3C 60 80 25 */	lis r3, "@2029"@ha
/* 8005D860 0005A940  84 C3 52 B4 */	lwzu r6, "@2029"@l(r3)
/* 8005D864 0005A944  3B E1 01 64 */	addi r31, r1, 0x164
/* 8005D868 0005A948  C0 01 01 40 */	lfs f0, 0x140(r1)
/* 8005D86C 0005A94C  7F E4 FB 78 */	mr r4, r31
/* 8005D870 0005A950  80 A3 00 04 */	lwz r5, 0x4(r3)
/* 8005D874 0005A954  3B C1 01 40 */	addi r30, r1, 0x140
/* 8005D878 0005A958  EC 81 00 28 */	fsubs f4, f1, f0
/* 8005D87C 0005A95C  80 03 00 08 */	lwz r0, 0x8(r3)
/* 8005D880 0005A960  90 C1 00 2C */	stw r6, 0x2c(r1)
/* 8005D884 0005A964  38 61 00 2C */	addi r3, r1, 0x2c
/* 8005D888 0005A968  C0 7D 00 04 */	lfs f3, 0x4(r29)
/* 8005D88C 0005A96C  C0 41 01 44 */	lfs f2, 0x144(r1)
/* 8005D890 0005A970  C0 3D 00 08 */	lfs f1, 0x8(r29)
/* 8005D894 0005A974  C0 01 01 48 */	lfs f0, 0x148(r1)
/* 8005D898 0005A978  EC 43 10 28 */	fsubs f2, f3, f2
/* 8005D89C 0005A97C  90 A1 00 30 */	stw r5, 0x30(r1)
/* 8005D8A0 0005A980  EC 01 00 28 */	fsubs f0, f1, f0
/* 8005D8A4 0005A984  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005D8A8 0005A988  D0 81 00 2C */	stfs f4, 0x2c(r1)
/* 8005D8AC 0005A98C  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 8005D8B0 0005A990  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8005D8B4 0005A994  4B FB 7C 59 */	bl dot__5xVec3CFRC5xVec3
/* 8005D8B8 0005A998  7F E4 FB 78 */	mr r4, r31
/* 8005D8BC 0005A99C  38 61 00 14 */	addi r3, r1, 0x14
/* 8005D8C0 0005A9A0  4B FA D8 61 */	bl __ml__5xVec3CFf
/* 8005D8C4 0005A9A4  7F C4 F3 78 */	mr r4, r30
/* 8005D8C8 0005A9A8  38 61 00 20 */	addi r3, r1, 0x20
/* 8005D8CC 0005A9AC  38 A1 00 14 */	addi r5, r1, 0x14
/* 8005D8D0 0005A9B0  4B FB 7B 11 */	bl __pl__5xVec3CFRC5xVec3
/* 8005D8D4 0005A9B4  7F 23 CB 78 */	mr r3, r25
/* 8005D8D8 0005A9B8  38 81 00 20 */	addi r4, r1, 0x20
/* 8005D8DC 0005A9BC  4B FA D9 89 */	bl __as__5xVec3FRC5xVec3
/* 8005D8E0 0005A9C0  7F 24 CB 78 */	mr r4, r25
/* 8005D8E4 0005A9C4  7F A5 EB 78 */	mr r5, r29
/* 8005D8E8 0005A9C8  38 61 00 08 */	addi r3, r1, 0x8
/* 8005D8EC 0005A9CC  4B FA D8 E1 */	bl __mi__5xVec3CFRC5xVec3
/* 8005D8F0 0005A9D0  7F 63 DB 78 */	mr r3, r27
/* 8005D8F4 0005A9D4  38 81 00 08 */	addi r4, r1, 0x8
/* 8005D8F8 0005A9D8  4B FA D9 6D */	bl __as__5xVec3FRC5xVec3
/* 8005D8FC 0005A9DC  7F 43 D3 78 */	mr r3, r26
/* 8005D900 0005A9E0  38 81 01 58 */	addi r4, r1, 0x158
/* 8005D904 0005A9E4  4B FA D9 61 */	bl __as__5xVec3FRC5xVec3
/* 8005D908 0005A9E8  80 01 01 34 */	lwz r0, 0x134(r1)
/* 8005D90C 0005A9EC  38 60 00 01 */	li r3, 0x1
/* 8005D910 0005A9F0  90 1C 00 00 */	stw r0, 0x0(r28)
.L_8005D914:
/* 8005D914 0005A9F4  BB 21 01 84 */	lmw r25, 0x184(r1)
/* 8005D918 0005A9F8  80 01 01 A4 */	lwz r0, 0x1a4(r1)
/* 8005D91C 0005A9FC  7C 08 03 A6 */	mtlr r0
/* 8005D920 0005AA00  38 21 01 A0 */	addi r1, r1, 0x1a0
/* 8005D924 0005AA04  4E 80 00 20 */	blr
.endfn "hit_test__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyCFR5xVec3R5xVec3R5xVec3RP4xEnt"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_fly::update_move(float)
.fn "update_move__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFf", local
/* 8005D928 0005AA08  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005D92C 0005AA0C  7C 08 02 A6 */	mflr r0
/* 8005D930 0005AA10  7C 65 1B 78 */	mr r5, r3
/* 8005D934 0005AA14  FC 40 08 90 */	fmr f2, f1
/* 8005D938 0005AA18  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005D93C 0005AA1C  38 61 00 08 */	addi r3, r1, 0x8
/* 8005D940 0005AA20  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8005D944 0005AA24  80 8D 81 80 */	lwz r4, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005D948 0005AA28  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005D94C 0005AA2C  C0 24 00 3C */	lfs f1, 0x3c(r4)
/* 8005D950 0005AA30  C0 64 00 40 */	lfs f3, 0x40(r4)
/* 8005D954 0005AA34  38 85 00 0C */	addi r4, r5, 0xc
/* 8005D958 0005AA38  D0 01 00 08 */	stfs f0, 0x8(r1)
/* 8005D95C 0005AA3C  4B FD 3B 35 */	bl xAccelMove__FRfRffff
/* 8005D960 0005AA40  4B FF F3 11 */	bl "get_missle_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005D964 0005AA44  7C 7F 1B 78 */	mr r31, r3
/* 8005D968 0005AA48  C0 21 00 08 */	lfs f1, 0x8(r1)
/* 8005D96C 0005AA4C  38 61 00 0C */	addi r3, r1, 0xc
/* 8005D970 0005AA50  38 9F 00 20 */	addi r4, r31, 0x20
/* 8005D974 0005AA54  4B FA D7 AD */	bl __ml__5xVec3CFf
/* 8005D978 0005AA58  38 7F 00 30 */	addi r3, r31, 0x30
/* 8005D97C 0005AA5C  38 81 00 0C */	addi r4, r1, 0xc
/* 8005D980 0005AA60  4B FB 7A C5 */	bl __apl__5xVec3FRC5xVec3
/* 8005D984 0005AA64  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005D988 0005AA68  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8005D98C 0005AA6C  7C 08 03 A6 */	mtlr r0
/* 8005D990 0005AA70  38 21 00 20 */	addi r1, r1, 0x20
/* 8005D994 0005AA74  4E 80 00 20 */	blr
.endfn "update_move__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFf"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_fly::update_turn(float)
.fn "update_turn__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFf", local
/* 8005D998 0005AA78  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 8005D99C 0005AA7C  7C 08 02 A6 */	mflr r0
/* 8005D9A0 0005AA80  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8005D9A4 0005AA84  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 8005D9A8 0005AA88  F3 E1 00 98 */	psq_st f31, 0x98(r1), 0, qr0
/* 8005D9AC 0005AA8C  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 8005D9B0 0005AA90  F3 C1 00 88 */	psq_st f30, 0x88(r1), 0, qr0
/* 8005D9B4 0005AA94  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 8005D9B8 0005AA98  F3 A1 00 78 */	psq_st f29, 0x78(r1), 0, qr0
/* 8005D9BC 0005AA9C  DB 81 00 60 */	stfd f28, 0x60(r1)
/* 8005D9C0 0005AAA0  F3 81 00 68 */	psq_st f28, 0x68(r1), 0, qr0
/* 8005D9C4 0005AAA4  DB 61 00 50 */	stfd f27, 0x50(r1)
/* 8005D9C8 0005AAA8  F3 61 00 58 */	psq_st f27, 0x58(r1), 0, qr0
/* 8005D9CC 0005AAAC  DB 41 00 40 */	stfd f26, 0x40(r1)
/* 8005D9D0 0005AAB0  F3 41 00 48 */	psq_st f26, 0x48(r1), 0, qr0
/* 8005D9D4 0005AAB4  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8005D9D8 0005AAB8  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8005D9DC 0005AABC  80 8D 81 80 */	lwz r4, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005D9E0 0005AAC0  7C 7E 1B 78 */	mr r30, r3
/* 8005D9E4 0005AAC4  FF 60 08 90 */	fmr f27, f1
/* 8005D9E8 0005AAC8  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005D9EC 0005AACC  C0 64 00 50 */	lfs f3, 0x50(r4)
/* 8005D9F0 0005AAD0  3B E3 C2 A4 */	addi r31, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005D9F4 0005AAD4  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 8005D9F8 0005AAD8  C0 24 00 64 */	lfs f1, 0x64(r4)
/* 8005D9FC 0005AADC  C0 84 00 58 */	lfs f4, 0x58(r4)
/* 8005DA00 0005AAE0  FC 40 D8 90 */	fmr f2, f27
/* 8005DA04 0005AAE4  C3 44 00 5C */	lfs f26, 0x5c(r4)
/* 8005DA08 0005AAE8  FF C0 18 50 */	fneg f30, f3
/* 8005DA0C 0005AAEC  C3 E4 00 60 */	lfs f31, 0x60(r4)
/* 8005DA10 0005AAF0  FF A0 00 50 */	fneg f29, f0
/* 8005DA14 0005AAF4  C0 1E 00 10 */	lfs f0, 0x10(r30)
/* 8005DA18 0005AAF8  FF 80 08 50 */	fneg f28, f1
/* 8005DA1C 0005AAFC  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8005DA20 0005AB00  C0 1E 00 14 */	lfs f0, 0x14(r30)
/* 8005DA24 0005AB04  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8005DA28 0005AB08  C0 02 89 C0 */	lfs f0, "@1720"@sda21(r2)
/* 8005DA2C 0005AB0C  EC 20 20 28 */	fsubs f1, f0, f4
/* 8005DA30 0005AB10  4B FD 21 E5 */	bl xpow__Fff
/* 8005DA34 0005AB14  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 8005DA38 0005AB18  FC 40 D8 90 */	fmr f2, f27
/* 8005DA3C 0005AB1C  EC 00 00 72 */	fmuls f0, f0, f1
/* 8005DA40 0005AB20  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8005DA44 0005AB24  C0 02 89 C0 */	lfs f0, "@1720"@sda21(r2)
/* 8005DA48 0005AB28  EC 20 D0 28 */	fsubs f1, f0, f26
/* 8005DA4C 0005AB2C  4B FD 21 C9 */	bl xpow__Fff
/* 8005DA50 0005AB30  C0 5E 00 20 */	lfs f2, 0x20(r30)
/* 8005DA54 0005AB34  C0 1F 00 4C */	lfs f0, 0x4c(r31)
/* 8005DA58 0005AB38  EC 22 00 72 */	fmuls f1, f2, f1
/* 8005DA5C 0005AB3C  C0 41 00 34 */	lfs f2, 0x34(r1)
/* 8005DA60 0005AB40  EC 1D 00 32 */	fmuls f0, f29, f0
/* 8005DA64 0005AB44  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8005DA68 0005AB48  EC 22 00 32 */	fmuls f1, f2, f0
/* 8005DA6C 0005AB4C  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005DA70 0005AB50  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005DA74 0005AB54  4C 40 13 82 */	cror eq, lt, eq
/* 8005DA78 0005AB58  40 82 00 0C */	bne .L_8005DA84
/* 8005DA7C 0005AB5C  C0 A2 89 C0 */	lfs f5, "@1720"@sda21(r2)
/* 8005DA80 0005AB60  48 00 00 18 */	b .L_8005DA98
.L_8005DA84:
/* 8005DA84 0005AB64  FC 00 12 10 */	fabs f0, f2
/* 8005DA88 0005AB68  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005DA8C 0005AB6C  FC 00 00 18 */	frsp f0, f0
/* 8005DA90 0005AB70  EC 00 F8 24 */	fdivs f0, f0, f31
/* 8005DA94 0005AB74  EC A1 00 28 */	fsubs f5, f1, f0
.L_8005DA98:
/* 8005DA98 0005AB78  C0 5F 00 44 */	lfs f2, 0x44(r31)
/* 8005DA9C 0005AB7C  FC 20 D8 90 */	fmr f1, f27
/* 8005DAA0 0005AB80  C0 1F 00 4C */	lfs f0, 0x4c(r31)
/* 8005DAA4 0005AB84  7F C3 F3 78 */	mr r3, r30
/* 8005DAA8 0005AB88  EC 7D 00 B2 */	fmuls f3, f29, f2
/* 8005DAAC 0005AB8C  C0 9F 00 40 */	lfs f4, 0x40(r31)
/* 8005DAB0 0005AB90  EC 1D 00 32 */	fmuls f0, f29, f0
/* 8005DAB4 0005AB94  C0 5F 00 48 */	lfs f2, 0x48(r31)
/* 8005DAB8 0005AB98  EC 9E 01 32 */	fmuls f4, f30, f4
/* 8005DABC 0005AB9C  EC 65 00 F2 */	fmuls f3, f5, f3
/* 8005DAC0 0005ABA0  EC 5E 00 B2 */	fmuls f2, f30, f2
/* 8005DAC4 0005ABA4  38 81 00 28 */	addi r4, r1, 0x28
/* 8005DAC8 0005ABA8  EC 05 00 32 */	fmuls f0, f5, f0
/* 8005DACC 0005ABAC  D0 81 00 10 */	stfs f4, 0x10(r1)
/* 8005DAD0 0005ABB0  38 A1 00 18 */	addi r5, r1, 0x18
/* 8005DAD4 0005ABB4  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 8005DAD8 0005ABB8  38 C1 00 30 */	addi r6, r1, 0x30
/* 8005DADC 0005ABBC  38 E1 00 20 */	addi r7, r1, 0x20
/* 8005DAE0 0005ABC0  D0 41 00 08 */	stfs f2, 0x8(r1)
/* 8005DAE4 0005ABC4  39 01 00 10 */	addi r8, r1, 0x10
/* 8005DAE8 0005ABC8  39 21 00 08 */	addi r9, r1, 0x8
/* 8005DAEC 0005ABCC  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8005DAF0 0005ABD0  48 00 00 A9 */	bl "calculate_rotation__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyCFR5xVec2R5xVec2fRC5xVec2RC5xVec2RC5xVec2RC5xVec2"
/* 8005DAF4 0005ABD4  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8005DAF8 0005ABD8  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 8005DAFC 0005ABDC  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 8005DB00 0005ABE0  D0 1E 00 14 */	stfs f0, 0x14(r30)
/* 8005DB04 0005ABE4  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8005DB08 0005ABE8  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 8005DB0C 0005ABEC  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8005DB10 0005ABF0  D0 1E 00 20 */	stfs f0, 0x20(r30)
/* 8005DB14 0005ABF4  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 8005DB18 0005ABF8  EC 00 00 32 */	fmuls f0, f0, f0
/* 8005DB1C 0005ABFC  EC 1C 00 32 */	fmuls f0, f28, f0
/* 8005DB20 0005AC00  D0 1E 00 18 */	stfs f0, 0x18(r30)
/* 8005DB24 0005AC04  C0 3E 00 1C */	lfs f1, 0x1c(r30)
/* 8005DB28 0005AC08  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005DB2C 0005AC0C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005DB30 0005AC10  40 80 00 14 */	bge .L_8005DB44
/* 8005DB34 0005AC14  C0 3E 00 18 */	lfs f1, 0x18(r30)
/* 8005DB38 0005AC18  C0 02 89 FC */	lfs f0, "@2883"@sda21(r2)
/* 8005DB3C 0005AC1C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8005DB40 0005AC20  D0 1E 00 18 */	stfs f0, 0x18(r30)
.L_8005DB44:
/* 8005DB44 0005AC24  4B FF F1 2D */	bl "get_missle_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005DB48 0005AC28  38 9E 00 10 */	addi r4, r30, 0x10
/* 8005DB4C 0005AC2C  4B FD 46 59 */	bl xMat3x3Euler__FP7xMat3x3PC5xVec3
/* 8005DB50 0005AC30  E3 E1 00 98 */	psq_l f31, 0x98(r1), 0, qr0
/* 8005DB54 0005AC34  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 8005DB58 0005AC38  E3 C1 00 88 */	psq_l f30, 0x88(r1), 0, qr0
/* 8005DB5C 0005AC3C  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 8005DB60 0005AC40  E3 A1 00 78 */	psq_l f29, 0x78(r1), 0, qr0
/* 8005DB64 0005AC44  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 8005DB68 0005AC48  E3 81 00 68 */	psq_l f28, 0x68(r1), 0, qr0
/* 8005DB6C 0005AC4C  CB 81 00 60 */	lfd f28, 0x60(r1)
/* 8005DB70 0005AC50  E3 61 00 58 */	psq_l f27, 0x58(r1), 0, qr0
/* 8005DB74 0005AC54  CB 61 00 50 */	lfd f27, 0x50(r1)
/* 8005DB78 0005AC58  E3 41 00 48 */	psq_l f26, 0x48(r1), 0, qr0
/* 8005DB7C 0005AC5C  CB 41 00 40 */	lfd f26, 0x40(r1)
/* 8005DB80 0005AC60  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8005DB84 0005AC64  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 8005DB88 0005AC68  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8005DB8C 0005AC6C  7C 08 03 A6 */	mtlr r0
/* 8005DB90 0005AC70  38 21 00 A0 */	addi r1, r1, 0xa0
/* 8005DB94 0005AC74  4E 80 00 20 */	blr
.endfn "update_turn__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFf"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_fly::calculate_rotation(xVec2&, xVec2&, float, const xVec2&, const xVec2&, const xVec2&, const xVec2&) const
.fn "calculate_rotation__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyCFR5xVec2R5xVec2fRC5xVec2RC5xVec2RC5xVec2RC5xVec2", local
/* 8005DB98 0005AC78  C0 08 00 00 */	lfs f0, 0x0(r8)
/* 8005DB9C 0005AC7C  C1 69 00 00 */	lfs f11, 0x0(r9)
/* 8005DBA0 0005AC80  C0 A7 00 00 */	lfs f5, 0x0(r7)
/* 8005DBA4 0005AC84  EC 40 00 2A */	fadds f2, f0, f0
/* 8005DBA8 0005AC88  EC 00 58 2A */	fadds f0, f0, f11
/* 8005DBAC 0005AC8C  C0 C2 89 C8 */	lfs f6, "@1728"@sda21(r2)
/* 8005DBB0 0005AC90  C0 88 00 04 */	lfs f4, 0x4(r8)
/* 8005DBB4 0005AC94  EC 65 00 72 */	fmuls f3, f5, f1
/* 8005DBB8 0005AC98  C1 29 00 04 */	lfs f9, 0x4(r9)
/* 8005DBBC 0005AC9C  ED 46 00 32 */	fmuls f10, f6, f0
/* 8005DBC0 0005ACA0  C0 C7 00 04 */	lfs f6, 0x4(r7)
/* 8005DBC4 0005ACA4  EC 04 20 2A */	fadds f0, f4, f4
/* 8005DBC8 0005ACA8  ED 04 48 2A */	fadds f8, f4, f9
/* 8005DBCC 0005ACAC  C0 E6 00 00 */	lfs f7, 0x0(r6)
/* 8005DBD0 0005ACB0  ED 41 2A BA */	fmadds f10, f1, f10, f5
/* 8005DBD4 0005ACB4  EC AB 10 2A */	fadds f5, f11, f2
/* 8005DBD8 0005ACB8  C0 86 00 04 */	lfs f4, 0x4(r6)
/* 8005DBDC 0005ACBC  EC 49 00 2A */	fadds f2, f9, f0
/* 8005DBE0 0005ACC0  D1 45 00 00 */	stfs f10, 0x0(r5)
/* 8005DBE4 0005ACC4  EC 06 00 72 */	fmuls f0, f6, f1
/* 8005DBE8 0005ACC8  C1 22 89 C8 */	lfs f9, "@1728"@sda21(r2)
/* 8005DBEC 0005ACCC  ED 09 02 32 */	fmuls f8, f9, f8
/* 8005DBF0 0005ACD0  EC C1 32 3A */	fmadds f6, f1, f8, f6
/* 8005DBF4 0005ACD4  D0 C5 00 04 */	stfs f6, 0x4(r5)
/* 8005DBF8 0005ACD8  C0 C2 8A 18 */	lfs f6, "@3180"@sda21(r2)
/* 8005DBFC 0005ACDC  EC A6 01 72 */	fmuls f5, f6, f5
/* 8005DC00 0005ACE0  EC A1 01 72 */	fmuls f5, f1, f5
/* 8005DC04 0005ACE4  EC 61 19 7A */	fmadds f3, f1, f5, f3
/* 8005DC08 0005ACE8  EC 67 18 2A */	fadds f3, f7, f3
/* 8005DC0C 0005ACEC  D0 64 00 00 */	stfs f3, 0x0(r4)
/* 8005DC10 0005ACF0  C0 62 8A 18 */	lfs f3, "@3180"@sda21(r2)
/* 8005DC14 0005ACF4  EC 43 00 B2 */	fmuls f2, f3, f2
/* 8005DC18 0005ACF8  EC 41 00 B2 */	fmuls f2, f1, f2
/* 8005DC1C 0005ACFC  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 8005DC20 0005AD00  EC 04 00 2A */	fadds f0, f4, f0
/* 8005DC24 0005AD04  D0 04 00 04 */	stfs f0, 0x4(r4)
/* 8005DC28 0005AD08  4E 80 00 20 */	blr
.endfn "calculate_rotation__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyCFR5xVec2R5xVec2fRC5xVec2RC5xVec2RC5xVec2RC5xVec2"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_explode::start()
.fn "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFv", local
/* 8005DC2C 0005AD0C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005DC30 0005AD10  7C 08 02 A6 */	mflr r0
/* 8005DC34 0005AD14  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005DC38 0005AD18  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005DC3C 0005AD1C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8005DC40 0005AD20  7C 7F 1B 78 */	mr r31, r3
/* 8005DC44 0005AD24  84 04 C2 A4 */	lwzu r0, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l(r4)
/* 8005DC48 0005AD28  60 00 00 40 */	ori r0, r0, 0x40
/* 8005DC4C 0005AD2C  90 04 00 00 */	stw r0, 0x0(r4)
/* 8005DC50 0005AD30  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005DC54 0005AD34  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 8005DC58 0005AD38  80 8D 81 80 */	lwz r4, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005DC5C 0005AD3C  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005DC60 0005AD40  C0 24 00 6C */	lfs f1, 0x6c(r4)
/* 8005DC64 0005AD44  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005DC68 0005AD48  4C 40 13 82 */	cror eq, lt, eq
/* 8005DC6C 0005AD4C  40 82 00 0C */	bne .L_8005DC78
/* 8005DC70 0005AD50  C0 24 00 68 */	lfs f1, 0x68(r4)
/* 8005DC74 0005AD54  48 00 07 49 */	bl "apply_damage__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFf"
.L_8005DC78:
/* 8005DC78 0005AD58  4B FF A4 91 */	bl "get_player_loc__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005DC7C 0005AD5C  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005DC80 0005AD60  7C 65 1B 78 */	mr r5, r3
/* 8005DC84 0005AD64  38 84 C2 A4 */	addi r4, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005DC88 0005AD68  38 61 00 08 */	addi r3, r1, 0x8
/* 8005DC8C 0005AD6C  38 84 00 50 */	addi r4, r4, 0x50
/* 8005DC90 0005AD70  4B FA D5 3D */	bl __mi__5xVec3CFRC5xVec3
/* 8005DC94 0005AD74  38 61 00 08 */	addi r3, r1, 0x8
/* 8005DC98 0005AD78  4B FA D4 65 */	bl length2__5xVec3CFv
/* 8005DC9C 0005AD7C  80 8D 81 80 */	lwz r4, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005DCA0 0005AD80  38 60 00 02 */	li r3, 0x2
/* 8005DCA4 0005AD84  C0 04 00 B0 */	lfs f0, 0xb0(r4)
/* 8005DCA8 0005AD88  EC 00 00 32 */	fmuls f0, f0, f0
/* 8005DCAC 0005AD8C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005DCB0 0005AD90  4C 40 13 82 */	cror eq, lt, eq
/* 8005DCB4 0005AD94  40 82 00 0C */	bne .L_8005DCC0
/* 8005DCB8 0005AD98  38 80 00 0B */	li r4, 0xb
/* 8005DCBC 0005AD9C  48 00 00 08 */	b .L_8005DCC4
.L_8005DCC0:
/* 8005DCC0 0005ADA0  38 80 00 0A */	li r4, 0xa
.L_8005DCC4:
/* 8005DCC4 0005ADA4  4B FF A0 19 */	bl "set_state__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@11thread_enumQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_enum"
/* 8005DCC8 0005ADA8  4B FF EF A9 */	bl "get_missle_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005DCCC 0005ADAC  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005DCD0 0005ADB0  38 83 00 30 */	addi r4, r3, 0x30
/* 8005DCD4 0005ADB4  38 60 00 01 */	li r3, 0x1
/* 8005DCD8 0005ADB8  4B FF 97 2D */	bl "play_sound__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FifPC5xVec3"
/* 8005DCDC 0005ADBC  7F E3 FB 78 */	mr r3, r31
/* 8005DCE0 0005ADC0  48 00 00 19 */	bl "start_effects__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFv"
/* 8005DCE4 0005ADC4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005DCE8 0005ADC8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8005DCEC 0005ADCC  7C 08 03 A6 */	mtlr r0
/* 8005DCF0 0005ADD0  38 21 00 20 */	addi r1, r1, 0x20
/* 8005DCF4 0005ADD4  4E 80 00 20 */	blr
.endfn "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_explode::start_effects()
.fn "start_effects__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFv", local
/* 8005DCF8 0005ADD8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8005DCFC 0005ADDC  7C 08 02 A6 */	mflr r0
/* 8005DD00 0005ADE0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005DD04 0005ADE4  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 8005DD08 0005ADE8  83 AD 81 80 */	lwz r29, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005DD0C 0005ADEC  4B FF EF 65 */	bl "get_missle_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005DD10 0005ADF0  80 9D 01 08 */	lwz r4, 0x108(r29)
/* 8005DD14 0005ADF4  38 63 00 30 */	addi r3, r3, 0x30
/* 8005DD18 0005ADF8  C0 3D 01 0C */	lfs f1, 0x10c(r29)
/* 8005DD1C 0005ADFC  C0 5D 01 10 */	lfs f2, 0x110(r29)
/* 8005DD20 0005AE00  C0 7D 01 14 */	lfs f3, 0x114(r29)
/* 8005DD24 0005AE04  48 03 7A E1 */	bl zFX_SpawnBubbleBlast__FPC5xVec3Uifff
/* 8005DD28 0005AE08  3C 60 80 25 */	lis r3, "@2102"@ha
/* 8005DD2C 0005AE0C  38 A3 52 C0 */	addi r5, r3, "@2102"@l
/* 8005DD30 0005AE10  80 85 00 00 */	lwz r4, 0x0(r5)
/* 8005DD34 0005AE14  80 65 00 04 */	lwz r3, 0x4(r5)
/* 8005DD38 0005AE18  80 05 00 08 */	lwz r0, 0x8(r5)
/* 8005DD3C 0005AE1C  90 81 00 08 */	stw r4, 0x8(r1)
/* 8005DD40 0005AE20  90 61 00 0C */	stw r3, 0xc(r1)
/* 8005DD44 0005AE24  90 01 00 10 */	stw r0, 0x10(r1)
/* 8005DD48 0005AE28  4B FF EF 29 */	bl "get_missle_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005DD4C 0005AE2C  3C A0 80 2E */	lis r5, "explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005DD50 0005AE30  7C 64 1B 78 */	mr r4, r3
/* 8005DD54 0005AE34  38 65 C8 B8 */	addi r3, r5, "explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005DD58 0005AE38  38 C0 FF FF */	li r6, -0x1
/* 8005DD5C 0005AE3C  38 A1 00 08 */	addi r5, r1, 0x8
/* 8005DD60 0005AE40  48 11 EB E5 */	bl emit__13xDecalEmitterFRC7xMat4x3RC5xVec3i
/* 8005DD64 0005AE44  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005DD68 0005AE48  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005DD6C 0005AE4C  83 83 01 04 */	lwz r28, 0x104(r3)
/* 8005DD70 0005AE50  28 1C 00 00 */	cmplwi r28, 0x0
/* 8005DD74 0005AE54  41 82 00 98 */	beq .L_8005DE0C
/* 8005DD78 0005AE58  80 1C 00 08 */	lwz r0, 0x8(r28)
/* 8005DD7C 0005AE5C  28 00 00 00 */	cmplwi r0, 0x0
/* 8005DD80 0005AE60  41 82 00 8C */	beq .L_8005DE0C
/* 8005DD84 0005AE64  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005DD88 0005AE68  83 A3 01 20 */	lwz r29, 0x120(r3)
/* 8005DD8C 0005AE6C  83 C3 01 24 */	lwz r30, 0x124(r3)
/* 8005DD90 0005AE70  7C 1D F0 40 */	cmplw r29, r30
/* 8005DD94 0005AE74  41 80 00 0C */	blt .L_8005DDA0
/* 8005DD98 0005AE78  7F DD F3 78 */	mr r29, r30
/* 8005DD9C 0005AE7C  48 00 00 20 */	b .L_8005DDBC
.L_8005DDA0:
/* 8005DDA0 0005AE80  4B FD 2E C9 */	bl xrand__Fv
/* 8005DDA4 0005AE84  54 64 9B 7E */	srwi r4, r3, 13
/* 8005DDA8 0005AE88  7C 7D F0 50 */	subf r3, r29, r30
/* 8005DDAC 0005AE8C  7C 04 1B 96 */	divwu r0, r4, r3
/* 8005DDB0 0005AE90  7C 00 19 D6 */	mullw r0, r0, r3
/* 8005DDB4 0005AE94  7C 00 20 50 */	subf r0, r0, r4
/* 8005DDB8 0005AE98  7F BD 02 14 */	add r29, r29, r0
.L_8005DDBC:
/* 8005DDBC 0005AE9C  80 8D 81 80 */	lwz r4, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005DDC0 0005AEA0  7F A3 EB 78 */	mr r3, r29
/* 8005DDC4 0005AEA4  C0 24 01 34 */	lfs f1, 0x134(r4)
/* 8005DDC8 0005AEA8  48 00 04 81 */	bl "reset_quadrants__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFUif"
/* 8005DDCC 0005AEAC  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005DDD0 0005AEB0  3C 60 80 06 */	lis r3, "cb_droplet__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFP5zFragP10zFragAsset"@ha
/* 8005DDD4 0005AEB4  3B C4 C2 A4 */	addi r30, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005DDD8 0005AEB8  3B 60 00 00 */	li r27, 0x0
/* 8005DDDC 0005AEBC  3B E3 DE 20 */	addi r31, r3, "cb_droplet__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFP5zFragP10zFragAsset"@l
/* 8005DDE0 0005AEC0  48 00 00 24 */	b .L_8005DE04
.L_8005DDE4:
/* 8005DDE4 0005AEC4  81 9C 00 08 */	lwz r12, 0x8(r28)
/* 8005DDE8 0005AEC8  7F 83 E3 78 */	mr r3, r28
/* 8005DDEC 0005AECC  7F E6 FB 78 */	mr r6, r31
/* 8005DDF0 0005AED0  80 9E 00 68 */	lwz r4, 0x68(r30)
/* 8005DDF4 0005AED4  38 A0 00 00 */	li r5, 0x0
/* 8005DDF8 0005AED8  7D 89 03 A6 */	mtctr r12
/* 8005DDFC 0005AEDC  4E 80 04 21 */	bctrl
/* 8005DE00 0005AEE0  3B 7B 00 01 */	addi r27, r27, 0x1
.L_8005DE04:
/* 8005DE04 0005AEE4  7C 1B E8 40 */	cmplw r27, r29
/* 8005DE08 0005AEE8  41 80 FF DC */	blt .L_8005DDE4
.L_8005DE0C:
/* 8005DE0C 0005AEEC  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 8005DE10 0005AEF0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8005DE14 0005AEF4  7C 08 03 A6 */	mtlr r0
/* 8005DE18 0005AEF8  38 21 00 30 */	addi r1, r1, 0x30
/* 8005DE1C 0005AEFC  4E 80 00 20 */	blr
.endfn "start_effects__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_explode::cb_droplet(zFrag*, zFragAsset*)
.fn "cb_droplet__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFP5zFragP10zFragAsset", local
/* 8005DE20 0005AF00  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8005DE24 0005AF04  7C 08 02 A6 */	mflr r0
/* 8005DE28 0005AF08  90 01 00 74 */	stw r0, 0x74(r1)
/* 8005DE2C 0005AF0C  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8005DE30 0005AF10  F3 E1 00 68 */	psq_st f31, 0x68(r1), 0, qr0
/* 8005DE34 0005AF14  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8005DE38 0005AF18  93 C1 00 58 */	stw r30, 0x58(r1)
/* 8005DE3C 0005AF1C  7C 7E 1B 78 */	mr r30, r3
/* 8005DE40 0005AF20  38 61 00 14 */	addi r3, r1, 0x14
/* 8005DE44 0005AF24  80 FE 00 04 */	lwz r7, 0x4(r30)
/* 8005DE48 0005AF28  38 81 00 10 */	addi r4, r1, 0x10
/* 8005DE4C 0005AF2C  38 A1 00 0C */	addi r5, r1, 0xc
/* 8005DE50 0005AF30  38 C1 00 08 */	addi r6, r1, 0x8
/* 8005DE54 0005AF34  80 07 00 70 */	lwz r0, 0x70(r7)
/* 8005DE58 0005AF38  60 00 00 22 */	ori r0, r0, 0x22
/* 8005DE5C 0005AF3C  90 07 00 70 */	stw r0, 0x70(r7)
/* 8005DE60 0005AF40  48 00 03 19 */	bl "get_next_quadrant__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFRfRfRfRf"
/* 8005DE64 0005AF44  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005DE68 0005AF48  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8005DE6C 0005AF4C  38 83 C2 A4 */	addi r4, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005DE70 0005AF50  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8005DE74 0005AF54  C0 61 00 0C */	lfs f3, 0xc(r1)
/* 8005DE78 0005AF58  38 61 00 3C */	addi r3, r1, 0x3c
/* 8005DE7C 0005AF5C  C0 81 00 08 */	lfs f4, 0x8(r1)
/* 8005DE80 0005AF60  38 84 00 5C */	addi r4, r4, 0x5c
/* 8005DE84 0005AF64  48 00 01 39 */	bl "perturb_direction__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFRC5xVec3ffff"
/* 8005DE88 0005AF68  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 8005DE8C 0005AF6C  80 61 00 40 */	lwz r3, 0x40(r1)
/* 8005DE90 0005AF70  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8005DE94 0005AF74  90 81 00 48 */	stw r4, 0x48(r1)
/* 8005DE98 0005AF78  90 61 00 4C */	stw r3, 0x4c(r1)
/* 8005DE9C 0005AF7C  90 01 00 50 */	stw r0, 0x50(r1)
/* 8005DEA0 0005AF80  4B FD 2D E9 */	bl xurand__Fv
/* 8005DEA4 0005AF84  C0 42 89 F8 */	lfs f2, "@2856"@sda21(r2)
/* 8005DEA8 0005AF88  4B FD 1D 6D */	bl xpow__Fff
/* 8005DEAC 0005AF8C  80 AD 81 80 */	lwz r5, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005DEB0 0005AF90  38 61 00 24 */	addi r3, r1, 0x24
/* 8005DEB4 0005AF94  38 81 00 48 */	addi r4, r1, 0x48
/* 8005DEB8 0005AF98  C0 45 01 18 */	lfs f2, 0x118(r5)
/* 8005DEBC 0005AF9C  C0 05 01 1C */	lfs f0, 0x11c(r5)
/* 8005DEC0 0005AFA0  EC 00 10 28 */	fsubs f0, f0, f2
/* 8005DEC4 0005AFA4  EC 21 10 3A */	fmadds f1, f1, f0, f2
/* 8005DEC8 0005AFA8  4B FA D2 59 */	bl __ml__5xVec3CFf
/* 8005DECC 0005AFAC  4B FF ED A5 */	bl "get_missle_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005DED0 0005AFB0  7C 64 1B 78 */	mr r4, r3
/* 8005DED4 0005AFB4  38 61 00 30 */	addi r3, r1, 0x30
/* 8005DED8 0005AFB8  38 84 00 30 */	addi r4, r4, 0x30
/* 8005DEDC 0005AFBC  38 A1 00 24 */	addi r5, r1, 0x24
/* 8005DEE0 0005AFC0  4B FB 75 01 */	bl __pl__5xVec3CFRC5xVec3
/* 8005DEE4 0005AFC4  38 7E 00 0C */	addi r3, r30, 0xc
/* 8005DEE8 0005AFC8  38 81 00 30 */	addi r4, r1, 0x30
/* 8005DEEC 0005AFCC  4B FA D3 79 */	bl __as__5xVec3FRC5xVec3
/* 8005DEF0 0005AFD0  83 ED 81 80 */	lwz r31, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005DEF4 0005AFD4  C3 FF 01 28 */	lfs f31, 0x128(r31)
/* 8005DEF8 0005AFD8  4B FD 2D 91 */	bl xurand__Fv
/* 8005DEFC 0005AFDC  C0 1F 01 2C */	lfs f0, 0x12c(r31)
/* 8005DF00 0005AFE0  38 61 00 18 */	addi r3, r1, 0x18
/* 8005DF04 0005AFE4  38 81 00 48 */	addi r4, r1, 0x48
/* 8005DF08 0005AFE8  EC 00 F8 28 */	fsubs f0, f0, f31
/* 8005DF0C 0005AFEC  EC 20 F8 7A */	fmadds f1, f0, f1, f31
/* 8005DF10 0005AFF0  4B FA D2 11 */	bl __ml__5xVec3CFf
/* 8005DF14 0005AFF4  38 7E 00 18 */	addi r3, r30, 0x18
/* 8005DF18 0005AFF8  38 81 00 18 */	addi r4, r1, 0x18
/* 8005DF1C 0005AFFC  4B FA D3 49 */	bl __as__5xVec3FRC5xVec3
/* 8005DF20 0005B000  4B FD 2D 69 */	bl xurand__Fv
/* 8005DF24 0005B004  C0 02 89 C8 */	lfs f0, "@1728"@sda21(r2)
/* 8005DF28 0005B008  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005DF2C 0005B00C  EC 41 00 28 */	fsubs f2, f1, f0
/* 8005DF30 0005B010  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 8005DF34 0005B014  C0 23 01 30 */	lfs f1, 0x130(r3)
/* 8005DF38 0005B018  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 8005DF3C 0005B01C  D0 1E 00 18 */	stfs f0, 0x18(r30)
/* 8005DF40 0005B020  4B FD 2D 49 */	bl xurand__Fv
/* 8005DF44 0005B024  C0 02 89 C8 */	lfs f0, "@1728"@sda21(r2)
/* 8005DF48 0005B028  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005DF4C 0005B02C  EC 41 00 28 */	fsubs f2, f1, f0
/* 8005DF50 0005B030  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 8005DF54 0005B034  C0 23 01 30 */	lfs f1, 0x130(r3)
/* 8005DF58 0005B038  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 8005DF5C 0005B03C  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 8005DF60 0005B040  4B FD 2D 29 */	bl xurand__Fv
/* 8005DF64 0005B044  C0 02 89 C8 */	lfs f0, "@1728"@sda21(r2)
/* 8005DF68 0005B048  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005DF6C 0005B04C  EC 41 00 28 */	fsubs f2, f1, f0
/* 8005DF70 0005B050  C0 1E 00 20 */	lfs f0, 0x20(r30)
/* 8005DF74 0005B054  C0 23 01 30 */	lfs f1, 0x130(r3)
/* 8005DF78 0005B058  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 8005DF7C 0005B05C  D0 1E 00 20 */	stfs f0, 0x20(r30)
/* 8005DF80 0005B060  4B FD 2D 09 */	bl xurand__Fv
/* 8005DF84 0005B064  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005DF88 0005B068  C0 03 01 38 */	lfs f0, 0x138(r3)
/* 8005DF8C 0005B06C  EC 00 00 72 */	fmuls f0, f0, f1
/* 8005DF90 0005B070  D0 1E 00 30 */	stfs f0, 0x30(r30)
/* 8005DF94 0005B074  C0 02 89 D8 */	lfs f0, "@2509"@sda21(r2)
/* 8005DF98 0005B078  D0 1E 00 48 */	stfs f0, 0x48(r30)
/* 8005DF9C 0005B07C  E3 E1 00 68 */	psq_l f31, 0x68(r1), 0, qr0
/* 8005DFA0 0005B080  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8005DFA4 0005B084  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8005DFA8 0005B088  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8005DFAC 0005B08C  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 8005DFB0 0005B090  7C 08 03 A6 */	mtlr r0
/* 8005DFB4 0005B094  38 21 00 70 */	addi r1, r1, 0x70
/* 8005DFB8 0005B098  4E 80 00 20 */	blr
.endfn "cb_droplet__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFP5zFragP10zFragAsset"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_explode::perturb_direction(const xVec3&, float, float, float, float)
.fn "perturb_direction__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFRC5xVec3ffff", local
/* 8005DFBC 0005B09C  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 8005DFC0 0005B0A0  7C 08 02 A6 */	mflr r0
/* 8005DFC4 0005B0A4  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 8005DFC8 0005B0A8  DB E1 00 B0 */	stfd f31, 0xb0(r1)
/* 8005DFCC 0005B0AC  F3 E1 00 B8 */	psq_st f31, 0xb8(r1), 0, qr0
/* 8005DFD0 0005B0B0  DB C1 00 A0 */	stfd f30, 0xa0(r1)
/* 8005DFD4 0005B0B4  F3 C1 00 A8 */	psq_st f30, 0xa8(r1), 0, qr0
/* 8005DFD8 0005B0B8  DB A1 00 90 */	stfd f29, 0x90(r1)
/* 8005DFDC 0005B0BC  F3 A1 00 98 */	psq_st f29, 0x98(r1), 0, qr0
/* 8005DFE0 0005B0C0  DB 81 00 80 */	stfd f28, 0x80(r1)
/* 8005DFE4 0005B0C4  F3 81 00 88 */	psq_st f28, 0x88(r1), 0, qr0
/* 8005DFE8 0005B0C8  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 8005DFEC 0005B0CC  93 C1 00 78 */	stw r30, 0x78(r1)
/* 8005DFF0 0005B0D0  93 A1 00 74 */	stw r29, 0x74(r1)
/* 8005DFF4 0005B0D4  93 81 00 70 */	stw r28, 0x70(r1)
/* 8005DFF8 0005B0D8  FF 80 08 90 */	fmr f28, f1
/* 8005DFFC 0005B0DC  7C 7C 1B 78 */	mr r28, r3
/* 8005E000 0005B0E0  FF E0 10 90 */	fmr f31, f2
/* 8005E004 0005B0E4  7C 9D 23 78 */	mr r29, r4
/* 8005E008 0005B0E8  FF C0 18 90 */	fmr f30, f3
/* 8005E00C 0005B0EC  FF A0 20 90 */	fmr f29, f4
/* 8005E010 0005B0F0  4B FD 2C 79 */	bl xurand__Fv
/* 8005E014 0005B0F4  EC 1D F0 28 */	fsubs f0, f29, f30
/* 8005E018 0005B0F8  EF C0 F0 7A */	fmadds f30, f0, f1, f30
/* 8005E01C 0005B0FC  4B FD 2C 6D */	bl xurand__Fv
/* 8005E020 0005B100  EC 5F E0 28 */	fsubs f2, f31, f28
/* 8005E024 0005B104  C0 02 89 C0 */	lfs f0, "@1720"@sda21(r2)
/* 8005E028 0005B108  EF A2 E0 7A */	fmadds f29, f2, f1, f28
/* 8005E02C 0005B10C  EC 3D 07 7C */	fnmsubs f1, f29, f29, f0
/* 8005E030 0005B110  4B FA C7 CD */	bl xsqrt__Ff
/* 8005E034 0005B114  3C 60 80 25 */	lis r3, "@2121"@ha
/* 8005E038 0005B118  FF E0 08 90 */	fmr f31, f1
/* 8005E03C 0005B11C  38 A3 52 CC */	addi r5, r3, "@2121"@l
/* 8005E040 0005B120  FC 20 F0 90 */	fmr f1, f30
/* 8005E044 0005B124  80 85 00 00 */	lwz r4, 0x0(r5)
/* 8005E048 0005B128  80 65 00 04 */	lwz r3, 0x4(r5)
/* 8005E04C 0005B12C  80 05 00 08 */	lwz r0, 0x8(r5)
/* 8005E050 0005B130  90 81 00 2C */	stw r4, 0x2c(r1)
/* 8005E054 0005B134  90 61 00 30 */	stw r3, 0x30(r1)
/* 8005E058 0005B138  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005E05C 0005B13C  48 06 6E 35 */	bl icos__Ff
/* 8005E060 0005B140  EC 1F 00 72 */	fmuls f0, f31, f1
/* 8005E064 0005B144  FC 20 F0 90 */	fmr f1, f30
/* 8005E068 0005B148  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8005E06C 0005B14C  48 06 6D E1 */	bl isin__Ff
/* 8005E070 0005B150  EC 1F 00 72 */	fmuls f0, f31, f1
/* 8005E074 0005B154  3B E1 00 58 */	addi r31, r1, 0x58
/* 8005E078 0005B158  D3 A1 00 34 */	stfs f29, 0x34(r1)
/* 8005E07C 0005B15C  7F E3 FB 78 */	mr r3, r31
/* 8005E080 0005B160  38 81 00 2C */	addi r4, r1, 0x2c
/* 8005E084 0005B164  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8005E088 0005B168  4B FA D1 DD */	bl __as__5xVec3FRC5xVec3
/* 8005E08C 0005B16C  FC 20 EA 10 */	fabs f1, f29
/* 8005E090 0005B170  C0 02 89 C8 */	lfs f0, "@1728"@sda21(r2)
/* 8005E094 0005B174  FC 20 08 18 */	frsp f1, f1
/* 8005E098 0005B178  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005E09C 0005B17C  40 81 00 1C */	ble .L_8005E0B8
/* 8005E0A0 0005B180  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005E0A4 0005B184  38 61 00 38 */	addi r3, r1, 0x38
/* 8005E0A8 0005B188  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005E0AC 0005B18C  FC 60 10 90 */	fmr f3, f2
/* 8005E0B0 0005B190  4B FA D0 3D */	bl assign__5xVec3Ffff
/* 8005E0B4 0005B194  48 00 00 18 */	b .L_8005E0CC
.L_8005E0B8:
/* 8005E0B8 0005B198  C0 22 89 B8 */	lfs f1, "@1551"@sda21(r2)
/* 8005E0BC 0005B19C  38 61 00 38 */	addi r3, r1, 0x38
/* 8005E0C0 0005B1A0  C0 62 89 C0 */	lfs f3, "@1720"@sda21(r2)
/* 8005E0C4 0005B1A4  FC 40 08 90 */	fmr f2, f1
/* 8005E0C8 0005B1A8  4B FA D0 25 */	bl assign__5xVec3Ffff
.L_8005E0CC:
/* 8005E0CC 0005B1AC  7F E4 FB 78 */	mr r4, r31
/* 8005E0D0 0005B1B0  38 61 00 14 */	addi r3, r1, 0x14
/* 8005E0D4 0005B1B4  38 A1 00 38 */	addi r5, r1, 0x38
/* 8005E0D8 0005B1B8  4B FB 74 5D */	bl cross__5xVec3CFRC5xVec3
/* 8005E0DC 0005B1BC  3B C1 00 48 */	addi r30, r1, 0x48
/* 8005E0E0 0005B1C0  38 81 00 14 */	addi r4, r1, 0x14
/* 8005E0E4 0005B1C4  7F C3 F3 78 */	mr r3, r30
/* 8005E0E8 0005B1C8  4B FA D1 7D */	bl __as__5xVec3FRC5xVec3
/* 8005E0EC 0005B1CC  7F C3 F3 78 */	mr r3, r30
/* 8005E0F0 0005B1D0  4B FB 74 C1 */	bl normalize__5xVec3Fv
/* 8005E0F4 0005B1D4  7F C4 F3 78 */	mr r4, r30
/* 8005E0F8 0005B1D8  7F E5 FB 78 */	mr r5, r31
/* 8005E0FC 0005B1DC  38 61 00 08 */	addi r3, r1, 0x8
/* 8005E100 0005B1E0  4B FB 74 35 */	bl cross__5xVec3CFRC5xVec3
/* 8005E104 0005B1E4  38 61 00 38 */	addi r3, r1, 0x38
/* 8005E108 0005B1E8  38 81 00 08 */	addi r4, r1, 0x8
/* 8005E10C 0005B1EC  4B FA D1 59 */	bl __as__5xVec3FRC5xVec3
/* 8005E110 0005B1F0  7F A5 EB 78 */	mr r5, r29
/* 8005E114 0005B1F4  38 61 00 20 */	addi r3, r1, 0x20
/* 8005E118 0005B1F8  38 81 00 38 */	addi r4, r1, 0x38
/* 8005E11C 0005B1FC  4B FD 49 41 */	bl xMat3x3LMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 8005E120 0005B200  80 61 00 20 */	lwz r3, 0x20(r1)
/* 8005E124 0005B204  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005E128 0005B208  90 7C 00 00 */	stw r3, 0x0(r28)
/* 8005E12C 0005B20C  90 1C 00 04 */	stw r0, 0x4(r28)
/* 8005E130 0005B210  80 01 00 28 */	lwz r0, 0x28(r1)
/* 8005E134 0005B214  90 1C 00 08 */	stw r0, 0x8(r28)
/* 8005E138 0005B218  E3 E1 00 B8 */	psq_l f31, 0xb8(r1), 0, qr0
/* 8005E13C 0005B21C  CB E1 00 B0 */	lfd f31, 0xb0(r1)
/* 8005E140 0005B220  E3 C1 00 A8 */	psq_l f30, 0xa8(r1), 0, qr0
/* 8005E144 0005B224  CB C1 00 A0 */	lfd f30, 0xa0(r1)
/* 8005E148 0005B228  E3 A1 00 98 */	psq_l f29, 0x98(r1), 0, qr0
/* 8005E14C 0005B22C  CB A1 00 90 */	lfd f29, 0x90(r1)
/* 8005E150 0005B230  E3 81 00 88 */	psq_l f28, 0x88(r1), 0, qr0
/* 8005E154 0005B234  CB 81 00 80 */	lfd f28, 0x80(r1)
/* 8005E158 0005B238  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 8005E15C 0005B23C  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 8005E160 0005B240  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 8005E164 0005B244  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 8005E168 0005B248  83 81 00 70 */	lwz r28, 0x70(r1)
/* 8005E16C 0005B24C  7C 08 03 A6 */	mtlr r0
/* 8005E170 0005B250  38 21 00 C0 */	addi r1, r1, 0xc0
/* 8005E174 0005B254  4E 80 00 20 */	blr
.endfn "perturb_direction__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFRC5xVec3ffff"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_explode::get_next_quadrant(float&, float&, float&, float&)
.fn "get_next_quadrant__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFRfRfRfRf", local
/* 8005E178 0005B258  3C E0 80 2E */	lis r7, "qzone__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode"@ha
/* 8005E17C 0005B25C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005E180 0005B260  39 27 C9 20 */	addi r9, r7, "qzone__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode"@l
/* 8005E184 0005B264  39 40 00 01 */	li r10, 0x1
/* 8005E188 0005B268  80 09 00 00 */	lwz r0, 0x0(r9)
/* 8005E18C 0005B26C  80 E9 00 04 */	lwz r7, 0x4(r9)
/* 8005E190 0005B270  7D 48 00 30 */	slw r8, r10, r0
/* 8005E194 0005B274  48 00 00 14 */	b .L_8005E1A8
.L_8005E198:
/* 8005E198 0005B278  81 09 00 00 */	lwz r8, 0x0(r9)
/* 8005E19C 0005B27C  38 08 00 01 */	addi r0, r8, 0x1
/* 8005E1A0 0005B280  7D 48 40 30 */	slw r8, r10, r8
/* 8005E1A4 0005B284  90 09 00 00 */	stw r0, 0x0(r9)
.L_8005E1A8:
/* 8005E1A8 0005B288  7C E0 40 39 */	and. r0, r7, r8
/* 8005E1AC 0005B28C  41 82 FF EC */	beq .L_8005E198
/* 8005E1B0 0005B290  3C E0 80 2E */	lis r7, "qzone__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode"@ha
/* 8005E1B4 0005B294  3C 00 43 30 */	lis r0, 0x4330
/* 8005E1B8 0005B298  39 07 C9 20 */	addi r8, r7, "qzone__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode"@l
/* 8005E1BC 0005B29C  90 01 00 08 */	stw r0, 0x8(r1)
/* 8005E1C0 0005B2A0  81 48 00 00 */	lwz r10, 0x0(r8)
/* 8005E1C4 0005B2A4  81 28 00 08 */	lwz r9, 0x8(r8)
/* 8005E1C8 0005B2A8  C8 62 89 E0 */	lfd f3, "@2700"@sda21(r2)
/* 8005E1CC 0005B2AC  7C EA 4B 96 */	divwu r7, r10, r9
/* 8005E1D0 0005B2B0  C0 28 00 0C */	lfs f1, 0xc(r8)
/* 8005E1D4 0005B2B4  C0 02 89 C0 */	lfs f0, "@1720"@sda21(r2)
/* 8005E1D8 0005B2B8  90 01 00 10 */	stw r0, 0x10(r1)
/* 8005E1DC 0005B2BC  90 E1 00 0C */	stw r7, 0xc(r1)
/* 8005E1E0 0005B2C0  7C 07 49 D6 */	mullw r0, r7, r9
/* 8005E1E4 0005B2C4  C8 41 00 08 */	lfd f2, 0x8(r1)
/* 8005E1E8 0005B2C8  EC 42 18 28 */	fsubs f2, f2, f3
/* 8005E1EC 0005B2CC  7C 00 50 50 */	subf r0, r0, r10
/* 8005E1F0 0005B2D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005E1F4 0005B2D4  EC 02 00 7C */	fnmsubs f0, f2, f1, f0
/* 8005E1F8 0005B2D8  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 8005E1FC 0005B2DC  D0 04 00 00 */	stfs f0, 0x0(r4)
/* 8005E200 0005B2E0  C0 44 00 00 */	lfs f2, 0x0(r4)
/* 8005E204 0005B2E4  C0 08 00 0C */	lfs f0, 0xc(r8)
/* 8005E208 0005B2E8  EC 02 00 28 */	fsubs f0, f2, f0
/* 8005E20C 0005B2EC  D0 03 00 00 */	stfs f0, 0x0(r3)
/* 8005E210 0005B2F0  C8 42 89 E0 */	lfd f2, "@2700"@sda21(r2)
/* 8005E214 0005B2F4  C0 08 00 10 */	lfs f0, 0x10(r8)
/* 8005E218 0005B2F8  EC 21 10 28 */	fsubs f1, f1, f2
/* 8005E21C 0005B2FC  EC 01 00 32 */	fmuls f0, f1, f0
/* 8005E220 0005B300  D0 05 00 00 */	stfs f0, 0x0(r5)
/* 8005E224 0005B304  C0 25 00 00 */	lfs f1, 0x0(r5)
/* 8005E228 0005B308  C0 08 00 10 */	lfs f0, 0x10(r8)
/* 8005E22C 0005B30C  EC 01 00 2A */	fadds f0, f1, f0
/* 8005E230 0005B310  D0 06 00 00 */	stfs f0, 0x0(r6)
/* 8005E234 0005B314  80 68 00 00 */	lwz r3, 0x0(r8)
/* 8005E238 0005B318  38 03 00 01 */	addi r0, r3, 0x1
/* 8005E23C 0005B31C  90 08 00 00 */	stw r0, 0x0(r8)
/* 8005E240 0005B320  38 21 00 20 */	addi r1, r1, 0x20
/* 8005E244 0005B324  4E 80 00 20 */	blr
.endfn "get_next_quadrant__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFRfRfRfRf"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_explode::reset_quadrants(unsigned int, float)
.fn "reset_quadrants__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFUif", local
/* 8005E248 0005B328  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8005E24C 0005B32C  7C 08 02 A6 */	mflr r0
/* 8005E250 0005B330  90 01 00 44 */	stw r0, 0x44(r1)
/* 8005E254 0005B334  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8005E258 0005B338  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 8005E25C 0005B33C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8005E260 0005B340  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8005E264 0005B344  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8005E268 0005B348  93 81 00 20 */	stw r28, 0x20(r1)
/* 8005E26C 0005B34C  7C 7E 1B 78 */	mr r30, r3
/* 8005E270 0005B350  3C 00 43 30 */	lis r0, 0x4330
/* 8005E274 0005B354  3C 80 80 2E */	lis r4, "qzone__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode"@ha
/* 8005E278 0005B358  38 A0 00 00 */	li r5, 0x0
/* 8005E27C 0005B35C  93 C1 00 0C */	stw r30, 0xc(r1)
/* 8005E280 0005B360  FF E0 08 90 */	fmr f31, f1
/* 8005E284 0005B364  90 A4 C9 20 */	stw r5, "qzone__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode"@l(r4)
/* 8005E288 0005B368  90 01 00 08 */	stw r0, 0x8(r1)
/* 8005E28C 0005B36C  C8 22 89 E0 */	lfd f1, "@2700"@sda21(r2)
/* 8005E290 0005B370  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 8005E294 0005B374  EC 20 08 28 */	fsubs f1, f0, f1
/* 8005E298 0005B378  4B FA C5 65 */	bl xsqrt__Ff
/* 8005E29C 0005B37C  48 18 F1 41 */	bl __cvt_fp2unsigned
/* 8005E2A0 0005B380  38 03 FF FF */	addi r0, r3, -0x1
/* 8005E2A4 0005B384  3C 80 80 2E */	lis r4, "qzone__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode"@ha
/* 8005E2A8 0005B388  7C 1E 02 14 */	add r0, r30, r0
/* 8005E2AC 0005B38C  FC 20 F8 90 */	fmr f1, f31
/* 8005E2B0 0005B390  7F E0 1B 96 */	divwu r31, r0, r3
/* 8005E2B4 0005B394  3B A4 C9 20 */	addi r29, r4, "qzone__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode"@l
/* 8005E2B8 0005B398  90 7D 00 08 */	stw r3, 0x8(r29)
/* 8005E2BC 0005B39C  48 06 6B D5 */	bl icos__Ff
/* 8005E2C0 0005B3A0  3C C0 43 30 */	lis r6, 0x4330
/* 8005E2C4 0005B3A4  80 9D 00 08 */	lwz r4, 0x8(r29)
/* 8005E2C8 0005B3A8  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8005E2CC 0005B3AC  3C A0 80 2E */	lis r5, "qzone__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode"@ha
/* 8005E2D0 0005B3B0  C0 02 89 C0 */	lfs f0, "@1720"@sda21(r2)
/* 8005E2D4 0005B3B4  7F FF 21 D6 */	mullw r31, r31, r4
/* 8005E2D8 0005B3B8  90 C1 00 10 */	stw r6, 0x10(r1)
/* 8005E2DC 0005B3BC  38 00 00 01 */	li r0, 0x1
/* 8005E2E0 0005B3C0  C8 42 89 E0 */	lfd f2, "@2700"@sda21(r2)
/* 8005E2E4 0005B3C4  EC 20 08 28 */	fsubs f1, f0, f1
/* 8005E2E8 0005B3C8  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8005E2EC 0005B3CC  EC 00 10 28 */	fsubs f0, f0, f2
/* 8005E2F0 0005B3D0  7C 03 F8 30 */	slw r3, r0, r31
/* 8005E2F4 0005B3D4  90 81 00 1C */	stw r4, 0x1c(r1)
/* 8005E2F8 0005B3D8  3B A5 C9 20 */	addi r29, r5, "qzone__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode"@l
/* 8005E2FC 0005B3DC  38 03 FF FF */	addi r0, r3, -0x1
/* 8005E300 0005B3E0  7F 9E F8 50 */	subf r28, r30, r31
/* 8005E304 0005B3E4  EC 21 00 24 */	fdivs f1, f1, f0
/* 8005E308 0005B3E8  90 C1 00 18 */	stw r6, 0x18(r1)
/* 8005E30C 0005B3EC  3B C0 00 00 */	li r30, 0x0
/* 8005E310 0005B3F0  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8005E314 0005B3F4  D0 3D 00 0C */	stfs f1, 0xc(r29)
/* 8005E318 0005B3F8  EC 00 10 28 */	fsubs f0, f0, f2
/* 8005E31C 0005B3FC  C0 22 8A E8 */	lfs f1, "@3564"@sda21(r2)
/* 8005E320 0005B400  EC 01 00 24 */	fdivs f0, f1, f0
/* 8005E324 0005B404  90 1D 00 04 */	stw r0, 0x4(r29)
/* 8005E328 0005B408  D0 1D 00 10 */	stfs f0, 0x10(r29)
/* 8005E32C 0005B40C  48 00 00 60 */	b .L_8005E38C
.L_8005E330:
/* 8005E330 0005B410  4B FD 29 39 */	bl xrand__Fv
/* 8005E334 0005B414  54 65 9B 7E */	srwi r5, r3, 13
/* 8005E338 0005B418  7C 9E F8 50 */	subf r4, r30, r31
/* 8005E33C 0005B41C  7C 05 23 96 */	divwu r0, r5, r4
/* 8005E340 0005B420  80 DD 00 04 */	lwz r6, 0x4(r29)
/* 8005E344 0005B424  38 E0 00 00 */	li r7, 0x0
/* 8005E348 0005B428  39 00 00 00 */	li r8, 0x0
/* 8005E34C 0005B42C  38 60 00 01 */	li r3, 0x1
/* 8005E350 0005B430  7C 00 21 D6 */	mullw r0, r0, r4
/* 8005E354 0005B434  7C A0 28 50 */	subf r5, r0, r5
.L_8005E358:
/* 8005E358 0005B438  7C 64 38 30 */	slw r4, r3, r7
/* 8005E35C 0005B43C  7C C0 20 39 */	and. r0, r6, r4
/* 8005E360 0005B440  41 82 00 20 */	beq .L_8005E380
/* 8005E364 0005B444  7C 08 28 40 */	cmplw r8, r5
/* 8005E368 0005B448  41 80 00 14 */	blt .L_8005E37C
/* 8005E36C 0005B44C  80 1D 00 04 */	lwz r0, 0x4(r29)
/* 8005E370 0005B450  7C 00 20 78 */	andc r0, r0, r4
/* 8005E374 0005B454  90 1D 00 04 */	stw r0, 0x4(r29)
/* 8005E378 0005B458  48 00 00 10 */	b .L_8005E388
.L_8005E37C:
/* 8005E37C 0005B45C  39 08 00 01 */	addi r8, r8, 0x1
.L_8005E380:
/* 8005E380 0005B460  38 E7 00 01 */	addi r7, r7, 0x1
/* 8005E384 0005B464  4B FF FF D4 */	b .L_8005E358
.L_8005E388:
/* 8005E388 0005B468  3B DE 00 01 */	addi r30, r30, 0x1
.L_8005E38C:
/* 8005E38C 0005B46C  7C 1E E0 40 */	cmplw r30, r28
/* 8005E390 0005B470  41 80 FF A0 */	blt .L_8005E330
/* 8005E394 0005B474  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8005E398 0005B478  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8005E39C 0005B47C  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8005E3A0 0005B480  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8005E3A4 0005B484  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8005E3A8 0005B488  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8005E3AC 0005B48C  83 81 00 20 */	lwz r28, 0x20(r1)
/* 8005E3B0 0005B490  7C 08 03 A6 */	mtlr r0
/* 8005E3B4 0005B494  38 21 00 40 */	addi r1, r1, 0x40
/* 8005E3B8 0005B498  4E 80 00 20 */	blr
.endfn "reset_quadrants__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFUif"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_explode::apply_damage(float)
.fn "apply_damage__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFf", local
/* 8005E3BC 0005B49C  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8005E3C0 0005B4A0  7C 08 02 A6 */	mflr r0
/* 8005E3C4 0005B4A4  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005E3C8 0005B4A8  90 01 00 84 */	stw r0, 0x84(r1)
/* 8005E3CC 0005B4AC  38 84 C2 A4 */	addi r4, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005E3D0 0005B4B0  38 00 00 01 */	li r0, 0x1
/* 8005E3D4 0005B4B4  DB E1 00 78 */	stfd f31, 0x78(r1)
/* 8005E3D8 0005B4B8  FF E0 08 90 */	fmr f31, f1
/* 8005E3DC 0005B4BC  38 84 00 50 */	addi r4, r4, 0x50
/* 8005E3E0 0005B4C0  93 E1 00 74 */	stw r31, 0x74(r1)
/* 8005E3E4 0005B4C4  3B E1 00 3C */	addi r31, r1, 0x3c
/* 8005E3E8 0005B4C8  93 C1 00 70 */	stw r30, 0x70(r1)
/* 8005E3EC 0005B4CC  7C 7E 1B 78 */	mr r30, r3
/* 8005E3F0 0005B4D0  7F E3 FB 78 */	mr r3, r31
/* 8005E3F4 0005B4D4  98 01 00 38 */	stb r0, 0x38(r1)
/* 8005E3F8 0005B4D8  4B FA CE 6D */	bl __as__5xVec3FRC5xVec3
/* 8005E3FC 0005B4DC  D3 E1 00 48 */	stfs f31, 0x48(r1)
/* 8005E400 0005B4E0  7F E4 FB 78 */	mr r4, r31
/* 8005E404 0005B4E4  38 61 00 18 */	addi r3, r1, 0x18
/* 8005E408 0005B4E8  48 00 22 09 */	bl xQuickCullForSphere__FP7xQCDataPC7xSphere
/* 8005E40C 0005B4EC  FC 20 F8 90 */	fmr f1, f31
/* 8005E410 0005B4F0  38 61 00 14 */	addi r3, r1, 0x14
/* 8005E414 0005B4F4  48 00 01 5D */	bl "__ct__Q413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode13cb_damage_entFf"
/* 8005E418 0005B4F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005E41C 0005B4FC  3C 60 80 3D */	lis r3, colls_grid@ha
/* 8005E420 0005B500  38 81 00 18 */	addi r4, r1, 0x18
/* 8005E424 0005B504  38 C1 00 10 */	addi r6, r1, 0x10
/* 8005E428 0005B508  90 01 00 10 */	stw r0, 0x10(r1)
/* 8005E42C 0005B50C  38 63 A6 D8 */	addi r3, r3, colls_grid@l
/* 8005E430 0005B510  7C 85 23 78 */	mr r5, r4
/* 8005E434 0005B514  48 00 22 11 */	bl "xGridCheckBound<Q413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode13cb_damage_ent>__FR5xGridRC6xBoundRC7xQCDataQ413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode13cb_damage_ent"
/* 8005E438 0005B518  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005E43C 0005B51C  3C 60 80 3D */	lis r3, colls_oso_grid@ha
/* 8005E440 0005B520  38 81 00 18 */	addi r4, r1, 0x18
/* 8005E444 0005B524  38 C1 00 0C */	addi r6, r1, 0xc
/* 8005E448 0005B528  90 01 00 0C */	stw r0, 0xc(r1)
/* 8005E44C 0005B52C  38 63 A7 74 */	addi r3, r3, colls_oso_grid@l
/* 8005E450 0005B530  7C 85 23 78 */	mr r5, r4
/* 8005E454 0005B534  48 00 21 F1 */	bl "xGridCheckBound<Q413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode13cb_damage_ent>__FR5xGridRC6xBoundRC7xQCDataQ413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode13cb_damage_ent"
/* 8005E458 0005B538  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005E45C 0005B53C  3C 60 80 3D */	lis r3, npcs_grid@ha
/* 8005E460 0005B540  38 81 00 18 */	addi r4, r1, 0x18
/* 8005E464 0005B544  38 C1 00 08 */	addi r6, r1, 0x8
/* 8005E468 0005B548  90 01 00 08 */	stw r0, 0x8(r1)
/* 8005E46C 0005B54C  38 63 A7 A8 */	addi r3, r3, npcs_grid@l
/* 8005E470 0005B550  7C 85 23 78 */	mr r5, r4
/* 8005E474 0005B554  48 00 21 D1 */	bl "xGridCheckBound<Q413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode13cb_damage_ent>__FR5xGridRC6xBoundRC7xQCDataQ413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode13cb_damage_ent"
/* 8005E478 0005B558  FC 20 F8 90 */	fmr f1, f31
/* 8005E47C 0005B55C  7F C3 F3 78 */	mr r3, r30
/* 8005E480 0005B560  48 00 00 21 */	bl "apply_damage_hazards__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFf"
/* 8005E484 0005B564  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8005E488 0005B568  CB E1 00 78 */	lfd f31, 0x78(r1)
/* 8005E48C 0005B56C  83 E1 00 74 */	lwz r31, 0x74(r1)
/* 8005E490 0005B570  83 C1 00 70 */	lwz r30, 0x70(r1)
/* 8005E494 0005B574  7C 08 03 A6 */	mtlr r0
/* 8005E498 0005B578  38 21 00 80 */	addi r1, r1, 0x80
/* 8005E49C 0005B57C  4E 80 00 20 */	blr
.endfn "apply_damage__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFf"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_explode::apply_damage_hazards(float)
.fn "apply_damage_hazards__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFf", local
/* 8005E4A0 0005B580  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005E4A4 0005B584  7C 08 02 A6 */	mflr r0
/* 8005E4A8 0005B588  3C 60 80 06 */	lis r3, "hazard_check__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFR9NPCHazardPv"@ha
/* 8005E4AC 0005B58C  3C A0 00 21 */	lis r5, 0x21
/* 8005E4B0 0005B590  D0 21 00 08 */	stfs f1, 0x8(r1)
/* 8005E4B4 0005B594  38 63 E4 D8 */	addi r3, r3, "hazard_check__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFR9NPCHazardPv"@l
/* 8005E4B8 0005B598  38 A5 80 00 */	addi r5, r5, -0x8000
/* 8005E4BC 0005B59C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005E4C0 0005B5A0  80 81 00 08 */	lwz r4, 0x8(r1)
/* 8005E4C4 0005B5A4  48 12 9D 55 */	bl HAZ_Iterate__FPFR9NPCHazardPv_bPvi
/* 8005E4C8 0005B5A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005E4CC 0005B5AC  7C 08 03 A6 */	mtlr r0
/* 8005E4D0 0005B5B0  38 21 00 10 */	addi r1, r1, 0x10
/* 8005E4D4 0005B5B4  4E 80 00 20 */	blr
.endfn "apply_damage_hazards__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFf"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_explode::hazard_check(NPCHazard&, void*)
.fn "hazard_check__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFR9NPCHazardPv", local
/* 8005E4D8 0005B5B8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8005E4DC 0005B5BC  7C 08 02 A6 */	mflr r0
/* 8005E4E0 0005B5C0  90 01 00 44 */	stw r0, 0x44(r1)
/* 8005E4E4 0005B5C4  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8005E4E8 0005B5C8  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 8005E4EC 0005B5CC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8005E4F0 0005B5D0  90 81 00 08 */	stw r4, 0x8(r1)
/* 8005E4F4 0005B5D4  7C 7F 1B 78 */	mr r31, r3
/* 8005E4F8 0005B5D8  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005E4FC 0005B5DC  38 61 00 0C */	addi r3, r1, 0xc
/* 8005E500 0005B5E0  38 A4 C2 A4 */	addi r5, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005E504 0005B5E4  C3 E1 00 08 */	lfs f31, 0x8(r1)
/* 8005E508 0005B5E8  38 9F 00 08 */	addi r4, r31, 0x8
/* 8005E50C 0005B5EC  38 A5 00 50 */	addi r5, r5, 0x50
/* 8005E510 0005B5F0  4B FA CC BD */	bl __mi__5xVec3CFRC5xVec3
/* 8005E514 0005B5F4  C0 1F 00 68 */	lfs f0, 0x68(r31)
/* 8005E518 0005B5F8  38 61 00 18 */	addi r3, r1, 0x18
/* 8005E51C 0005B5FC  80 A1 00 0C */	lwz r5, 0xc(r1)
/* 8005E520 0005B600  80 81 00 10 */	lwz r4, 0x10(r1)
/* 8005E524 0005B604  EF FF 00 2A */	fadds f31, f31, f0
/* 8005E528 0005B608  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005E52C 0005B60C  90 A1 00 18 */	stw r5, 0x18(r1)
/* 8005E530 0005B610  90 81 00 1C */	stw r4, 0x1c(r1)
/* 8005E534 0005B614  90 01 00 20 */	stw r0, 0x20(r1)
/* 8005E538 0005B618  4B FA CB C5 */	bl length2__5xVec3CFv
/* 8005E53C 0005B61C  EC 1F 07 F2 */	fmuls f0, f31, f31
/* 8005E540 0005B620  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005E544 0005B624  40 80 00 0C */	bge .L_8005E550
/* 8005E548 0005B628  7F E3 FB 78 */	mr r3, r31
/* 8005E54C 0005B62C  48 00 20 B5 */	bl MarkForRecycle__9NPCHazardFv
.L_8005E550:
/* 8005E550 0005B630  38 60 00 01 */	li r3, 0x1
/* 8005E554 0005B634  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8005E558 0005B638  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8005E55C 0005B63C  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8005E560 0005B640  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8005E564 0005B644  7C 08 03 A6 */	mtlr r0
/* 8005E568 0005B648  38 21 00 40 */	addi r1, r1, 0x40
/* 8005E56C 0005B64C  4E 80 00 20 */	blr
.endfn "hazard_check__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFR9NPCHazardPv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_explode::cb_damage_ent::cb_damage_ent(float)
.fn "__ct__Q413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode13cb_damage_entFf", local
/* 8005E570 0005B650  D0 23 00 00 */	stfs f1, 0x0(r3)
/* 8005E574 0005B654  4E 80 00 20 */	blr
.endfn "__ct__Q413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode13cb_damage_entFf"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_explode::stop()
.fn "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFv", local
/* 8005E578 0005B658  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005E57C 0005B65C  84 03 C2 A4 */	lwzu r0, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l(r3)
/* 8005E580 0005B660  54 00 06 B0 */	rlwinm r0, r0, 0, 26, 24
/* 8005E584 0005B664  90 03 00 00 */	stw r0, 0x0(r3)
/* 8005E588 0005B668  4E 80 00 20 */	blr
.endfn "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_explode::update(float)
.fn "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFf", local
/* 8005E58C 0005B66C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005E590 0005B670  7C 08 02 A6 */	mflr r0
/* 8005E594 0005B674  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005E598 0005B678  C0 03 00 08 */	lfs f0, 0x8(r3)
/* 8005E59C 0005B67C  EC 00 08 2A */	fadds f0, f0, f1
/* 8005E5A0 0005B680  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 8005E5A4 0005B684  80 8D 81 80 */	lwz r4, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005E5A8 0005B688  C0 23 00 08 */	lfs f1, 0x8(r3)
/* 8005E5AC 0005B68C  C0 04 00 6C */	lfs f0, 0x6c(r4)
/* 8005E5B0 0005B690  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005E5B4 0005B694  4C 40 13 82 */	cror eq, lt, eq
/* 8005E5B8 0005B698  40 82 00 14 */	bne .L_8005E5CC
/* 8005E5BC 0005B69C  EC 21 00 24 */	fdivs f1, f1, f0
/* 8005E5C0 0005B6A0  C0 04 00 68 */	lfs f0, 0x68(r4)
/* 8005E5C4 0005B6A4  EC 21 00 32 */	fmuls f1, f1, f0
/* 8005E5C8 0005B6A8  4B FF FD F5 */	bl "apply_damage__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFf"
.L_8005E5CC:
/* 8005E5CC 0005B6AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005E5D0 0005B6B0  38 60 00 06 */	li r3, 0x6
/* 8005E5D4 0005B6B4  7C 08 03 A6 */	mtlr r0
/* 8005E5D8 0005B6B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8005E5DC 0005B6BC  4E 80 00 20 */	blr
.endfn "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFf"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_aim::start()
.fn "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimFv", local
/* 8005E5E0 0005B6C0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005E5E4 0005B6C4  7C 08 02 A6 */	mflr r0
/* 8005E5E8 0005B6C8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005E5EC 0005B6CC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8005E5F0 0005B6D0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8005E5F4 0005B6D4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8005E5F8 0005B6D8  7C 7D 1B 78 */	mr r29, r3
/* 8005E5FC 0005B6DC  4B FF 8F 99 */	bl "capture_camera__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005E600 0005B6E0  38 60 00 01 */	li r3, 0x1
/* 8005E604 0005B6E4  4B FE A3 F5 */	bl xSndSelectListenerMode__F24sound_listener_game_mode
/* 8005E608 0005B6E8  3C 60 80 3C */	lis r3, globals@ha
/* 8005E60C 0005B6EC  C0 22 8A B0 */	lfs f1, "@3319"@sda21(r2)
/* 8005E610 0005B6F0  38 63 05 58 */	addi r3, r3, globals@l
/* 8005E614 0005B6F4  4B FA E5 FD */	bl xCameraUpdate__FP7xCameraf
/* 8005E618 0005B6F8  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005E61C 0005B6FC  3C 60 80 3C */	lis r3, globals@ha
/* 8005E620 0005B700  38 63 05 58 */	addi r3, r3, globals@l
/* 8005E624 0005B704  D0 1D 00 1C */	stfs f0, 0x1c(r29)
/* 8005E628 0005B708  3B E3 00 14 */	addi r31, r3, 0x14
/* 8005E62C 0005B70C  D0 1D 00 14 */	stfs f0, 0x14(r29)
/* 8005E630 0005B710  D0 1D 00 0C */	stfs f0, 0xc(r29)
/* 8005E634 0005B714  4B FF 9A D5 */	bl "get_player_loc__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005E638 0005B718  C0 7F 00 30 */	lfs f3, 0x30(r31)
/* 8005E63C 0005B71C  7C 7E 1B 78 */	mr r30, r3
/* 8005E640 0005B720  C0 23 00 00 */	lfs f1, 0x0(r3)
/* 8005E644 0005B724  80 82 BE B0 */	lwz r4, "@2265"@sda21(r2)
/* 8005E648 0005B728  80 02 BE B4 */	lwz r0, "@2265"+0x4@sda21(r2)
/* 8005E64C 0005B72C  EC 23 08 28 */	fsubs f1, f3, f1
/* 8005E650 0005B730  90 81 00 08 */	stw r4, 0x8(r1)
/* 8005E654 0005B734  C0 5F 00 38 */	lfs f2, 0x38(r31)
/* 8005E658 0005B738  C0 03 00 08 */	lfs f0, 0x8(r3)
/* 8005E65C 0005B73C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8005E660 0005B740  EC 42 00 28 */	fsubs f2, f2, f0
/* 8005E664 0005B744  D0 21 00 08 */	stfs f1, 0x8(r1)
/* 8005E668 0005B748  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 8005E66C 0005B74C  4B FA 7A 05 */	bl xatan2__Fff
/* 8005E670 0005B750  D0 3D 00 08 */	stfs f1, 0x8(r29)
/* 8005E674 0005B754  38 61 00 08 */	addi r3, r1, 0x8
/* 8005E678 0005B758  C0 3F 00 34 */	lfs f1, 0x34(r31)
/* 8005E67C 0005B75C  C0 1E 00 04 */	lfs f0, 0x4(r30)
/* 8005E680 0005B760  EC 01 00 28 */	fsubs f0, f1, f0
/* 8005E684 0005B764  D0 1D 00 10 */	stfs f0, 0x10(r29)
/* 8005E688 0005B768  4B FD 81 D1 */	bl length__5xVec2CFv
/* 8005E68C 0005B76C  D0 3D 00 18 */	stfs f1, 0x18(r29)
/* 8005E690 0005B770  7F E4 FB 78 */	mr r4, r31
/* 8005E694 0005B774  38 7D 00 20 */	addi r3, r29, 0x20
/* 8005E698 0005B778  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005E69C 0005B77C  D0 1D 00 44 */	stfs f0, 0x44(r29)
/* 8005E6A0 0005B780  D0 1D 00 40 */	stfs f0, 0x40(r29)
/* 8005E6A4 0005B784  4B FD 45 E1 */	bl xQuatFromMat__FP5xQuatPC7xMat3x3
/* 8005E6A8 0005B788  3C 60 80 2E */	lis r3, "start_cam_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005E6AC 0005B78C  7F E4 FB 78 */	mr r4, r31
/* 8005E6B0 0005B790  38 63 BD F0 */	addi r3, r3, "start_cam_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005E6B4 0005B794  4B FA CE B9 */	bl __as__7xMat4x3FRC7xMat4x3
/* 8005E6B8 0005B798  3C 60 80 2E */	lis r3, "start_cam_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005E6BC 0005B79C  7F C4 F3 78 */	mr r4, r30
/* 8005E6C0 0005B7A0  38 63 BD F0 */	addi r3, r3, "start_cam_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005E6C4 0005B7A4  38 63 00 30 */	addi r3, r3, 0x30
/* 8005E6C8 0005B7A8  4B FA CB 69 */	bl __ami__5xVec3FRC5xVec3
/* 8005E6CC 0005B7AC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005E6D0 0005B7B0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8005E6D4 0005B7B4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8005E6D8 0005B7B8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8005E6DC 0005B7BC  7C 08 03 A6 */	mtlr r0
/* 8005E6E0 0005B7C0  38 21 00 20 */	addi r1, r1, 0x20
/* 8005E6E4 0005B7C4  4E 80 00 20 */	blr
.endfn "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_aim::stop()
.fn "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimFv", local
/* 8005E6E8 0005B7C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005E6EC 0005B7CC  7C 08 02 A6 */	mflr r0
/* 8005E6F0 0005B7D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005E6F4 0005B7D4  4B FF 8E D5 */	bl "release_camera__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005E6F8 0005B7D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005E6FC 0005B7DC  7C 08 03 A6 */	mtlr r0
/* 8005E700 0005B7E0  38 21 00 10 */	addi r1, r1, 0x10
/* 8005E704 0005B7E4  4E 80 00 20 */	blr
.endfn "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_aim::update(float)
.fn "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimFf", local
/* 8005E708 0005B7E8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005E70C 0005B7EC  7C 08 02 A6 */	mflr r0
/* 8005E710 0005B7F0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005E714 0005B7F4  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8005E718 0005B7F8  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8005E71C 0005B7FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005E720 0005B800  FF E0 08 90 */	fmr f31, f1
/* 8005E724 0005B804  C0 03 00 40 */	lfs f0, 0x40(r3)
/* 8005E728 0005B808  7C 7F 1B 78 */	mr r31, r3
/* 8005E72C 0005B80C  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005E730 0005B810  38 80 00 00 */	li r4, 0x0
/* 8005E734 0005B814  EC 00 F8 2A */	fadds f0, f0, f31
/* 8005E738 0005B818  D0 1F 00 40 */	stfs f0, 0x40(r31)
/* 8005E73C 0005B81C  80 03 C2 A4 */	lwz r0, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l(r3)
/* 8005E740 0005B820  54 00 06 B5 */	rlwinm. r0, r0, 0, 26, 26
/* 8005E744 0005B824  41 82 00 20 */	beq .L_8005E764
/* 8005E748 0005B828  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005E74C 0005B82C  C0 3F 00 40 */	lfs f1, 0x40(r31)
/* 8005E750 0005B830  C0 03 00 00 */	lfs f0, 0x0(r3)
/* 8005E754 0005B834  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005E758 0005B838  4C 41 13 82 */	cror eq, gt, eq
/* 8005E75C 0005B83C  40 82 00 08 */	bne .L_8005E764
/* 8005E760 0005B840  38 80 00 01 */	li r4, 0x1
.L_8005E764:
/* 8005E764 0005B844  54 80 06 3F */	clrlwi. r0, r4, 24
/* 8005E768 0005B848  41 82 00 14 */	beq .L_8005E77C
/* 8005E76C 0005B84C  FC 20 F8 90 */	fmr f1, f31
/* 8005E770 0005B850  7F E3 FB 78 */	mr r3, r31
/* 8005E774 0005B854  48 00 04 AD */	bl "move__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimFf"
/* 8005E778 0005B858  48 00 00 10 */	b .L_8005E788
.L_8005E77C:
/* 8005E77C 0005B85C  FC 20 F8 90 */	fmr f1, f31
/* 8005E780 0005B860  7F E3 FB 78 */	mr r3, r31
/* 8005E784 0005B864  48 00 04 0D */	bl "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimFf"
.L_8005E788:
/* 8005E788 0005B868  7F E3 FB 78 */	mr r3, r31
/* 8005E78C 0005B86C  48 00 03 71 */	bl "apply_motion__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimCFv"
/* 8005E790 0005B870  7F E3 FB 78 */	mr r3, r31
/* 8005E794 0005B874  48 00 01 B1 */	bl "collide_inward__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimFv"
/* 8005E798 0005B878  FC 20 F8 90 */	fmr f1, f31
/* 8005E79C 0005B87C  7F E3 FB 78 */	mr r3, r31
/* 8005E7A0 0005B880  48 00 00 AD */	bl "turn__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimFf"
/* 8005E7A4 0005B884  7F E3 FB 78 */	mr r3, r31
/* 8005E7A8 0005B888  48 00 00 61 */	bl "apply_turn__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimCFv"
/* 8005E7AC 0005B88C  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005E7B0 0005B890  80 03 C2 A4 */	lwz r0, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l(r3)
/* 8005E7B4 0005B894  54 00 07 39 */	rlwinm. r0, r0, 0, 28, 28
/* 8005E7B8 0005B898  41 82 00 30 */	beq .L_8005E7E8
/* 8005E7BC 0005B89C  C0 1F 00 44 */	lfs f0, 0x44(r31)
/* 8005E7C0 0005B8A0  EC 00 F8 2A */	fadds f0, f0, f31
/* 8005E7C4 0005B8A4  D0 1F 00 44 */	stfs f0, 0x44(r31)
/* 8005E7C8 0005B8A8  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005E7CC 0005B8AC  C0 3F 00 44 */	lfs f1, 0x44(r31)
/* 8005E7D0 0005B8B0  C0 03 00 94 */	lfs f0, 0x94(r3)
/* 8005E7D4 0005B8B4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005E7D8 0005B8B8  4C 41 13 82 */	cror eq, gt, eq
/* 8005E7DC 0005B8BC  40 82 00 0C */	bne .L_8005E7E8
/* 8005E7E0 0005B8C0  38 60 00 08 */	li r3, 0x8
/* 8005E7E4 0005B8C4  48 00 00 08 */	b .L_8005E7EC
.L_8005E7E8:
/* 8005E7E8 0005B8C8  38 60 00 07 */	li r3, 0x7
.L_8005E7EC:
/* 8005E7EC 0005B8CC  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8005E7F0 0005B8D0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005E7F4 0005B8D4  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8005E7F8 0005B8D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005E7FC 0005B8DC  7C 08 03 A6 */	mtlr r0
/* 8005E800 0005B8E0  38 21 00 20 */	addi r1, r1, 0x20
/* 8005E804 0005B8E4  4E 80 00 20 */	blr
.endfn "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimFf"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_aim::apply_turn() const
.fn "apply_turn__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimCFv", local
/* 8005E808 0005B8E8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8005E80C 0005B8EC  7C 08 02 A6 */	mflr r0
/* 8005E810 0005B8F0  38 63 00 20 */	addi r3, r3, 0x20
/* 8005E814 0005B8F4  90 01 00 44 */	stw r0, 0x44(r1)
/* 8005E818 0005B8F8  38 81 00 08 */	addi r4, r1, 0x8
/* 8005E81C 0005B8FC  4B FD 46 E5 */	bl xQuatToMat__FPC5xQuatP7xMat3x3
/* 8005E820 0005B900  C0 22 89 B8 */	lfs f1, "@1551"@sda21(r2)
/* 8005E824 0005B904  3C 60 80 3C */	lis r3, globals@ha
/* 8005E828 0005B908  38 63 05 58 */	addi r3, r3, globals@l
/* 8005E82C 0005B90C  38 81 00 08 */	addi r4, r1, 0x8
/* 8005E830 0005B910  FC 40 08 90 */	fmr f2, f1
/* 8005E834 0005B914  FC 60 08 90 */	fmr f3, f1
/* 8005E838 0005B918  4B FA F2 DD */	bl xCameraRotate__FP7xCameraRC7xMat3x3fff
/* 8005E83C 0005B91C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8005E840 0005B920  7C 08 03 A6 */	mtlr r0
/* 8005E844 0005B924  38 21 00 40 */	addi r1, r1, 0x40
/* 8005E848 0005B928  4E 80 00 20 */	blr
.endfn "apply_turn__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimCFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_aim::turn(float)
.fn "turn__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimFf", local
/* 8005E84C 0005B92C  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8005E850 0005B930  7C 08 02 A6 */	mflr r0
/* 8005E854 0005B934  90 01 00 84 */	stw r0, 0x84(r1)
/* 8005E858 0005B938  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 8005E85C 0005B93C  F3 E1 00 78 */	psq_st f31, 0x78(r1), 0, qr0
/* 8005E860 0005B940  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 8005E864 0005B944  7C 7F 1B 78 */	mr r31, r3
/* 8005E868 0005B948  FF E0 08 90 */	fmr f31, f1
/* 8005E86C 0005B94C  4B FF 98 9D */	bl "get_player_loc__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005E870 0005B950  80 C3 00 00 */	lwz r6, 0x0(r3)
/* 8005E874 0005B954  3C 80 80 3C */	lis r4, globals@ha
/* 8005E878 0005B958  80 03 00 04 */	lwz r0, 0x4(r3)
/* 8005E87C 0005B95C  38 84 05 58 */	addi r4, r4, globals@l
/* 8005E880 0005B960  38 84 00 44 */	addi r4, r4, 0x44
/* 8005E884 0005B964  38 A1 00 20 */	addi r5, r1, 0x20
/* 8005E888 0005B968  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005E88C 0005B96C  90 C1 00 20 */	stw r6, 0x20(r1)
/* 8005E890 0005B970  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 8005E894 0005B974  80 03 00 08 */	lwz r0, 0x8(r3)
/* 8005E898 0005B978  38 61 00 08 */	addi r3, r1, 0x8
/* 8005E89C 0005B97C  90 01 00 28 */	stw r0, 0x28(r1)
/* 8005E8A0 0005B980  80 CD 81 80 */	lwz r6, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005E8A4 0005B984  C0 06 00 74 */	lfs f0, 0x74(r6)
/* 8005E8A8 0005B988  EC 01 00 2A */	fadds f0, f1, f0
/* 8005E8AC 0005B98C  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8005E8B0 0005B990  4B FA C9 1D */	bl __mi__5xVec3CFRC5xVec3
/* 8005E8B4 0005B994  80 C1 00 08 */	lwz r6, 0x8(r1)
/* 8005E8B8 0005B998  38 61 00 2C */	addi r3, r1, 0x2c
/* 8005E8BC 0005B99C  80 A1 00 0C */	lwz r5, 0xc(r1)
/* 8005E8C0 0005B9A0  38 81 00 14 */	addi r4, r1, 0x14
/* 8005E8C4 0005B9A4  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8005E8C8 0005B9A8  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8005E8CC 0005B9AC  90 A1 00 18 */	stw r5, 0x18(r1)
/* 8005E8D0 0005B9B0  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8005E8D4 0005B9B4  4B FD 36 DD */	bl xMat3x3LookVec__FP7xMat3x3PC5xVec3
/* 8005E8D8 0005B9B8  38 7F 00 30 */	addi r3, r31, 0x30
/* 8005E8DC 0005B9BC  38 81 00 2C */	addi r4, r1, 0x2c
/* 8005E8E0 0005B9C0  4B FD 43 A5 */	bl xQuatFromMat__FP5xQuatPC7xMat3x3
/* 8005E8E4 0005B9C4  FC 20 F8 90 */	fmr f1, f31
/* 8005E8E8 0005B9C8  4B FA FE C9 */	bl xexp__Ff
/* 8005E8EC 0005B9CC  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005E8F0 0005B9D0  C0 02 89 C0 */	lfs f0, "@1720"@sda21(r2)
/* 8005E8F4 0005B9D4  C0 43 00 90 */	lfs f2, 0x90(r3)
/* 8005E8F8 0005B9D8  EC 22 00 72 */	fmuls f1, f2, f1
/* 8005E8FC 0005B9DC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005E900 0005B9E0  4C 41 13 82 */	cror eq, gt, eq
/* 8005E904 0005B9E4  40 82 00 14 */	bne .L_8005E918
/* 8005E908 0005B9E8  38 7F 00 20 */	addi r3, r31, 0x20
/* 8005E90C 0005B9EC  38 9F 00 30 */	addi r4, r31, 0x30
/* 8005E910 0005B9F0  4B FA FD DD */	bl __as__5xQuatFRC5xQuat
/* 8005E914 0005B9F4  48 00 00 14 */	b .L_8005E928
.L_8005E918:
/* 8005E918 0005B9F8  38 7F 00 20 */	addi r3, r31, 0x20
/* 8005E91C 0005B9FC  38 BF 00 30 */	addi r5, r31, 0x30
/* 8005E920 0005BA00  7C 64 1B 78 */	mr r4, r3
/* 8005E924 0005BA04  4B FD 47 AD */	bl xQuatSlerp__FP5xQuatPC5xQuatPC5xQuatf
.L_8005E928:
/* 8005E928 0005BA08  E3 E1 00 78 */	psq_l f31, 0x78(r1), 0, qr0
/* 8005E92C 0005BA0C  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8005E930 0005BA10  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 8005E934 0005BA14  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 8005E938 0005BA18  7C 08 03 A6 */	mtlr r0
/* 8005E93C 0005BA1C  38 21 00 80 */	addi r1, r1, 0x80
/* 8005E940 0005BA20  4E 80 00 20 */	blr
.endfn "turn__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimFf"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_aim::collide_inward()
.fn "collide_inward__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimFv", local
/* 8005E944 0005BA24  94 21 FE 70 */	stwu r1, -0x190(r1)
/* 8005E948 0005BA28  7C 08 02 A6 */	mflr r0
/* 8005E94C 0005BA2C  3C 60 80 3C */	lis r3, globals@ha
/* 8005E950 0005BA30  90 01 01 94 */	stw r0, 0x194(r1)
/* 8005E954 0005BA34  93 E1 01 8C */	stw r31, 0x18c(r1)
/* 8005E958 0005BA38  3B E3 05 58 */	addi r31, r3, globals@l
/* 8005E95C 0005BA3C  93 C1 01 88 */	stw r30, 0x188(r1)
/* 8005E960 0005BA40  93 A1 01 84 */	stw r29, 0x184(r1)
/* 8005E964 0005BA44  4B FF 97 A5 */	bl "get_player_loc__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005E968 0005BA48  80 C3 00 00 */	lwz r6, 0x0(r3)
/* 8005E96C 0005BA4C  3C 80 80 3C */	lis r4, globals@ha
/* 8005E970 0005BA50  80 03 00 04 */	lwz r0, 0x4(r3)
/* 8005E974 0005BA54  38 A4 05 58 */	addi r5, r4, globals@l
/* 8005E978 0005BA58  38 81 00 08 */	addi r4, r1, 0x8
/* 8005E97C 0005BA5C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8005E980 0005BA60  38 A5 00 44 */	addi r5, r5, 0x44
/* 8005E984 0005BA64  90 C1 00 08 */	stw r6, 0x8(r1)
/* 8005E988 0005BA68  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8005E98C 0005BA6C  80 03 00 08 */	lwz r0, 0x8(r3)
/* 8005E990 0005BA70  38 61 00 38 */	addi r3, r1, 0x38
/* 8005E994 0005BA74  90 01 00 10 */	stw r0, 0x10(r1)
/* 8005E998 0005BA78  80 CD 81 80 */	lwz r6, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005E99C 0005BA7C  C0 06 00 74 */	lfs f0, 0x74(r6)
/* 8005E9A0 0005BA80  EC 01 00 2A */	fadds f0, f1, f0
/* 8005E9A4 0005BA84  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8005E9A8 0005BA88  C0 22 8A F4 */	lfs f1, "@3822"@sda21(r2)
/* 8005E9AC 0005BA8C  4B FB 35 B9 */	bl xSweptSpherePrepare__FP12xSweptSphereP5xVec3P5xVec3f
/* 8005E9B0 0005BA90  3C 80 80 3C */	lis r4, globals@ha
/* 8005E9B4 0005BA94  38 61 00 38 */	addi r3, r1, 0x38
/* 8005E9B8 0005BA98  3B C4 05 58 */	addi r30, r4, globals@l
/* 8005E9BC 0005BA9C  80 9E 1F C0 */	lwz r4, 0x1fc0(r30)
/* 8005E9C0 0005BAA0  80 84 00 44 */	lwz r4, 0x44(r4)
/* 8005E9C4 0005BAA4  4B FB 4E 25 */	bl xSweptSphereToEnv__FP12xSweptSphereP4xEnv
/* 8005E9C8 0005BAA8  38 61 00 14 */	addi r3, r1, 0x14
/* 8005E9CC 0005BAAC  38 81 00 38 */	addi r4, r1, 0x38
/* 8005E9D0 0005BAB0  4B FE FB 0D */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 8005E9D4 0005BAB4  3B A1 00 20 */	addi r29, r1, 0x20
/* 8005E9D8 0005BAB8  38 81 00 44 */	addi r4, r1, 0x44
/* 8005E9DC 0005BABC  7F A3 EB 78 */	mr r3, r29
/* 8005E9E0 0005BAC0  38 A1 00 38 */	addi r5, r1, 0x38
/* 8005E9E4 0005BAC4  4B FA FC AD */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 8005E9E8 0005BAC8  7F A3 EB 78 */	mr r3, r29
/* 8005E9EC 0005BACC  4B FA FC 65 */	bl xVec3Length__FPC5xVec3
/* 8005E9F0 0005BAD0  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8005E9F4 0005BAD4  FC 20 08 18 */	frsp f1, f1
/* 8005E9F8 0005BAD8  C0 02 89 D4 */	lfs f0, "@1731"@sda21(r2)
/* 8005E9FC 0005BADC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005EA00 0005BAE0  40 81 00 08 */	ble .L_8005EA08
/* 8005EA04 0005BAE4  48 00 00 08 */	b .L_8005EA0C
.L_8005EA08:
/* 8005EA08 0005BAE8  FC 20 00 90 */	fmr f1, f0
.L_8005EA0C:
/* 8005EA0C 0005BAEC  C0 02 89 C0 */	lfs f0, "@1720"@sda21(r2)
/* 8005EA10 0005BAF0  7F A3 EB 78 */	mr r3, r29
/* 8005EA14 0005BAF4  7F A4 EB 78 */	mr r4, r29
/* 8005EA18 0005BAF8  EC 20 08 24 */	fdivs f1, f0, f1
/* 8005EA1C 0005BAFC  4B FA C6 75 */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 8005EA20 0005BB00  38 60 08 00 */	li r3, 0x800
/* 8005EA24 0005BB04  54 60 05 6B */	rlwinm. r0, r3, 0, 21, 21
/* 8005EA28 0005BB08  90 61 00 34 */	stw r3, 0x34(r1)
/* 8005EA2C 0005BB0C  40 82 00 14 */	bne .L_8005EA40
/* 8005EA30 0005BB10  60 60 04 00 */	ori r0, r3, 0x400
/* 8005EA34 0005BB14  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005EA38 0005BB18  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005EA3C 0005BB1C  D0 01 00 2C */	stfs f0, 0x2c(r1)
.L_8005EA40:
/* 8005EA40 0005BB20  3C 80 80 01 */	lis r4, SweptSphereHitsCameraEnt__FP6xSceneP5xRay3P7xQCDataP4xEntPv@ha
/* 8005EA44 0005BB24  3C 60 80 3D */	lis r3, colls_grid@ha
/* 8005EA48 0005BB28  3B A1 00 F0 */	addi r29, r1, 0xf0
/* 8005EA4C 0005BB2C  38 A1 00 14 */	addi r5, r1, 0x14
/* 8005EA50 0005BB30  38 C4 BB BC */	addi r6, r4, SweptSphereHitsCameraEnt__FP6xSceneP5xRay3P7xQCDataP4xEntPv@l
/* 8005EA54 0005BB34  80 9E 1F C0 */	lwz r4, 0x1fc0(r30)
/* 8005EA58 0005BB38  38 63 A6 D8 */	addi r3, r3, colls_grid@l
/* 8005EA5C 0005BB3C  7F A7 EB 78 */	mr r7, r29
/* 8005EA60 0005BB40  39 01 00 38 */	addi r8, r1, 0x38
/* 8005EA64 0005BB44  4B FE 0E 2D */	bl xRayHitsGrid__FP5xGridP6xSceneP5xRay3PFP6xSceneP5xRay3P7xQCDataP4xEntPv_vP7xQCDataPv
/* 8005EA68 0005BB48  3C 60 80 3D */	lis r3, colls_oso_grid@ha
/* 8005EA6C 0005BB4C  3C A0 80 01 */	lis r5, SweptSphereHitsCameraEnt__FP6xSceneP5xRay3P7xQCDataP4xEntPv@ha
/* 8005EA70 0005BB50  38 C5 BB BC */	addi r6, r5, SweptSphereHitsCameraEnt__FP6xSceneP5xRay3P7xQCDataP4xEntPv@l
/* 8005EA74 0005BB54  80 9E 1F C0 */	lwz r4, 0x1fc0(r30)
/* 8005EA78 0005BB58  38 63 A7 74 */	addi r3, r3, colls_oso_grid@l
/* 8005EA7C 0005BB5C  7F A7 EB 78 */	mr r7, r29
/* 8005EA80 0005BB60  38 A1 00 14 */	addi r5, r1, 0x14
/* 8005EA84 0005BB64  39 01 00 38 */	addi r8, r1, 0x38
/* 8005EA88 0005BB68  4B FE 0E 09 */	bl xRayHitsGrid__FP5xGridP6xSceneP5xRay3PFP6xSceneP5xRay3P7xQCDataP4xEntPv_vP7xQCDataPv
/* 8005EA8C 0005BB6C  C0 A1 01 14 */	lfs f5, 0x114(r1)
/* 8005EA90 0005BB70  C0 01 00 54 */	lfs f0, 0x54(r1)
/* 8005EA94 0005BB74  FC 05 00 00 */	fcmpu cr0, f5, f0
/* 8005EA98 0005BB78  41 82 00 48 */	beq .L_8005EAE0
/* 8005EA9C 0005BB7C  C0 02 89 C8 */	lfs f0, "@1728"@sda21(r2)
/* 8005EAA0 0005BB80  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 8005EAA4 0005BB84  40 81 00 08 */	ble .L_8005EAAC
/* 8005EAA8 0005BB88  48 00 00 08 */	b .L_8005EAB0
.L_8005EAAC:
/* 8005EAAC 0005BB8C  FC A0 00 90 */	fmr f5, f0
.L_8005EAB0:
/* 8005EAB0 0005BB90  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 8005EAB4 0005BB94  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8005EAB8 0005BB98  C0 61 00 24 */	lfs f3, 0x24(r1)
/* 8005EABC 0005BB9C  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 8005EAC0 0005BBA0  EC 85 00 7A */	fmadds f4, f5, f1, f0
/* 8005EAC4 0005BBA4  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 8005EAC8 0005BBA8  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8005EACC 0005BBAC  EC 45 10 FA */	fmadds f2, f5, f3, f2
/* 8005EAD0 0005BBB0  D0 9F 00 44 */	stfs f4, 0x44(r31)
/* 8005EAD4 0005BBB4  EC 05 00 7A */	fmadds f0, f5, f1, f0
/* 8005EAD8 0005BBB8  D0 5F 00 48 */	stfs f2, 0x48(r31)
/* 8005EADC 0005BBBC  D0 1F 00 4C */	stfs f0, 0x4c(r31)
.L_8005EAE0:
/* 8005EAE0 0005BBC0  80 01 01 94 */	lwz r0, 0x194(r1)
/* 8005EAE4 0005BBC4  83 E1 01 8C */	lwz r31, 0x18c(r1)
/* 8005EAE8 0005BBC8  83 C1 01 88 */	lwz r30, 0x188(r1)
/* 8005EAEC 0005BBCC  83 A1 01 84 */	lwz r29, 0x184(r1)
/* 8005EAF0 0005BBD0  7C 08 03 A6 */	mtlr r0
/* 8005EAF4 0005BBD4  38 21 01 90 */	addi r1, r1, 0x190
/* 8005EAF8 0005BBD8  4E 80 00 20 */	blr
.endfn "collide_inward__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_aim::apply_motion() const
.fn "apply_motion__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimCFv", local
/* 8005EAFC 0005BBDC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005EB00 0005BBE0  7C 08 02 A6 */	mflr r0
/* 8005EB04 0005BBE4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005EB08 0005BBE8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8005EB0C 0005BBEC  7C 7F 1B 78 */	mr r31, r3
/* 8005EB10 0005BBF0  4B FF 95 F9 */	bl "get_player_loc__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005EB14 0005BBF4  80 83 00 00 */	lwz r4, 0x0(r3)
/* 8005EB18 0005BBF8  80 03 00 04 */	lwz r0, 0x4(r3)
/* 8005EB1C 0005BBFC  C0 3F 00 08 */	lfs f1, 0x8(r31)
/* 8005EB20 0005BC00  90 81 00 08 */	stw r4, 0x8(r1)
/* 8005EB24 0005BC04  90 01 00 0C */	stw r0, 0xc(r1)
/* 8005EB28 0005BC08  80 03 00 08 */	lwz r0, 0x8(r3)
/* 8005EB2C 0005BC0C  90 01 00 10 */	stw r0, 0x10(r1)
/* 8005EB30 0005BC10  48 06 63 1D */	bl isin__Ff
/* 8005EB34 0005BC14  C0 7F 00 18 */	lfs f3, 0x18(r31)
/* 8005EB38 0005BC18  C0 01 00 08 */	lfs f0, 0x8(r1)
/* 8005EB3C 0005BC1C  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8005EB40 0005BC20  EC 63 00 7A */	fmadds f3, f3, f1, f0
/* 8005EB44 0005BC24  C0 1F 00 10 */	lfs f0, 0x10(r31)
/* 8005EB48 0005BC28  C0 3F 00 08 */	lfs f1, 0x8(r31)
/* 8005EB4C 0005BC2C  EC 02 00 2A */	fadds f0, f2, f0
/* 8005EB50 0005BC30  D0 61 00 08 */	stfs f3, 0x8(r1)
/* 8005EB54 0005BC34  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8005EB58 0005BC38  48 06 63 39 */	bl icos__Ff
/* 8005EB5C 0005BC3C  C0 5F 00 18 */	lfs f2, 0x18(r31)
/* 8005EB60 0005BC40  3C 60 80 3C */	lis r3, globals@ha
/* 8005EB64 0005BC44  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8005EB68 0005BC48  38 63 05 58 */	addi r3, r3, globals@l
/* 8005EB6C 0005BC4C  38 81 00 08 */	addi r4, r1, 0x8
/* 8005EB70 0005BC50  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8005EB74 0005BC54  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8005EB78 0005BC58  4B FA EB A1 */	bl xCameraMove__FP7xCameraRC5xVec3
/* 8005EB7C 0005BC5C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005EB80 0005BC60  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8005EB84 0005BC64  7C 08 03 A6 */	mtlr r0
/* 8005EB88 0005BC68  38 21 00 20 */	addi r1, r1, 0x20
/* 8005EB8C 0005BC6C  4E 80 00 20 */	blr
.endfn "apply_motion__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimCFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_aim::stop(float)
.fn "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimFf", local
/* 8005EB90 0005BC70  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005EB94 0005BC74  7C 08 02 A6 */	mflr r0
/* 8005EB98 0005BC78  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005EB9C 0005BC7C  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8005EBA0 0005BC80  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8005EBA4 0005BC84  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005EBA8 0005BC88  FF E0 08 90 */	fmr f31, f1
/* 8005EBAC 0005BC8C  7C 7F 1B 78 */	mr r31, r3
/* 8005EBB0 0005BC90  80 AD 81 80 */	lwz r5, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005EBB4 0005BC94  38 7F 00 10 */	addi r3, r31, 0x10
/* 8005EBB8 0005BC98  38 9F 00 14 */	addi r4, r31, 0x14
/* 8005EBBC 0005BC9C  FC 40 F8 90 */	fmr f2, f31
/* 8005EBC0 0005BCA0  C0 25 00 7C */	lfs f1, 0x7c(r5)
/* 8005EBC4 0005BCA4  4B FD 29 B9 */	bl xAccelStop__FRfRfff
/* 8005EBC8 0005BCA8  80 AD 81 80 */	lwz r5, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005EBCC 0005BCAC  FC 40 F8 90 */	fmr f2, f31
/* 8005EBD0 0005BCB0  38 7F 00 18 */	addi r3, r31, 0x18
/* 8005EBD4 0005BCB4  38 9F 00 1C */	addi r4, r31, 0x1c
/* 8005EBD8 0005BCB8  C0 25 00 7C */	lfs f1, 0x7c(r5)
/* 8005EBDC 0005BCBC  4B FD 29 A1 */	bl xAccelStop__FRfRfff
/* 8005EBE0 0005BCC0  80 AD 81 80 */	lwz r5, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005EBE4 0005BCC4  FC 40 F8 90 */	fmr f2, f31
/* 8005EBE8 0005BCC8  38 7F 00 08 */	addi r3, r31, 0x8
/* 8005EBEC 0005BCCC  38 9F 00 0C */	addi r4, r31, 0xc
/* 8005EBF0 0005BCD0  C0 25 00 84 */	lfs f1, 0x84(r5)
/* 8005EBF4 0005BCD4  4B FD 29 89 */	bl xAccelStop__FRfRfff
/* 8005EBF8 0005BCD8  C0 3F 00 08 */	lfs f1, 0x8(r31)
/* 8005EBFC 0005BCDC  4B FA FB F9 */	bl xrmod__Ff
/* 8005EC00 0005BCE0  D0 3F 00 08 */	stfs f1, 0x8(r31)
/* 8005EC04 0005BCE4  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8005EC08 0005BCE8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005EC0C 0005BCEC  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8005EC10 0005BCF0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005EC14 0005BCF4  7C 08 03 A6 */	mtlr r0
/* 8005EC18 0005BCF8  38 21 00 20 */	addi r1, r1, 0x20
/* 8005EC1C 0005BCFC  4E 80 00 20 */	blr
.endfn "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimFf"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_aim::move(float)
.fn "move__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimFf", local
/* 8005EC20 0005BD00  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005EC24 0005BD04  7C 08 02 A6 */	mflr r0
/* 8005EC28 0005BD08  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005EC2C 0005BD0C  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8005EC30 0005BD10  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8005EC34 0005BD14  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005EC38 0005BD18  FF E0 08 90 */	fmr f31, f1
/* 8005EC3C 0005BD1C  80 AD 81 80 */	lwz r5, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005EC40 0005BD20  7C 7F 1B 78 */	mr r31, r3
/* 8005EC44 0005BD24  C0 25 00 7C */	lfs f1, 0x7c(r5)
/* 8005EC48 0005BD28  38 7F 00 10 */	addi r3, r31, 0x10
/* 8005EC4C 0005BD2C  FC 40 F8 90 */	fmr f2, f31
/* 8005EC50 0005BD30  C0 65 00 74 */	lfs f3, 0x74(r5)
/* 8005EC54 0005BD34  38 9F 00 14 */	addi r4, r31, 0x14
/* 8005EC58 0005BD38  C0 85 00 80 */	lfs f4, 0x80(r5)
/* 8005EC5C 0005BD3C  4B FD 24 F9 */	bl xAccelMove__FRfRfffff
/* 8005EC60 0005BD40  80 AD 81 80 */	lwz r5, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005EC64 0005BD44  FC 40 F8 90 */	fmr f2, f31
/* 8005EC68 0005BD48  38 7F 00 18 */	addi r3, r31, 0x18
/* 8005EC6C 0005BD4C  38 9F 00 1C */	addi r4, r31, 0x1c
/* 8005EC70 0005BD50  C0 25 00 7C */	lfs f1, 0x7c(r5)
/* 8005EC74 0005BD54  C0 65 00 70 */	lfs f3, 0x70(r5)
/* 8005EC78 0005BD58  C0 85 00 80 */	lfs f4, 0x80(r5)
/* 8005EC7C 0005BD5C  4B FD 24 D9 */	bl xAccelMove__FRfRfffff
/* 8005EC80 0005BD60  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005EC84 0005BD64  80 8D 81 80 */	lwz r4, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005EC88 0005BD68  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005EC8C 0005BD6C  C0 42 89 C0 */	lfs f2, "@1720"@sda21(r2)
/* 8005EC90 0005BD70  C0 03 00 48 */	lfs f0, 0x48(r3)
/* 8005EC94 0005BD74  C0 24 00 84 */	lfs f1, 0x84(r4)
/* 8005EC98 0005BD78  FC 80 00 50 */	fneg f4, f0
/* 8005EC9C 0005BD7C  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005ECA0 0005BD80  C0 64 00 88 */	lfs f3, 0x88(r4)
/* 8005ECA4 0005BD84  FC A0 22 10 */	fabs f5, f4
/* 8005ECA8 0005BD88  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8005ECAC 0005BD8C  FC A0 28 18 */	frsp f5, f5
/* 8005ECB0 0005BD90  EC 42 28 28 */	fsubs f2, f2, f5
/* 8005ECB4 0005BD94  EC 22 00 72 */	fmuls f1, f2, f1
/* 8005ECB8 0005BD98  EC 25 08 FA */	fmadds f1, f5, f3, f1
/* 8005ECBC 0005BD9C  40 80 00 14 */	bge .L_8005ECD0
/* 8005ECC0 0005BDA0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005ECC4 0005BDA4  40 81 00 18 */	ble .L_8005ECDC
/* 8005ECC8 0005BDA8  FC 20 08 50 */	fneg f1, f1
/* 8005ECCC 0005BDAC  48 00 00 10 */	b .L_8005ECDC
.L_8005ECD0:
/* 8005ECD0 0005BDB0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005ECD4 0005BDB4  40 80 00 08 */	bge .L_8005ECDC
/* 8005ECD8 0005BDB8  FC 20 08 50 */	fneg f1, f1
.L_8005ECDC:
/* 8005ECDC 0005BDBC  C0 04 00 8C */	lfs f0, 0x8c(r4)
/* 8005ECE0 0005BDC0  FC 40 F8 90 */	fmr f2, f31
/* 8005ECE4 0005BDC4  38 7F 00 08 */	addi r3, r31, 0x8
/* 8005ECE8 0005BDC8  38 9F 00 0C */	addi r4, r31, 0xc
/* 8005ECEC 0005BDCC  EC 65 00 32 */	fmuls f3, f5, f0
/* 8005ECF0 0005BDD0  4B FD 27 A1 */	bl xAccelMove__FRfRffff
/* 8005ECF4 0005BDD4  C0 3F 00 08 */	lfs f1, 0x8(r31)
/* 8005ECF8 0005BDD8  4B FA FA FD */	bl xrmod__Ff
/* 8005ECFC 0005BDDC  D0 3F 00 08 */	stfs f1, 0x8(r31)
/* 8005ED00 0005BDE0  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8005ED04 0005BDE4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005ED08 0005BDE8  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8005ED0C 0005BDEC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005ED10 0005BDF0  7C 08 03 A6 */	mtlr r0
/* 8005ED14 0005BDF4  38 21 00 20 */	addi r1, r1, 0x20
/* 8005ED18 0005BDF8  4E 80 00 20 */	blr
.endfn "move__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimFf"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_seize::start()
.fn "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18state_camera_seizeFv", local
/* 8005ED1C 0005BDFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005ED20 0005BE00  7C 08 02 A6 */	mflr r0
/* 8005ED24 0005BE04  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005ED28 0005BE08  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005ED2C 0005BE0C  7C 7F 1B 78 */	mr r31, r3
/* 8005ED30 0005BE10  4B FF 88 65 */	bl "capture_camera__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005ED34 0005BE14  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005ED38 0005BE18  3C 60 80 3C */	lis r3, globals@ha
/* 8005ED3C 0005BE1C  38 83 05 58 */	addi r4, r3, globals@l
/* 8005ED40 0005BE20  38 7F 00 0C */	addi r3, r31, 0xc
/* 8005ED44 0005BE24  D0 1F 00 08 */	stfs f0, 0x8(r31)
/* 8005ED48 0005BE28  38 84 00 44 */	addi r4, r4, 0x44
/* 8005ED4C 0005BE2C  4B FA C5 19 */	bl __as__5xVec3FRC5xVec3
/* 8005ED50 0005BE30  3C 80 80 3C */	lis r4, globals@ha
/* 8005ED54 0005BE34  38 7F 00 18 */	addi r3, r31, 0x18
/* 8005ED58 0005BE38  38 84 05 58 */	addi r4, r4, globals@l
/* 8005ED5C 0005BE3C  38 84 00 14 */	addi r4, r4, 0x14
/* 8005ED60 0005BE40  4B FD 3F 25 */	bl xQuatFromMat__FP5xQuatPC7xMat3x3
/* 8005ED64 0005BE44  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005ED68 0005BE48  D0 1F 00 48 */	stfs f0, 0x48(r31)
/* 8005ED6C 0005BE4C  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005ED70 0005BE50  D0 1F 00 4C */	stfs f0, 0x4c(r31)
/* 8005ED74 0005BE54  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005ED78 0005BE58  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 8005ED7C 0005BE5C  4B FF B5 31 */	bl "show_hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005ED80 0005BE60  C0 22 89 B8 */	lfs f1, "@1551"@sda21(r2)
/* 8005ED84 0005BE64  4B FF 92 5D */	bl "distort_screen__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Ff"
/* 8005ED88 0005BE68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005ED8C 0005BE6C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005ED90 0005BE70  7C 08 03 A6 */	mtlr r0
/* 8005ED94 0005BE74  38 21 00 10 */	addi r1, r1, 0x10
/* 8005ED98 0005BE78  4E 80 00 20 */	blr
.endfn "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18state_camera_seizeFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_seize::stop()
.fn "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18state_camera_seizeFv", local
/* 8005ED9C 0005BE7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005EDA0 0005BE80  7C 08 02 A6 */	mflr r0
/* 8005EDA4 0005BE84  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005EDA8 0005BE88  4B FF 88 21 */	bl "release_camera__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005EDAC 0005BE8C  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005EDB0 0005BE90  3C A0 80 3C */	lis r5, globals@ha
/* 8005EDB4 0005BE94  38 83 C2 A4 */	addi r4, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005EDB8 0005BE98  C0 24 01 00 */	lfs f1, 0x100(r4)
/* 8005EDBC 0005BE9C  38 65 05 58 */	addi r3, r5, globals@l
/* 8005EDC0 0005BEA0  4B FA F6 D1 */	bl xCameraSetFOV__FP7xCameraf
/* 8005EDC4 0005BEA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005EDC8 0005BEA8  7C 08 03 A6 */	mtlr r0
/* 8005EDCC 0005BEAC  38 21 00 10 */	addi r1, r1, 0x10
/* 8005EDD0 0005BEB0  4E 80 00 20 */	blr
.endfn "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18state_camera_seizeFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_seize::update(float)
.fn "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18state_camera_seizeFf", local
/* 8005EDD4 0005BEB4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8005EDD8 0005BEB8  7C 08 02 A6 */	mflr r0
/* 8005EDDC 0005BEBC  90 01 00 44 */	stw r0, 0x44(r1)
/* 8005EDE0 0005BEC0  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8005EDE4 0005BEC4  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 8005EDE8 0005BEC8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8005EDEC 0005BECC  7C 7F 1B 78 */	mr r31, r3
/* 8005EDF0 0005BED0  C0 03 00 08 */	lfs f0, 0x8(r3)
/* 8005EDF4 0005BED4  EC 00 08 2A */	fadds f0, f0, f1
/* 8005EDF8 0005BED8  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 8005EDFC 0005BEDC  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005EE00 0005BEE0  C0 3F 00 08 */	lfs f1, 0x8(r31)
/* 8005EE04 0005BEE4  C0 03 00 98 */	lfs f0, 0x98(r3)
/* 8005EE08 0005BEE8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005EE0C 0005BEEC  4C 41 13 82 */	cror eq, gt, eq
/* 8005EE10 0005BEF0  40 82 00 0C */	bne .L_8005EE1C
/* 8005EE14 0005BEF4  38 60 00 09 */	li r3, 0x9
/* 8005EE18 0005BEF8  48 00 00 A0 */	b .L_8005EEB8
.L_8005EE1C:
/* 8005EE1C 0005BEFC  EC 21 00 24 */	fdivs f1, f1, f0
/* 8005EE20 0005BF00  48 00 02 E1 */	bl xSCurve__Ff
/* 8005EE24 0005BF04  FF E0 08 90 */	fmr f31, f1
/* 8005EE28 0005BF08  7F E3 FB 78 */	mr r3, r31
/* 8005EE2C 0005BF0C  48 00 02 2D */	bl "update_move__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18state_camera_seizeFf"
/* 8005EE30 0005BF10  FC 20 F8 90 */	fmr f1, f31
/* 8005EE34 0005BF14  7F E3 FB 78 */	mr r3, r31
/* 8005EE38 0005BF18  48 00 01 35 */	bl "update_turn__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18state_camera_seizeFf"
/* 8005EE3C 0005BF1C  4B FF DE 35 */	bl "get_missle_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005EE40 0005BF20  3C 80 80 3C */	lis r4, globals@ha
/* 8005EE44 0005BF24  7C 66 1B 78 */	mr r6, r3
/* 8005EE48 0005BF28  38 A4 05 58 */	addi r5, r4, globals@l
/* 8005EE4C 0005BF2C  38 61 00 08 */	addi r3, r1, 0x8
/* 8005EE50 0005BF30  38 86 00 30 */	addi r4, r6, 0x30
/* 8005EE54 0005BF34  38 A5 00 44 */	addi r5, r5, 0x44
/* 8005EE58 0005BF38  4B FA C3 75 */	bl __mi__5xVec3CFRC5xVec3
/* 8005EE5C 0005BF3C  80 A1 00 08 */	lwz r5, 0x8(r1)
/* 8005EE60 0005BF40  38 61 00 14 */	addi r3, r1, 0x14
/* 8005EE64 0005BF44  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8005EE68 0005BF48  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8005EE6C 0005BF4C  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8005EE70 0005BF50  90 81 00 18 */	stw r4, 0x18(r1)
/* 8005EE74 0005BF54  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8005EE78 0005BF58  4B FA C3 31 */	bl length__5xVec3CFv
/* 8005EE7C 0005BF5C  7F E3 FB 78 */	mr r3, r31
/* 8005EE80 0005BF60  48 00 00 55 */	bl "refresh_missle_alpha__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18state_camera_seizeFf"
/* 8005EE84 0005BF64  80 8D 81 80 */	lwz r4, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005EE88 0005BF68  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005EE8C 0005BF6C  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005EE90 0005BF70  3C A0 80 3C */	lis r5, globals@ha
/* 8005EE94 0005BF74  C0 23 01 00 */	lfs f1, 0x100(r3)
/* 8005EE98 0005BF78  38 65 05 58 */	addi r3, r5, globals@l
/* 8005EE9C 0005BF7C  C0 04 00 A4 */	lfs f0, 0xa4(r4)
/* 8005EEA0 0005BF80  EC 00 08 28 */	fsubs f0, f0, f1
/* 8005EEA4 0005BF84  EC 3F 08 3A */	fmadds f1, f31, f0, f1
/* 8005EEA8 0005BF88  4B FA F5 E9 */	bl xCameraSetFOV__FP7xCameraf
/* 8005EEAC 0005BF8C  FC 20 F8 90 */	fmr f1, f31
/* 8005EEB0 0005BF90  4B FF 91 31 */	bl "distort_screen__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Ff"
/* 8005EEB4 0005BF94  38 60 00 08 */	li r3, 0x8
.L_8005EEB8:
/* 8005EEB8 0005BF98  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8005EEBC 0005BF9C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8005EEC0 0005BFA0  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8005EEC4 0005BFA4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8005EEC8 0005BFA8  7C 08 03 A6 */	mtlr r0
/* 8005EECC 0005BFAC  38 21 00 40 */	addi r1, r1, 0x40
/* 8005EED0 0005BFB0  4E 80 00 20 */	blr
.endfn "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18state_camera_seizeFf"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_seize::refresh_missle_alpha(float)
.fn "refresh_missle_alpha__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18state_camera_seizeFf", local
/* 8005EED4 0005BFB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005EED8 0005BFB8  7C 08 02 A6 */	mflr r0
/* 8005EEDC 0005BFBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005EEE0 0005BFC0  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005EEE4 0005BFC4  C0 03 00 9C */	lfs f0, 0x9c(r3)
/* 8005EEE8 0005BFC8  C0 43 00 A0 */	lfs f2, 0xa0(r3)
/* 8005EEEC 0005BFCC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005EEF0 0005BFD0  4C 41 13 82 */	cror eq, gt, eq
/* 8005EEF4 0005BFD4  40 82 00 20 */	bne .L_8005EF14
/* 8005EEF8 0005BFD8  4B FF 86 65 */	bl "show_missle__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005EEFC 0005BFDC  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005EF00 0005BFE0  C0 02 89 C0 */	lfs f0, "@1720"@sda21(r2)
/* 8005EF04 0005BFE4  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005EF08 0005BFE8  80 63 00 68 */	lwz r3, 0x68(r3)
/* 8005EF0C 0005BFEC  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 8005EF10 0005BFF0  48 00 00 4C */	b .L_8005EF5C
.L_8005EF14:
/* 8005EF14 0005BFF4  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 8005EF18 0005BFF8  4C 40 13 82 */	cror eq, lt, eq
/* 8005EF1C 0005BFFC  40 82 00 24 */	bne .L_8005EF40
/* 8005EF20 0005C000  4B FF 86 59 */	bl "hide_missle__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005EF24 0005C004  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005EF28 0005C008  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005EF2C 0005C00C  80 63 00 68 */	lwz r3, 0x68(r3)
/* 8005EF30 0005C010  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 8005EF34 0005C014  60 00 00 02 */	ori r0, r0, 0x2
/* 8005EF38 0005C018  B0 03 00 44 */	sth r0, 0x44(r3)
/* 8005EF3C 0005C01C  48 00 00 20 */	b .L_8005EF5C
.L_8005EF40:
/* 8005EF40 0005C020  EC 22 08 28 */	fsubs f1, f2, f1
/* 8005EF44 0005C024  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005EF48 0005C028  EC 02 00 28 */	fsubs f0, f2, f0
/* 8005EF4C 0005C02C  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005EF50 0005C030  80 63 00 68 */	lwz r3, 0x68(r3)
/* 8005EF54 0005C034  EC 01 00 24 */	fdivs f0, f1, f0
/* 8005EF58 0005C038  D0 03 00 24 */	stfs f0, 0x24(r3)
.L_8005EF5C:
/* 8005EF5C 0005C03C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005EF60 0005C040  7C 08 03 A6 */	mtlr r0
/* 8005EF64 0005C044  38 21 00 10 */	addi r1, r1, 0x10
/* 8005EF68 0005C048  4E 80 00 20 */	blr
.endfn "refresh_missle_alpha__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18state_camera_seizeFf"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_seize::update_turn(float)
.fn "update_turn__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18state_camera_seizeFf", local
/* 8005EF6C 0005C04C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8005EF70 0005C050  7C 08 02 A6 */	mflr r0
/* 8005EF74 0005C054  90 01 00 54 */	stw r0, 0x54(r1)
/* 8005EF78 0005C058  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8005EF7C 0005C05C  F3 E1 00 48 */	psq_st f31, 0x48(r1), 0, qr0
/* 8005EF80 0005C060  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8005EF84 0005C064  FF E0 08 90 */	fmr f31, f1
/* 8005EF88 0005C068  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005EF8C 0005C06C  C0 02 89 C4 */	lfs f0, "@1721"@sda21(r2)
/* 8005EF90 0005C070  7C 7F 1B 78 */	mr r31, r3
/* 8005EF94 0005C074  EC 3F 08 28 */	fsubs f1, f31, f1
/* 8005EF98 0005C078  FC 20 0A 10 */	fabs f1, f1
/* 8005EF9C 0005C07C  FC 20 08 18 */	frsp f1, f1
/* 8005EFA0 0005C080  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005EFA4 0005C084  4C 40 13 82 */	cror eq, lt, eq
/* 8005EFA8 0005C088  40 82 00 28 */	bne .L_8005EFD0
/* 8005EFAC 0005C08C  4B FF DC C5 */	bl "get_missle_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005EFB0 0005C090  C0 22 89 B8 */	lfs f1, "@1551"@sda21(r2)
/* 8005EFB4 0005C094  3C A0 80 3C */	lis r5, globals@ha
/* 8005EFB8 0005C098  7C 64 1B 78 */	mr r4, r3
/* 8005EFBC 0005C09C  FC 40 08 90 */	fmr f2, f1
/* 8005EFC0 0005C0A0  38 65 05 58 */	addi r3, r5, globals@l
/* 8005EFC4 0005C0A4  FC 60 08 90 */	fmr f3, f1
/* 8005EFC8 0005C0A8  4B FA EB 4D */	bl xCameraRotate__FP7xCameraRC7xMat3x3fff
/* 8005EFCC 0005C0AC  48 00 00 70 */	b .L_8005F03C
.L_8005EFD0:
/* 8005EFD0 0005C0B0  4B FF DC A1 */	bl "get_missle_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005EFD4 0005C0B4  7C 64 1B 78 */	mr r4, r3
/* 8005EFD8 0005C0B8  38 7F 00 28 */	addi r3, r31, 0x28
/* 8005EFDC 0005C0BC  4B FD 3C A9 */	bl xQuatFromMat__FP5xQuatPC7xMat3x3
/* 8005EFE0 0005C0C0  C0 5F 00 48 */	lfs f2, 0x48(r31)
/* 8005EFE4 0005C0C4  38 7F 00 38 */	addi r3, r31, 0x38
/* 8005EFE8 0005C0C8  C0 02 89 C0 */	lfs f0, "@1720"@sda21(r2)
/* 8005EFEC 0005C0CC  38 9F 00 18 */	addi r4, r31, 0x18
/* 8005EFF0 0005C0D0  EC 3F 10 28 */	fsubs f1, f31, f2
/* 8005EFF4 0005C0D4  38 BF 00 28 */	addi r5, r31, 0x28
/* 8005EFF8 0005C0D8  EC 00 10 28 */	fsubs f0, f0, f2
/* 8005EFFC 0005C0DC  EC 21 00 24 */	fdivs f1, f1, f0
/* 8005F000 0005C0E0  4B FD 40 D1 */	bl xQuatSlerp__FP5xQuatPC5xQuatPC5xQuatf
/* 8005F004 0005C0E4  38 7F 00 18 */	addi r3, r31, 0x18
/* 8005F008 0005C0E8  38 9F 00 38 */	addi r4, r31, 0x38
/* 8005F00C 0005C0EC  4B FA F6 E1 */	bl __as__5xQuatFRC5xQuat
/* 8005F010 0005C0F0  D3 FF 00 48 */	stfs f31, 0x48(r31)
/* 8005F014 0005C0F4  38 7F 00 38 */	addi r3, r31, 0x38
/* 8005F018 0005C0F8  38 81 00 08 */	addi r4, r1, 0x8
/* 8005F01C 0005C0FC  4B FD 3E E5 */	bl xQuatToMat__FPC5xQuatP7xMat3x3
/* 8005F020 0005C100  C0 22 89 B8 */	lfs f1, "@1551"@sda21(r2)
/* 8005F024 0005C104  3C 60 80 3C */	lis r3, globals@ha
/* 8005F028 0005C108  38 63 05 58 */	addi r3, r3, globals@l
/* 8005F02C 0005C10C  38 81 00 08 */	addi r4, r1, 0x8
/* 8005F030 0005C110  FC 40 08 90 */	fmr f2, f1
/* 8005F034 0005C114  FC 60 08 90 */	fmr f3, f1
/* 8005F038 0005C118  4B FA EA DD */	bl xCameraRotate__FP7xCameraRC7xMat3x3fff
.L_8005F03C:
/* 8005F03C 0005C11C  E3 E1 00 48 */	psq_l f31, 0x48(r1), 0, qr0
/* 8005F040 0005C120  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8005F044 0005C124  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8005F048 0005C128  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8005F04C 0005C12C  7C 08 03 A6 */	mtlr r0
/* 8005F050 0005C130  38 21 00 50 */	addi r1, r1, 0x50
/* 8005F054 0005C134  4E 80 00 20 */	blr
.endfn "update_turn__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18state_camera_seizeFf"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_seize::update_move(float)
.fn "update_move__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18state_camera_seizeFf", local
/* 8005F058 0005C138  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8005F05C 0005C13C  7C 08 02 A6 */	mflr r0
/* 8005F060 0005C140  90 01 00 64 */	stw r0, 0x64(r1)
/* 8005F064 0005C144  DB E1 00 58 */	stfd f31, 0x58(r1)
/* 8005F068 0005C148  FF E0 08 90 */	fmr f31, f1
/* 8005F06C 0005C14C  93 E1 00 54 */	stw r31, 0x54(r1)
/* 8005F070 0005C150  7C 7F 1B 78 */	mr r31, r3
/* 8005F074 0005C154  4B FF DB FD */	bl "get_missle_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005F078 0005C158  38 83 00 30 */	addi r4, r3, 0x30
/* 8005F07C 0005C15C  38 61 00 20 */	addi r3, r1, 0x20
/* 8005F080 0005C160  38 BF 00 0C */	addi r5, r31, 0xc
/* 8005F084 0005C164  4B FA C1 49 */	bl __mi__5xVec3CFRC5xVec3
/* 8005F088 0005C168  80 C1 00 20 */	lwz r6, 0x20(r1)
/* 8005F08C 0005C16C  FC 20 F8 90 */	fmr f1, f31
/* 8005F090 0005C170  80 A1 00 24 */	lwz r5, 0x24(r1)
/* 8005F094 0005C174  38 61 00 08 */	addi r3, r1, 0x8
/* 8005F098 0005C178  80 01 00 28 */	lwz r0, 0x28(r1)
/* 8005F09C 0005C17C  38 81 00 38 */	addi r4, r1, 0x38
/* 8005F0A0 0005C180  90 C1 00 38 */	stw r6, 0x38(r1)
/* 8005F0A4 0005C184  90 A1 00 3C */	stw r5, 0x3c(r1)
/* 8005F0A8 0005C188  90 01 00 40 */	stw r0, 0x40(r1)
/* 8005F0AC 0005C18C  4B FA C0 75 */	bl __ml__5xVec3CFf
/* 8005F0B0 0005C190  38 61 00 14 */	addi r3, r1, 0x14
/* 8005F0B4 0005C194  38 9F 00 0C */	addi r4, r31, 0xc
/* 8005F0B8 0005C198  38 A1 00 08 */	addi r5, r1, 0x8
/* 8005F0BC 0005C19C  4B FB 63 25 */	bl __pl__5xVec3CFRC5xVec3
/* 8005F0C0 0005C1A0  80 81 00 14 */	lwz r4, 0x14(r1)
/* 8005F0C4 0005C1A4  3C 60 80 3C */	lis r3, globals@ha
/* 8005F0C8 0005C1A8  80 A1 00 18 */	lwz r5, 0x18(r1)
/* 8005F0CC 0005C1AC  38 63 05 58 */	addi r3, r3, globals@l
/* 8005F0D0 0005C1B0  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8005F0D4 0005C1B4  90 81 00 2C */	stw r4, 0x2c(r1)
/* 8005F0D8 0005C1B8  38 81 00 2C */	addi r4, r1, 0x2c
/* 8005F0DC 0005C1BC  90 A1 00 30 */	stw r5, 0x30(r1)
/* 8005F0E0 0005C1C0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005F0E4 0005C1C4  4B FA E6 35 */	bl xCameraMove__FP7xCameraRC5xVec3
/* 8005F0E8 0005C1C8  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8005F0EC 0005C1CC  CB E1 00 58 */	lfd f31, 0x58(r1)
/* 8005F0F0 0005C1D0  83 E1 00 54 */	lwz r31, 0x54(r1)
/* 8005F0F4 0005C1D4  7C 08 03 A6 */	mtlr r0
/* 8005F0F8 0005C1D8  38 21 00 60 */	addi r1, r1, 0x60
/* 8005F0FC 0005C1DC  4E 80 00 20 */	blr
.endfn "update_move__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18state_camera_seizeFf"

# xSCurve(float)
.fn xSCurve__Ff, weak
/* 8005F100 0005C1E0  C0 02 89 C8 */	lfs f0, "@1728"@sda21(r2)
/* 8005F104 0005C1E4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005F108 0005C1E8  4C 40 13 82 */	cror eq, lt, eq
/* 8005F10C 0005C1EC  40 82 00 14 */	bne .L_8005F120
/* 8005F110 0005C1F0  C0 02 8A 34 */	lfs f0, "@3187"@sda21(r2)
/* 8005F114 0005C1F4  EC 00 00 72 */	fmuls f0, f0, f1
/* 8005F118 0005C1F8  EC 20 00 72 */	fmuls f1, f0, f1
/* 8005F11C 0005C1FC  4E 80 00 20 */	blr
.L_8005F120:
/* 8005F120 0005C200  C0 42 89 C0 */	lfs f2, "@1720"@sda21(r2)
/* 8005F124 0005C204  C0 02 8A 34 */	lfs f0, "@3187"@sda21(r2)
/* 8005F128 0005C208  EC 22 08 28 */	fsubs f1, f2, f1
/* 8005F12C 0005C20C  EC 00 00 72 */	fmuls f0, f0, f1
/* 8005F130 0005C210  EC 20 10 7C */	fnmsubs f1, f0, f1, f2
/* 8005F134 0005C214  4E 80 00 20 */	blr
.endfn xSCurve__Ff

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_attach::start()
.fn "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attachFv", local
/* 8005F138 0005C218  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005F13C 0005C21C  7C 08 02 A6 */	mflr r0
/* 8005F140 0005C220  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005F144 0005C224  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005F148 0005C228  4B FF 84 4D */	bl "capture_camera__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005F14C 0005C22C  4B FF DB 25 */	bl "get_missle_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005F150 0005C230  3C 80 80 3C */	lis r4, globals@ha
/* 8005F154 0005C234  7C 7F 1B 78 */	mr r31, r3
/* 8005F158 0005C238  38 64 05 58 */	addi r3, r4, globals@l
/* 8005F15C 0005C23C  38 9F 00 30 */	addi r4, r31, 0x30
/* 8005F160 0005C240  4B FA E5 B9 */	bl xCameraMove__FP7xCameraRC5xVec3
/* 8005F164 0005C244  C0 22 89 B8 */	lfs f1, "@1551"@sda21(r2)
/* 8005F168 0005C248  3C 60 80 3C */	lis r3, globals@ha
/* 8005F16C 0005C24C  38 63 05 58 */	addi r3, r3, globals@l
/* 8005F170 0005C250  7F E4 FB 78 */	mr r4, r31
/* 8005F174 0005C254  FC 40 08 90 */	fmr f2, f1
/* 8005F178 0005C258  FC 60 08 90 */	fmr f3, f1
/* 8005F17C 0005C25C  4B FA E9 99 */	bl xCameraRotate__FP7xCameraRC7xMat3x3fff
/* 8005F180 0005C260  80 8D 81 80 */	lwz r4, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005F184 0005C264  3C 60 80 3C */	lis r3, globals@ha
/* 8005F188 0005C268  38 63 05 58 */	addi r3, r3, globals@l
/* 8005F18C 0005C26C  C0 24 00 A4 */	lfs f1, 0xa4(r4)
/* 8005F190 0005C270  4B FA F3 01 */	bl xCameraSetFOV__FP7xCameraf
/* 8005F194 0005C274  C0 22 89 C0 */	lfs f1, "@1720"@sda21(r2)
/* 8005F198 0005C278  4B FF 8E 49 */	bl "distort_screen__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Ff"
/* 8005F19C 0005C27C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005F1A0 0005C280  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005F1A4 0005C284  7C 08 03 A6 */	mtlr r0
/* 8005F1A8 0005C288  38 21 00 10 */	addi r1, r1, 0x10
/* 8005F1AC 0005C28C  4E 80 00 20 */	blr
.endfn "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attachFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_attach::stop()
.fn "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attachFv", local
/* 8005F1B0 0005C290  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005F1B4 0005C294  7C 08 02 A6 */	mflr r0
/* 8005F1B8 0005C298  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005F1BC 0005C29C  3C A0 80 3C */	lis r5, globals@ha
/* 8005F1C0 0005C2A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005F1C4 0005C2A4  38 83 C2 A4 */	addi r4, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005F1C8 0005C2A8  38 65 05 58 */	addi r3, r5, globals@l
/* 8005F1CC 0005C2AC  C0 24 01 00 */	lfs f1, 0x100(r4)
/* 8005F1D0 0005C2B0  4B FA F2 C1 */	bl xCameraSetFOV__FP7xCameraf
/* 8005F1D4 0005C2B4  4B FF 83 F5 */	bl "release_camera__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005F1D8 0005C2B8  4B FF B1 69 */	bl "hide_hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005F1DC 0005C2BC  C0 22 89 B8 */	lfs f1, "@1551"@sda21(r2)
/* 8005F1E0 0005C2C0  4B FF 8E 01 */	bl "distort_screen__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Ff"
/* 8005F1E4 0005C2C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005F1E8 0005C2C8  7C 08 03 A6 */	mtlr r0
/* 8005F1EC 0005C2CC  38 21 00 10 */	addi r1, r1, 0x10
/* 8005F1F0 0005C2D0  4E 80 00 20 */	blr
.endfn "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attachFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_attach::update(float)
.fn "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attachFf", local
/* 8005F1F4 0005C2D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005F1F8 0005C2D8  7C 08 02 A6 */	mflr r0
/* 8005F1FC 0005C2DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005F200 0005C2E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005F204 0005C2E4  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8005F208 0005C2E8  7C 7E 1B 78 */	mr r30, r3
/* 8005F20C 0005C2EC  4B FF DA 65 */	bl "get_missle_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005F210 0005C2F0  3C 80 80 3C */	lis r4, globals@ha
/* 8005F214 0005C2F4  7C 7F 1B 78 */	mr r31, r3
/* 8005F218 0005C2F8  38 64 05 58 */	addi r3, r4, globals@l
/* 8005F21C 0005C2FC  38 9F 00 30 */	addi r4, r31, 0x30
/* 8005F220 0005C300  4B FA E4 F9 */	bl xCameraMove__FP7xCameraRC5xVec3
/* 8005F224 0005C304  C0 22 89 B8 */	lfs f1, "@1551"@sda21(r2)
/* 8005F228 0005C308  3C 60 80 3C */	lis r3, globals@ha
/* 8005F22C 0005C30C  38 63 05 58 */	addi r3, r3, globals@l
/* 8005F230 0005C310  7F E4 FB 78 */	mr r4, r31
/* 8005F234 0005C314  FC 40 08 90 */	fmr f2, f1
/* 8005F238 0005C318  FC 60 08 90 */	fmr f3, f1
/* 8005F23C 0005C31C  4B FA E8 D9 */	bl xCameraRotate__FP7xCameraRC7xMat3x3fff
/* 8005F240 0005C320  7F C3 F3 78 */	mr r3, r30
/* 8005F244 0005C324  48 00 00 21 */	bl "lock_targets__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attachFv"
/* 8005F248 0005C328  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005F24C 0005C32C  38 60 00 09 */	li r3, 0x9
/* 8005F250 0005C330  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005F254 0005C334  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8005F258 0005C338  7C 08 03 A6 */	mtlr r0
/* 8005F25C 0005C33C  38 21 00 10 */	addi r1, r1, 0x10
/* 8005F260 0005C340  4E 80 00 20 */	blr
.endfn "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attachFf"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_attach::lock_targets()
.fn "lock_targets__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attachFv", local
/* 8005F264 0005C344  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8005F268 0005C348  7C 08 02 A6 */	mflr r0
/* 8005F26C 0005C34C  90 01 00 74 */	stw r0, 0x74(r1)
/* 8005F270 0005C350  38 81 00 18 */	addi r4, r1, 0x18
/* 8005F274 0005C354  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 8005F278 0005C358  7C 7F 1B 78 */	mr r31, r3
/* 8005F27C 0005C35C  48 00 00 DD */	bl "get_view_bound__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attachCFR6xBound"
/* 8005F280 0005C360  88 01 00 14 */	lbz r0, 0x14(r1)
/* 8005F284 0005C364  3C 60 80 3D */	lis r3, colls_grid@ha
/* 8005F288 0005C368  38 81 00 18 */	addi r4, r1, 0x18
/* 8005F28C 0005C36C  38 C1 00 10 */	addi r6, r1, 0x10
/* 8005F290 0005C370  98 01 00 10 */	stb r0, 0x10(r1)
/* 8005F294 0005C374  38 63 A6 D8 */	addi r3, r3, colls_grid@l
/* 8005F298 0005C378  7C 85 23 78 */	mr r5, r4
/* 8005F29C 0005C37C  48 00 15 61 */	bl "xGridCheckBound<Q413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attach15cb_lock_targets>__FR5xGridRC6xBoundRC7xQCDataQ413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attach15cb_lock_targets"
/* 8005F2A0 0005C380  88 01 00 14 */	lbz r0, 0x14(r1)
/* 8005F2A4 0005C384  3C 60 80 3D */	lis r3, colls_oso_grid@ha
/* 8005F2A8 0005C388  38 81 00 18 */	addi r4, r1, 0x18
/* 8005F2AC 0005C38C  38 C1 00 0C */	addi r6, r1, 0xc
/* 8005F2B0 0005C390  98 01 00 0C */	stb r0, 0xc(r1)
/* 8005F2B4 0005C394  38 63 A7 74 */	addi r3, r3, colls_oso_grid@l
/* 8005F2B8 0005C398  7C 85 23 78 */	mr r5, r4
/* 8005F2BC 0005C39C  48 00 15 41 */	bl "xGridCheckBound<Q413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attach15cb_lock_targets>__FR5xGridRC6xBoundRC7xQCDataQ413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attach15cb_lock_targets"
/* 8005F2C0 0005C3A0  88 01 00 14 */	lbz r0, 0x14(r1)
/* 8005F2C4 0005C3A4  3C 60 80 3D */	lis r3, npcs_grid@ha
/* 8005F2C8 0005C3A8  38 81 00 18 */	addi r4, r1, 0x18
/* 8005F2CC 0005C3AC  38 C1 00 08 */	addi r6, r1, 0x8
/* 8005F2D0 0005C3B0  98 01 00 08 */	stb r0, 0x8(r1)
/* 8005F2D4 0005C3B4  38 63 A7 A8 */	addi r3, r3, npcs_grid@l
/* 8005F2D8 0005C3B8  7C 85 23 78 */	mr r5, r4
/* 8005F2DC 0005C3BC  48 00 15 21 */	bl "xGridCheckBound<Q413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attach15cb_lock_targets>__FR5xGridRC6xBoundRC7xQCDataQ413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attach15cb_lock_targets"
/* 8005F2E0 0005C3C0  7F E3 FB 78 */	mr r3, r31
/* 8005F2E4 0005C3C4  48 00 00 19 */	bl "lock_hazard_targets__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attachFv"
/* 8005F2E8 0005C3C8  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8005F2EC 0005C3CC  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 8005F2F0 0005C3D0  7C 08 03 A6 */	mtlr r0
/* 8005F2F4 0005C3D4  38 21 00 70 */	addi r1, r1, 0x70
/* 8005F2F8 0005C3D8  4E 80 00 20 */	blr
.endfn "lock_targets__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attachFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_attach::lock_hazard_targets()
.fn "lock_hazard_targets__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attachFv", local
/* 8005F2FC 0005C3DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005F300 0005C3E0  7C 08 02 A6 */	mflr r0
/* 8005F304 0005C3E4  3C 60 80 06 */	lis r3, "hazard_check__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attachFR9NPCHazardPv"@ha
/* 8005F308 0005C3E8  3C A0 00 21 */	lis r5, 0x21
/* 8005F30C 0005C3EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005F310 0005C3F0  38 63 F3 30 */	addi r3, r3, "hazard_check__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attachFR9NPCHazardPv"@l
/* 8005F314 0005C3F4  38 80 00 00 */	li r4, 0x0
/* 8005F318 0005C3F8  38 A5 80 00 */	addi r5, r5, -0x8000
/* 8005F31C 0005C3FC  48 12 8E FD */	bl HAZ_Iterate__FPFR9NPCHazardPv_bPvi
/* 8005F320 0005C400  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005F324 0005C404  7C 08 03 A6 */	mtlr r0
/* 8005F328 0005C408  38 21 00 10 */	addi r1, r1, 0x10
/* 8005F32C 0005C40C  4E 80 00 20 */	blr
.endfn "lock_hazard_targets__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attachFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_attach::hazard_check(NPCHazard&, void*)
.fn "hazard_check__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attachFR9NPCHazardPv", local
/* 8005F330 0005C410  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005F334 0005C414  7C 08 02 A6 */	mflr r0
/* 8005F338 0005C418  38 63 00 08 */	addi r3, r3, 0x8
/* 8005F33C 0005C41C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005F340 0005C420  4B FF B2 31 */	bl "check_lock_target__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FPC5xVec3"
/* 8005F344 0005C424  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005F348 0005C428  38 60 00 01 */	li r3, 0x1
/* 8005F34C 0005C42C  7C 08 03 A6 */	mtlr r0
/* 8005F350 0005C430  38 21 00 10 */	addi r1, r1, 0x10
/* 8005F354 0005C434  4E 80 00 20 */	blr
.endfn "hazard_check__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attachFR9NPCHazardPv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_attach::get_view_bound(xBound&) const
.fn "get_view_bound__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attachCFR6xBound", local
/* 8005F358 0005C438  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8005F35C 0005C43C  7C 08 02 A6 */	mflr r0
/* 8005F360 0005C440  90 01 00 84 */	stw r0, 0x84(r1)
/* 8005F364 0005C444  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 8005F368 0005C448  F3 E1 00 78 */	psq_st f31, 0x78(r1), 0, qr0
/* 8005F36C 0005C44C  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 8005F370 0005C450  F3 C1 00 68 */	psq_st f30, 0x68(r1), 0, qr0
/* 8005F374 0005C454  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 8005F378 0005C458  F3 A1 00 58 */	psq_st f29, 0x58(r1), 0, qr0
/* 8005F37C 0005C45C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8005F380 0005C460  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8005F384 0005C464  7C 9E 23 78 */	mr r30, r4
/* 8005F388 0005C468  38 00 00 02 */	li r0, 0x2
/* 8005F38C 0005C46C  98 04 00 20 */	stb r0, 0x20(r4)
/* 8005F390 0005C470  3C 60 80 3C */	lis r3, globals@ha
/* 8005F394 0005C474  3B E3 05 58 */	addi r31, r3, globals@l
/* 8005F398 0005C478  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005F39C 0005C47C  C0 43 00 E8 */	lfs f2, 0xe8(r3)
/* 8005F3A0 0005C480  C0 03 00 E4 */	lfs f0, 0xe4(r3)
/* 8005F3A4 0005C484  C0 23 00 F0 */	lfs f1, 0xf0(r3)
/* 8005F3A8 0005C488  EF E2 00 28 */	fsubs f31, f2, f0
/* 8005F3AC 0005C48C  48 06 5A A1 */	bl isin__Ff
/* 8005F3B0 0005C490  80 AD 81 80 */	lwz r5, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005F3B4 0005C494  38 61 00 20 */	addi r3, r1, 0x20
/* 8005F3B8 0005C498  38 9F 00 34 */	addi r4, r31, 0x34
/* 8005F3BC 0005C49C  C0 45 00 E4 */	lfs f2, 0xe4(r5)
/* 8005F3C0 0005C4A0  C0 05 00 E8 */	lfs f0, 0xe8(r5)
/* 8005F3C4 0005C4A4  EF C1 00 B2 */	fmuls f30, f1, f2
/* 8005F3C8 0005C4A8  EF A1 00 32 */	fmuls f29, f1, f0
/* 8005F3CC 0005C4AC  FC 20 10 90 */	fmr f1, f2
/* 8005F3D0 0005C4B0  4B FA BD 51 */	bl __ml__5xVec3CFf
/* 8005F3D4 0005C4B4  38 61 00 2C */	addi r3, r1, 0x2c
/* 8005F3D8 0005C4B8  38 9F 00 44 */	addi r4, r31, 0x44
/* 8005F3DC 0005C4BC  38 A1 00 20 */	addi r5, r1, 0x20
/* 8005F3E0 0005C4C0  4B FB 60 01 */	bl __pl__5xVec3CFRC5xVec3
/* 8005F3E4 0005C4C4  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 8005F3E8 0005C4C8  FC 20 F8 90 */	fmr f1, f31
/* 8005F3EC 0005C4CC  80 A1 00 30 */	lwz r5, 0x30(r1)
/* 8005F3F0 0005C4D0  FC 40 F0 90 */	fmr f2, f30
/* 8005F3F4 0005C4D4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8005F3F8 0005C4D8  FC 60 E8 90 */	fmr f3, f29
/* 8005F3FC 0005C4DC  90 61 00 38 */	stw r3, 0x38(r1)
/* 8005F400 0005C4E0  38 7E 00 30 */	addi r3, r30, 0x30
/* 8005F404 0005C4E4  38 81 00 38 */	addi r4, r1, 0x38
/* 8005F408 0005C4E8  90 A1 00 3C */	stw r5, 0x3c(r1)
/* 8005F40C 0005C4EC  38 BF 00 34 */	addi r5, r31, 0x34
/* 8005F410 0005C4F0  90 01 00 40 */	stw r0, 0x40(r1)
/* 8005F414 0005C4F4  4B FD 29 2D */	bl xBoxFromCone__FR4xBoxRC5xVec3RC5xVec3fff
/* 8005F418 0005C4F8  38 61 00 08 */	addi r3, r1, 0x8
/* 8005F41C 0005C4FC  38 9E 00 30 */	addi r4, r30, 0x30
/* 8005F420 0005C500  38 BE 00 3C */	addi r5, r30, 0x3c
/* 8005F424 0005C504  4B FB 5F BD */	bl __pl__5xVec3CFRC5xVec3
/* 8005F428 0005C508  C0 22 89 C8 */	lfs f1, "@1728"@sda21(r2)
/* 8005F42C 0005C50C  38 61 00 14 */	addi r3, r1, 0x14
/* 8005F430 0005C510  38 81 00 08 */	addi r4, r1, 0x8
/* 8005F434 0005C514  4B FA BC ED */	bl __ml__5xVec3CFf
/* 8005F438 0005C518  38 7E 00 24 */	addi r3, r30, 0x24
/* 8005F43C 0005C51C  38 81 00 14 */	addi r4, r1, 0x14
/* 8005F440 0005C520  4B FA BE 25 */	bl __as__5xVec3FRC5xVec3
/* 8005F444 0005C524  7F C3 F3 78 */	mr r3, r30
/* 8005F448 0005C528  38 9E 00 30 */	addi r4, r30, 0x30
/* 8005F44C 0005C52C  4B FB 64 DD */	bl xQuickCullForBox__FP7xQCDataPC4xBox
/* 8005F450 0005C530  E3 E1 00 78 */	psq_l f31, 0x78(r1), 0, qr0
/* 8005F454 0005C534  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 8005F458 0005C538  E3 C1 00 68 */	psq_l f30, 0x68(r1), 0, qr0
/* 8005F45C 0005C53C  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 8005F460 0005C540  E3 A1 00 58 */	psq_l f29, 0x58(r1), 0, qr0
/* 8005F464 0005C544  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 8005F468 0005C548  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8005F46C 0005C54C  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8005F470 0005C550  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8005F474 0005C554  7C 08 03 A6 */	mtlr r0
/* 8005F478 0005C558  38 21 00 80 */	addi r1, r1, 0x80
/* 8005F47C 0005C55C  4E 80 00 20 */	blr
.endfn "get_view_bound__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attachCFR6xBound"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_survey::start()
.fn "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyFv", local
/* 8005F480 0005C560  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005F484 0005C564  7C 08 02 A6 */	mflr r0
/* 8005F488 0005C568  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005F48C 0005C56C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005F490 0005C570  7C 7F 1B 78 */	mr r31, r3
/* 8005F494 0005C574  4B FF 81 69 */	bl "camera_taken__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005F498 0005C578  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8005F49C 0005C57C  41 82 00 18 */	beq .L_8005F4B4
/* 8005F4A0 0005C580  4B FF 81 29 */	bl "release_camera__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005F4A4 0005C584  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005F4A8 0005C588  C0 03 00 A8 */	lfs f0, 0xa8(r3)
/* 8005F4AC 0005C58C  D0 1F 00 08 */	stfs f0, 0x8(r31)
/* 8005F4B0 0005C590  48 00 00 34 */	b .L_8005F4E4
.L_8005F4B4:
/* 8005F4B4 0005C594  4B FF 80 E1 */	bl "capture_camera__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005F4B8 0005C598  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005F4BC 0005C59C  7F E3 FB 78 */	mr r3, r31
/* 8005F4C0 0005C5A0  D0 1F 00 08 */	stfs f0, 0x8(r31)
/* 8005F4C4 0005C5A4  48 00 04 01 */	bl "init_path__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyFv"
/* 8005F4C8 0005C5A8  7F E3 FB 78 */	mr r3, r31
/* 8005F4CC 0005C5AC  48 00 00 2D */	bl "move__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyFv"
/* 8005F4D0 0005C5B0  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005F4D4 0005C5B4  38 7F 00 0C */	addi r3, r31, 0xc
/* 8005F4D8 0005C5B8  38 84 C2 A4 */	addi r4, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005F4DC 0005C5BC  38 84 00 48 */	addi r4, r4, 0x48
/* 8005F4E0 0005C5C0  4B FC 63 19 */	bl __as__5xVec2FRC5xVec2
.L_8005F4E4:
/* 8005F4E4 0005C5C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005F4E8 0005C5C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005F4EC 0005C5CC  7C 08 03 A6 */	mtlr r0
/* 8005F4F0 0005C5D0  38 21 00 10 */	addi r1, r1, 0x10
/* 8005F4F4 0005C5D4  4E 80 00 20 */	blr
.endfn "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_survey::move()
.fn "move__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyFv", local
/* 8005F4F8 0005C5D8  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8005F4FC 0005C5DC  7C 08 02 A6 */	mflr r0
/* 8005F500 0005C5E0  90 01 00 64 */	stw r0, 0x64(r1)
/* 8005F504 0005C5E4  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8005F508 0005C5E8  F3 E1 00 58 */	psq_st f31, 0x58(r1), 0, qr0
/* 8005F50C 0005C5EC  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8005F510 0005C5F0  80 8D 81 80 */	lwz r4, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005F514 0005C5F4  7C 7F 1B 78 */	mr r31, r3
/* 8005F518 0005C5F8  C0 23 00 08 */	lfs f1, 0x8(r3)
/* 8005F51C 0005C5FC  C0 04 00 A8 */	lfs f0, 0xa8(r4)
/* 8005F520 0005C600  C0 44 00 BC */	lfs f2, 0xbc(r4)
/* 8005F524 0005C604  EC 21 00 24 */	fdivs f1, f1, f0
/* 8005F528 0005C608  48 00 03 3D */	bl xSCurve__Fff
/* 8005F52C 0005C60C  80 CD 81 80 */	lwz r6, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005F530 0005C610  FF E0 08 90 */	fmr f31, f1
/* 8005F534 0005C614  7F E3 FB 78 */	mr r3, r31
/* 8005F538 0005C618  38 81 00 30 */	addi r4, r1, 0x30
/* 8005F53C 0005C61C  C0 26 00 B4 */	lfs f1, 0xb4(r6)
/* 8005F540 0005C620  38 A1 00 08 */	addi r5, r1, 0x8
/* 8005F544 0005C624  C0 06 00 B8 */	lfs f0, 0xb8(r6)
/* 8005F548 0005C628  EC 00 08 28 */	fsubs f0, f0, f1
/* 8005F54C 0005C62C  EC 3F 08 3A */	fmadds f1, f31, f0, f1
/* 8005F550 0005C630  48 00 00 9D */	bl "eval_missle_path__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyCFfR5xVec3Rf"
/* 8005F554 0005C634  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005F558 0005C638  38 61 00 0C */	addi r3, r1, 0xc
/* 8005F55C 0005C63C  38 84 C2 A4 */	addi r4, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005F560 0005C640  38 A1 00 30 */	addi r5, r1, 0x30
/* 8005F564 0005C644  38 84 00 50 */	addi r4, r4, 0x50
/* 8005F568 0005C648  4B FA BC 65 */	bl __mi__5xVec3CFRC5xVec3
/* 8005F56C 0005C64C  38 61 00 18 */	addi r3, r1, 0x18
/* 8005F570 0005C650  38 81 00 0C */	addi r4, r1, 0xc
/* 8005F574 0005C654  48 00 09 1D */	bl up_normal__5xVec3CFv
/* 8005F578 0005C658  80 81 00 18 */	lwz r4, 0x18(r1)
/* 8005F57C 0005C65C  3C 60 80 3C */	lis r3, globals@ha
/* 8005F580 0005C660  80 A1 00 1C */	lwz r5, 0x1c(r1)
/* 8005F584 0005C664  38 63 05 58 */	addi r3, r3, globals@l
/* 8005F588 0005C668  80 01 00 20 */	lwz r0, 0x20(r1)
/* 8005F58C 0005C66C  90 81 00 24 */	stw r4, 0x24(r1)
/* 8005F590 0005C670  38 81 00 30 */	addi r4, r1, 0x30
/* 8005F594 0005C674  90 A1 00 28 */	stw r5, 0x28(r1)
/* 8005F598 0005C678  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8005F59C 0005C67C  4B FA E1 7D */	bl xCameraMove__FP7xCameraRC5xVec3
/* 8005F5A0 0005C680  C0 02 89 C0 */	lfs f0, "@1720"@sda21(r2)
/* 8005F5A4 0005C684  3C 60 80 3C */	lis r3, globals@ha
/* 8005F5A8 0005C688  C0 21 00 08 */	lfs f1, 0x8(r1)
/* 8005F5AC 0005C68C  38 63 05 58 */	addi r3, r3, globals@l
/* 8005F5B0 0005C690  EC 00 F8 28 */	fsubs f0, f0, f31
/* 8005F5B4 0005C694  38 81 00 24 */	addi r4, r1, 0x24
/* 8005F5B8 0005C698  EC 21 00 32 */	fmuls f1, f1, f0
/* 8005F5BC 0005C69C  D0 21 00 08 */	stfs f1, 0x8(r1)
/* 8005F5C0 0005C6A0  C0 42 89 B8 */	lfs f2, "@1551"@sda21(r2)
/* 8005F5C4 0005C6A4  FC 60 10 90 */	fmr f3, f2
/* 8005F5C8 0005C6A8  FC 80 10 90 */	fmr f4, f2
/* 8005F5CC 0005C6AC  4B FA E6 6D */	bl xCameraRotate__FP7xCameraRC5xVec3ffff
/* 8005F5D0 0005C6B0  E3 E1 00 58 */	psq_l f31, 0x58(r1), 0, qr0
/* 8005F5D4 0005C6B4  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8005F5D8 0005C6B8  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8005F5DC 0005C6BC  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8005F5E0 0005C6C0  7C 08 03 A6 */	mtlr r0
/* 8005F5E4 0005C6C4  38 21 00 60 */	addi r1, r1, 0x60
/* 8005F5E8 0005C6C8  4E 80 00 20 */	blr
.endfn "move__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_survey::eval_missle_path(float, xVec3&, float&) const
.fn "eval_missle_path__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyCFfR5xVec3Rf", local
/* 8005F5EC 0005C6CC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8005F5F0 0005C6D0  7C 08 02 A6 */	mflr r0
/* 8005F5F4 0005C6D4  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005F5F8 0005C6D8  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8005F5FC 0005C6DC  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8005F600 0005C6E0  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8005F604 0005C6E4  FF E0 08 90 */	fmr f31, f1
/* 8005F608 0005C6E8  7C 7D 1B 78 */	mr r29, r3
/* 8005F60C 0005C6EC  7C 9E 23 78 */	mr r30, r4
/* 8005F610 0005C6F0  7C BF 2B 78 */	mr r31, r5
/* 8005F614 0005C6F4  48 00 01 AD */	bl "find_nearest__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyCFf"
/* 8005F618 0005C6F8  7C 7C 1B 79 */	mr. r28, r3
/* 8005F61C 0005C6FC  41 81 00 0C */	bgt .L_8005F628
/* 8005F620 0005C700  3B 9C 00 01 */	addi r28, r28, 0x1
/* 8005F624 0005C704  48 00 00 28 */	b .L_8005F64C
.L_8005F628:
/* 8005F628 0005C708  3C 60 80 2E */	lis r3, "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005F62C 0005C70C  38 63 BE 30 */	addi r3, r3, "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005F630 0005C710  48 00 0E CD */	bl "size__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFv"
/* 8005F634 0005C714  7C 1C 18 00 */	cmpw r28, r3
/* 8005F638 0005C718  41 80 00 14 */	blt .L_8005F64C
/* 8005F63C 0005C71C  3C 60 80 2E */	lis r3, "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005F640 0005C720  38 63 BE 30 */	addi r3, r3, "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005F644 0005C724  48 00 0E B9 */	bl "size__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFv"
/* 8005F648 0005C728  3B 83 FF FF */	addi r28, r3, -0x1
.L_8005F64C:
/* 8005F64C 0005C72C  3C 60 80 2E */	lis r3, "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005F650 0005C730  38 9C FF FF */	addi r4, r28, -0x1
/* 8005F654 0005C734  38 63 BE 30 */	addi r3, r3, "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005F658 0005C738  48 00 0E BD */	bl "__vc__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>Fi"
/* 8005F65C 0005C73C  3C 80 80 2E */	lis r4, "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005F660 0005C740  7C 7B 1B 78 */	mr r27, r3
/* 8005F664 0005C744  38 04 BE 30 */	addi r0, r4, "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005F668 0005C748  7F 84 E3 78 */	mr r4, r28
/* 8005F66C 0005C74C  7C 03 03 78 */	mr r3, r0
/* 8005F670 0005C750  48 00 0E A5 */	bl "__vc__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>Fi"
/* 8005F674 0005C754  57 80 10 3A */	slwi r0, r28, 2
/* 8005F678 0005C758  C0 02 89 C4 */	lfs f0, "@1721"@sda21(r2)
/* 8005F67C 0005C75C  7C 9D 02 14 */	add r4, r29, r0
/* 8005F680 0005C760  7C 7C 1B 78 */	mr r28, r3
/* 8005F684 0005C764  C0 44 00 10 */	lfs f2, 0x10(r4)
/* 8005F688 0005C768  C0 64 00 14 */	lfs f3, 0x14(r4)
/* 8005F68C 0005C76C  EC 22 18 28 */	fsubs f1, f2, f3
/* 8005F690 0005C770  FC 20 0A 10 */	fabs f1, f1
/* 8005F694 0005C774  FC 20 08 18 */	frsp f1, f1
/* 8005F698 0005C778  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005F69C 0005C77C  4C 40 13 82 */	cror eq, lt, eq
/* 8005F6A0 0005C780  40 82 00 1C */	bne .L_8005F6BC
/* 8005F6A4 0005C784  7F C3 F3 78 */	mr r3, r30
/* 8005F6A8 0005C788  7F 64 DB 78 */	mr r4, r27
/* 8005F6AC 0005C78C  4B FA BB B9 */	bl __as__5xVec3FRC5xVec3
/* 8005F6B0 0005C790  C0 1B 00 0C */	lfs f0, 0xc(r27)
/* 8005F6B4 0005C794  D0 1F 00 00 */	stfs f0, 0x0(r31)
/* 8005F6B8 0005C798  48 00 00 40 */	b .L_8005F6F8
.L_8005F6BC:
/* 8005F6BC 0005C79C  EC 3F 10 28 */	fsubs f1, f31, f2
/* 8005F6C0 0005C7A0  7F A3 EB 78 */	mr r3, r29
/* 8005F6C4 0005C7A4  EC 03 10 28 */	fsubs f0, f3, f2
/* 8005F6C8 0005C7A8  7F C4 F3 78 */	mr r4, r30
/* 8005F6CC 0005C7AC  7F 65 DB 78 */	mr r5, r27
/* 8005F6D0 0005C7B0  7F 86 E3 78 */	mr r6, r28
/* 8005F6D4 0005C7B4  EF E1 00 24 */	fdivs f31, f1, f0
/* 8005F6D8 0005C7B8  FC 20 F8 90 */	fmr f1, f31
/* 8005F6DC 0005C7BC  48 00 00 49 */	bl "lerp__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyCFR5xVec3fRC5xVec3RC5xVec3"
/* 8005F6E0 0005C7C0  FC 20 F8 90 */	fmr f1, f31
/* 8005F6E4 0005C7C4  C0 5B 00 0C */	lfs f2, 0xc(r27)
/* 8005F6E8 0005C7C8  C0 7C 00 0C */	lfs f3, 0xc(r28)
/* 8005F6EC 0005C7CC  7F A3 EB 78 */	mr r3, r29
/* 8005F6F0 0005C7D0  7F E4 FB 78 */	mr r4, r31
/* 8005F6F4 0005C7D4  48 00 00 21 */	bl "lerp__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyCFRffff"
.L_8005F6F8:
/* 8005F6F8 0005C7D8  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 8005F6FC 0005C7DC  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8005F700 0005C7E0  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8005F704 0005C7E4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8005F708 0005C7E8  7C 08 03 A6 */	mtlr r0
/* 8005F70C 0005C7EC  38 21 00 30 */	addi r1, r1, 0x30
/* 8005F710 0005C7F0  4E 80 00 20 */	blr
.endfn "eval_missle_path__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyCFfR5xVec3Rf"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_survey::lerp(float&, float, float, float) const
.fn "lerp__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyCFRffff", local
/* 8005F714 0005C7F4  EC 03 10 28 */	fsubs f0, f3, f2
/* 8005F718 0005C7F8  EC 01 10 3A */	fmadds f0, f1, f0, f2
/* 8005F71C 0005C7FC  D0 04 00 00 */	stfs f0, 0x0(r4)
/* 8005F720 0005C800  4E 80 00 20 */	blr
.endfn "lerp__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyCFRffff"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_survey::lerp(xVec3&, float, const xVec3&, const xVec3&) const
.fn "lerp__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyCFR5xVec3fRC5xVec3RC5xVec3", local
/* 8005F724 0005C804  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8005F728 0005C808  7C 08 02 A6 */	mflr r0
/* 8005F72C 0005C80C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8005F730 0005C810  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8005F734 0005C814  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8005F738 0005C818  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8005F73C 0005C81C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8005F740 0005C820  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8005F744 0005C824  93 81 00 10 */	stw r28, 0x10(r1)
/* 8005F748 0005C828  7C BE 2B 78 */	mr r30, r5
/* 8005F74C 0005C82C  7C DF 33 78 */	mr r31, r6
/* 8005F750 0005C830  FF E0 08 90 */	fmr f31, f1
/* 8005F754 0005C834  C0 45 00 00 */	lfs f2, 0x0(r5)
/* 8005F758 0005C838  C0 66 00 00 */	lfs f3, 0x0(r6)
/* 8005F75C 0005C83C  7C 7C 1B 78 */	mr r28, r3
/* 8005F760 0005C840  7C 9D 23 78 */	mr r29, r4
/* 8005F764 0005C844  4B FF FF B1 */	bl "lerp__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyCFRffff"
/* 8005F768 0005C848  FC 20 F8 90 */	fmr f1, f31
/* 8005F76C 0005C84C  C0 5E 00 04 */	lfs f2, 0x4(r30)
/* 8005F770 0005C850  C0 7F 00 04 */	lfs f3, 0x4(r31)
/* 8005F774 0005C854  7F 83 E3 78 */	mr r3, r28
/* 8005F778 0005C858  38 9D 00 04 */	addi r4, r29, 0x4
/* 8005F77C 0005C85C  4B FF FF 99 */	bl "lerp__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyCFRffff"
/* 8005F780 0005C860  FC 20 F8 90 */	fmr f1, f31
/* 8005F784 0005C864  C0 5E 00 08 */	lfs f2, 0x8(r30)
/* 8005F788 0005C868  C0 7F 00 08 */	lfs f3, 0x8(r31)
/* 8005F78C 0005C86C  7F 83 E3 78 */	mr r3, r28
/* 8005F790 0005C870  38 9D 00 08 */	addi r4, r29, 0x8
/* 8005F794 0005C874  4B FF FF 81 */	bl "lerp__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyCFRffff"
/* 8005F798 0005C878  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 8005F79C 0005C87C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8005F7A0 0005C880  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8005F7A4 0005C884  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8005F7A8 0005C888  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8005F7AC 0005C88C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8005F7B0 0005C890  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8005F7B4 0005C894  7C 08 03 A6 */	mtlr r0
/* 8005F7B8 0005C898  38 21 00 30 */	addi r1, r1, 0x30
/* 8005F7BC 0005C89C  4E 80 00 20 */	blr
.endfn "lerp__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyCFR5xVec3fRC5xVec3RC5xVec3"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_survey::find_nearest(float) const
.fn "find_nearest__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyCFf", local
/* 8005F7C0 0005C8A0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005F7C4 0005C8A4  7C 08 02 A6 */	mflr r0
/* 8005F7C8 0005C8A8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005F7CC 0005C8AC  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8005F7D0 0005C8B0  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8005F7D4 0005C8B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005F7D8 0005C8B8  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8005F7DC 0005C8BC  3C 80 80 2E */	lis r4, "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005F7E0 0005C8C0  FF E0 08 90 */	fmr f31, f1
/* 8005F7E4 0005C8C4  38 04 BE 30 */	addi r0, r4, "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005F7E8 0005C8C8  7C 7E 1B 78 */	mr r30, r3
/* 8005F7EC 0005C8CC  7C 03 03 78 */	mr r3, r0
/* 8005F7F0 0005C8D0  3B E0 00 00 */	li r31, 0x0
/* 8005F7F4 0005C8D4  48 00 0D 09 */	bl "size__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFv"
/* 8005F7F8 0005C8D8  48 00 00 40 */	b .L_8005F838
.L_8005F7FC:
/* 8005F7FC 0005C8DC  7C 9F 1A 14 */	add r4, r31, r3
/* 8005F800 0005C8E0  54 80 0F FE */	srwi r0, r4, 31
/* 8005F804 0005C8E4  7C 00 22 14 */	add r0, r0, r4
/* 8005F808 0005C8E8  7C 05 0E 70 */	srawi r5, r0, 1
/* 8005F80C 0005C8EC  54 A4 10 3A */	slwi r4, r5, 2
/* 8005F810 0005C8F0  38 04 00 14 */	addi r0, r4, 0x14
/* 8005F814 0005C8F4  7C 1E 04 2E */	lfsx f0, r30, r0
/* 8005F818 0005C8F8  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8005F81C 0005C8FC  4C 40 13 82 */	cror eq, lt, eq
/* 8005F820 0005C900  40 82 00 0C */	bne .L_8005F82C
/* 8005F824 0005C904  7C A3 2B 78 */	mr r3, r5
/* 8005F828 0005C908  48 00 00 10 */	b .L_8005F838
.L_8005F82C:
/* 8005F82C 0005C90C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8005F830 0005C910  40 81 00 08 */	ble .L_8005F838
/* 8005F834 0005C914  3B E5 00 01 */	addi r31, r5, 0x1
.L_8005F838:
/* 8005F838 0005C918  7C 1F 18 00 */	cmpw r31, r3
/* 8005F83C 0005C91C  41 80 FF C0 */	blt .L_8005F7FC
/* 8005F840 0005C920  7F E3 FB 78 */	mr r3, r31
/* 8005F844 0005C924  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8005F848 0005C928  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005F84C 0005C92C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 8005F850 0005C930  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005F854 0005C934  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8005F858 0005C938  7C 08 03 A6 */	mtlr r0
/* 8005F85C 0005C93C  38 21 00 20 */	addi r1, r1, 0x20
/* 8005F860 0005C940  4E 80 00 20 */	blr
.endfn "find_nearest__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyCFf"

# xSCurve(float, float)
.fn xSCurve__Fff, weak
/* 8005F864 0005C944  C0 62 89 C0 */	lfs f3, "@1720"@sda21(r2)
/* 8005F868 0005C948  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 8005F86C 0005C94C  EC 83 10 28 */	fsubs f4, f3, f2
/* 8005F870 0005C950  40 80 00 1C */	bge .L_8005F88C
/* 8005F874 0005C954  C0 62 89 C8 */	lfs f3, "@1728"@sda21(r2)
/* 8005F878 0005C958  EC 02 01 32 */	fmuls f0, f2, f4
/* 8005F87C 0005C95C  EC 43 00 72 */	fmuls f2, f3, f1
/* 8005F880 0005C960  EC 22 00 72 */	fmuls f1, f2, f1
/* 8005F884 0005C964  EC 21 00 24 */	fdivs f1, f1, f0
/* 8005F888 0005C968  4E 80 00 20 */	blr
.L_8005F88C:
/* 8005F88C 0005C96C  FC 01 20 40 */	fcmpo cr0, f1, f4
/* 8005F890 0005C970  40 81 00 24 */	ble .L_8005F8B4
/* 8005F894 0005C974  EC A3 08 28 */	fsubs f5, f3, f1
/* 8005F898 0005C978  C0 22 89 C8 */	lfs f1, "@1728"@sda21(r2)
/* 8005F89C 0005C97C  EC 02 01 32 */	fmuls f0, f2, f4
/* 8005F8A0 0005C980  EC 21 01 72 */	fmuls f1, f1, f5
/* 8005F8A4 0005C984  EC 21 01 72 */	fmuls f1, f1, f5
/* 8005F8A8 0005C988  EC 01 00 24 */	fdivs f0, f1, f0
/* 8005F8AC 0005C98C  EC 23 00 28 */	fsubs f1, f3, f0
/* 8005F8B0 0005C990  4E 80 00 20 */	blr
.L_8005F8B4:
/* 8005F8B4 0005C994  C0 02 89 C8 */	lfs f0, "@1728"@sda21(r2)
/* 8005F8B8 0005C998  EC 00 08 BC */	fnmsubs f0, f0, f2, f1
/* 8005F8BC 0005C99C  EC 20 20 24 */	fdivs f1, f0, f4
/* 8005F8C0 0005C9A0  4E 80 00 20 */	blr
.endfn xSCurve__Fff

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_survey::init_path()
.fn "init_path__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyFv", local
/* 8005F8C4 0005C9A4  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8005F8C8 0005C9A8  7C 08 02 A6 */	mflr r0
/* 8005F8CC 0005C9AC  90 01 00 54 */	stw r0, 0x54(r1)
/* 8005F8D0 0005C9B0  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8005F8D4 0005C9B4  F3 E1 00 48 */	psq_st f31, 0x48(r1), 0, qr0
/* 8005F8D8 0005C9B8  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8005F8DC 0005C9BC  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8005F8E0 0005C9C0  3C 80 80 2E */	lis r4, "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005F8E4 0005C9C4  C3 E2 89 B8 */	lfs f31, "@1551"@sda21(r2)
/* 8005F8E8 0005C9C8  38 04 BE 30 */	addi r0, r4, "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005F8EC 0005C9CC  7C 7E 1B 78 */	mr r30, r3
/* 8005F8F0 0005C9D0  7C 03 03 78 */	mr r3, r0
/* 8005F8F4 0005C9D4  48 00 0B 19 */	bl "begin__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFv"
/* 8005F8F8 0005C9D8  3C A0 80 2E */	lis r5, "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005F8FC 0005C9DC  90 81 00 14 */	stw r4, 0x14(r1)
/* 8005F900 0005C9E0  38 05 BE 30 */	addi r0, r5, "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005F904 0005C9E4  90 61 00 10 */	stw r3, 0x10(r1)
/* 8005F908 0005C9E8  7C 03 03 78 */	mr r3, r0
/* 8005F90C 0005C9EC  48 00 0C D1 */	bl "end__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFv"
/* 8005F910 0005C9F0  90 61 00 08 */	stw r3, 0x8(r1)
/* 8005F914 0005C9F4  38 61 00 10 */	addi r3, r1, 0x10
/* 8005F918 0005C9F8  90 81 00 0C */	stw r4, 0xc(r1)
/* 8005F91C 0005C9FC  48 00 0C A1 */	bl "__rf__Q286fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>8iteratorCFv"
/* 8005F920 0005CA00  80 83 00 00 */	lwz r4, 0x0(r3)
/* 8005F924 0005CA04  3B FE 00 14 */	addi r31, r30, 0x14
/* 8005F928 0005CA08  80 03 00 04 */	lwz r0, 0x4(r3)
/* 8005F92C 0005CA0C  90 81 00 24 */	stw r4, 0x24(r1)
/* 8005F930 0005CA10  90 01 00 28 */	stw r0, 0x28(r1)
/* 8005F934 0005CA14  80 03 00 08 */	lwz r0, 0x8(r3)
/* 8005F938 0005CA18  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8005F93C 0005CA1C  48 00 00 50 */	b .L_8005F98C
.L_8005F940:
/* 8005F940 0005CA20  38 61 00 10 */	addi r3, r1, 0x10
/* 8005F944 0005CA24  48 00 0C 79 */	bl "__rf__Q286fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>8iteratorCFv"
/* 8005F948 0005CA28  7C 60 1B 78 */	mr r0, r3
/* 8005F94C 0005CA2C  38 61 00 18 */	addi r3, r1, 0x18
/* 8005F950 0005CA30  7C 1E 03 78 */	mr r30, r0
/* 8005F954 0005CA34  38 A1 00 24 */	addi r5, r1, 0x24
/* 8005F958 0005CA38  7F C4 F3 78 */	mr r4, r30
/* 8005F95C 0005CA3C  4B FA B8 71 */	bl __mi__5xVec3CFRC5xVec3
/* 8005F960 0005CA40  38 61 00 18 */	addi r3, r1, 0x18
/* 8005F964 0005CA44  4B FA B8 45 */	bl length__5xVec3CFv
/* 8005F968 0005CA48  EC 1F 08 2A */	fadds f0, f31, f1
/* 8005F96C 0005CA4C  7F C4 F3 78 */	mr r4, r30
/* 8005F970 0005CA50  38 61 00 24 */	addi r3, r1, 0x24
/* 8005F974 0005CA54  D0 1F 00 00 */	stfs f0, 0x0(r31)
/* 8005F978 0005CA58  C3 FF 00 00 */	lfs f31, 0x0(r31)
/* 8005F97C 0005CA5C  4B FA B8 E9 */	bl __as__5xVec3FRC5xVec3
/* 8005F980 0005CA60  38 61 00 10 */	addi r3, r1, 0x10
/* 8005F984 0005CA64  48 00 0B ED */	bl "__pp__Q286fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>8iteratorFv"
/* 8005F988 0005CA68  3B FF 00 04 */	addi r31, r31, 0x4
.L_8005F98C:
/* 8005F98C 0005CA6C  38 61 00 10 */	addi r3, r1, 0x10
/* 8005F990 0005CA70  38 81 00 08 */	addi r4, r1, 0x8
/* 8005F994 0005CA74  48 00 0B C1 */	bl "__ne__Q286fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>8iteratorCFRCQ286fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>8iterator"
/* 8005F998 0005CA78  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8005F99C 0005CA7C  40 82 FF A4 */	bne .L_8005F940
/* 8005F9A0 0005CA80  E3 E1 00 48 */	psq_l f31, 0x48(r1), 0, qr0
/* 8005F9A4 0005CA84  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8005F9A8 0005CA88  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8005F9AC 0005CA8C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8005F9B0 0005CA90  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8005F9B4 0005CA94  7C 08 03 A6 */	mtlr r0
/* 8005F9B8 0005CA98  38 21 00 50 */	addi r1, r1, 0x50
/* 8005F9BC 0005CA9C  4E 80 00 20 */	blr
.endfn "init_path__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_survey::stop()
.fn "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyFv", local
/* 8005F9C0 0005CAA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005F9C4 0005CAA4  7C 08 02 A6 */	mflr r0
/* 8005F9C8 0005CAA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005F9CC 0005CAAC  4B FF 7B FD */	bl "release_camera__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005F9D0 0005CAB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005F9D4 0005CAB4  7C 08 03 A6 */	mtlr r0
/* 8005F9D8 0005CAB8  38 21 00 10 */	addi r1, r1, 0x10
/* 8005F9DC 0005CABC  4E 80 00 20 */	blr
.endfn "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_survey::update(float)
.fn "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyFf", local
/* 8005F9E0 0005CAC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005F9E4 0005CAC4  7C 08 02 A6 */	mflr r0
/* 8005F9E8 0005CAC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005F9EC 0005CACC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005F9F0 0005CAD0  7C 7F 1B 78 */	mr r31, r3
/* 8005F9F4 0005CAD4  C0 03 00 08 */	lfs f0, 0x8(r3)
/* 8005F9F8 0005CAD8  EC 00 08 2A */	fadds f0, f0, f1
/* 8005F9FC 0005CADC  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 8005FA00 0005CAE0  4B FF 7B FD */	bl "camera_taken__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005FA04 0005CAE4  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8005FA08 0005CAE8  41 82 00 0C */	beq .L_8005FA14
/* 8005FA0C 0005CAEC  38 60 00 0B */	li r3, 0xb
/* 8005FA10 0005CAF0  48 00 00 70 */	b .L_8005FA80
.L_8005FA14:
/* 8005FA14 0005CAF4  80 6D 81 80 */	lwz r3, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005FA18 0005CAF8  C0 3F 00 08 */	lfs f1, 0x8(r31)
/* 8005FA1C 0005CAFC  C0 03 00 A8 */	lfs f0, 0xa8(r3)
/* 8005FA20 0005CB00  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005FA24 0005CB04  4C 41 13 82 */	cror eq, gt, eq
/* 8005FA28 0005CB08  40 82 00 0C */	bne .L_8005FA34
/* 8005FA2C 0005CB0C  38 60 00 0B */	li r3, 0xb
/* 8005FA30 0005CB10  48 00 00 50 */	b .L_8005FA80
.L_8005FA34:
/* 8005FA34 0005CB14  C0 03 00 AC */	lfs f0, 0xac(r3)
/* 8005FA38 0005CB18  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005FA3C 0005CB1C  4C 41 13 82 */	cror eq, gt, eq
/* 8005FA40 0005CB20  40 82 00 34 */	bne .L_8005FA74
/* 8005FA44 0005CB24  3C 60 80 3C */	lis r3, globals@ha
/* 8005FA48 0005CB28  38 63 05 58 */	addi r3, r3, globals@l
/* 8005FA4C 0005CB2C  80 63 03 1C */	lwz r3, 0x31c(r3)
/* 8005FA50 0005CB30  80 03 00 30 */	lwz r0, 0x30(r3)
/* 8005FA54 0005CB34  54 00 05 EF */	rlwinm. r0, r0, 0, 23, 23
/* 8005FA58 0005CB38  40 82 00 14 */	bne .L_8005FA6C
/* 8005FA5C 0005CB3C  7F E3 FB 78 */	mr r3, r31
/* 8005FA60 0005CB40  48 00 00 35 */	bl "control_jerked__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyCFv"
/* 8005FA64 0005CB44  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8005FA68 0005CB48  41 82 00 0C */	beq .L_8005FA74
.L_8005FA6C:
/* 8005FA6C 0005CB4C  38 60 00 0B */	li r3, 0xb
/* 8005FA70 0005CB50  48 00 00 10 */	b .L_8005FA80
.L_8005FA74:
/* 8005FA74 0005CB54  7F E3 FB 78 */	mr r3, r31
/* 8005FA78 0005CB58  4B FF FA 81 */	bl "move__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyFv"
/* 8005FA7C 0005CB5C  38 60 00 0A */	li r3, 0xa
.L_8005FA80:
/* 8005FA80 0005CB60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005FA84 0005CB64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005FA88 0005CB68  7C 08 03 A6 */	mtlr r0
/* 8005FA8C 0005CB6C  38 21 00 10 */	addi r1, r1, 0x10
/* 8005FA90 0005CB70  4E 80 00 20 */	blr
.endfn "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyFf"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_survey::control_jerked() const
.fn "control_jerked__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyCFv", local
/* 8005FA94 0005CB74  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8005FA98 0005CB78  7C 08 02 A6 */	mflr r0
/* 8005FA9C 0005CB7C  90 01 00 44 */	stw r0, 0x44(r1)
/* 8005FAA0 0005CB80  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8005FAA4 0005CB84  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 8005FAA8 0005CB88  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8005FAAC 0005CB8C  F3 C1 00 28 */	psq_st f30, 0x28(r1), 0, qr0
/* 8005FAB0 0005CB90  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8005FAB4 0005CB94  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8005FAB8 0005CB98  80 AD 81 80 */	lwz r5, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005FABC 0005CB9C  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005FAC0 0005CBA0  38 84 C2 A4 */	addi r4, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005FAC4 0005CBA4  7C 66 1B 78 */	mr r6, r3
/* 8005FAC8 0005CBA8  3B C4 00 48 */	addi r30, r4, 0x48
/* 8005FACC 0005CBAC  C3 E5 00 C0 */	lfs f31, 0xc0(r5)
/* 8005FAD0 0005CBB0  C3 C5 00 C4 */	lfs f30, 0xc4(r5)
/* 8005FAD4 0005CBB4  7F C3 F3 78 */	mr r3, r30
/* 8005FAD8 0005CBB8  38 86 00 0C */	addi r4, r6, 0xc
/* 8005FADC 0005CBBC  4B FB 5E 99 */	bl __mi__5xVec2CFRC5xVec2
/* 8005FAE0 0005CBC0  90 61 00 08 */	stw r3, 0x8(r1)
/* 8005FAE4 0005CBC4  38 61 00 08 */	addi r3, r1, 0x8
/* 8005FAE8 0005CBC8  3B E0 00 00 */	li r31, 0x0
/* 8005FAEC 0005CBCC  90 81 00 0C */	stw r4, 0xc(r1)
/* 8005FAF0 0005CBD0  4B FB 5E 6D */	bl length2__5xVec2CFv
/* 8005FAF4 0005CBD4  EC 1F 07 F2 */	fmuls f0, f31, f31
/* 8005FAF8 0005CBD8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005FAFC 0005CBDC  4C 41 13 82 */	cror eq, gt, eq
/* 8005FB00 0005CBE0  40 82 00 20 */	bne .L_8005FB20
/* 8005FB04 0005CBE4  7F C3 F3 78 */	mr r3, r30
/* 8005FB08 0005CBE8  4B FB 5E 55 */	bl length2__5xVec2CFv
/* 8005FB0C 0005CBEC  EC 1E 07 B2 */	fmuls f0, f30, f30
/* 8005FB10 0005CBF0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005FB14 0005CBF4  4C 41 13 82 */	cror eq, gt, eq
/* 8005FB18 0005CBF8  40 82 00 08 */	bne .L_8005FB20
/* 8005FB1C 0005CBFC  3B E0 00 01 */	li r31, 0x1
.L_8005FB20:
/* 8005FB20 0005CC00  7F E3 FB 78 */	mr r3, r31
/* 8005FB24 0005CC04  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8005FB28 0005CC08  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8005FB2C 0005CC0C  E3 C1 00 28 */	psq_l f30, 0x28(r1), 0, qr0
/* 8005FB30 0005CC10  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8005FB34 0005CC14  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8005FB38 0005CC18  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8005FB3C 0005CC1C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8005FB40 0005CC20  7C 08 03 A6 */	mtlr r0
/* 8005FB44 0005CC24  38 21 00 40 */	addi r1, r1, 0x40
/* 8005FB48 0005CC28  4E 80 00 20 */	blr
.endfn "control_jerked__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyCFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_restore::start()
.fn "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_camera_restoreFv", local
/* 8005FB4C 0005CC2C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005FB50 0005CC30  7C 08 02 A6 */	mflr r0
/* 8005FB54 0005CC34  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005FB58 0005CC38  C0 02 89 B8 */	lfs f0, "@1551"@sda21(r2)
/* 8005FB5C 0005CC3C  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 8005FB60 0005CC40  4B FF A7 E1 */	bl "hide_hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005FB64 0005CC44  4B FF 7A E1 */	bl "camera_leave__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005FB68 0005CC48  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8005FB6C 0005CC4C  40 82 00 68 */	bne .L_8005FBD4
/* 8005FB70 0005CC50  4B FF 85 99 */	bl "get_player_loc__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005FB74 0005CC54  3C A0 80 2E */	lis r5, "start_cam_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005FB78 0005CC58  7C 64 1B 78 */	mr r4, r3
/* 8005FB7C 0005CC5C  38 A5 BD F0 */	addi r5, r5, "start_cam_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005FB80 0005CC60  38 61 00 08 */	addi r3, r1, 0x8
/* 8005FB84 0005CC64  38 A5 00 30 */	addi r5, r5, 0x30
/* 8005FB88 0005CC68  4B FB 58 59 */	bl __pl__5xVec3CFRC5xVec3
/* 8005FB8C 0005CC6C  80 81 00 08 */	lwz r4, 0x8(r1)
/* 8005FB90 0005CC70  3C 60 80 3C */	lis r3, globals@ha
/* 8005FB94 0005CC74  80 A1 00 0C */	lwz r5, 0xc(r1)
/* 8005FB98 0005CC78  38 63 05 58 */	addi r3, r3, globals@l
/* 8005FB9C 0005CC7C  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8005FBA0 0005CC80  90 81 00 14 */	stw r4, 0x14(r1)
/* 8005FBA4 0005CC84  38 81 00 14 */	addi r4, r1, 0x14
/* 8005FBA8 0005CC88  90 A1 00 18 */	stw r5, 0x18(r1)
/* 8005FBAC 0005CC8C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8005FBB0 0005CC90  4B FA DB 69 */	bl xCameraMove__FP7xCameraRC5xVec3
/* 8005FBB4 0005CC94  C0 22 89 B8 */	lfs f1, "@1551"@sda21(r2)
/* 8005FBB8 0005CC98  3C 60 80 3C */	lis r3, globals@ha
/* 8005FBBC 0005CC9C  3C 80 80 2E */	lis r4, "start_cam_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005FBC0 0005CCA0  FC 40 08 90 */	fmr f2, f1
/* 8005FBC4 0005CCA4  38 63 05 58 */	addi r3, r3, globals@l
/* 8005FBC8 0005CCA8  FC 60 08 90 */	fmr f3, f1
/* 8005FBCC 0005CCAC  38 84 BD F0 */	addi r4, r4, "start_cam_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005FBD0 0005CCB0  4B FA DF 45 */	bl xCameraRotate__FP7xCameraRC7xMat3x3fff
.L_8005FBD4:
/* 8005FBD4 0005CCB4  4B FF 7A 29 */	bl "camera_taken__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005FBD8 0005CCB8  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8005FBDC 0005CCBC  41 82 00 0C */	beq .L_8005FBE8
/* 8005FBE0 0005CCC0  4B FF 79 E9 */	bl "release_camera__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005FBE4 0005CCC4  48 00 00 08 */	b .L_8005FBEC
.L_8005FBE8:
/* 8005FBE8 0005CCC8  4B FF 79 AD */	bl "capture_camera__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
.L_8005FBEC:
/* 8005FBEC 0005CCCC  38 60 00 00 */	li r3, 0x0
/* 8005FBF0 0005CCD0  4B FE 8E 09 */	bl xSndSelectListenerMode__F24sound_listener_game_mode
/* 8005FBF4 0005CCD4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005FBF8 0005CCD8  7C 08 03 A6 */	mtlr r0
/* 8005FBFC 0005CCDC  38 21 00 20 */	addi r1, r1, 0x20
/* 8005FC00 0005CCE0  4E 80 00 20 */	blr
.endfn "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_camera_restoreFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_restore::stop()
.fn "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_camera_restoreFv", local
/* 8005FC04 0005CCE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005FC08 0005CCE8  7C 08 02 A6 */	mflr r0
/* 8005FC0C 0005CCEC  38 60 00 00 */	li r3, 0x0
/* 8005FC10 0005CCF0  38 80 FF FF */	li r4, -0x1
/* 8005FC14 0005CCF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005FC18 0005CCF8  4B FF 80 C5 */	bl "set_state__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@11thread_enumQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_enum"
/* 8005FC1C 0005CCFC  4B FF 79 AD */	bl "release_camera__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005FC20 0005CD00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005FC24 0005CD04  7C 08 03 A6 */	mtlr r0
/* 8005FC28 0005CD08  38 21 00 10 */	addi r1, r1, 0x10
/* 8005FC2C 0005CD0C  4E 80 00 20 */	blr
.endfn "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_camera_restoreFv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_restore::update(float)
.fn "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_camera_restoreFf", local
/* 8005FC30 0005CD10  C0 03 00 08 */	lfs f0, 0x8(r3)
/* 8005FC34 0005CD14  EC 00 08 2A */	fadds f0, f0, f1
/* 8005FC38 0005CD18  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 8005FC3C 0005CD1C  80 8D 81 80 */	lwz r4, "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@sda21(r13)
/* 8005FC40 0005CD20  C0 23 00 08 */	lfs f1, 0x8(r3)
/* 8005FC44 0005CD24  C0 04 00 C8 */	lfs f0, 0xc8(r4)
/* 8005FC48 0005CD28  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8005FC4C 0005CD2C  4C 41 13 82 */	cror eq, gt, eq
/* 8005FC50 0005CD30  40 82 00 0C */	bne .L_8005FC5C
/* 8005FC54 0005CD34  38 60 FF FF */	li r3, -0x1
/* 8005FC58 0005CD38  4E 80 00 20 */	blr
.L_8005FC5C:
/* 8005FC5C 0005CD3C  38 60 00 0B */	li r3, 0xb
/* 8005FC60 0005CD40  4E 80 00 20 */	blr
.endfn "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_camera_restoreFf"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_explode::cb_damage_ent::operator()(xEnt&, xGridBound&)
.fn "__cl__Q413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode13cb_damage_entFR4xEntR10xGridBound", local
/* 8005FC64 0005CD44  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8005FC68 0005CD48  7C 08 02 A6 */	mflr r0
/* 8005FC6C 0005CD4C  90 01 00 84 */	stw r0, 0x84(r1)
/* 8005FC70 0005CD50  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 8005FC74 0005CD54  93 C1 00 78 */	stw r30, 0x78(r1)
/* 8005FC78 0005CD58  7C 9E 23 78 */	mr r30, r4
/* 8005FC7C 0005CD5C  93 A1 00 74 */	stw r29, 0x74(r1)
/* 8005FC80 0005CD60  7C 7D 1B 78 */	mr r29, r3
/* 8005FC84 0005CD64  88 04 00 22 */	lbz r0, 0x22(r4)
/* 8005FC88 0005CD68  54 00 06 F7 */	rlwinm. r0, r0, 0, 27, 27
/* 8005FC8C 0005CD6C  40 82 00 0C */	bne .L_8005FC98
/* 8005FC90 0005CD70  38 60 00 01 */	li r3, 0x1
/* 8005FC94 0005CD74  48 00 01 08 */	b .L_8005FD9C
.L_8005FC98:
/* 8005FC98 0005CD78  7F C3 F3 78 */	mr r3, r30
/* 8005FC9C 0005CD7C  4B FF 7C 4D */	bl "can_damage__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FP4xEnt"
/* 8005FCA0 0005CD80  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8005FCA4 0005CD84  40 82 00 0C */	bne .L_8005FCB0
/* 8005FCA8 0005CD88  38 60 00 01 */	li r3, 0x1
/* 8005FCAC 0005CD8C  48 00 00 F0 */	b .L_8005FD9C
.L_8005FCB0:
/* 8005FCB0 0005CD90  3C 80 80 25 */	lis r4, "@2168"@ha
/* 8005FCB4 0005CD94  84 A4 52 D8 */	lwzu r5, "@2168"@l(r4)
/* 8005FCB8 0005CD98  3C 60 80 29 */	lis r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005FCBC 0005CD9C  C0 1D 00 00 */	lfs f0, 0x0(r29)
/* 8005FCC0 0005CDA0  38 63 C2 A4 */	addi r3, r3, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005FCC4 0005CDA4  81 04 00 04 */	lwz r8, 0x4(r4)
/* 8005FCC8 0005CDA8  3B E3 00 50 */	addi r31, r3, 0x50
/* 8005FCCC 0005CDAC  80 E4 00 08 */	lwz r7, 0x8(r4)
/* 8005FCD0 0005CDB0  80 04 00 0C */	lwz r0, 0xc(r4)
/* 8005FCD4 0005CDB4  38 61 00 08 */	addi r3, r1, 0x8
/* 8005FCD8 0005CDB8  90 A1 00 08 */	stw r5, 0x8(r1)
/* 8005FCDC 0005CDBC  38 9E 00 64 */	addi r4, r30, 0x64
/* 8005FCE0 0005CDC0  80 DF 00 00 */	lwz r6, 0x0(r31)
/* 8005FCE4 0005CDC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005FCE8 0005CDC8  80 BF 00 04 */	lwz r5, 0x4(r31)
/* 8005FCEC 0005CDCC  91 01 00 0C */	stw r8, 0xc(r1)
/* 8005FCF0 0005CDD0  80 1F 00 08 */	lwz r0, 0x8(r31)
/* 8005FCF4 0005CDD4  90 E1 00 10 */	stw r7, 0x10(r1)
/* 8005FCF8 0005CDD8  90 C1 00 08 */	stw r6, 0x8(r1)
/* 8005FCFC 0005CDDC  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8005FD00 0005CDE0  90 01 00 10 */	stw r0, 0x10(r1)
/* 8005FD04 0005CDE4  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8005FD08 0005CDE8  4B FB 4A 09 */	bl xSphereHitsBound__FRC7xSphereRC6xBound
/* 8005FD0C 0005CDEC  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8005FD10 0005CDF0  40 82 00 0C */	bne .L_8005FD1C
/* 8005FD14 0005CDF4  38 60 00 01 */	li r3, 0x1
/* 8005FD18 0005CDF8  48 00 00 84 */	b .L_8005FD9C
.L_8005FD1C:
/* 8005FD1C 0005CDFC  7F C3 F3 78 */	mr r3, r30
/* 8005FD20 0005CE00  4B FF 7C 65 */	bl "was_damaged__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FP4xEnt"
/* 8005FD24 0005CE04  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8005FD28 0005CE08  41 82 00 0C */	beq .L_8005FD34
/* 8005FD2C 0005CE0C  38 60 00 01 */	li r3, 0x1
/* 8005FD30 0005CE10  48 00 00 6C */	b .L_8005FD9C
.L_8005FD34:
/* 8005FD34 0005CE14  88 1E 00 21 */	lbz r0, 0x21(r30)
/* 8005FD38 0005CE18  28 00 00 05 */	cmplwi r0, 0x5
/* 8005FD3C 0005CE1C  40 82 00 30 */	bne .L_8005FD6C
/* 8005FD40 0005CE20  38 00 00 00 */	li r0, 0x0
/* 8005FD44 0005CE24  38 61 00 08 */	addi r3, r1, 0x8
/* 8005FD48 0005CE28  90 01 00 18 */	stw r0, 0x18(r1)
/* 8005FD4C 0005CE2C  38 A1 00 18 */	addi r5, r1, 0x18
/* 8005FD50 0005CE30  80 9E 00 24 */	lwz r4, 0x24(r30)
/* 8005FD54 0005CE34  4B FA FB 11 */	bl xSphereHitsModel__FPC7xSpherePC14xModelInstanceP7xCollis
/* 8005FD58 0005CE38  80 01 00 18 */	lwz r0, 0x18(r1)
/* 8005FD5C 0005CE3C  54 00 07 FF */	clrlwi. r0, r0, 31
/* 8005FD60 0005CE40  40 82 00 0C */	bne .L_8005FD6C
/* 8005FD64 0005CE44  38 60 00 01 */	li r3, 0x1
/* 8005FD68 0005CE48  48 00 00 34 */	b .L_8005FD9C
.L_8005FD6C:
/* 8005FD6C 0005CE4C  4B FF CF 05 */	bl "get_missle_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@Fv"
/* 8005FD70 0005CE50  3C 80 80 29 */	lis r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005FD74 0005CE54  7C 65 1B 78 */	mr r5, r3
/* 8005FD78 0005CE58  38 C4 C2 A4 */	addi r6, r4, "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005FD7C 0005CE5C  C0 3D 00 00 */	lfs f1, 0x0(r29)
/* 8005FD80 0005CE60  7F C3 F3 78 */	mr r3, r30
/* 8005FD84 0005CE64  7F E4 FB 78 */	mr r4, r31
/* 8005FD88 0005CE68  38 A5 00 20 */	addi r5, r5, 0x20
/* 8005FD8C 0005CE6C  38 C6 00 5C */	addi r6, r6, 0x5c
/* 8005FD90 0005CE70  38 E0 00 01 */	li r7, 0x1
/* 8005FD94 0005CE74  4B FF 78 F1 */	bl "damage_entity__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FR4xEntRC5xVec3RC5xVec3RC5xVec3fb"
/* 8005FD98 0005CE78  38 60 00 01 */	li r3, 0x1
.L_8005FD9C:
/* 8005FD9C 0005CE7C  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8005FDA0 0005CE80  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 8005FDA4 0005CE84  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 8005FDA8 0005CE88  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 8005FDAC 0005CE8C  7C 08 03 A6 */	mtlr r0
/* 8005FDB0 0005CE90  38 21 00 80 */	addi r1, r1, 0x80
/* 8005FDB4 0005CE94  4E 80 00 20 */	blr
.endfn "__cl__Q413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode13cb_damage_entFR4xEntR10xGridBound"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_attach::cb_lock_targets::operator()(xEnt&, xGridBound&)
.fn "__cl__Q413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attach15cb_lock_targetsFR4xEntR10xGridBound", local
/* 8005FDB8 0005CE98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005FDBC 0005CE9C  7C 08 02 A6 */	mflr r0
/* 8005FDC0 0005CEA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005FDC4 0005CEA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005FDC8 0005CEA8  7C 9F 23 78 */	mr r31, r4
/* 8005FDCC 0005CEAC  88 04 00 22 */	lbz r0, 0x22(r4)
/* 8005FDD0 0005CEB0  54 00 06 F7 */	rlwinm. r0, r0, 0, 27, 27
/* 8005FDD4 0005CEB4  40 82 00 0C */	bne .L_8005FDE0
/* 8005FDD8 0005CEB8  38 60 00 01 */	li r3, 0x1
/* 8005FDDC 0005CEBC  48 00 00 2C */	b .L_8005FE08
.L_8005FDE0:
/* 8005FDE0 0005CEC0  7F E3 FB 78 */	mr r3, r31
/* 8005FDE4 0005CEC4  4B FF 7B 05 */	bl "can_damage__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FP4xEnt"
/* 8005FDE8 0005CEC8  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8005FDEC 0005CECC  40 82 00 0C */	bne .L_8005FDF8
/* 8005FDF0 0005CED0  38 60 00 01 */	li r3, 0x1
/* 8005FDF4 0005CED4  48 00 00 14 */	b .L_8005FE08
.L_8005FDF8:
/* 8005FDF8 0005CED8  7F E3 FB 78 */	mr r3, r31
/* 8005FDFC 0005CEDC  4B FB BA 35 */	bl xEntGetCenter__FPC4xEnt
/* 8005FE00 0005CEE0  4B FF A7 71 */	bl "check_lock_target__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@FPC5xVec3"
/* 8005FE04 0005CEE4  38 60 00 01 */	li r3, 0x1
.L_8005FE08:
/* 8005FE08 0005CEE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005FE0C 0005CEEC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005FE10 0005CEF0  7C 08 03 A6 */	mtlr r0
/* 8005FE14 0005CEF4  38 21 00 10 */	addi r1, r1, 0x10
/* 8005FE18 0005CEF8  4E 80 00 20 */	blr
.endfn "__cl__Q413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attach15cb_lock_targetsFR4xEntR10xGridBound"

.fn __sinit_zEntCruiseBubble_cpp, local
/* 8005FE1C 0005CEFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005FE20 0005CF00  7C 08 02 A6 */	mflr r0
/* 8005FE24 0005CF04  3C 60 80 2E */	lis r3, "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@ha
/* 8005FE28 0005CF08  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005FE2C 0005CF0C  38 63 BE 30 */	addi r3, r3, "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"@l
/* 8005FE30 0005CF10  48 00 00 15 */	bl "__ct__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>Fv"
/* 8005FE34 0005CF14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005FE38 0005CF18  7C 08 03 A6 */	mtlr r0
/* 8005FE3C 0005CF1C  38 21 00 10 */	addi r1, r1, 0x10
/* 8005FE40 0005CF20  4E 80 00 20 */	blr
.endfn __sinit_zEntCruiseBubble_cpp

# fixed_queue<cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::missle_record_data, 127>::fixed_queue()
.fn "__ct__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>Fv", weak
/* 8005FE44 0005CF24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005FE48 0005CF28  7C 08 02 A6 */	mflr r0
/* 8005FE4C 0005CF2C  3C 80 80 06 */	lis r4, "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_dataFv"@ha
/* 8005FE50 0005CF30  38 A0 00 00 */	li r5, 0x0
/* 8005FE54 0005CF34  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005FE58 0005CF38  38 84 FE 8C */	addi r4, r4, "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_dataFv"@l
/* 8005FE5C 0005CF3C  38 C0 00 10 */	li r6, 0x10
/* 8005FE60 0005CF40  38 E0 00 80 */	li r7, 0x80
/* 8005FE64 0005CF44  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005FE68 0005CF48  7C 7F 1B 78 */	mr r31, r3
/* 8005FE6C 0005CF4C  38 7F 00 08 */	addi r3, r31, 0x8
/* 8005FE70 0005CF50  48 18 D0 F9 */	bl __construct_array
/* 8005FE74 0005CF54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005FE78 0005CF58  7F E3 FB 78 */	mr r3, r31
/* 8005FE7C 0005CF5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005FE80 0005CF60  7C 08 03 A6 */	mtlr r0
/* 8005FE84 0005CF64  38 21 00 10 */	addi r1, r1, 0x10
/* 8005FE88 0005CF68  4E 80 00 20 */	blr
.endfn "__ct__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>Fv"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::missle_record_data::missle_record_data()
.fn "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_dataFv", local
/* 8005FE8C 0005CF6C  4E 80 00 20 */	blr
.endfn "__ct__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_dataFv"

# 0x8005FE90 - 0x80060028
.section .text, "ax", unique, 1
.balign 4

# xVec3::up_normal() const
.fn up_normal__5xVec3CFv, weak
/* 8005FE90 0005CF70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005FE94 0005CF74  7C 08 02 A6 */	mflr r0
/* 8005FE98 0005CF78  3C A0 80 25 */	lis r5, m_UnitAxisY__5xVec3@ha
/* 8005FE9C 0005CF7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005FEA0 0005CF80  38 A5 42 F8 */	addi r5, r5, m_UnitAxisY__5xVec3@l
/* 8005FEA4 0005CF84  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8005FEA8 0005CF88  7C 7F 1B 78 */	mr r31, r3
/* 8005FEAC 0005CF8C  48 00 00 19 */	bl safe_normal__5xVec3CFRC5xVec3
/* 8005FEB0 0005CF90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005FEB4 0005CF94  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005FEB8 0005CF98  7C 08 03 A6 */	mtlr r0
/* 8005FEBC 0005CF9C  38 21 00 10 */	addi r1, r1, 0x10
/* 8005FEC0 0005CFA0  4E 80 00 20 */	blr
.endfn up_normal__5xVec3CFv

# xVec3::safe_normal(const xVec3&) const
.fn safe_normal__5xVec3CFRC5xVec3, weak
/* 8005FEC4 0005CFA4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005FEC8 0005CFA8  7C 08 02 A6 */	mflr r0
/* 8005FECC 0005CFAC  80 E4 00 00 */	lwz r7, 0x0(r4)
/* 8005FED0 0005CFB0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005FED4 0005CFB4  80 C4 00 04 */	lwz r6, 0x4(r4)
/* 8005FED8 0005CFB8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8005FEDC 0005CFBC  7C 7F 1B 78 */	mr r31, r3
/* 8005FEE0 0005CFC0  80 04 00 08 */	lwz r0, 0x8(r4)
/* 8005FEE4 0005CFC4  7C A4 2B 78 */	mr r4, r5
/* 8005FEE8 0005CFC8  90 E1 00 08 */	stw r7, 0x8(r1)
/* 8005FEEC 0005CFCC  38 61 00 08 */	addi r3, r1, 0x8
/* 8005FEF0 0005CFD0  90 C1 00 0C */	stw r6, 0xc(r1)
/* 8005FEF4 0005CFD4  90 01 00 10 */	stw r0, 0x10(r1)
/* 8005FEF8 0005CFD8  4B FA E9 D9 */	bl safe_normalize__5xVec3FRC5xVec3
/* 8005FEFC 0005CFDC  80 83 00 00 */	lwz r4, 0x0(r3)
/* 8005FF00 0005CFE0  80 03 00 04 */	lwz r0, 0x4(r3)
/* 8005FF04 0005CFE4  90 9F 00 00 */	stw r4, 0x0(r31)
/* 8005FF08 0005CFE8  90 1F 00 04 */	stw r0, 0x4(r31)
/* 8005FF0C 0005CFEC  80 03 00 08 */	lwz r0, 0x8(r3)
/* 8005FF10 0005CFF0  90 1F 00 08 */	stw r0, 0x8(r31)
/* 8005FF14 0005CFF4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8005FF18 0005CFF8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005FF1C 0005CFFC  7C 08 03 A6 */	mtlr r0
/* 8005FF20 0005D000  38 21 00 20 */	addi r1, r1, 0x20
/* 8005FF24 0005D004  4E 80 00 20 */	blr
.endfn safe_normal__5xVec3CFRC5xVec3

# xVec3::operator-() const
.fn __mi__5xVec3CFv, weak
/* 8005FF28 0005D008  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005FF2C 0005D00C  80 04 00 00 */	lwz r0, 0x0(r4)
/* 8005FF30 0005D010  80 A4 00 04 */	lwz r5, 0x4(r4)
/* 8005FF34 0005D014  90 01 00 08 */	stw r0, 0x8(r1)
/* 8005FF38 0005D018  80 04 00 08 */	lwz r0, 0x8(r4)
/* 8005FF3C 0005D01C  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8005FF40 0005D020  C0 01 00 08 */	lfs f0, 0x8(r1)
/* 8005FF44 0005D024  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8005FF48 0005D028  FC 40 00 50 */	fneg f2, f0
/* 8005FF4C 0005D02C  90 01 00 10 */	stw r0, 0x10(r1)
/* 8005FF50 0005D030  FC 20 08 50 */	fneg f1, f1
/* 8005FF54 0005D034  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8005FF58 0005D038  D0 41 00 08 */	stfs f2, 0x8(r1)
/* 8005FF5C 0005D03C  FC 00 00 50 */	fneg f0, f0
/* 8005FF60 0005D040  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8005FF64 0005D044  80 01 00 08 */	lwz r0, 0x8(r1)
/* 8005FF68 0005D048  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8005FF6C 0005D04C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8005FF70 0005D050  90 03 00 00 */	stw r0, 0x0(r3)
/* 8005FF74 0005D054  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8005FF78 0005D058  90 83 00 04 */	stw r4, 0x4(r3)
/* 8005FF7C 0005D05C  90 03 00 08 */	stw r0, 0x8(r3)
/* 8005FF80 0005D060  38 21 00 20 */	addi r1, r1, 0x20
/* 8005FF84 0005D064  4E 80 00 20 */	blr
.endfn __mi__5xVec3CFv

# xVec3::create(float, float, float)
.fn create__5xVec3Ffff, weak
/* 8005FF88 0005D068  3C 80 80 25 */	lis r4, "@405"@ha
/* 8005FF8C 0005D06C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005FF90 0005D070  38 A4 50 B8 */	addi r5, r4, "@405"@l
/* 8005FF94 0005D074  80 05 00 00 */	lwz r0, 0x0(r5)
/* 8005FF98 0005D078  80 85 00 04 */	lwz r4, 0x4(r5)
/* 8005FF9C 0005D07C  90 01 00 08 */	stw r0, 0x8(r1)
/* 8005FFA0 0005D080  80 05 00 08 */	lwz r0, 0x8(r5)
/* 8005FFA4 0005D084  90 81 00 0C */	stw r4, 0xc(r1)
/* 8005FFA8 0005D088  90 01 00 10 */	stw r0, 0x10(r1)
/* 8005FFAC 0005D08C  D0 21 00 08 */	stfs f1, 0x8(r1)
/* 8005FFB0 0005D090  80 01 00 08 */	lwz r0, 0x8(r1)
/* 8005FFB4 0005D094  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 8005FFB8 0005D098  D0 61 00 10 */	stfs f3, 0x10(r1)
/* 8005FFBC 0005D09C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8005FFC0 0005D0A0  90 03 00 00 */	stw r0, 0x0(r3)
/* 8005FFC4 0005D0A4  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8005FFC8 0005D0A8  90 83 00 04 */	stw r4, 0x4(r3)
/* 8005FFCC 0005D0AC  90 03 00 08 */	stw r0, 0x8(r3)
/* 8005FFD0 0005D0B0  38 21 00 20 */	addi r1, r1, 0x20
/* 8005FFD4 0005D0B4  4E 80 00 20 */	blr
.endfn create__5xVec3Ffff

# xVec3::create(float)
.fn create__5xVec3Ff, weak
/* 8005FFD8 0005D0B8  3C 80 80 25 */	lis r4, "@406"@ha
/* 8005FFDC 0005D0BC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005FFE0 0005D0C0  38 A4 50 C4 */	addi r5, r4, "@406"@l
/* 8005FFE4 0005D0C4  80 05 00 00 */	lwz r0, 0x0(r5)
/* 8005FFE8 0005D0C8  80 85 00 04 */	lwz r4, 0x4(r5)
/* 8005FFEC 0005D0CC  90 01 00 08 */	stw r0, 0x8(r1)
/* 8005FFF0 0005D0D0  80 05 00 08 */	lwz r0, 0x8(r5)
/* 8005FFF4 0005D0D4  90 81 00 0C */	stw r4, 0xc(r1)
/* 8005FFF8 0005D0D8  90 01 00 10 */	stw r0, 0x10(r1)
/* 8005FFFC 0005D0DC  D0 21 00 08 */	stfs f1, 0x8(r1)
/* 80060000 0005D0E0  80 01 00 08 */	lwz r0, 0x8(r1)
/* 80060004 0005D0E4  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80060008 0005D0E8  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8006000C 0005D0EC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80060010 0005D0F0  90 03 00 00 */	stw r0, 0x0(r3)
/* 80060014 0005D0F4  80 01 00 10 */	lwz r0, 0x10(r1)
/* 80060018 0005D0F8  90 83 00 04 */	stw r4, 0x4(r3)
/* 8006001C 0005D0FC  90 03 00 08 */	stw r0, 0x8(r3)
/* 80060020 0005D100  38 21 00 20 */	addi r1, r1, 0x20
/* 80060024 0005D104  4E 80 00 20 */	blr
.endfn create__5xVec3Ff

# 0x80060028 - 0x80060030
.section .text, "ax", unique, 2
.balign 4

# zNPCCommon::IsHealthy()
.fn IsHealthy__10zNPCCommonFv, weak
/* 80060028 0005D108  38 60 00 01 */	li r3, 0x1
/* 8006002C 0005D10C  4E 80 00 20 */	blr
.endfn IsHealthy__10zNPCCommonFv

# 0x80060030 - 0x8006003C
.section .text, "ax", unique, 3
.balign 4

# zEntTriggerAsset(const zEntTrigger&)
.fn zEntTriggerAsset__FRC11zEntTrigger, weak
/* 80060030 0005D110  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80060034 0005D114  38 63 00 54 */	addi r3, r3, 0x54
/* 80060038 0005D118  4E 80 00 20 */	blr
.endfn zEntTriggerAsset__FRC11zEntTrigger

# 0x8006003C - 0x800600A0
.section .text, "ax", unique, 4
.balign 4

# xMat3x3RMulVec(xVec3*, const xMat3x3*, const xVec3*)
.fn xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3, local
/* 8006003C 0005D11C  C0 65 00 04 */	lfs f3, 0x4(r5)
/* 80060040 0005D120  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 80060044 0005D124  C0 44 00 14 */	lfs f2, 0x14(r4)
/* 80060048 0005D128  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8006004C 0005D12C  C0 C5 00 00 */	lfs f6, 0x0(r5)
/* 80060050 0005D130  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 80060054 0005D134  EC 82 00 F2 */	fmuls f4, f2, f3
/* 80060058 0005D138  C0 44 00 18 */	lfs f2, 0x18(r4)
/* 8006005C 0005D13C  C0 A4 00 04 */	lfs f5, 0x4(r4)
/* 80060060 0005D140  EC 01 01 BA */	fmadds f0, f1, f6, f0
/* 80060064 0005D144  C0 E5 00 08 */	lfs f7, 0x8(r5)
/* 80060068 0005D148  C0 24 00 20 */	lfs f1, 0x20(r4)
/* 8006006C 0005D14C  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80060070 0005D150  C0 64 00 08 */	lfs f3, 0x8(r4)
/* 80060074 0005D154  EC 85 21 BA */	fmadds f4, f5, f6, f4
/* 80060078 0005D158  EC 01 01 FA */	fmadds f0, f1, f7, f0
/* 8006007C 0005D15C  C0 A4 00 24 */	lfs f5, 0x24(r4)
/* 80060080 0005D160  EC 23 11 BA */	fmadds f1, f3, f6, f2
/* 80060084 0005D164  C0 44 00 28 */	lfs f2, 0x28(r4)
/* 80060088 0005D168  EC 65 21 FA */	fmadds f3, f5, f7, f4
/* 8006008C 0005D16C  D0 03 00 00 */	stfs f0, 0x0(r3)
/* 80060090 0005D170  EC 02 09 FA */	fmadds f0, f2, f7, f1
/* 80060094 0005D174  D0 63 00 04 */	stfs f3, 0x4(r3)
/* 80060098 0005D178  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 8006009C 0005D17C  4E 80 00 20 */	blr
.endfn xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3

# 0x800600A0 - 0x80060158
.section .text, "ax", unique, 5
.balign 4

# xVec2::operator+=(const xVec2&)
.fn __apl__5xVec2FRC5xVec2, weak
/* 800600A0 0005D180  C0 43 00 00 */	lfs f2, 0x0(r3)
/* 800600A4 0005D184  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 800600A8 0005D188  C0 04 00 04 */	lfs f0, 0x4(r4)
/* 800600AC 0005D18C  EC 22 08 2A */	fadds f1, f2, f1
/* 800600B0 0005D190  D0 23 00 00 */	stfs f1, 0x0(r3)
/* 800600B4 0005D194  C0 23 00 04 */	lfs f1, 0x4(r3)
/* 800600B8 0005D198  EC 01 00 2A */	fadds f0, f1, f0
/* 800600BC 0005D19C  D0 03 00 04 */	stfs f0, 0x4(r3)
/* 800600C0 0005D1A0  4E 80 00 20 */	blr
.endfn __apl__5xVec2FRC5xVec2

# xVec2::operator*(float) const
.fn __ml__5xVec2CFf, weak
/* 800600C4 0005D1A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800600C8 0005D1A8  7C 08 02 A6 */	mflr r0
/* 800600CC 0005D1AC  80 83 00 00 */	lwz r4, 0x0(r3)
/* 800600D0 0005D1B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800600D4 0005D1B4  80 03 00 04 */	lwz r0, 0x4(r3)
/* 800600D8 0005D1B8  38 61 00 08 */	addi r3, r1, 0x8
/* 800600DC 0005D1BC  90 81 00 08 */	stw r4, 0x8(r1)
/* 800600E0 0005D1C0  90 01 00 0C */	stw r0, 0xc(r1)
/* 800600E4 0005D1C4  48 00 00 1D */	bl __amu__5xVec2Ff
/* 800600E8 0005D1C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800600EC 0005D1CC  80 61 00 08 */	lwz r3, 0x8(r1)
/* 800600F0 0005D1D0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 800600F4 0005D1D4  7C 08 03 A6 */	mtlr r0
/* 800600F8 0005D1D8  38 21 00 10 */	addi r1, r1, 0x10
/* 800600FC 0005D1DC  4E 80 00 20 */	blr
.endfn __ml__5xVec2CFf

# xVec2::operator*=(float)
.fn __amu__5xVec2Ff, weak
/* 80060100 0005D1E0  C0 03 00 00 */	lfs f0, 0x0(r3)
/* 80060104 0005D1E4  EC 00 00 72 */	fmuls f0, f0, f1
/* 80060108 0005D1E8  D0 03 00 00 */	stfs f0, 0x0(r3)
/* 8006010C 0005D1EC  C0 03 00 04 */	lfs f0, 0x4(r3)
/* 80060110 0005D1F0  EC 00 00 72 */	fmuls f0, f0, f1
/* 80060114 0005D1F4  D0 03 00 04 */	stfs f0, 0x4(r3)
/* 80060118 0005D1F8  4E 80 00 20 */	blr
.endfn __amu__5xVec2Ff

# basic_rect<float>::center(float, float)
.fn "center__13basic_rect<f>Fff", weak
/* 8006011C 0005D1FC  C0 62 89 C8 */	lfs f3, "@1728"@sda21(r2)
/* 80060120 0005D200  C0 03 00 08 */	lfs f0, 0x8(r3)
/* 80060124 0005D204  EC 03 08 3C */	fnmsubs f0, f3, f0, f1
/* 80060128 0005D208  D0 03 00 00 */	stfs f0, 0x0(r3)
/* 8006012C 0005D20C  C0 22 89 C8 */	lfs f1, "@1728"@sda21(r2)
/* 80060130 0005D210  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80060134 0005D214  EC 01 10 3C */	fnmsubs f0, f1, f0, f2
/* 80060138 0005D218  D0 03 00 04 */	stfs f0, 0x4(r3)
/* 8006013C 0005D21C  4E 80 00 20 */	blr
.endfn "center__13basic_rect<f>Fff"

# basic_rect<float>::set_size(float, float)
.fn "set_size__13basic_rect<f>Fff", weak
/* 80060140 0005D220  D0 23 00 08 */	stfs f1, 0x8(r3)
/* 80060144 0005D224  D0 43 00 0C */	stfs f2, 0xc(r3)
/* 80060148 0005D228  4E 80 00 20 */	blr
.endfn "set_size__13basic_rect<f>Fff"

# basic_rect<float>::set_size(float)
.fn "set_size__13basic_rect<f>Ff", weak
/* 8006014C 0005D22C  D0 23 00 0C */	stfs f1, 0xc(r3)
/* 80060150 0005D230  D0 23 00 08 */	stfs f1, 0x8(r3)
/* 80060154 0005D234  4E 80 00 20 */	blr
.endfn "set_size__13basic_rect<f>Ff"

# 0x80060158 - 0x80060358
.section .text, "ax", unique, 6
.balign 4

# auto_tweak::load_param<unsigned int, int>(unsigned int&, int, int, int, xModelAssetParam*, unsigned int, const char*)
.fn "load_param<Ui,i>__10auto_tweakFRUiiiiP16xModelAssetParamUiPCc", local
/* 80060158 0005D238  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8006015C 0005D23C  7C 08 02 A6 */	mflr r0
/* 80060160 0005D240  90 01 00 24 */	stw r0, 0x24(r1)
/* 80060164 0005D244  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80060168 0005D248  7C DF 33 78 */	mr r31, r6
/* 8006016C 0005D24C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80060170 0005D250  7C BE 2B 78 */	mr r30, r5
/* 80060174 0005D254  7D 25 4B 78 */	mr r5, r9
/* 80060178 0005D258  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8006017C 0005D25C  7C 9D 23 78 */	mr r29, r4
/* 80060180 0005D260  7D 04 43 78 */	mr r4, r8
/* 80060184 0005D264  93 81 00 10 */	stw r28, 0x10(r1)
/* 80060188 0005D268  7C 7C 1B 78 */	mr r28, r3
/* 8006018C 0005D26C  80 C3 00 00 */	lwz r6, 0x0(r3)
/* 80060190 0005D270  7C E3 3B 78 */	mr r3, r7
/* 80060194 0005D274  4B FF 5E 71 */	bl zParamGetInt__FP16xModelAssetParamUiPCci
/* 80060198 0005D278  7C 03 F0 00 */	cmpw r3, r30
/* 8006019C 0005D27C  40 80 00 0C */	bge .L_800601A8
/* 800601A0 0005D280  7F C3 F3 78 */	mr r3, r30
/* 800601A4 0005D284  48 00 00 10 */	b .L_800601B4
.L_800601A8:
/* 800601A8 0005D288  7C 03 F8 00 */	cmpw r3, r31
/* 800601AC 0005D28C  40 81 00 08 */	ble .L_800601B4
/* 800601B0 0005D290  7F E3 FB 78 */	mr r3, r31
.L_800601B4:
/* 800601B4 0005D294  7C 63 E9 D6 */	mullw r3, r3, r29
/* 800601B8 0005D298  90 7C 00 00 */	stw r3, 0x0(r28)
/* 800601BC 0005D29C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800601C0 0005D2A0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800601C4 0005D2A4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800601C8 0005D2A8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 800601CC 0005D2AC  83 81 00 10 */	lwz r28, 0x10(r1)
/* 800601D0 0005D2B0  7C 08 03 A6 */	mtlr r0
/* 800601D4 0005D2B4  38 21 00 20 */	addi r1, r1, 0x20
/* 800601D8 0005D2B8  4E 80 00 20 */	blr
.endfn "load_param<Ui,i>__10auto_tweakFRUiiiiP16xModelAssetParamUiPCc"

# auto_tweak::load_param<xVec3, int>(xVec3&, int, int, int, xModelAssetParam*, unsigned int, const char*)
.fn "load_param<5xVec3,i>__10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc", local
/* 800601DC 0005D2BC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800601E0 0005D2C0  7C 08 02 A6 */	mflr r0
/* 800601E4 0005D2C4  7C 6A 1B 78 */	mr r10, r3
/* 800601E8 0005D2C8  7D 04 43 78 */	mr r4, r8
/* 800601EC 0005D2CC  90 01 00 24 */	stw r0, 0x24(r1)
/* 800601F0 0005D2D0  38 C1 00 08 */	addi r6, r1, 0x8
/* 800601F4 0005D2D4  80 A3 00 00 */	lwz r5, 0x0(r3)
/* 800601F8 0005D2D8  80 03 00 04 */	lwz r0, 0x4(r3)
/* 800601FC 0005D2DC  7C E3 3B 78 */	mr r3, r7
/* 80060200 0005D2E0  7D 47 53 78 */	mr r7, r10
/* 80060204 0005D2E4  90 A1 00 08 */	stw r5, 0x8(r1)
/* 80060208 0005D2E8  7D 25 4B 78 */	mr r5, r9
/* 8006020C 0005D2EC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80060210 0005D2F0  80 0A 00 08 */	lwz r0, 0x8(r10)
/* 80060214 0005D2F4  90 01 00 10 */	stw r0, 0x10(r1)
/* 80060218 0005D2F8  4B FF 5F F5 */	bl zParamGetVector__FP16xModelAssetParamUiPCc5xVec3P5xVec3
/* 8006021C 0005D2FC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80060220 0005D300  7C 08 03 A6 */	mtlr r0
/* 80060224 0005D304  38 21 00 20 */	addi r1, r1, 0x20
/* 80060228 0005D308  4E 80 00 20 */	blr
.endfn "load_param<5xVec3,i>__10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc"

# auto_tweak::load_param<int, int>(int&, int, int, int, xModelAssetParam*, unsigned int, const char*)
.fn "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc", local
/* 8006022C 0005D30C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80060230 0005D310  7C 08 02 A6 */	mflr r0
/* 80060234 0005D314  90 01 00 24 */	stw r0, 0x24(r1)
/* 80060238 0005D318  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8006023C 0005D31C  7C DF 33 78 */	mr r31, r6
/* 80060240 0005D320  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80060244 0005D324  7C BE 2B 78 */	mr r30, r5
/* 80060248 0005D328  7D 25 4B 78 */	mr r5, r9
/* 8006024C 0005D32C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80060250 0005D330  7C 9D 23 78 */	mr r29, r4
/* 80060254 0005D334  7D 04 43 78 */	mr r4, r8
/* 80060258 0005D338  93 81 00 10 */	stw r28, 0x10(r1)
/* 8006025C 0005D33C  7C 7C 1B 78 */	mr r28, r3
/* 80060260 0005D340  80 C3 00 00 */	lwz r6, 0x0(r3)
/* 80060264 0005D344  7C E3 3B 78 */	mr r3, r7
/* 80060268 0005D348  4B FF 5D 9D */	bl zParamGetInt__FP16xModelAssetParamUiPCci
/* 8006026C 0005D34C  7C 03 F0 00 */	cmpw r3, r30
/* 80060270 0005D350  40 80 00 0C */	bge .L_8006027C
/* 80060274 0005D354  7F C3 F3 78 */	mr r3, r30
/* 80060278 0005D358  48 00 00 10 */	b .L_80060288
.L_8006027C:
/* 8006027C 0005D35C  7C 03 F8 00 */	cmpw r3, r31
/* 80060280 0005D360  40 81 00 08 */	ble .L_80060288
/* 80060284 0005D364  7F E3 FB 78 */	mr r3, r31
.L_80060288:
/* 80060288 0005D368  7C 63 E9 D6 */	mullw r3, r3, r29
/* 8006028C 0005D36C  90 7C 00 00 */	stw r3, 0x0(r28)
/* 80060290 0005D370  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80060294 0005D374  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80060298 0005D378  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8006029C 0005D37C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 800602A0 0005D380  83 81 00 10 */	lwz r28, 0x10(r1)
/* 800602A4 0005D384  7C 08 03 A6 */	mtlr r0
/* 800602A8 0005D388  38 21 00 20 */	addi r1, r1, 0x20
/* 800602AC 0005D38C  4E 80 00 20 */	blr
.endfn "load_param<i,i>__10auto_tweakFRiiiiP16xModelAssetParamUiPCc"

# auto_tweak::load_param<float, float>(float&, float, float, float, xModelAssetParam*, unsigned int, const char*)
.fn "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc", local
/* 800602B0 0005D390  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 800602B4 0005D394  7C 08 02 A6 */	mflr r0
/* 800602B8 0005D398  90 01 00 44 */	stw r0, 0x44(r1)
/* 800602BC 0005D39C  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 800602C0 0005D3A0  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 800602C4 0005D3A4  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 800602C8 0005D3A8  F3 C1 00 28 */	psq_st f30, 0x28(r1), 0, qr0
/* 800602CC 0005D3AC  DB A1 00 10 */	stfd f29, 0x10(r1)
/* 800602D0 0005D3B0  F3 A1 00 18 */	psq_st f29, 0x18(r1), 0, qr0
/* 800602D4 0005D3B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800602D8 0005D3B8  FF A0 08 90 */	fmr f29, f1
/* 800602DC 0005D3BC  C0 23 00 00 */	lfs f1, 0x0(r3)
/* 800602E0 0005D3C0  FF C0 10 90 */	fmr f30, f2
/* 800602E4 0005D3C4  7C 7F 1B 78 */	mr r31, r3
/* 800602E8 0005D3C8  7C 83 23 78 */	mr r3, r4
/* 800602EC 0005D3CC  7C A4 2B 78 */	mr r4, r5
/* 800602F0 0005D3D0  FF E0 18 90 */	fmr f31, f3
/* 800602F4 0005D3D4  7C C5 33 78 */	mr r5, r6
/* 800602F8 0005D3D8  4B FF 5D 71 */	bl zParamGetFloat__FP16xModelAssetParamUiPCcf
/* 800602FC 0005D3DC  D0 3F 00 00 */	stfs f1, 0x0(r31)
/* 80060300 0005D3E0  C0 1F 00 00 */	lfs f0, 0x0(r31)
/* 80060304 0005D3E4  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 80060308 0005D3E8  40 80 00 0C */	bge .L_80060314
/* 8006030C 0005D3EC  D3 DF 00 00 */	stfs f30, 0x0(r31)
/* 80060310 0005D3F0  48 00 00 10 */	b .L_80060320
.L_80060314:
/* 80060314 0005D3F4  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 80060318 0005D3F8  40 81 00 08 */	ble .L_80060320
/* 8006031C 0005D3FC  D3 FF 00 00 */	stfs f31, 0x0(r31)
.L_80060320:
/* 80060320 0005D400  C0 1F 00 00 */	lfs f0, 0x0(r31)
/* 80060324 0005D404  EC 00 07 72 */	fmuls f0, f0, f29
/* 80060328 0005D408  D0 1F 00 00 */	stfs f0, 0x0(r31)
/* 8006032C 0005D40C  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 80060330 0005D410  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80060334 0005D414  E3 C1 00 28 */	psq_l f30, 0x28(r1), 0, qr0
/* 80060338 0005D418  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8006033C 0005D41C  E3 A1 00 18 */	psq_l f29, 0x18(r1), 0, qr0
/* 80060340 0005D420  CB A1 00 10 */	lfd f29, 0x10(r1)
/* 80060344 0005D424  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80060348 0005D428  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8006034C 0005D42C  7C 08 03 A6 */	mtlr r0
/* 80060350 0005D430  38 21 00 40 */	addi r1, r1, 0x40
/* 80060354 0005D434  4E 80 00 20 */	blr
.endfn "load_param<f,f>__10auto_tweakFRffffP16xModelAssetParamUiPCc"

# 0x80060358 - 0x80060600
.section .text, "ax", unique, 7
.balign 4

# fixed_queue<cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::missle_record_data, 127>::push_front(const cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::missle_record_data&)
.fn "push_front__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>FRCQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data", weak
/* 80060358 0005D438  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8006035C 0005D43C  7C 08 02 A6 */	mflr r0
/* 80060360 0005D440  90 01 00 14 */	stw r0, 0x14(r1)
/* 80060364 0005D444  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80060368 0005D448  7C 9F 23 78 */	mr r31, r4
/* 8006036C 0005D44C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80060370 0005D450  7C 7E 1B 78 */	mr r30, r3
/* 80060374 0005D454  48 00 00 DD */	bl "push_front__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>Fv"
/* 80060378 0005D458  7F C3 F3 78 */	mr r3, r30
/* 8006037C 0005D45C  48 00 00 49 */	bl "front__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>Fv"
/* 80060380 0005D460  7F E4 FB 78 */	mr r4, r31
/* 80060384 0005D464  48 00 00 1D */	bl "__as__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_dataFRCQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data"
/* 80060388 0005D468  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8006038C 0005D46C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80060390 0005D470  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80060394 0005D474  7C 08 03 A6 */	mtlr r0
/* 80060398 0005D478  38 21 00 10 */	addi r1, r1, 0x10
/* 8006039C 0005D47C  4E 80 00 20 */	blr
.endfn "push_front__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>FRCQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::missle_record_data::operator=(const cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::missle_record_data&)
.fn "__as__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_dataFRCQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data", local
/* 800603A0 0005D480  80 04 00 00 */	lwz r0, 0x0(r4)
/* 800603A4 0005D484  80 A4 00 04 */	lwz r5, 0x4(r4)
/* 800603A8 0005D488  90 03 00 00 */	stw r0, 0x0(r3)
/* 800603AC 0005D48C  80 04 00 08 */	lwz r0, 0x8(r4)
/* 800603B0 0005D490  90 A3 00 04 */	stw r5, 0x4(r3)
/* 800603B4 0005D494  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 800603B8 0005D498  90 03 00 08 */	stw r0, 0x8(r3)
/* 800603BC 0005D49C  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 800603C0 0005D4A0  4E 80 00 20 */	blr
.endfn "__as__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_dataFRCQ313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data"

# fixed_queue<cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::missle_record_data, 127>::front()
.fn "front__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>Fv", weak
/* 800603C4 0005D4A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800603C8 0005D4A8  7C 08 02 A6 */	mflr r0
/* 800603CC 0005D4AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800603D0 0005D4B0  48 00 00 3D */	bl "begin__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFv"
/* 800603D4 0005D4B4  90 61 00 08 */	stw r3, 0x8(r1)
/* 800603D8 0005D4B8  38 61 00 08 */	addi r3, r1, 0x8
/* 800603DC 0005D4BC  90 81 00 0C */	stw r4, 0xc(r1)
/* 800603E0 0005D4C0  48 00 00 15 */	bl "__ml__Q286fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>8iteratorCFv"
/* 800603E4 0005D4C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800603E8 0005D4C8  7C 08 03 A6 */	mtlr r0
/* 800603EC 0005D4CC  38 21 00 10 */	addi r1, r1, 0x10
/* 800603F0 0005D4D0  4E 80 00 20 */	blr
.endfn "front__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>Fv"

# fixed_queue<cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::missle_record_data, 127>::iterator::operator*() const
.fn "__ml__Q286fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>8iteratorCFv", weak
/* 800603F4 0005D4D4  80 03 00 00 */	lwz r0, 0x0(r3)
/* 800603F8 0005D4D8  80 83 00 04 */	lwz r4, 0x4(r3)
/* 800603FC 0005D4DC  54 03 20 36 */	slwi r3, r0, 4
/* 80060400 0005D4E0  38 63 00 08 */	addi r3, r3, 0x8
/* 80060404 0005D4E4  7C 64 1A 14 */	add r3, r4, r3
/* 80060408 0005D4E8  4E 80 00 20 */	blr
.endfn "__ml__Q286fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>8iteratorCFv"

# fixed_queue<cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::missle_record_data, 127>::begin() const
.fn "begin__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFv", weak
/* 8006040C 0005D4EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80060410 0005D4F0  7C 08 02 A6 */	mflr r0
/* 80060414 0005D4F4  80 83 00 00 */	lwz r4, 0x0(r3)
/* 80060418 0005D4F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8006041C 0005D4FC  48 00 00 15 */	bl "create_iterator__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFUl"
/* 80060420 0005D500  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80060424 0005D504  7C 08 03 A6 */	mtlr r0
/* 80060428 0005D508  38 21 00 10 */	addi r1, r1, 0x10
/* 8006042C 0005D50C  4E 80 00 20 */	blr
.endfn "begin__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFv"

# fixed_queue<cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::missle_record_data, 127>::create_iterator(unsigned long) const
.fn "create_iterator__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFUl", weak
/* 80060430 0005D510  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80060434 0005D514  7C 60 1B 78 */	mr r0, r3
/* 80060438 0005D518  7C 83 23 78 */	mr r3, r4
/* 8006043C 0005D51C  90 81 00 08 */	stw r4, 0x8(r1)
/* 80060440 0005D520  7C 04 03 78 */	mr r4, r0
/* 80060444 0005D524  90 01 00 0C */	stw r0, 0xc(r1)
/* 80060448 0005D528  38 21 00 10 */	addi r1, r1, 0x10
/* 8006044C 0005D52C  4E 80 00 20 */	blr
.endfn "create_iterator__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFUl"

# fixed_queue<cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::missle_record_data, 127>::push_front()
.fn "push_front__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>Fv", weak
/* 80060450 0005D530  80 83 00 00 */	lwz r4, 0x0(r3)
/* 80060454 0005D534  38 04 00 7F */	addi r0, r4, 0x7f
/* 80060458 0005D538  54 00 06 7E */	clrlwi r0, r0, 25
/* 8006045C 0005D53C  90 03 00 00 */	stw r0, 0x0(r3)
/* 80060460 0005D540  4E 80 00 20 */	blr
.endfn "push_front__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>Fv"

# fixed_queue<cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::missle_record_data, 127>::reset()
.fn "reset__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>Fv", weak
/* 80060464 0005D544  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80060468 0005D548  7C 08 02 A6 */	mflr r0
/* 8006046C 0005D54C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80060470 0005D550  48 00 00 15 */	bl "clear__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>Fv"
/* 80060474 0005D554  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80060478 0005D558  7C 08 03 A6 */	mtlr r0
/* 8006047C 0005D55C  38 21 00 10 */	addi r1, r1, 0x10
/* 80060480 0005D560  4E 80 00 20 */	blr
.endfn "reset__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>Fv"

# fixed_queue<cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::missle_record_data, 127>::clear()
.fn "clear__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>Fv", weak
/* 80060484 0005D564  38 00 00 00 */	li r0, 0x0
/* 80060488 0005D568  90 03 00 04 */	stw r0, 0x4(r3)
/* 8006048C 0005D56C  90 03 00 00 */	stw r0, 0x0(r3)
/* 80060490 0005D570  4E 80 00 20 */	blr
.endfn "clear__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>Fv"

# fixed_queue<cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::missle_record_data, 127>::pop_back()
.fn "pop_back__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>Fv", weak
/* 80060494 0005D574  80 83 00 04 */	lwz r4, 0x4(r3)
/* 80060498 0005D578  38 04 00 7F */	addi r0, r4, 0x7f
/* 8006049C 0005D57C  54 00 06 7E */	clrlwi r0, r0, 25
/* 800604A0 0005D580  90 03 00 04 */	stw r0, 0x4(r3)
/* 800604A4 0005D584  4E 80 00 20 */	blr
.endfn "pop_back__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>Fv"

# fixed_queue<cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::missle_record_data, 127>::full() const
.fn "full__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFv", weak
/* 800604A8 0005D588  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800604AC 0005D58C  7C 08 02 A6 */	mflr r0
/* 800604B0 0005D590  90 01 00 14 */	stw r0, 0x14(r1)
/* 800604B4 0005D594  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800604B8 0005D598  93 C1 00 08 */	stw r30, 0x8(r1)
/* 800604BC 0005D59C  7C 7E 1B 78 */	mr r30, r3
/* 800604C0 0005D5A0  48 00 00 35 */	bl "max_size__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFv"
/* 800604C4 0005D5A4  7C 7F 1B 78 */	mr r31, r3
/* 800604C8 0005D5A8  7F C3 F3 78 */	mr r3, r30
/* 800604CC 0005D5AC  48 00 00 31 */	bl "size__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFv"
/* 800604D0 0005D5B0  7C 03 F8 50 */	subf r0, r3, r31
/* 800604D4 0005D5B4  7C 00 00 34 */	cntlzw r0, r0
/* 800604D8 0005D5B8  54 03 D9 7E */	srwi r3, r0, 5
/* 800604DC 0005D5BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800604E0 0005D5C0  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 800604E4 0005D5C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800604E8 0005D5C8  7C 08 03 A6 */	mtlr r0
/* 800604EC 0005D5CC  38 21 00 10 */	addi r1, r1, 0x10
/* 800604F0 0005D5D0  4E 80 00 20 */	blr
.endfn "full__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFv"

# fixed_queue<cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::missle_record_data, 127>::max_size() const
.fn "max_size__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFv", weak
/* 800604F4 0005D5D4  38 60 00 7F */	li r3, 0x7f
/* 800604F8 0005D5D8  4E 80 00 20 */	blr
.endfn "max_size__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFv"

# fixed_queue<cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::missle_record_data, 127>::size() const
.fn "size__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFv", weak
/* 800604FC 0005D5DC  80 83 00 04 */	lwz r4, 0x4(r3)
/* 80060500 0005D5E0  80 63 00 00 */	lwz r3, 0x0(r3)
/* 80060504 0005D5E4  38 04 00 80 */	addi r0, r4, 0x80
/* 80060508 0005D5E8  7C 03 00 50 */	subf r0, r3, r0
/* 8006050C 0005D5EC  54 03 06 7E */	clrlwi r3, r0, 25
/* 80060510 0005D5F0  4E 80 00 20 */	blr
.endfn "size__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFv"

# fixed_queue<cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::missle_record_data, 127>::operator[](int)
.fn "__vc__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>Fi", weak
/* 80060514 0005D5F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80060518 0005D5F8  7C 08 02 A6 */	mflr r0
/* 8006051C 0005D5FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80060520 0005D600  48 00 00 15 */	bl "get_at__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFi"
/* 80060524 0005D604  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80060528 0005D608  7C 08 03 A6 */	mtlr r0
/* 8006052C 0005D60C  38 21 00 10 */	addi r1, r1, 0x10
/* 80060530 0005D610  4E 80 00 20 */	blr
.endfn "__vc__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>Fi"

# fixed_queue<cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::missle_record_data, 127>::get_at(int) const
.fn "get_at__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFi", weak
/* 80060534 0005D614  80 03 00 00 */	lwz r0, 0x0(r3)
/* 80060538 0005D618  7C 65 1B 78 */	mr r5, r3
/* 8006053C 0005D61C  7C 60 22 14 */	add r3, r0, r4
/* 80060540 0005D620  38 03 00 80 */	addi r0, r3, 0x80
/* 80060544 0005D624  54 03 25 76 */	clrlslwi r3, r0, 25, 4
/* 80060548 0005D628  38 63 00 08 */	addi r3, r3, 0x8
/* 8006054C 0005D62C  7C 65 1A 14 */	add r3, r5, r3
/* 80060550 0005D630  4E 80 00 20 */	blr
.endfn "get_at__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFi"

# fixed_queue<cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::missle_record_data, 127>::iterator::operator!=(const fixed_queue<cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::missle_record_data, 127>::iterator&) const
.fn "__ne__Q286fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>8iteratorCFRCQ286fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>8iterator", weak
/* 80060554 0005D634  80 A3 00 00 */	lwz r5, 0x0(r3)
/* 80060558 0005D638  80 04 00 00 */	lwz r0, 0x0(r4)
/* 8006055C 0005D63C  7C 65 00 50 */	subf r3, r5, r0
/* 80060560 0005D640  7C 00 28 50 */	subf r0, r0, r5
/* 80060564 0005D644  7C 60 03 78 */	or r0, r3, r0
/* 80060568 0005D648  54 03 0F FE */	srwi r3, r0, 31
/* 8006056C 0005D64C  4E 80 00 20 */	blr
.endfn "__ne__Q286fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>8iteratorCFRCQ286fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>8iterator"

# fixed_queue<cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::missle_record_data, 127>::iterator::operator++()
.fn "__pp__Q286fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>8iteratorFv", weak
/* 80060570 0005D650  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80060574 0005D654  7C 08 02 A6 */	mflr r0
/* 80060578 0005D658  38 80 00 01 */	li r4, 0x1
/* 8006057C 0005D65C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80060580 0005D660  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80060584 0005D664  7C 7F 1B 78 */	mr r31, r3
/* 80060588 0005D668  48 00 00 1D */	bl "__apl__Q286fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>8iteratorFi"
/* 8006058C 0005D66C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80060590 0005D670  7F E3 FB 78 */	mr r3, r31
/* 80060594 0005D674  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80060598 0005D678  7C 08 03 A6 */	mtlr r0
/* 8006059C 0005D67C  38 21 00 10 */	addi r1, r1, 0x10
/* 800605A0 0005D680  4E 80 00 20 */	blr
.endfn "__pp__Q286fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>8iteratorFv"

# fixed_queue<cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::missle_record_data, 127>::iterator::operator+=(int)
.fn "__apl__Q286fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>8iteratorFi", weak
/* 800605A4 0005D684  80 03 00 00 */	lwz r0, 0x0(r3)
/* 800605A8 0005D688  7C 80 22 14 */	add r4, r0, r4
/* 800605AC 0005D68C  38 04 00 80 */	addi r0, r4, 0x80
/* 800605B0 0005D690  54 00 06 7E */	clrlwi r0, r0, 25
/* 800605B4 0005D694  90 03 00 00 */	stw r0, 0x0(r3)
/* 800605B8 0005D698  4E 80 00 20 */	blr
.endfn "__apl__Q286fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>8iteratorFi"

# fixed_queue<cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::missle_record_data, 127>::iterator::operator->() const
.fn "__rf__Q286fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>8iteratorCFv", weak
/* 800605BC 0005D69C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800605C0 0005D6A0  7C 08 02 A6 */	mflr r0
/* 800605C4 0005D6A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800605C8 0005D6A8  4B FF FE 2D */	bl "__ml__Q286fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>8iteratorCFv"
/* 800605CC 0005D6AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800605D0 0005D6B0  7C 08 03 A6 */	mtlr r0
/* 800605D4 0005D6B4  38 21 00 10 */	addi r1, r1, 0x10
/* 800605D8 0005D6B8  4E 80 00 20 */	blr
.endfn "__rf__Q286fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>8iteratorCFv"

# fixed_queue<cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::missle_record_data, 127>::end() const
.fn "end__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFv", weak
/* 800605DC 0005D6BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800605E0 0005D6C0  7C 08 02 A6 */	mflr r0
/* 800605E4 0005D6C4  80 83 00 04 */	lwz r4, 0x4(r3)
/* 800605E8 0005D6C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 800605EC 0005D6CC  4B FF FE 45 */	bl "create_iterator__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFUl"
/* 800605F0 0005D6D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800605F4 0005D6D4  7C 08 03 A6 */	mtlr r0
/* 800605F8 0005D6D8  38 21 00 10 */	addi r1, r1, 0x10
/* 800605FC 0005D6DC  4E 80 00 20 */	blr
.endfn "end__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFv"

# 0x80060600 - 0x80060610
.section .text, "ax", unique, 8
.balign 4

# NPCHazard::MarkForRecycle()
.fn MarkForRecycle__9NPCHazardFv, weak
/* 80060600 0005D6E0  80 03 00 04 */	lwz r0, 0x4(r3)
/* 80060604 0005D6E4  60 00 00 04 */	ori r0, r0, 0x4
/* 80060608 0005D6E8  90 03 00 04 */	stw r0, 0x4(r3)
/* 8006060C 0005D6EC  4E 80 00 20 */	blr
.endfn MarkForRecycle__9NPCHazardFv

# 0x80060610 - 0x80060644
.section .text, "ax", unique, 9
.balign 4

# xQuickCullForSphere(xQCData*, const xSphere*)
.fn xQuickCullForSphere__FP7xQCDataPC7xSphere, weak
/* 80060610 0005D6F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80060614 0005D6F4  7C 08 02 A6 */	mflr r0
/* 80060618 0005D6F8  3C A0 80 3C */	lis r5, xqc_def_ctrl@ha
/* 8006061C 0005D6FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80060620 0005D700  7C 60 1B 78 */	mr r0, r3
/* 80060624 0005D704  38 65 C0 B0 */	addi r3, r5, xqc_def_ctrl@l
/* 80060628 0005D708  7C 85 23 78 */	mr r5, r4
/* 8006062C 0005D70C  7C 04 03 78 */	mr r4, r0
/* 80060630 0005D710  4B FD C4 69 */	bl xQuickCullForSphere__FP10xQCControlP7xQCDataPC7xSphere
/* 80060634 0005D714  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80060638 0005D718  7C 08 03 A6 */	mtlr r0
/* 8006063C 0005D71C  38 21 00 10 */	addi r1, r1, 0x10
/* 80060640 0005D720  4E 80 00 20 */	blr
.endfn xQuickCullForSphere__FP7xQCDataPC7xSphere

# 0x80060644 - 0x800609B4
.section .text, "ax", unique, 10
.balign 4

# xGridCheckBound<cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_explode::cb_damage_ent>(xGrid&, const xBound&, const xQCData&, cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_explode::cb_damage_ent)
.fn "xGridCheckBound<Q413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode13cb_damage_ent>__FR5xGridRC6xBoundRC7xQCDataQ413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode13cb_damage_ent", weak
/* 80060644 0005D724  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80060648 0005D728  7C 08 02 A6 */	mflr r0
/* 8006064C 0005D72C  90 01 00 64 */	stw r0, 0x64(r1)
/* 80060650 0005D730  BF 21 00 44 */	stmw r25, 0x44(r1)
/* 80060654 0005D734  7C 7D 1B 78 */	mr r29, r3
/* 80060658 0005D738  7C BE 2B 78 */	mr r30, r5
/* 8006065C 0005D73C  7C DF 33 78 */	mr r31, r6
/* 80060660 0005D740  38 61 00 24 */	addi r3, r1, 0x24
/* 80060664 0005D744  4B FA 9F 6D */	bl xBoundGetBox__FR4xBoxRC6xBound
/* 80060668 0005D748  C0 42 89 D8 */	lfs f2, "@2509"@sda21(r2)
/* 8006066C 0005D74C  7F A3 EB 78 */	mr r3, r29
/* 80060670 0005D750  C0 1D 00 1C */	lfs f0, 0x1c(r29)
/* 80060674 0005D754  C0 3D 00 18 */	lfs f1, 0x18(r29)
/* 80060678 0005D758  EC A2 00 32 */	fmuls f5, f2, f0
/* 8006067C 0005D75C  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 80060680 0005D760  EC 82 00 72 */	fmuls f4, f2, f1
/* 80060684 0005D764  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 80060688 0005D768  C0 61 00 24 */	lfs f3, 0x24(r1)
/* 8006068C 0005D76C  EC 40 28 28 */	fsubs f2, f0, f5
/* 80060690 0005D770  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 80060694 0005D774  EC 21 20 28 */	fsubs f1, f1, f4
/* 80060698 0005D778  EC 63 20 2A */	fadds f3, f3, f4
/* 8006069C 0005D77C  EC 00 28 2A */	fadds f0, f0, f5
/* 800606A0 0005D780  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 800606A4 0005D784  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 800606A8 0005D788  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 800606AC 0005D78C  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 800606B0 0005D790  4B FE 0F 65 */	bl get_grid_index__FRC5xGridff
/* 800606B4 0005D794  90 61 00 0C */	stw r3, 0xc(r1)
/* 800606B8 0005D798  38 61 00 10 */	addi r3, r1, 0x10
/* 800606BC 0005D79C  38 81 00 0C */	addi r4, r1, 0xc
/* 800606C0 0005D7A0  4B FE 0D 69 */	bl __as__10grid_indexFRC10grid_index
/* 800606C4 0005D7A4  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 800606C8 0005D7A8  7F A3 EB 78 */	mr r3, r29
/* 800606CC 0005D7AC  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 800606D0 0005D7B0  4B FE 0F 45 */	bl get_grid_index__FRC5xGridff
/* 800606D4 0005D7B4  90 61 00 08 */	stw r3, 0x8(r1)
/* 800606D8 0005D7B8  38 61 00 14 */	addi r3, r1, 0x14
/* 800606DC 0005D7BC  38 81 00 08 */	addi r4, r1, 0x8
/* 800606E0 0005D7C0  4B FE 0D 49 */	bl __as__10grid_indexFRC10grid_index
/* 800606E4 0005D7C4  38 7D 00 30 */	addi r3, r29, 0x30
/* 800606E8 0005D7C8  38 81 00 18 */	addi r4, r1, 0x18
/* 800606EC 0005D7CC  4B FB B2 A9 */	bl xGridIterFirstCell__FPP10xGridBoundR13xGridIterator
/* 800606F0 0005D7D0  7C 7C 1B 78 */	mr r28, r3
/* 800606F4 0005D7D4  48 00 00 48 */	b .L_8006073C
.L_800606F8:
/* 800606F8 0005D7D8  7F C3 F3 78 */	mr r3, r30
/* 800606FC 0005D7DC  38 9C 00 14 */	addi r4, r28, 0x14
/* 80060700 0005D7E0  4B FD BE C1 */	bl xQuickCullIsects__FPC7xQCDataPC7xQCData
/* 80060704 0005D7E4  2C 03 00 00 */	cmpwi r3, 0x0
/* 80060708 0005D7E8  41 82 00 28 */	beq .L_80060730
/* 8006070C 0005D7EC  80 9C 00 00 */	lwz r4, 0x0(r28)
/* 80060710 0005D7F0  7F E3 FB 78 */	mr r3, r31
/* 80060714 0005D7F4  7F 85 E3 78 */	mr r5, r28
/* 80060718 0005D7F8  4B FF F5 4D */	bl "__cl__Q413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode13cb_damage_entFR4xEntR10xGridBound"
/* 8006071C 0005D7FC  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80060720 0005D800  40 82 00 10 */	bne .L_80060730
/* 80060724 0005D804  38 61 00 18 */	addi r3, r1, 0x18
/* 80060728 0005D808  4B FB B3 89 */	bl xGridIterClose__FR13xGridIterator
/* 8006072C 0005D80C  48 00 00 BC */	b .L_800607E8
.L_80060730:
/* 80060730 0005D810  38 61 00 18 */	addi r3, r1, 0x18
/* 80060734 0005D814  4B FB B3 0D */	bl xGridIterNextCell__FR13xGridIterator
/* 80060738 0005D818  7C 7C 1B 78 */	mr r28, r3
.L_8006073C:
/* 8006073C 0005D81C  28 1C 00 00 */	cmplwi r28, 0x0
/* 80060740 0005D820  40 82 FF B8 */	bne .L_800606F8
/* 80060744 0005D824  A3 61 00 10 */	lhz r27, 0x10(r1)
/* 80060748 0005D828  48 00 00 90 */	b .L_800607D8
.L_8006074C:
/* 8006074C 0005D82C  A3 41 00 12 */	lhz r26, 0x12(r1)
/* 80060750 0005D830  57 7C 04 3E */	clrlwi r28, r27, 16
/* 80060754 0005D834  48 00 00 70 */	b .L_800607C4
.L_80060758:
/* 80060758 0005D838  7F A3 EB 78 */	mr r3, r29
/* 8006075C 0005D83C  7F 84 E3 78 */	mr r4, r28
/* 80060760 0005D840  57 45 04 3E */	clrlwi r5, r26, 16
/* 80060764 0005D844  38 C1 00 18 */	addi r6, r1, 0x18
/* 80060768 0005D848  4B FB B2 65 */	bl xGridIterFirstCell__FP5xGridiiR13xGridIterator
/* 8006076C 0005D84C  7C 79 1B 78 */	mr r25, r3
/* 80060770 0005D850  48 00 00 48 */	b .L_800607B8
.L_80060774:
/* 80060774 0005D854  7F C3 F3 78 */	mr r3, r30
/* 80060778 0005D858  38 99 00 14 */	addi r4, r25, 0x14
/* 8006077C 0005D85C  4B FD BE 45 */	bl xQuickCullIsects__FPC7xQCDataPC7xQCData
/* 80060780 0005D860  2C 03 00 00 */	cmpwi r3, 0x0
/* 80060784 0005D864  41 82 00 28 */	beq .L_800607AC
/* 80060788 0005D868  80 99 00 00 */	lwz r4, 0x0(r25)
/* 8006078C 0005D86C  7F E3 FB 78 */	mr r3, r31
/* 80060790 0005D870  7F 25 CB 78 */	mr r5, r25
/* 80060794 0005D874  4B FF F4 D1 */	bl "__cl__Q413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode13cb_damage_entFR4xEntR10xGridBound"
/* 80060798 0005D878  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8006079C 0005D87C  40 82 00 10 */	bne .L_800607AC
/* 800607A0 0005D880  38 61 00 18 */	addi r3, r1, 0x18
/* 800607A4 0005D884  4B FB B3 0D */	bl xGridIterClose__FR13xGridIterator
/* 800607A8 0005D888  48 00 00 40 */	b .L_800607E8
.L_800607AC:
/* 800607AC 0005D88C  38 61 00 18 */	addi r3, r1, 0x18
/* 800607B0 0005D890  4B FB B2 91 */	bl xGridIterNextCell__FR13xGridIterator
/* 800607B4 0005D894  7C 79 1B 78 */	mr r25, r3
.L_800607B8:
/* 800607B8 0005D898  28 19 00 00 */	cmplwi r25, 0x0
/* 800607BC 0005D89C  40 82 FF B8 */	bne .L_80060774
/* 800607C0 0005D8A0  3B 5A 00 01 */	addi r26, r26, 0x1
.L_800607C4:
/* 800607C4 0005D8A4  A0 01 00 16 */	lhz r0, 0x16(r1)
/* 800607C8 0005D8A8  57 43 04 3E */	clrlwi r3, r26, 16
/* 800607CC 0005D8AC  7C 03 00 40 */	cmplw r3, r0
/* 800607D0 0005D8B0  40 81 FF 88 */	ble .L_80060758
/* 800607D4 0005D8B4  3B 7B 00 01 */	addi r27, r27, 0x1
.L_800607D8:
/* 800607D8 0005D8B8  A0 01 00 14 */	lhz r0, 0x14(r1)
/* 800607DC 0005D8BC  57 63 04 3E */	clrlwi r3, r27, 16
/* 800607E0 0005D8C0  7C 03 00 40 */	cmplw r3, r0
/* 800607E4 0005D8C4  40 81 FF 68 */	ble .L_8006074C
.L_800607E8:
/* 800607E8 0005D8C8  BB 21 00 44 */	lmw r25, 0x44(r1)
/* 800607EC 0005D8CC  80 01 00 64 */	lwz r0, 0x64(r1)
/* 800607F0 0005D8D0  7C 08 03 A6 */	mtlr r0
/* 800607F4 0005D8D4  38 21 00 60 */	addi r1, r1, 0x60
/* 800607F8 0005D8D8  4E 80 00 20 */	blr
.endfn "xGridCheckBound<Q413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode13cb_damage_ent>__FR5xGridRC6xBoundRC7xQCDataQ413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode13cb_damage_ent"

# xGridCheckBound<cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_attach::cb_lock_targets>(xGrid&, const xBound&, const xQCData&, cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_attach::cb_lock_targets)
.fn "xGridCheckBound<Q413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attach15cb_lock_targets>__FR5xGridRC6xBoundRC7xQCDataQ413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attach15cb_lock_targets", weak
/* 800607FC 0005D8DC  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80060800 0005D8E0  7C 08 02 A6 */	mflr r0
/* 80060804 0005D8E4  90 01 00 64 */	stw r0, 0x64(r1)
/* 80060808 0005D8E8  BF 21 00 44 */	stmw r25, 0x44(r1)
/* 8006080C 0005D8EC  7C 7D 1B 78 */	mr r29, r3
/* 80060810 0005D8F0  7C BE 2B 78 */	mr r30, r5
/* 80060814 0005D8F4  7C DF 33 78 */	mr r31, r6
/* 80060818 0005D8F8  38 61 00 24 */	addi r3, r1, 0x24
/* 8006081C 0005D8FC  4B FA 9D B5 */	bl xBoundGetBox__FR4xBoxRC6xBound
/* 80060820 0005D900  C0 42 89 D8 */	lfs f2, "@2509"@sda21(r2)
/* 80060824 0005D904  7F A3 EB 78 */	mr r3, r29
/* 80060828 0005D908  C0 1D 00 1C */	lfs f0, 0x1c(r29)
/* 8006082C 0005D90C  C0 3D 00 18 */	lfs f1, 0x18(r29)
/* 80060830 0005D910  EC A2 00 32 */	fmuls f5, f2, f0
/* 80060834 0005D914  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 80060838 0005D918  EC 82 00 72 */	fmuls f4, f2, f1
/* 8006083C 0005D91C  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 80060840 0005D920  C0 61 00 24 */	lfs f3, 0x24(r1)
/* 80060844 0005D924  EC 40 28 28 */	fsubs f2, f0, f5
/* 80060848 0005D928  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 8006084C 0005D92C  EC 21 20 28 */	fsubs f1, f1, f4
/* 80060850 0005D930  EC 63 20 2A */	fadds f3, f3, f4
/* 80060854 0005D934  EC 00 28 2A */	fadds f0, f0, f5
/* 80060858 0005D938  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 8006085C 0005D93C  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 80060860 0005D940  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 80060864 0005D944  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80060868 0005D948  4B FE 0D AD */	bl get_grid_index__FRC5xGridff
/* 8006086C 0005D94C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80060870 0005D950  38 61 00 10 */	addi r3, r1, 0x10
/* 80060874 0005D954  38 81 00 0C */	addi r4, r1, 0xc
/* 80060878 0005D958  4B FE 0B B1 */	bl __as__10grid_indexFRC10grid_index
/* 8006087C 0005D95C  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80060880 0005D960  7F A3 EB 78 */	mr r3, r29
/* 80060884 0005D964  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 80060888 0005D968  4B FE 0D 8D */	bl get_grid_index__FRC5xGridff
/* 8006088C 0005D96C  90 61 00 08 */	stw r3, 0x8(r1)
/* 80060890 0005D970  38 61 00 14 */	addi r3, r1, 0x14
/* 80060894 0005D974  38 81 00 08 */	addi r4, r1, 0x8
/* 80060898 0005D978  4B FE 0B 91 */	bl __as__10grid_indexFRC10grid_index
/* 8006089C 0005D97C  38 7D 00 30 */	addi r3, r29, 0x30
/* 800608A0 0005D980  38 81 00 18 */	addi r4, r1, 0x18
/* 800608A4 0005D984  4B FB B0 F1 */	bl xGridIterFirstCell__FPP10xGridBoundR13xGridIterator
/* 800608A8 0005D988  7C 7C 1B 78 */	mr r28, r3
/* 800608AC 0005D98C  48 00 00 48 */	b .L_800608F4
.L_800608B0:
/* 800608B0 0005D990  7F C3 F3 78 */	mr r3, r30
/* 800608B4 0005D994  38 9C 00 14 */	addi r4, r28, 0x14
/* 800608B8 0005D998  4B FD BD 09 */	bl xQuickCullIsects__FPC7xQCDataPC7xQCData
/* 800608BC 0005D99C  2C 03 00 00 */	cmpwi r3, 0x0
/* 800608C0 0005D9A0  41 82 00 28 */	beq .L_800608E8
/* 800608C4 0005D9A4  80 9C 00 00 */	lwz r4, 0x0(r28)
/* 800608C8 0005D9A8  7F E3 FB 78 */	mr r3, r31
/* 800608CC 0005D9AC  7F 85 E3 78 */	mr r5, r28
/* 800608D0 0005D9B0  4B FF F4 E9 */	bl "__cl__Q413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attach15cb_lock_targetsFR4xEntR10xGridBound"
/* 800608D4 0005D9B4  54 60 06 3F */	clrlwi. r0, r3, 24
/* 800608D8 0005D9B8  40 82 00 10 */	bne .L_800608E8
/* 800608DC 0005D9BC  38 61 00 18 */	addi r3, r1, 0x18
/* 800608E0 0005D9C0  4B FB B1 D1 */	bl xGridIterClose__FR13xGridIterator
/* 800608E4 0005D9C4  48 00 00 BC */	b .L_800609A0
.L_800608E8:
/* 800608E8 0005D9C8  38 61 00 18 */	addi r3, r1, 0x18
/* 800608EC 0005D9CC  4B FB B1 55 */	bl xGridIterNextCell__FR13xGridIterator
/* 800608F0 0005D9D0  7C 7C 1B 78 */	mr r28, r3
.L_800608F4:
/* 800608F4 0005D9D4  28 1C 00 00 */	cmplwi r28, 0x0
/* 800608F8 0005D9D8  40 82 FF B8 */	bne .L_800608B0
/* 800608FC 0005D9DC  A3 61 00 10 */	lhz r27, 0x10(r1)
/* 80060900 0005D9E0  48 00 00 90 */	b .L_80060990
.L_80060904:
/* 80060904 0005D9E4  A3 41 00 12 */	lhz r26, 0x12(r1)
/* 80060908 0005D9E8  57 7C 04 3E */	clrlwi r28, r27, 16
/* 8006090C 0005D9EC  48 00 00 70 */	b .L_8006097C
.L_80060910:
/* 80060910 0005D9F0  7F A3 EB 78 */	mr r3, r29
/* 80060914 0005D9F4  7F 84 E3 78 */	mr r4, r28
/* 80060918 0005D9F8  57 45 04 3E */	clrlwi r5, r26, 16
/* 8006091C 0005D9FC  38 C1 00 18 */	addi r6, r1, 0x18
/* 80060920 0005DA00  4B FB B0 AD */	bl xGridIterFirstCell__FP5xGridiiR13xGridIterator
/* 80060924 0005DA04  7C 79 1B 78 */	mr r25, r3
/* 80060928 0005DA08  48 00 00 48 */	b .L_80060970
.L_8006092C:
/* 8006092C 0005DA0C  7F C3 F3 78 */	mr r3, r30
/* 80060930 0005DA10  38 99 00 14 */	addi r4, r25, 0x14
/* 80060934 0005DA14  4B FD BC 8D */	bl xQuickCullIsects__FPC7xQCDataPC7xQCData
/* 80060938 0005DA18  2C 03 00 00 */	cmpwi r3, 0x0
/* 8006093C 0005DA1C  41 82 00 28 */	beq .L_80060964
/* 80060940 0005DA20  80 99 00 00 */	lwz r4, 0x0(r25)
/* 80060944 0005DA24  7F E3 FB 78 */	mr r3, r31
/* 80060948 0005DA28  7F 25 CB 78 */	mr r5, r25
/* 8006094C 0005DA2C  4B FF F4 6D */	bl "__cl__Q413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attach15cb_lock_targetsFR4xEntR10xGridBound"
/* 80060950 0005DA30  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80060954 0005DA34  40 82 00 10 */	bne .L_80060964
/* 80060958 0005DA38  38 61 00 18 */	addi r3, r1, 0x18
/* 8006095C 0005DA3C  4B FB B1 55 */	bl xGridIterClose__FR13xGridIterator
/* 80060960 0005DA40  48 00 00 40 */	b .L_800609A0
.L_80060964:
/* 80060964 0005DA44  38 61 00 18 */	addi r3, r1, 0x18
/* 80060968 0005DA48  4B FB B0 D9 */	bl xGridIterNextCell__FR13xGridIterator
/* 8006096C 0005DA4C  7C 79 1B 78 */	mr r25, r3
.L_80060970:
/* 80060970 0005DA50  28 19 00 00 */	cmplwi r25, 0x0
/* 80060974 0005DA54  40 82 FF B8 */	bne .L_8006092C
/* 80060978 0005DA58  3B 5A 00 01 */	addi r26, r26, 0x1
.L_8006097C:
/* 8006097C 0005DA5C  A0 01 00 16 */	lhz r0, 0x16(r1)
/* 80060980 0005DA60  57 43 04 3E */	clrlwi r3, r26, 16
/* 80060984 0005DA64  7C 03 00 40 */	cmplw r3, r0
/* 80060988 0005DA68  40 81 FF 88 */	ble .L_80060910
/* 8006098C 0005DA6C  3B 7B 00 01 */	addi r27, r27, 0x1
.L_80060990:
/* 80060990 0005DA70  A0 01 00 14 */	lhz r0, 0x14(r1)
/* 80060994 0005DA74  57 63 04 3E */	clrlwi r3, r27, 16
/* 80060998 0005DA78  7C 03 00 40 */	cmplw r3, r0
/* 8006099C 0005DA7C  40 81 FF 68 */	ble .L_80060904
.L_800609A0:
/* 800609A0 0005DA80  BB 21 00 44 */	lmw r25, 0x44(r1)
/* 800609A4 0005DA84  80 01 00 64 */	lwz r0, 0x64(r1)
/* 800609A8 0005DA88  7C 08 03 A6 */	mtlr r0
/* 800609AC 0005DA8C  38 21 00 60 */	addi r1, r1, 0x60
/* 800609B0 0005DA90  4E 80 00 20 */	blr
.endfn "xGridCheckBound<Q413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attach15cb_lock_targets>__FR5xGridRC6xBoundRC7xQCDataQ413cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attach15cb_lock_targets"

# 0x80251D0C - 0x80251D10
.section .ctors, "a"
.balign 4
	.4byte __sinit_zEntCruiseBubble_cpp

# 0x802550B8 - 0x80255D88
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

.obj "@822", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@822"

.obj "@881", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@881"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::wake_ribbon_curve
.obj "wake_ribbon_curve__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@", local
	.4byte 0x00000000
	.4byte 0xFFFFFF64
	.4byte 0x3E99999A
	.4byte 0x3F800000
	.4byte 0x00000000
	.4byte 0x3F800000
.endobj "wake_ribbon_curve__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::cheat_wake_ribbon_curve
.obj "cheat_wake_ribbon_curve__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@", local
	.4byte 0x00000000
	.4byte 0xFF9B9B64
	.4byte 0x3F000000
	.4byte 0x3F800000
	.4byte 0x00000000
	.4byte 0x40000000
.endobj "cheat_wake_ribbon_curve__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::explode_curve
.obj "explode_curve__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@", local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte 0x3DCCCCCD
	.4byte 0x3F000000
	.4byte 0xFFFFFFFF
	.4byte 0x40233333
	.4byte 0x3F800000
	.4byte 0xFFFFFF00
	.4byte 0x40A00000
.endobj "explode_curve__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::cheat_explode_curve
.obj "cheat_explode_curve__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@", local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte 0x3DCCCCCD
	.4byte 0x3F000000
	.4byte 0xFFFFFFFF
	.4byte 0x40633333
	.4byte 0x3F800000
	.4byte 0xFFFFFF00
	.4byte 0x40E00000
.endobj "cheat_explode_curve__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"

.obj "@2029", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@2029"

.obj "@2102", local
	.4byte 0x3F800000
	.4byte 0x3F800000
	.4byte 0x3F800000
.endobj "@2102"

.obj "@2121", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@2121"

.obj "@2168", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@2168"

.obj "@2673", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@2673"

.obj "@2674", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@2674"

.obj "@2675", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@2675"

.obj "@2825", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x3F800000
.endobj "@2825"

.obj "@2826", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0xBC23D70A
.endobj "@2826"

.obj "@stringBase0", local
	.4byte 0x49646C65
	.byte 0x30, 0x31, 0x00
.L_80255343:
	.4byte 0x49646C65
	.byte 0x30, 0x32, 0x00
.L_8025534A:
	.4byte 0x49646C65
	.byte 0x30, 0x33, 0x00
.L_80255351:
	.4byte 0x49646C65
	.byte 0x30, 0x34, 0x00
.L_80255358:
	.4byte 0x49646C65
	.byte 0x30, 0x35, 0x00
.L_8025535F:
	.4byte 0x49646C65
	.byte 0x30, 0x36, 0x00
.L_80255366:
	.4byte 0x49646C65
	.byte 0x30, 0x37, 0x00
.L_8025536D:
	.4byte 0x49646C65
	.byte 0x30, 0x38, 0x00
.L_80255374:
	.4byte 0x49646C65
	.byte 0x30, 0x39, 0x00
.L_8025537B:
	.4byte 0x49646C65
	.byte 0x31, 0x30, 0x00
.L_80255382:
	.4byte 0x49646C65
	.byte 0x31, 0x31, 0x00
.L_80255389:
	.4byte 0x49646C65
	.byte 0x31, 0x32, 0x00
.L_80255390:
	.4byte 0x49646C65
	.byte 0x31, 0x33, 0x00
.L_80255397:
	.4byte 0x536C6970
	.4byte 0x49646C65
	.byte 0x30, 0x31, 0x00
.L_802553A2:
	.4byte 0x496E6163
	.4byte 0x74697665
	.byte 0x30, 0x31, 0x00
.L_802553AD:
	.4byte 0x496E6163
	.4byte 0x74697665
	.byte 0x30, 0x32, 0x00
.L_802553B8:
	.4byte 0x496E6163
	.4byte 0x74697665
	.byte 0x30, 0x33, 0x00
.L_802553C3:
	.4byte 0x496E6163
	.4byte 0x74697665
	.byte 0x30, 0x34, 0x00
.L_802553CE:
	.4byte 0x496E6163
	.4byte 0x74697665
	.byte 0x30, 0x35, 0x00
.L_802553D9:
	.4byte 0x496E6163
	.4byte 0x74697665
	.byte 0x30, 0x36, 0x00
.L_802553E4:
	.4byte 0x496E6163
	.4byte 0x74697665
	.byte 0x30, 0x37, 0x00
.L_802553EF:
	.4byte 0x496E6163
	.4byte 0x74697665
	.byte 0x30, 0x38, 0x00
.L_802553FA:
	.4byte 0x496E6163
	.4byte 0x74697665
	.byte 0x30, 0x39, 0x00
.L_80255405:
	.4byte 0x496E6163
	.4byte 0x74697665
	.byte 0x31, 0x30, 0x00
.L_80255410:
	.4byte 0x57616C6B
	.byte 0x30, 0x31, 0x00
.L_80255417:
	.4byte 0x52756E30
	.2byte 0x3100
.L_8025541D:
	.4byte 0x52756E30
	.2byte 0x3200
.L_80255423:
	.4byte 0x52756E30
	.2byte 0x3300
.L_80255429:
	.4byte 0x4C616E64
	.byte 0x30, 0x31, 0x00
.L_80255430:
	.4byte 0x4C616E64
	.4byte 0x52756E30
	.2byte 0x3100
.L_8025543A:
	.4byte 0x4C616E64
	.4byte 0x48696768
	.byte 0x30, 0x31, 0x00
.L_80255445:
	.4byte 0x57616C6C
	.4byte 0x4C616E64
	.byte 0x30, 0x31, 0x00
.L_80255450:
	.4byte 0x48697430
	.2byte 0x3100
.L_80255456:
	.4byte 0x48697430
	.2byte 0x3200
.L_8025545C:
	.4byte 0x48697430
	.2byte 0x3300
.L_80255462:
	.4byte 0x48697430
	.2byte 0x3400
.L_80255468:
	.4byte 0x48697430
	.2byte 0x3500
.L_8025546E:
	.4byte 0x53425F63
	.4byte 0x72756973
	.4byte 0x655F7374
	.4byte 0x61727400
.L_8025547E:
	.4byte 0x53425F63
	.4byte 0x72756973
	.4byte 0x655F6869
	.2byte 0x7400
.L_8025548C:
	.4byte 0x53425F63
	.4byte 0x72756973
	.4byte 0x655F6E61
	.4byte 0x765F6C6F
	.4byte 0x6F700063
	.4byte 0x72756973
	.4byte 0x655F6275
	.4byte 0x62626C65
	.4byte 0x5F62696E
	.4byte 0x642E4D49
	.4byte 0x4E46006C
	.4byte 0x69676874
	.4byte 0x6E696E67
	.4byte 0x0057616B
	.4byte 0x65205269
	.4byte 0x62626F6E
	.4byte 0x20300050
	.4byte 0x6C617965
	.4byte 0x727C4372
	.4byte 0x75697365
	.4byte 0x20427562
	.4byte 0x626C657C
	.4byte 0x57616B65
	.4byte 0x20526962
	.4byte 0x626F6E20
	.4byte 0x307C0057
	.4byte 0x616B6520
	.4byte 0x52696262
	.4byte 0x6F6E2031
	.4byte 0x00506C61
	.4byte 0x7965727C
	.4byte 0x43727569
	.4byte 0x73652042
	.4byte 0x7562626C
	.4byte 0x657C5761
	.4byte 0x6B652052
	.4byte 0x6962626F
	.4byte 0x6E20317C
	.4byte 0x00706172
	.4byte 0x5F637275
	.4byte 0x6973655F
	.4byte 0x6578706C
	.4byte 0x6F646500
	.4byte 0x43727569
	.4byte 0x73652042
	.4byte 0x7562626C
	.4byte 0x65204578
	.4byte 0x706C6F73
	.4byte 0x696F6E00
	.4byte 0x63727569
	.4byte 0x73655F62
	.4byte 0x7562626C
	.4byte 0x655F6472
	.4byte 0x6F706C65
	.4byte 0x745F7368
	.4byte 0x7261706E
	.4byte 0x656C002E
	.4byte 0x6D696E66
	.4byte 0x002E6466
	.4byte 0x66007569
	.4byte 0x5F336469
	.4byte 0x636F6E5F
	.4byte 0x72657469
	.4byte 0x636C6500
	.4byte 0x75695F33
	.4byte 0x6469636F
	.4byte 0x6E5F7461
	.4byte 0x72676574
	.4byte 0x5F6C6F63
	.4byte 0x6B007569
	.4byte 0x5F336469
	.4byte 0x636F6E5F
	.4byte 0x6D697373
	.4byte 0x696C655F
	.4byte 0x6672616D
	.4byte 0x65303200
	.4byte 0x25303264
	.4byte 0x3A253032
	.4byte 0x64006175
	.4byte 0x72613200
	.4byte 0x61696D5F
	.4byte 0x64656C61
	.4byte 0x7900706C
	.4byte 0x61796572
	.4byte 0x2E68616C
	.4byte 0x745F7469
	.4byte 0x6D650070
	.4byte 0x6C617965
	.4byte 0x722E6169
	.4byte 0x6D2E7475
	.4byte 0x726E5F73
	.4byte 0x70656564
	.4byte 0x00706C61
	.4byte 0x7965722E
	.4byte 0x61696D2E
	.4byte 0x616E696D
	.4byte 0x5F64656C
	.4byte 0x74610070
	.4byte 0x6C617965
	.4byte 0x722E6669
	.4byte 0x72652E64
	.4byte 0x656C6179
	.4byte 0x5F77616E
	.4byte 0x64006D69
	.4byte 0x73736C65
	.4byte 0x2E6C6966
	.4byte 0x65006D69
	.4byte 0x73736C65
	.4byte 0x2E686974
	.4byte 0x5F646973
	.4byte 0x74006D69
	.4byte 0x73736C65
	.4byte 0x2E637261
	.4byte 0x73685F61
	.4byte 0x6E676C65
	.4byte 0x006D6973
	.4byte 0x736C652E
	.4byte 0x636F6C6C
	.4byte 0x6964655F
	.4byte 0x74776973
	.4byte 0x74006D69
	.4byte 0x73736C65
	.4byte 0x2E686974
	.4byte 0x5F746573
	.4byte 0x7473006D
	.4byte 0x6973736C
	.4byte 0x652E6170
	.4byte 0x70656172
	.4byte 0x2E64656C
	.4byte 0x61795F73
	.4byte 0x686F7700
	.4byte 0x6D697373
	.4byte 0x6C652E61
	.4byte 0x70706561
	.4byte 0x722E6465
	.4byte 0x6C61795F
	.4byte 0x666C7900
	.4byte 0x6D697373
	.4byte 0x6C652E61
	.4byte 0x70706561
	.4byte 0x722E6F66
	.4byte 0x66736574
	.4byte 0x006D6973
	.4byte 0x736C652E
	.4byte 0x666C792E
	.4byte 0x61636365
	.4byte 0x6C006D69
	.4byte 0x73736C65
	.4byte 0x2E666C79
	.4byte 0x2E6D6178
	.4byte 0x5F76656C
	.4byte 0x006D6973
	.4byte 0x736C652E
	.4byte 0x666C792E
	.4byte 0x656E6769
	.4byte 0x6E655F70
	.4byte 0x69746368
	.4byte 0x5F6D6178
	.4byte 0x006D6973
	.4byte 0x736C652E
	.4byte 0x666C792E
	.4byte 0x656E6769
	.4byte 0x6E655F70
	.4byte 0x69746368
	.4byte 0x5F73656E
	.4byte 0x73697469
	.4byte 0x76697479
	.4byte 0x006D6973
	.4byte 0x736C652E
	.4byte 0x666C792E
	.4byte 0x666C6173
	.4byte 0x685F696E
	.4byte 0x74657276
	.4byte 0x616C006D
	.4byte 0x6973736C
	.4byte 0x652E666C
	.4byte 0x792E7475
	.4byte 0x726E2E78
	.4byte 0x64656C74
	.4byte 0x61006D69
	.4byte 0x73736C65
	.4byte 0x2E666C79
	.4byte 0x2E747572
	.4byte 0x6E2E7964
	.4byte 0x656C7461
	.4byte 0x006D6973
	.4byte 0x736C652E
	.4byte 0x666C792E
	.4byte 0x7475726E
	.4byte 0x2E786465
	.4byte 0x63617900
	.4byte 0x6D697373
	.4byte 0x6C652E66
	.4byte 0x6C792E74
	.4byte 0x75726E2E
	.4byte 0x79646563
	.4byte 0x6179006D
	.4byte 0x6973736C
	.4byte 0x652E666C
	.4byte 0x792E7475
	.4byte 0x726E2E79
	.4byte 0x626F756E
	.4byte 0x64006D69
	.4byte 0x73736C65
	.4byte 0x2E666C79
	.4byte 0x2E747572
	.4byte 0x6E2E726F
	.4byte 0x6C6C5F66
	.4byte 0x72616300
	.4byte 0x6D697373
	.4byte 0x6C652E65
	.4byte 0x78706C6F
	.4byte 0x64652E68
	.4byte 0x69745F72
	.4byte 0x61646975
	.4byte 0x73006D69
	.4byte 0x73736C65
	.4byte 0x2E657870
	.4byte 0x6C6F6465
	.4byte 0x2E686974
	.4byte 0x5F647572
	.4byte 0x6174696F
	.4byte 0x6E006361
	.4byte 0x6D657261
	.4byte 0x2E61696D
	.4byte 0x2E646973
	.4byte 0x74006361
	.4byte 0x6D657261
	.4byte 0x2E61696D
	.4byte 0x2E686569
	.4byte 0x67687400
	.4byte 0x63616D65
	.4byte 0x72612E61
	.4byte 0x696D2E70
	.4byte 0x69746368
	.4byte 0x0063616D
	.4byte 0x6572612E
	.4byte 0x61696D2E
	.4byte 0x61636365
	.4byte 0x6C006361
	.4byte 0x6D657261
	.4byte 0x2E61696D
	.4byte 0x2E6D6178
	.4byte 0x5F76656C
	.4byte 0x0063616D
	.4byte 0x6572612E
	.4byte 0x61696D2E
	.4byte 0x73746963
	.4byte 0x6B5F6465
	.4byte 0x63656C00
	.4byte 0x63616D65
	.4byte 0x72612E61
	.4byte 0x696D2E73
	.4byte 0x7469636B
	.4byte 0x5F616363
	.4byte 0x656C0063
	.4byte 0x616D6572
	.4byte 0x612E6169
	.4byte 0x6D2E7374
	.4byte 0x69636B5F
	.4byte 0x6D61785F
	.4byte 0x76656C00
	.4byte 0x63616D65
	.4byte 0x72612E61
	.4byte 0x696D2E74
	.4byte 0x75726E5F
	.4byte 0x73706565
	.4byte 0x64006361
	.4byte 0x6D657261
	.4byte 0x2E736569
	.4byte 0x7A652E64
	.4byte 0x656C6179
	.4byte 0x0063616D
	.4byte 0x6572612E
	.4byte 0x7365697A
	.4byte 0x652E626C
	.4byte 0x656E645F
	.4byte 0x74696D65
	.4byte 0x0063616D
	.4byte 0x6572612E
	.4byte 0x7365697A
	.4byte 0x652E6661
	.4byte 0x64655F64
	.4byte 0x69737400
	.4byte 0x63616D65
	.4byte 0x72612E73
	.4byte 0x65697A65
	.4byte 0x2E686964
	.4byte 0x655F6469
	.4byte 0x73740063
	.4byte 0x616D6572
	.4byte 0x612E7365
	.4byte 0x697A652E
	.4byte 0x666F7600
	.4byte 0x63616D65
	.4byte 0x72612E73
	.4byte 0x75727665
	.4byte 0x792E6475
	.4byte 0x72617469
	.4byte 0x6F6E0063
	.4byte 0x616D6572
	.4byte 0x612E7375
	.4byte 0x72766579
	.4byte 0x2E6D696E
	.4byte 0x5F647572
	.4byte 0x6174696F
	.4byte 0x6E006361
	.4byte 0x6D657261
	.4byte 0x2E737572
	.4byte 0x7665792E
	.4byte 0x6D696E5F
	.4byte 0x64697374
	.4byte 0x0063616D
	.4byte 0x6572612E
	.4byte 0x73757276
	.4byte 0x65792E63
	.4byte 0x75745F64
	.4byte 0x69737400
	.4byte 0x63616D65
	.4byte 0x72612E73
	.4byte 0x75727665
	.4byte 0x792E6472
	.4byte 0x6966745F
	.4byte 0x64697374
	.4byte 0x0063616D
	.4byte 0x6572612E
	.4byte 0x73757276
	.4byte 0x65792E64
	.4byte 0x72696674
	.4byte 0x5F736F66
	.4byte 0x746E6573
	.4byte 0x73006361
	.4byte 0x6D657261
	.4byte 0x2E737572
	.4byte 0x7665792E
	.4byte 0x6A65726B
	.4byte 0x5F6F6666
	.4byte 0x73657400
	.4byte 0x63616D65
	.4byte 0x72612E73
	.4byte 0x75727665
	.4byte 0x792E6A65
	.4byte 0x726B5F64
	.4byte 0x65666C65
	.4byte 0x63740063
	.4byte 0x616D6572
	.4byte 0x612E7265
	.4byte 0x73746F72
	.4byte 0x652E636F
	.4byte 0x6E74726F
	.4byte 0x6C5F6465
	.4byte 0x6C617900
	.4byte 0x6D617465
	.4byte 0x7269616C
	.4byte 0x2E656E76
	.4byte 0x5F616C70
	.4byte 0x6861006D
	.4byte 0x61746572
	.4byte 0x69616C2E
	.4byte 0x656E765F
	.4byte 0x636F6566
	.4byte 0x66006D61
	.4byte 0x74657269
	.4byte 0x616C2E66
	.4byte 0x7265736E
	.4byte 0x656C5F61
	.4byte 0x6C706861
	.4byte 0x006D6174
	.4byte 0x65726961
	.4byte 0x6C2E6672
	.4byte 0x65736E65
	.4byte 0x6C5F636F
	.4byte 0x65666600
	.4byte 0x72657469
	.4byte 0x636C652E
	.4byte 0x64697374
	.4byte 0x5F6D696E
	.4byte 0x00726574
	.4byte 0x69636C65
	.4byte 0x2E646973
	.4byte 0x745F6D61
	.4byte 0x78007265
	.4byte 0x7469636C
	.4byte 0x652E616E
	.4byte 0x675F7368
	.4byte 0x6F770072
	.4byte 0x65746963
	.4byte 0x6C652E61
	.4byte 0x6E675F68
	.4byte 0x69646500
	.4byte 0x72657469
	.4byte 0x636C652E
	.4byte 0x64656C61
	.4byte 0x795F7265
	.4byte 0x74617267
	.4byte 0x65740074
	.4byte 0x7261696C
	.4byte 0x2E73616D
	.4byte 0x706C655F
	.4byte 0x72617465
	.4byte 0x00747261
	.4byte 0x696C2E62
	.4byte 0x7562626C
	.4byte 0x655F7261
	.4byte 0x74650074
	.4byte 0x7261696C
	.4byte 0x2E627562
	.4byte 0x626C655F
	.4byte 0x656D6974
	.4byte 0x5F726164
	.4byte 0x69757300
	.4byte 0x74726169
	.4byte 0x6C2E7761
	.4byte 0x6B655F65
	.4byte 0x6D69745F
	.4byte 0x72616469
	.4byte 0x75730062
	.4byte 0x6C617374
	.4byte 0x2E656D69
	.4byte 0x7400626C
	.4byte 0x6173742E
	.4byte 0x72616469
	.4byte 0x75730062
	.4byte 0x6C617374
	.4byte 0x2E76656C
	.4byte 0x00626C61
	.4byte 0x73742E72
	.4byte 0x616E645F
	.4byte 0x76656C00
	.4byte 0x64726F70
	.4byte 0x6C65742E
	.4byte 0x64697374
	.4byte 0x5F6D696E
	.4byte 0x0064726F
	.4byte 0x706C6574
	.4byte 0x2E646973
	.4byte 0x745F6D61
	.4byte 0x78006472
	.4byte 0x6F706C65
	.4byte 0x742E656D
	.4byte 0x69745F6D
	.4byte 0x696E0064
	.4byte 0x726F706C
	.4byte 0x65742E65
	.4byte 0x6D69745F
	.4byte 0x6D617800
	.4byte 0x64726F70
	.4byte 0x6C65742E
	.4byte 0x76656C5F
	.4byte 0x6D696E00
	.4byte 0x64726F70
	.4byte 0x6C65742E
	.4byte 0x76656C5F
	.4byte 0x6D617800
	.4byte 0x64726F70
	.4byte 0x6C65742E
	.4byte 0x76656C5F
	.4byte 0x70657274
	.4byte 0x75726200
	.4byte 0x64726F70
	.4byte 0x6C65742E
	.4byte 0x76656C5F
	.4byte 0x616E676C
	.4byte 0x65006472
	.4byte 0x6F706C65
	.4byte 0x742E726F
	.4byte 0x745F7665
	.4byte 0x6C5F6D61
	.4byte 0x78006875
	.4byte 0x642E676C
	.4byte 0x6F775F73
	.4byte 0x697A6500
	.4byte 0x6875642E
	.4byte 0x74696D65
	.4byte 0x5F666164
	.4byte 0x65006875
	.4byte 0x642E7469
	.4byte 0x6D655F67
	.4byte 0x6C6F7700
	.4byte 0x6875642E
	.4byte 0x77696E64
	.4byte 0x2E73697A
	.4byte 0x65006875
	.4byte 0x642E7769
	.4byte 0x6E642E64
	.4byte 0x75006875
	.4byte 0x642E7769
	.4byte 0x6E642E64
	.4byte 0x76006875
	.4byte 0x642E7265
	.4byte 0x7469636C
	.4byte 0x652E7369
	.4byte 0x7A650068
	.4byte 0x75642E74
	.4byte 0x61726765
	.4byte 0x742E7369
	.4byte 0x7A650068
	.4byte 0x75642E74
	.4byte 0x696D6572
	.4byte 0x2E666F6E
	.4byte 0x74006875
	.4byte 0x642E7469
	.4byte 0x6D65722E
	.4byte 0x666F6E74
	.4byte 0x5F776964
	.4byte 0x74680068
	.4byte 0x75642E74
	.4byte 0x696D6572
	.4byte 0x2E666F6E
	.4byte 0x745F6865
	.4byte 0x69676874
	.4byte 0x00687564
	.4byte 0x2E74696D
	.4byte 0x65722E78
	.4byte 0x00687564
	.4byte 0x2E74696D
	.4byte 0x65722E79
	.4byte 0x00687564
	.4byte 0x2E74696D
	.4byte 0x65722E67
	.4byte 0x6C6F775F
	.4byte 0x73697A65
	.4byte 0x00646961
	.4byte 0x6C6F672E
	.4byte 0x66726571
	.4byte 0x00646961
	.4byte 0x6C6F672E
	.4byte 0x64656361
	.4byte 0x79006469
	.4byte 0x616C6F67
	.4byte 0x2E6D696E
	.4byte 0x5F667265
	.4byte 0x7100676C
	.4byte 0x6F73735F
	.4byte 0x65646765
	.4byte 0x00726169
	.4byte 0x6E626F77
	.4byte 0x66696C6D
	.4byte 0x5F736D6F
	.4byte 0x6F746833
	.4byte 0x32006372
	.4byte 0x75697365
	.4byte 0x5F627562
	.4byte 0x626C655F
	.4byte 0x61696D00
	.4byte 0x63727569
	.4byte 0x73655F62
	.4byte 0x7562626C
	.4byte 0x655F6669
	.4byte 0x72650063
	.4byte 0x72756973
	.4byte 0x655F6275
	.4byte 0x62626C65
	.4byte 0x5F69646C
	.4byte 0x65006372
	.4byte 0x75697365
	.4byte 0x5F627562
	.4byte 0x626C655F
	.4byte 0x61696D20
	.4byte 0x63727569
	.4byte 0x73655F62
	.4byte 0x7562626C
	.4byte 0x655F6669
	.4byte 0x72652063
	.4byte 0x72756973
	.4byte 0x655F6275
	.4byte 0x62626C65
	.4byte 0x5F69646C
	.4byte 0x65004372
	.4byte 0x75697365
	.4byte 0x20427562
	.4byte 0x626C6500
	.4byte 0x66697265
	.4byte 0x00666C79
	.byte 0x00
.endobj "@stringBase0"
	.byte 0x00, 0x00, 0x00

# 0x8028C200 - 0x8028C640
.data
.balign 8

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::base
.obj "base__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@", local
	.4byte 0x00000000
	.4byte 0x30000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "base__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::start_anim_states
.obj "start_anim_states__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@", local
	.4byte "@stringBase0"
	.rel "@stringBase0", .L_80255343
	.rel "@stringBase0", .L_8025534A
	.rel "@stringBase0", .L_80255351
	.rel "@stringBase0", .L_80255358
	.rel "@stringBase0", .L_8025535F
	.rel "@stringBase0", .L_80255366
	.rel "@stringBase0", .L_8025536D
	.rel "@stringBase0", .L_80255374
	.rel "@stringBase0", .L_8025537B
	.rel "@stringBase0", .L_80255382
	.rel "@stringBase0", .L_80255389
	.rel "@stringBase0", .L_80255390
	.rel "@stringBase0", .L_80255397
	.rel "@stringBase0", .L_802553A2
	.rel "@stringBase0", .L_802553AD
	.rel "@stringBase0", .L_802553B8
	.rel "@stringBase0", .L_802553C3
	.rel "@stringBase0", .L_802553CE
	.rel "@stringBase0", .L_802553D9
	.rel "@stringBase0", .L_802553E4
	.rel "@stringBase0", .L_802553EF
	.rel "@stringBase0", .L_802553FA
	.rel "@stringBase0", .L_80255405
	.rel "@stringBase0", .L_80255410
	.rel "@stringBase0", .L_80255417
	.rel "@stringBase0", .L_8025541D
	.rel "@stringBase0", .L_80255423
	.rel "@stringBase0", .L_80255429
	.rel "@stringBase0", .L_80255430
	.rel "@stringBase0", .L_8025543A
	.rel "@stringBase0", .L_80255445
	.rel "@stringBase0", .L_80255450
	.rel "@stringBase0", .L_80255456
	.rel "@stringBase0", .L_8025545C
	.rel "@stringBase0", .L_80255462
	.rel "@stringBase0", .L_80255468
.endobj "start_anim_states__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::shared
.obj "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@", local
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
.endobj "shared__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::sounds
.obj "sounds__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@", local
	.rel "@stringBase0", .L_8025546E
	.4byte 0x3F800000
	.4byte 0x40A00000
	.4byte 0x41A00000
	.4byte 0x00000000
	.4byte 0x0000000E
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.rel "@stringBase0", .L_8025547E
	.4byte 0x3F800000
	.4byte 0x41700000
	.4byte 0x42700000
	.4byte 0x00000000
	.4byte 0x0000000F
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.rel "@stringBase0", .L_8025548C
	.4byte 0x3F800000
	.4byte 0x00000000
	.4byte 0x41200000
	.4byte 0x00010000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x3F800000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x01000000
	.4byte 0x00000000
	.4byte 0x00000017
	.4byte 0x00000019
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "sounds__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_player_halt::__vtable
.obj "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_halt", weak
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_haltFv"
	.4byte "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_haltFv"
	.4byte "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_haltFf"
	.4byte "render__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"
	.4byte "abort__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"
.endobj "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_halt"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_player_aim::__vtable
.obj "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_player_aim", weak
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_player_aimFv"
	.4byte "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_player_aimFv"
	.4byte "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_player_aimFf"
	.4byte "render__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"
	.4byte "abort__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"
.endobj "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_player_aim"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_player_fire::__vtable
.obj "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_fire", weak
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_fireFv"
	.4byte "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_fireFv"
	.4byte "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_fireFf"
	.4byte "render__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"
	.4byte "abort__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"
.endobj "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_fire"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_player_wait::__vtable
.obj "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_wait", weak
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_waitFv"
	.4byte "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"
	.4byte "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_waitFf"
	.4byte "render__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"
	.4byte "abort__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"
.endobj "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@17state_player_wait"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_appear::__vtable
.obj "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_missle_appear", weak
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_missle_appearFv"
	.4byte "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_missle_appearFv"
	.4byte "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_missle_appearFf"
	.4byte "render__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"
	.4byte "abort__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"
.endobj "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_missle_appear"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_fly::__vtable
.obj "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_fly", weak
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFv"
	.4byte "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFv"
	.4byte "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFf"
	.4byte "render__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"
	.4byte "abort__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_flyFv"
.endobj "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_missle_fly"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_explode::__vtable
.obj "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode", weak
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFv"
	.4byte "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFv"
	.4byte "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explodeFf"
	.4byte "render__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"
	.4byte "abort__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"
.endobj "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_aim::__vtable
.obj "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aim", weak
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimFv"
	.4byte "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimFv"
	.4byte "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aimFf"
	.4byte "render__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"
	.4byte "abort__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"
.endobj "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@16state_camera_aim"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_seize::__vtable
.obj "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18state_camera_seize", weak
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18state_camera_seizeFv"
	.4byte "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18state_camera_seizeFv"
	.4byte "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18state_camera_seizeFf"
	.4byte "render__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"
	.4byte "abort__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"
.endobj "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18state_camera_seize"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_attach::__vtable
.obj "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attach", weak
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attachFv"
	.4byte "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attachFv"
	.4byte "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attachFf"
	.4byte "render__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"
	.4byte "abort__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"
.endobj "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_attach"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_survey::__vtable
.obj "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_survey", weak
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyFv"
	.4byte "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyFv"
	.4byte "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_surveyFf"
	.4byte "render__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"
	.4byte "abort__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"
.endobj "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@19state_camera_survey"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_type::__vtable
.obj "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_type", weak
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"
	.4byte "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"
	.4byte 0x00000000
	.4byte "render__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"
	.4byte "abort__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"
.endobj "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_type"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_camera_restore::__vtable
.obj "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_camera_restore", weak
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "start__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_camera_restoreFv"
	.4byte "stop__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_camera_restoreFv"
	.4byte "update__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_camera_restoreFf"
	.4byte "render__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"
	.4byte "abort__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@10state_typeFv"
.endobj "__vt__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_camera_restore"
	.4byte 0x00000000

# 0x802DBA80 - 0x802DD310
.section .bss, "wa", @nobits
.balign 8

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::normal_tweak
.obj "normal_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@", local
.sym ...bss.0, local
	.skip 0x1B8
.endobj "normal_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::cheat_tweak
.obj "cheat_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@", local
	.skip 0x1B8
.endobj "cheat_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::start_cam_mat
.obj "start_cam_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@", local
	.skip 0x40
.endobj "start_cam_mat__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::missle_record
.obj "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@", local
	.skip 0x808
.endobj "missle_record__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::wake_ribbon
.obj "wake_ribbon__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@", local
	.skip 0x280
.endobj "wake_ribbon__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::explode_decal
.obj "explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@", local
	.skip 0x68
.endobj "explode_decal__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::state_missle_explode::qzone
.obj "qzone__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode", local
	.skip 0x14
.endobj "qzone__Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@20state_missle_explode"

.obj player_halt$2573, local
	.skip 0x1C
.endobj player_halt$2573

.obj player_aim$2576, local
	.skip 0x14
.endobj player_aim$2576

.obj player_fire$2579, local
	.skip 0xC
.endobj player_fire$2579

.obj missle_fly$2588, local
	.skip 0x3C
.endobj missle_fly$2588

.obj missle_explode$2591, local
	.skip 0xC
.endobj missle_explode$2591

.obj camera_aim$2594, local
	.skip 0x48
.endobj camera_aim$2594

.obj camera_seize$2597, local
	.skip 0x54
.endobj camera_seize$2597

.obj camera_attach$2600, local
	.skip 0xC
.endobj camera_attach$2600

.obj camera_survey$2603, local
	.skip 0x210
.endobj camera_survey$2603

.obj camera_return$2606, local
	.skip 0xC
.endobj camera_return$2606

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::hud
.obj "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@", local
	.skip 0x690
.endobj "hud__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"
	.skip 0x4

# 0x803CAA80 - 0x803CAA88
.section .sdata, "wa"
.balign 8

# cruise_bubble::@unnamed@zEntCruiseBubble_cpp@::current_tweak
.obj "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@", local
	.4byte "normal_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"
.endobj "current_tweak__Q213cruise_bubble30@unnamed@zEntCruiseBubble_cpp@"
	.4byte 0x00000000

# 0x803CB548 - 0x803CB568
.section .sbss, "wa", @nobits
.balign 8

.obj init$2574, local
	.skip 0x1
.endobj init$2574

.obj init$2577, local
	.skip 0x1
.endobj init$2577

.obj init$2580, local
	.skip 0x1
.endobj init$2580

.obj init$2583, local
	.skip 0x1
.endobj init$2583

.obj player_wait$2582, local
	.skip 0x8
.endobj player_wait$2582

.obj init$2586, local
	.skip 0x1
.endobj init$2586
	.skip 0x3

.obj missle_appear$2585, local
	.skip 0x8
.endobj missle_appear$2585

.obj init$2589, local
	.skip 0x1
.endobj init$2589

.obj init$2592, local
	.skip 0x1
.endobj init$2592

.obj init$2595, local
	.skip 0x1
.endobj init$2595

.obj init$2598, local
	.skip 0x1
.endobj init$2598

.obj init$2601, local
	.skip 0x1
.endobj init$2601

.obj init$2604, local
	.skip 0x1
.endobj init$2604

.obj init$2607, local
	.skip 0x1
.endobj init$2607
	.skip 0x1

# 0x803CD338 - 0x803CD478
.section .sdata2, "a"
.balign 8

.obj "@1551", local
	.4byte 0x00000000
.endobj "@1551"

.obj "@1655", local
	.4byte 0x7E967699
.endobj "@1655"

.obj "@1720", local
	.4byte 0x3F800000
.endobj "@1720"

.obj "@1721", local
	.4byte 0x38D1B717
.endobj "@1721"

.obj "@1728", local
	.4byte 0x3F000000
.endobj "@1728"

.obj "@1729", local
	.4byte 0x40400000
.endobj "@1729"

.obj "@1730", local
	.4byte 0x47C35000
.endobj "@1730"

.obj "@1731", local
	.4byte 0x3727C5AC
.endobj "@1731"

.obj "@2509", local
	.4byte 0x3E800000
.endobj "@2509"

.obj "@2568", local
	.4byte 0x437F0000
.endobj "@2568"

.obj "@2700", local
	.4byte 0x43300000
	.4byte 0x00000000
.endobj "@2700"

.obj "@2733", local
	.4byte 0x43300000
	.4byte 0x80000000
.endobj "@2733"

.obj "@2834", local
	.4byte 0x3F8147AE
.endobj "@2834"

.obj "@2835", local
	.4byte 0x3C23D70A
.endobj "@2835"

.obj "@2856", local
	.4byte 0x3EAAAAAB
.endobj "@2856"

.obj "@2883", local
	.4byte 0xBF800000
.endobj "@2883"

.obj "@2901", local
	.4byte 0x800000FF
.endobj "@2901"

.obj "@2902", local
	.4byte 0xFF1414FF
.endobj "@2902"

.obj "@2917", local
	.4byte 0x42C80000
.endobj "@2917"

.obj "@3153", local
	.4byte 0xB727C5AC
.endobj "@3153"

.obj "@3178", local
	.4byte 0x3F40EBEE
.endobj "@3178"

.obj "@3179", local
	.4byte 0x3D4CCCCD
.endobj "@3179"

.obj "@3180", local
	.4byte 0x3E2AAAAB
.endobj "@3180"

.obj "@3181", local
	.4byte 0x41400000
.endobj "@3181"

.obj "@3182", local
	.4byte 0x40E00000
.endobj "@3182"

.obj "@3183", local
	.4byte 0x40A00000
.endobj "@3183"

.obj "@3184", local
	.4byte 0x3F7C28F6
.endobj "@3184"

.obj "@3185", local
	.4byte 0x3F9F0996
.endobj "@3185"

.obj "@3186", local
	.4byte 0x3DCCCCCD
.endobj "@3186"

.obj "@3187", local
	.4byte 0x40000000
.endobj "@3187"

.obj "@3188", local
	.4byte 0x3F400000
.endobj "@3188"

.obj "@3189", local
	.4byte 0x41200000
.endobj "@3189"

.obj "@3190", local
	.4byte 0x3E4CCCCD
.endobj "@3190"

.obj "@3191", local
	.4byte 0x42B40000
.endobj "@3191"

.obj "@3192", local
	.4byte 0x3E99999A
.endobj "@3192"

.obj "@3193", local
	.4byte 0x40F00000
.endobj "@3193"

.obj "@3194", local
	.4byte 0x40800000
.endobj "@3194"

.obj "@3195", local
	.4byte 0x41000000
.endobj "@3195"

.obj "@3297", local
	.4byte 0x4E6E6B28
.endobj "@3297"

.obj "@3298", local
	.4byte 0x3D888889
.endobj "@3298"

.obj "@3299", local
	.4byte 0x40C00000
.endobj "@3299"

.obj "@3300", local
	.4byte 0x41F00000
.endobj "@3300"

.obj "@3301", local
	.4byte 0x3C8EFA35
.endobj "@3301"

.obj "@3302", local
	.4byte 0x42700000
.endobj "@3302"

.obj "@3303", local
	.4byte 0x3CCCCCCD
.endobj "@3303"

.obj "@3304", local
	.4byte 0x3E088889
.endobj "@3304"

.obj "@3305", local
	.4byte 0x3F2AAAAB
.endobj "@3305"

.obj "@3306", local
	.4byte 0xBD48B439
.endobj "@3306"

.obj "@3307", local
	.4byte 0x3FDD2F1B
.endobj "@3307"

.obj "@3308", local
	.4byte 0x3F6C0831
.endobj "@3308"

.obj "@3309", local
	.4byte 0x3BA3D70A
.endobj "@3309"

.obj "@3310", local
	.4byte 0x3F7D70A4
.endobj "@3310"

.obj "@3311", local
	.4byte 0x3F19999A
.endobj "@3311"

.obj "@3312", local
	.4byte 0x3FC90FDB
.endobj "@3312"

.obj "@3313", local
	.4byte 0x3FC00000
.endobj "@3313"

.obj "@3314", local
	.4byte 0xC1200000
.endobj "@3314"

.obj "@3315", local
	.4byte 0xC2B40000
.endobj "@3315"

.obj "@3316", local
	.4byte 0x44340000
.endobj "@3316"

.obj "@3317", local
	.4byte 0x43B40000
.endobj "@3317"

.obj "@3318", local
	.4byte 0x43070000
.endobj "@3318"

.obj "@3319", local
	.4byte 0x3A83126F
.endobj "@3319"

.obj "@3320", local
	.4byte 0x42BE0000
.endobj "@3320"

.obj "@3321", local
	.4byte 0x43340000
.endobj "@3321"

.obj "@3322", local
	.4byte 0x3F4CCCCD
.endobj "@3322"

.obj "@3323", local
	.4byte 0x461C4000
.endobj "@3323"

.obj "@3324", local
	.4byte 0x41B40000
.endobj "@3324"

.obj "@3325", local
	.4byte 0xC7C35000
.endobj "@3325"

.obj "@3326", local
	.4byte 0xCE6E6B28
.endobj "@3326"

.obj "@3327", local
	.4byte 0x3CE147AE
.endobj "@3327"

.obj "@3328", local
	.4byte 0x3D408312
.endobj "@3328"

.obj "@3329", local
	.4byte 0x3F47AE14
.endobj "@3329"

.obj "@3330", local
	.4byte 0x3F5C28F6
.endobj "@3330"

.obj "@3447", local
	.4byte 0x3E19999A
.endobj "@3447"

.obj "@3563", local
	.4byte 0x40490FDB
.endobj "@3563"

.obj "@3564", local
	.4byte 0x40C90FDB
.endobj "@3564"

.obj "@3565", local
	.4byte 0xC0490FDB
.endobj "@3565"

.obj "@3657", local
	.4byte 0x358637BE
.endobj "@3657"

.obj "@3822", local
	.4byte 0x3D8F5C29
.endobj "@3822"

# 0x803D0830 - 0x803D0838
.section .sbss2, "a", @nobits
.balign 8

.obj "@2265", local
	.skip 0x8
.endobj "@2265"
