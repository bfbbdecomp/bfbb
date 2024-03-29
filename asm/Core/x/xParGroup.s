.include "macros.inc"
.file "xParGroup.cpp"

# 0x80038428 - 0x80038AD4
.text
.balign 4

# xParGroupInit(xParGroup*)
.fn xParGroupInit__FP9xParGroup, global
/* 80038428 00035508  38 80 00 00 */	li r4, 0x0
/* 8003842C 0003550C  38 00 00 01 */	li r0, 0x1
/* 80038430 00035510  90 83 00 00 */	stw r4, 0x0(r3)
/* 80038434 00035514  90 83 00 04 */	stw r4, 0x4(r3)
/* 80038438 00035518  98 83 00 0C */	stb r4, 0xc(r3)
/* 8003843C 0003551C  90 83 00 08 */	stw r4, 0x8(r3)
/* 80038440 00035520  98 83 00 0D */	stb r4, 0xd(r3)
/* 80038444 00035524  98 83 00 12 */	stb r4, 0x12(r3)
/* 80038448 00035528  98 03 00 0E */	stb r0, 0xe(r3)
/* 8003844C 0003552C  98 83 00 10 */	stb r4, 0x10(r3)
/* 80038450 00035530  98 03 00 0F */	stb r0, 0xf(r3)
/* 80038454 00035534  90 83 00 20 */	stw r4, 0x20(r3)
/* 80038458 00035538  98 83 00 11 */	stb r4, 0x11(r3)
/* 8003845C 0003553C  90 83 00 14 */	stw r4, 0x14(r3)
/* 80038460 00035540  90 83 00 18 */	stw r4, 0x18(r3)
/* 80038464 00035544  88 03 00 12 */	lbz r0, 0x12(r3)
/* 80038468 00035548  60 00 00 02 */	ori r0, r0, 0x2
/* 8003846C 0003554C  98 03 00 12 */	stb r0, 0x12(r3)
/* 80038470 00035550  88 03 00 12 */	lbz r0, 0x12(r3)
/* 80038474 00035554  60 00 00 01 */	ori r0, r0, 0x1
/* 80038478 00035558  98 03 00 12 */	stb r0, 0x12(r3)
/* 8003847C 0003555C  4E 80 00 20 */	blr
.endfn xParGroupInit__FP9xParGroup

# xParGroupRegisterInit()
.fn xParGroupRegisterInit__Fv, local
/* 80038480 00035560  3C 60 80 3C */	lis r3, sParGroupRegTable@ha
/* 80038484 00035564  38 00 00 1F */	li r0, 0x1f
/* 80038488 00035568  38 83 BC B4 */	addi r4, r3, sParGroupRegTable@l
/* 8003848C 0003556C  38 A0 00 00 */	li r5, 0x0
/* 80038490 00035570  38 60 00 00 */	li r3, 0x0
/* 80038494 00035574  7C 09 03 A6 */	mtctr r0
.L_80038498:
/* 80038498 00035578  90 64 00 00 */	stw r3, 0x0(r4)
/* 8003849C 0003557C  38 A5 00 08 */	addi r5, r5, 0x8
/* 800384A0 00035580  90 64 00 04 */	stw r3, 0x4(r4)
/* 800384A4 00035584  90 64 00 08 */	stw r3, 0x8(r4)
/* 800384A8 00035588  90 64 00 0C */	stw r3, 0xc(r4)
/* 800384AC 0003558C  90 64 00 10 */	stw r3, 0x10(r4)
/* 800384B0 00035590  90 64 00 14 */	stw r3, 0x14(r4)
/* 800384B4 00035594  90 64 00 18 */	stw r3, 0x18(r4)
/* 800384B8 00035598  90 64 00 1C */	stw r3, 0x1c(r4)
/* 800384BC 0003559C  38 84 00 20 */	addi r4, r4, 0x20
/* 800384C0 000355A0  42 00 FF D8 */	bdnz .L_80038498
/* 800384C4 000355A4  3C 60 80 3C */	lis r3, sParGroupRegTable@ha
/* 800384C8 000355A8  54 A4 10 3A */	slwi r4, r5, 2
/* 800384CC 000355AC  38 63 BC B4 */	addi r3, r3, sParGroupRegTable@l
/* 800384D0 000355B0  20 05 00 FF */	subfic r0, r5, 0xff
/* 800384D4 000355B4  7C 83 22 14 */	add r4, r3, r4
/* 800384D8 000355B8  38 60 00 00 */	li r3, 0x0
/* 800384DC 000355BC  7C 09 03 A6 */	mtctr r0
/* 800384E0 000355C0  2C 05 00 FF */	cmpwi r5, 0xff
/* 800384E4 000355C4  40 80 00 10 */	bge .L_800384F4
.L_800384E8:
/* 800384E8 000355C8  90 64 00 00 */	stw r3, 0x0(r4)
/* 800384EC 000355CC  38 84 00 04 */	addi r4, r4, 0x4
/* 800384F0 000355D0  42 00 FF F8 */	bdnz .L_800384E8
.L_800384F4:
/* 800384F4 000355D4  38 60 00 01 */	li r3, 0x1
/* 800384F8 000355D8  38 00 00 00 */	li r0, 0x0
/* 800384FC 000355DC  90 6D 8A 18 */	stw r3, sParGroupRegTableInit@sda21(r13)
/* 80038500 000355E0  90 0D 8A 1C */	stw r0, sParGroupRegTableCount@sda21(r13)
/* 80038504 000355E4  4E 80 00 20 */	blr
.endfn xParGroupRegisterInit__Fv

