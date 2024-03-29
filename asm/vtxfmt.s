.include "macros.inc"
.file "vtxfmt.c"

# 0x8021F754 - 0x8021FCB0
.text
.balign 4

.fn _rwDlVtxFmtSetup, global
/* 8021F754 0021C834  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8021F758 0021C838  7C 08 02 A6 */	mflr r0
/* 8021F75C 0021C83C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8021F760 0021C840  39 61 00 20 */	addi r11, r1, 0x20
/* 8021F764 0021C844  4B FC DD A1 */	bl _savegpr_27
/* 8021F768 0021C848  7C 7C 1B 79 */	mr. r28, r3
/* 8021F76C 0021C84C  7C 9D 23 78 */	mr r29, r4
/* 8021F770 0021C850  40 82 00 10 */	bne .L_8021F780
/* 8021F774 0021C854  3C 60 80 38 */	lis r3, _RpDlVtxFmtDefault@ha
/* 8021F778 0021C858  38 03 37 88 */	addi r0, r3, _RpDlVtxFmtDefault@l
/* 8021F77C 0021C85C  7C 1C 03 78 */	mr r28, r0
.L_8021F780:
/* 8021F780 0021C860  80 7D 00 00 */	lwz r3, 0x0(r29)
/* 8021F784 0021C864  3B C3 00 18 */	addi r30, r3, 0x18
/* 8021F788 0021C868  4B FA BA 21 */	bl GXClearVtxDesc
/* 8021F78C 0021C86C  88 9E 00 12 */	lbz r4, 0x12(r30)
/* 8021F790 0021C870  38 60 00 09 */	li r3, 0x9
/* 8021F794 0021C874  4B FA B5 C9 */	bl GXSetVtxDesc
/* 8021F798 0021C878  88 DC 00 00 */	lbz r6, 0x0(r28)
/* 8021F79C 0021C87C  38 60 00 00 */	li r3, 0x0
/* 8021F7A0 0021C880  88 FC 00 0C */	lbz r7, 0xc(r28)
/* 8021F7A4 0021C884  38 80 00 09 */	li r4, 0x9
/* 8021F7A8 0021C888  38 A0 00 01 */	li r5, 0x1
/* 8021F7AC 0021C88C  4B FA BA 35 */	bl GXSetVtxAttrFmt
/* 8021F7B0 0021C890  80 9E 00 0C */	lwz r4, 0xc(r30)
/* 8021F7B4 0021C894  38 60 00 09 */	li r3, 0x9
/* 8021F7B8 0021C898  88 BE 00 11 */	lbz r5, 0x11(r30)
/* 8021F7BC 0021C89C  4B FA BF 9D */	bl GXSetArray
/* 8021F7C0 0021C8A0  80 1D 00 08 */	lwz r0, 0x8(r29)
/* 8021F7C4 0021C8A4  3B E0 00 01 */	li r31, 0x1
/* 8021F7C8 0021C8A8  54 00 06 F7 */	rlwinm. r0, r0, 0, 27, 27
/* 8021F7CC 0021C8AC  41 82 00 9C */	beq .L_8021F868
/* 8021F7D0 0021C8B0  88 1C 00 0D */	lbz r0, 0xd(r28)
/* 8021F7D4 0021C8B4  28 00 00 00 */	cmplwi r0, 0x0
/* 8021F7D8 0021C8B8  41 82 00 4C */	beq .L_8021F824
/* 8021F7DC 0021C8BC  57 FF 18 38 */	slwi r31, r31, 3
/* 8021F7E0 0021C8C0  38 60 00 19 */	li r3, 0x19
/* 8021F7E4 0021C8C4  7C 9E FA 14 */	add r4, r30, r31
/* 8021F7E8 0021C8C8  88 84 00 12 */	lbz r4, 0x12(r4)
/* 8021F7EC 0021C8CC  4B FA B5 71 */	bl GXSetVtxDesc
/* 8021F7F0 0021C8D0  88 DC 00 01 */	lbz r6, 0x1(r28)
/* 8021F7F4 0021C8D4  38 60 00 00 */	li r3, 0x0
/* 8021F7F8 0021C8D8  38 80 00 19 */	li r4, 0x19
/* 8021F7FC 0021C8DC  38 A0 00 01 */	li r5, 0x1
/* 8021F800 0021C8E0  38 E0 00 00 */	li r7, 0x0
/* 8021F804 0021C8E4  4B FA B9 DD */	bl GXSetVtxAttrFmt
/* 8021F808 0021C8E8  7C BE FA 14 */	add r5, r30, r31
/* 8021F80C 0021C8EC  38 60 00 19 */	li r3, 0x19
/* 8021F810 0021C8F0  80 85 00 0C */	lwz r4, 0xc(r5)
/* 8021F814 0021C8F4  88 A5 00 11 */	lbz r5, 0x11(r5)
/* 8021F818 0021C8F8  4B FA BF 41 */	bl GXSetArray
/* 8021F81C 0021C8FC  3B E0 00 02 */	li r31, 0x2
/* 8021F820 0021C900  48 00 00 48 */	b .L_8021F868
.L_8021F824:
/* 8021F824 0021C904  57 FF 18 38 */	slwi r31, r31, 3
/* 8021F828 0021C908  38 60 00 0A */	li r3, 0xa
/* 8021F82C 0021C90C  7C 9E FA 14 */	add r4, r30, r31
/* 8021F830 0021C910  88 84 00 12 */	lbz r4, 0x12(r4)
/* 8021F834 0021C914  4B FA B5 29 */	bl GXSetVtxDesc
/* 8021F838 0021C918  88 DC 00 01 */	lbz r6, 0x1(r28)
/* 8021F83C 0021C91C  38 60 00 00 */	li r3, 0x0
/* 8021F840 0021C920  38 80 00 0A */	li r4, 0xa
/* 8021F844 0021C924  38 A0 00 00 */	li r5, 0x0
/* 8021F848 0021C928  38 E0 00 00 */	li r7, 0x0
/* 8021F84C 0021C92C  4B FA B9 95 */	bl GXSetVtxAttrFmt
/* 8021F850 0021C930  7C BE FA 14 */	add r5, r30, r31
/* 8021F854 0021C934  38 60 00 0A */	li r3, 0xa
/* 8021F858 0021C938  80 85 00 0C */	lwz r4, 0xc(r5)
/* 8021F85C 0021C93C  88 A5 00 11 */	lbz r5, 0x11(r5)
/* 8021F860 0021C940  4B FA BE F9 */	bl GXSetArray
/* 8021F864 0021C944  3B E0 00 02 */	li r31, 0x2
.L_8021F868:
/* 8021F868 0021C948  80 1D 00 08 */	lwz r0, 0x8(r29)
/* 8021F86C 0021C94C  54 00 07 39 */	rlwinm. r0, r0, 0, 28, 28
/* 8021F870 0021C950  41 82 00 4C */	beq .L_8021F8BC
/* 8021F874 0021C954  57 FB 18 38 */	slwi r27, r31, 3
/* 8021F878 0021C958  38 60 00 0B */	li r3, 0xb
/* 8021F87C 0021C95C  7C 9E DA 14 */	add r4, r30, r27
/* 8021F880 0021C960  88 84 00 12 */	lbz r4, 0x12(r4)
/* 8021F884 0021C964  4B FA B4 D9 */	bl GXSetVtxDesc
/* 8021F888 0021C968  88 DC 00 0A */	lbz r6, 0xa(r28)
/* 8021F88C 0021C96C  38 60 00 00 */	li r3, 0x0
/* 8021F890 0021C970  38 80 00 0B */	li r4, 0xb
/* 8021F894 0021C974  38 E0 00 00 */	li r7, 0x0
/* 8021F898 0021C978  20 06 00 02 */	subfic r0, r6, 0x2
/* 8021F89C 0021C97C  54 05 0F FE */	srwi r5, r0, 31
/* 8021F8A0 0021C980  4B FA B9 41 */	bl GXSetVtxAttrFmt
/* 8021F8A4 0021C984  7C BE DA 14 */	add r5, r30, r27
/* 8021F8A8 0021C988  38 60 00 0B */	li r3, 0xb
/* 8021F8AC 0021C98C  80 85 00 0C */	lwz r4, 0xc(r5)
/* 8021F8B0 0021C990  88 A5 00 11 */	lbz r5, 0x11(r5)
/* 8021F8B4 0021C994  4B FA BE A5 */	bl GXSetArray
/* 8021F8B8 0021C998  3B FF 00 01 */	addi r31, r31, 0x1
.L_8021F8BC:
/* 8021F8BC 0021C99C  80 1D 00 08 */	lwz r0, 0x8(r29)
/* 8021F8C0 0021C9A0  70 00 00 84 */	andi. r0, r0, 0x84
/* 8021F8C4 0021C9A4  41 82 00 64 */	beq .L_8021F928
/* 8021F8C8 0021C9A8  57 E0 18 38 */	slwi r0, r31, 3
/* 8021F8CC 0021C9AC  3B 60 00 0D */	li r27, 0xd
/* 8021F8D0 0021C9B0  7F BE 02 14 */	add r29, r30, r0
/* 8021F8D4 0021C9B4  48 00 00 48 */	b .L_8021F91C
.L_8021F8D8:
/* 8021F8D8 0021C9B8  88 9D 00 12 */	lbz r4, 0x12(r29)
/* 8021F8DC 0021C9BC  7F 63 DB 78 */	mr r3, r27
/* 8021F8E0 0021C9C0  4B FA B4 7D */	bl GXSetVtxDesc
/* 8021F8E4 0021C9C4  7C BC DA 14 */	add r5, r28, r27
/* 8021F8E8 0021C9C8  7F 64 DB 78 */	mr r4, r27
/* 8021F8EC 0021C9CC  88 C5 FF F5 */	lbz r6, -0xb(r5)
/* 8021F8F0 0021C9D0  38 60 00 00 */	li r3, 0x0
/* 8021F8F4 0021C9D4  88 E5 00 01 */	lbz r7, 0x1(r5)
/* 8021F8F8 0021C9D8  38 A0 00 01 */	li r5, 0x1
/* 8021F8FC 0021C9DC  4B FA B8 E5 */	bl GXSetVtxAttrFmt
/* 8021F900 0021C9E0  80 9D 00 0C */	lwz r4, 0xc(r29)
/* 8021F904 0021C9E4  7F 63 DB 78 */	mr r3, r27
/* 8021F908 0021C9E8  88 BD 00 11 */	lbz r5, 0x11(r29)
/* 8021F90C 0021C9EC  4B FA BE 4D */	bl GXSetArray
/* 8021F910 0021C9F0  3B BD 00 08 */	addi r29, r29, 0x8
/* 8021F914 0021C9F4  3B FF 00 01 */	addi r31, r31, 0x1
/* 8021F918 0021C9F8  3B 7B 00 01 */	addi r27, r27, 0x1
.L_8021F91C:
/* 8021F91C 0021C9FC  80 1E 00 08 */	lwz r0, 0x8(r30)
/* 8021F920 0021CA00  7C 1F 00 40 */	cmplw r31, r0
/* 8021F924 0021CA04  41 80 FF B4 */	blt .L_8021F8D8
.L_8021F928:
/* 8021F928 0021CA08  39 61 00 20 */	addi r11, r1, 0x20
/* 8021F92C 0021CA0C  4B FC DC 25 */	bl _restgpr_27
/* 8021F930 0021CA10  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8021F934 0021CA14  7C 08 03 A6 */	mtlr r0
/* 8021F938 0021CA18  38 21 00 20 */	addi r1, r1, 0x20
/* 8021F93C 0021CA1C  4E 80 00 20 */	blr
.endfn _rwDlVtxFmtSetup

