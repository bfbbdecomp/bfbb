.include "macros.inc"
.file "GXLight.c"

# 0x801CD0B4 - 0x801CD6C8
.text
.balign 4

.fn GXInitLightAttn, global
/* 801CD0B4 001CA194  D0 23 00 10 */	stfs f1, 0x10(r3)
/* 801CD0B8 001CA198  D0 43 00 14 */	stfs f2, 0x14(r3)
/* 801CD0BC 001CA19C  D0 63 00 18 */	stfs f3, 0x18(r3)
/* 801CD0C0 001CA1A0  D0 83 00 1C */	stfs f4, 0x1c(r3)
/* 801CD0C4 001CA1A4  D0 A3 00 20 */	stfs f5, 0x20(r3)
/* 801CD0C8 001CA1A8  D0 C3 00 24 */	stfs f6, 0x24(r3)
/* 801CD0CC 001CA1AC  4E 80 00 20 */	blr
.endfn GXInitLightAttn

.fn GXInitLightAttnA, global
/* 801CD0D0 001CA1B0  D0 23 00 10 */	stfs f1, 0x10(r3)
/* 801CD0D4 001CA1B4  D0 43 00 14 */	stfs f2, 0x14(r3)
/* 801CD0D8 001CA1B8  D0 63 00 18 */	stfs f3, 0x18(r3)
/* 801CD0DC 001CA1BC  4E 80 00 20 */	blr
.endfn GXInitLightAttnA

