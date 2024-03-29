.include "macros.inc"
.file "zScript.cpp"

# 0x800B5228 - 0x800B55F0
.text
.balign 4

# zScriptInit(void*, void*)
.fn zScriptInit__FPvPv, global
/* 800B5228 000B2308  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800B522C 000B230C  7C 08 02 A6 */	mflr r0
/* 800B5230 000B2310  90 01 00 14 */	stw r0, 0x14(r1)
/* 800B5234 000B2314  48 00 00 15 */	bl zScriptInit__FP5xBaseP12xScriptAsset
/* 800B5238 000B2318  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800B523C 000B231C  7C 08 03 A6 */	mtlr r0
/* 800B5240 000B2320  38 21 00 10 */	addi r1, r1, 0x10
/* 800B5244 000B2324  4E 80 00 20 */	blr
.endfn zScriptInit__FPvPv

# zScriptInit(xBase*, xScriptAsset*)
.fn zScriptInit__FP5xBaseP12xScriptAsset, global
/* 800B5248 000B2328  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800B524C 000B232C  7C 08 02 A6 */	mflr r0
/* 800B5250 000B2330  90 01 00 14 */	stw r0, 0x14(r1)
/* 800B5254 000B2334  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800B5258 000B2338  7C 9F 23 78 */	mr r31, r4
/* 800B525C 000B233C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 800B5260 000B2340  7C 7E 1B 78 */	mr r30, r3
/* 800B5264 000B2344  4B F5 41 9D */	bl xBaseInit__FP5xBaseP10xBaseAsset
/* 800B5268 000B2348  3C 60 80 0B */	lis r3, zScriptEventCB__FP5xBaseP5xBaseUiPCfP5xBase@ha
/* 800B526C 000B234C  38 03 53 60 */	addi r0, r3, zScriptEventCB__FP5xBaseP5xBaseUiPCfP5xBase@l
/* 800B5270 000B2350  90 1E 00 0C */	stw r0, 0xc(r30)
/* 800B5274 000B2354  93 FE 00 10 */	stw r31, 0x10(r30)
/* 800B5278 000B2358  88 1E 00 05 */	lbz r0, 0x5(r30)
/* 800B527C 000B235C  28 00 00 00 */	cmplwi r0, 0x0
/* 800B5280 000B2360  41 82 00 28 */	beq .L_800B52A8
/* 800B5284 000B2364  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 800B5288 000B2368  38 03 00 10 */	addi r0, r3, 0x10
/* 800B528C 000B236C  90 1E 00 08 */	stw r0, 0x8(r30)
/* 800B5290 000B2370  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 800B5294 000B2374  80 7E 00 08 */	lwz r3, 0x8(r30)
/* 800B5298 000B2378  54 00 28 34 */	slwi r0, r0, 5
/* 800B529C 000B237C  7C 03 02 14 */	add r0, r3, r0
/* 800B52A0 000B2380  90 1E 00 08 */	stw r0, 0x8(r30)
/* 800B52A4 000B2384  48 00 00 0C */	b .L_800B52B0
.L_800B52A8:
/* 800B52A8 000B2388  38 00 00 00 */	li r0, 0x0
/* 800B52AC 000B238C  90 1E 00 08 */	stw r0, 0x8(r30)
.L_800B52B0:
/* 800B52B0 000B2390  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 800B52B4 000B2394  38 00 00 01 */	li r0, 0x1
/* 800B52B8 000B2398  C0 03 00 08 */	lfs f0, 0x8(r3)
/* 800B52BC 000B239C  D0 1E 00 18 */	stfs f0, 0x18(r30)
/* 800B52C0 000B23A0  98 1E 00 15 */	stb r0, 0x15(r30)
/* 800B52C4 000B23A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800B52C8 000B23A8  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 800B52CC 000B23AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800B52D0 000B23B0  7C 08 03 A6 */	mtlr r0
/* 800B52D4 000B23B4  38 21 00 10 */	addi r1, r1, 0x10
/* 800B52D8 000B23B8  4E 80 00 20 */	blr
.endfn zScriptInit__FP5xBaseP12xScriptAsset

