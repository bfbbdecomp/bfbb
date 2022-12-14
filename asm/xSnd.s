.include "macros.inc"
.file "xSnd.cpp"

# 0x800480B0 - 0x8004999C
.text
.balign 4

# xSndInit()
.fn xSndInit__Fv, global
/* 800480B0 00045190  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800480B4 00045194  7C 08 02 A6 */	mflr r0
/* 800480B8 00045198  90 01 00 14 */	stw r0, 0x14(r1)
/* 800480BC 0004519C  48 08 83 C1 */	bl iSndInit__Fv
/* 800480C0 000451A0  3C 60 80 3C */	lis r3, gSnd@ha
/* 800480C4 000451A4  38 00 00 08 */	li r0, 0x8
/* 800480C8 000451A8  38 63 D5 B4 */	addi r3, r3, gSnd@l
/* 800480CC 000451AC  38 83 00 1C */	addi r4, r3, 0x1c
/* 800480D0 000451B0  38 60 00 00 */	li r3, 0x0
/* 800480D4 000451B4  7C 09 03 A6 */	mtctr r0
.L_800480D8:
/* 800480D8 000451B8  90 64 00 14 */	stw r3, 0x14(r4)
/* 800480DC 000451BC  90 64 00 50 */	stw r3, 0x50(r4)
/* 800480E0 000451C0  90 64 00 78 */	stw r3, 0x78(r4)
/* 800480E4 000451C4  90 64 00 B4 */	stw r3, 0xb4(r4)
/* 800480E8 000451C8  90 64 00 DC */	stw r3, 0xdc(r4)
/* 800480EC 000451CC  90 64 01 18 */	stw r3, 0x118(r4)
/* 800480F0 000451D0  90 64 01 40 */	stw r3, 0x140(r4)
/* 800480F4 000451D4  90 64 01 7C */	stw r3, 0x17c(r4)
/* 800480F8 000451D8  90 64 01 A4 */	stw r3, 0x1a4(r4)
/* 800480FC 000451DC  90 64 01 E0 */	stw r3, 0x1e0(r4)
/* 80048100 000451E0  90 64 02 08 */	stw r3, 0x208(r4)
/* 80048104 000451E4  90 64 02 44 */	stw r3, 0x244(r4)
/* 80048108 000451E8  90 64 02 6C */	stw r3, 0x26c(r4)
/* 8004810C 000451EC  90 64 02 A8 */	stw r3, 0x2a8(r4)
/* 80048110 000451F0  90 64 02 D0 */	stw r3, 0x2d0(r4)
/* 80048114 000451F4  90 64 03 0C */	stw r3, 0x30c(r4)
/* 80048118 000451F8  38 84 03 20 */	addi r4, r4, 0x320
/* 8004811C 000451FC  42 00 FF BC */	bdnz .L_800480D8
/* 80048120 00045200  48 00 00 55 */	bl xSndSceneInit__Fv
/* 80048124 00045204  3C 60 80 3C */	lis r3, gSnd@ha
/* 80048128 00045208  C0 02 86 F8 */	lfs f0, "@585"@sda21(r2)
/* 8004812C 0004520C  38 83 D5 B4 */	addi r4, r3, gSnd@l
/* 80048130 00045210  38 00 00 01 */	li r0, 0x1
/* 80048134 00045214  D0 04 00 08 */	stfs f0, 0x8(r4)
/* 80048138 00045218  38 60 00 01 */	li r3, 0x1
/* 8004813C 0004521C  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 80048140 00045220  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 80048144 00045224  D0 04 00 14 */	stfs f0, 0x14(r4)
/* 80048148 00045228  D0 04 00 18 */	stfs f0, 0x18(r4)
/* 8004814C 0004522C  C0 02 86 FC */	lfs f0, "@586"@sda21(r2)
/* 80048150 00045230  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 80048154 00045234  90 04 00 00 */	stw r0, 0x0(r4)
/* 80048158 00045238  48 08 A4 B5 */	bl iSndSuspendCD__FUi
/* 8004815C 0004523C  48 00 03 89 */	bl xSndDelayedInit__Fv
/* 80048160 00045240  48 00 12 A9 */	bl reset_faders__Fv
/* 80048164 00045244  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80048168 00045248  7C 08 03 A6 */	mtlr r0
/* 8004816C 0004524C  38 21 00 10 */	addi r1, r1, 0x10
/* 80048170 00045250  4E 80 00 20 */	blr
.endfn xSndInit__Fv

# xSndSceneInit()
.fn xSndSceneInit__Fv, global
/* 80048174 00045254  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80048178 00045258  7C 08 02 A6 */	mflr r0
/* 8004817C 0004525C  3C 60 80 3C */	lis r3, gSnd@ha
/* 80048180 00045260  90 01 00 14 */	stw r0, 0x14(r1)
/* 80048184 00045264  38 00 00 00 */	li r0, 0x0
/* 80048188 00045268  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8004818C 0004526C  3B E3 D5 B4 */	addi r31, r3, gSnd@l
/* 80048190 00045270  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80048194 00045274  3B C0 00 00 */	li r30, 0x0
/* 80048198 00045278  90 1F 19 9C */	stw r0, 0x199c(r31)
.L_8004819C:
/* 8004819C 0004527C  C0 42 87 00 */	lfs f2, "@598"@sda21(r2)
/* 800481A0 00045280  38 7F 19 3C */	addi r3, r31, 0x193c
/* 800481A4 00045284  C0 22 86 F8 */	lfs f1, "@585"@sda21(r2)
/* 800481A8 00045288  FC 60 10 90 */	fmr f3, f2
/* 800481AC 0004528C  4B FC 2F 41 */	bl assign__5xVec3Ffff
/* 800481B0 00045290  C0 22 87 00 */	lfs f1, "@598"@sda21(r2)
/* 800481B4 00045294  38 7F 19 1C */	addi r3, r31, 0x191c
/* 800481B8 00045298  C0 42 86 F8 */	lfs f2, "@585"@sda21(r2)
/* 800481BC 0004529C  FC 60 08 90 */	fmr f3, f1
/* 800481C0 000452A0  4B FC 2F 2D */	bl assign__5xVec3Ffff
/* 800481C4 000452A4  C0 22 87 00 */	lfs f1, "@598"@sda21(r2)
/* 800481C8 000452A8  38 7F 19 2C */	addi r3, r31, 0x192c
/* 800481CC 000452AC  C0 62 86 F8 */	lfs f3, "@585"@sda21(r2)
/* 800481D0 000452B0  FC 40 08 90 */	fmr f2, f1
/* 800481D4 000452B4  4B FC 2F 19 */	bl assign__5xVec3Ffff
/* 800481D8 000452B8  C0 22 87 04 */	lfs f1, "@599"@sda21(r2)
/* 800481DC 000452BC  38 7F 19 4C */	addi r3, r31, 0x194c
/* 800481E0 000452C0  FC 40 08 90 */	fmr f2, f1
/* 800481E4 000452C4  FC 60 08 90 */	fmr f3, f1
/* 800481E8 000452C8  4B FC 2F 05 */	bl assign__5xVec3Ffff
/* 800481EC 000452CC  3B DE 00 01 */	addi r30, r30, 0x1
/* 800481F0 000452D0  3B FF 00 40 */	addi r31, r31, 0x40
/* 800481F4 000452D4  28 1E 00 02 */	cmplwi r30, 0x2
/* 800481F8 000452D8  41 80 FF A4 */	blt .L_8004819C
/* 800481FC 000452DC  C0 42 87 00 */	lfs f2, "@598"@sda21(r2)
/* 80048200 000452E0  3C 60 80 3C */	lis r3, gSnd@ha
/* 80048204 000452E4  38 63 D5 B4 */	addi r3, r3, gSnd@l
/* 80048208 000452E8  C0 22 86 F8 */	lfs f1, "@585"@sda21(r2)
/* 8004820C 000452EC  FC 60 10 90 */	fmr f3, f2
/* 80048210 000452F0  38 63 19 BC */	addi r3, r3, 0x19bc
/* 80048214 000452F4  4B FC 2E D9 */	bl assign__5xVec3Ffff
/* 80048218 000452F8  C0 22 87 00 */	lfs f1, "@598"@sda21(r2)
/* 8004821C 000452FC  3C 60 80 3C */	lis r3, gSnd@ha
/* 80048220 00045300  38 63 D5 B4 */	addi r3, r3, gSnd@l
/* 80048224 00045304  C0 42 86 F8 */	lfs f2, "@585"@sda21(r2)
/* 80048228 00045308  FC 60 08 90 */	fmr f3, f1
/* 8004822C 0004530C  38 63 19 A4 */	addi r3, r3, 0x19a4
/* 80048230 00045310  4B FC 2E BD */	bl assign__5xVec3Ffff
/* 80048234 00045314  C0 22 87 00 */	lfs f1, "@598"@sda21(r2)
/* 80048238 00045318  3C 60 80 3C */	lis r3, gSnd@ha
/* 8004823C 0004531C  38 63 D5 B4 */	addi r3, r3, gSnd@l
/* 80048240 00045320  C0 62 86 F8 */	lfs f3, "@585"@sda21(r2)
/* 80048244 00045324  FC 40 08 90 */	fmr f2, f1
/* 80048248 00045328  38 63 19 B0 */	addi r3, r3, 0x19b0
/* 8004824C 0004532C  4B FC 2E A1 */	bl assign__5xVec3Ffff
/* 80048250 00045330  C0 22 87 04 */	lfs f1, "@599"@sda21(r2)
/* 80048254 00045334  3C 60 80 3C */	lis r3, gSnd@ha
/* 80048258 00045338  38 63 D5 B4 */	addi r3, r3, gSnd@l
/* 8004825C 0004533C  FC 40 08 90 */	fmr f2, f1
/* 80048260 00045340  38 63 19 C8 */	addi r3, r3, 0x19c8
/* 80048264 00045344  FC 60 08 90 */	fmr f3, f1
/* 80048268 00045348  4B FC 2E 85 */	bl assign__5xVec3Ffff
/* 8004826C 0004534C  48 08 93 05 */	bl iSndUpdate__Fv
/* 80048270 00045350  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80048274 00045354  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80048278 00045358  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8004827C 0004535C  7C 08 03 A6 */	mtlr r0
/* 80048280 00045360  38 21 00 10 */	addi r1, r1, 0x10
/* 80048284 00045364  4E 80 00 20 */	blr
.endfn xSndSceneInit__Fv

# xSndSetEnvironmentalEffect(sound_effect)
.fn xSndSetEnvironmentalEffect__F12sound_effect, global
/* 80048288 00045368  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004828C 0004536C  7C 08 02 A6 */	mflr r0
/* 80048290 00045370  2C 03 00 01 */	cmpwi r3, 0x1
/* 80048294 00045374  90 01 00 14 */	stw r0, 0x14(r1)
/* 80048298 00045378  41 82 00 20 */	beq .L_800482B8
/* 8004829C 0004537C  40 80 00 24 */	bge .L_800482C0
/* 800482A0 00045380  2C 03 00 00 */	cmpwi r3, 0x0
/* 800482A4 00045384  40 80 00 08 */	bge .L_800482AC
/* 800482A8 00045388  48 00 00 18 */	b .L_800482C0
.L_800482AC:
/* 800482AC 0004538C  38 60 00 00 */	li r3, 0x0
/* 800482B0 00045390  48 08 85 51 */	bl iSndSetEnvironmentalEffect__F13isound_effect
/* 800482B4 00045394  48 00 00 0C */	b .L_800482C0
.L_800482B8:
/* 800482B8 00045398  38 60 00 01 */	li r3, 0x1
/* 800482BC 0004539C  48 08 85 45 */	bl iSndSetEnvironmentalEffect__F13isound_effect
.L_800482C0:
/* 800482C0 000453A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800482C4 000453A4  7C 08 03 A6 */	mtlr r0
/* 800482C8 000453A8  38 21 00 10 */	addi r1, r1, 0x10
/* 800482CC 000453AC  4E 80 00 20 */	blr
.endfn xSndSetEnvironmentalEffect__F12sound_effect

# xSndSuspend()
.fn xSndSuspend__Fv, global
/* 800482D0 000453B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800482D4 000453B4  7C 08 02 A6 */	mflr r0
/* 800482D8 000453B8  38 60 00 01 */	li r3, 0x1
/* 800482DC 000453BC  38 80 00 01 */	li r4, 0x1
/* 800482E0 000453C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800482E4 000453C4  48 00 00 51 */	bl xSndPauseAll__FUiUi
/* 800482E8 000453C8  38 00 00 01 */	li r0, 0x1
/* 800482EC 000453CC  90 0D 8A F8 */	stw r0, sDelayedPaused@sda21(r13)
/* 800482F0 000453D0  48 00 06 A5 */	bl xSndUpdate__Fv
/* 800482F4 000453D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800482F8 000453D8  7C 08 03 A6 */	mtlr r0
/* 800482FC 000453DC  38 21 00 10 */	addi r1, r1, 0x10
/* 80048300 000453E0  4E 80 00 20 */	blr
.endfn xSndSuspend__Fv

# xSndResume()
.fn xSndResume__Fv, global
/* 80048304 000453E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80048308 000453E8  7C 08 02 A6 */	mflr r0
/* 8004830C 000453EC  38 60 00 00 */	li r3, 0x0
/* 80048310 000453F0  38 80 00 00 */	li r4, 0x0
/* 80048314 000453F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80048318 000453F8  48 00 00 1D */	bl xSndPauseAll__FUiUi
/* 8004831C 000453FC  38 00 00 00 */	li r0, 0x0
/* 80048320 00045400  90 0D 8A F8 */	stw r0, sDelayedPaused@sda21(r13)
/* 80048324 00045404  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80048328 00045408  7C 08 03 A6 */	mtlr r0
/* 8004832C 0004540C  38 21 00 10 */	addi r1, r1, 0x10
/* 80048330 00045410  4E 80 00 20 */	blr
.endfn xSndResume__Fv

# xSndPauseAll(unsigned int, unsigned int)
.fn xSndPauseAll__FUiUi, global
/* 80048334 00045414  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80048338 00045418  7C 08 02 A6 */	mflr r0
/* 8004833C 0004541C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80048340 00045420  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80048344 00045424  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80048348 00045428  3B C0 00 00 */	li r30, 0x0
/* 8004834C 0004542C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80048350 00045430  7C 9D 23 78 */	mr r29, r4
/* 80048354 00045434  93 81 00 10 */	stw r28, 0x10(r1)
/* 80048358 00045438  7C 7C 1B 78 */	mr r28, r3
/* 8004835C 0004543C  3C 60 80 3C */	lis r3, gSnd@ha
/* 80048360 00045440  93 8D 8A F8 */	stw r28, sDelayedPaused@sda21(r13)
/* 80048364 00045444  3B E3 D5 B4 */	addi r31, r3, gSnd@l
.L_80048368:
/* 80048368 00045448  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 8004836C 0004544C  54 60 07 FF */	clrlwi. r0, r3, 31
/* 80048370 00045450  41 82 00 30 */	beq .L_800483A0
/* 80048374 00045454  54 60 07 BD */	rlwinm. r0, r3, 0, 30, 30
/* 80048378 00045458  41 82 00 14 */	beq .L_8004838C
/* 8004837C 0004545C  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 80048380 00045460  7F 84 E3 78 */	mr r4, r28
/* 80048384 00045464  48 08 89 B1 */	bl iSndPause__FUiUi
/* 80048388 00045468  48 00 00 18 */	b .L_800483A0
.L_8004838C:
/* 8004838C 0004546C  54 60 07 7B */	rlwinm. r0, r3, 0, 29, 29
/* 80048390 00045470  41 82 00 10 */	beq .L_800483A0
/* 80048394 00045474  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 80048398 00045478  7F A4 EB 78 */	mr r4, r29
/* 8004839C 0004547C  48 08 89 99 */	bl iSndPause__FUiUi
.L_800483A0:
/* 800483A0 00045480  3B DE 00 01 */	addi r30, r30, 0x1
/* 800483A4 00045484  3B FF 00 64 */	addi r31, r31, 0x64
/* 800483A8 00045488  28 1E 00 40 */	cmplwi r30, 0x40
/* 800483AC 0004548C  41 80 FF BC */	blt .L_80048368
/* 800483B0 00045490  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800483B4 00045494  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800483B8 00045498  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800483BC 0004549C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 800483C0 000454A0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 800483C4 000454A4  7C 08 03 A6 */	mtlr r0
/* 800483C8 000454A8  38 21 00 20 */	addi r1, r1, 0x20
/* 800483CC 000454AC  4E 80 00 20 */	blr
.endfn xSndPauseAll__FUiUi