.fn GXInitLightSpot, global
/* 801CD0E0 001CA1C0  7C 08 02 A6 */	mflr r0
/* 801CD0E4 001CA1C4  90 01 00 04 */	stw r0, 0x4(r1)
/* 801CD0E8 001CA1C8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CD0EC 001CA1CC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801CD0F0 001CA1D0  3B E4 00 00 */	addi r31, r4, 0x0
/* 801CD0F4 001CA1D4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801CD0F8 001CA1D8  3B C3 00 00 */	addi r30, r3, 0x0
/* 801CD0FC 001CA1DC  C0 02 B3 30 */	lfs f0, "@134"@sda21(r2)
/* 801CD100 001CA1E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801CD104 001CA1E4  4C 40 13 82 */	cror eq, lt, eq
/* 801CD108 001CA1E8  41 82 00 10 */	beq .L_801CD118
/* 801CD10C 001CA1EC  C0 02 B3 34 */	lfs f0, "@135"@sda21(r2)
/* 801CD110 001CA1F0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801CD114 001CA1F4  40 81 00 08 */	ble .L_801CD11C
.L_801CD118:
/* 801CD118 001CA1F8  3B E0 00 00 */	li r31, 0x0
.L_801CD11C:
/* 801CD11C 001CA1FC  C0 42 B3 38 */	lfs f2, "@136"@sda21(r2)
/* 801CD120 001CA200  C0 02 B3 3C */	lfs f0, "@137"@sda21(r2)
/* 801CD124 001CA204  EC 22 00 72 */	fmuls f1, f2, f1
/* 801CD128 001CA208  EC 21 00 24 */	fdivs f1, f1, f0
/* 801CD12C 001CA20C  48 01 FA 6D */	bl cosf
/* 801CD130 001CA210  28 1F 00 06 */	cmplwi r31, 0x6
/* 801CD134 001CA214  41 81 01 0C */	bgt .L_801CD240
/* 801CD138 001CA218  3C 60 80 2B */	lis r3, "@145"@ha
/* 801CD13C 001CA21C  38 63 4C 10 */	addi r3, r3, "@145"@l
/* 801CD140 001CA220  57 E0 10 3A */	slwi r0, r31, 2
/* 801CD144 001CA224  7C 03 00 2E */	lwzx r0, r3, r0
/* 801CD148 001CA228  7C 09 03 A6 */	mtctr r0
/* 801CD14C 001CA22C  4E 80 04 20 */	bctr
.L_801CD150:
/* 801CD150 001CA230  C0 02 B3 40 */	lfs f0, "@138"@sda21(r2)
/* 801CD154 001CA234  C0 82 B3 44 */	lfs f4, "@139"@sda21(r2)
/* 801CD158 001CA238  EC 60 00 72 */	fmuls f3, f0, f1
/* 801CD15C 001CA23C  C0 C2 B3 30 */	lfs f6, "@134"@sda21(r2)
/* 801CD160 001CA240  48 00 00 EC */	b .L_801CD24C
.L_801CD164:
/* 801CD164 001CA244  C0 42 B3 48 */	lfs f2, "@140"@sda21(r2)
/* 801CD168 001CA248  FC 00 08 50 */	fneg f0, f1
/* 801CD16C 001CA24C  C0 C2 B3 30 */	lfs f6, "@134"@sda21(r2)
/* 801CD170 001CA250  EC 22 08 28 */	fsubs f1, f2, f1
/* 801CD174 001CA254  EC 22 08 24 */	fdivs f1, f2, f1
/* 801CD178 001CA258  FC 80 08 90 */	fmr f4, f1
/* 801CD17C 001CA25C  EC 60 00 72 */	fmuls f3, f0, f1
/* 801CD180 001CA260  48 00 00 CC */	b .L_801CD24C
.L_801CD184:
/* 801CD184 001CA264  C0 42 B3 48 */	lfs f2, "@140"@sda21(r2)
/* 801CD188 001CA268  FC 00 08 50 */	fneg f0, f1
/* 801CD18C 001CA26C  C0 62 B3 30 */	lfs f3, "@134"@sda21(r2)
/* 801CD190 001CA270  EC 22 08 28 */	fsubs f1, f2, f1
/* 801CD194 001CA274  EC 22 08 24 */	fdivs f1, f2, f1
/* 801CD198 001CA278  FC C0 08 90 */	fmr f6, f1
/* 801CD19C 001CA27C  EC 80 00 72 */	fmuls f4, f0, f1
/* 801CD1A0 001CA280  48 00 00 AC */	b .L_801CD24C
.L_801CD1A4:
/* 801CD1A4 001CA284  C0 82 B3 48 */	lfs f4, "@140"@sda21(r2)
/* 801CD1A8 001CA288  C0 42 B3 4C */	lfs f2, "@141"@sda21(r2)
/* 801CD1AC 001CA28C  EC 64 08 28 */	fsubs f3, f4, f1
/* 801CD1B0 001CA290  EC 01 10 28 */	fsubs f0, f1, f2
/* 801CD1B4 001CA294  EC 63 00 F2 */	fmuls f3, f3, f3
/* 801CD1B8 001CA298  EC 01 00 32 */	fmuls f0, f1, f0
/* 801CD1BC 001CA29C  EC 24 18 24 */	fdivs f1, f4, f3
/* 801CD1C0 001CA2A0  EC 61 00 32 */	fmuls f3, f1, f0
/* 801CD1C4 001CA2A4  EC 82 00 72 */	fmuls f4, f2, f1
/* 801CD1C8 001CA2A8  FC C0 08 50 */	fneg f6, f1
/* 801CD1CC 001CA2AC  48 00 00 80 */	b .L_801CD24C
.L_801CD1D0:
/* 801CD1D0 001CA2B0  C0 A2 B3 48 */	lfs f5, "@140"@sda21(r2)
/* 801CD1D4 001CA2B4  C0 62 B3 50 */	lfs f3, "@142"@sda21(r2)
/* 801CD1D8 001CA2B8  EC 85 08 28 */	fsubs f4, f5, f1
/* 801CD1DC 001CA2BC  C0 42 B3 54 */	lfs f2, "@143"@sda21(r2)
/* 801CD1E0 001CA2C0  EC 05 08 2A */	fadds f0, f5, f1
/* 801CD1E4 001CA2C4  EC 84 01 32 */	fmuls f4, f4, f4
/* 801CD1E8 001CA2C8  EC 02 00 32 */	fmuls f0, f2, f0
/* 801CD1EC 001CA2CC  EC 85 20 24 */	fdivs f4, f5, f4
/* 801CD1F0 001CA2D0  EC 43 01 32 */	fmuls f2, f3, f4
/* 801CD1F4 001CA2D4  EC 80 01 32 */	fmuls f4, f0, f4
/* 801CD1F8 001CA2D8  FC C0 10 90 */	fmr f6, f2
/* 801CD1FC 001CA2DC  EC 62 00 72 */	fmuls f3, f2, f1
/* 801CD200 001CA2E0  48 00 00 4C */	b .L_801CD24C
.L_801CD204:
/* 801CD204 001CA2E4  C0 A2 B3 48 */	lfs f5, "@140"@sda21(r2)
/* 801CD208 001CA2E8  C0 02 B3 4C */	lfs f0, "@141"@sda21(r2)
/* 801CD20C 001CA2EC  EC 85 08 28 */	fsubs f4, f5, f1
/* 801CD210 001CA2F0  C0 42 B3 54 */	lfs f2, "@143"@sda21(r2)
/* 801CD214 001CA2F4  EC 60 00 72 */	fmuls f3, f0, f1
/* 801CD218 001CA2F8  C0 02 B3 58 */	lfs f0, "@144"@sda21(r2)
/* 801CD21C 001CA2FC  EC 42 00 72 */	fmuls f2, f2, f1
/* 801CD220 001CA300  EC 84 01 32 */	fmuls f4, f4, f4
/* 801CD224 001CA304  EC 23 00 72 */	fmuls f1, f3, f1
/* 801CD228 001CA308  EC 65 20 24 */	fdivs f3, f5, f4
/* 801CD22C 001CA30C  EC 23 00 72 */	fmuls f1, f3, f1
/* 801CD230 001CA310  EC 82 00 F2 */	fmuls f4, f2, f3
/* 801CD234 001CA314  EC C0 00 F2 */	fmuls f6, f0, f3
/* 801CD238 001CA318  EC 65 08 28 */	fsubs f3, f5, f1
/* 801CD23C 001CA31C  48 00 00 10 */	b .L_801CD24C
.L_801CD240:
/* 801CD240 001CA320  C0 82 B3 30 */	lfs f4, "@134"@sda21(r2)
/* 801CD244 001CA324  C0 62 B3 48 */	lfs f3, "@140"@sda21(r2)
/* 801CD248 001CA328  FC C0 20 90 */	fmr f6, f4
.L_801CD24C:
/* 801CD24C 001CA32C  D0 7E 00 10 */	stfs f3, 0x10(r30)
/* 801CD250 001CA330  D0 9E 00 14 */	stfs f4, 0x14(r30)
/* 801CD254 001CA334  D0 DE 00 18 */	stfs f6, 0x18(r30)
/* 801CD258 001CA338  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CD25C 001CA33C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801CD260 001CA340  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801CD264 001CA344  38 21 00 20 */	addi r1, r1, 0x20
/* 801CD268 001CA348  7C 08 03 A6 */	mtlr r0
/* 801CD26C 001CA34C  4E 80 00 20 */	blr
.endfn GXInitLightSpot