# zScriptReset(_zScript*)
.fn zScriptReset__FP8_zScript, global
/* 800B52DC 000B23BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800B52E0 000B23C0  7C 08 02 A6 */	mflr r0
/* 800B52E4 000B23C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800B52E8 000B23C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800B52EC 000B23CC  7C 7F 1B 78 */	mr r31, r3
/* 800B52F0 000B23D0  80 83 00 10 */	lwz r4, 0x10(r3)
/* 800B52F4 000B23D4  4B F5 42 05 */	bl xBaseReset__FP5xBaseP10xBaseAsset
/* 800B52F8 000B23D8  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 800B52FC 000B23DC  38 00 00 01 */	li r0, 0x1
/* 800B5300 000B23E0  C0 03 00 08 */	lfs f0, 0x8(r3)
/* 800B5304 000B23E4  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 800B5308 000B23E8  98 1F 00 15 */	stb r0, 0x15(r31)
/* 800B530C 000B23EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800B5310 000B23F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800B5314 000B23F4  7C 08 03 A6 */	mtlr r0
/* 800B5318 000B23F8  38 21 00 10 */	addi r1, r1, 0x10
/* 800B531C 000B23FC  4E 80 00 20 */	blr
.endfn zScriptReset__FP8_zScript

# zScriptSave(_zScript*, xSerial*)
.fn zScriptSave__FP8_zScriptP7xSerial, global
/* 800B5320 000B2400  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800B5324 000B2404  7C 08 02 A6 */	mflr r0
/* 800B5328 000B2408  90 01 00 14 */	stw r0, 0x14(r1)
/* 800B532C 000B240C  4B F5 41 21 */	bl xBaseSave__FP5xBaseP7xSerial
/* 800B5330 000B2410  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800B5334 000B2414  7C 08 03 A6 */	mtlr r0
/* 800B5338 000B2418  38 21 00 10 */	addi r1, r1, 0x10
/* 800B533C 000B241C  4E 80 00 20 */	blr
.endfn zScriptSave__FP8_zScriptP7xSerial

# zScriptLoad(_zScript*, xSerial*)
.fn zScriptLoad__FP8_zScriptP7xSerial, global
/* 800B5340 000B2420  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800B5344 000B2424  7C 08 02 A6 */	mflr r0
/* 800B5348 000B2428  90 01 00 14 */	stw r0, 0x14(r1)
/* 800B534C 000B242C  4B F5 41 51 */	bl xBaseLoad__FP5xBaseP7xSerial
/* 800B5350 000B2430  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800B5354 000B2434  7C 08 03 A6 */	mtlr r0
/* 800B5358 000B2438  38 21 00 10 */	addi r1, r1, 0x10
/* 800B535C 000B243C  4E 80 00 20 */	blr
.endfn zScriptLoad__FP8_zScriptP7xSerial

