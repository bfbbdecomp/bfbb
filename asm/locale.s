.include "macros.inc"
.file "locale.c"

# 0x80279A28 - 0x80279A30
.rodata
.balign 8

.obj "@stringBase0", local
	.2byte 0x2E00
.L_80279A2A:
	.byte 0x00, 0x43, 0x00
.endobj "@stringBase0"
	.byte 0x00, 0x00, 0x00

# 0x802B70B0 - 0x802B70E8
.data
.balign 8

.obj __lconv, global
	.4byte "@stringBase0"
	.rel "@stringBase0", .L_80279A2A
	.rel "@stringBase0", .L_80279A2A
	.rel "@stringBase0", .L_80279A2A
	.rel "@stringBase0", .L_80279A2A
	.rel "@stringBase0", .L_80279A2A
	.rel "@stringBase0", .L_80279A2A
	.rel "@stringBase0", .L_80279A2A
	.rel "@stringBase0", .L_80279A2A
	.4byte 0x7F7F7F7F
	.4byte 0x7F7F7F00
	.rel "@stringBase0", .L_80279A2A
	.4byte 0x7F7F7F7F
	.4byte 0x7F7F7F00
.endobj __lconv
