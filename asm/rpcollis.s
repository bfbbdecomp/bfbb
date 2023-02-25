.include "macros.inc"
.file "rpcollis.c"

# 0x801FA91C - 0x801FAE08
.text
.balign 4

.fn CollisionOpen, local
/* 801FA91C 001F79FC  80 8D 9D D0 */	lwz r4, _rpCollisionNumInstances@sda21(r13)
/* 801FA920 001F7A00  38 A0 00 00 */	li r5, 0x0
/* 801FA924 001F7A04  38 04 00 01 */	addi r0, r4, 0x1
/* 801FA928 001F7A08  90 0D 9D D0 */	stw r0, _rpCollisionNumInstances@sda21(r13)
/* 801FA92C 001F7A0C  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 801FA930 001F7A10  80 0D 9D D4 */	lwz r0, _rpCollisionGlobalsOffset@sda21(r13)
/* 801FA934 001F7A14  7C A4 01 2E */	stwx r5, r4, r0
/* 801FA938 001F7A18  4E 80 00 20 */	blr
.endfn CollisionOpen

.fn CollisionClose, local
/* 801FA93C 001F7A1C  80 8D 9D D0 */	lwz r4, _rpCollisionNumInstances@sda21(r13)
/* 801FA940 001F7A20  38 04 FF FF */	addi r0, r4, -0x1
/* 801FA944 001F7A24  90 0D 9D D0 */	stw r0, _rpCollisionNumInstances@sda21(r13)
/* 801FA948 001F7A28  4E 80 00 20 */	blr
.endfn CollisionClose

.fn CollisionDataDestroy, local
/* 801FA94C 001F7A2C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801FA950 001F7A30  7C 08 02 A6 */	mflr r0
/* 801FA954 001F7A34  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FA958 001F7A38  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801FA95C 001F7A3C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801FA960 001F7A40  7C 9E 23 78 */	mr r30, r4
/* 801FA964 001F7A44  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801FA968 001F7A48  7C 7D 1B 78 */	mr r29, r3
/* 801FA96C 001F7A4C  7F FD F0 2E */	lwzx r31, r29, r30
/* 801FA970 001F7A50  28 1F 00 00 */	cmplwi r31, 0x0
/* 801FA974 001F7A54  41 82 00 38 */	beq .L_801FA9AC
/* 801FA978 001F7A58  41 82 00 2C */	beq .L_801FA9A4
/* 801FA97C 001F7A5C  80 1F 00 00 */	lwz r0, 0x0(r31)
/* 801FA980 001F7A60  54 00 07 FF */	clrlwi. r0, r0, 31
/* 801FA984 001F7A64  40 82 00 0C */	bne .L_801FA990
/* 801FA988 001F7A68  80 7F 00 04 */	lwz r3, 0x4(r31)
/* 801FA98C 001F7A6C  4B FF F2 59 */	bl _rpCollBSPTreeDestroy
.L_801FA990:
/* 801FA990 001F7A70  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 801FA994 001F7A74  7F E3 FB 78 */	mr r3, r31
/* 801FA998 001F7A78  81 84 01 38 */	lwz r12, 0x138(r4)
/* 801FA99C 001F7A7C  7D 89 03 A6 */	mtctr r12
/* 801FA9A0 001F7A80  4E 80 04 21 */	bctrl
.L_801FA9A4:
/* 801FA9A4 001F7A84  38 00 00 00 */	li r0, 0x0
/* 801FA9A8 001F7A88  7C 1D F1 2E */	stwx r0, r29, r30
.L_801FA9AC:
/* 801FA9AC 001F7A8C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801FA9B0 001F7A90  7F A3 EB 78 */	mr r3, r29
/* 801FA9B4 001F7A94  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801FA9B8 001F7A98  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801FA9BC 001F7A9C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801FA9C0 001F7AA0  7C 08 03 A6 */	mtlr r0
/* 801FA9C4 001F7AA4  38 21 00 20 */	addi r1, r1, 0x20
/* 801FA9C8 001F7AA8  4E 80 00 20 */	blr
.endfn CollisionDataDestroy

