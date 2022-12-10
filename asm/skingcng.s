.include "macros.inc"
.file "skingcng.c"

# 0x8020F7DC - 0x8020F894
.text
.balign 4

.fn _rpSkinPipelinesCreate, global
/* 8020F7DC 0020C8BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020F7E0 0020C8C0  7C 08 02 A6 */	mflr r0
/* 8020F7E4 0020C8C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020F7E8 0020C8C8  54 60 07 FF */	clrlwi. r0, r3, 31
/* 8020F7EC 0020C8CC  3C 60 80 2B */	lis r3, _rpSkinGlobals@ha
/* 8020F7F0 0020C8D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8020F7F4 0020C8D4  3B E3 76 F0 */	addi r31, r3, _rpSkinGlobals@l
/* 8020F7F8 0020C8D8  41 82 00 28 */	beq .L_8020F820
/* 8020F7FC 0020C8DC  3C 80 80 21 */	lis r4, _rpSkinInstanceCallback@ha
/* 8020F800 0020C8E0  3C A0 80 21 */	lis r5, _rpSkinAtomicReinstanceCallBack@ha
/* 8020F804 0020C8E4  3C C0 80 21 */	lis r6, _rpSkinRenderCallback@ha
/* 8020F808 0020C8E8  38 60 00 01 */	li r3, 0x1
/* 8020F80C 0020C8EC  38 84 BB F0 */	addi r4, r4, _rpSkinInstanceCallback@l
/* 8020F810 0020C8F0  38 A5 BC FC */	addi r5, r5, _rpSkinAtomicReinstanceCallBack@l
/* 8020F814 0020C8F4  38 C6 BE A8 */	addi r6, r6, _rpSkinRenderCallback@l
/* 8020F818 0020C8F8  4B FF CF C9 */	bl _rpSkinPipelineCreate
/* 8020F81C 0020C8FC  90 7F 00 28 */	stw r3, 0x28(r31)
.L_8020F820:
/* 8020F820 0020C900  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020F824 0020C904  38 60 00 01 */	li r3, 0x1
/* 8020F828 0020C908  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8020F82C 0020C90C  7C 08 03 A6 */	mtlr r0
/* 8020F830 0020C910  38 21 00 10 */	addi r1, r1, 0x10
/* 8020F834 0020C914  4E 80 00 20 */	blr
.endfn _rpSkinPipelinesCreate

.fn _rpSkinPipelinesDestroy, global
/* 8020F838 0020C918  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020F83C 0020C91C  7C 08 02 A6 */	mflr r0
/* 8020F840 0020C920  3C 60 80 2B */	lis r3, _rpSkinGlobals@ha
/* 8020F844 0020C924  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020F848 0020C928  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8020F84C 0020C92C  3B E3 76 F0 */	addi r31, r3, _rpSkinGlobals@l
/* 8020F850 0020C930  80 7F 00 28 */	lwz r3, 0x28(r31)
/* 8020F854 0020C934  28 03 00 00 */	cmplwi r3, 0x0
/* 8020F858 0020C938  41 82 00 10 */	beq .L_8020F868
/* 8020F85C 0020C93C  48 03 D3 ED */	bl _rxPipelineDestroy
/* 8020F860 0020C940  38 00 00 00 */	li r0, 0x0
/* 8020F864 0020C944  90 1F 00 28 */	stw r0, 0x28(r31)
.L_8020F868:
/* 8020F868 0020C948  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020F86C 0020C94C  38 60 00 01 */	li r3, 0x1
/* 8020F870 0020C950  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8020F874 0020C954  7C 08 03 A6 */	mtlr r0
/* 8020F878 0020C958  38 21 00 10 */	addi r1, r1, 0x10
/* 8020F87C 0020C95C  4E 80 00 20 */	blr
.endfn _rpSkinPipelinesDestroy

.fn _rpSkinPipelinesAttach, global
/* 8020F880 0020C960  3C 80 80 2B */	lis r4, _rpSkinGlobals@ha
/* 8020F884 0020C964  38 84 76 F0 */	addi r4, r4, _rpSkinGlobals@l
/* 8020F888 0020C968  80 04 00 28 */	lwz r0, 0x28(r4)
/* 8020F88C 0020C96C  90 03 00 6C */	stw r0, 0x6c(r3)
/* 8020F890 0020C970  4E 80 00 20 */	blr
.endfn _rpSkinPipelinesAttach
