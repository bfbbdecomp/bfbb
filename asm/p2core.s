.include "macros.inc"
.file "p2core.c"

# 0x8024C64C - 0x8024CD04
.text
.balign 4

.fn _rxPipelineClose, global
/* 8024C64C 0024972C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8024C650 00249730  7C 08 02 A6 */	mflr r0
/* 8024C654 00249734  90 01 00 14 */	stw r0, 0x14(r1)
/* 8024C658 00249738  80 0D A0 60 */	lwz r0, RxPipelineInstanced@sda21(r13)
/* 8024C65C 0024973C  2C 00 00 00 */	cmpwi r0, 0x0
/* 8024C660 00249740  41 82 00 38 */	beq .L_8024C698
/* 8024C664 00249744  80 6D 9F 7C */	lwz r3, RwEngineInstance@sda21(r13)
/* 8024C668 00249748  80 0D A0 58 */	lwz r0, _rxPipelineGlobalsOffset@sda21(r13)
/* 8024C66C 0024974C  7C 63 00 2E */	lwzx r3, r3, r0
/* 8024C670 00249750  4B FE 4D 71 */	bl RwFreeListDestroy
/* 8024C674 00249754  80 6D 9F 7C */	lwz r3, RwEngineInstance@sda21(r13)
/* 8024C678 00249758  38 80 00 00 */	li r4, 0x0
/* 8024C67C 0024975C  80 0D A0 58 */	lwz r0, _rxPipelineGlobalsOffset@sda21(r13)
/* 8024C680 00249760  7C 83 01 2E */	stwx r4, r3, r0
/* 8024C684 00249764  80 6D A0 64 */	lwz r3, _rxHeapGlobal@sda21(r13)
/* 8024C688 00249768  48 00 3E 51 */	bl RxHeapDestroy
/* 8024C68C 0024976C  38 00 00 00 */	li r0, 0x0
/* 8024C690 00249770  90 0D A0 64 */	stw r0, _rxHeapGlobal@sda21(r13)
/* 8024C694 00249774  90 0D A0 60 */	stw r0, RxPipelineInstanced@sda21(r13)
.L_8024C698:
/* 8024C698 00249778  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8024C69C 0024977C  38 60 00 01 */	li r3, 0x1
/* 8024C6A0 00249780  7C 08 03 A6 */	mtlr r0
/* 8024C6A4 00249784  38 21 00 10 */	addi r1, r1, 0x10
/* 8024C6A8 00249788  4E 80 00 20 */	blr
.endfn _rxPipelineClose

.fn _rxPipelineOpen, global
/* 8024C6AC 0024978C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8024C6B0 00249790  7C 08 02 A6 */	mflr r0
/* 8024C6B4 00249794  90 01 00 14 */	stw r0, 0x14(r1)
/* 8024C6B8 00249798  80 0D A0 60 */	lwz r0, RxPipelineInstanced@sda21(r13)
/* 8024C6BC 0024979C  2C 00 00 00 */	cmpwi r0, 0x0
/* 8024C6C0 002497A0  40 82 00 CC */	bne .L_8024C78C
/* 8024C6C4 002497A4  80 6D 88 38 */	lwz r3, _rxHeapInitialSize@sda21(r13)
/* 8024C6C8 002497A8  48 00 3E AD */	bl RxHeapCreate
/* 8024C6CC 002497AC  90 6D A0 64 */	stw r3, _rxHeapGlobal@sda21(r13)
/* 8024C6D0 002497B0  80 0D A0 64 */	lwz r0, _rxHeapGlobal@sda21(r13)
/* 8024C6D4 002497B4  28 00 00 00 */	cmplwi r0, 0x0
/* 8024C6D8 002497B8  40 82 00 0C */	bne .L_8024C6E4
/* 8024C6DC 002497BC  38 60 00 00 */	li r3, 0x0
/* 8024C6E0 002497C0  48 00 00 B0 */	b .L_8024C790
.L_8024C6E4:
/* 8024C6E4 002497C4  3C 60 80 38 */	lis r3, _rxPipesFreeList@ha
/* 8024C6E8 002497C8  80 8D 88 40 */	lwz r4, _rxPipesFreeListBlockSize@sda21(r13)
/* 8024C6EC 002497CC  38 E3 45 08 */	addi r7, r3, _rxPipesFreeList@l
/* 8024C6F0 002497D0  80 CD 88 44 */	lwz r6, _rxPipesFreeListPreallocBlocks@sda21(r13)
/* 8024C6F4 002497D4  38 60 00 34 */	li r3, 0x34
/* 8024C6F8 002497D8  38 A0 00 04 */	li r5, 0x4
/* 8024C6FC 002497DC  4B FE 4C 0D */	bl RwFreeListCreateAndPreallocateSpace
/* 8024C700 002497E0  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8024C704 002497E4  80 0D A0 58 */	lwz r0, _rxPipelineGlobalsOffset@sda21(r13)
/* 8024C708 002497E8  7C 64 01 2E */	stwx r3, r4, r0
/* 8024C70C 002497EC  80 6D 9F 7C */	lwz r3, RwEngineInstance@sda21(r13)
/* 8024C710 002497F0  80 0D A0 58 */	lwz r0, _rxPipelineGlobalsOffset@sda21(r13)
/* 8024C714 002497F4  7C 63 02 14 */	add r3, r3, r0
/* 8024C718 002497F8  80 03 00 00 */	lwz r0, 0x0(r3)
/* 8024C71C 002497FC  28 00 00 00 */	cmplwi r0, 0x0
/* 8024C720 00249800  40 82 00 1C */	bne .L_8024C73C
/* 8024C724 00249804  80 6D A0 64 */	lwz r3, _rxHeapGlobal@sda21(r13)
/* 8024C728 00249808  48 00 3D B1 */	bl RxHeapDestroy
/* 8024C72C 0024980C  38 00 00 00 */	li r0, 0x0
/* 8024C730 00249810  38 60 00 00 */	li r3, 0x0
/* 8024C734 00249814  90 0D A0 64 */	stw r0, _rxHeapGlobal@sda21(r13)
/* 8024C738 00249818  48 00 00 58 */	b .L_8024C790
.L_8024C73C:
/* 8024C73C 0024981C  80 0D 88 3C */	lwz r0, _rxPipelineMaxNodes@sda21(r13)
/* 8024C740 00249820  90 03 00 38 */	stw r0, 0x38(r3)
/* 8024C744 00249824  80 6D A0 58 */	lwz r3, _rxPipelineGlobalsOffset@sda21(r13)
/* 8024C748 00249828  80 0D 9F 7C */	lwz r0, RwEngineInstance@sda21(r13)
/* 8024C74C 0024982C  38 63 00 04 */	addi r3, r3, 0x4
/* 8024C750 00249830  7C 60 1A 14 */	add r3, r0, r3
/* 8024C754 00249834  48 00 3F 4D */	bl RxRenderStateVectorSetDefaultRenderStateVector
/* 8024C758 00249838  80 6D A0 58 */	lwz r3, _rxPipelineGlobalsOffset@sda21(r13)
/* 8024C75C 0024983C  38 C0 00 00 */	li r6, 0x0
/* 8024C760 00249840  80 AD 9F 7C */	lwz r5, RwEngineInstance@sda21(r13)
/* 8024C764 00249844  38 00 00 01 */	li r0, 0x1
/* 8024C768 00249848  38 83 00 34 */	addi r4, r3, 0x34
/* 8024C76C 0024984C  38 60 00 01 */	li r3, 0x1
/* 8024C770 00249850  7C C5 21 2E */	stwx r6, r5, r4
/* 8024C774 00249854  80 8D A0 58 */	lwz r4, _rxPipelineGlobalsOffset@sda21(r13)
/* 8024C778 00249858  80 AD 9F 7C */	lwz r5, RwEngineInstance@sda21(r13)
/* 8024C77C 0024985C  38 84 00 30 */	addi r4, r4, 0x30
/* 8024C780 00249860  7C C5 21 2E */	stwx r6, r5, r4
/* 8024C784 00249864  90 0D A0 60 */	stw r0, RxPipelineInstanced@sda21(r13)
/* 8024C788 00249868  48 00 00 08 */	b .L_8024C790
.L_8024C78C:
/* 8024C78C 0024986C  38 60 00 00 */	li r3, 0x0
.L_8024C790:
/* 8024C790 00249870  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8024C794 00249874  7C 08 03 A6 */	mtlr r0
/* 8024C798 00249878  38 21 00 10 */	addi r1, r1, 0x10
/* 8024C79C 0024987C  4E 80 00 20 */	blr
.endfn _rxPipelineOpen

