.include "macros.inc"
.file "CARDDir.c"

# 0x801BDA70 - 0x801BDCD4
.text
.balign 4

.fn __CARDGetDirBlock, global
/* 801BDA70 001BAB50  80 63 00 84 */	lwz r3, 0x84(r3)
/* 801BDA74 001BAB54  4E 80 00 20 */	blr
.endfn __CARDGetDirBlock

.fn WriteCallback, local
/* 801BDA78 001BAB58  7C 08 02 A6 */	mflr r0
/* 801BDA7C 001BAB5C  90 01 00 04 */	stw r0, 0x4(r1)
/* 801BDA80 001BAB60  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801BDA84 001BAB64  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801BDA88 001BAB68  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801BDA8C 001BAB6C  7C 9E 23 79 */	mr. r30, r4
/* 801BDA90 001BAB70  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801BDA94 001BAB74  3B A3 00 00 */	addi r29, r3, 0x0
/* 801BDA98 001BAB78  1C BD 01 10 */	mulli r5, r29, 0x110
/* 801BDA9C 001BAB7C  3C 60 80 38 */	lis r3, __CARDBlock@ha
/* 801BDAA0 001BAB80  38 03 D4 80 */	addi r0, r3, __CARDBlock@l
/* 801BDAA4 001BAB84  7F E0 2A 14 */	add r31, r0, r5
/* 801BDAA8 001BAB88  41 80 00 44 */	blt .L_801BDAEC
/* 801BDAAC 001BAB8C  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 801BDAB0 001BAB90  80 1F 00 84 */	lwz r0, 0x84(r31)
/* 801BDAB4 001BAB94  38 83 20 00 */	addi r4, r3, 0x2000
/* 801BDAB8 001BAB98  7C 00 20 40 */	cmplw r0, r4
/* 801BDABC 001BAB9C  38 03 40 00 */	addi r0, r3, 0x4000
/* 801BDAC0 001BABA0  40 82 00 18 */	bne .L_801BDAD8
/* 801BDAC4 001BABA4  90 1F 00 84 */	stw r0, 0x84(r31)
/* 801BDAC8 001BABA8  7C 03 03 78 */	mr r3, r0
/* 801BDACC 001BABAC  38 A0 20 00 */	li r5, 0x2000
/* 801BDAD0 001BABB0  4B E4 5A 71 */	bl memcpy
/* 801BDAD4 001BABB4  48 00 00 18 */	b .L_801BDAEC
.L_801BDAD8:
/* 801BDAD8 001BABB8  90 9F 00 84 */	stw r4, 0x84(r31)
/* 801BDADC 001BABBC  38 64 00 00 */	addi r3, r4, 0x0
/* 801BDAE0 001BABC0  7C 04 03 78 */	mr r4, r0
/* 801BDAE4 001BABC4  38 A0 20 00 */	li r5, 0x2000
/* 801BDAE8 001BABC8  4B E4 5A 59 */	bl memcpy
.L_801BDAEC:
/* 801BDAEC 001BABCC  80 1F 00 D0 */	lwz r0, 0xd0(r31)
/* 801BDAF0 001BABD0  28 00 00 00 */	cmplwi r0, 0x0
/* 801BDAF4 001BABD4  40 82 00 10 */	bne .L_801BDB04
/* 801BDAF8 001BABD8  38 7F 00 00 */	addi r3, r31, 0x0
/* 801BDAFC 001BABDC  38 9E 00 00 */	addi r4, r30, 0x0
/* 801BDB00 001BABE0  4B FF E2 9D */	bl __CARDPutControlBlock
.L_801BDB04:
/* 801BDB04 001BABE4  80 1F 00 D8 */	lwz r0, 0xd8(r31)
/* 801BDB08 001BABE8  28 00 00 00 */	cmplwi r0, 0x0
/* 801BDB0C 001BABEC  7C 0C 03 78 */	mr r12, r0
/* 801BDB10 001BABF0  41 82 00 1C */	beq .L_801BDB2C
/* 801BDB14 001BABF4  38 00 00 00 */	li r0, 0x0
/* 801BDB18 001BABF8  7D 88 03 A6 */	mtlr r12
/* 801BDB1C 001BABFC  90 1F 00 D8 */	stw r0, 0xd8(r31)
/* 801BDB20 001BAC00  38 7D 00 00 */	addi r3, r29, 0x0
/* 801BDB24 001BAC04  38 9E 00 00 */	addi r4, r30, 0x0
/* 801BDB28 001BAC08  4E 80 00 21 */	blrl
.L_801BDB2C:
/* 801BDB2C 001BAC0C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801BDB30 001BAC10  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801BDB34 001BAC14  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801BDB38 001BAC18  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801BDB3C 001BAC1C  38 21 00 20 */	addi r1, r1, 0x20
/* 801BDB40 001BAC20  7C 08 03 A6 */	mtlr r0
/* 801BDB44 001BAC24  4E 80 00 20 */	blr
.endfn WriteCallback

