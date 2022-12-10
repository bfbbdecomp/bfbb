.include "macros.inc"
.file "rtanim.c"

# 0x8022CDA8 - 0x8022CFA0
.text
.balign 4

.fn RtAnimRegisterInterpolationScheme, global
/* 8022CDA8 00229E88  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8022CDAC 00229E8C  7C 08 02 A6 */	mflr r0
/* 8022CDB0 00229E90  90 01 00 24 */	stw r0, 0x24(r1)
/* 8022CDB4 00229E94  80 CD 9F 18 */	lwz r6, RtAnimInterpolatorInfoBlockNumEntries@sda21(r13)
/* 8022CDB8 00229E98  2C 06 00 10 */	cmpwi r6, 0x10
/* 8022CDBC 00229E9C  40 80 00 DC */	bge .L_8022CE98
/* 8022CDC0 00229EA0  3C 80 80 38 */	lis r4, RtAnimInterpolatorInfoBlock@ha
/* 8022CDC4 00229EA4  38 A4 39 E0 */	addi r5, r4, RtAnimInterpolatorInfoBlock@l
/* 8022CDC8 00229EA8  7C C9 03 A6 */	mtctr r6
/* 8022CDCC 00229EAC  2C 06 00 00 */	cmpwi r6, 0x0
/* 8022CDD0 00229EB0  40 81 00 44 */	ble .L_8022CE14
.L_8022CDD4:
/* 8022CDD4 00229EB4  80 83 00 00 */	lwz r4, 0x0(r3)
/* 8022CDD8 00229EB8  80 05 00 00 */	lwz r0, 0x0(r5)
/* 8022CDDC 00229EBC  7C 04 00 00 */	cmpw r4, r0
/* 8022CDE0 00229EC0  40 82 00 2C */	bne .L_8022CE0C
/* 8022CDE4 00229EC4  38 00 01 B7 */	li r0, 0x1b7
/* 8022CDE8 00229EC8  38 60 00 00 */	li r3, 0x0
/* 8022CDEC 00229ECC  90 01 00 10 */	stw r0, 0x10(r1)
/* 8022CDF0 00229ED0  4C C6 31 82 */	crclr 4*cr1+eq
/* 8022CDF4 00229ED4  48 00 28 41 */	bl _rwerror
/* 8022CDF8 00229ED8  90 61 00 14 */	stw r3, 0x14(r1)
/* 8022CDFC 00229EDC  38 61 00 10 */	addi r3, r1, 0x10
/* 8022CE00 00229EE0  48 00 27 91 */	bl RwErrorSet
/* 8022CE04 00229EE4  38 60 00 00 */	li r3, 0x0
/* 8022CE08 00229EE8  48 00 00 B4 */	b .L_8022CEBC
.L_8022CE0C:
/* 8022CE0C 00229EEC  38 A5 00 30 */	addi r5, r5, 0x30
/* 8022CE10 00229EF0  42 00 FF C4 */	bdnz .L_8022CDD4
.L_8022CE14:
/* 8022CE14 00229EF4  1C C6 00 30 */	mulli r6, r6, 0x30
/* 8022CE18 00229EF8  3C A0 80 38 */	lis r5, RtAnimInterpolatorInfoBlock@ha
/* 8022CE1C 00229EFC  80 83 00 00 */	lwz r4, 0x0(r3)
/* 8022CE20 00229F00  38 A5 39 E0 */	addi r5, r5, RtAnimInterpolatorInfoBlock@l
/* 8022CE24 00229F04  80 03 00 04 */	lwz r0, 0x4(r3)
/* 8022CE28 00229F08  7C A5 32 14 */	add r5, r5, r6
/* 8022CE2C 00229F0C  90 85 00 00 */	stw r4, 0x0(r5)
/* 8022CE30 00229F10  90 05 00 04 */	stw r0, 0x4(r5)
/* 8022CE34 00229F14  80 83 00 08 */	lwz r4, 0x8(r3)
/* 8022CE38 00229F18  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8022CE3C 00229F1C  90 85 00 08 */	stw r4, 0x8(r5)
/* 8022CE40 00229F20  90 05 00 0C */	stw r0, 0xc(r5)
/* 8022CE44 00229F24  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8022CE48 00229F28  80 03 00 14 */	lwz r0, 0x14(r3)
/* 8022CE4C 00229F2C  90 85 00 10 */	stw r4, 0x10(r5)
/* 8022CE50 00229F30  90 05 00 14 */	stw r0, 0x14(r5)
/* 8022CE54 00229F34  80 83 00 18 */	lwz r4, 0x18(r3)
/* 8022CE58 00229F38  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8022CE5C 00229F3C  90 85 00 18 */	stw r4, 0x18(r5)
/* 8022CE60 00229F40  90 05 00 1C */	stw r0, 0x1c(r5)
/* 8022CE64 00229F44  80 83 00 20 */	lwz r4, 0x20(r3)
/* 8022CE68 00229F48  80 03 00 24 */	lwz r0, 0x24(r3)
/* 8022CE6C 00229F4C  90 85 00 20 */	stw r4, 0x20(r5)
/* 8022CE70 00229F50  90 05 00 24 */	stw r0, 0x24(r5)
/* 8022CE74 00229F54  80 83 00 28 */	lwz r4, 0x28(r3)
/* 8022CE78 00229F58  80 03 00 2C */	lwz r0, 0x2c(r3)
/* 8022CE7C 00229F5C  38 60 00 01 */	li r3, 0x1
/* 8022CE80 00229F60  90 85 00 28 */	stw r4, 0x28(r5)
/* 8022CE84 00229F64  90 05 00 2C */	stw r0, 0x2c(r5)
/* 8022CE88 00229F68  80 8D 9F 18 */	lwz r4, RtAnimInterpolatorInfoBlockNumEntries@sda21(r13)
/* 8022CE8C 00229F6C  38 04 00 01 */	addi r0, r4, 0x1
/* 8022CE90 00229F70  90 0D 9F 18 */	stw r0, RtAnimInterpolatorInfoBlockNumEntries@sda21(r13)
/* 8022CE94 00229F74  48 00 00 28 */	b .L_8022CEBC
.L_8022CE98:
/* 8022CE98 00229F78  38 00 01 B7 */	li r0, 0x1b7
/* 8022CE9C 00229F7C  38 60 00 01 */	li r3, 0x1
/* 8022CEA0 00229F80  90 01 00 08 */	stw r0, 0x8(r1)
/* 8022CEA4 00229F84  4C C6 31 82 */	crclr 4*cr1+eq
/* 8022CEA8 00229F88  48 00 27 8D */	bl _rwerror
/* 8022CEAC 00229F8C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8022CEB0 00229F90  38 61 00 08 */	addi r3, r1, 0x8
/* 8022CEB4 00229F94  48 00 26 DD */	bl RwErrorSet
/* 8022CEB8 00229F98  38 60 00 00 */	li r3, 0x0
.L_8022CEBC:
/* 8022CEBC 00229F9C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8022CEC0 00229FA0  7C 08 03 A6 */	mtlr r0
/* 8022CEC4 00229FA4  38 21 00 20 */	addi r1, r1, 0x20
/* 8022CEC8 00229FA8  4E 80 00 20 */	blr
.endfn RtAnimRegisterInterpolationScheme

