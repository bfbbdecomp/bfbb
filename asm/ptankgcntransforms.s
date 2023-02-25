.include "macros.inc"
.file "ptankgcntransforms.c"

# 0x8027A478 - 0x8027A498
.rodata
.balign 8

.obj _rwConstants, global
	.4byte 0x00000000
	.4byte 0x40490FDB
	.4byte 0x00000000
	.4byte 0xBFC90FDB
	.4byte 0x3F800000
	.4byte 0x3F800000
	.4byte 0x3ECF817A
	.4byte 0x3F800000
.endobj _rwConstants

# 0x803CB030 - 0x803CB038
.section .sdata, "wa"
.balign 8

.obj _rwPNumber1, global
	.4byte _rwNnumber1
.endobj _rwPNumber1

.obj _rwConst, global
	.4byte _rwConstants
.endobj _rwConst

# 0x803D0498 - 0x803D04A8
.section .sdata2, "a"
.balign 8

.obj _rwNnumber1, global
	.4byte 0x3F000000
	.4byte 0xBF000000
.endobj _rwNnumber1

.obj _rwFifo, global
	.4byte 0xCC008000
.endobj _rwFifo
	.4byte 0x00000000