# xSndPauseCategory(unsigned int, unsigned int)
.fn xSndPauseCategory__FUiUi, global
/* 800483D0 000454B0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800483D4 000454B4  7C 08 02 A6 */	mflr r0
/* 800483D8 000454B8  3C A0 80 3C */	lis r5, gSnd@ha
/* 800483DC 000454BC  90 01 00 24 */	stw r0, 0x24(r1)
/* 800483E0 000454C0  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 800483E4 000454C4  7C 7B 1B 78 */	mr r27, r3
/* 800483E8 000454C8  3B C5 D5 B4 */	addi r30, r5, gSnd@l
/* 800483EC 000454CC  7C 9C 23 78 */	mr r28, r4
/* 800483F0 000454D0  3B A0 00 00 */	li r29, 0x0
/* 800483F4 000454D4  3B E0 00 01 */	li r31, 0x1
.L_800483F8:
/* 800483F8 000454D8  80 1E 00 30 */	lwz r0, 0x30(r30)
/* 800483FC 000454DC  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80048400 000454E0  41 82 00 20 */	beq .L_80048420
/* 80048404 000454E4  80 1E 00 48 */	lwz r0, 0x48(r30)
/* 80048408 000454E8  7F E0 00 30 */	slw r0, r31, r0
/* 8004840C 000454EC  7F 60 00 39 */	and. r0, r27, r0
/* 80048410 000454F0  41 82 00 10 */	beq .L_80048420
/* 80048414 000454F4  80 7E 00 20 */	lwz r3, 0x20(r30)
/* 80048418 000454F8  7F 84 E3 78 */	mr r4, r28
/* 8004841C 000454FC  48 08 89 19 */	bl iSndPause__FUiUi
.L_80048420:
/* 80048420 00045500  3B BD 00 01 */	addi r29, r29, 0x1
/* 80048424 00045504  3B DE 00 64 */	addi r30, r30, 0x64
/* 80048428 00045508  28 1D 00 40 */	cmplwi r29, 0x40
/* 8004842C 0004550C  41 80 FF CC */	blt .L_800483F8
/* 80048430 00045510  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 80048434 00045514  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80048438 00045518  7C 08 03 A6 */	mtlr r0
/* 8004843C 0004551C  38 21 00 20 */	addi r1, r1, 0x20
/* 80048440 00045520  4E 80 00 20 */	blr
.endfn xSndPauseCategory__FUiUi

# xSndSetCategoryVol(sound_category, float)
.fn xSndSetCategoryVol__F14sound_categoryf, global
/* 80048444 00045524  3C 80 80 3C */	lis r4, gSnd@ha
/* 80048448 00045528  54 60 10 3A */	slwi r0, r3, 2
/* 8004844C 0004552C  38 64 D5 B4 */	addi r3, r4, gSnd@l
/* 80048450 00045530  7C 63 02 14 */	add r3, r3, r0
/* 80048454 00045534  D0 23 00 08 */	stfs f1, 0x8(r3)
/* 80048458 00045538  4E 80 00 20 */	blr
.endfn xSndSetCategoryVol__F14sound_categoryf

# xSndStopAll(unsigned int)
.fn xSndStopAll__FUi, global
/* 8004845C 0004553C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80048460 00045540  7C 08 02 A6 */	mflr r0
/* 80048464 00045544  3C 80 80 3C */	lis r4, gSnd@ha
/* 80048468 00045548  90 01 00 24 */	stw r0, 0x24(r1)
/* 8004846C 0004554C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80048470 00045550  3B E0 00 01 */	li r31, 0x1
/* 80048474 00045554  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80048478 00045558  3B C4 D5 B4 */	addi r30, r4, gSnd@l
/* 8004847C 0004555C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80048480 00045560  3B A0 00 00 */	li r29, 0x0
/* 80048484 00045564  93 81 00 10 */	stw r28, 0x10(r1)
/* 80048488 00045568  7C 7C 1B 78 */	mr r28, r3
.L_8004848C:
/* 8004848C 0004556C  80 1E 00 30 */	lwz r0, 0x30(r30)
/* 80048490 00045570  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80048494 00045574  41 82 00 1C */	beq .L_800484B0
/* 80048498 00045578  80 1E 00 48 */	lwz r0, 0x48(r30)
/* 8004849C 0004557C  7F E0 00 30 */	slw r0, r31, r0
/* 800484A0 00045580  7F 80 00 39 */	and. r0, r28, r0
/* 800484A4 00045584  41 82 00 0C */	beq .L_800484B0
/* 800484A8 00045588  80 7E 00 20 */	lwz r3, 0x20(r30)
/* 800484AC 0004558C  48 08 8A 51 */	bl iSndStop__FUi
.L_800484B0:
/* 800484B0 00045590  3B BD 00 01 */	addi r29, r29, 0x1
/* 800484B4 00045594  3B DE 00 64 */	addi r30, r30, 0x64
/* 800484B8 00045598  28 1D 00 40 */	cmplwi r29, 0x40
/* 800484BC 0004559C  41 80 FF D0 */	blt .L_8004848C
/* 800484C0 000455A0  48 00 00 25 */	bl xSndDelayedInit__Fv
/* 800484C4 000455A4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800484C8 000455A8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800484CC 000455AC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800484D0 000455B0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 800484D4 000455B4  83 81 00 10 */	lwz r28, 0x10(r1)
/* 800484D8 000455B8  7C 08 03 A6 */	mtlr r0
/* 800484DC 000455BC  38 21 00 20 */	addi r1, r1, 0x20
/* 800484E0 000455C0  4E 80 00 20 */	blr
.endfn xSndStopAll__FUi

# xSndDelayedInit()
.fn xSndDelayedInit__Fv, local
/* 800484E4 000455C4  3C 60 80 29 */	lis r3, sDelayedSnd@ha
/* 800484E8 000455C8  C0 02 87 00 */	lfs f0, "@598"@sda21(r2)
/* 800484EC 000455CC  38 63 8C A0 */	addi r3, r3, sDelayedSnd@l
/* 800484F0 000455D0  38 00 00 00 */	li r0, 0x0
/* 800484F4 000455D4  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 800484F8 000455D8  C0 02 87 00 */	lfs f0, "@598"@sda21(r2)
/* 800484FC 000455DC  D0 03 00 60 */	stfs f0, 0x60(r3)
/* 80048500 000455E0  C0 02 87 00 */	lfs f0, "@598"@sda21(r2)
/* 80048504 000455E4  D0 03 00 94 */	stfs f0, 0x94(r3)
/* 80048508 000455E8  C0 02 87 00 */	lfs f0, "@598"@sda21(r2)
/* 8004850C 000455EC  D0 03 00 C8 */	stfs f0, 0xc8(r3)
/* 80048510 000455F0  C0 02 87 00 */	lfs f0, "@598"@sda21(r2)
/* 80048514 000455F4  D0 03 00 FC */	stfs f0, 0xfc(r3)
/* 80048518 000455F8  C0 02 87 00 */	lfs f0, "@598"@sda21(r2)
/* 8004851C 000455FC  D0 03 01 30 */	stfs f0, 0x130(r3)
/* 80048520 00045600  C0 02 87 00 */	lfs f0, "@598"@sda21(r2)
/* 80048524 00045604  D0 03 01 64 */	stfs f0, 0x164(r3)
/* 80048528 00045608  C0 02 87 00 */	lfs f0, "@598"@sda21(r2)
/* 8004852C 0004560C  D0 03 01 98 */	stfs f0, 0x198(r3)
/* 80048530 00045610  C0 02 87 00 */	lfs f0, "@598"@sda21(r2)
/* 80048534 00045614  D0 03 01 CC */	stfs f0, 0x1cc(r3)
/* 80048538 00045618  C0 02 87 00 */	lfs f0, "@598"@sda21(r2)
/* 8004853C 0004561C  D0 03 02 00 */	stfs f0, 0x200(r3)
/* 80048540 00045620  C0 02 87 00 */	lfs f0, "@598"@sda21(r2)
/* 80048544 00045624  D0 03 02 34 */	stfs f0, 0x234(r3)
/* 80048548 00045628  C0 02 87 00 */	lfs f0, "@598"@sda21(r2)
/* 8004854C 0004562C  D0 03 02 68 */	stfs f0, 0x268(r3)
/* 80048550 00045630  C0 02 87 00 */	lfs f0, "@598"@sda21(r2)
/* 80048554 00045634  D0 03 02 9C */	stfs f0, 0x29c(r3)
/* 80048558 00045638  C0 02 87 00 */	lfs f0, "@598"@sda21(r2)
/* 8004855C 0004563C  D0 03 02 D0 */	stfs f0, 0x2d0(r3)
/* 80048560 00045640  C0 02 87 00 */	lfs f0, "@598"@sda21(r2)
/* 80048564 00045644  D0 03 03 04 */	stfs f0, 0x304(r3)
/* 80048568 00045648  C0 02 87 00 */	lfs f0, "@598"@sda21(r2)
/* 8004856C 0004564C  D0 03 03 38 */	stfs f0, 0x338(r3)
/* 80048570 00045650  90 0D 8A F8 */	stw r0, sDelayedPaused@sda21(r13)
/* 80048574 00045654  4E 80 00 20 */	blr
.endfn xSndDelayedInit__Fv

# xSndDelayedUpdate()
.fn xSndDelayedUpdate__Fv, local
/* 80048578 00045658  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004857C 0004565C  7C 08 02 A6 */	mflr r0
/* 80048580 00045660  90 01 00 14 */	stw r0, 0x14(r1)
/* 80048584 00045664  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80048588 00045668  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8004858C 0004566C  80 0D 8A F8 */	lwz r0, sDelayedPaused@sda21(r13)
/* 80048590 00045670  28 00 00 00 */	cmplwi r0, 0x0
/* 80048594 00045674  40 82 00 88 */	bne .L_8004861C
/* 80048598 00045678  3C 60 80 29 */	lis r3, sDelayedSnd@ha
/* 8004859C 0004567C  3B C0 00 00 */	li r30, 0x0
/* 800485A0 00045680  38 03 8C A0 */	addi r0, r3, sDelayedSnd@l
/* 800485A4 00045684  7C 1F 03 78 */	mr r31, r0
.L_800485A8:
/* 800485A8 00045688  C0 3F 00 2C */	lfs f1, 0x2c(r31)
/* 800485AC 0004568C  C0 02 87 00 */	lfs f0, "@598"@sda21(r2)
/* 800485B0 00045690  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800485B4 00045694  40 81 00 58 */	ble .L_8004860C
/* 800485B8 00045698  C0 0D 8E B8 */	lfs f0, sTimeElapsed@sda21(r13)
/* 800485BC 0004569C  EC 01 00 28 */	fsubs f0, f1, f0
/* 800485C0 000456A0  D0 1F 00 2C */	stfs f0, 0x2c(r31)
/* 800485C4 000456A4  C0 3F 00 2C */	lfs f1, 0x2c(r31)
/* 800485C8 000456A8  C0 02 87 00 */	lfs f0, "@598"@sda21(r2)
/* 800485CC 000456AC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800485D0 000456B0  40 80 00 3C */	bge .L_8004860C
/* 800485D4 000456B4  D0 1F 00 2C */	stfs f0, 0x2c(r31)
/* 800485D8 000456B8  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 800485DC 000456BC  C0 3F 00 04 */	lfs f1, 0x4(r31)
/* 800485E0 000456C0  C0 5F 00 08 */	lfs f2, 0x8(r31)
/* 800485E4 000456C4  80 9F 00 0C */	lwz r4, 0xc(r31)
/* 800485E8 000456C8  80 BF 00 10 */	lwz r5, 0x10(r31)
/* 800485EC 000456CC  80 DF 00 14 */	lwz r6, 0x14(r31)
/* 800485F0 000456D0  80 FF 00 18 */	lwz r7, 0x18(r31)
/* 800485F4 000456D4  81 1F 00 1C */	lwz r8, 0x1c(r31)
/* 800485F8 000456D8  C0 7F 00 20 */	lfs f3, 0x20(r31)
/* 800485FC 000456DC  C0 9F 00 24 */	lfs f4, 0x24(r31)
/* 80048600 000456E0  81 3F 00 28 */	lwz r9, 0x28(r31)
/* 80048604 000456E4  C0 A2 87 00 */	lfs f5, "@598"@sda21(r2)
/* 80048608 000456E8  48 00 04 D9 */	bl xSndPlayInternal__FUiffUiUiUiP4xEntPC5xVec3ff14sound_categoryf
.L_8004860C:
/* 8004860C 000456EC  3B DE 00 01 */	addi r30, r30, 0x1
/* 80048610 000456F0  3B FF 00 34 */	addi r31, r31, 0x34
/* 80048614 000456F4  2C 1E 00 10 */	cmpwi r30, 0x10
/* 80048618 000456F8  41 80 FF 90 */	blt .L_800485A8
.L_8004861C:
/* 8004861C 000456FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80048620 00045700  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80048624 00045704  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80048628 00045708  7C 08 03 A6 */	mtlr r0
/* 8004862C 0004570C  38 21 00 10 */	addi r1, r1, 0x10
/* 80048630 00045710  4E 80 00 20 */	blr
.endfn xSndDelayedUpdate__Fv

# xSndAddDelayed(unsigned int, float, float, unsigned int, unsigned int, unsigned int, xEnt*, xVec3*, float, float, sound_category, float)
.fn xSndAddDelayed__FUiffUiUiUiP4xEntP5xVec3ff14sound_categoryf, local
/* 80048634 00045714  3D 40 80 29 */	lis r10, sDelayedSnd@ha
/* 80048638 00045718  38 00 00 10 */	li r0, 0x10
/* 8004863C 0004571C  39 4A 8C A0 */	addi r10, r10, sDelayedSnd@l
/* 80048640 00045720  7C 09 03 A6 */	mtctr r0
.L_80048644:
/* 80048644 00045724  C0 CA 00 2C */	lfs f6, 0x2c(r10)
/* 80048648 00045728  C0 02 87 00 */	lfs f0, "@598"@sda21(r2)
/* 8004864C 0004572C  FC 06 00 40 */	fcmpo cr0, f6, f0
/* 80048650 00045730  4C 40 13 82 */	cror eq, lt, eq
/* 80048654 00045734  40 82 00 38 */	bne .L_8004868C
/* 80048658 00045738  90 6A 00 00 */	stw r3, 0x0(r10)
/* 8004865C 0004573C  D0 2A 00 04 */	stfs f1, 0x4(r10)
/* 80048660 00045740  D0 4A 00 08 */	stfs f2, 0x8(r10)
/* 80048664 00045744  90 8A 00 0C */	stw r4, 0xc(r10)
/* 80048668 00045748  90 AA 00 10 */	stw r5, 0x10(r10)
/* 8004866C 0004574C  90 CA 00 14 */	stw r6, 0x14(r10)
/* 80048670 00045750  90 EA 00 18 */	stw r7, 0x18(r10)
/* 80048674 00045754  91 0A 00 1C */	stw r8, 0x1c(r10)
/* 80048678 00045758  D0 6A 00 20 */	stfs f3, 0x20(r10)
/* 8004867C 0004575C  D0 8A 00 24 */	stfs f4, 0x24(r10)
/* 80048680 00045760  91 2A 00 28 */	stw r9, 0x28(r10)
/* 80048684 00045764  D0 AA 00 2C */	stfs f5, 0x2c(r10)
/* 80048688 00045768  4E 80 00 20 */	blr
.L_8004868C:
/* 8004868C 0004576C  39 4A 00 34 */	addi r10, r10, 0x34
/* 80048690 00045770  42 00 FF B4 */	bdnz .L_80048644
/* 80048694 00045774  4E 80 00 20 */	blr
.endfn xSndAddDelayed__FUiffUiUiUiP4xEntP5xVec3ff14sound_categoryf

# xSndCalculateListenerPosition()
.fn xSndCalculateListenerPosition__Fv, local
/* 80048698 00045778  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004869C 0004577C  7C 08 02 A6 */	mflr r0
/* 800486A0 00045780  3C 60 80 3C */	lis r3, gSnd@ha
/* 800486A4 00045784  90 01 00 14 */	stw r0, 0x14(r1)
/* 800486A8 00045788  38 63 D5 B4 */	addi r3, r3, gSnd@l
/* 800486AC 0004578C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800486B0 00045790  80 03 19 9C */	lwz r0, 0x199c(r3)
/* 800486B4 00045794  2C 00 00 01 */	cmpwi r0, 0x1
/* 800486B8 00045798  41 82 00 7C */	beq .L_80048734
/* 800486BC 0004579C  40 80 00 C4 */	bge .L_80048780
/* 800486C0 000457A0  2C 00 00 00 */	cmpwi r0, 0x0
/* 800486C4 000457A4  40 80 00 08 */	bge .L_800486CC
/* 800486C8 000457A8  48 00 00 B8 */	b .L_80048780
.L_800486CC:
/* 800486CC 000457AC  3B E3 19 1C */	addi r31, r3, 0x191c
/* 800486D0 000457B0  38 63 19 A4 */	addi r3, r3, 0x19a4
/* 800486D4 000457B4  7F E4 FB 78 */	mr r4, r31
/* 800486D8 000457B8  4B FC 2B 8D */	bl __as__5xVec3FRC5xVec3
/* 800486DC 000457BC  3C 60 80 3C */	lis r3, gSnd@ha
/* 800486E0 000457C0  38 9F 00 10 */	addi r4, r31, 0x10
/* 800486E4 000457C4  38 63 D5 B4 */	addi r3, r3, gSnd@l
/* 800486E8 000457C8  38 63 19 B0 */	addi r3, r3, 0x19b0
/* 800486EC 000457CC  4B FC 2B 79 */	bl __as__5xVec3FRC5xVec3
/* 800486F0 000457D0  3C 60 80 3C */	lis r3, gSnd@ha
/* 800486F4 000457D4  38 9F 00 20 */	addi r4, r31, 0x20
/* 800486F8 000457D8  38 63 D5 B4 */	addi r3, r3, gSnd@l
/* 800486FC 000457DC  38 63 19 BC */	addi r3, r3, 0x19bc
/* 80048700 000457E0  4B FC 2B 65 */	bl __as__5xVec3FRC5xVec3
/* 80048704 000457E4  3C 60 80 3C */	lis r3, gSnd@ha
/* 80048708 000457E8  38 83 D5 B4 */	addi r4, r3, gSnd@l
/* 8004870C 000457EC  38 64 19 C8 */	addi r3, r4, 0x19c8
/* 80048710 000457F0  38 84 19 8C */	addi r4, r4, 0x198c
/* 80048714 000457F4  4B FC 2B 51 */	bl __as__5xVec3FRC5xVec3
/* 80048718 000457F8  3C 60 80 3C */	lis r3, gSnd@ha
/* 8004871C 000457FC  C0 02 86 F8 */	lfs f0, "@585"@sda21(r2)
/* 80048720 00045800  38 63 D5 B4 */	addi r3, r3, gSnd@l
/* 80048724 00045804  C0 23 19 CC */	lfs f1, 0x19cc(r3)
/* 80048728 00045808  EC 01 00 2A */	fadds f0, f1, f0
/* 8004872C 0004580C  D0 03 19 CC */	stfs f0, 0x19cc(r3)
/* 80048730 00045810  48 00 00 50 */	b .L_80048780
.L_80048734:
/* 80048734 00045814  3B E3 19 1C */	addi r31, r3, 0x191c
/* 80048738 00045818  38 63 19 A4 */	addi r3, r3, 0x19a4
/* 8004873C 0004581C  7F E4 FB 78 */	mr r4, r31
/* 80048740 00045820  4B FC 2B 25 */	bl __as__5xVec3FRC5xVec3
/* 80048744 00045824  3C 60 80 3C */	lis r3, gSnd@ha
/* 80048748 00045828  38 9F 00 10 */	addi r4, r31, 0x10
/* 8004874C 0004582C  38 63 D5 B4 */	addi r3, r3, gSnd@l
/* 80048750 00045830  38 63 19 B0 */	addi r3, r3, 0x19b0
/* 80048754 00045834  4B FC 2B 11 */	bl __as__5xVec3FRC5xVec3
/* 80048758 00045838  3C 60 80 3C */	lis r3, gSnd@ha
/* 8004875C 0004583C  38 9F 00 20 */	addi r4, r31, 0x20
/* 80048760 00045840  38 63 D5 B4 */	addi r3, r3, gSnd@l
/* 80048764 00045844  38 63 19 BC */	addi r3, r3, 0x19bc
/* 80048768 00045848  4B FC 2A FD */	bl __as__5xVec3FRC5xVec3
/* 8004876C 0004584C  3C 60 80 3C */	lis r3, gSnd@ha
/* 80048770 00045850  38 83 D5 B4 */	addi r4, r3, gSnd@l
/* 80048774 00045854  38 64 19 C8 */	addi r3, r4, 0x19c8
/* 80048778 00045858  38 84 19 4C */	addi r4, r4, 0x194c
/* 8004877C 0004585C  4B FC 2A E9 */	bl __as__5xVec3FRC5xVec3
.L_80048780:
/* 80048780 00045860  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80048784 00045864  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80048788 00045868  7C 08 03 A6 */	mtlr r0
/* 8004878C 0004586C  38 21 00 10 */	addi r1, r1, 0x10
/* 80048790 00045870  4E 80 00 20 */	blr
.endfn xSndCalculateListenerPosition__Fv

