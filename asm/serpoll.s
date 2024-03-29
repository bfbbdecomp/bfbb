.include "macros.inc"
.file "serpoll.c"

# 0x801F03EC - 0x801F07B8
.text
.balign 4

.fn TRKTerminateSerialHandler, global
/* 801F03EC 001ED4CC  38 60 00 00 */	li r3, 0x0
/* 801F03F0 001ED4D0  4E 80 00 20 */	blr
.endfn TRKTerminateSerialHandler

.fn TRKInitializeSerialHandler, global
/* 801F03F4 001ED4D4  3C 60 80 38 */	lis r3, gTRKFramingState@ha
/* 801F03F8 001ED4D8  38 A0 FF FF */	li r5, -0x1
/* 801F03FC 001ED4DC  38 83 0C AC */	addi r4, r3, gTRKFramingState@l
/* 801F0400 001ED4E0  38 00 00 00 */	li r0, 0x0
/* 801F0404 001ED4E4  90 A4 00 00 */	stw r5, 0x0(r4)
/* 801F0408 001ED4E8  38 60 00 00 */	li r3, 0x0
/* 801F040C 001ED4EC  98 04 00 08 */	stb r0, 0x8(r4)
/* 801F0410 001ED4F0  90 04 00 0C */	stw r0, 0xc(r4)
/* 801F0414 001ED4F4  4E 80 00 20 */	blr
.endfn TRKInitializeSerialHandler

.fn TRKProcessInput, global
/* 801F0418 001ED4F8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801F041C 001ED4FC  7C 08 02 A6 */	mflr r0
/* 801F0420 001ED500  38 80 00 02 */	li r4, 0x2
/* 801F0424 001ED504  90 01 00 24 */	stw r0, 0x24(r1)
/* 801F0428 001ED508  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801F042C 001ED50C  7C 7F 1B 78 */	mr r31, r3
/* 801F0430 001ED510  38 61 00 08 */	addi r3, r1, 0x8
/* 801F0434 001ED514  4B FF EE 79 */	bl TRKConstructEvent
/* 801F0438 001ED518  3C 60 80 38 */	lis r3, gTRKFramingState@ha
/* 801F043C 001ED51C  38 00 FF FF */	li r0, -0x1
/* 801F0440 001ED520  38 83 0C AC */	addi r4, r3, gTRKFramingState@l
/* 801F0444 001ED524  93 E1 00 10 */	stw r31, 0x10(r1)
/* 801F0448 001ED528  38 61 00 08 */	addi r3, r1, 0x8
/* 801F044C 001ED52C  90 04 00 00 */	stw r0, 0x0(r4)
/* 801F0450 001ED530  4B FF EE 75 */	bl TRKPostEvent
/* 801F0454 001ED534  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801F0458 001ED538  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801F045C 001ED53C  7C 08 03 A6 */	mtlr r0
/* 801F0460 001ED540  38 21 00 20 */	addi r1, r1, 0x20
/* 801F0464 001ED544  4E 80 00 20 */	blr
.endfn TRKProcessInput

