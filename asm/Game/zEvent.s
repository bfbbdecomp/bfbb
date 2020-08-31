.include "macros.inc"

.section .text  # 0x80092AF8 - 0x80092B0C

.global zEventName__FUi
zEventName__FUi:
/* 80092AF8 0008F8F8  3C 80 80 29 */	lis r4, lbl_8028E620@ha
/* 80092AFC 0008F8FC  54 60 10 3A */	slwi r0, r3, 2
/* 80092B00 0008F900  38 64 E6 20 */	addi r3, r4, lbl_8028E620@l
/* 80092B04 0008F904  7C 63 00 2E */	lwzx r3, r3, r0
/* 80092B08 0008F908  4E 80 00 20 */	blr 
