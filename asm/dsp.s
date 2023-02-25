.include "macros.inc"
.file "dsp.c"

# 0x801C1DDC - 0x801C206C
.text
.balign 4

.fn DSPCheckMailToDSP, global
/* 801C1DDC 001BEEBC  3C 60 CC 00 */	lis r3, 0xcc00
/* 801C1DE0 001BEEC0  A0 03 50 00 */	lhz r0, 0x5000(r3)
/* 801C1DE4 001BEEC4  54 03 8F FE */	extrwi r3, r0, 1, 16
/* 801C1DE8 001BEEC8  4E 80 00 20 */	blr
.endfn DSPCheckMailToDSP

.fn DSPCheckMailFromDSP, global
/* 801C1DEC 001BEECC  3C 60 CC 00 */	lis r3, 0xcc00
/* 801C1DF0 001BEED0  A0 03 50 04 */	lhz r0, 0x5004(r3)
/* 801C1DF4 001BEED4  54 03 8F FE */	extrwi r3, r0, 1, 16
/* 801C1DF8 001BEED8  4E 80 00 20 */	blr
.endfn DSPCheckMailFromDSP

.fn DSPReadMailFromDSP, global
/* 801C1DFC 001BEEDC  3C 60 CC 00 */	lis r3, 0xcc00
/* 801C1E00 001BEEE0  38 63 50 00 */	addi r3, r3, 0x5000
/* 801C1E04 001BEEE4  A0 03 00 04 */	lhz r0, 0x4(r3)
/* 801C1E08 001BEEE8  A0 63 00 06 */	lhz r3, 0x6(r3)
/* 801C1E0C 001BEEEC  50 03 80 1E */	rlwimi r3, r0, 16, 0, 15
/* 801C1E10 001BEEF0  4E 80 00 20 */	blr
.endfn DSPReadMailFromDSP

.fn DSPSendMailToDSP, global
/* 801C1E14 001BEEF4  3C 80 CC 00 */	lis r4, 0xcc00
/* 801C1E18 001BEEF8  54 60 84 3E */	srwi r0, r3, 16
/* 801C1E1C 001BEEFC  B0 04 50 00 */	sth r0, 0x5000(r4)
/* 801C1E20 001BEF00  B0 64 50 02 */	sth r3, 0x5002(r4)
/* 801C1E24 001BEF04  4E 80 00 20 */	blr
.endfn DSPSendMailToDSP

