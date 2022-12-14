.include "macros.inc"
.file "zTaskBox.cpp"

# 0x8013499C - 0x801352A4
.text
.balign 4

# ztaskbox::load(const ztaskbox::asset_type&)
.fn load__8ztaskboxFRCQ28ztaskbox10asset_type, global
/* 8013499C 00131A7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801349A0 00131A80  7C 08 02 A6 */	mflr r0
/* 801349A4 00131A84  90 01 00 14 */	stw r0, 0x14(r1)
/* 801349A8 00131A88  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801349AC 00131A8C  7C 9F 23 78 */	mr r31, r4
/* 801349B0 00131A90  93 C1 00 08 */	stw r30, 0x8(r1)
/* 801349B4 00131A94  7C 7E 1B 78 */	mr r30, r3
/* 801349B8 00131A98  4B ED 4A 49 */	bl xBaseInit__FP5xBaseP10xBaseAsset
/* 801349BC 00131A9C  38 00 00 35 */	li r0, 0x35
/* 801349C0 00131AA0  3C 60 80 13 */	lis r3, cb_dispatch__8ztaskboxFP5xBaseP5xBaseUiPCfP5xBase@ha
/* 801349C4 00131AA4  98 1E 00 04 */	stb r0, 0x4(r30)
/* 801349C8 00131AA8  38 03 51 A4 */	addi r0, r3, cb_dispatch__8ztaskboxFP5xBaseP5xBaseUiPCfP5xBase@l
/* 801349CC 00131AAC  93 FE 00 14 */	stw r31, 0x14(r30)
/* 801349D0 00131AB0  90 1E 00 0C */	stw r0, 0xc(r30)
/* 801349D4 00131AB4  88 1E 00 05 */	lbz r0, 0x5(r30)
/* 801349D8 00131AB8  28 00 00 00 */	cmplwi r0, 0x0
/* 801349DC 00131ABC  41 82 00 0C */	beq .L_801349E8
/* 801349E0 00131AC0  38 1F 00 34 */	addi r0, r31, 0x34
/* 801349E4 00131AC4  90 1E 00 08 */	stw r0, 0x8(r30)
.L_801349E8:
/* 801349E8 00131AC8  88 1F 00 12 */	lbz r0, 0x12(r31)
/* 801349EC 00131ACC  38 60 FF FF */	li r3, -0x1
/* 801349F0 00131AD0  90 7E 00 18 */	stw r3, 0x18(r30)
/* 801349F4 00131AD4  28 00 00 00 */	cmplwi r0, 0x0
/* 801349F8 00131AD8  41 82 00 20 */	beq .L_80134A18
/* 801349FC 00131ADC  38 00 00 01 */	li r0, 0x1
/* 80134A00 00131AE0  7F C3 F3 78 */	mr r3, r30
/* 80134A04 00131AE4  98 1E 00 10 */	stb r0, 0x10(r30)
/* 80134A08 00131AE8  38 80 00 00 */	li r4, 0x0
/* 80134A0C 00131AEC  48 00 05 39 */	bl set_state__8ztaskboxFQ28ztaskbox10state_enum
/* 80134A10 00131AF0  93 DE 00 20 */	stw r30, 0x20(r30)
/* 80134A14 00131AF4  48 00 00 10 */	b .L_80134A24
.L_80134A18:
/* 80134A18 00131AF8  38 00 00 00 */	li r0, 0x0
/* 80134A1C 00131AFC  98 1E 00 10 */	stb r0, 0x10(r30)
/* 80134A20 00131B00  90 1E 00 20 */	stw r0, 0x20(r30)
.L_80134A24:
/* 80134A24 00131B04  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 80134A28 00131B08  28 00 00 00 */	cmplwi r0, 0x0
/* 80134A2C 00131B0C  41 82 00 10 */	beq .L_80134A3C
/* 80134A30 00131B10  A0 1E 00 06 */	lhz r0, 0x6(r30)
/* 80134A34 00131B14  60 00 00 02 */	ori r0, r0, 0x2
/* 80134A38 00131B18  B0 1E 00 06 */	sth r0, 0x6(r30)
.L_80134A3C:
/* 80134A3C 00131B1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80134A40 00131B20  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80134A44 00131B24  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80134A48 00131B28  7C 08 03 A6 */	mtlr r0
/* 80134A4C 00131B2C  38 21 00 10 */	addi r1, r1, 0x10
/* 80134A50 00131B30  4E 80 00 20 */	blr
.endfn load__8ztaskboxFRCQ28ztaskbox10asset_type

# ztaskbox::read(xSerial&)
.fn read__8ztaskboxFR7xSerial, global
/* 80134A54 00131B34  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80134A58 00131B38  7C 08 02 A6 */	mflr r0
/* 80134A5C 00131B3C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80134A60 00131B40  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80134A64 00131B44  7C 7F 1B 78 */	mr r31, r3
/* 80134A68 00131B48  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80134A6C 00131B4C  7C 83 23 78 */	mr r3, r4
/* 80134A70 00131B50  38 81 00 08 */	addi r4, r1, 0x8
/* 80134A74 00131B54  98 01 00 08 */	stb r0, 0x8(r1)
/* 80134A78 00131B58  4B F0 E8 85 */	bl Read__7xSerialFPUc
/* 80134A7C 00131B5C  88 81 00 08 */	lbz r4, 0x8(r1)
/* 80134A80 00131B60  7F E3 FB 78 */	mr r3, r31
/* 80134A84 00131B64  48 00 04 C1 */	bl set_state__8ztaskboxFQ28ztaskbox10state_enum
/* 80134A88 00131B68  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80134A8C 00131B6C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80134A90 00131B70  7C 08 03 A6 */	mtlr r0
/* 80134A94 00131B74  38 21 00 20 */	addi r1, r1, 0x20
/* 80134A98 00131B78  4E 80 00 20 */	blr
.endfn read__8ztaskboxFR7xSerial

# ztaskbox::write(xSerial&)
.fn write__8ztaskboxFR7xSerial, global
/* 80134A9C 00131B7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80134AA0 00131B80  7C 08 02 A6 */	mflr r0
/* 80134AA4 00131B84  90 01 00 14 */	stw r0, 0x14(r1)
/* 80134AA8 00131B88  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80134AAC 00131B8C  7C 83 23 78 */	mr r3, r4
/* 80134AB0 00131B90  54 04 06 3E */	clrlwi r4, r0, 24
/* 80134AB4 00131B94  4B F0 E5 B9 */	bl Write__7xSerialFUc
/* 80134AB8 00131B98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80134ABC 00131B9C  7C 08 03 A6 */	mtlr r0
/* 80134AC0 00131BA0  38 21 00 10 */	addi r1, r1, 0x10
/* 80134AC4 00131BA4  4E 80 00 20 */	blr
.endfn write__8ztaskboxFR7xSerial

