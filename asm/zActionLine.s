.include "macros.inc"
.file "zActionLine.cpp"

# 0x8004E510 - 0x8004E7E0
.text
.balign 4

# zActionLineInit()
.fn zActionLineInit__Fv, global
/* 8004E510 0004B5F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004E514 0004B5F4  7C 08 02 A6 */	mflr r0
/* 8004E518 0004B5F8  3C 60 80 25 */	lis r3, "@stringBase0"@ha
/* 8004E51C 0004B5FC  3C 80 80 2E */	lis r4, sActionLine@ha
/* 8004E520 0004B600  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004E524 0004B604  38 00 00 00 */	li r0, 0x0
/* 8004E528 0004B608  38 63 43 08 */	addi r3, r3, "@stringBase0"@l
/* 8004E52C 0004B60C  94 04 B9 A0 */	stwu r0, sActionLine@l(r4)
/* 8004E530 0004B610  90 04 00 04 */	stw r0, 0x4(r4)
/* 8004E534 0004B614  90 04 00 08 */	stw r0, 0x8(r4)
/* 8004E538 0004B618  90 04 00 0C */	stw r0, 0xc(r4)
/* 8004E53C 0004B61C  90 04 00 10 */	stw r0, 0x10(r4)
/* 8004E540 0004B620  90 04 00 14 */	stw r0, 0x14(r4)
/* 8004E544 0004B624  90 04 00 18 */	stw r0, 0x18(r4)
/* 8004E548 0004B628  90 04 00 1C */	stw r0, 0x1c(r4)
/* 8004E54C 0004B62C  90 0D 8B 38 */	stw r0, sActionLineRaster@sda21(r13)
/* 8004E550 0004B630  4B FF DC C5 */	bl xStrHash__FPCc
/* 8004E554 0004B634  38 80 00 00 */	li r4, 0x0
/* 8004E558 0004B638  4B FF D1 B5 */	bl xSTFindAsset__FUiPUi
/* 8004E55C 0004B63C  28 03 00 00 */	cmplwi r3, 0x0
/* 8004E560 0004B640  41 82 00 0C */	beq .L_8004E56C
/* 8004E564 0004B644  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8004E568 0004B648  90 0D 8B 38 */	stw r0, sActionLineRaster@sda21(r13)
.L_8004E56C:
/* 8004E56C 0004B64C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004E570 0004B650  7C 08 03 A6 */	mtlr r0
/* 8004E574 0004B654  38 21 00 10 */	addi r1, r1, 0x10
/* 8004E578 0004B658  4E 80 00 20 */	blr
.endfn zActionLineInit__Fv

