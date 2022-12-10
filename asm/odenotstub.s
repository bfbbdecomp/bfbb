.include "macros.inc"
.file "odenotstub.c"

# 0x801D0B34 - 0x801D0B3C
.text
.balign 4

.fn Hu_IsStub, weak
/* 801D0B34 001CDC14  38 60 00 00 */	li r3, 0x0
/* 801D0B38 001CDC18  4E 80 00 20 */	blr
.endfn Hu_IsStub