.fn _rpGameCubeVtxFmtGetDefault, global
/* 8021F940 0021CA20  3C 60 80 38 */	lis r3, _RpDlVtxFmtDefault@ha
/* 8021F944 0021CA24  38 63 37 88 */	addi r3, r3, _RpDlVtxFmtDefault@l
/* 8021F948 0021CA28  4E 80 00 20 */	blr
.endfn _rpGameCubeVtxFmtGetDefault

.fn _rxDlVertexFmtConst, local
/* 8021F94C 0021CA2C  38 00 00 00 */	li r0, 0x0
/* 8021F950 0021CA30  7C 03 21 2E */	stwx r0, r3, r4
/* 8021F954 0021CA34  4E 80 00 20 */	blr
.endfn _rxDlVertexFmtConst

.fn _rxDlVertexFmtDest, local
/* 8021F958 0021CA38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8021F95C 0021CA3C  7C 08 02 A6 */	mflr r0
/* 8021F960 0021CA40  90 01 00 14 */	stw r0, 0x14(r1)
/* 8021F964 0021CA44  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8021F968 0021CA48  7C 7F 1B 78 */	mr r31, r3
/* 8021F96C 0021CA4C  7C 7F 20 2E */	lwzx r3, r31, r4
/* 8021F970 0021CA50  28 03 00 00 */	cmplwi r3, 0x0
/* 8021F974 0021CA54  41 82 00 08 */	beq .L_8021F97C
/* 8021F978 0021CA58  48 00 02 6D */	bl RpGameCubeVtxFmtDestroy
.L_8021F97C:
/* 8021F97C 0021CA5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8021F980 0021CA60  7F E3 FB 78 */	mr r3, r31
/* 8021F984 0021CA64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8021F988 0021CA68  7C 08 03 A6 */	mtlr r0
/* 8021F98C 0021CA6C  38 21 00 10 */	addi r1, r1, 0x10
/* 8021F990 0021CA70  4E 80 00 20 */	blr
.endfn _rxDlVertexFmtDest

