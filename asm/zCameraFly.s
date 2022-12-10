.include "macros.inc"
.file "zCameraFly.cpp"

# 0x8017C0A0 - 0x8017C2B4
.text
.balign 4

# zCameraFly_Init(xBase&, xDynAsset&, unsigned long)
.fn zCameraFly_Init__FR5xBaseR9xDynAssetUl, global
/* 8017C0A0 00179180  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017C0A4 00179184  7C 08 02 A6 */	mflr r0
/* 8017C0A8 00179188  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017C0AC 0017918C  48 00 00 15 */	bl zCameraFly_Init__FP10zCameraFlyP15CameraFly_asset
/* 8017C0B0 00179190  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017C0B4 00179194  7C 08 03 A6 */	mtlr r0
/* 8017C0B8 00179198  38 21 00 10 */	addi r1, r1, 0x10
/* 8017C0BC 0017919C  4E 80 00 20 */	blr
.endfn zCameraFly_Init__FR5xBaseR9xDynAssetUl

# zCameraFly_Init(zCameraFly*, CameraFly_asset*)
.fn zCameraFly_Init__FP10zCameraFlyP15CameraFly_asset, global
/* 8017C0C0 001791A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017C0C4 001791A4  7C 08 02 A6 */	mflr r0
/* 8017C0C8 001791A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017C0CC 001791AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017C0D0 001791B0  7C 9F 23 78 */	mr r31, r4
/* 8017C0D4 001791B4  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8017C0D8 001791B8  7C 7E 1B 78 */	mr r30, r3
/* 8017C0DC 001791BC  4B E8 D3 25 */	bl xBaseInit__FP5xBaseP10xBaseAsset
/* 8017C0E0 001791C0  3C 60 80 18 */	lis r3, zCameraFlyEventCB__FP5xBaseP5xBaseUiPCfP5xBase@ha
/* 8017C0E4 001791C4  93 FE 00 10 */	stw r31, 0x10(r30)
/* 8017C0E8 001791C8  38 03 C2 20 */	addi r0, r3, zCameraFlyEventCB__FP5xBaseP5xBaseUiPCfP5xBase@l
/* 8017C0EC 001791CC  90 1E 00 0C */	stw r0, 0xc(r30)
/* 8017C0F0 001791D0  88 1E 00 05 */	lbz r0, 0x5(r30)
/* 8017C0F4 001791D4  28 00 00 00 */	cmplwi r0, 0x0
/* 8017C0F8 001791D8  41 82 00 10 */	beq .L_8017C108
/* 8017C0FC 001791DC  38 1F 00 14 */	addi r0, r31, 0x14
/* 8017C100 001791E0  90 1E 00 08 */	stw r0, 0x8(r30)
/* 8017C104 001791E4  48 00 00 0C */	b .L_8017C110
.L_8017C108:
/* 8017C108 001791E8  38 00 00 00 */	li r0, 0x0
/* 8017C10C 001791EC  90 1E 00 08 */	stw r0, 0x8(r30)
.L_8017C110:
/* 8017C110 001791F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017C114 001791F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017C118 001791F8  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8017C11C 001791FC  7C 08 03 A6 */	mtlr r0
/* 8017C120 00179200  38 21 00 10 */	addi r1, r1, 0x10
/* 8017C124 00179204  4E 80 00 20 */	blr
.endfn zCameraFly_Init__FP10zCameraFlyP15CameraFly_asset

# zCameraFly_Setup(zCameraFly*)
.fn zCameraFly_Setup__FP10zCameraFly, global
/* 8017C128 00179208  A0 03 00 06 */	lhz r0, 0x6(r3)
/* 8017C12C 0017920C  60 00 00 02 */	ori r0, r0, 0x2
/* 8017C130 00179210  B0 03 00 06 */	sth r0, 0x6(r3)
/* 8017C134 00179214  4E 80 00 20 */	blr
.endfn zCameraFly_Setup__FP10zCameraFly

# zCameraFly_Update(xBase*, xScene*, float)
.fn zCameraFly_Update__FP5xBaseP6xScenef, global
/* 8017C138 00179218  4E 80 00 20 */	blr
.endfn zCameraFly_Update__FP5xBaseP6xScenef

