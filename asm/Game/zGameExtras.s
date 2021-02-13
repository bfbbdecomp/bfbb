.include "macros.inc"

.if 0

.section .text  # 0x80099680 - 0x8009A924

EGG_check_ExtrasFlags__FP7EGGItem:
/* 80099938 00096738  80 0D 8F 88 */	lwz r0, g_currMonth-_SDA_BASE_(r13)
/* 8009993C 0009673C  28 00 00 0C */	cmplwi r0, 0xc
/* 80099940 00096740  41 81 01 BC */	bgt lbl_80099AFC
/* 80099944 00096744  3C 60 80 29 */	lis r3, lbl_8028F1D0@ha
/* 80099948 00096748  54 00 10 3A */	slwi r0, r0, 2
/* 8009994C 0009674C  38 63 F1 D0 */	addi r3, r3, lbl_8028F1D0@l
/* 80099950 00096750  7C 03 00 2E */	lwzx r0, r3, r0
/* 80099954 00096754  7C 09 03 A6 */	mtctr r0
/* 80099958 00096758  4E 80 04 20 */	bctr 
/* 8009995C 0009675C  80 0D 8F 84 */	lwz r0, g_currDay-_SDA_BASE_(r13)
/* 80099960 00096760  2C 00 00 01 */	cmpwi r0, 1
/* 80099964 00096764  40 82 01 98 */	bne lbl_80099AFC
/* 80099968 00096768  80 0D 8F 8C */	lwz r0, g_gameExtraFlags-_SDA_BASE_(r13)
/* 8009996C 0009676C  60 00 00 01 */	ori r0, r0, 1
/* 80099970 00096770  90 0D 8F 8C */	stw r0, g_gameExtraFlags-_SDA_BASE_(r13)
/* 80099974 00096774  48 00 01 88 */	b lbl_80099AFC
/* 80099978 00096778  80 0D 8F 84 */	lwz r0, g_currDay-_SDA_BASE_(r13)
/* 8009997C 0009677C  2C 00 00 02 */	cmpwi r0, 2
/* 80099980 00096780  40 82 01 7C */	bne lbl_80099AFC
/* 80099984 00096784  80 0D 8F 8C */	lwz r0, g_gameExtraFlags-_SDA_BASE_(r13)
/* 80099988 00096788  60 00 01 00 */	ori r0, r0, 0x100
/* 8009998C 0009678C  90 0D 8F 8C */	stw r0, g_gameExtraFlags-_SDA_BASE_(r13)
/* 80099990 00096790  48 00 01 6C */	b lbl_80099AFC
/* 80099994 00096794  80 6D 8F 84 */	lwz r3, g_currDay-_SDA_BASE_(r13)
/* 80099998 00096798  2C 03 00 0F */	cmpwi r3, 0xf
/* 8009999C 0009679C  40 82 00 10 */	bne lbl_800999AC
/* 800999A0 000967A0  80 0D 8F 8C */	lwz r0, g_gameExtraFlags-_SDA_BASE_(r13)
/* 800999A4 000967A4  60 00 00 08 */	ori r0, r0, 8
/* 800999A8 000967A8  90 0D 8F 8C */	stw r0, g_gameExtraFlags-_SDA_BASE_(r13)
lbl_800999AC:
/* 800999AC 000967AC  2C 03 00 11 */	cmpwi r3, 0x11
/* 800999B0 000967B0  40 82 00 10 */	bne lbl_800999C0
/* 800999B4 000967B4  80 0D 8F 8C */	lwz r0, g_gameExtraFlags-_SDA_BASE_(r13)
/* 800999B8 000967B8  60 00 00 04 */	ori r0, r0, 4
/* 800999BC 000967BC  90 0D 8F 8C */	stw r0, g_gameExtraFlags-_SDA_BASE_(r13)
lbl_800999C0:
/* 800999C0 000967C0  2C 03 00 12 */	cmpwi r3, 0x12
/* 800999C4 000967C4  40 82 00 10 */	bne lbl_800999D4
/* 800999C8 000967C8  80 0D 8F 8C */	lwz r0, g_gameExtraFlags-_SDA_BASE_(r13)
/* 800999CC 000967CC  60 00 01 00 */	ori r0, r0, 0x100
/* 800999D0 000967D0  90 0D 8F 8C */	stw r0, g_gameExtraFlags-_SDA_BASE_(r13)
lbl_800999D4:
/* 800999D4 000967D4  2C 03 00 15 */	cmpwi r3, 0x15
/* 800999D8 000967D8  40 82 00 10 */	bne lbl_800999E8
/* 800999DC 000967DC  80 0D 8F 8C */	lwz r0, g_gameExtraFlags-_SDA_BASE_(r13)
/* 800999E0 000967E0  60 00 01 00 */	ori r0, r0, 0x100
/* 800999E4 000967E4  90 0D 8F 8C */	stw r0, g_gameExtraFlags-_SDA_BASE_(r13)
lbl_800999E8:
/* 800999E8 000967E8  2C 03 00 16 */	cmpwi r3, 0x16
/* 800999EC 000967EC  40 82 01 10 */	bne lbl_80099AFC
/* 800999F0 000967F0  80 0D 8F 8C */	lwz r0, g_gameExtraFlags-_SDA_BASE_(r13)
/* 800999F4 000967F4  60 00 01 00 */	ori r0, r0, 0x100
/* 800999F8 000967F8  90 0D 8F 8C */	stw r0, g_gameExtraFlags-_SDA_BASE_(r13)
/* 800999FC 000967FC  48 00 01 00 */	b lbl_80099AFC
/* 80099A00 00096800  80 0D 8F 84 */	lwz r0, g_currDay-_SDA_BASE_(r13)
/* 80099A04 00096804  2C 00 00 01 */	cmpwi r0, 1
/* 80099A08 00096808  40 82 00 F4 */	bne lbl_80099AFC
/* 80099A0C 0009680C  80 0D 8F 8C */	lwz r0, g_gameExtraFlags-_SDA_BASE_(r13)
/* 80099A10 00096810  60 00 00 80 */	ori r0, r0, 0x80
/* 80099A14 00096814  90 0D 8F 8C */	stw r0, g_gameExtraFlags-_SDA_BASE_(r13)
/* 80099A18 00096818  48 00 00 E4 */	b lbl_80099AFC
/* 80099A1C 0009681C  80 0D 8F 84 */	lwz r0, g_currDay-_SDA_BASE_(r13)
/* 80099A20 00096820  2C 00 00 06 */	cmpwi r0, 6
/* 80099A24 00096824  40 82 00 D8 */	bne lbl_80099AFC
/* 80099A28 00096828  80 0D 8F 8C */	lwz r0, g_gameExtraFlags-_SDA_BASE_(r13)
/* 80099A2C 0009682C  60 00 00 40 */	ori r0, r0, 0x40
/* 80099A30 00096830  90 0D 8F 8C */	stw r0, g_gameExtraFlags-_SDA_BASE_(r13)
/* 80099A34 00096834  48 00 00 C8 */	b lbl_80099AFC
/* 80099A38 00096838  80 0D 8F 84 */	lwz r0, g_currDay-_SDA_BASE_(r13)
/* 80099A3C 0009683C  2C 00 00 04 */	cmpwi r0, 4
/* 80099A40 00096840  40 82 00 BC */	bne lbl_80099AFC
/* 80099A44 00096844  80 0D 8F 8C */	lwz r0, g_gameExtraFlags-_SDA_BASE_(r13)
/* 80099A48 00096848  60 00 00 02 */	ori r0, r0, 2
/* 80099A4C 0009684C  90 0D 8F 8C */	stw r0, g_gameExtraFlags-_SDA_BASE_(r13)
/* 80099A50 00096850  48 00 00 AC */	b lbl_80099AFC
/* 80099A54 00096854  80 0D 8F 84 */	lwz r0, g_currDay-_SDA_BASE_(r13)
/* 80099A58 00096858  2C 00 00 08 */	cmpwi r0, 8
/* 80099A5C 0009685C  40 82 00 A0 */	bne lbl_80099AFC
/* 80099A60 00096860  80 0D 8F 8C */	lwz r0, g_gameExtraFlags-_SDA_BASE_(r13)
/* 80099A64 00096864  60 00 01 00 */	ori r0, r0, 0x100
/* 80099A68 00096868  90 0D 8F 8C */	stw r0, g_gameExtraFlags-_SDA_BASE_(r13)
/* 80099A6C 0009686C  48 00 00 90 */	b lbl_80099AFC
/* 80099A70 00096870  80 0D 8F 84 */	lwz r0, g_currDay-_SDA_BASE_(r13)
/* 80099A74 00096874  2C 00 00 08 */	cmpwi r0, 8
/* 80099A78 00096878  40 82 00 84 */	bne lbl_80099AFC
/* 80099A7C 0009687C  80 0D 8F 8C */	lwz r0, g_gameExtraFlags-_SDA_BASE_(r13)
/* 80099A80 00096880  60 00 00 02 */	ori r0, r0, 2
/* 80099A84 00096884  90 0D 8F 8C */	stw r0, g_gameExtraFlags-_SDA_BASE_(r13)
/* 80099A88 00096888  48 00 00 74 */	b lbl_80099AFC
/* 80099A8C 0009688C  80 6D 8F 84 */	lwz r3, g_currDay-_SDA_BASE_(r13)
/* 80099A90 00096890  2C 03 00 05 */	cmpwi r3, 5
/* 80099A94 00096894  40 82 00 10 */	bne lbl_80099AA4
/* 80099A98 00096898  80 0D 8F 8C */	lwz r0, g_gameExtraFlags-_SDA_BASE_(r13)
/* 80099A9C 0009689C  60 00 01 00 */	ori r0, r0, 0x100
/* 80099AA0 000968A0  90 0D 8F 8C */	stw r0, g_gameExtraFlags-_SDA_BASE_(r13)
lbl_80099AA4:
/* 80099AA4 000968A4  2C 03 00 0E */	cmpwi r3, 0xe
/* 80099AA8 000968A8  40 82 00 10 */	bne lbl_80099AB8
/* 80099AAC 000968AC  80 0D 8F 8C */	lwz r0, g_gameExtraFlags-_SDA_BASE_(r13)
/* 80099AB0 000968B0  60 00 01 00 */	ori r0, r0, 0x100
/* 80099AB4 000968B4  90 0D 8F 8C */	stw r0, g_gameExtraFlags-_SDA_BASE_(r13)
lbl_80099AB8:
/* 80099AB8 000968B8  2C 03 00 16 */	cmpwi r3, 0x16
/* 80099ABC 000968BC  40 82 00 10 */	bne lbl_80099ACC
/* 80099AC0 000968C0  80 0D 8F 8C */	lwz r0, g_gameExtraFlags-_SDA_BASE_(r13)
/* 80099AC4 000968C4  60 00 01 00 */	ori r0, r0, 0x100
/* 80099AC8 000968C8  90 0D 8F 8C */	stw r0, g_gameExtraFlags-_SDA_BASE_(r13)
lbl_80099ACC:
/* 80099ACC 000968CC  2C 03 00 1F */	cmpwi r3, 0x1f
/* 80099AD0 000968D0  40 82 00 2C */	bne lbl_80099AFC
/* 80099AD4 000968D4  80 0D 8F 8C */	lwz r0, g_gameExtraFlags-_SDA_BASE_(r13)
/* 80099AD8 000968D8  60 00 00 20 */	ori r0, r0, 0x20
/* 80099ADC 000968DC  90 0D 8F 8C */	stw r0, g_gameExtraFlags-_SDA_BASE_(r13)
/* 80099AE0 000968E0  48 00 00 1C */	b lbl_80099AFC
/* 80099AE4 000968E4  80 0D 8F 84 */	lwz r0, g_currDay-_SDA_BASE_(r13)
/* 80099AE8 000968E8  2C 00 00 05 */	cmpwi r0, 5
/* 80099AEC 000968EC  40 82 00 10 */	bne lbl_80099AFC
/* 80099AF0 000968F0  80 0D 8F 8C */	lwz r0, g_gameExtraFlags-_SDA_BASE_(r13)
/* 80099AF4 000968F4  60 00 01 00 */	ori r0, r0, 0x100
/* 80099AF8 000968F8  90 0D 8F 8C */	stw r0, g_gameExtraFlags-_SDA_BASE_(r13)
lbl_80099AFC:
/* 80099AFC 000968FC  38 60 00 00 */	li r3, 0
/* 80099B00 00096900  4E 80 00 20 */	blr 