.fn DSPInit, global
/* 801C1E28 001BEF08  7C 08 02 A6 */	mflr r0
/* 801C1E2C 001BEF0C  3C 60 80 2B */	lis r3, ...data.0@ha
/* 801C1E30 001BEF10  90 01 00 04 */	stw r0, 0x4(r1)
/* 801C1E34 001BEF14  38 A3 40 D8 */	addi r5, r3, ...data.0@l
/* 801C1E38 001BEF18  4C C6 31 82 */	crclr 4*cr1+eq
/* 801C1E3C 001BEF1C  38 65 00 48 */	addi r3, r5, 0x48
/* 801C1E40 001BEF20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C1E44 001BEF24  38 85 00 68 */	addi r4, r5, 0x68
/* 801C1E48 001BEF28  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C1E4C 001BEF2C  38 A5 00 74 */	addi r5, r5, 0x74
/* 801C1E50 001BEF30  48 00 02 1D */	bl __DSP_debug_printf
/* 801C1E54 001BEF34  80 0D 9A 98 */	lwz r0, __DSP_init_flag@sda21(r13)
/* 801C1E58 001BEF38  2C 00 00 01 */	cmpwi r0, 0x1
/* 801C1E5C 001BEF3C  41 82 00 7C */	beq .L_801C1ED8
/* 801C1E60 001BEF40  80 6D 85 88 */	lwz r3, __DSPVersion@sda21(r13)
/* 801C1E64 001BEF44  48 00 F7 99 */	bl OSRegisterVersion
/* 801C1E68 001BEF48  48 01 24 A9 */	bl OSDisableInterrupts
/* 801C1E6C 001BEF4C  3C 80 80 1C */	lis r4, __DSPHandler@ha
/* 801C1E70 001BEF50  3B E3 00 00 */	addi r31, r3, 0x0
/* 801C1E74 001BEF54  38 84 20 BC */	addi r4, r4, __DSPHandler@l
/* 801C1E78 001BEF58  38 60 00 07 */	li r3, 0x7
/* 801C1E7C 001BEF5C  48 01 24 E1 */	bl __OSSetInterruptHandler
/* 801C1E80 001BEF60  3C 60 01 00 */	lis r3, 0x100
/* 801C1E84 001BEF64  48 01 28 DD */	bl __OSUnmaskInterrupts
/* 801C1E88 001BEF68  3C 60 CC 00 */	lis r3, 0xcc00
/* 801C1E8C 001BEF6C  38 C3 50 00 */	addi r6, r3, 0x5000
/* 801C1E90 001BEF70  A0 63 50 0A */	lhz r3, 0x500a(r3)
/* 801C1E94 001BEF74  38 00 FF 57 */	li r0, -0xa9
/* 801C1E98 001BEF78  7C 60 00 38 */	and r0, r3, r0
/* 801C1E9C 001BEF7C  60 00 08 00 */	ori r0, r0, 0x800
/* 801C1EA0 001BEF80  B0 06 00 0A */	sth r0, 0xa(r6)
/* 801C1EA4 001BEF84  38 A0 FF 53 */	li r5, -0xad
/* 801C1EA8 001BEF88  38 80 00 00 */	li r4, 0x0
/* 801C1EAC 001BEF8C  A0 E6 00 0A */	lhz r7, 0xa(r6)
/* 801C1EB0 001BEF90  38 00 00 01 */	li r0, 0x1
/* 801C1EB4 001BEF94  38 7F 00 00 */	addi r3, r31, 0x0
/* 801C1EB8 001BEF98  7C E5 28 38 */	and r5, r7, r5
/* 801C1EBC 001BEF9C  B0 A6 00 0A */	sth r5, 0xa(r6)
/* 801C1EC0 001BEFA0  90 8D 9A A8 */	stw r4, __DSP_tmp_task@sda21(r13)
/* 801C1EC4 001BEFA4  90 8D 9A B4 */	stw r4, __DSP_curr_task@sda21(r13)
/* 801C1EC8 001BEFA8  90 8D 9A AC */	stw r4, __DSP_last_task@sda21(r13)
/* 801C1ECC 001BEFAC  90 8D 9A B0 */	stw r4, __DSP_first_task@sda21(r13)
/* 801C1ED0 001BEFB0  90 0D 9A 98 */	stw r0, __DSP_init_flag@sda21(r13)
/* 801C1ED4 001BEFB4  48 01 24 65 */	bl OSRestoreInterrupts
.L_801C1ED8:
/* 801C1ED8 001BEFB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C1EDC 001BEFBC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C1EE0 001BEFC0  38 21 00 10 */	addi r1, r1, 0x10
/* 801C1EE4 001BEFC4  7C 08 03 A6 */	mtlr r0
/* 801C1EE8 001BEFC8  4E 80 00 20 */	blr
.endfn DSPInit

.fn DSPCheckInit, global
/* 801C1EEC 001BEFCC  80 6D 9A 98 */	lwz r3, __DSP_init_flag@sda21(r13)
/* 801C1EF0 001BEFD0  4E 80 00 20 */	blr
.endfn DSPCheckInit

.fn DSPAddTask, global
/* 801C1EF4 001BEFD4  7C 08 02 A6 */	mflr r0
/* 801C1EF8 001BEFD8  90 01 00 04 */	stw r0, 0x4(r1)
/* 801C1EFC 001BEFDC  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 801C1F00 001BEFE0  93 E1 00 14 */	stw r31, 0x14(r1)
/* 801C1F04 001BEFE4  93 C1 00 10 */	stw r30, 0x10(r1)
/* 801C1F08 001BEFE8  7C 7E 1B 78 */	mr r30, r3
/* 801C1F0C 001BEFEC  48 01 24 05 */	bl OSDisableInterrupts
/* 801C1F10 001BEFF0  3B E3 00 00 */	addi r31, r3, 0x0
/* 801C1F14 001BEFF4  38 7E 00 00 */	addi r3, r30, 0x0
/* 801C1F18 001BEFF8  48 00 08 F5 */	bl __DSP_insert_task
/* 801C1F1C 001BEFFC  38 00 00 00 */	li r0, 0x0
/* 801C1F20 001BF000  90 1E 00 00 */	stw r0, 0x0(r30)
/* 801C1F24 001BF004  38 00 00 01 */	li r0, 0x1
/* 801C1F28 001BF008  38 7F 00 00 */	addi r3, r31, 0x0
/* 801C1F2C 001BF00C  90 1E 00 08 */	stw r0, 0x8(r30)
/* 801C1F30 001BF010  48 01 24 09 */	bl OSRestoreInterrupts
/* 801C1F34 001BF014  80 0D 9A B0 */	lwz r0, __DSP_first_task@sda21(r13)
/* 801C1F38 001BF018  7C 1E 00 40 */	cmplw r30, r0
/* 801C1F3C 001BF01C  40 82 00 0C */	bne .L_801C1F48
/* 801C1F40 001BF020  7F C3 F3 78 */	mr r3, r30
/* 801C1F44 001BF024  48 00 07 3D */	bl __DSP_boot_task
.L_801C1F48:
/* 801C1F48 001BF028  7F C3 F3 78 */	mr r3, r30
/* 801C1F4C 001BF02C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 801C1F50 001BF030  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 801C1F54 001BF034  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 801C1F58 001BF038  38 21 00 18 */	addi r1, r1, 0x18
/* 801C1F5C 001BF03C  7C 08 03 A6 */	mtlr r0
/* 801C1F60 001BF040  4E 80 00 20 */	blr
.endfn DSPAddTask

