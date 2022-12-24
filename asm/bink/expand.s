.include "macros.inc"
.file "C:\\devel\\projects\\bink\\expand.c"

# 0x801A8BA0 - 0x801A8D38
.text
.balign 4
.sym gcc2_compiled., local

.fn pushmalloc, global
/* 801A8BA0 001A5C80  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 801A8BA4 001A5C84  7C 08 02 A6 */	mflr r0
/* 801A8BA8 001A5C88  BF 81 00 08 */	stmw r28, 0x8(r1)
/* 801A8BAC 001A5C8C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 801A8BB0 001A5C90  81 2D 85 40 */	lwz r9, cursize@sda21(r13)
/* 801A8BB4 001A5C94  7C 7C 1B 78 */	mr r28, r3
/* 801A8BB8 001A5C98  80 0D 85 34 */	lwz r0, pushcur@sda21(r13)
/* 801A8BBC 001A5C9C  7C 9F 23 78 */	mr r31, r4
/* 801A8BC0 001A5CA0  7C 09 00 00 */	cmpw r9, r0
/* 801A8BC4 001A5CA4  40 82 00 68 */	bne .L_801A8C2C
/* 801A8BC8 001A5CA8  55 23 20 36 */	slwi r3, r9, 4
/* 801A8BCC 001A5CAC  4B FE DF 55 */	bl radmalloc
/* 801A8BD0 001A5CB0  80 AD 85 40 */	lwz r5, cursize@sda21(r13)
/* 801A8BD4 001A5CB4  7C 7E 1B 78 */	mr r30, r3
/* 801A8BD8 001A5CB8  80 8D 85 38 */	lwz r4, pushptr@sda21(r13)
/* 801A8BDC 001A5CBC  54 A0 18 38 */	slwi r0, r5, 3
/* 801A8BE0 001A5CC0  7F BE 02 14 */	add r29, r30, r0
/* 801A8BE4 001A5CC4  54 A5 10 3A */	slwi r5, r5, 2
/* 801A8BE8 001A5CC8  4C C6 31 82 */	crclr 4*cr1+eq
/* 801A8BEC 001A5CCC  4B E5 A9 55 */	bl memcpy
/* 801A8BF0 001A5CD0  80 AD 85 40 */	lwz r5, cursize@sda21(r13)
/* 801A8BF4 001A5CD4  7F A3 EB 78 */	mr r3, r29
/* 801A8BF8 001A5CD8  80 8D 85 3C */	lwz r4, pushamt@sda21(r13)
/* 801A8BFC 001A5CDC  54 A5 10 3A */	slwi r5, r5, 2
/* 801A8C00 001A5CE0  4C C6 31 82 */	crclr 4*cr1+eq
/* 801A8C04 001A5CE4  4B E5 A9 3D */	bl memcpy
/* 801A8C08 001A5CE8  80 0D 85 40 */	lwz r0, cursize@sda21(r13)
/* 801A8C0C 001A5CEC  7C 00 02 14 */	add r0, r0, r0
/* 801A8C10 001A5CF0  2C 00 00 40 */	cmpwi r0, 0x40
/* 801A8C14 001A5CF4  90 0D 85 40 */	stw r0, cursize@sda21(r13)
/* 801A8C18 001A5CF8  41 82 00 0C */	beq .L_801A8C24
/* 801A8C1C 001A5CFC  80 6D 85 38 */	lwz r3, pushptr@sda21(r13)
/* 801A8C20 001A5D00  4B FE DF B1 */	bl radfree
.L_801A8C24:
/* 801A8C24 001A5D04  93 CD 85 38 */	stw r30, pushptr@sda21(r13)
/* 801A8C28 001A5D08  93 AD 85 3C */	stw r29, pushamt@sda21(r13)
.L_801A8C2C:
/* 801A8C2C 001A5D0C  81 6D 85 30 */	lwz r11, pushtot@sda21(r13)
/* 801A8C30 001A5D10  38 1F 00 1F */	addi r0, r31, 0x1f
/* 801A8C34 001A5D14  54 1F 00 34 */	clrrwi r31, r0, 5
/* 801A8C38 001A5D18  81 4D 85 34 */	lwz r10, pushcur@sda21(r13)
/* 801A8C3C 001A5D1C  57 E0 DE FE */	extrwi r0, r31, 5, 22
/* 801A8C40 001A5D20  55 69 DE FE */	extrwi r9, r11, 5, 22
/* 801A8C44 001A5D24  7D 20 48 50 */	subf r9, r0, r9
/* 801A8C48 001A5D28  80 CD 85 3C */	lwz r6, pushamt@sda21(r13)
/* 801A8C4C 001A5D2C  39 29 00 21 */	addi r9, r9, 0x21
/* 801A8C50 001A5D30  81 0D 85 38 */	lwz r8, pushptr@sda21(r13)
/* 801A8C54 001A5D34  55 29 2D B4 */	clrlslwi r9, r9, 27, 5
/* 801A8C58 001A5D38  55 4A 10 3A */	slwi r10, r10, 2
/* 801A8C5C 001A5D3C  7F FF 4A 14 */	add r31, r31, r9
/* 801A8C60 001A5D40  38 ED 85 34 */	addi r7, r13, pushcur@sda21
/* 801A8C64 001A5D44  7D 6B FA 14 */	add r11, r11, r31
/* 801A8C68 001A5D48  91 6D 85 30 */	stw r11, pushtot@sda21(r13)
/* 801A8C6C 001A5D4C  7F EA 31 2E */	stwx r31, r10, r6
/* 801A8C70 001A5D50  81 27 00 00 */	lwz r9, 0x0(r7)
/* 801A8C74 001A5D54  55 2B 10 3A */	slwi r11, r9, 2
/* 801A8C78 001A5D58  7F 8B 41 2E */	stwx r28, r11, r8
/* 801A8C7C 001A5D5C  39 29 00 01 */	addi r9, r9, 0x1
/* 801A8C80 001A5D60  91 27 00 00 */	stw r9, 0x0(r7)
/* 801A8C84 001A5D64  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 801A8C88 001A5D68  7C 08 03 A6 */	mtlr r0
/* 801A8C8C 001A5D6C  BB 81 00 08 */	lmw r28, 0x8(r1)
/* 801A8C90 001A5D70  38 21 00 18 */	addi r1, r1, 0x18
/* 801A8C94 001A5D74  4E 80 00 20 */	blr
.endfn pushmalloc

