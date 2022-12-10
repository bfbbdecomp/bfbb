.include "macros.inc"
.file "iDraw.cpp"

# 0x800C2E3C - 0x800C2EAC
.text
.balign 4

# iDrawSetFBMSK(unsigned int)
.fn iDrawSetFBMSK__FUi, global
/* 800C2E3C 000BFF1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C2E40 000BFF20  7C 08 02 A6 */	mflr r0
/* 800C2E44 000BFF24  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C2E48 000BFF28  54 60 46 3F */	srwi. r0, r3, 24
/* 800C2E4C 000BFF2C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800C2E50 000BFF30  7C 7F 1B 78 */	mr r31, r3
/* 800C2E54 000BFF34  40 82 00 10 */	bne .L_800C2E64
/* 800C2E58 000BFF38  38 60 00 01 */	li r3, 0x1
/* 800C2E5C 000BFF3C  48 10 CA 45 */	bl GXSetAlphaUpdate
/* 800C2E60 000BFF40  48 00 00 14 */	b .L_800C2E74
.L_800C2E64:
/* 800C2E64 000BFF44  28 00 00 FF */	cmplwi r0, 0xff
/* 800C2E68 000BFF48  40 82 00 0C */	bne .L_800C2E74
/* 800C2E6C 000BFF4C  38 60 00 00 */	li r3, 0x0
/* 800C2E70 000BFF50  48 10 CA 31 */	bl GXSetAlphaUpdate
.L_800C2E74:
/* 800C2E74 000BFF54  57 E0 02 3F */	clrlwi. r0, r31, 8
/* 800C2E78 000BFF58  40 82 00 10 */	bne .L_800C2E88
/* 800C2E7C 000BFF5C  38 60 00 01 */	li r3, 0x1
/* 800C2E80 000BFF60  48 10 C9 F5 */	bl GXSetColorUpdate
/* 800C2E84 000BFF64  48 00 00 0C */	b .L_800C2E90
.L_800C2E88:
/* 800C2E88 000BFF68  38 60 00 00 */	li r3, 0x0
/* 800C2E8C 000BFF6C  48 10 C9 E9 */	bl GXSetColorUpdate
.L_800C2E90:
/* 800C2E90 000BFF70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C2E94 000BFF74  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800C2E98 000BFF78  7C 08 03 A6 */	mtlr r0
/* 800C2E9C 000BFF7C  38 21 00 10 */	addi r1, r1, 0x10
/* 800C2EA0 000BFF80  4E 80 00 20 */	blr
.endfn iDrawSetFBMSK__FUi

# iDrawBegin()
.fn iDrawBegin__Fv, global
/* 800C2EA4 000BFF84  4E 80 00 20 */	blr
.endfn iDrawBegin__Fv

# iDrawEnd()
.fn iDrawEnd__Fv, global
/* 800C2EA8 000BFF88  4E 80 00 20 */	blr
.endfn iDrawEnd__Fv
