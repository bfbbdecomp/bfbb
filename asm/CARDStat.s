.include "macros.inc"
.file "CARDStat.c"

# 0x801C13BC - 0x801C1884
.text
.balign 4

.fn UpdateIconOffsets, local
/* 801C13BC 001BE49C  81 03 00 2C */	lwz r8, 0x2c(r3)
/* 801C13C0 001BE4A0  3C 08 00 01 */	addis r0, r8, 0x1
/* 801C13C4 001BE4A4  28 00 FF FF */	cmplwi r0, 0xffff
/* 801C13C8 001BE4A8  40 82 00 18 */	bne .L_801C13E0
/* 801C13CC 001BE4AC  38 00 00 00 */	li r0, 0x0
/* 801C13D0 001BE4B0  98 04 00 2E */	stb r0, 0x2e(r4)
/* 801C13D4 001BE4B4  39 00 00 00 */	li r8, 0x0
/* 801C13D8 001BE4B8  B0 04 00 34 */	sth r0, 0x34(r4)
/* 801C13DC 001BE4BC  B0 04 00 36 */	sth r0, 0x36(r4)
.L_801C13E0:
/* 801C13E0 001BE4C0  88 03 00 07 */	lbz r0, 0x7(r3)
/* 801C13E4 001BE4C4  39 20 00 00 */	li r9, 0x0
/* 801C13E8 001BE4C8  54 00 07 BE */	clrlwi r0, r0, 30
/* 801C13EC 001BE4CC  2C 00 00 02 */	cmpwi r0, 0x2
/* 801C13F0 001BE4D0  41 82 00 28 */	beq .L_801C1418
/* 801C13F4 001BE4D4  40 80 00 38 */	bge .L_801C142C
/* 801C13F8 001BE4D8  2C 00 00 01 */	cmpwi r0, 0x1
/* 801C13FC 001BE4DC  40 80 00 08 */	bge .L_801C1404
/* 801C1400 001BE4E0  48 00 00 2C */	b .L_801C142C
.L_801C1404:
/* 801C1404 001BE4E4  91 04 00 3C */	stw r8, 0x3c(r4)
/* 801C1408 001BE4E8  38 08 0C 00 */	addi r0, r8, 0xc00
/* 801C140C 001BE4EC  39 08 0E 00 */	addi r8, r8, 0xe00
/* 801C1410 001BE4F0  90 04 00 40 */	stw r0, 0x40(r4)
/* 801C1414 001BE4F4  48 00 00 24 */	b .L_801C1438
.L_801C1418:
/* 801C1418 001BE4F8  91 04 00 3C */	stw r8, 0x3c(r4)
/* 801C141C 001BE4FC  38 00 FF FF */	li r0, -0x1
/* 801C1420 001BE500  39 08 18 00 */	addi r8, r8, 0x1800
/* 801C1424 001BE504  90 04 00 40 */	stw r0, 0x40(r4)
/* 801C1428 001BE508  48 00 00 10 */	b .L_801C1438
.L_801C142C:
/* 801C142C 001BE50C  38 00 FF FF */	li r0, -0x1
/* 801C1430 001BE510  90 04 00 3C */	stw r0, 0x3c(r4)
/* 801C1434 001BE514  90 04 00 40 */	stw r0, 0x40(r4)
.L_801C1438:
/* 801C1438 001BE518  38 00 00 02 */	li r0, 0x2
/* 801C143C 001BE51C  7C 09 03 A6 */	mtctr r0
/* 801C1440 001BE520  38 E4 00 00 */	addi r7, r4, 0x0
/* 801C1444 001BE524  39 40 00 00 */	li r10, 0x0
/* 801C1448 001BE528  38 C0 00 00 */	li r6, 0x0
/* 801C144C 001BE52C  38 00 FF FF */	li r0, -0x1
.L_801C1450:
/* 801C1450 001BE530  A0 A3 00 30 */	lhz r5, 0x30(r3)
/* 801C1454 001BE534  7C A5 36 30 */	sraw r5, r5, r6
/* 801C1458 001BE538  54 A5 07 BE */	clrlwi r5, r5, 30
/* 801C145C 001BE53C  2C 05 00 02 */	cmpwi r5, 0x2
/* 801C1460 001BE540  41 82 00 24 */	beq .L_801C1484
/* 801C1464 001BE544  40 80 00 2C */	bge .L_801C1490
/* 801C1468 001BE548  2C 05 00 01 */	cmpwi r5, 0x1
/* 801C146C 001BE54C  40 80 00 08 */	bge .L_801C1474
/* 801C1470 001BE550  48 00 00 20 */	b .L_801C1490
.L_801C1474:
/* 801C1474 001BE554  91 07 00 44 */	stw r8, 0x44(r7)
/* 801C1478 001BE558  39 20 00 01 */	li r9, 0x1
/* 801C147C 001BE55C  39 08 04 00 */	addi r8, r8, 0x400
/* 801C1480 001BE560  48 00 00 14 */	b .L_801C1494
.L_801C1484:
/* 801C1484 001BE564  91 07 00 44 */	stw r8, 0x44(r7)
/* 801C1488 001BE568  39 08 08 00 */	addi r8, r8, 0x800
/* 801C148C 001BE56C  48 00 00 08 */	b .L_801C1494
.L_801C1490:
/* 801C1490 001BE570  90 07 00 44 */	stw r0, 0x44(r7)
.L_801C1494:
/* 801C1494 001BE574  A0 A3 00 30 */	lhz r5, 0x30(r3)
/* 801C1498 001BE578  38 C6 00 02 */	addi r6, r6, 0x2
/* 801C149C 001BE57C  38 E7 00 04 */	addi r7, r7, 0x4
/* 801C14A0 001BE580  7C A5 36 30 */	sraw r5, r5, r6
/* 801C14A4 001BE584  54 A5 07 BE */	clrlwi r5, r5, 30
/* 801C14A8 001BE588  2C 05 00 02 */	cmpwi r5, 0x2
/* 801C14AC 001BE58C  41 82 00 24 */	beq .L_801C14D0
/* 801C14B0 001BE590  40 80 00 2C */	bge .L_801C14DC
/* 801C14B4 001BE594  2C 05 00 01 */	cmpwi r5, 0x1
/* 801C14B8 001BE598  40 80 00 08 */	bge .L_801C14C0
/* 801C14BC 001BE59C  48 00 00 20 */	b .L_801C14DC
.L_801C14C0:
/* 801C14C0 001BE5A0  91 07 00 44 */	stw r8, 0x44(r7)
/* 801C14C4 001BE5A4  39 20 00 01 */	li r9, 0x1
/* 801C14C8 001BE5A8  39 08 04 00 */	addi r8, r8, 0x400
/* 801C14CC 001BE5AC  48 00 00 14 */	b .L_801C14E0
.L_801C14D0:
/* 801C14D0 001BE5B0  91 07 00 44 */	stw r8, 0x44(r7)
/* 801C14D4 001BE5B4  39 08 08 00 */	addi r8, r8, 0x800
/* 801C14D8 001BE5B8  48 00 00 08 */	b .L_801C14E0
.L_801C14DC:
/* 801C14DC 001BE5BC  90 07 00 44 */	stw r0, 0x44(r7)
.L_801C14E0:
/* 801C14E0 001BE5C0  A0 A3 00 30 */	lhz r5, 0x30(r3)
/* 801C14E4 001BE5C4  38 C6 00 02 */	addi r6, r6, 0x2
/* 801C14E8 001BE5C8  39 4A 00 01 */	addi r10, r10, 0x1
/* 801C14EC 001BE5CC  7C A5 36 30 */	sraw r5, r5, r6
/* 801C14F0 001BE5D0  54 A5 07 BE */	clrlwi r5, r5, 30
/* 801C14F4 001BE5D4  2C 05 00 02 */	cmpwi r5, 0x2
/* 801C14F8 001BE5D8  38 E7 00 04 */	addi r7, r7, 0x4
/* 801C14FC 001BE5DC  41 82 00 24 */	beq .L_801C1520
/* 801C1500 001BE5E0  40 80 00 2C */	bge .L_801C152C
/* 801C1504 001BE5E4  2C 05 00 01 */	cmpwi r5, 0x1
/* 801C1508 001BE5E8  40 80 00 08 */	bge .L_801C1510
/* 801C150C 001BE5EC  48 00 00 20 */	b .L_801C152C
.L_801C1510:
/* 801C1510 001BE5F0  91 07 00 44 */	stw r8, 0x44(r7)
/* 801C1514 001BE5F4  39 20 00 01 */	li r9, 0x1
/* 801C1518 001BE5F8  39 08 04 00 */	addi r8, r8, 0x400
/* 801C151C 001BE5FC  48 00 00 14 */	b .L_801C1530
.L_801C1520:
/* 801C1520 001BE600  91 07 00 44 */	stw r8, 0x44(r7)
/* 801C1524 001BE604  39 08 08 00 */	addi r8, r8, 0x800
/* 801C1528 001BE608  48 00 00 08 */	b .L_801C1530
.L_801C152C:
/* 801C152C 001BE60C  90 07 00 44 */	stw r0, 0x44(r7)
.L_801C1530:
/* 801C1530 001BE610  A0 A3 00 30 */	lhz r5, 0x30(r3)
/* 801C1534 001BE614  38 C6 00 02 */	addi r6, r6, 0x2
/* 801C1538 001BE618  39 4A 00 01 */	addi r10, r10, 0x1
/* 801C153C 001BE61C  7C A5 36 30 */	sraw r5, r5, r6
/* 801C1540 001BE620  54 A5 07 BE */	clrlwi r5, r5, 30
/* 801C1544 001BE624  2C 05 00 02 */	cmpwi r5, 0x2
/* 801C1548 001BE628  38 E7 00 04 */	addi r7, r7, 0x4
/* 801C154C 001BE62C  41 82 00 24 */	beq .L_801C1570
/* 801C1550 001BE630  40 80 00 2C */	bge .L_801C157C
/* 801C1554 001BE634  2C 05 00 01 */	cmpwi r5, 0x1
/* 801C1558 001BE638  40 80 00 08 */	bge .L_801C1560
/* 801C155C 001BE63C  48 00 00 20 */	b .L_801C157C
.L_801C1560:
/* 801C1560 001BE640  91 07 00 44 */	stw r8, 0x44(r7)
/* 801C1564 001BE644  39 20 00 01 */	li r9, 0x1
/* 801C1568 001BE648  39 08 04 00 */	addi r8, r8, 0x400
/* 801C156C 001BE64C  48 00 00 14 */	b .L_801C1580
.L_801C1570:
/* 801C1570 001BE650  91 07 00 44 */	stw r8, 0x44(r7)
/* 801C1574 001BE654  39 08 08 00 */	addi r8, r8, 0x800
/* 801C1578 001BE658  48 00 00 08 */	b .L_801C1580
.L_801C157C:
/* 801C157C 001BE65C  90 07 00 44 */	stw r0, 0x44(r7)
.L_801C1580:
/* 801C1580 001BE660  38 C6 00 02 */	addi r6, r6, 0x2
/* 801C1584 001BE664  38 E7 00 04 */	addi r7, r7, 0x4
/* 801C1588 001BE668  39 4A 00 01 */	addi r10, r10, 0x1
/* 801C158C 001BE66C  42 00 FE C4 */	bdnz .L_801C1450
/* 801C1590 001BE670  2C 09 00 00 */	cmpwi r9, 0x0
/* 801C1594 001BE674  41 82 00 10 */	beq .L_801C15A4
/* 801C1598 001BE678  91 04 00 64 */	stw r8, 0x64(r4)
/* 801C159C 001BE67C  39 08 02 00 */	addi r8, r8, 0x200
/* 801C15A0 001BE680  48 00 00 0C */	b .L_801C15AC
.L_801C15A4:
/* 801C15A4 001BE684  38 00 FF FF */	li r0, -0x1
/* 801C15A8 001BE688  90 04 00 64 */	stw r0, 0x64(r4)
.L_801C15AC:
/* 801C15AC 001BE68C  91 04 00 68 */	stw r8, 0x68(r4)
/* 801C15B0 001BE690  4E 80 00 20 */	blr
.endfn UpdateIconOffsets

