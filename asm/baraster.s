.include "macros.inc"
.file "baraster.c"

# 0x8023B658 - 0x8023BBD8
.text
.balign 4

.fn RwRasterUnlock, global
/* 8023B658 00238738  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8023B65C 0023873C  7C 08 02 A6 */	mflr r0
/* 8023B660 00238740  90 01 00 14 */	stw r0, 0x14(r1)
/* 8023B664 00238744  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8023B668 00238748  7C 7F 1B 78 */	mr r31, r3
/* 8023B66C 0023874C  7F E4 FB 78 */	mr r4, r31
/* 8023B670 00238750  38 60 00 00 */	li r3, 0x0
/* 8023B674 00238754  80 AD 9F 7C */	lwz r5, RwEngineInstance@sda21(r13)
/* 8023B678 00238758  81 85 00 88 */	lwz r12, 0x88(r5)
/* 8023B67C 0023875C  38 A0 00 00 */	li r5, 0x0
/* 8023B680 00238760  7D 89 03 A6 */	mtctr r12
/* 8023B684 00238764  4E 80 04 21 */	bctrl
/* 8023B688 00238768  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8023B68C 0023876C  7F E3 FB 78 */	mr r3, r31
/* 8023B690 00238770  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8023B694 00238774  7C 08 03 A6 */	mtlr r0
/* 8023B698 00238778  38 21 00 10 */	addi r1, r1, 0x10
/* 8023B69C 0023877C  4E 80 00 20 */	blr
.endfn RwRasterUnlock

.fn RwRasterUnlockPalette, global
/* 8023B6A0 00238780  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8023B6A4 00238784  7C 08 02 A6 */	mflr r0
/* 8023B6A8 00238788  90 01 00 14 */	stw r0, 0x14(r1)
/* 8023B6AC 0023878C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8023B6B0 00238790  7C 7F 1B 78 */	mr r31, r3
/* 8023B6B4 00238794  7F E4 FB 78 */	mr r4, r31
/* 8023B6B8 00238798  38 60 00 00 */	li r3, 0x0
/* 8023B6BC 0023879C  80 AD 9F 7C */	lwz r5, RwEngineInstance@sda21(r13)
/* 8023B6C0 002387A0  81 85 00 A8 */	lwz r12, 0xa8(r5)
/* 8023B6C4 002387A4  38 A0 00 00 */	li r5, 0x0
/* 8023B6C8 002387A8  7D 89 03 A6 */	mtctr r12
/* 8023B6CC 002387AC  4E 80 04 21 */	bctrl
/* 8023B6D0 002387B0  88 1F 00 22 */	lbz r0, 0x22(r31)
/* 8023B6D4 002387B4  7F E3 FB 78 */	mr r3, r31
/* 8023B6D8 002387B8  54 00 07 74 */	rlwinm r0, r0, 0, 29, 26
/* 8023B6DC 002387BC  98 1F 00 22 */	stb r0, 0x22(r31)
/* 8023B6E0 002387C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8023B6E4 002387C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8023B6E8 002387C8  7C 08 03 A6 */	mtlr r0
/* 8023B6EC 002387CC  38 21 00 10 */	addi r1, r1, 0x10
/* 8023B6F0 002387D0  4E 80 00 20 */	blr
.endfn RwRasterUnlockPalette