# zActionLineUpdate(float)
.fn zActionLineUpdate__Ff, global
/* 8004E57C 0004B65C  3C 60 80 2E */	lis r3, sActionLine@ha
/* 8004E580 0004B660  38 00 00 04 */	li r0, 0x4
/* 8004E584 0004B664  38 63 B9 A0 */	addi r3, r3, sActionLine@l
/* 8004E588 0004B668  38 80 00 00 */	li r4, 0x0
/* 8004E58C 0004B66C  7C 09 03 A6 */	mtctr r0
.L_8004E590:
/* 8004E590 0004B670  80 A3 00 00 */	lwz r5, 0x0(r3)
/* 8004E594 0004B674  28 05 00 00 */	cmplwi r5, 0x0
/* 8004E598 0004B678  41 82 00 3C */	beq .L_8004E5D4
/* 8004E59C 0004B67C  80 05 00 00 */	lwz r0, 0x0(r5)
/* 8004E5A0 0004B680  54 00 07 FF */	clrlwi. r0, r0, 31
/* 8004E5A4 0004B684  41 82 00 30 */	beq .L_8004E5D4
/* 8004E5A8 0004B688  C0 05 00 34 */	lfs f0, 0x34(r5)
/* 8004E5AC 0004B68C  EC 00 08 28 */	fsubs f0, f0, f1
/* 8004E5B0 0004B690  D0 05 00 34 */	stfs f0, 0x34(r5)
/* 8004E5B4 0004B694  C0 45 00 34 */	lfs f2, 0x34(r5)
/* 8004E5B8 0004B698  C0 02 87 E8 */	lfs f0, "@710"@sda21(r2)
/* 8004E5BC 0004B69C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8004E5C0 0004B6A0  4C 40 13 82 */	cror eq, lt, eq
/* 8004E5C4 0004B6A4  40 82 00 10 */	bne .L_8004E5D4
/* 8004E5C8 0004B6A8  80 05 00 00 */	lwz r0, 0x0(r5)
/* 8004E5CC 0004B6AC  54 00 00 3C */	clrrwi r0, r0, 1
/* 8004E5D0 0004B6B0  90 05 00 00 */	stw r0, 0x0(r5)
.L_8004E5D4:
/* 8004E5D4 0004B6B4  84 A3 00 04 */	lwzu r5, 0x4(r3)
/* 8004E5D8 0004B6B8  28 05 00 00 */	cmplwi r5, 0x0
/* 8004E5DC 0004B6BC  41 82 00 3C */	beq .L_8004E618
/* 8004E5E0 0004B6C0  80 05 00 00 */	lwz r0, 0x0(r5)
/* 8004E5E4 0004B6C4  54 00 07 FF */	clrlwi. r0, r0, 31
/* 8004E5E8 0004B6C8  41 82 00 30 */	beq .L_8004E618
/* 8004E5EC 0004B6CC  C0 05 00 34 */	lfs f0, 0x34(r5)
/* 8004E5F0 0004B6D0  EC 00 08 28 */	fsubs f0, f0, f1
/* 8004E5F4 0004B6D4  D0 05 00 34 */	stfs f0, 0x34(r5)
/* 8004E5F8 0004B6D8  C0 45 00 34 */	lfs f2, 0x34(r5)
/* 8004E5FC 0004B6DC  C0 02 87 E8 */	lfs f0, "@710"@sda21(r2)
/* 8004E600 0004B6E0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8004E604 0004B6E4  4C 40 13 82 */	cror eq, lt, eq
/* 8004E608 0004B6E8  40 82 00 10 */	bne .L_8004E618
/* 8004E60C 0004B6EC  80 05 00 00 */	lwz r0, 0x0(r5)
/* 8004E610 0004B6F0  54 00 00 3C */	clrrwi r0, r0, 1
/* 8004E614 0004B6F4  90 05 00 00 */	stw r0, 0x0(r5)
.L_8004E618:
/* 8004E618 0004B6F8  38 63 00 04 */	addi r3, r3, 0x4
/* 8004E61C 0004B6FC  38 84 00 01 */	addi r4, r4, 0x1
/* 8004E620 0004B700  42 00 FF 70 */	bdnz .L_8004E590
/* 8004E624 0004B704  4E 80 00 20 */	blr
.endfn zActionLineUpdate__Ff

