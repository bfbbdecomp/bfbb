.include "macros.inc"
.file "xJSP.cpp"

# 0x80122C04 - 0x80123228
.text
.balign 4

# CountAtomicCB(RpAtomic*, void*)
.fn CountAtomicCB__FP8RpAtomicPv, local
/* 80122C04 0011FCE4  80 AD 95 3C */	lwz r5, sAtomicStartCount@sda21(r13)
/* 80122C08 0011FCE8  38 05 00 01 */	addi r0, r5, 0x1
/* 80122C0C 0011FCEC  90 0D 95 3C */	stw r0, sAtomicStartCount@sda21(r13)
/* 80122C10 0011FCF0  80 A3 00 18 */	lwz r5, 0x18(r3)
/* 80122C14 0011FCF4  80 C4 00 00 */	lwz r6, 0x0(r4)
/* 80122C18 0011FCF8  80 A5 00 54 */	lwz r5, 0x54(r5)
/* 80122C1C 0011FCFC  80 05 00 08 */	lwz r0, 0x8(r5)
/* 80122C20 0011FD00  7C 06 02 14 */	add r0, r6, r0
/* 80122C24 0011FD04  90 04 00 00 */	stw r0, 0x0(r4)
/* 80122C28 0011FD08  4E 80 00 20 */	blr
.endfn CountAtomicCB__FP8RpAtomicPv

# AddMeshCB(RpMesh*, RpMeshHeader*, void*)
.fn AddMeshCB__FP6RpMeshP12RpMeshHeaderPv, local
/* 80122C2C 0011FD0C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80122C30 0011FD10  7C 08 02 A6 */	mflr r0
/* 80122C34 0011FD14  90 01 00 24 */	stw r0, 0x24(r1)
/* 80122C38 0011FD18  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80122C3C 0011FD1C  3B E0 00 00 */	li r31, 0x0
/* 80122C40 0011FD20  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80122C44 0011FD24  3B C0 00 00 */	li r30, 0x0
/* 80122C48 0011FD28  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80122C4C 0011FD2C  7C BD 2B 78 */	mr r29, r5
/* 80122C50 0011FD30  93 81 00 10 */	stw r28, 0x10(r1)
/* 80122C54 0011FD34  7C 7C 1B 78 */	mr r28, r3
/* 80122C58 0011FD38  48 00 00 34 */	b .L_80122C8C
.L_80122C5C:
/* 80122C5C 0011FD3C  80 7C 00 00 */	lwz r3, 0x0(r28)
/* 80122C60 0011FD40  80 8D 95 38 */	lwz r4, sCurrVert@sda21(r13)
/* 80122C64 0011FD44  7C 03 FA 2E */	lhzx r0, r3, r31
/* 80122C68 0011FD48  80 7D 00 00 */	lwz r3, 0x0(r29)
/* 80122C6C 0011FD4C  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80122C70 0011FD50  7C 84 02 14 */	add r4, r4, r0
/* 80122C74 0011FD54  4B EE D5 B5 */	bl __as__5RwV3dFRC5RwV3d
/* 80122C78 0011FD58  80 7D 00 00 */	lwz r3, 0x0(r29)
/* 80122C7C 0011FD5C  3B FF 00 02 */	addi r31, r31, 0x2
/* 80122C80 0011FD60  3B DE 00 01 */	addi r30, r30, 0x1
/* 80122C84 0011FD64  38 03 00 0C */	addi r0, r3, 0xc
/* 80122C88 0011FD68  90 1D 00 00 */	stw r0, 0x0(r29)
.L_80122C8C:
/* 80122C8C 0011FD6C  80 1C 00 04 */	lwz r0, 0x4(r28)
/* 80122C90 0011FD70  7C 1E 00 40 */	cmplw r30, r0
/* 80122C94 0011FD74  41 80 FF C8 */	blt .L_80122C5C
/* 80122C98 0011FD78  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80122C9C 0011FD7C  7F 83 E3 78 */	mr r3, r28
/* 80122CA0 0011FD80  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80122CA4 0011FD84  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80122CA8 0011FD88  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80122CAC 0011FD8C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80122CB0 0011FD90  7C 08 03 A6 */	mtlr r0
/* 80122CB4 0011FD94  38 21 00 20 */	addi r1, r1, 0x20
/* 80122CB8 0011FD98  4E 80 00 20 */	blr
.endfn AddMeshCB__FP6RpMeshP12RpMeshHeaderPv

