.include "macros.inc"
.file "bamemory.c"

# 0x80231140 - 0x80231C48
.text
.balign 4

.fn _rwFreeListEnable, global
/* 80231140 0022E220  90 6D 87 A0 */	stw r3, FreeListsEnabled@sda21(r13)
/* 80231144 0022E224  4E 80 00 20 */	blr
.endfn _rwFreeListEnable

.fn FreeListCreate, local
/* 80231148 0022E228  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8023114C 0022E22C  7C 08 02 A6 */	mflr r0
/* 80231150 0022E230  90 01 00 24 */	stw r0, 0x24(r1)
/* 80231154 0022E234  39 61 00 20 */	addi r11, r1, 0x20
/* 80231158 0022E238  4B FB C3 A9 */	bl _savegpr_26
/* 8023115C 0022E23C  80 0D 87 A0 */	lwz r0, FreeListsEnabled@sda21(r13)
/* 80231160 0022E240  7C 7A 1B 78 */	mr r26, r3
/* 80231164 0022E244  7C 9C 23 78 */	mr r28, r4
/* 80231168 0022E248  7C BD 2B 78 */	mr r29, r5
/* 8023116C 0022E24C  2C 00 00 00 */	cmpwi r0, 0x0
/* 80231170 0022E250  7C DE 33 78 */	mr r30, r6
/* 80231174 0022E254  7C FF 3B 78 */	mr r31, r7
/* 80231178 0022E258  40 82 00 08 */	bne .L_80231180
/* 8023117C 0022E25C  3B C0 00 00 */	li r30, 0x0
.L_80231180:
/* 80231180 0022E260  28 1D 00 00 */	cmplwi r29, 0x0
/* 80231184 0022E264  40 82 00 08 */	bne .L_8023118C
/* 80231188 0022E268  3B A0 00 20 */	li r29, 0x20
.L_8023118C:
/* 8023118C 0022E26C  28 1F 00 00 */	cmplwi r31, 0x0
/* 80231190 0022E270  40 82 00 58 */	bne .L_802311E8
/* 80231194 0022E274  80 6D 9F 3C */	lwz r3, _masterFreeListPtr@sda21(r13)
/* 80231198 0022E278  28 03 00 00 */	cmplwi r3, 0x0
/* 8023119C 0022E27C  41 82 00 18 */	beq .L_802311B4
/* 802311A0 0022E280  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 802311A4 0022E284  81 84 01 44 */	lwz r12, 0x144(r4)
/* 802311A8 0022E288  7D 89 03 A6 */	mtctr r12
/* 802311AC 0022E28C  4E 80 04 21 */	bctrl
/* 802311B0 0022E290  48 00 00 18 */	b .L_802311C8
.L_802311B4:
/* 802311B4 0022E294  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 802311B8 0022E298  38 60 00 24 */	li r3, 0x24
/* 802311BC 0022E29C  81 84 01 34 */	lwz r12, 0x134(r4)
/* 802311C0 0022E2A0  7D 89 03 A6 */	mtctr r12
/* 802311C4 0022E2A4  4E 80 04 21 */	bctrl
.L_802311C8:
/* 802311C8 0022E2A8  28 03 00 00 */	cmplwi r3, 0x0
/* 802311CC 0022E2AC  7C 7F 1B 78 */	mr r31, r3
/* 802311D0 0022E2B0  40 82 00 0C */	bne .L_802311DC
/* 802311D4 0022E2B4  38 60 00 00 */	li r3, 0x0
/* 802311D8 0022E2B8  48 00 00 F0 */	b .L_802312C8
.L_802311DC:
/* 802311DC 0022E2BC  38 00 00 02 */	li r0, 0x2
/* 802311E0 0022E2C0  90 03 00 18 */	stw r0, 0x18(r3)
/* 802311E4 0022E2C4  48 00 00 0C */	b .L_802311F0
.L_802311E8:
/* 802311E8 0022E2C8  38 00 00 03 */	li r0, 0x3
/* 802311EC 0022E2CC  90 1F 00 18 */	stw r0, 0x18(r31)
.L_802311F0:
/* 802311F0 0022E2D0  7C 7D D2 14 */	add r3, r29, r26
/* 802311F4 0022E2D4  38 1C 00 07 */	addi r0, r28, 0x7
/* 802311F8 0022E2D8  38 83 FF FF */	addi r4, r3, -0x1
/* 802311FC 0022E2DC  3B 7F 00 10 */	addi r27, r31, 0x10
/* 80231200 0022E2E0  38 7D FF FF */	addi r3, r29, -0x1
/* 80231204 0022E2E4  54 1A E8 FE */	srwi r26, r0, 3
/* 80231208 0022E2E8  7C 83 18 78 */	andc r3, r4, r3
/* 8023120C 0022E2EC  90 7F 00 00 */	stw r3, 0x0(r31)
/* 80231210 0022E2F0  7C 1C 19 D6 */	mullw r0, r28, r3
/* 80231214 0022E2F4  93 9F 00 04 */	stw r28, 0x4(r31)
/* 80231218 0022E2F8  3B 80 00 00 */	li r28, 0x0
/* 8023121C 0022E2FC  93 BF 00 0C */	stw r29, 0xc(r31)
/* 80231220 0022E300  7C 1A 02 14 */	add r0, r26, r0
/* 80231224 0022E304  93 5F 00 08 */	stw r26, 0x8(r31)
/* 80231228 0022E308  7F A0 EA 14 */	add r29, r0, r29
/* 8023122C 0022E30C  3B BD 00 07 */	addi r29, r29, 0x7
/* 80231230 0022E310  93 7F 00 10 */	stw r27, 0x10(r31)
/* 80231234 0022E314  93 7F 00 14 */	stw r27, 0x14(r31)
/* 80231238 0022E318  48 00 00 64 */	b .L_8023129C
.L_8023123C:
/* 8023123C 0022E31C  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 80231240 0022E320  7F A3 EB 78 */	mr r3, r29
/* 80231244 0022E324  81 84 01 34 */	lwz r12, 0x134(r4)
/* 80231248 0022E328  7D 89 03 A6 */	mtctr r12
/* 8023124C 0022E32C  4E 80 04 21 */	bctrl
/* 80231250 0022E330  7C 67 1B 79 */	mr. r7, r3
/* 80231254 0022E334  40 82 00 14 */	bne .L_80231268
/* 80231258 0022E338  7F E3 FB 78 */	mr r3, r31
/* 8023125C 0022E33C  48 00 00 CD */	bl _RwFreeListFree
/* 80231260 0022E340  38 60 00 00 */	li r3, 0x0
/* 80231264 0022E344  48 00 00 64 */	b .L_802312C8
.L_80231268:
/* 80231268 0022E348  93 87 00 04 */	stw r28, 0x4(r7)
/* 8023126C 0022E34C  7F 45 D3 78 */	mr r5, r26
/* 80231270 0022E350  38 67 00 08 */	addi r3, r7, 0x8
/* 80231274 0022E354  38 80 00 00 */	li r4, 0x0
/* 80231278 0022E358  93 87 00 00 */	stw r28, 0x0(r7)
/* 8023127C 0022E35C  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 80231280 0022E360  90 07 00 00 */	stw r0, 0x0(r7)
/* 80231284 0022E364  93 67 00 04 */	stw r27, 0x4(r7)
/* 80231288 0022E368  80 DF 00 10 */	lwz r6, 0x10(r31)
/* 8023128C 0022E36C  90 E6 00 04 */	stw r7, 0x4(r6)
/* 80231290 0022E370  90 FF 00 10 */	stw r7, 0x10(r31)
/* 80231294 0022E374  4B DD 21 C5 */	bl memset
/* 80231298 0022E378  3B DE FF FF */	addi r30, r30, -0x1
.L_8023129C:
/* 8023129C 0022E37C  28 1E 00 00 */	cmplwi r30, 0x0
/* 802312A0 0022E380  40 82 FF 9C */	bne .L_8023123C
/* 802312A4 0022E384  80 AD 9F 40 */	lwz r5, _freeListList@sda21(r13)
/* 802312A8 0022E388  38 8D 9F 40 */	addi r4, r13, _freeListList@sda21
/* 802312AC 0022E38C  38 1F 00 1C */	addi r0, r31, 0x1c
/* 802312B0 0022E390  7F E3 FB 78 */	mr r3, r31
/* 802312B4 0022E394  90 BF 00 1C */	stw r5, 0x1c(r31)
/* 802312B8 0022E398  90 9F 00 20 */	stw r4, 0x20(r31)
/* 802312BC 0022E39C  80 8D 9F 40 */	lwz r4, _freeListList@sda21(r13)
/* 802312C0 0022E3A0  90 04 00 04 */	stw r0, 0x4(r4)
/* 802312C4 0022E3A4  90 0D 9F 40 */	stw r0, _freeListList@sda21(r13)
.L_802312C8:
/* 802312C8 0022E3A8  39 61 00 20 */	addi r11, r1, 0x20
/* 802312CC 0022E3AC  4B FB C2 81 */	bl _restgpr_26
/* 802312D0 0022E3B0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802312D4 0022E3B4  7C 08 03 A6 */	mtlr r0
/* 802312D8 0022E3B8  38 21 00 20 */	addi r1, r1, 0x20
/* 802312DC 0022E3BC  4E 80 00 20 */	blr
.endfn FreeListCreate

