.include "macros.inc"

.if 0

.section .text  # 0x80124AE4 - 0x801251BC

.global NPCS_Startup__Fv
NPCS_Startup__Fv:
/* 80124AE4 001218E4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80124AE8 001218E8  7C 08 02 A6 */	mflr r0
/* 80124AEC 001218EC  3C 80 80 2A */	lis r4, lbl_80298330@ha
/* 80124AF0 001218F0  3C 60 80 31 */	lis r3, lbl_80314C50@ha
/* 80124AF4 001218F4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80124AF8 001218F8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80124AFC 001218FC  3B E4 83 30 */	addi r31, r4, lbl_80298330@l
/* 80124B00 00121900  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80124B04 00121904  3B C3 4C 50 */	addi r30, r3, lbl_80314C50@l
/* 80124B08 00121908  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80124B0C 0012190C  3B A0 00 00 */	li r29, 0
lbl_80124B10:
/* 80124B10 00121910  80 7F 00 00 */	lwz r3, 0(r31)
/* 80124B14 00121914  4B F2 77 01 */	bl xStrHash__FPCc
/* 80124B18 00121918  3B BD 00 01 */	addi r29, r29, 1
/* 80124B1C 0012191C  90 7E 00 00 */	stw r3, 0(r30)
/* 80124B20 00121920  2C 1D 00 1A */	cmpwi r29, 0x1a
/* 80124B24 00121924  3B FF 00 04 */	addi r31, r31, 4
/* 80124B28 00121928  3B DE 00 04 */	addi r30, r30, 4
/* 80124B2C 0012192C  41 80 FF E4 */	blt lbl_80124B10
/* 80124B30 00121930  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80124B34 00121934  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80124B38 00121938  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80124B3C 0012193C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80124B40 00121940  7C 08 03 A6 */	mtlr r0
/* 80124B44 00121944  38 21 00 20 */	addi r1, r1, 0x20
/* 80124B48 00121948  4E 80 00 20 */	blr 

.global NPCS_SndTimersUpdate__Ff
NPCS_SndTimersUpdate__Ff:
/* 80124B50 00121950  3C 60 80 2A */	lis r3, lbl_802982C8@ha
/* 80124B54 00121954  38 00 00 0D */	li r0, 0xd
/* 80124B58 00121958  38 63 82 C8 */	addi r3, r3, lbl_802982C8@l
/* 80124B5C 0012195C  38 80 00 00 */	li r4, 0
/* 80124B60 00121960  7C 09 03 A6 */	mtctr r0
lbl_80124B64:
/* 80124B64 00121964  C0 03 00 00 */	lfs f0, 0(r3)
/* 80124B68 00121968  C0 42 A0 F8 */	lfs f2, lbl_803CEA78-_SDA2_BASE_(r2)
/* 80124B6C 0012196C  EC 00 08 28 */	fsubs f0, f0, f1
/* 80124B70 00121970  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80124B74 00121974  40 81 00 08 */	ble lbl_80124B7C
/* 80124B78 00121978  48 00 00 08 */	b lbl_80124B80
lbl_80124B7C:
/* 80124B7C 0012197C  FC 40 00 90 */	fmr f2, f0
lbl_80124B80:
/* 80124B80 00121980  D0 43 00 00 */	stfs f2, 0(r3)
/* 80124B84 00121984  C4 03 00 04 */	lfsu f0, 4(r3)
/* 80124B88 00121988  C0 42 A0 F8 */	lfs f2, lbl_803CEA78-_SDA2_BASE_(r2)
/* 80124B8C 0012198C  EC 00 08 28 */	fsubs f0, f0, f1
/* 80124B90 00121990  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80124B94 00121994  40 81 00 08 */	ble lbl_80124B9C
/* 80124B98 00121998  48 00 00 08 */	b lbl_80124BA0
lbl_80124B9C:
/* 80124B9C 0012199C  FC 40 00 90 */	fmr f2, f0
lbl_80124BA0:
/* 80124BA0 001219A0  D0 43 00 00 */	stfs f2, 0(r3)
/* 80124BA4 001219A4  38 63 00 04 */	addi r3, r3, 4
/* 80124BA8 001219A8  38 84 00 01 */	addi r4, r4, 1
/* 80124BAC 001219AC  42 00 FF B8 */	bdnz lbl_80124B64
/* 80124BB0 001219B0  4E 80 00 20 */	blr 

