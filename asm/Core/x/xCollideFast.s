.include "macros.inc"

.if 0

.section .text  # 0x800159D4 - 0x80015B3C

.global xRayHitsSphereFast__FPC5xRay3PC7xSphere
xRayHitsSphereFast__FPC5xRay3PC7xSphere:
/* 800159F4 000127F4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 800159F8 000127F8  7C 08 02 A6 */	mflr r0
/* 800159FC 000127FC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80015A00 00012800  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80015A04 00012804  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 80015A08 00012808  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80015A0C 0001280C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80015A10 00012810  7C 7E 1B 78 */	mr r30, r3
/* 80015A14 00012814  7C 9F 23 78 */	mr r31, r4
/* 80015A18 00012818  7F C4 F3 78 */	mr r4, r30
/* 80015A1C 0001281C  38 61 00 08 */	addi r3, r1, 8
/* 80015A20 00012820  7F E5 FB 78 */	mr r5, r31
/* 80015A24 00012824  4B FF 8C 6D */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 80015A28 00012828  38 61 00 08 */	addi r3, r1, 8
/* 80015A2C 0001282C  7C 64 1B 78 */	mr r4, r3
/* 80015A30 00012830  48 03 8A C1 */	bl xVec3Dot__FPC5xVec3PC5xVec3
/* 80015A34 00012834  C0 7F 00 0C */	lfs f3, 0xc(r31)
/* 80015A38 00012838  C0 02 81 78 */	lfs f0, lbl_803CCAF8-_SDA2_BASE_(r2)
/* 80015A3C 0001283C  EC 43 00 F2 */	fmuls f2, f3, f3
/* 80015A40 00012840  EF E1 10 28 */	fsubs f31, f1, f2
/* 80015A44 00012844  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80015A48 00012848  4C 40 13 82 */	cror 2, 0, 2
/* 80015A4C 0001284C  40 82 00 0C */	bne lbl_80015A58
/* 80015A50 00012850  38 60 00 01 */	li r3, 1
/* 80015A54 00012854  48 00 00 68 */	b lbl_80015ABC
lbl_80015A58:
/* 80015A58 00012858  80 1E 00 20 */	lwz r0, 0x20(r30)
/* 80015A5C 0001285C  54 00 05 29 */	rlwinm. r0, r0, 0, 0x14, 0x14
/* 80015A60 00012860  41 82 00 24 */	beq lbl_80015A84
/* 80015A64 00012864  C0 3E 00 1C */	lfs f1, 0x1c(r30)
/* 80015A68 00012868  C0 02 81 7C */	lfs f0, lbl_803CCAFC-_SDA2_BASE_(r2)
/* 80015A6C 0001286C  EC 00 08 FA */	fmadds f0, f0, f3, f1
/* 80015A70 00012870  EC 01 00 32 */	fmuls f0, f1, f0
/* 80015A74 00012874  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80015A78 00012878  40 81 00 0C */	ble lbl_80015A84
/* 80015A7C 0001287C  38 60 00 00 */	li r3, 0
/* 80015A80 00012880  48 00 00 3C */	b lbl_80015ABC
lbl_80015A84:
/* 80015A84 00012884  38 61 00 08 */	addi r3, r1, 8
/* 80015A88 00012888  38 9E 00 0C */	addi r4, r30, 0xc
/* 80015A8C 0001288C  48 03 8A 65 */	bl xVec3Dot__FPC5xVec3PC5xVec3
/* 80015A90 00012890  C0 02 81 78 */	lfs f0, lbl_803CCAF8-_SDA2_BASE_(r2)
/* 80015A94 00012894  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80015A98 00012898  4C 41 13 82 */	cror 2, 1, 2
/* 80015A9C 0001289C  40 82 00 0C */	bne lbl_80015AA8
/* 80015AA0 000128A0  38 60 00 00 */	li r3, 0
/* 80015AA4 000128A4  48 00 00 18 */	b lbl_80015ABC
lbl_80015AA8:
/* 80015AA8 000128A8  EC 01 00 72 */	fmuls f0, f1, f1
/* 80015AAC 000128AC  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 80015AB0 000128B0  4C 41 13 82 */	cror 2, 1, 2
/* 80015AB4 000128B4  7C 00 00 26 */	mfcr r0
/* 80015AB8 000128B8  54 03 1F FE */	rlwinm r3, r0, 3, 0x1f, 0x1f
lbl_80015ABC:
/* 80015ABC 000128BC  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 80015AC0 000128C0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80015AC4 000128C4  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80015AC8 000128C8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80015ACC 000128CC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80015AD0 000128D0  7C 08 03 A6 */	mtlr r0
/* 80015AD4 000128D4  38 21 00 30 */	addi r1, r1, 0x30
/* 80015AD8 000128D8  4E 80 00 20 */	blr 