.fn RwFreeListCreate, global
/* 802312E0 0022E3C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802312E4 0022E3C4  7C 08 02 A6 */	mflr r0
/* 802312E8 0022E3C8  38 C0 00 01 */	li r6, 0x1
/* 802312EC 0022E3CC  38 E0 00 00 */	li r7, 0x0
/* 802312F0 0022E3D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802312F4 0022E3D4  4B FF FE 55 */	bl FreeListCreate
/* 802312F8 0022E3D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802312FC 0022E3DC  7C 08 03 A6 */	mtlr r0
/* 80231300 0022E3E0  38 21 00 10 */	addi r1, r1, 0x10
/* 80231304 0022E3E4  4E 80 00 20 */	blr
.endfn RwFreeListCreate

.fn RwFreeListCreateAndPreallocateSpace, global
/* 80231308 0022E3E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8023130C 0022E3EC  7C 08 02 A6 */	mflr r0
/* 80231310 0022E3F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80231314 0022E3F4  4B FF FE 35 */	bl FreeListCreate
/* 80231318 0022E3F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8023131C 0022E3FC  7C 08 03 A6 */	mtlr r0
/* 80231320 0022E400  38 21 00 10 */	addi r1, r1, 0x10
/* 80231324 0022E404  4E 80 00 20 */	blr
.endfn RwFreeListCreateAndPreallocateSpace

.fn _RwFreeListFree, local
/* 80231328 0022E408  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8023132C 0022E40C  7C 08 02 A6 */	mflr r0
/* 80231330 0022E410  90 01 00 14 */	stw r0, 0x14(r1)
/* 80231334 0022E414  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80231338 0022E418  7C 7F 1B 78 */	mr r31, r3
/* 8023133C 0022E41C  38 1F 00 10 */	addi r0, r31, 0x10
/* 80231340 0022E420  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80231344 0022E424  48 00 00 34 */	b .L_80231378
.L_80231348:
/* 80231348 0022E428  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8023134C 0022E42C  80 83 00 04 */	lwz r4, 0x4(r3)
/* 80231350 0022E430  90 04 00 00 */	stw r0, 0x0(r4)
/* 80231354 0022E434  80 03 00 04 */	lwz r0, 0x4(r3)
/* 80231358 0022E438  80 83 00 00 */	lwz r4, 0x0(r3)
/* 8023135C 0022E43C  90 04 00 04 */	stw r0, 0x4(r4)
/* 80231360 0022E440  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 80231364 0022E444  81 84 01 38 */	lwz r12, 0x138(r4)
/* 80231368 0022E448  7D 89 03 A6 */	mtctr r12
/* 8023136C 0022E44C  4E 80 04 21 */	bctrl
/* 80231370 0022E450  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 80231374 0022E454  38 1F 00 10 */	addi r0, r31, 0x10
.L_80231378:
/* 80231378 0022E458  7C 03 00 40 */	cmplw r3, r0
/* 8023137C 0022E45C  40 82 FF CC */	bne .L_80231348
/* 80231380 0022E460  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 80231384 0022E464  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80231388 0022E468  40 82 00 44 */	bne .L_802313CC
/* 8023138C 0022E46C  80 6D 9F 3C */	lwz r3, _masterFreeListPtr@sda21(r13)
/* 80231390 0022E470  7C 03 F8 40 */	cmplw r3, r31
/* 80231394 0022E474  41 82 00 0C */	beq .L_802313A0
/* 80231398 0022E478  28 03 00 00 */	cmplwi r3, 0x0
/* 8023139C 0022E47C  40 82 00 1C */	bne .L_802313B8
.L_802313A0:
/* 802313A0 0022E480  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 802313A4 0022E484  7F E3 FB 78 */	mr r3, r31
/* 802313A8 0022E488  81 84 01 38 */	lwz r12, 0x138(r4)
/* 802313AC 0022E48C  7D 89 03 A6 */	mtctr r12
/* 802313B0 0022E490  4E 80 04 21 */	bctrl
/* 802313B4 0022E494  48 00 00 18 */	b .L_802313CC
.L_802313B8:
/* 802313B8 0022E498  80 AD 9F 7C */	lwz r5, RwEngineInstance@sda21(r13)
/* 802313BC 0022E49C  7F E4 FB 78 */	mr r4, r31
/* 802313C0 0022E4A0  81 85 01 48 */	lwz r12, 0x148(r5)
/* 802313C4 0022E4A4  7D 89 03 A6 */	mtctr r12
/* 802313C8 0022E4A8  4E 80 04 21 */	bctrl
.L_802313CC:
/* 802313CC 0022E4AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802313D0 0022E4B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802313D4 0022E4B4  7C 08 03 A6 */	mtlr r0
/* 802313D8 0022E4B8  38 21 00 10 */	addi r1, r1, 0x10
/* 802313DC 0022E4BC  4E 80 00 20 */	blr
.endfn _RwFreeListFree