.global NPCS_SndTimersReset__Fv
NPCS_SndTimersReset__Fv:
/* 80124BB4 001219B4  3C 60 80 2A */	lis r3, lbl_802982C8@ha
/* 80124BB8 001219B8  C0 02 A0 F8 */	lfs f0, lbl_803CEA78-_SDA2_BASE_(r2)
/* 80124BBC 001219BC  38 83 82 C8 */	addi r4, r3, lbl_802982C8@l
/* 80124BC0 001219C0  38 C0 00 18 */	li r6, 0x18
/* 80124BC4 001219C4  D0 04 00 00 */	stfs f0, 0(r4)
/* 80124BC8 001219C8  54 C3 10 3A */	slwi r3, r6, 2
/* 80124BCC 001219CC  38 A4 00 20 */	addi r5, r4, 0x20
/* 80124BD0 001219D0  20 06 00 1A */	subfic r0, r6, 0x1a
/* 80124BD4 001219D4  C0 02 A0 F8 */	lfs f0, lbl_803CEA78-_SDA2_BASE_(r2)
/* 80124BD8 001219D8  7C 64 1A 14 */	add r3, r4, r3
/* 80124BDC 001219DC  D0 04 00 04 */	stfs f0, 4(r4)
/* 80124BE0 001219E0  C0 02 A0 F8 */	lfs f0, lbl_803CEA78-_SDA2_BASE_(r2)
/* 80124BE4 001219E4  D0 04 00 08 */	stfs f0, 8(r4)
/* 80124BE8 001219E8  C0 02 A0 F8 */	lfs f0, lbl_803CEA78-_SDA2_BASE_(r2)
/* 80124BEC 001219EC  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 80124BF0 001219F0  C0 02 A0 F8 */	lfs f0, lbl_803CEA78-_SDA2_BASE_(r2)
/* 80124BF4 001219F4  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 80124BF8 001219F8  C0 02 A0 F8 */	lfs f0, lbl_803CEA78-_SDA2_BASE_(r2)
/* 80124BFC 001219FC  D0 04 00 14 */	stfs f0, 0x14(r4)
/* 80124C00 00121A00  C0 02 A0 F8 */	lfs f0, lbl_803CEA78-_SDA2_BASE_(r2)
/* 80124C04 00121A04  D0 04 00 18 */	stfs f0, 0x18(r4)
/* 80124C08 00121A08  C0 02 A0 F8 */	lfs f0, lbl_803CEA78-_SDA2_BASE_(r2)
/* 80124C0C 00121A0C  D0 04 00 1C */	stfs f0, 0x1c(r4)
/* 80124C10 00121A10  C0 02 A0 F8 */	lfs f0, lbl_803CEA78-_SDA2_BASE_(r2)
/* 80124C14 00121A14  D0 04 00 20 */	stfs f0, 0x20(r4)
/* 80124C18 00121A18  C0 02 A0 F8 */	lfs f0, lbl_803CEA78-_SDA2_BASE_(r2)
/* 80124C1C 00121A1C  D0 04 00 24 */	stfs f0, 0x24(r4)
/* 80124C20 00121A20  C0 02 A0 F8 */	lfs f0, lbl_803CEA78-_SDA2_BASE_(r2)
/* 80124C24 00121A24  D0 04 00 28 */	stfs f0, 0x28(r4)
/* 80124C28 00121A28  C0 02 A0 F8 */	lfs f0, lbl_803CEA78-_SDA2_BASE_(r2)
/* 80124C2C 00121A2C  D0 04 00 2C */	stfs f0, 0x2c(r4)
/* 80124C30 00121A30  C0 02 A0 F8 */	lfs f0, lbl_803CEA78-_SDA2_BASE_(r2)
/* 80124C34 00121A34  D0 04 00 30 */	stfs f0, 0x30(r4)
/* 80124C38 00121A38  C0 02 A0 F8 */	lfs f0, lbl_803CEA78-_SDA2_BASE_(r2)
/* 80124C3C 00121A3C  D0 04 00 34 */	stfs f0, 0x34(r4)
/* 80124C40 00121A40  C0 02 A0 F8 */	lfs f0, lbl_803CEA78-_SDA2_BASE_(r2)
/* 80124C44 00121A44  D0 04 00 38 */	stfs f0, 0x38(r4)
/* 80124C48 00121A48  C0 02 A0 F8 */	lfs f0, lbl_803CEA78-_SDA2_BASE_(r2)
/* 80124C4C 00121A4C  D0 04 00 3C */	stfs f0, 0x3c(r4)
/* 80124C50 00121A50  C0 02 A0 F8 */	lfs f0, lbl_803CEA78-_SDA2_BASE_(r2)
/* 80124C54 00121A54  D4 05 00 20 */	stfsu f0, 0x20(r5)
/* 80124C58 00121A58  C0 02 A0 F8 */	lfs f0, lbl_803CEA78-_SDA2_BASE_(r2)
/* 80124C5C 00121A5C  D0 04 00 44 */	stfs f0, 0x44(r4)
/* 80124C60 00121A60  C0 02 A0 F8 */	lfs f0, lbl_803CEA78-_SDA2_BASE_(r2)
/* 80124C64 00121A64  D0 05 00 08 */	stfs f0, 8(r5)
/* 80124C68 00121A68  C0 02 A0 F8 */	lfs f0, lbl_803CEA78-_SDA2_BASE_(r2)
/* 80124C6C 00121A6C  D0 05 00 0C */	stfs f0, 0xc(r5)
/* 80124C70 00121A70  C0 02 A0 F8 */	lfs f0, lbl_803CEA78-_SDA2_BASE_(r2)
/* 80124C74 00121A74  D0 05 00 10 */	stfs f0, 0x10(r5)
/* 80124C78 00121A78  C0 02 A0 F8 */	lfs f0, lbl_803CEA78-_SDA2_BASE_(r2)
/* 80124C7C 00121A7C  D0 05 00 14 */	stfs f0, 0x14(r5)
/* 80124C80 00121A80  C0 02 A0 F8 */	lfs f0, lbl_803CEA78-_SDA2_BASE_(r2)
/* 80124C84 00121A84  D0 05 00 18 */	stfs f0, 0x18(r5)
/* 80124C88 00121A88  C0 02 A0 F8 */	lfs f0, lbl_803CEA78-_SDA2_BASE_(r2)
/* 80124C8C 00121A8C  D0 05 00 1C */	stfs f0, 0x1c(r5)
/* 80124C90 00121A90  7C 09 03 A6 */	mtctr r0
/* 80124C94 00121A94  2C 06 00 1A */	cmpwi r6, 0x1a
/* 80124C98 00121A98  4C 80 00 20 */	bgelr 
lbl_80124C9C:
/* 80124C9C 00121A9C  C0 02 A0 F8 */	lfs f0, lbl_803CEA78-_SDA2_BASE_(r2)
/* 80124CA0 00121AA0  D0 03 00 00 */	stfs f0, 0(r3)
/* 80124CA4 00121AA4  38 63 00 04 */	addi r3, r3, 4
/* 80124CA8 00121AA8  42 00 FF F4 */	bdnz lbl_80124C9C
/* 80124CAC 00121AAC  4E 80 00 20 */	blr 

