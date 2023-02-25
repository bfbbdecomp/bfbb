.include "macros.inc"
.file "xBase.cpp"

# 0x80009400 - 0x80009528
.text
.balign 4

# xBaseInit(xBase*, xBaseAsset*)
.fn xBaseInit__FP5xBaseP10xBaseAsset, global
/* 80009400 000064E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80009404 000064E4  7C 08 02 A6 */	mflr r0
/* 80009408 000064E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8000940C 000064EC  38 00 00 00 */	li r0, 0x0
/* 80009410 000064F0  80 A4 00 00 */	lwz r5, 0x0(r4)
/* 80009414 000064F4  90 A3 00 00 */	stw r5, 0x0(r3)
/* 80009418 000064F8  88 A4 00 04 */	lbz r5, 0x4(r4)
/* 8000941C 000064FC  98 A3 00 04 */	stb r5, 0x4(r3)
/* 80009420 00006500  A0 A4 00 06 */	lhz r5, 0x6(r4)
/* 80009424 00006504  B0 A3 00 06 */	sth r5, 0x6(r3)
/* 80009428 00006508  88 84 00 05 */	lbz r4, 0x5(r4)
/* 8000942C 0000650C  98 83 00 05 */	stb r4, 0x5(r3)
/* 80009430 00006510  90 03 00 08 */	stw r0, 0x8(r3)
/* 80009434 00006514  48 00 00 F5 */	bl xBaseValidate__FP5xBase
/* 80009438 00006518  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8000943C 0000651C  7C 08 03 A6 */	mtlr r0
/* 80009440 00006520  38 21 00 10 */	addi r1, r1, 0x10
/* 80009444 00006524  4E 80 00 20 */	blr
.endfn xBaseInit__FP5xBaseP10xBaseAsset

# xBaseSetup(xBase*)
.fn xBaseSetup__FP5xBase, global
/* 80009448 00006528  4E 80 00 20 */	blr
.endfn xBaseSetup__FP5xBase

# xBaseSave(xBase*, xSerial*)
.fn xBaseSave__FP5xBaseP7xSerial, global
/* 8000944C 0000652C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80009450 00006530  7C 08 02 A6 */	mflr r0
/* 80009454 00006534  90 01 00 14 */	stw r0, 0x14(r1)
/* 80009458 00006538  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8000945C 0000653C  7C 9F 23 78 */	mr r31, r4
/* 80009460 00006540  48 00 00 D9 */	bl xBaseIsEnabled__FPC5xBase
/* 80009464 00006544  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80009468 00006548  41 82 00 14 */	beq .L_8000947C
/* 8000946C 0000654C  7F E3 FB 78 */	mr r3, r31
/* 80009470 00006550  38 80 00 01 */	li r4, 0x1
/* 80009474 00006554  48 03 9B 99 */	bl Write_b1__7xSerialFi
/* 80009478 00006558  48 00 00 10 */	b .L_80009488
.L_8000947C:
/* 8000947C 0000655C  7F E3 FB 78 */	mr r3, r31
/* 80009480 00006560  38 80 00 00 */	li r4, 0x0
/* 80009484 00006564  48 03 9B 89 */	bl Write_b1__7xSerialFi
.L_80009488:
/* 80009488 00006568  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8000948C 0000656C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80009490 00006570  7C 08 03 A6 */	mtlr r0
/* 80009494 00006574  38 21 00 10 */	addi r1, r1, 0x10
/* 80009498 00006578  4E 80 00 20 */	blr
.endfn xBaseSave__FP5xBaseP7xSerial