.fn PipelineNodeDestroy, global
/* 8024C7A0 00249880  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8024C7A4 00249884  7C 08 02 A6 */	mflr r0
/* 8024C7A8 00249888  90 01 00 24 */	stw r0, 0x24(r1)
/* 8024C7AC 0024988C  39 61 00 20 */	addi r11, r1, 0x20
/* 8024C7B0 00249890  4B FA 0D 55 */	bl _savegpr_27
/* 8024C7B4 00249894  7C 9E 23 78 */	mr r30, r4
/* 8024C7B8 00249898  7C 7D 1B 78 */	mr r29, r3
/* 8024C7BC 0024989C  80 04 00 00 */	lwz r0, 0x0(r4)
/* 8024C7C0 002498A0  2C 00 00 00 */	cmpwi r0, 0x0
/* 8024C7C4 002498A4  40 82 00 B4 */	bne .L_8024C878
/* 8024C7C8 002498A8  80 9D 00 00 */	lwz r4, 0x0(r29)
/* 8024C7CC 002498AC  81 84 00 14 */	lwz r12, 0x14(r4)
/* 8024C7D0 002498B0  28 0C 00 00 */	cmplwi r12, 0x0
/* 8024C7D4 002498B4  41 82 00 0C */	beq .L_8024C7E0
/* 8024C7D8 002498B8  7D 89 03 A6 */	mtctr r12
/* 8024C7DC 002498BC  4E 80 04 21 */	bctrl
.L_8024C7E0:
/* 8024C7E0 002498C0  80 9D 00 00 */	lwz r4, 0x0(r29)
/* 8024C7E4 002498C4  80 64 00 3C */	lwz r3, 0x3c(r4)
/* 8024C7E8 002498C8  38 03 FF FF */	addi r0, r3, -0x1
/* 8024C7EC 002498CC  90 04 00 3C */	stw r0, 0x3c(r4)
/* 8024C7F0 002498D0  80 7D 00 00 */	lwz r3, 0x0(r29)
/* 8024C7F4 002498D4  80 03 00 3C */	lwz r0, 0x3c(r3)
/* 8024C7F8 002498D8  2C 00 00 00 */	cmpwi r0, 0x0
/* 8024C7FC 002498DC  40 82 00 40 */	bne .L_8024C83C
/* 8024C800 002498E0  81 83 00 0C */	lwz r12, 0xc(r3)
/* 8024C804 002498E4  28 0C 00 00 */	cmplwi r12, 0x0
/* 8024C808 002498E8  41 82 00 0C */	beq .L_8024C814
/* 8024C80C 002498EC  7D 89 03 A6 */	mtctr r12
/* 8024C810 002498F0  4E 80 04 21 */	bctrl
.L_8024C814:
/* 8024C814 002498F4  80 7D 00 00 */	lwz r3, 0x0(r29)
/* 8024C818 002498F8  80 03 00 38 */	lwz r0, 0x38(r3)
/* 8024C81C 002498FC  2C 00 00 00 */	cmpwi r0, 0x0
/* 8024C820 00249900  41 82 00 1C */	beq .L_8024C83C
/* 8024C824 00249904  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8024C828 00249908  81 84 01 38 */	lwz r12, 0x138(r4)
/* 8024C82C 0024990C  7D 89 03 A6 */	mtctr r12
/* 8024C830 00249910  4E 80 04 21 */	bctrl
/* 8024C834 00249914  38 00 00 00 */	li r0, 0x0
/* 8024C838 00249918  90 1D 00 00 */	stw r0, 0x0(r29)
.L_8024C83C:
/* 8024C83C 0024991C  80 7D 00 20 */	lwz r3, 0x20(r29)
/* 8024C840 00249920  28 03 00 00 */	cmplwi r3, 0x0
/* 8024C844 00249924  41 82 00 20 */	beq .L_8024C864
/* 8024C848 00249928  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8024C84C 0024992C  81 84 01 38 */	lwz r12, 0x138(r4)
/* 8024C850 00249930  7D 89 03 A6 */	mtctr r12
/* 8024C854 00249934  4E 80 04 21 */	bctrl
/* 8024C858 00249938  38 00 00 00 */	li r0, 0x0
/* 8024C85C 0024993C  90 1D 00 20 */	stw r0, 0x20(r29)
/* 8024C860 00249940  90 1D 00 24 */	stw r0, 0x24(r29)
.L_8024C864:
/* 8024C864 00249944  7F A3 EB 78 */	mr r3, r29
/* 8024C868 00249948  38 80 00 00 */	li r4, 0x0
/* 8024C86C 0024994C  38 A0 00 28 */	li r5, 0x28
/* 8024C870 00249950  4B DB 6B E9 */	bl memset
/* 8024C874 00249954  48 00 02 20 */	b .L_8024CA94
.L_8024C878:
/* 8024C878 00249958  80 7D 00 20 */	lwz r3, 0x20(r29)
/* 8024C87C 0024995C  28 03 00 00 */	cmplwi r3, 0x0
/* 8024C880 00249960  41 82 00 20 */	beq .L_8024C8A0
/* 8024C884 00249964  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8024C888 00249968  81 84 01 38 */	lwz r12, 0x138(r4)
/* 8024C88C 0024996C  7D 89 03 A6 */	mtctr r12
/* 8024C890 00249970  4E 80 04 21 */	bctrl
/* 8024C894 00249974  38 00 00 00 */	li r0, 0x0
/* 8024C898 00249978  90 1D 00 20 */	stw r0, 0x20(r29)
/* 8024C89C 0024997C  90 1D 00 24 */	stw r0, 0x24(r29)
.L_8024C8A0:
/* 8024C8A0 00249980  80 7D 00 00 */	lwz r3, 0x0(r29)
/* 8024C8A4 00249984  80 03 00 3C */	lwz r0, 0x3c(r3)
/* 8024C8A8 00249988  2C 00 00 00 */	cmpwi r0, 0x0
/* 8024C8AC 0024998C  40 82 00 28 */	bne .L_8024C8D4
/* 8024C8B0 00249990  80 03 00 38 */	lwz r0, 0x38(r3)
/* 8024C8B4 00249994  2C 00 00 00 */	cmpwi r0, 0x0
/* 8024C8B8 00249998  41 82 00 1C */	beq .L_8024C8D4
/* 8024C8BC 0024999C  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8024C8C0 002499A0  81 84 01 38 */	lwz r12, 0x138(r4)
/* 8024C8C4 002499A4  7D 89 03 A6 */	mtctr r12
/* 8024C8C8 002499A8  4E 80 04 21 */	bctrl
/* 8024C8CC 002499AC  38 00 00 00 */	li r0, 0x0
/* 8024C8D0 002499B0  90 1D 00 00 */	stw r0, 0x0(r29)
.L_8024C8D4:
/* 8024C8D4 002499B4  80 BE 00 08 */	lwz r5, 0x8(r30)
/* 8024C8D8 002499B8  3C 80 66 66 */	lis r4, 0x6666
/* 8024C8DC 002499BC  80 7E 00 04 */	lwz r3, 0x4(r30)
/* 8024C8E0 002499C0  38 84 66 67 */	addi r4, r4, 0x6667
/* 8024C8E4 002499C4  7C 05 E8 50 */	subf r0, r5, r29
/* 8024C8E8 002499C8  7C 84 00 96 */	mulhw r4, r4, r0
/* 8024C8EC 002499CC  38 03 FF FF */	addi r0, r3, -0x1
/* 8024C8F0 002499D0  7C 83 26 70 */	srawi r3, r4, 4
/* 8024C8F4 002499D4  54 64 0F FE */	srwi r4, r3, 31
/* 8024C8F8 002499D8  7C C3 22 14 */	add r6, r3, r4
/* 8024C8FC 002499DC  7C 06 00 40 */	cmplw r6, r0
/* 8024C900 002499E0  7C DF 33 78 */	mr r31, r6
/* 8024C904 002499E4  40 80 01 90 */	bge .L_8024CA94
/* 8024C908 002499E8  80 6D A0 58 */	lwz r3, _rxPipelineGlobalsOffset@sda21(r13)
/* 8024C90C 002499EC  54 C0 38 30 */	slwi r0, r6, 7
/* 8024C910 002499F0  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8024C914 002499F4  7C DC 33 78 */	mr r28, r6
/* 8024C918 002499F8  38 63 00 38 */	addi r3, r3, 0x38
/* 8024C91C 002499FC  7C 64 18 2E */	lwzx r3, r4, r3
/* 8024C920 00249A00  1C 63 00 28 */	mulli r3, r3, 0x28
/* 8024C924 00249A04  7C 65 1A 14 */	add r3, r5, r3
/* 8024C928 00249A08  7C 63 02 14 */	add r3, r3, r0
/* 8024C92C 00249A0C  3B 63 00 80 */	addi r27, r3, 0x80
/* 8024C930 00249A10  48 00 00 1C */	b .L_8024C94C
.L_8024C934:
/* 8024C934 00249A14  7F 64 DB 78 */	mr r4, r27
/* 8024C938 00249A18  38 A0 00 80 */	li r5, 0x80
/* 8024C93C 00249A1C  4B DB 6C 05 */	bl memcpy
/* 8024C940 00249A20  7F 63 DB 78 */	mr r3, r27
/* 8024C944 00249A24  3B 7B 00 80 */	addi r27, r27, 0x80
/* 8024C948 00249A28  3B 9C 00 01 */	addi r28, r28, 0x1
.L_8024C94C:
/* 8024C94C 00249A2C  80 9E 00 04 */	lwz r4, 0x4(r30)
/* 8024C950 00249A30  38 04 FF FF */	addi r0, r4, -0x1
/* 8024C954 00249A34  7C 1C 00 40 */	cmplw r28, r0
/* 8024C958 00249A38  41 80 FF DC */	blt .L_8024C934
/* 8024C95C 00249A3C  80 6D A0 58 */	lwz r3, _rxPipelineGlobalsOffset@sda21(r13)
/* 8024C960 00249A40  7F FB FB 78 */	mr r27, r31
/* 8024C964 00249A44  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8024C968 00249A48  38 03 00 38 */	addi r0, r3, 0x38
/* 8024C96C 00249A4C  80 BE 00 08 */	lwz r5, 0x8(r30)
/* 8024C970 00249A50  7C 04 00 2E */	lwzx r0, r4, r0
/* 8024C974 00249A54  1C 60 00 28 */	mulli r3, r0, 0x28
/* 8024C978 00249A58  54 00 38 30 */	slwi r0, r0, 7
/* 8024C97C 00249A5C  7C 65 1A 14 */	add r3, r5, r3
/* 8024C980 00249A60  7C 63 02 14 */	add r3, r3, r0
/* 8024C984 00249A64  3B 83 00 0C */	addi r28, r3, 0xc
/* 8024C988 00249A68  48 00 00 1C */	b .L_8024C9A4
.L_8024C98C:
/* 8024C98C 00249A6C  7F 84 E3 78 */	mr r4, r28
/* 8024C990 00249A70  38 A0 00 0C */	li r5, 0xc
/* 8024C994 00249A74  4B DB 6B AD */	bl memcpy
/* 8024C998 00249A78  7F 83 E3 78 */	mr r3, r28
/* 8024C99C 00249A7C  3B 9C 00 0C */	addi r28, r28, 0xc
/* 8024C9A0 00249A80  3B 7B 00 01 */	addi r27, r27, 0x1
.L_8024C9A4:
/* 8024C9A4 00249A84  80 9E 00 04 */	lwz r4, 0x4(r30)
/* 8024C9A8 00249A88  38 04 FF FF */	addi r0, r4, -0x1
/* 8024C9AC 00249A8C  7C 1B 00 40 */	cmplw r27, r0
/* 8024C9B0 00249A90  41 80 FF DC */	blt .L_8024C98C
/* 8024C9B4 00249A94  1F 9F 00 28 */	mulli r28, r31, 0x28
/* 8024C9B8 00249A98  7F FB FB 78 */	mr r27, r31
/* 8024C9BC 00249A9C  48 00 00 50 */	b .L_8024CA0C
.L_8024C9C0:
/* 8024C9C0 00249AA0  38 1B 00 01 */	addi r0, r27, 0x1
/* 8024C9C4 00249AA4  80 9E 00 08 */	lwz r4, 0x8(r30)
/* 8024C9C8 00249AA8  1C 00 00 28 */	mulli r0, r0, 0x28
/* 8024C9CC 00249AAC  38 A0 00 28 */	li r5, 0x28
/* 8024C9D0 00249AB0  7C 64 E2 14 */	add r3, r4, r28
/* 8024C9D4 00249AB4  7C 84 02 14 */	add r4, r4, r0
/* 8024C9D8 00249AB8  4B DB 6B 69 */	bl memcpy
/* 8024C9DC 00249ABC  80 DE 00 08 */	lwz r6, 0x8(r30)
/* 8024C9E0 00249AC0  38 BC 00 08 */	addi r5, r28, 0x8
/* 8024C9E4 00249AC4  38 9C 00 1C */	addi r4, r28, 0x1c
/* 8024C9E8 00249AC8  3B 9C 00 28 */	addi r28, r28, 0x28
/* 8024C9EC 00249ACC  7C 66 28 2E */	lwzx r3, r6, r5
/* 8024C9F0 00249AD0  3B 7B 00 01 */	addi r27, r27, 0x1
/* 8024C9F4 00249AD4  38 03 FF 80 */	addi r0, r3, -0x80
/* 8024C9F8 00249AD8  7C 06 29 2E */	stwx r0, r6, r5
/* 8024C9FC 00249ADC  80 BE 00 08 */	lwz r5, 0x8(r30)
/* 8024CA00 00249AE0  7C 65 20 2E */	lwzx r3, r5, r4
/* 8024CA04 00249AE4  38 03 FF F4 */	addi r0, r3, -0xc
/* 8024CA08 00249AE8  7C 05 21 2E */	stwx r0, r5, r4
.L_8024CA0C:
/* 8024CA0C 00249AEC  80 7E 00 04 */	lwz r3, 0x4(r30)
/* 8024CA10 00249AF0  38 03 FF FF */	addi r0, r3, -0x1
/* 8024CA14 00249AF4  7C 1B 00 40 */	cmplw r27, r0
/* 8024CA18 00249AF8  41 80 FF A8 */	blt .L_8024C9C0
/* 8024CA1C 00249AFC  39 00 00 00 */	li r8, 0x0
/* 8024CA20 00249B00  7D 06 43 78 */	mr r6, r8
/* 8024CA24 00249B04  48 00 00 60 */	b .L_8024CA84
.L_8024CA28:
/* 8024CA28 00249B08  39 20 00 00 */	li r9, 0x0
/* 8024CA2C 00249B0C  38 A0 00 00 */	li r5, 0x0
/* 8024CA30 00249B10  38 60 FF FF */	li r3, -0x1
/* 8024CA34 00249B14  48 00 00 34 */	b .L_8024CA68
.L_8024CA38:
/* 8024CA38 00249B18  80 84 00 08 */	lwz r4, 0x8(r4)
/* 8024CA3C 00249B1C  7C E4 28 2E */	lwzx r7, r4, r5
/* 8024CA40 00249B20  7C 07 F8 40 */	cmplw r7, r31
/* 8024CA44 00249B24  41 80 00 1C */	blt .L_8024CA60
/* 8024CA48 00249B28  7C 1F 38 40 */	cmplw r31, r7
/* 8024CA4C 00249B2C  40 82 00 0C */	bne .L_8024CA58
/* 8024CA50 00249B30  7C 64 29 2E */	stwx r3, r4, r5
/* 8024CA54 00249B34  48 00 00 0C */	b .L_8024CA60
.L_8024CA58:
/* 8024CA58 00249B38  38 07 FF FF */	addi r0, r7, -0x1
/* 8024CA5C 00249B3C  7C 04 29 2E */	stwx r0, r4, r5
.L_8024CA60:
/* 8024CA60 00249B40  38 A5 00 04 */	addi r5, r5, 0x4
/* 8024CA64 00249B44  39 29 00 01 */	addi r9, r9, 0x1
.L_8024CA68:
/* 8024CA68 00249B48  80 1E 00 08 */	lwz r0, 0x8(r30)
/* 8024CA6C 00249B4C  7C 86 02 14 */	add r4, r6, r0
/* 8024CA70 00249B50  80 04 00 04 */	lwz r0, 0x4(r4)
/* 8024CA74 00249B54  7C 09 00 40 */	cmplw r9, r0
/* 8024CA78 00249B58  41 80 FF C0 */	blt .L_8024CA38
/* 8024CA7C 00249B5C  38 C6 00 28 */	addi r6, r6, 0x28
/* 8024CA80 00249B60  39 08 00 01 */	addi r8, r8, 0x1
.L_8024CA84:
/* 8024CA84 00249B64  80 7E 00 04 */	lwz r3, 0x4(r30)
/* 8024CA88 00249B68  38 03 FF FF */	addi r0, r3, -0x1
/* 8024CA8C 00249B6C  7C 08 00 40 */	cmplw r8, r0
/* 8024CA90 00249B70  41 80 FF 98 */	blt .L_8024CA28
.L_8024CA94:
/* 8024CA94 00249B74  80 9E 00 04 */	lwz r4, 0x4(r30)
/* 8024CA98 00249B78  7F A3 EB 78 */	mr r3, r29
/* 8024CA9C 00249B7C  38 04 FF FF */	addi r0, r4, -0x1
/* 8024CAA0 00249B80  90 1E 00 04 */	stw r0, 0x4(r30)
/* 8024CAA4 00249B84  39 61 00 20 */	addi r11, r1, 0x20
/* 8024CAA8 00249B88  4B FA 0A A9 */	bl _restgpr_27
/* 8024CAAC 00249B8C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8024CAB0 00249B90  7C 08 03 A6 */	mtlr r0
/* 8024CAB4 00249B94  38 21 00 20 */	addi r1, r1, 0x20
/* 8024CAB8 00249B98  4E 80 00 20 */	blr
.endfn PipelineNodeDestroy

