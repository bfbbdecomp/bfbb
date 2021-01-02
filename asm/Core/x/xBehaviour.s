.include "macros.inc"

.if 0

.section .text  # 0x8010E9B0 - 0x8010EB94

/* RemHead__17xListItem<5xGoal>FPP5xGoal */
.global RemHead__17xListItem_esc__0_5xGoal_esc__1_FPP5xGoal
RemHead__17xListItem_esc__0_5xGoal_esc__1_FPP5xGoal:
/* 8010E9FC 0010B7FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010EA00 0010B800  7C 08 02 A6 */	mflr r0
/* 8010EA04 0010B804  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010EA08 0010B808  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8010EA0C 0010B80C  93 C1 00 08 */	stw r30, 8(r1)
/* 8010EA10 0010B810  7C 9E 23 78 */	mr r30, r4
/* 8010EA14 0010B814  80 64 00 00 */	lwz r3, 0(r4)
/* 8010EA18 0010B818  28 03 00 00 */	cmplwi r3, 0
/* 8010EA1C 0010B81C  40 82 00 0C */	bne lbl_8010EA28
/* 8010EA20 0010B820  38 60 00 00 */	li r3, 0
/* 8010EA24 0010B824  48 00 00 30 */	b lbl_8010EA54
lbl_8010EA28:
/* 8010EA28 0010B828  48 00 00 45 */	bl Head__17xListItem_esc__0_5xGoal_esc__1_Fv
/* 8010EA2C 0010B82C  7C 7F 1B 79 */	or. r31, r3, r3
/* 8010EA30 0010B830  40 82 00 10 */	bne lbl_8010EA40
/* 8010EA34 0010B834  38 00 00 00 */	li r0, 0
/* 8010EA38 0010B838  90 1E 00 00 */	stw r0, 0(r30)
/* 8010EA3C 0010B83C  48 00 00 14 */	b lbl_8010EA50
lbl_8010EA40:
/* 8010EA40 0010B840  4B FF FF 91 */	bl Next__17xListItem_esc__0_5xGoal_esc__1_Fv
/* 8010EA44 0010B844  90 7E 00 00 */	stw r3, 0(r30)
/* 8010EA48 0010B848  7F E3 FB 78 */	mr r3, r31
/* 8010EA4C 0010B84C  4B FC A8 29 */	bl Remove__17xListItem_esc__0_5xGoal_esc__1_Fv
lbl_8010EA50:
/* 8010EA50 0010B850  7F E3 FB 78 */	mr r3, r31
lbl_8010EA54:
/* 8010EA54 0010B854  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010EA58 0010B858  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8010EA5C 0010B85C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8010EA60 0010B860  7C 08 03 A6 */	mtlr r0
/* 8010EA64 0010B864  38 21 00 10 */	addi r1, r1, 0x10
/* 8010EA68 0010B868  4E 80 00 20 */	blr 

/* Head__17xListItem<5xGoal>Fv */
.global Head__17xListItem_esc__0_5xGoal_esc__1_Fv
Head__17xListItem_esc__0_5xGoal_esc__1_Fv:
/* 8010EA6C 0010B86C  7C 64 1B 79 */	or. r4, r3, r3
/* 8010EA70 0010B870  40 82 00 10 */	bne lbl_8010EA80
/* 8010EA74 0010B874  4E 80 00 20 */	blr 
/* 8010EA78 0010B878  48 00 00 08 */	b lbl_8010EA80
lbl_8010EA7C:
/* 8010EA7C 0010B87C  7C 04 03 78 */	mr r4, r0
lbl_8010EA80:
/* 8010EA80 0010B880  80 04 00 08 */	lwz r0, 8(r4)
/* 8010EA84 0010B884  28 00 00 00 */	cmplwi r0, 0
/* 8010EA88 0010B888  40 82 FF F4 */	bne lbl_8010EA7C
/* 8010EA8C 0010B88C  7C 83 23 78 */	mr r3, r4
/* 8010EA90 0010B890  4E 80 00 20 */	blr 

.global GetOwner__5xGoalCFv
GetOwner__5xGoalCFv:
/* 8010EA94 0010B894  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010EA98 0010B898  7C 08 02 A6 */	mflr r0
/* 8010EA9C 0010B89C  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8010EAA0 0010B8A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010EAA4 0010B8A4  48 00 00 E9 */	bl GetClient__7xPsycheFv
/* 8010EAA8 0010B8A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010EAAC 0010B8AC  7C 08 03 A6 */	mtlr r0
/* 8010EAB0 0010B8B0  38 21 00 10 */	addi r1, r1, 0x10
/* 8010EAB4 0010B8B4  4E 80 00 20 */	blr 

.endif

