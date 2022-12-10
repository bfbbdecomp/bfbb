.include "macros.inc"
.file "dvdFatal.c"

# 0x801C6FC8 - 0x801C6FF8
.text
.balign 4

.fn __DVDPrintFatalMessage, global
/* 801C6FC8 001C40A8  7C 08 02 A6 */	mflr r0
/* 801C6FCC 001C40AC  90 01 00 04 */	stw r0, 0x4(r1)
/* 801C6FD0 001C40B0  94 21 FF F8 */	stwu r1, -0x8(r1)
/* 801C6FD4 001C40B4  81 8D 9B 70 */	lwz r12, FatalFunc@sda21(r13)
/* 801C6FD8 001C40B8  28 0C 00 00 */	cmplwi r12, 0x0
/* 801C6FDC 001C40BC  41 82 00 0C */	beq .L_801C6FE8
/* 801C6FE0 001C40C0  7D 88 03 A6 */	mtlr r12
/* 801C6FE4 001C40C4  4E 80 00 21 */	blrl
.L_801C6FE8:
/* 801C6FE8 001C40C8  80 01 00 0C */	lwz r0, 0xc(r1)
/* 801C6FEC 001C40CC  38 21 00 08 */	addi r1, r1, 0x8
/* 801C6FF0 001C40D0  7C 08 03 A6 */	mtlr r0
/* 801C6FF4 001C40D4  4E 80 00 20 */	blr
.endfn __DVDPrintFatalMessage

# 0x803CC470 - 0x803CC478
.section .sbss, "wa", @nobits
.balign 8

.obj FatalFunc, local
	.skip 0x4
.endobj FatalFunc
	.skip 0x4