# ztaskbox::start_talk(zNPCCommon*)
.fn start_talk__8ztaskboxFP10zNPCCommon, global
/* 80134AC8 00131BA8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80134ACC 00131BAC  7C 08 02 A6 */	mflr r0
/* 80134AD0 00131BB0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80134AD4 00131BB4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80134AD8 00131BB8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80134ADC 00131BBC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80134AE0 00131BC0  7C 9D 23 78 */	mr r29, r4
/* 80134AE4 00131BC4  93 81 00 10 */	stw r28, 0x10(r1)
/* 80134AE8 00131BC8  7C 7C 1B 78 */	mr r28, r3
/* 80134AEC 00131BCC  80 63 00 20 */	lwz r3, 0x20(r3)
/* 80134AF0 00131BD0  28 03 00 00 */	cmplwi r3, 0x0
/* 80134AF4 00131BD4  41 82 00 B0 */	beq .L_80134BA4
/* 80134AF8 00131BD8  7C 03 E0 40 */	cmplw r3, r28
/* 80134AFC 00131BDC  41 82 00 1C */	beq .L_80134B18
/* 80134B00 00131BE0  80 9C 00 1C */	lwz r4, 0x1c(r28)
/* 80134B04 00131BE4  48 00 03 35 */	bl set_callback__8ztaskboxFPQ28ztaskbox8callback
/* 80134B08 00131BE8  80 7C 00 20 */	lwz r3, 0x20(r28)
/* 80134B0C 00131BEC  38 80 00 00 */	li r4, 0x0
/* 80134B10 00131BF0  4B FF FF B9 */	bl start_talk__8ztaskboxFP10zNPCCommon
/* 80134B14 00131BF4  48 00 00 90 */	b .L_80134BA4
.L_80134B18:
/* 80134B18 00131BF8  88 1C 00 10 */	lbz r0, 0x10(r28)
/* 80134B1C 00131BFC  28 00 00 00 */	cmplwi r0, 0x0
/* 80134B20 00131C00  41 82 00 84 */	beq .L_80134BA4
/* 80134B24 00131C04  80 1C 00 18 */	lwz r0, 0x18(r28)
/* 80134B28 00131C08  2C 00 FF FF */	cmpwi r0, -0x1
/* 80134B2C 00131C0C  40 82 00 08 */	bne .L_80134B34
/* 80134B30 00131C10  48 00 00 74 */	b .L_80134BA4
.L_80134B34:
/* 80134B34 00131C14  80 6D 96 24 */	lwz r3, "shared__22@unnamed@zTaskBox_cpp@"@sda21(r13)
/* 80134B38 00131C18  28 03 00 00 */	cmplwi r3, 0x0
/* 80134B3C 00131C1C  41 82 00 10 */	beq .L_80134B4C
/* 80134B40 00131C20  7C 03 E0 40 */	cmplw r3, r28
/* 80134B44 00131C24  41 82 00 08 */	beq .L_80134B4C
/* 80134B48 00131C28  48 00 00 8D */	bl stop_talk__8ztaskboxFv
.L_80134B4C:
/* 80134B4C 00131C2C  80 7C 00 14 */	lwz r3, 0x14(r28)
/* 80134B50 00131C30  80 63 00 14 */	lwz r3, 0x14(r3)
/* 80134B54 00131C34  4B F7 FE E9 */	bl zSceneFindObject__FUi
/* 80134B58 00131C38  7C 7F 1B 79 */	mr. r31, r3
/* 80134B5C 00131C3C  41 82 00 48 */	beq .L_80134BA4
/* 80134B60 00131C40  80 1C 00 18 */	lwz r0, 0x18(r28)
/* 80134B64 00131C44  80 7C 00 14 */	lwz r3, 0x14(r28)
/* 80134B68 00131C48  54 00 10 3A */	slwi r0, r0, 2
/* 80134B6C 00131C4C  7C 63 02 14 */	add r3, r3, r0
/* 80134B70 00131C50  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 80134B74 00131C54  48 00 05 B1 */	bl get_text__8ztaskboxFUi
/* 80134B78 00131C58  7C 7E 1B 79 */	mr. r30, r3
/* 80134B7C 00131C5C  41 82 00 28 */	beq .L_80134BA4
/* 80134B80 00131C60  93 8D 96 24 */	stw r28, "shared__22@unnamed@zTaskBox_cpp@"@sda21(r13)
/* 80134B84 00131C64  7F 84 E3 78 */	mr r4, r28
/* 80134B88 00131C68  80 6D 96 20 */	lwz r3, tcb__8ztaskbox@sda21(r13)
/* 80134B8C 00131C6C  48 00 00 39 */	bl reset__Q28ztaskbox13talk_callbackFR8ztaskbox
/* 80134B90 00131C70  80 AD 96 20 */	lwz r5, tcb__8ztaskbox@sda21(r13)
/* 80134B94 00131C74  7F E3 FB 78 */	mr r3, r31
/* 80134B98 00131C78  7F C4 F3 78 */	mr r4, r30
/* 80134B9C 00131C7C  7F A6 EB 78 */	mr r6, r29
/* 80134BA0 00131C80  4B FF DC F1 */	bl start_talk__8ztalkboxFPCcPQ28ztalkbox8callbackP10zNPCCommon
.L_80134BA4:
/* 80134BA4 00131C84  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80134BA8 00131C88  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80134BAC 00131C8C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80134BB0 00131C90  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80134BB4 00131C94  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80134BB8 00131C98  7C 08 03 A6 */	mtlr r0
/* 80134BBC 00131C9C  38 21 00 20 */	addi r1, r1, 0x20
/* 80134BC0 00131CA0  4E 80 00 20 */	blr
.endfn start_talk__8ztaskboxFP10zNPCCommon

# ztaskbox::talk_callback::reset(ztaskbox&)
.fn reset__Q28ztaskbox13talk_callbackFR8ztaskbox, weak
/* 80134BC4 00131CA4  90 83 00 04 */	stw r4, 0x4(r3)
/* 80134BC8 00131CA8  38 00 00 00 */	li r0, 0x0
/* 80134BCC 00131CAC  90 03 00 08 */	stw r0, 0x8(r3)
/* 80134BD0 00131CB0  4E 80 00 20 */	blr
.endfn reset__Q28ztaskbox13talk_callbackFR8ztaskbox