.fn RwRasterDestroy, global
/* 8023B6F4 002387D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8023B6F8 002387D8  7C 08 02 A6 */	mflr r0
/* 8023B6FC 002387DC  3C 80 80 2B */	lis r4, rasterTKList@ha
/* 8023B700 002387E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8023B704 002387E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8023B708 002387E8  7C 7F 1B 78 */	mr r31, r3
/* 8023B70C 002387EC  38 64 7D 50 */	addi r3, r4, rasterTKList@l
/* 8023B710 002387F0  7F E4 FB 78 */	mr r4, r31
/* 8023B714 002387F4  4B FF 82 B9 */	bl _rwPluginRegistryDeInitObject
/* 8023B718 002387F8  80 CD 9F 7C */	lwz r6, RwEngineInstance@sda21(r13)
/* 8023B71C 002387FC  7F E4 FB 78 */	mr r4, r31
/* 8023B720 00238800  38 60 00 00 */	li r3, 0x0
/* 8023B724 00238804  38 A0 00 00 */	li r5, 0x0
/* 8023B728 00238808  81 86 00 5C */	lwz r12, 0x5c(r6)
/* 8023B72C 0023880C  7D 89 03 A6 */	mtctr r12
/* 8023B730 00238810  4E 80 04 21 */	bctrl
/* 8023B734 00238814  80 AD 9F 7C */	lwz r5, RwEngineInstance@sda21(r13)
/* 8023B738 00238818  7F E4 FB 78 */	mr r4, r31
/* 8023B73C 0023881C  80 6D 9F 90 */	lwz r3, rasterModule@sda21(r13)
/* 8023B740 00238820  81 85 01 48 */	lwz r12, 0x148(r5)
/* 8023B744 00238824  38 03 00 60 */	addi r0, r3, 0x60
/* 8023B748 00238828  7C 65 00 2E */	lwzx r3, r5, r0
/* 8023B74C 0023882C  7D 89 03 A6 */	mtctr r12
/* 8023B750 00238830  4E 80 04 21 */	bctrl
/* 8023B754 00238834  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8023B758 00238838  38 60 00 01 */	li r3, 0x1
/* 8023B75C 0023883C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8023B760 00238840  7C 08 03 A6 */	mtlr r0
/* 8023B764 00238844  38 21 00 10 */	addi r1, r1, 0x10
/* 8023B768 00238848  4E 80 00 20 */	blr
.endfn RwRasterDestroy

.fn RwRasterRegisterPlugin, global
/* 8023B76C 0023884C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8023B770 00238850  7C 08 02 A6 */	mflr r0
/* 8023B774 00238854  7C E8 3B 78 */	mr r8, r7
/* 8023B778 00238858  7C C7 33 78 */	mr r7, r6
/* 8023B77C 0023885C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8023B780 00238860  7C 80 23 78 */	mr r0, r4
/* 8023B784 00238864  7C A6 2B 78 */	mr r6, r5
/* 8023B788 00238868  3D 20 80 2B */	lis r9, rasterTKList@ha
/* 8023B78C 0023886C  7C 64 1B 78 */	mr r4, r3
/* 8023B790 00238870  7C 05 03 78 */	mr r5, r0
/* 8023B794 00238874  38 69 7D 50 */	addi r3, r9, rasterTKList@l
/* 8023B798 00238878  4B FF 7E C1 */	bl _rwPluginRegistryAddPlugin
/* 8023B79C 0023887C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8023B7A0 00238880  7C 08 03 A6 */	mtlr r0
/* 8023B7A4 00238884  38 21 00 10 */	addi r1, r1, 0x10
/* 8023B7A8 00238888  4E 80 00 20 */	blr
.endfn RwRasterRegisterPlugin

.fn RwRasterLockPalette, global
/* 8023B7AC 0023888C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8023B7B0 00238890  7C 08 02 A6 */	mflr r0
/* 8023B7B4 00238894  7C 85 23 78 */	mr r5, r4
/* 8023B7B8 00238898  90 01 00 14 */	stw r0, 0x14(r1)
/* 8023B7BC 0023889C  7C 60 1B 78 */	mr r0, r3
/* 8023B7C0 002388A0  38 61 00 08 */	addi r3, r1, 0x8
/* 8023B7C4 002388A4  80 CD 9F 7C */	lwz r6, RwEngineInstance@sda21(r13)
/* 8023B7C8 002388A8  7C 04 03 78 */	mr r4, r0
/* 8023B7CC 002388AC  81 86 00 A4 */	lwz r12, 0xa4(r6)
/* 8023B7D0 002388B0  7D 89 03 A6 */	mtctr r12
/* 8023B7D4 002388B4  4E 80 04 21 */	bctrl
/* 8023B7D8 002388B8  2C 03 00 00 */	cmpwi r3, 0x0
/* 8023B7DC 002388BC  41 82 00 0C */	beq .L_8023B7E8
/* 8023B7E0 002388C0  80 61 00 08 */	lwz r3, 0x8(r1)
/* 8023B7E4 002388C4  48 00 00 08 */	b .L_8023B7EC
.L_8023B7E8:
/* 8023B7E8 002388C8  38 60 00 00 */	li r3, 0x0
.L_8023B7EC:
/* 8023B7EC 002388CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8023B7F0 002388D0  7C 08 03 A6 */	mtlr r0
/* 8023B7F4 002388D4  38 21 00 10 */	addi r1, r1, 0x10
/* 8023B7F8 002388D8  4E 80 00 20 */	blr
.endfn RwRasterLockPalette