.fn GXInitLightDistAttn, global
/* 801CD270 001CA350  C0 02 B3 30 */	lfs f0, "@134"@sda21(r2)
/* 801CD274 001CA354  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801CD278 001CA358  40 80 00 08 */	bge .L_801CD280
/* 801CD27C 001CA35C  38 80 00 00 */	li r4, 0x0
.L_801CD280:
/* 801CD280 001CA360  C0 02 B3 30 */	lfs f0, "@134"@sda21(r2)
/* 801CD284 001CA364  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801CD288 001CA368  4C 40 13 82 */	cror eq, lt, eq
/* 801CD28C 001CA36C  41 82 00 14 */	beq .L_801CD2A0
/* 801CD290 001CA370  C0 02 B3 48 */	lfs f0, "@140"@sda21(r2)
/* 801CD294 001CA374  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801CD298 001CA378  4C 41 13 82 */	cror eq, gt, eq
/* 801CD29C 001CA37C  40 82 00 08 */	bne .L_801CD2A4
.L_801CD2A0:
/* 801CD2A0 001CA380  38 80 00 00 */	li r4, 0x0
.L_801CD2A4:
/* 801CD2A4 001CA384  2C 04 00 02 */	cmpwi r4, 0x2
/* 801CD2A8 001CA388  41 82 00 3C */	beq .L_801CD2E4
/* 801CD2AC 001CA38C  40 80 00 14 */	bge .L_801CD2C0
/* 801CD2B0 001CA390  2C 04 00 00 */	cmpwi r4, 0x0
/* 801CD2B4 001CA394  41 82 00 70 */	beq .L_801CD324
/* 801CD2B8 001CA398  40 80 00 14 */	bge .L_801CD2CC
/* 801CD2BC 001CA39C  48 00 00 68 */	b .L_801CD324
.L_801CD2C0:
/* 801CD2C0 001CA3A0  2C 04 00 04 */	cmpwi r4, 0x4
/* 801CD2C4 001CA3A4  40 80 00 60 */	bge .L_801CD324
/* 801CD2C8 001CA3A8  48 00 00 40 */	b .L_801CD308
.L_801CD2CC:
/* 801CD2CC 001CA3AC  C0 A2 B3 48 */	lfs f5, "@140"@sda21(r2)
/* 801CD2D0 001CA3B0  EC 02 00 72 */	fmuls f0, f2, f1
/* 801CD2D4 001CA3B4  C0 82 B3 30 */	lfs f4, "@134"@sda21(r2)
/* 801CD2D8 001CA3B8  EC 25 10 28 */	fsubs f1, f5, f2
/* 801CD2DC 001CA3BC  EC 61 00 24 */	fdivs f3, f1, f0
/* 801CD2E0 001CA3C0  48 00 00 50 */	b .L_801CD330
.L_801CD2E4:
/* 801CD2E4 001CA3C4  C0 A2 B3 48 */	lfs f5, "@140"@sda21(r2)
/* 801CD2E8 001CA3C8  EC 82 00 72 */	fmuls f4, f2, f1
/* 801CD2EC 001CA3CC  C0 62 B3 5C */	lfs f3, "@160"@sda21(r2)
/* 801CD2F0 001CA3D0  EC 45 10 28 */	fsubs f2, f5, f2
/* 801CD2F4 001CA3D4  EC 01 01 32 */	fmuls f0, f1, f4
/* 801CD2F8 001CA3D8  EC 23 00 B2 */	fmuls f1, f3, f2
/* 801CD2FC 001CA3DC  EC 61 20 24 */	fdivs f3, f1, f4
/* 801CD300 001CA3E0  EC 81 00 24 */	fdivs f4, f1, f0
/* 801CD304 001CA3E4  48 00 00 2C */	b .L_801CD330
.L_801CD308:
/* 801CD308 001CA3E8  EC 02 00 72 */	fmuls f0, f2, f1
/* 801CD30C 001CA3EC  C0 A2 B3 48 */	lfs f5, "@140"@sda21(r2)
/* 801CD310 001CA3F0  C0 62 B3 30 */	lfs f3, "@134"@sda21(r2)
/* 801CD314 001CA3F4  EC 45 10 28 */	fsubs f2, f5, f2
/* 801CD318 001CA3F8  EC 01 00 32 */	fmuls f0, f1, f0
/* 801CD31C 001CA3FC  EC 82 00 24 */	fdivs f4, f2, f0
/* 801CD320 001CA400  48 00 00 10 */	b .L_801CD330
.L_801CD324:
/* 801CD324 001CA404  C0 62 B3 30 */	lfs f3, "@134"@sda21(r2)
/* 801CD328 001CA408  C0 A2 B3 48 */	lfs f5, "@140"@sda21(r2)
/* 801CD32C 001CA40C  FC 80 18 90 */	fmr f4, f3
.L_801CD330:
/* 801CD330 001CA410  D0 A3 00 1C */	stfs f5, 0x1c(r3)
/* 801CD334 001CA414  D0 63 00 20 */	stfs f3, 0x20(r3)
/* 801CD338 001CA418  D0 83 00 24 */	stfs f4, 0x24(r3)
/* 801CD33C 001CA41C  4E 80 00 20 */	blr
.endfn GXInitLightDistAttn