.fn DSPCancelTask, global
/* 801C1F64 001BF044  7C 08 02 A6 */	mflr r0
/* 801C1F68 001BF048  90 01 00 04 */	stw r0, 0x4(r1)
/* 801C1F6C 001BF04C  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 801C1F70 001BF050  93 E1 00 14 */	stw r31, 0x14(r1)
/* 801C1F74 001BF054  7C 7F 1B 78 */	mr r31, r3
/* 801C1F78 001BF058  48 01 23 99 */	bl OSDisableInterrupts
/* 801C1F7C 001BF05C  80 1F 00 08 */	lwz r0, 0x8(r31)
/* 801C1F80 001BF060  60 00 00 02 */	ori r0, r0, 0x2
/* 801C1F84 001BF064  90 1F 00 08 */	stw r0, 0x8(r31)
/* 801C1F88 001BF068  48 01 23 B1 */	bl OSRestoreInterrupts
/* 801C1F8C 001BF06C  7F E3 FB 78 */	mr r3, r31
/* 801C1F90 001BF070  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 801C1F94 001BF074  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 801C1F98 001BF078  38 21 00 18 */	addi r1, r1, 0x18
/* 801C1F9C 001BF07C  7C 08 03 A6 */	mtlr r0
/* 801C1FA0 001BF080  4E 80 00 20 */	blr
.endfn DSPCancelTask