.fn _rpDlVtxFmtOpen, local
/* 8021F994 0021CA74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8021F998 0021CA78  7C 08 02 A6 */	mflr r0
/* 8021F99C 0021CA7C  38 8D 9F 08 */	addi r4, r13, _RpVtxFmtModule@sda21
/* 8021F9A0 0021CA80  90 01 00 14 */	stw r0, 0x14(r1)
/* 8021F9A4 0021CA84  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8021F9A8 0021CA88  7C 7F 1B 78 */	mr r31, r3
/* 8021F9AC 0021CA8C  80 64 00 04 */	lwz r3, 0x4(r4)
/* 8021F9B0 0021CA90  38 03 00 01 */	addi r0, r3, 0x1
/* 8021F9B4 0021CA94  2C 00 00 01 */	cmpwi r0, 0x1
/* 8021F9B8 0021CA98  90 04 00 04 */	stw r0, 0x4(r4)
/* 8021F9BC 0021CA9C  40 82 00 10 */	bne .L_8021F9CC
/* 8021F9C0 0021CAA0  3C 60 80 38 */	lis r3, _RpDlVtxFmtDefault@ha
/* 8021F9C4 0021CAA4  38 63 37 88 */	addi r3, r3, _RpDlVtxFmtDefault@l
/* 8021F9C8 0021CAA8  48 00 01 11 */	bl RpGameCubeVtxFmtInit
.L_8021F9CC:
/* 8021F9CC 0021CAAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8021F9D0 0021CAB0  7F E3 FB 78 */	mr r3, r31
/* 8021F9D4 0021CAB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8021F9D8 0021CAB8  7C 08 03 A6 */	mtlr r0
/* 8021F9DC 0021CABC  38 21 00 10 */	addi r1, r1, 0x10
/* 8021F9E0 0021CAC0  4E 80 00 20 */	blr
.endfn _rpDlVtxFmtOpen