.fn CARDGetStatus, global
/* 801C15B4 001BE694  7C 08 02 A6 */	mflr r0
/* 801C15B8 001BE698  90 01 00 04 */	stw r0, 0x4(r1)
/* 801C15BC 001BE69C  94 21 FF D8 */	stwu r1, -0x28(r1)
/* 801C15C0 001BE6A0  93 E1 00 24 */	stw r31, 0x24(r1)
/* 801C15C4 001BE6A4  3B E5 00 00 */	addi r31, r5, 0x0
/* 801C15C8 001BE6A8  93 C1 00 20 */	stw r30, 0x20(r1)
/* 801C15CC 001BE6AC  93 A1 00 1C */	stw r29, 0x1c(r1)
/* 801C15D0 001BE6B0  7C 9D 23 79 */	mr. r29, r4
/* 801C15D4 001BE6B4  41 80 00 0C */	blt .L_801C15E0
/* 801C15D8 001BE6B8  2C 1D 00 7F */	cmpwi r29, 0x7f
/* 801C15DC 001BE6BC  41 80 00 0C */	blt .L_801C15E8
.L_801C15E0:
/* 801C15E0 001BE6C0  38 60 FF 80 */	li r3, -0x80
/* 801C15E4 001BE6C4  48 00 00 C8 */	b .L_801C16AC
.L_801C15E8:
/* 801C15E8 001BE6C8  38 81 00 14 */	addi r4, r1, 0x14
/* 801C15EC 001BE6CC  4B FF A6 F9 */	bl __CARDGetControlBlock
/* 801C15F0 001BE6D0  2C 03 00 00 */	cmpwi r3, 0x0
/* 801C15F4 001BE6D4  40 80 00 08 */	bge .L_801C15FC
/* 801C15F8 001BE6D8  48 00 00 B4 */	b .L_801C16AC
.L_801C15FC:
/* 801C15FC 001BE6DC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C1600 001BE6E0  4B FF C4 71 */	bl __CARDGetDirBlock
/* 801C1604 001BE6E4  57 A0 30 32 */	slwi r0, r29, 6
/* 801C1608 001BE6E8  7F A3 02 14 */	add r29, r3, r0
/* 801C160C 001BE6EC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C1610 001BE6F0  7F A4 EB 78 */	mr r4, r29
/* 801C1614 001BE6F4  4B FF EB AD */	bl __CARDIsReadable
/* 801C1618 001BE6F8  7C 7E 1B 79 */	mr. r30, r3
/* 801C161C 001BE6FC  41 80 00 84 */	blt .L_801C16A0
/* 801C1620 001BE700  38 9D 00 00 */	addi r4, r29, 0x0
/* 801C1624 001BE704  38 7F 00 28 */	addi r3, r31, 0x28
/* 801C1628 001BE708  38 A0 00 04 */	li r5, 0x4
/* 801C162C 001BE70C  4B E4 1F 15 */	bl memcpy
/* 801C1630 001BE710  38 7F 00 2C */	addi r3, r31, 0x2c
/* 801C1634 001BE714  38 9D 00 04 */	addi r4, r29, 0x4
/* 801C1638 001BE718  38 A0 00 02 */	li r5, 0x2
/* 801C163C 001BE71C  4B E4 1F 05 */	bl memcpy
/* 801C1640 001BE720  80 A1 00 14 */	lwz r5, 0x14(r1)
/* 801C1644 001BE724  7F E3 FB 78 */	mr r3, r31
/* 801C1648 001BE728  A0 DD 00 38 */	lhz r6, 0x38(r29)
/* 801C164C 001BE72C  38 9D 00 08 */	addi r4, r29, 0x8
/* 801C1650 001BE730  80 05 00 0C */	lwz r0, 0xc(r5)
/* 801C1654 001BE734  38 A0 00 20 */	li r5, 0x20
/* 801C1658 001BE738  7C 06 01 D6 */	mullw r0, r6, r0
/* 801C165C 001BE73C  90 1F 00 20 */	stw r0, 0x20(r31)
/* 801C1660 001BE740  4B E4 1E E1 */	bl memcpy
/* 801C1664 001BE744  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 801C1668 001BE748  38 7D 00 00 */	addi r3, r29, 0x0
/* 801C166C 001BE74C  38 9F 00 00 */	addi r4, r31, 0x0
/* 801C1670 001BE750  90 1F 00 24 */	stw r0, 0x24(r31)
/* 801C1674 001BE754  88 1D 00 07 */	lbz r0, 0x7(r29)
/* 801C1678 001BE758  98 1F 00 2E */	stb r0, 0x2e(r31)
/* 801C167C 001BE75C  80 1D 00 2C */	lwz r0, 0x2c(r29)
/* 801C1680 001BE760  90 1F 00 30 */	stw r0, 0x30(r31)
/* 801C1684 001BE764  A0 1D 00 30 */	lhz r0, 0x30(r29)
/* 801C1688 001BE768  B0 1F 00 34 */	sth r0, 0x34(r31)
/* 801C168C 001BE76C  A0 1D 00 32 */	lhz r0, 0x32(r29)
/* 801C1690 001BE770  B0 1F 00 36 */	sth r0, 0x36(r31)
/* 801C1694 001BE774  80 1D 00 3C */	lwz r0, 0x3c(r29)
/* 801C1698 001BE778  90 1F 00 38 */	stw r0, 0x38(r31)
/* 801C169C 001BE77C  4B FF FD 21 */	bl UpdateIconOffsets
.L_801C16A0:
/* 801C16A0 001BE780  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801C16A4 001BE784  7F C4 F3 78 */	mr r4, r30
/* 801C16A8 001BE788  4B FF A6 F5 */	bl __CARDPutControlBlock
.L_801C16AC:
/* 801C16AC 001BE78C  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 801C16B0 001BE790  83 E1 00 24 */	lwz r31, 0x24(r1)
/* 801C16B4 001BE794  83 C1 00 20 */	lwz r30, 0x20(r1)
/* 801C16B8 001BE798  83 A1 00 1C */	lwz r29, 0x1c(r1)
/* 801C16BC 001BE79C  38 21 00 28 */	addi r1, r1, 0x28
/* 801C16C0 001BE7A0  7C 08 03 A6 */	mtlr r0
/* 801C16C4 001BE7A4  4E 80 00 20 */	blr
.endfn CARDGetStatus

