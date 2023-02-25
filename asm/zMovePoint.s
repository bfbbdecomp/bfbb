.include "macros.inc"
.file "zMovePoint.cpp"

# 0x800A6BF8 - 0x800A6E94
.text
.balign 4

# zMovePoint_GetMemPool(int)
.fn zMovePoint_GetMemPool__Fi, global
/* 800A6BF8 000A3CD8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A6BFC 000A3CDC  7C 08 02 A6 */	mflr r0
/* 800A6C00 000A3CE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A6C04 000A3CE4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800A6C08 000A3CE8  7C 7F 1B 79 */	mr. r31, r3
/* 800A6C0C 000A3CEC  41 82 00 18 */	beq .L_800A6C24
/* 800A6C10 000A3CF0  1C 9F 00 30 */	mulli r4, r31, 0x30
/* 800A6C14 000A3CF4  80 6D 89 E0 */	lwz r3, gActiveHeap@sda21(r13)
/* 800A6C18 000A3CF8  38 A0 00 00 */	li r5, 0x0
/* 800A6C1C 000A3CFC  4B F8 CD 25 */	bl xMemAlloc__FUiUii
/* 800A6C20 000A3D00  48 00 00 08 */	b .L_800A6C28
.L_800A6C24:
/* 800A6C24 000A3D04  38 60 00 00 */	li r3, 0x0
.L_800A6C28:
/* 800A6C28 000A3D08  90 6D 90 50 */	stw r3, g_mvpt_list@sda21(r13)
/* 800A6C2C 000A3D0C  93 ED 90 54 */	stw r31, g_mvpt_cnt@sda21(r13)
/* 800A6C30 000A3D10  80 6D 90 50 */	lwz r3, g_mvpt_list@sda21(r13)
/* 800A6C34 000A3D14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800A6C38 000A3D18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A6C3C 000A3D1C  7C 08 03 A6 */	mtlr r0
/* 800A6C40 000A3D20  38 21 00 10 */	addi r1, r1, 0x10
/* 800A6C44 000A3D24  4E 80 00 20 */	blr
.endfn zMovePoint_GetMemPool__Fi

# zMovePointInit(zMovePoint*, xMovePointAsset*)
.fn zMovePointInit__FP10zMovePointP15xMovePointAsset, global
/* 800A6C48 000A3D28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A6C4C 000A3D2C  7C 08 02 A6 */	mflr r0
/* 800A6C50 000A3D30  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A6C54 000A3D34  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800A6C58 000A3D38  7C 9F 23 78 */	mr r31, r4
/* 800A6C5C 000A3D3C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 800A6C60 000A3D40  7C 7E 1B 78 */	mr r30, r3
/* 800A6C64 000A3D44  4B F8 E8 31 */	bl xMovePointInit__FP10xMovePointP15xMovePointAsset
/* 800A6C68 000A3D48  3C 60 80 0A */	lis r3, zMovePointEventCB__FP5xBaseP5xBaseUiPCfP5xBase@ha
/* 800A6C6C 000A3D4C  38 03 6D 88 */	addi r0, r3, zMovePointEventCB__FP5xBaseP5xBaseUiPCfP5xBase@l
/* 800A6C70 000A3D50  90 1E 00 0C */	stw r0, 0xc(r30)
/* 800A6C74 000A3D54  88 1E 00 05 */	lbz r0, 0x5(r30)
/* 800A6C78 000A3D58  28 00 00 00 */	cmplwi r0, 0x0
/* 800A6C7C 000A3D5C  41 82 00 1C */	beq .L_800A6C98
/* 800A6C80 000A3D60  A0 1F 00 1A */	lhz r0, 0x1a(r31)
/* 800A6C84 000A3D64  54 03 10 3A */	slwi r3, r0, 2
/* 800A6C88 000A3D68  38 03 00 28 */	addi r0, r3, 0x28
/* 800A6C8C 000A3D6C  7C 1F 02 14 */	add r0, r31, r0
/* 800A6C90 000A3D70  90 1E 00 08 */	stw r0, 0x8(r30)
/* 800A6C94 000A3D74  48 00 00 0C */	b .L_800A6CA0
.L_800A6C98:
/* 800A6C98 000A3D78  38 00 00 00 */	li r0, 0x0
/* 800A6C9C 000A3D7C  90 1E 00 08 */	stw r0, 0x8(r30)
.L_800A6CA0:
/* 800A6CA0 000A3D80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A6CA4 000A3D84  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800A6CA8 000A3D88  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 800A6CAC 000A3D8C  7C 08 03 A6 */	mtlr r0
/* 800A6CB0 000A3D90  38 21 00 10 */	addi r1, r1, 0x10
/* 800A6CB4 000A3D94  4E 80 00 20 */	blr
.endfn zMovePointInit__FP10zMovePointP15xMovePointAsset

