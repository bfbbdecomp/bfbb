.include "macros.inc"
.file "iMemMgr.cpp"

# 0x800C6360 - 0x800C64A8
.text
.balign 4

# iMemInit()
.fn iMemInit__Fv, global
/* 800C6360 000C3440  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C6364 000C3444  7C 08 02 A6 */	mflr r0
/* 800C6368 000C3448  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C636C 000C344C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800C6370 000C3450  48 10 BC F5 */	bl OSGetArenaHi
/* 800C6374 000C3454  54 7F 00 34 */	clrrwi r31, r3, 5
/* 800C6378 000C3458  93 ED 92 20 */	stw r31, he@sda21(r13)
/* 800C637C 000C345C  48 10 BC F1 */	bl OSGetArenaLo
/* 800C6380 000C3460  38 03 00 1F */	addi r0, r3, 0x1f
/* 800C6384 000C3464  7F E4 FB 78 */	mr r4, r31
/* 800C6388 000C3468  54 03 00 34 */	clrrwi r3, r0, 5
/* 800C638C 000C346C  38 A0 00 01 */	li r5, 0x1
/* 800C6390 000C3470  90 6D 92 1C */	stw r3, hs@sda21(r13)
/* 800C6394 000C3474  48 10 BB F5 */	bl OSInitAlloc
/* 800C6398 000C3478  80 8D 92 20 */	lwz r4, he@sda21(r13)
/* 800C639C 000C347C  48 10 BC 5D */	bl OSCreateHeap
/* 800C63A0 000C3480  90 6D 92 18 */	stw r3, the_heap@sda21(r13)
/* 800C63A4 000C3484  80 6D 92 18 */	lwz r3, the_heap@sda21(r13)
/* 800C63A8 000C3488  2C 03 00 00 */	cmpwi r3, 0x0
/* 800C63AC 000C348C  41 80 00 0C */	blt .L_800C63B8
/* 800C63B0 000C3490  48 10 BB C9 */	bl OSSetCurrentHeap
/* 800C63B4 000C3494  48 00 00 0C */	b .L_800C63C0
.L_800C63B8:
/* 800C63B8 000C3498  38 60 FF FB */	li r3, -0x5
/* 800C63BC 000C349C  48 11 69 C1 */	bl exit
.L_800C63C0:
/* 800C63C0 000C34A0  3C A0 80 3E */	lis r5, _stack_addr@ha
/* 800C63C4 000C34A4  3C 80 80 3D */	lis r4, _stack_end@ha
/* 800C63C8 000C34A8  3C E0 80 39 */	lis r7, gMemInfo@ha
/* 800C63CC 000C34AC  39 40 00 00 */	li r10, 0x0
/* 800C63D0 000C34B0  39 27 C3 20 */	addi r9, r7, gMemInfo@l
/* 800C63D4 000C34B4  38 C5 8A 50 */	addi r6, r5, _stack_addr@l
/* 800C63D8 000C34B8  38 04 0A 50 */	addi r0, r4, _stack_end@l
/* 800C63DC 000C34BC  3D 00 00 10 */	lis r8, 0x10
/* 800C63E0 000C34C0  7C A6 00 50 */	subf r5, r6, r0
/* 800C63E4 000C34C4  38 E0 00 20 */	li r7, 0x20
/* 800C63E8 000C34C8  38 00 08 20 */	li r0, 0x820
/* 800C63EC 000C34CC  3C 60 00 38 */	lis r3, 0x38
/* 800C63F0 000C34D0  91 49 00 00 */	stw r10, 0x0(r9)
/* 800C63F4 000C34D4  38 83 40 00 */	addi r4, r3, 0x4000
/* 800C63F8 000C34D8  91 09 00 04 */	stw r8, 0x4(r9)
/* 800C63FC 000C34DC  90 E9 00 08 */	stw r7, 0x8(r9)
/* 800C6400 000C34E0  90 C9 00 0C */	stw r6, 0xc(r9)
/* 800C6404 000C34E4  90 A9 00 10 */	stw r5, 0x10(r9)
/* 800C6408 000C34E8  90 09 00 14 */	stw r0, 0x14(r9)
/* 800C640C 000C34EC  90 8D 92 24 */	stw r4, HeapSize@sda21(r13)
/* 800C6410 000C34F0  80 6D 86 40 */	lwz r3, __OSCurrHeap@sda21(r13)
/* 800C6414 000C34F4  48 10 B9 ED */	bl OSAllocFromHeap
/* 800C6418 000C34F8  90 6D 92 14 */	stw r3, mem_base_alloc@sda21(r13)
/* 800C641C 000C34FC  3C 80 80 39 */	lis r4, gMemInfo@ha
/* 800C6420 000C3500  38 E4 C3 20 */	addi r7, r4, gMemInfo@l
/* 800C6424 000C3504  38 C0 08 20 */	li r6, 0x820
/* 800C6428 000C3508  81 2D 92 24 */	lwz r9, HeapSize@sda21(r13)
/* 800C642C 000C350C  38 A0 00 00 */	li r5, 0x0
/* 800C6430 000C3510  3C 80 00 20 */	lis r4, 0x20
/* 800C6434 000C3514  38 00 06 60 */	li r0, 0x660
/* 800C6438 000C3518  7D 03 4A 14 */	add r8, r3, r9
/* 800C643C 000C351C  91 0D 92 10 */	stw r8, mem_top_alloc@sda21(r13)
/* 800C6440 000C3520  90 67 00 18 */	stw r3, 0x18(r7)
/* 800C6444 000C3524  91 27 00 1C */	stw r9, 0x1c(r7)
/* 800C6448 000C3528  90 C7 00 20 */	stw r6, 0x20(r7)
/* 800C644C 000C352C  90 A7 00 24 */	stw r5, 0x24(r7)
/* 800C6450 000C3530  90 87 00 28 */	stw r4, 0x28(r7)
/* 800C6454 000C3534  90 07 00 2C */	stw r0, 0x2c(r7)
/* 800C6458 000C3538  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800C645C 000C353C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C6460 000C3540  7C 08 03 A6 */	mtlr r0
/* 800C6464 000C3544  38 21 00 10 */	addi r1, r1, 0x10
/* 800C6468 000C3548  4E 80 00 20 */	blr
.endfn iMemInit__Fv