.fn RxHeapGetGlobalHeap, global
/* 8024CABC 00249B9C  80 6D A0 64 */	lwz r3, _rxHeapGlobal@sda21(r13)
/* 8024CAC0 00249BA0  4E 80 00 20 */	blr
.endfn RxHeapGetGlobalHeap

.fn RxPipelineExecute, global
/* 8024CAC4 00249BA4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8024CAC8 00249BA8  7C 08 02 A6 */	mflr r0
/* 8024CACC 00249BAC  2C 05 00 00 */	cmpwi r5, 0x0
/* 8024CAD0 00249BB0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8024CAD4 00249BB4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8024CAD8 00249BB8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8024CADC 00249BBC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8024CAE0 00249BC0  7C 9D 23 78 */	mr r29, r4
/* 8024CAE4 00249BC4  93 81 00 10 */	stw r28, 0x10(r1)
/* 8024CAE8 00249BC8  7C 7C 1B 78 */	mr r28, r3
/* 8024CAEC 00249BCC  41 82 00 18 */	beq .L_8024CB04
/* 8024CAF0 00249BD0  80 6D A0 64 */	lwz r3, _rxHeapGlobal@sda21(r13)
/* 8024CAF4 00249BD4  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8024CAF8 00249BD8  2C 00 00 00 */	cmpwi r0, 0x0
/* 8024CAFC 00249BDC  41 82 00 08 */	beq .L_8024CB04
/* 8024CB00 00249BE0  48 00 36 19 */	bl _rxHeapReset
.L_8024CB04:
/* 8024CB04 00249BE4  3C 60 80 38 */	lis r3, _rxExecCtxGlobal@ha
/* 8024CB08 00249BE8  38 80 00 01 */	li r4, 0x1
/* 8024CB0C 00249BEC  3B E3 44 F0 */	addi r31, r3, _rxExecCtxGlobal@l
/* 8024CB10 00249BF0  38 00 00 00 */	li r0, 0x0
/* 8024CB14 00249BF4  90 9F 00 08 */	stw r4, 0x8(r31)
/* 8024CB18 00249BF8  3B DF 00 10 */	addi r30, r31, 0x10
/* 8024CB1C 00249BFC  7F C4 F3 78 */	mr r4, r30
/* 8024CB20 00249C00  93 9F 00 00 */	stw r28, 0x0(r31)
/* 8024CB24 00249C04  93 BF 00 10 */	stw r29, 0x10(r31)
/* 8024CB28 00249C08  80 6D A0 64 */	lwz r3, _rxHeapGlobal@sda21(r13)
/* 8024CB2C 00249C0C  90 7F 00 14 */	stw r3, 0x14(r31)
/* 8024CB30 00249C10  90 1C 00 10 */	stw r0, 0x10(r28)
/* 8024CB34 00249C14  80 7C 00 08 */	lwz r3, 0x8(r28)
/* 8024CB38 00249C18  80 A3 00 00 */	lwz r5, 0x0(r3)
/* 8024CB3C 00249C1C  81 85 00 04 */	lwz r12, 0x4(r5)
/* 8024CB40 00249C20  7D 89 03 A6 */	mtctr r12
/* 8024CB44 00249C24  4E 80 04 21 */	bctrl
/* 8024CB48 00249C28  28 03 00 00 */	cmplwi r3, 0x0
/* 8024CB4C 00249C2C  40 82 00 08 */	bne .L_8024CB54
/* 8024CB50 00249C30  90 7F 00 08 */	stw r3, 0x8(r31)
.L_8024CB54:
/* 8024CB54 00249C34  80 1C 00 10 */	lwz r0, 0x10(r28)
/* 8024CB58 00249C38  2C 00 00 01 */	cmpwi r0, 0x1
/* 8024CB5C 00249C3C  40 81 00 14 */	ble .L_8024CB70
/* 8024CB60 00249C40  38 00 00 02 */	li r0, 0x2
/* 8024CB64 00249C44  90 1C 00 10 */	stw r0, 0x10(r28)
/* 8024CB68 00249C48  80 7C 00 14 */	lwz r3, 0x14(r28)
/* 8024CB6C 00249C4C  4B FF FA 35 */	bl _rxPacketDestroy
.L_8024CB70:
/* 8024CB70 00249C50  80 1F 00 08 */	lwz r0, 0x8(r31)
/* 8024CB74 00249C54  38 80 00 00 */	li r4, 0x0
/* 8024CB78 00249C58  3C 60 80 38 */	lis r3, _rxExecCtxGlobal@ha
/* 8024CB7C 00249C5C  90 9E 00 00 */	stw r4, 0x0(r30)
/* 8024CB80 00249C60  2C 00 00 00 */	cmpwi r0, 0x0
/* 8024CB84 00249C64  90 83 44 F0 */	stw r4, _rxExecCtxGlobal@l(r3)
/* 8024CB88 00249C68  90 9F 00 14 */	stw r4, 0x14(r31)
/* 8024CB8C 00249C6C  41 82 00 0C */	beq .L_8024CB98
/* 8024CB90 00249C70  7F 83 E3 78 */	mr r3, r28
/* 8024CB94 00249C74  48 00 00 08 */	b .L_8024CB9C
.L_8024CB98:
/* 8024CB98 00249C78  38 60 00 00 */	li r3, 0x0
.L_8024CB9C:
/* 8024CB9C 00249C7C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8024CBA0 00249C80  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8024CBA4 00249C84  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8024CBA8 00249C88  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8024CBAC 00249C8C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8024CBB0 00249C90  7C 08 03 A6 */	mtlr r0
/* 8024CBB4 00249C94  38 21 00 20 */	addi r1, r1, 0x20
/* 8024CBB8 00249C98  4E 80 00 20 */	blr
.endfn RxPipelineExecute