# xSndProcessSoundPos(const xVec3*, xVec3*)
.fn xSndProcessSoundPos__FPC5xVec3P5xVec3, global
/* 80048794 00045874  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80048798 00045878  7C 08 02 A6 */	mflr r0
/* 8004879C 0004587C  90 01 00 74 */	stw r0, 0x74(r1)
/* 800487A0 00045880  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 800487A4 00045884  F3 E1 00 68 */	psq_st f31, 0x68(r1), 0, qr0
/* 800487A8 00045888  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 800487AC 0004588C  93 C1 00 58 */	stw r30, 0x58(r1)
/* 800487B0 00045890  93 A1 00 54 */	stw r29, 0x54(r1)
/* 800487B4 00045894  3C A0 80 3C */	lis r5, gSnd@ha
/* 800487B8 00045898  7C 7D 1B 78 */	mr r29, r3
/* 800487BC 0004589C  38 65 D5 B4 */	addi r3, r5, gSnd@l
/* 800487C0 000458A0  7C 9E 23 78 */	mr r30, r4
/* 800487C4 000458A4  80 03 19 9C */	lwz r0, 0x199c(r3)
/* 800487C8 000458A8  2C 00 00 01 */	cmpwi r0, 0x1
/* 800487CC 000458AC  41 82 00 C0 */	beq .L_8004888C
/* 800487D0 000458B0  40 80 00 C8 */	bge .L_80048898
/* 800487D4 000458B4  2C 00 00 00 */	cmpwi r0, 0x0
/* 800487D8 000458B8  40 80 00 08 */	bge .L_800487E0
/* 800487DC 000458BC  48 00 00 BC */	b .L_80048898
.L_800487E0:
/* 800487E0 000458C0  3B E3 19 8C */	addi r31, r3, 0x198c
/* 800487E4 000458C4  7F A4 EB 78 */	mr r4, r29
/* 800487E8 000458C8  7F E5 FB 78 */	mr r5, r31
/* 800487EC 000458CC  38 61 00 20 */	addi r3, r1, 0x20
/* 800487F0 000458D0  4B FC 29 DD */	bl __mi__5xVec3CFRC5xVec3
/* 800487F4 000458D4  38 61 00 38 */	addi r3, r1, 0x38
/* 800487F8 000458D8  38 81 00 20 */	addi r4, r1, 0x20
/* 800487FC 000458DC  4B FC 2A 69 */	bl __as__5xVec3FRC5xVec3
/* 80048800 000458E0  3C 60 80 3C */	lis r3, gSnd@ha
/* 80048804 000458E4  7F A4 EB 78 */	mr r4, r29
/* 80048808 000458E8  38 A3 D5 B4 */	addi r5, r3, gSnd@l
/* 8004880C 000458EC  38 61 00 14 */	addi r3, r1, 0x14
/* 80048810 000458F0  38 A5 19 4C */	addi r5, r5, 0x194c
/* 80048814 000458F4  4B FC 29 B9 */	bl __mi__5xVec3CFRC5xVec3
/* 80048818 000458F8  38 61 00 2C */	addi r3, r1, 0x2c
/* 8004881C 000458FC  38 81 00 14 */	addi r4, r1, 0x14
/* 80048820 00045900  4B FC 2A 45 */	bl __as__5xVec3FRC5xVec3
/* 80048824 00045904  38 61 00 38 */	addi r3, r1, 0x38
/* 80048828 00045908  4B FC 5E 29 */	bl xVec3Length__FPC5xVec3
/* 8004882C 0004590C  FF E0 08 90 */	fmr f31, f1
/* 80048830 00045910  38 61 00 2C */	addi r3, r1, 0x2c
/* 80048834 00045914  4B FC 5E 1D */	bl xVec3Length__FPC5xVec3
/* 80048838 00045918  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 8004883C 0004591C  40 80 00 40 */	bge .L_8004887C
/* 80048840 00045920  EC 3F 08 28 */	fsubs f1, f31, f1
/* 80048844 00045924  C0 02 87 08 */	lfs f0, "@731"@sda21(r2)
/* 80048848 00045928  38 61 00 38 */	addi r3, r1, 0x38
/* 8004884C 0004592C  EC 21 00 32 */	fmuls f1, f1, f0
/* 80048850 00045930  EC 1F 08 28 */	fsubs f0, f31, f1
/* 80048854 00045934  EC 20 F8 24 */	fdivs f1, f0, f31
/* 80048858 00045938  4B FC 29 29 */	bl __amu__5xVec3Ff
/* 8004885C 0004593C  7F E5 FB 78 */	mr r5, r31
/* 80048860 00045940  38 61 00 08 */	addi r3, r1, 0x8
/* 80048864 00045944  38 81 00 38 */	addi r4, r1, 0x38
/* 80048868 00045948  4B FC CB 79 */	bl __pl__5xVec3CFRC5xVec3
/* 8004886C 0004594C  7F C3 F3 78 */	mr r3, r30
/* 80048870 00045950  38 81 00 08 */	addi r4, r1, 0x8
/* 80048874 00045954  4B FC 29 F1 */	bl __as__5xVec3FRC5xVec3
/* 80048878 00045958  48 00 00 20 */	b .L_80048898
.L_8004887C:
/* 8004887C 0004595C  7F C3 F3 78 */	mr r3, r30
/* 80048880 00045960  7F A4 EB 78 */	mr r4, r29
/* 80048884 00045964  4B FC 29 E1 */	bl __as__5xVec3FRC5xVec3
/* 80048888 00045968  48 00 00 10 */	b .L_80048898
.L_8004888C:
/* 8004888C 0004596C  7F C3 F3 78 */	mr r3, r30
/* 80048890 00045970  7F A4 EB 78 */	mr r4, r29
/* 80048894 00045974  4B FC 29 D1 */	bl __as__5xVec3FRC5xVec3
.L_80048898:
/* 80048898 00045978  E3 E1 00 68 */	psq_l f31, 0x68(r1), 0, qr0
/* 8004889C 0004597C  80 01 00 74 */	lwz r0, 0x74(r1)
/* 800488A0 00045980  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 800488A4 00045984  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 800488A8 00045988  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 800488AC 0004598C  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 800488B0 00045990  7C 08 03 A6 */	mtlr r0
/* 800488B4 00045994  38 21 00 70 */	addi r1, r1, 0x70
/* 800488B8 00045998  4E 80 00 20 */	blr
.endfn xSndProcessSoundPos__FPC5xVec3P5xVec3

# xSndInternalUpdateVoicePos(xSndVoiceInfo*)
.fn xSndInternalUpdateVoicePos__FP13xSndVoiceInfo, global
/* 800488BC 0004599C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800488C0 000459A0  7C 08 02 A6 */	mflr r0
/* 800488C4 000459A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800488C8 000459A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800488CC 000459AC  7C 7F 1B 78 */	mr r31, r3
/* 800488D0 000459B0  80 63 00 14 */	lwz r3, 0x14(r3)
/* 800488D4 000459B4  54 60 07 FF */	clrlwi. r0, r3, 31
/* 800488D8 000459B8  41 82 00 A8 */	beq .L_80048980
/* 800488DC 000459BC  54 65 07 39 */	rlwinm. r5, r3, 0, 28, 28
/* 800488E0 000459C0  41 82 00 A0 */	beq .L_80048980
/* 800488E4 000459C4  54 60 06 F7 */	rlwinm. r0, r3, 0, 27, 27
/* 800488E8 000459C8  41 82 00 8C */	beq .L_80048974
/* 800488EC 000459CC  80 9F 00 0C */	lwz r4, 0xc(r31)
/* 800488F0 000459D0  28 04 00 00 */	cmplwi r4, 0x0
/* 800488F4 000459D4  41 82 00 10 */	beq .L_80048904
/* 800488F8 000459D8  38 7F 00 30 */	addi r3, r31, 0x30
/* 800488FC 000459DC  4B FC 29 69 */	bl __as__5xVec3FRC5xVec3
/* 80048900 000459E0  48 00 00 74 */	b .L_80048974
.L_80048904:
/* 80048904 000459E4  80 9F 00 08 */	lwz r4, 0x8(r31)
/* 80048908 000459E8  28 04 00 00 */	cmplwi r4, 0x0
/* 8004890C 000459EC  41 82 00 4C */	beq .L_80048958
/* 80048910 000459F0  54 60 05 29 */	rlwinm. r0, r3, 0, 20, 20
/* 80048914 000459F4  54 84 00 3A */	clrrwi r4, r4, 2
/* 80048918 000459F8  41 82 00 10 */	beq .L_80048928
/* 8004891C 000459FC  38 7F 00 30 */	addi r3, r31, 0x30
/* 80048920 00045A00  4B FC 29 45 */	bl __as__5xVec3FRC5xVec3
/* 80048924 00045A04  48 00 00 50 */	b .L_80048974
.L_80048928:
/* 80048928 00045A08  A0 04 00 06 */	lhz r0, 0x6(r4)
/* 8004892C 00045A0C  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80048930 00045A10  41 82 00 1C */	beq .L_8004894C
/* 80048934 00045A14  7C 83 23 78 */	mr r3, r4
/* 80048938 00045A18  4B FD 2E D1 */	bl xEntGetPos__FPC4xEnt
/* 8004893C 00045A1C  7C 64 1B 78 */	mr r4, r3
/* 80048940 00045A20  38 7F 00 30 */	addi r3, r31, 0x30
/* 80048944 00045A24  48 00 5B 99 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 80048948 00045A28  48 00 00 2C */	b .L_80048974
.L_8004894C:
/* 8004894C 00045A2C  54 60 07 34 */	rlwinm r0, r3, 0, 28, 26
/* 80048950 00045A30  90 1F 00 14 */	stw r0, 0x14(r31)
/* 80048954 00045A34  48 00 00 20 */	b .L_80048974
.L_80048958:
/* 80048958 00045A38  28 05 00 00 */	cmplwi r5, 0x0
/* 8004895C 00045A3C  40 82 00 18 */	bne .L_80048974
/* 80048960 00045A40  3C 80 80 3C */	lis r4, gSnd@ha
/* 80048964 00045A44  38 7F 00 30 */	addi r3, r31, 0x30
/* 80048968 00045A48  38 84 D5 B4 */	addi r4, r4, gSnd@l
/* 8004896C 00045A4C  38 84 19 C8 */	addi r4, r4, 0x19c8
/* 80048970 00045A50  4B FC 28 F5 */	bl __as__5xVec3FRC5xVec3
.L_80048974:
/* 80048974 00045A54  38 7F 00 30 */	addi r3, r31, 0x30
/* 80048978 00045A58  38 9F 00 3C */	addi r4, r31, 0x3c
/* 8004897C 00045A5C  4B FF FE 19 */	bl xSndProcessSoundPos__FPC5xVec3P5xVec3
.L_80048980:
/* 80048980 00045A60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80048984 00045A64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80048988 00045A68  7C 08 03 A6 */	mtlr r0
/* 8004898C 00045A6C  38 21 00 10 */	addi r1, r1, 0x10
/* 80048990 00045A70  4E 80 00 20 */	blr
.endfn xSndInternalUpdateVoicePos__FP13xSndVoiceInfo

# xSndUpdate()
.fn xSndUpdate__Fv, global
/* 80048994 00045A74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80048998 00045A78  7C 08 02 A6 */	mflr r0
/* 8004899C 00045A7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800489A0 00045A80  4B FF FC F9 */	bl xSndCalculateListenerPosition__Fv
/* 800489A4 00045A84  4B FF FB D5 */	bl xSndDelayedUpdate__Fv
/* 800489A8 00045A88  C0 2D 8E B8 */	lfs f1, sTimeElapsed@sda21(r13)
/* 800489AC 00045A8C  48 00 0A 69 */	bl update_faders__Ff
/* 800489B0 00045A90  48 08 8B C1 */	bl iSndUpdate__Fv
/* 800489B4 00045A94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800489B8 00045A98  7C 08 03 A6 */	mtlr r0
/* 800489BC 00045A9C  38 21 00 10 */	addi r1, r1, 0x10
/* 800489C0 00045AA0  4E 80 00 20 */	blr
.endfn xSndUpdate__Fv

# xSndSetListenerData(sound_listener_type, const xMat4x3*)
.fn xSndSetListenerData__F19sound_listener_typePC7xMat4x3, global
/* 800489C4 00045AA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800489C8 00045AA8  7C 08 02 A6 */	mflr r0
/* 800489CC 00045AAC  3C A0 80 3C */	lis r5, gSnd@ha
/* 800489D0 00045AB0  54 63 30 32 */	slwi r3, r3, 6
/* 800489D4 00045AB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800489D8 00045AB8  38 05 D5 B4 */	addi r0, r5, gSnd@l
/* 800489DC 00045ABC  7C 60 1A 14 */	add r3, r0, r3
/* 800489E0 00045AC0  38 63 19 1C */	addi r3, r3, 0x191c
/* 800489E4 00045AC4  4B FC 2B 89 */	bl __as__7xMat4x3FRC7xMat4x3
/* 800489E8 00045AC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800489EC 00045ACC  7C 08 03 A6 */	mtlr r0
/* 800489F0 00045AD0  38 21 00 10 */	addi r1, r1, 0x10
/* 800489F4 00045AD4  4E 80 00 20 */	blr
.endfn xSndSetListenerData__F19sound_listener_typePC7xMat4x3

# xSndSelectListenerMode(sound_listener_game_mode)
.fn xSndSelectListenerMode__F24sound_listener_game_mode, global
/* 800489F8 00045AD8  3C 80 80 3C */	lis r4, gSnd@ha
/* 800489FC 00045ADC  38 84 D5 B4 */	addi r4, r4, gSnd@l
/* 80048A00 00045AE0  90 64 19 9C */	stw r3, 0x199c(r4)
/* 80048A04 00045AE4  4E 80 00 20 */	blr
.endfn xSndSelectListenerMode__F24sound_listener_game_mode

# xSndExit()
.fn xSndExit__Fv, global
/* 80048A08 00045AE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80048A0C 00045AEC  7C 08 02 A6 */	mflr r0
/* 80048A10 00045AF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80048A14 00045AF4  48 08 7D C5 */	bl iSndExit__Fv
/* 80048A18 00045AF8  48 00 09 F1 */	bl reset_faders__Fv
/* 80048A1C 00045AFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80048A20 00045B00  7C 08 03 A6 */	mtlr r0
/* 80048A24 00045B04  38 21 00 10 */	addi r1, r1, 0x10
/* 80048A28 00045B08  4E 80 00 20 */	blr
.endfn xSndExit__Fv

# xSndPlay(unsigned int, float, float, unsigned int, unsigned int, unsigned int, sound_category, float)
.fn xSndPlay__FUiffUiUiUi14sound_categoryf, global
/* 80048A2C 00045B0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80048A30 00045B10  7C 08 02 A6 */	mflr r0
/* 80048A34 00045B14  7C E9 3B 78 */	mr r9, r7
/* 80048A38 00045B18  FC A0 18 90 */	fmr f5, f3
/* 80048A3C 00045B1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80048A40 00045B20  38 E0 00 00 */	li r7, 0x0
/* 80048A44 00045B24  39 00 00 00 */	li r8, 0x0
/* 80048A48 00045B28  C0 62 87 00 */	lfs f3, "@598"@sda21(r2)
/* 80048A4C 00045B2C  FC 80 18 90 */	fmr f4, f3
/* 80048A50 00045B30  48 00 00 91 */	bl xSndPlayInternal__FUiffUiUiUiP4xEntPC5xVec3ff14sound_categoryf
/* 80048A54 00045B34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80048A58 00045B38  7C 08 03 A6 */	mtlr r0
/* 80048A5C 00045B3C  38 21 00 10 */	addi r1, r1, 0x10
/* 80048A60 00045B40  4E 80 00 20 */	blr
.endfn xSndPlay__FUiffUiUiUi14sound_categoryf

