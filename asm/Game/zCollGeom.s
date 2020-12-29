.include "macros.inc"

.if 0

.section .text  # 0x80116588 - 0x801168EC

.global zCollGeom_EntSetup__FP4xEnt
zCollGeom_EntSetup__FP4xEnt:
/* 80116588 00113388  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8011658C 0011338C  7C 08 02 A6 */	mflr r0
/* 80116590 00113390  90 01 00 34 */	stw r0, 0x34(r1)
/* 80116594 00113394  38 00 00 00 */	li r0, 0
/* 80116598 00113398  BE E1 00 0C */	stmw r23, 0xc(r1)
/* 8011659C 0011339C  7C 79 1B 78 */	mr r25, r3
/* 801165A0 001133A0  88 63 00 04 */	lbz r3, 4(r3)
/* 801165A4 001133A4  90 19 00 28 */	stw r0, 0x28(r25)
/* 801165A8 001133A8  20 63 00 0B */	subfic r3, r3, 0xb
/* 801165AC 001133AC  7C 63 00 34 */	cntlzw r3, r3
/* 801165B0 001133B0  90 19 00 2C */	stw r0, 0x2c(r25)
/* 801165B4 001133B4  54 7A DE 3E */	rlwinm r26, r3, 0x1b, 0x18, 0x1f
/* 801165B8 001133B8  80 19 00 24 */	lwz r0, 0x24(r25)
/* 801165BC 001133BC  28 00 00 00 */	cmplwi r0, 0
/* 801165C0 001133C0  41 82 01 5C */	beq lbl_8011671C
/* 801165C4 001133C4  3C 80 80 31 */	lis r4, lbl_80314204@ha
/* 801165C8 001133C8  3C 60 80 31 */	lis r3, lbl_803141F8@ha
/* 801165CC 001133CC  3B C4 42 04 */	addi r30, r4, lbl_80314204@l
/* 801165D0 001133D0  3B 60 00 00 */	li r27, 0
/* 801165D4 001133D4  3B A3 41 F8 */	addi r29, r3, lbl_803141F8@l
/* 801165D8 001133D8  48 00 01 38 */	b lbl_80116710
lbl_801165DC:
/* 801165DC 001133DC  3B 80 00 00 */	li r28, 0
/* 801165E0 001133E0  3B E0 00 00 */	li r31, 0
/* 801165E4 001133E4  48 00 01 14 */	b lbl_801166F8
lbl_801165E8:
/* 801165E8 001133E8  80 1E 00 00 */	lwz r0, 0(r30)
/* 801165EC 001133EC  80 79 00 24 */	lwz r3, 0x24(r25)
/* 801165F0 001133F0  7C A0 FA 14 */	add r5, r0, r31
/* 801165F4 001133F4  80 85 00 00 */	lwz r4, 0(r5)
/* 801165F8 001133F8  80 03 00 10 */	lwz r0, 0x10(r3)
/* 801165FC 001133FC  7C 04 00 40 */	cmplw r4, r0
/* 80116600 00113400  40 82 00 F0 */	bne lbl_801166F0
/* 80116604 00113404  83 05 00 04 */	lwz r24, 4(r5)
/* 80116608 00113408  28 18 00 00 */	cmplwi r24, 0
/* 8011660C 0011340C  41 82 00 6C */	beq lbl_80116678
/* 80116610 00113410  7F 03 C3 78 */	mr r3, r24
/* 80116614 00113414  7F 24 CB 78 */	mr r4, r25
/* 80116618 00113418  38 A0 20 00 */	li r5, 0x2000
/* 8011661C 0011341C  38 C0 00 00 */	li r6, 0
/* 80116620 00113420  38 E0 00 00 */	li r7, 0
/* 80116624 00113424  4B F1 DA CD */	bl xModelInstanceAlloc__FP8RpAtomicPvUsUcPUc
/* 80116628 00113428  7C 77 1B 78 */	mr r23, r3
/* 8011662C 0011342C  92 F9 00 28 */	stw r23, 0x28(r25)
/* 80116630 00113430  80 99 00 24 */	lwz r4, 0x24(r25)
/* 80116634 00113434  80 79 00 28 */	lwz r3, 0x28(r25)
/* 80116638 00113438  80 04 00 4C */	lwz r0, 0x4c(r4)
/* 8011663C 0011343C  90 03 00 4C */	stw r0, 0x4c(r3)
/* 80116640 00113440  48 00 00 24 */	b lbl_80116664
lbl_80116644:
/* 80116644 00113444  7F 03 C3 78 */	mr r3, r24
/* 80116648 00113448  7F 24 CB 78 */	mr r4, r25
/* 8011664C 0011344C  38 A0 20 00 */	li r5, 0x2000
/* 80116650 00113450  38 C0 00 00 */	li r6, 0
/* 80116654 00113454  38 E0 00 00 */	li r7, 0
/* 80116658 00113458  4B F1 DA 99 */	bl xModelInstanceAlloc__FP8RpAtomicPvUsUcPUc
/* 8011665C 0011345C  7E E4 BB 78 */	mr r4, r23
/* 80116660 00113460  4B F1 DD C1 */	bl xModelInstanceAttach__FP14xModelInstanceP14xModelInstance
lbl_80116664:
/* 80116664 00113464  7F 03 C3 78 */	mr r3, r24
/* 80116668 00113468  4B FB 18 61 */	bl iModelFile_RWMultiAtomic__FP8RpAtomic
/* 8011666C 0011346C  7C 78 1B 79 */	or. r24, r3, r3
/* 80116670 00113470  40 82 FF D4 */	bne lbl_80116644
/* 80116674 00113474  48 00 00 7C */	b lbl_801166F0
lbl_80116678:
/* 80116678 00113478  83 05 00 08 */	lwz r24, 8(r5)
/* 8011667C 0011347C  28 18 00 00 */	cmplwi r24, 0
/* 80116680 00113480  41 82 00 6C */	beq lbl_801166EC
/* 80116684 00113484  7F 03 C3 78 */	mr r3, r24
/* 80116688 00113488  7F 24 CB 78 */	mr r4, r25
/* 8011668C 0011348C  38 A0 20 00 */	li r5, 0x2000
/* 80116690 00113490  38 C0 00 00 */	li r6, 0
/* 80116694 00113494  38 E0 00 00 */	li r7, 0
/* 80116698 00113498  4B F1 DA 59 */	bl xModelInstanceAlloc__FP8RpAtomicPvUsUcPUc
/* 8011669C 0011349C  7C 77 1B 78 */	mr r23, r3
/* 801166A0 001134A0  92 F9 00 2C */	stw r23, 0x2c(r25)
/* 801166A4 001134A4  80 99 00 24 */	lwz r4, 0x24(r25)
/* 801166A8 001134A8  80 79 00 2C */	lwz r3, 0x2c(r25)
/* 801166AC 001134AC  80 04 00 4C */	lwz r0, 0x4c(r4)
/* 801166B0 001134B0  90 03 00 4C */	stw r0, 0x4c(r3)
/* 801166B4 001134B4  48 00 00 24 */	b lbl_801166D8
lbl_801166B8:
/* 801166B8 001134B8  7F 03 C3 78 */	mr r3, r24
/* 801166BC 001134BC  7F 24 CB 78 */	mr r4, r25
/* 801166C0 001134C0  38 A0 20 00 */	li r5, 0x2000
/* 801166C4 001134C4  38 C0 00 00 */	li r6, 0
/* 801166C8 001134C8  38 E0 00 00 */	li r7, 0
/* 801166CC 001134CC  4B F1 DA 25 */	bl xModelInstanceAlloc__FP8RpAtomicPvUsUcPUc
/* 801166D0 001134D0  7E E4 BB 78 */	mr r4, r23
/* 801166D4 001134D4  4B F1 DD 4D */	bl xModelInstanceAttach__FP14xModelInstanceP14xModelInstance
lbl_801166D8:
/* 801166D8 001134D8  7F 03 C3 78 */	mr r3, r24
/* 801166DC 001134DC  4B FB 17 ED */	bl iModelFile_RWMultiAtomic__FP8RpAtomic
/* 801166E0 001134E0  7C 78 1B 79 */	or. r24, r3, r3
/* 801166E4 001134E4  40 82 FF D4 */	bne lbl_801166B8
/* 801166E8 001134E8  48 00 00 08 */	b lbl_801166F0
lbl_801166EC:
/* 801166EC 001134EC  3B 40 00 00 */	li r26, 0
lbl_801166F0:
/* 801166F0 001134F0  3B FF 00 0C */	addi r31, r31, 0xc
/* 801166F4 001134F4  3B 9C 00 01 */	addi r28, r28, 1
lbl_801166F8:
/* 801166F8 001134F8  80 1D 00 00 */	lwz r0, 0(r29)
/* 801166FC 001134FC  7C 1C 00 40 */	cmplw r28, r0
/* 80116700 00113500  41 80 FE E8 */	blt lbl_801165E8
/* 80116704 00113504  3B DE 00 04 */	addi r30, r30, 4
/* 80116708 00113508  3B BD 00 04 */	addi r29, r29, 4
/* 8011670C 0011350C  3B 7B 00 01 */	addi r27, r27, 1
lbl_80116710:
/* 80116710 00113510  80 0D 95 08 */	lwz r0, lbl_803CBE08-_SDA_BASE_(r13)
/* 80116714 00113514  7C 1B 00 40 */	cmplw r27, r0
/* 80116718 00113518  41 80 FE C4 */	blt lbl_801165DC
lbl_8011671C:
/* 8011671C 0011351C  2C 1A 00 00 */	cmpwi r26, 0
/* 80116720 00113520  41 82 00 18 */	beq lbl_80116738
/* 80116724 00113524  80 19 00 2C */	lwz r0, 0x2c(r25)
/* 80116728 00113528  28 00 00 00 */	cmplwi r0, 0
/* 8011672C 0011352C  40 82 00 0C */	bne lbl_80116738
/* 80116730 00113530  80 19 00 24 */	lwz r0, 0x24(r25)
/* 80116734 00113534  90 19 00 2C */	stw r0, 0x2c(r25)
lbl_80116738:
/* 80116738 00113538  80 19 00 28 */	lwz r0, 0x28(r25)
/* 8011673C 0011353C  28 00 00 00 */	cmplwi r0, 0
/* 80116740 00113540  41 82 00 0C */	beq lbl_8011674C
/* 80116744 00113544  38 60 00 01 */	li r3, 1
/* 80116748 00113548  48 00 00 10 */	b lbl_80116758
lbl_8011674C:
/* 8011674C 0011354C  80 19 00 24 */	lwz r0, 0x24(r25)
/* 80116750 00113550  38 60 00 00 */	li r3, 0
/* 80116754 00113554  90 19 00 28 */	stw r0, 0x28(r25)
lbl_80116758:
/* 80116758 00113558  BA E1 00 0C */	lmw r23, 0xc(r1)
/* 8011675C 0011355C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80116760 00113560  7C 08 03 A6 */	mtlr r0
/* 80116764 00113564  38 21 00 30 */	addi r1, r1, 0x30
/* 80116768 00113568  4E 80 00 20 */	blr 