.fn RwFreeListDestroy, global
/* 802313E0 0022E4C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802313E4 0022E4C4  7C 08 02 A6 */	mflr r0
/* 802313E8 0022E4C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802313EC 0022E4CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802313F0 0022E4D0  7C 7F 1B 78 */	mr r31, r3
/* 802313F4 0022E4D4  38 9F 00 10 */	addi r4, r31, 0x10
/* 802313F8 0022E4D8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802313FC 0022E4DC  80 63 00 20 */	lwz r3, 0x20(r3)
/* 80231400 0022E4E0  90 03 00 00 */	stw r0, 0x0(r3)
/* 80231404 0022E4E4  80 1F 00 20 */	lwz r0, 0x20(r31)
/* 80231408 0022E4E8  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 8023140C 0022E4EC  90 03 00 04 */	stw r0, 0x4(r3)
/* 80231410 0022E4F0  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 80231414 0022E4F4  48 00 00 34 */	b .L_80231448
.L_80231418:
/* 80231418 0022E4F8  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8023141C 0022E4FC  80 83 00 04 */	lwz r4, 0x4(r3)
/* 80231420 0022E500  90 04 00 00 */	stw r0, 0x0(r4)
/* 80231424 0022E504  80 03 00 04 */	lwz r0, 0x4(r3)
/* 80231428 0022E508  80 83 00 00 */	lwz r4, 0x0(r3)
/* 8023142C 0022E50C  90 04 00 04 */	stw r0, 0x4(r4)
/* 80231430 0022E510  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 80231434 0022E514  81 84 01 38 */	lwz r12, 0x138(r4)
/* 80231438 0022E518  7D 89 03 A6 */	mtctr r12
/* 8023143C 0022E51C  4E 80 04 21 */	bctrl
/* 80231440 0022E520  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 80231444 0022E524  38 9F 00 10 */	addi r4, r31, 0x10
.L_80231448:
/* 80231448 0022E528  7C 03 20 40 */	cmplw r3, r4
/* 8023144C 0022E52C  40 82 FF CC */	bne .L_80231418
/* 80231450 0022E530  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 80231454 0022E534  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80231458 0022E538  40 82 00 44 */	bne .L_8023149C
/* 8023145C 0022E53C  80 6D 9F 3C */	lwz r3, _masterFreeListPtr@sda21(r13)
/* 80231460 0022E540  7C 03 F8 40 */	cmplw r3, r31
/* 80231464 0022E544  41 82 00 0C */	beq .L_80231470
/* 80231468 0022E548  28 03 00 00 */	cmplwi r3, 0x0
/* 8023146C 0022E54C  40 82 00 1C */	bne .L_80231488
.L_80231470:
/* 80231470 0022E550  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 80231474 0022E554  7F E3 FB 78 */	mr r3, r31
/* 80231478 0022E558  81 84 01 38 */	lwz r12, 0x138(r4)
/* 8023147C 0022E55C  7D 89 03 A6 */	mtctr r12
/* 80231480 0022E560  4E 80 04 21 */	bctrl
/* 80231484 0022E564  48 00 00 18 */	b .L_8023149C
.L_80231488:
/* 80231488 0022E568  80 AD 9F 7C */	lwz r5, RwEngineInstance@sda21(r13)
/* 8023148C 0022E56C  7F E4 FB 78 */	mr r4, r31
/* 80231490 0022E570  81 85 01 48 */	lwz r12, 0x148(r5)
/* 80231494 0022E574  7D 89 03 A6 */	mtctr r12
/* 80231498 0022E578  4E 80 04 21 */	bctrl
.L_8023149C:
/* 8023149C 0022E57C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802314A0 0022E580  38 60 00 01 */	li r3, 0x1
/* 802314A4 0022E584  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802314A8 0022E588  7C 08 03 A6 */	mtlr r0
/* 802314AC 0022E58C  38 21 00 10 */	addi r1, r1, 0x10
/* 802314B0 0022E590  4E 80 00 20 */	blr
.endfn RwFreeListDestroy

.fn _rwFreeListAllocReal, global
/* 802314B4 0022E594  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802314B8 0022E598  7C 08 02 A6 */	mflr r0
/* 802314BC 0022E59C  90 01 00 24 */	stw r0, 0x24(r1)
/* 802314C0 0022E5A0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802314C4 0022E5A4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802314C8 0022E5A8  7C 7E 1B 78 */	mr r30, r3
/* 802314CC 0022E5AC  38 60 00 00 */	li r3, 0x0
/* 802314D0 0022E5B0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802314D4 0022E5B4  93 81 00 10 */	stw r28, 0x10(r1)
/* 802314D8 0022E5B8  3B 9E 00 10 */	addi r28, r30, 0x10
/* 802314DC 0022E5BC  83 FE 00 08 */	lwz r31, 0x8(r30)
/* 802314E0 0022E5C0  81 9E 00 10 */	lwz r12, 0x10(r30)
/* 802314E4 0022E5C4  48 00 00 B8 */	b .L_8023159C
.L_802314E8:
/* 802314E8 0022E5C8  7D 0C FA 14 */	add r8, r12, r31
/* 802314EC 0022E5CC  38 8C 00 08 */	addi r4, r12, 0x8
/* 802314F0 0022E5D0  83 BE 00 04 */	lwz r29, 0x4(r30)
/* 802314F4 0022E5D4  39 40 00 00 */	li r10, 0x0
/* 802314F8 0022E5D8  38 E0 00 00 */	li r7, 0x0
/* 802314FC 0022E5DC  7F E9 03 A6 */	mtctr r31
/* 80231500 0022E5E0  28 1F 00 00 */	cmplwi r31, 0x0
/* 80231504 0022E5E4  40 81 00 94 */	ble .L_80231598
.L_80231508:
/* 80231508 0022E5E8  89 24 00 00 */	lbz r9, 0x0(r4)
/* 8023150C 0022E5EC  28 09 00 FF */	cmplwi r9, 0xff
/* 80231510 0022E5F0  41 82 00 6C */	beq .L_8023157C
/* 80231514 0022E5F4  39 60 00 00 */	li r11, 0x0
/* 80231518 0022E5F8  38 C0 00 80 */	li r6, 0x80
/* 8023151C 0022E5FC  48 00 00 4C */	b .L_80231568
.L_80231520:
/* 80231520 0022E600  7C C0 5E 30 */	sraw r0, r6, r11
/* 80231524 0022E604  54 05 06 3E */	clrlwi r5, r0, 24
/* 80231528 0022E608  7D 20 28 39 */	and. r0, r9, r5
/* 8023152C 0022E60C  40 82 00 34 */	bne .L_80231560
/* 80231530 0022E610  7C A3 4B 78 */	or r3, r5, r9
/* 80231534 0022E614  7C 07 5A 14 */	add r0, r7, r11
/* 80231538 0022E618  98 64 00 00 */	stb r3, 0x0(r4)
/* 8023153C 0022E61C  80 7E 00 00 */	lwz r3, 0x0(r30)
/* 80231540 0022E620  80 BE 00 0C */	lwz r5, 0xc(r30)
/* 80231544 0022E624  7C 03 01 D6 */	mullw r0, r3, r0
/* 80231548 0022E628  38 C5 00 07 */	addi r6, r5, 0x7
/* 8023154C 0022E62C  38 65 FF FF */	addi r3, r5, -0x1
/* 80231550 0022E630  7C C8 32 14 */	add r6, r8, r6
/* 80231554 0022E634  7C C3 18 78 */	andc r3, r6, r3
/* 80231558 0022E638  7C 63 02 14 */	add r3, r3, r0
/* 8023155C 0022E63C  48 00 00 24 */	b .L_80231580
.L_80231560:
/* 80231560 0022E640  39 6B 00 01 */	addi r11, r11, 0x1
/* 80231564 0022E644  3B BD FF FF */	addi r29, r29, -0x1
.L_80231568:
/* 80231568 0022E648  28 0B 00 08 */	cmplwi r11, 0x8
/* 8023156C 0022E64C  40 80 00 14 */	bge .L_80231580
/* 80231570 0022E650  28 1D 00 00 */	cmplwi r29, 0x0
/* 80231574 0022E654  40 82 FF AC */	bne .L_80231520
/* 80231578 0022E658  48 00 00 08 */	b .L_80231580
.L_8023157C:
/* 8023157C 0022E65C  3B BD FF F8 */	addi r29, r29, -0x8
.L_80231580:
/* 80231580 0022E660  28 03 00 00 */	cmplwi r3, 0x0
/* 80231584 0022E664  40 82 00 14 */	bne .L_80231598
/* 80231588 0022E668  38 E7 00 08 */	addi r7, r7, 0x8
/* 8023158C 0022E66C  39 4A 00 01 */	addi r10, r10, 0x1
/* 80231590 0022E670  38 84 00 01 */	addi r4, r4, 0x1
/* 80231594 0022E674  42 00 FF 74 */	bdnz .L_80231508
.L_80231598:
/* 80231598 0022E678  81 8C 00 00 */	lwz r12, 0x0(r12)
.L_8023159C:
/* 8023159C 0022E67C  7C 0C E0 40 */	cmplw r12, r28
/* 802315A0 0022E680  41 82 00 0C */	beq .L_802315AC
/* 802315A4 0022E684  28 03 00 00 */	cmplwi r3, 0x0
/* 802315A8 0022E688  41 82 FF 40 */	beq .L_802314E8
.L_802315AC:
/* 802315AC 0022E68C  28 03 00 00 */	cmplwi r3, 0x0
/* 802315B0 0022E690  40 82 00 94 */	bne .L_80231644
/* 802315B4 0022E694  80 9E 00 04 */	lwz r4, 0x4(r30)
/* 802315B8 0022E698  80 1E 00 00 */	lwz r0, 0x0(r30)
/* 802315BC 0022E69C  80 6D 9F 7C */	lwz r3, RwEngineInstance@sda21(r13)
/* 802315C0 0022E6A0  7C 04 01 D6 */	mullw r0, r4, r0
/* 802315C4 0022E6A4  80 9E 00 0C */	lwz r4, 0xc(r30)
/* 802315C8 0022E6A8  81 83 01 34 */	lwz r12, 0x134(r3)
/* 802315CC 0022E6AC  7C 1F 02 14 */	add r0, r31, r0
/* 802315D0 0022E6B0  7C 60 22 14 */	add r3, r0, r4
/* 802315D4 0022E6B4  7D 89 03 A6 */	mtctr r12
/* 802315D8 0022E6B8  38 63 00 07 */	addi r3, r3, 0x7
/* 802315DC 0022E6BC  4E 80 04 21 */	bctrl
/* 802315E0 0022E6C0  7C 7D 1B 79 */	mr. r29, r3
/* 802315E4 0022E6C4  40 82 00 0C */	bne .L_802315F0
/* 802315E8 0022E6C8  38 60 00 00 */	li r3, 0x0
/* 802315EC 0022E6CC  48 00 00 58 */	b .L_80231644
.L_802315F0:
/* 802315F0 0022E6D0  3B 9D 00 08 */	addi r28, r29, 0x8
/* 802315F4 0022E6D4  7F E5 FB 78 */	mr r5, r31
/* 802315F8 0022E6D8  7F 83 E3 78 */	mr r3, r28
/* 802315FC 0022E6DC  38 80 00 00 */	li r4, 0x0
/* 80231600 0022E6E0  4B DD 1E 59 */	bl memset
/* 80231604 0022E6E4  80 9E 00 10 */	lwz r4, 0x10(r30)
/* 80231608 0022E6E8  38 7E 00 10 */	addi r3, r30, 0x10
/* 8023160C 0022E6EC  38 00 00 80 */	li r0, 0x80
/* 80231610 0022E6F0  90 9D 00 00 */	stw r4, 0x0(r29)
/* 80231614 0022E6F4  90 7D 00 04 */	stw r3, 0x4(r29)
/* 80231618 0022E6F8  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 8023161C 0022E6FC  93 A3 00 04 */	stw r29, 0x4(r3)
/* 80231620 0022E700  93 BE 00 10 */	stw r29, 0x10(r30)
/* 80231624 0022E704  98 1C 00 00 */	stb r0, 0x0(r28)
/* 80231628 0022E708  80 9E 00 0C */	lwz r4, 0xc(r30)
/* 8023162C 0022E70C  7C 7F 22 14 */	add r3, r31, r4
/* 80231630 0022E710  38 04 FF FF */	addi r0, r4, -0x1
/* 80231634 0022E714  38 63 00 07 */	addi r3, r3, 0x7
/* 80231638 0022E718  7C 7D 1A 14 */	add r3, r29, r3
/* 8023163C 0022E71C  7C 60 00 78 */	andc r0, r3, r0
/* 80231640 0022E720  7C 03 03 78 */	mr r3, r0
.L_80231644:
/* 80231644 0022E724  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80231648 0022E728  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8023164C 0022E72C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80231650 0022E730  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80231654 0022E734  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80231658 0022E738  7C 08 03 A6 */	mtlr r0
/* 8023165C 0022E73C  38 21 00 20 */	addi r1, r1, 0x20
/* 80231660 0022E740  4E 80 00 20 */	blr
.endfn _rwFreeListAllocReal