# ztaskbox::stop_talk()
.fn stop_talk__8ztaskboxFv, global
/* 80134BD4 00131CB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80134BD8 00131CB8  7C 08 02 A6 */	mflr r0
/* 80134BDC 00131CBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80134BE0 00131CC0  80 03 00 20 */	lwz r0, 0x20(r3)
/* 80134BE4 00131CC4  28 00 00 00 */	cmplwi r0, 0x0
/* 80134BE8 00131CC8  41 82 00 60 */	beq .L_80134C48
/* 80134BEC 00131CCC  7C 00 18 40 */	cmplw r0, r3
/* 80134BF0 00131CD0  41 82 00 10 */	beq .L_80134C00
/* 80134BF4 00131CD4  7C 03 03 78 */	mr r3, r0
/* 80134BF8 00131CD8  4B FF FF DD */	bl stop_talk__8ztaskboxFv
/* 80134BFC 00131CDC  48 00 00 4C */	b .L_80134C48
.L_80134C00:
/* 80134C00 00131CE0  88 03 00 10 */	lbz r0, 0x10(r3)
/* 80134C04 00131CE4  28 00 00 00 */	cmplwi r0, 0x0
/* 80134C08 00131CE8  41 82 00 40 */	beq .L_80134C48
/* 80134C0C 00131CEC  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80134C10 00131CF0  2C 00 FF FF */	cmpwi r0, -0x1
/* 80134C14 00131CF4  40 82 00 08 */	bne .L_80134C1C
/* 80134C18 00131CF8  48 00 00 30 */	b .L_80134C48
.L_80134C1C:
/* 80134C1C 00131CFC  80 0D 96 24 */	lwz r0, "shared__22@unnamed@zTaskBox_cpp@"@sda21(r13)
/* 80134C20 00131D00  7C 00 18 40 */	cmplw r0, r3
/* 80134C24 00131D04  40 82 00 24 */	bne .L_80134C48
/* 80134C28 00131D08  80 63 00 14 */	lwz r3, 0x14(r3)
/* 80134C2C 00131D0C  80 63 00 14 */	lwz r3, 0x14(r3)
/* 80134C30 00131D10  4B F7 FE 0D */	bl zSceneFindObject__FUi
/* 80134C34 00131D14  28 03 00 00 */	cmplwi r3, 0x0
/* 80134C38 00131D18  41 82 00 10 */	beq .L_80134C48
/* 80134C3C 00131D1C  4B FF DE 55 */	bl stop_talk__8ztalkboxFv
/* 80134C40 00131D20  38 00 00 00 */	li r0, 0x0
/* 80134C44 00131D24  90 0D 96 24 */	stw r0, "shared__22@unnamed@zTaskBox_cpp@"@sda21(r13)
.L_80134C48:
/* 80134C48 00131D28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80134C4C 00131D2C  7C 08 03 A6 */	mtlr r0
/* 80134C50 00131D30  38 21 00 10 */	addi r1, r1, 0x10
/* 80134C54 00131D34  4E 80 00 20 */	blr
.endfn stop_talk__8ztaskboxFv

# ztaskbox::enable()
.fn enable__8ztaskboxFv, global
/* 80134C58 00131D38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80134C5C 00131D3C  7C 08 02 A6 */	mflr r0
/* 80134C60 00131D40  90 01 00 14 */	stw r0, 0x14(r1)
/* 80134C64 00131D44  88 03 00 10 */	lbz r0, 0x10(r3)
/* 80134C68 00131D48  28 00 00 00 */	cmplwi r0, 0x0
/* 80134C6C 00131D4C  40 82 00 14 */	bne .L_80134C80
/* 80134C70 00131D50  38 00 00 01 */	li r0, 0x1
/* 80134C74 00131D54  38 80 00 00 */	li r4, 0x0
/* 80134C78 00131D58  98 03 00 10 */	stb r0, 0x10(r3)
/* 80134C7C 00131D5C  48 00 02 C9 */	bl set_state__8ztaskboxFQ28ztaskbox10state_enum
.L_80134C80:
/* 80134C80 00131D60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80134C84 00131D64  7C 08 03 A6 */	mtlr r0
/* 80134C88 00131D68  38 21 00 10 */	addi r1, r1, 0x10
/* 80134C8C 00131D6C  4E 80 00 20 */	blr
.endfn enable__8ztaskboxFv

# ztaskbox::disable()
.fn disable__8ztaskboxFv, global
/* 80134C90 00131D70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80134C94 00131D74  7C 08 02 A6 */	mflr r0
/* 80134C98 00131D78  90 01 00 14 */	stw r0, 0x14(r1)
/* 80134C9C 00131D7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80134CA0 00131D80  7C 7F 1B 78 */	mr r31, r3
/* 80134CA4 00131D84  88 03 00 10 */	lbz r0, 0x10(r3)
/* 80134CA8 00131D88  28 00 00 00 */	cmplwi r0, 0x0
/* 80134CAC 00131D8C  41 82 00 1C */	beq .L_80134CC8
/* 80134CB0 00131D90  4B FF FF 25 */	bl stop_talk__8ztaskboxFv
/* 80134CB4 00131D94  38 00 00 00 */	li r0, 0x0
/* 80134CB8 00131D98  7F E3 FB 78 */	mr r3, r31
/* 80134CBC 00131D9C  98 1F 00 10 */	stb r0, 0x10(r31)
/* 80134CC0 00131DA0  38 80 FF FF */	li r4, -0x1
/* 80134CC4 00131DA4  48 00 02 81 */	bl set_state__8ztaskboxFQ28ztaskbox10state_enum
.L_80134CC8:
/* 80134CC8 00131DA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80134CCC 00131DAC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80134CD0 00131DB0  7C 08 03 A6 */	mtlr r0
/* 80134CD4 00131DB4  38 21 00 10 */	addi r1, r1, 0x10
/* 80134CD8 00131DB8  4E 80 00 20 */	blr
.endfn disable__8ztaskboxFv

# ztaskbox::reset()
.fn reset__8ztaskboxFv, global
/* 80134CDC 00131DBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80134CE0 00131DC0  7C 08 02 A6 */	mflr r0
/* 80134CE4 00131DC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80134CE8 00131DC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80134CEC 00131DCC  7C 7F 1B 78 */	mr r31, r3
/* 80134CF0 00131DD0  4B FF FF A1 */	bl disable__8ztaskboxFv
/* 80134CF4 00131DD4  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 80134CF8 00131DD8  88 03 00 12 */	lbz r0, 0x12(r3)
/* 80134CFC 00131DDC  28 00 00 00 */	cmplwi r0, 0x0
/* 80134D00 00131DE0  41 82 00 0C */	beq .L_80134D0C
/* 80134D04 00131DE4  7F E3 FB 78 */	mr r3, r31
/* 80134D08 00131DE8  4B FF FF 51 */	bl enable__8ztaskboxFv
.L_80134D0C:
/* 80134D0C 00131DEC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80134D10 00131DF0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80134D14 00131DF4  7C 08 03 A6 */	mtlr r0
/* 80134D18 00131DF8  38 21 00 10 */	addi r1, r1, 0x10
/* 80134D1C 00131DFC  4E 80 00 20 */	blr
.endfn reset__8ztaskboxFv

