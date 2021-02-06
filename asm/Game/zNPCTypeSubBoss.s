.include "macros.inc"

.if 0

.section .text  # 0x80135EA0 - 0x8013612C

.global SUBB_InitEffects__Fv
SUBB_InitEffects__Fv:
/* 80136088 00132E88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013608C 00132E8C  7C 08 02 A6 */	mflr r0
/* 80136090 00132E90  3C 60 80 27 */	lis r3, lbl_8026CAA8@ha
/* 80136094 00132E94  38 63 CA A8 */	addi r3, r3, lbl_8026CAA8@l
/* 80136098 00132E98  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013609C 00132E9C  38 63 00 FE */	addi r3, r3, 0xfe
/* 801360A0 00132EA0  4B F7 27 A5 */	bl zParEmitterFind__FPCc
/* 801360A4 00132EA4  3C 80 80 32 */	lis r4, lbl_803242F8@ha
/* 801360A8 00132EA8  90 6D 96 3C */	stw r3, lbl_803CBF3C-_SDA_BASE_(r13)
/* 801360AC 00132EAC  38 64 42 F8 */	addi r3, r4, lbl_803242F8@l
/* 801360B0 00132EB0  38 00 01 00 */	li r0, 0x100
/* 801360B4 00132EB4  90 03 01 38 */	stw r0, 0x138(r3)
/* 801360B8 00132EB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801360BC 00132EBC  7C 08 03 A6 */	mtlr r0
/* 801360C0 00132EC0  38 21 00 10 */	addi r1, r1, 0x10
/* 801360C4 00132EC4  4E 80 00 20 */	blr 

.endif
