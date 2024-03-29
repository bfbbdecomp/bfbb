.include "macros.inc"
.file "CARDBlock.c"

# 0x801BD66C - 0x801BDA70
.text
.balign 4

.fn __CARDGetFatBlock, global
/* 801BD66C 001BA74C  80 63 00 88 */	lwz r3, 0x88(r3)
/* 801BD670 001BA750  4E 80 00 20 */	blr
.endfn __CARDGetFatBlock

.fn WriteCallback, local
/* 801BD674 001BA754  7C 08 02 A6 */	mflr r0
/* 801BD678 001BA758  90 01 00 04 */	stw r0, 0x4(r1)
/* 801BD67C 001BA75C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801BD680 001BA760  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801BD684 001BA764  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801BD688 001BA768  7C 9E 23 79 */	mr. r30, r4
/* 801BD68C 001BA76C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801BD690 001BA770  3B A3 00 00 */	addi r29, r3, 0x0
/* 801BD694 001BA774  1C BD 01 10 */	mulli r5, r29, 0x110
/* 801BD698 001BA778  3C 60 80 38 */	lis r3, __CARDBlock@ha
/* 801BD69C 001BA77C  38 03 D4 80 */	addi r0, r3, __CARDBlock@l
/* 801BD6A0 001BA780  7F E0 2A 14 */	add r31, r0, r5
/* 801BD6A4 001BA784  41 80 00 48 */	blt .L_801BD6EC
/* 801BD6A8 001BA788  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 801BD6AC 001BA78C  80 1F 00 88 */	lwz r0, 0x88(r31)
/* 801BD6B0 001BA790  38 83 60 00 */	addi r4, r3, 0x6000
/* 801BD6B4 001BA794  7C 00 20 40 */	cmplw r0, r4
/* 801BD6B8 001BA798  3C A3 00 01 */	addis r5, r3, 0x1
/* 801BD6BC 001BA79C  38 A5 80 00 */	addi r5, r5, -0x8000
/* 801BD6C0 001BA7A0  40 82 00 18 */	bne .L_801BD6D8
/* 801BD6C4 001BA7A4  90 BF 00 88 */	stw r5, 0x88(r31)
/* 801BD6C8 001BA7A8  38 65 00 00 */	addi r3, r5, 0x0
/* 801BD6CC 001BA7AC  38 A0 20 00 */	li r5, 0x2000
/* 801BD6D0 001BA7B0  4B E4 5E 71 */	bl memcpy
/* 801BD6D4 001BA7B4  48 00 00 18 */	b .L_801BD6EC
.L_801BD6D8:
/* 801BD6D8 001BA7B8  90 9F 00 88 */	stw r4, 0x88(r31)
/* 801BD6DC 001BA7BC  38 64 00 00 */	addi r3, r4, 0x0
/* 801BD6E0 001BA7C0  38 85 00 00 */	addi r4, r5, 0x0
/* 801BD6E4 001BA7C4  38 A0 20 00 */	li r5, 0x2000
/* 801BD6E8 001BA7C8  4B E4 5E 59 */	bl memcpy
.L_801BD6EC:
/* 801BD6EC 001BA7CC  80 1F 00 D0 */	lwz r0, 0xd0(r31)
/* 801BD6F0 001BA7D0  28 00 00 00 */	cmplwi r0, 0x0
/* 801BD6F4 001BA7D4  40 82 00 10 */	bne .L_801BD704
/* 801BD6F8 001BA7D8  38 7F 00 00 */	addi r3, r31, 0x0
/* 801BD6FC 001BA7DC  38 9E 00 00 */	addi r4, r30, 0x0
/* 801BD700 001BA7E0  4B FF E6 9D */	bl __CARDPutControlBlock
.L_801BD704:
/* 801BD704 001BA7E4  80 1F 00 D8 */	lwz r0, 0xd8(r31)
/* 801BD708 001BA7E8  28 00 00 00 */	cmplwi r0, 0x0
/* 801BD70C 001BA7EC  7C 0C 03 78 */	mr r12, r0
/* 801BD710 001BA7F0  41 82 00 1C */	beq .L_801BD72C
/* 801BD714 001BA7F4  38 00 00 00 */	li r0, 0x0
/* 801BD718 001BA7F8  7D 88 03 A6 */	mtlr r12
/* 801BD71C 001BA7FC  90 1F 00 D8 */	stw r0, 0xd8(r31)
/* 801BD720 001BA800  38 7D 00 00 */	addi r3, r29, 0x0
/* 801BD724 001BA804  38 9E 00 00 */	addi r4, r30, 0x0
/* 801BD728 001BA808  4E 80 00 21 */	blrl
.L_801BD72C:
/* 801BD72C 001BA80C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801BD730 001BA810  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801BD734 001BA814  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801BD738 001BA818  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801BD73C 001BA81C  38 21 00 20 */	addi r1, r1, 0x20
/* 801BD740 001BA820  7C 08 03 A6 */	mtlr r0
/* 801BD744 001BA824  4E 80 00 20 */	blr
.endfn WriteCallback

