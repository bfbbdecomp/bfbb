.include "macros.inc"
.file "baerr.c"

# 0x8022F540 - 0x8022F69C
.text
.balign 4

.fn _rwErrorOpen, global
/* 8022F540 0022C620  90 8D 9F 28 */	stw r4, errorModule@sda21(r13)
/* 8022F544 0022C624  38 ED 9F 28 */	addi r7, r13, errorModule@sda21
/* 8022F548 0022C628  38 A0 00 00 */	li r5, 0x0
/* 8022F54C 0022C62C  3C C0 80 00 */	lis r6, 0x8000
/* 8022F550 0022C630  80 87 00 04 */	lwz r4, 0x4(r7)
/* 8022F554 0022C634  38 04 00 01 */	addi r0, r4, 0x1
/* 8022F558 0022C638  90 07 00 04 */	stw r0, 0x4(r7)
/* 8022F55C 0022C63C  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8022F560 0022C640  80 0D 9F 28 */	lwz r0, errorModule@sda21(r13)
/* 8022F564 0022C644  7C A4 01 2E */	stwx r5, r4, r0
/* 8022F568 0022C648  80 8D 9F 28 */	lwz r4, errorModule@sda21(r13)
/* 8022F56C 0022C64C  80 AD 9F 7C */	lwz r5, RwEngineInstance@sda21(r13)
/* 8022F570 0022C650  38 04 00 04 */	addi r0, r4, 0x4
/* 8022F574 0022C654  7C C5 01 2E */	stwx r6, r5, r0
/* 8022F578 0022C658  4E 80 00 20 */	blr
.endfn _rwErrorOpen

.fn _rwErrorClose, global
/* 8022F57C 0022C65C  38 AD 9F 28 */	addi r5, r13, errorModule@sda21
/* 8022F580 0022C660  80 85 00 04 */	lwz r4, 0x4(r5)
/* 8022F584 0022C664  38 04 FF FF */	addi r0, r4, -0x1
/* 8022F588 0022C668  90 05 00 04 */	stw r0, 0x4(r5)
/* 8022F58C 0022C66C  4E 80 00 20 */	blr
.endfn _rwErrorClose

.fn RwErrorSet, global
/* 8022F590 0022C670  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8022F594 0022C674  80 0D 9F 28 */	lwz r0, errorModule@sda21(r13)
/* 8022F598 0022C678  7C A4 02 14 */	add r5, r4, r0
/* 8022F59C 0022C67C  80 05 00 00 */	lwz r0, 0x0(r5)
/* 8022F5A0 0022C680  2C 00 00 00 */	cmpwi r0, 0x0
/* 8022F5A4 0022C684  4C 82 00 20 */	bnelr
/* 8022F5A8 0022C688  80 85 00 04 */	lwz r4, 0x4(r5)
/* 8022F5AC 0022C68C  3C 04 80 00 */	addis r0, r4, 0x8000
/* 8022F5B0 0022C690  28 00 00 00 */	cmplwi r0, 0x0
/* 8022F5B4 0022C694  4C 82 00 20 */	bnelr
/* 8022F5B8 0022C698  80 03 00 04 */	lwz r0, 0x4(r3)
/* 8022F5BC 0022C69C  54 00 00 01 */	clrrwi. r0, r0, 31
/* 8022F5C0 0022C6A0  41 82 00 10 */	beq .L_8022F5D0
/* 8022F5C4 0022C6A4  38 00 00 00 */	li r0, 0x0
/* 8022F5C8 0022C6A8  90 05 00 00 */	stw r0, 0x0(r5)
/* 8022F5CC 0022C6AC  48 00 00 0C */	b .L_8022F5D8
.L_8022F5D0:
/* 8022F5D0 0022C6B0  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8022F5D4 0022C6B4  90 05 00 00 */	stw r0, 0x0(r5)
.L_8022F5D8:
/* 8022F5D8 0022C6B8  80 8D 9F 28 */	lwz r4, errorModule@sda21(r13)
/* 8022F5DC 0022C6BC  80 C3 00 04 */	lwz r6, 0x4(r3)
/* 8022F5E0 0022C6C0  80 AD 9F 7C */	lwz r5, RwEngineInstance@sda21(r13)
/* 8022F5E4 0022C6C4  38 04 00 04 */	addi r0, r4, 0x4
/* 8022F5E8 0022C6C8  7C C5 01 2E */	stwx r6, r5, r0
/* 8022F5EC 0022C6CC  4E 80 00 20 */	blr
.endfn RwErrorSet

