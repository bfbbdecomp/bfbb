.include "macros.inc"
.file "bapipew.c"

# 0x8021F3A4 - 0x8021F4A4
.text
.balign 4

.fn RpWorldSetDefaultSectorPipeline, global
/* 8021F3A4 0021C484  28 03 00 00 */	cmplwi r3, 0x0
/* 8021F3A8 0021C488  40 82 00 24 */	bne .L_8021F3CC
/* 8021F3AC 0021C48C  80 6D A0 58 */	lwz r3, _rxPipelineGlobalsOffset@sda21(r13)
/* 8021F3B0 0021C490  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8021F3B4 0021C494  38 03 00 58 */	addi r0, r3, 0x58
/* 8021F3B8 0021C498  7C 64 00 2E */	lwzx r3, r4, r0
/* 8021F3BC 0021C49C  28 03 00 00 */	cmplwi r3, 0x0
/* 8021F3C0 0021C4A0  41 82 00 08 */	beq .L_8021F3C8
/* 8021F3C4 0021C4A4  48 00 00 08 */	b .L_8021F3CC
.L_8021F3C8:
/* 8021F3C8 0021C4A8  38 60 00 00 */	li r3, 0x0
.L_8021F3CC:
/* 8021F3CC 0021C4AC  80 8D A0 58 */	lwz r4, _rxPipelineGlobalsOffset@sda21(r13)
/* 8021F3D0 0021C4B0  80 AD 9F 7C */	lwz r5, RwEngineInstance@sda21(r13)
/* 8021F3D4 0021C4B4  38 04 00 40 */	addi r0, r4, 0x40
/* 8021F3D8 0021C4B8  7C 65 01 2E */	stwx r3, r5, r0
/* 8021F3DC 0021C4BC  4E 80 00 20 */	blr
.endfn RpWorldSetDefaultSectorPipeline

.fn RpAtomicSetDefaultPipeline, global
/* 8021F3E0 0021C4C0  28 03 00 00 */	cmplwi r3, 0x0
/* 8021F3E4 0021C4C4  40 82 00 24 */	bne .L_8021F408
/* 8021F3E8 0021C4C8  80 6D A0 58 */	lwz r3, _rxPipelineGlobalsOffset@sda21(r13)
/* 8021F3EC 0021C4CC  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8021F3F0 0021C4D0  38 03 00 54 */	addi r0, r3, 0x54
/* 8021F3F4 0021C4D4  7C 64 00 2E */	lwzx r3, r4, r0
/* 8021F3F8 0021C4D8  28 03 00 00 */	cmplwi r3, 0x0
/* 8021F3FC 0021C4DC  41 82 00 08 */	beq .L_8021F404
/* 8021F400 0021C4E0  48 00 00 08 */	b .L_8021F408
.L_8021F404:
/* 8021F404 0021C4E4  38 60 00 00 */	li r3, 0x0
.L_8021F408:
/* 8021F408 0021C4E8  80 8D A0 58 */	lwz r4, _rxPipelineGlobalsOffset@sda21(r13)
/* 8021F40C 0021C4EC  80 AD 9F 7C */	lwz r5, RwEngineInstance@sda21(r13)
/* 8021F410 0021C4F0  38 04 00 3C */	addi r0, r4, 0x3c
/* 8021F414 0021C4F4  7C 65 01 2E */	stwx r3, r5, r0
/* 8021F418 0021C4F8  4E 80 00 20 */	blr
.endfn RpAtomicSetDefaultPipeline

.fn _rpWorldPipelineClose, global
/* 8021F41C 0021C4FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8021F420 0021C500  7C 08 02 A6 */	mflr r0
/* 8021F424 0021C504  90 01 00 14 */	stw r0, 0x14(r1)
/* 8021F428 0021C508  48 00 09 75 */	bl _rpDestroyPlatformWorldSectorPipelines
/* 8021F42C 0021C50C  48 00 0A 65 */	bl _rpDestroyPlatformAtomicPipelines
/* 8021F430 0021C510  48 00 08 C9 */	bl _rpDestroyPlatformMaterialPipelines
/* 8021F434 0021C514  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8021F438 0021C518  7C 08 03 A6 */	mtlr r0
/* 8021F43C 0021C51C  38 21 00 10 */	addi r1, r1, 0x10
/* 8021F440 0021C520  4E 80 00 20 */	blr
.endfn _rpWorldPipelineClose

.fn _rpWorldPipelineOpen, global
/* 8021F444 0021C524  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8021F448 0021C528  7C 08 02 A6 */	mflr r0
/* 8021F44C 0021C52C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8021F450 0021C530  48 00 08 A1 */	bl _rpCreatePlatformMaterialPipelines
/* 8021F454 0021C534  2C 03 00 00 */	cmpwi r3, 0x0
/* 8021F458 0021C538  41 82 00 08 */	beq .L_8021F460
/* 8021F45C 0021C53C  48 00 09 95 */	bl _rpCreatePlatformAtomicPipelines
.L_8021F460:
/* 8021F460 0021C540  2C 03 00 00 */	cmpwi r3, 0x0
/* 8021F464 0021C544  41 82 00 08 */	beq .L_8021F46C
/* 8021F468 0021C548  48 00 08 95 */	bl _rpCreatePlatformWorldSectorPipelines
.L_8021F46C:
/* 8021F46C 0021C54C  2C 03 00 00 */	cmpwi r3, 0x0
/* 8021F470 0021C550  41 82 00 0C */	beq .L_8021F47C
/* 8021F474 0021C554  38 60 00 01 */	li r3, 0x1
/* 8021F478 0021C558  48 00 00 14 */	b .L_8021F48C
.L_8021F47C:
/* 8021F47C 0021C55C  48 00 09 21 */	bl _rpDestroyPlatformWorldSectorPipelines
/* 8021F480 0021C560  48 00 0A 11 */	bl _rpDestroyPlatformAtomicPipelines
/* 8021F484 0021C564  48 00 08 75 */	bl _rpDestroyPlatformMaterialPipelines
/* 8021F488 0021C568  38 60 00 00 */	li r3, 0x0
.L_8021F48C:
/* 8021F48C 0021C56C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8021F490 0021C570  7C 08 03 A6 */	mtlr r0
/* 8021F494 0021C574  38 21 00 10 */	addi r1, r1, 0x10
/* 8021F498 0021C578  4E 80 00 20 */	blr
.endfn _rpWorldPipelineOpen

.fn _rpWorldPipeAttach, global
/* 8021F49C 0021C57C  38 60 00 01 */	li r3, 0x1
/* 8021F4A0 0021C580  4E 80 00 20 */	blr
.endfn _rpWorldPipeAttach
