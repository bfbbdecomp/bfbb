.include "macros.inc"
.file "dltoken.c"

# 0x8024BBD4 - 0x8024BC74
.text
.balign 4

.fn _rwDlTokenQueryDone, global
/* 8024BBD4 00248CB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8024BBD8 00248CB8  7C 08 02 A6 */	mflr r0
/* 8024BBDC 00248CBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8024BBE0 00248CC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8024BBE4 00248CC4  7C 7F 1B 78 */	mr r31, r3
/* 8024BBE8 00248CC8  4B F8 01 D9 */	bl GXReadDrawSync
/* 8024BBEC 00248CCC  B0 6D A0 40 */	sth r3, _RwDlTokenLastSeen@sda21(r13)
/* 8024BBF0 00248CD0  A0 0D A0 40 */	lhz r0, _RwDlTokenLastSeen@sda21(r13)
/* 8024BBF4 00248CD4  28 00 E0 00 */	cmplwi r0, 0xe000
/* 8024BBF8 00248CD8  41 80 00 0C */	blt .L_8024BC04
/* 8024BBFC 00248CDC  38 60 00 00 */	li r3, 0x0
/* 8024BC00 00248CE0  48 00 00 60 */	b .L_8024BC60
.L_8024BC04:
/* 8024BC04 00248CE4  A0 6D 88 30 */	lhz r3, _RwDlTokenCurrent@sda21(r13)
/* 8024BC08 00248CE8  A0 0D A0 40 */	lhz r0, _RwDlTokenLastSeen@sda21(r13)
/* 8024BC0C 00248CEC  7C 03 00 40 */	cmplw r3, r0
/* 8024BC10 00248CF0  41 80 00 2C */	blt .L_8024BC3C
/* 8024BC14 00248CF4  A0 0D A0 40 */	lhz r0, _RwDlTokenLastSeen@sda21(r13)
/* 8024BC18 00248CF8  57 E4 04 3E */	clrlwi r4, r31, 16
/* 8024BC1C 00248CFC  38 60 00 00 */	li r3, 0x0
/* 8024BC20 00248D00  7C 04 00 40 */	cmplw r4, r0
/* 8024BC24 00248D04  40 81 00 10 */	ble .L_8024BC34
/* 8024BC28 00248D08  A0 0D 88 30 */	lhz r0, _RwDlTokenCurrent@sda21(r13)
/* 8024BC2C 00248D0C  7C 04 00 40 */	cmplw r4, r0
/* 8024BC30 00248D10  40 81 00 30 */	ble .L_8024BC60
.L_8024BC34:
/* 8024BC34 00248D14  38 60 00 01 */	li r3, 0x1
/* 8024BC38 00248D18  48 00 00 28 */	b .L_8024BC60
.L_8024BC3C:
/* 8024BC3C 00248D1C  A0 0D 88 30 */	lhz r0, _RwDlTokenCurrent@sda21(r13)
/* 8024BC40 00248D20  57 E4 04 3E */	clrlwi r4, r31, 16
/* 8024BC44 00248D24  38 60 00 00 */	li r3, 0x0
/* 8024BC48 00248D28  7C 04 00 40 */	cmplw r4, r0
/* 8024BC4C 00248D2C  40 81 00 14 */	ble .L_8024BC60
/* 8024BC50 00248D30  A0 0D A0 40 */	lhz r0, _RwDlTokenLastSeen@sda21(r13)
/* 8024BC54 00248D34  7C 04 00 40 */	cmplw r4, r0
/* 8024BC58 00248D38  41 81 00 08 */	bgt .L_8024BC60
/* 8024BC5C 00248D3C  38 60 00 01 */	li r3, 0x1
.L_8024BC60:
/* 8024BC60 00248D40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8024BC64 00248D44  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8024BC68 00248D48  7C 08 03 A6 */	mtlr r0
/* 8024BC6C 00248D4C  38 21 00 10 */	addi r1, r1, 0x10
/* 8024BC70 00248D50  4E 80 00 20 */	blr
.endfn _rwDlTokenQueryDone

# 0x803CB130 - 0x803CB138
.section .sdata, "wa"
.balign 8

.obj _RwDlTokenCurrent, global
	.2byte 0x0001
.endobj _RwDlTokenCurrent
	.4byte 0x00000000
	.2byte 0x0000

# 0x803CC940 - 0x803CC948
.section .sbss, "wa", @nobits
.balign 8

.obj _RwDlTokenLastSeen, global
	.skip 0x2
.endobj _RwDlTokenLastSeen
	.skip 0x6
