.include "macros.inc"
.file "zPortal.cpp"

# 0x800AC8A0 - 0x800AC9E8
.text
.balign 4

# zPortalInit(void*, void*)
.fn zPortalInit__FPvPv, global
/* 800AC8A0 000A9980  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AC8A4 000A9984  7C 08 02 A6 */	mflr r0
/* 800AC8A8 000A9988  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AC8AC 000A998C  48 00 00 15 */	bl zPortalInit__FP8_zPortalP12xPortalAsset
/* 800AC8B0 000A9990  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AC8B4 000A9994  7C 08 03 A6 */	mtlr r0
/* 800AC8B8 000A9998  38 21 00 10 */	addi r1, r1, 0x10
/* 800AC8BC 000A999C  4E 80 00 20 */	blr
.endfn zPortalInit__FPvPv

# zPortalInit(_zPortal*, xPortalAsset*)
.fn zPortalInit__FP8_zPortalP12xPortalAsset, global
/* 800AC8C0 000A99A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AC8C4 000A99A4  7C 08 02 A6 */	mflr r0
/* 800AC8C8 000A99A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AC8CC 000A99AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800AC8D0 000A99B0  7C 9F 23 78 */	mr r31, r4
/* 800AC8D4 000A99B4  93 C1 00 08 */	stw r30, 0x8(r1)
/* 800AC8D8 000A99B8  7C 7E 1B 78 */	mr r30, r3
/* 800AC8DC 000A99BC  4B F5 CB 25 */	bl xBaseInit__FP5xBaseP10xBaseAsset
/* 800AC8E0 000A99C0  3C 60 80 0B */	lis r3, zPortalEventCB__FP5xBaseP5xBaseUiPCfP5xBase@ha
/* 800AC8E4 000A99C4  93 FE 00 10 */	stw r31, 0x10(r30)
/* 800AC8E8 000A99C8  38 03 C9 84 */	addi r0, r3, zPortalEventCB__FP5xBaseP5xBaseUiPCfP5xBase@l
/* 800AC8EC 000A99CC  90 1E 00 0C */	stw r0, 0xc(r30)
/* 800AC8F0 000A99D0  88 1E 00 05 */	lbz r0, 0x5(r30)
/* 800AC8F4 000A99D4  28 00 00 00 */	cmplwi r0, 0x0
/* 800AC8F8 000A99D8  41 82 00 10 */	beq .L_800AC908
/* 800AC8FC 000A99DC  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 800AC900 000A99E0  38 03 00 18 */	addi r0, r3, 0x18
/* 800AC904 000A99E4  90 1E 00 08 */	stw r0, 0x8(r30)
.L_800AC908:
/* 800AC908 000A99E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AC90C 000A99EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800AC910 000A99F0  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 800AC914 000A99F4  7C 08 03 A6 */	mtlr r0
/* 800AC918 000A99F8  38 21 00 10 */	addi r1, r1, 0x10
/* 800AC91C 000A99FC  4E 80 00 20 */	blr
.endfn zPortalInit__FP8_zPortalP12xPortalAsset

# zPortalReset(_zPortal*)
.fn zPortalReset__FP8_zPortal, global
/* 800AC920 000A9A00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AC924 000A9A04  7C 08 02 A6 */	mflr r0
/* 800AC928 000A9A08  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AC92C 000A9A0C  80 83 00 10 */	lwz r4, 0x10(r3)
/* 800AC930 000A9A10  4B F5 CB C9 */	bl xBaseReset__FP5xBaseP10xBaseAsset
/* 800AC934 000A9A14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AC938 000A9A18  7C 08 03 A6 */	mtlr r0
/* 800AC93C 000A9A1C  38 21 00 10 */	addi r1, r1, 0x10
/* 800AC940 000A9A20  4E 80 00 20 */	blr
.endfn zPortalReset__FP8_zPortal