.fn DSPAssertTask, global
/* 801C1FA4 001BF084  7C 08 02 A6 */	mflr r0
/* 801C1FA8 001BF088  90 01 00 04 */	stw r0, 0x4(r1)
/* 801C1FAC 001BF08C  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 801C1FB0 001BF090  93 E1 00 14 */	stw r31, 0x14(r1)
/* 801C1FB4 001BF094  93 C1 00 10 */	stw r30, 0x10(r1)
/* 801C1FB8 001BF098  7C 7E 1B 78 */	mr r30, r3
/* 801C1FBC 001BF09C  48 01 23 55 */	bl OSDisableInterrupts
/* 801C1FC0 001BF0A0  80 8D 9A B4 */	lwz r4, __DSP_curr_task@sda21(r13)
/* 801C1FC4 001BF0A4  3B E3 00 00 */	addi r31, r3, 0x0
/* 801C1FC8 001BF0A8  7C 04 F0 40 */	cmplw r4, r30
/* 801C1FCC 001BF0AC  40 82 00 20 */	bne .L_801C1FEC
/* 801C1FD0 001BF0B0  38 00 00 01 */	li r0, 0x1
/* 801C1FD4 001BF0B4  93 CD 9A A4 */	stw r30, __DSP_rude_task@sda21(r13)
/* 801C1FD8 001BF0B8  7F E3 FB 78 */	mr r3, r31
/* 801C1FDC 001BF0BC  90 0D 9A A0 */	stw r0, __DSP_rude_task_pending@sda21(r13)
/* 801C1FE0 001BF0C0  48 01 23 59 */	bl OSRestoreInterrupts
/* 801C1FE4 001BF0C4  7F C3 F3 78 */	mr r3, r30
/* 801C1FE8 001BF0C8  48 00 00 6C */	b .L_801C2054
.L_801C1FEC:
/* 801C1FEC 001BF0CC  80 7E 00 04 */	lwz r3, 0x4(r30)
/* 801C1FF0 001BF0D0  80 04 00 04 */	lwz r0, 0x4(r4)
/* 801C1FF4 001BF0D4  7C 03 00 40 */	cmplw r3, r0
/* 801C1FF8 001BF0D8  40 80 00 50 */	bge .L_801C2048
/* 801C1FFC 001BF0DC  38 00 00 01 */	li r0, 0x1
/* 801C2000 001BF0E0  93 CD 9A A4 */	stw r30, __DSP_rude_task@sda21(r13)
/* 801C2004 001BF0E4  90 0D 9A A0 */	stw r0, __DSP_rude_task_pending@sda21(r13)
/* 801C2008 001BF0E8  80 04 00 00 */	lwz r0, 0x0(r4)
/* 801C200C 001BF0EC  28 00 00 01 */	cmplwi r0, 0x1
/* 801C2010 001BF0F0  40 82 00 28 */	bne .L_801C2038
/* 801C2014 001BF0F4  48 01 22 FD */	bl OSDisableInterrupts
/* 801C2018 001BF0F8  3C 80 CC 00 */	lis r4, 0xcc00
/* 801C201C 001BF0FC  38 A4 50 00 */	addi r5, r4, 0x5000
/* 801C2020 001BF100  A0 84 50 0A */	lhz r4, 0x500a(r4)
/* 801C2024 001BF104  38 00 FF 57 */	li r0, -0xa9
/* 801C2028 001BF108  7C 80 00 38 */	and r0, r4, r0
/* 801C202C 001BF10C  60 00 00 02 */	ori r0, r0, 0x2
/* 801C2030 001BF110  B0 05 00 0A */	sth r0, 0xa(r5)
/* 801C2034 001BF114  48 01 23 05 */	bl OSRestoreInterrupts
.L_801C2038:
/* 801C2038 001BF118  7F E3 FB 78 */	mr r3, r31
/* 801C203C 001BF11C  48 01 22 FD */	bl OSRestoreInterrupts
/* 801C2040 001BF120  7F C3 F3 78 */	mr r3, r30
/* 801C2044 001BF124  48 00 00 10 */	b .L_801C2054
.L_801C2048:
/* 801C2048 001BF128  7F E3 FB 78 */	mr r3, r31
/* 801C204C 001BF12C  48 01 22 ED */	bl OSRestoreInterrupts
/* 801C2050 001BF130  38 60 00 00 */	li r3, 0x0
.L_801C2054:
/* 801C2054 001BF134  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 801C2058 001BF138  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 801C205C 001BF13C  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 801C2060 001BF140  38 21 00 18 */	addi r1, r1, 0x18
/* 801C2064 001BF144  7C 08 03 A6 */	mtlr r0
/* 801C2068 001BF148  4E 80 00 20 */	blr
.endfn DSPAssertTask

# 0x802B40D8 - 0x802B4158
.data
.balign 8
.sym ...data.0, local

.obj "@1", local
	.4byte 0x3C3C2044
	.4byte 0x6F6C7068
	.4byte 0x696E2053
	.4byte 0x444B202D
	.4byte 0x20445350
	.4byte 0x0972656C
	.4byte 0x65617365
	.4byte 0x20627569
	.4byte 0x6C643A20
	.4byte 0x41707220
	.4byte 0x31372032
	.4byte 0x30303320
	.4byte 0x31323A33
	.4byte 0x343A3136
	.4byte 0x20283078
	.4byte 0x32333031
	.4byte 0x29203E3E
	.byte 0x00
.endobj "@1"
	.byte 0x00, 0x00, 0x00

.obj "@19", local
	.4byte 0x44535049
	.4byte 0x6E697428
	.4byte 0x293A2042
	.4byte 0x75696C64
	.4byte 0x20446174
	.4byte 0x653A2025
	.4byte 0x73202573
	.2byte 0x0A00
.endobj "@19"
	.2byte 0x0000

.obj "@20", local
	.4byte 0x41707220
	.4byte 0x31372032
	.4byte 0x30303300
.endobj "@20"

.obj "@21", local
	.4byte 0x31323A33
	.4byte 0x343A3136
	.byte 0x00
.endobj "@21"
	.byte 0x00, 0x00, 0x00

# 0x803CAE88 - 0x803CAE90
.section .sdata, "wa"
.balign 8

.obj __DSPVersion, global
	.4byte ...data.0
.endobj __DSPVersion
	.4byte 0x00000000

# 0x803CC398 - 0x803CC3A0
.section .sbss, "wa", @nobits
.balign 8

.obj __DSP_init_flag, local
	.skip 0x4
.endobj __DSP_init_flag
	.skip 0x4