# xParGroupSetAging(xParGroup*, int)
.fn xParGroupSetAging__FP9xParGroupi, global
/* 80038508 000355E8  2C 04 00 00 */	cmpwi r4, 0x0
/* 8003850C 000355EC  41 82 00 1C */	beq .L_80038528
/* 80038510 000355F0  88 83 00 12 */	lbz r4, 0x12(r3)
/* 80038514 000355F4  54 80 07 7B */	rlwinm. r0, r4, 0, 29, 29
/* 80038518 000355F8  4D 82 00 20 */	beqlr
/* 8003851C 000355FC  68 80 00 04 */	xori r0, r4, 0x4
/* 80038520 00035600  98 03 00 12 */	stb r0, 0x12(r3)
/* 80038524 00035604  4E 80 00 20 */	blr
.L_80038528:
/* 80038528 00035608  88 03 00 12 */	lbz r0, 0x12(r3)
/* 8003852C 0003560C  60 00 00 04 */	ori r0, r0, 0x4
/* 80038530 00035610  98 03 00 12 */	stb r0, 0x12(r3)
/* 80038534 00035614  4E 80 00 20 */	blr
.endfn xParGroupSetAging__FP9xParGroupi

# xParGroupSetBack2Life(xParGroup*, int)
.fn xParGroupSetBack2Life__FP9xParGroupi, global
/* 80038538 00035618  2C 04 00 00 */	cmpwi r4, 0x0
/* 8003853C 0003561C  41 82 00 1C */	beq .L_80038558
/* 80038540 00035620  88 83 00 12 */	lbz r4, 0x12(r3)
/* 80038544 00035624  54 80 07 39 */	rlwinm. r0, r4, 0, 28, 28
/* 80038548 00035628  4D 82 00 20 */	beqlr
/* 8003854C 0003562C  68 80 00 08 */	xori r0, r4, 0x8
/* 80038550 00035630  98 03 00 12 */	stb r0, 0x12(r3)
/* 80038554 00035634  4E 80 00 20 */	blr
.L_80038558:
/* 80038558 00035638  88 03 00 12 */	lbz r0, 0x12(r3)
/* 8003855C 0003563C  60 00 00 08 */	ori r0, r0, 0x8
/* 80038560 00035640  98 03 00 12 */	stb r0, 0x12(r3)
/* 80038564 00035644  4E 80 00 20 */	blr
.endfn xParGroupSetBack2Life__FP9xParGroupi

# xParGroupSetVisibility(xParGroup*, int)
.fn xParGroupSetVisibility__FP9xParGroupi, global
/* 80038568 00035648  98 83 00 0F */	stb r4, 0xf(r3)
/* 8003856C 0003564C  4E 80 00 20 */	blr
.endfn xParGroupSetVisibility__FP9xParGroupi

# xParGroupSetPriority(xParGroup*, unsigned char)
.fn xParGroupSetPriority__FP9xParGroupUc, global
/* 80038570 00035650  98 83 00 11 */	stb r4, 0x11(r3)
/* 80038574 00035654  4E 80 00 20 */	blr
.endfn xParGroupSetPriority__FP9xParGroupUc