.fn TRKGetInput, global
/* 801F0468 001ED548  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801F046C 001ED54C  7C 08 02 A6 */	mflr r0
/* 801F0470 001ED550  90 01 00 24 */	stw r0, 0x24(r1)
/* 801F0474 001ED554  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801F0478 001ED558  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801F047C 001ED55C  48 00 00 85 */	bl TRKTestForPacket
/* 801F0480 001ED560  7C 7E 1B 78 */	mr r30, r3
/* 801F0484 001ED564  2C 1E FF FF */	cmpwi r30, -0x1
/* 801F0488 001ED568  41 82 00 60 */	beq .L_801F04E8
/* 801F048C 001ED56C  4B FF FD F9 */	bl TRKGetBuffer
/* 801F0490 001ED570  38 80 00 00 */	li r4, 0x0
/* 801F0494 001ED574  7C 7F 1B 78 */	mr r31, r3
/* 801F0498 001ED578  4B FF FD 19 */	bl TRKSetBufferPosition
/* 801F049C 001ED57C  7F E3 FB 78 */	mr r3, r31
/* 801F04A0 001ED580  38 81 00 08 */	addi r4, r1, 0x8
/* 801F04A4 001ED584  4B FF F7 5D */	bl TRKReadBuffer1_ui8
/* 801F04A8 001ED588  88 01 00 08 */	lbz r0, 0x8(r1)
/* 801F04AC 001ED58C  28 00 00 80 */	cmplwi r0, 0x80
/* 801F04B0 001ED590  40 80 00 30 */	bge .L_801F04E0
/* 801F04B4 001ED594  38 61 00 0C */	addi r3, r1, 0xc
/* 801F04B8 001ED598  38 80 00 02 */	li r4, 0x2
/* 801F04BC 001ED59C  4B FF ED F1 */	bl TRKConstructEvent
/* 801F04C0 001ED5A0  3C 60 80 38 */	lis r3, gTRKFramingState@ha
/* 801F04C4 001ED5A4  38 00 FF FF */	li r0, -0x1
/* 801F04C8 001ED5A8  38 83 0C AC */	addi r4, r3, gTRKFramingState@l
/* 801F04CC 001ED5AC  93 C1 00 14 */	stw r30, 0x14(r1)
/* 801F04D0 001ED5B0  38 61 00 0C */	addi r3, r1, 0xc
/* 801F04D4 001ED5B4  90 04 00 00 */	stw r0, 0x0(r4)
/* 801F04D8 001ED5B8  4B FF ED ED */	bl TRKPostEvent
/* 801F04DC 001ED5BC  48 00 00 0C */	b .L_801F04E8
.L_801F04E0:
/* 801F04E0 001ED5C0  7F C3 F3 78 */	mr r3, r30
/* 801F04E4 001ED5C4  4B FF FD 3D */	bl TRKReleaseBuffer
.L_801F04E8:
/* 801F04E8 001ED5C8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801F04EC 001ED5CC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801F04F0 001ED5D0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801F04F4 001ED5D4  7C 08 03 A6 */	mtlr r0
/* 801F04F8 001ED5D8  38 21 00 20 */	addi r1, r1, 0x20
/* 801F04FC 001ED5DC  4E 80 00 20 */	blr
.endfn TRKGetInput