# AddAtomicCB(RpAtomic*, void*)
.fn AddAtomicCB__FP8RpAtomicPv, local
/* 80122CBC 0011FD9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80122CC0 0011FDA0  7C 08 02 A6 */	mflr r0
/* 80122CC4 0011FDA4  7C 85 23 78 */	mr r5, r4
/* 80122CC8 0011FDA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80122CCC 0011FDAC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80122CD0 0011FDB0  7C 7F 1B 78 */	mr r31, r3
/* 80122CD4 0011FDB4  80 CD 95 3C */	lwz r6, sAtomicStartCount@sda21(r13)
/* 80122CD8 0011FDB8  80 E4 00 00 */	lwz r7, 0x0(r4)
/* 80122CDC 0011FDBC  3C 80 80 12 */	lis r4, AddMeshCB__FP6RpMeshP12RpMeshHeaderPv@ha
/* 80122CE0 0011FDC0  38 06 FF FF */	addi r0, r6, -0x1
/* 80122CE4 0011FDC4  80 CD 95 40 */	lwz r6, sAtomicStartVert@sda21(r13)
/* 80122CE8 0011FDC8  38 84 2C 2C */	addi r4, r4, AddMeshCB__FP6RpMeshP12RpMeshHeaderPv@l
/* 80122CEC 0011FDCC  90 0D 95 3C */	stw r0, sAtomicStartCount@sda21(r13)
/* 80122CF0 0011FDD0  54 00 10 3A */	slwi r0, r0, 2
/* 80122CF4 0011FDD4  7C E6 01 2E */	stwx r7, r6, r0
/* 80122CF8 0011FDD8  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80122CFC 0011FDDC  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 80122D00 0011FDE0  80 03 00 14 */	lwz r0, 0x14(r3)
/* 80122D04 0011FDE4  90 0D 95 38 */	stw r0, sCurrVert@sda21(r13)
/* 80122D08 0011FDE8  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 80122D0C 0011FDEC  80 63 00 54 */	lwz r3, 0x54(r3)
/* 80122D10 0011FDF0  48 0F 66 D1 */	bl _rpMeshHeaderForAllMeshes
/* 80122D14 0011FDF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80122D18 0011FDF8  7F E3 FB 78 */	mr r3, r31
/* 80122D1C 0011FDFC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80122D20 0011FE00  7C 08 03 A6 */	mtlr r0
/* 80122D24 0011FE04  38 21 00 10 */	addi r1, r1, 0x10
/* 80122D28 0011FE08  4E 80 00 20 */	blr
.endfn AddAtomicCB__FP8RpAtomicPv

# AddAtomicPrecalcedVertCB(RpAtomic*, void*)
.fn AddAtomicPrecalcedVertCB__FP8RpAtomicPv, local
/* 80122D2C 0011FE0C  80 AD 95 3C */	lwz r5, sAtomicStartCount@sda21(r13)
/* 80122D30 0011FE10  80 E4 00 00 */	lwz r7, 0x0(r4)
/* 80122D34 0011FE14  38 A5 FF FF */	addi r5, r5, -0x1
/* 80122D38 0011FE18  80 CD 95 40 */	lwz r6, sAtomicStartVert@sda21(r13)
/* 80122D3C 0011FE1C  54 A0 10 3A */	slwi r0, r5, 2
/* 80122D40 0011FE20  90 AD 95 3C */	stw r5, sAtomicStartCount@sda21(r13)
/* 80122D44 0011FE24  7C E6 01 2E */	stwx r7, r6, r0
/* 80122D48 0011FE28  80 A3 00 18 */	lwz r5, 0x18(r3)
/* 80122D4C 0011FE2C  80 C4 00 00 */	lwz r6, 0x0(r4)
/* 80122D50 0011FE30  80 A5 00 54 */	lwz r5, 0x54(r5)
/* 80122D54 0011FE34  80 05 00 08 */	lwz r0, 0x8(r5)
/* 80122D58 0011FE38  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80122D5C 0011FE3C  7C 06 02 14 */	add r0, r6, r0
/* 80122D60 0011FE40  90 04 00 00 */	stw r0, 0x0(r4)
/* 80122D64 0011FE44  4E 80 00 20 */	blr
.endfn AddAtomicPrecalcedVertCB__FP8RpAtomicPv

# ListAtomicCB(RpAtomic*, void*)
.fn ListAtomicCB__FP8RpAtomicPv, local
/* 80122D68 0011FE48  80 A4 00 00 */	lwz r5, 0x0(r4)
/* 80122D6C 0011FE4C  90 65 00 00 */	stw r3, 0x0(r5)
/* 80122D70 0011FE50  80 A4 00 00 */	lwz r5, 0x0(r4)
/* 80122D74 0011FE54  38 05 00 04 */	addi r0, r5, 0x4
/* 80122D78 0011FE58  90 04 00 00 */	stw r0, 0x0(r4)
/* 80122D7C 0011FE5C  4E 80 00 20 */	blr
.endfn ListAtomicCB__FP8RpAtomicPv