.fn CARDSetStatusAsync, global
/* 801C16C8 001BE7A8  7C 08 02 A6 */	mflr r0
/* 801C16CC 001BE7AC  90 01 00 04 */	stw r0, 0x4(r1)
/* 801C16D0 001BE7B0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801C16D4 001BE7B4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801C16D8 001BE7B8  7C 9F 23 79 */	mr. r31, r4
/* 801C16DC 001BE7BC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 801C16E0 001BE7C0  3B C6 00 00 */	addi r30, r6, 0x0
/* 801C16E4 001BE7C4  93 A1 00 24 */	stw r29, 0x24(r1)
/* 801C16E8 001BE7C8  3B A5 00 00 */	addi r29, r5, 0x0
/* 801C16EC 001BE7CC  93 81 00 20 */	stw r28, 0x20(r1)
/* 801C16F0 001BE7D0  3B 83 00 00 */	addi r28, r3, 0x0
/* 801C16F4 001BE7D4  41 80 00 40 */	blt .L_801C1734
/* 801C16F8 001BE7D8  2C 1F 00 7F */	cmpwi r31, 0x7f
/* 801C16FC 001BE7DC  40 80 00 38 */	bge .L_801C1734
/* 801C1700 001BE7E0  80 7D 00 30 */	lwz r3, 0x30(r29)
/* 801C1704 001BE7E4  3C 03 00 01 */	addis r0, r3, 0x1
/* 801C1708 001BE7E8  28 00 FF FF */	cmplwi r0, 0xffff
/* 801C170C 001BE7EC  41 82 00 0C */	beq .L_801C1718
/* 801C1710 001BE7F0  28 03 02 00 */	cmplwi r3, 0x200
/* 801C1714 001BE7F4  40 80 00 20 */	bge .L_801C1734
.L_801C1718:
/* 801C1718 001BE7F8  80 7D 00 38 */	lwz r3, 0x38(r29)
/* 801C171C 001BE7FC  3C 03 00 01 */	addis r0, r3, 0x1
/* 801C1720 001BE800  28 00 FF FF */	cmplwi r0, 0xffff
/* 801C1724 001BE804  41 82 00 18 */	beq .L_801C173C
/* 801C1728 001BE808  54 60 04 FE */	clrlwi r0, r3, 19
/* 801C172C 001BE80C  28 00 1F C0 */	cmplwi r0, 0x1fc0
/* 801C1730 001BE810  40 81 00 0C */	ble .L_801C173C
.L_801C1734:
/* 801C1734 001BE814  38 60 FF 80 */	li r3, -0x80
/* 801C1738 001BE818  48 00 00 E4 */	b .L_801C181C
.L_801C173C:
/* 801C173C 001BE81C  38 7C 00 00 */	addi r3, r28, 0x0
/* 801C1740 001BE820  38 81 00 18 */	addi r4, r1, 0x18
/* 801C1744 001BE824  4B FF A5 A1 */	bl __CARDGetControlBlock
/* 801C1748 001BE828  2C 03 00 00 */	cmpwi r3, 0x0
/* 801C174C 001BE82C  40 80 00 08 */	bge .L_801C1754
/* 801C1750 001BE830  48 00 00 CC */	b .L_801C181C
.L_801C1754:
/* 801C1754 001BE834  80 61 00 18 */	lwz r3, 0x18(r1)
/* 801C1758 001BE838  4B FF C3 19 */	bl __CARDGetDirBlock
/* 801C175C 001BE83C  57 E0 30 32 */	slwi r0, r31, 6
/* 801C1760 001BE840  7F E3 02 14 */	add r31, r3, r0
/* 801C1764 001BE844  80 61 00 18 */	lwz r3, 0x18(r1)
/* 801C1768 001BE848  7F E4 FB 78 */	mr r4, r31
/* 801C176C 001BE84C  4B FF E9 21 */	bl __CARDIsWritable
/* 801C1770 001BE850  7C 64 1B 79 */	mr. r4, r3
/* 801C1774 001BE854  40 80 00 10 */	bge .L_801C1784
/* 801C1778 001BE858  80 61 00 18 */	lwz r3, 0x18(r1)
/* 801C177C 001BE85C  4B FF A6 21 */	bl __CARDPutControlBlock
/* 801C1780 001BE860  48 00 00 9C */	b .L_801C181C
.L_801C1784:
/* 801C1784 001BE864  88 1D 00 2E */	lbz r0, 0x2e(r29)
/* 801C1788 001BE868  38 7F 00 00 */	addi r3, r31, 0x0
/* 801C178C 001BE86C  38 9D 00 00 */	addi r4, r29, 0x0
/* 801C1790 001BE870  98 1F 00 07 */	stb r0, 0x7(r31)
/* 801C1794 001BE874  80 1D 00 30 */	lwz r0, 0x30(r29)
/* 801C1798 001BE878  90 1F 00 2C */	stw r0, 0x2c(r31)
/* 801C179C 001BE87C  A0 1D 00 34 */	lhz r0, 0x34(r29)
/* 801C17A0 001BE880  B0 1F 00 30 */	sth r0, 0x30(r31)
/* 801C17A4 001BE884  A0 1D 00 36 */	lhz r0, 0x36(r29)
/* 801C17A8 001BE888  B0 1F 00 32 */	sth r0, 0x32(r31)
/* 801C17AC 001BE88C  80 1D 00 38 */	lwz r0, 0x38(r29)
/* 801C17B0 001BE890  90 1F 00 3C */	stw r0, 0x3c(r31)
/* 801C17B4 001BE894  4B FF FC 09 */	bl UpdateIconOffsets
/* 801C17B8 001BE898  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 801C17BC 001BE89C  3C 03 00 01 */	addis r0, r3, 0x1
/* 801C17C0 001BE8A0  28 00 FF FF */	cmplwi r0, 0xffff
/* 801C17C4 001BE8A4  40 82 00 14 */	bne .L_801C17D8
/* 801C17C8 001BE8A8  A0 1F 00 32 */	lhz r0, 0x32(r31)
/* 801C17CC 001BE8AC  54 00 00 3A */	clrrwi r0, r0, 2
/* 801C17D0 001BE8B0  60 00 00 01 */	ori r0, r0, 0x1
/* 801C17D4 001BE8B4  B0 1F 00 32 */	sth r0, 0x32(r31)
.L_801C17D8:
/* 801C17D8 001BE8B8  3C 60 80 00 */	lis r3, 0x8000
/* 801C17DC 001BE8BC  80 03 00 F8 */	lwz r0, 0xf8(r3)
/* 801C17E0 001BE8C0  54 1D F0 BE */	srwi r29, r0, 2
/* 801C17E4 001BE8C4  48 01 5D 69 */	bl OSGetTime
/* 801C17E8 001BE8C8  38 DD 00 00 */	addi r6, r29, 0x0
/* 801C17EC 001BE8CC  38 A0 00 00 */	li r5, 0x0
/* 801C17F0 001BE8D0  48 02 BE 65 */	bl __div2i
/* 801C17F4 001BE8D4  90 9F 00 28 */	stw r4, 0x28(r31)
/* 801C17F8 001BE8D8  38 7C 00 00 */	addi r3, r28, 0x0
/* 801C17FC 001BE8DC  38 9E 00 00 */	addi r4, r30, 0x0
/* 801C1800 001BE8E0  4B FF C4 11 */	bl __CARDUpdateDir
/* 801C1804 001BE8E4  7C 7C 1B 79 */	mr. r28, r3
/* 801C1808 001BE8E8  40 80 00 10 */	bge .L_801C1818
/* 801C180C 001BE8EC  80 61 00 18 */	lwz r3, 0x18(r1)
/* 801C1810 001BE8F0  7F 84 E3 78 */	mr r4, r28
/* 801C1814 001BE8F4  4B FF A5 89 */	bl __CARDPutControlBlock
.L_801C1818:
/* 801C1818 001BE8F8  7F 83 E3 78 */	mr r3, r28
.L_801C181C:
/* 801C181C 001BE8FC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801C1820 001BE900  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801C1824 001BE904  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 801C1828 001BE908  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 801C182C 001BE90C  83 81 00 20 */	lwz r28, 0x20(r1)
/* 801C1830 001BE910  38 21 00 30 */	addi r1, r1, 0x30
/* 801C1834 001BE914  7C 08 03 A6 */	mtlr r0
/* 801C1838 001BE918  4E 80 00 20 */	blr
.endfn CARDSetStatusAsync

