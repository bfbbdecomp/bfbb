.include "macros.inc"
.file "batypehf.c"

# 0x8023F1F4 - 0x8023F290
.text
.balign 4

.fn _rwObjectHasFrameSetFrame, global
/* 8023F1F4 0023C2D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8023F1F8 0023C2D8  7C 08 02 A6 */	mflr r0
/* 8023F1FC 0023C2DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8023F200 0023C2E0  80 03 00 04 */	lwz r0, 0x4(r3)
/* 8023F204 0023C2E4  28 00 00 00 */	cmplwi r0, 0x0
/* 8023F208 0023C2E8  41 82 00 1C */	beq .L_8023F224
/* 8023F20C 0023C2EC  80 03 00 08 */	lwz r0, 0x8(r3)
/* 8023F210 0023C2F0  80 A3 00 0C */	lwz r5, 0xc(r3)
/* 8023F214 0023C2F4  90 05 00 00 */	stw r0, 0x0(r5)
/* 8023F218 0023C2F8  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8023F21C 0023C2FC  80 A3 00 08 */	lwz r5, 0x8(r3)
/* 8023F220 0023C300  90 05 00 04 */	stw r0, 0x4(r5)
.L_8023F224:
/* 8023F224 0023C304  28 04 00 00 */	cmplwi r4, 0x0
/* 8023F228 0023C308  90 83 00 04 */	stw r4, 0x4(r3)
/* 8023F22C 0023C30C  41 82 00 2C */	beq .L_8023F258
/* 8023F230 0023C310  80 C4 00 90 */	lwz r6, 0x90(r4)
/* 8023F234 0023C314  38 A4 00 90 */	addi r5, r4, 0x90
/* 8023F238 0023C318  38 03 00 08 */	addi r0, r3, 0x8
/* 8023F23C 0023C31C  90 C3 00 08 */	stw r6, 0x8(r3)
/* 8023F240 0023C320  90 A3 00 0C */	stw r5, 0xc(r3)
/* 8023F244 0023C324  7C 83 23 78 */	mr r3, r4
/* 8023F248 0023C328  80 A4 00 90 */	lwz r5, 0x90(r4)
/* 8023F24C 0023C32C  90 05 00 04 */	stw r0, 0x4(r5)
/* 8023F250 0023C330  90 04 00 90 */	stw r0, 0x90(r4)
/* 8023F254 0023C334  4B FF 9D 71 */	bl RwFrameUpdateObjects
.L_8023F258:
/* 8023F258 0023C338  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8023F25C 0023C33C  7C 08 03 A6 */	mtlr r0
/* 8023F260 0023C340  38 21 00 10 */	addi r1, r1, 0x10
/* 8023F264 0023C344  4E 80 00 20 */	blr
.endfn _rwObjectHasFrameSetFrame

.fn _rwObjectHasFrameReleaseFrame, global
/* 8023F268 0023C348  80 03 00 04 */	lwz r0, 0x4(r3)
/* 8023F26C 0023C34C  28 00 00 00 */	cmplwi r0, 0x0
/* 8023F270 0023C350  4D 82 00 20 */	beqlr
/* 8023F274 0023C354  80 03 00 08 */	lwz r0, 0x8(r3)
/* 8023F278 0023C358  80 83 00 0C */	lwz r4, 0xc(r3)
/* 8023F27C 0023C35C  90 04 00 00 */	stw r0, 0x0(r4)
/* 8023F280 0023C360  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8023F284 0023C364  80 63 00 08 */	lwz r3, 0x8(r3)
/* 8023F288 0023C368  90 03 00 04 */	stw r0, 0x4(r3)
/* 8023F28C 0023C36C  4E 80 00 20 */	blr
.endfn _rwObjectHasFrameReleaseFrame
