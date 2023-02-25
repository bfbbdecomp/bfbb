.include "macros.inc"
.file "target_options.c"

# 0x801F61D8 - 0x801F61F4
.text
.balign 4

.fn GetUseSerialIO, global
/* 801F61D8 001F32B8  3C 60 80 38 */	lis r3, bUseSerialIO@ha
/* 801F61DC 001F32BC  38 63 34 88 */	addi r3, r3, bUseSerialIO@l
/* 801F61E0 001F32C0  88 63 00 00 */	lbz r3, 0x0(r3)
/* 801F61E4 001F32C4  4E 80 00 20 */	blr
.endfn GetUseSerialIO

.fn SetUseSerialIO, global
/* 801F61E8 001F32C8  3C 80 80 38 */	lis r4, bUseSerialIO@ha
/* 801F61EC 001F32CC  98 64 34 88 */	stb r3, bUseSerialIO@l(r4)
/* 801F61F0 001F32D0  4E 80 00 20 */	blr
.endfn SetUseSerialIO

# 0x80383488 - 0x80383490
.section .bss, "wa", @nobits
.balign 8

.obj bUseSerialIO, local
	.skip 0x1
.endobj bUseSerialIO
	.skip 0x7