# zScriptEventCB(xBase*, xBase*, unsigned int, const float*, xBase*)
.fn zScriptEventCB__FP5xBaseP5xBaseUiPCfP5xBase, global
/* 800B5360 000B2440  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800B5364 000B2444  7C 08 02 A6 */	mflr r0
/* 800B5368 000B2448  2C 05 00 14 */	cmpwi r5, 0x14
/* 800B536C 000B244C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800B5370 000B2450  41 82 00 64 */	beq .L_800B53D4
/* 800B5374 000B2454  40 80 00 1C */	bge .L_800B5390
/* 800B5378 000B2458  2C 05 00 12 */	cmpwi r5, 0x12
/* 800B537C 000B245C  41 82 00 2C */	beq .L_800B53A8
/* 800B5380 000B2460  40 80 00 34 */	bge .L_800B53B4
/* 800B5384 000B2464  2C 05 00 0A */	cmpwi r5, 0xa
/* 800B5388 000B2468  41 82 00 88 */	beq .L_800B5410
/* 800B538C 000B246C  48 00 00 8C */	b .L_800B5418
.L_800B5390:
/* 800B5390 000B2470  2C 05 01 25 */	cmpwi r5, 0x125
/* 800B5394 000B2474  41 82 00 64 */	beq .L_800B53F8
/* 800B5398 000B2478  40 80 00 80 */	bge .L_800B5418
/* 800B539C 000B247C  2C 05 01 24 */	cmpwi r5, 0x124
/* 800B53A0 000B2480  40 80 00 40 */	bge .L_800B53E0
/* 800B53A4 000B2484  48 00 00 74 */	b .L_800B5418
.L_800B53A8:
/* 800B53A8 000B2488  38 00 00 01 */	li r0, 0x1
/* 800B53AC 000B248C  98 04 00 14 */	stb r0, 0x14(r4)
/* 800B53B0 000B2490  48 00 00 68 */	b .L_800B5418
.L_800B53B4:
/* 800B53B4 000B2494  88 04 00 14 */	lbz r0, 0x14(r4)
/* 800B53B8 000B2498  28 00 00 01 */	cmplwi r0, 0x1
/* 800B53BC 000B249C  41 82 00 0C */	beq .L_800B53C8
/* 800B53C0 000B24A0  28 00 00 03 */	cmplwi r0, 0x3
/* 800B53C4 000B24A4  40 82 00 54 */	bne .L_800B5418
.L_800B53C8:
/* 800B53C8 000B24A8  38 00 00 00 */	li r0, 0x0
/* 800B53CC 000B24AC  98 04 00 14 */	stb r0, 0x14(r4)
/* 800B53D0 000B24B0  48 00 00 48 */	b .L_800B5418
.L_800B53D4:
/* 800B53D4 000B24B4  38 00 00 00 */	li r0, 0x0
/* 800B53D8 000B24B8  98 04 00 14 */	stb r0, 0x14(r4)
/* 800B53DC 000B24BC  48 00 00 3C */	b .L_800B5418
.L_800B53E0:
/* 800B53E0 000B24C0  38 00 00 00 */	li r0, 0x0
/* 800B53E4 000B24C4  98 04 00 14 */	stb r0, 0x14(r4)
/* 800B53E8 000B24C8  80 64 00 10 */	lwz r3, 0x10(r4)
/* 800B53EC 000B24CC  C0 03 00 08 */	lfs f0, 0x8(r3)
/* 800B53F0 000B24D0  D0 04 00 18 */	stfs f0, 0x18(r4)
/* 800B53F4 000B24D4  48 00 00 24 */	b .L_800B5418
.L_800B53F8:
/* 800B53F8 000B24D8  88 04 00 14 */	lbz r0, 0x14(r4)
/* 800B53FC 000B24DC  28 00 00 01 */	cmplwi r0, 0x1
/* 800B5400 000B24E0  40 82 00 18 */	bne .L_800B5418
/* 800B5404 000B24E4  38 00 00 03 */	li r0, 0x3
/* 800B5408 000B24E8  98 04 00 14 */	stb r0, 0x14(r4)
/* 800B540C 000B24EC  48 00 00 0C */	b .L_800B5418
.L_800B5410:
/* 800B5410 000B24F0  7C 83 23 78 */	mr r3, r4
/* 800B5414 000B24F4  4B FF FE C9 */	bl zScriptReset__FP8_zScript
.L_800B5418:
/* 800B5418 000B24F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800B541C 000B24FC  38 60 00 01 */	li r3, 0x1
/* 800B5420 000B2500  7C 08 03 A6 */	mtlr r0
/* 800B5424 000B2504  38 21 00 10 */	addi r1, r1, 0x10
/* 800B5428 000B2508  4E 80 00 20 */	blr
.endfn zScriptEventCB__FP5xBaseP5xBaseUiPCfP5xBase