# iMemExit()
.fn iMemExit__Fv, global
/* 800C646C 000C354C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C6470 000C3550  7C 08 02 A6 */	mflr r0
/* 800C6474 000C3554  3C 60 80 39 */	lis r3, gMemInfo@ha
/* 800C6478 000C3558  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C647C 000C355C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800C6480 000C3560  3B E3 C3 20 */	addi r31, r3, gMemInfo@l
/* 800C6484 000C3564  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 800C6488 000C3568  48 00 D3 0D */	bl free
/* 800C648C 000C356C  38 00 00 00 */	li r0, 0x0
/* 800C6490 000C3570  90 1F 00 18 */	stw r0, 0x18(r31)
/* 800C6494 000C3574  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C6498 000C3578  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800C649C 000C357C  7C 08 03 A6 */	mtlr r0
/* 800C64A0 000C3580  38 21 00 10 */	addi r1, r1, 0x10
/* 800C64A4 000C3584  4E 80 00 20 */	blr
.endfn iMemExit__Fv

# 0x803CBB10 - 0x803CBB28
.section .sbss, "wa", @nobits
.balign 8

.obj mem_top_alloc, global
	.skip 0x4
.endobj mem_top_alloc

.obj mem_base_alloc, global
	.skip 0x4
.endobj mem_base_alloc

.obj the_heap, global
	.skip 0x4
.endobj the_heap

.obj hs, global
	.skip 0x4
.endobj hs

.obj he, global
	.skip 0x4
.endobj he

.obj HeapSize, global
	.skip 0x4
.endobj HeapSize