# zPortalSave(_zPortal*, xSerial*)
.fn zPortalSave__FP8_zPortalP7xSerial, global
/* 800AC944 000A9A24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AC948 000A9A28  7C 08 02 A6 */	mflr r0
/* 800AC94C 000A9A2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AC950 000A9A30  4B F5 CA FD */	bl xBaseSave__FP5xBaseP7xSerial
/* 800AC954 000A9A34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AC958 000A9A38  7C 08 03 A6 */	mtlr r0
/* 800AC95C 000A9A3C  38 21 00 10 */	addi r1, r1, 0x10
/* 800AC960 000A9A40  4E 80 00 20 */	blr
.endfn zPortalSave__FP8_zPortalP7xSerial

# zPortalLoad(_zPortal*, xSerial*)
.fn zPortalLoad__FP8_zPortalP7xSerial, global
/* 800AC964 000A9A44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AC968 000A9A48  7C 08 02 A6 */	mflr r0
/* 800AC96C 000A9A4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AC970 000A9A50  4B F5 CB 2D */	bl xBaseLoad__FP5xBaseP7xSerial
/* 800AC974 000A9A54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AC978 000A9A58  7C 08 03 A6 */	mtlr r0
/* 800AC97C 000A9A5C  38 21 00 10 */	addi r1, r1, 0x10
/* 800AC980 000A9A60  4E 80 00 20 */	blr
.endfn zPortalLoad__FP8_zPortalP7xSerial

# zPortalEventCB(xBase*, xBase*, unsigned int, const float*, xBase*)
.fn zPortalEventCB__FP5xBaseP5xBaseUiPCfP5xBase, global
/* 800AC984 000A9A64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AC988 000A9A68  7C 08 02 A6 */	mflr r0
/* 800AC98C 000A9A6C  2C 05 00 10 */	cmpwi r5, 0x10
/* 800AC990 000A9A70  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AC994 000A9A74  41 82 00 20 */	beq .L_800AC9B4
/* 800AC998 000A9A78  40 80 00 3C */	bge .L_800AC9D4
/* 800AC99C 000A9A7C  2C 05 00 0A */	cmpwi r5, 0xa
/* 800AC9A0 000A9A80  41 82 00 08 */	beq .L_800AC9A8
/* 800AC9A4 000A9A84  48 00 00 30 */	b .L_800AC9D4
.L_800AC9A8:
/* 800AC9A8 000A9A88  7C 83 23 78 */	mr r3, r4
/* 800AC9AC 000A9A8C  4B FF FF 75 */	bl zPortalReset__FP8_zPortal
/* 800AC9B0 000A9A90  48 00 00 24 */	b .L_800AC9D4
.L_800AC9B4:
/* 800AC9B4 000A9A94  3C 60 80 3C */	lis r3, globals@ha
/* 800AC9B8 000A9A98  38 63 05 58 */	addi r3, r3, globals@l
/* 800AC9BC 000A9A9C  80 03 16 B0 */	lwz r0, 0x16b0(r3)
/* 800AC9C0 000A9AA0  28 00 00 00 */	cmplwi r0, 0x0
/* 800AC9C4 000A9AA4  41 82 00 10 */	beq .L_800AC9D4
/* 800AC9C8 000A9AA8  7C 83 23 78 */	mr r3, r4
/* 800AC9CC 000A9AAC  38 80 00 00 */	li r4, 0x0
/* 800AC9D0 000A9AB0  48 00 5A 29 */	bl zSceneSwitch__FP8_zPortali
.L_800AC9D4:
/* 800AC9D4 000A9AB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AC9D8 000A9AB8  38 60 00 01 */	li r3, 0x1
/* 800AC9DC 000A9ABC  7C 08 03 A6 */	mtlr r0
/* 800AC9E0 000A9AC0  38 21 00 10 */	addi r1, r1, 0x10
/* 800AC9E4 000A9AC4  4E 80 00 20 */	blr
.endfn zPortalEventCB__FP5xBaseP5xBaseUiPCfP5xBase