.fn EraseCallback, local
/* 801BDB48 001BAC28  7C 08 02 A6 */	mflr r0
/* 801BDB4C 001BAC2C  90 01 00 04 */	stw r0, 0x4(r1)
/* 801BDB50 001BAC30  94 21 FF D8 */	stwu r1, -0x28(r1)
/* 801BDB54 001BAC34  93 E1 00 24 */	stw r31, 0x24(r1)
/* 801BDB58 001BAC38  3B E3 00 00 */	addi r31, r3, 0x0
/* 801BDB5C 001BAC3C  3C 60 80 38 */	lis r3, __CARDBlock@ha
/* 801BDB60 001BAC40  93 C1 00 20 */	stw r30, 0x20(r1)
/* 801BDB64 001BAC44  1C BF 01 10 */	mulli r5, r31, 0x110
/* 801BDB68 001BAC48  93 A1 00 1C */	stw r29, 0x1c(r1)
/* 801BDB6C 001BAC4C  38 03 D4 80 */	addi r0, r3, __CARDBlock@l
/* 801BDB70 001BAC50  7C 9D 23 79 */	mr. r29, r4
/* 801BDB74 001BAC54  7F C0 2A 14 */	add r30, r0, r5
/* 801BDB78 001BAC58  41 80 00 3C */	blt .L_801BDBB4
/* 801BDB7C 001BAC5C  80 BE 00 84 */	lwz r5, 0x84(r30)
/* 801BDB80 001BAC60  3C 60 80 1C */	lis r3, WriteCallback@ha
/* 801BDB84 001BAC64  80 1E 00 80 */	lwz r0, 0x80(r30)
/* 801BDB88 001BAC68  38 E3 DA 78 */	addi r7, r3, WriteCallback@l
/* 801BDB8C 001BAC6C  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 801BDB90 001BAC70  7C 00 28 50 */	subf r0, r0, r5
/* 801BDB94 001BAC74  54 00 9B 7E */	srwi r0, r0, 13
/* 801BDB98 001BAC78  7C 83 01 D6 */	mullw r4, r3, r0
/* 801BDB9C 001BAC7C  38 C5 00 00 */	addi r6, r5, 0x0
/* 801BDBA0 001BAC80  38 7F 00 00 */	addi r3, r31, 0x0
/* 801BDBA4 001BAC84  38 A0 20 00 */	li r5, 0x2000
/* 801BDBA8 001BAC88  4B FF FA 49 */	bl __CARDWrite
/* 801BDBAC 001BAC8C  7C 7D 1B 79 */	mr. r29, r3
/* 801BDBB0 001BAC90  40 80 00 44 */	bge .L_801BDBF4
.L_801BDBB4:
/* 801BDBB4 001BAC94  80 1E 00 D0 */	lwz r0, 0xd0(r30)
/* 801BDBB8 001BAC98  28 00 00 00 */	cmplwi r0, 0x0
/* 801BDBBC 001BAC9C  40 82 00 10 */	bne .L_801BDBCC
/* 801BDBC0 001BACA0  38 7E 00 00 */	addi r3, r30, 0x0
/* 801BDBC4 001BACA4  38 9D 00 00 */	addi r4, r29, 0x0
/* 801BDBC8 001BACA8  4B FF E1 D5 */	bl __CARDPutControlBlock
.L_801BDBCC:
/* 801BDBCC 001BACAC  80 1E 00 D8 */	lwz r0, 0xd8(r30)
/* 801BDBD0 001BACB0  28 00 00 00 */	cmplwi r0, 0x0
/* 801BDBD4 001BACB4  7C 0C 03 78 */	mr r12, r0
/* 801BDBD8 001BACB8  41 82 00 1C */	beq .L_801BDBF4
/* 801BDBDC 001BACBC  38 00 00 00 */	li r0, 0x0
/* 801BDBE0 001BACC0  7D 88 03 A6 */	mtlr r12
/* 801BDBE4 001BACC4  90 1E 00 D8 */	stw r0, 0xd8(r30)
/* 801BDBE8 001BACC8  38 7F 00 00 */	addi r3, r31, 0x0
/* 801BDBEC 001BACCC  38 9D 00 00 */	addi r4, r29, 0x0
/* 801BDBF0 001BACD0  4E 80 00 21 */	blrl
.L_801BDBF4:
/* 801BDBF4 001BACD4  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 801BDBF8 001BACD8  83 E1 00 24 */	lwz r31, 0x24(r1)
/* 801BDBFC 001BACDC  83 C1 00 20 */	lwz r30, 0x20(r1)
/* 801BDC00 001BACE0  83 A1 00 1C */	lwz r29, 0x1c(r1)
/* 801BDC04 001BACE4  38 21 00 28 */	addi r1, r1, 0x28
/* 801BDC08 001BACE8  7C 08 03 A6 */	mtlr r0
/* 801BDC0C 001BACEC  4E 80 00 20 */	blr
.endfn EraseCallback