# xSndPlay3D(unsigned int, float, float, unsigned int, unsigned int, xEnt*, float, float, sound_category, float)
.fn xSndPlay3D__FUiffUiUiP4xEntff14sound_categoryf, global
/* 80048A64 00045B44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80048A68 00045B48  7C 08 02 A6 */	mflr r0
/* 80048A6C 00045B4C  7C E9 3B 78 */	mr r9, r7
/* 80048A70 00045B50  7C C7 33 78 */	mr r7, r6
/* 80048A74 00045B54  90 01 00 14 */	stw r0, 0x14(r1)
/* 80048A78 00045B58  38 C0 00 00 */	li r6, 0x0
/* 80048A7C 00045B5C  39 00 00 00 */	li r8, 0x0
/* 80048A80 00045B60  48 00 00 61 */	bl xSndPlayInternal__FUiffUiUiUiP4xEntPC5xVec3ff14sound_categoryf
/* 80048A84 00045B64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80048A88 00045B68  7C 08 03 A6 */	mtlr r0
/* 80048A8C 00045B6C  38 21 00 10 */	addi r1, r1, 0x10
/* 80048A90 00045B70  4E 80 00 20 */	blr
.endfn xSndPlay3D__FUiffUiUiP4xEntff14sound_categoryf

# xSndPlay3D(unsigned int, float, float, unsigned int, unsigned int, const xVec3*, float, float, sound_category, float)
.fn xSndPlay3D__FUiffUiUiPC5xVec3ff14sound_categoryf, global
/* 80048A94 00045B74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80048A98 00045B78  7C 08 02 A6 */	mflr r0
/* 80048A9C 00045B7C  7C E9 3B 78 */	mr r9, r7
/* 80048AA0 00045B80  90 01 00 14 */	stw r0, 0x14(r1)
/* 80048AA4 00045B84  54 A0 05 29 */	rlwinm. r0, r5, 0, 20, 20
/* 80048AA8 00045B88  41 82 00 18 */	beq .L_80048AC0
/* 80048AAC 00045B8C  7C C7 33 78 */	mr r7, r6
/* 80048AB0 00045B90  38 C0 00 00 */	li r6, 0x0
/* 80048AB4 00045B94  39 00 00 00 */	li r8, 0x0
/* 80048AB8 00045B98  48 00 00 29 */	bl xSndPlayInternal__FUiffUiUiUiP4xEntPC5xVec3ff14sound_categoryf
/* 80048ABC 00045B9C  48 00 00 14 */	b .L_80048AD0
.L_80048AC0:
/* 80048AC0 00045BA0  7C C8 33 78 */	mr r8, r6
/* 80048AC4 00045BA4  38 C0 00 00 */	li r6, 0x0
/* 80048AC8 00045BA8  38 E0 00 00 */	li r7, 0x0
/* 80048ACC 00045BAC  48 00 00 15 */	bl xSndPlayInternal__FUiffUiUiUiP4xEntPC5xVec3ff14sound_categoryf
.L_80048AD0:
/* 80048AD0 00045BB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80048AD4 00045BB4  7C 08 03 A6 */	mtlr r0
/* 80048AD8 00045BB8  38 21 00 10 */	addi r1, r1, 0x10
/* 80048ADC 00045BBC  4E 80 00 20 */	blr
.endfn xSndPlay3D__FUiffUiUiPC5xVec3ff14sound_categoryf

