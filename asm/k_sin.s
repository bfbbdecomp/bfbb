.include "macros.inc"
.file "k_sin.c"

# 0x801EBD80 - 0x801EBE20
.text
.balign 4

.fn __kernel_sin, global
/* 801EBD80 001E8E60  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801EBD84 001E8E64  3C 00 3E 40 */	lis r0, 0x3e40
/* 801EBD88 001E8E68  D8 21 00 08 */	stfd f1, 0x8(r1)
/* 801EBD8C 001E8E6C  80 81 00 08 */	lwz r4, 0x8(r1)
/* 801EBD90 001E8E70  54 84 00 7E */	clrlwi r4, r4, 1
/* 801EBD94 001E8E74  7C 04 00 00 */	cmpw r4, r0
/* 801EBD98 001E8E78  40 80 00 1C */	bge .L_801EBDB4
/* 801EBD9C 001E8E7C  FC 00 08 1E */	fctiwz f0, f1
/* 801EBDA0 001E8E80  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 801EBDA4 001E8E84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EBDA8 001E8E88  2C 00 00 00 */	cmpwi r0, 0x0
/* 801EBDAC 001E8E8C  40 82 00 08 */	bne .L_801EBDB4
/* 801EBDB0 001E8E90  48 00 00 68 */	b .L_801EBE18
.L_801EBDB4:
/* 801EBDB4 001E8E94  C8 C1 00 08 */	lfd f6, 0x8(r1)
/* 801EBDB8 001E8E98  2C 03 00 00 */	cmpwi r3, 0x0
/* 801EBDBC 001E8E9C  C8 A2 B8 E8 */	lfd f5, "@65"@sda21(r2)
/* 801EBDC0 001E8EA0  FC E6 01 B2 */	fmul f7, f6, f6
/* 801EBDC4 001E8EA4  C8 82 B8 E0 */	lfd f4, "@64"@sda21(r2)
/* 801EBDC8 001E8EA8  C8 62 B8 D8 */	lfd f3, "@63"@sda21(r2)
/* 801EBDCC 001E8EAC  C8 22 B8 D0 */	lfd f1, "@62"@sda21(r2)
/* 801EBDD0 001E8EB0  C8 02 B8 C8 */	lfd f0, "@61"@sda21(r2)
/* 801EBDD4 001E8EB4  FC 85 21 FA */	fmadd f4, f5, f7, f4
/* 801EBDD8 001E8EB8  FC A7 01 B2 */	fmul f5, f7, f6
/* 801EBDDC 001E8EBC  FC 67 19 3A */	fmadd f3, f7, f4, f3
/* 801EBDE0 001E8EC0  FC 27 08 FA */	fmadd f1, f7, f3, f1
/* 801EBDE4 001E8EC4  FC 27 00 7A */	fmadd f1, f7, f1, f0
/* 801EBDE8 001E8EC8  40 82 00 14 */	bne .L_801EBDFC
/* 801EBDEC 001E8ECC  C8 02 B8 F0 */	lfd f0, "@66"@sda21(r2)
/* 801EBDF0 001E8ED0  FC 07 00 7A */	fmadd f0, f7, f1, f0
/* 801EBDF4 001E8ED4  FC 25 30 3A */	fmadd f1, f5, f0, f6
/* 801EBDF8 001E8ED8  48 00 00 20 */	b .L_801EBE18
.L_801EBDFC:
/* 801EBDFC 001E8EDC  FC 05 00 72 */	fmul f0, f5, f1
/* 801EBE00 001E8EE0  C8 22 B8 F8 */	lfd f1, "@67"@sda21(r2)
/* 801EBE04 001E8EE4  C8 62 B8 F0 */	lfd f3, "@66"@sda21(r2)
/* 801EBE08 001E8EE8  FC 01 00 B8 */	fmsub f0, f1, f2, f0
/* 801EBE0C 001E8EEC  FC 07 10 38 */	fmsub f0, f7, f0, f2
/* 801EBE10 001E8EF0  FC 03 01 7C */	fnmsub f0, f3, f5, f0
/* 801EBE14 001E8EF4  FC 26 00 28 */	fsub f1, f6, f0
.L_801EBE18:
/* 801EBE18 001E8EF8  38 21 00 20 */	addi r1, r1, 0x20
/* 801EBE1C 001E8EFC  4E 80 00 20 */	blr
.endfn __kernel_sin

# 0x803D0248 - 0x803D0280
.section .sdata2, "a"
.balign 8

.obj "@61", local
	.4byte 0x3F811111
	.4byte 0x1110F8A6
.endobj "@61"

.obj "@62", local
	.4byte 0xBF2A01A0
	.4byte 0x19C161D5
.endobj "@62"

.obj "@63", local
	.4byte 0x3EC71DE3
	.4byte 0x57B1FE7D
.endobj "@63"

.obj "@64", local
	.4byte 0xBE5AE5E6
	.4byte 0x8A2B9CEB
.endobj "@64"

.obj "@65", local
	.4byte 0x3DE5D93A
	.4byte 0x5ACFD57C
.endobj "@65"

.obj "@66", local
	.4byte 0xBFC55555
	.4byte 0x55555549
.endobj "@66"

.obj "@67", local
	.4byte 0x3FE00000
	.4byte 0x00000000
.endobj "@67"
