.include "macros.inc"
.file "vtools.c"

# 0x8022C008 - 0x8022C550
.text
.balign 4

.fn _rwGCNVertexBufferFill, global
/* 8022C008 002290E8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8022C00C 002290EC  7C 08 02 A6 */	mflr r0
/* 8022C010 002290F0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8022C014 002290F4  39 61 00 30 */	addi r11, r1, 0x30
/* 8022C018 002290F8  4B FC 14 E9 */	bl _savegpr_26
/* 8022C01C 002290FC  7C 7B 1B 78 */	mr r27, r3
/* 8022C020 00229100  7C 9C 23 78 */	mr r28, r4
/* 8022C024 00229104  7C DD 33 78 */	mr r29, r6
/* 8022C028 00229108  3B E5 00 24 */	addi r31, r5, 0x24
/* 8022C02C 0022910C  3B 40 00 00 */	li r26, 0x0
/* 8022C030 00229110  3B C0 00 09 */	li r30, 0x9
.L_8022C034:
/* 8022C034 00229114  38 1E FF F7 */	addi r0, r30, -0x9
/* 8022C038 00229118  28 00 00 0B */	cmplwi r0, 0xb
/* 8022C03C 0022911C  41 81 04 EC */	bgt .L_8022C528
/* 8022C040 00229120  3C 60 80 2B */	lis r3, "@384"@ha
/* 8022C044 00229124  54 00 10 3A */	slwi r0, r0, 2
/* 8022C048 00229128  38 63 7B 58 */	addi r3, r3, "@384"@l
/* 8022C04C 0022912C  7C 03 00 2E */	lwzx r0, r3, r0
/* 8022C050 00229130  7C 09 03 A6 */	mtctr r0
/* 8022C054 00229134  4E 80 04 20 */	bctr
.L_8022C058:
/* 8022C058 00229138  80 1B 00 10 */	lwz r0, 0x10(r27)
/* 8022C05C 0022913C  54 00 BF BE */	extrwi r0, r0, 2, 21
/* 8022C060 00229140  28 00 00 02 */	cmplwi r0, 0x2
/* 8022C064 00229144  41 82 00 0C */	beq .L_8022C070
/* 8022C068 00229148  28 00 00 03 */	cmplwi r0, 0x3
/* 8022C06C 0022914C  40 82 04 BC */	bne .L_8022C528
.L_8022C070:
/* 8022C070 00229150  80 9B 00 04 */	lwz r4, 0x4(r27)
/* 8022C074 00229154  54 80 07 FE */	clrlwi r0, r4, 31
/* 8022C078 00229158  28 00 00 01 */	cmplwi r0, 0x1
/* 8022C07C 0022915C  40 82 04 AC */	bne .L_8022C528
/* 8022C080 00229160  54 80 E6 FE */	extrwi r0, r4, 5, 23
/* 8022C084 00229164  38 60 00 01 */	li r3, 0x1
/* 8022C088 00229168  7C 60 00 30 */	slw r0, r3, r0
/* 8022C08C 0022916C  7C FC D2 14 */	add r7, r28, r26
/* 8022C090 00229170  6C 03 80 00 */	xoris r3, r0, 0x8000
/* 8022C094 00229174  3C 00 43 30 */	lis r0, 0x4330
/* 8022C098 00229178  90 61 00 0C */	stw r3, 0xc(r1)
/* 8022C09C 0022917C  54 85 FF 7E */	extrwi r5, r4, 3, 28
/* 8022C0A0 00229180  C8 22 BC 50 */	lfd f1, "@386"@sda21(r2)
/* 8022C0A4 00229184  90 01 00 08 */	stw r0, 0x8(r1)
/* 8022C0A8 00229188  80 67 00 0C */	lwz r3, 0xc(r7)
/* 8022C0AC 0022918C  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 8022C0B0 00229190  80 9F 00 68 */	lwz r4, 0x68(r31)
/* 8022C0B4 00229194  EC 20 08 28 */	fsubs f1, f0, f1
/* 8022C0B8 00229198  80 DF 00 00 */	lwz r6, 0x0(r31)
/* 8022C0BC 0022919C  88 E7 00 11 */	lbz r7, 0x11(r7)
/* 8022C0C0 002291A0  4B FF 74 C5 */	bl _rwGCNVtxFmtInstPos3D
/* 8022C0C4 002291A4  3B 5A 00 08 */	addi r26, r26, 0x8
/* 8022C0C8 002291A8  48 00 04 60 */	b .L_8022C528
.L_8022C0CC:
/* 8022C0CC 002291AC  80 1B 00 10 */	lwz r0, 0x10(r27)
/* 8022C0D0 002291B0  54 00 AF BE */	extrwi r0, r0, 2, 19
/* 8022C0D4 002291B4  28 00 00 02 */	cmplwi r0, 0x2
/* 8022C0D8 002291B8  41 82 00 0C */	beq .L_8022C0E4
/* 8022C0DC 002291BC  28 00 00 03 */	cmplwi r0, 0x3
/* 8022C0E0 002291C0  40 82 04 48 */	bne .L_8022C528
.L_8022C0E4:
/* 8022C0E4 002291C4  80 7B 00 04 */	lwz r3, 0x4(r27)
/* 8022C0E8 002291C8  54 60 BF FE */	extrwi r0, r3, 1, 22
/* 8022C0EC 002291CC  54 65 B7 7E */	extrwi r5, r3, 3, 19
/* 8022C0F0 002291D0  28 00 00 01 */	cmplwi r0, 0x1
/* 8022C0F4 002291D4  40 82 00 44 */	bne .L_8022C138
/* 8022C0F8 002291D8  2C 1D 00 00 */	cmpwi r29, 0x0
/* 8022C0FC 002291DC  40 82 00 20 */	bne .L_8022C11C
/* 8022C100 002291E0  7C FC D2 14 */	add r7, r28, r26
/* 8022C104 002291E4  80 9F 00 68 */	lwz r4, 0x68(r31)
/* 8022C108 002291E8  80 67 00 0C */	lwz r3, 0xc(r7)
/* 8022C10C 002291EC  80 DF 00 00 */	lwz r6, 0x0(r31)
/* 8022C110 002291F0  88 E7 00 11 */	lbz r7, 0x11(r7)
/* 8022C114 002291F4  4B FF 92 89 */	bl _rwGCNVtxFmtInstNBT
/* 8022C118 002291F8  48 00 00 5C */	b .L_8022C174
.L_8022C11C:
/* 8022C11C 002291FC  7C FC D2 14 */	add r7, r28, r26
/* 8022C120 00229200  80 9F 00 68 */	lwz r4, 0x68(r31)
/* 8022C124 00229204  80 67 00 0C */	lwz r3, 0xc(r7)
/* 8022C128 00229208  80 DF 00 00 */	lwz r6, 0x0(r31)
/* 8022C12C 0022920C  88 E7 00 11 */	lbz r7, 0x11(r7)
/* 8022C130 00229210  4B FF 9B 19 */	bl _rwGCNVtxFmtInstNBTCmp
/* 8022C134 00229214  48 00 00 40 */	b .L_8022C174
.L_8022C138:
/* 8022C138 00229218  2C 1D 00 00 */	cmpwi r29, 0x0
/* 8022C13C 0022921C  40 82 00 20 */	bne .L_8022C15C
/* 8022C140 00229220  7C FC D2 14 */	add r7, r28, r26
/* 8022C144 00229224  80 9F 00 68 */	lwz r4, 0x68(r31)
/* 8022C148 00229228  80 67 00 0C */	lwz r3, 0xc(r7)
/* 8022C14C 0022922C  80 DF 00 00 */	lwz r6, 0x0(r31)
/* 8022C150 00229230  88 E7 00 11 */	lbz r7, 0x11(r7)
/* 8022C154 00229234  4B FF 82 25 */	bl _rwGCNVtxFmtInstNrm
/* 8022C158 00229238  48 00 00 1C */	b .L_8022C174
.L_8022C15C:
/* 8022C15C 0022923C  7C FC D2 14 */	add r7, r28, r26
/* 8022C160 00229240  80 9F 00 68 */	lwz r4, 0x68(r31)
/* 8022C164 00229244  80 67 00 0C */	lwz r3, 0xc(r7)
/* 8022C168 00229248  80 DF 00 00 */	lwz r6, 0x0(r31)
/* 8022C16C 0022924C  88 E7 00 11 */	lbz r7, 0x11(r7)
/* 8022C170 00229250  4B FF 8A B5 */	bl _rwGCNVtxFmtInstNrmCmp
.L_8022C174:
/* 8022C174 00229254  3B 5A 00 08 */	addi r26, r26, 0x8
/* 8022C178 00229258  48 00 03 B0 */	b .L_8022C528
.L_8022C17C:
/* 8022C17C 0022925C  38 1E FF F5 */	addi r0, r30, -0xb
/* 8022C180 00229260  80 9B 00 10 */	lwz r4, 0x10(r27)
/* 8022C184 00229264  54 03 08 3C */	slwi r3, r0, 1
/* 8022C188 00229268  38 03 00 0D */	addi r0, r3, 0xd
/* 8022C18C 0022926C  7C 80 04 30 */	srw r0, r4, r0
/* 8022C190 00229270  54 00 07 BE */	clrlwi r0, r0, 30
/* 8022C194 00229274  28 00 00 02 */	cmplwi r0, 0x2
/* 8022C198 00229278  41 82 00 0C */	beq .L_8022C1A4
/* 8022C19C 0022927C  28 00 00 03 */	cmplwi r0, 0x3
/* 8022C1A0 00229280  40 82 03 88 */	bne .L_8022C528
.L_8022C1A4:
/* 8022C1A4 00229284  38 1E FF F5 */	addi r0, r30, -0xb
/* 8022C1A8 00229288  7C FC D2 14 */	add r7, r28, r26
/* 8022C1AC 0022928C  54 03 10 3A */	slwi r3, r0, 2
/* 8022C1B0 00229290  80 9B 00 04 */	lwz r4, 0x4(r27)
/* 8022C1B4 00229294  38 03 00 0E */	addi r0, r3, 0xe
/* 8022C1B8 00229298  80 67 00 0C */	lwz r3, 0xc(r7)
/* 8022C1BC 0022929C  7C 80 04 30 */	srw r0, r4, r0
/* 8022C1C0 002292A0  80 9F 00 68 */	lwz r4, 0x68(r31)
/* 8022C1C4 002292A4  80 DF 00 00 */	lwz r6, 0x0(r31)
/* 8022C1C8 002292A8  54 05 07 7E */	clrlwi r5, r0, 29
/* 8022C1CC 002292AC  88 E7 00 11 */	lbz r7, 0x11(r7)
/* 8022C1D0 002292B0  4B FF A1 F1 */	bl _rwGCNVtxFmtInstClr
/* 8022C1D4 002292B4  3B 5A 00 08 */	addi r26, r26, 0x8
/* 8022C1D8 002292B8  48 00 03 50 */	b .L_8022C528
.L_8022C1DC:
/* 8022C1DC 002292BC  80 1B 00 14 */	lwz r0, 0x14(r27)
/* 8022C1E0 002292C0  54 00 07 BE */	clrlwi r0, r0, 30
/* 8022C1E4 002292C4  28 00 00 02 */	cmplwi r0, 0x2
/* 8022C1E8 002292C8  41 82 00 0C */	beq .L_8022C1F4
/* 8022C1EC 002292CC  28 00 00 03 */	cmplwi r0, 0x3
/* 8022C1F0 002292D0  40 82 03 38 */	bne .L_8022C528
.L_8022C1F4:
/* 8022C1F4 002292D4  80 BB 00 04 */	lwz r5, 0x4(r27)
/* 8022C1F8 002292D8  3C 00 43 30 */	lis r0, 0x4330
/* 8022C1FC 002292DC  38 80 00 01 */	li r4, 0x1
/* 8022C200 002292E0  90 01 00 08 */	stw r0, 0x8(r1)
/* 8022C204 002292E4  54 A3 3E FE */	extrwi r3, r5, 5, 2
/* 8022C208 002292E8  C8 22 BC 50 */	lfd f1, "@386"@sda21(r2)
/* 8022C20C 002292EC  7C 83 18 30 */	slw r3, r4, r3
/* 8022C210 002292F0  7C FC D2 14 */	add r7, r28, r26
/* 8022C214 002292F4  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8022C218 002292F8  80 67 00 0C */	lwz r3, 0xc(r7)
/* 8022C21C 002292FC  90 01 00 0C */	stw r0, 0xc(r1)
/* 8022C220 00229300  54 A5 57 7E */	extrwi r5, r5, 3, 7
/* 8022C224 00229304  80 9F 00 68 */	lwz r4, 0x68(r31)
/* 8022C228 00229308  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 8022C22C 0022930C  80 DF 00 00 */	lwz r6, 0x0(r31)
/* 8022C230 00229310  EC 20 08 28 */	fsubs f1, f0, f1
/* 8022C234 00229314  88 E7 00 11 */	lbz r7, 0x11(r7)
/* 8022C238 00229318  4B FF AA 09 */	bl _rwGCNVtxFmtInstTex
/* 8022C23C 0022931C  3B 5A 00 08 */	addi r26, r26, 0x8
/* 8022C240 00229320  48 00 02 E8 */	b .L_8022C528
.L_8022C244:
/* 8022C244 00229324  80 1B 00 14 */	lwz r0, 0x14(r27)
/* 8022C248 00229328  54 00 F7 BE */	extrwi r0, r0, 2, 28
/* 8022C24C 0022932C  28 00 00 02 */	cmplwi r0, 0x2
/* 8022C250 00229330  41 82 00 0C */	beq .L_8022C25C
/* 8022C254 00229334  28 00 00 03 */	cmplwi r0, 0x3
/* 8022C258 00229338  40 82 02 D0 */	bne .L_8022C528
.L_8022C25C:
/* 8022C25C 0022933C  80 BB 00 08 */	lwz r5, 0x8(r27)
/* 8022C260 00229340  3C 00 43 30 */	lis r0, 0x4330
/* 8022C264 00229344  38 80 00 01 */	li r4, 0x1
/* 8022C268 00229348  90 01 00 08 */	stw r0, 0x8(r1)
/* 8022C26C 0022934C  54 A3 E1 3E */	srwi r3, r5, 4
/* 8022C270 00229350  C8 22 BC 50 */	lfd f1, "@386"@sda21(r2)
/* 8022C274 00229354  7C 83 18 30 */	slw r3, r4, r3
/* 8022C278 00229358  7C FC D2 14 */	add r7, r28, r26
/* 8022C27C 0022935C  54 60 06 FE */	clrlwi r0, r3, 27
/* 8022C280 00229360  80 67 00 0C */	lwz r3, 0xc(r7)
/* 8022C284 00229364  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8022C288 00229368  80 9F 00 68 */	lwz r4, 0x68(r31)
/* 8022C28C 0022936C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8022C290 00229370  54 A5 FF 7E */	extrwi r5, r5, 3, 28
/* 8022C294 00229374  80 DF 00 00 */	lwz r6, 0x0(r31)
/* 8022C298 00229378  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 8022C29C 0022937C  88 E7 00 11 */	lbz r7, 0x11(r7)
/* 8022C2A0 00229380  EC 20 08 28 */	fsubs f1, f0, f1
/* 8022C2A4 00229384  4B FF A9 9D */	bl _rwGCNVtxFmtInstTex
/* 8022C2A8 00229388  3B 5A 00 08 */	addi r26, r26, 0x8
/* 8022C2AC 0022938C  48 00 02 7C */	b .L_8022C528
.L_8022C2B0:
/* 8022C2B0 00229390  80 1B 00 14 */	lwz r0, 0x14(r27)
/* 8022C2B4 00229394  54 00 E7 BE */	extrwi r0, r0, 2, 26
/* 8022C2B8 00229398  28 00 00 02 */	cmplwi r0, 0x2
/* 8022C2BC 0022939C  41 82 00 0C */	beq .L_8022C2C8
/* 8022C2C0 002293A0  28 00 00 03 */	cmplwi r0, 0x3
/* 8022C2C4 002293A4  40 82 02 64 */	bne .L_8022C528
.L_8022C2C8:
/* 8022C2C8 002293A8  80 BB 00 08 */	lwz r5, 0x8(r27)
/* 8022C2CC 002293AC  3C 00 43 30 */	lis r0, 0x4330
/* 8022C2D0 002293B0  38 80 00 01 */	li r4, 0x1
/* 8022C2D4 002293B4  90 01 00 08 */	stw r0, 0x8(r1)
/* 8022C2D8 002293B8  54 A3 9B 7E */	srwi r3, r5, 13
/* 8022C2DC 002293BC  C8 22 BC 50 */	lfd f1, "@386"@sda21(r2)
/* 8022C2E0 002293C0  7C 83 18 30 */	slw r3, r4, r3
/* 8022C2E4 002293C4  7C FC D2 14 */	add r7, r28, r26
/* 8022C2E8 002293C8  54 60 06 FE */	clrlwi r0, r3, 27
/* 8022C2EC 002293CC  80 67 00 0C */	lwz r3, 0xc(r7)
/* 8022C2F0 002293D0  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8022C2F4 002293D4  80 9F 00 68 */	lwz r4, 0x68(r31)
/* 8022C2F8 002293D8  90 01 00 0C */	stw r0, 0xc(r1)
/* 8022C2FC 002293DC  54 A5 B7 7E */	extrwi r5, r5, 3, 19
/* 8022C300 002293E0  80 DF 00 00 */	lwz r6, 0x0(r31)
/* 8022C304 002293E4  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 8022C308 002293E8  88 E7 00 11 */	lbz r7, 0x11(r7)
/* 8022C30C 002293EC  EC 20 08 28 */	fsubs f1, f0, f1
/* 8022C310 002293F0  4B FF A9 31 */	bl _rwGCNVtxFmtInstTex
/* 8022C314 002293F4  3B 5A 00 08 */	addi r26, r26, 0x8
/* 8022C318 002293F8  48 00 02 10 */	b .L_8022C528
.L_8022C31C:
/* 8022C31C 002293FC  80 1B 00 14 */	lwz r0, 0x14(r27)
/* 8022C320 00229400  54 00 D7 BE */	extrwi r0, r0, 2, 24
/* 8022C324 00229404  28 00 00 02 */	cmplwi r0, 0x2
/* 8022C328 00229408  41 82 00 0C */	beq .L_8022C334
/* 8022C32C 0022940C  28 00 00 03 */	cmplwi r0, 0x3
/* 8022C330 00229410  40 82 01 F8 */	bne .L_8022C528
.L_8022C334:
/* 8022C334 00229414  80 BB 00 08 */	lwz r5, 0x8(r27)
/* 8022C338 00229418  3C 00 43 30 */	lis r0, 0x4330
/* 8022C33C 0022941C  38 80 00 01 */	li r4, 0x1
/* 8022C340 00229420  90 01 00 08 */	stw r0, 0x8(r1)
/* 8022C344 00229424  54 A3 55 BE */	srwi r3, r5, 22
/* 8022C348 00229428  C8 22 BC 50 */	lfd f1, "@386"@sda21(r2)
/* 8022C34C 0022942C  7C 83 18 30 */	slw r3, r4, r3
/* 8022C350 00229430  7C FC D2 14 */	add r7, r28, r26
/* 8022C354 00229434  54 60 06 FE */	clrlwi r0, r3, 27
/* 8022C358 00229438  80 67 00 0C */	lwz r3, 0xc(r7)
/* 8022C35C 0022943C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8022C360 00229440  80 9F 00 68 */	lwz r4, 0x68(r31)
/* 8022C364 00229444  90 01 00 0C */	stw r0, 0xc(r1)
/* 8022C368 00229448  54 A5 6F 7E */	extrwi r5, r5, 3, 10
/* 8022C36C 0022944C  80 DF 00 00 */	lwz r6, 0x0(r31)
/* 8022C370 00229450  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 8022C374 00229454  88 E7 00 11 */	lbz r7, 0x11(r7)
/* 8022C378 00229458  EC 20 08 28 */	fsubs f1, f0, f1
/* 8022C37C 0022945C  4B FF A8 C5 */	bl _rwGCNVtxFmtInstTex
/* 8022C380 00229460  3B 5A 00 08 */	addi r26, r26, 0x8
/* 8022C384 00229464  48 00 01 A4 */	b .L_8022C528
.L_8022C388:
/* 8022C388 00229468  80 1B 00 14 */	lwz r0, 0x14(r27)
/* 8022C38C 0022946C  54 00 C7 BE */	extrwi r0, r0, 2, 22
/* 8022C390 00229470  28 00 00 02 */	cmplwi r0, 0x2
/* 8022C394 00229474  41 82 00 0C */	beq .L_8022C3A0
/* 8022C398 00229478  28 00 00 03 */	cmplwi r0, 0x3
/* 8022C39C 0022947C  40 82 01 8C */	bne .L_8022C528
.L_8022C3A0:
/* 8022C3A0 00229480  80 7B 00 0C */	lwz r3, 0xc(r27)
/* 8022C3A4 00229484  7C FC D2 14 */	add r7, r28, r26
/* 8022C3A8 00229488  3C 00 43 30 */	lis r0, 0x4330
/* 8022C3AC 0022948C  80 BB 00 08 */	lwz r5, 0x8(r27)
/* 8022C3B0 00229490  54 63 06 FE */	clrlwi r3, r3, 27
/* 8022C3B4 00229494  38 80 00 01 */	li r4, 0x1
/* 8022C3B8 00229498  7C 83 18 30 */	slw r3, r4, r3
/* 8022C3BC 0022949C  90 01 00 08 */	stw r0, 0x8(r1)
/* 8022C3C0 002294A0  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8022C3C4 002294A4  C8 22 BC 50 */	lfd f1, "@386"@sda21(r2)
/* 8022C3C8 002294A8  90 01 00 0C */	stw r0, 0xc(r1)
/* 8022C3CC 002294AC  54 A5 27 7E */	extrwi r5, r5, 3, 1
/* 8022C3D0 002294B0  80 67 00 0C */	lwz r3, 0xc(r7)
/* 8022C3D4 002294B4  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 8022C3D8 002294B8  80 9F 00 68 */	lwz r4, 0x68(r31)
/* 8022C3DC 002294BC  EC 20 08 28 */	fsubs f1, f0, f1
/* 8022C3E0 002294C0  80 DF 00 00 */	lwz r6, 0x0(r31)
/* 8022C3E4 002294C4  88 E7 00 11 */	lbz r7, 0x11(r7)
/* 8022C3E8 002294C8  4B FF A8 59 */	bl _rwGCNVtxFmtInstTex
/* 8022C3EC 002294CC  3B 5A 00 08 */	addi r26, r26, 0x8
/* 8022C3F0 002294D0  48 00 01 38 */	b .L_8022C528
.L_8022C3F4:
/* 8022C3F4 002294D4  80 1B 00 14 */	lwz r0, 0x14(r27)
/* 8022C3F8 002294D8  54 00 B7 BE */	extrwi r0, r0, 2, 20
/* 8022C3FC 002294DC  28 00 00 02 */	cmplwi r0, 0x2
/* 8022C400 002294E0  41 82 00 0C */	beq .L_8022C40C
/* 8022C404 002294E4  28 00 00 03 */	cmplwi r0, 0x3
/* 8022C408 002294E8  40 82 01 20 */	bne .L_8022C528
.L_8022C40C:
/* 8022C40C 002294EC  80 BB 00 0C */	lwz r5, 0xc(r27)
/* 8022C410 002294F0  3C 00 43 30 */	lis r0, 0x4330
/* 8022C414 002294F4  38 80 00 01 */	li r4, 0x1
/* 8022C418 002294F8  90 01 00 08 */	stw r0, 0x8(r1)
/* 8022C41C 002294FC  54 A3 BE FE */	extrwi r3, r5, 5, 18
/* 8022C420 00229500  C8 22 BC 50 */	lfd f1, "@386"@sda21(r2)
/* 8022C424 00229504  7C 83 18 30 */	slw r3, r4, r3
/* 8022C428 00229508  7C FC D2 14 */	add r7, r28, r26
/* 8022C42C 0022950C  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8022C430 00229510  80 67 00 0C */	lwz r3, 0xc(r7)
/* 8022C434 00229514  90 01 00 0C */	stw r0, 0xc(r1)
/* 8022C438 00229518  54 A5 D7 7E */	extrwi r5, r5, 3, 23
/* 8022C43C 0022951C  80 9F 00 68 */	lwz r4, 0x68(r31)
/* 8022C440 00229520  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 8022C444 00229524  80 DF 00 00 */	lwz r6, 0x0(r31)
/* 8022C448 00229528  EC 20 08 28 */	fsubs f1, f0, f1
/* 8022C44C 0022952C  88 E7 00 11 */	lbz r7, 0x11(r7)
/* 8022C450 00229530  4B FF A7 F1 */	bl _rwGCNVtxFmtInstTex
/* 8022C454 00229534  3B 5A 00 08 */	addi r26, r26, 0x8
/* 8022C458 00229538  48 00 00 D0 */	b .L_8022C528
.L_8022C45C:
/* 8022C45C 0022953C  80 1B 00 14 */	lwz r0, 0x14(r27)
/* 8022C460 00229540  54 00 A7 BE */	extrwi r0, r0, 2, 18
/* 8022C464 00229544  28 00 00 02 */	cmplwi r0, 0x2
/* 8022C468 00229548  41 82 00 0C */	beq .L_8022C474
/* 8022C46C 0022954C  28 00 00 03 */	cmplwi r0, 0x3
/* 8022C470 00229550  40 82 00 B8 */	bne .L_8022C528
.L_8022C474:
/* 8022C474 00229554  80 BB 00 0C */	lwz r5, 0xc(r27)
/* 8022C478 00229558  3C 00 43 30 */	lis r0, 0x4330
/* 8022C47C 0022955C  38 80 00 01 */	li r4, 0x1
/* 8022C480 00229560  90 01 00 08 */	stw r0, 0x8(r1)
/* 8022C484 00229564  54 A3 76 FE */	extrwi r3, r5, 5, 9
/* 8022C488 00229568  C8 22 BC 50 */	lfd f1, "@386"@sda21(r2)
/* 8022C48C 0022956C  7C 83 18 30 */	slw r3, r4, r3
/* 8022C490 00229570  7C FC D2 14 */	add r7, r28, r26
/* 8022C494 00229574  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8022C498 00229578  80 67 00 0C */	lwz r3, 0xc(r7)
/* 8022C49C 0022957C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8022C4A0 00229580  54 A5 8F 7E */	extrwi r5, r5, 3, 14
/* 8022C4A4 00229584  80 9F 00 68 */	lwz r4, 0x68(r31)
/* 8022C4A8 00229588  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 8022C4AC 0022958C  80 DF 00 00 */	lwz r6, 0x0(r31)
/* 8022C4B0 00229590  EC 20 08 28 */	fsubs f1, f0, f1
/* 8022C4B4 00229594  88 E7 00 11 */	lbz r7, 0x11(r7)
/* 8022C4B8 00229598  4B FF A7 89 */	bl _rwGCNVtxFmtInstTex
/* 8022C4BC 0022959C  3B 5A 00 08 */	addi r26, r26, 0x8
/* 8022C4C0 002295A0  48 00 00 68 */	b .L_8022C528
.L_8022C4C4:
/* 8022C4C4 002295A4  80 1B 00 14 */	lwz r0, 0x14(r27)
/* 8022C4C8 002295A8  54 00 97 BE */	extrwi r0, r0, 2, 16
/* 8022C4CC 002295AC  28 00 00 02 */	cmplwi r0, 0x2
/* 8022C4D0 002295B0  41 82 00 0C */	beq .L_8022C4DC
/* 8022C4D4 002295B4  28 00 00 03 */	cmplwi r0, 0x3
/* 8022C4D8 002295B8  40 82 00 50 */	bne .L_8022C528
.L_8022C4DC:
/* 8022C4DC 002295BC  80 BB 00 0C */	lwz r5, 0xc(r27)
/* 8022C4E0 002295C0  3C 00 43 30 */	lis r0, 0x4330
/* 8022C4E4 002295C4  38 80 00 01 */	li r4, 0x1
/* 8022C4E8 002295C8  90 01 00 08 */	stw r0, 0x8(r1)
/* 8022C4EC 002295CC  54 A3 2E FE */	srwi r3, r5, 27
/* 8022C4F0 002295D0  C8 22 BC 50 */	lfd f1, "@386"@sda21(r2)
/* 8022C4F4 002295D4  7C 83 18 30 */	slw r3, r4, r3
/* 8022C4F8 002295D8  7C FC D2 14 */	add r7, r28, r26
/* 8022C4FC 002295DC  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 8022C500 002295E0  80 67 00 0C */	lwz r3, 0xc(r7)
/* 8022C504 002295E4  90 01 00 0C */	stw r0, 0xc(r1)
/* 8022C508 002295E8  54 A5 47 7E */	extrwi r5, r5, 3, 5
/* 8022C50C 002295EC  80 9F 00 68 */	lwz r4, 0x68(r31)
/* 8022C510 002295F0  C8 01 00 08 */	lfd f0, 0x8(r1)
/* 8022C514 002295F4  80 DF 00 00 */	lwz r6, 0x0(r31)
/* 8022C518 002295F8  EC 20 08 28 */	fsubs f1, f0, f1
/* 8022C51C 002295FC  88 E7 00 11 */	lbz r7, 0x11(r7)
/* 8022C520 00229600  4B FF A7 21 */	bl _rwGCNVtxFmtInstTex
/* 8022C524 00229604  3B 5A 00 08 */	addi r26, r26, 0x8
.L_8022C528:
/* 8022C528 00229608  3B DE 00 01 */	addi r30, r30, 0x1
/* 8022C52C 0022960C  3B FF 00 04 */	addi r31, r31, 0x4
/* 8022C530 00229610  28 1E 00 15 */	cmplwi r30, 0x15
/* 8022C534 00229614  41 80 FB 00 */	blt .L_8022C034
/* 8022C538 00229618  39 61 00 30 */	addi r11, r1, 0x30
/* 8022C53C 0022961C  4B FC 10 11 */	bl _restgpr_26
/* 8022C540 00229620  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8022C544 00229624  7C 08 03 A6 */	mtlr r0
/* 8022C548 00229628  38 21 00 30 */	addi r1, r1, 0x30
/* 8022C54C 0022962C  4E 80 00 20 */	blr
.endfn _rwGCNVertexBufferFill

# 0x802B7B58 - 0x802B7B88
.data
.balign 8

.obj "@384", local
	.rel _rwGCNVertexBufferFill, .L_8022C058
	.rel _rwGCNVertexBufferFill, .L_8022C0CC
	.rel _rwGCNVertexBufferFill, .L_8022C17C
	.rel _rwGCNVertexBufferFill, .L_8022C17C
	.rel _rwGCNVertexBufferFill, .L_8022C1DC
	.rel _rwGCNVertexBufferFill, .L_8022C244
	.rel _rwGCNVertexBufferFill, .L_8022C2B0
	.rel _rwGCNVertexBufferFill, .L_8022C31C
	.rel _rwGCNVertexBufferFill, .L_8022C388
	.rel _rwGCNVertexBufferFill, .L_8022C3F4
	.rel _rwGCNVertexBufferFill, .L_8022C45C
	.rel _rwGCNVertexBufferFill, .L_8022C4C4
.endobj "@384"

# 0x803D05D0 - 0x803D05D8
.section .sdata2, "a"
.balign 8

.obj "@386", local
	.4byte 0x43300000
	.4byte 0x80000000
.endobj "@386"