.fn _rpDlVtxFmtClose, local
/* 8021F9E4 0021CAC4  38 AD 9F 08 */	addi r5, r13, _RpVtxFmtModule@sda21
/* 8021F9E8 0021CAC8  80 85 00 04 */	lwz r4, 0x4(r5)
/* 8021F9EC 0021CACC  38 04 FF FF */	addi r0, r4, -0x1
/* 8021F9F0 0021CAD0  90 05 00 04 */	stw r0, 0x4(r5)
/* 8021F9F4 0021CAD4  4E 80 00 20 */	blr
.endfn _rpDlVtxFmtClose

.fn _rpDlVtxFmtPluginAttach, global
/* 8021F9F8 0021CAD8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8021F9FC 0021CADC  7C 08 02 A6 */	mflr r0
/* 8021FA00 0021CAE0  3C 60 80 22 */	lis r3, _rpDlVtxFmtOpen@ha
/* 8021FA04 0021CAE4  3C 80 80 22 */	lis r4, _rpDlVtxFmtClose@ha
/* 8021FA08 0021CAE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8021FA0C 0021CAEC  38 A3 F9 94 */	addi r5, r3, _rpDlVtxFmtOpen@l
/* 8021FA10 0021CAF0  38 C4 F9 E4 */	addi r6, r4, _rpDlVtxFmtClose@l
/* 8021FA14 0021CAF4  38 60 00 00 */	li r3, 0x0
/* 8021FA18 0021CAF8  38 80 05 11 */	li r4, 0x511
/* 8021FA1C 0021CAFC  48 01 83 49 */	bl RwEngineRegisterPlugin
/* 8021FA20 0021CB00  2C 03 00 00 */	cmpwi r3, 0x0
/* 8021FA24 0021CB04  40 80 00 0C */	bge .L_8021FA30
/* 8021FA28 0021CB08  38 60 00 00 */	li r3, 0x0
/* 8021FA2C 0021CB0C  48 00 00 6C */	b .L_8021FA98
.L_8021FA30:
/* 8021FA30 0021CB10  3C 60 80 22 */	lis r3, _rxDlVertexFmtConst@ha
/* 8021FA34 0021CB14  3C 80 80 22 */	lis r4, _rxDlVertexFmtDest@ha
/* 8021FA38 0021CB18  38 A3 F9 4C */	addi r5, r3, _rxDlVertexFmtConst@l
/* 8021FA3C 0021CB1C  38 E0 00 00 */	li r7, 0x0
/* 8021FA40 0021CB20  38 C4 F9 58 */	addi r6, r4, _rxDlVertexFmtDest@l
/* 8021FA44 0021CB24  38 60 00 04 */	li r3, 0x4
/* 8021FA48 0021CB28  38 80 05 11 */	li r4, 0x511
/* 8021FA4C 0021CB2C  4B FF 62 99 */	bl RpGeometryRegisterPlugin
/* 8021FA50 0021CB30  90 6D 9F 00 */	stw r3, _rpDlGeomVtxFmtOffset@sda21(r13)
/* 8021FA54 0021CB34  80 0D 9F 00 */	lwz r0, _rpDlGeomVtxFmtOffset@sda21(r13)
/* 8021FA58 0021CB38  2C 00 00 00 */	cmpwi r0, 0x0
/* 8021FA5C 0021CB3C  40 80 00 0C */	bge .L_8021FA68
/* 8021FA60 0021CB40  38 60 00 00 */	li r3, 0x0
/* 8021FA64 0021CB44  48 00 00 34 */	b .L_8021FA98
.L_8021FA68:
/* 8021FA68 0021CB48  3C 60 80 22 */	lis r3, _rxDlVertexFmtConst@ha
/* 8021FA6C 0021CB4C  3C 80 80 22 */	lis r4, _rxDlVertexFmtDest@ha
/* 8021FA70 0021CB50  38 A3 F9 4C */	addi r5, r3, _rxDlVertexFmtConst@l
/* 8021FA74 0021CB54  38 E0 00 00 */	li r7, 0x0
/* 8021FA78 0021CB58  38 C4 F9 58 */	addi r6, r4, _rxDlVertexFmtDest@l
/* 8021FA7C 0021CB5C  38 60 00 04 */	li r3, 0x4
/* 8021FA80 0021CB60  38 80 05 11 */	li r4, 0x511
/* 8021FA84 0021CB64  4B FF DB B5 */	bl RpWorldRegisterPlugin
/* 8021FA88 0021CB68  90 6D 9F 04 */	stw r3, _rpDlWorldVtxFmtOffset@sda21(r13)
/* 8021FA8C 0021CB6C  80 0D 9F 04 */	lwz r0, _rpDlWorldVtxFmtOffset@sda21(r13)
/* 8021FA90 0021CB70  54 00 0F FE */	srwi r0, r0, 31
/* 8021FA94 0021CB74  68 03 00 01 */	xori r3, r0, 0x1
.L_8021FA98:
/* 8021FA98 0021CB78  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8021FA9C 0021CB7C  7C 08 03 A6 */	mtlr r0
/* 8021FAA0 0021CB80  38 21 00 10 */	addi r1, r1, 0x10
/* 8021FAA4 0021CB84  4E 80 00 20 */	blr
.endfn _rpDlVtxFmtPluginAttach