# xSndPlayInternal(unsigned int, float, float, unsigned int, unsigned int, unsigned int, xEnt*, const xVec3*, float, float, sound_category, float)
.fn xSndPlayInternal__FUiffUiUiUiP4xEntPC5xVec3ff14sound_categoryf, global
/* 80048AE0 00045BC0  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80048AE4 00045BC4  7C 08 02 A6 */	mflr r0
/* 80048AE8 00045BC8  90 01 00 74 */	stw r0, 0x74(r1)
/* 80048AEC 00045BCC  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 80048AF0 00045BD0  F3 E1 00 68 */	psq_st f31, 0x68(r1), 0, qr0
/* 80048AF4 00045BD4  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 80048AF8 00045BD8  F3 C1 00 58 */	psq_st f30, 0x58(r1), 0, qr0
/* 80048AFC 00045BDC  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 80048B00 00045BE0  F3 A1 00 48 */	psq_st f29, 0x48(r1), 0, qr0
/* 80048B04 00045BE4  DB 81 00 30 */	stfd f28, 0x30(r1)
/* 80048B08 00045BE8  F3 81 00 38 */	psq_st f28, 0x38(r1), 0, qr0
/* 80048B0C 00045BEC  BE E1 00 0C */	stmw r23, 0xc(r1)
/* 80048B10 00045BF0  FF A0 18 90 */	fmr f29, f3
/* 80048B14 00045BF4  7C 78 1B 78 */	mr r24, r3
/* 80048B18 00045BF8  FF C0 20 90 */	fmr f30, f4
/* 80048B1C 00045BFC  7C 99 23 78 */	mr r25, r4
/* 80048B20 00045C00  FF 80 10 90 */	fmr f28, f2
/* 80048B24 00045C04  7C BA 2B 78 */	mr r26, r5
/* 80048B28 00045C08  FC 1D F0 40 */	fcmpo cr0, f29, f30
/* 80048B2C 00045C0C  7C DE 33 78 */	mr r30, r6
/* 80048B30 00045C10  7C FB 3B 78 */	mr r27, r7
/* 80048B34 00045C14  7D 1C 43 78 */	mr r28, r8
/* 80048B38 00045C18  7D 3D 4B 78 */	mr r29, r9
/* 80048B3C 00045C1C  40 81 00 10 */	ble .L_80048B4C
/* 80048B40 00045C20  FC 00 E8 90 */	fmr f0, f29
/* 80048B44 00045C24  FF A0 F0 90 */	fmr f29, f30
/* 80048B48 00045C28  FF C0 00 90 */	fmr f30, f0
.L_80048B4C:
/* 80048B4C 00045C2C  C0 02 86 F8 */	lfs f0, "@585"@sda21(r2)
/* 80048B50 00045C30  C0 42 87 00 */	lfs f2, "@598"@sda21(r2)
/* 80048B54 00045C34  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80048B58 00045C38  40 80 00 08 */	bge .L_80048B60
/* 80048B5C 00045C3C  FC 00 08 90 */	fmr f0, f1
.L_80048B60:
/* 80048B60 00045C40  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80048B64 00045C44  40 81 00 0C */	ble .L_80048B70
/* 80048B68 00045C48  C3 E2 87 00 */	lfs f31, "@598"@sda21(r2)
/* 80048B6C 00045C4C  48 00 00 14 */	b .L_80048B80
.L_80048B70:
/* 80048B70 00045C50  C3 E2 86 F8 */	lfs f31, "@585"@sda21(r2)
/* 80048B74 00045C54  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 80048B78 00045C58  40 80 00 08 */	bge .L_80048B80
/* 80048B7C 00045C5C  FF E0 08 90 */	fmr f31, f1
.L_80048B80:
/* 80048B80 00045C60  C0 02 87 00 */	lfs f0, "@598"@sda21(r2)
/* 80048B84 00045C64  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 80048B88 00045C68  40 81 00 3C */	ble .L_80048BC4
/* 80048B8C 00045C6C  FC 20 F8 90 */	fmr f1, f31
/* 80048B90 00045C70  7F 03 C3 78 */	mr r3, r24
/* 80048B94 00045C74  FC 40 E0 90 */	fmr f2, f28
/* 80048B98 00045C78  7F 24 CB 78 */	mr r4, r25
/* 80048B9C 00045C7C  FC 60 E8 90 */	fmr f3, f29
/* 80048BA0 00045C80  7F 45 D3 78 */	mr r5, r26
/* 80048BA4 00045C84  FC 80 F0 90 */	fmr f4, f30
/* 80048BA8 00045C88  7F C6 F3 78 */	mr r6, r30
/* 80048BAC 00045C8C  7F 67 DB 78 */	mr r7, r27
/* 80048BB0 00045C90  7F 88 E3 78 */	mr r8, r28
/* 80048BB4 00045C94  7F A9 EB 78 */	mr r9, r29
/* 80048BB8 00045C98  4B FF FA 7D */	bl xSndAddDelayed__FUiffUiUiUiP4xEntP5xVec3ff14sound_categoryf
/* 80048BBC 00045C9C  38 60 00 00 */	li r3, 0x0
/* 80048BC0 00045CA0  48 00 05 34 */	b .L_800490F4
.L_80048BC4:
/* 80048BC4 00045CA4  57 40 03 DF */	rlwinm. r0, r26, 0, 15, 15
/* 80048BC8 00045CA8  41 82 03 08 */	beq .L_80048ED0
/* 80048BCC 00045CAC  28 1E 00 00 */	cmplwi r30, 0x0
/* 80048BD0 00045CB0  40 82 00 0C */	bne .L_80048BDC
/* 80048BD4 00045CB4  28 1B 00 00 */	cmplwi r27, 0x0
/* 80048BD8 00045CB8  41 82 01 04 */	beq .L_80048CDC
.L_80048BDC:
/* 80048BDC 00045CBC  3C 60 80 3C */	lis r3, gSnd@ha
/* 80048BE0 00045CC0  38 00 00 10 */	li r0, 0x10
/* 80048BE4 00045CC4  38 63 D5 B4 */	addi r3, r3, gSnd@l
/* 80048BE8 00045CC8  38 80 00 00 */	li r4, 0x0
/* 80048BEC 00045CCC  7C 09 03 A6 */	mtctr r0
.L_80048BF0:
/* 80048BF0 00045CD0  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80048BF4 00045CD4  7C 00 C0 40 */	cmplw r0, r24
/* 80048BF8 00045CD8  40 82 00 2C */	bne .L_80048C24
/* 80048BFC 00045CDC  80 03 00 24 */	lwz r0, 0x24(r3)
/* 80048C00 00045CE0  7C 00 F0 40 */	cmplw r0, r30
/* 80048C04 00045CE4  41 82 00 0C */	beq .L_80048C10
/* 80048C08 00045CE8  7C 00 D8 40 */	cmplw r0, r27
/* 80048C0C 00045CEC  40 82 00 18 */	bne .L_80048C24
.L_80048C10:
/* 80048C10 00045CF0  80 03 00 30 */	lwz r0, 0x30(r3)
/* 80048C14 00045CF4  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80048C18 00045CF8  41 82 00 0C */	beq .L_80048C24
/* 80048C1C 00045CFC  38 60 00 00 */	li r3, 0x0
/* 80048C20 00045D00  48 00 04 D4 */	b .L_800490F4
.L_80048C24:
/* 80048C24 00045D04  80 03 00 80 */	lwz r0, 0x80(r3)
/* 80048C28 00045D08  38 63 00 64 */	addi r3, r3, 0x64
/* 80048C2C 00045D0C  7C 00 C0 40 */	cmplw r0, r24
/* 80048C30 00045D10  40 82 00 2C */	bne .L_80048C5C
/* 80048C34 00045D14  80 03 00 24 */	lwz r0, 0x24(r3)
/* 80048C38 00045D18  7C 00 F0 40 */	cmplw r0, r30
/* 80048C3C 00045D1C  41 82 00 0C */	beq .L_80048C48
/* 80048C40 00045D20  7C 00 D8 40 */	cmplw r0, r27
/* 80048C44 00045D24  40 82 00 18 */	bne .L_80048C5C
.L_80048C48:
/* 80048C48 00045D28  80 03 00 30 */	lwz r0, 0x30(r3)
/* 80048C4C 00045D2C  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80048C50 00045D30  41 82 00 0C */	beq .L_80048C5C
/* 80048C54 00045D34  38 60 00 00 */	li r3, 0x0
/* 80048C58 00045D38  48 00 04 9C */	b .L_800490F4
.L_80048C5C:
/* 80048C5C 00045D3C  80 03 00 80 */	lwz r0, 0x80(r3)
/* 80048C60 00045D40  38 63 00 64 */	addi r3, r3, 0x64
/* 80048C64 00045D44  7C 00 C0 40 */	cmplw r0, r24
/* 80048C68 00045D48  40 82 00 2C */	bne .L_80048C94
/* 80048C6C 00045D4C  80 03 00 24 */	lwz r0, 0x24(r3)
/* 80048C70 00045D50  7C 00 F0 40 */	cmplw r0, r30
/* 80048C74 00045D54  41 82 00 0C */	beq .L_80048C80
/* 80048C78 00045D58  7C 00 D8 40 */	cmplw r0, r27
/* 80048C7C 00045D5C  40 82 00 18 */	bne .L_80048C94
.L_80048C80:
/* 80048C80 00045D60  80 03 00 30 */	lwz r0, 0x30(r3)
/* 80048C84 00045D64  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80048C88 00045D68  41 82 00 0C */	beq .L_80048C94
/* 80048C8C 00045D6C  38 60 00 00 */	li r3, 0x0
/* 80048C90 00045D70  48 00 04 64 */	b .L_800490F4
.L_80048C94:
/* 80048C94 00045D74  80 03 00 80 */	lwz r0, 0x80(r3)
/* 80048C98 00045D78  38 63 00 64 */	addi r3, r3, 0x64
/* 80048C9C 00045D7C  7C 00 C0 40 */	cmplw r0, r24
/* 80048CA0 00045D80  40 82 00 2C */	bne .L_80048CCC
/* 80048CA4 00045D84  80 03 00 24 */	lwz r0, 0x24(r3)
/* 80048CA8 00045D88  7C 00 F0 40 */	cmplw r0, r30
/* 80048CAC 00045D8C  41 82 00 0C */	beq .L_80048CB8
/* 80048CB0 00045D90  7C 00 D8 40 */	cmplw r0, r27
/* 80048CB4 00045D94  40 82 00 18 */	bne .L_80048CCC
.L_80048CB8:
/* 80048CB8 00045D98  80 03 00 30 */	lwz r0, 0x30(r3)
/* 80048CBC 00045D9C  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80048CC0 00045DA0  41 82 00 0C */	beq .L_80048CCC
/* 80048CC4 00045DA4  38 60 00 00 */	li r3, 0x0
/* 80048CC8 00045DA8  48 00 04 2C */	b .L_800490F4
.L_80048CCC:
/* 80048CCC 00045DAC  38 63 00 64 */	addi r3, r3, 0x64
/* 80048CD0 00045DB0  38 84 00 03 */	addi r4, r4, 0x3
/* 80048CD4 00045DB4  42 00 FF 1C */	bdnz .L_80048BF0
/* 80048CD8 00045DB8  48 00 01 F8 */	b .L_80048ED0
.L_80048CDC:
/* 80048CDC 00045DBC  28 1C 00 00 */	cmplwi r28, 0x0
/* 80048CE0 00045DC0  41 82 00 E4 */	beq .L_80048DC4
/* 80048CE4 00045DC4  3C 60 80 3C */	lis r3, gSnd@ha
/* 80048CE8 00045DC8  38 00 00 10 */	li r0, 0x10
/* 80048CEC 00045DCC  38 63 D5 B4 */	addi r3, r3, gSnd@l
/* 80048CF0 00045DD0  38 80 00 00 */	li r4, 0x0
/* 80048CF4 00045DD4  7C 09 03 A6 */	mtctr r0
.L_80048CF8:
/* 80048CF8 00045DD8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80048CFC 00045DDC  7C 00 C0 40 */	cmplw r0, r24
/* 80048D00 00045DE0  40 82 00 24 */	bne .L_80048D24
/* 80048D04 00045DE4  80 03 00 28 */	lwz r0, 0x28(r3)
/* 80048D08 00045DE8  7C 00 E0 40 */	cmplw r0, r28
/* 80048D0C 00045DEC  40 82 00 18 */	bne .L_80048D24
/* 80048D10 00045DF0  80 03 00 30 */	lwz r0, 0x30(r3)
/* 80048D14 00045DF4  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80048D18 00045DF8  41 82 00 0C */	beq .L_80048D24
/* 80048D1C 00045DFC  38 60 00 00 */	li r3, 0x0
/* 80048D20 00045E00  48 00 03 D4 */	b .L_800490F4
.L_80048D24:
/* 80048D24 00045E04  80 03 00 80 */	lwz r0, 0x80(r3)
/* 80048D28 00045E08  38 63 00 64 */	addi r3, r3, 0x64
/* 80048D2C 00045E0C  7C 00 C0 40 */	cmplw r0, r24
/* 80048D30 00045E10  40 82 00 24 */	bne .L_80048D54
/* 80048D34 00045E14  80 03 00 28 */	lwz r0, 0x28(r3)
/* 80048D38 00045E18  7C 00 E0 40 */	cmplw r0, r28
/* 80048D3C 00045E1C  40 82 00 18 */	bne .L_80048D54
/* 80048D40 00045E20  80 03 00 30 */	lwz r0, 0x30(r3)
/* 80048D44 00045E24  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80048D48 00045E28  41 82 00 0C */	beq .L_80048D54
/* 80048D4C 00045E2C  38 60 00 00 */	li r3, 0x0
/* 80048D50 00045E30  48 00 03 A4 */	b .L_800490F4
.L_80048D54:
/* 80048D54 00045E34  80 03 00 80 */	lwz r0, 0x80(r3)
/* 80048D58 00045E38  38 63 00 64 */	addi r3, r3, 0x64
/* 80048D5C 00045E3C  7C 00 C0 40 */	cmplw r0, r24
/* 80048D60 00045E40  40 82 00 24 */	bne .L_80048D84
/* 80048D64 00045E44  80 03 00 28 */	lwz r0, 0x28(r3)
/* 80048D68 00045E48  7C 00 E0 40 */	cmplw r0, r28
/* 80048D6C 00045E4C  40 82 00 18 */	bne .L_80048D84
/* 80048D70 00045E50  80 03 00 30 */	lwz r0, 0x30(r3)
/* 80048D74 00045E54  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80048D78 00045E58  41 82 00 0C */	beq .L_80048D84
/* 80048D7C 00045E5C  38 60 00 00 */	li r3, 0x0
/* 80048D80 00045E60  48 00 03 74 */	b .L_800490F4
.L_80048D84:
/* 80048D84 00045E64  80 03 00 80 */	lwz r0, 0x80(r3)
/* 80048D88 00045E68  38 63 00 64 */	addi r3, r3, 0x64
/* 80048D8C 00045E6C  7C 00 C0 40 */	cmplw r0, r24
/* 80048D90 00045E70  40 82 00 24 */	bne .L_80048DB4
/* 80048D94 00045E74  80 03 00 28 */	lwz r0, 0x28(r3)
/* 80048D98 00045E78  7C 00 E0 40 */	cmplw r0, r28
/* 80048D9C 00045E7C  40 82 00 18 */	bne .L_80048DB4
/* 80048DA0 00045E80  80 03 00 30 */	lwz r0, 0x30(r3)
/* 80048DA4 00045E84  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80048DA8 00045E88  41 82 00 0C */	beq .L_80048DB4
/* 80048DAC 00045E8C  38 60 00 00 */	li r3, 0x0
/* 80048DB0 00045E90  48 00 03 44 */	b .L_800490F4
.L_80048DB4:
/* 80048DB4 00045E94  38 63 00 64 */	addi r3, r3, 0x64
/* 80048DB8 00045E98  38 84 00 03 */	addi r4, r4, 0x3
/* 80048DBC 00045E9C  42 00 FF 3C */	bdnz .L_80048CF8
/* 80048DC0 00045EA0  48 00 01 10 */	b .L_80048ED0
.L_80048DC4:
/* 80048DC4 00045EA4  3C 60 80 3C */	lis r3, gSnd@ha
/* 80048DC8 00045EA8  38 00 00 10 */	li r0, 0x10
/* 80048DCC 00045EAC  38 63 D5 B4 */	addi r3, r3, gSnd@l
/* 80048DD0 00045EB0  38 80 00 00 */	li r4, 0x0
/* 80048DD4 00045EB4  7C 09 03 A6 */	mtctr r0
.L_80048DD8:
/* 80048DD8 00045EB8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80048DDC 00045EBC  7C 00 C0 40 */	cmplw r0, r24
/* 80048DE0 00045EC0  40 82 00 30 */	bne .L_80048E10
/* 80048DE4 00045EC4  80 03 00 28 */	lwz r0, 0x28(r3)
/* 80048DE8 00045EC8  28 00 00 00 */	cmplwi r0, 0x0
/* 80048DEC 00045ECC  40 82 00 24 */	bne .L_80048E10
/* 80048DF0 00045ED0  80 03 00 24 */	lwz r0, 0x24(r3)
/* 80048DF4 00045ED4  28 00 00 00 */	cmplwi r0, 0x0
/* 80048DF8 00045ED8  40 82 00 18 */	bne .L_80048E10
/* 80048DFC 00045EDC  80 03 00 30 */	lwz r0, 0x30(r3)
/* 80048E00 00045EE0  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80048E04 00045EE4  41 82 00 0C */	beq .L_80048E10
/* 80048E08 00045EE8  38 60 00 00 */	li r3, 0x0
/* 80048E0C 00045EEC  48 00 02 E8 */	b .L_800490F4
.L_80048E10:
/* 80048E10 00045EF0  80 03 00 80 */	lwz r0, 0x80(r3)
/* 80048E14 00045EF4  38 63 00 64 */	addi r3, r3, 0x64
/* 80048E18 00045EF8  7C 00 C0 40 */	cmplw r0, r24
/* 80048E1C 00045EFC  40 82 00 30 */	bne .L_80048E4C
/* 80048E20 00045F00  80 03 00 28 */	lwz r0, 0x28(r3)
/* 80048E24 00045F04  28 00 00 00 */	cmplwi r0, 0x0
/* 80048E28 00045F08  40 82 00 24 */	bne .L_80048E4C
/* 80048E2C 00045F0C  80 03 00 24 */	lwz r0, 0x24(r3)
/* 80048E30 00045F10  28 00 00 00 */	cmplwi r0, 0x0
/* 80048E34 00045F14  40 82 00 18 */	bne .L_80048E4C
/* 80048E38 00045F18  80 03 00 30 */	lwz r0, 0x30(r3)
/* 80048E3C 00045F1C  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80048E40 00045F20  41 82 00 0C */	beq .L_80048E4C
/* 80048E44 00045F24  38 60 00 00 */	li r3, 0x0
/* 80048E48 00045F28  48 00 02 AC */	b .L_800490F4
.L_80048E4C:
/* 80048E4C 00045F2C  80 03 00 80 */	lwz r0, 0x80(r3)
/* 80048E50 00045F30  38 63 00 64 */	addi r3, r3, 0x64
/* 80048E54 00045F34  7C 00 C0 40 */	cmplw r0, r24
/* 80048E58 00045F38  40 82 00 30 */	bne .L_80048E88
/* 80048E5C 00045F3C  80 03 00 28 */	lwz r0, 0x28(r3)
/* 80048E60 00045F40  28 00 00 00 */	cmplwi r0, 0x0
/* 80048E64 00045F44  40 82 00 24 */	bne .L_80048E88
/* 80048E68 00045F48  80 03 00 24 */	lwz r0, 0x24(r3)
/* 80048E6C 00045F4C  28 00 00 00 */	cmplwi r0, 0x0
/* 80048E70 00045F50  40 82 00 18 */	bne .L_80048E88
/* 80048E74 00045F54  80 03 00 30 */	lwz r0, 0x30(r3)
/* 80048E78 00045F58  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80048E7C 00045F5C  41 82 00 0C */	beq .L_80048E88
/* 80048E80 00045F60  38 60 00 00 */	li r3, 0x0
/* 80048E84 00045F64  48 00 02 70 */	b .L_800490F4
.L_80048E88:
/* 80048E88 00045F68  80 03 00 80 */	lwz r0, 0x80(r3)
/* 80048E8C 00045F6C  38 63 00 64 */	addi r3, r3, 0x64
/* 80048E90 00045F70  7C 00 C0 40 */	cmplw r0, r24
/* 80048E94 00045F74  40 82 00 30 */	bne .L_80048EC4
/* 80048E98 00045F78  80 03 00 28 */	lwz r0, 0x28(r3)
/* 80048E9C 00045F7C  28 00 00 00 */	cmplwi r0, 0x0
/* 80048EA0 00045F80  40 82 00 24 */	bne .L_80048EC4
/* 80048EA4 00045F84  80 03 00 24 */	lwz r0, 0x24(r3)
/* 80048EA8 00045F88  28 00 00 00 */	cmplwi r0, 0x0
/* 80048EAC 00045F8C  40 82 00 18 */	bne .L_80048EC4
/* 80048EB0 00045F90  80 03 00 30 */	lwz r0, 0x30(r3)
/* 80048EB4 00045F94  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80048EB8 00045F98  41 82 00 0C */	beq .L_80048EC4
/* 80048EBC 00045F9C  38 60 00 00 */	li r3, 0x0
/* 80048EC0 00045FA0  48 00 02 34 */	b .L_800490F4
.L_80048EC4:
/* 80048EC4 00045FA4  38 63 00 64 */	addi r3, r3, 0x64
/* 80048EC8 00045FA8  38 84 00 03 */	addi r4, r4, 0x3
/* 80048ECC 00045FAC  42 00 FF 0C */	bdnz .L_80048DD8
.L_80048ED0:
/* 80048ED0 00045FB0  57 40 05 6B */	rlwinm. r0, r26, 0, 21, 21
/* 80048ED4 00045FB4  41 82 00 2C */	beq .L_80048F00
/* 80048ED8 00045FB8  7F 03 C3 78 */	mr r3, r24
/* 80048EDC 00045FBC  63 5A 00 04 */	ori r26, r26, 0x4
/* 80048EE0 00045FC0  48 08 7B 65 */	bl iSndLookup__FUi
/* 80048EE4 00045FC4  28 03 00 00 */	cmplwi r3, 0x0
/* 80048EE8 00045FC8  40 82 00 0C */	bne .L_80048EF4
/* 80048EEC 00045FCC  38 60 00 00 */	li r3, 0x0
/* 80048EF0 00045FD0  48 00 02 04 */	b .L_800490F4
.L_80048EF4:
/* 80048EF4 00045FD4  83 E3 00 08 */	lwz r31, 0x8(r3)
/* 80048EF8 00045FD8  3A E0 FF FF */	li r23, -0x1
/* 80048EFC 00045FDC  48 00 00 50 */	b .L_80048F4C
.L_80048F00:
/* 80048F00 00045FE0  7F 03 C3 78 */	mr r3, r24
/* 80048F04 00045FE4  48 08 7B 41 */	bl iSndLookup__FUi
/* 80048F08 00045FE8  7C 77 1B 79 */	mr. r23, r3
/* 80048F0C 00045FEC  40 82 00 0C */	bne .L_80048F18
/* 80048F10 00045FF0  38 60 00 00 */	li r3, 0x0
/* 80048F14 00045FF4  48 00 01 E0 */	b .L_800490F4
.L_80048F18:
/* 80048F18 00045FF8  80 17 00 64 */	lwz r0, 0x64(r23)
/* 80048F1C 00045FFC  63 5F 00 04 */	ori r31, r26, 0x4
/* 80048F20 00046000  2C 00 10 00 */	cmpwi r0, 0x1000
/* 80048F24 00046004  41 80 00 08 */	blt .L_80048F2C
/* 80048F28 00046008  63 5F 00 02 */	ori r31, r26, 0x2
.L_80048F2C:
/* 80048F2C 0004600C  7F FA FB 78 */	mr r26, r31
/* 80048F30 00046010  7F A3 EB 78 */	mr r3, r29
/* 80048F34 00046014  48 00 0A 69 */	bl xSndCategoryGetsEffects__F14sound_category
/* 80048F38 00046018  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80048F3C 0004601C  41 82 00 08 */	beq .L_80048F44
/* 80048F40 00046020  63 FA 00 20 */	ori r26, r31, 0x20
.L_80048F44:
/* 80048F44 00046024  83 F7 00 08 */	lwz r31, 0x8(r23)
/* 80048F48 00046028  82 F7 00 64 */	lwz r23, 0x64(r23)
.L_80048F4C:
/* 80048F4C 0004602C  7F 23 CB 78 */	mr r3, r25
/* 80048F50 00046030  7F 44 D3 78 */	mr r4, r26
/* 80048F54 00046034  7F C5 F3 78 */	mr r5, r30
/* 80048F58 00046038  48 08 87 4D */	bl iSndFindFreeVoice__FUiUiUi
/* 80048F5C 0004603C  3C 03 00 01 */	addis r0, r3, 0x1
/* 80048F60 00046040  28 00 FF FF */	cmplwi r0, 0xffff
/* 80048F64 00046044  40 82 00 0C */	bne .L_80048F70
/* 80048F68 00046048  38 60 00 00 */	li r3, 0x0
/* 80048F6C 0004604C  48 00 01 88 */	b .L_800490F4
.L_80048F70:
/* 80048F70 00046050  1C A3 00 64 */	mulli r5, r3, 0x64
/* 80048F74 00046054  3C 60 80 3C */	lis r3, gSnd@ha
/* 80048F78 00046058  63 40 00 01 */	ori r0, r26, 0x1
/* 80048F7C 0004605C  38 83 D5 B4 */	addi r4, r3, gSnd@l
/* 80048F80 00046060  7C 64 2A 14 */	add r3, r4, r5
/* 80048F84 00046064  28 1B 00 00 */	cmplwi r27, 0x0
/* 80048F88 00046068  B3 23 00 36 */	sth r25, 0x36(r3)
/* 80048F8C 0004606C  3B C3 00 1C */	addi r30, r3, 0x1c
/* 80048F90 00046070  38 A0 00 00 */	li r5, 0x0
/* 80048F94 00046074  D3 83 00 3C */	stfs f28, 0x3c(r3)
/* 80048F98 00046078  D3 E3 00 38 */	stfs f31, 0x38(r3)
/* 80048F9C 0004607C  93 03 00 1C */	stw r24, 0x1c(r3)
/* 80048FA0 00046080  92 E3 00 2C */	stw r23, 0x2c(r3)
/* 80048FA4 00046084  80 64 00 04 */	lwz r3, 0x4(r4)
/* 80048FA8 00046088  38 63 00 01 */	addi r3, r3, 0x1
/* 80048FAC 0004608C  90 64 00 04 */	stw r3, 0x4(r4)
/* 80048FB0 00046090  90 7E 00 04 */	stw r3, 0x4(r30)
/* 80048FB4 00046094  93 FE 00 24 */	stw r31, 0x24(r30)
/* 80048FB8 00046098  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80048FBC 0004609C  90 BE 00 28 */	stw r5, 0x28(r30)
/* 80048FC0 000460A0  93 BE 00 2C */	stw r29, 0x2c(r30)
/* 80048FC4 000460A4  41 82 00 70 */	beq .L_80049034
/* 80048FC8 000460A8  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 80048FCC 000460AC  EC 1D 07 72 */	fmuls f0, f29, f29
/* 80048FD0 000460B0  60 00 00 18 */	ori r0, r0, 0x18
/* 80048FD4 000460B4  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80048FD8 000460B8  93 7E 00 08 */	stw r27, 0x8(r30)
/* 80048FDC 000460BC  90 BE 00 0C */	stw r5, 0xc(r30)
/* 80048FE0 000460C0  D0 1E 00 48 */	stfs f0, 0x48(r30)
/* 80048FE4 000460C4  C0 02 87 00 */	lfs f0, "@598"@sda21(r2)
/* 80048FE8 000460C8  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80048FEC 000460CC  4C 40 13 82 */	cror eq, lt, eq
/* 80048FF0 000460D0  40 82 00 0C */	bne .L_80048FFC
/* 80048FF4 000460D4  C0 02 87 0C */	lfs f0, "@1039"@sda21(r2)
/* 80048FF8 000460D8  48 00 00 08 */	b .L_80049000
.L_80048FFC:
/* 80048FFC 000460DC  EC 1E 07 B2 */	fmuls f0, f30, f30
.L_80049000:
/* 80049000 000460E0  57 40 05 29 */	rlwinm. r0, r26, 0, 20, 20
/* 80049004 000460E4  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 80049008 000460E8  41 82 00 14 */	beq .L_8004901C
/* 8004900C 000460EC  38 7E 00 30 */	addi r3, r30, 0x30
/* 80049010 000460F0  57 64 00 3A */	clrrwi r4, r27, 2
/* 80049014 000460F4  4B FC 22 51 */	bl __as__5xVec3FRC5xVec3
/* 80049018 000460F8  48 00 00 A0 */	b .L_800490B8
.L_8004901C:
/* 8004901C 000460FC  57 63 00 3A */	clrrwi r3, r27, 2
/* 80049020 00046100  4B FD 27 E9 */	bl xEntGetPos__FPC4xEnt
/* 80049024 00046104  7C 64 1B 78 */	mr r4, r3
/* 80049028 00046108  38 7E 00 30 */	addi r3, r30, 0x30
/* 8004902C 0004610C  4B FC 22 39 */	bl __as__5xVec3FRC5xVec3
/* 80049030 00046110  48 00 00 88 */	b .L_800490B8
.L_80049034:
/* 80049034 00046114  28 1C 00 00 */	cmplwi r28, 0x0
/* 80049038 00046118  41 82 00 5C */	beq .L_80049094
/* 8004903C 0004611C  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 80049040 00046120  57 40 06 F7 */	rlwinm. r0, r26, 0, 27, 27
/* 80049044 00046124  60 60 00 08 */	ori r0, r3, 0x8
/* 80049048 00046128  90 1E 00 14 */	stw r0, 0x14(r30)
/* 8004904C 0004612C  90 BE 00 08 */	stw r5, 0x8(r30)
/* 80049050 00046130  41 82 00 08 */	beq .L_80049058
/* 80049054 00046134  7F 85 E3 78 */	mr r5, r28
.L_80049058:
/* 80049058 00046138  90 BE 00 0C */	stw r5, 0xc(r30)
/* 8004905C 0004613C  7F 84 E3 78 */	mr r4, r28
/* 80049060 00046140  38 7E 00 30 */	addi r3, r30, 0x30
/* 80049064 00046144  4B FC 22 01 */	bl __as__5xVec3FRC5xVec3
/* 80049068 00046148  EC 1D 07 72 */	fmuls f0, f29, f29
/* 8004906C 0004614C  D0 1E 00 48 */	stfs f0, 0x48(r30)
/* 80049070 00046150  C0 02 87 00 */	lfs f0, "@598"@sda21(r2)
/* 80049074 00046154  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80049078 00046158  4C 40 13 82 */	cror eq, lt, eq
/* 8004907C 0004615C  40 82 00 0C */	bne .L_80049088
/* 80049080 00046160  C0 02 87 0C */	lfs f0, "@1039"@sda21(r2)
/* 80049084 00046164  48 00 00 08 */	b .L_8004908C
.L_80049088:
/* 80049088 00046168  EC 1E 07 B2 */	fmuls f0, f30, f30
.L_8004908C:
/* 8004908C 0004616C  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 80049090 00046170  48 00 00 28 */	b .L_800490B8
.L_80049094:
/* 80049094 00046174  90 BE 00 08 */	stw r5, 0x8(r30)
/* 80049098 00046178  38 7E 00 30 */	addi r3, r30, 0x30
/* 8004909C 0004617C  38 84 19 C8 */	addi r4, r4, 0x19c8
/* 800490A0 00046180  90 BE 00 0C */	stw r5, 0xc(r30)
/* 800490A4 00046184  4B FC 21 C1 */	bl __as__5xVec3FRC5xVec3
/* 800490A8 00046188  C0 02 87 10 */	lfs f0, "@1040"@sda21(r2)
/* 800490AC 0004618C  D0 1E 00 48 */	stfs f0, 0x48(r30)
/* 800490B0 00046190  C0 02 87 14 */	lfs f0, "@1041"@sda21(r2)
/* 800490B4 00046194  D0 1E 00 4C */	stfs f0, 0x4c(r30)
.L_800490B8:
/* 800490B8 00046198  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 800490BC 0004619C  54 00 07 39 */	rlwinm. r0, r0, 0, 28, 28
/* 800490C0 000461A0  41 82 00 0C */	beq .L_800490CC
/* 800490C4 000461A4  7F C3 F3 78 */	mr r3, r30
/* 800490C8 000461A8  4B FF F7 F5 */	bl xSndInternalUpdateVoicePos__FP13xSndVoiceInfo
.L_800490CC:
/* 800490CC 000461AC  7F C3 F3 78 */	mr r3, r30
/* 800490D0 000461B0  48 08 90 D1 */	bl iSndPlay__FP13xSndVoiceInfo
/* 800490D4 000461B4  28 03 00 00 */	cmplwi r3, 0x0
/* 800490D8 000461B8  40 82 00 18 */	bne .L_800490F0
/* 800490DC 000461BC  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 800490E0 000461C0  38 60 00 00 */	li r3, 0x0
/* 800490E4 000461C4  54 00 00 3C */	clrrwi r0, r0, 1
/* 800490E8 000461C8  90 1E 00 14 */	stw r0, 0x14(r30)
/* 800490EC 000461CC  48 00 00 08 */	b .L_800490F4
.L_800490F0:
/* 800490F0 000461D0  80 7E 00 04 */	lwz r3, 0x4(r30)
.L_800490F4:
/* 800490F4 000461D4  E3 E1 00 68 */	psq_l f31, 0x68(r1), 0, qr0
/* 800490F8 000461D8  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 800490FC 000461DC  E3 C1 00 58 */	psq_l f30, 0x58(r1), 0, qr0
/* 80049100 000461E0  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 80049104 000461E4  E3 A1 00 48 */	psq_l f29, 0x48(r1), 0, qr0
/* 80049108 000461E8  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 8004910C 000461EC  E3 81 00 38 */	psq_l f28, 0x38(r1), 0, qr0
/* 80049110 000461F0  CB 81 00 30 */	lfd f28, 0x30(r1)
/* 80049114 000461F4  BA E1 00 0C */	lmw r23, 0xc(r1)
/* 80049118 000461F8  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8004911C 000461FC  7C 08 03 A6 */	mtlr r0
/* 80049120 00046200  38 21 00 70 */	addi r1, r1, 0x70
/* 80049124 00046204  4E 80 00 20 */	blr
.endfn xSndPlayInternal__FUiffUiUiUiP4xEntPC5xVec3ff14sound_categoryf