.fn RtAnimInterpolatorCreate, global
/* 8022CECC 00229FAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8022CED0 00229FB0  7C 08 02 A6 */	mflr r0
/* 8022CED4 00229FB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8022CED8 00229FB8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8022CEDC 00229FBC  7C 9F 23 78 */	mr r31, r4
/* 8022CEE0 00229FC0  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8022CEE4 00229FC4  7C 7E 1B 78 */	mr r30, r3
/* 8022CEE8 00229FC8  7C 9E F9 D6 */	mullw r4, r30, r31
/* 8022CEEC 00229FCC  80 6D 9F 7C */	lwz r3, RwEngineInstance@sda21(r13)
/* 8022CEF0 00229FD0  81 83 01 34 */	lwz r12, 0x134(r3)
/* 8022CEF4 00229FD4  38 64 00 4C */	addi r3, r4, 0x4c
/* 8022CEF8 00229FD8  7D 89 03 A6 */	mtctr r12
/* 8022CEFC 00229FDC  4E 80 04 21 */	bctrl
/* 8022CF00 00229FE0  93 C3 00 2C */	stw r30, 0x2c(r3)
/* 8022CF04 00229FE4  38 80 00 00 */	li r4, 0x0
/* 8022CF08 00229FE8  38 00 FF FF */	li r0, -0x1
/* 8022CF0C 00229FEC  90 83 00 00 */	stw r4, 0x0(r3)
/* 8022CF10 00229FF0  90 83 00 08 */	stw r4, 0x8(r3)
/* 8022CF14 00229FF4  C0 02 BC 58 */	lfs f0, "@456"@sda21(r2)
/* 8022CF18 00229FF8  D0 03 00 04 */	stfs f0, 0x4(r3)
/* 8022CF1C 00229FFC  90 83 00 0C */	stw r4, 0xc(r3)
/* 8022CF20 0022A000  C0 02 BC 5C */	lfs f0, "@457"@sda21(r2)
/* 8022CF24 0022A004  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 8022CF28 0022A008  90 83 00 10 */	stw r4, 0x10(r3)
/* 8022CF2C 0022A00C  90 83 00 18 */	stw r4, 0x18(r3)
/* 8022CF30 0022A010  90 83 00 1C */	stw r4, 0x1c(r3)
/* 8022CF34 0022A014  93 E3 00 24 */	stw r31, 0x24(r3)
/* 8022CF38 0022A018  90 03 00 28 */	stw r0, 0x28(r3)
/* 8022CF3C 0022A01C  93 E3 00 20 */	stw r31, 0x20(r3)
/* 8022CF40 0022A020  90 83 00 30 */	stw r4, 0x30(r3)
/* 8022CF44 0022A024  90 83 00 34 */	stw r4, 0x34(r3)
/* 8022CF48 0022A028  90 63 00 38 */	stw r3, 0x38(r3)
/* 8022CF4C 0022A02C  90 83 00 3C */	stw r4, 0x3c(r3)
/* 8022CF50 0022A030  90 83 00 44 */	stw r4, 0x44(r3)
/* 8022CF54 0022A034  90 83 00 40 */	stw r4, 0x40(r3)
/* 8022CF58 0022A038  90 83 00 48 */	stw r4, 0x48(r3)
/* 8022CF5C 0022A03C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8022CF60 0022A040  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8022CF64 0022A044  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8022CF68 0022A048  7C 08 03 A6 */	mtlr r0
/* 8022CF6C 0022A04C  38 21 00 10 */	addi r1, r1, 0x10
/* 8022CF70 0022A050  4E 80 00 20 */	blr
.endfn RtAnimInterpolatorCreate

