.include "macros.inc"
.file "ai.c"

# 0x801B5350 - 0x801B5C34
.text
.balign 4

.fn AIRegisterDMACallback, global
/* 801B5350 001B2430  7C 08 02 A6 */	mflr r0
/* 801B5354 001B2434  90 01 00 04 */	stw r0, 0x4(r1)
/* 801B5358 001B2438  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 801B535C 001B243C  93 E1 00 14 */	stw r31, 0x14(r1)
/* 801B5360 001B2440  93 C1 00 10 */	stw r30, 0x10(r1)
/* 801B5364 001B2444  7C 7E 1B 78 */	mr r30, r3
/* 801B5368 001B2448  83 ED 99 24 */	lwz r31, __AID_Callback@sda21(r13)
/* 801B536C 001B244C  48 01 EF A5 */	bl OSDisableInterrupts
/* 801B5370 001B2450  93 CD 99 24 */	stw r30, __AID_Callback@sda21(r13)
/* 801B5374 001B2454  48 01 EF C5 */	bl OSRestoreInterrupts
/* 801B5378 001B2458  7F E3 FB 78 */	mr r3, r31
/* 801B537C 001B245C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 801B5380 001B2460  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 801B5384 001B2464  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 801B5388 001B2468  38 21 00 18 */	addi r1, r1, 0x18
/* 801B538C 001B246C  7C 08 03 A6 */	mtlr r0
/* 801B5390 001B2470  4E 80 00 20 */	blr
.endfn AIRegisterDMACallback

.fn AIInitDMA, global
/* 801B5394 001B2474  7C 08 02 A6 */	mflr r0
/* 801B5398 001B2478  90 01 00 04 */	stw r0, 0x4(r1)
/* 801B539C 001B247C  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 801B53A0 001B2480  93 E1 00 14 */	stw r31, 0x14(r1)
/* 801B53A4 001B2484  3B E4 00 00 */	addi r31, r4, 0x0
/* 801B53A8 001B2488  93 C1 00 10 */	stw r30, 0x10(r1)
/* 801B53AC 001B248C  3B C3 00 00 */	addi r30, r3, 0x0
/* 801B53B0 001B2490  48 01 EF 61 */	bl OSDisableInterrupts
/* 801B53B4 001B2494  3C 80 CC 00 */	lis r4, 0xcc00
/* 801B53B8 001B2498  A0 04 50 30 */	lhz r0, 0x5030(r4)
/* 801B53BC 001B249C  38 A4 50 00 */	addi r5, r4, 0x5000
/* 801B53C0 001B24A0  38 C4 50 00 */	addi r6, r4, 0x5000
/* 801B53C4 001B24A4  38 E4 50 00 */	addi r7, r4, 0x5000
/* 801B53C8 001B24A8  54 04 00 2A */	clrrwi r4, r0, 10
/* 801B53CC 001B24AC  57 C0 84 3E */	srwi r0, r30, 16
/* 801B53D0 001B24B0  7C 80 03 78 */	or r0, r4, r0
/* 801B53D4 001B24B4  B0 05 00 30 */	sth r0, 0x30(r5)
/* 801B53D8 001B24B8  57 C0 04 3E */	clrlwi r0, r30, 16
/* 801B53DC 001B24BC  A0 86 00 32 */	lhz r4, 0x32(r6)
/* 801B53E0 001B24C0  54 84 06 DE */	rlwinm r4, r4, 0, 27, 15
/* 801B53E4 001B24C4  7C 80 03 78 */	or r0, r4, r0
/* 801B53E8 001B24C8  B0 06 00 32 */	sth r0, 0x32(r6)
/* 801B53EC 001B24CC  57 E0 DC 3E */	extrwi r0, r31, 16, 11
/* 801B53F0 001B24D0  A0 87 00 36 */	lhz r4, 0x36(r7)
/* 801B53F4 001B24D4  54 84 00 20 */	clrrwi r4, r4, 15
/* 801B53F8 001B24D8  7C 80 03 78 */	or r0, r4, r0
/* 801B53FC 001B24DC  B0 07 00 36 */	sth r0, 0x36(r7)
/* 801B5400 001B24E0  48 01 EF 39 */	bl OSRestoreInterrupts
/* 801B5404 001B24E4  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 801B5408 001B24E8  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 801B540C 001B24EC  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 801B5410 001B24F0  38 21 00 18 */	addi r1, r1, 0x18
/* 801B5414 001B24F4  7C 08 03 A6 */	mtlr r0
/* 801B5418 001B24F8  4E 80 00 20 */	blr
.endfn AIInitDMA

.fn AIStartDMA, global
/* 801B541C 001B24FC  3C 60 CC 00 */	lis r3, 0xcc00
/* 801B5420 001B2500  38 63 50 00 */	addi r3, r3, 0x5000
/* 801B5424 001B2504  A0 03 00 36 */	lhz r0, 0x36(r3)
/* 801B5428 001B2508  60 00 80 00 */	ori r0, r0, 0x8000
/* 801B542C 001B250C  B0 03 00 36 */	sth r0, 0x36(r3)
/* 801B5430 001B2510  4E 80 00 20 */	blr
.endfn AIStartDMA

.fn AIStopDMA, global
/* 801B5434 001B2514  3C 60 CC 00 */	lis r3, 0xcc00
/* 801B5438 001B2518  38 63 50 00 */	addi r3, r3, 0x5000
/* 801B543C 001B251C  A0 03 00 36 */	lhz r0, 0x36(r3)
/* 801B5440 001B2520  54 00 04 5E */	rlwinm r0, r0, 0, 17, 15
/* 801B5444 001B2524  B0 03 00 36 */	sth r0, 0x36(r3)
/* 801B5448 001B2528  4E 80 00 20 */	blr
.endfn AIStopDMA