# zCameraFly_Save(zCameraFly*, xSerial*)
.fn zCameraFly_Save__FP10zCameraFlyP7xSerial, global
/* 8017C13C 0017921C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017C140 00179220  7C 08 02 A6 */	mflr r0
/* 8017C144 00179224  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017C148 00179228  4B E8 D3 05 */	bl xBaseSave__FP5xBaseP7xSerial
/* 8017C14C 0017922C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017C150 00179230  7C 08 03 A6 */	mtlr r0
/* 8017C154 00179234  38 21 00 10 */	addi r1, r1, 0x10
/* 8017C158 00179238  4E 80 00 20 */	blr
.endfn zCameraFly_Save__FP10zCameraFlyP7xSerial

# zCameraFly_Load(zCameraFly*, xSerial*)
.fn zCameraFly_Load__FP10zCameraFlyP7xSerial, global
/* 8017C15C 0017923C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017C160 00179240  7C 08 02 A6 */	mflr r0
/* 8017C164 00179244  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017C168 00179248  4B E8 D3 35 */	bl xBaseLoad__FP5xBaseP7xSerial
/* 8017C16C 0017924C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017C170 00179250  7C 08 03 A6 */	mtlr r0
/* 8017C174 00179254  38 21 00 10 */	addi r1, r1, 0x10
/* 8017C178 00179258  4E 80 00 20 */	blr
.endfn zCameraFly_Load__FP10zCameraFlyP7xSerial

# zCameraFlyProcessStopEvent()
.fn zCameraFlyProcessStopEvent__Fv, global
/* 8017C17C 0017925C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017C180 00179260  7C 08 02 A6 */	mflr r0
/* 8017C184 00179264  3C 60 80 3C */	lis r3, globals@ha
/* 8017C188 00179268  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017C18C 0017926C  38 63 05 58 */	addi r3, r3, globals@l
/* 8017C190 00179270  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017C194 00179274  83 E3 1F C0 */	lwz r31, 0x1fc0(r3)
/* 8017C198 00179278  4B ED 63 11 */	bl zCamera_FlyOnly__Fv
/* 8017C19C 0017927C  28 03 00 00 */	cmplwi r3, 0x0
/* 8017C1A0 00179280  40 82 00 10 */	bne .L_8017C1B0
/* 8017C1A4 00179284  C0 22 AD D8 */	lfs f1, "@713"@sda21(r2)
/* 8017C1A8 00179288  C0 42 AD DC */	lfs f2, "@714"@sda21(r2)
/* 8017C1AC 0017928C  4B F2 BA B5 */	bl zMusicSetVolume__Fff
.L_8017C1B0:
/* 8017C1B0 00179290  80 AD 8B BC */	lwz r5, zcam_flyasset_current@sda21(r13)
/* 8017C1B4 00179294  38 E0 00 00 */	li r7, 0x0
/* 8017C1B8 00179298  80 DF 00 74 */	lwz r6, 0x74(r31)
/* 8017C1BC 0017929C  48 00 00 40 */	b .L_8017C1FC
.L_8017C1C0:
/* 8017C1C0 001792A0  80 7F 00 78 */	lwz r3, 0x78(r31)
/* 8017C1C4 001792A4  54 E0 13 BA */	clrlslwi r0, r7, 16, 2
/* 8017C1C8 001792A8  7C 63 00 2E */	lwzx r3, r3, r0
/* 8017C1CC 001792AC  88 03 00 04 */	lbz r0, 0x4(r3)
/* 8017C1D0 001792B0  28 00 00 3E */	cmplwi r0, 0x3e
/* 8017C1D4 001792B4  40 82 00 24 */	bne .L_8017C1F8
/* 8017C1D8 001792B8  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8017C1DC 001792BC  80 04 00 10 */	lwz r0, 0x10(r4)
/* 8017C1E0 001792C0  7C 00 28 40 */	cmplw r0, r5
/* 8017C1E4 001792C4  40 82 00 14 */	bne .L_8017C1F8
/* 8017C1E8 001792C8  38 80 00 13 */	li r4, 0x13
/* 8017C1EC 001792CC  4B EA 34 05 */	bl zEntEvent__FP5xBaseUi
/* 8017C1F0 001792D0  38 60 00 01 */	li r3, 0x1
/* 8017C1F4 001792D4  48 00 00 18 */	b .L_8017C20C
.L_8017C1F8:
/* 8017C1F8 001792D8  38 E7 00 01 */	addi r7, r7, 0x1
.L_8017C1FC:
/* 8017C1FC 001792DC  54 E0 04 3E */	clrlwi r0, r7, 16
/* 8017C200 001792E0  7C 00 30 40 */	cmplw r0, r6
/* 8017C204 001792E4  41 80 FF BC */	blt .L_8017C1C0
/* 8017C208 001792E8  38 60 00 00 */	li r3, 0x0
.L_8017C20C:
/* 8017C20C 001792EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017C210 001792F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017C214 001792F4  7C 08 03 A6 */	mtlr r0
/* 8017C218 001792F8  38 21 00 10 */	addi r1, r1, 0x10
/* 8017C21C 001792FC  4E 80 00 20 */	blr
.endfn zCameraFlyProcessStopEvent__Fv

