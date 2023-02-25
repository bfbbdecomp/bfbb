.include "macros.inc"
.file "zFeet.cpp"

# 0x80092B0C - 0x80092BEC
.text
.balign 4

# zFeetGetIDs()
.fn zFeetGetIDs__Fv, global
/* 80092B0C 0008FBEC  94 21 FE E0 */	stwu r1, -0x120(r1)
/* 80092B10 0008FBF0  7C 08 02 A6 */	mflr r0
/* 80092B14 0008FBF4  3C 80 80 2E */	lis r4, sSurfaceSoundIDStep@ha
/* 80092B18 0008FBF8  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 80092B1C 0008FBFC  90 01 01 24 */	stw r0, 0x124(r1)
/* 80092B20 0008FC00  93 E1 01 1C */	stw r31, 0x11c(r1)
/* 80092B24 0008FC04  3B E3 B9 D8 */	addi r31, r3, "@stringBase0"@l
/* 80092B28 0008FC08  93 C1 01 18 */	stw r30, 0x118(r1)
/* 80092B2C 0008FC0C  3B C4 F4 30 */	addi r30, r4, sSurfaceSoundIDStep@l
/* 80092B30 0008FC10  93 A1 01 14 */	stw r29, 0x114(r1)
/* 80092B34 0008FC14  3B A0 00 00 */	li r29, 0x0
.L_80092B38:
/* 80092B38 0008FC18  7F A3 EB 78 */	mr r3, r29
/* 80092B3C 0008FC1C  38 81 00 88 */	addi r4, r1, 0x88
/* 80092B40 0008FC20  48 02 3B 79 */	bl zSurfaceGetName__FiPc
/* 80092B44 0008FC24  7F E4 FB 78 */	mr r4, r31
/* 80092B48 0008FC28  38 61 00 08 */	addi r3, r1, 0x8
/* 80092B4C 0008FC2C  48 15 4B B5 */	bl strcpy
/* 80092B50 0008FC30  38 61 00 08 */	addi r3, r1, 0x8
/* 80092B54 0008FC34  38 81 00 88 */	addi r4, r1, 0x88
/* 80092B58 0008FC38  48 15 4B 39 */	bl strcat
/* 80092B5C 0008FC3C  38 61 00 08 */	addi r3, r1, 0x8
/* 80092B60 0008FC40  4B FB 96 B5 */	bl xStrHash__FPCc
/* 80092B64 0008FC44  3B BD 00 01 */	addi r29, r29, 0x1
/* 80092B68 0008FC48  90 7E 00 00 */	stw r3, 0x0(r30)
/* 80092B6C 0008FC4C  2C 1D 00 17 */	cmpwi r29, 0x17
/* 80092B70 0008FC50  3B DE 00 04 */	addi r30, r30, 0x4
/* 80092B74 0008FC54  41 80 FF C4 */	blt .L_80092B38
/* 80092B78 0008FC58  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 80092B7C 0008FC5C  38 63 B9 D8 */	addi r3, r3, "@stringBase0"@l
/* 80092B80 0008FC60  38 63 00 0C */	addi r3, r3, 0xc
/* 80092B84 0008FC64  4B FB 96 91 */	bl xStrHash__FPCc
/* 80092B88 0008FC68  48 02 1E B5 */	bl zSceneFindObject__FUi
/* 80092B8C 0008FC6C  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 80092B90 0008FC70  90 6D 8E 78 */	stw r3, paremit_sd_pawprint@sda21(r13)
/* 80092B94 0008FC74  38 64 B9 D8 */	addi r3, r4, "@stringBase0"@l
/* 80092B98 0008FC78  38 63 00 20 */	addi r3, r3, 0x20
/* 80092B9C 0008FC7C  4B FB 96 79 */	bl xStrHash__FPCc
/* 80092BA0 0008FC80  48 02 1E 9D */	bl zSceneFindObject__FUi
/* 80092BA4 0008FC84  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 80092BA8 0008FC88  90 6D 8E 7C */	stw r3, paremit_vil_footprint@sda21(r13)
/* 80092BAC 0008FC8C  38 64 B9 D8 */	addi r3, r4, "@stringBase0"@l
/* 80092BB0 0008FC90  38 63 00 36 */	addi r3, r3, 0x36
/* 80092BB4 0008FC94  4B FB 96 61 */	bl xStrHash__FPCc
/* 80092BB8 0008FC98  38 80 00 00 */	li r4, 0x0
/* 80092BBC 0008FC9C  4B FB 8B 51 */	bl xSTFindAsset__FUiPUi
/* 80092BC0 0008FCA0  28 03 00 00 */	cmplwi r3, 0x0
/* 80092BC4 0008FCA4  41 82 00 0C */	beq .L_80092BD0
/* 80092BC8 0008FCA8  80 03 00 00 */	lwz r0, 0x0(r3)
/* 80092BCC 0008FCAC  90 0D 8E 80 */	stw r0, sSkidMarkRaster@sda21(r13)
.L_80092BD0:
/* 80092BD0 0008FCB0  80 01 01 24 */	lwz r0, 0x124(r1)
/* 80092BD4 0008FCB4  83 E1 01 1C */	lwz r31, 0x11c(r1)
/* 80092BD8 0008FCB8  83 C1 01 18 */	lwz r30, 0x118(r1)
/* 80092BDC 0008FCBC  83 A1 01 14 */	lwz r29, 0x114(r1)
/* 80092BE0 0008FCC0  7C 08 03 A6 */	mtlr r0
/* 80092BE4 0008FCC4  38 21 01 20 */	addi r1, r1, 0x120
/* 80092BE8 0008FCC8  4E 80 00 20 */	blr
.endfn zFeetGetIDs__Fv

# 0x8025B9D8 - 0x8025BA20
.rodata
.balign 8

.obj "@stringBase0", local
	.4byte 0x534E4446
	.4byte 0x585F5354
	.4byte 0x45505F00
	.4byte 0x50415245
	.4byte 0x4D49545F
	.4byte 0x53445F50
	.4byte 0x41575052
	.4byte 0x494E5400
	.4byte 0x50415245
	.4byte 0x4D49545F
	.4byte 0x56494C5F
	.4byte 0x464F4F54
	.4byte 0x5052494E
	.4byte 0x5400534B
	.4byte 0x49444D41
	.4byte 0x524B5445
	.2byte 0x5800
.endobj "@stringBase0"
	.4byte 0x00000000
	.2byte 0x0000

# 0x802DF430 - 0x802DF490
.section .bss, "wa", @nobits
.balign 8

.obj sSurfaceSoundIDStep, local
	.skip 0x5C
.endobj sSurfaceSoundIDStep
	.skip 0x4

# 0x803CB778 - 0x803CB788
.section .sbss, "wa", @nobits
.balign 8

.obj paremit_sd_pawprint, local
	.skip 0x4
.endobj paremit_sd_pawprint

.obj paremit_vil_footprint, local
	.skip 0x4
.endobj paremit_vil_footprint

.obj sSkidMarkRaster, local
	.skip 0x4
.endobj sSkidMarkRaster
	.skip 0x4
