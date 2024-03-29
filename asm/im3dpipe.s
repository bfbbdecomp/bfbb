.include "macros.inc"
.file "im3dpipe.c"

# 0x80250E34 - 0x80251084
.text
.balign 4

.fn _rwIm3DCreatePlatformTransformPipeline, global
/* 80250E34 0024DF14  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80250E38 0024DF18  7C 08 02 A6 */	mflr r0
/* 80250E3C 0024DF1C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80250E40 0024DF20  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80250E44 0024DF24  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80250E48 0024DF28  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80250E4C 0024DF2C  7C 7D 1B 78 */	mr r29, r3
/* 80250E50 0024DF30  4B FF BD 6D */	bl RxPipelineCreate
/* 80250E54 0024DF34  7C 7F 1B 79 */	mr. r31, r3
/* 80250E58 0024DF38  41 82 00 58 */	beq .L_80250EB0
/* 80250E5C 0024DF3C  38 00 00 01 */	li r0, 0x1
/* 80250E60 0024DF40  90 1F 00 2C */	stw r0, 0x2c(r31)
/* 80250E64 0024DF44  4B FF D2 89 */	bl RxPipelineLock
/* 80250E68 0024DF48  7C 7E 1B 79 */	mr. r30, r3
/* 80250E6C 0024DF4C  41 82 00 3C */	beq .L_80250EA8
/* 80250E70 0024DF50  48 00 02 25 */	bl RxNodeDefinitionGetGameCubeImmInstance
/* 80250E74 0024DF54  7C 65 1B 78 */	mr r5, r3
/* 80250E78 0024DF58  7F C3 F3 78 */	mr r3, r30
/* 80250E7C 0024DF5C  38 80 00 00 */	li r4, 0x0
/* 80250E80 0024DF60  38 C0 00 00 */	li r6, 0x0
/* 80250E84 0024DF64  4C C6 31 82 */	crclr 4*cr1+eq
/* 80250E88 0024DF68  4B FF D6 6D */	bl RxLockedPipeAddFragment
/* 80250E8C 0024DF6C  4B FF C7 99 */	bl RxLockedPipeUnlock
/* 80250E90 0024DF70  7C 7F 1B 79 */	mr. r31, r3
/* 80250E94 0024DF74  41 82 00 14 */	beq .L_80250EA8
/* 80250E98 0024DF78  93 FD 00 00 */	stw r31, 0x0(r29)
/* 80250E9C 0024DF7C  4B FF B2 3D */	bl RwIm3DSetTransformPipeline
/* 80250EA0 0024DF80  38 60 00 01 */	li r3, 0x1
/* 80250EA4 0024DF84  48 00 00 10 */	b .L_80250EB4
.L_80250EA8:
/* 80250EA8 0024DF88  7F E3 FB 78 */	mr r3, r31
/* 80250EAC 0024DF8C  4B FF BD 9D */	bl _rxPipelineDestroy
.L_80250EB0:
/* 80250EB0 0024DF90  38 60 00 00 */	li r3, 0x0
.L_80250EB4:
/* 80250EB4 0024DF94  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80250EB8 0024DF98  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80250EBC 0024DF9C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80250EC0 0024DFA0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80250EC4 0024DFA4  7C 08 03 A6 */	mtlr r0
/* 80250EC8 0024DFA8  38 21 00 20 */	addi r1, r1, 0x20
/* 80250ECC 0024DFAC  4E 80 00 20 */	blr
.endfn _rwIm3DCreatePlatformTransformPipeline

.fn _rwIm3DDestroyPlatformTransformPipeline, global
/* 80250ED0 0024DFB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80250ED4 0024DFB4  7C 08 02 A6 */	mflr r0
/* 80250ED8 0024DFB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80250EDC 0024DFBC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80250EE0 0024DFC0  7C 7F 1B 78 */	mr r31, r3
/* 80250EE4 0024DFC4  38 60 00 00 */	li r3, 0x0
/* 80250EE8 0024DFC8  4B FF B1 F1 */	bl RwIm3DSetTransformPipeline
/* 80250EEC 0024DFCC  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 80250EF0 0024DFD0  28 03 00 00 */	cmplwi r3, 0x0
/* 80250EF4 0024DFD4  41 82 00 10 */	beq .L_80250F04
/* 80250EF8 0024DFD8  4B FF BD 51 */	bl _rxPipelineDestroy
/* 80250EFC 0024DFDC  38 00 00 00 */	li r0, 0x0
/* 80250F00 0024DFE0  90 1F 00 00 */	stw r0, 0x0(r31)
.L_80250F04:
/* 80250F04 0024DFE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80250F08 0024DFE8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80250F0C 0024DFEC  7C 08 03 A6 */	mtlr r0
/* 80250F10 0024DFF0  38 21 00 10 */	addi r1, r1, 0x10
/* 80250F14 0024DFF4  4E 80 00 20 */	blr
.endfn _rwIm3DDestroyPlatformTransformPipeline