# zMovePoint_GetInst(int)
.fn zMovePoint_GetInst__Fi, global
/* 800A6CB8 000A3D98  1C 03 00 30 */	mulli r0, r3, 0x30
/* 800A6CBC 000A3D9C  80 6D 90 50 */	lwz r3, g_mvpt_list@sda21(r13)
/* 800A6CC0 000A3DA0  7C 63 02 14 */	add r3, r3, r0
/* 800A6CC4 000A3DA4  4E 80 00 20 */	blr
.endfn zMovePoint_GetInst__Fi

# zMovePointSetup(zMovePoint*, zScene*)
.fn zMovePointSetup__FP10zMovePointP6zScene, global
/* 800A6CC8 000A3DA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A6CCC 000A3DAC  7C 08 02 A6 */	mflr r0
/* 800A6CD0 000A3DB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A6CD4 000A3DB4  4B F8 E8 D1 */	bl xMovePointSetup__FP10xMovePointP6xScene
/* 800A6CD8 000A3DB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A6CDC 000A3DBC  7C 08 03 A6 */	mtlr r0
/* 800A6CE0 000A3DC0  38 21 00 10 */	addi r1, r1, 0x10
/* 800A6CE4 000A3DC4  4E 80 00 20 */	blr
.endfn zMovePointSetup__FP10zMovePointP6zScene

# zMovePoint_From_xAssetID(unsigned int)
.fn zMovePoint_From_xAssetID__FUi, global
/* 800A6CE8 000A3DC8  80 0D 90 54 */	lwz r0, g_mvpt_cnt@sda21(r13)
/* 800A6CEC 000A3DCC  38 C0 00 00 */	li r6, 0x0
/* 800A6CF0 000A3DD0  80 AD 90 50 */	lwz r5, g_mvpt_list@sda21(r13)
/* 800A6CF4 000A3DD4  7C 09 03 A6 */	mtctr r0
/* 800A6CF8 000A3DD8  2C 00 00 00 */	cmpwi r0, 0x0
/* 800A6CFC 000A3DDC  40 81 00 24 */	ble .L_800A6D20
.L_800A6D00:
/* 800A6D00 000A3DE0  80 85 00 10 */	lwz r4, 0x10(r5)
/* 800A6D04 000A3DE4  80 04 00 00 */	lwz r0, 0x0(r4)
/* 800A6D08 000A3DE8  7C 00 18 40 */	cmplw r0, r3
/* 800A6D0C 000A3DEC  40 82 00 0C */	bne .L_800A6D18
/* 800A6D10 000A3DF0  7C A6 2B 78 */	mr r6, r5
/* 800A6D14 000A3DF4  48 00 00 0C */	b .L_800A6D20
.L_800A6D18:
/* 800A6D18 000A3DF8  38 A5 00 30 */	addi r5, r5, 0x30
/* 800A6D1C 000A3DFC  42 00 FF E4 */	bdnz .L_800A6D00
.L_800A6D20:
/* 800A6D20 000A3E00  7C C3 33 78 */	mr r3, r6
/* 800A6D24 000A3E04  4E 80 00 20 */	blr
.endfn zMovePoint_From_xAssetID__FUi

# zMovePointSave(zMovePoint*, xSerial*)
.fn zMovePointSave__FP10zMovePointP7xSerial, global
/* 800A6D28 000A3E08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A6D2C 000A3E0C  7C 08 02 A6 */	mflr r0
/* 800A6D30 000A3E10  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A6D34 000A3E14  4B F8 E7 E9 */	bl xMovePointSave__FP10xMovePointP7xSerial
/* 800A6D38 000A3E18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A6D3C 000A3E1C  7C 08 03 A6 */	mtlr r0
/* 800A6D40 000A3E20  38 21 00 10 */	addi r1, r1, 0x10
/* 800A6D44 000A3E24  4E 80 00 20 */	blr
.endfn zMovePointSave__FP10zMovePointP7xSerial

