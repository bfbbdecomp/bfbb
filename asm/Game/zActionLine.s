.include "macros.inc"

.section .rodata   # 0x80254308 - 0x80254318

.global zActionLineStrings
zActionLineStrings:
	.4byte 0x41435449
	.4byte 0x4F4E4C49
	.4byte 0x4E455300
	.4byte 0x00000000

.if 0

.section .text  # 0x8004E510 - 0x8004E7E0

.global zActionLineInit__Fv
zActionLineInit__Fv:
/* 8004E510 0004B310  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004E514 0004B314  7C 08 02 A6 */	mflr r0
/* 8004E518 0004B318  3C 60 80 25 */	lis r3, zActionLineStrings@ha
/* 8004E51C 0004B31C  3C 80 80 2E */	lis r4, sActionLine@ha
/* 8004E520 0004B320  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004E524 0004B324  38 00 00 00 */	li r0, 0
/* 8004E528 0004B328  38 63 43 08 */	addi r3, r3, zActionLineStrings@l
/* 8004E52C 0004B32C  94 04 B9 A0 */	stwu r0, sActionLine@l(r4)
/* 8004E530 0004B330  90 04 00 04 */	stw r0, 4(r4)
/* 8004E534 0004B334  90 04 00 08 */	stw r0, 8(r4)
/* 8004E538 0004B338  90 04 00 0C */	stw r0, 0xc(r4)
/* 8004E53C 0004B33C  90 04 00 10 */	stw r0, 0x10(r4)
/* 8004E540 0004B340  90 04 00 14 */	stw r0, 0x14(r4)
/* 8004E544 0004B344  90 04 00 18 */	stw r0, 0x18(r4)
/* 8004E548 0004B348  90 04 00 1C */	stw r0, 0x1c(r4)
/* 8004E54C 0004B34C  90 0D 8B 38 */	stw r0, sActionLineRaster-_SDA_BASE_(r13)
/* 8004E550 0004B350  4B FF DC C5 */	bl xStrHash__FPCc
/* 8004E554 0004B354  38 80 00 00 */	li r4, 0
/* 8004E558 0004B358  4B FF D1 B5 */	bl xSTFindAsset__FUiPUi
/* 8004E55C 0004B35C  28 03 00 00 */	cmplwi r3, 0
/* 8004E560 0004B360  41 82 00 0C */	beq lbl_8004E56C
/* 8004E564 0004B364  80 03 00 00 */	lwz r0, 0(r3)
/* 8004E568 0004B368  90 0D 8B 38 */	stw r0, sActionLineRaster-_SDA_BASE_(r13)
lbl_8004E56C:
/* 8004E56C 0004B36C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004E570 0004B370  7C 08 03 A6 */	mtlr r0
/* 8004E574 0004B374  38 21 00 10 */	addi r1, r1, 0x10
/* 8004E578 0004B378  4E 80 00 20 */	blr 