.fn GXInitLightPos, global
/* 801CD340 001CA420  D0 23 00 28 */	stfs f1, 0x28(r3)
/* 801CD344 001CA424  D0 43 00 2C */	stfs f2, 0x2c(r3)
/* 801CD348 001CA428  D0 63 00 30 */	stfs f3, 0x30(r3)
/* 801CD34C 001CA42C  4E 80 00 20 */	blr
.endfn GXInitLightPos

.fn GXInitLightDir, global
/* 801CD350 001CA430  FC 80 08 50 */	fneg f4, f1
/* 801CD354 001CA434  FC 20 10 50 */	fneg f1, f2
/* 801CD358 001CA438  FC 00 18 50 */	fneg f0, f3
/* 801CD35C 001CA43C  D0 83 00 34 */	stfs f4, 0x34(r3)
/* 801CD360 001CA440  D0 23 00 38 */	stfs f1, 0x38(r3)
/* 801CD364 001CA444  D0 03 00 3C */	stfs f0, 0x3c(r3)
/* 801CD368 001CA448  4E 80 00 20 */	blr
.endfn GXInitLightDir

.fn GXInitLightColor, global
/* 801CD36C 001CA44C  80 04 00 00 */	lwz r0, 0x0(r4)
/* 801CD370 001CA450  90 03 00 0C */	stw r0, 0xc(r3)
/* 801CD374 001CA454  4E 80 00 20 */	blr
.endfn GXInitLightColor

.fn GXLoadLightObjImm, global
/* 801CD378 001CA458  7C 80 00 34 */	cntlzw r0, r4
/* 801CD37C 001CA45C  20 00 00 1F */	subfic r0, r0, 0x1f
/* 801CD380 001CA460  54 05 26 76 */	clrlslwi r5, r0, 29, 4
/* 801CD384 001CA464  3C 80 CC 01 */	lis r4, 0xcc01
/* 801CD388 001CA468  38 00 00 10 */	li r0, 0x10
/* 801CD38C 001CA46C  38 A5 06 00 */	addi r5, r5, 0x600
/* 801CD390 001CA470  98 04 80 00 */	stb r0, -0x8000(r4)
/* 801CD394 001CA474  64 A0 00 0F */	oris r0, r5, 0xf
/* 801CD398 001CA478  94 04 80 00 */	stwu r0, -0x8000(r4)
/* 801CD39C 001CA47C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801CD3A0 001CA480  7C C6 32 78 */	xor r6, r6, r6
/* 801CD3A4 001CA484  E0 A3 00 10 */	psq_l f5, 0x10(r3), 0, qr0
/* 801CD3A8 001CA488  E0 83 00 18 */	psq_l f4, 0x18(r3), 0, qr0
/* 801CD3AC 001CA48C  E0 63 00 20 */	psq_l f3, 0x20(r3), 0, qr0
/* 801CD3B0 001CA490  E0 43 00 28 */	psq_l f2, 0x28(r3), 0, qr0
/* 801CD3B4 001CA494  E0 23 00 30 */	psq_l f1, 0x30(r3), 0, qr0
/* 801CD3B8 001CA498  E0 03 00 38 */	psq_l f0, 0x38(r3), 0, qr0
/* 801CD3BC 001CA49C  90 C4 00 00 */	stw r6, 0x0(r4)
/* 801CD3C0 001CA4A0  90 C4 00 00 */	stw r6, 0x0(r4)
/* 801CD3C4 001CA4A4  90 C4 00 00 */	stw r6, 0x0(r4)
/* 801CD3C8 001CA4A8  90 04 00 00 */	stw r0, 0x0(r4)
/* 801CD3CC 001CA4AC  F0 A4 00 00 */	psq_st f5, 0x0(r4), 0, qr0
/* 801CD3D0 001CA4B0  F0 84 00 00 */	psq_st f4, 0x0(r4), 0, qr0
/* 801CD3D4 001CA4B4  F0 64 00 00 */	psq_st f3, 0x0(r4), 0, qr0
/* 801CD3D8 001CA4B8  F0 44 00 00 */	psq_st f2, 0x0(r4), 0, qr0
/* 801CD3DC 001CA4BC  F0 24 00 00 */	psq_st f1, 0x0(r4), 0, qr0
/* 801CD3E0 001CA4C0  F0 04 00 00 */	psq_st f0, 0x0(r4), 0, qr0
/* 801CD3E4 001CA4C4  80 62 B2 F8 */	lwz r3, __GXData@sda21(r2)
/* 801CD3E8 001CA4C8  38 00 00 01 */	li r0, 0x1
/* 801CD3EC 001CA4CC  B0 03 00 02 */	sth r0, 0x2(r3)
/* 801CD3F0 001CA4D0  4E 80 00 20 */	blr
.endfn GXLoadLightObjImm