# ztaskbox::initiate()
.fn initiate__8ztaskboxFv, global
/* 80134D20 00131E00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80134D24 00131E04  7C 08 02 A6 */	mflr r0
/* 80134D28 00131E08  90 01 00 14 */	stw r0, 0x14(r1)
/* 80134D2C 00131E0C  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80134D30 00131E10  2C 00 00 00 */	cmpwi r0, 0x0
/* 80134D34 00131E14  40 82 00 0C */	bne .L_80134D40
/* 80134D38 00131E18  38 80 00 01 */	li r4, 0x1
/* 80134D3C 00131E1C  48 00 02 09 */	bl set_state__8ztaskboxFQ28ztaskbox10state_enum
.L_80134D40:
/* 80134D40 00131E20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80134D44 00131E24  7C 08 03 A6 */	mtlr r0
/* 80134D48 00131E28  38 21 00 10 */	addi r1, r1, 0x10
/* 80134D4C 00131E2C  4E 80 00 20 */	blr
.endfn initiate__8ztaskboxFv

# ztaskbox::succeed()
.fn succeed__8ztaskboxFv, global
/* 80134D50 00131E30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80134D54 00131E34  7C 08 02 A6 */	mflr r0
/* 80134D58 00131E38  90 01 00 14 */	stw r0, 0x14(r1)
/* 80134D5C 00131E3C  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80134D60 00131E40  2C 00 00 00 */	cmpwi r0, 0x0
/* 80134D64 00131E44  41 82 00 14 */	beq .L_80134D78
/* 80134D68 00131E48  2C 00 00 01 */	cmpwi r0, 0x1
/* 80134D6C 00131E4C  41 82 00 0C */	beq .L_80134D78
/* 80134D70 00131E50  2C 00 00 02 */	cmpwi r0, 0x2
/* 80134D74 00131E54  40 82 00 0C */	bne .L_80134D80
.L_80134D78:
/* 80134D78 00131E58  38 80 00 03 */	li r4, 0x3
/* 80134D7C 00131E5C  48 00 01 C9 */	bl set_state__8ztaskboxFQ28ztaskbox10state_enum
.L_80134D80:
/* 80134D80 00131E60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80134D84 00131E64  7C 08 03 A6 */	mtlr r0
/* 80134D88 00131E68  38 21 00 10 */	addi r1, r1, 0x10
/* 80134D8C 00131E6C  4E 80 00 20 */	blr
.endfn succeed__8ztaskboxFv

# ztaskbox::fail()
.fn fail__8ztaskboxFv, global
/* 80134D90 00131E70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80134D94 00131E74  7C 08 02 A6 */	mflr r0
/* 80134D98 00131E78  90 01 00 14 */	stw r0, 0x14(r1)
/* 80134D9C 00131E7C  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80134DA0 00131E80  2C 00 00 00 */	cmpwi r0, 0x0
/* 80134DA4 00131E84  41 82 00 14 */	beq .L_80134DB8
/* 80134DA8 00131E88  2C 00 00 01 */	cmpwi r0, 0x1
/* 80134DAC 00131E8C  41 82 00 0C */	beq .L_80134DB8
/* 80134DB0 00131E90  2C 00 00 02 */	cmpwi r0, 0x2
/* 80134DB4 00131E94  40 82 00 0C */	bne .L_80134DC0
.L_80134DB8:
/* 80134DB8 00131E98  38 80 00 04 */	li r4, 0x4
/* 80134DBC 00131E9C  48 00 01 89 */	bl set_state__8ztaskboxFQ28ztaskbox10state_enum
.L_80134DC0:
/* 80134DC0 00131EA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80134DC4 00131EA4  7C 08 03 A6 */	mtlr r0
/* 80134DC8 00131EA8  38 21 00 10 */	addi r1, r1, 0x10
/* 80134DCC 00131EAC  4E 80 00 20 */	blr
.endfn fail__8ztaskboxFv

# ztaskbox::complete()
.fn complete__8ztaskboxFv, global
/* 80134DD0 00131EB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80134DD4 00131EB4  7C 08 02 A6 */	mflr r0
/* 80134DD8 00131EB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80134DDC 00131EBC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80134DE0 00131EC0  7C 7F 1B 78 */	mr r31, r3
/* 80134DE4 00131EC4  88 03 00 10 */	lbz r0, 0x10(r3)
/* 80134DE8 00131EC8  28 00 00 00 */	cmplwi r0, 0x0
/* 80134DEC 00131ECC  41 82 00 38 */	beq .L_80134E24
/* 80134DF0 00131ED0  38 80 FF FF */	li r4, -0x1
/* 80134DF4 00131ED4  38 00 00 00 */	li r0, 0x0
/* 80134DF8 00131ED8  90 9F 00 18 */	stw r4, 0x18(r31)
/* 80134DFC 00131EDC  7F E4 FB 78 */	mr r4, r31
/* 80134E00 00131EE0  38 A0 01 70 */	li r5, 0x170
/* 80134E04 00131EE4  98 1F 00 10 */	stb r0, 0x10(r31)
/* 80134E08 00131EE8  4B EE A8 D9 */	bl zEntEvent__FP5xBaseP5xBaseUi
/* 80134E0C 00131EEC  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 80134E10 00131EF0  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80134E14 00131EF4  4B F7 FC 29 */	bl zSceneFindObject__FUi
/* 80134E18 00131EF8  90 7F 00 20 */	stw r3, 0x20(r31)
/* 80134E1C 00131EFC  80 1F 00 20 */	lwz r0, 0x20(r31)
/* 80134E20 00131F00  28 00 00 00 */	cmplwi r0, 0x0
.L_80134E24:
/* 80134E24 00131F04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80134E28 00131F08  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80134E2C 00131F0C  7C 08 03 A6 */	mtlr r0
/* 80134E30 00131F10  38 21 00 10 */	addi r1, r1, 0x10
/* 80134E34 00131F14  4E 80 00 20 */	blr
.endfn complete__8ztaskboxFv

