.include "macros.inc"
.file "skinstream.c"

# 0x8020C8C0 - 0x8020CF50
.text
.balign 4

.fn _rpSkinGeometryNativeSize, global
/* 8020C8C0 002099A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8020C8C4 002099A4  7C 08 02 A6 */	mflr r0
/* 8020C8C8 002099A8  3C 80 80 2B */	lis r4, _rpSkinGlobals@ha
/* 8020C8CC 002099AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8020C8D0 002099B0  38 84 76 F0 */	addi r4, r4, _rpSkinGlobals@l
/* 8020C8D4 002099B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8020C8D8 002099B8  80 04 00 08 */	lwz r0, 0x8(r4)
/* 8020C8DC 002099BC  7C E3 00 2E */	lwzx r7, r3, r0
/* 8020C8E0 002099C0  80 07 00 10 */	lwz r0, 0x10(r7)
/* 8020C8E4 002099C4  80 87 00 04 */	lwz r4, 0x4(r7)
/* 8020C8E8 002099C8  28 00 00 01 */	cmplwi r0, 0x1
/* 8020C8EC 002099CC  3B E4 00 14 */	addi r31, r4, 0x14
/* 8020C8F0 002099D0  40 81 00 14 */	ble .L_8020C904
/* 8020C8F4 002099D4  80 83 00 14 */	lwz r4, 0x14(r3)
/* 8020C8F8 002099D8  54 00 08 3C */	slwi r0, r0, 1
/* 8020C8FC 002099DC  7C 04 01 D6 */	mullw r0, r4, r0
/* 8020C900 002099E0  7F FF 02 14 */	add r31, r31, r0
.L_8020C904:
/* 8020C904 002099E4  80 07 00 1C */	lwz r0, 0x1c(r7)
/* 8020C908 002099E8  80 87 00 00 */	lwz r4, 0x0(r7)
/* 8020C90C 002099EC  28 00 00 00 */	cmplwi r0, 0x0
/* 8020C910 002099F0  54 80 30 32 */	slwi r0, r4, 6
/* 8020C914 002099F4  7F FF 02 14 */	add r31, r31, r0
/* 8020C918 002099F8  41 82 00 50 */	beq .L_8020C968
/* 8020C91C 002099FC  80 C3 00 58 */	lwz r6, 0x58(r3)
/* 8020C920 00209A00  38 A0 00 00 */	li r5, 0x0
/* 8020C924 00209A04  80 03 00 08 */	lwz r0, 0x8(r3)
/* 8020C928 00209A08  80 86 00 24 */	lwz r4, 0x24(r6)
/* 8020C92C 00209A0C  54 00 06 F7 */	rlwinm. r0, r0, 0, 27, 27
/* 8020C930 00209A10  80 84 FF FC */	lwz r4, -0x4(r4)
/* 8020C934 00209A14  90 A4 00 10 */	stw r5, 0x10(r4)
/* 8020C938 00209A18  80 07 00 1C */	lwz r0, 0x1c(r7)
/* 8020C93C 00209A1C  90 06 00 24 */	stw r0, 0x24(r6)
/* 8020C940 00209A20  41 82 00 0C */	beq .L_8020C94C
/* 8020C944 00209A24  80 07 00 20 */	lwz r0, 0x20(r7)
/* 8020C948 00209A28  90 06 00 2C */	stw r0, 0x2c(r6)
.L_8020C94C:
/* 8020C94C 00209A2C  3C 80 80 22 */	lis r4, _rxGCResEntryWaitDone@ha
/* 8020C950 00209A30  80 63 00 58 */	lwz r3, 0x58(r3)
/* 8020C954 00209A34  38 84 F4 A4 */	addi r4, r4, _rxGCResEntryWaitDone@l
/* 8020C958 00209A38  38 00 00 00 */	li r0, 0x0
/* 8020C95C 00209A3C  90 83 00 14 */	stw r4, 0x14(r3)
/* 8020C960 00209A40  90 07 00 1C */	stw r0, 0x1c(r7)
/* 8020C964 00209A44  90 07 00 20 */	stw r0, 0x20(r7)
.L_8020C968:
/* 8020C968 00209A48  7C E3 3B 78 */	mr r3, r7
/* 8020C96C 00209A4C  4B FF D7 79 */	bl _rpSkinSplitDataStreamGetSize
/* 8020C970 00209A50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8020C974 00209A54  7F FF 1A 14 */	add r31, r31, r3
/* 8020C978 00209A58  7F E3 FB 78 */	mr r3, r31
/* 8020C97C 00209A5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8020C980 00209A60  7C 08 03 A6 */	mtlr r0
/* 8020C984 00209A64  38 21 00 10 */	addi r1, r1, 0x10
/* 8020C988 00209A68  4E 80 00 20 */	blr
.endfn _rpSkinGeometryNativeSize