.global NPCS_SndTypePlayed__F12en_NPC_SOUNDf
NPCS_SndTypePlayed__F12en_NPC_SOUNDf:
/* 80124CB0 00121AB0  2C 03 00 15 */	cmpwi r3, 0x15
/* 80124CB4 00121AB4  41 82 00 1C */	beq lbl_80124CD0
/* 80124CB8 00121AB8  40 80 00 20 */	bge lbl_80124CD8
/* 80124CBC 00121ABC  2C 03 00 14 */	cmpwi r3, 0x14
/* 80124CC0 00121AC0  40 80 00 08 */	bge lbl_80124CC8
/* 80124CC4 00121AC4  48 00 00 14 */	b lbl_80124CD8
lbl_80124CC8:
/* 80124CC8 00121AC8  C0 42 A0 FC */	lfs f2, lbl_803CEA7C-_SDA2_BASE_(r2)
/* 80124CCC 00121ACC  48 00 00 10 */	b lbl_80124CDC
lbl_80124CD0:
/* 80124CD0 00121AD0  C0 42 A1 00 */	lfs f2, lbl_803CEA80-_SDA2_BASE_(r2)
/* 80124CD4 00121AD4  48 00 00 08 */	b lbl_80124CDC
lbl_80124CD8:
/* 80124CD8 00121AD8  C0 42 A0 F8 */	lfs f2, lbl_803CEA78-_SDA2_BASE_(r2)
lbl_80124CDC:
/* 80124CDC 00121ADC  C0 02 A1 04 */	lfs f0, lbl_803CEA84-_SDA2_BASE_(r2)
/* 80124CE0 00121AE0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80124CE4 00121AE4  40 81 00 08 */	ble lbl_80124CEC
/* 80124CE8 00121AE8  FC 40 08 90 */	fmr f2, f1
lbl_80124CEC:
/* 80124CEC 00121AEC  3C 80 80 2A */	lis r4, lbl_802982C8@ha
/* 80124CF0 00121AF0  54 60 10 3A */	slwi r0, r3, 2
/* 80124CF4 00121AF4  38 64 82 C8 */	addi r3, r4, lbl_802982C8@l
/* 80124CF8 00121AF8  7C 43 05 2E */	stfsx f2, r3, r0
/* 80124CFC 00121AFC  4E 80 00 20 */	blr 

.global NPCS_SndOkToPlay__F12en_NPC_SOUND
NPCS_SndOkToPlay__F12en_NPC_SOUND:
/* 80124D00 00121B00  2C 03 FF FE */	cmpwi r3, -2
/* 80124D04 00121B04  40 82 00 0C */	bne lbl_80124D10
/* 80124D08 00121B08  38 60 00 01 */	li r3, 1
/* 80124D0C 00121B0C  4E 80 00 20 */	blr 
lbl_80124D10:
/* 80124D10 00121B10  2C 03 00 00 */	cmpwi r3, 0
/* 80124D14 00121B14  40 82 00 0C */	bne lbl_80124D20
/* 80124D18 00121B18  38 60 00 00 */	li r3, 0
/* 80124D1C 00121B1C  4E 80 00 20 */	blr 
lbl_80124D20:
/* 80124D20 00121B20  3C 80 80 2A */	lis r4, lbl_802982C8@ha
/* 80124D24 00121B24  54 60 10 3A */	slwi r0, r3, 2
/* 80124D28 00121B28  38 64 82 C8 */	addi r3, r4, lbl_802982C8@l
/* 80124D2C 00121B2C  C0 02 A1 04 */	lfs f0, lbl_803CEA84-_SDA2_BASE_(r2)
/* 80124D30 00121B30  7C 23 04 2E */	lfsx f1, r3, r0
/* 80124D34 00121B34  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80124D38 00121B38  7C 00 00 26 */	mfcr r0
/* 80124D3C 00121B3C  54 03 0F FE */	srwi r3, r0, 0x1f
/* 80124D40 00121B40  4E 80 00 20 */	blr 

.global NPCS_SndTablePrepare__FP10NPCSndTrax
NPCS_SndTablePrepare__FP10NPCSndTrax:
/* 80124D44 00121B44  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80124D48 00121B48  7C 08 02 A6 */	mflr r0
/* 80124D4C 00121B4C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80124D50 00121B50  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80124D54 00121B54  3B E0 00 00 */	li r31, 0
/* 80124D58 00121B58  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80124D5C 00121B5C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80124D60 00121B60  7C 7D 1B 78 */	mr r29, r3
/* 80124D64 00121B64  48 00 00 30 */	b lbl_80124D94
lbl_80124D68:
/* 80124D68 00121B68  80 7D 00 04 */	lwz r3, 4(r29)
/* 80124D6C 00121B6C  4B F2 74 A9 */	bl xStrHash__FPCc
/* 80124D70 00121B70  7C 7E 1B 79 */	or. r30, r3, r3
/* 80124D74 00121B74  41 82 00 18 */	beq lbl_80124D8C
/* 80124D78 00121B78  4B FA BC CD */	bl iSndLookup__FUi
/* 80124D7C 00121B7C  28 03 00 00 */	cmplwi r3, 0
/* 80124D80 00121B80  41 82 00 0C */	beq lbl_80124D8C
/* 80124D84 00121B84  93 DD 00 08 */	stw r30, 8(r29)
/* 80124D88 00121B88  48 00 00 08 */	b lbl_80124D90
lbl_80124D8C:
/* 80124D8C 00121B8C  93 FD 00 08 */	stw r31, 8(r29)
lbl_80124D90:
/* 80124D90 00121B90  3B BD 00 0C */	addi r29, r29, 0xc
lbl_80124D94:
/* 80124D94 00121B94  80 1D 00 00 */	lwz r0, 0(r29)
/* 80124D98 00121B98  2C 00 00 00 */	cmpwi r0, 0
/* 80124D9C 00121B9C  40 82 FF CC */	bne lbl_80124D68
/* 80124DA0 00121BA0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80124DA4 00121BA4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80124DA8 00121BA8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80124DAC 00121BAC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80124DB0 00121BB0  7C 08 03 A6 */	mtlr r0
/* 80124DB4 00121BB4  38 21 00 20 */	addi r1, r1, 0x20
/* 80124DB8 00121BB8  4E 80 00 20 */	blr 

.global NPCS_SndFindProps__F12en_NPC_SOUND
NPCS_SndFindProps__F12en_NPC_SOUND:
/* 80124DBC 00121BBC  3C 80 80 2A */	lis r4, g_sndProps@ha
/* 80124DC0 00121BC0  38 04 83 98 */	addi r0, r4, g_sndProps@l
/* 80124DC4 00121BC4  7C 04 03 78 */	mr r4, r0
/* 80124DC8 00121BC8  48 00 00 10 */	b lbl_80124DD8
lbl_80124DCC:
/* 80124DCC 00121BCC  7C 00 18 00 */	cmpw r0, r3
/* 80124DD0 00121BD0  41 82 00 14 */	beq lbl_80124DE4
/* 80124DD4 00121BD4  38 84 00 0C */	addi r4, r4, 0xc
lbl_80124DD8:
/* 80124DD8 00121BD8  80 04 00 00 */	lwz r0, 0(r4)
/* 80124DDC 00121BDC  2C 00 00 00 */	cmpwi r0, 0
/* 80124DE0 00121BE0  40 82 FF EC */	bne lbl_80124DCC
lbl_80124DE4:
/* 80124DE4 00121BE4  7C 83 23 78 */	mr r3, r4
/* 80124DE8 00121BE8  4E 80 00 20 */	blr 