.global zGameExtras_NewGameReset__Fv
zGameExtras_NewGameReset__Fv:
/* 80099B0C 0009690C  38 00 00 00 */	li r0, 0
/* 80099B10 00096910  3C 60 80 3C */	lis r3, globals@ha
/* 80099B14 00096914  90 0D 8F 90 */	stw r0, g_flg_chEnabled-_SDA_BASE_(r13)
/* 80099B18 00096918  38 E3 05 58 */	addi r7, r3, globals@l
/* 80099B1C 0009691C  38 C0 00 32 */	li r6, 0x32
/* 80099B20 00096920  38 A0 00 0A */	li r5, 0xa
/* 80099B24 00096924  38 80 00 05 */	li r4, 5
/* 80099B28 00096928  38 60 00 02 */	li r3, 2
/* 80099B2C 0009692C  38 00 00 01 */	li r0, 1
/* 80099B30 00096930  90 C7 08 88 */	stw r6, 0x888(r7)
/* 80099B34 00096934  90 A7 08 8C */	stw r5, 0x88c(r7)
/* 80099B38 00096938  90 87 08 90 */	stw r4, 0x890(r7)
/* 80099B3C 0009693C  90 67 08 94 */	stw r3, 0x894(r7)
/* 80099B40 00096940  90 07 08 98 */	stw r0, 0x898(r7)
/* 80099B44 00096944  4E 80 00 20 */	blr 