# xParGroupRegister(xParGroup*)
.fn xParGroupRegister__FP9xParGroup, global
/* 80038578 00035658  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8003857C 0003565C  7C 08 02 A6 */	mflr r0
/* 80038580 00035660  90 01 00 14 */	stw r0, 0x14(r1)
/* 80038584 00035664  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80038588 00035668  7C 7F 1B 78 */	mr r31, r3
/* 8003858C 0003566C  80 0D 8A 18 */	lwz r0, sParGroupRegTableInit@sda21(r13)
/* 80038590 00035670  2C 00 00 00 */	cmpwi r0, 0x0
/* 80038594 00035674  40 82 00 08 */	bne .L_8003859C
/* 80038598 00035678  4B FF FE E9 */	bl xParGroupRegisterInit__Fv
.L_8003859C:
/* 8003859C 0003567C  3C 60 80 3C */	lis r3, sParGroupRegTable@ha
/* 800385A0 00035680  38 A0 00 00 */	li r5, 0x0
/* 800385A4 00035684  38 63 BC B4 */	addi r3, r3, sParGroupRegTable@l
/* 800385A8 00035688  48 00 00 34 */	b .L_800385DC
.L_800385AC:
/* 800385AC 0003568C  54 A0 15 BA */	clrlslwi r0, r5, 24, 2
/* 800385B0 00035690  54 A4 06 3E */	clrlwi r4, r5, 24
/* 800385B4 00035694  7C 03 00 2E */	lwzx r0, r3, r0
/* 800385B8 00035698  28 00 00 00 */	cmplwi r0, 0x0
/* 800385BC 0003569C  40 82 00 1C */	bne .L_800385D8
/* 800385C0 000356A0  3C 60 80 3C */	lis r3, sParGroupRegTable@ha
/* 800385C4 000356A4  54 80 10 3A */	slwi r0, r4, 2
/* 800385C8 000356A8  38 63 BC B4 */	addi r3, r3, sParGroupRegTable@l
/* 800385CC 000356AC  7F E3 01 2E */	stwx r31, r3, r0
/* 800385D0 000356B0  98 BF 00 13 */	stb r5, 0x13(r31)
/* 800385D4 000356B4  48 00 00 14 */	b .L_800385E8
.L_800385D8:
/* 800385D8 000356B8  38 A5 00 01 */	addi r5, r5, 0x1
.L_800385DC:
/* 800385DC 000356BC  54 A0 06 3E */	clrlwi r0, r5, 24
/* 800385E0 000356C0  28 00 00 FF */	cmplwi r0, 0xff
/* 800385E4 000356C4  41 80 FF C8 */	blt .L_800385AC
.L_800385E8:
/* 800385E8 000356C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800385EC 000356CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800385F0 000356D0  7C 08 03 A6 */	mtlr r0
/* 800385F4 000356D4  38 21 00 10 */	addi r1, r1, 0x10
/* 800385F8 000356D8  4E 80 00 20 */	blr
.endfn xParGroupRegister__FP9xParGroup

# xParGroupUnregister(xParGroup*)
.fn xParGroupUnregister__FP9xParGroup, global
/* 800385FC 000356DC  3C 80 80 3C */	lis r4, sParGroupRegTable@ha
/* 80038600 000356E0  38 C0 00 00 */	li r6, 0x0
/* 80038604 000356E4  38 84 BC B4 */	addi r4, r4, sParGroupRegTable@l
/* 80038608 000356E8  48 00 00 38 */	b .L_80038640
.L_8003860C:
/* 8003860C 000356EC  54 C0 15 BA */	clrlslwi r0, r6, 24, 2
/* 80038610 000356F0  54 C5 06 3E */	clrlwi r5, r6, 24
/* 80038614 000356F4  7C 04 00 2E */	lwzx r0, r4, r0
/* 80038618 000356F8  7C 00 18 40 */	cmplw r0, r3
/* 8003861C 000356FC  40 82 00 20 */	bne .L_8003863C
/* 80038620 00035700  3C 80 80 3C */	lis r4, sParGroupRegTable@ha
/* 80038624 00035704  54 A0 10 3A */	slwi r0, r5, 2
/* 80038628 00035708  38 84 BC B4 */	addi r4, r4, sParGroupRegTable@l
/* 8003862C 0003570C  38 A0 00 00 */	li r5, 0x0
/* 80038630 00035710  7C A4 01 2E */	stwx r5, r4, r0
/* 80038634 00035714  98 A3 00 13 */	stb r5, 0x13(r3)
/* 80038638 00035718  4E 80 00 20 */	blr
.L_8003863C:
/* 8003863C 0003571C  38 C6 00 01 */	addi r6, r6, 0x1
.L_80038640:
/* 80038640 00035720  54 C0 06 3E */	clrlwi r0, r6, 24
/* 80038644 00035724  28 00 00 FF */	cmplwi r0, 0xff
/* 80038648 00035728  41 80 FF C4 */	blt .L_8003860C
/* 8003864C 0003572C  4E 80 00 20 */	blr
.endfn xParGroupUnregister__FP9xParGroup

# xParGroupSetActive(xParGroup*, unsigned int)
.fn xParGroupSetActive__FP9xParGroupUi, global
/* 80038650 00035730  98 83 00 0E */	stb r4, 0xe(r3)
/* 80038654 00035734  4E 80 00 20 */	blr
.endfn xParGroupSetActive__FP9xParGroupUi

# xParGroupKillAllParticles(xParGroup*)
.fn xParGroupKillAllParticles__FP9xParGroup, global
/* 80038658 00035738  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8003865C 0003573C  7C 08 02 A6 */	mflr r0
/* 80038660 00035740  90 01 00 14 */	stw r0, 0x14(r1)
/* 80038664 00035744  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80038668 00035748  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8003866C 0003574C  7C 7E 1B 78 */	mr r30, r3
/* 80038670 00035750  83 E3 00 00 */	lwz r31, 0x0(r3)
/* 80038674 00035754  48 00 00 14 */	b .L_80038688
.L_80038678:
/* 80038678 00035758  7F E4 FB 78 */	mr r4, r31
/* 8003867C 0003575C  83 FF 00 00 */	lwz r31, 0x0(r31)
/* 80038680 00035760  7F C3 F3 78 */	mr r3, r30
/* 80038684 00035764  48 00 03 79 */	bl xParGroupKillPar__FP9xParGroupP4xPar
.L_80038688:
/* 80038688 00035768  28 1F 00 00 */	cmplwi r31, 0x0
/* 8003868C 0003576C  40 82 FF EC */	bne .L_80038678
/* 80038690 00035770  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80038694 00035774  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80038698 00035778  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8003869C 0003577C  7C 08 03 A6 */	mtlr r0
/* 800386A0 00035780  38 21 00 10 */	addi r1, r1, 0x10
/* 800386A4 00035784  4E 80 00 20 */	blr
.endfn xParGroupKillAllParticles__FP9xParGroup