# xSndStartStereo(unsigned int, unsigned int, float)
.fn xSndStartStereo__FUiUif, global
/* 80049128 00046208  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004912C 0004620C  7C 08 02 A6 */	mflr r0
/* 80049130 00046210  90 01 00 14 */	stw r0, 0x14(r1)
/* 80049134 00046214  48 08 94 2D */	bl iSndStartStereo__FUiUif
/* 80049138 00046218  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004913C 0004621C  7C 08 03 A6 */	mtlr r0
/* 80049140 00046220  38 21 00 10 */	addi r1, r1, 0x10
/* 80049144 00046224  4E 80 00 20 */	blr
.endfn xSndStartStereo__FUiUif

# xSndIDIsPlaying(unsigned int)
.fn xSndIDIsPlaying__FUi, global
/* 80049148 00046228  3C 80 80 3C */	lis r4, gSnd@ha
/* 8004914C 0004622C  38 00 00 10 */	li r0, 0x10
/* 80049150 00046230  38 84 D5 B4 */	addi r4, r4, gSnd@l
/* 80049154 00046234  38 A0 00 00 */	li r5, 0x0
/* 80049158 00046238  38 84 00 1C */	addi r4, r4, 0x1c
/* 8004915C 0004623C  7C 09 03 A6 */	mtctr r0
.L_80049160:
/* 80049160 00046240  80 04 00 14 */	lwz r0, 0x14(r4)
/* 80049164 00046244  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80049168 00046248  41 82 00 18 */	beq .L_80049180
/* 8004916C 0004624C  80 04 00 04 */	lwz r0, 0x4(r4)
/* 80049170 00046250  7C 00 18 40 */	cmplw r0, r3
/* 80049174 00046254  40 82 00 0C */	bne .L_80049180
/* 80049178 00046258  38 60 00 01 */	li r3, 0x1
/* 8004917C 0004625C  4E 80 00 20 */	blr
.L_80049180:
/* 80049180 00046260  80 04 00 78 */	lwz r0, 0x78(r4)
/* 80049184 00046264  38 84 00 64 */	addi r4, r4, 0x64
/* 80049188 00046268  54 00 07 FF */	clrlwi. r0, r0, 31
/* 8004918C 0004626C  41 82 00 18 */	beq .L_800491A4
/* 80049190 00046270  80 04 00 04 */	lwz r0, 0x4(r4)
/* 80049194 00046274  7C 00 18 40 */	cmplw r0, r3
/* 80049198 00046278  40 82 00 0C */	bne .L_800491A4
/* 8004919C 0004627C  38 60 00 01 */	li r3, 0x1
/* 800491A0 00046280  4E 80 00 20 */	blr
.L_800491A4:
/* 800491A4 00046284  80 04 00 78 */	lwz r0, 0x78(r4)
/* 800491A8 00046288  38 84 00 64 */	addi r4, r4, 0x64
/* 800491AC 0004628C  54 00 07 FF */	clrlwi. r0, r0, 31
/* 800491B0 00046290  41 82 00 18 */	beq .L_800491C8
/* 800491B4 00046294  80 04 00 04 */	lwz r0, 0x4(r4)
/* 800491B8 00046298  7C 00 18 40 */	cmplw r0, r3
/* 800491BC 0004629C  40 82 00 0C */	bne .L_800491C8
/* 800491C0 000462A0  38 60 00 01 */	li r3, 0x1
/* 800491C4 000462A4  4E 80 00 20 */	blr
.L_800491C8:
/* 800491C8 000462A8  80 04 00 78 */	lwz r0, 0x78(r4)
/* 800491CC 000462AC  38 84 00 64 */	addi r4, r4, 0x64
/* 800491D0 000462B0  54 00 07 FF */	clrlwi. r0, r0, 31
/* 800491D4 000462B4  41 82 00 18 */	beq .L_800491EC
/* 800491D8 000462B8  80 04 00 04 */	lwz r0, 0x4(r4)
/* 800491DC 000462BC  7C 00 18 40 */	cmplw r0, r3
/* 800491E0 000462C0  40 82 00 0C */	bne .L_800491EC
/* 800491E4 000462C4  38 60 00 01 */	li r3, 0x1
/* 800491E8 000462C8  4E 80 00 20 */	blr
.L_800491EC:
/* 800491EC 000462CC  38 A5 00 03 */	addi r5, r5, 0x3
/* 800491F0 000462D0  38 84 00 64 */	addi r4, r4, 0x64
/* 800491F4 000462D4  42 00 FF 6C */	bdnz .L_80049160
/* 800491F8 000462D8  38 60 00 00 */	li r3, 0x0
/* 800491FC 000462DC  4E 80 00 20 */	blr
.endfn xSndIDIsPlaying__FUi

# xSndStop(unsigned int)
.fn xSndStop__FUi, global
/* 80049200 000462E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80049204 000462E4  7C 08 02 A6 */	mflr r0
/* 80049208 000462E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004920C 000462EC  48 08 7C F1 */	bl iSndStop__FUi
/* 80049210 000462F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80049214 000462F4  7C 08 03 A6 */	mtlr r0
/* 80049218 000462F8  38 21 00 10 */	addi r1, r1, 0x10
/* 8004921C 000462FC  4E 80 00 20 */	blr
.endfn xSndStop__FUi

# xSndParentDied(unsigned int)
.fn xSndParentDied__FUi, global
/* 80049220 00046300  3C 80 80 3C */	lis r4, gSnd@ha
/* 80049224 00046304  38 00 00 08 */	li r0, 0x8
/* 80049228 00046308  38 84 D5 B4 */	addi r4, r4, gSnd@l
/* 8004922C 0004630C  38 A0 00 00 */	li r5, 0x0
/* 80049230 00046310  38 84 00 1C */	addi r4, r4, 0x1c
/* 80049234 00046314  7C 09 03 A6 */	mtctr r0
.L_80049238:
/* 80049238 00046318  80 04 00 08 */	lwz r0, 0x8(r4)
/* 8004923C 0004631C  7C 00 18 40 */	cmplw r0, r3
/* 80049240 00046320  40 82 00 10 */	bne .L_80049250
/* 80049244 00046324  80 04 00 14 */	lwz r0, 0x14(r4)
/* 80049248 00046328  54 00 07 34 */	rlwinm r0, r0, 0, 28, 26
/* 8004924C 0004632C  90 04 00 14 */	stw r0, 0x14(r4)
.L_80049250:
/* 80049250 00046330  80 04 00 6C */	lwz r0, 0x6c(r4)
/* 80049254 00046334  38 84 00 64 */	addi r4, r4, 0x64
/* 80049258 00046338  7C 00 18 40 */	cmplw r0, r3
/* 8004925C 0004633C  40 82 00 10 */	bne .L_8004926C
/* 80049260 00046340  80 04 00 14 */	lwz r0, 0x14(r4)
/* 80049264 00046344  54 00 07 34 */	rlwinm r0, r0, 0, 28, 26
/* 80049268 00046348  90 04 00 14 */	stw r0, 0x14(r4)
.L_8004926C:
/* 8004926C 0004634C  80 04 00 6C */	lwz r0, 0x6c(r4)
/* 80049270 00046350  38 84 00 64 */	addi r4, r4, 0x64
/* 80049274 00046354  7C 00 18 40 */	cmplw r0, r3
/* 80049278 00046358  40 82 00 10 */	bne .L_80049288
/* 8004927C 0004635C  80 04 00 14 */	lwz r0, 0x14(r4)
/* 80049280 00046360  54 00 07 34 */	rlwinm r0, r0, 0, 28, 26
/* 80049284 00046364  90 04 00 14 */	stw r0, 0x14(r4)
.L_80049288:
/* 80049288 00046368  80 04 00 6C */	lwz r0, 0x6c(r4)
/* 8004928C 0004636C  38 84 00 64 */	addi r4, r4, 0x64
/* 80049290 00046370  7C 00 18 40 */	cmplw r0, r3
/* 80049294 00046374  40 82 00 10 */	bne .L_800492A4
/* 80049298 00046378  80 04 00 14 */	lwz r0, 0x14(r4)
/* 8004929C 0004637C  54 00 07 34 */	rlwinm r0, r0, 0, 28, 26
/* 800492A0 00046380  90 04 00 14 */	stw r0, 0x14(r4)
.L_800492A4:
/* 800492A4 00046384  80 04 00 6C */	lwz r0, 0x6c(r4)
/* 800492A8 00046388  38 84 00 64 */	addi r4, r4, 0x64
/* 800492AC 0004638C  7C 00 18 40 */	cmplw r0, r3
/* 800492B0 00046390  40 82 00 10 */	bne .L_800492C0
/* 800492B4 00046394  80 04 00 14 */	lwz r0, 0x14(r4)
/* 800492B8 00046398  54 00 07 34 */	rlwinm r0, r0, 0, 28, 26
/* 800492BC 0004639C  90 04 00 14 */	stw r0, 0x14(r4)
.L_800492C0:
/* 800492C0 000463A0  80 04 00 6C */	lwz r0, 0x6c(r4)
/* 800492C4 000463A4  38 84 00 64 */	addi r4, r4, 0x64
/* 800492C8 000463A8  7C 00 18 40 */	cmplw r0, r3
/* 800492CC 000463AC  40 82 00 10 */	bne .L_800492DC
/* 800492D0 000463B0  80 04 00 14 */	lwz r0, 0x14(r4)
/* 800492D4 000463B4  54 00 07 34 */	rlwinm r0, r0, 0, 28, 26
/* 800492D8 000463B8  90 04 00 14 */	stw r0, 0x14(r4)
.L_800492DC:
/* 800492DC 000463BC  80 04 00 6C */	lwz r0, 0x6c(r4)
/* 800492E0 000463C0  38 84 00 64 */	addi r4, r4, 0x64
/* 800492E4 000463C4  7C 00 18 40 */	cmplw r0, r3
/* 800492E8 000463C8  40 82 00 10 */	bne .L_800492F8
/* 800492EC 000463CC  80 04 00 14 */	lwz r0, 0x14(r4)
/* 800492F0 000463D0  54 00 07 34 */	rlwinm r0, r0, 0, 28, 26
/* 800492F4 000463D4  90 04 00 14 */	stw r0, 0x14(r4)
.L_800492F8:
/* 800492F8 000463D8  80 04 00 6C */	lwz r0, 0x6c(r4)
/* 800492FC 000463DC  38 84 00 64 */	addi r4, r4, 0x64
/* 80049300 000463E0  7C 00 18 40 */	cmplw r0, r3
/* 80049304 000463E4  40 82 00 10 */	bne .L_80049314
/* 80049308 000463E8  80 04 00 14 */	lwz r0, 0x14(r4)
/* 8004930C 000463EC  54 00 07 34 */	rlwinm r0, r0, 0, 28, 26
/* 80049310 000463F0  90 04 00 14 */	stw r0, 0x14(r4)
.L_80049314:
/* 80049314 000463F4  38 A5 00 07 */	addi r5, r5, 0x7
/* 80049318 000463F8  38 84 00 64 */	addi r4, r4, 0x64
/* 8004931C 000463FC  42 00 FF 1C */	bdnz .L_80049238
/* 80049320 00046400  4E 80 00 20 */	blr
.endfn xSndParentDied__FUi

# xSndStopChildren(unsigned int)
.fn xSndStopChildren__FUi, global
/* 80049324 00046404  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80049328 00046408  7C 08 02 A6 */	mflr r0
/* 8004932C 0004640C  3C 80 80 3C */	lis r4, gSnd@ha
/* 80049330 00046410  90 01 00 24 */	stw r0, 0x24(r1)
/* 80049334 00046414  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80049338 00046418  3B E0 00 00 */	li r31, 0x0
/* 8004933C 0004641C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80049340 00046420  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80049344 00046424  7C 7D 1B 78 */	mr r29, r3
/* 80049348 00046428  38 64 D5 B4 */	addi r3, r4, gSnd@l
/* 8004934C 0004642C  3B C3 00 1C */	addi r30, r3, 0x1c
.L_80049350:
/* 80049350 00046430  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 80049354 00046434  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80049358 00046438  41 82 00 24 */	beq .L_8004937C
/* 8004935C 0004643C  80 1E 00 08 */	lwz r0, 0x8(r30)
/* 80049360 00046440  7C 00 E8 40 */	cmplw r0, r29
/* 80049364 00046444  40 82 00 18 */	bne .L_8004937C
/* 80049368 00046448  80 7E 00 04 */	lwz r3, 0x4(r30)
/* 8004936C 0004644C  48 08 7B 91 */	bl iSndStop__FUi
/* 80049370 00046450  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 80049374 00046454  54 00 07 34 */	rlwinm r0, r0, 0, 28, 26
/* 80049378 00046458  90 1E 00 14 */	stw r0, 0x14(r30)
.L_8004937C:
/* 8004937C 0004645C  3B FF 00 01 */	addi r31, r31, 0x1
/* 80049380 00046460  3B DE 00 64 */	addi r30, r30, 0x64
/* 80049384 00046464  28 1F 00 40 */	cmplwi r31, 0x40
/* 80049388 00046468  41 80 FF C8 */	blt .L_80049350
/* 8004938C 0004646C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80049390 00046470  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80049394 00046474  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80049398 00046478  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8004939C 0004647C  7C 08 03 A6 */	mtlr r0
/* 800493A0 00046480  38 21 00 20 */	addi r1, r1, 0x20
/* 800493A4 00046484  4E 80 00 20 */	blr
.endfn xSndStopChildren__FUi

# xSndSetVol(unsigned int, float)
.fn xSndSetVol__FUif, global
/* 800493A8 00046488  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800493AC 0004648C  7C 08 02 A6 */	mflr r0
/* 800493B0 00046490  90 01 00 14 */	stw r0, 0x14(r1)
/* 800493B4 00046494  48 08 8E AD */	bl iSndSetVol__FUif
/* 800493B8 00046498  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800493BC 0004649C  7C 08 03 A6 */	mtlr r0
/* 800493C0 000464A0  38 21 00 10 */	addi r1, r1, 0x10
/* 800493C4 000464A4  4E 80 00 20 */	blr
.endfn xSndSetVol__FUif

