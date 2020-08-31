.section .ctors  # 0x80251D00 - 0x80251D40
.global lbl__ctors
lbl__ctors:
	.incbin "baserom.dol", 0x24ED00, 0x40