.fn CollisionDataCreate, local
/* 801FA9CC 001F7AAC  38 00 00 00 */	li r0, 0x0
/* 801FA9D0 001F7AB0  7C 03 21 2E */	stwx r0, r3, r4
/* 801FA9D4 001F7AB4  4E 80 00 20 */	blr
.endfn CollisionDataCreate

.fn CollisionAtomicInit, local
/* 801FA9D8 001F7AB8  80 0D 9D D8 */	lwz r0, _rpCollisionAtomicDataOffset@sda21(r13)
/* 801FA9DC 001F7ABC  38 80 00 00 */	li r4, 0x0
/* 801FA9E0 001F7AC0  7C 83 01 2E */	stwx r4, r3, r0
/* 801FA9E4 001F7AC4  4E 80 00 20 */	blr
.endfn CollisionAtomicInit

.fn CollisionDataStreamWrite, local
/* 801FA9E8 001F7AC8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801FA9EC 001F7ACC  7C 08 02 A6 */	mflr r0
/* 801FA9F0 001F7AD0  90 01 00 24 */	stw r0, 0x24(r1)
/* 801FA9F4 001F7AD4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801FA9F8 001F7AD8  7F E5 30 2E */	lwzx r31, r5, r6
/* 801FA9FC 001F7ADC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801FAA00 001F7AE0  28 1F 00 00 */	cmplwi r31, 0x0
/* 801FAA04 001F7AE4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801FAA08 001F7AE8  7C 7D 1B 78 */	mr r29, r3
/* 801FAA0C 001F7AEC  40 82 00 08 */	bne .L_801FAA14
/* 801FAA10 001F7AF0  48 00 00 9C */	b .L_801FAAAC
.L_801FAA14:
/* 801FAA14 001F7AF4  80 9F 00 04 */	lwz r4, 0x4(r31)
/* 801FAA18 001F7AF8  38 A0 00 04 */	li r5, 0x4
/* 801FAA1C 001F7AFC  48 03 46 95 */	bl RwStreamWriteInt32
/* 801FAA20 001F7B00  28 03 00 00 */	cmplwi r3, 0x0
/* 801FAA24 001F7B04  41 82 00 1C */	beq .L_801FAA40
/* 801FAA28 001F7B08  7F A3 EB 78 */	mr r3, r29
/* 801FAA2C 001F7B0C  38 9F 00 08 */	addi r4, r31, 0x8
/* 801FAA30 001F7B10  38 A0 00 04 */	li r5, 0x4
/* 801FAA34 001F7B14  48 03 46 7D */	bl RwStreamWriteInt32
/* 801FAA38 001F7B18  28 03 00 00 */	cmplwi r3, 0x0
/* 801FAA3C 001F7B1C  40 82 00 0C */	bne .L_801FAA48
.L_801FAA40:
/* 801FAA40 001F7B20  38 60 00 00 */	li r3, 0x0
/* 801FAA44 001F7B24  48 00 00 68 */	b .L_801FAAAC
.L_801FAA48:
/* 801FAA48 001F7B28  80 7F 00 04 */	lwz r3, 0x4(r31)
/* 801FAA4C 001F7B2C  7F A4 EB 78 */	mr r4, r29
/* 801FAA50 001F7B30  4B FF F1 C9 */	bl _rpCollBSPTreeStreamWrite
/* 801FAA54 001F7B34  28 03 00 00 */	cmplwi r3, 0x0
/* 801FAA58 001F7B38  40 82 00 0C */	bne .L_801FAA64
/* 801FAA5C 001F7B3C  38 60 00 00 */	li r3, 0x0
/* 801FAA60 001F7B40  48 00 00 4C */	b .L_801FAAAC
.L_801FAA64:
/* 801FAA64 001F7B44  83 DF 00 08 */	lwz r30, 0x8(r31)
/* 801FAA68 001F7B48  83 FF 00 0C */	lwz r31, 0xc(r31)
/* 801FAA6C 001F7B4C  48 00 00 30 */	b .L_801FAA9C
.L_801FAA70:
/* 801FAA70 001F7B50  A0 1F 00 00 */	lhz r0, 0x0(r31)
/* 801FAA74 001F7B54  7F A3 EB 78 */	mr r3, r29
/* 801FAA78 001F7B58  38 81 00 08 */	addi r4, r1, 0x8
/* 801FAA7C 001F7B5C  38 A0 00 04 */	li r5, 0x4
/* 801FAA80 001F7B60  90 01 00 08 */	stw r0, 0x8(r1)
/* 801FAA84 001F7B64  3B FF 00 02 */	addi r31, r31, 0x2
/* 801FAA88 001F7B68  48 03 46 29 */	bl RwStreamWriteInt32
/* 801FAA8C 001F7B6C  28 03 00 00 */	cmplwi r3, 0x0
/* 801FAA90 001F7B70  40 82 00 0C */	bne .L_801FAA9C
/* 801FAA94 001F7B74  38 60 00 00 */	li r3, 0x0
/* 801FAA98 001F7B78  48 00 00 14 */	b .L_801FAAAC
.L_801FAA9C:
/* 801FAA9C 001F7B7C  2C 1E 00 00 */	cmpwi r30, 0x0
/* 801FAAA0 001F7B80  3B DE FF FF */	addi r30, r30, -0x1
/* 801FAAA4 001F7B84  40 82 FF CC */	bne .L_801FAA70
/* 801FAAA8 001F7B88  7F A3 EB 78 */	mr r3, r29
.L_801FAAAC:
/* 801FAAAC 001F7B8C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801FAAB0 001F7B90  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801FAAB4 001F7B94  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801FAAB8 001F7B98  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801FAABC 001F7B9C  7C 08 03 A6 */	mtlr r0
/* 801FAAC0 001F7BA0  38 21 00 20 */	addi r1, r1, 0x20
/* 801FAAC4 001F7BA4  4E 80 00 20 */	blr
.endfn CollisionDataStreamWrite

