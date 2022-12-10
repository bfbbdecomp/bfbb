.include "macros.inc"
.file "locale.c"

# 0x80279A28 - 0x80279A30
.rodata
.balign 8

.obj "@stringBase0", local
	.4byte 0x2E000043
	.byte 0x00
.endobj "@stringBase0"
	.byte 0x00, 0x00, 0x00

# 0x802B70B0 - 0x802B70E8
.data
.balign 8

.obj __lconv, global
	.4byte "@stringBase0"
	.4byte "@stringBase0"+0x2
	.4byte "@stringBase0"+0x2
	.4byte "@stringBase0"+0x2
	.4byte "@stringBase0"+0x2
	.4byte "@stringBase0"+0x2
	.4byte "@stringBase0"+0x2
	.4byte "@stringBase0"+0x2
	.4byte "@stringBase0"+0x2
	.4byte 0x7F7F7F7F
	.4byte 0x7F7F7F00
	.4byte "@stringBase0"+0x2
	.4byte 0x7F7F7F7F
	.4byte 0x7F7F7F00
.endobj __lconv
