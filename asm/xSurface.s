.include "macros.inc"
.file "xSurface.cpp"

# 0x8004D054 - 0x8004D1F0
.text
.balign 4

# xSurfaceInit(unsigned short)
.fn xSurfaceInit__FUs, global
/* 8004D054 0004A134  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004D058 0004A138  7C 08 02 A6 */	mflr r0
/* 8004D05C 0004A13C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004D060 0004A140  54 60 04 3F */	clrlwi. r0, r3, 16
/* 8004D064 0004A144  B0 6D 8B 14 */	sth r3, nsurfs@sda21(r13)
/* 8004D068 0004A148  41 82 00 4C */	beq .L_8004D0B4
/* 8004D06C 0004A14C  1C 80 00 28 */	mulli r4, r0, 0x28
/* 8004D070 0004A150  80 6D 89 E0 */	lwz r3, gActiveHeap@sda21(r13)
/* 8004D074 0004A154  38 A0 00 00 */	li r5, 0x0
/* 8004D078 0004A158  4B FE 68 C9 */	bl xMemAlloc__FUiUii
/* 8004D07C 0004A15C  90 6D 8B 10 */	stw r3, surfs@sda21(r13)
/* 8004D080 0004A160  38 C0 00 00 */	li r6, 0x0
/* 8004D084 0004A164  48 00 00 1C */	b .L_8004D0A0
.L_8004D088:
/* 8004D088 0004A168  54 C5 04 3E */	clrlwi r5, r6, 16
/* 8004D08C 0004A16C  80 8D 8B 10 */	lwz r4, surfs@sda21(r13)
/* 8004D090 0004A170  1C 65 00 28 */	mulli r3, r5, 0x28
/* 8004D094 0004A174  38 C6 00 01 */	addi r6, r6, 0x1
/* 8004D098 0004A178  38 03 00 10 */	addi r0, r3, 0x10
/* 8004D09C 0004A17C  7C A4 01 2E */	stwx r5, r4, r0
.L_8004D0A0:
/* 8004D0A0 0004A180  A0 0D 8B 14 */	lhz r0, nsurfs@sda21(r13)
/* 8004D0A4 0004A184  54 C3 04 3E */	clrlwi r3, r6, 16
/* 8004D0A8 0004A188  7C 03 00 40 */	cmplw r3, r0
/* 8004D0AC 0004A18C  41 80 FF DC */	blt .L_8004D088
/* 8004D0B0 0004A190  48 00 00 0C */	b .L_8004D0BC
.L_8004D0B4:
/* 8004D0B4 0004A194  38 00 00 00 */	li r0, 0x0
/* 8004D0B8 0004A198  90 0D 8B 10 */	stw r0, surfs@sda21(r13)
.L_8004D0BC:
/* 8004D0BC 0004A19C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004D0C0 0004A1A0  7C 08 03 A6 */	mtlr r0
/* 8004D0C4 0004A1A4  38 21 00 10 */	addi r1, r1, 0x10
/* 8004D0C8 0004A1A8  4E 80 00 20 */	blr
.endfn xSurfaceInit__FUs

# xSurface::operator=(const xSurface&)
.fn __as__8xSurfaceFRC8xSurface, weak
/* 8004D0CC 0004A1AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004D0D0 0004A1B0  7C 08 02 A6 */	mflr r0
/* 8004D0D4 0004A1B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004D0D8 0004A1B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8004D0DC 0004A1BC  7C 9F 23 78 */	mr r31, r4
/* 8004D0E0 0004A1C0  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8004D0E4 0004A1C4  7C 7E 1B 78 */	mr r30, r3
/* 8004D0E8 0004A1C8  48 00 00 61 */	bl __as__5xBaseFRC5xBase
/* 8004D0EC 0004A1CC  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 8004D0F0 0004A1D0  38 7E 00 21 */	addi r3, r30, 0x21
/* 8004D0F4 0004A1D4  80 DF 00 14 */	lwz r6, 0x14(r31)
/* 8004D0F8 0004A1D8  38 9F 00 21 */	addi r4, r31, 0x21
/* 8004D0FC 0004A1DC  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8004D100 0004A1E0  38 A0 00 03 */	li r5, 0x3
/* 8004D104 0004A1E4  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 8004D108 0004A1E8  90 DE 00 14 */	stw r6, 0x14(r30)
/* 8004D10C 0004A1EC  C0 1F 00 1C */	lfs f0, 0x1c(r31)
/* 8004D110 0004A1F0  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8004D114 0004A1F4  88 1F 00 20 */	lbz r0, 0x20(r31)
/* 8004D118 0004A1F8  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 8004D11C 0004A1FC  98 1E 00 20 */	stb r0, 0x20(r30)
/* 8004D120 0004A200  48 19 FD 4D */	bl __copy
/* 8004D124 0004A204  80 1F 00 24 */	lwz r0, 0x24(r31)
/* 8004D128 0004A208  7F C3 F3 78 */	mr r3, r30
/* 8004D12C 0004A20C  90 1E 00 24 */	stw r0, 0x24(r30)
/* 8004D130 0004A210  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8004D134 0004A214  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8004D138 0004A218  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004D13C 0004A21C  7C 08 03 A6 */	mtlr r0
/* 8004D140 0004A220  38 21 00 10 */	addi r1, r1, 0x10
/* 8004D144 0004A224  4E 80 00 20 */	blr
.endfn __as__8xSurfaceFRC8xSurface