.fn EraseCallback, local
/* 801BD748 001BA828  7C 08 02 A6 */	mflr r0
/* 801BD74C 001BA82C  90 01 00 04 */	stw r0, 0x4(r1)
/* 801BD750 001BA830  94 21 FF D8 */	stwu r1, -0x28(r1)
/* 801BD754 001BA834  93 E1 00 24 */	stw r31, 0x24(r1)
/* 801BD758 001BA838  3B E3 00 00 */	addi r31, r3, 0x0
/* 801BD75C 001BA83C  3C 60 80 38 */	lis r3, __CARDBlock@ha
/* 801BD760 001BA840  93 C1 00 20 */	stw r30, 0x20(r1)
/* 801BD764 001BA844  1C BF 01 10 */	mulli r5, r31, 0x110
/* 801BD768 001BA848  93 A1 00 1C */	stw r29, 0x1c(r1)
/* 801BD76C 001BA84C  38 03 D4 80 */	addi r0, r3, __CARDBlock@l
/* 801BD770 001BA850  7C 9D 23 79 */	mr. r29, r4
/* 801BD774 001BA854  7F C0 2A 14 */	add r30, r0, r5
/* 801BD778 001BA858  41 80 00 3C */	blt .L_801BD7B4
/* 801BD77C 001BA85C  80 BE 00 88 */	lwz r5, 0x88(r30)
/* 801BD780 001BA860  3C 60 80 1C */	lis r3, WriteCallback@ha
/* 801BD784 001BA864  80 1E 00 80 */	lwz r0, 0x80(r30)
/* 801BD788 001BA868  38 E3 D6 74 */	addi r7, r3, WriteCallback@l
/* 801BD78C 001BA86C  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 801BD790 001BA870  7C 00 28 50 */	subf r0, r0, r5
/* 801BD794 001BA874  54 00 9B 7E */	srwi r0, r0, 13
/* 801BD798 001BA878  7C 83 01 D6 */	mullw r4, r3, r0
/* 801BD79C 001BA87C  38 C5 00 00 */	addi r6, r5, 0x0
/* 801BD7A0 001BA880  38 7F 00 00 */	addi r3, r31, 0x0
/* 801BD7A4 001BA884  38 A0 20 00 */	li r5, 0x2000
/* 801BD7A8 001BA888  4B FF FE 49 */	bl __CARDWrite
/* 801BD7AC 001BA88C  7C 7D 1B 79 */	mr. r29, r3
/* 801BD7B0 001BA890  40 80 00 44 */	bge .L_801BD7F4
.L_801BD7B4:
/* 801BD7B4 001BA894  80 1E 00 D0 */	lwz r0, 0xd0(r30)
/* 801BD7B8 001BA898  28 00 00 00 */	cmplwi r0, 0x0
/* 801BD7BC 001BA89C  40 82 00 10 */	bne .L_801BD7CC
/* 801BD7C0 001BA8A0  38 7E 00 00 */	addi r3, r30, 0x0
/* 801BD7C4 001BA8A4  38 9D 00 00 */	addi r4, r29, 0x0
/* 801BD7C8 001BA8A8  4B FF E5 D5 */	bl __CARDPutControlBlock
.L_801BD7CC:
/* 801BD7CC 001BA8AC  80 1E 00 D8 */	lwz r0, 0xd8(r30)
/* 801BD7D0 001BA8B0  28 00 00 00 */	cmplwi r0, 0x0
/* 801BD7D4 001BA8B4  7C 0C 03 78 */	mr r12, r0
/* 801BD7D8 001BA8B8  41 82 00 1C */	beq .L_801BD7F4
/* 801BD7DC 001BA8BC  38 00 00 00 */	li r0, 0x0
/* 801BD7E0 001BA8C0  7D 88 03 A6 */	mtlr r12
/* 801BD7E4 001BA8C4  90 1E 00 D8 */	stw r0, 0xd8(r30)
/* 801BD7E8 001BA8C8  38 7F 00 00 */	addi r3, r31, 0x0
/* 801BD7EC 001BA8CC  38 9D 00 00 */	addi r4, r29, 0x0
/* 801BD7F0 001BA8D0  4E 80 00 21 */	blrl
.L_801BD7F4:
/* 801BD7F4 001BA8D4  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 801BD7F8 001BA8D8  83 E1 00 24 */	lwz r31, 0x24(r1)
/* 801BD7FC 001BA8DC  83 C1 00 20 */	lwz r30, 0x20(r1)
/* 801BD800 001BA8E0  83 A1 00 1C */	lwz r29, 0x1c(r1)
/* 801BD804 001BA8E4  38 21 00 28 */	addi r1, r1, 0x28
/* 801BD808 001BA8E8  7C 08 03 A6 */	mtlr r0
/* 801BD80C 001BA8EC  4E 80 00 20 */	blr
.endfn EraseCallback

