.include "macros.inc"
.file "xRenderState.cpp"

# 0x8011A940 - 0x8011A9F0
.text
.balign 4

# xRenderStateSetTexture(RwTexture*)
.fn xRenderStateSetTexture__FP9RwTexture, global
/* 8011A940 00117A20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011A944 00117A24  7C 08 02 A6 */	mflr r0
/* 8011A948 00117A28  28 03 00 00 */	cmplwi r3, 0x0
/* 8011A94C 00117A2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011A950 00117A30  41 82 00 1C */	beq .L_8011A96C
/* 8011A954 00117A34  80 83 00 00 */	lwz r4, 0x0(r3)
/* 8011A958 00117A38  28 04 00 00 */	cmplwi r4, 0x0
/* 8011A95C 00117A3C  41 82 00 1C */	beq .L_8011A978
/* 8011A960 00117A40  38 60 00 01 */	li r3, 0x1
/* 8011A964 00117A44  48 11 4E 79 */	bl RwRenderStateSet
/* 8011A968 00117A48  48 00 00 10 */	b .L_8011A978
.L_8011A96C:
/* 8011A96C 00117A4C  38 60 00 01 */	li r3, 0x1
/* 8011A970 00117A50  38 80 00 00 */	li r4, 0x0
/* 8011A974 00117A54  48 11 4E 69 */	bl RwRenderStateSet
.L_8011A978:
/* 8011A978 00117A58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011A97C 00117A5C  7C 08 03 A6 */	mtlr r0
/* 8011A980 00117A60  38 21 00 10 */	addi r1, r1, 0x10
/* 8011A984 00117A64  4E 80 00 20 */	blr
.endfn xRenderStateSetTexture__FP9RwTexture

# xRenderStateSetSrcBlendMode(int)
.fn xRenderStateSetSrcBlendMode__Fi, global
/* 8011A988 00117A68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011A98C 00117A6C  7C 08 02 A6 */	mflr r0
/* 8011A990 00117A70  3C 80 80 29 */	lis r4, sBlendTable@ha
/* 8011A994 00117A74  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011A998 00117A78  54 60 10 3A */	slwi r0, r3, 2
/* 8011A99C 00117A7C  38 84 7E 18 */	addi r4, r4, sBlendTable@l
/* 8011A9A0 00117A80  38 60 00 0A */	li r3, 0xa
/* 8011A9A4 00117A84  7C 84 00 2E */	lwzx r4, r4, r0
/* 8011A9A8 00117A88  48 11 4E 35 */	bl RwRenderStateSet
/* 8011A9AC 00117A8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011A9B0 00117A90  7C 08 03 A6 */	mtlr r0
/* 8011A9B4 00117A94  38 21 00 10 */	addi r1, r1, 0x10
/* 8011A9B8 00117A98  4E 80 00 20 */	blr
.endfn xRenderStateSetSrcBlendMode__Fi

# xRenderStateSetDstBlendMode(int)
.fn xRenderStateSetDstBlendMode__Fi, global
/* 8011A9BC 00117A9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011A9C0 00117AA0  7C 08 02 A6 */	mflr r0
/* 8011A9C4 00117AA4  3C 80 80 29 */	lis r4, sBlendTable@ha
/* 8011A9C8 00117AA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011A9CC 00117AAC  54 60 10 3A */	slwi r0, r3, 2
/* 8011A9D0 00117AB0  38 84 7E 18 */	addi r4, r4, sBlendTable@l
/* 8011A9D4 00117AB4  38 60 00 0B */	li r3, 0xb
/* 8011A9D8 00117AB8  7C 84 00 2E */	lwzx r4, r4, r0
/* 8011A9DC 00117ABC  48 11 4E 01 */	bl RwRenderStateSet
/* 8011A9E0 00117AC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011A9E4 00117AC4  7C 08 03 A6 */	mtlr r0
/* 8011A9E8 00117AC8  38 21 00 10 */	addi r1, r1, 0x10
/* 8011A9EC 00117ACC  4E 80 00 20 */	blr
.endfn xRenderStateSetDstBlendMode__Fi

# 0x80297E18 - 0x80297E48
.data
.balign 8

.obj sBlendTable, local
	.4byte 0x00000001
	.4byte 0x00000002
	.4byte 0x00000003
	.4byte 0x00000004
	.4byte 0x00000005
	.4byte 0x00000006
	.4byte 0x00000007
	.4byte 0x00000008
	.4byte 0x00000009
	.4byte 0x0000000A
	.4byte 0x0000000B
.endobj sBlendTable
	.4byte 0x00000000
