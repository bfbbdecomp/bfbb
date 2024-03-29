.include "macros.inc"
.file "bastream.c"

# 0x8023249C - 0x80232E78
.text
.balign 4

.fn _rwStreamModuleOpen, global
/* 8023249C 0022F57C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802324A0 0022F580  7C 08 02 A6 */	mflr r0
/* 802324A4 0022F584  38 A0 00 04 */	li r5, 0x4
/* 802324A8 0022F588  90 01 00 14 */	stw r0, 0x14(r1)
/* 802324AC 0022F58C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802324B0 0022F590  7C 7F 1B 78 */	mr r31, r3
/* 802324B4 0022F594  38 60 00 24 */	li r3, 0x24
/* 802324B8 0022F598  90 8D 9F 50 */	stw r4, streamModule@sda21(r13)
/* 802324BC 0022F59C  3C 80 80 38 */	lis r4, _rwStreamFreeList@ha
/* 802324C0 0022F5A0  38 E4 3D 30 */	addi r7, r4, _rwStreamFreeList@l
/* 802324C4 0022F5A4  80 8D 87 A8 */	lwz r4, _rwStreamFreeListBlockSize@sda21(r13)
/* 802324C8 0022F5A8  80 CD 87 AC */	lwz r6, _rwStreamFreeListPreallocBlocks@sda21(r13)
/* 802324CC 0022F5AC  4B FF EE 3D */	bl RwFreeListCreateAndPreallocateSpace
/* 802324D0 0022F5B0  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 802324D4 0022F5B4  80 0D 9F 50 */	lwz r0, streamModule@sda21(r13)
/* 802324D8 0022F5B8  7C 64 01 2E */	stwx r3, r4, r0
/* 802324DC 0022F5BC  80 6D 9F 7C */	lwz r3, RwEngineInstance@sda21(r13)
/* 802324E0 0022F5C0  80 0D 9F 50 */	lwz r0, streamModule@sda21(r13)
/* 802324E4 0022F5C4  7C 03 00 2E */	lwzx r0, r3, r0
/* 802324E8 0022F5C8  28 00 00 00 */	cmplwi r0, 0x0
/* 802324EC 0022F5CC  40 82 00 0C */	bne .L_802324F8
/* 802324F0 0022F5D0  38 60 00 00 */	li r3, 0x0
/* 802324F4 0022F5D4  48 00 00 18 */	b .L_8023250C
.L_802324F8:
/* 802324F8 0022F5D8  38 AD 9F 50 */	addi r5, r13, streamModule@sda21
/* 802324FC 0022F5DC  7F E3 FB 78 */	mr r3, r31
/* 80232500 0022F5E0  80 85 00 04 */	lwz r4, 0x4(r5)
/* 80232504 0022F5E4  38 04 00 01 */	addi r0, r4, 0x1
/* 80232508 0022F5E8  90 05 00 04 */	stw r0, 0x4(r5)
.L_8023250C:
/* 8023250C 0022F5EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80232510 0022F5F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80232514 0022F5F4  7C 08 03 A6 */	mtlr r0
/* 80232518 0022F5F8  38 21 00 10 */	addi r1, r1, 0x10
/* 8023251C 0022F5FC  4E 80 00 20 */	blr
.endfn _rwStreamModuleOpen

.fn _rwStreamModuleClose, global
/* 80232520 0022F600  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80232524 0022F604  7C 08 02 A6 */	mflr r0
/* 80232528 0022F608  90 01 00 14 */	stw r0, 0x14(r1)
/* 8023252C 0022F60C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80232530 0022F610  7C 7F 1B 78 */	mr r31, r3
/* 80232534 0022F614  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 80232538 0022F618  80 0D 9F 50 */	lwz r0, streamModule@sda21(r13)
/* 8023253C 0022F61C  7C 64 00 2E */	lwzx r3, r4, r0
/* 80232540 0022F620  28 03 00 00 */	cmplwi r3, 0x0
/* 80232544 0022F624  41 82 00 08 */	beq .L_8023254C
/* 80232548 0022F628  4B FF EE 99 */	bl RwFreeListDestroy
.L_8023254C:
/* 8023254C 0022F62C  38 AD 9F 50 */	addi r5, r13, streamModule@sda21
/* 80232550 0022F630  7F E3 FB 78 */	mr r3, r31
/* 80232554 0022F634  80 85 00 04 */	lwz r4, 0x4(r5)
/* 80232558 0022F638  38 04 FF FF */	addi r0, r4, -0x1
/* 8023255C 0022F63C  90 05 00 04 */	stw r0, 0x4(r5)
/* 80232560 0022F640  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80232564 0022F644  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80232568 0022F648  7C 08 03 A6 */	mtlr r0
/* 8023256C 0022F64C  38 21 00 10 */	addi r1, r1, 0x10
/* 80232570 0022F650  4E 80 00 20 */	blr
.endfn _rwStreamModuleClose