# xBase::operator=(const xBase&)
.fn __as__5xBaseFRC5xBase, weak
/* 8004D148 0004A228  80 A4 00 00 */	lwz r5, 0x0(r4)
/* 8004D14C 0004A22C  88 04 00 04 */	lbz r0, 0x4(r4)
/* 8004D150 0004A230  90 A3 00 00 */	stw r5, 0x0(r3)
/* 8004D154 0004A234  88 A4 00 05 */	lbz r5, 0x5(r4)
/* 8004D158 0004A238  98 03 00 04 */	stb r0, 0x4(r3)
/* 8004D15C 0004A23C  A0 04 00 06 */	lhz r0, 0x6(r4)
/* 8004D160 0004A240  98 A3 00 05 */	stb r5, 0x5(r3)
/* 8004D164 0004A244  80 A4 00 08 */	lwz r5, 0x8(r4)
/* 8004D168 0004A248  B0 03 00 06 */	sth r0, 0x6(r3)
/* 8004D16C 0004A24C  80 04 00 0C */	lwz r0, 0xc(r4)
/* 8004D170 0004A250  90 A3 00 08 */	stw r5, 0x8(r3)
/* 8004D174 0004A254  90 03 00 0C */	stw r0, 0xc(r3)
/* 8004D178 0004A258  4E 80 00 20 */	blr
.endfn __as__5xBaseFRC5xBase

# xSurfaceExit()
.fn xSurfaceExit__Fv, global
/* 8004D17C 0004A25C  4E 80 00 20 */	blr
.endfn xSurfaceExit__Fv

# xSurfaceSave(xSurface*, xSerial*)
.fn xSurfaceSave__FP8xSurfaceP7xSerial, global
/* 8004D180 0004A260  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004D184 0004A264  7C 08 02 A6 */	mflr r0
/* 8004D188 0004A268  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004D18C 0004A26C  4B FB C2 C1 */	bl xBaseSave__FP5xBaseP7xSerial
/* 8004D190 0004A270  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004D194 0004A274  7C 08 03 A6 */	mtlr r0
/* 8004D198 0004A278  38 21 00 10 */	addi r1, r1, 0x10
/* 8004D19C 0004A27C  4E 80 00 20 */	blr
.endfn xSurfaceSave__FP8xSurfaceP7xSerial

# xSurfaceLoad(xSurface*, xSerial*)
.fn xSurfaceLoad__FP8xSurfaceP7xSerial, global
/* 8004D1A0 0004A280  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004D1A4 0004A284  7C 08 02 A6 */	mflr r0
/* 8004D1A8 0004A288  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004D1AC 0004A28C  4B FB C2 F1 */	bl xBaseLoad__FP5xBaseP7xSerial
/* 8004D1B0 0004A290  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004D1B4 0004A294  7C 08 03 A6 */	mtlr r0
/* 8004D1B8 0004A298  38 21 00 10 */	addi r1, r1, 0x10
/* 8004D1BC 0004A29C  4E 80 00 20 */	blr
.endfn xSurfaceLoad__FP8xSurfaceP7xSerial

# xSurfaceReset(xSurface*)
.fn xSurfaceReset__FP8xSurface, global
/* 8004D1C0 0004A2A0  4E 80 00 20 */	blr
.endfn xSurfaceReset__FP8xSurface

# xSurfaceGetNumSurfaces()
.fn xSurfaceGetNumSurfaces__Fv, global
/* 8004D1C4 0004A2A4  A0 6D 8B 14 */	lhz r3, nsurfs@sda21(r13)
/* 8004D1C8 0004A2A8  4E 80 00 20 */	blr
.endfn xSurfaceGetNumSurfaces__Fv

# xSurfaceGetByIdx(unsigned short)
.fn xSurfaceGetByIdx__FUs, global
/* 8004D1CC 0004A2AC  80 8D 8B 10 */	lwz r4, surfs@sda21(r13)
/* 8004D1D0 0004A2B0  28 04 00 00 */	cmplwi r4, 0x0
/* 8004D1D4 0004A2B4  41 82 00 14 */	beq .L_8004D1E8
/* 8004D1D8 0004A2B8  54 60 04 3E */	clrlwi r0, r3, 16
/* 8004D1DC 0004A2BC  1C 00 00 28 */	mulli r0, r0, 0x28
/* 8004D1E0 0004A2C0  7C 64 02 14 */	add r3, r4, r0
/* 8004D1E4 0004A2C4  4E 80 00 20 */	blr
.L_8004D1E8:
/* 8004D1E8 0004A2C8  38 60 00 00 */	li r3, 0x0
/* 8004D1EC 0004A2CC  4E 80 00 20 */	blr
.endfn xSurfaceGetByIdx__FUs

# 0x803CB410 - 0x803CB418
.section .sbss, "wa", @nobits
.balign 8

.obj surfs, local
	.skip 0x4
.endobj surfs

.obj nsurfs, local
	.skip 0x2
.endobj nsurfs
	.skip 0x2