.fn RxPipelineCreate, global
/* 8024CBBC 00249C9C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8024CBC0 00249CA0  7C 08 02 A6 */	mflr r0
/* 8024CBC4 00249CA4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8024CBC8 00249CA8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8024CBCC 00249CAC  80 6D 9F 7C */	lwz r3, RwEngineInstance@sda21(r13)
/* 8024CBD0 00249CB0  80 0D A0 58 */	lwz r0, _rxPipelineGlobalsOffset@sda21(r13)
/* 8024CBD4 00249CB4  81 83 01 44 */	lwz r12, 0x144(r3)
/* 8024CBD8 00249CB8  7C 63 00 2E */	lwzx r3, r3, r0
/* 8024CBDC 00249CBC  7D 89 03 A6 */	mtctr r12
/* 8024CBE0 00249CC0  4E 80 04 21 */	bctrl
/* 8024CBE4 00249CC4  7C 7F 1B 79 */	mr. r31, r3
/* 8024CBE8 00249CC8  41 82 00 20 */	beq .L_8024CC08
/* 8024CBEC 00249CCC  38 80 00 00 */	li r4, 0x0
/* 8024CBF0 00249CD0  38 A0 00 34 */	li r5, 0x34
/* 8024CBF4 00249CD4  4B DB 68 65 */	bl memset
/* 8024CBF8 00249CD8  38 00 00 00 */	li r0, 0x0
/* 8024CBFC 00249CDC  7F E3 FB 78 */	mr r3, r31
/* 8024CC00 00249CE0  90 1F 00 00 */	stw r0, 0x0(r31)
/* 8024CC04 00249CE4  48 00 00 30 */	b .L_8024CC34
.L_8024CC08:
/* 8024CC08 00249CE8  38 00 00 01 */	li r0, 0x1
/* 8024CC0C 00249CEC  3C 60 80 00 */	lis r3, 0x8000
/* 8024CC10 00249CF0  90 01 00 08 */	stw r0, 0x8(r1)
/* 8024CC14 00249CF4  38 63 00 13 */	addi r3, r3, 0x13
/* 8024CC18 00249CF8  38 80 00 34 */	li r4, 0x34
/* 8024CC1C 00249CFC  4C C6 31 82 */	crclr 4*cr1+eq
/* 8024CC20 00249D00  4B FE 2A 15 */	bl _rwerror
/* 8024CC24 00249D04  90 61 00 0C */	stw r3, 0xc(r1)
/* 8024CC28 00249D08  38 61 00 08 */	addi r3, r1, 0x8
/* 8024CC2C 00249D0C  4B FE 29 65 */	bl RwErrorSet
/* 8024CC30 00249D10  38 60 00 00 */	li r3, 0x0
.L_8024CC34:
/* 8024CC34 00249D14  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8024CC38 00249D18  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8024CC3C 00249D1C  7C 08 03 A6 */	mtlr r0
/* 8024CC40 00249D20  38 21 00 20 */	addi r1, r1, 0x20
/* 8024CC44 00249D24  4E 80 00 20 */	blr
.endfn RxPipelineCreate