# zMovePointLoad(zMovePoint*, xSerial*)
.fn zMovePointLoad__FP10zMovePointP7xSerial, global
/* 800A6D48 000A3E28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A6D4C 000A3E2C  7C 08 02 A6 */	mflr r0
/* 800A6D50 000A3E30  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A6D54 000A3E34  4B F8 E7 E9 */	bl xMovePointLoad__FP10xMovePointP7xSerial
/* 800A6D58 000A3E38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A6D5C 000A3E3C  7C 08 03 A6 */	mtlr r0
/* 800A6D60 000A3E40  38 21 00 10 */	addi r1, r1, 0x10
/* 800A6D64 000A3E44  4E 80 00 20 */	blr
.endfn zMovePointLoad__FP10zMovePointP7xSerial

# zMovePointReset(zMovePoint*)
.fn zMovePointReset__FP10zMovePoint, global
/* 800A6D68 000A3E48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A6D6C 000A3E4C  7C 08 02 A6 */	mflr r0
/* 800A6D70 000A3E50  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A6D74 000A3E54  4B F8 E7 E9 */	bl xMovePointReset__FP10xMovePoint
/* 800A6D78 000A3E58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A6D7C 000A3E5C  7C 08 03 A6 */	mtlr r0
/* 800A6D80 000A3E60  38 21 00 10 */	addi r1, r1, 0x10
/* 800A6D84 000A3E64  4E 80 00 20 */	blr
.endfn zMovePointReset__FP10zMovePoint

# zMovePointEventCB(xBase*, xBase*, unsigned int, const float*, xBase*)
.fn zMovePointEventCB__FP5xBaseP5xBaseUiPCfP5xBase, global
/* 800A6D88 000A3E68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A6D8C 000A3E6C  7C 08 02 A6 */	mflr r0
/* 800A6D90 000A3E70  2C 05 00 26 */	cmpwi r5, 0x26
/* 800A6D94 000A3E74  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A6D98 000A3E78  41 82 00 38 */	beq .L_800A6DD0
/* 800A6D9C 000A3E7C  40 80 00 1C */	bge .L_800A6DB8
/* 800A6DA0 000A3E80  2C 05 00 1F */	cmpwi r5, 0x1f
/* 800A6DA4 000A3E84  41 82 00 7C */	beq .L_800A6E20
/* 800A6DA8 000A3E88  40 80 00 78 */	bge .L_800A6E20
/* 800A6DAC 000A3E8C  2C 05 00 0A */	cmpwi r5, 0xa
/* 800A6DB0 000A3E90  41 82 00 38 */	beq .L_800A6DE8
/* 800A6DB4 000A3E94  48 00 00 6C */	b .L_800A6E20
.L_800A6DB8:
/* 800A6DB8 000A3E98  2C 05 02 0F */	cmpwi r5, 0x20f
/* 800A6DBC 000A3E9C  41 82 00 38 */	beq .L_800A6DF4
/* 800A6DC0 000A3EA0  40 80 00 60 */	bge .L_800A6E20
/* 800A6DC4 000A3EA4  2C 05 00 28 */	cmpwi r5, 0x28
/* 800A6DC8 000A3EA8  40 80 00 58 */	bge .L_800A6E20
/* 800A6DCC 000A3EAC  48 00 00 10 */	b .L_800A6DDC
.L_800A6DD0:
/* 800A6DD0 000A3EB0  38 00 00 01 */	li r0, 0x1
/* 800A6DD4 000A3EB4  98 04 00 24 */	stb r0, 0x24(r4)
/* 800A6DD8 000A3EB8  48 00 00 48 */	b .L_800A6E20
.L_800A6DDC:
/* 800A6DDC 000A3EBC  38 00 00 00 */	li r0, 0x0
/* 800A6DE0 000A3EC0  98 04 00 24 */	stb r0, 0x24(r4)
/* 800A6DE4 000A3EC4  48 00 00 3C */	b .L_800A6E20
.L_800A6DE8:
/* 800A6DE8 000A3EC8  7C 83 23 78 */	mr r3, r4
/* 800A6DEC 000A3ECC  4B FF FF 7D */	bl zMovePointReset__FP10zMovePoint
/* 800A6DF0 000A3ED0  48 00 00 30 */	b .L_800A6E20
.L_800A6DF4:
/* 800A6DF4 000A3ED4  80 64 00 14 */	lwz r3, 0x14(r4)
/* 800A6DF8 000A3ED8  28 03 00 00 */	cmplwi r3, 0x0
/* 800A6DFC 000A3EDC  41 82 00 24 */	beq .L_800A6E20
/* 800A6E00 000A3EE0  C0 26 00 00 */	lfs f1, 0x0(r6)
/* 800A6E04 000A3EE4  C0 02 93 C0 */	lfs f0, "@775"@sda21(r2)
/* 800A6E08 000A3EE8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A6E0C 000A3EEC  40 80 00 10 */	bge .L_800A6E1C
/* 800A6E10 000A3EF0  C0 22 93 C4 */	lfs f1, "@776"@sda21(r2)
/* 800A6E14 000A3EF4  48 0D A9 E5 */	bl NPCC_MakeASplash__FPC5xVec3f
/* 800A6E18 000A3EF8  48 00 00 08 */	b .L_800A6E20
.L_800A6E1C:
/* 800A6E1C 000A3EFC  48 0D A9 DD */	bl NPCC_MakeASplash__FPC5xVec3f
.L_800A6E20:
/* 800A6E20 000A3F00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A6E24 000A3F04  38 60 00 01 */	li r3, 0x1
/* 800A6E28 000A3F08  7C 08 03 A6 */	mtlr r0
/* 800A6E2C 000A3F0C  38 21 00 10 */	addi r1, r1, 0x10
/* 800A6E30 000A3F10  4E 80 00 20 */	blr
.endfn zMovePointEventCB__FP5xBaseP5xBaseUiPCfP5xBase

