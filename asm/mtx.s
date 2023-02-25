.include "macros.inc"
.file "mtx.c"

# 0x801D097C - 0x801D0A9C
.text
.balign 4

.fn PSMTXIdentity, global
/* 801D097C 001CDA5C  C0 02 B3 EC */	lfs f0, "@97"@sda21(r2)
/* 801D0980 001CDA60  C0 22 B3 E8 */	lfs f1, "@96"@sda21(r2)
/* 801D0984 001CDA64  F0 03 00 08 */	psq_st f0, 0x8(r3), 0, qr0
/* 801D0988 001CDA68  10 40 0C 60 */	ps_merge01 f2, f0, f1
/* 801D098C 001CDA6C  F0 03 00 18 */	psq_st f0, 0x18(r3), 0, qr0
/* 801D0990 001CDA70  10 21 04 A0 */	ps_merge10 f1, f1, f0
/* 801D0994 001CDA74  F0 03 00 20 */	psq_st f0, 0x20(r3), 0, qr0
/* 801D0998 001CDA78  F0 43 00 10 */	psq_st f2, 0x10(r3), 0, qr0
/* 801D099C 001CDA7C  F0 23 00 00 */	psq_st f1, 0x0(r3), 0, qr0
/* 801D09A0 001CDA80  F0 23 00 28 */	psq_st f1, 0x28(r3), 0, qr0
/* 801D09A4 001CDA84  4E 80 00 20 */	blr
.endfn PSMTXIdentity

.fn PSMTXConcat, global
/* 801D09A8 001CDA88  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801D09AC 001CDA8C  E0 03 00 00 */	psq_l f0, 0x0(r3), 0, qr0
/* 801D09B0 001CDA90  D9 C1 00 08 */	stfd f14, 0x8(r1)
/* 801D09B4 001CDA94  E0 C4 00 00 */	psq_l f6, 0x0(r4), 0, qr0
/* 801D09B8 001CDA98  3C C0 80 3D */	lis r6, Unit01@ha
/* 801D09BC 001CDA9C  E0 E4 00 08 */	psq_l f7, 0x8(r4), 0, qr0
/* 801D09C0 001CDAA0  D9 E1 00 10 */	stfd f15, 0x10(r1)
/* 801D09C4 001CDAA4  38 C6 AF 28 */	addi r6, r6, Unit01@l
/* 801D09C8 001CDAA8  DB E1 00 28 */	stfd f31, 0x28(r1)
/* 801D09CC 001CDAAC  E1 04 00 10 */	psq_l f8, 0x10(r4), 0, qr0
/* 801D09D0 001CDAB0  11 86 00 18 */	ps_muls0 f12, f6, f0
/* 801D09D4 001CDAB4  E0 43 00 10 */	psq_l f2, 0x10(r3), 0, qr0
/* 801D09D8 001CDAB8  11 A7 00 18 */	ps_muls0 f13, f7, f0
/* 801D09DC 001CDABC  E3 E6 00 00 */	psq_l f31, 0x0(r6), 0, qr0
/* 801D09E0 001CDAC0  11 C6 00 98 */	ps_muls0 f14, f6, f2
/* 801D09E4 001CDAC4  E1 24 00 18 */	psq_l f9, 0x18(r4), 0, qr0
/* 801D09E8 001CDAC8  11 E7 00 98 */	ps_muls0 f15, f7, f2
/* 801D09EC 001CDACC  E0 23 00 08 */	psq_l f1, 0x8(r3), 0, qr0
/* 801D09F0 001CDAD0  11 88 60 1E */	ps_madds1 f12, f8, f0, f12
/* 801D09F4 001CDAD4  E0 63 00 18 */	psq_l f3, 0x18(r3), 0, qr0
/* 801D09F8 001CDAD8  11 C8 70 9E */	ps_madds1 f14, f8, f2, f14
/* 801D09FC 001CDADC  E1 44 00 20 */	psq_l f10, 0x20(r4), 0, qr0
/* 801D0A00 001CDAE0  11 A9 68 1E */	ps_madds1 f13, f9, f0, f13
/* 801D0A04 001CDAE4  E1 64 00 28 */	psq_l f11, 0x28(r4), 0, qr0
/* 801D0A08 001CDAE8  11 E9 78 9E */	ps_madds1 f15, f9, f2, f15
/* 801D0A0C 001CDAEC  E0 83 00 20 */	psq_l f4, 0x20(r3), 0, qr0
/* 801D0A10 001CDAF0  E0 A3 00 28 */	psq_l f5, 0x28(r3), 0, qr0
/* 801D0A14 001CDAF4  11 8A 60 5C */	ps_madds0 f12, f10, f1, f12
/* 801D0A18 001CDAF8  11 AB 68 5C */	ps_madds0 f13, f11, f1, f13
/* 801D0A1C 001CDAFC  11 CA 70 DC */	ps_madds0 f14, f10, f3, f14
/* 801D0A20 001CDB00  11 EB 78 DC */	ps_madds0 f15, f11, f3, f15
/* 801D0A24 001CDB04  F1 85 00 00 */	psq_st f12, 0x0(r5), 0, qr0
/* 801D0A28 001CDB08  10 46 01 18 */	ps_muls0 f2, f6, f4
/* 801D0A2C 001CDB0C  11 BF 68 5E */	ps_madds1 f13, f31, f1, f13
/* 801D0A30 001CDB10  10 07 01 18 */	ps_muls0 f0, f7, f4
/* 801D0A34 001CDB14  F1 C5 00 10 */	psq_st f14, 0x10(r5), 0, qr0
/* 801D0A38 001CDB18  11 FF 78 DE */	ps_madds1 f15, f31, f3, f15
/* 801D0A3C 001CDB1C  F1 A5 00 08 */	psq_st f13, 0x8(r5), 0, qr0
/* 801D0A40 001CDB20  10 48 11 1E */	ps_madds1 f2, f8, f4, f2
/* 801D0A44 001CDB24  10 09 01 1E */	ps_madds1 f0, f9, f4, f0
/* 801D0A48 001CDB28  10 4A 11 5C */	ps_madds0 f2, f10, f5, f2
/* 801D0A4C 001CDB2C  C9 C1 00 08 */	lfd f14, 0x8(r1)
/* 801D0A50 001CDB30  F1 E5 00 18 */	psq_st f15, 0x18(r5), 0, qr0
/* 801D0A54 001CDB34  10 0B 01 5C */	ps_madds0 f0, f11, f5, f0
/* 801D0A58 001CDB38  F0 45 00 20 */	psq_st f2, 0x20(r5), 0, qr0
/* 801D0A5C 001CDB3C  10 1F 01 5E */	ps_madds1 f0, f31, f5, f0
/* 801D0A60 001CDB40  C9 E1 00 10 */	lfd f15, 0x10(r1)
/* 801D0A64 001CDB44  F0 05 00 28 */	psq_st f0, 0x28(r5), 0, qr0
/* 801D0A68 001CDB48  CB E1 00 28 */	lfd f31, 0x28(r1)
/* 801D0A6C 001CDB4C  38 21 00 40 */	addi r1, r1, 0x40
/* 801D0A70 001CDB50  4E 80 00 20 */	blr
.endfn PSMTXConcat