.global zGameCheats__Ff
zGameCheats__Ff:
/* 80099D3C 00096B3C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80099D40 00096B40  7C 08 02 A6 */	mflr r0
/* 80099D44 00096B44  90 01 00 34 */	stw r0, 0x34(r1)
/* 80099D48 00096B48  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80099D4C 00096B4C  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 80099D50 00096B50  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80099D54 00096B54  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80099D58 00096B58  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80099D5C 00096B5C  FF E0 08 90 */	fmr f31, f1
/* 80099D60 00096B60  48 00 0B CD */	bl zGameModeGet__Fv
/* 80099D64 00096B64  2C 03 00 07 */	cmpwi r3, 7
/* 80099D68 00096B68  40 82 01 80 */	bne lbl_80099EE8
/* 80099D6C 00096B6C  3C 80 80 3C */	lis r4, globals@ha
/* 80099D70 00096B70  3C 60 FF FA */	lis r3, 0xFFF9EEFF@ha
/* 80099D74 00096B74  38 84 05 58 */	addi r4, r4, globals@l
/* 80099D78 00096B78  38 E0 00 00 */	li r7, 0
/* 80099D7C 00096B7C  80 84 03 1C */	lwz r4, 0x31c(r4)
/* 80099D80 00096B80  38 63 EE FF */	addi r3, r3, 0xFFF9EEFF@l
/* 80099D84 00096B84  80 C4 00 30 */	lwz r6, 0x30(r4)
/* 80099D88 00096B88  7C C0 18 39 */	and. r0, r6, r3
/* 80099D8C 00096B8C  40 82 00 10 */	bne lbl_80099D9C
/* 80099D90 00096B90  80 A4 00 2C */	lwz r5, 0x2c(r4)
/* 80099D94 00096B94  7C A0 18 39 */	and. r0, r5, r3
/* 80099D98 00096B98  41 82 00 0C */	beq lbl_80099DA4
lbl_80099D9C:
/* 80099D9C 00096B9C  38 E0 00 01 */	li r7, 1
/* 80099DA0 00096BA0  48 00 00 4C */	b lbl_80099DEC
lbl_80099DA4:
/* 80099DA4 00096BA4  70 A0 11 00 */	andi. r0, r5, 0x1100
/* 80099DA8 00096BA8  28 00 11 00 */	cmplwi r0, 0x1100
/* 80099DAC 00096BAC  41 82 00 0C */	beq lbl_80099DB8
/* 80099DB0 00096BB0  38 E0 00 01 */	li r7, 1
/* 80099DB4 00096BB4  48 00 00 38 */	b lbl_80099DEC
lbl_80099DB8:
/* 80099DB8 00096BB8  54 C0 03 5D */	rlwinm. r0, r6, 0, 0xd, 0xe
/* 80099DBC 00096BBC  40 82 00 30 */	bne lbl_80099DEC
/* 80099DC0 00096BC0  C0 0D 8F 94 */	lfs f0, lbl_803CB894-_SDA_BASE_(r13)
/* 80099DC4 00096BC4  EC 00 F8 28 */	fsubs f0, f0, f31
/* 80099DC8 00096BC8  D0 0D 8F 94 */	stfs f0, lbl_803CB894-_SDA_BASE_(r13)
/* 80099DCC 00096BCC  C0 2D 8F 94 */	lfs f1, lbl_803CB894-_SDA_BASE_(r13)
/* 80099DD0 00096BD0  C0 02 90 F8 */	lfs f0, _975-_SDA2_BASE_(r2)
/* 80099DD4 00096BD4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80099DD8 00096BD8  4C 40 13 82 */	cror 2, 0, 2
/* 80099DDC 00096BDC  40 82 01 0C */	bne lbl_80099EE8
/* 80099DE0 00096BE0  38 E0 00 01 */	li r7, 1
/* 80099DE4 00096BE4  48 00 00 08 */	b lbl_80099DEC
/* 80099DE8 00096BE8  48 00 01 00 */	b lbl_80099EE8
lbl_80099DEC:
/* 80099DEC 00096BEC  2C 07 00 00 */	cmpwi r7, 0
/* 80099DF0 00096BF0  40 82 00 20 */	bne lbl_80099E10
/* 80099DF4 00096BF4  80 0D 8F 98 */	lwz r0, sCheatInputCount-_SDA_BASE_(r13)
/* 80099DF8 00096BF8  2C 00 00 20 */	cmpwi r0, 0x20
/* 80099DFC 00096BFC  40 81 00 08 */	ble lbl_80099E04
/* 80099E00 00096C00  38 E0 00 01 */	li r7, 1
lbl_80099E04:
/* 80099E04 00096C04  80 6D 8F 98 */	lwz r3, sCheatInputCount-_SDA_BASE_(r13)
/* 80099E08 00096C08  38 03 00 01 */	addi r0, r3, 1
/* 80099E0C 00096C0C  90 0D 8F 98 */	stw r0, sCheatInputCount-_SDA_BASE_(r13)
lbl_80099E10:
/* 80099E10 00096C10  2C 07 00 00 */	cmpwi r7, 0
/* 80099E14 00096C14  41 82 00 2C */	beq lbl_80099E40
/* 80099E18 00096C18  C0 02 90 FC */	lfs f0, _1152-_SDA2_BASE_(r2)
/* 80099E1C 00096C1C  3C 60 80 29 */	lis r3, sCheatPressed@ha
/* 80099E20 00096C20  38 00 00 00 */	li r0, 0
/* 80099E24 00096C24  38 80 00 00 */	li r4, 0
/* 80099E28 00096C28  D0 0D 8F 94 */	stfs f0, lbl_803CB894-_SDA_BASE_(r13)
/* 80099E2C 00096C2C  38 63 F8 A4 */	addi r3, r3, sCheatPressed@l
/* 80099E30 00096C30  38 A0 00 40 */	li r5, 0x40
/* 80099E34 00096C34  90 0D 8F 98 */	stw r0, sCheatInputCount-_SDA_BASE_(r13)
/* 80099E38 00096C38  4B F6 96 21 */	bl memset
/* 80099E3C 00096C3C  48 00 00 AC */	b lbl_80099EE8
lbl_80099E40:
/* 80099E40 00096C40  80 04 00 30 */	lwz r0, 0x30(r4)
/* 80099E44 00096C44  54 03 03 5C */	rlwinm r3, r0, 0, 0xd, 0xe
/* 80099E48 00096C48  4B FF FE 6D */	bl AddToCheatPressed__FUi
/* 80099E4C 00096C4C  C0 02 90 FC */	lfs f0, _1152-_SDA2_BASE_(r2)
/* 80099E50 00096C50  3C 60 80 29 */	lis r3, lbl_8028F744@ha
/* 80099E54 00096C54  38 03 F7 44 */	addi r0, r3, lbl_8028F744@l
/* 80099E58 00096C58  3B E0 00 00 */	li r31, 0
/* 80099E5C 00096C5C  D0 0D 8F 94 */	stfs f0, lbl_803CB894-_SDA_BASE_(r13)
/* 80099E60 00096C60  7C 1E 03 78 */	mr r30, r0
/* 80099E64 00096C64  48 00 00 54 */	b lbl_80099EB8
lbl_80099E68:
/* 80099E68 00096C68  80 7E 00 00 */	lwz r3, 0(r30)
/* 80099E6C 00096C6C  7F DD F3 78 */	mr r29, r30
/* 80099E70 00096C70  3B DE 00 10 */	addi r30, r30, 0x10
/* 80099E74 00096C74  4B FF FD 39 */	bl TestCheat__FPUi
/* 80099E78 00096C78  2C 03 00 00 */	cmpwi r3, 0
/* 80099E7C 00096C7C  41 82 00 3C */	beq lbl_80099EB8
/* 80099E80 00096C80  80 1D 00 0C */	lwz r0, 0xc(r29)
/* 80099E84 00096C84  3B FF 00 01 */	addi r31, r31, 1
/* 80099E88 00096C88  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80099E8C 00096C8C  41 82 00 10 */	beq lbl_80099E9C
/* 80099E90 00096C90  80 7D 00 08 */	lwz r3, 8(r29)
/* 80099E94 00096C94  48 00 00 89 */	bl GEC_CheatFlagToggle__Fi
/* 80099E98 00096C98  48 00 00 0C */	b lbl_80099EA4
lbl_80099E9C:
/* 80099E9C 00096C9C  80 7D 00 08 */	lwz r3, 8(r29)
/* 80099EA0 00096CA0  48 00 00 6D */	bl GEC_CheatFlagAdd__Fi
lbl_80099EA4:
/* 80099EA4 00096CA4  81 9D 00 04 */	lwz r12, 4(r29)
/* 80099EA8 00096CA8  28 0C 00 00 */	cmplwi r12, 0
/* 80099EAC 00096CAC  41 82 00 0C */	beq lbl_80099EB8
/* 80099EB0 00096CB0  7D 89 03 A6 */	mtctr r12
/* 80099EB4 00096CB4  4E 80 04 21 */	bctrl 
lbl_80099EB8:
/* 80099EB8 00096CB8  80 1E 00 00 */	lwz r0, 0(r30)
/* 80099EBC 00096CBC  28 00 00 00 */	cmplwi r0, 0
/* 80099EC0 00096CC0  40 82 FF A8 */	bne lbl_80099E68
/* 80099EC4 00096CC4  2C 1F 00 00 */	cmpwi r31, 0
/* 80099EC8 00096CC8  41 82 00 20 */	beq lbl_80099EE8
/* 80099ECC 00096CCC  C0 02 91 00 */	lfs f0, _1153-_SDA2_BASE_(r2)
/* 80099ED0 00096CD0  3C 60 80 29 */	lis r3, sCheatPressed@ha
/* 80099ED4 00096CD4  38 63 F8 A4 */	addi r3, r3, sCheatPressed@l
/* 80099ED8 00096CD8  38 80 00 00 */	li r4, 0
/* 80099EDC 00096CDC  D0 0D 8F 94 */	stfs f0, lbl_803CB894-_SDA_BASE_(r13)
/* 80099EE0 00096CE0  38 A0 00 40 */	li r5, 0x40
/* 80099EE4 00096CE4  4B F6 95 75 */	bl memset
lbl_80099EE8:
/* 80099EE8 00096CE8  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 80099EEC 00096CEC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80099EF0 00096CF0  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80099EF4 00096CF4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80099EF8 00096CF8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80099EFC 00096CFC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80099F00 00096D00  7C 08 03 A6 */	mtlr r0
/* 80099F04 00096D04  38 21 00 30 */	addi r1, r1, 0x30
/* 80099F08 00096D08  4E 80 00 20 */	blr 