.fn __CARDUpdateDir, global
/* 801BDC10 001BACF0  7C 08 02 A6 */	mflr r0
/* 801BDC14 001BACF4  90 01 00 04 */	stw r0, 0x4(r1)
/* 801BDC18 001BACF8  94 21 FF D8 */	stwu r1, -0x28(r1)
/* 801BDC1C 001BACFC  93 E1 00 24 */	stw r31, 0x24(r1)
/* 801BDC20 001BAD00  93 C1 00 20 */	stw r30, 0x20(r1)
/* 801BDC24 001BAD04  93 A1 00 1C */	stw r29, 0x1c(r1)
/* 801BDC28 001BAD08  3B A4 00 00 */	addi r29, r4, 0x0
/* 801BDC2C 001BAD0C  93 81 00 18 */	stw r28, 0x18(r1)
/* 801BDC30 001BAD10  3B 83 00 00 */	addi r28, r3, 0x0
/* 801BDC34 001BAD14  1C BC 01 10 */	mulli r5, r28, 0x110
/* 801BDC38 001BAD18  3C 60 80 38 */	lis r3, __CARDBlock@ha
/* 801BDC3C 001BAD1C  38 03 D4 80 */	addi r0, r3, __CARDBlock@l
/* 801BDC40 001BAD20  7F C0 2A 14 */	add r30, r0, r5
/* 801BDC44 001BAD24  80 1E 00 00 */	lwz r0, 0x0(r30)
/* 801BDC48 001BAD28  2C 00 00 00 */	cmpwi r0, 0x0
/* 801BDC4C 001BAD2C  40 82 00 0C */	bne .L_801BDC58
/* 801BDC50 001BAD30  38 60 FF FD */	li r3, -0x3
/* 801BDC54 001BAD34  48 00 00 60 */	b .L_801BDCB4
.L_801BDC58:
/* 801BDC58 001BAD38  83 FE 00 84 */	lwz r31, 0x84(r30)
/* 801BDC5C 001BAD3C  38 80 1F FC */	li r4, 0x1ffc
/* 801BDC60 001BAD40  A8 BF 1F FA */	lha r5, 0x1ffa(r31)
/* 801BDC64 001BAD44  38 DF 1F C0 */	addi r6, r31, 0x1fc0
/* 801BDC68 001BAD48  38 7F 00 00 */	addi r3, r31, 0x0
/* 801BDC6C 001BAD4C  38 05 00 01 */	addi r0, r5, 0x1
/* 801BDC70 001BAD50  B0 1F 1F FA */	sth r0, 0x1ffa(r31)
/* 801BDC74 001BAD54  38 A6 00 3C */	addi r5, r6, 0x3c
/* 801BDC78 001BAD58  38 C6 00 3E */	addi r6, r6, 0x3e
/* 801BDC7C 001BAD5C  48 00 00 59 */	bl __CARDCheckSum
/* 801BDC80 001BAD60  38 7F 00 00 */	addi r3, r31, 0x0
/* 801BDC84 001BAD64  38 80 20 00 */	li r4, 0x2000
/* 801BDC88 001BAD68  48 01 47 01 */	bl DCStoreRange
/* 801BDC8C 001BAD6C  93 BE 00 D8 */	stw r29, 0xd8(r30)
/* 801BDC90 001BAD70  3C 60 80 1C */	lis r3, EraseCallback@ha
/* 801BDC94 001BAD74  38 A3 DB 48 */	addi r5, r3, EraseCallback@l
/* 801BDC98 001BAD78  80 1E 00 80 */	lwz r0, 0x80(r30)
/* 801BDC9C 001BAD7C  7F 83 E3 78 */	mr r3, r28
/* 801BDCA0 001BAD80  80 9E 00 0C */	lwz r4, 0xc(r30)
/* 801BDCA4 001BAD84  7C 00 F8 50 */	subf r0, r0, r31
/* 801BDCA8 001BAD88  54 00 9B 7E */	srwi r0, r0, 13
/* 801BDCAC 001BAD8C  7C 84 01 D6 */	mullw r4, r4, r0
/* 801BDCB0 001BAD90  4B FF DE 69 */	bl __CARDEraseSector
.L_801BDCB4:
/* 801BDCB4 001BAD94  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 801BDCB8 001BAD98  83 E1 00 24 */	lwz r31, 0x24(r1)
/* 801BDCBC 001BAD9C  83 C1 00 20 */	lwz r30, 0x20(r1)
/* 801BDCC0 001BADA0  83 A1 00 1C */	lwz r29, 0x1c(r1)
/* 801BDCC4 001BADA4  83 81 00 18 */	lwz r28, 0x18(r1)
/* 801BDCC8 001BADA8  38 21 00 28 */	addi r1, r1, 0x28
/* 801BDCCC 001BADAC  7C 08 03 A6 */	mtlr r0
/* 801BDCD0 001BADB0  4E 80 00 20 */	blr
.endfn __CARDUpdateDir