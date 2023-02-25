.include "macros.inc"
.file "OSSync.c"

# 0x801D6588 - 0x801D660C
.text
.balign 4

.fn SystemCallVector, local
.sym __OSSystemCallVectorStart, global
/* 801D6588 001D3668  7D 30 FA A6 */	mfspr r9, HID0
/* 801D658C 001D366C  61 2A 00 08 */	ori r10, r9, 0x8
/* 801D6590 001D3670  7D 50 FB A6 */	mtspr HID0, r10
/* 801D6594 001D3674  4C 00 01 2C */	isync
/* 801D6598 001D3678  7C 00 04 AC */	sync
/* 801D659C 001D367C  7D 30 FB A6 */	mtspr HID0, r9
/* 801D65A0 001D3680  4C 00 00 64 */	rfi
.sym __OSSystemCallVectorEnd, global
/* 801D65A4 001D3684  60 00 00 00 */	nop
.endfn SystemCallVector

.fn __OSInitSystemCall, global
/* 801D65A8 001D3688  7C 08 02 A6 */	mflr r0
/* 801D65AC 001D368C  90 01 00 04 */	stw r0, 0x4(r1)
/* 801D65B0 001D3690  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D65B4 001D3694  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D65B8 001D3698  3C A0 80 00 */	lis r5, 0x8000
/* 801D65BC 001D369C  3C 80 80 1D */	lis r4, __OSSystemCallVectorStart@ha
/* 801D65C0 001D36A0  3C 60 80 1D */	lis r3, __OSSystemCallVectorEnd@ha
/* 801D65C4 001D36A4  3B E5 0C 00 */	addi r31, r5, 0xc00
/* 801D65C8 001D36A8  38 03 65 A4 */	addi r0, r3, __OSSystemCallVectorEnd@l
/* 801D65CC 001D36AC  38 84 65 88 */	addi r4, r4, __OSSystemCallVectorStart@l
/* 801D65D0 001D36B0  7F E3 FB 78 */	mr r3, r31
/* 801D65D4 001D36B4  7C A4 00 50 */	subf r5, r4, r0
/* 801D65D8 001D36B8  4B E2 CF 69 */	bl memcpy
/* 801D65DC 001D36BC  7F E3 FB 78 */	mr r3, r31
/* 801D65E0 001D36C0  38 80 01 00 */	li r4, 0x100
/* 801D65E4 001D36C4  4B FF BD D5 */	bl DCFlushRangeNoSync
/* 801D65E8 001D36C8  7C 00 04 AC */	sync
/* 801D65EC 001D36CC  7F E3 FB 78 */	mr r3, r31
/* 801D65F0 001D36D0  38 80 01 00 */	li r4, 0x100
/* 801D65F4 001D36D4  4B FF BD F1 */	bl ICInvalidateRange
/* 801D65F8 001D36D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D65FC 001D36DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D6600 001D36E0  38 21 00 10 */	addi r1, r1, 0x10
/* 801D6604 001D36E4  7C 08 03 A6 */	mtlr r0
/* 801D6608 001D36E8  4E 80 00 20 */	blr
.endfn __OSInitSystemCall
