.include "macros.inc"

.if 0

.section .text  # 0x80123740 - 0x80123B1C

.global zGooCollsBegin__Fv
zGooCollsBegin__Fv:
/* 801238EC 001206EC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801238F0 001206F0  7C 08 02 A6 */	mflr r0
/* 801238F4 001206F4  90 01 00 34 */	stw r0, 0x34(r1)
/* 801238F8 001206F8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801238FC 001206FC  3B E0 00 00 */	li r31, 0
/* 80123900 00120700  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80123904 00120704  3B C0 00 00 */	li r30, 0
/* 80123908 00120708  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8012390C 0012070C  48 00 00 64 */	b lbl_80123970
lbl_80123910:
/* 80123910 00120710  80 6D 95 50 */	lwz r3, zgoo_gps-_SDA_BASE_(r13)
/* 80123914 00120714  38 1F 00 08 */	addi r0, r31, 8
/* 80123918 00120718  38 81 00 08 */	addi r4, r1, 8
/* 8012391C 0012071C  38 A0 00 00 */	li r5, 0
/* 80123920 00120720  7F A3 00 2E */	lwzx r29, r3, r0
/* 80123924 00120724  7F A3 EB 78 */	mr r3, r29
/* 80123928 00120728  4B FF FF 09 */	bl zGooIs__FP4xEntRfUi
/* 8012392C 0012072C  81 9D 00 B0 */	lwz r12, 0xb0(r29)
/* 80123930 00120730  28 0C 00 00 */	cmplwi r12, 0
/* 80123934 00120734  41 82 00 34 */	beq lbl_80123968
/* 80123938 00120738  C0 22 A0 C8 */	lfs f1, _742_2-_SDA2_BASE_(r2)
/* 8012393C 0012073C  7F A3 EB 78 */	mr r3, r29
/* 80123940 00120740  38 81 00 0C */	addi r4, r1, 0xc
/* 80123944 00120744  38 A0 00 00 */	li r5, 0
/* 80123948 00120748  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8012394C 0012074C  80 CD 95 50 */	lwz r6, zgoo_gps-_SDA_BASE_(r13)
/* 80123950 00120750  7C 06 FC 2E */	lfsx f0, r6, r31
/* 80123954 00120754  FC 00 00 50 */	fneg f0, f0
/* 80123958 00120758  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 8012395C 0012075C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80123960 00120760  7D 89 03 A6 */	mtctr r12
/* 80123964 00120764  4E 80 04 21 */	bctrl 
lbl_80123968:
/* 80123968 00120768  3B FF 00 0C */	addi r31, r31, 0xc
/* 8012396C 0012076C  3B DE 00 01 */	addi r30, r30, 1
lbl_80123970:
/* 80123970 00120770  80 0D 95 58 */	lwz r0, zgoo_nused-_SDA_BASE_(r13)
/* 80123974 00120774  7C 1E 00 00 */	cmpw r30, r0
/* 80123978 00120778  41 80 FF 98 */	blt lbl_80123910
/* 8012397C 0012077C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80123980 00120780  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80123984 00120784  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80123988 00120788  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8012398C 0012078C  7C 08 03 A6 */	mtlr r0
/* 80123990 00120790  38 21 00 30 */	addi r1, r1, 0x30
/* 80123994 00120794  4E 80 00 20 */	blr 

.endif

.section .sbss
.global zgoo_gps
zgoo_gps:
	.skip 0x4
.global zgoo_ngps
zgoo_ngps:
	.skip 0x4
.global zgoo_nused
zgoo_nused:
	.skip 0x8

.section .sdata2
.global _742_2
_742_2:
	.incbin "baserom.dol", 0x2B82E8, 0x4
.global _780_1
_780_1:
	.incbin "baserom.dol", 0x2B82EC, 0x4
