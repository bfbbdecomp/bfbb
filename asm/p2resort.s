.include "macros.inc"
.file "p2resort.c"

# 0x80250980 - 0x80250E34
.text
.balign 4

.fn _repartition, local
/* 80250980 0024DA60  94 21 FE 60 */	stwu r1, -0x1a0(r1)
/* 80250984 0024DA64  1D 05 00 05 */	mulli r8, r5, 0x5
/* 80250988 0024DA68  93 E1 01 9C */	stw r31, 0x19c(r1)
/* 8025098C 0024DA6C  39 21 00 14 */	addi r9, r1, 0x14
/* 80250990 0024DA70  93 C1 01 98 */	stw r30, 0x198(r1)
/* 80250994 0024DA74  93 A1 01 94 */	stw r29, 0x194(r1)
/* 80250998 0024DA78  93 81 01 90 */	stw r28, 0x190(r1)
/* 8025099C 0024DA7C  90 81 00 0C */	stw r4, 0xc(r1)
/* 802509A0 0024DA80  38 81 00 08 */	addi r4, r1, 0x8
/* 802509A4 0024DA84  90 61 00 08 */	stw r3, 0x8(r1)
/* 802509A8 0024DA88  90 E1 00 10 */	stw r7, 0x10(r1)
.L_802509AC:
/* 802509AC 0024DA8C  83 89 FF F4 */	lwz r28, -0xc(r9)
/* 802509B0 0024DA90  83 A9 FF F8 */	lwz r29, -0x8(r9)
/* 802509B4 0024DA94  83 C9 FF FC */	lwz r30, -0x4(r9)
/* 802509B8 0024DA98  39 29 FF F4 */	addi r9, r9, -0xc
.L_802509BC:
/* 802509BC 0024DA9C  7F 87 E3 78 */	mr r7, r28
/* 802509C0 0024DAA0  7F AA EB 78 */	mr r10, r29
/* 802509C4 0024DAA4  48 00 00 10 */	b .L_802509D4
.L_802509C8:
/* 802509C8 0024DAA8  7F 9C 2A 14 */	add r28, r28, r5
/* 802509CC 0024DAAC  7C 1C E8 40 */	cmplw r28, r29
/* 802509D0 0024DAB0  41 81 01 10 */	bgt .L_80250AE0
.L_802509D4:
/* 802509D4 0024DAB4  7C 1C 30 2E */	lwzx r0, r28, r6
/* 802509D8 0024DAB8  7F C0 00 39 */	and. r0, r30, r0
/* 802509DC 0024DABC  41 82 FF EC */	beq .L_802509C8
/* 802509E0 0024DAC0  48 00 00 10 */	b .L_802509F0
.L_802509E4:
/* 802509E4 0024DAC4  7F A5 E8 50 */	subf r29, r5, r29
/* 802509E8 0024DAC8  7C 1C E8 40 */	cmplw r28, r29
/* 802509EC 0024DACC  41 81 00 F4 */	bgt .L_80250AE0
.L_802509F0:
/* 802509F0 0024DAD0  7C 1D 30 2E */	lwzx r0, r29, r6
/* 802509F4 0024DAD4  7F C0 00 39 */	and. r0, r30, r0
/* 802509F8 0024DAD8  40 82 FF EC */	bne .L_802509E4
/* 802509FC 0024DADC  28 05 00 04 */	cmplwi r5, 0x4
/* 80250A00 0024DAE0  7F 8B E3 78 */	mr r11, r28
/* 80250A04 0024DAE4  7F AC EB 78 */	mr r12, r29
/* 80250A08 0024DAE8  54 A3 F0 BE */	srwi r3, r5, 2
/* 80250A0C 0024DAEC  41 80 00 C4 */	blt .L_80250AD0
/* 80250A10 0024DAF0  54 60 E8 FF */	srwi. r0, r3, 3
/* 80250A14 0024DAF4  7C 09 03 A6 */	mtctr r0
/* 80250A18 0024DAF8  41 82 00 98 */	beq .L_80250AB0
.L_80250A1C:
/* 80250A1C 0024DAFC  83 EC 00 00 */	lwz r31, 0x0(r12)
/* 80250A20 0024DB00  80 0B 00 00 */	lwz r0, 0x0(r11)
/* 80250A24 0024DB04  90 0C 00 00 */	stw r0, 0x0(r12)
/* 80250A28 0024DB08  93 EB 00 00 */	stw r31, 0x0(r11)
/* 80250A2C 0024DB0C  83 EC 00 04 */	lwz r31, 0x4(r12)
/* 80250A30 0024DB10  80 0B 00 04 */	lwz r0, 0x4(r11)
/* 80250A34 0024DB14  90 0C 00 04 */	stw r0, 0x4(r12)
/* 80250A38 0024DB18  93 EB 00 04 */	stw r31, 0x4(r11)
/* 80250A3C 0024DB1C  83 EC 00 08 */	lwz r31, 0x8(r12)
/* 80250A40 0024DB20  80 0B 00 08 */	lwz r0, 0x8(r11)
/* 80250A44 0024DB24  90 0C 00 08 */	stw r0, 0x8(r12)
/* 80250A48 0024DB28  93 EB 00 08 */	stw r31, 0x8(r11)
/* 80250A4C 0024DB2C  83 EC 00 0C */	lwz r31, 0xc(r12)
/* 80250A50 0024DB30  80 0B 00 0C */	lwz r0, 0xc(r11)
/* 80250A54 0024DB34  90 0C 00 0C */	stw r0, 0xc(r12)
/* 80250A58 0024DB38  93 EB 00 0C */	stw r31, 0xc(r11)
/* 80250A5C 0024DB3C  83 EC 00 10 */	lwz r31, 0x10(r12)
/* 80250A60 0024DB40  80 0B 00 10 */	lwz r0, 0x10(r11)
/* 80250A64 0024DB44  90 0C 00 10 */	stw r0, 0x10(r12)
/* 80250A68 0024DB48  93 EB 00 10 */	stw r31, 0x10(r11)
/* 80250A6C 0024DB4C  83 EC 00 14 */	lwz r31, 0x14(r12)
/* 80250A70 0024DB50  80 0B 00 14 */	lwz r0, 0x14(r11)
/* 80250A74 0024DB54  90 0C 00 14 */	stw r0, 0x14(r12)
/* 80250A78 0024DB58  93 EB 00 14 */	stw r31, 0x14(r11)
/* 80250A7C 0024DB5C  83 EC 00 18 */	lwz r31, 0x18(r12)
/* 80250A80 0024DB60  80 0B 00 18 */	lwz r0, 0x18(r11)
/* 80250A84 0024DB64  90 0C 00 18 */	stw r0, 0x18(r12)
/* 80250A88 0024DB68  93 EB 00 18 */	stw r31, 0x18(r11)
/* 80250A8C 0024DB6C  83 EC 00 1C */	lwz r31, 0x1c(r12)
/* 80250A90 0024DB70  80 0B 00 1C */	lwz r0, 0x1c(r11)
/* 80250A94 0024DB74  90 0C 00 1C */	stw r0, 0x1c(r12)
/* 80250A98 0024DB78  39 8C 00 20 */	addi r12, r12, 0x20
/* 80250A9C 0024DB7C  93 EB 00 1C */	stw r31, 0x1c(r11)
/* 80250AA0 0024DB80  39 6B 00 20 */	addi r11, r11, 0x20
/* 80250AA4 0024DB84  42 00 FF 78 */	bdnz .L_80250A1C
/* 80250AA8 0024DB88  70 63 00 07 */	andi. r3, r3, 0x7
/* 80250AAC 0024DB8C  41 82 00 24 */	beq .L_80250AD0
.L_80250AB0:
/* 80250AB0 0024DB90  7C 69 03 A6 */	mtctr r3
.L_80250AB4:
/* 80250AB4 0024DB94  83 EC 00 00 */	lwz r31, 0x0(r12)
/* 80250AB8 0024DB98  80 0B 00 00 */	lwz r0, 0x0(r11)
/* 80250ABC 0024DB9C  90 0C 00 00 */	stw r0, 0x0(r12)
/* 80250AC0 0024DBA0  39 8C 00 04 */	addi r12, r12, 0x4
/* 80250AC4 0024DBA4  93 EB 00 00 */	stw r31, 0x0(r11)
/* 80250AC8 0024DBA8  39 6B 00 04 */	addi r11, r11, 0x4
/* 80250ACC 0024DBAC  42 00 FF E8 */	bdnz .L_80250AB4
.L_80250AD0:
/* 80250AD0 0024DBB0  7F 9C 2A 14 */	add r28, r28, r5
/* 80250AD4 0024DBB4  7F A5 E8 50 */	subf r29, r5, r29
/* 80250AD8 0024DBB8  7C 1C E8 40 */	cmplw r28, r29
/* 80250ADC 0024DBBC  40 81 FE F8 */	ble .L_802509D4
.L_80250AE0:
/* 80250AE0 0024DBC0  57 DE F8 7F */	srwi. r30, r30, 1
/* 80250AE4 0024DBC4  41 82 00 38 */	beq .L_80250B1C
/* 80250AE8 0024DBC8  7C 7D 2A 14 */	add r3, r29, r5
/* 80250AEC 0024DBCC  7C 03 42 14 */	add r0, r3, r8
/* 80250AF0 0024DBD0  7C 0A 00 40 */	cmplw r10, r0
/* 80250AF4 0024DBD4  41 80 00 14 */	blt .L_80250B08
/* 80250AF8 0024DBD8  90 69 00 00 */	stw r3, 0x0(r9)
/* 80250AFC 0024DBDC  91 49 00 04 */	stw r10, 0x4(r9)
/* 80250B00 0024DBE0  93 C9 00 08 */	stw r30, 0x8(r9)
/* 80250B04 0024DBE4  39 29 00 0C */	addi r9, r9, 0xc
.L_80250B08:
/* 80250B08 0024DBE8  7F A5 E0 50 */	subf r29, r5, r28
/* 80250B0C 0024DBEC  7C 07 42 14 */	add r0, r7, r8
/* 80250B10 0024DBF0  7C 1D 00 40 */	cmplw r29, r0
/* 80250B14 0024DBF4  7C FC 3B 78 */	mr r28, r7
/* 80250B18 0024DBF8  40 80 FE A4 */	bge .L_802509BC
.L_80250B1C:
/* 80250B1C 0024DBFC  7C 09 20 40 */	cmplw r9, r4
/* 80250B20 0024DC00  40 82 FE 8C */	bne .L_802509AC
/* 80250B24 0024DC04  83 E1 01 9C */	lwz r31, 0x19c(r1)
/* 80250B28 0024DC08  83 C1 01 98 */	lwz r30, 0x198(r1)
/* 80250B2C 0024DC0C  83 A1 01 94 */	lwz r29, 0x194(r1)
/* 80250B30 0024DC10  83 81 01 90 */	lwz r28, 0x190(r1)
/* 80250B34 0024DC14  38 21 01 A0 */	addi r1, r1, 0x1a0
/* 80250B38 0024DC18  4E 80 00 20 */	blr
.endfn _repartition