.fn AISetStreamPlayState, global
/* 801B544C 001B252C  7C 08 02 A6 */	mflr r0
/* 801B5450 001B2530  90 01 00 04 */	stw r0, 0x4(r1)
/* 801B5454 001B2534  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801B5458 001B2538  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801B545C 001B253C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801B5460 001B2540  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801B5464 001B2544  7C 7D 1B 78 */	mr r29, r3
/* 801B5468 001B2548  48 00 00 BD */	bl AIGetStreamPlayState
/* 801B546C 001B254C  7C 1D 18 40 */	cmplw r29, r3
/* 801B5470 001B2550  41 82 00 98 */	beq .L_801B5508
/* 801B5474 001B2554  48 00 02 89 */	bl AIGetStreamSampleRate
/* 801B5478 001B2558  28 03 00 00 */	cmplwi r3, 0x0
/* 801B547C 001B255C  40 82 00 78 */	bne .L_801B54F4
/* 801B5480 001B2560  28 1D 00 01 */	cmplwi r29, 0x1
/* 801B5484 001B2564  40 82 00 70 */	bne .L_801B54F4
/* 801B5488 001B2568  48 00 02 CD */	bl AIGetStreamVolRight
/* 801B548C 001B256C  7C 7E 1B 78 */	mr r30, r3
/* 801B5490 001B2570  48 00 02 99 */	bl AIGetStreamVolLeft
/* 801B5494 001B2574  3B A3 00 00 */	addi r29, r3, 0x0
/* 801B5498 001B2578  38 60 00 00 */	li r3, 0x0
/* 801B549C 001B257C  48 00 02 9D */	bl AISetStreamVolRight
/* 801B54A0 001B2580  38 60 00 00 */	li r3, 0x0
/* 801B54A4 001B2584  48 00 02 69 */	bl AISetStreamVolLeft
/* 801B54A8 001B2588  48 01 EE 69 */	bl OSDisableInterrupts
/* 801B54AC 001B258C  7C 7F 1B 78 */	mr r31, r3
/* 801B54B0 001B2590  48 00 05 A1 */	bl __AI_SRC_INIT
/* 801B54B4 001B2594  3C 80 CC 00 */	lis r4, 0xcc00
/* 801B54B8 001B2598  80 04 6C 00 */	lwz r0, 0x6c00(r4)
/* 801B54BC 001B259C  38 7F 00 00 */	addi r3, r31, 0x0
/* 801B54C0 001B25A0  54 00 06 F2 */	rlwinm r0, r0, 0, 27, 25
/* 801B54C4 001B25A4  60 00 00 20 */	ori r0, r0, 0x20
/* 801B54C8 001B25A8  90 04 6C 00 */	stw r0, 0x6c00(r4)
/* 801B54CC 001B25AC  80 04 6C 00 */	lwz r0, 0x6c00(r4)
/* 801B54D0 001B25B0  54 00 00 3C */	clrrwi r0, r0, 1
/* 801B54D4 001B25B4  60 00 00 01 */	ori r0, r0, 0x1
/* 801B54D8 001B25B8  90 04 6C 00 */	stw r0, 0x6c00(r4)
/* 801B54DC 001B25BC  48 01 EE 5D */	bl OSRestoreInterrupts
/* 801B54E0 001B25C0  7F C3 F3 78 */	mr r3, r30
/* 801B54E4 001B25C4  48 00 02 29 */	bl AISetStreamVolLeft
/* 801B54E8 001B25C8  7F A3 EB 78 */	mr r3, r29
/* 801B54EC 001B25CC  48 00 02 4D */	bl AISetStreamVolRight
/* 801B54F0 001B25D0  48 00 00 18 */	b .L_801B5508
.L_801B54F4:
/* 801B54F4 001B25D4  3C 60 CC 00 */	lis r3, 0xcc00
/* 801B54F8 001B25D8  80 03 6C 00 */	lwz r0, 0x6c00(r3)
/* 801B54FC 001B25DC  54 00 00 3C */	clrrwi r0, r0, 1
/* 801B5500 001B25E0  7C 00 EB 78 */	or r0, r0, r29
/* 801B5504 001B25E4  90 03 6C 00 */	stw r0, 0x6c00(r3)
.L_801B5508:
/* 801B5508 001B25E8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801B550C 001B25EC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801B5510 001B25F0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801B5514 001B25F4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801B5518 001B25F8  38 21 00 20 */	addi r1, r1, 0x20
/* 801B551C 001B25FC  7C 08 03 A6 */	mtlr r0
/* 801B5520 001B2600  4E 80 00 20 */	blr
.endfn AISetStreamPlayState

.fn AIGetStreamPlayState, global
/* 801B5524 001B2604  3C 60 CC 00 */	lis r3, 0xcc00
/* 801B5528 001B2608  80 03 6C 00 */	lwz r0, 0x6c00(r3)
/* 801B552C 001B260C  54 03 07 FE */	clrlwi r3, r0, 31
/* 801B5530 001B2610  4E 80 00 20 */	blr
.endfn AIGetStreamPlayState

.fn AISetDSPSampleRate, global
/* 801B5534 001B2614  7C 08 02 A6 */	mflr r0
/* 801B5538 001B2618  90 01 00 04 */	stw r0, 0x4(r1)
/* 801B553C 001B261C  94 21 FF D8 */	stwu r1, -0x28(r1)
/* 801B5540 001B2620  BF 41 00 10 */	stmw r26, 0x10(r1)
/* 801B5544 001B2624  7C 7A 1B 78 */	mr r26, r3
/* 801B5548 001B2628  48 00 00 CD */	bl AIGetDSPSampleRate
/* 801B554C 001B262C  7C 1A 18 40 */	cmplw r26, r3
/* 801B5550 001B2630  41 82 00 B0 */	beq .L_801B5600
/* 801B5554 001B2634  3F E0 CC 00 */	lis r31, 0xcc00
/* 801B5558 001B2638  80 1F 6C 00 */	lwz r0, 0x6c00(r31)
/* 801B555C 001B263C  28 1A 00 00 */	cmplwi r26, 0x0
/* 801B5560 001B2640  54 00 06 B0 */	rlwinm r0, r0, 0, 26, 24
/* 801B5564 001B2644  90 1F 6C 00 */	stw r0, 0x6c00(r31)
/* 801B5568 001B2648  40 82 00 98 */	bne .L_801B5600
/* 801B556C 001B264C  48 00 01 BD */	bl AIGetStreamVolLeft
/* 801B5570 001B2650  7C 7E 1B 78 */	mr r30, r3
/* 801B5574 001B2654  48 00 01 E1 */	bl AIGetStreamVolRight
/* 801B5578 001B2658  80 1F 6C 00 */	lwz r0, 0x6c00(r31)
/* 801B557C 001B265C  3B A3 00 00 */	addi r29, r3, 0x0
/* 801B5580 001B2660  54 1B 07 FE */	clrlwi r27, r0, 31
/* 801B5584 001B2664  48 00 01 79 */	bl AIGetStreamSampleRate
/* 801B5588 001B2668  3B 83 00 00 */	addi r28, r3, 0x0
/* 801B558C 001B266C  38 60 00 00 */	li r3, 0x0
/* 801B5590 001B2670  48 00 01 7D */	bl AISetStreamVolLeft
/* 801B5594 001B2674  38 60 00 00 */	li r3, 0x0
/* 801B5598 001B2678  48 00 01 A1 */	bl AISetStreamVolRight
/* 801B559C 001B267C  48 01 ED 75 */	bl OSDisableInterrupts
/* 801B55A0 001B2680  7C 7A 1B 78 */	mr r26, r3
/* 801B55A4 001B2684  48 00 04 AD */	bl __AI_SRC_INIT
/* 801B55A8 001B2688  80 9F 6C 00 */	lwz r4, 0x6c00(r31)
/* 801B55AC 001B268C  57 80 08 3C */	slwi r0, r28, 1
/* 801B55B0 001B2690  38 7A 00 00 */	addi r3, r26, 0x0
/* 801B55B4 001B2694  54 84 06 F2 */	rlwinm r4, r4, 0, 27, 25
/* 801B55B8 001B2698  60 84 00 20 */	ori r4, r4, 0x20
/* 801B55BC 001B269C  90 9F 6C 00 */	stw r4, 0x6c00(r31)
/* 801B55C0 001B26A0  80 9F 6C 00 */	lwz r4, 0x6c00(r31)
/* 801B55C4 001B26A4  54 84 07 FA */	rlwinm r4, r4, 0, 31, 29
/* 801B55C8 001B26A8  7C 80 03 78 */	or r0, r4, r0
/* 801B55CC 001B26AC  90 1F 6C 00 */	stw r0, 0x6c00(r31)
/* 801B55D0 001B26B0  80 1F 6C 00 */	lwz r0, 0x6c00(r31)
/* 801B55D4 001B26B4  54 00 00 3C */	clrrwi r0, r0, 1
/* 801B55D8 001B26B8  7C 00 DB 78 */	or r0, r0, r27
/* 801B55DC 001B26BC  90 1F 6C 00 */	stw r0, 0x6c00(r31)
/* 801B55E0 001B26C0  80 1F 6C 00 */	lwz r0, 0x6c00(r31)
/* 801B55E4 001B26C4  60 00 00 40 */	ori r0, r0, 0x40
/* 801B55E8 001B26C8  90 1F 6C 00 */	stw r0, 0x6c00(r31)
/* 801B55EC 001B26CC  48 01 ED 4D */	bl OSRestoreInterrupts
/* 801B55F0 001B26D0  7F C3 F3 78 */	mr r3, r30
/* 801B55F4 001B26D4  48 00 01 19 */	bl AISetStreamVolLeft
/* 801B55F8 001B26D8  7F A3 EB 78 */	mr r3, r29
/* 801B55FC 001B26DC  48 00 01 3D */	bl AISetStreamVolRight
.L_801B5600:
/* 801B5600 001B26E0  BB 41 00 10 */	lmw r26, 0x10(r1)
/* 801B5604 001B26E4  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 801B5608 001B26E8  38 21 00 28 */	addi r1, r1, 0x28
/* 801B560C 001B26EC  7C 08 03 A6 */	mtlr r0
/* 801B5610 001B26F0  4E 80 00 20 */	blr
.endfn AISetDSPSampleRate

