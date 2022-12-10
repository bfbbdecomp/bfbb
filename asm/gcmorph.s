.include "macros.inc"
.file "gcmorph.c"

# 0x80221224 - 0x802214A4
.text
.balign 4

.fn _rxGCInstanceMorphUpdate, global
/* 80221224 0021E304  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80221228 0021E308  7C 08 02 A6 */	mflr r0
/* 8022122C 0021E30C  90 01 00 44 */	stw r0, 0x44(r1)
/* 80221230 0021E310  39 61 00 40 */	addi r11, r1, 0x40
/* 80221234 0021E314  4B FC C2 CD */	bl _savegpr_26
/* 80221238 0021E318  C0 25 00 0C */	lfs f1, 0xc(r5)
/* 8022123C 0021E31C  7C 7B 1B 78 */	mr r27, r3
/* 80221240 0021E320  C0 05 00 10 */	lfs f0, 0x10(r5)
/* 80221244 0021E324  7C 9C 23 78 */	mr r28, r4
/* 80221248 0021E328  A8 85 00 04 */	lha r4, 0x4(r5)
/* 8022124C 0021E32C  38 C0 00 00 */	li r6, 0x0
/* 80221250 0021E330  A8 05 00 06 */	lha r0, 0x6(r5)
/* 80221254 0021E334  EC 01 00 32 */	fmuls f0, f1, f0
/* 80221258 0021E338  80 7C 00 0C */	lwz r3, 0xc(r28)
/* 8022125C 0021E33C  1C A4 00 1C */	mulli r5, r4, 0x1c
/* 80221260 0021E340  80 FB 00 5C */	lwz r7, 0x5c(r27)
/* 80221264 0021E344  D0 01 00 08 */	stfs f0, 0x8(r1)
/* 80221268 0021E348  1C 80 00 1C */	mulli r4, r0, 0x1c
/* 8022126C 0021E34C  7F C7 2A 14 */	add r30, r7, r5
/* 80221270 0021E350  80 0D 9F 00 */	lwz r0, _rpDlGeomVtxFmtOffset@sda21(r13)
/* 80221274 0021E354  7F A7 22 14 */	add r29, r7, r4
/* 80221278 0021E358  7C 9B 00 2E */	lwzx r4, r27, r0
/* 8022127C 0021E35C  28 04 00 00 */	cmplwi r4, 0x0
/* 80221280 0021E360  41 82 00 24 */	beq .L_802212A4
/* 80221284 0021E364  88 E4 00 00 */	lbz r7, 0x0(r4)
/* 80221288 0021E368  38 AD 87 80 */	addi r5, r13, vtxFmtTypeConvTable$278@sda21
/* 8022128C 0021E36C  88 04 00 0C */	lbz r0, 0xc(r4)
/* 80221290 0021E370  38 8D 87 88 */	addi r4, r13, vtxFmtSizeConvTable$279@sda21
/* 80221294 0021E374  7C C5 38 AE */	lbzx r6, r5, r7
/* 80221298 0021E378  7F E4 38 AE */	lbzx r31, r4, r7
/* 8022129C 0021E37C  50 06 44 2E */	rlwimi r6, r0, 8, 16, 23
/* 802212A0 0021E380  48 00 00 08 */	b .L_802212A8
.L_802212A4:
/* 802212A4 0021E384  3B E0 00 04 */	li r31, 0x4
.L_802212A8:
/* 802212A8 0021E388  7C D6 E3 A6 */	mtspr GQR6, r6
/* 802212AC 0021E38C  80 9E 00 14 */	lwz r4, 0x14(r30)
/* 802212B0 0021E390  80 BD 00 14 */	lwz r5, 0x14(r29)
/* 802212B4 0021E394  7F E9 FB 78 */	mr r9, r31
/* 802212B8 0021E398  80 FB 00 14 */	lwz r7, 0x14(r27)
/* 802212BC 0021E39C  38 C1 00 08 */	addi r6, r1, 0x8
/* 802212C0 0021E3A0  39 00 00 04 */	li r8, 0x4
/* 802212C4 0021E3A4  39 40 00 00 */	li r10, 0x0
/* 802212C8 0021E3A8  48 00 01 09 */	bl _rwDlV3dInterp
/* 802212CC 0021E3AC  1C 1F 00 03 */	mulli r0, r31, 0x3
/* 802212D0 0021E3B0  80 9B 00 14 */	lwz r4, 0x14(r27)
/* 802212D4 0021E3B4  80 7C 00 0C */	lwz r3, 0xc(r28)
/* 802212D8 0021E3B8  7C 84 01 D6 */	mullw r4, r4, r0
/* 802212DC 0021E3BC  4B FB 10 7D */	bl DCFlushRange
/* 802212E0 0021E3C0  80 1B 00 08 */	lwz r0, 0x8(r27)
/* 802212E4 0021E3C4  54 00 06 F7 */	rlwinm. r0, r0, 0, 27, 27
/* 802212E8 0021E3C8  41 82 00 CC */	beq .L_802213B4
/* 802212EC 0021E3CC  80 0D 9F 00 */	lwz r0, _rpDlGeomVtxFmtOffset@sda21(r13)
/* 802212F0 0021E3D0  38 A0 00 00 */	li r5, 0x0
/* 802212F4 0021E3D4  80 7C 00 14 */	lwz r3, 0x14(r28)
/* 802212F8 0021E3D8  7D 9B 00 2E */	lwzx r12, r27, r0
/* 802212FC 0021E3DC  28 0C 00 00 */	cmplwi r12, 0x0
/* 80221300 0021E3E0  41 82 00 70 */	beq .L_80221370
/* 80221304 0021E3E4  80 82 BC 08 */	lwz r4, "@289"@sda21(r2)
/* 80221308 0021E3E8  38 A1 00 14 */	addi r5, r1, 0x14
/* 8022130C 0021E3EC  88 02 BC 0C */	lbz r0, "@289"+0x4@sda21(r2)
/* 80221310 0021E3F0  38 E1 00 1C */	addi r7, r1, 0x1c
/* 80221314 0021E3F4  90 81 00 14 */	stw r4, 0x14(r1)
/* 80221318 0021E3F8  38 C1 00 0C */	addi r6, r1, 0xc
/* 8022131C 0021E3FC  88 8C 00 0D */	lbz r4, 0xd(r12)
/* 80221320 0021E400  98 01 00 18 */	stb r0, 0x18(r1)
/* 80221324 0021E404  89 8C 00 01 */	lbz r12, 0x1(r12)
/* 80221328 0021E408  7C 04 00 D0 */	neg r0, r4
/* 8022132C 0021E40C  81 22 BC 10 */	lwz r9, "@290"@sda21(r2)
/* 80221330 0021E410  7C 00 23 78 */	or r0, r0, r4
/* 80221334 0021E414  89 02 BC 14 */	lbz r8, "@290"+0x4@sda21(r2)
/* 80221338 0021E418  7C 04 FE 70 */	srawi r4, r0, 31
/* 8022133C 0021E41C  7F E5 60 AE */	lbzx r31, r5, r12
/* 80221340 0021E420  81 62 BC 00 */	lwz r11, "@288"@sda21(r2)
/* 80221344 0021E424  89 42 BC 04 */	lbz r10, "@288"+0x4@sda21(r2)
/* 80221348 0021E428  1C 1F 00 06 */	mulli r0, r31, 0x6
/* 8022134C 0021E42C  91 21 00 1C */	stw r9, 0x1c(r1)
/* 80221350 0021E430  99 01 00 20 */	stb r8, 0x20(r1)
/* 80221354 0021E434  7C 1A 20 38 */	and r26, r0, r4
/* 80221358 0021E438  91 61 00 0C */	stw r11, 0xc(r1)
/* 8022135C 0021E43C  7C 07 60 AE */	lbzx r0, r7, r12
/* 80221360 0021E440  99 41 00 10 */	stb r10, 0x10(r1)
/* 80221364 0021E444  7C A6 60 AE */	lbzx r5, r6, r12
/* 80221368 0021E448  50 05 44 2E */	rlwimi r5, r0, 8, 16, 23
/* 8022136C 0021E44C  48 00 00 0C */	b .L_80221378
.L_80221370:
/* 80221370 0021E450  3B E0 00 04 */	li r31, 0x4
/* 80221374 0021E454  3B 40 00 00 */	li r26, 0x0
.L_80221378:
/* 80221378 0021E458  7C B6 E3 A6 */	mtspr GQR6, r5
/* 8022137C 0021E45C  80 9E 00 18 */	lwz r4, 0x18(r30)
/* 80221380 0021E460  80 BD 00 18 */	lwz r5, 0x18(r29)
/* 80221384 0021E464  7F E9 FB 78 */	mr r9, r31
/* 80221388 0021E468  80 FB 00 14 */	lwz r7, 0x14(r27)
/* 8022138C 0021E46C  7F 4A D3 78 */	mr r10, r26
/* 80221390 0021E470  38 C1 00 08 */	addi r6, r1, 0x8
/* 80221394 0021E474  39 00 00 04 */	li r8, 0x4
/* 80221398 0021E478  48 00 00 39 */	bl _rwDlV3dInterp
/* 8022139C 0021E47C  1C 1F 00 03 */	mulli r0, r31, 0x3
/* 802213A0 0021E480  80 9B 00 14 */	lwz r4, 0x14(r27)
/* 802213A4 0021E484  80 7C 00 14 */	lwz r3, 0x14(r28)
/* 802213A8 0021E488  7C 1A 02 14 */	add r0, r26, r0
/* 802213AC 0021E48C  7C 84 01 D6 */	mullw r4, r4, r0
/* 802213B0 0021E490  4B FB 0F A9 */	bl DCFlushRange
.L_802213B4:
/* 802213B4 0021E494  4B FA A4 31 */	bl GXInvalidateVtxCache
/* 802213B8 0021E498  39 61 00 40 */	addi r11, r1, 0x40
/* 802213BC 0021E49C  4B FC C1 91 */	bl _restgpr_26
/* 802213C0 0021E4A0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802213C4 0021E4A4  7C 08 03 A6 */	mtlr r0
/* 802213C8 0021E4A8  38 21 00 40 */	addi r1, r1, 0x40
/* 802213CC 0021E4AC  4E 80 00 20 */	blr
.endfn _rxGCInstanceMorphUpdate