.fn _rxPipelineDestroy, global
/* 8024CC48 00249D28  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8024CC4C 00249D2C  7C 08 02 A6 */	mflr r0
/* 8024CC50 00249D30  90 01 00 24 */	stw r0, 0x24(r1)
/* 8024CC54 00249D34  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8024CC58 00249D38  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8024CC5C 00249D3C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8024CC60 00249D40  93 81 00 10 */	stw r28, 0x10(r1)
/* 8024CC64 00249D44  7C 7C 1B 79 */	mr. r28, r3
/* 8024CC68 00249D48  41 82 00 7C */	beq .L_8024CCE4
/* 8024CC6C 00249D4C  83 BC 00 08 */	lwz r29, 0x8(r28)
/* 8024CC70 00249D50  3B C0 00 00 */	li r30, 0x0
/* 8024CC74 00249D54  83 FC 00 04 */	lwz r31, 0x4(r28)
/* 8024CC78 00249D58  48 00 00 18 */	b .L_8024CC90
.L_8024CC7C:
/* 8024CC7C 00249D5C  7F A3 EB 78 */	mr r3, r29
/* 8024CC80 00249D60  7F 84 E3 78 */	mr r4, r28
/* 8024CC84 00249D64  4B FF FB 1D */	bl PipelineNodeDestroy
/* 8024CC88 00249D68  3B BD 00 28 */	addi r29, r29, 0x28
/* 8024CC8C 00249D6C  3B DE 00 01 */	addi r30, r30, 0x1
.L_8024CC90:
/* 8024CC90 00249D70  7C 1E F8 40 */	cmplw r30, r31
/* 8024CC94 00249D74  41 80 FF E8 */	blt .L_8024CC7C
/* 8024CC98 00249D78  38 00 00 00 */	li r0, 0x0
/* 8024CC9C 00249D7C  90 1C 00 08 */	stw r0, 0x8(r28)
/* 8024CCA0 00249D80  80 7C 00 20 */	lwz r3, 0x20(r28)
/* 8024CCA4 00249D84  28 03 00 00 */	cmplwi r3, 0x0
/* 8024CCA8 00249D88  41 82 00 20 */	beq .L_8024CCC8
/* 8024CCAC 00249D8C  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8024CCB0 00249D90  81 84 01 38 */	lwz r12, 0x138(r4)
/* 8024CCB4 00249D94  7D 89 03 A6 */	mtctr r12
/* 8024CCB8 00249D98  4E 80 04 21 */	bctrl
/* 8024CCBC 00249D9C  38 00 00 00 */	li r0, 0x0
/* 8024CCC0 00249DA0  90 1C 00 20 */	stw r0, 0x20(r28)
/* 8024CCC4 00249DA4  90 1C 00 24 */	stw r0, 0x24(r28)
.L_8024CCC8:
/* 8024CCC8 00249DA8  80 6D 9F 7C */	lwz r3, RwEngineInstance@sda21(r13)
/* 8024CCCC 00249DAC  7F 84 E3 78 */	mr r4, r28
/* 8024CCD0 00249DB0  80 0D A0 58 */	lwz r0, _rxPipelineGlobalsOffset@sda21(r13)
/* 8024CCD4 00249DB4  81 83 01 48 */	lwz r12, 0x148(r3)
/* 8024CCD8 00249DB8  7C 63 00 2E */	lwzx r3, r3, r0
/* 8024CCDC 00249DBC  7D 89 03 A6 */	mtctr r12
/* 8024CCE0 00249DC0  4E 80 04 21 */	bctrl
.L_8024CCE4:
/* 8024CCE4 00249DC4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8024CCE8 00249DC8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8024CCEC 00249DCC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8024CCF0 00249DD0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8024CCF4 00249DD4  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8024CCF8 00249DD8  7C 08 03 A6 */	mtlr r0
/* 8024CCFC 00249DDC  38 21 00 20 */	addi r1, r1, 0x20
/* 8024CD00 00249DE0  4E 80 00 20 */	blr
.endfn _rxPipelineDestroy