.fn TRKTestForPacket, global
/* 801F0500 001ED5E0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801F0504 001ED5E4  7C 08 02 A6 */	mflr r0
/* 801F0508 001ED5E8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801F050C 001ED5EC  38 61 00 08 */	addi r3, r1, 0x8
/* 801F0510 001ED5F0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801F0514 001ED5F4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801F0518 001ED5F8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801F051C 001ED5FC  3B A0 00 00 */	li r29, 0x0
/* 801F0520 001ED600  48 00 58 E9 */	bl TRKReadUARTPoll
/* 801F0524 001ED604  3C 80 80 38 */	lis r4, gTRKFramingState@ha
/* 801F0528 001ED608  3B E4 0C AC */	addi r31, r4, gTRKFramingState@l
/* 801F052C 001ED60C  3B DF 00 04 */	addi r30, r31, 0x4
/* 801F0530 001ED610  48 00 02 58 */	b .L_801F0788
.L_801F0534:
/* 801F0534 001ED614  88 1F 00 08 */	lbz r0, 0x8(r31)
/* 801F0538 001ED618  28 00 00 02 */	cmplwi r0, 0x2
/* 801F053C 001ED61C  41 82 00 0C */	beq .L_801F0548
/* 801F0540 001ED620  38 00 00 00 */	li r0, 0x0
/* 801F0544 001ED624  90 1F 00 0C */	stw r0, 0xc(r31)
.L_801F0548:
/* 801F0548 001ED628  88 1F 00 08 */	lbz r0, 0x8(r31)
/* 801F054C 001ED62C  2C 00 00 02 */	cmpwi r0, 0x2
/* 801F0550 001ED630  41 82 00 6C */	beq .L_801F05BC
/* 801F0554 001ED634  40 80 00 14 */	bge .L_801F0568
/* 801F0558 001ED638  2C 00 00 00 */	cmpwi r0, 0x0
/* 801F055C 001ED63C  41 82 00 18 */	beq .L_801F0574
/* 801F0560 001ED640  40 80 00 48 */	bge .L_801F05A8
/* 801F0564 001ED644  48 00 02 1C */	b .L_801F0780
.L_801F0568:
/* 801F0568 001ED648  2C 00 00 04 */	cmpwi r0, 0x4
/* 801F056C 001ED64C  40 80 02 14 */	bge .L_801F0780
/* 801F0570 001ED650  48 00 01 D4 */	b .L_801F0744
.L_801F0574:
/* 801F0574 001ED654  88 01 00 08 */	lbz r0, 0x8(r1)
/* 801F0578 001ED658  2C 00 00 7E */	cmpwi r0, 0x7e
/* 801F057C 001ED65C  40 82 02 04 */	bne .L_801F0780
/* 801F0580 001ED660  3C 60 80 38 */	lis r3, gTRKFramingState@ha
/* 801F0584 001ED664  7F C4 F3 78 */	mr r4, r30
/* 801F0588 001ED668  38 63 0C AC */	addi r3, r3, gTRKFramingState@l
/* 801F058C 001ED66C  4B FF FD 25 */	bl TRKGetFreeBuffer
/* 801F0590 001ED670  38 80 00 00 */	li r4, 0x0
/* 801F0594 001ED674  38 00 00 01 */	li r0, 0x1
/* 801F0598 001ED678  98 9F 00 10 */	stb r4, 0x10(r31)
/* 801F059C 001ED67C  7C 7D 1B 78 */	mr r29, r3
/* 801F05A0 001ED680  98 1F 00 08 */	stb r0, 0x8(r31)
/* 801F05A4 001ED684  48 00 01 DC */	b .L_801F0780
.L_801F05A8:
/* 801F05A8 001ED688  88 01 00 08 */	lbz r0, 0x8(r1)
/* 801F05AC 001ED68C  2C 00 00 7E */	cmpwi r0, 0x7e
/* 801F05B0 001ED690  41 82 01 D0 */	beq .L_801F0780
/* 801F05B4 001ED694  38 00 00 02 */	li r0, 0x2
/* 801F05B8 001ED698  98 1F 00 08 */	stb r0, 0x8(r31)
.L_801F05BC:
/* 801F05BC 001ED69C  88 81 00 08 */	lbz r4, 0x8(r1)
/* 801F05C0 001ED6A0  7C 83 07 74 */	extsb r3, r4
/* 801F05C4 001ED6A4  2C 03 00 7E */	cmpwi r3, 0x7e
/* 801F05C8 001ED6A8  40 82 00 F4 */	bne .L_801F06BC
/* 801F05CC 001ED6AC  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 801F05D0 001ED6B0  2C 00 00 00 */	cmpwi r0, 0x0
/* 801F05D4 001ED6B4  41 82 00 48 */	beq .L_801F061C
/* 801F05D8 001ED6B8  80 7E 00 00 */	lwz r3, 0x0(r30)
/* 801F05DC 001ED6BC  38 80 00 FF */	li r4, 0xff
/* 801F05E0 001ED6C0  38 A0 00 04 */	li r5, 0x4
/* 801F05E4 001ED6C4  48 00 2A 89 */	bl TRKStandardACK
/* 801F05E8 001ED6C8  3C 60 80 38 */	lis r3, gTRKFramingState@ha
/* 801F05EC 001ED6CC  38 63 0C AC */	addi r3, r3, gTRKFramingState@l
/* 801F05F0 001ED6D0  80 63 00 00 */	lwz r3, 0x0(r3)
/* 801F05F4 001ED6D4  2C 03 FF FF */	cmpwi r3, -0x1
/* 801F05F8 001ED6D8  41 82 00 14 */	beq .L_801F060C
/* 801F05FC 001ED6DC  4B FF FC 25 */	bl TRKReleaseBuffer
/* 801F0600 001ED6E0  3C 60 80 38 */	lis r3, gTRKFramingState@ha
/* 801F0604 001ED6E4  38 00 FF FF */	li r0, -0x1
/* 801F0608 001ED6E8  90 03 0C AC */	stw r0, gTRKFramingState@l(r3)
.L_801F060C:
/* 801F060C 001ED6EC  38 00 00 00 */	li r0, 0x0
/* 801F0610 001ED6F0  90 1E 00 00 */	stw r0, 0x0(r30)
/* 801F0614 001ED6F4  98 1F 00 08 */	stb r0, 0x8(r31)
/* 801F0618 001ED6F8  48 00 01 68 */	b .L_801F0780
.L_801F061C:
/* 801F061C 001ED6FC  80 7E 00 00 */	lwz r3, 0x0(r30)
/* 801F0620 001ED700  80 03 00 08 */	lwz r0, 0x8(r3)
/* 801F0624 001ED704  28 00 00 02 */	cmplwi r0, 0x2
/* 801F0628 001ED708  40 80 00 44 */	bge .L_801F066C
/* 801F062C 001ED70C  38 80 00 FF */	li r4, 0xff
/* 801F0630 001ED710  38 A0 00 02 */	li r5, 0x2
/* 801F0634 001ED714  48 00 2A 39 */	bl TRKStandardACK
/* 801F0638 001ED718  3C 60 80 38 */	lis r3, gTRKFramingState@ha
/* 801F063C 001ED71C  38 63 0C AC */	addi r3, r3, gTRKFramingState@l
/* 801F0640 001ED720  80 63 00 00 */	lwz r3, 0x0(r3)
/* 801F0644 001ED724  2C 03 FF FF */	cmpwi r3, -0x1
/* 801F0648 001ED728  41 82 00 14 */	beq .L_801F065C
/* 801F064C 001ED72C  4B FF FB D5 */	bl TRKReleaseBuffer
/* 801F0650 001ED730  3C 60 80 38 */	lis r3, gTRKFramingState@ha
/* 801F0654 001ED734  38 00 FF FF */	li r0, -0x1
/* 801F0658 001ED738  90 03 0C AC */	stw r0, gTRKFramingState@l(r3)
.L_801F065C:
/* 801F065C 001ED73C  38 A0 00 00 */	li r5, 0x0
/* 801F0660 001ED740  90 BE 00 00 */	stw r5, 0x0(r30)
/* 801F0664 001ED744  98 BF 00 08 */	stb r5, 0x8(r31)
/* 801F0668 001ED748  48 00 00 1C */	b .L_801F0684
.L_801F066C:
/* 801F066C 001ED74C  38 00 00 00 */	li r0, 0x0
/* 801F0670 001ED750  38 A0 00 01 */	li r5, 0x1
/* 801F0674 001ED754  90 03 00 0C */	stw r0, 0xc(r3)
/* 801F0678 001ED758  80 83 00 08 */	lwz r4, 0x8(r3)
/* 801F067C 001ED75C  38 04 FF FF */	addi r0, r4, -0x1
/* 801F0680 001ED760  90 03 00 08 */	stw r0, 0x8(r3)
.L_801F0684:
/* 801F0684 001ED764  2C 05 00 00 */	cmpwi r5, 0x0
/* 801F0688 001ED768  41 82 00 28 */	beq .L_801F06B0
/* 801F068C 001ED76C  3C 60 80 38 */	lis r3, gTRKFramingState@ha
/* 801F0690 001ED770  38 00 00 00 */	li r0, 0x0
/* 801F0694 001ED774  38 A3 0C AC */	addi r5, r3, gTRKFramingState@l
/* 801F0698 001ED778  38 80 FF FF */	li r4, -0x1
/* 801F069C 001ED77C  80 65 00 00 */	lwz r3, 0x0(r5)
/* 801F06A0 001ED780  90 1E 00 00 */	stw r0, 0x0(r30)
/* 801F06A4 001ED784  90 85 00 00 */	stw r4, 0x0(r5)
/* 801F06A8 001ED788  98 1F 00 08 */	stb r0, 0x8(r31)
/* 801F06AC 001ED78C  48 00 00 F0 */	b .L_801F079C
.L_801F06B0:
/* 801F06B0 001ED790  38 00 00 00 */	li r0, 0x0
/* 801F06B4 001ED794  98 1F 00 08 */	stb r0, 0x8(r31)
/* 801F06B8 001ED798  48 00 00 C8 */	b .L_801F0780
.L_801F06BC:
/* 801F06BC 001ED79C  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 801F06C0 001ED7A0  2C 00 00 00 */	cmpwi r0, 0x0
/* 801F06C4 001ED7A4  41 82 00 18 */	beq .L_801F06DC
/* 801F06C8 001ED7A8  68 83 00 20 */	xori r3, r4, 0x20
/* 801F06CC 001ED7AC  38 00 00 00 */	li r0, 0x0
/* 801F06D0 001ED7B0  98 61 00 08 */	stb r3, 0x8(r1)
/* 801F06D4 001ED7B4  90 1F 00 0C */	stw r0, 0xc(r31)
/* 801F06D8 001ED7B8  48 00 00 18 */	b .L_801F06F0
.L_801F06DC:
/* 801F06DC 001ED7BC  2C 03 00 7D */	cmpwi r3, 0x7d
/* 801F06E0 001ED7C0  40 82 00 10 */	bne .L_801F06F0
/* 801F06E4 001ED7C4  38 00 00 01 */	li r0, 0x1
/* 801F06E8 001ED7C8  90 1F 00 0C */	stw r0, 0xc(r31)
/* 801F06EC 001ED7CC  48 00 00 94 */	b .L_801F0780
.L_801F06F0:
/* 801F06F0 001ED7D0  80 DE 00 00 */	lwz r6, 0x0(r30)
/* 801F06F4 001ED7D4  88 A1 00 08 */	lbz r5, 0x8(r1)
/* 801F06F8 001ED7D8  80 86 00 0C */	lwz r4, 0xc(r6)
/* 801F06FC 001ED7DC  28 04 08 80 */	cmplwi r4, 0x880
/* 801F0700 001ED7E0  41 80 00 0C */	blt .L_801F070C
/* 801F0704 001ED7E4  38 80 03 01 */	li r4, 0x301
/* 801F0708 001ED7E8  48 00 00 24 */	b .L_801F072C
.L_801F070C:
/* 801F070C 001ED7EC  38 64 00 01 */	addi r3, r4, 0x1
/* 801F0710 001ED7F0  38 04 00 10 */	addi r0, r4, 0x10
/* 801F0714 001ED7F4  90 66 00 0C */	stw r3, 0xc(r6)
/* 801F0718 001ED7F8  38 80 00 00 */	li r4, 0x0
/* 801F071C 001ED7FC  7C A6 01 AE */	stbx r5, r6, r0
/* 801F0720 001ED800  80 66 00 08 */	lwz r3, 0x8(r6)
/* 801F0724 001ED804  38 03 00 01 */	addi r0, r3, 0x1
/* 801F0728 001ED808  90 06 00 08 */	stw r0, 0x8(r6)
.L_801F072C:
/* 801F072C 001ED80C  88 7F 00 10 */	lbz r3, 0x10(r31)
/* 801F0730 001ED810  7C 9D 23 78 */	mr r29, r4
/* 801F0734 001ED814  88 01 00 08 */	lbz r0, 0x8(r1)
/* 801F0738 001ED818  7C 03 02 14 */	add r0, r3, r0
/* 801F073C 001ED81C  98 1F 00 10 */	stb r0, 0x10(r31)
/* 801F0740 001ED820  48 00 00 40 */	b .L_801F0780
.L_801F0744:
/* 801F0744 001ED824  88 01 00 08 */	lbz r0, 0x8(r1)
/* 801F0748 001ED828  2C 00 00 7E */	cmpwi r0, 0x7e
/* 801F074C 001ED82C  40 82 00 34 */	bne .L_801F0780
/* 801F0750 001ED830  3C 60 80 38 */	lis r3, gTRKFramingState@ha
/* 801F0754 001ED834  38 63 0C AC */	addi r3, r3, gTRKFramingState@l
/* 801F0758 001ED838  80 63 00 00 */	lwz r3, 0x0(r3)
/* 801F075C 001ED83C  2C 03 FF FF */	cmpwi r3, -0x1
/* 801F0760 001ED840  41 82 00 14 */	beq .L_801F0774
/* 801F0764 001ED844  4B FF FA BD */	bl TRKReleaseBuffer
/* 801F0768 001ED848  3C 60 80 38 */	lis r3, gTRKFramingState@ha
/* 801F076C 001ED84C  38 00 FF FF */	li r0, -0x1
/* 801F0770 001ED850  90 03 0C AC */	stw r0, gTRKFramingState@l(r3)
.L_801F0774:
/* 801F0774 001ED854  38 00 00 00 */	li r0, 0x0
/* 801F0778 001ED858  90 1E 00 00 */	stw r0, 0x0(r30)
/* 801F077C 001ED85C  98 1F 00 08 */	stb r0, 0x8(r31)
.L_801F0780:
/* 801F0780 001ED860  38 61 00 08 */	addi r3, r1, 0x8
/* 801F0784 001ED864  48 00 56 85 */	bl TRKReadUARTPoll
.L_801F0788:
/* 801F0788 001ED868  2C 03 00 00 */	cmpwi r3, 0x0
/* 801F078C 001ED86C  40 82 00 0C */	bne .L_801F0798
/* 801F0790 001ED870  2C 1D 00 00 */	cmpwi r29, 0x0
/* 801F0794 001ED874  41 82 FD A0 */	beq .L_801F0534
.L_801F0798:
/* 801F0798 001ED878  38 60 FF FF */	li r3, -0x1
.L_801F079C:
/* 801F079C 001ED87C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801F07A0 001ED880  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801F07A4 001ED884  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801F07A8 001ED888  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801F07AC 001ED88C  7C 08 03 A6 */	mtlr r0
/* 801F07B0 001ED890  38 21 00 20 */	addi r1, r1, 0x20
/* 801F07B4 001ED894  4E 80 00 20 */	blr
.endfn TRKTestForPacket

# 0x80380CA8 - 0x80380CC0
.section .bss, "wa", @nobits
.balign 8

.obj gTRKInputPendingPtr, global
	.skip 0x4
.endobj gTRKInputPendingPtr

.obj gTRKFramingState, local
	.skip 0x14
.endobj gTRKFramingState