.fn AIGetDSPSampleRate, global
/* 801B5614 001B26F4  3C 60 CC 00 */	lis r3, 0xcc00
/* 801B5618 001B26F8  80 03 6C 00 */	lwz r0, 0x6c00(r3)
/* 801B561C 001B26FC  54 00 D7 FE */	extrwi r0, r0, 1, 25
/* 801B5620 001B2700  68 03 00 01 */	xori r3, r0, 0x1
/* 801B5624 001B2704  4E 80 00 20 */	blr
.endfn AIGetDSPSampleRate

.fn __AI_set_stream_sample_rate, local
/* 801B5628 001B2708  7C 08 02 A6 */	mflr r0
/* 801B562C 001B270C  90 01 00 04 */	stw r0, 0x4(r1)
/* 801B5630 001B2710  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801B5634 001B2714  BF 21 00 14 */	stmw r25, 0x14(r1)
/* 801B5638 001B2718  7C 79 1B 78 */	mr r25, r3
/* 801B563C 001B271C  48 00 00 C1 */	bl AIGetStreamSampleRate
/* 801B5640 001B2720  7C 19 18 40 */	cmplw r25, r3
/* 801B5644 001B2724  41 82 00 A4 */	beq .L_801B56E8
/* 801B5648 001B2728  3F E0 CC 00 */	lis r31, 0xcc00
/* 801B564C 001B272C  80 1F 6C 00 */	lwz r0, 0x6c00(r31)
/* 801B5650 001B2730  54 00 07 FE */	clrlwi r0, r0, 31
/* 801B5654 001B2734  7C 1D 03 78 */	mr r29, r0
/* 801B5658 001B2738  48 00 00 D1 */	bl AIGetStreamVolLeft
/* 801B565C 001B273C  7C 7C 1B 78 */	mr r28, r3
/* 801B5660 001B2740  48 00 00 F5 */	bl AIGetStreamVolRight
/* 801B5664 001B2744  3B 63 00 00 */	addi r27, r3, 0x0
/* 801B5668 001B2748  38 60 00 00 */	li r3, 0x0
/* 801B566C 001B274C  48 00 00 CD */	bl AISetStreamVolRight
/* 801B5670 001B2750  38 60 00 00 */	li r3, 0x0
/* 801B5674 001B2754  48 00 00 99 */	bl AISetStreamVolLeft
/* 801B5678 001B2758  80 7F 6C 00 */	lwz r3, 0x6c00(r31)
/* 801B567C 001B275C  80 1F 6C 00 */	lwz r0, 0x6c00(r31)
/* 801B5680 001B2760  54 7A 06 72 */	rlwinm r26, r3, 0, 25, 25
/* 801B5684 001B2764  54 00 06 B0 */	rlwinm r0, r0, 0, 26, 24
/* 801B5688 001B2768  90 1F 6C 00 */	stw r0, 0x6c00(r31)
/* 801B568C 001B276C  48 01 EC 85 */	bl OSDisableInterrupts
/* 801B5690 001B2770  7C 7E 1B 78 */	mr r30, r3
/* 801B5694 001B2774  48 00 03 BD */	bl __AI_SRC_INIT
/* 801B5698 001B2778  80 9F 6C 00 */	lwz r4, 0x6c00(r31)
/* 801B569C 001B277C  57 20 08 3C */	slwi r0, r25, 1
/* 801B56A0 001B2780  38 7E 00 00 */	addi r3, r30, 0x0
/* 801B56A4 001B2784  7C 84 D3 78 */	or r4, r4, r26
/* 801B56A8 001B2788  90 9F 6C 00 */	stw r4, 0x6c00(r31)
/* 801B56AC 001B278C  80 9F 6C 00 */	lwz r4, 0x6c00(r31)
/* 801B56B0 001B2790  54 84 06 F2 */	rlwinm r4, r4, 0, 27, 25
/* 801B56B4 001B2794  60 84 00 20 */	ori r4, r4, 0x20
/* 801B56B8 001B2798  90 9F 6C 00 */	stw r4, 0x6c00(r31)
/* 801B56BC 001B279C  80 9F 6C 00 */	lwz r4, 0x6c00(r31)
/* 801B56C0 001B27A0  54 84 07 FA */	rlwinm r4, r4, 0, 31, 29
/* 801B56C4 001B27A4  7C 80 03 78 */	or r0, r4, r0
/* 801B56C8 001B27A8  90 1F 6C 00 */	stw r0, 0x6c00(r31)
/* 801B56CC 001B27AC  48 01 EC 6D */	bl OSRestoreInterrupts
/* 801B56D0 001B27B0  7F A3 EB 78 */	mr r3, r29
/* 801B56D4 001B27B4  4B FF FD 79 */	bl AISetStreamPlayState
/* 801B56D8 001B27B8  7F 83 E3 78 */	mr r3, r28
/* 801B56DC 001B27BC  48 00 00 31 */	bl AISetStreamVolLeft
/* 801B56E0 001B27C0  7F 63 DB 78 */	mr r3, r27
/* 801B56E4 001B27C4  48 00 00 55 */	bl AISetStreamVolRight
.L_801B56E8:
/* 801B56E8 001B27C8  BB 21 00 14 */	lmw r25, 0x14(r1)
/* 801B56EC 001B27CC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801B56F0 001B27D0  38 21 00 30 */	addi r1, r1, 0x30
/* 801B56F4 001B27D4  7C 08 03 A6 */	mtlr r0
/* 801B56F8 001B27D8  4E 80 00 20 */	blr
.endfn __AI_set_stream_sample_rate

