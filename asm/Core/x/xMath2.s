.section .rodata   # 0x80252FC8 - 0x80252FE8

.global lbl_80252FC8
lbl_80252FC8:
	.incbin "baserom.dol", 0x24FFA8, 0x10
.global lbl_80252FD8
lbl_80252FD8:
	.incbin "baserom.dol", 0x24FFB8, 0x10