# xJSP_MultiStreamRead(void*, unsigned int, xJSPHeader**)
.fn xJSP_MultiStreamRead__FPvUiPP10xJSPHeader, global
/* 80122D80 0011FE60  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80122D84 0011FE64  7C 08 02 A6 */	mflr r0
/* 80122D88 0011FE68  90 01 00 44 */	stw r0, 0x44(r1)
/* 80122D8C 0011FE6C  BF 61 00 2C */	stmw r27, 0x2c(r1)
/* 80122D90 0011FE70  7C BB 2B 78 */	mr r27, r5
/* 80122D94 0011FE74  7C 7E 1B 78 */	mr r30, r3
/* 80122D98 0011FE78  7C 9C 23 78 */	mr r28, r4
/* 80122D9C 0011FE7C  80 05 00 00 */	lwz r0, 0x0(r5)
/* 80122DA0 0011FE80  28 00 00 00 */	cmplwi r0, 0x0
/* 80122DA4 0011FE84  40 82 00 2C */	bne .L_80122DD0
/* 80122DA8 0011FE88  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 80122DAC 0011FE8C  38 60 00 20 */	li r3, 0x20
/* 80122DB0 0011FE90  81 84 01 34 */	lwz r12, 0x134(r4)
/* 80122DB4 0011FE94  7D 89 03 A6 */	mtctr r12
/* 80122DB8 0011FE98  4E 80 04 21 */	bctrl
/* 80122DBC 0011FE9C  90 7B 00 00 */	stw r3, 0x0(r27)
/* 80122DC0 0011FEA0  38 80 00 00 */	li r4, 0x0
/* 80122DC4 0011FEA4  38 A0 00 20 */	li r5, 0x20
/* 80122DC8 0011FEA8  80 7B 00 00 */	lwz r3, 0x0(r27)
/* 80122DCC 0011FEAC  4B EE 06 8D */	bl memset
.L_80122DD0:
/* 80122DD0 0011FEB0  83 BB 00 00 */	lwz r29, 0x0(r27)
/* 80122DD4 0011FEB4  7F C4 F3 78 */	mr r4, r30
/* 80122DD8 0011FEB8  38 61 00 1C */	addi r3, r1, 0x1c
/* 80122DDC 0011FEBC  38 A0 00 0C */	li r5, 0xc
/* 80122DE0 0011FEC0  48 0C 0D 91 */	bl memmove
/* 80122DE4 0011FEC4  38 61 00 1C */	addi r3, r1, 0x1c
/* 80122DE8 0011FEC8  38 80 00 0C */	li r4, 0xc
/* 80122DEC 0011FECC  48 10 C0 C1 */	bl RwMemNative32
/* 80122DF0 0011FED0  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80122DF4 0011FED4  3C 03 FF 42 */	addis r0, r3, 0xff42
/* 80122DF8 0011FED8  28 00 EF 01 */	cmplwi r0, 0xef01
/* 80122DFC 0011FEDC  40 82 02 38 */	bne .L_80123034
/* 80122E00 0011FEE0  3B DE 00 0C */	addi r30, r30, 0xc
/* 80122E04 0011FEE4  80 81 00 20 */	lwz r4, 0x20(r1)
/* 80122E08 0011FEE8  7F C3 F3 78 */	mr r3, r30
/* 80122E0C 0011FEEC  4B FF A7 59 */	bl xClumpColl_StaticBufferInit__FPvUi
/* 80122E10 0011FEF0  80 81 00 20 */	lwz r4, 0x20(r1)
/* 80122E14 0011FEF4  7C 7F 1B 78 */	mr r31, r3
/* 80122E18 0011FEF8  38 61 00 1C */	addi r3, r1, 0x1c
/* 80122E1C 0011FEFC  38 A0 00 0C */	li r5, 0xc
/* 80122E20 0011FF00  38 04 00 0C */	addi r0, r4, 0xc
/* 80122E24 0011FF04  7F DE 22 14 */	add r30, r30, r4
/* 80122E28 0011FF08  7F C4 F3 78 */	mr r4, r30
/* 80122E2C 0011FF0C  7F 80 E0 50 */	subf r28, r0, r28
/* 80122E30 0011FF10  48 0C 0D 41 */	bl memmove
/* 80122E34 0011FF14  38 61 00 1C */	addi r3, r1, 0x1c
/* 80122E38 0011FF18  38 80 00 0C */	li r4, 0xc
/* 80122E3C 0011FF1C  48 10 C0 71 */	bl RwMemNative32
/* 80122E40 0011FF20  3B DE 00 0C */	addi r30, r30, 0xc
/* 80122E44 0011FF24  7F A3 EB 78 */	mr r3, r29
/* 80122E48 0011FF28  7F C4 F3 78 */	mr r4, r30
/* 80122E4C 0011FF2C  38 A0 00 04 */	li r5, 0x4
/* 80122E50 0011FF30  48 0C 48 6D */	bl strncpy
/* 80122E54 0011FF34  80 7E 00 04 */	lwz r3, 0x4(r30)
/* 80122E58 0011FF38  38 1E 00 18 */	addi r0, r30, 0x18
/* 80122E5C 0011FF3C  39 00 00 00 */	li r8, 0x0
/* 80122E60 0011FF40  38 C0 00 00 */	li r6, 0x0
/* 80122E64 0011FF44  90 7D 00 04 */	stw r3, 0x4(r29)
/* 80122E68 0011FF48  80 7E 00 08 */	lwz r3, 0x8(r30)
/* 80122E6C 0011FF4C  90 7D 00 08 */	stw r3, 0x8(r29)
/* 80122E70 0011FF50  93 FD 00 10 */	stw r31, 0x10(r29)
/* 80122E74 0011FF54  90 1D 00 14 */	stw r0, 0x14(r29)
/* 80122E78 0011FF58  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80122E7C 0011FF5C  38 03 00 0C */	addi r0, r3, 0xc
/* 80122E80 0011FF60  7F 80 E0 50 */	subf r28, r0, r28
/* 80122E84 0011FF64  48 00 00 34 */	b .L_80122EB8
.L_80122E88:
/* 80122E88 0011FF68  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 80122E8C 0011FF6C  39 08 00 01 */	addi r8, r8, 0x1
/* 80122E90 0011FF70  80 7D 00 08 */	lwz r3, 0x8(r29)
/* 80122E94 0011FF74  7C E0 32 14 */	add r7, r0, r6
/* 80122E98 0011FF78  80 BD 00 14 */	lwz r5, 0x14(r29)
/* 80122E9C 0011FF7C  A0 87 00 00 */	lhz r4, 0x0(r7)
/* 80122EA0 0011FF80  38 03 FF FF */	addi r0, r3, -0x1
/* 80122EA4 0011FF84  38 C6 00 08 */	addi r6, r6, 0x8
/* 80122EA8 0011FF88  7C 04 00 50 */	subf r0, r4, r0
/* 80122EAC 0011FF8C  54 00 18 38 */	slwi r0, r0, 3
/* 80122EB0 0011FF90  7C 05 00 2E */	lwzx r0, r5, r0
/* 80122EB4 0011FF94  B0 07 00 06 */	sth r0, 0x6(r7)
.L_80122EB8:
/* 80122EB8 0011FF98  80 1F 00 08 */	lwz r0, 0x8(r31)
/* 80122EBC 0011FF9C  7C 08 00 40 */	cmplw r8, r0
/* 80122EC0 0011FFA0  41 80 FF C8 */	blt .L_80122E88
/* 80122EC4 0011FFA4  28 1C 00 0C */	cmplwi r28, 0xc
/* 80122EC8 0011FFA8  41 80 00 8C */	blt .L_80122F54
/* 80122ECC 0011FFAC  80 01 00 20 */	lwz r0, 0x20(r1)
/* 80122ED0 0011FFB0  38 61 00 1C */	addi r3, r1, 0x1c
/* 80122ED4 0011FFB4  38 A0 00 0C */	li r5, 0xc
/* 80122ED8 0011FFB8  7F 9E 02 14 */	add r28, r30, r0
/* 80122EDC 0011FFBC  7F 84 E3 78 */	mr r4, r28
/* 80122EE0 0011FFC0  48 0C 0C 91 */	bl memmove
/* 80122EE4 0011FFC4  38 61 00 1C */	addi r3, r1, 0x1c
/* 80122EE8 0011FFC8  38 80 00 0C */	li r4, 0xc
/* 80122EEC 0011FFCC  48 10 BF C1 */	bl RwMemNative32
/* 80122EF0 0011FFD0  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80122EF4 0011FFD4  3C 03 FF 42 */	addis r0, r3, 0xff42
/* 80122EF8 0011FFD8  28 00 EF 03 */	cmplwi r0, 0xef03
/* 80122EFC 0011FFDC  40 82 00 58 */	bne .L_80122F54
/* 80122F00 0011FFE0  80 1C 00 0C */	lwz r0, 0xc(r28)
/* 80122F04 0011FFE4  38 7C 00 10 */	addi r3, r28, 0x10
/* 80122F08 0011FFE8  90 1D 00 18 */	stw r0, 0x18(r29)
/* 80122F0C 0011FFEC  90 7D 00 1C */	stw r3, 0x1c(r29)
/* 80122F10 0011FFF0  80 7D 00 0C */	lwz r3, 0xc(r29)
/* 80122F14 0011FFF4  48 0F 00 E5 */	bl RpClumpGetNumAtomics
/* 80122F18 0011FFF8  90 6D 95 3C */	stw r3, sAtomicStartCount@sda21(r13)
/* 80122F1C 0011FFFC  80 6D 9F 7C */	lwz r3, RwEngineInstance@sda21(r13)
/* 80122F20 00120000  80 0D 95 3C */	lwz r0, sAtomicStartCount@sda21(r13)
/* 80122F24 00120004  81 83 01 34 */	lwz r12, 0x134(r3)
/* 80122F28 00120008  54 03 10 3A */	slwi r3, r0, 2
/* 80122F2C 0012000C  7D 89 03 A6 */	mtctr r12
/* 80122F30 00120010  4E 80 04 21 */	bctrl
/* 80122F34 00120014  90 6D 95 40 */	stw r3, sAtomicStartVert@sda21(r13)
/* 80122F38 00120018  3C 60 80 12 */	lis r3, AddAtomicPrecalcedVertCB__FP8RpAtomicPv@ha
/* 80122F3C 0012001C  38 83 2D 2C */	addi r4, r3, AddAtomicPrecalcedVertCB__FP8RpAtomicPv@l
/* 80122F40 00120020  38 A1 00 10 */	addi r5, r1, 0x10
/* 80122F44 00120024  80 1D 00 1C */	lwz r0, 0x1c(r29)
/* 80122F48 00120028  90 01 00 10 */	stw r0, 0x10(r1)
/* 80122F4C 0012002C  80 7D 00 0C */	lwz r3, 0xc(r29)
/* 80122F50 00120030  48 0F 00 E1 */	bl RpClumpForAllAtomics
.L_80122F54:
/* 80122F54 00120034  80 1D 00 18 */	lwz r0, 0x18(r29)
/* 80122F58 00120038  28 00 00 00 */	cmplwi r0, 0x0
/* 80122F5C 0012003C  40 82 00 78 */	bne .L_80122FD4
/* 80122F60 00120040  38 00 00 00 */	li r0, 0x0
/* 80122F64 00120044  3C 60 80 12 */	lis r3, CountAtomicCB__FP8RpAtomicPv@ha
/* 80122F68 00120048  90 1D 00 18 */	stw r0, 0x18(r29)
/* 80122F6C 0012004C  38 83 2C 04 */	addi r4, r3, CountAtomicCB__FP8RpAtomicPv@l
/* 80122F70 00120050  38 BD 00 18 */	addi r5, r29, 0x18
/* 80122F74 00120054  90 0D 95 3C */	stw r0, sAtomicStartCount@sda21(r13)
/* 80122F78 00120058  80 7D 00 0C */	lwz r3, 0xc(r29)
/* 80122F7C 0012005C  48 0F 00 B5 */	bl RpClumpForAllAtomics
/* 80122F80 00120060  80 6D 9F 7C */	lwz r3, RwEngineInstance@sda21(r13)
/* 80122F84 00120064  80 1D 00 18 */	lwz r0, 0x18(r29)
/* 80122F88 00120068  81 83 01 34 */	lwz r12, 0x134(r3)
/* 80122F8C 0012006C  1C 60 00 0C */	mulli r3, r0, 0xc
/* 80122F90 00120070  7D 89 03 A6 */	mtctr r12
/* 80122F94 00120074  4E 80 04 21 */	bctrl
/* 80122F98 00120078  90 7D 00 1C */	stw r3, 0x1c(r29)
/* 80122F9C 0012007C  80 6D 9F 7C */	lwz r3, RwEngineInstance@sda21(r13)
/* 80122FA0 00120080  80 0D 95 3C */	lwz r0, sAtomicStartCount@sda21(r13)
/* 80122FA4 00120084  81 83 01 34 */	lwz r12, 0x134(r3)
/* 80122FA8 00120088  54 03 10 3A */	slwi r3, r0, 2
/* 80122FAC 0012008C  7D 89 03 A6 */	mtctr r12
/* 80122FB0 00120090  4E 80 04 21 */	bctrl
/* 80122FB4 00120094  90 6D 95 40 */	stw r3, sAtomicStartVert@sda21(r13)
/* 80122FB8 00120098  3C 60 80 12 */	lis r3, AddAtomicCB__FP8RpAtomicPv@ha
/* 80122FBC 0012009C  38 83 2C BC */	addi r4, r3, AddAtomicCB__FP8RpAtomicPv@l
/* 80122FC0 001200A0  38 A1 00 0C */	addi r5, r1, 0xc
/* 80122FC4 001200A4  80 1D 00 1C */	lwz r0, 0x1c(r29)
/* 80122FC8 001200A8  90 01 00 0C */	stw r0, 0xc(r1)
/* 80122FCC 001200AC  80 7D 00 0C */	lwz r3, 0xc(r29)
/* 80122FD0 001200B0  48 0F 00 61 */	bl RpClumpForAllAtomics
.L_80122FD4:
/* 80122FD4 001200B4  38 E0 00 00 */	li r7, 0x0
/* 80122FD8 001200B8  7C E5 3B 78 */	mr r5, r7
/* 80122FDC 001200BC  48 00 00 34 */	b .L_80123010
.L_80122FE0:
/* 80122FE0 001200C0  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 80122FE4 001200C4  38 E7 00 01 */	addi r7, r7, 0x1
/* 80122FE8 001200C8  80 8D 95 40 */	lwz r4, sAtomicStartVert@sda21(r13)
/* 80122FEC 001200CC  7C C0 2A 14 */	add r6, r0, r5
/* 80122FF0 001200D0  38 A5 00 08 */	addi r5, r5, 0x8
/* 80122FF4 001200D4  A0 66 00 00 */	lhz r3, 0x0(r6)
/* 80122FF8 001200D8  A0 06 00 02 */	lhz r0, 0x2(r6)
/* 80122FFC 001200DC  54 63 10 3A */	slwi r3, r3, 2
/* 80123000 001200E0  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80123004 001200E4  7C 64 18 2E */	lwzx r3, r4, r3
/* 80123008 001200E8  7C 03 02 14 */	add r0, r3, r0
/* 8012300C 001200EC  90 06 00 00 */	stw r0, 0x0(r6)
.L_80123010:
/* 80123010 001200F0  80 1F 00 08 */	lwz r0, 0x8(r31)
/* 80123014 001200F4  7C 07 00 40 */	cmplw r7, r0
/* 80123018 001200F8  41 80 FF C8 */	blt .L_80122FE0
/* 8012301C 001200FC  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 80123020 00120100  80 6D 95 40 */	lwz r3, sAtomicStartVert@sda21(r13)
/* 80123024 00120104  81 84 01 38 */	lwz r12, 0x138(r4)
/* 80123028 00120108  7D 89 03 A6 */	mtctr r12
/* 8012302C 0012010C  4E 80 04 21 */	bctrl
/* 80123030 00120110  48 00 01 04 */	b .L_80123134
.L_80123034:
/* 80123034 00120114  93 C1 00 14 */	stw r30, 0x14(r1)
/* 80123038 00120118  38 A1 00 14 */	addi r5, r1, 0x14
/* 8012303C 0012011C  38 60 00 03 */	li r3, 0x3
/* 80123040 00120120  38 80 00 01 */	li r4, 0x1
/* 80123044 00120124  93 81 00 18 */	stw r28, 0x18(r1)
/* 80123048 00120128  48 10 FB 81 */	bl RwStreamOpen
/* 8012304C 0012012C  38 80 00 10 */	li r4, 0x10
/* 80123050 00120130  7C 7C 1B 78 */	mr r28, r3
/* 80123054 00120134  38 A0 00 00 */	li r5, 0x0
/* 80123058 00120138  38 C0 00 00 */	li r6, 0x0
/* 8012305C 0012013C  48 10 BB 59 */	bl RwStreamFindChunk
/* 80123060 00120140  7F 83 E3 78 */	mr r3, r28
/* 80123064 00120144  48 0F 07 41 */	bl RpClumpStreamRead
/* 80123068 00120148  7C 60 1B 78 */	mr r0, r3
/* 8012306C 0012014C  7F 83 E3 78 */	mr r3, r28
/* 80123070 00120150  7C 1E 03 78 */	mr r30, r0
/* 80123074 00120154  38 80 00 00 */	li r4, 0x0
/* 80123078 00120158  48 10 FA 29 */	bl RwStreamClose
/* 8012307C 0012015C  80 1D 00 0C */	lwz r0, 0xc(r29)
/* 80123080 00120160  28 00 00 00 */	cmplwi r0, 0x0
/* 80123084 00120164  40 82 00 0C */	bne .L_80123090
/* 80123088 00120168  93 DD 00 0C */	stw r30, 0xc(r29)
/* 8012308C 0012016C  48 00 00 A8 */	b .L_80123134
.L_80123090:
/* 80123090 00120170  7F C3 F3 78 */	mr r3, r30
/* 80123094 00120174  48 0E FF 65 */	bl RpClumpGetNumAtomics
/* 80123098 00120178  7C 7C 1B 79 */	mr. r28, r3
/* 8012309C 0012017C  41 82 00 90 */	beq .L_8012312C
/* 801230A0 00120180  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 801230A4 00120184  57 83 10 3A */	slwi r3, r28, 2
/* 801230A8 00120188  81 84 01 34 */	lwz r12, 0x134(r4)
/* 801230AC 0012018C  7D 89 03 A6 */	mtctr r12
/* 801230B0 00120190  4E 80 04 21 */	bctrl
/* 801230B4 00120194  7C 7B 1B 78 */	mr r27, r3
/* 801230B8 00120198  3C 80 80 12 */	lis r4, ListAtomicCB__FP8RpAtomicPv@ha
/* 801230BC 0012019C  93 61 00 08 */	stw r27, 0x8(r1)
/* 801230C0 001201A0  7F C3 F3 78 */	mr r3, r30
/* 801230C4 001201A4  38 84 2D 68 */	addi r4, r4, ListAtomicCB__FP8RpAtomicPv@l
/* 801230C8 001201A8  38 A1 00 08 */	addi r5, r1, 0x8
/* 801230CC 001201AC  48 0E FF 65 */	bl RpClumpForAllAtomics
/* 801230D0 001201B0  3B FC FF FF */	addi r31, r28, -0x1
/* 801230D4 001201B4  57 E0 10 3A */	slwi r0, r31, 2
/* 801230D8 001201B8  7F 9B 02 14 */	add r28, r27, r0
/* 801230DC 001201BC  48 00 00 34 */	b .L_80123110
.L_801230E0:
/* 801230E0 001201C0  80 9C 00 00 */	lwz r4, 0x0(r28)
/* 801230E4 001201C4  7F C3 F3 78 */	mr r3, r30
/* 801230E8 001201C8  48 0F 05 65 */	bl RpClumpRemoveAtomic
/* 801230EC 001201CC  80 7D 00 0C */	lwz r3, 0xc(r29)
/* 801230F0 001201D0  80 9C 00 00 */	lwz r4, 0x0(r28)
/* 801230F4 001201D4  48 0F 05 31 */	bl RpClumpAddAtomic
/* 801230F8 001201D8  80 9D 00 0C */	lwz r4, 0xc(r29)
/* 801230FC 001201DC  80 7C 00 00 */	lwz r3, 0x0(r28)
/* 80123100 001201E0  80 84 00 04 */	lwz r4, 0x4(r4)
/* 80123104 001201E4  48 0F 1D 39 */	bl RpAtomicSetFrame
/* 80123108 001201E8  3B 9C FF FC */	addi r28, r28, -0x4
/* 8012310C 001201EC  3B FF FF FF */	addi r31, r31, -0x1
.L_80123110:
/* 80123110 001201F0  2C 1F 00 00 */	cmpwi r31, 0x0
/* 80123114 001201F4  40 80 FF CC */	bge .L_801230E0
/* 80123118 001201F8  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8012311C 001201FC  7F 63 DB 78 */	mr r3, r27
/* 80123120 00120200  81 84 01 38 */	lwz r12, 0x138(r4)
/* 80123124 00120204  7D 89 03 A6 */	mtctr r12
/* 80123128 00120208  4E 80 04 21 */	bctrl
.L_8012312C:
/* 8012312C 0012020C  7F C3 F3 78 */	mr r3, r30
/* 80123130 00120210  48 0F 03 55 */	bl RpClumpDestroy
.L_80123134:
/* 80123134 00120214  BB 61 00 2C */	lmw r27, 0x2c(r1)
/* 80123138 00120218  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8012313C 0012021C  7C 08 03 A6 */	mtlr r0
/* 80123140 00120220  38 21 00 40 */	addi r1, r1, 0x40
/* 80123144 00120224  4E 80 00 20 */	blr
.endfn xJSP_MultiStreamRead__FPvUiPP10xJSPHeader

