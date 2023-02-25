.include "macros.inc"
.file "wrldpipe.c"

# 0x8021FCB0 - 0x8021FEE4
.text
.balign 4

.fn _rxWorldDevicePluginAttach, global
/* 8021FCB0 0021CD90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8021FCB4 0021CD94  7C 08 02 A6 */	mflr r0
/* 8021FCB8 0021CD98  90 01 00 14 */	stw r0, 0x14(r1)
/* 8021FCBC 0021CD9C  4B FF FD 3D */	bl _rpDlVtxFmtPluginAttach
/* 8021FCC0 0021CDA0  2C 03 00 00 */	cmpwi r3, 0x0
/* 8021FCC4 0021CDA4  40 82 00 0C */	bne .L_8021FCD0
/* 8021FCC8 0021CDA8  38 60 00 00 */	li r3, 0x0
/* 8021FCCC 0021CDAC  48 00 00 14 */	b .L_8021FCE0
.L_8021FCD0:
/* 8021FCD0 0021CDB0  48 00 15 05 */	bl _rpDlLightPluginAttach
/* 8021FCD4 0021CDB4  7C 03 00 D0 */	neg r0, r3
/* 8021FCD8 0021CDB8  7C 00 1B 78 */	or r0, r0, r3
/* 8021FCDC 0021CDBC  54 03 0F FE */	srwi r3, r0, 31
.L_8021FCE0:
/* 8021FCE0 0021CDC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8021FCE4 0021CDC4  7C 08 03 A6 */	mtlr r0
/* 8021FCE8 0021CDC8  38 21 00 10 */	addi r1, r1, 0x10
/* 8021FCEC 0021CDCC  4E 80 00 20 */	blr
.endfn _rxWorldDevicePluginAttach

.fn _rpCreatePlatformMaterialPipelines, global
/* 8021FCF0 0021CDD0  38 60 00 01 */	li r3, 0x1
/* 8021FCF4 0021CDD4  4E 80 00 20 */	blr
.endfn _rpCreatePlatformMaterialPipelines

.fn _rpDestroyPlatformMaterialPipelines, global
/* 8021FCF8 0021CDD8  4E 80 00 20 */	blr
.endfn _rpDestroyPlatformMaterialPipelines

.fn _rpCreatePlatformWorldSectorPipelines, global
/* 8021FCFC 0021CDDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8021FD00 0021CDE0  7C 08 02 A6 */	mflr r0
/* 8021FD04 0021CDE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8021FD08 0021CDE8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8021FD0C 0021CDEC  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8021FD10 0021CDF0  48 02 CE AD */	bl RxPipelineCreate
/* 8021FD14 0021CDF4  7C 7F 1B 79 */	mr. r31, r3
/* 8021FD18 0021CDF8  41 82 00 68 */	beq .L_8021FD80
/* 8021FD1C 0021CDFC  38 00 00 02 */	li r0, 0x2
/* 8021FD20 0021CE00  90 1F 00 2C */	stw r0, 0x2c(r31)
/* 8021FD24 0021CE04  48 02 E3 C9 */	bl RxPipelineLock
/* 8021FD28 0021CE08  7C 7E 1B 79 */	mr. r30, r3
/* 8021FD2C 0021CE0C  41 82 00 4C */	beq .L_8021FD78
/* 8021FD30 0021CE10  48 00 0E 8D */	bl RxNodeDefinitionGetGameCubeWorldSectorAllInOne
/* 8021FD34 0021CE14  7C 65 1B 78 */	mr r5, r3
/* 8021FD38 0021CE18  7F C3 F3 78 */	mr r3, r30
/* 8021FD3C 0021CE1C  38 80 00 00 */	li r4, 0x0
/* 8021FD40 0021CE20  38 C0 00 00 */	li r6, 0x0
/* 8021FD44 0021CE24  4C C6 31 82 */	crclr 4*cr1+eq
/* 8021FD48 0021CE28  48 02 E7 AD */	bl RxLockedPipeAddFragment
/* 8021FD4C 0021CE2C  48 02 D8 D9 */	bl RxLockedPipeUnlock
/* 8021FD50 0021CE30  28 03 00 00 */	cmplwi r3, 0x0
/* 8021FD54 0021CE34  41 82 00 24 */	beq .L_8021FD78
/* 8021FD58 0021CE38  80 8D A0 58 */	lwz r4, _rxPipelineGlobalsOffset@sda21(r13)
/* 8021FD5C 0021CE3C  7F E3 FB 78 */	mr r3, r31
/* 8021FD60 0021CE40  80 AD 9F 7C */	lwz r5, RwEngineInstance@sda21(r13)
/* 8021FD64 0021CE44  38 04 00 58 */	addi r0, r4, 0x58
/* 8021FD68 0021CE48  7F E5 01 2E */	stwx r31, r5, r0
/* 8021FD6C 0021CE4C  4B FF F6 39 */	bl RpWorldSetDefaultSectorPipeline
/* 8021FD70 0021CE50  38 60 00 01 */	li r3, 0x1
/* 8021FD74 0021CE54  48 00 00 10 */	b .L_8021FD84
.L_8021FD78:
/* 8021FD78 0021CE58  7F E3 FB 78 */	mr r3, r31
/* 8021FD7C 0021CE5C  48 02 CE CD */	bl _rxPipelineDestroy
.L_8021FD80:
/* 8021FD80 0021CE60  38 60 00 00 */	li r3, 0x0
.L_8021FD84:
/* 8021FD84 0021CE64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8021FD88 0021CE68  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8021FD8C 0021CE6C  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8021FD90 0021CE70  7C 08 03 A6 */	mtlr r0
/* 8021FD94 0021CE74  38 21 00 10 */	addi r1, r1, 0x10
/* 8021FD98 0021CE78  4E 80 00 20 */	blr
.endfn _rpCreatePlatformWorldSectorPipelines