.fn RwRasterGetNumLevels, global
/* 8023B7FC 002388DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8023B800 002388E0  7C 08 02 A6 */	mflr r0
/* 8023B804 002388E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8023B808 002388E8  88 03 00 23 */	lbz r0, 0x23(r3)
/* 8023B80C 002388EC  54 00 44 21 */	rlwinm. r0, r0, 8, 16, 16
/* 8023B810 002388F0  40 82 00 0C */	bne .L_8023B81C
/* 8023B814 002388F4  38 60 00 01 */	li r3, 0x1
/* 8023B818 002388F8  48 00 00 34 */	b .L_8023B84C
.L_8023B81C:
/* 8023B81C 002388FC  80 CD 9F 7C */	lwz r6, RwEngineInstance@sda21(r13)
/* 8023B820 00238900  7C 64 1B 78 */	mr r4, r3
/* 8023B824 00238904  38 61 00 08 */	addi r3, r1, 0x8
/* 8023B828 00238908  38 A0 00 00 */	li r5, 0x0
/* 8023B82C 0023890C  81 86 00 B8 */	lwz r12, 0xb8(r6)
/* 8023B830 00238910  7D 89 03 A6 */	mtctr r12
/* 8023B834 00238914  4E 80 04 21 */	bctrl
/* 8023B838 00238918  2C 03 00 00 */	cmpwi r3, 0x0
/* 8023B83C 0023891C  41 82 00 0C */	beq .L_8023B848
/* 8023B840 00238920  80 61 00 08 */	lwz r3, 0x8(r1)
/* 8023B844 00238924  48 00 00 08 */	b .L_8023B84C
.L_8023B848:
/* 8023B848 00238928  38 60 FF FF */	li r3, -0x1
.L_8023B84C:
/* 8023B84C 0023892C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8023B850 00238930  7C 08 03 A6 */	mtlr r0
/* 8023B854 00238934  38 21 00 10 */	addi r1, r1, 0x10
/* 8023B858 00238938  4E 80 00 20 */	blr
.endfn RwRasterGetNumLevels

.fn RwRasterShowRaster, global
/* 8023B85C 0023893C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8023B860 00238940  7C 08 02 A6 */	mflr r0
/* 8023B864 00238944  90 01 00 24 */	stw r0, 0x24(r1)
/* 8023B868 00238948  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8023B86C 0023894C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8023B870 00238950  7C BE 2B 78 */	mr r30, r5
/* 8023B874 00238954  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8023B878 00238958  7C 9D 23 78 */	mr r29, r4
/* 8023B87C 0023895C  93 81 00 10 */	stw r28, 0x10(r1)
/* 8023B880 00238960  7C 7C 1B 78 */	mr r28, r3
/* 8023B884 00238964  80 CD 9F 7C */	lwz r6, RwEngineInstance@sda21(r13)
/* 8023B888 00238968  83 E6 00 98 */	lwz r31, 0x98(r6)
/* 8023B88C 0023896C  4B FF 66 41 */	bl _rwResourcesPurge
/* 8023B890 00238970  7F EC FB 78 */	mr r12, r31
/* 8023B894 00238974  7F 83 E3 78 */	mr r3, r28
/* 8023B898 00238978  7F A4 EB 78 */	mr r4, r29
/* 8023B89C 0023897C  7F C5 F3 78 */	mr r5, r30
/* 8023B8A0 00238980  7D 89 03 A6 */	mtctr r12
/* 8023B8A4 00238984  4E 80 04 21 */	bctrl
/* 8023B8A8 00238988  2C 03 00 00 */	cmpwi r3, 0x0
/* 8023B8AC 0023898C  41 82 00 0C */	beq .L_8023B8B8
/* 8023B8B0 00238990  7F 83 E3 78 */	mr r3, r28
/* 8023B8B4 00238994  48 00 00 08 */	b .L_8023B8BC
.L_8023B8B8:
/* 8023B8B8 00238998  38 60 00 00 */	li r3, 0x0
.L_8023B8BC:
/* 8023B8BC 0023899C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8023B8C0 002389A0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8023B8C4 002389A4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8023B8C8 002389A8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8023B8CC 002389AC  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8023B8D0 002389B0  7C 08 03 A6 */	mtlr r0
/* 8023B8D4 002389B4  38 21 00 20 */	addi r1, r1, 0x20
/* 8023B8D8 002389B8  4E 80 00 20 */	blr
.endfn RwRasterShowRaster

