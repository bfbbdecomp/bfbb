.include "macros.inc"
.file "PPCArch.c"

# 0x801BAC70 - 0x801BAD84
.text
.balign 4

.fn PPCMfmsr, global
/* 801BAC70 001B7D50  7C 60 00 A6 */	mfmsr r3
/* 801BAC74 001B7D54  4E 80 00 20 */	blr
.endfn PPCMfmsr

.fn PPCMtmsr, global
/* 801BAC78 001B7D58  7C 60 01 24 */	mtmsr r3
/* 801BAC7C 001B7D5C  4E 80 00 20 */	blr
.endfn PPCMtmsr

.fn PPCMfhid0, global
/* 801BAC80 001B7D60  7C 70 FA A6 */	mfspr r3, HID0
/* 801BAC84 001B7D64  4E 80 00 20 */	blr
.endfn PPCMfhid0

.fn PPCMthid0, global
/* 801BAC88 001B7D68  7C 70 FB A6 */	mtspr HID0, r3
/* 801BAC8C 001B7D6C  4E 80 00 20 */	blr
.endfn PPCMthid0

.fn PPCMfl2cr, global
/* 801BAC90 001B7D70  7C 79 FA A6 */	mfspr r3, L2CR
/* 801BAC94 001B7D74  4E 80 00 20 */	blr
.endfn PPCMfl2cr

.fn PPCMtl2cr, global
/* 801BAC98 001B7D78  7C 79 FB A6 */	mtspr L2CR, r3
/* 801BAC9C 001B7D7C  4E 80 00 20 */	blr
.endfn PPCMtl2cr

.fn PPCMtdec, weak
/* 801BACA0 001B7D80  7C 76 03 A6 */	mtdec r3
/* 801BACA4 001B7D84  4E 80 00 20 */	blr
.endfn PPCMtdec

.fn PPCSync, global
/* 801BACA8 001B7D88  44 00 00 02 */	sc
/* 801BACAC 001B7D8C  4E 80 00 20 */	blr
.endfn PPCSync

.fn PPCHalt, weak
/* 801BACB0 001B7D90  7C 00 04 AC */	sync
.L_801BACB4:
/* 801BACB4 001B7D94  60 00 00 00 */	nop
/* 801BACB8 001B7D98  38 60 00 00 */	li r3, 0x0
/* 801BACBC 001B7D9C  60 00 00 00 */	nop
/* 801BACC0 001B7DA0  4B FF FF F4 */	b .L_801BACB4
.endfn PPCHalt

.fn PPCMtmmcr0, global
/* 801BACC4 001B7DA4  7C 78 EB A6 */	mtspr MMCR0, r3
/* 801BACC8 001B7DA8  4E 80 00 20 */	blr
.endfn PPCMtmmcr0

.fn PPCMtmmcr1, global
/* 801BACCC 001B7DAC  7C 7C EB A6 */	mtspr MMCR1, r3
/* 801BACD0 001B7DB0  4E 80 00 20 */	blr
.endfn PPCMtmmcr1

.fn PPCMtpmc1, global
/* 801BACD4 001B7DB4  7C 79 EB A6 */	mtspr PMC1, r3
/* 801BACD8 001B7DB8  4E 80 00 20 */	blr
.endfn PPCMtpmc1

.fn PPCMtpmc2, global
/* 801BACDC 001B7DBC  7C 7A EB A6 */	mtspr PMC2, r3
/* 801BACE0 001B7DC0  4E 80 00 20 */	blr
.endfn PPCMtpmc2

.fn PPCMtpmc3, global
/* 801BACE4 001B7DC4  7C 7D EB A6 */	mtspr PMC3, r3
/* 801BACE8 001B7DC8  4E 80 00 20 */	blr
.endfn PPCMtpmc3

.fn PPCMtpmc4, global
/* 801BACEC 001B7DCC  7C 7E EB A6 */	mtspr PMC4, r3
/* 801BACF0 001B7DD0  4E 80 00 20 */	blr
.endfn PPCMtpmc4

.fn PPCMffpscr, global
/* 801BACF4 001B7DD4  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 801BACF8 001B7DD8  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 801BACFC 001B7DDC  FF E0 04 8E */	mffs f31
/* 801BAD00 001B7DE0  DB E1 00 08 */	stfd f31, 0x8(r1)
/* 801BAD04 001B7DE4  80 61 00 0C */	lwz r3, 0xc(r1)
/* 801BAD08 001B7DE8  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 801BAD0C 001B7DEC  38 21 00 18 */	addi r1, r1, 0x18
/* 801BAD10 001B7DF0  4E 80 00 20 */	blr
.endfn PPCMffpscr

.fn PPCMtfpscr, global
/* 801BAD14 001B7DF4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801BAD18 001B7DF8  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 801BAD1C 001B7DFC  38 80 00 00 */	li r4, 0x0
/* 801BAD20 001B7E00  90 81 00 10 */	stw r4, 0x10(r1)
/* 801BAD24 001B7E04  90 61 00 14 */	stw r3, 0x14(r1)
/* 801BAD28 001B7E08  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 801BAD2C 001B7E0C  FD FE FD 8E */	mtfsf 255, f31
/* 801BAD30 001B7E10  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 801BAD34 001B7E14  38 21 00 20 */	addi r1, r1, 0x20
/* 801BAD38 001B7E18  4E 80 00 20 */	blr
.endfn PPCMtfpscr

.fn PPCMfhid2, global
/* 801BAD3C 001B7E1C  7C 78 E2 A6 */	mfspr r3, HID2
/* 801BAD40 001B7E20  4E 80 00 20 */	blr
.endfn PPCMfhid2

.fn PPCMthid2, global
/* 801BAD44 001B7E24  7C 78 E3 A6 */	mtspr HID2, r3
/* 801BAD48 001B7E28  4E 80 00 20 */	blr
.endfn PPCMthid2

.fn PPCMtwpar, global
/* 801BAD4C 001B7E2C  7C 79 E3 A6 */	mtspr WPAR, r3
/* 801BAD50 001B7E30  4E 80 00 20 */	blr
.endfn PPCMtwpar

.fn PPCDisableSpeculation, global
/* 801BAD54 001B7E34  7C 08 02 A6 */	mflr r0
/* 801BAD58 001B7E38  90 01 00 04 */	stw r0, 0x4(r1)
/* 801BAD5C 001B7E3C  94 21 FF F8 */	stwu r1, -0x8(r1)
/* 801BAD60 001B7E40  4B FF FF 21 */	bl PPCMfhid0
/* 801BAD64 001B7E44  60 63 02 00 */	ori r3, r3, 0x200
/* 801BAD68 001B7E48  4B FF FF 21 */	bl PPCMthid0
/* 801BAD6C 001B7E4C  80 01 00 0C */	lwz r0, 0xc(r1)
/* 801BAD70 001B7E50  38 21 00 08 */	addi r1, r1, 0x8
/* 801BAD74 001B7E54  7C 08 03 A6 */	mtlr r0
/* 801BAD78 001B7E58  4E 80 00 20 */	blr
.endfn PPCDisableSpeculation

.fn PPCSetFpNonIEEEMode, global
/* 801BAD7C 001B7E5C  FF A0 00 4C */	mtfsb1 4*cr7+gt
/* 801BAD80 001B7E60  4E 80 00 20 */	blr
.endfn PPCSetFpNonIEEEMode