.fn _rwFreeListFreeReal, global
/* 80231664 0022E744  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80231668 0022E748  7C 08 02 A6 */	mflr r0
/* 8023166C 0022E74C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80231670 0022E750  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80231674 0022E754  7C 7F 1B 78 */	mr r31, r3
/* 80231678 0022E758  38 1F 00 10 */	addi r0, r31, 0x10
/* 8023167C 0022E75C  80 A3 00 08 */	lwz r5, 0x8(r3)
/* 80231680 0022E760  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80231684 0022E764  48 00 01 64 */	b .L_802317E8
.L_80231688:
/* 80231688 0022E768  38 E5 00 08 */	addi r7, r5, 0x8
/* 8023168C 0022E76C  7C E3 3A 14 */	add r7, r3, r7
/* 80231690 0022E770  7C 04 38 40 */	cmplw r4, r7
/* 80231694 0022E774  41 80 01 50 */	blt .L_802317E4
/* 80231698 0022E778  80 DF 00 04 */	lwz r6, 0x4(r31)
/* 8023169C 0022E77C  81 1F 00 00 */	lwz r8, 0x0(r31)
/* 802316A0 0022E780  7C C6 41 D6 */	mullw r6, r6, r8
/* 802316A4 0022E784  7C C7 32 14 */	add r6, r7, r6
/* 802316A8 0022E788  7C 04 30 40 */	cmplw r4, r6
/* 802316AC 0022E78C  41 81 01 38 */	bgt .L_802317E4
/* 802316B0 0022E790  7C 87 20 50 */	subf r4, r7, r4
/* 802316B4 0022E794  38 E0 00 80 */	li r7, 0x80
/* 802316B8 0022E798  7D 04 43 96 */	divwu r8, r4, r8
/* 802316BC 0022E79C  38 83 00 08 */	addi r4, r3, 0x8
/* 802316C0 0022E7A0  55 06 00 38 */	clrrwi r6, r8, 3
/* 802316C4 0022E7A4  7C C6 40 50 */	subf r6, r6, r8
/* 802316C8 0022E7A8  55 08 E8 FE */	srwi r8, r8, 3
/* 802316CC 0022E7AC  7C E6 36 30 */	sraw r6, r7, r6
/* 802316D0 0022E7B0  7C E4 40 AE */	lbzx r7, r4, r8
/* 802316D4 0022E7B4  54 C6 06 3E */	clrlwi r6, r6, 24
/* 802316D8 0022E7B8  7C C6 30 F8 */	nor r6, r6, r6
/* 802316DC 0022E7BC  54 C6 06 3E */	clrlwi r6, r6, 24
/* 802316E0 0022E7C0  7C E6 30 38 */	and r6, r7, r6
/* 802316E4 0022E7C4  7C C4 41 AE */	stbx r6, r4, r8
/* 802316E8 0022E7C8  80 DF 00 18 */	lwz r6, 0x18(r31)
/* 802316EC 0022E7CC  54 C6 07 BD */	rlwinm. r6, r6, 0, 30, 30
/* 802316F0 0022E7D0  41 82 00 EC */	beq .L_802317DC
/* 802316F4 0022E7D4  28 05 00 00 */	cmplwi r5, 0x0
/* 802316F8 0022E7D8  39 00 00 00 */	li r8, 0x0
/* 802316FC 0022E7DC  7D 09 43 78 */	mr r9, r8
/* 80231700 0022E7E0  40 81 00 94 */	ble .L_80231794
/* 80231704 0022E7E4  28 05 00 08 */	cmplwi r5, 0x8
/* 80231708 0022E7E8  38 E5 FF F8 */	addi r7, r5, -0x8
/* 8023170C 0022E7EC  40 81 00 64 */	ble .L_80231770
/* 80231710 0022E7F0  38 C7 00 07 */	addi r6, r7, 0x7
/* 80231714 0022E7F4  54 C6 E8 FE */	srwi r6, r6, 3
/* 80231718 0022E7F8  7C C9 03 A6 */	mtctr r6
/* 8023171C 0022E7FC  28 07 00 00 */	cmplwi r7, 0x0
/* 80231720 0022E800  40 81 00 50 */	ble .L_80231770
.L_80231724:
/* 80231724 0022E804  7D 44 4A 14 */	add r10, r4, r9
/* 80231728 0022E808  39 29 00 08 */	addi r9, r9, 0x8
/* 8023172C 0022E80C  88 EA 00 00 */	lbz r7, 0x0(r10)
/* 80231730 0022E810  88 CA 00 01 */	lbz r6, 0x1(r10)
/* 80231734 0022E814  7D 08 3A 14 */	add r8, r8, r7
/* 80231738 0022E818  88 EA 00 02 */	lbz r7, 0x2(r10)
/* 8023173C 0022E81C  7D 08 32 14 */	add r8, r8, r6
/* 80231740 0022E820  88 CA 00 03 */	lbz r6, 0x3(r10)
/* 80231744 0022E824  7D 08 3A 14 */	add r8, r8, r7
/* 80231748 0022E828  88 EA 00 04 */	lbz r7, 0x4(r10)
/* 8023174C 0022E82C  7D 08 32 14 */	add r8, r8, r6
/* 80231750 0022E830  88 CA 00 05 */	lbz r6, 0x5(r10)
/* 80231754 0022E834  7D 08 3A 14 */	add r8, r8, r7
/* 80231758 0022E838  88 EA 00 06 */	lbz r7, 0x6(r10)
/* 8023175C 0022E83C  7D 08 32 14 */	add r8, r8, r6
/* 80231760 0022E840  88 CA 00 07 */	lbz r6, 0x7(r10)
/* 80231764 0022E844  7D 08 3A 14 */	add r8, r8, r7
/* 80231768 0022E848  7D 08 32 14 */	add r8, r8, r6
/* 8023176C 0022E84C  42 00 FF B8 */	bdnz .L_80231724
.L_80231770:
/* 80231770 0022E850  7C C9 28 50 */	subf r6, r9, r5
/* 80231774 0022E854  7C 84 4A 14 */	add r4, r4, r9
/* 80231778 0022E858  7C C9 03 A6 */	mtctr r6
/* 8023177C 0022E85C  7C 09 28 40 */	cmplw r9, r5
/* 80231780 0022E860  40 80 00 14 */	bge .L_80231794
.L_80231784:
/* 80231784 0022E864  88 A4 00 00 */	lbz r5, 0x0(r4)
/* 80231788 0022E868  38 84 00 01 */	addi r4, r4, 0x1
/* 8023178C 0022E86C  7D 08 2A 14 */	add r8, r8, r5
/* 80231790 0022E870  42 00 FF F4 */	bdnz .L_80231784
.L_80231794:
/* 80231794 0022E874  28 08 00 00 */	cmplwi r8, 0x0
/* 80231798 0022E878  40 82 00 44 */	bne .L_802317DC
/* 8023179C 0022E87C  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 802317A0 0022E880  7C 03 20 40 */	cmplw r3, r4
/* 802317A4 0022E884  40 82 00 10 */	bne .L_802317B4
/* 802317A8 0022E888  80 83 00 00 */	lwz r4, 0x0(r3)
/* 802317AC 0022E88C  7C 04 00 40 */	cmplw r4, r0
/* 802317B0 0022E890  41 82 00 2C */	beq .L_802317DC
.L_802317B4:
/* 802317B4 0022E894  80 03 00 00 */	lwz r0, 0x0(r3)
/* 802317B8 0022E898  80 83 00 04 */	lwz r4, 0x4(r3)
/* 802317BC 0022E89C  90 04 00 00 */	stw r0, 0x0(r4)
/* 802317C0 0022E8A0  80 03 00 04 */	lwz r0, 0x4(r3)
/* 802317C4 0022E8A4  80 83 00 00 */	lwz r4, 0x0(r3)
/* 802317C8 0022E8A8  90 04 00 04 */	stw r0, 0x4(r4)
/* 802317CC 0022E8AC  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 802317D0 0022E8B0  81 84 01 38 */	lwz r12, 0x138(r4)
/* 802317D4 0022E8B4  7D 89 03 A6 */	mtctr r12
/* 802317D8 0022E8B8  4E 80 04 21 */	bctrl
.L_802317DC:
/* 802317DC 0022E8BC  7F E3 FB 78 */	mr r3, r31
/* 802317E0 0022E8C0  48 00 00 14 */	b .L_802317F4
.L_802317E4:
/* 802317E4 0022E8C4  80 63 00 00 */	lwz r3, 0x0(r3)
.L_802317E8:
/* 802317E8 0022E8C8  7C 03 00 40 */	cmplw r3, r0
/* 802317EC 0022E8CC  40 82 FE 9C */	bne .L_80231688
/* 802317F0 0022E8D0  38 60 00 00 */	li r3, 0x0
.L_802317F4:
/* 802317F4 0022E8D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802317F8 0022E8D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802317FC 0022E8DC  7C 08 03 A6 */	mtlr r0
/* 80231800 0022E8E0  38 21 00 10 */	addi r1, r1, 0x10
/* 80231804 0022E8E4  4E 80 00 20 */	blr
.endfn _rwFreeListFreeReal