.fn RwRasterCreate, global
/* 8023B8DC 002389BC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8023B8E0 002389C0  7C 08 02 A6 */	mflr r0
/* 8023B8E4 002389C4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8023B8E8 002389C8  39 61 00 20 */	addi r11, r1, 0x20
/* 8023B8EC 002389CC  4B FB 1C 19 */	bl _savegpr_27
/* 8023B8F0 002389D0  80 ED 9F 7C */	lwz r7, RwEngineInstance@sda21(r13)
/* 8023B8F4 002389D4  7C 7B 1B 78 */	mr r27, r3
/* 8023B8F8 002389D8  80 6D 9F 90 */	lwz r3, rasterModule@sda21(r13)
/* 8023B8FC 002389DC  7C 9C 23 78 */	mr r28, r4
/* 8023B900 002389E0  81 87 01 44 */	lwz r12, 0x144(r7)
/* 8023B904 002389E4  7C BD 2B 78 */	mr r29, r5
/* 8023B908 002389E8  38 03 00 60 */	addi r0, r3, 0x60
/* 8023B90C 002389EC  7C DE 33 78 */	mr r30, r6
/* 8023B910 002389F0  7C 67 00 2E */	lwzx r3, r7, r0
/* 8023B914 002389F4  7D 89 03 A6 */	mtctr r12
/* 8023B918 002389F8  4E 80 04 21 */	bctrl
/* 8023B91C 002389FC  7C 7F 1B 79 */	mr. r31, r3
/* 8023B920 00238A00  41 82 00 94 */	beq .L_8023B9B4
/* 8023B924 00238A04  80 6D 9F 7C */	lwz r3, RwEngineInstance@sda21(r13)
/* 8023B928 00238A08  38 00 00 00 */	li r0, 0x0
/* 8023B92C 00238A0C  7F E4 FB 78 */	mr r4, r31
/* 8023B930 00238A10  7F C5 F3 78 */	mr r5, r30
/* 8023B934 00238A14  81 83 00 58 */	lwz r12, 0x58(r3)
/* 8023B938 00238A18  38 60 00 00 */	li r3, 0x0
/* 8023B93C 00238A1C  98 1F 00 22 */	stb r0, 0x22(r31)
/* 8023B940 00238A20  98 1F 00 21 */	stb r0, 0x21(r31)
/* 8023B944 00238A24  93 7F 00 0C */	stw r27, 0xc(r31)
/* 8023B948 00238A28  93 9F 00 10 */	stw r28, 0x10(r31)
/* 8023B94C 00238A2C  B0 1F 00 1C */	sth r0, 0x1c(r31)
/* 8023B950 00238A30  B0 1F 00 1E */	sth r0, 0x1e(r31)
/* 8023B954 00238A34  93 BF 00 14 */	stw r29, 0x14(r31)
/* 8023B958 00238A38  93 FF 00 00 */	stw r31, 0x0(r31)
/* 8023B95C 00238A3C  90 1F 00 04 */	stw r0, 0x4(r31)
/* 8023B960 00238A40  90 1F 00 08 */	stw r0, 0x8(r31)
/* 8023B964 00238A44  7D 89 03 A6 */	mtctr r12
/* 8023B968 00238A48  4E 80 04 21 */	bctrl
/* 8023B96C 00238A4C  2C 03 00 00 */	cmpwi r3, 0x0
/* 8023B970 00238A50  40 82 00 2C */	bne .L_8023B99C
/* 8023B974 00238A54  80 AD 9F 7C */	lwz r5, RwEngineInstance@sda21(r13)
/* 8023B978 00238A58  7F E4 FB 78 */	mr r4, r31
/* 8023B97C 00238A5C  80 6D 9F 90 */	lwz r3, rasterModule@sda21(r13)
/* 8023B980 00238A60  81 85 01 48 */	lwz r12, 0x148(r5)
/* 8023B984 00238A64  38 03 00 60 */	addi r0, r3, 0x60
/* 8023B988 00238A68  7C 65 00 2E */	lwzx r3, r5, r0
/* 8023B98C 00238A6C  7D 89 03 A6 */	mtctr r12
/* 8023B990 00238A70  4E 80 04 21 */	bctrl
/* 8023B994 00238A74  38 60 00 00 */	li r3, 0x0
/* 8023B998 00238A78  48 00 00 20 */	b .L_8023B9B8
.L_8023B99C:
/* 8023B99C 00238A7C  3C 60 80 2B */	lis r3, rasterTKList@ha
/* 8023B9A0 00238A80  7F E4 FB 78 */	mr r4, r31
/* 8023B9A4 00238A84  38 63 7D 50 */	addi r3, r3, rasterTKList@l
/* 8023B9A8 00238A88  4B FF 7F 7D */	bl _rwPluginRegistryInitObject
/* 8023B9AC 00238A8C  7F E3 FB 78 */	mr r3, r31
/* 8023B9B0 00238A90  48 00 00 08 */	b .L_8023B9B8
.L_8023B9B4:
/* 8023B9B4 00238A94  38 60 00 00 */	li r3, 0x0
.L_8023B9B8:
/* 8023B9B8 00238A98  39 61 00 20 */	addi r11, r1, 0x20
/* 8023B9BC 00238A9C  4B FB 1B 95 */	bl _restgpr_27
/* 8023B9C0 00238AA0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8023B9C4 00238AA4  7C 08 03 A6 */	mtlr r0
/* 8023B9C8 00238AA8  38 21 00 20 */	addi r1, r1, 0x20
/* 8023B9CC 00238AAC  4E 80 00 20 */	blr
.endfn RwRasterCreate