.fn __CARDAllocBlock, global
/* 801BD810 001BA8F0  7C 08 02 A6 */	mflr r0
/* 801BD814 001BA8F4  1C E3 01 10 */	mulli r7, r3, 0x110
/* 801BD818 001BA8F8  90 01 00 04 */	stw r0, 0x4(r1)
/* 801BD81C 001BA8FC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801BD820 001BA900  3C C0 80 38 */	lis r6, __CARDBlock@ha
/* 801BD824 001BA904  38 06 D4 80 */	addi r0, r6, __CARDBlock@l
/* 801BD828 001BA908  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801BD82C 001BA90C  7D 20 3A 14 */	add r9, r0, r7
/* 801BD830 001BA910  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801BD834 001BA914  80 09 00 00 */	lwz r0, 0x0(r9)
/* 801BD838 001BA918  2C 00 00 00 */	cmpwi r0, 0x0
/* 801BD83C 001BA91C  40 82 00 0C */	bne .L_801BD848
/* 801BD840 001BA920  38 60 FF FD */	li r3, -0x3
/* 801BD844 001BA924  48 00 00 CC */	b .L_801BD910
.L_801BD848:
/* 801BD848 001BA928  81 09 00 88 */	lwz r8, 0x88(r9)
/* 801BD84C 001BA92C  A0 08 00 06 */	lhz r0, 0x6(r8)
/* 801BD850 001BA930  7C 00 20 40 */	cmplw r0, r4
/* 801BD854 001BA934  40 80 00 0C */	bge .L_801BD860
/* 801BD858 001BA938  38 60 FF F7 */	li r3, -0x9
/* 801BD85C 001BA93C  48 00 00 B4 */	b .L_801BD910
.L_801BD860:
/* 801BD860 001BA940  7C 04 00 50 */	subf r0, r4, r0
/* 801BD864 001BA944  B0 08 00 06 */	sth r0, 0x6(r8)
/* 801BD868 001BA948  3C C0 00 01 */	lis r6, 0x1
/* 801BD86C 001BA94C  39 86 FF FF */	addi r12, r6, -0x1
/* 801BD870 001BA950  A1 68 00 08 */	lhz r11, 0x8(r8)
/* 801BD874 001BA954  38 0C 00 00 */	addi r0, r12, 0x0
/* 801BD878 001BA958  3B C0 00 00 */	li r30, 0x0
/* 801BD87C 001BA95C  48 00 00 7C */	b .L_801BD8F8
.L_801BD880:
/* 801BD880 001BA960  A1 49 00 10 */	lhz r10, 0x10(r9)
/* 801BD884 001BA964  3B DE 00 01 */	addi r30, r30, 0x1
/* 801BD888 001BA968  57 C6 04 3E */	clrlwi r6, r30, 16
/* 801BD88C 001BA96C  38 EA FF FB */	addi r7, r10, -0x5
/* 801BD890 001BA970  7C 07 30 00 */	cmpw r7, r6
/* 801BD894 001BA974  40 80 00 0C */	bge .L_801BD8A0
/* 801BD898 001BA978  38 60 FF FA */	li r3, -0x6
/* 801BD89C 001BA97C  48 00 00 74 */	b .L_801BD910
.L_801BD8A0:
/* 801BD8A0 001BA980  39 6B 00 01 */	addi r11, r11, 0x1
/* 801BD8A4 001BA984  55 66 04 3E */	clrlwi r6, r11, 16
/* 801BD8A8 001BA988  28 06 00 05 */	cmplwi r6, 0x5
/* 801BD8AC 001BA98C  41 80 00 0C */	blt .L_801BD8B8
/* 801BD8B0 001BA990  7C 06 50 40 */	cmplw r6, r10
/* 801BD8B4 001BA994  41 80 00 08 */	blt .L_801BD8BC
.L_801BD8B8:
/* 801BD8B8 001BA998  39 60 00 05 */	li r11, 0x5
.L_801BD8BC:
/* 801BD8BC 001BA99C  55 66 0B FC */	clrlslwi r6, r11, 16, 1
/* 801BD8C0 001BA9A0  7C E8 32 14 */	add r7, r8, r6
/* 801BD8C4 001BA9A4  A0 C7 00 00 */	lhz r6, 0x0(r7)
/* 801BD8C8 001BA9A8  28 06 00 00 */	cmplwi r6, 0x0
/* 801BD8CC 001BA9AC  40 82 00 2C */	bne .L_801BD8F8
/* 801BD8D0 001BA9B0  55 86 04 3E */	clrlwi r6, r12, 16
/* 801BD8D4 001BA9B4  28 06 FF FF */	cmplwi r6, 0xffff
/* 801BD8D8 001BA9B8  40 82 00 0C */	bne .L_801BD8E4
/* 801BD8DC 001BA9BC  7D 6C 5B 78 */	mr r12, r11
/* 801BD8E0 001BA9C0  48 00 00 0C */	b .L_801BD8EC
.L_801BD8E4:
/* 801BD8E4 001BA9C4  57 E6 0B FC */	clrlslwi r6, r31, 16, 1
/* 801BD8E8 001BA9C8  7D 68 33 2E */	sthx r11, r8, r6
.L_801BD8EC:
/* 801BD8EC 001BA9CC  B0 07 00 00 */	sth r0, 0x0(r7)
/* 801BD8F0 001BA9D0  3B EB 00 00 */	addi r31, r11, 0x0
/* 801BD8F4 001BA9D4  38 84 FF FF */	addi r4, r4, -0x1
.L_801BD8F8:
/* 801BD8F8 001BA9D8  28 04 00 00 */	cmplwi r4, 0x0
/* 801BD8FC 001BA9DC  40 82 FF 84 */	bne .L_801BD880
/* 801BD900 001BA9E0  B1 68 00 08 */	sth r11, 0x8(r8)
/* 801BD904 001BA9E4  7D 04 43 78 */	mr r4, r8
/* 801BD908 001BA9E8  B1 89 00 BE */	sth r12, 0xbe(r9)
/* 801BD90C 001BA9EC  48 00 00 B9 */	bl __CARDUpdateFatBlock
.L_801BD910:
/* 801BD910 001BA9F0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801BD914 001BA9F4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801BD918 001BA9F8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801BD91C 001BA9FC  38 21 00 20 */	addi r1, r1, 0x20
/* 801BD920 001BAA00  7C 08 03 A6 */	mtlr r0
/* 801BD924 001BAA04  4E 80 00 20 */	blr
.endfn __CARDAllocBlock