# xParGroupAnimate(xParGroup*, float)
.fn xParGroupAnimate__FP9xParGroupf, global
/* 800386A8 00035788  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 800386AC 0003578C  7C 08 02 A6 */	mflr r0
/* 800386B0 00035790  90 01 00 54 */	stw r0, 0x54(r1)
/* 800386B4 00035794  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 800386B8 00035798  F3 E1 00 48 */	psq_st f31, 0x48(r1), 0, qr0
/* 800386BC 0003579C  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 800386C0 000357A0  F3 C1 00 38 */	psq_st f30, 0x38(r1), 0, qr0
/* 800386C4 000357A4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 800386C8 000357A8  93 C1 00 28 */	stw r30, 0x28(r1)
/* 800386CC 000357AC  FF C0 08 90 */	fmr f30, f1
/* 800386D0 000357B0  88 03 00 12 */	lbz r0, 0x12(r3)
/* 800386D4 000357B4  7C 7E 1B 78 */	mr r30, r3
/* 800386D8 000357B8  80 63 00 00 */	lwz r3, 0x0(r3)
/* 800386DC 000357BC  54 00 07 7B */	rlwinm. r0, r0, 0, 29, 29
/* 800386E0 000357C0  FF E0 F0 90 */	fmr f31, f30
/* 800386E4 000357C4  7C 7F 1B 78 */	mr r31, r3
/* 800386E8 000357C8  41 82 00 08 */	beq .L_800386F0
/* 800386EC 000357CC  C3 E2 85 D0 */	lfs f31, "@708"@sda21(r2)
.L_800386F0:
/* 800386F0 000357D0  28 03 00 00 */	cmplwi r3, 0x0
/* 800386F4 000357D4  40 82 01 60 */	bne .L_80038854
/* 800386F8 000357D8  38 00 00 00 */	li r0, 0x0
/* 800386FC 000357DC  98 1E 00 0C */	stb r0, 0xc(r30)
/* 80038700 000357E0  48 00 01 54 */	b .L_80038854
.L_80038704:
/* 80038704 000357E4  C0 1F 00 08 */	lfs f0, 0x8(r31)
/* 80038708 000357E8  C0 42 85 D0 */	lfs f2, "@708"@sda21(r2)
/* 8003870C 000357EC  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80038710 000357F0  40 80 00 18 */	bge .L_80038728
/* 80038714 000357F4  7F E4 FB 78 */	mr r4, r31
/* 80038718 000357F8  83 FF 00 00 */	lwz r31, 0x0(r31)
/* 8003871C 000357FC  7F C3 F3 78 */	mr r3, r30
/* 80038720 00035800  48 00 02 DD */	bl xParGroupKillPar__FP9xParGroupP4xPar
/* 80038724 00035804  48 00 01 30 */	b .L_80038854
.L_80038728:
/* 80038728 00035808  C0 3F 00 40 */	lfs f1, 0x40(r31)
/* 8003872C 0003580C  C0 1F 00 50 */	lfs f0, 0x50(r31)
/* 80038730 00035810  EC 01 07 BA */	fmadds f0, f1, f30, f0
/* 80038734 00035814  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80038738 00035818  40 80 00 08 */	bge .L_80038740
/* 8003873C 0003581C  48 00 00 18 */	b .L_80038754
.L_80038740:
/* 80038740 00035820  C0 42 85 D4 */	lfs f2, "@709"@sda21(r2)
/* 80038744 00035824  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80038748 00035828  40 81 00 08 */	ble .L_80038750
/* 8003874C 0003582C  48 00 00 08 */	b .L_80038754
.L_80038750:
/* 80038750 00035830  FC 40 00 90 */	fmr f2, f0
.L_80038754:
/* 80038754 00035834  FC 00 10 1E */	fctiwz f0, f2
/* 80038758 00035838  D0 5F 00 50 */	stfs f2, 0x50(r31)
/* 8003875C 0003583C  D8 01 00 08 */	stfd f0, 0x8(r1)
/* 80038760 00035840  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80038764 00035844  98 1F 00 0C */	stb r0, 0xc(r31)
/* 80038768 00035848  C0 3F 00 44 */	lfs f1, 0x44(r31)
/* 8003876C 0003584C  C0 1F 00 54 */	lfs f0, 0x54(r31)
/* 80038770 00035850  C0 42 85 D0 */	lfs f2, "@708"@sda21(r2)
/* 80038774 00035854  EC 01 07 BA */	fmadds f0, f1, f30, f0
/* 80038778 00035858  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8003877C 0003585C  40 80 00 08 */	bge .L_80038784
/* 80038780 00035860  48 00 00 18 */	b .L_80038798
.L_80038784:
/* 80038784 00035864  C0 42 85 D4 */	lfs f2, "@709"@sda21(r2)
/* 80038788 00035868  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8003878C 0003586C  40 81 00 08 */	ble .L_80038794
/* 80038790 00035870  48 00 00 08 */	b .L_80038798
.L_80038794:
/* 80038794 00035874  FC 40 00 90 */	fmr f2, f0
.L_80038798:
/* 80038798 00035878  FC 00 10 1E */	fctiwz f0, f2
/* 8003879C 0003587C  D0 5F 00 54 */	stfs f2, 0x54(r31)
/* 800387A0 00035880  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 800387A4 00035884  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800387A8 00035888  98 1F 00 0D */	stb r0, 0xd(r31)
/* 800387AC 0003588C  C0 3F 00 48 */	lfs f1, 0x48(r31)
/* 800387B0 00035890  C0 1F 00 58 */	lfs f0, 0x58(r31)
/* 800387B4 00035894  C0 42 85 D0 */	lfs f2, "@708"@sda21(r2)
/* 800387B8 00035898  EC 01 07 BA */	fmadds f0, f1, f30, f0
/* 800387BC 0003589C  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 800387C0 000358A0  40 80 00 08 */	bge .L_800387C8
/* 800387C4 000358A4  48 00 00 18 */	b .L_800387DC
.L_800387C8:
/* 800387C8 000358A8  C0 42 85 D4 */	lfs f2, "@709"@sda21(r2)
/* 800387CC 000358AC  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 800387D0 000358B0  40 81 00 08 */	ble .L_800387D8
/* 800387D4 000358B4  48 00 00 08 */	b .L_800387DC
.L_800387D8:
/* 800387D8 000358B8  FC 40 00 90 */	fmr f2, f0
.L_800387DC:
/* 800387DC 000358BC  FC 00 10 1E */	fctiwz f0, f2
/* 800387E0 000358C0  D0 5F 00 58 */	stfs f2, 0x58(r31)
/* 800387E4 000358C4  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 800387E8 000358C8  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 800387EC 000358CC  98 1F 00 0E */	stb r0, 0xe(r31)
/* 800387F0 000358D0  C0 3F 00 4C */	lfs f1, 0x4c(r31)
/* 800387F4 000358D4  C0 1F 00 5C */	lfs f0, 0x5c(r31)
/* 800387F8 000358D8  C0 42 85 D0 */	lfs f2, "@708"@sda21(r2)
/* 800387FC 000358DC  EC 01 07 BA */	fmadds f0, f1, f30, f0
/* 80038800 000358E0  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80038804 000358E4  40 80 00 08 */	bge .L_8003880C
/* 80038808 000358E8  48 00 00 18 */	b .L_80038820
.L_8003880C:
/* 8003880C 000358EC  C0 42 85 D4 */	lfs f2, "@709"@sda21(r2)
/* 80038810 000358F0  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80038814 000358F4  40 81 00 08 */	ble .L_8003881C
/* 80038818 000358F8  48 00 00 08 */	b .L_80038820
.L_8003881C:
/* 8003881C 000358FC  FC 40 00 90 */	fmr f2, f0
.L_80038820:
/* 80038820 00035900  FC 00 10 1E */	fctiwz f0, f2
/* 80038824 00035904  D0 5F 00 5C */	stfs f2, 0x5c(r31)
/* 80038828 00035908  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8003882C 0003590C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80038830 00035910  98 1F 00 0F */	stb r0, 0xf(r31)
/* 80038834 00035914  C0 3F 00 2C */	lfs f1, 0x2c(r31)
/* 80038838 00035918  C0 1F 00 1C */	lfs f0, 0x1c(r31)
/* 8003883C 0003591C  EC 01 07 BA */	fmadds f0, f1, f30, f0
/* 80038840 00035920  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 80038844 00035924  C0 1F 00 08 */	lfs f0, 0x8(r31)
/* 80038848 00035928  EC 00 F8 28 */	fsubs f0, f0, f31
/* 8003884C 0003592C  D0 1F 00 08 */	stfs f0, 0x8(r31)
/* 80038850 00035930  83 FF 00 00 */	lwz r31, 0x0(r31)
.L_80038854:
/* 80038854 00035934  28 1F 00 00 */	cmplwi r31, 0x0
/* 80038858 00035938  40 82 FE AC */	bne .L_80038704
/* 8003885C 0003593C  E3 E1 00 48 */	psq_l f31, 0x48(r1), 0, qr0
/* 80038860 00035940  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80038864 00035944  E3 C1 00 38 */	psq_l f30, 0x38(r1), 0, qr0
/* 80038868 00035948  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 8003886C 0003594C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80038870 00035950  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80038874 00035954  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80038878 00035958  7C 08 03 A6 */	mtlr r0
/* 8003887C 0003595C  38 21 00 50 */	addi r1, r1, 0x50
/* 80038880 00035960  4E 80 00 20 */	blr
.endfn xParGroupAnimate__FP9xParGroupf