# 0x80384508 - 0x803CA8E8
.bss
.balign 8

.obj _rxPipesFreeList, local
	.skip 0x24
.endobj _rxPipesFreeList

.obj sCameraFX, global
	.skip 0x2F8
.endobj sCameraFX

.obj sActiveCutscene, global
	.skip 0x198
.endobj sActiveCutscene

.obj zEventLogBuf, global
	.skip 0x1400
.endobj zEventLogBuf

.obj ringlist, global
	.skip 0x1E0
.endobj ringlist

.obj sStreakList, global
	.skip 0x4038
.endobj sStreakList

.obj sShineList, global
	.skip 0x22F0
.endobj sShineList

# xFXRibbon::joint_alloc
.obj joint_alloc__9xFXRibbon, global
	.skip 0x1C
.endobj joint_alloc__9xFXRibbon

.obj g_I3, global
	.skip 0x40
.endobj g_I3

.obj gMemInfo, global
	.skip 0x2C4
.endobj gMemInfo

.obj gxHeap, global
	.skip 0x294
.endobj gxHeap

.obj anim_coll_old_mt, global
	.skip 0x9C
.endobj anim_coll_old_mt

.obj xModelPipeCount, global
	.skip 0x40
.endobj xModelPipeCount

.obj xModelPipeData, global
	.skip 0x40