.fn __CARDFreeBlock, global
/* 801BD928 001BAA08  7C 08 02 A6 */	mflr r0
/* 801BD92C 001BAA0C  1C E3 01 10 */	mulli r7, r3, 0x110
/* 801BD930 001BAA10  90 01 00 04 */	stw r0, 0x4(r1)
/* 801BD934 001BAA14  3C C0 80 38 */	lis r6, __CARDBlock@ha
/* 801BD938 001BAA18  94 21 FF F8 */	stwu r1, -0x8(r1)
/* 801BD93C 001BAA1C  38 06 D4 80 */	addi r0, r6, __CARDBlock@l
/* 801BD940 001BAA20  7D 20 3A 14 */	add r9, r0, r7
/* 801BD944 001BAA24  80 09 00 00 */	lwz r0, 0x0(r9)
/* 801BD948 001BAA28  2C 00 00 00 */	cmpwi r0, 0x0
/* 801BD94C 001BAA2C  40 82 00 0C */	bne .L_801BD958
/* 801BD950 001BAA30  38 60 FF FD */	li r3, -0x3
/* 801BD954 001BAA34  48 00 00 60 */	b .L_801BD9B4
.L_801BD958:
/* 801BD958 001BAA38  81 09 00 88 */	lwz r8, 0x88(r9)
/* 801BD95C 001BAA3C  38 E0 00 00 */	li r7, 0x0
/* 801BD960 001BAA40  48 00 00 40 */	b .L_801BD9A0
.L_801BD964:
/* 801BD964 001BAA44  54 84 04 3E */	clrlwi r4, r4, 16
/* 801BD968 001BAA48  28 04 00 05 */	cmplwi r4, 0x5
/* 801BD96C 001BAA4C  41 80 00 10 */	blt .L_801BD97C
/* 801BD970 001BAA50  A0 09 00 10 */	lhz r0, 0x10(r9)
/* 801BD974 001BAA54  7C 04 00 40 */	cmplw r4, r0
/* 801BD978 001BAA58  41 80 00 0C */	blt .L_801BD984
.L_801BD97C:
/* 801BD97C 001BAA5C  38 60 FF FA */	li r3, -0x6
/* 801BD980 001BAA60  48 00 00 34 */	b .L_801BD9B4
.L_801BD984:
/* 801BD984 001BAA64  54 80 08 3C */	slwi r0, r4, 1
/* 801BD988 001BAA68  7C C8 02 14 */	add r6, r8, r0
/* 801BD98C 001BAA6C  A0 86 00 00 */	lhz r4, 0x0(r6)
/* 801BD990 001BAA70  B0 E6 00 00 */	sth r7, 0x0(r6)
/* 801BD994 001BAA74  A0 C8 00 06 */	lhz r6, 0x6(r8)
/* 801BD998 001BAA78  38 06 00 01 */	addi r0, r6, 0x1
/* 801BD99C 001BAA7C  B0 08 00 06 */	sth r0, 0x6(r8)
.L_801BD9A0:
/* 801BD9A0 001BAA80  54 80 04 3E */	clrlwi r0, r4, 16
/* 801BD9A4 001BAA84  28 00 FF FF */	cmplwi r0, 0xffff
/* 801BD9A8 001BAA88  40 82 FF BC */	bne .L_801BD964
/* 801BD9AC 001BAA8C  7D 04 43 78 */	mr r4, r8
/* 801BD9B0 001BAA90  48 00 00 15 */	bl __CARDUpdateFatBlock
.L_801BD9B4:
/* 801BD9B4 001BAA94  80 01 00 0C */	lwz r0, 0xc(r1)
/* 801BD9B8 001BAA98  38 21 00 08 */	addi r1, r1, 0x8
/* 801BD9BC 001BAA9C  7C 08 03 A6 */	mtlr r0
/* 801BD9C0 001BAAA0  4E 80 00 20 */	blr
.endfn __CARDFreeBlock