.fn RpGameCubeVtxFmtSetPosition, global
/* 8021FAA8 0021CB88  98 83 00 00 */	stb r4, 0x0(r3)
/* 8021FAAC 0021CB8C  98 A3 00 0C */	stb r5, 0xc(r3)
/* 8021FAB0 0021CB90  4E 80 00 20 */	blr
.endfn RpGameCubeVtxFmtSetPosition

.fn RpGameCubeVtxFmtSetNormal, global
/* 8021FAB4 0021CB94  98 83 00 01 */	stb r4, 0x1(r3)
/* 8021FAB8 0021CB98  98 A3 00 0D */	stb r5, 0xd(r3)
/* 8021FABC 0021CB9C  4E 80 00 20 */	blr
.endfn RpGameCubeVtxFmtSetNormal

.fn RpGameCubeVtxFmtSetTexCoord, global
/* 8021FAC0 0021CBA0  7C 63 22 14 */	add r3, r3, r4
/* 8021FAC4 0021CBA4  98 A3 00 01 */	stb r5, 0x1(r3)
/* 8021FAC8 0021CBA8  98 C3 00 0D */	stb r6, 0xd(r3)
/* 8021FACC 0021CBAC  4E 80 00 20 */	blr
.endfn RpGameCubeVtxFmtSetTexCoord