.fn RwStreamRead, global
/* 80232574 0022F654  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80232578 0022F658  7C 08 02 A6 */	mflr r0
/* 8023257C 0022F65C  90 01 00 44 */	stw r0, 0x44(r1)
/* 80232580 0022F660  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80232584 0022F664  7C 7F 1B 78 */	mr r31, r3
/* 80232588 0022F668  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8023258C 0022F66C  7C 9E 23 78 */	mr r30, r4
/* 80232590 0022F670  93 A1 00 34 */	stw r29, 0x34(r1)
/* 80232594 0022F674  7C BD 2B 78 */	mr r29, r5
/* 80232598 0022F678  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8023259C 0022F67C  2C 00 00 03 */	cmpwi r0, 0x3
/* 802325A0 0022F680  41 82 00 B8 */	beq .L_80232658
/* 802325A4 0022F684  40 80 00 10 */	bge .L_802325B4
/* 802325A8 0022F688  2C 00 00 01 */	cmpwi r0, 0x1
/* 802325AC 0022F68C  40 80 00 14 */	bge .L_802325C0
/* 802325B0 0022F690  48 00 01 20 */	b .L_802326D0
.L_802325B4:
/* 802325B4 0022F694  2C 00 00 05 */	cmpwi r0, 0x5
/* 802325B8 0022F698  40 80 01 18 */	bge .L_802326D0
/* 802325BC 0022F69C  48 00 01 00 */	b .L_802326BC
.L_802325C0:
/* 802325C0 0022F6A0  80 CD 9F 7C */	lwz r6, RwEngineInstance@sda21(r13)
/* 802325C4 0022F6A4  7F C3 F3 78 */	mr r3, r30
/* 802325C8 0022F6A8  83 FF 00 0C */	lwz r31, 0xc(r31)
/* 802325CC 0022F6AC  38 80 00 01 */	li r4, 0x1
/* 802325D0 0022F6B0  81 86 00 D0 */	lwz r12, 0xd0(r6)
/* 802325D4 0022F6B4  7F E6 FB 78 */	mr r6, r31
/* 802325D8 0022F6B8  7D 89 03 A6 */	mtctr r12
/* 802325DC 0022F6BC  4E 80 04 21 */	bctrl
/* 802325E0 0022F6C0  7C 7E 1B 78 */	mr r30, r3
/* 802325E4 0022F6C4  7C 1E E8 40 */	cmplw r30, r29
/* 802325E8 0022F6C8  41 82 00 68 */	beq .L_80232650
/* 802325EC 0022F6CC  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 802325F0 0022F6D0  7F E3 FB 78 */	mr r3, r31
/* 802325F4 0022F6D4  81 84 00 E0 */	lwz r12, 0xe0(r4)
/* 802325F8 0022F6D8  7D 89 03 A6 */	mtctr r12
/* 802325FC 0022F6DC  4E 80 04 21 */	bctrl
/* 80232600 0022F6E0  2C 03 00 00 */	cmpwi r3, 0x0
/* 80232604 0022F6E4  41 82 00 28 */	beq .L_8023262C
/* 80232608 0022F6E8  38 00 00 01 */	li r0, 0x1
/* 8023260C 0022F6EC  38 60 00 05 */	li r3, 0x5
/* 80232610 0022F6F0  90 01 00 20 */	stw r0, 0x20(r1)
/* 80232614 0022F6F4  4C C6 31 82 */	crclr 4*cr1+eq
/* 80232618 0022F6F8  4B FF D0 1D */	bl _rwerror
/* 8023261C 0022F6FC  90 61 00 24 */	stw r3, 0x24(r1)
/* 80232620 0022F700  38 61 00 20 */	addi r3, r1, 0x20
/* 80232624 0022F704  4B FF CF 6D */	bl RwErrorSet
/* 80232628 0022F708  48 00 00 28 */	b .L_80232650
.L_8023262C:
/* 8023262C 0022F70C  38 00 00 01 */	li r0, 0x1
/* 80232630 0022F710  3C 60 80 00 */	lis r3, 0x8000
/* 80232634 0022F714  90 01 00 18 */	stw r0, 0x18(r1)
/* 80232638 0022F718  38 63 00 1A */	addi r3, r3, 0x1a
/* 8023263C 0022F71C  4C C6 31 82 */	crclr 4*cr1+eq
/* 80232640 0022F720  4B FF CF F5 */	bl _rwerror
/* 80232644 0022F724  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80232648 0022F728  38 61 00 18 */	addi r3, r1, 0x18
/* 8023264C 0022F72C  4B FF CF 45 */	bl RwErrorSet
.L_80232650:
/* 80232650 0022F730  7F C3 F3 78 */	mr r3, r30
/* 80232654 0022F734  48 00 00 A0 */	b .L_802326F4
.L_80232658:
/* 80232658 0022F738  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8023265C 0022F73C  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 80232660 0022F740  7C 63 00 50 */	subf r3, r3, r0
/* 80232664 0022F744  7C 1D 18 40 */	cmplw r29, r3
/* 80232668 0022F748  40 81 00 28 */	ble .L_80232690
/* 8023266C 0022F74C  38 00 00 01 */	li r0, 0x1
/* 80232670 0022F750  7C 7D 1B 78 */	mr r29, r3
/* 80232674 0022F754  90 01 00 10 */	stw r0, 0x10(r1)
/* 80232678 0022F758  38 60 00 05 */	li r3, 0x5
/* 8023267C 0022F75C  4C C6 31 82 */	crclr 4*cr1+eq
/* 80232680 0022F760  4B FF CF B5 */	bl _rwerror
/* 80232684 0022F764  90 61 00 14 */	stw r3, 0x14(r1)
/* 80232688 0022F768  38 61 00 10 */	addi r3, r1, 0x10
/* 8023268C 0022F76C  4B FF CF 05 */	bl RwErrorSet
.L_80232690:
/* 80232690 0022F770  80 9F 00 14 */	lwz r4, 0x14(r31)
/* 80232694 0022F774  7F C3 F3 78 */	mr r3, r30
/* 80232698 0022F778  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 8023269C 0022F77C  7F A5 EB 78 */	mr r5, r29
/* 802326A0 0022F780  7C 84 02 14 */	add r4, r4, r0
/* 802326A4 0022F784  4B DD 0E 9D */	bl memcpy
/* 802326A8 0022F788  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 802326AC 0022F78C  7F A3 EB 78 */	mr r3, r29
/* 802326B0 0022F790  7C 00 EA 14 */	add r0, r0, r29
/* 802326B4 0022F794  90 1F 00 0C */	stw r0, 0xc(r31)
/* 802326B8 0022F798  48 00 00 3C */	b .L_802326F4
.L_802326BC:
/* 802326BC 0022F79C  81 9F 00 10 */	lwz r12, 0x10(r31)
/* 802326C0 0022F7A0  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 802326C4 0022F7A4  7D 89 03 A6 */	mtctr r12
/* 802326C8 0022F7A8  4E 80 04 21 */	bctrl
/* 802326CC 0022F7AC  48 00 00 28 */	b .L_802326F4
.L_802326D0:
/* 802326D0 0022F7B0  38 00 00 01 */	li r0, 0x1
/* 802326D4 0022F7B4  38 60 00 0E */	li r3, 0xe
/* 802326D8 0022F7B8  90 01 00 08 */	stw r0, 0x8(r1)
/* 802326DC 0022F7BC  4C C6 31 82 */	crclr 4*cr1+eq
/* 802326E0 0022F7C0  4B FF CF 55 */	bl _rwerror
/* 802326E4 0022F7C4  90 61 00 0C */	stw r3, 0xc(r1)
/* 802326E8 0022F7C8  38 61 00 08 */	addi r3, r1, 0x8
/* 802326EC 0022F7CC  4B FF CE A5 */	bl RwErrorSet
/* 802326F0 0022F7D0  38 60 00 00 */	li r3, 0x0
.L_802326F4:
/* 802326F4 0022F7D4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802326F8 0022F7D8  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802326FC 0022F7DC  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80232700 0022F7E0  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 80232704 0022F7E4  7C 08 03 A6 */	mtlr r0
/* 80232708 0022F7E8  38 21 00 40 */	addi r1, r1, 0x40
/* 8023270C 0022F7EC  4E 80 00 20 */	blr
.endfn RwStreamRead