# ztaskbox::set_callback(ztaskbox::callback*)
.fn set_callback__8ztaskboxFPQ28ztaskbox8callback, global
/* 80134E38 00131F18  90 83 00 1C */	stw r4, 0x1c(r3)
/* 80134E3C 00131F1C  4E 80 00 20 */	blr
.endfn set_callback__8ztaskboxFPQ28ztaskbox8callback

# ztaskbox::init()
.fn init__8ztaskboxFv, global
/* 80134E40 00131F20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80134E44 00131F24  7C 08 02 A6 */	mflr r0
/* 80134E48 00131F28  90 01 00 14 */	stw r0, 0x14(r1)
/* 80134E4C 00131F2C  38 00 00 00 */	li r0, 0x0
/* 80134E50 00131F30  90 0D 96 24 */	stw r0, "shared__22@unnamed@zTaskBox_cpp@"@sda21(r13)
/* 80134E54 00131F34  88 0D 96 28 */	lbz r0, init$775@sda21(r13)
/* 80134E58 00131F38  7C 00 07 75 */	extsb. r0, r0
/* 80134E5C 00131F3C  40 82 00 18 */	bne .L_80134E74
/* 80134E60 00131F40  3C 60 80 32 */	lis r3, tcb$774@ha
/* 80134E64 00131F44  38 63 42 E8 */	addi r3, r3, tcb$774@l
/* 80134E68 00131F48  48 00 00 29 */	bl __ct__Q28ztaskbox13talk_callbackFv
/* 80134E6C 00131F4C  38 00 00 01 */	li r0, 0x1
/* 80134E70 00131F50  98 0D 96 28 */	stb r0, init$775@sda21(r13)
.L_80134E74:
/* 80134E74 00131F54  3C 60 80 32 */	lis r3, tcb$774@ha
/* 80134E78 00131F58  38 03 42 E8 */	addi r0, r3, tcb$774@l
/* 80134E7C 00131F5C  90 0D 96 20 */	stw r0, tcb__8ztaskbox@sda21(r13)
/* 80134E80 00131F60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80134E84 00131F64  7C 08 03 A6 */	mtlr r0
/* 80134E88 00131F68  38 21 00 10 */	addi r1, r1, 0x10
/* 80134E8C 00131F6C  4E 80 00 20 */	blr
.endfn init__8ztaskboxFv

# ztaskbox::talk_callback::talk_callback()
.fn __ct__Q28ztaskbox13talk_callbackFv, weak
/* 80134E90 00131F70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80134E94 00131F74  7C 08 02 A6 */	mflr r0
/* 80134E98 00131F78  90 01 00 14 */	stw r0, 0x14(r1)
/* 80134E9C 00131F7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80134EA0 00131F80  7C 7F 1B 78 */	mr r31, r3
/* 80134EA4 00131F84  4B FE 77 C5 */	bl __ct__Q28ztalkbox8callbackFv
/* 80134EA8 00131F88  3C 80 80 2A */	lis r4, __vt__Q28ztaskbox13talk_callback@ha
/* 80134EAC 00131F8C  7F E3 FB 78 */	mr r3, r31
/* 80134EB0 00131F90  38 04 8F A0 */	addi r0, r4, __vt__Q28ztaskbox13talk_callback@l
/* 80134EB4 00131F94  90 1F 00 00 */	stw r0, 0x0(r31)
/* 80134EB8 00131F98  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80134EBC 00131F9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80134EC0 00131FA0  7C 08 03 A6 */	mtlr r0
/* 80134EC4 00131FA4  38 21 00 10 */	addi r1, r1, 0x10
/* 80134EC8 00131FA8  4E 80 00 20 */	blr
.endfn __ct__Q28ztaskbox13talk_callbackFv

# ztaskbox::load(xBase&, xDynAsset&, unsigned long)
.fn load__8ztaskboxFR5xBaseR9xDynAssetUl, global
/* 80134ECC 00131FAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80134ED0 00131FB0  7C 08 02 A6 */	mflr r0
/* 80134ED4 00131FB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80134ED8 00131FB8  4B FF FA C5 */	bl load__8ztaskboxFRCQ28ztaskbox10asset_type
/* 80134EDC 00131FBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80134EE0 00131FC0  7C 08 03 A6 */	mtlr r0
/* 80134EE4 00131FC4  38 21 00 10 */	addi r1, r1, 0x10
/* 80134EE8 00131FC8  4E 80 00 20 */	blr
.endfn load__8ztaskboxFR5xBaseR9xDynAssetUl

# ztaskbox::exists(ztaskbox::state_enum)
.fn exists__8ztaskboxFQ28ztaskbox10state_enum, global
/* 80134EEC 00131FCC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80134EF0 00131FD0  7C 08 02 A6 */	mflr r0
/* 80134EF4 00131FD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80134EF8 00131FD8  54 80 10 3A */	slwi r0, r4, 2
/* 80134EFC 00131FDC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80134F00 00131FE0  3B E0 00 00 */	li r31, 0x0
/* 80134F04 00131FE4  80 63 00 14 */	lwz r3, 0x14(r3)
/* 80134F08 00131FE8  7C 63 02 14 */	add r3, r3, r0
/* 80134F0C 00131FEC  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 80134F10 00131FF0  28 03 00 00 */	cmplwi r3, 0x0
/* 80134F14 00131FF4  41 82 00 18 */	beq .L_80134F2C
/* 80134F18 00131FF8  38 80 00 00 */	li r4, 0x0
/* 80134F1C 00131FFC  4B F1 67 F1 */	bl xSTFindAsset__FUiPUi
/* 80134F20 00132000  28 03 00 00 */	cmplwi r3, 0x0
/* 80134F24 00132004  41 82 00 08 */	beq .L_80134F2C
/* 80134F28 00132008  3B E0 00 01 */	li r31, 0x1
.L_80134F2C:
/* 80134F2C 0013200C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80134F30 00132010  7F E3 FB 78 */	mr r3, r31
/* 80134F34 00132014  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80134F38 00132018  7C 08 03 A6 */	mtlr r0
/* 80134F3C 0013201C  38 21 00 10 */	addi r1, r1, 0x10
/* 80134F40 00132020  4E 80 00 20 */	blr
.endfn exists__8ztaskboxFQ28ztaskbox10state_enum