.fn RpGameCubeVtxFmtSetPreLight, global
/* 8021FAD0 0021CBB0  98 83 00 0A */	stb r4, 0xa(r3)
/* 8021FAD4 0021CBB4  4E 80 00 20 */	blr
.endfn RpGameCubeVtxFmtSetPreLight

.fn RpGameCubeVtxFmtInit, global
/* 8021FAD8 0021CBB8  38 C0 00 04 */	li r6, 0x4
/* 8021FADC 0021CBBC  38 A0 00 05 */	li r5, 0x5
/* 8021FAE0 0021CBC0  98 C3 00 00 */	stb r6, 0x0(r3)
/* 8021FAE4 0021CBC4  38 80 00 01 */	li r4, 0x1
/* 8021FAE8 0021CBC8  38 00 00 00 */	li r0, 0x0
/* 8021FAEC 0021CBCC  98 C3 00 01 */	stb r6, 0x1(r3)
/* 8021FAF0 0021CBD0  98 C3 00 02 */	stb r6, 0x2(r3)
/* 8021FAF4 0021CBD4  98 C3 00 03 */	stb r6, 0x3(r3)
/* 8021FAF8 0021CBD8  98 C3 00 04 */	stb r6, 0x4(r3)
/* 8021FAFC 0021CBDC  98 C3 00 05 */	stb r6, 0x5(r3)
/* 8021FB00 0021CBE0  98 C3 00 06 */	stb r6, 0x6(r3)
/* 8021FB04 0021CBE4  98 C3 00 07 */	stb r6, 0x7(r3)
/* 8021FB08 0021CBE8  98 C3 00 08 */	stb r6, 0x8(r3)
/* 8021FB0C 0021CBEC  98 C3 00 09 */	stb r6, 0x9(r3)
/* 8021FB10 0021CBF0  98 A3 00 0A */	stb r5, 0xa(r3)
/* 8021FB14 0021CBF4  98 83 00 0B */	stb r4, 0xb(r3)
/* 8021FB18 0021CBF8  98 03 00 0C */	stb r0, 0xc(r3)
/* 8021FB1C 0021CBFC  98 03 00 0E */	stb r0, 0xe(r3)
/* 8021FB20 0021CC00  98 03 00 0F */	stb r0, 0xf(r3)
/* 8021FB24 0021CC04  98 03 00 10 */	stb r0, 0x10(r3)
/* 8021FB28 0021CC08  98 03 00 11 */	stb r0, 0x11(r3)
/* 8021FB2C 0021CC0C  98 03 00 12 */	stb r0, 0x12(r3)
/* 8021FB30 0021CC10  98 03 00 13 */	stb r0, 0x13(r3)
/* 8021FB34 0021CC14  98 03 00 14 */	stb r0, 0x14(r3)
/* 8021FB38 0021CC18  98 03 00 15 */	stb r0, 0x15(r3)
/* 8021FB3C 0021CC1C  98 03 00 0D */	stb r0, 0xd(r3)
/* 8021FB40 0021CC20  B0 83 00 16 */	sth r4, 0x16(r3)
/* 8021FB44 0021CC24  4E 80 00 20 */	blr
.endfn RpGameCubeVtxFmtInit