.fn RwFreeListForAllUsed, global
/* 80231808 0022E8E8  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8023180C 0022E8EC  7C 08 02 A6 */	mflr r0
/* 80231810 0022E8F0  90 01 00 54 */	stw r0, 0x54(r1)
/* 80231814 0022E8F4  39 61 00 50 */	addi r11, r1, 0x50
/* 80231818 0022E8F8  4B FB BC C5 */	bl _savegpr_17
/* 8023181C 0022E8FC  7C 72 1B 78 */	mr r18, r3
/* 80231820 0022E900  83 63 00 08 */	lwz r27, 0x8(r3)
/* 80231824 0022E904  82 A3 00 10 */	lwz r21, 0x10(r3)
/* 80231828 0022E908  7C 93 23 78 */	mr r19, r4
/* 8023182C 0022E90C  7C B4 2B 78 */	mr r20, r5
/* 80231830 0022E910  3B 52 00 10 */	addi r26, r18, 0x10
/* 80231834 0022E914  48 00 00 E4 */	b .L_80231918
.L_80231838:
/* 80231838 0022E918  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8023183C 0022E91C  7F 63 DB 78 */	mr r3, r27
/* 80231840 0022E920  3A 35 00 08 */	addi r17, r21, 0x8
/* 80231844 0022E924  81 84 01 34 */	lwz r12, 0x134(r4)
/* 80231848 0022E928  7D 89 03 A6 */	mtctr r12
/* 8023184C 0022E92C  4E 80 04 21 */	bctrl
/* 80231850 0022E930  7C 78 1B 79 */	mr. r24, r3
/* 80231854 0022E934  40 82 00 0C */	bne .L_80231860
/* 80231858 0022E938  38 60 00 00 */	li r3, 0x0
/* 8023185C 0022E93C  48 00 00 C8 */	b .L_80231924
.L_80231860:
/* 80231860 0022E940  7E 24 8B 78 */	mr r4, r17
/* 80231864 0022E944  7F 65 DB 78 */	mr r5, r27
/* 80231868 0022E948  4B DD 1C D9 */	bl memcpy
/* 8023186C 0022E94C  83 35 00 00 */	lwz r25, 0x0(r21)
/* 80231870 0022E950  7F 11 C3 78 */	mr r17, r24
/* 80231874 0022E954  7F 95 DA 14 */	add r28, r21, r27
/* 80231878 0022E958  3A C0 00 00 */	li r22, 0x0
/* 8023187C 0022E95C  3B A0 00 00 */	li r29, 0x0
/* 80231880 0022E960  48 00 00 78 */	b .L_802318F8
.L_80231884:
/* 80231884 0022E964  8A F1 00 00 */	lbz r23, 0x0(r17)
/* 80231888 0022E968  28 17 00 00 */	cmplwi r23, 0x0
/* 8023188C 0022E96C  41 82 00 60 */	beq .L_802318EC
/* 80231890 0022E970  7F BE EB 78 */	mr r30, r29
/* 80231894 0022E974  3A A0 00 00 */	li r21, 0x0
/* 80231898 0022E978  3B E0 00 80 */	li r31, 0x80
.L_8023189C:
/* 8023189C 0022E97C  7F E0 AE 30 */	sraw r0, r31, r21
/* 802318A0 0022E980  54 00 06 3E */	clrlwi r0, r0, 24
/* 802318A4 0022E984  7E E0 00 39 */	and. r0, r23, r0
/* 802318A8 0022E988  41 82 00 34 */	beq .L_802318DC
/* 802318AC 0022E98C  80 12 00 00 */	lwz r0, 0x0(r18)
/* 802318B0 0022E990  7E 6C 9B 78 */	mr r12, r19
/* 802318B4 0022E994  80 72 00 0C */	lwz r3, 0xc(r18)
/* 802318B8 0022E998  7E 84 A3 78 */	mr r4, r20
/* 802318BC 0022E99C  7C 00 F1 D6 */	mullw r0, r0, r30
/* 802318C0 0022E9A0  38 A3 00 07 */	addi r5, r3, 0x7
/* 802318C4 0022E9A4  38 63 FF FF */	addi r3, r3, -0x1
/* 802318C8 0022E9A8  7C BC 2A 14 */	add r5, r28, r5
/* 802318CC 0022E9AC  7C A3 18 78 */	andc r3, r5, r3
/* 802318D0 0022E9B0  7C 63 02 14 */	add r3, r3, r0
/* 802318D4 0022E9B4  7D 89 03 A6 */	mtctr r12
/* 802318D8 0022E9B8  4E 80 04 21 */	bctrl
.L_802318DC:
/* 802318DC 0022E9BC  3A B5 00 01 */	addi r21, r21, 0x1
/* 802318E0 0022E9C0  3B DE 00 01 */	addi r30, r30, 0x1
/* 802318E4 0022E9C4  28 15 00 08 */	cmplwi r21, 0x8
/* 802318E8 0022E9C8  41 80 FF B4 */	blt .L_8023189C
.L_802318EC:
/* 802318EC 0022E9CC  3B BD 00 08 */	addi r29, r29, 0x8
/* 802318F0 0022E9D0  3A D6 00 01 */	addi r22, r22, 0x1
/* 802318F4 0022E9D4  3A 31 00 01 */	addi r17, r17, 0x1
.L_802318F8:
/* 802318F8 0022E9D8  7C 16 D8 40 */	cmplw r22, r27
/* 802318FC 0022E9DC  41 80 FF 88 */	blt .L_80231884
/* 80231900 0022E9E0  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 80231904 0022E9E4  7F 03 C3 78 */	mr r3, r24
/* 80231908 0022E9E8  81 84 01 38 */	lwz r12, 0x138(r4)
/* 8023190C 0022E9EC  7D 89 03 A6 */	mtctr r12
/* 80231910 0022E9F0  4E 80 04 21 */	bctrl
/* 80231914 0022E9F4  7F 35 CB 78 */	mr r21, r25
.L_80231918:
/* 80231918 0022E9F8  7C 15 D0 40 */	cmplw r21, r26
/* 8023191C 0022E9FC  40 82 FF 1C */	bne .L_80231838
/* 80231920 0022EA00  7E 43 93 78 */	mr r3, r18
.L_80231924:
/* 80231924 0022EA04  39 61 00 50 */	addi r11, r1, 0x50
/* 80231928 0022EA08  4B FB BC 01 */	bl _restgpr_17
/* 8023192C 0022EA0C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80231930 0022EA10  7C 08 03 A6 */	mtlr r0
/* 80231934 0022EA14  38 21 00 50 */	addi r1, r1, 0x50
/* 80231938 0022EA18  4E 80 00 20 */	blr
.endfn RwFreeListForAllUsed