# zCameraFlyEventCB(xBase*, xBase*, unsigned int, const float*, xBase*)
.fn zCameraFlyEventCB__FP5xBaseP5xBaseUiPCfP5xBase, global
/* 8017C220 00179300  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8017C224 00179304  7C 08 02 A6 */	mflr r0
/* 8017C228 00179308  2C 05 00 12 */	cmpwi r5, 0x12
/* 8017C22C 0017930C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8017C230 00179310  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8017C234 00179314  7C 9F 23 78 */	mr r31, r4
/* 8017C238 00179318  41 82 00 48 */	beq .L_8017C280
/* 8017C23C 0017931C  40 80 00 1C */	bge .L_8017C258
/* 8017C240 00179320  2C 05 00 02 */	cmpwi r5, 0x2
/* 8017C244 00179324  41 82 00 30 */	beq .L_8017C274
/* 8017C248 00179328  40 80 00 54 */	bge .L_8017C29C
/* 8017C24C 0017932C  2C 05 00 01 */	cmpwi r5, 0x1
/* 8017C250 00179330  40 80 00 18 */	bge .L_8017C268
/* 8017C254 00179334  48 00 00 48 */	b .L_8017C29C
.L_8017C258:
/* 8017C258 00179338  2C 05 00 57 */	cmpwi r5, 0x57
/* 8017C25C 0017933C  41 82 00 40 */	beq .L_8017C29C
/* 8017C260 00179340  40 80 00 3C */	bge .L_8017C29C
/* 8017C264 00179344  48 00 00 38 */	b .L_8017C29C
.L_8017C268:
/* 8017C268 00179348  7F E3 FB 78 */	mr r3, r31
/* 8017C26C 0017934C  4B E8 D2 E9 */	bl xBaseEnable__FP5xBase
/* 8017C270 00179350  48 00 00 2C */	b .L_8017C29C
.L_8017C274:
/* 8017C274 00179354  7F E3 FB 78 */	mr r3, r31
/* 8017C278 00179358  4B E8 D2 CD */	bl xBaseDisable__FP5xBase
/* 8017C27C 0017935C  48 00 00 20 */	b .L_8017C29C
.L_8017C280:
/* 8017C280 00179360  7F E3 FB 78 */	mr r3, r31
/* 8017C284 00179364  4B E8 D2 B5 */	bl xBaseIsEnabled__FPC5xBase
/* 8017C288 00179368  54 60 06 3F */	clrlwi. r0, r3, 24
/* 8017C28C 0017936C  41 82 00 10 */	beq .L_8017C29C
/* 8017C290 00179370  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 8017C294 00179374  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8017C298 00179378  4B ED 42 29 */	bl zCameraFlyStart__FUi
.L_8017C29C:
/* 8017C29C 0017937C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8017C2A0 00179380  38 60 00 01 */	li r3, 0x1
/* 8017C2A4 00179384  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8017C2A8 00179388  7C 08 03 A6 */	mtlr r0
/* 8017C2AC 0017938C  38 21 00 10 */	addi r1, r1, 0x10
/* 8017C2B0 00179390  4E 80 00 20 */	blr
.endfn zCameraFlyEventCB__FP5xBaseP5xBaseUiPCfP5xBase

# 0x803CF758 - 0x803CF760
.section .sdata2, "a"
.balign 8

.obj "@713", local
	.4byte 0x3F800000
.endobj "@713"

.obj "@714", local
	.4byte 0x40000000
.endobj "@714"