.fn RpGameCubeVtxFmtCreate, global
/* 8021FB48 0021CC28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8021FB4C 0021CC2C  7C 08 02 A6 */	mflr r0
/* 8021FB50 0021CC30  38 60 00 18 */	li r3, 0x18
/* 8021FB54 0021CC34  90 01 00 14 */	stw r0, 0x14(r1)
/* 8021FB58 0021CC38  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8021FB5C 0021CC3C  81 84 01 34 */	lwz r12, 0x134(r4)
/* 8021FB60 0021CC40  7D 89 03 A6 */	mtctr r12
/* 8021FB64 0021CC44  4E 80 04 21 */	bctrl
/* 8021FB68 0021CC48  38 C0 00 04 */	li r6, 0x4
/* 8021FB6C 0021CC4C  38 A0 00 05 */	li r5, 0x5
/* 8021FB70 0021CC50  98 C3 00 00 */	stb r6, 0x0(r3)
/* 8021FB74 0021CC54  38 80 00 01 */	li r4, 0x1
/* 8021FB78 0021CC58  38 00 00 00 */	li r0, 0x0
/* 8021FB7C 0021CC5C  98 C3 00 01 */	stb r6, 0x1(r3)
/* 8021FB80 0021CC60  98 C3 00 02 */	stb r6, 0x2(r3)
/* 8021FB84 0021CC64  98 C3 00 03 */	stb r6, 0x3(r3)
/* 8021FB88 0021CC68  98 C3 00 04 */	stb r6, 0x4(r3)
/* 8021FB8C 0021CC6C  98 C3 00 05 */	stb r6, 0x5(r3)
/* 8021FB90 0021CC70  98 C3 00 06 */	stb r6, 0x6(r3)
/* 8021FB94 0021CC74  98 C3 00 07 */	stb r6, 0x7(r3)
/* 8021FB98 0021CC78  98 C3 00 08 */	stb r6, 0x8(r3)
/* 8021FB9C 0021CC7C  98 C3 00 09 */	stb r6, 0x9(r3)
/* 8021FBA0 0021CC80  98 A3 00 0A */	stb r5, 0xa(r3)
/* 8021FBA4 0021CC84  98 83 00 0B */	stb r4, 0xb(r3)
/* 8021FBA8 0021CC88  98 03 00 0C */	stb r0, 0xc(r3)
/* 8021FBAC 0021CC8C  98 03 00 0E */	stb r0, 0xe(r3)
/* 8021FBB0 0021CC90  98 03 00 0F */	stb r0, 0xf(r3)
/* 8021FBB4 0021CC94  98 03 00 10 */	stb r0, 0x10(r3)
/* 8021FBB8 0021CC98  98 03 00 11 */	stb r0, 0x11(r3)
/* 8021FBBC 0021CC9C  98 03 00 12 */	stb r0, 0x12(r3)
/* 8021FBC0 0021CCA0  98 03 00 13 */	stb r0, 0x13(r3)
/* 8021FBC4 0021CCA4  98 03 00 14 */	stb r0, 0x14(r3)
/* 8021FBC8 0021CCA8  98 03 00 15 */	stb r0, 0x15(r3)
/* 8021FBCC 0021CCAC  98 03 00 0D */	stb r0, 0xd(r3)
/* 8021FBD0 0021CCB0  B0 83 00 16 */	sth r4, 0x16(r3)
/* 8021FBD4 0021CCB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8021FBD8 0021CCB8  7C 08 03 A6 */	mtlr r0
/* 8021FBDC 0021CCBC  38 21 00 10 */	addi r1, r1, 0x10
/* 8021FBE0 0021CCC0  4E 80 00 20 */	blr
.endfn RpGameCubeVtxFmtCreate

.fn RpGameCubeVtxFmtDestroy, global
/* 8021FBE4 0021CCC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8021FBE8 0021CCC8  7C 08 02 A6 */	mflr r0
/* 8021FBEC 0021CCCC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8021FBF0 0021CCD0  A0 83 00 16 */	lhz r4, 0x16(r3)
/* 8021FBF4 0021CCD4  28 04 00 01 */	cmplwi r4, 0x1
/* 8021FBF8 0021CCD8  40 82 00 18 */	bne .L_8021FC10
/* 8021FBFC 0021CCDC  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8021FC00 0021CCE0  81 84 01 38 */	lwz r12, 0x138(r4)
/* 8021FC04 0021CCE4  7D 89 03 A6 */	mtctr r12
/* 8021FC08 0021CCE8  4E 80 04 21 */	bctrl
/* 8021FC0C 0021CCEC  48 00 00 0C */	b .L_8021FC18
.L_8021FC10:
/* 8021FC10 0021CCF0  38 04 FF FF */	addi r0, r4, -0x1
/* 8021FC14 0021CCF4  B0 03 00 16 */	sth r0, 0x16(r3)
.L_8021FC18:
/* 8021FC18 0021CCF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8021FC1C 0021CCFC  7C 08 03 A6 */	mtlr r0
/* 8021FC20 0021CD00  38 21 00 10 */	addi r1, r1, 0x10
/* 8021FC24 0021CD04  4E 80 00 20 */	blr
.endfn RpGameCubeVtxFmtDestroy