GEC_dfltSound__Fv:
/* 80099F2C 00096D2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80099F30 00096D30  7C 08 02 A6 */	mflr r0
/* 80099F34 00096D34  90 01 00 14 */	stw r0, 0x14(r1)
/* 80099F38 00096D38  88 0D 8F 9C */	lbz r0, lbl_803CB89C-_SDA_BASE_(r13)
/* 80099F3C 00096D3C  7C 00 07 75 */	extsb. r0, r0
/* 80099F40 00096D40  40 82 00 CC */	bne lbl_8009A00C
/* 80099F44 00096D44  3C 60 80 26 */	lis r3, zGameExtras_strings@ha
/* 80099F48 00096D48  38 63 CA 20 */	addi r3, r3, zGameExtras_strings@l
/* 80099F4C 00096D4C  38 63 00 05 */	addi r3, r3, 5
/* 80099F50 00096D50  4B FB 22 C5 */	bl xStrHash__FPCc
/* 80099F54 00096D54  3C A0 80 29 */	lis r5, aid_sndList_1160@ha
/* 80099F58 00096D58  3C 80 80 26 */	lis r4, zGameExtras_strings@ha
/* 80099F5C 00096D5C  90 65 F8 E4 */	stw r3, aid_sndList_1160@l(r5)
/* 80099F60 00096D60  38 64 CA 20 */	addi r3, r4, zGameExtras_strings@l
/* 80099F64 00096D64  38 63 00 05 */	addi r3, r3, 5
/* 80099F68 00096D68  4B FB 22 AD */	bl xStrHash__FPCc
/* 80099F6C 00096D6C  3C A0 80 29 */	lis r5, aid_sndList_1160@ha
/* 80099F70 00096D70  3C 80 80 26 */	lis r4, zGameExtras_strings@ha
/* 80099F74 00096D74  38 A5 F8 E4 */	addi r5, r5, aid_sndList_1160@l
/* 80099F78 00096D78  90 65 00 04 */	stw r3, 4(r5)
/* 80099F7C 00096D7C  38 64 CA 20 */	addi r3, r4, zGameExtras_strings@l
/* 80099F80 00096D80  38 63 00 05 */	addi r3, r3, 5
/* 80099F84 00096D84  4B FB 22 91 */	bl xStrHash__FPCc
/* 80099F88 00096D88  3C A0 80 29 */	lis r5, aid_sndList_1160@ha
/* 80099F8C 00096D8C  3C 80 80 26 */	lis r4, zGameExtras_strings@ha
/* 80099F90 00096D90  38 A5 F8 E4 */	addi r5, r5, aid_sndList_1160@l
/* 80099F94 00096D94  90 65 00 08 */	stw r3, 8(r5)
/* 80099F98 00096D98  38 64 CA 20 */	addi r3, r4, zGameExtras_strings@l
/* 80099F9C 00096D9C  38 63 00 0E */	addi r3, r3, 0xe
/* 80099FA0 00096DA0  4B FB 22 75 */	bl xStrHash__FPCc
/* 80099FA4 00096DA4  3C A0 80 29 */	lis r5, aid_sndList_1160@ha
/* 80099FA8 00096DA8  3C 80 80 26 */	lis r4, zGameExtras_strings@ha
/* 80099FAC 00096DAC  38 A5 F8 E4 */	addi r5, r5, aid_sndList_1160@l
/* 80099FB0 00096DB0  90 65 00 0C */	stw r3, 0xc(r5)
/* 80099FB4 00096DB4  38 64 CA 20 */	addi r3, r4, zGameExtras_strings@l
/* 80099FB8 00096DB8  38 63 00 19 */	addi r3, r3, 0x19
/* 80099FBC 00096DBC  4B FB 22 59 */	bl xStrHash__FPCc
/* 80099FC0 00096DC0  3C A0 80 29 */	lis r5, aid_sndList_1160@ha
/* 80099FC4 00096DC4  3C 80 80 26 */	lis r4, zGameExtras_strings@ha
/* 80099FC8 00096DC8  38 A5 F8 E4 */	addi r5, r5, aid_sndList_1160@l
/* 80099FCC 00096DCC  90 65 00 10 */	stw r3, 0x10(r5)
/* 80099FD0 00096DD0  38 64 CA 20 */	addi r3, r4, zGameExtras_strings@l
/* 80099FD4 00096DD4  38 63 00 24 */	addi r3, r3, 0x24
/* 80099FD8 00096DD8  4B FB 22 3D */	bl xStrHash__FPCc
/* 80099FDC 00096DDC  3C A0 80 29 */	lis r5, aid_sndList_1160@ha
/* 80099FE0 00096DE0  3C 80 80 26 */	lis r4, zGameExtras_strings@ha
/* 80099FE4 00096DE4  38 A5 F8 E4 */	addi r5, r5, aid_sndList_1160@l
/* 80099FE8 00096DE8  90 65 00 14 */	stw r3, 0x14(r5)
/* 80099FEC 00096DEC  38 64 CA 20 */	addi r3, r4, zGameExtras_strings@l
/* 80099FF0 00096DF0  38 63 00 2D */	addi r3, r3, 0x2d
/* 80099FF4 00096DF4  4B FB 22 21 */	bl xStrHash__FPCc
/* 80099FF8 00096DF8  3C 80 80 29 */	lis r4, aid_sndList_1160@ha
/* 80099FFC 00096DFC  38 00 00 01 */	li r0, 1
/* 8009A000 00096E00  38 84 F8 E4 */	addi r4, r4, aid_sndList_1160@l
/* 8009A004 00096E04  90 64 00 18 */	stw r3, 0x18(r4)
/* 8009A008 00096E08  98 0D 8F 9C */	stb r0, lbl_803CB89C-_SDA_BASE_(r13)
lbl_8009A00C:
/* 8009A00C 00096E0C  3C 60 80 29 */	lis r3, aid_sndList_1160@ha
/* 8009A010 00096E10  38 80 00 07 */	li r4, 7
/* 8009A014 00096E14  38 63 F8 E4 */	addi r3, r3, aid_sndList_1160@l
/* 8009A018 00096E18  38 A0 00 00 */	li r5, 0
/* 8009A01C 00096E1C  48 00 07 F5 */	bl xUtil_choose_esc__0_Ui_esc__1___FPCUiiPCf
/* 8009A020 00096E20  28 03 00 00 */	cmplwi r3, 0
/* 8009A024 00096E24  41 82 00 24 */	beq lbl_8009A048
/* 8009A028 00096E28  C0 42 90 F8 */	lfs f2, _975-_SDA2_BASE_(r2)
/* 8009A02C 00096E2C  38 80 00 80 */	li r4, 0x80
/* 8009A030 00096E30  C0 22 91 04 */	lfs f1, _1192-_SDA2_BASE_(r2)
/* 8009A034 00096E34  38 A0 00 00 */	li r5, 0
/* 8009A038 00096E38  FC 60 10 90 */	fmr f3, f2
/* 8009A03C 00096E3C  38 C0 00 00 */	li r6, 0
/* 8009A040 00096E40  38 E0 00 00 */	li r7, 0
/* 8009A044 00096E44  4B FA E9 E9 */	bl xSndPlay__FUiffUiUiUi14sound_categoryf
lbl_8009A048:
/* 8009A048 00096E48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009A04C 00096E4C  7C 08 03 A6 */	mtlr r0
/* 8009A050 00096E50  38 21 00 10 */	addi r1, r1, 0x10
/* 8009A054 00096E54  4E 80 00 20 */	blr 

