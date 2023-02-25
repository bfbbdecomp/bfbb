.include "macros.inc"
.file "arith.c"

# 0x801E1E20 - 0x801E1E30
.text
.balign 4

.fn abs, global
/* 801E1E20 001DEF00  7C 64 FE 70 */	srawi r4, r3, 31
/* 801E1E24 001DEF04  7C 80 1A 78 */	xor r0, r4, r3
/* 801E1E28 001DEF08  7C 64 00 50 */	subf r3, r4, r0
/* 801E1E2C 001DEF0C  4E 80 00 20 */	blr
.endfn abs