.endobj xModelPipeData

.obj mPad, global
	.skip 0x520
.endobj mPad

.obj gParPool, global
	.skip 0x2EE00
.endobj gParPool

.obj sParGroupRegTable, global
	.skip 0x3FC
.endobj sParGroupRegTable

.obj xqc_def_ctrl, global
	.skip 0x3C
.endobj xqc_def_ctrl

.obj gDistortionParticles, global
	.skip 0x12C0
.endobj gDistortionParticles

.obj sGlare, global
	.skip 0x208
.endobj sGlare

.obj gSnd, global
	.skip 0x19D4
.endobj gSnd

.obj gTrcPad, global
	.skip 0x30
.endobj gTrcPad

.obj zcam_backupcam, global
	.skip 0x31C
.endobj zcam_backupcam

.obj zcam_backupconvers, global
	.skip 0x31C
.endobj zcam_backupconvers

.obj zcam_quat, global
	.skip 0x10
.endobj zcam_quat

.obj gust_data, global
	.skip 0x24
.endobj gust_data

.obj gPlayerAbsMat, global
	.skip 0x40
.endobj gPlayerAbsMat

.obj rendermat, global
	.skip 0x40
.endobj rendermat

.obj sCameraLastMat, global
	.skip 0x40
.endobj sCameraLastMat

