.include "macros.inc"

.if 0

.section .text  # 0x8010F82C - 0x801102B8

.global Init__9xNPCBasicFP9xEntAsset
Init__9xNPCBasicFP9xEntAsset:
/* 8010F82C 0010C62C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010F830 0010C630  7C 08 02 A6 */	mflr r0
/* 8010F834 0010C634  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010F838 0010C638  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8010F83C 0010C63C  7C 7F 1B 78 */	mr r31, r3
/* 8010F840 0010C640  93 C1 00 08 */	stw r30, 8(r1)
/* 8010F844 0010C644  7C 9E 23 78 */	mr r30, r4
/* 8010F848 0010C648  C0 22 9E 50 */	lfs f1, xNPCBasic_float_0-_SDA2_BASE_(r2)
/* 8010F84C 0010C64C  C0 04 00 2C */	lfs f0, 0x2c(r4)
/* 8010F850 0010C650  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8010F854 0010C654  40 82 00 0C */	bne lbl_8010F860
/* 8010F858 0010C658  C0 02 9E 54 */	lfs f0, xNPCBasic_float_1-_SDA2_BASE_(r2)
/* 8010F85C 0010C65C  D0 1E 00 2C */	stfs f0, 0x2c(r30)
lbl_8010F860:
/* 8010F860 0010C660  C0 22 9E 50 */	lfs f1, xNPCBasic_float_0-_SDA2_BASE_(r2)
/* 8010F864 0010C664  C0 1E 00 30 */	lfs f0, 0x30(r30)
/* 8010F868 0010C668  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8010F86C 0010C66C  40 82 00 0C */	bne lbl_8010F878
/* 8010F870 0010C670  C0 02 9E 54 */	lfs f0, xNPCBasic_float_1-_SDA2_BASE_(r2)
/* 8010F874 0010C674  D0 1E 00 30 */	stfs f0, 0x30(r30)
lbl_8010F878:
/* 8010F878 0010C678  C0 22 9E 50 */	lfs f1, xNPCBasic_float_0-_SDA2_BASE_(r2)
/* 8010F87C 0010C67C  C0 1E 00 34 */	lfs f0, 0x34(r30)
/* 8010F880 0010C680  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8010F884 0010C684  40 82 00 0C */	bne lbl_8010F890
/* 8010F888 0010C688  C0 02 9E 54 */	lfs f0, xNPCBasic_float_1-_SDA2_BASE_(r2)
/* 8010F88C 0010C68C  D0 1E 00 34 */	stfs f0, 0x34(r30)
lbl_8010F890:
/* 8010F890 0010C690  7F E3 FB 78 */	mr r3, r31
/* 8010F894 0010C694  7F C4 F3 78 */	mr r4, r30
/* 8010F898 0010C698  4B F0 8D 19 */	bl xEntInit__FP4xEntP9xEntAsset
/* 8010F89C 0010C69C  38 00 00 08 */	li r0, 8
/* 8010F8A0 0010C6A0  38 80 00 04 */	li r4, 4
/* 8010F8A4 0010C6A4  98 1F 00 20 */	stb r0, 0x20(r31)
/* 8010F8A8 0010C6A8  38 00 00 01 */	li r0, 1
/* 8010F8AC 0010C6AC  7F E3 FB 78 */	mr r3, r31
/* 8010F8B0 0010C6B0  98 9F 00 21 */	stb r4, 0x21(r31)
/* 8010F8B4 0010C6B4  98 1F 00 84 */	stb r0, 0x84(r31)
/* 8010F8B8 0010C6B8  88 1F 00 1C */	lbz r0, 0x1c(r31)
/* 8010F8BC 0010C6BC  60 00 00 10 */	ori r0, r0, 0x10
/* 8010F8C0 0010C6C0  98 1F 00 1C */	stb r0, 0x1c(r31)
/* 8010F8C4 0010C6C4  80 9E 00 4C */	lwz r4, 0x4c(r30)
/* 8010F8C8 0010C6C8  4B F4 5D D1 */	bl zEntParseModelInfo__FP4xEntUi
/* 8010F8CC 0010C6CC  7F E3 FB 78 */	mr r3, r31
/* 8010F8D0 0010C6D0  4B F0 8E 01 */	bl xEntInitForType__FP4xEnt
/* 8010F8D4 0010C6D4  7F E3 FB 78 */	mr r3, r31
/* 8010F8D8 0010C6D8  38 9F 00 F8 */	addi r4, r31, 0xf8
/* 8010F8DC 0010C6DC  4B F0 BE 31 */	bl xEntInitShadow__FR4xEntR10xEntShadow
/* 8010F8E0 0010C6E0  38 1F 01 20 */	addi r0, r31, 0x120
/* 8010F8E4 0010C6E4  7F E4 FB 78 */	mr r4, r31
/* 8010F8E8 0010C6E8  90 1F 00 C0 */	stw r0, 0xc0(r31)
/* 8010F8EC 0010C6EC  38 A0 00 50 */	li r5, 0x50
/* 8010F8F0 0010C6F0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8010F8F4 0010C6F4  48 02 A4 09 */	bl xShadowSimple_CacheInit__FP18xShadowSimpleCacheP4xEntUc
/* 8010F8F8 0010C6F8  88 1F 00 84 */	lbz r0, 0x84(r31)
/* 8010F8FC 0010C6FC  28 00 00 02 */	cmplwi r0, 2
/* 8010F900 0010C700  40 82 00 24 */	bne lbl_8010F924
/* 8010F904 0010C704  80 9F 00 28 */	lwz r4, 0x28(r31)
/* 8010F908 0010C708  28 04 00 00 */	cmplwi r4, 0
/* 8010F90C 0010C70C  41 82 00 08 */	beq lbl_8010F914
/* 8010F910 0010C710  48 00 00 08 */	b lbl_8010F918
lbl_8010F914:
/* 8010F914 0010C714  80 9F 00 24 */	lwz r4, 0x24(r31)
lbl_8010F918:
/* 8010F918 0010C718  38 7F 00 94 */	addi r3, r31, 0x94
/* 8010F91C 0010C71C  4B FB 33 51 */	bl iBoxForModel__FP4xBoxPC14xModelInstance
/* 8010F920 0010C720  48 00 00 28 */	b lbl_8010F948
lbl_8010F924:
/* 8010F924 0010C724  28 00 00 04 */	cmplwi r0, 4
/* 8010F928 0010C728  40 82 00 20 */	bne lbl_8010F948
/* 8010F92C 0010C72C  80 9F 00 28 */	lwz r4, 0x28(r31)
/* 8010F930 0010C730  28 04 00 00 */	cmplwi r4, 0
/* 8010F934 0010C734  41 82 00 08 */	beq lbl_8010F93C
/* 8010F938 0010C738  48 00 00 08 */	b lbl_8010F940
lbl_8010F93C:
/* 8010F93C 0010C73C  80 9F 00 24 */	lwz r4, 0x24(r31)
lbl_8010F940:
/* 8010F940 0010C740  38 7F 00 94 */	addi r3, r31, 0x94
/* 8010F944 0010C744  4B FB 33 81 */	bl iBoxForModelLocal__FP4xBoxPC14xModelInstance
lbl_8010F948:
/* 8010F948 0010C748  A8 1F 00 E4 */	lha r0, 0xe4(r31)
/* 8010F94C 0010C74C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8010F950 0010C750  41 82 00 28 */	beq lbl_8010F978
/* 8010F954 0010C754  80 6D 89 E0 */	lwz r3, gActiveHeap-_SDA_BASE_(r13)
/* 8010F958 0010C758  38 80 05 B4 */	li r4, 0x5b4
/* 8010F95C 0010C75C  38 A0 00 00 */	li r5, 0
/* 8010F960 0010C760  4B F2 3F E1 */	bl xMemAlloc__FUiUii
/* 8010F964 0010C764  90 7F 00 4C */	stw r3, 0x4c(r31)
/* 8010F968 0010C768  38 80 00 00 */	li r4, 0
/* 8010F96C 0010C76C  38 A0 05 B4 */	li r5, 0x5b4
/* 8010F970 0010C770  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 8010F974 0010C774  4B EF 3A E5 */	bl memset
lbl_8010F978:
/* 8010F978 0010C778  A8 1F 00 E4 */	lha r0, 0xe4(r31)
/* 8010F97C 0010C77C  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8010F980 0010C780  40 82 00 28 */	bne lbl_8010F9A8
/* 8010F984 0010C784  80 6D 89 E0 */	lwz r3, gActiveHeap-_SDA_BASE_(r13)
/* 8010F988 0010C788  38 80 00 E4 */	li r4, 0xe4
/* 8010F98C 0010C78C  38 A0 00 00 */	li r5, 0
/* 8010F990 0010C790  4B F2 3F B1 */	bl xMemAlloc__FUiUii
/* 8010F994 0010C794  90 7F 00 48 */	stw r3, 0x48(r31)
/* 8010F998 0010C798  38 80 00 00 */	li r4, 0
/* 8010F99C 0010C79C  38 A0 00 E4 */	li r5, 0xe4
/* 8010F9A0 0010C7A0  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 8010F9A4 0010C7A4  4B EF 3A B5 */	bl memset
lbl_8010F9A8:
/* 8010F9A8 0010C7A8  7F E3 FB 78 */	mr r3, r31
/* 8010F9AC 0010C7AC  4B FC 97 89 */	bl RestoreColFlags__9xNPCBasicFv
/* 8010F9B0 0010C7B0  3C 60 80 11 */	lis r3, NPC_entwrap_setup__FP4xEnt@ha
/* 8010F9B4 0010C7B4  3C 80 80 11 */	lis r4, NPC_entwrap_reset__FP4xEnt@ha
/* 8010F9B8 0010C7B8  38 03 00 00 */	addi r0, r3, NPC_entwrap_setup__FP4xEnt@l
/* 8010F9BC 0010C7BC  3C 60 80 11 */	lis r3, NPC_entwrap_event__FP5xBaseP5xBaseUiPCfP5xBase@ha
/* 8010F9C0 0010C7C0  90 1F 00 DC */	stw r0, 0xdc(r31)
/* 8010F9C4 0010C7C4  38 04 00 48 */	addi r0, r4, NPC_entwrap_reset__FP4xEnt@l
/* 8010F9C8 0010C7C8  3C C0 80 11 */	lis r6, NPC_entwrap_update__FP4xEntP6xScenef@ha
/* 8010F9CC 0010C7CC  3C A0 80 11 */	lis r5, NPC_entwrap_bupdate__FP4xEntP5xVec3@ha
/* 8010F9D0 0010C7D0  90 1F 00 E0 */	stw r0, 0xe0(r31)
/* 8010F9D4 0010C7D4  38 03 02 0C */	addi r0, r3, NPC_entwrap_event__FP5xBaseP5xBaseUiPCfP5xBase@l
/* 8010F9D8 0010C7D8  3C 80 80 11 */	lis r4, NPC_entwrap_move__FP4xEntP6xScenefP9xEntFrame@ha
/* 8010F9DC 0010C7DC  3C 60 80 11 */	lis r3, NPC_entwrap_render__FP4xEnt@ha
/* 8010F9E0 0010C7E0  90 1F 00 0C */	stw r0, 0xc(r31)
/* 8010F9E4 0010C7E4  38 06 00 90 */	addi r0, r6, NPC_entwrap_update__FP4xEntP6xScenef@l
/* 8010F9E8 0010C7E8  38 A5 01 B4 */	addi r5, r5, NPC_entwrap_bupdate__FP4xEntP5xVec3@l
/* 8010F9EC 0010C7EC  38 84 01 E0 */	addi r4, r4, NPC_entwrap_move__FP4xEntP6xScenefP9xEntFrame@l
/* 8010F9F0 0010C7F0  90 1F 00 34 */	stw r0, 0x34(r31)
/* 8010F9F4 0010C7F4  38 03 02 64 */	addi r0, r3, NPC_entwrap_render__FP4xEnt@l
/* 8010F9F8 0010C7F8  90 BF 00 3C */	stw r5, 0x3c(r31)
/* 8010F9FC 0010C7FC  90 9F 00 40 */	stw r4, 0x40(r31)
/* 8010FA00 0010C800  90 1F 00 44 */	stw r0, 0x44(r31)
/* 8010FA04 0010C804  A0 1F 00 06 */	lhz r0, 6(r31)
/* 8010FA08 0010C808  70 00 FF EF */	andi. r0, r0, 0xffef
/* 8010FA0C 0010C80C  B0 1F 00 06 */	sth r0, 6(r31)
/* 8010FA10 0010C810  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8010FA14 0010C814  83 C1 00 08 */	lwz r30, 8(r1)
/* 8010FA18 0010C818  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010FA1C 0010C81C  7C 08 03 A6 */	mtlr r0
/* 8010FA20 0010C820  38 21 00 10 */	addi r1, r1, 0x10
/* 8010FA24 0010C824  4E 80 00 20 */	blr 

