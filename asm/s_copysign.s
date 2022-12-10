.include "macros.inc"
.file "s_copysign.c"

# 0x801EC390 - 0x801EC3B8
.text
.balign 4

.fn copysign, global
/* 801EC390 001E9470  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801EC394 001E9474  D8 21 00 08 */	stfd f1, 0x8(r1)
/* 801EC398 001E9478  D8 41 00 10 */	stfd f2, 0x10(r1)
/* 801EC39C 001E947C  80 61 00 08 */	lwz r3, 0x8(r1)
/* 801EC3A0 001E9480  80 01 00 10 */	lwz r0, 0x10(r1)
/* 801EC3A4 001E9484  50 60 00 7E */	rlwimi r0, r3, 0, 1, 31
/* 801EC3A8 001E9488  90 01 00 08 */	stw r0, 0x8(r1)
/* 801EC3AC 001E948C  C8 21 00 08 */	lfd f1, 0x8(r1)
/* 801EC3B0 001E9490  38 21 00 20 */	addi r1, r1, 0x20
/* 801EC3B4 001E9494  4E 80 00 20 */	blr
.endfn copysign