.global NPCS_SndTypeFromHash__FUiP10NPCSndTraxP10NPCSndTrax
NPCS_SndTypeFromHash__FUiP10NPCSndTraxP10NPCSndTrax:
/* 80124DEC 00121BEC  38 00 00 02 */	li r0, 2
/* 80124DF0 00121BF0  38 E0 FF FE */	li r7, -2
/* 80124DF4 00121BF4  39 00 00 00 */	li r8, 0
/* 80124DF8 00121BF8  7C 09 03 A6 */	mtctr r0
lbl_80124DFC:
/* 80124DFC 00121BFC  2C 08 00 00 */	cmpwi r8, 0
/* 80124E00 00121C00  40 82 00 0C */	bne lbl_80124E0C
/* 80124E04 00121C04  7C 86 23 78 */	mr r6, r4
/* 80124E08 00121C08  48 00 00 38 */	b lbl_80124E40
lbl_80124E0C:
/* 80124E0C 00121C0C  2C 08 00 01 */	cmpwi r8, 1
/* 80124E10 00121C10  40 82 00 0C */	bne lbl_80124E1C
/* 80124E14 00121C14  7C A6 2B 78 */	mr r6, r5
/* 80124E18 00121C18  48 00 00 28 */	b lbl_80124E40
lbl_80124E1C:
/* 80124E1C 00121C1C  2C 08 00 02 */	cmpwi r8, 2
/* 80124E20 00121C20  40 82 00 14 */	bne lbl_80124E34
/* 80124E24 00121C24  3C C0 80 2A */	lis r6, g_sndTrax_General@ha
/* 80124E28 00121C28  38 06 84 70 */	addi r0, r6, g_sndTrax_General@l
/* 80124E2C 00121C2C  7C 06 03 78 */	mr r6, r0
/* 80124E30 00121C30  48 00 00 10 */	b lbl_80124E40
lbl_80124E34:
/* 80124E34 00121C34  3C C0 80 2A */	lis r6, g_sndTrax_Universal@ha
/* 80124E38 00121C38  38 06 84 64 */	addi r0, r6, g_sndTrax_Universal@l
/* 80124E3C 00121C3C  7C 06 03 78 */	mr r6, r0
lbl_80124E40:
/* 80124E40 00121C40  28 06 00 00 */	cmplwi r6, 0
/* 80124E44 00121C44  41 82 00 2C */	beq lbl_80124E70
/* 80124E48 00121C48  48 00 00 1C */	b lbl_80124E64
lbl_80124E4C:
/* 80124E4C 00121C4C  80 06 00 08 */	lwz r0, 8(r6)
/* 80124E50 00121C50  7C 00 18 40 */	cmplw r0, r3
/* 80124E54 00121C54  40 82 00 0C */	bne lbl_80124E60
/* 80124E58 00121C58  80 E6 00 00 */	lwz r7, 0(r6)
/* 80124E5C 00121C5C  48 00 00 14 */	b lbl_80124E70
lbl_80124E60:
/* 80124E60 00121C60  38 C6 00 0C */	addi r6, r6, 0xc
lbl_80124E64:
/* 80124E64 00121C64  80 06 00 00 */	lwz r0, 0(r6)
/* 80124E68 00121C68  2C 00 00 00 */	cmpwi r0, 0
/* 80124E6C 00121C6C  40 82 FF E0 */	bne lbl_80124E4C
lbl_80124E70:
/* 80124E70 00121C70  35 08 00 01 */	addic. r8, r8, 1
/* 80124E74 00121C74  40 82 00 0C */	bne lbl_80124E80
/* 80124E78 00121C78  7C 86 23 78 */	mr r6, r4
/* 80124E7C 00121C7C  48 00 00 38 */	b lbl_80124EB4
lbl_80124E80:
/* 80124E80 00121C80  2C 08 00 01 */	cmpwi r8, 1
/* 80124E84 00121C84  40 82 00 0C */	bne lbl_80124E90
/* 80124E88 00121C88  7C A6 2B 78 */	mr r6, r5
/* 80124E8C 00121C8C  48 00 00 28 */	b lbl_80124EB4
lbl_80124E90:
/* 80124E90 00121C90  2C 08 00 02 */	cmpwi r8, 2
/* 80124E94 00121C94  40 82 00 14 */	bne lbl_80124EA8
/* 80124E98 00121C98  3C C0 80 2A */	lis r6, g_sndTrax_General@ha
/* 80124E9C 00121C9C  38 06 84 70 */	addi r0, r6, g_sndTrax_General@l
/* 80124EA0 00121CA0  7C 06 03 78 */	mr r6, r0
/* 80124EA4 00121CA4  48 00 00 10 */	b lbl_80124EB4
lbl_80124EA8:
/* 80124EA8 00121CA8  3C C0 80 2A */	lis r6, g_sndTrax_Universal@ha
/* 80124EAC 00121CAC  38 06 84 64 */	addi r0, r6, g_sndTrax_Universal@l
/* 80124EB0 00121CB0  7C 06 03 78 */	mr r6, r0
lbl_80124EB4:
/* 80124EB4 00121CB4  28 06 00 00 */	cmplwi r6, 0
/* 80124EB8 00121CB8  41 82 00 2C */	beq lbl_80124EE4
/* 80124EBC 00121CBC  48 00 00 1C */	b lbl_80124ED8
lbl_80124EC0:
/* 80124EC0 00121CC0  80 06 00 08 */	lwz r0, 8(r6)
/* 80124EC4 00121CC4  7C 00 18 40 */	cmplw r0, r3
/* 80124EC8 00121CC8  40 82 00 0C */	bne lbl_80124ED4
/* 80124ECC 00121CCC  80 E6 00 00 */	lwz r7, 0(r6)
/* 80124ED0 00121CD0  48 00 00 14 */	b lbl_80124EE4
lbl_80124ED4:
/* 80124ED4 00121CD4  38 C6 00 0C */	addi r6, r6, 0xc
lbl_80124ED8:
/* 80124ED8 00121CD8  80 06 00 00 */	lwz r0, 0(r6)
/* 80124EDC 00121CDC  2C 00 00 00 */	cmpwi r0, 0
/* 80124EE0 00121CE0  40 82 FF E0 */	bne lbl_80124EC0
lbl_80124EE4:
/* 80124EE4 00121CE4  39 08 00 01 */	addi r8, r8, 1
/* 80124EE8 00121CE8  42 00 FF 14 */	bdnz lbl_80124DFC
/* 80124EEC 00121CEC  7C E3 3B 78 */	mr r3, r7
/* 80124EF0 00121CF0  4E 80 00 20 */	blr 