.fn GXSetChanAmbColor, global
/* 801CD3F4 001CA4D4  2C 03 00 03 */	cmpwi r3, 0x3
/* 801CD3F8 001CA4D8  41 82 00 84 */	beq .L_801CD47C
/* 801CD3FC 001CA4DC  40 80 00 1C */	bge .L_801CD418
/* 801CD400 001CA4E0  2C 03 00 01 */	cmpwi r3, 0x1
/* 801CD404 001CA4E4  41 82 00 40 */	beq .L_801CD444
/* 801CD408 001CA4E8  40 80 00 58 */	bge .L_801CD460
/* 801CD40C 001CA4EC  2C 03 00 00 */	cmpwi r3, 0x0
/* 801CD410 001CA4F0  40 80 00 18 */	bge .L_801CD428
/* 801CD414 001CA4F4  4E 80 00 20 */	blr
.L_801CD418:
/* 801CD418 001CA4F8  2C 03 00 05 */	cmpwi r3, 0x5
/* 801CD41C 001CA4FC  41 82 00 84 */	beq .L_801CD4A0
/* 801CD420 001CA500  4C 80 00 20 */	bgelr
/* 801CD424 001CA504  48 00 00 70 */	b .L_801CD494
.L_801CD428:
/* 801CD428 001CA508  80 62 B2 F8 */	lwz r3, __GXData@sda21(r2)
/* 801CD42C 001CA50C  38 A0 00 00 */	li r5, 0x0
/* 801CD430 001CA510  80 04 00 00 */	lwz r0, 0x0(r4)
/* 801CD434 001CA514  80 63 00 A8 */	lwz r3, 0xa8(r3)
/* 801CD438 001CA518  54 07 00 2E */	clrrwi r7, r0, 8
/* 801CD43C 001CA51C  50 67 06 3E */	rlwimi r7, r3, 0, 24, 31
/* 801CD440 001CA520  48 00 00 70 */	b .L_801CD4B0
.L_801CD444:
/* 801CD444 001CA524  80 62 B2 F8 */	lwz r3, __GXData@sda21(r2)
/* 801CD448 001CA528  38 A0 00 01 */	li r5, 0x1
/* 801CD44C 001CA52C  80 04 00 00 */	lwz r0, 0x0(r4)
/* 801CD450 001CA530  80 63 00 AC */	lwz r3, 0xac(r3)
/* 801CD454 001CA534  54 07 00 2E */	clrrwi r7, r0, 8
/* 801CD458 001CA538  50 67 06 3E */	rlwimi r7, r3, 0, 24, 31
/* 801CD45C 001CA53C  48 00 00 54 */	b .L_801CD4B0
.L_801CD460:
/* 801CD460 001CA540  80 62 B2 F8 */	lwz r3, __GXData@sda21(r2)
/* 801CD464 001CA544  38 A0 00 00 */	li r5, 0x0
/* 801CD468 001CA548  88 04 00 03 */	lbz r0, 0x3(r4)
/* 801CD46C 001CA54C  80 63 00 A8 */	lwz r3, 0xa8(r3)
/* 801CD470 001CA550  50 03 06 3E */	rlwimi r3, r0, 0, 24, 31
/* 801CD474 001CA554  38 E3 00 00 */	addi r7, r3, 0x0
/* 801CD478 001CA558  48 00 00 38 */	b .L_801CD4B0
.L_801CD47C:
/* 801CD47C 001CA55C  80 62 B2 F8 */	lwz r3, __GXData@sda21(r2)
/* 801CD480 001CA560  38 A0 00 01 */	li r5, 0x1
/* 801CD484 001CA564  88 04 00 03 */	lbz r0, 0x3(r4)
/* 801CD488 001CA568  80 E3 00 AC */	lwz r7, 0xac(r3)
/* 801CD48C 001CA56C  50 07 06 3E */	rlwimi r7, r0, 0, 24, 31
/* 801CD490 001CA570  48 00 00 20 */	b .L_801CD4B0
.L_801CD494:
/* 801CD494 001CA574  80 E4 00 00 */	lwz r7, 0x0(r4)
/* 801CD498 001CA578  38 A0 00 00 */	li r5, 0x0
/* 801CD49C 001CA57C  48 00 00 14 */	b .L_801CD4B0
.L_801CD4A0:
/* 801CD4A0 001CA580  80 E4 00 00 */	lwz r7, 0x0(r4)
/* 801CD4A4 001CA584  38 A0 00 01 */	li r5, 0x1
/* 801CD4A8 001CA588  48 00 00 08 */	b .L_801CD4B0
/* 801CD4AC 001CA58C  4E 80 00 20 */	blr
.L_801CD4B0:
/* 801CD4B0 001CA590  38 00 00 10 */	li r0, 0x10
/* 801CD4B4 001CA594  80 82 B2 F8 */	lwz r4, __GXData@sda21(r2)
/* 801CD4B8 001CA598  3C C0 CC 01 */	lis r6, 0xcc01
/* 801CD4BC 001CA59C  98 06 80 00 */	stb r0, -0x8000(r6)
/* 801CD4C0 001CA5A0  38 65 10 0A */	addi r3, r5, 0x100a
/* 801CD4C4 001CA5A4  54 A0 10 3A */	slwi r0, r5, 2
/* 801CD4C8 001CA5A8  90 66 80 00 */	stw r3, -0x8000(r6)
/* 801CD4CC 001CA5AC  38 A0 00 01 */	li r5, 0x1
/* 801CD4D0 001CA5B0  7C 64 02 14 */	add r3, r4, r0
/* 801CD4D4 001CA5B4  90 E6 80 00 */	stw r7, -0x8000(r6)
/* 801CD4D8 001CA5B8  B0 A4 00 02 */	sth r5, 0x2(r4)
/* 801CD4DC 001CA5BC  90 E3 00 A8 */	stw r7, 0xa8(r3)
/* 801CD4E0 001CA5C0  4E 80 00 20 */	blr
.endfn GXSetChanAmbColor