GEC_cb_RestoreHealth__Fv:
/* 8009A380 00097180  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009A384 00097184  7C 08 02 A6 */	mflr r0
/* 8009A388 00097188  3C 60 80 3C */	lis r3, globals@ha
/* 8009A38C 0009718C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009A390 00097190  38 63 05 58 */	addi r3, r3, globals@l
/* 8009A394 00097194  80 03 17 38 */	lwz r0, 0x1738(r3)
/* 8009A398 00097198  90 03 16 B0 */	stw r0, 0x16b0(r3)
/* 8009A39C 0009719C  88 0D 8F 9D */	lbz r0, lbl_803CB89D-_SDA_BASE_(r13)
/* 8009A3A0 000971A0  7C 00 07 75 */	extsb. r0, r0
/* 8009A3A4 000971A4  40 82 00 38 */	bne lbl_8009A3DC
/* 8009A3A8 000971A8  3C 60 80 26 */	lis r3, zGameExtras_strings@ha
/* 8009A3AC 000971AC  38 63 CA 20 */	addi r3, r3, zGameExtras_strings@l
/* 8009A3B0 000971B0  38 63 00 8D */	addi r3, r3, 0x8d
/* 8009A3B4 000971B4  4B FB 1E 61 */	bl xStrHash__FPCc
/* 8009A3B8 000971B8  3C 80 80 26 */	lis r4, zGameExtras_strings@ha
/* 8009A3BC 000971BC  90 6D 82 38 */	stw r3, lbl_803CAB38-_SDA_BASE_(r13)
/* 8009A3C0 000971C0  38 64 CA 20 */	addi r3, r4, zGameExtras_strings@l
/* 8009A3C4 000971C4  38 63 00 96 */	addi r3, r3, 0x96
/* 8009A3C8 000971C8  4B FB 1E 4D */	bl xStrHash__FPCc
/* 8009A3CC 000971CC  38 8D 82 38 */	addi r4, r13, lbl_803CAB38-_SDA_BASE_
/* 8009A3D0 000971D0  38 00 00 01 */	li r0, 1
/* 8009A3D4 000971D4  90 64 00 04 */	stw r3, 4(r4)
/* 8009A3D8 000971D8  98 0D 8F 9D */	stb r0, lbl_803CB89D-_SDA_BASE_(r13)
lbl_8009A3DC:
/* 8009A3DC 000971DC  38 6D 82 38 */	addi r3, r13, lbl_803CAB38-_SDA_BASE_
/* 8009A3E0 000971E0  38 80 00 02 */	li r4, 2
/* 8009A3E4 000971E4  38 A0 00 00 */	li r5, 0
/* 8009A3E8 000971E8  48 00 04 29 */	bl xUtil_choose_esc__0_Ui_esc__1___FPCUiiPCf
/* 8009A3EC 000971EC  28 03 00 00 */	cmplwi r3, 0
/* 8009A3F0 000971F0  41 82 00 24 */	beq lbl_8009A414
/* 8009A3F4 000971F4  C0 42 90 F8 */	lfs f2, _975-_SDA2_BASE_(r2)
/* 8009A3F8 000971F8  38 80 00 80 */	li r4, 0x80
/* 8009A3FC 000971FC  C0 22 91 04 */	lfs f1, _1192-_SDA2_BASE_(r2)
/* 8009A400 00097200  38 A0 00 00 */	li r5, 0
/* 8009A404 00097204  FC 60 10 90 */	fmr f3, f2
/* 8009A408 00097208  38 C0 00 00 */	li r6, 0
/* 8009A40C 0009720C  38 E0 00 00 */	li r7, 0
/* 8009A410 00097210  4B FA E6 1D */	bl xSndPlay__FUiffUiUiUi14sound_categoryf
lbl_8009A414:
/* 8009A414 00097214  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009A418 00097218  7C 08 03 A6 */	mtlr r0
/* 8009A41C 0009721C  38 21 00 10 */	addi r1, r1, 0x10
/* 8009A420 00097220  4E 80 00 20 */	blr 