.fn FakeCalloc, local
/* 8023193C 0022EA1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80231940 0022EA20  7C 08 02 A6 */	mflr r0
/* 80231944 0022EA24  90 01 00 14 */	stw r0, 0x14(r1)
/* 80231948 0022EA28  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8023194C 0022EA2C  7F E3 21 D6 */	mullw r31, r3, r4
/* 80231950 0022EA30  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80231954 0022EA34  7F E3 FB 78 */	mr r3, r31
/* 80231958 0022EA38  4B EA 1D F1 */	bl malloc
/* 8023195C 0022EA3C  7C 7E 1B 79 */	mr. r30, r3
/* 80231960 0022EA40  41 82 00 10 */	beq .L_80231970
/* 80231964 0022EA44  7F E5 FB 78 */	mr r5, r31
/* 80231968 0022EA48  38 80 00 00 */	li r4, 0x0
/* 8023196C 0022EA4C  4B DD 1A ED */	bl memset
.L_80231970:
/* 80231970 0022EA50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80231974 0022EA54  7F C3 F3 78 */	mr r3, r30
/* 80231978 0022EA58  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8023197C 0022EA5C  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80231980 0022EA60  7C 08 03 A6 */	mtlr r0
/* 80231984 0022EA64  38 21 00 10 */	addi r1, r1, 0x10
/* 80231988 0022EA68  4E 80 00 20 */	blr
.endfn FakeCalloc