# xParGroupAddParP(xParGroup*, xPar*)
.fn xParGroupAddParP__FP9xParGroupP4xPar, global
/* 80038884 00035964  38 A0 00 01 */	li r5, 0x1
/* 80038888 00035968  38 00 00 00 */	li r0, 0x0
/* 8003888C 0003596C  98 A3 00 0C */	stb r5, 0xc(r3)
/* 80038890 00035970  80 A3 00 08 */	lwz r5, 0x8(r3)
/* 80038894 00035974  38 A5 00 01 */	addi r5, r5, 0x1
/* 80038898 00035978  90 A3 00 08 */	stw r5, 0x8(r3)
/* 8003889C 0003597C  90 04 00 04 */	stw r0, 0x4(r4)
/* 800388A0 00035980  90 04 00 00 */	stw r0, 0x0(r4)
/* 800388A4 00035984  80 03 00 00 */	lwz r0, 0x0(r3)
/* 800388A8 00035988  28 00 00 00 */	cmplwi r0, 0x0
/* 800388AC 0003598C  41 82 00 18 */	beq .L_800388C4
/* 800388B0 00035990  90 04 00 00 */	stw r0, 0x0(r4)
/* 800388B4 00035994  80 A3 00 00 */	lwz r5, 0x0(r3)
/* 800388B8 00035998  90 85 00 04 */	stw r4, 0x4(r5)
/* 800388BC 0003599C  90 83 00 00 */	stw r4, 0x0(r3)
/* 800388C0 000359A0  4E 80 00 20 */	blr
.L_800388C4:
/* 800388C4 000359A4  90 83 00 00 */	stw r4, 0x0(r3)
/* 800388C8 000359A8  4E 80 00 20 */	blr
.endfn xParGroupAddParP__FP9xParGroupP4xPar