GEC_cb_CruiseControl__Fv:
/* 8009A4B0 000972B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009A4B4 000972B4  7C 08 02 A6 */	mflr r0
/* 8009A4B8 000972B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009A4BC 000972BC  88 0D 8F 9E */	lbz r0, lbl_803CB89E-_SDA_BASE_(r13)
/* 8009A4C0 000972C0  7C 00 07 75 */	extsb. r0, r0
/* 8009A4C4 000972C4  40 82 00 5C */	bne lbl_8009A520
/* 8009A4C8 000972C8  3C 60 80 26 */	lis r3, zGameExtras_strings@ha
/* 8009A4CC 000972CC  38 63 CA 20 */	addi r3, r3, zGameExtras_strings@l
/* 8009A4D0 000972D0  38 63 00 A8 */	addi r3, r3, 0xa8
/* 8009A4D4 000972D4  4B FB 1D 41 */	bl xStrHash__FPCc
/* 8009A4D8 000972D8  3C A0 80 29 */	lis r5, choices_1318@ha
/* 8009A4DC 000972DC  3C 80 80 26 */	lis r4, zGameExtras_strings@ha
/* 8009A4E0 000972E0  90 65 F9 00 */	stw r3, choices_1318@l(r5)
/* 8009A4E4 000972E4  38 64 CA 20 */	addi r3, r4, zGameExtras_strings@l
/* 8009A4E8 000972E8  38 63 00 B3 */	addi r3, r3, 0xb3
/* 8009A4EC 000972EC  4B FB 1D 29 */	bl xStrHash__FPCc
/* 8009A4F0 000972F0  3C A0 80 29 */	lis r5, choices_1318@ha
/* 8009A4F4 000972F4  3C 80 80 26 */	lis r4, zGameExtras_strings@ha
/* 8009A4F8 000972F8  38 A5 F9 00 */	addi r5, r5, choices_1318@l
/* 8009A4FC 000972FC  90 65 00 04 */	stw r3, 4(r5)
/* 8009A500 00097300  38 64 CA 20 */	addi r3, r4, zGameExtras_strings@l
/* 8009A504 00097304  38 63 00 BE */	addi r3, r3, 0xbe
/* 8009A508 00097308  4B FB 1D 0D */	bl xStrHash__FPCc
/* 8009A50C 0009730C  3C 80 80 29 */	lis r4, choices_1318@ha
/* 8009A510 00097310  38 00 00 01 */	li r0, 1
/* 8009A514 00097314  38 84 F9 00 */	addi r4, r4, choices_1318@l
/* 8009A518 00097318  90 64 00 08 */	stw r3, 8(r4)
/* 8009A51C 0009731C  98 0D 8F 9E */	stb r0, lbl_803CB89E-_SDA_BASE_(r13)
lbl_8009A520:
/* 8009A520 00097320  3C 60 80 29 */	lis r3, choices_1318@ha
/* 8009A524 00097324  38 80 00 03 */	li r4, 3
/* 8009A528 00097328  38 63 F9 00 */	addi r3, r3, choices_1318@l
/* 8009A52C 0009732C  38 A0 00 00 */	li r5, 0
/* 8009A530 00097330  48 00 02 E1 */	bl xUtil_choose_esc__0_Ui_esc__1___FPCUiiPCf
/* 8009A534 00097334  28 03 00 00 */	cmplwi r3, 0
/* 8009A538 00097338  41 82 00 24 */	beq lbl_8009A55C
/* 8009A53C 0009733C  C0 42 90 F8 */	lfs f2, _975-_SDA2_BASE_(r2)
/* 8009A540 00097340  38 80 00 80 */	li r4, 0x80
/* 8009A544 00097344  C0 22 91 04 */	lfs f1, _1192-_SDA2_BASE_(r2)
/* 8009A548 00097348  38 A0 00 00 */	li r5, 0
/* 8009A54C 0009734C  FC 60 10 90 */	fmr f3, f2
/* 8009A550 00097350  38 C0 00 00 */	li r6, 0
/* 8009A554 00097354  38 E0 00 00 */	li r7, 0
/* 8009A558 00097358  4B FA E4 D5 */	bl xSndPlay__FUiffUiUiUi14sound_categoryf
lbl_8009A55C:
/* 8009A55C 0009735C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009A560 00097360  7C 08 03 A6 */	mtlr r0
/* 8009A564 00097364  38 21 00 10 */	addi r1, r1, 0x10
/* 8009A568 00097368  4E 80 00 20 */	blr 