RenderActionLine__FP14_tagActionLine:
/* 8004E628 0004B428  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004E62C 0004B42C  7C 08 02 A6 */	mflr r0
/* 8004E630 0004B430  3C 80 80 2E */	lis r4, sStripVert@ha
/* 8004E634 0004B434  38 E0 00 FF */	li r7, 0xff
/* 8004E638 0004B438  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004E63C 0004B43C  39 04 B9 C0 */	addi r8, r4, sStripVert@l
/* 8004E640 0004B440  38 00 00 80 */	li r0, 0x80
/* 8004E644 0004B444  38 80 00 04 */	li r4, 4
/* 8004E648 0004B448  C0 23 00 08 */	lfs f1, 8(r3)
/* 8004E64C 0004B44C  39 28 00 24 */	addi r9, r8, 0x24
/* 8004E650 0004B450  C0 43 00 0C */	lfs f2, 0xc(r3)
/* 8004E654 0004B454  38 A0 00 00 */	li r5, 0
/* 8004E658 0004B458  C0 03 00 04 */	lfs f0, 4(r3)
/* 8004E65C 0004B45C  38 C0 00 19 */	li r6, 0x19
/* 8004E660 0004B460  D0 08 00 00 */	stfs f0, 0(r8)
/* 8004E664 0004B464  D0 28 00 04 */	stfs f1, 4(r8)
/* 8004E668 0004B468  D0 48 00 08 */	stfs f2, 8(r8)
/* 8004E66C 0004B46C  C0 02 87 E8 */	lfs f0, zActionLine_f_0-_SDA2_BASE_(r2)
/* 8004E670 0004B470  D0 08 00 1C */	stfs f0, 0x1c(r8)
/* 8004E674 0004B474  C0 02 87 E8 */	lfs f0, zActionLine_f_0-_SDA2_BASE_(r2)
/* 8004E678 0004B478  D0 08 00 20 */	stfs f0, 0x20(r8)
/* 8004E67C 0004B47C  98 E8 00 18 */	stb r7, 0x18(r8)
/* 8004E680 0004B480  98 E8 00 19 */	stb r7, 0x19(r8)
/* 8004E684 0004B484  98 E8 00 1A */	stb r7, 0x1a(r8)
/* 8004E688 0004B488  98 08 00 1B */	stb r0, 0x1b(r8)
/* 8004E68C 0004B48C  C0 23 00 14 */	lfs f1, 0x14(r3)
/* 8004E690 0004B490  C0 43 00 18 */	lfs f2, 0x18(r3)
/* 8004E694 0004B494  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 8004E698 0004B498  D0 08 00 24 */	stfs f0, 0x24(r8)
/* 8004E69C 0004B49C  D0 28 00 28 */	stfs f1, 0x28(r8)
/* 8004E6A0 0004B4A0  D0 48 00 2C */	stfs f2, 0x2c(r8)
/* 8004E6A4 0004B4A4  C0 02 87 E8 */	lfs f0, zActionLine_f_0-_SDA2_BASE_(r2)
/* 8004E6A8 0004B4A8  D0 08 00 40 */	stfs f0, 0x40(r8)
/* 8004E6AC 0004B4AC  C0 02 87 E8 */	lfs f0, zActionLine_f_0-_SDA2_BASE_(r2)
/* 8004E6B0 0004B4B0  D0 08 00 44 */	stfs f0, 0x44(r8)
/* 8004E6B4 0004B4B4  98 E8 00 3C */	stb r7, 0x3c(r8)
/* 8004E6B8 0004B4B8  98 E8 00 3D */	stb r7, 0x3d(r8)
/* 8004E6BC 0004B4BC  98 E8 00 3E */	stb r7, 0x3e(r8)
/* 8004E6C0 0004B4C0  98 08 00 3F */	stb r0, 0x3f(r8)
/* 8004E6C4 0004B4C4  C0 23 00 20 */	lfs f1, 0x20(r3)
/* 8004E6C8 0004B4C8  C0 43 00 24 */	lfs f2, 0x24(r3)
/* 8004E6CC 0004B4CC  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 8004E6D0 0004B4D0  D4 09 00 24 */	stfsu f0, 0x24(r9)
/* 8004E6D4 0004B4D4  D0 29 00 04 */	stfs f1, 4(r9)
/* 8004E6D8 0004B4D8  D0 49 00 08 */	stfs f2, 8(r9)
/* 8004E6DC 0004B4DC  C0 02 87 E8 */	lfs f0, zActionLine_f_0-_SDA2_BASE_(r2)
/* 8004E6E0 0004B4E0  D0 09 00 1C */	stfs f0, 0x1c(r9)
/* 8004E6E4 0004B4E4  C0 02 87 E8 */	lfs f0, zActionLine_f_0-_SDA2_BASE_(r2)
/* 8004E6E8 0004B4E8  D0 09 00 20 */	stfs f0, 0x20(r9)
/* 8004E6EC 0004B4EC  98 E9 00 18 */	stb r7, 0x18(r9)
/* 8004E6F0 0004B4F0  98 E9 00 19 */	stb r7, 0x19(r9)
/* 8004E6F4 0004B4F4  98 E9 00 1A */	stb r7, 0x1a(r9)
/* 8004E6F8 0004B4F8  98 09 00 1B */	stb r0, 0x1b(r9)
/* 8004E6FC 0004B4FC  C0 23 00 2C */	lfs f1, 0x2c(r3)
/* 8004E700 0004B500  C0 43 00 30 */	lfs f2, 0x30(r3)
/* 8004E704 0004B504  C0 03 00 28 */	lfs f0, 0x28(r3)
/* 8004E708 0004B508  7D 03 43 78 */	mr r3, r8
/* 8004E70C 0004B50C  D4 09 00 24 */	stfsu f0, 0x24(r9)
/* 8004E710 0004B510  D0 29 00 04 */	stfs f1, 4(r9)
/* 8004E714 0004B514  D0 49 00 08 */	stfs f2, 8(r9)
/* 8004E718 0004B518  C0 02 87 E8 */	lfs f0, zActionLine_f_0-_SDA2_BASE_(r2)
/* 8004E71C 0004B51C  D0 09 00 1C */	stfs f0, 0x1c(r9)
/* 8004E720 0004B520  C0 02 87 E8 */	lfs f0, zActionLine_f_0-_SDA2_BASE_(r2)
/* 8004E724 0004B524  D0 09 00 20 */	stfs f0, 0x20(r9)
/* 8004E728 0004B528  98 E9 00 18 */	stb r7, 0x18(r9)
/* 8004E72C 0004B52C  98 E9 00 19 */	stb r7, 0x19(r9)
/* 8004E730 0004B530  98 E9 00 1A */	stb r7, 0x1a(r9)
/* 8004E734 0004B534  98 09 00 1B */	stb r0, 0x1b(r9)
/* 8004E738 0004B538  C0 02 87 EC */	lfs f0, zActionLine_f_1-_SDA2_BASE_(r2)
/* 8004E73C 0004B53C  D0 08 00 64 */	stfs f0, 0x64(r8)
/* 8004E740 0004B540  D0 08 00 88 */	stfs f0, 0x88(r8)
/* 8004E744 0004B544  D0 08 00 8C */	stfs f0, 0x8c(r8)
/* 8004E748 0004B548  48 1F D5 2D */	bl RwIm3DTransform
/* 8004E74C 0004B54C  28 03 00 00 */	cmplwi r3, 0
/* 8004E750 0004B550  41 82 00 10 */	beq lbl_8004E760
/* 8004E754 0004B554  38 60 00 04 */	li r3, 4
/* 8004E758 0004B558  48 1F D7 E9 */	bl RwIm3DRenderPrimitive
/* 8004E75C 0004B55C  48 1F D5 F9 */	bl RwIm3DEnd
lbl_8004E760:
/* 8004E760 0004B560  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004E764 0004B564  7C 08 03 A6 */	mtlr r0
/* 8004E768 0004B568  38 21 00 10 */	addi r1, r1, 0x10
/* 8004E76C 0004B56C  4E 80 00 20 */	blr 

.endif

.section .bss

.global sActionLine
sActionLine:
	.skip 0x20

sStripVert:
	.skip 0x90

.section .sbss

.balign 8
.global sActionLineRaster
sActionLineRaster:
	.skip 0x8

.section .sdata2

.global zActionLine_f_0
zActionLine_f_0:
	.4byte 0x00000000

.global zActionLine_f_1
zActionLine_f_1:
	.4byte 0x3F800000
