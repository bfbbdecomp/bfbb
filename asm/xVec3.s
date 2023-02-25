.include "macros.inc"
.file "xVec3.cpp"

# 0x8004E2F0 - 0x8004E510
.text
.balign 4

# xVec3Normalize(xVec3*, const xVec3*)
.fn xVec3Normalize__FP5xVec3PC5xVec3, global
/* 8004E2F0 0004B3D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004E2F4 0004B3D4  7C 08 02 A6 */	mflr r0
/* 8004E2F8 0004B3D8  C0 C4 00 00 */	lfs f6, 0x0(r4)
/* 8004E2FC 0004B3DC  C0 A4 00 04 */	lfs f5, 0x4(r4)
/* 8004E300 0004B3E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004E304 0004B3E4  EC 66 01 B2 */	fmuls f3, f6, f6
/* 8004E308 0004B3E8  EC 25 01 72 */	fmuls f1, f5, f5
/* 8004E30C 0004B3EC  C0 E4 00 08 */	lfs f7, 0x8(r4)
/* 8004E310 0004B3F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8004E314 0004B3F4  7C 9F 23 78 */	mr r31, r4
/* 8004E318 0004B3F8  EC 87 01 F2 */	fmuls f4, f7, f7
/* 8004E31C 0004B3FC  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8004E320 0004B400  EC 23 08 2A */	fadds f1, f3, f1
/* 8004E324 0004B404  7C 7E 1B 78 */	mr r30, r3
/* 8004E328 0004B408  C0 02 87 D8 */	lfs f0, "@432"@sda21(r2)
/* 8004E32C 0004B40C  C0 42 87 DC */	lfs f2, "@433"@sda21(r2)
/* 8004E330 0004B410  EC 24 08 2A */	fadds f1, f4, f1
/* 8004E334 0004B414  EC 01 00 28 */	fsubs f0, f1, f0
/* 8004E338 0004B418  FC 00 02 10 */	fabs f0, f0
/* 8004E33C 0004B41C  FC 00 00 18 */	frsp f0, f0
/* 8004E340 0004B420  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8004E344 0004B424  4C 40 13 82 */	cror eq, lt, eq
/* 8004E348 0004B428  40 82 00 18 */	bne .L_8004E360
/* 8004E34C 0004B42C  D0 DE 00 00 */	stfs f6, 0x0(r30)
/* 8004E350 0004B430  D0 BE 00 04 */	stfs f5, 0x4(r30)
/* 8004E354 0004B434  D0 FE 00 08 */	stfs f7, 0x8(r30)
/* 8004E358 0004B438  C0 22 87 D8 */	lfs f1, "@432"@sda21(r2)
/* 8004E35C 0004B43C  48 00 00 68 */	b .L_8004E3C4
.L_8004E360:
/* 8004E360 0004B440  FC 00 0A 10 */	fabs f0, f1
/* 8004E364 0004B444  FC 00 00 18 */	frsp f0, f0
/* 8004E368 0004B448  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8004E36C 0004B44C  4C 40 13 82 */	cror eq, lt, eq
/* 8004E370 0004B450  40 82 00 24 */	bne .L_8004E394
/* 8004E374 0004B454  C0 02 87 E0 */	lfs f0, "@434"@sda21(r2)
/* 8004E378 0004B458  D0 1E 00 00 */	stfs f0, 0x0(r30)
/* 8004E37C 0004B45C  C0 02 87 D8 */	lfs f0, "@432"@sda21(r2)
/* 8004E380 0004B460  D0 1E 00 04 */	stfs f0, 0x4(r30)
/* 8004E384 0004B464  C0 02 87 E0 */	lfs f0, "@434"@sda21(r2)
/* 8004E388 0004B468  D0 1E 00 08 */	stfs f0, 0x8(r30)
/* 8004E38C 0004B46C  C0 22 87 E0 */	lfs f1, "@434"@sda21(r2)
/* 8004E390 0004B470  48 00 00 34 */	b .L_8004E3C4
.L_8004E394:
/* 8004E394 0004B474  4B FB C4 69 */	bl xsqrt__Ff
/* 8004E398 0004B478  C0 82 87 D8 */	lfs f4, "@432"@sda21(r2)
/* 8004E39C 0004B47C  C0 7F 00 00 */	lfs f3, 0x0(r31)
/* 8004E3A0 0004B480  EC 84 08 24 */	fdivs f4, f4, f1
/* 8004E3A4 0004B484  C0 5F 00 04 */	lfs f2, 0x4(r31)
/* 8004E3A8 0004B488  C0 1F 00 08 */	lfs f0, 0x8(r31)
/* 8004E3AC 0004B48C  EC 63 01 32 */	fmuls f3, f3, f4
/* 8004E3B0 0004B490  EC 42 01 32 */	fmuls f2, f2, f4
/* 8004E3B4 0004B494  EC 00 01 32 */	fmuls f0, f0, f4
/* 8004E3B8 0004B498  D0 7E 00 00 */	stfs f3, 0x0(r30)
/* 8004E3BC 0004B49C  D0 5E 00 04 */	stfs f2, 0x4(r30)
/* 8004E3C0 0004B4A0  D0 1E 00 08 */	stfs f0, 0x8(r30)
.L_8004E3C4:
/* 8004E3C4 0004B4A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004E3C8 0004B4A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8004E3CC 0004B4AC  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8004E3D0 0004B4B0  7C 08 03 A6 */	mtlr r0
/* 8004E3D4 0004B4B4  38 21 00 10 */	addi r1, r1, 0x10
/* 8004E3D8 0004B4B8  4E 80 00 20 */	blr
.endfn xVec3Normalize__FP5xVec3PC5xVec3

