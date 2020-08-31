.include "macros.inc"

.section .text  # 0x8011A940 - 0x8011A9F0

.global xRenderStateSetTexture__FP9RwTexture
xRenderStateSetTexture__FP9RwTexture:
/* 8011A940 00117740  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011A944 00117744  7C 08 02 A6 */	mflr r0
/* 8011A948 00117748  28 03 00 00 */	cmplwi r3, 0
/* 8011A94C 0011774C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011A950 00117750  41 82 00 1C */	beq lbl_8011A96C
/* 8011A954 00117754  80 83 00 00 */	lwz r4, 0(r3)
/* 8011A958 00117758  28 04 00 00 */	cmplwi r4, 0
/* 8011A95C 0011775C  41 82 00 1C */	beq lbl_8011A978
/* 8011A960 00117760  38 60 00 01 */	li r3, 1
/* 8011A964 00117764  48 11 4E 79 */	bl RwRenderStateSet
/* 8011A968 00117768  48 00 00 10 */	b lbl_8011A978
lbl_8011A96C:
/* 8011A96C 0011776C  38 60 00 01 */	li r3, 1
/* 8011A970 00117770  38 80 00 00 */	li r4, 0
/* 8011A974 00117774  48 11 4E 69 */	bl RwRenderStateSet
lbl_8011A978:
/* 8011A978 00117778  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011A97C 0011777C  7C 08 03 A6 */	mtlr r0
/* 8011A980 00117780  38 21 00 10 */	addi r1, r1, 0x10
/* 8011A984 00117784  4E 80 00 20 */	blr 

.global xRenderStateSetSrcBlendMode__Fi
xRenderStateSetSrcBlendMode__Fi:
/* 8011A988 00117788  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011A98C 0011778C  7C 08 02 A6 */	mflr r0
/* 8011A990 00117790  3C 80 80 29 */	lis r4, lbl_sBlendTable_1@ha
/* 8011A994 00117794  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011A998 00117798  54 60 10 3A */	slwi r0, r3, 2
/* 8011A99C 0011779C  38 84 7E 18 */	addi r4, r4, lbl_sBlendTable_1@l
/* 8011A9A0 001177A0  38 60 00 0A */	li r3, 0xa
/* 8011A9A4 001177A4  7C 84 00 2E */	lwzx r4, r4, r0
/* 8011A9A8 001177A8  48 11 4E 35 */	bl RwRenderStateSet
/* 8011A9AC 001177AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011A9B0 001177B0  7C 08 03 A6 */	mtlr r0
/* 8011A9B4 001177B4  38 21 00 10 */	addi r1, r1, 0x10
/* 8011A9B8 001177B8  4E 80 00 20 */	blr 

.global xRenderStateSetDstBlendMode__Fi
xRenderStateSetDstBlendMode__Fi:
/* 8011A9BC 001177BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8011A9C0 001177C0  7C 08 02 A6 */	mflr r0
/* 8011A9C4 001177C4  3C 80 80 29 */	lis r4, lbl_sBlendTable_1@ha
/* 8011A9C8 001177C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8011A9CC 001177CC  54 60 10 3A */	slwi r0, r3, 2
/* 8011A9D0 001177D0  38 84 7E 18 */	addi r4, r4, lbl_sBlendTable_1@l
/* 8011A9D4 001177D4  38 60 00 0B */	li r3, 0xb
/* 8011A9D8 001177D8  7C 84 00 2E */	lwzx r4, r4, r0
/* 8011A9DC 001177DC  48 11 4E 01 */	bl RwRenderStateSet
/* 8011A9E0 001177E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8011A9E4 001177E4  7C 08 03 A6 */	mtlr r0
/* 8011A9E8 001177E8  38 21 00 10 */	addi r1, r1, 0x10
/* 8011A9EC 001177EC  4E 80 00 20 */	blr 