.fn RwRasterLock, global
/* 8023B9D0 00238AB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8023B9D4 00238AB4  7C 08 02 A6 */	mflr r0
/* 8023B9D8 00238AB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8023B9DC 00238ABC  54 80 44 2E */	clrlslwi r0, r4, 24, 8
/* 8023B9E0 00238AC0  7C 64 1B 78 */	mr r4, r3
/* 8023B9E4 00238AC4  38 61 00 08 */	addi r3, r1, 0x8
/* 8023B9E8 00238AC8  80 CD 9F 7C */	lwz r6, RwEngineInstance@sda21(r13)
/* 8023B9EC 00238ACC  7C A5 02 14 */	add r5, r5, r0
/* 8023B9F0 00238AD0  81 86 00 84 */	lwz r12, 0x84(r6)
/* 8023B9F4 00238AD4  7D 89 03 A6 */	mtctr r12
/* 8023B9F8 00238AD8  4E 80 04 21 */	bctrl
/* 8023B9FC 00238ADC  2C 03 00 00 */	cmpwi r3, 0x0
/* 8023BA00 00238AE0  41 82 00 0C */	beq .L_8023BA0C
/* 8023BA04 00238AE4  80 61 00 08 */	lwz r3, 0x8(r1)
/* 8023BA08 00238AE8  48 00 00 08 */	b .L_8023BA10
.L_8023BA0C:
/* 8023BA0C 00238AEC  38 60 00 00 */	li r3, 0x0
.L_8023BA10:
/* 8023BA10 00238AF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8023BA14 00238AF4  7C 08 03 A6 */	mtlr r0
/* 8023BA18 00238AF8  38 21 00 10 */	addi r1, r1, 0x10
/* 8023BA1C 00238AFC  4E 80 00 20 */	blr
.endfn RwRasterLock

