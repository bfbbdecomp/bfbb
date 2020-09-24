.section .rodata   # 0x80251D80 - 0x80251E48

.global lbl_80251D80
lbl_80251D80:
	.incbin "baserom.dol", 0x24ED60, 0x80
.global lbl_80251E00
lbl_80251E00:
	.incbin "baserom.dol", 0x24EDE0, 0x48