.fn GXSetChanMatColor, global
/* 801CD4E4 001CA5C4  2C 03 00 03 */	cmpwi r3, 0x3
/* 801CD4E8 001CA5C8  41 82 00 84 */	beq .L_801CD56C
/* 801CD4EC 001CA5CC  40 80 00 1C */	bge .L_801CD508
/* 801CD4F0 001CA5D0  2C 03 00 01 */	cmpwi r3, 0x1
/* 801CD4F4 001CA5D4  41 82 00 40 */	beq .L_801CD534
/* 801CD4F8 001CA5D8  40 80 00 58 */	bge .L_801CD550
/* 801CD4FC 001CA5DC  2C 03 00 00 */	cmpwi r3, 0x0
/* 801CD500 001CA5E0  40 80 00 18 */	bge .L_801CD518
/* 801CD504 001CA5E4  4E 80 00 20 */	blr
.L_801CD508:
/* 801CD508 001CA5E8  2C 03 00 05 */	cmpwi r3, 0x5
/* 801CD50C 001CA5EC  41 82 00 84 */	beq .L_801CD590
/* 801CD510 001CA5F0  4C 80 00 20 */	bgelr
/* 801CD514 001CA5F4  48 00 00 70 */	b .L_801CD584
.L_801CD518:
/* 801CD518 001CA5F8  80 62 B2 F8 */	lwz r3, __GXData@sda21(r2)
/* 801CD51C 001CA5FC  38 A0 00 00 */	li r5, 0x0
/* 801CD520 001CA600  80 04 00 00 */	lwz r0, 0x0(r4)
/* 801CD524 001CA604  80 63 00 B0 */	lwz r3, 0xb0(r3)
/* 801CD528 001CA608  54 07 00 2E */	clrrwi r7, r0, 8
/* 801CD52C 001CA60C  50 67 06 3E */	rlwimi r7, r3, 0, 24, 31
/* 801CD530 001CA610  48 00 00 70 */	b .L_801CD5A0
.L_801CD534:
/* 801CD534 001CA614  80 62 B2 F8 */	lwz r3, __GXData@sda21(r2)
/* 801CD538 001CA618  38 A0 00 01 */	li r5, 0x1
/* 801CD53C 001CA61C  80 04 00 00 */	lwz r0, 0x0(r4)
/* 801CD540 001CA620  80 63 00 B4 */	lwz r3, 0xb4(r3)
/* 801CD544 001CA624  54 07 00 2E */	clrrwi r7, r0, 8
/* 801CD548 001CA628  50 67 06 3E */	rlwimi r7, r3, 0, 24, 31
/* 801CD54C 001CA62C  48 00 00 54 */	b .L_801CD5A0
.L_801CD550:
/* 801CD550 001CA630  80 62 B2 F8 */	lwz r3, __GXData@sda21(r2)
/* 801CD554 001CA634  38 A0 00 00 */	li r5, 0x0
/* 801CD558 001CA638  88 04 00 03 */	lbz r0, 0x3(r4)
/* 801CD55C 001CA63C  80 63 00 B0 */	lwz r3, 0xb0(r3)
/* 801CD560 001CA640  50 03 06 3E */	rlwimi r3, r0, 0, 24, 31
/* 801CD564 001CA644  38 E3 00 00 */	addi r7, r3, 0x0
/* 801CD568 001CA648  48 00 00 38 */	b .L_801CD5A0
.L_801CD56C:
/* 801CD56C 001CA64C  80 62 B2 F8 */	lwz r3, __GXData@sda21(r2)
/* 801CD570 001CA650  38 A0 00 01 */	li r5, 0x1
/* 801CD574 001CA654  88 04 00 03 */	lbz r0, 0x3(r4)
/* 801CD578 001CA658  80 E3 00 B4 */	lwz r7, 0xb4(r3)
/* 801CD57C 001CA65C  50 07 06 3E */	rlwimi r7, r0, 0, 24, 31
/* 801CD580 001CA660  48 00 00 20 */	b .L_801CD5A0
.L_801CD584:
/* 801CD584 001CA664  80 E4 00 00 */	lwz r7, 0x0(r4)
/* 801CD588 001CA668  38 A0 00 00 */	li r5, 0x0
/* 801CD58C 001CA66C  48 00 00 14 */	b .L_801CD5A0
.L_801CD590:
/* 801CD590 001CA670  80 E4 00 00 */	lwz r7, 0x0(r4)
/* 801CD594 001CA674  38 A0 00 01 */	li r5, 0x1
/* 801CD598 001CA678  48 00 00 08 */	b .L_801CD5A0
/* 801CD59C 001CA67C  4E 80 00 20 */	blr
.L_801CD5A0:
/* 801CD5A0 001CA680  38 00 00 10 */	li r0, 0x10
/* 801CD5A4 001CA684  80 82 B2 F8 */	lwz r4, __GXData@sda21(r2)
/* 801CD5A8 001CA688  3C C0 CC 01 */	lis r6, 0xcc01
/* 801CD5AC 001CA68C  98 06 80 00 */	stb r0, -0x8000(r6)
/* 801CD5B0 001CA690  38 65 10 0C */	addi r3, r5, 0x100c
/* 801CD5B4 001CA694  54 A0 10 3A */	slwi r0, r5, 2
/* 801CD5B8 001CA698  90 66 80 00 */	stw r3, -0x8000(r6)
/* 801CD5BC 001CA69C  38 A0 00 01 */	li r5, 0x1
/* 801CD5C0 001CA6A0  7C 64 02 14 */	add r3, r4, r0
/* 801CD5C4 001CA6A4  90 E6 80 00 */	stw r7, -0x8000(r6)
/* 801CD5C8 001CA6A8  B0 A4 00 02 */	sth r5, 0x2(r4)
/* 801CD5CC 001CA6AC  90 E3 00 B0 */	stw r7, 0xb0(r3)
/* 801CD5D0 001CA6B0  4E 80 00 20 */	blr
.endfn GXSetChanMatColor