# xVec3NormalizeFast(xVec3*, const xVec3*)
.fn xVec3NormalizeFast__FP5xVec3PC5xVec3, global
/* 8004E3DC 0004B4BC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8004E3E0 0004B4C0  7C 08 02 A6 */	mflr r0
/* 8004E3E4 0004B4C4  C0 C4 00 00 */	lfs f6, 0x0(r4)
/* 8004E3E8 0004B4C8  C0 A4 00 04 */	lfs f5, 0x4(r4)
/* 8004E3EC 0004B4CC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8004E3F0 0004B4D0  EC 66 01 B2 */	fmuls f3, f6, f6
/* 8004E3F4 0004B4D4  EC 25 01 72 */	fmuls f1, f5, f5
/* 8004E3F8 0004B4D8  C0 E4 00 08 */	lfs f7, 0x8(r4)
/* 8004E3FC 0004B4DC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8004E400 0004B4E0  7C 9F 23 78 */	mr r31, r4
/* 8004E404 0004B4E4  EC 87 01 F2 */	fmuls f4, f7, f7
/* 8004E408 0004B4E8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8004E40C 0004B4EC  EC 23 08 2A */	fadds f1, f3, f1
/* 8004E410 0004B4F0  7C 7E 1B 78 */	mr r30, r3
/* 8004E414 0004B4F4  C0 02 87 D8 */	lfs f0, "@432"@sda21(r2)
/* 8004E418 0004B4F8  C0 42 87 DC */	lfs f2, "@433"@sda21(r2)
/* 8004E41C 0004B4FC  EC 24 08 2A */	fadds f1, f4, f1
/* 8004E420 0004B500  EC 01 00 28 */	fsubs f0, f1, f0
/* 8004E424 0004B504  FC 00 02 10 */	fabs f0, f0
/* 8004E428 0004B508  FC 00 00 18 */	frsp f0, f0
/* 8004E42C 0004B50C  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8004E430 0004B510  4C 40 13 82 */	cror eq, lt, eq
/* 8004E434 0004B514  40 82 00 1C */	bne .L_8004E450
/* 8004E438 0004B518  D0 DE 00 00 */	stfs f6, 0x0(r30)
/* 8004E43C 0004B51C  D0 BE 00 04 */	stfs f5, 0x4(r30)
/* 8004E440 0004B520  D0 FE 00 08 */	stfs f7, 0x8(r30)
/* 8004E444 0004B524  C0 02 87 D8 */	lfs f0, "@432"@sda21(r2)
/* 8004E448 0004B528  D0 01 00 08 */	stfs f0, 0x8(r1)
/* 8004E44C 0004B52C  48 00 00 74 */	b .L_8004E4C0
.L_8004E450:
/* 8004E450 0004B530  FC 00 0A 10 */	fabs f0, f1
/* 8004E454 0004B534  FC 00 00 18 */	frsp f0, f0
/* 8004E458 0004B538  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8004E45C 0004B53C  4C 40 13 82 */	cror eq, lt, eq
/* 8004E460 0004B540  40 82 00 28 */	bne .L_8004E488
/* 8004E464 0004B544  C0 02 87 E0 */	lfs f0, "@434"@sda21(r2)
/* 8004E468 0004B548  D0 1E 00 00 */	stfs f0, 0x0(r30)
/* 8004E46C 0004B54C  C0 02 87 D8 */	lfs f0, "@432"@sda21(r2)
/* 8004E470 0004B550  D0 1E 00 04 */	stfs f0, 0x4(r30)
/* 8004E474 0004B554  C0 02 87 E0 */	lfs f0, "@434"@sda21(r2)
/* 8004E478 0004B558  D0 1E 00 08 */	stfs f0, 0x8(r30)
/* 8004E47C 0004B55C  C0 02 87 E0 */	lfs f0, "@434"@sda21(r2)
/* 8004E480 0004B560  D0 01 00 08 */	stfs f0, 0x8(r1)
/* 8004E484 0004B564  48 00 00 3C */	b .L_8004E4C0
.L_8004E488:
/* 8004E488 0004B568  38 61 00 08 */	addi r3, r1, 0x8
/* 8004E48C 0004B56C  4B FC 46 CD */	bl xsqrtfast__FRff
/* 8004E490 0004B570  C0 22 87 D8 */	lfs f1, "@432"@sda21(r2)
/* 8004E494 0004B574  C0 01 00 08 */	lfs f0, 0x8(r1)
/* 8004E498 0004B578  C0 5F 00 00 */	lfs f2, 0x0(r31)
/* 8004E49C 0004B57C  EC 61 00 24 */	fdivs f3, f1, f0
/* 8004E4A0 0004B580  C0 3F 00 04 */	lfs f1, 0x4(r31)
/* 8004E4A4 0004B584  C0 1F 00 08 */	lfs f0, 0x8(r31)
/* 8004E4A8 0004B588  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8004E4AC 0004B58C  EC 21 00 F2 */	fmuls f1, f1, f3
/* 8004E4B0 0004B590  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8004E4B4 0004B594  D0 5E 00 00 */	stfs f2, 0x0(r30)
/* 8004E4B8 0004B598  D0 3E 00 04 */	stfs f1, 0x4(r30)
/* 8004E4BC 0004B59C  D0 1E 00 08 */	stfs f0, 0x8(r30)
.L_8004E4C0:
/* 8004E4C0 0004B5A0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8004E4C4 0004B5A4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8004E4C8 0004B5A8  C0 21 00 08 */	lfs f1, 0x8(r1)
/* 8004E4CC 0004B5AC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8004E4D0 0004B5B0  7C 08 03 A6 */	mtlr r0
/* 8004E4D4 0004B5B4  38 21 00 20 */	addi r1, r1, 0x20
/* 8004E4D8 0004B5B8  4E 80 00 20 */	blr
.endfn xVec3NormalizeFast__FP5xVec3PC5xVec3

