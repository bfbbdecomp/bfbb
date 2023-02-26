.include "macros.inc"
.file "xParMgr.cpp"

# 0x80038AD4 - 0x80038B98
.text
.balign 4

# xParMgrInit()
.fn xParMgrInit__Fv, global
/* 80038AD4 00035BB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80038AD8 00035BB8  7C 08 02 A6 */	mflr r0
/* 80038ADC 00035BBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80038AE0 00035BC0  80 0D 8A 24 */	lwz r0, sParMgrInit@sda21(r13)
/* 80038AE4 00035BC4  2C 00 00 00 */	cmpwi r0, 0x0
/* 80038AE8 00035BC8  40 82 00 18 */	bne .L_80038B00
/* 80038AEC 00035BCC  4B FF DE 61 */	bl xParMemInit__Fv
/* 80038AF0 00035BD0  48 09 23 FD */	bl iParMgrInit__Fv
/* 80038AF4 00035BD4  38 00 00 01 */	li r0, 0x1
/* 80038AF8 00035BD8  90 0D 8A 24 */	stw r0, sParMgrInit@sda21(r13)
/* 80038AFC 00035BDC  48 00 00 0C */	b .L_80038B08
.L_80038B00:
/* 80038B00 00035BE0  48 00 00 19 */	bl xParMgrKillAllParticles__Fv
/* 80038B04 00035BE4  48 09 23 E9 */	bl iParMgrInit__Fv
.L_80038B08:
/* 80038B08 00035BE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80038B0C 00035BEC  7C 08 03 A6 */	mtlr r0
/* 80038B10 00035BF0  38 21 00 10 */	addi r1, r1, 0x10
/* 80038B14 00035BF4  4E 80 00 20 */	blr
.endfn xParMgrInit__Fv

# xParMgrKillAllParticles()
.fn xParMgrKillAllParticles__Fv, global
/* 80038B18 00035BF8  4E 80 00 20 */	blr
.endfn xParMgrKillAllParticles__Fv

# xParMgrUpdate(float)
.fn xParMgrUpdate__Ff, global
/* 80038B1C 00035BFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80038B20 00035C00  7C 08 02 A6 */	mflr r0
/* 80038B24 00035C04  90 01 00 14 */	stw r0, 0x14(r1)
/* 80038B28 00035C08  48 09 25 59 */	bl iParMgrUpdate__Ff
/* 80038B2C 00035C0C  80 6D 8A 20 */	lwz r3, sFrameCount@sda21(r13)
/* 80038B30 00035C10  38 03 00 01 */	addi r0, r3, 0x1
/* 80038B34 00035C14  90 0D 8A 20 */	stw r0, sFrameCount@sda21(r13)
/* 80038B38 00035C18  80 0D 8A 20 */	lwz r0, sFrameCount@sda21(r13)
/* 80038B3C 00035C1C  28 00 00 0A */	cmplwi r0, 0xa
/* 80038B40 00035C20  40 81 00 0C */	ble .L_80038B4C
/* 80038B44 00035C24  38 00 00 01 */	li r0, 0x1
/* 80038B48 00035C28  90 0D 8A 20 */	stw r0, sFrameCount@sda21(r13)
.L_80038B4C:
/* 80038B4C 00035C2C  80 6D 8A 20 */	lwz r3, sFrameCount@sda21(r13)
/* 80038B50 00035C30  7C 69 03 A6 */	mtctr r3
/* 80038B54 00035C34  28 03 00 01 */	cmplwi r3, 0x1
/* 80038B58 00035C38  41 80 00 0C */	blt .L_80038B64
.L_80038B5C:
/* 80038B5C 00035C3C  38 63 FF FF */	addi r3, r3, -0x1
/* 80038B60 00035C40  42 00 FF FC */	bdnz .L_80038B5C
.L_80038B64:
/* 80038B64 00035C44  90 6D 8A 20 */	stw r3, sFrameCount@sda21(r13)
/* 80038B68 00035C48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80038B6C 00035C4C  7C 08 03 A6 */	mtlr r0
/* 80038B70 00035C50  38 21 00 10 */	addi r1, r1, 0x10
/* 80038B74 00035C54  4E 80 00 20 */	blr
.endfn xParMgrUpdate__Ff

# xParMgrRender()
.fn xParMgrRender__Fv, global
/* 80038B78 00035C58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80038B7C 00035C5C  7C 08 02 A6 */	mflr r0
/* 80038B80 00035C60  90 01 00 14 */	stw r0, 0x14(r1)
/* 80038B84 00035C64  48 09 25 01 */	bl iParMgrRender__Fv
/* 80038B88 00035C68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80038B8C 00035C6C  7C 08 03 A6 */	mtlr r0
/* 80038B90 00035C70  38 21 00 10 */	addi r1, r1, 0x10
/* 80038B94 00035C74  4E 80 00 20 */	blr
.endfn xParMgrRender__Fv

# 0x803CB320 - 0x803CB328
.section .sbss, "wa", @nobits
.balign 8

.obj sFrameCount, local
	.skip 0x4
.endobj sFrameCount

.obj sParMgrInit, local
	.skip 0x4
.endobj sParMgrInit