.fn _rwRasterClose, global
/* 8023BA20 00238B00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8023BA24 00238B04  7C 08 02 A6 */	mflr r0
/* 8023BA28 00238B08  90 01 00 14 */	stw r0, 0x14(r1)
/* 8023BA2C 00238B0C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8023BA30 00238B10  7C 7F 1B 78 */	mr r31, r3
/* 8023BA34 00238B14  80 8D 9F 90 */	lwz r4, rasterModule@sda21(r13)
/* 8023BA38 00238B18  80 6D 9F 7C */	lwz r3, RwEngineInstance@sda21(r13)
/* 8023BA3C 00238B1C  38 04 00 60 */	addi r0, r4, 0x60
/* 8023BA40 00238B20  7C 63 00 2E */	lwzx r3, r3, r0
/* 8023BA44 00238B24  28 03 00 00 */	cmplwi r3, 0x0
/* 8023BA48 00238B28  41 82 00 1C */	beq .L_8023BA64
/* 8023BA4C 00238B2C  4B FF 59 95 */	bl RwFreeListDestroy
/* 8023BA50 00238B30  80 6D 9F 90 */	lwz r3, rasterModule@sda21(r13)
/* 8023BA54 00238B34  38 A0 00 00 */	li r5, 0x0
/* 8023BA58 00238B38  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8023BA5C 00238B3C  38 03 00 60 */	addi r0, r3, 0x60
/* 8023BA60 00238B40  7C A4 01 2E */	stwx r5, r4, r0
.L_8023BA64:
/* 8023BA64 00238B44  38 AD 9F 90 */	addi r5, r13, rasterModule@sda21
/* 8023BA68 00238B48  7F E3 FB 78 */	mr r3, r31
/* 8023BA6C 00238B4C  80 85 00 04 */	lwz r4, 0x4(r5)
/* 8023BA70 00238B50  38 04 FF FF */	addi r0, r4, -0x1
/* 8023BA74 00238B54  90 05 00 04 */	stw r0, 0x4(r5)
/* 8023BA78 00238B58  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8023BA7C 00238B5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8023BA80 00238B60  7C 08 03 A6 */	mtlr r0
/* 8023BA84 00238B64  38 21 00 10 */	addi r1, r1, 0x10
/* 8023BA88 00238B68  4E 80 00 20 */	blr
.endfn _rwRasterClose

