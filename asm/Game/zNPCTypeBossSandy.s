.include "macros.inc"

.if 0

.section .text  # 0x8013D054 - 0x801465FC

ZNPC_AnimTable_BossSandy__Fv:
/* 8013D100 00139F00  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 8013D104 00139F04  7C 08 02 A6 */	mflr r0
/* 8013D108 00139F08  3C 60 80 27 */	lis r3, _835@ha
/* 8013D10C 00139F0C  90 01 00 94 */	stw r0, 0x94(r1)
/* 8013D110 00139F10  38 63 D1 38 */	addi r3, r3, _835@l
/* 8013D114 00139F14  38 00 00 0C */	li r0, 0xc
/* 8013D118 00139F18  38 A1 00 14 */	addi r5, r1, 0x14
/* 8013D11C 00139F1C  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 8013D120 00139F20  38 83 FF FC */	addi r4, r3, -4
/* 8013D124 00139F24  7C 09 03 A6 */	mtctr r0
lbl_8013D128:
/* 8013D128 00139F28  80 64 00 04 */	lwz r3, 4(r4)
/* 8013D12C 00139F2C  84 04 00 08 */	lwzu r0, 8(r4)
/* 8013D130 00139F30  90 65 00 04 */	stw r3, 4(r5)
/* 8013D134 00139F34  94 05 00 08 */	stwu r0, 8(r5)
/* 8013D138 00139F38  42 00 FF F0 */	bdnz lbl_8013D128
/* 8013D13C 00139F3C  80 04 00 04 */	lwz r0, 4(r4)
/* 8013D140 00139F40  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013D144 00139F44  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 8013D148 00139F48  38 80 00 00 */	li r4, 0
/* 8013D14C 00139F4C  90 05 00 04 */	stw r0, 4(r5)
/* 8013D150 00139F50  38 63 00 F4 */	addi r3, r3, 0xf4
/* 8013D154 00139F54  38 A0 00 00 */	li r5, 0
/* 8013D158 00139F58  4B EC 9B 19 */	bl xAnimTableNew__FPCcPP10xAnimTableUi
/* 8013D15C 00139F5C  3C A0 80 00 */	lis r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8013D160 00139F60  3C 80 80 2A */	lis r4, g_strz_bossanim@ha
/* 8013D164 00139F64  38 05 6C FC */	addi r0, r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8013D168 00139F68  7C 7F 1B 78 */	mr r31, r3
/* 8013D16C 00139F6C  90 01 00 08 */	stw r0, 8(r1)
/* 8013D170 00139F70  38 00 00 00 */	li r0, 0
/* 8013D174 00139F74  38 84 93 A0 */	addi r4, r4, g_strz_bossanim@l
/* 8013D178 00139F78  38 A0 00 10 */	li r5, 0x10
/* 8013D17C 00139F7C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013D180 00139F80  38 C0 00 40 */	li r6, 0x40
/* 8013D184 00139F84  38 E0 00 00 */	li r7, 0
/* 8013D188 00139F88  39 00 00 00 */	li r8, 0
/* 8013D18C 00139F8C  90 01 00 10 */	stw r0, 0x10(r1)
/* 8013D190 00139F90  39 20 00 00 */	li r9, 0
/* 8013D194 00139F94  39 40 00 00 */	li r10, 0
/* 8013D198 00139F98  80 84 00 04 */	lwz r4, 4(r4)
/* 8013D19C 00139F9C  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 8013D1A0 00139FA0  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 8013D1A4 00139FA4  4B EC 9B B5 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8013D1A8 00139FA8  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8013D1AC 00139FAC  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 8013D1B0 00139FB0  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8013D1B4 00139FB4  38 00 00 00 */	li r0, 0
/* 8013D1B8 00139FB8  90 81 00 08 */	stw r4, 8(r1)
/* 8013D1BC 00139FBC  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 8013D1C0 00139FC0  7F E3 FB 78 */	mr r3, r31
/* 8013D1C4 00139FC4  38 A0 00 10 */	li r5, 0x10
/* 8013D1C8 00139FC8  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013D1CC 00139FCC  38 C0 00 40 */	li r6, 0x40
/* 8013D1D0 00139FD0  38 E0 00 00 */	li r7, 0
/* 8013D1D4 00139FD4  39 00 00 00 */	li r8, 0
/* 8013D1D8 00139FD8  90 01 00 10 */	stw r0, 0x10(r1)
/* 8013D1DC 00139FDC  39 20 00 00 */	li r9, 0
/* 8013D1E0 00139FE0  39 40 00 00 */	li r10, 0
/* 8013D1E4 00139FE4  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8013D1E8 00139FE8  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 8013D1EC 00139FEC  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 8013D1F0 00139FF0  4B EC 9B 69 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8013D1F4 00139FF4  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8013D1F8 00139FF8  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 8013D1FC 00139FFC  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8013D200 0013A000  38 00 00 00 */	li r0, 0
/* 8013D204 0013A004  90 81 00 08 */	stw r4, 8(r1)
/* 8013D208 0013A008  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 8013D20C 0013A00C  7F E3 FB 78 */	mr r3, r31
/* 8013D210 0013A010  38 A0 00 10 */	li r5, 0x10
/* 8013D214 0013A014  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013D218 0013A018  38 C0 00 00 */	li r6, 0
/* 8013D21C 0013A01C  38 E0 00 00 */	li r7, 0
/* 8013D220 0013A020  39 00 00 00 */	li r8, 0
/* 8013D224 0013A024  90 01 00 10 */	stw r0, 0x10(r1)
/* 8013D228 0013A028  39 20 00 00 */	li r9, 0
/* 8013D22C 0013A02C  39 40 00 00 */	li r10, 0
/* 8013D230 0013A030  80 84 00 10 */	lwz r4, 0x10(r4)
/* 8013D234 0013A034  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 8013D238 0013A038  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 8013D23C 0013A03C  4B EC 9B 1D */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8013D240 0013A040  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8013D244 0013A044  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 8013D248 0013A048  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8013D24C 0013A04C  38 00 00 00 */	li r0, 0
/* 8013D250 0013A050  90 81 00 08 */	stw r4, 8(r1)
/* 8013D254 0013A054  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 8013D258 0013A058  7F E3 FB 78 */	mr r3, r31
/* 8013D25C 0013A05C  38 A0 00 10 */	li r5, 0x10
/* 8013D260 0013A060  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013D264 0013A064  38 C0 00 00 */	li r6, 0
/* 8013D268 0013A068  38 E0 00 00 */	li r7, 0
/* 8013D26C 0013A06C  39 00 00 00 */	li r8, 0
/* 8013D270 0013A070  90 01 00 10 */	stw r0, 0x10(r1)
/* 8013D274 0013A074  39 20 00 00 */	li r9, 0
/* 8013D278 0013A078  39 40 00 00 */	li r10, 0
/* 8013D27C 0013A07C  80 84 00 14 */	lwz r4, 0x14(r4)
/* 8013D280 0013A080  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 8013D284 0013A084  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 8013D288 0013A088  4B EC 9A D1 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8013D28C 0013A08C  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8013D290 0013A090  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 8013D294 0013A094  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8013D298 0013A098  38 00 00 00 */	li r0, 0
/* 8013D29C 0013A09C  90 81 00 08 */	stw r4, 8(r1)
/* 8013D2A0 0013A0A0  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 8013D2A4 0013A0A4  7F E3 FB 78 */	mr r3, r31
/* 8013D2A8 0013A0A8  38 A0 00 10 */	li r5, 0x10
/* 8013D2AC 0013A0AC  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013D2B0 0013A0B0  38 C0 00 00 */	li r6, 0
/* 8013D2B4 0013A0B4  38 E0 00 00 */	li r7, 0
/* 8013D2B8 0013A0B8  39 00 00 00 */	li r8, 0
/* 8013D2BC 0013A0BC  90 01 00 10 */	stw r0, 0x10(r1)
/* 8013D2C0 0013A0C0  39 20 00 00 */	li r9, 0
/* 8013D2C4 0013A0C4  39 40 00 00 */	li r10, 0
/* 8013D2C8 0013A0C8  80 84 00 18 */	lwz r4, 0x18(r4)
/* 8013D2CC 0013A0CC  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 8013D2D0 0013A0D0  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 8013D2D4 0013A0D4  4B EC 9A 85 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8013D2D8 0013A0D8  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8013D2DC 0013A0DC  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 8013D2E0 0013A0E0  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8013D2E4 0013A0E4  38 00 00 00 */	li r0, 0
/* 8013D2E8 0013A0E8  90 81 00 08 */	stw r4, 8(r1)
/* 8013D2EC 0013A0EC  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 8013D2F0 0013A0F0  7F E3 FB 78 */	mr r3, r31
/* 8013D2F4 0013A0F4  38 A0 00 10 */	li r5, 0x10
/* 8013D2F8 0013A0F8  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013D2FC 0013A0FC  38 C0 00 00 */	li r6, 0
/* 8013D300 0013A100  38 E0 00 00 */	li r7, 0
/* 8013D304 0013A104  39 00 00 00 */	li r8, 0
/* 8013D308 0013A108  90 01 00 10 */	stw r0, 0x10(r1)
/* 8013D30C 0013A10C  39 20 00 00 */	li r9, 0
/* 8013D310 0013A110  39 40 00 00 */	li r10, 0
/* 8013D314 0013A114  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 8013D318 0013A118  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 8013D31C 0013A11C  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 8013D320 0013A120  4B EC 9A 39 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8013D324 0013A124  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8013D328 0013A128  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 8013D32C 0013A12C  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8013D330 0013A130  38 00 00 00 */	li r0, 0
/* 8013D334 0013A134  90 81 00 08 */	stw r4, 8(r1)
/* 8013D338 0013A138  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 8013D33C 0013A13C  7F E3 FB 78 */	mr r3, r31
/* 8013D340 0013A140  38 A0 00 10 */	li r5, 0x10
/* 8013D344 0013A144  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013D348 0013A148  38 C0 00 00 */	li r6, 0
/* 8013D34C 0013A14C  38 E0 00 00 */	li r7, 0
/* 8013D350 0013A150  39 00 00 00 */	li r8, 0
/* 8013D354 0013A154  90 01 00 10 */	stw r0, 0x10(r1)
/* 8013D358 0013A158  39 20 00 00 */	li r9, 0
/* 8013D35C 0013A15C  39 40 00 00 */	li r10, 0
/* 8013D360 0013A160  80 84 00 30 */	lwz r4, 0x30(r4)
/* 8013D364 0013A164  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 8013D368 0013A168  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 8013D36C 0013A16C  4B EC 99 ED */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8013D370 0013A170  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8013D374 0013A174  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 8013D378 0013A178  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8013D37C 0013A17C  38 00 00 00 */	li r0, 0
/* 8013D380 0013A180  90 81 00 08 */	stw r4, 8(r1)
/* 8013D384 0013A184  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 8013D388 0013A188  7F E3 FB 78 */	mr r3, r31
/* 8013D38C 0013A18C  38 A0 00 10 */	li r5, 0x10
/* 8013D390 0013A190  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013D394 0013A194  38 C0 00 00 */	li r6, 0
/* 8013D398 0013A198  38 E0 00 00 */	li r7, 0
/* 8013D39C 0013A19C  39 00 00 00 */	li r8, 0
/* 8013D3A0 0013A1A0  90 01 00 10 */	stw r0, 0x10(r1)
/* 8013D3A4 0013A1A4  39 20 00 00 */	li r9, 0
/* 8013D3A8 0013A1A8  39 40 00 00 */	li r10, 0
/* 8013D3AC 0013A1AC  80 84 00 34 */	lwz r4, 0x34(r4)
/* 8013D3B0 0013A1B0  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 8013D3B4 0013A1B4  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 8013D3B8 0013A1B8  4B EC 99 A1 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8013D3BC 0013A1BC  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8013D3C0 0013A1C0  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 8013D3C4 0013A1C4  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8013D3C8 0013A1C8  38 00 00 00 */	li r0, 0
/* 8013D3CC 0013A1CC  90 81 00 08 */	stw r4, 8(r1)
/* 8013D3D0 0013A1D0  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 8013D3D4 0013A1D4  7F E3 FB 78 */	mr r3, r31
/* 8013D3D8 0013A1D8  38 A0 00 10 */	li r5, 0x10
/* 8013D3DC 0013A1DC  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013D3E0 0013A1E0  38 C0 00 00 */	li r6, 0
/* 8013D3E4 0013A1E4  38 E0 00 00 */	li r7, 0
/* 8013D3E8 0013A1E8  39 00 00 00 */	li r8, 0
/* 8013D3EC 0013A1EC  90 01 00 10 */	stw r0, 0x10(r1)
/* 8013D3F0 0013A1F0  39 20 00 00 */	li r9, 0
/* 8013D3F4 0013A1F4  39 40 00 00 */	li r10, 0
/* 8013D3F8 0013A1F8  80 84 00 38 */	lwz r4, 0x38(r4)
/* 8013D3FC 0013A1FC  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 8013D400 0013A200  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 8013D404 0013A204  4B EC 99 55 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8013D408 0013A208  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8013D40C 0013A20C  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 8013D410 0013A210  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8013D414 0013A214  38 00 00 00 */	li r0, 0
/* 8013D418 0013A218  90 81 00 08 */	stw r4, 8(r1)
/* 8013D41C 0013A21C  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 8013D420 0013A220  7F E3 FB 78 */	mr r3, r31
/* 8013D424 0013A224  38 A0 00 10 */	li r5, 0x10
/* 8013D428 0013A228  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013D42C 0013A22C  38 C0 00 00 */	li r6, 0
/* 8013D430 0013A230  38 E0 00 00 */	li r7, 0
/* 8013D434 0013A234  39 00 00 00 */	li r8, 0
/* 8013D438 0013A238  90 01 00 10 */	stw r0, 0x10(r1)
/* 8013D43C 0013A23C  39 20 00 00 */	li r9, 0
/* 8013D440 0013A240  39 40 00 00 */	li r10, 0
/* 8013D444 0013A244  80 84 00 3C */	lwz r4, 0x3c(r4)
/* 8013D448 0013A248  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 8013D44C 0013A24C  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 8013D450 0013A250  4B EC 99 09 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8013D454 0013A254  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8013D458 0013A258  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 8013D45C 0013A25C  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8013D460 0013A260  38 00 00 00 */	li r0, 0
/* 8013D464 0013A264  90 81 00 08 */	stw r4, 8(r1)
/* 8013D468 0013A268  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 8013D46C 0013A26C  7F E3 FB 78 */	mr r3, r31
/* 8013D470 0013A270  38 A0 00 10 */	li r5, 0x10
/* 8013D474 0013A274  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013D478 0013A278  38 C0 00 00 */	li r6, 0
/* 8013D47C 0013A27C  38 E0 00 00 */	li r7, 0
/* 8013D480 0013A280  39 00 00 00 */	li r8, 0
/* 8013D484 0013A284  90 01 00 10 */	stw r0, 0x10(r1)
/* 8013D488 0013A288  39 20 00 00 */	li r9, 0
/* 8013D48C 0013A28C  39 40 00 00 */	li r10, 0
/* 8013D490 0013A290  80 84 00 40 */	lwz r4, 0x40(r4)
/* 8013D494 0013A294  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 8013D498 0013A298  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 8013D49C 0013A29C  4B EC 98 BD */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8013D4A0 0013A2A0  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8013D4A4 0013A2A4  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 8013D4A8 0013A2A8  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8013D4AC 0013A2AC  38 00 00 00 */	li r0, 0
/* 8013D4B0 0013A2B0  90 81 00 08 */	stw r4, 8(r1)
/* 8013D4B4 0013A2B4  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 8013D4B8 0013A2B8  7F E3 FB 78 */	mr r3, r31
/* 8013D4BC 0013A2BC  38 A0 00 10 */	li r5, 0x10
/* 8013D4C0 0013A2C0  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013D4C4 0013A2C4  38 C0 00 00 */	li r6, 0
/* 8013D4C8 0013A2C8  38 E0 00 00 */	li r7, 0
/* 8013D4CC 0013A2CC  39 00 00 00 */	li r8, 0
/* 8013D4D0 0013A2D0  90 01 00 10 */	stw r0, 0x10(r1)
/* 8013D4D4 0013A2D4  39 20 00 00 */	li r9, 0
/* 8013D4D8 0013A2D8  39 40 00 00 */	li r10, 0
/* 8013D4DC 0013A2DC  80 84 00 44 */	lwz r4, 0x44(r4)
/* 8013D4E0 0013A2E0  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 8013D4E4 0013A2E4  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 8013D4E8 0013A2E8  4B EC 98 71 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8013D4EC 0013A2EC  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8013D4F0 0013A2F0  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 8013D4F4 0013A2F4  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8013D4F8 0013A2F8  38 00 00 00 */	li r0, 0
/* 8013D4FC 0013A2FC  90 81 00 08 */	stw r4, 8(r1)
/* 8013D500 0013A300  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 8013D504 0013A304  7F E3 FB 78 */	mr r3, r31
/* 8013D508 0013A308  38 A0 00 10 */	li r5, 0x10
/* 8013D50C 0013A30C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013D510 0013A310  38 C0 00 00 */	li r6, 0
/* 8013D514 0013A314  38 E0 00 00 */	li r7, 0
/* 8013D518 0013A318  39 00 00 00 */	li r8, 0
/* 8013D51C 0013A31C  90 01 00 10 */	stw r0, 0x10(r1)
/* 8013D520 0013A320  39 20 00 00 */	li r9, 0
/* 8013D524 0013A324  39 40 00 00 */	li r10, 0
/* 8013D528 0013A328  80 84 00 24 */	lwz r4, 0x24(r4)
/* 8013D52C 0013A32C  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 8013D530 0013A330  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 8013D534 0013A334  4B EC 98 25 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8013D538 0013A338  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8013D53C 0013A33C  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 8013D540 0013A340  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8013D544 0013A344  38 00 00 00 */	li r0, 0
/* 8013D548 0013A348  90 81 00 08 */	stw r4, 8(r1)
/* 8013D54C 0013A34C  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 8013D550 0013A350  7F E3 FB 78 */	mr r3, r31
/* 8013D554 0013A354  38 A0 00 10 */	li r5, 0x10
/* 8013D558 0013A358  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013D55C 0013A35C  38 C0 00 00 */	li r6, 0
/* 8013D560 0013A360  38 E0 00 00 */	li r7, 0
/* 8013D564 0013A364  39 00 00 00 */	li r8, 0
/* 8013D568 0013A368  90 01 00 10 */	stw r0, 0x10(r1)
/* 8013D56C 0013A36C  39 20 00 00 */	li r9, 0
/* 8013D570 0013A370  39 40 00 00 */	li r10, 0
/* 8013D574 0013A374  80 84 00 48 */	lwz r4, 0x48(r4)
/* 8013D578 0013A378  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 8013D57C 0013A37C  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 8013D580 0013A380  4B EC 97 D9 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8013D584 0013A384  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8013D588 0013A388  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 8013D58C 0013A38C  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8013D590 0013A390  38 00 00 00 */	li r0, 0
/* 8013D594 0013A394  90 81 00 08 */	stw r4, 8(r1)
/* 8013D598 0013A398  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 8013D59C 0013A39C  7F E3 FB 78 */	mr r3, r31
/* 8013D5A0 0013A3A0  38 A0 00 10 */	li r5, 0x10
/* 8013D5A4 0013A3A4  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013D5A8 0013A3A8  38 C0 00 00 */	li r6, 0
/* 8013D5AC 0013A3AC  38 E0 00 00 */	li r7, 0
/* 8013D5B0 0013A3B0  39 00 00 00 */	li r8, 0
/* 8013D5B4 0013A3B4  90 01 00 10 */	stw r0, 0x10(r1)
/* 8013D5B8 0013A3B8  39 20 00 00 */	li r9, 0
/* 8013D5BC 0013A3BC  39 40 00 00 */	li r10, 0
/* 8013D5C0 0013A3C0  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8013D5C4 0013A3C4  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 8013D5C8 0013A3C8  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 8013D5CC 0013A3CC  4B EC 97 8D */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8013D5D0 0013A3D0  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8013D5D4 0013A3D4  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 8013D5D8 0013A3D8  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8013D5DC 0013A3DC  38 00 00 00 */	li r0, 0
/* 8013D5E0 0013A3E0  90 81 00 08 */	stw r4, 8(r1)
/* 8013D5E4 0013A3E4  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 8013D5E8 0013A3E8  7F E3 FB 78 */	mr r3, r31
/* 8013D5EC 0013A3EC  38 A0 00 10 */	li r5, 0x10
/* 8013D5F0 0013A3F0  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013D5F4 0013A3F4  38 C0 00 00 */	li r6, 0
/* 8013D5F8 0013A3F8  38 E0 00 00 */	li r7, 0
/* 8013D5FC 0013A3FC  39 00 00 00 */	li r8, 0
/* 8013D600 0013A400  90 01 00 10 */	stw r0, 0x10(r1)
/* 8013D604 0013A404  39 20 00 00 */	li r9, 0
/* 8013D608 0013A408  39 40 00 00 */	li r10, 0
/* 8013D60C 0013A40C  80 84 00 50 */	lwz r4, 0x50(r4)
/* 8013D610 0013A410  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 8013D614 0013A414  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 8013D618 0013A418  4B EC 97 41 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8013D61C 0013A41C  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8013D620 0013A420  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 8013D624 0013A424  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8013D628 0013A428  38 00 00 00 */	li r0, 0
/* 8013D62C 0013A42C  90 81 00 08 */	stw r4, 8(r1)
/* 8013D630 0013A430  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 8013D634 0013A434  7F E3 FB 78 */	mr r3, r31
/* 8013D638 0013A438  38 A0 00 10 */	li r5, 0x10
/* 8013D63C 0013A43C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013D640 0013A440  38 C0 00 00 */	li r6, 0
/* 8013D644 0013A444  38 E0 00 00 */	li r7, 0
/* 8013D648 0013A448  39 00 00 00 */	li r8, 0
/* 8013D64C 0013A44C  90 01 00 10 */	stw r0, 0x10(r1)
/* 8013D650 0013A450  39 20 00 00 */	li r9, 0
/* 8013D654 0013A454  39 40 00 00 */	li r10, 0
/* 8013D658 0013A458  80 84 00 54 */	lwz r4, 0x54(r4)
/* 8013D65C 0013A45C  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 8013D660 0013A460  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 8013D664 0013A464  4B EC 96 F5 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8013D668 0013A468  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8013D66C 0013A46C  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 8013D670 0013A470  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8013D674 0013A474  38 00 00 00 */	li r0, 0
/* 8013D678 0013A478  90 81 00 08 */	stw r4, 8(r1)
/* 8013D67C 0013A47C  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 8013D680 0013A480  7F E3 FB 78 */	mr r3, r31
/* 8013D684 0013A484  38 A0 00 10 */	li r5, 0x10
/* 8013D688 0013A488  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013D68C 0013A48C  38 C0 00 00 */	li r6, 0
/* 8013D690 0013A490  38 E0 00 00 */	li r7, 0
/* 8013D694 0013A494  39 00 00 00 */	li r8, 0
/* 8013D698 0013A498  90 01 00 10 */	stw r0, 0x10(r1)
/* 8013D69C 0013A49C  39 20 00 00 */	li r9, 0
/* 8013D6A0 0013A4A0  39 40 00 00 */	li r10, 0
/* 8013D6A4 0013A4A4  80 84 00 58 */	lwz r4, 0x58(r4)
/* 8013D6A8 0013A4A8  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 8013D6AC 0013A4AC  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 8013D6B0 0013A4B0  4B EC 96 A9 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8013D6B4 0013A4B4  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8013D6B8 0013A4B8  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 8013D6BC 0013A4BC  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8013D6C0 0013A4C0  38 00 00 00 */	li r0, 0
/* 8013D6C4 0013A4C4  90 81 00 08 */	stw r4, 8(r1)
/* 8013D6C8 0013A4C8  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 8013D6CC 0013A4CC  7F E3 FB 78 */	mr r3, r31
/* 8013D6D0 0013A4D0  38 A0 00 10 */	li r5, 0x10
/* 8013D6D4 0013A4D4  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013D6D8 0013A4D8  38 C0 00 00 */	li r6, 0
/* 8013D6DC 0013A4DC  38 E0 00 00 */	li r7, 0
/* 8013D6E0 0013A4E0  39 00 00 00 */	li r8, 0
/* 8013D6E4 0013A4E4  90 01 00 10 */	stw r0, 0x10(r1)
/* 8013D6E8 0013A4E8  39 20 00 00 */	li r9, 0
/* 8013D6EC 0013A4EC  39 40 00 00 */	li r10, 0
/* 8013D6F0 0013A4F0  80 84 00 5C */	lwz r4, 0x5c(r4)
/* 8013D6F4 0013A4F4  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 8013D6F8 0013A4F8  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 8013D6FC 0013A4FC  4B EC 96 5D */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8013D700 0013A500  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8013D704 0013A504  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 8013D708 0013A508  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8013D70C 0013A50C  38 00 00 00 */	li r0, 0
/* 8013D710 0013A510  90 81 00 08 */	stw r4, 8(r1)
/* 8013D714 0013A514  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 8013D718 0013A518  7F E3 FB 78 */	mr r3, r31
/* 8013D71C 0013A51C  38 A0 00 10 */	li r5, 0x10
/* 8013D720 0013A520  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013D724 0013A524  38 C0 00 00 */	li r6, 0
/* 8013D728 0013A528  38 E0 00 00 */	li r7, 0
/* 8013D72C 0013A52C  39 00 00 00 */	li r8, 0
/* 8013D730 0013A530  90 01 00 10 */	stw r0, 0x10(r1)
/* 8013D734 0013A534  39 20 00 00 */	li r9, 0
/* 8013D738 0013A538  39 40 00 00 */	li r10, 0
/* 8013D73C 0013A53C  80 84 00 60 */	lwz r4, 0x60(r4)
/* 8013D740 0013A540  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 8013D744 0013A544  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 8013D748 0013A548  4B EC 96 11 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8013D74C 0013A54C  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8013D750 0013A550  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 8013D754 0013A554  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8013D758 0013A558  38 00 00 00 */	li r0, 0
/* 8013D75C 0013A55C  90 81 00 08 */	stw r4, 8(r1)
/* 8013D760 0013A560  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 8013D764 0013A564  7F E3 FB 78 */	mr r3, r31
/* 8013D768 0013A568  38 A0 00 10 */	li r5, 0x10
/* 8013D76C 0013A56C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013D770 0013A570  38 C0 00 00 */	li r6, 0
/* 8013D774 0013A574  38 E0 00 00 */	li r7, 0
/* 8013D778 0013A578  39 00 00 00 */	li r8, 0
/* 8013D77C 0013A57C  90 01 00 10 */	stw r0, 0x10(r1)
/* 8013D780 0013A580  39 20 00 00 */	li r9, 0
/* 8013D784 0013A584  39 40 00 00 */	li r10, 0
/* 8013D788 0013A588  80 84 00 64 */	lwz r4, 0x64(r4)
/* 8013D78C 0013A58C  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 8013D790 0013A590  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 8013D794 0013A594  4B EC 95 C5 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8013D798 0013A598  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8013D79C 0013A59C  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 8013D7A0 0013A5A0  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8013D7A4 0013A5A4  38 00 00 00 */	li r0, 0
/* 8013D7A8 0013A5A8  90 81 00 08 */	stw r4, 8(r1)
/* 8013D7AC 0013A5AC  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 8013D7B0 0013A5B0  7F E3 FB 78 */	mr r3, r31
/* 8013D7B4 0013A5B4  38 A0 00 10 */	li r5, 0x10
/* 8013D7B8 0013A5B8  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013D7BC 0013A5BC  38 C0 00 00 */	li r6, 0
/* 8013D7C0 0013A5C0  38 E0 00 00 */	li r7, 0
/* 8013D7C4 0013A5C4  39 00 00 00 */	li r8, 0
/* 8013D7C8 0013A5C8  90 01 00 10 */	stw r0, 0x10(r1)
/* 8013D7CC 0013A5CC  39 20 00 00 */	li r9, 0
/* 8013D7D0 0013A5D0  39 40 00 00 */	li r10, 0
/* 8013D7D4 0013A5D4  80 84 00 68 */	lwz r4, 0x68(r4)
/* 8013D7D8 0013A5D8  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 8013D7DC 0013A5DC  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 8013D7E0 0013A5E0  4B EC 95 79 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8013D7E4 0013A5E4  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8013D7E8 0013A5E8  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 8013D7EC 0013A5EC  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8013D7F0 0013A5F0  38 00 00 00 */	li r0, 0
/* 8013D7F4 0013A5F4  90 81 00 08 */	stw r4, 8(r1)
/* 8013D7F8 0013A5F8  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 8013D7FC 0013A5FC  7F E3 FB 78 */	mr r3, r31
/* 8013D800 0013A600  38 A0 00 10 */	li r5, 0x10
/* 8013D804 0013A604  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013D808 0013A608  38 C0 00 00 */	li r6, 0
/* 8013D80C 0013A60C  38 E0 00 00 */	li r7, 0
/* 8013D810 0013A610  39 00 00 00 */	li r8, 0
/* 8013D814 0013A614  90 01 00 10 */	stw r0, 0x10(r1)
/* 8013D818 0013A618  39 20 00 00 */	li r9, 0
/* 8013D81C 0013A61C  39 40 00 00 */	li r10, 0
/* 8013D820 0013A620  80 84 00 6C */	lwz r4, 0x6c(r4)
/* 8013D824 0013A624  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 8013D828 0013A628  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 8013D82C 0013A62C  4B EC 95 2D */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8013D830 0013A630  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 8013D834 0013A634  C0 22 A4 D0 */	lfs f1, _842-_SDA2_BASE_(r2)
/* 8013D838 0013A638  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 8013D83C 0013A63C  38 A1 00 18 */	addi r5, r1, 0x18
/* 8013D840 0013A640  7F E3 FB 78 */	mr r3, r31
/* 8013D844 0013A644  38 C0 00 01 */	li r6, 1
/* 8013D848 0013A648  4B FB 6B B1 */	bl NPCC_BuildStandardAnimTran__FP10xAnimTablePPcPiif
/* 8013D84C 0013A64C  80 7F 00 08 */	lwz r3, 8(r31)
/* 8013D850 0013A650  48 00 00 10 */	b lbl_8013D860
lbl_8013D854:
/* 8013D854 0013A654  C0 02 A4 D4 */	lfs f0, _843-_SDA2_BASE_(r2)
/* 8013D858 0013A658  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 8013D85C 0013A65C  80 63 00 00 */	lwz r3, 0(r3)
lbl_8013D860:
/* 8013D860 0013A660  28 03 00 00 */	cmplwi r3, 0
/* 8013D864 0013A664  40 82 FF F0 */	bne lbl_8013D854
/* 8013D868 0013A668  80 01 00 94 */	lwz r0, 0x94(r1)
/* 8013D86C 0013A66C  7F E3 FB 78 */	mr r3, r31
/* 8013D870 0013A670  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 8013D874 0013A674  7C 08 03 A6 */	mtlr r0
/* 8013D878 0013A678  38 21 00 90 */	addi r1, r1, 0x90
/* 8013D87C 0013A67C  4E 80 00 20 */	blr 

ZNPC_AnimTable_BossSandyHead__Fv:
/* 8013D8F4 0013A6F4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013D8F8 0013A6F8  7C 08 02 A6 */	mflr r0
/* 8013D8FC 0013A6FC  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013D900 0013A700  38 80 00 00 */	li r4, 0
/* 8013D904 0013A704  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013D908 0013A708  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 8013D90C 0013A70C  38 A0 00 00 */	li r5, 0
/* 8013D910 0013A710  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8013D914 0013A714  38 63 00 FF */	addi r3, r3, 0xff
/* 8013D918 0013A718  4B EC 93 59 */	bl xAnimTableNew__FPCcPP10xAnimTableUi
/* 8013D91C 0013A71C  3C A0 80 00 */	lis r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8013D920 0013A720  3C 80 80 27 */	lis r4, bossSandyStrings@ha
/* 8013D924 0013A724  38 05 6C FC */	addi r0, r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8013D928 0013A728  7C 7F 1B 78 */	mr r31, r3
/* 8013D92C 0013A72C  90 01 00 08 */	stw r0, 8(r1)
/* 8013D930 0013A730  38 00 00 00 */	li r0, 0
/* 8013D934 0013A734  38 84 D1 9C */	addi r4, r4, bossSandyStrings@l
/* 8013D938 0013A738  38 A0 00 10 */	li r5, 0x10
/* 8013D93C 0013A73C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013D940 0013A740  38 84 01 0D */	addi r4, r4, 0x10d
/* 8013D944 0013A744  38 C0 00 00 */	li r6, 0
/* 8013D948 0013A748  38 E0 00 00 */	li r7, 0
/* 8013D94C 0013A74C  90 01 00 10 */	stw r0, 0x10(r1)
/* 8013D950 0013A750  39 00 00 00 */	li r8, 0
/* 8013D954 0013A754  39 20 00 00 */	li r9, 0
/* 8013D958 0013A758  39 40 00 00 */	li r10, 0
/* 8013D95C 0013A75C  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 8013D960 0013A760  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 8013D964 0013A764  4B EC 93 F5 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8013D968 0013A768  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8013D96C 0013A76C  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013D970 0013A770  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8013D974 0013A774  38 00 00 00 */	li r0, 0
/* 8013D978 0013A778  90 81 00 08 */	stw r4, 8(r1)
/* 8013D97C 0013A77C  38 83 D1 9C */	addi r4, r3, bossSandyStrings@l
/* 8013D980 0013A780  7F E3 FB 78 */	mr r3, r31
/* 8013D984 0013A784  38 A0 00 10 */	li r5, 0x10
/* 8013D988 0013A788  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013D98C 0013A78C  38 84 01 14 */	addi r4, r4, 0x114
/* 8013D990 0013A790  38 C0 00 00 */	li r6, 0
/* 8013D994 0013A794  38 E0 00 00 */	li r7, 0
/* 8013D998 0013A798  90 01 00 10 */	stw r0, 0x10(r1)
/* 8013D99C 0013A79C  39 00 00 00 */	li r8, 0
/* 8013D9A0 0013A7A0  39 20 00 00 */	li r9, 0
/* 8013D9A4 0013A7A4  39 40 00 00 */	li r10, 0
/* 8013D9A8 0013A7A8  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 8013D9AC 0013A7AC  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 8013D9B0 0013A7B0  4B EC 93 A9 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8013D9B4 0013A7B4  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8013D9B8 0013A7B8  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013D9BC 0013A7BC  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8013D9C0 0013A7C0  38 00 00 00 */	li r0, 0
/* 8013D9C4 0013A7C4  90 81 00 08 */	stw r4, 8(r1)
/* 8013D9C8 0013A7C8  38 83 D1 9C */	addi r4, r3, bossSandyStrings@l
/* 8013D9CC 0013A7CC  7F E3 FB 78 */	mr r3, r31
/* 8013D9D0 0013A7D0  38 A0 00 10 */	li r5, 0x10
/* 8013D9D4 0013A7D4  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013D9D8 0013A7D8  38 84 01 1E */	addi r4, r4, 0x11e
/* 8013D9DC 0013A7DC  38 C0 00 00 */	li r6, 0
/* 8013D9E0 0013A7E0  38 E0 00 00 */	li r7, 0
/* 8013D9E4 0013A7E4  90 01 00 10 */	stw r0, 0x10(r1)
/* 8013D9E8 0013A7E8  39 00 00 00 */	li r8, 0
/* 8013D9EC 0013A7EC  39 20 00 00 */	li r9, 0
/* 8013D9F0 0013A7F0  39 40 00 00 */	li r10, 0
/* 8013D9F4 0013A7F4  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 8013D9F8 0013A7F8  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 8013D9FC 0013A7FC  4B EC 93 5D */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8013DA00 0013A800  38 00 00 00 */	li r0, 0
/* 8013DA04 0013A804  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013DA08 0013A808  90 01 00 08 */	stw r0, 8(r1)
/* 8013DA0C 0013A80C  38 A3 D1 9C */	addi r5, r3, bossSandyStrings@l
/* 8013DA10 0013A810  3C 80 80 14 */	lis r4, HeadIsCarried__FP15xAnimTransitionP11xAnimSinglePv@ha
/* 8013DA14 0013A814  7F E3 FB 78 */	mr r3, r31
/* 8013DA18 0013A818  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013DA1C 0013A81C  38 C4 D8 80 */	addi r6, r4, HeadIsCarried__FP15xAnimTransitionP11xAnimSinglePv@l
/* 8013DA20 0013A820  38 85 01 0D */	addi r4, r5, 0x10d
/* 8013DA24 0013A824  38 A5 01 14 */	addi r5, r5, 0x114
/* 8013DA28 0013A828  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 8013DA2C 0013A82C  38 E0 00 00 */	li r7, 0
/* 8013DA30 0013A830  C0 62 A4 D8 */	lfs f3, _864-_SDA2_BASE_(r2)
/* 8013DA34 0013A834  39 00 00 00 */	li r8, 0
/* 8013DA38 0013A838  FC 40 08 90 */	fmr f2, f1
/* 8013DA3C 0013A83C  39 20 00 00 */	li r9, 0
/* 8013DA40 0013A840  39 40 00 00 */	li r10, 0
/* 8013DA44 0013A844  4B EC 99 7D */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 8013DA48 0013A848  38 00 00 00 */	li r0, 0
/* 8013DA4C 0013A84C  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013DA50 0013A850  90 01 00 08 */	stw r0, 8(r1)
/* 8013DA54 0013A854  38 A3 D1 9C */	addi r5, r3, bossSandyStrings@l
/* 8013DA58 0013A858  3C 80 80 14 */	lis r4, HeadNotCarried__FP15xAnimTransitionP11xAnimSinglePv@ha
/* 8013DA5C 0013A85C  7F E3 FB 78 */	mr r3, r31
/* 8013DA60 0013A860  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013DA64 0013A864  38 C4 D8 A4 */	addi r6, r4, HeadNotCarried__FP15xAnimTransitionP11xAnimSinglePv@l
/* 8013DA68 0013A868  38 85 01 14 */	addi r4, r5, 0x114
/* 8013DA6C 0013A86C  38 A5 01 0D */	addi r5, r5, 0x10d
/* 8013DA70 0013A870  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 8013DA74 0013A874  38 E0 00 00 */	li r7, 0
/* 8013DA78 0013A878  C0 62 A4 D8 */	lfs f3, _864-_SDA2_BASE_(r2)
/* 8013DA7C 0013A87C  39 00 00 00 */	li r8, 0
/* 8013DA80 0013A880  FC 40 08 90 */	fmr f2, f1
/* 8013DA84 0013A884  39 20 00 00 */	li r9, 0
/* 8013DA88 0013A888  39 40 00 00 */	li r10, 0
/* 8013DA8C 0013A88C  4B EC 99 35 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 8013DA90 0013A890  38 00 00 00 */	li r0, 0
/* 8013DA94 0013A894  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013DA98 0013A898  90 01 00 08 */	stw r0, 8(r1)
/* 8013DA9C 0013A89C  38 A3 D1 9C */	addi r5, r3, bossSandyStrings@l
/* 8013DAA0 0013A8A0  3C 80 80 14 */	lis r4, HeadIsShocked__FP15xAnimTransitionP11xAnimSinglePv@ha
/* 8013DAA4 0013A8A4  7F E3 FB 78 */	mr r3, r31
/* 8013DAA8 0013A8A8  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013DAAC 0013A8AC  38 C4 D8 CC */	addi r6, r4, HeadIsShocked__FP15xAnimTransitionP11xAnimSinglePv@l
/* 8013DAB0 0013A8B0  38 85 01 0D */	addi r4, r5, 0x10d
/* 8013DAB4 0013A8B4  38 A5 01 1E */	addi r5, r5, 0x11e
/* 8013DAB8 0013A8B8  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 8013DABC 0013A8BC  38 E0 00 00 */	li r7, 0
/* 8013DAC0 0013A8C0  C0 62 A4 D8 */	lfs f3, _864-_SDA2_BASE_(r2)
/* 8013DAC4 0013A8C4  39 00 00 00 */	li r8, 0
/* 8013DAC8 0013A8C8  FC 40 08 90 */	fmr f2, f1
/* 8013DACC 0013A8CC  39 20 00 00 */	li r9, 0
/* 8013DAD0 0013A8D0  39 40 00 00 */	li r10, 0
/* 8013DAD4 0013A8D4  4B EC 98 ED */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 8013DAD8 0013A8D8  38 00 00 00 */	li r0, 0
/* 8013DADC 0013A8DC  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013DAE0 0013A8E0  90 01 00 08 */	stw r0, 8(r1)
/* 8013DAE4 0013A8E4  38 A3 D1 9C */	addi r5, r3, bossSandyStrings@l
/* 8013DAE8 0013A8E8  3C 80 80 14 */	lis r4, HeadNotShocked__FP15xAnimTransitionP11xAnimSinglePv@ha
/* 8013DAEC 0013A8EC  7F E3 FB 78 */	mr r3, r31
/* 8013DAF0 0013A8F0  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013DAF4 0013A8F4  38 C4 D8 DC */	addi r6, r4, HeadNotShocked__FP15xAnimTransitionP11xAnimSinglePv@l
/* 8013DAF8 0013A8F8  38 85 01 1E */	addi r4, r5, 0x11e
/* 8013DAFC 0013A8FC  38 A5 01 0D */	addi r5, r5, 0x10d
/* 8013DB00 0013A900  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 8013DB04 0013A904  38 E0 00 00 */	li r7, 0
/* 8013DB08 0013A908  C0 62 A4 D8 */	lfs f3, _864-_SDA2_BASE_(r2)
/* 8013DB0C 0013A90C  39 00 00 00 */	li r8, 0
/* 8013DB10 0013A910  FC 40 08 90 */	fmr f2, f1
/* 8013DB14 0013A914  39 20 00 00 */	li r9, 0
/* 8013DB18 0013A918  39 40 00 00 */	li r10, 0
/* 8013DB1C 0013A91C  4B EC 98 A5 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 8013DB20 0013A920  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013DB24 0013A924  7F E3 FB 78 */	mr r3, r31
/* 8013DB28 0013A928  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8013DB2C 0013A92C  7C 08 03 A6 */	mtlr r0
/* 8013DB30 0013A930  38 21 00 20 */	addi r1, r1, 0x20
/* 8013DB34 0013A934  4E 80 00 20 */	blr 

ZNPC_AnimTable_BossSandyScoreboard__Fv:
/* 8013DB38 0013A938  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013DB3C 0013A93C  7C 08 02 A6 */	mflr r0
/* 8013DB40 0013A940  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013DB44 0013A944  38 80 00 00 */	li r4, 0
/* 8013DB48 0013A948  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013DB4C 0013A94C  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 8013DB50 0013A950  38 A0 00 00 */	li r5, 0
/* 8013DB54 0013A954  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8013DB58 0013A958  38 63 01 28 */	addi r3, r3, 0x128
/* 8013DB5C 0013A95C  4B EC 91 15 */	bl xAnimTableNew__FPCcPP10xAnimTableUi
/* 8013DB60 0013A960  3C A0 80 00 */	lis r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8013DB64 0013A964  3C 80 80 27 */	lis r4, bossSandyStrings@ha
/* 8013DB68 0013A968  38 05 6C FC */	addi r0, r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8013DB6C 0013A96C  7C 7F 1B 78 */	mr r31, r3
/* 8013DB70 0013A970  90 01 00 08 */	stw r0, 8(r1)
/* 8013DB74 0013A974  38 00 00 00 */	li r0, 0
/* 8013DB78 0013A978  38 84 D1 9C */	addi r4, r4, bossSandyStrings@l
/* 8013DB7C 0013A97C  38 A0 00 10 */	li r5, 0x10
/* 8013DB80 0013A980  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013DB84 0013A984  38 84 01 0D */	addi r4, r4, 0x10d
/* 8013DB88 0013A988  38 C0 00 00 */	li r6, 0
/* 8013DB8C 0013A98C  38 E0 00 00 */	li r7, 0
/* 8013DB90 0013A990  90 01 00 10 */	stw r0, 0x10(r1)
/* 8013DB94 0013A994  39 00 00 00 */	li r8, 0
/* 8013DB98 0013A998  39 20 00 00 */	li r9, 0
/* 8013DB9C 0013A99C  39 40 00 00 */	li r10, 0
/* 8013DBA0 0013A9A0  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 8013DBA4 0013A9A4  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 8013DBA8 0013A9A8  4B EC 91 B1 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8013DBAC 0013A9AC  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8013DBB0 0013A9B0  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013DBB4 0013A9B4  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8013DBB8 0013A9B8  38 00 00 00 */	li r0, 0
/* 8013DBBC 0013A9BC  90 81 00 08 */	stw r4, 8(r1)
/* 8013DBC0 0013A9C0  38 83 D1 9C */	addi r4, r3, bossSandyStrings@l
/* 8013DBC4 0013A9C4  7F E3 FB 78 */	mr r3, r31
/* 8013DBC8 0013A9C8  38 A0 00 10 */	li r5, 0x10
/* 8013DBCC 0013A9CC  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013DBD0 0013A9D0  38 84 01 1E */	addi r4, r4, 0x11e
/* 8013DBD4 0013A9D4  38 C0 00 00 */	li r6, 0
/* 8013DBD8 0013A9D8  38 E0 00 00 */	li r7, 0
/* 8013DBDC 0013A9DC  90 01 00 10 */	stw r0, 0x10(r1)
/* 8013DBE0 0013A9E0  39 00 00 00 */	li r8, 0
/* 8013DBE4 0013A9E4  39 20 00 00 */	li r9, 0
/* 8013DBE8 0013A9E8  39 40 00 00 */	li r10, 0
/* 8013DBEC 0013A9EC  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 8013DBF0 0013A9F0  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 8013DBF4 0013A9F4  4B EC 91 65 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8013DBF8 0013A9F8  38 00 00 00 */	li r0, 0
/* 8013DBFC 0013A9FC  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013DC00 0013AA00  90 01 00 08 */	stw r0, 8(r1)
/* 8013DC04 0013AA04  38 A3 D1 9C */	addi r5, r3, bossSandyStrings@l
/* 8013DC08 0013AA08  3C 80 80 14 */	lis r4, HeadIsShocked__FP15xAnimTransitionP11xAnimSinglePv@ha
/* 8013DC0C 0013AA0C  7F E3 FB 78 */	mr r3, r31
/* 8013DC10 0013AA10  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013DC14 0013AA14  38 C4 D8 CC */	addi r6, r4, HeadIsShocked__FP15xAnimTransitionP11xAnimSinglePv@l
/* 8013DC18 0013AA18  38 85 01 0D */	addi r4, r5, 0x10d
/* 8013DC1C 0013AA1C  38 A5 01 1E */	addi r5, r5, 0x11e
/* 8013DC20 0013AA20  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 8013DC24 0013AA24  38 E0 00 00 */	li r7, 0
/* 8013DC28 0013AA28  C0 62 A4 D8 */	lfs f3, _864-_SDA2_BASE_(r2)
/* 8013DC2C 0013AA2C  39 00 00 00 */	li r8, 0
/* 8013DC30 0013AA30  FC 40 08 90 */	fmr f2, f1
/* 8013DC34 0013AA34  39 20 00 00 */	li r9, 0
/* 8013DC38 0013AA38  39 40 00 00 */	li r10, 0
/* 8013DC3C 0013AA3C  4B EC 97 85 */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 8013DC40 0013AA40  38 00 00 00 */	li r0, 0
/* 8013DC44 0013AA44  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013DC48 0013AA48  90 01 00 08 */	stw r0, 8(r1)
/* 8013DC4C 0013AA4C  38 A3 D1 9C */	addi r5, r3, bossSandyStrings@l
/* 8013DC50 0013AA50  3C 80 80 14 */	lis r4, HeadNotShocked__FP15xAnimTransitionP11xAnimSinglePv@ha
/* 8013DC54 0013AA54  7F E3 FB 78 */	mr r3, r31
/* 8013DC58 0013AA58  90 01 00 0C */	stw r0, 0xc(r1)
/* 8013DC5C 0013AA5C  38 C4 D8 DC */	addi r6, r4, HeadNotShocked__FP15xAnimTransitionP11xAnimSinglePv@l
/* 8013DC60 0013AA60  38 85 01 1E */	addi r4, r5, 0x11e
/* 8013DC64 0013AA64  38 A5 01 0D */	addi r5, r5, 0x10d
/* 8013DC68 0013AA68  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 8013DC6C 0013AA6C  38 E0 00 00 */	li r7, 0
/* 8013DC70 0013AA70  C0 62 A4 D8 */	lfs f3, _864-_SDA2_BASE_(r2)
/* 8013DC74 0013AA74  39 00 00 00 */	li r8, 0
/* 8013DC78 0013AA78  FC 40 08 90 */	fmr f2, f1
/* 8013DC7C 0013AA7C  39 20 00 00 */	li r9, 0
/* 8013DC80 0013AA80  39 40 00 00 */	li r10, 0
/* 8013DC84 0013AA84  4B EC 97 3D */	bl xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
/* 8013DC88 0013AA88  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013DC8C 0013AA8C  7F E3 FB 78 */	mr r3, r31
/* 8013DC90 0013AA90  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8013DC94 0013AA94  7C 08 03 A6 */	mtlr r0
/* 8013DC98 0013AA98  38 21 00 20 */	addi r1, r1, 0x20
/* 8013DC9C 0013AA9C  4E 80 00 20 */	blr 

Init__10zNPCBSandyFP9xEntAsset:
/* 8013DCA0 0013AAA0  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8013DCA4 0013AAA4  7C 08 02 A6 */	mflr r0
/* 8013DCA8 0013AAA8  3C A0 80 2A */	lis r5, sBone@ha
/* 8013DCAC 0013AAAC  90 01 00 84 */	stw r0, 0x84(r1)
/* 8013DCB0 0013AAB0  BE E1 00 5C */	stmw r23, 0x5c(r1)
/* 8013DCB4 0013AAB4  7C 7F 1B 78 */	mr r31, r3
/* 8013DCB8 0013AAB8  3B A5 98 C8 */	addi r29, r5, sBone@l
/* 8013DCBC 0013AABC  4B FB 13 E1 */	bl Init__10zNPCCommonFP9xEntAsset
/* 8013DCC0 0013AAC0  93 ED 96 94 */	stw r31, sSandyPtr-_SDA_BASE_(r13)
/* 8013DCC4 0013AAC4  38 00 00 01 */	li r0, 1
/* 8013DCC8 0013AAC8  38 80 00 34 */	li r4, 0x34
/* 8013DCCC 0013AACC  38 A0 00 00 */	li r5, 0
/* 8013DCD0 0013AAD0  90 1F 02 D8 */	stw r0, 0x2d8(r31)
/* 8013DCD4 0013AAD4  90 1F 0D 50 */	stw r0, 0xd50(r31)
/* 8013DCD8 0013AAD8  80 6D 89 E0 */	lwz r3, gActiveHeap-_SDA_BASE_(r13)
/* 8013DCDC 0013AADC  4B EF 5C 65 */	bl xMemAlloc__FUiUii
/* 8013DCE0 0013AAE0  90 7F 02 B8 */	stw r3, 0x2b8(r31)
/* 8013DCE4 0013AAE4  38 80 00 34 */	li r4, 0x34
/* 8013DCE8 0013AAE8  38 A0 00 00 */	li r5, 0
/* 8013DCEC 0013AAEC  80 6D 89 E0 */	lwz r3, gActiveHeap-_SDA_BASE_(r13)
/* 8013DCF0 0013AAF0  4B EF 5C 51 */	bl xMemAlloc__FUiUii
/* 8013DCF4 0013AAF4  90 7F 02 B4 */	stw r3, 0x2b4(r31)
/* 8013DCF8 0013AAF8  38 80 00 34 */	li r4, 0x34
/* 8013DCFC 0013AAFC  38 A0 00 00 */	li r5, 0
/* 8013DD00 0013AB00  80 6D 89 E0 */	lwz r3, gActiveHeap-_SDA_BASE_(r13)
/* 8013DD04 0013AB04  4B EF 5C 3D */	bl xMemAlloc__FUiUii
/* 8013DD08 0013AB08  3C 80 80 14 */	lis r4, BoundEventCB__FP5xBaseP5xBaseUiPCfP5xBase@ha
/* 8013DD0C 0013AB0C  90 7F 02 BC */	stw r3, 0x2bc(r31)
/* 8013DD10 0013AB10  3B 7D 00 54 */	addi r27, r29, 0x54
/* 8013DD14 0013AB14  3B 5D 00 88 */	addi r26, r29, 0x88
/* 8013DD18 0013AB18  3B 3D 00 00 */	addi r25, r29, 0
/* 8013DD1C 0013AB1C  3B C4 06 F8 */	addi r30, r4, BoundEventCB__FP5xBaseP5xBaseUiPCfP5xBase@l
/* 8013DD20 0013AB20  3B 00 00 00 */	li r24, 0
/* 8013DD24 0013AB24  3B 80 00 00 */	li r28, 0
lbl_8013DD28:
/* 8013DD28 0013AB28  80 7F 02 B8 */	lwz r3, 0x2b8(r31)
/* 8013DD2C 0013AB2C  38 00 00 00 */	li r0, 0
/* 8013DD30 0013AB30  38 80 00 D0 */	li r4, 0xd0
/* 8013DD34 0013AB34  38 A0 00 00 */	li r5, 0
/* 8013DD38 0013AB38  7C 03 E1 2E */	stwx r0, r3, r28
/* 8013DD3C 0013AB3C  80 6D 89 E0 */	lwz r3, gActiveHeap-_SDA_BASE_(r13)
/* 8013DD40 0013AB40  4B EF 5C 01 */	bl xMemAlloc__FUiUii
/* 8013DD44 0013AB44  80 9F 02 B4 */	lwz r4, 0x2b4(r31)
/* 8013DD48 0013AB48  38 E0 00 0C */	li r7, 0xc
/* 8013DD4C 0013AB4C  38 A0 00 02 */	li r5, 2
/* 8013DD50 0013AB50  38 C0 00 10 */	li r6, 0x10
/* 8013DD54 0013AB54  7C 64 E1 2E */	stwx r3, r4, r28
/* 8013DD58 0013AB58  38 00 00 00 */	li r0, 0
/* 8013DD5C 0013AB5C  80 7F 02 B4 */	lwz r3, 0x2b4(r31)
/* 8013DD60 0013AB60  7E E3 E0 2E */	lwzx r23, r3, r28
/* 8013DD64 0013AB64  93 17 00 00 */	stw r24, 0(r23)
/* 8013DD68 0013AB68  7E E4 BB 78 */	mr r4, r23
/* 8013DD6C 0013AB6C  38 77 00 50 */	addi r3, r23, 0x50
/* 8013DD70 0013AB70  93 D7 00 0C */	stw r30, 0xc(r23)
/* 8013DD74 0013AB74  93 F7 00 B8 */	stw r31, 0xb8(r23)
/* 8013DD78 0013AB78  98 F7 00 04 */	stb r7, 4(r23)
/* 8013DD7C 0013AB7C  98 B7 00 20 */	stb r5, 0x20(r23)
/* 8013DD80 0013AB80  98 D7 00 22 */	stb r6, 0x22(r23)
/* 8013DD84 0013AB84  98 D7 00 23 */	stb r6, 0x23(r23)
/* 8013DD88 0013AB88  A0 B7 00 06 */	lhz r5, 6(r23)
/* 8013DD8C 0013AB8C  60 A5 00 21 */	ori r5, r5, 0x21
/* 8013DD90 0013AB90  B0 B7 00 06 */	sth r5, 6(r23)
/* 8013DD94 0013AB94  98 D7 00 1C */	stb r6, 0x1c(r23)
/* 8013DD98 0013AB98  88 BF 00 18 */	lbz r5, 0x18(r31)
/* 8013DD9C 0013AB9C  98 B7 00 18 */	stb r5, 0x18(r23)
/* 8013DDA0 0013ABA0  80 BF 00 24 */	lwz r5, 0x24(r31)
/* 8013DDA4 0013ABA4  90 B7 00 24 */	stw r5, 0x24(r23)
/* 8013DDA8 0013ABA8  90 17 00 34 */	stw r0, 0x34(r23)
/* 8013DDAC 0013ABAC  90 17 00 3C */	stw r0, 0x3c(r23)
/* 8013DDB0 0013ABB0  90 17 00 44 */	stw r0, 0x44(r23)
/* 8013DDB4 0013ABB4  90 17 00 B0 */	stw r0, 0xb0(r23)
/* 8013DDB8 0013ABB8  98 17 00 1A */	stb r0, 0x1a(r23)
/* 8013DDBC 0013ABBC  90 17 00 28 */	stw r0, 0x28(r23)
/* 8013DDC0 0013ABC0  90 17 00 30 */	stw r0, 0x30(r23)
/* 8013DDC4 0013ABC4  98 17 00 1B */	stb r0, 0x1b(r23)
/* 8013DDC8 0013ABC8  90 17 00 40 */	stw r0, 0x40(r23)
/* 8013DDCC 0013ABCC  90 17 00 48 */	stw r0, 0x48(r23)
/* 8013DDD0 0013ABD0  90 17 00 4C */	stw r0, 0x4c(r23)
/* 8013DDD4 0013ABD4  90 17 00 B4 */	stw r0, 0xb4(r23)
/* 8013DDD8 0013ABD8  98 17 00 1F */	stb r0, 0x1f(r23)
/* 8013DDDC 0013ABDC  90 17 00 C8 */	stw r0, 0xc8(r23)
/* 8013DDE0 0013ABE0  4B FE 40 2D */	bl xGridBoundInit__FP10xGridBoundPv
/* 8013DDE4 0013ABE4  C0 3B 00 00 */	lfs f1, 0(r27)
/* 8013DDE8 0013ABE8  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013DDEC 0013ABEC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013DDF0 0013ABF0  40 81 00 4C */	ble lbl_8013DE3C
/* 8013DDF4 0013ABF4  38 00 00 01 */	li r0, 1
/* 8013DDF8 0013ABF8  7F 46 D3 78 */	mr r6, r26
/* 8013DDFC 0013ABFC  98 17 00 84 */	stb r0, 0x84(r23)
/* 8013DE00 0013AC00  C0 1B 00 00 */	lfs f0, 0(r27)
/* 8013DE04 0013AC04  D0 17 00 94 */	stfs f0, 0x94(r23)
/* 8013DE08 0013AC08  80 9F 02 B4 */	lwz r4, 0x2b4(r31)
/* 8013DE0C 0013AC0C  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 8013DE10 0013AC10  7C E4 E0 2E */	lwzx r7, r4, r28
/* 8013DE14 0013AC14  80 83 00 4C */	lwz r4, 0x4c(r3)
/* 8013DE18 0013AC18  80 B9 00 00 */	lwz r5, 0(r25)
/* 8013DE1C 0013AC1C  38 67 00 88 */	addi r3, r7, 0x88
/* 8013DE20 0013AC20  48 00 26 AD */	bl GetBonePos__FP5xVec3P7xMat4x3iP5xVec3
/* 8013DE24 0013AC24  80 7F 02 B4 */	lwz r3, 0x2b4(r31)
/* 8013DE28 0013AC28  7C 63 E0 2E */	lwzx r3, r3, r28
/* 8013DE2C 0013AC2C  38 63 00 64 */	addi r3, r3, 0x64
/* 8013DE30 0013AC30  7C 64 1B 78 */	mr r4, r3
/* 8013DE34 0013AC34  4B EC D1 09 */	bl xQuickCullForBound__FP7xQCDataPC6xBound
/* 8013DE38 0013AC38  48 00 00 20 */	b lbl_8013DE58
lbl_8013DE3C:
/* 8013DE3C 0013AC3C  38 00 00 04 */	li r0, 4
/* 8013DE40 0013AC40  38 80 00 40 */	li r4, 0x40
/* 8013DE44 0013AC44  98 17 00 84 */	stb r0, 0x84(r23)
/* 8013DE48 0013AC48  38 A0 00 00 */	li r5, 0
/* 8013DE4C 0013AC4C  80 6D 89 E0 */	lwz r3, gActiveHeap-_SDA_BASE_(r13)
/* 8013DE50 0013AC50  4B EF 5A F1 */	bl xMemAlloc__FUiUii
/* 8013DE54 0013AC54  90 77 00 AC */	stw r3, 0xac(r23)
lbl_8013DE58:
/* 8013DE58 0013AC58  3B 18 00 01 */	addi r24, r24, 1
/* 8013DE5C 0013AC5C  3B 7B 00 04 */	addi r27, r27, 4
/* 8013DE60 0013AC60  2C 18 00 0D */	cmpwi r24, 0xd
/* 8013DE64 0013AC64  3B 5A 00 0C */	addi r26, r26, 0xc
/* 8013DE68 0013AC68  3B 39 00 04 */	addi r25, r25, 4
/* 8013DE6C 0013AC6C  3B 9C 00 04 */	addi r28, r28, 4
/* 8013DE70 0013AC70  41 80 FE B8 */	blt lbl_8013DD28
/* 8013DE74 0013AC74  80 BF 02 B4 */	lwz r5, 0x2b4(r31)
/* 8013DE78 0013AC78  38 60 00 02 */	li r3, 2
/* 8013DE7C 0013AC7C  80 DF 00 24 */	lwz r6, 0x24(r31)
/* 8013DE80 0013AC80  38 80 00 03 */	li r4, 3
/* 8013DE84 0013AC84  80 A5 00 08 */	lwz r5, 8(r5)
/* 8013DE88 0013AC88  80 C6 00 4C */	lwz r6, 0x4c(r6)
/* 8013DE8C 0013AC8C  48 00 26 E9 */	bl MakeOBBFor__FiiP4xEntP7xMat4x3
/* 8013DE90 0013AC90  80 7F 02 B4 */	lwz r3, 0x2b4(r31)
/* 8013DE94 0013AC94  80 63 00 08 */	lwz r3, 8(r3)
/* 8013DE98 0013AC98  38 63 00 64 */	addi r3, r3, 0x64
/* 8013DE9C 0013AC9C  7C 64 1B 78 */	mr r4, r3
/* 8013DEA0 0013ACA0  4B EC D0 9D */	bl xQuickCullForBound__FP7xQCDataPC6xBound
/* 8013DEA4 0013ACA4  80 BF 02 B4 */	lwz r5, 0x2b4(r31)
/* 8013DEA8 0013ACA8  38 60 00 04 */	li r3, 4
/* 8013DEAC 0013ACAC  80 DF 00 24 */	lwz r6, 0x24(r31)
/* 8013DEB0 0013ACB0  38 80 00 05 */	li r4, 5
/* 8013DEB4 0013ACB4  80 A5 00 10 */	lwz r5, 0x10(r5)
/* 8013DEB8 0013ACB8  80 C6 00 4C */	lwz r6, 0x4c(r6)
/* 8013DEBC 0013ACBC  48 00 26 B9 */	bl MakeOBBFor__FiiP4xEntP7xMat4x3
/* 8013DEC0 0013ACC0  80 7F 02 B4 */	lwz r3, 0x2b4(r31)
/* 8013DEC4 0013ACC4  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8013DEC8 0013ACC8  38 63 00 64 */	addi r3, r3, 0x64
/* 8013DECC 0013ACCC  7C 64 1B 78 */	mr r4, r3
/* 8013DED0 0013ACD0  4B EC D0 6D */	bl xQuickCullForBound__FP7xQCDataPC6xBound
/* 8013DED4 0013ACD4  80 BF 02 B4 */	lwz r5, 0x2b4(r31)
/* 8013DED8 0013ACD8  38 60 00 09 */	li r3, 9
/* 8013DEDC 0013ACDC  80 DF 00 24 */	lwz r6, 0x24(r31)
/* 8013DEE0 0013ACE0  38 80 00 0A */	li r4, 0xa
/* 8013DEE4 0013ACE4  80 A5 00 24 */	lwz r5, 0x24(r5)
/* 8013DEE8 0013ACE8  80 C6 00 4C */	lwz r6, 0x4c(r6)
/* 8013DEEC 0013ACEC  48 00 26 89 */	bl MakeOBBFor__FiiP4xEntP7xMat4x3
/* 8013DEF0 0013ACF0  80 7F 02 B4 */	lwz r3, 0x2b4(r31)
/* 8013DEF4 0013ACF4  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8013DEF8 0013ACF8  38 63 00 64 */	addi r3, r3, 0x64
/* 8013DEFC 0013ACFC  7C 64 1B 78 */	mr r4, r3
/* 8013DF00 0013AD00  4B EC D0 3D */	bl xQuickCullForBound__FP7xQCDataPC6xBound
/* 8013DF04 0013AD04  80 BF 02 B4 */	lwz r5, 0x2b4(r31)
/* 8013DF08 0013AD08  38 60 00 0B */	li r3, 0xb
/* 8013DF0C 0013AD0C  80 DF 00 24 */	lwz r6, 0x24(r31)
/* 8013DF10 0013AD10  38 80 00 0C */	li r4, 0xc
/* 8013DF14 0013AD14  80 A5 00 2C */	lwz r5, 0x2c(r5)
/* 8013DF18 0013AD18  80 C6 00 4C */	lwz r6, 0x4c(r6)
/* 8013DF1C 0013AD1C  48 00 26 59 */	bl MakeOBBFor__FiiP4xEntP7xMat4x3
/* 8013DF20 0013AD20  80 7F 02 B4 */	lwz r3, 0x2b4(r31)
/* 8013DF24 0013AD24  80 63 00 2C */	lwz r3, 0x2c(r3)
/* 8013DF28 0013AD28  38 63 00 64 */	addi r3, r3, 0x64
/* 8013DF2C 0013AD2C  7C 64 1B 78 */	mr r4, r3
/* 8013DF30 0013AD30  4B EC D0 0D */	bl xQuickCullForBound__FP7xQCDataPC6xBound
/* 8013DF34 0013AD34  38 00 00 01 */	li r0, 1
/* 8013DF38 0013AD38  3C 60 80 33 */	lis r3, sSinTable@ha
/* 8013DF3C 0013AD3C  98 0D 96 78 */	stb r0, sOthersHaventBeenAdded-_SDA_BASE_(r13)
/* 8013DF40 0013AD40  3B 03 80 00 */	addi r24, r3, sSinTable@l
/* 8013DF44 0013AD44  3B 20 00 00 */	li r25, 0
/* 8013DF48 0013AD48  3E E0 43 30 */	lis r23, 0x4330
lbl_8013DF4C:
/* 8013DF4C 0013AD4C  6F 20 80 00 */	xoris r0, r25, 0x8000
/* 8013DF50 0013AD50  92 E1 00 28 */	stw r23, 0x28(r1)
/* 8013DF54 0013AD54  C8 42 A5 00 */	lfd f2, _1039-_SDA2_BASE_(r2)
/* 8013DF58 0013AD58  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8013DF5C 0013AD5C  C0 62 A4 DC */	lfs f3, _1029-_SDA2_BASE_(r2)
/* 8013DF60 0013AD60  C8 21 00 28 */	lfd f1, 0x28(r1)
/* 8013DF64 0013AD64  C0 02 A4 E0 */	lfs f0, _1030-_SDA2_BASE_(r2)
/* 8013DF68 0013AD68  EC 21 10 28 */	fsubs f1, f1, f2
/* 8013DF6C 0013AD6C  EC 23 00 72 */	fmuls f1, f3, f1
/* 8013DF70 0013AD70  EC 21 00 32 */	fmuls f1, f1, f0
/* 8013DF74 0013AD74  4B F8 6E D9 */	bl isin__Ff
/* 8013DF78 0013AD78  3B 39 00 01 */	addi r25, r25, 1
/* 8013DF7C 0013AD7C  D0 38 00 00 */	stfs f1, 0(r24)
/* 8013DF80 0013AD80  2C 19 00 10 */	cmpwi r25, 0x10
/* 8013DF84 0013AD84  3B 18 00 04 */	addi r24, r24, 4
/* 8013DF88 0013AD88  41 80 FF C4 */	blt lbl_8013DF4C
/* 8013DF8C 0013AD8C  48 00 17 2D */	bl zNPCBSandy_BossDamageEffect_Init__Fv
/* 8013DF90 0013AD90  38 00 01 00 */	li r0, 0x100
/* 8013DF94 0013AD94  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013DF98 0013AD98  38 83 D1 9C */	addi r4, r3, bossSandyStrings@l
/* 8013DF9C 0013AD9C  90 1F 07 7C */	stw r0, 0x77c(r31)
/* 8013DFA0 0013ADA0  38 61 00 08 */	addi r3, r1, 8
/* 8013DFA4 0013ADA4  38 84 01 3C */	addi r4, r4, 0x13c
/* 8013DFA8 0013ADA8  48 0A 97 59 */	bl strcpy
/* 8013DFAC 0013ADAC  7F F8 FB 78 */	mr r24, r31
/* 8013DFB0 0013ADB0  3B 20 00 00 */	li r25, 0
/* 8013DFB4 0013ADB4  3A E0 00 30 */	li r23, 0x30
lbl_8013DFB8:
/* 8013DFB8 0013ADB8  38 61 00 08 */	addi r3, r1, 8
/* 8013DFBC 0013ADBC  4B F0 E2 59 */	bl xStrHash__FPCc
/* 8013DFC0 0013ADC0  38 80 00 00 */	li r4, 0
/* 8013DFC4 0013ADC4  4B F0 D7 49 */	bl xSTFindAsset__FUiPUi
/* 8013DFC8 0013ADC8  7C 60 1B 78 */	mr r0, r3
/* 8013DFCC 0013ADCC  38 78 0B 0C */	addi r3, r24, 0xb0c
/* 8013DFD0 0013ADD0  7C 04 03 78 */	mr r4, r0
/* 8013DFD4 0013ADD4  4B F1 05 09 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 8013DFD8 0013ADD8  88 61 00 12 */	lbz r3, 0x12(r1)
/* 8013DFDC 0013ADDC  38 63 00 01 */	addi r3, r3, 1
/* 8013DFE0 0013ADE0  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8013DFE4 0013ADE4  98 61 00 12 */	stb r3, 0x12(r1)
/* 8013DFE8 0013ADE8  28 00 00 39 */	cmplwi r0, 0x39
/* 8013DFEC 0013ADEC  40 81 00 14 */	ble lbl_8013E000
/* 8013DFF0 0013ADF0  88 61 00 11 */	lbz r3, 0x11(r1)
/* 8013DFF4 0013ADF4  9A E1 00 12 */	stb r23, 0x12(r1)
/* 8013DFF8 0013ADF8  38 03 00 01 */	addi r0, r3, 1
/* 8013DFFC 0013ADFC  98 01 00 11 */	stb r0, 0x11(r1)
lbl_8013E000:
/* 8013E000 0013AE00  3B 39 00 01 */	addi r25, r25, 1
/* 8013E004 0013AE04  3B 18 00 0C */	addi r24, r24, 0xc
/* 8013E008 0013AE08  2C 19 00 10 */	cmpwi r25, 0x10
/* 8013E00C 0013AE0C  41 80 FF AC */	blt lbl_8013DFB8
/* 8013E010 0013AE10  3C 80 80 27 */	lis r4, bossSandyStrings@ha
/* 8013E014 0013AE14  38 7F 0B CC */	addi r3, r31, 0xbcc
/* 8013E018 0013AE18  38 A4 D1 9C */	addi r5, r4, bossSandyStrings@l
/* 8013E01C 0013AE1C  38 85 01 48 */	addi r4, r5, 0x148
/* 8013E020 0013AE20  38 A5 01 52 */	addi r5, r5, 0x152
/* 8013E024 0013AE24  4B EE C3 55 */	bl init__9xFXRibbonFPCcPCc
/* 8013E028 0013AE28  4B EF 2C 41 */	bl xrand__Fv
/* 8013E02C 0013AE2C  54 60 C7 FF */	rlwinm. r0, r3, 0x18, 0x1f, 0x1f
/* 8013E030 0013AE30  41 82 00 0C */	beq lbl_8013E03C
/* 8013E034 0013AE34  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 8013E038 0013AE38  48 00 00 08 */	b lbl_8013E040
lbl_8013E03C:
/* 8013E03C 0013AE3C  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
lbl_8013E040:
/* 8013E040 0013AE40  28 00 00 00 */	cmplwi r0, 0
/* 8013E044 0013AE44  D0 1F 0D 28 */	stfs f0, 0xd28(r31)
/* 8013E048 0013AE48  41 82 00 0C */	beq lbl_8013E054
/* 8013E04C 0013AE4C  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 8013E050 0013AE50  48 00 00 08 */	b lbl_8013E058
lbl_8013E054:
/* 8013E054 0013AE54  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
lbl_8013E058:
/* 8013E058 0013AE58  28 00 00 00 */	cmplwi r0, 0
/* 8013E05C 0013AE5C  D0 1F 0D 2C */	stfs f0, 0xd2c(r31)
/* 8013E060 0013AE60  41 82 00 0C */	beq lbl_8013E06C
/* 8013E064 0013AE64  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 8013E068 0013AE68  48 00 00 08 */	b lbl_8013E070
lbl_8013E06C:
/* 8013E06C 0013AE6C  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
lbl_8013E070:
/* 8013E070 0013AE70  D0 1F 0D 30 */	stfs f0, 0xd30(r31)
/* 8013E074 0013AE74  38 C0 00 FF */	li r6, 0xff
/* 8013E078 0013AE78  38 7F 0B CC */	addi r3, r31, 0xbcc
/* 8013E07C 0013AE7C  38 9F 0D 0C */	addi r4, r31, 0xd0c
/* 8013E080 0013AE80  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013E084 0013AE84  38 A0 00 06 */	li r5, 6
/* 8013E088 0013AE88  D0 1F 0D 0C */	stfs f0, 0xd0c(r31)
/* 8013E08C 0013AE8C  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 8013E090 0013AE90  D0 1F 0D 14 */	stfs f0, 0xd14(r31)
/* 8013E094 0013AE94  C0 22 A4 E4 */	lfs f1, _1031-_SDA2_BASE_(r2)
/* 8013E098 0013AE98  C0 1F 0D 28 */	lfs f0, 0xd28(r31)
/* 8013E09C 0013AE9C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8013E0A0 0013AEA0  FC 00 00 1E */	fctiwz f0, f0
/* 8013E0A4 0013AEA4  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 8013E0A8 0013AEA8  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8013E0AC 0013AEAC  98 1F 0D 10 */	stb r0, 0xd10(r31)
/* 8013E0B0 0013AEB0  C0 22 A4 E4 */	lfs f1, _1031-_SDA2_BASE_(r2)
/* 8013E0B4 0013AEB4  C0 1F 0D 2C */	lfs f0, 0xd2c(r31)
/* 8013E0B8 0013AEB8  EC 01 00 32 */	fmuls f0, f1, f0
/* 8013E0BC 0013AEBC  FC 00 00 1E */	fctiwz f0, f0
/* 8013E0C0 0013AEC0  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 8013E0C4 0013AEC4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8013E0C8 0013AEC8  98 1F 0D 11 */	stb r0, 0xd11(r31)
/* 8013E0CC 0013AECC  C0 22 A4 E4 */	lfs f1, _1031-_SDA2_BASE_(r2)
/* 8013E0D0 0013AED0  C0 1F 0D 30 */	lfs f0, 0xd30(r31)
/* 8013E0D4 0013AED4  EC 01 00 32 */	fmuls f0, f1, f0
/* 8013E0D8 0013AED8  FC 00 00 1E */	fctiwz f0, f0
/* 8013E0DC 0013AEDC  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 8013E0E0 0013AEE0  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8013E0E4 0013AEE4  98 1F 0D 12 */	stb r0, 0xd12(r31)
/* 8013E0E8 0013AEE8  98 DF 0D 13 */	stb r6, 0xd13(r31)
/* 8013E0EC 0013AEEC  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 8013E0F0 0013AEF0  D0 1F 0D 18 */	stfs f0, 0xd18(r31)
/* 8013E0F4 0013AEF4  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 8013E0F8 0013AEF8  D0 1F 0D 20 */	stfs f0, 0xd20(r31)
/* 8013E0FC 0013AEFC  C0 22 A4 E4 */	lfs f1, _1031-_SDA2_BASE_(r2)
/* 8013E100 0013AF00  C0 1F 0D 28 */	lfs f0, 0xd28(r31)
/* 8013E104 0013AF04  EC 01 00 32 */	fmuls f0, f1, f0
/* 8013E108 0013AF08  FC 00 00 1E */	fctiwz f0, f0
/* 8013E10C 0013AF0C  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 8013E110 0013AF10  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8013E114 0013AF14  98 1F 0D 1C */	stb r0, 0xd1c(r31)
/* 8013E118 0013AF18  C0 22 A4 E4 */	lfs f1, _1031-_SDA2_BASE_(r2)
/* 8013E11C 0013AF1C  C0 1F 0D 2C */	lfs f0, 0xd2c(r31)
/* 8013E120 0013AF20  EC 01 00 32 */	fmuls f0, f1, f0
/* 8013E124 0013AF24  FC 00 00 1E */	fctiwz f0, f0
/* 8013E128 0013AF28  D8 01 00 48 */	stfd f0, 0x48(r1)
/* 8013E12C 0013AF2C  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 8013E130 0013AF30  98 1F 0D 1D */	stb r0, 0xd1d(r31)
/* 8013E134 0013AF34  C0 22 A4 E4 */	lfs f1, _1031-_SDA2_BASE_(r2)
/* 8013E138 0013AF38  C0 1F 0D 30 */	lfs f0, 0xd30(r31)
/* 8013E13C 0013AF3C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8013E140 0013AF40  FC 00 00 1E */	fctiwz f0, f0
/* 8013E144 0013AF44  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 8013E148 0013AF48  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8013E14C 0013AF4C  98 1F 0D 1E */	stb r0, 0xd1e(r31)
/* 8013E150 0013AF50  98 DF 0D 1F */	stb r6, 0xd1f(r31)
/* 8013E154 0013AF54  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 8013E158 0013AF58  D0 1F 0D 24 */	stfs f0, 0xd24(r31)
/* 8013E15C 0013AF5C  4B EE C3 49 */	bl set_curve__9xFXRibbonFPCQ29xFXRibbon10curve_nodeUl
/* 8013E160 0013AF60  C0 02 A4 E8 */	lfs f0, _1032-_SDA2_BASE_(r2)
/* 8013E164 0013AF64  38 80 00 05 */	li r4, 5
/* 8013E168 0013AF68  38 00 00 02 */	li r0, 2
/* 8013E16C 0013AF6C  38 7F 0B CC */	addi r3, r31, 0xbcc
/* 8013E170 0013AF70  D0 1F 0B CC */	stfs f0, 0xbcc(r31)
/* 8013E174 0013AF74  90 9F 0B D0 */	stw r4, 0xbd0(r31)
/* 8013E178 0013AF78  90 1F 0B D4 */	stw r0, 0xbd4(r31)
/* 8013E17C 0013AF7C  4B EE C2 C9 */	bl refresh_config__9xFXRibbonFv
/* 8013E180 0013AF80  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013E184 0013AF84  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 8013E188 0013AF88  38 63 01 6C */	addi r3, r3, 0x16c
/* 8013E18C 0013AF8C  4B F0 E0 89 */	bl xStrHash__FPCc
/* 8013E190 0013AF90  7C 64 1B 78 */	mr r4, r3
/* 8013E194 0013AF94  38 7F 0B CC */	addi r3, r31, 0xbcc
/* 8013E198 0013AF98  4B EE C8 25 */	bl set_texture__9xFXRibbonFUi
/* 8013E19C 0013AF9C  3C 60 80 33 */	lis r3, sNFSoundValue@ha
/* 8013E1A0 0013AFA0  3A FD 01 24 */	addi r23, r29, 0x124
/* 8013E1A4 0013AFA4  3B 03 80 9C */	addi r24, r3, sNFSoundValue@l
/* 8013E1A8 0013AFA8  3B 20 00 00 */	li r25, 0
lbl_8013E1AC:
/* 8013E1AC 0013AFAC  80 77 00 00 */	lwz r3, 0(r23)
/* 8013E1B0 0013AFB0  4B F0 E0 65 */	bl xStrHash__FPCc
/* 8013E1B4 0013AFB4  3B 39 00 01 */	addi r25, r25, 1
/* 8013E1B8 0013AFB8  90 78 00 00 */	stw r3, 0(r24)
/* 8013E1BC 0013AFBC  2C 19 00 1E */	cmpwi r25, 0x1e
/* 8013E1C0 0013AFC0  3A F7 00 04 */	addi r23, r23, 4
/* 8013E1C4 0013AFC4  3B 18 00 04 */	addi r24, r24, 4
/* 8013E1C8 0013AFC8  41 80 FF E4 */	blt lbl_8013E1AC
/* 8013E1CC 0013AFCC  3C 60 80 33 */	lis r3, sNFSoundValue@ha
/* 8013E1D0 0013AFD0  3C 80 80 27 */	lis r4, bossSandyStrings@ha
/* 8013E1D4 0013AFD4  38 A3 80 9C */	addi r5, r3, sNFSoundValue@l
/* 8013E1D8 0013AFD8  39 00 00 FF */	li r8, 0xff
/* 8013E1DC 0013AFDC  80 05 00 00 */	lwz r0, 0(r5)
/* 8013E1E0 0013AFE0  3C 60 80 27 */	lis r3, newsfish_cb@ha
/* 8013E1E4 0013AFE4  38 84 D1 9C */	addi r4, r4, bossSandyStrings@l
/* 8013E1E8 0013AFE8  38 C0 00 00 */	li r6, 0
/* 8013E1EC 0013AFEC  90 0D 96 AC */	stw r0, sCurrNFSound-_SDA_BASE_(r13)
/* 8013E1F0 0013AFF0  38 A3 D0 E8 */	addi r5, r3, newsfish_cb@l
/* 8013E1F4 0013AFF4  38 64 01 76 */	addi r3, r4, 0x176
/* 8013E1F8 0013AFF8  38 00 00 00 */	li r0, 0
/* 8013E1FC 0013AFFC  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 8013E200 0013B000  38 84 01 8E */	addi r4, r4, 0x18e
/* 8013E204 0013B004  38 E0 00 00 */	li r7, 0
/* 8013E208 0013B008  D0 1F 05 60 */	stfs f0, 0x560(r31)
/* 8013E20C 0013B00C  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013E210 0013B010  D0 1F 05 64 */	stfs f0, 0x564(r31)
/* 8013E214 0013B014  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 8013E218 0013B018  D0 1F 05 68 */	stfs f0, 0x568(r31)
/* 8013E21C 0013B01C  C0 02 A4 EC */	lfs f0, _1033-_SDA2_BASE_(r2)
/* 8013E220 0013B020  D0 1F 05 84 */	stfs f0, 0x584(r31)
/* 8013E224 0013B024  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013E228 0013B028  D0 1F 05 88 */	stfs f0, 0x588(r31)
/* 8013E22C 0013B02C  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 8013E230 0013B030  D0 1F 05 8C */	stfs f0, 0x58c(r31)
/* 8013E234 0013B034  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 8013E238 0013B038  D0 1F 05 A8 */	stfs f0, 0x5a8(r31)
/* 8013E23C 0013B03C  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013E240 0013B040  D0 1F 05 AC */	stfs f0, 0x5ac(r31)
/* 8013E244 0013B044  C0 02 A4 EC */	lfs f0, _1033-_SDA2_BASE_(r2)
/* 8013E248 0013B048  D0 1F 05 B0 */	stfs f0, 0x5b0(r31)
/* 8013E24C 0013B04C  C0 02 A4 EC */	lfs f0, _1033-_SDA2_BASE_(r2)
/* 8013E250 0013B050  D0 1F 05 CC */	stfs f0, 0x5cc(r31)
/* 8013E254 0013B054  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013E258 0013B058  D0 1F 05 D0 */	stfs f0, 0x5d0(r31)
/* 8013E25C 0013B05C  C0 02 A4 EC */	lfs f0, _1033-_SDA2_BASE_(r2)
/* 8013E260 0013B060  D0 1F 05 D4 */	stfs f0, 0x5d4(r31)
/* 8013E264 0013B064  99 1F 05 78 */	stb r8, 0x578(r31)
/* 8013E268 0013B068  99 1F 05 79 */	stb r8, 0x579(r31)
/* 8013E26C 0013B06C  99 1F 05 7A */	stb r8, 0x57a(r31)
/* 8013E270 0013B070  99 1F 05 7B */	stb r8, 0x57b(r31)
/* 8013E274 0013B074  99 1F 05 9C */	stb r8, 0x59c(r31)
/* 8013E278 0013B078  99 1F 05 9D */	stb r8, 0x59d(r31)
/* 8013E27C 0013B07C  99 1F 05 9E */	stb r8, 0x59e(r31)
/* 8013E280 0013B080  99 1F 05 9F */	stb r8, 0x59f(r31)
/* 8013E284 0013B084  99 1F 05 C0 */	stb r8, 0x5c0(r31)
/* 8013E288 0013B088  99 1F 05 C1 */	stb r8, 0x5c1(r31)
/* 8013E28C 0013B08C  99 1F 05 C2 */	stb r8, 0x5c2(r31)
/* 8013E290 0013B090  99 1F 05 C3 */	stb r8, 0x5c3(r31)
/* 8013E294 0013B094  99 1F 05 E4 */	stb r8, 0x5e4(r31)
/* 8013E298 0013B098  99 1F 05 E5 */	stb r8, 0x5e5(r31)
/* 8013E29C 0013B09C  99 1F 05 E6 */	stb r8, 0x5e6(r31)
/* 8013E2A0 0013B0A0  99 1F 05 E7 */	stb r8, 0x5e7(r31)
/* 8013E2A4 0013B0A4  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013E2A8 0013B0A8  D0 1F 05 7C */	stfs f0, 0x57c(r31)
/* 8013E2AC 0013B0AC  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 8013E2B0 0013B0B0  D0 1F 05 A0 */	stfs f0, 0x5a0(r31)
/* 8013E2B4 0013B0B4  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013E2B8 0013B0B8  D0 1F 05 C4 */	stfs f0, 0x5c4(r31)
/* 8013E2BC 0013B0BC  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 8013E2C0 0013B0C0  D0 1F 05 E8 */	stfs f0, 0x5e8(r31)
/* 8013E2C4 0013B0C4  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013E2C8 0013B0C8  D0 1F 05 80 */	stfs f0, 0x580(r31)
/* 8013E2CC 0013B0CC  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013E2D0 0013B0D0  D0 1F 05 A4 */	stfs f0, 0x5a4(r31)
/* 8013E2D4 0013B0D4  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 8013E2D8 0013B0D8  D0 1F 05 C8 */	stfs f0, 0x5c8(r31)
/* 8013E2DC 0013B0DC  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 8013E2E0 0013B0E0  D0 1F 05 EC */	stfs f0, 0x5ec(r31)
/* 8013E2E4 0013B0E4  90 1F 09 78 */	stw r0, 0x978(r31)
/* 8013E2E8 0013B0E8  90 1F 09 7C */	stw r0, 0x97c(r31)
/* 8013E2EC 0013B0EC  4B F5 8F C5 */	bl xDebugAddTweak__FPCcPCcPC14tweak_callbackPvUi
/* 8013E2F0 0013B0F0  3C 80 80 27 */	lis r4, bossSandyStrings@ha
/* 8013E2F4 0013B0F4  3C 60 80 33 */	lis r3, sNFSoundValue@ha
/* 8013E2F8 0013B0F8  38 E4 D1 9C */	addi r7, r4, bossSandyStrings@l
/* 8013E2FC 0013B0FC  38 BD 01 24 */	addi r5, r29, 0x124
/* 8013E300 0013B100  38 C3 80 9C */	addi r6, r3, sNFSoundValue@l
/* 8013E304 0013B104  38 8D 96 AC */	addi r4, r13, sCurrNFSound-_SDA_BASE_
/* 8013E308 0013B108  38 67 01 94 */	addi r3, r7, 0x194
/* 8013E30C 0013B10C  38 E0 00 1E */	li r7, 0x1e
/* 8013E310 0013B110  39 00 00 00 */	li r8, 0
/* 8013E314 0013B114  39 20 00 00 */	li r9, 0
/* 8013E318 0013B118  39 40 00 00 */	li r10, 0
/* 8013E31C 0013B11C  4B F6 39 F5 */	bl xDebugAddSelectTweak__FPCcPUiPPCcPCUiUiPC14tweak_callbackPvUi
/* 8013E320 0013B120  3C 80 80 27 */	lis r4, bossSandyStrings@ha
/* 8013E324 0013B124  3C 60 80 27 */	lis r3, shockwave_cb@ha
/* 8013E328 0013B128  38 84 D1 9C */	addi r4, r4, bossSandyStrings@l
/* 8013E32C 0013B12C  38 C0 00 00 */	li r6, 0
/* 8013E330 0013B130  38 A3 D1 10 */	addi r5, r3, shockwave_cb@l
/* 8013E334 0013B134  38 E0 00 00 */	li r7, 0
/* 8013E338 0013B138  38 64 01 B3 */	addi r3, r4, 0x1b3
/* 8013E33C 0013B13C  38 84 01 D2 */	addi r4, r4, 0x1d2
/* 8013E340 0013B140  4B F5 8F 71 */	bl xDebugAddTweak__FPCcPCcPC14tweak_callbackPvUi
/* 8013E344 0013B144  C0 02 A4 F0 */	lfs f0, _1034-_SDA2_BASE_(r2)
/* 8013E348 0013B148  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013E34C 0013B14C  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 8013E350 0013B150  38 9F 0D 40 */	addi r4, r31, 0xd40
/* 8013E354 0013B154  D0 1F 0D 40 */	stfs f0, 0xd40(r31)
/* 8013E358 0013B158  38 63 01 D5 */	addi r3, r3, 0x1d5
/* 8013E35C 0013B15C  38 A0 00 00 */	li r5, 0
/* 8013E360 0013B160  38 C0 00 00 */	li r6, 0
/* 8013E364 0013B164  C0 02 A4 F4 */	lfs f0, _1035-_SDA2_BASE_(r2)
/* 8013E368 0013B168  38 E0 00 00 */	li r7, 0
/* 8013E36C 0013B16C  D0 1F 0D 44 */	stfs f0, 0xd44(r31)
/* 8013E370 0013B170  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 8013E374 0013B174  C0 42 A4 F8 */	lfs f2, _1036-_SDA2_BASE_(r2)
/* 8013E378 0013B178  4B EF 22 B5 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8013E37C 0013B17C  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013E380 0013B180  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 8013E384 0013B184  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 8013E388 0013B188  C0 42 A4 F8 */	lfs f2, _1036-_SDA2_BASE_(r2)
/* 8013E38C 0013B18C  38 63 01 F9 */	addi r3, r3, 0x1f9
/* 8013E390 0013B190  38 9F 0D 44 */	addi r4, r31, 0xd44
/* 8013E394 0013B194  38 A0 00 00 */	li r5, 0
/* 8013E398 0013B198  38 C0 00 00 */	li r6, 0
/* 8013E39C 0013B19C  38 E0 00 00 */	li r7, 0
/* 8013E3A0 0013B1A0  4B EF 22 8D */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8013E3A4 0013B1A4  C0 02 A4 FC */	lfs f0, _1037-_SDA2_BASE_(r2)
/* 8013E3A8 0013B1A8  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013E3AC 0013B1AC  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 8013E3B0 0013B1B0  38 9F 0D 4C */	addi r4, r31, 0xd4c
/* 8013E3B4 0013B1B4  D0 1F 0D 4C */	stfs f0, 0xd4c(r31)
/* 8013E3B8 0013B1B8  38 63 02 1C */	addi r3, r3, 0x21c
/* 8013E3BC 0013B1BC  38 A0 00 00 */	li r5, 0
/* 8013E3C0 0013B1C0  38 C0 00 00 */	li r6, 0
/* 8013E3C4 0013B1C4  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 8013E3C8 0013B1C8  38 E0 00 00 */	li r7, 0
/* 8013E3CC 0013B1CC  D0 1F 0D 48 */	stfs f0, 0xd48(r31)
/* 8013E3D0 0013B1D0  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 8013E3D4 0013B1D4  C0 42 A4 F8 */	lfs f2, _1036-_SDA2_BASE_(r2)
/* 8013E3D8 0013B1D8  4B EF 22 55 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8013E3DC 0013B1DC  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013E3E0 0013B1E0  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 8013E3E4 0013B1E4  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 8013E3E8 0013B1E8  C0 42 A4 F8 */	lfs f2, _1036-_SDA2_BASE_(r2)
/* 8013E3EC 0013B1EC  38 63 02 43 */	addi r3, r3, 0x243
/* 8013E3F0 0013B1F0  38 9F 0D 48 */	addi r4, r31, 0xd48
/* 8013E3F4 0013B1F4  38 A0 00 00 */	li r5, 0
/* 8013E3F8 0013B1F8  38 C0 00 00 */	li r6, 0
/* 8013E3FC 0013B1FC  38 E0 00 00 */	li r7, 0
/* 8013E400 0013B200  4B EF 22 2D */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8013E404 0013B204  BA E1 00 5C */	lmw r23, 0x5c(r1)
/* 8013E408 0013B208  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8013E40C 0013B20C  7C 08 03 A6 */	mtlr r0
/* 8013E410 0013B210  38 21 00 80 */	addi r1, r1, 0x80
/* 8013E414 0013B214  4E 80 00 20 */	blr 

Setup__10zNPCBSandyFv:
/* 8013E418 0013B218  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8013E41C 0013B21C  7C 08 02 A6 */	mflr r0
/* 8013E420 0013B220  3C 80 80 27 */	lis r4, bossSandyStrings@ha
/* 8013E424 0013B224  90 01 00 44 */	stw r0, 0x44(r1)
/* 8013E428 0013B228  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8013E42C 0013B22C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8013E430 0013B230  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8013E434 0013B234  7C 7D 1B 78 */	mr r29, r3
/* 8013E438 0013B238  38 64 D1 9C */	addi r3, r4, bossSandyStrings@l
/* 8013E43C 0013B23C  38 63 02 65 */	addi r3, r3, 0x265
/* 8013E440 0013B240  4B F0 DD D5 */	bl xStrHash__FPCc
/* 8013E444 0013B244  4B F7 65 F9 */	bl zSceneFindObject__FUi
/* 8013E448 0013B248  90 7D 0D 34 */	stw r3, 0xd34(r29)
/* 8013E44C 0013B24C  38 80 00 01 */	li r4, 1
/* 8013E450 0013B250  80 7D 0D 34 */	lwz r3, 0xd34(r29)
/* 8013E454 0013B254  4B FC 79 E1 */	bl TalkOnScreen__12zNPCNewsFishFi
/* 8013E458 0013B258  3C 80 80 27 */	lis r4, bossSandyStrings@ha
/* 8013E45C 0013B25C  38 61 00 08 */	addi r3, r1, 8
/* 8013E460 0013B260  38 84 D1 9C */	addi r4, r4, bossSandyStrings@l
/* 8013E464 0013B264  38 84 02 74 */	addi r4, r4, 0x274
/* 8013E468 0013B268  48 0A 92 99 */	bl strcpy
/* 8013E46C 0013B26C  3B C0 00 00 */	li r30, 0
/* 8013E470 0013B270  7F BF EB 78 */	mr r31, r29
lbl_8013E474:
/* 8013E474 0013B274  57 C4 06 3E */	clrlwi r4, r30, 0x18
/* 8013E478 0013B278  38 61 00 08 */	addi r3, r1, 8
/* 8013E47C 0013B27C  38 04 00 31 */	addi r0, r4, 0x31
/* 8013E480 0013B280  98 01 00 10 */	stb r0, 0x10(r1)
/* 8013E484 0013B284  4B F0 DD 91 */	bl xStrHash__FPCc
/* 8013E488 0013B288  4B F7 65 B5 */	bl zSceneFindObject__FUi
/* 8013E48C 0013B28C  3B DE 00 01 */	addi r30, r30, 1
/* 8013E490 0013B290  90 7F 0D 58 */	stw r3, 0xd58(r31)
/* 8013E494 0013B294  2C 1E 00 03 */	cmpwi r30, 3
/* 8013E498 0013B298  3B FF 00 04 */	addi r31, r31, 4
/* 8013E49C 0013B29C  41 80 FF D8 */	blt lbl_8013E474
/* 8013E4A0 0013B2A0  C0 02 A5 08 */	lfs f0, _1061-_SDA2_BASE_(r2)
/* 8013E4A4 0013B2A4  38 7D 0D 64 */	addi r3, r29, 0xd64
/* 8013E4A8 0013B2A8  D0 1D 0D 64 */	stfs f0, 0xd64(r29)
/* 8013E4AC 0013B2AC  C0 02 A5 0C */	lfs f0, _1062-_SDA2_BASE_(r2)
/* 8013E4B0 0013B2B0  D0 1D 0D 68 */	stfs f0, 0xd68(r29)
/* 8013E4B4 0013B2B4  C0 02 A5 10 */	lfs f0, _1063-_SDA2_BASE_(r2)
/* 8013E4B8 0013B2B8  D0 1D 0D 6C */	stfs f0, 0xd6c(r29)
/* 8013E4BC 0013B2BC  C0 02 A5 14 */	lfs f0, _1064-_SDA2_BASE_(r2)
/* 8013E4C0 0013B2C0  D0 1D 0D 70 */	stfs f0, 0xd70(r29)
/* 8013E4C4 0013B2C4  C0 02 A5 18 */	lfs f0, _1065-_SDA2_BASE_(r2)
/* 8013E4C8 0013B2C8  D0 1D 0D 74 */	stfs f0, 0xd74(r29)
/* 8013E4CC 0013B2CC  C0 02 A5 1C */	lfs f0, _1066-_SDA2_BASE_(r2)
/* 8013E4D0 0013B2D0  D0 1D 0D 78 */	stfs f0, 0xd78(r29)
/* 8013E4D4 0013B2D4  C0 02 A5 20 */	lfs f0, _1067-_SDA2_BASE_(r2)
/* 8013E4D8 0013B2D8  D0 1D 0D 7C */	stfs f0, 0xd7c(r29)
/* 8013E4DC 0013B2DC  C0 02 A5 24 */	lfs f0, _1068-_SDA2_BASE_(r2)
/* 8013E4E0 0013B2E0  D0 1D 0D 80 */	stfs f0, 0xd80(r29)
/* 8013E4E4 0013B2E4  C0 02 A5 10 */	lfs f0, _1063-_SDA2_BASE_(r2)
/* 8013E4E8 0013B2E8  D0 1D 0D 84 */	stfs f0, 0xd84(r29)
/* 8013E4EC 0013B2EC  C0 02 A4 F4 */	lfs f0, _1035-_SDA2_BASE_(r2)
/* 8013E4F0 0013B2F0  D0 1D 0D 88 */	stfs f0, 0xd88(r29)
/* 8013E4F4 0013B2F4  C0 02 A4 F4 */	lfs f0, _1035-_SDA2_BASE_(r2)
/* 8013E4F8 0013B2F8  D0 1D 0D 8C */	stfs f0, 0xd8c(r29)
/* 8013E4FC 0013B2FC  C0 02 A4 F4 */	lfs f0, _1035-_SDA2_BASE_(r2)
/* 8013E500 0013B300  D0 1D 0D 90 */	stfs f0, 0xd90(r29)
/* 8013E504 0013B304  C0 02 A4 F4 */	lfs f0, _1035-_SDA2_BASE_(r2)
/* 8013E508 0013B308  D0 1D 0D 94 */	stfs f0, 0xd94(r29)
/* 8013E50C 0013B30C  C0 02 A4 F4 */	lfs f0, _1035-_SDA2_BASE_(r2)
/* 8013E510 0013B310  D0 1D 0D 98 */	stfs f0, 0xd98(r29)
/* 8013E514 0013B314  C0 02 A5 28 */	lfs f0, _1069-_SDA2_BASE_(r2)
/* 8013E518 0013B318  D0 1D 0D 9C */	stfs f0, 0xd9c(r29)
/* 8013E51C 0013B31C  4B EC F9 85 */	bl init__13xBinaryCameraFv
/* 8013E520 0013B320  3C 80 80 27 */	lis r4, bossSandyStrings@ha
/* 8013E524 0013B324  38 7D 0D 64 */	addi r3, r29, 0xd64
/* 8013E528 0013B328  38 84 D1 9C */	addi r4, r4, bossSandyStrings@l
/* 8013E52C 0013B32C  38 84 02 7E */	addi r4, r4, 0x27e
/* 8013E530 0013B330  48 00 80 4D */	bl add_tweaks__13xBinaryCameraFPCc
/* 8013E534 0013B334  C0 02 A5 2C */	lfs f0, _1070-_SDA2_BASE_(r2)
/* 8013E538 0013B338  38 7D 0D C8 */	addi r3, r29, 0xdc8
/* 8013E53C 0013B33C  D0 1D 0D C8 */	stfs f0, 0xdc8(r29)
/* 8013E540 0013B340  C0 02 A5 1C */	lfs f0, _1066-_SDA2_BASE_(r2)
/* 8013E544 0013B344  D0 1D 0D CC */	stfs f0, 0xdcc(r29)
/* 8013E548 0013B348  C0 02 A5 1C */	lfs f0, _1066-_SDA2_BASE_(r2)
/* 8013E54C 0013B34C  D0 1D 0D D0 */	stfs f0, 0xdd0(r29)
/* 8013E550 0013B350  C0 02 A4 F4 */	lfs f0, _1035-_SDA2_BASE_(r2)
/* 8013E554 0013B354  D0 1D 0D D4 */	stfs f0, 0xdd4(r29)
/* 8013E558 0013B358  C0 02 A5 30 */	lfs f0, _1071-_SDA2_BASE_(r2)
/* 8013E55C 0013B35C  D0 1D 0D D8 */	stfs f0, 0xdd8(r29)
/* 8013E560 0013B360  C0 02 A5 24 */	lfs f0, _1068-_SDA2_BASE_(r2)
/* 8013E564 0013B364  D0 1D 0D DC */	stfs f0, 0xddc(r29)
/* 8013E568 0013B368  C0 02 A4 F4 */	lfs f0, _1035-_SDA2_BASE_(r2)
/* 8013E56C 0013B36C  D0 1D 0D E0 */	stfs f0, 0xde0(r29)
/* 8013E570 0013B370  C0 02 A4 E8 */	lfs f0, _1032-_SDA2_BASE_(r2)
/* 8013E574 0013B374  D0 1D 0D E4 */	stfs f0, 0xde4(r29)
/* 8013E578 0013B378  C0 02 A5 34 */	lfs f0, _1072-_SDA2_BASE_(r2)
/* 8013E57C 0013B37C  D0 1D 0D E8 */	stfs f0, 0xde8(r29)
/* 8013E580 0013B380  C0 02 A4 F4 */	lfs f0, _1035-_SDA2_BASE_(r2)
/* 8013E584 0013B384  D0 1D 0D EC */	stfs f0, 0xdec(r29)
/* 8013E588 0013B388  C0 02 A4 F4 */	lfs f0, _1035-_SDA2_BASE_(r2)
/* 8013E58C 0013B38C  D0 1D 0D F0 */	stfs f0, 0xdf0(r29)
/* 8013E590 0013B390  C0 02 A4 F4 */	lfs f0, _1035-_SDA2_BASE_(r2)
/* 8013E594 0013B394  D0 1D 0D F4 */	stfs f0, 0xdf4(r29)
/* 8013E598 0013B398  C0 02 A4 F4 */	lfs f0, _1035-_SDA2_BASE_(r2)
/* 8013E59C 0013B39C  D0 1D 0D F8 */	stfs f0, 0xdf8(r29)
/* 8013E5A0 0013B3A0  C0 02 A4 F4 */	lfs f0, _1035-_SDA2_BASE_(r2)
/* 8013E5A4 0013B3A4  D0 1D 0D FC */	stfs f0, 0xdfc(r29)
/* 8013E5A8 0013B3A8  C0 02 A5 28 */	lfs f0, _1069-_SDA2_BASE_(r2)
/* 8013E5AC 0013B3AC  D0 1D 0E 00 */	stfs f0, 0xe00(r29)
/* 8013E5B0 0013B3B0  4B EC F8 F1 */	bl init__13xBinaryCameraFv
/* 8013E5B4 0013B3B4  3C 80 80 27 */	lis r4, bossSandyStrings@ha
/* 8013E5B8 0013B3B8  38 7D 0D C8 */	addi r3, r29, 0xdc8
/* 8013E5BC 0013B3BC  38 84 D1 9C */	addi r4, r4, bossSandyStrings@l
/* 8013E5C0 0013B3C0  38 84 02 97 */	addi r4, r4, 0x297
/* 8013E5C4 0013B3C4  48 00 7F B9 */	bl add_tweaks__13xBinaryCameraFPCc
/* 8013E5C8 0013B3C8  7F A3 EB 78 */	mr r3, r29
/* 8013E5CC 0013B3CC  4B FB 0E 95 */	bl Setup__10zNPCCommonFv
/* 8013E5D0 0013B3D0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8013E5D4 0013B3D4  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8013E5D8 0013B3D8  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8013E5DC 0013B3DC  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8013E5E0 0013B3E0  7C 08 03 A6 */	mtlr r0
/* 8013E5E4 0013B3E4  38 21 00 40 */	addi r1, r1, 0x40
/* 8013E5E8 0013B3E8  4E 80 00 20 */	blr 

SelfSetup__10zNPCBSandyFv:
/* 8013E5EC 0013B3EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013E5F0 0013B3F0  7C 08 02 A6 */	mflr r0
/* 8013E5F4 0013B3F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013E5F8 0013B3F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013E5FC 0013B3FC  7C 7F 1B 78 */	mr r31, r3
/* 8013E600 0013B400  4B FC E8 D5 */	bl xBehaveMgr_GetSelf__Fv
/* 8013E604 0013B404  7F E4 FB 78 */	mr r4, r31
/* 8013E608 0013B408  38 A0 00 00 */	li r5, 0
/* 8013E60C 0013B40C  4B FC EA 31 */	bl Subscribe__10xBehaveMgrFP5xBasei
/* 8013E610 0013B410  90 7F 02 28 */	stw r3, 0x228(r31)
/* 8013E614 0013B414  83 FF 02 28 */	lwz r31, 0x228(r31)
/* 8013E618 0013B418  7F E3 FB 78 */	mr r3, r31
/* 8013E61C 0013B41C  4B FC EB 6D */	bl BrainBegin__7xPsycheFv
/* 8013E620 0013B420  3C 80 4E 47 */	lis r4, 0x4E474231@ha
/* 8013E624 0013B424  7F E3 FB 78 */	mr r3, r31
/* 8013E628 0013B428  38 84 42 31 */	addi r4, r4, 0x4E474231@l
/* 8013E62C 0013B42C  38 A0 00 00 */	li r5, 0
/* 8013E630 0013B430  4B FC EC 11 */	bl AddGoal__7xPsycheFiPv
/* 8013E634 0013B434  3C 80 80 14 */	lis r4, idleCB__FP5xGoalPvP11en_trantypefPv@ha
/* 8013E638 0013B438  38 A0 00 00 */	li r5, 0
/* 8013E63C 0013B43C  38 84 21 50 */	addi r4, r4, idleCB__FP5xGoalPvP11en_trantypefPv@l
/* 8013E640 0013B440  38 C0 00 00 */	li r6, 0
/* 8013E644 0013B444  38 E0 00 00 */	li r7, 0
/* 8013E648 0013B448  4B FB 63 ED */	bl SetCallbacks__5xGoalFPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvfPv_iPv
/* 8013E64C 0013B44C  3C 80 4E 47 */	lis r4, 0x4E474232@ha
/* 8013E650 0013B450  7F E3 FB 78 */	mr r3, r31
/* 8013E654 0013B454  38 84 42 32 */	addi r4, r4, 0x4E474232@l
/* 8013E658 0013B458  38 A0 00 00 */	li r5, 0
/* 8013E65C 0013B45C  4B FC EB E5 */	bl AddGoal__7xPsycheFiPv
/* 8013E660 0013B460  3C 80 80 14 */	lis r4, tauntCB__FP5xGoalPvP11en_trantypefPv@ha
/* 8013E664 0013B464  38 A0 00 00 */	li r5, 0
/* 8013E668 0013B468  38 84 22 50 */	addi r4, r4, tauntCB__FP5xGoalPvP11en_trantypefPv@l
/* 8013E66C 0013B46C  38 C0 00 00 */	li r6, 0
/* 8013E670 0013B470  38 E0 00 00 */	li r7, 0
/* 8013E674 0013B474  4B FB 63 C1 */	bl SetCallbacks__5xGoalFPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvfPv_iPv
/* 8013E678 0013B478  3C 80 4E 47 */	lis r4, 0x4E474233@ha
/* 8013E67C 0013B47C  7F E3 FB 78 */	mr r3, r31
/* 8013E680 0013B480  38 84 42 33 */	addi r4, r4, 0x4E474233@l
/* 8013E684 0013B484  38 A0 00 00 */	li r5, 0
/* 8013E688 0013B488  4B FC EB B9 */	bl AddGoal__7xPsycheFiPv
/* 8013E68C 0013B48C  3C 80 80 14 */	lis r4, chaseCB__FP5xGoalPvP11en_trantypefPv@ha
/* 8013E690 0013B490  38 A0 00 00 */	li r5, 0
/* 8013E694 0013B494  38 84 23 9C */	addi r4, r4, chaseCB__FP5xGoalPvP11en_trantypefPv@l
/* 8013E698 0013B498  38 C0 00 00 */	li r6, 0
/* 8013E69C 0013B49C  38 E0 00 00 */	li r7, 0
/* 8013E6A0 0013B4A0  4B FB 63 95 */	bl SetCallbacks__5xGoalFPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvfPv_iPv
/* 8013E6A4 0013B4A4  3C 80 4E 47 */	lis r4, 0x4E474234@ha
/* 8013E6A8 0013B4A8  7F E3 FB 78 */	mr r3, r31
/* 8013E6AC 0013B4AC  38 84 42 34 */	addi r4, r4, 0x4E474234@l
/* 8013E6B0 0013B4B0  38 A0 00 00 */	li r5, 0
/* 8013E6B4 0013B4B4  4B FC EB 8D */	bl AddGoal__7xPsycheFiPv
/* 8013E6B8 0013B4B8  3C 80 80 14 */	lis r4, meleeCB__FP5xGoalPvP11en_trantypefPv@ha
/* 8013E6BC 0013B4BC  38 A0 00 00 */	li r5, 0
/* 8013E6C0 0013B4C0  38 84 26 60 */	addi r4, r4, meleeCB__FP5xGoalPvP11en_trantypefPv@l
/* 8013E6C4 0013B4C4  38 C0 00 00 */	li r6, 0
/* 8013E6C8 0013B4C8  38 E0 00 00 */	li r7, 0
/* 8013E6CC 0013B4CC  4B FB 63 69 */	bl SetCallbacks__5xGoalFPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvfPv_iPv
/* 8013E6D0 0013B4D0  3C 80 4E 47 */	lis r4, 0x4E474235@ha
/* 8013E6D4 0013B4D4  7F E3 FB 78 */	mr r3, r31
/* 8013E6D8 0013B4D8  38 84 42 35 */	addi r4, r4, 0x4E474235@l
/* 8013E6DC 0013B4DC  38 A0 00 00 */	li r5, 0
/* 8013E6E0 0013B4E0  4B FC EB 61 */	bl AddGoal__7xPsycheFiPv
/* 8013E6E4 0013B4E4  3C 80 80 14 */	lis r4, noHeadCB__FP5xGoalPvP11en_trantypefPv@ha
/* 8013E6E8 0013B4E8  38 A0 00 00 */	li r5, 0
/* 8013E6EC 0013B4EC  38 84 28 9C */	addi r4, r4, noHeadCB__FP5xGoalPvP11en_trantypefPv@l
/* 8013E6F0 0013B4F0  38 C0 00 00 */	li r6, 0
/* 8013E6F4 0013B4F4  38 E0 00 00 */	li r7, 0
/* 8013E6F8 0013B4F8  4B FB 63 3D */	bl SetCallbacks__5xGoalFPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvfPv_iPv
/* 8013E6FC 0013B4FC  3C 80 4E 47 */	lis r4, 0x4E474236@ha
/* 8013E700 0013B500  7F E3 FB 78 */	mr r3, r31
/* 8013E704 0013B504  38 84 42 36 */	addi r4, r4, 0x4E474236@l
/* 8013E708 0013B508  38 A0 00 00 */	li r5, 0
/* 8013E70C 0013B50C  4B FC EB 35 */	bl AddGoal__7xPsycheFiPv
/* 8013E710 0013B510  3C 80 80 14 */	lis r4, elbowDropCB__FP5xGoalPvP11en_trantypefPv@ha
/* 8013E714 0013B514  38 A0 00 00 */	li r5, 0
/* 8013E718 0013B518  38 84 29 2C */	addi r4, r4, elbowDropCB__FP5xGoalPvP11en_trantypefPv@l
/* 8013E71C 0013B51C  38 C0 00 00 */	li r6, 0
/* 8013E720 0013B520  38 E0 00 00 */	li r7, 0
/* 8013E724 0013B524  4B FB 63 11 */	bl SetCallbacks__5xGoalFPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvfPv_iPv
/* 8013E728 0013B528  3C 80 4E 47 */	lis r4, 0x4E474237@ha
/* 8013E72C 0013B52C  7F E3 FB 78 */	mr r3, r31
/* 8013E730 0013B530  38 84 42 37 */	addi r4, r4, 0x4E474237@l
/* 8013E734 0013B534  38 A0 00 00 */	li r5, 0
/* 8013E738 0013B538  4B FC EB 09 */	bl AddGoal__7xPsycheFiPv
/* 8013E73C 0013B53C  3C 80 80 14 */	lis r4, leapCB__FP5xGoalPvP11en_trantypefPv@ha
/* 8013E740 0013B540  38 A0 00 00 */	li r5, 0
/* 8013E744 0013B544  38 84 2A A0 */	addi r4, r4, leapCB__FP5xGoalPvP11en_trantypefPv@l
/* 8013E748 0013B548  38 C0 00 00 */	li r6, 0
/* 8013E74C 0013B54C  38 E0 00 00 */	li r7, 0
/* 8013E750 0013B550  4B FB 62 E5 */	bl SetCallbacks__5xGoalFPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvfPv_iPv
/* 8013E754 0013B554  3C 80 4E 47 */	lis r4, 0x4E474238@ha
/* 8013E758 0013B558  7F E3 FB 78 */	mr r3, r31
/* 8013E75C 0013B55C  38 84 42 38 */	addi r4, r4, 0x4E474238@l
/* 8013E760 0013B560  38 A0 00 00 */	li r5, 0
/* 8013E764 0013B564  4B FC EA DD */	bl AddGoal__7xPsycheFiPv
/* 8013E768 0013B568  3C 80 80 14 */	lis r4, sitCB__FP5xGoalPvP11en_trantypefPv@ha
/* 8013E76C 0013B56C  38 A0 00 00 */	li r5, 0
/* 8013E770 0013B570  38 84 2B 54 */	addi r4, r4, sitCB__FP5xGoalPvP11en_trantypefPv@l
/* 8013E774 0013B574  38 C0 00 00 */	li r6, 0
/* 8013E778 0013B578  38 E0 00 00 */	li r7, 0
/* 8013E77C 0013B57C  4B FB 62 B9 */	bl SetCallbacks__5xGoalFPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvfPv_iPv
/* 8013E780 0013B580  3C 80 4E 47 */	lis r4, 0x4E474239@ha
/* 8013E784 0013B584  7F E3 FB 78 */	mr r3, r31
/* 8013E788 0013B588  38 84 42 39 */	addi r4, r4, 0x4E474239@l
/* 8013E78C 0013B58C  38 A0 00 00 */	li r5, 0
/* 8013E790 0013B590  4B FC EA B1 */	bl AddGoal__7xPsycheFiPv
/* 8013E794 0013B594  3C 80 80 14 */	lis r4, getUpCB__FP5xGoalPvP11en_trantypefPv@ha
/* 8013E798 0013B598  38 A0 00 00 */	li r5, 0
/* 8013E79C 0013B59C  38 84 2C 64 */	addi r4, r4, getUpCB__FP5xGoalPvP11en_trantypefPv@l
/* 8013E7A0 0013B5A0  38 C0 00 00 */	li r6, 0
/* 8013E7A4 0013B5A4  38 E0 00 00 */	li r7, 0
/* 8013E7A8 0013B5A8  4B FB 62 8D */	bl SetCallbacks__5xGoalFPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvfPv_iPv
/* 8013E7AC 0013B5AC  3C 80 4E 47 */	lis r4, 0x4E47423A@ha
/* 8013E7B0 0013B5B0  7F E3 FB 78 */	mr r3, r31
/* 8013E7B4 0013B5B4  38 84 42 3A */	addi r4, r4, 0x4E47423A@l
/* 8013E7B8 0013B5B8  38 A0 00 00 */	li r5, 0
/* 8013E7BC 0013B5BC  4B FC EA 85 */	bl AddGoal__7xPsycheFiPv
/* 8013E7C0 0013B5C0  3C 80 80 14 */	lis r4, runToRopeCB__FP5xGoalPvP11en_trantypefPv@ha
/* 8013E7C4 0013B5C4  38 A0 00 00 */	li r5, 0
/* 8013E7C8 0013B5C8  38 84 2D E8 */	addi r4, r4, runToRopeCB__FP5xGoalPvP11en_trantypefPv@l
/* 8013E7CC 0013B5CC  38 C0 00 00 */	li r6, 0
/* 8013E7D0 0013B5D0  38 E0 00 00 */	li r7, 0
/* 8013E7D4 0013B5D4  4B FB 62 61 */	bl SetCallbacks__5xGoalFPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvfPv_iPv
/* 8013E7D8 0013B5D8  3C 80 4E 47 */	lis r4, 0x4E47423B@ha
/* 8013E7DC 0013B5DC  7F E3 FB 78 */	mr r3, r31
/* 8013E7E0 0013B5E0  38 84 42 3B */	addi r4, r4, 0x4E47423B@l
/* 8013E7E4 0013B5E4  38 A0 00 00 */	li r5, 0
/* 8013E7E8 0013B5E8  4B FC EA 59 */	bl AddGoal__7xPsycheFiPv
/* 8013E7EC 0013B5EC  3C 80 80 14 */	lis r4, clotheslineCB__FP5xGoalPvP11en_trantypefPv@ha
/* 8013E7F0 0013B5F0  38 A0 00 00 */	li r5, 0
/* 8013E7F4 0013B5F4  38 84 2E D8 */	addi r4, r4, clotheslineCB__FP5xGoalPvP11en_trantypefPv@l
/* 8013E7F8 0013B5F8  38 C0 00 00 */	li r6, 0
/* 8013E7FC 0013B5FC  38 E0 00 00 */	li r7, 0
/* 8013E800 0013B600  4B FB 62 35 */	bl SetCallbacks__5xGoalFPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvfPv_iPv
/* 8013E804 0013B604  7F E3 FB 78 */	mr r3, r31
/* 8013E808 0013B608  4B FC EA 01 */	bl BrainEnd__7xPsycheFv
/* 8013E80C 0013B60C  3C 80 4E 47 */	lis r4, 0x4E474231@ha
/* 8013E810 0013B610  7F E3 FB 78 */	mr r3, r31
/* 8013E814 0013B614  38 84 42 31 */	addi r4, r4, 0x4E474231@l
/* 8013E818 0013B618  4B FC 41 65 */	bl SetSafety__7xPsycheFi
/* 8013E81C 0013B61C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013E820 0013B620  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013E824 0013B624  7C 08 03 A6 */	mtlr r0
/* 8013E828 0013B628  38 21 00 10 */	addi r1, r1, 0x10
/* 8013E82C 0013B62C  4E 80 00 20 */	blr 

Reset__10zNPCBSandyFv:
/* 8013E830 0013B630  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8013E834 0013B634  7C 08 02 A6 */	mflr r0
/* 8013E838 0013B638  3C 80 80 33 */	lis r4, sSinTable@ha
/* 8013E83C 0013B63C  90 01 00 74 */	stw r0, 0x74(r1)
/* 8013E840 0013B640  BF 01 00 50 */	stmw r24, 0x50(r1)
/* 8013E844 0013B644  7C 7A 1B 78 */	mr r26, r3
/* 8013E848 0013B648  3B E4 80 00 */	addi r31, r4, sSinTable@l
/* 8013E84C 0013B64C  4B FB 10 59 */	bl Reset__10zNPCCommonFv
/* 8013E850 0013B650  38 00 00 01 */	li r0, 1
/* 8013E854 0013B654  38 C0 00 0C */	li r6, 0xc
/* 8013E858 0013B658  90 1A 0D 54 */	stw r0, 0xd54(r26)
/* 8013E85C 0013B65C  38 60 04 00 */	li r3, 0x400
/* 8013E860 0013B660  38 80 00 00 */	li r4, 0
/* 8013E864 0013B664  20 06 00 0D */	subfic r0, r6, 0xd
/* 8013E868 0013B668  90 7A 02 C0 */	stw r3, 0x2c0(r26)
/* 8013E86C 0013B66C  54 C5 10 3A */	slwi r5, r6, 2
/* 8013E870 0013B670  80 7A 02 B8 */	lwz r3, 0x2b8(r26)
/* 8013E874 0013B674  90 83 00 00 */	stw r4, 0(r3)
/* 8013E878 0013B678  80 7A 02 B8 */	lwz r3, 0x2b8(r26)
/* 8013E87C 0013B67C  90 83 00 04 */	stw r4, 4(r3)
/* 8013E880 0013B680  80 7A 02 B8 */	lwz r3, 0x2b8(r26)
/* 8013E884 0013B684  90 83 00 08 */	stw r4, 8(r3)
/* 8013E888 0013B688  80 7A 02 B8 */	lwz r3, 0x2b8(r26)
/* 8013E88C 0013B68C  90 83 00 0C */	stw r4, 0xc(r3)
/* 8013E890 0013B690  80 7A 02 B8 */	lwz r3, 0x2b8(r26)
/* 8013E894 0013B694  90 83 00 10 */	stw r4, 0x10(r3)
/* 8013E898 0013B698  80 7A 02 B8 */	lwz r3, 0x2b8(r26)
/* 8013E89C 0013B69C  90 83 00 14 */	stw r4, 0x14(r3)
/* 8013E8A0 0013B6A0  80 7A 02 B8 */	lwz r3, 0x2b8(r26)
/* 8013E8A4 0013B6A4  90 83 00 18 */	stw r4, 0x18(r3)
/* 8013E8A8 0013B6A8  80 7A 02 B8 */	lwz r3, 0x2b8(r26)
/* 8013E8AC 0013B6AC  90 83 00 1C */	stw r4, 0x1c(r3)
/* 8013E8B0 0013B6B0  80 7A 02 B8 */	lwz r3, 0x2b8(r26)
/* 8013E8B4 0013B6B4  90 83 00 20 */	stw r4, 0x20(r3)
/* 8013E8B8 0013B6B8  80 7A 02 B8 */	lwz r3, 0x2b8(r26)
/* 8013E8BC 0013B6BC  90 83 00 24 */	stw r4, 0x24(r3)
/* 8013E8C0 0013B6C0  80 7A 02 B8 */	lwz r3, 0x2b8(r26)
/* 8013E8C4 0013B6C4  90 83 00 28 */	stw r4, 0x28(r3)
/* 8013E8C8 0013B6C8  80 7A 02 B8 */	lwz r3, 0x2b8(r26)
/* 8013E8CC 0013B6CC  90 83 00 2C */	stw r4, 0x2c(r3)
/* 8013E8D0 0013B6D0  7C 09 03 A6 */	mtctr r0
/* 8013E8D4 0013B6D4  2C 06 00 0D */	cmpwi r6, 0xd
/* 8013E8D8 0013B6D8  40 80 00 14 */	bge lbl_8013E8EC
lbl_8013E8DC:
/* 8013E8DC 0013B6DC  80 7A 02 B8 */	lwz r3, 0x2b8(r26)
/* 8013E8E0 0013B6E0  7C 83 29 2E */	stwx r4, r3, r5
/* 8013E8E4 0013B6E4  38 A5 00 04 */	addi r5, r5, 4
/* 8013E8E8 0013B6E8  42 00 FF F4 */	bdnz lbl_8013E8DC
lbl_8013E8EC:
/* 8013E8EC 0013B6EC  38 00 00 01 */	li r0, 1
/* 8013E8F0 0013B6F0  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013E8F4 0013B6F4  98 0D 84 80 */	stb r0, sUseBossCam-_SDA_BASE_(r13)
/* 8013E8F8 0013B6F8  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 8013E8FC 0013B6FC  38 00 00 00 */	li r0, 0
/* 8013E900 0013B700  C0 02 A5 24 */	lfs f0, _1068-_SDA2_BASE_(r2)
/* 8013E904 0013B704  38 63 02 B5 */	addi r3, r3, 0x2b5
/* 8013E908 0013B708  D0 0D 96 A0 */	stfs f0, sCurrHeight-_SDA_BASE_(r13)
/* 8013E90C 0013B70C  C0 02 A5 20 */	lfs f0, _1067-_SDA2_BASE_(r2)
/* 8013E910 0013B710  D0 0D 96 A4 */	stfs f0, sCurrRadius-_SDA_BASE_(r13)
/* 8013E914 0013B714  C0 02 A5 38 */	lfs f0, _1188-_SDA2_BASE_(r2)
/* 8013E918 0013B718  D0 0D 96 A8 */	stfs f0, sCurrPitch-_SDA_BASE_(r13)
/* 8013E91C 0013B71C  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013E920 0013B720  D0 0D 96 9C */	stfs f0, sCurrYaw-_SDA_BASE_(r13)
/* 8013E924 0013B724  80 9A 00 24 */	lwz r4, 0x24(r26)
/* 8013E928 0013B728  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8013E92C 0013B72C  38 84 00 30 */	addi r4, r4, 0x30
/* 8013E930 0013B730  90 8D 96 98 */	stw r4, sCamSubTarget-_SDA_BASE_(r13)
/* 8013E934 0013B734  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013E938 0013B738  D0 0D 96 80 */	stfs f0, sElbowDropTimer-_SDA_BASE_(r13)
/* 8013E93C 0013B73C  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013E940 0013B740  D0 0D 96 84 */	stfs f0, sChaseTimer-_SDA_BASE_(r13)
/* 8013E944 0013B744  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013E948 0013B748  D0 0D 96 90 */	stfs f0, sElbowDropThreshold-_SDA_BASE_(r13)
/* 8013E94C 0013B74C  90 0D 96 88 */	stw r0, sNumAttacks-_SDA_BASE_(r13)
/* 8013E950 0013B750  90 0D 96 8C */	stw r0, sDidClothesline-_SDA_BASE_(r13)
/* 8013E954 0013B754  4B F6 9E F1 */	bl zParEmitterFind__FPCc
/* 8013E958 0013B758  3C 80 80 27 */	lis r4, bossSandyStrings@ha
/* 8013E95C 0013B75C  90 7A 07 B0 */	stw r3, 0x7b0(r26)
/* 8013E960 0013B760  38 64 D1 9C */	addi r3, r4, bossSandyStrings@l
/* 8013E964 0013B764  38 63 02 C8 */	addi r3, r3, 0x2c8
/* 8013E968 0013B768  4B F6 9E DD */	bl zParEmitterFind__FPCc
/* 8013E96C 0013B76C  3C 80 80 27 */	lis r4, bossSandyStrings@ha
/* 8013E970 0013B770  90 7A 07 B4 */	stw r3, 0x7b4(r26)
/* 8013E974 0013B774  38 64 D1 9C */	addi r3, r4, bossSandyStrings@l
/* 8013E978 0013B778  38 63 02 DA */	addi r3, r3, 0x2da
/* 8013E97C 0013B77C  4B F0 D8 99 */	bl xStrHash__FPCc
/* 8013E980 0013B780  4B F7 60 BD */	bl zSceneFindObject__FUi
/* 8013E984 0013B784  90 7A 07 C4 */	stw r3, 0x7c4(r26)
/* 8013E988 0013B788  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013E98C 0013B78C  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 8013E990 0013B790  38 A0 00 00 */	li r5, 0
/* 8013E994 0013B794  C0 02 A5 3C */	lfs f0, _1189-_SDA2_BASE_(r2)
/* 8013E998 0013B798  38 63 02 ED */	addi r3, r3, 0x2ed
/* 8013E99C 0013B79C  80 9A 07 C4 */	lwz r4, 0x7c4(r26)
/* 8013E9A0 0013B7A0  38 C0 00 00 */	li r6, 0
/* 8013E9A4 0013B7A4  38 E0 00 00 */	li r7, 0
/* 8013E9A8 0013B7A8  D0 04 00 94 */	stfs f0, 0x94(r4)
/* 8013E9AC 0013B7AC  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013E9B0 0013B7B0  80 9A 07 C4 */	lwz r4, 0x7c4(r26)
/* 8013E9B4 0013B7B4  D0 04 01 94 */	stfs f0, 0x194(r4)
/* 8013E9B8 0013B7B8  C0 02 A5 40 */	lfs f0, _1190-_SDA2_BASE_(r2)
/* 8013E9BC 0013B7BC  80 9A 07 C4 */	lwz r4, 0x7c4(r26)
/* 8013E9C0 0013B7C0  D0 04 01 98 */	stfs f0, 0x198(r4)
/* 8013E9C4 0013B7C4  C0 02 A5 44 */	lfs f0, _1191-_SDA2_BASE_(r2)
/* 8013E9C8 0013B7C8  80 9A 07 C4 */	lwz r4, 0x7c4(r26)
/* 8013E9CC 0013B7CC  D0 04 01 9C */	stfs f0, 0x19c(r4)
/* 8013E9D0 0013B7D0  80 9A 07 C4 */	lwz r4, 0x7c4(r26)
/* 8013E9D4 0013B7D4  C0 22 A5 48 */	lfs f1, _1192-_SDA2_BASE_(r2)
/* 8013E9D8 0013B7D8  C0 42 A4 F4 */	lfs f2, _1035-_SDA2_BASE_(r2)
/* 8013E9DC 0013B7DC  38 84 00 94 */	addi r4, r4, 0x94
/* 8013E9E0 0013B7E0  4B EF 1C 4D */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8013E9E4 0013B7E4  80 9A 07 C4 */	lwz r4, 0x7c4(r26)
/* 8013E9E8 0013B7E8  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013E9EC 0013B7EC  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 8013E9F0 0013B7F0  C0 22 A5 4C */	lfs f1, _1193-_SDA2_BASE_(r2)
/* 8013E9F4 0013B7F4  C0 42 A4 F4 */	lfs f2, _1035-_SDA2_BASE_(r2)
/* 8013E9F8 0013B7F8  38 63 03 0F */	addi r3, r3, 0x30f
/* 8013E9FC 0013B7FC  38 84 00 88 */	addi r4, r4, 0x88
/* 8013EA00 0013B800  38 A0 00 00 */	li r5, 0
/* 8013EA04 0013B804  38 C0 00 00 */	li r6, 0
/* 8013EA08 0013B808  38 E0 00 00 */	li r7, 0
/* 8013EA0C 0013B80C  4B EF 1C 21 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8013EA10 0013B810  80 9A 07 C4 */	lwz r4, 0x7c4(r26)
/* 8013EA14 0013B814  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013EA18 0013B818  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 8013EA1C 0013B81C  C0 22 A5 4C */	lfs f1, _1193-_SDA2_BASE_(r2)
/* 8013EA20 0013B820  C0 42 A4 F4 */	lfs f2, _1035-_SDA2_BASE_(r2)
/* 8013EA24 0013B824  38 63 03 33 */	addi r3, r3, 0x333
/* 8013EA28 0013B828  38 84 00 8C */	addi r4, r4, 0x8c
/* 8013EA2C 0013B82C  38 A0 00 00 */	li r5, 0
/* 8013EA30 0013B830  38 C0 00 00 */	li r6, 0
/* 8013EA34 0013B834  38 E0 00 00 */	li r7, 0
/* 8013EA38 0013B838  4B EF 1B F5 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8013EA3C 0013B83C  80 9A 07 C4 */	lwz r4, 0x7c4(r26)
/* 8013EA40 0013B840  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013EA44 0013B844  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 8013EA48 0013B848  C0 22 A5 4C */	lfs f1, _1193-_SDA2_BASE_(r2)
/* 8013EA4C 0013B84C  C0 42 A4 F4 */	lfs f2, _1035-_SDA2_BASE_(r2)
/* 8013EA50 0013B850  38 63 03 57 */	addi r3, r3, 0x357
/* 8013EA54 0013B854  38 84 00 90 */	addi r4, r4, 0x90
/* 8013EA58 0013B858  38 A0 00 00 */	li r5, 0
/* 8013EA5C 0013B85C  38 C0 00 00 */	li r6, 0
/* 8013EA60 0013B860  38 E0 00 00 */	li r7, 0
/* 8013EA64 0013B864  4B EF 1B C9 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8013EA68 0013B868  80 9A 07 C4 */	lwz r4, 0x7c4(r26)
/* 8013EA6C 0013B86C  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013EA70 0013B870  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 8013EA74 0013B874  C0 22 A5 4C */	lfs f1, _1193-_SDA2_BASE_(r2)
/* 8013EA78 0013B878  C0 42 A4 F4 */	lfs f2, _1035-_SDA2_BASE_(r2)
/* 8013EA7C 0013B87C  38 63 03 7B */	addi r3, r3, 0x37b
/* 8013EA80 0013B880  38 84 01 94 */	addi r4, r4, 0x194
/* 8013EA84 0013B884  38 A0 00 00 */	li r5, 0
/* 8013EA88 0013B888  38 C0 00 00 */	li r6, 0
/* 8013EA8C 0013B88C  38 E0 00 00 */	li r7, 0
/* 8013EA90 0013B890  4B EF 1B 9D */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8013EA94 0013B894  80 9A 07 C4 */	lwz r4, 0x7c4(r26)
/* 8013EA98 0013B898  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013EA9C 0013B89C  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 8013EAA0 0013B8A0  C0 22 A5 4C */	lfs f1, _1193-_SDA2_BASE_(r2)
/* 8013EAA4 0013B8A4  C0 42 A4 F4 */	lfs f2, _1035-_SDA2_BASE_(r2)
/* 8013EAA8 0013B8A8  38 63 03 A3 */	addi r3, r3, 0x3a3
/* 8013EAAC 0013B8AC  38 84 01 98 */	addi r4, r4, 0x198
/* 8013EAB0 0013B8B0  38 A0 00 00 */	li r5, 0
/* 8013EAB4 0013B8B4  38 C0 00 00 */	li r6, 0
/* 8013EAB8 0013B8B8  38 E0 00 00 */	li r7, 0
/* 8013EABC 0013B8BC  4B EF 1B 71 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8013EAC0 0013B8C0  80 9A 07 C4 */	lwz r4, 0x7c4(r26)
/* 8013EAC4 0013B8C4  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013EAC8 0013B8C8  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 8013EACC 0013B8CC  C0 22 A5 4C */	lfs f1, _1193-_SDA2_BASE_(r2)
/* 8013EAD0 0013B8D0  C0 42 A4 F4 */	lfs f2, _1035-_SDA2_BASE_(r2)
/* 8013EAD4 0013B8D4  38 63 03 CB */	addi r3, r3, 0x3cb
/* 8013EAD8 0013B8D8  38 84 01 9C */	addi r4, r4, 0x19c
/* 8013EADC 0013B8DC  38 A0 00 00 */	li r5, 0
/* 8013EAE0 0013B8E0  38 C0 00 00 */	li r6, 0
/* 8013EAE4 0013B8E4  38 E0 00 00 */	li r7, 0
/* 8013EAE8 0013B8E8  4B EF 1B 45 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8013EAEC 0013B8EC  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013EAF0 0013B8F0  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 8013EAF4 0013B8F4  38 63 03 F3 */	addi r3, r3, 0x3f3
/* 8013EAF8 0013B8F8  4B F0 D7 1D */	bl xStrHash__FPCc
/* 8013EAFC 0013B8FC  4B F7 5F 41 */	bl zSceneFindObject__FUi
/* 8013EB00 0013B900  3C 80 80 27 */	lis r4, bossSandyStrings@ha
/* 8013EB04 0013B904  90 7A 07 B8 */	stw r3, 0x7b8(r26)
/* 8013EB08 0013B908  38 64 D1 9C */	addi r3, r4, bossSandyStrings@l
/* 8013EB0C 0013B90C  38 63 04 01 */	addi r3, r3, 0x401
/* 8013EB10 0013B910  4B F0 D7 05 */	bl xStrHash__FPCc
/* 8013EB14 0013B914  4B F7 5F 29 */	bl zSceneFindObject__FUi
/* 8013EB18 0013B918  3C 80 80 27 */	lis r4, bossSandyStrings@ha
/* 8013EB1C 0013B91C  90 7A 07 BC */	stw r3, 0x7bc(r26)
/* 8013EB20 0013B920  38 64 D1 9C */	addi r3, r4, bossSandyStrings@l
/* 8013EB24 0013B924  38 63 04 13 */	addi r3, r3, 0x413
/* 8013EB28 0013B928  4B F0 D6 ED */	bl xStrHash__FPCc
/* 8013EB2C 0013B92C  4B F7 5F 11 */	bl zSceneFindObject__FUi
/* 8013EB30 0013B930  90 7A 07 C0 */	stw r3, 0x7c0(r26)
/* 8013EB34 0013B934  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013EB38 0013B938  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 8013EB3C 0013B93C  80 9A 07 C0 */	lwz r4, 0x7c0(r26)
/* 8013EB40 0013B940  38 63 04 25 */	addi r3, r3, 0x425
/* 8013EB44 0013B944  80 04 00 D8 */	lwz r0, 0xd8(r4)
/* 8013EB48 0013B948  60 00 00 08 */	ori r0, r0, 8
/* 8013EB4C 0013B94C  90 04 00 D8 */	stw r0, 0xd8(r4)
/* 8013EB50 0013B950  80 9A 07 C0 */	lwz r4, 0x7c0(r26)
/* 8013EB54 0013B954  80 84 00 24 */	lwz r4, 0x24(r4)
/* 8013EB58 0013B958  80 04 00 14 */	lwz r0, 0x14(r4)
/* 8013EB5C 0013B95C  54 00 07 B6 */	rlwinm r0, r0, 0, 0x1e, 0x1b
/* 8013EB60 0013B960  90 04 00 14 */	stw r0, 0x14(r4)
/* 8013EB64 0013B964  80 9A 07 C0 */	lwz r4, 0x7c0(r26)
/* 8013EB68 0013B968  80 84 00 24 */	lwz r4, 0x24(r4)
/* 8013EB6C 0013B96C  80 04 00 14 */	lwz r0, 0x14(r4)
/* 8013EB70 0013B970  60 00 00 04 */	ori r0, r0, 4
/* 8013EB74 0013B974  90 04 00 14 */	stw r0, 0x14(r4)
/* 8013EB78 0013B978  4B F0 D6 9D */	bl xStrHash__FPCc
/* 8013EB7C 0013B97C  38 80 00 00 */	li r4, 0
/* 8013EB80 0013B980  4B F0 CB 8D */	bl xSTFindAsset__FUiPUi
/* 8013EB84 0013B984  3C 80 80 27 */	lis r4, bossSandyStrings@ha
/* 8013EB88 0013B988  90 7A 07 C8 */	stw r3, 0x7c8(r26)
/* 8013EB8C 0013B98C  38 64 D1 9C */	addi r3, r4, bossSandyStrings@l
/* 8013EB90 0013B990  38 63 04 3F */	addi r3, r3, 0x43f
/* 8013EB94 0013B994  4B F0 D6 81 */	bl xStrHash__FPCc
/* 8013EB98 0013B998  38 80 00 00 */	li r4, 0
/* 8013EB9C 0013B99C  4B F0 CB 71 */	bl xSTFindAsset__FUiPUi
/* 8013EBA0 0013B9A0  3C 80 80 27 */	lis r4, bossSandyStrings@ha
/* 8013EBA4 0013B9A4  90 7A 07 CC */	stw r3, 0x7cc(r26)
/* 8013EBA8 0013B9A8  38 64 D1 9C */	addi r3, r4, bossSandyStrings@l
/* 8013EBAC 0013B9AC  38 63 04 63 */	addi r3, r3, 0x463
/* 8013EBB0 0013B9B0  4B F0 D6 65 */	bl xStrHash__FPCc
/* 8013EBB4 0013B9B4  38 80 00 00 */	li r4, 0
/* 8013EBB8 0013B9B8  4B F0 CB 55 */	bl xSTFindAsset__FUiPUi
/* 8013EBBC 0013B9BC  3C 80 80 27 */	lis r4, bossSandyStrings@ha
/* 8013EBC0 0013B9C0  90 7A 07 D0 */	stw r3, 0x7d0(r26)
/* 8013EBC4 0013B9C4  38 64 D1 9C */	addi r3, r4, bossSandyStrings@l
/* 8013EBC8 0013B9C8  38 63 04 86 */	addi r3, r3, 0x486
/* 8013EBCC 0013B9CC  4B F0 D6 49 */	bl xStrHash__FPCc
/* 8013EBD0 0013B9D0  38 80 00 00 */	li r4, 0
/* 8013EBD4 0013B9D4  4B F0 CB 39 */	bl xSTFindAsset__FUiPUi
/* 8013EBD8 0013B9D8  3C 80 80 27 */	lis r4, bossSandyStrings@ha
/* 8013EBDC 0013B9DC  90 7A 07 D4 */	stw r3, 0x7d4(r26)
/* 8013EBE0 0013B9E0  38 64 D1 9C */	addi r3, r4, bossSandyStrings@l
/* 8013EBE4 0013B9E4  38 63 04 A1 */	addi r3, r3, 0x4a1
/* 8013EBE8 0013B9E8  4B F0 D6 2D */	bl xStrHash__FPCc
/* 8013EBEC 0013B9EC  4B F7 5E 51 */	bl zSceneFindObject__FUi
/* 8013EBF0 0013B9F0  3C 80 80 27 */	lis r4, bossSandyStrings@ha
/* 8013EBF4 0013B9F4  90 7A 07 D8 */	stw r3, 0x7d8(r26)
/* 8013EBF8 0013B9F8  38 64 D1 9C */	addi r3, r4, bossSandyStrings@l
/* 8013EBFC 0013B9FC  38 63 04 AF */	addi r3, r3, 0x4af
/* 8013EC00 0013BA00  4B F0 D6 15 */	bl xStrHash__FPCc
/* 8013EC04 0013BA04  4B F7 5E 39 */	bl zSceneFindObject__FUi
/* 8013EC08 0013BA08  3C 80 80 27 */	lis r4, bossSandyStrings@ha
/* 8013EC0C 0013BA0C  90 7A 07 DC */	stw r3, 0x7dc(r26)
/* 8013EC10 0013BA10  38 64 D1 9C */	addi r3, r4, bossSandyStrings@l
/* 8013EC14 0013BA14  38 63 04 BE */	addi r3, r3, 0x4be
/* 8013EC18 0013BA18  4B F0 D5 FD */	bl xStrHash__FPCc
/* 8013EC1C 0013BA1C  4B F7 5E 21 */	bl zSceneFindObject__FUi
/* 8013EC20 0013BA20  3C 80 80 27 */	lis r4, bossSandyStrings@ha
/* 8013EC24 0013BA24  90 7A 07 E0 */	stw r3, 0x7e0(r26)
/* 8013EC28 0013BA28  38 64 D1 9C */	addi r3, r4, bossSandyStrings@l
/* 8013EC2C 0013BA2C  38 63 04 CE */	addi r3, r3, 0x4ce
/* 8013EC30 0013BA30  4B F0 D5 E5 */	bl xStrHash__FPCc
/* 8013EC34 0013BA34  4B F7 5E 09 */	bl zSceneFindObject__FUi
/* 8013EC38 0013BA38  3C 80 80 27 */	lis r4, bossSandyStrings@ha
/* 8013EC3C 0013BA3C  90 7A 07 E4 */	stw r3, 0x7e4(r26)
/* 8013EC40 0013BA40  38 64 D1 9C */	addi r3, r4, bossSandyStrings@l
/* 8013EC44 0013BA44  38 63 04 DF */	addi r3, r3, 0x4df
/* 8013EC48 0013BA48  4B F0 D5 CD */	bl xStrHash__FPCc
/* 8013EC4C 0013BA4C  4B F7 5D F1 */	bl zSceneFindObject__FUi
/* 8013EC50 0013BA50  3C 80 80 27 */	lis r4, bossSandyStrings@ha
/* 8013EC54 0013BA54  90 7A 07 E8 */	stw r3, 0x7e8(r26)
/* 8013EC58 0013BA58  38 64 D1 9C */	addi r3, r4, bossSandyStrings@l
/* 8013EC5C 0013BA5C  38 63 04 ED */	addi r3, r3, 0x4ed
/* 8013EC60 0013BA60  4B F0 D5 B5 */	bl xStrHash__FPCc
/* 8013EC64 0013BA64  4B F7 5D D9 */	bl zSceneFindObject__FUi
/* 8013EC68 0013BA68  3C 80 80 27 */	lis r4, bossSandyStrings@ha
/* 8013EC6C 0013BA6C  90 7A 07 EC */	stw r3, 0x7ec(r26)
/* 8013EC70 0013BA70  38 64 D1 9C */	addi r3, r4, bossSandyStrings@l
/* 8013EC74 0013BA74  38 63 04 FB */	addi r3, r3, 0x4fb
/* 8013EC78 0013BA78  4B F0 D5 9D */	bl xStrHash__FPCc
/* 8013EC7C 0013BA7C  4B F7 5D C1 */	bl zSceneFindObject__FUi
/* 8013EC80 0013BA80  90 7A 07 F0 */	stw r3, 0x7f0(r26)
/* 8013EC84 0013BA84  38 00 00 00 */	li r0, 0
/* 8013EC88 0013BA88  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013EC8C 0013BA8C  90 1A 05 5C */	stw r0, 0x55c(r26)
/* 8013EC90 0013BA90  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 8013EC94 0013BA94  38 63 05 09 */	addi r3, r3, 0x509
/* 8013EC98 0013BA98  90 1A 05 54 */	stw r0, 0x554(r26)
/* 8013EC9C 0013BA9C  90 1A 05 58 */	stw r0, 0x558(r26)
/* 8013ECA0 0013BAA0  4B F0 D5 75 */	bl xStrHash__FPCc
/* 8013ECA4 0013BAA4  38 80 00 00 */	li r4, 0
/* 8013ECA8 0013BAA8  4B F0 CA 65 */	bl xSTFindAsset__FUiPUi
/* 8013ECAC 0013BAAC  28 03 00 00 */	cmplwi r3, 0
/* 8013ECB0 0013BAB0  41 82 00 0C */	beq lbl_8013ECBC
/* 8013ECB4 0013BAB4  80 03 00 00 */	lwz r0, 0(r3)
/* 8013ECB8 0013BAB8  90 1A 05 54 */	stw r0, 0x554(r26)
lbl_8013ECBC:
/* 8013ECBC 0013BABC  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013ECC0 0013BAC0  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 8013ECC4 0013BAC4  38 63 05 10 */	addi r3, r3, 0x510
/* 8013ECC8 0013BAC8  4B F0 D5 4D */	bl xStrHash__FPCc
/* 8013ECCC 0013BACC  38 80 00 00 */	li r4, 0
/* 8013ECD0 0013BAD0  4B F0 CA 3D */	bl xSTFindAsset__FUiPUi
/* 8013ECD4 0013BAD4  28 03 00 00 */	cmplwi r3, 0
/* 8013ECD8 0013BAD8  41 82 00 0C */	beq lbl_8013ECE4
/* 8013ECDC 0013BADC  80 03 00 00 */	lwz r0, 0(r3)
/* 8013ECE0 0013BAE0  90 1A 05 58 */	stw r0, 0x558(r26)
lbl_8013ECE4:
/* 8013ECE4 0013BAE4  80 BA 07 C0 */	lwz r5, 0x7c0(r26)
/* 8013ECE8 0013BAE8  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013ECEC 0013BAEC  38 83 D1 9C */	addi r4, r3, bossSandyStrings@l
/* 8013ECF0 0013BAF0  38 61 00 24 */	addi r3, r1, 0x24
/* 8013ECF4 0013BAF4  88 05 00 22 */	lbz r0, 0x22(r5)
/* 8013ECF8 0013BAF8  38 84 05 1C */	addi r4, r4, 0x51c
/* 8013ECFC 0013BAFC  70 00 00 EF */	andi. r0, r0, 0xef
/* 8013ED00 0013BB00  98 05 00 22 */	stb r0, 0x22(r5)
/* 8013ED04 0013BB04  80 BA 07 C0 */	lwz r5, 0x7c0(r26)
/* 8013ED08 0013BB08  88 05 00 18 */	lbz r0, 0x18(r5)
/* 8013ED0C 0013BB0C  54 00 06 3C */	rlwinm r0, r0, 0, 0x18, 0x1e
/* 8013ED10 0013BB10  98 05 00 18 */	stb r0, 0x18(r5)
/* 8013ED14 0013BB14  48 0A 89 ED */	bl strcpy
/* 8013ED18 0013BB18  3B 60 00 00 */	li r27, 0
/* 8013ED1C 0013BB1C  7F 59 D3 78 */	mr r25, r26
lbl_8013ED20:
/* 8013ED20 0013BB20  57 64 06 3E */	clrlwi r4, r27, 0x18
/* 8013ED24 0013BB24  38 61 00 24 */	addi r3, r1, 0x24
/* 8013ED28 0013BB28  38 04 00 30 */	addi r0, r4, 0x30
/* 8013ED2C 0013BB2C  98 01 00 2C */	stb r0, 0x2c(r1)
/* 8013ED30 0013BB30  4B F0 D4 E5 */	bl xStrHash__FPCc
/* 8013ED34 0013BB34  38 81 00 08 */	addi r4, r1, 8
/* 8013ED38 0013BB38  4B F0 C9 D5 */	bl xSTFindAsset__FUiPUi
/* 8013ED3C 0013BB3C  7C 60 1B 78 */	mr r0, r3
/* 8013ED40 0013BB40  38 79 02 DC */	addi r3, r25, 0x2dc
/* 8013ED44 0013BB44  7C 04 03 78 */	mr r4, r0
/* 8013ED48 0013BB48  4B F0 F7 95 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 8013ED4C 0013BB4C  3B 7B 00 01 */	addi r27, r27, 1
/* 8013ED50 0013BB50  3B 39 00 0C */	addi r25, r25, 0xc
/* 8013ED54 0013BB54  2C 1B 00 08 */	cmpwi r27, 8
/* 8013ED58 0013BB58  41 80 FF C8 */	blt lbl_8013ED20
/* 8013ED5C 0013BB5C  3B 80 00 00 */	li r28, 0
/* 8013ED60 0013BB60  7F 59 D3 78 */	mr r25, r26
lbl_8013ED64:
/* 8013ED64 0013BB64  38 1C 00 01 */	addi r0, r28, 1
/* 8013ED68 0013BB68  2C 00 00 08 */	cmpwi r0, 8
/* 8013ED6C 0013BB6C  40 82 00 08 */	bne lbl_8013ED74
/* 8013ED70 0013BB70  38 00 00 00 */	li r0, 0
lbl_8013ED74:
/* 8013ED74 0013BB74  1C A0 00 0C */	mulli r5, r0, 0xc
/* 8013ED78 0013BB78  38 79 03 3C */	addi r3, r25, 0x33c
/* 8013ED7C 0013BB7C  38 99 02 DC */	addi r4, r25, 0x2dc
/* 8013ED80 0013BB80  3B 65 02 DC */	addi r27, r5, 0x2dc
/* 8013ED84 0013BB84  7F 7A DA 14 */	add r27, r26, r27
/* 8013ED88 0013BB88  7F 65 DB 78 */	mr r5, r27
/* 8013ED8C 0013BB8C  4B EC C3 2D */	bl xVec3Add__FP5xVec3PC5xVec3PC5xVec3
/* 8013ED90 0013BB90  C0 22 A4 E8 */	lfs f1, _1032-_SDA2_BASE_(r2)
/* 8013ED94 0013BB94  38 79 03 3C */	addi r3, r25, 0x33c
/* 8013ED98 0013BB98  4B ED CB A1 */	bl xVec3SMulBy__FP5xVec3f
/* 8013ED9C 0013BB9C  7F 64 DB 78 */	mr r4, r27
/* 8013EDA0 0013BBA0  38 79 03 9C */	addi r3, r25, 0x39c
/* 8013EDA4 0013BBA4  38 B9 02 DC */	addi r5, r25, 0x2dc
/* 8013EDA8 0013BBA8  4B EC F8 E9 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 8013EDAC 0013BBAC  C0 19 03 A4 */	lfs f0, 0x3a4(r25)
/* 8013EDB0 0013BBB0  38 79 03 9C */	addi r3, r25, 0x39c
/* 8013EDB4 0013BBB4  7C 64 1B 78 */	mr r4, r3
/* 8013EDB8 0013BBB8  D0 19 03 A0 */	stfs f0, 0x3a0(r25)
/* 8013EDBC 0013BBBC  C0 19 03 9C */	lfs f0, 0x39c(r25)
/* 8013EDC0 0013BBC0  FC 00 00 50 */	fneg f0, f0
/* 8013EDC4 0013BBC4  D0 19 03 A4 */	stfs f0, 0x3a4(r25)
/* 8013EDC8 0013BBC8  C0 19 03 A0 */	lfs f0, 0x3a0(r25)
/* 8013EDCC 0013BBCC  D0 19 03 9C */	stfs f0, 0x39c(r25)
/* 8013EDD0 0013BBD0  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013EDD4 0013BBD4  D0 19 03 A0 */	stfs f0, 0x3a0(r25)
/* 8013EDD8 0013BBD8  4B F0 F5 19 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 8013EDDC 0013BBDC  38 79 03 FC */	addi r3, r25, 0x3fc
/* 8013EDE0 0013BBE0  38 99 03 3C */	addi r4, r25, 0x33c
/* 8013EDE4 0013BBE4  4B F0 F6 F9 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 8013EDE8 0013BBE8  C0 22 A5 50 */	lfs f1, _1194-_SDA2_BASE_(r2)
/* 8013EDEC 0013BBEC  38 79 03 FC */	addi r3, r25, 0x3fc
/* 8013EDF0 0013BBF0  38 99 03 9C */	addi r4, r25, 0x39c
/* 8013EDF4 0013BBF4  4B ED 62 65 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 8013EDF8 0013BBF8  3B 9C 00 01 */	addi r28, r28, 1
/* 8013EDFC 0013BBFC  3B 39 00 0C */	addi r25, r25, 0xc
/* 8013EE00 0013BC00  2C 1C 00 08 */	cmpwi r28, 8
/* 8013EE04 0013BC04  41 80 FF 60 */	blt lbl_8013ED64
/* 8013EE08 0013BC08  3C 80 80 27 */	lis r4, bossSandyStrings@ha
/* 8013EE0C 0013BC0C  38 61 00 24 */	addi r3, r1, 0x24
/* 8013EE10 0013BC10  38 84 D1 9C */	addi r4, r4, bossSandyStrings@l
/* 8013EE14 0013BC14  38 84 05 26 */	addi r4, r4, 0x526
/* 8013EE18 0013BC18  48 0A 88 E9 */	bl strcpy
/* 8013EE1C 0013BC1C  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013EE20 0013BC20  7F 5D D3 78 */	mr r29, r26
/* 8013EE24 0013BC24  3B 23 D1 9C */	addi r25, r3, bossSandyStrings@l
/* 8013EE28 0013BC28  3B 80 00 00 */	li r28, 0
lbl_8013EE2C:
/* 8013EE2C 0013BC2C  57 83 06 3E */	clrlwi r3, r28, 0x18
/* 8013EE30 0013BC30  7F BE EB 78 */	mr r30, r29
/* 8013EE34 0013BC34  38 03 00 30 */	addi r0, r3, 0x30
/* 8013EE38 0013BC38  3B 60 00 00 */	li r27, 0
/* 8013EE3C 0013BC3C  98 01 00 29 */	stb r0, 0x29(r1)
lbl_8013EE40:
/* 8013EE40 0013BC40  57 64 06 3E */	clrlwi r4, r27, 0x18
/* 8013EE44 0013BC44  38 61 00 24 */	addi r3, r1, 0x24
/* 8013EE48 0013BC48  38 04 00 30 */	addi r0, r4, 0x30
/* 8013EE4C 0013BC4C  98 01 00 2B */	stb r0, 0x2b(r1)
/* 8013EE50 0013BC50  4B F0 D3 C5 */	bl xStrHash__FPCc
/* 8013EE54 0013BC54  4B F7 5B E9 */	bl zSceneFindObject__FUi
/* 8013EE58 0013BC58  90 7E 04 5C */	stw r3, 0x45c(r30)
/* 8013EE5C 0013BC5C  80 7E 04 5C */	lwz r3, 0x45c(r30)
/* 8013EE60 0013BC60  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8013EE64 0013BC64  80 03 00 14 */	lwz r0, 0x14(r3)
/* 8013EE68 0013BC68  54 00 07 B6 */	rlwinm r0, r0, 0, 0x1e, 0x1b
/* 8013EE6C 0013BC6C  90 03 00 14 */	stw r0, 0x14(r3)
/* 8013EE70 0013BC70  80 7E 04 5C */	lwz r3, 0x45c(r30)
/* 8013EE74 0013BC74  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8013EE78 0013BC78  80 03 00 14 */	lwz r0, 0x14(r3)
/* 8013EE7C 0013BC7C  60 00 00 04 */	ori r0, r0, 4
/* 8013EE80 0013BC80  90 03 00 14 */	stw r0, 0x14(r3)
/* 8013EE84 0013BC84  80 7E 04 5C */	lwz r3, 0x45c(r30)
/* 8013EE88 0013BC88  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8013EE8C 0013BC8C  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8013EE90 0013BC90  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8013EE94 0013BC94  83 03 00 0C */	lwz r24, 0xc(r3)
/* 8013EE98 0013BC98  48 00 00 2C */	b lbl_8013EEC4
lbl_8013EE9C:
/* 8013EE9C 0013BC9C  80 78 00 04 */	lwz r3, 4(r24)
/* 8013EEA0 0013BCA0  38 99 01 0D */	addi r4, r25, 0x10d
/* 8013EEA4 0013BCA4  48 0A 86 79 */	bl strcmp
/* 8013EEA8 0013BCA8  2C 03 00 00 */	cmpwi r3, 0
/* 8013EEAC 0013BCAC  40 82 00 14 */	bne lbl_8013EEC0
/* 8013EEB0 0013BCB0  80 18 00 0C */	lwz r0, 0xc(r24)
/* 8013EEB4 0013BCB4  54 00 07 32 */	rlwinm r0, r0, 0, 0x1c, 0x19
/* 8013EEB8 0013BCB8  90 18 00 0C */	stw r0, 0xc(r24)
/* 8013EEBC 0013BCBC  48 00 00 10 */	b lbl_8013EECC
lbl_8013EEC0:
/* 8013EEC0 0013BCC0  83 18 00 00 */	lwz r24, 0(r24)
lbl_8013EEC4:
/* 8013EEC4 0013BCC4  28 18 00 00 */	cmplwi r24, 0
/* 8013EEC8 0013BCC8  40 82 FF D4 */	bne lbl_8013EE9C
lbl_8013EECC:
/* 8013EECC 0013BCCC  3B 7B 00 01 */	addi r27, r27, 1
/* 8013EED0 0013BCD0  3B DE 00 04 */	addi r30, r30, 4
/* 8013EED4 0013BCD4  2C 1B 00 04 */	cmpwi r27, 4
/* 8013EED8 0013BCD8  41 80 FF 68 */	blt lbl_8013EE40
/* 8013EEDC 0013BCDC  3B 9C 00 01 */	addi r28, r28, 1
/* 8013EEE0 0013BCE0  3B BD 00 10 */	addi r29, r29, 0x10
/* 8013EEE4 0013BCE4  2C 1C 00 08 */	cmpwi r28, 8
/* 8013EEE8 0013BCE8  41 80 FF 44 */	blt lbl_8013EE2C
/* 8013EEEC 0013BCEC  3C 80 80 27 */	lis r4, bossSandyStrings@ha
/* 8013EEF0 0013BCF0  38 61 00 24 */	addi r3, r1, 0x24
/* 8013EEF4 0013BCF4  38 84 D1 9C */	addi r4, r4, bossSandyStrings@l
/* 8013EEF8 0013BCF8  38 84 05 2F */	addi r4, r4, 0x52f
/* 8013EEFC 0013BCFC  48 0A 88 05 */	bl strcpy
/* 8013EF00 0013BD00  3B 60 00 00 */	li r27, 0
/* 8013EF04 0013BD04  7F 59 D3 78 */	mr r25, r26
lbl_8013EF08:
/* 8013EF08 0013BD08  57 64 06 3E */	clrlwi r4, r27, 0x18
/* 8013EF0C 0013BD0C  38 61 00 24 */	addi r3, r1, 0x24
/* 8013EF10 0013BD10  38 04 00 30 */	addi r0, r4, 0x30
/* 8013EF14 0013BD14  98 01 00 29 */	stb r0, 0x29(r1)
/* 8013EF18 0013BD18  4B F0 D2 FD */	bl xStrHash__FPCc
/* 8013EF1C 0013BD1C  4B F7 5B 21 */	bl zSceneFindObject__FUi
/* 8013EF20 0013BD20  90 79 04 DC */	stw r3, 0x4dc(r25)
/* 8013EF24 0013BD24  3B 7B 00 01 */	addi r27, r27, 1
/* 8013EF28 0013BD28  2C 1B 00 08 */	cmpwi r27, 8
/* 8013EF2C 0013BD2C  80 79 04 DC */	lwz r3, 0x4dc(r25)
/* 8013EF30 0013BD30  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8013EF34 0013BD34  80 03 00 14 */	lwz r0, 0x14(r3)
/* 8013EF38 0013BD38  54 00 07 B6 */	rlwinm r0, r0, 0, 0x1e, 0x1b
/* 8013EF3C 0013BD3C  90 03 00 14 */	stw r0, 0x14(r3)
/* 8013EF40 0013BD40  80 79 04 DC */	lwz r3, 0x4dc(r25)
/* 8013EF44 0013BD44  3B 39 00 04 */	addi r25, r25, 4
/* 8013EF48 0013BD48  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8013EF4C 0013BD4C  80 03 00 14 */	lwz r0, 0x14(r3)
/* 8013EF50 0013BD50  60 00 00 04 */	ori r0, r0, 4
/* 8013EF54 0013BD54  90 03 00 14 */	stw r0, 0x14(r3)
/* 8013EF58 0013BD58  41 80 FF B0 */	blt lbl_8013EF08
/* 8013EF5C 0013BD5C  80 1A 04 EC */	lwz r0, 0x4ec(r26)
/* 8013EF60 0013BD60  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013EF64 0013BD64  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 8013EF68 0013BD68  90 1A 04 FC */	stw r0, 0x4fc(r26)
/* 8013EF6C 0013BD6C  38 63 05 39 */	addi r3, r3, 0x539
/* 8013EF70 0013BD70  4B F0 D2 A5 */	bl xStrHash__FPCc
/* 8013EF74 0013BD74  4B F7 5A C9 */	bl zSceneFindObject__FUi
/* 8013EF78 0013BD78  90 7A 05 00 */	stw r3, 0x500(r26)
/* 8013EF7C 0013BD7C  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013EF80 0013BD80  38 83 D1 9C */	addi r4, r3, bossSandyStrings@l
/* 8013EF84 0013BD84  38 61 00 24 */	addi r3, r1, 0x24
/* 8013EF88 0013BD88  80 BA 05 00 */	lwz r5, 0x500(r26)
/* 8013EF8C 0013BD8C  38 84 05 4B */	addi r4, r4, 0x54b
/* 8013EF90 0013BD90  80 A5 00 24 */	lwz r5, 0x24(r5)
/* 8013EF94 0013BD94  80 05 00 14 */	lwz r0, 0x14(r5)
/* 8013EF98 0013BD98  54 00 07 B6 */	rlwinm r0, r0, 0, 0x1e, 0x1b
/* 8013EF9C 0013BD9C  90 05 00 14 */	stw r0, 0x14(r5)
/* 8013EFA0 0013BDA0  80 BA 05 00 */	lwz r5, 0x500(r26)
/* 8013EFA4 0013BDA4  80 A5 00 24 */	lwz r5, 0x24(r5)
/* 8013EFA8 0013BDA8  80 05 00 14 */	lwz r0, 0x14(r5)
/* 8013EFAC 0013BDAC  60 00 00 04 */	ori r0, r0, 4
/* 8013EFB0 0013BDB0  90 05 00 14 */	stw r0, 0x14(r5)
/* 8013EFB4 0013BDB4  48 0A 87 4D */	bl strcpy
/* 8013EFB8 0013BDB8  3B 60 00 00 */	li r27, 0
/* 8013EFBC 0013BDBC  7F 59 D3 78 */	mr r25, r26
lbl_8013EFC0:
/* 8013EFC0 0013BDC0  57 64 06 3E */	clrlwi r4, r27, 0x18
/* 8013EFC4 0013BDC4  38 61 00 24 */	addi r3, r1, 0x24
/* 8013EFC8 0013BDC8  38 04 00 30 */	addi r0, r4, 0x30
/* 8013EFCC 0013BDCC  98 01 00 34 */	stb r0, 0x34(r1)
/* 8013EFD0 0013BDD0  4B F0 D2 45 */	bl xStrHash__FPCc
/* 8013EFD4 0013BDD4  4B F7 5A 69 */	bl zSceneFindObject__FUi
/* 8013EFD8 0013BDD8  90 79 05 04 */	stw r3, 0x504(r25)
/* 8013EFDC 0013BDDC  3B 7B 00 01 */	addi r27, r27, 1
/* 8013EFE0 0013BDE0  2C 1B 00 08 */	cmpwi r27, 8
/* 8013EFE4 0013BDE4  80 79 05 04 */	lwz r3, 0x504(r25)
/* 8013EFE8 0013BDE8  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8013EFEC 0013BDEC  80 03 00 14 */	lwz r0, 0x14(r3)
/* 8013EFF0 0013BDF0  54 00 07 B6 */	rlwinm r0, r0, 0, 0x1e, 0x1b
/* 8013EFF4 0013BDF4  90 03 00 14 */	stw r0, 0x14(r3)
/* 8013EFF8 0013BDF8  80 79 05 04 */	lwz r3, 0x504(r25)
/* 8013EFFC 0013BDFC  3B 39 00 04 */	addi r25, r25, 4
/* 8013F000 0013BE00  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8013F004 0013BE04  80 03 00 14 */	lwz r0, 0x14(r3)
/* 8013F008 0013BE08  60 00 00 04 */	ori r0, r0, 4
/* 8013F00C 0013BE0C  90 03 00 14 */	stw r0, 0x14(r3)
/* 8013F010 0013BE10  41 80 FF B0 */	blt lbl_8013EFC0
/* 8013F014 0013BE14  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013F018 0013BE18  7F 59 D3 78 */	mr r25, r26
/* 8013F01C 0013BE1C  3B 60 00 00 */	li r27, 0
/* 8013F020 0013BE20  D0 0D 96 7C */	stfs f0, sRadiusOfRing-_SDA_BASE_(r13)
lbl_8013F024:
/* 8013F024 0013BE24  38 1B 00 04 */	addi r0, r27, 4
/* 8013F028 0013BE28  38 61 00 18 */	addi r3, r1, 0x18
/* 8013F02C 0013BE2C  1C A0 00 0C */	mulli r5, r0, 0xc
/* 8013F030 0013BE30  38 99 03 FC */	addi r4, r25, 0x3fc
/* 8013F034 0013BE34  38 A5 03 FC */	addi r5, r5, 0x3fc
/* 8013F038 0013BE38  7C BA 2A 14 */	add r5, r26, r5
/* 8013F03C 0013BE3C  4B EC F6 55 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 8013F040 0013BE40  38 61 00 18 */	addi r3, r1, 0x18
/* 8013F044 0013BE44  4B EC F6 0D */	bl xVec3Length__FPC5xVec3
/* 8013F048 0013BE48  C0 42 A5 54 */	lfs f2, _1195-_SDA2_BASE_(r2)
/* 8013F04C 0013BE4C  3B 7B 00 01 */	addi r27, r27, 1
/* 8013F050 0013BE50  C0 0D 96 7C */	lfs f0, sRadiusOfRing-_SDA_BASE_(r13)
/* 8013F054 0013BE54  2C 1B 00 04 */	cmpwi r27, 4
/* 8013F058 0013BE58  3B 39 00 0C */	addi r25, r25, 0xc
/* 8013F05C 0013BE5C  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8013F060 0013BE60  D0 0D 96 7C */	stfs f0, sRadiusOfRing-_SDA_BASE_(r13)
/* 8013F064 0013BE64  41 80 FF C0 */	blt lbl_8013F024
/* 8013F068 0013BE68  38 9F 00 68 */	addi r4, r31, 0x68
/* 8013F06C 0013BE6C  38 00 00 00 */	li r0, 0
/* 8013F070 0013BE70  38 DF 00 7C */	addi r6, r31, 0x7c
/* 8013F074 0013BE74  38 BF 00 40 */	addi r5, r31, 0x40
/* 8013F078 0013BE78  38 7F 00 54 */	addi r3, r31, 0x54
/* 8013F07C 0013BE7C  90 04 00 10 */	stw r0, 0x10(r4)
/* 8013F080 0013BE80  38 80 00 25 */	li r4, 0x25
/* 8013F084 0013BE84  90 06 00 10 */	stw r0, 0x10(r6)
/* 8013F088 0013BE88  90 05 00 10 */	stw r0, 0x10(r5)
/* 8013F08C 0013BE8C  90 03 00 10 */	stw r0, 0x10(r3)
/* 8013F090 0013BE90  80 7A 07 C4 */	lwz r3, 0x7c4(r26)
/* 8013F094 0013BE94  4B EE 05 5D */	bl zEntEvent__FP5xBaseUi
/* 8013F098 0013BE98  80 9A 00 24 */	lwz r4, 0x24(r26)
/* 8013F09C 0013BE9C  48 00 00 14 */	b lbl_8013F0B0
lbl_8013F0A0:
/* 8013F0A0 0013BEA0  C0 02 A5 58 */	lfs f0, _1196-_SDA2_BASE_(r2)
/* 8013F0A4 0013BEA4  80 64 00 10 */	lwz r3, 0x10(r4)
/* 8013F0A8 0013BEA8  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 8013F0AC 0013BEAC  80 84 00 00 */	lwz r4, 0(r4)
lbl_8013F0B0:
/* 8013F0B0 0013BEB0  28 04 00 00 */	cmplwi r4, 0
/* 8013F0B4 0013BEB4  40 82 FF EC */	bne lbl_8013F0A0
/* 8013F0B8 0013BEB8  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013F0BC 0013BEBC  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8013F0C0 0013BEC0  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 8013F0C4 0013BEC4  D0 1A 0A F8 */	stfs f0, 0xaf8(r26)
/* 8013F0C8 0013BEC8  38 63 05 5D */	addi r3, r3, 0x55d
/* 8013F0CC 0013BECC  4B F0 D1 49 */	bl xStrHash__FPCc
/* 8013F0D0 0013BED0  48 02 0E 91 */	bl xJaw_FindData__FUi
/* 8013F0D4 0013BED4  90 7A 0B 04 */	stw r3, 0xb04(r26)
/* 8013F0D8 0013BED8  7F 43 D3 78 */	mr r3, r26
/* 8013F0DC 0013BEDC  48 00 0C 8D */	bl InitFX__10zNPCBSandyFv
/* 8013F0E0 0013BEE0  80 7A 02 28 */	lwz r3, 0x228(r26)
/* 8013F0E4 0013BEE4  28 03 00 00 */	cmplwi r3, 0
/* 8013F0E8 0013BEE8  41 82 00 14 */	beq lbl_8013F0FC
/* 8013F0EC 0013BEEC  3C 80 4E 47 */	lis r4, 0x4E474231@ha
/* 8013F0F0 0013BEF0  38 A0 00 00 */	li r5, 0
/* 8013F0F4 0013BEF4  38 84 42 31 */	addi r4, r4, 0x4E474231@l
/* 8013F0F8 0013BEF8  4B FC E6 39 */	bl GoalSet__7xPsycheFii
lbl_8013F0FC:
/* 8013F0FC 0013BEFC  38 00 00 00 */	li r0, 0
/* 8013F100 0013BF00  38 61 00 0C */	addi r3, r1, 0xc
/* 8013F104 0013BF04  90 1A 0D 38 */	stw r0, 0xd38(r26)
/* 8013F108 0013BF08  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 8013F10C 0013BF0C  FC 40 08 90 */	fmr f2, f1
/* 8013F110 0013BF10  FC 60 08 90 */	fmr f3, f1
/* 8013F114 0013BF14  4B EC FE E9 */	bl xVec3Init__FP5xVec3fff
/* 8013F118 0013BF18  38 01 00 0C */	addi r0, r1, 0xc
/* 8013F11C 0013BF1C  90 1A 09 08 */	stw r0, 0x908(r26)
/* 8013F120 0013BF20  90 1A 09 0C */	stw r0, 0x90c(r26)
/* 8013F124 0013BF24  80 1A 09 78 */	lwz r0, 0x978(r26)
/* 8013F128 0013BF28  28 00 00 00 */	cmplwi r0, 0
/* 8013F12C 0013BF2C  40 82 00 10 */	bne lbl_8013F13C
/* 8013F130 0013BF30  38 7A 08 F8 */	addi r3, r26, 0x8f8
/* 8013F134 0013BF34  4B F6 08 3D */	bl zLightningAdd__FP16_tagLightningAdd
/* 8013F138 0013BF38  90 7A 09 78 */	stw r3, 0x978(r26)
lbl_8013F13C:
/* 8013F13C 0013BF3C  80 BA 09 78 */	lwz r5, 0x978(r26)
/* 8013F140 0013BF40  38 60 00 00 */	li r3, 0
/* 8013F144 0013BF44  38 01 00 0C */	addi r0, r1, 0xc
/* 8013F148 0013BF48  80 85 00 04 */	lwz r4, 4(r5)
/* 8013F14C 0013BF4C  54 84 06 B0 */	rlwinm r4, r4, 0, 0x1a, 0x18
/* 8013F150 0013BF50  90 85 00 04 */	stw r4, 4(r5)
/* 8013F154 0013BF54  90 7A 09 08 */	stw r3, 0x908(r26)
/* 8013F158 0013BF58  90 7A 09 0C */	stw r3, 0x90c(r26)
/* 8013F15C 0013BF5C  90 1A 09 48 */	stw r0, 0x948(r26)
/* 8013F160 0013BF60  90 1A 09 4C */	stw r0, 0x94c(r26)
/* 8013F164 0013BF64  80 1A 09 7C */	lwz r0, 0x97c(r26)
/* 8013F168 0013BF68  28 00 00 00 */	cmplwi r0, 0
/* 8013F16C 0013BF6C  40 82 00 10 */	bne lbl_8013F17C
/* 8013F170 0013BF70  38 7A 09 38 */	addi r3, r26, 0x938
/* 8013F174 0013BF74  4B F6 07 FD */	bl zLightningAdd__FP16_tagLightningAdd
/* 8013F178 0013BF78  90 7A 09 7C */	stw r3, 0x97c(r26)
lbl_8013F17C:
/* 8013F17C 0013BF7C  80 9A 09 7C */	lwz r4, 0x97c(r26)
/* 8013F180 0013BF80  38 00 00 00 */	li r0, 0
/* 8013F184 0013BF84  80 64 00 04 */	lwz r3, 4(r4)
/* 8013F188 0013BF88  54 63 06 B0 */	rlwinm r3, r3, 0, 0x1a, 0x18
/* 8013F18C 0013BF8C  90 64 00 04 */	stw r3, 4(r4)
/* 8013F190 0013BF90  90 1A 09 48 */	stw r0, 0x948(r26)
/* 8013F194 0013BF94  90 1A 09 4C */	stw r0, 0x94c(r26)
/* 8013F198 0013BF98  BB 01 00 50 */	lmw r24, 0x50(r1)
/* 8013F19C 0013BF9C  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8013F1A0 0013BFA0  7C 08 03 A6 */	mtlr r0
/* 8013F1A4 0013BFA4  38 21 00 70 */	addi r1, r1, 0x70
/* 8013F1A8 0013BFA8  4E 80 00 20 */	blr 

AnimPick__10zNPCBSandyFi16en_NPC_GOAL_SPOTP5xGoal:
/* 8013F1F8 0013BFF8  3C A4 B1 B9 */	addis r5, r4, 0xb1b9
/* 8013F1FC 0013BFFC  38 E0 FF FF */	li r7, -1
/* 8013F200 0013C000  38 A5 BD CF */	addi r5, r5, -16945
/* 8013F204 0013C004  39 00 00 00 */	li r8, 0
/* 8013F208 0013C008  28 05 00 0A */	cmplwi r5, 0xa
/* 8013F20C 0013C00C  41 81 01 3C */	bgt lbl_8013F348
/* 8013F210 0013C010  3C 80 80 2A */	lis r4, _1281@ha
/* 8013F214 0013C014  54 A5 10 3A */	slwi r5, r5, 2
/* 8013F218 0013C018  38 84 9A 64 */	addi r4, r4, _1281@l
/* 8013F21C 0013C01C  7C 04 28 2E */	lwzx r0, r4, r5
/* 8013F220 0013C020  7C 09 03 A6 */	mtctr r0
/* 8013F224 0013C024  4E 80 04 20 */	bctr 
/* 8013F228 0013C028  38 E0 00 01 */	li r7, 1
/* 8013F22C 0013C02C  48 00 01 20 */	b lbl_8013F34C
/* 8013F230 0013C030  38 E0 00 03 */	li r7, 3
/* 8013F234 0013C034  48 00 01 18 */	b lbl_8013F34C
/* 8013F238 0013C038  38 E0 00 05 */	li r7, 5
/* 8013F23C 0013C03C  48 00 01 10 */	b lbl_8013F34C
/* 8013F240 0013C040  38 E0 00 06 */	li r7, 6
/* 8013F244 0013C044  48 00 01 08 */	b lbl_8013F34C
/* 8013F248 0013C048  80 06 00 50 */	lwz r0, 0x50(r6)
/* 8013F24C 0013C04C  28 00 00 00 */	cmplwi r0, 0
/* 8013F250 0013C050  40 82 00 20 */	bne lbl_8013F270
/* 8013F254 0013C054  80 03 02 D8 */	lwz r0, 0x2d8(r3)
/* 8013F258 0013C058  2C 00 00 02 */	cmpwi r0, 2
/* 8013F25C 0013C05C  40 82 00 0C */	bne lbl_8013F268
/* 8013F260 0013C060  38 E0 00 17 */	li r7, 0x17
/* 8013F264 0013C064  48 00 00 E8 */	b lbl_8013F34C
lbl_8013F268:
/* 8013F268 0013C068  38 E0 00 18 */	li r7, 0x18
/* 8013F26C 0013C06C  48 00 00 E0 */	b lbl_8013F34C
lbl_8013F270:
/* 8013F270 0013C070  28 00 00 01 */	cmplwi r0, 1
/* 8013F274 0013C074  40 82 00 20 */	bne lbl_8013F294
/* 8013F278 0013C078  80 03 02 D8 */	lwz r0, 0x2d8(r3)
/* 8013F27C 0013C07C  2C 00 00 02 */	cmpwi r0, 2
/* 8013F280 0013C080  40 82 00 0C */	bne lbl_8013F28C
/* 8013F284 0013C084  38 E0 00 15 */	li r7, 0x15
/* 8013F288 0013C088  48 00 00 C4 */	b lbl_8013F34C
lbl_8013F28C:
/* 8013F28C 0013C08C  38 E0 00 16 */	li r7, 0x16
/* 8013F290 0013C090  48 00 00 BC */	b lbl_8013F34C
lbl_8013F294:
/* 8013F294 0013C094  28 00 00 02 */	cmplwi r0, 2
/* 8013F298 0013C098  40 82 00 0C */	bne lbl_8013F2A4
/* 8013F29C 0013C09C  38 E0 00 19 */	li r7, 0x19
/* 8013F2A0 0013C0A0  48 00 00 AC */	b lbl_8013F34C
lbl_8013F2A4:
/* 8013F2A4 0013C0A4  28 00 00 03 */	cmplwi r0, 3
/* 8013F2A8 0013C0A8  40 82 00 0C */	bne lbl_8013F2B4
/* 8013F2AC 0013C0AC  38 E0 00 15 */	li r7, 0x15
/* 8013F2B0 0013C0B0  48 00 00 9C */	b lbl_8013F34C
lbl_8013F2B4:
/* 8013F2B4 0013C0B4  28 00 00 04 */	cmplwi r0, 4
/* 8013F2B8 0013C0B8  40 82 00 0C */	bne lbl_8013F2C4
/* 8013F2BC 0013C0BC  38 E0 00 1A */	li r7, 0x1a
/* 8013F2C0 0013C0C0  48 00 00 8C */	b lbl_8013F34C
lbl_8013F2C4:
/* 8013F2C4 0013C0C4  28 00 00 05 */	cmplwi r0, 5
/* 8013F2C8 0013C0C8  40 82 00 84 */	bne lbl_8013F34C
/* 8013F2CC 0013C0CC  38 E0 00 1B */	li r7, 0x1b
/* 8013F2D0 0013C0D0  48 00 00 7C */	b lbl_8013F34C
/* 8013F2D4 0013C0D4  38 E0 00 0B */	li r7, 0xb
/* 8013F2D8 0013C0D8  48 00 00 74 */	b lbl_8013F34C
/* 8013F2DC 0013C0DC  38 E0 00 0C */	li r7, 0xc
/* 8013F2E0 0013C0E0  48 00 00 6C */	b lbl_8013F34C
/* 8013F2E4 0013C0E4  80 06 00 54 */	lwz r0, 0x54(r6)
/* 8013F2E8 0013C0E8  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8013F2EC 0013C0EC  41 82 00 0C */	beq lbl_8013F2F8
/* 8013F2F0 0013C0F0  38 E0 00 11 */	li r7, 0x11
/* 8013F2F4 0013C0F4  48 00 00 58 */	b lbl_8013F34C
lbl_8013F2F8:
/* 8013F2F8 0013C0F8  38 E0 00 10 */	li r7, 0x10
/* 8013F2FC 0013C0FC  48 00 00 50 */	b lbl_8013F34C
/* 8013F300 0013C100  38 E0 00 04 */	li r7, 4
/* 8013F304 0013C104  48 00 00 48 */	b lbl_8013F34C
/* 8013F308 0013C108  80 06 00 50 */	lwz r0, 0x50(r6)
/* 8013F30C 0013C10C  28 00 00 00 */	cmplwi r0, 0
/* 8013F310 0013C110  40 82 00 0C */	bne lbl_8013F31C
/* 8013F314 0013C114  38 E0 00 12 */	li r7, 0x12
/* 8013F318 0013C118  48 00 00 34 */	b lbl_8013F34C
lbl_8013F31C:
/* 8013F31C 0013C11C  28 00 00 01 */	cmplwi r0, 1
/* 8013F320 0013C120  40 82 00 18 */	bne lbl_8013F338
/* 8013F324 0013C124  80 06 00 54 */	lwz r0, 0x54(r6)
/* 8013F328 0013C128  28 00 00 00 */	cmplwi r0, 0
/* 8013F32C 0013C12C  40 82 00 0C */	bne lbl_8013F338
/* 8013F330 0013C130  38 E0 00 13 */	li r7, 0x13
/* 8013F334 0013C134  48 00 00 18 */	b lbl_8013F34C
lbl_8013F338:
/* 8013F338 0013C138  38 E0 00 14 */	li r7, 0x14
/* 8013F33C 0013C13C  48 00 00 10 */	b lbl_8013F34C
/* 8013F340 0013C140  38 E0 00 09 */	li r7, 9
/* 8013F344 0013C144  48 00 00 08 */	b lbl_8013F34C
lbl_8013F348:
/* 8013F348 0013C148  38 E0 00 01 */	li r7, 1
lbl_8013F34C:
/* 8013F34C 0013C14C  2C 07 FF FF */	cmpwi r7, -1
/* 8013F350 0013C150  40 81 00 14 */	ble lbl_8013F364
/* 8013F354 0013C154  3C 60 80 2A */	lis r3, g_hash_bossanim@ha
/* 8013F358 0013C158  54 E0 10 3A */	slwi r0, r7, 2
/* 8013F35C 0013C15C  38 63 92 68 */	addi r3, r3, g_hash_bossanim@l
/* 8013F360 0013C160  7D 03 00 2E */	lwzx r8, r3, r0
lbl_8013F364:
/* 8013F364 0013C164  7D 03 43 78 */	mr r3, r8
/* 8013F368 0013C168  4E 80 00 20 */	blr 

SpringRender__FP15SandyLimbSpring:
/* 8013F36C 0013C16C  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8013F370 0013C170  7C 08 02 A6 */	mflr r0
/* 8013F374 0013C174  90 01 00 74 */	stw r0, 0x74(r1)
/* 8013F378 0013C178  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8013F37C 0013C17C  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 8013F380 0013C180  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 8013F384 0013C184  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 8013F388 0013C188  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 8013F38C 0013C18C  F3 A1 00 48 */	psq_st f29, 72(r1), 0, qr0
/* 8013F390 0013C190  DB 81 00 30 */	stfd f28, 0x30(r1)
/* 8013F394 0013C194  F3 81 00 38 */	psq_st f28, 56(r1), 0, qr0
/* 8013F398 0013C198  DB 61 00 20 */	stfd f27, 0x20(r1)
/* 8013F39C 0013C19C  F3 61 00 28 */	psq_st f27, 40(r1), 0, qr0
/* 8013F3A0 0013C1A0  BF 41 00 08 */	stmw r26, 8(r1)
/* 8013F3A4 0013C1A4  7C 7A 1B 78 */	mr r26, r3
/* 8013F3A8 0013C1A8  3C 60 80 3C */	lis r3, gRenderArr@ha
/* 8013F3AC 0013C1AC  80 9A 00 10 */	lwz r4, 0x10(r26)
/* 8013F3B0 0013C1B0  38 63 36 60 */	addi r3, r3, gRenderArr@l
/* 8013F3B4 0013C1B4  C0 82 A5 10 */	lfs f4, _1063-_SDA2_BASE_(r2)
/* 8013F3B8 0013C1B8  3B E3 07 80 */	addi r31, r3, 0x780
/* 8013F3BC 0013C1BC  C3 E4 00 3C */	lfs f31, 0x3c(r4)
/* 8013F3C0 0013C1C0  3B C0 00 00 */	li r30, 0
/* 8013F3C4 0013C1C4  C3 C4 00 30 */	lfs f30, 0x30(r4)
/* 8013F3C8 0013C1C8  3B A0 00 00 */	li r29, 0
/* 8013F3CC 0013C1CC  C0 02 A5 64 */	lfs f0, _1379-_SDA2_BASE_(r2)
/* 8013F3D0 0013C1D0  3B 80 00 00 */	li r28, 0
/* 8013F3D4 0013C1D4  EF BE F8 28 */	fsubs f29, f30, f31
/* 8013F3D8 0013C1D8  C0 62 A5 48 */	lfs f3, _1192-_SDA2_BASE_(r2)
/* 8013F3DC 0013C1DC  C0 42 A5 1C */	lfs f2, _1066-_SDA2_BASE_(r2)
/* 8013F3E0 0013C1E0  3B 60 00 04 */	li r27, 4
/* 8013F3E4 0013C1E4  C0 22 A5 60 */	lfs f1, _1378-_SDA2_BASE_(r2)
/* 8013F3E8 0013C1E8  38 60 00 01 */	li r3, 1
/* 8013F3EC 0013C1EC  EC 84 07 72 */	fmuls f4, f4, f29
/* 8013F3F0 0013C1F0  C3 84 00 34 */	lfs f28, 0x34(r4)
/* 8013F3F4 0013C1F4  38 80 00 00 */	li r4, 0
/* 8013F3F8 0013C1F8  EC 00 01 32 */	fmuls f0, f0, f4
/* 8013F3FC 0013C1FC  EC 42 01 32 */	fmuls f2, f2, f4
/* 8013F400 0013C200  EC 00 18 24 */	fdivs f0, f0, f3
/* 8013F404 0013C204  EC 43 00 B2 */	fmuls f2, f3, f2
/* 8013F408 0013C208  EC 01 00 28 */	fsubs f0, f1, f0
/* 8013F40C 0013C20C  EF 62 00 24 */	fdivs f27, f2, f0
/* 8013F410 0013C210  48 0F 03 CD */	bl RwRenderStateSet
/* 8013F414 0013C214  FC 80 F8 90 */	fmr f4, f31
/* 8013F418 0013C218  3C 60 80 33 */	lis r3, sSinTable@ha
/* 8013F41C 0013C21C  C0 A2 A4 C8 */	lfs f5, __830-_SDA2_BASE_(r2)
/* 8013F420 0013C220  7F E5 FB 78 */	mr r5, r31
/* 8013F424 0013C224  38 83 80 00 */	addi r4, r3, sSinTable@l
lbl_8013F428:
/* 8013F428 0013C228  2C 1D 00 00 */	cmpwi r29, 0
/* 8013F42C 0013C22C  40 82 00 18 */	bne lbl_8013F444
/* 8013F430 0013C230  FC 04 F0 40 */	fcmpo cr0, f4, f30
/* 8013F434 0013C234  40 81 00 10 */	ble lbl_8013F444
/* 8013F438 0013C238  FC 80 F0 90 */	fmr f4, f30
/* 8013F43C 0013C23C  C0 A2 A4 CC */	lfs f5, __831-_SDA2_BASE_(r2)
/* 8013F440 0013C240  3B A0 00 01 */	li r29, 1
lbl_8013F444:
/* 8013F444 0013C244  57 80 10 3A */	slwi r0, r28, 2
/* 8013F448 0013C248  C0 02 A5 68 */	lfs f0, _1380-_SDA2_BASE_(r2)
/* 8013F44C 0013C24C  7C 64 04 2E */	lfsx f3, r4, r0
/* 8013F450 0013C250  57 60 10 3A */	slwi r0, r27, 2
/* 8013F454 0013C254  7C 44 04 2E */	lfsx f2, r4, r0
/* 8013F458 0013C258  38 60 00 80 */	li r3, 0x80
/* 8013F45C 0013C25C  EC 20 00 F2 */	fmuls f1, f0, f3
/* 8013F460 0013C260  D0 85 00 00 */	stfs f4, 0(r5)
/* 8013F464 0013C264  EC 00 00 B2 */	fmuls f0, f0, f2
/* 8013F468 0013C268  38 00 00 FF */	li r0, 0xff
/* 8013F46C 0013C26C  3B DE 00 02 */	addi r30, r30, 2
/* 8013F470 0013C270  EC 3C 00 72 */	fmuls f1, f28, f1
/* 8013F474 0013C274  EC 1C 00 32 */	fmuls f0, f28, f0
/* 8013F478 0013C278  D0 25 00 04 */	stfs f1, 4(r5)
/* 8013F47C 0013C27C  D0 05 00 08 */	stfs f0, 8(r5)
/* 8013F480 0013C280  C0 02 A5 6C */	lfs f0, _1381-_SDA2_BASE_(r2)
/* 8013F484 0013C284  EC 20 00 F2 */	fmuls f1, f0, f3
/* 8013F488 0013C288  D0 85 00 24 */	stfs f4, 0x24(r5)
/* 8013F48C 0013C28C  EC 00 00 B2 */	fmuls f0, f0, f2
/* 8013F490 0013C290  EC 3C 00 72 */	fmuls f1, f28, f1
/* 8013F494 0013C294  EC 1C 00 32 */	fmuls f0, f28, f0
/* 8013F498 0013C298  D0 25 00 28 */	stfs f1, 0x28(r5)
/* 8013F49C 0013C29C  D0 05 00 2C */	stfs f0, 0x2c(r5)
/* 8013F4A0 0013C2A0  98 65 00 18 */	stb r3, 0x18(r5)
/* 8013F4A4 0013C2A4  98 65 00 19 */	stb r3, 0x19(r5)
/* 8013F4A8 0013C2A8  98 65 00 1A */	stb r3, 0x1a(r5)
/* 8013F4AC 0013C2AC  98 05 00 1B */	stb r0, 0x1b(r5)
/* 8013F4B0 0013C2B0  98 65 00 3C */	stb r3, 0x3c(r5)
/* 8013F4B4 0013C2B4  98 65 00 3D */	stb r3, 0x3d(r5)
/* 8013F4B8 0013C2B8  98 65 00 3E */	stb r3, 0x3e(r5)
/* 8013F4BC 0013C2BC  98 05 00 3F */	stb r0, 0x3f(r5)
/* 8013F4C0 0013C2C0  38 A5 00 48 */	addi r5, r5, 0x48
/* 8013F4C4 0013C2C4  C0 3A 00 00 */	lfs f1, 0(r26)
/* 8013F4C8 0013C2C8  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013F4CC 0013C2CC  EC 21 28 28 */	fsubs f1, f1, f5
/* 8013F4D0 0013C2D0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013F4D4 0013C2D4  40 80 00 08 */	bge lbl_8013F4DC
/* 8013F4D8 0013C2D8  FC 20 08 50 */	fneg f1, f1
lbl_8013F4DC:
/* 8013F4DC 0013C2DC  C0 02 A5 48 */	lfs f0, _1192-_SDA2_BASE_(r2)
/* 8013F4E0 0013C2E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013F4E4 0013C2E4  40 81 00 0C */	ble lbl_8013F4F0
/* 8013F4E8 0013C2E8  C0 42 A4 CC */	lfs f2, __831-_SDA2_BASE_(r2)
/* 8013F4EC 0013C2EC  48 00 00 0C */	b lbl_8013F4F8
lbl_8013F4F0:
/* 8013F4F0 0013C2F0  C0 02 A4 F4 */	lfs f0, _1035-_SDA2_BASE_(r2)
/* 8013F4F4 0013C2F4  EC 40 00 72 */	fmuls f2, f0, f1
lbl_8013F4F8:
/* 8013F4F8 0013C2F8  C0 3A 00 08 */	lfs f1, 8(r26)
/* 8013F4FC 0013C2FC  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013F500 0013C300  EC 21 28 28 */	fsubs f1, f1, f5
/* 8013F504 0013C304  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013F508 0013C308  40 80 00 08 */	bge lbl_8013F510
/* 8013F50C 0013C30C  FC 20 08 50 */	fneg f1, f1
lbl_8013F510:
/* 8013F510 0013C310  C0 02 A5 48 */	lfs f0, _1192-_SDA2_BASE_(r2)
/* 8013F514 0013C314  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013F518 0013C318  40 81 00 0C */	ble lbl_8013F524
/* 8013F51C 0013C31C  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 8013F520 0013C320  48 00 00 0C */	b lbl_8013F52C
lbl_8013F524:
/* 8013F524 0013C324  C0 02 A4 F4 */	lfs f0, _1035-_SDA2_BASE_(r2)
/* 8013F528 0013C328  EC 00 00 72 */	fmuls f0, f0, f1
lbl_8013F52C:
/* 8013F52C 0013C32C  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8013F530 0013C330  40 80 00 08 */	bge lbl_8013F538
/* 8013F534 0013C334  FC 40 00 90 */	fmr f2, f0
lbl_8013F538:
/* 8013F538 0013C338  C0 02 A5 48 */	lfs f0, _1192-_SDA2_BASE_(r2)
/* 8013F53C 0013C33C  EC 00 00 B2 */	fmuls f0, f0, f2
/* 8013F540 0013C340  FC 00 D8 40 */	fcmpo cr0, f0, f27
/* 8013F544 0013C344  40 80 00 08 */	bge lbl_8013F54C
/* 8013F548 0013C348  FC 00 D8 90 */	fmr f0, f27
lbl_8013F54C:
/* 8013F54C 0013C34C  EC 84 00 2A */	fadds f4, f4, f0
/* 8013F550 0013C350  3B 9C 00 01 */	addi r28, r28, 1
/* 8013F554 0013C354  2C 1C 00 10 */	cmpwi r28, 0x10
/* 8013F558 0013C358  EC 04 F8 28 */	fsubs f0, f4, f31
/* 8013F55C 0013C35C  EC A0 E8 24 */	fdivs f5, f0, f29
/* 8013F560 0013C360  40 82 00 08 */	bne lbl_8013F568
/* 8013F564 0013C364  3B 80 00 00 */	li r28, 0
lbl_8013F568:
/* 8013F568 0013C368  3B 7B 00 01 */	addi r27, r27, 1
/* 8013F56C 0013C36C  2C 1B 00 10 */	cmpwi r27, 0x10
/* 8013F570 0013C370  40 82 00 08 */	bne lbl_8013F578
/* 8013F574 0013C374  3B 60 00 00 */	li r27, 0
lbl_8013F578:
/* 8013F578 0013C378  2C 1D 00 00 */	cmpwi r29, 0
/* 8013F57C 0013C37C  41 82 FE AC */	beq lbl_8013F428
/* 8013F580 0013C380  80 BA 00 10 */	lwz r5, 0x10(r26)
/* 8013F584 0013C384  7F E3 FB 78 */	mr r3, r31
/* 8013F588 0013C388  7F C4 F3 78 */	mr r4, r30
/* 8013F58C 0013C38C  38 C0 00 1A */	li r6, 0x1a
/* 8013F590 0013C390  80 A5 00 48 */	lwz r5, 0x48(r5)
/* 8013F594 0013C394  48 10 C6 E1 */	bl RwIm3DTransform
/* 8013F598 0013C398  38 60 00 04 */	li r3, 4
/* 8013F59C 0013C39C  48 10 C9 A5 */	bl RwIm3DRenderPrimitive
/* 8013F5A0 0013C3A0  48 10 C7 B5 */	bl RwIm3DEnd
/* 8013F5A4 0013C3A4  C0 3A 00 00 */	lfs f1, 0(r26)
/* 8013F5A8 0013C3A8  C0 1A 00 04 */	lfs f0, 4(r26)
/* 8013F5AC 0013C3AC  EC 01 00 2A */	fadds f0, f1, f0
/* 8013F5B0 0013C3B0  D0 1A 00 00 */	stfs f0, 0(r26)
/* 8013F5B4 0013C3B4  C0 5A 00 00 */	lfs f2, 0(r26)
/* 8013F5B8 0013C3B8  C0 02 A5 68 */	lfs f0, _1380-_SDA2_BASE_(r2)
/* 8013F5BC 0013C3BC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8013F5C0 0013C3C0  40 81 00 14 */	ble lbl_8013F5D4
/* 8013F5C4 0013C3C4  C0 3A 00 04 */	lfs f1, 4(r26)
/* 8013F5C8 0013C3C8  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013F5CC 0013C3CC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013F5D0 0013C3D0  41 81 00 20 */	bgt lbl_8013F5F0
lbl_8013F5D4:
/* 8013F5D4 0013C3D4  C0 02 A5 48 */	lfs f0, _1192-_SDA2_BASE_(r2)
/* 8013F5D8 0013C3D8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8013F5DC 0013C3DC  40 80 00 34 */	bge lbl_8013F610
/* 8013F5E0 0013C3E0  C0 3A 00 04 */	lfs f1, 4(r26)
/* 8013F5E4 0013C3E4  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013F5E8 0013C3E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013F5EC 0013C3EC  40 80 00 24 */	bge lbl_8013F610
lbl_8013F5F0:
/* 8013F5F0 0013C3F0  C0 1A 00 04 */	lfs f0, 4(r26)
/* 8013F5F4 0013C3F4  FC 00 00 50 */	fneg f0, f0
/* 8013F5F8 0013C3F8  D0 1A 00 04 */	stfs f0, 4(r26)
/* 8013F5FC 0013C3FC  C0 42 A5 10 */	lfs f2, _1063-_SDA2_BASE_(r2)
/* 8013F600 0013C400  C0 3A 00 04 */	lfs f1, 4(r26)
/* 8013F604 0013C404  C0 1A 00 00 */	lfs f0, 0(r26)
/* 8013F608 0013C408  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8013F60C 0013C40C  D0 1A 00 00 */	stfs f0, 0(r26)
lbl_8013F610:
/* 8013F610 0013C410  C0 3A 00 08 */	lfs f1, 8(r26)
/* 8013F614 0013C414  C0 1A 00 0C */	lfs f0, 0xc(r26)
/* 8013F618 0013C418  EC 01 00 2A */	fadds f0, f1, f0
/* 8013F61C 0013C41C  D0 1A 00 08 */	stfs f0, 8(r26)
/* 8013F620 0013C420  C0 5A 00 08 */	lfs f2, 8(r26)
/* 8013F624 0013C424  C0 02 A5 68 */	lfs f0, _1380-_SDA2_BASE_(r2)
/* 8013F628 0013C428  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8013F62C 0013C42C  40 81 00 14 */	ble lbl_8013F640
/* 8013F630 0013C430  C0 3A 00 0C */	lfs f1, 0xc(r26)
/* 8013F634 0013C434  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013F638 0013C438  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013F63C 0013C43C  41 81 00 20 */	bgt lbl_8013F65C
lbl_8013F640:
/* 8013F640 0013C440  C0 02 A5 48 */	lfs f0, _1192-_SDA2_BASE_(r2)
/* 8013F644 0013C444  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8013F648 0013C448  40 80 00 34 */	bge lbl_8013F67C
/* 8013F64C 0013C44C  C0 3A 00 0C */	lfs f1, 0xc(r26)
/* 8013F650 0013C450  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013F654 0013C454  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013F658 0013C458  40 80 00 24 */	bge lbl_8013F67C
lbl_8013F65C:
/* 8013F65C 0013C45C  C0 1A 00 0C */	lfs f0, 0xc(r26)
/* 8013F660 0013C460  FC 00 00 50 */	fneg f0, f0
/* 8013F664 0013C464  D0 1A 00 0C */	stfs f0, 0xc(r26)
/* 8013F668 0013C468  C0 42 A5 10 */	lfs f2, _1063-_SDA2_BASE_(r2)
/* 8013F66C 0013C46C  C0 3A 00 0C */	lfs f1, 0xc(r26)
/* 8013F670 0013C470  C0 1A 00 08 */	lfs f0, 8(r26)
/* 8013F674 0013C474  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8013F678 0013C478  D0 1A 00 08 */	stfs f0, 8(r26)
lbl_8013F67C:
/* 8013F67C 0013C47C  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 8013F680 0013C480  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8013F684 0013C484  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 8013F688 0013C488  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 8013F68C 0013C48C  E3 A1 00 48 */	psq_l f29, 72(r1), 0, qr0
/* 8013F690 0013C490  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 8013F694 0013C494  E3 81 00 38 */	psq_l f28, 56(r1), 0, qr0
/* 8013F698 0013C498  CB 81 00 30 */	lfd f28, 0x30(r1)
/* 8013F69C 0013C49C  E3 61 00 28 */	psq_l f27, 40(r1), 0, qr0
/* 8013F6A0 0013C4A0  CB 61 00 20 */	lfd f27, 0x20(r1)
/* 8013F6A4 0013C4A4  BB 41 00 08 */	lmw r26, 8(r1)
/* 8013F6A8 0013C4A8  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8013F6AC 0013C4AC  7C 08 03 A6 */	mtlr r0
/* 8013F6B0 0013C4B0  38 21 00 70 */	addi r1, r1, 0x70
/* 8013F6B4 0013C4B4  4E 80 00 20 */	blr 

zNPCBSandy_BossDamageEffect__FP14xModelInstanceUi:
/* 8013F6D8 0013C4D8  28 04 00 00 */	cmplwi r4, 0
/* 8013F6DC 0013C4DC  41 82 00 D4 */	beq lbl_8013F7B0
/* 8013F6E0 0013C4E0  3C 80 80 33 */	lis r4, BDErecord@ha
/* 8013F6E4 0013C4E4  38 A0 00 00 */	li r5, 0
/* 8013F6E8 0013C4E8  38 84 81 14 */	addi r4, r4, BDErecord@l
/* 8013F6EC 0013C4EC  80 04 01 04 */	lwz r0, 0x104(r4)
/* 8013F6F0 0013C4F0  7C 00 18 40 */	cmplw r0, r3
/* 8013F6F4 0013C4F4  41 82 00 40 */	beq lbl_8013F734
/* 8013F6F8 0013C4F8  38 84 01 08 */	addi r4, r4, 0x108
/* 8013F6FC 0013C4FC  38 A0 00 01 */	li r5, 1
/* 8013F700 0013C500  80 04 01 04 */	lwz r0, 0x104(r4)
/* 8013F704 0013C504  7C 00 18 40 */	cmplw r0, r3
/* 8013F708 0013C508  41 82 00 2C */	beq lbl_8013F734
/* 8013F70C 0013C50C  80 04 02 0C */	lwz r0, 0x20c(r4)
/* 8013F710 0013C510  38 A0 00 02 */	li r5, 2
/* 8013F714 0013C514  38 84 01 08 */	addi r4, r4, 0x108
/* 8013F718 0013C518  7C 00 18 40 */	cmplw r0, r3
/* 8013F71C 0013C51C  41 82 00 18 */	beq lbl_8013F734
/* 8013F720 0013C520  80 04 02 0C */	lwz r0, 0x20c(r4)
/* 8013F724 0013C524  38 A0 00 03 */	li r5, 3
/* 8013F728 0013C528  7C 00 18 40 */	cmplw r0, r3
/* 8013F72C 0013C52C  41 82 00 08 */	beq lbl_8013F734
/* 8013F730 0013C530  38 A0 00 04 */	li r5, 4
lbl_8013F734:
/* 8013F734 0013C534  2C 05 00 04 */	cmpwi r5, 4
/* 8013F738 0013C538  4C 80 00 20 */	bgelr 
/* 8013F73C 0013C53C  1C 85 01 08 */	mulli r4, r5, 0x108
/* 8013F740 0013C540  3C 60 80 33 */	lis r3, BDErecord@ha
/* 8013F744 0013C544  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013F748 0013C548  38 E0 00 00 */	li r7, 0
/* 8013F74C 0013C54C  38 03 81 14 */	addi r0, r3, BDErecord@l
/* 8013F750 0013C550  7C C0 22 14 */	add r6, r0, r4
/* 8013F754 0013C554  80 66 01 04 */	lwz r3, 0x104(r6)
/* 8013F758 0013C558  7C C5 33 78 */	mr r5, r6
/* 8013F75C 0013C55C  38 80 00 00 */	li r4, 0
/* 8013F760 0013C560  D0 06 01 00 */	stfs f0, 0x100(r6)
/* 8013F764 0013C564  38 C6 01 04 */	addi r6, r6, 0x104
/* 8013F768 0013C568  48 00 00 34 */	b lbl_8013F79C
lbl_8013F76C:
/* 8013F76C 0013C56C  7C 05 24 2E */	lfsx f0, r5, r4
/* 8013F770 0013C570  38 E7 00 02 */	addi r7, r7, 2
/* 8013F774 0013C574  54 E0 10 3A */	slwi r0, r7, 2
/* 8013F778 0013C578  38 84 00 04 */	addi r4, r4, 4
/* 8013F77C 0013C57C  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 8013F780 0013C580  38 E7 00 01 */	addi r7, r7, 1
/* 8013F784 0013C584  7C 05 24 2E */	lfsx f0, r5, r4
/* 8013F788 0013C588  38 84 00 08 */	addi r4, r4, 8
/* 8013F78C 0013C58C  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 8013F790 0013C590  7C 05 04 2E */	lfsx f0, r5, r0
/* 8013F794 0013C594  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 8013F798 0013C598  80 63 00 00 */	lwz r3, 0(r3)
lbl_8013F79C:
/* 8013F79C 0013C59C  28 03 00 00 */	cmplwi r3, 0
/* 8013F7A0 0013C5A0  40 82 FF CC */	bne lbl_8013F76C
/* 8013F7A4 0013C5A4  38 00 00 00 */	li r0, 0
/* 8013F7A8 0013C5A8  90 06 00 00 */	stw r0, 0(r6)
/* 8013F7AC 0013C5AC  4E 80 00 20 */	blr 
lbl_8013F7B0:
/* 8013F7B0 0013C5B0  3C 80 80 33 */	lis r4, BDErecord@ha
/* 8013F7B4 0013C5B4  38 A0 00 00 */	li r5, 0
/* 8013F7B8 0013C5B8  38 84 81 14 */	addi r4, r4, BDErecord@l
/* 8013F7BC 0013C5BC  80 04 01 04 */	lwz r0, 0x104(r4)
/* 8013F7C0 0013C5C0  28 00 00 00 */	cmplwi r0, 0
/* 8013F7C4 0013C5C4  41 82 00 40 */	beq lbl_8013F804
/* 8013F7C8 0013C5C8  38 84 01 08 */	addi r4, r4, 0x108
/* 8013F7CC 0013C5CC  38 A0 00 01 */	li r5, 1
/* 8013F7D0 0013C5D0  80 04 01 04 */	lwz r0, 0x104(r4)
/* 8013F7D4 0013C5D4  28 00 00 00 */	cmplwi r0, 0
/* 8013F7D8 0013C5D8  41 82 00 2C */	beq lbl_8013F804
/* 8013F7DC 0013C5DC  80 04 02 0C */	lwz r0, 0x20c(r4)
/* 8013F7E0 0013C5E0  38 A0 00 02 */	li r5, 2
/* 8013F7E4 0013C5E4  38 84 01 08 */	addi r4, r4, 0x108
/* 8013F7E8 0013C5E8  28 00 00 00 */	cmplwi r0, 0
/* 8013F7EC 0013C5EC  41 82 00 18 */	beq lbl_8013F804
/* 8013F7F0 0013C5F0  80 04 02 0C */	lwz r0, 0x20c(r4)
/* 8013F7F4 0013C5F4  38 A0 00 03 */	li r5, 3
/* 8013F7F8 0013C5F8  28 00 00 00 */	cmplwi r0, 0
/* 8013F7FC 0013C5FC  41 82 00 08 */	beq lbl_8013F804
/* 8013F800 0013C600  38 A0 00 04 */	li r5, 4
lbl_8013F804:
/* 8013F804 0013C604  2C 05 00 04 */	cmpwi r5, 4
/* 8013F808 0013C608  4C 80 00 20 */	bgelr 
/* 8013F80C 0013C60C  1C C5 01 08 */	mulli r6, r5, 0x108
/* 8013F810 0013C610  3C A0 80 33 */	lis r5, BDErecord@ha
/* 8013F814 0013C614  38 80 00 00 */	li r4, 0
/* 8013F818 0013C618  38 05 81 14 */	addi r0, r5, BDErecord@l
/* 8013F81C 0013C61C  7C A0 32 14 */	add r5, r0, r6
/* 8013F820 0013C620  90 65 01 04 */	stw r3, 0x104(r5)
/* 8013F824 0013C624  C0 02 A5 14 */	lfs f0, _1064-_SDA2_BASE_(r2)
/* 8013F828 0013C628  D0 05 01 00 */	stfs f0, 0x100(r5)
/* 8013F82C 0013C62C  48 00 00 44 */	b lbl_8013F870
lbl_8013F830:
/* 8013F830 0013C630  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 8013F834 0013C634  7C 05 25 2E */	stfsx f0, r5, r4
/* 8013F838 0013C638  38 84 00 04 */	addi r4, r4, 4
/* 8013F83C 0013C63C  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 8013F840 0013C640  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 8013F844 0013C644  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 8013F848 0013C648  7C 05 25 2E */	stfsx f0, r5, r4
/* 8013F84C 0013C64C  38 84 00 04 */	addi r4, r4, 4
/* 8013F850 0013C650  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013F854 0013C654  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 8013F858 0013C658  C0 03 00 20 */	lfs f0, 0x20(r3)
/* 8013F85C 0013C65C  7C 05 25 2E */	stfsx f0, r5, r4
/* 8013F860 0013C660  38 84 00 04 */	addi r4, r4, 4
/* 8013F864 0013C664  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013F868 0013C668  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 8013F86C 0013C66C  80 63 00 00 */	lwz r3, 0(r3)
lbl_8013F870:
/* 8013F870 0013C670  28 03 00 00 */	cmplwi r3, 0
/* 8013F874 0013C674  40 82 FF BC */	bne lbl_8013F830
/* 8013F878 0013C678  4E 80 00 20 */	blr 

zNPCBSandy_BossDamageEffect_Update__Ff:
/* 8013F87C 0013C67C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8013F880 0013C680  7C 08 02 A6 */	mflr r0
/* 8013F884 0013C684  90 01 00 54 */	stw r0, 0x54(r1)
/* 8013F888 0013C688  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 8013F88C 0013C68C  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8013F890 0013C690  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 8013F894 0013C694  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 8013F898 0013C698  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 8013F89C 0013C69C  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 8013F8A0 0013C6A0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8013F8A4 0013C6A4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8013F8A8 0013C6A8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8013F8AC 0013C6AC  FF E0 08 90 */	fmr f31, f1
/* 8013F8B0 0013C6B0  3C 60 80 33 */	lis r3, BDErecord@ha
/* 8013F8B4 0013C6B4  3B E3 81 14 */	addi r31, r3, BDErecord@l
/* 8013F8B8 0013C6B8  3B C0 00 00 */	li r30, 0
lbl_8013F8BC:
/* 8013F8BC 0013C6BC  80 7F 01 04 */	lwz r3, 0x104(r31)
/* 8013F8C0 0013C6C0  28 03 00 00 */	cmplwi r3, 0
/* 8013F8C4 0013C6C4  41 82 00 B4 */	beq lbl_8013F978
/* 8013F8C8 0013C6C8  C0 3F 01 00 */	lfs f1, 0x100(r31)
/* 8013F8CC 0013C6CC  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013F8D0 0013C6D0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013F8D4 0013C6D4  40 81 00 A4 */	ble lbl_8013F978
/* 8013F8D8 0013C6D8  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 8013F8DC 0013C6DC  40 80 00 0C */	bge lbl_8013F8E8
/* 8013F8E0 0013C6E0  38 80 00 01 */	li r4, 1
/* 8013F8E4 0013C6E4  4B FF FD F5 */	bl zNPCBSandy_BossDamageEffect__FP14xModelInstanceUi
lbl_8013F8E8:
/* 8013F8E8 0013C6E8  C0 3F 01 00 */	lfs f1, 0x100(r31)
/* 8013F8EC 0013C6EC  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013F8F0 0013C6F0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013F8F4 0013C6F4  40 81 00 84 */	ble lbl_8013F978
/* 8013F8F8 0013C6F8  EC 01 F8 28 */	fsubs f0, f1, f31
/* 8013F8FC 0013C6FC  D0 1F 01 00 */	stfs f0, 0x100(r31)
/* 8013F900 0013C700  C0 3F 01 00 */	lfs f1, 0x100(r31)
/* 8013F904 0013C704  C0 02 A5 14 */	lfs f0, _1064-_SDA2_BASE_(r2)
/* 8013F908 0013C708  C0 82 A4 CC */	lfs f4, __831-_SDA2_BASE_(r2)
/* 8013F90C 0013C70C  EC 41 00 24 */	fdivs f2, f1, f0
/* 8013F910 0013C710  C0 22 A4 DC */	lfs f1, _1029-_SDA2_BASE_(r2)
/* 8013F914 0013C714  C0 62 A5 70 */	lfs f3, _1462-_SDA2_BASE_(r2)
/* 8013F918 0013C718  C0 02 A5 7C */	lfs f0, _1465-_SDA2_BASE_(r2)
/* 8013F91C 0013C71C  EC 84 10 28 */	fsubs f4, f4, f2
/* 8013F920 0013C720  EC 41 01 32 */	fmuls f2, f1, f4
/* 8013F924 0013C724  EC 20 01 32 */	fmuls f1, f0, f4
/* 8013F928 0013C728  EF C3 00 B2 */	fmuls f30, f3, f2
/* 8013F92C 0013C72C  4B F8 55 65 */	bl icos__Ff
/* 8013F930 0013C730  C0 42 A5 58 */	lfs f2, _1196-_SDA2_BASE_(r2)
/* 8013F934 0013C734  4B EF 02 E1 */	bl xpow__Fff
/* 8013F938 0013C738  C0 42 A5 78 */	lfs f2, _1464-_SDA2_BASE_(r2)
/* 8013F93C 0013C73C  C0 02 A5 74 */	lfs f0, _1463-_SDA2_BASE_(r2)
/* 8013F940 0013C740  83 BF 01 04 */	lwz r29, 0x104(r31)
/* 8013F944 0013C744  EF A2 00 7A */	fmadds f29, f2, f1, f0
/* 8013F948 0013C748  48 00 00 28 */	b lbl_8013F970
lbl_8013F94C:
/* 8013F94C 0013C74C  FC 20 F0 90 */	fmr f1, f30
/* 8013F950 0013C750  4B F8 55 41 */	bl icos__Ff
/* 8013F954 0013C754  C0 42 A4 D8 */	lfs f2, _864-_SDA2_BASE_(r2)
/* 8013F958 0013C758  C0 02 A5 80 */	lfs f0, _1466-_SDA2_BASE_(r2)
/* 8013F95C 0013C75C  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8013F960 0013C760  D0 1D 00 18 */	stfs f0, 0x18(r29)
/* 8013F964 0013C764  D3 BD 00 1C */	stfs f29, 0x1c(r29)
/* 8013F968 0013C768  D3 BD 00 20 */	stfs f29, 0x20(r29)
/* 8013F96C 0013C76C  83 BD 00 00 */	lwz r29, 0(r29)
lbl_8013F970:
/* 8013F970 0013C770  28 1D 00 00 */	cmplwi r29, 0
/* 8013F974 0013C774  40 82 FF D8 */	bne lbl_8013F94C
lbl_8013F978:
/* 8013F978 0013C778  3B DE 00 01 */	addi r30, r30, 1
/* 8013F97C 0013C77C  3B FF 01 08 */	addi r31, r31, 0x108
/* 8013F980 0013C780  2C 1E 00 04 */	cmpwi r30, 4
/* 8013F984 0013C784  41 80 FF 38 */	blt lbl_8013F8BC
/* 8013F988 0013C788  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 8013F98C 0013C78C  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8013F990 0013C790  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 8013F994 0013C794  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 8013F998 0013C798  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 8013F99C 0013C79C  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 8013F9A0 0013C7A0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8013F9A4 0013C7A4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8013F9A8 0013C7A8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8013F9AC 0013C7AC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8013F9B0 0013C7B0  7C 08 03 A6 */	mtlr r0
/* 8013F9B4 0013C7B4  38 21 00 50 */	addi r1, r1, 0x50
/* 8013F9B8 0013C7B8  4E 80 00 20 */	blr 

Render__10zNPCBSandyFv:
/* 8013F9BC 0013C7BC  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8013F9C0 0013C7C0  7C 08 02 A6 */	mflr r0
/* 8013F9C4 0013C7C4  3C 80 80 33 */	lis r4, sSinTable@ha
/* 8013F9C8 0013C7C8  90 01 00 64 */	stw r0, 0x64(r1)
/* 8013F9CC 0013C7CC  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8013F9D0 0013C7D0  3B E4 80 00 */	addi r31, r4, sSinTable@l
/* 8013F9D4 0013C7D4  93 C1 00 58 */	stw r30, 0x58(r1)
/* 8013F9D8 0013C7D8  7C 7E 1B 78 */	mr r30, r3
/* 8013F9DC 0013C7DC  93 A1 00 54 */	stw r29, 0x54(r1)
/* 8013F9E0 0013C7E0  80 63 02 B4 */	lwz r3, 0x2b4(r3)
/* 8013F9E4 0013C7E4  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8013F9E8 0013C7E8  38 63 00 88 */	addi r3, r3, 0x88
/* 8013F9EC 0013C7EC  4B F8 89 29 */	bl iModelSphereCull__FP7xSphere
/* 8013F9F0 0013C7F0  2C 03 00 00 */	cmpwi r3, 0
/* 8013F9F4 0013C7F4  41 82 00 28 */	beq lbl_8013FA1C
/* 8013F9F8 0013C7F8  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8013F9FC 0013C7FC  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FA00 0013C800  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FA04 0013C804  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FA08 0013C808  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FA0C 0013C80C  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 8013FA10 0013C810  54 00 04 3C */	rlwinm r0, r0, 0, 0x10, 0x1e
/* 8013FA14 0013C814  B0 03 00 44 */	sth r0, 0x44(r3)
/* 8013FA18 0013C818  48 00 00 24 */	b lbl_8013FA3C
lbl_8013FA1C:
/* 8013FA1C 0013C81C  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8013FA20 0013C820  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FA24 0013C824  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FA28 0013C828  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FA2C 0013C82C  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FA30 0013C830  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 8013FA34 0013C834  60 00 00 01 */	ori r0, r0, 1
/* 8013FA38 0013C838  B0 03 00 44 */	sth r0, 0x44(r3)
lbl_8013FA3C:
/* 8013FA3C 0013C83C  80 7E 02 B4 */	lwz r3, 0x2b4(r30)
/* 8013FA40 0013C840  80 63 00 30 */	lwz r3, 0x30(r3)
/* 8013FA44 0013C844  38 63 00 88 */	addi r3, r3, 0x88
/* 8013FA48 0013C848  4B F8 88 CD */	bl iModelSphereCull__FP7xSphere
/* 8013FA4C 0013C84C  2C 03 00 00 */	cmpwi r3, 0
/* 8013FA50 0013C850  41 82 00 24 */	beq lbl_8013FA74
/* 8013FA54 0013C854  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8013FA58 0013C858  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FA5C 0013C85C  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FA60 0013C860  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FA64 0013C864  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 8013FA68 0013C868  54 00 04 3C */	rlwinm r0, r0, 0, 0x10, 0x1e
/* 8013FA6C 0013C86C  B0 03 00 44 */	sth r0, 0x44(r3)
/* 8013FA70 0013C870  48 00 00 20 */	b lbl_8013FA90
lbl_8013FA74:
/* 8013FA74 0013C874  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8013FA78 0013C878  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FA7C 0013C87C  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FA80 0013C880  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FA84 0013C884  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 8013FA88 0013C888  60 00 00 01 */	ori r0, r0, 1
/* 8013FA8C 0013C88C  B0 03 00 44 */	sth r0, 0x44(r3)
lbl_8013FA90:
/* 8013FA90 0013C890  80 7E 02 B4 */	lwz r3, 0x2b4(r30)
/* 8013FA94 0013C894  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8013FA98 0013C898  38 63 00 88 */	addi r3, r3, 0x88
/* 8013FA9C 0013C89C  4B F8 88 79 */	bl iModelSphereCull__FP7xSphere
/* 8013FAA0 0013C8A0  2C 03 00 00 */	cmpwi r3, 0
/* 8013FAA4 0013C8A4  41 82 00 2C */	beq lbl_8013FAD0
/* 8013FAA8 0013C8A8  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8013FAAC 0013C8AC  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FAB0 0013C8B0  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FAB4 0013C8B4  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FAB8 0013C8B8  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FABC 0013C8BC  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FAC0 0013C8C0  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 8013FAC4 0013C8C4  54 00 04 3C */	rlwinm r0, r0, 0, 0x10, 0x1e
/* 8013FAC8 0013C8C8  B0 03 00 44 */	sth r0, 0x44(r3)
/* 8013FACC 0013C8CC  48 00 00 28 */	b lbl_8013FAF4
lbl_8013FAD0:
/* 8013FAD0 0013C8D0  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8013FAD4 0013C8D4  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FAD8 0013C8D8  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FADC 0013C8DC  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FAE0 0013C8E0  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FAE4 0013C8E4  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FAE8 0013C8E8  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 8013FAEC 0013C8EC  60 00 00 01 */	ori r0, r0, 1
/* 8013FAF0 0013C8F0  B0 03 00 44 */	sth r0, 0x44(r3)
lbl_8013FAF4:
/* 8013FAF4 0013C8F4  80 7E 02 B4 */	lwz r3, 0x2b4(r30)
/* 8013FAF8 0013C8F8  80 63 00 14 */	lwz r3, 0x14(r3)
/* 8013FAFC 0013C8FC  38 63 00 88 */	addi r3, r3, 0x88
/* 8013FB00 0013C900  4B F8 88 15 */	bl iModelSphereCull__FP7xSphere
/* 8013FB04 0013C904  2C 03 00 00 */	cmpwi r3, 0
/* 8013FB08 0013C908  41 82 00 30 */	beq lbl_8013FB38
/* 8013FB0C 0013C90C  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8013FB10 0013C910  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FB14 0013C914  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FB18 0013C918  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FB1C 0013C91C  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FB20 0013C920  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FB24 0013C924  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FB28 0013C928  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 8013FB2C 0013C92C  54 00 04 3C */	rlwinm r0, r0, 0, 0x10, 0x1e
/* 8013FB30 0013C930  B0 03 00 44 */	sth r0, 0x44(r3)
/* 8013FB34 0013C934  48 00 00 2C */	b lbl_8013FB60
lbl_8013FB38:
/* 8013FB38 0013C938  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8013FB3C 0013C93C  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FB40 0013C940  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FB44 0013C944  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FB48 0013C948  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FB4C 0013C94C  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FB50 0013C950  80 63 00 00 */	lwz r3, 0(r3)
/* 8013FB54 0013C954  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 8013FB58 0013C958  60 00 00 01 */	ori r0, r0, 1
/* 8013FB5C 0013C95C  B0 03 00 44 */	sth r0, 0x44(r3)
lbl_8013FB60:
/* 8013FB60 0013C960  7F C3 F3 78 */	mr r3, r30
/* 8013FB64 0013C964  4B ED 99 69 */	bl xEntRender__FP4xEnt
/* 8013FB68 0013C968  80 1E 02 C0 */	lwz r0, 0x2c0(r30)
/* 8013FB6C 0013C96C  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 8013FB70 0013C970  41 82 00 CC */	beq lbl_8013FC3C
/* 8013FB74 0013C974  80 9E 05 5C */	lwz r4, 0x55c(r30)
/* 8013FB78 0013C978  38 60 00 01 */	li r3, 1
/* 8013FB7C 0013C97C  48 0E FC 61 */	bl RwRenderStateSet
/* 8013FB80 0013C980  38 61 00 38 */	addi r3, r1, 0x38
/* 8013FB84 0013C984  38 9E 05 F0 */	addi r4, r30, 0x5f0
/* 8013FB88 0013C988  4B F0 E9 55 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 8013FB8C 0013C98C  3C 60 80 3C */	lis r3, globals@ha
/* 8013FB90 0013C990  3B A1 00 28 */	addi r29, r1, 0x28
/* 8013FB94 0013C994  38 83 05 58 */	addi r4, r3, globals@l
/* 8013FB98 0013C998  7F A3 EB 78 */	mr r3, r29
/* 8013FB9C 0013C99C  38 84 00 34 */	addi r4, r4, 0x34
/* 8013FBA0 0013C9A0  4B F0 E9 3D */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 8013FBA4 0013C9A4  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013FBA8 0013C9A8  7F A3 EB 78 */	mr r3, r29
/* 8013FBAC 0013C9AC  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8013FBB0 0013C9B0  4B EC EA A1 */	bl xVec3Length__FPC5xVec3
/* 8013FBB4 0013C9B4  C0 02 A5 5C */	lfs f0, _1209-_SDA2_BASE_(r2)
/* 8013FBB8 0013C9B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8013FBBC 0013C9BC  40 80 00 1C */	bge lbl_8013FBD8
/* 8013FBC0 0013C9C0  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 8013FBC4 0013C9C4  7F A3 EB 78 */	mr r3, r29
/* 8013FBC8 0013C9C8  C0 62 A4 CC */	lfs f3, __831-_SDA2_BASE_(r2)
/* 8013FBCC 0013C9CC  FC 40 08 90 */	fmr f2, f1
/* 8013FBD0 0013C9D0  4B EC F4 2D */	bl xVec3Init__FP5xVec3fff
/* 8013FBD4 0013C9D4  48 00 00 14 */	b lbl_8013FBE8
lbl_8013FBD8:
/* 8013FBD8 0013C9D8  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 8013FBDC 0013C9DC  7F A3 EB 78 */	mr r3, r29
/* 8013FBE0 0013C9E0  EC 20 08 24 */	fdivs f1, f0, f1
/* 8013FBE4 0013C9E4  4B ED BD 55 */	bl xVec3SMulBy__FP5xVec3f
lbl_8013FBE8:
/* 8013FBE8 0013C9E8  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 8013FBEC 0013C9EC  38 61 00 18 */	addi r3, r1, 0x18
/* 8013FBF0 0013C9F0  C0 42 A4 CC */	lfs f2, __831-_SDA2_BASE_(r2)
/* 8013FBF4 0013C9F4  FC 60 08 90 */	fmr f3, f1
/* 8013FBF8 0013C9F8  4B EC F4 05 */	bl xVec3Init__FP5xVec3fff
/* 8013FBFC 0013C9FC  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8013FC00 0013CA00  38 61 00 08 */	addi r3, r1, 8
/* 8013FC04 0013CA04  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 8013FC08 0013CA08  FC 60 00 50 */	fneg f3, f0
/* 8013FC0C 0013CA0C  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 8013FC10 0013CA10  4B EC F3 ED */	bl xVec3Init__FP5xVec3fff
/* 8013FC14 0013CA14  38 61 00 08 */	addi r3, r1, 8
/* 8013FC18 0013CA18  48 0F 07 71 */	bl RwMatrixUpdate
/* 8013FC1C 0013CA1C  38 7E 05 60 */	addi r3, r30, 0x560
/* 8013FC20 0013CA20  38 A1 00 08 */	addi r5, r1, 8
/* 8013FC24 0013CA24  38 80 00 04 */	li r4, 4
/* 8013FC28 0013CA28  38 C0 00 1B */	li r6, 0x1b
/* 8013FC2C 0013CA2C  48 10 C0 49 */	bl RwIm3DTransform
/* 8013FC30 0013CA30  38 60 00 04 */	li r3, 4
/* 8013FC34 0013CA34  48 10 C3 0D */	bl RwIm3DRenderPrimitive
/* 8013FC38 0013CA38  48 10 C1 1D */	bl RwIm3DEnd
lbl_8013FC3C:
/* 8013FC3C 0013CA3C  38 7F 00 68 */	addi r3, r31, 0x68
/* 8013FC40 0013CA40  80 03 00 10 */	lwz r0, 0x10(r3)
/* 8013FC44 0013CA44  28 00 00 00 */	cmplwi r0, 0
/* 8013FC48 0013CA48  41 82 00 08 */	beq lbl_8013FC50
/* 8013FC4C 0013CA4C  4B FF F7 21 */	bl SpringRender__FP15SandyLimbSpring
lbl_8013FC50:
/* 8013FC50 0013CA50  38 7F 00 7C */	addi r3, r31, 0x7c
/* 8013FC54 0013CA54  80 03 00 10 */	lwz r0, 0x10(r3)
/* 8013FC58 0013CA58  28 00 00 00 */	cmplwi r0, 0
/* 8013FC5C 0013CA5C  41 82 00 08 */	beq lbl_8013FC64
/* 8013FC60 0013CA60  4B FF F7 0D */	bl SpringRender__FP15SandyLimbSpring
lbl_8013FC64:
/* 8013FC64 0013CA64  38 7F 00 40 */	addi r3, r31, 0x40
/* 8013FC68 0013CA68  80 03 00 10 */	lwz r0, 0x10(r3)
/* 8013FC6C 0013CA6C  28 00 00 00 */	cmplwi r0, 0
/* 8013FC70 0013CA70  41 82 00 08 */	beq lbl_8013FC78
/* 8013FC74 0013CA74  4B FF F6 F9 */	bl SpringRender__FP15SandyLimbSpring
lbl_8013FC78:
/* 8013FC78 0013CA78  38 7F 00 54 */	addi r3, r31, 0x54
/* 8013FC7C 0013CA7C  80 03 00 10 */	lwz r0, 0x10(r3)
/* 8013FC80 0013CA80  28 00 00 00 */	cmplwi r0, 0
/* 8013FC84 0013CA84  41 82 00 08 */	beq lbl_8013FC8C
/* 8013FC88 0013CA88  4B FF F6 E5 */	bl SpringRender__FP15SandyLimbSpring
lbl_8013FC8C:
/* 8013FC8C 0013CA8C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8013FC90 0013CA90  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8013FC94 0013CA94  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 8013FC98 0013CA98  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 8013FC9C 0013CA9C  7C 08 03 A6 */	mtlr r0
/* 8013FCA0 0013CAA0  38 21 00 60 */	addi r1, r1, 0x60
/* 8013FCA4 0013CAA4  4E 80 00 20 */	blr 

.global CalcMagnetizeInfo__10zNPCBSandyFv
CalcMagnetizeInfo__10zNPCBSandyFv:
/* 8013FCA8 0013CAA8  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8013FCAC 0013CAAC  7C 08 02 A6 */	mflr r0
/* 8013FCB0 0013CAB0  90 01 00 54 */	stw r0, 0x54(r1)
/* 8013FCB4 0013CAB4  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8013FCB8 0013CAB8  7C 7F 1B 78 */	mr r31, r3
/* 8013FCBC 0013CABC  80 83 07 C4 */	lwz r4, 0x7c4(r3)
/* 8013FCC0 0013CAC0  38 7F 06 0C */	addi r3, r31, 0x60c
/* 8013FCC4 0013CAC4  80 84 00 24 */	lwz r4, 0x24(r4)
/* 8013FCC8 0013CAC8  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8013FCCC 0013CACC  4B EF 2F B9 */	bl xQuatFromMat__FP5xQuatPC7xMat3x3
/* 8013FCD0 0013CAD0  80 9F 07 C4 */	lwz r4, 0x7c4(r31)
/* 8013FCD4 0013CAD4  38 7F 06 28 */	addi r3, r31, 0x628
/* 8013FCD8 0013CAD8  80 84 00 24 */	lwz r4, 0x24(r4)
/* 8013FCDC 0013CADC  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8013FCE0 0013CAE0  38 84 00 30 */	addi r4, r4, 0x30
/* 8013FCE4 0013CAE4  4B F0 E7 F9 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 8013FCE8 0013CAE8  3C 60 80 2A */	lis r3, sBone@ha
/* 8013FCEC 0013CAEC  80 BF 00 24 */	lwz r5, 0x24(r31)
/* 8013FCF0 0013CAF0  38 83 98 C8 */	addi r4, r3, sBone@l
/* 8013FCF4 0013CAF4  80 04 00 04 */	lwz r0, 4(r4)
/* 8013FCF8 0013CAF8  38 61 00 08 */	addi r3, r1, 8
/* 8013FCFC 0013CAFC  80 A5 00 4C */	lwz r5, 0x4c(r5)
/* 8013FD00 0013CB00  54 00 30 32 */	slwi r0, r0, 6
/* 8013FD04 0013CB04  7C 85 02 14 */	add r4, r5, r0
/* 8013FD08 0013CB08  4B EF 2F 11 */	bl xMat4x3Mul__FP7xMat4x3PC7xMat4x3PC7xMat4x3
/* 8013FD0C 0013CB0C  38 7F 05 FC */	addi r3, r31, 0x5fc
/* 8013FD10 0013CB10  38 81 00 08 */	addi r4, r1, 8
/* 8013FD14 0013CB14  4B EF 2F 71 */	bl xQuatFromMat__FP5xQuatPC7xMat3x3
/* 8013FD18 0013CB18  3C 80 80 2A */	lis r4, sBoneOffset@ha
/* 8013FD1C 0013CB1C  38 7F 06 1C */	addi r3, r31, 0x61c
/* 8013FD20 0013CB20  38 A4 99 50 */	addi r5, r4, sBoneOffset@l
/* 8013FD24 0013CB24  38 81 00 08 */	addi r4, r1, 8
/* 8013FD28 0013CB28  38 A5 00 0C */	addi r5, r5, 0xc
/* 8013FD2C 0013CB2C  48 00 68 65 */	bl xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 8013FD30 0013CB30  38 7F 06 1C */	addi r3, r31, 0x61c
/* 8013FD34 0013CB34  38 81 00 38 */	addi r4, r1, 0x38
/* 8013FD38 0013CB38  4B EC EA 1D */	bl xVec3AddTo__FP5xVec3PC5xVec3
/* 8013FD3C 0013CB3C  38 7F 06 1C */	addi r3, r31, 0x61c
/* 8013FD40 0013CB40  38 9F 06 28 */	addi r4, r31, 0x628
/* 8013FD44 0013CB44  4B ED 53 AD */	bl xVec3Dist__FPC5xVec3PC5xVec3
/* 8013FD48 0013CB48  C0 02 A5 48 */	lfs f0, _1192-_SDA2_BASE_(r2)
/* 8013FD4C 0013CB4C  EC 00 00 72 */	fmuls f0, f0, f1
/* 8013FD50 0013CB50  D0 1F 06 34 */	stfs f0, 0x634(r31)
/* 8013FD54 0013CB54  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8013FD58 0013CB58  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8013FD5C 0013CB5C  7C 08 03 A6 */	mtlr r0
/* 8013FD60 0013CB60  38 21 00 50 */	addi r1, r1, 0x50
/* 8013FD64 0013CB64  4E 80 00 20 */	blr 

.global InitFX__10zNPCBSandyFv
InitFX__10zNPCBSandyFv:
/* 8013FD68 0013CB68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013FD6C 0013CB6C  7C 08 02 A6 */	mflr r0
/* 8013FD70 0013CB70  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013FD74 0013CB74  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013FD78 0013CB78  7C 7F 1B 78 */	mr r31, r3
/* 8013FD7C 0013CB7C  38 7F 09 E0 */	addi r3, r31, 0x9e0
/* 8013FD80 0013CB80  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013FD84 0013CB84  D0 1F 0A E0 */	stfs f0, 0xae0(r31)
/* 8013FD88 0013CB88  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8013FD8C 0013CB8C  D0 1F 0A E4 */	stfs f0, 0xae4(r31)
/* 8013FD90 0013CB90  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 8013FD94 0013CB94  D0 1F 0A E8 */	stfs f0, 0xae8(r31)
/* 8013FD98 0013CB98  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 8013FD9C 0013CB9C  D0 1F 0A EC */	stfs f0, 0xaec(r31)
/* 8013FDA0 0013CBA0  80 9F 07 B8 */	lwz r4, 0x7b8(r31)
/* 8013FDA4 0013CBA4  80 84 00 24 */	lwz r4, 0x24(r4)
/* 8013FDA8 0013CBA8  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8013FDAC 0013CBAC  4B EC E7 41 */	bl xMat4x3Copy__FP7xMat4x3PC7xMat4x3
/* 8013FDB0 0013CBB0  80 9F 07 B8 */	lwz r4, 0x7b8(r31)
/* 8013FDB4 0013CBB4  38 7F 0A 20 */	addi r3, r31, 0xa20
/* 8013FDB8 0013CBB8  80 84 00 24 */	lwz r4, 0x24(r4)
/* 8013FDBC 0013CBBC  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8013FDC0 0013CBC0  4B EC E7 2D */	bl xMat4x3Copy__FP7xMat4x3PC7xMat4x3
/* 8013FDC4 0013CBC4  80 9F 07 C0 */	lwz r4, 0x7c0(r31)
/* 8013FDC8 0013CBC8  38 7F 0A 60 */	addi r3, r31, 0xa60
/* 8013FDCC 0013CBCC  80 84 00 24 */	lwz r4, 0x24(r4)
/* 8013FDD0 0013CBD0  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8013FDD4 0013CBD4  4B EC E7 19 */	bl xMat4x3Copy__FP7xMat4x3PC7xMat4x3
/* 8013FDD8 0013CBD8  80 9F 07 C0 */	lwz r4, 0x7c0(r31)
/* 8013FDDC 0013CBDC  38 7F 0A A0 */	addi r3, r31, 0xaa0
/* 8013FDE0 0013CBE0  C0 22 A5 84 */	lfs f1, _1521-_SDA2_BASE_(r2)
/* 8013FDE4 0013CBE4  80 84 00 24 */	lwz r4, 0x24(r4)
/* 8013FDE8 0013CBE8  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8013FDEC 0013CBEC  4B EC B2 A5 */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 8013FDF0 0013CBF0  80 9F 07 C0 */	lwz r4, 0x7c0(r31)
/* 8013FDF4 0013CBF4  38 7F 0A B0 */	addi r3, r31, 0xab0
/* 8013FDF8 0013CBF8  C0 22 A5 88 */	lfs f1, _1522-_SDA2_BASE_(r2)
/* 8013FDFC 0013CBFC  80 84 00 24 */	lwz r4, 0x24(r4)
/* 8013FE00 0013CC00  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8013FE04 0013CC04  38 84 00 20 */	addi r4, r4, 0x20
/* 8013FE08 0013CC08  4B EC B2 89 */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 8013FE0C 0013CC0C  80 9F 07 C0 */	lwz r4, 0x7c0(r31)
/* 8013FE10 0013CC10  38 7F 0A C0 */	addi r3, r31, 0xac0
/* 8013FE14 0013CC14  C0 22 A5 84 */	lfs f1, _1521-_SDA2_BASE_(r2)
/* 8013FE18 0013CC18  80 84 00 24 */	lwz r4, 0x24(r4)
/* 8013FE1C 0013CC1C  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8013FE20 0013CC20  38 84 00 10 */	addi r4, r4, 0x10
/* 8013FE24 0013CC24  4B EC B2 6D */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 8013FE28 0013CC28  80 9F 07 C0 */	lwz r4, 0x7c0(r31)
/* 8013FE2C 0013CC2C  38 7F 0A D0 */	addi r3, r31, 0xad0
/* 8013FE30 0013CC30  80 84 00 24 */	lwz r4, 0x24(r4)
/* 8013FE34 0013CC34  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8013FE38 0013CC38  38 84 00 30 */	addi r4, r4, 0x30
/* 8013FE3C 0013CC3C  4B F0 E6 A1 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 8013FE40 0013CC40  80 9F 07 C0 */	lwz r4, 0x7c0(r31)
/* 8013FE44 0013CC44  38 7F 0A D0 */	addi r3, r31, 0xad0
/* 8013FE48 0013CC48  C0 22 A5 20 */	lfs f1, _1067-_SDA2_BASE_(r2)
/* 8013FE4C 0013CC4C  80 84 00 24 */	lwz r4, 0x24(r4)
/* 8013FE50 0013CC50  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8013FE54 0013CC54  38 84 00 10 */	addi r4, r4, 0x10
/* 8013FE58 0013CC58  4B ED 52 01 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 8013FE5C 0013CC5C  80 9F 07 C0 */	lwz r4, 0x7c0(r31)
/* 8013FE60 0013CC60  38 7F 0A D0 */	addi r3, r31, 0xad0
/* 8013FE64 0013CC64  C0 22 A5 34 */	lfs f1, _1072-_SDA2_BASE_(r2)
/* 8013FE68 0013CC68  80 84 00 24 */	lwz r4, 0x24(r4)
/* 8013FE6C 0013CC6C  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8013FE70 0013CC70  38 84 00 20 */	addi r4, r4, 0x20
/* 8013FE74 0013CC74  4B ED 51 E5 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 8013FE78 0013CC78  C0 22 A5 8C */	lfs f1, _1523-_SDA2_BASE_(r2)
/* 8013FE7C 0013CC7C  38 7F 09 80 */	addi r3, r31, 0x980
/* 8013FE80 0013CC80  C0 42 A5 10 */	lfs f2, _1063-_SDA2_BASE_(r2)
/* 8013FE84 0013CC84  C0 62 A4 C8 */	lfs f3, __830-_SDA2_BASE_(r2)
/* 8013FE88 0013CC88  4B EC F1 75 */	bl xVec3Init__FP5xVec3fff
/* 8013FE8C 0013CC8C  C0 22 A5 10 */	lfs f1, _1063-_SDA2_BASE_(r2)
/* 8013FE90 0013CC90  38 7F 09 8C */	addi r3, r31, 0x98c
/* 8013FE94 0013CC94  C0 62 A4 C8 */	lfs f3, __830-_SDA2_BASE_(r2)
/* 8013FE98 0013CC98  FC 40 08 90 */	fmr f2, f1
/* 8013FE9C 0013CC9C  4B EC F1 61 */	bl xVec3Init__FP5xVec3fff
/* 8013FEA0 0013CCA0  38 00 00 03 */	li r0, 3
/* 8013FEA4 0013CCA4  39 00 00 10 */	li r8, 0x10
/* 8013FEA8 0013CCA8  90 1F 07 F8 */	stw r0, 0x7f8(r31)
/* 8013FEAC 0013CCAC  38 E0 00 00 */	li r7, 0
/* 8013FEB0 0013CCB0  38 C0 00 A0 */	li r6, 0xa0
/* 8013FEB4 0013CCB4  38 A0 00 FF */	li r5, 0xff
/* 8013FEB8 0013CCB8  C0 02 A5 90 */	lfs f0, _1524-_SDA2_BASE_(r2)
/* 8013FEBC 0013CCBC  38 80 00 C8 */	li r4, 0xc8
/* 8013FEC0 0013CCC0  38 00 1C 28 */	li r0, 0x1c28
/* 8013FEC4 0013CCC4  38 7F 09 98 */	addi r3, r31, 0x998
/* 8013FEC8 0013CCC8  D0 1F 07 FC */	stfs f0, 0x7fc(r31)
/* 8013FECC 0013CCCC  C0 02 A5 94 */	lfs f0, _1525-_SDA2_BASE_(r2)
/* 8013FED0 0013CCD0  D0 1F 08 00 */	stfs f0, 0x800(r31)
/* 8013FED4 0013CCD4  C0 02 A5 24 */	lfs f0, _1068-_SDA2_BASE_(r2)
/* 8013FED8 0013CCD8  D0 1F 08 04 */	stfs f0, 0x804(r31)
/* 8013FEDC 0013CCDC  B1 1F 08 10 */	sth r8, 0x810(r31)
/* 8013FEE0 0013CCE0  B0 FF 08 12 */	sth r7, 0x812(r31)
/* 8013FEE4 0013CCE4  C0 02 A4 D8 */	lfs f0, _864-_SDA2_BASE_(r2)
/* 8013FEE8 0013CCE8  D0 1F 08 14 */	stfs f0, 0x814(r31)
/* 8013FEEC 0013CCEC  C0 02 A5 98 */	lfs f0, _1526_0-_SDA2_BASE_(r2)
/* 8013FEF0 0013CCF0  D0 1F 08 18 */	stfs f0, 0x818(r31)
/* 8013FEF4 0013CCF4  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 8013FEF8 0013CCF8  D0 1F 08 1C */	stfs f0, 0x81c(r31)
/* 8013FEFC 0013CCFC  98 DF 08 20 */	stb r6, 0x820(r31)
/* 8013FF00 0013CD00  98 DF 08 21 */	stb r6, 0x821(r31)
/* 8013FF04 0013CD04  98 BF 08 22 */	stb r5, 0x822(r31)
/* 8013FF08 0013CD08  98 9F 08 23 */	stb r4, 0x823(r31)
/* 8013FF0C 0013CD0C  C0 02 A5 9C */	lfs f0, _1527-_SDA2_BASE_(r2)
/* 8013FF10 0013CD10  D0 1F 08 24 */	stfs f0, 0x824(r31)
/* 8013FF14 0013CD14  90 1F 08 28 */	stw r0, 0x828(r31)
/* 8013FF18 0013CD18  C0 22 A5 8C */	lfs f1, _1523-_SDA2_BASE_(r2)
/* 8013FF1C 0013CD1C  C0 42 A5 10 */	lfs f2, _1063-_SDA2_BASE_(r2)
/* 8013FF20 0013CD20  C0 62 A4 C8 */	lfs f3, __830-_SDA2_BASE_(r2)
/* 8013FF24 0013CD24  4B EC F0 D9 */	bl xVec3Init__FP5xVec3fff
/* 8013FF28 0013CD28  C0 22 A5 10 */	lfs f1, _1063-_SDA2_BASE_(r2)
/* 8013FF2C 0013CD2C  38 7F 09 A4 */	addi r3, r31, 0x9a4
/* 8013FF30 0013CD30  C0 62 A4 C8 */	lfs f3, __830-_SDA2_BASE_(r2)
/* 8013FF34 0013CD34  FC 40 08 90 */	fmr f2, f1
/* 8013FF38 0013CD38  4B EC F0 C5 */	bl xVec3Init__FP5xVec3fff
/* 8013FF3C 0013CD3C  38 00 00 03 */	li r0, 3
/* 8013FF40 0013CD40  38 E0 00 10 */	li r7, 0x10
/* 8013FF44 0013CD44  90 1F 08 38 */	stw r0, 0x838(r31)
/* 8013FF48 0013CD48  38 C0 00 00 */	li r6, 0
/* 8013FF4C 0013CD4C  38 A0 00 C8 */	li r5, 0xc8
/* 8013FF50 0013CD50  38 80 00 37 */	li r4, 0x37
/* 8013FF54 0013CD54  C0 02 A5 90 */	lfs f0, _1524-_SDA2_BASE_(r2)
/* 8013FF58 0013CD58  38 00 1C 28 */	li r0, 0x1c28
/* 8013FF5C 0013CD5C  38 7F 09 B0 */	addi r3, r31, 0x9b0
/* 8013FF60 0013CD60  D0 1F 08 3C */	stfs f0, 0x83c(r31)
/* 8013FF64 0013CD64  C0 02 A5 94 */	lfs f0, _1525-_SDA2_BASE_(r2)
/* 8013FF68 0013CD68  D0 1F 08 40 */	stfs f0, 0x840(r31)
/* 8013FF6C 0013CD6C  C0 02 A5 24 */	lfs f0, _1068-_SDA2_BASE_(r2)
/* 8013FF70 0013CD70  D0 1F 08 44 */	stfs f0, 0x844(r31)
/* 8013FF74 0013CD74  B0 FF 08 50 */	sth r7, 0x850(r31)
/* 8013FF78 0013CD78  B0 DF 08 52 */	sth r6, 0x852(r31)
/* 8013FF7C 0013CD7C  C0 02 A4 D8 */	lfs f0, _864-_SDA2_BASE_(r2)
/* 8013FF80 0013CD80  D0 1F 08 54 */	stfs f0, 0x854(r31)
/* 8013FF84 0013CD84  C0 02 A5 98 */	lfs f0, _1526_0-_SDA2_BASE_(r2)
/* 8013FF88 0013CD88  D0 1F 08 58 */	stfs f0, 0x858(r31)
/* 8013FF8C 0013CD8C  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 8013FF90 0013CD90  D0 1F 08 5C */	stfs f0, 0x85c(r31)
/* 8013FF94 0013CD94  98 BF 08 60 */	stb r5, 0x860(r31)
/* 8013FF98 0013CD98  98 BF 08 61 */	stb r5, 0x861(r31)
/* 8013FF9C 0013CD9C  98 9F 08 62 */	stb r4, 0x862(r31)
/* 8013FFA0 0013CDA0  98 BF 08 63 */	stb r5, 0x863(r31)
/* 8013FFA4 0013CDA4  C0 02 A5 9C */	lfs f0, _1527-_SDA2_BASE_(r2)
/* 8013FFA8 0013CDA8  D0 1F 08 64 */	stfs f0, 0x864(r31)
/* 8013FFAC 0013CDAC  90 1F 08 68 */	stw r0, 0x868(r31)
/* 8013FFB0 0013CDB0  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 8013FFB4 0013CDB4  C0 42 A5 10 */	lfs f2, _1063-_SDA2_BASE_(r2)
/* 8013FFB8 0013CDB8  FC 60 08 90 */	fmr f3, f1
/* 8013FFBC 0013CDBC  4B EC F0 41 */	bl xVec3Init__FP5xVec3fff
/* 8013FFC0 0013CDC0  C0 22 A5 A0 */	lfs f1, _1528-_SDA2_BASE_(r2)
/* 8013FFC4 0013CDC4  38 7F 09 BC */	addi r3, r31, 0x9bc
/* 8013FFC8 0013CDC8  C0 42 A5 10 */	lfs f2, _1063-_SDA2_BASE_(r2)
/* 8013FFCC 0013CDCC  C0 62 A4 C8 */	lfs f3, __830-_SDA2_BASE_(r2)
/* 8013FFD0 0013CDD0  4B EC F0 2D */	bl xVec3Init__FP5xVec3fff
/* 8013FFD4 0013CDD4  38 00 00 03 */	li r0, 3
/* 8013FFD8 0013CDD8  39 00 00 08 */	li r8, 8
/* 8013FFDC 0013CDDC  90 1F 08 78 */	stw r0, 0x878(r31)
/* 8013FFE0 0013CDE0  38 E0 00 00 */	li r7, 0
/* 8013FFE4 0013CDE4  38 C0 00 A0 */	li r6, 0xa0
/* 8013FFE8 0013CDE8  38 A0 00 FF */	li r5, 0xff
/* 8013FFEC 0013CDEC  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 8013FFF0 0013CDF0  38 80 00 C8 */	li r4, 0xc8
/* 8013FFF4 0013CDF4  38 00 1C 20 */	li r0, 0x1c20
/* 8013FFF8 0013CDF8  38 7F 09 C8 */	addi r3, r31, 0x9c8
/* 8013FFFC 0013CDFC  D0 1F 08 AC */	stfs f0, 0x8ac(r31)
/* 80140000 0013CE00  C0 02 A4 EC */	lfs f0, _1033-_SDA2_BASE_(r2)
/* 80140004 0013CE04  D0 1F 08 B0 */	stfs f0, 0x8b0(r31)
/* 80140008 0013CE08  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8014000C 0013CE0C  D0 1F 08 B4 */	stfs f0, 0x8b4(r31)
/* 80140010 0013CE10  B1 1F 08 90 */	sth r8, 0x890(r31)
/* 80140014 0013CE14  B0 FF 08 92 */	sth r7, 0x892(r31)
/* 80140018 0013CE18  C0 02 A4 D8 */	lfs f0, _864-_SDA2_BASE_(r2)
/* 8014001C 0013CE1C  D0 1F 08 94 */	stfs f0, 0x894(r31)
/* 80140020 0013CE20  C0 02 A5 A4 */	lfs f0, _1529-_SDA2_BASE_(r2)
/* 80140024 0013CE24  D0 1F 08 98 */	stfs f0, 0x898(r31)
/* 80140028 0013CE28  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 8014002C 0013CE2C  D0 1F 08 9C */	stfs f0, 0x89c(r31)
/* 80140030 0013CE30  98 DF 08 A0 */	stb r6, 0x8a0(r31)
/* 80140034 0013CE34  98 DF 08 A1 */	stb r6, 0x8a1(r31)
/* 80140038 0013CE38  98 BF 08 A2 */	stb r5, 0x8a2(r31)
/* 8014003C 0013CE3C  98 9F 08 A3 */	stb r4, 0x8a3(r31)
/* 80140040 0013CE40  C0 02 A5 A8 */	lfs f0, _1530-_SDA2_BASE_(r2)
/* 80140044 0013CE44  D0 1F 08 A4 */	stfs f0, 0x8a4(r31)
/* 80140048 0013CE48  90 1F 08 A8 */	stw r0, 0x8a8(r31)
/* 8014004C 0013CE4C  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 80140050 0013CE50  C0 42 A5 10 */	lfs f2, _1063-_SDA2_BASE_(r2)
/* 80140054 0013CE54  FC 60 08 90 */	fmr f3, f1
/* 80140058 0013CE58  4B EC EF A5 */	bl xVec3Init__FP5xVec3fff
/* 8014005C 0013CE5C  C0 22 A5 A0 */	lfs f1, _1528-_SDA2_BASE_(r2)
/* 80140060 0013CE60  38 7F 09 D4 */	addi r3, r31, 0x9d4
/* 80140064 0013CE64  C0 42 A5 10 */	lfs f2, _1063-_SDA2_BASE_(r2)
/* 80140068 0013CE68  C0 62 A4 C8 */	lfs f3, __830-_SDA2_BASE_(r2)
/* 8014006C 0013CE6C  4B EC EF 91 */	bl xVec3Init__FP5xVec3fff
/* 80140070 0013CE70  39 40 00 03 */	li r10, 3
/* 80140074 0013CE74  39 20 00 0A */	li r9, 0xa
/* 80140078 0013CE78  91 5F 08 B8 */	stw r10, 0x8b8(r31)
/* 8014007C 0013CE7C  39 00 00 00 */	li r8, 0
/* 80140080 0013CE80  38 E0 00 C8 */	li r7, 0xc8
/* 80140084 0013CE84  38 C0 00 37 */	li r6, 0x37
/* 80140088 0013CE88  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 8014008C 0013CE8C  38 A0 1C 20 */	li r5, 0x1c20
/* 80140090 0013CE90  38 80 00 FF */	li r4, 0xff
/* 80140094 0013CE94  38 60 01 10 */	li r3, 0x110
/* 80140098 0013CE98  D0 1F 08 EC */	stfs f0, 0x8ec(r31)
/* 8014009C 0013CE9C  38 00 00 32 */	li r0, 0x32
/* 801400A0 0013CEA0  C0 02 A4 EC */	lfs f0, _1033-_SDA2_BASE_(r2)
/* 801400A4 0013CEA4  D0 1F 08 F0 */	stfs f0, 0x8f0(r31)
/* 801400A8 0013CEA8  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 801400AC 0013CEAC  D0 1F 08 F4 */	stfs f0, 0x8f4(r31)
/* 801400B0 0013CEB0  B1 3F 08 D0 */	sth r9, 0x8d0(r31)
/* 801400B4 0013CEB4  B1 1F 08 D2 */	sth r8, 0x8d2(r31)
/* 801400B8 0013CEB8  C0 02 A4 D8 */	lfs f0, _864-_SDA2_BASE_(r2)
/* 801400BC 0013CEBC  D0 1F 08 D4 */	stfs f0, 0x8d4(r31)
/* 801400C0 0013CEC0  C0 02 A5 A4 */	lfs f0, _1529-_SDA2_BASE_(r2)
/* 801400C4 0013CEC4  D0 1F 08 D8 */	stfs f0, 0x8d8(r31)
/* 801400C8 0013CEC8  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 801400CC 0013CECC  D0 1F 08 DC */	stfs f0, 0x8dc(r31)
/* 801400D0 0013CED0  98 FF 08 E0 */	stb r7, 0x8e0(r31)
/* 801400D4 0013CED4  98 FF 08 E1 */	stb r7, 0x8e1(r31)
/* 801400D8 0013CED8  98 DF 08 E2 */	stb r6, 0x8e2(r31)
/* 801400DC 0013CEDC  98 FF 08 E3 */	stb r7, 0x8e3(r31)
/* 801400E0 0013CEE0  C0 02 A5 AC */	lfs f0, _1531-_SDA2_BASE_(r2)
/* 801400E4 0013CEE4  D0 1F 08 E4 */	stfs f0, 0x8e4(r31)
/* 801400E8 0013CEE8  90 BF 08 E8 */	stw r5, 0x8e8(r31)
/* 801400EC 0013CEEC  91 5F 08 F8 */	stw r10, 0x8f8(r31)
/* 801400F0 0013CEF0  98 FF 09 20 */	stb r7, 0x920(r31)
/* 801400F4 0013CEF4  98 FF 09 21 */	stb r7, 0x921(r31)
/* 801400F8 0013CEF8  98 FF 09 22 */	stb r7, 0x922(r31)
/* 801400FC 0013CEFC  98 9F 09 23 */	stb r4, 0x923(r31)
/* 80140100 0013CF00  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 80140104 0013CF04  D0 1F 09 14 */	stfs f0, 0x914(r31)
/* 80140108 0013CF08  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 8014010C 0013CF0C  D0 1F 09 1C */	stfs f0, 0x91c(r31)
/* 80140110 0013CF10  90 7F 09 28 */	stw r3, 0x928(r31)
/* 80140114 0013CF14  91 5F 09 38 */	stw r10, 0x938(r31)
/* 80140118 0013CF18  98 1F 09 60 */	stb r0, 0x960(r31)
/* 8014011C 0013CF1C  98 1F 09 61 */	stb r0, 0x961(r31)
/* 80140120 0013CF20  98 FF 09 62 */	stb r7, 0x962(r31)
/* 80140124 0013CF24  98 9F 09 63 */	stb r4, 0x963(r31)
/* 80140128 0013CF28  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 8014012C 0013CF2C  D0 1F 09 54 */	stfs f0, 0x954(r31)
/* 80140130 0013CF30  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 80140134 0013CF34  D0 1F 09 5C */	stfs f0, 0x95c(r31)
/* 80140138 0013CF38  90 7F 09 68 */	stw r3, 0x968(r31)
/* 8014013C 0013CF3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80140140 0013CF40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80140144 0013CF44  7C 08 03 A6 */	mtlr r0
/* 80140148 0013CF48  38 21 00 10 */	addi r1, r1, 0x10
/* 8014014C 0013CF4C  4E 80 00 20 */	blr 

.global UpdateFX__10zNPCBSandyFf
UpdateFX__10zNPCBSandyFf:
/* 80140150 0013CF50  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 80140154 0013CF54  7C 08 02 A6 */	mflr r0
/* 80140158 0013CF58  90 01 00 94 */	stw r0, 0x94(r1)
/* 8014015C 0013CF5C  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 80140160 0013CF60  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 80140164 0013CF64  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 80140168 0013CF68  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 8014016C 0013CF6C  BF 21 00 54 */	stmw r25, 0x54(r1)
/* 80140170 0013CF70  7C 7F 1B 78 */	mr r31, r3
/* 80140174 0013CF74  80 63 07 BC */	lwz r3, 0x7bc(r3)
/* 80140178 0013CF78  FF E0 08 90 */	fmr f31, f1
/* 8014017C 0013CF7C  88 03 00 18 */	lbz r0, 0x18(r3)
/* 80140180 0013CF80  54 04 07 FF */	clrlwi. r4, r0, 0x1f
/* 80140184 0013CF84  40 82 00 14 */	bne lbl_80140198
/* 80140188 0013CF88  80 7F 07 C0 */	lwz r3, 0x7c0(r31)
/* 8014018C 0013CF8C  88 03 00 18 */	lbz r0, 0x18(r3)
/* 80140190 0013CF90  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80140194 0013CF94  41 82 01 74 */	beq lbl_80140308
lbl_80140198:
/* 80140198 0013CF98  C0 02 A4 D0 */	lfs f0, _842-_SDA2_BASE_(r2)
/* 8014019C 0013CF9C  7C 83 00 34 */	cntlzw r3, r4
/* 801401A0 0013CFA0  54 60 10 30 */	rlwinm r0, r3, 2, 0, 0x18
/* 801401A4 0013CFA4  7F FE FB 78 */	mr r30, r31
/* 801401A8 0013CFA8  EF C0 07 F2 */	fmuls f30, f0, f31
/* 801401AC 0013CFAC  54 7B D9 7E */	srwi r27, r3, 5
/* 801401B0 0013CFB0  7F BF 02 14 */	add r29, r31, r0
/* 801401B4 0013CFB4  3B 40 00 00 */	li r26, 0
lbl_801401B8:
/* 801401B8 0013CFB8  C0 1E 0A E8 */	lfs f0, 0xae8(r30)
/* 801401BC 0013CFBC  EC 00 F0 2A */	fadds f0, f0, f30
/* 801401C0 0013CFC0  D0 1E 0A E8 */	stfs f0, 0xae8(r30)
/* 801401C4 0013CFC4  C0 3E 0A E8 */	lfs f1, 0xae8(r30)
/* 801401C8 0013CFC8  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 801401CC 0013CFCC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801401D0 0013CFD0  40 81 00 08 */	ble lbl_801401D8
/* 801401D4 0013CFD4  D0 1E 0A E8 */	stfs f0, 0xae8(r30)
lbl_801401D8:
/* 801401D8 0013CFD8  2C 1A 00 01 */	cmpwi r26, 1
/* 801401DC 0013CFDC  40 82 00 0C */	bne lbl_801401E8
/* 801401E0 0013CFE0  2C 1B 00 00 */	cmpwi r27, 0
/* 801401E4 0013CFE4  41 82 01 24 */	beq lbl_80140308
lbl_801401E8:
/* 801401E8 0013CFE8  C0 1E 0A E0 */	lfs f0, 0xae0(r30)
/* 801401EC 0013CFEC  EC 00 F8 28 */	fsubs f0, f0, f31
/* 801401F0 0013CFF0  D0 1E 0A E0 */	stfs f0, 0xae0(r30)
/* 801401F4 0013CFF4  C0 3E 0A E0 */	lfs f1, 0xae0(r30)
/* 801401F8 0013CFF8  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 801401FC 0013CFFC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80140200 0013D000  40 80 00 F4 */	bge lbl_801402F4
/* 80140204 0013D004  4B EF 0A 85 */	bl xurand__Fv
/* 80140208 0013D008  C0 1E 0A E8 */	lfs f0, 0xae8(r30)
/* 8014020C 0013D00C  EC 00 00 72 */	fmuls f0, f0, f1
/* 80140210 0013D010  D0 1E 0A E0 */	stfs f0, 0xae0(r30)
/* 80140214 0013D014  4B EF 0A 55 */	bl xrand__Fv
/* 80140218 0013D018  54 79 9F BE */	rlwinm r25, r3, 0x13, 0x1e, 0x1f
/* 8014021C 0013D01C  4B EF 0A 6D */	bl xurand__Fv
/* 80140220 0013D020  C0 02 A4 DC */	lfs f0, _1029-_SDA2_BASE_(r2)
/* 80140224 0013D024  38 61 00 20 */	addi r3, r1, 0x20
/* 80140228 0013D028  EC 20 00 72 */	fmuls f1, f0, f1
/* 8014022C 0013D02C  4B EF 22 B1 */	bl xMat3x3RotY__FP7xMat3x3f
/* 80140230 0013D030  1C 19 00 18 */	mulli r0, r25, 0x18
/* 80140234 0013D034  38 61 00 14 */	addi r3, r1, 0x14
/* 80140238 0013D038  38 81 00 20 */	addi r4, r1, 0x20
/* 8014023C 0013D03C  7F 9F 02 14 */	add r28, r31, r0
/* 80140240 0013D040  38 BC 09 80 */	addi r5, r28, 0x980
/* 80140244 0013D044  48 00 63 4D */	bl xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 80140248 0013D048  38 61 00 14 */	addi r3, r1, 0x14
/* 8014024C 0013D04C  38 9D 09 E0 */	addi r4, r29, 0x9e0
/* 80140250 0013D050  7C 65 1B 78 */	mr r5, r3
/* 80140254 0013D054  48 00 63 3D */	bl xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 80140258 0013D058  38 61 00 14 */	addi r3, r1, 0x14
/* 8014025C 0013D05C  38 9D 0A 10 */	addi r4, r29, 0xa10
/* 80140260 0013D060  4B EC E4 F5 */	bl xVec3AddTo__FP5xVec3PC5xVec3
/* 80140264 0013D064  38 61 00 08 */	addi r3, r1, 8
/* 80140268 0013D068  38 81 00 20 */	addi r4, r1, 0x20
/* 8014026C 0013D06C  38 BC 09 8C */	addi r5, r28, 0x98c
/* 80140270 0013D070  48 00 63 21 */	bl xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 80140274 0013D074  38 61 00 08 */	addi r3, r1, 8
/* 80140278 0013D078  38 9D 09 E0 */	addi r4, r29, 0x9e0
/* 8014027C 0013D07C  7C 65 1B 78 */	mr r5, r3
/* 80140280 0013D080  48 00 63 11 */	bl xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 80140284 0013D084  38 61 00 08 */	addi r3, r1, 8
/* 80140288 0013D088  38 9D 0A 10 */	addi r4, r29, 0xa10
/* 8014028C 0013D08C  4B EC E4 C9 */	bl xVec3AddTo__FP5xVec3PC5xVec3
/* 80140290 0013D090  57 20 30 32 */	slwi r0, r25, 6
/* 80140294 0013D094  38 61 00 14 */	addi r3, r1, 0x14
/* 80140298 0013D098  7C 9F 02 14 */	add r4, r31, r0
/* 8014029C 0013D09C  2C 1B 00 01 */	cmpwi r27, 1
/* 801402A0 0013D0A0  90 64 08 08 */	stw r3, 0x808(r4)
/* 801402A4 0013D0A4  38 01 00 08 */	addi r0, r1, 8
/* 801402A8 0013D0A8  90 04 08 0C */	stw r0, 0x80c(r4)
/* 801402AC 0013D0AC  40 82 00 28 */	bne lbl_801402D4
/* 801402B0 0013D0B0  2C 1A 00 01 */	cmpwi r26, 1
/* 801402B4 0013D0B4  40 82 00 20 */	bne lbl_801402D4
/* 801402B8 0013D0B8  C0 24 08 18 */	lfs f1, 0x818(r4)
/* 801402BC 0013D0BC  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 801402C0 0013D0C0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801402C4 0013D0C4  40 80 00 28 */	bge lbl_801402EC
/* 801402C8 0013D0C8  FC 00 08 50 */	fneg f0, f1
/* 801402CC 0013D0CC  D0 04 08 18 */	stfs f0, 0x818(r4)
/* 801402D0 0013D0D0  48 00 00 1C */	b lbl_801402EC
lbl_801402D4:
/* 801402D4 0013D0D4  C0 24 08 18 */	lfs f1, 0x818(r4)
/* 801402D8 0013D0D8  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 801402DC 0013D0DC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801402E0 0013D0E0  40 81 00 0C */	ble lbl_801402EC
/* 801402E4 0013D0E4  FC 00 08 50 */	fneg f0, f1
/* 801402E8 0013D0E8  D0 04 08 18 */	stfs f0, 0x818(r4)
lbl_801402EC:
/* 801402EC 0013D0EC  38 64 07 F8 */	addi r3, r4, 0x7f8
/* 801402F0 0013D0F0  4B F5 F6 81 */	bl zLightningAdd__FP16_tagLightningAdd
lbl_801402F4:
/* 801402F4 0013D0F4  3B 5A 00 01 */	addi r26, r26, 1
/* 801402F8 0013D0F8  3B BD 00 40 */	addi r29, r29, 0x40
/* 801402FC 0013D0FC  2C 1A 00 02 */	cmpwi r26, 2
/* 80140300 0013D100  3B DE 00 04 */	addi r30, r30, 4
/* 80140304 0013D104  41 80 FE B4 */	blt lbl_801401B8
lbl_80140308:
/* 80140308 0013D108  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 8014030C 0013D10C  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 80140310 0013D110  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 80140314 0013D114  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 80140318 0013D118  BB 21 00 54 */	lmw r25, 0x54(r1)
/* 8014031C 0013D11C  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80140320 0013D120  7C 08 03 A6 */	mtlr r0
/* 80140324 0013D124  38 21 00 90 */	addi r1, r1, 0x90
/* 80140328 0013D128  4E 80 00 20 */	blr 

UpdateSandyBossCam__FP10zNPCBSandyf:
/* 8014032C 0013D12C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80140330 0013D130  7C 08 02 A6 */	mflr r0
/* 80140334 0013D134  90 01 00 34 */	stw r0, 0x34(r1)
/* 80140338 0013D138  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8014033C 0013D13C  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 80140340 0013D140  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80140344 0013D144  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80140348 0013D148  FF E0 08 90 */	fmr f31, f1
/* 8014034C 0013D14C  7C 7F 1B 78 */	mr r31, r3
/* 80140350 0013D150  3B C0 00 00 */	li r30, 0
/* 80140354 0013D154  4B F1 1D CD */	bl zCameraIsTrackingDisabled__Fv
/* 80140358 0013D158  54 60 07 39 */	rlwinm. r0, r3, 0, 0x1c, 0x1c
/* 8014035C 0013D15C  40 82 00 08 */	bne lbl_80140364
/* 80140360 0013D160  3B C0 00 01 */	li r30, 1
lbl_80140364:
/* 80140364 0013D164  38 60 00 08 */	li r3, 8
/* 80140368 0013D168  4B F1 1D 99 */	bl zCameraDisableTracking__F17camera_owner_enum
/* 8014036C 0013D16C  2C 1E 00 00 */	cmpwi r30, 0
/* 80140370 0013D170  41 82 00 14 */	beq lbl_80140384
/* 80140374 0013D174  3C 80 80 3C */	lis r4, globals@ha
/* 80140378 0013D178  38 7F 0D 64 */	addi r3, r31, 0xd64
/* 8014037C 0013D17C  38 84 05 58 */	addi r4, r4, globals@l
/* 80140380 0013D180  4B EC DB 35 */	bl start__13xBinaryCameraFR7xCamera
lbl_80140384:
/* 80140384 0013D184  80 7F 02 C0 */	lwz r3, 0x2c0(r31)
/* 80140388 0013D188  54 60 06 73 */	rlwinm. r0, r3, 0, 0x19, 0x19
/* 8014038C 0013D18C  41 82 00 90 */	beq lbl_8014041C
/* 80140390 0013D190  54 60 04 A5 */	rlwinm. r0, r3, 0, 0x12, 0x12
/* 80140394 0013D194  40 82 00 14 */	bne lbl_801403A8
/* 80140398 0013D198  3C 80 80 3C */	lis r4, globals@ha
/* 8014039C 0013D19C  38 7F 0D C8 */	addi r3, r31, 0xdc8
/* 801403A0 0013D1A0  38 84 05 58 */	addi r4, r4, globals@l
/* 801403A4 0013D1A4  4B EC DB 11 */	bl start__13xBinaryCameraFR7xCamera
lbl_801403A8:
/* 801403A8 0013D1A8  3C 80 80 3C */	lis r4, globals@ha
/* 801403AC 0013D1AC  38 7F 0D C8 */	addi r3, r31, 0xdc8
/* 801403B0 0013D1B0  38 A4 05 58 */	addi r5, r4, globals@l
/* 801403B4 0013D1B4  38 81 00 08 */	addi r4, r1, 8
/* 801403B8 0013D1B8  80 A5 07 04 */	lwz r5, 0x704(r5)
/* 801403BC 0013D1BC  80 A5 00 4C */	lwz r5, 0x4c(r5)
/* 801403C0 0013D1C0  C0 05 00 30 */	lfs f0, 0x30(r5)
/* 801403C4 0013D1C4  D0 01 00 08 */	stfs f0, 8(r1)
/* 801403C8 0013D1C8  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 801403CC 0013D1CC  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 801403D0 0013D1D0  C0 05 00 38 */	lfs f0, 0x38(r5)
/* 801403D4 0013D1D4  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 801403D8 0013D1D8  80 AD 96 98 */	lwz r5, sCamSubTarget-_SDA_BASE_(r13)
/* 801403DC 0013D1DC  C0 22 A5 10 */	lfs f1, _1063-_SDA2_BASE_(r2)
/* 801403E0 0013D1E0  48 00 61 A1 */	bl set_targets__13xBinaryCameraFRC5xVec3RC5xVec3f
/* 801403E4 0013D1E4  80 1F 02 C0 */	lwz r0, 0x2c0(r31)
/* 801403E8 0013D1E8  54 00 04 63 */	rlwinm. r0, r0, 0, 0x11, 0x11
/* 801403EC 0013D1EC  41 82 00 20 */	beq lbl_8014040C
/* 801403F0 0013D1F0  C0 22 A4 F4 */	lfs f1, _1035-_SDA2_BASE_(r2)
/* 801403F4 0013D1F4  38 7F 0D C8 */	addi r3, r31, 0xdc8
/* 801403F8 0013D1F8  4B EC DB 0D */	bl update__13xBinaryCameraFf
/* 801403FC 0013D1FC  80 1F 02 C0 */	lwz r0, 0x2c0(r31)
/* 80140400 0013D200  54 00 04 A0 */	rlwinm r0, r0, 0, 0x12, 0x10
/* 80140404 0013D204  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 80140408 0013D208  48 00 00 84 */	b lbl_8014048C
lbl_8014040C:
/* 8014040C 0013D20C  FC 20 F8 90 */	fmr f1, f31
/* 80140410 0013D210  38 7F 0D C8 */	addi r3, r31, 0xdc8
/* 80140414 0013D214  4B EC DA F1 */	bl update__13xBinaryCameraFf
/* 80140418 0013D218  48 00 00 74 */	b lbl_8014048C
lbl_8014041C:
/* 8014041C 0013D21C  54 60 04 A5 */	rlwinm. r0, r3, 0, 0x12, 0x12
/* 80140420 0013D220  41 82 00 14 */	beq lbl_80140434
/* 80140424 0013D224  3C 80 80 3C */	lis r4, globals@ha
/* 80140428 0013D228  38 7F 0D 64 */	addi r3, r31, 0xd64
/* 8014042C 0013D22C  38 84 05 58 */	addi r4, r4, globals@l
/* 80140430 0013D230  4B EC DA 85 */	bl start__13xBinaryCameraFR7xCamera
lbl_80140434:
/* 80140434 0013D234  3C 60 80 3C */	lis r3, globals@ha
/* 80140438 0013D238  80 AD 96 98 */	lwz r5, sCamSubTarget-_SDA_BASE_(r13)
/* 8014043C 0013D23C  38 63 05 58 */	addi r3, r3, globals@l
/* 80140440 0013D240  C0 22 A5 10 */	lfs f1, _1063-_SDA2_BASE_(r2)
/* 80140444 0013D244  80 83 07 04 */	lwz r4, 0x704(r3)
/* 80140448 0013D248  38 7F 0D 64 */	addi r3, r31, 0xd64
/* 8014044C 0013D24C  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80140450 0013D250  38 84 00 30 */	addi r4, r4, 0x30
/* 80140454 0013D254  48 00 61 2D */	bl set_targets__13xBinaryCameraFRC5xVec3RC5xVec3f
/* 80140458 0013D258  80 1F 02 C0 */	lwz r0, 0x2c0(r31)
/* 8014045C 0013D25C  54 00 04 63 */	rlwinm. r0, r0, 0, 0x11, 0x11
/* 80140460 0013D260  41 82 00 20 */	beq lbl_80140480
/* 80140464 0013D264  C0 22 A4 F4 */	lfs f1, _1035-_SDA2_BASE_(r2)
/* 80140468 0013D268  38 7F 0D 64 */	addi r3, r31, 0xd64
/* 8014046C 0013D26C  4B EC DA 99 */	bl update__13xBinaryCameraFf
/* 80140470 0013D270  80 1F 02 C0 */	lwz r0, 0x2c0(r31)
/* 80140474 0013D274  54 00 04 A0 */	rlwinm r0, r0, 0, 0x12, 0x10
/* 80140478 0013D278  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 8014047C 0013D27C  48 00 00 10 */	b lbl_8014048C
lbl_80140480:
/* 80140480 0013D280  FC 20 F8 90 */	fmr f1, f31
/* 80140484 0013D284  38 7F 0D 64 */	addi r3, r31, 0xd64
/* 80140488 0013D288  4B EC DA 7D */	bl update__13xBinaryCameraFf
lbl_8014048C:
/* 8014048C 0013D28C  80 7F 02 C0 */	lwz r3, 0x2c0(r31)
/* 80140490 0013D290  54 60 06 73 */	rlwinm. r0, r3, 0, 0x19, 0x19
/* 80140494 0013D294  41 82 00 10 */	beq lbl_801404A4
/* 80140498 0013D298  60 60 20 00 */	ori r0, r3, 0x2000
/* 8014049C 0013D29C  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 801404A0 0013D2A0  48 00 00 0C */	b lbl_801404AC
lbl_801404A4:
/* 801404A4 0013D2A4  54 60 04 E2 */	rlwinm r0, r3, 0, 0x13, 0x11
/* 801404A8 0013D2A8  90 1F 02 C0 */	stw r0, 0x2c0(r31)
lbl_801404AC:
/* 801404AC 0013D2AC  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 801404B0 0013D2B0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801404B4 0013D2B4  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 801404B8 0013D2B8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801404BC 0013D2BC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801404C0 0013D2C0  7C 08 03 A6 */	mtlr r0
/* 801404C4 0013D2C4  38 21 00 30 */	addi r1, r1, 0x30
/* 801404C8 0013D2C8  4E 80 00 20 */	blr 

GetBonePos__FP5xVec3P7xMat4x3iP5xVec3:
/* 801404CC 0013D2CC  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 801404D0 0013D2D0  7C 08 02 A6 */	mflr r0
/* 801404D4 0013D2D4  2C 05 00 00 */	cmpwi r5, 0
/* 801404D8 0013D2D8  90 01 00 64 */	stw r0, 0x64(r1)
/* 801404DC 0013D2DC  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 801404E0 0013D2E0  7C DF 33 78 */	mr r31, r6
/* 801404E4 0013D2E4  93 C1 00 58 */	stw r30, 0x58(r1)
/* 801404E8 0013D2E8  7C 9E 23 78 */	mr r30, r4
/* 801404EC 0013D2EC  93 A1 00 54 */	stw r29, 0x54(r1)
/* 801404F0 0013D2F0  7C 7D 1B 78 */	mr r29, r3
/* 801404F4 0013D2F4  40 82 00 1C */	bne lbl_80140510
/* 801404F8 0013D2F8  7F E5 FB 78 */	mr r5, r31
/* 801404FC 0013D2FC  48 00 60 95 */	bl xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 80140500 0013D300  7F A3 EB 78 */	mr r3, r29
/* 80140504 0013D304  38 9E 00 30 */	addi r4, r30, 0x30
/* 80140508 0013D308  4B EC E2 4D */	bl xVec3AddTo__FP5xVec3PC5xVec3
/* 8014050C 0013D30C  48 00 00 4C */	b lbl_80140558
lbl_80140510:
/* 80140510 0013D310  54 A0 30 32 */	slwi r0, r5, 6
/* 80140514 0013D314  7F C5 F3 78 */	mr r5, r30
/* 80140518 0013D318  38 61 00 08 */	addi r3, r1, 8
/* 8014051C 0013D31C  7C 9E 02 14 */	add r4, r30, r0
/* 80140520 0013D320  4B EF 26 F9 */	bl xMat4x3Mul__FP7xMat4x3PC7xMat4x3PC7xMat4x3
/* 80140524 0013D324  28 1F 00 00 */	cmplwi r31, 0
/* 80140528 0013D328  41 82 00 24 */	beq lbl_8014054C
/* 8014052C 0013D32C  7F A3 EB 78 */	mr r3, r29
/* 80140530 0013D330  7F E5 FB 78 */	mr r5, r31
/* 80140534 0013D334  38 81 00 08 */	addi r4, r1, 8
/* 80140538 0013D338  48 00 60 59 */	bl xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 8014053C 0013D33C  7F A3 EB 78 */	mr r3, r29
/* 80140540 0013D340  38 81 00 38 */	addi r4, r1, 0x38
/* 80140544 0013D344  4B EC E2 11 */	bl xVec3AddTo__FP5xVec3PC5xVec3
/* 80140548 0013D348  48 00 00 10 */	b lbl_80140558
lbl_8014054C:
/* 8014054C 0013D34C  7F A3 EB 78 */	mr r3, r29
/* 80140550 0013D350  38 81 00 38 */	addi r4, r1, 0x38
/* 80140554 0013D354  4B F0 DF 89 */	bl xVec3Copy__FP5xVec3PC5xVec3
lbl_80140558:
/* 80140558 0013D358  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8014055C 0013D35C  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 80140560 0013D360  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 80140564 0013D364  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 80140568 0013D368  7C 08 03 A6 */	mtlr r0
/* 8014056C 0013D36C  38 21 00 60 */	addi r1, r1, 0x60
/* 80140570 0013D370  4E 80 00 20 */	blr 

MakeOBBFor__FiiP4xEntP7xMat4x3:
/* 80140574 0013D374  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80140578 0013D378  7C 08 02 A6 */	mflr r0
/* 8014057C 0013D37C  90 01 00 54 */	stw r0, 0x54(r1)
/* 80140580 0013D380  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80140584 0013D384  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 80140588 0013D388  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8014058C 0013D38C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80140590 0013D390  93 A1 00 34 */	stw r29, 0x34(r1)
/* 80140594 0013D394  3D 20 80 2A */	lis r9, sBone@ha
/* 80140598 0013D398  3C E0 80 2A */	lis r7, sBoneOffset@ha
/* 8014059C 0013D39C  1D 03 00 0C */	mulli r8, r3, 0xc
/* 801405A0 0013D3A0  54 6A 10 3A */	slwi r10, r3, 2
/* 801405A4 0013D3A4  38 69 98 C8 */	addi r3, r9, sBone@l
/* 801405A8 0013D3A8  7C BE 2B 78 */	mr r30, r5
/* 801405AC 0013D3AC  7C A3 50 2E */	lwzx r5, r3, r10
/* 801405B0 0013D3B0  7C DF 33 78 */	mr r31, r6
/* 801405B4 0013D3B4  38 07 99 50 */	addi r0, r7, sBoneOffset@l
/* 801405B8 0013D3B8  7C 9D 23 78 */	mr r29, r4
/* 801405BC 0013D3BC  7F E4 FB 78 */	mr r4, r31
/* 801405C0 0013D3C0  38 61 00 20 */	addi r3, r1, 0x20
/* 801405C4 0013D3C4  7C C0 42 14 */	add r6, r0, r8
/* 801405C8 0013D3C8  4B FF FF 05 */	bl GetBonePos__FP5xVec3P7xMat4x3iP5xVec3
/* 801405CC 0013D3CC  3C 80 80 2A */	lis r4, sBone@ha
/* 801405D0 0013D3D0  3C 60 80 2A */	lis r3, sBoneOffset@ha
/* 801405D4 0013D3D4  1C DD 00 0C */	mulli r6, r29, 0xc
/* 801405D8 0013D3D8  57 A5 10 3A */	slwi r5, r29, 2
/* 801405DC 0013D3DC  38 84 98 C8 */	addi r4, r4, sBone@l
/* 801405E0 0013D3E0  38 03 99 50 */	addi r0, r3, sBoneOffset@l
/* 801405E4 0013D3E4  7C A4 28 2E */	lwzx r5, r4, r5
/* 801405E8 0013D3E8  7F E4 FB 78 */	mr r4, r31
/* 801405EC 0013D3EC  38 61 00 14 */	addi r3, r1, 0x14
/* 801405F0 0013D3F0  7C C0 32 14 */	add r6, r0, r6
/* 801405F4 0013D3F4  4B FF FE D9 */	bl GetBonePos__FP5xVec3P7xMat4x3iP5xVec3
/* 801405F8 0013D3F8  38 61 00 14 */	addi r3, r1, 0x14
/* 801405FC 0013D3FC  38 81 00 20 */	addi r4, r1, 0x20
/* 80140600 0013D400  4B ED B3 61 */	bl xVec3SubFrom__FP5xVec3PC5xVec3
/* 80140604 0013D404  38 61 00 14 */	addi r3, r1, 0x14
/* 80140608 0013D408  7C 64 1B 78 */	mr r4, r3
/* 8014060C 0013D40C  4B F0 DC E5 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 80140610 0013D410  FC 00 08 90 */	fmr f0, f1
/* 80140614 0013D414  C0 42 A5 28 */	lfs f2, _1069-_SDA2_BASE_(r2)
/* 80140618 0013D418  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 8014061C 0013D41C  38 7E 00 A0 */	addi r3, r30, 0xa0
/* 80140620 0013D420  FC 60 10 90 */	fmr f3, f2
/* 80140624 0013D424  FF E0 00 90 */	fmr f31, f0
/* 80140628 0013D428  4B EC E9 D5 */	bl xVec3Init__FP5xVec3fff
/* 8014062C 0013D42C  C0 42 A5 B0 */	lfs f2, _1666-_SDA2_BASE_(r2)
/* 80140630 0013D430  FC 20 F8 90 */	fmr f1, f31
/* 80140634 0013D434  38 7E 00 94 */	addi r3, r30, 0x94
/* 80140638 0013D438  FC 60 10 90 */	fmr f3, f2
/* 8014063C 0013D43C  4B EC E9 C1 */	bl xVec3Init__FP5xVec3fff
/* 80140640 0013D440  C0 02 A4 E8 */	lfs f0, _1032-_SDA2_BASE_(r2)
/* 80140644 0013D444  38 7E 00 88 */	addi r3, r30, 0x88
/* 80140648 0013D448  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 8014064C 0013D44C  EC 20 07 F2 */	fmuls f1, f0, f31
/* 80140650 0013D450  FC 60 10 90 */	fmr f3, f2
/* 80140654 0013D454  4B EC E9 A9 */	bl xVec3Init__FP5xVec3fff
/* 80140658 0013D458  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8014065C 0013D45C  38 61 00 08 */	addi r3, r1, 8
/* 80140660 0013D460  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 80140664 0013D464  FC 40 00 50 */	fneg f2, f0
/* 80140668 0013D468  C0 61 00 18 */	lfs f3, 0x18(r1)
/* 8014066C 0013D46C  4B EC E9 91 */	bl xVec3Init__FP5xVec3fff
/* 80140670 0013D470  38 61 00 08 */	addi r3, r1, 8
/* 80140674 0013D474  7C 64 1B 78 */	mr r4, r3
/* 80140678 0013D478  4B F0 DC 79 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 8014067C 0013D47C  4B EC D6 FD */	bl xasin__Ff
/* 80140680 0013D480  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 80140684 0013D484  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80140688 0013D488  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8014068C 0013D48C  40 80 00 20 */	bge lbl_801406AC
/* 80140690 0013D490  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80140694 0013D494  40 80 00 10 */	bge lbl_801406A4
/* 80140698 0013D498  C0 02 A5 B4 */	lfs f0, _1667-_SDA2_BASE_(r2)
/* 8014069C 0013D49C  EC 20 08 28 */	fsubs f1, f0, f1
/* 801406A0 0013D4A0  48 00 00 0C */	b lbl_801406AC
lbl_801406A4:
/* 801406A4 0013D4A4  C0 02 A5 7C */	lfs f0, _1465-_SDA2_BASE_(r2)
/* 801406A8 0013D4A8  EC 20 08 28 */	fsubs f1, f0, f1
lbl_801406AC:
/* 801406AC 0013D4AC  FC 80 08 90 */	fmr f4, f1
/* 801406B0 0013D4B0  80 7E 00 AC */	lwz r3, 0xac(r30)
/* 801406B4 0013D4B4  C0 21 00 08 */	lfs f1, 8(r1)
/* 801406B8 0013D4B8  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 801406BC 0013D4BC  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 801406C0 0013D4C0  4B EF 1C 55 */	bl xMat3x3RotC__FP7xMat3x3ffff
/* 801406C4 0013D4C4  80 7E 00 AC */	lwz r3, 0xac(r30)
/* 801406C8 0013D4C8  38 81 00 20 */	addi r4, r1, 0x20
/* 801406CC 0013D4CC  38 63 00 30 */	addi r3, r3, 0x30
/* 801406D0 0013D4D0  4B F0 DE 0D */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 801406D4 0013D4D4  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 801406D8 0013D4D8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801406DC 0013D4DC  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 801406E0 0013D4E0  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 801406E4 0013D4E4  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 801406E8 0013D4E8  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 801406EC 0013D4EC  7C 08 03 A6 */	mtlr r0
/* 801406F0 0013D4F0  38 21 00 50 */	addi r1, r1, 0x50
/* 801406F4 0013D4F4  4E 80 00 20 */	blr 

BoundEventCB__FP5xBaseP5xBaseUiPCfP5xBase:
/* 801406F8 0013D4F8  2C 05 01 65 */	cmpwi r5, 0x165
/* 801406FC 0013D4FC  80 04 00 00 */	lwz r0, 0(r4)
/* 80140700 0013D500  80 C4 00 B8 */	lwz r6, 0xb8(r4)
/* 80140704 0013D504  41 82 00 2C */	beq lbl_80140730
/* 80140708 0013D508  40 80 00 4C */	bge lbl_80140754
/* 8014070C 0013D50C  2C 05 00 3A */	cmpwi r5, 0x3a
/* 80140710 0013D510  41 82 00 08 */	beq lbl_80140718
/* 80140714 0013D514  48 00 00 40 */	b lbl_80140754
lbl_80140718:
/* 80140718 0013D518  80 86 02 B8 */	lwz r4, 0x2b8(r6)
/* 8014071C 0013D51C  54 03 10 3A */	slwi r3, r0, 2
/* 80140720 0013D520  7C 04 18 2E */	lwzx r0, r4, r3
/* 80140724 0013D524  60 00 00 02 */	ori r0, r0, 2
/* 80140728 0013D528  7C 04 19 2E */	stwx r0, r4, r3
/* 8014072C 0013D52C  48 00 00 28 */	b lbl_80140754
lbl_80140730:
/* 80140730 0013D530  80 66 02 B8 */	lwz r3, 0x2b8(r6)
/* 80140734 0013D534  54 04 10 3A */	slwi r4, r0, 2
/* 80140738 0013D538  7C 03 20 2E */	lwzx r0, r3, r4
/* 8014073C 0013D53C  60 00 00 02 */	ori r0, r0, 2
/* 80140740 0013D540  7C 03 21 2E */	stwx r0, r3, r4
/* 80140744 0013D544  80 66 02 B8 */	lwz r3, 0x2b8(r6)
/* 80140748 0013D548  7C 03 20 2E */	lwzx r0, r3, r4
/* 8014074C 0013D54C  60 00 00 04 */	ori r0, r0, 4
/* 80140750 0013D550  7C 03 21 2E */	stwx r0, r3, r4
lbl_80140754:
/* 80140754 0013D554  38 60 00 01 */	li r3, 1
/* 80140758 0013D558  4E 80 00 20 */	blr 

Process__10zNPCBSandyFP6xScenef:
/* 8014075C 0013D55C  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 80140760 0013D560  7C 08 02 A6 */	mflr r0
/* 80140764 0013D564  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 80140768 0013D568  DB E1 00 E0 */	stfd f31, 0xe0(r1)
/* 8014076C 0013D56C  F3 E1 00 E8 */	psq_st f31, 232(r1), 0, qr0
/* 80140770 0013D570  BF 01 00 C0 */	stmw r24, 0xc0(r1)
/* 80140774 0013D574  7C 7D 1B 78 */	mr r29, r3
/* 80140778 0013D578  FF E0 08 90 */	fmr f31, f1
/* 8014077C 0013D57C  80 03 0D 54 */	lwz r0, 0xd54(r3)
/* 80140780 0013D580  7C 9E 23 78 */	mr r30, r4
/* 80140784 0013D584  2C 00 00 00 */	cmpwi r0, 0
/* 80140788 0013D588  41 82 00 8C */	beq lbl_80140814
/* 8014078C 0013D58C  38 60 00 00 */	li r3, 0
/* 80140790 0013D590  90 7D 0D 54 */	stw r3, 0xd54(r29)
/* 80140794 0013D594  80 1D 02 D8 */	lwz r0, 0x2d8(r29)
/* 80140798 0013D598  2C 00 00 02 */	cmpwi r0, 2
/* 8014079C 0013D59C  41 82 00 4C */	beq lbl_801407E8
/* 801407A0 0013D5A0  40 80 00 10 */	bge lbl_801407B0
/* 801407A4 0013D5A4  2C 00 00 01 */	cmpwi r0, 1
/* 801407A8 0013D5A8  40 80 00 14 */	bge lbl_801407BC
/* 801407AC 0013D5AC  48 00 00 68 */	b lbl_80140814
lbl_801407B0:
/* 801407B0 0013D5B0  2C 00 00 04 */	cmpwi r0, 4
/* 801407B4 0013D5B4  40 80 00 60 */	bge lbl_80140814
/* 801407B8 0013D5B8  48 00 00 48 */	b lbl_80140800
lbl_801407BC:
/* 801407BC 0013D5BC  80 1D 0D 50 */	lwz r0, 0xd50(r29)
/* 801407C0 0013D5C0  2C 00 00 00 */	cmpwi r0, 0
/* 801407C4 0013D5C4  41 82 00 0C */	beq lbl_801407D0
/* 801407C8 0013D5C8  90 7D 0D 50 */	stw r3, 0xd50(r29)
/* 801407CC 0013D5CC  48 00 00 10 */	b lbl_801407DC
lbl_801407D0:
/* 801407D0 0013D5D0  80 7D 07 E8 */	lwz r3, 0x7e8(r29)
/* 801407D4 0013D5D4  38 80 00 BE */	li r4, 0xbe
/* 801407D8 0013D5D8  4B ED EE 19 */	bl zEntEvent__FP5xBaseUi
lbl_801407DC:
/* 801407DC 0013D5DC  38 00 00 09 */	li r0, 9
/* 801407E0 0013D5E0  90 1D 02 D4 */	stw r0, 0x2d4(r29)
/* 801407E4 0013D5E4  48 00 00 30 */	b lbl_80140814
lbl_801407E8:
/* 801407E8 0013D5E8  80 7D 07 EC */	lwz r3, 0x7ec(r29)
/* 801407EC 0013D5EC  38 80 00 BE */	li r4, 0xbe
/* 801407F0 0013D5F0  4B ED EE 01 */	bl zEntEvent__FP5xBaseUi
/* 801407F4 0013D5F4  38 00 00 06 */	li r0, 6
/* 801407F8 0013D5F8  90 1D 02 D4 */	stw r0, 0x2d4(r29)
/* 801407FC 0013D5FC  48 00 00 18 */	b lbl_80140814
lbl_80140800:
/* 80140800 0013D600  80 7D 07 F0 */	lwz r3, 0x7f0(r29)
/* 80140804 0013D604  38 80 00 BE */	li r4, 0xbe
/* 80140808 0013D608  4B ED ED E9 */	bl zEntEvent__FP5xBaseUi
/* 8014080C 0013D60C  38 00 00 03 */	li r0, 3
/* 80140810 0013D610  90 1D 02 D4 */	stw r0, 0x2d4(r29)
lbl_80140814:
/* 80140814 0013D614  3C 60 80 3C */	lis r3, globals@ha
/* 80140818 0013D618  3B E0 00 00 */	li r31, 0
/* 8014081C 0013D61C  38 63 05 58 */	addi r3, r3, globals@l
/* 80140820 0013D620  80 63 1F BC */	lwz r3, 0x1fbc(r3)
/* 80140824 0013D624  28 03 00 00 */	cmplwi r3, 0
/* 80140828 0013D628  41 82 00 18 */	beq lbl_80140840
/* 8014082C 0013D62C  80 63 00 14 */	lwz r3, 0x14(r3)
/* 80140830 0013D630  80 03 00 3C */	lwz r0, 0x3c(r3)
/* 80140834 0013D634  28 00 00 00 */	cmplwi r0, 0
/* 80140838 0013D638  41 82 00 08 */	beq lbl_80140840
/* 8014083C 0013D63C  3B E0 00 01 */	li r31, 1
lbl_80140840:
/* 80140840 0013D640  2C 1F 00 00 */	cmpwi r31, 0
/* 80140844 0013D644  41 82 00 48 */	beq lbl_8014088C
/* 80140848 0013D648  80 1D 02 C0 */	lwz r0, 0x2c0(r29)
/* 8014084C 0013D64C  54 00 04 E7 */	rlwinm. r0, r0, 0, 0x13, 0x13
/* 80140850 0013D650  41 82 00 14 */	beq lbl_80140864
/* 80140854 0013D654  C0 1D 07 F4 */	lfs f0, 0x7f4(r29)
/* 80140858 0013D658  EC 00 F8 2A */	fadds f0, f0, f31
/* 8014085C 0013D65C  D0 1D 07 F4 */	stfs f0, 0x7f4(r29)
/* 80140860 0013D660  48 00 00 0C */	b lbl_8014086C
lbl_80140864:
/* 80140864 0013D664  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80140868 0013D668  D0 1D 07 F4 */	stfs f0, 0x7f4(r29)
lbl_8014086C:
/* 8014086C 0013D66C  80 7D 02 C0 */	lwz r3, 0x2c0(r29)
/* 80140870 0013D670  54 60 05 6B */	rlwinm. r0, r3, 0, 0x15, 0x15
/* 80140874 0013D674  41 82 00 44 */	beq lbl_801408B8
/* 80140878 0013D678  54 60 05 A8 */	rlwinm r0, r3, 0, 0x16, 0x14
/* 8014087C 0013D67C  7F A3 EB 78 */	mr r3, r29
/* 80140880 0013D680  90 1D 02 C0 */	stw r0, 0x2c0(r29)
/* 80140884 0013D684  48 00 0D E5 */	bl hiddenByCutscene__10zNPCBSandyFv
/* 80140888 0013D688  48 00 00 30 */	b lbl_801408B8
lbl_8014088C:
/* 8014088C 0013D68C  80 7D 02 C0 */	lwz r3, 0x2c0(r29)
/* 80140890 0013D690  54 60 04 E7 */	rlwinm. r0, r3, 0, 0x13, 0x13
/* 80140894 0013D694  41 82 00 24 */	beq lbl_801408B8
/* 80140898 0013D698  60 60 40 00 */	ori r0, r3, 0x4000
/* 8014089C 0013D69C  90 1D 02 C0 */	stw r0, 0x2c0(r29)
/* 801408A0 0013D6A0  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 801408A4 0013D6A4  D0 1D 0A F8 */	stfs f0, 0xaf8(r29)
/* 801408A8 0013D6A8  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 801408AC 0013D6AC  D0 0D 96 80 */	stfs f0, sElbowDropTimer-_SDA_BASE_(r13)
/* 801408B0 0013D6B0  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 801408B4 0013D6B4  D0 0D 96 84 */	stfs f0, sChaseTimer-_SDA_BASE_(r13)
lbl_801408B8:
/* 801408B8 0013D6B8  A0 1D 00 06 */	lhz r0, 6(r29)
/* 801408BC 0013D6BC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801408C0 0013D6C0  40 82 00 08 */	bne lbl_801408C8
/* 801408C4 0013D6C4  3B E0 00 01 */	li r31, 1
lbl_801408C8:
/* 801408C8 0013D6C8  2C 1F 00 00 */	cmpwi r31, 0
/* 801408CC 0013D6CC  41 82 00 14 */	beq lbl_801408E0
/* 801408D0 0013D6D0  80 1D 02 C0 */	lwz r0, 0x2c0(r29)
/* 801408D4 0013D6D4  60 00 10 00 */	ori r0, r0, 0x1000
/* 801408D8 0013D6D8  90 1D 02 C0 */	stw r0, 0x2c0(r29)
/* 801408DC 0013D6DC  48 00 00 10 */	b lbl_801408EC
lbl_801408E0:
/* 801408E0 0013D6E0  80 1D 02 C0 */	lwz r0, 0x2c0(r29)
/* 801408E4 0013D6E4  54 00 05 24 */	rlwinm r0, r0, 0, 0x14, 0x12
/* 801408E8 0013D6E8  90 1D 02 C0 */	stw r0, 0x2c0(r29)
lbl_801408EC:
/* 801408EC 0013D6EC  80 7D 02 28 */	lwz r3, 0x228(r29)
/* 801408F0 0013D6F0  28 03 00 00 */	cmplwi r3, 0
/* 801408F4 0013D6F4  41 82 00 10 */	beq lbl_80140904
/* 801408F8 0013D6F8  FC 20 F8 90 */	fmr f1, f31
/* 801408FC 0013D6FC  38 80 00 00 */	li r4, 0
/* 80140900 0013D700  4B FC D7 61 */	bl Timestep__7xPsycheFfPv
lbl_80140904:
/* 80140904 0013D704  88 0D 84 81 */	lbz r0, sWasUsingBossCam-_SDA_BASE_(r13)
/* 80140908 0013D708  88 8D 84 80 */	lbz r4, sUseBossCam-_SDA_BASE_(r13)
/* 8014090C 0013D70C  7C 00 20 40 */	cmplw r0, r4
/* 80140910 0013D710  41 82 00 94 */	beq lbl_801409A4
/* 80140914 0013D714  28 00 00 00 */	cmplwi r0, 0
/* 80140918 0013D718  41 82 00 60 */	beq lbl_80140978
/* 8014091C 0013D71C  3C 60 80 3C */	lis r3, globals@ha
/* 80140920 0013D720  C0 0D 96 A0 */	lfs f0, sCurrHeight-_SDA_BASE_(r13)
/* 80140924 0013D724  38 63 05 58 */	addi r3, r3, globals@l
/* 80140928 0013D728  D0 03 01 70 */	stfs f0, 0x170(r3)
/* 8014092C 0013D72C  C0 0D 96 A4 */	lfs f0, sCurrRadius-_SDA_BASE_(r13)
/* 80140930 0013D730  D0 03 01 60 */	stfs f0, 0x160(r3)
/* 80140934 0013D734  C0 02 A5 7C */	lfs f0, _1465-_SDA2_BASE_(r2)
/* 80140938 0013D738  C0 4D 96 9C */	lfs f2, sCurrYaw-_SDA_BASE_(r13)
/* 8014093C 0013D73C  EC 20 10 2A */	fadds f1, f0, f2
/* 80140940 0013D740  D0 23 01 80 */	stfs f1, 0x180(r3)
/* 80140944 0013D744  C0 02 A4 DC */	lfs f0, _1029-_SDA2_BASE_(r2)
/* 80140948 0013D748  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014094C 0013D74C  40 81 00 0C */	ble lbl_80140958
/* 80140950 0013D750  EC 01 00 28 */	fsubs f0, f1, f0
/* 80140954 0013D754  D0 03 01 80 */	stfs f0, 0x180(r3)
lbl_80140958:
/* 80140958 0013D758  3C 60 80 3C */	lis r3, globals@ha
/* 8014095C 0013D75C  38 63 05 58 */	addi r3, r3, globals@l
/* 80140960 0013D760  D0 43 01 D4 */	stfs f2, 0x1d4(r3)
/* 80140964 0013D764  C0 0D 96 A8 */	lfs f0, sCurrPitch-_SDA_BASE_(r13)
/* 80140968 0013D768  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 8014096C 0013D76C  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80140970 0013D770  D0 03 01 E4 */	stfs f0, 0x1e4(r3)
/* 80140974 0013D774  48 00 00 2C */	b lbl_801409A0
lbl_80140978:
/* 80140978 0013D778  3C 60 80 3C */	lis r3, globals@ha
/* 8014097C 0013D77C  38 63 05 58 */	addi r3, r3, globals@l
/* 80140980 0013D780  C0 03 01 D4 */	lfs f0, 0x1d4(r3)
/* 80140984 0013D784  D0 0D 96 9C */	stfs f0, sCurrYaw-_SDA_BASE_(r13)
/* 80140988 0013D788  C0 03 01 70 */	lfs f0, 0x170(r3)
/* 8014098C 0013D78C  D0 0D 96 A0 */	stfs f0, sCurrHeight-_SDA_BASE_(r13)
/* 80140990 0013D790  C0 03 01 60 */	lfs f0, 0x160(r3)
/* 80140994 0013D794  D0 0D 96 A4 */	stfs f0, sCurrRadius-_SDA_BASE_(r13)
/* 80140998 0013D798  C0 03 01 DC */	lfs f0, 0x1dc(r3)
/* 8014099C 0013D79C  D0 0D 96 A8 */	stfs f0, sCurrPitch-_SDA_BASE_(r13)
lbl_801409A0:
/* 801409A0 0013D7A0  98 8D 84 81 */	stb r4, sWasUsingBossCam-_SDA_BASE_(r13)
lbl_801409A4:
/* 801409A4 0013D7A4  28 04 00 00 */	cmplwi r4, 0
/* 801409A8 0013D7A8  41 82 00 14 */	beq lbl_801409BC
/* 801409AC 0013D7AC  FC 20 F8 90 */	fmr f1, f31
/* 801409B0 0013D7B0  7F A3 EB 78 */	mr r3, r29
/* 801409B4 0013D7B4  4B FF F9 79 */	bl UpdateSandyBossCam__FP10zNPCBSandyf
/* 801409B8 0013D7B8  48 00 00 0C */	b lbl_801409C4
lbl_801409BC:
/* 801409BC 0013D7BC  38 60 00 08 */	li r3, 8
/* 801409C0 0013D7C0  4B F1 17 51 */	bl zCameraEnableTracking__F17camera_owner_enum
lbl_801409C4:
/* 801409C4 0013D7C4  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 801409C8 0013D7C8  D0 1D 05 44 */	stfs f0, 0x544(r29)
/* 801409CC 0013D7CC  80 1D 02 C0 */	lwz r0, 0x2c0(r29)
/* 801409D0 0013D7D0  54 00 04 E7 */	rlwinm. r0, r0, 0, 0x13, 0x13
/* 801409D4 0013D7D4  41 82 00 48 */	beq lbl_80140A1C
/* 801409D8 0013D7D8  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 801409DC 0013D7DC  D0 1D 05 24 */	stfs f0, 0x524(r29)
/* 801409E0 0013D7E0  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 801409E4 0013D7E4  D0 1D 05 28 */	stfs f0, 0x528(r29)
/* 801409E8 0013D7E8  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 801409EC 0013D7EC  D0 1D 05 2C */	stfs f0, 0x52c(r29)
/* 801409F0 0013D7F0  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 801409F4 0013D7F4  D0 1D 05 30 */	stfs f0, 0x530(r29)
/* 801409F8 0013D7F8  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 801409FC 0013D7FC  D0 1D 05 34 */	stfs f0, 0x534(r29)
/* 80140A00 0013D800  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 80140A04 0013D804  D0 1D 05 38 */	stfs f0, 0x538(r29)
/* 80140A08 0013D808  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 80140A0C 0013D80C  D0 1D 05 3C */	stfs f0, 0x53c(r29)
/* 80140A10 0013D810  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 80140A14 0013D814  D0 1D 05 40 */	stfs f0, 0x540(r29)
/* 80140A18 0013D818  48 00 00 78 */	b lbl_80140A90
lbl_80140A1C:
/* 80140A1C 0013D81C  3C 60 80 3C */	lis r3, globals@ha
/* 80140A20 0013D820  7F BF EB 78 */	mr r31, r29
/* 80140A24 0013D824  38 63 05 58 */	addi r3, r3, globals@l
/* 80140A28 0013D828  7F BC EB 78 */	mr r28, r29
/* 80140A2C 0013D82C  3B 63 00 44 */	addi r27, r3, 0x44
/* 80140A30 0013D830  3B 00 00 00 */	li r24, 0
lbl_80140A34:
/* 80140A34 0013D834  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 80140A38 0013D838  7F 64 DB 78 */	mr r4, r27
/* 80140A3C 0013D83C  38 61 00 68 */	addi r3, r1, 0x68
/* 80140A40 0013D840  38 BC 03 3C */	addi r5, r28, 0x33c
/* 80140A44 0013D844  D0 1F 05 24 */	stfs f0, 0x524(r31)
/* 80140A48 0013D848  4B EC DC 49 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 80140A4C 0013D84C  38 61 00 68 */	addi r3, r1, 0x68
/* 80140A50 0013D850  38 9C 03 9C */	addi r4, r28, 0x39c
/* 80140A54 0013D854  4B F0 DA 9D */	bl xVec3Dot__FPC5xVec3PC5xVec3
/* 80140A58 0013D858  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80140A5C 0013D85C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80140A60 0013D860  40 80 00 1C */	bge lbl_80140A7C
/* 80140A64 0013D864  C0 02 A5 48 */	lfs f0, _1192-_SDA2_BASE_(r2)
/* 80140A68 0013D868  2C 18 00 04 */	cmpwi r24, 4
/* 80140A6C 0013D86C  D0 1F 05 24 */	stfs f0, 0x524(r31)
/* 80140A70 0013D870  40 82 00 0C */	bne lbl_80140A7C
/* 80140A74 0013D874  C0 02 A5 48 */	lfs f0, _1192-_SDA2_BASE_(r2)
/* 80140A78 0013D878  D0 1D 05 44 */	stfs f0, 0x544(r29)
lbl_80140A7C:
/* 80140A7C 0013D87C  3B 18 00 01 */	addi r24, r24, 1
/* 80140A80 0013D880  3B 9C 00 0C */	addi r28, r28, 0xc
/* 80140A84 0013D884  2C 18 00 08 */	cmpwi r24, 8
/* 80140A88 0013D888  3B FF 00 04 */	addi r31, r31, 4
/* 80140A8C 0013D88C  41 80 FF A8 */	blt lbl_80140A34
lbl_80140A90:
/* 80140A90 0013D890  C0 02 A5 1C */	lfs f0, _1066-_SDA2_BASE_(r2)
/* 80140A94 0013D894  38 00 00 08 */	li r0, 8
/* 80140A98 0013D898  7F A3 EB 78 */	mr r3, r29
/* 80140A9C 0013D89C  7F A4 EB 78 */	mr r4, r29
/* 80140AA0 0013D8A0  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80140AA4 0013D8A4  38 A0 00 00 */	li r5, 0
/* 80140AA8 0013D8A8  7C 09 03 A6 */	mtctr r0
lbl_80140AAC:
/* 80140AAC 0013D8AC  C0 43 05 24 */	lfs f2, 0x524(r3)
/* 80140AB0 0013D8B0  C0 22 A5 68 */	lfs f1, _1380-_SDA2_BASE_(r2)
/* 80140AB4 0013D8B4  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80140AB8 0013D8B8  40 81 00 F8 */	ble lbl_80140BB0
/* 80140ABC 0013D8BC  80 C4 04 5C */	lwz r6, 0x45c(r4)
/* 80140AC0 0013D8C0  80 C6 00 24 */	lwz r6, 0x24(r6)
/* 80140AC4 0013D8C4  C0 26 00 24 */	lfs f1, 0x24(r6)
/* 80140AC8 0013D8C8  EC 21 F8 2A */	fadds f1, f1, f31
/* 80140ACC 0013D8CC  D0 26 00 24 */	stfs f1, 0x24(r6)
/* 80140AD0 0013D8D0  80 C4 04 5C */	lwz r6, 0x45c(r4)
/* 80140AD4 0013D8D4  C0 43 05 24 */	lfs f2, 0x524(r3)
/* 80140AD8 0013D8D8  80 C6 00 24 */	lwz r6, 0x24(r6)
/* 80140ADC 0013D8DC  C0 26 00 24 */	lfs f1, 0x24(r6)
/* 80140AE0 0013D8E0  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80140AE4 0013D8E4  40 81 00 08 */	ble lbl_80140AEC
/* 80140AE8 0013D8E8  D0 46 00 24 */	stfs f2, 0x24(r6)
lbl_80140AEC:
/* 80140AEC 0013D8EC  80 C4 04 60 */	lwz r6, 0x460(r4)
/* 80140AF0 0013D8F0  80 C6 00 24 */	lwz r6, 0x24(r6)
/* 80140AF4 0013D8F4  C0 26 00 24 */	lfs f1, 0x24(r6)
/* 80140AF8 0013D8F8  EC 21 F8 2A */	fadds f1, f1, f31
/* 80140AFC 0013D8FC  D0 26 00 24 */	stfs f1, 0x24(r6)
/* 80140B00 0013D900  80 C4 04 60 */	lwz r6, 0x460(r4)
/* 80140B04 0013D904  C0 43 05 24 */	lfs f2, 0x524(r3)
/* 80140B08 0013D908  80 C6 00 24 */	lwz r6, 0x24(r6)
/* 80140B0C 0013D90C  C0 26 00 24 */	lfs f1, 0x24(r6)
/* 80140B10 0013D910  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80140B14 0013D914  40 81 00 08 */	ble lbl_80140B1C
/* 80140B18 0013D918  D0 46 00 24 */	stfs f2, 0x24(r6)
lbl_80140B1C:
/* 80140B1C 0013D91C  80 C4 04 64 */	lwz r6, 0x464(r4)
/* 80140B20 0013D920  80 C6 00 24 */	lwz r6, 0x24(r6)
/* 80140B24 0013D924  C0 26 00 24 */	lfs f1, 0x24(r6)
/* 80140B28 0013D928  EC 21 F8 2A */	fadds f1, f1, f31
/* 80140B2C 0013D92C  D0 26 00 24 */	stfs f1, 0x24(r6)
/* 80140B30 0013D930  80 C4 04 64 */	lwz r6, 0x464(r4)
/* 80140B34 0013D934  C0 43 05 24 */	lfs f2, 0x524(r3)
/* 80140B38 0013D938  80 C6 00 24 */	lwz r6, 0x24(r6)
/* 80140B3C 0013D93C  C0 26 00 24 */	lfs f1, 0x24(r6)
/* 80140B40 0013D940  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80140B44 0013D944  40 81 00 08 */	ble lbl_80140B4C
/* 80140B48 0013D948  D0 46 00 24 */	stfs f2, 0x24(r6)
lbl_80140B4C:
/* 80140B4C 0013D94C  80 C4 04 68 */	lwz r6, 0x468(r4)
/* 80140B50 0013D950  80 C6 00 24 */	lwz r6, 0x24(r6)
/* 80140B54 0013D954  C0 26 00 24 */	lfs f1, 0x24(r6)
/* 80140B58 0013D958  EC 21 F8 2A */	fadds f1, f1, f31
/* 80140B5C 0013D95C  D0 26 00 24 */	stfs f1, 0x24(r6)
/* 80140B60 0013D960  80 C4 04 68 */	lwz r6, 0x468(r4)
/* 80140B64 0013D964  C0 43 05 24 */	lfs f2, 0x524(r3)
/* 80140B68 0013D968  80 C6 00 24 */	lwz r6, 0x24(r6)
/* 80140B6C 0013D96C  C0 26 00 24 */	lfs f1, 0x24(r6)
/* 80140B70 0013D970  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80140B74 0013D974  40 81 00 08 */	ble lbl_80140B7C
/* 80140B78 0013D978  D0 46 00 24 */	stfs f2, 0x24(r6)
lbl_80140B7C:
/* 80140B7C 0013D97C  80 C3 04 DC */	lwz r6, 0x4dc(r3)
/* 80140B80 0013D980  80 C6 00 24 */	lwz r6, 0x24(r6)
/* 80140B84 0013D984  C0 26 00 24 */	lfs f1, 0x24(r6)
/* 80140B88 0013D988  EC 21 F8 2A */	fadds f1, f1, f31
/* 80140B8C 0013D98C  D0 26 00 24 */	stfs f1, 0x24(r6)
/* 80140B90 0013D990  80 C3 04 DC */	lwz r6, 0x4dc(r3)
/* 80140B94 0013D994  C0 43 05 24 */	lfs f2, 0x524(r3)
/* 80140B98 0013D998  80 C6 00 24 */	lwz r6, 0x24(r6)
/* 80140B9C 0013D99C  C0 26 00 24 */	lfs f1, 0x24(r6)
/* 80140BA0 0013D9A0  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80140BA4 0013D9A4  40 81 00 FC */	ble lbl_80140CA0
/* 80140BA8 0013D9A8  D0 46 00 24 */	stfs f2, 0x24(r6)
/* 80140BAC 0013D9AC  48 00 00 F4 */	b lbl_80140CA0
lbl_80140BB0:
/* 80140BB0 0013D9B0  80 C4 04 5C */	lwz r6, 0x45c(r4)
/* 80140BB4 0013D9B4  80 C6 00 24 */	lwz r6, 0x24(r6)
/* 80140BB8 0013D9B8  C0 26 00 24 */	lfs f1, 0x24(r6)
/* 80140BBC 0013D9BC  EC 21 00 28 */	fsubs f1, f1, f0
/* 80140BC0 0013D9C0  D0 26 00 24 */	stfs f1, 0x24(r6)
/* 80140BC4 0013D9C4  80 C4 04 5C */	lwz r6, 0x45c(r4)
/* 80140BC8 0013D9C8  C0 43 05 24 */	lfs f2, 0x524(r3)
/* 80140BCC 0013D9CC  80 C6 00 24 */	lwz r6, 0x24(r6)
/* 80140BD0 0013D9D0  C0 26 00 24 */	lfs f1, 0x24(r6)
/* 80140BD4 0013D9D4  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80140BD8 0013D9D8  40 80 00 08 */	bge lbl_80140BE0
/* 80140BDC 0013D9DC  D0 46 00 24 */	stfs f2, 0x24(r6)
lbl_80140BE0:
/* 80140BE0 0013D9E0  80 C4 04 60 */	lwz r6, 0x460(r4)
/* 80140BE4 0013D9E4  80 C6 00 24 */	lwz r6, 0x24(r6)
/* 80140BE8 0013D9E8  C0 26 00 24 */	lfs f1, 0x24(r6)
/* 80140BEC 0013D9EC  EC 21 00 28 */	fsubs f1, f1, f0
/* 80140BF0 0013D9F0  D0 26 00 24 */	stfs f1, 0x24(r6)
/* 80140BF4 0013D9F4  80 C4 04 60 */	lwz r6, 0x460(r4)
/* 80140BF8 0013D9F8  C0 43 05 24 */	lfs f2, 0x524(r3)
/* 80140BFC 0013D9FC  80 C6 00 24 */	lwz r6, 0x24(r6)
/* 80140C00 0013DA00  C0 26 00 24 */	lfs f1, 0x24(r6)
/* 80140C04 0013DA04  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80140C08 0013DA08  40 80 00 08 */	bge lbl_80140C10
/* 80140C0C 0013DA0C  D0 46 00 24 */	stfs f2, 0x24(r6)
lbl_80140C10:
/* 80140C10 0013DA10  80 C4 04 64 */	lwz r6, 0x464(r4)
/* 80140C14 0013DA14  80 C6 00 24 */	lwz r6, 0x24(r6)
/* 80140C18 0013DA18  C0 26 00 24 */	lfs f1, 0x24(r6)
/* 80140C1C 0013DA1C  EC 21 00 28 */	fsubs f1, f1, f0
/* 80140C20 0013DA20  D0 26 00 24 */	stfs f1, 0x24(r6)
/* 80140C24 0013DA24  80 C4 04 64 */	lwz r6, 0x464(r4)
/* 80140C28 0013DA28  C0 43 05 24 */	lfs f2, 0x524(r3)
/* 80140C2C 0013DA2C  80 C6 00 24 */	lwz r6, 0x24(r6)
/* 80140C30 0013DA30  C0 26 00 24 */	lfs f1, 0x24(r6)
/* 80140C34 0013DA34  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80140C38 0013DA38  40 80 00 08 */	bge lbl_80140C40
/* 80140C3C 0013DA3C  D0 46 00 24 */	stfs f2, 0x24(r6)
lbl_80140C40:
/* 80140C40 0013DA40  80 C4 04 68 */	lwz r6, 0x468(r4)
/* 80140C44 0013DA44  80 C6 00 24 */	lwz r6, 0x24(r6)
/* 80140C48 0013DA48  C0 26 00 24 */	lfs f1, 0x24(r6)
/* 80140C4C 0013DA4C  EC 21 00 28 */	fsubs f1, f1, f0
/* 80140C50 0013DA50  D0 26 00 24 */	stfs f1, 0x24(r6)
/* 80140C54 0013DA54  80 C4 04 68 */	lwz r6, 0x468(r4)
/* 80140C58 0013DA58  C0 43 05 24 */	lfs f2, 0x524(r3)
/* 80140C5C 0013DA5C  80 C6 00 24 */	lwz r6, 0x24(r6)
/* 80140C60 0013DA60  C0 26 00 24 */	lfs f1, 0x24(r6)
/* 80140C64 0013DA64  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80140C68 0013DA68  40 80 00 08 */	bge lbl_80140C70
/* 80140C6C 0013DA6C  D0 46 00 24 */	stfs f2, 0x24(r6)
lbl_80140C70:
/* 80140C70 0013DA70  80 C3 04 DC */	lwz r6, 0x4dc(r3)
/* 80140C74 0013DA74  80 C6 00 24 */	lwz r6, 0x24(r6)
/* 80140C78 0013DA78  C0 26 00 24 */	lfs f1, 0x24(r6)
/* 80140C7C 0013DA7C  EC 21 00 28 */	fsubs f1, f1, f0
/* 80140C80 0013DA80  D0 26 00 24 */	stfs f1, 0x24(r6)
/* 80140C84 0013DA84  80 C3 04 DC */	lwz r6, 0x4dc(r3)
/* 80140C88 0013DA88  C0 43 05 24 */	lfs f2, 0x524(r3)
/* 80140C8C 0013DA8C  80 C6 00 24 */	lwz r6, 0x24(r6)
/* 80140C90 0013DA90  C0 26 00 24 */	lfs f1, 0x24(r6)
/* 80140C94 0013DA94  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80140C98 0013DA98  40 80 00 08 */	bge lbl_80140CA0
/* 80140C9C 0013DA9C  D0 46 00 24 */	stfs f2, 0x24(r6)
lbl_80140CA0:
/* 80140CA0 0013DAA0  34 C5 FF FF */	addic. r6, r5, -1
/* 80140CA4 0013DAA4  40 80 00 08 */	bge lbl_80140CAC
/* 80140CA8 0013DAA8  38 C6 00 08 */	addi r6, r6, 8
lbl_80140CAC:
/* 80140CAC 0013DAAC  C0 23 05 24 */	lfs f1, 0x524(r3)
/* 80140CB0 0013DAB0  C0 42 A5 68 */	lfs f2, _1380-_SDA2_BASE_(r2)
/* 80140CB4 0013DAB4  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80140CB8 0013DAB8  40 80 00 38 */	bge lbl_80140CF0
/* 80140CBC 0013DABC  80 C3 05 04 */	lwz r6, 0x504(r3)
/* 80140CC0 0013DAC0  80 C6 00 24 */	lwz r6, 0x24(r6)
/* 80140CC4 0013DAC4  C0 26 00 24 */	lfs f1, 0x24(r6)
/* 80140CC8 0013DAC8  EC 21 00 28 */	fsubs f1, f1, f0
/* 80140CCC 0013DACC  D0 26 00 24 */	stfs f1, 0x24(r6)
/* 80140CD0 0013DAD0  80 C3 05 04 */	lwz r6, 0x504(r3)
/* 80140CD4 0013DAD4  C0 43 05 24 */	lfs f2, 0x524(r3)
/* 80140CD8 0013DAD8  80 C6 00 24 */	lwz r6, 0x24(r6)
/* 80140CDC 0013DADC  C0 26 00 24 */	lfs f1, 0x24(r6)
/* 80140CE0 0013DAE0  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80140CE4 0013DAE4  40 80 00 84 */	bge lbl_80140D68
/* 80140CE8 0013DAE8  D0 46 00 24 */	stfs f2, 0x24(r6)
/* 80140CEC 0013DAEC  48 00 00 7C */	b lbl_80140D68
lbl_80140CF0:
/* 80140CF0 0013DAF0  54 C6 10 3A */	slwi r6, r6, 2
/* 80140CF4 0013DAF4  38 06 05 24 */	addi r0, r6, 0x524
/* 80140CF8 0013DAF8  7C 3D 04 2E */	lfsx f1, r29, r0
/* 80140CFC 0013DAFC  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80140D00 0013DB00  40 80 00 38 */	bge lbl_80140D38
/* 80140D04 0013DB04  80 C3 05 04 */	lwz r6, 0x504(r3)
/* 80140D08 0013DB08  80 C6 00 24 */	lwz r6, 0x24(r6)
/* 80140D0C 0013DB0C  C0 26 00 24 */	lfs f1, 0x24(r6)
/* 80140D10 0013DB10  EC 21 00 28 */	fsubs f1, f1, f0
/* 80140D14 0013DB14  D0 26 00 24 */	stfs f1, 0x24(r6)
/* 80140D18 0013DB18  80 C3 05 04 */	lwz r6, 0x504(r3)
/* 80140D1C 0013DB1C  7C 5D 04 2E */	lfsx f2, r29, r0
/* 80140D20 0013DB20  80 C6 00 24 */	lwz r6, 0x24(r6)
/* 80140D24 0013DB24  C0 26 00 24 */	lfs f1, 0x24(r6)
/* 80140D28 0013DB28  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80140D2C 0013DB2C  40 80 00 3C */	bge lbl_80140D68
/* 80140D30 0013DB30  D0 46 00 24 */	stfs f2, 0x24(r6)
/* 80140D34 0013DB34  48 00 00 34 */	b lbl_80140D68
lbl_80140D38:
/* 80140D38 0013DB38  80 C3 05 04 */	lwz r6, 0x504(r3)
/* 80140D3C 0013DB3C  80 C6 00 24 */	lwz r6, 0x24(r6)
/* 80140D40 0013DB40  C0 26 00 24 */	lfs f1, 0x24(r6)
/* 80140D44 0013DB44  EC 21 F8 2A */	fadds f1, f1, f31
/* 80140D48 0013DB48  D0 26 00 24 */	stfs f1, 0x24(r6)
/* 80140D4C 0013DB4C  80 C3 05 04 */	lwz r6, 0x504(r3)
/* 80140D50 0013DB50  C0 43 05 24 */	lfs f2, 0x524(r3)
/* 80140D54 0013DB54  80 C6 00 24 */	lwz r6, 0x24(r6)
/* 80140D58 0013DB58  C0 26 00 24 */	lfs f1, 0x24(r6)
/* 80140D5C 0013DB5C  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80140D60 0013DB60  40 81 00 08 */	ble lbl_80140D68
/* 80140D64 0013DB64  D0 46 00 24 */	stfs f2, 0x24(r6)
lbl_80140D68:
/* 80140D68 0013DB68  38 63 00 04 */	addi r3, r3, 4
/* 80140D6C 0013DB6C  38 84 00 10 */	addi r4, r4, 0x10
/* 80140D70 0013DB70  38 A5 00 01 */	addi r5, r5, 1
/* 80140D74 0013DB74  42 00 FD 38 */	bdnz lbl_80140AAC
/* 80140D78 0013DB78  C0 5D 05 44 */	lfs f2, 0x544(r29)
/* 80140D7C 0013DB7C  C0 22 A5 68 */	lfs f1, _1380-_SDA2_BASE_(r2)
/* 80140D80 0013DB80  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80140D84 0013DB84  40 81 00 38 */	ble lbl_80140DBC
/* 80140D88 0013DB88  80 7D 07 C0 */	lwz r3, 0x7c0(r29)
/* 80140D8C 0013DB8C  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80140D90 0013DB90  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 80140D94 0013DB94  EC 00 F8 2A */	fadds f0, f0, f31
/* 80140D98 0013DB98  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 80140D9C 0013DB9C  80 7D 07 C0 */	lwz r3, 0x7c0(r29)
/* 80140DA0 0013DBA0  C0 3D 05 44 */	lfs f1, 0x544(r29)
/* 80140DA4 0013DBA4  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80140DA8 0013DBA8  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 80140DAC 0013DBAC  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80140DB0 0013DBB0  40 81 00 3C */	ble lbl_80140DEC
/* 80140DB4 0013DBB4  D0 23 00 24 */	stfs f1, 0x24(r3)
/* 80140DB8 0013DBB8  48 00 00 34 */	b lbl_80140DEC
lbl_80140DBC:
/* 80140DBC 0013DBBC  80 7D 07 C0 */	lwz r3, 0x7c0(r29)
/* 80140DC0 0013DBC0  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80140DC4 0013DBC4  C0 23 00 24 */	lfs f1, 0x24(r3)
/* 80140DC8 0013DBC8  EC 01 00 28 */	fsubs f0, f1, f0
/* 80140DCC 0013DBCC  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 80140DD0 0013DBD0  80 7D 07 C0 */	lwz r3, 0x7c0(r29)
/* 80140DD4 0013DBD4  C0 3D 05 44 */	lfs f1, 0x544(r29)
/* 80140DD8 0013DBD8  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80140DDC 0013DBDC  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 80140DE0 0013DBE0  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80140DE4 0013DBE4  40 80 00 08 */	bge lbl_80140DEC
/* 80140DE8 0013DBE8  D0 23 00 24 */	stfs f1, 0x24(r3)
lbl_80140DEC:
/* 80140DEC 0013DBEC  FC 20 F8 90 */	fmr f1, f31
/* 80140DF0 0013DBF0  7F A3 EB 78 */	mr r3, r29
/* 80140DF4 0013DBF4  4B FF F3 5D */	bl UpdateFX__10zNPCBSandyFf
/* 80140DF8 0013DBF8  C0 0D 96 80 */	lfs f0, sElbowDropTimer-_SDA_BASE_(r13)
/* 80140DFC 0013DBFC  EC 00 F8 2A */	fadds f0, f0, f31
/* 80140E00 0013DC00  D0 0D 96 80 */	stfs f0, sElbowDropTimer-_SDA_BASE_(r13)
/* 80140E04 0013DC04  C0 2D 96 90 */	lfs f1, sElbowDropThreshold-_SDA_BASE_(r13)
/* 80140E08 0013DC08  C0 02 A4 E8 */	lfs f0, _1032-_SDA2_BASE_(r2)
/* 80140E0C 0013DC0C  EC 01 00 28 */	fsubs f0, f1, f0
/* 80140E10 0013DC10  D0 0D 96 90 */	stfs f0, sElbowDropThreshold-_SDA_BASE_(r13)
/* 80140E14 0013DC14  C0 2D 96 90 */	lfs f1, sElbowDropThreshold-_SDA_BASE_(r13)
/* 80140E18 0013DC18  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80140E1C 0013DC1C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80140E20 0013DC20  40 80 00 08 */	bge lbl_80140E28
/* 80140E24 0013DC24  D0 0D 96 90 */	stfs f0, sElbowDropThreshold-_SDA_BASE_(r13)
lbl_80140E28:
/* 80140E28 0013DC28  3C 60 80 3C */	lis r3, globals@ha
/* 80140E2C 0013DC2C  3C A0 80 27 */	lis r5, bossSandyStrings@ha
/* 80140E30 0013DC30  3B E3 05 58 */	addi r31, r3, globals@l
/* 80140E34 0013DC34  80 9F 07 04 */	lwz r4, 0x704(r31)
/* 80140E38 0013DC38  38 65 D1 9C */	addi r3, r5, bossSandyStrings@l
/* 80140E3C 0013DC3C  38 63 05 73 */	addi r3, r3, 0x573
/* 80140E40 0013DC40  80 84 00 0C */	lwz r4, 0xc(r4)
/* 80140E44 0013DC44  80 84 00 08 */	lwz r4, 8(r4)
/* 80140E48 0013DC48  80 84 00 04 */	lwz r4, 4(r4)
/* 80140E4C 0013DC4C  80 84 00 04 */	lwz r4, 4(r4)
/* 80140E50 0013DC50  48 0A 66 CD */	bl strcmp
/* 80140E54 0013DC54  2C 03 00 00 */	cmpwi r3, 0
/* 80140E58 0013DC58  41 82 00 68 */	beq lbl_80140EC0
/* 80140E5C 0013DC5C  80 7F 07 04 */	lwz r3, 0x704(r31)
/* 80140E60 0013DC60  3C 80 80 27 */	lis r4, bossSandyStrings@ha
/* 80140E64 0013DC64  38 A4 D1 9C */	addi r5, r4, bossSandyStrings@l
/* 80140E68 0013DC68  80 83 00 0C */	lwz r4, 0xc(r3)
/* 80140E6C 0013DC6C  38 65 05 83 */	addi r3, r5, 0x583
/* 80140E70 0013DC70  80 84 00 08 */	lwz r4, 8(r4)
/* 80140E74 0013DC74  80 84 00 04 */	lwz r4, 4(r4)
/* 80140E78 0013DC78  80 84 00 04 */	lwz r4, 4(r4)
/* 80140E7C 0013DC7C  48 0A 66 A1 */	bl strcmp
/* 80140E80 0013DC80  2C 03 00 00 */	cmpwi r3, 0
/* 80140E84 0013DC84  41 82 00 3C */	beq lbl_80140EC0
/* 80140E88 0013DC88  88 0D 96 79 */	lbz r0, sPCWasBubbleBouncing-_SDA_BASE_(r13)
/* 80140E8C 0013DC8C  28 00 00 00 */	cmplwi r0, 0
/* 80140E90 0013DC90  41 82 00 0C */	beq lbl_80140E9C
/* 80140E94 0013DC94  C0 02 A5 6C */	lfs f0, _1381-_SDA2_BASE_(r2)
/* 80140E98 0013DC98  48 00 00 08 */	b lbl_80140EA0
lbl_80140E9C:
/* 80140E9C 0013DC9C  C0 02 A4 EC */	lfs f0, _1033-_SDA2_BASE_(r2)
lbl_80140EA0:
/* 80140EA0 0013DCA0  D0 0D 84 88 */	stfs f0, sHeadPopOffFactor-_SDA_BASE_(r13)
/* 80140EA4 0013DCA4  38 00 00 00 */	li r0, 0
/* 80140EA8 0013DCA8  80 7F 07 04 */	lwz r3, 0x704(r31)
/* 80140EAC 0013DCAC  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80140EB0 0013DCB0  C0 03 00 34 */	lfs f0, 0x34(r3)
/* 80140EB4 0013DCB4  D0 0D 84 84 */	stfs f0, sPCHeightDiff-_SDA_BASE_(r13)
/* 80140EB8 0013DCB8  98 0D 96 79 */	stb r0, sPCWasBubbleBouncing-_SDA_BASE_(r13)
/* 80140EBC 0013DCBC  48 00 00 0C */	b lbl_80140EC8
lbl_80140EC0:
/* 80140EC0 0013DCC0  38 00 00 01 */	li r0, 1
/* 80140EC4 0013DCC4  98 0D 96 79 */	stb r0, sPCWasBubbleBouncing-_SDA_BASE_(r13)
lbl_80140EC8:
/* 80140EC8 0013DCC8  80 1D 02 C0 */	lwz r0, 0x2c0(r29)
/* 80140ECC 0013DCCC  80 9D 02 D8 */	lwz r4, 0x2d8(r29)
/* 80140ED0 0013DCD0  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 80140ED4 0013DCD4  41 82 00 54 */	beq lbl_80140F28
/* 80140ED8 0013DCD8  3C 60 80 3C */	lis r3, globals@ha
/* 80140EDC 0013DCDC  38 63 05 58 */	addi r3, r3, globals@l
/* 80140EE0 0013DCE0  80 03 17 88 */	lwz r0, 0x1788(r3)
/* 80140EE4 0013DCE4  28 00 00 00 */	cmplwi r0, 0
/* 80140EE8 0013DCE8  40 82 00 40 */	bne lbl_80140F28
/* 80140EEC 0013DCEC  2C 04 00 01 */	cmpwi r4, 1
/* 80140EF0 0013DCF0  40 82 00 1C */	bne lbl_80140F0C
/* 80140EF4 0013DCF4  80 1D 02 D4 */	lwz r0, 0x2d4(r29)
/* 80140EF8 0013DCF8  2C 00 00 06 */	cmpwi r0, 6
/* 80140EFC 0013DCFC  41 81 00 2C */	bgt lbl_80140F28
/* 80140F00 0013DD00  38 00 00 02 */	li r0, 2
/* 80140F04 0013DD04  90 1D 02 D8 */	stw r0, 0x2d8(r29)
/* 80140F08 0013DD08  48 00 00 20 */	b lbl_80140F28
lbl_80140F0C:
/* 80140F0C 0013DD0C  2C 04 00 02 */	cmpwi r4, 2
/* 80140F10 0013DD10  40 82 00 18 */	bne lbl_80140F28
/* 80140F14 0013DD14  80 1D 02 D4 */	lwz r0, 0x2d4(r29)
/* 80140F18 0013DD18  2C 00 00 03 */	cmpwi r0, 3
/* 80140F1C 0013DD1C  41 81 00 0C */	bgt lbl_80140F28
/* 80140F20 0013DD20  38 00 00 03 */	li r0, 3
/* 80140F24 0013DD24  90 1D 02 D8 */	stw r0, 0x2d8(r29)
lbl_80140F28:
/* 80140F28 0013DD28  80 1D 02 D8 */	lwz r0, 0x2d8(r29)
/* 80140F2C 0013DD2C  7C 04 00 00 */	cmpw r4, r0
/* 80140F30 0013DD30  41 82 00 60 */	beq lbl_80140F90
/* 80140F34 0013DD34  80 1D 02 C0 */	lwz r0, 0x2c0(r29)
/* 80140F38 0013DD38  60 00 04 00 */	ori r0, r0, 0x400
/* 80140F3C 0013DD3C  90 1D 02 C0 */	stw r0, 0x2c0(r29)
/* 80140F40 0013DD40  80 1D 02 D8 */	lwz r0, 0x2d8(r29)
/* 80140F44 0013DD44  2C 00 00 01 */	cmpwi r0, 1
/* 80140F48 0013DD48  40 82 00 14 */	bne lbl_80140F5C
/* 80140F4C 0013DD4C  80 7D 07 E8 */	lwz r3, 0x7e8(r29)
/* 80140F50 0013DD50  38 80 00 BE */	li r4, 0xbe
/* 80140F54 0013DD54  4B ED E6 9D */	bl zEntEvent__FP5xBaseUi
/* 80140F58 0013DD58  48 00 00 30 */	b lbl_80140F88
lbl_80140F5C:
/* 80140F5C 0013DD5C  2C 00 00 02 */	cmpwi r0, 2
/* 80140F60 0013DD60  40 82 00 14 */	bne lbl_80140F74
/* 80140F64 0013DD64  80 7D 07 EC */	lwz r3, 0x7ec(r29)
/* 80140F68 0013DD68  38 80 00 BE */	li r4, 0xbe
/* 80140F6C 0013DD6C  4B ED E6 85 */	bl zEntEvent__FP5xBaseUi
/* 80140F70 0013DD70  48 00 00 18 */	b lbl_80140F88
lbl_80140F74:
/* 80140F74 0013DD74  2C 00 00 03 */	cmpwi r0, 3
/* 80140F78 0013DD78  40 82 00 10 */	bne lbl_80140F88
/* 80140F7C 0013DD7C  80 7D 07 F0 */	lwz r3, 0x7f0(r29)
/* 80140F80 0013DD80  38 80 00 BE */	li r4, 0xbe
/* 80140F84 0013DD84  4B ED E6 6D */	bl zEntEvent__FP5xBaseUi
lbl_80140F88:
/* 80140F88 0013DD88  38 00 00 00 */	li r0, 0
/* 80140F8C 0013DD8C  90 1D 0D 38 */	stw r0, 0xd38(r29)
lbl_80140F90:
/* 80140F90 0013DD90  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 80140F94 0013DD94  80 9D 02 D8 */	lwz r4, 0x2d8(r29)
/* 80140F98 0013DD98  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 80140F9C 0013DD9C  38 63 05 8C */	addi r3, r3, 0x58c
/* 80140FA0 0013DDA0  4C C6 31 82 */	crclr 6
/* 80140FA4 0013DDA4  4B ED 6D 99 */	bl xprintf__FPCce
/* 80140FA8 0013DDA8  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 80140FAC 0013DDAC  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 80140FB0 0013DDB0  38 63 05 96 */	addi r3, r3, 0x596
/* 80140FB4 0013DDB4  4C C6 31 82 */	crclr 6
/* 80140FB8 0013DDB8  4B ED 6D 85 */	bl xprintf__FPCce
/* 80140FBC 0013DDBC  7F BC EB 78 */	mr r28, r29
/* 80140FC0 0013DDC0  7F BA EB 78 */	mr r26, r29
/* 80140FC4 0013DDC4  3B 20 00 00 */	li r25, 0
lbl_80140FC8:
/* 80140FC8 0013DDC8  80 7C 04 5C */	lwz r3, 0x45c(r28)
/* 80140FCC 0013DDCC  38 00 00 01 */	li r0, 1
/* 80140FD0 0013DDD0  C0 02 A5 5C */	lfs f0, _1209-_SDA2_BASE_(r2)
/* 80140FD4 0013DDD4  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80140FD8 0013DDD8  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80140FDC 0013DDDC  80 63 00 08 */	lwz r3, 8(r3)
/* 80140FE0 0013DDE0  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 80140FE4 0013DDE4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80140FE8 0013DDE8  40 81 00 08 */	ble lbl_80140FF0
/* 80140FEC 0013DDEC  38 00 00 00 */	li r0, 0
lbl_80140FF0:
/* 80140FF0 0013DDF0  80 7C 04 60 */	lwz r3, 0x460(r28)
/* 80140FF4 0013DDF4  C0 02 A5 5C */	lfs f0, _1209-_SDA2_BASE_(r2)
/* 80140FF8 0013DDF8  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80140FFC 0013DDFC  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80141000 0013DE00  80 63 00 08 */	lwz r3, 8(r3)
/* 80141004 0013DE04  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 80141008 0013DE08  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014100C 0013DE0C  40 81 00 08 */	ble lbl_80141014
/* 80141010 0013DE10  38 00 00 00 */	li r0, 0
lbl_80141014:
/* 80141014 0013DE14  80 7C 04 64 */	lwz r3, 0x464(r28)
/* 80141018 0013DE18  C0 02 A5 5C */	lfs f0, _1209-_SDA2_BASE_(r2)
/* 8014101C 0013DE1C  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80141020 0013DE20  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80141024 0013DE24  80 63 00 08 */	lwz r3, 8(r3)
/* 80141028 0013DE28  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 8014102C 0013DE2C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80141030 0013DE30  40 81 00 08 */	ble lbl_80141038
/* 80141034 0013DE34  38 00 00 00 */	li r0, 0
lbl_80141038:
/* 80141038 0013DE38  80 7C 04 68 */	lwz r3, 0x468(r28)
/* 8014103C 0013DE3C  C0 02 A5 5C */	lfs f0, _1209-_SDA2_BASE_(r2)
/* 80141040 0013DE40  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80141044 0013DE44  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80141048 0013DE48  80 63 00 08 */	lwz r3, 8(r3)
/* 8014104C 0013DE4C  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 80141050 0013DE50  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80141054 0013DE54  40 81 00 08 */	ble lbl_8014105C
/* 80141058 0013DE58  38 00 00 00 */	li r0, 0
lbl_8014105C:
/* 8014105C 0013DE5C  2C 00 00 00 */	cmpwi r0, 0
/* 80141060 0013DE60  41 82 00 3C */	beq lbl_8014109C
/* 80141064 0013DE64  3B 00 00 00 */	li r24, 0
/* 80141068 0013DE68  7F 9B E3 78 */	mr r27, r28
lbl_8014106C:
/* 8014106C 0013DE6C  80 7B 04 5C */	lwz r3, 0x45c(r27)
/* 80141070 0013DE70  80 83 00 24 */	lwz r4, 0x24(r3)
/* 80141074 0013DE74  A0 04 00 44 */	lhz r0, 0x44(r4)
/* 80141078 0013DE78  70 00 FF FD */	andi. r0, r0, 0xfffd
/* 8014107C 0013DE7C  B0 04 00 44 */	sth r0, 0x44(r4)
/* 80141080 0013DE80  4B ED A7 69 */	bl xEntHide__FP4xEnt
/* 80141084 0013DE84  3B 18 00 01 */	addi r24, r24, 1
/* 80141088 0013DE88  3B 7B 00 04 */	addi r27, r27, 4
/* 8014108C 0013DE8C  2C 18 00 04 */	cmpwi r24, 4
/* 80141090 0013DE90  41 80 FF DC */	blt lbl_8014106C
/* 80141094 0013DE94  80 7A 04 DC */	lwz r3, 0x4dc(r26)
/* 80141098 0013DE98  4B ED A7 61 */	bl xEntShow__FP4xEnt
lbl_8014109C:
/* 8014109C 0013DE9C  3B 39 00 01 */	addi r25, r25, 1
/* 801410A0 0013DEA0  3B 5A 00 04 */	addi r26, r26, 4
/* 801410A4 0013DEA4  2C 19 00 08 */	cmpwi r25, 8
/* 801410A8 0013DEA8  3B 9C 00 10 */	addi r28, r28, 0x10
/* 801410AC 0013DEAC  41 80 FF 1C */	blt lbl_80140FC8
/* 801410B0 0013DEB0  C0 1D 0A F8 */	lfs f0, 0xaf8(r29)
/* 801410B4 0013DEB4  3C 00 43 30 */	lis r0, 0x4330
/* 801410B8 0013DEB8  90 01 00 78 */	stw r0, 0x78(r1)
/* 801410BC 0013DEBC  EC 00 F8 2A */	fadds f0, f0, f31
/* 801410C0 0013DEC0  D0 1D 0A F8 */	stfs f0, 0xaf8(r29)
/* 801410C4 0013DEC4  80 7D 0B 04 */	lwz r3, 0xb04(r29)
/* 801410C8 0013DEC8  C0 82 A5 B8 */	lfs f4, _1935-_SDA2_BASE_(r2)
/* 801410CC 0013DECC  80 63 00 00 */	lwz r3, 0(r3)
/* 801410D0 0013DED0  C0 7D 0A F8 */	lfs f3, 0xaf8(r29)
/* 801410D4 0013DED4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801410D8 0013DED8  C8 22 A5 00 */	lfd f1, _1039-_SDA2_BASE_(r2)
/* 801410DC 0013DEDC  90 61 00 7C */	stw r3, 0x7c(r1)
/* 801410E0 0013DEE0  EC 44 00 F2 */	fmuls f2, f4, f3
/* 801410E4 0013DEE4  C8 01 00 78 */	lfd f0, 0x78(r1)
/* 801410E8 0013DEE8  EC 00 08 28 */	fsubs f0, f0, f1
/* 801410EC 0013DEEC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801410F0 0013DEF0  40 81 00 20 */	ble lbl_80141110
/* 801410F4 0013DEF4  90 61 00 7C */	stw r3, 0x7c(r1)
/* 801410F8 0013DEF8  90 01 00 78 */	stw r0, 0x78(r1)
/* 801410FC 0013DEFC  C8 01 00 78 */	lfd f0, 0x78(r1)
/* 80141100 0013DF00  EC 00 08 28 */	fsubs f0, f0, f1
/* 80141104 0013DF04  EC 00 20 24 */	fdivs f0, f0, f4
/* 80141108 0013DF08  EC 03 00 28 */	fsubs f0, f3, f0
/* 8014110C 0013DF0C  D0 1D 0A F8 */	stfs f0, 0xaf8(r29)
lbl_80141110:
/* 80141110 0013DF10  80 7D 0B 04 */	lwz r3, 0xb04(r29)
/* 80141114 0013DF14  C0 3D 0A F8 */	lfs f1, 0xaf8(r29)
/* 80141118 0013DF18  48 01 EF 1D */	bl xJaw_EvalData__FPvf
/* 8014111C 0013DF1C  C0 5D 0A FC */	lfs f2, 0xafc(r29)
/* 80141120 0013DF20  C0 02 A5 68 */	lfs f0, _1380-_SDA2_BASE_(r2)
/* 80141124 0013DF24  EC 02 00 32 */	fmuls f0, f2, f0
/* 80141128 0013DF28  D0 1D 0A FC */	stfs f0, 0xafc(r29)
/* 8014112C 0013DF2C  C0 42 A5 48 */	lfs f2, _1192-_SDA2_BASE_(r2)
/* 80141130 0013DF30  C0 1D 0A FC */	lfs f0, 0xafc(r29)
/* 80141134 0013DF34  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80141138 0013DF38  D0 1D 0A FC */	stfs f0, 0xafc(r29)
/* 8014113C 0013DF3C  C0 5D 0B 00 */	lfs f2, 0xb00(r29)
/* 80141140 0013DF40  C0 02 A5 BC */	lfs f0, _1936-_SDA2_BASE_(r2)
/* 80141144 0013DF44  EC 02 00 32 */	fmuls f0, f2, f0
/* 80141148 0013DF48  D0 1D 0B 00 */	stfs f0, 0xb00(r29)
/* 8014114C 0013DF4C  C0 42 A5 C0 */	lfs f2, _1937-_SDA2_BASE_(r2)
/* 80141150 0013DF50  C0 1D 0B 00 */	lfs f0, 0xb00(r29)
/* 80141154 0013DF54  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80141158 0013DF58  D0 1D 0B 00 */	stfs f0, 0xb00(r29)
/* 8014115C 0013DF5C  C0 02 A4 E8 */	lfs f0, _1032-_SDA2_BASE_(r2)
/* 80141160 0013DF60  80 7D 0B 08 */	lwz r3, 0xb08(r29)
/* 80141164 0013DF64  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80141168 0013DF68  40 81 00 10 */	ble lbl_80141178
/* 8014116C 0013DF6C  38 00 00 01 */	li r0, 1
/* 80141170 0013DF70  90 1D 0B 08 */	stw r0, 0xb08(r29)
/* 80141174 0013DF74  48 00 00 0C */	b lbl_80141180
lbl_80141178:
/* 80141178 0013DF78  38 00 00 00 */	li r0, 0
/* 8014117C 0013DF7C  90 1D 0B 08 */	stw r0, 0xb08(r29)
lbl_80141180:
/* 80141180 0013DF80  2C 03 00 00 */	cmpwi r3, 0
/* 80141184 0013DF84  40 82 00 90 */	bne lbl_80141214
/* 80141188 0013DF88  80 1D 0B 08 */	lwz r0, 0xb08(r29)
/* 8014118C 0013DF8C  2C 00 00 00 */	cmpwi r0, 0
/* 80141190 0013DF90  41 82 00 84 */	beq lbl_80141214
/* 80141194 0013DF94  4B EE FA F5 */	bl xurand__Fv
/* 80141198 0013DF98  C0 02 A4 E8 */	lfs f0, _1032-_SDA2_BASE_(r2)
/* 8014119C 0013DF9C  EC 00 00 72 */	fmuls f0, f0, f1
/* 801411A0 0013DFA0  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 801411A4 0013DFA4  4B EE FA E5 */	bl xurand__Fv
/* 801411A8 0013DFA8  C0 02 A4 E8 */	lfs f0, _1032-_SDA2_BASE_(r2)
/* 801411AC 0013DFAC  EC 00 00 72 */	fmuls f0, f0, f1
/* 801411B0 0013DFB0  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 801411B4 0013DFB4  4B EE FA D5 */	bl xurand__Fv
/* 801411B8 0013DFB8  C0 02 A4 E8 */	lfs f0, _1032-_SDA2_BASE_(r2)
/* 801411BC 0013DFBC  EC 00 00 72 */	fmuls f0, f0, f1
/* 801411C0 0013DFC0  D0 01 00 64 */	stfs f0, 0x64(r1)
/* 801411C4 0013DFC4  4B EE FA C5 */	bl xurand__Fv
/* 801411C8 0013DFC8  C0 02 A5 C4 */	lfs f0, _1938-_SDA2_BASE_(r2)
/* 801411CC 0013DFCC  38 61 00 5C */	addi r3, r1, 0x5c
/* 801411D0 0013DFD0  C0 42 A4 E8 */	lfs f2, _1032-_SDA2_BASE_(r2)
/* 801411D4 0013DFD4  EC 20 00 72 */	fmuls f1, f0, f1
/* 801411D8 0013DFD8  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 801411DC 0013DFDC  D0 1D 0D 24 */	stfs f0, 0xd24(r29)
/* 801411E0 0013DFE0  FC 00 08 1E */	fctiwz f0, f1
/* 801411E4 0013DFE4  D8 01 00 78 */	stfd f0, 0x78(r1)
/* 801411E8 0013DFE8  80 01 00 7C */	lwz r0, 0x7c(r1)
/* 801411EC 0013DFEC  54 00 10 3A */	slwi r0, r0, 2
/* 801411F0 0013DFF0  7C 03 04 2E */	lfsx f0, r3, r0
/* 801411F4 0013DFF4  EC 00 10 2A */	fadds f0, f0, f2
/* 801411F8 0013DFF8  7C 03 05 2E */	stfsx f0, r3, r0
/* 801411FC 0013DFFC  C0 01 00 5C */	lfs f0, 0x5c(r1)
/* 80141200 0013E000  C0 21 00 60 */	lfs f1, 0x60(r1)
/* 80141204 0013E004  D0 1D 0D 28 */	stfs f0, 0xd28(r29)
/* 80141208 0013E008  C0 01 00 64 */	lfs f0, 0x64(r1)
/* 8014120C 0013E00C  D0 3D 0D 2C */	stfs f1, 0xd2c(r29)
/* 80141210 0013E010  D0 1D 0D 30 */	stfs f0, 0xd30(r29)
lbl_80141214:
/* 80141214 0013E014  C0 1D 0D 24 */	lfs f0, 0xd24(r29)
/* 80141218 0013E018  C0 42 A4 D8 */	lfs f2, _864-_SDA2_BASE_(r2)
/* 8014121C 0013E01C  EC 00 F8 28 */	fsubs f0, f0, f31
/* 80141220 0013E020  C0 3D 0A FC */	lfs f1, 0xafc(r29)
/* 80141224 0013E024  EC 62 10 7A */	fmadds f3, f2, f1, f2
/* 80141228 0013E028  D0 1D 0D 24 */	stfs f0, 0xd24(r29)
/* 8014122C 0013E02C  C0 22 A4 E8 */	lfs f1, _1032-_SDA2_BASE_(r2)
/* 80141230 0013E030  C0 1D 0A FC */	lfs f0, 0xafc(r29)
/* 80141234 0013E034  C0 5D 0D 24 */	lfs f2, 0xd24(r29)
/* 80141238 0013E038  EC 01 00 32 */	fmuls f0, f1, f0
/* 8014123C 0013E03C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80141240 0013E040  40 80 00 08 */	bge lbl_80141248
/* 80141244 0013E044  D0 7D 0D 24 */	stfs f3, 0xd24(r29)
lbl_80141248:
/* 80141248 0013E048  C0 1D 0D 24 */	lfs f0, 0xd24(r29)
/* 8014124C 0013E04C  38 7D 0B CC */	addi r3, r29, 0xbcc
/* 80141250 0013E050  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 80141254 0013E054  38 9D 0D 0C */	addi r4, r29, 0xd0c
/* 80141258 0013E058  EC 00 18 28 */	fsubs f0, f0, f3
/* 8014125C 0013E05C  C0 42 A4 E4 */	lfs f2, _1031-_SDA2_BASE_(r2)
/* 80141260 0013E060  38 A0 00 02 */	li r5, 2
/* 80141264 0013E064  EC 01 18 3A */	fmadds f0, f1, f0, f3
/* 80141268 0013E068  EC 02 00 32 */	fmuls f0, f2, f0
/* 8014126C 0013E06C  FC 00 00 1E */	fctiwz f0, f0
/* 80141270 0013E070  D8 01 00 78 */	stfd f0, 0x78(r1)
/* 80141274 0013E074  80 01 00 7C */	lwz r0, 0x7c(r1)
/* 80141278 0013E078  98 1D 0D 13 */	stb r0, 0xd13(r29)
/* 8014127C 0013E07C  C0 22 A4 E4 */	lfs f1, _1031-_SDA2_BASE_(r2)
/* 80141280 0013E080  C0 1D 0D 28 */	lfs f0, 0xd28(r29)
/* 80141284 0013E084  EC 01 00 32 */	fmuls f0, f1, f0
/* 80141288 0013E088  FC 00 00 1E */	fctiwz f0, f0
/* 8014128C 0013E08C  D8 01 00 80 */	stfd f0, 0x80(r1)
/* 80141290 0013E090  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80141294 0013E094  98 1D 0D 10 */	stb r0, 0xd10(r29)
/* 80141298 0013E098  C0 22 A4 E4 */	lfs f1, _1031-_SDA2_BASE_(r2)
/* 8014129C 0013E09C  C0 1D 0D 2C */	lfs f0, 0xd2c(r29)
/* 801412A0 0013E0A0  EC 01 00 32 */	fmuls f0, f1, f0
/* 801412A4 0013E0A4  FC 00 00 1E */	fctiwz f0, f0
/* 801412A8 0013E0A8  D8 01 00 88 */	stfd f0, 0x88(r1)
/* 801412AC 0013E0AC  80 01 00 8C */	lwz r0, 0x8c(r1)
/* 801412B0 0013E0B0  98 1D 0D 11 */	stb r0, 0xd11(r29)
/* 801412B4 0013E0B4  C0 22 A4 E4 */	lfs f1, _1031-_SDA2_BASE_(r2)
/* 801412B8 0013E0B8  C0 1D 0D 30 */	lfs f0, 0xd30(r29)
/* 801412BC 0013E0BC  EC 01 00 32 */	fmuls f0, f1, f0
/* 801412C0 0013E0C0  FC 00 00 1E */	fctiwz f0, f0
/* 801412C4 0013E0C4  D8 01 00 90 */	stfd f0, 0x90(r1)
/* 801412C8 0013E0C8  80 01 00 94 */	lwz r0, 0x94(r1)
/* 801412CC 0013E0CC  98 1D 0D 12 */	stb r0, 0xd12(r29)
/* 801412D0 0013E0D0  C0 1D 0D 24 */	lfs f0, 0xd24(r29)
/* 801412D4 0013E0D4  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 801412D8 0013E0D8  EC 00 18 28 */	fsubs f0, f0, f3
/* 801412DC 0013E0DC  C0 42 A4 E4 */	lfs f2, _1031-_SDA2_BASE_(r2)
/* 801412E0 0013E0E0  EC 01 18 3A */	fmadds f0, f1, f0, f3
/* 801412E4 0013E0E4  EC 02 00 32 */	fmuls f0, f2, f0
/* 801412E8 0013E0E8  FC 00 00 1E */	fctiwz f0, f0
/* 801412EC 0013E0EC  D8 01 00 98 */	stfd f0, 0x98(r1)
/* 801412F0 0013E0F0  80 01 00 9C */	lwz r0, 0x9c(r1)
/* 801412F4 0013E0F4  98 1D 0D 1F */	stb r0, 0xd1f(r29)
/* 801412F8 0013E0F8  C0 22 A4 E4 */	lfs f1, _1031-_SDA2_BASE_(r2)
/* 801412FC 0013E0FC  C0 1D 0D 28 */	lfs f0, 0xd28(r29)
/* 80141300 0013E100  EC 01 00 32 */	fmuls f0, f1, f0
/* 80141304 0013E104  FC 00 00 1E */	fctiwz f0, f0
/* 80141308 0013E108  D8 01 00 A0 */	stfd f0, 0xa0(r1)
/* 8014130C 0013E10C  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80141310 0013E110  98 1D 0D 1C */	stb r0, 0xd1c(r29)
/* 80141314 0013E114  C0 22 A4 E4 */	lfs f1, _1031-_SDA2_BASE_(r2)
/* 80141318 0013E118  C0 1D 0D 2C */	lfs f0, 0xd2c(r29)
/* 8014131C 0013E11C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80141320 0013E120  FC 00 00 1E */	fctiwz f0, f0
/* 80141324 0013E124  D8 01 00 A8 */	stfd f0, 0xa8(r1)
/* 80141328 0013E128  80 01 00 AC */	lwz r0, 0xac(r1)
/* 8014132C 0013E12C  98 1D 0D 1D */	stb r0, 0xd1d(r29)
/* 80141330 0013E130  C0 22 A4 E4 */	lfs f1, _1031-_SDA2_BASE_(r2)
/* 80141334 0013E134  C0 1D 0D 30 */	lfs f0, 0xd30(r29)
/* 80141338 0013E138  EC 01 00 32 */	fmuls f0, f1, f0
/* 8014133C 0013E13C  FC 00 00 1E */	fctiwz f0, f0
/* 80141340 0013E140  D8 01 00 B0 */	stfd f0, 0xb0(r1)
/* 80141344 0013E144  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 80141348 0013E148  98 1D 0D 1E */	stb r0, 0xd1e(r29)
/* 8014134C 0013E14C  4B EE 91 59 */	bl set_curve__9xFXRibbonFPCQ29xFXRibbon10curve_nodeUl
/* 80141350 0013E150  4B EE F9 39 */	bl xurand__Fv
/* 80141354 0013E154  C0 02 A5 C8 */	lfs f0, _1939-_SDA2_BASE_(r2)
/* 80141358 0013E158  38 61 00 50 */	addi r3, r1, 0x50
/* 8014135C 0013E15C  EC 00 00 72 */	fmuls f0, f0, f1
/* 80141360 0013E160  FC 00 00 1E */	fctiwz f0, f0
/* 80141364 0013E164  D8 01 00 B8 */	stfd f0, 0xb8(r1)
/* 80141368 0013E168  80 01 00 BC */	lwz r0, 0xbc(r1)
/* 8014136C 0013E16C  1C 80 00 0C */	mulli r4, r0, 0xc
/* 80141370 0013E170  38 84 0B 0C */	addi r4, r4, 0xb0c
/* 80141374 0013E174  7C 9D 22 14 */	add r4, r29, r4
/* 80141378 0013E178  4B F0 D1 65 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 8014137C 0013E17C  C0 21 00 58 */	lfs f1, 0x58(r1)
/* 80141380 0013E180  38 61 00 44 */	addi r3, r1, 0x44
/* 80141384 0013E184  C0 01 00 50 */	lfs f0, 0x50(r1)
/* 80141388 0013E188  7C 64 1B 78 */	mr r4, r3
/* 8014138C 0013E18C  FC 20 08 50 */	fneg f1, f1
/* 80141390 0013E190  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 80141394 0013E194  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 80141398 0013E198  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 8014139C 0013E19C  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 801413A0 0013E1A0  4B F0 CF 51 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 801413A4 0013E1A4  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 801413A8 0013E1A8  38 7D 0B CC */	addi r3, r29, 0xbcc
/* 801413AC 0013E1AC  38 81 00 50 */	addi r4, r1, 0x50
/* 801413B0 0013E1B0  38 A1 00 44 */	addi r5, r1, 0x44
/* 801413B4 0013E1B4  FC 40 08 90 */	fmr f2, f1
/* 801413B8 0013E1B8  38 C0 00 00 */	li r6, 0
/* 801413BC 0013E1BC  4B EE 91 25 */	bl insert__9xFXRibbonFRC5xVec3RC5xVec3ffUi
/* 801413C0 0013E1C0  4B EE F8 C9 */	bl xurand__Fv
/* 801413C4 0013E1C4  C0 82 A4 E8 */	lfs f4, _1032-_SDA2_BASE_(r2)
/* 801413C8 0013E1C8  C0 42 A5 10 */	lfs f2, _1063-_SDA2_BASE_(r2)
/* 801413CC 0013E1CC  EC 61 20 28 */	fsubs f3, f1, f4
/* 801413D0 0013E1D0  C0 22 A5 CC */	lfs f1, _1940-_SDA2_BASE_(r2)
/* 801413D4 0013E1D4  C0 02 A4 F0 */	lfs f0, _1034-_SDA2_BASE_(r2)
/* 801413D8 0013E1D8  EC 62 00 F2 */	fmuls f3, f2, f3
/* 801413DC 0013E1DC  EC 44 00 F2 */	fmuls f2, f4, f3
/* 801413E0 0013E1E0  EC 22 08 FC */	fnmsubs f1, f2, f3, f1
/* 801413E4 0013E1E4  EC 63 00 72 */	fmuls f3, f3, f1
/* 801413E8 0013E1E8  EC 00 00 F2 */	fmuls f0, f0, f3
/* 801413EC 0013E1EC  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 801413F0 0013E1F0  4B EE F8 99 */	bl xurand__Fv
/* 801413F4 0013E1F4  C0 82 A4 E8 */	lfs f4, _1032-_SDA2_BASE_(r2)
/* 801413F8 0013E1F8  38 7D 0B CC */	addi r3, r29, 0xbcc
/* 801413FC 0013E1FC  C0 42 A5 10 */	lfs f2, _1063-_SDA2_BASE_(r2)
/* 80141400 0013E200  38 81 00 50 */	addi r4, r1, 0x50
/* 80141404 0013E204  EC 61 20 28 */	fsubs f3, f1, f4
/* 80141408 0013E208  C0 22 A5 CC */	lfs f1, _1940-_SDA2_BASE_(r2)
/* 8014140C 0013E20C  C0 02 A4 F0 */	lfs f0, _1034-_SDA2_BASE_(r2)
/* 80141410 0013E210  38 A1 00 44 */	addi r5, r1, 0x44
/* 80141414 0013E214  38 C0 00 00 */	li r6, 0
/* 80141418 0013E218  EC 62 00 F2 */	fmuls f3, f2, f3
/* 8014141C 0013E21C  EC 44 00 F2 */	fmuls f2, f4, f3
/* 80141420 0013E220  EC 22 08 FC */	fnmsubs f1, f2, f3, f1
/* 80141424 0013E224  EC 63 00 72 */	fmuls f3, f3, f1
/* 80141428 0013E228  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8014142C 0013E22C  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 80141430 0013E230  C0 02 A5 D0 */	lfs f0, _1941-_SDA2_BASE_(r2)
/* 80141434 0013E234  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 80141438 0013E238  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 8014143C 0013E23C  FC 40 08 90 */	fmr f2, f1
/* 80141440 0013E240  4B EE 90 A1 */	bl insert__9xFXRibbonFRC5xVec3RC5xVec3ffUi
/* 80141444 0013E244  80 1D 02 C0 */	lwz r0, 0x2c0(r29)
/* 80141448 0013E248  54 00 05 29 */	rlwinm. r0, r0, 0, 0x14, 0x14
/* 8014144C 0013E24C  41 82 01 60 */	beq lbl_801415AC
/* 80141450 0013E250  C0 3D 0D 3C */	lfs f1, 0xd3c(r29)
/* 80141454 0013E254  4B EC 93 A9 */	bl xsqrt__Ff
/* 80141458 0013E258  C0 5D 0D 40 */	lfs f2, 0xd40(r29)
/* 8014145C 0013E25C  C0 1D 0D 3C */	lfs f0, 0xd3c(r29)
/* 80141460 0013E260  EC 5F 00 B2 */	fmuls f2, f31, f2
/* 80141464 0013E264  EC 22 08 24 */	fdivs f1, f2, f1
/* 80141468 0013E268  EC 00 08 2A */	fadds f0, f0, f1
/* 8014146C 0013E26C  D0 1D 0D 3C */	stfs f0, 0xd3c(r29)
/* 80141470 0013E270  C0 3D 0D 3C */	lfs f1, 0xd3c(r29)
/* 80141474 0013E274  C0 1D 0D 44 */	lfs f0, 0xd44(r29)
/* 80141478 0013E278  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014147C 0013E27C  40 81 00 24 */	ble lbl_801414A0
/* 80141480 0013E280  80 1D 02 C0 */	lwz r0, 0x2c0(r29)
/* 80141484 0013E284  54 00 05 66 */	rlwinm r0, r0, 0, 0x15, 0x13
/* 80141488 0013E288  90 1D 02 C0 */	stw r0, 0x2c0(r29)
/* 8014148C 0013E28C  80 7D 07 B4 */	lwz r3, 0x7b4(r29)
/* 80141490 0013E290  88 03 00 30 */	lbz r0, 0x30(r3)
/* 80141494 0013E294  54 00 06 3C */	rlwinm r0, r0, 0, 0x18, 0x1e
/* 80141498 0013E298  98 03 00 30 */	stb r0, 0x30(r3)
/* 8014149C 0013E29C  48 00 01 20 */	b lbl_801415BC
lbl_801414A0:
/* 801414A0 0013E2A0  80 9D 07 B4 */	lwz r4, 0x7b4(r29)
/* 801414A4 0013E2A4  3C 60 80 3C */	lis r3, globals@ha
/* 801414A8 0013E2A8  38 63 05 58 */	addi r3, r3, globals@l
/* 801414AC 0013E2AC  88 04 00 30 */	lbz r0, 0x30(r4)
/* 801414B0 0013E2B0  60 00 00 01 */	ori r0, r0, 1
/* 801414B4 0013E2B4  98 04 00 30 */	stb r0, 0x30(r4)
/* 801414B8 0013E2B8  80 9D 07 B4 */	lwz r4, 0x7b4(r29)
/* 801414BC 0013E2BC  C0 1D 0D 3C */	lfs f0, 0xd3c(r29)
/* 801414C0 0013E2C0  80 84 00 10 */	lwz r4, 0x10(r4)
/* 801414C4 0013E2C4  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 801414C8 0013E2C8  80 03 16 D4 */	lwz r0, 0x16d4(r3)
/* 801414CC 0013E2CC  2C 00 00 00 */	cmpwi r0, 0
/* 801414D0 0013E2D0  40 82 00 EC */	bne lbl_801415BC
/* 801414D4 0013E2D4  80 BF 07 04 */	lwz r5, 0x704(r31)
/* 801414D8 0013E2D8  38 61 00 38 */	addi r3, r1, 0x38
/* 801414DC 0013E2DC  80 9D 07 B4 */	lwz r4, 0x7b4(r29)
/* 801414E0 0013E2E0  80 C5 00 4C */	lwz r6, 0x4c(r5)
/* 801414E4 0013E2E4  80 A4 00 10 */	lwz r5, 0x10(r4)
/* 801414E8 0013E2E8  38 86 00 30 */	addi r4, r6, 0x30
/* 801414EC 0013E2EC  38 A5 00 30 */	addi r5, r5, 0x30
/* 801414F0 0013E2F0  4B EC D1 A1 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 801414F4 0013E2F4  38 61 00 38 */	addi r3, r1, 0x38
/* 801414F8 0013E2F8  4B ED 3B D5 */	bl xVec3Length2__FPC5xVec3
/* 801414FC 0013E2FC  C0 1D 0D 3C */	lfs f0, 0xd3c(r29)
/* 80141500 0013E300  EC 40 00 32 */	fmuls f2, f0, f0
/* 80141504 0013E304  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80141508 0013E308  40 80 00 B4 */	bge lbl_801415BC
/* 8014150C 0013E30C  C0 02 A5 D4 */	lfs f0, _1942-_SDA2_BASE_(r2)
/* 80141510 0013E310  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80141514 0013E314  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80141518 0013E318  40 81 00 A4 */	ble lbl_801415BC
/* 8014151C 0013E31C  80 BF 07 04 */	lwz r5, 0x704(r31)
/* 80141520 0013E320  38 61 00 2C */	addi r3, r1, 0x2c
/* 80141524 0013E324  80 9D 00 48 */	lwz r4, 0x48(r29)
/* 80141528 0013E328  80 C5 00 4C */	lwz r6, 0x4c(r5)
/* 8014152C 0013E32C  38 A4 00 30 */	addi r5, r4, 0x30
/* 80141530 0013E330  38 86 00 30 */	addi r4, r6, 0x30
/* 80141534 0013E334  4B EC D1 5D */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 80141538 0013E338  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8014153C 0013E33C  38 61 00 2C */	addi r3, r1, 0x2c
/* 80141540 0013E340  7C 64 1B 78 */	mr r4, r3
/* 80141544 0013E344  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80141548 0013E348  4B F0 CD A9 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 8014154C 0013E34C  80 7F 07 04 */	lwz r3, 0x704(r31)
/* 80141550 0013E350  38 81 00 2C */	addi r4, r1, 0x2c
/* 80141554 0013E354  C0 22 A4 EC */	lfs f1, _1033-_SDA2_BASE_(r2)
/* 80141558 0013E358  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8014155C 0013E35C  38 63 00 20 */	addi r3, r3, 0x20
/* 80141560 0013E360  4B EC 9B 31 */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 80141564 0013E364  80 7F 07 04 */	lwz r3, 0x704(r31)
/* 80141568 0013E368  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8014156C 0013E36C  38 83 00 10 */	addi r4, r3, 0x10
/* 80141570 0013E370  38 A3 00 20 */	addi r5, r3, 0x20
/* 80141574 0013E374  4B ED 3B 19 */	bl xVec3Cross__FP5xVec3PC5xVec3PC5xVec3
/* 80141578 0013E378  C0 22 A4 F4 */	lfs f1, _1035-_SDA2_BASE_(r2)
/* 8014157C 0013E37C  38 61 00 2C */	addi r3, r1, 0x2c
/* 80141580 0013E380  4B ED A3 B9 */	bl xVec3SMulBy__FP5xVec3f
/* 80141584 0013E384  C0 02 A5 30 */	lfs f0, _1071-_SDA2_BASE_(r2)
/* 80141588 0013E388  38 A1 00 2C */	addi r5, r1, 0x2c
/* 8014158C 0013E38C  38 60 00 00 */	li r3, 0
/* 80141590 0013E390  38 80 00 01 */	li r4, 1
/* 80141594 0013E394  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80141598 0013E398  4B F3 4C 9D */	bl zEntPlayer_Damage__FP5xBaseUiPC5xVec3
/* 8014159C 0013E39C  80 1D 02 C0 */	lwz r0, 0x2c0(r29)
/* 801415A0 0013E3A0  60 00 00 02 */	ori r0, r0, 2
/* 801415A4 0013E3A4  90 1D 02 C0 */	stw r0, 0x2c0(r29)
/* 801415A8 0013E3A8  48 00 00 14 */	b lbl_801415BC
lbl_801415AC:
/* 801415AC 0013E3AC  80 7D 07 B4 */	lwz r3, 0x7b4(r29)
/* 801415B0 0013E3B0  88 03 00 30 */	lbz r0, 0x30(r3)
/* 801415B4 0013E3B4  54 00 06 3C */	rlwinm r0, r0, 0, 0x18, 0x1e
/* 801415B8 0013E3B8  98 03 00 30 */	stb r0, 0x30(r3)
lbl_801415BC:
/* 801415BC 0013E3BC  80 1D 02 D8 */	lwz r0, 0x2d8(r29)
/* 801415C0 0013E3C0  2C 00 00 01 */	cmpwi r0, 1
/* 801415C4 0013E3C4  41 82 00 70 */	beq lbl_80141634
/* 801415C8 0013E3C8  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 801415CC 0013E3CC  38 61 00 08 */	addi r3, r1, 8
/* 801415D0 0013E3D0  C0 62 A4 E8 */	lfs f3, _1032-_SDA2_BASE_(r2)
/* 801415D4 0013E3D4  FC 40 08 90 */	fmr f2, f1
/* 801415D8 0013E3D8  4B EC DA 25 */	bl xVec3Init__FP5xVec3fff
/* 801415DC 0013E3DC  80 9D 07 C0 */	lwz r4, 0x7c0(r29)
/* 801415E0 0013E3E0  38 61 00 20 */	addi r3, r1, 0x20
/* 801415E4 0013E3E4  38 C1 00 08 */	addi r6, r1, 8
/* 801415E8 0013E3E8  38 A0 00 05 */	li r5, 5
/* 801415EC 0013E3EC  80 84 00 24 */	lwz r4, 0x24(r4)
/* 801415F0 0013E3F0  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 801415F4 0013E3F4  4B FF EE D9 */	bl GetBonePos__FP5xVec3P7xMat4x3iP5xVec3
/* 801415F8 0013E3F8  80 9D 07 C0 */	lwz r4, 0x7c0(r29)
/* 801415FC 0013E3FC  38 61 00 14 */	addi r3, r1, 0x14
/* 80141600 0013E400  38 C1 00 08 */	addi r6, r1, 8
/* 80141604 0013E404  38 A0 00 08 */	li r5, 8
/* 80141608 0013E408  80 84 00 24 */	lwz r4, 0x24(r4)
/* 8014160C 0013E40C  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80141610 0013E410  4B FF EE BD */	bl GetBonePos__FP5xVec3P7xMat4x3iP5xVec3
/* 80141614 0013E414  80 7D 09 78 */	lwz r3, 0x978(r29)
/* 80141618 0013E418  38 81 00 20 */	addi r4, r1, 0x20
/* 8014161C 0013E41C  38 A1 00 14 */	addi r5, r1, 0x14
/* 80141620 0013E420  4B F6 02 A9 */	bl zLightningModifyEndpoints__FP10zLightningP5xVec3P5xVec3
/* 80141624 0013E424  80 7D 09 7C */	lwz r3, 0x97c(r29)
/* 80141628 0013E428  38 81 00 14 */	addi r4, r1, 0x14
/* 8014162C 0013E42C  38 A1 00 20 */	addi r5, r1, 0x20
/* 80141630 0013E430  4B F6 02 99 */	bl zLightningModifyEndpoints__FP10zLightningP5xVec3P5xVec3
lbl_80141634:
/* 80141634 0013E434  FC 20 F8 90 */	fmr f1, f31
/* 80141638 0013E438  7F A3 EB 78 */	mr r3, r29
/* 8014163C 0013E43C  7F C4 F3 78 */	mr r4, r30
/* 80141640 0013E440  4B FA EA B1 */	bl Process__10zNPCCommonFP6xScenef
/* 80141644 0013E444  FC 20 F8 90 */	fmr f1, f31
/* 80141648 0013E448  4B FF E2 35 */	bl zNPCBSandy_BossDamageEffect_Update__Ff
/* 8014164C 0013E44C  E3 E1 00 E8 */	psq_l f31, 232(r1), 0, qr0
/* 80141650 0013E450  CB E1 00 E0 */	lfd f31, 0xe0(r1)
/* 80141654 0013E454  BB 01 00 C0 */	lmw r24, 0xc0(r1)
/* 80141658 0013E458  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 8014165C 0013E45C  7C 08 03 A6 */	mtlr r0
/* 80141660 0013E460  38 21 00 F0 */	addi r1, r1, 0xf0
/* 80141664 0013E464  4E 80 00 20 */	blr 

.global zNPCBSandy_AddBoundEntsToGrid__FP6zScene
zNPCBSandy_AddBoundEntsToGrid__FP6zScene:
/* 80141864 0013E664  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80141868 0013E668  7C 08 02 A6 */	mflr r0
/* 8014186C 0013E66C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80141870 0013E670  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80141874 0013E674  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80141878 0013E678  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014187C 0013E67C  93 81 00 10 */	stw r28, 0x10(r1)
/* 80141880 0013E680  88 0D 96 78 */	lbz r0, sOthersHaventBeenAdded-_SDA_BASE_(r13)
/* 80141884 0013E684  28 00 00 00 */	cmplwi r0, 0
/* 80141888 0013E688  41 82 00 DC */	beq lbl_80141964
/* 8014188C 0013E68C  3B E0 00 00 */	li r31, 0
/* 80141890 0013E690  3B C0 00 00 */	li r30, 0
/* 80141894 0013E694  9B ED 96 78 */	stb r31, sOthersHaventBeenAdded-_SDA_BASE_(r13)
lbl_80141898:
/* 80141898 0013E698  80 6D 96 94 */	lwz r3, sSandyPtr-_SDA_BASE_(r13)
/* 8014189C 0013E69C  2C 1E 00 02 */	cmpwi r30, 2
/* 801418A0 0013E6A0  80 63 02 B4 */	lwz r3, 0x2b4(r3)
/* 801418A4 0013E6A4  7F 83 F8 2E */	lwzx r28, r3, r31
/* 801418A8 0013E6A8  41 82 00 1C */	beq lbl_801418C4
/* 801418AC 0013E6AC  2C 1E 00 04 */	cmpwi r30, 4
/* 801418B0 0013E6B0  41 82 00 14 */	beq lbl_801418C4
/* 801418B4 0013E6B4  2C 1E 00 09 */	cmpwi r30, 9
/* 801418B8 0013E6B8  41 82 00 0C */	beq lbl_801418C4
/* 801418BC 0013E6BC  2C 1E 00 0B */	cmpwi r30, 0xb
/* 801418C0 0013E6C0  40 82 00 0C */	bne lbl_801418CC
lbl_801418C4:
/* 801418C4 0013E6C4  3B A0 00 01 */	li r29, 1
/* 801418C8 0013E6C8  48 00 00 08 */	b lbl_801418D0
lbl_801418CC:
/* 801418CC 0013E6CC  3B A0 00 00 */	li r29, 0
lbl_801418D0:
/* 801418D0 0013E6D0  2C 1D 00 00 */	cmpwi r29, 0
/* 801418D4 0013E6D4  40 82 00 1C */	bne lbl_801418F0
/* 801418D8 0013E6D8  3C 60 80 3D */	lis r3, colls_grid@ha
/* 801418DC 0013E6DC  7F 84 E3 78 */	mr r4, r28
/* 801418E0 0013E6E0  38 63 A6 D8 */	addi r3, r3, colls_grid@l
/* 801418E4 0013E6E4  4B FE 0F 31 */	bl xGridEntIsTooBig__FP5xGridPC4xEnt
/* 801418E8 0013E6E8  2C 03 00 00 */	cmpwi r3, 0
/* 801418EC 0013E6EC  41 82 00 4C */	beq lbl_80141938
lbl_801418F0:
/* 801418F0 0013E6F0  3C 60 80 3D */	lis r3, colls_oso_grid@ha
/* 801418F4 0013E6F4  7F 84 E3 78 */	mr r4, r28
/* 801418F8 0013E6F8  38 63 A7 74 */	addi r3, r3, colls_oso_grid@l
/* 801418FC 0013E6FC  4B FE 08 A1 */	bl xGridAdd__FP5xGridP4xEnt
/* 80141900 0013E700  2C 1D 00 00 */	cmpwi r29, 0
/* 80141904 0013E704  40 82 00 1C */	bne lbl_80141920
/* 80141908 0013E708  3C 60 80 3D */	lis r3, colls_oso_grid@ha
/* 8014190C 0013E70C  7F 84 E3 78 */	mr r4, r28
/* 80141910 0013E710  38 63 A7 74 */	addi r3, r3, colls_oso_grid@l
/* 80141914 0013E714  4B FE 0F 01 */	bl xGridEntIsTooBig__FP5xGridPC4xEnt
/* 80141918 0013E718  2C 03 00 00 */	cmpwi r3, 0
/* 8014191C 0013E71C  41 82 00 10 */	beq lbl_8014192C
lbl_80141920:
/* 80141920 0013E720  38 00 00 02 */	li r0, 2
/* 80141924 0013E724  98 1C 00 59 */	stb r0, 0x59(r28)
/* 80141928 0013E728  48 00 00 28 */	b lbl_80141950
lbl_8014192C:
/* 8014192C 0013E72C  38 00 00 01 */	li r0, 1
/* 80141930 0013E730  98 1C 00 59 */	stb r0, 0x59(r28)
/* 80141934 0013E734  48 00 00 1C */	b lbl_80141950
lbl_80141938:
/* 80141938 0013E738  3C 60 80 3D */	lis r3, colls_grid@ha
/* 8014193C 0013E73C  7F 84 E3 78 */	mr r4, r28
/* 80141940 0013E740  38 63 A6 D8 */	addi r3, r3, colls_grid@l
/* 80141944 0013E744  4B FE 08 59 */	bl xGridAdd__FP5xGridP4xEnt
/* 80141948 0013E748  38 00 00 00 */	li r0, 0
/* 8014194C 0013E74C  98 1C 00 59 */	stb r0, 0x59(r28)
lbl_80141950:
/* 80141950 0013E750  3B DE 00 01 */	addi r30, r30, 1
/* 80141954 0013E754  3B FF 00 04 */	addi r31, r31, 4
/* 80141958 0013E758  2C 1E 00 0D */	cmpwi r30, 0xd
/* 8014195C 0013E75C  41 80 FF 3C */	blt lbl_80141898
/* 80141960 0013E760  48 00 00 0C */	b lbl_8014196C
lbl_80141964:
/* 80141964 0013E764  38 00 00 00 */	li r0, 0
/* 80141968 0013E768  90 0D 96 94 */	stw r0, sSandyPtr-_SDA_BASE_(r13)
lbl_8014196C:
/* 8014196C 0013E76C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80141970 0013E770  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80141974 0013E774  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80141978 0013E778  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014197C 0013E77C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80141980 0013E780  7C 08 03 A6 */	mtlr r0
/* 80141984 0013E784  38 21 00 20 */	addi r1, r1, 0x20
/* 80141988 0013E788  4E 80 00 20 */	blr 

NewTime__10zNPCBSandyFP6xScenef:
/* 801419D0 0013E7D0  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 801419D4 0013E7D4  7C 08 02 A6 */	mflr r0
/* 801419D8 0013E7D8  90 01 00 94 */	stw r0, 0x94(r1)
/* 801419DC 0013E7DC  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 801419E0 0013E7E0  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 801419E4 0013E7E4  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 801419E8 0013E7E8  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 801419EC 0013E7EC  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 801419F0 0013E7F0  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 801419F4 0013E7F4  DB 81 00 50 */	stfd f28, 0x50(r1)
/* 801419F8 0013E7F8  F3 81 00 58 */	psq_st f28, 88(r1), 0, qr0
/* 801419FC 0013E7FC  BF 01 00 30 */	stmw r24, 0x30(r1)
/* 80141A00 0013E800  3C A0 80 3C */	lis r5, globals@ha
/* 80141A04 0013E804  3C C0 80 2A */	lis r6, sBone@ha
/* 80141A08 0013E808  38 A5 05 58 */	addi r5, r5, globals@l
/* 80141A0C 0013E80C  FF E0 08 90 */	fmr f31, f1
/* 80141A10 0013E810  80 A5 1F BC */	lwz r5, 0x1fbc(r5)
/* 80141A14 0013E814  7C 7E 1B 78 */	mr r30, r3
/* 80141A18 0013E818  7C 9F 23 78 */	mr r31, r4
/* 80141A1C 0013E81C  3B A6 98 C8 */	addi r29, r6, sBone@l
/* 80141A20 0013E820  28 05 00 00 */	cmplwi r5, 0
/* 80141A24 0013E824  3B 00 00 00 */	li r24, 0
/* 80141A28 0013E828  41 82 00 18 */	beq lbl_80141A40
/* 80141A2C 0013E82C  80 65 00 14 */	lwz r3, 0x14(r5)
/* 80141A30 0013E830  80 03 00 3C */	lwz r0, 0x3c(r3)
/* 80141A34 0013E834  28 00 00 00 */	cmplwi r0, 0
/* 80141A38 0013E838  41 82 00 08 */	beq lbl_80141A40
/* 80141A3C 0013E83C  3B 00 00 01 */	li r24, 1
lbl_80141A40:
/* 80141A40 0013E840  A0 1E 00 06 */	lhz r0, 6(r30)
/* 80141A44 0013E844  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80141A48 0013E848  40 82 00 08 */	bne lbl_80141A50
/* 80141A4C 0013E84C  3B 00 00 01 */	li r24, 1
lbl_80141A50:
/* 80141A50 0013E850  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 80141A54 0013E854  38 61 00 20 */	addi r3, r1, 0x20
/* 80141A58 0013E858  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 80141A5C 0013E85C  FC 60 10 90 */	fmr f3, f2
/* 80141A60 0013E860  4B EC D5 9D */	bl xVec3Init__FP5xVec3fff
/* 80141A64 0013E864  C3 A2 A5 D8 */	lfs f29, _2154-_SDA2_BASE_(r2)
/* 80141A68 0013E868  7F D9 F3 78 */	mr r25, r30
/* 80141A6C 0013E86C  3B 40 00 00 */	li r26, 0
/* 80141A70 0013E870  FF 80 E8 90 */	fmr f28, f29
lbl_80141A74:
/* 80141A74 0013E874  80 9E 00 24 */	lwz r4, 0x24(r30)
/* 80141A78 0013E878  38 79 03 9C */	addi r3, r25, 0x39c
/* 80141A7C 0013E87C  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80141A80 0013E880  4B F0 CA 71 */	bl xVec3Dot__FPC5xVec3PC5xVec3
/* 80141A84 0013E884  FF C0 08 90 */	fmr f30, f1
/* 80141A88 0013E888  C0 02 A5 5C */	lfs f0, _1209-_SDA2_BASE_(r2)
/* 80141A8C 0013E88C  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80141A90 0013E890  40 80 00 10 */	bge lbl_80141AA0
/* 80141A94 0013E894  C0 02 A5 DC */	lfs f0, _2155-_SDA2_BASE_(r2)
/* 80141A98 0013E898  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80141A9C 0013E89C  41 81 00 5C */	bgt lbl_80141AF8
lbl_80141AA0:
/* 80141AA0 0013E8A0  80 9E 00 24 */	lwz r4, 0x24(r30)
/* 80141AA4 0013E8A4  38 61 00 14 */	addi r3, r1, 0x14
/* 80141AA8 0013E8A8  38 B9 03 3C */	addi r5, r25, 0x33c
/* 80141AAC 0013E8AC  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80141AB0 0013E8B0  38 84 00 30 */	addi r4, r4, 0x30
/* 80141AB4 0013E8B4  4B EC CB DD */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 80141AB8 0013E8B8  38 61 00 14 */	addi r3, r1, 0x14
/* 80141ABC 0013E8BC  38 99 03 9C */	addi r4, r25, 0x39c
/* 80141AC0 0013E8C0  4B F0 CA 31 */	bl xVec3Dot__FPC5xVec3PC5xVec3
/* 80141AC4 0013E8C4  FC 40 F0 50 */	fneg f2, f30
/* 80141AC8 0013E8C8  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80141ACC 0013E8CC  EC 21 10 24 */	fdivs f1, f1, f2
/* 80141AD0 0013E8D0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80141AD4 0013E8D4  40 80 00 18 */	bge lbl_80141AEC
/* 80141AD8 0013E8D8  FC 00 08 50 */	fneg f0, f1
/* 80141ADC 0013E8DC  FC 00 E0 40 */	fcmpo cr0, f0, f28
/* 80141AE0 0013E8E0  40 80 00 18 */	bge lbl_80141AF8
/* 80141AE4 0013E8E4  FF 80 00 90 */	fmr f28, f0
/* 80141AE8 0013E8E8  48 00 00 10 */	b lbl_80141AF8
lbl_80141AEC:
/* 80141AEC 0013E8EC  FC 01 E8 40 */	fcmpo cr0, f1, f29
/* 80141AF0 0013E8F0  40 80 00 08 */	bge lbl_80141AF8
/* 80141AF4 0013E8F4  FF A0 08 90 */	fmr f29, f1
lbl_80141AF8:
/* 80141AF8 0013E8F8  3B 5A 00 01 */	addi r26, r26, 1
/* 80141AFC 0013E8FC  3B 39 00 0C */	addi r25, r25, 0xc
/* 80141B00 0013E900  2C 1A 00 08 */	cmpwi r26, 8
/* 80141B04 0013E904  41 80 FF 70 */	blt lbl_80141A74
/* 80141B08 0013E908  80 1E 02 C0 */	lwz r0, 0x2c0(r30)
/* 80141B0C 0013E90C  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 80141B10 0013E910  41 82 00 90 */	beq lbl_80141BA0
/* 80141B14 0013E914  C0 02 A5 10 */	lfs f0, _1063-_SDA2_BASE_(r2)
/* 80141B18 0013E918  3B 40 00 00 */	li r26, 0
/* 80141B1C 0013E91C  3B 2D 84 8C */	addi r25, r13, sLeftFootBones-_SDA_BASE_
/* 80141B20 0013E920  EC 1C 00 28 */	fsubs f0, f28, f0
/* 80141B24 0013E924  FF C0 00 50 */	fneg f30, f0
lbl_80141B28:
/* 80141B28 0013E928  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 80141B2C 0013E92C  FC 20 F0 90 */	fmr f1, f30
/* 80141B30 0013E930  80 19 00 00 */	lwz r0, 0(r25)
/* 80141B34 0013E934  38 81 00 20 */	addi r4, r1, 0x20
/* 80141B38 0013E938  80 A3 00 4C */	lwz r5, 0x4c(r3)
/* 80141B3C 0013E93C  54 03 30 32 */	slwi r3, r0, 6
/* 80141B40 0013E940  38 63 00 30 */	addi r3, r3, 0x30
/* 80141B44 0013E944  7C 65 1A 14 */	add r3, r5, r3
/* 80141B48 0013E948  4B ED 35 11 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 80141B4C 0013E94C  3B 5A 00 01 */	addi r26, r26, 1
/* 80141B50 0013E950  3B 39 00 04 */	addi r25, r25, 4
/* 80141B54 0013E954  2C 1A 00 02 */	cmpwi r26, 2
/* 80141B58 0013E958  41 80 FF D0 */	blt lbl_80141B28
/* 80141B5C 0013E95C  C0 02 A5 10 */	lfs f0, _1063-_SDA2_BASE_(r2)
/* 80141B60 0013E960  3B 40 00 00 */	li r26, 0
/* 80141B64 0013E964  3B 2D 84 94 */	addi r25, r13, sRightFootBones-_SDA_BASE_
/* 80141B68 0013E968  EF DD 00 28 */	fsubs f30, f29, f0
lbl_80141B6C:
/* 80141B6C 0013E96C  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 80141B70 0013E970  FC 20 F0 90 */	fmr f1, f30
/* 80141B74 0013E974  80 19 00 00 */	lwz r0, 0(r25)
/* 80141B78 0013E978  38 81 00 20 */	addi r4, r1, 0x20
/* 80141B7C 0013E97C  80 A3 00 4C */	lwz r5, 0x4c(r3)
/* 80141B80 0013E980  54 03 30 32 */	slwi r3, r0, 6
/* 80141B84 0013E984  38 63 00 30 */	addi r3, r3, 0x30
/* 80141B88 0013E988  7C 65 1A 14 */	add r3, r5, r3
/* 80141B8C 0013E98C  4B ED 34 CD */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 80141B90 0013E990  3B 5A 00 01 */	addi r26, r26, 1
/* 80141B94 0013E994  3B 39 00 04 */	addi r25, r25, 4
/* 80141B98 0013E998  2C 1A 00 02 */	cmpwi r26, 2
/* 80141B9C 0013E99C  41 80 FF D0 */	blt lbl_80141B6C
lbl_80141BA0:
/* 80141BA0 0013E9A0  80 1E 02 C0 */	lwz r0, 0x2c0(r30)
/* 80141BA4 0013E9A4  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 80141BA8 0013E9A8  41 82 00 90 */	beq lbl_80141C38
/* 80141BAC 0013E9AC  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 80141BB0 0013E9B0  3B 3D 00 34 */	addi r25, r29, 0x34
/* 80141BB4 0013E9B4  3B 40 00 00 */	li r26, 0
/* 80141BB8 0013E9B8  EC 1C 00 28 */	fsubs f0, f28, f0
/* 80141BBC 0013E9BC  FF C0 00 50 */	fneg f30, f0
lbl_80141BC0:
/* 80141BC0 0013E9C0  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 80141BC4 0013E9C4  FC 20 F0 90 */	fmr f1, f30
/* 80141BC8 0013E9C8  80 19 00 00 */	lwz r0, 0(r25)
/* 80141BCC 0013E9CC  38 81 00 20 */	addi r4, r1, 0x20
/* 80141BD0 0013E9D0  80 A3 00 4C */	lwz r5, 0x4c(r3)
/* 80141BD4 0013E9D4  54 03 30 32 */	slwi r3, r0, 6
/* 80141BD8 0013E9D8  38 63 00 30 */	addi r3, r3, 0x30
/* 80141BDC 0013E9DC  7C 65 1A 14 */	add r3, r5, r3
/* 80141BE0 0013E9E0  4B ED 34 79 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 80141BE4 0013E9E4  3B 5A 00 01 */	addi r26, r26, 1
/* 80141BE8 0013E9E8  3B 39 00 04 */	addi r25, r25, 4
/* 80141BEC 0013E9EC  2C 1A 00 04 */	cmpwi r26, 4
/* 80141BF0 0013E9F0  41 80 FF D0 */	blt lbl_80141BC0
/* 80141BF4 0013E9F4  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 80141BF8 0013E9F8  3B 3D 00 44 */	addi r25, r29, 0x44
/* 80141BFC 0013E9FC  3B 40 00 00 */	li r26, 0
/* 80141C00 0013EA00  EF DD 00 28 */	fsubs f30, f29, f0
lbl_80141C04:
/* 80141C04 0013EA04  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 80141C08 0013EA08  FC 20 F0 90 */	fmr f1, f30
/* 80141C0C 0013EA0C  80 19 00 00 */	lwz r0, 0(r25)
/* 80141C10 0013EA10  38 81 00 20 */	addi r4, r1, 0x20
/* 80141C14 0013EA14  80 A3 00 4C */	lwz r5, 0x4c(r3)
/* 80141C18 0013EA18  54 03 30 32 */	slwi r3, r0, 6
/* 80141C1C 0013EA1C  38 63 00 30 */	addi r3, r3, 0x30
/* 80141C20 0013EA20  7C 65 1A 14 */	add r3, r5, r3
/* 80141C24 0013EA24  4B ED 34 35 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 80141C28 0013EA28  3B 5A 00 01 */	addi r26, r26, 1
/* 80141C2C 0013EA2C  3B 39 00 04 */	addi r25, r25, 4
/* 80141C30 0013EA30  2C 1A 00 04 */	cmpwi r26, 4
/* 80141C34 0013EA34  41 80 FF D0 */	blt lbl_80141C04
lbl_80141C38:
/* 80141C38 0013EA38  3B 20 00 00 */	li r25, 0
/* 80141C3C 0013EA3C  3B 9D 00 54 */	addi r28, r29, 0x54
/* 80141C40 0013EA40  7F 3A CB 78 */	mr r26, r25
/* 80141C44 0013EA44  3B 7D 00 88 */	addi r27, r29, 0x88
/* 80141C48 0013EA48  3B BD 00 00 */	addi r29, r29, 0
lbl_80141C4C:
/* 80141C4C 0013EA4C  C0 3C 00 00 */	lfs f1, 0(r28)
/* 80141C50 0013EA50  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80141C54 0013EA54  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80141C58 0013EA58  41 80 01 A0 */	blt lbl_80141DF8
/* 80141C5C 0013EA5C  80 9E 02 B4 */	lwz r4, 0x2b4(r30)
/* 80141C60 0013EA60  7F 66 DB 78 */	mr r6, r27
/* 80141C64 0013EA64  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 80141C68 0013EA68  7C E4 D0 2E */	lwzx r7, r4, r26
/* 80141C6C 0013EA6C  80 83 00 4C */	lwz r4, 0x4c(r3)
/* 80141C70 0013EA70  80 BD 00 00 */	lwz r5, 0(r29)
/* 80141C74 0013EA74  38 67 00 88 */	addi r3, r7, 0x88
/* 80141C78 0013EA78  4B FF E8 55 */	bl GetBonePos__FP5xVec3P7xMat4x3iP5xVec3
/* 80141C7C 0013EA7C  80 7E 02 B4 */	lwz r3, 0x2b4(r30)
/* 80141C80 0013EA80  7C 63 D0 2E */	lwzx r3, r3, r26
/* 80141C84 0013EA84  38 63 00 64 */	addi r3, r3, 0x64
/* 80141C88 0013EA88  7C 64 1B 78 */	mr r4, r3
/* 80141C8C 0013EA8C  4B EC 92 B1 */	bl xQuickCullForBound__FP7xQCDataPC6xBound
/* 80141C90 0013EA90  80 7E 02 B4 */	lwz r3, 0x2b4(r30)
/* 80141C94 0013EA94  7C 63 D0 2E */	lwzx r3, r3, r26
/* 80141C98 0013EA98  4B FE 27 91 */	bl zGridUpdateEnt__FP4xEnt
/* 80141C9C 0013EA9C  80 7E 02 B4 */	lwz r3, 0x2b4(r30)
/* 80141CA0 0013EAA0  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80141CA4 0013EAA4  7C 63 D0 2E */	lwzx r3, r3, r26
/* 80141CA8 0013EAA8  C0 43 00 8C */	lfs f2, 0x8c(r3)
/* 80141CAC 0013EAAC  C0 23 00 94 */	lfs f1, 0x94(r3)
/* 80141CB0 0013EAB0  EC 22 08 28 */	fsubs f1, f2, f1
/* 80141CB4 0013EAB4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80141CB8 0013EAB8  40 81 00 18 */	ble lbl_80141CD0
/* 80141CBC 0013EABC  80 7E 02 B8 */	lwz r3, 0x2b8(r30)
/* 80141CC0 0013EAC0  7C 03 D0 2E */	lwzx r0, r3, r26
/* 80141CC4 0013EAC4  60 00 00 08 */	ori r0, r0, 8
/* 80141CC8 0013EAC8  7C 03 D1 2E */	stwx r0, r3, r26
/* 80141CCC 0013EACC  48 00 00 D0 */	b lbl_80141D9C
lbl_80141CD0:
/* 80141CD0 0013EAD0  80 9E 02 B8 */	lwz r4, 0x2b8(r30)
/* 80141CD4 0013EAD4  7C 64 D0 2E */	lwzx r3, r4, r26
/* 80141CD8 0013EAD8  54 60 07 39 */	rlwinm. r0, r3, 0, 0x1c, 0x1c
/* 80141CDC 0013EADC  41 82 00 C0 */	beq lbl_80141D9C
/* 80141CE0 0013EAE0  54 60 07 76 */	rlwinm r0, r3, 0, 0x1d, 0x1b
/* 80141CE4 0013EAE4  7C 04 D1 2E */	stwx r0, r4, r26
/* 80141CE8 0013EAE8  80 7E 02 BC */	lwz r3, 0x2bc(r30)
/* 80141CEC 0013EAEC  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80141CF0 0013EAF0  7C 23 D4 2E */	lfsx f1, r3, r26
/* 80141CF4 0013EAF4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80141CF8 0013EAF8  4C 40 13 82 */	cror 2, 0, 2
/* 80141CFC 0013EAFC  40 82 00 94 */	bne lbl_80141D90
/* 80141D00 0013EB00  80 7E 02 B8 */	lwz r3, 0x2b8(r30)
/* 80141D04 0013EB04  7C 03 D0 2E */	lwzx r0, r3, r26
/* 80141D08 0013EB08  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 80141D0C 0013EB0C  41 82 00 84 */	beq lbl_80141D90
/* 80141D10 0013EB10  2C 18 00 00 */	cmpwi r24, 0
/* 80141D14 0013EB14  40 82 00 7C */	bne lbl_80141D90
/* 80141D18 0013EB18  4B EE EF 51 */	bl xrand__Fv
/* 80141D1C 0013EB1C  54 60 07 7B */	rlwinm. r0, r3, 0, 0x1d, 0x1d
/* 80141D20 0013EB20  41 82 00 3C */	beq lbl_80141D5C
/* 80141D24 0013EB24  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 80141D28 0013EB28  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 80141D2C 0013EB2C  38 63 05 AC */	addi r3, r3, 0x5ac
/* 80141D30 0013EB30  4B F0 A4 E5 */	bl xStrHash__FPCc
/* 80141D34 0013EB34  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 80141D38 0013EB38  7F C6 F3 78 */	mr r6, r30
/* 80141D3C 0013EB3C  C0 22 A5 E0 */	lfs f1, _2156-_SDA2_BASE_(r2)
/* 80141D40 0013EB40  38 80 00 00 */	li r4, 0
/* 80141D44 0013EB44  FC 80 10 90 */	fmr f4, f2
/* 80141D48 0013EB48  C0 62 A5 D8 */	lfs f3, _2154-_SDA2_BASE_(r2)
/* 80141D4C 0013EB4C  38 A0 00 00 */	li r5, 0
/* 80141D50 0013EB50  38 E0 00 00 */	li r7, 0
/* 80141D54 0013EB54  4B F0 DE 79 */	bl xSndPlay3D__FUiffUiUiP4xEntf14sound_categoryf
/* 80141D58 0013EB58  48 00 00 38 */	b lbl_80141D90
lbl_80141D5C:
/* 80141D5C 0013EB5C  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 80141D60 0013EB60  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 80141D64 0013EB64  38 63 05 BA */	addi r3, r3, 0x5ba
/* 80141D68 0013EB68  4B F0 A4 AD */	bl xStrHash__FPCc
/* 80141D6C 0013EB6C  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 80141D70 0013EB70  7F C6 F3 78 */	mr r6, r30
/* 80141D74 0013EB74  C0 22 A5 E0 */	lfs f1, _2156-_SDA2_BASE_(r2)
/* 80141D78 0013EB78  38 80 00 00 */	li r4, 0
/* 80141D7C 0013EB7C  FC 80 10 90 */	fmr f4, f2
/* 80141D80 0013EB80  C0 62 A5 D8 */	lfs f3, _2154-_SDA2_BASE_(r2)
/* 80141D84 0013EB84  38 A0 00 00 */	li r5, 0
/* 80141D88 0013EB88  38 E0 00 00 */	li r7, 0
/* 80141D8C 0013EB8C  4B F0 DE 41 */	bl xSndPlay3D__FUiffUiUiP4xEntf14sound_categoryf
lbl_80141D90:
/* 80141D90 0013EB90  C0 02 A4 E8 */	lfs f0, _1032-_SDA2_BASE_(r2)
/* 80141D94 0013EB94  80 7E 02 BC */	lwz r3, 0x2bc(r30)
/* 80141D98 0013EB98  7C 03 D5 2E */	stfsx f0, r3, r26
lbl_80141D9C:
/* 80141D9C 0013EB9C  80 7E 02 BC */	lwz r3, 0x2bc(r30)
/* 80141DA0 0013EBA0  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80141DA4 0013EBA4  7C 23 D4 2E */	lfsx f1, r3, r26
/* 80141DA8 0013EBA8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80141DAC 0013EBAC  40 81 00 4C */	ble lbl_80141DF8
/* 80141DB0 0013EBB0  2C 18 00 00 */	cmpwi r24, 0
/* 80141DB4 0013EBB4  40 82 00 44 */	bne lbl_80141DF8
/* 80141DB8 0013EBB8  EC 01 F8 28 */	fsubs f0, f1, f31
/* 80141DBC 0013EBBC  38 9E 06 44 */	addi r4, r30, 0x644
/* 80141DC0 0013EBC0  FC 20 F8 90 */	fmr f1, f31
/* 80141DC4 0013EBC4  7C 03 D5 2E */	stfsx f0, r3, r26
/* 80141DC8 0013EBC8  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80141DCC 0013EBCC  D0 1E 07 88 */	stfs f0, 0x788(r30)
/* 80141DD0 0013EBD0  80 7E 02 B4 */	lwz r3, 0x2b4(r30)
/* 80141DD4 0013EBD4  7C 63 D0 2E */	lwzx r3, r3, r26
/* 80141DD8 0013EBD8  C0 03 00 88 */	lfs f0, 0x88(r3)
/* 80141DDC 0013EBDC  D0 1E 07 84 */	stfs f0, 0x784(r30)
/* 80141DE0 0013EBE0  80 7E 02 B4 */	lwz r3, 0x2b4(r30)
/* 80141DE4 0013EBE4  7C 63 D0 2E */	lwzx r3, r3, r26
/* 80141DE8 0013EBE8  C0 03 00 90 */	lfs f0, 0x90(r3)
/* 80141DEC 0013EBEC  D0 1E 07 8C */	stfs f0, 0x78c(r30)
/* 80141DF0 0013EBF0  80 7E 07 B0 */	lwz r3, 0x7b0(r30)
/* 80141DF4 0013EBF4  4B FD 5D D5 */	bl xParEmitterEmitCustom__FP11xParEmitterfP25xParEmitterCustomSettings
lbl_80141DF8:
/* 80141DF8 0013EBF8  3B 39 00 01 */	addi r25, r25, 1
/* 80141DFC 0013EBFC  3B 7B 00 0C */	addi r27, r27, 0xc
/* 80141E00 0013EC00  2C 19 00 0D */	cmpwi r25, 0xd
/* 80141E04 0013EC04  3B BD 00 04 */	addi r29, r29, 4
/* 80141E08 0013EC08  3B 5A 00 04 */	addi r26, r26, 4
/* 80141E0C 0013EC0C  3B 9C 00 04 */	addi r28, r28, 4
/* 80141E10 0013EC10  41 80 FE 3C */	blt lbl_80141C4C
/* 80141E14 0013EC14  80 BE 02 B4 */	lwz r5, 0x2b4(r30)
/* 80141E18 0013EC18  38 60 00 02 */	li r3, 2
/* 80141E1C 0013EC1C  80 DE 00 24 */	lwz r6, 0x24(r30)
/* 80141E20 0013EC20  38 80 00 03 */	li r4, 3
/* 80141E24 0013EC24  80 A5 00 08 */	lwz r5, 8(r5)
/* 80141E28 0013EC28  80 C6 00 4C */	lwz r6, 0x4c(r6)
/* 80141E2C 0013EC2C  4B FF E7 49 */	bl MakeOBBFor__FiiP4xEntP7xMat4x3
/* 80141E30 0013EC30  80 7E 02 B4 */	lwz r3, 0x2b4(r30)
/* 80141E34 0013EC34  80 63 00 08 */	lwz r3, 8(r3)
/* 80141E38 0013EC38  38 63 00 64 */	addi r3, r3, 0x64
/* 80141E3C 0013EC3C  7C 64 1B 78 */	mr r4, r3
/* 80141E40 0013EC40  4B EC 90 FD */	bl xQuickCullForBound__FP7xQCDataPC6xBound
/* 80141E44 0013EC44  80 7E 02 B4 */	lwz r3, 0x2b4(r30)
/* 80141E48 0013EC48  80 63 00 08 */	lwz r3, 8(r3)
/* 80141E4C 0013EC4C  4B FE 25 DD */	bl zGridUpdateEnt__FP4xEnt
/* 80141E50 0013EC50  80 BE 02 B4 */	lwz r5, 0x2b4(r30)
/* 80141E54 0013EC54  38 60 00 04 */	li r3, 4
/* 80141E58 0013EC58  80 DE 00 24 */	lwz r6, 0x24(r30)
/* 80141E5C 0013EC5C  38 80 00 05 */	li r4, 5
/* 80141E60 0013EC60  80 A5 00 10 */	lwz r5, 0x10(r5)
/* 80141E64 0013EC64  80 C6 00 4C */	lwz r6, 0x4c(r6)
/* 80141E68 0013EC68  4B FF E7 0D */	bl MakeOBBFor__FiiP4xEntP7xMat4x3
/* 80141E6C 0013EC6C  80 7E 02 B4 */	lwz r3, 0x2b4(r30)
/* 80141E70 0013EC70  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80141E74 0013EC74  38 63 00 64 */	addi r3, r3, 0x64
/* 80141E78 0013EC78  7C 64 1B 78 */	mr r4, r3
/* 80141E7C 0013EC7C  4B EC 90 C1 */	bl xQuickCullForBound__FP7xQCDataPC6xBound
/* 80141E80 0013EC80  80 7E 02 B4 */	lwz r3, 0x2b4(r30)
/* 80141E84 0013EC84  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80141E88 0013EC88  4B FE 25 A1 */	bl zGridUpdateEnt__FP4xEnt
/* 80141E8C 0013EC8C  80 BE 02 B4 */	lwz r5, 0x2b4(r30)
/* 80141E90 0013EC90  38 60 00 09 */	li r3, 9
/* 80141E94 0013EC94  80 DE 00 24 */	lwz r6, 0x24(r30)
/* 80141E98 0013EC98  38 80 00 0A */	li r4, 0xa
/* 80141E9C 0013EC9C  80 A5 00 24 */	lwz r5, 0x24(r5)
/* 80141EA0 0013ECA0  80 C6 00 4C */	lwz r6, 0x4c(r6)
/* 80141EA4 0013ECA4  4B FF E6 D1 */	bl MakeOBBFor__FiiP4xEntP7xMat4x3
/* 80141EA8 0013ECA8  80 7E 02 B4 */	lwz r3, 0x2b4(r30)
/* 80141EAC 0013ECAC  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80141EB0 0013ECB0  38 63 00 64 */	addi r3, r3, 0x64
/* 80141EB4 0013ECB4  7C 64 1B 78 */	mr r4, r3
/* 80141EB8 0013ECB8  4B EC 90 85 */	bl xQuickCullForBound__FP7xQCDataPC6xBound
/* 80141EBC 0013ECBC  80 7E 02 B4 */	lwz r3, 0x2b4(r30)
/* 80141EC0 0013ECC0  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80141EC4 0013ECC4  4B FE 25 65 */	bl zGridUpdateEnt__FP4xEnt
/* 80141EC8 0013ECC8  80 BE 02 B4 */	lwz r5, 0x2b4(r30)
/* 80141ECC 0013ECCC  38 60 00 0B */	li r3, 0xb
/* 80141ED0 0013ECD0  80 DE 00 24 */	lwz r6, 0x24(r30)
/* 80141ED4 0013ECD4  38 80 00 0C */	li r4, 0xc
/* 80141ED8 0013ECD8  80 A5 00 2C */	lwz r5, 0x2c(r5)
/* 80141EDC 0013ECDC  80 C6 00 4C */	lwz r6, 0x4c(r6)
/* 80141EE0 0013ECE0  4B FF E6 95 */	bl MakeOBBFor__FiiP4xEntP7xMat4x3
/* 80141EE4 0013ECE4  80 7E 02 B4 */	lwz r3, 0x2b4(r30)
/* 80141EE8 0013ECE8  80 63 00 2C */	lwz r3, 0x2c(r3)
/* 80141EEC 0013ECEC  38 63 00 64 */	addi r3, r3, 0x64
/* 80141EF0 0013ECF0  7C 64 1B 78 */	mr r4, r3
/* 80141EF4 0013ECF4  4B EC 90 49 */	bl xQuickCullForBound__FP7xQCDataPC6xBound
/* 80141EF8 0013ECF8  80 7E 02 B4 */	lwz r3, 0x2b4(r30)
/* 80141EFC 0013ECFC  80 63 00 2C */	lwz r3, 0x2c(r3)
/* 80141F00 0013ED00  4B FE 25 29 */	bl zGridUpdateEnt__FP4xEnt
/* 80141F04 0013ED04  80 1E 02 C0 */	lwz r0, 0x2c0(r30)
/* 80141F08 0013ED08  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80141F0C 0013ED0C  41 82 01 04 */	beq lbl_80142010
/* 80141F10 0013ED10  3C 60 80 3C */	lis r3, globals@ha
/* 80141F14 0013ED14  3B A3 05 58 */	addi r29, r3, globals@l
/* 80141F18 0013ED18  80 7D 07 2C */	lwz r3, 0x72c(r29)
/* 80141F1C 0013ED1C  88 03 00 0A */	lbz r0, 0xa(r3)
/* 80141F20 0013ED20  3B 03 00 0C */	addi r24, r3, 0xc
/* 80141F24 0013ED24  1C 00 00 50 */	mulli r0, r0, 0x50
/* 80141F28 0013ED28  7F 38 02 14 */	add r25, r24, r0
/* 80141F2C 0013ED2C  48 00 00 DC */	b lbl_80142008
lbl_80141F30:
/* 80141F30 0013ED30  80 18 00 00 */	lwz r0, 0(r24)
/* 80141F34 0013ED34  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80141F38 0013ED38  41 82 00 CC */	beq lbl_80142004
/* 80141F3C 0013ED3C  80 78 00 08 */	lwz r3, 8(r24)
/* 80141F40 0013ED40  28 03 00 00 */	cmplwi r3, 0
/* 80141F44 0013ED44  41 82 00 C0 */	beq lbl_80142004
/* 80141F48 0013ED48  88 03 00 04 */	lbz r0, 4(r3)
/* 80141F4C 0013ED4C  28 00 00 0C */	cmplwi r0, 0xc
/* 80141F50 0013ED50  40 82 00 B4 */	bne lbl_80142004
/* 80141F54 0013ED54  80 03 00 B8 */	lwz r0, 0xb8(r3)
/* 80141F58 0013ED58  7C 00 F0 40 */	cmplw r0, r30
/* 80141F5C 0013ED5C  40 82 00 A8 */	bne lbl_80142004
/* 80141F60 0013ED60  80 03 00 00 */	lwz r0, 0(r3)
/* 80141F64 0013ED64  80 7E 02 B8 */	lwz r3, 0x2b8(r30)
/* 80141F68 0013ED68  54 00 10 3A */	slwi r0, r0, 2
/* 80141F6C 0013ED6C  7C 03 00 2E */	lwzx r0, r3, r0
/* 80141F70 0013ED70  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80141F74 0013ED74  41 82 00 90 */	beq lbl_80142004
/* 80141F78 0013ED78  80 BD 07 04 */	lwz r5, 0x704(r29)
/* 80141F7C 0013ED7C  38 61 00 08 */	addi r3, r1, 8
/* 80141F80 0013ED80  80 9E 00 48 */	lwz r4, 0x48(r30)
/* 80141F84 0013ED84  80 C5 00 4C */	lwz r6, 0x4c(r5)
/* 80141F88 0013ED88  38 A4 00 30 */	addi r5, r4, 0x30
/* 80141F8C 0013ED8C  38 86 00 30 */	addi r4, r6, 0x30
/* 80141F90 0013ED90  4B EC C7 01 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 80141F94 0013ED94  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80141F98 0013ED98  38 61 00 08 */	addi r3, r1, 8
/* 80141F9C 0013ED9C  7C 64 1B 78 */	mr r4, r3
/* 80141FA0 0013EDA0  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80141FA4 0013EDA4  4B F0 C3 4D */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 80141FA8 0013EDA8  80 7D 07 04 */	lwz r3, 0x704(r29)
/* 80141FAC 0013EDAC  38 81 00 08 */	addi r4, r1, 8
/* 80141FB0 0013EDB0  C0 22 A4 EC */	lfs f1, _1033-_SDA2_BASE_(r2)
/* 80141FB4 0013EDB4  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80141FB8 0013EDB8  38 63 00 20 */	addi r3, r3, 0x20
/* 80141FBC 0013EDBC  4B EC 90 D5 */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 80141FC0 0013EDC0  80 7D 07 04 */	lwz r3, 0x704(r29)
/* 80141FC4 0013EDC4  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80141FC8 0013EDC8  38 83 00 10 */	addi r4, r3, 0x10
/* 80141FCC 0013EDCC  38 A3 00 20 */	addi r5, r3, 0x20
/* 80141FD0 0013EDD0  4B ED 30 BD */	bl xVec3Cross__FP5xVec3PC5xVec3PC5xVec3
/* 80141FD4 0013EDD4  C0 22 A4 F4 */	lfs f1, _1035-_SDA2_BASE_(r2)
/* 80141FD8 0013EDD8  38 61 00 08 */	addi r3, r1, 8
/* 80141FDC 0013EDDC  4B ED 99 5D */	bl xVec3SMulBy__FP5xVec3f
/* 80141FE0 0013EDE0  C0 02 A5 30 */	lfs f0, _1071-_SDA2_BASE_(r2)
/* 80141FE4 0013EDE4  38 A1 00 08 */	addi r5, r1, 8
/* 80141FE8 0013EDE8  38 60 00 00 */	li r3, 0
/* 80141FEC 0013EDEC  38 80 00 01 */	li r4, 1
/* 80141FF0 0013EDF0  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80141FF4 0013EDF4  4B F3 42 41 */	bl zEntPlayer_Damage__FP5xBaseUiPC5xVec3
/* 80141FF8 0013EDF8  80 1E 02 C0 */	lwz r0, 0x2c0(r30)
/* 80141FFC 0013EDFC  60 00 00 02 */	ori r0, r0, 2
/* 80142000 0013EE00  90 1E 02 C0 */	stw r0, 0x2c0(r30)
lbl_80142004:
/* 80142004 0013EE04  3B 18 00 50 */	addi r24, r24, 0x50
lbl_80142008:
/* 80142008 0013EE08  7C 18 C8 40 */	cmplw r24, r25
/* 8014200C 0013EE0C  41 80 FF 24 */	blt lbl_80141F30
lbl_80142010:
/* 80142010 0013EE10  80 9E 02 B8 */	lwz r4, 0x2b8(r30)
/* 80142014 0013EE14  38 C0 00 0C */	li r6, 0xc
/* 80142018 0013EE18  20 06 00 0D */	subfic r0, r6, 0xd
/* 8014201C 0013EE1C  80 64 00 00 */	lwz r3, 0(r4)
/* 80142020 0013EE20  54 C5 10 3A */	slwi r5, r6, 2
/* 80142024 0013EE24  54 63 00 38 */	rlwinm r3, r3, 0, 0, 0x1c
/* 80142028 0013EE28  90 64 00 00 */	stw r3, 0(r4)
/* 8014202C 0013EE2C  80 9E 02 B8 */	lwz r4, 0x2b8(r30)
/* 80142030 0013EE30  80 64 00 04 */	lwz r3, 4(r4)
/* 80142034 0013EE34  54 63 00 38 */	rlwinm r3, r3, 0, 0, 0x1c
/* 80142038 0013EE38  90 64 00 04 */	stw r3, 4(r4)
/* 8014203C 0013EE3C  80 9E 02 B8 */	lwz r4, 0x2b8(r30)
/* 80142040 0013EE40  80 64 00 08 */	lwz r3, 8(r4)
/* 80142044 0013EE44  54 63 00 38 */	rlwinm r3, r3, 0, 0, 0x1c
/* 80142048 0013EE48  90 64 00 08 */	stw r3, 8(r4)
/* 8014204C 0013EE4C  80 9E 02 B8 */	lwz r4, 0x2b8(r30)
/* 80142050 0013EE50  80 64 00 0C */	lwz r3, 0xc(r4)
/* 80142054 0013EE54  54 63 00 38 */	rlwinm r3, r3, 0, 0, 0x1c
/* 80142058 0013EE58  90 64 00 0C */	stw r3, 0xc(r4)
/* 8014205C 0013EE5C  80 9E 02 B8 */	lwz r4, 0x2b8(r30)
/* 80142060 0013EE60  80 64 00 10 */	lwz r3, 0x10(r4)
/* 80142064 0013EE64  54 63 00 38 */	rlwinm r3, r3, 0, 0, 0x1c
/* 80142068 0013EE68  90 64 00 10 */	stw r3, 0x10(r4)
/* 8014206C 0013EE6C  80 9E 02 B8 */	lwz r4, 0x2b8(r30)
/* 80142070 0013EE70  80 64 00 14 */	lwz r3, 0x14(r4)
/* 80142074 0013EE74  54 63 00 38 */	rlwinm r3, r3, 0, 0, 0x1c
/* 80142078 0013EE78  90 64 00 14 */	stw r3, 0x14(r4)
/* 8014207C 0013EE7C  80 9E 02 B8 */	lwz r4, 0x2b8(r30)
/* 80142080 0013EE80  80 64 00 18 */	lwz r3, 0x18(r4)
/* 80142084 0013EE84  54 63 00 38 */	rlwinm r3, r3, 0, 0, 0x1c
/* 80142088 0013EE88  90 64 00 18 */	stw r3, 0x18(r4)
/* 8014208C 0013EE8C  80 9E 02 B8 */	lwz r4, 0x2b8(r30)
/* 80142090 0013EE90  80 64 00 1C */	lwz r3, 0x1c(r4)
/* 80142094 0013EE94  54 63 00 38 */	rlwinm r3, r3, 0, 0, 0x1c
/* 80142098 0013EE98  90 64 00 1C */	stw r3, 0x1c(r4)
/* 8014209C 0013EE9C  80 9E 02 B8 */	lwz r4, 0x2b8(r30)
/* 801420A0 0013EEA0  80 64 00 20 */	lwz r3, 0x20(r4)
/* 801420A4 0013EEA4  54 63 00 38 */	rlwinm r3, r3, 0, 0, 0x1c
/* 801420A8 0013EEA8  90 64 00 20 */	stw r3, 0x20(r4)
/* 801420AC 0013EEAC  80 9E 02 B8 */	lwz r4, 0x2b8(r30)
/* 801420B0 0013EEB0  80 64 00 24 */	lwz r3, 0x24(r4)
/* 801420B4 0013EEB4  54 63 00 38 */	rlwinm r3, r3, 0, 0, 0x1c
/* 801420B8 0013EEB8  90 64 00 24 */	stw r3, 0x24(r4)
/* 801420BC 0013EEBC  80 9E 02 B8 */	lwz r4, 0x2b8(r30)
/* 801420C0 0013EEC0  80 64 00 28 */	lwz r3, 0x28(r4)
/* 801420C4 0013EEC4  54 63 00 38 */	rlwinm r3, r3, 0, 0, 0x1c
/* 801420C8 0013EEC8  90 64 00 28 */	stw r3, 0x28(r4)
/* 801420CC 0013EECC  80 9E 02 B8 */	lwz r4, 0x2b8(r30)
/* 801420D0 0013EED0  80 64 00 2C */	lwz r3, 0x2c(r4)
/* 801420D4 0013EED4  54 63 00 38 */	rlwinm r3, r3, 0, 0, 0x1c
/* 801420D8 0013EED8  90 64 00 2C */	stw r3, 0x2c(r4)
/* 801420DC 0013EEDC  7C 09 03 A6 */	mtctr r0
/* 801420E0 0013EEE0  2C 06 00 0D */	cmpwi r6, 0xd
/* 801420E4 0013EEE4  40 80 00 1C */	bge lbl_80142100
lbl_801420E8:
/* 801420E8 0013EEE8  80 7E 02 B8 */	lwz r3, 0x2b8(r30)
/* 801420EC 0013EEEC  7C 03 28 2E */	lwzx r0, r3, r5
/* 801420F0 0013EEF0  54 00 00 38 */	rlwinm r0, r0, 0, 0, 0x1c
/* 801420F4 0013EEF4  7C 03 29 2E */	stwx r0, r3, r5
/* 801420F8 0013EEF8  38 A5 00 04 */	addi r5, r5, 4
/* 801420FC 0013EEFC  42 00 FF EC */	bdnz lbl_801420E8
lbl_80142100:
/* 80142100 0013EF00  80 1E 02 C0 */	lwz r0, 0x2c0(r30)
/* 80142104 0013EF04  FC 20 F8 90 */	fmr f1, f31
/* 80142108 0013EF08  7F C3 F3 78 */	mr r3, r30
/* 8014210C 0013EF0C  7F E4 FB 78 */	mr r4, r31
/* 80142110 0013EF10  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 80142114 0013EF14  90 1E 02 C0 */	stw r0, 0x2c0(r30)
/* 80142118 0013EF18  4B FA E2 31 */	bl NewTime__10zNPCCommonFP6xScenef
/* 8014211C 0013EF1C  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 80142120 0013EF20  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 80142124 0013EF24  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 80142128 0013EF28  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 8014212C 0013EF2C  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 80142130 0013EF30  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 80142134 0013EF34  E3 81 00 58 */	psq_l f28, 88(r1), 0, qr0
/* 80142138 0013EF38  CB 81 00 50 */	lfd f28, 0x50(r1)
/* 8014213C 0013EF3C  BB 01 00 30 */	lmw r24, 0x30(r1)
/* 80142140 0013EF40  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80142144 0013EF44  7C 08 03 A6 */	mtlr r0
/* 80142148 0013EF48  38 21 00 90 */	addi r1, r1, 0x90
/* 8014214C 0013EF4C  4E 80 00 20 */	blr 

chaseCB__FP5xGoalPvP11en_trantypefPv:
/* 8014239C 0013F19C  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 801423A0 0013F1A0  7C 08 02 A6 */	mflr r0
/* 801423A4 0013F1A4  90 01 00 74 */	stw r0, 0x74(r1)
/* 801423A8 0013F1A8  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 801423AC 0013F1AC  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 801423B0 0013F1B0  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 801423B4 0013F1B4  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 801423B8 0013F1B8  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 801423BC 0013F1BC  F3 A1 00 48 */	psq_st f29, 72(r1), 0, qr0
/* 801423C0 0013F1C0  BF 61 00 2C */	stmw r27, 0x2c(r1)
/* 801423C4 0013F1C4  7C 7C 1B 78 */	mr r28, r3
/* 801423C8 0013F1C8  C0 02 A5 74 */	lfs f0, _1463-_SDA2_BASE_(r2)
/* 801423CC 0013F1CC  C0 23 00 4C */	lfs f1, 0x4c(r3)
/* 801423D0 0013F1D0  7C BD 2B 78 */	mr r29, r5
/* 801423D4 0013F1D4  80 63 00 18 */	lwz r3, 0x18(r3)
/* 801423D8 0013F1D8  3B C0 00 00 */	li r30, 0
/* 801423DC 0013F1DC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801423E0 0013F1E0  83 E3 00 00 */	lwz r31, 0(r3)
/* 801423E4 0013F1E4  40 81 00 24 */	ble lbl_80142408
/* 801423E8 0013F1E8  80 1F 02 C0 */	lwz r0, 0x2c0(r31)
/* 801423EC 0013F1EC  54 00 05 6B */	rlwinm. r0, r0, 0, 0x15, 0x15
/* 801423F0 0013F1F0  41 82 00 18 */	beq lbl_80142408
/* 801423F4 0013F1F4  38 00 00 01 */	li r0, 1
/* 801423F8 0013F1F8  3C 60 4E 47 */	lis r3, 0x4E474231@ha
/* 801423FC 0013F1FC  90 1D 00 00 */	stw r0, 0(r29)
/* 80142400 0013F200  38 63 42 31 */	addi r3, r3, 0x4E474231@l
/* 80142404 0013F204  48 00 02 30 */	b lbl_80142634
lbl_80142408:
/* 80142408 0013F208  3C 60 80 3C */	lis r3, globals@ha
/* 8014240C 0013F20C  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 80142410 0013F210  3B 63 05 58 */	addi r27, r3, globals@l
/* 80142414 0013F214  38 61 00 14 */	addi r3, r1, 0x14
/* 80142418 0013F218  80 BB 07 04 */	lwz r5, 0x704(r27)
/* 8014241C 0013F21C  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80142420 0013F220  80 C5 00 4C */	lwz r6, 0x4c(r5)
/* 80142424 0013F224  38 A4 00 30 */	addi r5, r4, 0x30
/* 80142428 0013F228  38 86 00 30 */	addi r4, r6, 0x30
/* 8014242C 0013F22C  4B EC C2 65 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 80142430 0013F230  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80142434 0013F234  38 61 00 14 */	addi r3, r1, 0x14
/* 80142438 0013F238  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8014243C 0013F23C  4B ED 2C 91 */	bl xVec3Length2__FPC5xVec3
/* 80142440 0013F240  FF A0 08 90 */	fmr f29, f1
/* 80142444 0013F244  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 80142448 0013F248  38 61 00 08 */	addi r3, r1, 8
/* 8014244C 0013F24C  38 80 00 01 */	li r4, 1
/* 80142450 0013F250  FC 40 08 90 */	fmr f2, f1
/* 80142454 0013F254  4B F2 D5 29 */	bl zEntPlayer_PredictPos__FP5xVec3ffi
/* 80142458 0013F258  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 8014245C 0013F25C  38 61 00 08 */	addi r3, r1, 8
/* 80142460 0013F260  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80142464 0013F264  38 84 00 30 */	addi r4, r4, 0x30
/* 80142468 0013F268  4B ED 94 F9 */	bl xVec3SubFrom__FP5xVec3PC5xVec3
/* 8014246C 0013F26C  38 61 00 08 */	addi r3, r1, 8
/* 80142470 0013F270  7C 64 1B 78 */	mr r4, r3
/* 80142474 0013F274  4B F0 BE 7D */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 80142478 0013F278  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 8014247C 0013F27C  FF C0 08 90 */	fmr f30, f1
/* 80142480 0013F280  38 61 00 08 */	addi r3, r1, 8
/* 80142484 0013F284  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80142488 0013F288  38 84 00 20 */	addi r4, r4, 0x20
/* 8014248C 0013F28C  4B F0 C0 65 */	bl xVec3Dot__FPC5xVec3PC5xVec3
/* 80142490 0013F290  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 80142494 0013F294  FF E0 08 90 */	fmr f31, f1
/* 80142498 0013F298  38 61 00 08 */	addi r3, r1, 8
/* 8014249C 0013F29C  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 801424A0 0013F2A0  4B F0 C0 51 */	bl xVec3Dot__FPC5xVec3PC5xVec3
/* 801424A4 0013F2A4  80 7B 07 04 */	lwz r3, 0x704(r27)
/* 801424A8 0013F2A8  C0 02 A5 A0 */	lfs f0, _1528-_SDA2_BASE_(r2)
/* 801424AC 0013F2AC  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 801424B0 0013F2B0  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 801424B4 0013F2B4  C0 43 00 30 */	lfs f2, 0x30(r3)
/* 801424B8 0013F2B8  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 801424BC 0013F2BC  EC 42 00 B2 */	fmuls f2, f2, f2
/* 801424C0 0013F2C0  EC 00 00 32 */	fmuls f0, f0, f0
/* 801424C4 0013F2C4  EC 42 00 2A */	fadds f2, f2, f0
/* 801424C8 0013F2C8  40 81 00 38 */	ble lbl_80142500
/* 801424CC 0013F2CC  C0 02 A5 08 */	lfs f0, _1061-_SDA2_BASE_(r2)
/* 801424D0 0013F2D0  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 801424D4 0013F2D4  40 80 00 2C */	bge lbl_80142500
/* 801424D8 0013F2D8  C0 02 A5 E8 */	lfs f0, _2236-_SDA2_BASE_(r2)
/* 801424DC 0013F2DC  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 801424E0 0013F2E0  40 81 00 20 */	ble lbl_80142500
/* 801424E4 0013F2E4  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 801424E8 0013F2E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801424EC 0013F2EC  40 80 00 14 */	bge lbl_80142500
/* 801424F0 0013F2F0  C0 2D 96 90 */	lfs f1, sElbowDropThreshold-_SDA_BASE_(r13)
/* 801424F4 0013F2F4  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 801424F8 0013F2F8  EC 01 00 2A */	fadds f0, f1, f0
/* 801424FC 0013F2FC  D0 0D 96 90 */	stfs f0, sElbowDropThreshold-_SDA_BASE_(r13)
lbl_80142500:
/* 80142500 0013F300  3C 60 80 3C */	lis r3, globals@ha
/* 80142504 0013F304  38 63 05 58 */	addi r3, r3, globals@l
/* 80142508 0013F308  80 03 17 88 */	lwz r0, 0x1788(r3)
/* 8014250C 0013F30C  28 00 00 00 */	cmplwi r0, 0
/* 80142510 0013F310  41 82 00 18 */	beq lbl_80142528
/* 80142514 0013F314  38 00 00 01 */	li r0, 1
/* 80142518 0013F318  3C 60 4E 47 */	lis r3, 0x4E474231@ha
/* 8014251C 0013F31C  90 1D 00 00 */	stw r0, 0(r29)
/* 80142520 0013F320  3B C3 42 31 */	addi r30, r3, 0x4E474231@l
/* 80142524 0013F324  48 00 01 0C */	b lbl_80142630
lbl_80142528:
/* 80142528 0013F328  C0 3C 00 4C */	lfs f1, 0x4c(r28)
/* 8014252C 0013F32C  C0 02 A5 74 */	lfs f0, _1463-_SDA2_BASE_(r2)
/* 80142530 0013F330  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80142534 0013F334  40 81 00 FC */	ble lbl_80142630
/* 80142538 0013F338  C0 02 A5 E4 */	lfs f0, _2173-_SDA2_BASE_(r2)
/* 8014253C 0013F33C  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 80142540 0013F340  40 80 00 18 */	bge lbl_80142558
/* 80142544 0013F344  38 00 00 01 */	li r0, 1
/* 80142548 0013F348  3C 60 4E 47 */	lis r3, 0x4E474234@ha
/* 8014254C 0013F34C  90 1D 00 00 */	stw r0, 0(r29)
/* 80142550 0013F350  3B C3 42 34 */	addi r30, r3, 0x4E474234@l
/* 80142554 0013F354  48 00 00 DC */	b lbl_80142630
lbl_80142558:
/* 80142558 0013F358  C0 2D 96 84 */	lfs f1, sChaseTimer-_SDA_BASE_(r13)
/* 8014255C 0013F35C  C0 02 A5 EC */	lfs f0, _2237-_SDA2_BASE_(r2)
/* 80142560 0013F360  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80142564 0013F364  40 81 00 98 */	ble lbl_801425FC
/* 80142568 0013F368  80 7F 02 D8 */	lwz r3, 0x2d8(r31)
/* 8014256C 0013F36C  2C 03 00 01 */	cmpwi r3, 1
/* 80142570 0013F370  41 82 00 24 */	beq lbl_80142594
/* 80142574 0013F374  80 0D 96 88 */	lwz r0, sNumAttacks-_SDA_BASE_(r13)
/* 80142578 0013F378  2C 00 00 01 */	cmpwi r0, 1
/* 8014257C 0013F37C  40 82 00 18 */	bne lbl_80142594
/* 80142580 0013F380  38 00 00 01 */	li r0, 1
/* 80142584 0013F384  3C 60 4E 47 */	lis r3, 0x4E47423A@ha
/* 80142588 0013F388  90 1D 00 00 */	stw r0, 0(r29)
/* 8014258C 0013F38C  3B C3 42 3A */	addi r30, r3, 0x4E47423A@l
/* 80142590 0013F390  48 00 00 A0 */	b lbl_80142630
lbl_80142594:
/* 80142594 0013F394  80 0D 96 88 */	lwz r0, sNumAttacks-_SDA_BASE_(r13)
/* 80142598 0013F398  2C 00 00 00 */	cmpwi r0, 0
/* 8014259C 0013F39C  40 82 00 18 */	bne lbl_801425B4
/* 801425A0 0013F3A0  38 00 00 01 */	li r0, 1
/* 801425A4 0013F3A4  3C 60 4E 47 */	lis r3, 0x4E474236@ha
/* 801425A8 0013F3A8  90 1D 00 00 */	stw r0, 0(r29)
/* 801425AC 0013F3AC  3B C3 42 36 */	addi r30, r3, 0x4E474236@l
/* 801425B0 0013F3B0  48 00 00 80 */	b lbl_80142630
lbl_801425B4:
/* 801425B4 0013F3B4  2C 03 00 01 */	cmpwi r3, 1
/* 801425B8 0013F3B8  40 82 00 20 */	bne lbl_801425D8
/* 801425BC 0013F3BC  2C 00 00 01 */	cmpwi r0, 1
/* 801425C0 0013F3C0  41 80 00 18 */	blt lbl_801425D8
/* 801425C4 0013F3C4  38 00 00 01 */	li r0, 1
/* 801425C8 0013F3C8  3C 60 4E 47 */	lis r3, 0x4E474237@ha
/* 801425CC 0013F3CC  90 1D 00 00 */	stw r0, 0(r29)
/* 801425D0 0013F3D0  3B C3 42 37 */	addi r30, r3, 0x4E474237@l
/* 801425D4 0013F3D4  48 00 00 5C */	b lbl_80142630
lbl_801425D8:
/* 801425D8 0013F3D8  2C 03 00 01 */	cmpwi r3, 1
/* 801425DC 0013F3DC  41 82 00 54 */	beq lbl_80142630
/* 801425E0 0013F3E0  2C 00 00 02 */	cmpwi r0, 2
/* 801425E4 0013F3E4  41 80 00 4C */	blt lbl_80142630
/* 801425E8 0013F3E8  38 00 00 01 */	li r0, 1
/* 801425EC 0013F3EC  3C 60 4E 47 */	lis r3, 0x4E474237@ha
/* 801425F0 0013F3F0  90 1D 00 00 */	stw r0, 0(r29)
/* 801425F4 0013F3F4  3B C3 42 37 */	addi r30, r3, 0x4E474237@l
/* 801425F8 0013F3F8  48 00 00 38 */	b lbl_80142630
lbl_801425FC:
/* 801425FC 0013F3FC  80 1F 02 D8 */	lwz r0, 0x2d8(r31)
/* 80142600 0013F400  2C 00 00 01 */	cmpwi r0, 1
/* 80142604 0013F404  40 82 00 2C */	bne lbl_80142630
/* 80142608 0013F408  80 0D 96 88 */	lwz r0, sNumAttacks-_SDA_BASE_(r13)
/* 8014260C 0013F40C  2C 00 00 01 */	cmpwi r0, 1
/* 80142610 0013F410  40 82 00 20 */	bne lbl_80142630
/* 80142614 0013F414  C0 02 A5 70 */	lfs f0, _1462-_SDA2_BASE_(r2)
/* 80142618 0013F418  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8014261C 0013F41C  40 80 00 14 */	bge lbl_80142630
/* 80142620 0013F420  38 00 00 01 */	li r0, 1
/* 80142624 0013F424  3C 60 4E 47 */	lis r3, 0x4E474237@ha
/* 80142628 0013F428  90 1D 00 00 */	stw r0, 0(r29)
/* 8014262C 0013F42C  3B C3 42 37 */	addi r30, r3, 0x4E474237@l
lbl_80142630:
/* 80142630 0013F430  7F C3 F3 78 */	mr r3, r30
lbl_80142634:
/* 80142634 0013F434  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 80142638 0013F438  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8014263C 0013F43C  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 80142640 0013F440  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 80142644 0013F444  E3 A1 00 48 */	psq_l f29, 72(r1), 0, qr0
/* 80142648 0013F448  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 8014264C 0013F44C  BB 61 00 2C */	lmw r27, 0x2c(r1)
/* 80142650 0013F450  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80142654 0013F454  7C 08 03 A6 */	mtlr r0
/* 80142658 0013F458  38 21 00 70 */	addi r1, r1, 0x70
/* 8014265C 0013F45C  4E 80 00 20 */	blr 

meleeCB__FP5xGoalPvP11en_trantypefPv:
/* 80142660 0013F460  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80142664 0013F464  7C 08 02 A6 */	mflr r0
/* 80142668 0013F468  90 01 00 54 */	stw r0, 0x54(r1)
/* 8014266C 0013F46C  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80142670 0013F470  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 80142674 0013F474  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 80142678 0013F478  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 8014267C 0013F47C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80142680 0013F480  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80142684 0013F484  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80142688 0013F488  93 81 00 20 */	stw r28, 0x20(r1)
/* 8014268C 0013F48C  7C 7C 1B 78 */	mr r28, r3
/* 80142690 0013F490  3C 60 80 3C */	lis r3, globals@ha
/* 80142694 0013F494  80 9C 00 18 */	lwz r4, 0x18(r28)
/* 80142698 0013F498  38 63 05 58 */	addi r3, r3, globals@l
/* 8014269C 0013F49C  80 63 07 04 */	lwz r3, 0x704(r3)
/* 801426A0 0013F4A0  FF C0 08 90 */	fmr f30, f1
/* 801426A4 0013F4A4  83 E4 00 00 */	lwz r31, 0(r4)
/* 801426A8 0013F4A8  7C BD 2B 78 */	mr r29, r5
/* 801426AC 0013F4AC  80 83 00 4C */	lwz r4, 0x4c(r3)
/* 801426B0 0013F4B0  38 61 00 08 */	addi r3, r1, 8
/* 801426B4 0013F4B4  80 BF 00 24 */	lwz r5, 0x24(r31)
/* 801426B8 0013F4B8  38 84 00 30 */	addi r4, r4, 0x30
/* 801426BC 0013F4BC  3B C0 00 00 */	li r30, 0
/* 801426C0 0013F4C0  80 A5 00 4C */	lwz r5, 0x4c(r5)
/* 801426C4 0013F4C4  38 A5 00 30 */	addi r5, r5, 0x30
/* 801426C8 0013F4C8  4B EC BF C9 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 801426CC 0013F4CC  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 801426D0 0013F4D0  38 61 00 08 */	addi r3, r1, 8
/* 801426D4 0013F4D4  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 801426D8 0013F4D8  4B ED 29 F5 */	bl xVec3Length2__FPC5xVec3
/* 801426DC 0013F4DC  FF E0 08 90 */	fmr f31, f1
/* 801426E0 0013F4E0  7F E3 FB 78 */	mr r3, r31
/* 801426E4 0013F4E4  38 80 00 00 */	li r4, 0
/* 801426E8 0013F4E8  4B FB 09 91 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 801426EC 0013F4EC  C0 02 A5 F0 */	lfs f0, _2264-_SDA2_BASE_(r2)
/* 801426F0 0013F4F0  EC 00 07 B2 */	fmuls f0, f0, f30
/* 801426F4 0013F4F4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801426F8 0013F4F8  40 80 00 B0 */	bge lbl_801427A8
/* 801426FC 0013F4FC  3C 60 80 3C */	lis r3, globals@ha
/* 80142700 0013F500  38 63 05 58 */	addi r3, r3, globals@l
/* 80142704 0013F504  80 03 17 88 */	lwz r0, 0x1788(r3)
/* 80142708 0013F508  28 00 00 00 */	cmplwi r0, 0
/* 8014270C 0013F50C  41 82 00 18 */	beq lbl_80142724
/* 80142710 0013F510  38 00 00 01 */	li r0, 1
/* 80142714 0013F514  3C 60 4E 47 */	lis r3, 0x4E474231@ha
/* 80142718 0013F518  90 1D 00 00 */	stw r0, 0(r29)
/* 8014271C 0013F51C  3B C3 42 31 */	addi r30, r3, 0x4E474231@l
/* 80142720 0013F520  48 00 00 88 */	b lbl_801427A8
lbl_80142724:
/* 80142724 0013F524  80 7F 02 C0 */	lwz r3, 0x2c0(r31)
/* 80142728 0013F528  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 8014272C 0013F52C  41 82 00 20 */	beq lbl_8014274C
/* 80142730 0013F530  54 60 07 FA */	rlwinm r0, r3, 0, 0x1f, 0x1d
/* 80142734 0013F534  3C 60 4E 47 */	lis r3, 0x4E474232@ha
/* 80142738 0013F538  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 8014273C 0013F53C  38 00 00 01 */	li r0, 1
/* 80142740 0013F540  3B C3 42 32 */	addi r30, r3, 0x4E474232@l
/* 80142744 0013F544  90 1D 00 00 */	stw r0, 0(r29)
/* 80142748 0013F548  48 00 00 60 */	b lbl_801427A8
lbl_8014274C:
/* 8014274C 0013F54C  C0 02 A5 E4 */	lfs f0, _2173-_SDA2_BASE_(r2)
/* 80142750 0013F550  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80142754 0013F554  40 81 00 18 */	ble lbl_8014276C
/* 80142758 0013F558  38 00 00 01 */	li r0, 1
/* 8014275C 0013F55C  3C 60 4E 47 */	lis r3, 0x4E474233@ha
/* 80142760 0013F560  90 1D 00 00 */	stw r0, 0(r29)
/* 80142764 0013F564  3B C3 42 33 */	addi r30, r3, 0x4E474233@l
/* 80142768 0013F568  48 00 00 40 */	b lbl_801427A8
lbl_8014276C:
/* 8014276C 0013F56C  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80142770 0013F570  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 80142774 0013F574  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 80142778 0013F578  D0 1C 00 4C */	stfs f0, 0x4c(r28)
/* 8014277C 0013F57C  38 63 05 C8 */	addi r3, r3, 0x5c8
/* 80142780 0013F580  4B F0 9A 95 */	bl xStrHash__FPCc
/* 80142784 0013F584  C0 22 A5 F4 */	lfs f1, _2265-_SDA2_BASE_(r2)
/* 80142788 0013F588  7F E6 FB 78 */	mr r6, r31
/* 8014278C 0013F58C  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 80142790 0013F590  38 80 00 00 */	li r4, 0
/* 80142794 0013F594  C0 62 A5 D8 */	lfs f3, _2154-_SDA2_BASE_(r2)
/* 80142798 0013F598  38 A0 00 00 */	li r5, 0
/* 8014279C 0013F59C  C0 82 A5 64 */	lfs f4, _1379-_SDA2_BASE_(r2)
/* 801427A0 0013F5A0  38 E0 00 00 */	li r7, 0
/* 801427A4 0013F5A4  4B F0 D4 29 */	bl xSndPlay3D__FUiffUiUiP4xEntf14sound_categoryf
lbl_801427A8:
/* 801427A8 0013F5A8  3C 1E B1 B9 */	addis r0, r30, 0xb1b9
/* 801427AC 0013F5AC  28 00 42 32 */	cmplwi r0, 0x4232
/* 801427B0 0013F5B0  40 82 00 B8 */	bne lbl_80142868
/* 801427B4 0013F5B4  80 1F 0D 38 */	lwz r0, 0xd38(r31)
/* 801427B8 0013F5B8  54 1D 07 BE */	clrlwi r29, r0, 0x1e
/* 801427BC 0013F5BC  28 1D 00 03 */	cmplwi r29, 3
/* 801427C0 0013F5C0  41 80 00 10 */	blt lbl_801427D0
/* 801427C4 0013F5C4  4B EE E4 A5 */	bl xrand__Fv
/* 801427C8 0013F5C8  54 60 05 AF */	rlwinm. r0, r3, 0, 0x16, 0x17
/* 801427CC 0013F5CC  40 82 00 9C */	bne lbl_80142868
lbl_801427D0:
/* 801427D0 0013F5D0  28 1D 00 03 */	cmplwi r29, 3
/* 801427D4 0013F5D4  3B 80 00 02 */	li r28, 2
/* 801427D8 0013F5D8  40 80 00 08 */	bge lbl_801427E0
/* 801427DC 0013F5DC  7F BC EB 78 */	mr r28, r29
lbl_801427E0:
/* 801427E0 0013F5E0  80 1F 02 D8 */	lwz r0, 0x2d8(r31)
/* 801427E4 0013F5E4  2C 00 00 02 */	cmpwi r0, 2
/* 801427E8 0013F5E8  40 82 00 38 */	bne lbl_80142820
/* 801427EC 0013F5EC  80 7F 0D 34 */	lwz r3, 0xd34(r31)
/* 801427F0 0013F5F0  3C 80 80 33 */	lis r4, sNFSoundValue@ha
/* 801427F4 0013F5F4  38 84 80 9C */	addi r4, r4, sNFSoundValue@l
/* 801427F8 0013F5F8  57 80 10 3A */	slwi r0, r28, 2
/* 801427FC 0013F5FC  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80142800 0013F600  7C 84 02 14 */	add r4, r4, r0
/* 80142804 0013F604  80 84 00 24 */	lwz r4, 0x24(r4)
/* 80142808 0013F608  38 A0 00 00 */	li r5, 0
/* 8014280C 0013F60C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80142810 0013F610  38 C0 FF FF */	li r6, -1
/* 80142814 0013F614  7D 89 03 A6 */	mtctr r12
/* 80142818 0013F618  4E 80 04 21 */	bctrl 
/* 8014281C 0013F61C  48 00 00 30 */	b lbl_8014284C
lbl_80142820:
/* 80142820 0013F620  80 7F 0D 34 */	lwz r3, 0xd34(r31)
/* 80142824 0013F624  3C 80 80 33 */	lis r4, sNFSoundValue@ha
/* 80142828 0013F628  57 80 10 3A */	slwi r0, r28, 2
/* 8014282C 0013F62C  38 A0 00 00 */	li r5, 0
/* 80142830 0013F630  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80142834 0013F634  38 84 80 9C */	addi r4, r4, sNFSoundValue@l
/* 80142838 0013F638  7C 84 00 2E */	lwzx r4, r4, r0
/* 8014283C 0013F63C  38 C0 FF FF */	li r6, -1
/* 80142840 0013F640  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80142844 0013F644  7D 89 03 A6 */	mtctr r12
/* 80142848 0013F648  4E 80 04 21 */	bctrl 
lbl_8014284C:
/* 8014284C 0013F64C  80 7F 0D 38 */	lwz r3, 0xd38(r31)
/* 80142850 0013F650  38 1C 00 01 */	addi r0, r28, 1
/* 80142854 0013F654  54 63 00 3A */	rlwinm r3, r3, 0, 0, 0x1d
/* 80142858 0013F658  90 7F 0D 38 */	stw r3, 0xd38(r31)
/* 8014285C 0013F65C  80 7F 0D 38 */	lwz r3, 0xd38(r31)
/* 80142860 0013F660  7C 60 03 78 */	or r0, r3, r0
/* 80142864 0013F664  90 1F 0D 38 */	stw r0, 0xd38(r31)
lbl_80142868:
/* 80142868 0013F668  7F C3 F3 78 */	mr r3, r30
/* 8014286C 0013F66C  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 80142870 0013F670  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80142874 0013F674  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 80142878 0013F678  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 8014287C 0013F67C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80142880 0013F680  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80142884 0013F684  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 80142888 0013F688  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8014288C 0013F68C  83 81 00 20 */	lwz r28, 0x20(r1)
/* 80142890 0013F690  7C 08 03 A6 */	mtlr r0
/* 80142894 0013F694  38 21 00 50 */	addi r1, r1, 0x50
/* 80142898 0013F698  4E 80 00 20 */	blr 

sitCB__FP5xGoalPvP11en_trantypefPv:
/* 80142B54 0013F954  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80142B58 0013F958  7C 08 02 A6 */	mflr r0
/* 80142B5C 0013F95C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80142B60 0013F960  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80142B64 0013F964  93 C1 00 08 */	stw r30, 8(r1)
/* 80142B68 0013F968  7C BE 2B 78 */	mr r30, r5
/* 80142B6C 0013F96C  38 A0 00 00 */	li r5, 0
/* 80142B70 0013F970  80 83 00 18 */	lwz r4, 0x18(r3)
/* 80142B74 0013F974  83 E4 00 00 */	lwz r31, 0(r4)
/* 80142B78 0013F978  80 9F 02 D8 */	lwz r4, 0x2d8(r31)
/* 80142B7C 0013F97C  2C 04 00 03 */	cmpwi r4, 3
/* 80142B80 0013F980  40 82 00 5C */	bne lbl_80142BDC
/* 80142B84 0013F984  C0 2D 84 88 */	lfs f1, sHeadPopOffFactor-_SDA_BASE_(r13)
/* 80142B88 0013F988  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80142B8C 0013F98C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80142B90 0013F990  40 81 00 4C */	ble lbl_80142BDC
/* 80142B94 0013F994  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 80142B98 0013F998  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 80142B9C 0013F99C  38 63 05 D5 */	addi r3, r3, 0x5d5
/* 80142BA0 0013F9A0  4B F0 96 75 */	bl xStrHash__FPCc
/* 80142BA4 0013F9A4  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 80142BA8 0013F9A8  7F E6 FB 78 */	mr r6, r31
/* 80142BAC 0013F9AC  C0 22 A5 E0 */	lfs f1, _2156-_SDA2_BASE_(r2)
/* 80142BB0 0013F9B0  38 80 00 00 */	li r4, 0
/* 80142BB4 0013F9B4  FC 80 10 90 */	fmr f4, f2
/* 80142BB8 0013F9B8  C0 62 A5 D8 */	lfs f3, _2154-_SDA2_BASE_(r2)
/* 80142BBC 0013F9BC  38 A0 00 00 */	li r5, 0
/* 80142BC0 0013F9C0  38 E0 00 00 */	li r7, 0
/* 80142BC4 0013F9C4  4B F0 D0 09 */	bl xSndPlay3D__FUiffUiUiP4xEntf14sound_categoryf
/* 80142BC8 0013F9C8  38 00 00 01 */	li r0, 1
/* 80142BCC 0013F9CC  3C 60 4E 47 */	lis r3, 0x4E474235@ha
/* 80142BD0 0013F9D0  90 1E 00 00 */	stw r0, 0(r30)
/* 80142BD4 0013F9D4  38 A3 42 35 */	addi r5, r3, 0x4E474235@l
/* 80142BD8 0013F9D8  48 00 00 70 */	b lbl_80142C48
lbl_80142BDC:
/* 80142BDC 0013F9DC  80 03 00 54 */	lwz r0, 0x54(r3)
/* 80142BE0 0013F9E0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80142BE4 0013F9E4  41 82 00 44 */	beq lbl_80142C28
/* 80142BE8 0013F9E8  C0 23 00 4C */	lfs f1, 0x4c(r3)
/* 80142BEC 0013F9EC  C0 03 00 50 */	lfs f0, 0x50(r3)
/* 80142BF0 0013F9F0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80142BF4 0013F9F4  40 81 00 54 */	ble lbl_80142C48
/* 80142BF8 0013F9F8  2C 04 00 01 */	cmpwi r4, 1
/* 80142BFC 0013F9FC  40 82 00 18 */	bne lbl_80142C14
/* 80142C00 0013FA00  38 00 00 01 */	li r0, 1
/* 80142C04 0013FA04  3C 60 4E 47 */	lis r3, 0x4E474239@ha
/* 80142C08 0013FA08  90 1E 00 00 */	stw r0, 0(r30)
/* 80142C0C 0013FA0C  38 A3 42 39 */	addi r5, r3, 0x4E474239@l
/* 80142C10 0013FA10  48 00 00 38 */	b lbl_80142C48
lbl_80142C14:
/* 80142C14 0013FA14  38 00 00 01 */	li r0, 1
/* 80142C18 0013FA18  3C 60 4E 47 */	lis r3, 0x4E474235@ha
/* 80142C1C 0013FA1C  90 1E 00 00 */	stw r0, 0(r30)
/* 80142C20 0013FA20  38 A3 42 35 */	addi r5, r3, 0x4E474235@l
/* 80142C24 0013FA24  48 00 00 24 */	b lbl_80142C48
lbl_80142C28:
/* 80142C28 0013FA28  C0 23 00 4C */	lfs f1, 0x4c(r3)
/* 80142C2C 0013FA2C  C0 02 A5 34 */	lfs f0, _1072-_SDA2_BASE_(r2)
/* 80142C30 0013FA30  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80142C34 0013FA34  40 81 00 14 */	ble lbl_80142C48
/* 80142C38 0013FA38  38 00 00 01 */	li r0, 1
/* 80142C3C 0013FA3C  3C 60 4E 47 */	lis r3, 0x4E474239@ha
/* 80142C40 0013FA40  90 1E 00 00 */	stw r0, 0(r30)
/* 80142C44 0013FA44  38 A3 42 39 */	addi r5, r3, 0x4E474239@l
lbl_80142C48:
/* 80142C48 0013FA48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80142C4C 0013FA4C  7C A3 2B 78 */	mr r3, r5
/* 80142C50 0013FA50  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80142C54 0013FA54  83 C1 00 08 */	lwz r30, 8(r1)
/* 80142C58 0013FA58  7C 08 03 A6 */	mtlr r0
/* 80142C5C 0013FA5C  38 21 00 10 */	addi r1, r1, 0x10
/* 80142C60 0013FA60  4E 80 00 20 */	blr 

getUpCB__FP5xGoalPvP11en_trantypefPv:
/* 80142C64 0013FA64  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80142C68 0013FA68  7C 08 02 A6 */	mflr r0
/* 80142C6C 0013FA6C  90 01 00 54 */	stw r0, 0x54(r1)
/* 80142C70 0013FA70  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80142C74 0013FA74  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 80142C78 0013FA78  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 80142C7C 0013FA7C  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 80142C80 0013FA80  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80142C84 0013FA84  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80142C88 0013FA88  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80142C8C 0013FA8C  80 83 00 18 */	lwz r4, 0x18(r3)
/* 80142C90 0013FA90  3C 60 80 3C */	lis r3, globals@ha
/* 80142C94 0013FA94  38 63 05 58 */	addi r3, r3, globals@l
/* 80142C98 0013FA98  FF C0 08 90 */	fmr f30, f1
/* 80142C9C 0013FA9C  83 E4 00 00 */	lwz r31, 0(r4)
/* 80142CA0 0013FAA0  7C BE 2B 78 */	mr r30, r5
/* 80142CA4 0013FAA4  80 A3 07 04 */	lwz r5, 0x704(r3)
/* 80142CA8 0013FAA8  38 61 00 08 */	addi r3, r1, 8
/* 80142CAC 0013FAAC  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 80142CB0 0013FAB0  80 C5 00 4C */	lwz r6, 0x4c(r5)
/* 80142CB4 0013FAB4  3B A0 00 00 */	li r29, 0
/* 80142CB8 0013FAB8  80 A4 00 4C */	lwz r5, 0x4c(r4)
/* 80142CBC 0013FABC  38 86 00 30 */	addi r4, r6, 0x30
/* 80142CC0 0013FAC0  38 A5 00 30 */	addi r5, r5, 0x30
/* 80142CC4 0013FAC4  4B EC B9 CD */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 80142CC8 0013FAC8  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80142CCC 0013FACC  38 61 00 08 */	addi r3, r1, 8
/* 80142CD0 0013FAD0  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80142CD4 0013FAD4  4B ED 23 F9 */	bl xVec3Length2__FPC5xVec3
/* 80142CD8 0013FAD8  FF E0 08 90 */	fmr f31, f1
/* 80142CDC 0013FADC  7F E3 FB 78 */	mr r3, r31
/* 80142CE0 0013FAE0  38 80 00 00 */	li r4, 0
/* 80142CE4 0013FAE4  4B FB 03 95 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 80142CE8 0013FAE8  C0 02 A5 F0 */	lfs f0, _2264-_SDA2_BASE_(r2)
/* 80142CEC 0013FAEC  EC 00 07 B2 */	fmuls f0, f0, f30
/* 80142CF0 0013FAF0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80142CF4 0013FAF4  40 80 00 C4 */	bge lbl_80142DB8
/* 80142CF8 0013FAF8  80 7F 02 D8 */	lwz r3, 0x2d8(r31)
/* 80142CFC 0013FAFC  2C 03 00 01 */	cmpwi r3, 1
/* 80142D00 0013FB00  40 82 00 10 */	bne lbl_80142D10
/* 80142D04 0013FB04  80 1F 02 D4 */	lwz r0, 0x2d4(r31)
/* 80142D08 0013FB08  2C 00 00 06 */	cmpwi r0, 6
/* 80142D0C 0013FB0C  40 81 00 40 */	ble lbl_80142D4C
lbl_80142D10:
/* 80142D10 0013FB10  2C 03 00 02 */	cmpwi r3, 2
/* 80142D14 0013FB14  40 82 00 10 */	bne lbl_80142D24
/* 80142D18 0013FB18  80 1F 02 D4 */	lwz r0, 0x2d4(r31)
/* 80142D1C 0013FB1C  2C 00 00 03 */	cmpwi r0, 3
/* 80142D20 0013FB20  40 81 00 2C */	ble lbl_80142D4C
lbl_80142D24:
/* 80142D24 0013FB24  2C 03 00 03 */	cmpwi r3, 3
/* 80142D28 0013FB28  40 82 00 10 */	bne lbl_80142D38
/* 80142D2C 0013FB2C  80 1F 02 D4 */	lwz r0, 0x2d4(r31)
/* 80142D30 0013FB30  2C 00 00 00 */	cmpwi r0, 0
/* 80142D34 0013FB34  40 81 00 18 */	ble lbl_80142D4C
lbl_80142D38:
/* 80142D38 0013FB38  3C 60 80 3C */	lis r3, globals@ha
/* 80142D3C 0013FB3C  38 63 05 58 */	addi r3, r3, globals@l
/* 80142D40 0013FB40  80 03 17 88 */	lwz r0, 0x1788(r3)
/* 80142D44 0013FB44  28 00 00 00 */	cmplwi r0, 0
/* 80142D48 0013FB48  41 82 00 18 */	beq lbl_80142D60
lbl_80142D4C:
/* 80142D4C 0013FB4C  38 00 00 01 */	li r0, 1
/* 80142D50 0013FB50  3C 60 4E 47 */	lis r3, 0x4E474231@ha
/* 80142D54 0013FB54  90 1E 00 00 */	stw r0, 0(r30)
/* 80142D58 0013FB58  3B A3 42 31 */	addi r29, r3, 0x4E474231@l
/* 80142D5C 0013FB5C  48 00 00 5C */	b lbl_80142DB8
lbl_80142D60:
/* 80142D60 0013FB60  80 7F 02 C0 */	lwz r3, 0x2c0(r31)
/* 80142D64 0013FB64  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 80142D68 0013FB68  41 82 00 20 */	beq lbl_80142D88
/* 80142D6C 0013FB6C  54 60 07 FA */	rlwinm r0, r3, 0, 0x1f, 0x1d
/* 80142D70 0013FB70  3C 60 4E 47 */	lis r3, 0x4E474232@ha
/* 80142D74 0013FB74  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 80142D78 0013FB78  38 00 00 01 */	li r0, 1
/* 80142D7C 0013FB7C  3B A3 42 32 */	addi r29, r3, 0x4E474232@l
/* 80142D80 0013FB80  90 1E 00 00 */	stw r0, 0(r30)
/* 80142D84 0013FB84  48 00 00 34 */	b lbl_80142DB8
lbl_80142D88:
/* 80142D88 0013FB88  C0 02 A5 E4 */	lfs f0, _2173-_SDA2_BASE_(r2)
/* 80142D8C 0013FB8C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80142D90 0013FB90  40 80 00 18 */	bge lbl_80142DA8
/* 80142D94 0013FB94  38 00 00 01 */	li r0, 1
/* 80142D98 0013FB98  3C 60 4E 47 */	lis r3, 0x4E474234@ha
/* 80142D9C 0013FB9C  90 1E 00 00 */	stw r0, 0(r30)
/* 80142DA0 0013FBA0  3B A3 42 34 */	addi r29, r3, 0x4E474234@l
/* 80142DA4 0013FBA4  48 00 00 14 */	b lbl_80142DB8
lbl_80142DA8:
/* 80142DA8 0013FBA8  38 00 00 01 */	li r0, 1
/* 80142DAC 0013FBAC  3C 60 4E 47 */	lis r3, 0x4E474233@ha
/* 80142DB0 0013FBB0  90 1E 00 00 */	stw r0, 0(r30)
/* 80142DB4 0013FBB4  3B A3 42 33 */	addi r29, r3, 0x4E474233@l
lbl_80142DB8:
/* 80142DB8 0013FBB8  7F A3 EB 78 */	mr r3, r29
/* 80142DBC 0013FBBC  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 80142DC0 0013FBC0  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80142DC4 0013FBC4  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 80142DC8 0013FBC8  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 80142DCC 0013FBCC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80142DD0 0013FBD0  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80142DD4 0013FBD4  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80142DD8 0013FBD8  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 80142DDC 0013FBDC  7C 08 03 A6 */	mtlr r0
/* 80142DE0 0013FBE0  38 21 00 50 */	addi r1, r1, 0x50
/* 80142DE4 0013FBE4  4E 80 00 20 */	blr 

runToRopeCB__FP5xGoalPvP11en_trantypefPv:
/* 80142DE8 0013FBE8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80142DEC 0013FBEC  7C 08 02 A6 */	mflr r0
/* 80142DF0 0013FBF0  90 01 00 34 */	stw r0, 0x34(r1)
/* 80142DF4 0013FBF4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80142DF8 0013FBF8  3B E0 00 00 */	li r31, 0
/* 80142DFC 0013FBFC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80142E00 0013FC00  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80142E04 0013FC04  7C BD 2B 78 */	mr r29, r5
/* 80142E08 0013FC08  80 83 00 18 */	lwz r4, 0x18(r3)
/* 80142E0C 0013FC0C  38 61 00 08 */	addi r3, r1, 8
/* 80142E10 0013FC10  83 C4 00 00 */	lwz r30, 0(r4)
/* 80142E14 0013FC14  80 1E 05 48 */	lwz r0, 0x548(r30)
/* 80142E18 0013FC18  80 9E 00 24 */	lwz r4, 0x24(r30)
/* 80142E1C 0013FC1C  1C C0 00 0C */	mulli r6, r0, 0xc
/* 80142E20 0013FC20  80 A4 00 4C */	lwz r5, 0x4c(r4)
/* 80142E24 0013FC24  38 86 03 FC */	addi r4, r6, 0x3fc
/* 80142E28 0013FC28  38 A5 00 30 */	addi r5, r5, 0x30
/* 80142E2C 0013FC2C  7C 9E 22 14 */	add r4, r30, r4
/* 80142E30 0013FC30  4B EC B8 61 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 80142E34 0013FC34  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80142E38 0013FC38  38 61 00 08 */	addi r3, r1, 8
/* 80142E3C 0013FC3C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80142E40 0013FC40  80 1E 05 48 */	lwz r0, 0x548(r30)
/* 80142E44 0013FC44  1C 80 00 0C */	mulli r4, r0, 0xc
/* 80142E48 0013FC48  38 84 03 9C */	addi r4, r4, 0x39c
/* 80142E4C 0013FC4C  7C 9E 22 14 */	add r4, r30, r4
/* 80142E50 0013FC50  4B F0 B6 A1 */	bl xVec3Dot__FPC5xVec3PC5xVec3
/* 80142E54 0013FC54  3C 60 80 3C */	lis r3, globals@ha
/* 80142E58 0013FC58  38 63 05 58 */	addi r3, r3, globals@l
/* 80142E5C 0013FC5C  80 03 17 88 */	lwz r0, 0x1788(r3)
/* 80142E60 0013FC60  28 00 00 00 */	cmplwi r0, 0
/* 80142E64 0013FC64  41 82 00 18 */	beq lbl_80142E7C
/* 80142E68 0013FC68  38 00 00 01 */	li r0, 1
/* 80142E6C 0013FC6C  3C 60 4E 47 */	lis r3, 0x4E474231@ha
/* 80142E70 0013FC70  90 1D 00 00 */	stw r0, 0(r29)
/* 80142E74 0013FC74  3B E3 42 31 */	addi r31, r3, 0x4E474231@l
/* 80142E78 0013FC78  48 00 00 40 */	b lbl_80142EB8
lbl_80142E7C:
/* 80142E7C 0013FC7C  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80142E80 0013FC80  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80142E84 0013FC84  40 81 00 34 */	ble lbl_80142EB8
/* 80142E88 0013FC88  38 00 00 01 */	li r0, 1
/* 80142E8C 0013FC8C  3C 60 4E 47 */	lis r3, 0x4E47423B@ha
/* 80142E90 0013FC90  90 1D 00 00 */	stw r0, 0(r29)
/* 80142E94 0013FC94  3B E3 42 3B */	addi r31, r3, 0x4E47423B@l
/* 80142E98 0013FC98  80 7E 02 B8 */	lwz r3, 0x2b8(r30)
/* 80142E9C 0013FC9C  80 03 00 28 */	lwz r0, 0x28(r3)
/* 80142EA0 0013FCA0  54 00 07 34 */	rlwinm r0, r0, 0, 0x1c, 0x1a
/* 80142EA4 0013FCA4  90 03 00 28 */	stw r0, 0x28(r3)
/* 80142EA8 0013FCA8  80 7E 02 B8 */	lwz r3, 0x2b8(r30)
/* 80142EAC 0013FCAC  80 03 00 30 */	lwz r0, 0x30(r3)
/* 80142EB0 0013FCB0  54 00 07 34 */	rlwinm r0, r0, 0, 0x1c, 0x1a
/* 80142EB4 0013FCB4  90 03 00 30 */	stw r0, 0x30(r3)
lbl_80142EB8:
/* 80142EB8 0013FCB8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80142EBC 0013FCBC  7F E3 FB 78 */	mr r3, r31
/* 80142EC0 0013FCC0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80142EC4 0013FCC4  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80142EC8 0013FCC8  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 80142ECC 0013FCCC  7C 08 03 A6 */	mtlr r0
/* 80142ED0 0013FCD0  38 21 00 30 */	addi r1, r1, 0x30
/* 80142ED4 0013FCD4  4E 80 00 20 */	blr 

clotheslineCB__FP5xGoalPvP11en_trantypefPv:
/* 80142ED8 0013FCD8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80142EDC 0013FCDC  7C 08 02 A6 */	mflr r0
/* 80142EE0 0013FCE0  90 01 00 34 */	stw r0, 0x34(r1)
/* 80142EE4 0013FCE4  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80142EE8 0013FCE8  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 80142EEC 0013FCEC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80142EF0 0013FCF0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80142EF4 0013FCF4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80142EF8 0013FCF8  80 03 00 50 */	lwz r0, 0x50(r3)
/* 80142EFC 0013FCFC  FF E0 08 90 */	fmr f31, f1
/* 80142F00 0013FD00  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80142F04 0013FD04  7C BF 2B 78 */	mr r31, r5
/* 80142F08 0013FD08  28 00 00 02 */	cmplwi r0, 2
/* 80142F0C 0013FD0C  3B A0 00 00 */	li r29, 0
/* 80142F10 0013FD10  83 C3 00 00 */	lwz r30, 0(r3)
/* 80142F14 0013FD14  40 82 00 A0 */	bne lbl_80142FB4
/* 80142F18 0013FD18  7F C3 F3 78 */	mr r3, r30
/* 80142F1C 0013FD1C  38 80 00 00 */	li r4, 0
/* 80142F20 0013FD20  4B FB 01 59 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 80142F24 0013FD24  C0 02 A5 F0 */	lfs f0, _2264-_SDA2_BASE_(r2)
/* 80142F28 0013FD28  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80142F2C 0013FD2C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80142F30 0013FD30  40 80 00 84 */	bge lbl_80142FB4
/* 80142F34 0013FD34  80 9E 02 B8 */	lwz r4, 0x2b8(r30)
/* 80142F38 0013FD38  3C 60 80 3C */	lis r3, globals@ha
/* 80142F3C 0013FD3C  38 63 05 58 */	addi r3, r3, globals@l
/* 80142F40 0013FD40  80 04 00 28 */	lwz r0, 0x28(r4)
/* 80142F44 0013FD44  54 00 07 34 */	rlwinm r0, r0, 0, 0x1c, 0x1a
/* 80142F48 0013FD48  90 04 00 28 */	stw r0, 0x28(r4)
/* 80142F4C 0013FD4C  80 9E 02 B8 */	lwz r4, 0x2b8(r30)
/* 80142F50 0013FD50  80 04 00 30 */	lwz r0, 0x30(r4)
/* 80142F54 0013FD54  54 00 07 34 */	rlwinm r0, r0, 0, 0x1c, 0x1a
/* 80142F58 0013FD58  90 04 00 30 */	stw r0, 0x30(r4)
/* 80142F5C 0013FD5C  80 03 17 88 */	lwz r0, 0x1788(r3)
/* 80142F60 0013FD60  28 00 00 00 */	cmplwi r0, 0
/* 80142F64 0013FD64  41 82 00 18 */	beq lbl_80142F7C
/* 80142F68 0013FD68  38 00 00 01 */	li r0, 1
/* 80142F6C 0013FD6C  3C 60 4E 47 */	lis r3, 0x4E474231@ha
/* 80142F70 0013FD70  90 1F 00 00 */	stw r0, 0(r31)
/* 80142F74 0013FD74  3B A3 42 31 */	addi r29, r3, 0x4E474231@l
/* 80142F78 0013FD78  48 00 00 3C */	b lbl_80142FB4
lbl_80142F7C:
/* 80142F7C 0013FD7C  80 7E 02 C0 */	lwz r3, 0x2c0(r30)
/* 80142F80 0013FD80  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 80142F84 0013FD84  41 82 00 20 */	beq lbl_80142FA4
/* 80142F88 0013FD88  54 60 07 FA */	rlwinm r0, r3, 0, 0x1f, 0x1d
/* 80142F8C 0013FD8C  3C 60 4E 47 */	lis r3, 0x4E474232@ha
/* 80142F90 0013FD90  90 1E 02 C0 */	stw r0, 0x2c0(r30)
/* 80142F94 0013FD94  38 00 00 01 */	li r0, 1
/* 80142F98 0013FD98  3B A3 42 32 */	addi r29, r3, 0x4E474232@l
/* 80142F9C 0013FD9C  90 1F 00 00 */	stw r0, 0(r31)
/* 80142FA0 0013FDA0  48 00 00 14 */	b lbl_80142FB4
lbl_80142FA4:
/* 80142FA4 0013FDA4  38 00 00 01 */	li r0, 1
/* 80142FA8 0013FDA8  3C 60 4E 47 */	lis r3, 0x4E474233@ha
/* 80142FAC 0013FDAC  90 1F 00 00 */	stw r0, 0(r31)
/* 80142FB0 0013FDB0  3B A3 42 33 */	addi r29, r3, 0x4E474233@l
lbl_80142FB4:
/* 80142FB4 0013FDB4  7F A3 EB 78 */	mr r3, r29
/* 80142FB8 0013FDB8  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 80142FBC 0013FDBC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80142FC0 0013FDC0  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80142FC4 0013FDC4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80142FC8 0013FDC8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80142FCC 0013FDCC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80142FD0 0013FDD0  7C 08 03 A6 */	mtlr r0
/* 80142FD4 0013FDD4  38 21 00 30 */	addi r1, r1, 0x30
/* 80142FD8 0013FDD8  4E 80 00 20 */	blr 

Enter__21zNPCGoalBossSandyIdleFfPv:
/* 80142FDC 0013FDDC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80142FE0 0013FDE0  7C 08 02 A6 */	mflr r0
/* 80142FE4 0013FDE4  90 01 00 34 */	stw r0, 0x34(r1)
/* 80142FE8 0013FDE8  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80142FEC 0013FDEC  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 80142FF0 0013FDF0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80142FF4 0013FDF4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80142FF8 0013FDF8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80142FFC 0013FDFC  7C 7D 1B 78 */	mr r29, r3
/* 80143000 0013FE00  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80143004 0013FE04  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80143008 0013FE08  FF E0 08 90 */	fmr f31, f1
/* 8014300C 0013FE0C  7C 9E 23 78 */	mr r30, r4
/* 80143010 0013FE10  83 E3 00 00 */	lwz r31, 0(r3)
/* 80143014 0013FE14  D0 1D 00 4C */	stfs f0, 0x4c(r29)
/* 80143018 0013FE18  80 1F 02 C0 */	lwz r0, 0x2c0(r31)
/* 8014301C 0013FE1C  60 00 00 20 */	ori r0, r0, 0x20
/* 80143020 0013FE20  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 80143024 0013FE24  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 80143028 0013FE28  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 8014302C 0013FE2C  FC 40 08 90 */	fmr f2, f1
/* 80143030 0013FE30  FC 60 08 90 */	fmr f3, f1
/* 80143034 0013FE34  38 63 00 D4 */	addi r3, r3, 0xd4
/* 80143038 0013FE38  4B EC BF C5 */	bl xVec3Init__FP5xVec3fff
/* 8014303C 0013FE3C  80 BF 02 B8 */	lwz r5, 0x2b8(r31)
/* 80143040 0013FE40  FC 20 F8 90 */	fmr f1, f31
/* 80143044 0013FE44  7F A3 EB 78 */	mr r3, r29
/* 80143048 0013FE48  7F C4 F3 78 */	mr r4, r30
/* 8014304C 0013FE4C  80 05 00 28 */	lwz r0, 0x28(r5)
/* 80143050 0013FE50  60 00 00 10 */	ori r0, r0, 0x10
/* 80143054 0013FE54  90 05 00 28 */	stw r0, 0x28(r5)
/* 80143058 0013FE58  80 BF 02 B8 */	lwz r5, 0x2b8(r31)
/* 8014305C 0013FE5C  80 05 00 30 */	lwz r0, 0x30(r5)
/* 80143060 0013FE60  60 00 00 10 */	ori r0, r0, 0x10
/* 80143064 0013FE64  90 05 00 30 */	stw r0, 0x30(r5)
/* 80143068 0013FE68  4B F9 20 AD */	bl Enter__14zNPCGoalCommonFfPv
/* 8014306C 0013FE6C  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 80143070 0013FE70  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80143074 0013FE74  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80143078 0013FE78  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8014307C 0013FE7C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80143080 0013FE80  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80143084 0013FE84  7C 08 03 A6 */	mtlr r0
/* 80143088 0013FE88  38 21 00 30 */	addi r1, r1, 0x30
/* 8014308C 0013FE8C  4E 80 00 20 */	blr 

Process__21zNPCGoalBossSandyIdleFP11en_trantypefPvP6xScene:
/* 80143090 0013FE90  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80143094 0013FE94  7C 08 02 A6 */	mflr r0
/* 80143098 0013FE98  90 01 00 44 */	stw r0, 0x44(r1)
/* 8014309C 0013FE9C  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 801430A0 0013FEA0  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 801430A4 0013FEA4  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 801430A8 0013FEA8  7C 7B 1B 78 */	mr r27, r3
/* 801430AC 0013FEAC  FF E0 08 90 */	fmr f31, f1
/* 801430B0 0013FEB0  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 801430B4 0013FEB4  3C 60 80 3C */	lis r3, globals@ha
/* 801430B8 0013FEB8  81 1B 00 18 */	lwz r8, 0x18(r27)
/* 801430BC 0013FEBC  38 E3 05 58 */	addi r7, r3, globals@l
/* 801430C0 0013FEC0  EC 00 F8 2A */	fadds f0, f0, f31
/* 801430C4 0013FEC4  83 E8 00 00 */	lwz r31, 0(r8)
/* 801430C8 0013FEC8  7C 9C 23 78 */	mr r28, r4
/* 801430CC 0013FECC  7C BD 2B 78 */	mr r29, r5
/* 801430D0 0013FED0  7C DE 33 78 */	mr r30, r6
/* 801430D4 0013FED4  D0 1B 00 4C */	stfs f0, 0x4c(r27)
/* 801430D8 0013FED8  38 61 00 08 */	addi r3, r1, 8
/* 801430DC 0013FEDC  80 A7 07 04 */	lwz r5, 0x704(r7)
/* 801430E0 0013FEE0  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 801430E4 0013FEE4  80 C5 00 4C */	lwz r6, 0x4c(r5)
/* 801430E8 0013FEE8  80 A4 00 4C */	lwz r5, 0x4c(r4)
/* 801430EC 0013FEEC  38 86 00 30 */	addi r4, r6, 0x30
/* 801430F0 0013FEF0  38 A5 00 30 */	addi r5, r5, 0x30
/* 801430F4 0013FEF4  4B EC B5 9D */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 801430F8 0013FEF8  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 801430FC 0013FEFC  38 61 00 08 */	addi r3, r1, 8
/* 80143100 0013FF00  7C 64 1B 78 */	mr r4, r3
/* 80143104 0013FF04  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80143108 0013FF08  4B F0 B1 E9 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 8014310C 0013FF0C  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 80143110 0013FF10  80 BF 00 48 */	lwz r5, 0x48(r31)
/* 80143114 0013FF14  80 83 00 4C */	lwz r4, 0x4c(r3)
/* 80143118 0013FF18  C0 22 A5 F8 */	lfs f1, _2376-_SDA2_BASE_(r2)
/* 8014311C 0013FF1C  38 65 00 20 */	addi r3, r5, 0x20
/* 80143120 0013FF20  38 84 00 20 */	addi r4, r4, 0x20
/* 80143124 0013FF24  4B EC 7F 6D */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 80143128 0013FF28  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 8014312C 0013FF2C  38 81 00 08 */	addi r4, r1, 8
/* 80143130 0013FF30  C0 22 A5 FC */	lfs f1, _2377-_SDA2_BASE_(r2)
/* 80143134 0013FF34  38 63 00 20 */	addi r3, r3, 0x20
/* 80143138 0013FF38  4B ED 1F 21 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 8014313C 0013FF3C  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80143140 0013FF40  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 80143144 0013FF44  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 80143148 0013FF48  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 8014314C 0013FF4C  38 63 00 20 */	addi r3, r3, 0x20
/* 80143150 0013FF50  7C 64 1B 78 */	mr r4, r3
/* 80143154 0013FF54  4B F0 B1 9D */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 80143158 0013FF58  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 8014315C 0013FF5C  38 83 00 10 */	addi r4, r3, 0x10
/* 80143160 0013FF60  38 A3 00 20 */	addi r5, r3, 0x20
/* 80143164 0013FF64  4B ED 1F 29 */	bl xVec3Cross__FP5xVec3PC5xVec3PC5xVec3
/* 80143168 0013FF68  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8014316C 0013FF6C  38 61 00 08 */	addi r3, r1, 8
/* 80143170 0013FF70  80 9F 00 48 */	lwz r4, 0x48(r31)
/* 80143174 0013FF74  D0 04 00 34 */	stfs f0, 0x34(r4)
/* 80143178 0013FF78  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 8014317C 0013FF7C  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80143180 0013FF80  4B F0 B3 71 */	bl xVec3Dot__FPC5xVec3PC5xVec3
/* 80143184 0013FF84  80 BF 00 24 */	lwz r5, 0x24(r31)
/* 80143188 0013FF88  7F 63 DB 78 */	mr r3, r27
/* 8014318C 0013FF8C  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 80143190 0013FF90  7F 84 E3 78 */	mr r4, r28
/* 80143194 0013FF94  80 E5 00 0C */	lwz r7, 0xc(r5)
/* 80143198 0013FF98  7F A5 EB 78 */	mr r5, r29
/* 8014319C 0013FF9C  EC 00 08 28 */	fsubs f0, f0, f1
/* 801431A0 0013FFA0  7F C6 F3 78 */	mr r6, r30
/* 801431A4 0013FFA4  80 E7 00 08 */	lwz r7, 8(r7)
/* 801431A8 0013FFA8  FC 20 F8 90 */	fmr f1, f31
/* 801431AC 0013FFAC  D0 07 00 10 */	stfs f0, 0x10(r7)
/* 801431B0 0013FFB0  80 FF 00 24 */	lwz r7, 0x24(r31)
/* 801431B4 0013FFB4  80 E7 00 0C */	lwz r7, 0xc(r7)
/* 801431B8 0013FFB8  80 E7 00 08 */	lwz r7, 8(r7)
/* 801431BC 0013FFBC  80 E7 00 34 */	lwz r7, 0x34(r7)
/* 801431C0 0013FFC0  D0 07 00 10 */	stfs f0, 0x10(r7)
/* 801431C4 0013FFC4  4B FC B9 85 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
/* 801431C8 0013FFC8  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 801431CC 0013FFCC  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 801431D0 0013FFD0  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 801431D4 0013FFD4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801431D8 0013FFD8  7C 08 03 A6 */	mtlr r0
/* 801431DC 0013FFDC  38 21 00 40 */	addi r1, r1, 0x40
/* 801431E0 0013FFE0  4E 80 00 20 */	blr 

Exit__21zNPCGoalBossSandyIdleFfPv:
/* 801431E4 0013FFE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801431E8 0013FFE8  7C 08 02 A6 */	mflr r0
/* 801431EC 0013FFEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801431F0 0013FFF0  80 A3 00 18 */	lwz r5, 0x18(r3)
/* 801431F4 0013FFF4  80 C5 00 00 */	lwz r6, 0(r5)
/* 801431F8 0013FFF8  80 06 02 C0 */	lwz r0, 0x2c0(r6)
/* 801431FC 0013FFFC  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 80143200 00140000  90 06 02 C0 */	stw r0, 0x2c0(r6)
/* 80143204 00140004  80 A6 02 B8 */	lwz r5, 0x2b8(r6)
/* 80143208 00140008  80 05 00 28 */	lwz r0, 0x28(r5)
/* 8014320C 0014000C  54 00 07 34 */	rlwinm r0, r0, 0, 0x1c, 0x1a
/* 80143210 00140010  90 05 00 28 */	stw r0, 0x28(r5)
/* 80143214 00140014  80 A6 02 B8 */	lwz r5, 0x2b8(r6)
/* 80143218 00140018  80 05 00 30 */	lwz r0, 0x30(r5)
/* 8014321C 0014001C  54 00 07 34 */	rlwinm r0, r0, 0, 0x1c, 0x1a
/* 80143220 00140020  90 05 00 30 */	stw r0, 0x30(r5)
/* 80143224 00140024  4B F9 21 F9 */	bl Exit__5xGoalFfPv
/* 80143228 00140028  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014322C 0014002C  7C 08 03 A6 */	mtlr r0
/* 80143230 00140030  38 21 00 10 */	addi r1, r1, 0x10
/* 80143234 00140034  4E 80 00 20 */	blr 

Enter__22zNPCGoalBossSandyTauntFfPv:
/* 80143238 00140038  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8014323C 0014003C  7C 08 02 A6 */	mflr r0
/* 80143240 00140040  90 01 00 34 */	stw r0, 0x34(r1)
/* 80143244 00140044  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80143248 00140048  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8014324C 0014004C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80143250 00140050  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80143254 00140054  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80143258 00140058  7C 7D 1B 78 */	mr r29, r3
/* 8014325C 0014005C  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80143260 00140060  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80143264 00140064  FF E0 08 90 */	fmr f31, f1
/* 80143268 00140068  7C 9E 23 78 */	mr r30, r4
/* 8014326C 0014006C  83 E3 00 00 */	lwz r31, 0(r3)
/* 80143270 00140070  D0 1D 00 4C */	stfs f0, 0x4c(r29)
/* 80143274 00140074  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 80143278 00140078  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 8014327C 0014007C  FC 40 08 90 */	fmr f2, f1
/* 80143280 00140080  FC 60 08 90 */	fmr f3, f1
/* 80143284 00140084  38 63 00 D4 */	addi r3, r3, 0xd4
/* 80143288 00140088  4B EC BD 75 */	bl xVec3Init__FP5xVec3fff
/* 8014328C 0014008C  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 80143290 00140090  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 80143294 00140094  38 63 05 E6 */	addi r3, r3, 0x5e6
/* 80143298 00140098  4B F0 8F 7D */	bl xStrHash__FPCc
/* 8014329C 0014009C  C0 22 A5 F4 */	lfs f1, _2265-_SDA2_BASE_(r2)
/* 801432A0 001400A0  7F E6 FB 78 */	mr r6, r31
/* 801432A4 001400A4  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 801432A8 001400A8  38 80 00 00 */	li r4, 0
/* 801432AC 001400AC  C0 62 A5 D8 */	lfs f3, _2154-_SDA2_BASE_(r2)
/* 801432B0 001400B0  38 A0 00 00 */	li r5, 0
/* 801432B4 001400B4  C0 82 A5 64 */	lfs f4, _1379-_SDA2_BASE_(r2)
/* 801432B8 001400B8  38 E0 00 00 */	li r7, 0
/* 801432BC 001400BC  4B F0 C9 11 */	bl xSndPlay3D__FUiffUiUiP4xEntf14sound_categoryf
/* 801432C0 001400C0  FC 20 F8 90 */	fmr f1, f31
/* 801432C4 001400C4  7F A3 EB 78 */	mr r3, r29
/* 801432C8 001400C8  7F C4 F3 78 */	mr r4, r30
/* 801432CC 001400CC  4B F9 1E 49 */	bl Enter__14zNPCGoalCommonFfPv
/* 801432D0 001400D0  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 801432D4 001400D4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801432D8 001400D8  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 801432DC 001400DC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801432E0 001400E0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801432E4 001400E4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801432E8 001400E8  7C 08 03 A6 */	mtlr r0
/* 801432EC 001400EC  38 21 00 30 */	addi r1, r1, 0x30
/* 801432F0 001400F0  4E 80 00 20 */	blr 

Process__22zNPCGoalBossSandyTauntFP11en_trantypefPvP6xScene:
/* 801432F4 001400F4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801432F8 001400F8  7C 08 02 A6 */	mflr r0
/* 801432FC 001400FC  90 01 00 44 */	stw r0, 0x44(r1)
/* 80143300 00140100  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80143304 00140104  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 80143308 00140108  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 8014330C 0014010C  7C 7B 1B 78 */	mr r27, r3
/* 80143310 00140110  FF E0 08 90 */	fmr f31, f1
/* 80143314 00140114  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 80143318 00140118  3C 60 80 3C */	lis r3, globals@ha
/* 8014331C 0014011C  81 1B 00 18 */	lwz r8, 0x18(r27)
/* 80143320 00140120  38 E3 05 58 */	addi r7, r3, globals@l
/* 80143324 00140124  EC 00 F8 2A */	fadds f0, f0, f31
/* 80143328 00140128  83 E8 00 00 */	lwz r31, 0(r8)
/* 8014332C 0014012C  7C 9C 23 78 */	mr r28, r4
/* 80143330 00140130  7C BD 2B 78 */	mr r29, r5
/* 80143334 00140134  7C DE 33 78 */	mr r30, r6
/* 80143338 00140138  D0 1B 00 4C */	stfs f0, 0x4c(r27)
/* 8014333C 0014013C  38 61 00 08 */	addi r3, r1, 8
/* 80143340 00140140  80 A7 07 04 */	lwz r5, 0x704(r7)
/* 80143344 00140144  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 80143348 00140148  80 C5 00 4C */	lwz r6, 0x4c(r5)
/* 8014334C 0014014C  80 A4 00 4C */	lwz r5, 0x4c(r4)
/* 80143350 00140150  38 86 00 30 */	addi r4, r6, 0x30
/* 80143354 00140154  38 A5 00 30 */	addi r5, r5, 0x30
/* 80143358 00140158  4B EC B3 39 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 8014335C 0014015C  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80143360 00140160  38 61 00 08 */	addi r3, r1, 8
/* 80143364 00140164  7C 64 1B 78 */	mr r4, r3
/* 80143368 00140168  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8014336C 0014016C  4B F0 AF 85 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 80143370 00140170  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 80143374 00140174  80 BF 00 48 */	lwz r5, 0x48(r31)
/* 80143378 00140178  80 83 00 4C */	lwz r4, 0x4c(r3)
/* 8014337C 0014017C  C0 22 A5 68 */	lfs f1, _1380-_SDA2_BASE_(r2)
/* 80143380 00140180  38 65 00 20 */	addi r3, r5, 0x20
/* 80143384 00140184  38 84 00 20 */	addi r4, r4, 0x20
/* 80143388 00140188  4B EC 7D 09 */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 8014338C 0014018C  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 80143390 00140190  38 81 00 08 */	addi r4, r1, 8
/* 80143394 00140194  C0 22 A5 48 */	lfs f1, _1192-_SDA2_BASE_(r2)
/* 80143398 00140198  38 63 00 20 */	addi r3, r3, 0x20
/* 8014339C 0014019C  4B ED 1C BD */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 801433A0 001401A0  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 801433A4 001401A4  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 801433A8 001401A8  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 801433AC 001401AC  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 801433B0 001401B0  38 63 00 20 */	addi r3, r3, 0x20
/* 801433B4 001401B4  7C 64 1B 78 */	mr r4, r3
/* 801433B8 001401B8  4B F0 AF 39 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 801433BC 001401BC  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 801433C0 001401C0  38 83 00 10 */	addi r4, r3, 0x10
/* 801433C4 001401C4  38 A3 00 20 */	addi r5, r3, 0x20
/* 801433C8 001401C8  4B ED 1C C5 */	bl xVec3Cross__FP5xVec3PC5xVec3PC5xVec3
/* 801433CC 001401CC  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 801433D0 001401D0  FC 20 F8 90 */	fmr f1, f31
/* 801433D4 001401D4  80 DF 00 48 */	lwz r6, 0x48(r31)
/* 801433D8 001401D8  7F 63 DB 78 */	mr r3, r27
/* 801433DC 001401DC  7F 84 E3 78 */	mr r4, r28
/* 801433E0 001401E0  7F A5 EB 78 */	mr r5, r29
/* 801433E4 001401E4  D0 06 00 34 */	stfs f0, 0x34(r6)
/* 801433E8 001401E8  7F C6 F3 78 */	mr r6, r30
/* 801433EC 001401EC  4B FC B7 5D */	bl Process__5xGoalFP11en_trantypefPvP6xScene
/* 801433F0 001401F0  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 801433F4 001401F4  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 801433F8 001401F8  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 801433FC 001401FC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80143400 00140200  7C 08 03 A6 */	mtlr r0
/* 80143404 00140204  38 21 00 40 */	addi r1, r1, 0x40
/* 80143408 00140208  4E 80 00 20 */	blr 

Enter__22zNPCGoalBossSandyChaseFfPv:
/* 8014340C 0014020C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80143410 00140210  7C 08 02 A6 */	mflr r0
/* 80143414 00140214  90 01 00 14 */	stw r0, 0x14(r1)
/* 80143418 00140218  80 A3 00 18 */	lwz r5, 0x18(r3)
/* 8014341C 0014021C  80 C5 00 00 */	lwz r6, 0(r5)
/* 80143420 00140220  80 06 02 C0 */	lwz r0, 0x2c0(r6)
/* 80143424 00140224  60 00 00 20 */	ori r0, r0, 0x20
/* 80143428 00140228  90 06 02 C0 */	stw r0, 0x2c0(r6)
/* 8014342C 0014022C  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80143430 00140230  D0 03 00 4C */	stfs f0, 0x4c(r3)
/* 80143434 00140234  80 A6 02 B8 */	lwz r5, 0x2b8(r6)
/* 80143438 00140238  80 05 00 28 */	lwz r0, 0x28(r5)
/* 8014343C 0014023C  60 00 00 10 */	ori r0, r0, 0x10
/* 80143440 00140240  90 05 00 28 */	stw r0, 0x28(r5)
/* 80143444 00140244  80 A6 02 B8 */	lwz r5, 0x2b8(r6)
/* 80143448 00140248  80 05 00 30 */	lwz r0, 0x30(r5)
/* 8014344C 0014024C  60 00 00 10 */	ori r0, r0, 0x10
/* 80143450 00140250  90 05 00 30 */	stw r0, 0x30(r5)
/* 80143454 00140254  4B F9 1C C1 */	bl Enter__14zNPCGoalCommonFfPv
/* 80143458 00140258  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014345C 0014025C  7C 08 03 A6 */	mtlr r0
/* 80143460 00140260  38 21 00 10 */	addi r1, r1, 0x10
/* 80143464 00140264  4E 80 00 20 */	blr 

Process__22zNPCGoalBossSandyChaseFP11en_trantypefPvP6xScene:
/* 80143468 00140268  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8014346C 0014026C  7C 08 02 A6 */	mflr r0
/* 80143470 00140270  90 01 00 44 */	stw r0, 0x44(r1)
/* 80143474 00140274  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80143478 00140278  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8014347C 0014027C  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 80143480 00140280  FF E0 08 90 */	fmr f31, f1
/* 80143484 00140284  7C 7B 1B 78 */	mr r27, r3
/* 80143488 00140288  C0 0D 96 84 */	lfs f0, sChaseTimer-_SDA_BASE_(r13)
/* 8014348C 0014028C  3C 60 80 3C */	lis r3, globals@ha
/* 80143490 00140290  81 1B 00 18 */	lwz r8, 0x18(r27)
/* 80143494 00140294  38 E3 05 58 */	addi r7, r3, globals@l
/* 80143498 00140298  EC 00 F8 2A */	fadds f0, f0, f31
/* 8014349C 0014029C  83 E8 00 00 */	lwz r31, 0(r8)
/* 801434A0 001402A0  7C 9C 23 78 */	mr r28, r4
/* 801434A4 001402A4  7C BD 2B 78 */	mr r29, r5
/* 801434A8 001402A8  7C DE 33 78 */	mr r30, r6
/* 801434AC 001402AC  38 61 00 08 */	addi r3, r1, 8
/* 801434B0 001402B0  D0 0D 96 84 */	stfs f0, sChaseTimer-_SDA_BASE_(r13)
/* 801434B4 001402B4  C0 1B 00 4C */	lfs f0, 0x4c(r27)
/* 801434B8 001402B8  EC 00 F8 2A */	fadds f0, f0, f31
/* 801434BC 001402BC  D0 1B 00 4C */	stfs f0, 0x4c(r27)
/* 801434C0 001402C0  80 A7 07 04 */	lwz r5, 0x704(r7)
/* 801434C4 001402C4  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 801434C8 001402C8  80 C5 00 4C */	lwz r6, 0x4c(r5)
/* 801434CC 001402CC  80 A4 00 4C */	lwz r5, 0x4c(r4)
/* 801434D0 001402D0  38 86 00 30 */	addi r4, r6, 0x30
/* 801434D4 001402D4  38 A5 00 30 */	addi r5, r5, 0x30
/* 801434D8 001402D8  4B EC B1 B9 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 801434DC 001402DC  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 801434E0 001402E0  38 61 00 08 */	addi r3, r1, 8
/* 801434E4 001402E4  7C 64 1B 78 */	mr r4, r3
/* 801434E8 001402E8  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 801434EC 001402EC  4B F0 AE 05 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 801434F0 001402F0  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 801434F4 001402F4  80 BF 00 48 */	lwz r5, 0x48(r31)
/* 801434F8 001402F8  80 83 00 4C */	lwz r4, 0x4c(r3)
/* 801434FC 001402FC  C0 22 A5 68 */	lfs f1, _1380-_SDA2_BASE_(r2)
/* 80143500 00140300  38 65 00 20 */	addi r3, r5, 0x20
/* 80143504 00140304  38 84 00 20 */	addi r4, r4, 0x20
/* 80143508 00140308  4B EC 7B 89 */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 8014350C 0014030C  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 80143510 00140310  38 81 00 08 */	addi r4, r1, 8
/* 80143514 00140314  C0 22 A5 48 */	lfs f1, _1192-_SDA2_BASE_(r2)
/* 80143518 00140318  38 63 00 20 */	addi r3, r3, 0x20
/* 8014351C 0014031C  4B ED 1B 3D */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 80143520 00140320  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80143524 00140324  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 80143528 00140328  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 8014352C 0014032C  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 80143530 00140330  38 63 00 20 */	addi r3, r3, 0x20
/* 80143534 00140334  7C 64 1B 78 */	mr r4, r3
/* 80143538 00140338  4B F0 AD B9 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 8014353C 0014033C  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 80143540 00140340  38 83 00 10 */	addi r4, r3, 0x10
/* 80143544 00140344  38 A3 00 20 */	addi r5, r3, 0x20
/* 80143548 00140348  4B ED 1B 45 */	bl xVec3Cross__FP5xVec3PC5xVec3PC5xVec3
/* 8014354C 0014034C  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80143550 00140350  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 80143554 00140354  D0 03 00 34 */	stfs f0, 0x34(r3)
/* 80143558 00140358  80 9F 00 48 */	lwz r4, 0x48(r31)
/* 8014355C 0014035C  80 BF 01 D8 */	lwz r5, 0x1d8(r31)
/* 80143560 00140360  38 64 00 D4 */	addi r3, r4, 0xd4
/* 80143564 00140364  38 84 00 20 */	addi r4, r4, 0x20
/* 80143568 00140368  C0 25 00 18 */	lfs f1, 0x18(r5)
/* 8014356C 0014036C  4B EC 7B 25 */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 80143570 00140370  FC 20 F8 90 */	fmr f1, f31
/* 80143574 00140374  7F 63 DB 78 */	mr r3, r27
/* 80143578 00140378  7F 84 E3 78 */	mr r4, r28
/* 8014357C 0014037C  7F A5 EB 78 */	mr r5, r29
/* 80143580 00140380  7F C6 F3 78 */	mr r6, r30
/* 80143584 00140384  4B FC B5 C5 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
/* 80143588 00140388  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8014358C 0014038C  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80143590 00140390  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 80143594 00140394  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80143598 00140398  7C 08 03 A6 */	mtlr r0
/* 8014359C 0014039C  38 21 00 40 */	addi r1, r1, 0x40
/* 801435A0 001403A0  4E 80 00 20 */	blr 

Exit__22zNPCGoalBossSandyChaseFfPv:
/* 801435A4 001403A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801435A8 001403A8  7C 08 02 A6 */	mflr r0
/* 801435AC 001403AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801435B0 001403B0  80 A3 00 18 */	lwz r5, 0x18(r3)
/* 801435B4 001403B4  80 C5 00 00 */	lwz r6, 0(r5)
/* 801435B8 001403B8  80 06 02 C0 */	lwz r0, 0x2c0(r6)
/* 801435BC 001403BC  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 801435C0 001403C0  90 06 02 C0 */	stw r0, 0x2c0(r6)
/* 801435C4 001403C4  80 A6 02 B8 */	lwz r5, 0x2b8(r6)
/* 801435C8 001403C8  80 05 00 28 */	lwz r0, 0x28(r5)
/* 801435CC 001403CC  54 00 07 34 */	rlwinm r0, r0, 0, 0x1c, 0x1a
/* 801435D0 001403D0  90 05 00 28 */	stw r0, 0x28(r5)
/* 801435D4 001403D4  80 A6 02 B8 */	lwz r5, 0x2b8(r6)
/* 801435D8 001403D8  80 05 00 30 */	lwz r0, 0x30(r5)
/* 801435DC 001403DC  54 00 07 34 */	rlwinm r0, r0, 0, 0x1c, 0x1a
/* 801435E0 001403E0  90 05 00 30 */	stw r0, 0x30(r5)
/* 801435E4 001403E4  4B F9 1E 39 */	bl Exit__5xGoalFfPv
/* 801435E8 001403E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801435EC 001403EC  7C 08 03 A6 */	mtlr r0
/* 801435F0 001403F0  38 21 00 10 */	addi r1, r1, 0x10
/* 801435F4 001403F4  4E 80 00 20 */	blr 

Enter__22zNPCGoalBossSandyMeleeFfPv:
/* 801435F8 001403F8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801435FC 001403FC  7C 08 02 A6 */	mflr r0
/* 80143600 00140400  90 01 00 34 */	stw r0, 0x34(r1)
/* 80143604 00140404  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80143608 00140408  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8014360C 0014040C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80143610 00140410  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80143614 00140414  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80143618 00140418  7C 7D 1B 78 */	mr r29, r3
/* 8014361C 0014041C  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80143620 00140420  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80143624 00140424  FF E0 08 90 */	fmr f31, f1
/* 80143628 00140428  7C 9E 23 78 */	mr r30, r4
/* 8014362C 0014042C  83 E3 00 00 */	lwz r31, 0(r3)
/* 80143630 00140430  D0 1D 00 4C */	stfs f0, 0x4c(r29)
/* 80143634 00140434  80 1F 02 C0 */	lwz r0, 0x2c0(r31)
/* 80143638 00140438  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 8014363C 0014043C  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 80143640 00140440  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 80143644 00140444  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 80143648 00140448  FC 40 08 90 */	fmr f2, f1
/* 8014364C 0014044C  FC 60 08 90 */	fmr f3, f1
/* 80143650 00140450  38 63 00 D4 */	addi r3, r3, 0xd4
/* 80143654 00140454  4B EC B9 A9 */	bl xVec3Init__FP5xVec3fff
/* 80143658 00140458  80 9F 02 B4 */	lwz r4, 0x2b4(r31)
/* 8014365C 0014045C  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 80143660 00140460  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 80143664 00140464  38 00 00 00 */	li r0, 0
/* 80143668 00140468  80 84 00 08 */	lwz r4, 8(r4)
/* 8014366C 0014046C  38 63 05 C8 */	addi r3, r3, 0x5c8
/* 80143670 00140470  98 04 00 23 */	stb r0, 0x23(r4)
/* 80143674 00140474  80 9F 02 B4 */	lwz r4, 0x2b4(r31)
/* 80143678 00140478  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8014367C 0014047C  98 04 00 23 */	stb r0, 0x23(r4)
/* 80143680 00140480  80 9F 02 B4 */	lwz r4, 0x2b4(r31)
/* 80143684 00140484  80 84 00 10 */	lwz r4, 0x10(r4)
/* 80143688 00140488  98 04 00 23 */	stb r0, 0x23(r4)
/* 8014368C 0014048C  80 9F 02 B4 */	lwz r4, 0x2b4(r31)
/* 80143690 00140490  80 84 00 14 */	lwz r4, 0x14(r4)
/* 80143694 00140494  98 04 00 23 */	stb r0, 0x23(r4)
/* 80143698 00140498  80 9F 02 B4 */	lwz r4, 0x2b4(r31)
/* 8014369C 0014049C  80 84 00 18 */	lwz r4, 0x18(r4)
/* 801436A0 001404A0  98 04 00 23 */	stb r0, 0x23(r4)
/* 801436A4 001404A4  80 9F 02 B4 */	lwz r4, 0x2b4(r31)
/* 801436A8 001404A8  80 84 00 1C */	lwz r4, 0x1c(r4)
/* 801436AC 001404AC  98 04 00 23 */	stb r0, 0x23(r4)
/* 801436B0 001404B0  80 9F 02 B4 */	lwz r4, 0x2b4(r31)
/* 801436B4 001404B4  80 84 00 20 */	lwz r4, 0x20(r4)
/* 801436B8 001404B8  98 04 00 23 */	stb r0, 0x23(r4)
/* 801436BC 001404BC  4B F0 8B 59 */	bl xStrHash__FPCc
/* 801436C0 001404C0  C0 22 A5 F4 */	lfs f1, _2265-_SDA2_BASE_(r2)
/* 801436C4 001404C4  7F E6 FB 78 */	mr r6, r31
/* 801436C8 001404C8  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 801436CC 001404CC  38 80 00 00 */	li r4, 0
/* 801436D0 001404D0  C0 62 A5 D8 */	lfs f3, _2154-_SDA2_BASE_(r2)
/* 801436D4 001404D4  38 A0 00 00 */	li r5, 0
/* 801436D8 001404D8  C0 82 A5 64 */	lfs f4, _1379-_SDA2_BASE_(r2)
/* 801436DC 001404DC  38 E0 00 00 */	li r7, 0
/* 801436E0 001404E0  4B F0 C4 ED */	bl xSndPlay3D__FUiffUiUiP4xEntf14sound_categoryf
/* 801436E4 001404E4  FC 20 F8 90 */	fmr f1, f31
/* 801436E8 001404E8  7F A3 EB 78 */	mr r3, r29
/* 801436EC 001404EC  7F C4 F3 78 */	mr r4, r30
/* 801436F0 001404F0  4B F9 1A 25 */	bl Enter__14zNPCGoalCommonFfPv
/* 801436F4 001404F4  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 801436F8 001404F8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801436FC 001404FC  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80143700 00140500  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80143704 00140504  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80143708 00140508  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8014370C 0014050C  7C 08 03 A6 */	mtlr r0
/* 80143710 00140510  38 21 00 30 */	addi r1, r1, 0x30
/* 80143714 00140514  4E 80 00 20 */	blr 

Exit__22zNPCGoalBossSandyMeleeFfPv:
/* 80143718 00140518  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014371C 0014051C  7C 08 02 A6 */	mflr r0
/* 80143720 00140520  90 01 00 14 */	stw r0, 0x14(r1)
/* 80143724 00140524  38 00 00 10 */	li r0, 0x10
/* 80143728 00140528  80 A3 00 18 */	lwz r5, 0x18(r3)
/* 8014372C 0014052C  80 C5 00 00 */	lwz r6, 0(r5)
/* 80143730 00140530  80 A6 02 B4 */	lwz r5, 0x2b4(r6)
/* 80143734 00140534  80 A5 00 08 */	lwz r5, 8(r5)
/* 80143738 00140538  98 05 00 23 */	stb r0, 0x23(r5)
/* 8014373C 0014053C  80 A6 02 B4 */	lwz r5, 0x2b4(r6)
/* 80143740 00140540  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 80143744 00140544  98 05 00 23 */	stb r0, 0x23(r5)
/* 80143748 00140548  80 A6 02 B4 */	lwz r5, 0x2b4(r6)
/* 8014374C 0014054C  80 A5 00 10 */	lwz r5, 0x10(r5)
/* 80143750 00140550  98 05 00 23 */	stb r0, 0x23(r5)
/* 80143754 00140554  80 A6 02 B4 */	lwz r5, 0x2b4(r6)
/* 80143758 00140558  80 A5 00 14 */	lwz r5, 0x14(r5)
/* 8014375C 0014055C  98 05 00 23 */	stb r0, 0x23(r5)
/* 80143760 00140560  80 A6 02 B4 */	lwz r5, 0x2b4(r6)
/* 80143764 00140564  80 A5 00 18 */	lwz r5, 0x18(r5)
/* 80143768 00140568  98 05 00 23 */	stb r0, 0x23(r5)
/* 8014376C 0014056C  80 A6 02 B4 */	lwz r5, 0x2b4(r6)
/* 80143770 00140570  80 A5 00 1C */	lwz r5, 0x1c(r5)
/* 80143774 00140574  98 05 00 23 */	stb r0, 0x23(r5)
/* 80143778 00140578  80 A6 02 B4 */	lwz r5, 0x2b4(r6)
/* 8014377C 0014057C  80 A5 00 20 */	lwz r5, 0x20(r5)
/* 80143780 00140580  98 05 00 23 */	stb r0, 0x23(r5)
/* 80143784 00140584  4B F9 1C 99 */	bl Exit__5xGoalFfPv
/* 80143788 00140588  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014378C 0014058C  7C 08 03 A6 */	mtlr r0
/* 80143790 00140590  38 21 00 10 */	addi r1, r1, 0x10
/* 80143794 00140594  4E 80 00 20 */	blr 

Process__22zNPCGoalBossSandyMeleeFP11en_trantypefPvP6xScene:
/* 80143798 00140598  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8014379C 0014059C  7C 08 02 A6 */	mflr r0
/* 801437A0 001405A0  90 01 00 44 */	stw r0, 0x44(r1)
/* 801437A4 001405A4  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 801437A8 001405A8  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 801437AC 001405AC  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 801437B0 001405B0  7C 7B 1B 78 */	mr r27, r3
/* 801437B4 001405B4  FF E0 08 90 */	fmr f31, f1
/* 801437B8 001405B8  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 801437BC 001405BC  7C 9C 23 78 */	mr r28, r4
/* 801437C0 001405C0  80 63 00 18 */	lwz r3, 0x18(r3)
/* 801437C4 001405C4  7C BD 2B 78 */	mr r29, r5
/* 801437C8 001405C8  EC 00 F8 2A */	fadds f0, f0, f31
/* 801437CC 001405CC  83 E3 00 00 */	lwz r31, 0(r3)
/* 801437D0 001405D0  7C DE 33 78 */	mr r30, r6
/* 801437D4 001405D4  D0 1B 00 4C */	stfs f0, 0x4c(r27)
/* 801437D8 001405D8  C0 3B 00 4C */	lfs f1, 0x4c(r27)
/* 801437DC 001405DC  C0 02 A5 48 */	lfs f0, _1192-_SDA2_BASE_(r2)
/* 801437E0 001405E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801437E4 001405E4  40 81 00 A8 */	ble lbl_8014388C
/* 801437E8 001405E8  C0 02 A5 80 */	lfs f0, _1466-_SDA2_BASE_(r2)
/* 801437EC 001405EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801437F0 001405F0  40 80 00 9C */	bge lbl_8014388C
/* 801437F4 001405F4  3C 60 80 3C */	lis r3, globals@ha
/* 801437F8 001405F8  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 801437FC 001405FC  38 A3 05 58 */	addi r5, r3, globals@l
/* 80143800 00140600  38 61 00 08 */	addi r3, r1, 8
/* 80143804 00140604  80 A5 07 04 */	lwz r5, 0x704(r5)
/* 80143808 00140608  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8014380C 0014060C  80 C5 00 4C */	lwz r6, 0x4c(r5)
/* 80143810 00140610  38 A4 00 30 */	addi r5, r4, 0x30
/* 80143814 00140614  38 86 00 30 */	addi r4, r6, 0x30
/* 80143818 00140618  4B EC AE 79 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 8014381C 0014061C  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80143820 00140620  38 61 00 08 */	addi r3, r1, 8
/* 80143824 00140624  7C 64 1B 78 */	mr r4, r3
/* 80143828 00140628  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8014382C 0014062C  4B F0 AA C5 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 80143830 00140630  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 80143834 00140634  80 BF 00 48 */	lwz r5, 0x48(r31)
/* 80143838 00140638  80 83 00 4C */	lwz r4, 0x4c(r3)
/* 8014383C 0014063C  C0 22 A5 68 */	lfs f1, _1380-_SDA2_BASE_(r2)
/* 80143840 00140640  38 65 00 20 */	addi r3, r5, 0x20
/* 80143844 00140644  38 84 00 20 */	addi r4, r4, 0x20
/* 80143848 00140648  4B EC 78 49 */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 8014384C 0014064C  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 80143850 00140650  38 81 00 08 */	addi r4, r1, 8
/* 80143854 00140654  C0 22 A5 48 */	lfs f1, _1192-_SDA2_BASE_(r2)
/* 80143858 00140658  38 63 00 20 */	addi r3, r3, 0x20
/* 8014385C 0014065C  4B ED 17 FD */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 80143860 00140660  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80143864 00140664  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 80143868 00140668  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 8014386C 0014066C  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 80143870 00140670  38 63 00 20 */	addi r3, r3, 0x20
/* 80143874 00140674  7C 64 1B 78 */	mr r4, r3
/* 80143878 00140678  4B F0 AA 79 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 8014387C 0014067C  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 80143880 00140680  38 83 00 10 */	addi r4, r3, 0x10
/* 80143884 00140684  38 A3 00 20 */	addi r5, r3, 0x20
/* 80143888 00140688  4B ED 18 05 */	bl xVec3Cross__FP5xVec3PC5xVec3PC5xVec3
lbl_8014388C:
/* 8014388C 0014068C  80 FF 02 B8 */	lwz r7, 0x2b8(r31)
/* 80143890 00140690  FC 20 F8 90 */	fmr f1, f31
/* 80143894 00140694  7F 63 DB 78 */	mr r3, r27
/* 80143898 00140698  7F 84 E3 78 */	mr r4, r28
/* 8014389C 0014069C  80 07 00 08 */	lwz r0, 8(r7)
/* 801438A0 001406A0  7F A5 EB 78 */	mr r5, r29
/* 801438A4 001406A4  7F C6 F3 78 */	mr r6, r30
/* 801438A8 001406A8  60 00 00 01 */	ori r0, r0, 1
/* 801438AC 001406AC  90 07 00 08 */	stw r0, 8(r7)
/* 801438B0 001406B0  80 FF 02 B8 */	lwz r7, 0x2b8(r31)
/* 801438B4 001406B4  80 07 00 0C */	lwz r0, 0xc(r7)
/* 801438B8 001406B8  60 00 00 01 */	ori r0, r0, 1
/* 801438BC 001406BC  90 07 00 0C */	stw r0, 0xc(r7)
/* 801438C0 001406C0  80 FF 02 B8 */	lwz r7, 0x2b8(r31)
/* 801438C4 001406C4  80 07 00 10 */	lwz r0, 0x10(r7)
/* 801438C8 001406C8  60 00 00 01 */	ori r0, r0, 1
/* 801438CC 001406CC  90 07 00 10 */	stw r0, 0x10(r7)
/* 801438D0 001406D0  80 FF 02 B8 */	lwz r7, 0x2b8(r31)
/* 801438D4 001406D4  80 07 00 14 */	lwz r0, 0x14(r7)
/* 801438D8 001406D8  60 00 00 01 */	ori r0, r0, 1
/* 801438DC 001406DC  90 07 00 14 */	stw r0, 0x14(r7)
/* 801438E0 001406E0  80 FF 02 B8 */	lwz r7, 0x2b8(r31)
/* 801438E4 001406E4  80 07 00 18 */	lwz r0, 0x18(r7)
/* 801438E8 001406E8  60 00 00 01 */	ori r0, r0, 1
/* 801438EC 001406EC  90 07 00 18 */	stw r0, 0x18(r7)
/* 801438F0 001406F0  80 FF 02 B8 */	lwz r7, 0x2b8(r31)
/* 801438F4 001406F4  80 07 00 1C */	lwz r0, 0x1c(r7)
/* 801438F8 001406F8  60 00 00 01 */	ori r0, r0, 1
/* 801438FC 001406FC  90 07 00 1C */	stw r0, 0x1c(r7)
/* 80143900 00140700  80 FF 02 B8 */	lwz r7, 0x2b8(r31)
/* 80143904 00140704  80 07 00 20 */	lwz r0, 0x20(r7)
/* 80143908 00140708  60 00 00 01 */	ori r0, r0, 1
/* 8014390C 0014070C  90 07 00 20 */	stw r0, 0x20(r7)
/* 80143910 00140710  80 1F 02 C0 */	lwz r0, 0x2c0(r31)
/* 80143914 00140714  60 00 00 01 */	ori r0, r0, 1
/* 80143918 00140718  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 8014391C 0014071C  4B FC B2 2D */	bl Process__5xGoalFP11en_trantypefPvP6xScene
/* 80143920 00140720  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 80143924 00140724  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80143928 00140728  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 8014392C 0014072C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80143930 00140730  7C 08 03 A6 */	mtlr r0
/* 80143934 00140734  38 21 00 40 */	addi r1, r1, 0x40
/* 80143938 00140738  4E 80 00 20 */	blr 

Enter__23zNPCGoalBossSandyNoHeadFfPv:
/* 8014393C 0014073C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80143940 00140740  7C 08 02 A6 */	mflr r0
/* 80143944 00140744  90 01 00 34 */	stw r0, 0x34(r1)
/* 80143948 00140748  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8014394C 0014074C  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 80143950 00140750  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80143954 00140754  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80143958 00140758  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8014395C 0014075C  7C 7D 1B 78 */	mr r29, r3
/* 80143960 00140760  FF E0 08 90 */	fmr f31, f1
/* 80143964 00140764  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80143968 00140768  7C 9E 23 78 */	mr r30, r4
/* 8014396C 0014076C  83 E3 00 00 */	lwz r31, 0(r3)
/* 80143970 00140770  80 1F 02 C0 */	lwz r0, 0x2c0(r31)
/* 80143974 00140774  54 00 06 2C */	rlwinm r0, r0, 0, 0x18, 0x16
/* 80143978 00140778  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 8014397C 0014077C  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80143980 00140780  D0 1D 00 4C */	stfs f0, 0x4c(r29)
/* 80143984 00140784  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 80143988 00140788  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 8014398C 0014078C  FC 40 08 90 */	fmr f2, f1
/* 80143990 00140790  FC 60 08 90 */	fmr f3, f1
/* 80143994 00140794  38 63 00 D4 */	addi r3, r3, 0xd4
/* 80143998 00140798  4B EC B6 65 */	bl xVec3Init__FP5xVec3fff
/* 8014399C 0014079C  80 1F 02 D8 */	lwz r0, 0x2d8(r31)
/* 801439A0 001407A0  2C 00 00 02 */	cmpwi r0, 2
/* 801439A4 001407A4  40 82 00 1C */	bne lbl_801439C0
/* 801439A8 001407A8  80 7F 07 C4 */	lwz r3, 0x7c4(r31)
/* 801439AC 001407AC  38 80 00 26 */	li r4, 0x26
/* 801439B0 001407B0  38 00 00 00 */	li r0, 0
/* 801439B4 001407B4  98 83 01 E4 */	stb r4, 0x1e4(r3)
/* 801439B8 001407B8  80 7F 07 C4 */	lwz r3, 0x7c4(r31)
/* 801439BC 001407BC  98 03 01 E5 */	stb r0, 0x1e5(r3)
lbl_801439C0:
/* 801439C0 001407C0  38 00 00 00 */	li r0, 0
/* 801439C4 001407C4  FC 20 F8 90 */	fmr f1, f31
/* 801439C8 001407C8  90 1D 00 50 */	stw r0, 0x50(r29)
/* 801439CC 001407CC  7F A3 EB 78 */	mr r3, r29
/* 801439D0 001407D0  7F C4 F3 78 */	mr r4, r30
/* 801439D4 001407D4  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 801439D8 001407D8  D0 1D 00 54 */	stfs f0, 0x54(r29)
/* 801439DC 001407DC  4B F9 17 39 */	bl Enter__14zNPCGoalCommonFfPv
/* 801439E0 001407E0  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 801439E4 001407E4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801439E8 001407E8  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 801439EC 001407EC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801439F0 001407F0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801439F4 001407F4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801439F8 001407F8  7C 08 03 A6 */	mtlr r0
/* 801439FC 001407FC  38 21 00 30 */	addi r1, r1, 0x30
/* 80143A00 00140800  4E 80 00 20 */	blr 

Process__23zNPCGoalBossSandyNoHeadFP11en_trantypefPvP6xScene:
/* 80143A04 00140804  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 80143A08 00140808  7C 08 02 A6 */	mflr r0
/* 80143A0C 0014080C  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 80143A10 00140810  DB E1 00 A0 */	stfd f31, 0xa0(r1)
/* 80143A14 00140814  F3 E1 00 A8 */	psq_st f31, 168(r1), 0, qr0
/* 80143A18 00140818  DB C1 00 90 */	stfd f30, 0x90(r1)
/* 80143A1C 0014081C  F3 C1 00 98 */	psq_st f30, 152(r1), 0, qr0
/* 80143A20 00140820  BF 21 00 74 */	stmw r25, 0x74(r1)
/* 80143A24 00140824  7C 7A 1B 78 */	mr r26, r3
/* 80143A28 00140828  FF E0 08 90 */	fmr f31, f1
/* 80143A2C 0014082C  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 80143A30 00140830  3C 60 80 3C */	lis r3, globals@ha
/* 80143A34 00140834  80 FA 00 18 */	lwz r7, 0x18(r26)
/* 80143A38 00140838  3B E3 05 58 */	addi r31, r3, globals@l
/* 80143A3C 0014083C  EC 00 F8 2A */	fadds f0, f0, f31
/* 80143A40 00140840  83 C7 00 00 */	lwz r30, 0(r7)
/* 80143A44 00140844  7C 9B 23 78 */	mr r27, r4
/* 80143A48 00140848  7C BC 2B 78 */	mr r28, r5
/* 80143A4C 0014084C  7C DD 33 78 */	mr r29, r6
/* 80143A50 00140850  D0 1A 00 4C */	stfs f0, 0x4c(r26)
/* 80143A54 00140854  80 7F 17 B0 */	lwz r3, 0x17b0(r31)
/* 80143A58 00140858  80 1E 07 C4 */	lwz r0, 0x7c4(r30)
/* 80143A5C 0014085C  7C 03 00 40 */	cmplw r3, r0
/* 80143A60 00140860  40 82 00 10 */	bne lbl_80143A70
/* 80143A64 00140864  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80143A68 00140868  D0 1A 00 54 */	stfs f0, 0x54(r26)
/* 80143A6C 0014086C  48 00 00 10 */	b lbl_80143A7C
lbl_80143A70:
/* 80143A70 00140870  C0 1A 00 54 */	lfs f0, 0x54(r26)
/* 80143A74 00140874  EC 00 F8 2A */	fadds f0, f0, f31
/* 80143A78 00140878  D0 1A 00 54 */	stfs f0, 0x54(r26)
lbl_80143A7C:
/* 80143A7C 0014087C  80 1A 00 50 */	lwz r0, 0x50(r26)
/* 80143A80 00140880  28 00 00 00 */	cmplwi r0, 0
/* 80143A84 00140884  40 82 01 7C */	bne lbl_80143C00
/* 80143A88 00140888  7F C3 F3 78 */	mr r3, r30
/* 80143A8C 0014088C  38 80 00 00 */	li r4, 0
/* 80143A90 00140890  4B FA F5 E9 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 80143A94 00140894  C0 02 A5 F0 */	lfs f0, _2264-_SDA2_BASE_(r2)
/* 80143A98 00140898  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80143A9C 0014089C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80143AA0 001408A0  40 80 01 28 */	bge lbl_80143BC8
/* 80143AA4 001408A4  38 00 00 01 */	li r0, 1
/* 80143AA8 001408A8  7F 43 D3 78 */	mr r3, r26
/* 80143AAC 001408AC  90 1A 00 50 */	stw r0, 0x50(r26)
/* 80143AB0 001408B0  38 80 00 20 */	li r4, 0x20
/* 80143AB4 001408B4  38 A0 00 00 */	li r5, 0
/* 80143AB8 001408B8  4B F9 18 61 */	bl DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi
/* 80143ABC 001408BC  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80143AC0 001408C0  D0 1A 00 4C */	stfs f0, 0x4c(r26)
/* 80143AC4 001408C4  80 1E 02 D8 */	lwz r0, 0x2d8(r30)
/* 80143AC8 001408C8  2C 00 00 03 */	cmpwi r0, 3
/* 80143ACC 001408CC  40 82 00 24 */	bne lbl_80143AF0
/* 80143AD0 001408D0  80 7E 02 B8 */	lwz r3, 0x2b8(r30)
/* 80143AD4 001408D4  80 03 00 28 */	lwz r0, 0x28(r3)
/* 80143AD8 001408D8  60 00 00 10 */	ori r0, r0, 0x10
/* 80143ADC 001408DC  90 03 00 28 */	stw r0, 0x28(r3)
/* 80143AE0 001408E0  80 7E 02 B8 */	lwz r3, 0x2b8(r30)
/* 80143AE4 001408E4  80 03 00 30 */	lwz r0, 0x30(r3)
/* 80143AE8 001408E8  60 00 00 10 */	ori r0, r0, 0x10
/* 80143AEC 001408EC  90 03 00 30 */	stw r0, 0x30(r3)
lbl_80143AF0:
/* 80143AF0 001408F0  80 7E 0D 38 */	lwz r3, 0xd38(r30)
/* 80143AF4 001408F4  54 60 07 7B */	rlwinm. r0, r3, 0, 0x1d, 0x1d
/* 80143AF8 001408F8  40 82 00 D0 */	bne lbl_80143BC8
/* 80143AFC 001408FC  80 1E 02 D8 */	lwz r0, 0x2d8(r30)
/* 80143B00 00140900  2C 00 00 02 */	cmpwi r0, 2
/* 80143B04 00140904  41 82 00 0C */	beq lbl_80143B10
/* 80143B08 00140908  2C 00 00 03 */	cmpwi r0, 3
/* 80143B0C 0014090C  40 82 00 BC */	bne lbl_80143BC8
lbl_80143B10:
/* 80143B10 00140910  54 79 EF BE */	rlwinm r25, r3, 0x1d, 0x1e, 0x1f
/* 80143B14 00140914  28 19 00 03 */	cmplwi r25, 3
/* 80143B18 00140918  41 80 00 10 */	blt lbl_80143B28
/* 80143B1C 0014091C  4B EE D1 4D */	bl xrand__Fv
/* 80143B20 00140920  54 60 05 AF */	rlwinm. r0, r3, 0, 0x16, 0x17
/* 80143B24 00140924  40 82 00 A4 */	bne lbl_80143BC8
lbl_80143B28:
/* 80143B28 00140928  28 19 00 03 */	cmplwi r25, 3
/* 80143B2C 0014092C  3B E0 00 02 */	li r31, 2
/* 80143B30 00140930  40 80 00 08 */	bge lbl_80143B38
/* 80143B34 00140934  7F 3F CB 78 */	mr r31, r25
lbl_80143B38:
/* 80143B38 00140938  80 1E 02 D8 */	lwz r0, 0x2d8(r30)
/* 80143B3C 0014093C  2C 00 00 02 */	cmpwi r0, 2
/* 80143B40 00140940  40 82 00 38 */	bne lbl_80143B78
/* 80143B44 00140944  80 7E 0D 34 */	lwz r3, 0xd34(r30)
/* 80143B48 00140948  3C 80 80 33 */	lis r4, sNFSoundValue@ha
/* 80143B4C 0014094C  38 84 80 9C */	addi r4, r4, sNFSoundValue@l
/* 80143B50 00140950  57 E0 10 3A */	slwi r0, r31, 2
/* 80143B54 00140954  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80143B58 00140958  7C 84 02 14 */	add r4, r4, r0
/* 80143B5C 0014095C  80 84 00 30 */	lwz r4, 0x30(r4)
/* 80143B60 00140960  38 A0 00 00 */	li r5, 0
/* 80143B64 00140964  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80143B68 00140968  38 C0 FF FF */	li r6, -1
/* 80143B6C 0014096C  7D 89 03 A6 */	mtctr r12
/* 80143B70 00140970  4E 80 04 21 */	bctrl 
/* 80143B74 00140974  48 00 00 34 */	b lbl_80143BA8
lbl_80143B78:
/* 80143B78 00140978  80 7E 0D 34 */	lwz r3, 0xd34(r30)
/* 80143B7C 0014097C  3C 80 80 33 */	lis r4, sNFSoundValue@ha
/* 80143B80 00140980  38 84 80 9C */	addi r4, r4, sNFSoundValue@l
/* 80143B84 00140984  57 E0 10 3A */	slwi r0, r31, 2
/* 80143B88 00140988  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80143B8C 0014098C  7C 84 02 14 */	add r4, r4, r0
/* 80143B90 00140990  80 84 00 54 */	lwz r4, 0x54(r4)
/* 80143B94 00140994  38 A0 00 00 */	li r5, 0
/* 80143B98 00140998  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80143B9C 0014099C  38 C0 FF FF */	li r6, -1
/* 80143BA0 001409A0  7D 89 03 A6 */	mtctr r12
/* 80143BA4 001409A4  4E 80 04 21 */	bctrl 
lbl_80143BA8:
/* 80143BA8 001409A8  80 7E 0D 38 */	lwz r3, 0xd38(r30)
/* 80143BAC 001409AC  38 1F 00 01 */	addi r0, r31, 1
/* 80143BB0 001409B0  54 00 18 38 */	slwi r0, r0, 3
/* 80143BB4 001409B4  54 63 07 74 */	rlwinm r3, r3, 0, 0x1d, 0x1a
/* 80143BB8 001409B8  90 7E 0D 38 */	stw r3, 0xd38(r30)
/* 80143BBC 001409BC  80 7E 0D 38 */	lwz r3, 0xd38(r30)
/* 80143BC0 001409C0  7C 60 03 78 */	or r0, r3, r0
/* 80143BC4 001409C4  90 1E 0D 38 */	stw r0, 0xd38(r30)
lbl_80143BC8:
/* 80143BC8 001409C8  80 1E 02 D8 */	lwz r0, 0x2d8(r30)
/* 80143BCC 001409CC  2C 00 00 02 */	cmpwi r0, 2
/* 80143BD0 001409D0  40 82 07 6C */	bne lbl_8014433C
/* 80143BD4 001409D4  C0 3A 00 54 */	lfs f1, 0x54(r26)
/* 80143BD8 001409D8  C0 02 A4 E8 */	lfs f0, _1032-_SDA2_BASE_(r2)
/* 80143BDC 001409DC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80143BE0 001409E0  40 80 00 10 */	bge lbl_80143BF0
/* 80143BE4 001409E4  38 1E 03 6C */	addi r0, r30, 0x36c
/* 80143BE8 001409E8  90 0D 96 98 */	stw r0, sCamSubTarget-_SDA_BASE_(r13)
/* 80143BEC 001409EC  48 00 07 50 */	b lbl_8014433C
lbl_80143BF0:
/* 80143BF0 001409F0  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 80143BF4 001409F4  38 03 00 88 */	addi r0, r3, 0x88
/* 80143BF8 001409F8  90 0D 96 98 */	stw r0, sCamSubTarget-_SDA_BASE_(r13)
/* 80143BFC 001409FC  48 00 07 40 */	b lbl_8014433C
lbl_80143C00:
/* 80143C00 00140A00  28 00 00 01 */	cmplwi r0, 1
/* 80143C04 00140A04  40 82 04 A0 */	bne lbl_801440A4
/* 80143C08 00140A08  80 1E 02 D8 */	lwz r0, 0x2d8(r30)
/* 80143C0C 00140A0C  2C 00 00 02 */	cmpwi r0, 2
/* 80143C10 00140A10  40 82 02 C8 */	bne lbl_80143ED8
/* 80143C14 00140A14  80 1E 02 C0 */	lwz r0, 0x2c0(r30)
/* 80143C18 00140A18  54 00 05 EF */	rlwinm. r0, r0, 0, 0x17, 0x17
/* 80143C1C 00140A1C  41 82 01 38 */	beq lbl_80143D54
/* 80143C20 00140A20  80 9E 07 C4 */	lwz r4, 0x7c4(r30)
/* 80143C24 00140A24  38 00 00 00 */	li r0, 0
/* 80143C28 00140A28  38 7E 06 38 */	addi r3, r30, 0x638
/* 80143C2C 00140A2C  98 04 01 E4 */	stb r0, 0x1e4(r4)
/* 80143C30 00140A30  80 9E 07 C4 */	lwz r4, 0x7c4(r30)
/* 80143C34 00140A34  98 04 01 E5 */	stb r0, 0x1e5(r4)
/* 80143C38 00140A38  80 9E 07 C4 */	lwz r4, 0x7c4(r30)
/* 80143C3C 00140A3C  80 84 00 24 */	lwz r4, 0x24(r4)
/* 80143C40 00140A40  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80143C44 00140A44  38 84 00 30 */	addi r4, r4, 0x30
/* 80143C48 00140A48  4B F0 A8 95 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 80143C4C 00140A4C  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80143C50 00140A50  38 00 00 02 */	li r0, 2
/* 80143C54 00140A54  80 DE 07 C4 */	lwz r6, 0x7c4(r30)
/* 80143C58 00140A58  7F 43 D3 78 */	mr r3, r26
/* 80143C5C 00140A5C  38 80 00 20 */	li r4, 0x20
/* 80143C60 00140A60  38 A0 00 00 */	li r5, 0
/* 80143C64 00140A64  D0 06 01 D0 */	stfs f0, 0x1d0(r6)
/* 80143C68 00140A68  90 1A 00 50 */	stw r0, 0x50(r26)
/* 80143C6C 00140A6C  4B F9 16 AD */	bl DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi
/* 80143C70 00140A70  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80143C74 00140A74  3C 60 80 33 */	lis r3, sNFSoundValue@ha
/* 80143C78 00140A78  38 83 80 9C */	addi r4, r3, sNFSoundValue@l
/* 80143C7C 00140A7C  38 A0 00 00 */	li r5, 0
/* 80143C80 00140A80  D0 1A 00 4C */	stfs f0, 0x4c(r26)
/* 80143C84 00140A84  38 C0 FF FF */	li r6, -1
/* 80143C88 00140A88  80 7E 0D 34 */	lwz r3, 0xd34(r30)
/* 80143C8C 00140A8C  80 1E 02 D4 */	lwz r0, 0x2d4(r30)
/* 80143C90 00140A90  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80143C94 00140A94  20 00 00 06 */	subfic r0, r0, 6
/* 80143C98 00140A98  54 00 10 3A */	slwi r0, r0, 2
/* 80143C9C 00140A9C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80143CA0 00140AA0  7C 84 02 14 */	add r4, r4, r0
/* 80143CA4 00140AA4  80 84 00 3C */	lwz r4, 0x3c(r4)
/* 80143CA8 00140AA8  7D 89 03 A6 */	mtctr r12
/* 80143CAC 00140AAC  4E 80 04 21 */	bctrl 
/* 80143CB0 00140AB0  80 1E 0D 38 */	lwz r0, 0xd38(r30)
/* 80143CB4 00140AB4  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 80143CB8 00140AB8  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 80143CBC 00140ABC  60 00 00 04 */	ori r0, r0, 4
/* 80143CC0 00140AC0  90 1E 0D 38 */	stw r0, 0xd38(r30)
/* 80143CC4 00140AC4  38 63 05 F4 */	addi r3, r3, 0x5f4
/* 80143CC8 00140AC8  80 9E 02 D4 */	lwz r4, 0x2d4(r30)
/* 80143CCC 00140ACC  38 04 FF FF */	addi r0, r4, -1
/* 80143CD0 00140AD0  90 1E 02 D4 */	stw r0, 0x2d4(r30)
/* 80143CD4 00140AD4  4B F0 85 41 */	bl xStrHash__FPCc
/* 80143CD8 00140AD8  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 80143CDC 00140ADC  7F C6 F3 78 */	mr r6, r30
/* 80143CE0 00140AE0  C0 22 A6 00 */	lfs f1, _2517-_SDA2_BASE_(r2)
/* 80143CE4 00140AE4  38 80 00 00 */	li r4, 0
/* 80143CE8 00140AE8  FC 80 10 90 */	fmr f4, f2
/* 80143CEC 00140AEC  C0 62 A6 04 */	lfs f3, _2518-_SDA2_BASE_(r2)
/* 80143CF0 00140AF0  38 A0 00 00 */	li r5, 0
/* 80143CF4 00140AF4  38 E0 00 00 */	li r7, 0
/* 80143CF8 00140AF8  4B F0 BE D5 */	bl xSndPlay3D__FUiffUiUiP4xEntf14sound_categoryf
/* 80143CFC 00140AFC  7F C3 F3 78 */	mr r3, r30
/* 80143D00 00140B00  7F C4 F3 78 */	mr r4, r30
/* 80143D04 00140B04  38 A0 01 D7 */	li r5, 0x1d7
/* 80143D08 00140B08  4B ED B9 D9 */	bl zEntEvent__FP5xBaseP5xBaseUi
/* 80143D0C 00140B0C  C0 02 A5 48 */	lfs f0, _1192-_SDA2_BASE_(r2)
/* 80143D10 00140B10  38 80 00 00 */	li r4, 0
/* 80143D14 00140B14  D0 1E 0A EC */	stfs f0, 0xaec(r30)
/* 80143D18 00140B18  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 80143D1C 00140B1C  4B FF B9 BD */	bl zNPCBSandy_BossDamageEffect__FP14xModelInstanceUi
/* 80143D20 00140B20  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 80143D24 00140B24  38 80 00 00 */	li r4, 0
/* 80143D28 00140B28  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80143D2C 00140B2C  4B FF B9 AD */	bl zNPCBSandy_BossDamageEffect__FP14xModelInstanceUi
/* 80143D30 00140B30  80 7E 07 D0 */	lwz r3, 0x7d0(r30)
/* 80143D34 00140B34  38 A0 00 00 */	li r5, 0
/* 80143D38 00140B38  80 9E 07 C0 */	lwz r4, 0x7c0(r30)
/* 80143D3C 00140B3C  38 C0 00 00 */	li r6, 0
/* 80143D40 00140B40  81 83 00 08 */	lwz r12, 8(r3)
/* 80143D44 00140B44  80 84 00 24 */	lwz r4, 0x24(r4)
/* 80143D48 00140B48  7D 89 03 A6 */	mtctr r12
/* 80143D4C 00140B4C  4E 80 04 21 */	bctrl 
/* 80143D50 00140B50  48 00 05 EC */	b lbl_8014433C
lbl_80143D54:
/* 80143D54 00140B54  C0 3A 00 4C */	lfs f1, 0x4c(r26)
/* 80143D58 00140B58  C0 02 A5 AC */	lfs f0, _1531-_SDA2_BASE_(r2)
/* 80143D5C 00140B5C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80143D60 00140B60  40 81 00 20 */	ble lbl_80143D80
/* 80143D64 00140B64  7F C3 F3 78 */	mr r3, r30
/* 80143D68 00140B68  38 80 00 00 */	li r4, 0
/* 80143D6C 00140B6C  4B FA F3 0D */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 80143D70 00140B70  C0 02 A5 F0 */	lfs f0, _2264-_SDA2_BASE_(r2)
/* 80143D74 00140B74  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80143D78 00140B78  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80143D7C 00140B7C  41 80 00 18 */	blt lbl_80143D94
lbl_80143D80:
/* 80143D80 00140B80  3C 60 80 3C */	lis r3, globals@ha
/* 80143D84 00140B84  38 63 05 58 */	addi r3, r3, globals@l
/* 80143D88 00140B88  80 03 17 FC */	lwz r0, 0x17fc(r3)
/* 80143D8C 00140B8C  7C 00 F0 40 */	cmplw r0, r30
/* 80143D90 00140B90  40 82 00 84 */	bne lbl_80143E14
lbl_80143D94:
/* 80143D94 00140B94  38 00 00 03 */	li r0, 3
/* 80143D98 00140B98  7F C3 F3 78 */	mr r3, r30
/* 80143D9C 00140B9C  90 1A 00 50 */	stw r0, 0x50(r26)
/* 80143DA0 00140BA0  4B FF BF 09 */	bl CalcMagnetizeInfo__10zNPCBSandyFv
/* 80143DA4 00140BA4  38 00 00 01 */	li r0, 1
/* 80143DA8 00140BA8  7F 43 D3 78 */	mr r3, r26
/* 80143DAC 00140BAC  98 0D 84 80 */	stb r0, sUseBossCam-_SDA_BASE_(r13)
/* 80143DB0 00140BB0  38 80 00 20 */	li r4, 0x20
/* 80143DB4 00140BB4  38 A0 00 00 */	li r5, 0
/* 80143DB8 00140BB8  80 DE 00 24 */	lwz r6, 0x24(r30)
/* 80143DBC 00140BBC  80 C6 00 4C */	lwz r6, 0x4c(r6)
/* 80143DC0 00140BC0  38 06 00 30 */	addi r0, r6, 0x30
/* 80143DC4 00140BC4  90 0D 96 98 */	stw r0, sCamSubTarget-_SDA_BASE_(r13)
/* 80143DC8 00140BC8  4B F9 15 51 */	bl DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi
/* 80143DCC 00140BCC  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80143DD0 00140BD0  D0 1A 00 4C */	stfs f0, 0x4c(r26)
/* 80143DD4 00140BD4  80 7F 17 B0 */	lwz r3, 0x17b0(r31)
/* 80143DD8 00140BD8  80 1E 07 C4 */	lwz r0, 0x7c4(r30)
/* 80143DDC 00140BDC  7C 03 00 40 */	cmplw r3, r0
/* 80143DE0 00140BE0  40 82 00 0C */	bne lbl_80143DEC
/* 80143DE4 00140BE4  38 00 00 00 */	li r0, 0
/* 80143DE8 00140BE8  90 1F 17 B0 */	stw r0, 0x17b0(r31)
lbl_80143DEC:
/* 80143DEC 00140BEC  3C 60 80 3C */	lis r3, globals@ha
/* 80143DF0 00140BF0  3B E3 05 58 */	addi r31, r3, globals@l
/* 80143DF4 00140BF4  80 1F 17 FC */	lwz r0, 0x17fc(r31)
/* 80143DF8 00140BF8  7C 00 F0 40 */	cmplw r0, r30
/* 80143DFC 00140BFC  40 82 05 40 */	bne lbl_8014433C
/* 80143E00 00140C00  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 80143E04 00140C04  4B F7 49 31 */	bl zThrown_Remove__FP4xEnt
/* 80143E08 00140C08  38 00 00 00 */	li r0, 0
/* 80143E0C 00140C0C  90 1F 17 FC */	stw r0, 0x17fc(r31)
/* 80143E10 00140C10  48 00 05 2C */	b lbl_8014433C
lbl_80143E14:
/* 80143E14 00140C14  80 9E 00 24 */	lwz r4, 0x24(r30)
/* 80143E18 00140C18  38 61 00 18 */	addi r3, r1, 0x18
/* 80143E1C 00140C1C  80 DE 07 C4 */	lwz r6, 0x7c4(r30)
/* 80143E20 00140C20  80 A4 00 4C */	lwz r5, 0x4c(r4)
/* 80143E24 00140C24  38 86 00 88 */	addi r4, r6, 0x88
/* 80143E28 00140C28  38 A5 00 30 */	addi r5, r5, 0x30
/* 80143E2C 00140C2C  4B EC A8 65 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 80143E30 00140C30  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80143E34 00140C34  38 61 00 18 */	addi r3, r1, 0x18
/* 80143E38 00140C38  7C 64 1B 78 */	mr r4, r3
/* 80143E3C 00140C3C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80143E40 00140C40  4B F0 A4 B1 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 80143E44 00140C44  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 80143E48 00140C48  80 BE 00 48 */	lwz r5, 0x48(r30)
/* 80143E4C 00140C4C  80 83 00 4C */	lwz r4, 0x4c(r3)
/* 80143E50 00140C50  C0 22 A5 68 */	lfs f1, _1380-_SDA2_BASE_(r2)
/* 80143E54 00140C54  38 65 00 20 */	addi r3, r5, 0x20
/* 80143E58 00140C58  38 84 00 20 */	addi r4, r4, 0x20
/* 80143E5C 00140C5C  4B EC 72 35 */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 80143E60 00140C60  80 7E 00 48 */	lwz r3, 0x48(r30)
/* 80143E64 00140C64  38 81 00 18 */	addi r4, r1, 0x18
/* 80143E68 00140C68  C0 22 A5 48 */	lfs f1, _1192-_SDA2_BASE_(r2)
/* 80143E6C 00140C6C  38 63 00 20 */	addi r3, r3, 0x20
/* 80143E70 00140C70  4B ED 11 E9 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 80143E74 00140C74  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80143E78 00140C78  80 7E 00 48 */	lwz r3, 0x48(r30)
/* 80143E7C 00140C7C  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 80143E80 00140C80  80 7E 00 48 */	lwz r3, 0x48(r30)
/* 80143E84 00140C84  38 63 00 20 */	addi r3, r3, 0x20
/* 80143E88 00140C88  7C 64 1B 78 */	mr r4, r3
/* 80143E8C 00140C8C  4B F0 A4 65 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 80143E90 00140C90  80 7E 00 48 */	lwz r3, 0x48(r30)
/* 80143E94 00140C94  38 83 00 10 */	addi r4, r3, 0x10
/* 80143E98 00140C98  38 A3 00 20 */	addi r5, r3, 0x20
/* 80143E9C 00140C9C  4B ED 11 F1 */	bl xVec3Cross__FP5xVec3PC5xVec3PC5xVec3
/* 80143EA0 00140CA0  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80143EA4 00140CA4  80 7E 00 48 */	lwz r3, 0x48(r30)
/* 80143EA8 00140CA8  D0 03 00 34 */	stfs f0, 0x34(r3)
/* 80143EAC 00140CAC  C0 3A 00 54 */	lfs f1, 0x54(r26)
/* 80143EB0 00140CB0  C0 02 A4 E8 */	lfs f0, _1032-_SDA2_BASE_(r2)
/* 80143EB4 00140CB4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80143EB8 00140CB8  40 80 00 10 */	bge lbl_80143EC8
/* 80143EBC 00140CBC  38 1E 03 6C */	addi r0, r30, 0x36c
/* 80143EC0 00140CC0  90 0D 96 98 */	stw r0, sCamSubTarget-_SDA_BASE_(r13)
/* 80143EC4 00140CC4  48 00 04 78 */	b lbl_8014433C
lbl_80143EC8:
/* 80143EC8 00140CC8  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 80143ECC 00140CCC  38 03 00 88 */	addi r0, r3, 0x88
/* 80143ED0 00140CD0  90 0D 96 98 */	stw r0, sCamSubTarget-_SDA_BASE_(r13)
/* 80143ED4 00140CD4  48 00 04 68 */	b lbl_8014433C
lbl_80143ED8:
/* 80143ED8 00140CD8  C0 3A 00 4C */	lfs f1, 0x4c(r26)
/* 80143EDC 00140CDC  C0 02 A5 AC */	lfs f0, _1531-_SDA2_BASE_(r2)
/* 80143EE0 00140CE0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80143EE4 00140CE4  40 81 00 88 */	ble lbl_80143F6C
/* 80143EE8 00140CE8  80 BE 02 B8 */	lwz r5, 0x2b8(r30)
/* 80143EEC 00140CEC  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 80143EF0 00140CF0  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 80143EF4 00140CF4  38 00 00 04 */	li r0, 4
/* 80143EF8 00140CF8  80 85 00 28 */	lwz r4, 0x28(r5)
/* 80143EFC 00140CFC  38 63 06 04 */	addi r3, r3, 0x604
/* 80143F00 00140D00  54 84 07 34 */	rlwinm r4, r4, 0, 0x1c, 0x1a
/* 80143F04 00140D04  90 85 00 28 */	stw r4, 0x28(r5)
/* 80143F08 00140D08  80 BE 02 B8 */	lwz r5, 0x2b8(r30)
/* 80143F0C 00140D0C  80 85 00 30 */	lwz r4, 0x30(r5)
/* 80143F10 00140D10  54 84 07 34 */	rlwinm r4, r4, 0, 0x1c, 0x1a
/* 80143F14 00140D14  90 85 00 30 */	stw r4, 0x30(r5)
/* 80143F18 00140D18  90 1A 00 50 */	stw r0, 0x50(r26)
/* 80143F1C 00140D1C  4B F0 82 F9 */	bl xStrHash__FPCc
/* 80143F20 00140D20  C0 22 A6 00 */	lfs f1, _2517-_SDA2_BASE_(r2)
/* 80143F24 00140D24  7F C6 F3 78 */	mr r6, r30
/* 80143F28 00140D28  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 80143F2C 00140D2C  38 80 00 00 */	li r4, 0
/* 80143F30 00140D30  C0 62 A5 D8 */	lfs f3, _2154-_SDA2_BASE_(r2)
/* 80143F34 00140D34  38 A0 00 00 */	li r5, 0
/* 80143F38 00140D38  C0 82 A5 84 */	lfs f4, _1521-_SDA2_BASE_(r2)
/* 80143F3C 00140D3C  38 E0 00 00 */	li r7, 0
/* 80143F40 00140D40  4B F0 BC 8D */	bl xSndPlay3D__FUiffUiUiP4xEntf14sound_categoryf
/* 80143F44 00140D44  7F 43 D3 78 */	mr r3, r26
/* 80143F48 00140D48  38 80 00 20 */	li r4, 0x20
/* 80143F4C 00140D4C  38 A0 00 00 */	li r5, 0
/* 80143F50 00140D50  4B F9 13 C9 */	bl DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi
/* 80143F54 00140D54  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80143F58 00140D58  D0 1A 00 4C */	stfs f0, 0x4c(r26)
/* 80143F5C 00140D5C  80 1E 02 C0 */	lwz r0, 0x2c0(r30)
/* 80143F60 00140D60  54 00 06 6E */	rlwinm r0, r0, 0, 0x19, 0x17
/* 80143F64 00140D64  90 1E 02 C0 */	stw r0, 0x2c0(r30)
/* 80143F68 00140D68  48 00 03 D4 */	b lbl_8014433C
lbl_80143F6C:
/* 80143F6C 00140D6C  80 7E 02 B8 */	lwz r3, 0x2b8(r30)
/* 80143F70 00140D70  80 03 00 04 */	lwz r0, 4(r3)
/* 80143F74 00140D74  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 80143F78 00140D78  41 82 00 EC */	beq lbl_80144064
/* 80143F7C 00140D7C  38 00 00 05 */	li r0, 5
/* 80143F80 00140D80  3C 60 80 33 */	lis r3, sNFSoundValue@ha
/* 80143F84 00140D84  90 1A 00 50 */	stw r0, 0x50(r26)
/* 80143F88 00140D88  38 83 80 9C */	addi r4, r3, sNFSoundValue@l
/* 80143F8C 00140D8C  38 A0 00 00 */	li r5, 0
/* 80143F90 00140D90  38 C0 FF FF */	li r6, -1
/* 80143F94 00140D94  80 7E 0D 34 */	lwz r3, 0xd34(r30)
/* 80143F98 00140D98  80 1E 02 D4 */	lwz r0, 0x2d4(r30)
/* 80143F9C 00140D9C  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80143FA0 00140DA0  20 00 00 03 */	subfic r0, r0, 3
/* 80143FA4 00140DA4  54 00 10 3A */	slwi r0, r0, 2
/* 80143FA8 00140DA8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80143FAC 00140DAC  7C 84 02 14 */	add r4, r4, r0
/* 80143FB0 00140DB0  80 84 00 60 */	lwz r4, 0x60(r4)
/* 80143FB4 00140DB4  7D 89 03 A6 */	mtctr r12
/* 80143FB8 00140DB8  4E 80 04 21 */	bctrl 
/* 80143FBC 00140DBC  80 1E 0D 38 */	lwz r0, 0xd38(r30)
/* 80143FC0 00140DC0  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 80143FC4 00140DC4  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 80143FC8 00140DC8  60 00 00 04 */	ori r0, r0, 4
/* 80143FCC 00140DCC  90 1E 0D 38 */	stw r0, 0xd38(r30)
/* 80143FD0 00140DD0  38 63 05 F4 */	addi r3, r3, 0x5f4
/* 80143FD4 00140DD4  80 9E 02 D4 */	lwz r4, 0x2d4(r30)
/* 80143FD8 00140DD8  38 04 FF FF */	addi r0, r4, -1
/* 80143FDC 00140DDC  90 1E 02 D4 */	stw r0, 0x2d4(r30)
/* 80143FE0 00140DE0  4B F0 82 35 */	bl xStrHash__FPCc
/* 80143FE4 00140DE4  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 80143FE8 00140DE8  7F C6 F3 78 */	mr r6, r30
/* 80143FEC 00140DEC  C0 22 A6 00 */	lfs f1, _2517-_SDA2_BASE_(r2)
/* 80143FF0 00140DF0  38 80 00 00 */	li r4, 0
/* 80143FF4 00140DF4  FC 80 10 90 */	fmr f4, f2
/* 80143FF8 00140DF8  C0 62 A6 04 */	lfs f3, _2518-_SDA2_BASE_(r2)
/* 80143FFC 00140DFC  38 A0 00 00 */	li r5, 0
/* 80144000 00140E00  38 E0 00 00 */	li r7, 0
/* 80144004 00140E04  4B F0 BB C9 */	bl xSndPlay3D__FUiffUiUiP4xEntf14sound_categoryf
/* 80144008 00140E08  7F C3 F3 78 */	mr r3, r30
/* 8014400C 00140E0C  7F C4 F3 78 */	mr r4, r30
/* 80144010 00140E10  38 A0 01 D7 */	li r5, 0x1d7
/* 80144014 00140E14  4B ED B6 CD */	bl zEntEvent__FP5xBaseP5xBaseUi
/* 80144018 00140E18  80 1E 02 D4 */	lwz r0, 0x2d4(r30)
/* 8014401C 00140E1C  2C 00 00 00 */	cmpwi r0, 0
/* 80144020 00140E20  40 82 00 10 */	bne lbl_80144030
/* 80144024 00140E24  7F C3 F3 78 */	mr r3, r30
/* 80144028 00140E28  38 80 00 24 */	li r4, 0x24
/* 8014402C 00140E2C  4B ED B5 C5 */	bl zEntEvent__FP5xBaseUi
lbl_80144030:
/* 80144030 00140E30  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 80144034 00140E34  38 80 00 00 */	li r4, 0
/* 80144038 00140E38  4B FF B6 A1 */	bl zNPCBSandy_BossDamageEffect__FP14xModelInstanceUi
/* 8014403C 00140E3C  7F 43 D3 78 */	mr r3, r26
/* 80144040 00140E40  38 80 00 20 */	li r4, 0x20
/* 80144044 00140E44  38 A0 00 00 */	li r5, 0
/* 80144048 00140E48  4B F9 12 D1 */	bl DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi
/* 8014404C 00140E4C  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80144050 00140E50  D0 1A 00 4C */	stfs f0, 0x4c(r26)
/* 80144054 00140E54  80 1E 02 C0 */	lwz r0, 0x2c0(r30)
/* 80144058 00140E58  54 00 06 6E */	rlwinm r0, r0, 0, 0x19, 0x17
/* 8014405C 00140E5C  90 1E 02 C0 */	stw r0, 0x2c0(r30)
/* 80144060 00140E60  48 00 02 DC */	b lbl_8014433C
lbl_80144064:
/* 80144064 00140E64  80 1E 02 C0 */	lwz r0, 0x2c0(r30)
/* 80144068 00140E68  3C 60 80 2A */	lis r3, sBone@ha
/* 8014406C 00140E6C  38 83 98 C8 */	addi r4, r3, sBone@l
/* 80144070 00140E70  38 7E 05 F0 */	addi r3, r30, 0x5f0
/* 80144074 00140E74  60 00 00 80 */	ori r0, r0, 0x80
/* 80144078 00140E78  38 C0 00 00 */	li r6, 0
/* 8014407C 00140E7C  90 1E 02 C0 */	stw r0, 0x2c0(r30)
/* 80144080 00140E80  80 1E 05 54 */	lwz r0, 0x554(r30)
/* 80144084 00140E84  90 1E 05 5C */	stw r0, 0x55c(r30)
/* 80144088 00140E88  80 FE 00 24 */	lwz r7, 0x24(r30)
/* 8014408C 00140E8C  80 A4 00 04 */	lwz r5, 4(r4)
/* 80144090 00140E90  80 87 00 4C */	lwz r4, 0x4c(r7)
/* 80144094 00140E94  4B FF C4 39 */	bl GetBonePos__FP5xVec3P7xMat4x3iP5xVec3
/* 80144098 00140E98  C0 02 A5 48 */	lfs f0, _1192-_SDA2_BASE_(r2)
/* 8014409C 00140E9C  D0 1E 05 F4 */	stfs f0, 0x5f4(r30)
/* 801440A0 00140EA0  48 00 02 9C */	b lbl_8014433C
lbl_801440A4:
/* 801440A4 00140EA4  28 00 00 02 */	cmplwi r0, 2
/* 801440A8 00140EA8  40 82 01 18 */	bne lbl_801441C0
/* 801440AC 00140EAC  C0 3A 00 4C */	lfs f1, 0x4c(r26)
/* 801440B0 00140EB0  C0 02 A5 14 */	lfs f0, _1064-_SDA2_BASE_(r2)
/* 801440B4 00140EB4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801440B8 00140EB8  40 81 00 54 */	ble lbl_8014410C
/* 801440BC 00140EBC  38 60 00 03 */	li r3, 3
/* 801440C0 00140EC0  38 00 00 01 */	li r0, 1
/* 801440C4 00140EC4  90 7A 00 50 */	stw r3, 0x50(r26)
/* 801440C8 00140EC8  7F C3 F3 78 */	mr r3, r30
/* 801440CC 00140ECC  98 0D 84 80 */	stb r0, sUseBossCam-_SDA_BASE_(r13)
/* 801440D0 00140ED0  80 9E 00 24 */	lwz r4, 0x24(r30)
/* 801440D4 00140ED4  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 801440D8 00140ED8  38 04 00 30 */	addi r0, r4, 0x30
/* 801440DC 00140EDC  90 0D 96 98 */	stw r0, sCamSubTarget-_SDA_BASE_(r13)
/* 801440E0 00140EE0  4B FF BB C9 */	bl CalcMagnetizeInfo__10zNPCBSandyFv
/* 801440E4 00140EE4  7F 43 D3 78 */	mr r3, r26
/* 801440E8 00140EE8  38 80 00 20 */	li r4, 0x20
/* 801440EC 00140EEC  38 A0 00 00 */	li r5, 0
/* 801440F0 00140EF0  4B F9 12 29 */	bl DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi
/* 801440F4 00140EF4  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 801440F8 00140EF8  D0 1A 00 4C */	stfs f0, 0x4c(r26)
/* 801440FC 00140EFC  80 1E 02 C0 */	lwz r0, 0x2c0(r30)
/* 80144100 00140F00  54 00 06 2C */	rlwinm r0, r0, 0, 0x18, 0x16
/* 80144104 00140F04  90 1E 02 C0 */	stw r0, 0x2c0(r30)
/* 80144108 00140F08  48 00 02 34 */	b lbl_8014433C
lbl_8014410C:
/* 8014410C 00140F0C  C0 02 A5 CC */	lfs f0, _1940-_SDA2_BASE_(r2)
/* 80144110 00140F10  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80144114 00140F14  40 81 00 14 */	ble lbl_80144128
/* 80144118 00140F18  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8014411C 00140F1C  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80144120 00140F20  38 03 00 30 */	addi r0, r3, 0x30
/* 80144124 00140F24  90 0D 96 98 */	stw r0, sCamSubTarget-_SDA_BASE_(r13)
lbl_80144128:
/* 80144128 00140F28  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 8014412C 00140F2C  38 9E 06 38 */	addi r4, r30, 0x638
/* 80144130 00140F30  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80144134 00140F34  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80144138 00140F38  38 63 00 30 */	addi r3, r3, 0x30
/* 8014413C 00140F3C  4B F0 A3 A1 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 80144140 00140F40  C0 22 A6 08 */	lfs f1, _2519-_SDA2_BASE_(r2)
/* 80144144 00140F44  C0 1A 00 4C */	lfs f0, 0x4c(r26)
/* 80144148 00140F48  EC 21 00 32 */	fmuls f1, f1, f0
/* 8014414C 00140F4C  4B F8 0D 45 */	bl icos__Ff
/* 80144150 00140F50  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 80144154 00140F54  C0 42 A5 48 */	lfs f2, _1192-_SDA2_BASE_(r2)
/* 80144158 00140F58  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8014415C 00140F5C  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80144160 00140F60  C0 03 00 30 */	lfs f0, 0x30(r3)
/* 80144164 00140F64  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80144168 00140F68  D0 03 00 30 */	stfs f0, 0x30(r3)
/* 8014416C 00140F6C  C0 22 A6 0C */	lfs f1, _2520-_SDA2_BASE_(r2)
/* 80144170 00140F70  C0 1A 00 4C */	lfs f0, 0x4c(r26)
/* 80144174 00140F74  EC 21 00 32 */	fmuls f1, f1, f0
/* 80144178 00140F78  4B F8 0C D5 */	bl isin__Ff
/* 8014417C 00140F7C  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 80144180 00140F80  C0 42 A5 48 */	lfs f2, _1192-_SDA2_BASE_(r2)
/* 80144184 00140F84  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80144188 00140F88  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8014418C 00140F8C  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 80144190 00140F90  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80144194 00140F94  D0 03 00 38 */	stfs f0, 0x38(r3)
/* 80144198 00140F98  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8014419C 00140F9C  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 801441A0 00140FA0  D0 03 01 D0 */	stfs f0, 0x1d0(r3)
/* 801441A4 00140FA4  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 801441A8 00140FA8  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 801441AC 00140FAC  FC 40 08 90 */	fmr f2, f1
/* 801441B0 00140FB0  FC 60 08 90 */	fmr f3, f1
/* 801441B4 00140FB4  38 63 01 A0 */	addi r3, r3, 0x1a0
/* 801441B8 00140FB8  4B EC AE 45 */	bl xVec3Init__FP5xVec3fff
/* 801441BC 00140FBC  48 00 01 80 */	b lbl_8014433C
lbl_801441C0:
/* 801441C0 00140FC0  28 00 00 03 */	cmplwi r0, 3
/* 801441C4 00140FC4  40 82 01 78 */	bne lbl_8014433C
/* 801441C8 00140FC8  C0 5A 00 4C */	lfs f2, 0x4c(r26)
/* 801441CC 00140FCC  C0 3E 06 34 */	lfs f1, 0x634(r30)
/* 801441D0 00140FD0  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 801441D4 00140FD4  EF C2 08 24 */	fdivs f30, f2, f1
/* 801441D8 00140FD8  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 801441DC 00140FDC  40 81 00 A8 */	ble lbl_80144284
/* 801441E0 00140FE0  38 00 00 04 */	li r0, 4
/* 801441E4 00140FE4  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 801441E8 00140FE8  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 801441EC 00140FEC  90 1A 00 50 */	stw r0, 0x50(r26)
/* 801441F0 00140FF0  38 63 06 04 */	addi r3, r3, 0x604
/* 801441F4 00140FF4  4B F0 80 21 */	bl xStrHash__FPCc
/* 801441F8 00140FF8  C0 22 A6 00 */	lfs f1, _2517-_SDA2_BASE_(r2)
/* 801441FC 00140FFC  7F C6 F3 78 */	mr r6, r30
/* 80144200 00141000  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 80144204 00141004  38 80 00 00 */	li r4, 0
/* 80144208 00141008  C0 62 A5 D8 */	lfs f3, _2154-_SDA2_BASE_(r2)
/* 8014420C 0014100C  38 A0 00 00 */	li r5, 0
/* 80144210 00141010  C0 82 A5 84 */	lfs f4, _1521-_SDA2_BASE_(r2)
/* 80144214 00141014  38 E0 00 00 */	li r7, 0
/* 80144218 00141018  4B F0 B9 B5 */	bl xSndPlay3D__FUiffUiUiP4xEntf14sound_categoryf
/* 8014421C 0014101C  7F 43 D3 78 */	mr r3, r26
/* 80144220 00141020  38 80 00 20 */	li r4, 0x20
/* 80144224 00141024  38 A0 00 00 */	li r5, 0
/* 80144228 00141028  4B F9 10 F1 */	bl DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi
/* 8014422C 0014102C  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80144230 00141030  38 80 00 25 */	li r4, 0x25
/* 80144234 00141034  D0 1A 00 4C */	stfs f0, 0x4c(r26)
/* 80144238 00141038  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 8014423C 0014103C  4B ED B3 B5 */	bl zEntEvent__FP5xBaseUi
/* 80144240 00141040  80 9E 00 24 */	lwz r4, 0x24(r30)
/* 80144244 00141044  38 00 00 10 */	li r0, 0x10
/* 80144248 00141048  A0 64 00 44 */	lhz r3, 0x44(r4)
/* 8014424C 0014104C  60 63 00 01 */	ori r3, r3, 1
/* 80144250 00141050  B0 64 00 44 */	sth r3, 0x44(r4)
/* 80144254 00141054  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 80144258 00141058  80 83 00 00 */	lwz r4, 0(r3)
/* 8014425C 0014105C  A0 64 00 44 */	lhz r3, 0x44(r4)
/* 80144260 00141060  60 63 00 01 */	ori r3, r3, 1
/* 80144264 00141064  B0 64 00 44 */	sth r3, 0x44(r4)
/* 80144268 00141068  80 7E 02 B4 */	lwz r3, 0x2b4(r30)
/* 8014426C 0014106C  80 63 00 04 */	lwz r3, 4(r3)
/* 80144270 00141070  98 03 00 22 */	stb r0, 0x22(r3)
/* 80144274 00141074  80 7E 02 B4 */	lwz r3, 0x2b4(r30)
/* 80144278 00141078  80 63 00 04 */	lwz r3, 4(r3)
/* 8014427C 0014107C  98 03 00 23 */	stb r0, 0x23(r3)
/* 80144280 00141080  48 00 00 BC */	b lbl_8014433C
lbl_80144284:
/* 80144284 00141084  3C 60 80 2A */	lis r3, sBone@ha
/* 80144288 00141088  80 BE 00 24 */	lwz r5, 0x24(r30)
/* 8014428C 0014108C  38 83 98 C8 */	addi r4, r3, sBone@l
/* 80144290 00141090  80 04 00 04 */	lwz r0, 4(r4)
/* 80144294 00141094  38 61 00 24 */	addi r3, r1, 0x24
/* 80144298 00141098  80 A5 00 4C */	lwz r5, 0x4c(r5)
/* 8014429C 0014109C  54 00 30 32 */	slwi r0, r0, 6
/* 801442A0 001410A0  7C 85 02 14 */	add r4, r5, r0
/* 801442A4 001410A4  4B EE E9 75 */	bl xMat4x3Mul__FP7xMat4x3PC7xMat4x3PC7xMat4x3
/* 801442A8 001410A8  38 7E 05 FC */	addi r3, r30, 0x5fc
/* 801442AC 001410AC  38 81 00 24 */	addi r4, r1, 0x24
/* 801442B0 001410B0  4B EE E9 D5 */	bl xQuatFromMat__FP5xQuatPC7xMat3x3
/* 801442B4 001410B4  3C 80 80 2A */	lis r4, sBoneOffset@ha
/* 801442B8 001410B8  38 7E 06 1C */	addi r3, r30, 0x61c
/* 801442BC 001410BC  38 A4 99 50 */	addi r5, r4, sBoneOffset@l
/* 801442C0 001410C0  38 81 00 24 */	addi r4, r1, 0x24
/* 801442C4 001410C4  38 A5 00 0C */	addi r5, r5, 0xc
/* 801442C8 001410C8  48 00 22 C9 */	bl xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 801442CC 001410CC  38 7E 06 1C */	addi r3, r30, 0x61c
/* 801442D0 001410D0  38 81 00 54 */	addi r4, r1, 0x54
/* 801442D4 001410D4  4B EC A4 81 */	bl xVec3AddTo__FP5xVec3PC5xVec3
/* 801442D8 001410D8  FC 20 F0 90 */	fmr f1, f30
/* 801442DC 001410DC  38 61 00 08 */	addi r3, r1, 8
/* 801442E0 001410E0  38 9E 06 0C */	addi r4, r30, 0x60c
/* 801442E4 001410E4  38 BE 05 FC */	addi r5, r30, 0x5fc
/* 801442E8 001410E8  4B EE ED E9 */	bl xQuatSlerp__FP5xQuatPC5xQuatPC5xQuatf
/* 801442EC 001410EC  80 9E 07 C4 */	lwz r4, 0x7c4(r30)
/* 801442F0 001410F0  38 61 00 08 */	addi r3, r1, 8
/* 801442F4 001410F4  80 84 00 24 */	lwz r4, 0x24(r4)
/* 801442F8 001410F8  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 801442FC 001410FC  4B EE EC 05 */	bl xQuatToMat__FPC5xQuatP7xMat3x3
/* 80144300 00141100  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 80144304 00141104  38 9E 06 28 */	addi r4, r30, 0x628
/* 80144308 00141108  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 8014430C 0014110C  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80144310 00141110  EC 20 F0 28 */	fsubs f1, f0, f30
/* 80144314 00141114  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80144318 00141118  38 63 00 30 */	addi r3, r3, 0x30
/* 8014431C 0014111C  4B EC 6D 75 */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 80144320 00141120  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 80144324 00141124  FC 20 F0 90 */	fmr f1, f30
/* 80144328 00141128  38 9E 06 1C */	addi r4, r30, 0x61c
/* 8014432C 0014112C  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80144330 00141130  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80144334 00141134  38 63 00 30 */	addi r3, r3, 0x30
/* 80144338 00141138  4B ED 0D 21 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
lbl_8014433C:
/* 8014433C 0014113C  FC 20 F8 90 */	fmr f1, f31
/* 80144340 00141140  7F 43 D3 78 */	mr r3, r26
/* 80144344 00141144  7F 64 DB 78 */	mr r4, r27
/* 80144348 00141148  7F 85 E3 78 */	mr r5, r28
/* 8014434C 0014114C  7F A6 EB 78 */	mr r6, r29
/* 80144350 00141150  4B FC A7 F9 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
/* 80144354 00141154  E3 E1 00 A8 */	psq_l f31, 168(r1), 0, qr0
/* 80144358 00141158  CB E1 00 A0 */	lfd f31, 0xa0(r1)
/* 8014435C 0014115C  E3 C1 00 98 */	psq_l f30, 152(r1), 0, qr0
/* 80144360 00141160  CB C1 00 90 */	lfd f30, 0x90(r1)
/* 80144364 00141164  BB 21 00 74 */	lmw r25, 0x74(r1)
/* 80144368 00141168  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 8014436C 0014116C  7C 08 03 A6 */	mtlr r0
/* 80144370 00141170  38 21 00 B0 */	addi r1, r1, 0xb0
/* 80144374 00141174  4E 80 00 20 */	blr 

Enter__26zNPCGoalBossSandyElbowDropFfPv:
/* 80144378 00141178  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8014437C 0014117C  7C 08 02 A6 */	mflr r0
/* 80144380 00141180  90 01 00 34 */	stw r0, 0x34(r1)
/* 80144384 00141184  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80144388 00141188  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8014438C 0014118C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80144390 00141190  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80144394 00141194  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80144398 00141198  7C 7D 1B 78 */	mr r29, r3
/* 8014439C 0014119C  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 801443A0 001411A0  80 63 00 18 */	lwz r3, 0x18(r3)
/* 801443A4 001411A4  FF E0 08 90 */	fmr f31, f1
/* 801443A8 001411A8  7C 9E 23 78 */	mr r30, r4
/* 801443AC 001411AC  83 E3 00 00 */	lwz r31, 0(r3)
/* 801443B0 001411B0  D0 1D 00 4C */	stfs f0, 0x4c(r29)
/* 801443B4 001411B4  80 1F 02 C0 */	lwz r0, 0x2c0(r31)
/* 801443B8 001411B8  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 801443BC 001411BC  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 801443C0 001411C0  80 6D 96 88 */	lwz r3, sNumAttacks-_SDA_BASE_(r13)
/* 801443C4 001411C4  38 03 00 01 */	addi r0, r3, 1
/* 801443C8 001411C8  90 0D 96 88 */	stw r0, sNumAttacks-_SDA_BASE_(r13)
/* 801443CC 001411CC  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 801443D0 001411D0  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 801443D4 001411D4  FC 40 08 90 */	fmr f2, f1
/* 801443D8 001411D8  FC 60 08 90 */	fmr f3, f1
/* 801443DC 001411DC  38 63 00 D4 */	addi r3, r3, 0xd4
/* 801443E0 001411E0  4B EC AC 1D */	bl xVec3Init__FP5xVec3fff
/* 801443E4 001411E4  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 801443E8 001411E8  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 801443EC 001411EC  38 63 06 15 */	addi r3, r3, 0x615
/* 801443F0 001411F0  4B F0 7E 25 */	bl xStrHash__FPCc
/* 801443F4 001411F4  C0 22 A5 F4 */	lfs f1, _2265-_SDA2_BASE_(r2)
/* 801443F8 001411F8  7F E6 FB 78 */	mr r6, r31
/* 801443FC 001411FC  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 80144400 00141200  38 80 00 00 */	li r4, 0
/* 80144404 00141204  C0 62 A5 D8 */	lfs f3, _2154-_SDA2_BASE_(r2)
/* 80144408 00141208  38 A0 00 00 */	li r5, 0
/* 8014440C 0014120C  C0 82 A6 10 */	lfs f4, _2525-_SDA2_BASE_(r2)
/* 80144410 00141210  38 E0 00 00 */	li r7, 0
/* 80144414 00141214  4B F0 B7 B9 */	bl xSndPlay3D__FUiffUiUiP4xEntf14sound_categoryf
/* 80144418 00141218  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8014441C 0014121C  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 80144420 00141220  38 63 06 15 */	addi r3, r3, 0x615
/* 80144424 00141224  4B F0 7D F1 */	bl xStrHash__FPCc
/* 80144428 00141228  C0 22 A5 F4 */	lfs f1, _2265-_SDA2_BASE_(r2)
/* 8014442C 0014122C  7F E6 FB 78 */	mr r6, r31
/* 80144430 00141230  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 80144434 00141234  38 80 00 00 */	li r4, 0
/* 80144438 00141238  C0 62 A5 D8 */	lfs f3, _2154-_SDA2_BASE_(r2)
/* 8014443C 0014123C  38 A0 00 00 */	li r5, 0
/* 80144440 00141240  C0 82 A5 0C */	lfs f4, _1062-_SDA2_BASE_(r2)
/* 80144444 00141244  38 E0 00 00 */	li r7, 0
/* 80144448 00141248  4B F0 B7 85 */	bl xSndPlay3D__FUiffUiUiP4xEntf14sound_categoryf
/* 8014444C 0014124C  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 80144450 00141250  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 80144454 00141254  38 63 06 22 */	addi r3, r3, 0x622
/* 80144458 00141258  4B F0 7D BD */	bl xStrHash__FPCc
/* 8014445C 0014125C  C0 22 A5 F4 */	lfs f1, _2265-_SDA2_BASE_(r2)
/* 80144460 00141260  7F E6 FB 78 */	mr r6, r31
/* 80144464 00141264  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 80144468 00141268  38 80 00 00 */	li r4, 0
/* 8014446C 0014126C  C0 62 A5 D8 */	lfs f3, _2154-_SDA2_BASE_(r2)
/* 80144470 00141270  38 A0 00 00 */	li r5, 0
/* 80144474 00141274  C0 82 A4 FC */	lfs f4, _1037-_SDA2_BASE_(r2)
/* 80144478 00141278  38 E0 00 00 */	li r7, 0
/* 8014447C 0014127C  4B F0 B7 51 */	bl xSndPlay3D__FUiffUiUiP4xEntf14sound_categoryf
/* 80144480 00141280  38 00 00 00 */	li r0, 0
/* 80144484 00141284  FC 20 F8 90 */	fmr f1, f31
/* 80144488 00141288  90 1D 00 50 */	stw r0, 0x50(r29)
/* 8014448C 0014128C  7F A3 EB 78 */	mr r3, r29
/* 80144490 00141290  7F C4 F3 78 */	mr r4, r30
/* 80144494 00141294  4B F9 0C 81 */	bl Enter__14zNPCGoalCommonFfPv
/* 80144498 00141298  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8014449C 0014129C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801444A0 001412A0  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 801444A4 001412A4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801444A8 001412A8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801444AC 001412AC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801444B0 001412B0  7C 08 03 A6 */	mtlr r0
/* 801444B4 001412B4  38 21 00 30 */	addi r1, r1, 0x30
/* 801444B8 001412B8  4E 80 00 20 */	blr 

Process__26zNPCGoalBossSandyElbowDropFP11en_trantypefPvP6xScene:
/* 801444BC 001412BC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801444C0 001412C0  7C 08 02 A6 */	mflr r0
/* 801444C4 001412C4  90 01 00 44 */	stw r0, 0x44(r1)
/* 801444C8 001412C8  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 801444CC 001412CC  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 801444D0 001412D0  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 801444D4 001412D4  7C 7B 1B 78 */	mr r27, r3
/* 801444D8 001412D8  FF E0 08 90 */	fmr f31, f1
/* 801444DC 001412DC  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 801444E0 001412E0  7C 9C 23 78 */	mr r28, r4
/* 801444E4 001412E4  80 63 00 18 */	lwz r3, 0x18(r3)
/* 801444E8 001412E8  7C BD 2B 78 */	mr r29, r5
/* 801444EC 001412EC  EC 00 F8 2A */	fadds f0, f0, f31
/* 801444F0 001412F0  83 E3 00 00 */	lwz r31, 0(r3)
/* 801444F4 001412F4  7C DE 33 78 */	mr r30, r6
/* 801444F8 001412F8  D0 1B 00 4C */	stfs f0, 0x4c(r27)
/* 801444FC 001412FC  C0 3B 00 4C */	lfs f1, 0x4c(r27)
/* 80144500 00141300  C0 02 A5 80 */	lfs f0, _1466-_SDA2_BASE_(r2)
/* 80144504 00141304  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80144508 00141308  40 81 01 00 */	ble lbl_80144608
/* 8014450C 0014130C  80 BF 02 B8 */	lwz r5, 0x2b8(r31)
/* 80144510 00141310  38 C0 00 0C */	li r6, 0xc
/* 80144514 00141314  20 06 00 0D */	subfic r0, r6, 0xd
/* 80144518 00141318  80 85 00 00 */	lwz r4, 0(r5)
/* 8014451C 0014131C  54 C3 10 3A */	slwi r3, r6, 2
/* 80144520 00141320  60 84 00 01 */	ori r4, r4, 1
/* 80144524 00141324  90 85 00 00 */	stw r4, 0(r5)
/* 80144528 00141328  80 BF 02 B8 */	lwz r5, 0x2b8(r31)
/* 8014452C 0014132C  80 85 00 04 */	lwz r4, 4(r5)
/* 80144530 00141330  60 84 00 01 */	ori r4, r4, 1
/* 80144534 00141334  90 85 00 04 */	stw r4, 4(r5)
/* 80144538 00141338  80 BF 02 B8 */	lwz r5, 0x2b8(r31)
/* 8014453C 0014133C  80 85 00 08 */	lwz r4, 8(r5)
/* 80144540 00141340  60 84 00 01 */	ori r4, r4, 1
/* 80144544 00141344  90 85 00 08 */	stw r4, 8(r5)
/* 80144548 00141348  80 BF 02 B8 */	lwz r5, 0x2b8(r31)
/* 8014454C 0014134C  80 85 00 0C */	lwz r4, 0xc(r5)
/* 80144550 00141350  60 84 00 01 */	ori r4, r4, 1
/* 80144554 00141354  90 85 00 0C */	stw r4, 0xc(r5)
/* 80144558 00141358  80 BF 02 B8 */	lwz r5, 0x2b8(r31)
/* 8014455C 0014135C  80 85 00 10 */	lwz r4, 0x10(r5)
/* 80144560 00141360  60 84 00 01 */	ori r4, r4, 1
/* 80144564 00141364  90 85 00 10 */	stw r4, 0x10(r5)
/* 80144568 00141368  80 BF 02 B8 */	lwz r5, 0x2b8(r31)
/* 8014456C 0014136C  80 85 00 14 */	lwz r4, 0x14(r5)
/* 80144570 00141370  60 84 00 01 */	ori r4, r4, 1
/* 80144574 00141374  90 85 00 14 */	stw r4, 0x14(r5)
/* 80144578 00141378  80 BF 02 B8 */	lwz r5, 0x2b8(r31)
/* 8014457C 0014137C  80 85 00 18 */	lwz r4, 0x18(r5)
/* 80144580 00141380  60 84 00 01 */	ori r4, r4, 1
/* 80144584 00141384  90 85 00 18 */	stw r4, 0x18(r5)
/* 80144588 00141388  80 BF 02 B8 */	lwz r5, 0x2b8(r31)
/* 8014458C 0014138C  80 85 00 1C */	lwz r4, 0x1c(r5)
/* 80144590 00141390  60 84 00 01 */	ori r4, r4, 1
/* 80144594 00141394  90 85 00 1C */	stw r4, 0x1c(r5)
/* 80144598 00141398  80 BF 02 B8 */	lwz r5, 0x2b8(r31)
/* 8014459C 0014139C  80 85 00 20 */	lwz r4, 0x20(r5)
/* 801445A0 001413A0  60 84 00 01 */	ori r4, r4, 1
/* 801445A4 001413A4  90 85 00 20 */	stw r4, 0x20(r5)
/* 801445A8 001413A8  80 BF 02 B8 */	lwz r5, 0x2b8(r31)
/* 801445AC 001413AC  80 85 00 24 */	lwz r4, 0x24(r5)
/* 801445B0 001413B0  60 84 00 01 */	ori r4, r4, 1
/* 801445B4 001413B4  90 85 00 24 */	stw r4, 0x24(r5)
/* 801445B8 001413B8  80 BF 02 B8 */	lwz r5, 0x2b8(r31)
/* 801445BC 001413BC  80 85 00 28 */	lwz r4, 0x28(r5)
/* 801445C0 001413C0  60 84 00 01 */	ori r4, r4, 1
/* 801445C4 001413C4  90 85 00 28 */	stw r4, 0x28(r5)
/* 801445C8 001413C8  80 BF 02 B8 */	lwz r5, 0x2b8(r31)
/* 801445CC 001413CC  80 85 00 2C */	lwz r4, 0x2c(r5)
/* 801445D0 001413D0  60 84 00 01 */	ori r4, r4, 1
/* 801445D4 001413D4  90 85 00 2C */	stw r4, 0x2c(r5)
/* 801445D8 001413D8  7C 09 03 A6 */	mtctr r0
/* 801445DC 001413DC  2C 06 00 0D */	cmpwi r6, 0xd
/* 801445E0 001413E0  40 80 00 1C */	bge lbl_801445FC
lbl_801445E4:
/* 801445E4 001413E4  80 9F 02 B8 */	lwz r4, 0x2b8(r31)
/* 801445E8 001413E8  7C 04 18 2E */	lwzx r0, r4, r3
/* 801445EC 001413EC  60 00 00 01 */	ori r0, r0, 1
/* 801445F0 001413F0  7C 04 19 2E */	stwx r0, r4, r3
/* 801445F4 001413F4  38 63 00 04 */	addi r3, r3, 4
/* 801445F8 001413F8  42 00 FF EC */	bdnz lbl_801445E4
lbl_801445FC:
/* 801445FC 001413FC  80 1F 02 C0 */	lwz r0, 0x2c0(r31)
/* 80144600 00141400  60 00 00 01 */	ori r0, r0, 1
/* 80144604 00141404  90 1F 02 C0 */	stw r0, 0x2c0(r31)
lbl_80144608:
/* 80144608 00141408  C0 3B 00 4C */	lfs f1, 0x4c(r27)
/* 8014460C 0014140C  C0 1F 0D 4C */	lfs f0, 0xd4c(r31)
/* 80144610 00141410  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80144614 00141414  40 81 00 5C */	ble lbl_80144670
/* 80144618 00141418  80 7B 00 50 */	lwz r3, 0x50(r27)
/* 8014461C 0014141C  54 60 07 FF */	clrlwi. r0, r3, 0x1f
/* 80144620 00141420  40 82 01 00 */	bne lbl_80144720
/* 80144624 00141424  60 60 00 01 */	ori r0, r3, 1
/* 80144628 00141428  90 1B 00 50 */	stw r0, 0x50(r27)
/* 8014462C 0014142C  80 1F 02 C0 */	lwz r0, 0x2c0(r31)
/* 80144630 00141430  60 00 08 00 */	ori r0, r0, 0x800
/* 80144634 00141434  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 80144638 00141438  80 9F 07 B4 */	lwz r4, 0x7b4(r31)
/* 8014463C 0014143C  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 80144640 00141440  80 A4 00 10 */	lwz r5, 0x10(r4)
/* 80144644 00141444  80 83 00 4C */	lwz r4, 0x4c(r3)
/* 80144648 00141448  38 65 00 30 */	addi r3, r5, 0x30
/* 8014464C 0014144C  38 84 00 30 */	addi r4, r4, 0x30
/* 80144650 00141450  4B F0 9E 8D */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 80144654 00141454  80 7F 07 B4 */	lwz r3, 0x7b4(r31)
/* 80144658 00141458  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8014465C 0014145C  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80144660 00141460  D0 03 00 34 */	stfs f0, 0x34(r3)
/* 80144664 00141464  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 80144668 00141468  D0 1F 0D 3C */	stfs f0, 0xd3c(r31)
/* 8014466C 0014146C  48 00 00 B4 */	b lbl_80144720
lbl_80144670:
/* 80144670 00141470  C0 1F 0D 48 */	lfs f0, 0xd48(r31)
/* 80144674 00141474  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80144678 00141478  40 81 00 A8 */	ble lbl_80144720
/* 8014467C 0014147C  3C 60 80 3C */	lis r3, globals@ha
/* 80144680 00141480  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 80144684 00141484  38 A3 05 58 */	addi r5, r3, globals@l
/* 80144688 00141488  38 61 00 08 */	addi r3, r1, 8
/* 8014468C 0014148C  80 A5 07 04 */	lwz r5, 0x704(r5)
/* 80144690 00141490  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80144694 00141494  80 C5 00 4C */	lwz r6, 0x4c(r5)
/* 80144698 00141498  38 A4 00 30 */	addi r5, r4, 0x30
/* 8014469C 0014149C  38 86 00 30 */	addi r4, r6, 0x30
/* 801446A0 001414A0  4B EC 9F F1 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 801446A4 001414A4  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 801446A8 001414A8  38 61 00 08 */	addi r3, r1, 8
/* 801446AC 001414AC  7C 64 1B 78 */	mr r4, r3
/* 801446B0 001414B0  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 801446B4 001414B4  4B F0 9C 3D */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 801446B8 001414B8  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 801446BC 001414BC  80 BF 00 48 */	lwz r5, 0x48(r31)
/* 801446C0 001414C0  80 83 00 4C */	lwz r4, 0x4c(r3)
/* 801446C4 001414C4  C0 22 A5 68 */	lfs f1, _1380-_SDA2_BASE_(r2)
/* 801446C8 001414C8  38 65 00 20 */	addi r3, r5, 0x20
/* 801446CC 001414CC  38 84 00 20 */	addi r4, r4, 0x20
/* 801446D0 001414D0  4B EC 69 C1 */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 801446D4 001414D4  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 801446D8 001414D8  38 81 00 08 */	addi r4, r1, 8
/* 801446DC 001414DC  C0 22 A5 48 */	lfs f1, _1192-_SDA2_BASE_(r2)
/* 801446E0 001414E0  38 63 00 20 */	addi r3, r3, 0x20
/* 801446E4 001414E4  4B ED 09 75 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 801446E8 001414E8  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 801446EC 001414EC  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 801446F0 001414F0  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 801446F4 001414F4  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 801446F8 001414F8  38 63 00 20 */	addi r3, r3, 0x20
/* 801446FC 001414FC  7C 64 1B 78 */	mr r4, r3
/* 80144700 00141500  4B F0 9B F1 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 80144704 00141504  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 80144708 00141508  38 83 00 10 */	addi r4, r3, 0x10
/* 8014470C 0014150C  38 A3 00 20 */	addi r5, r3, 0x20
/* 80144710 00141510  4B ED 09 7D */	bl xVec3Cross__FP5xVec3PC5xVec3PC5xVec3
/* 80144714 00141514  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80144718 00141518  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 8014471C 0014151C  D0 03 00 34 */	stfs f0, 0x34(r3)
lbl_80144720:
/* 80144720 00141520  FC 20 F8 90 */	fmr f1, f31
/* 80144724 00141524  7F 63 DB 78 */	mr r3, r27
/* 80144728 00141528  7F 84 E3 78 */	mr r4, r28
/* 8014472C 0014152C  7F A5 EB 78 */	mr r5, r29
/* 80144730 00141530  7F C6 F3 78 */	mr r6, r30
/* 80144734 00141534  4B FC A4 15 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
/* 80144738 00141538  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8014473C 0014153C  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80144740 00141540  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 80144744 00141544  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80144748 00141548  7C 08 03 A6 */	mtlr r0
/* 8014474C 0014154C  38 21 00 40 */	addi r1, r1, 0x40
/* 80144750 00141550  4E 80 00 20 */	blr 

Exit__26zNPCGoalBossSandyElbowDropFfPv:
/* 80144754 00141554  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80144758 00141558  7C 08 02 A6 */	mflr r0
/* 8014475C 0014155C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80144760 00141560  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80144764 00141564  D0 0D 96 80 */	stfs f0, sElbowDropTimer-_SDA_BASE_(r13)
/* 80144768 00141568  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8014476C 0014156C  D0 0D 96 90 */	stfs f0, sElbowDropThreshold-_SDA_BASE_(r13)
/* 80144770 00141570  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80144774 00141574  D0 0D 96 84 */	stfs f0, sChaseTimer-_SDA_BASE_(r13)
/* 80144778 00141578  4B F9 0C A5 */	bl Exit__5xGoalFfPv
/* 8014477C 0014157C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80144780 00141580  7C 08 03 A6 */	mtlr r0
/* 80144784 00141584  38 21 00 10 */	addi r1, r1, 0x10
/* 80144788 00141588  4E 80 00 20 */	blr 

Enter__21zNPCGoalBossSandyLeapFfPv:
/* 8014478C 0014158C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80144790 00141590  7C 08 02 A6 */	mflr r0
/* 80144794 00141594  90 01 00 44 */	stw r0, 0x44(r1)
/* 80144798 00141598  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8014479C 0014159C  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 801447A0 001415A0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801447A4 001415A4  93 C1 00 28 */	stw r30, 0x28(r1)
/* 801447A8 001415A8  93 A1 00 24 */	stw r29, 0x24(r1)
/* 801447AC 001415AC  7C 7D 1B 78 */	mr r29, r3
/* 801447B0 001415B0  3C 60 80 3C */	lis r3, globals@ha
/* 801447B4 001415B4  80 DD 00 18 */	lwz r6, 0x18(r29)
/* 801447B8 001415B8  38 00 00 00 */	li r0, 0
/* 801447BC 001415BC  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 801447C0 001415C0  38 A3 05 58 */	addi r5, r3, globals@l
/* 801447C4 001415C4  83 E6 00 00 */	lwz r31, 0(r6)
/* 801447C8 001415C8  FF E0 08 90 */	fmr f31, f1
/* 801447CC 001415CC  7C 9E 23 78 */	mr r30, r4
/* 801447D0 001415D0  D0 1D 00 4C */	stfs f0, 0x4c(r29)
/* 801447D4 001415D4  90 1D 00 50 */	stw r0, 0x50(r29)
/* 801447D8 001415D8  80 1F 02 C0 */	lwz r0, 0x2c0(r31)
/* 801447DC 001415DC  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 801447E0 001415E0  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 801447E4 001415E4  80 1F 02 C0 */	lwz r0, 0x2c0(r31)
/* 801447E8 001415E8  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 801447EC 001415EC  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 801447F0 001415F0  80 65 07 04 */	lwz r3, 0x704(r5)
/* 801447F4 001415F4  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 801447F8 001415F8  C0 03 00 30 */	lfs f0, 0x30(r3)
/* 801447FC 001415FC  D0 1D 00 5C */	stfs f0, 0x5c(r29)
/* 80144800 00141600  80 65 07 04 */	lwz r3, 0x704(r5)
/* 80144804 00141604  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80144808 00141608  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 8014480C 0014160C  D0 1D 00 60 */	stfs f0, 0x60(r29)
/* 80144810 00141610  80 1F 02 D8 */	lwz r0, 0x2d8(r31)
/* 80144814 00141614  2C 00 00 02 */	cmpwi r0, 2
/* 80144818 00141618  40 82 00 74 */	bne lbl_8014488C
/* 8014481C 0014161C  C0 3D 00 5C */	lfs f1, 0x5c(r29)
/* 80144820 00141620  38 61 00 08 */	addi r3, r1, 8
/* 80144824 00141624  C0 1F 03 6C */	lfs f0, 0x36c(r31)
/* 80144828 00141628  EC 01 00 28 */	fsubs f0, f1, f0
/* 8014482C 0014162C  D0 01 00 08 */	stfs f0, 8(r1)
/* 80144830 00141630  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80144834 00141634  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80144838 00141638  C0 3D 00 60 */	lfs f1, 0x60(r29)
/* 8014483C 0014163C  C0 1F 03 74 */	lfs f0, 0x374(r31)
/* 80144840 00141640  EC 01 00 28 */	fsubs f0, f1, f0
/* 80144844 00141644  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80144848 00141648  4B ED 08 85 */	bl xVec3Length2__FPC5xVec3
/* 8014484C 0014164C  C0 02 A5 58 */	lfs f0, _1196-_SDA2_BASE_(r2)
/* 80144850 00141650  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80144854 00141654  40 80 00 38 */	bge lbl_8014488C
/* 80144858 00141658  4B EC 5F A5 */	bl xsqrt__Ff
/* 8014485C 0014165C  C0 02 A4 F4 */	lfs f0, _1035-_SDA2_BASE_(r2)
/* 80144860 00141660  38 61 00 08 */	addi r3, r1, 8
/* 80144864 00141664  EC 20 08 24 */	fdivs f1, f0, f1
/* 80144868 00141668  4B ED 70 D1 */	bl xVec3SMulBy__FP5xVec3f
/* 8014486C 0014166C  C0 21 00 08 */	lfs f1, 8(r1)
/* 80144870 00141670  C0 1F 03 6C */	lfs f0, 0x36c(r31)
/* 80144874 00141674  EC 01 00 2A */	fadds f0, f1, f0
/* 80144878 00141678  D0 1D 00 5C */	stfs f0, 0x5c(r29)
/* 8014487C 0014167C  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80144880 00141680  C0 1F 03 74 */	lfs f0, 0x374(r31)
/* 80144884 00141684  EC 01 00 2A */	fadds f0, f1, f0
/* 80144888 00141688  D0 1D 00 60 */	stfs f0, 0x60(r29)
lbl_8014488C:
/* 8014488C 0014168C  C0 5D 00 5C */	lfs f2, 0x5c(r29)
/* 80144890 00141690  C0 22 A5 14 */	lfs f1, _1064-_SDA2_BASE_(r2)
/* 80144894 00141694  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80144898 00141698  40 80 00 34 */	bge lbl_801448CC
/* 8014489C 0014169C  C0 02 A6 14 */	lfs f0, _2582-_SDA2_BASE_(r2)
/* 801448A0 001416A0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801448A4 001416A4  40 81 00 28 */	ble lbl_801448CC
/* 801448A8 001416A8  C0 5D 00 60 */	lfs f2, 0x60(r29)
/* 801448AC 001416AC  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 801448B0 001416B0  40 80 00 1C */	bge lbl_801448CC
/* 801448B4 001416B4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801448B8 001416B8  40 81 00 14 */	ble lbl_801448CC
/* 801448BC 001416BC  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 801448C0 001416C0  D0 1D 00 5C */	stfs f0, 0x5c(r29)
/* 801448C4 001416C4  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 801448C8 001416C8  D0 1D 00 60 */	stfs f0, 0x60(r29)
lbl_801448CC:
/* 801448CC 001416CC  C0 1D 00 5C */	lfs f0, 0x5c(r29)
/* 801448D0 001416D0  C0 3D 00 60 */	lfs f1, 0x60(r29)
/* 801448D4 001416D4  EC 40 00 32 */	fmuls f2, f0, f0
/* 801448D8 001416D8  C0 02 A5 58 */	lfs f0, _1196-_SDA2_BASE_(r2)
/* 801448DC 001416DC  EC 21 00 72 */	fmuls f1, f1, f1
/* 801448E0 001416E0  EC 22 08 2A */	fadds f1, f2, f1
/* 801448E4 001416E4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801448E8 001416E8  40 81 00 30 */	ble lbl_80144918
/* 801448EC 001416EC  4B EC 5F 11 */	bl xsqrt__Ff
/* 801448F0 001416F0  C0 42 A4 CC */	lfs f2, __831-_SDA2_BASE_(r2)
/* 801448F4 001416F4  C0 02 A4 F4 */	lfs f0, _1035-_SDA2_BASE_(r2)
/* 801448F8 001416F8  EC 42 08 24 */	fdivs f2, f2, f1
/* 801448FC 001416FC  C0 3D 00 5C */	lfs f1, 0x5c(r29)
/* 80144900 00141700  EC 40 00 B2 */	fmuls f2, f0, f2
/* 80144904 00141704  EC 01 00 B2 */	fmuls f0, f1, f2
/* 80144908 00141708  D0 1D 00 5C */	stfs f0, 0x5c(r29)
/* 8014490C 0014170C  C0 1D 00 60 */	lfs f0, 0x60(r29)
/* 80144910 00141710  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80144914 00141714  D0 1D 00 60 */	stfs f0, 0x60(r29)
lbl_80144918:
/* 80144918 00141718  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 8014491C 0014171C  38 00 00 00 */	li r0, 0
/* 80144920 00141720  C0 1D 00 5C */	lfs f0, 0x5c(r29)
/* 80144924 00141724  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80144928 00141728  C0 23 00 30 */	lfs f1, 0x30(r3)
/* 8014492C 0014172C  EC 01 00 28 */	fsubs f0, f1, f0
/* 80144930 00141730  D0 1D 00 54 */	stfs f0, 0x54(r29)
/* 80144934 00141734  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 80144938 00141738  C0 1D 00 60 */	lfs f0, 0x60(r29)
/* 8014493C 0014173C  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80144940 00141740  C0 23 00 38 */	lfs f1, 0x38(r3)
/* 80144944 00141744  EC 01 00 28 */	fsubs f0, f1, f0
/* 80144948 00141748  D0 1D 00 58 */	stfs f0, 0x58(r29)
/* 8014494C 0014174C  90 0D 96 88 */	stw r0, sNumAttacks-_SDA_BASE_(r13)
/* 80144950 00141750  90 0D 96 8C */	stw r0, sDidClothesline-_SDA_BASE_(r13)
/* 80144954 00141754  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 80144958 00141758  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 8014495C 0014175C  FC 40 08 90 */	fmr f2, f1
/* 80144960 00141760  FC 60 08 90 */	fmr f3, f1
/* 80144964 00141764  38 63 00 D4 */	addi r3, r3, 0xd4
/* 80144968 00141768  4B EC A6 95 */	bl xVec3Init__FP5xVec3fff
/* 8014496C 0014176C  FC 20 F8 90 */	fmr f1, f31
/* 80144970 00141770  7F A3 EB 78 */	mr r3, r29
/* 80144974 00141774  7F C4 F3 78 */	mr r4, r30
/* 80144978 00141778  4B F9 07 9D */	bl Enter__14zNPCGoalCommonFfPv
/* 8014497C 0014177C  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 80144980 00141780  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80144984 00141784  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80144988 00141788  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8014498C 0014178C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80144990 00141790  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 80144994 00141794  7C 08 03 A6 */	mtlr r0
/* 80144998 00141798  38 21 00 40 */	addi r1, r1, 0x40
/* 8014499C 0014179C  4E 80 00 20 */	blr 

Process__21zNPCGoalBossSandyLeapFP11en_trantypefPvP6xScene:
/* 801449A0 001417A0  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801449A4 001417A4  7C 08 02 A6 */	mflr r0
/* 801449A8 001417A8  90 01 00 54 */	stw r0, 0x54(r1)
/* 801449AC 001417AC  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 801449B0 001417B0  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 801449B4 001417B4  BF 21 00 24 */	stmw r25, 0x24(r1)
/* 801449B8 001417B8  7C 79 1B 78 */	mr r25, r3
/* 801449BC 001417BC  FF E0 08 90 */	fmr f31, f1
/* 801449C0 001417C0  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 801449C4 001417C4  7C 9A 23 78 */	mr r26, r4
/* 801449C8 001417C8  80 63 00 18 */	lwz r3, 0x18(r3)
/* 801449CC 001417CC  7C BB 2B 78 */	mr r27, r5
/* 801449D0 001417D0  EC 00 F8 2A */	fadds f0, f0, f31
/* 801449D4 001417D4  83 E3 00 00 */	lwz r31, 0(r3)
/* 801449D8 001417D8  7C DC 33 78 */	mr r28, r6
/* 801449DC 001417DC  3B C0 00 00 */	li r30, 0
/* 801449E0 001417E0  3B A0 FF FF */	li r29, -1
/* 801449E4 001417E4  D0 19 00 4C */	stfs f0, 0x4c(r25)
/* 801449E8 001417E8  7F E3 FB 78 */	mr r3, r31
/* 801449EC 001417EC  38 80 00 00 */	li r4, 0
/* 801449F0 001417F0  4B FA E6 89 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 801449F4 001417F4  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 801449F8 001417F8  80 19 00 50 */	lwz r0, 0x50(r25)
/* 801449FC 001417FC  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80144A00 00141800  C0 42 A4 CC */	lfs f2, __831-_SDA2_BASE_(r2)
/* 80144A04 00141804  2C 00 00 02 */	cmpwi r0, 2
/* 80144A08 00141808  80 63 00 08 */	lwz r3, 8(r3)
/* 80144A0C 0014180C  80 63 00 04 */	lwz r3, 4(r3)
/* 80144A10 00141810  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80144A14 00141814  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 80144A18 00141818  EC 82 00 24 */	fdivs f4, f2, f0
/* 80144A1C 0014181C  41 82 00 F4 */	beq lbl_80144B10
/* 80144A20 00141820  40 80 00 14 */	bge lbl_80144A34
/* 80144A24 00141824  2C 00 00 00 */	cmpwi r0, 0
/* 80144A28 00141828  41 82 00 18 */	beq lbl_80144A40
/* 80144A2C 0014182C  40 80 00 70 */	bge lbl_80144A9C
/* 80144A30 00141830  48 00 02 68 */	b lbl_80144C98
lbl_80144A34:
/* 80144A34 00141834  2C 00 00 04 */	cmpwi r0, 4
/* 80144A38 00141838  40 80 02 60 */	bge lbl_80144C98
/* 80144A3C 0014183C  48 00 01 A4 */	b lbl_80144BE0
lbl_80144A40:
/* 80144A40 00141840  C0 02 A5 F0 */	lfs f0, _2264-_SDA2_BASE_(r2)
/* 80144A44 00141844  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80144A48 00141848  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80144A4C 0014184C  40 80 02 4C */	bge lbl_80144C98
/* 80144A50 00141850  38 00 00 01 */	li r0, 1
/* 80144A54 00141854  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 80144A58 00141858  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 80144A5C 0014185C  90 19 00 50 */	stw r0, 0x50(r25)
/* 80144A60 00141860  38 63 06 32 */	addi r3, r3, 0x632
/* 80144A64 00141864  4B F0 77 B1 */	bl xStrHash__FPCc
/* 80144A68 00141868  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 80144A6C 0014186C  7F E6 FB 78 */	mr r6, r31
/* 80144A70 00141870  C0 22 A5 F4 */	lfs f1, _2265-_SDA2_BASE_(r2)
/* 80144A74 00141874  38 80 00 00 */	li r4, 0
/* 80144A78 00141878  FC 80 10 90 */	fmr f4, f2
/* 80144A7C 0014187C  C0 62 A5 D8 */	lfs f3, _2154-_SDA2_BASE_(r2)
/* 80144A80 00141880  38 A0 00 00 */	li r5, 0
/* 80144A84 00141884  38 E0 00 00 */	li r7, 0
/* 80144A88 00141888  4B F0 B1 45 */	bl xSndPlay3D__FUiffUiUiP4xEntf14sound_categoryf
/* 80144A8C 0014188C  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80144A90 00141890  3B A0 00 0D */	li r29, 0xd
/* 80144A94 00141894  D0 19 00 4C */	stfs f0, 0x4c(r25)
/* 80144A98 00141898  48 00 02 00 */	b lbl_80144C98
lbl_80144A9C:
/* 80144A9C 0014189C  C0 02 A5 F0 */	lfs f0, _2264-_SDA2_BASE_(r2)
/* 80144AA0 001418A0  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80144AA4 001418A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80144AA8 001418A8  40 80 00 1C */	bge lbl_80144AC4
/* 80144AAC 001418AC  38 00 00 02 */	li r0, 2
/* 80144AB0 001418B0  3B A0 00 0E */	li r29, 0xe
/* 80144AB4 001418B4  90 19 00 50 */	stw r0, 0x50(r25)
/* 80144AB8 001418B8  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80144ABC 001418BC  D0 19 00 4C */	stfs f0, 0x4c(r25)
/* 80144AC0 001418C0  48 00 01 D8 */	b lbl_80144C98
lbl_80144AC4:
/* 80144AC4 001418C4  C0 42 A5 30 */	lfs f2, _1071-_SDA2_BASE_(r2)
/* 80144AC8 001418C8  EC 61 01 32 */	fmuls f3, f1, f4
/* 80144ACC 001418CC  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 80144AD0 001418D0  EC 02 01 32 */	fmuls f0, f2, f4
/* 80144AD4 001418D4  EC 00 01 32 */	fmuls f0, f0, f4
/* 80144AD8 001418D8  EC 00 00 72 */	fmuls f0, f0, f1
/* 80144ADC 001418DC  EC 01 10 3C */	fnmsubs f0, f1, f0, f2
/* 80144AE0 001418E0  D0 03 00 34 */	stfs f0, 0x34(r3)
/* 80144AE4 001418E4  C0 39 00 54 */	lfs f1, 0x54(r25)
/* 80144AE8 001418E8  C0 19 00 5C */	lfs f0, 0x5c(r25)
/* 80144AEC 001418EC  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 80144AF0 001418F0  EC 01 00 FA */	fmadds f0, f1, f3, f0
/* 80144AF4 001418F4  D0 03 00 30 */	stfs f0, 0x30(r3)
/* 80144AF8 001418F8  C0 39 00 58 */	lfs f1, 0x58(r25)
/* 80144AFC 001418FC  C0 19 00 60 */	lfs f0, 0x60(r25)
/* 80144B00 00141900  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 80144B04 00141904  EC 01 00 FA */	fmadds f0, f1, f3, f0
/* 80144B08 00141908  D0 03 00 38 */	stfs f0, 0x38(r3)
/* 80144B0C 0014190C  48 00 01 8C */	b lbl_80144C98
lbl_80144B10:
/* 80144B10 00141910  C0 02 A5 F0 */	lfs f0, _2264-_SDA2_BASE_(r2)
/* 80144B14 00141914  3B C0 00 01 */	li r30, 1
/* 80144B18 00141918  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80144B1C 0014191C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80144B20 00141920  40 80 00 98 */	bge lbl_80144BB8
/* 80144B24 00141924  38 00 00 03 */	li r0, 3
/* 80144B28 00141928  90 19 00 50 */	stw r0, 0x50(r25)
/* 80144B2C 0014192C  80 1F 02 C0 */	lwz r0, 0x2c0(r31)
/* 80144B30 00141930  60 00 08 00 */	ori r0, r0, 0x800
/* 80144B34 00141934  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 80144B38 00141938  80 9F 07 B4 */	lwz r4, 0x7b4(r31)
/* 80144B3C 0014193C  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 80144B40 00141940  80 A4 00 10 */	lwz r5, 0x10(r4)
/* 80144B44 00141944  80 83 00 4C */	lwz r4, 0x4c(r3)
/* 80144B48 00141948  38 65 00 30 */	addi r3, r5, 0x30
/* 80144B4C 0014194C  38 84 00 30 */	addi r4, r4, 0x30
/* 80144B50 00141950  4B F0 99 8D */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 80144B54 00141954  80 9F 07 B4 */	lwz r4, 0x7b4(r31)
/* 80144B58 00141958  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 80144B5C 0014195C  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 80144B60 00141960  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80144B64 00141964  80 84 00 10 */	lwz r4, 0x10(r4)
/* 80144B68 00141968  38 63 06 3F */	addi r3, r3, 0x63f
/* 80144B6C 0014196C  3B A0 00 0F */	li r29, 0xf
/* 80144B70 00141970  D0 04 00 34 */	stfs f0, 0x34(r4)
/* 80144B74 00141974  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 80144B78 00141978  D0 1F 0D 3C */	stfs f0, 0xd3c(r31)
/* 80144B7C 0014197C  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80144B80 00141980  D0 19 00 4C */	stfs f0, 0x4c(r25)
/* 80144B84 00141984  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80144B88 00141988  80 9F 00 48 */	lwz r4, 0x48(r31)
/* 80144B8C 0014198C  D0 04 00 34 */	stfs f0, 0x34(r4)
/* 80144B90 00141990  4B F0 76 85 */	bl xStrHash__FPCc
/* 80144B94 00141994  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 80144B98 00141998  38 80 00 00 */	li r4, 0
/* 80144B9C 0014199C  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 80144BA0 001419A0  38 A0 00 00 */	li r5, 0
/* 80144BA4 001419A4  FC 60 10 90 */	fmr f3, f2
/* 80144BA8 001419A8  38 C0 00 00 */	li r6, 0
/* 80144BAC 001419AC  38 E0 00 00 */	li r7, 0
/* 80144BB0 001419B0  4B F0 3E 7D */	bl xSndPlay__FUiffUiUiUi14sound_categoryf
/* 80144BB4 001419B4  48 00 00 E4 */	b lbl_80144C98
lbl_80144BB8:
/* 80144BB8 001419B8  C0 22 A5 30 */	lfs f1, _1071-_SDA2_BASE_(r2)
/* 80144BBC 001419BC  C0 59 00 4C */	lfs f2, 0x4c(r25)
/* 80144BC0 001419C0  EC 01 01 32 */	fmuls f0, f1, f4
/* 80144BC4 001419C4  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 80144BC8 001419C8  EC 00 01 32 */	fmuls f0, f0, f4
/* 80144BCC 001419CC  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80144BD0 001419D0  EC 02 00 32 */	fmuls f0, f2, f0
/* 80144BD4 001419D4  EC 01 00 28 */	fsubs f0, f1, f0
/* 80144BD8 001419D8  D0 03 00 34 */	stfs f0, 0x34(r3)
/* 80144BDC 001419DC  48 00 00 BC */	b lbl_80144C98
lbl_80144BE0:
/* 80144BE0 001419E0  C0 39 00 4C */	lfs f1, 0x4c(r25)
/* 80144BE4 001419E4  C0 02 A4 D0 */	lfs f0, _842-_SDA2_BASE_(r2)
/* 80144BE8 001419E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80144BEC 001419EC  40 80 00 AC */	bge lbl_80144C98
/* 80144BF0 001419F0  80 1F 02 C0 */	lwz r0, 0x2c0(r31)
/* 80144BF4 001419F4  3B C0 00 01 */	li r30, 1
/* 80144BF8 001419F8  60 00 00 40 */	ori r0, r0, 0x40
/* 80144BFC 001419FC  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 80144C00 00141A00  80 9F 02 C0 */	lwz r4, 0x2c0(r31)
/* 80144C04 00141A04  54 80 07 BD */	rlwinm. r0, r4, 0, 0x1e, 0x1e
/* 80144C08 00141A08  40 82 00 90 */	bne lbl_80144C98
/* 80144C0C 00141A0C  54 80 07 7B */	rlwinm. r0, r4, 0, 0x1d, 0x1d
/* 80144C10 00141A10  40 82 00 88 */	bne lbl_80144C98
/* 80144C14 00141A14  3C 60 80 3C */	lis r3, globals@ha
/* 80144C18 00141A18  38 63 05 58 */	addi r3, r3, globals@l
/* 80144C1C 00141A1C  80 03 16 D4 */	lwz r0, 0x16d4(r3)
/* 80144C20 00141A20  2C 00 00 00 */	cmpwi r0, 0
/* 80144C24 00141A24  40 82 00 74 */	bne lbl_80144C98
/* 80144C28 00141A28  60 80 00 04 */	ori r0, r4, 4
/* 80144C2C 00141A2C  38 61 00 08 */	addi r3, r1, 8
/* 80144C30 00141A30  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 80144C34 00141A34  38 80 00 00 */	li r4, 0
/* 80144C38 00141A38  C0 02 A6 18 */	lfs f0, _2633-_SDA2_BASE_(r2)
/* 80144C3C 00141A3C  D0 01 00 08 */	stfs f0, 8(r1)
/* 80144C40 00141A40  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80144C44 00141A44  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80144C48 00141A48  C0 02 A5 74 */	lfs f0, _1463-_SDA2_BASE_(r2)
/* 80144C4C 00141A4C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80144C50 00141A50  4B F3 22 DD */	bl CalcJumpImpulse__FP10zJumpParamPC15zPlayerSettings
/* 80144C54 00141A54  3C 60 80 3C */	lis r3, globals@ha
/* 80144C58 00141A58  38 81 00 08 */	addi r4, r1, 8
/* 80144C5C 00141A5C  38 63 05 58 */	addi r3, r3, globals@l
/* 80144C60 00141A60  38 63 06 E0 */	addi r3, r3, 0x6e0
/* 80144C64 00141A64  4B F3 23 29 */	bl zEntPlayerJumpStart__FP4xEntP10zJumpParam
/* 80144C68 00141A68  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 80144C6C 00141A6C  38 60 00 02 */	li r3, 2
/* 80144C70 00141A70  4B F3 BB 21 */	bl zEntPlayer_SNDPlay__F14_tagePlayerSndf
/* 80144C74 00141A74  3C 60 80 3C */	lis r3, globals@ha
/* 80144C78 00141A78  38 80 00 00 */	li r4, 0
/* 80144C7C 00141A7C  38 63 05 58 */	addi r3, r3, globals@l
/* 80144C80 00141A80  38 00 00 01 */	li r0, 1
/* 80144C84 00141A84  90 83 1A B8 */	stw r4, 0x1ab8(r3)
/* 80144C88 00141A88  90 03 1A BC */	stw r0, 0x1abc(r3)
/* 80144C8C 00141A8C  90 83 1A C4 */	stw r4, 0x1ac4(r3)
/* 80144C90 00141A90  90 83 1A C0 */	stw r4, 0x1ac0(r3)
/* 80144C94 00141A94  90 03 17 1C */	stw r0, 0x171c(r3)
lbl_80144C98:
/* 80144C98 00141A98  2C 1E 00 00 */	cmpwi r30, 0
/* 80144C9C 00141A9C  41 82 01 00 */	beq lbl_80144D9C
/* 80144CA0 00141AA0  80 BF 02 B8 */	lwz r5, 0x2b8(r31)
/* 80144CA4 00141AA4  38 C0 00 0C */	li r6, 0xc
/* 80144CA8 00141AA8  20 06 00 0D */	subfic r0, r6, 0xd
/* 80144CAC 00141AAC  80 85 00 00 */	lwz r4, 0(r5)
/* 80144CB0 00141AB0  54 C3 10 3A */	slwi r3, r6, 2
/* 80144CB4 00141AB4  60 84 00 01 */	ori r4, r4, 1
/* 80144CB8 00141AB8  90 85 00 00 */	stw r4, 0(r5)
/* 80144CBC 00141ABC  80 BF 02 B8 */	lwz r5, 0x2b8(r31)
/* 80144CC0 00141AC0  80 85 00 04 */	lwz r4, 4(r5)
/* 80144CC4 00141AC4  60 84 00 01 */	ori r4, r4, 1
/* 80144CC8 00141AC8  90 85 00 04 */	stw r4, 4(r5)
/* 80144CCC 00141ACC  80 BF 02 B8 */	lwz r5, 0x2b8(r31)
/* 80144CD0 00141AD0  80 85 00 08 */	lwz r4, 8(r5)
/* 80144CD4 00141AD4  60 84 00 01 */	ori r4, r4, 1
/* 80144CD8 00141AD8  90 85 00 08 */	stw r4, 8(r5)
/* 80144CDC 00141ADC  80 BF 02 B8 */	lwz r5, 0x2b8(r31)
/* 80144CE0 00141AE0  80 85 00 0C */	lwz r4, 0xc(r5)
/* 80144CE4 00141AE4  60 84 00 01 */	ori r4, r4, 1
/* 80144CE8 00141AE8  90 85 00 0C */	stw r4, 0xc(r5)
/* 80144CEC 00141AEC  80 BF 02 B8 */	lwz r5, 0x2b8(r31)
/* 80144CF0 00141AF0  80 85 00 10 */	lwz r4, 0x10(r5)
/* 80144CF4 00141AF4  60 84 00 01 */	ori r4, r4, 1
/* 80144CF8 00141AF8  90 85 00 10 */	stw r4, 0x10(r5)
/* 80144CFC 00141AFC  80 BF 02 B8 */	lwz r5, 0x2b8(r31)
/* 80144D00 00141B00  80 85 00 14 */	lwz r4, 0x14(r5)
/* 80144D04 00141B04  60 84 00 01 */	ori r4, r4, 1
/* 80144D08 00141B08  90 85 00 14 */	stw r4, 0x14(r5)
/* 80144D0C 00141B0C  80 BF 02 B8 */	lwz r5, 0x2b8(r31)
/* 80144D10 00141B10  80 85 00 18 */	lwz r4, 0x18(r5)
/* 80144D14 00141B14  60 84 00 01 */	ori r4, r4, 1
/* 80144D18 00141B18  90 85 00 18 */	stw r4, 0x18(r5)
/* 80144D1C 00141B1C  80 BF 02 B8 */	lwz r5, 0x2b8(r31)
/* 80144D20 00141B20  80 85 00 1C */	lwz r4, 0x1c(r5)
/* 80144D24 00141B24  60 84 00 01 */	ori r4, r4, 1
/* 80144D28 00141B28  90 85 00 1C */	stw r4, 0x1c(r5)
/* 80144D2C 00141B2C  80 BF 02 B8 */	lwz r5, 0x2b8(r31)
/* 80144D30 00141B30  80 85 00 20 */	lwz r4, 0x20(r5)
/* 80144D34 00141B34  60 84 00 01 */	ori r4, r4, 1
/* 80144D38 00141B38  90 85 00 20 */	stw r4, 0x20(r5)
/* 80144D3C 00141B3C  80 BF 02 B8 */	lwz r5, 0x2b8(r31)
/* 80144D40 00141B40  80 85 00 24 */	lwz r4, 0x24(r5)
/* 80144D44 00141B44  60 84 00 01 */	ori r4, r4, 1
/* 80144D48 00141B48  90 85 00 24 */	stw r4, 0x24(r5)
/* 80144D4C 00141B4C  80 BF 02 B8 */	lwz r5, 0x2b8(r31)
/* 80144D50 00141B50  80 85 00 28 */	lwz r4, 0x28(r5)
/* 80144D54 00141B54  60 84 00 01 */	ori r4, r4, 1
/* 80144D58 00141B58  90 85 00 28 */	stw r4, 0x28(r5)
/* 80144D5C 00141B5C  80 BF 02 B8 */	lwz r5, 0x2b8(r31)
/* 80144D60 00141B60  80 85 00 2C */	lwz r4, 0x2c(r5)
/* 80144D64 00141B64  60 84 00 01 */	ori r4, r4, 1
/* 80144D68 00141B68  90 85 00 2C */	stw r4, 0x2c(r5)
/* 80144D6C 00141B6C  7C 09 03 A6 */	mtctr r0
/* 80144D70 00141B70  2C 06 00 0D */	cmpwi r6, 0xd
/* 80144D74 00141B74  40 80 00 1C */	bge lbl_80144D90
lbl_80144D78:
/* 80144D78 00141B78  80 9F 02 B8 */	lwz r4, 0x2b8(r31)
/* 80144D7C 00141B7C  7C 04 18 2E */	lwzx r0, r4, r3
/* 80144D80 00141B80  60 00 00 01 */	ori r0, r0, 1
/* 80144D84 00141B84  7C 04 19 2E */	stwx r0, r4, r3
/* 80144D88 00141B88  38 63 00 04 */	addi r3, r3, 4
/* 80144D8C 00141B8C  42 00 FF EC */	bdnz lbl_80144D78
lbl_80144D90:
/* 80144D90 00141B90  80 1F 02 C0 */	lwz r0, 0x2c0(r31)
/* 80144D94 00141B94  60 00 00 01 */	ori r0, r0, 1
/* 80144D98 00141B98  90 1F 02 C0 */	stw r0, 0x2c0(r31)
lbl_80144D9C:
/* 80144D9C 00141B9C  2C 1D FF FF */	cmpwi r29, -1
/* 80144DA0 00141BA0  40 81 00 4C */	ble lbl_80144DEC
/* 80144DA4 00141BA4  3C 60 80 2A */	lis r3, g_hash_bossanim@ha
/* 80144DA8 00141BA8  57 A0 10 3A */	slwi r0, r29, 2
/* 80144DAC 00141BAC  38 63 92 68 */	addi r3, r3, g_hash_bossanim@l
/* 80144DB0 00141BB0  7F A3 00 2E */	lwzx r29, r3, r0
/* 80144DB4 00141BB4  28 1D 00 00 */	cmplwi r29, 0
/* 80144DB8 00141BB8  41 82 00 34 */	beq lbl_80144DEC
/* 80144DBC 00141BBC  7F E3 FB 78 */	mr r3, r31
/* 80144DC0 00141BC0  7F A4 EB 78 */	mr r4, r29
/* 80144DC4 00141BC4  38 A0 00 00 */	li r5, 0
/* 80144DC8 00141BC8  4B FA DF C9 */	bl AnimStart__10zNPCCommonFUii
/* 80144DCC 00141BCC  2C 03 00 00 */	cmpwi r3, 0
/* 80144DD0 00141BD0  41 82 00 0C */	beq lbl_80144DDC
/* 80144DD4 00141BD4  93 B9 00 44 */	stw r29, 0x44(r25)
/* 80144DD8 00141BD8  48 00 00 14 */	b lbl_80144DEC
lbl_80144DDC:
/* 80144DDC 00141BDC  7F 23 CB 78 */	mr r3, r25
/* 80144DE0 00141BE0  48 00 18 15 */	bl Name__21zNPCGoalBossSandyLeapFv
/* 80144DE4 00141BE4  38 00 00 00 */	li r0, 0
/* 80144DE8 00141BE8  90 19 00 44 */	stw r0, 0x44(r25)
lbl_80144DEC:
/* 80144DEC 00141BEC  FC 20 F8 90 */	fmr f1, f31
/* 80144DF0 00141BF0  7F 23 CB 78 */	mr r3, r25
/* 80144DF4 00141BF4  7F 44 D3 78 */	mr r4, r26
/* 80144DF8 00141BF8  7F 65 DB 78 */	mr r5, r27
/* 80144DFC 00141BFC  7F 86 E3 78 */	mr r6, r28
/* 80144E00 00141C00  4B FC 9D 49 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
/* 80144E04 00141C04  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 80144E08 00141C08  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80144E0C 00141C0C  BB 21 00 24 */	lmw r25, 0x24(r1)
/* 80144E10 00141C10  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80144E14 00141C14  7C 08 03 A6 */	mtlr r0
/* 80144E18 00141C18  38 21 00 50 */	addi r1, r1, 0x50
/* 80144E1C 00141C1C  4E 80 00 20 */	blr 

Exit__21zNPCGoalBossSandyLeapFfPv:
/* 80144E20 00141C20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80144E24 00141C24  7C 08 02 A6 */	mflr r0
/* 80144E28 00141C28  90 01 00 14 */	stw r0, 0x14(r1)
/* 80144E2C 00141C2C  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80144E30 00141C30  D0 0D 96 84 */	stfs f0, sChaseTimer-_SDA_BASE_(r13)
/* 80144E34 00141C34  4B F9 05 E9 */	bl Exit__5xGoalFfPv
/* 80144E38 00141C38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80144E3C 00141C3C  7C 08 03 A6 */	mtlr r0
/* 80144E40 00141C40  38 21 00 10 */	addi r1, r1, 0x10
/* 80144E44 00141C44  4E 80 00 20 */	blr 

Enter__20zNPCGoalBossSandySitFfPv:
/* 80144E48 00141C48  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80144E4C 00141C4C  7C 08 02 A6 */	mflr r0
/* 80144E50 00141C50  90 01 00 34 */	stw r0, 0x34(r1)
/* 80144E54 00141C54  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80144E58 00141C58  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 80144E5C 00141C5C  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80144E60 00141C60  7C 7D 1B 78 */	mr r29, r3
/* 80144E64 00141C64  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80144E68 00141C68  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80144E6C 00141C6C  38 00 00 00 */	li r0, 0
/* 80144E70 00141C70  FF E0 08 90 */	fmr f31, f1
/* 80144E74 00141C74  7C 9E 23 78 */	mr r30, r4
/* 80144E78 00141C78  83 E3 00 00 */	lwz r31, 0(r3)
/* 80144E7C 00141C7C  D0 1D 00 4C */	stfs f0, 0x4c(r29)
/* 80144E80 00141C80  90 1D 00 54 */	stw r0, 0x54(r29)
/* 80144E84 00141C84  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 80144E88 00141C88  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 80144E8C 00141C8C  FC 40 08 90 */	fmr f2, f1
/* 80144E90 00141C90  FC 60 08 90 */	fmr f3, f1
/* 80144E94 00141C94  38 63 00 D4 */	addi r3, r3, 0xd4
/* 80144E98 00141C98  4B EC A1 65 */	bl xVec3Init__FP5xVec3fff
/* 80144E9C 00141C9C  80 7F 0D 38 */	lwz r3, 0xd38(r31)
/* 80144EA0 00141CA0  54 60 07 7B */	rlwinm. r0, r3, 0, 0x1d, 0x1d
/* 80144EA4 00141CA4  40 82 00 88 */	bne lbl_80144F2C
/* 80144EA8 00141CA8  80 1F 02 D8 */	lwz r0, 0x2d8(r31)
/* 80144EAC 00141CAC  2C 00 00 01 */	cmpwi r0, 1
/* 80144EB0 00141CB0  40 82 00 7C */	bne lbl_80144F2C
/* 80144EB4 00141CB4  54 7B EF BE */	rlwinm r27, r3, 0x1d, 0x1e, 0x1f
/* 80144EB8 00141CB8  28 1B 00 03 */	cmplwi r27, 3
/* 80144EBC 00141CBC  41 80 00 10 */	blt lbl_80144ECC
/* 80144EC0 00141CC0  4B EE BD A9 */	bl xrand__Fv
/* 80144EC4 00141CC4  54 60 05 AF */	rlwinm. r0, r3, 0, 0x16, 0x17
/* 80144EC8 00141CC8  40 82 00 64 */	bne lbl_80144F2C
lbl_80144ECC:
/* 80144ECC 00141CCC  28 1B 00 03 */	cmplwi r27, 3
/* 80144ED0 00141CD0  3B 80 00 02 */	li r28, 2
/* 80144ED4 00141CD4  40 80 00 08 */	bge lbl_80144EDC
/* 80144ED8 00141CD8  7F 7C DB 78 */	mr r28, r27
lbl_80144EDC:
/* 80144EDC 00141CDC  80 7F 0D 34 */	lwz r3, 0xd34(r31)
/* 80144EE0 00141CE0  3C 80 80 33 */	lis r4, sNFSoundValue@ha
/* 80144EE4 00141CE4  38 84 80 9C */	addi r4, r4, sNFSoundValue@l
/* 80144EE8 00141CE8  57 80 10 3A */	slwi r0, r28, 2
/* 80144EEC 00141CEC  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80144EF0 00141CF0  7C 84 02 14 */	add r4, r4, r0
/* 80144EF4 00141CF4  80 84 00 0C */	lwz r4, 0xc(r4)
/* 80144EF8 00141CF8  38 A0 00 00 */	li r5, 0
/* 80144EFC 00141CFC  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80144F00 00141D00  38 C0 FF FF */	li r6, -1
/* 80144F04 00141D04  7D 89 03 A6 */	mtctr r12
/* 80144F08 00141D08  4E 80 04 21 */	bctrl 
/* 80144F0C 00141D0C  80 7F 0D 38 */	lwz r3, 0xd38(r31)
/* 80144F10 00141D10  38 1C 00 01 */	addi r0, r28, 1
/* 80144F14 00141D14  54 00 18 38 */	slwi r0, r0, 3
/* 80144F18 00141D18  54 63 07 74 */	rlwinm r3, r3, 0, 0x1d, 0x1a
/* 80144F1C 00141D1C  90 7F 0D 38 */	stw r3, 0xd38(r31)
/* 80144F20 00141D20  80 7F 0D 38 */	lwz r3, 0xd38(r31)
/* 80144F24 00141D24  7C 60 03 78 */	or r0, r3, r0
/* 80144F28 00141D28  90 1F 0D 38 */	stw r0, 0xd38(r31)
lbl_80144F2C:
/* 80144F2C 00141D2C  FC 20 F8 90 */	fmr f1, f31
/* 80144F30 00141D30  7F A3 EB 78 */	mr r3, r29
/* 80144F34 00141D34  7F C4 F3 78 */	mr r4, r30
/* 80144F38 00141D38  4B F9 01 DD */	bl Enter__14zNPCGoalCommonFfPv
/* 80144F3C 00141D3C  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 80144F40 00141D40  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80144F44 00141D44  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 80144F48 00141D48  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80144F4C 00141D4C  7C 08 03 A6 */	mtlr r0
/* 80144F50 00141D50  38 21 00 30 */	addi r1, r1, 0x30
/* 80144F54 00141D54  4E 80 00 20 */	blr 

Process__20zNPCGoalBossSandySitFP11en_trantypefPvP6xScene:
/* 80144F58 00141D58  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80144F5C 00141D5C  7C 08 02 A6 */	mflr r0
/* 80144F60 00141D60  90 01 00 64 */	stw r0, 0x64(r1)
/* 80144F64 00141D64  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80144F68 00141D68  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 80144F6C 00141D6C  BF 21 00 34 */	stmw r25, 0x34(r1)
/* 80144F70 00141D70  7C 79 1B 78 */	mr r25, r3
/* 80144F74 00141D74  FF E0 08 90 */	fmr f31, f1
/* 80144F78 00141D78  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 80144F7C 00141D7C  3C 60 80 3C */	lis r3, globals@ha
/* 80144F80 00141D80  80 F9 00 18 */	lwz r7, 0x18(r25)
/* 80144F84 00141D84  38 63 05 58 */	addi r3, r3, globals@l
/* 80144F88 00141D88  EC 00 F8 2A */	fadds f0, f0, f31
/* 80144F8C 00141D8C  83 C7 00 00 */	lwz r30, 0(r7)
/* 80144F90 00141D90  7C 9A 23 78 */	mr r26, r4
/* 80144F94 00141D94  7C BB 2B 78 */	mr r27, r5
/* 80144F98 00141D98  7C DC 33 78 */	mr r28, r6
/* 80144F9C 00141D9C  D0 19 00 4C */	stfs f0, 0x4c(r25)
/* 80144FA0 00141DA0  80 9E 07 C4 */	lwz r4, 0x7c4(r30)
/* 80144FA4 00141DA4  80 03 17 B0 */	lwz r0, 0x17b0(r3)
/* 80144FA8 00141DA8  7C 04 00 40 */	cmplw r4, r0
/* 80144FAC 00141DAC  40 82 00 18 */	bne lbl_80144FC4
/* 80144FB0 00141DB0  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 80144FB4 00141DB4  38 64 01 A0 */	addi r3, r4, 0x1a0
/* 80144FB8 00141DB8  FC 40 08 90 */	fmr f2, f1
/* 80144FBC 00141DBC  FC 60 08 90 */	fmr f3, f1
/* 80144FC0 00141DC0  4B EC A0 3D */	bl xVec3Init__FP5xVec3fff
lbl_80144FC4:
/* 80144FC4 00141DC4  80 19 00 54 */	lwz r0, 0x54(r25)
/* 80144FC8 00141DC8  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80144FCC 00141DCC  40 82 00 68 */	bne lbl_80145034
/* 80144FD0 00141DD0  3C 60 80 3C */	lis r3, globals@ha
/* 80144FD4 00141DD4  C0 02 A4 D8 */	lfs f0, _864-_SDA2_BASE_(r2)
/* 80144FD8 00141DD8  38 83 05 58 */	addi r4, r3, globals@l
/* 80144FDC 00141DDC  80 64 07 04 */	lwz r3, 0x704(r4)
/* 80144FE0 00141DE0  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80144FE4 00141DE4  C0 23 00 34 */	lfs f1, 0x34(r3)
/* 80144FE8 00141DE8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80144FEC 00141DEC  4C 41 13 82 */	cror 2, 1, 2
/* 80144FF0 00141DF0  40 82 00 44 */	bne lbl_80145034
/* 80144FF4 00141DF4  80 1E 02 C0 */	lwz r0, 0x2c0(r30)
/* 80144FF8 00141DF8  60 00 00 80 */	ori r0, r0, 0x80
/* 80144FFC 00141DFC  90 1E 02 C0 */	stw r0, 0x2c0(r30)
/* 80145000 00141E00  80 1E 05 58 */	lwz r0, 0x558(r30)
/* 80145004 00141E04  90 1E 05 5C */	stw r0, 0x55c(r30)
/* 80145008 00141E08  80 64 07 04 */	lwz r3, 0x704(r4)
/* 8014500C 00141E0C  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80145010 00141E10  C0 03 00 30 */	lfs f0, 0x30(r3)
/* 80145014 00141E14  D0 1E 05 F0 */	stfs f0, 0x5f0(r30)
/* 80145018 00141E18  C0 02 A5 48 */	lfs f0, _1192-_SDA2_BASE_(r2)
/* 8014501C 00141E1C  D0 1E 05 F4 */	stfs f0, 0x5f4(r30)
/* 80145020 00141E20  80 64 07 04 */	lwz r3, 0x704(r4)
/* 80145024 00141E24  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80145028 00141E28  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 8014502C 00141E2C  D0 1E 05 F8 */	stfs f0, 0x5f8(r30)
/* 80145030 00141E30  48 00 00 10 */	b lbl_80145040
lbl_80145034:
/* 80145034 00141E34  80 1E 02 C0 */	lwz r0, 0x2c0(r30)
/* 80145038 00141E38  54 00 06 6E */	rlwinm r0, r0, 0, 0x19, 0x17
/* 8014503C 00141E3C  90 1E 02 C0 */	stw r0, 0x2c0(r30)
lbl_80145040:
/* 80145040 00141E40  C0 2D 84 88 */	lfs f1, sHeadPopOffFactor-_SDA_BASE_(r13)
/* 80145044 00141E44  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80145048 00141E48  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014504C 00141E4C  40 81 03 60 */	ble lbl_801453AC
/* 80145050 00141E50  80 79 00 54 */	lwz r3, 0x54(r25)
/* 80145054 00141E54  54 60 07 FF */	clrlwi. r0, r3, 0x1f
/* 80145058 00141E58  40 82 03 54 */	bne lbl_801453AC
/* 8014505C 00141E5C  80 1E 02 D8 */	lwz r0, 0x2d8(r30)
/* 80145060 00141E60  2C 00 00 03 */	cmpwi r0, 3
/* 80145064 00141E64  41 82 03 48 */	beq lbl_801453AC
/* 80145068 00141E68  60 60 00 01 */	ori r0, r3, 1
/* 8014506C 00141E6C  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 80145070 00141E70  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 80145074 00141E74  90 19 00 54 */	stw r0, 0x54(r25)
/* 80145078 00141E78  38 63 05 D5 */	addi r3, r3, 0x5d5
/* 8014507C 00141E7C  4B F0 71 99 */	bl xStrHash__FPCc
/* 80145080 00141E80  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 80145084 00141E84  7F C6 F3 78 */	mr r6, r30
/* 80145088 00141E88  C0 22 A5 E0 */	lfs f1, _2156-_SDA2_BASE_(r2)
/* 8014508C 00141E8C  38 80 00 00 */	li r4, 0
/* 80145090 00141E90  FC 80 10 90 */	fmr f4, f2
/* 80145094 00141E94  C0 62 A5 D8 */	lfs f3, _2154-_SDA2_BASE_(r2)
/* 80145098 00141E98  38 A0 00 00 */	li r5, 0
/* 8014509C 00141E9C  38 E0 00 00 */	li r7, 0
/* 801450A0 00141EA0  4B F0 AB 2D */	bl xSndPlay3D__FUiffUiUiP4xEntf14sound_categoryf
/* 801450A4 00141EA4  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 801450A8 00141EA8  38 80 00 0A */	li r4, 0xa
/* 801450AC 00141EAC  D0 19 00 4C */	stfs f0, 0x4c(r25)
/* 801450B0 00141EB0  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 801450B4 00141EB4  4B ED A5 3D */	bl zEntEvent__FP5xBaseUi
/* 801450B8 00141EB8  80 BE 07 C4 */	lwz r5, 0x7c4(r30)
/* 801450BC 00141EBC  3C 60 80 2A */	lis r3, sBone@ha
/* 801450C0 00141EC0  38 00 00 20 */	li r0, 0x20
/* 801450C4 00141EC4  88 85 00 1C */	lbz r4, 0x1c(r5)
/* 801450C8 00141EC8  38 63 98 C8 */	addi r3, r3, sBone@l
/* 801450CC 00141ECC  60 84 00 08 */	ori r4, r4, 8
/* 801450D0 00141ED0  98 85 00 1C */	stb r4, 0x1c(r5)
/* 801450D4 00141ED4  80 9E 07 C4 */	lwz r4, 0x7c4(r30)
/* 801450D8 00141ED8  98 04 01 E4 */	stb r0, 0x1e4(r4)
/* 801450DC 00141EDC  80 9E 07 C4 */	lwz r4, 0x7c4(r30)
/* 801450E0 00141EE0  98 04 01 E5 */	stb r0, 0x1e5(r4)
/* 801450E4 00141EE4  80 9E 07 C4 */	lwz r4, 0x7c4(r30)
/* 801450E8 00141EE8  80 BE 00 24 */	lwz r5, 0x24(r30)
/* 801450EC 00141EEC  80 03 00 04 */	lwz r0, 4(r3)
/* 801450F0 00141EF0  80 84 00 24 */	lwz r4, 0x24(r4)
/* 801450F4 00141EF4  80 A5 00 4C */	lwz r5, 0x4c(r5)
/* 801450F8 00141EF8  54 00 30 32 */	slwi r0, r0, 6
/* 801450FC 00141EFC  80 64 00 4C */	lwz r3, 0x4c(r4)
/* 80145100 00141F00  7C 85 02 14 */	add r4, r5, r0
/* 80145104 00141F04  4B EE DB 15 */	bl xMat4x3Mul__FP7xMat4x3PC7xMat4x3PC7xMat4x3
/* 80145108 00141F08  80 BE 07 C4 */	lwz r5, 0x7c4(r30)
/* 8014510C 00141F0C  38 61 00 14 */	addi r3, r1, 0x14
/* 80145110 00141F10  80 85 00 24 */	lwz r4, 0x24(r5)
/* 80145114 00141F14  38 A5 01 94 */	addi r5, r5, 0x194
/* 80145118 00141F18  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8014511C 00141F1C  48 00 14 75 */	bl xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 80145120 00141F20  80 7E 02 B4 */	lwz r3, 0x2b4(r30)
/* 80145124 00141F24  80 BE 07 C4 */	lwz r5, 0x7c4(r30)
/* 80145128 00141F28  80 83 00 04 */	lwz r4, 4(r3)
/* 8014512C 00141F2C  38 65 00 88 */	addi r3, r5, 0x88
/* 80145130 00141F30  38 84 00 88 */	addi r4, r4, 0x88
/* 80145134 00141F34  4B F0 93 A9 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 80145138 00141F38  80 9E 07 C4 */	lwz r4, 0x7c4(r30)
/* 8014513C 00141F3C  38 A1 00 14 */	addi r5, r1, 0x14
/* 80145140 00141F40  80 64 00 24 */	lwz r3, 0x24(r4)
/* 80145144 00141F44  38 84 00 88 */	addi r4, r4, 0x88
/* 80145148 00141F48  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8014514C 00141F4C  38 63 00 30 */	addi r3, r3, 0x30
/* 80145150 00141F50  4B EC 95 41 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 80145154 00141F54  80 9E 00 24 */	lwz r4, 0x24(r30)
/* 80145158 00141F58  38 00 00 00 */	li r0, 0
/* 8014515C 00141F5C  A0 64 00 44 */	lhz r3, 0x44(r4)
/* 80145160 00141F60  54 63 04 3C */	rlwinm r3, r3, 0, 0x10, 0x1e
/* 80145164 00141F64  B0 64 00 44 */	sth r3, 0x44(r4)
/* 80145168 00141F68  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8014516C 00141F6C  80 83 00 00 */	lwz r4, 0(r3)
/* 80145170 00141F70  A0 64 00 44 */	lhz r3, 0x44(r4)
/* 80145174 00141F74  54 63 04 3C */	rlwinm r3, r3, 0, 0x10, 0x1e
/* 80145178 00141F78  B0 64 00 44 */	sth r3, 0x44(r4)
/* 8014517C 00141F7C  80 7E 02 B4 */	lwz r3, 0x2b4(r30)
/* 80145180 00141F80  80 63 00 04 */	lwz r3, 4(r3)
/* 80145184 00141F84  98 03 00 22 */	stb r0, 0x22(r3)
/* 80145188 00141F88  80 7E 02 B4 */	lwz r3, 0x2b4(r30)
/* 8014518C 00141F8C  80 63 00 04 */	lwz r3, 4(r3)
/* 80145190 00141F90  98 03 00 23 */	stb r0, 0x23(r3)
/* 80145194 00141F94  80 1E 02 D8 */	lwz r0, 0x2d8(r30)
/* 80145198 00141F98  2C 00 00 01 */	cmpwi r0, 1
/* 8014519C 00141F9C  40 82 00 20 */	bne lbl_801451BC
/* 801451A0 00141FA0  C0 2D 84 88 */	lfs f1, sHeadPopOffFactor-_SDA_BASE_(r13)
/* 801451A4 00141FA4  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 801451A8 00141FA8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801451AC 00141FAC  4C 41 13 82 */	cror 2, 1, 2
/* 801451B0 00141FB0  40 82 00 0C */	bne lbl_801451BC
/* 801451B4 00141FB4  C0 22 A4 F4 */	lfs f1, _1035-_SDA2_BASE_(r2)
/* 801451B8 00141FB8  48 00 00 20 */	b lbl_801451D8
lbl_801451BC:
/* 801451BC 00141FBC  C0 42 A5 14 */	lfs f2, _1064-_SDA2_BASE_(r2)
/* 801451C0 00141FC0  C0 2D 84 88 */	lfs f1, sHeadPopOffFactor-_SDA_BASE_(r13)
/* 801451C4 00141FC4  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 801451C8 00141FC8  EC 22 00 72 */	fmuls f1, f2, f1
/* 801451CC 00141FCC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801451D0 00141FD0  40 80 00 08 */	bge lbl_801451D8
/* 801451D4 00141FD4  FC 20 00 90 */	fmr f1, f0
lbl_801451D8:
/* 801451D8 00141FD8  2C 00 00 01 */	cmpwi r0, 1
/* 801451DC 00141FDC  40 82 00 FC */	bne lbl_801452D8
/* 801451E0 00141FE0  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 801451E4 00141FE4  C0 02 A5 10 */	lfs f0, _1063-_SDA2_BASE_(r2)
/* 801451E8 00141FE8  80 63 00 D0 */	lwz r3, 0xd0(r3)
/* 801451EC 00141FEC  EC 20 00 72 */	fmuls f1, f0, f1
/* 801451F0 00141FF0  C0 03 00 00 */	lfs f0, 0(r3)
/* 801451F4 00141FF4  EC 21 00 32 */	fmuls f1, f1, f0
/* 801451F8 00141FF8  4B EC 56 05 */	bl xsqrt__Ff
/* 801451FC 00141FFC  FC 40 08 90 */	fmr f2, f1
/* 80145200 00142000  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 80145204 00142004  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 80145208 00142008  FC 60 08 90 */	fmr f3, f1
/* 8014520C 0014200C  38 63 01 A0 */	addi r3, r3, 0x1a0
/* 80145210 00142010  4B EC 9D ED */	bl xVec3Init__FP5xVec3fff
/* 80145214 00142014  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 80145218 00142018  C0 22 A5 10 */	lfs f1, _1063-_SDA2_BASE_(r2)
/* 8014521C 0014201C  C0 03 01 A4 */	lfs f0, 0x1a4(r3)
/* 80145220 00142020  80 63 00 D0 */	lwz r3, 0xd0(r3)
/* 80145224 00142024  EC 21 00 32 */	fmuls f1, f1, f0
/* 80145228 00142028  C0 03 00 00 */	lfs f0, 0(r3)
/* 8014522C 0014202C  EC 01 00 24 */	fdivs f0, f1, f0
/* 80145230 00142030  D0 19 00 50 */	stfs f0, 0x50(r25)
/* 80145234 00142034  4B EE BA 55 */	bl xurand__Fv
/* 80145238 00142038  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 8014523C 0014203C  D0 23 01 AC */	stfs f1, 0x1ac(r3)
/* 80145240 00142040  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80145244 00142044  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 80145248 00142048  D0 03 01 B0 */	stfs f0, 0x1b0(r3)
/* 8014524C 0014204C  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 80145250 00142050  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 80145254 00142054  C0 03 01 AC */	lfs f0, 0x1ac(r3)
/* 80145258 00142058  EC 00 00 32 */	fmuls f0, f0, f0
/* 8014525C 0014205C  EC 21 00 28 */	fsubs f1, f1, f0
/* 80145260 00142060  4B EC 55 9D */	bl xsqrt__Ff
/* 80145264 00142064  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 80145268 00142068  D0 23 01 B4 */	stfs f1, 0x1b4(r3)
/* 8014526C 0014206C  C0 2D 84 88 */	lfs f1, sHeadPopOffFactor-_SDA_BASE_(r13)
/* 80145270 00142070  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 80145274 00142074  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80145278 00142078  4C 41 13 82 */	cror 2, 1, 2
/* 8014527C 0014207C  40 82 00 0C */	bne lbl_80145288
/* 80145280 00142080  38 00 00 03 */	li r0, 3
/* 80145284 00142084  48 00 00 1C */	b lbl_801452A0
lbl_80145288:
/* 80145288 00142088  C0 02 A5 78 */	lfs f0, _1464-_SDA2_BASE_(r2)
/* 8014528C 0014208C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80145290 00142090  40 81 00 0C */	ble lbl_8014529C
/* 80145294 00142094  38 00 00 02 */	li r0, 2
/* 80145298 00142098  48 00 00 08 */	b lbl_801452A0
lbl_8014529C:
/* 8014529C 0014209C  38 00 00 01 */	li r0, 1
lbl_801452A0:
/* 801452A0 001420A0  6C 03 80 00 */	xoris r3, r0, 0x8000
/* 801452A4 001420A4  3C 00 43 30 */	lis r0, 0x4330
/* 801452A8 001420A8  90 61 00 24 */	stw r3, 0x24(r1)
/* 801452AC 001420AC  C8 42 A5 00 */	lfd f2, _1039-_SDA2_BASE_(r2)
/* 801452B0 001420B0  90 01 00 20 */	stw r0, 0x20(r1)
/* 801452B4 001420B4  C0 62 A4 DC */	lfs f3, _1029-_SDA2_BASE_(r2)
/* 801452B8 001420B8  C8 21 00 20 */	lfd f1, 0x20(r1)
/* 801452BC 001420BC  C0 19 00 50 */	lfs f0, 0x50(r25)
/* 801452C0 001420C0  EC 21 10 28 */	fsubs f1, f1, f2
/* 801452C4 001420C4  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 801452C8 001420C8  EC 23 00 72 */	fmuls f1, f3, f1
/* 801452CC 001420CC  EC 01 00 24 */	fdivs f0, f1, f0
/* 801452D0 001420D0  D0 03 01 D0 */	stfs f0, 0x1d0(r3)
/* 801452D4 001420D4  48 00 00 CC */	b lbl_801453A0
lbl_801452D8:
/* 801452D8 001420D8  2C 00 00 02 */	cmpwi r0, 2
/* 801452DC 001420DC  40 82 00 C4 */	bne lbl_801453A0
/* 801452E0 001420E0  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 801452E4 001420E4  38 03 00 88 */	addi r0, r3, 0x88
/* 801452E8 001420E8  90 0D 96 98 */	stw r0, sCamSubTarget-_SDA_BASE_(r13)
/* 801452EC 001420EC  80 9E 07 C4 */	lwz r4, 0x7c4(r30)
/* 801452F0 001420F0  C0 22 A4 EC */	lfs f1, _1033-_SDA2_BASE_(r2)
/* 801452F4 001420F4  38 64 01 A0 */	addi r3, r4, 0x1a0
/* 801452F8 001420F8  38 84 00 88 */	addi r4, r4, 0x88
/* 801452FC 001420FC  4B EC 5D 95 */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 80145300 00142100  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 80145304 00142104  38 63 01 A0 */	addi r3, r3, 0x1a0
/* 80145308 00142108  7C 64 1B 78 */	mr r4, r3
/* 8014530C 0014210C  4B F0 8F E5 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 80145310 00142110  C0 02 A6 1C */	lfs f0, _2741-_SDA2_BASE_(r2)
/* 80145314 00142114  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80145318 00142118  40 80 00 20 */	bge lbl_80145338
/* 8014531C 0014211C  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 80145320 00142120  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 80145324 00142124  C0 42 A5 10 */	lfs f2, _1063-_SDA2_BASE_(r2)
/* 80145328 00142128  38 63 01 A0 */	addi r3, r3, 0x1a0
/* 8014532C 0014212C  C0 62 A4 C8 */	lfs f3, __830-_SDA2_BASE_(r2)
/* 80145330 00142130  4B EC 9C CD */	bl xVec3Init__FP5xVec3fff
/* 80145334 00142134  48 00 00 10 */	b lbl_80145344
lbl_80145338:
/* 80145338 00142138  C0 02 A5 10 */	lfs f0, _1063-_SDA2_BASE_(r2)
/* 8014533C 0014213C  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 80145340 00142140  D0 03 01 A4 */	stfs f0, 0x1a4(r3)
lbl_80145344:
/* 80145344 00142144  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 80145348 00142148  C0 22 A5 34 */	lfs f1, _1072-_SDA2_BASE_(r2)
/* 8014534C 0014214C  38 63 01 A0 */	addi r3, r3, 0x1a0
/* 80145350 00142150  4B ED 65 E9 */	bl xVec3SMulBy__FP5xVec3f
/* 80145354 00142154  4B EE B9 35 */	bl xurand__Fv
/* 80145358 00142158  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 8014535C 0014215C  D0 23 01 AC */	stfs f1, 0x1ac(r3)
/* 80145360 00142160  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80145364 00142164  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 80145368 00142168  D0 03 01 B0 */	stfs f0, 0x1b0(r3)
/* 8014536C 0014216C  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 80145370 00142170  C0 22 A4 CC */	lfs f1, __831-_SDA2_BASE_(r2)
/* 80145374 00142174  C0 03 01 AC */	lfs f0, 0x1ac(r3)
/* 80145378 00142178  EC 00 00 32 */	fmuls f0, f0, f0
/* 8014537C 0014217C  EC 21 00 28 */	fsubs f1, f1, f0
/* 80145380 00142180  4B EC 54 7D */	bl xsqrt__Ff
/* 80145384 00142184  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 80145388 00142188  D0 23 01 B4 */	stfs f1, 0x1b4(r3)
/* 8014538C 0014218C  C0 02 A6 20 */	lfs f0, _2742-_SDA2_BASE_(r2)
/* 80145390 00142190  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 80145394 00142194  D0 03 01 D0 */	stfs f0, 0x1d0(r3)
/* 80145398 00142198  C0 02 A4 E8 */	lfs f0, _1032-_SDA2_BASE_(r2)
/* 8014539C 0014219C  D0 19 00 50 */	stfs f0, 0x50(r25)
lbl_801453A0:
/* 801453A0 001421A0  C0 02 A4 EC */	lfs f0, _1033-_SDA2_BASE_(r2)
/* 801453A4 001421A4  D0 0D 84 88 */	stfs f0, sHeadPopOffFactor-_SDA_BASE_(r13)
/* 801453A8 001421A8  48 00 02 BC */	b lbl_80145664
lbl_801453AC:
/* 801453AC 001421AC  80 1E 02 D8 */	lwz r0, 0x2d8(r30)
/* 801453B0 001421B0  2C 00 00 01 */	cmpwi r0, 1
/* 801453B4 001421B4  40 82 02 B0 */	bne lbl_80145664
/* 801453B8 001421B8  80 99 00 54 */	lwz r4, 0x54(r25)
/* 801453BC 001421BC  54 80 07 FF */	clrlwi. r0, r4, 0x1f
/* 801453C0 001421C0  41 82 02 A4 */	beq lbl_80145664
/* 801453C4 001421C4  54 80 07 BD */	rlwinm. r0, r4, 0, 0x1e, 0x1e
/* 801453C8 001421C8  40 82 02 9C */	bne lbl_80145664
/* 801453CC 001421CC  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 801453D0 001421D0  C0 02 A4 F4 */	lfs f0, _1035-_SDA2_BASE_(r2)
/* 801453D4 001421D4  80 63 00 24 */	lwz r3, 0x24(r3)
/* 801453D8 001421D8  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 801453DC 001421DC  C0 23 00 34 */	lfs f1, 0x34(r3)
/* 801453E0 001421E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801453E4 001421E4  40 81 02 80 */	ble lbl_80145664
/* 801453E8 001421E8  60 80 00 02 */	ori r0, r4, 2
/* 801453EC 001421EC  3C 60 80 33 */	lis r3, sNFSoundValue@ha
/* 801453F0 001421F0  90 19 00 54 */	stw r0, 0x54(r25)
/* 801453F4 001421F4  38 83 80 9C */	addi r4, r3, sNFSoundValue@l
/* 801453F8 001421F8  38 A0 00 00 */	li r5, 0
/* 801453FC 001421FC  38 C0 FF FF */	li r6, -1
/* 80145400 00142200  80 7E 0D 34 */	lwz r3, 0xd34(r30)
/* 80145404 00142204  80 1E 02 D4 */	lwz r0, 0x2d4(r30)
/* 80145408 00142208  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 8014540C 0014220C  20 00 00 09 */	subfic r0, r0, 9
/* 80145410 00142210  54 00 10 3A */	slwi r0, r0, 2
/* 80145414 00142214  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80145418 00142218  7C 84 02 14 */	add r4, r4, r0
/* 8014541C 0014221C  80 84 00 18 */	lwz r4, 0x18(r4)
/* 80145420 00142220  7D 89 03 A6 */	mtctr r12
/* 80145424 00142224  4E 80 04 21 */	bctrl 
/* 80145428 00142228  80 1E 0D 38 */	lwz r0, 0xd38(r30)
/* 8014542C 0014222C  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 80145430 00142230  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 80145434 00142234  60 00 00 04 */	ori r0, r0, 4
/* 80145438 00142238  90 1E 0D 38 */	stw r0, 0xd38(r30)
/* 8014543C 0014223C  38 63 05 F4 */	addi r3, r3, 0x5f4
/* 80145440 00142240  80 9E 02 D4 */	lwz r4, 0x2d4(r30)
/* 80145444 00142244  38 04 FF FF */	addi r0, r4, -1
/* 80145448 00142248  90 1E 02 D4 */	stw r0, 0x2d4(r30)
/* 8014544C 0014224C  4B F0 6D C9 */	bl xStrHash__FPCc
/* 80145450 00142250  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 80145454 00142254  7F C6 F3 78 */	mr r6, r30
/* 80145458 00142258  C0 22 A6 00 */	lfs f1, _2517-_SDA2_BASE_(r2)
/* 8014545C 0014225C  38 80 00 00 */	li r4, 0
/* 80145460 00142260  FC 80 10 90 */	fmr f4, f2
/* 80145464 00142264  C0 62 A6 04 */	lfs f3, _2518-_SDA2_BASE_(r2)
/* 80145468 00142268  38 A0 00 00 */	li r5, 0
/* 8014546C 0014226C  38 E0 00 00 */	li r7, 0
/* 80145470 00142270  4B F0 A7 5D */	bl xSndPlay3D__FUiffUiUiP4xEntf14sound_categoryf
/* 80145474 00142274  7F C3 F3 78 */	mr r3, r30
/* 80145478 00142278  7F C4 F3 78 */	mr r4, r30
/* 8014547C 0014227C  38 A0 01 D7 */	li r5, 0x1d7
/* 80145480 00142280  4B ED A2 61 */	bl zEntEvent__FP5xBaseP5xBaseUi
/* 80145484 00142284  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 80145488 00142288  38 00 00 00 */	li r0, 0
/* 8014548C 0014228C  C0 42 A6 14 */	lfs f2, _2582-_SDA2_BASE_(r2)
/* 80145490 00142290  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80145494 00142294  83 E3 00 4C */	lwz r31, 0x4c(r3)
/* 80145498 00142298  C0 1F 00 30 */	lfs f0, 0x30(r31)
/* 8014549C 0014229C  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 801454A0 001422A0  40 81 00 28 */	ble lbl_801454C8
/* 801454A4 001422A4  C0 22 A5 14 */	lfs f1, _1064-_SDA2_BASE_(r2)
/* 801454A8 001422A8  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 801454AC 001422AC  40 80 00 1C */	bge lbl_801454C8
/* 801454B0 001422B0  C0 1F 00 38 */	lfs f0, 0x38(r31)
/* 801454B4 001422B4  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 801454B8 001422B8  40 81 00 10 */	ble lbl_801454C8
/* 801454BC 001422BC  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 801454C0 001422C0  40 80 00 08 */	bge lbl_801454C8
/* 801454C4 001422C4  38 00 00 01 */	li r0, 1
lbl_801454C8:
/* 801454C8 001422C8  54 1D 06 3F */	clrlwi. r29, r0, 0x18
/* 801454CC 001422CC  40 82 00 20 */	bne lbl_801454EC
/* 801454D0 001422D0  80 1E 02 D4 */	lwz r0, 0x2d4(r30)
/* 801454D4 001422D4  2C 00 00 06 */	cmpwi r0, 6
/* 801454D8 001422D8  40 82 00 A4 */	bne lbl_8014557C
/* 801454DC 001422DC  80 7E 07 B8 */	lwz r3, 0x7b8(r30)
/* 801454E0 001422E0  88 03 00 18 */	lbz r0, 0x18(r3)
/* 801454E4 001422E4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801454E8 001422E8  41 82 00 94 */	beq lbl_8014557C
lbl_801454EC:
/* 801454EC 001422EC  C0 02 A5 48 */	lfs f0, _1192-_SDA2_BASE_(r2)
/* 801454F0 001422F0  D0 1E 0A E8 */	stfs f0, 0xae8(r30)
/* 801454F4 001422F4  80 7E 07 B8 */	lwz r3, 0x7b8(r30)
/* 801454F8 001422F8  88 03 00 18 */	lbz r0, 0x18(r3)
/* 801454FC 001422FC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80145500 00142300  41 82 00 5C */	beq lbl_8014555C
/* 80145504 00142304  80 9E 07 BC */	lwz r4, 0x7bc(r30)
/* 80145508 00142308  38 61 00 08 */	addi r3, r1, 8
/* 8014550C 0014230C  88 04 00 18 */	lbz r0, 0x18(r4)
/* 80145510 00142310  60 00 00 01 */	ori r0, r0, 1
/* 80145514 00142314  98 04 00 18 */	stb r0, 0x18(r4)
/* 80145518 00142318  80 9E 07 B8 */	lwz r4, 0x7b8(r30)
/* 8014551C 0014231C  88 04 00 18 */	lbz r0, 0x18(r4)
/* 80145520 00142320  54 00 06 3C */	rlwinm r0, r0, 0, 0x18, 0x1e
/* 80145524 00142324  98 04 00 18 */	stb r0, 0x18(r4)
/* 80145528 00142328  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 8014552C 0014232C  C0 42 A5 A4 */	lfs f2, _1529-_SDA2_BASE_(r2)
/* 80145530 00142330  FC 60 08 90 */	fmr f3, f1
/* 80145534 00142334  4B EC 9A C9 */	bl xVec3Init__FP5xVec3fff
/* 80145538 00142338  80 7E 07 C8 */	lwz r3, 0x7c8(r30)
/* 8014553C 0014233C  38 A1 00 08 */	addi r5, r1, 8
/* 80145540 00142340  80 9E 07 B8 */	lwz r4, 0x7b8(r30)
/* 80145544 00142344  38 C0 00 00 */	li r6, 0
/* 80145548 00142348  81 83 00 08 */	lwz r12, 8(r3)
/* 8014554C 0014234C  80 84 00 24 */	lwz r4, 0x24(r4)
/* 80145550 00142350  7D 89 03 A6 */	mtctr r12
/* 80145554 00142354  4E 80 04 21 */	bctrl 
/* 80145558 00142358  48 00 00 24 */	b lbl_8014557C
lbl_8014555C:
/* 8014555C 0014235C  80 7E 07 CC */	lwz r3, 0x7cc(r30)
/* 80145560 00142360  38 A0 00 00 */	li r5, 0
/* 80145564 00142364  80 9E 07 BC */	lwz r4, 0x7bc(r30)
/* 80145568 00142368  38 C0 00 00 */	li r6, 0
/* 8014556C 0014236C  81 83 00 08 */	lwz r12, 8(r3)
/* 80145570 00142370  80 84 00 24 */	lwz r4, 0x24(r4)
/* 80145574 00142374  7D 89 03 A6 */	mtctr r12
/* 80145578 00142378  4E 80 04 21 */	bctrl 
lbl_8014557C:
/* 8014557C 0014237C  2C 1D 00 00 */	cmpwi r29, 0
/* 80145580 00142380  40 82 00 B8 */	bne lbl_80145638
/* 80145584 00142384  C0 3F 00 30 */	lfs f1, 0x30(r31)
/* 80145588 00142388  C0 1F 00 38 */	lfs f0, 0x38(r31)
/* 8014558C 0014238C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80145590 00142390  40 81 00 58 */	ble lbl_801455E8
/* 80145594 00142394  FC 00 00 50 */	fneg f0, f0
/* 80145598 00142398  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014559C 0014239C  40 80 00 28 */	bge lbl_801455C4
/* 801455A0 001423A0  80 7E 07 D4 */	lwz r3, 0x7d4(r30)
/* 801455A4 001423A4  38 A0 00 00 */	li r5, 0
/* 801455A8 001423A8  80 9E 07 E0 */	lwz r4, 0x7e0(r30)
/* 801455AC 001423AC  38 C0 00 00 */	li r6, 0
/* 801455B0 001423B0  81 83 00 08 */	lwz r12, 8(r3)
/* 801455B4 001423B4  80 84 00 24 */	lwz r4, 0x24(r4)
/* 801455B8 001423B8  7D 89 03 A6 */	mtctr r12
/* 801455BC 001423BC  4E 80 04 21 */	bctrl 
/* 801455C0 001423C0  48 00 00 78 */	b lbl_80145638
lbl_801455C4:
/* 801455C4 001423C4  80 7E 07 D4 */	lwz r3, 0x7d4(r30)
/* 801455C8 001423C8  38 A0 00 00 */	li r5, 0
/* 801455CC 001423CC  80 9E 07 DC */	lwz r4, 0x7dc(r30)
/* 801455D0 001423D0  38 C0 00 00 */	li r6, 0
/* 801455D4 001423D4  81 83 00 08 */	lwz r12, 8(r3)
/* 801455D8 001423D8  80 84 00 24 */	lwz r4, 0x24(r4)
/* 801455DC 001423DC  7D 89 03 A6 */	mtctr r12
/* 801455E0 001423E0  4E 80 04 21 */	bctrl 
/* 801455E4 001423E4  48 00 00 54 */	b lbl_80145638
lbl_801455E8:
/* 801455E8 001423E8  FC 00 00 50 */	fneg f0, f0
/* 801455EC 001423EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801455F0 001423F0  40 80 00 28 */	bge lbl_80145618
/* 801455F4 001423F4  80 7E 07 D4 */	lwz r3, 0x7d4(r30)
/* 801455F8 001423F8  38 A0 00 00 */	li r5, 0
/* 801455FC 001423FC  80 9E 07 D8 */	lwz r4, 0x7d8(r30)
/* 80145600 00142400  38 C0 00 00 */	li r6, 0
/* 80145604 00142404  81 83 00 08 */	lwz r12, 8(r3)
/* 80145608 00142408  80 84 00 24 */	lwz r4, 0x24(r4)
/* 8014560C 0014240C  7D 89 03 A6 */	mtctr r12
/* 80145610 00142410  4E 80 04 21 */	bctrl 
/* 80145614 00142414  48 00 00 24 */	b lbl_80145638
lbl_80145618:
/* 80145618 00142418  80 7E 07 D4 */	lwz r3, 0x7d4(r30)
/* 8014561C 0014241C  38 A0 00 00 */	li r5, 0
/* 80145620 00142420  80 9E 07 E4 */	lwz r4, 0x7e4(r30)
/* 80145624 00142424  38 C0 00 00 */	li r6, 0
/* 80145628 00142428  81 83 00 08 */	lwz r12, 8(r3)
/* 8014562C 0014242C  80 84 00 24 */	lwz r4, 0x24(r4)
/* 80145630 00142430  7D 89 03 A6 */	mtctr r12
/* 80145634 00142434  4E 80 04 21 */	bctrl 
lbl_80145638:
/* 80145638 00142438  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8014563C 0014243C  38 80 00 00 */	li r4, 0
/* 80145640 00142440  4B FF A0 99 */	bl zNPCBSandy_BossDamageEffect__FP14xModelInstanceUi
/* 80145644 00142444  80 7E 07 C4 */	lwz r3, 0x7c4(r30)
/* 80145648 00142448  38 80 00 00 */	li r4, 0
/* 8014564C 0014244C  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80145650 00142450  4B FF A0 89 */	bl zNPCBSandy_BossDamageEffect__FP14xModelInstanceUi
/* 80145654 00142454  7F 23 CB 78 */	mr r3, r25
/* 80145658 00142458  38 80 00 20 */	li r4, 0x20
/* 8014565C 0014245C  38 A0 00 00 */	li r5, 0
/* 80145660 00142460  4B F8 FC B9 */	bl DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi
lbl_80145664:
/* 80145664 00142464  FC 20 F8 90 */	fmr f1, f31
/* 80145668 00142468  7F 23 CB 78 */	mr r3, r25
/* 8014566C 0014246C  7F 44 D3 78 */	mr r4, r26
/* 80145670 00142470  7F 65 DB 78 */	mr r5, r27
/* 80145674 00142474  7F 86 E3 78 */	mr r6, r28
/* 80145678 00142478  4B FC 94 D1 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
/* 8014567C 0014247C  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 80145680 00142480  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 80145684 00142484  BB 21 00 34 */	lmw r25, 0x34(r1)
/* 80145688 00142488  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8014568C 0014248C  7C 08 03 A6 */	mtlr r0
/* 80145690 00142490  38 21 00 60 */	addi r1, r1, 0x60
/* 80145694 00142494  4E 80 00 20 */	blr 

Exit__20zNPCGoalBossSandySitFfPv:
/* 80145698 00142498  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014569C 0014249C  7C 08 02 A6 */	mflr r0
/* 801456A0 001424A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801456A4 001424A4  80 A3 00 18 */	lwz r5, 0x18(r3)
/* 801456A8 001424A8  80 C5 00 00 */	lwz r6, 0(r5)
/* 801456AC 001424AC  80 06 02 C0 */	lwz r0, 0x2c0(r6)
/* 801456B0 001424B0  54 00 06 6E */	rlwinm r0, r0, 0, 0x19, 0x17
/* 801456B4 001424B4  90 06 02 C0 */	stw r0, 0x2c0(r6)
/* 801456B8 001424B8  80 06 02 C0 */	lwz r0, 0x2c0(r6)
/* 801456BC 001424BC  54 00 06 73 */	rlwinm. r0, r0, 0, 0x19, 0x19
/* 801456C0 001424C0  41 82 00 30 */	beq lbl_801456F0
/* 801456C4 001424C4  3C A0 80 3C */	lis r5, globals@ha
/* 801456C8 001424C8  C0 4D 96 A0 */	lfs f2, sCurrHeight-_SDA_BASE_(r13)
/* 801456CC 001424CC  38 A5 05 58 */	addi r5, r5, globals@l
/* 801456D0 001424D0  80 A5 07 04 */	lwz r5, 0x704(r5)
/* 801456D4 001424D4  80 A5 00 4C */	lwz r5, 0x4c(r5)
/* 801456D8 001424D8  C0 05 00 34 */	lfs f0, 0x34(r5)
/* 801456DC 001424DC  EC 02 00 28 */	fsubs f0, f2, f0
/* 801456E0 001424E0  D0 0D 96 A0 */	stfs f0, sCurrHeight-_SDA_BASE_(r13)
/* 801456E4 001424E4  80 06 02 C0 */	lwz r0, 0x2c0(r6)
/* 801456E8 001424E8  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 801456EC 001424EC  90 06 02 C0 */	stw r0, 0x2c0(r6)
lbl_801456F0:
/* 801456F0 001424F0  4B F8 FD 2D */	bl Exit__5xGoalFfPv
/* 801456F4 001424F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801456F8 001424F8  7C 08 03 A6 */	mtlr r0
/* 801456FC 001424FC  38 21 00 10 */	addi r1, r1, 0x10
/* 80145700 00142500  4E 80 00 20 */	blr 

Enter__22zNPCGoalBossSandyGetUpFfPv:
/* 80145704 00142504  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80145708 00142508  7C 08 02 A6 */	mflr r0
/* 8014570C 0014250C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80145710 00142510  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80145714 00142514  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 80145718 00142518  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8014571C 0014251C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80145720 00142520  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80145724 00142524  7C 7D 1B 78 */	mr r29, r3
/* 80145728 00142528  7C 9E 23 78 */	mr r30, r4
/* 8014572C 0014252C  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80145730 00142530  FF E0 08 90 */	fmr f31, f1
/* 80145734 00142534  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80145738 00142538  38 80 00 25 */	li r4, 0x25
/* 8014573C 0014253C  83 E3 00 00 */	lwz r31, 0(r3)
/* 80145740 00142540  D0 1D 00 4C */	stfs f0, 0x4c(r29)
/* 80145744 00142544  80 1F 02 C0 */	lwz r0, 0x2c0(r31)
/* 80145748 00142548  54 00 06 6E */	rlwinm r0, r0, 0, 0x19, 0x17
/* 8014574C 0014254C  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 80145750 00142550  80 7F 07 C4 */	lwz r3, 0x7c4(r31)
/* 80145754 00142554  4B ED 9E 9D */	bl zEntEvent__FP5xBaseUi
/* 80145758 00142558  3C 60 80 3C */	lis r3, globals@ha
/* 8014575C 0014255C  80 1F 07 C4 */	lwz r0, 0x7c4(r31)
/* 80145760 00142560  38 83 05 58 */	addi r4, r3, globals@l
/* 80145764 00142564  80 64 17 B0 */	lwz r3, 0x17b0(r4)
/* 80145768 00142568  7C 03 00 40 */	cmplw r3, r0
/* 8014576C 0014256C  40 82 00 0C */	bne lbl_80145778
/* 80145770 00142570  38 00 00 00 */	li r0, 0
/* 80145774 00142574  90 04 17 B0 */	stw r0, 0x17b0(r4)
lbl_80145778:
/* 80145778 00142578  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 8014577C 0014257C  38 00 00 10 */	li r0, 0x10
/* 80145780 00142580  A0 64 00 44 */	lhz r3, 0x44(r4)
/* 80145784 00142584  60 63 00 01 */	ori r3, r3, 1
/* 80145788 00142588  B0 64 00 44 */	sth r3, 0x44(r4)
/* 8014578C 0014258C  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 80145790 00142590  80 83 00 00 */	lwz r4, 0(r3)
/* 80145794 00142594  A0 64 00 44 */	lhz r3, 0x44(r4)
/* 80145798 00142598  60 63 00 01 */	ori r3, r3, 1
/* 8014579C 0014259C  B0 64 00 44 */	sth r3, 0x44(r4)
/* 801457A0 001425A0  80 7F 02 B4 */	lwz r3, 0x2b4(r31)
/* 801457A4 001425A4  80 63 00 04 */	lwz r3, 4(r3)
/* 801457A8 001425A8  98 03 00 22 */	stb r0, 0x22(r3)
/* 801457AC 001425AC  80 7F 02 B4 */	lwz r3, 0x2b4(r31)
/* 801457B0 001425B0  80 63 00 04 */	lwz r3, 4(r3)
/* 801457B4 001425B4  98 03 00 23 */	stb r0, 0x23(r3)
/* 801457B8 001425B8  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 801457BC 001425BC  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 801457C0 001425C0  FC 40 08 90 */	fmr f2, f1
/* 801457C4 001425C4  FC 60 08 90 */	fmr f3, f1
/* 801457C8 001425C8  38 63 00 D4 */	addi r3, r3, 0xd4
/* 801457CC 001425CC  4B EC 98 31 */	bl xVec3Init__FP5xVec3fff
/* 801457D0 001425D0  80 1F 02 C0 */	lwz r0, 0x2c0(r31)
/* 801457D4 001425D4  54 00 06 73 */	rlwinm. r0, r0, 0, 0x19, 0x19
/* 801457D8 001425D8  41 82 00 30 */	beq lbl_80145808
/* 801457DC 001425DC  3C 60 80 3C */	lis r3, globals@ha
/* 801457E0 001425E0  C0 2D 96 A0 */	lfs f1, sCurrHeight-_SDA_BASE_(r13)
/* 801457E4 001425E4  38 63 05 58 */	addi r3, r3, globals@l
/* 801457E8 001425E8  80 63 07 04 */	lwz r3, 0x704(r3)
/* 801457EC 001425EC  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 801457F0 001425F0  C0 03 00 34 */	lfs f0, 0x34(r3)
/* 801457F4 001425F4  EC 01 00 28 */	fsubs f0, f1, f0
/* 801457F8 001425F8  D0 0D 96 A0 */	stfs f0, sCurrHeight-_SDA_BASE_(r13)
/* 801457FC 001425FC  80 1F 02 C0 */	lwz r0, 0x2c0(r31)
/* 80145800 00142600  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 80145804 00142604  90 1F 02 C0 */	stw r0, 0x2c0(r31)
lbl_80145808:
/* 80145808 00142608  FC 20 F8 90 */	fmr f1, f31
/* 8014580C 0014260C  7F A3 EB 78 */	mr r3, r29
/* 80145810 00142610  7F C4 F3 78 */	mr r4, r30
/* 80145814 00142614  4B F8 F9 01 */	bl Enter__14zNPCGoalCommonFfPv
/* 80145818 00142618  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8014581C 0014261C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80145820 00142620  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80145824 00142624  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80145828 00142628  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8014582C 0014262C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80145830 00142630  7C 08 03 A6 */	mtlr r0
/* 80145834 00142634  38 21 00 30 */	addi r1, r1, 0x30
/* 80145838 00142638  4E 80 00 20 */	blr 

Process__22zNPCGoalBossSandyGetUpFP11en_trantypefPvP6xScene:
/* 8014583C 0014263C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80145840 00142640  7C 08 02 A6 */	mflr r0
/* 80145844 00142644  90 01 00 14 */	stw r0, 0x14(r1)
/* 80145848 00142648  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 8014584C 0014264C  EC 00 08 2A */	fadds f0, f0, f1
/* 80145850 00142650  D0 03 00 4C */	stfs f0, 0x4c(r3)
/* 80145854 00142654  4B FC 92 F5 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
/* 80145858 00142658  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014585C 0014265C  7C 08 03 A6 */	mtlr r0
/* 80145860 00142660  38 21 00 10 */	addi r1, r1, 0x10
/* 80145864 00142664  4E 80 00 20 */	blr 

Enter__26zNPCGoalBossSandyRunToRopeFfPv:
/* 80145868 00142668  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 8014586C 0014266C  7C 08 02 A6 */	mflr r0
/* 80145870 00142670  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80145874 00142674  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 80145878 00142678  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 8014587C 0014267C  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 80145880 00142680  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 80145884 00142684  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 80145888 00142688  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 8014588C 0014268C  DB 81 00 60 */	stfd f28, 0x60(r1)
/* 80145890 00142690  F3 81 00 68 */	psq_st f28, 104(r1), 0, qr0
/* 80145894 00142694  DB 61 00 50 */	stfd f27, 0x50(r1)
/* 80145898 00142698  F3 61 00 58 */	psq_st f27, 88(r1), 0, qr0
/* 8014589C 0014269C  DB 41 00 40 */	stfd f26, 0x40(r1)
/* 801458A0 001426A0  F3 41 00 48 */	psq_st f26, 72(r1), 0, qr0
/* 801458A4 001426A4  BF 41 00 28 */	stmw r26, 0x28(r1)
/* 801458A8 001426A8  7C 7D 1B 78 */	mr r29, r3
/* 801458AC 001426AC  3C 60 80 3C */	lis r3, globals@ha
/* 801458B0 001426B0  80 BD 00 18 */	lwz r5, 0x18(r29)
/* 801458B4 001426B4  38 C0 00 01 */	li r6, 1
/* 801458B8 001426B8  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 801458BC 001426BC  38 00 00 05 */	li r0, 5
/* 801458C0 001426C0  83 E5 00 00 */	lwz r31, 0(r5)
/* 801458C4 001426C4  38 A3 05 58 */	addi r5, r3, globals@l
/* 801458C8 001426C8  FF 40 08 90 */	fmr f26, f1
/* 801458CC 001426CC  7C 9E 23 78 */	mr r30, r4
/* 801458D0 001426D0  D0 1D 00 4C */	stfs f0, 0x4c(r29)
/* 801458D4 001426D4  38 61 00 14 */	addi r3, r1, 0x14
/* 801458D8 001426D8  3B 60 00 01 */	li r27, 1
/* 801458DC 001426DC  90 DF 05 48 */	stw r6, 0x548(r31)
/* 801458E0 001426E0  90 1F 05 4C */	stw r0, 0x54c(r31)
/* 801458E4 001426E4  C3 E2 A5 D8 */	lfs f31, _2154-_SDA2_BASE_(r2)
/* 801458E8 001426E8  C3 A2 A4 C8 */	lfs f29, __830-_SDA2_BASE_(r2)
/* 801458EC 001426EC  80 DF 00 24 */	lwz r6, 0x24(r31)
/* 801458F0 001426F0  FF C0 F8 90 */	fmr f30, f31
/* 801458F4 001426F4  80 85 07 04 */	lwz r4, 0x704(r5)
/* 801458F8 001426F8  FF 80 E8 90 */	fmr f28, f29
/* 801458FC 001426FC  80 C6 00 4C */	lwz r6, 0x4c(r6)
/* 80145900 00142700  80 A4 00 4C */	lwz r5, 0x4c(r4)
/* 80145904 00142704  38 86 00 30 */	addi r4, r6, 0x30
/* 80145908 00142708  38 A5 00 30 */	addi r5, r5, 0x30
/* 8014590C 0014270C  4B EC 8D 85 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 80145910 00142710  38 61 00 14 */	addi r3, r1, 0x14
/* 80145914 00142714  7C 64 1B 78 */	mr r4, r3
/* 80145918 00142718  4B F0 89 D9 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 8014591C 0014271C  3B 40 00 00 */	li r26, 0
/* 80145920 00142720  7F FC FB 78 */	mr r28, r31
lbl_80145924:
/* 80145924 00142724  2C 1A 00 04 */	cmpwi r26, 4
/* 80145928 00142728  41 82 00 DC */	beq lbl_80145A04
/* 8014592C 0014272C  2C 1A 00 00 */	cmpwi r26, 0
/* 80145930 00142730  41 82 00 D4 */	beq lbl_80145A04
/* 80145934 00142734  80 BF 00 24 */	lwz r5, 0x24(r31)
/* 80145938 00142738  38 61 00 08 */	addi r3, r1, 8
/* 8014593C 0014273C  38 9C 03 FC */	addi r4, r28, 0x3fc
/* 80145940 00142740  80 A5 00 4C */	lwz r5, 0x4c(r5)
/* 80145944 00142744  38 A5 00 30 */	addi r5, r5, 0x30
/* 80145948 00142748  4B EC 8D 49 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 8014594C 0014274C  38 61 00 08 */	addi r3, r1, 8
/* 80145950 00142750  38 9C 03 9C */	addi r4, r28, 0x39c
/* 80145954 00142754  4B F0 8B 9D */	bl xVec3Dot__FPC5xVec3PC5xVec3
/* 80145958 00142758  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8014595C 0014275C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80145960 00142760  41 81 00 A4 */	bgt lbl_80145A04
/* 80145964 00142764  38 61 00 08 */	addi r3, r1, 8
/* 80145968 00142768  4B EC 8C E9 */	bl xVec3Length__FPC5xVec3
/* 8014596C 0014276C  FF 60 08 90 */	fmr f27, f1
/* 80145970 00142770  C0 02 A5 5C */	lfs f0, _1209-_SDA2_BASE_(r2)
/* 80145974 00142774  FC 1B 00 40 */	fcmpo cr0, f27, f0
/* 80145978 00142778  41 80 00 8C */	blt lbl_80145A04
/* 8014597C 0014277C  38 61 00 14 */	addi r3, r1, 0x14
/* 80145980 00142780  38 81 00 08 */	addi r4, r1, 8
/* 80145984 00142784  4B F0 8B 6D */	bl xVec3Dot__FPC5xVec3PC5xVec3
/* 80145988 00142788  EC 21 D8 24 */	fdivs f1, f1, f27
/* 8014598C 0014278C  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 80145990 00142790  40 80 00 40 */	bge lbl_801459D0
/* 80145994 00142794  FC 00 F8 50 */	fneg f0, f31
/* 80145998 00142798  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014599C 0014279C  40 81 00 34 */	ble lbl_801459D0
/* 801459A0 001427A0  83 7F 05 48 */	lwz r27, 0x548(r31)
/* 801459A4 001427A4  FF C0 F8 90 */	fmr f30, f31
/* 801459A8 001427A8  93 5F 05 48 */	stw r26, 0x548(r31)
/* 801459AC 001427AC  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 801459B0 001427B0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801459B4 001427B4  40 81 00 0C */	ble lbl_801459C0
/* 801459B8 001427B8  FF E0 08 90 */	fmr f31, f1
/* 801459BC 001427BC  48 00 00 08 */	b lbl_801459C4
lbl_801459C0:
/* 801459C0 001427C0  FF E0 08 50 */	fneg f31, f1
lbl_801459C4:
/* 801459C4 001427C4  FF 80 E8 90 */	fmr f28, f29
/* 801459C8 001427C8  FF A0 D8 90 */	fmr f29, f27
/* 801459CC 001427CC  48 00 00 38 */	b lbl_80145A04
lbl_801459D0:
/* 801459D0 001427D0  FC 01 F0 40 */	fcmpo cr0, f1, f30
/* 801459D4 001427D4  40 80 00 30 */	bge lbl_80145A04
/* 801459D8 001427D8  FC 00 F0 50 */	fneg f0, f30
/* 801459DC 001427DC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801459E0 001427E0  40 81 00 24 */	ble lbl_80145A04
/* 801459E4 001427E4  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 801459E8 001427E8  7F 5B D3 78 */	mr r27, r26
/* 801459EC 001427EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801459F0 001427F0  40 81 00 0C */	ble lbl_801459FC
/* 801459F4 001427F4  FF C0 08 90 */	fmr f30, f1
/* 801459F8 001427F8  48 00 00 08 */	b lbl_80145A00
lbl_801459FC:
/* 801459FC 001427FC  FF C0 08 50 */	fneg f30, f1
lbl_80145A00:
/* 80145A00 00142800  FF 80 D8 90 */	fmr f28, f27
lbl_80145A04:
/* 80145A04 00142804  3B 5A 00 01 */	addi r26, r26, 1
/* 80145A08 00142808  3B 9C 00 0C */	addi r28, r28, 0xc
/* 80145A0C 0014280C  2C 1A 00 08 */	cmpwi r26, 8
/* 80145A10 00142810  41 80 FF 14 */	blt lbl_80145924
/* 80145A14 00142814  FC 1C E8 40 */	fcmpo cr0, f28, f29
/* 80145A18 00142818  40 80 00 08 */	bge lbl_80145A20
/* 80145A1C 0014281C  93 7F 05 48 */	stw r27, 0x548(r31)
lbl_80145A20:
/* 80145A20 00142820  80 7F 05 48 */	lwz r3, 0x548(r31)
/* 80145A24 00142824  38 03 00 04 */	addi r0, r3, 4
/* 80145A28 00142828  90 1F 05 4C */	stw r0, 0x54c(r31)
/* 80145A2C 0014282C  80 7F 05 4C */	lwz r3, 0x54c(r31)
/* 80145A30 00142830  2C 03 00 08 */	cmpwi r3, 8
/* 80145A34 00142834  41 80 00 0C */	blt lbl_80145A40
/* 80145A38 00142838  38 03 FF F8 */	addi r0, r3, -8
/* 80145A3C 0014283C  90 1F 05 4C */	stw r0, 0x54c(r31)
lbl_80145A40:
/* 80145A40 00142840  80 BF 02 B8 */	lwz r5, 0x2b8(r31)
/* 80145A44 00142844  FC 20 D0 90 */	fmr f1, f26
/* 80145A48 00142848  7F A3 EB 78 */	mr r3, r29
/* 80145A4C 0014284C  7F C4 F3 78 */	mr r4, r30
/* 80145A50 00142850  80 05 00 28 */	lwz r0, 0x28(r5)
/* 80145A54 00142854  60 00 00 10 */	ori r0, r0, 0x10
/* 80145A58 00142858  90 05 00 28 */	stw r0, 0x28(r5)
/* 80145A5C 0014285C  80 BF 02 B8 */	lwz r5, 0x2b8(r31)
/* 80145A60 00142860  80 05 00 30 */	lwz r0, 0x30(r5)
/* 80145A64 00142864  60 00 00 10 */	ori r0, r0, 0x10
/* 80145A68 00142868  90 05 00 30 */	stw r0, 0x30(r5)
/* 80145A6C 0014286C  4B F8 F6 A9 */	bl Enter__14zNPCGoalCommonFfPv
/* 80145A70 00142870  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 80145A74 00142874  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 80145A78 00142878  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 80145A7C 0014287C  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 80145A80 00142880  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 80145A84 00142884  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 80145A88 00142888  E3 81 00 68 */	psq_l f28, 104(r1), 0, qr0
/* 80145A8C 0014288C  CB 81 00 60 */	lfd f28, 0x60(r1)
/* 80145A90 00142890  E3 61 00 58 */	psq_l f27, 88(r1), 0, qr0
/* 80145A94 00142894  CB 61 00 50 */	lfd f27, 0x50(r1)
/* 80145A98 00142898  E3 41 00 48 */	psq_l f26, 72(r1), 0, qr0
/* 80145A9C 0014289C  CB 41 00 40 */	lfd f26, 0x40(r1)
/* 80145AA0 001428A0  BB 41 00 28 */	lmw r26, 0x28(r1)
/* 80145AA4 001428A4  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80145AA8 001428A8  7C 08 03 A6 */	mtlr r0
/* 80145AAC 001428AC  38 21 00 A0 */	addi r1, r1, 0xa0
/* 80145AB0 001428B0  4E 80 00 20 */	blr 

Process__26zNPCGoalBossSandyRunToRopeFP11en_trantypefPvP6xScene:
/* 80145AB4 001428B4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80145AB8 001428B8  7C 08 02 A6 */	mflr r0
/* 80145ABC 001428BC  90 01 00 44 */	stw r0, 0x44(r1)
/* 80145AC0 001428C0  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80145AC4 001428C4  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 80145AC8 001428C8  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 80145ACC 001428CC  7C 7B 1B 78 */	mr r27, r3
/* 80145AD0 001428D0  FF E0 08 90 */	fmr f31, f1
/* 80145AD4 001428D4  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 80145AD8 001428D8  7C 9C 23 78 */	mr r28, r4
/* 80145ADC 001428DC  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80145AE0 001428E0  7C BD 2B 78 */	mr r29, r5
/* 80145AE4 001428E4  EC 00 F8 2A */	fadds f0, f0, f31
/* 80145AE8 001428E8  83 E3 00 00 */	lwz r31, 0(r3)
/* 80145AEC 001428EC  7C DE 33 78 */	mr r30, r6
/* 80145AF0 001428F0  38 61 00 08 */	addi r3, r1, 8
/* 80145AF4 001428F4  D0 1B 00 4C */	stfs f0, 0x4c(r27)
/* 80145AF8 001428F8  80 1F 05 48 */	lwz r0, 0x548(r31)
/* 80145AFC 001428FC  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 80145B00 00142900  1C C0 00 0C */	mulli r6, r0, 0xc
/* 80145B04 00142904  80 A4 00 4C */	lwz r5, 0x4c(r4)
/* 80145B08 00142908  38 86 03 FC */	addi r4, r6, 0x3fc
/* 80145B0C 0014290C  38 A5 00 30 */	addi r5, r5, 0x30
/* 80145B10 00142910  7C 9F 22 14 */	add r4, r31, r4
/* 80145B14 00142914  4B EC 8B 7D */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 80145B18 00142918  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80145B1C 0014291C  38 61 00 08 */	addi r3, r1, 8
/* 80145B20 00142920  7C 64 1B 78 */	mr r4, r3
/* 80145B24 00142924  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80145B28 00142928  4B F0 87 C9 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 80145B2C 0014292C  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 80145B30 00142930  80 BF 00 48 */	lwz r5, 0x48(r31)
/* 80145B34 00142934  80 83 00 4C */	lwz r4, 0x4c(r3)
/* 80145B38 00142938  C0 22 A5 68 */	lfs f1, _1380-_SDA2_BASE_(r2)
/* 80145B3C 0014293C  38 65 00 20 */	addi r3, r5, 0x20
/* 80145B40 00142940  38 84 00 20 */	addi r4, r4, 0x20
/* 80145B44 00142944  4B EC 55 4D */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 80145B48 00142948  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 80145B4C 0014294C  38 81 00 08 */	addi r4, r1, 8
/* 80145B50 00142950  C0 22 A5 48 */	lfs f1, _1192-_SDA2_BASE_(r2)
/* 80145B54 00142954  38 63 00 20 */	addi r3, r3, 0x20
/* 80145B58 00142958  4B EC F5 01 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 80145B5C 0014295C  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80145B60 00142960  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 80145B64 00142964  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 80145B68 00142968  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 80145B6C 0014296C  38 63 00 20 */	addi r3, r3, 0x20
/* 80145B70 00142970  7C 64 1B 78 */	mr r4, r3
/* 80145B74 00142974  4B F0 87 7D */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 80145B78 00142978  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 80145B7C 0014297C  38 83 00 10 */	addi r4, r3, 0x10
/* 80145B80 00142980  38 A3 00 20 */	addi r5, r3, 0x20
/* 80145B84 00142984  4B EC F5 09 */	bl xVec3Cross__FP5xVec3PC5xVec3PC5xVec3
/* 80145B88 00142988  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80145B8C 0014298C  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 80145B90 00142990  D0 03 00 34 */	stfs f0, 0x34(r3)
/* 80145B94 00142994  80 7F 01 D8 */	lwz r3, 0x1d8(r31)
/* 80145B98 00142998  C0 22 A5 A0 */	lfs f1, _1528-_SDA2_BASE_(r2)
/* 80145B9C 0014299C  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80145BA0 001429A0  80 9F 00 48 */	lwz r4, 0x48(r31)
/* 80145BA4 001429A4  EC 21 00 32 */	fmuls f1, f1, f0
/* 80145BA8 001429A8  38 64 00 D4 */	addi r3, r4, 0xd4
/* 80145BAC 001429AC  38 84 00 20 */	addi r4, r4, 0x20
/* 80145BB0 001429B0  4B EC 54 E1 */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 80145BB4 001429B4  FC 20 F8 90 */	fmr f1, f31
/* 80145BB8 001429B8  7F 63 DB 78 */	mr r3, r27
/* 80145BBC 001429BC  7F 84 E3 78 */	mr r4, r28
/* 80145BC0 001429C0  7F A5 EB 78 */	mr r5, r29
/* 80145BC4 001429C4  7F C6 F3 78 */	mr r6, r30
/* 80145BC8 001429C8  4B FC 8F 81 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
/* 80145BCC 001429CC  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 80145BD0 001429D0  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80145BD4 001429D4  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 80145BD8 001429D8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80145BDC 001429DC  7C 08 03 A6 */	mtlr r0
/* 80145BE0 001429E0  38 21 00 40 */	addi r1, r1, 0x40
/* 80145BE4 001429E4  4E 80 00 20 */	blr 

Exit__26zNPCGoalBossSandyRunToRopeFfPv:
/* 80145BE8 001429E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80145BEC 001429EC  7C 08 02 A6 */	mflr r0
/* 80145BF0 001429F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80145BF4 001429F4  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80145BF8 001429F8  D0 0D 96 84 */	stfs f0, sChaseTimer-_SDA_BASE_(r13)
/* 80145BFC 001429FC  4B F8 F8 21 */	bl Exit__5xGoalFfPv
/* 80145C00 00142A00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80145C04 00142A04  7C 08 03 A6 */	mtlr r0
/* 80145C08 00142A08  38 21 00 10 */	addi r1, r1, 0x10
/* 80145C0C 00142A0C  4E 80 00 20 */	blr 

Enter__28zNPCGoalBossSandyClotheslineFfPv:
/* 80145C10 00142A10  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80145C14 00142A14  7C 08 02 A6 */	mflr r0
/* 80145C18 00142A18  90 01 00 44 */	stw r0, 0x44(r1)
/* 80145C1C 00142A1C  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80145C20 00142A20  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 80145C24 00142A24  BF 41 00 18 */	stmw r26, 0x18(r1)
/* 80145C28 00142A28  7C 7D 1B 78 */	mr r29, r3
/* 80145C2C 00142A2C  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80145C30 00142A30  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80145C34 00142A34  38 A0 00 00 */	li r5, 0
/* 80145C38 00142A38  38 00 00 01 */	li r0, 1
/* 80145C3C 00142A3C  FF E0 08 90 */	fmr f31, f1
/* 80145C40 00142A40  83 E3 00 00 */	lwz r31, 0(r3)
/* 80145C44 00142A44  7C 9E 23 78 */	mr r30, r4
/* 80145C48 00142A48  D0 1D 00 4C */	stfs f0, 0x4c(r29)
/* 80145C4C 00142A4C  90 BD 00 50 */	stw r5, 0x50(r29)
/* 80145C50 00142A50  80 6D 96 88 */	lwz r3, sNumAttacks-_SDA_BASE_(r13)
/* 80145C54 00142A54  38 63 00 01 */	addi r3, r3, 1
/* 80145C58 00142A58  90 6D 96 88 */	stw r3, sNumAttacks-_SDA_BASE_(r13)
/* 80145C5C 00142A5C  90 0D 96 8C */	stw r0, sDidClothesline-_SDA_BASE_(r13)
/* 80145C60 00142A60  90 BD 00 54 */	stw r5, 0x54(r29)
/* 80145C64 00142A64  C0 22 A4 C8 */	lfs f1, __830-_SDA2_BASE_(r2)
/* 80145C68 00142A68  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 80145C6C 00142A6C  FC 40 08 90 */	fmr f2, f1
/* 80145C70 00142A70  FC 60 08 90 */	fmr f3, f1
/* 80145C74 00142A74  38 63 00 D4 */	addi r3, r3, 0xd4
/* 80145C78 00142A78  4B EC 93 85 */	bl xVec3Init__FP5xVec3fff
/* 80145C7C 00142A7C  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 80145C80 00142A80  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 80145C84 00142A84  38 63 06 4C */	addi r3, r3, 0x64c
/* 80145C88 00142A88  4B F0 65 8D */	bl xStrHash__FPCc
/* 80145C8C 00142A8C  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 80145C90 00142A90  7F E6 FB 78 */	mr r6, r31
/* 80145C94 00142A94  C0 22 A5 F4 */	lfs f1, _2265-_SDA2_BASE_(r2)
/* 80145C98 00142A98  38 80 00 00 */	li r4, 0
/* 80145C9C 00142A9C  FC 80 10 90 */	fmr f4, f2
/* 80145CA0 00142AA0  C0 62 A6 04 */	lfs f3, _2518-_SDA2_BASE_(r2)
/* 80145CA4 00142AA4  38 A0 00 00 */	li r5, 0
/* 80145CA8 00142AA8  38 E0 00 00 */	li r7, 0
/* 80145CAC 00142AAC  4B F0 9F 21 */	bl xSndPlay3D__FUiffUiUiP4xEntf14sound_categoryf
/* 80145CB0 00142AB0  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 80145CB4 00142AB4  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 80145CB8 00142AB8  38 63 06 57 */	addi r3, r3, 0x657
/* 80145CBC 00142ABC  4B F0 65 59 */	bl xStrHash__FPCc
/* 80145CC0 00142AC0  C0 22 A5 F4 */	lfs f1, _2265-_SDA2_BASE_(r2)
/* 80145CC4 00142AC4  7F E6 FB 78 */	mr r6, r31
/* 80145CC8 00142AC8  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 80145CCC 00142ACC  38 80 00 00 */	li r4, 0
/* 80145CD0 00142AD0  C0 62 A6 04 */	lfs f3, _2518-_SDA2_BASE_(r2)
/* 80145CD4 00142AD4  38 A0 00 00 */	li r5, 0
/* 80145CD8 00142AD8  C0 82 A6 24 */	lfs f4, _2818-_SDA2_BASE_(r2)
/* 80145CDC 00142ADC  38 E0 00 00 */	li r7, 0
/* 80145CE0 00142AE0  4B F0 9E ED */	bl xSndPlay3D__FUiffUiUiP4xEntf14sound_categoryf
/* 80145CE4 00142AE4  C0 02 A5 10 */	lfs f0, _1063-_SDA2_BASE_(r2)
/* 80145CE8 00142AE8  3B 60 00 00 */	li r27, 0
/* 80145CEC 00142AEC  3B 80 00 00 */	li r28, 0
/* 80145CF0 00142AF0  D0 01 00 08 */	stfs f0, 8(r1)
lbl_80145CF4:
/* 80145CF4 00142AF4  80 1F 05 48 */	lwz r0, 0x548(r31)
/* 80145CF8 00142AF8  38 A1 00 08 */	addi r5, r1, 8
/* 80145CFC 00142AFC  38 80 00 C3 */	li r4, 0xc3
/* 80145D00 00142B00  54 00 20 36 */	slwi r0, r0, 4
/* 80145D04 00142B04  7C 60 E2 14 */	add r3, r0, r28
/* 80145D08 00142B08  38 03 04 5C */	addi r0, r3, 0x45c
/* 80145D0C 00142B0C  7F 5F 00 2E */	lwzx r26, r31, r0
/* 80145D10 00142B10  7F 43 D3 78 */	mr r3, r26
/* 80145D14 00142B14  4B ED 99 51 */	bl zEntEvent__FP5xBaseUiPCf
/* 80145D18 00142B18  80 9A 00 24 */	lwz r4, 0x24(r26)
/* 80145D1C 00142B1C  7F 43 D3 78 */	mr r3, r26
/* 80145D20 00142B20  A0 04 00 44 */	lhz r0, 0x44(r4)
/* 80145D24 00142B24  60 00 00 02 */	ori r0, r0, 2
/* 80145D28 00142B28  B0 04 00 44 */	sth r0, 0x44(r4)
/* 80145D2C 00142B2C  4B ED 5A CD */	bl xEntShow__FP4xEnt
/* 80145D30 00142B30  3B 7B 00 01 */	addi r27, r27, 1
/* 80145D34 00142B34  3B 9C 00 04 */	addi r28, r28, 4
/* 80145D38 00142B38  2C 1B 00 04 */	cmpwi r27, 4
/* 80145D3C 00142B3C  41 80 FF B8 */	blt lbl_80145CF4
/* 80145D40 00142B40  80 1F 05 48 */	lwz r0, 0x548(r31)
/* 80145D44 00142B44  54 00 10 3A */	slwi r0, r0, 2
/* 80145D48 00142B48  7C 7F 02 14 */	add r3, r31, r0
/* 80145D4C 00142B4C  80 63 04 DC */	lwz r3, 0x4dc(r3)
/* 80145D50 00142B50  4B ED 5A 99 */	bl xEntHide__FP4xEnt
/* 80145D54 00142B54  80 9F 00 48 */	lwz r4, 0x48(r31)
/* 80145D58 00142B58  38 7D 00 5C */	addi r3, r29, 0x5c
/* 80145D5C 00142B5C  38 84 00 30 */	addi r4, r4, 0x30
/* 80145D60 00142B60  4B F0 87 7D */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 80145D64 00142B64  FC 20 F8 90 */	fmr f1, f31
/* 80145D68 00142B68  7F A3 EB 78 */	mr r3, r29
/* 80145D6C 00142B6C  7F C4 F3 78 */	mr r4, r30
/* 80145D70 00142B70  4B F8 F3 A5 */	bl Enter__14zNPCGoalCommonFfPv
/* 80145D74 00142B74  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 80145D78 00142B78  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80145D7C 00142B7C  BB 41 00 18 */	lmw r26, 0x18(r1)
/* 80145D80 00142B80  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80145D84 00142B84  7C 08 03 A6 */	mtlr r0
/* 80145D88 00142B88  38 21 00 40 */	addi r1, r1, 0x40
/* 80145D8C 00142B8C  4E 80 00 20 */	blr 

Process__28zNPCGoalBossSandyClotheslineFP11en_trantypefPvP6xScene:
/* 80145D90 00142B90  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80145D94 00142B94  7C 08 02 A6 */	mflr r0
/* 80145D98 00142B98  90 01 00 74 */	stw r0, 0x74(r1)
/* 80145D9C 00142B9C  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 80145DA0 00142BA0  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 80145DA4 00142BA4  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 80145DA8 00142BA8  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 80145DAC 00142BAC  BE E1 00 2C */	stmw r23, 0x2c(r1)
/* 80145DB0 00142BB0  7C 79 1B 78 */	mr r25, r3
/* 80145DB4 00142BB4  FF E0 08 90 */	fmr f31, f1
/* 80145DB8 00142BB8  C0 03 00 4C */	lfs f0, 0x4c(r3)
/* 80145DBC 00142BBC  3C E0 80 33 */	lis r7, sSinTable@ha
/* 80145DC0 00142BC0  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80145DC4 00142BC4  7C 9A 23 78 */	mr r26, r4
/* 80145DC8 00142BC8  EC 00 F8 2A */	fadds f0, f0, f31
/* 80145DCC 00142BCC  83 A3 00 00 */	lwz r29, 0(r3)
/* 80145DD0 00142BD0  7C BB 2B 78 */	mr r27, r5
/* 80145DD4 00142BD4  7C DC 33 78 */	mr r28, r6
/* 80145DD8 00142BD8  3B C7 80 00 */	addi r30, r7, sSinTable@l
/* 80145DDC 00142BDC  D0 19 00 4C */	stfs f0, 0x4c(r25)
/* 80145DE0 00142BE0  80 19 00 50 */	lwz r0, 0x50(r25)
/* 80145DE4 00142BE4  28 00 00 00 */	cmplwi r0, 0
/* 80145DE8 00142BE8  40 82 04 24 */	bne lbl_8014620C
/* 80145DEC 00142BEC  7F A3 EB 78 */	mr r3, r29
/* 80145DF0 00142BF0  38 80 00 00 */	li r4, 0
/* 80145DF4 00142BF4  4B FA D2 85 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 80145DF8 00142BF8  C0 02 A5 F0 */	lfs f0, _2264-_SDA2_BASE_(r2)
/* 80145DFC 00142BFC  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80145E00 00142C00  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80145E04 00142C04  40 80 03 08 */	bge lbl_8014610C
/* 80145E08 00142C08  38 00 00 01 */	li r0, 1
/* 80145E0C 00142C0C  90 19 00 50 */	stw r0, 0x50(r25)
/* 80145E10 00142C10  80 1D 0D 38 */	lwz r0, 0xd38(r29)
/* 80145E14 00142C14  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 80145E18 00142C18  41 82 00 10 */	beq lbl_80145E28
/* 80145E1C 00142C1C  4B EE AE 4D */	bl xrand__Fv
/* 80145E20 00142C20  54 60 05 AF */	rlwinm. r0, r3, 0, 0x16, 0x17
/* 80145E24 00142C24  40 82 00 34 */	bne lbl_80145E58
lbl_80145E28:
/* 80145E28 00142C28  80 7D 0D 34 */	lwz r3, 0xd34(r29)
/* 80145E2C 00142C2C  38 9E 00 9C */	addi r4, r30, 0x9c
/* 80145E30 00142C30  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80145E34 00142C34  38 A0 00 00 */	li r5, 0
/* 80145E38 00142C38  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80145E3C 00142C3C  38 C0 FF FF */	li r6, -1
/* 80145E40 00142C40  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80145E44 00142C44  7D 89 03 A6 */	mtctr r12
/* 80145E48 00142C48  4E 80 04 21 */	bctrl 
/* 80145E4C 00142C4C  80 1D 0D 38 */	lwz r0, 0xd38(r29)
/* 80145E50 00142C50  60 00 00 20 */	ori r0, r0, 0x20
/* 80145E54 00142C54  90 1D 0D 38 */	stw r0, 0xd38(r29)
lbl_80145E58:
/* 80145E58 00142C58  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 80145E5C 00142C5C  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 80145E60 00142C60  38 63 06 62 */	addi r3, r3, 0x662
/* 80145E64 00142C64  4B F0 63 B1 */	bl xStrHash__FPCc
/* 80145E68 00142C68  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 80145E6C 00142C6C  7F A6 EB 78 */	mr r6, r29
/* 80145E70 00142C70  C0 22 A5 F4 */	lfs f1, _2265-_SDA2_BASE_(r2)
/* 80145E74 00142C74  38 80 00 00 */	li r4, 0
/* 80145E78 00142C78  FC 80 10 90 */	fmr f4, f2
/* 80145E7C 00142C7C  C0 62 A5 D8 */	lfs f3, _2154-_SDA2_BASE_(r2)
/* 80145E80 00142C80  38 A0 00 00 */	li r5, 0
/* 80145E84 00142C84  38 E0 00 00 */	li r7, 0
/* 80145E88 00142C88  4B F0 9D 45 */	bl xSndPlay3D__FUiffUiUiP4xEntf14sound_categoryf
/* 80145E8C 00142C8C  90 7D 0A F0 */	stw r3, 0xaf0(r29)
/* 80145E90 00142C90  80 1D 02 C0 */	lwz r0, 0x2c0(r29)
/* 80145E94 00142C94  60 00 00 08 */	ori r0, r0, 8
/* 80145E98 00142C98  90 1D 02 C0 */	stw r0, 0x2c0(r29)
/* 80145E9C 00142C9C  80 1D 02 D8 */	lwz r0, 0x2d8(r29)
/* 80145EA0 00142CA0  2C 00 00 03 */	cmpwi r0, 3
/* 80145EA4 00142CA4  40 82 00 10 */	bne lbl_80145EB4
/* 80145EA8 00142CA8  80 1D 02 C0 */	lwz r0, 0x2c0(r29)
/* 80145EAC 00142CAC  60 00 00 10 */	ori r0, r0, 0x10
/* 80145EB0 00142CB0  90 1D 02 C0 */	stw r0, 0x2c0(r29)
lbl_80145EB4:
/* 80145EB4 00142CB4  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80145EB8 00142CB8  7F 23 CB 78 */	mr r3, r25
/* 80145EBC 00142CBC  38 80 00 20 */	li r4, 0x20
/* 80145EC0 00142CC0  38 A0 00 00 */	li r5, 0
/* 80145EC4 00142CC4  D0 19 00 4C */	stfs f0, 0x4c(r25)
/* 80145EC8 00142CC8  4B F8 F4 51 */	bl DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi
/* 80145ECC 00142CCC  80 7D 05 48 */	lwz r3, 0x548(r29)
/* 80145ED0 00142CD0  80 1D 05 4C */	lwz r0, 0x54c(r29)
/* 80145ED4 00142CD4  1C 83 00 0C */	mulli r4, r3, 0xc
/* 80145ED8 00142CD8  80 7D 00 48 */	lwz r3, 0x48(r29)
/* 80145EDC 00142CDC  38 63 00 20 */	addi r3, r3, 0x20
/* 80145EE0 00142CE0  1C A0 00 0C */	mulli r5, r0, 0xc
/* 80145EE4 00142CE4  38 84 03 FC */	addi r4, r4, 0x3fc
/* 80145EE8 00142CE8  38 A5 03 FC */	addi r5, r5, 0x3fc
/* 80145EEC 00142CEC  7C 9D 22 14 */	add r4, r29, r4
/* 80145EF0 00142CF0  7C BD 2A 14 */	add r5, r29, r5
/* 80145EF4 00142CF4  4B EC 87 9D */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 80145EF8 00142CF8  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80145EFC 00142CFC  80 7D 00 48 */	lwz r3, 0x48(r29)
/* 80145F00 00142D00  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 80145F04 00142D04  80 7D 00 48 */	lwz r3, 0x48(r29)
/* 80145F08 00142D08  38 63 00 20 */	addi r3, r3, 0x20
/* 80145F0C 00142D0C  7C 64 1B 78 */	mr r4, r3
/* 80145F10 00142D10  4B F0 83 E1 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 80145F14 00142D14  80 7D 00 48 */	lwz r3, 0x48(r29)
/* 80145F18 00142D18  38 83 00 10 */	addi r4, r3, 0x10
/* 80145F1C 00142D1C  38 A3 00 20 */	addi r5, r3, 0x20
/* 80145F20 00142D20  4B EC F1 6D */	bl xVec3Cross__FP5xVec3PC5xVec3PC5xVec3
/* 80145F24 00142D24  C0 42 A5 10 */	lfs f2, _1063-_SDA2_BASE_(r2)
/* 80145F28 00142D28  38 9E 00 68 */	addi r4, r30, 0x68
/* 80145F2C 00142D2C  C0 2D 96 7C */	lfs f1, sRadiusOfRing-_SDA_BASE_(r13)
/* 80145F30 00142D30  38 7E 00 7C */	addi r3, r30, 0x7c
/* 80145F34 00142D34  C0 02 A4 F4 */	lfs f0, _1035-_SDA2_BASE_(r2)
/* 80145F38 00142D38  EC 22 00 72 */	fmuls f1, f2, f1
/* 80145F3C 00142D3C  EC 01 00 24 */	fdivs f0, f1, f0
/* 80145F40 00142D40  D0 19 00 58 */	stfs f0, 0x58(r25)
/* 80145F44 00142D44  80 DD 02 B4 */	lwz r6, 0x2b4(r29)
/* 80145F48 00142D48  80 A6 00 24 */	lwz r5, 0x24(r6)
/* 80145F4C 00142D4C  38 05 00 64 */	addi r0, r5, 0x64
/* 80145F50 00142D50  90 04 00 10 */	stw r0, 0x10(r4)
/* 80145F54 00142D54  80 86 00 2C */	lwz r4, 0x2c(r6)
/* 80145F58 00142D58  38 04 00 64 */	addi r0, r4, 0x64
/* 80145F5C 00142D5C  90 03 00 10 */	stw r0, 0x10(r3)
/* 80145F60 00142D60  4B EE AD 29 */	bl xurand__Fv
/* 80145F64 00142D64  D0 3E 00 68 */	stfs f1, 0x68(r30)
/* 80145F68 00142D68  4B EE AD 21 */	bl xurand__Fv
/* 80145F6C 00142D6C  38 7E 00 68 */	addi r3, r30, 0x68
/* 80145F70 00142D70  D0 23 00 08 */	stfs f1, 8(r3)
/* 80145F74 00142D74  4B EE AD 15 */	bl xurand__Fv
/* 80145F78 00142D78  D0 3E 00 7C */	stfs f1, 0x7c(r30)
/* 80145F7C 00142D7C  4B EE AD 0D */	bl xurand__Fv
/* 80145F80 00142D80  38 7E 00 7C */	addi r3, r30, 0x7c
/* 80145F84 00142D84  D0 23 00 08 */	stfs f1, 8(r3)
/* 80145F88 00142D88  4B EE AC E1 */	bl xrand__Fv
/* 80145F8C 00142D8C  54 60 07 FF */	clrlwi. r0, r3, 0x1f
/* 80145F90 00142D90  7C 7F 1B 78 */	mr r31, r3
/* 80145F94 00142D94  41 82 00 14 */	beq lbl_80145FA8
/* 80145F98 00142D98  C0 02 A6 28 */	lfs f0, _2903-_SDA2_BASE_(r2)
/* 80145F9C 00142D9C  38 7E 00 68 */	addi r3, r30, 0x68
/* 80145FA0 00142DA0  D0 03 00 04 */	stfs f0, 4(r3)
/* 80145FA4 00142DA4  48 00 00 10 */	b lbl_80145FB4
lbl_80145FA8:
/* 80145FA8 00142DA8  C0 02 A6 2C */	lfs f0, _2904-_SDA2_BASE_(r2)
/* 80145FAC 00142DAC  38 7E 00 68 */	addi r3, r30, 0x68
/* 80145FB0 00142DB0  D0 03 00 04 */	stfs f0, 4(r3)
lbl_80145FB4:
/* 80145FB4 00142DB4  57 E0 07 BD */	rlwinm. r0, r31, 0, 0x1e, 0x1e
/* 80145FB8 00142DB8  41 82 00 14 */	beq lbl_80145FCC
/* 80145FBC 00142DBC  C0 02 A6 28 */	lfs f0, _2903-_SDA2_BASE_(r2)
/* 80145FC0 00142DC0  38 7E 00 68 */	addi r3, r30, 0x68
/* 80145FC4 00142DC4  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 80145FC8 00142DC8  48 00 00 10 */	b lbl_80145FD8
lbl_80145FCC:
/* 80145FCC 00142DCC  C0 02 A6 2C */	lfs f0, _2904-_SDA2_BASE_(r2)
/* 80145FD0 00142DD0  38 7E 00 68 */	addi r3, r30, 0x68
/* 80145FD4 00142DD4  D0 03 00 0C */	stfs f0, 0xc(r3)
lbl_80145FD8:
/* 80145FD8 00142DD8  57 E0 07 7B */	rlwinm. r0, r31, 0, 0x1d, 0x1d
/* 80145FDC 00142DDC  41 82 00 14 */	beq lbl_80145FF0
/* 80145FE0 00142DE0  C0 02 A6 28 */	lfs f0, _2903-_SDA2_BASE_(r2)
/* 80145FE4 00142DE4  38 7E 00 7C */	addi r3, r30, 0x7c
/* 80145FE8 00142DE8  D0 03 00 04 */	stfs f0, 4(r3)
/* 80145FEC 00142DEC  48 00 00 10 */	b lbl_80145FFC
lbl_80145FF0:
/* 80145FF0 00142DF0  C0 02 A6 2C */	lfs f0, _2904-_SDA2_BASE_(r2)
/* 80145FF4 00142DF4  38 7E 00 7C */	addi r3, r30, 0x7c
/* 80145FF8 00142DF8  D0 03 00 04 */	stfs f0, 4(r3)
lbl_80145FFC:
/* 80145FFC 00142DFC  57 E0 07 39 */	rlwinm. r0, r31, 0, 0x1c, 0x1c
/* 80146000 00142E00  41 82 00 14 */	beq lbl_80146014
/* 80146004 00142E04  C0 02 A6 28 */	lfs f0, _2903-_SDA2_BASE_(r2)
/* 80146008 00142E08  38 7E 00 7C */	addi r3, r30, 0x7c
/* 8014600C 00142E0C  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 80146010 00142E10  48 00 00 10 */	b lbl_80146020
lbl_80146014:
/* 80146014 00142E14  C0 02 A6 2C */	lfs f0, _2904-_SDA2_BASE_(r2)
/* 80146018 00142E18  38 7E 00 7C */	addi r3, r30, 0x7c
/* 8014601C 00142E1C  D0 03 00 0C */	stfs f0, 0xc(r3)
lbl_80146020:
/* 80146020 00142E20  80 1D 02 D8 */	lwz r0, 0x2d8(r29)
/* 80146024 00142E24  2C 00 00 03 */	cmpwi r0, 3
/* 80146028 00142E28  40 82 05 18 */	bne lbl_80146540
/* 8014602C 00142E2C  80 DD 02 B4 */	lwz r6, 0x2b4(r29)
/* 80146030 00142E30  38 9E 00 40 */	addi r4, r30, 0x40
/* 80146034 00142E34  38 7E 00 54 */	addi r3, r30, 0x54
/* 80146038 00142E38  80 A6 00 08 */	lwz r5, 8(r6)
/* 8014603C 00142E3C  38 05 00 64 */	addi r0, r5, 0x64
/* 80146040 00142E40  90 04 00 10 */	stw r0, 0x10(r4)
/* 80146044 00142E44  80 86 00 10 */	lwz r4, 0x10(r6)
/* 80146048 00142E48  38 04 00 64 */	addi r0, r4, 0x64
/* 8014604C 00142E4C  90 03 00 10 */	stw r0, 0x10(r3)
/* 80146050 00142E50  4B EE AC 39 */	bl xurand__Fv
/* 80146054 00142E54  D0 3E 00 40 */	stfs f1, 0x40(r30)
/* 80146058 00142E58  4B EE AC 31 */	bl xurand__Fv
/* 8014605C 00142E5C  38 7E 00 40 */	addi r3, r30, 0x40
/* 80146060 00142E60  D0 23 00 08 */	stfs f1, 8(r3)
/* 80146064 00142E64  4B EE AC 25 */	bl xurand__Fv
/* 80146068 00142E68  D0 3E 00 54 */	stfs f1, 0x54(r30)
/* 8014606C 00142E6C  4B EE AC 1D */	bl xurand__Fv
/* 80146070 00142E70  38 7E 00 54 */	addi r3, r30, 0x54
/* 80146074 00142E74  57 E0 06 F7 */	rlwinm. r0, r31, 0, 0x1b, 0x1b
/* 80146078 00142E78  D0 23 00 08 */	stfs f1, 8(r3)
/* 8014607C 00142E7C  41 82 00 14 */	beq lbl_80146090
/* 80146080 00142E80  C0 02 A6 28 */	lfs f0, _2903-_SDA2_BASE_(r2)
/* 80146084 00142E84  38 7E 00 40 */	addi r3, r30, 0x40
/* 80146088 00142E88  D0 03 00 04 */	stfs f0, 4(r3)
/* 8014608C 00142E8C  48 00 00 10 */	b lbl_8014609C
lbl_80146090:
/* 80146090 00142E90  C0 02 A6 2C */	lfs f0, _2904-_SDA2_BASE_(r2)
/* 80146094 00142E94  38 7E 00 40 */	addi r3, r30, 0x40
/* 80146098 00142E98  D0 03 00 04 */	stfs f0, 4(r3)
lbl_8014609C:
/* 8014609C 00142E9C  57 E0 06 B5 */	rlwinm. r0, r31, 0, 0x1a, 0x1a
/* 801460A0 00142EA0  41 82 00 14 */	beq lbl_801460B4
/* 801460A4 00142EA4  C0 02 A6 28 */	lfs f0, _2903-_SDA2_BASE_(r2)
/* 801460A8 00142EA8  38 7E 00 40 */	addi r3, r30, 0x40
/* 801460AC 00142EAC  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 801460B0 00142EB0  48 00 00 10 */	b lbl_801460C0
lbl_801460B4:
/* 801460B4 00142EB4  C0 02 A6 2C */	lfs f0, _2904-_SDA2_BASE_(r2)
/* 801460B8 00142EB8  38 7E 00 40 */	addi r3, r30, 0x40
/* 801460BC 00142EBC  D0 03 00 0C */	stfs f0, 0xc(r3)
lbl_801460C0:
/* 801460C0 00142EC0  57 E0 06 73 */	rlwinm. r0, r31, 0, 0x19, 0x19
/* 801460C4 00142EC4  41 82 00 14 */	beq lbl_801460D8
/* 801460C8 00142EC8  C0 02 A6 28 */	lfs f0, _2903-_SDA2_BASE_(r2)
/* 801460CC 00142ECC  38 7E 00 54 */	addi r3, r30, 0x54
/* 801460D0 00142ED0  D0 03 00 04 */	stfs f0, 4(r3)
/* 801460D4 00142ED4  48 00 00 10 */	b lbl_801460E4
lbl_801460D8:
/* 801460D8 00142ED8  C0 02 A6 2C */	lfs f0, _2904-_SDA2_BASE_(r2)
/* 801460DC 00142EDC  38 7E 00 54 */	addi r3, r30, 0x54
/* 801460E0 00142EE0  D0 03 00 04 */	stfs f0, 4(r3)
lbl_801460E4:
/* 801460E4 00142EE4  57 E0 06 31 */	rlwinm. r0, r31, 0, 0x18, 0x18
/* 801460E8 00142EE8  41 82 00 14 */	beq lbl_801460FC
/* 801460EC 00142EEC  C0 02 A6 28 */	lfs f0, _2903-_SDA2_BASE_(r2)
/* 801460F0 00142EF0  38 7E 00 54 */	addi r3, r30, 0x54
/* 801460F4 00142EF4  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 801460F8 00142EF8  48 00 04 48 */	b lbl_80146540
lbl_801460FC:
/* 801460FC 00142EFC  C0 02 A6 2C */	lfs f0, _2904-_SDA2_BASE_(r2)
/* 80146100 00142F00  38 7E 00 54 */	addi r3, r30, 0x54
/* 80146104 00142F04  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 80146108 00142F08  48 00 04 38 */	b lbl_80146540
lbl_8014610C:
/* 8014610C 00142F0C  80 9D 05 48 */	lwz r4, 0x548(r29)
/* 80146110 00142F10  38 61 00 10 */	addi r3, r1, 0x10
/* 80146114 00142F14  80 1D 05 4C */	lwz r0, 0x54c(r29)
/* 80146118 00142F18  1C 84 00 0C */	mulli r4, r4, 0xc
/* 8014611C 00142F1C  1C A0 00 0C */	mulli r5, r0, 0xc
/* 80146120 00142F20  38 84 03 FC */	addi r4, r4, 0x3fc
/* 80146124 00142F24  38 A5 03 FC */	addi r5, r5, 0x3fc
/* 80146128 00142F28  7C 9D 22 14 */	add r4, r29, r4
/* 8014612C 00142F2C  7C BD 2A 14 */	add r5, r29, r5
/* 80146130 00142F30  4B EC 85 61 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 80146134 00142F34  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80146138 00142F38  38 61 00 10 */	addi r3, r1, 0x10
/* 8014613C 00142F3C  7C 64 1B 78 */	mr r4, r3
/* 80146140 00142F40  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80146144 00142F44  4B F0 81 AD */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 80146148 00142F48  80 7D 00 24 */	lwz r3, 0x24(r29)
/* 8014614C 00142F4C  80 BD 00 48 */	lwz r5, 0x48(r29)
/* 80146150 00142F50  80 83 00 4C */	lwz r4, 0x4c(r3)
/* 80146154 00142F54  C0 22 A5 68 */	lfs f1, _1380-_SDA2_BASE_(r2)
/* 80146158 00142F58  38 65 00 20 */	addi r3, r5, 0x20
/* 8014615C 00142F5C  38 84 00 20 */	addi r4, r4, 0x20
/* 80146160 00142F60  4B EC 4F 31 */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 80146164 00142F64  80 7D 00 48 */	lwz r3, 0x48(r29)
/* 80146168 00142F68  38 81 00 10 */	addi r4, r1, 0x10
/* 8014616C 00142F6C  C0 22 A5 48 */	lfs f1, _1192-_SDA2_BASE_(r2)
/* 80146170 00142F70  38 63 00 20 */	addi r3, r3, 0x20
/* 80146174 00142F74  4B EC EE E5 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 80146178 00142F78  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 8014617C 00142F7C  80 7D 00 48 */	lwz r3, 0x48(r29)
/* 80146180 00142F80  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 80146184 00142F84  80 7D 00 48 */	lwz r3, 0x48(r29)
/* 80146188 00142F88  38 63 00 20 */	addi r3, r3, 0x20
/* 8014618C 00142F8C  7C 64 1B 78 */	mr r4, r3
/* 80146190 00142F90  4B F0 81 61 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 80146194 00142F94  80 7D 00 48 */	lwz r3, 0x48(r29)
/* 80146198 00142F98  38 83 00 10 */	addi r4, r3, 0x10
/* 8014619C 00142F9C  38 A3 00 20 */	addi r5, r3, 0x20
/* 801461A0 00142FA0  4B EC EE ED */	bl xVec3Cross__FP5xVec3PC5xVec3PC5xVec3
/* 801461A4 00142FA4  C0 39 00 4C */	lfs f1, 0x4c(r25)
/* 801461A8 00142FA8  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 801461AC 00142FAC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801461B0 00142FB0  40 80 00 3C */	bge lbl_801461EC
/* 801461B4 00142FB4  80 7D 00 48 */	lwz r3, 0x48(r29)
/* 801461B8 00142FB8  EC 20 08 28 */	fsubs f1, f0, f1
/* 801461BC 00142FBC  38 99 00 5C */	addi r4, r25, 0x5c
/* 801461C0 00142FC0  38 63 00 30 */	addi r3, r3, 0x30
/* 801461C4 00142FC4  4B EC 4E CD */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 801461C8 00142FC8  80 1D 05 48 */	lwz r0, 0x548(r29)
/* 801461CC 00142FCC  80 7D 00 48 */	lwz r3, 0x48(r29)
/* 801461D0 00142FD0  1C 80 00 0C */	mulli r4, r0, 0xc
/* 801461D4 00142FD4  C0 39 00 4C */	lfs f1, 0x4c(r25)
/* 801461D8 00142FD8  38 63 00 30 */	addi r3, r3, 0x30
/* 801461DC 00142FDC  38 84 03 FC */	addi r4, r4, 0x3fc
/* 801461E0 00142FE0  7C 9D 22 14 */	add r4, r29, r4
/* 801461E4 00142FE4  4B EC EE 75 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 801461E8 00142FE8  48 00 03 58 */	b lbl_80146540
lbl_801461EC:
/* 801461EC 00142FEC  80 1D 05 48 */	lwz r0, 0x548(r29)
/* 801461F0 00142FF0  80 7D 00 48 */	lwz r3, 0x48(r29)
/* 801461F4 00142FF4  1C 80 00 0C */	mulli r4, r0, 0xc
/* 801461F8 00142FF8  38 63 00 30 */	addi r3, r3, 0x30
/* 801461FC 00142FFC  38 84 03 FC */	addi r4, r4, 0x3fc
/* 80146200 00143000  7C 9D 22 14 */	add r4, r29, r4
/* 80146204 00143004  4B F0 82 D9 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 80146208 00143008  48 00 03 38 */	b lbl_80146540
lbl_8014620C:
/* 8014620C 0014300C  28 00 00 01 */	cmplwi r0, 1
/* 80146210 00143010  40 82 03 00 */	bne lbl_80146510
/* 80146214 00143014  C0 59 00 4C */	lfs f2, 0x4c(r25)
/* 80146218 00143018  C0 39 00 58 */	lfs f1, 0x58(r25)
/* 8014621C 0014301C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80146220 00143020  40 81 01 30 */	ble lbl_80146350
/* 80146224 00143024  38 00 00 02 */	li r0, 2
/* 80146228 00143028  3C 60 80 27 */	lis r3, bossSandyStrings@ha
/* 8014622C 0014302C  38 63 D1 9C */	addi r3, r3, bossSandyStrings@l
/* 80146230 00143030  90 19 00 50 */	stw r0, 0x50(r25)
/* 80146234 00143034  38 63 06 74 */	addi r3, r3, 0x674
/* 80146238 00143038  4B F0 5F DD */	bl xStrHash__FPCc
/* 8014623C 0014303C  C0 22 A5 F4 */	lfs f1, _2265-_SDA2_BASE_(r2)
/* 80146240 00143040  7F A6 EB 78 */	mr r6, r29
/* 80146244 00143044  C0 42 A4 C8 */	lfs f2, __830-_SDA2_BASE_(r2)
/* 80146248 00143048  38 80 00 00 */	li r4, 0
/* 8014624C 0014304C  C0 62 A6 04 */	lfs f3, _2518-_SDA2_BASE_(r2)
/* 80146250 00143050  38 A0 00 00 */	li r5, 0
/* 80146254 00143054  C0 82 A4 E8 */	lfs f4, _1032-_SDA2_BASE_(r2)
/* 80146258 00143058  38 E0 00 00 */	li r7, 0
/* 8014625C 0014305C  4B F0 99 71 */	bl xSndPlay3D__FUiffUiUiP4xEntf14sound_categoryf
/* 80146260 00143060  80 7D 0A F0 */	lwz r3, 0xaf0(r29)
/* 80146264 00143064  28 03 00 00 */	cmplwi r3, 0
/* 80146268 00143068  41 82 00 10 */	beq lbl_80146278
/* 8014626C 0014306C  4B F0 2F 95 */	bl xSndStop__FUi
/* 80146270 00143070  38 00 00 00 */	li r0, 0
/* 80146274 00143074  90 1D 0A F0 */	stw r0, 0xaf0(r29)
lbl_80146278:
/* 80146278 00143078  80 1D 02 C0 */	lwz r0, 0x2c0(r29)
/* 8014627C 0014307C  54 00 07 74 */	rlwinm r0, r0, 0, 0x1d, 0x1a
/* 80146280 00143080  90 1D 02 C0 */	stw r0, 0x2c0(r29)
/* 80146284 00143084  C0 02 A4 C8 */	lfs f0, __830-_SDA2_BASE_(r2)
/* 80146288 00143088  D0 19 00 4C */	stfs f0, 0x4c(r25)
/* 8014628C 0014308C  80 19 00 54 */	lwz r0, 0x54(r25)
/* 80146290 00143090  28 00 00 00 */	cmplwi r0, 0
/* 80146294 00143094  40 82 00 84 */	bne lbl_80146318
/* 80146298 00143098  7F 23 CB 78 */	mr r3, r25
/* 8014629C 0014309C  38 80 00 20 */	li r4, 0x20
/* 801462A0 001430A0  38 A0 00 00 */	li r5, 0
/* 801462A4 001430A4  4B F8 F0 75 */	bl DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi
/* 801462A8 001430A8  C0 02 A5 14 */	lfs f0, _1064-_SDA2_BASE_(r2)
/* 801462AC 001430AC  3B 00 00 00 */	li r24, 0
/* 801462B0 001430B0  3B E0 00 00 */	li r31, 0
/* 801462B4 001430B4  D0 01 00 0C */	stfs f0, 0xc(r1)
lbl_801462B8:
/* 801462B8 001430B8  80 1D 05 4C */	lwz r0, 0x54c(r29)
/* 801462BC 001430BC  38 A1 00 0C */	addi r5, r1, 0xc
/* 801462C0 001430C0  38 80 00 C3 */	li r4, 0xc3
/* 801462C4 001430C4  54 00 20 36 */	slwi r0, r0, 4
/* 801462C8 001430C8  7C 60 FA 14 */	add r3, r0, r31
/* 801462CC 001430CC  38 03 04 5C */	addi r0, r3, 0x45c
/* 801462D0 001430D0  7E FD 00 2E */	lwzx r23, r29, r0
/* 801462D4 001430D4  7E E3 BB 78 */	mr r3, r23
/* 801462D8 001430D8  4B ED 93 8D */	bl zEntEvent__FP5xBaseUiPCf
/* 801462DC 001430DC  80 97 00 24 */	lwz r4, 0x24(r23)
/* 801462E0 001430E0  7E E3 BB 78 */	mr r3, r23
/* 801462E4 001430E4  A0 04 00 44 */	lhz r0, 0x44(r4)
/* 801462E8 001430E8  60 00 00 02 */	ori r0, r0, 2
/* 801462EC 001430EC  B0 04 00 44 */	sth r0, 0x44(r4)
/* 801462F0 001430F0  4B ED 55 09 */	bl xEntShow__FP4xEnt
/* 801462F4 001430F4  3B 18 00 01 */	addi r24, r24, 1
/* 801462F8 001430F8  3B FF 00 04 */	addi r31, r31, 4
/* 801462FC 001430FC  2C 18 00 04 */	cmpwi r24, 4
/* 80146300 00143100  41 80 FF B8 */	blt lbl_801462B8
/* 80146304 00143104  80 1D 05 4C */	lwz r0, 0x54c(r29)
/* 80146308 00143108  54 00 10 3A */	slwi r0, r0, 2
/* 8014630C 0014310C  7C 7D 02 14 */	add r3, r29, r0
/* 80146310 00143110  80 63 04 DC */	lwz r3, 0x4dc(r3)
/* 80146314 00143114  4B ED 54 D5 */	bl xEntHide__FP4xEnt
lbl_80146318:
/* 80146318 00143118  38 00 00 00 */	li r0, 0
/* 8014631C 0014311C  38 DE 00 68 */	addi r6, r30, 0x68
/* 80146320 00143120  90 19 00 54 */	stw r0, 0x54(r25)
/* 80146324 00143124  38 BE 00 7C */	addi r5, r30, 0x7c
/* 80146328 00143128  38 9E 00 40 */	addi r4, r30, 0x40
/* 8014632C 0014312C  38 7E 00 54 */	addi r3, r30, 0x54
/* 80146330 00143130  90 06 00 10 */	stw r0, 0x10(r6)
/* 80146334 00143134  90 05 00 10 */	stw r0, 0x10(r5)
/* 80146338 00143138  90 04 00 10 */	stw r0, 0x10(r4)
/* 8014633C 0014313C  90 03 00 10 */	stw r0, 0x10(r3)
/* 80146340 00143140  80 1D 02 C0 */	lwz r0, 0x2c0(r29)
/* 80146344 00143144  54 00 07 74 */	rlwinm r0, r0, 0, 0x1d, 0x1a
/* 80146348 00143148  90 1D 02 C0 */	stw r0, 0x2c0(r29)
/* 8014634C 0014314C  48 00 01 F4 */	b lbl_80146540
lbl_80146350:
/* 80146350 00143150  80 19 00 54 */	lwz r0, 0x54(r25)
/* 80146354 00143154  28 00 00 00 */	cmplwi r0, 0
/* 80146358 00143158  40 82 00 9C */	bne lbl_801463F4
/* 8014635C 0014315C  C0 02 A5 74 */	lfs f0, _1463-_SDA2_BASE_(r2)
/* 80146360 00143160  EC 01 00 28 */	fsubs f0, f1, f0
/* 80146364 00143164  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80146368 00143168  40 81 00 8C */	ble lbl_801463F4
/* 8014636C 0014316C  38 00 00 01 */	li r0, 1
/* 80146370 00143170  3A E0 00 00 */	li r23, 0
/* 80146374 00143174  90 19 00 54 */	stw r0, 0x54(r25)
/* 80146378 00143178  3B C0 00 00 */	li r30, 0
/* 8014637C 0014317C  C0 02 A5 14 */	lfs f0, _1064-_SDA2_BASE_(r2)
/* 80146380 00143180  D0 01 00 08 */	stfs f0, 8(r1)
lbl_80146384:
/* 80146384 00143184  80 1D 05 4C */	lwz r0, 0x54c(r29)
/* 80146388 00143188  38 A1 00 08 */	addi r5, r1, 8
/* 8014638C 0014318C  38 80 00 C3 */	li r4, 0xc3
/* 80146390 00143190  54 00 20 36 */	slwi r0, r0, 4
/* 80146394 00143194  7C 60 F2 14 */	add r3, r0, r30
/* 80146398 00143198  38 03 04 5C */	addi r0, r3, 0x45c
/* 8014639C 0014319C  7F 1D 00 2E */	lwzx r24, r29, r0
/* 801463A0 001431A0  7F 03 C3 78 */	mr r3, r24
/* 801463A4 001431A4  4B ED 92 C1 */	bl zEntEvent__FP5xBaseUiPCf
/* 801463A8 001431A8  80 98 00 24 */	lwz r4, 0x24(r24)
/* 801463AC 001431AC  7F 03 C3 78 */	mr r3, r24
/* 801463B0 001431B0  A0 04 00 44 */	lhz r0, 0x44(r4)
/* 801463B4 001431B4  60 00 00 02 */	ori r0, r0, 2
/* 801463B8 001431B8  B0 04 00 44 */	sth r0, 0x44(r4)
/* 801463BC 001431BC  4B ED 54 3D */	bl xEntShow__FP4xEnt
/* 801463C0 001431C0  3A F7 00 01 */	addi r23, r23, 1
/* 801463C4 001431C4  3B DE 00 04 */	addi r30, r30, 4
/* 801463C8 001431C8  2C 17 00 04 */	cmpwi r23, 4
/* 801463CC 001431CC  41 80 FF B8 */	blt lbl_80146384
/* 801463D0 001431D0  80 1D 05 4C */	lwz r0, 0x54c(r29)
/* 801463D4 001431D4  54 00 10 3A */	slwi r0, r0, 2
/* 801463D8 001431D8  7C 7D 02 14 */	add r3, r29, r0
/* 801463DC 001431DC  80 63 04 DC */	lwz r3, 0x4dc(r3)
/* 801463E0 001431E0  4B ED 54 09 */	bl xEntHide__FP4xEnt
/* 801463E4 001431E4  7F 23 CB 78 */	mr r3, r25
/* 801463E8 001431E8  38 80 00 20 */	li r4, 0x20
/* 801463EC 001431EC  38 A0 00 00 */	li r5, 0
/* 801463F0 001431F0  4B F8 EF 29 */	bl DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi
lbl_801463F4:
/* 801463F4 001431F4  C0 39 00 4C */	lfs f1, 0x4c(r25)
/* 801463F8 001431F8  C0 19 00 58 */	lfs f0, 0x58(r25)
/* 801463FC 001431FC  80 1D 05 4C */	lwz r0, 0x54c(r29)
/* 80146400 00143200  EF C1 00 24 */	fdivs f30, f1, f0
/* 80146404 00143204  80 7D 00 48 */	lwz r3, 0x48(r29)
/* 80146408 00143208  1C 80 00 0C */	mulli r4, r0, 0xc
/* 8014640C 0014320C  38 63 00 30 */	addi r3, r3, 0x30
/* 80146410 00143210  38 84 03 FC */	addi r4, r4, 0x3fc
/* 80146414 00143214  7C 9D 22 14 */	add r4, r29, r4
/* 80146418 00143218  FC 20 F0 90 */	fmr f1, f30
/* 8014641C 0014321C  4B EC 4C 75 */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 80146420 00143220  80 1D 05 48 */	lwz r0, 0x548(r29)
/* 80146424 00143224  C0 02 A4 CC */	lfs f0, __831-_SDA2_BASE_(r2)
/* 80146428 00143228  1C 80 00 0C */	mulli r4, r0, 0xc
/* 8014642C 0014322C  80 7D 00 48 */	lwz r3, 0x48(r29)
/* 80146430 00143230  EC 20 F0 28 */	fsubs f1, f0, f30
/* 80146434 00143234  38 63 00 30 */	addi r3, r3, 0x30
/* 80146438 00143238  38 84 03 FC */	addi r4, r4, 0x3fc
/* 8014643C 0014323C  7C 9D 22 14 */	add r4, r29, r4
/* 80146440 00143240  4B EC EC 19 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 80146444 00143244  80 7D 00 48 */	lwz r3, 0x48(r29)
/* 80146448 00143248  38 63 00 30 */	addi r3, r3, 0x30
/* 8014644C 0014324C  4B EC EC 81 */	bl xVec3Length2__FPC5xVec3
/* 80146450 00143250  80 7D 02 B8 */	lwz r3, 0x2b8(r29)
/* 80146454 00143254  80 03 00 24 */	lwz r0, 0x24(r3)
/* 80146458 00143258  60 00 00 01 */	ori r0, r0, 1
/* 8014645C 0014325C  90 03 00 24 */	stw r0, 0x24(r3)
/* 80146460 00143260  80 7D 02 B8 */	lwz r3, 0x2b8(r29)
/* 80146464 00143264  80 03 00 28 */	lwz r0, 0x28(r3)
/* 80146468 00143268  60 00 00 01 */	ori r0, r0, 1
/* 8014646C 0014326C  90 03 00 28 */	stw r0, 0x28(r3)
/* 80146470 00143270  80 7D 02 B8 */	lwz r3, 0x2b8(r29)
/* 80146474 00143274  80 03 00 2C */	lwz r0, 0x2c(r3)
/* 80146478 00143278  60 00 00 01 */	ori r0, r0, 1
/* 8014647C 0014327C  90 03 00 2C */	stw r0, 0x2c(r3)
/* 80146480 00143280  80 7D 02 B8 */	lwz r3, 0x2b8(r29)
/* 80146484 00143284  80 03 00 30 */	lwz r0, 0x30(r3)
/* 80146488 00143288  60 00 00 01 */	ori r0, r0, 1
/* 8014648C 0014328C  90 03 00 30 */	stw r0, 0x30(r3)
/* 80146490 00143290  80 1D 02 D8 */	lwz r0, 0x2d8(r29)
/* 80146494 00143294  2C 00 00 03 */	cmpwi r0, 3
/* 80146498 00143298  40 82 00 44 */	bne lbl_801464DC
/* 8014649C 0014329C  80 7D 02 B8 */	lwz r3, 0x2b8(r29)
/* 801464A0 001432A0  80 03 00 08 */	lwz r0, 8(r3)
/* 801464A4 001432A4  60 00 00 01 */	ori r0, r0, 1
/* 801464A8 001432A8  90 03 00 08 */	stw r0, 8(r3)
/* 801464AC 001432AC  80 7D 02 B8 */	lwz r3, 0x2b8(r29)
/* 801464B0 001432B0  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801464B4 001432B4  60 00 00 01 */	ori r0, r0, 1
/* 801464B8 001432B8  90 03 00 0C */	stw r0, 0xc(r3)
/* 801464BC 001432BC  80 7D 02 B8 */	lwz r3, 0x2b8(r29)
/* 801464C0 001432C0  80 03 00 10 */	lwz r0, 0x10(r3)
/* 801464C4 001432C4  60 00 00 01 */	ori r0, r0, 1
/* 801464C8 001432C8  90 03 00 10 */	stw r0, 0x10(r3)
/* 801464CC 001432CC  80 7D 02 B8 */	lwz r3, 0x2b8(r29)
/* 801464D0 001432D0  80 03 00 14 */	lwz r0, 0x14(r3)
/* 801464D4 001432D4  60 00 00 01 */	ori r0, r0, 1
/* 801464D8 001432D8  90 03 00 14 */	stw r0, 0x14(r3)
lbl_801464DC:
/* 801464DC 001432DC  80 1D 02 C0 */	lwz r0, 0x2c0(r29)
/* 801464E0 001432E0  60 00 00 01 */	ori r0, r0, 1
/* 801464E4 001432E4  90 1D 02 C0 */	stw r0, 0x2c0(r29)
/* 801464E8 001432E8  80 1D 02 C0 */	lwz r0, 0x2c0(r29)
/* 801464EC 001432EC  60 00 00 08 */	ori r0, r0, 8
/* 801464F0 001432F0  90 1D 02 C0 */	stw r0, 0x2c0(r29)
/* 801464F4 001432F4  80 1D 02 D8 */	lwz r0, 0x2d8(r29)
/* 801464F8 001432F8  2C 00 00 03 */	cmpwi r0, 3
/* 801464FC 001432FC  40 82 00 44 */	bne lbl_80146540
/* 80146500 00143300  80 1D 02 C0 */	lwz r0, 0x2c0(r29)
/* 80146504 00143304  60 00 00 10 */	ori r0, r0, 0x10
/* 80146508 00143308  90 1D 02 C0 */	stw r0, 0x2c0(r29)
/* 8014650C 0014330C  48 00 00 34 */	b lbl_80146540
lbl_80146510:
/* 80146510 00143310  C0 39 00 4C */	lfs f1, 0x4c(r25)
/* 80146514 00143314  C0 02 A4 E8 */	lfs f0, _1032-_SDA2_BASE_(r2)
/* 80146518 00143318  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8014651C 0014331C  40 81 00 24 */	ble lbl_80146540
/* 80146520 00143320  80 7D 02 B8 */	lwz r3, 0x2b8(r29)
/* 80146524 00143324  80 03 00 28 */	lwz r0, 0x28(r3)
/* 80146528 00143328  60 00 00 10 */	ori r0, r0, 0x10
/* 8014652C 0014332C  90 03 00 28 */	stw r0, 0x28(r3)
/* 80146530 00143330  80 7D 02 B8 */	lwz r3, 0x2b8(r29)
/* 80146534 00143334  80 03 00 30 */	lwz r0, 0x30(r3)
/* 80146538 00143338  60 00 00 10 */	ori r0, r0, 0x10
/* 8014653C 0014333C  90 03 00 30 */	stw r0, 0x30(r3)
lbl_80146540:
/* 80146540 00143340  FC 20 F8 90 */	fmr f1, f31
/* 80146544 00143344  7F 23 CB 78 */	mr r3, r25
/* 80146548 00143348  7F 44 D3 78 */	mr r4, r26
/* 8014654C 0014334C  7F 65 DB 78 */	mr r5, r27
/* 80146550 00143350  7F 86 E3 78 */	mr r6, r28
/* 80146554 00143354  4B FC 85 F5 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
/* 80146558 00143358  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 8014655C 0014335C  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 80146560 00143360  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 80146564 00143364  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 80146568 00143368  BA E1 00 2C */	lmw r23, 0x2c(r1)
/* 8014656C 0014336C  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80146570 00143370  7C 08 03 A6 */	mtlr r0
/* 80146574 00143374  38 21 00 70 */	addi r1, r1, 0x70
/* 80146578 00143378  4E 80 00 20 */	blr 

.endif

.section .rodata
newsfish_cb:
	.incbin "baserom.dol", 0x26A0C8, 0x28
shockwave_cb:
	.incbin "baserom.dol", 0x26A0F0, 0x28
_835:
	.incbin "baserom.dol", 0x26A118, 0x64
.global bossSandyStrings
bossSandyStrings:
	.incbin "baserom.dol", 0x26A17C, 0x684

.section .data
.balign 8
sBone:
	.incbin "baserom.dol", 0x2968A8, 0x88
sBoneOffset:
	.incbin "baserom.dol", 0x296930, 0x114
_1281:
	.incbin "baserom.dol", 0x296A44, 0x2C
/* SPECULATION: link order */
.global __vt__28zNPCGoalBossSandyClothesline
__vt__28zNPCGoalBossSandyClothesline:
	.incbin "baserom.dol", 0x296A70, 0x34
/* SPECULATION: link order */
.global __vt__26zNPCGoalBossSandyRunToRope
__vt__26zNPCGoalBossSandyRunToRope:
	.incbin "baserom.dol", 0x296AA4, 0x34
/* SPECULATION: link order */
.global __vt__22zNPCGoalBossSandyGetUp
__vt__22zNPCGoalBossSandyGetUp:
	.incbin "baserom.dol", 0x296AD8, 0x34
/* SPECULATION: link order */
.global __vt__20zNPCGoalBossSandySit
__vt__20zNPCGoalBossSandySit:
	.incbin "baserom.dol", 0x296B0C, 0x34
/* SPECULATION: link order */
.global __vt__21zNPCGoalBossSandyLeap
__vt__21zNPCGoalBossSandyLeap:
	.incbin "baserom.dol", 0x296B40, 0x34
/* SPECULATION: link order */
.global __vt__26zNPCGoalBossSandyElbowDrop
__vt__26zNPCGoalBossSandyElbowDrop:
	.incbin "baserom.dol", 0x296B74, 0x34
/* SPECULATION: link order */
.global __vt__23zNPCGoalBossSandyNoHead
__vt__23zNPCGoalBossSandyNoHead:
	.incbin "baserom.dol", 0x296BA8, 0x34
/* SPECULATION: link order */
.global __vt__22zNPCGoalBossSandyMelee
__vt__22zNPCGoalBossSandyMelee:
	.incbin "baserom.dol", 0x296BDC, 0x34
/* SPECULATION: link order */
.global __vt__22zNPCGoalBossSandyChase
__vt__22zNPCGoalBossSandyChase:
	.incbin "baserom.dol", 0x296C10, 0x34
/* SPECULATION: link order */
.global __vt__22zNPCGoalBossSandyTaunt
__vt__22zNPCGoalBossSandyTaunt:
	.incbin "baserom.dol", 0x296C44, 0x34
/* SPECULATION: link order */
.global __vt__21zNPCGoalBossSandyIdle
__vt__21zNPCGoalBossSandyIdle:
	.incbin "baserom.dol", 0x296C78, 0x34
/* SPECULATION: link order */
.global __vt__10zNPCBSandy
__vt__10zNPCBSandy:
	.incbin "baserom.dol", 0x296CAC, 0xDC

.section .bss
.balign 8
sSinTable:
	.skip 0x9C
sNFSoundValue:
	.skip 0x78
.global BDErecord
BDErecord:
	.skip 0x424

.section .sbss
.balign 8
sOthersHaventBeenAdded:
	.skip 0x1
sPCWasBubbleBouncing:
	.skip 0x3
sRadiusOfRing:
	.skip 0x4
sElbowDropTimer:
	.skip 0x4
sChaseTimer:
	.skip 0x4
sNumAttacks:
	.skip 0x4
sDidClothesline:
	.skip 0x4
sElbowDropThreshold:
	.skip 0x4
.global sSandyPtr
sSandyPtr:
	.skip 0x4
sCamSubTarget:
	.skip 0x4
sCurrYaw:
	.skip 0x4
sCurrHeight:
	.skip 0x4
sCurrRadius:
	.skip 0x4
sCurrPitch:
	.skip 0x4

.global sCurrNFSound
sCurrNFSound:
	.skip 0x4

.section .sdata
.balign 8
sUseBossCam:
	.incbin "baserom.dol", 0x2B5E40, 0x1
sWasUsingBossCam:
	.incbin "baserom.dol", 0x2B5E41, 0x3
sPCHeightDiff:
	.incbin "baserom.dol", 0x2B5E44, 0x4
sHeadPopOffFactor:
	.incbin "baserom.dol", 0x2B5E48, 0x4
sLeftFootBones:
	.incbin "baserom.dol", 0x2B5E4C, 0x8
sRightFootBones:
	.incbin "baserom.dol", 0x2B5E54, 0xC

.section .sdata2
.global __830
__830:
	.incbin "baserom.dol", 0x2B86E8, 0x4
.global __831
__831:
	.incbin "baserom.dol", 0x2B86EC, 0x4
.global __842
__842:
	.incbin "baserom.dol", 0x2B86F0, 0x4
.global _843
_843:
	.incbin "baserom.dol", 0x2B86F4, 0x4
.global _864
_864:
	.incbin "baserom.dol", 0x2B86F8, 0x4
.global _1029
_1029:
	.incbin "baserom.dol", 0x2B86FC, 0x4
.global _1030
_1030:
	.incbin "baserom.dol", 0x2B8700, 0x4
.global _1031
_1031:
	.incbin "baserom.dol", 0x2B8704, 0x4
.global _1032
_1032:
	.incbin "baserom.dol", 0x2B8708, 0x4
.global _1033
_1033:
	.incbin "baserom.dol", 0x2B870C, 0x4
.global _1034
_1034:
	.incbin "baserom.dol", 0x2B8710, 0x4
.global _1035
_1035:
	.incbin "baserom.dol", 0x2B8714, 0x4
.global _1036
_1036:
	.incbin "baserom.dol", 0x2B8718, 0x4
.global _1037
_1037:
	.incbin "baserom.dol", 0x2B871C, 0x4
.global _1039
_1039:
	.incbin "baserom.dol", 0x2B8720, 0x8
.global _1061_1
_1061_1:
	.incbin "baserom.dol", 0x2B8728, 0x4
.global _1062_1
_1062_1:
	.incbin "baserom.dol", 0x2B872C, 0x4
.global _1063
_1063:
	.incbin "baserom.dol", 0x2B8730, 0x4
.global _1064
_1064:
	.incbin "baserom.dol", 0x2B8734, 0x4
.global _1065
_1065:
	.incbin "baserom.dol", 0x2B8738, 0x4
.global _1066
_1066:
	.incbin "baserom.dol", 0x2B873C, 0x4
.global _1067
_1067:
	.incbin "baserom.dol", 0x2B8740, 0x4
.global _1068
_1068:
	.incbin "baserom.dol", 0x2B8744, 0x4
.global _1069
_1069:
	.incbin "baserom.dol", 0x2B8748, 0x4
.global _1070
_1070:
	.incbin "baserom.dol", 0x2B874C, 0x4
.global _1071
_1071:
	.incbin "baserom.dol", 0x2B8750, 0x4
.global _1072
_1072:
	.incbin "baserom.dol", 0x2B8754, 0x4
.global _1188_1
_1188_1:
	.incbin "baserom.dol", 0x2B8758, 0x4
.global _1189
_1189:
	.incbin "baserom.dol", 0x2B875C, 0x4
.global _1190
_1190:
	.incbin "baserom.dol", 0x2B8760, 0x4
.global _1191
_1191:
	.incbin "baserom.dol", 0x2B8764, 0x4
.global _1192_1
_1192_1:
	.incbin "baserom.dol", 0x2B8768, 0x4
.global _1193
_1193:
	.incbin "baserom.dol", 0x2B876C, 0x4
.global _1194
_1194:
	.incbin "baserom.dol", 0x2B8770, 0x4
.global _1195
_1195:
	.incbin "baserom.dol", 0x2B8774, 0x4
.global _1196
_1196:
	.incbin "baserom.dol", 0x2B8778, 0x4
.global _1209
_1209:
	.incbin "baserom.dol", 0x2B877C, 0x4
.global _1378
_1378:
	.incbin "baserom.dol", 0x2B8780, 0x4
.global _1379
_1379:
	.incbin "baserom.dol", 0x2B8784, 0x4
.global _1380
_1380:
	.incbin "baserom.dol", 0x2B8788, 0x4
.global _1381
_1381:
	.incbin "baserom.dol", 0x2B878C, 0x4
.global _1462
_1462:
	.incbin "baserom.dol", 0x2B8790, 0x4
.global _1463
_1463:
	.incbin "baserom.dol", 0x2B8794, 0x4
.global _1464
_1464:
	.incbin "baserom.dol", 0x2B8798, 0x4
.global _1465
_1465:
	.incbin "baserom.dol", 0x2B879C, 0x4
.global _1466
_1466:
	.incbin "baserom.dol", 0x2B87A0, 0x4
.global _1521
_1521:
	.incbin "baserom.dol", 0x2B87A4, 0x4
.global _1522
_1522:
	.incbin "baserom.dol", 0x2B87A8, 0x4
.global _1523
_1523:
	.incbin "baserom.dol", 0x2B87AC, 0x4
.global _1524
_1524:
	.incbin "baserom.dol", 0x2B87B0, 0x4
.global _1525
_1525:
	.incbin "baserom.dol", 0x2B87B4, 0x4
.global _1526_0
_1526_0:
	.incbin "baserom.dol", 0x2B87B8, 0x4
.global _1527
_1527:
	.incbin "baserom.dol", 0x2B87BC, 0x4
.global _1528
_1528:
	.incbin "baserom.dol", 0x2B87C0, 0x4
.global _1529
_1529:
	.incbin "baserom.dol", 0x2B87C4, 0x4
.global _1530
_1530:
	.incbin "baserom.dol", 0x2B87C8, 0x4
.global _1531
_1531:
	.incbin "baserom.dol", 0x2B87CC, 0x4
.global _1666
_1666:
	.incbin "baserom.dol", 0x2B87D0, 0x4
.global _1667
_1667:
	.incbin "baserom.dol", 0x2B87D4, 0x4
.global _1935
_1935:
	.incbin "baserom.dol", 0x2B87D8, 0x4
.global _1936
_1936:
	.incbin "baserom.dol", 0x2B87DC, 0x4
.global _1937
_1937:
	.incbin "baserom.dol", 0x2B87E0, 0x4
.global _1938
_1938:
	.incbin "baserom.dol", 0x2B87E4, 0x4
.global _1939
_1939:
	.incbin "baserom.dol", 0x2B87E8, 0x4
.global _1940
_1940:
	.incbin "baserom.dol", 0x2B87EC, 0x4
.global _1941
_1941:
	.incbin "baserom.dol", 0x2B87F0, 0x4
.global _1942
_1942:
	.incbin "baserom.dol", 0x2B87F4, 0x4
.global _2154
_2154:
	.incbin "baserom.dol", 0x2B87F8, 0x4
.global _2155
_2155:
	.incbin "baserom.dol", 0x2B87FC, 0x4
.global _2156
_2156:
	.incbin "baserom.dol", 0x2B8800, 0x4
.global _2173
_2173:
	.incbin "baserom.dol", 0x2B8804, 0x4
.global _2236
_2236:
	.incbin "baserom.dol", 0x2B8808, 0x4
.global _2237
_2237:
	.incbin "baserom.dol", 0x2B880C, 0x4
.global _2264
_2264:
	.incbin "baserom.dol", 0x2B8810, 0x4
.global _2265
_2265:
	.incbin "baserom.dol", 0x2B8814, 0x4
.global _2376
_2376:
	.incbin "baserom.dol", 0x2B8818, 0x4
.global _2377
_2377:
	.incbin "baserom.dol", 0x2B881C, 0x4
.global _2517
_2517:
	.incbin "baserom.dol", 0x2B8820, 0x4
.global _2518
_2518:
	.incbin "baserom.dol", 0x2B8824, 0x4
.global _2519
_2519:
	.incbin "baserom.dol", 0x2B8828, 0x4
.global _2520
_2520:
	.incbin "baserom.dol", 0x2B882C, 0x4
.global _2525
_2525:
	.incbin "baserom.dol", 0x2B8830, 0x4
.global _2582
_2582:
	.incbin "baserom.dol", 0x2B8834, 0x4
.global _2633
_2633:
	.incbin "baserom.dol", 0x2B8838, 0x4
.global _2741
_2741:
	.incbin "baserom.dol", 0x2B883C, 0x4
.global _2742
_2742:
	.incbin "baserom.dol", 0x2B8840, 0x4
.global _2818
_2818:
	.incbin "baserom.dol", 0x2B8844, 0x4
.global _2903
_2903:
	.incbin "baserom.dol", 0x2B8848, 0x4
.global _2904
_2904:
	.incbin "baserom.dol", 0x2B884C, 0x4
