.include "macros.inc"
.file "OSArena.c"

# 0x801D2064 - 0x801D2084
.text
.balign 4

.fn OSGetArenaHi, global
/* 801D2064 001CF144  80 6D 9C 58 */	lwz r3, __OSArenaHi@sda21(r13)
/* 801D2068 001CF148  4E 80 00 20 */	blr
.endfn OSGetArenaHi

.fn OSGetArenaLo, global
/* 801D206C 001CF14C  80 6D 86 48 */	lwz r3, __OSArenaLo@sda21(r13)
/* 801D2070 001CF150  4E 80 00 20 */	blr
.endfn OSGetArenaLo

.fn OSSetArenaHi, global
/* 801D2074 001CF154  90 6D 9C 58 */	stw r3, __OSArenaHi@sda21(r13)
/* 801D2078 001CF158  4E 80 00 20 */	blr
.endfn OSSetArenaHi

.fn OSSetArenaLo, global
/* 801D207C 001CF15C  90 6D 86 48 */	stw r3, __OSArenaLo@sda21(r13)
/* 801D2080 001CF160  4E 80 00 20 */	blr
.endfn OSSetArenaLo

# 0x803CAF48 - 0x803CAF50
.section .sdata, "wa"
.balign 8

.obj __OSArenaLo, local
	.4byte 0xFFFFFFFF
.endobj __OSArenaLo
	.4byte 0x00000000

# 0x803CC558 - 0x803CC560
.section .sbss, "wa", @nobits
.balign 8

.obj __OSArenaHi, local
	.skip 0x4
.endobj __OSArenaHi
	.skip 0x4