.fn _rwMemoryOpen, global
/* 8023198C 0022EA6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80231990 0022EA70  7C 08 02 A6 */	mflr r0
/* 80231994 0022EA74  3C 80 80 38 */	lis r4, _masterFreeList@ha
/* 80231998 0022EA78  38 AD 9F 40 */	addi r5, r13, _freeListList@sda21
/* 8023199C 0022EA7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802319A0 0022EA80  38 E4 3D 08 */	addi r7, r4, _masterFreeList@l
/* 802319A4 0022EA84  38 00 00 01 */	li r0, 0x1
/* 802319A8 0022EA88  38 80 00 10 */	li r4, 0x10
/* 802319AC 0022EA8C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802319B0 0022EA90  7C 7F 1B 78 */	mr r31, r3
/* 802319B4 0022EA94  38 60 00 24 */	li r3, 0x24
/* 802319B8 0022EA98  38 C0 00 00 */	li r6, 0x0
/* 802319BC 0022EA9C  90 AD 9F 40 */	stw r5, _freeListList@sda21(r13)
/* 802319C0 0022EAA0  90 A5 00 04 */	stw r5, 0x4(r5)
/* 802319C4 0022EAA4  38 A0 00 20 */	li r5, 0x20
/* 802319C8 0022EAA8  90 0D 9F 38 */	stw r0, _freeListModuleOpen@sda21(r13)
/* 802319CC 0022EAAC  4B FF F7 7D */	bl FreeListCreate
/* 802319D0 0022EAB0  90 6D 9F 3C */	stw r3, _masterFreeListPtr@sda21(r13)
/* 802319D4 0022EAB4  80 6D 9F 3C */	lwz r3, _masterFreeListPtr@sda21(r13)
/* 802319D8 0022EAB8  28 03 00 00 */	cmplwi r3, 0x0
/* 802319DC 0022EABC  40 82 00 10 */	bne .L_802319EC
/* 802319E0 0022EAC0  38 80 00 00 */	li r4, 0x0
/* 802319E4 0022EAC4  90 8D 9F 38 */	stw r4, _freeListModuleOpen@sda21(r13)
/* 802319E8 0022EAC8  48 00 00 24 */	b .L_80231A0C
.L_802319EC:
/* 802319EC 0022EACC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802319F0 0022EAD0  38 80 00 01 */	li r4, 0x1
/* 802319F4 0022EAD4  80 63 00 20 */	lwz r3, 0x20(r3)
/* 802319F8 0022EAD8  90 03 00 00 */	stw r0, 0x0(r3)
/* 802319FC 0022EADC  80 6D 9F 3C */	lwz r3, _masterFreeListPtr@sda21(r13)
/* 80231A00 0022EAE0  80 03 00 20 */	lwz r0, 0x20(r3)
/* 80231A04 0022EAE4  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 80231A08 0022EAE8  90 03 00 04 */	stw r0, 0x4(r3)
.L_80231A0C:
/* 80231A0C 0022EAEC  2C 04 00 00 */	cmpwi r4, 0x0
/* 80231A10 0022EAF0  40 82 00 0C */	bne .L_80231A1C
/* 80231A14 0022EAF4  38 60 00 00 */	li r3, 0x0
/* 80231A18 0022EAF8  48 00 00 78 */	b .L_80231A90
.L_80231A1C:
/* 80231A1C 0022EAFC  28 1F 00 00 */	cmplwi r31, 0x0
/* 80231A20 0022EB00  41 82 00 2C */	beq .L_80231A4C
/* 80231A24 0022EB04  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 80231A28 0022EB08  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 80231A2C 0022EB0C  80 1F 00 04 */	lwz r0, 0x4(r31)
/* 80231A30 0022EB10  90 64 01 34 */	stw r3, 0x134(r4)
/* 80231A34 0022EB14  90 04 01 38 */	stw r0, 0x138(r4)
/* 80231A38 0022EB18  80 7F 00 08 */	lwz r3, 0x8(r31)
/* 80231A3C 0022EB1C  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 80231A40 0022EB20  90 64 01 3C */	stw r3, 0x13c(r4)
/* 80231A44 0022EB24  90 04 01 40 */	stw r0, 0x140(r4)
/* 80231A48 0022EB28  48 00 00 44 */	b .L_80231A8C
.L_80231A4C:
/* 80231A4C 0022EB2C  3C 80 80 0D */	lis r4, malloc@ha
/* 80231A50 0022EB30  80 6D 9F 7C */	lwz r3, RwEngineInstance@sda21(r13)
/* 80231A54 0022EB34  38 04 37 48 */	addi r0, r4, malloc@l
/* 80231A58 0022EB38  3C A0 80 0D */	lis r5, free@ha
/* 80231A5C 0022EB3C  90 03 01 34 */	stw r0, 0x134(r3)
/* 80231A60 0022EB40  3C 80 80 1E */	lis r4, realloc@ha
/* 80231A64 0022EB44  3C 60 80 23 */	lis r3, FakeCalloc@ha
/* 80231A68 0022EB48  38 C5 37 94 */	addi r6, r5, free@l
/* 80231A6C 0022EB4C  80 AD 9F 7C */	lwz r5, RwEngineInstance@sda21(r13)
/* 80231A70 0022EB50  38 84 CF 08 */	addi r4, r4, realloc@l
/* 80231A74 0022EB54  38 03 19 3C */	addi r0, r3, FakeCalloc@l
/* 80231A78 0022EB58  90 C5 01 38 */	stw r6, 0x138(r5)
/* 80231A7C 0022EB5C  80 6D 9F 7C */	lwz r3, RwEngineInstance@sda21(r13)
/* 80231A80 0022EB60  90 83 01 3C */	stw r4, 0x13c(r3)
/* 80231A84 0022EB64  80 6D 9F 7C */	lwz r3, RwEngineInstance@sda21(r13)
/* 80231A88 0022EB68  90 03 01 40 */	stw r0, 0x140(r3)
.L_80231A8C:
/* 80231A8C 0022EB6C  38 60 00 01 */	li r3, 0x1
.L_80231A90:
/* 80231A90 0022EB70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80231A94 0022EB74  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80231A98 0022EB78  7C 08 03 A6 */	mtlr r0
/* 80231A9C 0022EB7C  38 21 00 10 */	addi r1, r1, 0x10
/* 80231AA0 0022EB80  4E 80 00 20 */	blr
.endfn _rwMemoryOpen