.global Reset__9xNPCBasicFv
Reset__9xNPCBasicFv:
/* 8010FA28 0010C828  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8010FA2C 0010C82C  7C 08 02 A6 */	mflr r0
/* 8010FA30 0010C830  90 01 00 24 */	stw r0, 0x24(r1)
/* 8010FA34 0010C834  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8010FA38 0010C838  7C 7F 1B 78 */	mr r31, r3
/* 8010FA3C 0010C83C  4B F0 95 15 */	bl xEntReset__FP4xEnt
/* 8010FA40 0010C840  7F E3 FB 78 */	mr r3, r31
/* 8010FA44 0010C844  48 00 08 4D */	bl DBG_PStatClear__9xNPCBasicFv
/* 8010FA48 0010C848  A8 1F 00 E4 */	lha r0, 0xe4(r31)
/* 8010FA4C 0010C84C  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8010FA50 0010C850  40 82 00 48 */	bne lbl_8010FA98
/* 8010FA54 0010C854  80 BF 00 48 */	lwz r5, 0x48(r31)
/* 8010FA58 0010C858  3C 60 80 25 */	lis r3, g_Y3@ha
/* 8010FA5C 0010C85C  38 83 30 30 */	addi r4, r3, g_Y3@l
/* 8010FA60 0010C860  38 65 00 9C */	addi r3, r5, 0x9c
/* 8010FA64 0010C864  4B F3 EA 79 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 8010FA68 0010C868  C0 02 9E 50 */	lfs f0, xNPCBasic_float_0-_SDA2_BASE_(r2)
/* 8010FA6C 0010C86C  3C 60 80 25 */	lis r3, g_Y3@ha
/* 8010FA70 0010C870  80 BF 00 48 */	lwz r5, 0x48(r31)
/* 8010FA74 0010C874  38 83 30 30 */	addi r4, r3, g_Y3@l
/* 8010FA78 0010C878  D0 05 00 A8 */	stfs f0, 0xa8(r5)
/* 8010FA7C 0010C87C  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 8010FA80 0010C880  38 63 00 AC */	addi r3, r3, 0xac
/* 8010FA84 0010C884  4B F3 EA 59 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 8010FA88 0010C888  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 8010FA8C 0010C88C  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 8010FA90 0010C890  C0 04 00 14 */	lfs f0, 0x14(r4)
/* 8010FA94 0010C894  D0 03 00 B8 */	stfs f0, 0xb8(r3)
lbl_8010FA98:
/* 8010FA98 0010C898  A8 7F 00 E4 */	lha r3, 0xe4(r31)
/* 8010FA9C 0010C89C  38 00 FF FF */	li r0, -1
/* 8010FAA0 0010C8A0  60 63 00 04 */	ori r3, r3, 4
/* 8010FAA4 0010C8A4  B0 7F 00 E4 */	sth r3, 0xe4(r31)
/* 8010FAA8 0010C8A8  90 1F 00 E8 */	stw r0, 0xe8(r31)
/* 8010FAAC 0010C8AC  4B F2 11 DD */	bl xurand__Fv
/* 8010FAB0 0010C8B0  C0 02 9E 60 */	lfs f0, xNPCBasic_float_onehalf-_SDA2_BASE_(r2)
/* 8010FAB4 0010C8B4  7F E3 FB 78 */	mr r3, r31
/* 8010FAB8 0010C8B8  C0 42 9E 5C */	lfs f2, xNPCBasic_float_onequarter-_SDA2_BASE_(r2)
/* 8010FABC 0010C8BC  EC 21 00 28 */	fsubs f1, f1, f0
/* 8010FAC0 0010C8C0  C0 02 9E 58 */	lfs f0, xNPCBasic_float_15-_SDA2_BASE_(r2)
/* 8010FAC4 0010C8C4  EC 22 00 72 */	fmuls f1, f2, f1
/* 8010FAC8 0010C8C8  EC 00 00 7A */	fmadds f0, f0, f1, f0
/* 8010FACC 0010C8CC  FC 00 00 1E */	fctiwz f0, f0
/* 8010FAD0 0010C8D0  D8 01 00 08 */	stfd f0, 8(r1)
/* 8010FAD4 0010C8D4  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8010FAD8 0010C8D8  90 1F 00 EC */	stw r0, 0xec(r31)
/* 8010FADC 0010C8DC  4B FC 96 59 */	bl RestoreColFlags__9xNPCBasicFv
/* 8010FAE0 0010C8E0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8010FAE4 0010C8E4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8010FAE8 0010C8E8  7C 08 03 A6 */	mtlr r0
/* 8010FAEC 0010C8EC  38 21 00 20 */	addi r1, r1, 0x20
/* 8010FAF0 0010C8F0  4E 80 00 20 */	blr 