# RenderActionLine(_tagActionLine*)
.fn RenderActionLine__FP14_tagActionLine, local
/* 8004E628 0004B708  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004E62C 0004B70C  7C 08 02 A6 */	mflr r0
/* 8004E630 0004B710  3C 80 80 2E */	lis r4, sStripVert$718@ha
/* 8004E634 0004B714  38 E0 00 FF */	li r7, 0xff
/* 8004E638 0004B718  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004E63C 0004B71C  39 04 B9 C0 */	addi r8, r4, sStripVert$718@l
/* 8004E640 0004B720  38 00 00 80 */	li r0, 0x80
/* 8004E644 0004B724  38 80 00 04 */	li r4, 0x4
/* 8004E648 0004B728  C0 23 00 08 */	lfs f1, 0x8(r3)
/* 8004E64C 0004B72C  39 28 00 24 */	addi r9, r8, 0x24
/* 8004E650 0004B730  C0 43 00 0C */	lfs f2, 0xc(r3)
/* 8004E654 0004B734  38 A0 00 00 */	li r5, 0x0
/* 8004E658 0004B738  C0 03 00 04 */	lfs f0, 0x4(r3)
/* 8004E65C 0004B73C  38 C0 00 19 */	li r6, 0x19
/* 8004E660 0004B740  D0 08 00 00 */	stfs f0, 0x0(r8)
/* 8004E664 0004B744  D0 28 00 04 */	stfs f1, 0x4(r8)
/* 8004E668 0004B748  D0 48 00 08 */	stfs f2, 0x8(r8)
/* 8004E66C 0004B74C  C0 02 87 E8 */	lfs f0, "@710"@sda21(r2)
/* 8004E670 0004B750  D0 08 00 1C */	stfs f0, 0x1c(r8)
/* 8004E674 0004B754  C0 02 87 E8 */	lfs f0, "@710"@sda21(r2)
/* 8004E678 0004B758  D0 08 00 20 */	stfs f0, 0x20(r8)
/* 8004E67C 0004B75C  98 E8 00 18 */	stb r7, 0x18(r8)
/* 8004E680 0004B760  98 E8 00 19 */	stb r7, 0x19(r8)
/* 8004E684 0004B764  98 E8 00 1A */	stb r7, 0x1a(r8)
/* 8004E688 0004B768  98 08 00 1B */	stb r0, 0x1b(r8)
/* 8004E68C 0004B76C  C0 23 00 14 */	lfs f1, 0x14(r3)
/* 8004E690 0004B770  C0 43 00 18 */	lfs f2, 0x18(r3)
/* 8004E694 0004B774  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 8004E698 0004B778  D0 08 00 24 */	stfs f0, 0x24(r8)
/* 8004E69C 0004B77C  D0 28 00 28 */	stfs f1, 0x28(r8)
/* 8004E6A0 0004B780  D0 48 00 2C */	stfs f2, 0x2c(r8)
/* 8004E6A4 0004B784  C0 02 87 E8 */	lfs f0, "@710"@sda21(r2)
/* 8004E6A8 0004B788  D0 08 00 40 */	stfs f0, 0x40(r8)
/* 8004E6AC 0004B78C  C0 02 87 E8 */	lfs f0, "@710"@sda21(r2)
/* 8004E6B0 0004B790  D0 08 00 44 */	stfs f0, 0x44(r8)
/* 8004E6B4 0004B794  98 E8 00 3C */	stb r7, 0x3c(r8)
/* 8004E6B8 0004B798  98 E8 00 3D */	stb r7, 0x3d(r8)
/* 8004E6BC 0004B79C  98 E8 00 3E */	stb r7, 0x3e(r8)
/* 8004E6C0 0004B7A0  98 08 00 3F */	stb r0, 0x3f(r8)
/* 8004E6C4 0004B7A4  C0 23 00 20 */	lfs f1, 0x20(r3)
/* 8004E6C8 0004B7A8  C0 43 00 24 */	lfs f2, 0x24(r3)
/* 8004E6CC 0004B7AC  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 8004E6D0 0004B7B0  D4 09 00 24 */	stfsu f0, 0x24(r9)
/* 8004E6D4 0004B7B4  D0 29 00 04 */	stfs f1, 0x4(r9)
/* 8004E6D8 0004B7B8  D0 49 00 08 */	stfs f2, 0x8(r9)
/* 8004E6DC 0004B7BC  C0 02 87 E8 */	lfs f0, "@710"@sda21(r2)
/* 8004E6E0 0004B7C0  D0 09 00 1C */	stfs f0, 0x1c(r9)
/* 8004E6E4 0004B7C4  C0 02 87 E8 */	lfs f0, "@710"@sda21(r2)
/* 8004E6E8 0004B7C8  D0 09 00 20 */	stfs f0, 0x20(r9)
/* 8004E6EC 0004B7CC  98 E9 00 18 */	stb r7, 0x18(r9)
/* 8004E6F0 0004B7D0  98 E9 00 19 */	stb r7, 0x19(r9)
/* 8004E6F4 0004B7D4  98 E9 00 1A */	stb r7, 0x1a(r9)
/* 8004E6F8 0004B7D8  98 09 00 1B */	stb r0, 0x1b(r9)
/* 8004E6FC 0004B7DC  C0 23 00 2C */	lfs f1, 0x2c(r3)
/* 8004E700 0004B7E0  C0 43 00 30 */	lfs f2, 0x30(r3)
/* 8004E704 0004B7E4  C0 03 00 28 */	lfs f0, 0x28(r3)
/* 8004E708 0004B7E8  7D 03 43 78 */	mr r3, r8
/* 8004E70C 0004B7EC  D4 09 00 24 */	stfsu f0, 0x24(r9)
/* 8004E710 0004B7F0  D0 29 00 04 */	stfs f1, 0x4(r9)
/* 8004E714 0004B7F4  D0 49 00 08 */	stfs f2, 0x8(r9)
/* 8004E718 0004B7F8  C0 02 87 E8 */	lfs f0, "@710"@sda21(r2)
/* 8004E71C 0004B7FC  D0 09 00 1C */	stfs f0, 0x1c(r9)
/* 8004E720 0004B800  C0 02 87 E8 */	lfs f0, "@710"@sda21(r2)
/* 8004E724 0004B804  D0 09 00 20 */	stfs f0, 0x20(r9)
/* 8004E728 0004B808  98 E9 00 18 */	stb r7, 0x18(r9)
/* 8004E72C 0004B80C  98 E9 00 19 */	stb r7, 0x19(r9)
/* 8004E730 0004B810  98 E9 00 1A */	stb r7, 0x1a(r9)
/* 8004E734 0004B814  98 09 00 1B */	stb r0, 0x1b(r9)
/* 8004E738 0004B818  C0 02 87 EC */	lfs f0, "@751"@sda21(r2)
/* 8004E73C 0004B81C  D0 08 00 64 */	stfs f0, 0x64(r8)
/* 8004E740 0004B820  D0 08 00 88 */	stfs f0, 0x88(r8)
/* 8004E744 0004B824  D0 08 00 8C */	stfs f0, 0x8c(r8)
/* 8004E748 0004B828  48 1F D5 2D */	bl RwIm3DTransform
/* 8004E74C 0004B82C  28 03 00 00 */	cmplwi r3, 0x0
/* 8004E750 0004B830  41 82 00 10 */	beq .L_8004E760
/* 8004E754 0004B834  38 60 00 04 */	li r3, 0x4
/* 8004E758 0004B838  48 1F D7 E9 */	bl RwIm3DRenderPrimitive
/* 8004E75C 0004B83C  48 1F D5 F9 */	bl RwIm3DEnd
.L_8004E760:
/* 8004E760 0004B840  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004E764 0004B844  7C 08 03 A6 */	mtlr r0
/* 8004E768 0004B848  38 21 00 10 */	addi r1, r1, 0x10
/* 8004E76C 0004B84C  4E 80 00 20 */	blr
.endfn RenderActionLine__FP14_tagActionLine

