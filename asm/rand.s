.include "macros.inc"
.file "rand.c"

# 0x801E61E0 - 0x801E6200
.text
.balign 4

.fn rand, global
/* 801E61E0 001E32C0  3C 60 41 C6 */	lis r3, 0x41c6
/* 801E61E4 001E32C4  80 8D 86 A8 */	lwz r4, next@sda21(r13)
/* 801E61E8 001E32C8  38 03 4E 6D */	addi r0, r3, 0x4e6d
/* 801E61EC 001E32CC  7C 64 01 D6 */	mullw r3, r4, r0
/* 801E61F0 001E32D0  38 03 30 39 */	addi r0, r3, 0x3039
/* 801E61F4 001E32D4  90 0D 86 A8 */	stw r0, next@sda21(r13)
/* 801E61F8 001E32D8  54 03 84 7E */	extrwi r3, r0, 15, 1
/* 801E61FC 001E32DC  4E 80 00 20 */	blr
.endfn rand

# 0x803CAFA8 - 0x803CAFB0
.section .sdata, "wa"
.balign 8

.obj next, local
	.4byte 0x00000001
.endobj next
	.4byte 0x00000000