.fn RpGameCubeGeometrySetVtxFmt, global
/* 8021FC28 0021CD08  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8021FC2C 0021CD0C  7C 08 02 A6 */	mflr r0
/* 8021FC30 0021CD10  90 01 00 24 */	stw r0, 0x24(r1)
/* 8021FC34 0021CD14  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8021FC38 0021CD18  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8021FC3C 0021CD1C  7C 9E 23 78 */	mr r30, r4
/* 8021FC40 0021CD20  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8021FC44 0021CD24  7C 7D 1B 78 */	mr r29, r3
/* 8021FC48 0021CD28  83 ED 9F 00 */	lwz r31, _rpDlGeomVtxFmtOffset@sda21(r13)
/* 8021FC4C 0021CD2C  7C 7D F8 2E */	lwzx r3, r29, r31
/* 8021FC50 0021CD30  28 03 00 00 */	cmplwi r3, 0x0
/* 8021FC54 0021CD34  41 82 00 2C */	beq .L_8021FC80
/* 8021FC58 0021CD38  A0 83 00 16 */	lhz r4, 0x16(r3)
/* 8021FC5C 0021CD3C  28 04 00 01 */	cmplwi r4, 0x1
/* 8021FC60 0021CD40  40 82 00 18 */	bne .L_8021FC78
/* 8021FC64 0021CD44  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 8021FC68 0021CD48  81 84 01 38 */	lwz r12, 0x138(r4)
/* 8021FC6C 0021CD4C  7D 89 03 A6 */	mtctr r12
/* 8021FC70 0021CD50  4E 80 04 21 */	bctrl
/* 8021FC74 0021CD54  48 00 00 0C */	b .L_8021FC80
.L_8021FC78:
/* 8021FC78 0021CD58  38 04 FF FF */	addi r0, r4, -0x1
/* 8021FC7C 0021CD5C  B0 03 00 16 */	sth r0, 0x16(r3)
.L_8021FC80:
/* 8021FC80 0021CD60  7F DD F9 2E */	stwx r30, r29, r31
/* 8021FC84 0021CD64  7C 9D F8 2E */	lwzx r4, r29, r31
/* 8021FC88 0021CD68  A0 64 00 16 */	lhz r3, 0x16(r4)
/* 8021FC8C 0021CD6C  38 03 00 01 */	addi r0, r3, 0x1
/* 8021FC90 0021CD70  B0 04 00 16 */	sth r0, 0x16(r4)
/* 8021FC94 0021CD74  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8021FC98 0021CD78  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8021FC9C 0021CD7C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8021FCA0 0021CD80  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8021FCA4 0021CD84  7C 08 03 A6 */	mtlr r0
/* 8021FCA8 0021CD88  38 21 00 20 */	addi r1, r1, 0x20
/* 8021FCAC 0021CD8C  4E 80 00 20 */	blr
.endfn RpGameCubeGeometrySetVtxFmt

# 0x80383788 - 0x803837A0
.section .bss, "wa", @nobits
.balign 8

.obj _RpDlVtxFmtDefault, local
	.skip 0x18
.endobj _RpDlVtxFmtDefault

# 0x803CC800 - 0x803CC810
.section .sbss, "wa", @nobits
.balign 8

.obj _rpDlGeomVtxFmtOffset, global
	.skip 0x4
.endobj _rpDlGeomVtxFmtOffset

.obj _rpDlWorldVtxFmtOffset, global
	.skip 0x4
.endobj _rpDlWorldVtxFmtOffset

.obj _RpVtxFmtModule, local
	.skip 0x8
.endobj _RpVtxFmtModule