# xSndSetPitch(unsigned int, float)
.fn xSndSetPitch__FUif, global
/* 800493C8 000464A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800493CC 000464AC  7C 08 02 A6 */	mflr r0
/* 800493D0 000464B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800493D4 000464B4  48 08 90 1D */	bl iSndSetPitch__FUif
/* 800493D8 000464B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800493DC 000464BC  7C 08 03 A6 */	mtlr r0
/* 800493E0 000464C0  38 21 00 10 */	addi r1, r1, 0x10
/* 800493E4 000464C4  4E 80 00 20 */	blr
.endfn xSndSetPitch__FUif

# xSndSetExternalCallback(void (*)(unsigned int))
.fn xSndSetExternalCallback__FPFUi_v, global
/* 800493E8 000464C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800493EC 000464CC  7C 08 02 A6 */	mflr r0
/* 800493F0 000464D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800493F4 000464D4  48 08 9A C5 */	bl iSndSetExternalCallback__FPFUi_v
/* 800493F8 000464D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800493FC 000464DC  7C 08 03 A6 */	mtlr r0
/* 80049400 000464E0  38 21 00 10 */	addi r1, r1, 0x10
/* 80049404 000464E4  4E 80 00 20 */	blr
.endfn xSndSetExternalCallback__FPFUi_v

# reset_faders()
.fn reset_faders__Fv, local
/* 80049408 000464E8  38 00 00 00 */	li r0, 0x0
/* 8004940C 000464EC  90 0D 8A FC */	stw r0, "faders_active__18@unnamed@xSnd_cpp@"@sda21(r13)
/* 80049410 000464F0  4E 80 00 20 */	blr
.endfn reset_faders__Fv

# update_faders(float)
.fn update_faders__Ff, local
/* 80049414 000464F4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80049418 000464F8  7C 08 02 A6 */	mflr r0
/* 8004941C 000464FC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80049420 00046500  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80049424 00046504  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 80049428 00046508  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8004942C 0004650C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80049430 00046510  80 0D 8A FC */	lwz r0, "faders_active__18@unnamed@xSnd_cpp@"@sda21(r13)
/* 80049434 00046514  3C 60 80 2E */	lis r3, "faders__18@unnamed@xSnd_cpp@"@ha
/* 80049438 00046518  38 63 AD A0 */	addi r3, r3, "faders__18@unnamed@xSnd_cpp@"@l
/* 8004943C 0004651C  FF E0 08 90 */	fmr f31, f1
/* 80049440 00046520  1C 00 00 18 */	mulli r0, r0, 0x18
/* 80049444 00046524  7C 7F 1B 78 */	mr r31, r3
/* 80049448 00046528  7F C3 02 14 */	add r30, r3, r0
/* 8004944C 0004652C  48 00 00 C4 */	b .L_80049510
.L_80049450:
/* 80049450 00046530  C0 1F 00 08 */	lfs f0, 0x8(r31)
/* 80049454 00046534  EC 00 F8 28 */	fsubs f0, f0, f31
/* 80049458 00046538  D0 1F 00 08 */	stfs f0, 0x8(r31)
/* 8004945C 0004653C  C0 3F 00 08 */	lfs f1, 0x8(r31)
/* 80049460 00046540  C0 02 87 00 */	lfs f0, "@598"@sda21(r2)
/* 80049464 00046544  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80049468 00046548  40 81 00 0C */	ble .L_80049474
/* 8004946C 0004654C  3B FF 00 18 */	addi r31, r31, 0x18
/* 80049470 00046550  48 00 00 A0 */	b .L_80049510
.L_80049474:
/* 80049474 00046554  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 80049478 00046558  EC 00 F8 2A */	fadds f0, f0, f31
/* 8004947C 0004655C  D0 1F 00 0C */	stfs f0, 0xc(r31)
/* 80049480 00046560  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 80049484 00046564  C0 1F 00 10 */	lfs f0, 0x10(r31)
/* 80049488 00046568  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8004948C 0004656C  4C 41 13 82 */	cror eq, gt, eq
/* 80049490 00046570  40 82 00 50 */	bne .L_800494E0
/* 80049494 00046574  88 1F 00 00 */	lbz r0, 0x0(r31)
/* 80049498 00046578  28 00 00 00 */	cmplwi r0, 0x0
/* 8004949C 0004657C  41 82 00 14 */	beq .L_800494B0
/* 800494A0 00046580  80 7F 00 04 */	lwz r3, 0x4(r31)
/* 800494A4 00046584  C0 3F 00 14 */	lfs f1, 0x14(r31)
/* 800494A8 00046588  4B FF FF 01 */	bl xSndSetVol__FUif
/* 800494AC 0004658C  48 00 00 0C */	b .L_800494B8
.L_800494B0:
/* 800494B0 00046590  80 7F 00 04 */	lwz r3, 0x4(r31)
/* 800494B4 00046594  4B FF FD 4D */	bl xSndStop__FUi
.L_800494B8:
/* 800494B8 00046598  80 6D 8A FC */	lwz r3, "faders_active__18@unnamed@xSnd_cpp@"@sda21(r13)
/* 800494BC 0004659C  3B DE FF E8 */	addi r30, r30, -0x18
/* 800494C0 000465A0  7C 1F F0 40 */	cmplw r31, r30
/* 800494C4 000465A4  38 03 FF FF */	addi r0, r3, -0x1
/* 800494C8 000465A8  90 0D 8A FC */	stw r0, "faders_active__18@unnamed@xSnd_cpp@"@sda21(r13)
/* 800494CC 000465AC  41 82 00 4C */	beq .L_80049518
/* 800494D0 000465B0  7F E3 FB 78 */	mr r3, r31
/* 800494D4 000465B4  7F C4 F3 78 */	mr r4, r30
/* 800494D8 000465B8  48 00 00 61 */	bl "__as__Q218@unnamed@xSnd_cpp@9fade_dataFRCQ218@unnamed@xSnd_cpp@9fade_data"
/* 800494DC 000465BC  48 00 00 34 */	b .L_80049510
.L_800494E0:
/* 800494E0 000465C0  EC 21 00 24 */	fdivs f1, f1, f0
/* 800494E4 000465C4  88 1F 00 00 */	lbz r0, 0x0(r31)
/* 800494E8 000465C8  28 00 00 00 */	cmplwi r0, 0x0
/* 800494EC 000465CC  40 82 00 0C */	bne .L_800494F8
/* 800494F0 000465D0  C0 02 86 F8 */	lfs f0, "@585"@sda21(r2)
/* 800494F4 000465D4  EC 20 08 28 */	fsubs f1, f0, f1
.L_800494F8:
/* 800494F8 000465D8  C0 1F 00 14 */	lfs f0, 0x14(r31)
/* 800494FC 000465DC  80 7F 00 04 */	lwz r3, 0x4(r31)
/* 80049500 000465E0  EC 21 00 32 */	fmuls f1, f1, f0
/* 80049504 000465E4  EC 21 00 32 */	fmuls f1, f1, f0
/* 80049508 000465E8  4B FF FE A1 */	bl xSndSetVol__FUif
/* 8004950C 000465EC  3B FF 00 18 */	addi r31, r31, 0x18
.L_80049510:
/* 80049510 000465F0  7C 1F F0 40 */	cmplw r31, r30
/* 80049514 000465F4  40 82 FF 3C */	bne .L_80049450
.L_80049518:
/* 80049518 000465F8  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8004951C 000465FC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80049520 00046600  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80049524 00046604  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80049528 00046608  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8004952C 0004660C  7C 08 03 A6 */	mtlr r0
/* 80049530 00046610  38 21 00 20 */	addi r1, r1, 0x20
/* 80049534 00046614  4E 80 00 20 */	blr
.endfn update_faders__Ff

# @unnamed@xSnd_cpp@::fade_data::operator=(const @unnamed@xSnd_cpp@::fade_data&)
.fn "__as__Q218@unnamed@xSnd_cpp@9fade_dataFRCQ218@unnamed@xSnd_cpp@9fade_data", local
/* 80049538 00046618  88 A4 00 00 */	lbz r5, 0x0(r4)
/* 8004953C 0004661C  80 04 00 04 */	lwz r0, 0x4(r4)
/* 80049540 00046620  98 A3 00 00 */	stb r5, 0x0(r3)
/* 80049544 00046624  C0 24 00 08 */	lfs f1, 0x8(r4)
/* 80049548 00046628  90 03 00 04 */	stw r0, 0x4(r3)
/* 8004954C 0004662C  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 80049550 00046630  D0 23 00 08 */	stfs f1, 0x8(r3)
/* 80049554 00046634  C0 24 00 10 */	lfs f1, 0x10(r4)
/* 80049558 00046638  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 8004955C 0004663C  C0 04 00 14 */	lfs f0, 0x14(r4)
/* 80049560 00046640  D0 23 00 10 */	stfs f1, 0x10(r3)
/* 80049564 00046644  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 80049568 00046648  4E 80 00 20 */	blr
.endfn "__as__Q218@unnamed@xSnd_cpp@9fade_dataFRCQ218@unnamed@xSnd_cpp@9fade_data"

# xSndPlay3DFade(unsigned int, float, float, unsigned int, unsigned int, const xVec3*, float, float, sound_category, float, float)
.fn xSndPlay3DFade__FUiffUiUiPC5xVec3ff14sound_categoryff, global
/* 8004956C 0004664C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80049570 00046650  7C 08 02 A6 */	mflr r0
/* 80049574 00046654  90 01 00 44 */	stw r0, 0x44(r1)
/* 80049578 00046658  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8004957C 0004665C  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 80049580 00046660  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 80049584 00046664  F3 C1 00 28 */	psq_st f30, 0x28(r1), 0, qr0
/* 80049588 00046668  DB A1 00 10 */	stfd f29, 0x10(r1)
/* 8004958C 0004666C  F3 A1 00 18 */	psq_st f29, 0x18(r1), 0, qr0
/* 80049590 00046670  80 0D 8A FC */	lwz r0, "faders_active__18@unnamed@xSnd_cpp@"@sda21(r13)
/* 80049594 00046674  FF A0 08 90 */	fmr f29, f1
/* 80049598 00046678  FF C0 28 90 */	fmr f30, f5
/* 8004959C 0004667C  2C 00 00 80 */	cmpwi r0, 0x80
/* 800495A0 00046680  FF E0 30 90 */	fmr f31, f6
/* 800495A4 00046684  40 80 00 14 */	bge .L_800495B8
/* 800495A8 00046688  C0 22 87 00 */	lfs f1, "@598"@sda21(r2)
/* 800495AC 0004668C  FC 1F 08 40 */	fcmpo cr0, f31, f1
/* 800495B0 00046690  4C 40 13 82 */	cror eq, lt, eq
/* 800495B4 00046694  40 82 00 14 */	bne .L_800495C8
.L_800495B8:
/* 800495B8 00046698  FC 20 E8 90 */	fmr f1, f29
/* 800495BC 0004669C  FC A0 F0 90 */	fmr f5, f30
/* 800495C0 000466A0  4B FF F4 D5 */	bl xSndPlay3D__FUiffUiUiPC5xVec3ff14sound_categoryf
/* 800495C4 000466A4  48 00 00 58 */	b .L_8004961C
.L_800495C8:
/* 800495C8 000466A8  4B FF F4 CD */	bl xSndPlay3D__FUiffUiUiPC5xVec3ff14sound_categoryf
/* 800495CC 000466AC  28 03 00 00 */	cmplwi r3, 0x0
/* 800495D0 000466B0  40 82 00 0C */	bne .L_800495DC
/* 800495D4 000466B4  38 60 00 00 */	li r3, 0x0
/* 800495D8 000466B8  48 00 00 44 */	b .L_8004961C
.L_800495DC:
/* 800495DC 000466BC  80 AD 8A FC */	lwz r5, "faders_active__18@unnamed@xSnd_cpp@"@sda21(r13)
/* 800495E0 000466C0  3C 80 80 2E */	lis r4, "faders__18@unnamed@xSnd_cpp@"@ha
/* 800495E4 000466C4  38 84 AD A0 */	addi r4, r4, "faders__18@unnamed@xSnd_cpp@"@l
/* 800495E8 000466C8  38 00 00 01 */	li r0, 0x1
/* 800495EC 000466CC  1C A5 00 18 */	mulli r5, r5, 0x18
/* 800495F0 000466D0  7C 84 2A 14 */	add r4, r4, r5
/* 800495F4 000466D4  98 04 00 00 */	stb r0, 0x0(r4)
/* 800495F8 000466D8  90 64 00 04 */	stw r3, 0x4(r4)
/* 800495FC 000466DC  D3 C4 00 08 */	stfs f30, 0x8(r4)
/* 80049600 000466E0  C0 02 87 00 */	lfs f0, "@598"@sda21(r2)
/* 80049604 000466E4  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 80049608 000466E8  D3 E4 00 10 */	stfs f31, 0x10(r4)
/* 8004960C 000466EC  D3 A4 00 14 */	stfs f29, 0x14(r4)
/* 80049610 000466F0  80 8D 8A FC */	lwz r4, "faders_active__18@unnamed@xSnd_cpp@"@sda21(r13)
/* 80049614 000466F4  38 04 00 01 */	addi r0, r4, 0x1
/* 80049618 000466F8  90 0D 8A FC */	stw r0, "faders_active__18@unnamed@xSnd_cpp@"@sda21(r13)
.L_8004961C:
/* 8004961C 000466FC  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 80049620 00046700  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80049624 00046704  E3 C1 00 28 */	psq_l f30, 0x28(r1), 0, qr0
/* 80049628 00046708  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8004962C 0004670C  E3 A1 00 18 */	psq_l f29, 0x18(r1), 0, qr0
/* 80049630 00046710  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80049634 00046714  CB A1 00 10 */	lfd f29, 0x10(r1)
/* 80049638 00046718  7C 08 03 A6 */	mtlr r0
/* 8004963C 0004671C  38 21 00 40 */	addi r1, r1, 0x40
/* 80049640 00046720  4E 80 00 20 */	blr
.endfn xSndPlay3DFade__FUiffUiUiPC5xVec3ff14sound_categoryff

# xSndStopFade(unsigned int, float)
.fn xSndStopFade__FUif, global
/* 80049644 00046724  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80049648 00046728  7C 08 02 A6 */	mflr r0
/* 8004964C 0004672C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80049650 00046730  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80049654 00046734  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 80049658 00046738  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8004965C 0004673C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80049660 00046740  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80049664 00046744  7C 7F 1B 79 */	mr. r31, r3
/* 80049668 00046748  FF E0 08 90 */	fmr f31, f1
/* 8004966C 0004674C  41 82 01 14 */	beq .L_80049780
/* 80049670 00046750  80 0D 8A FC */	lwz r0, "faders_active__18@unnamed@xSnd_cpp@"@sda21(r13)
/* 80049674 00046754  2C 00 00 80 */	cmpwi r0, 0x80
/* 80049678 00046758  40 80 00 14 */	bge .L_8004968C
/* 8004967C 0004675C  C0 02 87 00 */	lfs f0, "@598"@sda21(r2)
/* 80049680 00046760  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80049684 00046764  4C 40 13 82 */	cror eq, lt, eq
/* 80049688 00046768  40 82 00 10 */	bne .L_80049698
.L_8004968C:
/* 8004968C 0004676C  7F E3 FB 78 */	mr r3, r31
/* 80049690 00046770  4B FF FB 71 */	bl xSndStop__FUi
/* 80049694 00046774  48 00 00 EC */	b .L_80049780
.L_80049698:
/* 80049698 00046778  48 00 03 2D */	bl xSndGetVol__FUi
/* 8004969C 0004677C  C0 02 87 00 */	lfs f0, "@598"@sda21(r2)
/* 800496A0 00046780  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800496A4 00046784  4C 40 13 82 */	cror eq, lt, eq
/* 800496A8 00046788  40 82 00 6C */	bne .L_80049714
/* 800496AC 0004678C  7F E3 FB 78 */	mr r3, r31
/* 800496B0 00046790  4B FF FB 51 */	bl xSndStop__FUi
/* 800496B4 00046794  80 0D 8A FC */	lwz r0, "faders_active__18@unnamed@xSnd_cpp@"@sda21(r13)
/* 800496B8 00046798  3C 60 80 2E */	lis r3, "faders__18@unnamed@xSnd_cpp@"@ha
/* 800496BC 0004679C  38 63 AD A0 */	addi r3, r3, "faders__18@unnamed@xSnd_cpp@"@l
/* 800496C0 000467A0  1C 00 00 18 */	mulli r0, r0, 0x18
/* 800496C4 000467A4  7C 7E 1B 78 */	mr r30, r3
/* 800496C8 000467A8  7F A3 02 14 */	add r29, r3, r0
/* 800496CC 000467AC  48 00 00 3C */	b .L_80049708
.L_800496D0:
/* 800496D0 000467B0  80 1E 00 04 */	lwz r0, 0x4(r30)
/* 800496D4 000467B4  7C 00 F8 40 */	cmplw r0, r31
/* 800496D8 000467B8  40 82 00 2C */	bne .L_80049704
/* 800496DC 000467BC  80 6D 8A FC */	lwz r3, "faders_active__18@unnamed@xSnd_cpp@"@sda21(r13)
/* 800496E0 000467C0  3B BD FF E8 */	addi r29, r29, -0x18
/* 800496E4 000467C4  7C 1E E8 40 */	cmplw r30, r29
/* 800496E8 000467C8  38 03 FF FF */	addi r0, r3, -0x1
/* 800496EC 000467CC  90 0D 8A FC */	stw r0, "faders_active__18@unnamed@xSnd_cpp@"@sda21(r13)
/* 800496F0 000467D0  41 82 00 90 */	beq .L_80049780
/* 800496F4 000467D4  7F C3 F3 78 */	mr r3, r30
/* 800496F8 000467D8  7F A4 EB 78 */	mr r4, r29
/* 800496FC 000467DC  4B FF FE 3D */	bl "__as__Q218@unnamed@xSnd_cpp@9fade_dataFRCQ218@unnamed@xSnd_cpp@9fade_data"
/* 80049700 000467E0  48 00 00 08 */	b .L_80049708
.L_80049704:
/* 80049704 000467E4  3B DE 00 18 */	addi r30, r30, 0x18
.L_80049708:
/* 80049708 000467E8  7C 1E E8 40 */	cmplw r30, r29
/* 8004970C 000467EC  40 82 FF C4 */	bne .L_800496D0
/* 80049710 000467F0  48 00 00 70 */	b .L_80049780
.L_80049714:
/* 80049714 000467F4  80 0D 8A FC */	lwz r0, "faders_active__18@unnamed@xSnd_cpp@"@sda21(r13)
/* 80049718 000467F8  3C 60 80 2E */	lis r3, "faders__18@unnamed@xSnd_cpp@"@ha
/* 8004971C 000467FC  38 63 AD A0 */	addi r3, r3, "faders__18@unnamed@xSnd_cpp@"@l
/* 80049720 00046800  1C 00 00 18 */	mulli r0, r0, 0x18
/* 80049724 00046804  7C 64 1B 78 */	mr r4, r3
/* 80049728 00046808  7C 63 02 14 */	add r3, r3, r0
/* 8004972C 0004680C  48 00 00 14 */	b .L_80049740
.L_80049730:
/* 80049730 00046810  80 04 00 04 */	lwz r0, 0x4(r4)
/* 80049734 00046814  7C 00 F8 40 */	cmplw r0, r31
/* 80049738 00046818  41 82 00 10 */	beq .L_80049748
/* 8004973C 0004681C  38 84 00 18 */	addi r4, r4, 0x18
.L_80049740:
/* 80049740 00046820  7C 04 18 40 */	cmplw r4, r3
/* 80049744 00046824  40 82 FF EC */	bne .L_80049730
.L_80049748:
/* 80049748 00046828  7C 04 18 40 */	cmplw r4, r3
/* 8004974C 0004682C  40 82 00 10 */	bne .L_8004975C
/* 80049750 00046830  80 6D 8A FC */	lwz r3, "faders_active__18@unnamed@xSnd_cpp@"@sda21(r13)
/* 80049754 00046834  38 03 00 01 */	addi r0, r3, 0x1
/* 80049758 00046838  90 0D 8A FC */	stw r0, "faders_active__18@unnamed@xSnd_cpp@"@sda21(r13)
.L_8004975C:
/* 8004975C 0004683C  38 00 00 00 */	li r0, 0x0
/* 80049760 00046840  98 04 00 00 */	stb r0, 0x0(r4)
/* 80049764 00046844  93 E4 00 04 */	stw r31, 0x4(r4)
/* 80049768 00046848  C0 02 87 00 */	lfs f0, "@598"@sda21(r2)
/* 8004976C 0004684C  D0 04 00 08 */	stfs f0, 0x8(r4)
/* 80049770 00046850  C0 02 87 00 */	lfs f0, "@598"@sda21(r2)
/* 80049774 00046854  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 80049778 00046858  D3 E4 00 10 */	stfs f31, 0x10(r4)
/* 8004977C 0004685C  D0 24 00 14 */	stfs f1, 0x14(r4)
.L_80049780:
/* 80049780 00046860  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80049784 00046864  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80049788 00046868  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8004978C 0004686C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80049790 00046870  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80049794 00046874  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80049798 00046878  7C 08 03 A6 */	mtlr r0
/* 8004979C 0004687C  38 21 00 30 */	addi r1, r1, 0x30
/* 800497A0 00046880  4E 80 00 20 */	blr
.endfn xSndStopFade__FUif