.global NPCS_SndPickSimilar__F12en_NPC_SOUNDP10NPCSndTraxP10NPCSndTrax
NPCS_SndPickSimilar__F12en_NPC_SOUNDP10NPCSndTraxP10NPCSndTrax:
/* 80124EF4 00121CF4  94 21 FE F0 */	stwu r1, -0x110(r1)
/* 80124EF8 00121CF8  7C 08 02 A6 */	mflr r0
/* 80124EFC 00121CFC  3C E0 80 27 */	lis r7, lbl_8026BAE0@ha
/* 80124F00 00121D00  38 C0 00 10 */	li r6, 0x10
/* 80124F04 00121D04  90 01 01 14 */	stw r0, 0x114(r1)
/* 80124F08 00121D08  38 E7 BA E0 */	addi r7, r7, lbl_8026BAE0@l
/* 80124F0C 00121D0C  39 21 00 84 */	addi r9, r1, 0x84
/* 80124F10 00121D10  38 00 00 00 */	li r0, 0
/* 80124F14 00121D14  93 E1 01 0C */	stw r31, 0x10c(r1)
/* 80124F18 00121D18  39 07 FF FC */	addi r8, r7, -4
/* 80124F1C 00121D1C  93 C1 01 08 */	stw r30, 0x108(r1)
/* 80124F20 00121D20  7C C9 03 A6 */	mtctr r6
lbl_80124F24:
/* 80124F24 00121D24  80 E8 00 04 */	lwz r7, 4(r8)
/* 80124F28 00121D28  84 C8 00 08 */	lwzu r6, 8(r8)
/* 80124F2C 00121D2C  90 E9 00 04 */	stw r7, 4(r9)
/* 80124F30 00121D30  94 C9 00 08 */	stwu r6, 8(r9)
/* 80124F34 00121D34  42 00 FF F0 */	bdnz lbl_80124F24
/* 80124F38 00121D38  3C E0 80 27 */	lis r7, lbl_8026BB60@ha
/* 80124F3C 00121D3C  38 C0 00 10 */	li r6, 0x10
/* 80124F40 00121D40  38 E7 BB 60 */	addi r7, r7, lbl_8026BB60@l
/* 80124F44 00121D44  39 21 00 04 */	addi r9, r1, 4
/* 80124F48 00121D48  39 07 FF FC */	addi r8, r7, -4
/* 80124F4C 00121D4C  7C C9 03 A6 */	mtctr r6
lbl_80124F50:
/* 80124F50 00121D50  80 E8 00 04 */	lwz r7, 4(r8)
/* 80124F54 00121D54  84 C8 00 08 */	lwzu r6, 8(r8)
/* 80124F58 00121D58  90 E9 00 04 */	stw r7, 4(r9)
/* 80124F5C 00121D5C  94 C9 00 08 */	stwu r6, 8(r9)
/* 80124F60 00121D60  42 00 FF F0 */	bdnz lbl_80124F50
/* 80124F64 00121D64  38 C0 00 03 */	li r6, 3
/* 80124F68 00121D68  39 41 00 08 */	addi r10, r1, 8
/* 80124F6C 00121D6C  3B E0 00 00 */	li r31, 0
/* 80124F70 00121D70  38 E0 00 00 */	li r7, 0
/* 80124F74 00121D74  39 80 00 00 */	li r12, 0
/* 80124F78 00121D78  7C C9 03 A6 */	mtctr r6
lbl_80124F7C:
/* 80124F7C 00121D7C  2C 0C 00 00 */	cmpwi r12, 0
/* 80124F80 00121D80  40 82 00 10 */	bne lbl_80124F90
/* 80124F84 00121D84  C0 02 A1 00 */	lfs f0, lbl_803CEA80-_SDA2_BASE_(r2)
/* 80124F88 00121D88  7C 8B 23 78 */	mr r11, r4
/* 80124F8C 00121D8C  48 00 00 5C */	b lbl_80124FE8
lbl_80124F90:
/* 80124F90 00121D90  2C 0C 00 01 */	cmpwi r12, 1
/* 80124F94 00121D94  40 82 00 10 */	bne lbl_80124FA4
/* 80124F98 00121D98  C0 02 A1 08 */	lfs f0, lbl_803CEA88-_SDA2_BASE_(r2)
/* 80124F9C 00121D9C  7C AB 2B 78 */	mr r11, r5
/* 80124FA0 00121DA0  48 00 00 48 */	b lbl_80124FE8
lbl_80124FA4:
/* 80124FA4 00121DA4  2C 0C 00 02 */	cmpwi r12, 2
/* 80124FA8 00121DA8  40 82 00 24 */	bne lbl_80124FCC
/* 80124FAC 00121DAC  2C 1F 00 05 */	cmpwi r31, 5
/* 80124FB0 00121DB0  38 C0 00 00 */	li r6, 0
/* 80124FB4 00121DB4  40 80 00 0C */	bge lbl_80124FC0
/* 80124FB8 00121DB8  3C C0 80 2A */	lis r6, g_sndTrax_General@ha
/* 80124FBC 00121DBC  38 C6 84 70 */	addi r6, r6, g_sndTrax_General@l
lbl_80124FC0:
/* 80124FC0 00121DC0  C0 02 A1 0C */	lfs f0, lbl_803CEA8C-_SDA2_BASE_(r2)
/* 80124FC4 00121DC4  7C CB 33 78 */	mr r11, r6
/* 80124FC8 00121DC8  48 00 00 20 */	b lbl_80124FE8
lbl_80124FCC:
/* 80124FCC 00121DCC  2C 1F 00 05 */	cmpwi r31, 5
/* 80124FD0 00121DD0  38 C0 00 00 */	li r6, 0
/* 80124FD4 00121DD4  40 80 00 0C */	bge lbl_80124FE0
/* 80124FD8 00121DD8  3C C0 80 2A */	lis r6, g_sndTrax_Universal@ha
/* 80124FDC 00121DDC  38 C6 84 64 */	addi r6, r6, g_sndTrax_Universal@l
lbl_80124FE0:
/* 80124FE0 00121DE0  7C CB 33 78 */	mr r11, r6
/* 80124FE4 00121DE4  C0 02 A1 0C */	lfs f0, lbl_803CEA8C-_SDA2_BASE_(r2)
lbl_80124FE8:
/* 80124FE8 00121DE8  28 0B 00 00 */	cmplwi r11, 0
/* 80124FEC 00121DEC  41 82 00 6C */	beq lbl_80125058
/* 80124FF0 00121DF0  7D 49 53 78 */	mr r9, r10
/* 80124FF4 00121DF4  38 C1 00 88 */	addi r6, r1, 0x88
/* 80124FF8 00121DF8  3B C0 00 00 */	li r30, 0
/* 80124FFC 00121DFC  48 00 00 50 */	b lbl_8012504C
lbl_80125000:
/* 80125000 00121E00  7C 08 18 00 */	cmpw r8, r3
/* 80125004 00121E04  40 82 00 34 */	bne lbl_80125038
/* 80125008 00121E08  81 0B 00 08 */	lwz r8, 8(r11)
/* 8012500C 00121E0C  3B C0 00 01 */	li r30, 1
/* 80125010 00121E10  28 08 00 00 */	cmplwi r8, 0
/* 80125014 00121E14  41 82 00 2C */	beq lbl_80125040
/* 80125018 00121E18  D0 09 00 00 */	stfs f0, 0(r9)
/* 8012501C 00121E1C  39 4A 00 04 */	addi r10, r10, 4
/* 80125020 00121E20  39 29 00 04 */	addi r9, r9, 4
/* 80125024 00121E24  3B FF 00 01 */	addi r31, r31, 1
/* 80125028 00121E28  81 0B 00 08 */	lwz r8, 8(r11)
/* 8012502C 00121E2C  7D 06 39 2E */	stwx r8, r6, r7
/* 80125030 00121E30  38 E7 00 04 */	addi r7, r7, 4
/* 80125034 00121E34  48 00 00 0C */	b lbl_80125040
lbl_80125038:
/* 80125038 00121E38  2C 1E 00 00 */	cmpwi r30, 0
/* 8012503C 00121E3C  40 82 00 1C */	bne lbl_80125058
lbl_80125040:
/* 80125040 00121E40  2C 1F 00 20 */	cmpwi r31, 0x20
/* 80125044 00121E44  40 80 00 14 */	bge lbl_80125058
/* 80125048 00121E48  39 6B 00 0C */	addi r11, r11, 0xc
lbl_8012504C:
/* 8012504C 00121E4C  81 0B 00 00 */	lwz r8, 0(r11)
/* 80125050 00121E50  2C 08 00 00 */	cmpwi r8, 0
/* 80125054 00121E54  40 82 FF AC */	bne lbl_80125000
lbl_80125058:
/* 80125058 00121E58  39 8C 00 01 */	addi r12, r12, 1
/* 8012505C 00121E5C  42 00 FF 20 */	bdnz lbl_80124F7C
/* 80125060 00121E60  2C 1F 00 00 */	cmpwi r31, 0
/* 80125064 00121E64  40 81 00 28 */	ble lbl_8012508C
/* 80125068 00121E68  C0 22 A1 0C */	lfs f1, lbl_803CEA8C-_SDA2_BASE_(r2)
/* 8012506C 00121E6C  7F E4 FB 78 */	mr r4, r31
/* 80125070 00121E70  38 61 00 08 */	addi r3, r1, 8
/* 80125074 00121E74  4B F2 91 71 */	bl xUtil_wtadjust__FPfif
/* 80125078 00121E78  7F E4 FB 78 */	mr r4, r31
/* 8012507C 00121E7C  38 61 00 88 */	addi r3, r1, 0x88
/* 80125080 00121E80  38 A1 00 08 */	addi r5, r1, 8
/* 80125084 00121E84  48 00 00 25 */	bl xUtil_choose_esc__0_i_esc__1___FPCiiPCf
/* 80125088 00121E88  7C 60 1B 78 */	mr r0, r3
lbl_8012508C:
/* 8012508C 00121E8C  7C 03 03 78 */	mr r3, r0
/* 80125090 00121E90  80 01 01 14 */	lwz r0, 0x114(r1)
/* 80125094 00121E94  83 E1 01 0C */	lwz r31, 0x10c(r1)
/* 80125098 00121E98  83 C1 01 08 */	lwz r30, 0x108(r1)
/* 8012509C 00121E9C  7C 08 03 A6 */	mtlr r0
/* 801250A0 00121EA0  38 21 01 10 */	addi r1, r1, 0x110
/* 801250A4 00121EA4  4E 80 00 20 */	blr 