# xParGroupAddPar(xParGroup*)
.fn xParGroupAddPar__FP9xParGroup, global
/* 800388CC 000359AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800388D0 000359B0  7C 08 02 A6 */	mflr r0
/* 800388D4 000359B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800388D8 000359B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800388DC 000359BC  7C 7F 1B 78 */	mr r31, r3
/* 800388E0 000359C0  93 C1 00 08 */	stw r30, 0x8(r1)
/* 800388E4 000359C4  88 03 00 12 */	lbz r0, 0x12(r3)
/* 800388E8 000359C8  54 00 07 BD */	rlwinm. r0, r0, 0, 30, 30
/* 800388EC 000359CC  41 82 00 A4 */	beq .L_80038990
/* 800388F0 000359D0  4B FF E1 49 */	bl xParAlloc__Fv
/* 800388F4 000359D4  7C 7E 1B 79 */	mr. r30, r3
/* 800388F8 000359D8  40 82 00 CC */	bne .L_800389C4
/* 800388FC 000359DC  3C 60 80 3C */	lis r3, sParGroupRegTable@ha
/* 80038900 000359E0  88 FF 00 11 */	lbz r7, 0x11(r31)
/* 80038904 000359E4  38 63 BC B4 */	addi r3, r3, sParGroupRegTable@l
/* 80038908 000359E8  39 00 00 00 */	li r8, 0x0
/* 8003890C 000359EC  48 00 00 74 */	b .L_80038980
.L_80038910:
/* 80038910 000359F0  55 00 15 BA */	clrlslwi r0, r8, 24, 2
/* 80038914 000359F4  55 06 06 3E */	clrlwi r6, r8, 24
/* 80038918 000359F8  7C 83 00 2E */	lwzx r4, r3, r0
/* 8003891C 000359FC  28 04 00 00 */	cmplwi r4, 0x0
/* 80038920 00035A00  41 82 00 5C */	beq .L_8003897C
/* 80038924 00035A04  7C 04 F8 40 */	cmplw r4, r31
/* 80038928 00035A08  41 82 00 54 */	beq .L_8003897C
/* 8003892C 00035A0C  88 A4 00 12 */	lbz r5, 0x12(r4)
/* 80038930 00035A10  54 A0 07 BD */	rlwinm. r0, r5, 0, 30, 30
/* 80038934 00035A14  41 82 00 48 */	beq .L_8003897C
/* 80038938 00035A18  54 A0 06 F7 */	rlwinm. r0, r5, 0, 27, 27
/* 8003893C 00035A1C  40 82 00 40 */	bne .L_8003897C
/* 80038940 00035A20  88 04 00 11 */	lbz r0, 0x11(r4)
/* 80038944 00035A24  7C 00 38 00 */	cmpw r0, r7
/* 80038948 00035A28  40 80 00 34 */	bge .L_8003897C
/* 8003894C 00035A2C  80 04 00 00 */	lwz r0, 0x0(r4)
/* 80038950 00035A30  28 00 00 00 */	cmplwi r0, 0x0
/* 80038954 00035A34  41 82 00 28 */	beq .L_8003897C
/* 80038958 00035A38  3C 60 80 3C */	lis r3, sParGroupRegTable@ha
/* 8003895C 00035A3C  54 C0 10 3A */	slwi r0, r6, 2
/* 80038960 00035A40  38 63 BC B4 */	addi r3, r3, sParGroupRegTable@l
/* 80038964 00035A44  7C 63 00 2E */	lwzx r3, r3, r0
/* 80038968 00035A48  80 83 00 00 */	lwz r4, 0x0(r3)
/* 8003896C 00035A4C  48 00 00 91 */	bl xParGroupKillPar__FP9xParGroupP4xPar
/* 80038970 00035A50  4B FF E0 C9 */	bl xParAlloc__Fv
/* 80038974 00035A54  7C 7E 1B 78 */	mr r30, r3
/* 80038978 00035A58  48 00 00 4C */	b .L_800389C4
.L_8003897C:
/* 8003897C 00035A5C  39 08 00 01 */	addi r8, r8, 0x1
.L_80038980:
/* 80038980 00035A60  55 00 06 3E */	clrlwi r0, r8, 24
/* 80038984 00035A64  28 00 00 FF */	cmplwi r0, 0xff
/* 80038988 00035A68  41 80 FF 88 */	blt .L_80038910
/* 8003898C 00035A6C  48 00 00 38 */	b .L_800389C4
.L_80038990:
/* 80038990 00035A70  80 7F 00 04 */	lwz r3, 0x4(r31)
/* 80038994 00035A74  28 03 00 00 */	cmplwi r3, 0x0
/* 80038998 00035A78  41 82 00 28 */	beq .L_800389C0
/* 8003899C 00035A7C  80 03 00 00 */	lwz r0, 0x0(r3)
/* 800389A0 00035A80  7C 7E 1B 78 */	mr r30, r3
/* 800389A4 00035A84  90 1F 00 04 */	stw r0, 0x4(r31)
/* 800389A8 00035A88  80 7F 00 04 */	lwz r3, 0x4(r31)
/* 800389AC 00035A8C  28 03 00 00 */	cmplwi r3, 0x0
/* 800389B0 00035A90  41 82 00 14 */	beq .L_800389C4
/* 800389B4 00035A94  38 00 00 00 */	li r0, 0x0
/* 800389B8 00035A98  90 03 00 04 */	stw r0, 0x4(r3)
/* 800389BC 00035A9C  48 00 00 08 */	b .L_800389C4
.L_800389C0:
/* 800389C0 00035AA0  3B C0 00 00 */	li r30, 0x0
.L_800389C4:
/* 800389C4 00035AA4  28 1E 00 00 */	cmplwi r30, 0x0
/* 800389C8 00035AA8  41 82 00 18 */	beq .L_800389E0
/* 800389CC 00035AAC  7F C3 F3 78 */	mr r3, r30
/* 800389D0 00035AB0  4B FF E0 F9 */	bl xParInit__FP4xPar
/* 800389D4 00035AB4  7F E3 FB 78 */	mr r3, r31
/* 800389D8 00035AB8  7F C4 F3 78 */	mr r4, r30
/* 800389DC 00035ABC  4B FF FE A9 */	bl xParGroupAddParP__FP9xParGroupP4xPar
.L_800389E0:
/* 800389E0 00035AC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800389E4 00035AC4  7F C3 F3 78 */	mr r3, r30
/* 800389E8 00035AC8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800389EC 00035ACC  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 800389F0 00035AD0  7C 08 03 A6 */	mtlr r0
/* 800389F4 00035AD4  38 21 00 10 */	addi r1, r1, 0x10
/* 800389F8 00035AD8  4E 80 00 20 */	blr
.endfn xParGroupAddPar__FP9xParGroup