# xVec3Copy(xVec3*, const xVec3*)
.fn xVec3Copy__FP5xVec3PC5xVec3, global
/* 8004E4DC 0004B5BC  E0 04 00 00 */	psq_l f0, 0x0(r4), 0, qr0
/* 8004E4E0 0004B5C0  E0 24 80 08 */	psq_l f1, 0x8(r4), 1, qr0
/* 8004E4E4 0004B5C4  F0 03 00 00 */	psq_st f0, 0x0(r3), 0, qr0
/* 8004E4E8 0004B5C8  F0 23 80 08 */	psq_st f1, 0x8(r3), 1, qr0
/* 8004E4EC 0004B5CC  4E 80 00 20 */	blr
.endfn xVec3Copy__FP5xVec3PC5xVec3

# xVec3Dot(const xVec3*, const xVec3*)
.fn xVec3Dot__FPC5xVec3PC5xVec3, global
/* 8004E4F0 0004B5D0  E0 43 00 04 */	psq_l f2, 0x4(r3), 0, qr0
/* 8004E4F4 0004B5D4  E0 64 00 04 */	psq_l f3, 0x4(r4), 0, qr0
/* 8004E4F8 0004B5D8  10 42 00 F2 */	ps_mul f2, f2, f3
/* 8004E4FC 0004B5DC  E0 A3 00 00 */	psq_l f5, 0x0(r3), 0, qr0
/* 8004E500 0004B5E0  E0 84 00 00 */	psq_l f4, 0x0(r4), 0, qr0
/* 8004E504 0004B5E4  10 65 11 3A */	ps_madd f3, f5, f4, f2
/* 8004E508 0004B5E8  10 23 10 94 */	ps_sum0 f1, f3, f2, f2
/* 8004E50C 0004B5EC  4E 80 00 20 */	blr
.endfn xVec3Dot__FPC5xVec3PC5xVec3

# 0x802542E0 - 0x80254308
.rodata
.balign 8

# xVec3::m_Null
.obj m_Null__5xVec3, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj m_Null__5xVec3

# xVec3::m_UnitAxisX
.obj m_UnitAxisX__5xVec3, global
	.4byte 0x3F800000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj m_UnitAxisX__5xVec3

# xVec3::m_UnitAxisY
.obj m_UnitAxisY__5xVec3, global
	.4byte 0x00000000
	.4byte 0x3F800000
	.4byte 0x00000000
.endobj m_UnitAxisY__5xVec3
	.4byte 0x00000000

# 0x803CD158 - 0x803CD168
.section .sdata2, "a"
.balign 8

.obj "@432", local
	.4byte 0x3F800000
.endobj "@432"

.obj "@433", local
	.4byte 0x3727C5AC
.endobj "@433"

.obj "@434", local
	.4byte 0x00000000
.endobj "@434"
	.4byte 0x00000000
