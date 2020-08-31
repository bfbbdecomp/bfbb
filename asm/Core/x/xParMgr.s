.include "macros.inc"

.section .text  # 0x80038AD4 - 0x80038B98

.global xParMgrInit__Fv
xParMgrInit__Fv:
/* 80038AD4 000358D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80038AD8 000358D8  7C 08 02 A6 */	mflr r0
/* 80038ADC 000358DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80038AE0 000358E0  80 0D 8A 24 */	lwz r0, lbl_sParMgrInit-_SDA_BASE_(r13)
/* 80038AE4 000358E4  2C 00 00 00 */	cmpwi r0, 0
/* 80038AE8 000358E8  40 82 00 18 */	bne lbl_80038B00
/* 80038AEC 000358EC  4B FF DE 61 */	bl xParMemInit__Fv
/* 80038AF0 000358F0  48 09 23 FD */	bl iParMgrInit__Fv
/* 80038AF4 000358F4  38 00 00 01 */	li r0, 1
/* 80038AF8 000358F8  90 0D 8A 24 */	stw r0, lbl_sParMgrInit-_SDA_BASE_(r13)
/* 80038AFC 000358FC  48 00 00 0C */	b lbl_80038B08
lbl_80038B00:
/* 80038B00 00035900  48 00 00 19 */	bl xParMgrKillAllParticles__Fv
/* 80038B04 00035904  48 09 23 E9 */	bl iParMgrInit__Fv
lbl_80038B08:
/* 80038B08 00035908  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80038B0C 0003590C  7C 08 03 A6 */	mtlr r0
/* 80038B10 00035910  38 21 00 10 */	addi r1, r1, 0x10
/* 80038B14 00035914  4E 80 00 20 */	blr 

.global xParMgrKillAllParticles__Fv
xParMgrKillAllParticles__Fv:
/* 80038B18 00035918  4E 80 00 20 */	blr 

.global xParMgrUpdate__Ff
xParMgrUpdate__Ff:
/* 80038B1C 0003591C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80038B20 00035920  7C 08 02 A6 */	mflr r0
/* 80038B24 00035924  90 01 00 14 */	stw r0, 0x14(r1)
/* 80038B28 00035928  48 09 25 59 */	bl iParMgrUpdate__Ff
/* 80038B2C 0003592C  80 6D 8A 20 */	lwz r3, lbl_sFrameCount-_SDA_BASE_(r13)
/* 80038B30 00035930  38 03 00 01 */	addi r0, r3, 1
/* 80038B34 00035934  90 0D 8A 20 */	stw r0, lbl_sFrameCount-_SDA_BASE_(r13)
/* 80038B38 00035938  80 0D 8A 20 */	lwz r0, lbl_sFrameCount-_SDA_BASE_(r13)
/* 80038B3C 0003593C  28 00 00 0A */	cmplwi r0, 0xa
/* 80038B40 00035940  40 81 00 0C */	ble lbl_80038B4C
/* 80038B44 00035944  38 00 00 01 */	li r0, 1
/* 80038B48 00035948  90 0D 8A 20 */	stw r0, lbl_sFrameCount-_SDA_BASE_(r13)
lbl_80038B4C:
/* 80038B4C 0003594C  80 6D 8A 20 */	lwz r3, lbl_sFrameCount-_SDA_BASE_(r13)
/* 80038B50 00035950  7C 69 03 A6 */	mtctr r3
/* 80038B54 00035954  28 03 00 01 */	cmplwi r3, 1
/* 80038B58 00035958  41 80 00 0C */	blt lbl_80038B64
lbl_80038B5C:
/* 80038B5C 0003595C  38 63 FF FF */	addi r3, r3, -1
/* 80038B60 00035960  42 00 FF FC */	bdnz lbl_80038B5C
lbl_80038B64:
/* 80038B64 00035964  90 6D 8A 20 */	stw r3, lbl_sFrameCount-_SDA_BASE_(r13)
/* 80038B68 00035968  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80038B6C 0003596C  7C 08 03 A6 */	mtlr r0
/* 80038B70 00035970  38 21 00 10 */	addi r1, r1, 0x10
/* 80038B74 00035974  4E 80 00 20 */	blr 

.global xParMgrRender__Fv
xParMgrRender__Fv:
/* 80038B78 00035978  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80038B7C 0003597C  7C 08 02 A6 */	mflr r0
/* 80038B80 00035980  90 01 00 14 */	stw r0, 0x14(r1)
/* 80038B84 00035984  48 09 25 01 */	bl iParMgrRender__Fv
/* 80038B88 00035988  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80038B8C 0003598C  7C 08 03 A6 */	mtlr r0
/* 80038B90 00035990  38 21 00 10 */	addi r1, r1, 0x10
/* 80038B94 00035994  4E 80 00 20 */	blr 
