.include "macros.inc"
.file "zCamMarker.cpp"

# 0x80123638 - 0x80123740
.text
.balign 4

# zCamMarkerInit(xBase*, xCamAsset*)
.fn zCamMarkerInit__FP5xBaseP9xCamAsset, global
/* 80123638 00120718  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012363C 0012071C  7C 08 02 A6 */	mflr r0
/* 80123640 00120720  90 01 00 14 */	stw r0, 0x14(r1)
/* 80123644 00120724  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80123648 00120728  7C 9F 23 78 */	mr r31, r4
/* 8012364C 0012072C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80123650 00120730  7C 7E 1B 78 */	mr r30, r3
/* 80123654 00120734  4B EE 5D AD */	bl xBaseInit__FP5xBaseP10xBaseAsset
/* 80123658 00120738  88 1E 00 05 */	lbz r0, 0x5(r30)
/* 8012365C 0012073C  28 00 00 00 */	cmplwi r0, 0x0
/* 80123660 00120740  41 82 00 0C */	beq .L_8012366C
/* 80123664 00120744  38 1F 00 88 */	addi r0, r31, 0x88
/* 80123668 00120748  90 1E 00 08 */	stw r0, 0x8(r30)
.L_8012366C:
/* 8012366C 0012074C  3C 60 80 12 */	lis r3, zCamMarkerEventCB__FP5xBaseP5xBaseUiPCfP5xBase@ha
/* 80123670 00120750  38 03 36 D4 */	addi r0, r3, zCamMarkerEventCB__FP5xBaseP5xBaseUiPCfP5xBase@l
/* 80123674 00120754  90 1E 00 0C */	stw r0, 0xc(r30)
/* 80123678 00120758  93 FE 00 10 */	stw r31, 0x10(r30)
/* 8012367C 0012075C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80123680 00120760  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80123684 00120764  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80123688 00120768  7C 08 03 A6 */	mtlr r0
/* 8012368C 0012076C  38 21 00 10 */	addi r1, r1, 0x10
/* 80123690 00120770  4E 80 00 20 */	blr
.endfn zCamMarkerInit__FP5xBaseP9xCamAsset

# zCamMarkerSave(zCamMarker*, xSerial*)
.fn zCamMarkerSave__FP10zCamMarkerP7xSerial, global
/* 80123694 00120774  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80123698 00120778  7C 08 02 A6 */	mflr r0
/* 8012369C 0012077C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801236A0 00120780  4B EE 5D AD */	bl xBaseSave__FP5xBaseP7xSerial
/* 801236A4 00120784  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801236A8 00120788  7C 08 03 A6 */	mtlr r0
/* 801236AC 0012078C  38 21 00 10 */	addi r1, r1, 0x10
/* 801236B0 00120790  4E 80 00 20 */	blr
.endfn zCamMarkerSave__FP10zCamMarkerP7xSerial

# zCamMarkerLoad(zCamMarker*, xSerial*)
.fn zCamMarkerLoad__FP10zCamMarkerP7xSerial, global
/* 801236B4 00120794  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801236B8 00120798  7C 08 02 A6 */	mflr r0
/* 801236BC 0012079C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801236C0 001207A0  4B EE 5D DD */	bl xBaseLoad__FP5xBaseP7xSerial
/* 801236C4 001207A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801236C8 001207A8  7C 08 03 A6 */	mtlr r0
/* 801236CC 001207AC  38 21 00 10 */	addi r1, r1, 0x10
/* 801236D0 001207B0  4E 80 00 20 */	blr
.endfn zCamMarkerLoad__FP10zCamMarkerP7xSerial

# zCamMarkerEventCB(xBase*, xBase*, unsigned int, const float*, xBase*)
.fn zCamMarkerEventCB__FP5xBaseP5xBaseUiPCfP5xBase, global
/* 801236D4 001207B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801236D8 001207B8  7C 08 02 A6 */	mflr r0
/* 801236DC 001207BC  2C 05 01 4F */	cmpwi r5, 0x14f
/* 801236E0 001207C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801236E4 001207C4  41 82 00 34 */	beq .L_80123718
/* 801236E8 001207C8  40 80 00 10 */	bge .L_801236F8
/* 801236EC 001207CC  2C 05 00 26 */	cmpwi r5, 0x26
/* 801236F0 001207D0  41 82 00 18 */	beq .L_80123708
/* 801236F4 001207D4  48 00 00 38 */	b .L_8012372C
.L_801236F8:
/* 801236F8 001207D8  2C 05 01 51 */	cmpwi r5, 0x151
/* 801236FC 001207DC  41 82 00 0C */	beq .L_80123708
/* 80123700 001207E0  40 80 00 2C */	bge .L_8012372C
/* 80123704 001207E4  48 00 00 20 */	b .L_80123724
.L_80123708:
/* 80123708 001207E8  80 64 00 10 */	lwz r3, 0x10(r4)
/* 8012370C 001207EC  C0 26 00 00 */	lfs f1, 0x0(r6)
/* 80123710 001207F0  4B F2 EB 3D */	bl zCameraDoTrans__FP9xCamAssetf
/* 80123714 001207F4  48 00 00 18 */	b .L_8012372C
.L_80123718:
/* 80123718 001207F8  38 60 00 01 */	li r3, 0x1
/* 8012371C 001207FC  4B F2 EA 55 */	bl zCameraSetConvers__Fi
/* 80123720 00120800  48 00 00 0C */	b .L_8012372C
.L_80123724:
/* 80123724 00120804  38 60 00 00 */	li r3, 0x0
/* 80123728 00120808  4B F2 EA 49 */	bl zCameraSetConvers__Fi
.L_8012372C:
/* 8012372C 0012080C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80123730 00120810  38 60 00 01 */	li r3, 0x1
/* 80123734 00120814  7C 08 03 A6 */	mtlr r0
/* 80123738 00120818  38 21 00 10 */	addi r1, r1, 0x10
/* 8012373C 0012081C  4E 80 00 20 */	blr
.endfn zCamMarkerEventCB__FP5xBaseP5xBaseUiPCfP5xBase
