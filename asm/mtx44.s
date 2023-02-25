.include "macros.inc"
.file "mtx44.c"

# 0x801D0A9C - 0x801D0B34
.text
.balign 4

.fn C_MTXOrtho, global
/* 801D0A9C 001CDB7C  ED 04 18 28 */	fsubs f8, f4, f3
/* 801D0AA0 001CDB80  C1 22 B3 F0 */	lfs f9, "@99"@sda21(r2)
/* 801D0AA4 001CDB84  EC 01 10 28 */	fsubs f0, f1, f2
/* 801D0AA8 001CDB88  C0 E2 B3 F4 */	lfs f7, "@100"@sda21(r2)
/* 801D0AAC 001CDB8C  EC 64 18 2A */	fadds f3, f4, f3
/* 801D0AB0 001CDB90  ED 49 40 24 */	fdivs f10, f9, f8
/* 801D0AB4 001CDB94  ED 09 00 24 */	fdivs f8, f9, f0
/* 801D0AB8 001CDB98  EC 87 02 B2 */	fmuls f4, f7, f10
/* 801D0ABC 001CDB9C  FC 60 18 50 */	fneg f3, f3
/* 801D0AC0 001CDBA0  EC 06 28 28 */	fsubs f0, f6, f5
/* 801D0AC4 001CDBA4  D0 83 00 00 */	stfs f4, 0x0(r3)
/* 801D0AC8 001CDBA8  EC 21 10 2A */	fadds f1, f1, f2
/* 801D0ACC 001CDBAC  EC 4A 00 F2 */	fmuls f2, f10, f3
/* 801D0AD0 001CDBB0  C0 62 B3 F8 */	lfs f3, "@101"@sda21(r2)
/* 801D0AD4 001CDBB4  FC 20 08 50 */	fneg f1, f1
/* 801D0AD8 001CDBB8  D0 63 00 04 */	stfs f3, 0x4(r3)
/* 801D0ADC 001CDBBC  EC 89 00 24 */	fdivs f4, f9, f0
/* 801D0AE0 001CDBC0  D0 63 00 08 */	stfs f3, 0x8(r3)
/* 801D0AE4 001CDBC4  D0 43 00 0C */	stfs f2, 0xc(r3)
/* 801D0AE8 001CDBC8  D0 63 00 10 */	stfs f3, 0x10(r3)
/* 801D0AEC 001CDBCC  EC 47 02 32 */	fmuls f2, f7, f8
/* 801D0AF0 001CDBD0  FC 00 30 50 */	fneg f0, f6
/* 801D0AF4 001CDBD4  EC 28 00 72 */	fmuls f1, f8, f1
/* 801D0AF8 001CDBD8  D0 43 00 14 */	stfs f2, 0x14(r3)
/* 801D0AFC 001CDBDC  EC 00 01 32 */	fmuls f0, f0, f4
/* 801D0B00 001CDBE0  D0 63 00 18 */	stfs f3, 0x18(r3)
/* 801D0B04 001CDBE4  D0 23 00 1C */	stfs f1, 0x1c(r3)
/* 801D0B08 001CDBE8  D0 63 00 20 */	stfs f3, 0x20(r3)
/* 801D0B0C 001CDBEC  D0 63 00 24 */	stfs f3, 0x24(r3)
/* 801D0B10 001CDBF0  C0 22 B3 FC */	lfs f1, "@102"@sda21(r2)
/* 801D0B14 001CDBF4  EC 21 01 32 */	fmuls f1, f1, f4
/* 801D0B18 001CDBF8  D0 23 00 28 */	stfs f1, 0x28(r3)
/* 801D0B1C 001CDBFC  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 801D0B20 001CDC00  D0 63 00 30 */	stfs f3, 0x30(r3)
/* 801D0B24 001CDC04  D0 63 00 34 */	stfs f3, 0x34(r3)
/* 801D0B28 001CDC08  D0 63 00 38 */	stfs f3, 0x38(r3)
/* 801D0B2C 001CDC0C  D1 23 00 3C */	stfs f9, 0x3c(r3)
/* 801D0B30 001CDC10  4E 80 00 20 */	blr
.endfn C_MTXOrtho

# 0x803CFD70 - 0x803CFD80
.section .sdata2, "a"
.balign 8

.obj "@99", local
	.4byte 0x3F800000
.endobj "@99"

.obj "@100", local
	.4byte 0x40000000
.endobj "@100"

.obj "@101", local
	.4byte 0x00000000
.endobj "@101"

.obj "@102", local
	.4byte 0xBF800000
.endobj "@102"