.global zCollGeom_Init__Fv
zCollGeom_Init__Fv:
/* 8011676C 0011356C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80116770 00113570  7C 08 02 A6 */	mflr r0
/* 80116774 00113574  3C 60 43 4F */	lis r3, 0x434F4C4C@ha
/* 80116778 00113578  90 01 00 34 */	stw r0, 0x34(r1)
/* 8011677C 0011357C  38 63 4C 4C */	addi r3, r3, 0x434F4C4C@l
/* 80116780 00113580  BF 41 00 18 */	stmw r26, 0x18(r1)
/* 80116784 00113584  4B F3 50 95 */	bl xSTAssetCountByType__FUi
/* 80116788 00113588  90 6D 95 08 */	stw r3, lbl_803CBE08-_SDA_BASE_(r13)
/* 8011678C 0011358C  80 0D 95 08 */	lwz r0, lbl_803CBE08-_SDA_BASE_(r13)
/* 80116790 00113590  28 00 00 00 */	cmplwi r0, 0
/* 80116794 00113594  41 82 01 20 */	beq lbl_801168B4
/* 80116798 00113598  3C 80 80 31 */	lis r4, lbl_803141F8@ha
/* 8011679C 0011359C  3C 60 80 31 */	lis r3, lbl_80314204@ha
/* 801167A0 001135A0  3B A4 41 F8 */	addi r29, r4, lbl_803141F8@l
/* 801167A4 001135A4  3B 40 00 00 */	li r26, 0
/* 801167A8 001135A8  3B 83 42 04 */	addi r28, r3, lbl_80314204@l
/* 801167AC 001135AC  3F E0 43 4F */	lis r31, 0x434f
/* 801167B0 001135B0  48 00 00 F8 */	b lbl_801168A8
lbl_801167B4:
/* 801167B4 001135B4  7F 44 D3 78 */	mr r4, r26
/* 801167B8 001135B8  38 7F 4C 4C */	addi r3, r31, 0x4c4c
/* 801167BC 001135BC  38 A1 00 08 */	addi r5, r1, 8
/* 801167C0 001135C0  4B F3 50 E1 */	bl xSTFindAssetByType__FUiiPUi
/* 801167C4 001135C4  28 03 00 00 */	cmplwi r3, 0
/* 801167C8 001135C8  41 82 00 EC */	beq lbl_801168B4
/* 801167CC 001135CC  80 03 00 00 */	lwz r0, 0(r3)
/* 801167D0 001135D0  90 1D 00 00 */	stw r0, 0(r29)
/* 801167D4 001135D4  80 1D 00 00 */	lwz r0, 0(r29)
/* 801167D8 001135D8  28 00 00 00 */	cmplwi r0, 0
/* 801167DC 001135DC  40 82 00 1C */	bne lbl_801167F8
/* 801167E0 001135E0  3C 60 80 31 */	lis r3, lbl_80314204@ha
/* 801167E4 001135E4  57 40 10 3A */	slwi r0, r26, 2
/* 801167E8 001135E8  38 63 42 04 */	addi r3, r3, lbl_80314204@l
/* 801167EC 001135EC  38 80 00 00 */	li r4, 0
/* 801167F0 001135F0  7C 83 01 2E */	stwx r4, r3, r0
/* 801167F4 001135F4  48 00 00 C0 */	b lbl_801168B4
lbl_801167F8:
/* 801167F8 001135F8  38 03 00 04 */	addi r0, r3, 4
/* 801167FC 001135FC  3B 60 00 00 */	li r27, 0
/* 80116800 00113600  90 1C 00 00 */	stw r0, 0(r28)
/* 80116804 00113604  3B C0 00 00 */	li r30, 0
/* 80116808 00113608  48 00 00 88 */	b lbl_80116890
lbl_8011680C:
/* 8011680C 0011360C  80 7C 00 00 */	lwz r3, 0(r28)
/* 80116810 00113610  7C 63 F0 2E */	lwzx r3, r3, r30
/* 80116814 00113614  28 03 00 00 */	cmplwi r3, 0
/* 80116818 00113618  41 82 00 14 */	beq lbl_8011682C
/* 8011681C 0011361C  38 80 00 00 */	li r4, 0
/* 80116820 00113620  4B F3 4E ED */	bl xSTFindAsset__FUiPUi
/* 80116824 00113624  80 9C 00 00 */	lwz r4, 0(r28)
/* 80116828 00113628  7C 64 F1 2E */	stwx r3, r4, r30
lbl_8011682C:
/* 8011682C 0011362C  80 7C 00 00 */	lwz r3, 0(r28)
/* 80116830 00113630  38 03 00 04 */	addi r0, r3, 4
/* 80116834 00113634  7C 7E 00 2E */	lwzx r3, r30, r0
/* 80116838 00113638  28 03 00 00 */	cmplwi r3, 0
/* 8011683C 0011363C  41 82 00 18 */	beq lbl_80116854
/* 80116840 00113640  38 80 00 00 */	li r4, 0
/* 80116844 00113644  4B F3 4E C9 */	bl xSTFindAsset__FUiPUi
/* 80116848 00113648  80 9C 00 00 */	lwz r4, 0(r28)
/* 8011684C 0011364C  38 04 00 04 */	addi r0, r4, 4
/* 80116850 00113650  7C 7E 01 2E */	stwx r3, r30, r0
lbl_80116854:
/* 80116854 00113654  80 1C 00 00 */	lwz r0, 0(r28)
/* 80116858 00113658  7C 60 F2 14 */	add r3, r0, r30
/* 8011685C 0011365C  80 03 00 04 */	lwz r0, 4(r3)
/* 80116860 00113660  28 00 00 00 */	cmplwi r0, 0
/* 80116864 00113664  40 82 00 24 */	bne lbl_80116888
/* 80116868 00113668  80 63 00 08 */	lwz r3, 8(r3)
/* 8011686C 0011366C  28 03 00 00 */	cmplwi r3, 0
/* 80116870 00113670  41 82 00 18 */	beq lbl_80116888
/* 80116874 00113674  38 80 00 00 */	li r4, 0
/* 80116878 00113678  4B F3 4E 95 */	bl xSTFindAsset__FUiPUi
/* 8011687C 0011367C  80 9C 00 00 */	lwz r4, 0(r28)
/* 80116880 00113680  38 1E 00 08 */	addi r0, r30, 8
/* 80116884 00113684  7C 64 01 2E */	stwx r3, r4, r0
lbl_80116888:
/* 80116888 00113688  3B DE 00 0C */	addi r30, r30, 0xc
/* 8011688C 0011368C  3B 7B 00 01 */	addi r27, r27, 1
lbl_80116890:
/* 80116890 00113690  80 1D 00 00 */	lwz r0, 0(r29)
/* 80116894 00113694  7C 1B 00 40 */	cmplw r27, r0
/* 80116898 00113698  41 80 FF 74 */	blt lbl_8011680C
/* 8011689C 0011369C  3B BD 00 04 */	addi r29, r29, 4
/* 801168A0 001136A0  3B 9C 00 04 */	addi r28, r28, 4
/* 801168A4 001136A4  3B 5A 00 01 */	addi r26, r26, 1
lbl_801168A8:
/* 801168A8 001136A8  80 0D 95 08 */	lwz r0, lbl_803CBE08-_SDA_BASE_(r13)
/* 801168AC 001136AC  7C 1A 00 40 */	cmplw r26, r0
/* 801168B0 001136B0  41 80 FF 04 */	blt lbl_801167B4
lbl_801168B4:
/* 801168B4 001136B4  BB 41 00 18 */	lmw r26, 0x18(r1)
/* 801168B8 001136B8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801168BC 001136BC  7C 08 03 A6 */	mtlr r0
/* 801168C0 001136C0  38 21 00 30 */	addi r1, r1, 0x30
/* 801168C4 001136C4  4E 80 00 20 */	blr 

.global zCollGeom_CamEnable__FP4xEnt
zCollGeom_CamEnable__FP4xEnt:
/* 801168C8 001136C8  80 03 00 2C */	lwz r0, 0x2c(r3)
/* 801168CC 001136CC  28 00 00 00 */	cmplwi r0, 0
/* 801168D0 001136D0  4C 82 00 20 */	bnelr 
/* 801168D4 001136D4  80 03 00 24 */	lwz r0, 0x24(r3)
/* 801168D8 001136D8  90 03 00 2C */	stw r0, 0x2c(r3)
/* 801168DC 001136DC  4E 80 00 20 */	blr 

.global zCollGeom_CamDisable__FP4xEnt
zCollGeom_CamDisable__FP4xEnt:
/* 801168E0 001136E0  38 00 00 00 */	li r0, 0
/* 801168E4 001136E4  90 03 00 2C */	stw r0, 0x2c(r3)
/* 801168E8 001136E8  4E 80 00 20 */	blr 

.endif

.section .bss
lbl_803141F8:
	.skip 0xC
lbl_80314204:
	.skip 0xC

.section .sbss
lbl_803CBE08:
	.skip 0x8
/* SPECULATION: link order */
.global oob_player_teleported
oob_player_teleported:
	.skip 0x1