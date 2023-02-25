.include "macros.inc"
.file "dsp_debug.c"

# 0x801C206C - 0x801C20BC
.text
.balign 4

.fn __DSP_debug_printf, global
/* 801C206C 001BF14C  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 801C2070 001BF150  40 86 00 24 */	bne cr1, .L_801C2094
/* 801C2074 001BF154  D8 21 00 28 */	stfd f1, 0x28(r1)
/* 801C2078 001BF158  D8 41 00 30 */	stfd f2, 0x30(r1)
/* 801C207C 001BF15C  D8 61 00 38 */	stfd f3, 0x38(r1)
/* 801C2080 001BF160  D8 81 00 40 */	stfd f4, 0x40(r1)
/* 801C2084 001BF164  D8 A1 00 48 */	stfd f5, 0x48(r1)
/* 801C2088 001BF168  D8 C1 00 50 */	stfd f6, 0x50(r1)
/* 801C208C 001BF16C  D8 E1 00 58 */	stfd f7, 0x58(r1)
/* 801C2090 001BF170  D9 01 00 60 */	stfd f8, 0x60(r1)
.L_801C2094:
/* 801C2094 001BF174  90 61 00 08 */	stw r3, 0x8(r1)
/* 801C2098 001BF178  90 81 00 0C */	stw r4, 0xc(r1)
/* 801C209C 001BF17C  90 A1 00 10 */	stw r5, 0x10(r1)
/* 801C20A0 001BF180  90 C1 00 14 */	stw r6, 0x14(r1)
/* 801C20A4 001BF184  90 E1 00 18 */	stw r7, 0x18(r1)
/* 801C20A8 001BF188  91 01 00 1C */	stw r8, 0x1c(r1)
/* 801C20AC 001BF18C  91 21 00 20 */	stw r9, 0x20(r1)
/* 801C20B0 001BF190  91 41 00 24 */	stw r10, 0x24(r1)
/* 801C20B4 001BF194  38 21 00 70 */	addi r1, r1, 0x70
/* 801C20B8 001BF198  4E 80 00 20 */	blr
.endfn __DSP_debug_printf