.fn _rpDestroyPlatformWorldSectorPipelines, global
/* 8021FD9C 0021CE7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8021FDA0 0021CE80  7C 08 02 A6 */	mflr r0
/* 8021FDA4 0021CE84  38 60 00 00 */	li r3, 0x0
/* 8021FDA8 0021CE88  90 01 00 14 */	stw r0, 0x14(r1)
/* 8021FDAC 0021CE8C  4B FF F5 F9 */	bl RpWorldSetDefaultSectorPipeline
/* 8021FDB0 0021CE90  80 6D A0 58 */	lwz r3, _rxPipelineGlobalsOffset@sda21(r13)
/* 8021FDB4 0021CE94  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8021FDB8 0021CE98  38 03 00 58 */	addi r0, r3, 0x58
/* 8021FDBC 0021CE9C  7C 64 00 2E */	lwzx r3, r4, r0
/* 8021FDC0 0021CEA0  28 03 00 00 */	cmplwi r3, 0x0
/* 8021FDC4 0021CEA4  41 82 00 1C */	beq .L_8021FDE0
/* 8021FDC8 0021CEA8  48 02 CE 81 */	bl _rxPipelineDestroy
/* 8021FDCC 0021CEAC  80 6D A0 58 */	lwz r3, _rxPipelineGlobalsOffset@sda21(r13)
/* 8021FDD0 0021CEB0  38 A0 00 00 */	li r5, 0x0
/* 8021FDD4 0021CEB4  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8021FDD8 0021CEB8  38 03 00 58 */	addi r0, r3, 0x58
/* 8021FDDC 0021CEBC  7C A4 01 2E */	stwx r5, r4, r0
.L_8021FDE0:
/* 8021FDE0 0021CEC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8021FDE4 0021CEC4  7C 08 03 A6 */	mtlr r0
/* 8021FDE8 0021CEC8  38 21 00 10 */	addi r1, r1, 0x10
/* 8021FDEC 0021CECC  4E 80 00 20 */	blr
.endfn _rpDestroyPlatformWorldSectorPipelines