.fn AIGetStreamSampleRate, global
/* 801B56FC 001B27DC  3C 60 CC 00 */	lis r3, 0xcc00
/* 801B5700 001B27E0  80 03 6C 00 */	lwz r0, 0x6c00(r3)
/* 801B5704 001B27E4  54 03 FF FE */	extrwi r3, r0, 1, 30
/* 801B5708 001B27E8  4E 80 00 20 */	blr
.endfn AIGetStreamSampleRate

.fn AISetStreamVolLeft, global
/* 801B570C 001B27EC  3C 80 CC 00 */	lis r4, 0xcc00
/* 801B5710 001B27F0  38 84 6C 00 */	addi r4, r4, 0x6c00
/* 801B5714 001B27F4  80 04 00 04 */	lwz r0, 0x4(r4)
/* 801B5718 001B27F8  54 00 00 2E */	clrrwi r0, r0, 8
/* 801B571C 001B27FC  50 60 06 3E */	rlwimi r0, r3, 0, 24, 31
/* 801B5720 001B2800  90 04 00 04 */	stw r0, 0x4(r4)
/* 801B5724 001B2804  4E 80 00 20 */	blr
.endfn AISetStreamVolLeft

.fn AIGetStreamVolLeft, global
/* 801B5728 001B2808  3C 60 CC 00 */	lis r3, 0xcc00
/* 801B572C 001B280C  80 03 6C 04 */	lwz r0, 0x6c04(r3)
/* 801B5730 001B2810  54 03 06 3E */	clrlwi r3, r0, 24
/* 801B5734 001B2814  4E 80 00 20 */	blr
.endfn AIGetStreamVolLeft

.fn AISetStreamVolRight, global
/* 801B5738 001B2818  3C 80 CC 00 */	lis r4, 0xcc00
/* 801B573C 001B281C  38 84 6C 00 */	addi r4, r4, 0x6c00
/* 801B5740 001B2820  80 04 00 04 */	lwz r0, 0x4(r4)
/* 801B5744 001B2824  54 00 06 1E */	rlwinm r0, r0, 0, 24, 15
/* 801B5748 001B2828  50 60 44 2E */	rlwimi r0, r3, 8, 16, 23
/* 801B574C 001B282C  90 04 00 04 */	stw r0, 0x4(r4)
/* 801B5750 001B2830  4E 80 00 20 */	blr
.endfn AISetStreamVolRight

.fn AIGetStreamVolRight, global
/* 801B5754 001B2834  3C 60 CC 00 */	lis r3, 0xcc00
/* 801B5758 001B2838  80 03 6C 04 */	lwz r0, 0x6c04(r3)
/* 801B575C 001B283C  54 03 C6 3E */	extrwi r3, r0, 8, 16
/* 801B5760 001B2840  4E 80 00 20 */	blr
.endfn AIGetStreamVolRight