# xJSP_Destroy(xJSPHeader*)
.fn xJSP_Destroy__FP10xJSPHeader, global
/* 80123148 00120228  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8012314C 0012022C  7C 08 02 A6 */	mflr r0
/* 80123150 00120230  3C 80 80 3C */	lis r4, globals@ha
/* 80123154 00120234  90 01 00 24 */	stw r0, 0x24(r1)
/* 80123158 00120238  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8012315C 0012023C  7C 7F 1B 78 */	mr r31, r3
/* 80123160 00120240  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80123164 00120244  3B C4 05 58 */	addi r30, r4, globals@l
/* 80123168 00120248  80 7E 1F C0 */	lwz r3, 0x1fc0(r30)
/* 8012316C 0012024C  80 63 00 44 */	lwz r3, 0x44(r3)
/* 80123170 00120250  80 63 00 00 */	lwz r3, 0x0(r3)
/* 80123174 00120254  80 03 00 10 */	lwz r0, 0x10(r3)
/* 80123178 00120258  7C 00 F8 40 */	cmplw r0, r31
/* 8012317C 0012025C  40 82 00 28 */	bne .L_801231A4
/* 80123180 00120260  80 63 00 00 */	lwz r3, 0x0(r3)
/* 80123184 00120264  28 03 00 00 */	cmplwi r3, 0x0
/* 80123188 00120268  41 82 00 1C */	beq .L_801231A4
/* 8012318C 0012026C  48 0F 9D 95 */	bl RpWorldDestroy
/* 80123190 00120270  80 7E 1F C0 */	lwz r3, 0x1fc0(r30)
/* 80123194 00120274  38 00 00 00 */	li r0, 0x0
/* 80123198 00120278  80 63 00 44 */	lwz r3, 0x44(r3)
/* 8012319C 0012027C  80 63 00 00 */	lwz r3, 0x0(r3)
/* 801231A0 00120280  90 03 00 00 */	stw r0, 0x0(r3)
.L_801231A4:
/* 801231A4 00120284  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801231A8 00120288  48 0F 02 DD */	bl RpClumpDestroy
/* 801231AC 0012028C  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 801231B0 00120290  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 801231B4 00120294  81 84 01 38 */	lwz r12, 0x138(r4)
/* 801231B8 00120298  7D 89 03 A6 */	mtctr r12
/* 801231BC 0012029C  4E 80 04 21 */	bctrl
/* 801231C0 001202A0  80 BF 00 1C */	lwz r5, 0x1c(r31)
/* 801231C4 001202A4  38 61 00 08 */	addi r3, r1, 0x8
/* 801231C8 001202A8  38 80 00 04 */	li r4, 0x4
/* 801231CC 001202AC  80 05 FF F0 */	lwz r0, -0x10(r5)
/* 801231D0 001202B0  90 01 00 08 */	stw r0, 0x8(r1)
/* 801231D4 001202B4  48 10 BC D9 */	bl RwMemNative32
/* 801231D8 001202B8  80 61 00 08 */	lwz r3, 0x8(r1)
/* 801231DC 001202BC  3C 03 FF 42 */	addis r0, r3, 0xff42
/* 801231E0 001202C0  28 00 EF 03 */	cmplwi r0, 0xef03
/* 801231E4 001202C4  41 82 00 18 */	beq .L_801231FC
/* 801231E8 001202C8  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 801231EC 001202CC  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 801231F0 001202D0  81 84 01 38 */	lwz r12, 0x138(r4)
/* 801231F4 001202D4  7D 89 03 A6 */	mtctr r12
/* 801231F8 001202D8  4E 80 04 21 */	bctrl
.L_801231FC:
/* 801231FC 001202DC  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 80123200 001202E0  7F E3 FB 78 */	mr r3, r31
/* 80123204 001202E4  81 84 01 38 */	lwz r12, 0x138(r4)
/* 80123208 001202E8  7D 89 03 A6 */	mtctr r12
/* 8012320C 001202EC  4E 80 04 21 */	bctrl
/* 80123210 001202F0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80123214 001202F4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80123218 001202F8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8012321C 001202FC  7C 08 03 A6 */	mtlr r0
/* 80123220 00120300  38 21 00 20 */	addi r1, r1, 0x20
/* 80123224 00120304  4E 80 00 20 */	blr
.endfn xJSP_Destroy__FP10xJSPHeader

# 0x803CBE38 - 0x803CBE48
.section .sbss, "wa", @nobits
.balign 8

.obj sCurrVert, local
	.skip 0x4
.endobj sCurrVert

.obj sAtomicStartCount, local
	.skip 0x4
.endobj sAtomicStartCount

.obj sAtomicStartVert, local
	.skip 0x4
.endobj sAtomicStartVert
	.skip 0x4
