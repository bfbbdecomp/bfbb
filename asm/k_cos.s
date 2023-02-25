.include "macros.inc"
.file "k_cos.c"

# 0x801EAE38 - 0x801EAF2C
.text
.balign 4

.fn __kernel_cos, global
/* 801EAE38 001E7F18  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801EAE3C 001E7F1C  3C 00 3E 40 */	lis r0, 0x3e40
/* 801EAE40 001E7F20  D8 21 00 08 */	stfd f1, 0x8(r1)
/* 801EAE44 001E7F24  80 61 00 08 */	lwz r3, 0x8(r1)
/* 801EAE48 001E7F28  54 64 00 7E */	clrlwi r4, r3, 1
/* 801EAE4C 001E7F2C  7C 04 00 00 */	cmpw r4, r0
/* 801EAE50 001E7F30  40 80 00 20 */	bge .L_801EAE70
/* 801EAE54 001E7F34  FC 00 08 1E */	fctiwz f0, f1
/* 801EAE58 001E7F38  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 801EAE5C 001E7F3C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 801EAE60 001E7F40  2C 00 00 00 */	cmpwi r0, 0x0
/* 801EAE64 001E7F44  40 82 00 0C */	bne .L_801EAE70
/* 801EAE68 001E7F48  C8 22 B8 40 */	lfd f1, "@66"@sda21(r2)
/* 801EAE6C 001E7F4C  48 00 00 B8 */	b .L_801EAF24
.L_801EAE70:
/* 801EAE70 001E7F50  C8 C1 00 08 */	lfd f6, 0x8(r1)
/* 801EAE74 001E7F54  3C 60 3F D3 */	lis r3, 0x3fd3
/* 801EAE78 001E7F58  38 03 33 33 */	addi r0, r3, 0x3333
/* 801EAE7C 001E7F5C  C8 A2 B8 70 */	lfd f5, "@72"@sda21(r2)
/* 801EAE80 001E7F60  FC E6 01 B2 */	fmul f7, f6, f6
/* 801EAE84 001E7F64  C8 02 B8 68 */	lfd f0, "@71"@sda21(r2)
/* 801EAE88 001E7F68  C8 82 B8 60 */	lfd f4, "@70"@sda21(r2)
/* 801EAE8C 001E7F6C  7C 04 00 00 */	cmpw r4, r0
/* 801EAE90 001E7F70  C8 62 B8 58 */	lfd f3, "@69"@sda21(r2)
/* 801EAE94 001E7F74  C8 22 B8 50 */	lfd f1, "@68"@sda21(r2)
/* 801EAE98 001E7F78  FC A5 01 FA */	fmadd f5, f5, f7, f0
/* 801EAE9C 001E7F7C  C8 02 B8 48 */	lfd f0, "@67"@sda21(r2)
/* 801EAEA0 001E7F80  FC 87 21 7A */	fmadd f4, f7, f5, f4
/* 801EAEA4 001E7F84  FC 67 19 3A */	fmadd f3, f7, f4, f3
/* 801EAEA8 001E7F88  FC 27 08 FA */	fmadd f1, f7, f3, f1
/* 801EAEAC 001E7F8C  FC 07 00 7A */	fmadd f0, f7, f1, f0
/* 801EAEB0 001E7F90  FC 87 00 32 */	fmul f4, f7, f0
/* 801EAEB4 001E7F94  40 80 00 20 */	bge .L_801EAED4
/* 801EAEB8 001E7F98  FC 06 00 B2 */	fmul f0, f6, f2
/* 801EAEBC 001E7F9C  C8 22 B8 78 */	lfd f1, "@73"@sda21(r2)
/* 801EAEC0 001E7FA0  C8 42 B8 40 */	lfd f2, "@66"@sda21(r2)
/* 801EAEC4 001E7FA4  FC 07 01 38 */	fmsub f0, f7, f4, f0
/* 801EAEC8 001E7FA8  FC 01 01 F8 */	fmsub f0, f1, f7, f0
/* 801EAECC 001E7FAC  FC 22 00 28 */	fsub f1, f2, f0
/* 801EAED0 001E7FB0  48 00 00 54 */	b .L_801EAF24
.L_801EAED4:
/* 801EAED4 001E7FB4  3C 00 3F E9 */	lis r0, 0x3fe9
/* 801EAED8 001E7FB8  7C 04 00 00 */	cmpw r4, r0
/* 801EAEDC 001E7FBC  40 81 00 10 */	ble .L_801EAEEC
/* 801EAEE0 001E7FC0  C8 02 B8 80 */	lfd f0, "@74"@sda21(r2)
/* 801EAEE4 001E7FC4  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 801EAEE8 001E7FC8  48 00 00 14 */	b .L_801EAEFC
.L_801EAEEC:
/* 801EAEEC 001E7FCC  3C 64 FF E0 */	addis r3, r4, 0xffe0
/* 801EAEF0 001E7FD0  38 00 00 00 */	li r0, 0x0
/* 801EAEF4 001E7FD4  90 61 00 10 */	stw r3, 0x10(r1)
/* 801EAEF8 001E7FD8  90 01 00 14 */	stw r0, 0x14(r1)
.L_801EAEFC:
/* 801EAEFC 001E7FDC  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 801EAF00 001E7FE0  C8 61 00 10 */	lfd f3, 0x10(r1)
/* 801EAF04 001E7FE4  FC 00 00 B2 */	fmul f0, f0, f2
/* 801EAF08 001E7FE8  C8 22 B8 78 */	lfd f1, "@73"@sda21(r2)
/* 801EAF0C 001E7FEC  C8 42 B8 40 */	lfd f2, "@66"@sda21(r2)
/* 801EAF10 001E7FF0  FC 21 19 F8 */	fmsub f1, f1, f7, f3
/* 801EAF14 001E7FF4  FC 07 01 38 */	fmsub f0, f7, f4, f0
/* 801EAF18 001E7FF8  FC 42 18 28 */	fsub f2, f2, f3
/* 801EAF1C 001E7FFC  FC 01 00 28 */	fsub f0, f1, f0
/* 801EAF20 001E8000  FC 22 00 28 */	fsub f1, f2, f0
.L_801EAF24:
/* 801EAF24 001E8004  38 21 00 20 */	addi r1, r1, 0x20
/* 801EAF28 001E8008  4E 80 00 20 */	blr
.endfn __kernel_cos

# 0x803D01C0 - 0x803D0208
.section .sdata2, "a"
.balign 8

.obj "@66", local
	.4byte 0x3FF00000
	.4byte 0x00000000
.endobj "@66"

.obj "@67", local
	.4byte 0x3FA55555
	.4byte 0x5555554C
.endobj "@67"

.obj "@68", local
	.4byte 0xBF56C16C
	.4byte 0x16C15177
.endobj "@68"

.obj "@69", local
	.4byte 0x3EFA01A0
	.4byte 0x19CB1590
.endobj "@69"

.obj "@70", local
	.4byte 0xBE927E4F
	.4byte 0x809C52AD
.endobj "@70"

.obj "@71", local
	.4byte 0x3E21EE9E
	.4byte 0xBDB4B1C4
.endobj "@71"

.obj "@72", local
	.4byte 0xBDA8FAE9
	.4byte 0xBE8838D4
.endobj "@72"

.obj "@73", local
	.4byte 0x3FE00000
	.4byte 0x00000000
.endobj "@73"

.obj "@74", local
	.4byte 0x3FD20000
	.4byte 0x00000000
.endobj "@74"