.fn AIInit, global
/* 801B5764 001B2844  7C 08 02 A6 */	mflr r0
/* 801B5768 001B2848  90 01 00 04 */	stw r0, 0x4(r1)
/* 801B576C 001B284C  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 801B5770 001B2850  93 E1 00 14 */	stw r31, 0x14(r1)
/* 801B5774 001B2854  93 C1 00 10 */	stw r30, 0x10(r1)
/* 801B5778 001B2858  3B C3 00 00 */	addi r30, r3, 0x0
/* 801B577C 001B285C  80 0D 99 30 */	lwz r0, __AI_init_flag@sda21(r13)
/* 801B5780 001B2860  2C 00 00 01 */	cmpwi r0, 0x1
/* 801B5784 001B2864  41 82 01 34 */	beq .L_801B58B8
/* 801B5788 001B2868  80 6D 85 48 */	lwz r3, __AIVersion@sda21(r13)
/* 801B578C 001B286C  48 01 BE 71 */	bl OSRegisterVersion
/* 801B5790 001B2870  3C 60 80 00 */	lis r3, 0x8000
/* 801B5794 001B2874  80 03 00 F8 */	lwz r0, 0xf8(r3)
/* 801B5798 001B2878  3C 60 43 1C */	lis r3, 0x431c
/* 801B579C 001B287C  3C 80 00 01 */	lis r4, 0x1
/* 801B57A0 001B2880  54 00 F0 BE */	srwi r0, r0, 2
/* 801B57A4 001B2884  38 63 DE 83 */	addi r3, r3, -0x217d
/* 801B57A8 001B2888  7C 03 00 16 */	mulhwu r0, r3, r0
/* 801B57AC 001B288C  54 09 8B FE */	srwi r9, r0, 15
/* 801B57B0 001B2890  38 A4 A4 28 */	addi r5, r4, -0x5bd8
/* 801B57B4 001B2894  38 64 A4 10 */	addi r3, r4, -0x5bf0
/* 801B57B8 001B2898  38 04 F6 18 */	addi r0, r4, -0x9e8
/* 801B57BC 001B289C  3C 80 10 62 */	lis r4, 0x1062
/* 801B57C0 001B28A0  7C E9 29 D6 */	mullw r7, r9, r5
/* 801B57C4 001B28A4  39 44 4D D3 */	addi r10, r4, 0x4dd3
/* 801B57C8 001B28A8  7C A9 19 D6 */	mullw r5, r9, r3
/* 801B57CC 001B28AC  7C 89 01 D6 */	mullw r4, r9, r0
/* 801B57D0 001B28B0  1D 09 7B 24 */	mulli r8, r9, 0x7b24
/* 801B57D4 001B28B4  1C 69 0B B8 */	mulli r3, r9, 0xbb8
/* 801B57D8 001B28B8  7D 0A 40 16 */	mulhwu r8, r10, r8
/* 801B57DC 001B28BC  7C EA 38 16 */	mulhwu r7, r10, r7
/* 801B57E0 001B28C0  7C AA 28 16 */	mulhwu r5, r10, r5
/* 801B57E4 001B28C4  7C 8A 20 16 */	mulhwu r4, r10, r4
/* 801B57E8 001B28C8  7C 6A 18 16 */	mulhwu r3, r10, r3
/* 801B57EC 001B28CC  55 08 BA 7E */	srwi r8, r8, 9
/* 801B57F0 001B28D0  54 E7 BA 7E */	srwi r7, r7, 9
/* 801B57F4 001B28D4  91 0D 99 3C */	stw r8, bound_32KHz+0x4@sda21(r13)
/* 801B57F8 001B28D8  54 A5 BA 7E */	srwi r5, r5, 9
/* 801B57FC 001B28DC  54 84 BA 7E */	srwi r4, r4, 9
/* 801B5800 001B28E0  90 ED 99 44 */	stw r7, bound_48KHz+0x4@sda21(r13)
/* 801B5804 001B28E4  3B E0 00 00 */	li r31, 0x0
/* 801B5808 001B28E8  54 63 BA 7E */	srwi r3, r3, 9
/* 801B580C 001B28EC  90 AD 99 4C */	stw r5, min_wait+0x4@sda21(r13)
/* 801B5810 001B28F0  3C C0 CC 00 */	lis r6, 0xcc00
/* 801B5814 001B28F4  90 6D 99 5C */	stw r3, buffer+0x4@sda21(r13)
/* 801B5818 001B28F8  38 60 00 01 */	li r3, 0x1
/* 801B581C 001B28FC  80 06 6C 00 */	lwz r0, 0x6c00(r6)
/* 801B5820 001B2900  90 8D 99 54 */	stw r4, max_wait+0x4@sda21(r13)
/* 801B5824 001B2904  54 00 06 F2 */	rlwinm r0, r0, 0, 27, 25
/* 801B5828 001B2908  60 00 00 20 */	ori r0, r0, 0x20
/* 801B582C 001B290C  93 ED 99 38 */	stw r31, bound_32KHz@sda21(r13)
/* 801B5830 001B2910  93 ED 99 40 */	stw r31, bound_48KHz@sda21(r13)
/* 801B5834 001B2914  93 ED 99 48 */	stw r31, min_wait@sda21(r13)
/* 801B5838 001B2918  93 ED 99 50 */	stw r31, max_wait@sda21(r13)
/* 801B583C 001B291C  93 ED 99 58 */	stw r31, buffer@sda21(r13)
/* 801B5840 001B2920  80 A6 6C 04 */	lwz r5, 0x6c04(r6)
/* 801B5844 001B2924  90 06 6C 00 */	stw r0, 0x6c00(r6)
/* 801B5848 001B2928  54 A0 06 1E */	rlwinm r0, r5, 0, 24, 15
/* 801B584C 001B292C  60 00 00 00 */	nop
/* 801B5850 001B2930  90 06 6C 04 */	stw r0, 0x6c04(r6)
/* 801B5854 001B2934  80 06 6C 04 */	lwz r0, 0x6c04(r6)
/* 801B5858 001B2938  54 00 00 2E */	clrrwi r0, r0, 8
/* 801B585C 001B293C  60 00 00 00 */	nop
/* 801B5860 001B2940  90 06 6C 04 */	stw r0, 0x6c04(r6)
/* 801B5864 001B2944  93 E6 6C 0C */	stw r31, 0x6c0c(r6)
/* 801B5868 001B2948  4B FF FD C1 */	bl __AI_set_stream_sample_rate
/* 801B586C 001B294C  38 60 00 00 */	li r3, 0x0
/* 801B5870 001B2950  4B FF FC C5 */	bl AISetDSPSampleRate
/* 801B5874 001B2954  3C 60 80 1B */	lis r3, __AIDHandler@ha
/* 801B5878 001B2958  93 ED 99 20 */	stw r31, __AIS_Callback@sda21(r13)
/* 801B587C 001B295C  38 83 59 4C */	addi r4, r3, __AIDHandler@l
/* 801B5880 001B2960  93 ED 99 24 */	stw r31, __AID_Callback@sda21(r13)
/* 801B5884 001B2964  38 60 00 05 */	li r3, 0x5
/* 801B5888 001B2968  93 CD 99 28 */	stw r30, __CallbackStack@sda21(r13)
/* 801B588C 001B296C  48 01 EA D1 */	bl __OSSetInterruptHandler
/* 801B5890 001B2970  3C 60 04 00 */	lis r3, 0x400
/* 801B5894 001B2974  48 01 EE CD */	bl __OSUnmaskInterrupts
/* 801B5898 001B2978  3C 60 80 1B */	lis r3, __AISHandler@ha
/* 801B589C 001B297C  38 83 58 D0 */	addi r4, r3, __AISHandler@l
/* 801B58A0 001B2980  38 60 00 08 */	li r3, 0x8
/* 801B58A4 001B2984  48 01 EA B9 */	bl __OSSetInterruptHandler
/* 801B58A8 001B2988  3C 60 00 80 */	lis r3, 0x80
/* 801B58AC 001B298C  48 01 EE B5 */	bl __OSUnmaskInterrupts
/* 801B58B0 001B2990  38 00 00 01 */	li r0, 0x1
/* 801B58B4 001B2994  90 0D 99 30 */	stw r0, __AI_init_flag@sda21(r13)
.L_801B58B8:
/* 801B58B8 001B2998  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 801B58BC 001B299C  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 801B58C0 001B29A0  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 801B58C4 001B29A4  38 21 00 18 */	addi r1, r1, 0x18
/* 801B58C8 001B29A8  7C 08 03 A6 */	mtlr r0
/* 801B58CC 001B29AC  4E 80 00 20 */	blr
.endfn AIInit

.fn __AISHandler, local
/* 801B58D0 001B29B0  7C 08 02 A6 */	mflr r0
/* 801B58D4 001B29B4  90 01 00 04 */	stw r0, 0x4(r1)
/* 801B58D8 001B29B8  94 21 FD 20 */	stwu r1, -0x2e0(r1)
/* 801B58DC 001B29BC  93 E1 02 DC */	stw r31, 0x2dc(r1)
/* 801B58E0 001B29C0  3F E0 CC 00 */	lis r31, 0xcc00
/* 801B58E4 001B29C4  80 1F 6C 00 */	lwz r0, 0x6c00(r31)
/* 801B58E8 001B29C8  38 61 00 10 */	addi r3, r1, 0x10
/* 801B58EC 001B29CC  93 C1 02 D8 */	stw r30, 0x2d8(r1)
/* 801B58F0 001B29D0  60 00 00 08 */	ori r0, r0, 0x8
/* 801B58F4 001B29D4  90 1F 6C 00 */	stw r0, 0x6c00(r31)
/* 801B58F8 001B29D8  3B C4 00 00 */	addi r30, r4, 0x0
/* 801B58FC 001B29DC  48 01 D2 71 */	bl OSClearContext
/* 801B5900 001B29E0  38 61 00 10 */	addi r3, r1, 0x10
/* 801B5904 001B29E4  48 01 D0 A1 */	bl OSSetCurrentContext
/* 801B5908 001B29E8  81 8D 99 20 */	lwz r12, __AIS_Callback@sda21(r13)
/* 801B590C 001B29EC  28 0C 00 00 */	cmplwi r12, 0x0
/* 801B5910 001B29F0  41 82 00 14 */	beq .L_801B5924
/* 801B5914 001B29F4  38 7F 6C 00 */	addi r3, r31, 0x6c00
/* 801B5918 001B29F8  7D 88 03 A6 */	mtlr r12
/* 801B591C 001B29FC  80 63 00 08 */	lwz r3, 0x8(r3)
/* 801B5920 001B2A00  4E 80 00 21 */	blrl
.L_801B5924:
/* 801B5924 001B2A04  38 61 00 10 */	addi r3, r1, 0x10
/* 801B5928 001B2A08  48 01 D2 45 */	bl OSClearContext
/* 801B592C 001B2A0C  7F C3 F3 78 */	mr r3, r30
/* 801B5930 001B2A10  48 01 D0 75 */	bl OSSetCurrentContext
/* 801B5934 001B2A14  80 01 02 E4 */	lwz r0, 0x2e4(r1)
/* 801B5938 001B2A18  83 E1 02 DC */	lwz r31, 0x2dc(r1)
/* 801B593C 001B2A1C  83 C1 02 D8 */	lwz r30, 0x2d8(r1)
/* 801B5940 001B2A20  38 21 02 E0 */	addi r1, r1, 0x2e0
/* 801B5944 001B2A24  7C 08 03 A6 */	mtlr r0
/* 801B5948 001B2A28  4E 80 00 20 */	blr
.endfn __AISHandler

