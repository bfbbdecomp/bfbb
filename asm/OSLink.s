.include "macros.inc"
.file "OSLink.c"

# 0x801D4B7C - 0x801D4B94
.text
.balign 4

.fn __OSModuleInit, global
/* 801D4B7C 001D1C5C  3C 80 80 00 */	lis r4, 0x8000
/* 801D4B80 001D1C60  38 00 00 00 */	li r0, 0x0
/* 801D4B84 001D1C64  90 04 30 CC */	stw r0, 0x30cc(r4)
/* 801D4B88 001D1C68  90 04 30 C8 */	stw r0, 0x30c8(r4)
/* 801D4B8C 001D1C6C  90 04 30 D0 */	stw r0, 0x30d0(r4)
/* 801D4B90 001D1C70  4E 80 00 20 */	blr
.endfn __OSModuleInit