.global xRayHitsBoxFast__FPC5xRay3PC4xBox
xRayHitsBoxFast__FPC5xRay3PC4xBox:
/* 80015ADC 000128DC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80015AE0 000128E0  7C 08 02 A6 */	mflr r0
/* 80015AE4 000128E4  90 01 00 44 */	stw r0, 0x44(r1)
/* 80015AE8 000128E8  7C 60 1B 78 */	mr r0, r3
/* 80015AEC 000128EC  7C 83 23 78 */	mr r3, r4
/* 80015AF0 000128F0  38 A1 00 08 */	addi r5, r1, 8
/* 80015AF4 000128F4  7C 04 03 78 */	mr r4, r0
/* 80015AF8 000128F8  48 0B 02 81 */	bl iBoxIsectRay__FPC4xBoxPC5xRay3P6xIsect
/* 80015AFC 000128FC  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80015B00 00012900  38 00 00 00 */	li r0, 0
/* 80015B04 00012904  C0 22 81 78 */	lfs f1, lbl_803CCAF8-_SDA2_BASE_(r2)
/* 80015B08 00012908  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80015B0C 0001290C  4C 40 13 82 */	cror 2, 0, 2
/* 80015B10 00012910  41 82 00 14 */	beq lbl_80015B24
/* 80015B14 00012914  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80015B18 00012918  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80015B1C 0001291C  4C 40 13 82 */	cror 2, 0, 2
/* 80015B20 00012920  40 82 00 08 */	bne lbl_80015B28
lbl_80015B24:
/* 80015B24 00012924  38 00 00 01 */	li r0, 1
lbl_80015B28:
/* 80015B28 00012928  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 80015B2C 0001292C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80015B30 00012930  7C 08 03 A6 */	mtlr r0
/* 80015B34 00012934  38 21 00 40 */	addi r1, r1, 0x40
/* 80015B38 00012938  4E 80 00 20 */	blr 

.endif

.section .sdata2
lbl_803CCAF8:
	.incbin "baserom.dol", 0x2B6398, 0x4
lbl_803CCAFC:
	.incbin "baserom.dol", 0x2B639C, 0x4
/* SPECULATION: link order */
.global g_RED
g_RED:
	.incbin "baserom.dol", 0x2B63A0, 0x4
/* SPECULATION: link order */
.global g_GREEN
g_GREEN:
	.incbin "baserom.dol", 0x2B63A4, 0x4
/* SPECULATION: link order */
.global g_BLUE
g_BLUE:
	.incbin "baserom.dol", 0x2B63A8, 0x4
/* SPECULATION: link order */
.global g_CYAN
g_CYAN:
	.incbin "baserom.dol", 0x2B63AC, 0x4
/* SPECULATION: link order */
.global g_YELLOW
g_YELLOW:
	.incbin "baserom.dol", 0x2B63B0, 0x4
/* SPECULATION: link order */
.global g_WHITE
g_WHITE:
	.incbin "baserom.dol", 0x2B63B4, 0x4
/* SPECULATION: link order */
.global g_GRAY50
g_GRAY50:
	.incbin "baserom.dol", 0x2B63B8, 0x4
/* SPECULATION: link order */
.global g_NEON_RED
g_NEON_RED:
	.incbin "baserom.dol", 0x2B63BC, 0x4
/* SPECULATION: link order */
.global g_NEON_GREEN
g_NEON_GREEN:
	.incbin "baserom.dol", 0x2B63C0, 0x4
/* SPECULATION: link order */
.global g_NEON_BLUE
g_NEON_BLUE:
	.incbin "baserom.dol", 0x2B63C4, 0x4
/* SPECULATION: link order */
.global g_PIMP_GOLD
g_PIMP_GOLD:
	.incbin "baserom.dol", 0x2B63C8, 0x4
/* SPECULATION: link order */
.global g_ORANGE
g_ORANGE:
	.incbin "baserom.dol", 0x2B63CC, 0x4
/* SPECULATION: link order */
.global g_LAVENDER
g_LAVENDER:
	.incbin "baserom.dol", 0x2B63D0, 0x4
/* SPECULATION: link order */
.global g_PINK
g_PINK:
	.incbin "baserom.dol", 0x2B63D4, 0x4