.endif

.section .rodata
.global lbl_8026A3F8
lbl_8026A3F8:
	.incbin "baserom.dol", 0x2673D8, 0x10

.section .data
.global g_colrec
g_colrec:
	.incbin "baserom.dol", 0x294440, 0x5B4
/* SPECULATION: link order */
.global __vt__9xNPCBasic
__vt__9xNPCBasic:
	.incbin "baserom.dol", 0x2949F4, 0x54

.section .sdata2
.global xNPCBasic_float_0
xNPCBasic_float_0:
	.incbin "baserom.dol", 0x2B8070, 0x4

.global xNPCBasic_float_1	
xNPCBasic_float_1:
	.incbin "baserom.dol", 0x2B8074, 0x4

.global xNPCBasic_float_15
xNPCBasic_float_15:
	.incbin "baserom.dol", 0x2B8078, 0x4

.global xNPCBasic_float_onequarter
xNPCBasic_float_onequarter:
	.incbin "baserom.dol", 0x2B807C, 0x4

.global xNPCBasic_float_onehalf
xNPCBasic_float_onehalf:
	.incbin "baserom.dol", 0x2B8080, 0x4

.global xNPCBasic_float_0p75
xNPCBasic_float_0p75:
	.incbin "baserom.dol", 0x2B8084, 0x4

.global xNPCBasic_float_1eminus5
xNPCBasic_float_1eminus5:
	.incbin "baserom.dol", 0x2B8088, 0x4

.global xNPCBasic_float_0p2
xNPCBasic_float_0p2:
	.incbin "baserom.dol", 0x2B808C, 0x4

.global xNPCBasic_float_thirty
xNPCBasic_float_thirty:
	.incbin "baserom.dol", 0x2B8090, 0x4

.global xNCPBasic_float_0p10000000
xNCPBasic_float_0p10000000:
	.incbin "baserom.dol", 0x2B8094, 0x4

.global xNPCBasic_float_0p025
xNPCBasic_float_0p025:
	.incbin "baserom.dol", 0x2B8098, 0x4

.global xNPCBasic_float_0p04
xNPCBasic_float_0p04:
	.incbin "baserom.dol", 0x2B809C, 0x4
