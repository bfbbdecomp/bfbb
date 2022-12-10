.include "macros.inc"
.file "misc_io.c"

# 0x801E3F0C - 0x801E3F34
.text
.balign 4

.fn __stdio_atexit, global
/* 801E3F0C 001E0FEC  3C 60 80 1E */	lis r3, __close_all@ha
/* 801E3F10 001E0FF0  38 03 E6 30 */	addi r0, r3, __close_all@l
/* 801E3F14 001E0FF4  90 0D 9D 88 */	stw r0, __stdio_exit@sda21(r13)
/* 801E3F18 001E0FF8  4E 80 00 20 */	blr
.endfn __stdio_atexit

.fn feof, global
/* 801E3F1C 001E0FFC  88 63 00 09 */	lbz r3, 0x9(r3)
/* 801E3F20 001E1000  4E 80 00 20 */	blr
.endfn feof

.fn clearerr, global
/* 801E3F24 001E1004  38 00 00 00 */	li r0, 0x0
/* 801E3F28 001E1008  98 03 00 09 */	stb r0, 0x9(r3)
/* 801E3F2C 001E100C  98 03 00 0A */	stb r0, 0xa(r3)
/* 801E3F30 001E1010  4E 80 00 20 */	blr
.endfn clearerr