# ztaskbox::set_state(ztaskbox::state_enum)
.fn set_state__8ztaskboxFQ28ztaskbox10state_enum, global
/* 80134F44 00132024  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80134F48 00132028  7C 08 02 A6 */	mflr r0
/* 80134F4C 0013202C  2C 04 00 01 */	cmpwi r4, 0x1
/* 80134F50 00132030  90 01 00 14 */	stw r0, 0x14(r1)
/* 80134F54 00132034  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80134F58 00132038  7C 7F 1B 78 */	mr r31, r3
/* 80134F5C 0013203C  90 83 00 18 */	stw r4, 0x18(r3)
/* 80134F60 00132040  93 E3 00 20 */	stw r31, 0x20(r3)
/* 80134F64 00132044  41 82 00 40 */	beq .L_80134FA4
/* 80134F68 00132048  40 80 00 10 */	bge .L_80134F78
/* 80134F6C 0013204C  2C 04 00 00 */	cmpwi r4, 0x0
/* 80134F70 00132050  40 80 00 18 */	bge .L_80134F88
/* 80134F74 00132054  48 00 00 84 */	b .L_80134FF8
.L_80134F78:
/* 80134F78 00132058  2C 04 00 05 */	cmpwi r4, 0x5
/* 80134F7C 0013205C  41 82 00 60 */	beq .L_80134FDC
/* 80134F80 00132060  40 80 00 78 */	bge .L_80134FF8
/* 80134F84 00132064  48 00 00 3C */	b .L_80134FC0
.L_80134F88:
/* 80134F88 00132068  4B FF FF 65 */	bl exists__8ztaskboxFQ28ztaskbox10state_enum
/* 80134F8C 0013206C  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80134F90 00132070  40 82 00 70 */	bne .L_80135000
/* 80134F94 00132074  7F E3 FB 78 */	mr r3, r31
/* 80134F98 00132078  38 80 00 01 */	li r4, 0x1
/* 80134F9C 0013207C  4B FF FF A9 */	bl set_state__8ztaskboxFQ28ztaskbox10state_enum
/* 80134FA0 00132080  48 00 00 60 */	b .L_80135000
.L_80134FA4:
/* 80134FA4 00132084  4B FF FF 49 */	bl exists__8ztaskboxFQ28ztaskbox10state_enum
/* 80134FA8 00132088  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80134FAC 0013208C  40 82 00 54 */	bne .L_80135000
/* 80134FB0 00132090  7F E3 FB 78 */	mr r3, r31
/* 80134FB4 00132094  38 80 00 02 */	li r4, 0x2
/* 80134FB8 00132098  4B FF FF 8D */	bl set_state__8ztaskboxFQ28ztaskbox10state_enum
/* 80134FBC 0013209C  48 00 00 44 */	b .L_80135000
.L_80134FC0:
/* 80134FC0 001320A0  4B FF FF 2D */	bl exists__8ztaskboxFQ28ztaskbox10state_enum
/* 80134FC4 001320A4  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80134FC8 001320A8  40 82 00 38 */	bne .L_80135000
/* 80134FCC 001320AC  7F E3 FB 78 */	mr r3, r31
/* 80134FD0 001320B0  38 80 00 05 */	li r4, 0x5
/* 80134FD4 001320B4  4B FF FF 71 */	bl set_state__8ztaskboxFQ28ztaskbox10state_enum
/* 80134FD8 001320B8  48 00 00 28 */	b .L_80135000
.L_80134FDC:
/* 80134FDC 001320BC  4B FF FF 11 */	bl exists__8ztaskboxFQ28ztaskbox10state_enum
/* 80134FE0 001320C0  54 60 06 3F */	clrlwi. r0, r3, 24
/* 80134FE4 001320C4  40 82 00 1C */	bne .L_80135000
/* 80134FE8 001320C8  7F E3 FB 78 */	mr r3, r31
/* 80134FEC 001320CC  38 80 FF FF */	li r4, -0x1
/* 80134FF0 001320D0  4B FF FF 55 */	bl set_state__8ztaskboxFQ28ztaskbox10state_enum
/* 80134FF4 001320D4  48 00 00 0C */	b .L_80135000
.L_80134FF8:
/* 80134FF8 001320D8  7F E3 FB 78 */	mr r3, r31
/* 80134FFC 001320DC  4B FF FD D5 */	bl complete__8ztaskboxFv
.L_80135000:
/* 80135000 001320E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80135004 001320E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80135008 001320E8  7C 08 03 A6 */	mtlr r0
/* 8013500C 001320EC  38 21 00 10 */	addi r1, r1, 0x10
/* 80135010 001320F0  4E 80 00 20 */	blr
.endfn set_state__8ztaskboxFQ28ztaskbox10state_enum

# ztaskbox::on_talk_start()
.fn on_talk_start__8ztaskboxFv, global
/* 80135014 001320F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80135018 001320F8  7C 08 02 A6 */	mflr r0
/* 8013501C 001320FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80135020 00132100  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 80135024 00132104  28 03 00 00 */	cmplwi r3, 0x0
/* 80135028 00132108  41 82 00 14 */	beq .L_8013503C
/* 8013502C 0013210C  81 83 00 00 */	lwz r12, 0x0(r3)
/* 80135030 00132110  81 8C 00 08 */	lwz r12, 0x8(r12)
/* 80135034 00132114  7D 89 03 A6 */	mtctr r12
/* 80135038 00132118  4E 80 04 21 */	bctrl
.L_8013503C:
/* 8013503C 0013211C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80135040 00132120  7C 08 03 A6 */	mtlr r0
/* 80135044 00132124  38 21 00 10 */	addi r1, r1, 0x10
/* 80135048 00132128  4E 80 00 20 */	blr
.endfn on_talk_start__8ztaskboxFv

