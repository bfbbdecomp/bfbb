.include "macros.inc"
.file "flush_cache.c"

# 0x801F3AF0 - 0x801F3B28
.text
.balign 4
.L_801F3AF0:

.fn TRK_flush_cache, global
/* 801F3AF0 001F0BD0  3C A0 FF FF */	lis r5, 0xffff
/* 801F3AF4 001F0BD4  60 A5 FF F1 */	ori r5, r5, 0xfff1
/* 801F3AF8 001F0BD8  7C A5 18 38 */	and r5, r5, r3
/* 801F3AFC 001F0BDC  7C 65 18 50 */	subf r3, r5, r3
/* 801F3B00 001F0BE0  7C 84 1A 14 */	add r4, r4, r3
.L_801F3B04:
/* 801F3B04 001F0BE4  7C 00 28 6C */	dcbst r0, r5
/* 801F3B08 001F0BE8  7C 00 28 AC */	dcbf r0, r5
/* 801F3B0C 001F0BEC  7C 00 04 AC */	sync
/* 801F3B10 001F0BF0  7C 00 2F AC */	icbi r0, r5
/* 801F3B14 001F0BF4  30 A5 00 08 */	addic r5, r5, 0x8
/* 801F3B18 001F0BF8  34 84 FF F8 */	addic. r4, r4, -0x8
/* 801F3B1C 001F0BFC  40 80 FF E8 */	bge .L_801F3B04
/* 801F3B20 001F0C00  4C 00 01 2C */	isync
/* 801F3B24 001F0C04  4E 80 00 20 */	blr
.endfn TRK_flush_cache