.fn _rwRasterOpen, global
/* 8023BA8C 00238B6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8023BA90 00238B70  7C 08 02 A6 */	mflr r0
/* 8023BA94 00238B74  38 A0 00 34 */	li r5, 0x34
/* 8023BA98 00238B78  90 01 00 14 */	stw r0, 0x14(r1)
/* 8023BA9C 00238B7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8023BAA0 00238B80  7C 7F 1B 78 */	mr r31, r3
/* 8023BAA4 00238B84  90 8D 9F 90 */	stw r4, rasterModule@sda21(r13)
/* 8023BAA8 00238B88  38 80 00 00 */	li r4, 0x0
/* 8023BAAC 00238B8C  80 6D 9F 90 */	lwz r3, rasterModule@sda21(r13)
/* 8023BAB0 00238B90  80 0D 9F 7C */	lwz r0, RwEngineInstance@sda21(r13)
/* 8023BAB4 00238B94  38 63 00 2C */	addi r3, r3, 0x2c
/* 8023BAB8 00238B98  7C 60 1A 14 */	add r3, r0, r3
/* 8023BABC 00238B9C  4B DC 79 9D */	bl memset
/* 8023BAC0 00238BA0  80 AD 9F 90 */	lwz r5, rasterModule@sda21(r13)
/* 8023BAC4 00238BA4  3C 60 80 38 */	lis r3, _rwRasterFreeList@ha
/* 8023BAC8 00238BA8  80 CD 9F 7C */	lwz r6, RwEngineInstance@sda21(r13)
/* 8023BACC 00238BAC  38 00 00 00 */	li r0, 0x0
/* 8023BAD0 00238BB0  38 A5 00 38 */	addi r5, r5, 0x38
/* 8023BAD4 00238BB4  3C 80 80 2B */	lis r4, rasterTKList@ha
/* 8023BAD8 00238BB8  7C 06 29 2E */	stwx r0, r6, r5
/* 8023BADC 00238BBC  38 E3 3F 70 */	addi r7, r3, _rwRasterFreeList@l
/* 8023BAE0 00238BC0  38 64 7D 50 */	addi r3, r4, rasterTKList@l
/* 8023BAE4 00238BC4  39 00 00 80 */	li r8, 0x80
/* 8023BAE8 00238BC8  80 8D 9F 90 */	lwz r4, rasterModule@sda21(r13)
/* 8023BAEC 00238BCC  38 A0 00 04 */	li r5, 0x4
/* 8023BAF0 00238BD0  80 CD 9F 7C */	lwz r6, RwEngineInstance@sda21(r13)
/* 8023BAF4 00238BD4  38 84 00 3C */	addi r4, r4, 0x3c
/* 8023BAF8 00238BD8  7C 06 21 2E */	stwx r0, r6, r4
/* 8023BAFC 00238BDC  80 8D 9F 90 */	lwz r4, rasterModule@sda21(r13)
/* 8023BB00 00238BE0  80 CD 9F 7C */	lwz r6, RwEngineInstance@sda21(r13)
/* 8023BB04 00238BE4  38 84 00 40 */	addi r4, r4, 0x40
/* 8023BB08 00238BE8  7C 06 21 2E */	stwx r0, r6, r4
/* 8023BB0C 00238BEC  80 8D 9F 90 */	lwz r4, rasterModule@sda21(r13)
/* 8023BB10 00238BF0  80 CD 9F 7C */	lwz r6, RwEngineInstance@sda21(r13)
/* 8023BB14 00238BF4  38 84 00 4D */	addi r4, r4, 0x4d
/* 8023BB18 00238BF8  7D 06 21 AE */	stbx r8, r6, r4
/* 8023BB1C 00238BFC  80 8D 9F 90 */	lwz r4, rasterModule@sda21(r13)
/* 8023BB20 00238C00  80 CD 9F 7C */	lwz r6, RwEngineInstance@sda21(r13)
/* 8023BB24 00238C04  38 84 00 30 */	addi r4, r4, 0x30
/* 8023BB28 00238C08  7C 06 21 2E */	stwx r0, r6, r4
/* 8023BB2C 00238C0C  80 8D 9F 90 */	lwz r4, rasterModule@sda21(r13)
/* 8023BB30 00238C10  80 CD 9F 7C */	lwz r6, RwEngineInstance@sda21(r13)
/* 8023BB34 00238C14  38 84 00 34 */	addi r4, r4, 0x34
/* 8023BB38 00238C18  7C 06 21 2E */	stwx r0, r6, r4
/* 8023BB3C 00238C1C  80 8D 9F 90 */	lwz r4, rasterModule@sda21(r13)
/* 8023BB40 00238C20  80 CD 9F 7C */	lwz r6, RwEngineInstance@sda21(r13)
/* 8023BB44 00238C24  38 84 00 4C */	addi r4, r4, 0x4c
/* 8023BB48 00238C28  7C 06 21 AE */	stbx r0, r6, r4
/* 8023BB4C 00238C2C  80 8D 9F 90 */	lwz r4, rasterModule@sda21(r13)
/* 8023BB50 00238C30  80 CD 9F 7C */	lwz r6, RwEngineInstance@sda21(r13)
/* 8023BB54 00238C34  38 84 00 28 */	addi r4, r4, 0x28
/* 8023BB58 00238C38  7C 06 21 2E */	stwx r0, r6, r4
/* 8023BB5C 00238C3C  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8023BB60 00238C40  80 0D 9F 90 */	lwz r0, rasterModule@sda21(r13)
/* 8023BB64 00238C44  7C 84 02 14 */	add r4, r4, r0
/* 8023BB68 00238C48  38 04 00 2C */	addi r0, r4, 0x2c
/* 8023BB6C 00238C4C  90 04 00 00 */	stw r0, 0x0(r4)
/* 8023BB70 00238C50  80 63 00 00 */	lwz r3, 0x0(r3)
/* 8023BB74 00238C54  80 8D 87 E8 */	lwz r4, _rwRasterFreeListBlockSize@sda21(r13)
/* 8023BB78 00238C58  80 CD 87 EC */	lwz r6, _rwRasterFreeListPreallocBlocks@sda21(r13)
/* 8023BB7C 00238C5C  4B FF 57 8D */	bl RwFreeListCreateAndPreallocateSpace
/* 8023BB80 00238C60  80 8D 9F 90 */	lwz r4, rasterModule@sda21(r13)
/* 8023BB84 00238C64  80 AD 9F 7C */	lwz r5, RwEngineInstance@sda21(r13)
/* 8023BB88 00238C68  38 04 00 60 */	addi r0, r4, 0x60
/* 8023BB8C 00238C6C  7C 65 01 2E */	stwx r3, r5, r0
/* 8023BB90 00238C70  80 6D 9F 90 */	lwz r3, rasterModule@sda21(r13)
/* 8023BB94 00238C74  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8023BB98 00238C78  38 03 00 60 */	addi r0, r3, 0x60
/* 8023BB9C 00238C7C  7C 04 00 2E */	lwzx r0, r4, r0
/* 8023BBA0 00238C80  28 00 00 00 */	cmplwi r0, 0x0
/* 8023BBA4 00238C84  40 82 00 0C */	bne .L_8023BBB0
/* 8023BBA8 00238C88  38 60 00 00 */	li r3, 0x0
/* 8023BBAC 00238C8C  48 00 00 18 */	b .L_8023BBC4
.L_8023BBB0:
/* 8023BBB0 00238C90  38 AD 9F 90 */	addi r5, r13, rasterModule@sda21
/* 8023BBB4 00238C94  7F E3 FB 78 */	mr r3, r31
/* 8023BBB8 00238C98  80 85 00 04 */	lwz r4, 0x4(r5)
/* 8023BBBC 00238C9C  38 04 00 01 */	addi r0, r4, 0x1
/* 8023BBC0 00238CA0  90 05 00 04 */	stw r0, 0x4(r5)
.L_8023BBC4:
/* 8023BBC4 00238CA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8023BBC8 00238CA8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8023BBCC 00238CAC  7C 08 03 A6 */	mtlr r0
/* 8023BBD0 00238CB0  38 21 00 10 */	addi r1, r1, 0x10
/* 8023BBD4 00238CB4  4E 80 00 20 */	blr
.endfn _rwRasterOpen

# 0x802B7D50 - 0x802B7D68
.data
.balign 8

.obj rasterTKList, local
	.4byte 0x00000034
	.4byte 0x00000034
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj rasterTKList

# 0x80383F70 - 0x80383F98
.section .bss, "wa", @nobits
.balign 8

.obj _rwRasterFreeList, local
	.skip 0x24
.endobj _rwRasterFreeList
	.skip 0x4

# 0x803CB0E8 - 0x803CB0F0
.section .sdata, "wa"
.balign 8

.obj _rwRasterFreeListBlockSize, local
	.4byte 0x00000080
.endobj _rwRasterFreeListBlockSize

.obj _rwRasterFreeListPreallocBlocks, local
	.4byte 0x00000001
.endobj _rwRasterFreeListPreallocBlocks

# 0x803CC890 - 0x803CC898
.section .sbss, "wa", @nobits
.balign 8

.obj rasterModule, local
	.skip 0x8
.endobj rasterModule
