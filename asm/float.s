.include "macros.inc"
.file "float.c"

# 0x803CAFB8 - 0x803CAFE8
.section .sdata, "wa"
.balign 8

.obj __float_nan, global
	.4byte 0x7FFFFFFF
.endobj __float_nan

.obj __float_huge, global
	.4byte 0x7F800000
.endobj __float_huge

.obj __double_min, global
	.4byte 0x00100000
	.4byte 0x00000000
.endobj __double_min

.obj __double_max, global
	.4byte 0x7FEFFFFF
	.4byte 0xFFFFFFFF
.endobj __double_max

.obj __double_huge, global
	.4byte 0x7FF00000
	.4byte 0x00000000
.endobj __double_huge

.obj __extended_min, global
	.4byte 0x00100000
	.4byte 0x00000000
.endobj __extended_min

.obj __extended_max, global
	.4byte 0x7FEFFFFF
	.4byte 0xFFFFFFFF
.endobj __extended_max