.fn __CARDUpdateFatBlock, global
/* 801BD9C4 001BAAA4  7C 08 02 A6 */	mflr r0
/* 801BD9C8 001BAAA8  90 01 00 04 */	stw r0, 0x4(r1)
/* 801BD9CC 001BAAAC  94 21 FF D8 */	stwu r1, -0x28(r1)
/* 801BD9D0 001BAAB0  93 E1 00 24 */	stw r31, 0x24(r1)
/* 801BD9D4 001BAAB4  93 C1 00 20 */	stw r30, 0x20(r1)
/* 801BD9D8 001BAAB8  3B C5 00 00 */	addi r30, r5, 0x0
/* 801BD9DC 001BAABC  93 A1 00 1C */	stw r29, 0x1c(r1)
/* 801BD9E0 001BAAC0  3B A4 00 00 */	addi r29, r4, 0x0
/* 801BD9E4 001BAAC4  38 BD 00 00 */	addi r5, r29, 0x0
/* 801BD9E8 001BAAC8  93 81 00 18 */	stw r28, 0x18(r1)
/* 801BD9EC 001BAACC  3B 83 00 00 */	addi r28, r3, 0x0
/* 801BD9F0 001BAAD0  38 DD 00 02 */	addi r6, r29, 0x2
/* 801BD9F4 001BAAD4  A0 64 00 04 */	lhz r3, 0x4(r4)
/* 801BD9F8 001BAAD8  1C 9C 01 10 */	mulli r4, r28, 0x110
/* 801BD9FC 001BAADC  38 03 00 01 */	addi r0, r3, 0x1
/* 801BDA00 001BAAE0  3C 60 80 38 */	lis r3, __CARDBlock@ha
/* 801BDA04 001BAAE4  B0 1D 00 04 */	sth r0, 0x4(r29)
/* 801BDA08 001BAAE8  38 03 D4 80 */	addi r0, r3, __CARDBlock@l
/* 801BDA0C 001BAAEC  7F E0 22 14 */	add r31, r0, r4
/* 801BDA10 001BAAF0  38 7D 00 04 */	addi r3, r29, 0x4
/* 801BDA14 001BAAF4  38 80 1F FC */	li r4, 0x1ffc
/* 801BDA18 001BAAF8  48 00 02 BD */	bl __CARDCheckSum
/* 801BDA1C 001BAAFC  38 7D 00 00 */	addi r3, r29, 0x0
/* 801BDA20 001BAB00  38 80 20 00 */	li r4, 0x2000
/* 801BDA24 001BAB04  48 01 49 65 */	bl DCStoreRange
/* 801BDA28 001BAB08  93 DF 00 D8 */	stw r30, 0xd8(r31)
/* 801BDA2C 001BAB0C  3C 60 80 1C */	lis r3, EraseCallback@ha
/* 801BDA30 001BAB10  38 A3 D7 48 */	addi r5, r3, EraseCallback@l
/* 801BDA34 001BAB14  80 1F 00 80 */	lwz r0, 0x80(r31)
/* 801BDA38 001BAB18  7F 83 E3 78 */	mr r3, r28
/* 801BDA3C 001BAB1C  80 9F 00 0C */	lwz r4, 0xc(r31)
/* 801BDA40 001BAB20  7C 00 E8 50 */	subf r0, r0, r29
/* 801BDA44 001BAB24  54 00 9B 7E */	srwi r0, r0, 13
/* 801BDA48 001BAB28  7C 84 01 D6 */	mullw r4, r4, r0
/* 801BDA4C 001BAB2C  4B FF E0 CD */	bl __CARDEraseSector
/* 801BDA50 001BAB30  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 801BDA54 001BAB34  83 E1 00 24 */	lwz r31, 0x24(r1)
/* 801BDA58 001BAB38  83 C1 00 20 */	lwz r30, 0x20(r1)
/* 801BDA5C 001BAB3C  83 A1 00 1C */	lwz r29, 0x1c(r1)
/* 801BDA60 001BAB40  83 81 00 18 */	lwz r28, 0x18(r1)
/* 801BDA64 001BAB44  38 21 00 28 */	addi r1, r1, 0x28
/* 801BDA68 001BAB48  7C 08 03 A6 */	mtlr r0
/* 801BDA6C 001BAB4C  4E 80 00 20 */	blr
.endfn __CARDUpdateFatBlock
