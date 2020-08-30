.section extabindex_, "wa"  # 0x80005800 - 0x800058E0
	.incbin "baserom.dol", 0x24EC20, 0xB4
.global lbl_800058B4
lbl_800058B4:
	.incbin "baserom.dol", 0x24ECD4, 0x2C
