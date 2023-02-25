.include "macros.inc"
.file "e_acos.c"

# 0x801E9204 - 0x801E9514
.text
.balign 4

.fn __ieee754_acos, global
/* 801E9204 001E62E4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801E9208 001E62E8  3C 00 3F F0 */	lis r0, 0x3ff0
/* 801E920C 001E62EC  D8 21 00 08 */	stfd f1, 0x8(r1)
/* 801E9210 001E62F0  80 81 00 08 */	lwz r4, 0x8(r1)
/* 801E9214 001E62F4  54 83 00 7E */	clrlwi r3, r4, 1
/* 801E9218 001E62F8  7C 03 00 00 */	cmpw r3, r0
/* 801E921C 001E62FC  41 80 00 38 */	blt .L_801E9254
/* 801E9220 001E6300  80 01 00 0C */	lwz r0, 0xc(r1)
/* 801E9224 001E6304  3C 63 C0 10 */	addis r3, r3, 0xc010
/* 801E9228 001E6308  7C 60 03 79 */	or. r0, r3, r0
/* 801E922C 001E630C  40 82 00 1C */	bne .L_801E9248
/* 801E9230 001E6310  2C 04 00 00 */	cmpwi r4, 0x0
/* 801E9234 001E6314  40 81 00 0C */	ble .L_801E9240
/* 801E9238 001E6318  C8 22 B4 60 */	lfd f1, "@103"@sda21(r2)
/* 801E923C 001E631C  48 00 02 D0 */	b .L_801E950C
.L_801E9240:
/* 801E9240 001E6320  C8 22 B4 68 */	lfd f1, "@104"@sda21(r2)
/* 801E9244 001E6324  48 00 02 C8 */	b .L_801E950C
.L_801E9248:
/* 801E9248 001E6328  3C 60 80 3D */	lis r3, __float_nan@ha
/* 801E924C 001E632C  C0 23 AF B8 */	lfs f1, __float_nan@l(r3)
/* 801E9250 001E6330  48 00 02 BC */	b .L_801E950C
.L_801E9254:
/* 801E9254 001E6334  3C 00 3F E0 */	lis r0, 0x3fe0
/* 801E9258 001E6338  7C 03 00 00 */	cmpw r3, r0
/* 801E925C 001E633C  40 80 00 8C */	bge .L_801E92E8
/* 801E9260 001E6340  3C 00 3C 60 */	lis r0, 0x3c60
/* 801E9264 001E6344  7C 03 00 00 */	cmpw r3, r0
/* 801E9268 001E6348  41 81 00 0C */	bgt .L_801E9274
/* 801E926C 001E634C  C8 22 B4 70 */	lfd f1, "@105"@sda21(r2)
/* 801E9270 001E6350  48 00 02 9C */	b .L_801E950C
.L_801E9274:
/* 801E9274 001E6354  FD 41 00 72 */	fmul f10, f1, f1
/* 801E9278 001E6358  C8 42 B4 A8 */	lfd f2, "@112"@sda21(r2)
/* 801E927C 001E635C  C8 02 B4 A0 */	lfd f0, "@111"@sda21(r2)
/* 801E9280 001E6360  C8 62 B4 98 */	lfd f3, "@110"@sda21(r2)
/* 801E9284 001E6364  C9 02 B4 90 */	lfd f8, "@109"@sda21(r2)
/* 801E9288 001E6368  FC 82 02 BA */	fmadd f4, f2, f10, f0
/* 801E928C 001E636C  C8 42 B4 D0 */	lfd f2, "@117"@sda21(r2)
/* 801E9290 001E6370  C8 02 B4 C8 */	lfd f0, "@116"@sda21(r2)
/* 801E9294 001E6374  C8 E2 B4 88 */	lfd f7, "@108"@sda21(r2)
/* 801E9298 001E6378  FD 2A 19 3A */	fmadd f9, f10, f4, f3
/* 801E929C 001E637C  C8 82 B4 C0 */	lfd f4, "@115"@sda21(r2)
/* 801E92A0 001E6380  C8 C2 B4 80 */	lfd f6, "@107"@sda21(r2)
/* 801E92A4 001E6384  FC A2 02 BA */	fmadd f5, f2, f10, f0
/* 801E92A8 001E6388  C8 62 B4 B8 */	lfd f3, "@114"@sda21(r2)
/* 801E92AC 001E638C  C8 42 B4 B0 */	lfd f2, "@113"@sda21(r2)
/* 801E92B0 001E6390  FD 0A 42 7A */	fmadd f8, f10, f9, f8
/* 801E92B4 001E6394  C8 02 B4 78 */	lfd f0, "@106"@sda21(r2)
/* 801E92B8 001E6398  C9 22 B4 70 */	lfd f9, "@105"@sda21(r2)
/* 801E92BC 001E639C  FC 8A 21 7A */	fmadd f4, f10, f5, f4
/* 801E92C0 001E63A0  FC AA 3A 3A */	fmadd f5, f10, f8, f7
/* 801E92C4 001E63A4  FC 6A 19 3A */	fmadd f3, f10, f4, f3
/* 801E92C8 001E63A8  FC 8A 31 7A */	fmadd f4, f10, f5, f6
/* 801E92CC 001E63AC  FC 4A 10 FA */	fmadd f2, f10, f3, f2
/* 801E92D0 001E63B0  FC 6A 01 32 */	fmul f3, f10, f4
/* 801E92D4 001E63B4  FC 43 10 24 */	fdiv f2, f3, f2
/* 801E92D8 001E63B8  FC 01 00 BC */	fnmsub f0, f1, f2, f0
/* 801E92DC 001E63BC  FC 01 00 28 */	fsub f0, f1, f0
/* 801E92E0 001E63C0  FC 29 00 28 */	fsub f1, f9, f0
/* 801E92E4 001E63C4  48 00 02 28 */	b .L_801E950C
.L_801E92E8:
/* 801E92E8 001E63C8  2C 04 00 00 */	cmpwi r4, 0x0
/* 801E92EC 001E63CC  40 80 01 08 */	bge .L_801E93F4
/* 801E92F0 001E63D0  C9 42 B4 B0 */	lfd f10, "@113"@sda21(r2)
/* 801E92F4 001E63D4  C8 02 B4 D8 */	lfd f0, "@118"@sda21(r2)
/* 801E92F8 001E63D8  FC 2A 08 2A */	fadd f1, f10, f1
/* 801E92FC 001E63DC  C8 A2 B4 A8 */	lfd f5, "@112"@sda21(r2)
/* 801E9300 001E63E0  C8 82 B4 A0 */	lfd f4, "@111"@sda21(r2)
/* 801E9304 001E63E4  C9 02 B4 98 */	lfd f8, "@110"@sda21(r2)
/* 801E9308 001E63E8  FC 20 00 72 */	fmul f1, f0, f1
/* 801E930C 001E63EC  C9 62 B4 60 */	lfd f11, "@103"@sda21(r2)
/* 801E9310 001E63F0  C8 E2 B4 90 */	lfd f7, "@109"@sda21(r2)
/* 801E9314 001E63F4  C8 62 B4 D0 */	lfd f3, "@117"@sda21(r2)
/* 801E9318 001E63F8  C8 42 B4 C8 */	lfd f2, "@116"@sda21(r2)
/* 801E931C 001E63FC  FD 25 20 7A */	fmadd f9, f5, f1, f4
/* 801E9320 001E6400  C8 C2 B4 88 */	lfd f6, "@108"@sda21(r2)
/* 801E9324 001E6404  FC 83 10 7A */	fmadd f4, f3, f1, f2
/* 801E9328 001E6408  C8 62 B4 C0 */	lfd f3, "@115"@sda21(r2)
/* 801E932C 001E640C  C8 A2 B4 80 */	lfd f5, "@107"@sda21(r2)
/* 801E9330 001E6410  FD 01 42 7A */	fmadd f8, f1, f9, f8
/* 801E9334 001E6414  C8 42 B4 B8 */	lfd f2, "@114"@sda21(r2)
/* 801E9338 001E6418  FC 61 19 3A */	fmadd f3, f1, f4, f3
/* 801E933C 001E641C  FC 81 3A 3A */	fmadd f4, f1, f8, f7
/* 801E9340 001E6420  FC 41 10 FA */	fmadd f2, f1, f3, f2
/* 801E9344 001E6424  FC 61 31 3A */	fmadd f3, f1, f4, f6
/* 801E9348 001E6428  FC C1 50 BA */	fmadd f6, f1, f2, f10
/* 801E934C 001E642C  FC 41 28 FA */	fmadd f2, f1, f3, f5
/* 801E9350 001E6430  FC 01 58 40 */	fcmpo cr0, f1, f11
/* 801E9354 001E6434  FC A1 00 B2 */	fmul f5, f1, f2
/* 801E9358 001E6438  40 81 00 54 */	ble .L_801E93AC
/* 801E935C 001E643C  FC 60 08 34 */	frsqrte f3, f1
/* 801E9360 001E6440  C8 82 B4 E0 */	lfd f4, "@119"@sda21(r2)
/* 801E9364 001E6444  FC 43 00 F2 */	fmul f2, f3, f3
/* 801E9368 001E6448  FC 60 00 F2 */	fmul f3, f0, f3
/* 801E936C 001E644C  FC 41 20 BC */	fnmsub f2, f1, f2, f4
/* 801E9370 001E6450  FC 63 00 B2 */	fmul f3, f3, f2
/* 801E9374 001E6454  FC 43 00 F2 */	fmul f2, f3, f3
/* 801E9378 001E6458  FC 60 00 F2 */	fmul f3, f0, f3
/* 801E937C 001E645C  FC 41 20 BC */	fnmsub f2, f1, f2, f4
/* 801E9380 001E6460  FC 63 00 B2 */	fmul f3, f3, f2
/* 801E9384 001E6464  FC 43 00 F2 */	fmul f2, f3, f3
/* 801E9388 001E6468  FC 60 00 F2 */	fmul f3, f0, f3
/* 801E938C 001E646C  FC 41 20 BC */	fnmsub f2, f1, f2, f4
/* 801E9390 001E6470  FC 63 00 B2 */	fmul f3, f3, f2
/* 801E9394 001E6474  FC 43 00 F2 */	fmul f2, f3, f3
/* 801E9398 001E6478  FC 60 00 F2 */	fmul f3, f0, f3
/* 801E939C 001E647C  FC 01 20 BC */	fnmsub f0, f1, f2, f4
/* 801E93A0 001E6480  FC 03 00 32 */	fmul f0, f3, f0
/* 801E93A4 001E6484  FD 61 00 32 */	fmul f11, f1, f0
/* 801E93A8 001E6488  48 00 00 2C */	b .L_801E93D4
.L_801E93AC:
/* 801E93AC 001E648C  FC 0B 08 00 */	fcmpu cr0, f11, f1
/* 801E93B0 001E6490  40 82 00 08 */	bne .L_801E93B8
/* 801E93B4 001E6494  48 00 00 20 */	b .L_801E93D4
.L_801E93B8:
/* 801E93B8 001E6498  FC 01 58 00 */	fcmpu cr0, f1, f11
/* 801E93BC 001E649C  41 82 00 10 */	beq .L_801E93CC
/* 801E93C0 001E64A0  3C 60 80 3D */	lis r3, __float_nan@ha
/* 801E93C4 001E64A4  C1 63 AF B8 */	lfs f11, __float_nan@l(r3)
/* 801E93C8 001E64A8  48 00 00 0C */	b .L_801E93D4
.L_801E93CC:
/* 801E93CC 001E64AC  3C 60 80 3D */	lis r3, __float_huge@ha
/* 801E93D0 001E64B0  C1 63 AF BC */	lfs f11, __float_huge@l(r3)
.L_801E93D4:
/* 801E93D4 001E64B4  FC 45 30 24 */	fdiv f2, f5, f6
/* 801E93D8 001E64B8  C8 22 B4 78 */	lfd f1, "@106"@sda21(r2)
/* 801E93DC 001E64BC  C8 62 B4 E8 */	lfd f3, "@120"@sda21(r2)
/* 801E93E0 001E64C0  C8 02 B4 68 */	lfd f0, "@104"@sda21(r2)
/* 801E93E4 001E64C4  FC 22 0A F8 */	fmsub f1, f2, f11, f1
/* 801E93E8 001E64C8  FC 2B 08 2A */	fadd f1, f11, f1
/* 801E93EC 001E64CC  FC 23 00 7C */	fnmsub f1, f3, f1, f0
/* 801E93F0 001E64D0  48 00 01 1C */	b .L_801E950C
.L_801E93F4:
/* 801E93F4 001E64D4  C8 02 B4 B0 */	lfd f0, "@113"@sda21(r2)
/* 801E93F8 001E64D8  C8 82 B4 D8 */	lfd f4, "@118"@sda21(r2)
/* 801E93FC 001E64DC  FC 00 08 28 */	fsub f0, f0, f1
/* 801E9400 001E64E0  C9 22 B4 60 */	lfd f9, "@103"@sda21(r2)
/* 801E9404 001E64E4  FC 04 00 32 */	fmul f0, f4, f0
/* 801E9408 001E64E8  FC 00 48 40 */	fcmpo cr0, f0, f9
/* 801E940C 001E64EC  40 81 00 54 */	ble .L_801E9460
/* 801E9410 001E64F0  FC 40 00 34 */	frsqrte f2, f0
/* 801E9414 001E64F4  C8 62 B4 E0 */	lfd f3, "@119"@sda21(r2)
/* 801E9418 001E64F8  FC 22 00 B2 */	fmul f1, f2, f2
/* 801E941C 001E64FC  FC 44 00 B2 */	fmul f2, f4, f2
/* 801E9420 001E6500  FC 20 18 7C */	fnmsub f1, f0, f1, f3
/* 801E9424 001E6504  FC 42 00 72 */	fmul f2, f2, f1
/* 801E9428 001E6508  FC 22 00 B2 */	fmul f1, f2, f2
/* 801E942C 001E650C  FC 44 00 B2 */	fmul f2, f4, f2
/* 801E9430 001E6510  FC 20 18 7C */	fnmsub f1, f0, f1, f3
/* 801E9434 001E6514  FC 42 00 72 */	fmul f2, f2, f1
/* 801E9438 001E6518  FC 22 00 B2 */	fmul f1, f2, f2
/* 801E943C 001E651C  FC 44 00 B2 */	fmul f2, f4, f2
/* 801E9440 001E6520  FC 20 18 7C */	fnmsub f1, f0, f1, f3
/* 801E9444 001E6524  FC 42 00 72 */	fmul f2, f2, f1
/* 801E9448 001E6528  FC 22 00 B2 */	fmul f1, f2, f2
/* 801E944C 001E652C  FC 44 00 B2 */	fmul f2, f4, f2
/* 801E9450 001E6530  FC 20 18 7C */	fnmsub f1, f0, f1, f3
/* 801E9454 001E6534  FC 22 00 72 */	fmul f1, f2, f1
/* 801E9458 001E6538  FD 20 00 72 */	fmul f9, f0, f1
/* 801E945C 001E653C  48 00 00 2C */	b .L_801E9488
.L_801E9460:
/* 801E9460 001E6540  FC 09 00 00 */	fcmpu cr0, f9, f0
/* 801E9464 001E6544  40 82 00 08 */	bne .L_801E946C
/* 801E9468 001E6548  48 00 00 20 */	b .L_801E9488
.L_801E946C:
/* 801E946C 001E654C  FC 00 48 00 */	fcmpu cr0, f0, f9
/* 801E9470 001E6550  41 82 00 10 */	beq .L_801E9480
/* 801E9474 001E6554  3C 60 80 3D */	lis r3, __float_nan@ha
/* 801E9478 001E6558  C1 23 AF B8 */	lfs f9, __float_nan@l(r3)
/* 801E947C 001E655C  48 00 00 0C */	b .L_801E9488
.L_801E9480:
/* 801E9480 001E6560  3C 60 80 3D */	lis r3, __float_huge@ha
/* 801E9484 001E6564  C1 23 AF BC */	lfs f9, __float_huge@l(r3)
.L_801E9488:
/* 801E9488 001E6568  C8 42 B4 A8 */	lfd f2, "@112"@sda21(r2)
/* 801E948C 001E656C  38 00 00 00 */	li r0, 0x0
/* 801E9490 001E6570  C8 22 B4 A0 */	lfd f1, "@111"@sda21(r2)
/* 801E9494 001E6574  D9 21 00 10 */	stfd f9, 0x10(r1)
/* 801E9498 001E6578  FC 62 08 3A */	fmadd f3, f2, f0, f1
/* 801E949C 001E657C  C8 42 B4 98 */	lfd f2, "@110"@sda21(r2)
/* 801E94A0 001E6580  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E94A4 001E6584  C8 22 B4 90 */	lfd f1, "@109"@sda21(r2)
/* 801E94A8 001E6588  C9 41 00 10 */	lfd f10, 0x10(r1)
/* 801E94AC 001E658C  FC A0 10 FA */	fmadd f5, f0, f3, f2
/* 801E94B0 001E6590  C8 82 B4 D0 */	lfd f4, "@117"@sda21(r2)
/* 801E94B4 001E6594  C8 42 B4 C8 */	lfd f2, "@116"@sda21(r2)
/* 801E94B8 001E6598  FC 6A 02 BC */	fnmsub f3, f10, f10, f0
/* 801E94BC 001E659C  C8 E2 B4 88 */	lfd f7, "@108"@sda21(r2)
/* 801E94C0 001E65A0  FD 00 09 7A */	fmadd f8, f0, f5, f1
/* 801E94C4 001E65A4  C8 22 B4 C0 */	lfd f1, "@115"@sda21(r2)
/* 801E94C8 001E65A8  FC A4 10 3A */	fmadd f5, f4, f0, f2
/* 801E94CC 001E65AC  C8 C2 B4 80 */	lfd f6, "@107"@sda21(r2)
/* 801E94D0 001E65B0  C8 42 B4 B8 */	lfd f2, "@114"@sda21(r2)
/* 801E94D4 001E65B4  FC E0 3A 3A */	fmadd f7, f0, f8, f7
/* 801E94D8 001E65B8  C8 82 B4 B0 */	lfd f4, "@113"@sda21(r2)
/* 801E94DC 001E65BC  FC A0 09 7A */	fmadd f5, f0, f5, f1
/* 801E94E0 001E65C0  C8 22 B4 E8 */	lfd f1, "@120"@sda21(r2)
/* 801E94E4 001E65C4  FC C0 31 FA */	fmadd f6, f0, f7, f6
/* 801E94E8 001E65C8  FC A0 11 7A */	fmadd f5, f0, f5, f2
/* 801E94EC 001E65CC  FC 49 50 2A */	fadd f2, f9, f10
/* 801E94F0 001E65D0  FC C0 01 B2 */	fmul f6, f0, f6
/* 801E94F4 001E65D4  FC 80 21 7A */	fmadd f4, f0, f5, f4
/* 801E94F8 001E65D8  FC 03 10 24 */	fdiv f0, f3, f2
/* 801E94FC 001E65DC  FC 46 20 24 */	fdiv f2, f6, f4
/* 801E9500 001E65E0  FC 02 02 7A */	fmadd f0, f2, f9, f0
/* 801E9504 001E65E4  FC 0A 00 2A */	fadd f0, f10, f0
/* 801E9508 001E65E8  FC 21 00 32 */	fmul f1, f1, f0
.L_801E950C:
/* 801E950C 001E65EC  38 21 00 20 */	addi r1, r1, 0x20
/* 801E9510 001E65F0  4E 80 00 20 */	blr
.endfn __ieee754_acos