.fn _rpSkinGeometryNativeWrite, global
/* 8020C98C 00209A6C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8020C990 00209A70  7C 08 02 A6 */	mflr r0
/* 8020C994 00209A74  3C A0 80 2B */	lis r5, _rpSkinGlobals@ha
/* 8020C998 00209A78  38 C0 00 06 */	li r6, 0x6
/* 8020C99C 00209A7C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8020C9A0 00209A80  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8020C9A4 00209A84  3B E5 76 F0 */	addi r31, r5, _rpSkinGlobals@l
/* 8020C9A8 00209A88  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8020C9AC 00209A8C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8020C9B0 00209A90  7C 9D 23 78 */	mr r29, r4
/* 8020C9B4 00209A94  93 81 00 10 */	stw r28, 0x10(r1)
/* 8020C9B8 00209A98  7C 7C 1B 78 */	mr r28, r3
/* 8020C9BC 00209A9C  80 1F 00 08 */	lwz r0, 0x8(r31)
/* 8020C9C0 00209AA0  90 C1 00 0C */	stw r6, 0xc(r1)
/* 8020C9C4 00209AA4  7C 7D 00 2E */	lwzx r3, r29, r0
/* 8020C9C8 00209AA8  80 03 00 10 */	lwz r0, 0x10(r3)
/* 8020C9CC 00209AAC  80 83 00 04 */	lwz r4, 0x4(r3)
/* 8020C9D0 00209AB0  28 00 00 01 */	cmplwi r0, 0x1
/* 8020C9D4 00209AB4  3B C4 00 14 */	addi r30, r4, 0x14
/* 8020C9D8 00209AB8  40 81 00 14 */	ble .L_8020C9EC
/* 8020C9DC 00209ABC  80 9D 00 14 */	lwz r4, 0x14(r29)
/* 8020C9E0 00209AC0  54 00 08 3C */	slwi r0, r0, 1
/* 8020C9E4 00209AC4  7C 04 01 D6 */	mullw r0, r4, r0
/* 8020C9E8 00209AC8  7F DE 02 14 */	add r30, r30, r0
.L_8020C9EC:
/* 8020C9EC 00209ACC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8020C9F0 00209AD0  80 83 00 00 */	lwz r4, 0x0(r3)
/* 8020C9F4 00209AD4  28 00 00 00 */	cmplwi r0, 0x0
/* 8020C9F8 00209AD8  54 80 30 32 */	slwi r0, r4, 6
/* 8020C9FC 00209ADC  7F DE 02 14 */	add r30, r30, r0
/* 8020CA00 00209AE0  41 82 00 50 */	beq .L_8020CA50
/* 8020CA04 00209AE4  80 DD 00 58 */	lwz r6, 0x58(r29)
/* 8020CA08 00209AE8  38 A0 00 00 */	li r5, 0x0
/* 8020CA0C 00209AEC  80 1D 00 08 */	lwz r0, 0x8(r29)
/* 8020CA10 00209AF0  80 86 00 24 */	lwz r4, 0x24(r6)
/* 8020CA14 00209AF4  54 00 06 F7 */	rlwinm. r0, r0, 0, 27, 27
/* 8020CA18 00209AF8  80 84 FF FC */	lwz r4, -0x4(r4)
/* 8020CA1C 00209AFC  90 A4 00 10 */	stw r5, 0x10(r4)
/* 8020CA20 00209B00  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8020CA24 00209B04  90 06 00 24 */	stw r0, 0x24(r6)
/* 8020CA28 00209B08  41 82 00 0C */	beq .L_8020CA34
/* 8020CA2C 00209B0C  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8020CA30 00209B10  90 06 00 2C */	stw r0, 0x2c(r6)
.L_8020CA34:
/* 8020CA34 00209B14  3C A0 80 22 */	lis r5, _rxGCResEntryWaitDone@ha
/* 8020CA38 00209B18  80 9D 00 58 */	lwz r4, 0x58(r29)
/* 8020CA3C 00209B1C  38 A5 F4 A4 */	addi r5, r5, _rxGCResEntryWaitDone@l
/* 8020CA40 00209B20  38 00 00 00 */	li r0, 0x0
/* 8020CA44 00209B24  90 A4 00 14 */	stw r5, 0x14(r4)
/* 8020CA48 00209B28  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8020CA4C 00209B2C  90 03 00 20 */	stw r0, 0x20(r3)
.L_8020CA50:
/* 8020CA50 00209B30  4B FF D6 95 */	bl _rpSkinSplitDataStreamGetSize
/* 8020CA54 00209B34  7F DE 1A 14 */	add r30, r30, r3
/* 8020CA58 00209B38  3C C0 00 03 */	lis r6, 0x3
/* 8020CA5C 00209B3C  3C 80 00 01 */	lis r4, 0x1
/* 8020CA60 00209B40  7F 83 E3 78 */	mr r3, r28
/* 8020CA64 00209B44  38 BE FF F4 */	addi r5, r30, -0xc
/* 8020CA68 00209B48  38 C6 50 00 */	addi r6, r6, 0x5000
/* 8020CA6C 00209B4C  38 E4 FF FF */	addi r7, r4, -0x1
/* 8020CA70 00209B50  38 80 00 01 */	li r4, 0x1
/* 8020CA74 00209B54  48 02 20 E1 */	bl _rwStreamWriteVersionedChunkHeader
/* 8020CA78 00209B58  28 03 00 00 */	cmplwi r3, 0x0
/* 8020CA7C 00209B5C  40 82 00 0C */	bne .L_8020CA88
/* 8020CA80 00209B60  38 60 00 00 */	li r3, 0x0
/* 8020CA84 00209B64  48 00 01 20 */	b .L_8020CBA4
.L_8020CA88:
/* 8020CA88 00209B68  7F 83 E3 78 */	mr r3, r28
/* 8020CA8C 00209B6C  38 81 00 0C */	addi r4, r1, 0xc
/* 8020CA90 00209B70  38 A0 00 04 */	li r5, 0x4
/* 8020CA94 00209B74  48 02 26 1D */	bl RwStreamWriteInt32
/* 8020CA98 00209B78  28 03 00 00 */	cmplwi r3, 0x0
/* 8020CA9C 00209B7C  40 82 00 0C */	bne .L_8020CAA8
/* 8020CAA0 00209B80  38 60 00 00 */	li r3, 0x0
/* 8020CAA4 00209B84  48 00 01 00 */	b .L_8020CBA4
.L_8020CAA8:
/* 8020CAA8 00209B88  80 1F 00 08 */	lwz r0, 0x8(r31)
/* 8020CAAC 00209B8C  7F 83 E3 78 */	mr r3, r28
/* 8020CAB0 00209B90  83 DD 00 14 */	lwz r30, 0x14(r29)
/* 8020CAB4 00209B94  38 81 00 08 */	addi r4, r1, 0x8
/* 8020CAB8 00209B98  7F FD 00 2E */	lwzx r31, r29, r0
/* 8020CABC 00209B9C  38 A0 00 04 */	li r5, 0x4
/* 8020CAC0 00209BA0  80 1F 00 04 */	lwz r0, 0x4(r31)
/* 8020CAC4 00209BA4  83 BF 00 10 */	lwz r29, 0x10(r31)
/* 8020CAC8 00209BA8  54 00 44 2E */	clrlslwi r0, r0, 24, 8
/* 8020CACC 00209BAC  80 DF 00 00 */	lwz r6, 0x0(r31)
/* 8020CAD0 00209BB0  53 A0 82 1E */	rlwimi r0, r29, 16, 8, 15
/* 8020CAD4 00209BB4  50 C0 06 3E */	rlwimi r0, r6, 0, 24, 31
/* 8020CAD8 00209BB8  90 01 00 08 */	stw r0, 0x8(r1)
/* 8020CADC 00209BBC  48 02 25 D5 */	bl RwStreamWriteInt32
/* 8020CAE0 00209BC0  28 03 00 00 */	cmplwi r3, 0x0
/* 8020CAE4 00209BC4  40 82 00 0C */	bne .L_8020CAF0
/* 8020CAE8 00209BC8  38 60 00 00 */	li r3, 0x0
/* 8020CAEC 00209BCC  48 00 00 B8 */	b .L_8020CBA4
.L_8020CAF0:
/* 8020CAF0 00209BD0  80 9F 00 08 */	lwz r4, 0x8(r31)
/* 8020CAF4 00209BD4  7F 83 E3 78 */	mr r3, r28
/* 8020CAF8 00209BD8  80 BF 00 04 */	lwz r5, 0x4(r31)
/* 8020CAFC 00209BDC  48 02 5C 15 */	bl RwStreamWrite
/* 8020CB00 00209BE0  28 03 00 00 */	cmplwi r3, 0x0
/* 8020CB04 00209BE4  40 82 00 0C */	bne .L_8020CB10
/* 8020CB08 00209BE8  38 60 00 00 */	li r3, 0x0
/* 8020CB0C 00209BEC  48 00 00 98 */	b .L_8020CBA4
.L_8020CB10:
/* 8020CB10 00209BF0  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 8020CB14 00209BF4  28 00 00 01 */	cmplwi r0, 0x1
/* 8020CB18 00209BF8  40 81 00 48 */	ble .L_8020CB60
/* 8020CB1C 00209BFC  7F BD F1 D6 */	mullw r29, r29, r30
/* 8020CB20 00209C00  80 9F 00 28 */	lwz r4, 0x28(r31)
/* 8020CB24 00209C04  7F 83 E3 78 */	mr r3, r28
/* 8020CB28 00209C08  7F A5 EB 78 */	mr r5, r29
/* 8020CB2C 00209C0C  48 02 5B E5 */	bl RwStreamWrite
/* 8020CB30 00209C10  28 03 00 00 */	cmplwi r3, 0x0
/* 8020CB34 00209C14  40 82 00 0C */	bne .L_8020CB40
/* 8020CB38 00209C18  38 60 00 00 */	li r3, 0x0
/* 8020CB3C 00209C1C  48 00 00 68 */	b .L_8020CBA4
.L_8020CB40:
/* 8020CB40 00209C20  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 8020CB44 00209C24  7F 83 E3 78 */	mr r3, r28
/* 8020CB48 00209C28  7F A5 EB 78 */	mr r5, r29
/* 8020CB4C 00209C2C  48 02 5B C5 */	bl RwStreamWrite
/* 8020CB50 00209C30  28 03 00 00 */	cmplwi r3, 0x0
/* 8020CB54 00209C34  40 82 00 0C */	bne .L_8020CB60
/* 8020CB58 00209C38  38 60 00 00 */	li r3, 0x0
/* 8020CB5C 00209C3C  48 00 00 48 */	b .L_8020CBA4
.L_8020CB60:
/* 8020CB60 00209C40  80 1F 00 00 */	lwz r0, 0x0(r31)
/* 8020CB64 00209C44  7F 83 E3 78 */	mr r3, r28
/* 8020CB68 00209C48  80 9F 00 0C */	lwz r4, 0xc(r31)
/* 8020CB6C 00209C4C  54 05 30 32 */	slwi r5, r0, 6
/* 8020CB70 00209C50  48 02 5B A1 */	bl RwStreamWrite
/* 8020CB74 00209C54  28 03 00 00 */	cmplwi r3, 0x0
/* 8020CB78 00209C58  40 82 00 0C */	bne .L_8020CB84
/* 8020CB7C 00209C5C  38 60 00 00 */	li r3, 0x0
/* 8020CB80 00209C60  48 00 00 24 */	b .L_8020CBA4
.L_8020CB84:
/* 8020CB84 00209C64  7F 83 E3 78 */	mr r3, r28
/* 8020CB88 00209C68  7F E4 FB 78 */	mr r4, r31
/* 8020CB8C 00209C6C  4B FF D2 BD */	bl _rpSkinSplitDataStreamWrite
/* 8020CB90 00209C70  28 03 00 00 */	cmplwi r3, 0x0
/* 8020CB94 00209C74  41 82 00 0C */	beq .L_8020CBA0
/* 8020CB98 00209C78  7F 83 E3 78 */	mr r3, r28
/* 8020CB9C 00209C7C  48 00 00 08 */	b .L_8020CBA4
.L_8020CBA0:
/* 8020CBA0 00209C80  38 60 00 00 */	li r3, 0x0
.L_8020CBA4:
/* 8020CBA4 00209C84  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8020CBA8 00209C88  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8020CBAC 00209C8C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8020CBB0 00209C90  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8020CBB4 00209C94  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8020CBB8 00209C98  7C 08 03 A6 */	mtlr r0
/* 8020CBBC 00209C9C  38 21 00 20 */	addi r1, r1, 0x20
/* 8020CBC0 00209CA0  4E 80 00 20 */	blr
.endfn _rpSkinGeometryNativeWrite