.fn popmalloctotal, global
/* 801A8C98 001A5D78  80 6D 85 30 */	lwz r3, pushtot@sda21(r13)
/* 801A8C9C 001A5D7C  4E 80 00 20 */	blr
.endfn popmalloctotal

.fn popmalloc, global
/* 801A8CA0 001A5D80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801A8CA4 001A5D84  7C 08 02 A6 */	mflr r0
/* 801A8CA8 001A5D88  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801A8CAC 001A5D8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801A8CB0 001A5D90  80 0D 85 30 */	lwz r0, pushtot@sda21(r13)
/* 801A8CB4 001A5D94  38 63 00 1F */	addi r3, r3, 0x1f
/* 801A8CB8 001A5D98  54 7F 00 34 */	clrrwi r31, r3, 5
/* 801A8CBC 001A5D9C  7C 60 FA 14 */	add r3, r0, r31
/* 801A8CC0 001A5DA0  4B FE DE 61 */	bl radmalloc
/* 801A8CC4 001A5DA4  38 00 00 00 */	li r0, 0x0
/* 801A8CC8 001A5DA8  7C 67 1B 79 */	mr. r7, r3
/* 801A8CCC 001A5DAC  90 0D 85 30 */	stw r0, pushtot@sda21(r13)
/* 801A8CD0 001A5DB0  41 82 00 48 */	beq .L_801A8D18
/* 801A8CD4 001A5DB4  80 0D 85 34 */	lwz r0, pushcur@sda21(r13)
/* 801A8CD8 001A5DB8  39 00 00 00 */	li r8, 0x0
/* 801A8CDC 001A5DBC  7C 67 FA 14 */	add r3, r7, r31
/* 801A8CE0 001A5DC0  7C 08 00 40 */	cmplw r8, r0
/* 801A8CE4 001A5DC4  40 80 00 34 */	bge .L_801A8D18
/* 801A8CE8 001A5DC8  39 40 00 00 */	li r10, 0x0
.L_801A8CEC:
/* 801A8CEC 001A5DCC  81 6D 85 38 */	lwz r11, pushptr@sda21(r13)
/* 801A8CF0 001A5DD0  39 08 00 01 */	addi r8, r8, 0x1
/* 801A8CF4 001A5DD4  7D 2A 58 2E */	lwzx r9, r10, r11
/* 801A8CF8 001A5DD8  90 69 00 00 */	stw r3, 0x0(r9)
/* 801A8CFC 001A5DDC  81 6D 85 3C */	lwz r11, pushamt@sda21(r13)
/* 801A8D00 001A5DE0  80 0D 85 34 */	lwz r0, pushcur@sda21(r13)
/* 801A8D04 001A5DE4  7D 2A 58 2E */	lwzx r9, r10, r11
/* 801A8D08 001A5DE8  7C 08 00 40 */	cmplw r8, r0
/* 801A8D0C 001A5DEC  39 4A 00 04 */	addi r10, r10, 0x4
/* 801A8D10 001A5DF0  7C 63 4A 14 */	add r3, r3, r9
/* 801A8D14 001A5DF4  41 80 FF D8 */	blt .L_801A8CEC
.L_801A8D18:
/* 801A8D18 001A5DF8  38 00 00 00 */	li r0, 0x0
/* 801A8D1C 001A5DFC  7C E3 3B 78 */	mr r3, r7
/* 801A8D20 001A5E00  90 0D 85 34 */	stw r0, pushcur@sda21(r13)
/* 801A8D24 001A5E04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801A8D28 001A5E08  7C 08 03 A6 */	mtlr r0
/* 801A8D2C 001A5E0C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801A8D30 001A5E10  38 21 00 10 */	addi r1, r1, 0x10
/* 801A8D34 001A5E14  4E 80 00 20 */	blr
.endfn popmalloc

# 0x80363C88 - 0x80363D88
.section .bss, "wa", @nobits
.balign 8
.sym ptrs, local
	.skip 0x80
.endsym ptrs
.sym amt, local
	.skip 0x80
.endsym amt

# 0x803CAE30 - 0x803CAE48
.section .sdata, "wa"
.balign 8

.obj pushtot, local
	.4byte 0x00000000
.endobj pushtot

.obj pushcur, local
	.4byte 0x00000000
.endobj pushcur

.obj pushptr, local
	.4byte ptrs
.endobj pushptr

.obj pushamt, local
	.4byte amt
.endobj pushamt

.obj cursize, local
	.4byte 0x00000020
.endobj cursize
	.4byte 0x00000000