.fn RwErrorGet, global
/* 8022F5F0 0022C6D0  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8022F5F4 0022C6D4  38 A0 00 00 */	li r5, 0x0
/* 8022F5F8 0022C6D8  80 0D 9F 28 */	lwz r0, errorModule@sda21(r13)
/* 8022F5FC 0022C6DC  3C C0 80 00 */	lis r6, 0x8000
/* 8022F600 0022C6E0  7C E4 02 14 */	add r7, r4, r0
/* 8022F604 0022C6E4  80 87 00 00 */	lwz r4, 0x0(r7)
/* 8022F608 0022C6E8  80 07 00 04 */	lwz r0, 0x4(r7)
/* 8022F60C 0022C6EC  90 83 00 00 */	stw r4, 0x0(r3)
/* 8022F610 0022C6F0  90 03 00 04 */	stw r0, 0x4(r3)
/* 8022F614 0022C6F4  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8022F618 0022C6F8  80 0D 9F 28 */	lwz r0, errorModule@sda21(r13)
/* 8022F61C 0022C6FC  7C A4 01 2E */	stwx r5, r4, r0
/* 8022F620 0022C700  80 8D 9F 28 */	lwz r4, errorModule@sda21(r13)
/* 8022F624 0022C704  80 AD 9F 7C */	lwz r5, RwEngineInstance@sda21(r13)
/* 8022F628 0022C708  38 04 00 04 */	addi r0, r4, 0x4
/* 8022F62C 0022C70C  7C C5 01 2E */	stwx r6, r5, r0
/* 8022F630 0022C710  4E 80 00 20 */	blr
.endfn RwErrorGet

.fn _rwerror, global
/* 8022F634 0022C714  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8022F638 0022C718  40 86 00 24 */	bne cr1, .L_8022F65C
/* 8022F63C 0022C71C  D8 21 00 28 */	stfd f1, 0x28(r1)
/* 8022F640 0022C720  D8 41 00 30 */	stfd f2, 0x30(r1)
/* 8022F644 0022C724  D8 61 00 38 */	stfd f3, 0x38(r1)
/* 8022F648 0022C728  D8 81 00 40 */	stfd f4, 0x40(r1)
/* 8022F64C 0022C72C  D8 A1 00 48 */	stfd f5, 0x48(r1)
/* 8022F650 0022C730  D8 C1 00 50 */	stfd f6, 0x50(r1)
/* 8022F654 0022C734  D8 E1 00 58 */	stfd f7, 0x58(r1)
/* 8022F658 0022C738  D9 01 00 60 */	stfd f8, 0x60(r1)
.L_8022F65C:
/* 8022F65C 0022C73C  39 61 00 88 */	addi r11, r1, 0x88
/* 8022F660 0022C740  38 01 00 08 */	addi r0, r1, 0x8
/* 8022F664 0022C744  3D 80 01 00 */	lis r12, 0x100
/* 8022F668 0022C748  90 61 00 08 */	stw r3, 0x8(r1)
/* 8022F66C 0022C74C  90 81 00 0C */	stw r4, 0xc(r1)
/* 8022F670 0022C750  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8022F674 0022C754  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8022F678 0022C758  90 E1 00 18 */	stw r7, 0x18(r1)
/* 8022F67C 0022C75C  91 01 00 1C */	stw r8, 0x1c(r1)
/* 8022F680 0022C760  91 21 00 20 */	stw r9, 0x20(r1)
/* 8022F684 0022C764  91 41 00 24 */	stw r10, 0x24(r1)
/* 8022F688 0022C768  91 81 00 68 */	stw r12, 0x68(r1)
/* 8022F68C 0022C76C  91 61 00 6C */	stw r11, 0x6c(r1)
/* 8022F690 0022C770  90 01 00 70 */	stw r0, 0x70(r1)
/* 8022F694 0022C774  38 21 00 80 */	addi r1, r1, 0x80
/* 8022F698 0022C778  4E 80 00 20 */	blr
.endfn _rwerror

# 0x803CC828 - 0x803CC830
.section .sbss, "wa", @nobits
.balign 8

.obj errorModule, local
	.skip 0x8
.endobj errorModule