# ztaskbox::on_talk_stop(ztalkbox::answer_enum)
.fn on_talk_stop__8ztaskboxFQ28ztalkbox11answer_enum, global
/* 8013504C 0013212C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80135050 00132130  7C 08 02 A6 */	mflr r0
/* 80135054 00132134  90 01 00 14 */	stw r0, 0x14(r1)
/* 80135058 00132138  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013505C 0013213C  7C 7F 1B 78 */	mr r31, r3
/* 80135060 00132140  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80135064 00132144  2C 00 00 03 */	cmpwi r0, 0x3
/* 80135068 00132148  41 82 00 3C */	beq .L_801350A4
/* 8013506C 0013214C  40 80 00 1C */	bge .L_80135088
/* 80135070 00132150  2C 00 00 01 */	cmpwi r0, 0x1
/* 80135074 00132154  41 82 00 24 */	beq .L_80135098
/* 80135078 00132158  40 80 00 7C */	bge .L_801350F4
/* 8013507C 0013215C  2C 00 00 00 */	cmpwi r0, 0x0
/* 80135080 00132160  40 80 00 74 */	bge .L_801350F4
/* 80135084 00132164  48 00 00 54 */	b .L_801350D8
.L_80135088:
/* 80135088 00132168  2C 00 00 05 */	cmpwi r0, 0x5
/* 8013508C 0013216C  41 82 00 68 */	beq .L_801350F4
/* 80135090 00132170  40 80 00 48 */	bge .L_801350D8
/* 80135094 00132174  48 00 00 1C */	b .L_801350B0
.L_80135098:
/* 80135098 00132178  38 80 00 02 */	li r4, 0x2
/* 8013509C 0013217C  4B FF FE A9 */	bl set_state__8ztaskboxFQ28ztaskbox10state_enum
/* 801350A0 00132180  48 00 00 54 */	b .L_801350F4
.L_801350A4:
/* 801350A4 00132184  38 80 00 05 */	li r4, 0x5
/* 801350A8 00132188  4B FF FE 9D */	bl set_state__8ztaskboxFQ28ztaskbox10state_enum
/* 801350AC 0013218C  48 00 00 48 */	b .L_801350F4
.L_801350B0:
/* 801350B0 00132190  80 9F 00 14 */	lwz r4, 0x14(r31)
/* 801350B4 00132194  88 04 00 13 */	lbz r0, 0x13(r4)
/* 801350B8 00132198  28 00 00 00 */	cmplwi r0, 0x0
/* 801350BC 0013219C  41 82 00 10 */	beq .L_801350CC
/* 801350C0 001321A0  38 80 00 01 */	li r4, 0x1
/* 801350C4 001321A4  4B FF FE 81 */	bl set_state__8ztaskboxFQ28ztaskbox10state_enum
/* 801350C8 001321A8  48 00 00 2C */	b .L_801350F4
.L_801350CC:
/* 801350CC 001321AC  38 80 00 05 */	li r4, 0x5
/* 801350D0 001321B0  4B FF FE 75 */	bl set_state__8ztaskboxFQ28ztaskbox10state_enum
/* 801350D4 001321B4  48 00 00 20 */	b .L_801350F4
.L_801350D8:
/* 801350D8 001321B8  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 801350DC 001321BC  88 03 00 11 */	lbz r0, 0x11(r3)
/* 801350E0 001321C0  28 00 00 00 */	cmplwi r0, 0x0
/* 801350E4 001321C4  41 82 00 10 */	beq .L_801350F4
/* 801350E8 001321C8  7F E3 FB 78 */	mr r3, r31
/* 801350EC 001321CC  38 80 00 00 */	li r4, 0x0
/* 801350F0 001321D0  4B FF FE 55 */	bl set_state__8ztaskboxFQ28ztaskbox10state_enum
.L_801350F4:
/* 801350F4 001321D4  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 801350F8 001321D8  28 03 00 00 */	cmplwi r3, 0x0
/* 801350FC 001321DC  41 82 00 14 */	beq .L_80135110
/* 80135100 001321E0  81 83 00 00 */	lwz r12, 0x0(r3)
/* 80135104 001321E4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80135108 001321E8  7D 89 03 A6 */	mtctr r12
/* 8013510C 001321EC  4E 80 04 21 */	bctrl
.L_80135110:
/* 80135110 001321F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80135114 001321F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80135118 001321F8  7C 08 03 A6 */	mtlr r0
/* 8013511C 001321FC  38 21 00 10 */	addi r1, r1, 0x10
/* 80135120 00132200  4E 80 00 20 */	blr
.endfn on_talk_stop__8ztaskboxFQ28ztalkbox11answer_enum

# ztaskbox::get_text(unsigned int)
.fn get_text__8ztaskboxFUi, global
/* 80135124 00132204  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80135128 00132208  7C 08 02 A6 */	mflr r0
/* 8013512C 0013220C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80135130 00132210  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80135134 00132214  7C 7F 1B 78 */	mr r31, r3
/* 80135138 00132218  4B F7 F9 05 */	bl zSceneFindObject__FUi
/* 8013513C 0013221C  28 03 00 00 */	cmplwi r3, 0x0
/* 80135140 00132220  41 82 00 20 */	beq .L_80135160
/* 80135144 00132224  88 03 00 04 */	lbz r0, 0x4(r3)
/* 80135148 00132228  28 00 00 11 */	cmplwi r0, 0x11
/* 8013514C 0013222C  41 82 00 0C */	beq .L_80135158
/* 80135150 00132230  38 60 00 00 */	li r3, 0x0
/* 80135154 00132234  48 00 00 3C */	b .L_80135190
.L_80135158:
/* 80135158 00132238  4B EF 7D D5 */	bl get_any__6xGroupFv
/* 8013515C 0013223C  7C 7F 1B 78 */	mr r31, r3
.L_80135160:
/* 80135160 00132240  28 1F 00 00 */	cmplwi r31, 0x0
/* 80135164 00132244  40 82 00 0C */	bne .L_80135170
/* 80135168 00132248  38 60 00 00 */	li r3, 0x0
/* 8013516C 0013224C  48 00 00 24 */	b .L_80135190
.L_80135170:
/* 80135170 00132250  7F E3 FB 78 */	mr r3, r31
/* 80135174 00132254  38 80 00 00 */	li r4, 0x0
/* 80135178 00132258  4B F1 65 95 */	bl xSTFindAsset__FUiPUi
/* 8013517C 0013225C  28 03 00 00 */	cmplwi r3, 0x0
/* 80135180 00132260  40 82 00 0C */	bne .L_8013518C
/* 80135184 00132264  38 60 00 00 */	li r3, 0x0
/* 80135188 00132268  48 00 00 08 */	b .L_80135190
.L_8013518C:
/* 8013518C 0013226C  38 63 00 04 */	addi r3, r3, 0x4
.L_80135190:
/* 80135190 00132270  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80135194 00132274  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80135198 00132278  7C 08 03 A6 */	mtlr r0
/* 8013519C 0013227C  38 21 00 10 */	addi r1, r1, 0x10
/* 801351A0 00132280  4E 80 00 20 */	blr
.endfn get_text__8ztaskboxFUi