.fn PSMTXScale, global
/* 801D0A74 001CDB54  C0 02 B3 EC */	lfs f0, "@97"@sda21(r2)
/* 801D0A78 001CDB58  D0 23 00 00 */	stfs f1, 0x0(r3)
/* 801D0A7C 001CDB5C  F0 03 00 04 */	psq_st f0, 0x4(r3), 0, qr0
/* 801D0A80 001CDB60  F0 03 00 0C */	psq_st f0, 0xc(r3), 0, qr0
/* 801D0A84 001CDB64  D0 43 00 14 */	stfs f2, 0x14(r3)
/* 801D0A88 001CDB68  F0 03 00 18 */	psq_st f0, 0x18(r3), 0, qr0
/* 801D0A8C 001CDB6C  F0 03 00 20 */	psq_st f0, 0x20(r3), 0, qr0
/* 801D0A90 001CDB70  D0 63 00 28 */	stfs f3, 0x28(r3)
/* 801D0A94 001CDB74  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 801D0A98 001CDB78  4E 80 00 20 */	blr
.endfn PSMTXScale

# 0x803CAF28 - 0x803CAF30
.section .sdata, "wa"
.balign 8

.obj Unit01, local
	.4byte 0x00000000
	.4byte 0x3F800000
.endobj Unit01

# 0x803CFD68 - 0x803CFD70
.section .sdata2, "a"
.balign 8

.obj "@96", local
	.4byte 0x3F800000
.endobj "@96"

.obj "@97", local
	.4byte 0x00000000
.endobj "@97"