.fn RwStreamWrite, global
/* 80232710 0022F7F0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80232714 0022F7F4  7C 08 02 A6 */	mflr r0
/* 80232718 0022F7F8  90 01 00 44 */	stw r0, 0x44(r1)
/* 8023271C 0022F7FC  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80232720 0022F800  7C 7F 1B 78 */	mr r31, r3
/* 80232724 0022F804  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80232728 0022F808  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8023272C 0022F80C  7C BD 2B 78 */	mr r29, r5
/* 80232730 0022F810  93 81 00 30 */	stw r28, 0x30(r1)
/* 80232734 0022F814  7C 9C 23 78 */	mr r28, r4
/* 80232738 0022F818  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8023273C 0022F81C  2C 00 00 03 */	cmpwi r0, 0x3
/* 80232740 0022F820  41 82 00 78 */	beq .L_802327B8
/* 80232744 0022F824  40 80 00 10 */	bge .L_80232754
/* 80232748 0022F828  2C 00 00 01 */	cmpwi r0, 0x1
/* 8023274C 0022F82C  40 80 00 14 */	bge .L_80232760
/* 80232750 0022F830  48 00 01 A4 */	b .L_802328F4
.L_80232754:
/* 80232754 0022F834  2C 00 00 05 */	cmpwi r0, 0x5
/* 80232758 0022F838  40 80 01 9C */	bge .L_802328F4
/* 8023275C 0022F83C  48 00 01 70 */	b .L_802328CC
.L_80232760:
/* 80232760 0022F840  80 ED 9F 7C */	lwz r7, RwEngineInstance@sda21(r13)
/* 80232764 0022F844  7F 83 E3 78 */	mr r3, r28
/* 80232768 0022F848  80 DF 00 0C */	lwz r6, 0xc(r31)
/* 8023276C 0022F84C  38 80 00 01 */	li r4, 0x1
/* 80232770 0022F850  81 87 00 D4 */	lwz r12, 0xd4(r7)
/* 80232774 0022F854  7D 89 03 A6 */	mtctr r12
/* 80232778 0022F858  4E 80 04 21 */	bctrl
/* 8023277C 0022F85C  7C 03 E8 40 */	cmplw r3, r29
/* 80232780 0022F860  41 82 00 30 */	beq .L_802327B0
/* 80232784 0022F864  38 00 00 01 */	li r0, 0x1
/* 80232788 0022F868  3C 60 80 00 */	lis r3, 0x8000
/* 8023278C 0022F86C  90 01 00 20 */	stw r0, 0x20(r1)
/* 80232790 0022F870  38 63 00 1C */	addi r3, r3, 0x1c
/* 80232794 0022F874  4C C6 31 82 */	crclr 4*cr1+eq
/* 80232798 0022F878  4B FF CE 9D */	bl _rwerror
/* 8023279C 0022F87C  90 61 00 24 */	stw r3, 0x24(r1)
/* 802327A0 0022F880  38 61 00 20 */	addi r3, r1, 0x20
/* 802327A4 0022F884  4B FF CD ED */	bl RwErrorSet
/* 802327A8 0022F888  38 60 00 00 */	li r3, 0x0
/* 802327AC 0022F88C  48 00 01 6C */	b .L_80232918
.L_802327B0:
/* 802327B0 0022F890  7F E3 FB 78 */	mr r3, r31
/* 802327B4 0022F894  48 00 01 64 */	b .L_80232918
.L_802327B8:
/* 802327B8 0022F898  80 1F 00 14 */	lwz r0, 0x14(r31)
/* 802327BC 0022F89C  28 00 00 00 */	cmplwi r0, 0x0
/* 802327C0 0022F8A0  40 82 00 60 */	bne .L_80232820
/* 802327C4 0022F8A4  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 802327C8 0022F8A8  38 60 02 00 */	li r3, 0x200
/* 802327CC 0022F8AC  81 84 01 34 */	lwz r12, 0x134(r4)
/* 802327D0 0022F8B0  7D 89 03 A6 */	mtctr r12
/* 802327D4 0022F8B4  4E 80 04 21 */	bctrl
/* 802327D8 0022F8B8  90 7F 00 14 */	stw r3, 0x14(r31)
/* 802327DC 0022F8BC  80 1F 00 14 */	lwz r0, 0x14(r31)
/* 802327E0 0022F8C0  28 00 00 00 */	cmplwi r0, 0x0
/* 802327E4 0022F8C4  40 82 00 34 */	bne .L_80232818
/* 802327E8 0022F8C8  38 00 00 01 */	li r0, 0x1
/* 802327EC 0022F8CC  3C 60 80 00 */	lis r3, 0x8000
/* 802327F0 0022F8D0  90 01 00 18 */	stw r0, 0x18(r1)
/* 802327F4 0022F8D4  38 63 00 13 */	addi r3, r3, 0x13
/* 802327F8 0022F8D8  38 80 02 00 */	li r4, 0x200
/* 802327FC 0022F8DC  4C C6 31 82 */	crclr 4*cr1+eq
/* 80232800 0022F8E0  4B FF CE 35 */	bl _rwerror
/* 80232804 0022F8E4  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80232808 0022F8E8  38 61 00 18 */	addi r3, r1, 0x18
/* 8023280C 0022F8EC  4B FF CD 85 */	bl RwErrorSet
/* 80232810 0022F8F0  38 60 00 00 */	li r3, 0x0
/* 80232814 0022F8F4  48 00 01 04 */	b .L_80232918
.L_80232818:
/* 80232818 0022F8F8  38 00 02 00 */	li r0, 0x200
/* 8023281C 0022F8FC  90 1F 00 10 */	stw r0, 0x10(r31)
.L_80232820:
/* 80232820 0022F900  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 80232824 0022F904  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 80232828 0022F908  7C 00 18 50 */	subf r0, r0, r3
/* 8023282C 0022F90C  7C 00 E8 40 */	cmplw r0, r29
/* 80232830 0022F910  40 80 00 70 */	bge .L_802328A0
/* 80232834 0022F914  28 1D 02 00 */	cmplwi r29, 0x200
/* 80232838 0022F918  7F DD 1A 14 */	add r30, r29, r3
/* 8023283C 0022F91C  40 80 00 08 */	bge .L_80232844
/* 80232840 0022F920  3B C3 02 00 */	addi r30, r3, 0x200
.L_80232844:
/* 80232844 0022F924  80 AD 9F 7C */	lwz r5, RwEngineInstance@sda21(r13)
/* 80232848 0022F928  7F C4 F3 78 */	mr r4, r30
/* 8023284C 0022F92C  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 80232850 0022F930  81 85 01 3C */	lwz r12, 0x13c(r5)
/* 80232854 0022F934  7D 89 03 A6 */	mtctr r12
/* 80232858 0022F938  4E 80 04 21 */	bctrl
/* 8023285C 0022F93C  28 03 00 00 */	cmplwi r3, 0x0
/* 80232860 0022F940  40 82 00 38 */	bne .L_80232898
/* 80232864 0022F944  38 00 00 01 */	li r0, 0x1
/* 80232868 0022F948  3C 60 80 00 */	lis r3, 0x8000
/* 8023286C 0022F94C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80232870 0022F950  38 63 00 13 */	addi r3, r3, 0x13
/* 80232874 0022F954  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 80232878 0022F958  7C 80 F0 50 */	subf r4, r0, r30
/* 8023287C 0022F95C  4C C6 31 82 */	crclr 4*cr1+eq
/* 80232880 0022F960  4B FF CD B5 */	bl _rwerror
/* 80232884 0022F964  90 61 00 14 */	stw r3, 0x14(r1)
/* 80232888 0022F968  38 61 00 10 */	addi r3, r1, 0x10
/* 8023288C 0022F96C  4B FF CD 05 */	bl RwErrorSet
/* 80232890 0022F970  38 60 00 00 */	li r3, 0x0
/* 80232894 0022F974  48 00 00 84 */	b .L_80232918
.L_80232898:
/* 80232898 0022F978  90 7F 00 14 */	stw r3, 0x14(r31)
/* 8023289C 0022F97C  93 DF 00 10 */	stw r30, 0x10(r31)
.L_802328A0:
/* 802328A0 0022F980  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 802328A4 0022F984  7F 84 E3 78 */	mr r4, r28
/* 802328A8 0022F988  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 802328AC 0022F98C  7F A5 EB 78 */	mr r5, r29
/* 802328B0 0022F990  7C 63 02 14 */	add r3, r3, r0
/* 802328B4 0022F994  4B DD 0C 8D */	bl memcpy
/* 802328B8 0022F998  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 802328BC 0022F99C  7F E3 FB 78 */	mr r3, r31
/* 802328C0 0022F9A0  7C 00 EA 14 */	add r0, r0, r29
/* 802328C4 0022F9A4  90 1F 00 0C */	stw r0, 0xc(r31)
/* 802328C8 0022F9A8  48 00 00 50 */	b .L_80232918
.L_802328CC:
/* 802328CC 0022F9AC  81 9F 00 14 */	lwz r12, 0x14(r31)
/* 802328D0 0022F9B0  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 802328D4 0022F9B4  7D 89 03 A6 */	mtctr r12
/* 802328D8 0022F9B8  4E 80 04 21 */	bctrl
/* 802328DC 0022F9BC  2C 03 00 00 */	cmpwi r3, 0x0
/* 802328E0 0022F9C0  41 82 00 0C */	beq .L_802328EC
/* 802328E4 0022F9C4  7F E3 FB 78 */	mr r3, r31
/* 802328E8 0022F9C8  48 00 00 30 */	b .L_80232918
.L_802328EC:
/* 802328EC 0022F9CC  38 60 00 00 */	li r3, 0x0
/* 802328F0 0022F9D0  48 00 00 28 */	b .L_80232918
.L_802328F4:
/* 802328F4 0022F9D4  38 00 00 01 */	li r0, 0x1
/* 802328F8 0022F9D8  38 60 00 0E */	li r3, 0xe
/* 802328FC 0022F9DC  90 01 00 08 */	stw r0, 0x8(r1)
/* 80232900 0022F9E0  4C C6 31 82 */	crclr 4*cr1+eq
/* 80232904 0022F9E4  4B FF CD 31 */	bl _rwerror
/* 80232908 0022F9E8  90 61 00 0C */	stw r3, 0xc(r1)
/* 8023290C 0022F9EC  38 61 00 08 */	addi r3, r1, 0x8
/* 80232910 0022F9F0  4B FF CC 81 */	bl RwErrorSet
/* 80232914 0022F9F4  38 60 00 00 */	li r3, 0x0
.L_80232918:
/* 80232918 0022F9F8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8023291C 0022F9FC  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80232920 0022FA00  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80232924 0022FA04  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 80232928 0022FA08  83 81 00 30 */	lwz r28, 0x30(r1)
/* 8023292C 0022FA0C  7C 08 03 A6 */	mtlr r0
/* 80232930 0022FA10  38 21 00 40 */	addi r1, r1, 0x40
/* 80232934 0022FA14  4E 80 00 20 */	blr
.endfn RwStreamWrite

