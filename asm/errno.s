.include "macros.inc"
.file "errno.c"

# 0x803CC698 - 0x803CC6A0
.section .sbss, "wa", @nobits
.balign 8

.obj errno, global
	.skip 0x4
.endobj errno
	.skip 0x4