.fn _rwMemoryClose, global
/* 80231AA4 0022EB84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80231AA8 0022EB88  7C 08 02 A6 */	mflr r0
/* 80231AAC 0022EB8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80231AB0 0022EB90  38 0D 9F 40 */	addi r0, r13, _freeListList@sda21
/* 80231AB4 0022EB94  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80231AB8 0022EB98  80 6D 9F 40 */	lwz r3, _freeListList@sda21(r13)
/* 80231ABC 0022EB9C  48 00 00 B8 */	b .L_80231B74
.L_80231AC0:
/* 80231AC0 0022EBA0  3B E3 FF E4 */	addi r31, r3, -0x1c
/* 80231AC4 0022EBA4  80 03 00 00 */	lwz r0, 0x0(r3)
/* 80231AC8 0022EBA8  38 9F 00 10 */	addi r4, r31, 0x10
/* 80231ACC 0022EBAC  80 63 00 04 */	lwz r3, 0x4(r3)
/* 80231AD0 0022EBB0  90 03 00 00 */	stw r0, 0x0(r3)
/* 80231AD4 0022EBB4  80 1F 00 20 */	lwz r0, 0x20(r31)
/* 80231AD8 0022EBB8  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 80231ADC 0022EBBC  90 03 00 04 */	stw r0, 0x4(r3)
/* 80231AE0 0022EBC0  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 80231AE4 0022EBC4  48 00 00 34 */	b .L_80231B18
.L_80231AE8:
/* 80231AE8 0022EBC8  80 03 00 00 */	lwz r0, 0x0(r3)
/* 80231AEC 0022EBCC  80 83 00 04 */	lwz r4, 0x4(r3)
/* 80231AF0 0022EBD0  90 04 00 00 */	stw r0, 0x0(r4)
/* 80231AF4 0022EBD4  80 03 00 04 */	lwz r0, 0x4(r3)
/* 80231AF8 0022EBD8  80 83 00 00 */	lwz r4, 0x0(r3)
/* 80231AFC 0022EBDC  90 04 00 04 */	stw r0, 0x4(r4)
/* 80231B00 0022EBE0  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 80231B04 0022EBE4  81 84 01 38 */	lwz r12, 0x138(r4)
/* 80231B08 0022EBE8  7D 89 03 A6 */	mtctr r12
/* 80231B0C 0022EBEC  4E 80 04 21 */	bctrl
/* 80231B10 0022EBF0  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 80231B14 0022EBF4  38 9F 00 10 */	addi r4, r31, 0x10
.L_80231B18:
/* 80231B18 0022EBF8  7C 03 20 40 */	cmplw r3, r4
/* 80231B1C 0022EBFC  40 82 FF CC */	bne .L_80231AE8
/* 80231B20 0022EC00  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 80231B24 0022EC04  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80231B28 0022EC08  40 82 00 44 */	bne .L_80231B6C
/* 80231B2C 0022EC0C  80 6D 9F 3C */	lwz r3, _masterFreeListPtr@sda21(r13)
/* 80231B30 0022EC10  7C 03 F8 40 */	cmplw r3, r31
/* 80231B34 0022EC14  41 82 00 0C */	beq .L_80231B40
/* 80231B38 0022EC18  28 03 00 00 */	cmplwi r3, 0x0
/* 80231B3C 0022EC1C  40 82 00 1C */	bne .L_80231B58
.L_80231B40:
/* 80231B40 0022EC20  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 80231B44 0022EC24  7F E3 FB 78 */	mr r3, r31
/* 80231B48 0022EC28  81 84 01 38 */	lwz r12, 0x138(r4)
/* 80231B4C 0022EC2C  7D 89 03 A6 */	mtctr r12
/* 80231B50 0022EC30  4E 80 04 21 */	bctrl
/* 80231B54 0022EC34  48 00 00 18 */	b .L_80231B6C
.L_80231B58:
/* 80231B58 0022EC38  80 AD 9F 7C */	lwz r5, RwEngineInstance@sda21(r13)
/* 80231B5C 0022EC3C  7F E4 FB 78 */	mr r4, r31
/* 80231B60 0022EC40  81 85 01 48 */	lwz r12, 0x148(r5)
/* 80231B64 0022EC44  7D 89 03 A6 */	mtctr r12
/* 80231B68 0022EC48  4E 80 04 21 */	bctrl
.L_80231B6C:
/* 80231B6C 0022EC4C  80 6D 9F 40 */	lwz r3, _freeListList@sda21(r13)
/* 80231B70 0022EC50  38 0D 9F 40 */	addi r0, r13, _freeListList@sda21
.L_80231B74:
/* 80231B74 0022EC54  7C 03 00 40 */	cmplw r3, r0
/* 80231B78 0022EC58  40 82 FF 48 */	bne .L_80231AC0
/* 80231B7C 0022EC5C  83 ED 9F 3C */	lwz r31, _masterFreeListPtr@sda21(r13)
/* 80231B80 0022EC60  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 80231B84 0022EC64  38 9F 00 10 */	addi r4, r31, 0x10
/* 80231B88 0022EC68  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 80231B8C 0022EC6C  90 03 00 00 */	stw r0, 0x0(r3)
/* 80231B90 0022EC70  80 1F 00 20 */	lwz r0, 0x20(r31)
/* 80231B94 0022EC74  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 80231B98 0022EC78  90 03 00 04 */	stw r0, 0x4(r3)
/* 80231B9C 0022EC7C  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 80231BA0 0022EC80  48 00 00 34 */	b .L_80231BD4
.L_80231BA4:
/* 80231BA4 0022EC84  80 03 00 00 */	lwz r0, 0x0(r3)
/* 80231BA8 0022EC88  80 83 00 04 */	lwz r4, 0x4(r3)
/* 80231BAC 0022EC8C  90 04 00 00 */	stw r0, 0x0(r4)
/* 80231BB0 0022EC90  80 03 00 04 */	lwz r0, 0x4(r3)
/* 80231BB4 0022EC94  80 83 00 00 */	lwz r4, 0x0(r3)
/* 80231BB8 0022EC98  90 04 00 04 */	stw r0, 0x4(r4)
/* 80231BBC 0022EC9C  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 80231BC0 0022ECA0  81 84 01 38 */	lwz r12, 0x138(r4)
/* 80231BC4 0022ECA4  7D 89 03 A6 */	mtctr r12
/* 80231BC8 0022ECA8  4E 80 04 21 */	bctrl
/* 80231BCC 0022ECAC  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 80231BD0 0022ECB0  38 9F 00 10 */	addi r4, r31, 0x10
.L_80231BD4:
/* 80231BD4 0022ECB4  7C 03 20 40 */	cmplw r3, r4
/* 80231BD8 0022ECB8  40 82 FF CC */	bne .L_80231BA4
/* 80231BDC 0022ECBC  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 80231BE0 0022ECC0  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80231BE4 0022ECC4  40 82 00 44 */	bne .L_80231C28
/* 80231BE8 0022ECC8  80 6D 9F 3C */	lwz r3, _masterFreeListPtr@sda21(r13)
/* 80231BEC 0022ECCC  7C 03 F8 40 */	cmplw r3, r31
/* 80231BF0 0022ECD0  41 82 00 0C */	beq .L_80231BFC
/* 80231BF4 0022ECD4  28 03 00 00 */	cmplwi r3, 0x0
/* 80231BF8 0022ECD8  40 82 00 1C */	bne .L_80231C14
.L_80231BFC:
/* 80231BFC 0022ECDC  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 80231C00 0022ECE0  7F E3 FB 78 */	mr r3, r31
/* 80231C04 0022ECE4  81 84 01 38 */	lwz r12, 0x138(r4)
/* 80231C08 0022ECE8  7D 89 03 A6 */	mtctr r12
/* 80231C0C 0022ECEC  4E 80 04 21 */	bctrl
/* 80231C10 0022ECF0  48 00 00 18 */	b .L_80231C28
.L_80231C14:
/* 80231C14 0022ECF4  80 AD 9F 7C */	lwz r5, RwEngineInstance@sda21(r13)
/* 80231C18 0022ECF8  7F E4 FB 78 */	mr r4, r31
/* 80231C1C 0022ECFC  81 85 01 48 */	lwz r12, 0x148(r5)
/* 80231C20 0022ED00  7D 89 03 A6 */	mtctr r12
/* 80231C24 0022ED04  4E 80 04 21 */	bctrl
.L_80231C28:
/* 80231C28 0022ED08  38 00 00 00 */	li r0, 0x0
/* 80231C2C 0022ED0C  90 0D 9F 3C */	stw r0, _masterFreeListPtr@sda21(r13)
/* 80231C30 0022ED10  90 0D 9F 38 */	stw r0, _freeListModuleOpen@sda21(r13)
/* 80231C34 0022ED14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80231C38 0022ED18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80231C3C 0022ED1C  7C 08 03 A6 */	mtlr r0
/* 80231C40 0022ED20  38 21 00 10 */	addi r1, r1, 0x10
/* 80231C44 0022ED24  4E 80 00 20 */	blr
.endfn _rwMemoryClose

# 0x80383D08 - 0x80383D30
.section .bss, "wa", @nobits
.balign 8

.obj _masterFreeList, local
	.skip 0x24
.endobj _masterFreeList
	.skip 0x4

# 0x803CB0A0 - 0x803CB0A8
.section .sdata, "wa"
.balign 8

.obj FreeListsEnabled, local
	.4byte 0x00000001
.endobj FreeListsEnabled
	.4byte 0x00000000

# 0x803CC838 - 0x803CC848
.section .sbss, "wa", @nobits
.balign 8

.obj _freeListModuleOpen, local
	.skip 0x4
.endobj _freeListModuleOpen

.obj _masterFreeListPtr, local
	.skip 0x4
.endobj _masterFreeListPtr

.obj _freeListList, local
	.skip 0x8
.endobj _freeListList