.fn RwStreamSkip, global
/* 80232938 0022FA18  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8023293C 0022FA1C  7C 08 02 A6 */	mflr r0
/* 80232940 0022FA20  28 04 00 00 */	cmplwi r4, 0x0
/* 80232944 0022FA24  90 01 00 34 */	stw r0, 0x34(r1)
/* 80232948 0022FA28  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8023294C 0022FA2C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80232950 0022FA30  7C 7E 1B 78 */	mr r30, r3
/* 80232954 0022FA34  40 82 00 08 */	bne .L_8023295C
/* 80232958 0022FA38  48 00 01 30 */	b .L_80232A88
.L_8023295C:
/* 8023295C 0022FA3C  80 1E 00 00 */	lwz r0, 0x0(r30)
/* 80232960 0022FA40  2C 00 00 03 */	cmpwi r0, 0x3
/* 80232964 0022FA44  41 82 00 90 */	beq .L_802329F4
/* 80232968 0022FA48  40 80 00 10 */	bge .L_80232978
/* 8023296C 0022FA4C  2C 00 00 01 */	cmpwi r0, 0x1
/* 80232970 0022FA50  40 80 00 14 */	bge .L_80232984
/* 80232974 0022FA54  48 00 00 F0 */	b .L_80232A64
.L_80232978:
/* 80232978 0022FA58  2C 00 00 05 */	cmpwi r0, 0x5
/* 8023297C 0022FA5C  40 80 00 E8 */	bge .L_80232A64
/* 80232980 0022FA60  48 00 00 BC */	b .L_80232A3C
.L_80232984:
/* 80232984 0022FA64  80 6D 9F 7C */	lwz r3, RwEngineInstance@sda21(r13)
/* 80232988 0022FA68  38 A0 00 01 */	li r5, 0x1
/* 8023298C 0022FA6C  83 FE 00 0C */	lwz r31, 0xc(r30)
/* 80232990 0022FA70  81 83 00 E4 */	lwz r12, 0xe4(r3)
/* 80232994 0022FA74  7F E3 FB 78 */	mr r3, r31
/* 80232998 0022FA78  7D 89 03 A6 */	mtctr r12
/* 8023299C 0022FA7C  4E 80 04 21 */	bctrl
/* 802329A0 0022FA80  2C 03 00 00 */	cmpwi r3, 0x0
/* 802329A4 0022FA84  41 82 00 48 */	beq .L_802329EC
/* 802329A8 0022FA88  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 802329AC 0022FA8C  7F E3 FB 78 */	mr r3, r31
/* 802329B0 0022FA90  81 84 00 E0 */	lwz r12, 0xe0(r4)
/* 802329B4 0022FA94  7D 89 03 A6 */	mtctr r12
/* 802329B8 0022FA98  4E 80 04 21 */	bctrl
/* 802329BC 0022FA9C  2C 03 00 00 */	cmpwi r3, 0x0
/* 802329C0 0022FAA0  41 82 00 24 */	beq .L_802329E4
/* 802329C4 0022FAA4  38 00 00 01 */	li r0, 0x1
/* 802329C8 0022FAA8  38 60 00 05 */	li r3, 0x5
/* 802329CC 0022FAAC  90 01 00 18 */	stw r0, 0x18(r1)
/* 802329D0 0022FAB0  4C C6 31 82 */	crclr 4*cr1+eq
/* 802329D4 0022FAB4  4B FF CC 61 */	bl _rwerror
/* 802329D8 0022FAB8  90 61 00 1C */	stw r3, 0x1c(r1)
/* 802329DC 0022FABC  38 61 00 18 */	addi r3, r1, 0x18
/* 802329E0 0022FAC0  4B FF CB B1 */	bl RwErrorSet
.L_802329E4:
/* 802329E4 0022FAC4  38 60 00 00 */	li r3, 0x0
/* 802329E8 0022FAC8  48 00 00 A0 */	b .L_80232A88
.L_802329EC:
/* 802329EC 0022FACC  7F C3 F3 78 */	mr r3, r30
/* 802329F0 0022FAD0  48 00 00 98 */	b .L_80232A88
.L_802329F4:
/* 802329F4 0022FAD4  80 1E 00 0C */	lwz r0, 0xc(r30)
/* 802329F8 0022FAD8  80 BE 00 10 */	lwz r5, 0x10(r30)
/* 802329FC 0022FADC  7C 00 22 14 */	add r0, r0, r4
/* 80232A00 0022FAE0  7C 00 28 40 */	cmplw r0, r5
/* 80232A04 0022FAE4  40 81 00 30 */	ble .L_80232A34
/* 80232A08 0022FAE8  90 BE 00 0C */	stw r5, 0xc(r30)
/* 80232A0C 0022FAEC  38 00 00 01 */	li r0, 0x1
/* 80232A10 0022FAF0  38 60 00 05 */	li r3, 0x5
/* 80232A14 0022FAF4  90 01 00 10 */	stw r0, 0x10(r1)
/* 80232A18 0022FAF8  4C C6 31 82 */	crclr 4*cr1+eq
/* 80232A1C 0022FAFC  4B FF CC 19 */	bl _rwerror
/* 80232A20 0022FB00  90 61 00 14 */	stw r3, 0x14(r1)
/* 80232A24 0022FB04  38 61 00 10 */	addi r3, r1, 0x10
/* 80232A28 0022FB08  4B FF CB 69 */	bl RwErrorSet
/* 80232A2C 0022FB0C  38 60 00 00 */	li r3, 0x0
/* 80232A30 0022FB10  48 00 00 58 */	b .L_80232A88
.L_80232A34:
/* 80232A34 0022FB14  90 1E 00 0C */	stw r0, 0xc(r30)
/* 80232A38 0022FB18  48 00 00 50 */	b .L_80232A88
.L_80232A3C:
/* 80232A3C 0022FB1C  81 9E 00 18 */	lwz r12, 0x18(r30)
/* 80232A40 0022FB20  80 7E 00 1C */	lwz r3, 0x1c(r30)
/* 80232A44 0022FB24  7D 89 03 A6 */	mtctr r12
/* 80232A48 0022FB28  4E 80 04 21 */	bctrl
/* 80232A4C 0022FB2C  2C 03 00 00 */	cmpwi r3, 0x0
/* 80232A50 0022FB30  41 82 00 0C */	beq .L_80232A5C
/* 80232A54 0022FB34  7F C3 F3 78 */	mr r3, r30
/* 80232A58 0022FB38  48 00 00 30 */	b .L_80232A88
.L_80232A5C:
/* 80232A5C 0022FB3C  38 60 00 00 */	li r3, 0x0
/* 80232A60 0022FB40  48 00 00 28 */	b .L_80232A88
.L_80232A64:
/* 80232A64 0022FB44  38 00 00 01 */	li r0, 0x1
/* 80232A68 0022FB48  38 60 00 0E */	li r3, 0xe
/* 80232A6C 0022FB4C  90 01 00 08 */	stw r0, 0x8(r1)
/* 80232A70 0022FB50  4C C6 31 82 */	crclr 4*cr1+eq
/* 80232A74 0022FB54  4B FF CB C1 */	bl _rwerror
/* 80232A78 0022FB58  90 61 00 0C */	stw r3, 0xc(r1)
/* 80232A7C 0022FB5C  38 61 00 08 */	addi r3, r1, 0x8
/* 80232A80 0022FB60  4B FF CB 11 */	bl RwErrorSet
/* 80232A84 0022FB64  38 60 00 00 */	li r3, 0x0
.L_80232A88:
/* 80232A88 0022FB68  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80232A8C 0022FB6C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80232A90 0022FB70  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80232A94 0022FB74  7C 08 03 A6 */	mtlr r0
/* 80232A98 0022FB78  38 21 00 30 */	addi r1, r1, 0x30
/* 80232A9C 0022FB7C  4E 80 00 20 */	blr
.endfn RwStreamSkip