.fn __AIDHandler, local
/* 801B594C 001B2A2C  7C 08 02 A6 */	mflr r0
/* 801B5950 001B2A30  3C 60 CC 00 */	lis r3, 0xcc00
/* 801B5954 001B2A34  90 01 00 04 */	stw r0, 0x4(r1)
/* 801B5958 001B2A38  38 63 50 00 */	addi r3, r3, 0x5000
/* 801B595C 001B2A3C  38 00 FF 5F */	li r0, -0xa1
/* 801B5960 001B2A40  94 21 FD 20 */	stwu r1, -0x2e0(r1)
/* 801B5964 001B2A44  93 E1 02 DC */	stw r31, 0x2dc(r1)
/* 801B5968 001B2A48  3B E4 00 00 */	addi r31, r4, 0x0
/* 801B596C 001B2A4C  A0 A3 00 0A */	lhz r5, 0xa(r3)
/* 801B5970 001B2A50  7C A0 00 38 */	and r0, r5, r0
/* 801B5974 001B2A54  60 00 00 08 */	ori r0, r0, 0x8
/* 801B5978 001B2A58  B0 03 00 0A */	sth r0, 0xa(r3)
/* 801B597C 001B2A5C  38 61 00 10 */	addi r3, r1, 0x10
/* 801B5980 001B2A60  48 01 D1 ED */	bl OSClearContext
/* 801B5984 001B2A64  38 61 00 10 */	addi r3, r1, 0x10
/* 801B5988 001B2A68  48 01 D0 1D */	bl OSSetCurrentContext
/* 801B598C 001B2A6C  80 6D 99 24 */	lwz r3, __AID_Callback@sda21(r13)
/* 801B5990 001B2A70  28 03 00 00 */	cmplwi r3, 0x0
/* 801B5994 001B2A74  41 82 00 40 */	beq .L_801B59D4
/* 801B5998 001B2A78  80 0D 99 34 */	lwz r0, __AID_Active@sda21(r13)
/* 801B599C 001B2A7C  2C 00 00 00 */	cmpwi r0, 0x0
/* 801B59A0 001B2A80  40 82 00 34 */	bne .L_801B59D4
/* 801B59A4 001B2A84  80 0D 99 28 */	lwz r0, __CallbackStack@sda21(r13)
/* 801B59A8 001B2A88  38 80 00 01 */	li r4, 0x1
/* 801B59AC 001B2A8C  90 8D 99 34 */	stw r4, __AID_Active@sda21(r13)
/* 801B59B0 001B2A90  28 00 00 00 */	cmplwi r0, 0x0
/* 801B59B4 001B2A94  41 82 00 0C */	beq .L_801B59C0
/* 801B59B8 001B2A98  48 00 00 41 */	bl __AICallbackStackSwitch
/* 801B59BC 001B2A9C  48 00 00 10 */	b .L_801B59CC
.L_801B59C0:
/* 801B59C0 001B2AA0  39 83 00 00 */	addi r12, r3, 0x0
/* 801B59C4 001B2AA4  7D 88 03 A6 */	mtlr r12
/* 801B59C8 001B2AA8  4E 80 00 21 */	blrl
.L_801B59CC:
/* 801B59CC 001B2AAC  38 00 00 00 */	li r0, 0x0
/* 801B59D0 001B2AB0  90 0D 99 34 */	stw r0, __AID_Active@sda21(r13)
.L_801B59D4:
/* 801B59D4 001B2AB4  38 61 00 10 */	addi r3, r1, 0x10
/* 801B59D8 001B2AB8  48 01 D1 95 */	bl OSClearContext
/* 801B59DC 001B2ABC  7F E3 FB 78 */	mr r3, r31
/* 801B59E0 001B2AC0  48 01 CF C5 */	bl OSSetCurrentContext
/* 801B59E4 001B2AC4  80 01 02 E4 */	lwz r0, 0x2e4(r1)
/* 801B59E8 001B2AC8  83 E1 02 DC */	lwz r31, 0x2dc(r1)
/* 801B59EC 001B2ACC  38 21 02 E0 */	addi r1, r1, 0x2e0
/* 801B59F0 001B2AD0  7C 08 03 A6 */	mtlr r0
/* 801B59F4 001B2AD4  4E 80 00 20 */	blr
.endfn __AIDHandler

.fn __AICallbackStackSwitch, local
/* 801B59F8 001B2AD8  7C 08 02 A6 */	mflr r0
/* 801B59FC 001B2ADC  90 01 00 04 */	stw r0, 0x4(r1)
/* 801B5A00 001B2AE0  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 801B5A04 001B2AE4  93 E1 00 14 */	stw r31, 0x14(r1)
/* 801B5A08 001B2AE8  7C 7F 1B 78 */	mr r31, r3
/* 801B5A0C 001B2AEC  3C A0 80 3D */	lis r5, __OldStack@ha
/* 801B5A10 001B2AF0  38 A5 C2 2C */	addi r5, r5, __OldStack@l
/* 801B5A14 001B2AF4  90 25 00 00 */	stw r1, 0x0(r5)
/* 801B5A18 001B2AF8  3C A0 80 3D */	lis r5, __CallbackStack@ha
/* 801B5A1C 001B2AFC  38 A5 C2 28 */	addi r5, r5, __CallbackStack@l
/* 801B5A20 001B2B00  80 25 00 00 */	lwz r1, 0x0(r5)
/* 801B5A24 001B2B04  38 21 FF F8 */	addi r1, r1, -0x8
/* 801B5A28 001B2B08  7F E8 03 A6 */	mtlr r31
/* 801B5A2C 001B2B0C  4E 80 00 21 */	blrl
/* 801B5A30 001B2B10  3C A0 80 3D */	lis r5, __OldStack@ha
/* 801B5A34 001B2B14  38 A5 C2 2C */	addi r5, r5, __OldStack@l
/* 801B5A38 001B2B18  80 25 00 00 */	lwz r1, 0x0(r5)
/* 801B5A3C 001B2B1C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 801B5A40 001B2B20  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 801B5A44 001B2B24  38 21 00 18 */	addi r1, r1, 0x18
/* 801B5A48 001B2B28  7C 08 03 A6 */	mtlr r0
/* 801B5A4C 001B2B2C  4E 80 00 20 */	blr
.endfn __AICallbackStackSwitch