/* xUtil_choose<i>__FPCiiPCf */
xUtil_choose_esc__0_i_esc__1___FPCiiPCf:
/* 801250A8 00121EA8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801250AC 00121EAC  7C 08 02 A6 */	mflr r0
/* 801250B0 00121EB0  90 01 00 34 */	stw r0, 0x34(r1)
/* 801250B4 00121EB4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801250B8 00121EB8  93 C1 00 28 */	stw r30, 0x28(r1)
/* 801250BC 00121EBC  7C BE 2B 78 */	mr r30, r5
/* 801250C0 00121EC0  93 A1 00 24 */	stw r29, 0x24(r1)
/* 801250C4 00121EC4  7C 9D 23 78 */	mr r29, r4
/* 801250C8 00121EC8  93 81 00 20 */	stw r28, 0x20(r1)
/* 801250CC 00121ECC  7C 7C 1B 79 */	or. r28, r3, r3
/* 801250D0 00121ED0  40 82 00 0C */	bne lbl_801250DC
/* 801250D4 00121ED4  38 60 00 00 */	li r3, 0
/* 801250D8 00121ED8  48 00 00 C4 */	b lbl_8012519C
lbl_801250DC:
/* 801250DC 00121EDC  2C 1D 00 01 */	cmpwi r29, 1
/* 801250E0 00121EE0  40 80 00 0C */	bge lbl_801250EC
/* 801250E4 00121EE4  38 60 00 00 */	li r3, 0
/* 801250E8 00121EE8  48 00 00 B4 */	b lbl_8012519C
lbl_801250EC:
/* 801250EC 00121EEC  3B E0 00 00 */	li r31, 0
/* 801250F0 00121EF0  4B F0 BB 99 */	bl xurand__Fv
/* 801250F4 00121EF4  28 1E 00 00 */	cmplwi r30, 0
/* 801250F8 00121EF8  40 82 00 34 */	bne lbl_8012512C
/* 801250FC 00121EFC  6F A3 80 00 */	xoris r3, r29, 0x8000
/* 80125100 00121F00  3C 00 43 30 */	lis r0, 0x4330
/* 80125104 00121F04  90 61 00 0C */	stw r3, 0xc(r1)
/* 80125108 00121F08  C8 42 A1 10 */	lfd f2, lbl_803CEA90-_SDA2_BASE_(r2)
/* 8012510C 00121F0C  90 01 00 08 */	stw r0, 8(r1)
/* 80125110 00121F10  C8 01 00 08 */	lfd f0, 8(r1)
/* 80125114 00121F14  EC 00 10 28 */	fsubs f0, f0, f2
/* 80125118 00121F18  EC 01 00 32 */	fmuls f0, f1, f0
/* 8012511C 00121F1C  FC 00 00 1E */	fctiwz f0, f0
/* 80125120 00121F20  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80125124 00121F24  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 80125128 00121F28  48 00 00 54 */	b lbl_8012517C
lbl_8012512C:
/* 8012512C 00121F2C  7F C3 F3 78 */	mr r3, r30
/* 80125130 00121F30  C0 42 A1 04 */	lfs f2, lbl_803CEA84-_SDA2_BASE_(r2)
/* 80125134 00121F34  38 80 00 00 */	li r4, 0
/* 80125138 00121F38  7F A9 03 A6 */	mtctr r29
/* 8012513C 00121F3C  2C 1D 00 00 */	cmpwi r29, 0
/* 80125140 00121F40  40 81 00 3C */	ble lbl_8012517C
lbl_80125144:
/* 80125144 00121F44  FC 60 10 90 */	fmr f3, f2
/* 80125148 00121F48  C0 03 00 00 */	lfs f0, 0(r3)
/* 8012514C 00121F4C  EC 42 00 2A */	fadds f2, f2, f0
/* 80125150 00121F50  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 80125154 00121F54  4C 41 13 82 */	cror 2, 1, 2
/* 80125158 00121F58  40 82 00 18 */	bne lbl_80125170
/* 8012515C 00121F5C  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80125160 00121F60  4C 40 13 82 */	cror 2, 0, 2
/* 80125164 00121F64  40 82 00 0C */	bne lbl_80125170
/* 80125168 00121F68  7C 9F 23 78 */	mr r31, r4
/* 8012516C 00121F6C  48 00 00 10 */	b lbl_8012517C
lbl_80125170:
/* 80125170 00121F70  38 63 00 04 */	addi r3, r3, 4
/* 80125174 00121F74  38 84 00 01 */	addi r4, r4, 1
/* 80125178 00121F78  42 00 FF CC */	bdnz lbl_80125144
lbl_8012517C:
/* 8012517C 00121F7C  7C 1F E8 00 */	cmpw r31, r29
/* 80125180 00121F80  41 80 00 08 */	blt lbl_80125188
/* 80125184 00121F84  3B FD FF FF */	addi r31, r29, -1
lbl_80125188:
/* 80125188 00121F88  2C 1F 00 00 */	cmpwi r31, 0
/* 8012518C 00121F8C  40 80 00 08 */	bge lbl_80125194
/* 80125190 00121F90  3B E0 00 00 */	li r31, 0
lbl_80125194:
/* 80125194 00121F94  57 E0 10 3A */	slwi r0, r31, 2
/* 80125198 00121F98  7C 7C 00 2E */	lwzx r3, r28, r0
lbl_8012519C:
/* 8012519C 00121F9C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801251A0 00121FA0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801251A4 00121FA4  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 801251A8 00121FA8  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 801251AC 00121FAC  83 81 00 20 */	lwz r28, 0x20(r1)
/* 801251B0 00121FB0  7C 08 03 A6 */	mtlr r0
/* 801251B4 00121FB4  38 21 00 30 */	addi r1, r1, 0x30
/* 801251B8 00121FB8  4E 80 00 20 */	blr 

