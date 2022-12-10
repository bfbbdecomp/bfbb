.include "macros.inc"
.file "db.c"

# 0x801C1CF0 - 0x801C1DDC
.text
.balign 4
.L_801C1CF0:

.fn DBInit, global
/* 801C1CF0 001BEDD0  3C 80 80 00 */	lis r4, 0x8000
/* 801C1CF4 001BEDD4  38 04 00 40 */	addi r0, r4, 0x40
/* 801C1CF8 001BEDD8  3C 60 80 1C */	lis r3, __DBExceptionDestination@ha
/* 801C1CFC 001BEDDC  90 0D 9A 90 */	stw r0, __DBInterface@sda21(r13)
/* 801C1D00 001BEDE0  38 63 1D 60 */	addi r3, r3, __DBExceptionDestination@l
/* 801C1D04 001BEDE4  3C 03 80 00 */	addis r0, r3, 0x8000
/* 801C1D08 001BEDE8  90 04 00 48 */	stw r0, 0x48(r4)
/* 801C1D0C 001BEDEC  38 00 00 01 */	li r0, 0x1
/* 801C1D10 001BEDF0  90 0D 9A 94 */	stw r0, DBVerbose@sda21(r13)
/* 801C1D14 001BEDF4  4E 80 00 20 */	blr
.endfn DBInit

.fn __DBExceptionDestinationAux, global
/* 801C1D18 001BEDF8  7C 08 02 A6 */	mflr r0
/* 801C1D1C 001BEDFC  3C 60 80 2B */	lis r3, "@9"@ha
/* 801C1D20 001BEE00  90 01 00 04 */	stw r0, 0x4(r1)
/* 801C1D24 001BEE04  38 63 40 C0 */	addi r3, r3, "@9"@l
/* 801C1D28 001BEE08  4C C6 31 82 */	crclr 4*cr1+eq
/* 801C1D2C 001BEE0C  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 801C1D30 001BEE10  93 E1 00 14 */	stw r31, 0x14(r1)
/* 801C1D34 001BEE14  80 80 00 C0 */	lwz r4, 0xc0(r0)
/* 801C1D38 001BEE18  3F E4 80 00 */	addis r31, r4, 0x8000
/* 801C1D3C 001BEE1C  48 01 11 C9 */	bl OSReport
/* 801C1D40 001BEE20  7F E3 FB 78 */	mr r3, r31
/* 801C1D44 001BEE24  48 01 0E 4D */	bl OSDumpContext
/* 801C1D48 001BEE28  4B FF 8F 69 */	bl PPCHalt
/* 801C1D4C 001BEE2C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 801C1D50 001BEE30  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 801C1D54 001BEE34  38 21 00 18 */	addi r1, r1, 0x18
/* 801C1D58 001BEE38  7C 08 03 A6 */	mtlr r0
/* 801C1D5C 001BEE3C  4E 80 00 20 */	blr
.endfn __DBExceptionDestinationAux

.fn __DBExceptionDestination, global
/* 801C1D60 001BEE40  7C 60 00 A6 */	mfmsr r3
/* 801C1D64 001BEE44  60 63 00 30 */	ori r3, r3, 0x30
/* 801C1D68 001BEE48  7C 60 01 24 */	mtmsr r3
/* 801C1D6C 001BEE4C  4B FF FF AC */	b __DBExceptionDestinationAux
.endfn __DBExceptionDestination

.fn __DBIsExceptionMarked, global
/* 801C1D70 001BEE50  80 8D 9A 90 */	lwz r4, __DBInterface@sda21(r13)
/* 801C1D74 001BEE54  54 60 06 3E */	clrlwi r0, r3, 24
/* 801C1D78 001BEE58  38 60 00 01 */	li r3, 0x1
/* 801C1D7C 001BEE5C  80 84 00 04 */	lwz r4, 0x4(r4)
/* 801C1D80 001BEE60  7C 60 00 30 */	slw r0, r3, r0
/* 801C1D84 001BEE64  7C 83 00 38 */	and r3, r4, r0
/* 801C1D88 001BEE68  4E 80 00 20 */	blr
.endfn __DBIsExceptionMarked

.fn DBPrintf, global
/* 801C1D8C 001BEE6C  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 801C1D90 001BEE70  40 86 00 24 */	bne cr1, .L_801C1DB4
/* 801C1D94 001BEE74  D8 21 00 28 */	stfd f1, 0x28(r1)
/* 801C1D98 001BEE78  D8 41 00 30 */	stfd f2, 0x30(r1)
/* 801C1D9C 001BEE7C  D8 61 00 38 */	stfd f3, 0x38(r1)
/* 801C1DA0 001BEE80  D8 81 00 40 */	stfd f4, 0x40(r1)
/* 801C1DA4 001BEE84  D8 A1 00 48 */	stfd f5, 0x48(r1)
/* 801C1DA8 001BEE88  D8 C1 00 50 */	stfd f6, 0x50(r1)
/* 801C1DAC 001BEE8C  D8 E1 00 58 */	stfd f7, 0x58(r1)
/* 801C1DB0 001BEE90  D9 01 00 60 */	stfd f8, 0x60(r1)
.L_801C1DB4:
/* 801C1DB4 001BEE94  90 61 00 08 */	stw r3, 0x8(r1)
/* 801C1DB8 001BEE98  90 81 00 0C */	stw r4, 0xc(r1)
/* 801C1DBC 001BEE9C  90 A1 00 10 */	stw r5, 0x10(r1)
/* 801C1DC0 001BEEA0  90 C1 00 14 */	stw r6, 0x14(r1)
/* 801C1DC4 001BEEA4  90 E1 00 18 */	stw r7, 0x18(r1)
/* 801C1DC8 001BEEA8  91 01 00 1C */	stw r8, 0x1c(r1)
/* 801C1DCC 001BEEAC  91 21 00 20 */	stw r9, 0x20(r1)
/* 801C1DD0 001BEEB0  91 41 00 24 */	stw r10, 0x24(r1)
/* 801C1DD4 001BEEB4  38 21 00 70 */	addi r1, r1, 0x70
/* 801C1DD8 001BEEB8  4E 80 00 20 */	blr
.endfn DBPrintf

# 0x802B40C0 - 0x802B40D8
.data
.balign 8

.obj "@9", local
	.4byte 0x44424578
	.4byte 0x63657074
	.4byte 0x696F6E44
	.4byte 0x65737469
	.4byte 0x6E617469
	.4byte 0x6F6E0A00
.endobj "@9"

# 0x803CC390 - 0x803CC398
.section .sbss, "wa", @nobits
.balign 8

.obj __DBInterface, global
	.skip 0x4
.endobj __DBInterface

.obj DBVerbose, global
	.skip 0x4
.endobj DBVerbose