.fn _rpCreatePlatformAtomicPipelines, global
/* 8021FDF0 0021CED0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8021FDF4 0021CED4  7C 08 02 A6 */	mflr r0
/* 8021FDF8 0021CED8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8021FDFC 0021CEDC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8021FE00 0021CEE0  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8021FE04 0021CEE4  48 02 CD B9 */	bl RxPipelineCreate
/* 8021FE08 0021CEE8  7C 7F 1B 79 */	mr. r31, r3
/* 8021FE0C 0021CEEC  41 82 00 68 */	beq .L_8021FE74
/* 8021FE10 0021CEF0  38 00 00 02 */	li r0, 0x2
/* 8021FE14 0021CEF4  90 1F 00 2C */	stw r0, 0x2c(r31)
/* 8021FE18 0021CEF8  48 02 E2 D5 */	bl RxPipelineLock
/* 8021FE1C 0021CEFC  7C 7E 1B 79 */	mr. r30, r3
/* 8021FE20 0021CF00  41 82 00 4C */	beq .L_8021FE6C
/* 8021FE24 0021CF04  48 00 09 B9 */	bl RxNodeDefinitionGetGameCubeAtomicAllInOne
/* 8021FE28 0021CF08  7C 65 1B 78 */	mr r5, r3
/* 8021FE2C 0021CF0C  7F C3 F3 78 */	mr r3, r30
/* 8021FE30 0021CF10  38 80 00 00 */	li r4, 0x0
/* 8021FE34 0021CF14  38 C0 00 00 */	li r6, 0x0
/* 8021FE38 0021CF18  4C C6 31 82 */	crclr 4*cr1+eq
/* 8021FE3C 0021CF1C  48 02 E6 B9 */	bl RxLockedPipeAddFragment
/* 8021FE40 0021CF20  48 02 D7 E5 */	bl RxLockedPipeUnlock
/* 8021FE44 0021CF24  28 03 00 00 */	cmplwi r3, 0x0
/* 8021FE48 0021CF28  41 82 00 24 */	beq .L_8021FE6C
/* 8021FE4C 0021CF2C  80 8D A0 58 */	lwz r4, _rxPipelineGlobalsOffset@sda21(r13)
/* 8021FE50 0021CF30  7F E3 FB 78 */	mr r3, r31
/* 8021FE54 0021CF34  80 AD 9F 7C */	lwz r5, RwEngineInstance@sda21(r13)
/* 8021FE58 0021CF38  38 04 00 54 */	addi r0, r4, 0x54
/* 8021FE5C 0021CF3C  7F E5 01 2E */	stwx r31, r5, r0
/* 8021FE60 0021CF40  4B FF F5 81 */	bl RpAtomicSetDefaultPipeline
/* 8021FE64 0021CF44  38 60 00 01 */	li r3, 0x1
/* 8021FE68 0021CF48  48 00 00 10 */	b .L_8021FE78
.L_8021FE6C:
/* 8021FE6C 0021CF4C  7F E3 FB 78 */	mr r3, r31
/* 8021FE70 0021CF50  48 02 CD D9 */	bl _rxPipelineDestroy
.L_8021FE74:
/* 8021FE74 0021CF54  38 60 00 00 */	li r3, 0x0
.L_8021FE78:
/* 8021FE78 0021CF58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8021FE7C 0021CF5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8021FE80 0021CF60  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8021FE84 0021CF64  7C 08 03 A6 */	mtlr r0
/* 8021FE88 0021CF68  38 21 00 10 */	addi r1, r1, 0x10
/* 8021FE8C 0021CF6C  4E 80 00 20 */	blr
.endfn _rpCreatePlatformAtomicPipelines

.fn _rpDestroyPlatformAtomicPipelines, global
/* 8021FE90 0021CF70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8021FE94 0021CF74  7C 08 02 A6 */	mflr r0
/* 8021FE98 0021CF78  38 60 00 00 */	li r3, 0x0
/* 8021FE9C 0021CF7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8021FEA0 0021CF80  4B FF F5 41 */	bl RpAtomicSetDefaultPipeline
/* 8021FEA4 0021CF84  80 6D A0 58 */	lwz r3, _rxPipelineGlobalsOffset@sda21(r13)
/* 8021FEA8 0021CF88  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8021FEAC 0021CF8C  38 03 00 54 */	addi r0, r3, 0x54
/* 8021FEB0 0021CF90  7C 64 00 2E */	lwzx r3, r4, r0
/* 8021FEB4 0021CF94  28 03 00 00 */	cmplwi r3, 0x0
/* 8021FEB8 0021CF98  41 82 00 1C */	beq .L_8021FED4
/* 8021FEBC 0021CF9C  48 02 CD 8D */	bl _rxPipelineDestroy
/* 8021FEC0 0021CFA0  80 6D A0 58 */	lwz r3, _rxPipelineGlobalsOffset@sda21(r13)
/* 8021FEC4 0021CFA4  38 A0 00 00 */	li r5, 0x0
/* 8021FEC8 0021CFA8  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8021FECC 0021CFAC  38 03 00 54 */	addi r0, r3, 0x54
/* 8021FED0 0021CFB0  7C A4 01 2E */	stwx r5, r4, r0
.L_8021FED4:
/* 8021FED4 0021CFB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8021FED8 0021CFB8  7C 08 03 A6 */	mtlr r0
/* 8021FEDC 0021CFBC  38 21 00 10 */	addi r1, r1, 0x10
/* 8021FEE0 0021CFC0  4E 80 00 20 */	blr
.endfn _rpDestroyPlatformAtomicPipelines