.fn CollisionDataStreamRead, local
/* 801FAAC8 001F7BA8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801FAACC 001F7BAC  7C 08 02 A6 */	mflr r0
/* 801FAAD0 001F7BB0  90 01 00 44 */	stw r0, 0x44(r1)
/* 801FAAD4 001F7BB4  39 61 00 40 */	addi r11, r1, 0x40
/* 801FAAD8 001F7BB8  4B FF 2A 29 */	bl _savegpr_26
/* 801FAADC 001F7BBC  2C 04 00 00 */	cmpwi r4, 0x0
/* 801FAAE0 001F7BC0  7C 7D 1B 78 */	mr r29, r3
/* 801FAAE4 001F7BC4  7C BE 2B 78 */	mr r30, r5
/* 801FAAE8 001F7BC8  7C DF 33 78 */	mr r31, r6
/* 801FAAEC 001F7BCC  41 82 01 5C */	beq .L_801FAC48
/* 801FAAF0 001F7BD0  38 81 00 10 */	addi r4, r1, 0x10
/* 801FAAF4 001F7BD4  38 A0 00 04 */	li r5, 0x4
/* 801FAAF8 001F7BD8  48 03 47 A5 */	bl RwStreamReadInt32
/* 801FAAFC 001F7BDC  28 03 00 00 */	cmplwi r3, 0x0
/* 801FAB00 001F7BE0  41 82 00 1C */	beq .L_801FAB1C
/* 801FAB04 001F7BE4  7F A3 EB 78 */	mr r3, r29
/* 801FAB08 001F7BE8  38 81 00 0C */	addi r4, r1, 0xc
/* 801FAB0C 001F7BEC  38 A0 00 04 */	li r5, 0x4
/* 801FAB10 001F7BF0  48 03 47 8D */	bl RwStreamReadInt32
/* 801FAB14 001F7BF4  28 03 00 00 */	cmplwi r3, 0x0
/* 801FAB18 001F7BF8  40 82 00 0C */	bne .L_801FAB24
.L_801FAB1C:
/* 801FAB1C 001F7BFC  38 60 00 00 */	li r3, 0x0
/* 801FAB20 001F7C00  48 00 01 2C */	b .L_801FAC4C
.L_801FAB24:
/* 801FAB24 001F7C04  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801FAB28 001F7C08  4B FF F0 A5 */	bl _rpCollBSPTreeMemGetSize
/* 801FAB2C 001F7C0C  80 01 00 0C */	lwz r0, 0xc(r1)
/* 801FAB30 001F7C10  7C 7C 1B 78 */	mr r28, r3
/* 801FAB34 001F7C14  80 6D 9F 7C */	lwz r3, RwEngineInstance@sda21(r13)
/* 801FAB38 001F7C18  54 00 08 3C */	slwi r0, r0, 1
/* 801FAB3C 001F7C1C  7F 5C 02 14 */	add r26, r28, r0
/* 801FAB40 001F7C20  81 83 01 34 */	lwz r12, 0x134(r3)
/* 801FAB44 001F7C24  3B 5A 00 10 */	addi r26, r26, 0x10
/* 801FAB48 001F7C28  7F 43 D3 78 */	mr r3, r26
/* 801FAB4C 001F7C2C  7D 89 03 A6 */	mtctr r12
/* 801FAB50 001F7C30  4E 80 04 21 */	bctrl
/* 801FAB54 001F7C34  7C 7B 1B 79 */	mr. r27, r3
/* 801FAB58 001F7C38  40 82 00 34 */	bne .L_801FAB8C
/* 801FAB5C 001F7C3C  38 00 01 1D */	li r0, 0x11d
/* 801FAB60 001F7C40  3C 60 80 00 */	lis r3, 0x8000
/* 801FAB64 001F7C44  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FAB68 001F7C48  7F 44 D3 78 */	mr r4, r26
/* 801FAB6C 001F7C4C  38 63 00 13 */	addi r3, r3, 0x13
/* 801FAB70 001F7C50  4C C6 31 82 */	crclr 4*cr1+eq
/* 801FAB74 001F7C54  48 03 4A C1 */	bl _rwerror
/* 801FAB78 001F7C58  90 61 00 18 */	stw r3, 0x18(r1)
/* 801FAB7C 001F7C5C  38 61 00 14 */	addi r3, r1, 0x14
/* 801FAB80 001F7C60  48 03 4A 11 */	bl RwErrorSet
/* 801FAB84 001F7C64  38 60 00 00 */	li r3, 0x0
/* 801FAB88 001F7C68  48 00 00 C4 */	b .L_801FAC4C
.L_801FAB8C:
/* 801FAB8C 001F7C6C  38 60 00 01 */	li r3, 0x1
/* 801FAB90 001F7C70  38 1B 00 10 */	addi r0, r27, 0x10
/* 801FAB94 001F7C74  90 7B 00 00 */	stw r3, 0x0(r27)
/* 801FAB98 001F7C78  90 1B 00 04 */	stw r0, 0x4(r27)
/* 801FAB9C 001F7C7C  80 01 00 0C */	lwz r0, 0xc(r1)
/* 801FABA0 001F7C80  90 1B 00 08 */	stw r0, 0x8(r27)
/* 801FABA4 001F7C84  80 1B 00 04 */	lwz r0, 0x4(r27)
/* 801FABA8 001F7C88  7C 00 E2 14 */	add r0, r0, r28
/* 801FABAC 001F7C8C  90 1B 00 0C */	stw r0, 0xc(r27)
/* 801FABB0 001F7C90  80 7B 00 04 */	lwz r3, 0x4(r27)
/* 801FABB4 001F7C94  80 81 00 10 */	lwz r4, 0x10(r1)
/* 801FABB8 001F7C98  4B FF EF D9 */	bl _rpCollBSPTreeInit
/* 801FABBC 001F7C9C  80 7B 00 04 */	lwz r3, 0x4(r27)
/* 801FABC0 001F7CA0  7F A4 EB 78 */	mr r4, r29
/* 801FABC4 001F7CA4  4B FF F1 9D */	bl _rpCollBSPTreeStreamRead
/* 801FABC8 001F7CA8  28 03 00 00 */	cmplwi r3, 0x0
/* 801FABCC 001F7CAC  40 82 00 20 */	bne .L_801FABEC
/* 801FABD0 001F7CB0  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 801FABD4 001F7CB4  7F 63 DB 78 */	mr r3, r27
/* 801FABD8 001F7CB8  81 84 01 38 */	lwz r12, 0x138(r4)
/* 801FABDC 001F7CBC  7D 89 03 A6 */	mtctr r12
/* 801FABE0 001F7CC0  4E 80 04 21 */	bctrl
/* 801FABE4 001F7CC4  38 60 00 00 */	li r3, 0x0
/* 801FABE8 001F7CC8  48 00 00 64 */	b .L_801FAC4C
.L_801FABEC:
/* 801FABEC 001F7CCC  83 5B 00 08 */	lwz r26, 0x8(r27)
/* 801FABF0 001F7CD0  83 9B 00 0C */	lwz r28, 0xc(r27)
/* 801FABF4 001F7CD4  48 00 00 44 */	b .L_801FAC38
.L_801FABF8:
/* 801FABF8 001F7CD8  7F A3 EB 78 */	mr r3, r29
/* 801FABFC 001F7CDC  38 81 00 08 */	addi r4, r1, 0x8
/* 801FAC00 001F7CE0  38 A0 00 04 */	li r5, 0x4
/* 801FAC04 001F7CE4  48 03 46 99 */	bl RwStreamReadInt32
/* 801FAC08 001F7CE8  28 03 00 00 */	cmplwi r3, 0x0
/* 801FAC0C 001F7CEC  40 82 00 20 */	bne .L_801FAC2C
/* 801FAC10 001F7CF0  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 801FAC14 001F7CF4  7F 63 DB 78 */	mr r3, r27
/* 801FAC18 001F7CF8  81 84 01 38 */	lwz r12, 0x138(r4)
/* 801FAC1C 001F7CFC  7D 89 03 A6 */	mtctr r12
/* 801FAC20 001F7D00  4E 80 04 21 */	bctrl
/* 801FAC24 001F7D04  38 60 00 00 */	li r3, 0x0
/* 801FAC28 001F7D08  48 00 00 24 */	b .L_801FAC4C
.L_801FAC2C:
/* 801FAC2C 001F7D0C  80 01 00 08 */	lwz r0, 0x8(r1)
/* 801FAC30 001F7D10  B0 1C 00 00 */	sth r0, 0x0(r28)
/* 801FAC34 001F7D14  3B 9C 00 02 */	addi r28, r28, 0x2
.L_801FAC38:
/* 801FAC38 001F7D18  2C 1A 00 00 */	cmpwi r26, 0x0
/* 801FAC3C 001F7D1C  3B 5A FF FF */	addi r26, r26, -0x1
/* 801FAC40 001F7D20  40 82 FF B8 */	bne .L_801FABF8
/* 801FAC44 001F7D24  7F 7E F9 2E */	stwx r27, r30, r31
.L_801FAC48:
/* 801FAC48 001F7D28  7F A3 EB 78 */	mr r3, r29
.L_801FAC4C:
/* 801FAC4C 001F7D2C  39 61 00 40 */	addi r11, r1, 0x40
/* 801FAC50 001F7D30  4B FF 28 FD */	bl _restgpr_26
/* 801FAC54 001F7D34  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801FAC58 001F7D38  7C 08 03 A6 */	mtlr r0
/* 801FAC5C 001F7D3C  38 21 00 40 */	addi r1, r1, 0x40
/* 801FAC60 001F7D40  4E 80 00 20 */	blr
.endfn CollisionDataStreamRead