.endif

.section .rodata
lbl_8026BAE0:
	.incbin "baserom.dol", 0x268AC0, 0x80
lbl_8026BB60:
	.incbin "baserom.dol", 0x268B40, 0x568

.section .data
.balign 8
lbl_802982C8:
	.incbin "baserom.dol", 0x2952A8, 0x68
lbl_80298330:
	.incbin "baserom.dol", 0x295310, 0x68
/* SPECULATION: link order */
.global g_sndProps
g_sndProps:
	.incbin "baserom.dol", 0x295378, 0xCC
/* SPECULATION: link order */
.global g_sndTrax_Universal
g_sndTrax_Universal:
	.incbin "baserom.dol", 0x295444, 0xC
/* SPECULATION: link order */
.global g_sndTrax_General
g_sndTrax_General:
	.incbin "baserom.dol", 0x295450, 0xC
/* SPECULATION: link order */
.global g_sndTrax_Villager
g_sndTrax_Villager:
	.incbin "baserom.dol", 0x29545C, 0x144
/* SPECULATION: link order */
.global g_sndTrax_Squidward
g_sndTrax_Squidward:
	.incbin "baserom.dol", 0x2955A0, 0x48
/* SPECULATION: link order */
.global g_sndTrax_VillagerCoStar
g_sndTrax_VillagerCoStar:
	.incbin "baserom.dol", 0x2955E8, 0xC0