.fn __AI_SRC_INIT, local
/* 801B5A50 001B2B30  7C 08 02 A6 */	mflr r0
/* 801B5A54 001B2B34  90 01 00 04 */	stw r0, 0x4(r1)
/* 801B5A58 001B2B38  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801B5A5C 001B2B3C  BF 41 00 18 */	stmw r26, 0x18(r1)
/* 801B5A60 001B2B40  38 80 00 00 */	li r4, 0x0
/* 801B5A64 001B2B44  38 60 00 00 */	li r3, 0x0
/* 801B5A68 001B2B48  38 00 00 00 */	li r0, 0x0
/* 801B5A6C 001B2B4C  3B 80 00 00 */	li r28, 0x0
/* 801B5A70 001B2B50  3B A0 00 00 */	li r29, 0x0
/* 801B5A74 001B2B54  48 00 00 04 */	b .L_801B5A78
.L_801B5A78:
/* 801B5A78 001B2B58  3F E0 CC 00 */	lis r31, 0xcc00
/* 801B5A7C 001B2B5C  48 00 00 04 */	b .L_801B5A80
.L_801B5A80:
/* 801B5A80 001B2B60  48 00 01 64 */	b .L_801B5BE4
.L_801B5A84:
/* 801B5A84 001B2B64  80 1F 6C 00 */	lwz r0, 0x6c00(r31)
/* 801B5A88 001B2B68  3B DF 6C 00 */	addi r30, r31, 0x6c00
/* 801B5A8C 001B2B6C  3B DE 00 08 */	addi r30, r30, 0x8
/* 801B5A90 001B2B70  54 00 06 F2 */	rlwinm r0, r0, 0, 27, 25
/* 801B5A94 001B2B74  60 00 00 20 */	ori r0, r0, 0x20
/* 801B5A98 001B2B78  90 1F 6C 00 */	stw r0, 0x6c00(r31)
/* 801B5A9C 001B2B7C  80 1F 6C 00 */	lwz r0, 0x6c00(r31)
/* 801B5AA0 001B2B80  54 00 07 FA */	rlwinm r0, r0, 0, 31, 29
/* 801B5AA4 001B2B84  90 1F 6C 00 */	stw r0, 0x6c00(r31)
/* 801B5AA8 001B2B88  80 1F 6C 00 */	lwz r0, 0x6c00(r31)
/* 801B5AAC 001B2B8C  54 00 00 3C */	clrrwi r0, r0, 1
/* 801B5AB0 001B2B90  60 00 00 01 */	ori r0, r0, 0x1
/* 801B5AB4 001B2B94  90 1F 6C 00 */	stw r0, 0x6c00(r31)
/* 801B5AB8 001B2B98  80 7E 00 00 */	lwz r3, 0x0(r30)
/* 801B5ABC 001B2B9C  48 00 00 04 */	b .L_801B5AC0
.L_801B5AC0:
/* 801B5AC0 001B2BA0  48 00 00 04 */	b .L_801B5AC4
.L_801B5AC4:
/* 801B5AC4 001B2BA4  80 1E 00 00 */	lwz r0, 0x0(r30)
/* 801B5AC8 001B2BA8  7C 03 00 40 */	cmplw r3, r0
/* 801B5ACC 001B2BAC  41 82 FF F8 */	beq .L_801B5AC4
/* 801B5AD0 001B2BB0  48 02 1A 7D */	bl OSGetTime
/* 801B5AD4 001B2BB4  80 1F 6C 00 */	lwz r0, 0x6c00(r31)
/* 801B5AD8 001B2BB8  7C 9A 23 78 */	mr r26, r4
/* 801B5ADC 001B2BBC  7C 7B 1B 78 */	mr r27, r3
/* 801B5AE0 001B2BC0  54 00 07 FA */	rlwinm r0, r0, 0, 31, 29
/* 801B5AE4 001B2BC4  60 00 00 02 */	ori r0, r0, 0x2
/* 801B5AE8 001B2BC8  90 1F 6C 00 */	stw r0, 0x6c00(r31)
/* 801B5AEC 001B2BCC  80 1F 6C 00 */	lwz r0, 0x6c00(r31)
/* 801B5AF0 001B2BD0  54 00 00 3C */	clrrwi r0, r0, 1
/* 801B5AF4 001B2BD4  60 00 00 01 */	ori r0, r0, 0x1
/* 801B5AF8 001B2BD8  90 1F 6C 00 */	stw r0, 0x6c00(r31)
/* 801B5AFC 001B2BDC  80 7E 00 00 */	lwz r3, 0x0(r30)
/* 801B5B00 001B2BE0  48 00 00 04 */	b .L_801B5B04
.L_801B5B04:
/* 801B5B04 001B2BE4  48 00 00 04 */	b .L_801B5B08
.L_801B5B08:
/* 801B5B08 001B2BE8  80 1E 00 00 */	lwz r0, 0x0(r30)
/* 801B5B0C 001B2BEC  7C 03 00 40 */	cmplw r3, r0
/* 801B5B10 001B2BF0  41 82 FF F8 */	beq .L_801B5B08
/* 801B5B14 001B2BF4  48 02 1A 39 */	bl OSGetTime
/* 801B5B18 001B2BF8  7D 1A 20 10 */	subfc r8, r26, r4
/* 801B5B1C 001B2BFC  81 8D 99 3C */	lwz r12, bound_32KHz+0x4@sda21(r13)
/* 801B5B20 001B2C00  80 BF 6C 00 */	lwz r5, 0x6c00(r31)
/* 801B5B24 001B2C04  7C FB 19 10 */	subfe r7, r27, r3
/* 801B5B28 001B2C08  81 4D 99 5C */	lwz r10, buffer+0x4@sda21(r13)
/* 801B5B2C 001B2C0C  6C E7 80 00 */	xoris r7, r7, 0x8000
/* 801B5B30 001B2C10  54 A5 07 FA */	rlwinm r5, r5, 0, 31, 29
/* 801B5B34 001B2C14  81 6D 99 38 */	lwz r11, bound_32KHz@sda21(r13)
/* 801B5B38 001B2C18  7C CA 60 10 */	subfc r6, r10, r12
/* 801B5B3C 001B2C1C  81 2D 99 58 */	lwz r9, buffer@sda21(r13)
/* 801B5B40 001B2C20  90 BF 6C 00 */	stw r5, 0x6c00(r31)
/* 801B5B44 001B2C24  7C 09 59 10 */	subfe r0, r9, r11
/* 801B5B48 001B2C28  6C 05 80 00 */	xoris r5, r0, 0x8000
/* 801B5B4C 001B2C2C  7C 06 40 10 */	subfc r0, r6, r8
/* 801B5B50 001B2C30  80 1F 6C 00 */	lwz r0, 0x6c00(r31)
/* 801B5B54 001B2C34  7C A5 39 10 */	subfe r5, r5, r7
/* 801B5B58 001B2C38  7C A7 39 10 */	subfe r5, r7, r7
/* 801B5B5C 001B2C3C  7C A5 00 D0 */	neg r5, r5
/* 801B5B60 001B2C40  54 00 00 3C */	clrrwi r0, r0, 1
/* 801B5B64 001B2C44  2C 05 00 00 */	cmpwi r5, 0x0
/* 801B5B68 001B2C48  90 1F 6C 00 */	stw r0, 0x6c00(r31)
/* 801B5B6C 001B2C4C  41 82 00 14 */	beq .L_801B5B80
/* 801B5B70 001B2C50  83 AD 99 48 */	lwz r29, min_wait@sda21(r13)
/* 801B5B74 001B2C54  38 00 00 01 */	li r0, 0x1
/* 801B5B78 001B2C58  83 8D 99 4C */	lwz r28, min_wait+0x4@sda21(r13)
/* 801B5B7C 001B2C5C  48 00 00 68 */	b .L_801B5BE4
.L_801B5B80:
/* 801B5B80 001B2C60  7C CC 50 14 */	addc r6, r12, r10
/* 801B5B84 001B2C64  7C 0B 49 14 */	adde r0, r11, r9
/* 801B5B88 001B2C68  6C 05 80 00 */	xoris r5, r0, 0x8000
/* 801B5B8C 001B2C6C  7C 06 40 10 */	subfc r0, r6, r8
/* 801B5B90 001B2C70  7C A5 39 10 */	subfe r5, r5, r7
/* 801B5B94 001B2C74  7C A7 39 10 */	subfe r5, r7, r7
/* 801B5B98 001B2C78  7C A5 00 D0 */	neg r5, r5
/* 801B5B9C 001B2C7C  2C 05 00 00 */	cmpwi r5, 0x0
/* 801B5BA0 001B2C80  40 82 00 40 */	bne .L_801B5BE0
/* 801B5BA4 001B2C84  80 AD 99 44 */	lwz r5, bound_48KHz+0x4@sda21(r13)
/* 801B5BA8 001B2C88  80 0D 99 40 */	lwz r0, bound_48KHz@sda21(r13)
/* 801B5BAC 001B2C8C  7C CA 28 10 */	subfc r6, r10, r5
/* 801B5BB0 001B2C90  7C 09 01 10 */	subfe r0, r9, r0
/* 801B5BB4 001B2C94  6C 05 80 00 */	xoris r5, r0, 0x8000
/* 801B5BB8 001B2C98  7C 06 40 10 */	subfc r0, r6, r8
/* 801B5BBC 001B2C9C  7C A5 39 10 */	subfe r5, r5, r7
/* 801B5BC0 001B2CA0  7C A7 39 10 */	subfe r5, r7, r7
/* 801B5BC4 001B2CA4  7C A5 00 D0 */	neg r5, r5
/* 801B5BC8 001B2CA8  2C 05 00 00 */	cmpwi r5, 0x0
/* 801B5BCC 001B2CAC  41 82 00 14 */	beq .L_801B5BE0
/* 801B5BD0 001B2CB0  83 AD 99 50 */	lwz r29, max_wait@sda21(r13)
/* 801B5BD4 001B2CB4  38 00 00 01 */	li r0, 0x1
/* 801B5BD8 001B2CB8  83 8D 99 54 */	lwz r28, max_wait+0x4@sda21(r13)
/* 801B5BDC 001B2CBC  48 00 00 08 */	b .L_801B5BE4
.L_801B5BE0:
/* 801B5BE0 001B2CC0  38 00 00 00 */	li r0, 0x0
.L_801B5BE4:
/* 801B5BE4 001B2CC4  28 00 00 00 */	cmplwi r0, 0x0
/* 801B5BE8 001B2CC8  41 82 FE 9C */	beq .L_801B5A84
/* 801B5BEC 001B2CCC  7F 64 E0 14 */	addc r27, r4, r28
/* 801B5BF0 001B2CD0  7F 43 E9 14 */	adde r26, r3, r29
/* 801B5BF4 001B2CD4  48 00 00 04 */	b .L_801B5BF8
.L_801B5BF8:
/* 801B5BF8 001B2CD8  48 00 00 04 */	b .L_801B5BFC
.L_801B5BFC:
/* 801B5BFC 001B2CDC  48 02 19 51 */	bl OSGetTime
/* 801B5C00 001B2CE0  6C 65 80 00 */	xoris r5, r3, 0x8000
/* 801B5C04 001B2CE4  6F 43 80 00 */	xoris r3, r26, 0x8000
/* 801B5C08 001B2CE8  7C 1B 20 10 */	subfc r0, r27, r4
/* 801B5C0C 001B2CEC  7C 63 29 10 */	subfe r3, r3, r5
/* 801B5C10 001B2CF0  7C 65 29 10 */	subfe r3, r5, r5
/* 801B5C14 001B2CF4  7C 63 00 D0 */	neg r3, r3
/* 801B5C18 001B2CF8  2C 03 00 00 */	cmpwi r3, 0x0
/* 801B5C1C 001B2CFC  40 82 FF E0 */	bne .L_801B5BFC
/* 801B5C20 001B2D00  BB 41 00 18 */	lmw r26, 0x18(r1)
/* 801B5C24 001B2D04  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801B5C28 001B2D08  38 21 00 30 */	addi r1, r1, 0x30
/* 801B5C2C 001B2D0C  7C 08 03 A6 */	mtlr r0
/* 801B5C30 001B2D10  4E 80 00 20 */	blr
.endfn __AI_SRC_INIT