# zScriptExecuteEvents(_zScript*, float, float)
.fn zScriptExecuteEvents__FP8_zScriptff, local
/* 800B542C 000B250C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 800B5430 000B2510  7C 08 02 A6 */	mflr r0
/* 800B5434 000B2514  90 01 00 44 */	stw r0, 0x44(r1)
/* 800B5438 000B2518  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 800B543C 000B251C  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 800B5440 000B2520  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 800B5444 000B2524  F3 C1 00 28 */	psq_st f30, 0x28(r1), 0, qr0
/* 800B5448 000B2528  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800B544C 000B252C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800B5450 000B2530  93 A1 00 14 */	stw r29, 0x14(r1)
/* 800B5454 000B2534  93 81 00 10 */	stw r28, 0x10(r1)
/* 800B5458 000B2538  7C 7C 1B 78 */	mr r28, r3
/* 800B545C 000B253C  38 00 00 00 */	li r0, 0x0
/* 800B5460 000B2540  98 03 00 15 */	stb r0, 0x15(r3)
/* 800B5464 000B2544  FF C0 08 90 */	fmr f30, f1
/* 800B5468 000B2548  FF E0 10 90 */	fmr f31, f2
/* 800B546C 000B254C  3B C0 00 00 */	li r30, 0x0
/* 800B5470 000B2550  80 63 00 10 */	lwz r3, 0x10(r3)
/* 800B5474 000B2554  3B E3 00 10 */	addi r31, r3, 0x10
/* 800B5478 000B2558  48 00 00 80 */	b .L_800B54F8
.L_800B547C:
/* 800B547C 000B255C  80 7F 00 04 */	lwz r3, 0x4(r31)
/* 800B5480 000B2560  28 03 00 00 */	cmplwi r3, 0x0
/* 800B5484 000B2564  41 82 00 6C */	beq .L_800B54F0
/* 800B5488 000B2568  C0 1F 00 00 */	lfs f0, 0x0(r31)
/* 800B548C 000B256C  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 800B5490 000B2570  4C 41 13 82 */	cror eq, gt, eq
/* 800B5494 000B2574  40 82 00 5C */	bne .L_800B54F0
/* 800B5498 000B2578  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 800B549C 000B257C  40 80 00 4C */	bge .L_800B54E8
/* 800B54A0 000B2580  4B FF F5 9D */	bl zSceneFindObject__FUi
/* 800B54A4 000B2584  7C 7D 1B 79 */	mr. r29, r3
/* 800B54A8 000B2588  41 82 00 48 */	beq .L_800B54F0
/* 800B54AC 000B258C  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 800B54B0 000B2590  28 03 00 00 */	cmplwi r3, 0x0
/* 800B54B4 000B2594  40 82 00 0C */	bne .L_800B54C0
/* 800B54B8 000B2598  39 00 00 00 */	li r8, 0x0
/* 800B54BC 000B259C  48 00 00 0C */	b .L_800B54C8
.L_800B54C0:
/* 800B54C0 000B25A0  4B FF F5 7D */	bl zSceneFindObject__FUi
/* 800B54C4 000B25A4  7C 68 1B 78 */	mr r8, r3
.L_800B54C8:
/* 800B54C8 000B25A8  80 DF 00 08 */	lwz r6, 0x8(r31)
/* 800B54CC 000B25AC  7F 83 E3 78 */	mr r3, r28
/* 800B54D0 000B25B0  7F A5 EB 78 */	mr r5, r29
/* 800B54D4 000B25B4  38 FF 00 0C */	addi r7, r31, 0xc
/* 800B54D8 000B25B8  38 80 00 00 */	li r4, 0x0
/* 800B54DC 000B25BC  39 20 00 00 */	li r9, 0x0
/* 800B54E0 000B25C0  4B F6 A2 79 */	bl zEntEvent__FP5xBaseUiP5xBaseUiPCfP5xBasei
/* 800B54E4 000B25C4  48 00 00 0C */	b .L_800B54F0
.L_800B54E8:
/* 800B54E8 000B25C8  38 00 00 01 */	li r0, 0x1
/* 800B54EC 000B25CC  98 1C 00 15 */	stb r0, 0x15(r28)
.L_800B54F0:
/* 800B54F0 000B25D0  3B FF 00 20 */	addi r31, r31, 0x20
/* 800B54F4 000B25D4  3B DE 00 01 */	addi r30, r30, 0x1
.L_800B54F8:
/* 800B54F8 000B25D8  80 7C 00 10 */	lwz r3, 0x10(r28)
/* 800B54FC 000B25DC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 800B5500 000B25E0  7C 1E 00 40 */	cmplw r30, r0
/* 800B5504 000B25E4  41 80 FF 78 */	blt .L_800B547C
/* 800B5508 000B25E8  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 800B550C 000B25EC  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 800B5510 000B25F0  E3 C1 00 28 */	psq_l f30, 0x28(r1), 0, qr0
/* 800B5514 000B25F4  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 800B5518 000B25F8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800B551C 000B25FC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800B5520 000B2600  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 800B5524 000B2604  80 01 00 44 */	lwz r0, 0x44(r1)
/* 800B5528 000B2608  83 81 00 10 */	lwz r28, 0x10(r1)
/* 800B552C 000B260C  7C 08 03 A6 */	mtlr r0
/* 800B5530 000B2610  38 21 00 40 */	addi r1, r1, 0x40
/* 800B5534 000B2614  4E 80 00 20 */	blr
.endfn zScriptExecuteEvents__FP8_zScriptff