.fn GXSetNumChans, global
/* 801CD5D4 001CA6B4  80 C2 B2 F8 */	lwz r6, __GXData@sda21(r2)
/* 801CD5D8 001CA6B8  54 65 06 3E */	clrlwi r5, r3, 24
/* 801CD5DC 001CA6BC  38 80 00 10 */	li r4, 0x10
/* 801CD5E0 001CA6C0  80 06 02 04 */	lwz r0, 0x204(r6)
/* 801CD5E4 001CA6C4  50 60 26 76 */	rlwimi r0, r3, 4, 25, 27
/* 801CD5E8 001CA6C8  3C 60 CC 01 */	lis r3, 0xcc01
/* 801CD5EC 001CA6CC  90 06 02 04 */	stw r0, 0x204(r6)
/* 801CD5F0 001CA6D0  38 00 10 09 */	li r0, 0x1009
/* 801CD5F4 001CA6D4  98 83 80 00 */	stb r4, -0x8000(r3)
/* 801CD5F8 001CA6D8  90 03 80 00 */	stw r0, -0x8000(r3)
/* 801CD5FC 001CA6DC  90 A3 80 00 */	stw r5, -0x8000(r3)
/* 801CD600 001CA6E0  80 06 05 AC */	lwz r0, 0x5ac(r6)
/* 801CD604 001CA6E4  60 00 00 04 */	ori r0, r0, 0x4
/* 801CD608 001CA6E8  90 06 05 AC */	stw r0, 0x5ac(r6)
/* 801CD60C 001CA6EC  4E 80 00 20 */	blr
.endfn GXSetNumChans