# ztaskbox::cb_dispatch(xBase*, xBase*, unsigned int, const float*, xBase*)
.fn cb_dispatch__8ztaskboxFP5xBaseP5xBaseUiPCfP5xBase, global
/* 801351A4 00132284  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801351A8 00132288  7C 08 02 A6 */	mflr r0
/* 801351AC 0013228C  2C 05 01 6B */	cmpwi r5, 0x16b
/* 801351B0 00132290  90 01 00 14 */	stw r0, 0x14(r1)
/* 801351B4 00132294  41 82 00 64 */	beq .L_80135218
/* 801351B8 00132298  40 80 00 28 */	bge .L_801351E0
/* 801351BC 0013229C  2C 05 01 4F */	cmpwi r5, 0x14f
/* 801351C0 001322A0  41 82 00 3C */	beq .L_801351FC
/* 801351C4 001322A4  40 80 00 10 */	bge .L_801351D4
/* 801351C8 001322A8  2C 05 00 0A */	cmpwi r5, 0xa
/* 801351CC 001322AC  41 82 00 24 */	beq .L_801351F0
/* 801351D0 001322B0  48 00 00 68 */	b .L_80135238
.L_801351D4:
/* 801351D4 001322B4  2C 05 01 51 */	cmpwi r5, 0x151
/* 801351D8 001322B8  40 80 00 60 */	bge .L_80135238
/* 801351DC 001322BC  48 00 00 30 */	b .L_8013520C
.L_801351E0:
/* 801351E0 001322C0  2C 05 01 6D */	cmpwi r5, 0x16d
/* 801351E4 001322C4  41 82 00 4C */	beq .L_80135230
/* 801351E8 001322C8  41 80 00 3C */	blt .L_80135224
/* 801351EC 001322CC  48 00 00 4C */	b .L_80135238
.L_801351F0:
/* 801351F0 001322D0  7C 83 23 78 */	mr r3, r4
/* 801351F4 001322D4  4B FF FA E9 */	bl reset__8ztaskboxFv
/* 801351F8 001322D8  48 00 00 40 */	b .L_80135238
.L_801351FC:
/* 801351FC 001322DC  7C 83 23 78 */	mr r3, r4
/* 80135200 001322E0  38 80 00 00 */	li r4, 0x0
/* 80135204 001322E4  4B FF F8 C5 */	bl start_talk__8ztaskboxFP10zNPCCommon
/* 80135208 001322E8  48 00 00 30 */	b .L_80135238
.L_8013520C:
/* 8013520C 001322EC  7C 83 23 78 */	mr r3, r4
/* 80135210 001322F0  4B FF F9 C5 */	bl stop_talk__8ztaskboxFv
/* 80135214 001322F4  48 00 00 24 */	b .L_80135238
.L_80135218:
/* 80135218 001322F8  7C 83 23 78 */	mr r3, r4
/* 8013521C 001322FC  4B FF FB 05 */	bl initiate__8ztaskboxFv
/* 80135220 00132300  48 00 00 18 */	b .L_80135238
.L_80135224:
/* 80135224 00132304  7C 83 23 78 */	mr r3, r4
/* 80135228 00132308  4B FF FB 29 */	bl succeed__8ztaskboxFv
/* 8013522C 0013230C  48 00 00 0C */	b .L_80135238
.L_80135230:
/* 80135230 00132310  7C 83 23 78 */	mr r3, r4
/* 80135234 00132314  4B FF FB 5D */	bl fail__8ztaskboxFv
.L_80135238:
/* 80135238 00132318  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013523C 0013231C  38 60 00 01 */	li r3, 0x1
/* 80135240 00132320  7C 08 03 A6 */	mtlr r0
/* 80135244 00132324  38 21 00 10 */	addi r1, r1, 0x10
/* 80135248 00132328  4E 80 00 20 */	blr
.endfn cb_dispatch__8ztaskboxFP5xBaseP5xBaseUiPCfP5xBase

# ztaskbox::talk_callback::on_start()
.fn on_start__Q28ztaskbox13talk_callbackFv, weak
/* 8013524C 0013232C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80135250 00132330  7C 08 02 A6 */	mflr r0
/* 80135254 00132334  90 01 00 14 */	stw r0, 0x14(r1)
/* 80135258 00132338  80 63 00 04 */	lwz r3, 0x4(r3)
/* 8013525C 0013233C  4B FF FD B9 */	bl on_talk_start__8ztaskboxFv
/* 80135260 00132340  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80135264 00132344  7C 08 03 A6 */	mtlr r0
/* 80135268 00132348  38 21 00 10 */	addi r1, r1, 0x10
/* 8013526C 0013234C  4E 80 00 20 */	blr
.endfn on_start__Q28ztaskbox13talk_callbackFv

# ztaskbox::talk_callback::on_stop()
.fn on_stop__Q28ztaskbox13talk_callbackFv, weak
/* 80135270 00132350  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80135274 00132354  7C 08 02 A6 */	mflr r0
/* 80135278 00132358  7C 64 1B 78 */	mr r4, r3
/* 8013527C 0013235C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80135280 00132360  80 63 00 04 */	lwz r3, 0x4(r3)
/* 80135284 00132364  80 84 00 08 */	lwz r4, 0x8(r4)
/* 80135288 00132368  4B FF FD C5 */	bl on_talk_stop__8ztaskboxFQ28ztalkbox11answer_enum
/* 8013528C 0013236C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80135290 00132370  7C 08 03 A6 */	mtlr r0
/* 80135294 00132374  38 21 00 10 */	addi r1, r1, 0x10
/* 80135298 00132378  4E 80 00 20 */	blr
.endfn on_stop__Q28ztaskbox13talk_callbackFv

# ztaskbox::talk_callback::on_answer(ztalkbox::answer_enum)
.fn on_answer__Q28ztaskbox13talk_callbackFQ28ztalkbox11answer_enum, weak
/* 8013529C 0013237C  90 83 00 08 */	stw r4, 0x8(r3)
/* 801352A0 00132380  4E 80 00 20 */	blr
.endfn on_answer__Q28ztaskbox13talk_callbackFQ28ztalkbox11answer_enum

# 0x80298FA0 - 0x80298FB8
.data
.balign 8

# ztaskbox::talk_callback::__vtable
.obj __vt__Q28ztaskbox13talk_callback, weak
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte on_signal__Q28ztalkbox8callbackFUi
	.4byte on_start__Q28ztaskbox13talk_callbackFv
	.4byte on_stop__Q28ztaskbox13talk_callbackFv
	.4byte on_answer__Q28ztaskbox13talk_callbackFQ28ztalkbox11answer_enum
.endobj __vt__Q28ztaskbox13talk_callback

# 0x803242E8 - 0x803242F8
.section .bss, "wa", @nobits
.balign 8

.obj tcb$774, local
	.skip 0xC
.endobj tcb$774
	.skip 0x4

# 0x803CBF20 - 0x803CBF30
.section .sbss, "wa", @nobits
.balign 8

# ztaskbox::tcb
.obj tcb__8ztaskbox, global
	.skip 0x4
.endobj tcb__8ztaskbox

# @unnamed@zTaskBox_cpp@::shared
.obj "shared__22@unnamed@zTaskBox_cpp@", local
	.skip 0x4
.endobj "shared__22@unnamed@zTaskBox_cpp@"

.obj init$775, local
	.skip 0x1
.endobj init$775
	.skip 0x7