.fn CollisionDataStreamGetSize, local
/* 801FAC64 001F7D44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FAC68 001F7D48  7C 08 02 A6 */	mflr r0
/* 801FAC6C 001F7D4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FAC70 001F7D50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801FAC74 001F7D54  7F E3 20 2E */	lwzx r31, r3, r4
/* 801FAC78 001F7D58  28 1F 00 00 */	cmplwi r31, 0x0
/* 801FAC7C 001F7D5C  41 82 00 20 */	beq .L_801FAC9C
/* 801FAC80 001F7D60  80 7F 00 04 */	lwz r3, 0x4(r31)
/* 801FAC84 001F7D64  4B FF F2 4D */	bl _rpCollBSPTreeStreamGetSize
/* 801FAC88 001F7D68  80 1F 00 08 */	lwz r0, 0x8(r31)
/* 801FAC8C 001F7D6C  38 63 00 08 */	addi r3, r3, 0x8
/* 801FAC90 001F7D70  54 00 10 3A */	slwi r0, r0, 2
/* 801FAC94 001F7D74  7C 63 02 14 */	add r3, r3, r0
/* 801FAC98 001F7D78  48 00 00 08 */	b .L_801FACA0
.L_801FAC9C:
/* 801FAC9C 001F7D7C  38 60 00 00 */	li r3, 0x0
.L_801FACA0:
/* 801FACA0 001F7D80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FACA4 001F7D84  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801FACA8 001F7D88  7C 08 03 A6 */	mtlr r0
/* 801FACAC 001F7D8C  38 21 00 10 */	addi r1, r1, 0x10
/* 801FACB0 001F7D90  4E 80 00 20 */	blr
.endfn CollisionDataStreamGetSize