.fn _rx_rxRadixExchangeSort, global
/* 80250B3C 0024DC1C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80250B40 0024DC20  7C 08 02 A6 */	mflr r0
/* 80250B44 0024DC24  90 01 00 24 */	stw r0, 0x24(r1)
/* 80250B48 0024DC28  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80250B4C 0024DC2C  7C DF 33 78 */	mr r31, r6
/* 80250B50 0024DC30  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80250B54 0024DC34  7C BE 2B 78 */	mr r30, r5
/* 80250B58 0024DC38  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80250B5C 0024DC3C  7C 9D 23 78 */	mr r29, r4
/* 80250B60 0024DC40  93 81 00 10 */	stw r28, 0x10(r1)
/* 80250B64 0024DC44  7C 7C 1B 79 */	mr. r28, r3
/* 80250B68 0024DC48  41 82 02 AC */	beq .L_80250E14
/* 80250B6C 0024DC4C  38 1F 00 04 */	addi r0, r31, 0x4
/* 80250B70 0024DC50  7C 00 F0 40 */	cmplw r0, r30
/* 80250B74 0024DC54  41 81 02 A0 */	bgt .L_80250E14
/* 80250B78 0024DC58  7C 07 40 40 */	cmplw r7, r8
/* 80250B7C 0024DC5C  40 80 02 98 */	bge .L_80250E14
/* 80250B80 0024DC60  28 1D 00 05 */	cmplwi r29, 0x5
/* 80250B84 0024DC64  40 81 00 4C */	ble .L_80250BD0
/* 80250B88 0024DC68  28 08 00 00 */	cmplwi r8, 0x0
/* 80250B8C 0024DC6C  41 82 00 1C */	beq .L_80250BA8
/* 80250B90 0024DC70  38 E0 00 00 */	li r7, 0x0
/* 80250B94 0024DC74  48 00 00 08 */	b .L_80250B9C
.L_80250B98:
/* 80250B98 0024DC78  38 E7 00 01 */	addi r7, r7, 0x1
.L_80250B9C:
/* 80250B9C 0024DC7C  55 08 F8 7F */	srwi. r8, r8, 1
/* 80250BA0 0024DC80  40 82 FF F8 */	bne .L_80250B98
/* 80250BA4 0024DC84  48 00 00 08 */	b .L_80250BAC
.L_80250BA8:
/* 80250BA8 0024DC88  38 E0 FF FF */	li r7, -0x1
.L_80250BAC:
/* 80250BAC 0024DC8C  38 7D FF FF */	addi r3, r29, -0x1
/* 80250BB0 0024DC90  38 00 00 01 */	li r0, 0x1
/* 80250BB4 0024DC94  7C 83 F1 D6 */	mullw r4, r3, r30
/* 80250BB8 0024DC98  7F 83 E3 78 */	mr r3, r28
/* 80250BBC 0024DC9C  7F C5 F3 78 */	mr r5, r30
/* 80250BC0 0024DCA0  7F E6 FB 78 */	mr r6, r31
/* 80250BC4 0024DCA4  7C 07 38 30 */	slw r7, r0, r7
/* 80250BC8 0024DCA8  7C 9C 22 14 */	add r4, r28, r4
/* 80250BCC 0024DCAC  4B FF FD B5 */	bl _repartition
.L_80250BD0:
/* 80250BD0 0024DCB0  28 1D 00 01 */	cmplwi r29, 0x1
/* 80250BD4 0024DCB4  40 81 02 40 */	ble .L_80250E14
/* 80250BD8 0024DCB8  38 1D FF FF */	addi r0, r29, -0x1
/* 80250BDC 0024DCBC  38 80 00 04 */	li r4, 0x4
/* 80250BE0 0024DCC0  28 00 00 04 */	cmplwi r0, 0x4
/* 80250BE4 0024DCC4  40 80 00 08 */	bge .L_80250BEC
/* 80250BE8 0024DCC8  7C 04 03 78 */	mr r4, r0
.L_80250BEC:
/* 80250BEC 0024DCCC  7C 04 F1 D6 */	mullw r0, r4, r30
/* 80250BF0 0024DCD0  7C 86 23 78 */	mr r6, r4
/* 80250BF4 0024DCD4  38 84 FF FF */	addi r4, r4, -0x1
/* 80250BF8 0024DCD8  7C 00 FA 14 */	add r0, r0, r31
/* 80250BFC 0024DCDC  7C 64 F1 D6 */	mullw r3, r4, r30
/* 80250C00 0024DCE0  7C BC 00 2E */	lwzx r5, r28, r0
.L_80250C04:
/* 80250C04 0024DCE4  7C 03 FA 14 */	add r0, r3, r31
/* 80250C08 0024DCE8  7C 1C 00 2E */	lwzx r0, r28, r0
/* 80250C0C 0024DCEC  7C 00 28 40 */	cmplw r0, r5
/* 80250C10 0024DCF0  40 80 00 0C */	bge .L_80250C1C
/* 80250C14 0024DCF4  7C 05 03 78 */	mr r5, r0
/* 80250C18 0024DCF8  7C 86 23 78 */	mr r6, r4
.L_80250C1C:
/* 80250C1C 0024DCFC  28 04 00 00 */	cmplwi r4, 0x0
/* 80250C20 0024DD00  7C 7E 18 50 */	subf r3, r30, r3
/* 80250C24 0024DD04  38 84 FF FF */	addi r4, r4, -0x1
/* 80250C28 0024DD08  40 82 FF DC */	bne .L_80250C04
/* 80250C2C 0024DD0C  28 06 00 00 */	cmplwi r6, 0x0
/* 80250C30 0024DD10  41 82 00 DC */	beq .L_80250D0C
/* 80250C34 0024DD14  7C 06 F1 D6 */	mullw r0, r6, r30
/* 80250C38 0024DD18  28 1E 00 04 */	cmplwi r30, 0x4
/* 80250C3C 0024DD1C  7F 84 E3 78 */	mr r4, r28
/* 80250C40 0024DD20  57 C3 F0 BE */	srwi r3, r30, 2
/* 80250C44 0024DD24  7C BC 02 14 */	add r5, r28, r0
/* 80250C48 0024DD28  41 80 00 C4 */	blt .L_80250D0C
/* 80250C4C 0024DD2C  54 60 E8 FF */	srwi. r0, r3, 3
/* 80250C50 0024DD30  7C 09 03 A6 */	mtctr r0
/* 80250C54 0024DD34  41 82 00 98 */	beq .L_80250CEC
.L_80250C58:
/* 80250C58 0024DD38  80 C5 00 00 */	lwz r6, 0x0(r5)
/* 80250C5C 0024DD3C  80 04 00 00 */	lwz r0, 0x0(r4)
/* 80250C60 0024DD40  90 05 00 00 */	stw r0, 0x0(r5)
/* 80250C64 0024DD44  90 C4 00 00 */	stw r6, 0x0(r4)
/* 80250C68 0024DD48  80 C5 00 04 */	lwz r6, 0x4(r5)
/* 80250C6C 0024DD4C  80 04 00 04 */	lwz r0, 0x4(r4)
/* 80250C70 0024DD50  90 05 00 04 */	stw r0, 0x4(r5)
/* 80250C74 0024DD54  90 C4 00 04 */	stw r6, 0x4(r4)
/* 80250C78 0024DD58  80 C5 00 08 */	lwz r6, 0x8(r5)
/* 80250C7C 0024DD5C  80 04 00 08 */	lwz r0, 0x8(r4)
/* 80250C80 0024DD60  90 05 00 08 */	stw r0, 0x8(r5)
/* 80250C84 0024DD64  90 C4 00 08 */	stw r6, 0x8(r4)
/* 80250C88 0024DD68  80 C5 00 0C */	lwz r6, 0xc(r5)
/* 80250C8C 0024DD6C  80 04 00 0C */	lwz r0, 0xc(r4)
/* 80250C90 0024DD70  90 05 00 0C */	stw r0, 0xc(r5)
/* 80250C94 0024DD74  90 C4 00 0C */	stw r6, 0xc(r4)
/* 80250C98 0024DD78  80 C5 00 10 */	lwz r6, 0x10(r5)
/* 80250C9C 0024DD7C  80 04 00 10 */	lwz r0, 0x10(r4)
/* 80250CA0 0024DD80  90 05 00 10 */	stw r0, 0x10(r5)
/* 80250CA4 0024DD84  90 C4 00 10 */	stw r6, 0x10(r4)
/* 80250CA8 0024DD88  80 C5 00 14 */	lwz r6, 0x14(r5)
/* 80250CAC 0024DD8C  80 04 00 14 */	lwz r0, 0x14(r4)
/* 80250CB0 0024DD90  90 05 00 14 */	stw r0, 0x14(r5)
/* 80250CB4 0024DD94  90 C4 00 14 */	stw r6, 0x14(r4)
/* 80250CB8 0024DD98  80 C5 00 18 */	lwz r6, 0x18(r5)
/* 80250CBC 0024DD9C  80 04 00 18 */	lwz r0, 0x18(r4)
/* 80250CC0 0024DDA0  90 05 00 18 */	stw r0, 0x18(r5)
/* 80250CC4 0024DDA4  90 C4 00 18 */	stw r6, 0x18(r4)
/* 80250CC8 0024DDA8  80 C5 00 1C */	lwz r6, 0x1c(r5)
/* 80250CCC 0024DDAC  80 04 00 1C */	lwz r0, 0x1c(r4)
/* 80250CD0 0024DDB0  90 05 00 1C */	stw r0, 0x1c(r5)
/* 80250CD4 0024DDB4  38 A5 00 20 */	addi r5, r5, 0x20
/* 80250CD8 0024DDB8  90 C4 00 1C */	stw r6, 0x1c(r4)
/* 80250CDC 0024DDBC  38 84 00 20 */	addi r4, r4, 0x20
/* 80250CE0 0024DDC0  42 00 FF 78 */	bdnz .L_80250C58
/* 80250CE4 0024DDC4  70 63 00 07 */	andi. r3, r3, 0x7
/* 80250CE8 0024DDC8  41 82 00 24 */	beq .L_80250D0C
.L_80250CEC:
/* 80250CEC 0024DDCC  7C 69 03 A6 */	mtctr r3
.L_80250CF0:
/* 80250CF0 0024DDD0  80 C5 00 00 */	lwz r6, 0x0(r5)
/* 80250CF4 0024DDD4  80 04 00 00 */	lwz r0, 0x0(r4)
/* 80250CF8 0024DDD8  90 05 00 00 */	stw r0, 0x0(r5)
/* 80250CFC 0024DDDC  38 A5 00 04 */	addi r5, r5, 0x4
/* 80250D00 0024DDE0  90 C4 00 00 */	stw r6, 0x0(r4)
/* 80250D04 0024DDE4  38 84 00 04 */	addi r4, r4, 0x4
/* 80250D08 0024DDE8  42 00 FF E8 */	bdnz .L_80250CF0
.L_80250D0C:
/* 80250D0C 0024DDEC  7F AA EB 78 */	mr r10, r29
/* 80250D10 0024DDF0  7F 89 E3 78 */	mr r9, r28
/* 80250D14 0024DDF4  48 00 00 F4 */	b .L_80250E08
.L_80250D18:
/* 80250D18 0024DDF8  7D 09 F8 2E */	lwzx r8, r9, r31
/* 80250D1C 0024DDFC  7D 27 4B 78 */	mr r7, r9
/* 80250D20 0024DE00  48 00 00 D8 */	b .L_80250DF8
.L_80250D24:
/* 80250D24 0024DE04  28 1E 00 04 */	cmplwi r30, 0x4
/* 80250D28 0024DE08  7C E6 3B 78 */	mr r6, r7
/* 80250D2C 0024DE0C  7C A7 F2 14 */	add r5, r7, r30
/* 80250D30 0024DE10  57 C3 F0 BE */	srwi r3, r30, 2
/* 80250D34 0024DE14  41 80 00 C4 */	blt .L_80250DF8
/* 80250D38 0024DE18  54 60 E8 FF */	srwi. r0, r3, 3
/* 80250D3C 0024DE1C  7C 09 03 A6 */	mtctr r0
/* 80250D40 0024DE20  41 82 00 98 */	beq .L_80250DD8
.L_80250D44:
/* 80250D44 0024DE24  80 85 00 00 */	lwz r4, 0x0(r5)
/* 80250D48 0024DE28  80 06 00 00 */	lwz r0, 0x0(r6)
/* 80250D4C 0024DE2C  90 05 00 00 */	stw r0, 0x0(r5)
/* 80250D50 0024DE30  90 86 00 00 */	stw r4, 0x0(r6)
/* 80250D54 0024DE34  80 85 00 04 */	lwz r4, 0x4(r5)
/* 80250D58 0024DE38  80 06 00 04 */	lwz r0, 0x4(r6)
/* 80250D5C 0024DE3C  90 05 00 04 */	stw r0, 0x4(r5)
/* 80250D60 0024DE40  90 86 00 04 */	stw r4, 0x4(r6)
/* 80250D64 0024DE44  80 85 00 08 */	lwz r4, 0x8(r5)
/* 80250D68 0024DE48  80 06 00 08 */	lwz r0, 0x8(r6)
/* 80250D6C 0024DE4C  90 05 00 08 */	stw r0, 0x8(r5)
/* 80250D70 0024DE50  90 86 00 08 */	stw r4, 0x8(r6)
/* 80250D74 0024DE54  80 85 00 0C */	lwz r4, 0xc(r5)
/* 80250D78 0024DE58  80 06 00 0C */	lwz r0, 0xc(r6)
/* 80250D7C 0024DE5C  90 05 00 0C */	stw r0, 0xc(r5)
/* 80250D80 0024DE60  90 86 00 0C */	stw r4, 0xc(r6)
/* 80250D84 0024DE64  80 85 00 10 */	lwz r4, 0x10(r5)
/* 80250D88 0024DE68  80 06 00 10 */	lwz r0, 0x10(r6)
/* 80250D8C 0024DE6C  90 05 00 10 */	stw r0, 0x10(r5)
/* 80250D90 0024DE70  90 86 00 10 */	stw r4, 0x10(r6)
/* 80250D94 0024DE74  80 85 00 14 */	lwz r4, 0x14(r5)
/* 80250D98 0024DE78  80 06 00 14 */	lwz r0, 0x14(r6)
/* 80250D9C 0024DE7C  90 05 00 14 */	stw r0, 0x14(r5)
/* 80250DA0 0024DE80  90 86 00 14 */	stw r4, 0x14(r6)
/* 80250DA4 0024DE84  80 85 00 18 */	lwz r4, 0x18(r5)
/* 80250DA8 0024DE88  80 06 00 18 */	lwz r0, 0x18(r6)
/* 80250DAC 0024DE8C  90 05 00 18 */	stw r0, 0x18(r5)
/* 80250DB0 0024DE90  90 86 00 18 */	stw r4, 0x18(r6)
/* 80250DB4 0024DE94  80 85 00 1C */	lwz r4, 0x1c(r5)
/* 80250DB8 0024DE98  80 06 00 1C */	lwz r0, 0x1c(r6)
/* 80250DBC 0024DE9C  90 05 00 1C */	stw r0, 0x1c(r5)
/* 80250DC0 0024DEA0  38 A5 00 20 */	addi r5, r5, 0x20
/* 80250DC4 0024DEA4  90 86 00 1C */	stw r4, 0x1c(r6)
/* 80250DC8 0024DEA8  38 C6 00 20 */	addi r6, r6, 0x20
/* 80250DCC 0024DEAC  42 00 FF 78 */	bdnz .L_80250D44
/* 80250DD0 0024DEB0  70 63 00 07 */	andi. r3, r3, 0x7
/* 80250DD4 0024DEB4  41 82 00 24 */	beq .L_80250DF8
.L_80250DD8:
/* 80250DD8 0024DEB8  7C 69 03 A6 */	mtctr r3
.L_80250DDC:
/* 80250DDC 0024DEBC  80 85 00 00 */	lwz r4, 0x0(r5)
/* 80250DE0 0024DEC0  80 06 00 00 */	lwz r0, 0x0(r6)
/* 80250DE4 0024DEC4  90 05 00 00 */	stw r0, 0x0(r5)
/* 80250DE8 0024DEC8  38 A5 00 04 */	addi r5, r5, 0x4
/* 80250DEC 0024DECC  90 86 00 00 */	stw r4, 0x0(r6)
/* 80250DF0 0024DED0  38 C6 00 04 */	addi r6, r6, 0x4
/* 80250DF4 0024DED4  42 00 FF E8 */	bdnz .L_80250DDC
.L_80250DF8:
/* 80250DF8 0024DED8  7C FE 38 50 */	subf r7, r30, r7
/* 80250DFC 0024DEDC  7C 07 F8 2E */	lwzx r0, r7, r31
/* 80250E00 0024DEE0  7C 00 40 40 */	cmplw r0, r8
/* 80250E04 0024DEE4  41 81 FF 20 */	bgt .L_80250D24
.L_80250E08:
/* 80250E08 0024DEE8  35 4A FF FF */	addic. r10, r10, -0x1
/* 80250E0C 0024DEEC  7D 29 F2 14 */	add r9, r9, r30
/* 80250E10 0024DEF0  40 82 FF 08 */	bne .L_80250D18
.L_80250E14:
/* 80250E14 0024DEF4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80250E18 0024DEF8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80250E1C 0024DEFC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80250E20 0024DF00  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80250E24 0024DF04  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80250E28 0024DF08  7C 08 03 A6 */	mtlr r0
/* 80250E2C 0024DF0C  38 21 00 20 */	addi r1, r1, 0x20
/* 80250E30 0024DF10  4E 80 00 20 */	blr
.endfn _rx_rxRadixExchangeSort