.fn _rwIm3DDestroyPlatformRenderPipelines, global
/* 80250F18 0024DFF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80250F1C 0024DFFC  7C 08 02 A6 */	mflr r0
/* 80250F20 0024E000  38 80 00 03 */	li r4, 0x3
/* 80250F24 0024E004  90 01 00 14 */	stw r0, 0x14(r1)
/* 80250F28 0024E008  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80250F2C 0024E00C  7C 7F 1B 78 */	mr r31, r3
/* 80250F30 0024E010  38 60 00 00 */	li r3, 0x0
/* 80250F34 0024E014  4B FF B1 F5 */	bl RwIm3DSetRenderPipeline
/* 80250F38 0024E018  38 60 00 00 */	li r3, 0x0
/* 80250F3C 0024E01C  38 80 00 05 */	li r4, 0x5
/* 80250F40 0024E020  4B FF B1 E9 */	bl RwIm3DSetRenderPipeline
/* 80250F44 0024E024  38 60 00 00 */	li r3, 0x0
/* 80250F48 0024E028  38 80 00 04 */	li r4, 0x4
/* 80250F4C 0024E02C  4B FF B1 DD */	bl RwIm3DSetRenderPipeline
/* 80250F50 0024E030  38 60 00 00 */	li r3, 0x0
/* 80250F54 0024E034  38 80 00 01 */	li r4, 0x1
/* 80250F58 0024E038  4B FF B1 D1 */	bl RwIm3DSetRenderPipeline
/* 80250F5C 0024E03C  38 60 00 00 */	li r3, 0x0
/* 80250F60 0024E040  38 80 00 02 */	li r4, 0x2
/* 80250F64 0024E044  4B FF B1 C5 */	bl RwIm3DSetRenderPipeline
/* 80250F68 0024E048  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 80250F6C 0024E04C  28 03 00 00 */	cmplwi r3, 0x0
/* 80250F70 0024E050  41 82 00 08 */	beq .L_80250F78
/* 80250F74 0024E054  4B FF BC D5 */	bl _rxPipelineDestroy
.L_80250F78:
/* 80250F78 0024E058  38 00 00 00 */	li r0, 0x0
/* 80250F7C 0024E05C  90 1F 00 00 */	stw r0, 0x0(r31)
/* 80250F80 0024E060  90 1F 00 04 */	stw r0, 0x4(r31)
/* 80250F84 0024E064  90 1F 00 08 */	stw r0, 0x8(r31)
/* 80250F88 0024E068  90 1F 00 0C */	stw r0, 0xc(r31)
/* 80250F8C 0024E06C  90 1F 00 10 */	stw r0, 0x10(r31)
/* 80250F90 0024E070  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80250F94 0024E074  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80250F98 0024E078  7C 08 03 A6 */	mtlr r0
/* 80250F9C 0024E07C  38 21 00 10 */	addi r1, r1, 0x10
/* 80250FA0 0024E080  4E 80 00 20 */	blr
.endfn _rwIm3DDestroyPlatformRenderPipelines