.fn RpCollisionPluginAttach, global
/* 801FACB4 001F7D94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801FACB8 001F7D98  7C 08 02 A6 */	mflr r0
/* 801FACBC 001F7D9C  3C 60 80 20 */	lis r3, CollisionOpen@ha
/* 801FACC0 001F7DA0  3C 80 80 20 */	lis r4, CollisionClose@ha
/* 801FACC4 001F7DA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801FACC8 001F7DA8  38 A3 A9 1C */	addi r5, r3, CollisionOpen@l
/* 801FACCC 001F7DAC  38 C4 A9 3C */	addi r6, r4, CollisionClose@l
/* 801FACD0 001F7DB0  38 60 00 04 */	li r3, 0x4
/* 801FACD4 001F7DB4  38 80 01 1D */	li r4, 0x11d
/* 801FACD8 001F7DB8  48 03 D0 8D */	bl RwEngineRegisterPlugin
/* 801FACDC 001F7DBC  90 6D 9D D4 */	stw r3, _rpCollisionGlobalsOffset@sda21(r13)
/* 801FACE0 001F7DC0  80 0D 9D D4 */	lwz r0, _rpCollisionGlobalsOffset@sda21(r13)
/* 801FACE4 001F7DC4  54 00 0F FE */	srwi r0, r0, 31
/* 801FACE8 001F7DC8  68 00 00 01 */	xori r0, r0, 0x1
/* 801FACEC 001F7DCC  2C 00 00 00 */	cmpwi r0, 0x0
/* 801FACF0 001F7DD0  41 82 00 64 */	beq .L_801FAD54
/* 801FACF4 001F7DD4  3C 60 80 20 */	lis r3, CollisionDataCreate@ha
/* 801FACF8 001F7DD8  3C 80 80 20 */	lis r4, CollisionDataDestroy@ha
/* 801FACFC 001F7DDC  38 A3 A9 CC */	addi r5, r3, CollisionDataCreate@l
/* 801FAD00 001F7DE0  38 E0 00 00 */	li r7, 0x0
/* 801FAD04 001F7DE4  38 C4 A9 4C */	addi r6, r4, CollisionDataDestroy@l
/* 801FAD08 001F7DE8  38 60 00 04 */	li r3, 0x4
/* 801FAD0C 001F7DEC  38 80 01 1D */	li r4, 0x11d
/* 801FAD10 001F7DF0  48 02 14 05 */	bl RpWorldSectorRegisterPlugin
/* 801FAD14 001F7DF4  90 6D 9D E0 */	stw r3, _rpCollisionWorldSectorDataOffset@sda21(r13)
/* 801FAD18 001F7DF8  80 0D 9D E0 */	lwz r0, _rpCollisionWorldSectorDataOffset@sda21(r13)
/* 801FAD1C 001F7DFC  54 00 0F FE */	srwi r0, r0, 31
/* 801FAD20 001F7E00  68 00 00 01 */	xori r0, r0, 0x1
/* 801FAD24 001F7E04  2C 00 00 00 */	cmpwi r0, 0x0
/* 801FAD28 001F7E08  41 82 00 2C */	beq .L_801FAD54
/* 801FAD2C 001F7E0C  3C 80 80 20 */	lis r4, CollisionDataStreamRead@ha
/* 801FAD30 001F7E10  3C A0 80 20 */	lis r5, CollisionDataStreamWrite@ha
/* 801FAD34 001F7E14  3C C0 80 20 */	lis r6, CollisionDataStreamGetSize@ha
/* 801FAD38 001F7E18  38 60 01 1D */	li r3, 0x11d
/* 801FAD3C 001F7E1C  38 84 AA C8 */	addi r4, r4, CollisionDataStreamRead@l
/* 801FAD40 001F7E20  38 A5 A9 E8 */	addi r5, r5, CollisionDataStreamWrite@l
/* 801FAD44 001F7E24  38 C6 AC 64 */	addi r6, r6, CollisionDataStreamGetSize@l
/* 801FAD48 001F7E28  48 02 14 0D */	bl RpWorldSectorRegisterPluginStream
/* 801FAD4C 001F7E2C  54 60 0F FE */	srwi r0, r3, 31
/* 801FAD50 001F7E30  68 00 00 01 */	xori r0, r0, 0x1
.L_801FAD54:
/* 801FAD54 001F7E34  2C 00 00 00 */	cmpwi r0, 0x0
/* 801FAD58 001F7E38  7C 03 03 78 */	mr r3, r0
/* 801FAD5C 001F7E3C  41 82 00 9C */	beq .L_801FADF8
/* 801FAD60 001F7E40  3C 80 80 20 */	lis r4, CollisionAtomicInit@ha
/* 801FAD64 001F7E44  38 60 00 04 */	li r3, 0x4
/* 801FAD68 001F7E48  38 A4 A9 D8 */	addi r5, r4, CollisionAtomicInit@l
/* 801FAD6C 001F7E4C  38 C0 00 00 */	li r6, 0x0
/* 801FAD70 001F7E50  38 80 01 1D */	li r4, 0x11d
/* 801FAD74 001F7E54  38 E0 00 00 */	li r7, 0x0
/* 801FAD78 001F7E58  48 01 9F 75 */	bl RpAtomicRegisterPlugin
/* 801FAD7C 001F7E5C  90 6D 9D D8 */	stw r3, _rpCollisionAtomicDataOffset@sda21(r13)
/* 801FAD80 001F7E60  80 0D 9D D8 */	lwz r0, _rpCollisionAtomicDataOffset@sda21(r13)
/* 801FAD84 001F7E64  54 00 0F FE */	srwi r0, r0, 31
/* 801FAD88 001F7E68  68 00 00 01 */	xori r0, r0, 0x1
/* 801FAD8C 001F7E6C  2C 00 00 00 */	cmpwi r0, 0x0
/* 801FAD90 001F7E70  41 82 00 64 */	beq .L_801FADF4
/* 801FAD94 001F7E74  3C 60 80 20 */	lis r3, CollisionDataCreate@ha
/* 801FAD98 001F7E78  3C 80 80 20 */	lis r4, CollisionDataDestroy@ha
/* 801FAD9C 001F7E7C  38 A3 A9 CC */	addi r5, r3, CollisionDataCreate@l
/* 801FADA0 001F7E80  38 E0 00 00 */	li r7, 0x0
/* 801FADA4 001F7E84  38 C4 A9 4C */	addi r6, r4, CollisionDataDestroy@l
/* 801FADA8 001F7E88  38 60 00 04 */	li r3, 0x4
/* 801FADAC 001F7E8C  38 80 01 1D */	li r4, 0x11d
/* 801FADB0 001F7E90  48 01 AF 35 */	bl RpGeometryRegisterPlugin
/* 801FADB4 001F7E94  90 6D 9D DC */	stw r3, _rpCollisionGeometryDataOffset@sda21(r13)
/* 801FADB8 001F7E98  80 0D 9D DC */	lwz r0, _rpCollisionGeometryDataOffset@sda21(r13)
/* 801FADBC 001F7E9C  54 00 0F FE */	srwi r0, r0, 31
/* 801FADC0 001F7EA0  68 00 00 01 */	xori r0, r0, 0x1
/* 801FADC4 001F7EA4  2C 00 00 00 */	cmpwi r0, 0x0
/* 801FADC8 001F7EA8  41 82 00 2C */	beq .L_801FADF4
/* 801FADCC 001F7EAC  3C 80 80 20 */	lis r4, CollisionDataStreamRead@ha
/* 801FADD0 001F7EB0  3C A0 80 20 */	lis r5, CollisionDataStreamWrite@ha
/* 801FADD4 001F7EB4  3C C0 80 20 */	lis r6, CollisionDataStreamGetSize@ha
/* 801FADD8 001F7EB8  38 60 01 1D */	li r3, 0x11d
/* 801FADDC 001F7EBC  38 84 AA C8 */	addi r4, r4, CollisionDataStreamRead@l
/* 801FADE0 001F7EC0  38 A5 A9 E8 */	addi r5, r5, CollisionDataStreamWrite@l
/* 801FADE4 001F7EC4  38 C6 AC 64 */	addi r6, r6, CollisionDataStreamGetSize@l
/* 801FADE8 001F7EC8  48 01 AF 3D */	bl RpGeometryRegisterPluginStream
/* 801FADEC 001F7ECC  54 60 0F FE */	srwi r0, r3, 31
/* 801FADF0 001F7ED0  68 00 00 01 */	xori r0, r0, 0x1
.L_801FADF4:
/* 801FADF4 001F7ED4  7C 03 03 78 */	mr r3, r0
.L_801FADF8:
/* 801FADF8 001F7ED8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801FADFC 001F7EDC  7C 08 03 A6 */	mtlr r0
/* 801FAE00 001F7EE0  38 21 00 10 */	addi r1, r1, 0x10
/* 801FAE04 001F7EE4  4E 80 00 20 */	blr
.endfn RpCollisionPluginAttach

# 0x803CC6D0 - 0x803CC6E8
.section .sbss, "wa", @nobits
.balign 8

.obj _rpCollisionNumInstances, global
	.skip 0x4
.endobj _rpCollisionNumInstances

.obj _rpCollisionGlobalsOffset, global
	.skip 0x4
.endobj _rpCollisionGlobalsOffset

.obj _rpCollisionAtomicDataOffset, global
	.skip 0x4
.endobj _rpCollisionAtomicDataOffset

.obj _rpCollisionGeometryDataOffset, global
	.skip 0x4
.endobj _rpCollisionGeometryDataOffset

.obj _rpCollisionWorldSectorDataOffset, global
	.skip 0x4
.endobj _rpCollisionWorldSectorDataOffset
	.skip 0x4
