.include "macros.inc"
.file "mutex_TRK.c"

# 0x801F3A00 - 0x801F3A18
.text
.balign 4

.fn TRKReleaseMutex, global
/* 801F3A00 001F0AE0  38 60 00 00 */	li r3, 0x0
/* 801F3A04 001F0AE4  4E 80 00 20 */	blr
.endfn TRKReleaseMutex

.fn TRKAcquireMutex, global
/* 801F3A08 001F0AE8  38 60 00 00 */	li r3, 0x0
/* 801F3A0C 001F0AEC  4E 80 00 20 */	blr
.endfn TRKAcquireMutex

.fn TRKInitializeMutex, global
/* 801F3A10 001F0AF0  38 60 00 00 */	li r3, 0x0
/* 801F3A14 001F0AF4  4E 80 00 20 */	blr
.endfn TRKInitializeMutex
