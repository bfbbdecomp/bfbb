.include "macros.inc"
.file "targsupp.s"

# 0x801F5760 - 0x801F5780
.text
.balign 4
.sym TRKAccessFile, global
/* 801F5760 001F2840  0F E0 00 00 */	.4byte 0x0FE00000 /* invalid */
/* 801F5764 001F2844  4E 80 00 20 */	blr
.sym TRKOpenFile, global
/* 801F5768 001F2848  0F E0 00 00 */	.4byte 0x0FE00000 /* invalid */
/* 801F576C 001F284C  4E 80 00 20 */	blr
.sym TRKCloseFile, global
/* 801F5770 001F2850  0F E0 00 00 */	.4byte 0x0FE00000 /* invalid */
/* 801F5774 001F2854  4E 80 00 20 */	blr
.sym TRKPositionFile, global
/* 801F5778 001F2858  0F E0 00 00 */	.4byte 0x0FE00000 /* invalid */
/* 801F577C 001F285C  4E 80 00 20 */	blr