/* SPECULATION: link order */
.global g_sndTrax_VillagerMale
g_sndTrax_VillagerMale:
	.incbin "baserom.dol", 0x2956A8, 0xC
/* SPECULATION: link order */
.global g_sndTrax_VillagerFemale
g_sndTrax_VillagerFemale:
	.incbin "baserom.dol", 0x2956B4, 0xC
/* SPECULATION: link order */
.global g_sndTrax_VillagerElder
g_sndTrax_VillagerElder:
	.incbin "baserom.dol", 0x2956C0, 0xC
/* SPECULATION: link order */
.global g_sndTrax_VillagerEldess
g_sndTrax_VillagerEldess:
	.incbin "baserom.dol", 0x2956CC, 0xC
/* SPECULATION: link order */
.global g_sndTrax_VillagerBoy
g_sndTrax_VillagerBoy:
	.incbin "baserom.dol", 0x2956D8, 0x18
/* SPECULATION: link order */
.global g_sndTrax_VillagerGirl
g_sndTrax_VillagerGirl:
	.incbin "baserom.dol", 0x2956F0, 0x18
/* SPECULATION: link order */
.global g_sndTrax_Neptune
g_sndTrax_Neptune:
	.incbin "baserom.dol", 0x295708, 0xC
/* SPECULATION: link order */
.global g_sndTrax_Jelly
g_sndTrax_Jelly:
	.incbin "baserom.dol", 0x295714, 0x30
/* SPECULATION: link order */
.global g_sndTrax_TikiShared
g_sndTrax_TikiShared:
	.incbin "baserom.dol", 0x295744, 0x24
/* SPECULATION: link order */
.global g_sndTrax_TikiThunder
g_sndTrax_TikiThunder:
	.incbin "baserom.dol", 0x295768, 0x18
/* SPECULATION: link order */
.global g_sndTrax_Duplotron
g_sndTrax_Duplotron:
	.incbin "baserom.dol", 0x295780, 0x24
/* SPECULATION: link order */
.global g_sndTrax_Robot
g_sndTrax_Robot:
	.incbin "baserom.dol", 0x2957A4, 0x18
/* SPECULATION: link order */
.global g_sndTrax_Fodder
g_sndTrax_Fodder:
	.incbin "baserom.dol", 0x2957BC, 0x24
/* SPECULATION: link order */
.global g_sndTrax_FodBomb
g_sndTrax_FodBomb:
	.incbin "baserom.dol", 0x2957E0, 0x48
/* SPECULATION: link order */
.global g_sndTrax_FodBzzt
g_sndTrax_FodBzzt:
	.incbin "baserom.dol", 0x295828, 0x24
/* SPECULATION: link order */
.global g_sndTrax_Chomper
g_sndTrax_Chomper:
	.incbin "baserom.dol", 0x29584C, 0x30
/* SPECULATION: link order */
.global g_sndTrax_Hammer
g_sndTrax_Hammer:
	.incbin "baserom.dol", 0x29587C, 0x24
/* SPECULATION: link order */
.global g_sndTrax_TarTar
g_sndTrax_TarTar:
	.incbin "baserom.dol", 0x2958A0, 0x30
/* SPECULATION: link order */
.global g_sndTrax_Glove
g_sndTrax_Glove:
	.incbin "baserom.dol", 0x2958D0, 0x18
/* SPECULATION: link order */
.global g_sndTrax_Monsoon
g_sndTrax_Monsoon:
	.incbin "baserom.dol", 0x2958E8, 0x24
/* SPECULATION: link order */
.global g_sndTrax_Sleepy
g_sndTrax_Sleepy:
	.incbin "baserom.dol", 0x29590C, 0x24
/* SPECULATION: link order */
.global g_sndTrax_Chuck
g_sndTrax_Chuck:
	.incbin "baserom.dol", 0x295930, 0x3C
/* SPECULATION: link order */
.global g_sndTrax_ArfArf
g_sndTrax_ArfArf:
	.incbin "baserom.dol", 0x29596C, 0x24
/* SPECULATION: link order */
.global g_sndTrax_ArfDog
g_sndTrax_ArfDog:
	.incbin "baserom.dol", 0x295990, 0x30
/* SPECULATION: link order */
.global g_sndTrax_Tubelet
g_sndTrax_Tubelet:
	.incbin "baserom.dol", 0x2959C0, 0x3C
/* SPECULATION: link order */
.global g_sndTrax_Slick
g_sndTrax_Slick:
	.incbin "baserom.dol", 0x2959FC, 0x3C
/* SPECULATION: link order */
.global g_sndTrax_KingJelly
g_sndTrax_KingJelly:
	.incbin "baserom.dol", 0x295A38, 0xC
/* SPECULATION: link order */
.global g_sndTrax_Dutchman
g_sndTrax_Dutchman:
	.incbin "baserom.dol", 0x295A44, 0xC
/* SPECULATION: link order */
.global g_sndTrax_BossSandy
g_sndTrax_BossSandy:
	.incbin "baserom.dol", 0x295A50, 0x10
/* SPECULATION: link order */
.global g_hash_dupoanim
g_hash_dupoanim:
	.incbin "baserom.dol", 0x295A60, 0x14
/* SPECULATION: link order */
.global g_strz_dupoanim
g_strz_dupoanim:
	.incbin "baserom.dol", 0x295A74, 0x14

.section .bss
lbl_80314C50:
	.skip 0x68

.section .sdata2
lbl_803CEA78:
	.incbin "baserom.dol", 0x2B8318, 0x4
lbl_803CEA7C:
	.incbin "baserom.dol", 0x2B831C, 0x4
lbl_803CEA80:
	.incbin "baserom.dol", 0x2B8320, 0x4
lbl_803CEA84:
	.incbin "baserom.dol", 0x2B8324, 0x4
lbl_803CEA88:
	.incbin "baserom.dol", 0x2B8328, 0x4
lbl_803CEA8C:
	.incbin "baserom.dol", 0x2B832C, 0x4
lbl_803CEA90:
	.incbin "baserom.dol", 0x2B8330, 0x8