.fn _rpSkinGeometryNativeRead, global
/* 8020CBC4 00209CA4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8020CBC8 00209CA8  7C 08 02 A6 */	mflr r0
/* 8020CBCC 00209CAC  90 01 00 44 */	stw r0, 0x44(r1)
/* 8020CBD0 00209CB0  38 A1 00 10 */	addi r5, r1, 0x10
/* 8020CBD4 00209CB4  38 C1 00 14 */	addi r6, r1, 0x14
/* 8020CBD8 00209CB8  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8020CBDC 00209CBC  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8020CBE0 00209CC0  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8020CBE4 00209CC4  7C 9D 23 78 */	mr r29, r4
/* 8020CBE8 00209CC8  38 80 00 01 */	li r4, 0x1
/* 8020CBEC 00209CCC  93 81 00 30 */	stw r28, 0x30(r1)
/* 8020CBF0 00209CD0  7C 7C 1B 78 */	mr r28, r3
/* 8020CBF4 00209CD4  48 02 1F C1 */	bl RwStreamFindChunk
/* 8020CBF8 00209CD8  2C 03 00 00 */	cmpwi r3, 0x0
/* 8020CBFC 00209CDC  40 82 00 0C */	bne .L_8020CC08
/* 8020CC00 00209CE0  38 60 00 00 */	li r3, 0x0
/* 8020CC04 00209CE4  48 00 03 2C */	b .L_8020CF30
.L_8020CC08:
/* 8020CC08 00209CE8  3C 60 00 03 */	lis r3, 0x3
/* 8020CC0C 00209CEC  80 81 00 14 */	lwz r4, 0x14(r1)
/* 8020CC10 00209CF0  38 03 10 00 */	addi r0, r3, 0x1000
/* 8020CC14 00209CF4  7C 04 00 40 */	cmplw r4, r0
/* 8020CC18 00209CF8  41 80 00 10 */	blt .L_8020CC28
/* 8020CC1C 00209CFC  38 03 50 00 */	addi r0, r3, 0x5000
/* 8020CC20 00209D00  7C 04 00 40 */	cmplw r4, r0
/* 8020CC24 00209D04  40 81 00 30 */	ble .L_8020CC54
.L_8020CC28:
/* 8020CC28 00209D08  38 00 01 16 */	li r0, 0x116
/* 8020CC2C 00209D0C  3C 60 80 00 */	lis r3, 0x8000
/* 8020CC30 00209D10  90 01 00 20 */	stw r0, 0x20(r1)
/* 8020CC34 00209D14  38 63 00 04 */	addi r3, r3, 0x4
/* 8020CC38 00209D18  4C C6 31 82 */	crclr 4*cr1+eq
/* 8020CC3C 00209D1C  48 02 29 F9 */	bl _rwerror
/* 8020CC40 00209D20  90 61 00 24 */	stw r3, 0x24(r1)
/* 8020CC44 00209D24  38 61 00 20 */	addi r3, r1, 0x20
/* 8020CC48 00209D28  48 02 29 49 */	bl RwErrorSet
/* 8020CC4C 00209D2C  38 60 00 00 */	li r3, 0x0
/* 8020CC50 00209D30  48 00 02 E0 */	b .L_8020CF30
.L_8020CC54:
/* 8020CC54 00209D34  38 03 40 02 */	addi r0, r3, 0x4002
/* 8020CC58 00209D38  7C 04 00 40 */	cmplw r4, r0
/* 8020CC5C 00209D3C  40 80 00 30 */	bge .L_8020CC8C
/* 8020CC60 00209D40  38 00 01 16 */	li r0, 0x116
/* 8020CC64 00209D44  3C 60 80 00 */	lis r3, 0x8000
/* 8020CC68 00209D48  90 01 00 18 */	stw r0, 0x18(r1)
/* 8020CC6C 00209D4C  38 63 00 04 */	addi r3, r3, 0x4
/* 8020CC70 00209D50  4C C6 31 82 */	crclr 4*cr1+eq
/* 8020CC74 00209D54  48 02 29 C1 */	bl _rwerror
/* 8020CC78 00209D58  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8020CC7C 00209D5C  38 61 00 18 */	addi r3, r1, 0x18
/* 8020CC80 00209D60  48 02 29 11 */	bl RwErrorSet
/* 8020CC84 00209D64  38 60 00 00 */	li r3, 0x0
/* 8020CC88 00209D68  48 00 02 A8 */	b .L_8020CF30
.L_8020CC8C:
/* 8020CC8C 00209D6C  7F 83 E3 78 */	mr r3, r28
/* 8020CC90 00209D70  38 81 00 08 */	addi r4, r1, 0x8
/* 8020CC94 00209D74  38 A0 00 04 */	li r5, 0x4
/* 8020CC98 00209D78  48 02 26 05 */	bl RwStreamReadInt32
/* 8020CC9C 00209D7C  28 03 00 00 */	cmplwi r3, 0x0
/* 8020CCA0 00209D80  40 82 00 0C */	bne .L_8020CCAC
/* 8020CCA4 00209D84  38 60 00 00 */	li r3, 0x0
/* 8020CCA8 00209D88  48 00 02 88 */	b .L_8020CF30
.L_8020CCAC:
/* 8020CCAC 00209D8C  80 01 00 08 */	lwz r0, 0x8(r1)
/* 8020CCB0 00209D90  2C 00 00 06 */	cmpwi r0, 0x6
/* 8020CCB4 00209D94  41 82 00 0C */	beq .L_8020CCC0
/* 8020CCB8 00209D98  38 60 00 00 */	li r3, 0x0
/* 8020CCBC 00209D9C  48 00 02 74 */	b .L_8020CF30
.L_8020CCC0:
/* 8020CCC0 00209DA0  80 6D 9F 7C */	lwz r3, RwEngineInstance@sda21(r13)
/* 8020CCC4 00209DA4  3C 80 80 2B */	lis r4, _rpSkinGlobals@ha
/* 8020CCC8 00209DA8  38 84 76 F0 */	addi r4, r4, _rpSkinGlobals@l
/* 8020CCCC 00209DAC  81 83 01 44 */	lwz r12, 0x144(r3)
/* 8020CCD0 00209DB0  80 64 00 18 */	lwz r3, 0x18(r4)
/* 8020CCD4 00209DB4  7D 89 03 A6 */	mtctr r12
/* 8020CCD8 00209DB8  4E 80 04 21 */	bctrl
/* 8020CCDC 00209DBC  38 80 00 00 */	li r4, 0x0
/* 8020CCE0 00209DC0  7C 7E 1B 78 */	mr r30, r3
/* 8020CCE4 00209DC4  38 A0 00 48 */	li r5, 0x48
/* 8020CCE8 00209DC8  4B DF 67 71 */	bl memset
/* 8020CCEC 00209DCC  7F 83 E3 78 */	mr r3, r28
/* 8020CCF0 00209DD0  38 81 00 0C */	addi r4, r1, 0xc
/* 8020CCF4 00209DD4  38 A0 00 04 */	li r5, 0x4
/* 8020CCF8 00209DD8  48 02 25 A5 */	bl RwStreamReadInt32
/* 8020CCFC 00209DDC  28 03 00 00 */	cmplwi r3, 0x0
/* 8020CD00 00209DE0  40 82 00 0C */	bne .L_8020CD0C
/* 8020CD04 00209DE4  38 60 00 00 */	li r3, 0x0
/* 8020CD08 00209DE8  48 00 02 28 */	b .L_8020CF30
.L_8020CD0C:
/* 8020CD0C 00209DEC  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8020CD10 00209DF0  54 00 06 3E */	clrlwi r0, r0, 24
/* 8020CD14 00209DF4  90 1E 00 00 */	stw r0, 0x0(r30)
/* 8020CD18 00209DF8  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8020CD1C 00209DFC  54 00 C6 3E */	extrwi r0, r0, 8, 16
/* 8020CD20 00209E00  90 1E 00 04 */	stw r0, 0x4(r30)
/* 8020CD24 00209E04  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8020CD28 00209E08  54 00 86 3E */	extrwi r0, r0, 8, 8
/* 8020CD2C 00209E0C  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8020CD30 00209E10  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8020CD34 00209E14  83 FD 00 14 */	lwz r31, 0x14(r29)
/* 8020CD38 00209E18  38 63 FF F8 */	addi r3, r3, -0x8
/* 8020CD3C 00209E1C  90 61 00 10 */	stw r3, 0x10(r1)
/* 8020CD40 00209E20  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 8020CD44 00209E24  28 00 00 01 */	cmplwi r0, 0x1
/* 8020CD48 00209E28  40 81 01 24 */	ble .L_8020CE6C
/* 8020CD4C 00209E2C  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8020CD50 00209E30  38 63 00 05 */	addi r3, r3, 0x5
/* 8020CD54 00209E34  81 84 01 34 */	lwz r12, 0x134(r4)
/* 8020CD58 00209E38  7D 89 03 A6 */	mtctr r12
/* 8020CD5C 00209E3C  4E 80 04 21 */	bctrl
/* 8020CD60 00209E40  90 7E 00 24 */	stw r3, 0x24(r30)
/* 8020CD64 00209E44  7F 83 E3 78 */	mr r3, r28
/* 8020CD68 00209E48  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 8020CD6C 00209E4C  80 9E 00 24 */	lwz r4, 0x24(r30)
/* 8020CD70 00209E50  7C 00 F9 D6 */	mullw r0, r0, r31
/* 8020CD74 00209E54  7C 04 02 14 */	add r0, r4, r0
/* 8020CD78 00209E58  90 1E 00 28 */	stw r0, 0x28(r30)
/* 8020CD7C 00209E5C  80 9E 00 28 */	lwz r4, 0x28(r30)
/* 8020CD80 00209E60  38 04 00 03 */	addi r0, r4, 0x3
/* 8020CD84 00209E64  54 00 00 3A */	clrrwi r0, r0, 2
/* 8020CD88 00209E68  90 1E 00 28 */	stw r0, 0x28(r30)
/* 8020CD8C 00209E6C  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 8020CD90 00209E70  80 9E 00 28 */	lwz r4, 0x28(r30)
/* 8020CD94 00209E74  7C 00 F9 D6 */	mullw r0, r0, r31
/* 8020CD98 00209E78  7C 04 02 14 */	add r0, r4, r0
/* 8020CD9C 00209E7C  90 1E 00 0C */	stw r0, 0xc(r30)
/* 8020CDA0 00209E80  80 9E 00 0C */	lwz r4, 0xc(r30)
/* 8020CDA4 00209E84  38 04 00 03 */	addi r0, r4, 0x3
/* 8020CDA8 00209E88  54 00 00 3A */	clrrwi r0, r0, 2
/* 8020CDAC 00209E8C  90 1E 00 0C */	stw r0, 0xc(r30)
/* 8020CDB0 00209E90  80 1E 00 00 */	lwz r0, 0x0(r30)
/* 8020CDB4 00209E94  80 9E 00 0C */	lwz r4, 0xc(r30)
/* 8020CDB8 00209E98  54 00 30 32 */	slwi r0, r0, 6
/* 8020CDBC 00209E9C  7C 04 02 14 */	add r0, r4, r0
/* 8020CDC0 00209EA0  90 1E 00 08 */	stw r0, 0x8(r30)
/* 8020CDC4 00209EA4  80 BE 00 04 */	lwz r5, 0x4(r30)
/* 8020CDC8 00209EA8  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8020CDCC 00209EAC  80 9E 00 08 */	lwz r4, 0x8(r30)
/* 8020CDD0 00209EB0  48 02 57 A5 */	bl RwStreamRead
/* 8020CDD4 00209EB4  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8020CDD8 00209EB8  7C 00 18 40 */	cmplw r0, r3
/* 8020CDDC 00209EBC  41 82 00 0C */	beq .L_8020CDE8
/* 8020CDE0 00209EC0  38 60 00 00 */	li r3, 0x0
/* 8020CDE4 00209EC4  48 00 01 4C */	b .L_8020CF30
.L_8020CDE8:
/* 8020CDE8 00209EC8  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 8020CDEC 00209ECC  7F 83 E3 78 */	mr r3, r28
/* 8020CDF0 00209ED0  7C A0 F9 D6 */	mullw r5, r0, r31
/* 8020CDF4 00209ED4  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8020CDF8 00209ED8  80 9E 00 28 */	lwz r4, 0x28(r30)
/* 8020CDFC 00209EDC  48 02 57 79 */	bl RwStreamRead
/* 8020CE00 00209EE0  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8020CE04 00209EE4  7C 00 18 40 */	cmplw r0, r3
/* 8020CE08 00209EE8  41 82 00 0C */	beq .L_8020CE14
/* 8020CE0C 00209EEC  38 60 00 00 */	li r3, 0x0
/* 8020CE10 00209EF0  48 00 01 20 */	b .L_8020CF30
.L_8020CE14:
/* 8020CE14 00209EF4  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 8020CE18 00209EF8  7F 83 E3 78 */	mr r3, r28
/* 8020CE1C 00209EFC  7C A0 F9 D6 */	mullw r5, r0, r31
/* 8020CE20 00209F00  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8020CE24 00209F04  80 9E 00 24 */	lwz r4, 0x24(r30)
/* 8020CE28 00209F08  48 02 57 4D */	bl RwStreamRead
/* 8020CE2C 00209F0C  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8020CE30 00209F10  7C 00 18 40 */	cmplw r0, r3
/* 8020CE34 00209F14  41 82 00 0C */	beq .L_8020CE40
/* 8020CE38 00209F18  38 60 00 00 */	li r3, 0x0
/* 8020CE3C 00209F1C  48 00 00 F4 */	b .L_8020CF30
.L_8020CE40:
/* 8020CE40 00209F20  80 1E 00 00 */	lwz r0, 0x0(r30)
/* 8020CE44 00209F24  7F 83 E3 78 */	mr r3, r28
/* 8020CE48 00209F28  54 05 30 32 */	slwi r5, r0, 6
/* 8020CE4C 00209F2C  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8020CE50 00209F30  80 9E 00 0C */	lwz r4, 0xc(r30)
/* 8020CE54 00209F34  48 02 57 21 */	bl RwStreamRead
/* 8020CE58 00209F38  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8020CE5C 00209F3C  7C 00 18 40 */	cmplw r0, r3
/* 8020CE60 00209F40  41 82 00 A4 */	beq .L_8020CF04
/* 8020CE64 00209F44  38 60 00 00 */	li r3, 0x0
/* 8020CE68 00209F48  48 00 00 C8 */	b .L_8020CF30
.L_8020CE6C:
/* 8020CE6C 00209F4C  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8020CE70 00209F50  38 63 00 03 */	addi r3, r3, 0x3
/* 8020CE74 00209F54  81 84 01 34 */	lwz r12, 0x134(r4)
/* 8020CE78 00209F58  7D 89 03 A6 */	mtctr r12
/* 8020CE7C 00209F5C  4E 80 04 21 */	bctrl
/* 8020CE80 00209F60  90 7E 00 24 */	stw r3, 0x24(r30)
/* 8020CE84 00209F64  7F 83 E3 78 */	mr r3, r28
/* 8020CE88 00209F68  80 1E 00 24 */	lwz r0, 0x24(r30)
/* 8020CE8C 00209F6C  90 1E 00 0C */	stw r0, 0xc(r30)
/* 8020CE90 00209F70  80 9E 00 0C */	lwz r4, 0xc(r30)
/* 8020CE94 00209F74  38 04 00 03 */	addi r0, r4, 0x3
/* 8020CE98 00209F78  54 00 00 3A */	clrrwi r0, r0, 2
/* 8020CE9C 00209F7C  90 1E 00 0C */	stw r0, 0xc(r30)
/* 8020CEA0 00209F80  80 1E 00 00 */	lwz r0, 0x0(r30)
/* 8020CEA4 00209F84  80 9E 00 0C */	lwz r4, 0xc(r30)
/* 8020CEA8 00209F88  54 00 30 32 */	slwi r0, r0, 6
/* 8020CEAC 00209F8C  7C 04 02 14 */	add r0, r4, r0
/* 8020CEB0 00209F90  90 1E 00 08 */	stw r0, 0x8(r30)
/* 8020CEB4 00209F94  80 BE 00 04 */	lwz r5, 0x4(r30)
/* 8020CEB8 00209F98  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8020CEBC 00209F9C  80 9E 00 08 */	lwz r4, 0x8(r30)
/* 8020CEC0 00209FA0  48 02 56 B5 */	bl RwStreamRead
/* 8020CEC4 00209FA4  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8020CEC8 00209FA8  7C 00 18 40 */	cmplw r0, r3
/* 8020CECC 00209FAC  41 82 00 0C */	beq .L_8020CED8
/* 8020CED0 00209FB0  38 60 00 00 */	li r3, 0x0
/* 8020CED4 00209FB4  48 00 00 5C */	b .L_8020CF30
.L_8020CED8:
/* 8020CED8 00209FB8  80 1E 00 00 */	lwz r0, 0x0(r30)
/* 8020CEDC 00209FBC  7F 83 E3 78 */	mr r3, r28
/* 8020CEE0 00209FC0  54 05 30 32 */	slwi r5, r0, 6
/* 8020CEE4 00209FC4  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8020CEE8 00209FC8  80 9E 00 0C */	lwz r4, 0xc(r30)
/* 8020CEEC 00209FCC  48 02 56 89 */	bl RwStreamRead
/* 8020CEF0 00209FD0  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8020CEF4 00209FD4  7C 00 18 40 */	cmplw r0, r3
/* 8020CEF8 00209FD8  41 82 00 0C */	beq .L_8020CF04
/* 8020CEFC 00209FDC  38 60 00 00 */	li r3, 0x0
/* 8020CF00 00209FE0  48 00 00 30 */	b .L_8020CF30
.L_8020CF04:
/* 8020CF04 00209FE4  7F 83 E3 78 */	mr r3, r28
/* 8020CF08 00209FE8  7F C4 F3 78 */	mr r4, r30
/* 8020CF0C 00209FEC  4B FF D0 21 */	bl _rpSkinSplitDataStreamRead
/* 8020CF10 00209FF0  28 03 00 00 */	cmplwi r3, 0x0
/* 8020CF14 00209FF4  40 82 00 0C */	bne .L_8020CF20
/* 8020CF18 00209FF8  38 60 00 00 */	li r3, 0x0
/* 8020CF1C 00209FFC  48 00 00 14 */	b .L_8020CF30
.L_8020CF20:
/* 8020CF20 0020A000  7F A3 EB 78 */	mr r3, r29
/* 8020CF24 0020A004  7F C4 F3 78 */	mr r4, r30
/* 8020CF28 0020A008  4B FF E2 25 */	bl RpSkinGeometrySetSkin
/* 8020CF2C 0020A00C  7F 83 E3 78 */	mr r3, r28
.L_8020CF30:
/* 8020CF30 0020A010  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8020CF34 0020A014  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8020CF38 0020A018  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8020CF3C 0020A01C  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8020CF40 0020A020  83 81 00 30 */	lwz r28, 0x30(r1)
/* 8020CF44 0020A024  7C 08 03 A6 */	mtlr r0
/* 8020CF48 0020A028  38 21 00 40 */	addi r1, r1, 0x40
/* 8020CF4C 0020A02C  4E 80 00 20 */	blr
.endfn _rpSkinGeometryNativeRead