.fn _rwDlV3dInterp, local
/* 802213D0 0021E4B0  70 EB 00 01 */	andi. r11, r7, 0x1
/* 802213D4 0021E4B4  7C E7 0E 70 */	srawi r7, r7, 1
/* 802213D8 0021E4B8  C0 06 00 00 */	lfs f0, 0x0(r6)
/* 802213DC 0021E4BC  55 0B 08 3E */	rotlwi r11, r8, 1
/* 802213E0 0021E4C0  55 2C 08 3E */	rotlwi r12, r9, 1
/* 802213E4 0021E4C4  7C 6C 18 50 */	subf r3, r12, r3
/* 802213E8 0021E4C8  7C 8B 20 50 */	subf r4, r11, r4
/* 802213EC 0021E4CC  7C AB 28 50 */	subf r5, r11, r5
/* 802213F0 0021E4D0  41 82 00 30 */	beq .L_80221420
/* 802213F4 0021E4D4  10 24 5F 4C */	psq_lux f1, r4, r11, 1, qr6
/* 802213F8 0021E4D8  10 44 43 4C */	psq_lux f2, r4, r8, 0, qr6
/* 802213FC 0021E4DC  10 65 5F 4C */	psq_lux f3, r5, r11, 1, qr6
/* 80221400 0021E4E0  10 85 43 4C */	psq_lux f4, r5, r8, 0, qr6
/* 80221404 0021E4E4  10 63 08 28 */	ps_sub f3, f3, f1
/* 80221408 0021E4E8  10 84 10 28 */	ps_sub f4, f4, f2
/* 8022140C 0021E4EC  10 23 08 3A */	ps_madd f1, f3, f0, f1
/* 80221410 0021E4F0  10 44 10 3A */	ps_madd f2, f4, f0, f2
/* 80221414 0021E4F4  10 23 67 4E */	psq_stux f1, r3, r12, 1, qr6
/* 80221418 0021E4F8  10 43 4B 4E */	psq_stux f2, r3, r9, 0, qr6
/* 8022141C 0021E4FC  7C 63 52 14 */	add r3, r3, r10
.L_80221420:
/* 80221420 0021E500  2C 07 00 00 */	cmpwi r7, 0x0
/* 80221424 0021E504  7C E9 03 A6 */	mtctr r7
/* 80221428 0021E508  4C 81 00 20 */	blelr
/* 8022142C 0021E50C  10 24 5B 4C */	psq_lux f1, r4, r11, 0, qr6
/* 80221430 0021E510  10 44 5B 4C */	psq_lux f2, r4, r11, 0, qr6
/* 80221434 0021E514  10 64 5B 4C */	psq_lux f3, r4, r11, 0, qr6
/* 80221438 0021E518  10 85 5B 4C */	psq_lux f4, r5, r11, 0, qr6
/* 8022143C 0021E51C  10 A5 5B 4C */	psq_lux f5, r5, r11, 0, qr6
/* 80221440 0021E520  10 C5 5B 4C */	psq_lux f6, r5, r11, 0, qr6
/* 80221444 0021E524  10 84 08 28 */	ps_sub f4, f4, f1
/* 80221448 0021E528  10 A5 10 28 */	ps_sub f5, f5, f2
/* 8022144C 0021E52C  10 C6 18 28 */	ps_sub f6, f6, f3
.L_80221450:
/* 80221450 0021E530  10 E4 08 3A */	ps_madd f7, f4, f0, f1
/* 80221454 0021E534  10 24 5B 4C */	psq_lux f1, r4, r11, 0, qr6
/* 80221458 0021E538  10 85 5B 4C */	psq_lux f4, r5, r11, 0, qr6
/* 8022145C 0021E53C  10 E3 63 4E */	psq_stux f7, r3, r12, 0, qr6
/* 80221460 0021E540  11 05 10 3A */	ps_madd f8, f5, f0, f2
/* 80221464 0021E544  10 44 5B 4C */	psq_lux f2, r4, r11, 0, qr6
/* 80221468 0021E548  10 A5 5B 4C */	psq_lux f5, r5, r11, 0, qr6
/* 8022146C 0021E54C  11 26 18 3A */	ps_madd f9, f6, f0, f3
/* 80221470 0021E550  10 64 5B 4C */	psq_lux f3, r4, r11, 0, qr6
/* 80221474 0021E554  10 C5 5B 4C */	psq_lux f6, r5, r11, 0, qr6
/* 80221478 0021E558  11 03 67 4E */	psq_stux f8, r3, r12, 1, qr6
/* 8022147C 0021E55C  7C 63 52 14 */	add r3, r3, r10
/* 80221480 0021E560  11 08 44 A0 */	ps_merge10 f8, f8, f8
/* 80221484 0021E564  11 03 4F 4E */	psq_stux f8, r3, r9, 1, qr6
/* 80221488 0021E568  11 23 4B 4E */	psq_stux f9, r3, r9, 0, qr6
/* 8022148C 0021E56C  7C 63 52 14 */	add r3, r3, r10
/* 80221490 0021E570  10 84 08 28 */	ps_sub f4, f4, f1
/* 80221494 0021E574  10 A5 10 28 */	ps_sub f5, f5, f2
/* 80221498 0021E578  10 C6 18 28 */	ps_sub f6, f6, f3
/* 8022149C 0021E57C  42 00 FF B4 */	bdnz .L_80221450
/* 802214A0 0021E580  4E 80 00 20 */	blr
.endfn _rwDlV3dInterp

# 0x803CB080 - 0x803CB090
.section .sdata, "wa"
.balign 8

.obj vtxFmtTypeConvTable$278, local
	.4byte 0x04060507
	.byte 0x00
.endobj vtxFmtTypeConvTable$278
	.byte 0x00, 0x00, 0x00

.obj vtxFmtSizeConvTable$279, local
	.4byte 0x01010202
	.byte 0x04
.endobj vtxFmtSizeConvTable$279
	.byte 0x00, 0x00, 0x00

# 0x803D0580 - 0x803D0598
.section .sdata2, "a"
.balign 8

.obj "@288", local
	.4byte 0x04060507
	.byte 0x00
.endobj "@288"
	.byte 0x00, 0x00, 0x00

.obj "@289", local
	.4byte 0x01010202
	.byte 0x04
.endobj "@289"
	.byte 0x00, 0x00, 0x00

.obj "@290", local
	.4byte 0x0006000E
	.byte 0x00
.endobj "@290"
	.byte 0x00, 0x00, 0x00