.fn CARDSetStatus, global
/* 801C183C 001BE91C  7C 08 02 A6 */	mflr r0
/* 801C1840 001BE920  3C C0 80 1C */	lis r6, __CARDSyncCallback@ha
/* 801C1844 001BE924  90 01 00 04 */	stw r0, 0x4(r1)
/* 801C1848 001BE928  38 C6 AD 88 */	addi r6, r6, __CARDSyncCallback@l
/* 801C184C 001BE92C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C1850 001BE930  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801C1854 001BE934  3B E3 00 00 */	addi r31, r3, 0x0
/* 801C1858 001BE938  4B FF FE 71 */	bl CARDSetStatusAsync
/* 801C185C 001BE93C  2C 03 00 00 */	cmpwi r3, 0x0
/* 801C1860 001BE940  40 80 00 08 */	bge .L_801C1868
/* 801C1864 001BE944  48 00 00 0C */	b .L_801C1870
.L_801C1868:
/* 801C1868 001BE948  7F E3 FB 78 */	mr r3, r31
/* 801C186C 001BE94C  4B FF A8 21 */	bl __CARDSync
.L_801C1870:
/* 801C1870 001BE950  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C1874 001BE954  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801C1878 001BE958  38 21 00 20 */	addi r1, r1, 0x20
/* 801C187C 001BE95C  7C 08 03 A6 */	mtlr r0
/* 801C1880 001BE960  4E 80 00 20 */	blr
.endfn CARDSetStatus