# xParGroupKillPar(xParGroup*, xPar*)
.fn xParGroupKillPar__FP9xParGroupP4xPar, global
/* 800389FC 00035ADC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80038A00 00035AE0  7C 08 02 A6 */	mflr r0
/* 80038A04 00035AE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80038A08 00035AE8  80 03 00 00 */	lwz r0, 0x0(r3)
/* 80038A0C 00035AEC  7C 04 00 40 */	cmplw r4, r0
/* 80038A10 00035AF0  40 82 00 30 */	bne .L_80038A40
/* 80038A14 00035AF4  80 04 00 00 */	lwz r0, 0x0(r4)
/* 80038A18 00035AF8  90 03 00 00 */	stw r0, 0x0(r3)
/* 80038A1C 00035AFC  80 A3 00 00 */	lwz r5, 0x0(r3)
/* 80038A20 00035B00  28 05 00 00 */	cmplwi r5, 0x0
/* 80038A24 00035B04  41 82 00 0C */	beq .L_80038A30
/* 80038A28 00035B08  38 00 00 00 */	li r0, 0x0
/* 80038A2C 00035B0C  90 05 00 04 */	stw r0, 0x4(r5)
.L_80038A30:
/* 80038A30 00035B10  38 00 00 00 */	li r0, 0x0
/* 80038A34 00035B14  90 04 00 00 */	stw r0, 0x0(r4)
/* 80038A38 00035B18  90 04 00 04 */	stw r0, 0x4(r4)
/* 80038A3C 00035B1C  48 00 00 38 */	b .L_80038A74
.L_80038A40:
/* 80038A40 00035B20  80 A4 00 00 */	lwz r5, 0x0(r4)
/* 80038A44 00035B24  28 05 00 00 */	cmplwi r5, 0x0
/* 80038A48 00035B28  41 82 00 0C */	beq .L_80038A54
/* 80038A4C 00035B2C  80 04 00 04 */	lwz r0, 0x4(r4)
/* 80038A50 00035B30  90 05 00 04 */	stw r0, 0x4(r5)
.L_80038A54:
/* 80038A54 00035B34  80 A4 00 04 */	lwz r5, 0x4(r4)
/* 80038A58 00035B38  28 05 00 00 */	cmplwi r5, 0x0
/* 80038A5C 00035B3C  41 82 00 0C */	beq .L_80038A68
/* 80038A60 00035B40  80 04 00 00 */	lwz r0, 0x0(r4)
/* 80038A64 00035B44  90 05 00 00 */	stw r0, 0x0(r5)
.L_80038A68:
/* 80038A68 00035B48  38 00 00 00 */	li r0, 0x0
/* 80038A6C 00035B4C  90 04 00 04 */	stw r0, 0x4(r4)
/* 80038A70 00035B50  90 04 00 00 */	stw r0, 0x0(r4)
.L_80038A74:
/* 80038A74 00035B54  80 A3 00 08 */	lwz r5, 0x8(r3)
/* 80038A78 00035B58  38 05 FF FF */	addi r0, r5, -0x1
/* 80038A7C 00035B5C  90 03 00 08 */	stw r0, 0x8(r3)
/* 80038A80 00035B60  88 03 00 12 */	lbz r0, 0x12(r3)
/* 80038A84 00035B64  54 00 07 BD */	rlwinm. r0, r0, 0, 30, 30
/* 80038A88 00035B68  41 82 00 10 */	beq .L_80038A98
/* 80038A8C 00035B6C  7C 83 23 78 */	mr r3, r4
/* 80038A90 00035B70  4B FF DF E9 */	bl xParFree__FP4xPar
/* 80038A94 00035B74  48 00 00 08 */	b .L_80038A9C
.L_80038A98:
/* 80038A98 00035B78  48 00 00 15 */	bl xParGroupAddParToDeadList__FP9xParGroupP4xPar
.L_80038A9C:
/* 80038A9C 00035B7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80038AA0 00035B80  7C 08 03 A6 */	mtlr r0
/* 80038AA4 00035B84  38 21 00 10 */	addi r1, r1, 0x10
/* 80038AA8 00035B88  4E 80 00 20 */	blr
.endfn xParGroupKillPar__FP9xParGroupP4xPar