GEC_villSound__Fv:
/* 8009A5AC 000973AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009A5B0 000973B0  7C 08 02 A6 */	mflr r0
/* 8009A5B4 000973B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009A5B8 000973B8  88 0D 8F 9F */	lbz r0, lbl_803CB89F-_SDA_BASE_(r13)
/* 8009A5BC 000973BC  7C 00 07 75 */	extsb. r0, r0
/* 8009A5C0 000973C0  40 82 00 B0 */	bne lbl_8009A670
/* 8009A5C4 000973C4  3C 60 80 26 */	lis r3, zGameExtras_strings@ha
/* 8009A5C8 000973C8  38 63 CA 20 */	addi r3, r3, zGameExtras_strings@l
/* 8009A5CC 000973CC  38 63 00 C9 */	addi r3, r3, 0xc9
/* 8009A5D0 000973D0  4B FB 1C 45 */	bl xStrHash__FPCc
/* 8009A5D4 000973D4  3C A0 80 29 */	lis r5, aid_sndList_1342@ha
/* 8009A5D8 000973D8  3C 80 80 26 */	lis r4, zGameExtras_strings@ha
/* 8009A5DC 000973DC  90 65 F9 0C */	stw r3, aid_sndList_1342@l(r5)
/* 8009A5E0 000973E0  38 64 CA 20 */	addi r3, r4, zGameExtras_strings@l
/* 8009A5E4 000973E4  38 63 00 D4 */	addi r3, r3, 0xd4
/* 8009A5E8 000973E8  4B FB 1C 2D */	bl xStrHash__FPCc
/* 8009A5EC 000973EC  3C A0 80 29 */	lis r5, aid_sndList_1342@ha
/* 8009A5F0 000973F0  3C 80 80 26 */	lis r4, zGameExtras_strings@ha
/* 8009A5F4 000973F4  38 A5 F9 0C */	addi r5, r5, aid_sndList_1342@l
/* 8009A5F8 000973F8  90 65 00 04 */	stw r3, 4(r5)
/* 8009A5FC 000973FC  38 64 CA 20 */	addi r3, r4, zGameExtras_strings@l
/* 8009A600 00097400  38 63 00 DF */	addi r3, r3, 0xdf
/* 8009A604 00097404  4B FB 1C 11 */	bl xStrHash__FPCc
/* 8009A608 00097408  3C A0 80 29 */	lis r5, aid_sndList_1342@ha
/* 8009A60C 0009740C  3C 80 80 26 */	lis r4, zGameExtras_strings@ha
/* 8009A610 00097410  38 A5 F9 0C */	addi r5, r5, aid_sndList_1342@l
/* 8009A614 00097414  90 65 00 08 */	stw r3, 8(r5)
/* 8009A618 00097418  38 64 CA 20 */	addi r3, r4, zGameExtras_strings@l
/* 8009A61C 0009741C  38 63 00 E8 */	addi r3, r3, 0xe8
/* 8009A620 00097420  4B FB 1B F5 */	bl xStrHash__FPCc
/* 8009A624 00097424  3C A0 80 29 */	lis r5, aid_sndList_1342@ha
/* 8009A628 00097428  3C 80 80 26 */	lis r4, zGameExtras_strings@ha
/* 8009A62C 0009742C  38 A5 F9 0C */	addi r5, r5, aid_sndList_1342@l
/* 8009A630 00097430  90 65 00 0C */	stw r3, 0xc(r5)
/* 8009A634 00097434  38 64 CA 20 */	addi r3, r4, zGameExtras_strings@l
/* 8009A638 00097438  38 63 00 F3 */	addi r3, r3, 0xf3
/* 8009A63C 0009743C  4B FB 1B D9 */	bl xStrHash__FPCc
/* 8009A640 00097440  3C A0 80 29 */	lis r5, aid_sndList_1342@ha
/* 8009A644 00097444  3C 80 80 26 */	lis r4, zGameExtras_strings@ha
/* 8009A648 00097448  38 A5 F9 0C */	addi r5, r5, aid_sndList_1342@l
/* 8009A64C 0009744C  90 65 00 10 */	stw r3, 0x10(r5)
/* 8009A650 00097450  38 64 CA 20 */	addi r3, r4, zGameExtras_strings@l
/* 8009A654 00097454  38 63 00 FE */	addi r3, r3, 0xfe
/* 8009A658 00097458  4B FB 1B BD */	bl xStrHash__FPCc
/* 8009A65C 0009745C  3C 80 80 29 */	lis r4, aid_sndList_1342@ha
/* 8009A660 00097460  38 00 00 01 */	li r0, 1
/* 8009A664 00097464  38 84 F9 0C */	addi r4, r4, aid_sndList_1342@l
/* 8009A668 00097468  90 64 00 14 */	stw r3, 0x14(r4)
/* 8009A66C 0009746C  98 0D 8F 9F */	stb r0, lbl_803CB89F-_SDA_BASE_(r13)
lbl_8009A670:
/* 8009A670 00097470  3C 60 80 29 */	lis r3, aid_sndList_1342@ha
/* 8009A674 00097474  38 80 00 06 */	li r4, 6
/* 8009A678 00097478  38 63 F9 0C */	addi r3, r3, aid_sndList_1342@l
/* 8009A67C 0009747C  38 A0 00 00 */	li r5, 0
/* 8009A680 00097480  48 00 01 91 */	bl xUtil_choose_esc__0_Ui_esc__1___FPCUiiPCf
/* 8009A684 00097484  28 03 00 00 */	cmplwi r3, 0
/* 8009A688 00097488  41 82 00 24 */	beq lbl_8009A6AC
/* 8009A68C 0009748C  C0 42 90 F8 */	lfs f2, _975-_SDA2_BASE_(r2)
/* 8009A690 00097490  38 80 00 80 */	li r4, 0x80
/* 8009A694 00097494  C0 22 91 04 */	lfs f1, _1192-_SDA2_BASE_(r2)
/* 8009A698 00097498  38 A0 00 00 */	li r5, 0
/* 8009A69C 0009749C  FC 60 10 90 */	fmr f3, f2
/* 8009A6A0 000974A0  38 C0 00 00 */	li r6, 0
/* 8009A6A4 000974A4  38 E0 00 00 */	li r7, 0
/* 8009A6A8 000974A8  4B FA E3 85 */	bl xSndPlay__FUiffUiUiUi14sound_categoryf
lbl_8009A6AC:
/* 8009A6AC 000974AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009A6B0 000974B0  7C 08 03 A6 */	mtlr r0
/* 8009A6B4 000974B4  38 21 00 10 */	addi r1, r1, 0x10
/* 8009A6B8 000974B8  4E 80 00 20 */	blr 

