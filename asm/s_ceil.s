.include "macros.inc"
.file "s_ceil.c"

# 0x801EC24C - 0x801EC390
.text
.balign 4

.fn ceil, global
/* 801EC24C 001E932C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EC250 001E9330  D8 21 00 08 */	stfd f1, 0x8(r1)
/* 801EC254 001E9334  80 A1 00 08 */	lwz r5, 0x8(r1)
/* 801EC258 001E9338  80 C1 00 0C */	lwz r6, 0xc(r1)
/* 801EC25C 001E933C  54 A3 65 7E */	extrwi r3, r5, 11, 1
/* 801EC260 001E9340  38 E3 FC 01 */	addi r7, r3, -0x3ff
/* 801EC264 001E9344  2C 07 00 14 */	cmpwi r7, 0x14
/* 801EC268 001E9348  40 80 00 94 */	bge .L_801EC2FC
/* 801EC26C 001E934C  2C 07 00 00 */	cmpwi r7, 0x0
/* 801EC270 001E9350  40 80 00 40 */	bge .L_801EC2B0
/* 801EC274 001E9354  C8 42 B9 60 */	lfd f2, "@125"@sda21(r2)
/* 801EC278 001E9358  C8 02 B9 68 */	lfd f0, "@126"@sda21(r2)
/* 801EC27C 001E935C  FC 22 08 2A */	fadd f1, f2, f1
/* 801EC280 001E9360  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801EC284 001E9364  40 81 00 F8 */	ble .L_801EC37C
/* 801EC288 001E9368  2C 05 00 00 */	cmpwi r5, 0x0
/* 801EC28C 001E936C  40 80 00 10 */	bge .L_801EC29C
/* 801EC290 001E9370  3C A0 80 00 */	lis r5, 0x8000
/* 801EC294 001E9374  38 C0 00 00 */	li r6, 0x0
/* 801EC298 001E9378  48 00 00 E4 */	b .L_801EC37C
.L_801EC29C:
/* 801EC29C 001E937C  7C A0 33 79 */	or. r0, r5, r6
/* 801EC2A0 001E9380  41 82 00 DC */	beq .L_801EC37C
/* 801EC2A4 001E9384  3C A0 3F F0 */	lis r5, 0x3ff0
/* 801EC2A8 001E9388  38 C0 00 00 */	li r6, 0x0
/* 801EC2AC 001E938C  48 00 00 D0 */	b .L_801EC37C
.L_801EC2B0:
/* 801EC2B0 001E9390  3C 60 00 10 */	lis r3, 0x10
/* 801EC2B4 001E9394  38 03 FF FF */	addi r0, r3, -0x1
/* 801EC2B8 001E9398  7C 04 3E 30 */	sraw r4, r0, r7
/* 801EC2BC 001E939C  7C A0 20 38 */	and r0, r5, r4
/* 801EC2C0 001E93A0  7C C0 03 79 */	or. r0, r6, r0
/* 801EC2C4 001E93A4  40 82 00 08 */	bne .L_801EC2CC
/* 801EC2C8 001E93A8  48 00 00 C0 */	b .L_801EC388
.L_801EC2CC:
/* 801EC2CC 001E93AC  C8 42 B9 60 */	lfd f2, "@125"@sda21(r2)
/* 801EC2D0 001E93B0  C8 02 B9 68 */	lfd f0, "@126"@sda21(r2)
/* 801EC2D4 001E93B4  FC 22 08 2A */	fadd f1, f2, f1
/* 801EC2D8 001E93B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801EC2DC 001E93BC  40 81 00 A0 */	ble .L_801EC37C
/* 801EC2E0 001E93C0  2C 05 00 00 */	cmpwi r5, 0x0
/* 801EC2E4 001E93C4  40 81 00 0C */	ble .L_801EC2F0
/* 801EC2E8 001E93C8  7C 60 3E 30 */	sraw r0, r3, r7
/* 801EC2EC 001E93CC  7C A5 02 14 */	add r5, r5, r0
.L_801EC2F0:
/* 801EC2F0 001E93D0  7C A5 20 78 */	andc r5, r5, r4
/* 801EC2F4 001E93D4  38 C0 00 00 */	li r6, 0x0
/* 801EC2F8 001E93D8  48 00 00 84 */	b .L_801EC37C
.L_801EC2FC:
/* 801EC2FC 001E93DC  2C 07 00 33 */	cmpwi r7, 0x33
/* 801EC300 001E93E0  40 81 00 14 */	ble .L_801EC314
/* 801EC304 001E93E4  2C 07 04 00 */	cmpwi r7, 0x400
/* 801EC308 001E93E8  40 82 00 80 */	bne .L_801EC388
/* 801EC30C 001E93EC  FC 21 08 2A */	fadd f1, f1, f1
/* 801EC310 001E93F0  48 00 00 78 */	b .L_801EC388
.L_801EC314:
/* 801EC314 001E93F4  38 07 FF EC */	addi r0, r7, -0x14
/* 801EC318 001E93F8  38 60 FF FF */	li r3, -0x1
/* 801EC31C 001E93FC  7C 64 04 30 */	srw r4, r3, r0
/* 801EC320 001E9400  7C C0 20 39 */	and. r0, r6, r4
/* 801EC324 001E9404  40 82 00 08 */	bne .L_801EC32C
/* 801EC328 001E9408  48 00 00 60 */	b .L_801EC388
.L_801EC32C:
/* 801EC32C 001E940C  C8 42 B9 60 */	lfd f2, "@125"@sda21(r2)
/* 801EC330 001E9410  C8 02 B9 68 */	lfd f0, "@126"@sda21(r2)
/* 801EC334 001E9414  FC 22 08 2A */	fadd f1, f2, f1
/* 801EC338 001E9418  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801EC33C 001E941C  40 81 00 40 */	ble .L_801EC37C
/* 801EC340 001E9420  2C 05 00 00 */	cmpwi r5, 0x0
/* 801EC344 001E9424  40 81 00 34 */	ble .L_801EC378
/* 801EC348 001E9428  2C 07 00 14 */	cmpwi r7, 0x14
/* 801EC34C 001E942C  40 82 00 0C */	bne .L_801EC358
/* 801EC350 001E9430  38 A5 00 01 */	addi r5, r5, 0x1
/* 801EC354 001E9434  48 00 00 24 */	b .L_801EC378
.L_801EC358:
/* 801EC358 001E9438  20 07 00 34 */	subfic r0, r7, 0x34
/* 801EC35C 001E943C  38 60 00 01 */	li r3, 0x1
/* 801EC360 001E9440  7C 60 00 30 */	slw r0, r3, r0
/* 801EC364 001E9444  7C 06 02 14 */	add r0, r6, r0
/* 801EC368 001E9448  7C 00 30 40 */	cmplw r0, r6
/* 801EC36C 001E944C  40 80 00 08 */	bge .L_801EC374
/* 801EC370 001E9450  38 A5 00 01 */	addi r5, r5, 0x1
.L_801EC374:
/* 801EC374 001E9454  7C 06 03 78 */	mr r6, r0
.L_801EC378:
/* 801EC378 001E9458  7C C6 20 78 */	andc r6, r6, r4
.L_801EC37C:
/* 801EC37C 001E945C  90 A1 00 08 */	stw r5, 0x8(r1)
/* 801EC380 001E9460  90 C1 00 0C */	stw r6, 0xc(r1)
/* 801EC384 001E9464  C8 21 00 08 */	lfd f1, 0x8(r1)
.L_801EC388:
/* 801EC388 001E9468  38 21 00 10 */	addi r1, r1, 0x10
/* 801EC38C 001E946C  4E 80 00 20 */	blr
.endfn ceil

# 0x803D02E0 - 0x803D02F0
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