.fn RwStreamClose, global
/* 80232AA0 0022FB80  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80232AA4 0022FB84  7C 08 02 A6 */	mflr r0
/* 80232AA8 0022FB88  90 01 00 24 */	stw r0, 0x24(r1)
/* 80232AAC 0022FB8C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80232AB0 0022FB90  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80232AB4 0022FB94  7C 7E 1B 78 */	mr r30, r3
/* 80232AB8 0022FB98  80 03 00 00 */	lwz r0, 0x0(r3)
/* 80232ABC 0022FB9C  2C 00 00 03 */	cmpwi r0, 0x3
/* 80232AC0 0022FBA0  41 82 00 50 */	beq .L_80232B10
/* 80232AC4 0022FBA4  40 80 00 14 */	bge .L_80232AD8
/* 80232AC8 0022FBA8  2C 00 00 01 */	cmpwi r0, 0x1
/* 80232ACC 0022FBAC  41 82 00 18 */	beq .L_80232AE4
/* 80232AD0 0022FBB0  40 80 00 1C */	bge .L_80232AEC
/* 80232AD4 0022FBB4  48 00 00 88 */	b .L_80232B5C
.L_80232AD8:
/* 80232AD8 0022FBB8  2C 00 00 05 */	cmpwi r0, 0x5
/* 80232ADC 0022FBBC  40 80 00 80 */	bge .L_80232B5C
/* 80232AE0 0022FBC0  48 00 00 5C */	b .L_80232B3C
.L_80232AE4:
/* 80232AE4 0022FBC4  3B E0 00 01 */	li r31, 0x1
/* 80232AE8 0022FBC8  48 00 00 9C */	b .L_80232B84
.L_80232AEC:
/* 80232AEC 0022FBCC  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 80232AF0 0022FBD0  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 80232AF4 0022FBD4  81 84 00 CC */	lwz r12, 0xcc(r4)
/* 80232AF8 0022FBD8  7D 89 03 A6 */	mtctr r12
/* 80232AFC 0022FBDC  4E 80 04 21 */	bctrl
/* 80232B00 0022FBE0  7C 60 00 34 */	cntlzw r0, r3
/* 80232B04 0022FBE4  54 00 D9 7E */	srwi r0, r0, 5
/* 80232B08 0022FBE8  7C 1F 03 78 */	mr r31, r0
/* 80232B0C 0022FBEC  48 00 00 78 */	b .L_80232B84
.L_80232B10:
/* 80232B10 0022FBF0  80 1E 00 04 */	lwz r0, 0x4(r30)
/* 80232B14 0022FBF4  2C 00 00 01 */	cmpwi r0, 0x1
/* 80232B18 0022FBF8  41 82 00 1C */	beq .L_80232B34
/* 80232B1C 0022FBFC  28 04 00 00 */	cmplwi r4, 0x0
/* 80232B20 0022FC00  41 82 00 14 */	beq .L_80232B34
/* 80232B24 0022FC04  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 80232B28 0022FC08  90 04 00 00 */	stw r0, 0x0(r4)
/* 80232B2C 0022FC0C  80 1E 00 0C */	lwz r0, 0xc(r30)
/* 80232B30 0022FC10  90 04 00 04 */	stw r0, 0x4(r4)
.L_80232B34:
/* 80232B34 0022FC14  3B E0 00 01 */	li r31, 0x1
/* 80232B38 0022FC18  48 00 00 4C */	b .L_80232B84
.L_80232B3C:
/* 80232B3C 0022FC1C  81 9E 00 0C */	lwz r12, 0xc(r30)
/* 80232B40 0022FC20  28 0C 00 00 */	cmplwi r12, 0x0
/* 80232B44 0022FC24  41 82 00 10 */	beq .L_80232B54
/* 80232B48 0022FC28  80 7E 00 1C */	lwz r3, 0x1c(r30)
/* 80232B4C 0022FC2C  7D 89 03 A6 */	mtctr r12
/* 80232B50 0022FC30  4E 80 04 21 */	bctrl
.L_80232B54:
/* 80232B54 0022FC34  3B E0 00 01 */	li r31, 0x1
/* 80232B58 0022FC38  48 00 00 2C */	b .L_80232B84
.L_80232B5C:
/* 80232B5C 0022FC3C  38 00 00 01 */	li r0, 0x1
/* 80232B60 0022FC40  38 60 00 0E */	li r3, 0xe
/* 80232B64 0022FC44  90 01 00 08 */	stw r0, 0x8(r1)
/* 80232B68 0022FC48  4C C6 31 82 */	crclr 4*cr1+eq
/* 80232B6C 0022FC4C  4B FF CA C9 */	bl _rwerror
/* 80232B70 0022FC50  90 61 00 0C */	stw r3, 0xc(r1)
/* 80232B74 0022FC54  38 61 00 08 */	addi r3, r1, 0x8
/* 80232B78 0022FC58  4B FF CA 19 */	bl RwErrorSet
/* 80232B7C 0022FC5C  38 60 00 00 */	li r3, 0x0
/* 80232B80 0022FC60  48 00 00 30 */	b .L_80232BB0
.L_80232B84:
/* 80232B84 0022FC64  80 1E 00 20 */	lwz r0, 0x20(r30)
/* 80232B88 0022FC68  2C 00 00 00 */	cmpwi r0, 0x0
/* 80232B8C 0022FC6C  41 82 00 20 */	beq .L_80232BAC
/* 80232B90 0022FC70  80 6D 9F 7C */	lwz r3, RwEngineInstance@sda21(r13)
/* 80232B94 0022FC74  7F C4 F3 78 */	mr r4, r30
/* 80232B98 0022FC78  80 0D 9F 50 */	lwz r0, streamModule@sda21(r13)
/* 80232B9C 0022FC7C  81 83 01 48 */	lwz r12, 0x148(r3)
/* 80232BA0 0022FC80  7C 63 00 2E */	lwzx r3, r3, r0
/* 80232BA4 0022FC84  7D 89 03 A6 */	mtctr r12
/* 80232BA8 0022FC88  4E 80 04 21 */	bctrl
.L_80232BAC:
/* 80232BAC 0022FC8C  7F E3 FB 78 */	mr r3, r31
.L_80232BB0:
/* 80232BB0 0022FC90  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80232BB4 0022FC94  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80232BB8 0022FC98  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80232BBC 0022FC9C  7C 08 03 A6 */	mtlr r0
/* 80232BC0 0022FCA0  38 21 00 20 */	addi r1, r1, 0x20
/* 80232BC4 0022FCA4  4E 80 00 20 */	blr
.endfn RwStreamClose