/* xUtil_choose<Ui>__FPCUiiPCf */
xUtil_choose_esc__0_Ui_esc__1___FPCUiiPCf:
/* 8009A810 00097610  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8009A814 00097614  7C 08 02 A6 */	mflr r0
/* 8009A818 00097618  90 01 00 34 */	stw r0, 0x34(r1)
/* 8009A81C 0009761C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8009A820 00097620  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8009A824 00097624  7C BE 2B 78 */	mr r30, r5
/* 8009A828 00097628  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8009A82C 0009762C  7C 9D 23 78 */	mr r29, r4
/* 8009A830 00097630  93 81 00 20 */	stw r28, 0x20(r1)
/* 8009A834 00097634  7C 7C 1B 79 */	or. r28, r3, r3
/* 8009A838 00097638  40 82 00 0C */	bne lbl_8009A844
/* 8009A83C 0009763C  38 60 00 00 */	li r3, 0
/* 8009A840 00097640  48 00 00 C4 */	b lbl_8009A904
lbl_8009A844:
/* 8009A844 00097644  2C 1D 00 01 */	cmpwi r29, 1
/* 8009A848 00097648  40 80 00 0C */	bge lbl_8009A854
/* 8009A84C 0009764C  38 60 00 00 */	li r3, 0
/* 8009A850 00097650  48 00 00 B4 */	b lbl_8009A904
lbl_8009A854:
/* 8009A854 00097654  3B E0 00 00 */	li r31, 0
/* 8009A858 00097658  4B F9 64 31 */	bl xurand__Fv
/* 8009A85C 0009765C  28 1E 00 00 */	cmplwi r30, 0
/* 8009A860 00097660  40 82 00 34 */	bne lbl_8009A894
/* 8009A864 00097664  6F A3 80 00 */	xoris r3, r29, 0x8000
/* 8009A868 00097668  3C 00 43 30 */	lis r0, 0x4330
/* 8009A86C 0009766C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8009A870 00097670  C8 42 91 08 */	lfd f2, lbl_803CDA88-_SDA2_BASE_(r2)
/* 8009A874 00097674  90 01 00 08 */	stw r0, 8(r1)
/* 8009A878 00097678  C8 01 00 08 */	lfd f0, 8(r1)
/* 8009A87C 0009767C  EC 00 10 28 */	fsubs f0, f0, f2
/* 8009A880 00097680  EC 01 00 32 */	fmuls f0, f1, f0
/* 8009A884 00097684  FC 00 00 1E */	fctiwz f0, f0
/* 8009A888 00097688  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8009A88C 0009768C  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8009A890 00097690  48 00 00 54 */	b lbl_8009A8E4
lbl_8009A894:
/* 8009A894 00097694  7F C3 F3 78 */	mr r3, r30
/* 8009A898 00097698  C0 42 90 F8 */	lfs f2, _975-_SDA2_BASE_(r2)
/* 8009A89C 0009769C  38 80 00 00 */	li r4, 0
/* 8009A8A0 000976A0  7F A9 03 A6 */	mtctr r29
/* 8009A8A4 000976A4  2C 1D 00 00 */	cmpwi r29, 0
/* 8009A8A8 000976A8  40 81 00 3C */	ble lbl_8009A8E4
lbl_8009A8AC:
/* 8009A8AC 000976AC  FC 60 10 90 */	fmr f3, f2
/* 8009A8B0 000976B0  C0 03 00 00 */	lfs f0, 0(r3)
/* 8009A8B4 000976B4  EC 42 00 2A */	fadds f2, f2, f0
/* 8009A8B8 000976B8  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 8009A8BC 000976BC  4C 41 13 82 */	cror 2, 1, 2
/* 8009A8C0 000976C0  40 82 00 18 */	bne lbl_8009A8D8
/* 8009A8C4 000976C4  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 8009A8C8 000976C8  4C 40 13 82 */	cror 2, 0, 2
/* 8009A8CC 000976CC  40 82 00 0C */	bne lbl_8009A8D8
/* 8009A8D0 000976D0  7C 9F 23 78 */	mr r31, r4
/* 8009A8D4 000976D4  48 00 00 10 */	b lbl_8009A8E4
lbl_8009A8D8:
/* 8009A8D8 000976D8  38 63 00 04 */	addi r3, r3, 4
/* 8009A8DC 000976DC  38 84 00 01 */	addi r4, r4, 1
/* 8009A8E0 000976E0  42 00 FF CC */	bdnz lbl_8009A8AC
lbl_8009A8E4:
/* 8009A8E4 000976E4  7C 1F E8 00 */	cmpw r31, r29
/* 8009A8E8 000976E8  41 80 00 08 */	blt lbl_8009A8F0
/* 8009A8EC 000976EC  3B FD FF FF */	addi r31, r29, -1
lbl_8009A8F0:
/* 8009A8F0 000976F0  2C 1F 00 00 */	cmpwi r31, 0
/* 8009A8F4 000976F4  40 80 00 08 */	bge lbl_8009A8FC
/* 8009A8F8 000976F8  3B E0 00 00 */	li r31, 0
lbl_8009A8FC:
/* 8009A8FC 000976FC  57 E0 10 3A */	slwi r0, r31, 2
/* 8009A900 00097700  7C 7C 00 2E */	lwzx r3, r28, r0
lbl_8009A904:
/* 8009A904 00097704  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8009A908 00097708  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8009A90C 0009770C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8009A910 00097710  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8009A914 00097714  83 81 00 20 */	lwz r28, 0x20(r1)
/* 8009A918 00097718  7C 08 03 A6 */	mtlr r0
/* 8009A91C 0009771C  38 21 00 30 */	addi r1, r1, 0x30
/* 8009A920 00097720  4E 80 00 20 */	blr 

.endif

.section .rodata
.global zGameExtras_strings
zGameExtras_strings:
	.incbin "baserom.dol", 0x259A00, 0x118

.section .data

/*
.global EGGEmpty 
EGGEmpty:
	.incbin "baserom.dol", 0x28C180, 0x10

.global g_eggBasket
g_eggBasket:
	.incbin "baserom.dol", 0x28C190, 0x20

jumpTable:
	.incbin "baserom.dol", 0x28C1B0, 0x34
*/

/* 8028 F204 */
/*
cheatBlob:
	.incbin "baserom.dol", 0x28C1E4, 0x540
*/
/* 64 in hex = 40 */
/* 8028f744 */
/* cheat list goes here, size = 0x160 */

.global cheatList
cheatList:
	.incbin "baserom.dol", 0x28C724, 0x160

.global sCheatPressed
sCheatPressed:
	.incbin "baserom.dol", 0x28C884, 0x40
.global aid_sndList_1160
aid_sndList_1160:
	.incbin "baserom.dol", 0x28C8C4, 0x1C
.global choices_1318
choices_1318:
	.incbin "baserom.dol", 0x28C8E0, 0xC
.global aid_sndList_1342
aid_sndList_1342:
	.incbin "baserom.dol", 0x28C8EC, 0x1C

.section .sbss

/*
.global g_enableGameExtras
g_enableGameExtras:
	.skip 0x4

.global g_currDay
g_currDay:
	.skip 0x4

.global g_currMonth
g_currMonth:
	.skip 0x4

.global g_gameExtraFlags
g_gameExtraFlags:
	.skip 0x4

.global g_flg_chEnabled
g_flg_chEnabled:
	.skip 0x4

sCheatTimer:
	.skip 0x4
.global sCheatInputCount
sCheatInputCount:
	.skip 0x4
lbl_803CB89C:
	.skip 0x1
lbl_803CB89D:
	.skip 0x1
lbl_803CB89E:
	.skip 0x1
lbl_803CB89F:
	.skip 0x1

.global sGalleryTitle
sGalleryTitle:
	.skip 0x8
*/

.section .sdata
lbl_803CAB38:
	.incbin "baserom.dol", 0x2B5BF8, 0x8

.section .sdata2

.global _975
_975:
	.incbin "baserom.dol", 0x2B7318, 0x4
.global _1152
_1152:
	.incbin "baserom.dol", 0x2B731C, 0x4
.global _1153
_1153:
	.incbin "baserom.dol", 0x2B7320, 0x4
.global _1192
_1192:
	.incbin "baserom.dol", 0x2B7324, 0x4

lbl_803CDA88:
	.incbin "baserom.dol", 0x2B7328, 0x8