.obj sDriveVel, global
	.skip 0xC
.endobj sDriveVel

.obj floor_supp, global
	.skip 0x30
.endobj floor_supp

.obj floor_dist, global
	.skip 0x10
.endobj floor_dist

.obj floor_tmr, global
	.skip 0x10
.endobj floor_tmr

.obj floor_safe_vec, global
	.skip 0xC
.endobj floor_safe_vec

.obj sandyHitTran, global
	.skip 0x160
.endobj sandyHitTran

.obj patrickHitTran, global
	.skip 0x160
.endobj patrickHitTran

.obj zFXGooInstances, global
	.skip 0xAE0
.endobj zFXGooInstances

.obj dummyPortalAsset, global
	.skip 0x18
.endobj dummyPortalAsset

.obj dummyPortal, global
	.skip 0x14
.endobj dummyPortal

.obj gLightningTweakAddInfo, global
	.skip 0x40
.endobj gLightningTweakAddInfo

.obj globals, global
	.skip 0x1FC8
.endobj globals

.obj zSaveLoadGameTable, global
	.skip 0x144
.endobj zSaveLoadGameTable

.obj gClimate, global
	.skip 0x24
.endobj gClimate

.obj sSorted, global
	.skip 0xC00
.endobj sSorted

.obj gUIMgr, global
	.skip 0x20
.endobj gUIMgr

.obj gOccludeList, global
	.skip 0x28
.endobj gOccludeList

.obj gOccludeCalc, global
	.skip 0x320
.endobj gOccludeCalc

.obj file_queue, global
	.skip 0x70
.endobj file_queue

.obj gRenderArr, global
	.skip 0x23D4
.L_803C5A34:
	.skip 0x17BC
.L_803C71F0:
	.skip 0x4D4
.L_803C76C4:
	.skip 0xF8
.L_803C77BC:
	.skip 0x2C0
.L_803C7A7C:
	.skip 0xE64
.endobj gRenderArr

.obj gRenderBuffer, global
	.skip 0x80
.endobj gRenderBuffer

.obj aram_array, global
	.skip 0xA0
.endobj aram_array

.obj voices, global
	.skip 0x740
.endobj voices

.obj streams, global
	.skip 0x648
.endobj streams

.obj sinfo_array, global
	.skip 0x744
.L_803C9ECC:
	.skip 0x21C
.L_803CA0E8:
	.skip 0x174
.L_803CA25C:
	.skip 0xB0
.L_803CA30C:
	.skip 0x1A0
.L_803CA4AC:
	.skip 0x2C
.endobj sinfo_array

.obj snd, global
	.skip 0x180
.endobj snd

.obj deviceConfig, global
	.skip 0xC
.endobj deviceConfig

.obj sVideoMode, global
	.skip 0x18
.endobj sVideoMode

.obj g_GlobalBattleData, global
	.skip 0x14
.endobj g_GlobalBattleData

# zNPCFodBzzt::laser
.obj laser__11zNPCFodBzzt, global
	.skip 0x24
.endobj laser__11zNPCFodBzzt

# zNPCTubeSlave::laser
.obj laser__13zNPCTubeSlave, global
	.skip 0x24
.endobj laser__13zNPCTubeSlave

.obj colls_grid, global
	.skip 0x9C
.endobj colls_grid

.obj colls_oso_grid, global
	.skip 0x34
.endobj colls_oso_grid

.obj npcs_grid, global
	.skip 0x34
.endobj npcs_grid

.obj dutchman_reticle_center, global
	.skip 0xC
.endobj dutchman_reticle_center

# iTRCDisk::mMessage
.obj mMessage__8iTRCDisk, global
	.skip 0x100
.endobj mMessage__8iTRCDisk

# 0x803CB138 - 0x803CB148
.section .sdata, "wa"
.balign 8

.obj _rxHeapInitialSize, global
	.4byte 0x00001000
.endobj _rxHeapInitialSize

.obj _rxPipelineMaxNodes, global
	.4byte 0x00000040
.endobj _rxPipelineMaxNodes

.obj _rxPipesFreeListBlockSize, local
	.4byte 0x00000040
.endobj _rxPipesFreeListBlockSize

.obj _rxPipesFreeListPreallocBlocks, local
	.4byte 0x00000001
.endobj _rxPipesFreeListPreallocBlocks

# 0x803CC960 - 0x803CC968
.section .sbss, "wa", @nobits
.balign 8

.obj RxPipelineInstanced, global
	.skip 0x4
.endobj RxPipelineInstanced

.obj _rxHeapGlobal, global
	.skip 0x4
.endobj _rxHeapGlobal
