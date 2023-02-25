.include "macros.inc"
.file "AmcExi2Stubs.c"

# 0x801B5C34 - 0x801B5C64
.text
.balign 4

.fn EXI2_Init, global
/* 801B5C34 001B2D14  4E 80 00 20 */	blr
.endfn EXI2_Init

.fn EXI2_EnableInterrupts, global
/* 801B5C38 001B2D18  4E 80 00 20 */	blr
.endfn EXI2_EnableInterrupts

.fn EXI2_Poll, global
/* 801B5C3C 001B2D1C  38 60 00 00 */	li r3, 0x0
/* 801B5C40 001B2D20  4E 80 00 20 */	blr
.endfn EXI2_Poll

.fn EXI2_ReadN, global
/* 801B5C44 001B2D24  38 60 00 00 */	li r3, 0x0
/* 801B5C48 001B2D28  4E 80 00 20 */	blr
.endfn EXI2_ReadN

.fn EXI2_WriteN, global
/* 801B5C4C 001B2D2C  38 60 00 00 */	li r3, 0x0
/* 801B5C50 001B2D30  4E 80 00 20 */	blr
.endfn EXI2_WriteN

.fn EXI2_Reserve, global
/* 801B5C54 001B2D34  4E 80 00 20 */	blr
.endfn EXI2_Reserve

.fn EXI2_Unreserve, global
/* 801B5C58 001B2D38  4E 80 00 20 */	blr
.endfn EXI2_Unreserve

.fn AMC_IsStub, global
/* 801B5C5C 001B2D3C  38 60 00 01 */	li r3, 0x1
/* 801B5C60 001B2D40  4E 80 00 20 */	blr
.endfn AMC_IsStub
