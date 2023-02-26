.include "macros.inc"
.file "xBehaviour.cpp"

# 0x8010EA94 - 0x8010EB8C
.text
.balign 4

# xGoal::GetOwner() const
.fn GetOwner__5xGoalCFv, global
/* 8010EA94 0010BB74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010EA98 0010BB78  7C 08 02 A6 */	mflr r0
/* 8010EA9C 0010BB7C  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8010EAA0 0010BB80  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010EAA4 0010BB84  48 00 00 E9 */	bl GetClient__7xPsycheFv
/* 8010EAA8 0010BB88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010EAAC 0010BB8C  7C 08 03 A6 */	mtlr r0
/* 8010EAB0 0010BB90  38 21 00 10 */	addi r1, r1, 0x10
/* 8010EAB4 0010BB94  4E 80 00 20 */	blr
.endfn GetOwner__5xGoalCFv

# xGoal::Clear()
.fn Clear__5xGoalFv, global
/* 8010EAB8 0010BB98  38 00 00 00 */	li r0, 0x0
/* 8010EABC 0010BB9C  90 03 00 20 */	stw r0, 0x20(r3)
/* 8010EAC0 0010BBA0  4E 80 00 20 */	blr
.endfn Clear__5xGoalFv

# xGoal::PreCalc(float, void*)
.fn PreCalc__5xGoalFfPv, global
/* 8010EAC4 0010BBA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010EAC8 0010BBA8  7C 08 02 A6 */	mflr r0
/* 8010EACC 0010BBAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010EAD0 0010BBB0  81 83 00 2C */	lwz r12, 0x2c(r3)
/* 8010EAD4 0010BBB4  28 0C 00 00 */	cmplwi r12, 0x0
/* 8010EAD8 0010BBB8  41 82 00 18 */	beq .L_8010EAF0
/* 8010EADC 0010BBBC  7C 85 23 78 */	mr r5, r4
/* 8010EAE0 0010BBC0  80 83 00 34 */	lwz r4, 0x34(r3)
/* 8010EAE4 0010BBC4  7D 89 03 A6 */	mtctr r12
/* 8010EAE8 0010BBC8  4E 80 04 21 */	bctrl
/* 8010EAEC 0010BBCC  48 00 00 08 */	b .L_8010EAF4
.L_8010EAF0:
/* 8010EAF0 0010BBD0  38 60 00 00 */	li r3, 0x0
.L_8010EAF4:
/* 8010EAF4 0010BBD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010EAF8 0010BBD8  7C 08 03 A6 */	mtlr r0
/* 8010EAFC 0010BBDC  38 21 00 10 */	addi r1, r1, 0x10
/* 8010EB00 0010BBE0  4E 80 00 20 */	blr
.endfn PreCalc__5xGoalFfPv

# xGoal::EvalRules(en_trantype*, float, void*)
.fn EvalRules__5xGoalFP11en_trantypefPv, global
/* 8010EB04 0010BBE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010EB08 0010BBE8  7C 08 02 A6 */	mflr r0
/* 8010EB0C 0010BBEC  7C A6 2B 78 */	mr r6, r5
/* 8010EB10 0010BBF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010EB14 0010BBF4  81 83 00 30 */	lwz r12, 0x30(r3)
/* 8010EB18 0010BBF8  28 0C 00 00 */	cmplwi r12, 0x0
/* 8010EB1C 0010BBFC  41 82 00 18 */	beq .L_8010EB34
/* 8010EB20 0010BC00  7C 85 23 78 */	mr r5, r4
/* 8010EB24 0010BC04  80 83 00 34 */	lwz r4, 0x34(r3)
/* 8010EB28 0010BC08  7D 89 03 A6 */	mtctr r12
/* 8010EB2C 0010BC0C  4E 80 04 21 */	bctrl
/* 8010EB30 0010BC10  48 00 00 08 */	b .L_8010EB38
.L_8010EB34:
/* 8010EB34 0010BC14  38 60 00 00 */	li r3, 0x0
.L_8010EB38:
/* 8010EB38 0010BC18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010EB3C 0010BC1C  7C 08 03 A6 */	mtlr r0
/* 8010EB40 0010BC20  38 21 00 10 */	addi r1, r1, 0x10
/* 8010EB44 0010BC24  4E 80 00 20 */	blr
.endfn EvalRules__5xGoalFP11en_trantypefPv

# xGoal::Process(en_trantype*, float, void*, xScene*)
.fn Process__5xGoalFP11en_trantypefPvP6xScene, global
/* 8010EB48 0010BC28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010EB4C 0010BC2C  7C 08 02 A6 */	mflr r0
/* 8010EB50 0010BC30  7C A6 2B 78 */	mr r6, r5
/* 8010EB54 0010BC34  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010EB58 0010BC38  81 83 00 28 */	lwz r12, 0x28(r3)
/* 8010EB5C 0010BC3C  28 0C 00 00 */	cmplwi r12, 0x0
/* 8010EB60 0010BC40  41 82 00 18 */	beq .L_8010EB78
/* 8010EB64 0010BC44  7C 85 23 78 */	mr r5, r4
/* 8010EB68 0010BC48  80 83 00 34 */	lwz r4, 0x34(r3)
/* 8010EB6C 0010BC4C  7D 89 03 A6 */	mtctr r12
/* 8010EB70 0010BC50  4E 80 04 21 */	bctrl
/* 8010EB74 0010BC54  48 00 00 08 */	b .L_8010EB7C
.L_8010EB78:
/* 8010EB78 0010BC58  38 60 00 00 */	li r3, 0x0
.L_8010EB7C:
/* 8010EB7C 0010BC5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010EB80 0010BC60  7C 08 03 A6 */	mtlr r0
/* 8010EB84 0010BC64  38 21 00 10 */	addi r1, r1, 0x10
/* 8010EB88 0010BC68  4E 80 00 20 */	blr
.endfn Process__5xGoalFP11en_trantypefPvP6xScene

# 0x8010EB8C - 0x8010EB94
.section .text, "ax", unique, 1
.balign 4

# xPsyche::GetClient()
.fn GetClient__7xPsycheFv, weak
/* 8010EB8C 0010BC6C  80 63 00 00 */	lwz r3, 0x0(r3)
/* 8010EB90 0010BC70  4E 80 00 20 */	blr
.endfn GetClient__7xPsycheFv

# 0x802973D0 - 0x80297400
.data
.balign 8

# xGoal::__vtable
.obj __vt__5xGoal, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Enter__5xGoalFfPv
	.4byte Exit__5xGoalFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__5xGoalFfPv
	.4byte PreCalc__5xGoalFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__5xGoalFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
.endobj __vt__5xGoal
	.4byte 0x00000000