# xSndStreamLock(unsigned int, sound_category, bool)
.fn xSndStreamLock__FUi14sound_categoryb, global
/* 800497A4 00046884  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800497A8 00046888  7C 08 02 A6 */	mflr r0
/* 800497AC 0004688C  3C C0 80 3C */	lis r6, gSnd@ha
/* 800497B0 00046890  90 01 00 14 */	stw r0, 0x14(r1)
/* 800497B4 00046894  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800497B8 00046898  7C 7F 1B 78 */	mr r31, r3
/* 800497BC 0004689C  38 66 D5 B4 */	addi r3, r6, gSnd@l
/* 800497C0 000468A0  38 63 00 1C */	addi r3, r3, 0x1c
/* 800497C4 000468A4  93 C1 00 08 */	stw r30, 0x8(r1)
/* 800497C8 000468A8  7C 67 1B 78 */	mr r7, r3
/* 800497CC 000468AC  38 C3 02 58 */	addi r6, r3, 0x258
/* 800497D0 000468B0  48 00 00 1C */	b .L_800497EC
.L_800497D4:
/* 800497D4 000468B4  80 07 00 50 */	lwz r0, 0x50(r7)
/* 800497D8 000468B8  7C 00 F8 40 */	cmplw r0, r31
/* 800497DC 000468BC  40 82 00 0C */	bne .L_800497E8
/* 800497E0 000468C0  38 60 00 01 */	li r3, 0x1
/* 800497E4 000468C4  48 00 01 14 */	b .L_800498F8
.L_800497E8:
/* 800497E8 000468C8  38 E7 00 64 */	addi r7, r7, 0x64
.L_800497EC:
/* 800497EC 000468CC  7C 07 30 40 */	cmplw r7, r6
/* 800497F0 000468D0  40 82 FF E4 */	bne .L_800497D4
/* 800497F4 000468D4  7C 67 1B 78 */	mr r7, r3
/* 800497F8 000468D8  48 00 00 2C */	b .L_80049824
.L_800497FC:
/* 800497FC 000468DC  80 07 00 50 */	lwz r0, 0x50(r7)
/* 80049800 000468E0  28 00 00 00 */	cmplwi r0, 0x0
/* 80049804 000468E4  40 82 00 1C */	bne .L_80049820
/* 80049808 000468E8  80 07 00 14 */	lwz r0, 0x14(r7)
/* 8004980C 000468EC  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80049810 000468F0  40 82 00 10 */	bne .L_80049820
/* 80049814 000468F4  93 E7 00 50 */	stw r31, 0x50(r7)
/* 80049818 000468F8  38 60 00 01 */	li r3, 0x1
/* 8004981C 000468FC  48 00 00 DC */	b .L_800498F8
.L_80049820:
/* 80049820 00046900  38 E7 00 64 */	addi r7, r7, 0x64
.L_80049824:
/* 80049824 00046904  7C 07 30 40 */	cmplw r7, r6
/* 80049828 00046908  40 82 FF D4 */	bne .L_800497FC
/* 8004982C 0004690C  7C 67 1B 78 */	mr r7, r3
/* 80049830 00046910  48 00 00 2C */	b .L_8004985C
.L_80049834:
/* 80049834 00046914  80 07 00 50 */	lwz r0, 0x50(r7)
/* 80049838 00046918  28 00 00 00 */	cmplwi r0, 0x0
/* 8004983C 0004691C  40 82 00 1C */	bne .L_80049858
/* 80049840 00046920  80 07 00 14 */	lwz r0, 0x14(r7)
/* 80049844 00046924  54 00 06 73 */	rlwinm. r0, r0, 0, 25, 25
/* 80049848 00046928  41 82 00 10 */	beq .L_80049858
/* 8004984C 0004692C  93 E7 00 50 */	stw r31, 0x50(r7)
/* 80049850 00046930  38 60 00 01 */	li r3, 0x1
/* 80049854 00046934  48 00 00 A4 */	b .L_800498F8
.L_80049858:
/* 80049858 00046938  38 E7 00 64 */	addi r7, r7, 0x64
.L_8004985C:
/* 8004985C 0004693C  7C 07 30 40 */	cmplw r7, r6
/* 80049860 00046940  40 82 FF D4 */	bne .L_80049834
/* 80049864 00046944  2C 04 FF FF */	cmpwi r4, -0x1
/* 80049868 00046948  41 82 00 44 */	beq .L_800498AC
/* 8004986C 0004694C  7C 7E 1B 78 */	mr r30, r3
/* 80049870 00046950  48 00 00 34 */	b .L_800498A4
.L_80049874:
/* 80049874 00046954  80 1E 00 50 */	lwz r0, 0x50(r30)
/* 80049878 00046958  28 00 00 00 */	cmplwi r0, 0x0
/* 8004987C 0004695C  40 82 00 24 */	bne .L_800498A0
/* 80049880 00046960  80 1E 00 2C */	lwz r0, 0x2c(r30)
/* 80049884 00046964  7C 00 20 00 */	cmpw r0, r4
/* 80049888 00046968  40 82 00 18 */	bne .L_800498A0
/* 8004988C 0004696C  80 7E 00 04 */	lwz r3, 0x4(r30)
/* 80049890 00046970  4B FF F9 71 */	bl xSndStop__FUi
/* 80049894 00046974  93 FE 00 50 */	stw r31, 0x50(r30)
/* 80049898 00046978  38 60 00 01 */	li r3, 0x1
/* 8004989C 0004697C  48 00 00 5C */	b .L_800498F8
.L_800498A0:
/* 800498A0 00046980  3B DE 00 64 */	addi r30, r30, 0x64
.L_800498A4:
/* 800498A4 00046984  7C 1E 30 40 */	cmplw r30, r6
/* 800498A8 00046988  40 82 FF CC */	bne .L_80049874
.L_800498AC:
/* 800498AC 0004698C  54 A0 06 3F */	clrlwi. r0, r5, 24
/* 800498B0 00046990  41 82 00 44 */	beq .L_800498F4
/* 800498B4 00046994  7C 7E 1B 78 */	mr r30, r3
/* 800498B8 00046998  48 00 00 34 */	b .L_800498EC
.L_800498BC:
/* 800498BC 0004699C  80 1E 00 50 */	lwz r0, 0x50(r30)
/* 800498C0 000469A0  28 00 00 00 */	cmplwi r0, 0x0
/* 800498C4 000469A4  40 82 00 24 */	bne .L_800498E8
/* 800498C8 000469A8  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 800498CC 000469AC  54 00 04 21 */	rlwinm. r0, r0, 0, 16, 16
/* 800498D0 000469B0  40 82 00 18 */	bne .L_800498E8
/* 800498D4 000469B4  80 7E 00 04 */	lwz r3, 0x4(r30)
/* 800498D8 000469B8  4B FF F9 29 */	bl xSndStop__FUi
/* 800498DC 000469BC  93 FE 00 50 */	stw r31, 0x50(r30)
/* 800498E0 000469C0  38 60 00 01 */	li r3, 0x1
/* 800498E4 000469C4  48 00 00 14 */	b .L_800498F8
.L_800498E8:
/* 800498E8 000469C8  3B DE 00 64 */	addi r30, r30, 0x64
.L_800498EC:
/* 800498EC 000469CC  7C 1E 30 40 */	cmplw r30, r6
/* 800498F0 000469D0  40 82 FF CC */	bne .L_800498BC
.L_800498F4:
/* 800498F4 000469D4  38 60 00 00 */	li r3, 0x0
.L_800498F8:
/* 800498F8 000469D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800498FC 000469DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80049900 000469E0  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80049904 000469E4  7C 08 03 A6 */	mtlr r0
/* 80049908 000469E8  38 21 00 10 */	addi r1, r1, 0x10
/* 8004990C 000469EC  4E 80 00 20 */	blr
.endfn xSndStreamLock__FUi14sound_categoryb

# xSndStreamReady(unsigned int)
.fn xSndStreamReady__FUi, global
/* 80049910 000469F0  3C 80 80 3C */	lis r4, gSnd@ha
/* 80049914 000469F4  38 84 D5 B4 */	addi r4, r4, gSnd@l
/* 80049918 000469F8  38 84 00 1C */	addi r4, r4, 0x1c
/* 8004991C 000469FC  7C 85 23 78 */	mr r5, r4
/* 80049920 00046A00  38 84 02 58 */	addi r4, r4, 0x258
/* 80049924 00046A04  48 00 00 28 */	b .L_8004994C
.L_80049928:
/* 80049928 00046A08  80 05 00 50 */	lwz r0, 0x50(r5)
/* 8004992C 00046A0C  7C 00 18 40 */	cmplw r0, r3
/* 80049930 00046A10  40 82 00 18 */	bne .L_80049948
/* 80049934 00046A14  80 05 00 14 */	lwz r0, 0x14(r5)
/* 80049938 00046A18  54 00 07 FE */	clrlwi r0, r0, 31
/* 8004993C 00046A1C  7C 00 00 34 */	cntlzw r0, r0
/* 80049940 00046A20  54 03 D9 7E */	srwi r3, r0, 5
/* 80049944 00046A24  4E 80 00 20 */	blr
.L_80049948:
/* 80049948 00046A28  38 A5 00 64 */	addi r5, r5, 0x64
.L_8004994C:
/* 8004994C 00046A2C  7C 05 20 40 */	cmplw r5, r4
/* 80049950 00046A30  40 82 FF D8 */	bne .L_80049928
/* 80049954 00046A34  38 60 00 00 */	li r3, 0x0
/* 80049958 00046A38  4E 80 00 20 */	blr
.endfn xSndStreamReady__FUi

# xSndStreamUnlock(unsigned int)
.fn xSndStreamUnlock__FUi, global
/* 8004995C 00046A3C  3C 80 80 3C */	lis r4, gSnd@ha
/* 80049960 00046A40  38 84 D5 B4 */	addi r4, r4, gSnd@l
/* 80049964 00046A44  38 84 00 1C */	addi r4, r4, 0x1c
/* 80049968 00046A48  7C 85 23 78 */	mr r5, r4
/* 8004996C 00046A4C  38 84 02 58 */	addi r4, r4, 0x258
/* 80049970 00046A50  48 00 00 20 */	b .L_80049990
.L_80049974:
/* 80049974 00046A54  80 05 00 50 */	lwz r0, 0x50(r5)
/* 80049978 00046A58  7C 00 18 40 */	cmplw r0, r3
/* 8004997C 00046A5C  40 82 00 10 */	bne .L_8004998C
/* 80049980 00046A60  38 00 00 00 */	li r0, 0x0
/* 80049984 00046A64  90 05 00 50 */	stw r0, 0x50(r5)
/* 80049988 00046A68  4E 80 00 20 */	blr
.L_8004998C:
/* 8004998C 00046A6C  38 A5 00 64 */	addi r5, r5, 0x64
.L_80049990:
/* 80049990 00046A70  7C 05 20 40 */	cmplw r5, r4
/* 80049994 00046A74  40 82 FF E0 */	bne .L_80049974
/* 80049998 00046A78  4E 80 00 20 */	blr
.endfn xSndStreamUnlock__FUi

# 0x8004999C - 0x800499E4
.section .text, "ax", unique, 1
.balign 4

# xSndCategoryGetsEffects(sound_category)
.fn xSndCategoryGetsEffects__F14sound_category, weak
/* 8004999C 00046A7C  20 03 00 01 */	subfic r0, r3, 0x1
/* 800499A0 00046A80  38 80 00 01 */	li r4, 0x1
/* 800499A4 00046A84  7C 83 1B 38 */	orc r3, r4, r3
/* 800499A8 00046A88  54 00 F8 7E */	srwi r0, r0, 1
/* 800499AC 00046A8C  7C 00 18 50 */	subf r0, r0, r3
/* 800499B0 00046A90  54 00 0F FF */	srwi. r0, r0, 31
/* 800499B4 00046A94  40 82 00 08 */	bne .L_800499BC
/* 800499B8 00046A98  38 80 00 00 */	li r4, 0x0
.L_800499BC:
/* 800499BC 00046A9C  7C 83 23 78 */	mr r3, r4
/* 800499C0 00046AA0  4E 80 00 20 */	blr
.endfn xSndCategoryGetsEffects__F14sound_category

# xSndGetVol(unsigned int)
.fn xSndGetVol__FUi, weak
/* 800499C4 00046AA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800499C8 00046AA8  7C 08 02 A6 */	mflr r0
/* 800499CC 00046AAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800499D0 00046AB0  48 08 96 75 */	bl iSndGetVol__FUi
/* 800499D4 00046AB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800499D8 00046AB8  7C 08 03 A6 */	mtlr r0
/* 800499DC 00046ABC  38 21 00 10 */	addi r1, r1, 0x10
/* 800499E0 00046AC0  4E 80 00 20 */	blr
.endfn xSndGetVol__FUi

# 0x80288CA0 - 0x80288FE0
.data
.balign 8

.obj sDelayedSnd, local
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
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj sDelayedSnd

# 0x802DADA0 - 0x802DB9A0
.section .bss, "wa", @nobits
.balign 8

# @unnamed@xSnd_cpp@::faders
.obj "faders__18@unnamed@xSnd_cpp@", local
	.skip 0xC00
.endobj "faders__18@unnamed@xSnd_cpp@"

# 0x803CB3F8 - 0x803CB400
.section .sbss, "wa", @nobits
.balign 8

.obj sDelayedPaused, local
	.skip 0x4
.endobj sDelayedPaused

# @unnamed@xSnd_cpp@::faders_active
.obj "faders_active__18@unnamed@xSnd_cpp@", local
	.skip 0x4
.endobj "faders_active__18@unnamed@xSnd_cpp@"

# 0x803CD078 - 0x803CD098
.section .sdata2, "a"
.balign 8

.obj "@585", local
	.4byte 0x3F800000
.endobj "@585"

.obj "@586", local
	.4byte 0x3F333333
.endobj "@586"

.obj "@598", local
	.4byte 0x00000000
.endobj "@598"

.obj "@599", local
	.4byte 0x497423F0
.endobj "@599"

.obj "@731", local
	.4byte 0x3F000000
.endobj "@731"

.obj "@1039", local
	.4byte 0x49742400
.endobj "@1039"

.obj "@1040", local
	.4byte 0x41800000
.endobj "@1040"

.obj "@1041", local
	.4byte 0x41C80000
.endobj "@1041"