# xParGroupAddParToDeadList(xParGroup*, xPar*)
.fn xParGroupAddParToDeadList__FP9xParGroupP4xPar, global
/* 80038AAC 00035B8C  80 A3 00 04 */	lwz r5, 0x4(r3)
/* 80038AB0 00035B90  28 05 00 00 */	cmplwi r5, 0x0
/* 80038AB4 00035B94  41 82 00 08 */	beq .L_80038ABC
/* 80038AB8 00035B98  90 85 00 04 */	stw r4, 0x4(r5)
.L_80038ABC:
/* 80038ABC 00035B9C  80 A3 00 04 */	lwz r5, 0x4(r3)
/* 80038AC0 00035BA0  38 00 00 00 */	li r0, 0x0
/* 80038AC4 00035BA4  90 A4 00 00 */	stw r5, 0x0(r4)
/* 80038AC8 00035BA8  90 04 00 04 */	stw r0, 0x4(r4)
/* 80038ACC 00035BAC  90 83 00 04 */	stw r4, 0x4(r3)
/* 80038AD0 00035BB0  4E 80 00 20 */	blr
.endfn xParGroupAddParToDeadList__FP9xParGroupP4xPar

# 0x803CB318 - 0x803CB320
.section .sbss, "wa", @nobits
.balign 8

.obj sParGroupRegTableInit, local
	.skip 0x4
.endobj sParGroupRegTableInit

.obj sParGroupRegTableCount, local
	.skip 0x4
.endobj sParGroupRegTableCount

# 0x803CCF50 - 0x803CCF58
.section .sdata2, "a"
.balign 8

.obj "@708", local
	.4byte 0x00000000
.endobj "@708"

.obj "@709", local
	.4byte 0x437F0000
.endobj "@709"