.fn _rwIm3DCreatePlatformRenderPipelines, global
/* 80250FA4 0024E084  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80250FA8 0024E088  7C 08 02 A6 */	mflr r0
/* 80250FAC 0024E08C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80250FB0 0024E090  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80250FB4 0024E094  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80250FB8 0024E098  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80250FBC 0024E09C  7C 7D 1B 78 */	mr r29, r3
/* 80250FC0 0024E0A0  4B FF BB FD */	bl RxPipelineCreate
/* 80250FC4 0024E0A4  7C 7F 1B 79 */	mr. r31, r3
/* 80250FC8 0024E0A8  41 82 00 9C */	beq .L_80251064
/* 80250FCC 0024E0AC  38 00 00 01 */	li r0, 0x1
/* 80250FD0 0024E0B0  90 1F 00 2C */	stw r0, 0x2c(r31)
/* 80250FD4 0024E0B4  4B FF D1 19 */	bl RxPipelineLock
/* 80250FD8 0024E0B8  7C 7E 1B 79 */	mr. r30, r3
/* 80250FDC 0024E0BC  41 82 00 80 */	beq .L_8025105C
/* 80250FE0 0024E0C0  48 00 0D 09 */	bl RxNodeDefinitionGetGameCubeSubmitNoLight
/* 80250FE4 0024E0C4  7C 65 1B 78 */	mr r5, r3
/* 80250FE8 0024E0C8  7F C3 F3 78 */	mr r3, r30
/* 80250FEC 0024E0CC  38 80 00 00 */	li r4, 0x0
/* 80250FF0 0024E0D0  38 C0 00 00 */	li r6, 0x0
/* 80250FF4 0024E0D4  4C C6 31 82 */	crclr 4*cr1+eq
/* 80250FF8 0024E0D8  4B FF D4 FD */	bl RxLockedPipeAddFragment
/* 80250FFC 0024E0DC  4B FF C6 29 */	bl RxLockedPipeUnlock
/* 80251000 0024E0E0  7C 7F 1B 79 */	mr. r31, r3
/* 80251004 0024E0E4  41 82 00 58 */	beq .L_8025105C
/* 80251008 0024E0E8  93 FD 00 00 */	stw r31, 0x0(r29)
/* 8025100C 0024E0EC  38 80 00 03 */	li r4, 0x3
/* 80251010 0024E0F0  93 FD 00 04 */	stw r31, 0x4(r29)
/* 80251014 0024E0F4  93 FD 00 08 */	stw r31, 0x8(r29)
/* 80251018 0024E0F8  93 FD 00 0C */	stw r31, 0xc(r29)
/* 8025101C 0024E0FC  93 FD 00 10 */	stw r31, 0x10(r29)
/* 80251020 0024E100  4B FF B1 09 */	bl RwIm3DSetRenderPipeline
/* 80251024 0024E104  7F E3 FB 78 */	mr r3, r31
/* 80251028 0024E108  38 80 00 05 */	li r4, 0x5
/* 8025102C 0024E10C  4B FF B0 FD */	bl RwIm3DSetRenderPipeline
/* 80251030 0024E110  7F E3 FB 78 */	mr r3, r31
/* 80251034 0024E114  38 80 00 04 */	li r4, 0x4
/* 80251038 0024E118  4B FF B0 F1 */	bl RwIm3DSetRenderPipeline
/* 8025103C 0024E11C  7F E3 FB 78 */	mr r3, r31
/* 80251040 0024E120  38 80 00 01 */	li r4, 0x1
/* 80251044 0024E124  4B FF B0 E5 */	bl RwIm3DSetRenderPipeline
/* 80251048 0024E128  7F E3 FB 78 */	mr r3, r31
/* 8025104C 0024E12C  38 80 00 02 */	li r4, 0x2
/* 80251050 0024E130  4B FF B0 D9 */	bl RwIm3DSetRenderPipeline
/* 80251054 0024E134  38 60 00 01 */	li r3, 0x1
/* 80251058 0024E138  48 00 00 10 */	b .L_80251068
.L_8025105C:
/* 8025105C 0024E13C  7F E3 FB 78 */	mr r3, r31
/* 80251060 0024E140  4B FF BB E9 */	bl _rxPipelineDestroy
.L_80251064:
/* 80251064 0024E144  38 60 00 00 */	li r3, 0x0
.L_80251068:
/* 80251068 0024E148  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8025106C 0024E14C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80251070 0024E150  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80251074 0024E154  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80251078 0024E158  7C 08 03 A6 */	mtlr r0
/* 8025107C 0024E15C  38 21 00 20 */	addi r1, r1, 0x20
/* 80251080 0024E160  4E 80 00 20 */	blr
.endfn _rwIm3DCreatePlatformRenderPipelines