.fn RtAnimInterpolatorDestroy, global
/* 8022CF74 0022A054  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8022CF78 0022A058  7C 08 02 A6 */	mflr r0
/* 8022CF7C 0022A05C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8022CF80 0022A060  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8022CF84 0022A064  81 84 01 38 */	lwz r12, 0x138(r4)
/* 8022CF88 0022A068  7D 89 03 A6 */	mtctr r12
/* 8022CF8C 0022A06C  4E 80 04 21 */	bctrl
/* 8022CF90 0022A070  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8022CF94 0022A074  7C 08 03 A6 */	mtlr r0
/* 8022CF98 0022A078  38 21 00 10 */	addi r1, r1, 0x10
/* 8022CF9C 0022A07C  4E 80 00 20 */	blr
.endfn RtAnimInterpolatorDestroy

# 0x803839E0 - 0x80383CE0
.bss
.balign 8

.obj RtAnimInterpolatorInfoBlock, global
	.skip 0x300
.endobj RtAnimInterpolatorInfoBlock

# 0x803CC818 - 0x803CC820
.section .sbss, "wa", @nobits
.balign 8

.obj RtAnimInterpolatorInfoBlockNumEntries, global
	.skip 0x4
.endobj RtAnimInterpolatorInfoBlockNumEntries
	.skip 0x4

# 0x803D05D8 - 0x803D05E0
.section .sdata2, "a"
.balign 8

.obj "@456", local
	.4byte 0x00000000
.endobj "@456"

.obj "@457", local
	.4byte 0xBF800000
.endobj "@457"