# 0x803CFDE0 - 0x803CFE70
.section .sdata2, "a"
.balign 8

.obj "@103", local
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@103"

.obj "@104", local
	.4byte 0x400921FB
	.4byte 0x54442D18
.endobj "@104"

.obj "@105", local
	.4byte 0x3FF921FB
	.4byte 0x54442D18
.endobj "@105"

.obj "@106", local
	.4byte 0x3C91A626
	.4byte 0x33145C07
.endobj "@106"

.obj "@107", local
	.4byte 0x3FC55555
	.4byte 0x55555555
.endobj "@107"

.obj "@108", local
	.4byte 0xBFD4D612
	.4byte 0x03EB6F7D
.endobj "@108"

.obj "@109", local
	.4byte 0x3FC9C155
	.4byte 0x0E884455
.endobj "@109"

.obj "@110", local
	.4byte 0xBFA48228
	.4byte 0xB5688F3B
.endobj "@110"

.obj "@111", local
	.4byte 0x3F49EFE0
	.4byte 0x7501B288
.endobj "@111"

.obj "@112", local
	.4byte 0x3F023DE1
	.4byte 0x0DFDF709
.endobj "@112"

.obj "@113", local
	.4byte 0x3FF00000
	.4byte 0x00000000
.endobj "@113"

.obj "@114", local
	.4byte 0xC0033A27
	.4byte 0x1C8A2D4B
.endobj "@114"

.obj "@115", local
	.4byte 0x40002AE5
	.4byte 0x9C598AC8
.endobj "@115"

.obj "@116", local
	.4byte 0xBFE6066C
	.4byte 0x1B8D0159
.endobj "@116"

.obj "@117", local
	.4byte 0x3FB3B8C5
	.4byte 0xB12E9282
.endobj "@117"

.obj "@118", local
	.4byte 0x3FE00000
	.4byte 0x00000000
.endobj "@118"

.obj "@119", local
	.4byte 0x40080000
	.4byte 0x00000000
.endobj "@119"

.obj "@120", local
	.4byte 0x40000000
	.4byte 0x00000000
.endobj "@120"