# 0x802B03C0 - 0x802B0408
.data
.balign 8
.sym ...data.0, local

.obj "@1", local
	.4byte 0x3C3C2044
	.4byte 0x6F6C7068
	.4byte 0x696E2053
	.4byte 0x444B202D
	.4byte 0x20414909
	.4byte 0x72656C65
	.4byte 0x61736520
	.4byte 0x6275696C
	.4byte 0x643A2041
	.4byte 0x70722031
	.4byte 0x37203230
	.4byte 0x30332031
	.4byte 0x323A3333
	.4byte 0x3A353420
	.4byte 0x28307832
	.4byte 0x33303129
	.4byte 0x203E3E00
.endobj "@1"
	.4byte 0x00000000

# 0x803CAE48 - 0x803CAE50
.section .sdata, "wa"
.balign 8

.obj __AIVersion, global
	.4byte ...data.0
.endobj __AIVersion
	.4byte 0x00000000

# 0x803CC220 - 0x803CC260
.section .sbss, "wa", @nobits
.balign 8

.obj __AIS_Callback, local
	.skip 0x4
.endobj __AIS_Callback

.obj __AID_Callback, local
	.skip 0x4
.endobj __AID_Callback

.obj __CallbackStack, local
	.skip 0x4
.endobj __CallbackStack

.obj __OldStack, local
	.skip 0x4
.endobj __OldStack

.obj __AI_init_flag, local
	.skip 0x4
.endobj __AI_init_flag

.obj __AID_Active, local
	.skip 0x4
.endobj __AID_Active

.obj bound_32KHz, local
	.skip 0x8
.endobj bound_32KHz

.obj bound_48KHz, local
	.skip 0x8
.endobj bound_48KHz

.obj min_wait, local
	.skip 0x8
.endobj min_wait

.obj max_wait, local
	.skip 0x8
.endobj max_wait

.obj buffer, local
	.skip 0x8
.endobj buffer