# zMovePointGetNext(const zMovePoint*, const zMovePoint*, zMovePoint**, xVec3*)
.fn zMovePointGetNext__FPC10zMovePointPC10zMovePointPP10zMovePointP5xVec3, global
/* 800A6E34 000A3F14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A6E38 000A3F18  7C 08 02 A6 */	mflr r0
/* 800A6E3C 000A3F1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A6E40 000A3F20  4B F8 E9 79 */	bl xMovePointGetNext__FPC10xMovePointPC10xMovePointPP10xMovePointP5xVec3
/* 800A6E44 000A3F24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A6E48 000A3F28  7C 08 03 A6 */	mtlr r0
/* 800A6E4C 000A3F2C  38 21 00 10 */	addi r1, r1, 0x10
/* 800A6E50 000A3F30  4E 80 00 20 */	blr
.endfn zMovePointGetNext__FPC10zMovePointPC10zMovePointPP10zMovePointP5xVec3

# zMovePointGetPos(const zMovePoint*)
.fn zMovePointGetPos__FPC10zMovePoint, global
/* 800A6E54 000A3F34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A6E58 000A3F38  7C 08 02 A6 */	mflr r0
/* 800A6E5C 000A3F3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A6E60 000A3F40  4B F8 EA 85 */	bl xMovePointGetPos__FPC10xMovePoint
/* 800A6E64 000A3F44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A6E68 000A3F48  7C 08 03 A6 */	mtlr r0
/* 800A6E6C 000A3F4C  38 21 00 10 */	addi r1, r1, 0x10
/* 800A6E70 000A3F50  4E 80 00 20 */	blr
.endfn zMovePointGetPos__FPC10zMovePoint

# zMovePointGetDelay(const zMovePoint*)
.fn zMovePointGetDelay__FPC10zMovePoint, global
/* 800A6E74 000A3F54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A6E78 000A3F58  7C 08 02 A6 */	mflr r0
/* 800A6E7C 000A3F5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A6E80 000A3F60  48 00 00 15 */	bl xMovePointGetDelay__FPC10xMovePoint
/* 800A6E84 000A3F64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A6E88 000A3F68  7C 08 03 A6 */	mtlr r0
/* 800A6E8C 000A3F6C  38 21 00 10 */	addi r1, r1, 0x10
/* 800A6E90 000A3F70  4E 80 00 20 */	blr
.endfn zMovePointGetDelay__FPC10zMovePoint

# 0x800A6E94 - 0x800A6E9C
.section .text, "ax", unique, 1
.balign 4

# xMovePointGetDelay(const xMovePoint*)
.fn xMovePointGetDelay__FPC10xMovePoint, weak
/* 800A6E94 000A3F74  C0 23 00 28 */	lfs f1, 0x28(r3)
/* 800A6E98 000A3F78  4E 80 00 20 */	blr
.endfn xMovePointGetDelay__FPC10xMovePoint

# 0x803CB950 - 0x803CB958
.section .sbss, "wa", @nobits
.balign 8

.obj g_mvpt_list, local
	.skip 0x4
.endobj g_mvpt_list

.obj g_mvpt_cnt, local
	.skip 0x4
.endobj g_mvpt_cnt

# 0x803CDD40 - 0x803CDD48
.section .sdata2, "a"
.balign 8

.obj "@775", local
	.4byte 0x3727C5AC
.endobj "@775"

.obj "@776", local
	.4byte 0xBF800000
.endobj "@776"
