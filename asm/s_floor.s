.include "macros.inc"
.file "s_floor.c"

# 0x801EC48C - 0x801EC5D4
.text
.balign 4

.fn floor, global
/* 801EC48C 001E956C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EC490 001E9570  D8 21 00 08 */	stfd f1, 0x8(r1)
/* 801EC494 001E9574  80 A1 00 08 */	lwz r5, 0x8(r1)
/* 801EC498 001E9578  80 C1 00 0C */	lwz r6, 0xc(r1)
/* 801EC49C 001E957C  54 A3 65 7E */	extrwi r3, r5, 11, 1
/* 801EC4A0 001E9580  38 E3 FC 01 */	addi r7, r3, -0x3ff
/* 801EC4A4 001E9584  2C 07 00 14 */	cmpwi r7, 0x14
/* 801EC4A8 001E9588  40 80 00 98 */	bge .L_801EC540
/* 801EC4AC 001E958C  2C 07 00 00 */	cmpwi r7, 0x0
/* 801EC4B0 001E9590  40 80 00 44 */	bge .L_801EC4F4
/* 801EC4B4 001E9594  C8 42 B9 78 */	lfd f2, "@125"@sda21(r2)
/* 801EC4B8 001E9598  C8 02 B9 80 */	lfd f0, "@126"@sda21(r2)
/* 801EC4BC 001E959C  FC 22 08 2A */	fadd f1, f2, f1
/* 801EC4C0 001E95A0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801EC4C4 001E95A4  40 81 00 FC */	ble .L_801EC5C0
/* 801EC4C8 001E95A8  2C 05 00 00 */	cmpwi r5, 0x0
/* 801EC4CC 001E95AC  41 80 00 10 */	blt .L_801EC4DC
/* 801EC4D0 001E95B0  38 C0 00 00 */	li r6, 0x0
/* 801EC4D4 001E95B4  38 A0 00 00 */	li r5, 0x0
/* 801EC4D8 001E95B8  48 00 00 E8 */	b .L_801EC5C0
.L_801EC4DC:
/* 801EC4DC 001E95BC  54 A0 00 7E */	clrlwi r0, r5, 1
/* 801EC4E0 001E95C0  7C 00 33 79 */	or. r0, r0, r6
/* 801EC4E4 001E95C4  41 82 00 DC */	beq .L_801EC5C0
/* 801EC4E8 001E95C8  3C A0 BF F0 */	lis r5, 0xbff0
/* 801EC4EC 001E95CC  38 C0 00 00 */	li r6, 0x0
/* 801EC4F0 001E95D0  48 00 00 D0 */	b .L_801EC5C0
.L_801EC4F4:
/* 801EC4F4 001E95D4  3C 60 00 10 */	lis r3, 0x10
/* 801EC4F8 001E95D8  38 03 FF FF */	addi r0, r3, -0x1
/* 801EC4FC 001E95DC  7C 04 3E 30 */	sraw r4, r0, r7
/* 801EC500 001E95E0  7C A0 20 38 */	and r0, r5, r4
/* 801EC504 001E95E4  7C C0 03 79 */	or. r0, r6, r0
/* 801EC508 001E95E8  40 82 00 08 */	bne .L_801EC510
/* 801EC50C 001E95EC  48 00 00 C0 */	b .L_801EC5CC
.L_801EC510:
/* 801EC510 001E95F0  C8 42 B9 78 */	lfd f2, "@125"@sda21(r2)
/* 801EC514 001E95F4  C8 02 B9 80 */	lfd f0, "@126"@sda21(r2)
/* 801EC518 001E95F8  FC 22 08 2A */	fadd f1, f2, f1
/* 801EC51C 001E95FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801EC520 001E9600  40 81 00 A0 */	ble .L_801EC5C0
/* 801EC524 001E9604  2C 05 00 00 */	cmpwi r5, 0x0
/* 801EC528 001E9608  40 80 00 0C */	bge .L_801EC534
/* 801EC52C 001E960C  7C 60 3E 30 */	sraw r0, r3, r7
/* 801EC530 001E9610  7C A5 02 14 */	add r5, r5, r0
.L_801EC534:
/* 801EC534 001E9614  7C A5 20 78 */	andc r5, r5, r4
/* 801EC538 001E9618  38 C0 00 00 */	li r6, 0x0
/* 801EC53C 001E961C  48 00 00 84 */	b .L_801EC5C0
.L_801EC540:
/* 801EC540 001E9620  2C 07 00 33 */	cmpwi r7, 0x33
/* 801EC544 001E9624  40 81 00 14 */	ble .L_801EC558
/* 801EC548 001E9628  2C 07 04 00 */	cmpwi r7, 0x400
/* 801EC54C 001E962C  40 82 00 80 */	bne .L_801EC5CC
/* 801EC550 001E9630  FC 21 08 2A */	fadd f1, f1, f1
/* 801EC554 001E9634  48 00 00 78 */	b .L_801EC5CC
.L_801EC558:
/* 801EC558 001E9638  38 07 FF EC */	addi r0, r7, -0x14
/* 801EC55C 001E963C  38 60 FF FF */	li r3, -0x1
/* 801EC560 001E9640  7C 64 04 30 */	srw r4, r3, r0
/* 801EC564 001E9644  7C C0 20 39 */	and. r0, r6, r4
/* 801EC568 001E9648  40 82 00 08 */	bne .L_801EC570
/* 801EC56C 001E964C  48 00 00 60 */	b .L_801EC5CC
.L_801EC570:
/* 801EC570 001E9650  C8 42 B9 78 */	lfd f2, "@125"@sda21(r2)
/* 801EC574 001E9654  C8 02 B9 80 */	lfd f0, "@126"@sda21(r2)
/* 801EC578 001E9658  FC 22 08 2A */	fadd f1, f2, f1
/* 801EC57C 001E965C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801EC580 001E9660  40 81 00 40 */	ble .L_801EC5C0
/* 801EC584 001E9664  2C 05 00 00 */	cmpwi r5, 0x0
/* 801EC588 001E9668  40 80 00 34 */	bge .L_801EC5BC
/* 801EC58C 001E966C  2C 07 00 14 */	cmpwi r7, 0x14
/* 801EC590 001E9670  40 82 00 0C */	bne .L_801EC59C
/* 801EC594 001E9674  38 A5 00 01 */	addi r5, r5, 0x1
/* 801EC598 001E9678  48 00 00 24 */	b .L_801EC5BC
.L_801EC59C:
/* 801EC59C 001E967C  20 07 00 34 */	subfic r0, r7, 0x34
/* 801EC5A0 001E9680  38 60 00 01 */	li r3, 0x1
/* 801EC5A4 001E9684  7C 60 00 30 */	slw r0, r3, r0
/* 801EC5A8 001E9688  7C 06 02 14 */	add r0, r6, r0
/* 801EC5AC 001E968C  7C 00 30 40 */	cmplw r0, r6
/* 801EC5B0 001E9690  40 80 00 08 */	bge .L_801EC5B8
/* 801EC5B4 001E9694  38 A5 00 01 */	addi r5, r5, 0x1
.L_801EC5B8:
/* 801EC5B8 001E9698  7C 06 03 78 */	mr r6, r0
.L_801EC5BC:
/* 801EC5BC 001E969C  7C C6 20 78 */	andc r6, r6, r4
.L_801EC5C0:
/* 801EC5C0 001E96A0  90 A1 00 08 */	stw r5, 0x8(r1)
/* 801EC5C4 001E96A4  90 C1 00 0C */	stw r6, 0xc(r1)
/* 801EC5C8 001E96A8  C8 21 00 08 */	lfd f1, 0x8(r1)
.L_801EC5CC:
/* 801EC5CC 001E96AC  38 21 00 10 */	addi r1, r1, 0x10
/* 801EC5D0 001E96B0  4E 80 00 20 */	blr
.endfn floor

# 0x803D02F8 - 0x803D0308
.section .sdata2, "a"
.balign 8

.obj "@125", local
	.4byte 0x7E37E43C
	.4byte 0x8800759C
.endobj "@125"

.obj "@126", local
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@126"