# zActionLineRender()
.fn zActionLineRender__Fv, global
/* 8004E770 0004B850  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004E774 0004B854  7C 08 02 A6 */	mflr r0
/* 8004E778 0004B858  38 60 00 01 */	li r3, 0x1
/* 8004E77C 0004B85C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004E780 0004B860  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8004E784 0004B864  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8004E788 0004B868  80 8D 8B 38 */	lwz r4, sActionLineRaster@sda21(r13)
/* 8004E78C 0004B86C  48 1E 10 51 */	bl RwRenderStateSet
/* 8004E790 0004B870  3C 60 80 2E */	lis r3, sActionLine@ha
/* 8004E794 0004B874  3B C0 00 00 */	li r30, 0x0
/* 8004E798 0004B878  3B E3 B9 A0 */	addi r31, r3, sActionLine@l
.L_8004E79C:
/* 8004E79C 0004B87C  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 8004E7A0 0004B880  28 03 00 00 */	cmplwi r3, 0x0
/* 8004E7A4 0004B884  41 82 00 14 */	beq .L_8004E7B8
/* 8004E7A8 0004B888  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8004E7AC 0004B88C  54 00 07 FF */	clrlwi. r0, r0, 31
/* 8004E7B0 0004B890  41 82 00 08 */	beq .L_8004E7B8
/* 8004E7B4 0004B894  4B FF FE 75 */	bl RenderActionLine__FP14_tagActionLine
.L_8004E7B8:
/* 8004E7B8 0004B898  3B DE 00 01 */	addi r30, r30, 0x1
/* 8004E7BC 0004B89C  3B FF 00 04 */	addi r31, r31, 0x4
/* 8004E7C0 0004B8A0  2C 1E 00 08 */	cmpwi r30, 0x8
/* 8004E7C4 0004B8A4  41 80 FF D8 */	blt .L_8004E79C
/* 8004E7C8 0004B8A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004E7CC 0004B8AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8004E7D0 0004B8B0  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8004E7D4 0004B8B4  7C 08 03 A6 */	mtlr r0
/* 8004E7D8 0004B8B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8004E7DC 0004B8BC  4E 80 00 20 */	blr
.endfn zActionLineRender__Fv

# 0x80254308 - 0x80254318
.rodata
.balign 8

.obj "@stringBase0", local
	.4byte 0x41435449
	.4byte 0x4F4E4C49
	.4byte 0x4E455300
.endobj "@stringBase0"
	.4byte 0x00000000

# 0x802DB9A0 - 0x802DBA50
.section .bss, "wa", @nobits
.balign 8

.obj sActionLine, local
	.skip 0x20
.endobj sActionLine

.obj sStripVert$718, local
	.skip 0x90
.endobj sStripVert$718

# 0x803CB438 - 0x803CB440
.section .sbss, "wa", @nobits
.balign 8

.obj sActionLineRaster, local
	.skip 0x4
.endobj sActionLineRaster
	.skip 0x4

# 0x803CD168 - 0x803CD170
.section .sdata2, "a"
.balign 8

.obj "@710", local
	.4byte 0x00000000
.endobj "@710"

.obj "@751", local
	.4byte 0x3F800000
.endobj "@751"