# zScriptUpdate(xBase*, xScene*, float)
.fn zScriptUpdate__FP5xBaseP6xScenef, global
/* 800B5538 000B2618  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800B553C 000B261C  7C 08 02 A6 */	mflr r0
/* 800B5540 000B2620  90 01 00 24 */	stw r0, 0x24(r1)
/* 800B5544 000B2624  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 800B5548 000B2628  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 800B554C 000B262C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800B5550 000B2630  88 03 00 14 */	lbz r0, 0x14(r3)
/* 800B5554 000B2634  FF E0 08 90 */	fmr f31, f1
/* 800B5558 000B2638  7C 7F 1B 78 */	mr r31, r3
/* 800B555C 000B263C  28 00 00 01 */	cmplwi r0, 0x1
/* 800B5560 000B2640  40 82 00 44 */	bne .L_800B55A4
/* 800B5564 000B2644  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 800B5568 000B2648  EC 41 F8 2A */	fadds f2, f1, f31
/* 800B556C 000B264C  4B FF FE C1 */	bl zScriptExecuteEvents__FP8_zScriptff
/* 800B5570 000B2650  C0 1F 00 18 */	lfs f0, 0x18(r31)
/* 800B5574 000B2654  EC 00 F8 2A */	fadds f0, f0, f31
/* 800B5578 000B2658  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 800B557C 000B265C  88 1F 00 15 */	lbz r0, 0x15(r31)
/* 800B5580 000B2660  28 00 00 00 */	cmplwi r0, 0x0
/* 800B5584 000B2664  40 82 00 50 */	bne .L_800B55D4
/* 800B5588 000B2668  88 1F 00 14 */	lbz r0, 0x14(r31)
/* 800B558C 000B266C  28 00 00 03 */	cmplwi r0, 0x3
/* 800B5590 000B2670  40 82 00 44 */	bne .L_800B55D4
/* 800B5594 000B2674  7F E3 FB 78 */	mr r3, r31
/* 800B5598 000B2678  38 80 00 14 */	li r4, 0x14
/* 800B559C 000B267C  4B F6 A0 55 */	bl zEntEvent__FP5xBaseUi
/* 800B55A0 000B2680  48 00 00 34 */	b .L_800B55D4
.L_800B55A4:
/* 800B55A4 000B2684  28 00 00 03 */	cmplwi r0, 0x3
/* 800B55A8 000B2688  40 82 00 2C */	bne .L_800B55D4
/* 800B55AC 000B268C  3C 60 80 3C */	lis r3, globals@ha
/* 800B55B0 000B2690  38 63 05 58 */	addi r3, r3, globals@l
/* 800B55B4 000B2694  80 63 03 1C */	lwz r3, 0x31c(r3)
/* 800B55B8 000B2698  28 03 00 00 */	cmplwi r3, 0x0
/* 800B55BC 000B269C  41 82 00 18 */	beq .L_800B55D4
/* 800B55C0 000B26A0  80 03 00 2C */	lwz r0, 0x2c(r3)
/* 800B55C4 000B26A4  54 00 03 5B */	rlwinm. r0, r0, 0, 13, 13
/* 800B55C8 000B26A8  41 82 00 0C */	beq .L_800B55D4
/* 800B55CC 000B26AC  38 00 00 01 */	li r0, 0x1
/* 800B55D0 000B26B0  98 1F 00 14 */	stb r0, 0x14(r31)
.L_800B55D4:
/* 800B55D4 000B26B4  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 800B55D8 000B26B8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800B55DC 000B26BC  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 800B55E0 000B26C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800B55E4 000B26C4  7C 08 03 A6 */	mtlr r0
/* 800B55E8 000B26C8  38 21 00 20 */	addi r1, r1, 0x20
/* 800B55EC 000B26CC  4E 80 00 20 */	blr
.endfn zScriptUpdate__FP5xBaseP6xScenef