# xBaseLoad(xBase*, xSerial*)
.fn xBaseLoad__FP5xBaseP7xSerial, global
/* 8000949C 0000657C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800094A0 00006580  7C 08 02 A6 */	mflr r0
/* 800094A4 00006584  90 01 00 24 */	stw r0, 0x24(r1)
/* 800094A8 00006588  38 00 00 00 */	li r0, 0x0
/* 800094AC 0000658C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800094B0 00006590  7C 7F 1B 78 */	mr r31, r3
/* 800094B4 00006594  7C 83 23 78 */	mr r3, r4
/* 800094B8 00006598  38 81 00 08 */	addi r4, r1, 0x8
/* 800094BC 0000659C  90 01 00 08 */	stw r0, 0x8(r1)
/* 800094C0 000065A0  48 03 9D ED */	bl Read_b1__7xSerialFPi
/* 800094C4 000065A4  80 01 00 08 */	lwz r0, 0x8(r1)
/* 800094C8 000065A8  2C 00 00 00 */	cmpwi r0, 0x0
/* 800094CC 000065AC  41 82 00 10 */	beq .L_800094DC
/* 800094D0 000065B0  7F E3 FB 78 */	mr r3, r31
/* 800094D4 000065B4  48 00 00 81 */	bl xBaseEnable__FP5xBase
/* 800094D8 000065B8  48 00 00 0C */	b .L_800094E4
.L_800094DC:
/* 800094DC 000065BC  7F E3 FB 78 */	mr r3, r31
/* 800094E0 000065C0  48 00 00 65 */	bl xBaseDisable__FP5xBase
.L_800094E4:
/* 800094E4 000065C4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800094E8 000065C8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800094EC 000065CC  7C 08 03 A6 */	mtlr r0
/* 800094F0 000065D0  38 21 00 20 */	addi r1, r1, 0x20
/* 800094F4 000065D4  4E 80 00 20 */	blr
.endfn xBaseLoad__FP5xBaseP7xSerial

# xBaseReset(xBase*, xBaseAsset*)
.fn xBaseReset__FP5xBaseP10xBaseAsset, global
/* 800094F8 000065D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800094FC 000065DC  7C 08 02 A6 */	mflr r0
/* 80009500 000065E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80009504 000065E4  A0 04 00 06 */	lhz r0, 0x6(r4)
/* 80009508 000065E8  A0 83 00 06 */	lhz r4, 0x6(r3)
/* 8000950C 000065EC  50 80 06 F6 */	rlwimi r0, r4, 0, 27, 27
/* 80009510 000065F0  B0 03 00 06 */	sth r0, 0x6(r3)
/* 80009514 000065F4  48 00 00 15 */	bl xBaseValidate__FP5xBase
/* 80009518 000065F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8000951C 000065FC  7C 08 03 A6 */	mtlr r0
/* 80009520 00006600  38 21 00 10 */	addi r1, r1, 0x10
/* 80009524 00006604  4E 80 00 20 */	blr
.endfn xBaseReset__FP5xBaseP10xBaseAsset

# 0x80009528 - 0x80009564
.section .text, "ax", unique, 1
.balign 4

# xBaseValidate(xBase*)
.fn xBaseValidate__FP5xBase, weak
/* 80009528 00006608  A0 03 00 06 */	lhz r0, 0x6(r3)
/* 8000952C 0000660C  60 00 00 04 */	ori r0, r0, 0x4
/* 80009530 00006610  B0 03 00 06 */	sth r0, 0x6(r3)
/* 80009534 00006614  4E 80 00 20 */	blr
.endfn xBaseValidate__FP5xBase

# xBaseIsEnabled(const xBase*)
.fn xBaseIsEnabled__FPC5xBase, weak
/* 80009538 00006618  A0 03 00 06 */	lhz r0, 0x6(r3)
/* 8000953C 0000661C  54 03 07 FE */	clrlwi r3, r0, 31
/* 80009540 00006620  4E 80 00 20 */	blr
.endfn xBaseIsEnabled__FPC5xBase

# xBaseDisable(xBase*)
.fn xBaseDisable__FP5xBase, weak
/* 80009544 00006624  A0 03 00 06 */	lhz r0, 0x6(r3)
/* 80009548 00006628  54 00 04 3C */	rlwinm r0, r0, 0, 16, 30
/* 8000954C 0000662C  B0 03 00 06 */	sth r0, 0x6(r3)
/* 80009550 00006630  4E 80 00 20 */	blr
.endfn xBaseDisable__FP5xBase

# xBaseEnable(xBase*)
.fn xBaseEnable__FP5xBase, weak
/* 80009554 00006634  A0 03 00 06 */	lhz r0, 0x6(r3)
/* 80009558 00006638  60 00 00 01 */	ori r0, r0, 0x1
/* 8000955C 0000663C  B0 03 00 06 */	sth r0, 0x6(r3)
/* 80009560 00006640  4E 80 00 20 */	blr
.endfn xBaseEnable__FP5xBase