.fn GXSetChanCtrl, global
/* 801CD610 001CA6F0  54 80 06 3E */	clrlwi r0, r4, 24
/* 801CD614 001CA6F4  38 80 00 00 */	li r4, 0x0
/* 801CD618 001CA6F8  50 04 0F BC */	rlwimi r4, r0, 1, 30, 30
/* 801CD61C 001CA6FC  39 44 00 00 */	addi r10, r4, 0x0
/* 801CD620 001CA700  50 CA 07 FE */	rlwimi r10, r6, 0, 31, 31
/* 801CD624 001CA704  2C 09 00 00 */	cmpwi r9, 0x0
/* 801CD628 001CA708  50 AA 36 72 */	rlwimi r10, r5, 6, 25, 25
/* 801CD62C 001CA70C  54 66 07 BE */	clrlwi r6, r3, 30
/* 801CD630 001CA710  40 82 00 08 */	bne .L_801CD638
/* 801CD634 001CA714  39 00 00 00 */	li r8, 0x0
.L_801CD638:
/* 801CD638 001CA718  20 89 00 02 */	subfic r4, r9, 0x2
/* 801CD63C 001CA71C  30 04 FF FF */	addic r0, r4, -0x1
/* 801CD640 001CA720  7C A0 21 10 */	subfe r5, r0, r4
/* 801CD644 001CA724  7C 89 00 D0 */	neg r4, r9
/* 801CD648 001CA728  30 04 FF FF */	addic r0, r4, -0x1
/* 801CD64C 001CA72C  51 0A 3D F0 */	rlwimi r10, r8, 7, 23, 24
/* 801CD650 001CA730  50 AA 4D AC */	rlwimi r10, r5, 9, 22, 22
/* 801CD654 001CA734  7C 00 21 10 */	subfe r0, r0, r4
/* 801CD658 001CA738  50 0A 55 6A */	rlwimi r10, r0, 10, 21, 21
/* 801CD65C 001CA73C  38 06 10 0E */	addi r0, r6, 0x100e
/* 801CD660 001CA740  55 46 07 B2 */	rlwinm r6, r10, 0, 30, 25
/* 801CD664 001CA744  50 E6 16 BA */	rlwimi r6, r7, 2, 26, 29
/* 801CD668 001CA748  54 C6 05 60 */	rlwinm r6, r6, 0, 21, 16
/* 801CD66C 001CA74C  38 A0 00 10 */	li r5, 0x10
/* 801CD670 001CA750  3C 80 CC 01 */	lis r4, 0xcc01
/* 801CD674 001CA754  98 A4 80 00 */	stb r5, -0x8000(r4)
/* 801CD678 001CA758  50 E6 3C 68 */	rlwimi r6, r7, 7, 17, 20
/* 801CD67C 001CA75C  2C 03 00 04 */	cmpwi r3, 0x4
/* 801CD680 001CA760  90 04 80 00 */	stw r0, -0x8000(r4)
/* 801CD684 001CA764  90 C4 80 00 */	stw r6, -0x8000(r4)
/* 801CD688 001CA768  40 82 00 18 */	bne .L_801CD6A0
/* 801CD68C 001CA76C  98 A4 80 00 */	stb r5, -0x8000(r4)
/* 801CD690 001CA770  38 00 10 10 */	li r0, 0x1010
/* 801CD694 001CA774  90 04 80 00 */	stw r0, -0x8000(r4)
/* 801CD698 001CA778  90 C4 80 00 */	stw r6, -0x8000(r4)
/* 801CD69C 001CA77C  48 00 00 1C */	b .L_801CD6B8
.L_801CD6A0:
/* 801CD6A0 001CA780  2C 03 00 05 */	cmpwi r3, 0x5
/* 801CD6A4 001CA784  40 82 00 14 */	bne .L_801CD6B8
/* 801CD6A8 001CA788  98 A4 80 00 */	stb r5, -0x8000(r4)
/* 801CD6AC 001CA78C  38 00 10 11 */	li r0, 0x1011
/* 801CD6B0 001CA790  90 04 80 00 */	stw r0, -0x8000(r4)
/* 801CD6B4 001CA794  90 C4 80 00 */	stw r6, -0x8000(r4)
.L_801CD6B8:
/* 801CD6B8 001CA798  80 62 B2 F8 */	lwz r3, __GXData@sda21(r2)
/* 801CD6BC 001CA79C  38 00 00 01 */	li r0, 0x1
/* 801CD6C0 001CA7A0  B0 03 00 02 */	sth r0, 0x2(r3)
/* 801CD6C4 001CA7A4  4E 80 00 20 */	blr
.endfn GXSetChanCtrl

# 0x802B4C10 - 0x802B4C30
.data
.balign 8

.obj "@145", local
	.rel GXInitLightSpot, .L_801CD240
	.rel GXInitLightSpot, .L_801CD150
	.rel GXInitLightSpot, .L_801CD164
	.rel GXInitLightSpot, .L_801CD184
	.rel GXInitLightSpot, .L_801CD1A4
	.rel GXInitLightSpot, .L_801CD1D0
	.rel GXInitLightSpot, .L_801CD204
.endobj "@145"
	.4byte 0x00000000

# 0x803CFCB0 - 0x803CFCE0
.section .sdata2, "a"
.balign 8

.obj "@134", local
	.4byte 0x00000000
.endobj "@134"

.obj "@135", local
	.4byte 0x42B40000
.endobj "@135"

.obj "@136", local
	.4byte 0x40490FDB
.endobj "@136"

.obj "@137", local
	.4byte 0x43340000
.endobj "@137"

.obj "@138", local
	.4byte 0xC47A0000
.endobj "@138"

.obj "@139", local
	.4byte 0x447A0000
.endobj "@139"

.obj "@140", local
	.4byte 0x3F800000
.endobj "@140"

.obj "@141", local
	.4byte 0x40000000
.endobj "@141"

.obj "@142", local
	.4byte 0xC0800000
.endobj "@142"

.obj "@143", local
	.4byte 0x40800000
.endobj "@143"

.obj "@144", local
	.4byte 0xC0000000
.endobj "@144"

.obj "@160", local
	.4byte 0x3F000000
.endobj "@160"