.fn RwStreamOpen, global
/* 80232BC8 0022FCA8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80232BCC 0022FCAC  7C 08 02 A6 */	mflr r0
/* 80232BD0 0022FCB0  90 01 00 44 */	stw r0, 0x44(r1)
/* 80232BD4 0022FCB4  39 61 00 40 */	addi r11, r1, 0x40
/* 80232BD8 0022FCB8  4B FB A9 2D */	bl _savegpr_27
/* 80232BDC 0022FCBC  80 CD 9F 7C */	lwz r6, RwEngineInstance@sda21(r13)
/* 80232BE0 0022FCC0  7C 7D 1B 78 */	mr r29, r3
/* 80232BE4 0022FCC4  80 0D 9F 50 */	lwz r0, streamModule@sda21(r13)
/* 80232BE8 0022FCC8  7C 9B 23 78 */	mr r27, r4
/* 80232BEC 0022FCCC  81 86 01 44 */	lwz r12, 0x144(r6)
/* 80232BF0 0022FCD0  7C BE 2B 78 */	mr r30, r5
/* 80232BF4 0022FCD4  7C 66 00 2E */	lwzx r3, r6, r0
/* 80232BF8 0022FCD8  7D 89 03 A6 */	mtctr r12
/* 80232BFC 0022FCDC  4E 80 04 21 */	bctrl
/* 80232C00 0022FCE0  7C 7F 1B 79 */	mr. r31, r3
/* 80232C04 0022FCE4  3B 80 00 00 */	li r28, 0x0
/* 80232C08 0022FCE8  40 82 00 08 */	bne .L_80232C10
/* 80232C0C 0022FCEC  48 00 02 28 */	b .L_80232E34
.L_80232C10:
/* 80232C10 0022FCF0  93 BF 00 00 */	stw r29, 0x0(r31)
/* 80232C14 0022FCF4  2C 1D 00 03 */	cmpwi r29, 0x3
/* 80232C18 0022FCF8  38 00 00 01 */	li r0, 0x1
/* 80232C1C 0022FCFC  93 7F 00 04 */	stw r27, 0x4(r31)
/* 80232C20 0022FD00  90 1F 00 20 */	stw r0, 0x20(r31)
/* 80232C24 0022FD04  41 82 01 3C */	beq .L_80232D60
/* 80232C28 0022FD08  40 80 00 14 */	bge .L_80232C3C
/* 80232C2C 0022FD0C  2C 1D 00 01 */	cmpwi r29, 0x1
/* 80232C30 0022FD10  41 82 00 18 */	beq .L_80232C48
/* 80232C34 0022FD14  40 80 00 44 */	bge .L_80232C78
/* 80232C38 0022FD18  48 00 01 DC */	b .L_80232E14
.L_80232C3C:
/* 80232C3C 0022FD1C  2C 1D 00 05 */	cmpwi r29, 0x5
/* 80232C40 0022FD20  40 80 01 D4 */	bge .L_80232E14
/* 80232C44 0022FD24  48 00 01 B8 */	b .L_80232DFC
.L_80232C48:
/* 80232C48 0022FD28  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 80232C4C 0022FD2C  7F C3 F3 78 */	mr r3, r30
/* 80232C50 0022FD30  81 84 00 EC */	lwz r12, 0xec(r4)
/* 80232C54 0022FD34  7D 89 03 A6 */	mtctr r12
/* 80232C58 0022FD38  4E 80 04 21 */	bctrl
/* 80232C5C 0022FD3C  2C 03 FF FF */	cmpwi r3, -0x1
/* 80232C60 0022FD40  40 82 00 0C */	bne .L_80232C6C
/* 80232C64 0022FD44  3B 80 00 00 */	li r28, 0x0
/* 80232C68 0022FD48  48 00 01 CC */	b .L_80232E34
.L_80232C6C:
/* 80232C6C 0022FD4C  93 DF 00 0C */	stw r30, 0xc(r31)
/* 80232C70 0022FD50  7F FC FB 78 */	mr r28, r31
/* 80232C74 0022FD54  48 00 01 C0 */	b .L_80232E34
.L_80232C78:
/* 80232C78 0022FD58  2C 1B 00 02 */	cmpwi r27, 0x2
/* 80232C7C 0022FD5C  7F 9D E3 78 */	mr r29, r28
/* 80232C80 0022FD60  41 82 00 40 */	beq .L_80232CC0
/* 80232C84 0022FD64  40 80 00 10 */	bge .L_80232C94
/* 80232C88 0022FD68  2C 1B 00 01 */	cmpwi r27, 0x1
/* 80232C8C 0022FD6C  40 80 00 14 */	bge .L_80232CA0
/* 80232C90 0022FD70  48 00 00 70 */	b .L_80232D00
.L_80232C94:
/* 80232C94 0022FD74  2C 1B 00 04 */	cmpwi r27, 0x4
/* 80232C98 0022FD78  40 80 00 68 */	bge .L_80232D00
/* 80232C9C 0022FD7C  48 00 00 44 */	b .L_80232CE0
.L_80232CA0:
/* 80232CA0 0022FD80  80 AD 9F 7C */	lwz r5, RwEngineInstance@sda21(r13)
/* 80232CA4 0022FD84  7F C3 F3 78 */	mr r3, r30
/* 80232CA8 0022FD88  38 8D 87 B0 */	addi r4, r13, "@90"@sda21
/* 80232CAC 0022FD8C  81 85 00 C8 */	lwz r12, 0xc8(r5)
/* 80232CB0 0022FD90  7D 89 03 A6 */	mtctr r12
/* 80232CB4 0022FD94  4E 80 04 21 */	bctrl
/* 80232CB8 0022FD98  7C 7D 1B 78 */	mr r29, r3
/* 80232CBC 0022FD9C  48 00 00 64 */	b .L_80232D20
.L_80232CC0:
/* 80232CC0 0022FDA0  80 AD 9F 7C */	lwz r5, RwEngineInstance@sda21(r13)
/* 80232CC4 0022FDA4  7F C3 F3 78 */	mr r3, r30
/* 80232CC8 0022FDA8  38 8D 87 B4 */	addi r4, r13, "@91"@sda21
/* 80232CCC 0022FDAC  81 85 00 C8 */	lwz r12, 0xc8(r5)
/* 80232CD0 0022FDB0  7D 89 03 A6 */	mtctr r12
/* 80232CD4 0022FDB4  4E 80 04 21 */	bctrl
/* 80232CD8 0022FDB8  7C 7D 1B 78 */	mr r29, r3
/* 80232CDC 0022FDBC  48 00 00 44 */	b .L_80232D20
.L_80232CE0:
/* 80232CE0 0022FDC0  80 AD 9F 7C */	lwz r5, RwEngineInstance@sda21(r13)
/* 80232CE4 0022FDC4  7F C3 F3 78 */	mr r3, r30
/* 80232CE8 0022FDC8  38 8D 87 B8 */	addi r4, r13, "@92"@sda21
/* 80232CEC 0022FDCC  81 85 00 C8 */	lwz r12, 0xc8(r5)
/* 80232CF0 0022FDD0  7D 89 03 A6 */	mtctr r12
/* 80232CF4 0022FDD4  4E 80 04 21 */	bctrl
/* 80232CF8 0022FDD8  7C 7D 1B 78 */	mr r29, r3
/* 80232CFC 0022FDDC  48 00 00 24 */	b .L_80232D20
.L_80232D00:
/* 80232D00 0022FDE0  38 00 00 01 */	li r0, 0x1
/* 80232D04 0022FDE4  38 60 00 0D */	li r3, 0xd
/* 80232D08 0022FDE8  90 01 00 10 */	stw r0, 0x10(r1)
/* 80232D0C 0022FDEC  4C C6 31 82 */	crclr 4*cr1+eq
/* 80232D10 0022FDF0  4B FF C9 25 */	bl _rwerror
/* 80232D14 0022FDF4  90 61 00 14 */	stw r3, 0x14(r1)
/* 80232D18 0022FDF8  38 61 00 10 */	addi r3, r1, 0x10
/* 80232D1C 0022FDFC  4B FF C8 75 */	bl RwErrorSet
.L_80232D20:
/* 80232D20 0022FE00  28 1D 00 00 */	cmplwi r29, 0x0
/* 80232D24 0022FE04  41 82 00 10 */	beq .L_80232D34
/* 80232D28 0022FE08  93 BF 00 0C */	stw r29, 0xc(r31)
/* 80232D2C 0022FE0C  7F FC FB 78 */	mr r28, r31
/* 80232D30 0022FE10  48 00 01 04 */	b .L_80232E34
.L_80232D34:
/* 80232D34 0022FE14  38 00 00 01 */	li r0, 0x1
/* 80232D38 0022FE18  3C 60 80 00 */	lis r3, 0x8000
/* 80232D3C 0022FE1C  90 01 00 18 */	stw r0, 0x18(r1)
/* 80232D40 0022FE20  7F C4 F3 78 */	mr r4, r30
/* 80232D44 0022FE24  38 63 00 02 */	addi r3, r3, 0x2
/* 80232D48 0022FE28  4C C6 31 82 */	crclr 4*cr1+eq
/* 80232D4C 0022FE2C  4B FF C8 E9 */	bl _rwerror
/* 80232D50 0022FE30  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80232D54 0022FE34  38 61 00 18 */	addi r3, r1, 0x18
/* 80232D58 0022FE38  4B FF C8 39 */	bl RwErrorSet
/* 80232D5C 0022FE3C  48 00 00 D8 */	b .L_80232E34
.L_80232D60:
/* 80232D60 0022FE40  2C 1B 00 02 */	cmpwi r27, 0x2
/* 80232D64 0022FE44  7F 9D E3 78 */	mr r29, r28
/* 80232D68 0022FE48  41 82 00 3C */	beq .L_80232DA4
/* 80232D6C 0022FE4C  40 80 00 10 */	bge .L_80232D7C
/* 80232D70 0022FE50  2C 1B 00 01 */	cmpwi r27, 0x1
/* 80232D74 0022FE54  40 80 00 14 */	bge .L_80232D88
/* 80232D78 0022FE58  48 00 00 5C */	b .L_80232DD4
.L_80232D7C:
/* 80232D7C 0022FE5C  2C 1B 00 04 */	cmpwi r27, 0x4
/* 80232D80 0022FE60  40 80 00 54 */	bge .L_80232DD4
/* 80232D84 0022FE64  48 00 00 34 */	b .L_80232DB8
.L_80232D88:
/* 80232D88 0022FE68  93 9F 00 0C */	stw r28, 0xc(r31)
/* 80232D8C 0022FE6C  7F FD FB 78 */	mr r29, r31
/* 80232D90 0022FE70  80 7E 00 04 */	lwz r3, 0x4(r30)
/* 80232D94 0022FE74  80 1E 00 00 */	lwz r0, 0x0(r30)
/* 80232D98 0022FE78  90 7F 00 10 */	stw r3, 0x10(r31)
/* 80232D9C 0022FE7C  90 1F 00 14 */	stw r0, 0x14(r31)
/* 80232DA0 0022FE80  48 00 00 54 */	b .L_80232DF4
.L_80232DA4:
/* 80232DA4 0022FE84  93 9F 00 0C */	stw r28, 0xc(r31)
/* 80232DA8 0022FE88  7F FD FB 78 */	mr r29, r31
/* 80232DAC 0022FE8C  93 9F 00 10 */	stw r28, 0x10(r31)
/* 80232DB0 0022FE90  93 9F 00 14 */	stw r28, 0x14(r31)
/* 80232DB4 0022FE94  48 00 00 40 */	b .L_80232DF4
.L_80232DB8:
/* 80232DB8 0022FE98  80 7E 00 04 */	lwz r3, 0x4(r30)
/* 80232DBC 0022FE9C  7F FD FB 78 */	mr r29, r31
/* 80232DC0 0022FEA0  80 1E 00 00 */	lwz r0, 0x0(r30)
/* 80232DC4 0022FEA4  90 7F 00 0C */	stw r3, 0xc(r31)
/* 80232DC8 0022FEA8  90 7F 00 10 */	stw r3, 0x10(r31)
/* 80232DCC 0022FEAC  90 1F 00 14 */	stw r0, 0x14(r31)
/* 80232DD0 0022FEB0  48 00 00 24 */	b .L_80232DF4
.L_80232DD4:
/* 80232DD4 0022FEB4  38 00 00 01 */	li r0, 0x1
/* 80232DD8 0022FEB8  38 60 00 0D */	li r3, 0xd
/* 80232DDC 0022FEBC  90 01 00 08 */	stw r0, 0x8(r1)
/* 80232DE0 0022FEC0  4C C6 31 82 */	crclr 4*cr1+eq
/* 80232DE4 0022FEC4  4B FF C8 51 */	bl _rwerror
/* 80232DE8 0022FEC8  90 61 00 0C */	stw r3, 0xc(r1)
/* 80232DEC 0022FECC  38 61 00 08 */	addi r3, r1, 0x8
/* 80232DF0 0022FED0  4B FF C7 A1 */	bl RwErrorSet
.L_80232DF4:
/* 80232DF4 0022FED4  7F BC EB 78 */	mr r28, r29
/* 80232DF8 0022FED8  48 00 00 3C */	b .L_80232E34
.L_80232DFC:
/* 80232DFC 0022FEDC  7F C4 F3 78 */	mr r4, r30
/* 80232E00 0022FEE0  38 7F 00 0C */	addi r3, r31, 0xc
/* 80232E04 0022FEE4  38 A0 00 14 */	li r5, 0x14
/* 80232E08 0022FEE8  4B DD 07 39 */	bl memcpy
/* 80232E0C 0022FEEC  7F FC FB 78 */	mr r28, r31
/* 80232E10 0022FEF0  48 00 00 24 */	b .L_80232E34
.L_80232E14:
/* 80232E14 0022FEF4  38 00 00 01 */	li r0, 0x1
/* 80232E18 0022FEF8  38 60 00 0E */	li r3, 0xe
/* 80232E1C 0022FEFC  90 01 00 20 */	stw r0, 0x20(r1)
/* 80232E20 0022FF00  4C C6 31 82 */	crclr 4*cr1+eq
/* 80232E24 0022FF04  4B FF C8 11 */	bl _rwerror
/* 80232E28 0022FF08  90 61 00 24 */	stw r3, 0x24(r1)
/* 80232E2C 0022FF0C  38 61 00 20 */	addi r3, r1, 0x20
/* 80232E30 0022FF10  4B FF C7 61 */	bl RwErrorSet
.L_80232E34:
/* 80232E34 0022FF14  28 1C 00 00 */	cmplwi r28, 0x0
/* 80232E38 0022FF18  40 82 00 24 */	bne .L_80232E5C
/* 80232E3C 0022FF1C  80 6D 9F 7C */	lwz r3, RwEngineInstance@sda21(r13)
/* 80232E40 0022FF20  7F E4 FB 78 */	mr r4, r31
/* 80232E44 0022FF24  80 0D 9F 50 */	lwz r0, streamModule@sda21(r13)
/* 80232E48 0022FF28  81 83 01 48 */	lwz r12, 0x148(r3)
/* 80232E4C 0022FF2C  7C 63 00 2E */	lwzx r3, r3, r0
/* 80232E50 0022FF30  7D 89 03 A6 */	mtctr r12
/* 80232E54 0022FF34  4E 80 04 21 */	bctrl
/* 80232E58 0022FF38  3B E0 00 00 */	li r31, 0x0
.L_80232E5C:
/* 80232E5C 0022FF3C  7F E3 FB 78 */	mr r3, r31
/* 80232E60 0022FF40  39 61 00 40 */	addi r11, r1, 0x40
/* 80232E64 0022FF44  4B FB A6 ED */	bl _restgpr_27
/* 80232E68 0022FF48  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80232E6C 0022FF4C  7C 08 03 A6 */	mtlr r0
/* 80232E70 0022FF50  38 21 00 40 */	addi r1, r1, 0x40
/* 80232E74 0022FF54  4E 80 00 20 */	blr
.endfn RwStreamOpen

# 0x80383D30 - 0x80383D58
.section .bss, "wa", @nobits
.balign 8

.obj _rwStreamFreeList, local
	.skip 0x24
.endobj _rwStreamFreeList
	.skip 0x4

# 0x803CB0A8 - 0x803CB0C0
.section .sdata, "wa"
.balign 8

.obj _rwStreamFreeListBlockSize, local
	.4byte 0x00000010
.endobj _rwStreamFreeListBlockSize

.obj _rwStreamFreeListPreallocBlocks, local
	.4byte 0x00000001
.endobj _rwStreamFreeListPreallocBlocks

.obj "@90", local
	.byte 0x72, 0x62, 0x00
.endobj "@90"
	.byte 0x00

.obj "@91", local
	.byte 0x77, 0x62, 0x00
.endobj "@91"
	.byte 0x00

.obj "@92", local
	.byte 0x61, 0x62, 0x00
.endobj "@92"
	.4byte 0x00000000
	.byte 0x00

# 0x803CC850 - 0x803CC858
.section .sbss, "wa", @nobits
.balign 8

.obj streamModule, local
	.skip 0x8
.endobj streamModule
