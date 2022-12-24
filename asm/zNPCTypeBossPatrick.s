.include "macros.inc"
.file "zNPCTypeBossPatrick.cpp"

# 0x80160144 - 0x80168A2C
.text
.balign 4

# ZNPC_AnimTable_BossPatrick()
.fn ZNPC_AnimTable_BossPatrick__Fv, global
/* 80160144 0015D224  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80160148 0015D228  7C 08 02 A6 */	mflr r0
/* 8016014C 0015D22C  3C 60 80 27 */	lis r3, "@828"@ha
/* 80160150 0015D230  90 01 00 84 */	stw r0, 0x84(r1)
/* 80160154 0015D234  38 63 07 F0 */	addi r3, r3, "@828"@l
/* 80160158 0015D238  38 00 00 0B */	li r0, 0xb
/* 8016015C 0015D23C  38 A1 00 14 */	addi r5, r1, 0x14
/* 80160160 0015D240  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 80160164 0015D244  38 83 FF FC */	addi r4, r3, -0x4
/* 80160168 0015D248  7C 09 03 A6 */	mtctr r0
.L_8016016C:
/* 8016016C 0015D24C  80 64 00 04 */	lwz r3, 0x4(r4)
/* 80160170 0015D250  84 04 00 08 */	lwzu r0, 0x8(r4)
/* 80160174 0015D254  90 65 00 04 */	stw r3, 0x4(r5)
/* 80160178 0015D258  94 05 00 08 */	stwu r0, 0x8(r5)
/* 8016017C 0015D25C  42 00 FF F0 */	bdnz .L_8016016C
/* 80160180 0015D260  80 04 00 04 */	lwz r0, 0x4(r4)
/* 80160184 0015D264  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80160188 0015D268  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 8016018C 0015D26C  38 80 00 00 */	li r4, 0x0
/* 80160190 0015D270  90 05 00 04 */	stw r0, 0x4(r5)
/* 80160194 0015D274  38 63 01 36 */	addi r3, r3, 0x136
/* 80160198 0015D278  38 A0 00 00 */	li r5, 0x0
/* 8016019C 0015D27C  4B EA 6A D5 */	bl xAnimTableNew__FPCcPP10xAnimTableUi
/* 801601A0 0015D280  3C A0 80 00 */	lis r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 801601A4 0015D284  3C 80 80 2A */	lis r4, g_strz_bossanim@ha
/* 801601A8 0015D288  38 05 6C FC */	addi r0, r5, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 801601AC 0015D28C  7C 7F 1B 78 */	mr r31, r3
/* 801601B0 0015D290  90 01 00 08 */	stw r0, 0x8(r1)
/* 801601B4 0015D294  38 00 00 00 */	li r0, 0x0
/* 801601B8 0015D298  38 84 93 A0 */	addi r4, r4, g_strz_bossanim@l
/* 801601BC 0015D29C  38 A0 00 10 */	li r5, 0x10
/* 801601C0 0015D2A0  90 01 00 0C */	stw r0, 0xc(r1)
/* 801601C4 0015D2A4  38 C0 00 00 */	li r6, 0x0
/* 801601C8 0015D2A8  38 E0 00 00 */	li r7, 0x0
/* 801601CC 0015D2AC  39 00 00 00 */	li r8, 0x0
/* 801601D0 0015D2B0  90 01 00 10 */	stw r0, 0x10(r1)
/* 801601D4 0015D2B4  39 20 00 00 */	li r9, 0x0
/* 801601D8 0015D2B8  39 40 00 00 */	li r10, 0x0
/* 801601DC 0015D2BC  80 84 00 04 */	lwz r4, 0x4(r4)
/* 801601E0 0015D2C0  C0 22 A9 C0 */	lfs f1, "@831"@sda21(r2)
/* 801601E4 0015D2C4  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 801601E8 0015D2C8  4B EA 6B 71 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 801601EC 0015D2CC  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 801601F0 0015D2D0  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 801601F4 0015D2D4  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 801601F8 0015D2D8  38 00 00 00 */	li r0, 0x0
/* 801601FC 0015D2DC  90 81 00 08 */	stw r4, 0x8(r1)
/* 80160200 0015D2E0  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 80160204 0015D2E4  7F E3 FB 78 */	mr r3, r31
/* 80160208 0015D2E8  38 A0 00 10 */	li r5, 0x10
/* 8016020C 0015D2EC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80160210 0015D2F0  38 C0 00 00 */	li r6, 0x0
/* 80160214 0015D2F4  38 E0 00 00 */	li r7, 0x0
/* 80160218 0015D2F8  39 00 00 00 */	li r8, 0x0
/* 8016021C 0015D2FC  90 01 00 10 */	stw r0, 0x10(r1)
/* 80160220 0015D300  39 20 00 00 */	li r9, 0x0
/* 80160224 0015D304  39 40 00 00 */	li r10, 0x0
/* 80160228 0015D308  80 84 00 08 */	lwz r4, 0x8(r4)
/* 8016022C 0015D30C  C0 22 A9 C0 */	lfs f1, "@831"@sda21(r2)
/* 80160230 0015D310  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80160234 0015D314  4B EA 6B 25 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80160238 0015D318  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8016023C 0015D31C  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 80160240 0015D320  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80160244 0015D324  38 00 00 00 */	li r0, 0x0
/* 80160248 0015D328  90 81 00 08 */	stw r4, 0x8(r1)
/* 8016024C 0015D32C  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 80160250 0015D330  7F E3 FB 78 */	mr r3, r31
/* 80160254 0015D334  38 A0 00 10 */	li r5, 0x10
/* 80160258 0015D338  90 01 00 0C */	stw r0, 0xc(r1)
/* 8016025C 0015D33C  38 C0 00 00 */	li r6, 0x0
/* 80160260 0015D340  38 E0 00 00 */	li r7, 0x0
/* 80160264 0015D344  39 00 00 00 */	li r8, 0x0
/* 80160268 0015D348  90 01 00 10 */	stw r0, 0x10(r1)
/* 8016026C 0015D34C  39 20 00 00 */	li r9, 0x0
/* 80160270 0015D350  39 40 00 00 */	li r10, 0x0
/* 80160274 0015D354  80 84 00 0C */	lwz r4, 0xc(r4)
/* 80160278 0015D358  C0 22 A9 C0 */	lfs f1, "@831"@sda21(r2)
/* 8016027C 0015D35C  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80160280 0015D360  4B EA 6A D9 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80160284 0015D364  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80160288 0015D368  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 8016028C 0015D36C  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80160290 0015D370  38 00 00 00 */	li r0, 0x0
/* 80160294 0015D374  90 81 00 08 */	stw r4, 0x8(r1)
/* 80160298 0015D378  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 8016029C 0015D37C  7F E3 FB 78 */	mr r3, r31
/* 801602A0 0015D380  38 A0 00 10 */	li r5, 0x10
/* 801602A4 0015D384  90 01 00 0C */	stw r0, 0xc(r1)
/* 801602A8 0015D388  38 C0 00 40 */	li r6, 0x40
/* 801602AC 0015D38C  38 E0 00 00 */	li r7, 0x0
/* 801602B0 0015D390  39 00 00 00 */	li r8, 0x0
/* 801602B4 0015D394  90 01 00 10 */	stw r0, 0x10(r1)
/* 801602B8 0015D398  39 20 00 00 */	li r9, 0x0
/* 801602BC 0015D39C  39 40 00 00 */	li r10, 0x0
/* 801602C0 0015D3A0  80 84 00 10 */	lwz r4, 0x10(r4)
/* 801602C4 0015D3A4  C0 22 A9 C0 */	lfs f1, "@831"@sda21(r2)
/* 801602C8 0015D3A8  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 801602CC 0015D3AC  4B EA 6A 8D */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 801602D0 0015D3B0  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 801602D4 0015D3B4  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 801602D8 0015D3B8  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 801602DC 0015D3BC  38 00 00 00 */	li r0, 0x0
/* 801602E0 0015D3C0  90 81 00 08 */	stw r4, 0x8(r1)
/* 801602E4 0015D3C4  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 801602E8 0015D3C8  7F E3 FB 78 */	mr r3, r31
/* 801602EC 0015D3CC  38 A0 00 10 */	li r5, 0x10
/* 801602F0 0015D3D0  90 01 00 0C */	stw r0, 0xc(r1)
/* 801602F4 0015D3D4  38 C0 00 00 */	li r6, 0x0
/* 801602F8 0015D3D8  38 E0 00 00 */	li r7, 0x0
/* 801602FC 0015D3DC  39 00 00 00 */	li r8, 0x0
/* 80160300 0015D3E0  90 01 00 10 */	stw r0, 0x10(r1)
/* 80160304 0015D3E4  39 20 00 00 */	li r9, 0x0
/* 80160308 0015D3E8  39 40 00 00 */	li r10, 0x0
/* 8016030C 0015D3EC  80 84 00 18 */	lwz r4, 0x18(r4)
/* 80160310 0015D3F0  C0 22 A9 C0 */	lfs f1, "@831"@sda21(r2)
/* 80160314 0015D3F4  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80160318 0015D3F8  4B EA 6A 41 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8016031C 0015D3FC  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80160320 0015D400  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 80160324 0015D404  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80160328 0015D408  38 00 00 00 */	li r0, 0x0
/* 8016032C 0015D40C  90 81 00 08 */	stw r4, 0x8(r1)
/* 80160330 0015D410  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 80160334 0015D414  7F E3 FB 78 */	mr r3, r31
/* 80160338 0015D418  38 A0 00 10 */	li r5, 0x10
/* 8016033C 0015D41C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80160340 0015D420  38 C0 00 00 */	li r6, 0x0
/* 80160344 0015D424  38 E0 00 00 */	li r7, 0x0
/* 80160348 0015D428  39 00 00 00 */	li r8, 0x0
/* 8016034C 0015D42C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80160350 0015D430  39 20 00 00 */	li r9, 0x0
/* 80160354 0015D434  39 40 00 00 */	li r10, 0x0
/* 80160358 0015D438  80 84 00 1C */	lwz r4, 0x1c(r4)
/* 8016035C 0015D43C  C0 22 A9 C0 */	lfs f1, "@831"@sda21(r2)
/* 80160360 0015D440  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80160364 0015D444  4B EA 69 F5 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80160368 0015D448  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8016036C 0015D44C  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 80160370 0015D450  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80160374 0015D454  38 00 00 00 */	li r0, 0x0
/* 80160378 0015D458  90 81 00 08 */	stw r4, 0x8(r1)
/* 8016037C 0015D45C  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 80160380 0015D460  7F E3 FB 78 */	mr r3, r31
/* 80160384 0015D464  38 A0 00 10 */	li r5, 0x10
/* 80160388 0015D468  90 01 00 0C */	stw r0, 0xc(r1)
/* 8016038C 0015D46C  38 C0 00 00 */	li r6, 0x0
/* 80160390 0015D470  38 E0 00 00 */	li r7, 0x0
/* 80160394 0015D474  39 00 00 00 */	li r8, 0x0
/* 80160398 0015D478  90 01 00 10 */	stw r0, 0x10(r1)
/* 8016039C 0015D47C  39 20 00 00 */	li r9, 0x0
/* 801603A0 0015D480  39 40 00 00 */	li r10, 0x0
/* 801603A4 0015D484  80 84 00 20 */	lwz r4, 0x20(r4)
/* 801603A8 0015D488  C0 22 A9 C0 */	lfs f1, "@831"@sda21(r2)
/* 801603AC 0015D48C  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 801603B0 0015D490  4B EA 69 A9 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 801603B4 0015D494  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 801603B8 0015D498  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 801603BC 0015D49C  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 801603C0 0015D4A0  38 00 00 00 */	li r0, 0x0
/* 801603C4 0015D4A4  90 81 00 08 */	stw r4, 0x8(r1)
/* 801603C8 0015D4A8  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 801603CC 0015D4AC  7F E3 FB 78 */	mr r3, r31
/* 801603D0 0015D4B0  38 A0 00 10 */	li r5, 0x10
/* 801603D4 0015D4B4  90 01 00 0C */	stw r0, 0xc(r1)
/* 801603D8 0015D4B8  38 C0 00 00 */	li r6, 0x0
/* 801603DC 0015D4BC  38 E0 00 00 */	li r7, 0x0
/* 801603E0 0015D4C0  39 00 00 00 */	li r8, 0x0
/* 801603E4 0015D4C4  90 01 00 10 */	stw r0, 0x10(r1)
/* 801603E8 0015D4C8  39 20 00 00 */	li r9, 0x0
/* 801603EC 0015D4CC  39 40 00 00 */	li r10, 0x0
/* 801603F0 0015D4D0  80 84 00 24 */	lwz r4, 0x24(r4)
/* 801603F4 0015D4D4  C0 22 A9 C0 */	lfs f1, "@831"@sda21(r2)
/* 801603F8 0015D4D8  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 801603FC 0015D4DC  4B EA 69 5D */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80160400 0015D4E0  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80160404 0015D4E4  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 80160408 0015D4E8  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8016040C 0015D4EC  38 00 00 00 */	li r0, 0x0
/* 80160410 0015D4F0  90 81 00 08 */	stw r4, 0x8(r1)
/* 80160414 0015D4F4  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 80160418 0015D4F8  7F E3 FB 78 */	mr r3, r31
/* 8016041C 0015D4FC  38 A0 00 10 */	li r5, 0x10
/* 80160420 0015D500  90 01 00 0C */	stw r0, 0xc(r1)
/* 80160424 0015D504  38 C0 00 00 */	li r6, 0x0
/* 80160428 0015D508  38 E0 00 00 */	li r7, 0x0
/* 8016042C 0015D50C  39 00 00 00 */	li r8, 0x0
/* 80160430 0015D510  90 01 00 10 */	stw r0, 0x10(r1)
/* 80160434 0015D514  39 20 00 00 */	li r9, 0x0
/* 80160438 0015D518  39 40 00 00 */	li r10, 0x0
/* 8016043C 0015D51C  80 84 00 70 */	lwz r4, 0x70(r4)
/* 80160440 0015D520  C0 22 A9 C0 */	lfs f1, "@831"@sda21(r2)
/* 80160444 0015D524  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80160448 0015D528  4B EA 69 11 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8016044C 0015D52C  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80160450 0015D530  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 80160454 0015D534  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80160458 0015D538  38 00 00 00 */	li r0, 0x0
/* 8016045C 0015D53C  90 81 00 08 */	stw r4, 0x8(r1)
/* 80160460 0015D540  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 80160464 0015D544  7F E3 FB 78 */	mr r3, r31
/* 80160468 0015D548  38 A0 00 10 */	li r5, 0x10
/* 8016046C 0015D54C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80160470 0015D550  38 C0 00 00 */	li r6, 0x0
/* 80160474 0015D554  38 E0 00 00 */	li r7, 0x0
/* 80160478 0015D558  39 00 00 00 */	li r8, 0x0
/* 8016047C 0015D55C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80160480 0015D560  39 20 00 00 */	li r9, 0x0
/* 80160484 0015D564  39 40 00 00 */	li r10, 0x0
/* 80160488 0015D568  80 84 00 74 */	lwz r4, 0x74(r4)
/* 8016048C 0015D56C  C0 22 A9 C0 */	lfs f1, "@831"@sda21(r2)
/* 80160490 0015D570  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80160494 0015D574  4B EA 68 C5 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80160498 0015D578  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 8016049C 0015D57C  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 801604A0 0015D580  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 801604A4 0015D584  38 00 00 00 */	li r0, 0x0
/* 801604A8 0015D588  90 81 00 08 */	stw r4, 0x8(r1)
/* 801604AC 0015D58C  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 801604B0 0015D590  7F E3 FB 78 */	mr r3, r31
/* 801604B4 0015D594  38 A0 00 10 */	li r5, 0x10
/* 801604B8 0015D598  90 01 00 0C */	stw r0, 0xc(r1)
/* 801604BC 0015D59C  38 C0 00 00 */	li r6, 0x0
/* 801604C0 0015D5A0  38 E0 00 00 */	li r7, 0x0
/* 801604C4 0015D5A4  39 00 00 00 */	li r8, 0x0
/* 801604C8 0015D5A8  90 01 00 10 */	stw r0, 0x10(r1)
/* 801604CC 0015D5AC  39 20 00 00 */	li r9, 0x0
/* 801604D0 0015D5B0  39 40 00 00 */	li r10, 0x0
/* 801604D4 0015D5B4  80 84 00 78 */	lwz r4, 0x78(r4)
/* 801604D8 0015D5B8  C0 22 A9 C0 */	lfs f1, "@831"@sda21(r2)
/* 801604DC 0015D5BC  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 801604E0 0015D5C0  4B EA 68 79 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 801604E4 0015D5C4  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 801604E8 0015D5C8  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 801604EC 0015D5CC  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 801604F0 0015D5D0  38 00 00 00 */	li r0, 0x0
/* 801604F4 0015D5D4  90 81 00 08 */	stw r4, 0x8(r1)
/* 801604F8 0015D5D8  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 801604FC 0015D5DC  7F E3 FB 78 */	mr r3, r31
/* 80160500 0015D5E0  38 A0 00 10 */	li r5, 0x10
/* 80160504 0015D5E4  90 01 00 0C */	stw r0, 0xc(r1)
/* 80160508 0015D5E8  38 C0 00 00 */	li r6, 0x0
/* 8016050C 0015D5EC  38 E0 00 00 */	li r7, 0x0
/* 80160510 0015D5F0  39 00 00 00 */	li r8, 0x0
/* 80160514 0015D5F4  90 01 00 10 */	stw r0, 0x10(r1)
/* 80160518 0015D5F8  39 20 00 00 */	li r9, 0x0
/* 8016051C 0015D5FC  39 40 00 00 */	li r10, 0x0
/* 80160520 0015D600  80 84 00 7C */	lwz r4, 0x7c(r4)
/* 80160524 0015D604  C0 22 A9 C0 */	lfs f1, "@831"@sda21(r2)
/* 80160528 0015D608  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 8016052C 0015D60C  4B EA 68 2D */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80160530 0015D610  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80160534 0015D614  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 80160538 0015D618  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8016053C 0015D61C  38 00 00 00 */	li r0, 0x0
/* 80160540 0015D620  90 81 00 08 */	stw r4, 0x8(r1)
/* 80160544 0015D624  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 80160548 0015D628  7F E3 FB 78 */	mr r3, r31
/* 8016054C 0015D62C  38 A0 00 10 */	li r5, 0x10
/* 80160550 0015D630  90 01 00 0C */	stw r0, 0xc(r1)
/* 80160554 0015D634  38 C0 00 00 */	li r6, 0x0
/* 80160558 0015D638  38 E0 00 00 */	li r7, 0x0
/* 8016055C 0015D63C  39 00 00 00 */	li r8, 0x0
/* 80160560 0015D640  90 01 00 10 */	stw r0, 0x10(r1)
/* 80160564 0015D644  39 20 00 00 */	li r9, 0x0
/* 80160568 0015D648  39 40 00 00 */	li r10, 0x0
/* 8016056C 0015D64C  80 84 00 80 */	lwz r4, 0x80(r4)
/* 80160570 0015D650  C0 22 A9 C0 */	lfs f1, "@831"@sda21(r2)
/* 80160574 0015D654  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80160578 0015D658  4B EA 67 E1 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 8016057C 0015D65C  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80160580 0015D660  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 80160584 0015D664  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80160588 0015D668  38 00 00 00 */	li r0, 0x0
/* 8016058C 0015D66C  90 81 00 08 */	stw r4, 0x8(r1)
/* 80160590 0015D670  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 80160594 0015D674  7F E3 FB 78 */	mr r3, r31
/* 80160598 0015D678  38 A0 00 10 */	li r5, 0x10
/* 8016059C 0015D67C  90 01 00 0C */	stw r0, 0xc(r1)
/* 801605A0 0015D680  38 C0 00 00 */	li r6, 0x0
/* 801605A4 0015D684  38 E0 00 00 */	li r7, 0x0
/* 801605A8 0015D688  39 00 00 00 */	li r8, 0x0
/* 801605AC 0015D68C  90 01 00 10 */	stw r0, 0x10(r1)
/* 801605B0 0015D690  39 20 00 00 */	li r9, 0x0
/* 801605B4 0015D694  39 40 00 00 */	li r10, 0x0
/* 801605B8 0015D698  80 84 00 84 */	lwz r4, 0x84(r4)
/* 801605BC 0015D69C  C0 22 A9 C0 */	lfs f1, "@831"@sda21(r2)
/* 801605C0 0015D6A0  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 801605C4 0015D6A4  4B EA 67 95 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 801605C8 0015D6A8  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 801605CC 0015D6AC  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 801605D0 0015D6B0  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 801605D4 0015D6B4  38 00 00 00 */	li r0, 0x0
/* 801605D8 0015D6B8  90 81 00 08 */	stw r4, 0x8(r1)
/* 801605DC 0015D6BC  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 801605E0 0015D6C0  7F E3 FB 78 */	mr r3, r31
/* 801605E4 0015D6C4  38 A0 00 10 */	li r5, 0x10
/* 801605E8 0015D6C8  90 01 00 0C */	stw r0, 0xc(r1)
/* 801605EC 0015D6CC  38 C0 00 00 */	li r6, 0x0
/* 801605F0 0015D6D0  38 E0 00 00 */	li r7, 0x0
/* 801605F4 0015D6D4  39 00 00 00 */	li r8, 0x0
/* 801605F8 0015D6D8  90 01 00 10 */	stw r0, 0x10(r1)
/* 801605FC 0015D6DC  39 20 00 00 */	li r9, 0x0
/* 80160600 0015D6E0  39 40 00 00 */	li r10, 0x0
/* 80160604 0015D6E4  80 84 00 88 */	lwz r4, 0x88(r4)
/* 80160608 0015D6E8  C0 22 A9 C0 */	lfs f1, "@831"@sda21(r2)
/* 8016060C 0015D6EC  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80160610 0015D6F0  4B EA 67 49 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80160614 0015D6F4  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80160618 0015D6F8  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 8016061C 0015D6FC  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80160620 0015D700  38 00 00 00 */	li r0, 0x0
/* 80160624 0015D704  90 81 00 08 */	stw r4, 0x8(r1)
/* 80160628 0015D708  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 8016062C 0015D70C  7F E3 FB 78 */	mr r3, r31
/* 80160630 0015D710  38 A0 00 10 */	li r5, 0x10
/* 80160634 0015D714  90 01 00 0C */	stw r0, 0xc(r1)
/* 80160638 0015D718  38 C0 00 00 */	li r6, 0x0
/* 8016063C 0015D71C  38 E0 00 00 */	li r7, 0x0
/* 80160640 0015D720  39 00 00 00 */	li r8, 0x0
/* 80160644 0015D724  90 01 00 10 */	stw r0, 0x10(r1)
/* 80160648 0015D728  39 20 00 00 */	li r9, 0x0
/* 8016064C 0015D72C  39 40 00 00 */	li r10, 0x0
/* 80160650 0015D730  80 84 00 8C */	lwz r4, 0x8c(r4)
/* 80160654 0015D734  C0 22 A9 C0 */	lfs f1, "@831"@sda21(r2)
/* 80160658 0015D738  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 8016065C 0015D73C  4B EA 66 FD */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80160660 0015D740  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80160664 0015D744  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 80160668 0015D748  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8016066C 0015D74C  38 00 00 00 */	li r0, 0x0
/* 80160670 0015D750  90 81 00 08 */	stw r4, 0x8(r1)
/* 80160674 0015D754  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 80160678 0015D758  7F E3 FB 78 */	mr r3, r31
/* 8016067C 0015D75C  38 A0 00 10 */	li r5, 0x10
/* 80160680 0015D760  90 01 00 0C */	stw r0, 0xc(r1)
/* 80160684 0015D764  38 C0 00 00 */	li r6, 0x0
/* 80160688 0015D768  38 E0 00 00 */	li r7, 0x0
/* 8016068C 0015D76C  39 00 00 00 */	li r8, 0x0
/* 80160690 0015D770  90 01 00 10 */	stw r0, 0x10(r1)
/* 80160694 0015D774  39 20 00 00 */	li r9, 0x0
/* 80160698 0015D778  39 40 00 00 */	li r10, 0x0
/* 8016069C 0015D77C  80 84 00 90 */	lwz r4, 0x90(r4)
/* 801606A0 0015D780  C0 22 A9 C0 */	lfs f1, "@831"@sda21(r2)
/* 801606A4 0015D784  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 801606A8 0015D788  4B EA 66 B1 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 801606AC 0015D78C  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 801606B0 0015D790  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 801606B4 0015D794  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 801606B8 0015D798  38 00 00 00 */	li r0, 0x0
/* 801606BC 0015D79C  90 81 00 08 */	stw r4, 0x8(r1)
/* 801606C0 0015D7A0  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 801606C4 0015D7A4  7F E3 FB 78 */	mr r3, r31
/* 801606C8 0015D7A8  38 A0 00 10 */	li r5, 0x10
/* 801606CC 0015D7AC  90 01 00 0C */	stw r0, 0xc(r1)
/* 801606D0 0015D7B0  38 C0 00 00 */	li r6, 0x0
/* 801606D4 0015D7B4  38 E0 00 00 */	li r7, 0x0
/* 801606D8 0015D7B8  39 00 00 00 */	li r8, 0x0
/* 801606DC 0015D7BC  90 01 00 10 */	stw r0, 0x10(r1)
/* 801606E0 0015D7C0  39 20 00 00 */	li r9, 0x0
/* 801606E4 0015D7C4  39 40 00 00 */	li r10, 0x0
/* 801606E8 0015D7C8  80 84 00 94 */	lwz r4, 0x94(r4)
/* 801606EC 0015D7CC  C0 22 A9 C0 */	lfs f1, "@831"@sda21(r2)
/* 801606F0 0015D7D0  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 801606F4 0015D7D4  4B EA 66 65 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 801606F8 0015D7D8  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 801606FC 0015D7DC  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 80160700 0015D7E0  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80160704 0015D7E4  38 00 00 00 */	li r0, 0x0
/* 80160708 0015D7E8  90 81 00 08 */	stw r4, 0x8(r1)
/* 8016070C 0015D7EC  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 80160710 0015D7F0  7F E3 FB 78 */	mr r3, r31
/* 80160714 0015D7F4  38 A0 00 10 */	li r5, 0x10
/* 80160718 0015D7F8  90 01 00 0C */	stw r0, 0xc(r1)
/* 8016071C 0015D7FC  38 C0 00 00 */	li r6, 0x0
/* 80160720 0015D800  38 E0 00 00 */	li r7, 0x0
/* 80160724 0015D804  39 00 00 00 */	li r8, 0x0
/* 80160728 0015D808  90 01 00 10 */	stw r0, 0x10(r1)
/* 8016072C 0015D80C  39 20 00 00 */	li r9, 0x0
/* 80160730 0015D810  39 40 00 00 */	li r10, 0x0
/* 80160734 0015D814  80 84 00 98 */	lwz r4, 0x98(r4)
/* 80160738 0015D818  C0 22 A9 C0 */	lfs f1, "@831"@sda21(r2)
/* 8016073C 0015D81C  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80160740 0015D820  4B EA 66 19 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80160744 0015D824  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80160748 0015D828  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 8016074C 0015D82C  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 80160750 0015D830  38 00 00 00 */	li r0, 0x0
/* 80160754 0015D834  90 81 00 08 */	stw r4, 0x8(r1)
/* 80160758 0015D838  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 8016075C 0015D83C  7F E3 FB 78 */	mr r3, r31
/* 80160760 0015D840  38 A0 00 10 */	li r5, 0x10
/* 80160764 0015D844  90 01 00 0C */	stw r0, 0xc(r1)
/* 80160768 0015D848  38 C0 00 00 */	li r6, 0x0
/* 8016076C 0015D84C  38 E0 00 00 */	li r7, 0x0
/* 80160770 0015D850  39 00 00 00 */	li r8, 0x0
/* 80160774 0015D854  90 01 00 10 */	stw r0, 0x10(r1)
/* 80160778 0015D858  39 20 00 00 */	li r9, 0x0
/* 8016077C 0015D85C  39 40 00 00 */	li r10, 0x0
/* 80160780 0015D860  80 84 00 28 */	lwz r4, 0x28(r4)
/* 80160784 0015D864  C0 22 A9 C0 */	lfs f1, "@831"@sda21(r2)
/* 80160788 0015D868  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 8016078C 0015D86C  4B EA 65 CD */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80160790 0015D870  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 80160794 0015D874  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 80160798 0015D878  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 8016079C 0015D87C  38 00 00 00 */	li r0, 0x0
/* 801607A0 0015D880  90 81 00 08 */	stw r4, 0x8(r1)
/* 801607A4 0015D884  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 801607A8 0015D888  7F E3 FB 78 */	mr r3, r31
/* 801607AC 0015D88C  38 A0 00 10 */	li r5, 0x10
/* 801607B0 0015D890  90 01 00 0C */	stw r0, 0xc(r1)
/* 801607B4 0015D894  38 C0 00 00 */	li r6, 0x0
/* 801607B8 0015D898  38 E0 00 00 */	li r7, 0x0
/* 801607BC 0015D89C  39 00 00 00 */	li r8, 0x0
/* 801607C0 0015D8A0  90 01 00 10 */	stw r0, 0x10(r1)
/* 801607C4 0015D8A4  39 20 00 00 */	li r9, 0x0
/* 801607C8 0015D8A8  39 40 00 00 */	li r10, 0x0
/* 801607CC 0015D8AC  80 84 00 9C */	lwz r4, 0x9c(r4)
/* 801607D0 0015D8B0  C0 22 A9 C0 */	lfs f1, "@831"@sda21(r2)
/* 801607D4 0015D8B4  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 801607D8 0015D8B8  4B EA 65 81 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 801607DC 0015D8BC  3C 80 80 00 */	lis r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@ha
/* 801607E0 0015D8C0  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 801607E4 0015D8C4  38 84 6C FC */	addi r4, r4, xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState@l
/* 801607E8 0015D8C8  38 00 00 00 */	li r0, 0x0
/* 801607EC 0015D8CC  90 81 00 08 */	stw r4, 0x8(r1)
/* 801607F0 0015D8D0  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 801607F4 0015D8D4  7F E3 FB 78 */	mr r3, r31
/* 801607F8 0015D8D8  38 A0 00 10 */	li r5, 0x10
/* 801607FC 0015D8DC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80160800 0015D8E0  38 C0 00 00 */	li r6, 0x0
/* 80160804 0015D8E4  38 E0 00 00 */	li r7, 0x0
/* 80160808 0015D8E8  39 00 00 00 */	li r8, 0x0
/* 8016080C 0015D8EC  90 01 00 10 */	stw r0, 0x10(r1)
/* 80160810 0015D8F0  39 20 00 00 */	li r9, 0x0
/* 80160814 0015D8F4  39 40 00 00 */	li r10, 0x0
/* 80160818 0015D8F8  80 84 00 A0 */	lwz r4, 0xa0(r4)
/* 8016081C 0015D8FC  C0 22 A9 C0 */	lfs f1, "@831"@sda21(r2)
/* 80160820 0015D900  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80160824 0015D904  4B EA 65 35 */	bl xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
/* 80160828 0015D908  3C 60 80 2A */	lis r3, g_strz_bossanim@ha
/* 8016082C 0015D90C  C0 22 A9 C8 */	lfs f1, "@833"@sda21(r2)
/* 80160830 0015D910  38 83 93 A0 */	addi r4, r3, g_strz_bossanim@l
/* 80160834 0015D914  38 A1 00 18 */	addi r5, r1, 0x18
/* 80160838 0015D918  7F E3 FB 78 */	mr r3, r31
/* 8016083C 0015D91C  38 C0 00 01 */	li r6, 0x1
/* 80160840 0015D920  4B F9 3B B9 */	bl NPCC_BuildStandardAnimTran__FP10xAnimTablePPcPiif
/* 80160844 0015D924  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80160848 0015D928  7F E3 FB 78 */	mr r3, r31
/* 8016084C 0015D92C  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 80160850 0015D930  7C 08 03 A6 */	mtlr r0
/* 80160854 0015D934  38 21 00 80 */	addi r1, r1, 0x80
/* 80160858 0015D938  4E 80 00 20 */	blr
.endfn ZNPC_AnimTable_BossPatrick__Fv

# UpdatePatrickBossCam(zNPCBPatrick*, float)
.fn UpdatePatrickBossCam__FP12zNPCBPatrickf, local
/* 8016085C 0015D93C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80160860 0015D940  7C 08 02 A6 */	mflr r0
/* 80160864 0015D944  90 01 00 24 */	stw r0, 0x24(r1)
/* 80160868 0015D948  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8016086C 0015D94C  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 80160870 0015D950  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80160874 0015D954  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80160878 0015D958  FF E0 08 90 */	fmr f31, f1
/* 8016087C 0015D95C  7C 7E 1B 78 */	mr r30, r3
/* 80160880 0015D960  3B E0 00 00 */	li r31, 0x0
/* 80160884 0015D964  4B EF 18 9D */	bl zCameraIsTrackingDisabled__Fv
/* 80160888 0015D968  54 60 07 39 */	rlwinm. r0, r3, 0, 28, 28
/* 8016088C 0015D96C  40 82 00 08 */	bne .L_80160894
/* 80160890 0015D970  3B E0 00 01 */	li r31, 0x1
.L_80160894:
/* 80160894 0015D974  38 60 00 08 */	li r3, 0x8
/* 80160898 0015D978  4B EF 18 69 */	bl zCameraDisableTracking__F17camera_owner_enum
/* 8016089C 0015D97C  2C 1F 00 00 */	cmpwi r31, 0x0
/* 801608A0 0015D980  41 82 00 14 */	beq .L_801608B4
/* 801608A4 0015D984  3C 80 80 3C */	lis r4, globals@ha
/* 801608A8 0015D988  38 7E 19 24 */	addi r3, r30, 0x1924
/* 801608AC 0015D98C  38 84 05 58 */	addi r4, r4, globals@l
/* 801608B0 0015D990  4B EA D6 05 */	bl start__13xBinaryCameraFR7xCamera
.L_801608B4:
/* 801608B4 0015D994  3C 60 80 3C */	lis r3, globals@ha
/* 801608B8 0015D998  80 9E 00 24 */	lwz r4, 0x24(r30)
/* 801608BC 0015D99C  38 63 05 58 */	addi r3, r3, globals@l
/* 801608C0 0015D9A0  C0 22 A9 D8 */	lfs f1, "@891"@sda21(r2)
/* 801608C4 0015D9A4  80 A3 07 04 */	lwz r5, 0x704(r3)
/* 801608C8 0015D9A8  38 7E 19 24 */	addi r3, r30, 0x1924
/* 801608CC 0015D9AC  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 801608D0 0015D9B0  80 C5 00 4C */	lwz r6, 0x4c(r5)
/* 801608D4 0015D9B4  38 A4 00 30 */	addi r5, r4, 0x30
/* 801608D8 0015D9B8  38 86 00 30 */	addi r4, r6, 0x30
/* 801608DC 0015D9BC  4B FE 5C A5 */	bl set_targets__13xBinaryCameraFRC5xVec3RC5xVec3f
/* 801608E0 0015D9C0  80 1E 02 B4 */	lwz r0, 0x2b4(r30)
/* 801608E4 0015D9C4  54 00 05 AD */	rlwinm. r0, r0, 0, 22, 22
/* 801608E8 0015D9C8  41 82 00 18 */	beq .L_80160900
/* 801608EC 0015D9CC  C0 02 A9 CC */	lfs f0, "@870"@sda21(r2)
/* 801608F0 0015D9D0  D0 1E 19 5C */	stfs f0, 0x195c(r30)
/* 801608F4 0015D9D4  80 1E 02 B4 */	lwz r0, 0x2b4(r30)
/* 801608F8 0015D9D8  54 00 05 EA */	rlwinm r0, r0, 0, 23, 21
/* 801608FC 0015D9DC  90 1E 02 B4 */	stw r0, 0x2b4(r30)
.L_80160900:
/* 80160900 0015D9E0  80 1E 02 B4 */	lwz r0, 0x2b4(r30)
/* 80160904 0015D9E4  54 00 06 31 */	rlwinm. r0, r0, 0, 24, 24
/* 80160908 0015D9E8  41 82 00 10 */	beq .L_80160918
/* 8016090C 0015D9EC  C0 02 A9 CC */	lfs f0, "@870"@sda21(r2)
/* 80160910 0015D9F0  D0 1E 19 5C */	stfs f0, 0x195c(r30)
/* 80160914 0015D9F4  48 00 00 24 */	b .L_80160938
.L_80160918:
/* 80160918 0015D9F8  C0 1E 19 5C */	lfs f0, 0x195c(r30)
/* 8016091C 0015D9FC  EC 00 F8 2A */	fadds f0, f0, f31
/* 80160920 0015DA00  D0 1E 19 5C */	stfs f0, 0x195c(r30)
/* 80160924 0015DA04  C0 3E 19 5C */	lfs f1, 0x195c(r30)
/* 80160928 0015DA08  C0 02 A9 DC */	lfs f0, "@892"@sda21(r2)
/* 8016092C 0015DA0C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80160930 0015DA10  40 81 00 08 */	ble .L_80160938
/* 80160934 0015DA14  D0 1E 19 5C */	stfs f0, 0x195c(r30)
.L_80160938:
/* 80160938 0015DA18  FC 20 F8 90 */	fmr f1, f31
/* 8016093C 0015DA1C  38 7E 19 24 */	addi r3, r30, 0x1924
/* 80160940 0015DA20  4B EA D5 C5 */	bl update__13xBinaryCameraFf
/* 80160944 0015DA24  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 80160948 0015DA28  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016094C 0015DA2C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80160950 0015DA30  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80160954 0015DA34  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80160958 0015DA38  7C 08 03 A6 */	mtlr r0
/* 8016095C 0015DA3C  38 21 00 20 */	addi r1, r1, 0x20
/* 80160960 0015DA40  4E 80 00 20 */	blr
.endfn UpdatePatrickBossCam__FP12zNPCBPatrickf

# GetBonePos(xVec3*, xMat4x3*, int, xVec3*)
.fn GetBonePos__FP5xVec3P7xMat4x3iP5xVec3, local
/* 80160964 0015DA44  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80160968 0015DA48  7C 08 02 A6 */	mflr r0
/* 8016096C 0015DA4C  2C 05 00 00 */	cmpwi r5, 0x0
/* 80160970 0015DA50  90 01 00 64 */	stw r0, 0x64(r1)
/* 80160974 0015DA54  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 80160978 0015DA58  7C DF 33 78 */	mr r31, r6
/* 8016097C 0015DA5C  93 C1 00 58 */	stw r30, 0x58(r1)
/* 80160980 0015DA60  7C 9E 23 78 */	mr r30, r4
/* 80160984 0015DA64  93 A1 00 54 */	stw r29, 0x54(r1)
/* 80160988 0015DA68  7C 7D 1B 78 */	mr r29, r3
/* 8016098C 0015DA6C  40 82 00 1C */	bne .L_801609A8
/* 80160990 0015DA70  7F E5 FB 78 */	mr r5, r31
/* 80160994 0015DA74  48 00 80 99 */	bl xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 80160998 0015DA78  7F A3 EB 78 */	mr r3, r29
/* 8016099C 0015DA7C  38 9E 00 30 */	addi r4, r30, 0x30
/* 801609A0 0015DA80  4B EA DD B5 */	bl xVec3AddTo__FP5xVec3PC5xVec3
/* 801609A4 0015DA84  48 00 00 4C */	b .L_801609F0
.L_801609A8:
/* 801609A8 0015DA88  54 A0 30 32 */	slwi r0, r5, 6
/* 801609AC 0015DA8C  7F C5 F3 78 */	mr r5, r30
/* 801609B0 0015DA90  38 61 00 08 */	addi r3, r1, 0x8
/* 801609B4 0015DA94  7C 9E 02 14 */	add r4, r30, r0
/* 801609B8 0015DA98  4B ED 22 61 */	bl xMat4x3Mul__FP7xMat4x3PC7xMat4x3PC7xMat4x3
/* 801609BC 0015DA9C  28 1F 00 00 */	cmplwi r31, 0x0
/* 801609C0 0015DAA0  41 82 00 24 */	beq .L_801609E4
/* 801609C4 0015DAA4  7F A3 EB 78 */	mr r3, r29
/* 801609C8 0015DAA8  7F E5 FB 78 */	mr r5, r31
/* 801609CC 0015DAAC  38 81 00 08 */	addi r4, r1, 0x8
/* 801609D0 0015DAB0  48 00 80 5D */	bl xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 801609D4 0015DAB4  7F A3 EB 78 */	mr r3, r29
/* 801609D8 0015DAB8  38 81 00 38 */	addi r4, r1, 0x38
/* 801609DC 0015DABC  4B EA DD 79 */	bl xVec3AddTo__FP5xVec3PC5xVec3
/* 801609E0 0015DAC0  48 00 00 10 */	b .L_801609F0
.L_801609E4:
/* 801609E4 0015DAC4  7F A3 EB 78 */	mr r3, r29
/* 801609E8 0015DAC8  38 81 00 38 */	addi r4, r1, 0x38
/* 801609EC 0015DACC  4B EE DA F1 */	bl xVec3Copy__FP5xVec3PC5xVec3
.L_801609F0:
/* 801609F0 0015DAD0  80 01 00 64 */	lwz r0, 0x64(r1)
/* 801609F4 0015DAD4  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 801609F8 0015DAD8  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 801609FC 0015DADC  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 80160A00 0015DAE0  7C 08 03 A6 */	mtlr r0
/* 80160A04 0015DAE4  38 21 00 60 */	addi r1, r1, 0x60
/* 80160A08 0015DAE8  4E 80 00 20 */	blr
.endfn GetBonePos__FP5xVec3P7xMat4x3iP5xVec3

# BoundEventCB(xBase*, xBase*, unsigned int, const float*, xBase*)
.fn BoundEventCB__FP5xBaseP5xBaseUiPCfP5xBase, local
/* 80160A0C 0015DAEC  38 60 00 01 */	li r3, 0x1
/* 80160A10 0015DAF0  4E 80 00 20 */	blr
.endfn BoundEventCB__FP5xBaseP5xBaseUiPCfP5xBase

# Pat_ResetGlobalStuff()
.fn Pat_ResetGlobalStuff__Fv, local
/* 80160A14 0015DAF4  4E 80 00 20 */	blr
.endfn Pat_ResetGlobalStuff__Fv

# zNPCBPatrick::Init(xEntAsset*)
.fn Init__12zNPCBPatrickFP9xEntAsset, global
/* 80160A18 0015DAF8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80160A1C 0015DAFC  7C 08 02 A6 */	mflr r0
/* 80160A20 0015DB00  3C A0 80 2A */	lis r5, ...data.0@ha
/* 80160A24 0015DB04  90 01 00 34 */	stw r0, 0x34(r1)
/* 80160A28 0015DB08  BE C1 00 08 */	stmw r22, 0x8(r1)
/* 80160A2C 0015DB0C  7C 77 1B 78 */	mr r23, r3
/* 80160A30 0015DB10  3B C5 AA 68 */	addi r30, r5, ...data.0@l
/* 80160A34 0015DB14  4B F8 E6 69 */	bl Init__10zNPCCommonFP9xEntAsset
/* 80160A38 0015DB18  92 ED 97 04 */	stw r23, sPat_Ptr@sda21(r13)
/* 80160A3C 0015DB1C  38 00 00 01 */	li r0, 0x1
/* 80160A40 0015DB20  90 17 02 BC */	stw r0, 0x2bc(r23)
/* 80160A44 0015DB24  90 17 18 F8 */	stw r0, 0x18f8(r23)
/* 80160A48 0015DB28  4B FF FF CD */	bl Pat_ResetGlobalStuff__Fv
/* 80160A4C 0015DB2C  80 6D 89 E0 */	lwz r3, gActiveHeap@sda21(r13)
/* 80160A50 0015DB30  38 80 00 10 */	li r4, 0x10
/* 80160A54 0015DB34  38 A0 00 00 */	li r5, 0x0
/* 80160A58 0015DB38  4B ED 2E E9 */	bl xMemAlloc__FUiUii
/* 80160A5C 0015DB3C  3C 80 80 16 */	lis r4, BoundEventCB__FP5xBaseP5xBaseUiPCfP5xBase@ha
/* 80160A60 0015DB40  90 77 13 C4 */	stw r3, 0x13c4(r23)
/* 80160A64 0015DB44  3B 9E 00 38 */	addi r28, r30, 0x38
/* 80160A68 0015DB48  3B 7E 00 48 */	addi r27, r30, 0x48
/* 80160A6C 0015DB4C  3B 5E 00 28 */	addi r26, r30, 0x28
/* 80160A70 0015DB50  3B E4 0A 0C */	addi r31, r4, BoundEventCB__FP5xBaseP5xBaseUiPCfP5xBase@l
/* 80160A74 0015DB54  3A DE 00 00 */	addi r22, r30, 0x0
/* 80160A78 0015DB58  3B 20 00 00 */	li r25, 0x0
/* 80160A7C 0015DB5C  3B A0 00 00 */	li r29, 0x0
.L_80160A80:
/* 80160A80 0015DB60  80 6D 89 E0 */	lwz r3, gActiveHeap@sda21(r13)
/* 80160A84 0015DB64  38 80 00 D0 */	li r4, 0xd0
/* 80160A88 0015DB68  38 A0 00 00 */	li r5, 0x0
/* 80160A8C 0015DB6C  4B ED 2E B5 */	bl xMemAlloc__FUiUii
/* 80160A90 0015DB70  80 97 13 C4 */	lwz r4, 0x13c4(r23)
/* 80160A94 0015DB74  38 E0 00 0C */	li r7, 0xc
/* 80160A98 0015DB78  38 A0 00 02 */	li r5, 0x2
/* 80160A9C 0015DB7C  38 C0 00 10 */	li r6, 0x10
/* 80160AA0 0015DB80  7C 64 E9 2E */	stwx r3, r4, r29
/* 80160AA4 0015DB84  38 00 00 00 */	li r0, 0x0
/* 80160AA8 0015DB88  80 77 13 C4 */	lwz r3, 0x13c4(r23)
/* 80160AAC 0015DB8C  7F 03 E8 2E */	lwzx r24, r3, r29
/* 80160AB0 0015DB90  93 38 00 00 */	stw r25, 0x0(r24)
/* 80160AB4 0015DB94  7F 04 C3 78 */	mr r4, r24
/* 80160AB8 0015DB98  38 78 00 50 */	addi r3, r24, 0x50
/* 80160ABC 0015DB9C  93 F8 00 0C */	stw r31, 0xc(r24)
/* 80160AC0 0015DBA0  92 F8 00 B8 */	stw r23, 0xb8(r24)
/* 80160AC4 0015DBA4  98 F8 00 04 */	stb r7, 0x4(r24)
/* 80160AC8 0015DBA8  98 B8 00 20 */	stb r5, 0x20(r24)
/* 80160ACC 0015DBAC  98 D8 00 22 */	stb r6, 0x22(r24)
/* 80160AD0 0015DBB0  98 D8 00 23 */	stb r6, 0x23(r24)
/* 80160AD4 0015DBB4  A0 B8 00 06 */	lhz r5, 0x6(r24)
/* 80160AD8 0015DBB8  60 A5 00 21 */	ori r5, r5, 0x21
/* 80160ADC 0015DBBC  B0 B8 00 06 */	sth r5, 0x6(r24)
/* 80160AE0 0015DBC0  98 D8 00 1C */	stb r6, 0x1c(r24)
/* 80160AE4 0015DBC4  88 B7 00 18 */	lbz r5, 0x18(r23)
/* 80160AE8 0015DBC8  98 B8 00 18 */	stb r5, 0x18(r24)
/* 80160AEC 0015DBCC  80 B7 00 24 */	lwz r5, 0x24(r23)
/* 80160AF0 0015DBD0  90 B8 00 24 */	stw r5, 0x24(r24)
/* 80160AF4 0015DBD4  90 18 00 34 */	stw r0, 0x34(r24)
/* 80160AF8 0015DBD8  90 18 00 3C */	stw r0, 0x3c(r24)
/* 80160AFC 0015DBDC  90 18 00 44 */	stw r0, 0x44(r24)
/* 80160B00 0015DBE0  90 18 00 B0 */	stw r0, 0xb0(r24)
/* 80160B04 0015DBE4  98 18 00 1A */	stb r0, 0x1a(r24)
/* 80160B08 0015DBE8  90 18 00 28 */	stw r0, 0x28(r24)
/* 80160B0C 0015DBEC  90 18 00 30 */	stw r0, 0x30(r24)
/* 80160B10 0015DBF0  98 18 00 1B */	stb r0, 0x1b(r24)
/* 80160B14 0015DBF4  90 18 00 40 */	stw r0, 0x40(r24)
/* 80160B18 0015DBF8  90 18 00 48 */	stw r0, 0x48(r24)
/* 80160B1C 0015DBFC  90 18 00 4C */	stw r0, 0x4c(r24)
/* 80160B20 0015DC00  90 18 00 B4 */	stw r0, 0xb4(r24)
/* 80160B24 0015DC04  98 18 00 1F */	stb r0, 0x1f(r24)
/* 80160B28 0015DC08  90 18 00 C8 */	stw r0, 0xc8(r24)
/* 80160B2C 0015DC0C  4B FC 12 E1 */	bl xGridBoundInit__FP10xGridBoundPv
/* 80160B30 0015DC10  38 00 00 01 */	li r0, 0x1
/* 80160B34 0015DC14  7F 66 DB 78 */	mr r6, r27
/* 80160B38 0015DC18  98 18 00 84 */	stb r0, 0x84(r24)
/* 80160B3C 0015DC1C  C0 1C 00 00 */	lfs f0, 0x0(r28)
/* 80160B40 0015DC20  D0 18 00 94 */	stfs f0, 0x94(r24)
/* 80160B44 0015DC24  80 97 13 C4 */	lwz r4, 0x13c4(r23)
/* 80160B48 0015DC28  80 1A 00 00 */	lwz r0, 0x0(r26)
/* 80160B4C 0015DC2C  80 77 00 24 */	lwz r3, 0x24(r23)
/* 80160B50 0015DC30  54 00 10 3A */	slwi r0, r0, 2
/* 80160B54 0015DC34  7C E4 E8 2E */	lwzx r7, r4, r29
/* 80160B58 0015DC38  80 83 00 4C */	lwz r4, 0x4c(r3)
/* 80160B5C 0015DC3C  7C B6 00 2E */	lwzx r5, r22, r0
/* 80160B60 0015DC40  38 67 00 88 */	addi r3, r7, 0x88
/* 80160B64 0015DC44  4B FF FE 01 */	bl GetBonePos__FP5xVec3P7xMat4x3iP5xVec3
/* 80160B68 0015DC48  80 77 13 C4 */	lwz r3, 0x13c4(r23)
/* 80160B6C 0015DC4C  7C 63 E8 2E */	lwzx r3, r3, r29
/* 80160B70 0015DC50  38 63 00 64 */	addi r3, r3, 0x64
/* 80160B74 0015DC54  7C 64 1B 78 */	mr r4, r3
/* 80160B78 0015DC58  4B EA A3 C5 */	bl xQuickCullForBound__FP7xQCDataPC6xBound
/* 80160B7C 0015DC5C  3B 39 00 01 */	addi r25, r25, 0x1
/* 80160B80 0015DC60  3B 9C 00 04 */	addi r28, r28, 0x4
/* 80160B84 0015DC64  2C 19 00 04 */	cmpwi r25, 0x4
/* 80160B88 0015DC68  3B 7B 00 0C */	addi r27, r27, 0xc
/* 80160B8C 0015DC6C  3B 5A 00 04 */	addi r26, r26, 0x4
/* 80160B90 0015DC70  3B BD 00 04 */	addi r29, r29, 0x4
/* 80160B94 0015DC74  41 80 FE EC */	blt .L_80160A80
/* 80160B98 0015DC78  38 00 00 01 */	li r0, 0x1
/* 80160B9C 0015DC7C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80160BA0 0015DC80  98 0D 97 00 */	stb r0, sOthersHaventBeenAdded@sda21(r13)
/* 80160BA4 0015DC84  38 00 03 00 */	li r0, 0x300
/* 80160BA8 0015DC88  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 80160BAC 0015DC8C  90 17 15 24 */	stw r0, 0x1524(r23)
/* 80160BB0 0015DC90  38 63 01 43 */	addi r3, r3, 0x143
/* 80160BB4 0015DC94  4B EE B6 61 */	bl xStrHash__FPCc
/* 80160BB8 0015DC98  38 80 00 00 */	li r4, 0x0
/* 80160BBC 0015DC9C  4B EE AB 51 */	bl xSTFindAsset__FUiPUi
/* 80160BC0 0015DCA0  28 03 00 00 */	cmplwi r3, 0x0
/* 80160BC4 0015DCA4  41 82 00 10 */	beq .L_80160BD4
/* 80160BC8 0015DCA8  80 03 00 00 */	lwz r0, 0x0(r3)
/* 80160BCC 0015DCAC  90 17 18 CC */	stw r0, 0x18cc(r23)
/* 80160BD0 0015DCB0  48 00 00 0C */	b .L_80160BDC
.L_80160BD4:
/* 80160BD4 0015DCB4  38 00 00 00 */	li r0, 0x0
/* 80160BD8 0015DCB8  90 17 18 CC */	stw r0, 0x18cc(r23)
.L_80160BDC:
/* 80160BDC 0015DCBC  3A E0 00 00 */	li r23, 0x0
/* 80160BE0 0015DCC0  3A DE 00 78 */	addi r22, r30, 0x78
.L_80160BE4:
/* 80160BE4 0015DCC4  80 76 00 00 */	lwz r3, 0x0(r22)
/* 80160BE8 0015DCC8  4B EE B6 2D */	bl xStrHash__FPCc
/* 80160BEC 0015DCCC  3A F7 00 01 */	addi r23, r23, 0x1
/* 80160BF0 0015DCD0  90 76 00 04 */	stw r3, 0x4(r22)
/* 80160BF4 0015DCD4  2C 17 00 25 */	cmpwi r23, 0x25
/* 80160BF8 0015DCD8  3A D6 00 08 */	addi r22, r22, 0x8
/* 80160BFC 0015DCDC  41 80 FF E8 */	blt .L_80160BE4
/* 80160C00 0015DCE0  BA C1 00 08 */	lmw r22, 0x8(r1)
/* 80160C04 0015DCE4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80160C08 0015DCE8  7C 08 03 A6 */	mtlr r0
/* 80160C0C 0015DCEC  38 21 00 30 */	addi r1, r1, 0x30
/* 80160C10 0015DCF0  4E 80 00 20 */	blr
.endfn Init__12zNPCBPatrickFP9xEntAsset

# on_change_newsfish(const tweak_info&)
.fn on_change_newsfish__FRC10tweak_info, local
/* 80160C14 0015DCF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80160C18 0015DCF8  7C 08 02 A6 */	mflr r0
/* 80160C1C 0015DCFC  3C 60 80 2A */	lis r3, sNFComment@ha
/* 80160C20 0015DD00  38 C0 FF FF */	li r6, -0x1
/* 80160C24 0015DD04  90 01 00 14 */	stw r0, 0x14(r1)
/* 80160C28 0015DD08  38 83 AA E0 */	addi r4, r3, sNFComment@l
/* 80160C2C 0015DD0C  80 AD 97 04 */	lwz r5, sPat_Ptr@sda21(r13)
/* 80160C30 0015DD10  80 0D 97 34 */	lwz r0, sCurrNFSound@sda21(r13)
/* 80160C34 0015DD14  80 65 18 E4 */	lwz r3, 0x18e4(r5)
/* 80160C38 0015DD18  38 A0 00 00 */	li r5, 0x0
/* 80160C3C 0015DD1C  54 00 18 38 */	slwi r0, r0, 3
/* 80160C40 0015DD20  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80160C44 0015DD24  7C 84 02 14 */	add r4, r4, r0
/* 80160C48 0015DD28  80 84 00 04 */	lwz r4, 0x4(r4)
/* 80160C4C 0015DD2C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80160C50 0015DD30  7D 89 03 A6 */	mtctr r12
/* 80160C54 0015DD34  4E 80 04 21 */	bctrl
/* 80160C58 0015DD38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80160C5C 0015DD3C  7C 08 03 A6 */	mtlr r0
/* 80160C60 0015DD40  38 21 00 10 */	addi r1, r1, 0x10
/* 80160C64 0015DD44  4E 80 00 20 */	blr
.endfn on_change_newsfish__FRC10tweak_info

# on_change_recenter(const tweak_info&)
.fn on_change_recenter__FRC10tweak_info, local
/* 80160C68 0015DD48  80 6D 97 04 */	lwz r3, sPat_Ptr@sda21(r13)
/* 80160C6C 0015DD4C  80 03 02 B4 */	lwz r0, 0x2b4(r3)
/* 80160C70 0015DD50  60 00 02 00 */	ori r0, r0, 0x200
/* 80160C74 0015DD54  90 03 02 B4 */	stw r0, 0x2b4(r3)
/* 80160C78 0015DD58  4E 80 00 20 */	blr
.endfn on_change_recenter__FRC10tweak_info

# zNPCBPatrick::Setup()
.fn Setup__12zNPCBPatrickFv, global
/* 80160C7C 0015DD5C  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80160C80 0015DD60  7C 08 02 A6 */	mflr r0
/* 80160C84 0015DD64  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80160C88 0015DD68  90 01 00 64 */	stw r0, 0x64(r1)
/* 80160C8C 0015DD6C  BF 61 00 4C */	stmw r27, 0x4c(r1)
/* 80160C90 0015DD70  7C 7F 1B 78 */	mr r31, r3
/* 80160C94 0015DD74  38 64 08 9C */	addi r3, r4, "@stringBase0"@l
/* 80160C98 0015DD78  38 63 01 4C */	addi r3, r3, 0x14c
/* 80160C9C 0015DD7C  4B F4 7B A9 */	bl zParEmitterFind__FPCc
/* 80160CA0 0015DD80  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80160CA4 0015DD84  90 7F 15 58 */	stw r3, 0x1558(r31)
/* 80160CA8 0015DD88  38 64 08 9C */	addi r3, r4, "@stringBase0"@l
/* 80160CAC 0015DD8C  38 63 01 5F */	addi r3, r3, 0x15f
/* 80160CB0 0015DD90  4B F4 7B 95 */	bl zParEmitterFind__FPCc
/* 80160CB4 0015DD94  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80160CB8 0015DD98  90 7F 15 88 */	stw r3, 0x1588(r31)
/* 80160CBC 0015DD9C  38 64 08 9C */	addi r3, r4, "@stringBase0"@l
/* 80160CC0 0015DDA0  38 63 01 6A */	addi r3, r3, 0x16a
/* 80160CC4 0015DDA4  4B F4 7B 81 */	bl zParEmitterFind__FPCc
/* 80160CC8 0015DDA8  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80160CCC 0015DDAC  90 7F 15 8C */	stw r3, 0x158c(r31)
/* 80160CD0 0015DDB0  38 64 08 9C */	addi r3, r4, "@stringBase0"@l
/* 80160CD4 0015DDB4  38 63 01 79 */	addi r3, r3, 0x179
/* 80160CD8 0015DDB8  4B EE B5 3D */	bl xStrHash__FPCc
/* 80160CDC 0015DDBC  4B F5 3D 61 */	bl zSceneFindObject__FUi
/* 80160CE0 0015DDC0  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80160CE4 0015DDC4  90 7F 02 CC */	stw r3, 0x2cc(r31)
/* 80160CE8 0015DDC8  38 64 08 9C */	addi r3, r4, "@stringBase0"@l
/* 80160CEC 0015DDCC  38 63 01 81 */	addi r3, r3, 0x181
/* 80160CF0 0015DDD0  4B EE B5 25 */	bl xStrHash__FPCc
/* 80160CF4 0015DDD4  4B F5 3D 49 */	bl zSceneFindObject__FUi
/* 80160CF8 0015DDD8  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80160CFC 0015DDDC  90 7F 15 84 */	stw r3, 0x1584(r31)
/* 80160D00 0015DDE0  38 84 08 9C */	addi r4, r4, "@stringBase0"@l
/* 80160D04 0015DDE4  38 61 00 28 */	addi r3, r1, 0x28
/* 80160D08 0015DDE8  38 84 01 8E */	addi r4, r4, 0x18e
/* 80160D0C 0015DDEC  48 08 69 F5 */	bl strcpy
/* 80160D10 0015DDF0  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80160D14 0015DDF4  7F FE FB 78 */	mr r30, r31
/* 80160D18 0015DDF8  3B 80 00 00 */	li r28, 0x0
/* 80160D1C 0015DDFC  D0 1F 17 B8 */	stfs f0, 0x17b8(r31)
.L_80160D20:
/* 80160D20 0015DE00  38 1C 00 31 */	addi r0, r28, 0x31
/* 80160D24 0015DE04  38 61 00 28 */	addi r3, r1, 0x28
/* 80160D28 0015DE08  98 01 00 33 */	stb r0, 0x33(r1)
/* 80160D2C 0015DE0C  4B EE B4 E9 */	bl xStrHash__FPCc
/* 80160D30 0015DE10  4B F5 3D 0D */	bl zSceneFindObject__FUi
/* 80160D34 0015DE14  90 7E 17 94 */	stw r3, 0x1794(r30)
/* 80160D38 0015DE18  3B 9C 00 01 */	addi r28, r28, 0x1
/* 80160D3C 0015DE1C  2C 1C 00 08 */	cmpwi r28, 0x8
/* 80160D40 0015DE20  80 7E 17 94 */	lwz r3, 0x1794(r30)
/* 80160D44 0015DE24  3B DE 00 04 */	addi r30, r30, 0x4
/* 80160D48 0015DE28  C0 22 A9 E0 */	lfs f1, "@1045"@sda21(r2)
/* 80160D4C 0015DE2C  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80160D50 0015DE30  C0 1F 17 B8 */	lfs f0, 0x17b8(r31)
/* 80160D54 0015DE34  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80160D58 0015DE38  C0 43 00 34 */	lfs f2, 0x34(r3)
/* 80160D5C 0015DE3C  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80160D60 0015DE40  D0 1F 17 B8 */	stfs f0, 0x17b8(r31)
/* 80160D64 0015DE44  41 80 FF BC */	blt .L_80160D20
/* 80160D68 0015DE48  80 BF 17 94 */	lwz r5, 0x1794(r31)
/* 80160D6C 0015DE4C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80160D70 0015DE50  38 83 08 9C */	addi r4, r3, "@stringBase0"@l
/* 80160D74 0015DE54  C0 1F 17 B8 */	lfs f0, 0x17b8(r31)
/* 80160D78 0015DE58  80 A5 00 24 */	lwz r5, 0x24(r5)
/* 80160D7C 0015DE5C  38 61 00 28 */	addi r3, r1, 0x28
/* 80160D80 0015DE60  38 84 01 9B */	addi r4, r4, 0x19b
/* 80160D84 0015DE64  80 A5 00 4C */	lwz r5, 0x4c(r5)
/* 80160D88 0015DE68  C0 25 00 34 */	lfs f1, 0x34(r5)
/* 80160D8C 0015DE6C  EC 00 08 28 */	fsubs f0, f0, f1
/* 80160D90 0015DE70  EC 01 00 2A */	fadds f0, f1, f0
/* 80160D94 0015DE74  D0 05 00 34 */	stfs f0, 0x34(r5)
/* 80160D98 0015DE78  80 BF 17 98 */	lwz r5, 0x1798(r31)
/* 80160D9C 0015DE7C  C0 1F 17 B8 */	lfs f0, 0x17b8(r31)
/* 80160DA0 0015DE80  80 A5 00 24 */	lwz r5, 0x24(r5)
/* 80160DA4 0015DE84  80 A5 00 4C */	lwz r5, 0x4c(r5)
/* 80160DA8 0015DE88  C0 25 00 34 */	lfs f1, 0x34(r5)
/* 80160DAC 0015DE8C  EC 00 08 28 */	fsubs f0, f0, f1
/* 80160DB0 0015DE90  EC 01 00 2A */	fadds f0, f1, f0
/* 80160DB4 0015DE94  D0 05 00 34 */	stfs f0, 0x34(r5)
/* 80160DB8 0015DE98  80 BF 17 9C */	lwz r5, 0x179c(r31)
/* 80160DBC 0015DE9C  C0 1F 17 B8 */	lfs f0, 0x17b8(r31)
/* 80160DC0 0015DEA0  80 A5 00 24 */	lwz r5, 0x24(r5)
/* 80160DC4 0015DEA4  80 A5 00 4C */	lwz r5, 0x4c(r5)
/* 80160DC8 0015DEA8  C0 25 00 34 */	lfs f1, 0x34(r5)
/* 80160DCC 0015DEAC  EC 00 08 28 */	fsubs f0, f0, f1
/* 80160DD0 0015DEB0  EC 01 00 2A */	fadds f0, f1, f0
/* 80160DD4 0015DEB4  D0 05 00 34 */	stfs f0, 0x34(r5)
/* 80160DD8 0015DEB8  80 BF 17 A0 */	lwz r5, 0x17a0(r31)
/* 80160DDC 0015DEBC  C0 1F 17 B8 */	lfs f0, 0x17b8(r31)
/* 80160DE0 0015DEC0  80 A5 00 24 */	lwz r5, 0x24(r5)
/* 80160DE4 0015DEC4  80 A5 00 4C */	lwz r5, 0x4c(r5)
/* 80160DE8 0015DEC8  C0 25 00 34 */	lfs f1, 0x34(r5)
/* 80160DEC 0015DECC  EC 00 08 28 */	fsubs f0, f0, f1
/* 80160DF0 0015DED0  EC 01 00 2A */	fadds f0, f1, f0
/* 80160DF4 0015DED4  D0 05 00 34 */	stfs f0, 0x34(r5)
/* 80160DF8 0015DED8  80 BF 17 A4 */	lwz r5, 0x17a4(r31)
/* 80160DFC 0015DEDC  C0 1F 17 B8 */	lfs f0, 0x17b8(r31)
/* 80160E00 0015DEE0  80 A5 00 24 */	lwz r5, 0x24(r5)
/* 80160E04 0015DEE4  80 A5 00 4C */	lwz r5, 0x4c(r5)
/* 80160E08 0015DEE8  C0 25 00 34 */	lfs f1, 0x34(r5)
/* 80160E0C 0015DEEC  EC 00 08 28 */	fsubs f0, f0, f1
/* 80160E10 0015DEF0  EC 01 00 2A */	fadds f0, f1, f0
/* 80160E14 0015DEF4  D0 05 00 34 */	stfs f0, 0x34(r5)
/* 80160E18 0015DEF8  80 BF 17 A8 */	lwz r5, 0x17a8(r31)
/* 80160E1C 0015DEFC  C0 1F 17 B8 */	lfs f0, 0x17b8(r31)
/* 80160E20 0015DF00  80 A5 00 24 */	lwz r5, 0x24(r5)
/* 80160E24 0015DF04  80 A5 00 4C */	lwz r5, 0x4c(r5)
/* 80160E28 0015DF08  C0 25 00 34 */	lfs f1, 0x34(r5)
/* 80160E2C 0015DF0C  EC 00 08 28 */	fsubs f0, f0, f1
/* 80160E30 0015DF10  EC 01 00 2A */	fadds f0, f1, f0
/* 80160E34 0015DF14  D0 05 00 34 */	stfs f0, 0x34(r5)
/* 80160E38 0015DF18  80 BF 17 AC */	lwz r5, 0x17ac(r31)
/* 80160E3C 0015DF1C  C0 1F 17 B8 */	lfs f0, 0x17b8(r31)
/* 80160E40 0015DF20  80 A5 00 24 */	lwz r5, 0x24(r5)
/* 80160E44 0015DF24  80 A5 00 4C */	lwz r5, 0x4c(r5)
/* 80160E48 0015DF28  C0 25 00 34 */	lfs f1, 0x34(r5)
/* 80160E4C 0015DF2C  EC 00 08 28 */	fsubs f0, f0, f1
/* 80160E50 0015DF30  EC 01 00 2A */	fadds f0, f1, f0
/* 80160E54 0015DF34  D0 05 00 34 */	stfs f0, 0x34(r5)
/* 80160E58 0015DF38  80 BF 17 B0 */	lwz r5, 0x17b0(r31)
/* 80160E5C 0015DF3C  C0 1F 17 B8 */	lfs f0, 0x17b8(r31)
/* 80160E60 0015DF40  80 A5 00 24 */	lwz r5, 0x24(r5)
/* 80160E64 0015DF44  80 A5 00 4C */	lwz r5, 0x4c(r5)
/* 80160E68 0015DF48  C0 25 00 34 */	lfs f1, 0x34(r5)
/* 80160E6C 0015DF4C  EC 00 08 28 */	fsubs f0, f0, f1
/* 80160E70 0015DF50  EC 01 00 2A */	fadds f0, f1, f0
/* 80160E74 0015DF54  D0 05 00 34 */	stfs f0, 0x34(r5)
/* 80160E78 0015DF58  48 08 68 89 */	bl strcpy
/* 80160E7C 0015DF5C  3B 80 00 00 */	li r28, 0x0
/* 80160E80 0015DF60  7F FD FB 78 */	mr r29, r31
.L_80160E84:
/* 80160E84 0015DF64  38 1C 00 31 */	addi r0, r28, 0x31
/* 80160E88 0015DF68  7F BE EB 78 */	mr r30, r29
/* 80160E8C 0015DF6C  98 01 00 35 */	stb r0, 0x35(r1)
/* 80160E90 0015DF70  3B 60 00 00 */	li r27, 0x0
.L_80160E94:
/* 80160E94 0015DF74  38 1B 00 31 */	addi r0, r27, 0x31
/* 80160E98 0015DF78  38 61 00 28 */	addi r3, r1, 0x28
/* 80160E9C 0015DF7C  98 01 00 38 */	stb r0, 0x38(r1)
/* 80160EA0 0015DF80  4B EE B3 75 */	bl xStrHash__FPCc
/* 80160EA4 0015DF84  4B F5 3B 99 */	bl zSceneFindObject__FUi
/* 80160EA8 0015DF88  90 7E 15 90 */	stw r3, 0x1590(r30)
/* 80160EAC 0015DF8C  3B 7B 00 01 */	addi r27, r27, 0x1
/* 80160EB0 0015DF90  2C 1B 00 03 */	cmpwi r27, 0x3
/* 80160EB4 0015DF94  80 7E 15 90 */	lwz r3, 0x1590(r30)
/* 80160EB8 0015DF98  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80160EBC 0015DF9C  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80160EC0 0015DFA0  C0 03 00 34 */	lfs f0, 0x34(r3)
/* 80160EC4 0015DFA4  D0 1E 15 9C */	stfs f0, 0x159c(r30)
/* 80160EC8 0015DFA8  80 7E 15 90 */	lwz r3, 0x1590(r30)
/* 80160ECC 0015DFAC  3B DE 00 14 */	addi r30, r30, 0x14
/* 80160ED0 0015DFB0  80 03 00 D8 */	lwz r0, 0xd8(r3)
/* 80160ED4 0015DFB4  60 00 00 08 */	ori r0, r0, 0x8
/* 80160ED8 0015DFB8  90 03 00 D8 */	stw r0, 0xd8(r3)
/* 80160EDC 0015DFBC  41 80 FF B8 */	blt .L_80160E94
/* 80160EE0 0015DFC0  3B 9C 00 01 */	addi r28, r28, 0x1
/* 80160EE4 0015DFC4  3B BD 00 3C */	addi r29, r29, 0x3c
/* 80160EE8 0015DFC8  2C 1C 00 08 */	cmpwi r28, 0x8
/* 80160EEC 0015DFCC  41 80 FF 98 */	blt .L_80160E84
/* 80160EF0 0015DFD0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80160EF4 0015DFD4  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 80160EF8 0015DFD8  38 63 01 AD */	addi r3, r3, 0x1ad
/* 80160EFC 0015DFDC  4B EE B3 19 */	bl xStrHash__FPCc
/* 80160F00 0015DFE0  4B F5 3B 3D */	bl zSceneFindObject__FUi
/* 80160F04 0015DFE4  90 7F 17 70 */	stw r3, 0x1770(r31)
/* 80160F08 0015DFE8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80160F0C 0015DFEC  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 80160F10 0015DFF0  C0 02 A9 E4 */	lfs f0, "@1046"@sda21(r2)
/* 80160F14 0015DFF4  38 63 01 BE */	addi r3, r3, 0x1be
/* 80160F18 0015DFF8  D0 1F 17 7C */	stfs f0, 0x177c(r31)
/* 80160F1C 0015DFFC  80 9F 17 70 */	lwz r4, 0x1770(r31)
/* 80160F20 0015E000  80 04 00 D8 */	lwz r0, 0xd8(r4)
/* 80160F24 0015E004  60 00 00 08 */	ori r0, r0, 0x8
/* 80160F28 0015E008  90 04 00 D8 */	stw r0, 0xd8(r4)
/* 80160F2C 0015E00C  4B EE B2 E9 */	bl xStrHash__FPCc
/* 80160F30 0015E010  38 80 00 00 */	li r4, 0x0
/* 80160F34 0015E014  4B EE A7 D9 */	bl xSTFindAsset__FUiPUi
/* 80160F38 0015E018  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80160F3C 0015E01C  90 7F 17 84 */	stw r3, 0x1784(r31)
/* 80160F40 0015E020  38 64 08 9C */	addi r3, r4, "@stringBase0"@l
/* 80160F44 0015E024  38 63 01 CE */	addi r3, r3, 0x1ce
/* 80160F48 0015E028  4B EE B2 CD */	bl xStrHash__FPCc
/* 80160F4C 0015E02C  38 80 00 00 */	li r4, 0x0
/* 80160F50 0015E030  4B EE A7 BD */	bl xSTFindAsset__FUiPUi
/* 80160F54 0015E034  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80160F58 0015E038  90 7F 17 88 */	stw r3, 0x1788(r31)
/* 80160F5C 0015E03C  38 64 08 9C */	addi r3, r4, "@stringBase0"@l
/* 80160F60 0015E040  38 63 01 E5 */	addi r3, r3, 0x1e5
/* 80160F64 0015E044  4B EE B2 B1 */	bl xStrHash__FPCc
/* 80160F68 0015E048  38 80 00 00 */	li r4, 0x0
/* 80160F6C 0015E04C  4B EE A7 A1 */	bl xSTFindAsset__FUiPUi
/* 80160F70 0015E050  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80160F74 0015E054  90 7F 02 D0 */	stw r3, 0x2d0(r31)
/* 80160F78 0015E058  38 64 08 9C */	addi r3, r4, "@stringBase0"@l
/* 80160F7C 0015E05C  38 63 01 F5 */	addi r3, r3, 0x1f5
/* 80160F80 0015E060  4B EE B2 95 */	bl xStrHash__FPCc
/* 80160F84 0015E064  38 80 00 00 */	li r4, 0x0
/* 80160F88 0015E068  4B EE A7 85 */	bl xSTFindAsset__FUiPUi
/* 80160F8C 0015E06C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80160F90 0015E070  90 7F 02 D4 */	stw r3, 0x2d4(r31)
/* 80160F94 0015E074  38 64 08 9C */	addi r3, r4, "@stringBase0"@l
/* 80160F98 0015E078  38 63 02 06 */	addi r3, r3, 0x206
/* 80160F9C 0015E07C  4B EE B2 79 */	bl xStrHash__FPCc
/* 80160FA0 0015E080  38 80 00 00 */	li r4, 0x0
/* 80160FA4 0015E084  4B EE A7 69 */	bl xSTFindAsset__FUiPUi
/* 80160FA8 0015E088  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80160FAC 0015E08C  90 7F 17 C8 */	stw r3, 0x17c8(r31)
/* 80160FB0 0015E090  38 64 08 9C */	addi r3, r4, "@stringBase0"@l
/* 80160FB4 0015E094  38 63 02 13 */	addi r3, r3, 0x213
/* 80160FB8 0015E098  4B EE B2 5D */	bl xStrHash__FPCc
/* 80160FBC 0015E09C  38 80 00 00 */	li r4, 0x0
/* 80160FC0 0015E0A0  4B EE A7 4D */	bl xSTFindAsset__FUiPUi
/* 80160FC4 0015E0A4  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80160FC8 0015E0A8  90 7F 18 C8 */	stw r3, 0x18c8(r31)
/* 80160FCC 0015E0AC  38 64 08 9C */	addi r3, r4, "@stringBase0"@l
/* 80160FD0 0015E0B0  38 63 02 20 */	addi r3, r3, 0x220
/* 80160FD4 0015E0B4  4B EE B2 41 */	bl xStrHash__FPCc
/* 80160FD8 0015E0B8  38 80 00 00 */	li r4, 0x0
/* 80160FDC 0015E0BC  4B EE A7 31 */	bl xSTFindAsset__FUiPUi
/* 80160FE0 0015E0C0  38 00 00 00 */	li r0, 0x0
/* 80160FE4 0015E0C4  38 80 00 00 */	li r4, 0x0
/* 80160FE8 0015E0C8  90 1F 17 C0 */	stw r0, 0x17c0(r31)
/* 80160FEC 0015E0CC  38 A0 00 00 */	li r5, 0x0
/* 80160FF0 0015E0D0  38 C0 00 00 */	li r6, 0x0
/* 80160FF4 0015E0D4  38 E0 00 00 */	li r7, 0x0
/* 80160FF8 0015E0D8  4B ED 30 F9 */	bl xModelInstanceAlloc__FP8RpAtomicPvUsUcPUc
/* 80160FFC 0015E0DC  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80161000 0015E0E0  90 7F 17 C0 */	stw r3, 0x17c0(r31)
/* 80161004 0015E0E4  38 64 08 9C */	addi r3, r4, "@stringBase0"@l
/* 80161008 0015E0E8  38 63 02 2D */	addi r3, r3, 0x22d
/* 8016100C 0015E0EC  4B EE B2 09 */	bl xStrHash__FPCc
/* 80161010 0015E0F0  38 80 00 00 */	li r4, 0x0
/* 80161014 0015E0F4  4B EE A6 F9 */	bl xSTFindAsset__FUiPUi
/* 80161018 0015E0F8  38 00 00 00 */	li r0, 0x0
/* 8016101C 0015E0FC  38 80 00 00 */	li r4, 0x0
/* 80161020 0015E100  90 1F 17 C4 */	stw r0, 0x17c4(r31)
/* 80161024 0015E104  38 A0 00 00 */	li r5, 0x0
/* 80161028 0015E108  38 C0 00 00 */	li r6, 0x0
/* 8016102C 0015E10C  38 E0 00 00 */	li r7, 0x0
/* 80161030 0015E110  4B ED 30 C1 */	bl xModelInstanceAlloc__FP8RpAtomicPvUsUcPUc
/* 80161034 0015E114  90 7F 17 C4 */	stw r3, 0x17c4(r31)
/* 80161038 0015E118  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016103C 0015E11C  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 80161040 0015E120  C0 02 A9 E8 */	lfs f0, "@1047"@sda21(r2)
/* 80161044 0015E124  38 63 02 3E */	addi r3, r3, 0x23e
/* 80161048 0015E128  80 9F 17 C4 */	lwz r4, 0x17c4(r31)
/* 8016104C 0015E12C  D0 04 00 24 */	stfs f0, 0x24(r4)
/* 80161050 0015E130  4B EE B1 C5 */	bl xStrHash__FPCc
/* 80161054 0015E134  4B F5 39 E9 */	bl zSceneFindObject__FUi
/* 80161058 0015E138  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8016105C 0015E13C  90 7F 18 D0 */	stw r3, 0x18d0(r31)
/* 80161060 0015E140  38 64 08 9C */	addi r3, r4, "@stringBase0"@l
/* 80161064 0015E144  38 63 02 4C */	addi r3, r3, 0x24c
/* 80161068 0015E148  4B EE B1 AD */	bl xStrHash__FPCc
/* 8016106C 0015E14C  4B F5 39 D1 */	bl zSceneFindObject__FUi
/* 80161070 0015E150  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80161074 0015E154  90 7F 18 D4 */	stw r3, 0x18d4(r31)
/* 80161078 0015E158  38 64 08 9C */	addi r3, r4, "@stringBase0"@l
/* 8016107C 0015E15C  38 63 02 5A */	addi r3, r3, 0x25a
/* 80161080 0015E160  4B EE B1 95 */	bl xStrHash__FPCc
/* 80161084 0015E164  4B F5 39 B9 */	bl zSceneFindObject__FUi
/* 80161088 0015E168  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8016108C 0015E16C  90 7F 18 D8 */	stw r3, 0x18d8(r31)
/* 80161090 0015E170  38 64 08 9C */	addi r3, r4, "@stringBase0"@l
/* 80161094 0015E174  38 63 02 68 */	addi r3, r3, 0x268
/* 80161098 0015E178  4B EE B1 7D */	bl xStrHash__FPCc
/* 8016109C 0015E17C  4B F5 39 A1 */	bl zSceneFindObject__FUi
/* 801610A0 0015E180  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801610A4 0015E184  90 7F 18 E0 */	stw r3, 0x18e0(r31)
/* 801610A8 0015E188  38 64 08 9C */	addi r3, r4, "@stringBase0"@l
/* 801610AC 0015E18C  38 63 02 7A */	addi r3, r3, 0x27a
/* 801610B0 0015E190  4B EE B1 65 */	bl xStrHash__FPCc
/* 801610B4 0015E194  38 80 00 00 */	li r4, 0x0
/* 801610B8 0015E198  4B EE A6 55 */	bl xSTFindAsset__FUiPUi
/* 801610BC 0015E19C  7C 60 1B 78 */	mr r0, r3
/* 801610C0 0015E1A0  38 7F 02 D8 */	addi r3, r31, 0x2d8
/* 801610C4 0015E1A4  7C 04 03 78 */	mr r4, r0
/* 801610C8 0015E1A8  4B EE D4 15 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 801610CC 0015E1AC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801610D0 0015E1B0  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 801610D4 0015E1B4  38 63 02 8A */	addi r3, r3, 0x28a
/* 801610D8 0015E1B8  4B EE B1 3D */	bl xStrHash__FPCc
/* 801610DC 0015E1BC  38 80 00 00 */	li r4, 0x0
/* 801610E0 0015E1C0  4B EE A6 2D */	bl xSTFindAsset__FUiPUi
/* 801610E4 0015E1C4  7C 64 1B 78 */	mr r4, r3
/* 801610E8 0015E1C8  38 7F 02 E4 */	addi r3, r31, 0x2e4
/* 801610EC 0015E1CC  4B EE D3 F1 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 801610F0 0015E1D0  C0 22 A9 C4 */	lfs f1, "@832"@sda21(r2)
/* 801610F4 0015E1D4  38 7F 02 F0 */	addi r3, r31, 0x2f0
/* 801610F8 0015E1D8  C0 62 A9 C0 */	lfs f3, "@831"@sda21(r2)
/* 801610FC 0015E1DC  FC 40 08 90 */	fmr f2, f1
/* 80161100 0015E1E0  4B EA DE FD */	bl xVec3Init__FP5xVec3fff
/* 80161104 0015E1E4  38 7F 02 F0 */	addi r3, r31, 0x2f0
/* 80161108 0015E1E8  38 9F 02 E4 */	addi r4, r31, 0x2e4
/* 8016110C 0015E1EC  4B EA D6 49 */	bl xVec3AddTo__FP5xVec3PC5xVec3
/* 80161110 0015E1F0  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80161114 0015E1F4  38 61 00 28 */	addi r3, r1, 0x28
/* 80161118 0015E1F8  38 84 08 9C */	addi r4, r4, "@stringBase0"@l
/* 8016111C 0015E1FC  38 84 02 94 */	addi r4, r4, 0x294
/* 80161120 0015E200  48 08 65 E1 */	bl strcpy
/* 80161124 0015E204  3B C0 00 00 */	li r30, 0x0
/* 80161128 0015E208  7F FD FB 78 */	mr r29, r31
.L_8016112C:
/* 8016112C 0015E20C  38 1E 00 31 */	addi r0, r30, 0x31
/* 80161130 0015E210  38 61 00 28 */	addi r3, r1, 0x28
/* 80161134 0015E214  98 01 00 38 */	stb r0, 0x38(r1)
/* 80161138 0015E218  4B EE B0 DD */	bl xStrHash__FPCc
/* 8016113C 0015E21C  4B F5 39 01 */	bl zSceneFindObject__FUi
/* 80161140 0015E220  3B DE 00 01 */	addi r30, r30, 0x1
/* 80161144 0015E224  90 7D 13 D4 */	stw r3, 0x13d4(r29)
/* 80161148 0015E228  2C 1E 00 03 */	cmpwi r30, 0x3
/* 8016114C 0015E22C  3B BD 00 04 */	addi r29, r29, 0x4
/* 80161150 0015E230  41 80 FF DC */	blt .L_8016112C
/* 80161154 0015E234  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80161158 0015E238  38 61 00 28 */	addi r3, r1, 0x28
/* 8016115C 0015E23C  38 84 08 9C */	addi r4, r4, "@stringBase0"@l
/* 80161160 0015E240  38 84 02 A6 */	addi r4, r4, 0x2a6
/* 80161164 0015E244  48 08 65 9D */	bl strcpy
/* 80161168 0015E248  3B C0 00 00 */	li r30, 0x0
/* 8016116C 0015E24C  7F FD FB 78 */	mr r29, r31
.L_80161170:
/* 80161170 0015E250  38 1E 00 31 */	addi r0, r30, 0x31
/* 80161174 0015E254  38 61 00 28 */	addi r3, r1, 0x28
/* 80161178 0015E258  98 01 00 37 */	stb r0, 0x37(r1)
/* 8016117C 0015E25C  4B EE B0 99 */	bl xStrHash__FPCc
/* 80161180 0015E260  4B F5 38 BD */	bl zSceneFindObject__FUi
/* 80161184 0015E264  3B DE 00 01 */	addi r30, r30, 0x1
/* 80161188 0015E268  90 7D 13 E0 */	stw r3, 0x13e0(r29)
/* 8016118C 0015E26C  2C 1E 00 03 */	cmpwi r30, 0x3
/* 80161190 0015E270  3B BD 00 04 */	addi r29, r29, 0x4
/* 80161194 0015E274  41 80 FF DC */	blt .L_80161170
/* 80161198 0015E278  3B C0 00 00 */	li r30, 0x0
/* 8016119C 0015E27C  7F FD FB 78 */	mr r29, r31
.L_801611A0:
/* 801611A0 0015E280  80 7D 13 D4 */	lwz r3, 0x13d4(r29)
/* 801611A4 0015E284  7F E4 FB 78 */	mr r4, r31
/* 801611A8 0015E288  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 801611AC 0015E28C  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 801611B0 0015E290  7D 89 03 A6 */	mtctr r12
/* 801611B4 0015E294  4E 80 04 21 */	bctrl
/* 801611B8 0015E298  3B DE 00 01 */	addi r30, r30, 0x1
/* 801611BC 0015E29C  3B BD 00 04 */	addi r29, r29, 0x4
/* 801611C0 0015E2A0  2C 1E 00 03 */	cmpwi r30, 0x3
/* 801611C4 0015E2A4  41 80 FF DC */	blt .L_801611A0
/* 801611C8 0015E2A8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801611CC 0015E2AC  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 801611D0 0015E2B0  38 63 02 B7 */	addi r3, r3, 0x2b7
/* 801611D4 0015E2B4  4B EE B0 41 */	bl xStrHash__FPCc
/* 801611D8 0015E2B8  4B F5 38 65 */	bl zSceneFindObject__FUi
/* 801611DC 0015E2BC  90 7F 18 E4 */	stw r3, 0x18e4(r31)
/* 801611E0 0015E2C0  38 80 00 01 */	li r4, 0x1
/* 801611E4 0015E2C4  80 7F 18 E4 */	lwz r3, 0x18e4(r31)
/* 801611E8 0015E2C8  4B FA 4C 4D */	bl TalkOnScreen__12zNPCNewsFishFi
/* 801611EC 0015E2CC  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801611F0 0015E2D0  38 61 00 08 */	addi r3, r1, 0x8
/* 801611F4 0015E2D4  38 84 08 9C */	addi r4, r4, "@stringBase0"@l
/* 801611F8 0015E2D8  38 84 02 C0 */	addi r4, r4, 0x2c0
/* 801611FC 0015E2DC  48 08 65 05 */	bl strcpy
/* 80161200 0015E2E0  3B C0 00 00 */	li r30, 0x0
/* 80161204 0015E2E4  7F FD FB 78 */	mr r29, r31
.L_80161208:
/* 80161208 0015E2E8  57 C4 06 3E */	clrlwi r4, r30, 24
/* 8016120C 0015E2EC  38 61 00 08 */	addi r3, r1, 0x8
/* 80161210 0015E2F0  38 04 00 31 */	addi r0, r4, 0x31
/* 80161214 0015E2F4  98 01 00 10 */	stb r0, 0x10(r1)
/* 80161218 0015E2F8  4B EE AF FD */	bl xStrHash__FPCc
/* 8016121C 0015E2FC  4B F5 38 21 */	bl zSceneFindObject__FUi
/* 80161220 0015E300  3B DE 00 01 */	addi r30, r30, 0x1
/* 80161224 0015E304  90 7D 19 00 */	stw r3, 0x1900(r29)
/* 80161228 0015E308  2C 1E 00 02 */	cmpwi r30, 0x2
/* 8016122C 0015E30C  3B BD 00 04 */	addi r29, r29, 0x4
/* 80161230 0015E310  41 80 FF D8 */	blt .L_80161208
/* 80161234 0015E314  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80161238 0015E318  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 8016123C 0015E31C  38 63 02 CA */	addi r3, r3, 0x2ca
/* 80161240 0015E320  4B EE AF D5 */	bl xStrHash__FPCc
/* 80161244 0015E324  4B F5 37 F9 */	bl zSceneFindObject__FUi
/* 80161248 0015E328  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8016124C 0015E32C  90 7F 19 08 */	stw r3, 0x1908(r31)
/* 80161250 0015E330  38 64 08 9C */	addi r3, r4, "@stringBase0"@l
/* 80161254 0015E334  38 63 02 DB */	addi r3, r3, 0x2db
/* 80161258 0015E338  4B EE AF BD */	bl xStrHash__FPCc
/* 8016125C 0015E33C  4B F5 37 E1 */	bl zSceneFindObject__FUi
/* 80161260 0015E340  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80161264 0015E344  90 7F 19 0C */	stw r3, 0x190c(r31)
/* 80161268 0015E348  38 64 08 9C */	addi r3, r4, "@stringBase0"@l
/* 8016126C 0015E34C  38 63 02 EC */	addi r3, r3, 0x2ec
/* 80161270 0015E350  4B EE AF A5 */	bl xStrHash__FPCc
/* 80161274 0015E354  4B F5 37 C9 */	bl zSceneFindObject__FUi
/* 80161278 0015E358  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 8016127C 0015E35C  90 7F 19 10 */	stw r3, 0x1910(r31)
/* 80161280 0015E360  38 64 08 9C */	addi r3, r4, "@stringBase0"@l
/* 80161284 0015E364  38 63 02 FD */	addi r3, r3, 0x2fd
/* 80161288 0015E368  4B EE AF 8D */	bl xStrHash__FPCc
/* 8016128C 0015E36C  4B F5 37 B1 */	bl zSceneFindObject__FUi
/* 80161290 0015E370  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80161294 0015E374  90 7F 19 14 */	stw r3, 0x1914(r31)
/* 80161298 0015E378  38 64 08 9C */	addi r3, r4, "@stringBase0"@l
/* 8016129C 0015E37C  38 63 03 0E */	addi r3, r3, 0x30e
/* 801612A0 0015E380  4B EE AF 75 */	bl xStrHash__FPCc
/* 801612A4 0015E384  4B F5 37 99 */	bl zSceneFindObject__FUi
/* 801612A8 0015E388  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801612AC 0015E38C  90 7F 19 18 */	stw r3, 0x1918(r31)
/* 801612B0 0015E390  38 64 08 9C */	addi r3, r4, "@stringBase0"@l
/* 801612B4 0015E394  38 63 03 1F */	addi r3, r3, 0x31f
/* 801612B8 0015E398  4B EE AF 5D */	bl xStrHash__FPCc
/* 801612BC 0015E39C  4B F5 37 81 */	bl zSceneFindObject__FUi
/* 801612C0 0015E3A0  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801612C4 0015E3A4  90 7F 19 1C */	stw r3, 0x191c(r31)
/* 801612C8 0015E3A8  38 64 08 9C */	addi r3, r4, "@stringBase0"@l
/* 801612CC 0015E3AC  38 63 03 30 */	addi r3, r3, 0x330
/* 801612D0 0015E3B0  4B EE AF 45 */	bl xStrHash__FPCc
/* 801612D4 0015E3B4  4B F5 37 69 */	bl zSceneFindObject__FUi
/* 801612D8 0015E3B8  90 7F 19 20 */	stw r3, 0x1920(r31)
/* 801612DC 0015E3BC  38 7F 19 24 */	addi r3, r31, 0x1924
/* 801612E0 0015E3C0  C0 02 A9 EC */	lfs f0, "@1048"@sda21(r2)
/* 801612E4 0015E3C4  D0 1F 19 24 */	stfs f0, 0x1924(r31)
/* 801612E8 0015E3C8  C0 02 A9 F0 */	lfs f0, "@1049"@sda21(r2)
/* 801612EC 0015E3CC  D0 1F 19 28 */	stfs f0, 0x1928(r31)
/* 801612F0 0015E3D0  C0 02 A9 F4 */	lfs f0, "@1050"@sda21(r2)
/* 801612F4 0015E3D4  D0 1F 19 2C */	stfs f0, 0x192c(r31)
/* 801612F8 0015E3D8  C0 02 A9 F8 */	lfs f0, "@1051"@sda21(r2)
/* 801612FC 0015E3DC  D0 1F 19 30 */	stfs f0, 0x1930(r31)
/* 80161300 0015E3E0  C0 02 A9 FC */	lfs f0, "@1052"@sda21(r2)
/* 80161304 0015E3E4  D0 1F 19 34 */	stfs f0, 0x1934(r31)
/* 80161308 0015E3E8  C0 02 A9 CC */	lfs f0, "@870"@sda21(r2)
/* 8016130C 0015E3EC  D0 1F 19 38 */	stfs f0, 0x1938(r31)
/* 80161310 0015E3F0  C0 02 AA 00 */	lfs f0, "@1053"@sda21(r2)
/* 80161314 0015E3F4  D0 1F 19 3C */	stfs f0, 0x193c(r31)
/* 80161318 0015E3F8  C0 02 A9 F8 */	lfs f0, "@1051"@sda21(r2)
/* 8016131C 0015E3FC  D0 1F 19 40 */	stfs f0, 0x1940(r31)
/* 80161320 0015E400  C0 02 AA 04 */	lfs f0, "@1054"@sda21(r2)
/* 80161324 0015E404  D0 1F 19 44 */	stfs f0, 0x1944(r31)
/* 80161328 0015E408  C0 02 AA 08 */	lfs f0, "@1055"@sda21(r2)
/* 8016132C 0015E40C  D0 1F 19 48 */	stfs f0, 0x1948(r31)
/* 80161330 0015E410  C0 02 AA 08 */	lfs f0, "@1055"@sda21(r2)
/* 80161334 0015E414  D0 1F 19 4C */	stfs f0, 0x194c(r31)
/* 80161338 0015E418  C0 02 AA 08 */	lfs f0, "@1055"@sda21(r2)
/* 8016133C 0015E41C  D0 1F 19 50 */	stfs f0, 0x1950(r31)
/* 80161340 0015E420  C0 02 AA 08 */	lfs f0, "@1055"@sda21(r2)
/* 80161344 0015E424  D0 1F 19 54 */	stfs f0, 0x1954(r31)
/* 80161348 0015E428  C0 02 AA 0C */	lfs f0, "@1056"@sda21(r2)
/* 8016134C 0015E42C  D0 1F 19 58 */	stfs f0, 0x1958(r31)
/* 80161350 0015E430  C0 02 A9 CC */	lfs f0, "@870"@sda21(r2)
/* 80161354 0015E434  D0 1F 19 5C */	stfs f0, 0x195c(r31)
/* 80161358 0015E438  4B EA CB 49 */	bl init__13xBinaryCameraFv
/* 8016135C 0015E43C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80161360 0015E440  38 7F 19 24 */	addi r3, r31, 0x1924
/* 80161364 0015E444  38 84 08 9C */	addi r4, r4, "@stringBase0"@l
/* 80161368 0015E448  38 84 03 41 */	addi r4, r4, 0x341
/* 8016136C 0015E44C  4B FE 52 11 */	bl add_tweaks__13xBinaryCameraFPCc
/* 80161370 0015E450  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80161374 0015E454  3C 60 80 27 */	lis r3, recenter_cb@ha
/* 80161378 0015E458  38 84 08 9C */	addi r4, r4, "@stringBase0"@l
/* 8016137C 0015E45C  38 C0 00 00 */	li r6, 0x0
/* 80161380 0015E460  38 A3 08 74 */	addi r5, r3, recenter_cb@l
/* 80161384 0015E464  38 E0 00 00 */	li r7, 0x0
/* 80161388 0015E468  38 64 03 5C */	addi r3, r4, 0x35c
/* 8016138C 0015E46C  38 84 03 7F */	addi r4, r4, 0x37f
/* 80161390 0015E470  4B F3 5F 21 */	bl xDebugAddTweak__FPCcPCcPC14tweak_callbackPvUi
/* 80161394 0015E474  7F E3 FB 78 */	mr r3, r31
/* 80161398 0015E478  4B F8 E0 C9 */	bl Setup__10zNPCCommonFv
/* 8016139C 0015E47C  BB 61 00 4C */	lmw r27, 0x4c(r1)
/* 801613A0 0015E480  80 01 00 64 */	lwz r0, 0x64(r1)
/* 801613A4 0015E484  7C 08 03 A6 */	mtlr r0
/* 801613A8 0015E488  38 21 00 60 */	addi r1, r1, 0x60
/* 801613AC 0015E48C  4E 80 00 20 */	blr
.endfn Setup__12zNPCBPatrickFv

# zNPCBPatrick::SelfSetup()
.fn SelfSetup__12zNPCBPatrickFv, global
/* 801613B0 0015E490  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801613B4 0015E494  7C 08 02 A6 */	mflr r0
/* 801613B8 0015E498  90 01 00 14 */	stw r0, 0x14(r1)
/* 801613BC 0015E49C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801613C0 0015E4A0  7C 7F 1B 78 */	mr r31, r3
/* 801613C4 0015E4A4  4B FF F6 51 */	bl Pat_ResetGlobalStuff__Fv
/* 801613C8 0015E4A8  4B FA BB 0D */	bl xBehaveMgr_GetSelf__Fv
/* 801613CC 0015E4AC  7F E4 FB 78 */	mr r4, r31
/* 801613D0 0015E4B0  38 A0 00 00 */	li r5, 0x0
/* 801613D4 0015E4B4  4B FA BC 69 */	bl Subscribe__10xBehaveMgrFP5xBasei
/* 801613D8 0015E4B8  90 7F 02 28 */	stw r3, 0x228(r31)
/* 801613DC 0015E4BC  83 FF 02 28 */	lwz r31, 0x228(r31)
/* 801613E0 0015E4C0  7F E3 FB 78 */	mr r3, r31
/* 801613E4 0015E4C4  4B FA BD A5 */	bl BrainBegin__7xPsycheFv
/* 801613E8 0015E4C8  3C 80 4E 47 */	lis r4, 0x4e47
/* 801613EC 0015E4CC  7F E3 FB 78 */	mr r3, r31
/* 801613F0 0015E4D0  38 84 42 5A */	addi r4, r4, 0x425a
/* 801613F4 0015E4D4  38 A0 00 00 */	li r5, 0x0
/* 801613F8 0015E4D8  4B FA BE 49 */	bl AddGoal__7xPsycheFiPv
/* 801613FC 0015E4DC  3C 80 80 16 */	lis r4, idleCB__FP5xGoalPvP11en_trantypefPv@ha
/* 80161400 0015E4E0  38 A0 00 00 */	li r5, 0x0
/* 80161404 0015E4E4  38 84 4A 94 */	addi r4, r4, idleCB__FP5xGoalPvP11en_trantypefPv@l
/* 80161408 0015E4E8  38 C0 00 00 */	li r6, 0x0
/* 8016140C 0015E4EC  38 E0 00 00 */	li r7, 0x0
/* 80161410 0015E4F0  4B F9 36 25 */	bl SetCallbacks__5xGoalFPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvfPv_iPv
/* 80161414 0015E4F4  3C 80 4E 47 */	lis r4, 0x4e47
/* 80161418 0015E4F8  7F E3 FB 78 */	mr r3, r31
/* 8016141C 0015E4FC  38 84 42 5B */	addi r4, r4, 0x425b
/* 80161420 0015E500  38 A0 00 00 */	li r5, 0x0
/* 80161424 0015E504  4B FA BE 1D */	bl AddGoal__7xPsycheFiPv
/* 80161428 0015E508  3C 80 80 16 */	lis r4, tauntCB__FP5xGoalPvP11en_trantypefPv@ha
/* 8016142C 0015E50C  38 A0 00 00 */	li r5, 0x0
/* 80161430 0015E510  38 84 4B 40 */	addi r4, r4, tauntCB__FP5xGoalPvP11en_trantypefPv@l
/* 80161434 0015E514  38 C0 00 00 */	li r6, 0x0
/* 80161438 0015E518  38 E0 00 00 */	li r7, 0x0
/* 8016143C 0015E51C  4B F9 35 F9 */	bl SetCallbacks__5xGoalFPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvfPv_iPv
/* 80161440 0015E520  3C 80 4E 47 */	lis r4, 0x4e47
/* 80161444 0015E524  7F E3 FB 78 */	mr r3, r31
/* 80161448 0015E528  38 84 42 5C */	addi r4, r4, 0x425c
/* 8016144C 0015E52C  38 A0 00 00 */	li r5, 0x0
/* 80161450 0015E530  4B FA BD F1 */	bl AddGoal__7xPsycheFiPv
/* 80161454 0015E534  3C 80 80 16 */	lis r4, hitCB__FP5xGoalPvP11en_trantypefPv@ha
/* 80161458 0015E538  38 A0 00 00 */	li r5, 0x0
/* 8016145C 0015E53C  38 84 4C 00 */	addi r4, r4, hitCB__FP5xGoalPvP11en_trantypefPv@l
/* 80161460 0015E540  38 C0 00 00 */	li r6, 0x0
/* 80161464 0015E544  38 E0 00 00 */	li r7, 0x0
/* 80161468 0015E548  4B F9 35 CD */	bl SetCallbacks__5xGoalFPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvfPv_iPv
/* 8016146C 0015E54C  3C 80 4E 47 */	lis r4, 0x4e47
/* 80161470 0015E550  7F E3 FB 78 */	mr r3, r31
/* 80161474 0015E554  38 84 42 5D */	addi r4, r4, 0x425d
/* 80161478 0015E558  38 A0 00 00 */	li r5, 0x0
/* 8016147C 0015E55C  4B FA BD C5 */	bl AddGoal__7xPsycheFiPv
/* 80161480 0015E560  3C 80 80 16 */	lis r4, spitCB__FP5xGoalPvP11en_trantypefPv@ha
/* 80161484 0015E564  38 A0 00 00 */	li r5, 0x0
/* 80161488 0015E568  38 84 4C D4 */	addi r4, r4, spitCB__FP5xGoalPvP11en_trantypefPv@l
/* 8016148C 0015E56C  38 C0 00 00 */	li r6, 0x0
/* 80161490 0015E570  38 E0 00 00 */	li r7, 0x0
/* 80161494 0015E574  4B F9 35 A1 */	bl SetCallbacks__5xGoalFPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvfPv_iPv
/* 80161498 0015E578  3C 80 4E 47 */	lis r4, 0x4e47
/* 8016149C 0015E57C  7F E3 FB 78 */	mr r3, r31
/* 801614A0 0015E580  38 84 42 5E */	addi r4, r4, 0x425e
/* 801614A4 0015E584  38 A0 00 00 */	li r5, 0x0
/* 801614A8 0015E588  4B FA BD 99 */	bl AddGoal__7xPsycheFiPv
/* 801614AC 0015E58C  3C 80 80 16 */	lis r4, runCB__FP5xGoalPvP11en_trantypefPv@ha
/* 801614B0 0015E590  38 A0 00 00 */	li r5, 0x0
/* 801614B4 0015E594  38 84 4D AC */	addi r4, r4, runCB__FP5xGoalPvP11en_trantypefPv@l
/* 801614B8 0015E598  38 C0 00 00 */	li r6, 0x0
/* 801614BC 0015E59C  38 E0 00 00 */	li r7, 0x0
/* 801614C0 0015E5A0  4B F9 35 75 */	bl SetCallbacks__5xGoalFPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvfPv_iPv
/* 801614C4 0015E5A4  3C 80 4E 47 */	lis r4, 0x4e47
/* 801614C8 0015E5A8  7F E3 FB 78 */	mr r3, r31
/* 801614CC 0015E5AC  38 84 42 5F */	addi r4, r4, 0x425f
/* 801614D0 0015E5B0  38 A0 00 00 */	li r5, 0x0
/* 801614D4 0015E5B4  4B FA BD 6D */	bl AddGoal__7xPsycheFiPv
/* 801614D8 0015E5B8  3C 80 80 16 */	lis r4, smackCB__FP5xGoalPvP11en_trantypefPv@ha
/* 801614DC 0015E5BC  38 A0 00 00 */	li r5, 0x0
/* 801614E0 0015E5C0  38 84 4E 60 */	addi r4, r4, smackCB__FP5xGoalPvP11en_trantypefPv@l
/* 801614E4 0015E5C4  38 C0 00 00 */	li r6, 0x0
/* 801614E8 0015E5C8  38 E0 00 00 */	li r7, 0x0
/* 801614EC 0015E5CC  4B F9 35 49 */	bl SetCallbacks__5xGoalFPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvfPv_iPv
/* 801614F0 0015E5D0  3C 80 4E 47 */	lis r4, 0x4e47
/* 801614F4 0015E5D4  7F E3 FB 78 */	mr r3, r31
/* 801614F8 0015E5D8  38 84 42 60 */	addi r4, r4, 0x4260
/* 801614FC 0015E5DC  38 A0 00 00 */	li r5, 0x0
/* 80161500 0015E5E0  4B FA BD 41 */	bl AddGoal__7xPsycheFiPv
/* 80161504 0015E5E4  3C 80 80 16 */	lis r4, freezeCB__FP5xGoalPvP11en_trantypefPv@ha
/* 80161508 0015E5E8  38 A0 00 00 */	li r5, 0x0
/* 8016150C 0015E5EC  38 84 4F 14 */	addi r4, r4, freezeCB__FP5xGoalPvP11en_trantypefPv@l
/* 80161510 0015E5F0  38 C0 00 00 */	li r6, 0x0
/* 80161514 0015E5F4  38 E0 00 00 */	li r7, 0x0
/* 80161518 0015E5F8  4B F9 35 1D */	bl SetCallbacks__5xGoalFPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvfPv_iPv
/* 8016151C 0015E5FC  3C 80 4E 47 */	lis r4, 0x4e47
/* 80161520 0015E600  7F E3 FB 78 */	mr r3, r31
/* 80161524 0015E604  38 84 42 61 */	addi r4, r4, 0x4261
/* 80161528 0015E608  38 A0 00 00 */	li r5, 0x0
/* 8016152C 0015E60C  4B FA BD 15 */	bl AddGoal__7xPsycheFiPv
/* 80161530 0015E610  3C 80 80 16 */	lis r4, spawnCB__FP5xGoalPvP11en_trantypefPv@ha
/* 80161534 0015E614  38 A0 00 00 */	li r5, 0x0
/* 80161538 0015E618  38 84 4F C8 */	addi r4, r4, spawnCB__FP5xGoalPvP11en_trantypefPv@l
/* 8016153C 0015E61C  38 C0 00 00 */	li r6, 0x0
/* 80161540 0015E620  38 E0 00 00 */	li r7, 0x0
/* 80161544 0015E624  4B F9 34 F1 */	bl SetCallbacks__5xGoalFPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvfPv_iPv
/* 80161548 0015E628  3C 80 4E 47 */	lis r4, 0x4e47
/* 8016154C 0015E62C  7F E3 FB 78 */	mr r3, r31
/* 80161550 0015E630  38 84 42 62 */	addi r4, r4, 0x4262
/* 80161554 0015E634  38 A0 00 00 */	li r5, 0x0
/* 80161558 0015E638  4B FA BC E9 */	bl AddGoal__7xPsycheFiPv
/* 8016155C 0015E63C  3C 80 80 16 */	lis r4, spinCB__FP5xGoalPvP11en_trantypefPv@ha
/* 80161560 0015E640  38 A0 00 00 */	li r5, 0x0
/* 80161564 0015E644  38 84 50 94 */	addi r4, r4, spinCB__FP5xGoalPvP11en_trantypefPv@l
/* 80161568 0015E648  38 C0 00 00 */	li r6, 0x0
/* 8016156C 0015E64C  38 E0 00 00 */	li r7, 0x0
/* 80161570 0015E650  4B F9 34 C5 */	bl SetCallbacks__5xGoalFPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvfPv_iPv
/* 80161574 0015E654  3C 80 4E 47 */	lis r4, 0x4e47
/* 80161578 0015E658  7F E3 FB 78 */	mr r3, r31
/* 8016157C 0015E65C  38 84 42 63 */	addi r4, r4, 0x4263
/* 80161580 0015E660  38 A0 00 00 */	li r5, 0x0
/* 80161584 0015E664  4B FA BC BD */	bl AddGoal__7xPsycheFiPv
/* 80161588 0015E668  3C 80 80 16 */	lis r4, fudgeCB__FP5xGoalPvP11en_trantypefPv@ha
/* 8016158C 0015E66C  38 A0 00 00 */	li r5, 0x0
/* 80161590 0015E670  38 84 53 20 */	addi r4, r4, fudgeCB__FP5xGoalPvP11en_trantypefPv@l
/* 80161594 0015E674  38 C0 00 00 */	li r6, 0x0
/* 80161598 0015E678  38 E0 00 00 */	li r7, 0x0
/* 8016159C 0015E67C  4B F9 34 99 */	bl SetCallbacks__5xGoalFPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvP11en_trantypefPv_iPFP5xGoalPvfPv_iPv
/* 801615A0 0015E680  7F E3 FB 78 */	mr r3, r31
/* 801615A4 0015E684  4B FA BC 65 */	bl BrainEnd__7xPsycheFv
/* 801615A8 0015E688  3C 80 4E 47 */	lis r4, 0x4e47
/* 801615AC 0015E68C  7F E3 FB 78 */	mr r3, r31
/* 801615B0 0015E690  38 84 42 5A */	addi r4, r4, 0x425a
/* 801615B4 0015E694  4B FA 13 C9 */	bl SetSafety__7xPsycheFi
/* 801615B8 0015E698  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801615BC 0015E69C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801615C0 0015E6A0  7C 08 03 A6 */	mtlr r0
/* 801615C4 0015E6A4  38 21 00 10 */	addi r1, r1, 0x10
/* 801615C8 0015E6A8  4E 80 00 20 */	blr
.endfn SelfSetup__12zNPCBPatrickFv

# zNPCBPatrick::Reset()
.fn Reset__12zNPCBPatrickFv, global
/* 801615CC 0015E6AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801615D0 0015E6B0  7C 08 02 A6 */	mflr r0
/* 801615D4 0015E6B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801615D8 0015E6B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801615DC 0015E6BC  7C 7F 1B 78 */	mr r31, r3
/* 801615E0 0015E6C0  4B FF F4 35 */	bl Pat_ResetGlobalStuff__Fv
/* 801615E4 0015E6C4  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 801615E8 0015E6C8  28 03 00 00 */	cmplwi r3, 0x0
/* 801615EC 0015E6CC  41 82 00 34 */	beq .L_80161620
/* 801615F0 0015E6D0  80 63 00 00 */	lwz r3, 0x0(r3)
/* 801615F4 0015E6D4  28 03 00 00 */	cmplwi r3, 0x0
/* 801615F8 0015E6D8  41 82 00 28 */	beq .L_80161620
/* 801615FC 0015E6DC  80 63 00 00 */	lwz r3, 0x0(r3)
/* 80161600 0015E6E0  28 03 00 00 */	cmplwi r3, 0x0
/* 80161604 0015E6E4  41 82 00 1C */	beq .L_80161620
/* 80161608 0015E6E8  80 63 00 00 */	lwz r3, 0x0(r3)
/* 8016160C 0015E6EC  28 03 00 00 */	cmplwi r3, 0x0
/* 80161610 0015E6F0  41 82 00 10 */	beq .L_80161620
/* 80161614 0015E6F4  A0 03 00 44 */	lhz r0, 0x44(r3)
/* 80161618 0015E6F8  54 00 04 3C */	rlwinm r0, r0, 0, 16, 30
/* 8016161C 0015E6FC  B0 03 00 44 */	sth r0, 0x44(r3)
.L_80161620:
/* 80161620 0015E700  38 00 00 01 */	li r0, 0x1
/* 80161624 0015E704  38 60 00 08 */	li r3, 0x8
/* 80161628 0015E708  98 0D 84 A8 */	stb r0, sUseBossCam@sda21(r13)
/* 8016162C 0015E70C  C0 02 AA 10 */	lfs f0, "@1137"@sda21(r2)
/* 80161630 0015E710  D0 0D 97 10 */	stfs f0, sCurrHeight@sda21(r13)
/* 80161634 0015E714  C0 02 AA 14 */	lfs f0, "@1138"@sda21(r2)
/* 80161638 0015E718  D0 0D 97 14 */	stfs f0, sCurrRadius@sda21(r13)
/* 8016163C 0015E71C  C0 02 AA 18 */	lfs f0, "@1139"@sda21(r2)
/* 80161640 0015E720  D0 0D 97 18 */	stfs f0, sCurrPitch@sda21(r13)
/* 80161644 0015E724  C0 02 AA 1C */	lfs f0, "@1140"@sda21(r2)
/* 80161648 0015E728  D0 0D 97 0C */	stfs f0, sCurrYaw@sda21(r13)
/* 8016164C 0015E72C  4B EF 0A B5 */	bl zCameraDisableTracking__F17camera_owner_enum
/* 80161650 0015E730  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 80161654 0015E734  38 00 01 00 */	li r0, 0x100
/* 80161658 0015E738  7F E3 FB 78 */	mr r3, r31
/* 8016165C 0015E73C  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80161660 0015E740  38 84 00 30 */	addi r4, r4, 0x30
/* 80161664 0015E744  90 8D 97 08 */	stw r4, sCamSubTarget@sda21(r13)
/* 80161668 0015E748  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 8016166C 0015E74C  80 9F 02 BC */	lwz r4, 0x2bc(r31)
/* 80161670 0015E750  48 00 29 5D */	bl gotoRound__12zNPCBPatrickFi
/* 80161674 0015E754  38 00 00 01 */	li r0, 0x1
/* 80161678 0015E758  38 A0 00 30 */	li r5, 0x30
/* 8016167C 0015E75C  90 1F 18 FC */	stw r0, 0x18fc(r31)
/* 80161680 0015E760  1C 65 00 54 */	mulli r3, r5, 0x54
/* 80161684 0015E764  38 80 00 00 */	li r4, 0x0
/* 80161688 0015E768  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 8016168C 0015E76C  20 05 00 32 */	subfic r0, r5, 0x32
/* 80161690 0015E770  7C 7F 1A 14 */	add r3, r31, r3
/* 80161694 0015E774  90 9F 03 A4 */	stw r4, 0x3a4(r31)
/* 80161698 0015E778  90 9F 03 F8 */	stw r4, 0x3f8(r31)
/* 8016169C 0015E77C  90 9F 04 4C */	stw r4, 0x44c(r31)
/* 801616A0 0015E780  90 9F 04 A0 */	stw r4, 0x4a0(r31)
/* 801616A4 0015E784  90 9F 04 F4 */	stw r4, 0x4f4(r31)
/* 801616A8 0015E788  90 9F 05 48 */	stw r4, 0x548(r31)
/* 801616AC 0015E78C  90 9F 05 9C */	stw r4, 0x59c(r31)
/* 801616B0 0015E790  90 9F 05 F0 */	stw r4, 0x5f0(r31)
/* 801616B4 0015E794  90 9F 06 44 */	stw r4, 0x644(r31)
/* 801616B8 0015E798  90 9F 06 98 */	stw r4, 0x698(r31)
/* 801616BC 0015E79C  90 9F 06 EC */	stw r4, 0x6ec(r31)
/* 801616C0 0015E7A0  90 9F 07 40 */	stw r4, 0x740(r31)
/* 801616C4 0015E7A4  90 9F 07 94 */	stw r4, 0x794(r31)
/* 801616C8 0015E7A8  90 9F 07 E8 */	stw r4, 0x7e8(r31)
/* 801616CC 0015E7AC  90 9F 08 3C */	stw r4, 0x83c(r31)
/* 801616D0 0015E7B0  90 9F 08 90 */	stw r4, 0x890(r31)
/* 801616D4 0015E7B4  90 9F 08 E4 */	stw r4, 0x8e4(r31)
/* 801616D8 0015E7B8  90 9F 09 38 */	stw r4, 0x938(r31)
/* 801616DC 0015E7BC  90 9F 09 8C */	stw r4, 0x98c(r31)
/* 801616E0 0015E7C0  90 9F 09 E0 */	stw r4, 0x9e0(r31)
/* 801616E4 0015E7C4  90 9F 0A 34 */	stw r4, 0xa34(r31)
/* 801616E8 0015E7C8  90 9F 0A 88 */	stw r4, 0xa88(r31)
/* 801616EC 0015E7CC  90 9F 0A DC */	stw r4, 0xadc(r31)
/* 801616F0 0015E7D0  90 9F 0B 30 */	stw r4, 0xb30(r31)
/* 801616F4 0015E7D4  90 9F 0B 84 */	stw r4, 0xb84(r31)
/* 801616F8 0015E7D8  90 9F 0B D8 */	stw r4, 0xbd8(r31)
/* 801616FC 0015E7DC  90 9F 0C 2C */	stw r4, 0xc2c(r31)
/* 80161700 0015E7E0  90 9F 0C 80 */	stw r4, 0xc80(r31)
/* 80161704 0015E7E4  90 9F 0C D4 */	stw r4, 0xcd4(r31)
/* 80161708 0015E7E8  90 9F 0D 28 */	stw r4, 0xd28(r31)
/* 8016170C 0015E7EC  90 9F 0D 7C */	stw r4, 0xd7c(r31)
/* 80161710 0015E7F0  90 9F 0D D0 */	stw r4, 0xdd0(r31)
/* 80161714 0015E7F4  90 9F 0E 24 */	stw r4, 0xe24(r31)
/* 80161718 0015E7F8  90 9F 0E 78 */	stw r4, 0xe78(r31)
/* 8016171C 0015E7FC  90 9F 0E CC */	stw r4, 0xecc(r31)
/* 80161720 0015E800  90 9F 0F 20 */	stw r4, 0xf20(r31)
/* 80161724 0015E804  90 9F 0F 74 */	stw r4, 0xf74(r31)
/* 80161728 0015E808  90 9F 0F C8 */	stw r4, 0xfc8(r31)
/* 8016172C 0015E80C  90 9F 10 1C */	stw r4, 0x101c(r31)
/* 80161730 0015E810  90 9F 10 70 */	stw r4, 0x1070(r31)
/* 80161734 0015E814  90 9F 10 C4 */	stw r4, 0x10c4(r31)
/* 80161738 0015E818  90 9F 11 18 */	stw r4, 0x1118(r31)
/* 8016173C 0015E81C  90 9F 11 6C */	stw r4, 0x116c(r31)
/* 80161740 0015E820  90 9F 11 C0 */	stw r4, 0x11c0(r31)
/* 80161744 0015E824  90 9F 12 14 */	stw r4, 0x1214(r31)
/* 80161748 0015E828  90 9F 12 68 */	stw r4, 0x1268(r31)
/* 8016174C 0015E82C  90 9F 12 BC */	stw r4, 0x12bc(r31)
/* 80161750 0015E830  90 9F 13 10 */	stw r4, 0x1310(r31)
/* 80161754 0015E834  7C 09 03 A6 */	mtctr r0
/* 80161758 0015E838  2C 05 00 32 */	cmpwi r5, 0x32
/* 8016175C 0015E83C  40 80 00 10 */	bge .L_8016176C
.L_80161760:
/* 80161760 0015E840  90 83 03 A4 */	stw r4, 0x3a4(r3)
/* 80161764 0015E844  38 63 00 54 */	addi r3, r3, 0x54
/* 80161768 0015E848  42 00 FF F8 */	bdnz .L_80161760
.L_8016176C:
/* 8016176C 0015E84C  38 60 00 00 */	li r3, 0x0
/* 80161770 0015E850  38 00 00 04 */	li r0, 0x4
/* 80161774 0015E854  90 7F 13 BC */	stw r3, 0x13bc(r31)
/* 80161778 0015E858  7F E3 FB 78 */	mr r3, r31
/* 8016177C 0015E85C  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80161780 0015E860  D0 1F 13 C0 */	stfs f0, 0x13c0(r31)
/* 80161784 0015E864  7C 09 03 A6 */	mtctr r0
.L_80161788:
/* 80161788 0015E868  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 8016178C 0015E86C  38 80 00 00 */	li r4, 0x0
/* 80161790 0015E870  D0 03 15 94 */	stfs f0, 0x1594(r3)
/* 80161794 0015E874  90 83 15 A0 */	stw r4, 0x15a0(r3)
/* 80161798 0015E878  C0 22 AA 20 */	lfs f1, "@1141"@sda21(r2)
/* 8016179C 0015E87C  C0 03 15 9C */	lfs f0, 0x159c(r3)
/* 801617A0 0015E880  EC 01 00 2A */	fadds f0, f1, f0
/* 801617A4 0015E884  D0 03 15 98 */	stfs f0, 0x1598(r3)
/* 801617A8 0015E888  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801617AC 0015E88C  D0 03 15 A8 */	stfs f0, 0x15a8(r3)
/* 801617B0 0015E890  90 83 15 B4 */	stw r4, 0x15b4(r3)
/* 801617B4 0015E894  C0 22 AA 20 */	lfs f1, "@1141"@sda21(r2)
/* 801617B8 0015E898  C0 03 15 B0 */	lfs f0, 0x15b0(r3)
/* 801617BC 0015E89C  EC 01 00 2A */	fadds f0, f1, f0
/* 801617C0 0015E8A0  D0 03 15 AC */	stfs f0, 0x15ac(r3)
/* 801617C4 0015E8A4  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801617C8 0015E8A8  D0 03 15 BC */	stfs f0, 0x15bc(r3)
/* 801617CC 0015E8AC  90 83 15 C8 */	stw r4, 0x15c8(r3)
/* 801617D0 0015E8B0  C0 22 AA 20 */	lfs f1, "@1141"@sda21(r2)
/* 801617D4 0015E8B4  C0 03 15 C4 */	lfs f0, 0x15c4(r3)
/* 801617D8 0015E8B8  EC 01 00 2A */	fadds f0, f1, f0
/* 801617DC 0015E8BC  D0 03 15 C0 */	stfs f0, 0x15c0(r3)
/* 801617E0 0015E8C0  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801617E4 0015E8C4  D0 03 15 D0 */	stfs f0, 0x15d0(r3)
/* 801617E8 0015E8C8  90 83 15 DC */	stw r4, 0x15dc(r3)
/* 801617EC 0015E8CC  C0 22 AA 20 */	lfs f1, "@1141"@sda21(r2)
/* 801617F0 0015E8D0  C0 03 15 D8 */	lfs f0, 0x15d8(r3)
/* 801617F4 0015E8D4  EC 01 00 2A */	fadds f0, f1, f0
/* 801617F8 0015E8D8  D0 03 15 D4 */	stfs f0, 0x15d4(r3)
/* 801617FC 0015E8DC  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80161800 0015E8E0  D0 03 15 E4 */	stfs f0, 0x15e4(r3)
/* 80161804 0015E8E4  90 83 15 F0 */	stw r4, 0x15f0(r3)
/* 80161808 0015E8E8  C0 22 AA 20 */	lfs f1, "@1141"@sda21(r2)
/* 8016180C 0015E8EC  C0 03 15 EC */	lfs f0, 0x15ec(r3)
/* 80161810 0015E8F0  EC 01 00 2A */	fadds f0, f1, f0
/* 80161814 0015E8F4  D0 03 15 E8 */	stfs f0, 0x15e8(r3)
/* 80161818 0015E8F8  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 8016181C 0015E8FC  D0 03 15 F8 */	stfs f0, 0x15f8(r3)
/* 80161820 0015E900  90 83 16 04 */	stw r4, 0x1604(r3)
/* 80161824 0015E904  C0 22 AA 20 */	lfs f1, "@1141"@sda21(r2)
/* 80161828 0015E908  C0 03 16 00 */	lfs f0, 0x1600(r3)
/* 8016182C 0015E90C  EC 01 00 2A */	fadds f0, f1, f0
/* 80161830 0015E910  D0 03 15 FC */	stfs f0, 0x15fc(r3)
/* 80161834 0015E914  38 63 00 78 */	addi r3, r3, 0x78
/* 80161838 0015E918  42 00 FF 50 */	bdnz .L_80161788
/* 8016183C 0015E91C  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80161840 0015E920  38 00 00 01 */	li r0, 0x1
/* 80161844 0015E924  38 60 04 00 */	li r3, 0x400
/* 80161848 0015E928  D0 1F 17 74 */	stfs f0, 0x1774(r31)
/* 8016184C 0015E92C  90 9F 17 80 */	stw r4, 0x1780(r31)
/* 80161850 0015E930  C0 22 AA 20 */	lfs f1, "@1141"@sda21(r2)
/* 80161854 0015E934  C0 1F 17 7C */	lfs f0, 0x177c(r31)
/* 80161858 0015E938  EC 01 00 2A */	fadds f0, f1, f0
/* 8016185C 0015E93C  D0 1F 17 78 */	stfs f0, 0x1778(r31)
/* 80161860 0015E940  90 1F 13 C8 */	stw r0, 0x13c8(r31)
/* 80161864 0015E944  90 1F 13 CC */	stw r0, 0x13cc(r31)
/* 80161868 0015E948  90 1F 13 D0 */	stw r0, 0x13d0(r31)
/* 8016186C 0015E94C  C0 02 A9 CC */	lfs f0, "@870"@sda21(r2)
/* 80161870 0015E950  D0 1F 15 78 */	stfs f0, 0x1578(r31)
/* 80161874 0015E954  4B F0 4C 8D */	bl zEntPlayerControlOn__F13zControlOwner
/* 80161878 0015E958  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 8016187C 0015E95C  38 00 00 00 */	li r0, 0x0
/* 80161880 0015E960  7F E3 FB 78 */	mr r3, r31
/* 80161884 0015E964  D0 1F 18 DC */	stfs f0, 0x18dc(r31)
/* 80161888 0015E968  90 1F 18 E8 */	stw r0, 0x18e8(r31)
/* 8016188C 0015E96C  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80161890 0015E970  D0 1F 18 EC */	stfs f0, 0x18ec(r31)
/* 80161894 0015E974  90 1F 18 F0 */	stw r0, 0x18f0(r31)
/* 80161898 0015E978  90 1F 18 F4 */	stw r0, 0x18f4(r31)
/* 8016189C 0015E97C  4B F8 E0 09 */	bl Reset__10zNPCCommonFv
/* 801618A0 0015E980  80 7F 02 28 */	lwz r3, 0x228(r31)
/* 801618A4 0015E984  28 03 00 00 */	cmplwi r3, 0x0
/* 801618A8 0015E988  41 82 00 14 */	beq .L_801618BC
/* 801618AC 0015E98C  3C 80 4E 47 */	lis r4, 0x4e47
/* 801618B0 0015E990  38 A0 00 00 */	li r5, 0x0
/* 801618B4 0015E994  38 84 42 5A */	addi r4, r4, 0x425a
/* 801618B8 0015E998  4B FA BE 79 */	bl GoalSet__7xPsycheFii
.L_801618BC:
/* 801618BC 0015E99C  C0 02 AA 24 */	lfs f0, "@1142"@sda21(r2)
/* 801618C0 0015E9A0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801618C4 0015E9A4  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 801618C8 0015E9A8  38 8D 97 1C */	addi r4, r13, minYVel@sda21
/* 801618CC 0015E9AC  D0 0D 97 24 */	stfs f0, minHMul@sda21(r13)
/* 801618D0 0015E9B0  38 63 03 81 */	addi r3, r3, 0x381
/* 801618D4 0015E9B4  38 A0 00 00 */	li r5, 0x0
/* 801618D8 0015E9B8  38 C0 00 00 */	li r6, 0x0
/* 801618DC 0015E9BC  C0 02 A9 F0 */	lfs f0, "@1049"@sda21(r2)
/* 801618E0 0015E9C0  38 E0 00 00 */	li r7, 0x0
/* 801618E4 0015E9C4  D0 0D 97 2C */	stfs f0, minT@sda21(r13)
/* 801618E8 0015E9C8  C0 02 A9 F0 */	lfs f0, "@1049"@sda21(r2)
/* 801618EC 0015E9CC  D0 0D 97 1C */	stfs f0, minYVel@sda21(r13)
/* 801618F0 0015E9D0  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801618F4 0015E9D4  D0 0D 97 28 */	stfs f0, varHMul@sda21(r13)
/* 801618F8 0015E9D8  C0 02 A9 F0 */	lfs f0, "@1049"@sda21(r2)
/* 801618FC 0015E9DC  D0 0D 97 30 */	stfs f0, varT@sda21(r13)
/* 80161900 0015E9E0  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80161904 0015E9E4  D0 0D 97 20 */	stfs f0, varYVel@sda21(r13)
/* 80161908 0015E9E8  C0 22 AA 28 */	lfs f1, "@1143"@sda21(r2)
/* 8016190C 0015E9EC  C0 42 AA 2C */	lfs f2, "@1144"@sda21(r2)
/* 80161910 0015E9F0  4B EC ED 1D */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80161914 0015E9F4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80161918 0015E9F8  C0 22 AA 28 */	lfs f1, "@1143"@sda21(r2)
/* 8016191C 0015E9FC  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 80161920 0015EA00  C0 42 AA 2C */	lfs f2, "@1144"@sda21(r2)
/* 80161924 0015EA04  38 63 03 A0 */	addi r3, r3, 0x3a0
/* 80161928 0015EA08  38 8D 97 20 */	addi r4, r13, varYVel@sda21
/* 8016192C 0015EA0C  38 A0 00 00 */	li r5, 0x0
/* 80161930 0015EA10  38 C0 00 00 */	li r6, 0x0
/* 80161934 0015EA14  38 E0 00 00 */	li r7, 0x0
/* 80161938 0015EA18  4B EC EC F5 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8016193C 0015EA1C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80161940 0015EA20  C0 22 AA 28 */	lfs f1, "@1143"@sda21(r2)
/* 80161944 0015EA24  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 80161948 0015EA28  C0 42 AA 2C */	lfs f2, "@1144"@sda21(r2)
/* 8016194C 0015EA2C  38 63 03 BF */	addi r3, r3, 0x3bf
/* 80161950 0015EA30  38 8D 97 24 */	addi r4, r13, minHMul@sda21
/* 80161954 0015EA34  38 A0 00 00 */	li r5, 0x0
/* 80161958 0015EA38  38 C0 00 00 */	li r6, 0x0
/* 8016195C 0015EA3C  38 E0 00 00 */	li r7, 0x0
/* 80161960 0015EA40  4B EC EC CD */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 80161964 0015EA44  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80161968 0015EA48  C0 22 AA 28 */	lfs f1, "@1143"@sda21(r2)
/* 8016196C 0015EA4C  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 80161970 0015EA50  C0 42 AA 2C */	lfs f2, "@1144"@sda21(r2)
/* 80161974 0015EA54  38 63 03 DE */	addi r3, r3, 0x3de
/* 80161978 0015EA58  38 8D 97 28 */	addi r4, r13, varHMul@sda21
/* 8016197C 0015EA5C  38 A0 00 00 */	li r5, 0x0
/* 80161980 0015EA60  38 C0 00 00 */	li r6, 0x0
/* 80161984 0015EA64  38 E0 00 00 */	li r7, 0x0
/* 80161988 0015EA68  4B EC EC A5 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 8016198C 0015EA6C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80161990 0015EA70  C0 22 AA 28 */	lfs f1, "@1143"@sda21(r2)
/* 80161994 0015EA74  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 80161998 0015EA78  C0 42 AA 2C */	lfs f2, "@1144"@sda21(r2)
/* 8016199C 0015EA7C  38 63 03 FD */	addi r3, r3, 0x3fd
/* 801619A0 0015EA80  38 8D 97 2C */	addi r4, r13, minT@sda21
/* 801619A4 0015EA84  38 A0 00 00 */	li r5, 0x0
/* 801619A8 0015EA88  38 C0 00 00 */	li r6, 0x0
/* 801619AC 0015EA8C  38 E0 00 00 */	li r7, 0x0
/* 801619B0 0015EA90  4B EC EC 7D */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 801619B4 0015EA94  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801619B8 0015EA98  C0 22 AA 28 */	lfs f1, "@1143"@sda21(r2)
/* 801619BC 0015EA9C  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 801619C0 0015EAA0  C0 42 AA 2C */	lfs f2, "@1144"@sda21(r2)
/* 801619C4 0015EAA4  38 63 04 19 */	addi r3, r3, 0x419
/* 801619C8 0015EAA8  38 8D 97 30 */	addi r4, r13, varT@sda21
/* 801619CC 0015EAAC  38 A0 00 00 */	li r5, 0x0
/* 801619D0 0015EAB0  38 C0 00 00 */	li r6, 0x0
/* 801619D4 0015EAB4  38 E0 00 00 */	li r7, 0x0
/* 801619D8 0015EAB8  4B EC EC 55 */	bl xDebugAddTweak__FPCcPfffPC14tweak_callbackPvUi
/* 801619DC 0015EABC  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801619E0 0015EAC0  3C 60 80 27 */	lis r3, newsfish_cb@ha
/* 801619E4 0015EAC4  38 84 08 9C */	addi r4, r4, "@stringBase0"@l
/* 801619E8 0015EAC8  38 C0 00 00 */	li r6, 0x0
/* 801619EC 0015EACC  38 A3 08 4C */	addi r5, r3, newsfish_cb@l
/* 801619F0 0015EAD0  38 E0 00 00 */	li r7, 0x0
/* 801619F4 0015EAD4  38 64 04 35 */	addi r3, r4, 0x435
/* 801619F8 0015EAD8  38 84 04 4F */	addi r4, r4, 0x44f
/* 801619FC 0015EADC  4B F3 58 B5 */	bl xDebugAddTweak__FPCcPCcPC14tweak_callbackPvUi
/* 80161A00 0015EAE0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80161A04 0015EAE4  38 8D 97 34 */	addi r4, r13, sCurrNFSound@sda21
/* 80161A08 0015EAE8  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 80161A0C 0015EAEC  38 A0 00 00 */	li r5, 0x0
/* 80161A10 0015EAF0  38 63 04 55 */	addi r3, r3, 0x455
/* 80161A14 0015EAF4  38 C0 00 24 */	li r6, 0x24
/* 80161A18 0015EAF8  38 E0 00 00 */	li r7, 0x0
/* 80161A1C 0015EAFC  39 00 00 00 */	li r8, 0x0
/* 80161A20 0015EB00  39 20 00 00 */	li r9, 0x0
/* 80161A24 0015EB04  48 00 70 6D */	bl xDebugAddTweak__FPCcPUiUiUiPC14tweak_callbackPvUi
/* 80161A28 0015EB08  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80161A2C 0015EB0C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80161A30 0015EB10  7C 08 03 A6 */	mtlr r0
/* 80161A34 0015EB14  38 21 00 10 */	addi r1, r1, 0x10
/* 80161A38 0015EB18  4E 80 00 20 */	blr
.endfn Reset__12zNPCBPatrickFv

# zNPCBPatrick::Destroy()
.fn Destroy__12zNPCBPatrickFv, global
/* 80161A3C 0015EB1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80161A40 0015EB20  7C 08 02 A6 */	mflr r0
/* 80161A44 0015EB24  90 01 00 14 */	stw r0, 0x14(r1)
/* 80161A48 0015EB28  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80161A4C 0015EB2C  7C 7F 1B 78 */	mr r31, r3
/* 80161A50 0015EB30  80 63 17 C0 */	lwz r3, 0x17c0(r3)
/* 80161A54 0015EB34  28 03 00 00 */	cmplwi r3, 0x0
/* 80161A58 0015EB38  41 82 00 10 */	beq .L_80161A68
/* 80161A5C 0015EB3C  4B ED 29 1D */	bl xModelInstanceFree__FP14xModelInstance
/* 80161A60 0015EB40  38 00 00 00 */	li r0, 0x0
/* 80161A64 0015EB44  90 1F 17 C0 */	stw r0, 0x17c0(r31)
.L_80161A68:
/* 80161A68 0015EB48  80 7F 17 C4 */	lwz r3, 0x17c4(r31)
/* 80161A6C 0015EB4C  28 03 00 00 */	cmplwi r3, 0x0
/* 80161A70 0015EB50  41 82 00 10 */	beq .L_80161A80
/* 80161A74 0015EB54  4B ED 29 05 */	bl xModelInstanceFree__FP14xModelInstance
/* 80161A78 0015EB58  38 00 00 00 */	li r0, 0x0
/* 80161A7C 0015EB5C  90 1F 17 C4 */	stw r0, 0x17c4(r31)
.L_80161A80:
/* 80161A80 0015EB60  7F E3 FB 78 */	mr r3, r31
/* 80161A84 0015EB64  4B F8 DF 8D */	bl Destroy__10zNPCCommonFv
/* 80161A88 0015EB68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80161A8C 0015EB6C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80161A90 0015EB70  7C 08 03 A6 */	mtlr r0
/* 80161A94 0015EB74  38 21 00 10 */	addi r1, r1, 0x10
/* 80161A98 0015EB78  4E 80 00 20 */	blr
.endfn Destroy__12zNPCBPatrickFv

# zNPCBPatrick::AnimPick(int, en_NPC_GOAL_SPOT, xGoal*)
.fn AnimPick__12zNPCBPatrickFi16en_NPC_GOAL_SPOTP5xGoal, global
/* 80161A9C 0015EB7C  3C A4 B1 B9 */	addis r5, r4, 0xb1b9
/* 80161AA0 0015EB80  38 E0 FF FF */	li r7, -0x1
/* 80161AA4 0015EB84  38 A5 BD A6 */	addi r5, r5, -0x425a
/* 80161AA8 0015EB88  38 60 00 00 */	li r3, 0x0
/* 80161AAC 0015EB8C  28 05 00 09 */	cmplwi r5, 0x9
/* 80161AB0 0015EB90  41 81 01 58 */	bgt .L_80161C08
/* 80161AB4 0015EB94  3C 80 80 2A */	lis r4, "@1220"@ha
/* 80161AB8 0015EB98  54 A5 10 3A */	slwi r5, r5, 2
/* 80161ABC 0015EB9C  38 84 AC 08 */	addi r4, r4, "@1220"@l
/* 80161AC0 0015EBA0  7C 04 28 2E */	lwzx r0, r4, r5
/* 80161AC4 0015EBA4  7C 09 03 A6 */	mtctr r0
/* 80161AC8 0015EBA8  4E 80 04 20 */	bctr
.L_80161ACC:
/* 80161ACC 0015EBAC  38 E0 00 01 */	li r7, 0x1
/* 80161AD0 0015EBB0  48 00 01 3C */	b .L_80161C0C
.L_80161AD4:
/* 80161AD4 0015EBB4  38 E0 00 03 */	li r7, 0x3
/* 80161AD8 0015EBB8  48 00 01 34 */	b .L_80161C0C
.L_80161ADC:
/* 80161ADC 0015EBBC  38 E0 00 07 */	li r7, 0x7
/* 80161AE0 0015EBC0  48 00 01 2C */	b .L_80161C0C
.L_80161AE4:
/* 80161AE4 0015EBC4  80 06 00 50 */	lwz r0, 0x50(r6)
/* 80161AE8 0015EBC8  28 00 00 00 */	cmplwi r0, 0x0
/* 80161AEC 0015EBCC  40 82 00 0C */	bne .L_80161AF8
/* 80161AF0 0015EBD0  38 E0 00 20 */	li r7, 0x20
/* 80161AF4 0015EBD4  48 00 01 18 */	b .L_80161C0C
.L_80161AF8:
/* 80161AF8 0015EBD8  28 00 00 01 */	cmplwi r0, 0x1
/* 80161AFC 0015EBDC  40 82 00 0C */	bne .L_80161B08
/* 80161B00 0015EBE0  38 E0 00 21 */	li r7, 0x21
/* 80161B04 0015EBE4  48 00 01 08 */	b .L_80161C0C
.L_80161B08:
/* 80161B08 0015EBE8  28 00 00 02 */	cmplwi r0, 0x2
/* 80161B0C 0015EBEC  40 82 01 00 */	bne .L_80161C0C
/* 80161B10 0015EBF0  38 E0 00 22 */	li r7, 0x22
/* 80161B14 0015EBF4  48 00 00 F8 */	b .L_80161C0C
.L_80161B18:
/* 80161B18 0015EBF8  38 E0 00 04 */	li r7, 0x4
/* 80161B1C 0015EBFC  48 00 00 F0 */	b .L_80161C0C
.L_80161B20:
/* 80161B20 0015EC00  38 E0 00 06 */	li r7, 0x6
/* 80161B24 0015EC04  48 00 00 E8 */	b .L_80161C0C
.L_80161B28:
/* 80161B28 0015EC08  38 E0 00 1C */	li r7, 0x1c
/* 80161B2C 0015EC0C  48 00 00 E0 */	b .L_80161C0C
.L_80161B30:
/* 80161B30 0015EC10  38 E0 00 23 */	li r7, 0x23
/* 80161B34 0015EC14  48 00 00 D8 */	b .L_80161C0C
.L_80161B38:
/* 80161B38 0015EC18  80 06 00 50 */	lwz r0, 0x50(r6)
/* 80161B3C 0015EC1C  28 00 00 00 */	cmplwi r0, 0x0
/* 80161B40 0015EC20  40 82 00 0C */	bne .L_80161B4C
/* 80161B44 0015EC24  38 E0 00 24 */	li r7, 0x24
/* 80161B48 0015EC28  48 00 00 C4 */	b .L_80161C0C
.L_80161B4C:
/* 80161B4C 0015EC2C  28 00 00 01 */	cmplwi r0, 0x1
/* 80161B50 0015EC30  40 82 00 0C */	bne .L_80161B5C
/* 80161B54 0015EC34  38 E0 00 25 */	li r7, 0x25
/* 80161B58 0015EC38  48 00 00 B4 */	b .L_80161C0C
.L_80161B5C:
/* 80161B5C 0015EC3C  28 00 00 02 */	cmplwi r0, 0x2
/* 80161B60 0015EC40  40 82 00 0C */	bne .L_80161B6C
/* 80161B64 0015EC44  38 E0 00 26 */	li r7, 0x26
/* 80161B68 0015EC48  48 00 00 A4 */	b .L_80161C0C
.L_80161B6C:
/* 80161B6C 0015EC4C  28 00 00 03 */	cmplwi r0, 0x3
/* 80161B70 0015EC50  40 82 00 0C */	bne .L_80161B7C
/* 80161B74 0015EC54  38 E0 00 0A */	li r7, 0xa
/* 80161B78 0015EC58  48 00 00 94 */	b .L_80161C0C
.L_80161B7C:
/* 80161B7C 0015EC5C  28 00 00 04 */	cmplwi r0, 0x4
/* 80161B80 0015EC60  40 82 00 0C */	bne .L_80161B8C
/* 80161B84 0015EC64  38 E0 00 27 */	li r7, 0x27
/* 80161B88 0015EC68  48 00 00 84 */	b .L_80161C0C
.L_80161B8C:
/* 80161B8C 0015EC6C  28 00 00 05 */	cmplwi r0, 0x5
/* 80161B90 0015EC70  40 82 00 0C */	bne .L_80161B9C
/* 80161B94 0015EC74  38 E0 00 28 */	li r7, 0x28
/* 80161B98 0015EC78  48 00 00 74 */	b .L_80161C0C
.L_80161B9C:
/* 80161B9C 0015EC7C  28 00 00 06 */	cmplwi r0, 0x6
/* 80161BA0 0015EC80  40 82 00 6C */	bne .L_80161C0C
/* 80161BA4 0015EC84  38 E0 00 09 */	li r7, 0x9
/* 80161BA8 0015EC88  48 00 00 64 */	b .L_80161C0C
.L_80161BAC:
/* 80161BAC 0015EC8C  80 06 00 50 */	lwz r0, 0x50(r6)
/* 80161BB0 0015EC90  28 00 00 00 */	cmplwi r0, 0x0
/* 80161BB4 0015EC94  41 82 00 14 */	beq .L_80161BC8
/* 80161BB8 0015EC98  28 00 00 01 */	cmplwi r0, 0x1
/* 80161BBC 0015EC9C  41 82 00 0C */	beq .L_80161BC8
/* 80161BC0 0015ECA0  28 00 00 02 */	cmplwi r0, 0x2
/* 80161BC4 0015ECA4  40 82 00 0C */	bne .L_80161BD0
.L_80161BC8:
/* 80161BC8 0015ECA8  38 E0 00 04 */	li r7, 0x4
/* 80161BCC 0015ECAC  48 00 00 40 */	b .L_80161C0C
.L_80161BD0:
/* 80161BD0 0015ECB0  28 00 00 03 */	cmplwi r0, 0x3
/* 80161BD4 0015ECB4  41 82 00 0C */	beq .L_80161BE0
/* 80161BD8 0015ECB8  28 00 00 04 */	cmplwi r0, 0x4
/* 80161BDC 0015ECBC  40 82 00 0C */	bne .L_80161BE8
.L_80161BE0:
/* 80161BE0 0015ECC0  38 E0 00 1D */	li r7, 0x1d
/* 80161BE4 0015ECC4  48 00 00 28 */	b .L_80161C0C
.L_80161BE8:
/* 80161BE8 0015ECC8  28 00 00 05 */	cmplwi r0, 0x5
/* 80161BEC 0015ECCC  40 82 00 0C */	bne .L_80161BF8
/* 80161BF0 0015ECD0  38 E0 00 1E */	li r7, 0x1e
/* 80161BF4 0015ECD4  48 00 00 18 */	b .L_80161C0C
.L_80161BF8:
/* 80161BF8 0015ECD8  28 00 00 06 */	cmplwi r0, 0x6
/* 80161BFC 0015ECDC  40 82 00 10 */	bne .L_80161C0C
/* 80161C00 0015ECE0  38 E0 00 1F */	li r7, 0x1f
/* 80161C04 0015ECE4  48 00 00 08 */	b .L_80161C0C
.L_80161C08:
/* 80161C08 0015ECE8  38 E0 00 01 */	li r7, 0x1
.L_80161C0C:
/* 80161C0C 0015ECEC  2C 07 FF FF */	cmpwi r7, -0x1
/* 80161C10 0015ECF0  4C 81 00 20 */	blelr
/* 80161C14 0015ECF4  3C 60 80 2A */	lis r3, g_hash_bossanim@ha
/* 80161C18 0015ECF8  54 E0 10 3A */	slwi r0, r7, 2
/* 80161C1C 0015ECFC  38 63 92 68 */	addi r3, r3, g_hash_bossanim@l
/* 80161C20 0015ED00  7C 63 00 2E */	lwzx r3, r3, r0
/* 80161C24 0015ED04  4E 80 00 20 */	blr
.endfn AnimPick__12zNPCBPatrickFi16en_NPC_GOAL_SPOTP5xGoal

# zNPCBPatrick::Process(xScene*, float)
.fn Process__12zNPCBPatrickFP6xScenef, global
/* 80161C28 0015ED08  94 21 FE 80 */	stwu r1, -0x180(r1)
/* 80161C2C 0015ED0C  7C 08 02 A6 */	mflr r0
/* 80161C30 0015ED10  90 01 01 84 */	stw r0, 0x184(r1)
/* 80161C34 0015ED14  DB E1 01 70 */	stfd f31, 0x170(r1)
/* 80161C38 0015ED18  F3 E1 01 78 */	psq_st f31, 0x178(r1), 0, qr0
/* 80161C3C 0015ED1C  DB C1 01 60 */	stfd f30, 0x160(r1)
/* 80161C40 0015ED20  F3 C1 01 68 */	psq_st f30, 0x168(r1), 0, qr0
/* 80161C44 0015ED24  DB A1 01 50 */	stfd f29, 0x150(r1)
/* 80161C48 0015ED28  F3 A1 01 58 */	psq_st f29, 0x158(r1), 0, qr0
/* 80161C4C 0015ED2C  DB 81 01 40 */	stfd f28, 0x140(r1)
/* 80161C50 0015ED30  F3 81 01 48 */	psq_st f28, 0x148(r1), 0, qr0
/* 80161C54 0015ED34  DB 61 01 30 */	stfd f27, 0x130(r1)
/* 80161C58 0015ED38  F3 61 01 38 */	psq_st f27, 0x138(r1), 0, qr0
/* 80161C5C 0015ED3C  DB 41 01 20 */	stfd f26, 0x120(r1)
/* 80161C60 0015ED40  F3 41 01 28 */	psq_st f26, 0x128(r1), 0, qr0
/* 80161C64 0015ED44  BE 61 00 EC */	stmw r19, 0xec(r1)
/* 80161C68 0015ED48  7C 7E 1B 78 */	mr r30, r3
/* 80161C6C 0015ED4C  FF A0 08 90 */	fmr f29, f1
/* 80161C70 0015ED50  80 03 18 FC */	lwz r0, 0x18fc(r3)
/* 80161C74 0015ED54  7C 9F 23 78 */	mr r31, r4
/* 80161C78 0015ED58  3A 80 00 00 */	li r20, 0x0
/* 80161C7C 0015ED5C  2C 00 00 00 */	cmpwi r0, 0x0
/* 80161C80 0015ED60  41 82 00 74 */	beq .L_80161CF4
/* 80161C84 0015ED64  38 60 00 00 */	li r3, 0x0
/* 80161C88 0015ED68  90 7E 18 FC */	stw r3, 0x18fc(r30)
/* 80161C8C 0015ED6C  80 1E 02 BC */	lwz r0, 0x2bc(r30)
/* 80161C90 0015ED70  2C 00 00 02 */	cmpwi r0, 0x2
/* 80161C94 0015ED74  41 82 00 44 */	beq .L_80161CD8
/* 80161C98 0015ED78  40 80 00 10 */	bge .L_80161CA8
/* 80161C9C 0015ED7C  2C 00 00 01 */	cmpwi r0, 0x1
/* 80161CA0 0015ED80  40 80 00 14 */	bge .L_80161CB4
/* 80161CA4 0015ED84  48 00 00 50 */	b .L_80161CF4
.L_80161CA8:
/* 80161CA8 0015ED88  2C 00 00 04 */	cmpwi r0, 0x4
/* 80161CAC 0015ED8C  40 80 00 48 */	bge .L_80161CF4
/* 80161CB0 0015ED90  48 00 00 38 */	b .L_80161CE8
.L_80161CB4:
/* 80161CB4 0015ED94  80 1E 18 F8 */	lwz r0, 0x18f8(r30)
/* 80161CB8 0015ED98  2C 00 00 00 */	cmpwi r0, 0x0
/* 80161CBC 0015ED9C  41 82 00 0C */	beq .L_80161CC8
/* 80161CC0 0015EDA0  90 7E 18 F8 */	stw r3, 0x18f8(r30)
/* 80161CC4 0015EDA4  48 00 00 30 */	b .L_80161CF4
.L_80161CC8:
/* 80161CC8 0015EDA8  80 7E 18 D0 */	lwz r3, 0x18d0(r30)
/* 80161CCC 0015EDAC  38 80 00 BE */	li r4, 0xbe
/* 80161CD0 0015EDB0  4B EB D9 21 */	bl zEntEvent__FP5xBaseUi
/* 80161CD4 0015EDB4  48 00 00 20 */	b .L_80161CF4
.L_80161CD8:
/* 80161CD8 0015EDB8  80 7E 18 D4 */	lwz r3, 0x18d4(r30)
/* 80161CDC 0015EDBC  38 80 00 BE */	li r4, 0xbe
/* 80161CE0 0015EDC0  4B EB D9 11 */	bl zEntEvent__FP5xBaseUi
/* 80161CE4 0015EDC4  48 00 00 10 */	b .L_80161CF4
.L_80161CE8:
/* 80161CE8 0015EDC8  80 7E 18 D8 */	lwz r3, 0x18d8(r30)
/* 80161CEC 0015EDCC  38 80 00 BE */	li r4, 0xbe
/* 80161CF0 0015EDD0  4B EB D9 01 */	bl zEntEvent__FP5xBaseUi
.L_80161CF4:
/* 80161CF4 0015EDD4  3C 60 80 3C */	lis r3, globals@ha
/* 80161CF8 0015EDD8  38 63 05 58 */	addi r3, r3, globals@l
/* 80161CFC 0015EDDC  80 63 1F BC */	lwz r3, 0x1fbc(r3)
/* 80161D00 0015EDE0  28 03 00 00 */	cmplwi r3, 0x0
/* 80161D04 0015EDE4  41 82 00 18 */	beq .L_80161D1C
/* 80161D08 0015EDE8  80 63 00 14 */	lwz r3, 0x14(r3)
/* 80161D0C 0015EDEC  80 03 00 3C */	lwz r0, 0x3c(r3)
/* 80161D10 0015EDF0  28 00 00 00 */	cmplwi r0, 0x0
/* 80161D14 0015EDF4  41 82 00 08 */	beq .L_80161D1C
/* 80161D18 0015EDF8  3A 80 00 01 */	li r20, 0x1
.L_80161D1C:
/* 80161D1C 0015EDFC  2C 14 00 00 */	cmpwi r20, 0x0
/* 80161D20 0015EE00  41 82 00 54 */	beq .L_80161D74
/* 80161D24 0015EE04  80 1E 02 B4 */	lwz r0, 0x2b4(r30)
/* 80161D28 0015EE08  54 00 05 EF */	rlwinm. r0, r0, 0, 23, 23
/* 80161D2C 0015EE0C  41 82 00 38 */	beq .L_80161D64
/* 80161D30 0015EE10  C0 1E 18 DC */	lfs f0, 0x18dc(r30)
/* 80161D34 0015EE14  EC 00 E8 2A */	fadds f0, f0, f29
/* 80161D38 0015EE18  D0 1E 18 DC */	stfs f0, 0x18dc(r30)
/* 80161D3C 0015EE1C  C0 3E 18 DC */	lfs f1, 0x18dc(r30)
/* 80161D40 0015EE20  C0 02 AA 30 */	lfs f0, "@1656"@sda21(r2)
/* 80161D44 0015EE24  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80161D48 0015EE28  4C 41 13 82 */	cror eq, gt, eq
/* 80161D4C 0015EE2C  40 82 00 18 */	bne .L_80161D64
/* 80161D50 0015EE30  7F C3 F3 78 */	mr r3, r30
/* 80161D54 0015EE34  48 00 24 69 */	bl hiddenByCutscene__12zNPCBPatrickFv
/* 80161D58 0015EE38  80 1E 02 B4 */	lwz r0, 0x2b4(r30)
/* 80161D5C 0015EE3C  54 00 06 2C */	rlwinm r0, r0, 0, 24, 22
/* 80161D60 0015EE40  90 1E 02 B4 */	stw r0, 0x2b4(r30)
.L_80161D64:
/* 80161D64 0015EE44  80 1E 02 B4 */	lwz r0, 0x2b4(r30)
/* 80161D68 0015EE48  60 00 00 80 */	ori r0, r0, 0x80
/* 80161D6C 0015EE4C  90 1E 02 B4 */	stw r0, 0x2b4(r30)
/* 80161D70 0015EE50  48 00 00 CC */	b .L_80161E3C
.L_80161D74:
/* 80161D74 0015EE54  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80161D78 0015EE58  D0 1E 18 DC */	stfs f0, 0x18dc(r30)
/* 80161D7C 0015EE5C  80 1E 02 B4 */	lwz r0, 0x2b4(r30)
/* 80161D80 0015EE60  54 00 06 31 */	rlwinm. r0, r0, 0, 24, 24
/* 80161D84 0015EE64  41 82 00 AC */	beq .L_80161E30
/* 80161D88 0015EE68  80 1E 02 BC */	lwz r0, 0x2bc(r30)
/* 80161D8C 0015EE6C  2C 00 00 01 */	cmpwi r0, 0x1
/* 80161D90 0015EE70  40 82 00 30 */	bne .L_80161DC0
/* 80161D94 0015EE74  80 7E 18 E4 */	lwz r3, 0x18e4(r30)
/* 80161D98 0015EE78  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80161D9C 0015EE7C  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80161DA0 0015EE80  38 A0 00 00 */	li r5, 0x0
/* 80161DA4 0015EE84  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80161DA8 0015EE88  38 C0 FF FF */	li r6, -0x1
/* 80161DAC 0015EE8C  80 84 01 04 */	lwz r4, 0x104(r4)
/* 80161DB0 0015EE90  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80161DB4 0015EE94  7D 89 03 A6 */	mtctr r12
/* 80161DB8 0015EE98  4E 80 04 21 */	bctrl
/* 80161DBC 0015EE9C  48 00 00 68 */	b .L_80161E24
.L_80161DC0:
/* 80161DC0 0015EEA0  2C 00 00 02 */	cmpwi r0, 0x2
/* 80161DC4 0015EEA4  40 82 00 30 */	bne .L_80161DF4
/* 80161DC8 0015EEA8  80 7E 18 E4 */	lwz r3, 0x18e4(r30)
/* 80161DCC 0015EEAC  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80161DD0 0015EEB0  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80161DD4 0015EEB4  38 A0 00 00 */	li r5, 0x0
/* 80161DD8 0015EEB8  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80161DDC 0015EEBC  38 C0 FF FF */	li r6, -0x1
/* 80161DE0 0015EEC0  80 84 00 1C */	lwz r4, 0x1c(r4)
/* 80161DE4 0015EEC4  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80161DE8 0015EEC8  7D 89 03 A6 */	mtctr r12
/* 80161DEC 0015EECC  4E 80 04 21 */	bctrl
/* 80161DF0 0015EED0  48 00 00 34 */	b .L_80161E24
.L_80161DF4:
/* 80161DF4 0015EED4  2C 00 00 03 */	cmpwi r0, 0x3
/* 80161DF8 0015EED8  40 82 00 2C */	bne .L_80161E24
/* 80161DFC 0015EEDC  80 7E 18 E4 */	lwz r3, 0x18e4(r30)
/* 80161E00 0015EEE0  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80161E04 0015EEE4  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80161E08 0015EEE8  38 A0 00 00 */	li r5, 0x0
/* 80161E0C 0015EEEC  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80161E10 0015EEF0  38 C0 FF FF */	li r6, -0x1
/* 80161E14 0015EEF4  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 80161E18 0015EEF8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80161E1C 0015EEFC  7D 89 03 A6 */	mtctr r12
/* 80161E20 0015EF00  4E 80 04 21 */	bctrl
.L_80161E24:
/* 80161E24 0015EF04  80 1E 02 B4 */	lwz r0, 0x2b4(r30)
/* 80161E28 0015EF08  60 00 02 00 */	ori r0, r0, 0x200
/* 80161E2C 0015EF0C  90 1E 02 B4 */	stw r0, 0x2b4(r30)
.L_80161E30:
/* 80161E30 0015EF10  80 1E 02 B4 */	lwz r0, 0x2b4(r30)
/* 80161E34 0015EF14  54 00 06 6E */	rlwinm r0, r0, 0, 25, 23
/* 80161E38 0015EF18  90 1E 02 B4 */	stw r0, 0x2b4(r30)
.L_80161E3C:
/* 80161E3C 0015EF1C  80 7E 02 28 */	lwz r3, 0x228(r30)
/* 80161E40 0015EF20  28 03 00 00 */	cmplwi r3, 0x0
/* 80161E44 0015EF24  41 82 00 10 */	beq .L_80161E54
/* 80161E48 0015EF28  FC 20 E8 90 */	fmr f1, f29
/* 80161E4C 0015EF2C  38 80 00 00 */	li r4, 0x0
/* 80161E50 0015EF30  4B FA C2 11 */	bl Timestep__7xPsycheFfPv
.L_80161E54:
/* 80161E54 0015EF34  88 0D 84 A8 */	lbz r0, sUseBossCam@sda21(r13)
/* 80161E58 0015EF38  28 00 00 00 */	cmplwi r0, 0x0
/* 80161E5C 0015EF3C  41 82 00 14 */	beq .L_80161E70
/* 80161E60 0015EF40  FC 20 E8 90 */	fmr f1, f29
/* 80161E64 0015EF44  7F C3 F3 78 */	mr r3, r30
/* 80161E68 0015EF48  4B FF E9 F5 */	bl UpdatePatrickBossCam__FP12zNPCBPatrickf
/* 80161E6C 0015EF4C  48 00 00 0C */	b .L_80161E78
.L_80161E70:
/* 80161E70 0015EF50  38 60 00 08 */	li r3, 0x8
/* 80161E74 0015EF54  4B EF 02 9D */	bl zCameraEnableTracking__F17camera_owner_enum
.L_80161E78:
/* 80161E78 0015EF58  80 7E 15 84 */	lwz r3, 0x1584(r30)
/* 80161E7C 0015EF5C  C0 42 AA 34 */	lfs f2, "@1657"@sda21(r2)
/* 80161E80 0015EF60  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80161E84 0015EF64  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80161E88 0015EF68  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80161E8C 0015EF6C  C0 23 00 A4 */	lfs f1, 0xa4(r3)
/* 80161E90 0015EF70  FC 20 08 50 */	fneg f1, f1
/* 80161E94 0015EF74  EC 22 00 72 */	fmuls f1, f2, f1
/* 80161E98 0015EF78  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80161E9C 0015EF7C  40 80 00 08 */	bge .L_80161EA4
/* 80161EA0 0015EF80  FC 20 00 90 */	fmr f1, f0
.L_80161EA4:
/* 80161EA4 0015EF84  80 9E 15 88 */	lwz r4, 0x1588(r30)
/* 80161EA8 0015EF88  3C 60 80 3C */	lis r3, globals@ha
/* 80161EAC 0015EF8C  3B 83 05 58 */	addi r28, r3, globals@l
/* 80161EB0 0015EF90  80 64 00 18 */	lwz r3, 0x18(r4)
/* 80161EB4 0015EF94  D0 23 00 0C */	stfs f1, 0xc(r3)
/* 80161EB8 0015EF98  80 1C 18 90 */	lwz r0, 0x1890(r28)
/* 80161EBC 0015EF9C  28 00 00 00 */	cmplwi r0, 0x0
/* 80161EC0 0015EFA0  41 82 02 74 */	beq .L_80162134
/* 80161EC4 0015EFA4  80 1E 02 C8 */	lwz r0, 0x2c8(r30)
/* 80161EC8 0015EFA8  2C 00 00 00 */	cmpwi r0, 0x0
/* 80161ECC 0015EFAC  41 82 00 CC */	beq .L_80161F98
/* 80161ED0 0015EFB0  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80161ED4 0015EFB4  38 80 00 00 */	li r4, 0x0
/* 80161ED8 0015EFB8  D0 1E 17 BC */	stfs f0, 0x17bc(r30)
/* 80161EDC 0015EFBC  80 7C 18 90 */	lwz r3, 0x1890(r28)
/* 80161EE0 0015EFC0  80 1E 17 94 */	lwz r0, 0x1794(r30)
/* 80161EE4 0015EFC4  7C 03 00 40 */	cmplw r3, r0
/* 80161EE8 0015EFC8  40 82 00 0C */	bne .L_80161EF4
/* 80161EEC 0015EFCC  90 9E 17 B4 */	stw r4, 0x17b4(r30)
/* 80161EF0 0015EFD0  48 00 00 A8 */	b .L_80161F98
.L_80161EF4:
/* 80161EF4 0015EFD4  80 1E 17 98 */	lwz r0, 0x1798(r30)
/* 80161EF8 0015EFD8  38 80 00 01 */	li r4, 0x1
/* 80161EFC 0015EFDC  7C 03 00 40 */	cmplw r3, r0
/* 80161F00 0015EFE0  40 82 00 0C */	bne .L_80161F0C
/* 80161F04 0015EFE4  90 9E 17 B4 */	stw r4, 0x17b4(r30)
/* 80161F08 0015EFE8  48 00 00 90 */	b .L_80161F98
.L_80161F0C:
/* 80161F0C 0015EFEC  80 1E 17 9C */	lwz r0, 0x179c(r30)
/* 80161F10 0015EFF0  38 80 00 02 */	li r4, 0x2
/* 80161F14 0015EFF4  7C 03 00 40 */	cmplw r3, r0
/* 80161F18 0015EFF8  40 82 00 0C */	bne .L_80161F24
/* 80161F1C 0015EFFC  90 9E 17 B4 */	stw r4, 0x17b4(r30)
/* 80161F20 0015F000  48 00 00 78 */	b .L_80161F98
.L_80161F24:
/* 80161F24 0015F004  80 1E 17 A0 */	lwz r0, 0x17a0(r30)
/* 80161F28 0015F008  38 80 00 03 */	li r4, 0x3
/* 80161F2C 0015F00C  7C 03 00 40 */	cmplw r3, r0
/* 80161F30 0015F010  40 82 00 0C */	bne .L_80161F3C
/* 80161F34 0015F014  90 9E 17 B4 */	stw r4, 0x17b4(r30)
/* 80161F38 0015F018  48 00 00 60 */	b .L_80161F98
.L_80161F3C:
/* 80161F3C 0015F01C  80 1E 17 A4 */	lwz r0, 0x17a4(r30)
/* 80161F40 0015F020  38 80 00 04 */	li r4, 0x4
/* 80161F44 0015F024  7C 03 00 40 */	cmplw r3, r0
/* 80161F48 0015F028  40 82 00 0C */	bne .L_80161F54
/* 80161F4C 0015F02C  90 9E 17 B4 */	stw r4, 0x17b4(r30)
/* 80161F50 0015F030  48 00 00 48 */	b .L_80161F98
.L_80161F54:
/* 80161F54 0015F034  80 1E 17 A8 */	lwz r0, 0x17a8(r30)
/* 80161F58 0015F038  38 80 00 05 */	li r4, 0x5
/* 80161F5C 0015F03C  7C 03 00 40 */	cmplw r3, r0
/* 80161F60 0015F040  40 82 00 0C */	bne .L_80161F6C
/* 80161F64 0015F044  90 9E 17 B4 */	stw r4, 0x17b4(r30)
/* 80161F68 0015F048  48 00 00 30 */	b .L_80161F98
.L_80161F6C:
/* 80161F6C 0015F04C  80 1E 17 AC */	lwz r0, 0x17ac(r30)
/* 80161F70 0015F050  38 80 00 06 */	li r4, 0x6
/* 80161F74 0015F054  7C 03 00 40 */	cmplw r3, r0
/* 80161F78 0015F058  40 82 00 0C */	bne .L_80161F84
/* 80161F7C 0015F05C  90 9E 17 B4 */	stw r4, 0x17b4(r30)
/* 80161F80 0015F060  48 00 00 18 */	b .L_80161F98
.L_80161F84:
/* 80161F84 0015F064  80 1E 17 B0 */	lwz r0, 0x17b0(r30)
/* 80161F88 0015F068  38 80 00 07 */	li r4, 0x7
/* 80161F8C 0015F06C  7C 03 00 40 */	cmplw r3, r0
/* 80161F90 0015F070  40 82 00 08 */	bne .L_80161F98
/* 80161F94 0015F074  90 9E 17 B4 */	stw r4, 0x17b4(r30)
.L_80161F98:
/* 80161F98 0015F078  C0 3E 17 BC */	lfs f1, 0x17bc(r30)
/* 80161F9C 0015F07C  38 80 00 00 */	li r4, 0x0
/* 80161FA0 0015F080  C0 02 A9 E4 */	lfs f0, "@1046"@sda21(r2)
/* 80161FA4 0015F084  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80161FA8 0015F088  4C 40 13 82 */	cror eq, lt, eq
/* 80161FAC 0015F08C  40 82 00 08 */	bne .L_80161FB4
/* 80161FB0 0015F090  38 80 00 01 */	li r4, 0x1
.L_80161FB4:
/* 80161FB4 0015F094  C0 1E 17 BC */	lfs f0, 0x17bc(r30)
/* 80161FB8 0015F098  38 00 00 00 */	li r0, 0x0
/* 80161FBC 0015F09C  EC 00 E8 2A */	fadds f0, f0, f29
/* 80161FC0 0015F0A0  D0 1E 17 BC */	stfs f0, 0x17bc(r30)
/* 80161FC4 0015F0A4  90 1E 02 C8 */	stw r0, 0x2c8(r30)
/* 80161FC8 0015F0A8  C0 1E 17 BC */	lfs f0, 0x17bc(r30)
/* 80161FCC 0015F0AC  C0 22 A9 E4 */	lfs f1, "@1046"@sda21(r2)
/* 80161FD0 0015F0B0  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80161FD4 0015F0B4  40 81 01 70 */	ble .L_80162144
/* 80161FD8 0015F0B8  80 1E 17 B4 */	lwz r0, 0x17b4(r30)
/* 80161FDC 0015F0BC  C0 1E 17 B8 */	lfs f0, 0x17b8(r30)
/* 80161FE0 0015F0C0  54 00 10 3A */	slwi r0, r0, 2
/* 80161FE4 0015F0C4  7C 7E 02 14 */	add r3, r30, r0
/* 80161FE8 0015F0C8  EC 40 08 28 */	fsubs f2, f0, f1
/* 80161FEC 0015F0CC  80 63 17 94 */	lwz r3, 0x1794(r3)
/* 80161FF0 0015F0D0  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80161FF4 0015F0D4  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80161FF8 0015F0D8  C0 23 00 34 */	lfs f1, 0x34(r3)
/* 80161FFC 0015F0DC  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80162000 0015F0E0  40 81 00 20 */	ble .L_80162020
/* 80162004 0015F0E4  C0 02 A9 F8 */	lfs f0, "@1051"@sda21(r2)
/* 80162008 0015F0E8  EC 00 0F 7C */	fnmsubs f0, f0, f29, f1
/* 8016200C 0015F0EC  D0 03 00 34 */	stfs f0, 0x34(r3)
/* 80162010 0015F0F0  C0 03 00 34 */	lfs f0, 0x34(r3)
/* 80162014 0015F0F4  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80162018 0015F0F8  40 80 00 08 */	bge .L_80162020
/* 8016201C 0015F0FC  D0 43 00 34 */	stfs f2, 0x34(r3)
.L_80162020:
/* 80162020 0015F100  2C 04 00 00 */	cmpwi r4, 0x0
/* 80162024 0015F104  41 82 01 20 */	beq .L_80162144
/* 80162028 0015F108  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016202C 0015F10C  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 80162030 0015F110  38 63 04 76 */	addi r3, r3, 0x476
/* 80162034 0015F114  4B EE A1 E1 */	bl xStrHash__FPCc
/* 80162038 0015F118  80 1E 17 B4 */	lwz r0, 0x17b4(r30)
/* 8016203C 0015F11C  38 80 00 00 */	li r4, 0x0
/* 80162040 0015F120  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80162044 0015F124  38 A0 00 00 */	li r5, 0x0
/* 80162048 0015F128  54 00 10 3A */	slwi r0, r0, 2
/* 8016204C 0015F12C  C0 22 AA 38 */	lfs f1, "@1658"@sda21(r2)
/* 80162050 0015F130  7C DE 02 14 */	add r6, r30, r0
/* 80162054 0015F134  FC A0 10 90 */	fmr f5, f2
/* 80162058 0015F138  80 C6 17 94 */	lwz r6, 0x1794(r6)
/* 8016205C 0015F13C  38 E0 00 00 */	li r7, 0x0
/* 80162060 0015F140  C0 62 A9 D8 */	lfs f3, "@891"@sda21(r2)
/* 80162064 0015F144  80 C6 00 24 */	lwz r6, 0x24(r6)
/* 80162068 0015F148  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 8016206C 0015F14C  80 C6 00 4C */	lwz r6, 0x4c(r6)
/* 80162070 0015F150  38 C6 00 30 */	addi r6, r6, 0x30
/* 80162074 0015F154  4B EE 6A 21 */	bl xSndPlay3D__FUiffUiUiPC5xVec3ff14sound_categoryf
/* 80162078 0015F158  38 00 00 08 */	li r0, 0x8
/* 8016207C 0015F15C  7F C3 F3 78 */	mr r3, r30
/* 80162080 0015F160  80 9C 18 90 */	lwz r4, 0x1890(r28)
/* 80162084 0015F164  38 A0 00 00 */	li r5, 0x0
/* 80162088 0015F168  7C 09 03 A6 */	mtctr r0
.L_8016208C:
/* 8016208C 0015F16C  80 03 17 94 */	lwz r0, 0x1794(r3)
/* 80162090 0015F170  7C 04 00 40 */	cmplw r4, r0
/* 80162094 0015F174  40 82 00 34 */	bne .L_801620C8
/* 80162098 0015F178  1C 05 00 3C */	mulli r0, r5, 0x3c
/* 8016209C 0015F17C  7C 7E 02 14 */	add r3, r30, r0
/* 801620A0 0015F180  80 03 15 A0 */	lwz r0, 0x15a0(r3)
/* 801620A4 0015F184  60 00 00 01 */	ori r0, r0, 0x1
/* 801620A8 0015F188  90 03 15 A0 */	stw r0, 0x15a0(r3)
/* 801620AC 0015F18C  80 03 15 B4 */	lwz r0, 0x15b4(r3)
/* 801620B0 0015F190  60 00 00 01 */	ori r0, r0, 0x1
/* 801620B4 0015F194  90 03 15 B4 */	stw r0, 0x15b4(r3)
/* 801620B8 0015F198  80 03 15 C8 */	lwz r0, 0x15c8(r3)
/* 801620BC 0015F19C  60 00 00 01 */	ori r0, r0, 0x1
/* 801620C0 0015F1A0  90 03 15 C8 */	stw r0, 0x15c8(r3)
/* 801620C4 0015F1A4  48 00 00 10 */	b .L_801620D4
.L_801620C8:
/* 801620C8 0015F1A8  38 63 00 04 */	addi r3, r3, 0x4
/* 801620CC 0015F1AC  38 A5 00 01 */	addi r5, r5, 0x1
/* 801620D0 0015F1B0  42 00 FF BC */	bdnz .L_8016208C
.L_801620D4:
/* 801620D4 0015F1B4  80 1E 02 B4 */	lwz r0, 0x2b4(r30)
/* 801620D8 0015F1B8  54 00 06 73 */	rlwinm. r0, r0, 0, 25, 25
/* 801620DC 0015F1BC  41 82 00 68 */	beq .L_80162144
/* 801620E0 0015F1C0  80 1E 17 80 */	lwz r0, 0x1780(r30)
/* 801620E4 0015F1C4  60 00 00 01 */	ori r0, r0, 0x1
/* 801620E8 0015F1C8  90 1E 17 80 */	stw r0, 0x1780(r30)
/* 801620EC 0015F1CC  80 9E 17 70 */	lwz r4, 0x1770(r30)
/* 801620F0 0015F1D0  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 801620F4 0015F1D4  80 84 00 24 */	lwz r4, 0x24(r4)
/* 801620F8 0015F1D8  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 801620FC 0015F1DC  80 A4 00 4C */	lwz r5, 0x4c(r4)
/* 80162100 0015F1E0  38 83 00 30 */	addi r4, r3, 0x30
/* 80162104 0015F1E4  38 65 00 30 */	addi r3, r5, 0x30
/* 80162108 0015F1E8  4B EE C3 D5 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 8016210C 0015F1EC  80 9E 17 70 */	lwz r4, 0x1770(r30)
/* 80162110 0015F1F0  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 80162114 0015F1F4  80 84 00 24 */	lwz r4, 0x24(r4)
/* 80162118 0015F1F8  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8016211C 0015F1FC  80 A4 00 4C */	lwz r5, 0x4c(r4)
/* 80162120 0015F200  C0 22 AA 40 */	lfs f1, "@1660"@sda21(r2)
/* 80162124 0015F204  38 83 00 20 */	addi r4, r3, 0x20
/* 80162128 0015F208  38 65 00 30 */	addi r3, r5, 0x30
/* 8016212C 0015F20C  4B EB 2F 2D */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 80162130 0015F210  48 00 00 14 */	b .L_80162144
.L_80162134:
/* 80162134 0015F214  38 60 00 01 */	li r3, 0x1
/* 80162138 0015F218  38 00 FF FF */	li r0, -0x1
/* 8016213C 0015F21C  90 7E 02 C8 */	stw r3, 0x2c8(r30)
/* 80162140 0015F220  90 1E 17 B4 */	stw r0, 0x17b4(r30)
.L_80162144:
/* 80162144 0015F224  C0 02 A9 F8 */	lfs f0, "@1051"@sda21(r2)
/* 80162148 0015F228  38 00 00 04 */	li r0, 0x4
/* 8016214C 0015F22C  7F C4 F3 78 */	mr r4, r30
/* 80162150 0015F230  38 A0 00 00 */	li r5, 0x0
/* 80162154 0015F234  EC 40 07 72 */	fmuls f2, f0, f29
/* 80162158 0015F238  7C 09 03 A6 */	mtctr r0
.L_8016215C:
/* 8016215C 0015F23C  80 1E 17 B4 */	lwz r0, 0x17b4(r30)
/* 80162160 0015F240  7C 05 00 00 */	cmpw r5, r0
/* 80162164 0015F244  41 82 00 3C */	beq .L_801621A0
/* 80162168 0015F248  80 64 17 94 */	lwz r3, 0x1794(r4)
/* 8016216C 0015F24C  C0 1E 17 B8 */	lfs f0, 0x17b8(r30)
/* 80162170 0015F250  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80162174 0015F254  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80162178 0015F258  C0 23 00 34 */	lfs f1, 0x34(r3)
/* 8016217C 0015F25C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80162180 0015F260  40 80 00 20 */	bge .L_801621A0
/* 80162184 0015F264  EC 01 10 2A */	fadds f0, f1, f2
/* 80162188 0015F268  D0 03 00 34 */	stfs f0, 0x34(r3)
/* 8016218C 0015F26C  C0 03 00 34 */	lfs f0, 0x34(r3)
/* 80162190 0015F270  C0 3E 17 B8 */	lfs f1, 0x17b8(r30)
/* 80162194 0015F274  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80162198 0015F278  40 81 00 08 */	ble .L_801621A0
/* 8016219C 0015F27C  D0 23 00 34 */	stfs f1, 0x34(r3)
.L_801621A0:
/* 801621A0 0015F280  80 1E 17 B4 */	lwz r0, 0x17b4(r30)
/* 801621A4 0015F284  38 A5 00 01 */	addi r5, r5, 0x1
/* 801621A8 0015F288  7C 05 00 00 */	cmpw r5, r0
/* 801621AC 0015F28C  41 82 00 3C */	beq .L_801621E8
/* 801621B0 0015F290  80 64 17 98 */	lwz r3, 0x1798(r4)
/* 801621B4 0015F294  C0 1E 17 B8 */	lfs f0, 0x17b8(r30)
/* 801621B8 0015F298  80 63 00 24 */	lwz r3, 0x24(r3)
/* 801621BC 0015F29C  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 801621C0 0015F2A0  C0 23 00 34 */	lfs f1, 0x34(r3)
/* 801621C4 0015F2A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801621C8 0015F2A8  40 80 00 20 */	bge .L_801621E8
/* 801621CC 0015F2AC  EC 01 10 2A */	fadds f0, f1, f2
/* 801621D0 0015F2B0  D0 03 00 34 */	stfs f0, 0x34(r3)
/* 801621D4 0015F2B4  C0 03 00 34 */	lfs f0, 0x34(r3)
/* 801621D8 0015F2B8  C0 3E 17 B8 */	lfs f1, 0x17b8(r30)
/* 801621DC 0015F2BC  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 801621E0 0015F2C0  40 81 00 08 */	ble .L_801621E8
/* 801621E4 0015F2C4  D0 23 00 34 */	stfs f1, 0x34(r3)
.L_801621E8:
/* 801621E8 0015F2C8  38 84 00 08 */	addi r4, r4, 0x8
/* 801621EC 0015F2CC  38 A5 00 01 */	addi r5, r5, 0x1
/* 801621F0 0015F2D0  42 00 FF 6C */	bdnz .L_8016215C
/* 801621F4 0015F2D4  80 7E 02 C4 */	lwz r3, 0x2c4(r30)
/* 801621F8 0015F2D8  3C 00 43 30 */	lis r0, 0x4330
/* 801621FC 0015F2DC  90 01 00 C8 */	stw r0, 0xc8(r1)
/* 80162200 0015F2E0  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80162204 0015F2E4  C8 42 A9 D0 */	lfd f2, "@875"@sda21(r2)
/* 80162208 0015F2E8  90 61 00 CC */	stw r3, 0xcc(r1)
/* 8016220C 0015F2EC  C0 22 A9 E4 */	lfs f1, "@1046"@sda21(r2)
/* 80162210 0015F2F0  C8 01 00 C8 */	lfd f0, 0xc8(r1)
/* 80162214 0015F2F4  C0 7E 02 C0 */	lfs f3, 0x2c0(r30)
/* 80162218 0015F2F8  EC 00 10 28 */	fsubs f0, f0, f2
/* 8016221C 0015F2FC  EC 00 08 28 */	fsubs f0, f0, f1
/* 80162220 0015F300  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80162224 0015F304  40 81 00 40 */	ble .L_80162264
/* 80162228 0015F308  EC 01 1F 7C */	fnmsubs f0, f1, f29, f3
/* 8016222C 0015F30C  90 01 00 C8 */	stw r0, 0xc8(r1)
/* 80162230 0015F310  D0 1E 02 C0 */	stfs f0, 0x2c0(r30)
/* 80162234 0015F314  80 1E 02 C4 */	lwz r0, 0x2c4(r30)
/* 80162238 0015F318  C8 42 A9 D0 */	lfd f2, "@875"@sda21(r2)
/* 8016223C 0015F31C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80162240 0015F320  C0 02 A9 E4 */	lfs f0, "@1046"@sda21(r2)
/* 80162244 0015F324  90 01 00 CC */	stw r0, 0xcc(r1)
/* 80162248 0015F328  C0 7E 02 C0 */	lfs f3, 0x2c0(r30)
/* 8016224C 0015F32C  C8 21 00 C8 */	lfd f1, 0xc8(r1)
/* 80162250 0015F330  EC 21 10 28 */	fsubs f1, f1, f2
/* 80162254 0015F334  EC 01 00 28 */	fsubs f0, f1, f0
/* 80162258 0015F338  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8016225C 0015F33C  40 80 00 08 */	bge .L_80162264
/* 80162260 0015F340  D0 1E 02 C0 */	stfs f0, 0x2c0(r30)
.L_80162264:
/* 80162264 0015F344  80 7E 02 C4 */	lwz r3, 0x2c4(r30)
/* 80162268 0015F348  3C 00 43 30 */	lis r0, 0x4330
/* 8016226C 0015F34C  90 01 00 C8 */	stw r0, 0xc8(r1)
/* 80162270 0015F350  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80162274 0015F354  C8 42 A9 D0 */	lfd f2, "@875"@sda21(r2)
/* 80162278 0015F358  90 61 00 CC */	stw r3, 0xcc(r1)
/* 8016227C 0015F35C  C0 22 A9 E4 */	lfs f1, "@1046"@sda21(r2)
/* 80162280 0015F360  C8 01 00 C8 */	lfd f0, 0xc8(r1)
/* 80162284 0015F364  C0 7E 02 C0 */	lfs f3, 0x2c0(r30)
/* 80162288 0015F368  EC 00 10 28 */	fsubs f0, f0, f2
/* 8016228C 0015F36C  EC 00 08 28 */	fsubs f0, f0, f1
/* 80162290 0015F370  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80162294 0015F374  40 80 00 40 */	bge .L_801622D4
/* 80162298 0015F378  EC 01 1F 7A */	fmadds f0, f1, f29, f3
/* 8016229C 0015F37C  90 01 00 C8 */	stw r0, 0xc8(r1)
/* 801622A0 0015F380  D0 1E 02 C0 */	stfs f0, 0x2c0(r30)
/* 801622A4 0015F384  80 1E 02 C4 */	lwz r0, 0x2c4(r30)
/* 801622A8 0015F388  C8 42 A9 D0 */	lfd f2, "@875"@sda21(r2)
/* 801622AC 0015F38C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 801622B0 0015F390  C0 02 A9 E4 */	lfs f0, "@1046"@sda21(r2)
/* 801622B4 0015F394  90 01 00 CC */	stw r0, 0xcc(r1)
/* 801622B8 0015F398  C0 7E 02 C0 */	lfs f3, 0x2c0(r30)
/* 801622BC 0015F39C  C8 21 00 C8 */	lfd f1, 0xc8(r1)
/* 801622C0 0015F3A0  EC 21 10 28 */	fsubs f1, f1, f2
/* 801622C4 0015F3A4  EC 01 00 28 */	fsubs f0, f1, f0
/* 801622C8 0015F3A8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801622CC 0015F3AC  40 81 00 08 */	ble .L_801622D4
/* 801622D0 0015F3B0  D0 1E 02 C0 */	stfs f0, 0x2c0(r30)
.L_801622D4:
/* 801622D4 0015F3B4  C0 3E 02 C0 */	lfs f1, 0x2c0(r30)
/* 801622D8 0015F3B8  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801622DC 0015F3BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801622E0 0015F3C0  40 81 00 18 */	ble .L_801622F8
/* 801622E4 0015F3C4  80 7E 15 8C */	lwz r3, 0x158c(r30)
/* 801622E8 0015F3C8  88 03 00 30 */	lbz r0, 0x30(r3)
/* 801622EC 0015F3CC  54 00 06 3C */	rlwinm r0, r0, 0, 24, 30
/* 801622F0 0015F3D0  98 03 00 30 */	stb r0, 0x30(r3)
/* 801622F4 0015F3D4  48 00 00 14 */	b .L_80162308
.L_801622F8:
/* 801622F8 0015F3D8  80 7E 15 8C */	lwz r3, 0x158c(r30)
/* 801622FC 0015F3DC  88 03 00 30 */	lbz r0, 0x30(r3)
/* 80162300 0015F3E0  60 00 00 01 */	ori r0, r0, 0x1
/* 80162304 0015F3E4  98 03 00 30 */	stb r0, 0x30(r3)
.L_80162308:
/* 80162308 0015F3E8  80 7E 02 CC */	lwz r3, 0x2cc(r30)
/* 8016230C 0015F3EC  C0 1E 02 C0 */	lfs f0, 0x2c0(r30)
/* 80162310 0015F3F0  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80162314 0015F3F4  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80162318 0015F3F8  D0 03 00 34 */	stfs f0, 0x34(r3)
/* 8016231C 0015F3FC  C0 1E 02 C0 */	lfs f0, 0x2c0(r30)
/* 80162320 0015F400  80 7E 02 CC */	lwz r3, 0x2cc(r30)
/* 80162324 0015F404  D0 03 00 8C */	stfs f0, 0x8c(r3)
/* 80162328 0015F408  80 7E 02 CC */	lwz r3, 0x2cc(r30)
/* 8016232C 0015F40C  38 63 00 64 */	addi r3, r3, 0x64
/* 80162330 0015F410  7C 64 1B 78 */	mr r4, r3
/* 80162334 0015F414  4B EA 8C 09 */	bl xQuickCullForBound__FP7xQCDataPC6xBound
/* 80162338 0015F418  80 7E 02 CC */	lwz r3, 0x2cc(r30)
/* 8016233C 0015F41C  4B FC 20 ED */	bl zGridUpdateEnt__FP4xEnt
/* 80162340 0015F420  80 1E 02 B4 */	lwz r0, 0x2b4(r30)
/* 80162344 0015F424  54 00 06 F7 */	rlwinm. r0, r0, 0, 27, 27
/* 80162348 0015F428  41 82 02 B8 */	beq .L_80162600
/* 8016234C 0015F42C  C0 1E 15 78 */	lfs f0, 0x1578(r30)
/* 80162350 0015F430  3C 60 80 3C */	lis r3, globals@ha
/* 80162354 0015F434  38 63 05 58 */	addi r3, r3, globals@l
/* 80162358 0015F438  EC 00 E8 28 */	fsubs f0, f0, f29
/* 8016235C 0015F43C  D0 1E 15 78 */	stfs f0, 0x1578(r30)
/* 80162360 0015F440  80 63 03 1C */	lwz r3, 0x31c(r3)
/* 80162364 0015F444  80 03 00 30 */	lwz r0, 0x30(r3)
/* 80162368 0015F448  54 00 03 DF */	rlwinm. r0, r0, 0, 15, 15
/* 8016236C 0015F44C  41 82 00 1C */	beq .L_80162388
/* 80162370 0015F450  C0 3E 15 78 */	lfs f1, 0x1578(r30)
/* 80162374 0015F454  C0 02 AA 44 */	lfs f0, "@1661"@sda21(r2)
/* 80162378 0015F458  EC 01 00 28 */	fsubs f0, f1, f0
/* 8016237C 0015F45C  D0 1E 15 78 */	stfs f0, 0x1578(r30)
/* 80162380 0015F460  C0 02 AA 48 */	lfs f0, "@1662"@sda21(r2)
/* 80162384 0015F464  D0 1E 18 C0 */	stfs f0, 0x18c0(r30)
.L_80162388:
/* 80162388 0015F468  C0 1E 15 78 */	lfs f0, 0x1578(r30)
/* 8016238C 0015F46C  C0 22 A9 C4 */	lfs f1, "@832"@sda21(r2)
/* 80162390 0015F470  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80162394 0015F474  4C 40 13 82 */	cror eq, lt, eq
/* 80162398 0015F478  41 82 00 18 */	beq .L_801623B0
/* 8016239C 0015F47C  3C 60 80 3C */	lis r3, globals@ha
/* 801623A0 0015F480  38 63 05 58 */	addi r3, r3, globals@l
/* 801623A4 0015F484  C0 03 17 08 */	lfs f0, 0x1708(r3)
/* 801623A8 0015F488  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 801623AC 0015F48C  40 81 01 20 */	ble .L_801624CC
.L_801623B0:
/* 801623B0 0015F490  38 60 04 00 */	li r3, 0x400
/* 801623B4 0015F494  4B F0 41 4D */	bl zEntPlayerControlOn__F13zControlOwner
/* 801623B8 0015F498  80 1E 02 B4 */	lwz r0, 0x2b4(r30)
/* 801623BC 0015F49C  3C 60 80 3C */	lis r3, globals@ha
/* 801623C0 0015F4A0  38 63 05 58 */	addi r3, r3, globals@l
/* 801623C4 0015F4A4  54 00 07 34 */	rlwinm r0, r0, 0, 28, 26
/* 801623C8 0015F4A8  90 1E 02 B4 */	stw r0, 0x2b4(r30)
/* 801623CC 0015F4AC  38 63 06 E0 */	addi r3, r3, 0x6e0
/* 801623D0 0015F4B0  4B EB 94 29 */	bl xEntShow__FP4xEnt
/* 801623D4 0015F4B4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801623D8 0015F4B8  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 801623DC 0015F4BC  38 63 04 8C */	addi r3, r3, 0x48c
/* 801623E0 0015F4C0  4B EE 9E 35 */	bl xStrHash__FPCc
/* 801623E4 0015F4C4  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 801623E8 0015F4C8  38 80 00 00 */	li r4, 0x0
/* 801623EC 0015F4CC  C0 22 AA 38 */	lfs f1, "@1658"@sda21(r2)
/* 801623F0 0015F4D0  38 A0 00 00 */	li r5, 0x0
/* 801623F4 0015F4D4  FC 60 10 90 */	fmr f3, f2
/* 801623F8 0015F4D8  38 C0 00 00 */	li r6, 0x0
/* 801623FC 0015F4DC  38 E0 00 00 */	li r7, 0x0
/* 80162400 0015F4E0  4B EE 66 2D */	bl xSndPlay__FUiffUiUiUi14sound_categoryf
/* 80162404 0015F4E4  80 7E 17 C8 */	lwz r3, 0x17c8(r30)
/* 80162408 0015F4E8  38 80 00 00 */	li r4, 0x0
/* 8016240C 0015F4EC  38 A0 00 00 */	li r5, 0x0
/* 80162410 0015F4F0  38 C0 00 00 */	li r6, 0x0
/* 80162414 0015F4F4  38 E0 00 00 */	li r7, 0x0
/* 80162418 0015F4F8  4B ED 1C D9 */	bl xModelInstanceAlloc__FP8RpAtomicPvUsUcPUc
/* 8016241C 0015F4FC  7C 77 1B 79 */	mr. r23, r3
/* 80162420 0015F500  41 82 01 E0 */	beq .L_80162600
/* 80162424 0015F504  80 7E 18 C8 */	lwz r3, 0x18c8(r30)
/* 80162428 0015F508  28 03 00 00 */	cmplwi r3, 0x0
/* 8016242C 0015F50C  41 82 01 D4 */	beq .L_80162600
/* 80162430 0015F510  80 03 00 08 */	lwz r0, 0x8(r3)
/* 80162434 0015F514  28 00 00 00 */	cmplwi r0, 0x0
/* 80162438 0015F518  41 82 01 C8 */	beq .L_80162600
/* 8016243C 0015F51C  3C 60 80 3C */	lis r3, globals@ha
/* 80162440 0015F520  7F D5 F3 78 */	mr r21, r30
/* 80162444 0015F524  3A 83 05 58 */	addi r20, r3, globals@l
/* 80162448 0015F528  3A C0 00 00 */	li r22, 0x0
.L_8016244C:
/* 8016244C 0015F52C  C0 35 17 DC */	lfs f1, 0x17dc(r21)
/* 80162450 0015F530  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80162454 0015F534  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80162458 0015F538  40 81 00 58 */	ble .L_801624B0
/* 8016245C 0015F53C  80 77 00 4C */	lwz r3, 0x4c(r23)
/* 80162460 0015F540  38 95 17 CC */	addi r4, r21, 0x17cc
/* 80162464 0015F544  C0 35 17 D8 */	lfs f1, 0x17d8(r21)
/* 80162468 0015F548  4B EB 94 75 */	bl xMat3x3Rot__FP7xMat3x3PC5xVec3f
/* 8016246C 0015F54C  80 74 07 04 */	lwz r3, 0x704(r20)
/* 80162470 0015F550  80 B7 00 4C */	lwz r5, 0x4c(r23)
/* 80162474 0015F554  80 83 00 4C */	lwz r4, 0x4c(r3)
/* 80162478 0015F558  38 65 00 30 */	addi r3, r5, 0x30
/* 8016247C 0015F55C  38 84 00 30 */	addi r4, r4, 0x30
/* 80162480 0015F560  4B EE C0 5D */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 80162484 0015F564  80 77 00 4C */	lwz r3, 0x4c(r23)
/* 80162488 0015F568  C0 35 17 DC */	lfs f1, 0x17dc(r21)
/* 8016248C 0015F56C  7C 64 1B 78 */	mr r4, r3
/* 80162490 0015F570  4B F2 06 D5 */	bl xMat3x3SMul__FP7xMat3x3PC7xMat3x3f
/* 80162494 0015F574  80 7E 18 C8 */	lwz r3, 0x18c8(r30)
/* 80162498 0015F578  7E E4 BB 78 */	mr r4, r23
/* 8016249C 0015F57C  38 A0 00 00 */	li r5, 0x0
/* 801624A0 0015F580  38 C0 00 00 */	li r6, 0x0
/* 801624A4 0015F584  81 83 00 08 */	lwz r12, 0x8(r3)
/* 801624A8 0015F588  7D 89 03 A6 */	mtctr r12
/* 801624AC 0015F58C  4E 80 04 21 */	bctrl
.L_801624B0:
/* 801624B0 0015F590  3A D6 00 01 */	addi r22, r22, 0x1
/* 801624B4 0015F594  3A B5 00 18 */	addi r21, r21, 0x18
/* 801624B8 0015F598  2C 16 00 0A */	cmpwi r22, 0xa
/* 801624BC 0015F59C  41 80 FF 90 */	blt .L_8016244C
/* 801624C0 0015F5A0  7E E3 BB 78 */	mr r3, r23
/* 801624C4 0015F5A4  4B ED 1E B5 */	bl xModelInstanceFree__FP14xModelInstance
/* 801624C8 0015F5A8  48 00 01 38 */	b .L_80162600
.L_801624CC:
/* 801624CC 0015F5AC  80 1E 02 34 */	lwz r0, 0x234(r30)
/* 801624D0 0015F5B0  60 00 00 01 */	ori r0, r0, 0x1
/* 801624D4 0015F5B4  90 1E 02 34 */	stw r0, 0x234(r30)
/* 801624D8 0015F5B8  C0 1E 17 E0 */	lfs f0, 0x17e0(r30)
/* 801624DC 0015F5BC  C0 3E 17 DC */	lfs f1, 0x17dc(r30)
/* 801624E0 0015F5C0  EC 00 08 28 */	fsubs f0, f0, f1
/* 801624E4 0015F5C4  EC 1D 08 3A */	fmadds f0, f29, f0, f1
/* 801624E8 0015F5C8  D0 1E 17 DC */	stfs f0, 0x17dc(r30)
/* 801624EC 0015F5CC  C0 1E 17 F8 */	lfs f0, 0x17f8(r30)
/* 801624F0 0015F5D0  C0 3E 17 F4 */	lfs f1, 0x17f4(r30)
/* 801624F4 0015F5D4  EC 00 08 28 */	fsubs f0, f0, f1
/* 801624F8 0015F5D8  EC 1D 08 3A */	fmadds f0, f29, f0, f1
/* 801624FC 0015F5DC  D0 1E 17 F4 */	stfs f0, 0x17f4(r30)
/* 80162500 0015F5E0  C0 1E 18 10 */	lfs f0, 0x1810(r30)
/* 80162504 0015F5E4  C0 3E 18 0C */	lfs f1, 0x180c(r30)
/* 80162508 0015F5E8  EC 00 08 28 */	fsubs f0, f0, f1
/* 8016250C 0015F5EC  EC 1D 08 3A */	fmadds f0, f29, f0, f1
/* 80162510 0015F5F0  D0 1E 18 0C */	stfs f0, 0x180c(r30)
/* 80162514 0015F5F4  C0 1E 18 28 */	lfs f0, 0x1828(r30)
/* 80162518 0015F5F8  C0 3E 18 24 */	lfs f1, 0x1824(r30)
/* 8016251C 0015F5FC  EC 00 08 28 */	fsubs f0, f0, f1
/* 80162520 0015F600  EC 1D 08 3A */	fmadds f0, f29, f0, f1
/* 80162524 0015F604  D0 1E 18 24 */	stfs f0, 0x1824(r30)
/* 80162528 0015F608  C0 1E 18 40 */	lfs f0, 0x1840(r30)
/* 8016252C 0015F60C  C0 3E 18 3C */	lfs f1, 0x183c(r30)
/* 80162530 0015F610  EC 00 08 28 */	fsubs f0, f0, f1
/* 80162534 0015F614  EC 1D 08 3A */	fmadds f0, f29, f0, f1
/* 80162538 0015F618  D0 1E 18 3C */	stfs f0, 0x183c(r30)
/* 8016253C 0015F61C  C0 1E 18 58 */	lfs f0, 0x1858(r30)
/* 80162540 0015F620  C0 3E 18 54 */	lfs f1, 0x1854(r30)
/* 80162544 0015F624  EC 00 08 28 */	fsubs f0, f0, f1
/* 80162548 0015F628  EC 1D 08 3A */	fmadds f0, f29, f0, f1
/* 8016254C 0015F62C  D0 1E 18 54 */	stfs f0, 0x1854(r30)
/* 80162550 0015F630  C0 1E 18 70 */	lfs f0, 0x1870(r30)
/* 80162554 0015F634  C0 3E 18 6C */	lfs f1, 0x186c(r30)
/* 80162558 0015F638  EC 00 08 28 */	fsubs f0, f0, f1
/* 8016255C 0015F63C  EC 1D 08 3A */	fmadds f0, f29, f0, f1
/* 80162560 0015F640  D0 1E 18 6C */	stfs f0, 0x186c(r30)
/* 80162564 0015F644  C0 1E 18 88 */	lfs f0, 0x1888(r30)
/* 80162568 0015F648  C0 3E 18 84 */	lfs f1, 0x1884(r30)
/* 8016256C 0015F64C  EC 00 08 28 */	fsubs f0, f0, f1
/* 80162570 0015F650  EC 1D 08 3A */	fmadds f0, f29, f0, f1
/* 80162574 0015F654  D0 1E 18 84 */	stfs f0, 0x1884(r30)
/* 80162578 0015F658  C0 1E 18 A0 */	lfs f0, 0x18a0(r30)
/* 8016257C 0015F65C  C0 3E 18 9C */	lfs f1, 0x189c(r30)
/* 80162580 0015F660  EC 00 08 28 */	fsubs f0, f0, f1
/* 80162584 0015F664  EC 1D 08 3A */	fmadds f0, f29, f0, f1
/* 80162588 0015F668  D0 1E 18 9C */	stfs f0, 0x189c(r30)
/* 8016258C 0015F66C  C0 1E 18 B8 */	lfs f0, 0x18b8(r30)
/* 80162590 0015F670  C0 3E 18 B4 */	lfs f1, 0x18b4(r30)
/* 80162594 0015F674  EC 00 08 28 */	fsubs f0, f0, f1
/* 80162598 0015F678  EC 1D 08 3A */	fmadds f0, f29, f0, f1
/* 8016259C 0015F67C  D0 1E 18 B4 */	stfs f0, 0x18b4(r30)
/* 801625A0 0015F680  C0 02 AA 4C */	lfs f0, "@1663"@sda21(r2)
/* 801625A4 0015F684  C0 3E 18 BC */	lfs f1, 0x18bc(r30)
/* 801625A8 0015F688  EC 00 08 28 */	fsubs f0, f0, f1
/* 801625AC 0015F68C  EC 00 0F 7A */	fmadds f0, f0, f29, f1
/* 801625B0 0015F690  D0 1E 18 BC */	stfs f0, 0x18bc(r30)
/* 801625B4 0015F694  C0 22 AA 50 */	lfs f1, "@1664"@sda21(r2)
/* 801625B8 0015F698  C0 1E 18 C0 */	lfs f0, 0x18c0(r30)
/* 801625BC 0015F69C  EC 01 07 7C */	fnmsubs f0, f1, f29, f0
/* 801625C0 0015F6A0  D0 1E 18 C0 */	stfs f0, 0x18c0(r30)
/* 801625C4 0015F6A4  C0 3E 18 C0 */	lfs f1, 0x18c0(r30)
/* 801625C8 0015F6A8  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801625CC 0015F6AC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801625D0 0015F6B0  40 80 00 08 */	bge .L_801625D8
/* 801625D4 0015F6B4  D0 1E 18 C0 */	stfs f0, 0x18c0(r30)
.L_801625D8:
/* 801625D8 0015F6B8  C0 22 AA 54 */	lfs f1, "@1665"@sda21(r2)
/* 801625DC 0015F6BC  C0 1E 18 C4 */	lfs f0, 0x18c4(r30)
/* 801625E0 0015F6C0  EC 01 07 7A */	fmadds f0, f1, f29, f0
/* 801625E4 0015F6C4  D0 1E 18 C4 */	stfs f0, 0x18c4(r30)
/* 801625E8 0015F6C8  C0 3E 18 C4 */	lfs f1, 0x18c4(r30)
/* 801625EC 0015F6CC  C0 02 AA 58 */	lfs f0, "@1666"@sda21(r2)
/* 801625F0 0015F6D0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801625F4 0015F6D4  40 81 00 0C */	ble .L_80162600
/* 801625F8 0015F6D8  EC 01 00 28 */	fsubs f0, f1, f0
/* 801625FC 0015F6DC  D0 1E 18 C4 */	stfs f0, 0x18c4(r30)
.L_80162600:
/* 80162600 0015F6E0  C0 1E 15 74 */	lfs f0, 0x1574(r30)
/* 80162604 0015F6E4  EC 00 E8 2A */	fadds f0, f0, f29
/* 80162608 0015F6E8  D0 1E 15 74 */	stfs f0, 0x1574(r30)
/* 8016260C 0015F6EC  C0 3E 15 74 */	lfs f1, 0x1574(r30)
/* 80162610 0015F6F0  C0 02 AA 5C */	lfs f0, "@1667"@sda21(r2)
/* 80162614 0015F6F4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80162618 0015F6F8  40 80 04 E4 */	bge .L_80162AFC
/* 8016261C 0015F6FC  80 1E 02 34 */	lwz r0, 0x234(r30)
/* 80162620 0015F700  3C 60 80 3C */	lis r3, globals@ha
/* 80162624 0015F704  38 63 05 58 */	addi r3, r3, globals@l
/* 80162628 0015F708  60 00 00 01 */	ori r0, r0, 0x1
/* 8016262C 0015F70C  90 1E 02 34 */	stw r0, 0x234(r30)
/* 80162630 0015F710  C0 23 17 08 */	lfs f1, 0x1708(r3)
/* 80162634 0015F714  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80162638 0015F718  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016263C 0015F71C  4C 40 13 82 */	cror eq, lt, eq
/* 80162640 0015F720  40 82 04 BC */	bne .L_80162AFC
/* 80162644 0015F724  4B EC E6 45 */	bl xurand__Fv
/* 80162648 0015F728  FC 00 08 90 */	fmr f0, f1
/* 8016264C 0015F72C  C0 22 A9 C4 */	lfs f1, "@832"@sda21(r2)
/* 80162650 0015F730  C0 42 A9 CC */	lfs f2, "@870"@sda21(r2)
/* 80162654 0015F734  38 61 00 38 */	addi r3, r1, 0x38
/* 80162658 0015F738  FC 60 08 90 */	fmr f3, f1
/* 8016265C 0015F73C  FF C0 00 90 */	fmr f30, f0
/* 80162660 0015F740  4B EA C9 9D */	bl xVec3Init__FP5xVec3fff
/* 80162664 0015F744  3C 80 80 3C */	lis r4, globals@ha
/* 80162668 0015F748  3C 60 80 2A */	lis r3, sNFComment@ha
/* 8016266C 0015F74C  3B 84 05 58 */	addi r28, r4, globals@l
/* 80162670 0015F750  7F DB F3 78 */	mr r27, r30
/* 80162674 0015F754  3B 5C 07 68 */	addi r26, r28, 0x768
/* 80162678 0015F758  3B A3 AA E0 */	addi r29, r3, sNFComment@l
/* 8016267C 0015F75C  3B 3C 06 E0 */	addi r25, r28, 0x6e0
/* 80162680 0015F760  3B 00 00 00 */	li r24, 0x0
/* 80162684 0015F764  48 00 04 68 */	b .L_80162AEC
.L_80162688:
/* 80162688 0015F768  80 9B 15 60 */	lwz r4, 0x1560(r27)
/* 8016268C 0015F76C  38 61 00 68 */	addi r3, r1, 0x68
/* 80162690 0015F770  80 BB 15 5C */	lwz r5, 0x155c(r27)
/* 80162694 0015F774  38 84 00 10 */	addi r4, r4, 0x10
/* 80162698 0015F778  38 A5 00 10 */	addi r5, r5, 0x10
/* 8016269C 0015F77C  4B EA BF F5 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 801626A0 0015F780  38 61 00 68 */	addi r3, r1, 0x68
/* 801626A4 0015F784  4B EA BF AD */	bl xVec3Length__FPC5xVec3
/* 801626A8 0015F788  FF 80 08 90 */	fmr f28, f1
/* 801626AC 0015F78C  C0 02 AA 60 */	lfs f0, "@1668"@sda21(r2)
/* 801626B0 0015F790  FC 1C 00 40 */	fcmpo cr0, f28, f0
/* 801626B4 0015F794  41 80 04 30 */	blt .L_80162AE4
/* 801626B8 0015F798  C0 02 A9 C0 */	lfs f0, "@831"@sda21(r2)
/* 801626BC 0015F79C  38 61 00 68 */	addi r3, r1, 0x68
/* 801626C0 0015F7A0  EC 20 E0 24 */	fdivs f1, f0, f28
/* 801626C4 0015F7A4  4B EB 92 75 */	bl xVec3SMulBy__FP5xVec3f
/* 801626C8 0015F7A8  80 BB 15 5C */	lwz r5, 0x155c(r27)
/* 801626CC 0015F7AC  7F 44 D3 78 */	mr r4, r26
/* 801626D0 0015F7B0  38 61 00 5C */	addi r3, r1, 0x5c
/* 801626D4 0015F7B4  38 A5 00 10 */	addi r5, r5, 0x10
/* 801626D8 0015F7B8  4B EA BF B9 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 801626DC 0015F7BC  38 61 00 68 */	addi r3, r1, 0x68
/* 801626E0 0015F7C0  38 81 00 5C */	addi r4, r1, 0x5c
/* 801626E4 0015F7C4  4B EE BE 0D */	bl xVec3Dot__FPC5xVec3PC5xVec3
/* 801626E8 0015F7C8  FF E0 08 90 */	fmr f31, f1
/* 801626EC 0015F7CC  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801626F0 0015F7D0  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 801626F4 0015F7D4  40 80 00 28 */	bge .L_8016271C
/* 801626F8 0015F7D8  80 9B 15 5C */	lwz r4, 0x155c(r27)
/* 801626FC 0015F7DC  38 61 00 50 */	addi r3, r1, 0x50
/* 80162700 0015F7E0  38 84 00 10 */	addi r4, r4, 0x10
/* 80162704 0015F7E4  4B EE BD D9 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 80162708 0015F7E8  80 7B 15 5C */	lwz r3, 0x155c(r27)
/* 8016270C 0015F7EC  C0 22 AA 50 */	lfs f1, "@1664"@sda21(r2)
/* 80162710 0015F7F0  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 80162714 0015F7F4  EF E1 00 32 */	fmuls f31, f1, f0
/* 80162718 0015F7F8  48 00 00 74 */	b .L_8016278C
.L_8016271C:
/* 8016271C 0015F7FC  FC 1F E0 40 */	fcmpo cr0, f31, f28
/* 80162720 0015F800  40 81 00 28 */	ble .L_80162748
/* 80162724 0015F804  80 9B 15 60 */	lwz r4, 0x1560(r27)
/* 80162728 0015F808  38 61 00 50 */	addi r3, r1, 0x50
/* 8016272C 0015F80C  38 84 00 10 */	addi r4, r4, 0x10
/* 80162730 0015F810  4B EE BD AD */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 80162734 0015F814  80 7B 15 60 */	lwz r3, 0x1560(r27)
/* 80162738 0015F818  C0 22 AA 50 */	lfs f1, "@1664"@sda21(r2)
/* 8016273C 0015F81C  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 80162740 0015F820  EF E1 00 32 */	fmuls f31, f1, f0
/* 80162744 0015F824  48 00 00 48 */	b .L_8016278C
.L_80162748:
/* 80162748 0015F828  80 9B 15 5C */	lwz r4, 0x155c(r27)
/* 8016274C 0015F82C  38 61 00 50 */	addi r3, r1, 0x50
/* 80162750 0015F830  38 84 00 10 */	addi r4, r4, 0x10
/* 80162754 0015F834  4B EE BD 89 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 80162758 0015F838  FC 20 F8 90 */	fmr f1, f31
/* 8016275C 0015F83C  38 61 00 50 */	addi r3, r1, 0x50
/* 80162760 0015F840  38 81 00 68 */	addi r4, r1, 0x68
/* 80162764 0015F844  4B EB 28 F5 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 80162768 0015F848  EC 3F E0 24 */	fdivs f1, f31, f28
/* 8016276C 0015F84C  80 9B 15 5C */	lwz r4, 0x155c(r27)
/* 80162770 0015F850  80 7B 15 60 */	lwz r3, 0x1560(r27)
/* 80162774 0015F854  C0 64 00 1C */	lfs f3, 0x1c(r4)
/* 80162778 0015F858  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 8016277C 0015F85C  C0 42 AA 50 */	lfs f2, "@1664"@sda21(r2)
/* 80162780 0015F860  EC 00 18 28 */	fsubs f0, f0, f3
/* 80162784 0015F864  EC 01 18 3A */	fmadds f0, f1, f0, f3
/* 80162788 0015F868  EF E2 00 32 */	fmuls f31, f2, f0
.L_8016278C:
/* 8016278C 0015F86C  C0 02 AA 64 */	lfs f0, "@1669"@sda21(r2)
/* 80162790 0015F870  3A E0 00 00 */	li r23, 0x0
/* 80162794 0015F874  3E 80 43 30 */	lis r20, 0x4330
/* 80162798 0015F878  EC 1C 00 24 */	fdivs f0, f28, f0
/* 8016279C 0015F87C  FC 00 00 1E */	fctiwz f0, f0
/* 801627A0 0015F880  D8 01 00 C8 */	stfd f0, 0xc8(r1)
/* 801627A4 0015F884  82 C1 00 CC */	lwz r22, 0xcc(r1)
/* 801627A8 0015F888  6E D5 80 00 */	xoris r21, r22, 0x8000
/* 801627AC 0015F88C  48 00 01 00 */	b .L_801628AC
.L_801627B0:
/* 801627B0 0015F890  4B EC E4 D9 */	bl xurand__Fv
/* 801627B4 0015F894  6E E0 80 00 */	xoris r0, r23, 0x8000
/* 801627B8 0015F898  80 9B 15 5C */	lwz r4, 0x155c(r27)
/* 801627BC 0015F89C  90 01 00 CC */	stw r0, 0xcc(r1)
/* 801627C0 0015F8A0  80 7B 15 60 */	lwz r3, 0x1560(r27)
/* 801627C4 0015F8A4  92 81 00 C8 */	stw r20, 0xc8(r1)
/* 801627C8 0015F8A8  C8 62 A9 D0 */	lfd f3, "@875"@sda21(r2)
/* 801627CC 0015F8AC  C8 01 00 C8 */	lfd f0, 0xc8(r1)
/* 801627D0 0015F8B0  92 A1 00 D4 */	stw r21, 0xd4(r1)
/* 801627D4 0015F8B4  EC 00 18 28 */	fsubs f0, f0, f3
/* 801627D8 0015F8B8  C0 82 A9 E4 */	lfs f4, "@1046"@sda21(r2)
/* 801627DC 0015F8BC  92 81 00 D0 */	stw r20, 0xd0(r1)
/* 801627E0 0015F8C0  C0 42 A9 C0 */	lfs f2, "@831"@sda21(r2)
/* 801627E4 0015F8C4  EC A0 08 2A */	fadds f5, f0, f1
/* 801627E8 0015F8C8  C8 01 00 D0 */	lfd f0, 0xd0(r1)
/* 801627EC 0015F8CC  C0 24 00 1C */	lfs f1, 0x1c(r4)
/* 801627F0 0015F8D0  EC 60 18 28 */	fsubs f3, f0, f3
/* 801627F4 0015F8D4  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 801627F8 0015F8D8  EC 85 20 28 */	fsubs f4, f5, f4
/* 801627FC 0015F8DC  EF 44 18 24 */	fdivs f26, f4, f3
/* 80162800 0015F8E0  EF 82 D0 28 */	fsubs f28, f2, f26
/* 80162804 0015F8E4  EF 61 07 32 */	fmuls f27, f1, f28
/* 80162808 0015F8E8  EF 60 DE BA */	fmadds f27, f0, f26, f27
/* 8016280C 0015F8EC  4B EC E4 7D */	bl xurand__Fv
/* 80162810 0015F8F0  C0 02 A9 E4 */	lfs f0, "@1046"@sda21(r2)
/* 80162814 0015F8F4  92 81 00 E0 */	stw r20, 0xe0(r1)
/* 80162818 0015F8F8  EC 00 08 2A */	fadds f0, f0, f1
/* 8016281C 0015F8FC  C8 22 A9 D0 */	lfd f1, "@875"@sda21(r2)
/* 80162820 0015F900  EC 1B 00 32 */	fmuls f0, f27, f0
/* 80162824 0015F904  EF DD F0 3A */	fmadds f30, f29, f0, f30
/* 80162828 0015F908  FC 00 F0 1E */	fctiwz f0, f30
/* 8016282C 0015F90C  D8 01 00 D8 */	stfd f0, 0xd8(r1)
/* 80162830 0015F910  82 61 00 DC */	lwz r19, 0xdc(r1)
/* 80162834 0015F914  6E 60 80 00 */	xoris r0, r19, 0x8000
/* 80162838 0015F918  2C 13 00 00 */	cmpwi r19, 0x0
/* 8016283C 0015F91C  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 80162840 0015F920  C8 01 00 E0 */	lfd f0, 0xe0(r1)
/* 80162844 0015F924  EC 00 08 28 */	fsubs f0, f0, f1
/* 80162848 0015F928  EF DE 00 28 */	fsubs f30, f30, f0
/* 8016284C 0015F92C  40 81 00 5C */	ble .L_801628A8
/* 80162850 0015F930  80 9B 15 5C */	lwz r4, 0x155c(r27)
/* 80162854 0015F934  FC 20 E0 90 */	fmr f1, f28
/* 80162858 0015F938  38 61 00 2C */	addi r3, r1, 0x2c
/* 8016285C 0015F93C  38 84 00 10 */	addi r4, r4, 0x10
/* 80162860 0015F940  4B EA 88 31 */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 80162864 0015F944  80 9B 15 60 */	lwz r4, 0x1560(r27)
/* 80162868 0015F948  FC 20 D0 90 */	fmr f1, f26
/* 8016286C 0015F94C  38 61 00 2C */	addi r3, r1, 0x2c
/* 80162870 0015F950  38 84 00 10 */	addi r4, r4, 0x10
/* 80162874 0015F954  4B EB 27 E5 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 80162878 0015F958  4B EC E4 11 */	bl xurand__Fv
/* 8016287C 0015F95C  C0 02 A9 C8 */	lfs f0, "@833"@sda21(r2)
/* 80162880 0015F960  EC 00 00 72 */	fmuls f0, f0, f1
/* 80162884 0015F964  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 80162888 0015F968  4B EC E4 01 */	bl xurand__Fv
/* 8016288C 0015F96C  C0 02 A9 C8 */	lfs f0, "@833"@sda21(r2)
/* 80162890 0015F970  7E 65 9B 78 */	mr r5, r19
/* 80162894 0015F974  38 61 00 2C */	addi r3, r1, 0x2c
/* 80162898 0015F978  38 81 00 38 */	addi r4, r1, 0x38
/* 8016289C 0015F97C  EC 00 00 72 */	fmuls f0, f0, f1
/* 801628A0 0015F980  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 801628A4 0015F984  48 00 EE 3D */	bl zParPTankSpawnSnow__FP5xVec3P5xVec3Ui
.L_801628A8:
/* 801628A8 0015F988  3A F7 00 01 */	addi r23, r23, 0x1
.L_801628AC:
/* 801628AC 0015F98C  7C 17 B0 00 */	cmpw r23, r22
/* 801628B0 0015F990  41 80 FF 00 */	blt .L_801627B0
/* 801628B4 0015F994  7F 44 D3 78 */	mr r4, r26
/* 801628B8 0015F998  38 61 00 44 */	addi r3, r1, 0x44
/* 801628BC 0015F99C  38 A1 00 50 */	addi r5, r1, 0x50
/* 801628C0 0015F9A0  4B EA BD D1 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 801628C4 0015F9A4  38 61 00 44 */	addi r3, r1, 0x44
/* 801628C8 0015F9A8  4B EB 28 05 */	bl xVec3Length2__FPC5xVec3
/* 801628CC 0015F9AC  C0 1C 07 74 */	lfs f0, 0x774(r28)
/* 801628D0 0015F9B0  EC 1F 07 FA */	fmadds f0, f31, f31, f0
/* 801628D4 0015F9B4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801628D8 0015F9B8  40 80 02 0C */	bge .L_80162AE4
/* 801628DC 0015F9BC  C0 02 AA 68 */	lfs f0, "@1670"@sda21(r2)
/* 801628E0 0015F9C0  D0 1E 15 78 */	stfs f0, 0x1578(r30)
/* 801628E4 0015F9C4  80 1E 02 B4 */	lwz r0, 0x2b4(r30)
/* 801628E8 0015F9C8  54 00 06 F7 */	rlwinm. r0, r0, 0, 27, 27
/* 801628EC 0015F9CC  40 82 01 F8 */	bne .L_80162AE4
/* 801628F0 0015F9D0  38 60 04 00 */	li r3, 0x400
/* 801628F4 0015F9D4  4B F0 3C 65 */	bl zEntPlayerControlOff__F13zControlOwner
/* 801628F8 0015F9D8  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801628FC 0015F9DC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80162900 0015F9E0  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 80162904 0015F9E4  D0 1C 17 10 */	stfs f0, 0x1710(r28)
/* 80162908 0015F9E8  38 63 04 9D */	addi r3, r3, 0x49d
/* 8016290C 0015F9EC  80 1E 02 B4 */	lwz r0, 0x2b4(r30)
/* 80162910 0015F9F0  60 00 00 10 */	ori r0, r0, 0x10
/* 80162914 0015F9F4  90 1E 02 B4 */	stw r0, 0x2b4(r30)
/* 80162918 0015F9F8  4B EE 98 FD */	bl xStrHash__FPCc
/* 8016291C 0015F9FC  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80162920 0015FA00  38 80 00 00 */	li r4, 0x0
/* 80162924 0015FA04  C0 22 AA 6C */	lfs f1, "@1671"@sda21(r2)
/* 80162928 0015FA08  38 A0 00 00 */	li r5, 0x0
/* 8016292C 0015FA0C  FC 60 10 90 */	fmr f3, f2
/* 80162930 0015FA10  38 C0 00 00 */	li r6, 0x0
/* 80162934 0015FA14  38 E0 00 00 */	li r7, 0x0
/* 80162938 0015FA18  4B EE 60 F5 */	bl xSndPlay__FUiffUiUiUi14sound_categoryf
/* 8016293C 0015FA1C  7F 23 CB 78 */	mr r3, r25
/* 80162940 0015FA20  4B EB 8E A9 */	bl xEntHide__FP4xEnt
/* 80162944 0015FA24  3A A0 00 00 */	li r21, 0x0
/* 80162948 0015FA28  7F D4 F3 78 */	mr r20, r30
.L_8016294C:
/* 8016294C 0015FA2C  4B EC E3 3D */	bl xurand__Fv
/* 80162950 0015FA30  C0 02 AA 50 */	lfs f0, "@1664"@sda21(r2)
/* 80162954 0015FA34  EC 00 08 28 */	fsubs f0, f0, f1
/* 80162958 0015FA38  D0 14 17 DC */	stfs f0, 0x17dc(r20)
/* 8016295C 0015FA3C  4B EC E3 2D */	bl xurand__Fv
/* 80162960 0015FA40  C0 42 AA 70 */	lfs f2, "@1672"@sda21(r2)
/* 80162964 0015FA44  C0 02 A9 E8 */	lfs f0, "@1047"@sda21(r2)
/* 80162968 0015FA48  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8016296C 0015FA4C  D0 14 17 E0 */	stfs f0, 0x17e0(r20)
/* 80162970 0015FA50  4B EC E3 19 */	bl xurand__Fv
/* 80162974 0015FA54  C0 02 AA 58 */	lfs f0, "@1666"@sda21(r2)
/* 80162978 0015FA58  EF 40 00 72 */	fmuls f26, f0, f1
/* 8016297C 0015FA5C  FC 20 D0 90 */	fmr f1, f26
/* 80162980 0015FA60  4B F6 24 CD */	bl isin__Ff
/* 80162984 0015FA64  D0 34 17 CC */	stfs f1, 0x17cc(r20)
/* 80162988 0015FA68  FC 20 D0 90 */	fmr f1, f26
/* 8016298C 0015FA6C  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80162990 0015FA70  D0 14 17 D0 */	stfs f0, 0x17d0(r20)
/* 80162994 0015FA74  4B F6 24 FD */	bl icos__Ff
/* 80162998 0015FA78  D0 34 17 D4 */	stfs f1, 0x17d4(r20)
/* 8016299C 0015FA7C  4B EC E2 ED */	bl xurand__Fv
/* 801629A0 0015FA80  C0 62 AA 7C */	lfs f3, "@1675"@sda21(r2)
/* 801629A4 0015FA84  56 A0 07 FF */	clrlwi. r0, r21, 31
/* 801629A8 0015FA88  C0 42 AA 78 */	lfs f2, "@1674"@sda21(r2)
/* 801629AC 0015FA8C  C0 02 AA 74 */	lfs f0, "@1673"@sda21(r2)
/* 801629B0 0015FA90  EC 23 10 7A */	fmadds f1, f3, f1, f2
/* 801629B4 0015FA94  EC 00 00 72 */	fmuls f0, f0, f1
/* 801629B8 0015FA98  D0 14 17 D8 */	stfs f0, 0x17d8(r20)
/* 801629BC 0015FA9C  41 82 00 20 */	beq .L_801629DC
/* 801629C0 0015FAA0  C0 34 17 CC */	lfs f1, 0x17cc(r20)
/* 801629C4 0015FAA4  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801629C8 0015FAA8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801629CC 0015FAAC  40 80 00 28 */	bge .L_801629F4
/* 801629D0 0015FAB0  FC 00 08 50 */	fneg f0, f1
/* 801629D4 0015FAB4  D0 14 17 CC */	stfs f0, 0x17cc(r20)
/* 801629D8 0015FAB8  48 00 00 1C */	b .L_801629F4
.L_801629DC:
/* 801629DC 0015FABC  C0 34 17 CC */	lfs f1, 0x17cc(r20)
/* 801629E0 0015FAC0  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801629E4 0015FAC4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801629E8 0015FAC8  40 81 00 0C */	ble .L_801629F4
/* 801629EC 0015FACC  FC 00 08 50 */	fneg f0, f1
/* 801629F0 0015FAD0  D0 14 17 CC */	stfs f0, 0x17cc(r20)
.L_801629F4:
/* 801629F4 0015FAD4  56 A0 07 BD */	rlwinm. r0, r21, 0, 30, 30
/* 801629F8 0015FAD8  41 82 00 20 */	beq .L_80162A18
/* 801629FC 0015FADC  C0 34 17 D4 */	lfs f1, 0x17d4(r20)
/* 80162A00 0015FAE0  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80162A04 0015FAE4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80162A08 0015FAE8  40 80 00 28 */	bge .L_80162A30
/* 80162A0C 0015FAEC  FC 00 08 50 */	fneg f0, f1
/* 80162A10 0015FAF0  D0 14 17 D4 */	stfs f0, 0x17d4(r20)
/* 80162A14 0015FAF4  48 00 00 1C */	b .L_80162A30
.L_80162A18:
/* 80162A18 0015FAF8  C0 34 17 D4 */	lfs f1, 0x17d4(r20)
/* 80162A1C 0015FAFC  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80162A20 0015FB00  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80162A24 0015FB04  40 81 00 0C */	ble .L_80162A30
/* 80162A28 0015FB08  FC 00 08 50 */	fneg f0, f1
/* 80162A2C 0015FB0C  D0 14 17 D4 */	stfs f0, 0x17d4(r20)
.L_80162A30:
/* 80162A30 0015FB10  3A B5 00 01 */	addi r21, r21, 0x1
/* 80162A34 0015FB14  3A 94 00 18 */	addi r20, r20, 0x18
/* 80162A38 0015FB18  2C 15 00 0A */	cmpwi r21, 0xa
/* 80162A3C 0015FB1C  41 80 FF 10 */	blt .L_8016294C
/* 80162A40 0015FB20  C0 02 A9 C0 */	lfs f0, "@831"@sda21(r2)
/* 80162A44 0015FB24  D0 1E 18 BC */	stfs f0, 0x18bc(r30)
/* 80162A48 0015FB28  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80162A4C 0015FB2C  D0 1E 18 C0 */	stfs f0, 0x18c0(r30)
/* 80162A50 0015FB30  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80162A54 0015FB34  D0 1E 18 C4 */	stfs f0, 0x18c4(r30)
/* 80162A58 0015FB38  80 1E 18 E8 */	lwz r0, 0x18e8(r30)
/* 80162A5C 0015FB3C  54 00 07 BD */	rlwinm. r0, r0, 0, 30, 30
/* 80162A60 0015FB40  41 82 00 58 */	beq .L_80162AB8
/* 80162A64 0015FB44  4B EC E2 05 */	bl xrand__Fv
/* 80162A68 0015FB48  54 60 06 31 */	rlwinm. r0, r3, 0, 24, 24
/* 80162A6C 0015FB4C  41 82 00 28 */	beq .L_80162A94
/* 80162A70 0015FB50  80 7E 18 E4 */	lwz r3, 0x18e4(r30)
/* 80162A74 0015FB54  38 A0 00 00 */	li r5, 0x0
/* 80162A78 0015FB58  80 9D 00 64 */	lwz r4, 0x64(r29)
/* 80162A7C 0015FB5C  38 C0 FF FF */	li r6, -0x1
/* 80162A80 0015FB60  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80162A84 0015FB64  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80162A88 0015FB68  7D 89 03 A6 */	mtctr r12
/* 80162A8C 0015FB6C  4E 80 04 21 */	bctrl
/* 80162A90 0015FB70  48 00 00 54 */	b .L_80162AE4
.L_80162A94:
/* 80162A94 0015FB74  80 7E 18 E4 */	lwz r3, 0x18e4(r30)
/* 80162A98 0015FB78  38 A0 00 00 */	li r5, 0x0
/* 80162A9C 0015FB7C  80 9D 00 3C */	lwz r4, 0x3c(r29)
/* 80162AA0 0015FB80  38 C0 FF FF */	li r6, -0x1
/* 80162AA4 0015FB84  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80162AA8 0015FB88  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80162AAC 0015FB8C  7D 89 03 A6 */	mtctr r12
/* 80162AB0 0015FB90  4E 80 04 21 */	bctrl
/* 80162AB4 0015FB94  48 00 00 30 */	b .L_80162AE4
.L_80162AB8:
/* 80162AB8 0015FB98  80 7E 18 E4 */	lwz r3, 0x18e4(r30)
/* 80162ABC 0015FB9C  38 A0 00 00 */	li r5, 0x0
/* 80162AC0 0015FBA0  80 9D 00 34 */	lwz r4, 0x34(r29)
/* 80162AC4 0015FBA4  38 C0 FF FF */	li r6, -0x1
/* 80162AC8 0015FBA8  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80162ACC 0015FBAC  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80162AD0 0015FBB0  7D 89 03 A6 */	mtctr r12
/* 80162AD4 0015FBB4  4E 80 04 21 */	bctrl
/* 80162AD8 0015FBB8  80 1E 18 E8 */	lwz r0, 0x18e8(r30)
/* 80162ADC 0015FBBC  60 00 00 02 */	ori r0, r0, 0x2
/* 80162AE0 0015FBC0  90 1E 18 E8 */	stw r0, 0x18e8(r30)
.L_80162AE4:
/* 80162AE4 0015FBC4  3B 7B 00 04 */	addi r27, r27, 0x4
/* 80162AE8 0015FBC8  3B 18 00 01 */	addi r24, r24, 0x1
.L_80162AEC:
/* 80162AEC 0015FBCC  80 7E 15 70 */	lwz r3, 0x1570(r30)
/* 80162AF0 0015FBD0  38 03 FF FF */	addi r0, r3, -0x1
/* 80162AF4 0015FBD4  7C 18 00 00 */	cmpw r24, r0
/* 80162AF8 0015FBD8  41 80 FB 90 */	blt .L_80162688
.L_80162AFC:
/* 80162AFC 0015FBDC  3A C0 00 00 */	li r22, 0x0
/* 80162B00 0015FBE0  7F D5 F3 78 */	mr r21, r30
.L_80162B04:
/* 80162B04 0015FBE4  3A E0 00 00 */	li r23, 0x0
/* 80162B08 0015FBE8  7E B4 AB 78 */	mr r20, r21
.L_80162B0C:
/* 80162B0C 0015FBEC  7F C3 F3 78 */	mr r3, r30
/* 80162B10 0015FBF0  38 94 15 90 */	addi r4, r20, 0x1590
/* 80162B14 0015FBF4  48 00 1C 05 */	bl bossPatBoxCheckCollide__12zNPCBPatrickFP10bossPatBox
/* 80162B18 0015FBF8  3A F7 00 01 */	addi r23, r23, 0x1
/* 80162B1C 0015FBFC  3A 94 00 14 */	addi r20, r20, 0x14
/* 80162B20 0015FC00  2C 17 00 03 */	cmpwi r23, 0x3
/* 80162B24 0015FC04  41 80 FF E8 */	blt .L_80162B0C
/* 80162B28 0015FC08  3A D6 00 01 */	addi r22, r22, 0x1
/* 80162B2C 0015FC0C  3A B5 00 3C */	addi r21, r21, 0x3c
/* 80162B30 0015FC10  2C 16 00 08 */	cmpwi r22, 0x8
/* 80162B34 0015FC14  41 80 FF D0 */	blt .L_80162B04
/* 80162B38 0015FC18  7F C3 F3 78 */	mr r3, r30
/* 80162B3C 0015FC1C  38 9E 17 70 */	addi r4, r30, 0x1770
/* 80162B40 0015FC20  48 00 1B D9 */	bl bossPatBoxCheckCollide__12zNPCBPatrickFP10bossPatBox
/* 80162B44 0015FC24  C0 1E 17 8C */	lfs f0, 0x178c(r30)
/* 80162B48 0015FC28  3C 60 80 3C */	lis r3, globals@ha
/* 80162B4C 0015FC2C  7F D9 F3 78 */	mr r25, r30
/* 80162B50 0015FC30  3B 41 00 88 */	addi r26, r1, 0x88
/* 80162B54 0015FC34  EC 00 E8 2A */	fadds f0, f0, f29
/* 80162B58 0015FC38  3B A3 05 58 */	addi r29, r3, globals@l
/* 80162B5C 0015FC3C  3B 60 00 00 */	li r27, 0x0
/* 80162B60 0015FC40  D0 1E 17 8C */	stfs f0, 0x178c(r30)
/* 80162B64 0015FC44  C0 1E 17 90 */	lfs f0, 0x1790(r30)
/* 80162B68 0015FC48  EC 00 E8 2A */	fadds f0, f0, f29
/* 80162B6C 0015FC4C  D0 1E 17 90 */	stfs f0, 0x1790(r30)
/* 80162B70 0015FC50  C0 1E 13 C0 */	lfs f0, 0x13c0(r30)
/* 80162B74 0015FC54  EC 00 E8 2A */	fadds f0, f0, f29
/* 80162B78 0015FC58  D0 1E 13 C0 */	stfs f0, 0x13c0(r30)
.L_80162B7C:
/* 80162B7C 0015FC5C  80 19 03 A4 */	lwz r0, 0x3a4(r25)
/* 80162B80 0015FC60  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80162B84 0015FC64  41 82 02 E0 */	beq .L_80162E64
/* 80162B88 0015FC68  80 1E 02 34 */	lwz r0, 0x234(r30)
/* 80162B8C 0015FC6C  60 00 00 01 */	ori r0, r0, 0x1
/* 80162B90 0015FC70  90 1E 02 34 */	stw r0, 0x234(r30)
/* 80162B94 0015FC74  80 19 03 A4 */	lwz r0, 0x3a4(r25)
/* 80162B98 0015FC78  54 00 07 7B */	rlwinm. r0, r0, 0, 29, 29
/* 80162B9C 0015FC7C  41 82 00 4C */	beq .L_80162BE8
/* 80162BA0 0015FC80  C0 19 03 78 */	lfs f0, 0x378(r25)
/* 80162BA4 0015FC84  EC 00 E8 2A */	fadds f0, f0, f29
/* 80162BA8 0015FC88  D0 19 03 78 */	stfs f0, 0x378(r25)
/* 80162BAC 0015FC8C  C0 39 03 78 */	lfs f1, 0x378(r25)
/* 80162BB0 0015FC90  C0 02 A9 C0 */	lfs f0, "@831"@sda21(r2)
/* 80162BB4 0015FC94  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80162BB8 0015FC98  40 81 00 10 */	ble .L_80162BC8
/* 80162BBC 0015FC9C  38 00 00 00 */	li r0, 0x0
/* 80162BC0 0015FCA0  90 19 03 A4 */	stw r0, 0x3a4(r25)
/* 80162BC4 0015FCA4  48 00 02 A0 */	b .L_80162E64
.L_80162BC8:
/* 80162BC8 0015FCA8  80 19 03 A4 */	lwz r0, 0x3a4(r25)
/* 80162BCC 0015FCAC  54 00 07 39 */	rlwinm. r0, r0, 0, 28, 28
/* 80162BD0 0015FCB0  41 82 02 94 */	beq .L_80162E64
/* 80162BD4 0015FCB4  FC 20 E8 90 */	fmr f1, f29
/* 80162BD8 0015FCB8  38 79 03 54 */	addi r3, r25, 0x354
/* 80162BDC 0015FCBC  38 99 03 94 */	addi r4, r25, 0x394
/* 80162BE0 0015FCC0  4B EB 24 79 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 80162BE4 0015FCC4  48 00 02 80 */	b .L_80162E64
.L_80162BE8:
/* 80162BE8 0015FCC8  C0 19 03 78 */	lfs f0, 0x378(r25)
/* 80162BEC 0015FCCC  EC 00 E8 2A */	fadds f0, f0, f29
/* 80162BF0 0015FCD0  D0 19 03 78 */	stfs f0, 0x378(r25)
/* 80162BF4 0015FCD4  C0 39 03 78 */	lfs f1, 0x378(r25)
/* 80162BF8 0015FCD8  C0 02 A9 D8 */	lfs f0, "@891"@sda21(r2)
/* 80162BFC 0015FCDC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80162C00 0015FCE0  40 81 00 10 */	ble .L_80162C10
/* 80162C04 0015FCE4  38 00 00 00 */	li r0, 0x0
/* 80162C08 0015FCE8  90 19 03 A4 */	stw r0, 0x3a4(r25)
/* 80162C0C 0015FCEC  48 00 02 58 */	b .L_80162E64
.L_80162C10:
/* 80162C10 0015FCF0  C0 59 03 74 */	lfs f2, 0x374(r25)
/* 80162C14 0015FCF4  FC 01 10 40 */	fcmpo cr0, f1, f2
/* 80162C18 0015FCF8  40 81 02 4C */	ble .L_80162E64
/* 80162C1C 0015FCFC  80 79 03 A4 */	lwz r3, 0x3a4(r25)
/* 80162C20 0015FD00  54 60 07 BD */	rlwinm. r0, r3, 0, 30, 30
/* 80162C24 0015FD04  41 82 01 18 */	beq .L_80162D3C
/* 80162C28 0015FD08  C0 39 03 8C */	lfs f1, 0x38c(r25)
/* 80162C2C 0015FD0C  C0 02 AA 80 */	lfs f0, "@1676"@sda21(r2)
/* 80162C30 0015FD10  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80162C34 0015FD14  40 81 00 F0 */	ble .L_80162D24
/* 80162C38 0015FD18  60 60 00 04 */	ori r0, r3, 0x4
/* 80162C3C 0015FD1C  38 79 03 54 */	addi r3, r25, 0x354
/* 80162C40 0015FD20  90 19 03 A4 */	stw r0, 0x3a4(r25)
/* 80162C44 0015FD24  80 9E 02 D4 */	lwz r4, 0x2d4(r30)
/* 80162C48 0015FD28  C0 42 A9 D8 */	lfs f2, "@891"@sda21(r2)
/* 80162C4C 0015FD2C  C0 04 00 28 */	lfs f0, 0x28(r4)
/* 80162C50 0015FD30  C0 39 03 74 */	lfs f1, 0x374(r25)
/* 80162C54 0015FD34  EF 42 00 32 */	fmuls f26, f2, f0
/* 80162C58 0015FD38  4B EA CD F9 */	bl xParabolaRecenter__FP9xParabolaf
/* 80162C5C 0015FD3C  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80162C60 0015FD40  38 61 00 20 */	addi r3, r1, 0x20
/* 80162C64 0015FD44  D0 19 03 78 */	stfs f0, 0x378(r25)
/* 80162C68 0015FD48  C0 19 03 60 */	lfs f0, 0x360(r25)
/* 80162C6C 0015FD4C  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80162C70 0015FD50  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80162C74 0015FD54  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80162C78 0015FD58  C0 19 03 68 */	lfs f0, 0x368(r25)
/* 80162C7C 0015FD5C  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80162C80 0015FD60  4B EA B9 D1 */	bl xVec3Length__FPC5xVec3
/* 80162C84 0015FD64  C0 02 AA 60 */	lfs f0, "@1668"@sda21(r2)
/* 80162C88 0015FD68  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80162C8C 0015FD6C  40 81 00 10 */	ble .L_80162C9C
/* 80162C90 0015FD70  EC 3A 08 24 */	fdivs f1, f26, f1
/* 80162C94 0015FD74  38 61 00 20 */	addi r3, r1, 0x20
/* 80162C98 0015FD78  4B EB 8C A1 */	bl xVec3SMulBy__FP5xVec3f
.L_80162C9C:
/* 80162C9C 0015FD7C  C0 39 03 54 */	lfs f1, 0x354(r25)
/* 80162CA0 0015FD80  C0 1E 02 D8 */	lfs f0, 0x2d8(r30)
/* 80162CA4 0015FD84  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80162CA8 0015FD88  41 81 00 2C */	bgt .L_80162CD4
/* 80162CAC 0015FD8C  C0 79 03 5C */	lfs f3, 0x35c(r25)
/* 80162CB0 0015FD90  C0 5E 02 E0 */	lfs f2, 0x2e0(r30)
/* 80162CB4 0015FD94  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 80162CB8 0015FD98  41 81 00 1C */	bgt .L_80162CD4
/* 80162CBC 0015FD9C  FC 00 00 50 */	fneg f0, f0
/* 80162CC0 0015FDA0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80162CC4 0015FDA4  41 80 00 10 */	blt .L_80162CD4
/* 80162CC8 0015FDA8  FC 00 10 50 */	fneg f0, f2
/* 80162CCC 0015FDAC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80162CD0 0015FDB0  40 80 00 10 */	bge .L_80162CE0
.L_80162CD4:
/* 80162CD4 0015FDB4  38 79 03 54 */	addi r3, r25, 0x354
/* 80162CD8 0015FDB8  38 81 00 20 */	addi r4, r1, 0x20
/* 80162CDC 0015FDBC  4B EA BA 79 */	bl xVec3AddTo__FP5xVec3PC5xVec3
.L_80162CE0:
/* 80162CE0 0015FDC0  7F C3 F3 78 */	mr r3, r30
/* 80162CE4 0015FDC4  38 99 03 54 */	addi r4, r25, 0x354
/* 80162CE8 0015FDC8  48 00 10 B5 */	bl playSplat__12zNPCBPatrickFP5xVec3
/* 80162CEC 0015FDCC  80 19 03 A4 */	lwz r0, 0x3a4(r25)
/* 80162CF0 0015FDD0  54 00 07 39 */	rlwinm. r0, r0, 0, 28, 28
/* 80162CF4 0015FDD4  41 82 01 70 */	beq .L_80162E64
/* 80162CF8 0015FDD8  80 99 03 A0 */	lwz r4, 0x3a0(r25)
/* 80162CFC 0015FDDC  7F C3 F3 78 */	mr r3, r30
/* 80162D00 0015FDE0  38 B9 03 54 */	addi r5, r25, 0x354
/* 80162D04 0015FDE4  48 00 17 A1 */	bl ConveyorTimeLeft__12zNPCBPatrickFP9zPlatformP5xVec3
/* 80162D08 0015FDE8  C0 42 A9 D8 */	lfs f2, "@891"@sda21(r2)
/* 80162D0C 0015FDEC  C0 19 03 78 */	lfs f0, 0x378(r25)
/* 80162D10 0015FDF0  EC 22 08 28 */	fsubs f1, f2, f1
/* 80162D14 0015FDF4  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80162D18 0015FDF8  40 80 01 4C */	bge .L_80162E64
/* 80162D1C 0015FDFC  D0 39 03 78 */	stfs f1, 0x378(r25)
/* 80162D20 0015FE00  48 00 01 44 */	b .L_80162E64
.L_80162D24:
/* 80162D24 0015FE04  38 00 00 00 */	li r0, 0x0
/* 80162D28 0015FE08  7F C3 F3 78 */	mr r3, r30
/* 80162D2C 0015FE0C  90 19 03 A4 */	stw r0, 0x3a4(r25)
/* 80162D30 0015FE10  38 99 03 7C */	addi r4, r25, 0x37c
/* 80162D34 0015FE14  48 00 10 69 */	bl playSplat__12zNPCBPatrickFP5xVec3
/* 80162D38 0015FE18  48 00 01 2C */	b .L_80162E64
.L_80162D3C:
/* 80162D3C 0015FE1C  C0 02 AA 84 */	lfs f0, "@1677"@sda21(r2)
/* 80162D40 0015FE20  EC 02 00 28 */	fsubs f0, f2, f0
/* 80162D44 0015FE24  D0 19 03 70 */	stfs f0, 0x370(r25)
/* 80162D48 0015FE28  4B EC DF 41 */	bl xurand__Fv
/* 80162D4C 0015FE2C  C0 62 AA 88 */	lfs f3, "@1678"@sda21(r2)
/* 80162D50 0015FE30  38 79 03 54 */	addi r3, r25, 0x354
/* 80162D54 0015FE34  C0 42 A9 C0 */	lfs f2, "@831"@sda21(r2)
/* 80162D58 0015FE38  38 A1 00 74 */	addi r5, r1, 0x74
/* 80162D5C 0015FE3C  C0 19 03 74 */	lfs f0, 0x374(r25)
/* 80162D60 0015FE40  EC 23 10 7A */	fmadds f1, f3, f1, f2
/* 80162D64 0015FE44  EC 00 08 2A */	fadds f0, f0, f1
/* 80162D68 0015FE48  D0 19 03 74 */	stfs f0, 0x374(r25)
/* 80162D6C 0015FE4C  80 9D 1F C0 */	lwz r4, 0x1fc0(r29)
/* 80162D70 0015FE50  80 84 00 44 */	lwz r4, 0x44(r4)
/* 80162D74 0015FE54  4B EA D2 75 */	bl xParabolaHitsEnv__FP9xParabolaPC4xEnvP7xCollis
/* 80162D78 0015FE58  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80162D7C 0015FE5C  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80162D80 0015FE60  41 82 00 24 */	beq .L_80162DA4
/* 80162D84 0015FE64  C0 01 00 84 */	lfs f0, 0x84(r1)
/* 80162D88 0015FE68  7F 44 D3 78 */	mr r4, r26
/* 80162D8C 0015FE6C  38 79 03 88 */	addi r3, r25, 0x388
/* 80162D90 0015FE70  D0 19 03 74 */	stfs f0, 0x374(r25)
/* 80162D94 0015FE74  4B EE B7 49 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 80162D98 0015FE78  80 19 03 A4 */	lwz r0, 0x3a4(r25)
/* 80162D9C 0015FE7C  60 00 00 02 */	ori r0, r0, 0x2
/* 80162DA0 0015FE80  90 19 03 A4 */	stw r0, 0x3a4(r25)
.L_80162DA4:
/* 80162DA4 0015FE84  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80162DA8 0015FE88  7F C3 F3 78 */	mr r3, r30
/* 80162DAC 0015FE8C  38 9E 03 54 */	addi r4, r30, 0x354
/* 80162DB0 0015FE90  38 A1 00 74 */	addi r5, r1, 0x74
/* 80162DB4 0015FE94  54 00 00 3C */	clrrwi r0, r0, 1
/* 80162DB8 0015FE98  90 01 00 74 */	stw r0, 0x74(r1)
/* 80162DBC 0015FE9C  48 00 17 91 */	bl ParabolaHitsConveyors__12zNPCBPatrickFP9xParabolaP7xCollis
/* 80162DC0 0015FEA0  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80162DC4 0015FEA4  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80162DC8 0015FEA8  41 82 00 9C */	beq .L_80162E64
/* 80162DCC 0015FEAC  C0 01 00 84 */	lfs f0, 0x84(r1)
/* 80162DD0 0015FEB0  D0 1E 03 74 */	stfs f0, 0x374(r30)
/* 80162DD4 0015FEB4  80 1E 03 A4 */	lwz r0, 0x3a4(r30)
/* 80162DD8 0015FEB8  60 00 00 02 */	ori r0, r0, 0x2
/* 80162DDC 0015FEBC  90 1E 03 A4 */	stw r0, 0x3a4(r30)
/* 80162DE0 0015FEC0  C0 21 00 94 */	lfs f1, 0x94(r1)
/* 80162DE4 0015FEC4  C0 02 AA 8C */	lfs f0, "@1679"@sda21(r2)
/* 80162DE8 0015FEC8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80162DEC 0015FECC  40 80 00 64 */	bge .L_80162E50
/* 80162DF0 0015FED0  C0 02 AA 90 */	lfs f0, "@1680"@sda21(r2)
/* 80162DF4 0015FED4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80162DF8 0015FED8  40 81 00 58 */	ble .L_80162E50
/* 80162DFC 0015FEDC  C0 21 00 9C */	lfs f1, 0x9c(r1)
/* 80162E00 0015FEE0  C0 02 AA 94 */	lfs f0, "@1681"@sda21(r2)
/* 80162E04 0015FEE4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80162E08 0015FEE8  40 81 00 48 */	ble .L_80162E50
/* 80162E0C 0015FEEC  80 1E 03 A4 */	lwz r0, 0x3a4(r30)
/* 80162E10 0015FEF0  38 7E 03 88 */	addi r3, r30, 0x388
/* 80162E14 0015FEF4  60 00 00 08 */	ori r0, r0, 0x8
/* 80162E18 0015FEF8  90 1E 03 A4 */	stw r0, 0x3a4(r30)
/* 80162E1C 0015FEFC  C0 22 A9 C4 */	lfs f1, "@832"@sda21(r2)
/* 80162E20 0015FF00  C0 42 A9 C0 */	lfs f2, "@831"@sda21(r2)
/* 80162E24 0015FF04  FC 60 08 90 */	fmr f3, f1
/* 80162E28 0015FF08  4B EA C1 D5 */	bl xVec3Init__FP5xVec3fff
/* 80162E2C 0015FF0C  80 01 00 7C */	lwz r0, 0x7c(r1)
/* 80162E30 0015FF10  38 7E 03 94 */	addi r3, r30, 0x394
/* 80162E34 0015FF14  90 1E 03 A0 */	stw r0, 0x3a0(r30)
/* 80162E38 0015FF18  80 9E 03 A0 */	lwz r4, 0x3a0(r30)
/* 80162E3C 0015FF1C  80 A4 00 D4 */	lwz r5, 0xd4(r4)
/* 80162E40 0015FF20  80 84 00 AC */	lwz r4, 0xac(r4)
/* 80162E44 0015FF24  C0 25 00 04 */	lfs f1, 0x4(r5)
/* 80162E48 0015FF28  4B EA 82 49 */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 80162E4C 0015FF2C  48 00 00 18 */	b .L_80162E64
.L_80162E50:
/* 80162E50 0015FF30  C0 22 A9 C4 */	lfs f1, "@832"@sda21(r2)
/* 80162E54 0015FF34  38 7E 03 88 */	addi r3, r30, 0x388
/* 80162E58 0015FF38  C0 42 A9 CC */	lfs f2, "@870"@sda21(r2)
/* 80162E5C 0015FF3C  FC 60 08 90 */	fmr f3, f1
/* 80162E60 0015FF40  4B EA C1 9D */	bl xVec3Init__FP5xVec3fff
.L_80162E64:
/* 80162E64 0015FF44  3B 7B 00 01 */	addi r27, r27, 0x1
/* 80162E68 0015FF48  3B 39 00 54 */	addi r25, r25, 0x54
/* 80162E6C 0015FF4C  2C 1B 00 32 */	cmpwi r27, 0x32
/* 80162E70 0015FF50  41 80 FD 0C */	blt .L_80162B7C
/* 80162E74 0015FF54  3A C0 00 00 */	li r22, 0x0
/* 80162E78 0015FF58  7F D5 F3 78 */	mr r21, r30
.L_80162E7C:
/* 80162E7C 0015FF5C  3A E0 00 00 */	li r23, 0x0
/* 80162E80 0015FF60  7E B4 AB 78 */	mr r20, r21
.L_80162E84:
/* 80162E84 0015FF64  FC 20 E8 90 */	fmr f1, f29
/* 80162E88 0015FF68  7F C3 F3 78 */	mr r3, r30
/* 80162E8C 0015FF6C  38 94 15 90 */	addi r4, r20, 0x1590
/* 80162E90 0015FF70  48 00 19 55 */	bl bossPatBoxUpdate__12zNPCBPatrickFP10bossPatBoxf
/* 80162E94 0015FF74  3A F7 00 01 */	addi r23, r23, 0x1
/* 80162E98 0015FF78  3A 94 00 14 */	addi r20, r20, 0x14
/* 80162E9C 0015FF7C  2C 17 00 03 */	cmpwi r23, 0x3
/* 80162EA0 0015FF80  41 80 FF E4 */	blt .L_80162E84
/* 80162EA4 0015FF84  3A D6 00 01 */	addi r22, r22, 0x1
/* 80162EA8 0015FF88  3A B5 00 3C */	addi r21, r21, 0x3c
/* 80162EAC 0015FF8C  2C 16 00 08 */	cmpwi r22, 0x8
/* 80162EB0 0015FF90  41 80 FF CC */	blt .L_80162E7C
/* 80162EB4 0015FF94  FC 20 E8 90 */	fmr f1, f29
/* 80162EB8 0015FF98  7F C3 F3 78 */	mr r3, r30
/* 80162EBC 0015FF9C  38 9E 17 70 */	addi r4, r30, 0x1770
/* 80162EC0 0015FFA0  48 00 19 25 */	bl bossPatBoxUpdate__12zNPCBPatrickFP10bossPatBoxf
/* 80162EC4 0015FFA4  C0 22 A9 C4 */	lfs f1, "@832"@sda21(r2)
/* 80162EC8 0015FFA8  38 61 00 14 */	addi r3, r1, 0x14
/* 80162ECC 0015FFAC  C0 42 AA 98 */	lfs f2, "@1682"@sda21(r2)
/* 80162ED0 0015FFB0  3A C0 00 00 */	li r22, 0x0
/* 80162ED4 0015FFB4  FC 60 08 90 */	fmr f3, f1
/* 80162ED8 0015FFB8  4B EA C1 25 */	bl xVec3Init__FP5xVec3fff
/* 80162EDC 0015FFBC  80 1E 02 B4 */	lwz r0, 0x2b4(r30)
/* 80162EE0 0015FFC0  3A E0 00 00 */	li r23, 0x0
/* 80162EE4 0015FFC4  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80162EE8 0015FFC8  41 82 00 A0 */	beq .L_80162F88
/* 80162EEC 0015FFCC  3C 60 80 3C */	lis r3, globals@ha
/* 80162EF0 0015FFD0  38 00 00 50 */	li r0, 0x50
/* 80162EF4 0015FFD4  38 63 05 58 */	addi r3, r3, globals@l
/* 80162EF8 0015FFD8  80 83 07 2C */	lwz r4, 0x72c(r3)
/* 80162EFC 0015FFDC  88 64 00 0A */	lbz r3, 0xa(r4)
/* 80162F00 0015FFE0  38 84 00 0C */	addi r4, r4, 0xc
/* 80162F04 0015FFE4  1C 63 00 50 */	mulli r3, r3, 0x50
/* 80162F08 0015FFE8  7C A4 1A 14 */	add r5, r4, r3
/* 80162F0C 0015FFEC  38 65 00 4F */	addi r3, r5, 0x4f
/* 80162F10 0015FFF0  7C 64 18 50 */	subf r3, r4, r3
/* 80162F14 0015FFF4  7C 63 03 96 */	divwu r3, r3, r0
/* 80162F18 0015FFF8  7C 69 03 A6 */	mtctr r3
/* 80162F1C 0015FFFC  7C 04 28 40 */	cmplw r4, r5
/* 80162F20 00160000  40 80 00 68 */	bge .L_80162F88
.L_80162F24:
/* 80162F24 00160004  80 04 00 00 */	lwz r0, 0x0(r4)
/* 80162F28 00160008  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80162F2C 0016000C  41 82 00 54 */	beq .L_80162F80
/* 80162F30 00160010  80 64 00 08 */	lwz r3, 0x8(r4)
/* 80162F34 00160014  28 03 00 00 */	cmplwi r3, 0x0
/* 80162F38 00160018  41 82 00 1C */	beq .L_80162F54
/* 80162F3C 0016001C  88 03 00 04 */	lbz r0, 0x4(r3)
/* 80162F40 00160020  28 00 00 0C */	cmplwi r0, 0xc
/* 80162F44 00160024  40 82 00 10 */	bne .L_80162F54
/* 80162F48 00160028  80 03 00 B8 */	lwz r0, 0xb8(r3)
/* 80162F4C 0016002C  7C 00 F0 40 */	cmplw r0, r30
/* 80162F50 00160030  41 82 00 0C */	beq .L_80162F5C
.L_80162F54:
/* 80162F54 00160034  7C 03 F0 40 */	cmplw r3, r30
/* 80162F58 00160038  40 82 00 28 */	bne .L_80162F80
.L_80162F5C:
/* 80162F5C 0016003C  80 1E 02 B4 */	lwz r0, 0x2b4(r30)
/* 80162F60 00160040  3A C0 00 01 */	li r22, 0x1
/* 80162F64 00160044  3A E0 00 01 */	li r23, 0x1
/* 80162F68 00160048  60 00 00 02 */	ori r0, r0, 0x2
/* 80162F6C 0016004C  90 1E 02 B4 */	stw r0, 0x2b4(r30)
/* 80162F70 00160050  80 1E 02 B4 */	lwz r0, 0x2b4(r30)
/* 80162F74 00160054  54 00 00 3C */	clrrwi r0, r0, 1
/* 80162F78 00160058  90 1E 02 B4 */	stw r0, 0x2b4(r30)
/* 80162F7C 0016005C  48 00 01 6C */	b .L_801630E8
.L_80162F80:
/* 80162F80 00160060  38 84 00 50 */	addi r4, r4, 0x50
/* 80162F84 00160064  42 00 FF A0 */	bdnz .L_80162F24
.L_80162F88:
/* 80162F88 00160068  3C 60 80 3C */	lis r3, globals@ha
/* 80162F8C 0016006C  38 63 05 58 */	addi r3, r3, globals@l
/* 80162F90 00160070  80 03 16 D4 */	lwz r0, 0x16d4(r3)
/* 80162F94 00160074  2C 00 00 00 */	cmpwi r0, 0x0
/* 80162F98 00160078  40 82 00 8C */	bne .L_80163024
/* 80162F9C 0016007C  7F D4 F3 78 */	mr r20, r30
/* 80162FA0 00160080  3A A3 07 68 */	addi r21, r3, 0x768
/* 80162FA4 00160084  3B 00 00 00 */	li r24, 0x0
.L_80162FA8:
/* 80162FA8 00160088  80 74 03 A4 */	lwz r3, 0x3a4(r20)
/* 80162FAC 0016008C  54 60 07 FF */	clrlwi. r0, r3, 31
/* 80162FB0 00160090  41 82 00 64 */	beq .L_80163014
/* 80162FB4 00160094  54 60 07 7B */	rlwinm. r0, r3, 0, 29, 29
/* 80162FB8 00160098  41 82 00 5C */	beq .L_80163014
/* 80162FBC 0016009C  7E A4 AB 78 */	mr r4, r21
/* 80162FC0 001600A0  38 74 03 7C */	addi r3, r20, 0x37c
/* 80162FC4 001600A4  4B EE F5 61 */	bl xVec3Dist2__FPC5xVec3PC5xVec3
/* 80162FC8 001600A8  C0 02 A9 C0 */	lfs f0, "@831"@sda21(r2)
/* 80162FCC 001600AC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80162FD0 001600B0  40 80 00 44 */	bge .L_80163014
/* 80162FD4 001600B4  80 7E 02 B4 */	lwz r3, 0x2b4(r30)
/* 80162FD8 001600B8  1C 98 00 54 */	mulli r4, r24, 0x54
/* 80162FDC 001600BC  38 00 00 00 */	li r0, 0x0
/* 80162FE0 001600C0  60 63 00 02 */	ori r3, r3, 0x2
/* 80162FE4 001600C4  90 7E 02 B4 */	stw r3, 0x2b4(r30)
/* 80162FE8 001600C8  7C BE 22 14 */	add r5, r30, r4
/* 80162FEC 001600CC  38 84 03 7C */	addi r4, r4, 0x37c
/* 80162FF0 001600D0  7F C3 F3 78 */	mr r3, r30
/* 80162FF4 001600D4  90 05 03 A4 */	stw r0, 0x3a4(r5)
/* 80162FF8 001600D8  7C 9E 22 14 */	add r4, r30, r4
/* 80162FFC 001600DC  3A C0 00 01 */	li r22, 0x1
/* 80163000 001600E0  48 00 0D 9D */	bl playSplat__12zNPCBPatrickFP5xVec3
/* 80163004 001600E4  80 1E 02 B4 */	lwz r0, 0x2b4(r30)
/* 80163008 001600E8  54 00 00 3C */	clrrwi r0, r0, 1
/* 8016300C 001600EC  90 1E 02 B4 */	stw r0, 0x2b4(r30)
/* 80163010 001600F0  48 00 00 D8 */	b .L_801630E8
.L_80163014:
/* 80163014 001600F4  3B 18 00 01 */	addi r24, r24, 0x1
/* 80163018 001600F8  3A 94 00 54 */	addi r20, r20, 0x54
/* 8016301C 001600FC  2C 18 00 32 */	cmpwi r24, 0x32
/* 80163020 00160100  41 80 FF 88 */	blt .L_80162FA8
.L_80163024:
/* 80163024 00160104  C0 22 A9 C4 */	lfs f1, "@832"@sda21(r2)
/* 80163028 00160108  38 61 00 08 */	addi r3, r1, 0x8
/* 8016302C 0016010C  C0 42 A9 C0 */	lfs f2, "@831"@sda21(r2)
/* 80163030 00160110  FC 60 08 90 */	fmr f3, f1
/* 80163034 00160114  4B EA BF C9 */	bl xVec3Init__FP5xVec3fff
/* 80163038 00160118  3C 60 80 3C */	lis r3, globals@ha
/* 8016303C 0016011C  7F D4 F3 78 */	mr r20, r30
/* 80163040 00160120  38 63 05 58 */	addi r3, r3, globals@l
/* 80163044 00160124  3B 00 00 00 */	li r24, 0x0
/* 80163048 00160128  3A A3 07 68 */	addi r21, r3, 0x768
.L_8016304C:
/* 8016304C 0016012C  80 74 03 A4 */	lwz r3, 0x3a4(r20)
/* 80163050 00160130  54 60 07 FF */	clrlwi. r0, r3, 31
/* 80163054 00160134  41 82 00 84 */	beq .L_801630D8
/* 80163058 00160138  54 60 07 7B */	rlwinm. r0, r3, 0, 29, 29
/* 8016305C 0016013C  40 82 00 7C */	bne .L_801630D8
/* 80163060 00160140  4B EC DC 09 */	bl xrand__Fv
/* 80163064 00160144  54 60 05 AD */	rlwinm. r0, r3, 0, 22, 22
/* 80163068 00160148  41 82 00 18 */	beq .L_80163080
/* 8016306C 0016014C  C0 22 A9 C0 */	lfs f1, "@831"@sda21(r2)
/* 80163070 00160150  38 74 03 7C */	addi r3, r20, 0x37c
/* 80163074 00160154  38 81 00 08 */	addi r4, r1, 0x8
/* 80163078 00160158  38 A0 00 01 */	li r5, 0x1
/* 8016307C 0016015C  48 00 E2 CD */	bl zParPTankSpawnBubbles__FP5xVec3P5xVec3Uif
.L_80163080:
/* 80163080 00160160  7E A4 AB 78 */	mr r4, r21
/* 80163084 00160164  38 74 03 7C */	addi r3, r20, 0x37c
/* 80163088 00160168  4B EE F4 9D */	bl xVec3Dist2__FPC5xVec3PC5xVec3
/* 8016308C 0016016C  C0 02 A9 C0 */	lfs f0, "@831"@sda21(r2)
/* 80163090 00160170  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80163094 00160174  40 80 00 44 */	bge .L_801630D8
/* 80163098 00160178  80 7E 02 B4 */	lwz r3, 0x2b4(r30)
/* 8016309C 0016017C  1C 98 00 54 */	mulli r4, r24, 0x54
/* 801630A0 00160180  38 00 00 00 */	li r0, 0x0
/* 801630A4 00160184  60 63 00 02 */	ori r3, r3, 0x2
/* 801630A8 00160188  90 7E 02 B4 */	stw r3, 0x2b4(r30)
/* 801630AC 0016018C  7C BE 22 14 */	add r5, r30, r4
/* 801630B0 00160190  38 84 03 7C */	addi r4, r4, 0x37c
/* 801630B4 00160194  7F C3 F3 78 */	mr r3, r30
/* 801630B8 00160198  90 05 03 A4 */	stw r0, 0x3a4(r5)
/* 801630BC 0016019C  7C 9E 22 14 */	add r4, r30, r4
/* 801630C0 001601A0  3A C0 00 01 */	li r22, 0x1
/* 801630C4 001601A4  48 00 0C D9 */	bl playSplat__12zNPCBPatrickFP5xVec3
/* 801630C8 001601A8  80 1E 02 B4 */	lwz r0, 0x2b4(r30)
/* 801630CC 001601AC  54 00 00 3C */	clrrwi r0, r0, 1
/* 801630D0 001601B0  90 1E 02 B4 */	stw r0, 0x2b4(r30)
/* 801630D4 001601B4  48 00 00 14 */	b .L_801630E8
.L_801630D8:
/* 801630D8 001601B8  3B 18 00 01 */	addi r24, r24, 0x1
/* 801630DC 001601BC  3A 94 00 54 */	addi r20, r20, 0x54
/* 801630E0 001601C0  2C 18 00 32 */	cmpwi r24, 0x32
/* 801630E4 001601C4  41 80 FF 68 */	blt .L_8016304C
.L_801630E8:
/* 801630E8 001601C8  28 16 00 00 */	cmplwi r22, 0x0
/* 801630EC 001601CC  41 82 01 10 */	beq .L_801631FC
/* 801630F0 001601D0  38 A1 00 14 */	addi r5, r1, 0x14
/* 801630F4 001601D4  38 60 00 00 */	li r3, 0x0
/* 801630F8 001601D8  38 80 00 01 */	li r4, 0x1
/* 801630FC 001601DC  4B F1 31 39 */	bl zEntPlayer_Damage__FP5xBaseUiPC5xVec3
/* 80163100 001601E0  2C 03 00 00 */	cmpwi r3, 0x0
/* 80163104 001601E4  41 82 00 F8 */	beq .L_801631FC
/* 80163108 001601E8  4B EC DB 61 */	bl xrand__Fv
/* 8016310C 001601EC  3C 80 80 3C */	lis r4, globals@ha
/* 80163110 001601F0  38 84 05 58 */	addi r4, r4, globals@l
/* 80163114 001601F4  80 04 16 B0 */	lwz r0, 0x16b0(r4)
/* 80163118 001601F8  28 00 00 01 */	cmplwi r0, 0x1
/* 8016311C 001601FC  40 82 00 3C */	bne .L_80163158
/* 80163120 00160200  80 1E 02 BC */	lwz r0, 0x2bc(r30)
/* 80163124 00160204  2C 00 00 02 */	cmpwi r0, 0x2
/* 80163128 00160208  40 82 00 30 */	bne .L_80163158
/* 8016312C 0016020C  80 7E 18 E4 */	lwz r3, 0x18e4(r30)
/* 80163130 00160210  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80163134 00160214  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80163138 00160218  38 A0 00 00 */	li r5, 0x0
/* 8016313C 0016021C  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80163140 00160220  38 C0 FF FF */	li r6, -0x1
/* 80163144 00160224  80 84 00 0C */	lwz r4, 0xc(r4)
/* 80163148 00160228  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8016314C 0016022C  7D 89 03 A6 */	mtctr r12
/* 80163150 00160230  4E 80 04 21 */	bctrl
/* 80163154 00160234  48 00 00 A8 */	b .L_801631FC
.L_80163158:
/* 80163158 00160238  2C 17 00 00 */	cmpwi r23, 0x0
/* 8016315C 0016023C  41 82 00 38 */	beq .L_80163194
/* 80163160 00160240  54 60 04 A7 */	rlwinm. r0, r3, 0, 18, 19
/* 80163164 00160244  40 82 00 30 */	bne .L_80163194
/* 80163168 00160248  80 7E 18 E4 */	lwz r3, 0x18e4(r30)
/* 8016316C 0016024C  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80163170 00160250  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80163174 00160254  38 A0 00 00 */	li r5, 0x0
/* 80163178 00160258  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 8016317C 0016025C  38 C0 FF FF */	li r6, -0x1
/* 80163180 00160260  80 84 00 F4 */	lwz r4, 0xf4(r4)
/* 80163184 00160264  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80163188 00160268  7D 89 03 A6 */	mtctr r12
/* 8016318C 0016026C  4E 80 04 21 */	bctrl
/* 80163190 00160270  48 00 00 6C */	b .L_801631FC
.L_80163194:
/* 80163194 00160274  54 60 06 FE */	clrlwi r0, r3, 27
/* 80163198 00160278  28 00 00 0A */	cmplwi r0, 0xa
/* 8016319C 0016027C  41 81 00 30 */	bgt .L_801631CC
/* 801631A0 00160280  80 7E 18 E4 */	lwz r3, 0x18e4(r30)
/* 801631A4 00160284  3C 80 80 2A */	lis r4, sNFComment@ha
/* 801631A8 00160288  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 801631AC 0016028C  38 A0 00 00 */	li r5, 0x0
/* 801631B0 00160290  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 801631B4 00160294  38 C0 FF FF */	li r6, -0x1
/* 801631B8 00160298  80 84 01 0C */	lwz r4, 0x10c(r4)
/* 801631BC 0016029C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801631C0 001602A0  7D 89 03 A6 */	mtctr r12
/* 801631C4 001602A4  4E 80 04 21 */	bctrl
/* 801631C8 001602A8  48 00 00 34 */	b .L_801631FC
.L_801631CC:
/* 801631CC 001602AC  28 00 00 14 */	cmplwi r0, 0x14
/* 801631D0 001602B0  41 81 00 2C */	bgt .L_801631FC
/* 801631D4 001602B4  80 7E 18 E4 */	lwz r3, 0x18e4(r30)
/* 801631D8 001602B8  3C 80 80 2A */	lis r4, sNFComment@ha
/* 801631DC 001602BC  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 801631E0 001602C0  38 A0 00 00 */	li r5, 0x0
/* 801631E4 001602C4  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 801631E8 001602C8  38 C0 FF FF */	li r6, -0x1
/* 801631EC 001602CC  80 84 00 BC */	lwz r4, 0xbc(r4)
/* 801631F0 001602D0  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801631F4 001602D4  7D 89 03 A6 */	mtctr r12
/* 801631F8 001602D8  4E 80 04 21 */	bctrl
.L_801631FC:
/* 801631FC 001602DC  3C 60 80 3C */	lis r3, globals@ha
/* 80163200 001602E0  80 9E 02 BC */	lwz r4, 0x2bc(r30)
/* 80163204 001602E4  38 63 05 58 */	addi r3, r3, globals@l
/* 80163208 001602E8  80 63 17 88 */	lwz r3, 0x1788(r3)
/* 8016320C 001602EC  7C 93 23 78 */	mr r19, r4
/* 80163210 001602F0  28 03 00 00 */	cmplwi r3, 0x0
/* 80163214 001602F4  40 82 00 54 */	bne .L_80163268
/* 80163218 001602F8  2C 04 00 01 */	cmpwi r4, 0x1
/* 8016321C 001602FC  40 82 00 18 */	bne .L_80163234
/* 80163220 00160300  80 1E 02 B8 */	lwz r0, 0x2b8(r30)
/* 80163224 00160304  2C 00 00 06 */	cmpwi r0, 0x6
/* 80163228 00160308  41 81 00 40 */	bgt .L_80163268
/* 8016322C 0016030C  3A 60 00 02 */	li r19, 0x2
/* 80163230 00160310  48 00 00 38 */	b .L_80163268
.L_80163234:
/* 80163234 00160314  2C 04 00 02 */	cmpwi r4, 0x2
/* 80163238 00160318  40 82 00 18 */	bne .L_80163250
/* 8016323C 0016031C  80 1E 02 C4 */	lwz r0, 0x2c4(r30)
/* 80163240 00160320  2C 00 00 03 */	cmpwi r0, 0x3
/* 80163244 00160324  41 80 00 24 */	blt .L_80163268
/* 80163248 00160328  3A 60 00 03 */	li r19, 0x3
/* 8016324C 0016032C  48 00 00 1C */	b .L_80163268
.L_80163250:
/* 80163250 00160330  2C 04 00 03 */	cmpwi r4, 0x3
/* 80163254 00160334  40 82 00 14 */	bne .L_80163268
/* 80163258 00160338  80 1E 02 B8 */	lwz r0, 0x2b8(r30)
/* 8016325C 0016033C  2C 00 00 00 */	cmpwi r0, 0x0
/* 80163260 00160340  41 81 00 08 */	bgt .L_80163268
/* 80163264 00160344  3A 60 00 04 */	li r19, 0x4
.L_80163268:
/* 80163268 00160348  7C 13 20 00 */	cmpw r19, r4
/* 8016326C 0016034C  41 82 00 A0 */	beq .L_8016330C
/* 80163270 00160350  80 1E 02 B4 */	lwz r0, 0x2b4(r30)
/* 80163274 00160354  54 00 06 B5 */	rlwinm. r0, r0, 0, 26, 26
/* 80163278 00160358  41 82 00 94 */	beq .L_8016330C
/* 8016327C 0016035C  28 03 00 00 */	cmplwi r3, 0x0
/* 80163280 00160360  40 82 00 8C */	bne .L_8016330C
/* 80163284 00160364  3C 60 80 3C */	lis r3, globals@ha
/* 80163288 00160368  38 63 05 58 */	addi r3, r3, globals@l
/* 8016328C 0016036C  80 03 16 B0 */	lwz r0, 0x16b0(r3)
/* 80163290 00160370  28 00 00 00 */	cmplwi r0, 0x0
/* 80163294 00160374  41 82 00 78 */	beq .L_8016330C
/* 80163298 00160378  4B F1 F8 21 */	bl zEntPlayerDyingInGoo__Fv
/* 8016329C 0016037C  54 60 06 3F */	clrlwi. r0, r3, 24
/* 801632A0 00160380  40 82 00 6C */	bne .L_8016330C
/* 801632A4 00160384  80 1E 02 B4 */	lwz r0, 0x2b4(r30)
/* 801632A8 00160388  7F C3 F3 78 */	mr r3, r30
/* 801632AC 0016038C  7E 64 9B 78 */	mr r4, r19
/* 801632B0 00160390  60 00 01 00 */	ori r0, r0, 0x100
/* 801632B4 00160394  90 1E 02 B4 */	stw r0, 0x2b4(r30)
/* 801632B8 00160398  48 00 0D 15 */	bl gotoRound__12zNPCBPatrickFi
/* 801632BC 0016039C  2C 13 00 02 */	cmpwi r19, 0x2
/* 801632C0 001603A0  41 82 00 30 */	beq .L_801632F0
/* 801632C4 001603A4  40 80 00 10 */	bge .L_801632D4
/* 801632C8 001603A8  2C 13 00 01 */	cmpwi r19, 0x1
/* 801632CC 001603AC  40 80 00 14 */	bge .L_801632E0
/* 801632D0 001603B0  48 00 00 3C */	b .L_8016330C
.L_801632D4:
/* 801632D4 001603B4  2C 13 00 04 */	cmpwi r19, 0x4
/* 801632D8 001603B8  40 80 00 34 */	bge .L_8016330C
/* 801632DC 001603BC  48 00 00 24 */	b .L_80163300
.L_801632E0:
/* 801632E0 001603C0  80 7E 18 D0 */	lwz r3, 0x18d0(r30)
/* 801632E4 001603C4  38 80 00 BE */	li r4, 0xbe
/* 801632E8 001603C8  4B EB C3 09 */	bl zEntEvent__FP5xBaseUi
/* 801632EC 001603CC  48 00 00 20 */	b .L_8016330C
.L_801632F0:
/* 801632F0 001603D0  80 7E 18 D4 */	lwz r3, 0x18d4(r30)
/* 801632F4 001603D4  38 80 00 BE */	li r4, 0xbe
/* 801632F8 001603D8  4B EB C2 F9 */	bl zEntEvent__FP5xBaseUi
/* 801632FC 001603DC  48 00 00 10 */	b .L_8016330C
.L_80163300:
/* 80163300 001603E0  80 7E 18 D8 */	lwz r3, 0x18d8(r30)
/* 80163304 001603E4  38 80 00 BE */	li r4, 0xbe
/* 80163308 001603E8  4B EB C2 E9 */	bl zEntEvent__FP5xBaseUi
.L_8016330C:
/* 8016330C 001603EC  C0 1E 18 EC */	lfs f0, 0x18ec(r30)
/* 80163310 001603F0  3C 60 80 3C */	lis r3, globals@ha
/* 80163314 001603F4  38 63 05 58 */	addi r3, r3, globals@l
/* 80163318 001603F8  EC 00 E8 28 */	fsubs f0, f0, f29
/* 8016331C 001603FC  D0 1E 18 EC */	stfs f0, 0x18ec(r30)
/* 80163320 00160400  C0 23 17 08 */	lfs f1, 0x1708(r3)
/* 80163324 00160404  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80163328 00160408  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8016332C 0016040C  41 82 00 34 */	beq .L_80163360
/* 80163330 00160410  80 1E 18 E8 */	lwz r0, 0x18e8(r30)
/* 80163334 00160414  54 00 05 6B */	rlwinm. r0, r0, 0, 21, 21
/* 80163338 00160418  40 82 00 18 */	bne .L_80163350
/* 8016333C 0016041C  80 7E 18 F0 */	lwz r3, 0x18f0(r30)
/* 80163340 00160420  38 00 00 00 */	li r0, 0x0
/* 80163344 00160424  38 63 00 01 */	addi r3, r3, 0x1
/* 80163348 00160428  90 7E 18 F0 */	stw r3, 0x18f0(r30)
/* 8016334C 0016042C  90 1E 18 F4 */	stw r0, 0x18f4(r30)
.L_80163350:
/* 80163350 00160430  80 1E 18 E8 */	lwz r0, 0x18e8(r30)
/* 80163354 00160434  60 00 04 00 */	ori r0, r0, 0x400
/* 80163358 00160438  90 1E 18 E8 */	stw r0, 0x18e8(r30)
/* 8016335C 0016043C  48 00 00 10 */	b .L_8016336C
.L_80163360:
/* 80163360 00160440  80 1E 18 E8 */	lwz r0, 0x18e8(r30)
/* 80163364 00160444  54 00 05 A8 */	rlwinm r0, r0, 0, 22, 20
/* 80163368 00160448  90 1E 18 E8 */	stw r0, 0x18e8(r30)
.L_8016336C:
/* 8016336C 0016044C  FC 20 E8 90 */	fmr f1, f29
/* 80163370 00160450  7F C3 F3 78 */	mr r3, r30
/* 80163374 00160454  7F E4 FB 78 */	mr r4, r31
/* 80163378 00160458  4B F8 CD 79 */	bl Process__10zNPCCommonFP6xScenef
/* 8016337C 0016045C  E3 E1 01 78 */	psq_l f31, 0x178(r1), 0, qr0
/* 80163380 00160460  CB E1 01 70 */	lfd f31, 0x170(r1)
/* 80163384 00160464  E3 C1 01 68 */	psq_l f30, 0x168(r1), 0, qr0
/* 80163388 00160468  CB C1 01 60 */	lfd f30, 0x160(r1)
/* 8016338C 0016046C  E3 A1 01 58 */	psq_l f29, 0x158(r1), 0, qr0
/* 80163390 00160470  CB A1 01 50 */	lfd f29, 0x150(r1)
/* 80163394 00160474  E3 81 01 48 */	psq_l f28, 0x148(r1), 0, qr0
/* 80163398 00160478  CB 81 01 40 */	lfd f28, 0x140(r1)
/* 8016339C 0016047C  E3 61 01 38 */	psq_l f27, 0x138(r1), 0, qr0
/* 801633A0 00160480  CB 61 01 30 */	lfd f27, 0x130(r1)
/* 801633A4 00160484  E3 41 01 28 */	psq_l f26, 0x128(r1), 0, qr0
/* 801633A8 00160488  CB 41 01 20 */	lfd f26, 0x120(r1)
/* 801633AC 0016048C  BA 61 00 EC */	lmw r19, 0xec(r1)
/* 801633B0 00160490  80 01 01 84 */	lwz r0, 0x184(r1)
/* 801633B4 00160494  7C 08 03 A6 */	mtlr r0
/* 801633B8 00160498  38 21 01 80 */	addi r1, r1, 0x180
/* 801633BC 0016049C  4E 80 00 20 */	blr
.endfn Process__12zNPCBPatrickFP6xScenef

# zNPCBPatrick::DuploNotice(en_SM_NOTICES, void*)
.fn DuploNotice__12zNPCBPatrickF13en_SM_NOTICESPv, global
/* 801633C0 001604A0  2C 04 00 01 */	cmpwi r4, 0x1
/* 801633C4 001604A4  4C 82 00 20 */	bnelr
/* 801633C8 001604A8  80 03 13 D4 */	lwz r0, 0x13d4(r3)
/* 801633CC 001604AC  7C 00 28 40 */	cmplw r0, r5
/* 801633D0 001604B0  40 82 00 10 */	bne .L_801633E0
/* 801633D4 001604B4  80 03 13 C8 */	lwz r0, 0x13c8(r3)
/* 801633D8 001604B8  60 00 00 01 */	ori r0, r0, 0x1
/* 801633DC 001604BC  90 03 13 C8 */	stw r0, 0x13c8(r3)
.L_801633E0:
/* 801633E0 001604C0  80 03 13 D8 */	lwz r0, 0x13d8(r3)
/* 801633E4 001604C4  7C 00 28 40 */	cmplw r0, r5
/* 801633E8 001604C8  40 82 00 10 */	bne .L_801633F8
/* 801633EC 001604CC  80 03 13 CC */	lwz r0, 0x13cc(r3)
/* 801633F0 001604D0  60 00 00 01 */	ori r0, r0, 0x1
/* 801633F4 001604D4  90 03 13 CC */	stw r0, 0x13cc(r3)
.L_801633F8:
/* 801633F8 001604D8  38 63 00 08 */	addi r3, r3, 0x8
/* 801633FC 001604DC  80 03 13 D4 */	lwz r0, 0x13d4(r3)
/* 80163400 001604E0  7C 00 28 40 */	cmplw r0, r5
/* 80163404 001604E4  4C 82 00 20 */	bnelr
/* 80163408 001604E8  80 03 13 C8 */	lwz r0, 0x13c8(r3)
/* 8016340C 001604EC  60 00 00 01 */	ori r0, r0, 0x1
/* 80163410 001604F0  90 03 13 C8 */	stw r0, 0x13c8(r3)
/* 80163414 001604F4  4E 80 00 20 */	blr
.endfn DuploNotice__12zNPCBPatrickF13en_SM_NOTICESPv

# zNPCBPatrick::Damage(en_NPC_DAMAGE_TYPE, xBase*, const xVec3*)
.fn Damage__12zNPCBPatrickF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3, global
/* 80163418 001604F8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8016341C 001604FC  7C 08 02 A6 */	mflr r0
/* 80163420 00160500  2C 04 00 03 */	cmpwi r4, 0x3
/* 80163424 00160504  90 01 00 24 */	stw r0, 0x24(r1)
/* 80163428 00160508  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016342C 0016050C  7C 7F 1B 78 */	mr r31, r3
/* 80163430 00160510  41 82 00 14 */	beq .L_80163444
/* 80163434 00160514  2C 04 00 09 */	cmpwi r4, 0x9
/* 80163438 00160518  41 82 00 0C */	beq .L_80163444
/* 8016343C 0016051C  2C 04 00 0C */	cmpwi r4, 0xc
/* 80163440 00160520  40 82 01 9C */	bne .L_801635DC
.L_80163444:
/* 80163444 00160524  80 1F 02 B4 */	lwz r0, 0x2b4(r31)
/* 80163448 00160528  54 00 07 7B */	rlwinm. r0, r0, 0, 29, 29
/* 8016344C 0016052C  41 82 00 90 */	beq .L_801634DC
/* 80163450 00160530  28 06 00 00 */	cmplwi r6, 0x0
/* 80163454 00160534  41 82 00 14 */	beq .L_80163468
/* 80163458 00160538  7C C4 33 78 */	mr r4, r6
/* 8016345C 0016053C  38 61 00 08 */	addi r3, r1, 0x8
/* 80163460 00160540  4B EE B0 7D */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 80163464 00160544  48 00 00 2C */	b .L_80163490
.L_80163468:
/* 80163468 00160548  3C 60 80 3C */	lis r3, globals@ha
/* 8016346C 0016054C  80 BF 00 24 */	lwz r5, 0x24(r31)
/* 80163470 00160550  38 83 05 58 */	addi r4, r3, globals@l
/* 80163474 00160554  38 61 00 08 */	addi r3, r1, 0x8
/* 80163478 00160558  80 84 07 04 */	lwz r4, 0x704(r4)
/* 8016347C 0016055C  80 C5 00 4C */	lwz r6, 0x4c(r5)
/* 80163480 00160560  80 A4 00 4C */	lwz r5, 0x4c(r4)
/* 80163484 00160564  38 86 00 30 */	addi r4, r6, 0x30
/* 80163488 00160568  38 A5 00 30 */	addi r5, r5, 0x30
/* 8016348C 0016056C  4B EA B2 05 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
.L_80163490:
/* 80163490 00160570  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80163494 00160574  38 61 00 08 */	addi r3, r1, 0x8
/* 80163498 00160578  7C 64 1B 78 */	mr r4, r3
/* 8016349C 0016057C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 801634A0 00160580  4B EE AE 51 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 801634A4 00160584  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 801634A8 00160588  38 61 00 08 */	addi r3, r1, 0x8
/* 801634AC 0016058C  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 801634B0 00160590  38 84 00 20 */	addi r4, r4, 0x20
/* 801634B4 00160594  4B EE B0 3D */	bl xVec3Dot__FPC5xVec3PC5xVec3
/* 801634B8 00160598  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801634BC 0016059C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801634C0 001605A0  40 81 01 1C */	ble .L_801635DC
/* 801634C4 001605A4  80 1F 02 B4 */	lwz r0, 0x2b4(r31)
/* 801634C8 001605A8  60 00 00 08 */	ori r0, r0, 0x8
/* 801634CC 001605AC  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 801634D0 001605B0  C0 02 AA 04 */	lfs f0, "@1054"@sda21(r2)
/* 801634D4 001605B4  D0 1F 18 EC */	stfs f0, 0x18ec(r31)
/* 801634D8 001605B8  48 00 01 04 */	b .L_801635DC
.L_801634DC:
/* 801634DC 001605BC  C0 3F 18 EC */	lfs f1, 0x18ec(r31)
/* 801634E0 001605C0  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801634E4 001605C4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801634E8 001605C8  40 80 00 F4 */	bge .L_801635DC
/* 801634EC 001605CC  80 1F 18 E8 */	lwz r0, 0x18e8(r31)
/* 801634F0 001605D0  54 00 07 7B */	rlwinm. r0, r0, 0, 29, 29
/* 801634F4 001605D4  41 82 00 74 */	beq .L_80163568
/* 801634F8 001605D8  4B EC D7 71 */	bl xrand__Fv
/* 801634FC 001605DC  54 60 06 31 */	rlwinm. r0, r3, 0, 24, 24
/* 80163500 001605E0  41 82 00 3C */	beq .L_8016353C
/* 80163504 001605E4  80 1F 02 BC */	lwz r0, 0x2bc(r31)
/* 80163508 001605E8  2C 00 00 02 */	cmpwi r0, 0x2
/* 8016350C 001605EC  41 82 00 30 */	beq .L_8016353C
/* 80163510 001605F0  80 7F 18 E4 */	lwz r3, 0x18e4(r31)
/* 80163514 001605F4  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80163518 001605F8  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 8016351C 001605FC  38 A0 00 00 */	li r5, 0x0
/* 80163520 00160600  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80163524 00160604  38 C0 FF FF */	li r6, -0x1
/* 80163528 00160608  80 84 00 C4 */	lwz r4, 0xc4(r4)
/* 8016352C 0016060C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80163530 00160610  7D 89 03 A6 */	mtctr r12
/* 80163534 00160614  4E 80 04 21 */	bctrl
/* 80163538 00160618  48 00 00 9C */	b .L_801635D4
.L_8016353C:
/* 8016353C 0016061C  80 7F 18 E4 */	lwz r3, 0x18e4(r31)
/* 80163540 00160620  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80163544 00160624  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80163548 00160628  38 A0 00 00 */	li r5, 0x0
/* 8016354C 0016062C  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80163550 00160630  38 C0 FF FF */	li r6, -0x1
/* 80163554 00160634  80 84 00 CC */	lwz r4, 0xcc(r4)
/* 80163558 00160638  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8016355C 0016063C  7D 89 03 A6 */	mtctr r12
/* 80163560 00160640  4E 80 04 21 */	bctrl
/* 80163564 00160644  48 00 00 70 */	b .L_801635D4
.L_80163568:
/* 80163568 00160648  80 1F 02 BC */	lwz r0, 0x2bc(r31)
/* 8016356C 0016064C  2C 00 00 02 */	cmpwi r0, 0x2
/* 80163570 00160650  41 82 00 30 */	beq .L_801635A0
/* 80163574 00160654  80 7F 18 E4 */	lwz r3, 0x18e4(r31)
/* 80163578 00160658  3C 80 80 2A */	lis r4, sNFComment@ha
/* 8016357C 0016065C  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80163580 00160660  38 A0 00 00 */	li r5, 0x0
/* 80163584 00160664  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80163588 00160668  38 C0 FF FF */	li r6, -0x1
/* 8016358C 0016066C  80 84 00 C4 */	lwz r4, 0xc4(r4)
/* 80163590 00160670  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80163594 00160674  7D 89 03 A6 */	mtctr r12
/* 80163598 00160678  4E 80 04 21 */	bctrl
/* 8016359C 0016067C  48 00 00 2C */	b .L_801635C8
.L_801635A0:
/* 801635A0 00160680  80 7F 18 E4 */	lwz r3, 0x18e4(r31)
/* 801635A4 00160684  3C 80 80 2A */	lis r4, sNFComment@ha
/* 801635A8 00160688  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 801635AC 0016068C  38 A0 00 00 */	li r5, 0x0
/* 801635B0 00160690  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 801635B4 00160694  38 C0 FF FF */	li r6, -0x1
/* 801635B8 00160698  80 84 00 CC */	lwz r4, 0xcc(r4)
/* 801635BC 0016069C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801635C0 001606A0  7D 89 03 A6 */	mtctr r12
/* 801635C4 001606A4  4E 80 04 21 */	bctrl
.L_801635C8:
/* 801635C8 001606A8  80 1F 18 E8 */	lwz r0, 0x18e8(r31)
/* 801635CC 001606AC  60 00 00 04 */	ori r0, r0, 0x4
/* 801635D0 001606B0  90 1F 18 E8 */	stw r0, 0x18e8(r31)
.L_801635D4:
/* 801635D4 001606B4  C0 02 AA 04 */	lfs f0, "@1054"@sda21(r2)
/* 801635D8 001606B8  D0 1F 18 EC */	stfs f0, 0x18ec(r31)
.L_801635DC:
/* 801635DC 001606BC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801635E0 001606C0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801635E4 001606C4  7C 08 03 A6 */	mtlr r0
/* 801635E8 001606C8  38 21 00 20 */	addi r1, r1, 0x20
/* 801635EC 001606CC  4E 80 00 20 */	blr
.endfn Damage__12zNPCBPatrickF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3

# zNPCBPatrick_AddBoundEntsToGrid(zScene*)
.fn zNPCBPatrick_AddBoundEntsToGrid__FP6zScene, global
/* 801635F0 001606D0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801635F4 001606D4  7C 08 02 A6 */	mflr r0
/* 801635F8 001606D8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801635FC 001606DC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80163600 001606E0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80163604 001606E4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80163608 001606E8  93 81 00 10 */	stw r28, 0x10(r1)
/* 8016360C 001606EC  88 0D 97 00 */	lbz r0, sOthersHaventBeenAdded@sda21(r13)
/* 80163610 001606F0  28 00 00 00 */	cmplwi r0, 0x0
/* 80163614 001606F4  41 82 00 A4 */	beq .L_801636B8
/* 80163618 001606F8  3B C0 00 00 */	li r30, 0x0
/* 8016361C 001606FC  3C 60 80 3D */	lis r3, colls_grid@ha
/* 80163620 00160700  9B CD 97 00 */	stb r30, sOthersHaventBeenAdded@sda21(r13)
/* 80163624 00160704  3B E3 A6 D8 */	addi r31, r3, colls_grid@l
/* 80163628 00160708  3B A0 00 00 */	li r29, 0x0
.L_8016362C:
/* 8016362C 0016070C  80 8D 97 04 */	lwz r4, sPat_Ptr@sda21(r13)
/* 80163630 00160710  7F E3 FB 78 */	mr r3, r31
/* 80163634 00160714  80 84 13 C4 */	lwz r4, 0x13c4(r4)
/* 80163638 00160718  7F 84 F0 2E */	lwzx r28, r4, r30
/* 8016363C 0016071C  7F 84 E3 78 */	mr r4, r28
/* 80163640 00160720  4B FB F1 D5 */	bl xGridEntIsTooBig__FP5xGridPC4xEnt
/* 80163644 00160724  2C 03 00 00 */	cmpwi r3, 0x0
/* 80163648 00160728  41 82 00 44 */	beq .L_8016368C
/* 8016364C 0016072C  3C 60 80 3D */	lis r3, colls_oso_grid@ha
/* 80163650 00160730  7F 84 E3 78 */	mr r4, r28
/* 80163654 00160734  38 63 A7 74 */	addi r3, r3, colls_oso_grid@l
/* 80163658 00160738  4B FB EB 45 */	bl xGridAdd__FP5xGridP4xEnt
/* 8016365C 0016073C  3C 60 80 3D */	lis r3, colls_oso_grid@ha
/* 80163660 00160740  7F 84 E3 78 */	mr r4, r28
/* 80163664 00160744  38 63 A7 74 */	addi r3, r3, colls_oso_grid@l
/* 80163668 00160748  4B FB F1 AD */	bl xGridEntIsTooBig__FP5xGridPC4xEnt
/* 8016366C 0016074C  2C 03 00 00 */	cmpwi r3, 0x0
/* 80163670 00160750  41 82 00 10 */	beq .L_80163680
/* 80163674 00160754  38 00 00 02 */	li r0, 0x2
/* 80163678 00160758  98 1C 00 59 */	stb r0, 0x59(r28)
/* 8016367C 0016075C  48 00 00 28 */	b .L_801636A4
.L_80163680:
/* 80163680 00160760  38 00 00 01 */	li r0, 0x1
/* 80163684 00160764  98 1C 00 59 */	stb r0, 0x59(r28)
/* 80163688 00160768  48 00 00 1C */	b .L_801636A4
.L_8016368C:
/* 8016368C 0016076C  3C 60 80 3D */	lis r3, colls_grid@ha
/* 80163690 00160770  7F 84 E3 78 */	mr r4, r28
/* 80163694 00160774  38 63 A6 D8 */	addi r3, r3, colls_grid@l
/* 80163698 00160778  4B FB EB 05 */	bl xGridAdd__FP5xGridP4xEnt
/* 8016369C 0016077C  38 00 00 00 */	li r0, 0x0
/* 801636A0 00160780  98 1C 00 59 */	stb r0, 0x59(r28)
.L_801636A4:
/* 801636A4 00160784  3B BD 00 01 */	addi r29, r29, 0x1
/* 801636A8 00160788  3B DE 00 04 */	addi r30, r30, 0x4
/* 801636AC 0016078C  2C 1D 00 04 */	cmpwi r29, 0x4
/* 801636B0 00160790  41 80 FF 7C */	blt .L_8016362C
/* 801636B4 00160794  48 00 00 0C */	b .L_801636C0
.L_801636B8:
/* 801636B8 00160798  38 00 00 00 */	li r0, 0x0
/* 801636BC 0016079C  90 0D 97 04 */	stw r0, sPat_Ptr@sda21(r13)
.L_801636C0:
/* 801636C0 001607A0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801636C4 001607A4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801636C8 001607A8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801636CC 001607AC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801636D0 001607B0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801636D4 001607B4  7C 08 03 A6 */	mtlr r0
/* 801636D8 001607B8  38 21 00 20 */	addi r1, r1, 0x20
/* 801636DC 001607BC  4E 80 00 20 */	blr
.endfn zNPCBPatrick_AddBoundEntsToGrid__FP6zScene

# zNPCBPatrick_GameIsPaused(zScene*)
.fn zNPCBPatrick_GameIsPaused__FP6zScene, global
/* 801636E0 001607C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801636E4 001607C4  7C 08 02 A6 */	mflr r0
/* 801636E8 001607C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801636EC 001607CC  80 8D 97 04 */	lwz r4, sPat_Ptr@sda21(r13)
/* 801636F0 001607D0  28 04 00 00 */	cmplwi r4, 0x0
/* 801636F4 001607D4  41 82 00 20 */	beq .L_80163714
/* 801636F8 001607D8  80 64 02 B4 */	lwz r3, 0x2b4(r4)
/* 801636FC 001607DC  54 60 05 EF */	rlwinm. r0, r3, 0, 23, 23
/* 80163700 001607E0  41 82 00 14 */	beq .L_80163714
/* 80163704 001607E4  54 60 06 2C */	rlwinm r0, r3, 0, 24, 22
/* 80163708 001607E8  90 04 02 B4 */	stw r0, 0x2b4(r4)
/* 8016370C 001607EC  80 6D 97 04 */	lwz r3, sPat_Ptr@sda21(r13)
/* 80163710 001607F0  48 00 0A AD */	bl hiddenByCutscene__12zNPCBPatrickFv
.L_80163714:
/* 80163714 001607F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80163718 001607F8  7C 08 03 A6 */	mtlr r0
/* 8016371C 001607FC  38 21 00 10 */	addi r1, r1, 0x10
/* 80163720 00160800  4E 80 00 20 */	blr
.endfn zNPCBPatrick_GameIsPaused__FP6zScene

# zNPCBPatrick::RenderGlobs()
.fn RenderGlobs__12zNPCBPatrickFv, global
/* 80163724 00160804  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80163728 00160808  7C 08 02 A6 */	mflr r0
/* 8016372C 0016080C  38 80 00 D7 */	li r4, 0xd7
/* 80163730 00160810  90 01 00 64 */	stw r0, 0x64(r1)
/* 80163734 00160814  BF 41 00 48 */	stmw r26, 0x48(r1)
/* 80163738 00160818  7C 7A 1B 78 */	mr r26, r3
/* 8016373C 0016081C  80 63 02 D0 */	lwz r3, 0x2d0(r3)
/* 80163740 00160820  4B F6 5A AD */	bl iModelSetMaterialAlpha__FP8RpAtomicUc
/* 80163744 00160824  C0 22 A9 C4 */	lfs f1, "@832"@sda21(r2)
/* 80163748 00160828  80 7A 02 D0 */	lwz r3, 0x2d0(r26)
/* 8016374C 0016082C  FC 60 08 90 */	fmr f3, f1
/* 80163750 00160830  C0 42 A9 C0 */	lfs f2, "@831"@sda21(r2)
/* 80163754 00160834  4B F6 5E 5D */	bl iModelMaterialMul__FP8RpAtomicfff
/* 80163758 00160838  80 7A 02 D4 */	lwz r3, 0x2d4(r26)
/* 8016375C 0016083C  38 80 00 D7 */	li r4, 0xd7
/* 80163760 00160840  4B F6 5A 8D */	bl iModelSetMaterialAlpha__FP8RpAtomicUc
/* 80163764 00160844  C0 22 A9 C4 */	lfs f1, "@832"@sda21(r2)
/* 80163768 00160848  80 7A 02 D4 */	lwz r3, 0x2d4(r26)
/* 8016376C 0016084C  FC 60 08 90 */	fmr f3, f1
/* 80163770 00160850  C0 42 A9 C0 */	lfs f2, "@831"@sda21(r2)
/* 80163774 00160854  4B F6 5E 3D */	bl iModelMaterialMul__FP8RpAtomicfff
/* 80163778 00160858  7F 5F D3 78 */	mr r31, r26
/* 8016377C 0016085C  3B C1 00 38 */	addi r30, r1, 0x38
/* 80163780 00160860  3B A1 00 18 */	addi r29, r1, 0x18
/* 80163784 00160864  3B 81 00 28 */	addi r28, r1, 0x28
/* 80163788 00160868  3B 60 00 00 */	li r27, 0x0
.L_8016378C:
/* 8016378C 0016086C  80 7F 03 A4 */	lwz r3, 0x3a4(r31)
/* 80163790 00160870  54 60 07 FF */	clrlwi. r0, r3, 31
/* 80163794 00160874  41 82 01 CC */	beq .L_80163960
/* 80163798 00160878  54 60 07 7B */	rlwinm. r0, r3, 0, 29, 29
/* 8016379C 0016087C  41 82 00 B8 */	beq .L_80163854
/* 801637A0 00160880  7F C3 F3 78 */	mr r3, r30
/* 801637A4 00160884  38 9F 03 54 */	addi r4, r31, 0x354
/* 801637A8 00160888  4B EE AD 35 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 801637AC 0016088C  7F C4 F3 78 */	mr r4, r30
/* 801637B0 00160890  38 7F 03 7C */	addi r3, r31, 0x37c
/* 801637B4 00160894  4B EE AD 29 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 801637B8 00160898  C0 22 A9 C4 */	lfs f1, "@832"@sda21(r2)
/* 801637BC 0016089C  7F A3 EB 78 */	mr r3, r29
/* 801637C0 001608A0  C0 42 A9 C0 */	lfs f2, "@831"@sda21(r2)
/* 801637C4 001608A4  FC 60 08 90 */	fmr f3, f1
/* 801637C8 001608A8  4B EA B8 35 */	bl xVec3Init__FP5xVec3fff
/* 801637CC 001608AC  C0 1F 03 60 */	lfs f0, 0x360(r31)
/* 801637D0 001608B0  7F 83 E3 78 */	mr r3, r28
/* 801637D4 001608B4  FC 00 00 50 */	fneg f0, f0
/* 801637D8 001608B8  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 801637DC 001608BC  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801637E0 001608C0  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 801637E4 001608C4  C0 1F 03 68 */	lfs f0, 0x368(r31)
/* 801637E8 001608C8  FC 00 00 50 */	fneg f0, f0
/* 801637EC 001608CC  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 801637F0 001608D0  4B EA AE 61 */	bl xVec3Length__FPC5xVec3
/* 801637F4 001608D4  C0 02 AA 60 */	lfs f0, "@1668"@sda21(r2)
/* 801637F8 001608D8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801637FC 001608DC  40 81 00 14 */	ble .L_80163810
/* 80163800 001608E0  C0 02 A9 C0 */	lfs f0, "@831"@sda21(r2)
/* 80163804 001608E4  7F 83 E3 78 */	mr r3, r28
/* 80163808 001608E8  EC 20 08 24 */	fdivs f1, f0, f1
/* 8016380C 001608EC  4B EB 81 2D */	bl xVec3SMulBy__FP5xVec3f
.L_80163810:
/* 80163810 001608F0  7F A4 EB 78 */	mr r4, r29
/* 80163814 001608F4  7F 85 E3 78 */	mr r5, r28
/* 80163818 001608F8  38 61 00 08 */	addi r3, r1, 0x8
/* 8016381C 001608FC  4B EB 18 71 */	bl xVec3Cross__FP5xVec3PC5xVec3PC5xVec3
/* 80163820 00160900  38 61 00 08 */	addi r3, r1, 0x8
/* 80163824 00160904  C0 22 A9 D8 */	lfs f1, "@891"@sda21(r2)
/* 80163828 00160908  7C 64 1B 78 */	mr r4, r3
/* 8016382C 0016090C  4B F1 F3 39 */	bl xMat3x3SMul__FP7xMat3x3PC7xMat3x3f
/* 80163830 00160910  80 7A 02 D4 */	lwz r3, 0x2d4(r26)
/* 80163834 00160914  38 81 00 08 */	addi r4, r1, 0x8
/* 80163838 00160918  4B F6 49 A5 */	bl iModelCull__FP8RpAtomicP11RwMatrixTag
/* 8016383C 0016091C  2C 03 00 00 */	cmpwi r3, 0x0
/* 80163840 00160920  40 82 01 20 */	bne .L_80163960
/* 80163844 00160924  80 7A 02 D4 */	lwz r3, 0x2d4(r26)
/* 80163848 00160928  38 81 00 08 */	addi r4, r1, 0x8
/* 8016384C 0016092C  4B F6 48 A5 */	bl iModelRender__FP8RpAtomicP11RwMatrixTag
/* 80163850 00160930  48 00 01 10 */	b .L_80163960
.L_80163854:
/* 80163854 00160934  C0 3F 03 78 */	lfs f1, 0x378(r31)
/* 80163858 00160938  7F C4 F3 78 */	mr r4, r30
/* 8016385C 0016093C  38 7F 03 54 */	addi r3, r31, 0x354
/* 80163860 00160940  4B EB 1E 4D */	bl xParabolaEvalPos__FPC9xParabolaP5xVec3f
/* 80163864 00160944  C0 21 00 3C */	lfs f1, 0x3c(r1)
/* 80163868 00160948  C0 1A 02 C0 */	lfs f0, 0x2c0(r26)
/* 8016386C 0016094C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80163870 00160950  40 80 00 1C */	bge .L_8016388C
/* 80163874 00160954  38 00 00 00 */	li r0, 0x0
/* 80163878 00160958  7F 43 D3 78 */	mr r3, r26
/* 8016387C 0016095C  90 1F 03 A4 */	stw r0, 0x3a4(r31)
/* 80163880 00160960  7F C4 F3 78 */	mr r4, r30
/* 80163884 00160964  48 00 05 19 */	bl playSplat__12zNPCBPatrickFP5xVec3
/* 80163888 00160968  48 00 00 D8 */	b .L_80163960
.L_8016388C:
/* 8016388C 0016096C  7F C4 F3 78 */	mr r4, r30
/* 80163890 00160970  38 7F 03 7C */	addi r3, r31, 0x37c
/* 80163894 00160974  4B EE AC 49 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 80163898 00160978  C0 3F 03 78 */	lfs f1, 0x378(r31)
/* 8016389C 0016097C  7F 84 E3 78 */	mr r4, r28
/* 801638A0 00160980  38 7F 03 54 */	addi r3, r31, 0x354
/* 801638A4 00160984  4B EB 1D A5 */	bl xParabolaEvalVel__FPC9xParabolaP5xVec3f
/* 801638A8 00160988  7F 83 E3 78 */	mr r3, r28
/* 801638AC 0016098C  4B EA AD A5 */	bl xVec3Length__FPC5xVec3
/* 801638B0 00160990  C0 02 AA 60 */	lfs f0, "@1668"@sda21(r2)
/* 801638B4 00160994  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801638B8 00160998  40 80 00 30 */	bge .L_801638E8
/* 801638BC 0016099C  C0 22 A9 C4 */	lfs f1, "@832"@sda21(r2)
/* 801638C0 001609A0  7F 83 E3 78 */	mr r3, r28
/* 801638C4 001609A4  C0 42 A9 CC */	lfs f2, "@870"@sda21(r2)
/* 801638C8 001609A8  FC 60 08 90 */	fmr f3, f1
/* 801638CC 001609AC  4B EA B7 31 */	bl xVec3Init__FP5xVec3fff
/* 801638D0 001609B0  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 801638D4 001609B4  38 61 00 08 */	addi r3, r1, 0x8
/* 801638D8 001609B8  C0 22 A9 C0 */	lfs f1, "@831"@sda21(r2)
/* 801638DC 001609BC  FC 60 10 90 */	fmr f3, f2
/* 801638E0 001609C0  4B EA B7 1D */	bl xVec3Init__FP5xVec3fff
/* 801638E4 001609C4  48 00 00 3C */	b .L_80163920
.L_801638E8:
/* 801638E8 001609C8  C0 02 A9 C0 */	lfs f0, "@831"@sda21(r2)
/* 801638EC 001609CC  7F 83 E3 78 */	mr r3, r28
/* 801638F0 001609D0  EC 20 08 24 */	fdivs f1, f0, f1
/* 801638F4 001609D4  4B EB 80 45 */	bl xVec3SMulBy__FP5xVec3f
/* 801638F8 001609D8  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 801638FC 001609DC  38 61 00 08 */	addi r3, r1, 0x8
/* 80163900 001609E0  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80163904 001609E4  7C 64 1B 78 */	mr r4, r3
/* 80163908 001609E8  D0 21 00 08 */	stfs f1, 0x8(r1)
/* 8016390C 001609EC  FC 00 00 50 */	fneg f0, f0
/* 80163910 001609F0  C0 22 A9 C4 */	lfs f1, "@832"@sda21(r2)
/* 80163914 001609F4  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80163918 001609F8  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8016391C 001609FC  4B EE A9 D5 */	bl xVec3Normalize__FP5xVec3PC5xVec3
.L_80163920:
/* 80163920 00160A00  7F A3 EB 78 */	mr r3, r29
/* 80163924 00160A04  7F 84 E3 78 */	mr r4, r28
/* 80163928 00160A08  38 A1 00 08 */	addi r5, r1, 0x8
/* 8016392C 00160A0C  4B EB 17 61 */	bl xVec3Cross__FP5xVec3PC5xVec3PC5xVec3
/* 80163930 00160A10  38 61 00 08 */	addi r3, r1, 0x8
/* 80163934 00160A14  C0 22 A9 D8 */	lfs f1, "@891"@sda21(r2)
/* 80163938 00160A18  7C 64 1B 78 */	mr r4, r3
/* 8016393C 00160A1C  4B F1 F2 29 */	bl xMat3x3SMul__FP7xMat3x3PC7xMat3x3f
/* 80163940 00160A20  80 7A 02 D0 */	lwz r3, 0x2d0(r26)
/* 80163944 00160A24  38 81 00 08 */	addi r4, r1, 0x8
/* 80163948 00160A28  4B F6 48 95 */	bl iModelCull__FP8RpAtomicP11RwMatrixTag
/* 8016394C 00160A2C  2C 03 00 00 */	cmpwi r3, 0x0
/* 80163950 00160A30  40 82 00 10 */	bne .L_80163960
/* 80163954 00160A34  80 7A 02 D0 */	lwz r3, 0x2d0(r26)
/* 80163958 00160A38  38 81 00 08 */	addi r4, r1, 0x8
/* 8016395C 00160A3C  4B F6 47 95 */	bl iModelRender__FP8RpAtomicP11RwMatrixTag
.L_80163960:
/* 80163960 00160A40  3B 7B 00 01 */	addi r27, r27, 0x1
/* 80163964 00160A44  3B FF 00 54 */	addi r31, r31, 0x54
/* 80163968 00160A48  2C 1B 00 32 */	cmpwi r27, 0x32
/* 8016396C 00160A4C  41 80 FE 20 */	blt .L_8016378C
/* 80163970 00160A50  80 7A 02 D0 */	lwz r3, 0x2d0(r26)
/* 80163974 00160A54  4B F6 59 FD */	bl iModelResetMaterial__FP8RpAtomic
/* 80163978 00160A58  80 7A 02 D4 */	lwz r3, 0x2d4(r26)
/* 8016397C 00160A5C  4B F6 59 F5 */	bl iModelResetMaterial__FP8RpAtomic
/* 80163980 00160A60  BB 41 00 48 */	lmw r26, 0x48(r1)
/* 80163984 00160A64  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80163988 00160A68  7C 08 03 A6 */	mtlr r0
/* 8016398C 00160A6C  38 21 00 60 */	addi r1, r1, 0x60
/* 80163990 00160A70  4E 80 00 20 */	blr
.endfn RenderGlobs__12zNPCBPatrickFv

# zNPCBPatrick::RenderFrozenPlayer()
.fn RenderFrozenPlayer__12zNPCBPatrickFv, global
/* 80163994 00160A74  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80163998 00160A78  7C 08 02 A6 */	mflr r0
/* 8016399C 00160A7C  3C 80 80 3C */	lis r4, globals@ha
/* 801639A0 00160A80  90 01 00 84 */	stw r0, 0x84(r1)
/* 801639A4 00160A84  BF 61 00 6C */	stmw r27, 0x6c(r1)
/* 801639A8 00160A88  3B E4 05 58 */	addi r31, r4, globals@l
/* 801639AC 00160A8C  7C 7B 1B 78 */	mr r27, r3
/* 801639B0 00160A90  38 61 00 08 */	addi r3, r1, 0x8
/* 801639B4 00160A94  80 9F 07 04 */	lwz r4, 0x704(r31)
/* 801639B8 00160A98  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 801639BC 00160A9C  38 84 00 30 */	addi r4, r4, 0x30
/* 801639C0 00160AA0  4B EE AB 1D */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 801639C4 00160AA4  C0 3B 18 C4 */	lfs f1, 0x18c4(r27)
/* 801639C8 00160AA8  4B F6 14 85 */	bl isin__Ff
/* 801639CC 00160AAC  C0 5B 18 C0 */	lfs f2, 0x18c0(r27)
/* 801639D0 00160AB0  C0 01 00 08 */	lfs f0, 0x8(r1)
/* 801639D4 00160AB4  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 801639D8 00160AB8  D0 01 00 08 */	stfs f0, 0x8(r1)
/* 801639DC 00160ABC  C0 3B 18 C4 */	lfs f1, 0x18c4(r27)
/* 801639E0 00160AC0  4B F6 14 B1 */	bl icos__Ff
/* 801639E4 00160AC4  C0 5B 18 C0 */	lfs f2, 0x18c0(r27)
/* 801639E8 00160AC8  7F 7E DB 78 */	mr r30, r27
/* 801639EC 00160ACC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801639F0 00160AD0  3B A1 00 44 */	addi r29, r1, 0x44
/* 801639F4 00160AD4  3B 80 00 00 */	li r28, 0x0
/* 801639F8 00160AD8  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 801639FC 00160ADC  D0 01 00 10 */	stfs f0, 0x10(r1)
.L_80163A00:
/* 80163A00 00160AE0  C0 3E 17 DC */	lfs f1, 0x17dc(r30)
/* 80163A04 00160AE4  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80163A08 00160AE8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80163A0C 00160AEC  40 81 00 80 */	ble .L_80163A8C
/* 80163A10 00160AF0  C0 3E 17 D8 */	lfs f1, 0x17d8(r30)
/* 80163A14 00160AF4  38 61 00 14 */	addi r3, r1, 0x14
/* 80163A18 00160AF8  38 9E 17 CC */	addi r4, r30, 0x17cc
/* 80163A1C 00160AFC  4B EB 7E C1 */	bl xMat3x3Rot__FP7xMat3x3PC5xVec3f
/* 80163A20 00160B00  7F A3 EB 78 */	mr r3, r29
/* 80163A24 00160B04  38 81 00 08 */	addi r4, r1, 0x8
/* 80163A28 00160B08  4B EE AA B5 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 80163A2C 00160B0C  38 61 00 14 */	addi r3, r1, 0x14
/* 80163A30 00160B10  C0 3E 17 DC */	lfs f1, 0x17dc(r30)
/* 80163A34 00160B14  7C 64 1B 78 */	mr r4, r3
/* 80163A38 00160B18  4B F1 F1 2D */	bl xMat3x3SMul__FP7xMat3x3PC7xMat3x3f
/* 80163A3C 00160B1C  80 7B 17 C8 */	lwz r3, 0x17c8(r27)
/* 80163A40 00160B20  38 81 00 14 */	addi r4, r1, 0x14
/* 80163A44 00160B24  4B F6 47 99 */	bl iModelCull__FP8RpAtomicP11RwMatrixTag
/* 80163A48 00160B28  2C 03 00 00 */	cmpwi r3, 0x0
/* 80163A4C 00160B2C  40 82 00 40 */	bne .L_80163A8C
/* 80163A50 00160B30  C0 42 A9 C0 */	lfs f2, "@831"@sda21(r2)
/* 80163A54 00160B34  C0 3E 17 E0 */	lfs f1, 0x17e0(r30)
/* 80163A58 00160B38  C0 1E 17 DC */	lfs f0, 0x17dc(r30)
/* 80163A5C 00160B3C  EC 22 08 28 */	fsubs f1, f2, f1
/* 80163A60 00160B40  C0 42 AA 9C */	lfs f2, "@2006"@sda21(r2)
/* 80163A64 00160B44  80 7B 17 C8 */	lwz r3, 0x17c8(r27)
/* 80163A68 00160B48  EC 01 00 2A */	fadds f0, f1, f0
/* 80163A6C 00160B4C  EC 02 00 32 */	fmuls f0, f2, f0
/* 80163A70 00160B50  FC 00 00 1E */	fctiwz f0, f0
/* 80163A74 00160B54  D8 01 00 58 */	stfd f0, 0x58(r1)
/* 80163A78 00160B58  80 81 00 5C */	lwz r4, 0x5c(r1)
/* 80163A7C 00160B5C  4B F6 57 71 */	bl iModelSetMaterialAlpha__FP8RpAtomicUc
/* 80163A80 00160B60  80 7B 17 C8 */	lwz r3, 0x17c8(r27)
/* 80163A84 00160B64  38 81 00 14 */	addi r4, r1, 0x14
/* 80163A88 00160B68  4B F6 46 69 */	bl iModelRender__FP8RpAtomicP11RwMatrixTag
.L_80163A8C:
/* 80163A8C 00160B6C  3B 9C 00 01 */	addi r28, r28, 0x1
/* 80163A90 00160B70  3B DE 00 18 */	addi r30, r30, 0x18
/* 80163A94 00160B74  2C 1C 00 0A */	cmpwi r28, 0xa
/* 80163A98 00160B78  41 80 FF 68 */	blt .L_80163A00
/* 80163A9C 00160B7C  38 60 00 0A */	li r3, 0xa
/* 80163AA0 00160B80  38 80 00 05 */	li r4, 0x5
/* 80163AA4 00160B84  48 0C BD 39 */	bl RwRenderStateSet
/* 80163AA8 00160B88  38 60 00 0B */	li r3, 0xb
/* 80163AAC 00160B8C  38 80 00 06 */	li r4, 0x6
/* 80163AB0 00160B90  48 0C BD 2D */	bl RwRenderStateSet
/* 80163AB4 00160B94  38 60 00 08 */	li r3, 0x8
/* 80163AB8 00160B98  38 80 00 01 */	li r4, 0x1
/* 80163ABC 00160B9C  48 0C BD 21 */	bl RwRenderStateSet
/* 80163AC0 00160BA0  80 7B 17 C0 */	lwz r3, 0x17c0(r27)
/* 80163AC4 00160BA4  28 03 00 00 */	cmplwi r3, 0x0
/* 80163AC8 00160BA8  41 82 00 1C */	beq .L_80163AE4
/* 80163ACC 00160BAC  80 9F 07 04 */	lwz r4, 0x704(r31)
/* 80163AD0 00160BB0  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80163AD4 00160BB4  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80163AD8 00160BB8  4B EA AA 15 */	bl xMat4x3Copy__FP7xMat4x3PC7xMat4x3
/* 80163ADC 00160BBC  80 7B 17 C0 */	lwz r3, 0x17c0(r27)
/* 80163AE0 00160BC0  4B ED 0E 65 */	bl xModelRender__FP14xModelInstance
.L_80163AE4:
/* 80163AE4 00160BC4  38 60 00 0A */	li r3, 0xa
/* 80163AE8 00160BC8  38 80 00 05 */	li r4, 0x5
/* 80163AEC 00160BCC  48 0C BC F1 */	bl RwRenderStateSet
/* 80163AF0 00160BD0  38 60 00 0B */	li r3, 0xb
/* 80163AF4 00160BD4  38 80 00 02 */	li r4, 0x2
/* 80163AF8 00160BD8  48 0C BC E5 */	bl RwRenderStateSet
/* 80163AFC 00160BDC  38 60 00 08 */	li r3, 0x8
/* 80163B00 00160BE0  38 80 00 00 */	li r4, 0x0
/* 80163B04 00160BE4  48 0C BC D9 */	bl RwRenderStateSet
/* 80163B08 00160BE8  80 7B 17 C4 */	lwz r3, 0x17c4(r27)
/* 80163B0C 00160BEC  28 03 00 00 */	cmplwi r3, 0x0
/* 80163B10 00160BF0  41 82 00 1C */	beq .L_80163B2C
/* 80163B14 00160BF4  80 9F 07 04 */	lwz r4, 0x704(r31)
/* 80163B18 00160BF8  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80163B1C 00160BFC  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80163B20 00160C00  4B EA A9 CD */	bl xMat4x3Copy__FP7xMat4x3PC7xMat4x3
/* 80163B24 00160C04  80 7B 17 C4 */	lwz r3, 0x17c4(r27)
/* 80163B28 00160C08  4B ED 0E 1D */	bl xModelRender__FP14xModelInstance
.L_80163B2C:
/* 80163B2C 00160C0C  BB 61 00 6C */	lmw r27, 0x6c(r1)
/* 80163B30 00160C10  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80163B34 00160C14  7C 08 03 A6 */	mtlr r0
/* 80163B38 00160C18  38 21 00 80 */	addi r1, r1, 0x80
/* 80163B3C 00160C1C  4E 80 00 20 */	blr
.endfn RenderFrozenPlayer__12zNPCBPatrickFv

# zNPCBPatrick::RenderExtra()
.fn RenderExtra__12zNPCBPatrickFv, global
/* 80163B40 00160C20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80163B44 00160C24  7C 08 02 A6 */	mflr r0
/* 80163B48 00160C28  90 01 00 14 */	stw r0, 0x14(r1)
/* 80163B4C 00160C2C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80163B50 00160C30  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80163B54 00160C34  7C 7E 1B 78 */	mr r30, r3
/* 80163B58 00160C38  4B F8 B2 15 */	bl RenderExtra__10zNPCCommonFv
/* 80163B5C 00160C3C  4B F4 8E 99 */	bl zRenderStateCurrent__Fv
/* 80163B60 00160C40  7C 60 1B 78 */	mr r0, r3
/* 80163B64 00160C44  38 60 00 0A */	li r3, 0xa
/* 80163B68 00160C48  7C 1F 03 78 */	mr r31, r0
/* 80163B6C 00160C4C  38 80 00 05 */	li r4, 0x5
/* 80163B70 00160C50  48 0C BC 6D */	bl RwRenderStateSet
/* 80163B74 00160C54  38 60 00 0B */	li r3, 0xb
/* 80163B78 00160C58  38 80 00 02 */	li r4, 0x2
/* 80163B7C 00160C5C  48 0C BC 61 */	bl RwRenderStateSet
/* 80163B80 00160C60  7F C3 F3 78 */	mr r3, r30
/* 80163B84 00160C64  4B FF FB A1 */	bl RenderGlobs__12zNPCBPatrickFv
/* 80163B88 00160C68  80 1E 02 B4 */	lwz r0, 0x2b4(r30)
/* 80163B8C 00160C6C  54 00 06 F7 */	rlwinm. r0, r0, 0, 27, 27
/* 80163B90 00160C70  41 82 00 0C */	beq .L_80163B9C
/* 80163B94 00160C74  7F C3 F3 78 */	mr r3, r30
/* 80163B98 00160C78  4B FF FD FD */	bl RenderFrozenPlayer__12zNPCBPatrickFv
.L_80163B9C:
/* 80163B9C 00160C7C  38 60 00 01 */	li r3, 0x1
/* 80163BA0 00160C80  4B F4 8E 5D */	bl zRenderState__F14_SDRenderState
/* 80163BA4 00160C84  7F E3 FB 78 */	mr r3, r31
/* 80163BA8 00160C88  4B F4 8E 55 */	bl zRenderState__F14_SDRenderState
/* 80163BAC 00160C8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80163BB0 00160C90  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80163BB4 00160C94  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80163BB8 00160C98  7C 08 03 A6 */	mtlr r0
/* 80163BBC 00160C9C  38 21 00 10 */	addi r1, r1, 0x10
/* 80163BC0 00160CA0  4E 80 00 20 */	blr
.endfn RenderExtra__12zNPCBPatrickFv

# zNPCBPatrick::NewTime(xScene*, float)
.fn NewTime__12zNPCBPatrickFP6xScenef, global
/* 80163BC4 00160CA4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80163BC8 00160CA8  7C 08 02 A6 */	mflr r0
/* 80163BCC 00160CAC  90 01 00 44 */	stw r0, 0x44(r1)
/* 80163BD0 00160CB0  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80163BD4 00160CB4  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 80163BD8 00160CB8  BF 01 00 10 */	stmw r24, 0x10(r1)
/* 80163BDC 00160CBC  3C A0 80 2A */	lis r5, ...data.0@ha
/* 80163BE0 00160CC0  FF E0 08 90 */	fmr f31, f1
/* 80163BE4 00160CC4  3B E5 AA 68 */	addi r31, r5, ...data.0@l
/* 80163BE8 00160CC8  7C 78 1B 78 */	mr r24, r3
/* 80163BEC 00160CCC  7C 99 23 78 */	mr r25, r4
/* 80163BF0 00160CD0  3B 40 00 00 */	li r26, 0x0
/* 80163BF4 00160CD4  3B DF 00 38 */	addi r30, r31, 0x38
/* 80163BF8 00160CD8  3B BF 00 48 */	addi r29, r31, 0x48
/* 80163BFC 00160CDC  3B 9F 00 28 */	addi r28, r31, 0x28
/* 80163C00 00160CE0  3B 60 00 00 */	li r27, 0x0
.L_80163C04:
/* 80163C04 00160CE4  C0 3E 00 00 */	lfs f1, 0x0(r30)
/* 80163C08 00160CE8  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80163C0C 00160CEC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80163C10 00160CF0  41 80 00 50 */	blt .L_80163C60
/* 80163C14 00160CF4  80 B8 13 C4 */	lwz r5, 0x13c4(r24)
/* 80163C18 00160CF8  38 7F 00 00 */	addi r3, r31, 0x0
/* 80163C1C 00160CFC  80 1C 00 00 */	lwz r0, 0x0(r28)
/* 80163C20 00160D00  7F A6 EB 78 */	mr r6, r29
/* 80163C24 00160D04  80 98 00 24 */	lwz r4, 0x24(r24)
/* 80163C28 00160D08  54 00 10 3A */	slwi r0, r0, 2
/* 80163C2C 00160D0C  7C E5 D8 2E */	lwzx r7, r5, r27
/* 80163C30 00160D10  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80163C34 00160D14  7C A3 00 2E */	lwzx r5, r3, r0
/* 80163C38 00160D18  38 67 00 88 */	addi r3, r7, 0x88
/* 80163C3C 00160D1C  4B FF CD 29 */	bl GetBonePos__FP5xVec3P7xMat4x3iP5xVec3
/* 80163C40 00160D20  80 78 13 C4 */	lwz r3, 0x13c4(r24)
/* 80163C44 00160D24  7C 63 D8 2E */	lwzx r3, r3, r27
/* 80163C48 00160D28  38 63 00 64 */	addi r3, r3, 0x64
/* 80163C4C 00160D2C  7C 64 1B 78 */	mr r4, r3
/* 80163C50 00160D30  4B EA 72 ED */	bl xQuickCullForBound__FP7xQCDataPC6xBound
/* 80163C54 00160D34  80 78 13 C4 */	lwz r3, 0x13c4(r24)
/* 80163C58 00160D38  7C 63 D8 2E */	lwzx r3, r3, r27
/* 80163C5C 00160D3C  4B FC 07 CD */	bl zGridUpdateEnt__FP4xEnt
.L_80163C60:
/* 80163C60 00160D40  3B 5A 00 01 */	addi r26, r26, 0x1
/* 80163C64 00160D44  3B BD 00 0C */	addi r29, r29, 0xc
/* 80163C68 00160D48  2C 1A 00 04 */	cmpwi r26, 0x4
/* 80163C6C 00160D4C  3B 9C 00 04 */	addi r28, r28, 0x4
/* 80163C70 00160D50  3B 7B 00 04 */	addi r27, r27, 0x4
/* 80163C74 00160D54  3B DE 00 04 */	addi r30, r30, 0x4
/* 80163C78 00160D58  41 80 FF 8C */	blt .L_80163C04
/* 80163C7C 00160D5C  FC 20 F8 90 */	fmr f1, f31
/* 80163C80 00160D60  7F 03 C3 78 */	mr r3, r24
/* 80163C84 00160D64  7F 24 CB 78 */	mr r4, r25
/* 80163C88 00160D68  4B F8 C6 C1 */	bl NewTime__10zNPCCommonFP6xScenef
/* 80163C8C 00160D6C  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 80163C90 00160D70  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80163C94 00160D74  BB 01 00 10 */	lmw r24, 0x10(r1)
/* 80163C98 00160D78  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80163C9C 00160D7C  7C 08 03 A6 */	mtlr r0
/* 80163CA0 00160D80  38 21 00 40 */	addi r1, r1, 0x40
/* 80163CA4 00160D84  4E 80 00 20 */	blr
.endfn NewTime__12zNPCBPatrickFP6xScenef

# zNPCBPatrick::nextGoal()
.fn nextGoal__12zNPCBPatrickFv, global
/* 80163CA8 00160D88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80163CAC 00160D8C  7C 08 02 A6 */	mflr r0
/* 80163CB0 00160D90  90 01 00 14 */	stw r0, 0x14(r1)
/* 80163CB4 00160D94  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80163CB8 00160D98  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80163CBC 00160D9C  7C 7E 1B 78 */	mr r30, r3
/* 80163CC0 00160DA0  80 63 02 B4 */	lwz r3, 0x2b4(r3)
/* 80163CC4 00160DA4  54 60 05 EF */	rlwinm. r0, r3, 0, 23, 23
/* 80163CC8 00160DA8  41 82 00 10 */	beq .L_80163CD8
/* 80163CCC 00160DAC  3C 60 4E 47 */	lis r3, 0x4e47
/* 80163CD0 00160DB0  38 63 42 5A */	addi r3, r3, 0x425a
/* 80163CD4 00160DB4  48 00 00 74 */	b .L_80163D48
.L_80163CD8:
/* 80163CD8 00160DB8  54 60 07 BD */	rlwinm. r0, r3, 0, 30, 30
/* 80163CDC 00160DBC  41 82 00 10 */	beq .L_80163CEC
/* 80163CE0 00160DC0  3C 60 4E 47 */	lis r3, 0x4e47
/* 80163CE4 00160DC4  38 63 42 5B */	addi r3, r3, 0x425b
/* 80163CE8 00160DC8  48 00 00 60 */	b .L_80163D48
.L_80163CEC:
/* 80163CEC 00160DCC  80 9E 03 00 */	lwz r4, 0x300(r30)
/* 80163CF0 00160DD0  54 83 10 3A */	slwi r3, r4, 2
/* 80163CF4 00160DD4  38 04 00 01 */	addi r0, r4, 0x1
/* 80163CF8 00160DD8  7C 7E 1A 14 */	add r3, r30, r3
/* 80163CFC 00160DDC  83 E3 03 04 */	lwz r31, 0x304(r3)
/* 80163D00 00160DE0  90 1E 03 00 */	stw r0, 0x300(r30)
/* 80163D04 00160DE4  80 7E 03 00 */	lwz r3, 0x300(r30)
/* 80163D08 00160DE8  80 1E 02 FC */	lwz r0, 0x2fc(r30)
/* 80163D0C 00160DEC  7C 03 00 00 */	cmpw r3, r0
/* 80163D10 00160DF0  41 80 00 0C */	blt .L_80163D1C
/* 80163D14 00160DF4  38 00 00 00 */	li r0, 0x0
/* 80163D18 00160DF8  90 1E 03 00 */	stw r0, 0x300(r30)
.L_80163D1C:
/* 80163D1C 00160DFC  3C 1F B1 B9 */	addis r0, r31, 0xb1b9
/* 80163D20 00160E00  28 00 42 61 */	cmplwi r0, 0x4261
/* 80163D24 00160E04  40 82 00 20 */	bne .L_80163D44
/* 80163D28 00160E08  7F C3 F3 78 */	mr r3, r30
/* 80163D2C 00160E0C  48 00 02 5D */	bl canSpawnChucks__12zNPCBPatrickFv
/* 80163D30 00160E10  28 03 00 00 */	cmplwi r3, 0x0
/* 80163D34 00160E14  40 82 00 10 */	bne .L_80163D44
/* 80163D38 00160E18  7F C3 F3 78 */	mr r3, r30
/* 80163D3C 00160E1C  4B FF FF 6D */	bl nextGoal__12zNPCBPatrickFv
/* 80163D40 00160E20  7C 7F 1B 78 */	mr r31, r3
.L_80163D44:
/* 80163D44 00160E24  7F E3 FB 78 */	mr r3, r31
.L_80163D48:
/* 80163D48 00160E28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80163D4C 00160E2C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80163D50 00160E30  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80163D54 00160E34  7C 08 03 A6 */	mtlr r0
/* 80163D58 00160E38  38 21 00 10 */	addi r1, r1, 0x10
/* 80163D5C 00160E3C  4E 80 00 20 */	blr
.endfn nextGoal__12zNPCBPatrickFv

# zNPCBPatrick::getNextFreeGlob()
.fn getNextFreeGlob__12zNPCBPatrickFv, global
/* 80163D60 00160E40  80 83 13 BC */	lwz r4, 0x13bc(r3)
/* 80163D64 00160E44  38 04 00 01 */	addi r0, r4, 0x1
/* 80163D68 00160E48  90 03 13 BC */	stw r0, 0x13bc(r3)
/* 80163D6C 00160E4C  1C 84 00 54 */	mulli r4, r4, 0x54
/* 80163D70 00160E50  80 03 13 BC */	lwz r0, 0x13bc(r3)
/* 80163D74 00160E54  38 84 03 54 */	addi r4, r4, 0x354
/* 80163D78 00160E58  2C 00 00 32 */	cmpwi r0, 0x32
/* 80163D7C 00160E5C  7C 83 22 14 */	add r4, r3, r4
/* 80163D80 00160E60  41 80 00 0C */	blt .L_80163D8C
/* 80163D84 00160E64  38 00 00 00 */	li r0, 0x0
/* 80163D88 00160E68  90 03 13 BC */	stw r0, 0x13bc(r3)
.L_80163D8C:
/* 80163D8C 00160E6C  38 00 00 01 */	li r0, 0x1
/* 80163D90 00160E70  7C 83 23 78 */	mr r3, r4
/* 80163D94 00160E74  90 04 00 50 */	stw r0, 0x50(r4)
/* 80163D98 00160E78  4E 80 00 20 */	blr
.endfn getNextFreeGlob__12zNPCBPatrickFv

# zNPCBPatrick::playSplat(xVec3*)
.fn playSplat__12zNPCBPatrickFP5xVec3, global
/* 80163D9C 00160E7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80163DA0 00160E80  7C 08 02 A6 */	mflr r0
/* 80163DA4 00160E84  90 01 00 14 */	stw r0, 0x14(r1)
/* 80163DA8 00160E88  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80163DAC 00160E8C  7C 9F 23 78 */	mr r31, r4
/* 80163DB0 00160E90  C0 23 13 C0 */	lfs f1, 0x13c0(r3)
/* 80163DB4 00160E94  C0 02 AA 50 */	lfs f0, "@1664"@sda21(r2)
/* 80163DB8 00160E98  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80163DBC 00160E9C  40 81 01 B8 */	ble .L_80163F74
/* 80163DC0 00160EA0  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80163DC4 00160EA4  D0 03 13 C0 */	stfs f0, 0x13c0(r3)
/* 80163DC8 00160EA8  4B EC CE C1 */	bl xurand__Fv
/* 80163DCC 00160EAC  C0 42 AA A0 */	lfs f2, "@2077"@sda21(r2)
/* 80163DD0 00160EB0  C0 02 A9 C0 */	lfs f0, "@831"@sda21(r2)
/* 80163DD4 00160EB4  EC 22 00 72 */	fmuls f1, f2, f1
/* 80163DD8 00160EB8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80163DDC 00160EBC  40 80 00 40 */	bge .L_80163E1C
/* 80163DE0 00160EC0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80163DE4 00160EC4  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 80163DE8 00160EC8  38 63 04 AC */	addi r3, r3, 0x4ac
/* 80163DEC 00160ECC  4B EE 84 29 */	bl xStrHash__FPCc
/* 80163DF0 00160ED0  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80163DF4 00160ED4  7F E6 FB 78 */	mr r6, r31
/* 80163DF8 00160ED8  C0 22 AA A4 */	lfs f1, "@2078"@sda21(r2)
/* 80163DFC 00160EDC  38 80 00 00 */	li r4, 0x0
/* 80163E00 00160EE0  FC A0 10 90 */	fmr f5, f2
/* 80163E04 00160EE4  C0 62 A9 D8 */	lfs f3, "@891"@sda21(r2)
/* 80163E08 00160EE8  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 80163E0C 00160EEC  38 A0 00 00 */	li r5, 0x0
/* 80163E10 00160EF0  38 E0 00 00 */	li r7, 0x0
/* 80163E14 00160EF4  4B EE 4C 81 */	bl xSndPlay3D__FUiffUiUiPC5xVec3ff14sound_categoryf
/* 80163E18 00160EF8  48 00 01 5C */	b .L_80163F74
.L_80163E1C:
/* 80163E1C 00160EFC  C0 02 A9 D8 */	lfs f0, "@891"@sda21(r2)
/* 80163E20 00160F00  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80163E24 00160F04  40 80 00 40 */	bge .L_80163E64
/* 80163E28 00160F08  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80163E2C 00160F0C  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 80163E30 00160F10  38 63 04 C0 */	addi r3, r3, 0x4c0
/* 80163E34 00160F14  4B EE 83 E1 */	bl xStrHash__FPCc
/* 80163E38 00160F18  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80163E3C 00160F1C  7F E6 FB 78 */	mr r6, r31
/* 80163E40 00160F20  C0 22 AA A4 */	lfs f1, "@2078"@sda21(r2)
/* 80163E44 00160F24  38 80 00 00 */	li r4, 0x0
/* 80163E48 00160F28  FC A0 10 90 */	fmr f5, f2
/* 80163E4C 00160F2C  C0 62 A9 D8 */	lfs f3, "@891"@sda21(r2)
/* 80163E50 00160F30  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 80163E54 00160F34  38 A0 00 00 */	li r5, 0x0
/* 80163E58 00160F38  38 E0 00 00 */	li r7, 0x0
/* 80163E5C 00160F3C  4B EE 4C 39 */	bl xSndPlay3D__FUiffUiUiPC5xVec3ff14sound_categoryf
/* 80163E60 00160F40  48 00 01 14 */	b .L_80163F74
.L_80163E64:
/* 80163E64 00160F44  C0 02 A9 F8 */	lfs f0, "@1051"@sda21(r2)
/* 80163E68 00160F48  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80163E6C 00160F4C  40 80 00 40 */	bge .L_80163EAC
/* 80163E70 00160F50  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80163E74 00160F54  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 80163E78 00160F58  38 63 04 D4 */	addi r3, r3, 0x4d4
/* 80163E7C 00160F5C  4B EE 83 99 */	bl xStrHash__FPCc
/* 80163E80 00160F60  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80163E84 00160F64  7F E6 FB 78 */	mr r6, r31
/* 80163E88 00160F68  C0 22 AA A4 */	lfs f1, "@2078"@sda21(r2)
/* 80163E8C 00160F6C  38 80 00 00 */	li r4, 0x0
/* 80163E90 00160F70  FC A0 10 90 */	fmr f5, f2
/* 80163E94 00160F74  C0 62 A9 D8 */	lfs f3, "@891"@sda21(r2)
/* 80163E98 00160F78  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 80163E9C 00160F7C  38 A0 00 00 */	li r5, 0x0
/* 80163EA0 00160F80  38 E0 00 00 */	li r7, 0x0
/* 80163EA4 00160F84  4B EE 4B F1 */	bl xSndPlay3D__FUiffUiUiPC5xVec3ff14sound_categoryf
/* 80163EA8 00160F88  48 00 00 CC */	b .L_80163F74
.L_80163EAC:
/* 80163EAC 00160F8C  C0 02 AA 68 */	lfs f0, "@1670"@sda21(r2)
/* 80163EB0 00160F90  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80163EB4 00160F94  40 80 00 40 */	bge .L_80163EF4
/* 80163EB8 00160F98  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80163EBC 00160F9C  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 80163EC0 00160FA0  38 63 04 E8 */	addi r3, r3, 0x4e8
/* 80163EC4 00160FA4  4B EE 83 51 */	bl xStrHash__FPCc
/* 80163EC8 00160FA8  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80163ECC 00160FAC  7F E6 FB 78 */	mr r6, r31
/* 80163ED0 00160FB0  C0 22 AA A4 */	lfs f1, "@2078"@sda21(r2)
/* 80163ED4 00160FB4  38 80 00 00 */	li r4, 0x0
/* 80163ED8 00160FB8  FC A0 10 90 */	fmr f5, f2
/* 80163EDC 00160FBC  C0 62 A9 D8 */	lfs f3, "@891"@sda21(r2)
/* 80163EE0 00160FC0  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 80163EE4 00160FC4  38 A0 00 00 */	li r5, 0x0
/* 80163EE8 00160FC8  38 E0 00 00 */	li r7, 0x0
/* 80163EEC 00160FCC  4B EE 4B A9 */	bl xSndPlay3D__FUiffUiUiPC5xVec3ff14sound_categoryf
/* 80163EF0 00160FD0  48 00 00 84 */	b .L_80163F74
.L_80163EF4:
/* 80163EF4 00160FD4  C0 02 A9 F0 */	lfs f0, "@1049"@sda21(r2)
/* 80163EF8 00160FD8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80163EFC 00160FDC  40 80 00 40 */	bge .L_80163F3C
/* 80163F00 00160FE0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80163F04 00160FE4  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 80163F08 00160FE8  38 63 04 FC */	addi r3, r3, 0x4fc
/* 80163F0C 00160FEC  4B EE 83 09 */	bl xStrHash__FPCc
/* 80163F10 00160FF0  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80163F14 00160FF4  7F E6 FB 78 */	mr r6, r31
/* 80163F18 00160FF8  C0 22 AA A4 */	lfs f1, "@2078"@sda21(r2)
/* 80163F1C 00160FFC  38 80 00 00 */	li r4, 0x0
/* 80163F20 00161000  FC A0 10 90 */	fmr f5, f2
/* 80163F24 00161004  C0 62 A9 D8 */	lfs f3, "@891"@sda21(r2)
/* 80163F28 00161008  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 80163F2C 0016100C  38 A0 00 00 */	li r5, 0x0
/* 80163F30 00161010  38 E0 00 00 */	li r7, 0x0
/* 80163F34 00161014  4B EE 4B 61 */	bl xSndPlay3D__FUiffUiUiPC5xVec3ff14sound_categoryf
/* 80163F38 00161018  48 00 00 3C */	b .L_80163F74
.L_80163F3C:
/* 80163F3C 0016101C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80163F40 00161020  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 80163F44 00161024  38 63 05 10 */	addi r3, r3, 0x510
/* 80163F48 00161028  4B EE 82 CD */	bl xStrHash__FPCc
/* 80163F4C 0016102C  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80163F50 00161030  7F E6 FB 78 */	mr r6, r31
/* 80163F54 00161034  C0 22 AA A4 */	lfs f1, "@2078"@sda21(r2)
/* 80163F58 00161038  38 80 00 00 */	li r4, 0x0
/* 80163F5C 0016103C  FC A0 10 90 */	fmr f5, f2
/* 80163F60 00161040  C0 62 A9 D8 */	lfs f3, "@891"@sda21(r2)
/* 80163F64 00161044  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 80163F68 00161048  38 A0 00 00 */	li r5, 0x0
/* 80163F6C 0016104C  38 E0 00 00 */	li r7, 0x0
/* 80163F70 00161050  4B EE 4B 25 */	bl xSndPlay3D__FUiffUiUiPC5xVec3ff14sound_categoryf
.L_80163F74:
/* 80163F74 00161054  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80163F78 00161058  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80163F7C 0016105C  7C 08 03 A6 */	mtlr r0
/* 80163F80 00161060  38 21 00 10 */	addi r1, r1, 0x10
/* 80163F84 00161064  4E 80 00 20 */	blr
.endfn playSplat__12zNPCBPatrickFP5xVec3

# zNPCBPatrick::canSpawnChucks()
.fn canSpawnChucks__12zNPCBPatrickFv, global
/* 80163F88 00161068  80 03 13 C8 */	lwz r0, 0x13c8(r3)
/* 80163F8C 0016106C  38 80 00 00 */	li r4, 0x0
/* 80163F90 00161070  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80163F94 00161074  41 82 00 0C */	beq .L_80163FA0
/* 80163F98 00161078  38 80 00 01 */	li r4, 0x1
/* 80163F9C 0016107C  48 00 00 28 */	b .L_80163FC4
.L_80163FA0:
/* 80163FA0 00161080  80 03 13 CC */	lwz r0, 0x13cc(r3)
/* 80163FA4 00161084  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80163FA8 00161088  41 82 00 0C */	beq .L_80163FB4
/* 80163FAC 0016108C  38 80 00 01 */	li r4, 0x1
/* 80163FB0 00161090  48 00 00 14 */	b .L_80163FC4
.L_80163FB4:
/* 80163FB4 00161094  80 03 13 D0 */	lwz r0, 0x13d0(r3)
/* 80163FB8 00161098  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80163FBC 0016109C  41 82 00 08 */	beq .L_80163FC4
/* 80163FC0 001610A0  38 80 00 01 */	li r4, 0x1
.L_80163FC4:
/* 80163FC4 001610A4  7C 83 23 78 */	mr r3, r4
/* 80163FC8 001610A8  4E 80 00 20 */	blr
.endfn canSpawnChucks__12zNPCBPatrickFv

# zNPCBPatrick::gotoRound(int)
.fn gotoRound__12zNPCBPatrickFi, global
/* 80163FCC 001610AC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80163FD0 001610B0  7C 08 02 A6 */	mflr r0
/* 80163FD4 001610B4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80163FD8 001610B8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80163FDC 001610BC  7C 7F 1B 78 */	mr r31, r3
/* 80163FE0 001610C0  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 80163FE4 001610C4  80 03 02 BC */	lwz r0, 0x2bc(r3)
/* 80163FE8 001610C8  2C 00 00 03 */	cmpwi r0, 0x3
/* 80163FEC 001610CC  41 82 01 30 */	beq .L_8016411C
/* 80163FF0 001610D0  40 80 00 14 */	bge .L_80164004
/* 80163FF4 001610D4  2C 00 00 01 */	cmpwi r0, 0x1
/* 80163FF8 001610D8  41 82 00 18 */	beq .L_80164010
/* 80163FFC 001610DC  40 80 00 A4 */	bge .L_801640A0
/* 80164000 001610E0  48 00 01 A8 */	b .L_801641A8
.L_80164004:
/* 80164004 001610E4  2C 00 00 05 */	cmpwi r0, 0x5
/* 80164008 001610E8  40 80 01 A0 */	bge .L_801641A8
/* 8016400C 001610EC  48 00 01 6C */	b .L_80164178
.L_80164010:
/* 80164010 001610F0  38 00 00 0C */	li r0, 0xc
/* 80164014 001610F4  3C 60 4E 47 */	lis r3, 0x4e47
/* 80164018 001610F8  90 1F 02 FC */	stw r0, 0x2fc(r31)
/* 8016401C 001610FC  39 03 42 5A */	addi r8, r3, 0x425a
/* 80164020 00161100  3C 00 43 30 */	lis r0, 0x4330
/* 80164024 00161104  38 E3 42 5F */	addi r7, r3, 0x425f
/* 80164028 00161108  91 1F 03 04 */	stw r8, 0x304(r31)
/* 8016402C 0016110C  38 C3 42 5D */	addi r6, r3, 0x425d
/* 80164030 00161110  38 A3 42 62 */	addi r5, r3, 0x4262
/* 80164034 00161114  38 80 00 00 */	li r4, 0x0
/* 80164038 00161118  90 FF 03 08 */	stw r7, 0x308(r31)
/* 8016403C 0016111C  38 60 00 09 */	li r3, 0x9
/* 80164040 00161120  91 1F 03 0C */	stw r8, 0x30c(r31)
/* 80164044 00161124  90 DF 03 10 */	stw r6, 0x310(r31)
/* 80164048 00161128  91 1F 03 14 */	stw r8, 0x314(r31)
/* 8016404C 0016112C  90 BF 03 18 */	stw r5, 0x318(r31)
/* 80164050 00161130  91 1F 03 1C */	stw r8, 0x31c(r31)
/* 80164054 00161134  90 FF 03 20 */	stw r7, 0x320(r31)
/* 80164058 00161138  91 1F 03 24 */	stw r8, 0x324(r31)
/* 8016405C 0016113C  90 DF 03 28 */	stw r6, 0x328(r31)
/* 80164060 00161140  91 1F 03 2C */	stw r8, 0x32c(r31)
/* 80164064 00161144  90 BF 03 30 */	stw r5, 0x330(r31)
/* 80164068 00161148  90 9F 03 00 */	stw r4, 0x300(r31)
/* 8016406C 0016114C  90 7F 02 B8 */	stw r3, 0x2b8(r31)
/* 80164070 00161150  90 9F 02 C4 */	stw r4, 0x2c4(r31)
/* 80164074 00161154  80 7F 02 C4 */	lwz r3, 0x2c4(r31)
/* 80164078 00161158  90 01 00 08 */	stw r0, 0x8(r1)
/* 8016407C 0016115C  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80164080 00161160  C8 42 A9 D0 */	lfd f2, "@875"@sda21(r2)
/* 80164084 00161164  90 01 00 0C */	stw r0, 0xc(r1)
/* 80164088 00161168  C0 02 A9 E4 */	lfs f0, "@1046"@sda21(r2)
/* 8016408C 0016116C  C8 21 00 08 */	lfd f1, 0x8(r1)
/* 80164090 00161170  EC 21 10 28 */	fsubs f1, f1, f2
/* 80164094 00161174  EC 01 00 28 */	fsubs f0, f1, f0
/* 80164098 00161178  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 8016409C 0016117C  48 00 01 0C */	b .L_801641A8
.L_801640A0:
/* 801640A0 00161180  38 00 00 08 */	li r0, 0x8
/* 801640A4 00161184  3C 60 4E 47 */	lis r3, 0x4e47
/* 801640A8 00161188  90 1F 02 FC */	stw r0, 0x2fc(r31)
/* 801640AC 0016118C  38 E3 42 5A */	addi r7, r3, 0x425a
/* 801640B0 00161190  3C 00 43 30 */	lis r0, 0x4330
/* 801640B4 00161194  38 C3 42 5D */	addi r6, r3, 0x425d
/* 801640B8 00161198  90 FF 03 04 */	stw r7, 0x304(r31)
/* 801640BC 0016119C  38 A3 42 62 */	addi r5, r3, 0x4262
/* 801640C0 001611A0  38 80 00 00 */	li r4, 0x0
/* 801640C4 001611A4  38 60 00 06 */	li r3, 0x6
/* 801640C8 001611A8  90 DF 03 08 */	stw r6, 0x308(r31)
/* 801640CC 001611AC  90 FF 03 0C */	stw r7, 0x30c(r31)
/* 801640D0 001611B0  90 BF 03 10 */	stw r5, 0x310(r31)
/* 801640D4 001611B4  90 FF 03 14 */	stw r7, 0x314(r31)
/* 801640D8 001611B8  90 DF 03 18 */	stw r6, 0x318(r31)
/* 801640DC 001611BC  90 FF 03 1C */	stw r7, 0x31c(r31)
/* 801640E0 001611C0  90 BF 03 20 */	stw r5, 0x320(r31)
/* 801640E4 001611C4  90 9F 03 00 */	stw r4, 0x300(r31)
/* 801640E8 001611C8  90 7F 02 B8 */	stw r3, 0x2b8(r31)
/* 801640EC 001611CC  90 9F 02 C4 */	stw r4, 0x2c4(r31)
/* 801640F0 001611D0  80 7F 02 C4 */	lwz r3, 0x2c4(r31)
/* 801640F4 001611D4  90 01 00 08 */	stw r0, 0x8(r1)
/* 801640F8 001611D8  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 801640FC 001611DC  C8 42 A9 D0 */	lfd f2, "@875"@sda21(r2)
/* 80164100 001611E0  90 01 00 0C */	stw r0, 0xc(r1)
/* 80164104 001611E4  C0 02 A9 E4 */	lfs f0, "@1046"@sda21(r2)
/* 80164108 001611E8  C8 21 00 08 */	lfd f1, 0x8(r1)
/* 8016410C 001611EC  EC 21 10 28 */	fsubs f1, f1, f2
/* 80164110 001611F0  EC 01 00 28 */	fsubs f0, f1, f0
/* 80164114 001611F4  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 80164118 001611F8  48 00 00 90 */	b .L_801641A8
.L_8016411C:
/* 8016411C 001611FC  38 00 00 0A */	li r0, 0xa
/* 80164120 00161200  3C 60 4E 47 */	lis r3, 0x4e47
/* 80164124 00161204  90 1F 02 FC */	stw r0, 0x2fc(r31)
/* 80164128 00161208  38 E3 42 5A */	addi r7, r3, 0x425a
/* 8016412C 0016120C  38 C3 42 60 */	addi r6, r3, 0x4260
/* 80164130 00161210  38 A3 42 5D */	addi r5, r3, 0x425d
/* 80164134 00161214  90 FF 03 04 */	stw r7, 0x304(r31)
/* 80164138 00161218  38 83 42 62 */	addi r4, r3, 0x4262
/* 8016413C 0016121C  38 60 00 00 */	li r3, 0x0
/* 80164140 00161220  38 00 00 03 */	li r0, 0x3
/* 80164144 00161224  90 DF 03 08 */	stw r6, 0x308(r31)
/* 80164148 00161228  90 BF 03 0C */	stw r5, 0x30c(r31)
/* 8016414C 0016122C  90 FF 03 10 */	stw r7, 0x310(r31)
/* 80164150 00161230  90 9F 03 14 */	stw r4, 0x314(r31)
/* 80164154 00161234  90 FF 03 18 */	stw r7, 0x318(r31)
/* 80164158 00161238  90 DF 03 1C */	stw r6, 0x31c(r31)
/* 8016415C 0016123C  90 BF 03 20 */	stw r5, 0x320(r31)
/* 80164160 00161240  90 FF 03 24 */	stw r7, 0x324(r31)
/* 80164164 00161244  90 9F 03 28 */	stw r4, 0x328(r31)
/* 80164168 00161248  90 7F 03 00 */	stw r3, 0x300(r31)
/* 8016416C 0016124C  90 1F 02 B8 */	stw r0, 0x2b8(r31)
/* 80164170 00161250  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 80164174 00161254  48 00 00 34 */	b .L_801641A8
.L_80164178:
/* 80164178 00161258  38 80 00 24 */	li r4, 0x24
/* 8016417C 0016125C  4B EB B4 75 */	bl zEntEvent__FP5xBaseUi
/* 80164180 00161260  38 00 00 01 */	li r0, 0x1
/* 80164184 00161264  3C 60 4E 47 */	lis r3, 0x4e47
/* 80164188 00161268  90 1F 02 FC */	stw r0, 0x2fc(r31)
/* 8016418C 0016126C  38 83 42 5A */	addi r4, r3, 0x425a
/* 80164190 00161270  38 60 00 00 */	li r3, 0x0
/* 80164194 00161274  38 00 00 03 */	li r0, 0x3
/* 80164198 00161278  90 9F 03 04 */	stw r4, 0x304(r31)
/* 8016419C 0016127C  90 7F 03 00 */	stw r3, 0x300(r31)
/* 801641A0 00161280  90 7F 02 B8 */	stw r3, 0x2b8(r31)
/* 801641A4 00161284  90 1F 02 C4 */	stw r0, 0x2c4(r31)
.L_801641A8:
/* 801641A8 00161288  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801641AC 0016128C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801641B0 00161290  7C 08 03 A6 */	mtlr r0
/* 801641B4 00161294  38 21 00 20 */	addi r1, r1, 0x20
/* 801641B8 00161298  4E 80 00 20 */	blr
.endfn gotoRound__12zNPCBPatrickFi

# zNPCBPatrick::hiddenByCutscene()
.fn hiddenByCutscene__12zNPCBPatrickFv, global
/* 801641BC 0016129C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801641C0 001612A0  7C 08 02 A6 */	mflr r0
/* 801641C4 001612A4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801641C8 001612A8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801641CC 001612AC  7C 7F 1B 78 */	mr r31, r3
/* 801641D0 001612B0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801641D4 001612B4  7F FE FB 78 */	mr r30, r31
/* 801641D8 001612B8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801641DC 001612BC  3B A0 00 00 */	li r29, 0x0
.L_801641E0:
/* 801641E0 001612C0  80 7E 19 00 */	lwz r3, 0x1900(r30)
/* 801641E4 001612C4  38 80 00 55 */	li r4, 0x55
/* 801641E8 001612C8  80 03 01 6C */	lwz r0, 0x16c(r3)
/* 801641EC 001612CC  54 00 00 32 */	clrrwi r0, r0, 6
/* 801641F0 001612D0  60 00 00 01 */	ori r0, r0, 0x1
/* 801641F4 001612D4  90 03 01 6C */	stw r0, 0x16c(r3)
/* 801641F8 001612D8  80 7E 19 00 */	lwz r3, 0x1900(r30)
/* 801641FC 001612DC  4B EB B3 F5 */	bl zEntEvent__FP5xBaseUi
/* 80164200 001612E0  80 7E 19 00 */	lwz r3, 0x1900(r30)
/* 80164204 001612E4  3B BD 00 01 */	addi r29, r29, 0x1
/* 80164208 001612E8  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 8016420C 001612EC  2C 1D 00 02 */	cmpwi r29, 0x2
/* 80164210 001612F0  3B DE 00 04 */	addi r30, r30, 0x4
/* 80164214 001612F4  D0 03 01 7C */	stfs f0, 0x17c(r3)
/* 80164218 001612F8  41 80 FF C8 */	blt .L_801641E0
/* 8016421C 001612FC  80 1F 02 BC */	lwz r0, 0x2bc(r31)
/* 80164220 00161300  2C 00 00 03 */	cmpwi r0, 0x3
/* 80164224 00161304  41 82 01 40 */	beq .L_80164364
/* 80164228 00161308  40 80 00 14 */	bge .L_8016423C
/* 8016422C 0016130C  2C 00 00 01 */	cmpwi r0, 0x1
/* 80164230 00161310  41 82 00 18 */	beq .L_80164248
/* 80164234 00161314  40 80 01 10 */	bge .L_80164344
/* 80164238 00161318  48 00 02 50 */	b .L_80164488
.L_8016423C:
/* 8016423C 0016131C  2C 00 00 05 */	cmpwi r0, 0x5
/* 80164240 00161320  40 80 02 48 */	bge .L_80164488
/* 80164244 00161324  48 00 02 30 */	b .L_80164474
.L_80164248:
/* 80164248 00161328  38 60 00 17 */	li r3, 0x17
/* 8016424C 0016132C  4B F1 CF F5 */	bl zEntPlayer_SNDStop__F14_tagePlayerSnd
/* 80164250 00161330  38 80 00 00 */	li r4, 0x0
/* 80164254 00161334  3C 60 80 3C */	lis r3, globals@ha
/* 80164258 00161338  90 8D 8D 60 */	stw r4, gCurrentPlayer@sda21(r13)
/* 8016425C 0016133C  38 63 05 58 */	addi r3, r3, globals@l
/* 80164260 00161340  38 00 00 04 */	li r0, 0x4
/* 80164264 00161344  7F E5 FB 78 */	mr r5, r31
/* 80164268 00161348  90 83 18 90 */	stw r4, 0x1890(r3)
/* 8016426C 0016134C  7C 09 03 A6 */	mtctr r0
.L_80164270:
/* 80164270 00161350  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80164274 00161354  38 00 00 00 */	li r0, 0x0
/* 80164278 00161358  D0 05 15 94 */	stfs f0, 0x1594(r5)
/* 8016427C 0016135C  90 05 15 A0 */	stw r0, 0x15a0(r5)
/* 80164280 00161360  C0 22 AA 20 */	lfs f1, "@1141"@sda21(r2)
/* 80164284 00161364  C0 05 15 9C */	lfs f0, 0x159c(r5)
/* 80164288 00161368  EC 01 00 2A */	fadds f0, f1, f0
/* 8016428C 0016136C  D0 05 15 98 */	stfs f0, 0x1598(r5)
/* 80164290 00161370  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80164294 00161374  D0 05 15 A8 */	stfs f0, 0x15a8(r5)
/* 80164298 00161378  90 05 15 B4 */	stw r0, 0x15b4(r5)
/* 8016429C 0016137C  C0 22 AA 20 */	lfs f1, "@1141"@sda21(r2)
/* 801642A0 00161380  C0 05 15 B0 */	lfs f0, 0x15b0(r5)
/* 801642A4 00161384  EC 01 00 2A */	fadds f0, f1, f0
/* 801642A8 00161388  D0 05 15 AC */	stfs f0, 0x15ac(r5)
/* 801642AC 0016138C  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801642B0 00161390  D0 05 15 BC */	stfs f0, 0x15bc(r5)
/* 801642B4 00161394  90 05 15 C8 */	stw r0, 0x15c8(r5)
/* 801642B8 00161398  C0 22 AA 20 */	lfs f1, "@1141"@sda21(r2)
/* 801642BC 0016139C  C0 05 15 C4 */	lfs f0, 0x15c4(r5)
/* 801642C0 001613A0  EC 01 00 2A */	fadds f0, f1, f0
/* 801642C4 001613A4  D0 05 15 C0 */	stfs f0, 0x15c0(r5)
/* 801642C8 001613A8  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801642CC 001613AC  D0 05 15 D0 */	stfs f0, 0x15d0(r5)
/* 801642D0 001613B0  90 05 15 DC */	stw r0, 0x15dc(r5)
/* 801642D4 001613B4  C0 22 AA 20 */	lfs f1, "@1141"@sda21(r2)
/* 801642D8 001613B8  C0 05 15 D8 */	lfs f0, 0x15d8(r5)
/* 801642DC 001613BC  EC 01 00 2A */	fadds f0, f1, f0
/* 801642E0 001613C0  D0 05 15 D4 */	stfs f0, 0x15d4(r5)
/* 801642E4 001613C4  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801642E8 001613C8  D0 05 15 E4 */	stfs f0, 0x15e4(r5)
/* 801642EC 001613CC  90 05 15 F0 */	stw r0, 0x15f0(r5)
/* 801642F0 001613D0  C0 22 AA 20 */	lfs f1, "@1141"@sda21(r2)
/* 801642F4 001613D4  C0 05 15 EC */	lfs f0, 0x15ec(r5)
/* 801642F8 001613D8  EC 01 00 2A */	fadds f0, f1, f0
/* 801642FC 001613DC  D0 05 15 E8 */	stfs f0, 0x15e8(r5)
/* 80164300 001613E0  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80164304 001613E4  D0 05 15 F8 */	stfs f0, 0x15f8(r5)
/* 80164308 001613E8  90 05 16 04 */	stw r0, 0x1604(r5)
/* 8016430C 001613EC  C0 22 AA 20 */	lfs f1, "@1141"@sda21(r2)
/* 80164310 001613F0  C0 05 16 00 */	lfs f0, 0x1600(r5)
/* 80164314 001613F4  EC 01 00 2A */	fadds f0, f1, f0
/* 80164318 001613F8  D0 05 15 FC */	stfs f0, 0x15fc(r5)
/* 8016431C 001613FC  38 A5 00 78 */	addi r5, r5, 0x78
/* 80164320 00161400  42 00 FF 50 */	bdnz .L_80164270
/* 80164324 00161404  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80164328 00161408  D0 1F 17 74 */	stfs f0, 0x1774(r31)
/* 8016432C 0016140C  90 1F 17 80 */	stw r0, 0x1780(r31)
/* 80164330 00161410  C0 22 AA 20 */	lfs f1, "@1141"@sda21(r2)
/* 80164334 00161414  C0 1F 17 7C */	lfs f0, 0x177c(r31)
/* 80164338 00161418  EC 01 00 2A */	fadds f0, f1, f0
/* 8016433C 0016141C  D0 1F 17 78 */	stfs f0, 0x1778(r31)
/* 80164340 00161420  48 00 01 48 */	b .L_80164488
.L_80164344:
/* 80164344 00161424  38 00 00 02 */	li r0, 0x2
/* 80164348 00161428  38 80 00 10 */	li r4, 0x10
/* 8016434C 0016142C  90 0D 8D 60 */	stw r0, gCurrentPlayer@sda21(r13)
/* 80164350 00161430  80 7F 18 E0 */	lwz r3, 0x18e0(r31)
/* 80164354 00161434  4B EB B2 9D */	bl zEntEvent__FP5xBaseUi
/* 80164358 00161438  80 7F 15 84 */	lwz r3, 0x1584(r31)
/* 8016435C 0016143C  4B EB 74 9D */	bl xEntShow__FP4xEnt
/* 80164360 00161440  48 00 01 28 */	b .L_80164488
.L_80164364:
/* 80164364 00161444  38 60 00 17 */	li r3, 0x17
/* 80164368 00161448  4B F1 CE D9 */	bl zEntPlayer_SNDStop__F14_tagePlayerSnd
/* 8016436C 0016144C  38 00 00 00 */	li r0, 0x0
/* 80164370 00161450  3C 60 80 3C */	lis r3, globals@ha
/* 80164374 00161454  90 0D 8D 60 */	stw r0, gCurrentPlayer@sda21(r13)
/* 80164378 00161458  38 63 05 58 */	addi r3, r3, globals@l
/* 8016437C 0016145C  38 80 00 10 */	li r4, 0x10
/* 80164380 00161460  90 03 18 90 */	stw r0, 0x1890(r3)
/* 80164384 00161464  80 7F 18 E0 */	lwz r3, 0x18e0(r31)
/* 80164388 00161468  4B EB B2 69 */	bl zEntEvent__FP5xBaseUi
/* 8016438C 0016146C  38 00 00 04 */	li r0, 0x4
/* 80164390 00161470  7F E3 FB 78 */	mr r3, r31
/* 80164394 00161474  7C 09 03 A6 */	mtctr r0
.L_80164398:
/* 80164398 00161478  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 8016439C 0016147C  38 00 00 00 */	li r0, 0x0
/* 801643A0 00161480  D0 03 15 94 */	stfs f0, 0x1594(r3)
/* 801643A4 00161484  90 03 15 A0 */	stw r0, 0x15a0(r3)
/* 801643A8 00161488  C0 22 AA 20 */	lfs f1, "@1141"@sda21(r2)
/* 801643AC 0016148C  C0 03 15 9C */	lfs f0, 0x159c(r3)
/* 801643B0 00161490  EC 01 00 2A */	fadds f0, f1, f0
/* 801643B4 00161494  D0 03 15 98 */	stfs f0, 0x1598(r3)
/* 801643B8 00161498  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801643BC 0016149C  D0 03 15 A8 */	stfs f0, 0x15a8(r3)
/* 801643C0 001614A0  90 03 15 B4 */	stw r0, 0x15b4(r3)
/* 801643C4 001614A4  C0 22 AA 20 */	lfs f1, "@1141"@sda21(r2)
/* 801643C8 001614A8  C0 03 15 B0 */	lfs f0, 0x15b0(r3)
/* 801643CC 001614AC  EC 01 00 2A */	fadds f0, f1, f0
/* 801643D0 001614B0  D0 03 15 AC */	stfs f0, 0x15ac(r3)
/* 801643D4 001614B4  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801643D8 001614B8  D0 03 15 BC */	stfs f0, 0x15bc(r3)
/* 801643DC 001614BC  90 03 15 C8 */	stw r0, 0x15c8(r3)
/* 801643E0 001614C0  C0 22 AA 20 */	lfs f1, "@1141"@sda21(r2)
/* 801643E4 001614C4  C0 03 15 C4 */	lfs f0, 0x15c4(r3)
/* 801643E8 001614C8  EC 01 00 2A */	fadds f0, f1, f0
/* 801643EC 001614CC  D0 03 15 C0 */	stfs f0, 0x15c0(r3)
/* 801643F0 001614D0  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801643F4 001614D4  D0 03 15 D0 */	stfs f0, 0x15d0(r3)
/* 801643F8 001614D8  90 03 15 DC */	stw r0, 0x15dc(r3)
/* 801643FC 001614DC  C0 22 AA 20 */	lfs f1, "@1141"@sda21(r2)
/* 80164400 001614E0  C0 03 15 D8 */	lfs f0, 0x15d8(r3)
/* 80164404 001614E4  EC 01 00 2A */	fadds f0, f1, f0
/* 80164408 001614E8  D0 03 15 D4 */	stfs f0, 0x15d4(r3)
/* 8016440C 001614EC  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80164410 001614F0  D0 03 15 E4 */	stfs f0, 0x15e4(r3)
/* 80164414 001614F4  90 03 15 F0 */	stw r0, 0x15f0(r3)
/* 80164418 001614F8  C0 22 AA 20 */	lfs f1, "@1141"@sda21(r2)
/* 8016441C 001614FC  C0 03 15 EC */	lfs f0, 0x15ec(r3)
/* 80164420 00161500  EC 01 00 2A */	fadds f0, f1, f0
/* 80164424 00161504  D0 03 15 E8 */	stfs f0, 0x15e8(r3)
/* 80164428 00161508  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 8016442C 0016150C  D0 03 15 F8 */	stfs f0, 0x15f8(r3)
/* 80164430 00161510  90 03 16 04 */	stw r0, 0x1604(r3)
/* 80164434 00161514  C0 22 AA 20 */	lfs f1, "@1141"@sda21(r2)
/* 80164438 00161518  C0 03 16 00 */	lfs f0, 0x1600(r3)
/* 8016443C 0016151C  EC 01 00 2A */	fadds f0, f1, f0
/* 80164440 00161520  D0 03 15 FC */	stfs f0, 0x15fc(r3)
/* 80164444 00161524  38 63 00 78 */	addi r3, r3, 0x78
/* 80164448 00161528  42 00 FF 50 */	bdnz .L_80164398
/* 8016444C 0016152C  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80164450 00161530  D0 1F 17 74 */	stfs f0, 0x1774(r31)
/* 80164454 00161534  90 1F 17 80 */	stw r0, 0x1780(r31)
/* 80164458 00161538  C0 22 AA 20 */	lfs f1, "@1141"@sda21(r2)
/* 8016445C 0016153C  C0 1F 17 7C */	lfs f0, 0x177c(r31)
/* 80164460 00161540  EC 01 00 2A */	fadds f0, f1, f0
/* 80164464 00161544  D0 1F 17 78 */	stfs f0, 0x1778(r31)
/* 80164468 00161548  80 7F 15 84 */	lwz r3, 0x1584(r31)
/* 8016446C 0016154C  4B EB 73 7D */	bl xEntHide__FP4xEnt
/* 80164470 00161550  48 00 00 18 */	b .L_80164488
.L_80164474:
/* 80164474 00161554  38 00 00 00 */	li r0, 0x0
/* 80164478 00161558  38 80 00 10 */	li r4, 0x10
/* 8016447C 0016155C  90 0D 8D 60 */	stw r0, gCurrentPlayer@sda21(r13)
/* 80164480 00161560  80 7F 18 E0 */	lwz r3, 0x18e0(r31)
/* 80164484 00161564  4B EB B1 6D */	bl zEntEvent__FP5xBaseUi
.L_80164488:
/* 80164488 00161568  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8016448C 0016156C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80164490 00161570  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80164494 00161574  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80164498 00161578  7C 08 03 A6 */	mtlr r0
/* 8016449C 0016157C  38 21 00 20 */	addi r1, r1, 0x20
/* 801644A0 00161580  4E 80 00 20 */	blr
.endfn hiddenByCutscene__12zNPCBPatrickFv

# zNPCBPatrick::ConveyorTimeLeft(zPlatform*, xVec3*)
.fn ConveyorTimeLeft__12zNPCBPatrickFP9zPlatformP5xVec3, global
/* 801644A4 00161584  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801644A8 00161588  7C 08 02 A6 */	mflr r0
/* 801644AC 0016158C  90 01 00 44 */	stw r0, 0x44(r1)
/* 801644B0 00161590  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 801644B4 00161594  F3 E1 00 38 */	psq_st f31, 0x38(r1), 0, qr0
/* 801644B8 00161598  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 801644BC 0016159C  F3 C1 00 28 */	psq_st f30, 0x28(r1), 0, qr0
/* 801644C0 001615A0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801644C4 001615A4  80 64 00 D4 */	lwz r3, 0xd4(r4)
/* 801644C8 001615A8  7C 9F 23 78 */	mr r31, r4
/* 801644CC 001615AC  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801644D0 001615B0  C0 23 00 04 */	lfs f1, 0x4(r3)
/* 801644D4 001615B4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801644D8 001615B8  40 80 00 0C */	bge .L_801644E4
/* 801644DC 001615BC  C3 DF 00 A0 */	lfs f30, 0xa0(r31)
/* 801644E0 001615C0  48 00 00 08 */	b .L_801644E8
.L_801644E4:
/* 801644E4 001615C4  C3 DF 00 94 */	lfs f30, 0x94(r31)
.L_801644E8:
/* 801644E8 001615C8  80 DF 00 AC */	lwz r6, 0xac(r31)
/* 801644EC 001615CC  7C A4 2B 78 */	mr r4, r5
/* 801644F0 001615D0  38 61 00 08 */	addi r3, r1, 0x8
/* 801644F4 001615D4  38 A6 00 30 */	addi r5, r6, 0x30
/* 801644F8 001615D8  4B EA A1 99 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 801644FC 001615DC  80 9F 00 AC */	lwz r4, 0xac(r31)
/* 80164500 001615E0  38 61 00 08 */	addi r3, r1, 0x8
/* 80164504 001615E4  4B EE 9F ED */	bl xVec3Dot__FPC5xVec3PC5xVec3
/* 80164508 001615E8  FF E0 08 90 */	fmr f31, f1
/* 8016450C 001615EC  80 7F 00 AC */	lwz r3, 0xac(r31)
/* 80164510 001615F0  4B EB 0B BD */	bl xVec3Length2__FPC5xVec3
/* 80164514 001615F4  EC 3F 08 24 */	fdivs f1, f31, f1
/* 80164518 001615F8  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8016451C 001615FC  C0 03 00 04 */	lfs f0, 0x4(r3)
/* 80164520 00161600  EC 3E 08 28 */	fsubs f1, f30, f1
/* 80164524 00161604  EC 21 00 24 */	fdivs f1, f1, f0
/* 80164528 00161608  E3 E1 00 38 */	psq_l f31, 0x38(r1), 0, qr0
/* 8016452C 0016160C  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80164530 00161610  E3 C1 00 28 */	psq_l f30, 0x28(r1), 0, qr0
/* 80164534 00161614  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 80164538 00161618  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8016453C 0016161C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80164540 00161620  7C 08 03 A6 */	mtlr r0
/* 80164544 00161624  38 21 00 40 */	addi r1, r1, 0x40
/* 80164548 00161628  4E 80 00 20 */	blr
.endfn ConveyorTimeLeft__12zNPCBPatrickFP9zPlatformP5xVec3

# zNPCBPatrick::ParabolaHitsConveyors(xParabola*, xCollis*)
.fn ParabolaHitsConveyors__12zNPCBPatrickFP9xParabolaP7xCollis, global
/* 8016454C 0016162C  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80164550 00161630  7C 08 02 A6 */	mflr r0
/* 80164554 00161634  90 01 00 74 */	stw r0, 0x74(r1)
/* 80164558 00161638  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8016455C 0016163C  F3 E1 00 68 */	psq_st f31, 0x68(r1), 0, qr0
/* 80164560 00161640  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 80164564 00161644  F3 C1 00 58 */	psq_st f30, 0x58(r1), 0, qr0
/* 80164568 00161648  BF 01 00 30 */	stmw r24, 0x30(r1)
/* 8016456C 0016164C  7C 98 23 78 */	mr r24, r4
/* 80164570 00161650  7C B9 2B 78 */	mr r25, r5
/* 80164574 00161654  3B 80 00 00 */	li r28, 0x0
/* 80164578 00161658  7C 7E 1B 78 */	mr r30, r3
.L_8016457C:
/* 8016457C 0016165C  83 BE 19 08 */	lwz r29, 0x1908(r30)
/* 80164580 00161660  C0 18 00 18 */	lfs f0, 0x18(r24)
/* 80164584 00161664  83 5D 00 AC */	lwz r26, 0xac(r29)
/* 80164588 00161668  FC 60 00 50 */	fneg f3, f0
/* 8016458C 0016166C  C0 82 A9 E4 */	lfs f4, "@1046"@sda21(r2)
/* 80164590 00161670  C0 5A 00 14 */	lfs f2, 0x14(r26)
/* 80164594 00161674  C0 3D 00 98 */	lfs f1, 0x98(r29)
/* 80164598 00161678  C0 1A 00 34 */	lfs f0, 0x34(r26)
/* 8016459C 0016167C  EF C4 00 F2 */	fmuls f30, f4, f3
/* 801645A0 00161680  C0 62 AA 68 */	lfs f3, "@1670"@sda21(r2)
/* 801645A4 00161684  EC 22 00 7A */	fmadds f1, f2, f1, f0
/* 801645A8 00161688  C0 58 00 04 */	lfs f2, 0x4(r24)
/* 801645AC 0016168C  EC 63 07 B2 */	fmuls f3, f3, f30
/* 801645B0 00161690  C3 F8 00 10 */	lfs f31, 0x10(r24)
/* 801645B4 00161694  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801645B8 00161698  EC 22 08 28 */	fsubs f1, f2, f1
/* 801645BC 0016169C  EC 23 00 72 */	fmuls f1, f3, f1
/* 801645C0 001616A0  EC 3F 0F F8 */	fmsubs f1, f31, f31, f1
/* 801645C4 001616A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801645C8 001616A8  41 80 01 1C */	blt .L_801646E4
/* 801645CC 001616AC  4B EA 62 31 */	bl xsqrt__Ff
/* 801645D0 001616B0  FC 60 F8 50 */	fneg f3, f31
/* 801645D4 001616B4  C0 02 A9 D8 */	lfs f0, "@891"@sda21(r2)
/* 801645D8 001616B8  3B E1 00 08 */	addi r31, r1, 0x8
/* 801645DC 001616BC  3B 60 00 00 */	li r27, 0x0
/* 801645E0 001616C0  EC 80 07 B2 */	fmuls f4, f0, f30
/* 801645E4 001616C4  EC 43 08 2A */	fadds f2, f3, f1
/* 801645E8 001616C8  EC 03 08 28 */	fsubs f0, f3, f1
/* 801645EC 001616CC  EC 22 20 24 */	fdivs f1, f2, f4
/* 801645F0 001616D0  EC 00 20 24 */	fdivs f0, f0, f4
/* 801645F4 001616D4  D0 21 00 08 */	stfs f1, 0x8(r1)
/* 801645F8 001616D8  D0 01 00 0C */	stfs f0, 0xc(r1)
.L_801645FC:
/* 801645FC 001616DC  C0 3F 00 00 */	lfs f1, 0x0(r31)
/* 80164600 001616E0  C0 18 00 1C */	lfs f0, 0x1c(r24)
/* 80164604 001616E4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80164608 001616E8  4C 41 13 82 */	cror eq, gt, eq
/* 8016460C 001616EC  40 82 00 C8 */	bne .L_801646D4
/* 80164610 001616F0  C0 18 00 20 */	lfs f0, 0x20(r24)
/* 80164614 001616F4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80164618 001616F8  40 80 00 BC */	bge .L_801646D4
/* 8016461C 001616FC  C0 19 00 10 */	lfs f0, 0x10(r25)
/* 80164620 00161700  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80164624 00161704  40 80 00 B0 */	bge .L_801646D4
/* 80164628 00161708  7F 03 C3 78 */	mr r3, r24
/* 8016462C 0016170C  38 81 00 1C */	addi r4, r1, 0x1c
/* 80164630 00161710  4B EB 10 7D */	bl xParabolaEvalPos__FPC9xParabolaP5xVec3f
/* 80164634 00161714  38 61 00 10 */	addi r3, r1, 0x10
/* 80164638 00161718  38 81 00 1C */	addi r4, r1, 0x1c
/* 8016463C 0016171C  38 BA 00 30 */	addi r5, r26, 0x30
/* 80164640 00161720  4B EA A0 51 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 80164644 00161724  7F 43 D3 78 */	mr r3, r26
/* 80164648 00161728  4B EB 0A 85 */	bl xVec3Length2__FPC5xVec3
/* 8016464C 0016172C  FF C0 08 90 */	fmr f30, f1
/* 80164650 00161730  38 7A 00 20 */	addi r3, r26, 0x20
/* 80164654 00161734  4B EB 0A 79 */	bl xVec3Length2__FPC5xVec3
/* 80164658 00161738  FF E0 08 90 */	fmr f31, f1
/* 8016465C 0016173C  7F 44 D3 78 */	mr r4, r26
/* 80164660 00161740  38 61 00 10 */	addi r3, r1, 0x10
/* 80164664 00161744  4B EE 9E 8D */	bl xVec3Dot__FPC5xVec3PC5xVec3
/* 80164668 00161748  EF C1 F0 24 */	fdivs f30, f1, f30
/* 8016466C 0016174C  38 61 00 10 */	addi r3, r1, 0x10
/* 80164670 00161750  38 9A 00 20 */	addi r4, r26, 0x20
/* 80164674 00161754  4B EE 9E 7D */	bl xVec3Dot__FPC5xVec3PC5xVec3
/* 80164678 00161758  EC 21 F8 24 */	fdivs f1, f1, f31
/* 8016467C 0016175C  C0 1D 00 A0 */	lfs f0, 0xa0(r29)
/* 80164680 00161760  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80164684 00161764  40 81 00 50 */	ble .L_801646D4
/* 80164688 00161768  C0 1D 00 94 */	lfs f0, 0x94(r29)
/* 8016468C 0016176C  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80164690 00161770  40 80 00 44 */	bge .L_801646D4
/* 80164694 00161774  C0 1D 00 A8 */	lfs f0, 0xa8(r29)
/* 80164698 00161778  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016469C 0016177C  40 81 00 38 */	ble .L_801646D4
/* 801646A0 00161780  C0 1D 00 9C */	lfs f0, 0x9c(r29)
/* 801646A4 00161784  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801646A8 00161788  40 80 00 2C */	bge .L_801646D4
/* 801646AC 0016178C  80 19 00 00 */	lwz r0, 0x0(r25)
/* 801646B0 00161790  38 79 00 20 */	addi r3, r25, 0x20
/* 801646B4 00161794  38 81 00 1C */	addi r4, r1, 0x1c
/* 801646B8 00161798  60 00 00 01 */	ori r0, r0, 0x1
/* 801646BC 0016179C  90 19 00 00 */	stw r0, 0x0(r25)
/* 801646C0 001617A0  4B EE 9E 1D */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 801646C4 001617A4  C0 1F 00 00 */	lfs f0, 0x0(r31)
/* 801646C8 001617A8  D0 19 00 10 */	stfs f0, 0x10(r25)
/* 801646CC 001617AC  80 1E 19 08 */	lwz r0, 0x1908(r30)
/* 801646D0 001617B0  90 19 00 08 */	stw r0, 0x8(r25)
.L_801646D4:
/* 801646D4 001617B4  3B 7B 00 01 */	addi r27, r27, 0x1
/* 801646D8 001617B8  3B FF 00 04 */	addi r31, r31, 0x4
/* 801646DC 001617BC  2C 1B 00 02 */	cmpwi r27, 0x2
/* 801646E0 001617C0  41 80 FF 1C */	blt .L_801645FC
.L_801646E4:
/* 801646E4 001617C4  3B 9C 00 01 */	addi r28, r28, 0x1
/* 801646E8 001617C8  3B DE 00 04 */	addi r30, r30, 0x4
/* 801646EC 001617CC  2C 1C 00 07 */	cmpwi r28, 0x7
/* 801646F0 001617D0  41 80 FE 8C */	blt .L_8016457C
/* 801646F4 001617D4  E3 E1 00 68 */	psq_l f31, 0x68(r1), 0, qr0
/* 801646F8 001617D8  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 801646FC 001617DC  E3 C1 00 58 */	psq_l f30, 0x58(r1), 0, qr0
/* 80164700 001617E0  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 80164704 001617E4  BB 01 00 30 */	lmw r24, 0x30(r1)
/* 80164708 001617E8  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8016470C 001617EC  7C 08 03 A6 */	mtlr r0
/* 80164710 001617F0  38 21 00 70 */	addi r1, r1, 0x70
/* 80164714 001617F4  4E 80 00 20 */	blr
.endfn ParabolaHitsConveyors__12zNPCBPatrickFP9xParabolaP7xCollis

# zNPCBPatrick::bossPatBoxCheckCollide(bossPatBox*)
.fn bossPatBoxCheckCollide__12zNPCBPatrickFP10bossPatBox, global
/* 80164718 001617F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016471C 001617FC  7C 08 02 A6 */	mflr r0
/* 80164720 00161800  90 01 00 14 */	stw r0, 0x14(r1)
/* 80164724 00161804  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80164728 00161808  7C 9F 23 78 */	mr r31, r4
/* 8016472C 0016180C  80 04 00 10 */	lwz r0, 0x10(r4)
/* 80164730 00161810  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80164734 00161814  41 82 00 9C */	beq .L_801647D0
/* 80164738 00161818  C0 3F 00 08 */	lfs f1, 0x8(r31)
/* 8016473C 0016181C  C0 02 AA A8 */	lfs f0, "@2215"@sda21(r2)
/* 80164740 00161820  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80164744 00161824  40 80 00 8C */	bge .L_801647D0
/* 80164748 00161828  80 9F 00 00 */	lwz r4, 0x0(r31)
/* 8016474C 0016182C  80 A3 00 24 */	lwz r5, 0x24(r3)
/* 80164750 00161830  80 84 00 24 */	lwz r4, 0x24(r4)
/* 80164754 00161834  80 C5 00 4C */	lwz r6, 0x4c(r5)
/* 80164758 00161838  80 A4 00 4C */	lwz r5, 0x4c(r4)
/* 8016475C 0016183C  C0 26 00 38 */	lfs f1, 0x38(r6)
/* 80164760 00161840  C0 05 00 38 */	lfs f0, 0x38(r5)
/* 80164764 00161844  C0 46 00 30 */	lfs f2, 0x30(r6)
/* 80164768 00161848  EC 61 00 28 */	fsubs f3, f1, f0
/* 8016476C 0016184C  C0 25 00 30 */	lfs f1, 0x30(r5)
/* 80164770 00161850  C0 02 AA 68 */	lfs f0, "@1670"@sda21(r2)
/* 80164774 00161854  EC 42 08 28 */	fsubs f2, f2, f1
/* 80164778 00161858  EC 23 00 F2 */	fmuls f1, f3, f3
/* 8016477C 0016185C  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 80164780 00161860  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80164784 00161864  40 80 00 4C */	bge .L_801647D0
/* 80164788 00161868  80 63 17 84 */	lwz r3, 0x1784(r3)
/* 8016478C 0016186C  28 03 00 00 */	cmplwi r3, 0x0
/* 80164790 00161870  41 82 00 20 */	beq .L_801647B0
/* 80164794 00161874  81 83 00 08 */	lwz r12, 0x8(r3)
/* 80164798 00161878  28 0C 00 00 */	cmplwi r12, 0x0
/* 8016479C 0016187C  41 82 00 14 */	beq .L_801647B0
/* 801647A0 00161880  38 A0 00 00 */	li r5, 0x0
/* 801647A4 00161884  38 C0 00 00 */	li r6, 0x0
/* 801647A8 00161888  7D 89 03 A6 */	mtctr r12
/* 801647AC 0016188C  4E 80 04 21 */	bctrl
.L_801647B0:
/* 801647B0 00161890  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801647B4 00161894  38 00 00 00 */	li r0, 0x0
/* 801647B8 00161898  D0 1F 00 04 */	stfs f0, 0x4(r31)
/* 801647BC 0016189C  90 1F 00 10 */	stw r0, 0x10(r31)
/* 801647C0 001618A0  C0 22 AA 20 */	lfs f1, "@1141"@sda21(r2)
/* 801647C4 001618A4  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 801647C8 001618A8  EC 01 00 2A */	fadds f0, f1, f0
/* 801647CC 001618AC  D0 1F 00 08 */	stfs f0, 0x8(r31)
.L_801647D0:
/* 801647D0 001618B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801647D4 001618B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801647D8 001618B8  7C 08 03 A6 */	mtlr r0
/* 801647DC 001618BC  38 21 00 10 */	addi r1, r1, 0x10
/* 801647E0 001618C0  4E 80 00 20 */	blr
.endfn bossPatBoxCheckCollide__12zNPCBPatrickFP10bossPatBox

# zNPCBPatrick::bossPatBoxUpdate(bossPatBox*, float)
.fn bossPatBoxUpdate__12zNPCBPatrickFP10bossPatBoxf, global
/* 801647E4 001618C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801647E8 001618C8  7C 08 02 A6 */	mflr r0
/* 801647EC 001618CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801647F0 001618D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801647F4 001618D4  7C 9F 23 78 */	mr r31, r4
/* 801647F8 001618D8  93 C1 00 08 */	stw r30, 0x8(r1)
/* 801647FC 001618DC  7C 7E 1B 78 */	mr r30, r3
/* 80164800 001618E0  80 04 00 10 */	lwz r0, 0x10(r4)
/* 80164804 001618E4  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80164808 001618E8  41 82 02 48 */	beq .L_80164A50
/* 8016480C 001618EC  C0 42 AA 08 */	lfs f2, "@1055"@sda21(r2)
/* 80164810 001618F0  C0 1F 00 04 */	lfs f0, 0x4(r31)
/* 80164814 001618F4  EC 02 00 7C */	fnmsubs f0, f2, f1, f0
/* 80164818 001618F8  D0 1F 00 04 */	stfs f0, 0x4(r31)
/* 8016481C 001618FC  C0 5F 00 04 */	lfs f2, 0x4(r31)
/* 80164820 00161900  C0 1F 00 08 */	lfs f0, 0x8(r31)
/* 80164824 00161904  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80164828 00161908  D0 1F 00 08 */	stfs f0, 0x8(r31)
/* 8016482C 0016190C  C0 3F 00 08 */	lfs f1, 0x8(r31)
/* 80164830 00161910  C0 1E 02 C0 */	lfs f0, 0x2c0(r30)
/* 80164834 00161914  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80164838 00161918  40 80 00 B4 */	bge .L_801648EC
/* 8016483C 0016191C  D0 1F 00 08 */	stfs f0, 0x8(r31)
/* 80164840 00161920  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80164844 00161924  D0 1F 00 04 */	stfs f0, 0x4(r31)
/* 80164848 00161928  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 8016484C 0016192C  54 60 07 BD */	rlwinm. r0, r3, 0, 30, 30
/* 80164850 00161930  40 82 01 D0 */	bne .L_80164A20
/* 80164854 00161934  60 60 00 02 */	ori r0, r3, 0x2
/* 80164858 00161938  90 1F 00 10 */	stw r0, 0x10(r31)
/* 8016485C 0016193C  80 7E 17 88 */	lwz r3, 0x1788(r30)
/* 80164860 00161940  28 03 00 00 */	cmplwi r3, 0x0
/* 80164864 00161944  41 82 00 28 */	beq .L_8016488C
/* 80164868 00161948  81 83 00 08 */	lwz r12, 0x8(r3)
/* 8016486C 0016194C  28 0C 00 00 */	cmplwi r12, 0x0
/* 80164870 00161950  41 82 00 1C */	beq .L_8016488C
/* 80164874 00161954  80 9F 00 00 */	lwz r4, 0x0(r31)
/* 80164878 00161958  38 A0 00 00 */	li r5, 0x0
/* 8016487C 0016195C  38 C0 00 00 */	li r6, 0x0
/* 80164880 00161960  80 84 00 24 */	lwz r4, 0x24(r4)
/* 80164884 00161964  7D 89 03 A6 */	mtctr r12
/* 80164888 00161968  4E 80 04 21 */	bctrl
.L_8016488C:
/* 8016488C 0016196C  C0 3E 17 90 */	lfs f1, 0x1790(r30)
/* 80164890 00161970  C0 02 A9 E4 */	lfs f0, "@1046"@sda21(r2)
/* 80164894 00161974  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80164898 00161978  40 81 01 88 */	ble .L_80164A20
/* 8016489C 0016197C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801648A0 00161980  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 801648A4 00161984  38 63 05 24 */	addi r3, r3, 0x524
/* 801648A8 00161988  4B EE 79 6D */	bl xStrHash__FPCc
/* 801648AC 0016198C  80 DF 00 00 */	lwz r6, 0x0(r31)
/* 801648B0 00161990  38 80 00 00 */	li r4, 0x0
/* 801648B4 00161994  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 801648B8 00161998  38 A0 00 00 */	li r5, 0x0
/* 801648BC 0016199C  80 C6 00 24 */	lwz r6, 0x24(r6)
/* 801648C0 001619A0  38 E0 00 00 */	li r7, 0x0
/* 801648C4 001619A4  FC A0 10 90 */	fmr f5, f2
/* 801648C8 001619A8  C0 22 AA AC */	lfs f1, "@2256"@sda21(r2)
/* 801648CC 001619AC  80 C6 00 4C */	lwz r6, 0x4c(r6)
/* 801648D0 001619B0  C0 62 A9 D8 */	lfs f3, "@891"@sda21(r2)
/* 801648D4 001619B4  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 801648D8 001619B8  38 C6 00 30 */	addi r6, r6, 0x30
/* 801648DC 001619BC  4B EE 41 B9 */	bl xSndPlay3D__FUiffUiUiPC5xVec3ff14sound_categoryf
/* 801648E0 001619C0  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801648E4 001619C4  D0 1E 17 90 */	stfs f0, 0x1790(r30)
/* 801648E8 001619C8  48 00 01 38 */	b .L_80164A20
.L_801648EC:
/* 801648EC 001619CC  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 801648F0 001619D0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801648F4 001619D4  40 80 01 2C */	bge .L_80164A20
/* 801648F8 001619D8  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 801648FC 001619DC  54 60 07 BD */	rlwinm. r0, r3, 0, 30, 30
/* 80164900 001619E0  40 82 01 10 */	bne .L_80164A10
/* 80164904 001619E4  60 60 00 02 */	ori r0, r3, 0x2
/* 80164908 001619E8  90 1F 00 10 */	stw r0, 0x10(r31)
/* 8016490C 001619EC  C0 22 AA B0 */	lfs f1, "@2257"@sda21(r2)
/* 80164910 001619F0  C0 1E 02 C0 */	lfs f0, 0x2c0(r30)
/* 80164914 001619F4  C0 5F 00 0C */	lfs f2, 0xc(r31)
/* 80164918 001619F8  EC 01 00 2A */	fadds f0, f1, f0
/* 8016491C 001619FC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80164920 00161A00  40 81 00 64 */	ble .L_80164984
/* 80164924 00161A04  C0 3E 17 8C */	lfs f1, 0x178c(r30)
/* 80164928 00161A08  C0 02 A9 E4 */	lfs f0, "@1046"@sda21(r2)
/* 8016492C 00161A0C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80164930 00161A10  40 81 00 E0 */	ble .L_80164A10
/* 80164934 00161A14  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80164938 00161A18  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 8016493C 00161A1C  38 63 05 34 */	addi r3, r3, 0x534
/* 80164940 00161A20  4B EE 78 D5 */	bl xStrHash__FPCc
/* 80164944 00161A24  80 DF 00 00 */	lwz r6, 0x0(r31)
/* 80164948 00161A28  38 80 00 00 */	li r4, 0x0
/* 8016494C 00161A2C  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80164950 00161A30  38 A0 00 00 */	li r5, 0x0
/* 80164954 00161A34  80 C6 00 24 */	lwz r6, 0x24(r6)
/* 80164958 00161A38  38 E0 00 00 */	li r7, 0x0
/* 8016495C 00161A3C  FC A0 10 90 */	fmr f5, f2
/* 80164960 00161A40  C0 22 AA AC */	lfs f1, "@2256"@sda21(r2)
/* 80164964 00161A44  80 C6 00 4C */	lwz r6, 0x4c(r6)
/* 80164968 00161A48  C0 62 A9 D8 */	lfs f3, "@891"@sda21(r2)
/* 8016496C 00161A4C  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 80164970 00161A50  38 C6 00 30 */	addi r6, r6, 0x30
/* 80164974 00161A54  4B EE 41 21 */	bl xSndPlay3D__FUiffUiUiPC5xVec3ff14sound_categoryf
/* 80164978 00161A58  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 8016497C 00161A5C  D0 1E 17 8C */	stfs f0, 0x178c(r30)
/* 80164980 00161A60  48 00 00 90 */	b .L_80164A10
.L_80164984:
/* 80164984 00161A64  80 7E 17 88 */	lwz r3, 0x1788(r30)
/* 80164988 00161A68  28 03 00 00 */	cmplwi r3, 0x0
/* 8016498C 00161A6C  41 82 00 28 */	beq .L_801649B4
/* 80164990 00161A70  81 83 00 08 */	lwz r12, 0x8(r3)
/* 80164994 00161A74  28 0C 00 00 */	cmplwi r12, 0x0
/* 80164998 00161A78  41 82 00 1C */	beq .L_801649B4
/* 8016499C 00161A7C  80 9F 00 00 */	lwz r4, 0x0(r31)
/* 801649A0 00161A80  38 A0 00 00 */	li r5, 0x0
/* 801649A4 00161A84  38 C0 00 00 */	li r6, 0x0
/* 801649A8 00161A88  80 84 00 24 */	lwz r4, 0x24(r4)
/* 801649AC 00161A8C  7D 89 03 A6 */	mtctr r12
/* 801649B0 00161A90  4E 80 04 21 */	bctrl
.L_801649B4:
/* 801649B4 00161A94  C0 3E 17 90 */	lfs f1, 0x1790(r30)
/* 801649B8 00161A98  C0 02 A9 E4 */	lfs f0, "@1046"@sda21(r2)
/* 801649BC 00161A9C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801649C0 00161AA0  40 81 00 50 */	ble .L_80164A10
/* 801649C4 00161AA4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801649C8 00161AA8  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 801649CC 00161AAC  38 63 05 24 */	addi r3, r3, 0x524
/* 801649D0 00161AB0  4B EE 78 45 */	bl xStrHash__FPCc
/* 801649D4 00161AB4  80 DF 00 00 */	lwz r6, 0x0(r31)
/* 801649D8 00161AB8  38 80 00 00 */	li r4, 0x0
/* 801649DC 00161ABC  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 801649E0 00161AC0  38 A0 00 00 */	li r5, 0x0
/* 801649E4 00161AC4  80 C6 00 24 */	lwz r6, 0x24(r6)
/* 801649E8 00161AC8  38 E0 00 00 */	li r7, 0x0
/* 801649EC 00161ACC  FC A0 10 90 */	fmr f5, f2
/* 801649F0 00161AD0  C0 22 AA AC */	lfs f1, "@2256"@sda21(r2)
/* 801649F4 00161AD4  80 C6 00 4C */	lwz r6, 0x4c(r6)
/* 801649F8 00161AD8  C0 62 A9 D8 */	lfs f3, "@891"@sda21(r2)
/* 801649FC 00161ADC  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 80164A00 00161AE0  38 C6 00 30 */	addi r6, r6, 0x30
/* 80164A04 00161AE4  4B EE 40 91 */	bl xSndPlay3D__FUiffUiUiPC5xVec3ff14sound_categoryf
/* 80164A08 00161AE8  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80164A0C 00161AEC  D0 1E 17 90 */	stfs f0, 0x1790(r30)
.L_80164A10:
/* 80164A10 00161AF0  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 80164A14 00161AF4  D0 1F 00 08 */	stfs f0, 0x8(r31)
/* 80164A18 00161AF8  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80164A1C 00161AFC  D0 1F 00 04 */	stfs f0, 0x4(r31)
.L_80164A20:
/* 80164A20 00161B00  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 80164A24 00161B04  54 00 07 BD */	rlwinm. r0, r0, 0, 30, 30
/* 80164A28 00161B08  41 82 00 18 */	beq .L_80164A40
/* 80164A2C 00161B0C  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 80164A30 00161B10  88 03 00 22 */	lbz r0, 0x22(r3)
/* 80164A34 00161B14  60 00 00 10 */	ori r0, r0, 0x10
/* 80164A38 00161B18  98 03 00 22 */	stb r0, 0x22(r3)
/* 80164A3C 00161B1C  48 00 00 14 */	b .L_80164A50
.L_80164A40:
/* 80164A40 00161B20  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 80164A44 00161B24  88 03 00 22 */	lbz r0, 0x22(r3)
/* 80164A48 00161B28  70 00 00 EF */	andi. r0, r0, 0xef
/* 80164A4C 00161B2C  98 03 00 22 */	stb r0, 0x22(r3)
.L_80164A50:
/* 80164A50 00161B30  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 80164A54 00161B34  C0 1F 00 08 */	lfs f0, 0x8(r31)
/* 80164A58 00161B38  80 63 00 24 */	lwz r3, 0x24(r3)
/* 80164A5C 00161B3C  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80164A60 00161B40  D0 03 00 34 */	stfs f0, 0x34(r3)
/* 80164A64 00161B44  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 80164A68 00161B48  38 63 00 64 */	addi r3, r3, 0x64
/* 80164A6C 00161B4C  7C 64 1B 78 */	mr r4, r3
/* 80164A70 00161B50  4B EA 64 CD */	bl xQuickCullForBound__FP7xQCDataPC6xBound
/* 80164A74 00161B54  80 7F 00 00 */	lwz r3, 0x0(r31)
/* 80164A78 00161B58  4B FB F9 B1 */	bl zGridUpdateEnt__FP4xEnt
/* 80164A7C 00161B5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80164A80 00161B60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80164A84 00161B64  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80164A88 00161B68  7C 08 03 A6 */	mtlr r0
/* 80164A8C 00161B6C  38 21 00 10 */	addi r1, r1, 0x10
/* 80164A90 00161B70  4E 80 00 20 */	blr
.endfn bossPatBoxUpdate__12zNPCBPatrickFP10bossPatBoxf

# idleCB(xGoal*, void*, en_trantype*, float, void*)
.fn idleCB__FP5xGoalPvP11en_trantypefPv, local
/* 80164A94 00161B74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80164A98 00161B78  7C 08 02 A6 */	mflr r0
/* 80164A9C 00161B7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80164AA0 00161B80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80164AA4 00161B84  7C BF 2B 78 */	mr r31, r5
/* 80164AA8 00161B88  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80164AAC 00161B8C  7C 7E 1B 78 */	mr r30, r3
/* 80164AB0 00161B90  4B FA 9F E5 */	bl GetOwner__5xGoalCFv
/* 80164AB4 00161B94  3C 80 80 3C */	lis r4, globals@ha
/* 80164AB8 00161B98  38 00 BA FF */	li r0, -0x4501
/* 80164ABC 00161B9C  38 84 05 58 */	addi r4, r4, globals@l
/* 80164AC0 00161BA0  38 A0 00 00 */	li r5, 0x0
/* 80164AC4 00161BA4  80 84 17 88 */	lwz r4, 0x1788(r4)
/* 80164AC8 00161BA8  7C 80 00 39 */	and. r0, r4, r0
/* 80164ACC 00161BAC  41 82 00 0C */	beq .L_80164AD8
/* 80164AD0 00161BB0  38 60 00 00 */	li r3, 0x0
/* 80164AD4 00161BB4  48 00 00 54 */	b .L_80164B28
.L_80164AD8:
/* 80164AD8 00161BB8  80 03 02 B4 */	lwz r0, 0x2b4(r3)
/* 80164ADC 00161BBC  54 00 07 BD */	rlwinm. r0, r0, 0, 30, 30
/* 80164AE0 00161BC0  41 82 00 18 */	beq .L_80164AF8
/* 80164AE4 00161BC4  38 00 00 01 */	li r0, 0x1
/* 80164AE8 00161BC8  3C 60 4E 47 */	lis r3, 0x4e47
/* 80164AEC 00161BCC  90 1F 00 00 */	stw r0, 0x0(r31)
/* 80164AF0 00161BD0  38 A3 42 5B */	addi r5, r3, 0x425b
/* 80164AF4 00161BD4  48 00 00 30 */	b .L_80164B24
.L_80164AF8:
/* 80164AF8 00161BD8  C0 3E 00 4C */	lfs f1, 0x4c(r30)
/* 80164AFC 00161BDC  C0 02 AA 80 */	lfs f0, "@1676"@sda21(r2)
/* 80164B00 00161BE0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80164B04 00161BE4  40 81 00 20 */	ble .L_80164B24
/* 80164B08 00161BE8  C0 02 A9 D8 */	lfs f0, "@891"@sda21(r2)
/* 80164B0C 00161BEC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80164B10 00161BF0  40 81 00 14 */	ble .L_80164B24
/* 80164B14 00161BF4  4B FF F1 95 */	bl nextGoal__12zNPCBPatrickFv
/* 80164B18 00161BF8  38 00 00 01 */	li r0, 0x1
/* 80164B1C 00161BFC  7C 65 1B 78 */	mr r5, r3
/* 80164B20 00161C00  90 1F 00 00 */	stw r0, 0x0(r31)
.L_80164B24:
/* 80164B24 00161C04  7C A3 2B 78 */	mr r3, r5
.L_80164B28:
/* 80164B28 00161C08  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80164B2C 00161C0C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80164B30 00161C10  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80164B34 00161C14  7C 08 03 A6 */	mtlr r0
/* 80164B38 00161C18  38 21 00 10 */	addi r1, r1, 0x10
/* 80164B3C 00161C1C  4E 80 00 20 */	blr
.endfn idleCB__FP5xGoalPvP11en_trantypefPv

# tauntCB(xGoal*, void*, en_trantype*, float, void*)
.fn tauntCB__FP5xGoalPvP11en_trantypefPv, local
/* 80164B40 00161C20  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80164B44 00161C24  7C 08 02 A6 */	mflr r0
/* 80164B48 00161C28  90 01 00 34 */	stw r0, 0x34(r1)
/* 80164B4C 00161C2C  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80164B50 00161C30  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 80164B54 00161C34  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80164B58 00161C38  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80164B5C 00161C3C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80164B60 00161C40  7C BD 2B 78 */	mr r29, r5
/* 80164B64 00161C44  FF E0 08 90 */	fmr f31, f1
/* 80164B68 00161C48  4B FA 9F 2D */	bl GetOwner__5xGoalCFv
/* 80164B6C 00161C4C  3C 80 80 3C */	lis r4, globals@ha
/* 80164B70 00161C50  38 00 BA FF */	li r0, -0x4501
/* 80164B74 00161C54  38 84 05 58 */	addi r4, r4, globals@l
/* 80164B78 00161C58  7C 7F 1B 78 */	mr r31, r3
/* 80164B7C 00161C5C  80 84 17 88 */	lwz r4, 0x1788(r4)
/* 80164B80 00161C60  3B C0 00 00 */	li r30, 0x0
/* 80164B84 00161C64  7C 80 00 39 */	and. r0, r4, r0
/* 80164B88 00161C68  41 82 00 18 */	beq .L_80164BA0
/* 80164B8C 00161C6C  38 00 00 01 */	li r0, 0x1
/* 80164B90 00161C70  3C 60 4E 47 */	lis r3, 0x4e47
/* 80164B94 00161C74  90 1D 00 00 */	stw r0, 0x0(r29)
/* 80164B98 00161C78  38 63 42 5A */	addi r3, r3, 0x425a
/* 80164B9C 00161C7C  48 00 00 40 */	b .L_80164BDC
.L_80164BA0:
/* 80164BA0 00161C80  38 80 00 00 */	li r4, 0x0
/* 80164BA4 00161C84  4B F8 E4 D5 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 80164BA8 00161C88  C0 02 AA B4 */	lfs f0, "@2280"@sda21(r2)
/* 80164BAC 00161C8C  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80164BB0 00161C90  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80164BB4 00161C94  40 80 00 24 */	bge .L_80164BD8
/* 80164BB8 00161C98  80 1F 02 B4 */	lwz r0, 0x2b4(r31)
/* 80164BBC 00161C9C  7F E3 FB 78 */	mr r3, r31
/* 80164BC0 00161CA0  54 00 07 FA */	rlwinm r0, r0, 0, 31, 29
/* 80164BC4 00161CA4  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 80164BC8 00161CA8  4B FF F0 E1 */	bl nextGoal__12zNPCBPatrickFv
/* 80164BCC 00161CAC  38 00 00 01 */	li r0, 0x1
/* 80164BD0 00161CB0  7C 7E 1B 78 */	mr r30, r3
/* 80164BD4 00161CB4  90 1D 00 00 */	stw r0, 0x0(r29)
.L_80164BD8:
/* 80164BD8 00161CB8  7F C3 F3 78 */	mr r3, r30
.L_80164BDC:
/* 80164BDC 00161CBC  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80164BE0 00161CC0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80164BE4 00161CC4  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80164BE8 00161CC8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80164BEC 00161CCC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80164BF0 00161CD0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80164BF4 00161CD4  7C 08 03 A6 */	mtlr r0
/* 80164BF8 00161CD8  38 21 00 30 */	addi r1, r1, 0x30
/* 80164BFC 00161CDC  4E 80 00 20 */	blr
.endfn tauntCB__FP5xGoalPvP11en_trantypefPv

# hitCB(xGoal*, void*, en_trantype*, float, void*)
.fn hitCB__FP5xGoalPvP11en_trantypefPv, local
/* 80164C00 00161CE0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80164C04 00161CE4  7C 08 02 A6 */	mflr r0
/* 80164C08 00161CE8  90 01 00 34 */	stw r0, 0x34(r1)
/* 80164C0C 00161CEC  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80164C10 00161CF0  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 80164C14 00161CF4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80164C18 00161CF8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80164C1C 00161CFC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80164C20 00161D00  7C BD 2B 78 */	mr r29, r5
/* 80164C24 00161D04  FF E0 08 90 */	fmr f31, f1
/* 80164C28 00161D08  4B FA 9E 6D */	bl GetOwner__5xGoalCFv
/* 80164C2C 00161D0C  3C 80 80 3C */	lis r4, globals@ha
/* 80164C30 00161D10  38 00 BA FF */	li r0, -0x4501
/* 80164C34 00161D14  38 84 05 58 */	addi r4, r4, globals@l
/* 80164C38 00161D18  7C 7F 1B 78 */	mr r31, r3
/* 80164C3C 00161D1C  80 84 17 88 */	lwz r4, 0x1788(r4)
/* 80164C40 00161D20  3B C0 00 00 */	li r30, 0x0
/* 80164C44 00161D24  7C 80 00 39 */	and. r0, r4, r0
/* 80164C48 00161D28  41 82 00 18 */	beq .L_80164C60
/* 80164C4C 00161D2C  38 00 00 01 */	li r0, 0x1
/* 80164C50 00161D30  3C 60 4E 47 */	lis r3, 0x4e47
/* 80164C54 00161D34  90 1D 00 00 */	stw r0, 0x0(r29)
/* 80164C58 00161D38  38 63 42 5A */	addi r3, r3, 0x425a
/* 80164C5C 00161D3C  48 00 00 54 */	b .L_80164CB0
.L_80164C60:
/* 80164C60 00161D40  38 80 00 00 */	li r4, 0x0
/* 80164C64 00161D44  4B F8 E4 15 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 80164C68 00161D48  C0 02 AA B4 */	lfs f0, "@2280"@sda21(r2)
/* 80164C6C 00161D4C  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80164C70 00161D50  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80164C74 00161D54  40 80 00 38 */	bge .L_80164CAC
/* 80164C78 00161D58  80 1F 02 BC */	lwz r0, 0x2bc(r31)
/* 80164C7C 00161D5C  2C 00 00 02 */	cmpwi r0, 0x2
/* 80164C80 00161D60  40 82 00 18 */	bne .L_80164C98
/* 80164C84 00161D64  38 00 00 01 */	li r0, 0x1
/* 80164C88 00161D68  3C 60 4E 47 */	lis r3, 0x4e47
/* 80164C8C 00161D6C  90 1D 00 00 */	stw r0, 0x0(r29)
/* 80164C90 00161D70  3B C3 42 63 */	addi r30, r3, 0x4263
/* 80164C94 00161D74  48 00 00 18 */	b .L_80164CAC
.L_80164C98:
/* 80164C98 00161D78  7F E3 FB 78 */	mr r3, r31
/* 80164C9C 00161D7C  4B FF F0 0D */	bl nextGoal__12zNPCBPatrickFv
/* 80164CA0 00161D80  38 00 00 01 */	li r0, 0x1
/* 80164CA4 00161D84  7C 7E 1B 78 */	mr r30, r3
/* 80164CA8 00161D88  90 1D 00 00 */	stw r0, 0x0(r29)
.L_80164CAC:
/* 80164CAC 00161D8C  7F C3 F3 78 */	mr r3, r30
.L_80164CB0:
/* 80164CB0 00161D90  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80164CB4 00161D94  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80164CB8 00161D98  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80164CBC 00161D9C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80164CC0 00161DA0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80164CC4 00161DA4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80164CC8 00161DA8  7C 08 03 A6 */	mtlr r0
/* 80164CCC 00161DAC  38 21 00 30 */	addi r1, r1, 0x30
/* 80164CD0 00161DB0  4E 80 00 20 */	blr
.endfn hitCB__FP5xGoalPvP11en_trantypefPv

# spitCB(xGoal*, void*, en_trantype*, float, void*)
.fn spitCB__FP5xGoalPvP11en_trantypefPv, local
/* 80164CD4 00161DB4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80164CD8 00161DB8  7C 08 02 A6 */	mflr r0
/* 80164CDC 00161DBC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80164CE0 00161DC0  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80164CE4 00161DC4  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 80164CE8 00161DC8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80164CEC 00161DCC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80164CF0 00161DD0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80164CF4 00161DD4  93 81 00 10 */	stw r28, 0x10(r1)
/* 80164CF8 00161DD8  FF E0 08 90 */	fmr f31, f1
/* 80164CFC 00161DDC  7C 7C 1B 78 */	mr r28, r3
/* 80164D00 00161DE0  7C BD 2B 78 */	mr r29, r5
/* 80164D04 00161DE4  4B FA 9D 91 */	bl GetOwner__5xGoalCFv
/* 80164D08 00161DE8  3C 80 80 3C */	lis r4, globals@ha
/* 80164D0C 00161DEC  38 00 BA FF */	li r0, -0x4501
/* 80164D10 00161DF0  38 84 05 58 */	addi r4, r4, globals@l
/* 80164D14 00161DF4  7C 7F 1B 78 */	mr r31, r3
/* 80164D18 00161DF8  80 84 17 88 */	lwz r4, 0x1788(r4)
/* 80164D1C 00161DFC  3B C0 00 00 */	li r30, 0x0
/* 80164D20 00161E00  7C 80 00 39 */	and. r0, r4, r0
/* 80164D24 00161E04  41 82 00 18 */	beq .L_80164D3C
/* 80164D28 00161E08  38 00 00 01 */	li r0, 0x1
/* 80164D2C 00161E0C  3C 60 4E 47 */	lis r3, 0x4e47
/* 80164D30 00161E10  90 1D 00 00 */	stw r0, 0x0(r29)
/* 80164D34 00161E14  38 63 42 5A */	addi r3, r3, 0x425a
/* 80164D38 00161E18  48 00 00 4C */	b .L_80164D84
.L_80164D3C:
/* 80164D3C 00161E1C  80 1C 00 50 */	lwz r0, 0x50(r28)
/* 80164D40 00161E20  28 00 00 01 */	cmplwi r0, 0x1
/* 80164D44 00161E24  41 82 00 0C */	beq .L_80164D50
/* 80164D48 00161E28  28 00 00 02 */	cmplwi r0, 0x2
/* 80164D4C 00161E2C  40 82 00 34 */	bne .L_80164D80
.L_80164D50:
/* 80164D50 00161E30  7F E3 FB 78 */	mr r3, r31
/* 80164D54 00161E34  38 80 00 00 */	li r4, 0x0
/* 80164D58 00161E38  4B F8 E3 21 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 80164D5C 00161E3C  C0 02 AA B4 */	lfs f0, "@2280"@sda21(r2)
/* 80164D60 00161E40  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80164D64 00161E44  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80164D68 00161E48  40 80 00 18 */	bge .L_80164D80
/* 80164D6C 00161E4C  7F E3 FB 78 */	mr r3, r31
/* 80164D70 00161E50  4B FF EF 39 */	bl nextGoal__12zNPCBPatrickFv
/* 80164D74 00161E54  38 00 00 01 */	li r0, 0x1
/* 80164D78 00161E58  7C 7E 1B 78 */	mr r30, r3
/* 80164D7C 00161E5C  90 1D 00 00 */	stw r0, 0x0(r29)
.L_80164D80:
/* 80164D80 00161E60  7F C3 F3 78 */	mr r3, r30
.L_80164D84:
/* 80164D84 00161E64  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80164D88 00161E68  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80164D8C 00161E6C  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80164D90 00161E70  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80164D94 00161E74  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80164D98 00161E78  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80164D9C 00161E7C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80164DA0 00161E80  7C 08 03 A6 */	mtlr r0
/* 80164DA4 00161E84  38 21 00 30 */	addi r1, r1, 0x30
/* 80164DA8 00161E88  4E 80 00 20 */	blr
.endfn spitCB__FP5xGoalPvP11en_trantypefPv

# runCB(xGoal*, void*, en_trantype*, float, void*)
.fn runCB__FP5xGoalPvP11en_trantypefPv, local
/* 80164DAC 00161E8C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80164DB0 00161E90  7C 08 02 A6 */	mflr r0
/* 80164DB4 00161E94  90 01 00 34 */	stw r0, 0x34(r1)
/* 80164DB8 00161E98  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80164DBC 00161E9C  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 80164DC0 00161EA0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80164DC4 00161EA4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80164DC8 00161EA8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80164DCC 00161EAC  7C BD 2B 78 */	mr r29, r5
/* 80164DD0 00161EB0  FF E0 08 90 */	fmr f31, f1
/* 80164DD4 00161EB4  4B FA 9C C1 */	bl GetOwner__5xGoalCFv
/* 80164DD8 00161EB8  3C 80 80 3C */	lis r4, globals@ha
/* 80164DDC 00161EBC  38 00 BA FF */	li r0, -0x4501
/* 80164DE0 00161EC0  38 84 05 58 */	addi r4, r4, globals@l
/* 80164DE4 00161EC4  7C 7F 1B 78 */	mr r31, r3
/* 80164DE8 00161EC8  80 84 17 88 */	lwz r4, 0x1788(r4)
/* 80164DEC 00161ECC  3B C0 00 00 */	li r30, 0x0
/* 80164DF0 00161ED0  7C 80 00 39 */	and. r0, r4, r0
/* 80164DF4 00161ED4  41 82 00 18 */	beq .L_80164E0C
/* 80164DF8 00161ED8  38 00 00 01 */	li r0, 0x1
/* 80164DFC 00161EDC  3C 60 4E 47 */	lis r3, 0x4e47
/* 80164E00 00161EE0  90 1D 00 00 */	stw r0, 0x0(r29)
/* 80164E04 00161EE4  38 63 42 5A */	addi r3, r3, 0x425a
/* 80164E08 00161EE8  48 00 00 34 */	b .L_80164E3C
.L_80164E0C:
/* 80164E0C 00161EEC  38 80 00 00 */	li r4, 0x0
/* 80164E10 00161EF0  4B F8 E2 69 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 80164E14 00161EF4  C0 02 AA B4 */	lfs f0, "@2280"@sda21(r2)
/* 80164E18 00161EF8  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80164E1C 00161EFC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80164E20 00161F00  40 80 00 18 */	bge .L_80164E38
/* 80164E24 00161F04  7F E3 FB 78 */	mr r3, r31
/* 80164E28 00161F08  4B FF EE 81 */	bl nextGoal__12zNPCBPatrickFv
/* 80164E2C 00161F0C  38 00 00 01 */	li r0, 0x1
/* 80164E30 00161F10  7C 7E 1B 78 */	mr r30, r3
/* 80164E34 00161F14  90 1D 00 00 */	stw r0, 0x0(r29)
.L_80164E38:
/* 80164E38 00161F18  7F C3 F3 78 */	mr r3, r30
.L_80164E3C:
/* 80164E3C 00161F1C  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80164E40 00161F20  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80164E44 00161F24  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80164E48 00161F28  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80164E4C 00161F2C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80164E50 00161F30  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80164E54 00161F34  7C 08 03 A6 */	mtlr r0
/* 80164E58 00161F38  38 21 00 30 */	addi r1, r1, 0x30
/* 80164E5C 00161F3C  4E 80 00 20 */	blr
.endfn runCB__FP5xGoalPvP11en_trantypefPv

# smackCB(xGoal*, void*, en_trantype*, float, void*)
.fn smackCB__FP5xGoalPvP11en_trantypefPv, local
/* 80164E60 00161F40  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80164E64 00161F44  7C 08 02 A6 */	mflr r0
/* 80164E68 00161F48  90 01 00 34 */	stw r0, 0x34(r1)
/* 80164E6C 00161F4C  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80164E70 00161F50  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 80164E74 00161F54  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80164E78 00161F58  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80164E7C 00161F5C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80164E80 00161F60  7C BD 2B 78 */	mr r29, r5
/* 80164E84 00161F64  FF E0 08 90 */	fmr f31, f1
/* 80164E88 00161F68  4B FA 9C 0D */	bl GetOwner__5xGoalCFv
/* 80164E8C 00161F6C  3C 80 80 3C */	lis r4, globals@ha
/* 80164E90 00161F70  38 00 BA FF */	li r0, -0x4501
/* 80164E94 00161F74  38 84 05 58 */	addi r4, r4, globals@l
/* 80164E98 00161F78  7C 7F 1B 78 */	mr r31, r3
/* 80164E9C 00161F7C  80 84 17 88 */	lwz r4, 0x1788(r4)
/* 80164EA0 00161F80  3B C0 00 00 */	li r30, 0x0
/* 80164EA4 00161F84  7C 80 00 39 */	and. r0, r4, r0
/* 80164EA8 00161F88  41 82 00 18 */	beq .L_80164EC0
/* 80164EAC 00161F8C  38 00 00 01 */	li r0, 0x1
/* 80164EB0 00161F90  3C 60 4E 47 */	lis r3, 0x4e47
/* 80164EB4 00161F94  90 1D 00 00 */	stw r0, 0x0(r29)
/* 80164EB8 00161F98  38 63 42 5A */	addi r3, r3, 0x425a
/* 80164EBC 00161F9C  48 00 00 34 */	b .L_80164EF0
.L_80164EC0:
/* 80164EC0 00161FA0  38 80 00 00 */	li r4, 0x0
/* 80164EC4 00161FA4  4B F8 E1 B5 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 80164EC8 00161FA8  C0 02 AA B4 */	lfs f0, "@2280"@sda21(r2)
/* 80164ECC 00161FAC  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80164ED0 00161FB0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80164ED4 00161FB4  40 80 00 18 */	bge .L_80164EEC
/* 80164ED8 00161FB8  7F E3 FB 78 */	mr r3, r31
/* 80164EDC 00161FBC  4B FF ED CD */	bl nextGoal__12zNPCBPatrickFv
/* 80164EE0 00161FC0  38 00 00 01 */	li r0, 0x1
/* 80164EE4 00161FC4  7C 7E 1B 78 */	mr r30, r3
/* 80164EE8 00161FC8  90 1D 00 00 */	stw r0, 0x0(r29)
.L_80164EEC:
/* 80164EEC 00161FCC  7F C3 F3 78 */	mr r3, r30
.L_80164EF0:
/* 80164EF0 00161FD0  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80164EF4 00161FD4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80164EF8 00161FD8  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80164EFC 00161FDC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80164F00 00161FE0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80164F04 00161FE4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80164F08 00161FE8  7C 08 03 A6 */	mtlr r0
/* 80164F0C 00161FEC  38 21 00 30 */	addi r1, r1, 0x30
/* 80164F10 00161FF0  4E 80 00 20 */	blr
.endfn smackCB__FP5xGoalPvP11en_trantypefPv

# freezeCB(xGoal*, void*, en_trantype*, float, void*)
.fn freezeCB__FP5xGoalPvP11en_trantypefPv, local
/* 80164F14 00161FF4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80164F18 00161FF8  7C 08 02 A6 */	mflr r0
/* 80164F1C 00161FFC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80164F20 00162000  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80164F24 00162004  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 80164F28 00162008  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80164F2C 0016200C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80164F30 00162010  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80164F34 00162014  7C BD 2B 78 */	mr r29, r5
/* 80164F38 00162018  FF E0 08 90 */	fmr f31, f1
/* 80164F3C 0016201C  4B FA 9B 59 */	bl GetOwner__5xGoalCFv
/* 80164F40 00162020  3C 80 80 3C */	lis r4, globals@ha
/* 80164F44 00162024  38 00 BA FF */	li r0, -0x4501
/* 80164F48 00162028  38 84 05 58 */	addi r4, r4, globals@l
/* 80164F4C 0016202C  7C 7F 1B 78 */	mr r31, r3
/* 80164F50 00162030  80 84 17 88 */	lwz r4, 0x1788(r4)
/* 80164F54 00162034  3B C0 00 00 */	li r30, 0x0
/* 80164F58 00162038  7C 80 00 39 */	and. r0, r4, r0
/* 80164F5C 0016203C  41 82 00 18 */	beq .L_80164F74
/* 80164F60 00162040  38 00 00 01 */	li r0, 0x1
/* 80164F64 00162044  3C 60 4E 47 */	lis r3, 0x4e47
/* 80164F68 00162048  90 1D 00 00 */	stw r0, 0x0(r29)
/* 80164F6C 0016204C  38 63 42 5A */	addi r3, r3, 0x425a
/* 80164F70 00162050  48 00 00 34 */	b .L_80164FA4
.L_80164F74:
/* 80164F74 00162054  38 80 00 00 */	li r4, 0x0
/* 80164F78 00162058  4B F8 E1 01 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 80164F7C 0016205C  C0 02 AA B4 */	lfs f0, "@2280"@sda21(r2)
/* 80164F80 00162060  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80164F84 00162064  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80164F88 00162068  40 80 00 18 */	bge .L_80164FA0
/* 80164F8C 0016206C  7F E3 FB 78 */	mr r3, r31
/* 80164F90 00162070  4B FF ED 19 */	bl nextGoal__12zNPCBPatrickFv
/* 80164F94 00162074  38 00 00 01 */	li r0, 0x1
/* 80164F98 00162078  7C 7E 1B 78 */	mr r30, r3
/* 80164F9C 0016207C  90 1D 00 00 */	stw r0, 0x0(r29)
.L_80164FA0:
/* 80164FA0 00162080  7F C3 F3 78 */	mr r3, r30
.L_80164FA4:
/* 80164FA4 00162084  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80164FA8 00162088  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80164FAC 0016208C  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80164FB0 00162090  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80164FB4 00162094  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80164FB8 00162098  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80164FBC 0016209C  7C 08 03 A6 */	mtlr r0
/* 80164FC0 001620A0  38 21 00 30 */	addi r1, r1, 0x30
/* 80164FC4 001620A4  4E 80 00 20 */	blr
.endfn freezeCB__FP5xGoalPvP11en_trantypefPv

# spawnCB(xGoal*, void*, en_trantype*, float, void*)
.fn spawnCB__FP5xGoalPvP11en_trantypefPv, local
/* 80164FC8 001620A8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80164FCC 001620AC  7C 08 02 A6 */	mflr r0
/* 80164FD0 001620B0  90 01 00 34 */	stw r0, 0x34(r1)
/* 80164FD4 001620B4  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80164FD8 001620B8  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 80164FDC 001620BC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80164FE0 001620C0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80164FE4 001620C4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80164FE8 001620C8  93 81 00 10 */	stw r28, 0x10(r1)
/* 80164FEC 001620CC  FF E0 08 90 */	fmr f31, f1
/* 80164FF0 001620D0  7C 7C 1B 78 */	mr r28, r3
/* 80164FF4 001620D4  7C BD 2B 78 */	mr r29, r5
/* 80164FF8 001620D8  4B FA 9A 9D */	bl GetOwner__5xGoalCFv
/* 80164FFC 001620DC  3C 80 80 3C */	lis r4, globals@ha
/* 80165000 001620E0  38 00 BA FF */	li r0, -0x4501
/* 80165004 001620E4  38 84 05 58 */	addi r4, r4, globals@l
/* 80165008 001620E8  7C 7F 1B 78 */	mr r31, r3
/* 8016500C 001620EC  80 84 17 88 */	lwz r4, 0x1788(r4)
/* 80165010 001620F0  3B C0 00 00 */	li r30, 0x0
/* 80165014 001620F4  7C 80 00 39 */	and. r0, r4, r0
/* 80165018 001620F8  41 82 00 18 */	beq .L_80165030
/* 8016501C 001620FC  38 00 00 01 */	li r0, 0x1
/* 80165020 00162100  3C 60 4E 47 */	lis r3, 0x4e47
/* 80165024 00162104  90 1D 00 00 */	stw r0, 0x0(r29)
/* 80165028 00162108  38 63 42 5A */	addi r3, r3, 0x425a
/* 8016502C 0016210C  48 00 00 40 */	b .L_8016506C
.L_80165030:
/* 80165030 00162110  80 1C 00 50 */	lwz r0, 0x50(r28)
/* 80165034 00162114  28 00 00 03 */	cmplwi r0, 0x3
/* 80165038 00162118  40 82 00 30 */	bne .L_80165068
/* 8016503C 0016211C  38 80 00 00 */	li r4, 0x0
/* 80165040 00162120  4B F8 E0 39 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 80165044 00162124  C0 02 AA B4 */	lfs f0, "@2280"@sda21(r2)
/* 80165048 00162128  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8016504C 0016212C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80165050 00162130  40 80 00 18 */	bge .L_80165068
/* 80165054 00162134  7F E3 FB 78 */	mr r3, r31
/* 80165058 00162138  4B FF EC 51 */	bl nextGoal__12zNPCBPatrickFv
/* 8016505C 0016213C  38 00 00 01 */	li r0, 0x1
/* 80165060 00162140  7C 7E 1B 78 */	mr r30, r3
/* 80165064 00162144  90 1D 00 00 */	stw r0, 0x0(r29)
.L_80165068:
/* 80165068 00162148  7F C3 F3 78 */	mr r3, r30
.L_8016506C:
/* 8016506C 0016214C  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80165070 00162150  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80165074 00162154  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80165078 00162158  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016507C 0016215C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80165080 00162160  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80165084 00162164  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80165088 00162168  7C 08 03 A6 */	mtlr r0
/* 8016508C 0016216C  38 21 00 30 */	addi r1, r1, 0x30
/* 80165090 00162170  4E 80 00 20 */	blr
.endfn spawnCB__FP5xGoalPvP11en_trantypefPv

# spinCB(xGoal*, void*, en_trantype*, float, void*)
.fn spinCB__FP5xGoalPvP11en_trantypefPv, local
/* 80165094 00162174  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80165098 00162178  7C 08 02 A6 */	mflr r0
/* 8016509C 0016217C  90 01 00 34 */	stw r0, 0x34(r1)
/* 801650A0 00162180  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 801650A4 00162184  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 801650A8 00162188  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801650AC 0016218C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801650B0 00162190  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801650B4 00162194  93 81 00 10 */	stw r28, 0x10(r1)
/* 801650B8 00162198  FF E0 08 90 */	fmr f31, f1
/* 801650BC 0016219C  7C 7C 1B 78 */	mr r28, r3
/* 801650C0 001621A0  7C BD 2B 78 */	mr r29, r5
/* 801650C4 001621A4  4B FA 99 D1 */	bl GetOwner__5xGoalCFv
/* 801650C8 001621A8  3C 80 80 3C */	lis r4, globals@ha
/* 801650CC 001621AC  38 00 BA FF */	li r0, -0x4501
/* 801650D0 001621B0  38 84 05 58 */	addi r4, r4, globals@l
/* 801650D4 001621B4  7C 7F 1B 78 */	mr r31, r3
/* 801650D8 001621B8  80 84 17 88 */	lwz r4, 0x1788(r4)
/* 801650DC 001621BC  3B C0 00 00 */	li r30, 0x0
/* 801650E0 001621C0  7C 80 00 39 */	and. r0, r4, r0
/* 801650E4 001621C4  41 82 00 18 */	beq .L_801650FC
/* 801650E8 001621C8  38 00 00 01 */	li r0, 0x1
/* 801650EC 001621CC  3C 60 4E 47 */	lis r3, 0x4e47
/* 801650F0 001621D0  90 1D 00 00 */	stw r0, 0x0(r29)
/* 801650F4 001621D4  38 63 42 5A */	addi r3, r3, 0x425a
/* 801650F8 001621D8  48 00 02 00 */	b .L_801652F8
.L_801650FC:
/* 801650FC 001621DC  80 1C 00 50 */	lwz r0, 0x50(r28)
/* 80165100 001621E0  28 00 00 06 */	cmplwi r0, 0x6
/* 80165104 001621E4  40 82 00 34 */	bne .L_80165138
/* 80165108 001621E8  38 80 00 00 */	li r4, 0x0
/* 8016510C 001621EC  4B F8 DF 6D */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 80165110 001621F0  C0 02 AA B4 */	lfs f0, "@2280"@sda21(r2)
/* 80165114 001621F4  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80165118 001621F8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016511C 001621FC  40 80 01 D8 */	bge .L_801652F4
/* 80165120 00162200  7F E3 FB 78 */	mr r3, r31
/* 80165124 00162204  4B FF EB 85 */	bl nextGoal__12zNPCBPatrickFv
/* 80165128 00162208  38 00 00 01 */	li r0, 0x1
/* 8016512C 0016220C  7C 7E 1B 78 */	mr r30, r3
/* 80165130 00162210  90 1D 00 00 */	stw r0, 0x0(r29)
/* 80165134 00162214  48 00 01 C0 */	b .L_801652F4
.L_80165138:
/* 80165138 00162218  28 00 00 02 */	cmplwi r0, 0x2
/* 8016513C 0016221C  40 82 00 3C */	bne .L_80165178
/* 80165140 00162220  80 1F 02 B4 */	lwz r0, 0x2b4(r31)
/* 80165144 00162224  54 00 07 BD */	rlwinm. r0, r0, 0, 30, 30
/* 80165148 00162228  41 82 00 30 */	beq .L_80165178
/* 8016514C 0016222C  38 80 00 00 */	li r4, 0x0
/* 80165150 00162230  4B F8 DF 29 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 80165154 00162234  C0 02 AA B4 */	lfs f0, "@2280"@sda21(r2)
/* 80165158 00162238  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8016515C 0016223C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80165160 00162240  40 80 01 94 */	bge .L_801652F4
/* 80165164 00162244  38 00 00 01 */	li r0, 0x1
/* 80165168 00162248  3C 60 4E 47 */	lis r3, 0x4e47
/* 8016516C 0016224C  90 1D 00 00 */	stw r0, 0x0(r29)
/* 80165170 00162250  3B C3 42 5B */	addi r30, r3, 0x425b
/* 80165174 00162254  48 00 01 80 */	b .L_801652F4
.L_80165178:
/* 80165178 00162258  80 7F 02 B4 */	lwz r3, 0x2b4(r31)
/* 8016517C 0016225C  54 60 07 7B */	rlwinm. r0, r3, 0, 29, 29
/* 80165180 00162260  41 82 01 74 */	beq .L_801652F4
/* 80165184 00162264  54 60 07 39 */	rlwinm. r0, r3, 0, 28, 28
/* 80165188 00162268  41 82 01 6C */	beq .L_801652F4
/* 8016518C 0016226C  80 DF 02 B8 */	lwz r6, 0x2b8(r31)
/* 80165190 00162270  7F E3 FB 78 */	mr r3, r31
/* 80165194 00162274  7F E4 FB 78 */	mr r4, r31
/* 80165198 00162278  38 A0 01 D7 */	li r5, 0x1d7
/* 8016519C 0016227C  38 06 FF FF */	addi r0, r6, -0x1
/* 801651A0 00162280  90 1F 02 B8 */	stw r0, 0x2b8(r31)
/* 801651A4 00162284  4B EB A5 3D */	bl zEntEvent__FP5xBaseP5xBaseUi
/* 801651A8 00162288  38 00 00 01 */	li r0, 0x1
/* 801651AC 0016228C  3C 60 4E 47 */	lis r3, 0x4e47
/* 801651B0 00162290  90 1D 00 00 */	stw r0, 0x0(r29)
/* 801651B4 00162294  3B C3 42 5C */	addi r30, r3, 0x425c
/* 801651B8 00162298  80 1F 18 E8 */	lwz r0, 0x18e8(r31)
/* 801651BC 0016229C  54 00 05 29 */	rlwinm. r0, r0, 0, 20, 20
/* 801651C0 001622A0  40 82 00 3C */	bne .L_801651FC
/* 801651C4 001622A4  80 7F 18 E4 */	lwz r3, 0x18e4(r31)
/* 801651C8 001622A8  3C 80 80 2A */	lis r4, sNFComment@ha
/* 801651CC 001622AC  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 801651D0 001622B0  38 A0 00 00 */	li r5, 0x0
/* 801651D4 001622B4  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 801651D8 001622B8  38 C0 FF FF */	li r6, -0x1
/* 801651DC 001622BC  80 84 01 1C */	lwz r4, 0x11c(r4)
/* 801651E0 001622C0  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801651E4 001622C4  7D 89 03 A6 */	mtctr r12
/* 801651E8 001622C8  4E 80 04 21 */	bctrl
/* 801651EC 001622CC  80 1F 18 E8 */	lwz r0, 0x18e8(r31)
/* 801651F0 001622D0  60 00 08 00 */	ori r0, r0, 0x800
/* 801651F4 001622D4  90 1F 18 E8 */	stw r0, 0x18e8(r31)
/* 801651F8 001622D8  48 00 00 F4 */	b .L_801652EC
.L_801651FC:
/* 801651FC 001622DC  80 1F 18 F4 */	lwz r0, 0x18f4(r31)
/* 80165200 001622E0  2C 00 00 05 */	cmpwi r0, 0x5
/* 80165204 001622E4  40 81 00 38 */	ble .L_8016523C
/* 80165208 001622E8  80 7F 18 E4 */	lwz r3, 0x18e4(r31)
/* 8016520C 001622EC  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80165210 001622F0  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80165214 001622F4  38 A0 00 00 */	li r5, 0x0
/* 80165218 001622F8  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 8016521C 001622FC  38 C0 FF FF */	li r6, -0x1
/* 80165220 00162300  80 84 00 EC */	lwz r4, 0xec(r4)
/* 80165224 00162304  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80165228 00162308  7D 89 03 A6 */	mtctr r12
/* 8016522C 0016230C  4E 80 04 21 */	bctrl
/* 80165230 00162310  38 00 00 00 */	li r0, 0x0
/* 80165234 00162314  90 1F 18 F4 */	stw r0, 0x18f4(r31)
/* 80165238 00162318  48 00 00 B4 */	b .L_801652EC
.L_8016523C:
/* 8016523C 0016231C  80 1F 18 F0 */	lwz r0, 0x18f0(r31)
/* 80165240 00162320  2C 00 00 02 */	cmpwi r0, 0x2
/* 80165244 00162324  41 81 00 14 */	bgt .L_80165258
/* 80165248 00162328  40 82 00 3C */	bne .L_80165284
/* 8016524C 0016232C  4B EC BA 1D */	bl xrand__Fv
/* 80165250 00162330  54 60 06 31 */	rlwinm. r0, r3, 0, 24, 24
/* 80165254 00162334  41 82 00 30 */	beq .L_80165284
.L_80165258:
/* 80165258 00162338  80 7F 18 E4 */	lwz r3, 0x18e4(r31)
/* 8016525C 0016233C  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80165260 00162340  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80165264 00162344  38 A0 00 00 */	li r5, 0x0
/* 80165268 00162348  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 8016526C 0016234C  38 C0 FF FF */	li r6, -0x1
/* 80165270 00162350  80 84 00 E4 */	lwz r4, 0xe4(r4)
/* 80165274 00162354  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80165278 00162358  7D 89 03 A6 */	mtctr r12
/* 8016527C 0016235C  4E 80 04 21 */	bctrl
/* 80165280 00162360  48 00 00 6C */	b .L_801652EC
.L_80165284:
/* 80165284 00162364  4B EC B9 E5 */	bl xrand__Fv
/* 80165288 00162368  54 60 05 AF */	rlwinm. r0, r3, 0, 22, 23
/* 8016528C 0016236C  40 82 00 60 */	bne .L_801652EC
/* 80165290 00162370  54 60 06 73 */	rlwinm. r0, r3, 0, 25, 25
/* 80165294 00162374  41 82 00 30 */	beq .L_801652C4
/* 80165298 00162378  80 7F 18 E4 */	lwz r3, 0x18e4(r31)
/* 8016529C 0016237C  3C 80 80 2A */	lis r4, sNFComment@ha
/* 801652A0 00162380  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 801652A4 00162384  38 A0 00 00 */	li r5, 0x0
/* 801652A8 00162388  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 801652AC 0016238C  38 C0 FF FF */	li r6, -0x1
/* 801652B0 00162390  80 84 01 1C */	lwz r4, 0x11c(r4)
/* 801652B4 00162394  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801652B8 00162398  7D 89 03 A6 */	mtctr r12
/* 801652BC 0016239C  4E 80 04 21 */	bctrl
/* 801652C0 001623A0  48 00 00 2C */	b .L_801652EC
.L_801652C4:
/* 801652C4 001623A4  80 7F 18 E4 */	lwz r3, 0x18e4(r31)
/* 801652C8 001623A8  3C 80 80 2A */	lis r4, sNFComment@ha
/* 801652CC 001623AC  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 801652D0 001623B0  38 A0 00 00 */	li r5, 0x0
/* 801652D4 001623B4  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 801652D8 001623B8  38 C0 FF FF */	li r6, -0x1
/* 801652DC 001623BC  80 84 01 24 */	lwz r4, 0x124(r4)
/* 801652E0 001623C0  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801652E4 001623C4  7D 89 03 A6 */	mtctr r12
/* 801652E8 001623C8  4E 80 04 21 */	bctrl
.L_801652EC:
/* 801652EC 001623CC  38 00 00 00 */	li r0, 0x0
/* 801652F0 001623D0  90 1F 18 F0 */	stw r0, 0x18f0(r31)
.L_801652F4:
/* 801652F4 001623D4  7F C3 F3 78 */	mr r3, r30
.L_801652F8:
/* 801652F8 001623D8  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 801652FC 001623DC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80165300 001623E0  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80165304 001623E4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80165308 001623E8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016530C 001623EC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80165310 001623F0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80165314 001623F4  7C 08 03 A6 */	mtlr r0
/* 80165318 001623F8  38 21 00 30 */	addi r1, r1, 0x30
/* 8016531C 001623FC  4E 80 00 20 */	blr
.endfn spinCB__FP5xGoalPvP11en_trantypefPv

# fudgeCB(xGoal*, void*, en_trantype*, float, void*)
.fn fudgeCB__FP5xGoalPvP11en_trantypefPv, local
/* 80165320 00162400  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80165324 00162404  7C 08 02 A6 */	mflr r0
/* 80165328 00162408  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016532C 0016240C  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80165330 00162410  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 80165334 00162414  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80165338 00162418  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016533C 0016241C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80165340 00162420  93 81 00 10 */	stw r28, 0x10(r1)
/* 80165344 00162424  FF E0 08 90 */	fmr f31, f1
/* 80165348 00162428  7C 7C 1B 78 */	mr r28, r3
/* 8016534C 0016242C  7C BD 2B 78 */	mr r29, r5
/* 80165350 00162430  4B FA 97 45 */	bl GetOwner__5xGoalCFv
/* 80165354 00162434  80 9C 00 50 */	lwz r4, 0x50(r28)
/* 80165358 00162438  7C 7F 1B 78 */	mr r31, r3
/* 8016535C 0016243C  3B C0 00 00 */	li r30, 0x0
/* 80165360 00162440  28 04 00 05 */	cmplwi r4, 0x5
/* 80165364 00162444  40 82 00 40 */	bne .L_801653A4
/* 80165368 00162448  3C 60 80 3C */	lis r3, globals@ha
/* 8016536C 0016244C  38 00 BA FF */	li r0, -0x4501
/* 80165370 00162450  38 63 05 58 */	addi r3, r3, globals@l
/* 80165374 00162454  80 63 17 88 */	lwz r3, 0x1788(r3)
/* 80165378 00162458  7C 60 00 39 */	and. r0, r3, r0
/* 8016537C 0016245C  41 82 00 28 */	beq .L_801653A4
/* 80165380 00162460  80 7C 00 5C */	lwz r3, 0x5c(r28)
/* 80165384 00162464  28 03 00 00 */	cmplwi r3, 0x0
/* 80165388 00162468  41 82 00 08 */	beq .L_80165390
/* 8016538C 0016246C  4B EE 3E 75 */	bl xSndStop__FUi
.L_80165390:
/* 80165390 00162470  38 00 00 01 */	li r0, 0x1
/* 80165394 00162474  3C 60 4E 47 */	lis r3, 0x4e47
/* 80165398 00162478  90 1D 00 00 */	stw r0, 0x0(r29)
/* 8016539C 0016247C  38 63 42 5A */	addi r3, r3, 0x425a
/* 801653A0 00162480  48 00 00 40 */	b .L_801653E0
.L_801653A4:
/* 801653A4 00162484  28 04 00 06 */	cmplwi r4, 0x6
/* 801653A8 00162488  40 82 00 34 */	bne .L_801653DC
/* 801653AC 0016248C  7F E3 FB 78 */	mr r3, r31
/* 801653B0 00162490  38 80 00 00 */	li r4, 0x0
/* 801653B4 00162494  4B F8 DC C5 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 801653B8 00162498  C0 02 AA B4 */	lfs f0, "@2280"@sda21(r2)
/* 801653BC 0016249C  EC 00 07 F2 */	fmuls f0, f0, f31
/* 801653C0 001624A0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801653C4 001624A4  40 80 00 18 */	bge .L_801653DC
/* 801653C8 001624A8  7F E3 FB 78 */	mr r3, r31
/* 801653CC 001624AC  4B FF E8 DD */	bl nextGoal__12zNPCBPatrickFv
/* 801653D0 001624B0  38 00 00 01 */	li r0, 0x1
/* 801653D4 001624B4  7C 7E 1B 78 */	mr r30, r3
/* 801653D8 001624B8  90 1D 00 00 */	stw r0, 0x0(r29)
.L_801653DC:
/* 801653DC 001624BC  7F C3 F3 78 */	mr r3, r30
.L_801653E0:
/* 801653E0 001624C0  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 801653E4 001624C4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801653E8 001624C8  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 801653EC 001624CC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801653F0 001624D0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801653F4 001624D4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801653F8 001624D8  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801653FC 001624DC  7C 08 03 A6 */	mtlr r0
/* 80165400 001624E0  38 21 00 30 */	addi r1, r1, 0x30
/* 80165404 001624E4  4E 80 00 20 */	blr
.endfn fudgeCB__FP5xGoalPvP11en_trantypefPv

# Pat_FaceTarget(zNPCBPatrick*, const xVec3*, float, float)
.fn Pat_FaceTarget__FP12zNPCBPatrickPC5xVec3ff, local
/* 80165408 001624E8  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8016540C 001624EC  7C 08 02 A6 */	mflr r0
/* 80165410 001624F0  90 01 00 54 */	stw r0, 0x54(r1)
/* 80165414 001624F4  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80165418 001624F8  F3 E1 00 48 */	psq_st f31, 0x48(r1), 0, qr0
/* 8016541C 001624FC  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 80165420 00162500  F3 C1 00 38 */	psq_st f30, 0x38(r1), 0, qr0
/* 80165424 00162504  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 80165428 00162508  F3 A1 00 28 */	psq_st f29, 0x28(r1), 0, qr0
/* 8016542C 0016250C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80165430 00162510  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80165434 00162514  7C 7E 1B 78 */	mr r30, r3
/* 80165438 00162518  FF A0 08 90 */	fmr f29, f1
/* 8016543C 0016251C  80 A3 00 24 */	lwz r5, 0x24(r3)
/* 80165440 00162520  FF C0 10 90 */	fmr f30, f2
/* 80165444 00162524  38 61 00 08 */	addi r3, r1, 0x8
/* 80165448 00162528  3B E0 FF FF */	li r31, -0x1
/* 8016544C 0016252C  80 A5 00 4C */	lwz r5, 0x4c(r5)
/* 80165450 00162530  38 A5 00 30 */	addi r5, r5, 0x30
/* 80165454 00162534  4B EA 92 3D */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 80165458 00162538  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 8016545C 0016253C  38 61 00 08 */	addi r3, r1, 0x8
/* 80165460 00162540  7C 64 1B 78 */	mr r4, r3
/* 80165464 00162544  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80165468 00162548  4B EE 8E 89 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 8016546C 0016254C  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 80165470 00162550  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 80165474 00162554  C0 23 00 20 */	lfs f1, 0x20(r3)
/* 80165478 00162558  C0 43 00 28 */	lfs f2, 0x28(r3)
/* 8016547C 0016255C  4B EA 0B F5 */	bl xatan2__Fff
/* 80165480 00162560  FF E0 08 90 */	fmr f31, f1
/* 80165484 00162564  C0 21 00 08 */	lfs f1, 0x8(r1)
/* 80165488 00162568  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8016548C 0016256C  4B EA 0B E5 */	bl xatan2__Fff
/* 80165490 00162570  EC 21 F8 28 */	fsubs f1, f1, f31
/* 80165494 00162574  C0 02 AA 1C */	lfs f0, "@1140"@sda21(r2)
/* 80165498 00162578  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016549C 0016257C  40 81 00 0C */	ble .L_801654A8
/* 801654A0 00162580  C0 02 AA 58 */	lfs f0, "@1666"@sda21(r2)
/* 801654A4 00162584  EC 21 00 28 */	fsubs f1, f1, f0
.L_801654A8:
/* 801654A8 00162588  C0 02 AA B8 */	lfs f0, "@2405"@sda21(r2)
/* 801654AC 0016258C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801654B0 00162590  40 80 00 0C */	bge .L_801654BC
/* 801654B4 00162594  C0 02 AA 58 */	lfs f0, "@1666"@sda21(r2)
/* 801654B8 00162598  EC 21 00 2A */	fadds f1, f1, f0
.L_801654BC:
/* 801654BC 0016259C  FC 00 0A 10 */	fabs f0, f1
/* 801654C0 001625A0  EC 5D 07 B2 */	fmuls f2, f29, f30
/* 801654C4 001625A4  FC 00 00 18 */	frsp f0, f0
/* 801654C8 001625A8  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 801654CC 001625AC  40 80 00 1C */	bge .L_801654E8
/* 801654D0 001625B0  80 7E 00 48 */	lwz r3, 0x48(r30)
/* 801654D4 001625B4  38 81 00 08 */	addi r4, r1, 0x8
/* 801654D8 001625B8  38 63 00 20 */	addi r3, r3, 0x20
/* 801654DC 001625BC  4B EA 5D 89 */	bl __as__5xVec3FRC5xVec3
/* 801654E0 001625C0  3B E0 00 00 */	li r31, 0x0
/* 801654E4 001625C4  48 00 00 48 */	b .L_8016552C
.L_801654E8:
/* 801654E8 001625C8  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801654EC 001625CC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801654F0 001625D0  40 80 00 0C */	bge .L_801654FC
/* 801654F4 001625D4  FC 40 10 50 */	fneg f2, f2
/* 801654F8 001625D8  3B E0 00 01 */	li r31, 0x1
.L_801654FC:
/* 801654FC 001625DC  EF FF 10 2A */	fadds f31, f31, f2
/* 80165500 001625E0  FC 20 F8 90 */	fmr f1, f31
/* 80165504 001625E4  4B F5 F9 49 */	bl isin__Ff
/* 80165508 001625E8  80 7E 00 48 */	lwz r3, 0x48(r30)
/* 8016550C 001625EC  D0 23 00 20 */	stfs f1, 0x20(r3)
/* 80165510 001625F0  FC 20 F8 90 */	fmr f1, f31
/* 80165514 001625F4  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80165518 001625F8  80 7E 00 48 */	lwz r3, 0x48(r30)
/* 8016551C 001625FC  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 80165520 00162600  4B F5 F9 71 */	bl icos__Ff
/* 80165524 00162604  80 7E 00 48 */	lwz r3, 0x48(r30)
/* 80165528 00162608  D0 23 00 28 */	stfs f1, 0x28(r3)
.L_8016552C:
/* 8016552C 0016260C  80 7E 00 48 */	lwz r3, 0x48(r30)
/* 80165530 00162610  38 83 00 10 */	addi r4, r3, 0x10
/* 80165534 00162614  38 A3 00 20 */	addi r5, r3, 0x20
/* 80165538 00162618  4B EA FB 55 */	bl xVec3Cross__FP5xVec3PC5xVec3PC5xVec3
/* 8016553C 0016261C  7F E3 FB 78 */	mr r3, r31
/* 80165540 00162620  E3 E1 00 48 */	psq_l f31, 0x48(r1), 0, qr0
/* 80165544 00162624  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80165548 00162628  E3 C1 00 38 */	psq_l f30, 0x38(r1), 0, qr0
/* 8016554C 0016262C  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 80165550 00162630  E3 A1 00 28 */	psq_l f29, 0x28(r1), 0, qr0
/* 80165554 00162634  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 80165558 00162638  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016555C 0016263C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80165560 00162640  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80165564 00162644  7C 08 03 A6 */	mtlr r0
/* 80165568 00162648  38 21 00 50 */	addi r1, r1, 0x50
/* 8016556C 0016264C  4E 80 00 20 */	blr
.endfn Pat_FaceTarget__FP12zNPCBPatrickPC5xVec3ff

# zNPCGoalBossPatIdle::Enter(float, void*)
.fn Enter__19zNPCGoalBossPatIdleFfPv, global
/* 80165570 00162650  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80165574 00162654  7C 08 02 A6 */	mflr r0
/* 80165578 00162658  90 01 00 24 */	stw r0, 0x24(r1)
/* 8016557C 0016265C  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80165580 00162660  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 80165584 00162664  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80165588 00162668  93 C1 00 08 */	stw r30, 0x8(r1)
/* 8016558C 0016266C  FF E0 08 90 */	fmr f31, f1
/* 80165590 00162670  7C 7E 1B 78 */	mr r30, r3
/* 80165594 00162674  7C 9F 23 78 */	mr r31, r4
/* 80165598 00162678  4B FA 94 FD */	bl GetOwner__5xGoalCFv
/* 8016559C 0016267C  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801655A0 00162680  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 801655A4 00162684  80 03 02 B4 */	lwz r0, 0x2b4(r3)
/* 801655A8 00162688  60 00 00 20 */	ori r0, r0, 0x20
/* 801655AC 0016268C  90 03 02 B4 */	stw r0, 0x2b4(r3)
/* 801655B0 00162690  C0 22 A9 C4 */	lfs f1, "@832"@sda21(r2)
/* 801655B4 00162694  80 63 00 48 */	lwz r3, 0x48(r3)
/* 801655B8 00162698  FC 40 08 90 */	fmr f2, f1
/* 801655BC 0016269C  FC 60 08 90 */	fmr f3, f1
/* 801655C0 001626A0  38 63 00 D4 */	addi r3, r3, 0xd4
/* 801655C4 001626A4  4B EA 9A 39 */	bl xVec3Init__FP5xVec3fff
/* 801655C8 001626A8  FC 20 F8 90 */	fmr f1, f31
/* 801655CC 001626AC  7F C3 F3 78 */	mr r3, r30
/* 801655D0 001626B0  7F E4 FB 78 */	mr r4, r31
/* 801655D4 001626B4  4B F6 FB 41 */	bl Enter__14zNPCGoalCommonFfPv
/* 801655D8 001626B8  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 801655DC 001626BC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801655E0 001626C0  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 801655E4 001626C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801655E8 001626C8  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 801655EC 001626CC  7C 08 03 A6 */	mtlr r0
/* 801655F0 001626D0  38 21 00 20 */	addi r1, r1, 0x20
/* 801655F4 001626D4  4E 80 00 20 */	blr
.endfn Enter__19zNPCGoalBossPatIdleFfPv

# zNPCGoalBossPatIdle::Process(en_trantype*, float, void*, xScene*)
.fn Process__19zNPCGoalBossPatIdleFP11en_trantypefPvP6xScene, global
/* 801655F8 001626D8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801655FC 001626DC  7C 08 02 A6 */	mflr r0
/* 80165600 001626E0  90 01 00 34 */	stw r0, 0x34(r1)
/* 80165604 001626E4  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80165608 001626E8  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8016560C 001626EC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80165610 001626F0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80165614 001626F4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80165618 001626F8  93 81 00 10 */	stw r28, 0x10(r1)
/* 8016561C 001626FC  FF E0 08 90 */	fmr f31, f1
/* 80165620 00162700  7C 7C 1B 78 */	mr r28, r3
/* 80165624 00162704  7C 9D 23 78 */	mr r29, r4
/* 80165628 00162708  7C BE 2B 78 */	mr r30, r5
/* 8016562C 0016270C  7C DF 33 78 */	mr r31, r6
/* 80165630 00162710  4B FA 94 65 */	bl GetOwner__5xGoalCFv
/* 80165634 00162714  C0 1C 00 4C */	lfs f0, 0x4c(r28)
/* 80165638 00162718  3C 80 80 3C */	lis r4, globals@ha
/* 8016563C 0016271C  38 84 05 58 */	addi r4, r4, globals@l
/* 80165640 00162720  FC 40 F8 90 */	fmr f2, f31
/* 80165644 00162724  EC 00 F8 2A */	fadds f0, f0, f31
/* 80165648 00162728  D0 1C 00 4C */	stfs f0, 0x4c(r28)
/* 8016564C 0016272C  80 84 07 04 */	lwz r4, 0x704(r4)
/* 80165650 00162730  C0 22 AA 74 */	lfs f1, "@1673"@sda21(r2)
/* 80165654 00162734  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80165658 00162738  38 84 00 30 */	addi r4, r4, 0x30
/* 8016565C 0016273C  4B FF FD AD */	bl Pat_FaceTarget__FP12zNPCBPatrickPC5xVec3ff
/* 80165660 00162740  FC 20 F8 90 */	fmr f1, f31
/* 80165664 00162744  7F 83 E3 78 */	mr r3, r28
/* 80165668 00162748  7F A4 EB 78 */	mr r4, r29
/* 8016566C 0016274C  7F C5 F3 78 */	mr r5, r30
/* 80165670 00162750  7F E6 FB 78 */	mr r6, r31
/* 80165674 00162754  4B FA 94 D5 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
/* 80165678 00162758  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 8016567C 0016275C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80165680 00162760  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80165684 00162764  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80165688 00162768  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016568C 0016276C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80165690 00162770  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80165694 00162774  7C 08 03 A6 */	mtlr r0
/* 80165698 00162778  38 21 00 30 */	addi r1, r1, 0x30
/* 8016569C 0016277C  4E 80 00 20 */	blr
.endfn Process__19zNPCGoalBossPatIdleFP11en_trantypefPvP6xScene

# zNPCGoalBossPatTaunt::Enter(float, void*)
.fn Enter__20zNPCGoalBossPatTauntFfPv, global
/* 801656A0 00162780  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801656A4 00162784  7C 08 02 A6 */	mflr r0
/* 801656A8 00162788  90 01 00 34 */	stw r0, 0x34(r1)
/* 801656AC 0016278C  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 801656B0 00162790  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 801656B4 00162794  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801656B8 00162798  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801656BC 0016279C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801656C0 001627A0  FF E0 08 90 */	fmr f31, f1
/* 801656C4 001627A4  7C 7D 1B 78 */	mr r29, r3
/* 801656C8 001627A8  7C 9E 23 78 */	mr r30, r4
/* 801656CC 001627AC  4B FA 93 C9 */	bl GetOwner__5xGoalCFv
/* 801656D0 001627B0  80 03 02 B4 */	lwz r0, 0x2b4(r3)
/* 801656D4 001627B4  7C 7F 1B 78 */	mr r31, r3
/* 801656D8 001627B8  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 801656DC 001627BC  54 00 07 FA */	rlwinm r0, r0, 0, 31, 29
/* 801656E0 001627C0  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 801656E4 001627C4  38 64 08 9C */	addi r3, r4, "@stringBase0"@l
/* 801656E8 001627C8  38 63 05 45 */	addi r3, r3, 0x545
/* 801656EC 001627CC  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801656F0 001627D0  D0 1D 00 4C */	stfs f0, 0x4c(r29)
/* 801656F4 001627D4  80 1F 02 B4 */	lwz r0, 0x2b4(r31)
/* 801656F8 001627D8  60 00 00 20 */	ori r0, r0, 0x20
/* 801656FC 001627DC  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 80165700 001627E0  4B EE 6B 15 */	bl xStrHash__FPCc
/* 80165704 001627E4  C0 22 AA 6C */	lfs f1, "@1671"@sda21(r2)
/* 80165708 001627E8  7F E6 FB 78 */	mr r6, r31
/* 8016570C 001627EC  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80165710 001627F0  38 80 00 00 */	li r4, 0x0
/* 80165714 001627F4  C0 62 AA 24 */	lfs f3, "@1142"@sda21(r2)
/* 80165718 001627F8  38 A0 00 00 */	li r5, 0x0
/* 8016571C 001627FC  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 80165720 00162800  38 E0 00 00 */	li r7, 0x0
/* 80165724 00162804  C0 A2 AA BC */	lfs f5, "@2423"@sda21(r2)
/* 80165728 00162808  4B EE 33 3D */	bl xSndPlay3D__FUiffUiUiP4xEntff14sound_categoryf
/* 8016572C 0016280C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80165730 00162810  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 80165734 00162814  38 63 05 58 */	addi r3, r3, 0x558
/* 80165738 00162818  4B EE 6A DD */	bl xStrHash__FPCc
/* 8016573C 0016281C  C0 22 AA 6C */	lfs f1, "@1671"@sda21(r2)
/* 80165740 00162820  7F E6 FB 78 */	mr r6, r31
/* 80165744 00162824  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80165748 00162828  38 80 00 00 */	li r4, 0x0
/* 8016574C 0016282C  C0 62 AA 24 */	lfs f3, "@1142"@sda21(r2)
/* 80165750 00162830  38 A0 00 00 */	li r5, 0x0
/* 80165754 00162834  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 80165758 00162838  38 E0 00 00 */	li r7, 0x0
/* 8016575C 0016283C  C0 A2 AA C0 */	lfs f5, "@2424"@sda21(r2)
/* 80165760 00162840  4B EE 33 05 */	bl xSndPlay3D__FUiffUiUiP4xEntff14sound_categoryf
/* 80165764 00162844  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80165768 00162848  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 8016576C 0016284C  38 63 05 6B */	addi r3, r3, 0x56b
/* 80165770 00162850  4B EE 6A A5 */	bl xStrHash__FPCc
/* 80165774 00162854  C0 22 AA 6C */	lfs f1, "@1671"@sda21(r2)
/* 80165778 00162858  7F E6 FB 78 */	mr r6, r31
/* 8016577C 0016285C  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80165780 00162860  38 80 00 00 */	li r4, 0x0
/* 80165784 00162864  C0 62 AA 24 */	lfs f3, "@1142"@sda21(r2)
/* 80165788 00162868  38 A0 00 00 */	li r5, 0x0
/* 8016578C 0016286C  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 80165790 00162870  38 E0 00 00 */	li r7, 0x0
/* 80165794 00162874  C0 A2 AA C4 */	lfs f5, "@2425"@sda21(r2)
/* 80165798 00162878  4B EE 32 CD */	bl xSndPlay3D__FUiffUiUiP4xEntff14sound_categoryf
/* 8016579C 0016287C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801657A0 00162880  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 801657A4 00162884  38 63 05 7E */	addi r3, r3, 0x57e
/* 801657A8 00162888  4B EE 6A 6D */	bl xStrHash__FPCc
/* 801657AC 0016288C  C0 22 AA 6C */	lfs f1, "@1671"@sda21(r2)
/* 801657B0 00162890  7F E6 FB 78 */	mr r6, r31
/* 801657B4 00162894  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 801657B8 00162898  38 80 00 00 */	li r4, 0x0
/* 801657BC 0016289C  C0 62 AA 24 */	lfs f3, "@1142"@sda21(r2)
/* 801657C0 001628A0  38 A0 00 00 */	li r5, 0x0
/* 801657C4 001628A4  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 801657C8 001628A8  38 E0 00 00 */	li r7, 0x0
/* 801657CC 001628AC  C0 A2 AA C8 */	lfs f5, "@2426"@sda21(r2)
/* 801657D0 001628B0  4B EE 32 95 */	bl xSndPlay3D__FUiffUiUiP4xEntff14sound_categoryf
/* 801657D4 001628B4  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801657D8 001628B8  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 801657DC 001628BC  38 63 05 91 */	addi r3, r3, 0x591
/* 801657E0 001628C0  4B EE 6A 35 */	bl xStrHash__FPCc
/* 801657E4 001628C4  C0 22 AA 6C */	lfs f1, "@1671"@sda21(r2)
/* 801657E8 001628C8  7F E6 FB 78 */	mr r6, r31
/* 801657EC 001628CC  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 801657F0 001628D0  38 80 00 00 */	li r4, 0x0
/* 801657F4 001628D4  C0 62 AA 24 */	lfs f3, "@1142"@sda21(r2)
/* 801657F8 001628D8  38 A0 00 00 */	li r5, 0x0
/* 801657FC 001628DC  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 80165800 001628E0  38 E0 00 00 */	li r7, 0x0
/* 80165804 001628E4  C0 A2 AA CC */	lfs f5, "@2427"@sda21(r2)
/* 80165808 001628E8  4B EE 32 5D */	bl xSndPlay3D__FUiffUiUiP4xEntff14sound_categoryf
/* 8016580C 001628EC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80165810 001628F0  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 80165814 001628F4  38 63 05 A4 */	addi r3, r3, 0x5a4
/* 80165818 001628F8  4B EE 69 FD */	bl xStrHash__FPCc
/* 8016581C 001628FC  C0 22 AA 6C */	lfs f1, "@1671"@sda21(r2)
/* 80165820 00162900  7F E6 FB 78 */	mr r6, r31
/* 80165824 00162904  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80165828 00162908  38 80 00 00 */	li r4, 0x0
/* 8016582C 0016290C  C0 62 AA 24 */	lfs f3, "@1142"@sda21(r2)
/* 80165830 00162910  38 A0 00 00 */	li r5, 0x0
/* 80165834 00162914  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 80165838 00162918  38 E0 00 00 */	li r7, 0x0
/* 8016583C 0016291C  C0 A2 AA D0 */	lfs f5, "@2428"@sda21(r2)
/* 80165840 00162920  4B EE 32 25 */	bl xSndPlay3D__FUiffUiUiP4xEntff14sound_categoryf
/* 80165844 00162924  FC 20 F8 90 */	fmr f1, f31
/* 80165848 00162928  7F A3 EB 78 */	mr r3, r29
/* 8016584C 0016292C  7F C4 F3 78 */	mr r4, r30
/* 80165850 00162930  4B F6 F8 C5 */	bl Enter__14zNPCGoalCommonFfPv
/* 80165854 00162934  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80165858 00162938  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8016585C 0016293C  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80165860 00162940  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80165864 00162944  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80165868 00162948  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8016586C 0016294C  7C 08 03 A6 */	mtlr r0
/* 80165870 00162950  38 21 00 30 */	addi r1, r1, 0x30
/* 80165874 00162954  4E 80 00 20 */	blr
.endfn Enter__20zNPCGoalBossPatTauntFfPv

# zNPCGoalBossPatTaunt::Process(en_trantype*, float, void*, xScene*)
.fn Process__20zNPCGoalBossPatTauntFP11en_trantypefPvP6xScene, global
/* 80165878 00162958  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8016587C 0016295C  7C 08 02 A6 */	mflr r0
/* 80165880 00162960  90 01 00 34 */	stw r0, 0x34(r1)
/* 80165884 00162964  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80165888 00162968  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8016588C 0016296C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80165890 00162970  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80165894 00162974  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80165898 00162978  93 81 00 10 */	stw r28, 0x10(r1)
/* 8016589C 0016297C  FF E0 08 90 */	fmr f31, f1
/* 801658A0 00162980  7C 7C 1B 78 */	mr r28, r3
/* 801658A4 00162984  7C 9D 23 78 */	mr r29, r4
/* 801658A8 00162988  7C BE 2B 78 */	mr r30, r5
/* 801658AC 0016298C  7C DF 33 78 */	mr r31, r6
/* 801658B0 00162990  4B FA 91 E5 */	bl GetOwner__5xGoalCFv
/* 801658B4 00162994  C0 1C 00 4C */	lfs f0, 0x4c(r28)
/* 801658B8 00162998  3C 80 80 3C */	lis r4, globals@ha
/* 801658BC 0016299C  38 84 05 58 */	addi r4, r4, globals@l
/* 801658C0 001629A0  FC 40 F8 90 */	fmr f2, f31
/* 801658C4 001629A4  EC 00 F8 2A */	fadds f0, f0, f31
/* 801658C8 001629A8  D0 1C 00 4C */	stfs f0, 0x4c(r28)
/* 801658CC 001629AC  80 84 07 04 */	lwz r4, 0x704(r4)
/* 801658D0 001629B0  C0 22 AA 74 */	lfs f1, "@1673"@sda21(r2)
/* 801658D4 001629B4  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 801658D8 001629B8  38 84 00 30 */	addi r4, r4, 0x30
/* 801658DC 001629BC  4B FF FB 2D */	bl Pat_FaceTarget__FP12zNPCBPatrickPC5xVec3ff
/* 801658E0 001629C0  FC 20 F8 90 */	fmr f1, f31
/* 801658E4 001629C4  7F 83 E3 78 */	mr r3, r28
/* 801658E8 001629C8  7F A4 EB 78 */	mr r4, r29
/* 801658EC 001629CC  7F C5 F3 78 */	mr r5, r30
/* 801658F0 001629D0  7F E6 FB 78 */	mr r6, r31
/* 801658F4 001629D4  4B FA 92 55 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
/* 801658F8 001629D8  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 801658FC 001629DC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80165900 001629E0  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80165904 001629E4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80165908 001629E8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016590C 001629EC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80165910 001629F0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80165914 001629F4  7C 08 03 A6 */	mtlr r0
/* 80165918 001629F8  38 21 00 30 */	addi r1, r1, 0x30
/* 8016591C 001629FC  4E 80 00 20 */	blr
.endfn Process__20zNPCGoalBossPatTauntFP11en_trantypefPvP6xScene

# zNPCGoalBossPatHit::Enter(float, void*)
.fn Enter__18zNPCGoalBossPatHitFfPv, global
/* 80165920 00162A00  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80165924 00162A04  7C 08 02 A6 */	mflr r0
/* 80165928 00162A08  90 01 00 34 */	stw r0, 0x34(r1)
/* 8016592C 00162A0C  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80165930 00162A10  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 80165934 00162A14  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80165938 00162A18  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8016593C 00162A1C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80165940 00162A20  FF E0 08 90 */	fmr f31, f1
/* 80165944 00162A24  7C 7D 1B 78 */	mr r29, r3
/* 80165948 00162A28  7C 9E 23 78 */	mr r30, r4
/* 8016594C 00162A2C  4B FA 91 49 */	bl GetOwner__5xGoalCFv
/* 80165950 00162A30  80 A3 02 B4 */	lwz r5, 0x2b4(r3)
/* 80165954 00162A34  38 00 FF D3 */	li r0, -0x2d
/* 80165958 00162A38  7C 7F 1B 78 */	mr r31, r3
/* 8016595C 00162A3C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80165960 00162A40  7C A0 00 38 */	and r0, r5, r0
/* 80165964 00162A44  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 80165968 00162A48  38 64 08 9C */	addi r3, r4, "@stringBase0"@l
/* 8016596C 00162A4C  38 63 05 B7 */	addi r3, r3, 0x5b7
/* 80165970 00162A50  80 8D 97 04 */	lwz r4, sPat_Ptr@sda21(r13)
/* 80165974 00162A54  80 84 13 C4 */	lwz r4, 0x13c4(r4)
/* 80165978 00162A58  80 84 00 00 */	lwz r4, 0x0(r4)
/* 8016597C 00162A5C  88 04 00 22 */	lbz r0, 0x22(r4)
/* 80165980 00162A60  70 00 00 EF */	andi. r0, r0, 0xef
/* 80165984 00162A64  98 04 00 22 */	stb r0, 0x22(r4)
/* 80165988 00162A68  80 8D 97 04 */	lwz r4, sPat_Ptr@sda21(r13)
/* 8016598C 00162A6C  80 84 13 C4 */	lwz r4, 0x13c4(r4)
/* 80165990 00162A70  80 84 00 04 */	lwz r4, 0x4(r4)
/* 80165994 00162A74  88 04 00 22 */	lbz r0, 0x22(r4)
/* 80165998 00162A78  70 00 00 EF */	andi. r0, r0, 0xef
/* 8016599C 00162A7C  98 04 00 22 */	stb r0, 0x22(r4)
/* 801659A0 00162A80  80 8D 97 04 */	lwz r4, sPat_Ptr@sda21(r13)
/* 801659A4 00162A84  80 84 13 C4 */	lwz r4, 0x13c4(r4)
/* 801659A8 00162A88  80 84 00 08 */	lwz r4, 0x8(r4)
/* 801659AC 00162A8C  88 04 00 22 */	lbz r0, 0x22(r4)
/* 801659B0 00162A90  70 00 00 EF */	andi. r0, r0, 0xef
/* 801659B4 00162A94  98 04 00 22 */	stb r0, 0x22(r4)
/* 801659B8 00162A98  80 8D 97 04 */	lwz r4, sPat_Ptr@sda21(r13)
/* 801659BC 00162A9C  80 84 13 C4 */	lwz r4, 0x13c4(r4)
/* 801659C0 00162AA0  80 84 00 0C */	lwz r4, 0xc(r4)
/* 801659C4 00162AA4  88 04 00 22 */	lbz r0, 0x22(r4)
/* 801659C8 00162AA8  70 00 00 EF */	andi. r0, r0, 0xef
/* 801659CC 00162AAC  98 04 00 22 */	stb r0, 0x22(r4)
/* 801659D0 00162AB0  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801659D4 00162AB4  D0 1D 00 4C */	stfs f0, 0x4c(r29)
/* 801659D8 00162AB8  4B EE 68 3D */	bl xStrHash__FPCc
/* 801659DC 00162ABC  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 801659E0 00162AC0  7F E6 FB 78 */	mr r6, r31
/* 801659E4 00162AC4  C0 22 AA 6C */	lfs f1, "@1671"@sda21(r2)
/* 801659E8 00162AC8  38 80 00 00 */	li r4, 0x0
/* 801659EC 00162ACC  FC A0 10 90 */	fmr f5, f2
/* 801659F0 00162AD0  C0 62 AA 24 */	lfs f3, "@1142"@sda21(r2)
/* 801659F4 00162AD4  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 801659F8 00162AD8  38 A0 00 00 */	li r5, 0x0
/* 801659FC 00162ADC  38 E0 00 00 */	li r7, 0x0
/* 80165A00 00162AE0  4B EE 30 65 */	bl xSndPlay3D__FUiffUiUiP4xEntff14sound_categoryf
/* 80165A04 00162AE4  4B EC B2 65 */	bl xrand__Fv
/* 80165A08 00162AE8  54 60 03 9D */	rlwinm. r0, r3, 0, 14, 14
/* 80165A0C 00162AEC  41 82 00 40 */	beq .L_80165A4C
/* 80165A10 00162AF0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80165A14 00162AF4  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 80165A18 00162AF8  38 63 05 C9 */	addi r3, r3, 0x5c9
/* 80165A1C 00162AFC  4B EE 67 F9 */	bl xStrHash__FPCc
/* 80165A20 00162B00  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80165A24 00162B04  7F E6 FB 78 */	mr r6, r31
/* 80165A28 00162B08  C0 22 AA 6C */	lfs f1, "@1671"@sda21(r2)
/* 80165A2C 00162B0C  38 80 00 00 */	li r4, 0x0
/* 80165A30 00162B10  FC A0 10 90 */	fmr f5, f2
/* 80165A34 00162B14  C0 62 AA 24 */	lfs f3, "@1142"@sda21(r2)
/* 80165A38 00162B18  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 80165A3C 00162B1C  38 A0 00 00 */	li r5, 0x0
/* 80165A40 00162B20  38 E0 00 00 */	li r7, 0x0
/* 80165A44 00162B24  4B EE 30 21 */	bl xSndPlay3D__FUiffUiUiP4xEntff14sound_categoryf
/* 80165A48 00162B28  48 00 00 3C */	b .L_80165A84
.L_80165A4C:
/* 80165A4C 00162B2C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80165A50 00162B30  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 80165A54 00162B34  38 63 05 DB */	addi r3, r3, 0x5db
/* 80165A58 00162B38  4B EE 67 BD */	bl xStrHash__FPCc
/* 80165A5C 00162B3C  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80165A60 00162B40  7F E6 FB 78 */	mr r6, r31
/* 80165A64 00162B44  C0 22 AA 6C */	lfs f1, "@1671"@sda21(r2)
/* 80165A68 00162B48  38 80 00 00 */	li r4, 0x0
/* 80165A6C 00162B4C  FC A0 10 90 */	fmr f5, f2
/* 80165A70 00162B50  C0 62 AA 24 */	lfs f3, "@1142"@sda21(r2)
/* 80165A74 00162B54  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 80165A78 00162B58  38 A0 00 00 */	li r5, 0x0
/* 80165A7C 00162B5C  38 E0 00 00 */	li r7, 0x0
/* 80165A80 00162B60  4B EE 2F E5 */	bl xSndPlay3D__FUiffUiUiP4xEntff14sound_categoryf
.L_80165A84:
/* 80165A84 00162B64  FC 20 F8 90 */	fmr f1, f31
/* 80165A88 00162B68  7F A3 EB 78 */	mr r3, r29
/* 80165A8C 00162B6C  7F C4 F3 78 */	mr r4, r30
/* 80165A90 00162B70  4B F6 F6 85 */	bl Enter__14zNPCGoalCommonFfPv
/* 80165A94 00162B74  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80165A98 00162B78  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80165A9C 00162B7C  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80165AA0 00162B80  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80165AA4 00162B84  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80165AA8 00162B88  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80165AAC 00162B8C  7C 08 03 A6 */	mtlr r0
/* 80165AB0 00162B90  38 21 00 30 */	addi r1, r1, 0x30
/* 80165AB4 00162B94  4E 80 00 20 */	blr
.endfn Enter__18zNPCGoalBossPatHitFfPv

# zNPCGoalBossPatHit::Process(en_trantype*, float, void*, xScene*)
.fn Process__18zNPCGoalBossPatHitFP11en_trantypefPvP6xScene, global
/* 80165AB8 00162B98  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80165ABC 00162B9C  7C 08 02 A6 */	mflr r0
/* 80165AC0 00162BA0  90 01 00 34 */	stw r0, 0x34(r1)
/* 80165AC4 00162BA4  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80165AC8 00162BA8  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 80165ACC 00162BAC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80165AD0 00162BB0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80165AD4 00162BB4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80165AD8 00162BB8  93 81 00 10 */	stw r28, 0x10(r1)
/* 80165ADC 00162BBC  FF E0 08 90 */	fmr f31, f1
/* 80165AE0 00162BC0  7C 7C 1B 78 */	mr r28, r3
/* 80165AE4 00162BC4  7C 9D 23 78 */	mr r29, r4
/* 80165AE8 00162BC8  7C BE 2B 78 */	mr r30, r5
/* 80165AEC 00162BCC  7C DF 33 78 */	mr r31, r6
/* 80165AF0 00162BD0  4B FA 8F A5 */	bl GetOwner__5xGoalCFv
/* 80165AF4 00162BD4  C0 1C 00 4C */	lfs f0, 0x4c(r28)
/* 80165AF8 00162BD8  3C 80 80 3C */	lis r4, globals@ha
/* 80165AFC 00162BDC  38 84 05 58 */	addi r4, r4, globals@l
/* 80165B00 00162BE0  FC 40 F8 90 */	fmr f2, f31
/* 80165B04 00162BE4  EC 00 F8 2A */	fadds f0, f0, f31
/* 80165B08 00162BE8  D0 1C 00 4C */	stfs f0, 0x4c(r28)
/* 80165B0C 00162BEC  80 84 07 04 */	lwz r4, 0x704(r4)
/* 80165B10 00162BF0  C0 22 AA 74 */	lfs f1, "@1673"@sda21(r2)
/* 80165B14 00162BF4  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80165B18 00162BF8  38 84 00 30 */	addi r4, r4, 0x30
/* 80165B1C 00162BFC  4B FF F8 ED */	bl Pat_FaceTarget__FP12zNPCBPatrickPC5xVec3ff
/* 80165B20 00162C00  FC 20 F8 90 */	fmr f1, f31
/* 80165B24 00162C04  7F 83 E3 78 */	mr r3, r28
/* 80165B28 00162C08  7F A4 EB 78 */	mr r4, r29
/* 80165B2C 00162C0C  7F C5 F3 78 */	mr r5, r30
/* 80165B30 00162C10  7F E6 FB 78 */	mr r6, r31
/* 80165B34 00162C14  4B FA 90 15 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
/* 80165B38 00162C18  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80165B3C 00162C1C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80165B40 00162C20  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80165B44 00162C24  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80165B48 00162C28  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80165B4C 00162C2C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80165B50 00162C30  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80165B54 00162C34  7C 08 03 A6 */	mtlr r0
/* 80165B58 00162C38  38 21 00 30 */	addi r1, r1, 0x30
/* 80165B5C 00162C3C  4E 80 00 20 */	blr
.endfn Process__18zNPCGoalBossPatHitFP11en_trantypefPvP6xScene

# zNPCGoalBossPatHit::Exit(float, void*)
.fn Exit__18zNPCGoalBossPatHitFfPv, global
/* 80165B60 00162C40  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80165B64 00162C44  7C 08 02 A6 */	mflr r0
/* 80165B68 00162C48  90 01 00 24 */	stw r0, 0x24(r1)
/* 80165B6C 00162C4C  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 80165B70 00162C50  FF E0 08 90 */	fmr f31, f1
/* 80165B74 00162C54  93 E1 00 14 */	stw r31, 0x14(r1)
/* 80165B78 00162C58  7C 9F 23 78 */	mr r31, r4
/* 80165B7C 00162C5C  93 C1 00 10 */	stw r30, 0x10(r1)
/* 80165B80 00162C60  7C 7E 1B 78 */	mr r30, r3
/* 80165B84 00162C64  4B FA 8F 11 */	bl GetOwner__5xGoalCFv
/* 80165B88 00162C68  80 AD 97 04 */	lwz r5, sPat_Ptr@sda21(r13)
/* 80165B8C 00162C6C  FC 20 F8 90 */	fmr f1, f31
/* 80165B90 00162C70  7F C3 F3 78 */	mr r3, r30
/* 80165B94 00162C74  7F E4 FB 78 */	mr r4, r31
/* 80165B98 00162C78  80 A5 13 C4 */	lwz r5, 0x13c4(r5)
/* 80165B9C 00162C7C  80 A5 00 00 */	lwz r5, 0x0(r5)
/* 80165BA0 00162C80  88 05 00 22 */	lbz r0, 0x22(r5)
/* 80165BA4 00162C84  60 00 00 10 */	ori r0, r0, 0x10
/* 80165BA8 00162C88  98 05 00 22 */	stb r0, 0x22(r5)
/* 80165BAC 00162C8C  80 AD 97 04 */	lwz r5, sPat_Ptr@sda21(r13)
/* 80165BB0 00162C90  80 A5 13 C4 */	lwz r5, 0x13c4(r5)
/* 80165BB4 00162C94  80 A5 00 04 */	lwz r5, 0x4(r5)
/* 80165BB8 00162C98  88 05 00 22 */	lbz r0, 0x22(r5)
/* 80165BBC 00162C9C  60 00 00 10 */	ori r0, r0, 0x10
/* 80165BC0 00162CA0  98 05 00 22 */	stb r0, 0x22(r5)
/* 80165BC4 00162CA4  80 AD 97 04 */	lwz r5, sPat_Ptr@sda21(r13)
/* 80165BC8 00162CA8  80 A5 13 C4 */	lwz r5, 0x13c4(r5)
/* 80165BCC 00162CAC  80 A5 00 08 */	lwz r5, 0x8(r5)
/* 80165BD0 00162CB0  88 05 00 22 */	lbz r0, 0x22(r5)
/* 80165BD4 00162CB4  60 00 00 10 */	ori r0, r0, 0x10
/* 80165BD8 00162CB8  98 05 00 22 */	stb r0, 0x22(r5)
/* 80165BDC 00162CBC  80 AD 97 04 */	lwz r5, sPat_Ptr@sda21(r13)
/* 80165BE0 00162CC0  80 A5 13 C4 */	lwz r5, 0x13c4(r5)
/* 80165BE4 00162CC4  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 80165BE8 00162CC8  88 05 00 22 */	lbz r0, 0x22(r5)
/* 80165BEC 00162CCC  60 00 00 10 */	ori r0, r0, 0x10
/* 80165BF0 00162CD0  98 05 00 22 */	stb r0, 0x22(r5)
/* 80165BF4 00162CD4  4B F6 F8 29 */	bl Exit__5xGoalFfPv
/* 80165BF8 00162CD8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80165BFC 00162CDC  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80165C00 00162CE0  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 80165C04 00162CE4  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 80165C08 00162CE8  7C 08 03 A6 */	mtlr r0
/* 80165C0C 00162CEC  38 21 00 20 */	addi r1, r1, 0x20
/* 80165C10 00162CF0  4E 80 00 20 */	blr
.endfn Exit__18zNPCGoalBossPatHitFfPv

# zNPCGoalBossPatSpit::Enter(float, void*)
.fn Enter__19zNPCGoalBossPatSpitFfPv, global
/* 80165C14 00162CF4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80165C18 00162CF8  7C 08 02 A6 */	mflr r0
/* 80165C1C 00162CFC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80165C20 00162D00  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80165C24 00162D04  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 80165C28 00162D08  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80165C2C 00162D0C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80165C30 00162D10  FF E0 08 90 */	fmr f31, f1
/* 80165C34 00162D14  7C 7E 1B 78 */	mr r30, r3
/* 80165C38 00162D18  7C 9F 23 78 */	mr r31, r4
/* 80165C3C 00162D1C  4B FA 8E 59 */	bl GetOwner__5xGoalCFv
/* 80165C40 00162D20  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80165C44 00162D24  38 00 00 00 */	li r0, 0x0
/* 80165C48 00162D28  FC 20 F8 90 */	fmr f1, f31
/* 80165C4C 00162D2C  7F E4 FB 78 */	mr r4, r31
/* 80165C50 00162D30  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 80165C54 00162D34  C0 02 A9 C0 */	lfs f0, "@831"@sda21(r2)
/* 80165C58 00162D38  D0 1E 00 54 */	stfs f0, 0x54(r30)
/* 80165C5C 00162D3C  90 1E 00 50 */	stw r0, 0x50(r30)
/* 80165C60 00162D40  80 03 02 B4 */	lwz r0, 0x2b4(r3)
/* 80165C64 00162D44  60 00 00 20 */	ori r0, r0, 0x20
/* 80165C68 00162D48  90 03 02 B4 */	stw r0, 0x2b4(r3)
/* 80165C6C 00162D4C  80 A3 18 F4 */	lwz r5, 0x18f4(r3)
/* 80165C70 00162D50  38 05 00 01 */	addi r0, r5, 0x1
/* 80165C74 00162D54  90 03 18 F4 */	stw r0, 0x18f4(r3)
/* 80165C78 00162D58  7F C3 F3 78 */	mr r3, r30
/* 80165C7C 00162D5C  4B F6 F4 99 */	bl Enter__14zNPCGoalCommonFfPv
/* 80165C80 00162D60  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 80165C84 00162D64  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80165C88 00162D68  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80165C8C 00162D6C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80165C90 00162D70  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80165C94 00162D74  7C 08 03 A6 */	mtlr r0
/* 80165C98 00162D78  38 21 00 20 */	addi r1, r1, 0x20
/* 80165C9C 00162D7C  4E 80 00 20 */	blr
.endfn Enter__19zNPCGoalBossPatSpitFfPv

# zNPCGoalBossPatSpit::Process(en_trantype*, float, void*, xScene*)
.fn Process__19zNPCGoalBossPatSpitFP11en_trantypefPvP6xScene, global
/* 80165CA0 00162D80  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 80165CA4 00162D84  7C 08 02 A6 */	mflr r0
/* 80165CA8 00162D88  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 80165CAC 00162D8C  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 80165CB0 00162D90  F3 E1 00 D8 */	psq_st f31, 0xd8(r1), 0, qr0
/* 80165CB4 00162D94  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 80165CB8 00162D98  F3 C1 00 C8 */	psq_st f30, 0xc8(r1), 0, qr0
/* 80165CBC 00162D9C  BF 21 00 A4 */	stmw r25, 0xa4(r1)
/* 80165CC0 00162DA0  FF E0 08 90 */	fmr f31, f1
/* 80165CC4 00162DA4  7C 7A 1B 78 */	mr r26, r3
/* 80165CC8 00162DA8  7C 9B 23 78 */	mr r27, r4
/* 80165CCC 00162DAC  7C BC 2B 78 */	mr r28, r5
/* 80165CD0 00162DB0  7C DD 33 78 */	mr r29, r6
/* 80165CD4 00162DB4  4B FA 8D C1 */	bl GetOwner__5xGoalCFv
/* 80165CD8 00162DB8  C0 1A 00 4C */	lfs f0, 0x4c(r26)
/* 80165CDC 00162DBC  7C 7F 1B 78 */	mr r31, r3
/* 80165CE0 00162DC0  EC 00 F8 2A */	fadds f0, f0, f31
/* 80165CE4 00162DC4  D0 1A 00 4C */	stfs f0, 0x4c(r26)
/* 80165CE8 00162DC8  C0 3A 00 54 */	lfs f1, 0x54(r26)
/* 80165CEC 00162DCC  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80165CF0 00162DD0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80165CF4 00162DD4  40 80 00 0C */	bge .L_80165D00
/* 80165CF8 00162DD8  3B 20 00 00 */	li r25, 0x0
/* 80165CFC 00162DDC  48 00 00 08 */	b .L_80165D04
.L_80165D00:
/* 80165D00 00162DE0  3B 20 00 01 */	li r25, 0x1
.L_80165D04:
/* 80165D04 00162DE4  80 1A 00 50 */	lwz r0, 0x50(r26)
/* 80165D08 00162DE8  C3 C2 A9 C0 */	lfs f30, "@831"@sda21(r2)
/* 80165D0C 00162DEC  2C 00 00 01 */	cmpwi r0, 0x1
/* 80165D10 00162DF0  41 82 00 80 */	beq .L_80165D90
/* 80165D14 00162DF4  40 80 00 10 */	bge .L_80165D24
/* 80165D18 00162DF8  2C 00 00 00 */	cmpwi r0, 0x0
/* 80165D1C 00162DFC  40 80 00 14 */	bge .L_80165D30
/* 80165D20 00162E00  48 00 00 BC */	b .L_80165DDC
.L_80165D24:
/* 80165D24 00162E04  2C 00 00 03 */	cmpwi r0, 0x3
/* 80165D28 00162E08  40 80 00 B4 */	bge .L_80165DDC
/* 80165D2C 00162E0C  48 00 00 8C */	b .L_80165DB8
.L_80165D30:
/* 80165D30 00162E10  7F E3 FB 78 */	mr r3, r31
/* 80165D34 00162E14  38 80 00 00 */	li r4, 0x0
/* 80165D38 00162E18  4B F8 D3 41 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 80165D3C 00162E1C  C0 02 AA D4 */	lfs f0, "@2512"@sda21(r2)
/* 80165D40 00162E20  7F E3 FB 78 */	mr r3, r31
/* 80165D44 00162E24  38 80 00 00 */	li r4, 0x0
/* 80165D48 00162E28  EC 00 08 2A */	fadds f0, f0, f1
/* 80165D4C 00162E2C  EF DE 00 2A */	fadds f30, f30, f0
/* 80165D50 00162E30  4B F8 D3 29 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 80165D54 00162E34  C0 02 AA B4 */	lfs f0, "@2280"@sda21(r2)
/* 80165D58 00162E38  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80165D5C 00162E3C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80165D60 00162E40  40 80 00 7C */	bge .L_80165DDC
/* 80165D64 00162E44  38 00 00 01 */	li r0, 0x1
/* 80165D68 00162E48  7F 43 D3 78 */	mr r3, r26
/* 80165D6C 00162E4C  90 1A 00 50 */	stw r0, 0x50(r26)
/* 80165D70 00162E50  38 80 00 20 */	li r4, 0x20
/* 80165D74 00162E54  38 A0 00 00 */	li r5, 0x0
/* 80165D78 00162E58  C0 02 AA D4 */	lfs f0, "@2512"@sda21(r2)
/* 80165D7C 00162E5C  D0 1A 00 54 */	stfs f0, 0x54(r26)
/* 80165D80 00162E60  4B F6 F5 99 */	bl DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi
/* 80165D84 00162E64  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80165D88 00162E68  D0 1A 00 4C */	stfs f0, 0x4c(r26)
/* 80165D8C 00162E6C  48 00 00 50 */	b .L_80165DDC
.L_80165D90:
/* 80165D90 00162E70  C0 1A 00 54 */	lfs f0, 0x54(r26)
/* 80165D94 00162E74  EC 00 F8 28 */	fsubs f0, f0, f31
/* 80165D98 00162E78  D0 1A 00 54 */	stfs f0, 0x54(r26)
/* 80165D9C 00162E7C  C0 3A 00 54 */	lfs f1, 0x54(r26)
/* 80165DA0 00162E80  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80165DA4 00162E84  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80165DA8 00162E88  4C 41 13 82 */	cror eq, gt, eq
/* 80165DAC 00162E8C  40 82 00 30 */	bne .L_80165DDC
/* 80165DB0 00162E90  EF DE 08 2A */	fadds f30, f30, f1
/* 80165DB4 00162E94  48 00 00 28 */	b .L_80165DDC
.L_80165DB8:
/* 80165DB8 00162E98  C0 1A 00 54 */	lfs f0, 0x54(r26)
/* 80165DBC 00162E9C  EC 00 F8 28 */	fsubs f0, f0, f31
/* 80165DC0 00162EA0  D0 1A 00 54 */	stfs f0, 0x54(r26)
/* 80165DC4 00162EA4  C0 3A 00 54 */	lfs f1, 0x54(r26)
/* 80165DC8 00162EA8  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80165DCC 00162EAC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80165DD0 00162EB0  4C 41 13 82 */	cror eq, gt, eq
/* 80165DD4 00162EB4  40 82 00 08 */	bne .L_80165DDC
/* 80165DD8 00162EB8  EF DE 08 2A */	fadds f30, f30, f1
.L_80165DDC:
/* 80165DDC 00162EBC  FC 20 F0 90 */	fmr f1, f30
/* 80165DE0 00162EC0  C0 42 A9 C0 */	lfs f2, "@831"@sda21(r2)
/* 80165DE4 00162EC4  38 61 00 38 */	addi r3, r1, 0x38
/* 80165DE8 00162EC8  38 80 00 01 */	li r4, 0x1
/* 80165DEC 00162ECC  4B F0 9B 91 */	bl zEntPlayer_PredictPos__FP5xVec3ffi
/* 80165DF0 00162ED0  FC 40 F8 90 */	fmr f2, f31
/* 80165DF4 00162ED4  C0 22 AA 74 */	lfs f1, "@1673"@sda21(r2)
/* 80165DF8 00162ED8  7F E3 FB 78 */	mr r3, r31
/* 80165DFC 00162EDC  38 81 00 38 */	addi r4, r1, 0x38
/* 80165E00 00162EE0  4B FF F6 09 */	bl Pat_FaceTarget__FP12zNPCBPatrickPC5xVec3ff
/* 80165E04 00162EE4  2C 19 00 00 */	cmpwi r25, 0x0
/* 80165E08 00162EE8  41 82 03 08 */	beq .L_80166110
/* 80165E0C 00162EEC  C0 3A 00 54 */	lfs f1, 0x54(r26)
/* 80165E10 00162EF0  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80165E14 00162EF4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80165E18 00162EF8  40 80 02 F8 */	bge .L_80166110
/* 80165E1C 00162EFC  7F E3 FB 78 */	mr r3, r31
/* 80165E20 00162F00  4B FF DF 41 */	bl getNextFreeGlob__12zNPCBPatrickFv
/* 80165E24 00162F04  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80165E28 00162F08  7C 7E 1B 78 */	mr r30, r3
/* 80165E2C 00162F0C  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 80165E30 00162F10  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80165E34 00162F14  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 80165E38 00162F18  4B EC AE 51 */	bl xurand__Fv
/* 80165E3C 00162F1C  C0 42 AA 88 */	lfs f2, "@1678"@sda21(r2)
/* 80165E40 00162F20  38 61 00 2C */	addi r3, r1, 0x2c
/* 80165E44 00162F24  C0 02 A9 C0 */	lfs f0, "@831"@sda21(r2)
/* 80165E48 00162F28  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80165E4C 00162F2C  D0 1E 00 20 */	stfs f0, 0x20(r30)
/* 80165E50 00162F30  C0 02 AA 08 */	lfs f0, "@1055"@sda21(r2)
/* 80165E54 00162F34  D0 1E 00 18 */	stfs f0, 0x18(r30)
/* 80165E58 00162F38  C0 22 A9 C4 */	lfs f1, "@832"@sda21(r2)
/* 80165E5C 00162F3C  FC 40 08 90 */	fmr f2, f1
/* 80165E60 00162F40  FC 60 08 90 */	fmr f3, f1
/* 80165E64 00162F44  4B EA 91 99 */	bl xVec3Init__FP5xVec3fff
/* 80165E68 00162F48  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 80165E6C 00162F4C  3C 60 80 2A */	lis r3, sBone@ha
/* 80165E70 00162F50  38 A3 AA 68 */	addi r5, r3, sBone@l
/* 80165E74 00162F54  38 61 00 20 */	addi r3, r1, 0x20
/* 80165E78 00162F58  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80165E7C 00162F5C  38 C1 00 2C */	addi r6, r1, 0x2c
/* 80165E80 00162F60  80 A5 00 04 */	lwz r5, 0x4(r5)
/* 80165E84 00162F64  4B FF AA E1 */	bl GetBonePos__FP5xVec3P7xMat4x3iP5xVec3
/* 80165E88 00162F68  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 80165E8C 00162F6C  3C 60 80 2A */	lis r3, sBone@ha
/* 80165E90 00162F70  3B 23 AA 68 */	addi r25, r3, sBone@l
/* 80165E94 00162F74  38 61 00 14 */	addi r3, r1, 0x14
/* 80165E98 00162F78  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80165E9C 00162F7C  38 C1 00 2C */	addi r6, r1, 0x2c
/* 80165EA0 00162F80  80 B9 00 08 */	lwz r5, 0x8(r25)
/* 80165EA4 00162F84  4B FF AA C1 */	bl GetBonePos__FP5xVec3P7xMat4x3iP5xVec3
/* 80165EA8 00162F88  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80165EAC 00162F8C  38 61 00 2C */	addi r3, r1, 0x2c
/* 80165EB0 00162F90  C0 22 A9 C0 */	lfs f1, "@831"@sda21(r2)
/* 80165EB4 00162F94  FC 60 10 90 */	fmr f3, f2
/* 80165EB8 00162F98  4B EA 91 45 */	bl xVec3Init__FP5xVec3fff
/* 80165EBC 00162F9C  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 80165EC0 00162FA0  38 61 00 08 */	addi r3, r1, 0x8
/* 80165EC4 00162FA4  80 B9 00 08 */	lwz r5, 0x8(r25)
/* 80165EC8 00162FA8  38 C1 00 2C */	addi r6, r1, 0x2c
/* 80165ECC 00162FAC  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80165ED0 00162FB0  4B FF AA 95 */	bl GetBonePos__FP5xVec3P7xMat4x3iP5xVec3
/* 80165ED4 00162FB4  38 61 00 08 */	addi r3, r1, 0x8
/* 80165ED8 00162FB8  38 81 00 14 */	addi r4, r1, 0x14
/* 80165EDC 00162FBC  4B EB 5A 85 */	bl xVec3SubFrom__FP5xVec3PC5xVec3
/* 80165EE0 00162FC0  38 61 00 08 */	addi r3, r1, 0x8
/* 80165EE4 00162FC4  7C 64 1B 78 */	mr r4, r3
/* 80165EE8 00162FC8  4B EE 84 09 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 80165EEC 00162FCC  C0 22 A9 E4 */	lfs f1, "@1046"@sda21(r2)
/* 80165EF0 00162FD0  7F C3 F3 78 */	mr r3, r30
/* 80165EF4 00162FD4  38 81 00 20 */	addi r4, r1, 0x20
/* 80165EF8 00162FD8  4B EA 51 99 */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 80165EFC 00162FDC  7F C4 F3 78 */	mr r4, r30
/* 80165F00 00162FE0  38 7E 00 28 */	addi r3, r30, 0x28
/* 80165F04 00162FE4  4B EE 85 D9 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 80165F08 00162FE8  C0 22 A9 E4 */	lfs f1, "@1046"@sda21(r2)
/* 80165F0C 00162FEC  7F C3 F3 78 */	mr r3, r30
/* 80165F10 00162FF0  38 81 00 14 */	addi r4, r1, 0x14
/* 80165F14 00162FF4  4B EA F1 45 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 80165F18 00162FF8  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 80165F1C 00162FFC  38 61 00 08 */	addi r3, r1, 0x8
/* 80165F20 00163000  C0 1E 00 00 */	lfs f0, 0x0(r30)
/* 80165F24 00163004  38 9E 00 0C */	addi r4, r30, 0xc
/* 80165F28 00163008  C0 42 A9 C0 */	lfs f2, "@831"@sda21(r2)
/* 80165F2C 0016300C  EC 01 00 28 */	fsubs f0, f1, f0
/* 80165F30 00163010  EC 02 00 32 */	fmuls f0, f2, f0
/* 80165F34 00163014  D0 1E 00 0C */	stfs f0, 0xc(r30)
/* 80165F38 00163018  C0 21 00 40 */	lfs f1, 0x40(r1)
/* 80165F3C 0016301C  C0 1E 00 08 */	lfs f0, 0x8(r30)
/* 80165F40 00163020  C0 42 A9 C0 */	lfs f2, "@831"@sda21(r2)
/* 80165F44 00163024  EC 01 00 28 */	fsubs f0, f1, f0
/* 80165F48 00163028  EC 02 00 32 */	fmuls f0, f2, f0
/* 80165F4C 0016302C  D0 1E 00 14 */	stfs f0, 0x14(r30)
/* 80165F50 00163030  C0 21 00 3C */	lfs f1, 0x3c(r1)
/* 80165F54 00163034  C0 1E 00 04 */	lfs f0, 0x4(r30)
/* 80165F58 00163038  C0 42 A9 C0 */	lfs f2, "@831"@sda21(r2)
/* 80165F5C 0016303C  EC 01 00 28 */	fsubs f0, f1, f0
/* 80165F60 00163040  C0 62 A9 E4 */	lfs f3, "@1046"@sda21(r2)
/* 80165F64 00163044  C0 3E 00 18 */	lfs f1, 0x18(r30)
/* 80165F68 00163048  EC 02 00 32 */	fmuls f0, f2, f0
/* 80165F6C 0016304C  EC 03 00 7A */	fmadds f0, f3, f1, f0
/* 80165F70 00163050  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 80165F74 00163054  4B EE 85 7D */	bl xVec3Dot__FPC5xVec3PC5xVec3
/* 80165F78 00163058  FC 20 08 50 */	fneg f1, f1
/* 80165F7C 0016305C  38 7E 00 0C */	addi r3, r30, 0xc
/* 80165F80 00163060  38 81 00 08 */	addi r4, r1, 0x8
/* 80165F84 00163064  4B EA F0 D5 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 80165F88 00163068  3C 80 80 3C */	lis r4, globals@ha
/* 80165F8C 0016306C  7F C3 F3 78 */	mr r3, r30
/* 80165F90 00163070  38 84 05 58 */	addi r4, r4, globals@l
/* 80165F94 00163074  38 A1 00 44 */	addi r5, r1, 0x44
/* 80165F98 00163078  80 84 1F C0 */	lwz r4, 0x1fc0(r4)
/* 80165F9C 0016307C  80 84 00 44 */	lwz r4, 0x44(r4)
/* 80165FA0 00163080  4B EA A0 49 */	bl xParabolaHitsEnv__FP9xParabolaPC4xEnvP7xCollis
/* 80165FA4 00163084  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80165FA8 00163088  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80165FAC 0016308C  41 82 00 24 */	beq .L_80165FD0
/* 80165FB0 00163090  C0 01 00 54 */	lfs f0, 0x54(r1)
/* 80165FB4 00163094  38 7E 00 34 */	addi r3, r30, 0x34
/* 80165FB8 00163098  38 81 00 58 */	addi r4, r1, 0x58
/* 80165FBC 0016309C  D0 1E 00 20 */	stfs f0, 0x20(r30)
/* 80165FC0 001630A0  4B EE 85 1D */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 80165FC4 001630A4  80 1E 00 50 */	lwz r0, 0x50(r30)
/* 80165FC8 001630A8  60 00 00 02 */	ori r0, r0, 0x2
/* 80165FCC 001630AC  90 1E 00 50 */	stw r0, 0x50(r30)
.L_80165FD0:
/* 80165FD0 001630B0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80165FD4 001630B4  7F E3 FB 78 */	mr r3, r31
/* 80165FD8 001630B8  7F C4 F3 78 */	mr r4, r30
/* 80165FDC 001630BC  38 A1 00 44 */	addi r5, r1, 0x44
/* 80165FE0 001630C0  54 00 00 3C */	clrrwi r0, r0, 1
/* 80165FE4 001630C4  90 01 00 44 */	stw r0, 0x44(r1)
/* 80165FE8 001630C8  4B FF E5 65 */	bl ParabolaHitsConveyors__12zNPCBPatrickFP9xParabolaP7xCollis
/* 80165FEC 001630CC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80165FF0 001630D0  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80165FF4 001630D4  41 82 00 9C */	beq .L_80166090
/* 80165FF8 001630D8  C0 01 00 54 */	lfs f0, 0x54(r1)
/* 80165FFC 001630DC  D0 1E 00 20 */	stfs f0, 0x20(r30)
/* 80166000 001630E0  80 1E 00 50 */	lwz r0, 0x50(r30)
/* 80166004 001630E4  60 00 00 02 */	ori r0, r0, 0x2
/* 80166008 001630E8  90 1E 00 50 */	stw r0, 0x50(r30)
/* 8016600C 001630EC  C0 21 00 64 */	lfs f1, 0x64(r1)
/* 80166010 001630F0  C0 02 AA 8C */	lfs f0, "@1679"@sda21(r2)
/* 80166014 001630F4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80166018 001630F8  40 80 00 64 */	bge .L_8016607C
/* 8016601C 001630FC  C0 02 AA 90 */	lfs f0, "@1680"@sda21(r2)
/* 80166020 00163100  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80166024 00163104  40 81 00 58 */	ble .L_8016607C
/* 80166028 00163108  C0 21 00 6C */	lfs f1, 0x6c(r1)
/* 8016602C 0016310C  C0 02 AA 94 */	lfs f0, "@1681"@sda21(r2)
/* 80166030 00163110  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80166034 00163114  40 81 00 48 */	ble .L_8016607C
/* 80166038 00163118  80 1E 00 50 */	lwz r0, 0x50(r30)
/* 8016603C 0016311C  38 7E 00 34 */	addi r3, r30, 0x34
/* 80166040 00163120  60 00 00 08 */	ori r0, r0, 0x8
/* 80166044 00163124  90 1E 00 50 */	stw r0, 0x50(r30)
/* 80166048 00163128  C0 22 A9 C4 */	lfs f1, "@832"@sda21(r2)
/* 8016604C 0016312C  C0 42 A9 C0 */	lfs f2, "@831"@sda21(r2)
/* 80166050 00163130  FC 60 08 90 */	fmr f3, f1
/* 80166054 00163134  4B EA 8F A9 */	bl xVec3Init__FP5xVec3fff
/* 80166058 00163138  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 8016605C 0016313C  38 7E 00 40 */	addi r3, r30, 0x40
/* 80166060 00163140  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 80166064 00163144  80 9E 00 4C */	lwz r4, 0x4c(r30)
/* 80166068 00163148  80 A4 00 D4 */	lwz r5, 0xd4(r4)
/* 8016606C 0016314C  80 84 00 AC */	lwz r4, 0xac(r4)
/* 80166070 00163150  C0 25 00 04 */	lfs f1, 0x4(r5)
/* 80166074 00163154  4B EA 50 1D */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 80166078 00163158  48 00 00 18 */	b .L_80166090
.L_8016607C:
/* 8016607C 0016315C  C0 22 A9 C4 */	lfs f1, "@832"@sda21(r2)
/* 80166080 00163160  38 7E 00 34 */	addi r3, r30, 0x34
/* 80166084 00163164  C0 42 A9 CC */	lfs f2, "@870"@sda21(r2)
/* 80166088 00163168  FC 60 08 90 */	fmr f3, f1
/* 8016608C 0016316C  4B EA 8F 71 */	bl xVec3Init__FP5xVec3fff
.L_80166090:
/* 80166090 00163170  4B EC AB D9 */	bl xrand__Fv
/* 80166094 00163174  54 60 03 9D */	rlwinm. r0, r3, 0, 14, 14
/* 80166098 00163178  41 82 00 40 */	beq .L_801660D8
/* 8016609C 0016317C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801660A0 00163180  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 801660A4 00163184  38 63 05 F1 */	addi r3, r3, 0x5f1
/* 801660A8 00163188  4B EE 61 6D */	bl xStrHash__FPCc
/* 801660AC 0016318C  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 801660B0 00163190  7F C6 F3 78 */	mr r6, r30
/* 801660B4 00163194  C0 22 AA 6C */	lfs f1, "@1671"@sda21(r2)
/* 801660B8 00163198  38 80 00 00 */	li r4, 0x0
/* 801660BC 0016319C  FC A0 10 90 */	fmr f5, f2
/* 801660C0 001631A0  C0 62 AA 24 */	lfs f3, "@1142"@sda21(r2)
/* 801660C4 001631A4  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 801660C8 001631A8  38 A0 00 00 */	li r5, 0x0
/* 801660CC 001631AC  38 E0 00 00 */	li r7, 0x0
/* 801660D0 001631B0  4B EE 29 C5 */	bl xSndPlay3D__FUiffUiUiPC5xVec3ff14sound_categoryf
/* 801660D4 001631B4  48 00 00 3C */	b .L_80166110
.L_801660D8:
/* 801660D8 001631B8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801660DC 001631BC  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 801660E0 001631C0  38 63 05 FE */	addi r3, r3, 0x5fe
/* 801660E4 001631C4  4B EE 61 31 */	bl xStrHash__FPCc
/* 801660E8 001631C8  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 801660EC 001631CC  7F C6 F3 78 */	mr r6, r30
/* 801660F0 001631D0  C0 22 AA 6C */	lfs f1, "@1671"@sda21(r2)
/* 801660F4 001631D4  38 80 00 00 */	li r4, 0x0
/* 801660F8 001631D8  FC A0 10 90 */	fmr f5, f2
/* 801660FC 001631DC  C0 62 AA 24 */	lfs f3, "@1142"@sda21(r2)
/* 80166100 001631E0  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 80166104 001631E4  38 A0 00 00 */	li r5, 0x0
/* 80166108 001631E8  38 E0 00 00 */	li r7, 0x0
/* 8016610C 001631EC  4B EE 29 89 */	bl xSndPlay3D__FUiffUiUiPC5xVec3ff14sound_categoryf
.L_80166110:
/* 80166110 001631F0  FC 20 F8 90 */	fmr f1, f31
/* 80166114 001631F4  7F 43 D3 78 */	mr r3, r26
/* 80166118 001631F8  7F 64 DB 78 */	mr r4, r27
/* 8016611C 001631FC  7F 85 E3 78 */	mr r5, r28
/* 80166120 00163200  7F A6 EB 78 */	mr r6, r29
/* 80166124 00163204  4B FA 8A 25 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
/* 80166128 00163208  E3 E1 00 D8 */	psq_l f31, 0xd8(r1), 0, qr0
/* 8016612C 0016320C  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 80166130 00163210  E3 C1 00 C8 */	psq_l f30, 0xc8(r1), 0, qr0
/* 80166134 00163214  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 80166138 00163218  BB 21 00 A4 */	lmw r25, 0xa4(r1)
/* 8016613C 0016321C  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 80166140 00163220  7C 08 03 A6 */	mtlr r0
/* 80166144 00163224  38 21 00 E0 */	addi r1, r1, 0xe0
/* 80166148 00163228  4E 80 00 20 */	blr
.endfn Process__19zNPCGoalBossPatSpitFP11en_trantypefPvP6xScene

# zNPCGoalBossPatRun::Enter(float, void*)
.fn Enter__18zNPCGoalBossPatRunFfPv, global
/* 8016614C 0016322C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80166150 00163230  7C 08 02 A6 */	mflr r0
/* 80166154 00163234  90 01 00 34 */	stw r0, 0x34(r1)
/* 80166158 00163238  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8016615C 0016323C  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 80166160 00163240  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80166164 00163244  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80166168 00163248  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8016616C 0016324C  FF E0 08 90 */	fmr f31, f1
/* 80166170 00163250  7C 7D 1B 78 */	mr r29, r3
/* 80166174 00163254  7C 9E 23 78 */	mr r30, r4
/* 80166178 00163258  4B FA 89 1D */	bl GetOwner__5xGoalCFv
/* 8016617C 0016325C  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80166180 00163260  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80166184 00163264  38 84 08 9C */	addi r4, r4, "@stringBase0"@l
/* 80166188 00163268  7C 7F 1B 78 */	mr r31, r3
/* 8016618C 0016326C  D0 1D 00 4C */	stfs f0, 0x4c(r29)
/* 80166190 00163270  38 64 06 0E */	addi r3, r4, 0x60e
/* 80166194 00163274  4B EE 60 81 */	bl xStrHash__FPCc
/* 80166198 00163278  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 8016619C 0016327C  7F E6 FB 78 */	mr r6, r31
/* 801661A0 00163280  C0 22 AA 6C */	lfs f1, "@1671"@sda21(r2)
/* 801661A4 00163284  38 80 00 00 */	li r4, 0x0
/* 801661A8 00163288  FC A0 10 90 */	fmr f5, f2
/* 801661AC 0016328C  C0 62 A9 D8 */	lfs f3, "@891"@sda21(r2)
/* 801661B0 00163290  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 801661B4 00163294  38 A0 00 00 */	li r5, 0x0
/* 801661B8 00163298  38 E0 00 00 */	li r7, 0x0
/* 801661BC 0016329C  4B EE 28 A9 */	bl xSndPlay3D__FUiffUiUiP4xEntff14sound_categoryf
/* 801661C0 001632A0  90 7D 00 54 */	stw r3, 0x54(r29)
/* 801661C4 001632A4  FC 20 F8 90 */	fmr f1, f31
/* 801661C8 001632A8  7F A3 EB 78 */	mr r3, r29
/* 801661CC 001632AC  7F C4 F3 78 */	mr r4, r30
/* 801661D0 001632B0  80 1F 02 B4 */	lwz r0, 0x2b4(r31)
/* 801661D4 001632B4  60 00 00 20 */	ori r0, r0, 0x20
/* 801661D8 001632B8  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 801661DC 001632BC  4B F6 EF 39 */	bl Enter__14zNPCGoalCommonFfPv
/* 801661E0 001632C0  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 801661E4 001632C4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801661E8 001632C8  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 801661EC 001632CC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801661F0 001632D0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801661F4 001632D4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801661F8 001632D8  7C 08 03 A6 */	mtlr r0
/* 801661FC 001632DC  38 21 00 30 */	addi r1, r1, 0x30
/* 80166200 001632E0  4E 80 00 20 */	blr
.endfn Enter__18zNPCGoalBossPatRunFfPv

# zNPCGoalBossPatRun::Process(en_trantype*, float, void*, xScene*)
.fn Process__18zNPCGoalBossPatRunFP11en_trantypefPvP6xScene, global
/* 80166204 001632E4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80166208 001632E8  7C 08 02 A6 */	mflr r0
/* 8016620C 001632EC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80166210 001632F0  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80166214 001632F4  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 80166218 001632F8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8016621C 001632FC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80166220 00163300  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80166224 00163304  93 81 00 10 */	stw r28, 0x10(r1)
/* 80166228 00163308  FF E0 08 90 */	fmr f31, f1
/* 8016622C 0016330C  7C 7C 1B 78 */	mr r28, r3
/* 80166230 00163310  7C 9D 23 78 */	mr r29, r4
/* 80166234 00163314  7C BE 2B 78 */	mr r30, r5
/* 80166238 00163318  7C DF 33 78 */	mr r31, r6
/* 8016623C 0016331C  4B FA 88 59 */	bl GetOwner__5xGoalCFv
/* 80166240 00163320  C0 1C 00 4C */	lfs f0, 0x4c(r28)
/* 80166244 00163324  FC 20 F8 90 */	fmr f1, f31
/* 80166248 00163328  7F 83 E3 78 */	mr r3, r28
/* 8016624C 0016332C  7F A4 EB 78 */	mr r4, r29
/* 80166250 00163330  EC 00 F8 2A */	fadds f0, f0, f31
/* 80166254 00163334  7F C5 F3 78 */	mr r5, r30
/* 80166258 00163338  7F E6 FB 78 */	mr r6, r31
/* 8016625C 0016333C  D0 1C 00 4C */	stfs f0, 0x4c(r28)
/* 80166260 00163340  4B FA 88 E9 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
/* 80166264 00163344  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80166268 00163348  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8016626C 0016334C  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80166270 00163350  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80166274 00163354  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80166278 00163358  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8016627C 0016335C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80166280 00163360  7C 08 03 A6 */	mtlr r0
/* 80166284 00163364  38 21 00 30 */	addi r1, r1, 0x30
/* 80166288 00163368  4E 80 00 20 */	blr
.endfn Process__18zNPCGoalBossPatRunFP11en_trantypefPvP6xScene

# zNPCGoalBossPatRun::Exit(float, void*)
.fn Exit__18zNPCGoalBossPatRunFfPv, global
/* 8016628C 0016336C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80166290 00163370  7C 08 02 A6 */	mflr r0
/* 80166294 00163374  90 01 00 24 */	stw r0, 0x24(r1)
/* 80166298 00163378  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 8016629C 0016337C  FF E0 08 90 */	fmr f31, f1
/* 801662A0 00163380  93 E1 00 14 */	stw r31, 0x14(r1)
/* 801662A4 00163384  7C 9F 23 78 */	mr r31, r4
/* 801662A8 00163388  93 C1 00 10 */	stw r30, 0x10(r1)
/* 801662AC 0016338C  7C 7E 1B 78 */	mr r30, r3
/* 801662B0 00163390  4B FA 87 E5 */	bl GetOwner__5xGoalCFv
/* 801662B4 00163394  80 7E 00 54 */	lwz r3, 0x54(r30)
/* 801662B8 00163398  4B EE 2F 49 */	bl xSndStop__FUi
/* 801662BC 0016339C  FC 20 F8 90 */	fmr f1, f31
/* 801662C0 001633A0  7F C3 F3 78 */	mr r3, r30
/* 801662C4 001633A4  7F E4 FB 78 */	mr r4, r31
/* 801662C8 001633A8  4B F6 F1 55 */	bl Exit__5xGoalFfPv
/* 801662CC 001633AC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801662D0 001633B0  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 801662D4 001633B4  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 801662D8 001633B8  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 801662DC 001633BC  7C 08 03 A6 */	mtlr r0
/* 801662E0 001633C0  38 21 00 20 */	addi r1, r1, 0x20
/* 801662E4 001633C4  4E 80 00 20 */	blr
.endfn Exit__18zNPCGoalBossPatRunFfPv

# zNPCGoalBossPatSmack::Enter(float, void*)
.fn Enter__20zNPCGoalBossPatSmackFfPv, global
/* 801662E8 001633C8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801662EC 001633CC  7C 08 02 A6 */	mflr r0
/* 801662F0 001633D0  90 01 00 24 */	stw r0, 0x24(r1)
/* 801662F4 001633D4  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 801662F8 001633D8  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 801662FC 001633DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80166300 001633E0  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80166304 001633E4  FF E0 08 90 */	fmr f31, f1
/* 80166308 001633E8  7C 7E 1B 78 */	mr r30, r3
/* 8016630C 001633EC  7C 9F 23 78 */	mr r31, r4
/* 80166310 001633F0  4B FA 87 85 */	bl GetOwner__5xGoalCFv
/* 80166314 001633F4  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80166318 001633F8  FC 20 F8 90 */	fmr f1, f31
/* 8016631C 001633FC  7F E4 FB 78 */	mr r4, r31
/* 80166320 00163400  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 80166324 00163404  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80166328 00163408  D0 1E 00 54 */	stfs f0, 0x54(r30)
/* 8016632C 0016340C  80 03 02 B4 */	lwz r0, 0x2b4(r3)
/* 80166330 00163410  60 00 00 20 */	ori r0, r0, 0x20
/* 80166334 00163414  90 03 02 B4 */	stw r0, 0x2b4(r3)
/* 80166338 00163418  80 A3 18 F4 */	lwz r5, 0x18f4(r3)
/* 8016633C 0016341C  38 05 00 01 */	addi r0, r5, 0x1
/* 80166340 00163420  90 03 18 F4 */	stw r0, 0x18f4(r3)
/* 80166344 00163424  7F C3 F3 78 */	mr r3, r30
/* 80166348 00163428  4B F6 ED CD */	bl Enter__14zNPCGoalCommonFfPv
/* 8016634C 0016342C  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 80166350 00163430  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80166354 00163434  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80166358 00163438  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8016635C 0016343C  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80166360 00163440  7C 08 03 A6 */	mtlr r0
/* 80166364 00163444  38 21 00 20 */	addi r1, r1, 0x20
/* 80166368 00163448  4E 80 00 20 */	blr
.endfn Enter__20zNPCGoalBossPatSmackFfPv

# zNPCGoalBossPatSmack::Process(en_trantype*, float, void*, xScene*)
.fn Process__20zNPCGoalBossPatSmackFP11en_trantypefPvP6xScene, global
/* 8016636C 0016344C  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 80166370 00163450  7C 08 02 A6 */	mflr r0
/* 80166374 00163454  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 80166378 00163458  DB E1 00 B0 */	stfd f31, 0xb0(r1)
/* 8016637C 0016345C  F3 E1 00 B8 */	psq_st f31, 0xb8(r1), 0, qr0
/* 80166380 00163460  BE C1 00 88 */	stmw r22, 0x88(r1)
/* 80166384 00163464  FF E0 08 90 */	fmr f31, f1
/* 80166388 00163468  7C 76 1B 78 */	mr r22, r3
/* 8016638C 0016346C  7C 97 23 78 */	mr r23, r4
/* 80166390 00163470  7C B8 2B 78 */	mr r24, r5
/* 80166394 00163474  7C D9 33 78 */	mr r25, r6
/* 80166398 00163478  4B FA 86 FD */	bl GetOwner__5xGoalCFv
/* 8016639C 0016347C  C0 36 00 4C */	lfs f1, 0x4c(r22)
/* 801663A0 00163480  7C 7C 1B 78 */	mr r28, r3
/* 801663A4 00163484  C0 02 AA 7C */	lfs f0, "@1675"@sda21(r2)
/* 801663A8 00163488  3B 40 00 00 */	li r26, 0x0
/* 801663AC 0016348C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801663B0 00163490  4C 40 13 82 */	cror eq, lt, eq
/* 801663B4 00163494  40 82 00 08 */	bne .L_801663BC
/* 801663B8 00163498  3B 40 00 01 */	li r26, 0x1
.L_801663BC:
/* 801663BC 0016349C  C0 16 00 4C */	lfs f0, 0x4c(r22)
/* 801663C0 001634A0  3C 60 80 3C */	lis r3, globals@ha
/* 801663C4 001634A4  38 83 05 58 */	addi r4, r3, globals@l
/* 801663C8 001634A8  FC 40 F8 90 */	fmr f2, f31
/* 801663CC 001634AC  EC 00 F8 2A */	fadds f0, f0, f31
/* 801663D0 001634B0  7F 83 E3 78 */	mr r3, r28
/* 801663D4 001634B4  D0 16 00 4C */	stfs f0, 0x4c(r22)
/* 801663D8 001634B8  80 84 07 04 */	lwz r4, 0x704(r4)
/* 801663DC 001634BC  C0 22 AA 74 */	lfs f1, "@1673"@sda21(r2)
/* 801663E0 001634C0  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 801663E4 001634C4  38 84 00 30 */	addi r4, r4, 0x30
/* 801663E8 001634C8  4B FF F0 21 */	bl Pat_FaceTarget__FP12zNPCBPatrickPC5xVec3ff
/* 801663EC 001634CC  C0 36 00 4C */	lfs f1, 0x4c(r22)
/* 801663F0 001634D0  C0 02 AA 7C */	lfs f0, "@1675"@sda21(r2)
/* 801663F4 001634D4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801663F8 001634D8  40 81 02 D4 */	ble .L_801666CC
/* 801663FC 001634DC  C0 02 A9 C0 */	lfs f0, "@831"@sda21(r2)
/* 80166400 001634E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80166404 001634E4  40 80 02 C8 */	bge .L_801666CC
/* 80166408 001634E8  C0 22 A9 C4 */	lfs f1, "@832"@sda21(r2)
/* 8016640C 001634EC  38 61 00 14 */	addi r3, r1, 0x14
/* 80166410 001634F0  FC 40 08 90 */	fmr f2, f1
/* 80166414 001634F4  FC 60 08 90 */	fmr f3, f1
/* 80166418 001634F8  4B EA 8B E5 */	bl xVec3Init__FP5xVec3fff
/* 8016641C 001634FC  80 9C 00 24 */	lwz r4, 0x24(r28)
/* 80166420 00163500  3C 60 80 2A */	lis r3, sBone@ha
/* 80166424 00163504  38 A3 AA 68 */	addi r5, r3, sBone@l
/* 80166428 00163508  38 61 00 08 */	addi r3, r1, 0x8
/* 8016642C 0016350C  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80166430 00163510  38 C1 00 14 */	addi r6, r1, 0x14
/* 80166434 00163514  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 80166438 00163518  4B FF A5 2D */	bl GetBonePos__FP5xVec3P7xMat4x3iP5xVec3
/* 8016643C 0016351C  2C 1A 00 00 */	cmpwi r26, 0x0
/* 80166440 00163520  41 82 00 3C */	beq .L_8016647C
/* 80166444 00163524  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80166448 00163528  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 8016644C 0016352C  38 63 06 1F */	addi r3, r3, 0x61f
/* 80166450 00163530  4B EE 5D C5 */	bl xStrHash__FPCc
/* 80166454 00163534  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80166458 00163538  38 C1 00 08 */	addi r6, r1, 0x8
/* 8016645C 0016353C  C0 22 AA 6C */	lfs f1, "@1671"@sda21(r2)
/* 80166460 00163540  38 80 00 00 */	li r4, 0x0
/* 80166464 00163544  FC A0 10 90 */	fmr f5, f2
/* 80166468 00163548  C0 62 AA 24 */	lfs f3, "@1142"@sda21(r2)
/* 8016646C 0016354C  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 80166470 00163550  38 A0 00 00 */	li r5, 0x0
/* 80166474 00163554  38 E0 00 00 */	li r7, 0x0
/* 80166478 00163558  4B EE 26 1D */	bl xSndPlay3D__FUiffUiUiPC5xVec3ff14sound_categoryf
.L_8016647C:
/* 8016647C 0016355C  4B EC A8 0D */	bl xurand__Fv
/* 80166480 00163560  C0 02 A9 E4 */	lfs f0, "@1046"@sda21(r2)
/* 80166484 00163564  3C 00 43 30 */	lis r0, 0x4330
/* 80166488 00163568  3C 60 80 3C */	lis r3, globals@ha
/* 8016648C 0016356C  C0 42 AA 0C */	lfs f2, "@1056"@sda21(r2)
/* 80166490 00163570  EC 20 08 2A */	fadds f1, f0, f1
/* 80166494 00163574  C0 16 00 54 */	lfs f0, 0x54(r22)
/* 80166498 00163578  90 01 00 78 */	stw r0, 0x78(r1)
/* 8016649C 0016357C  3B E3 05 58 */	addi r31, r3, globals@l
/* 801664A0 00163580  3B C1 00 34 */	addi r30, r1, 0x34
/* 801664A4 00163584  3B A0 00 00 */	li r29, 0x0
/* 801664A8 00163588  EC 22 00 72 */	fmuls f1, f2, f1
/* 801664AC 0016358C  EC 1F 00 7A */	fmadds f0, f31, f1, f0
/* 801664B0 00163590  D0 16 00 54 */	stfs f0, 0x54(r22)
/* 801664B4 00163594  C0 56 00 54 */	lfs f2, 0x54(r22)
/* 801664B8 00163598  C8 22 A9 D0 */	lfd f1, "@875"@sda21(r2)
/* 801664BC 0016359C  FC 00 10 1E */	fctiwz f0, f2
/* 801664C0 001635A0  D8 01 00 70 */	stfd f0, 0x70(r1)
/* 801664C4 001635A4  83 61 00 74 */	lwz r27, 0x74(r1)
/* 801664C8 001635A8  6F 60 80 00 */	xoris r0, r27, 0x8000
/* 801664CC 001635AC  90 01 00 7C */	stw r0, 0x7c(r1)
/* 801664D0 001635B0  C8 01 00 78 */	lfd f0, 0x78(r1)
/* 801664D4 001635B4  EC 00 08 28 */	fsubs f0, f0, f1
/* 801664D8 001635B8  EC 02 00 28 */	fsubs f0, f2, f0
/* 801664DC 001635BC  D0 16 00 54 */	stfs f0, 0x54(r22)
/* 801664E0 001635C0  48 00 01 E4 */	b .L_801666C4
.L_801664E4:
/* 801664E4 001635C4  7F 83 E3 78 */	mr r3, r28
/* 801664E8 001635C8  4B FF D8 79 */	bl getNextFreeGlob__12zNPCBPatrickFv
/* 801664EC 001635CC  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801664F0 001635D0  7C 7A 1B 78 */	mr r26, r3
/* 801664F4 001635D4  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 801664F8 001635D8  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801664FC 001635DC  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 80166500 001635E0  4B EC A7 89 */	bl xurand__Fv
/* 80166504 001635E4  C0 42 AA 88 */	lfs f2, "@1678"@sda21(r2)
/* 80166508 001635E8  7F 43 D3 78 */	mr r3, r26
/* 8016650C 001635EC  C0 02 A9 C0 */	lfs f0, "@831"@sda21(r2)
/* 80166510 001635F0  38 81 00 08 */	addi r4, r1, 0x8
/* 80166514 001635F4  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80166518 001635F8  D0 1A 00 20 */	stfs f0, 0x20(r26)
/* 8016651C 001635FC  C0 02 AA 08 */	lfs f0, "@1055"@sda21(r2)
/* 80166520 00163600  D0 1A 00 18 */	stfs f0, 0x18(r26)
/* 80166524 00163604  4B EE 7F B9 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 80166528 00163608  7F 44 D3 78 */	mr r4, r26
/* 8016652C 0016360C  38 7A 00 28 */	addi r3, r26, 0x28
/* 80166530 00163610  4B EE 7F AD */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 80166534 00163614  80 9C 00 24 */	lwz r4, 0x24(r28)
/* 80166538 00163618  38 7A 00 0C */	addi r3, r26, 0xc
/* 8016653C 0016361C  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80166540 00163620  38 84 00 20 */	addi r4, r4, 0x20
/* 80166544 00163624  4B EE 7F 99 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 80166548 00163628  4B EC A7 41 */	bl xurand__Fv
/* 8016654C 0016362C  C0 02 A9 E4 */	lfs f0, "@1046"@sda21(r2)
/* 80166550 00163630  38 7A 00 0C */	addi r3, r26, 0xc
/* 80166554 00163634  80 9C 00 24 */	lwz r4, 0x24(r28)
/* 80166558 00163638  EC 21 00 28 */	fsubs f1, f1, f0
/* 8016655C 0016363C  C0 02 AA 80 */	lfs f0, "@1676"@sda21(r2)
/* 80166560 00163640  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80166564 00163644  EC 20 00 72 */	fmuls f1, f0, f1
/* 80166568 00163648  4B EA EA F1 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 8016656C 0016364C  4B EC A7 1D */	bl xurand__Fv
/* 80166570 00163650  C0 62 A9 F0 */	lfs f3, "@1049"@sda21(r2)
/* 80166574 00163654  C0 42 A9 D8 */	lfs f2, "@891"@sda21(r2)
/* 80166578 00163658  C0 1A 00 0C */	lfs f0, 0xc(r26)
/* 8016657C 0016365C  EC 23 10 7A */	fmadds f1, f3, f1, f2
/* 80166580 00163660  EC 00 00 72 */	fmuls f0, f0, f1
/* 80166584 00163664  D0 1A 00 0C */	stfs f0, 0xc(r26)
/* 80166588 00163668  4B EC A7 01 */	bl xurand__Fv
/* 8016658C 0016366C  C0 62 AA 68 */	lfs f3, "@1670"@sda21(r2)
/* 80166590 00163670  C0 42 A9 F8 */	lfs f2, "@1051"@sda21(r2)
/* 80166594 00163674  C0 1A 00 10 */	lfs f0, 0x10(r26)
/* 80166598 00163678  EC 23 10 7A */	fmadds f1, f3, f1, f2
/* 8016659C 0016367C  EC 00 08 2A */	fadds f0, f0, f1
/* 801665A0 00163680  D0 1A 00 10 */	stfs f0, 0x10(r26)
/* 801665A4 00163684  4B EC A6 E5 */	bl xurand__Fv
/* 801665A8 00163688  C0 62 A9 F0 */	lfs f3, "@1049"@sda21(r2)
/* 801665AC 0016368C  7F 43 D3 78 */	mr r3, r26
/* 801665B0 00163690  C0 42 A9 D8 */	lfs f2, "@891"@sda21(r2)
/* 801665B4 00163694  38 A1 00 20 */	addi r5, r1, 0x20
/* 801665B8 00163698  C0 1A 00 14 */	lfs f0, 0x14(r26)
/* 801665BC 0016369C  EC 23 10 7A */	fmadds f1, f3, f1, f2
/* 801665C0 001636A0  EC 00 00 72 */	fmuls f0, f0, f1
/* 801665C4 001636A4  D0 1A 00 14 */	stfs f0, 0x14(r26)
/* 801665C8 001636A8  80 9F 1F C0 */	lwz r4, 0x1fc0(r31)
/* 801665CC 001636AC  80 84 00 44 */	lwz r4, 0x44(r4)
/* 801665D0 001636B0  4B EA 9A 19 */	bl xParabolaHitsEnv__FP9xParabolaPC4xEnvP7xCollis
/* 801665D4 001636B4  80 01 00 20 */	lwz r0, 0x20(r1)
/* 801665D8 001636B8  54 00 07 FF */	clrlwi. r0, r0, 31
/* 801665DC 001636BC  41 82 00 24 */	beq .L_80166600
/* 801665E0 001636C0  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 801665E4 001636C4  7F C4 F3 78 */	mr r4, r30
/* 801665E8 001636C8  38 7A 00 34 */	addi r3, r26, 0x34
/* 801665EC 001636CC  D0 1A 00 20 */	stfs f0, 0x20(r26)
/* 801665F0 001636D0  4B EE 7E ED */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 801665F4 001636D4  80 1A 00 50 */	lwz r0, 0x50(r26)
/* 801665F8 001636D8  60 00 00 02 */	ori r0, r0, 0x2
/* 801665FC 001636DC  90 1A 00 50 */	stw r0, 0x50(r26)
.L_80166600:
/* 80166600 001636E0  80 01 00 20 */	lwz r0, 0x20(r1)
/* 80166604 001636E4  7F 83 E3 78 */	mr r3, r28
/* 80166608 001636E8  7F 44 D3 78 */	mr r4, r26
/* 8016660C 001636EC  38 A1 00 20 */	addi r5, r1, 0x20
/* 80166610 001636F0  54 00 00 3C */	clrrwi r0, r0, 1
/* 80166614 001636F4  90 01 00 20 */	stw r0, 0x20(r1)
/* 80166618 001636F8  4B FF DF 35 */	bl ParabolaHitsConveyors__12zNPCBPatrickFP9xParabolaP7xCollis
/* 8016661C 001636FC  80 01 00 20 */	lwz r0, 0x20(r1)
/* 80166620 00163700  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80166624 00163704  41 82 00 9C */	beq .L_801666C0
/* 80166628 00163708  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 8016662C 0016370C  D0 1A 00 20 */	stfs f0, 0x20(r26)
/* 80166630 00163710  80 1A 00 50 */	lwz r0, 0x50(r26)
/* 80166634 00163714  60 00 00 02 */	ori r0, r0, 0x2
/* 80166638 00163718  90 1A 00 50 */	stw r0, 0x50(r26)
/* 8016663C 0016371C  C0 21 00 40 */	lfs f1, 0x40(r1)
/* 80166640 00163720  C0 02 AA 8C */	lfs f0, "@1679"@sda21(r2)
/* 80166644 00163724  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80166648 00163728  40 80 00 64 */	bge .L_801666AC
/* 8016664C 0016372C  C0 02 AA 90 */	lfs f0, "@1680"@sda21(r2)
/* 80166650 00163730  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80166654 00163734  40 81 00 58 */	ble .L_801666AC
/* 80166658 00163738  C0 21 00 48 */	lfs f1, 0x48(r1)
/* 8016665C 0016373C  C0 02 AA 94 */	lfs f0, "@1681"@sda21(r2)
/* 80166660 00163740  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80166664 00163744  40 81 00 48 */	ble .L_801666AC
/* 80166668 00163748  80 1A 00 50 */	lwz r0, 0x50(r26)
/* 8016666C 0016374C  38 7A 00 34 */	addi r3, r26, 0x34
/* 80166670 00163750  60 00 00 08 */	ori r0, r0, 0x8
/* 80166674 00163754  90 1A 00 50 */	stw r0, 0x50(r26)
/* 80166678 00163758  C0 22 A9 C4 */	lfs f1, "@832"@sda21(r2)
/* 8016667C 0016375C  C0 42 A9 C0 */	lfs f2, "@831"@sda21(r2)
/* 80166680 00163760  FC 60 08 90 */	fmr f3, f1
/* 80166684 00163764  4B EA 89 79 */	bl xVec3Init__FP5xVec3fff
/* 80166688 00163768  80 01 00 28 */	lwz r0, 0x28(r1)
/* 8016668C 0016376C  38 7A 00 40 */	addi r3, r26, 0x40
/* 80166690 00163770  90 1A 00 4C */	stw r0, 0x4c(r26)
/* 80166694 00163774  80 9A 00 4C */	lwz r4, 0x4c(r26)
/* 80166698 00163778  80 A4 00 D4 */	lwz r5, 0xd4(r4)
/* 8016669C 0016377C  80 84 00 AC */	lwz r4, 0xac(r4)
/* 801666A0 00163780  C0 25 00 04 */	lfs f1, 0x4(r5)
/* 801666A4 00163784  4B EA 49 ED */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 801666A8 00163788  48 00 00 18 */	b .L_801666C0
.L_801666AC:
/* 801666AC 0016378C  C0 22 A9 C4 */	lfs f1, "@832"@sda21(r2)
/* 801666B0 00163790  38 7A 00 34 */	addi r3, r26, 0x34
/* 801666B4 00163794  C0 42 A9 CC */	lfs f2, "@870"@sda21(r2)
/* 801666B8 00163798  FC 60 08 90 */	fmr f3, f1
/* 801666BC 0016379C  4B EA 89 41 */	bl xVec3Init__FP5xVec3fff
.L_801666C0:
/* 801666C0 001637A0  3B BD 00 01 */	addi r29, r29, 0x1
.L_801666C4:
/* 801666C4 001637A4  7C 1D D8 00 */	cmpw r29, r27
/* 801666C8 001637A8  41 80 FE 1C */	blt .L_801664E4
.L_801666CC:
/* 801666CC 001637AC  FC 20 F8 90 */	fmr f1, f31
/* 801666D0 001637B0  7E C3 B3 78 */	mr r3, r22
/* 801666D4 001637B4  7E E4 BB 78 */	mr r4, r23
/* 801666D8 001637B8  7F 05 C3 78 */	mr r5, r24
/* 801666DC 001637BC  7F 26 CB 78 */	mr r6, r25
/* 801666E0 001637C0  4B FA 84 69 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
/* 801666E4 001637C4  E3 E1 00 B8 */	psq_l f31, 0xb8(r1), 0, qr0
/* 801666E8 001637C8  CB E1 00 B0 */	lfd f31, 0xb0(r1)
/* 801666EC 001637CC  BA C1 00 88 */	lmw r22, 0x88(r1)
/* 801666F0 001637D0  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 801666F4 001637D4  7C 08 03 A6 */	mtlr r0
/* 801666F8 001637D8  38 21 00 C0 */	addi r1, r1, 0xc0
/* 801666FC 001637DC  4E 80 00 20 */	blr
.endfn Process__20zNPCGoalBossPatSmackFP11en_trantypefPvP6xScene

# StartFreezeBreath()
.fn StartFreezeBreath__Fv, global
/* 80166700 001637E0  80 6D 97 04 */	lwz r3, sPat_Ptr@sda21(r13)
/* 80166704 001637E4  38 00 00 00 */	li r0, 0x0
/* 80166708 001637E8  90 03 15 5C */	stw r0, 0x155c(r3)
/* 8016670C 001637EC  90 03 15 60 */	stw r0, 0x1560(r3)
/* 80166710 001637F0  90 03 15 64 */	stw r0, 0x1564(r3)
/* 80166714 001637F4  90 03 15 68 */	stw r0, 0x1568(r3)
/* 80166718 001637F8  90 03 15 70 */	stw r0, 0x1570(r3)
/* 8016671C 001637FC  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80166720 00163800  D0 03 15 74 */	stfs f0, 0x1574(r3)
/* 80166724 00163804  4E 80 00 20 */	blr
.endfn StartFreezeBreath__Fv

# EmitFreezeBreath(xVec3*, xVec3*, float, float, float)
.fn EmitFreezeBreath__FP5xVec3P5xVec3fff, global
/* 80166728 00163808  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8016672C 0016380C  7C 08 02 A6 */	mflr r0
/* 80166730 00163810  90 01 00 54 */	stw r0, 0x54(r1)
/* 80166734 00163814  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80166738 00163818  F3 E1 00 48 */	psq_st f31, 0x48(r1), 0, qr0
/* 8016673C 0016381C  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 80166740 00163820  F3 C1 00 38 */	psq_st f30, 0x38(r1), 0, qr0
/* 80166744 00163824  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 80166748 00163828  F3 A1 00 28 */	psq_st f29, 0x28(r1), 0, qr0
/* 8016674C 0016382C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80166750 00163830  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80166754 00163834  FF A0 08 90 */	fmr f29, f1
/* 80166758 00163838  83 ED 97 04 */	lwz r31, sPat_Ptr@sda21(r13)
/* 8016675C 0016383C  FF C0 10 90 */	fmr f30, f2
/* 80166760 00163840  7C 7E 1B 78 */	mr r30, r3
/* 80166764 00163844  FF E0 18 90 */	fmr f31, f3
/* 80166768 00163848  38 7F 15 38 */	addi r3, r31, 0x1538
/* 8016676C 0016384C  4B EE 7D 71 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 80166770 00163850  7F C4 F3 78 */	mr r4, r30
/* 80166774 00163854  38 7F 15 2C */	addi r3, r31, 0x152c
/* 80166778 00163858  4B EE 7D 65 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 8016677C 0016385C  C0 1F 15 40 */	lfs f0, 0x1540(r31)
/* 80166780 00163860  C0 3F 15 38 */	lfs f1, 0x1538(r31)
/* 80166784 00163864  EC 00 00 32 */	fmuls f0, f0, f0
/* 80166788 00163868  EC 21 00 7A */	fmadds f1, f1, f1, f0
/* 8016678C 0016386C  4B EA 40 71 */	bl xsqrt__Ff
/* 80166790 00163870  C0 02 AA D8 */	lfs f0, "@2596"@sda21(r2)
/* 80166794 00163874  38 7F 15 38 */	addi r3, r31, 0x1538
/* 80166798 00163878  EC 00 00 72 */	fmuls f0, f0, f1
/* 8016679C 0016387C  D0 1F 15 3C */	stfs f0, 0x153c(r31)
/* 801667A0 00163880  4B EA 7E B1 */	bl xVec3Length__FPC5xVec3
/* 801667A4 00163884  C0 02 AA DC */	lfs f0, "@2597"@sda21(r2)
/* 801667A8 00163888  38 7F 15 38 */	addi r3, r31, 0x1538
/* 801667AC 0016388C  EC 20 08 24 */	fdivs f1, f0, f1
/* 801667B0 00163890  4B EB 51 89 */	bl xVec3SMulBy__FP5xVec3f
/* 801667B4 00163894  FC 20 E8 90 */	fmr f1, f29
/* 801667B8 00163898  80 7F 15 58 */	lwz r3, 0x1558(r31)
/* 801667BC 0016389C  38 9F 13 EC */	addi r4, r31, 0x13ec
/* 801667C0 001638A0  4B FB 14 09 */	bl xParEmitterEmitCustom__FP11xParEmitterfP25xParEmitterCustomSettings
/* 801667C4 001638A4  90 7F 15 6C */	stw r3, 0x156c(r31)
/* 801667C8 001638A8  80 9F 15 70 */	lwz r4, 0x1570(r31)
/* 801667CC 001638AC  2C 04 00 04 */	cmpwi r4, 0x4
/* 801667D0 001638B0  40 80 00 58 */	bge .L_80166828
/* 801667D4 001638B4  6C 83 80 00 */	xoris r3, r4, 0x8000
/* 801667D8 001638B8  3C 00 43 30 */	lis r0, 0x4330
/* 801667DC 001638BC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801667E0 001638C0  EC 7E F8 24 */	fdivs f3, f30, f31
/* 801667E4 001638C4  C8 42 A9 D0 */	lfd f2, "@875"@sda21(r2)
/* 801667E8 001638C8  90 01 00 08 */	stw r0, 0x8(r1)
/* 801667EC 001638CC  C0 02 A9 F8 */	lfs f0, "@1051"@sda21(r2)
/* 801667F0 001638D0  C8 21 00 08 */	lfd f1, 0x8(r1)
/* 801667F4 001638D4  EC 21 10 28 */	fsubs f1, f1, f2
/* 801667F8 001638D8  EC 01 00 24 */	fdivs f0, f1, f0
/* 801667FC 001638DC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80166800 001638E0  40 81 00 28 */	ble .L_80166828
/* 80166804 001638E4  80 BF 15 6C */	lwz r5, 0x156c(r31)
/* 80166808 001638E8  28 05 00 00 */	cmplwi r5, 0x0
/* 8016680C 001638EC  41 82 00 1C */	beq .L_80166828
/* 80166810 001638F0  54 80 10 3A */	slwi r0, r4, 2
/* 80166814 001638F4  7C 7F 02 14 */	add r3, r31, r0
/* 80166818 001638F8  90 A3 15 5C */	stw r5, 0x155c(r3)
/* 8016681C 001638FC  80 7F 15 70 */	lwz r3, 0x1570(r31)
/* 80166820 00163900  38 03 00 01 */	addi r0, r3, 0x1
/* 80166824 00163904  90 1F 15 70 */	stw r0, 0x1570(r31)
.L_80166828:
/* 80166828 00163908  E3 E1 00 48 */	psq_l f31, 0x48(r1), 0, qr0
/* 8016682C 0016390C  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80166830 00163910  E3 C1 00 38 */	psq_l f30, 0x38(r1), 0, qr0
/* 80166834 00163914  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 80166838 00163918  E3 A1 00 28 */	psq_l f29, 0x28(r1), 0, qr0
/* 8016683C 0016391C  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 80166840 00163920  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80166844 00163924  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80166848 00163928  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8016684C 0016392C  7C 08 03 A6 */	mtlr r0
/* 80166850 00163930  38 21 00 50 */	addi r1, r1, 0x50
/* 80166854 00163934  4E 80 00 20 */	blr
.endfn EmitFreezeBreath__FP5xVec3P5xVec3fff

# StopFreezeBreath()
.fn StopFreezeBreath__Fv, global
/* 80166858 00163938  80 AD 97 04 */	lwz r5, sPat_Ptr@sda21(r13)
/* 8016685C 0016393C  80 85 15 6C */	lwz r4, 0x156c(r5)
/* 80166860 00163940  28 04 00 00 */	cmplwi r4, 0x0
/* 80166864 00163944  4D 82 00 20 */	beqlr
/* 80166868 00163948  80 05 15 70 */	lwz r0, 0x1570(r5)
/* 8016686C 0016394C  54 00 10 3A */	slwi r0, r0, 2
/* 80166870 00163950  7C 65 02 14 */	add r3, r5, r0
/* 80166874 00163954  90 83 15 5C */	stw r4, 0x155c(r3)
/* 80166878 00163958  80 65 15 70 */	lwz r3, 0x1570(r5)
/* 8016687C 0016395C  38 03 00 01 */	addi r0, r3, 0x1
/* 80166880 00163960  90 05 15 70 */	stw r0, 0x1570(r5)
/* 80166884 00163964  4E 80 00 20 */	blr
.endfn StopFreezeBreath__Fv

# zNPCGoalBossPatFreeze::Enter(float, void*)
.fn Enter__21zNPCGoalBossPatFreezeFfPv, global
/* 80166888 00163968  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8016688C 0016396C  7C 08 02 A6 */	mflr r0
/* 80166890 00163970  90 01 00 34 */	stw r0, 0x34(r1)
/* 80166894 00163974  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80166898 00163978  F3 E1 00 28 */	psq_st f31, 0x28(r1), 0, qr0
/* 8016689C 0016397C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801668A0 00163980  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801668A4 00163984  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801668A8 00163988  FF E0 08 90 */	fmr f31, f1
/* 801668AC 0016398C  7C 7D 1B 78 */	mr r29, r3
/* 801668B0 00163990  7C 9E 23 78 */	mr r30, r4
/* 801668B4 00163994  4B FA 81 E1 */	bl GetOwner__5xGoalCFv
/* 801668B8 00163998  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801668BC 0016399C  7C 7F 1B 78 */	mr r31, r3
/* 801668C0 001639A0  D0 1D 00 4C */	stfs f0, 0x4c(r29)
/* 801668C4 001639A4  4B FF FE 3D */	bl StartFreezeBreath__Fv
/* 801668C8 001639A8  80 1F 02 B4 */	lwz r0, 0x2b4(r31)
/* 801668CC 001639AC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801668D0 001639B0  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 801668D4 001639B4  60 00 00 20 */	ori r0, r0, 0x20
/* 801668D8 001639B8  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 801668DC 001639BC  38 63 06 2D */	addi r3, r3, 0x62d
/* 801668E0 001639C0  4B EE 59 35 */	bl xStrHash__FPCc
/* 801668E4 001639C4  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 801668E8 001639C8  7F E6 FB 78 */	mr r6, r31
/* 801668EC 001639CC  C0 22 AA E0 */	lfs f1, "@2610"@sda21(r2)
/* 801668F0 001639D0  38 80 00 00 */	li r4, 0x0
/* 801668F4 001639D4  FC A0 10 90 */	fmr f5, f2
/* 801668F8 001639D8  C0 62 AA 24 */	lfs f3, "@1142"@sda21(r2)
/* 801668FC 001639DC  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 80166900 001639E0  38 A0 00 00 */	li r5, 0x0
/* 80166904 001639E4  38 E0 00 00 */	li r7, 0x0
/* 80166908 001639E8  4B EE 21 5D */	bl xSndPlay3D__FUiffUiUiP4xEntff14sound_categoryf
/* 8016690C 001639EC  FC 20 F8 90 */	fmr f1, f31
/* 80166910 001639F0  7F A3 EB 78 */	mr r3, r29
/* 80166914 001639F4  7F C4 F3 78 */	mr r4, r30
/* 80166918 001639F8  4B F6 E7 FD */	bl Enter__14zNPCGoalCommonFfPv
/* 8016691C 001639FC  E3 E1 00 28 */	psq_l f31, 0x28(r1), 0, qr0
/* 80166920 00163A00  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80166924 00163A04  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80166928 00163A08  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8016692C 00163A0C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80166930 00163A10  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80166934 00163A14  7C 08 03 A6 */	mtlr r0
/* 80166938 00163A18  38 21 00 30 */	addi r1, r1, 0x30
/* 8016693C 00163A1C  4E 80 00 20 */	blr
.endfn Enter__21zNPCGoalBossPatFreezeFfPv

# zNPCGoalBossPatFreeze::Process(en_trantype*, float, void*, xScene*)
.fn Process__21zNPCGoalBossPatFreezeFP11en_trantypefPvP6xScene, global
/* 80166940 00163A20  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80166944 00163A24  7C 08 02 A6 */	mflr r0
/* 80166948 00163A28  90 01 00 64 */	stw r0, 0x64(r1)
/* 8016694C 00163A2C  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80166950 00163A30  F3 E1 00 58 */	psq_st f31, 0x58(r1), 0, qr0
/* 80166954 00163A34  BF 41 00 38 */	stmw r26, 0x38(r1)
/* 80166958 00163A38  FF E0 08 90 */	fmr f31, f1
/* 8016695C 00163A3C  7C 7C 1B 78 */	mr r28, r3
/* 80166960 00163A40  7C 9D 23 78 */	mr r29, r4
/* 80166964 00163A44  7C BE 2B 78 */	mr r30, r5
/* 80166968 00163A48  7C DF 33 78 */	mr r31, r6
/* 8016696C 00163A4C  4B FA 81 29 */	bl GetOwner__5xGoalCFv
/* 80166970 00163A50  C0 3C 00 4C */	lfs f1, 0x4c(r28)
/* 80166974 00163A54  7C 7A 1B 78 */	mr r26, r3
/* 80166978 00163A58  C0 02 AA 4C */	lfs f0, "@1663"@sda21(r2)
/* 8016697C 00163A5C  3B 60 00 00 */	li r27, 0x0
/* 80166980 00163A60  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80166984 00163A64  40 80 00 08 */	bge .L_8016698C
/* 80166988 00163A68  3B 60 00 01 */	li r27, 0x1
.L_8016698C:
/* 8016698C 00163A6C  C0 1C 00 4C */	lfs f0, 0x4c(r28)
/* 80166990 00163A70  3C 60 80 3C */	lis r3, globals@ha
/* 80166994 00163A74  38 83 05 58 */	addi r4, r3, globals@l
/* 80166998 00163A78  FC 40 F8 90 */	fmr f2, f31
/* 8016699C 00163A7C  EC 00 F8 2A */	fadds f0, f0, f31
/* 801669A0 00163A80  7F 43 D3 78 */	mr r3, r26
/* 801669A4 00163A84  D0 1C 00 4C */	stfs f0, 0x4c(r28)
/* 801669A8 00163A88  80 84 07 04 */	lwz r4, 0x704(r4)
/* 801669AC 00163A8C  C0 22 AA E4 */	lfs f1, "@2629"@sda21(r2)
/* 801669B0 00163A90  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 801669B4 00163A94  38 84 00 30 */	addi r4, r4, 0x30
/* 801669B8 00163A98  4B FF EA 51 */	bl Pat_FaceTarget__FP12zNPCBPatrickPC5xVec3ff
/* 801669BC 00163A9C  C0 3C 00 4C */	lfs f1, 0x4c(r28)
/* 801669C0 00163AA0  C0 02 AA 4C */	lfs f0, "@1663"@sda21(r2)
/* 801669C4 00163AA4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801669C8 00163AA8  41 80 01 28 */	blt .L_80166AF0
/* 801669CC 00163AAC  C0 02 AA E8 */	lfs f0, "@2630"@sda21(r2)
/* 801669D0 00163AB0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801669D4 00163AB4  40 80 01 0C */	bge .L_80166AE0
/* 801669D8 00163AB8  2C 1B 00 00 */	cmpwi r27, 0x0
/* 801669DC 00163ABC  41 82 00 3C */	beq .L_80166A18
/* 801669E0 00163AC0  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801669E4 00163AC4  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 801669E8 00163AC8  38 63 06 3C */	addi r3, r3, 0x63c
/* 801669EC 00163ACC  4B EE 58 29 */	bl xStrHash__FPCc
/* 801669F0 00163AD0  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 801669F4 00163AD4  7F 46 D3 78 */	mr r6, r26
/* 801669F8 00163AD8  C0 22 AA 6C */	lfs f1, "@1671"@sda21(r2)
/* 801669FC 00163ADC  38 80 00 00 */	li r4, 0x0
/* 80166A00 00163AE0  FC A0 10 90 */	fmr f5, f2
/* 80166A04 00163AE4  C0 62 AA 24 */	lfs f3, "@1142"@sda21(r2)
/* 80166A08 00163AE8  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 80166A0C 00163AEC  38 A0 00 00 */	li r5, 0x0
/* 80166A10 00163AF0  38 E0 00 00 */	li r7, 0x0
/* 80166A14 00163AF4  4B EE 20 51 */	bl xSndPlay3D__FUiffUiUiP4xEntff14sound_categoryf
.L_80166A18:
/* 80166A18 00163AF8  C0 22 A9 C4 */	lfs f1, "@832"@sda21(r2)
/* 80166A1C 00163AFC  38 61 00 2C */	addi r3, r1, 0x2c
/* 80166A20 00163B00  FC 40 08 90 */	fmr f2, f1
/* 80166A24 00163B04  FC 60 08 90 */	fmr f3, f1
/* 80166A28 00163B08  4B EA 85 D5 */	bl xVec3Init__FP5xVec3fff
/* 80166A2C 00163B0C  80 9A 00 24 */	lwz r4, 0x24(r26)
/* 80166A30 00163B10  3C 60 80 2A */	lis r3, sBone@ha
/* 80166A34 00163B14  38 A3 AA 68 */	addi r5, r3, sBone@l
/* 80166A38 00163B18  38 61 00 14 */	addi r3, r1, 0x14
/* 80166A3C 00163B1C  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80166A40 00163B20  38 C1 00 2C */	addi r6, r1, 0x2c
/* 80166A44 00163B24  80 A5 00 08 */	lwz r5, 0x8(r5)
/* 80166A48 00163B28  4B FF 9F 1D */	bl GetBonePos__FP5xVec3P7xMat4x3iP5xVec3
/* 80166A4C 00163B2C  80 9A 00 24 */	lwz r4, 0x24(r26)
/* 80166A50 00163B30  3C 60 80 2A */	lis r3, sBone@ha
/* 80166A54 00163B34  3B 63 AA 68 */	addi r27, r3, sBone@l
/* 80166A58 00163B38  38 61 00 20 */	addi r3, r1, 0x20
/* 80166A5C 00163B3C  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80166A60 00163B40  38 C1 00 2C */	addi r6, r1, 0x2c
/* 80166A64 00163B44  80 BB 00 04 */	lwz r5, 0x4(r27)
/* 80166A68 00163B48  4B FF 9E FD */	bl GetBonePos__FP5xVec3P7xMat4x3iP5xVec3
/* 80166A6C 00163B4C  38 61 00 14 */	addi r3, r1, 0x14
/* 80166A70 00163B50  38 81 00 20 */	addi r4, r1, 0x20
/* 80166A74 00163B54  4B EA 7C E1 */	bl xVec3AddTo__FP5xVec3PC5xVec3
/* 80166A78 00163B58  C0 22 A9 E4 */	lfs f1, "@1046"@sda21(r2)
/* 80166A7C 00163B5C  38 61 00 14 */	addi r3, r1, 0x14
/* 80166A80 00163B60  4B EB 4E B9 */	bl xVec3SMulBy__FP5xVec3f
/* 80166A84 00163B64  C0 22 A9 C4 */	lfs f1, "@832"@sda21(r2)
/* 80166A88 00163B68  38 61 00 2C */	addi r3, r1, 0x2c
/* 80166A8C 00163B6C  C0 62 A9 C0 */	lfs f3, "@831"@sda21(r2)
/* 80166A90 00163B70  FC 40 08 90 */	fmr f2, f1
/* 80166A94 00163B74  4B EA 85 69 */	bl xVec3Init__FP5xVec3fff
/* 80166A98 00163B78  80 9A 00 24 */	lwz r4, 0x24(r26)
/* 80166A9C 00163B7C  38 61 00 08 */	addi r3, r1, 0x8
/* 80166AA0 00163B80  80 BB 00 04 */	lwz r5, 0x4(r27)
/* 80166AA4 00163B84  38 C1 00 2C */	addi r6, r1, 0x2c
/* 80166AA8 00163B88  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80166AAC 00163B8C  4B FF 9E B9 */	bl GetBonePos__FP5xVec3P7xMat4x3iP5xVec3
/* 80166AB0 00163B90  38 61 00 08 */	addi r3, r1, 0x8
/* 80166AB4 00163B94  38 81 00 14 */	addi r4, r1, 0x14
/* 80166AB8 00163B98  4B EB 4E A9 */	bl xVec3SubFrom__FP5xVec3PC5xVec3
/* 80166ABC 00163B9C  C0 5C 00 4C */	lfs f2, 0x4c(r28)
/* 80166AC0 00163BA0  FC 20 F8 90 */	fmr f1, f31
/* 80166AC4 00163BA4  C0 02 AA 4C */	lfs f0, "@1663"@sda21(r2)
/* 80166AC8 00163BA8  38 61 00 14 */	addi r3, r1, 0x14
/* 80166ACC 00163BAC  C0 62 A9 E4 */	lfs f3, "@1046"@sda21(r2)
/* 80166AD0 00163BB0  38 81 00 08 */	addi r4, r1, 0x8
/* 80166AD4 00163BB4  EC 42 00 28 */	fsubs f2, f2, f0
/* 80166AD8 00163BB8  4B FF FC 51 */	bl EmitFreezeBreath__FP5xVec3P5xVec3fff
/* 80166ADC 00163BBC  48 00 00 14 */	b .L_80166AF0
.L_80166AE0:
/* 80166AE0 00163BC0  80 1A 15 70 */	lwz r0, 0x1570(r26)
/* 80166AE4 00163BC4  2C 00 00 04 */	cmpwi r0, 0x4
/* 80166AE8 00163BC8  40 80 00 08 */	bge .L_80166AF0
/* 80166AEC 00163BCC  4B FF FD 6D */	bl StopFreezeBreath__Fv
.L_80166AF0:
/* 80166AF0 00163BD0  FC 20 F8 90 */	fmr f1, f31
/* 80166AF4 00163BD4  7F 83 E3 78 */	mr r3, r28
/* 80166AF8 00163BD8  7F A4 EB 78 */	mr r4, r29
/* 80166AFC 00163BDC  7F C5 F3 78 */	mr r5, r30
/* 80166B00 00163BE0  7F E6 FB 78 */	mr r6, r31
/* 80166B04 00163BE4  4B FA 80 45 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
/* 80166B08 00163BE8  E3 E1 00 58 */	psq_l f31, 0x58(r1), 0, qr0
/* 80166B0C 00163BEC  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 80166B10 00163BF0  BB 41 00 38 */	lmw r26, 0x38(r1)
/* 80166B14 00163BF4  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80166B18 00163BF8  7C 08 03 A6 */	mtlr r0
/* 80166B1C 00163BFC  38 21 00 60 */	addi r1, r1, 0x60
/* 80166B20 00163C00  4E 80 00 20 */	blr
.endfn Process__21zNPCGoalBossPatFreezeFP11en_trantypefPvP6xScene

# zNPCGoalBossPatSpawn::Enter(float, void*)
.fn Enter__20zNPCGoalBossPatSpawnFfPv, global
/* 80166B24 00163C04  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80166B28 00163C08  7C 08 02 A6 */	mflr r0
/* 80166B2C 00163C0C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80166B30 00163C10  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80166B34 00163C14  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 80166B38 00163C18  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80166B3C 00163C1C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80166B40 00163C20  FF E0 08 90 */	fmr f31, f1
/* 80166B44 00163C24  7C 7E 1B 78 */	mr r30, r3
/* 80166B48 00163C28  7C 9F 23 78 */	mr r31, r4
/* 80166B4C 00163C2C  4B FA 7F 49 */	bl GetOwner__5xGoalCFv
/* 80166B50 00163C30  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80166B54 00163C34  38 00 00 01 */	li r0, 0x1
/* 80166B58 00163C38  FC 20 F8 90 */	fmr f1, f31
/* 80166B5C 00163C3C  7F E4 FB 78 */	mr r4, r31
/* 80166B60 00163C40  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 80166B64 00163C44  90 1E 00 50 */	stw r0, 0x50(r30)
/* 80166B68 00163C48  80 03 02 B4 */	lwz r0, 0x2b4(r3)
/* 80166B6C 00163C4C  60 00 00 20 */	ori r0, r0, 0x20
/* 80166B70 00163C50  90 03 02 B4 */	stw r0, 0x2b4(r3)
/* 80166B74 00163C54  7F C3 F3 78 */	mr r3, r30
/* 80166B78 00163C58  4B F6 E5 9D */	bl Enter__14zNPCGoalCommonFfPv
/* 80166B7C 00163C5C  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 80166B80 00163C60  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80166B84 00163C64  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80166B88 00163C68  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80166B8C 00163C6C  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 80166B90 00163C70  7C 08 03 A6 */	mtlr r0
/* 80166B94 00163C74  38 21 00 20 */	addi r1, r1, 0x20
/* 80166B98 00163C78  4E 80 00 20 */	blr
.endfn Enter__20zNPCGoalBossPatSpawnFfPv

# zNPCGoalBossPatSpawn::Process(en_trantype*, float, void*, xScene*)
.fn Process__20zNPCGoalBossPatSpawnFP11en_trantypefPvP6xScene, global
/* 80166B9C 00163C7C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80166BA0 00163C80  7C 08 02 A6 */	mflr r0
/* 80166BA4 00163C84  90 01 00 54 */	stw r0, 0x54(r1)
/* 80166BA8 00163C88  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80166BAC 00163C8C  F3 E1 00 48 */	psq_st f31, 0x48(r1), 0, qr0
/* 80166BB0 00163C90  BF 41 00 28 */	stmw r26, 0x28(r1)
/* 80166BB4 00163C94  FF E0 08 90 */	fmr f31, f1
/* 80166BB8 00163C98  7C 7B 1B 78 */	mr r27, r3
/* 80166BBC 00163C9C  7C 9C 23 78 */	mr r28, r4
/* 80166BC0 00163CA0  7C BD 2B 78 */	mr r29, r5
/* 80166BC4 00163CA4  7C DE 33 78 */	mr r30, r6
/* 80166BC8 00163CA8  4B FA 7E CD */	bl GetOwner__5xGoalCFv
/* 80166BCC 00163CAC  C0 1B 00 4C */	lfs f0, 0x4c(r27)
/* 80166BD0 00163CB0  3C 80 80 3C */	lis r4, globals@ha
/* 80166BD4 00163CB4  38 84 05 58 */	addi r4, r4, globals@l
/* 80166BD8 00163CB8  FC 40 F8 90 */	fmr f2, f31
/* 80166BDC 00163CBC  EC 00 F8 2A */	fadds f0, f0, f31
/* 80166BE0 00163CC0  7C 7F 1B 78 */	mr r31, r3
/* 80166BE4 00163CC4  D0 1B 00 4C */	stfs f0, 0x4c(r27)
/* 80166BE8 00163CC8  80 84 07 04 */	lwz r4, 0x704(r4)
/* 80166BEC 00163CCC  C0 22 AA 74 */	lfs f1, "@1673"@sda21(r2)
/* 80166BF0 00163CD0  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80166BF4 00163CD4  38 84 00 30 */	addi r4, r4, 0x30
/* 80166BF8 00163CD8  4B FF E8 11 */	bl Pat_FaceTarget__FP12zNPCBPatrickPC5xVec3ff
/* 80166BFC 00163CDC  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 80166C00 00163CE0  80 1B 00 50 */	lwz r0, 0x50(r27)
/* 80166C04 00163CE4  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80166C08 00163CE8  28 00 00 02 */	cmplwi r0, 0x2
/* 80166C0C 00163CEC  80 63 00 08 */	lwz r3, 0x8(r3)
/* 80166C10 00163CF0  C0 23 00 08 */	lfs f1, 0x8(r3)
/* 80166C14 00163CF4  40 82 00 18 */	bne .L_80166C2C
/* 80166C18 00163CF8  C0 02 AA E8 */	lfs f0, "@2630"@sda21(r2)
/* 80166C1C 00163CFC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80166C20 00163D00  40 80 00 0C */	bge .L_80166C2C
/* 80166C24 00163D04  38 00 00 01 */	li r0, 0x1
/* 80166C28 00163D08  90 1B 00 50 */	stw r0, 0x50(r27)
.L_80166C2C:
/* 80166C2C 00163D0C  80 1B 00 50 */	lwz r0, 0x50(r27)
/* 80166C30 00163D10  28 00 00 01 */	cmplwi r0, 0x1
/* 80166C34 00163D14  40 82 00 FC */	bne .L_80166D30
/* 80166C38 00163D18  C0 02 AA E8 */	lfs f0, "@2630"@sda21(r2)
/* 80166C3C 00163D1C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80166C40 00163D20  40 81 00 F0 */	ble .L_80166D30
/* 80166C44 00163D24  38 00 00 03 */	li r0, 0x3
/* 80166C48 00163D28  38 60 00 00 */	li r3, 0x0
/* 80166C4C 00163D2C  90 1B 00 50 */	stw r0, 0x50(r27)
/* 80166C50 00163D30  80 1F 13 C8 */	lwz r0, 0x13c8(r31)
/* 80166C54 00163D34  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80166C58 00163D38  40 82 00 28 */	bne .L_80166C80
/* 80166C5C 00163D3C  80 1F 13 CC */	lwz r0, 0x13cc(r31)
/* 80166C60 00163D40  38 60 00 01 */	li r3, 0x1
/* 80166C64 00163D44  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80166C68 00163D48  40 82 00 18 */	bne .L_80166C80
/* 80166C6C 00163D4C  80 1F 13 D0 */	lwz r0, 0x13d0(r31)
/* 80166C70 00163D50  38 60 00 02 */	li r3, 0x2
/* 80166C74 00163D54  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80166C78 00163D58  40 82 00 08 */	bne .L_80166C80
/* 80166C7C 00163D5C  38 60 00 03 */	li r3, 0x3
.L_80166C80:
/* 80166C80 00163D60  54 7A 10 3A */	slwi r26, r3, 2
/* 80166C84 00163D64  38 61 00 14 */	addi r3, r1, 0x14
/* 80166C88 00163D68  7C 9F D2 14 */	add r4, r31, r26
/* 80166C8C 00163D6C  80 04 13 C8 */	lwz r0, 0x13c8(r4)
/* 80166C90 00163D70  54 00 00 3C */	clrrwi r0, r0, 1
/* 80166C94 00163D74  90 04 13 C8 */	stw r0, 0x13c8(r4)
/* 80166C98 00163D78  C0 22 A9 C4 */	lfs f1, "@832"@sda21(r2)
/* 80166C9C 00163D7C  FC 40 08 90 */	fmr f2, f1
/* 80166CA0 00163D80  FC 60 08 90 */	fmr f3, f1
/* 80166CA4 00163D84  4B EA 83 59 */	bl xVec3Init__FP5xVec3fff
/* 80166CA8 00163D88  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 80166CAC 00163D8C  3C 60 80 2A */	lis r3, sBone@ha
/* 80166CB0 00163D90  38 A3 AA 68 */	addi r5, r3, sBone@l
/* 80166CB4 00163D94  38 61 00 08 */	addi r3, r1, 0x8
/* 80166CB8 00163D98  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80166CBC 00163D9C  38 C1 00 14 */	addi r6, r1, 0x14
/* 80166CC0 00163DA0  80 A5 00 24 */	lwz r5, 0x24(r5)
/* 80166CC4 00163DA4  4B FF 9C A1 */	bl GetBonePos__FP5xVec3P7xMat4x3iP5xVec3
/* 80166CC8 00163DA8  7C BF D2 14 */	add r5, r31, r26
/* 80166CCC 00163DAC  38 81 00 08 */	addi r4, r1, 0x8
/* 80166CD0 00163DB0  80 65 13 D4 */	lwz r3, 0x13d4(r5)
/* 80166CD4 00163DB4  38 C0 00 00 */	li r6, 0x0
/* 80166CD8 00163DB8  80 A5 13 E0 */	lwz r5, 0x13e0(r5)
/* 80166CDC 00163DBC  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80166CE0 00163DC0  81 8C 00 84 */	lwz r12, 0x84(r12)
/* 80166CE4 00163DC4  7D 89 03 A6 */	mtctr r12
/* 80166CE8 00163DC8  4E 80 04 21 */	bctrl
/* 80166CEC 00163DCC  80 1F 13 C8 */	lwz r0, 0x13c8(r31)
/* 80166CF0 00163DD0  38 60 00 00 */	li r3, 0x0
/* 80166CF4 00163DD4  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80166CF8 00163DD8  40 82 00 28 */	bne .L_80166D20
/* 80166CFC 00163DDC  80 1F 13 CC */	lwz r0, 0x13cc(r31)
/* 80166D00 00163DE0  38 60 00 01 */	li r3, 0x1
/* 80166D04 00163DE4  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80166D08 00163DE8  40 82 00 18 */	bne .L_80166D20
/* 80166D0C 00163DEC  80 1F 13 D0 */	lwz r0, 0x13d0(r31)
/* 80166D10 00163DF0  38 60 00 02 */	li r3, 0x2
/* 80166D14 00163DF4  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80166D18 00163DF8  40 82 00 08 */	bne .L_80166D20
/* 80166D1C 00163DFC  38 60 00 03 */	li r3, 0x3
.L_80166D20:
/* 80166D20 00163E00  2C 03 00 03 */	cmpwi r3, 0x3
/* 80166D24 00163E04  40 80 00 0C */	bge .L_80166D30
/* 80166D28 00163E08  38 00 00 02 */	li r0, 0x2
/* 80166D2C 00163E0C  90 1B 00 50 */	stw r0, 0x50(r27)
.L_80166D30:
/* 80166D30 00163E10  FC 20 F8 90 */	fmr f1, f31
/* 80166D34 00163E14  7F 63 DB 78 */	mr r3, r27
/* 80166D38 00163E18  7F 84 E3 78 */	mr r4, r28
/* 80166D3C 00163E1C  7F A5 EB 78 */	mr r5, r29
/* 80166D40 00163E20  7F C6 F3 78 */	mr r6, r30
/* 80166D44 00163E24  4B FA 7E 05 */	bl Process__5xGoalFP11en_trantypefPvP6xScene
/* 80166D48 00163E28  E3 E1 00 48 */	psq_l f31, 0x48(r1), 0, qr0
/* 80166D4C 00163E2C  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80166D50 00163E30  BB 41 00 28 */	lmw r26, 0x28(r1)
/* 80166D54 00163E34  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80166D58 00163E38  7C 08 03 A6 */	mtlr r0
/* 80166D5C 00163E3C  38 21 00 50 */	addi r1, r1, 0x50
/* 80166D60 00163E40  4E 80 00 20 */	blr
.endfn Process__20zNPCGoalBossPatSpawnFP11en_trantypefPvP6xScene

# zNPCGoalBossPatSpin::Enter(float, void*)
.fn Enter__19zNPCGoalBossPatSpinFfPv, global
/* 80166D64 00163E44  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 80166D68 00163E48  7C 08 02 A6 */	mflr r0
/* 80166D6C 00163E4C  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80166D70 00163E50  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 80166D74 00163E54  F3 E1 00 98 */	psq_st f31, 0x98(r1), 0, qr0
/* 80166D78 00163E58  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 80166D7C 00163E5C  F3 C1 00 88 */	psq_st f30, 0x88(r1), 0, qr0
/* 80166D80 00163E60  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 80166D84 00163E64  F3 A1 00 78 */	psq_st f29, 0x78(r1), 0, qr0
/* 80166D88 00163E68  BF 41 00 58 */	stmw r26, 0x58(r1)
/* 80166D8C 00163E6C  FF E0 08 90 */	fmr f31, f1
/* 80166D90 00163E70  7C 7D 1B 78 */	mr r29, r3
/* 80166D94 00163E74  7C 9E 23 78 */	mr r30, r4
/* 80166D98 00163E78  4B FA 7C FD */	bl GetOwner__5xGoalCFv
/* 80166D9C 00163E7C  38 00 00 00 */	li r0, 0x0
/* 80166DA0 00163E80  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80166DA4 00163E84  90 1D 00 50 */	stw r0, 0x50(r29)
/* 80166DA8 00163E88  38 84 08 9C */	addi r4, r4, "@stringBase0"@l
/* 80166DAC 00163E8C  7C 7F 1B 78 */	mr r31, r3
/* 80166DB0 00163E90  38 64 06 4B */	addi r3, r4, 0x64b
/* 80166DB4 00163E94  4B EE 54 61 */	bl xStrHash__FPCc
/* 80166DB8 00163E98  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80166DBC 00163E9C  7F E6 FB 78 */	mr r6, r31
/* 80166DC0 00163EA0  C0 22 AA 6C */	lfs f1, "@1671"@sda21(r2)
/* 80166DC4 00163EA4  38 80 00 00 */	li r4, 0x0
/* 80166DC8 00163EA8  FC A0 10 90 */	fmr f5, f2
/* 80166DCC 00163EAC  C0 62 AA 24 */	lfs f3, "@1142"@sda21(r2)
/* 80166DD0 00163EB0  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 80166DD4 00163EB4  38 A0 00 00 */	li r5, 0x0
/* 80166DD8 00163EB8  38 E0 00 00 */	li r7, 0x0
/* 80166DDC 00163EBC  4B EE 1C 89 */	bl xSndPlay3D__FUiffUiUiP4xEntff14sound_categoryf
/* 80166DE0 00163EC0  80 1F 02 B4 */	lwz r0, 0x2b4(r31)
/* 80166DE4 00163EC4  38 7D 00 58 */	addi r3, r29, 0x58
/* 80166DE8 00163EC8  54 00 07 FA */	rlwinm r0, r0, 0, 31, 29
/* 80166DEC 00163ECC  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 80166DF0 00163ED0  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 80166DF4 00163ED4  C0 22 AA 00 */	lfs f1, "@1053"@sda21(r2)
/* 80166DF8 00163ED8  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80166DFC 00163EDC  4B EA 42 95 */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 80166E00 00163EE0  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80166E04 00163EE4  D0 1D 00 5C */	stfs f0, 0x5c(r29)
/* 80166E08 00163EE8  C0 5D 00 58 */	lfs f2, 0x58(r29)
/* 80166E0C 00163EEC  C0 22 AA 68 */	lfs f1, "@1670"@sda21(r2)
/* 80166E10 00163EF0  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80166E14 00163EF4  40 80 00 14 */	bge .L_80166E28
/* 80166E18 00163EF8  C0 02 AA EC */	lfs f0, "@2696"@sda21(r2)
/* 80166E1C 00163EFC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80166E20 00163F00  40 81 00 08 */	ble .L_80166E28
/* 80166E24 00163F04  D0 3D 00 58 */	stfs f1, 0x58(r29)
.L_80166E28:
/* 80166E28 00163F08  C0 5D 00 60 */	lfs f2, 0x60(r29)
/* 80166E2C 00163F0C  C0 22 AA 68 */	lfs f1, "@1670"@sda21(r2)
/* 80166E30 00163F10  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80166E34 00163F14  40 80 00 14 */	bge .L_80166E48
/* 80166E38 00163F18  C0 02 AA EC */	lfs f0, "@2696"@sda21(r2)
/* 80166E3C 00163F1C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80166E40 00163F20  40 81 00 08 */	ble .L_80166E48
/* 80166E44 00163F24  D0 3D 00 60 */	stfs f1, 0x60(r29)
.L_80166E48:
/* 80166E48 00163F28  38 7D 00 58 */	addi r3, r29, 0x58
/* 80166E4C 00163F2C  4B EA 78 05 */	bl xVec3Length__FPC5xVec3
/* 80166E50 00163F30  C0 02 AA 00 */	lfs f0, "@1053"@sda21(r2)
/* 80166E54 00163F34  38 7D 00 58 */	addi r3, r29, 0x58
/* 80166E58 00163F38  EC 20 08 24 */	fdivs f1, f0, f1
/* 80166E5C 00163F3C  4B EB 4A DD */	bl xVec3SMulBy__FP5xVec3f
/* 80166E60 00163F40  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80166E64 00163F44  38 61 00 38 */	addi r3, r1, 0x38
/* 80166E68 00163F48  D0 1D 00 4C */	stfs f0, 0x4c(r29)
/* 80166E6C 00163F4C  80 1F 02 B4 */	lwz r0, 0x2b4(r31)
/* 80166E70 00163F50  54 00 06 F2 */	rlwinm r0, r0, 0, 27, 25
/* 80166E74 00163F54  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 80166E78 00163F58  C0 22 A9 C4 */	lfs f1, "@832"@sda21(r2)
/* 80166E7C 00163F5C  FC 40 08 90 */	fmr f2, f1
/* 80166E80 00163F60  FC 60 08 90 */	fmr f3, f1
/* 80166E84 00163F64  4B EA 81 79 */	bl xVec3Init__FP5xVec3fff
/* 80166E88 00163F68  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 80166E8C 00163F6C  3C 60 80 2A */	lis r3, sBone@ha
/* 80166E90 00163F70  38 A3 AA 68 */	addi r5, r3, sBone@l
/* 80166E94 00163F74  38 61 00 20 */	addi r3, r1, 0x20
/* 80166E98 00163F78  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80166E9C 00163F7C  38 C1 00 38 */	addi r6, r1, 0x38
/* 80166EA0 00163F80  80 A5 00 00 */	lwz r5, 0x0(r5)
/* 80166EA4 00163F84  4B FF 9A C1 */	bl GetBonePos__FP5xVec3P7xMat4x3iP5xVec3
/* 80166EA8 00163F88  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 80166EAC 00163F8C  3C 60 80 2A */	lis r3, sBone@ha
/* 80166EB0 00163F90  38 A3 AA 68 */	addi r5, r3, sBone@l
/* 80166EB4 00163F94  38 61 00 14 */	addi r3, r1, 0x14
/* 80166EB8 00163F98  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80166EBC 00163F9C  38 C1 00 38 */	addi r6, r1, 0x38
/* 80166EC0 00163FA0  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 80166EC4 00163FA4  4B FF 9A A1 */	bl GetBonePos__FP5xVec3P7xMat4x3iP5xVec3
/* 80166EC8 00163FA8  C0 02 A9 CC */	lfs f0, "@870"@sda21(r2)
/* 80166ECC 00163FAC  3C 60 80 2A */	lis r3, sBone@ha
/* 80166ED0 00163FB0  38 83 AA 68 */	addi r4, r3, sBone@l
/* 80166ED4 00163FB4  38 61 00 2C */	addi r3, r1, 0x2c
/* 80166ED8 00163FB8  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 80166EDC 00163FBC  38 C1 00 38 */	addi r6, r1, 0x38
/* 80166EE0 00163FC0  80 A4 00 00 */	lwz r5, 0x0(r4)
/* 80166EE4 00163FC4  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 80166EE8 00163FC8  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80166EEC 00163FCC  4B FF 9A 79 */	bl GetBonePos__FP5xVec3P7xMat4x3iP5xVec3
/* 80166EF0 00163FD0  38 61 00 2C */	addi r3, r1, 0x2c
/* 80166EF4 00163FD4  38 81 00 20 */	addi r4, r1, 0x20
/* 80166EF8 00163FD8  4B EB 4A 69 */	bl xVec3SubFrom__FP5xVec3PC5xVec3
/* 80166EFC 00163FDC  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80166F00 00163FE0  38 61 00 2C */	addi r3, r1, 0x2c
/* 80166F04 00163FE4  7C 64 1B 78 */	mr r4, r3
/* 80166F08 00163FE8  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80166F0C 00163FEC  4B EE 73 E5 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 80166F10 00163FF0  C0 A1 00 2C */	lfs f5, 0x2c(r1)
/* 80166F14 00163FF4  C0 61 00 34 */	lfs f3, 0x34(r1)
/* 80166F18 00163FF8  C0 C1 00 1C */	lfs f6, 0x1c(r1)
/* 80166F1C 00163FFC  EC 85 01 72 */	fmuls f4, f5, f5
/* 80166F20 00164000  EC 23 00 F2 */	fmuls f1, f3, f3
/* 80166F24 00164004  C0 E1 00 14 */	lfs f7, 0x14(r1)
/* 80166F28 00164008  EC 06 01 B2 */	fmuls f0, f6, f6
/* 80166F2C 0016400C  C0 42 AA 68 */	lfs f2, "@1670"@sda21(r2)
/* 80166F30 00164010  EC 66 00 F2 */	fmuls f3, f6, f3
/* 80166F34 00164014  EF C4 08 2A */	fadds f30, f4, f1
/* 80166F38 00164018  EC 27 01 FA */	fmadds f1, f7, f7, f0
/* 80166F3C 0016401C  C0 02 AA F0 */	lfs f0, "@2697"@sda21(r2)
/* 80166F40 00164020  EC 67 19 7A */	fmadds f3, f7, f5, f3
/* 80166F44 00164024  C0 82 A9 D8 */	lfs f4, "@891"@sda21(r2)
/* 80166F48 00164028  EC 42 07 B2 */	fmuls f2, f2, f30
/* 80166F4C 0016402C  EC 21 00 28 */	fsubs f1, f1, f0
/* 80166F50 00164030  EF A4 00 F2 */	fmuls f29, f4, f3
/* 80166F54 00164034  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80166F58 00164038  EC 22 00 72 */	fmuls f1, f2, f1
/* 80166F5C 0016403C  EC 3D 0F 78 */	fmsubs f1, f29, f29, f1
/* 80166F60 00164040  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80166F64 00164044  4C 41 13 82 */	cror eq, gt, eq
/* 80166F68 00164048  40 82 00 28 */	bne .L_80166F90
/* 80166F6C 0016404C  4B EA 38 91 */	bl xsqrt__Ff
/* 80166F70 00164050  FC 60 E8 50 */	fneg f3, f29
/* 80166F74 00164054  C0 02 A9 D8 */	lfs f0, "@891"@sda21(r2)
/* 80166F78 00164058  EC 80 07 B2 */	fmuls f4, f0, f30
/* 80166F7C 0016405C  EC 43 08 2A */	fadds f2, f3, f1
/* 80166F80 00164060  EC 03 08 28 */	fsubs f0, f3, f1
/* 80166F84 00164064  EF C2 20 24 */	fdivs f30, f2, f4
/* 80166F88 00164068  EC 00 20 24 */	fdivs f0, f0, f4
/* 80166F8C 0016406C  48 00 00 08 */	b .L_80166F94
.L_80166F90:
/* 80166F90 00164070  FF C0 00 90 */	fmr f30, f0
.L_80166F94:
/* 80166F94 00164074  FC 00 F0 40 */	fcmpo cr0, f0, f30
/* 80166F98 00164078  40 81 00 08 */	ble .L_80166FA0
/* 80166F9C 0016407C  FF C0 00 90 */	fmr f30, f0
.L_80166FA0:
/* 80166FA0 00164080  38 7D 00 64 */	addi r3, r29, 0x64
/* 80166FA4 00164084  38 81 00 14 */	addi r4, r1, 0x14
/* 80166FA8 00164088  4B EE 75 35 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 80166FAC 0016408C  FC 20 F0 90 */	fmr f1, f30
/* 80166FB0 00164090  38 7D 00 64 */	addi r3, r29, 0x64
/* 80166FB4 00164094  38 81 00 2C */	addi r4, r1, 0x2c
/* 80166FB8 00164098  4B EA E0 A1 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 80166FBC 0016409C  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80166FC0 001640A0  38 61 00 08 */	addi r3, r1, 0x8
/* 80166FC4 001640A4  D0 1D 00 68 */	stfs f0, 0x68(r29)
/* 80166FC8 001640A8  C0 1D 00 64 */	lfs f0, 0x64(r29)
/* 80166FCC 001640AC  C0 3D 00 6C */	lfs f1, 0x6c(r29)
/* 80166FD0 001640B0  FC 60 00 50 */	fneg f3, f0
/* 80166FD4 001640B4  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80166FD8 001640B8  4B EA 80 25 */	bl xVec3Init__FP5xVec3fff
/* 80166FDC 001640BC  3B 7D 00 0C */	addi r27, r29, 0xc
/* 80166FE0 001640C0  3B 40 00 01 */	li r26, 0x1
/* 80166FE4 001640C4  3F 80 43 30 */	lis r28, 0x4330
.L_80166FE8:
/* 80166FE8 001640C8  6F 40 80 00 */	xoris r0, r26, 0x8000
/* 80166FEC 001640CC  93 81 00 48 */	stw r28, 0x48(r1)
/* 80166FF0 001640D0  C8 42 A9 D0 */	lfd f2, "@875"@sda21(r2)
/* 80166FF4 001640D4  90 01 00 4C */	stw r0, 0x4c(r1)
/* 80166FF8 001640D8  C0 62 AA 58 */	lfs f3, "@1666"@sda21(r2)
/* 80166FFC 001640DC  C8 21 00 48 */	lfd f1, 0x48(r1)
/* 80167000 001640E0  C0 02 AA 50 */	lfs f0, "@1664"@sda21(r2)
/* 80167004 001640E4  EC 21 10 28 */	fsubs f1, f1, f2
/* 80167008 001640E8  EC 23 00 72 */	fmuls f1, f3, f1
/* 8016700C 001640EC  EF C1 00 32 */	fmuls f30, f1, f0
/* 80167010 001640F0  FC 20 F0 90 */	fmr f1, f30
/* 80167014 001640F4  4B F5 DE 7D */	bl icos__Ff
/* 80167018 001640F8  38 7B 00 64 */	addi r3, r27, 0x64
/* 8016701C 001640FC  38 9D 00 64 */	addi r4, r29, 0x64
/* 80167020 00164100  4B EA 40 71 */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 80167024 00164104  FC 20 F0 90 */	fmr f1, f30
/* 80167028 00164108  4B F5 DE 25 */	bl isin__Ff
/* 8016702C 0016410C  38 7B 00 64 */	addi r3, r27, 0x64
/* 80167030 00164110  38 81 00 08 */	addi r4, r1, 0x8
/* 80167034 00164114  4B EA E0 25 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 80167038 00164118  3B 5A 00 01 */	addi r26, r26, 0x1
/* 8016703C 0016411C  3B 7B 00 0C */	addi r27, r27, 0xc
/* 80167040 00164120  2C 1A 00 04 */	cmpwi r26, 0x4
/* 80167044 00164124  41 80 FF A4 */	blt .L_80166FE8
/* 80167048 00164128  38 00 00 00 */	li r0, 0x0
/* 8016704C 0016412C  FC 20 F8 90 */	fmr f1, f31
/* 80167050 00164130  90 1D 00 94 */	stw r0, 0x94(r29)
/* 80167054 00164134  7F A3 EB 78 */	mr r3, r29
/* 80167058 00164138  7F C4 F3 78 */	mr r4, r30
/* 8016705C 0016413C  80 BF 18 F4 */	lwz r5, 0x18f4(r31)
/* 80167060 00164140  38 05 00 01 */	addi r0, r5, 0x1
/* 80167064 00164144  90 1F 18 F4 */	stw r0, 0x18f4(r31)
/* 80167068 00164148  4B F6 E0 AD */	bl Enter__14zNPCGoalCommonFfPv
/* 8016706C 0016414C  E3 E1 00 98 */	psq_l f31, 0x98(r1), 0, qr0
/* 80167070 00164150  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 80167074 00164154  E3 C1 00 88 */	psq_l f30, 0x88(r1), 0, qr0
/* 80167078 00164158  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 8016707C 0016415C  E3 A1 00 78 */	psq_l f29, 0x78(r1), 0, qr0
/* 80167080 00164160  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 80167084 00164164  BB 41 00 58 */	lmw r26, 0x58(r1)
/* 80167088 00164168  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 8016708C 0016416C  7C 08 03 A6 */	mtlr r0
/* 80167090 00164170  38 21 00 A0 */	addi r1, r1, 0xa0
/* 80167094 00164174  4E 80 00 20 */	blr
.endfn Enter__19zNPCGoalBossPatSpinFfPv

# zNPCGoalBossPatSpin::Process(en_trantype*, float, void*, xScene*)
.fn Process__19zNPCGoalBossPatSpinFP11en_trantypefPvP6xScene, global
/* 80167098 00164178  94 21 FE C0 */	stwu r1, -0x140(r1)
/* 8016709C 0016417C  7C 08 02 A6 */	mflr r0
/* 801670A0 00164180  90 01 01 44 */	stw r0, 0x144(r1)
/* 801670A4 00164184  DB E1 01 30 */	stfd f31, 0x130(r1)
/* 801670A8 00164188  F3 E1 01 38 */	psq_st f31, 0x138(r1), 0, qr0
/* 801670AC 0016418C  DB C1 01 20 */	stfd f30, 0x120(r1)
/* 801670B0 00164190  F3 C1 01 28 */	psq_st f30, 0x128(r1), 0, qr0
/* 801670B4 00164194  BF 01 01 00 */	stmw r24, 0x100(r1)
/* 801670B8 00164198  FF C0 08 90 */	fmr f30, f1
/* 801670BC 0016419C  7C 78 1B 78 */	mr r24, r3
/* 801670C0 001641A0  7C 99 23 78 */	mr r25, r4
/* 801670C4 001641A4  7C BA 2B 78 */	mr r26, r5
/* 801670C8 001641A8  7C DB 33 78 */	mr r27, r6
/* 801670CC 001641AC  4B FA 79 C9 */	bl GetOwner__5xGoalCFv
/* 801670D0 001641B0  C0 18 00 4C */	lfs f0, 0x4c(r24)
/* 801670D4 001641B4  7C 7D 1B 78 */	mr r29, r3
/* 801670D8 001641B8  EC 00 F0 2A */	fadds f0, f0, f30
/* 801670DC 001641BC  D0 18 00 4C */	stfs f0, 0x4c(r24)
/* 801670E0 001641C0  80 18 00 50 */	lwz r0, 0x50(r24)
/* 801670E4 001641C4  28 00 00 06 */	cmplwi r0, 0x6
/* 801670E8 001641C8  41 81 0F 70 */	bgt .L_80168058
/* 801670EC 001641CC  3C 80 80 2A */	lis r4, "@2886"@ha
/* 801670F0 001641D0  54 00 10 3A */	slwi r0, r0, 2
/* 801670F4 001641D4  38 84 AC 30 */	addi r4, r4, "@2886"@l
/* 801670F8 001641D8  7C 04 00 2E */	lwzx r0, r4, r0
/* 801670FC 001641DC  7C 09 03 A6 */	mtctr r0
/* 80167100 001641E0  4E 80 04 20 */	bctr
.L_80167104:
/* 80167104 001641E4  38 80 00 00 */	li r4, 0x0
/* 80167108 001641E8  4B F8 BF 71 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 8016710C 001641EC  C0 02 AA B4 */	lfs f0, "@2280"@sda21(r2)
/* 80167110 001641F0  EC 00 07 B2 */	fmuls f0, f0, f30
/* 80167114 001641F4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80167118 001641F8  40 80 0F 40 */	bge .L_80168058
/* 8016711C 001641FC  38 00 00 01 */	li r0, 0x1
/* 80167120 00164200  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80167124 00164204  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 80167128 00164208  90 18 00 50 */	stw r0, 0x50(r24)
/* 8016712C 0016420C  38 63 06 5E */	addi r3, r3, 0x65e
/* 80167130 00164210  4B EE 50 E5 */	bl xStrHash__FPCc
/* 80167134 00164214  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80167138 00164218  7F A6 EB 78 */	mr r6, r29
/* 8016713C 0016421C  C0 22 AA E0 */	lfs f1, "@2610"@sda21(r2)
/* 80167140 00164220  38 80 00 00 */	li r4, 0x0
/* 80167144 00164224  FC A0 10 90 */	fmr f5, f2
/* 80167148 00164228  C0 62 AA 24 */	lfs f3, "@1142"@sda21(r2)
/* 8016714C 0016422C  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 80167150 00164230  38 A0 00 00 */	li r5, 0x0
/* 80167154 00164234  38 E0 00 00 */	li r7, 0x0
/* 80167158 00164238  4B EE 19 0D */	bl xSndPlay3D__FUiffUiUiP4xEntff14sound_categoryf
/* 8016715C 0016423C  3C 80 80 27 */	lis r4, "@stringBase0"@ha
/* 80167160 00164240  90 78 00 98 */	stw r3, 0x98(r24)
/* 80167164 00164244  38 64 08 9C */	addi r3, r4, "@stringBase0"@l
/* 80167168 00164248  38 63 06 70 */	addi r3, r3, 0x670
/* 8016716C 0016424C  4B EE 50 A9 */	bl xStrHash__FPCc
/* 80167170 00164250  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80167174 00164254  7F A6 EB 78 */	mr r6, r29
/* 80167178 00164258  C0 22 AA E0 */	lfs f1, "@2610"@sda21(r2)
/* 8016717C 0016425C  38 80 00 00 */	li r4, 0x0
/* 80167180 00164260  FC A0 10 90 */	fmr f5, f2
/* 80167184 00164264  C0 62 AA 24 */	lfs f3, "@1142"@sda21(r2)
/* 80167188 00164268  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 8016718C 0016426C  38 A0 00 00 */	li r5, 0x0
/* 80167190 00164270  38 E0 00 00 */	li r7, 0x0
/* 80167194 00164274  4B EE 18 D1 */	bl xSndPlay3D__FUiffUiUiP4xEntff14sound_categoryf
/* 80167198 00164278  90 78 00 9C */	stw r3, 0x9c(r24)
/* 8016719C 0016427C  7F 03 C3 78 */	mr r3, r24
/* 801671A0 00164280  38 80 00 20 */	li r4, 0x20
/* 801671A4 00164284  38 A0 00 00 */	li r5, 0x0
/* 801671A8 00164288  80 1D 02 B4 */	lwz r0, 0x2b4(r29)
/* 801671AC 0016428C  60 00 00 01 */	ori r0, r0, 0x1
/* 801671B0 00164290  90 1D 02 B4 */	stw r0, 0x2b4(r29)
/* 801671B4 00164294  4B F6 E1 65 */	bl DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi
/* 801671B8 00164298  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801671BC 0016429C  D0 18 00 4C */	stfs f0, 0x4c(r24)
/* 801671C0 001642A0  80 1D 18 E8 */	lwz r0, 0x18e8(r29)
/* 801671C4 001642A4  54 00 04 E7 */	rlwinm. r0, r0, 0, 19, 19
/* 801671C8 001642A8  40 82 00 3C */	bne .L_80167204
/* 801671CC 001642AC  80 7D 18 E4 */	lwz r3, 0x18e4(r29)
/* 801671D0 001642B0  3C 80 80 2A */	lis r4, sNFComment@ha
/* 801671D4 001642B4  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 801671D8 001642B8  38 A0 00 00 */	li r5, 0x0
/* 801671DC 001642BC  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 801671E0 001642C0  38 C0 FF FF */	li r6, -0x1
/* 801671E4 001642C4  80 84 00 DC */	lwz r4, 0xdc(r4)
/* 801671E8 001642C8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801671EC 001642CC  7D 89 03 A6 */	mtctr r12
/* 801671F0 001642D0  4E 80 04 21 */	bctrl
/* 801671F4 001642D4  80 1D 18 E8 */	lwz r0, 0x18e8(r29)
/* 801671F8 001642D8  60 00 10 00 */	ori r0, r0, 0x1000
/* 801671FC 001642DC  90 1D 18 E8 */	stw r0, 0x18e8(r29)
/* 80167200 001642E0  48 00 0E 58 */	b .L_80168058
.L_80167204:
/* 80167204 001642E4  4B EC 9A 65 */	bl xrand__Fv
/* 80167208 001642E8  54 60 05 AF */	rlwinm. r0, r3, 0, 22, 23
/* 8016720C 001642EC  40 82 0E 4C */	bne .L_80168058
/* 80167210 001642F0  80 7D 18 E4 */	lwz r3, 0x18e4(r29)
/* 80167214 001642F4  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80167218 001642F8  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 8016721C 001642FC  38 A0 00 00 */	li r5, 0x0
/* 80167220 00164300  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80167224 00164304  38 C0 FF FF */	li r6, -0x1
/* 80167228 00164308  80 84 00 AC */	lwz r4, 0xac(r4)
/* 8016722C 0016430C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80167230 00164310  7D 89 03 A6 */	mtctr r12
/* 80167234 00164314  4E 80 04 21 */	bctrl
/* 80167238 00164318  48 00 0E 20 */	b .L_80168058
.L_8016723C:
/* 8016723C 0016431C  80 1D 02 BC */	lwz r0, 0x2bc(r29)
/* 80167240 00164320  2C 00 00 03 */	cmpwi r0, 0x3
/* 80167244 00164324  41 82 00 54 */	beq .L_80167298
/* 80167248 00164328  3C 60 80 3C */	lis r3, globals@ha
/* 8016724C 0016432C  80 BD 00 24 */	lwz r5, 0x24(r29)
/* 80167250 00164330  38 83 05 58 */	addi r4, r3, globals@l
/* 80167254 00164334  38 61 00 5C */	addi r3, r1, 0x5c
/* 80167258 00164338  80 84 07 04 */	lwz r4, 0x704(r4)
/* 8016725C 0016433C  80 C5 00 4C */	lwz r6, 0x4c(r5)
/* 80167260 00164340  80 A4 00 4C */	lwz r5, 0x4c(r4)
/* 80167264 00164344  38 86 00 30 */	addi r4, r6, 0x30
/* 80167268 00164348  38 A5 00 30 */	addi r5, r5, 0x30
/* 8016726C 0016434C  4B EA 74 25 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 80167270 00164350  80 9D 00 24 */	lwz r4, 0x24(r29)
/* 80167274 00164354  38 61 00 5C */	addi r3, r1, 0x5c
/* 80167278 00164358  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8016727C 0016435C  38 84 00 30 */	addi r4, r4, 0x30
/* 80167280 00164360  4B EA 74 D5 */	bl xVec3AddTo__FP5xVec3PC5xVec3
/* 80167284 00164364  FC 40 F0 90 */	fmr f2, f30
/* 80167288 00164368  C0 22 AA 74 */	lfs f1, "@1673"@sda21(r2)
/* 8016728C 0016436C  7F A3 EB 78 */	mr r3, r29
/* 80167290 00164370  38 81 00 5C */	addi r4, r1, 0x5c
/* 80167294 00164374  4B FF E1 75 */	bl Pat_FaceTarget__FP12zNPCBPatrickPC5xVec3ff
.L_80167298:
/* 80167298 00164378  C0 22 A9 C4 */	lfs f1, "@832"@sda21(r2)
/* 8016729C 0016437C  38 61 00 50 */	addi r3, r1, 0x50
/* 801672A0 00164380  FC 40 08 90 */	fmr f2, f1
/* 801672A4 00164384  FC 60 08 90 */	fmr f3, f1
/* 801672A8 00164388  4B EA 7D 55 */	bl xVec3Init__FP5xVec3fff
/* 801672AC 0016438C  80 9D 00 24 */	lwz r4, 0x24(r29)
/* 801672B0 00164390  3C 60 80 2A */	lis r3, sBone@ha
/* 801672B4 00164394  38 A3 AA 68 */	addi r5, r3, sBone@l
/* 801672B8 00164398  38 61 00 44 */	addi r3, r1, 0x44
/* 801672BC 0016439C  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 801672C0 001643A0  38 C1 00 50 */	addi r6, r1, 0x50
/* 801672C4 001643A4  80 A5 00 00 */	lwz r5, 0x0(r5)
/* 801672C8 001643A8  4B FF 96 9D */	bl GetBonePos__FP5xVec3P7xMat4x3iP5xVec3
/* 801672CC 001643AC  80 9D 00 24 */	lwz r4, 0x24(r29)
/* 801672D0 001643B0  3C 60 80 2A */	lis r3, sBone@ha
/* 801672D4 001643B4  38 A3 AA 68 */	addi r5, r3, sBone@l
/* 801672D8 001643B8  38 61 00 38 */	addi r3, r1, 0x38
/* 801672DC 001643BC  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 801672E0 001643C0  38 C1 00 50 */	addi r6, r1, 0x50
/* 801672E4 001643C4  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 801672E8 001643C8  4B FF 96 7D */	bl GetBonePos__FP5xVec3P7xMat4x3iP5xVec3
/* 801672EC 001643CC  C0 02 A9 CC */	lfs f0, "@870"@sda21(r2)
/* 801672F0 001643D0  3C 60 80 2A */	lis r3, sBone@ha
/* 801672F4 001643D4  38 83 AA 68 */	addi r4, r3, sBone@l
/* 801672F8 001643D8  38 61 00 2C */	addi r3, r1, 0x2c
/* 801672FC 001643DC  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 80167300 001643E0  38 C1 00 50 */	addi r6, r1, 0x50
/* 80167304 001643E4  80 A4 00 00 */	lwz r5, 0x0(r4)
/* 80167308 001643E8  80 9D 00 24 */	lwz r4, 0x24(r29)
/* 8016730C 001643EC  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80167310 001643F0  4B FF 96 55 */	bl GetBonePos__FP5xVec3P7xMat4x3iP5xVec3
/* 80167314 001643F4  38 61 00 2C */	addi r3, r1, 0x2c
/* 80167318 001643F8  38 81 00 44 */	addi r4, r1, 0x44
/* 8016731C 001643FC  4B EB 46 45 */	bl xVec3SubFrom__FP5xVec3PC5xVec3
/* 80167320 00164400  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80167324 00164404  38 61 00 2C */	addi r3, r1, 0x2c
/* 80167328 00164408  7C 64 1B 78 */	mr r4, r3
/* 8016732C 0016440C  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80167330 00164410  4B EE 6F C1 */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 80167334 00164414  C0 22 AA 50 */	lfs f1, "@1664"@sda21(r2)
/* 80167338 00164418  C0 18 00 4C */	lfs f0, 0x4c(r24)
/* 8016733C 0016441C  C0 62 AA 58 */	lfs f3, "@1666"@sda21(r2)
/* 80167340 00164420  EC 21 00 32 */	fmuls f1, f1, f0
/* 80167344 00164424  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 80167348 00164428  40 81 00 34 */	ble .L_8016737C
/* 8016734C 0016442C  EC 01 18 24 */	fdivs f0, f1, f3
/* 80167350 00164430  3C 00 43 30 */	lis r0, 0x4330
/* 80167354 00164434  90 01 00 F0 */	stw r0, 0xf0(r1)
/* 80167358 00164438  C8 42 A9 D0 */	lfd f2, "@875"@sda21(r2)
/* 8016735C 0016443C  FC 00 00 1E */	fctiwz f0, f0
/* 80167360 00164440  D8 01 00 E8 */	stfd f0, 0xe8(r1)
/* 80167364 00164444  80 01 00 EC */	lwz r0, 0xec(r1)
/* 80167368 00164448  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8016736C 0016444C  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 80167370 00164450  C8 01 00 F0 */	lfd f0, 0xf0(r1)
/* 80167374 00164454  EC 00 10 28 */	fsubs f0, f0, f2
/* 80167378 00164458  EC 23 08 3C */	fnmsubs f1, f3, f0, f1
.L_8016737C:
/* 8016737C 0016445C  38 61 00 68 */	addi r3, r1, 0x68
/* 80167380 00164460  4B EC B1 5D */	bl xMat3x3RotY__FP7xMat3x3f
/* 80167384 00164464  3C 60 80 3C */	lis r3, globals@ha
/* 80167388 00164468  3B C1 00 AC */	addi r30, r1, 0xac
/* 8016738C 0016446C  3B E3 05 58 */	addi r31, r3, globals@l
.L_80167390:
/* 80167390 00164470  80 18 00 94 */	lwz r0, 0x94(r24)
/* 80167394 00164474  38 61 00 14 */	addi r3, r1, 0x14
/* 80167398 00164478  38 81 00 68 */	addi r4, r1, 0x68
/* 8016739C 0016447C  1C A0 00 0C */	mulli r5, r0, 0xc
/* 801673A0 00164480  38 A5 00 64 */	addi r5, r5, 0x64
/* 801673A4 00164484  7C B8 2A 14 */	add r5, r24, r5
/* 801673A8 00164488  48 00 16 85 */	bl xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3
/* 801673AC 0016448C  38 61 00 20 */	addi r3, r1, 0x20
/* 801673B0 00164490  38 81 00 14 */	addi r4, r1, 0x14
/* 801673B4 00164494  38 A1 00 38 */	addi r5, r1, 0x38
/* 801673B8 00164498  4B EA 72 D9 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 801673BC 0016449C  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 801673C0 001644A0  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 801673C4 001644A4  C0 61 00 2C */	lfs f3, 0x2c(r1)
/* 801673C8 001644A8  EC 21 00 32 */	fmuls f1, f1, f0
/* 801673CC 001644AC  C0 41 00 28 */	lfs f2, 0x28(r1)
/* 801673D0 001644B0  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801673D4 001644B4  EF E3 08 B8 */	fmsubs f31, f3, f2, f1
/* 801673D8 001644B8  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 801673DC 001644BC  40 81 01 E4 */	ble .L_801675C0
/* 801673E0 001644C0  7F A3 EB 78 */	mr r3, r29
/* 801673E4 001644C4  4B FF C9 7D */	bl getNextFreeGlob__12zNPCBPatrickFv
/* 801673E8 001644C8  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801673EC 001644CC  7C 7C 1B 78 */	mr r28, r3
/* 801673F0 001644D0  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 801673F4 001644D4  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801673F8 001644D8  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 801673FC 001644DC  4B EC 98 8D */	bl xurand__Fv
/* 80167400 001644E0  C0 42 AA 88 */	lfs f2, "@1678"@sda21(r2)
/* 80167404 001644E4  7F 83 E3 78 */	mr r3, r28
/* 80167408 001644E8  C0 02 A9 C0 */	lfs f0, "@831"@sda21(r2)
/* 8016740C 001644EC  38 81 00 38 */	addi r4, r1, 0x38
/* 80167410 001644F0  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80167414 001644F4  D0 1C 00 20 */	stfs f0, 0x20(r28)
/* 80167418 001644F8  C0 02 AA 08 */	lfs f0, "@1055"@sda21(r2)
/* 8016741C 001644FC  D0 1C 00 18 */	stfs f0, 0x18(r28)
/* 80167420 00164500  4B EE 70 BD */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 80167424 00164504  7F 84 E3 78 */	mr r4, r28
/* 80167428 00164508  38 7C 00 28 */	addi r3, r28, 0x28
/* 8016742C 0016450C  4B EE 70 B1 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 80167430 00164510  38 7C 00 0C */	addi r3, r28, 0xc
/* 80167434 00164514  38 81 00 20 */	addi r4, r1, 0x20
/* 80167438 00164518  4B EE 70 A5 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 8016743C 0016451C  38 7C 00 0C */	addi r3, r28, 0xc
/* 80167440 00164520  7C 64 1B 78 */	mr r4, r3
/* 80167444 00164524  4B EE 6E AD */	bl xVec3Normalize__FP5xVec3PC5xVec3
/* 80167448 00164528  38 7C 00 0C */	addi r3, r28, 0xc
/* 8016744C 0016452C  38 98 00 58 */	addi r4, r24, 0x58
/* 80167450 00164530  4B EE 70 A1 */	bl xVec3Dot__FPC5xVec3PC5xVec3
/* 80167454 00164534  38 61 00 08 */	addi r3, r1, 0x8
/* 80167458 00164538  38 9C 00 0C */	addi r4, r28, 0xc
/* 8016745C 0016453C  4B EA 3C 35 */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 80167460 00164540  C0 3C 00 0C */	lfs f1, 0xc(r28)
/* 80167464 00164544  38 7C 00 0C */	addi r3, r28, 0xc
/* 80167468 00164548  C0 02 AA 24 */	lfs f0, "@1142"@sda21(r2)
/* 8016746C 0016454C  38 81 00 08 */	addi r4, r1, 0x8
/* 80167470 00164550  EC 01 00 32 */	fmuls f0, f1, f0
/* 80167474 00164554  D0 1C 00 0C */	stfs f0, 0xc(r28)
/* 80167478 00164558  C0 3C 00 10 */	lfs f1, 0x10(r28)
/* 8016747C 0016455C  C0 02 A9 F0 */	lfs f0, "@1049"@sda21(r2)
/* 80167480 00164560  EC 01 00 2A */	fadds f0, f1, f0
/* 80167484 00164564  D0 1C 00 10 */	stfs f0, 0x10(r28)
/* 80167488 00164568  C0 3C 00 14 */	lfs f1, 0x14(r28)
/* 8016748C 0016456C  C0 02 AA 24 */	lfs f0, "@1142"@sda21(r2)
/* 80167490 00164570  EC 01 00 32 */	fmuls f0, f1, f0
/* 80167494 00164574  D0 1C 00 14 */	stfs f0, 0x14(r28)
/* 80167498 00164578  C0 22 AA 50 */	lfs f1, "@1664"@sda21(r2)
/* 8016749C 0016457C  4B EA DB BD */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 801674A0 00164580  80 9F 1F C0 */	lwz r4, 0x1fc0(r31)
/* 801674A4 00164584  7F 83 E3 78 */	mr r3, r28
/* 801674A8 00164588  38 A1 00 98 */	addi r5, r1, 0x98
/* 801674AC 0016458C  80 84 00 44 */	lwz r4, 0x44(r4)
/* 801674B0 00164590  4B EA 8B 39 */	bl xParabolaHitsEnv__FP9xParabolaPC4xEnvP7xCollis
/* 801674B4 00164594  80 01 00 98 */	lwz r0, 0x98(r1)
/* 801674B8 00164598  54 00 07 FF */	clrlwi. r0, r0, 31
/* 801674BC 0016459C  41 82 00 24 */	beq .L_801674E0
/* 801674C0 001645A0  C0 01 00 A8 */	lfs f0, 0xa8(r1)
/* 801674C4 001645A4  7F C4 F3 78 */	mr r4, r30
/* 801674C8 001645A8  38 7C 00 34 */	addi r3, r28, 0x34
/* 801674CC 001645AC  D0 1C 00 20 */	stfs f0, 0x20(r28)
/* 801674D0 001645B0  4B EE 70 0D */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 801674D4 001645B4  80 1C 00 50 */	lwz r0, 0x50(r28)
/* 801674D8 001645B8  60 00 00 02 */	ori r0, r0, 0x2
/* 801674DC 001645BC  90 1C 00 50 */	stw r0, 0x50(r28)
.L_801674E0:
/* 801674E0 001645C0  80 01 00 98 */	lwz r0, 0x98(r1)
/* 801674E4 001645C4  7F A3 EB 78 */	mr r3, r29
/* 801674E8 001645C8  7F 84 E3 78 */	mr r4, r28
/* 801674EC 001645CC  38 A1 00 98 */	addi r5, r1, 0x98
/* 801674F0 001645D0  54 00 00 3C */	clrrwi r0, r0, 1
/* 801674F4 001645D4  90 01 00 98 */	stw r0, 0x98(r1)
/* 801674F8 001645D8  4B FF D0 55 */	bl ParabolaHitsConveyors__12zNPCBPatrickFP9xParabolaP7xCollis
/* 801674FC 001645DC  80 01 00 98 */	lwz r0, 0x98(r1)
/* 80167500 001645E0  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80167504 001645E4  41 82 00 9C */	beq .L_801675A0
/* 80167508 001645E8  C0 01 00 A8 */	lfs f0, 0xa8(r1)
/* 8016750C 001645EC  D0 1C 00 20 */	stfs f0, 0x20(r28)
/* 80167510 001645F0  80 1C 00 50 */	lwz r0, 0x50(r28)
/* 80167514 001645F4  60 00 00 02 */	ori r0, r0, 0x2
/* 80167518 001645F8  90 1C 00 50 */	stw r0, 0x50(r28)
/* 8016751C 001645FC  C0 21 00 B8 */	lfs f1, 0xb8(r1)
/* 80167520 00164600  C0 02 AA 8C */	lfs f0, "@1679"@sda21(r2)
/* 80167524 00164604  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80167528 00164608  40 80 00 64 */	bge .L_8016758C
/* 8016752C 0016460C  C0 02 AA 90 */	lfs f0, "@1680"@sda21(r2)
/* 80167530 00164610  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80167534 00164614  40 81 00 58 */	ble .L_8016758C
/* 80167538 00164618  C0 21 00 C0 */	lfs f1, 0xc0(r1)
/* 8016753C 0016461C  C0 02 AA 94 */	lfs f0, "@1681"@sda21(r2)
/* 80167540 00164620  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80167544 00164624  40 81 00 48 */	ble .L_8016758C
/* 80167548 00164628  80 1C 00 50 */	lwz r0, 0x50(r28)
/* 8016754C 0016462C  38 7C 00 34 */	addi r3, r28, 0x34
/* 80167550 00164630  60 00 00 08 */	ori r0, r0, 0x8
/* 80167554 00164634  90 1C 00 50 */	stw r0, 0x50(r28)
/* 80167558 00164638  C0 22 A9 C4 */	lfs f1, "@832"@sda21(r2)
/* 8016755C 0016463C  C0 42 A9 C0 */	lfs f2, "@831"@sda21(r2)
/* 80167560 00164640  FC 60 08 90 */	fmr f3, f1
/* 80167564 00164644  4B EA 7A 99 */	bl xVec3Init__FP5xVec3fff
/* 80167568 00164648  80 01 00 A0 */	lwz r0, 0xa0(r1)
/* 8016756C 0016464C  38 7C 00 40 */	addi r3, r28, 0x40
/* 80167570 00164650  90 1C 00 4C */	stw r0, 0x4c(r28)
/* 80167574 00164654  80 9C 00 4C */	lwz r4, 0x4c(r28)
/* 80167578 00164658  80 A4 00 D4 */	lwz r5, 0xd4(r4)
/* 8016757C 0016465C  80 84 00 AC */	lwz r4, 0xac(r4)
/* 80167580 00164660  C0 25 00 04 */	lfs f1, 0x4(r5)
/* 80167584 00164664  4B EA 3B 0D */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 80167588 00164668  48 00 00 18 */	b .L_801675A0
.L_8016758C:
/* 8016758C 0016466C  C0 22 A9 C4 */	lfs f1, "@832"@sda21(r2)
/* 80167590 00164670  38 7C 00 34 */	addi r3, r28, 0x34
/* 80167594 00164674  C0 42 A9 CC */	lfs f2, "@870"@sda21(r2)
/* 80167598 00164678  FC 60 08 90 */	fmr f3, f1
/* 8016759C 0016467C  4B EA 7A 61 */	bl xVec3Init__FP5xVec3fff
.L_801675A0:
/* 801675A0 00164680  80 78 00 94 */	lwz r3, 0x94(r24)
/* 801675A4 00164684  38 03 00 01 */	addi r0, r3, 0x1
/* 801675A8 00164688  90 18 00 94 */	stw r0, 0x94(r24)
/* 801675AC 0016468C  80 18 00 94 */	lwz r0, 0x94(r24)
/* 801675B0 00164690  2C 00 00 04 */	cmpwi r0, 0x4
/* 801675B4 00164694  41 80 00 0C */	blt .L_801675C0
/* 801675B8 00164698  38 00 00 00 */	li r0, 0x0
/* 801675BC 0016469C  90 18 00 94 */	stw r0, 0x94(r24)
.L_801675C0:
/* 801675C0 001646A0  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801675C4 001646A4  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 801675C8 001646A8  41 81 FD C8 */	bgt .L_80167390
/* 801675CC 001646AC  80 7D 00 48 */	lwz r3, 0x48(r29)
/* 801675D0 001646B0  FC 20 F0 90 */	fmr f1, f30
/* 801675D4 001646B4  38 98 00 58 */	addi r4, r24, 0x58
/* 801675D8 001646B8  38 63 00 30 */	addi r3, r3, 0x30
/* 801675DC 001646BC  4B EA DA 7D */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 801675E0 001646C0  80 7D 00 48 */	lwz r3, 0x48(r29)
/* 801675E4 001646C4  C0 1D 02 D8 */	lfs f0, 0x2d8(r29)
/* 801675E8 001646C8  C0 23 00 30 */	lfs f1, 0x30(r3)
/* 801675EC 001646CC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801675F0 001646D0  40 81 00 48 */	ble .L_80167638
/* 801675F4 001646D4  C0 38 00 58 */	lfs f1, 0x58(r24)
/* 801675F8 001646D8  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801675FC 001646DC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80167600 001646E0  40 81 00 38 */	ble .L_80167638
/* 80167604 001646E4  4B EC 96 85 */	bl xurand__Fv
/* 80167608 001646E8  C0 58 00 58 */	lfs f2, 0x58(r24)
/* 8016760C 001646EC  C0 02 A9 E4 */	lfs f0, "@1046"@sda21(r2)
/* 80167610 001646F0  FC 40 10 50 */	fneg f2, f2
/* 80167614 001646F4  EC 22 08 2A */	fadds f1, f2, f1
/* 80167618 001646F8  EC 01 00 28 */	fsubs f0, f1, f0
/* 8016761C 001646FC  D0 18 00 58 */	stfs f0, 0x58(r24)
/* 80167620 00164700  4B EC 96 69 */	bl xurand__Fv
/* 80167624 00164704  C0 58 00 60 */	lfs f2, 0x60(r24)
/* 80167628 00164708  C0 02 A9 E4 */	lfs f0, "@1046"@sda21(r2)
/* 8016762C 0016470C  EC 22 08 2A */	fadds f1, f2, f1
/* 80167630 00164710  EC 01 00 28 */	fsubs f0, f1, f0
/* 80167634 00164714  D0 18 00 60 */	stfs f0, 0x60(r24)
.L_80167638:
/* 80167638 00164718  80 7D 00 48 */	lwz r3, 0x48(r29)
/* 8016763C 0016471C  C0 1D 02 E0 */	lfs f0, 0x2e0(r29)
/* 80167640 00164720  C0 23 00 38 */	lfs f1, 0x38(r3)
/* 80167644 00164724  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80167648 00164728  40 81 00 48 */	ble .L_80167690
/* 8016764C 0016472C  C0 38 00 60 */	lfs f1, 0x60(r24)
/* 80167650 00164730  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80167654 00164734  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80167658 00164738  40 81 00 38 */	ble .L_80167690
/* 8016765C 0016473C  4B EC 96 2D */	bl xurand__Fv
/* 80167660 00164740  C0 58 00 60 */	lfs f2, 0x60(r24)
/* 80167664 00164744  C0 02 A9 E4 */	lfs f0, "@1046"@sda21(r2)
/* 80167668 00164748  FC 40 10 50 */	fneg f2, f2
/* 8016766C 0016474C  EC 22 08 2A */	fadds f1, f2, f1
/* 80167670 00164750  EC 01 00 28 */	fsubs f0, f1, f0
/* 80167674 00164754  D0 18 00 60 */	stfs f0, 0x60(r24)
/* 80167678 00164758  4B EC 96 11 */	bl xurand__Fv
/* 8016767C 0016475C  C0 58 00 58 */	lfs f2, 0x58(r24)
/* 80167680 00164760  C0 02 A9 E4 */	lfs f0, "@1046"@sda21(r2)
/* 80167684 00164764  EC 22 08 2A */	fadds f1, f2, f1
/* 80167688 00164768  EC 01 00 28 */	fsubs f0, f1, f0
/* 8016768C 0016476C  D0 18 00 58 */	stfs f0, 0x58(r24)
.L_80167690:
/* 80167690 00164770  C0 1D 02 D8 */	lfs f0, 0x2d8(r29)
/* 80167694 00164774  80 7D 00 48 */	lwz r3, 0x48(r29)
/* 80167698 00164778  FC 00 00 50 */	fneg f0, f0
/* 8016769C 0016477C  C0 23 00 30 */	lfs f1, 0x30(r3)
/* 801676A0 00164780  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801676A4 00164784  40 80 00 48 */	bge .L_801676EC
/* 801676A8 00164788  C0 38 00 58 */	lfs f1, 0x58(r24)
/* 801676AC 0016478C  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801676B0 00164790  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801676B4 00164794  40 80 00 38 */	bge .L_801676EC
/* 801676B8 00164798  4B EC 95 D1 */	bl xurand__Fv
/* 801676BC 0016479C  C0 58 00 58 */	lfs f2, 0x58(r24)
/* 801676C0 001647A0  C0 02 A9 E4 */	lfs f0, "@1046"@sda21(r2)
/* 801676C4 001647A4  FC 40 10 50 */	fneg f2, f2
/* 801676C8 001647A8  EC 22 08 2A */	fadds f1, f2, f1
/* 801676CC 001647AC  EC 01 00 28 */	fsubs f0, f1, f0
/* 801676D0 001647B0  D0 18 00 58 */	stfs f0, 0x58(r24)
/* 801676D4 001647B4  4B EC 95 B5 */	bl xurand__Fv
/* 801676D8 001647B8  C0 58 00 60 */	lfs f2, 0x60(r24)
/* 801676DC 001647BC  C0 02 A9 E4 */	lfs f0, "@1046"@sda21(r2)
/* 801676E0 001647C0  EC 22 08 2A */	fadds f1, f2, f1
/* 801676E4 001647C4  EC 01 00 28 */	fsubs f0, f1, f0
/* 801676E8 001647C8  D0 18 00 60 */	stfs f0, 0x60(r24)
.L_801676EC:
/* 801676EC 001647CC  C0 1D 02 E0 */	lfs f0, 0x2e0(r29)
/* 801676F0 001647D0  80 7D 00 48 */	lwz r3, 0x48(r29)
/* 801676F4 001647D4  FC 00 00 50 */	fneg f0, f0
/* 801676F8 001647D8  C0 23 00 38 */	lfs f1, 0x38(r3)
/* 801676FC 001647DC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80167700 001647E0  40 80 00 48 */	bge .L_80167748
/* 80167704 001647E4  C0 38 00 60 */	lfs f1, 0x60(r24)
/* 80167708 001647E8  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 8016770C 001647EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80167710 001647F0  40 80 00 38 */	bge .L_80167748
/* 80167714 001647F4  4B EC 95 75 */	bl xurand__Fv
/* 80167718 001647F8  C0 58 00 60 */	lfs f2, 0x60(r24)
/* 8016771C 001647FC  C0 02 A9 E4 */	lfs f0, "@1046"@sda21(r2)
/* 80167720 00164800  FC 40 10 50 */	fneg f2, f2
/* 80167724 00164804  EC 22 08 2A */	fadds f1, f2, f1
/* 80167728 00164808  EC 01 00 28 */	fsubs f0, f1, f0
/* 8016772C 0016480C  D0 18 00 60 */	stfs f0, 0x60(r24)
/* 80167730 00164810  4B EC 95 59 */	bl xurand__Fv
/* 80167734 00164814  C0 58 00 58 */	lfs f2, 0x58(r24)
/* 80167738 00164818  C0 02 A9 E4 */	lfs f0, "@1046"@sda21(r2)
/* 8016773C 0016481C  EC 22 08 2A */	fadds f1, f2, f1
/* 80167740 00164820  EC 01 00 28 */	fsubs f0, f1, f0
/* 80167744 00164824  D0 18 00 58 */	stfs f0, 0x58(r24)
.L_80167748:
/* 80167748 00164828  7F A3 EB 78 */	mr r3, r29
/* 8016774C 0016482C  38 80 00 00 */	li r4, 0x0
/* 80167750 00164830  4B F8 B9 29 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 80167754 00164834  C0 02 AA B4 */	lfs f0, "@2280"@sda21(r2)
/* 80167758 00164838  EC 00 07 B2 */	fmuls f0, f0, f30
/* 8016775C 0016483C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80167760 00164840  40 80 08 F8 */	bge .L_80168058
/* 80167764 00164844  80 1D 02 B4 */	lwz r0, 0x2b4(r29)
/* 80167768 00164848  54 00 07 BD */	rlwinm. r0, r0, 0, 30, 30
/* 8016776C 0016484C  41 82 00 44 */	beq .L_801677B0
/* 80167770 00164850  38 00 00 02 */	li r0, 0x2
/* 80167774 00164854  90 18 00 50 */	stw r0, 0x50(r24)
/* 80167778 00164858  80 78 00 98 */	lwz r3, 0x98(r24)
/* 8016777C 0016485C  4B EE 1A 85 */	bl xSndStop__FUi
/* 80167780 00164860  80 78 00 9C */	lwz r3, 0x9c(r24)
/* 80167784 00164864  4B EE 1A 7D */	bl xSndStop__FUi
/* 80167788 00164868  80 1D 02 B4 */	lwz r0, 0x2b4(r29)
/* 8016778C 0016486C  7F 03 C3 78 */	mr r3, r24
/* 80167790 00164870  38 80 00 20 */	li r4, 0x20
/* 80167794 00164874  38 A0 00 00 */	li r5, 0x0
/* 80167798 00164878  60 00 00 40 */	ori r0, r0, 0x40
/* 8016779C 0016487C  90 1D 02 B4 */	stw r0, 0x2b4(r29)
/* 801677A0 00164880  4B F6 DB 79 */	bl DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi
/* 801677A4 00164884  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801677A8 00164888  D0 18 00 4C */	stfs f0, 0x4c(r24)
/* 801677AC 0016488C  48 00 08 AC */	b .L_80168058
.L_801677B0:
/* 801677B0 00164890  80 1D 02 BC */	lwz r0, 0x2bc(r29)
/* 801677B4 00164894  2C 00 00 01 */	cmpwi r0, 0x1
/* 801677B8 00164898  41 82 00 0C */	beq .L_801677C4
/* 801677BC 0016489C  2C 00 00 02 */	cmpwi r0, 0x2
/* 801677C0 001648A0  40 82 00 54 */	bne .L_80167814
.L_801677C4:
/* 801677C4 001648A4  C0 38 00 4C */	lfs f1, 0x4c(r24)
/* 801677C8 001648A8  C0 02 AA 08 */	lfs f0, "@1055"@sda21(r2)
/* 801677CC 001648AC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801677D0 001648B0  40 81 00 44 */	ble .L_80167814
/* 801677D4 001648B4  38 00 00 02 */	li r0, 0x2
/* 801677D8 001648B8  90 18 00 50 */	stw r0, 0x50(r24)
/* 801677DC 001648BC  80 78 00 98 */	lwz r3, 0x98(r24)
/* 801677E0 001648C0  4B EE 1A 21 */	bl xSndStop__FUi
/* 801677E4 001648C4  80 78 00 9C */	lwz r3, 0x9c(r24)
/* 801677E8 001648C8  4B EE 1A 19 */	bl xSndStop__FUi
/* 801677EC 001648CC  80 1D 02 B4 */	lwz r0, 0x2b4(r29)
/* 801677F0 001648D0  7F 03 C3 78 */	mr r3, r24
/* 801677F4 001648D4  38 80 00 20 */	li r4, 0x20
/* 801677F8 001648D8  38 A0 00 00 */	li r5, 0x0
/* 801677FC 001648DC  60 00 00 40 */	ori r0, r0, 0x40
/* 80167800 001648E0  90 1D 02 B4 */	stw r0, 0x2b4(r29)
/* 80167804 001648E4  4B F6 DB 15 */	bl DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi
/* 80167808 001648E8  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 8016780C 001648EC  D0 18 00 4C */	stfs f0, 0x4c(r24)
/* 80167810 001648F0  48 00 08 48 */	b .L_80168058
.L_80167814:
/* 80167814 001648F4  2C 00 00 03 */	cmpwi r0, 0x3
/* 80167818 001648F8  40 82 08 40 */	bne .L_80168058
/* 8016781C 001648FC  C0 38 00 4C */	lfs f1, 0x4c(r24)
/* 80167820 00164900  C0 02 AA 08 */	lfs f0, "@1055"@sda21(r2)
/* 80167824 00164904  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80167828 00164908  40 81 08 30 */	ble .L_80168058
/* 8016782C 0016490C  80 7D 00 24 */	lwz r3, 0x24(r29)
/* 80167830 00164910  80 BD 00 48 */	lwz r5, 0x48(r29)
/* 80167834 00164914  80 83 00 4C */	lwz r4, 0x4c(r3)
/* 80167838 00164918  38 65 00 30 */	addi r3, r5, 0x30
/* 8016783C 0016491C  38 84 00 20 */	addi r4, r4, 0x20
/* 80167840 00164920  4B EE 6C B1 */	bl xVec3Dot__FPC5xVec3PC5xVec3
/* 80167844 00164924  C0 42 AA C0 */	lfs f2, "@2424"@sda21(r2)
/* 80167848 00164928  C0 7D 02 D8 */	lfs f3, 0x2d8(r29)
/* 8016784C 0016492C  80 7D 00 48 */	lwz r3, 0x48(r29)
/* 80167850 00164930  EC 02 00 F2 */	fmuls f0, f2, f3
/* 80167854 00164934  C0 83 00 30 */	lfs f4, 0x30(r3)
/* 80167858 00164938  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8016785C 0016493C  41 81 00 38 */	bgt .L_80167894
/* 80167860 00164940  FC 00 18 50 */	fneg f0, f3
/* 80167864 00164944  EC 02 00 32 */	fmuls f0, f2, f0
/* 80167868 00164948  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8016786C 0016494C  41 80 00 28 */	blt .L_80167894
/* 80167870 00164950  C0 7D 02 E0 */	lfs f3, 0x2e0(r29)
/* 80167874 00164954  C0 83 00 38 */	lfs f4, 0x38(r3)
/* 80167878 00164958  EC 02 00 F2 */	fmuls f0, f2, f3
/* 8016787C 0016495C  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 80167880 00164960  41 81 00 14 */	bgt .L_80167894
/* 80167884 00164964  FC 00 18 50 */	fneg f0, f3
/* 80167888 00164968  EC 02 00 32 */	fmuls f0, f2, f0
/* 8016788C 0016496C  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 80167890 00164970  40 80 07 C8 */	bge .L_80168058
.L_80167894:
/* 80167894 00164974  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80167898 00164978  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8016789C 0016497C  40 80 07 BC */	bge .L_80168058
/* 801678A0 00164980  38 00 00 02 */	li r0, 0x2
/* 801678A4 00164984  90 18 00 50 */	stw r0, 0x50(r24)
/* 801678A8 00164988  80 78 00 98 */	lwz r3, 0x98(r24)
/* 801678AC 0016498C  4B EE 19 55 */	bl xSndStop__FUi
/* 801678B0 00164990  80 78 00 9C */	lwz r3, 0x9c(r24)
/* 801678B4 00164994  4B EE 19 4D */	bl xSndStop__FUi
/* 801678B8 00164998  80 1D 02 B4 */	lwz r0, 0x2b4(r29)
/* 801678BC 0016499C  7F 03 C3 78 */	mr r3, r24
/* 801678C0 001649A0  38 80 00 20 */	li r4, 0x20
/* 801678C4 001649A4  38 A0 00 00 */	li r5, 0x0
/* 801678C8 001649A8  60 00 00 40 */	ori r0, r0, 0x40
/* 801678CC 001649AC  90 1D 02 B4 */	stw r0, 0x2b4(r29)
/* 801678D0 001649B0  4B F6 DA 49 */	bl DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi
/* 801678D4 001649B4  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801678D8 001649B8  D0 18 00 4C */	stfs f0, 0x4c(r24)
/* 801678DC 001649BC  48 00 07 7C */	b .L_80168058
.L_801678E0:
/* 801678E0 001649C0  80 1D 02 B4 */	lwz r0, 0x2b4(r29)
/* 801678E4 001649C4  54 00 07 BD */	rlwinm. r0, r0, 0, 30, 30
/* 801678E8 001649C8  40 82 07 70 */	bne .L_80168058
/* 801678EC 001649CC  38 80 00 00 */	li r4, 0x0
/* 801678F0 001649D0  4B F8 B7 89 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 801678F4 001649D4  C0 02 AA B4 */	lfs f0, "@2280"@sda21(r2)
/* 801678F8 001649D8  EC 00 07 B2 */	fmuls f0, f0, f30
/* 801678FC 001649DC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80167900 001649E0  40 80 07 58 */	bge .L_80168058
/* 80167904 001649E4  38 00 00 03 */	li r0, 0x3
/* 80167908 001649E8  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 8016790C 001649EC  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 80167910 001649F0  90 18 00 50 */	stw r0, 0x50(r24)
/* 80167914 001649F4  38 63 06 88 */	addi r3, r3, 0x688
/* 80167918 001649F8  4B EE 48 FD */	bl xStrHash__FPCc
/* 8016791C 001649FC  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80167920 00164A00  7F A6 EB 78 */	mr r6, r29
/* 80167924 00164A04  C0 22 AA E0 */	lfs f1, "@2610"@sda21(r2)
/* 80167928 00164A08  38 80 00 00 */	li r4, 0x0
/* 8016792C 00164A0C  FC A0 10 90 */	fmr f5, f2
/* 80167930 00164A10  C0 62 AA 24 */	lfs f3, "@1142"@sda21(r2)
/* 80167934 00164A14  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 80167938 00164A18  38 A0 00 00 */	li r5, 0x0
/* 8016793C 00164A1C  38 E0 00 00 */	li r7, 0x0
/* 80167940 00164A20  4B EE 11 25 */	bl xSndPlay3D__FUiffUiUiP4xEntff14sound_categoryf
/* 80167944 00164A24  7F 03 C3 78 */	mr r3, r24
/* 80167948 00164A28  38 80 00 20 */	li r4, 0x20
/* 8016794C 00164A2C  38 A0 00 00 */	li r5, 0x0
/* 80167950 00164A30  4B F6 D9 C9 */	bl DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi
/* 80167954 00164A34  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80167958 00164A38  38 00 FF F6 */	li r0, -0xa
/* 8016795C 00164A3C  D0 18 00 4C */	stfs f0, 0x4c(r24)
/* 80167960 00164A40  80 7D 02 B4 */	lwz r3, 0x2b4(r29)
/* 80167964 00164A44  7C 60 00 38 */	and r0, r3, r0
/* 80167968 00164A48  90 1D 02 B4 */	stw r0, 0x2b4(r29)
/* 8016796C 00164A4C  80 1D 02 B4 */	lwz r0, 0x2b4(r29)
/* 80167970 00164A50  60 00 00 04 */	ori r0, r0, 0x4
/* 80167974 00164A54  90 1D 02 B4 */	stw r0, 0x2b4(r29)
/* 80167978 00164A58  48 00 06 E0 */	b .L_80168058
.L_8016797C:
/* 8016797C 00164A5C  80 1D 02 BC */	lwz r0, 0x2bc(r29)
/* 80167980 00164A60  3B 80 00 00 */	li r28, 0x0
/* 80167984 00164A64  2C 00 00 03 */	cmpwi r0, 0x3
/* 80167988 00164A68  40 82 00 1C */	bne .L_801679A4
/* 8016798C 00164A6C  FC 40 F0 90 */	fmr f2, f30
/* 80167990 00164A70  3C 80 80 25 */	lis r4, g_O3@ha
/* 80167994 00164A74  C0 22 AA 74 */	lfs f1, "@1673"@sda21(r2)
/* 80167998 00164A78  38 84 30 18 */	addi r4, r4, g_O3@l
/* 8016799C 00164A7C  4B FF DA 6D */	bl Pat_FaceTarget__FP12zNPCBPatrickPC5xVec3ff
/* 801679A0 00164A80  7C 7C 1B 78 */	mr r28, r3
.L_801679A4:
/* 801679A4 00164A84  7F A3 EB 78 */	mr r3, r29
/* 801679A8 00164A88  38 80 00 00 */	li r4, 0x0
/* 801679AC 00164A8C  4B F8 B6 CD */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 801679B0 00164A90  C0 02 AA B4 */	lfs f0, "@2280"@sda21(r2)
/* 801679B4 00164A94  EC 00 07 B2 */	fmuls f0, f0, f30
/* 801679B8 00164A98  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801679BC 00164A9C  40 80 06 9C */	bge .L_80168058
/* 801679C0 00164AA0  2C 1C 00 00 */	cmpwi r28, 0x0
/* 801679C4 00164AA4  40 82 06 94 */	bne .L_80168058
/* 801679C8 00164AA8  38 00 00 04 */	li r0, 0x4
/* 801679CC 00164AAC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801679D0 00164AB0  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 801679D4 00164AB4  90 18 00 50 */	stw r0, 0x50(r24)
/* 801679D8 00164AB8  38 63 06 9B */	addi r3, r3, 0x69b
/* 801679DC 00164ABC  4B EE 48 39 */	bl xStrHash__FPCc
/* 801679E0 00164AC0  C0 22 AA E0 */	lfs f1, "@2610"@sda21(r2)
/* 801679E4 00164AC4  7F A6 EB 78 */	mr r6, r29
/* 801679E8 00164AC8  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 801679EC 00164ACC  38 80 00 00 */	li r4, 0x0
/* 801679F0 00164AD0  C0 62 AA 24 */	lfs f3, "@1142"@sda21(r2)
/* 801679F4 00164AD4  38 A0 00 00 */	li r5, 0x0
/* 801679F8 00164AD8  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 801679FC 00164ADC  38 E0 00 00 */	li r7, 0x0
/* 80167A00 00164AE0  C0 A2 AA 7C */	lfs f5, "@1675"@sda21(r2)
/* 80167A04 00164AE4  4B EE 10 61 */	bl xSndPlay3D__FUiffUiUiP4xEntff14sound_categoryf
/* 80167A08 00164AE8  7F 03 C3 78 */	mr r3, r24
/* 80167A0C 00164AEC  38 80 00 20 */	li r4, 0x20
/* 80167A10 00164AF0  38 A0 00 00 */	li r5, 0x0
/* 80167A14 00164AF4  4B F6 D9 05 */	bl DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi
/* 80167A18 00164AF8  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80167A1C 00164AFC  D0 18 00 4C */	stfs f0, 0x4c(r24)
/* 80167A20 00164B00  80 1D 18 E8 */	lwz r0, 0x18e8(r29)
/* 80167A24 00164B04  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80167A28 00164B08  41 82 04 E8 */	beq .L_80167F10
/* 80167A2C 00164B0C  4B EC 92 3D */	bl xrand__Fv
/* 80167A30 00164B10  80 1D 02 BC */	lwz r0, 0x2bc(r29)
/* 80167A34 00164B14  2C 00 00 01 */	cmpwi r0, 0x1
/* 80167A38 00164B18  40 82 01 CC */	bne .L_80167C04
/* 80167A3C 00164B1C  80 1D 02 B8 */	lwz r0, 0x2b8(r29)
/* 80167A40 00164B20  2C 00 00 09 */	cmpwi r0, 0x9
/* 80167A44 00164B24  40 82 01 28 */	bne .L_80167B6C
/* 80167A48 00164B28  80 9D 18 E8 */	lwz r4, 0x18e8(r29)
/* 80167A4C 00164B2C  54 80 07 39 */	rlwinm. r0, r4, 0, 28, 28
/* 80167A50 00164B30  40 82 00 3C */	bne .L_80167A8C
/* 80167A54 00164B34  80 7D 18 E4 */	lwz r3, 0x18e4(r29)
/* 80167A58 00164B38  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80167A5C 00164B3C  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80167A60 00164B40  38 A0 00 00 */	li r5, 0x0
/* 80167A64 00164B44  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80167A68 00164B48  38 C0 FF FF */	li r6, -0x1
/* 80167A6C 00164B4C  80 84 00 6C */	lwz r4, 0x6c(r4)
/* 80167A70 00164B50  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80167A74 00164B54  7D 89 03 A6 */	mtctr r12
/* 80167A78 00164B58  4E 80 04 21 */	bctrl
/* 80167A7C 00164B5C  80 1D 18 E8 */	lwz r0, 0x18e8(r29)
/* 80167A80 00164B60  60 00 00 08 */	ori r0, r0, 0x8
/* 80167A84 00164B64  90 1D 18 E8 */	stw r0, 0x18e8(r29)
/* 80167A88 00164B68  48 00 05 D0 */	b .L_80168058
.L_80167A8C:
/* 80167A8C 00164B6C  54 80 06 F7 */	rlwinm. r0, r4, 0, 27, 27
/* 80167A90 00164B70  40 82 00 3C */	bne .L_80167ACC
/* 80167A94 00164B74  80 7D 18 E4 */	lwz r3, 0x18e4(r29)
/* 80167A98 00164B78  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80167A9C 00164B7C  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80167AA0 00164B80  38 A0 00 00 */	li r5, 0x0
/* 80167AA4 00164B84  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80167AA8 00164B88  38 C0 FF FF */	li r6, -0x1
/* 80167AAC 00164B8C  80 84 00 74 */	lwz r4, 0x74(r4)
/* 80167AB0 00164B90  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80167AB4 00164B94  7D 89 03 A6 */	mtctr r12
/* 80167AB8 00164B98  4E 80 04 21 */	bctrl
/* 80167ABC 00164B9C  80 1D 18 E8 */	lwz r0, 0x18e8(r29)
/* 80167AC0 00164BA0  60 00 00 10 */	ori r0, r0, 0x10
/* 80167AC4 00164BA4  90 1D 18 E8 */	stw r0, 0x18e8(r29)
/* 80167AC8 00164BA8  48 00 05 90 */	b .L_80168058
.L_80167ACC:
/* 80167ACC 00164BAC  54 80 06 B5 */	rlwinm. r0, r4, 0, 26, 26
/* 80167AD0 00164BB0  40 82 00 3C */	bne .L_80167B0C
/* 80167AD4 00164BB4  80 7D 18 E4 */	lwz r3, 0x18e4(r29)
/* 80167AD8 00164BB8  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80167ADC 00164BBC  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80167AE0 00164BC0  38 A0 00 00 */	li r5, 0x0
/* 80167AE4 00164BC4  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80167AE8 00164BC8  38 C0 FF FF */	li r6, -0x1
/* 80167AEC 00164BCC  80 84 00 A4 */	lwz r4, 0xa4(r4)
/* 80167AF0 00164BD0  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80167AF4 00164BD4  7D 89 03 A6 */	mtctr r12
/* 80167AF8 00164BD8  4E 80 04 21 */	bctrl
/* 80167AFC 00164BDC  80 1D 18 E8 */	lwz r0, 0x18e8(r29)
/* 80167B00 00164BE0  60 00 00 20 */	ori r0, r0, 0x20
/* 80167B04 00164BE4  90 1D 18 E8 */	stw r0, 0x18e8(r29)
/* 80167B08 00164BE8  48 00 05 50 */	b .L_80168058
.L_80167B0C:
/* 80167B0C 00164BEC  54 60 05 EF */	rlwinm. r0, r3, 0, 23, 23
/* 80167B10 00164BF0  41 82 00 30 */	beq .L_80167B40
/* 80167B14 00164BF4  80 7D 18 E4 */	lwz r3, 0x18e4(r29)
/* 80167B18 00164BF8  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80167B1C 00164BFC  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80167B20 00164C00  38 A0 00 00 */	li r5, 0x0
/* 80167B24 00164C04  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80167B28 00164C08  38 C0 FF FF */	li r6, -0x1
/* 80167B2C 00164C0C  80 84 00 A4 */	lwz r4, 0xa4(r4)
/* 80167B30 00164C10  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80167B34 00164C14  7D 89 03 A6 */	mtctr r12
/* 80167B38 00164C18  4E 80 04 21 */	bctrl
/* 80167B3C 00164C1C  48 00 05 1C */	b .L_80168058
.L_80167B40:
/* 80167B40 00164C20  80 7D 18 E4 */	lwz r3, 0x18e4(r29)
/* 80167B44 00164C24  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80167B48 00164C28  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80167B4C 00164C2C  38 A0 00 00 */	li r5, 0x0
/* 80167B50 00164C30  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80167B54 00164C34  38 C0 FF FF */	li r6, -0x1
/* 80167B58 00164C38  80 84 00 74 */	lwz r4, 0x74(r4)
/* 80167B5C 00164C3C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80167B60 00164C40  7D 89 03 A6 */	mtctr r12
/* 80167B64 00164C44  4E 80 04 21 */	bctrl
/* 80167B68 00164C48  48 00 04 F0 */	b .L_80168058
.L_80167B6C:
/* 80167B6C 00164C4C  54 60 06 FE */	clrlwi r0, r3, 27
/* 80167B70 00164C50  28 00 00 0A */	cmplwi r0, 0xa
/* 80167B74 00164C54  41 81 00 30 */	bgt .L_80167BA4
/* 80167B78 00164C58  80 7D 18 E4 */	lwz r3, 0x18e4(r29)
/* 80167B7C 00164C5C  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80167B80 00164C60  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80167B84 00164C64  38 A0 00 00 */	li r5, 0x0
/* 80167B88 00164C68  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80167B8C 00164C6C  38 C0 FF FF */	li r6, -0x1
/* 80167B90 00164C70  80 84 00 94 */	lwz r4, 0x94(r4)
/* 80167B94 00164C74  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80167B98 00164C78  7D 89 03 A6 */	mtctr r12
/* 80167B9C 00164C7C  4E 80 04 21 */	bctrl
/* 80167BA0 00164C80  48 00 04 B8 */	b .L_80168058
.L_80167BA4:
/* 80167BA4 00164C84  28 00 00 14 */	cmplwi r0, 0x14
/* 80167BA8 00164C88  41 81 00 30 */	bgt .L_80167BD8
/* 80167BAC 00164C8C  80 7D 18 E4 */	lwz r3, 0x18e4(r29)
/* 80167BB0 00164C90  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80167BB4 00164C94  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80167BB8 00164C98  38 A0 00 00 */	li r5, 0x0
/* 80167BBC 00164C9C  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80167BC0 00164CA0  38 C0 FF FF */	li r6, -0x1
/* 80167BC4 00164CA4  80 84 00 9C */	lwz r4, 0x9c(r4)
/* 80167BC8 00164CA8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80167BCC 00164CAC  7D 89 03 A6 */	mtctr r12
/* 80167BD0 00164CB0  4E 80 04 21 */	bctrl
/* 80167BD4 00164CB4  48 00 04 84 */	b .L_80168058
.L_80167BD8:
/* 80167BD8 00164CB8  80 7D 18 E4 */	lwz r3, 0x18e4(r29)
/* 80167BDC 00164CBC  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80167BE0 00164CC0  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80167BE4 00164CC4  38 A0 00 00 */	li r5, 0x0
/* 80167BE8 00164CC8  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80167BEC 00164CCC  38 C0 FF FF */	li r6, -0x1
/* 80167BF0 00164CD0  80 84 00 B4 */	lwz r4, 0xb4(r4)
/* 80167BF4 00164CD4  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80167BF8 00164CD8  7D 89 03 A6 */	mtctr r12
/* 80167BFC 00164CDC  4E 80 04 21 */	bctrl
/* 80167C00 00164CE0  48 00 04 58 */	b .L_80168058
.L_80167C04:
/* 80167C04 00164CE4  2C 00 00 02 */	cmpwi r0, 0x2
/* 80167C08 00164CE8  40 82 00 A4 */	bne .L_80167CAC
/* 80167C0C 00164CEC  54 60 05 AF */	rlwinm. r0, r3, 0, 22, 23
/* 80167C10 00164CF0  41 82 04 48 */	beq .L_80168058
/* 80167C14 00164CF4  54 60 06 FE */	clrlwi r0, r3, 27
/* 80167C18 00164CF8  28 00 00 0A */	cmplwi r0, 0xa
/* 80167C1C 00164CFC  41 81 00 30 */	bgt .L_80167C4C
/* 80167C20 00164D00  80 7D 18 E4 */	lwz r3, 0x18e4(r29)
/* 80167C24 00164D04  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80167C28 00164D08  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80167C2C 00164D0C  38 A0 00 00 */	li r5, 0x0
/* 80167C30 00164D10  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80167C34 00164D14  38 C0 FF FF */	li r6, -0x1
/* 80167C38 00164D18  80 84 00 94 */	lwz r4, 0x94(r4)
/* 80167C3C 00164D1C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80167C40 00164D20  7D 89 03 A6 */	mtctr r12
/* 80167C44 00164D24  4E 80 04 21 */	bctrl
/* 80167C48 00164D28  48 00 04 10 */	b .L_80168058
.L_80167C4C:
/* 80167C4C 00164D2C  28 00 00 14 */	cmplwi r0, 0x14
/* 80167C50 00164D30  41 81 00 30 */	bgt .L_80167C80
/* 80167C54 00164D34  80 7D 18 E4 */	lwz r3, 0x18e4(r29)
/* 80167C58 00164D38  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80167C5C 00164D3C  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80167C60 00164D40  38 A0 00 00 */	li r5, 0x0
/* 80167C64 00164D44  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80167C68 00164D48  38 C0 FF FF */	li r6, -0x1
/* 80167C6C 00164D4C  80 84 00 9C */	lwz r4, 0x9c(r4)
/* 80167C70 00164D50  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80167C74 00164D54  7D 89 03 A6 */	mtctr r12
/* 80167C78 00164D58  4E 80 04 21 */	bctrl
/* 80167C7C 00164D5C  48 00 03 DC */	b .L_80168058
.L_80167C80:
/* 80167C80 00164D60  80 7D 18 E4 */	lwz r3, 0x18e4(r29)
/* 80167C84 00164D64  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80167C88 00164D68  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80167C8C 00164D6C  38 A0 00 00 */	li r5, 0x0
/* 80167C90 00164D70  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80167C94 00164D74  38 C0 FF FF */	li r6, -0x1
/* 80167C98 00164D78  80 84 00 B4 */	lwz r4, 0xb4(r4)
/* 80167C9C 00164D7C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80167CA0 00164D80  7D 89 03 A6 */	mtctr r12
/* 80167CA4 00164D84  4E 80 04 21 */	bctrl
/* 80167CA8 00164D88  48 00 03 B0 */	b .L_80168058
.L_80167CAC:
/* 80167CAC 00164D8C  80 1D 02 B8 */	lwz r0, 0x2b8(r29)
/* 80167CB0 00164D90  2C 00 00 03 */	cmpwi r0, 0x3
/* 80167CB4 00164D94  40 82 01 28 */	bne .L_80167DDC
/* 80167CB8 00164D98  80 9D 18 E8 */	lwz r4, 0x18e8(r29)
/* 80167CBC 00164D9C  54 80 06 31 */	rlwinm. r0, r4, 0, 24, 24
/* 80167CC0 00164DA0  40 82 00 3C */	bne .L_80167CFC
/* 80167CC4 00164DA4  80 7D 18 E4 */	lwz r3, 0x18e4(r29)
/* 80167CC8 00164DA8  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80167CCC 00164DAC  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80167CD0 00164DB0  38 A0 00 00 */	li r5, 0x0
/* 80167CD4 00164DB4  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80167CD8 00164DB8  38 C0 FF FF */	li r6, -0x1
/* 80167CDC 00164DBC  80 84 00 6C */	lwz r4, 0x6c(r4)
/* 80167CE0 00164DC0  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80167CE4 00164DC4  7D 89 03 A6 */	mtctr r12
/* 80167CE8 00164DC8  4E 80 04 21 */	bctrl
/* 80167CEC 00164DCC  80 1D 18 E8 */	lwz r0, 0x18e8(r29)
/* 80167CF0 00164DD0  60 00 00 80 */	ori r0, r0, 0x80
/* 80167CF4 00164DD4  90 1D 18 E8 */	stw r0, 0x18e8(r29)
/* 80167CF8 00164DD8  48 00 03 60 */	b .L_80168058
.L_80167CFC:
/* 80167CFC 00164DDC  54 80 05 EF */	rlwinm. r0, r4, 0, 23, 23
/* 80167D00 00164DE0  40 82 00 3C */	bne .L_80167D3C
/* 80167D04 00164DE4  80 7D 18 E4 */	lwz r3, 0x18e4(r29)
/* 80167D08 00164DE8  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80167D0C 00164DEC  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80167D10 00164DF0  38 A0 00 00 */	li r5, 0x0
/* 80167D14 00164DF4  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80167D18 00164DF8  38 C0 FF FF */	li r6, -0x1
/* 80167D1C 00164DFC  80 84 00 74 */	lwz r4, 0x74(r4)
/* 80167D20 00164E00  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80167D24 00164E04  7D 89 03 A6 */	mtctr r12
/* 80167D28 00164E08  4E 80 04 21 */	bctrl
/* 80167D2C 00164E0C  80 1D 18 E8 */	lwz r0, 0x18e8(r29)
/* 80167D30 00164E10  60 00 01 00 */	ori r0, r0, 0x100
/* 80167D34 00164E14  90 1D 18 E8 */	stw r0, 0x18e8(r29)
/* 80167D38 00164E18  48 00 03 20 */	b .L_80168058
.L_80167D3C:
/* 80167D3C 00164E1C  54 80 05 AD */	rlwinm. r0, r4, 0, 22, 22
/* 80167D40 00164E20  40 82 00 3C */	bne .L_80167D7C
/* 80167D44 00164E24  80 7D 18 E4 */	lwz r3, 0x18e4(r29)
/* 80167D48 00164E28  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80167D4C 00164E2C  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80167D50 00164E30  38 A0 00 00 */	li r5, 0x0
/* 80167D54 00164E34  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80167D58 00164E38  38 C0 FF FF */	li r6, -0x1
/* 80167D5C 00164E3C  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80167D60 00164E40  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80167D64 00164E44  7D 89 03 A6 */	mtctr r12
/* 80167D68 00164E48  4E 80 04 21 */	bctrl
/* 80167D6C 00164E4C  80 1D 18 E8 */	lwz r0, 0x18e8(r29)
/* 80167D70 00164E50  60 00 02 00 */	ori r0, r0, 0x200
/* 80167D74 00164E54  90 1D 18 E8 */	stw r0, 0x18e8(r29)
/* 80167D78 00164E58  48 00 02 E0 */	b .L_80168058
.L_80167D7C:
/* 80167D7C 00164E5C  54 60 05 EF */	rlwinm. r0, r3, 0, 23, 23
/* 80167D80 00164E60  41 82 00 30 */	beq .L_80167DB0
/* 80167D84 00164E64  80 7D 18 E4 */	lwz r3, 0x18e4(r29)
/* 80167D88 00164E68  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80167D8C 00164E6C  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80167D90 00164E70  38 A0 00 00 */	li r5, 0x0
/* 80167D94 00164E74  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80167D98 00164E78  38 C0 FF FF */	li r6, -0x1
/* 80167D9C 00164E7C  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80167DA0 00164E80  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80167DA4 00164E84  7D 89 03 A6 */	mtctr r12
/* 80167DA8 00164E88  4E 80 04 21 */	bctrl
/* 80167DAC 00164E8C  48 00 02 AC */	b .L_80168058
.L_80167DB0:
/* 80167DB0 00164E90  80 7D 18 E4 */	lwz r3, 0x18e4(r29)
/* 80167DB4 00164E94  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80167DB8 00164E98  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80167DBC 00164E9C  38 A0 00 00 */	li r5, 0x0
/* 80167DC0 00164EA0  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80167DC4 00164EA4  38 C0 FF FF */	li r6, -0x1
/* 80167DC8 00164EA8  80 84 00 74 */	lwz r4, 0x74(r4)
/* 80167DCC 00164EAC  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80167DD0 00164EB0  7D 89 03 A6 */	mtctr r12
/* 80167DD4 00164EB4  4E 80 04 21 */	bctrl
/* 80167DD8 00164EB8  48 00 02 80 */	b .L_80168058
.L_80167DDC:
/* 80167DDC 00164EBC  54 60 06 BE */	clrlwi r0, r3, 26
/* 80167DE0 00164EC0  28 00 00 0A */	cmplwi r0, 0xa
/* 80167DE4 00164EC4  41 81 00 30 */	bgt .L_80167E14
/* 80167DE8 00164EC8  80 7D 18 E4 */	lwz r3, 0x18e4(r29)
/* 80167DEC 00164ECC  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80167DF0 00164ED0  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80167DF4 00164ED4  38 A0 00 00 */	li r5, 0x0
/* 80167DF8 00164ED8  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80167DFC 00164EDC  38 C0 FF FF */	li r6, -0x1
/* 80167E00 00164EE0  80 84 00 94 */	lwz r4, 0x94(r4)
/* 80167E04 00164EE4  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80167E08 00164EE8  7D 89 03 A6 */	mtctr r12
/* 80167E0C 00164EEC  4E 80 04 21 */	bctrl
/* 80167E10 00164EF0  48 00 02 48 */	b .L_80168058
.L_80167E14:
/* 80167E14 00164EF4  28 00 00 15 */	cmplwi r0, 0x15
/* 80167E18 00164EF8  41 81 00 30 */	bgt .L_80167E48
/* 80167E1C 00164EFC  80 7D 18 E4 */	lwz r3, 0x18e4(r29)
/* 80167E20 00164F00  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80167E24 00164F04  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80167E28 00164F08  38 A0 00 00 */	li r5, 0x0
/* 80167E2C 00164F0C  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80167E30 00164F10  38 C0 FF FF */	li r6, -0x1
/* 80167E34 00164F14  80 84 00 9C */	lwz r4, 0x9c(r4)
/* 80167E38 00164F18  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80167E3C 00164F1C  7D 89 03 A6 */	mtctr r12
/* 80167E40 00164F20  4E 80 04 21 */	bctrl
/* 80167E44 00164F24  48 00 02 14 */	b .L_80168058
.L_80167E48:
/* 80167E48 00164F28  28 00 00 1F */	cmplwi r0, 0x1f
/* 80167E4C 00164F2C  41 81 00 30 */	bgt .L_80167E7C
/* 80167E50 00164F30  80 7D 18 E4 */	lwz r3, 0x18e4(r29)
/* 80167E54 00164F34  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80167E58 00164F38  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80167E5C 00164F3C  38 A0 00 00 */	li r5, 0x0
/* 80167E60 00164F40  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80167E64 00164F44  38 C0 FF FF */	li r6, -0x1
/* 80167E68 00164F48  80 84 00 B4 */	lwz r4, 0xb4(r4)
/* 80167E6C 00164F4C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80167E70 00164F50  7D 89 03 A6 */	mtctr r12
/* 80167E74 00164F54  4E 80 04 21 */	bctrl
/* 80167E78 00164F58  48 00 01 E0 */	b .L_80168058
.L_80167E7C:
/* 80167E7C 00164F5C  28 00 00 2A */	cmplwi r0, 0x2a
/* 80167E80 00164F60  41 81 00 30 */	bgt .L_80167EB0
/* 80167E84 00164F64  80 7D 18 E4 */	lwz r3, 0x18e4(r29)
/* 80167E88 00164F68  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80167E8C 00164F6C  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80167E90 00164F70  38 A0 00 00 */	li r5, 0x0
/* 80167E94 00164F74  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80167E98 00164F78  38 C0 FF FF */	li r6, -0x1
/* 80167E9C 00164F7C  80 84 00 6C */	lwz r4, 0x6c(r4)
/* 80167EA0 00164F80  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80167EA4 00164F84  7D 89 03 A6 */	mtctr r12
/* 80167EA8 00164F88  4E 80 04 21 */	bctrl
/* 80167EAC 00164F8C  48 00 01 AC */	b .L_80168058
.L_80167EB0:
/* 80167EB0 00164F90  28 00 00 34 */	cmplwi r0, 0x34
/* 80167EB4 00164F94  41 81 00 30 */	bgt .L_80167EE4
/* 80167EB8 00164F98  80 7D 18 E4 */	lwz r3, 0x18e4(r29)
/* 80167EBC 00164F9C  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80167EC0 00164FA0  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80167EC4 00164FA4  38 A0 00 00 */	li r5, 0x0
/* 80167EC8 00164FA8  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80167ECC 00164FAC  38 C0 FF FF */	li r6, -0x1
/* 80167ED0 00164FB0  80 84 00 74 */	lwz r4, 0x74(r4)
/* 80167ED4 00164FB4  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80167ED8 00164FB8  7D 89 03 A6 */	mtctr r12
/* 80167EDC 00164FBC  4E 80 04 21 */	bctrl
/* 80167EE0 00164FC0  48 00 01 78 */	b .L_80168058
.L_80167EE4:
/* 80167EE4 00164FC4  80 7D 18 E4 */	lwz r3, 0x18e4(r29)
/* 80167EE8 00164FC8  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80167EEC 00164FCC  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80167EF0 00164FD0  38 A0 00 00 */	li r5, 0x0
/* 80167EF4 00164FD4  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80167EF8 00164FD8  38 C0 FF FF */	li r6, -0x1
/* 80167EFC 00164FDC  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80167F00 00164FE0  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80167F04 00164FE4  7D 89 03 A6 */	mtctr r12
/* 80167F08 00164FE8  4E 80 04 21 */	bctrl
/* 80167F0C 00164FEC  48 00 01 4C */	b .L_80168058
.L_80167F10:
/* 80167F10 00164FF0  80 7D 18 E4 */	lwz r3, 0x18e4(r29)
/* 80167F14 00164FF4  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80167F18 00164FF8  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80167F1C 00164FFC  38 A0 00 00 */	li r5, 0x0
/* 80167F20 00165000  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80167F24 00165004  38 C0 FF FF */	li r6, -0x1
/* 80167F28 00165008  80 84 00 04 */	lwz r4, 0x4(r4)
/* 80167F2C 0016500C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80167F30 00165010  7D 89 03 A6 */	mtctr r12
/* 80167F34 00165014  4E 80 04 21 */	bctrl
/* 80167F38 00165018  80 1D 18 E8 */	lwz r0, 0x18e8(r29)
/* 80167F3C 0016501C  60 00 00 01 */	ori r0, r0, 0x1
/* 80167F40 00165020  90 1D 18 E8 */	stw r0, 0x18e8(r29)
/* 80167F44 00165024  48 00 01 14 */	b .L_80168058
.L_80167F48:
/* 80167F48 00165028  38 80 00 00 */	li r4, 0x0
/* 80167F4C 0016502C  4B F8 B1 2D */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 80167F50 00165030  C0 02 AA B4 */	lfs f0, "@2280"@sda21(r2)
/* 80167F54 00165034  EC 00 07 B2 */	fmuls f0, f0, f30
/* 80167F58 00165038  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80167F5C 0016503C  40 80 00 FC */	bge .L_80168058
/* 80167F60 00165040  38 00 00 05 */	li r0, 0x5
/* 80167F64 00165044  7F 03 C3 78 */	mr r3, r24
/* 80167F68 00165048  90 18 00 50 */	stw r0, 0x50(r24)
/* 80167F6C 0016504C  38 80 00 20 */	li r4, 0x20
/* 80167F70 00165050  38 A0 00 00 */	li r5, 0x0
/* 80167F74 00165054  4B F6 D3 A5 */	bl DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi
/* 80167F78 00165058  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80167F7C 0016505C  D0 18 00 4C */	stfs f0, 0x4c(r24)
/* 80167F80 00165060  48 00 00 D8 */	b .L_80168058
.L_80167F84:
/* 80167F84 00165064  80 1D 02 BC */	lwz r0, 0x2bc(r29)
/* 80167F88 00165068  2C 00 00 01 */	cmpwi r0, 0x1
/* 80167F8C 0016506C  40 82 00 14 */	bne .L_80167FA0
/* 80167F90 00165070  C0 38 00 4C */	lfs f1, 0x4c(r24)
/* 80167F94 00165074  C0 02 A9 F0 */	lfs f0, "@1049"@sda21(r2)
/* 80167F98 00165078  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80167F9C 0016507C  41 81 00 34 */	bgt .L_80167FD0
.L_80167FA0:
/* 80167FA0 00165080  2C 00 00 02 */	cmpwi r0, 0x2
/* 80167FA4 00165084  40 82 00 14 */	bne .L_80167FB8
/* 80167FA8 00165088  C0 38 00 4C */	lfs f1, 0x4c(r24)
/* 80167FAC 0016508C  C0 02 AA 24 */	lfs f0, "@1142"@sda21(r2)
/* 80167FB0 00165090  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80167FB4 00165094  41 81 00 1C */	bgt .L_80167FD0
.L_80167FB8:
/* 80167FB8 00165098  2C 00 00 03 */	cmpwi r0, 0x3
/* 80167FBC 0016509C  40 82 00 44 */	bne .L_80168000
/* 80167FC0 001650A0  C0 38 00 4C */	lfs f1, 0x4c(r24)
/* 80167FC4 001650A4  C0 02 AA DC */	lfs f0, "@2597"@sda21(r2)
/* 80167FC8 001650A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80167FCC 001650AC  40 81 00 34 */	ble .L_80168000
.L_80167FD0:
/* 80167FD0 001650B0  38 00 00 06 */	li r0, 0x6
/* 80167FD4 001650B4  7F 03 C3 78 */	mr r3, r24
/* 80167FD8 001650B8  90 18 00 50 */	stw r0, 0x50(r24)
/* 80167FDC 001650BC  38 80 00 20 */	li r4, 0x20
/* 80167FE0 001650C0  38 A0 00 00 */	li r5, 0x0
/* 80167FE4 001650C4  80 1D 02 B4 */	lwz r0, 0x2b4(r29)
/* 80167FE8 001650C8  54 00 06 B0 */	rlwinm r0, r0, 0, 26, 24
/* 80167FEC 001650CC  90 1D 02 B4 */	stw r0, 0x2b4(r29)
/* 80167FF0 001650D0  4B F6 D3 29 */	bl DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi
/* 80167FF4 001650D4  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80167FF8 001650D8  D0 18 00 4C */	stfs f0, 0x4c(r24)
/* 80167FFC 001650DC  48 00 00 5C */	b .L_80168058
.L_80168000:
/* 80168000 001650E0  2C 00 00 03 */	cmpwi r0, 0x3
/* 80168004 001650E4  40 82 00 54 */	bne .L_80168058
/* 80168008 001650E8  80 1D 18 E8 */	lwz r0, 0x18e8(r29)
/* 8016800C 001650EC  54 00 05 AD */	rlwinm. r0, r0, 0, 22, 22
/* 80168010 001650F0  40 82 00 48 */	bne .L_80168058
/* 80168014 001650F4  C0 38 00 4C */	lfs f1, 0x4c(r24)
/* 80168018 001650F8  C0 02 AA F4 */	lfs f0, "@2885"@sda21(r2)
/* 8016801C 001650FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80168020 00165100  40 81 00 38 */	ble .L_80168058
/* 80168024 00165104  80 7D 18 E4 */	lwz r3, 0x18e4(r29)
/* 80168028 00165108  3C 80 80 2A */	lis r4, sNFComment@ha
/* 8016802C 0016510C  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80168030 00165110  38 A0 00 00 */	li r5, 0x0
/* 80168034 00165114  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80168038 00165118  38 C0 FF FF */	li r6, -0x1
/* 8016803C 0016511C  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80168040 00165120  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80168044 00165124  7D 89 03 A6 */	mtctr r12
/* 80168048 00165128  4E 80 04 21 */	bctrl
/* 8016804C 0016512C  80 1D 18 E8 */	lwz r0, 0x18e8(r29)
/* 80168050 00165130  60 00 02 00 */	ori r0, r0, 0x200
/* 80168054 00165134  90 1D 18 E8 */	stw r0, 0x18e8(r29)
.L_80168058:
/* 80168058 00165138  FC 20 F0 90 */	fmr f1, f30
/* 8016805C 0016513C  7F 03 C3 78 */	mr r3, r24
/* 80168060 00165140  7F 24 CB 78 */	mr r4, r25
/* 80168064 00165144  7F 45 D3 78 */	mr r5, r26
/* 80168068 00165148  7F 66 DB 78 */	mr r6, r27
/* 8016806C 0016514C  4B FA 6A DD */	bl Process__5xGoalFP11en_trantypefPvP6xScene
/* 80168070 00165150  E3 E1 01 38 */	psq_l f31, 0x138(r1), 0, qr0
/* 80168074 00165154  CB E1 01 30 */	lfd f31, 0x130(r1)
/* 80168078 00165158  E3 C1 01 28 */	psq_l f30, 0x128(r1), 0, qr0
/* 8016807C 0016515C  CB C1 01 20 */	lfd f30, 0x120(r1)
/* 80168080 00165160  BB 01 01 00 */	lmw r24, 0x100(r1)
/* 80168084 00165164  80 01 01 44 */	lwz r0, 0x144(r1)
/* 80168088 00165168  7C 08 03 A6 */	mtlr r0
/* 8016808C 0016516C  38 21 01 40 */	addi r1, r1, 0x140
/* 80168090 00165170  4E 80 00 20 */	blr
.endfn Process__19zNPCGoalBossPatSpinFP11en_trantypefPvP6xScene

# zNPCGoalBossPatSpin::Exit(float, void*)
.fn Exit__19zNPCGoalBossPatSpinFfPv, global
/* 80168094 00165174  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80168098 00165178  7C 08 02 A6 */	mflr r0
/* 8016809C 0016517C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801680A0 00165180  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 801680A4 00165184  FF E0 08 90 */	fmr f31, f1
/* 801680A8 00165188  93 E1 00 14 */	stw r31, 0x14(r1)
/* 801680AC 0016518C  7C 9F 23 78 */	mr r31, r4
/* 801680B0 00165190  93 C1 00 10 */	stw r30, 0x10(r1)
/* 801680B4 00165194  7C 7E 1B 78 */	mr r30, r3
/* 801680B8 00165198  4B FA 69 DD */	bl GetOwner__5xGoalCFv
/* 801680BC 0016519C  80 A3 02 B4 */	lwz r5, 0x2b4(r3)
/* 801680C0 001651A0  38 00 FF B3 */	li r0, -0x4d
/* 801680C4 001651A4  FC 20 F8 90 */	fmr f1, f31
/* 801680C8 001651A8  7F E4 FB 78 */	mr r4, r31
/* 801680CC 001651AC  7C A0 00 38 */	and r0, r5, r0
/* 801680D0 001651B0  90 03 02 B4 */	stw r0, 0x2b4(r3)
/* 801680D4 001651B4  7F C3 F3 78 */	mr r3, r30
/* 801680D8 001651B8  4B F6 D3 45 */	bl Exit__5xGoalFfPv
/* 801680DC 001651BC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801680E0 001651C0  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 801680E4 001651C4  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 801680E8 001651C8  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 801680EC 001651CC  7C 08 03 A6 */	mtlr r0
/* 801680F0 001651D0  38 21 00 20 */	addi r1, r1, 0x20
/* 801680F4 001651D4  4E 80 00 20 */	blr
.endfn Exit__19zNPCGoalBossPatSpinFfPv

# zNPCGoalBossPatFudge::Enter(float, void*)
.fn Enter__20zNPCGoalBossPatFudgeFfPv, global
/* 801680F8 001651D8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801680FC 001651DC  7C 08 02 A6 */	mflr r0
/* 80168100 001651E0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80168104 001651E4  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80168108 001651E8  F3 E1 00 18 */	psq_st f31, 0x18(r1), 0, qr0
/* 8016810C 001651EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80168110 001651F0  93 C1 00 08 */	stw r30, 0x8(r1)
/* 80168114 001651F4  FF E0 08 90 */	fmr f31, f1
/* 80168118 001651F8  7C 7E 1B 78 */	mr r30, r3
/* 8016811C 001651FC  7C 9F 23 78 */	mr r31, r4
/* 80168120 00165200  4B FA 69 75 */	bl GetOwner__5xGoalCFv
/* 80168124 00165204  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80168128 00165208  38 00 00 00 */	li r0, 0x0
/* 8016812C 0016520C  FC 20 F8 90 */	fmr f1, f31
/* 80168130 00165210  7F E4 FB 78 */	mr r4, r31
/* 80168134 00165214  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 80168138 00165218  90 1E 00 50 */	stw r0, 0x50(r30)
/* 8016813C 0016521C  C0 02 A9 C0 */	lfs f0, "@831"@sda21(r2)
/* 80168140 00165220  D0 1E 00 54 */	stfs f0, 0x54(r30)
/* 80168144 00165224  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 80168148 00165228  80 03 02 B4 */	lwz r0, 0x2b4(r3)
/* 8016814C 0016522C  60 00 00 20 */	ori r0, r0, 0x20
/* 80168150 00165230  90 03 02 B4 */	stw r0, 0x2b4(r3)
/* 80168154 00165234  80 A3 18 F4 */	lwz r5, 0x18f4(r3)
/* 80168158 00165238  38 05 00 01 */	addi r0, r5, 0x1
/* 8016815C 0016523C  90 03 18 F4 */	stw r0, 0x18f4(r3)
/* 80168160 00165240  7F C3 F3 78 */	mr r3, r30
/* 80168164 00165244  4B F6 CF B1 */	bl Enter__14zNPCGoalCommonFfPv
/* 80168168 00165248  E3 E1 00 18 */	psq_l f31, 0x18(r1), 0, qr0
/* 8016816C 0016524C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80168170 00165250  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80168174 00165254  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80168178 00165258  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 8016817C 0016525C  7C 08 03 A6 */	mtlr r0
/* 80168180 00165260  38 21 00 20 */	addi r1, r1, 0x20
/* 80168184 00165264  4E 80 00 20 */	blr
.endfn Enter__20zNPCGoalBossPatFudgeFfPv

# zNPCGoalBossPatFudge::Process(en_trantype*, float, void*, xScene*)
.fn Process__20zNPCGoalBossPatFudgeFP11en_trantypefPvP6xScene, global
/* 80168188 00165268  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 8016818C 0016526C  7C 08 02 A6 */	mflr r0
/* 80168190 00165270  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 80168194 00165274  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 80168198 00165278  F3 E1 00 D8 */	psq_st f31, 0xd8(r1), 0, qr0
/* 8016819C 0016527C  BE A1 00 A4 */	stmw r21, 0xa4(r1)
/* 801681A0 00165280  FF E0 08 90 */	fmr f31, f1
/* 801681A4 00165284  7C 75 1B 78 */	mr r21, r3
/* 801681A8 00165288  7C 96 23 78 */	mr r22, r4
/* 801681AC 0016528C  7C B7 2B 78 */	mr r23, r5
/* 801681B0 00165290  7C D8 33 78 */	mr r24, r6
/* 801681B4 00165294  4B FA 68 E1 */	bl GetOwner__5xGoalCFv
/* 801681B8 00165298  C0 15 00 4C */	lfs f0, 0x4c(r21)
/* 801681BC 0016529C  7C 7C 1B 78 */	mr r28, r3
/* 801681C0 001652A0  EC 00 F8 2A */	fadds f0, f0, f31
/* 801681C4 001652A4  D0 15 00 4C */	stfs f0, 0x4c(r21)
/* 801681C8 001652A8  80 15 00 50 */	lwz r0, 0x50(r21)
/* 801681CC 001652AC  2C 00 00 03 */	cmpwi r0, 0x3
/* 801681D0 001652B0  41 82 03 74 */	beq .L_80168544
/* 801681D4 001652B4  40 80 00 1C */	bge .L_801681F0
/* 801681D8 001652B8  2C 00 00 01 */	cmpwi r0, 0x1
/* 801681DC 001652BC  41 82 01 0C */	beq .L_801682E8
/* 801681E0 001652C0  40 80 01 D4 */	bge .L_801683B4
/* 801681E4 001652C4  2C 00 00 00 */	cmpwi r0, 0x0
/* 801681E8 001652C8  40 80 00 18 */	bge .L_80168200
/* 801681EC 001652CC  48 00 07 E0 */	b .L_801689CC
.L_801681F0:
/* 801681F0 001652D0  2C 00 00 05 */	cmpwi r0, 0x5
/* 801681F4 001652D4  41 82 04 98 */	beq .L_8016868C
/* 801681F8 001652D8  40 80 07 D4 */	bge .L_801689CC
/* 801681FC 001652DC  48 00 03 84 */	b .L_80168580
.L_80168200:
/* 80168200 001652E0  FC 40 F8 90 */	fmr f2, f31
/* 80168204 001652E4  C0 22 AA 1C */	lfs f1, "@1140"@sda21(r2)
/* 80168208 001652E8  38 9C 02 E4 */	addi r4, r28, 0x2e4
/* 8016820C 001652EC  4B FF D1 FD */	bl Pat_FaceTarget__FP12zNPCBPatrickPC5xVec3ff
/* 80168210 001652F0  2C 03 00 00 */	cmpwi r3, 0x0
/* 80168214 001652F4  40 82 00 7C */	bne .L_80168290
/* 80168218 001652F8  38 00 00 01 */	li r0, 0x1
/* 8016821C 001652FC  7E A3 AB 78 */	mr r3, r21
/* 80168220 00165300  90 15 00 50 */	stw r0, 0x50(r21)
/* 80168224 00165304  38 80 00 20 */	li r4, 0x20
/* 80168228 00165308  38 A0 00 00 */	li r5, 0x0
/* 8016822C 0016530C  4B F6 D0 ED */	bl DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi
/* 80168230 00165310  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80168234 00165314  D0 15 00 4C */	stfs f0, 0x4c(r21)
/* 80168238 00165318  C0 35 00 54 */	lfs f1, 0x54(r21)
/* 8016823C 0016531C  C0 02 A9 C0 */	lfs f0, "@831"@sda21(r2)
/* 80168240 00165320  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80168244 00165324  40 81 00 28 */	ble .L_8016826C
/* 80168248 00165328  C0 02 A9 F4 */	lfs f0, "@1050"@sda21(r2)
/* 8016824C 0016532C  EC 00 0F FC */	fnmsubs f0, f0, f31, f1
/* 80168250 00165330  D0 15 00 54 */	stfs f0, 0x54(r21)
/* 80168254 00165334  C0 35 00 54 */	lfs f1, 0x54(r21)
/* 80168258 00165338  C0 02 A9 C0 */	lfs f0, "@831"@sda21(r2)
/* 8016825C 0016533C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80168260 00165340  40 80 07 6C */	bge .L_801689CC
/* 80168264 00165344  D0 15 00 54 */	stfs f0, 0x54(r21)
/* 80168268 00165348  48 00 07 64 */	b .L_801689CC
.L_8016826C:
/* 8016826C 0016534C  C0 02 A9 F4 */	lfs f0, "@1050"@sda21(r2)
/* 80168270 00165350  EC 00 0F FA */	fmadds f0, f0, f31, f1
/* 80168274 00165354  D0 15 00 54 */	stfs f0, 0x54(r21)
/* 80168278 00165358  C0 35 00 54 */	lfs f1, 0x54(r21)
/* 8016827C 0016535C  C0 02 A9 C0 */	lfs f0, "@831"@sda21(r2)
/* 80168280 00165360  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80168284 00165364  40 81 07 48 */	ble .L_801689CC
/* 80168288 00165368  D0 15 00 54 */	stfs f0, 0x54(r21)
/* 8016828C 0016536C  48 00 07 40 */	b .L_801689CC
.L_80168290:
/* 80168290 00165370  2C 03 FF FF */	cmpwi r3, -0x1
/* 80168294 00165374  40 82 00 2C */	bne .L_801682C0
/* 80168298 00165378  C0 22 A9 F4 */	lfs f1, "@1050"@sda21(r2)
/* 8016829C 0016537C  C0 15 00 54 */	lfs f0, 0x54(r21)
/* 801682A0 00165380  EC 01 07 FC */	fnmsubs f0, f1, f31, f0
/* 801682A4 00165384  D0 15 00 54 */	stfs f0, 0x54(r21)
/* 801682A8 00165388  C0 35 00 54 */	lfs f1, 0x54(r21)
/* 801682AC 0016538C  C0 02 A9 E4 */	lfs f0, "@1046"@sda21(r2)
/* 801682B0 00165390  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801682B4 00165394  40 80 07 18 */	bge .L_801689CC
/* 801682B8 00165398  D0 15 00 54 */	stfs f0, 0x54(r21)
/* 801682BC 0016539C  48 00 07 10 */	b .L_801689CC
.L_801682C0:
/* 801682C0 001653A0  C0 22 A9 F4 */	lfs f1, "@1050"@sda21(r2)
/* 801682C4 001653A4  C0 15 00 54 */	lfs f0, 0x54(r21)
/* 801682C8 001653A8  EC 01 07 FA */	fmadds f0, f1, f31, f0
/* 801682CC 001653AC  D0 15 00 54 */	stfs f0, 0x54(r21)
/* 801682D0 001653B0  C0 35 00 54 */	lfs f1, 0x54(r21)
/* 801682D4 001653B4  C0 02 AA C8 */	lfs f0, "@2426"@sda21(r2)
/* 801682D8 001653B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801682DC 001653BC  40 81 06 F0 */	ble .L_801689CC
/* 801682E0 001653C0  D0 15 00 54 */	stfs f0, 0x54(r21)
/* 801682E4 001653C4  48 00 06 E8 */	b .L_801689CC
.L_801682E8:
/* 801682E8 001653C8  80 BC 00 48 */	lwz r5, 0x48(r28)
/* 801682EC 001653CC  38 61 00 30 */	addi r3, r1, 0x30
/* 801682F0 001653D0  38 9C 02 E4 */	addi r4, r28, 0x2e4
/* 801682F4 001653D4  38 A5 00 30 */	addi r5, r5, 0x30
/* 801682F8 001653D8  4B EA 63 99 */	bl xVec3Sub__FP5xVec3PC5xVec3PC5xVec3
/* 801682FC 001653DC  38 61 00 30 */	addi r3, r1, 0x30
/* 80168300 001653E0  4B EA 63 51 */	bl xVec3Length__FPC5xVec3
/* 80168304 001653E4  C0 02 AA 20 */	lfs f0, "@1141"@sda21(r2)
/* 80168308 001653E8  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8016830C 001653EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80168310 001653F0  40 80 00 38 */	bge .L_80168348
/* 80168314 001653F4  80 7C 00 48 */	lwz r3, 0x48(r28)
/* 80168318 001653F8  38 9C 02 E4 */	addi r4, r28, 0x2e4
/* 8016831C 001653FC  38 63 00 30 */	addi r3, r3, 0x30
/* 80168320 00165400  4B EE 61 BD */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 80168324 00165404  38 00 00 02 */	li r0, 0x2
/* 80168328 00165408  7E A3 AB 78 */	mr r3, r21
/* 8016832C 0016540C  90 15 00 50 */	stw r0, 0x50(r21)
/* 80168330 00165410  38 80 00 20 */	li r4, 0x20
/* 80168334 00165414  38 A0 00 00 */	li r5, 0x0
/* 80168338 00165418  4B F6 CF E1 */	bl DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi
/* 8016833C 0016541C  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80168340 00165420  D0 15 00 4C */	stfs f0, 0x4c(r21)
/* 80168344 00165424  48 00 06 88 */	b .L_801689CC
.L_80168348:
/* 80168348 00165428  EC 20 08 24 */	fdivs f1, f0, f1
/* 8016834C 0016542C  80 7C 00 48 */	lwz r3, 0x48(r28)
/* 80168350 00165430  38 81 00 30 */	addi r4, r1, 0x30
/* 80168354 00165434  38 63 00 30 */	addi r3, r3, 0x30
/* 80168358 00165438  4B EA CD 01 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 8016835C 0016543C  C0 35 00 54 */	lfs f1, 0x54(r21)
/* 80168360 00165440  C0 02 A9 C0 */	lfs f0, "@831"@sda21(r2)
/* 80168364 00165444  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80168368 00165448  40 81 00 28 */	ble .L_80168390
/* 8016836C 0016544C  C0 02 A9 F4 */	lfs f0, "@1050"@sda21(r2)
/* 80168370 00165450  EC 00 0F FC */	fnmsubs f0, f0, f31, f1
/* 80168374 00165454  D0 15 00 54 */	stfs f0, 0x54(r21)
/* 80168378 00165458  C0 35 00 54 */	lfs f1, 0x54(r21)
/* 8016837C 0016545C  C0 02 A9 C0 */	lfs f0, "@831"@sda21(r2)
/* 80168380 00165460  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80168384 00165464  40 80 06 48 */	bge .L_801689CC
/* 80168388 00165468  D0 15 00 54 */	stfs f0, 0x54(r21)
/* 8016838C 0016546C  48 00 06 40 */	b .L_801689CC
.L_80168390:
/* 80168390 00165470  C0 02 A9 F4 */	lfs f0, "@1050"@sda21(r2)
/* 80168394 00165474  EC 00 0F FA */	fmadds f0, f0, f31, f1
/* 80168398 00165478  D0 15 00 54 */	stfs f0, 0x54(r21)
/* 8016839C 0016547C  C0 35 00 54 */	lfs f1, 0x54(r21)
/* 801683A0 00165480  C0 02 A9 C0 */	lfs f0, "@831"@sda21(r2)
/* 801683A4 00165484  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801683A8 00165488  40 81 06 24 */	ble .L_801689CC
/* 801683AC 0016548C  D0 15 00 54 */	stfs f0, 0x54(r21)
/* 801683B0 00165490  48 00 06 1C */	b .L_801689CC
.L_801683B4:
/* 801683B4 00165494  FC 40 F8 90 */	fmr f2, f31
/* 801683B8 00165498  C0 22 AA 1C */	lfs f1, "@1140"@sda21(r2)
/* 801683BC 0016549C  38 9C 02 F0 */	addi r4, r28, 0x2f0
/* 801683C0 001654A0  4B FF D0 49 */	bl Pat_FaceTarget__FP12zNPCBPatrickPC5xVec3ff
/* 801683C4 001654A4  2C 03 00 00 */	cmpwi r3, 0x0
/* 801683C8 001654A8  40 82 01 24 */	bne .L_801684EC
/* 801683CC 001654AC  38 00 00 03 */	li r0, 0x3
/* 801683D0 001654B0  7E A3 AB 78 */	mr r3, r21
/* 801683D4 001654B4  90 15 00 50 */	stw r0, 0x50(r21)
/* 801683D8 001654B8  38 80 00 20 */	li r4, 0x20
/* 801683DC 001654BC  38 A0 00 00 */	li r5, 0x0
/* 801683E0 001654C0  4B F6 CF 39 */	bl DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi
/* 801683E4 001654C4  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801683E8 001654C8  38 A1 00 08 */	addi r5, r1, 0x8
/* 801683EC 001654CC  38 80 00 C3 */	li r4, 0xc3
/* 801683F0 001654D0  D0 15 00 4C */	stfs f0, 0x4c(r21)
/* 801683F4 001654D4  C0 02 A9 D8 */	lfs f0, "@891"@sda21(r2)
/* 801683F8 001654D8  D0 01 00 08 */	stfs f0, 0x8(r1)
/* 801683FC 001654DC  80 7C 15 84 */	lwz r3, 0x1584(r28)
/* 80168400 001654E0  4B EB 72 65 */	bl zEntEvent__FP5xBaseUiPCf
/* 80168404 001654E4  80 1C 02 BC */	lwz r0, 0x2bc(r28)
/* 80168408 001654E8  2C 00 00 02 */	cmpwi r0, 0x2
/* 8016840C 001654EC  40 82 00 10 */	bne .L_8016841C
/* 80168410 001654F0  80 1C 02 B8 */	lwz r0, 0x2b8(r28)
/* 80168414 001654F4  2C 00 00 03 */	cmpwi r0, 0x3
/* 80168418 001654F8  41 82 00 B0 */	beq .L_801684C8
.L_8016841C:
/* 8016841C 001654FC  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80168420 00165500  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 80168424 00165504  38 63 06 AD */	addi r3, r3, 0x6ad
/* 80168428 00165508  4B EE 3D ED */	bl xStrHash__FPCc
/* 8016842C 0016550C  C0 22 AA 6C */	lfs f1, "@1671"@sda21(r2)
/* 80168430 00165510  38 80 00 00 */	li r4, 0x0
/* 80168434 00165514  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80168438 00165518  38 A0 00 00 */	li r5, 0x0
/* 8016843C 0016551C  80 DC 15 84 */	lwz r6, 0x1584(r28)
/* 80168440 00165520  38 E0 00 00 */	li r7, 0x0
/* 80168444 00165524  C0 62 AA 24 */	lfs f3, "@1142"@sda21(r2)
/* 80168448 00165528  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 8016844C 0016552C  C0 A2 A9 E4 */	lfs f5, "@1046"@sda21(r2)
/* 80168450 00165530  4B EE 06 15 */	bl xSndPlay3D__FUiffUiUiP4xEntff14sound_categoryf
/* 80168454 00165534  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80168458 00165538  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 8016845C 0016553C  38 63 06 C3 */	addi r3, r3, 0x6c3
/* 80168460 00165540  4B EE 3D B5 */	bl xStrHash__FPCc
/* 80168464 00165544  C0 22 AA 6C */	lfs f1, "@1671"@sda21(r2)
/* 80168468 00165548  38 80 00 00 */	li r4, 0x0
/* 8016846C 0016554C  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 80168470 00165550  38 A0 00 00 */	li r5, 0x0
/* 80168474 00165554  80 DC 15 84 */	lwz r6, 0x1584(r28)
/* 80168478 00165558  38 E0 00 00 */	li r7, 0x0
/* 8016847C 0016555C  C0 62 AA 24 */	lfs f3, "@1142"@sda21(r2)
/* 80168480 00165560  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 80168484 00165564  C0 A2 A9 E4 */	lfs f5, "@1046"@sda21(r2)
/* 80168488 00165568  4B EE 05 DD */	bl xSndPlay3D__FUiffUiUiP4xEntff14sound_categoryf
/* 8016848C 0016556C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 80168490 00165570  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 80168494 00165574  38 63 06 D6 */	addi r3, r3, 0x6d6
/* 80168498 00165578  4B EE 3D 7D */	bl xStrHash__FPCc
/* 8016849C 0016557C  C0 22 AA 6C */	lfs f1, "@1671"@sda21(r2)
/* 801684A0 00165580  38 80 00 00 */	li r4, 0x0
/* 801684A4 00165584  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 801684A8 00165588  38 A0 00 00 */	li r5, 0x0
/* 801684AC 0016558C  80 DC 15 84 */	lwz r6, 0x1584(r28)
/* 801684B0 00165590  38 E0 00 00 */	li r7, 0x0
/* 801684B4 00165594  C0 62 AA 24 */	lfs f3, "@1142"@sda21(r2)
/* 801684B8 00165598  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 801684BC 0016559C  C0 A2 A9 F4 */	lfs f5, "@1050"@sda21(r2)
/* 801684C0 001655A0  4B EE 05 A5 */	bl xSndPlay3D__FUiffUiUiP4xEntff14sound_categoryf
/* 801684C4 001655A4  48 00 05 08 */	b .L_801689CC
.L_801684C8:
/* 801684C8 001655A8  80 7C 02 C4 */	lwz r3, 0x2c4(r28)
/* 801684CC 001655AC  38 03 00 01 */	addi r0, r3, 0x1
/* 801684D0 001655B0  90 1C 02 C4 */	stw r0, 0x2c4(r28)
/* 801684D4 001655B4  80 1C 02 C4 */	lwz r0, 0x2c4(r28)
/* 801684D8 001655B8  2C 00 00 03 */	cmpwi r0, 0x3
/* 801684DC 001655BC  40 81 04 F0 */	ble .L_801689CC
/* 801684E0 001655C0  38 00 00 03 */	li r0, 0x3
/* 801684E4 001655C4  90 1C 02 C4 */	stw r0, 0x2c4(r28)
/* 801684E8 001655C8  48 00 04 E4 */	b .L_801689CC
.L_801684EC:
/* 801684EC 001655CC  2C 03 FF FF */	cmpwi r3, -0x1
/* 801684F0 001655D0  40 82 00 2C */	bne .L_8016851C
/* 801684F4 001655D4  C0 22 A9 F4 */	lfs f1, "@1050"@sda21(r2)
/* 801684F8 001655D8  C0 15 00 54 */	lfs f0, 0x54(r21)
/* 801684FC 001655DC  EC 01 07 FC */	fnmsubs f0, f1, f31, f0
/* 80168500 001655E0  D0 15 00 54 */	stfs f0, 0x54(r21)
/* 80168504 001655E4  C0 35 00 54 */	lfs f1, 0x54(r21)
/* 80168508 001655E8  C0 02 A9 E4 */	lfs f0, "@1046"@sda21(r2)
/* 8016850C 001655EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80168510 001655F0  40 80 04 BC */	bge .L_801689CC
/* 80168514 001655F4  D0 15 00 54 */	stfs f0, 0x54(r21)
/* 80168518 001655F8  48 00 04 B4 */	b .L_801689CC
.L_8016851C:
/* 8016851C 001655FC  C0 22 A9 F4 */	lfs f1, "@1050"@sda21(r2)
/* 80168520 00165600  C0 15 00 54 */	lfs f0, 0x54(r21)
/* 80168524 00165604  EC 01 07 FA */	fmadds f0, f1, f31, f0
/* 80168528 00165608  D0 15 00 54 */	stfs f0, 0x54(r21)
/* 8016852C 0016560C  C0 35 00 54 */	lfs f1, 0x54(r21)
/* 80168530 00165610  C0 02 AA C8 */	lfs f0, "@2426"@sda21(r2)
/* 80168534 00165614  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80168538 00165618  40 81 04 94 */	ble .L_801689CC
/* 8016853C 0016561C  D0 15 00 54 */	stfs f0, 0x54(r21)
/* 80168540 00165620  48 00 04 8C */	b .L_801689CC
.L_80168544:
/* 80168544 00165624  C0 35 00 4C */	lfs f1, 0x4c(r21)
/* 80168548 00165628  C0 02 A9 C0 */	lfs f0, "@831"@sda21(r2)
/* 8016854C 0016562C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80168550 00165630  40 81 04 7C */	ble .L_801689CC
/* 80168554 00165634  38 00 00 04 */	li r0, 0x4
/* 80168558 00165638  90 15 00 50 */	stw r0, 0x50(r21)
/* 8016855C 0016563C  80 7C 02 C4 */	lwz r3, 0x2c4(r28)
/* 80168560 00165640  38 03 00 01 */	addi r0, r3, 0x1
/* 80168564 00165644  90 1C 02 C4 */	stw r0, 0x2c4(r28)
/* 80168568 00165648  80 1C 02 C4 */	lwz r0, 0x2c4(r28)
/* 8016856C 0016564C  2C 00 00 03 */	cmpwi r0, 0x3
/* 80168570 00165650  40 81 04 5C */	ble .L_801689CC
/* 80168574 00165654  38 00 00 03 */	li r0, 0x3
/* 80168578 00165658  90 1C 02 C4 */	stw r0, 0x2c4(r28)
/* 8016857C 0016565C  48 00 04 50 */	b .L_801689CC
.L_80168580:
/* 80168580 00165660  38 80 00 00 */	li r4, 0x0
/* 80168584 00165664  4B F8 AA F5 */	bl AnimTimeRemain__10zNPCCommonFP10xAnimState
/* 80168588 00165668  C0 02 AA B4 */	lfs f0, "@2280"@sda21(r2)
/* 8016858C 0016566C  EC 00 07 F2 */	fmuls f0, f0, f31
/* 80168590 00165670  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80168594 00165674  40 80 04 38 */	bge .L_801689CC
/* 80168598 00165678  38 00 00 05 */	li r0, 0x5
/* 8016859C 0016567C  3C 60 80 27 */	lis r3, "@stringBase0"@ha
/* 801685A0 00165680  38 63 08 9C */	addi r3, r3, "@stringBase0"@l
/* 801685A4 00165684  90 15 00 50 */	stw r0, 0x50(r21)
/* 801685A8 00165688  38 63 06 ED */	addi r3, r3, 0x6ed
/* 801685AC 0016568C  4B EE 3C 69 */	bl xStrHash__FPCc
/* 801685B0 00165690  C0 42 A9 C4 */	lfs f2, "@832"@sda21(r2)
/* 801685B4 00165694  7F 86 E3 78 */	mr r6, r28
/* 801685B8 00165698  C0 22 AA 38 */	lfs f1, "@1658"@sda21(r2)
/* 801685BC 0016569C  38 80 00 00 */	li r4, 0x0
/* 801685C0 001656A0  FC A0 10 90 */	fmr f5, f2
/* 801685C4 001656A4  C0 62 AA 20 */	lfs f3, "@1141"@sda21(r2)
/* 801685C8 001656A8  C0 82 AA 3C */	lfs f4, "@1659"@sda21(r2)
/* 801685CC 001656AC  38 A0 00 00 */	li r5, 0x0
/* 801685D0 001656B0  38 E0 00 00 */	li r7, 0x0
/* 801685D4 001656B4  4B EE 04 91 */	bl xSndPlay3D__FUiffUiUiP4xEntff14sound_categoryf
/* 801685D8 001656B8  90 75 00 5C */	stw r3, 0x5c(r21)
/* 801685DC 001656BC  7E A3 AB 78 */	mr r3, r21
/* 801685E0 001656C0  38 80 00 20 */	li r4, 0x20
/* 801685E4 001656C4  38 A0 00 00 */	li r5, 0x0
/* 801685E8 001656C8  4B F6 CD 31 */	bl DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi
/* 801685EC 001656CC  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801685F0 001656D0  D0 15 00 4C */	stfs f0, 0x4c(r21)
/* 801685F4 001656D4  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801685F8 001656D8  D0 15 00 58 */	stfs f0, 0x58(r21)
/* 801685FC 001656DC  80 1C 02 B8 */	lwz r0, 0x2b8(r28)
/* 80168600 001656E0  2C 00 00 04 */	cmpwi r0, 0x4
/* 80168604 001656E4  40 82 00 30 */	bne .L_80168634
/* 80168608 001656E8  80 7C 18 E4 */	lwz r3, 0x18e4(r28)
/* 8016860C 001656EC  3C 80 80 2A */	lis r4, sNFComment@ha
/* 80168610 001656F0  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80168614 001656F4  38 A0 00 00 */	li r5, 0x0
/* 80168618 001656F8  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 8016861C 001656FC  38 C0 FF FF */	li r6, -0x1
/* 80168620 00165700  80 84 00 24 */	lwz r4, 0x24(r4)
/* 80168624 00165704  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80168628 00165708  7D 89 03 A6 */	mtctr r12
/* 8016862C 0016570C  4E 80 04 21 */	bctrl
/* 80168630 00165710  48 00 03 9C */	b .L_801689CC
.L_80168634:
/* 80168634 00165714  2C 00 00 05 */	cmpwi r0, 0x5
/* 80168638 00165718  40 82 03 94 */	bne .L_801689CC
/* 8016863C 0016571C  80 1C 18 E8 */	lwz r0, 0x18e8(r28)
/* 80168640 00165720  54 00 06 73 */	rlwinm. r0, r0, 0, 25, 25
/* 80168644 00165724  41 82 00 10 */	beq .L_80168654
/* 80168648 00165728  4B EC 86 21 */	bl xrand__Fv
/* 8016864C 0016572C  28 03 00 00 */	cmplwi r3, 0x0
/* 80168650 00165730  40 82 03 7C */	bne .L_801689CC
.L_80168654:
/* 80168654 00165734  80 7C 18 E4 */	lwz r3, 0x18e4(r28)
/* 80168658 00165738  3C 80 80 2A */	lis r4, sNFComment@ha
/* 8016865C 0016573C  38 84 AA E0 */	addi r4, r4, sNFComment@l
/* 80168660 00165740  38 A0 00 00 */	li r5, 0x0
/* 80168664 00165744  81 83 01 B8 */	lwz r12, 0x1b8(r3)
/* 80168668 00165748  38 C0 FF FF */	li r6, -0x1
/* 8016866C 0016574C  80 84 00 14 */	lwz r4, 0x14(r4)
/* 80168670 00165750  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80168674 00165754  7D 89 03 A6 */	mtctr r12
/* 80168678 00165758  4E 80 04 21 */	bctrl
/* 8016867C 0016575C  80 1C 18 E8 */	lwz r0, 0x18e8(r28)
/* 80168680 00165760  60 00 00 40 */	ori r0, r0, 0x40
/* 80168684 00165764  90 1C 18 E8 */	stw r0, 0x18e8(r28)
/* 80168688 00165768  48 00 03 44 */	b .L_801689CC
.L_8016868C:
/* 8016868C 0016576C  4B EC 85 FD */	bl xurand__Fv
/* 80168690 00165770  C0 02 A9 E4 */	lfs f0, "@1046"@sda21(r2)
/* 80168694 00165774  3C 00 43 30 */	lis r0, 0x4330
/* 80168698 00165778  3C 80 80 2A */	lis r4, sBone@ha
/* 8016869C 0016577C  3C 60 80 3C */	lis r3, globals@ha
/* 801686A0 00165780  EC 40 08 2A */	fadds f2, f0, f1
/* 801686A4 00165784  C0 22 AA DC */	lfs f1, "@2597"@sda21(r2)
/* 801686A8 00165788  C0 15 00 58 */	lfs f0, 0x58(r21)
/* 801686AC 0016578C  3B C4 AA 68 */	addi r30, r4, sBone@l
/* 801686B0 00165790  90 01 00 98 */	stw r0, 0x98(r1)
/* 801686B4 00165794  3B E3 05 58 */	addi r31, r3, globals@l
/* 801686B8 00165798  EC 21 00 B2 */	fmuls f1, f1, f2
/* 801686BC 0016579C  3B A1 00 50 */	addi r29, r1, 0x50
/* 801686C0 001657A0  3B 60 00 00 */	li r27, 0x0
/* 801686C4 001657A4  EC 1F 00 7A */	fmadds f0, f31, f1, f0
/* 801686C8 001657A8  D0 15 00 58 */	stfs f0, 0x58(r21)
/* 801686CC 001657AC  C0 55 00 58 */	lfs f2, 0x58(r21)
/* 801686D0 001657B0  C8 22 A9 D0 */	lfd f1, "@875"@sda21(r2)
/* 801686D4 001657B4  FC 00 10 1E */	fctiwz f0, f2
/* 801686D8 001657B8  D8 01 00 90 */	stfd f0, 0x90(r1)
/* 801686DC 001657BC  83 41 00 94 */	lwz r26, 0x94(r1)
/* 801686E0 001657C0  6F 40 80 00 */	xoris r0, r26, 0x8000
/* 801686E4 001657C4  90 01 00 9C */	stw r0, 0x9c(r1)
/* 801686E8 001657C8  C8 01 00 98 */	lfd f0, 0x98(r1)
/* 801686EC 001657CC  EC 00 08 28 */	fsubs f0, f0, f1
/* 801686F0 001657D0  EC 02 00 28 */	fsubs f0, f2, f0
/* 801686F4 001657D4  D0 15 00 58 */	stfs f0, 0x58(r21)
/* 801686F8 001657D8  48 00 02 64 */	b .L_8016895C
.L_801686FC:
/* 801686FC 001657DC  7F 83 E3 78 */	mr r3, r28
/* 80168700 001657E0  4B FF B6 61 */	bl getNextFreeGlob__12zNPCBPatrickFv
/* 80168704 001657E4  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80168708 001657E8  7C 79 1B 78 */	mr r25, r3
/* 8016870C 001657EC  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 80168710 001657F0  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 80168714 001657F4  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 80168718 001657F8  4B EC 85 71 */	bl xurand__Fv
/* 8016871C 001657FC  C0 42 AA 88 */	lfs f2, "@1678"@sda21(r2)
/* 80168720 00165800  38 61 00 24 */	addi r3, r1, 0x24
/* 80168724 00165804  C0 02 A9 C0 */	lfs f0, "@831"@sda21(r2)
/* 80168728 00165808  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 8016872C 0016580C  D0 19 00 20 */	stfs f0, 0x20(r25)
/* 80168730 00165810  C0 02 AA 08 */	lfs f0, "@1055"@sda21(r2)
/* 80168734 00165814  D0 19 00 18 */	stfs f0, 0x18(r25)
/* 80168738 00165818  C0 22 A9 C4 */	lfs f1, "@832"@sda21(r2)
/* 8016873C 0016581C  FC 40 08 90 */	fmr f2, f1
/* 80168740 00165820  FC 60 08 90 */	fmr f3, f1
/* 80168744 00165824  4B EA 68 B9 */	bl xVec3Init__FP5xVec3fff
/* 80168748 00165828  80 9C 00 24 */	lwz r4, 0x24(r28)
/* 8016874C 0016582C  38 61 00 18 */	addi r3, r1, 0x18
/* 80168750 00165830  80 BE 00 08 */	lwz r5, 0x8(r30)
/* 80168754 00165834  38 C1 00 24 */	addi r6, r1, 0x24
/* 80168758 00165838  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 8016875C 0016583C  4B FF 82 09 */	bl GetBonePos__FP5xVec3P7xMat4x3iP5xVec3
/* 80168760 00165840  80 9C 00 24 */	lwz r4, 0x24(r28)
/* 80168764 00165844  38 61 00 0C */	addi r3, r1, 0xc
/* 80168768 00165848  80 BE 00 04 */	lwz r5, 0x4(r30)
/* 8016876C 0016584C  38 C1 00 24 */	addi r6, r1, 0x24
/* 80168770 00165850  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80168774 00165854  4B FF 81 F1 */	bl GetBonePos__FP5xVec3P7xMat4x3iP5xVec3
/* 80168778 00165858  7F 23 CB 78 */	mr r3, r25
/* 8016877C 0016585C  38 81 00 18 */	addi r4, r1, 0x18
/* 80168780 00165860  38 A1 00 0C */	addi r5, r1, 0xc
/* 80168784 00165864  4B EA 29 35 */	bl xVec3Add__FP5xVec3PC5xVec3PC5xVec3
/* 80168788 00165868  C0 22 A9 E4 */	lfs f1, "@1046"@sda21(r2)
/* 8016878C 0016586C  7F 23 CB 78 */	mr r3, r25
/* 80168790 00165870  4B EB 31 A9 */	bl xVec3SMulBy__FP5xVec3f
/* 80168794 00165874  4B EC 84 F5 */	bl xurand__Fv
/* 80168798 00165878  C0 42 A9 E4 */	lfs f2, "@1046"@sda21(r2)
/* 8016879C 0016587C  C0 19 00 04 */	lfs f0, 0x4(r25)
/* 801687A0 00165880  EC 21 10 28 */	fsubs f1, f1, f2
/* 801687A4 00165884  EC 00 08 2A */	fadds f0, f0, f1
/* 801687A8 00165888  D0 19 00 04 */	stfs f0, 0x4(r25)
/* 801687AC 0016588C  4B EC 84 DD */	bl xurand__Fv
/* 801687B0 00165890  C0 02 A9 E4 */	lfs f0, "@1046"@sda21(r2)
/* 801687B4 00165894  7F 23 CB 78 */	mr r3, r25
/* 801687B8 00165898  80 9C 00 24 */	lwz r4, 0x24(r28)
/* 801687BC 0016589C  EC 21 00 28 */	fsubs f1, f1, f0
/* 801687C0 001658A0  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 801687C4 001658A4  4B EA C8 95 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 801687C8 001658A8  7F 24 CB 78 */	mr r4, r25
/* 801687CC 001658AC  38 79 00 28 */	addi r3, r25, 0x28
/* 801687D0 001658B0  4B EE 5D 0D */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 801687D4 001658B4  80 9C 00 24 */	lwz r4, 0x24(r28)
/* 801687D8 001658B8  38 79 00 0C */	addi r3, r25, 0xc
/* 801687DC 001658BC  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 801687E0 001658C0  38 84 00 20 */	addi r4, r4, 0x20
/* 801687E4 001658C4  4B EE 5C F9 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 801687E8 001658C8  4B EC 84 A1 */	bl xurand__Fv
/* 801687EC 001658CC  C0 02 A9 E4 */	lfs f0, "@1046"@sda21(r2)
/* 801687F0 001658D0  38 79 00 0C */	addi r3, r25, 0xc
/* 801687F4 001658D4  80 9C 00 24 */	lwz r4, 0x24(r28)
/* 801687F8 001658D8  EC 21 00 28 */	fsubs f1, f1, f0
/* 801687FC 001658DC  C0 02 AA 50 */	lfs f0, "@1664"@sda21(r2)
/* 80168800 001658E0  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80168804 001658E4  EC 20 00 72 */	fmuls f1, f0, f1
/* 80168808 001658E8  4B EA C8 51 */	bl xVec3AddScaled__FP5xVec3PC5xVec3f
/* 8016880C 001658EC  4B EC 84 7D */	bl xurand__Fv
/* 80168810 001658F0  C0 62 A9 F0 */	lfs f3, "@1049"@sda21(r2)
/* 80168814 001658F4  C0 42 AA 24 */	lfs f2, "@1142"@sda21(r2)
/* 80168818 001658F8  C0 19 00 0C */	lfs f0, 0xc(r25)
/* 8016881C 001658FC  EC 23 10 7A */	fmadds f1, f3, f1, f2
/* 80168820 00165900  EC 00 00 72 */	fmuls f0, f0, f1
/* 80168824 00165904  D0 19 00 0C */	stfs f0, 0xc(r25)
/* 80168828 00165908  4B EC 84 61 */	bl xurand__Fv
/* 8016882C 0016590C  C0 42 A9 EC */	lfs f2, "@1048"@sda21(r2)
/* 80168830 00165910  C0 19 00 10 */	lfs f0, 0x10(r25)
/* 80168834 00165914  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80168838 00165918  D0 19 00 10 */	stfs f0, 0x10(r25)
/* 8016883C 0016591C  4B EC 84 4D */	bl xurand__Fv
/* 80168840 00165920  C0 62 A9 F0 */	lfs f3, "@1049"@sda21(r2)
/* 80168844 00165924  7F 23 CB 78 */	mr r3, r25
/* 80168848 00165928  C0 42 AA 24 */	lfs f2, "@1142"@sda21(r2)
/* 8016884C 0016592C  38 A1 00 3C */	addi r5, r1, 0x3c
/* 80168850 00165930  C0 19 00 14 */	lfs f0, 0x14(r25)
/* 80168854 00165934  EC 23 10 7A */	fmadds f1, f3, f1, f2
/* 80168858 00165938  EC 00 00 72 */	fmuls f0, f0, f1
/* 8016885C 0016593C  D0 19 00 14 */	stfs f0, 0x14(r25)
/* 80168860 00165940  80 9F 1F C0 */	lwz r4, 0x1fc0(r31)
/* 80168864 00165944  80 84 00 44 */	lwz r4, 0x44(r4)
/* 80168868 00165948  4B EA 77 81 */	bl xParabolaHitsEnv__FP9xParabolaPC4xEnvP7xCollis
/* 8016886C 0016594C  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 80168870 00165950  54 00 07 FF */	clrlwi. r0, r0, 31
/* 80168874 00165954  41 82 00 24 */	beq .L_80168898
/* 80168878 00165958  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 8016887C 0016595C  7F A4 EB 78 */	mr r4, r29
/* 80168880 00165960  38 79 00 34 */	addi r3, r25, 0x34
/* 80168884 00165964  D0 19 00 20 */	stfs f0, 0x20(r25)
/* 80168888 00165968  4B EE 5C 55 */	bl xVec3Copy__FP5xVec3PC5xVec3
/* 8016888C 0016596C  80 19 00 50 */	lwz r0, 0x50(r25)
/* 80168890 00165970  60 00 00 02 */	ori r0, r0, 0x2
/* 80168894 00165974  90 19 00 50 */	stw r0, 0x50(r25)
.L_80168898:
/* 80168898 00165978  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8016889C 0016597C  7F 83 E3 78 */	mr r3, r28
/* 801688A0 00165980  7F 24 CB 78 */	mr r4, r25
/* 801688A4 00165984  38 A1 00 3C */	addi r5, r1, 0x3c
/* 801688A8 00165988  54 00 00 3C */	clrrwi r0, r0, 1
/* 801688AC 0016598C  90 01 00 3C */	stw r0, 0x3c(r1)
/* 801688B0 00165990  4B FF BC 9D */	bl ParabolaHitsConveyors__12zNPCBPatrickFP9xParabolaP7xCollis
/* 801688B4 00165994  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 801688B8 00165998  54 00 07 FF */	clrlwi. r0, r0, 31
/* 801688BC 0016599C  41 82 00 9C */	beq .L_80168958
/* 801688C0 001659A0  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 801688C4 001659A4  D0 19 00 20 */	stfs f0, 0x20(r25)
/* 801688C8 001659A8  80 19 00 50 */	lwz r0, 0x50(r25)
/* 801688CC 001659AC  60 00 00 02 */	ori r0, r0, 0x2
/* 801688D0 001659B0  90 19 00 50 */	stw r0, 0x50(r25)
/* 801688D4 001659B4  C0 21 00 5C */	lfs f1, 0x5c(r1)
/* 801688D8 001659B8  C0 02 AA 8C */	lfs f0, "@1679"@sda21(r2)
/* 801688DC 001659BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801688E0 001659C0  40 80 00 64 */	bge .L_80168944
/* 801688E4 001659C4  C0 02 AA 90 */	lfs f0, "@1680"@sda21(r2)
/* 801688E8 001659C8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801688EC 001659CC  40 81 00 58 */	ble .L_80168944
/* 801688F0 001659D0  C0 21 00 64 */	lfs f1, 0x64(r1)
/* 801688F4 001659D4  C0 02 AA 94 */	lfs f0, "@1681"@sda21(r2)
/* 801688F8 001659D8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801688FC 001659DC  40 81 00 48 */	ble .L_80168944
/* 80168900 001659E0  80 19 00 50 */	lwz r0, 0x50(r25)
/* 80168904 001659E4  38 79 00 34 */	addi r3, r25, 0x34
/* 80168908 001659E8  60 00 00 08 */	ori r0, r0, 0x8
/* 8016890C 001659EC  90 19 00 50 */	stw r0, 0x50(r25)
/* 80168910 001659F0  C0 22 A9 C4 */	lfs f1, "@832"@sda21(r2)
/* 80168914 001659F4  C0 42 A9 C0 */	lfs f2, "@831"@sda21(r2)
/* 80168918 001659F8  FC 60 08 90 */	fmr f3, f1
/* 8016891C 001659FC  4B EA 66 E1 */	bl xVec3Init__FP5xVec3fff
/* 80168920 00165A00  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80168924 00165A04  38 79 00 40 */	addi r3, r25, 0x40
/* 80168928 00165A08  90 19 00 4C */	stw r0, 0x4c(r25)
/* 8016892C 00165A0C  80 99 00 4C */	lwz r4, 0x4c(r25)
/* 80168930 00165A10  80 A4 00 D4 */	lwz r5, 0xd4(r4)
/* 80168934 00165A14  80 84 00 AC */	lwz r4, 0xac(r4)
/* 80168938 00165A18  C0 25 00 04 */	lfs f1, 0x4(r5)
/* 8016893C 00165A1C  4B EA 27 55 */	bl xVec3SMul__FP5xVec3PC5xVec3f
/* 80168940 00165A20  48 00 00 18 */	b .L_80168958
.L_80168944:
/* 80168944 00165A24  C0 22 A9 C4 */	lfs f1, "@832"@sda21(r2)
/* 80168948 00165A28  38 79 00 34 */	addi r3, r25, 0x34
/* 8016894C 00165A2C  C0 42 A9 CC */	lfs f2, "@870"@sda21(r2)
/* 80168950 00165A30  FC 60 08 90 */	fmr f3, f1
/* 80168954 00165A34  4B EA 66 A9 */	bl xVec3Init__FP5xVec3fff
.L_80168958:
/* 80168958 00165A38  3B 7B 00 01 */	addi r27, r27, 0x1
.L_8016895C:
/* 8016895C 00165A3C  7C 1B D0 00 */	cmpw r27, r26
/* 80168960 00165A40  41 80 FD 9C */	blt .L_801686FC
/* 80168964 00165A44  3C 60 80 3C */	lis r3, globals@ha
/* 80168968 00165A48  FC 40 F8 90 */	fmr f2, f31
/* 8016896C 00165A4C  38 63 05 58 */	addi r3, r3, globals@l
/* 80168970 00165A50  C0 22 A9 E4 */	lfs f1, "@1046"@sda21(r2)
/* 80168974 00165A54  80 83 07 04 */	lwz r4, 0x704(r3)
/* 80168978 00165A58  7F 83 E3 78 */	mr r3, r28
/* 8016897C 00165A5C  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 80168980 00165A60  38 84 00 30 */	addi r4, r4, 0x30
/* 80168984 00165A64  4B FF CA 85 */	bl Pat_FaceTarget__FP12zNPCBPatrickPC5xVec3ff
/* 80168988 00165A68  C0 35 00 4C */	lfs f1, 0x4c(r21)
/* 8016898C 00165A6C  C0 02 AA F8 */	lfs f0, "@2994"@sda21(r2)
/* 80168990 00165A70  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80168994 00165A74  41 81 00 10 */	bgt .L_801689A4
/* 80168998 00165A78  80 1C 02 B4 */	lwz r0, 0x2b4(r28)
/* 8016899C 00165A7C  54 00 07 BD */	rlwinm. r0, r0, 0, 30, 30
/* 801689A0 00165A80  41 82 00 2C */	beq .L_801689CC
.L_801689A4:
/* 801689A4 00165A84  38 00 00 06 */	li r0, 0x6
/* 801689A8 00165A88  90 15 00 50 */	stw r0, 0x50(r21)
/* 801689AC 00165A8C  80 75 00 5C */	lwz r3, 0x5c(r21)
/* 801689B0 00165A90  4B EE 08 51 */	bl xSndStop__FUi
/* 801689B4 00165A94  7E A3 AB 78 */	mr r3, r21
/* 801689B8 00165A98  38 80 00 20 */	li r4, 0x20
/* 801689BC 00165A9C  38 A0 00 00 */	li r5, 0x0
/* 801689C0 00165AA0  4B F6 C9 59 */	bl DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi
/* 801689C4 00165AA4  C0 02 A9 C4 */	lfs f0, "@832"@sda21(r2)
/* 801689C8 00165AA8  D0 15 00 4C */	stfs f0, 0x4c(r21)
.L_801689CC:
/* 801689CC 00165AAC  80 9C 00 24 */	lwz r4, 0x24(r28)
/* 801689D0 00165AB0  FC 20 F8 90 */	fmr f1, f31
/* 801689D4 00165AB4  C0 15 00 54 */	lfs f0, 0x54(r21)
/* 801689D8 00165AB8  7E A3 AB 78 */	mr r3, r21
/* 801689DC 00165ABC  80 C4 00 0C */	lwz r6, 0xc(r4)
/* 801689E0 00165AC0  7E C4 B3 78 */	mr r4, r22
/* 801689E4 00165AC4  7E E5 BB 78 */	mr r5, r23
/* 801689E8 00165AC8  80 E6 00 08 */	lwz r7, 0x8(r6)
/* 801689EC 00165ACC  7F 06 C3 78 */	mr r6, r24
/* 801689F0 00165AD0  D0 07 00 10 */	stfs f0, 0x10(r7)
/* 801689F4 00165AD4  80 FC 00 24 */	lwz r7, 0x24(r28)
/* 801689F8 00165AD8  C0 15 00 54 */	lfs f0, 0x54(r21)
/* 801689FC 00165ADC  80 E7 00 0C */	lwz r7, 0xc(r7)
/* 80168A00 00165AE0  80 E7 00 08 */	lwz r7, 0x8(r7)
/* 80168A04 00165AE4  80 E7 00 34 */	lwz r7, 0x34(r7)
/* 80168A08 00165AE8  D0 07 00 10 */	stfs f0, 0x10(r7)
/* 80168A0C 00165AEC  4B FA 61 3D */	bl Process__5xGoalFP11en_trantypefPvP6xScene
/* 80168A10 00165AF0  E3 E1 00 D8 */	psq_l f31, 0xd8(r1), 0, qr0
/* 80168A14 00165AF4  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 80168A18 00165AF8  BA A1 00 A4 */	lmw r21, 0xa4(r1)
/* 80168A1C 00165AFC  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 80168A20 00165B00  7C 08 03 A6 */	mtlr r0
/* 80168A24 00165B04  38 21 00 E0 */	addi r1, r1, 0xe0
/* 80168A28 00165B08  4E 80 00 20 */	blr
.endfn Process__20zNPCGoalBossPatFudgeFP11en_trantypefPvP6xScene

# 0x80168A2C - 0x80168A90
.section .text, "ax", unique, 1
.balign 4

# xMat3x3RMulVec(xVec3*, const xMat3x3*, const xVec3*)
.fn xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3, local
/* 80168A2C 00165B0C  C0 65 00 04 */	lfs f3, 0x4(r5)
/* 80168A30 00165B10  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 80168A34 00165B14  C0 44 00 14 */	lfs f2, 0x14(r4)
/* 80168A38 00165B18  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80168A3C 00165B1C  C0 C5 00 00 */	lfs f6, 0x0(r5)
/* 80168A40 00165B20  C0 24 00 00 */	lfs f1, 0x0(r4)
/* 80168A44 00165B24  EC 82 00 F2 */	fmuls f4, f2, f3
/* 80168A48 00165B28  C0 44 00 18 */	lfs f2, 0x18(r4)
/* 80168A4C 00165B2C  C0 A4 00 04 */	lfs f5, 0x4(r4)
/* 80168A50 00165B30  EC 01 01 BA */	fmadds f0, f1, f6, f0
/* 80168A54 00165B34  C0 E5 00 08 */	lfs f7, 0x8(r5)
/* 80168A58 00165B38  C0 24 00 20 */	lfs f1, 0x20(r4)
/* 80168A5C 00165B3C  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80168A60 00165B40  C0 64 00 08 */	lfs f3, 0x8(r4)
/* 80168A64 00165B44  EC 85 21 BA */	fmadds f4, f5, f6, f4
/* 80168A68 00165B48  EC 01 01 FA */	fmadds f0, f1, f7, f0
/* 80168A6C 00165B4C  C0 A4 00 24 */	lfs f5, 0x24(r4)
/* 80168A70 00165B50  EC 23 11 BA */	fmadds f1, f3, f6, f2
/* 80168A74 00165B54  C0 44 00 28 */	lfs f2, 0x28(r4)
/* 80168A78 00165B58  EC 65 21 FA */	fmadds f3, f5, f7, f4
/* 80168A7C 00165B5C  D0 03 00 00 */	stfs f0, 0x0(r3)
/* 80168A80 00165B60  EC 02 09 FA */	fmadds f0, f2, f7, f1
/* 80168A84 00165B64  D0 63 00 04 */	stfs f3, 0x4(r3)
/* 80168A88 00165B68  D0 03 00 08 */	stfs f0, 0x8(r3)
/* 80168A8C 00165B6C  4E 80 00 20 */	blr
.endfn xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3

# 0x80168A90 - 0x80168A94
.section .text, "ax", unique, 2
.balign 4

# xDebugAddTweak(const char*, unsigned int*, unsigned int, unsigned int, const tweak_callback*, void*, unsigned int)
.fn xDebugAddTweak__FPCcPUiUiUiPC14tweak_callbackPvUi, weak
/* 80168A90 00165B70  4E 80 00 20 */	blr
.endfn xDebugAddTweak__FPCcPUiUiUiPC14tweak_callbackPvUi

# 0x802707F0 - 0x80270FA8
.rodata
.balign 8

.obj "@828", local
	.4byte 0x00000001
	.4byte 0x00000002
	.4byte 0x00000003
	.4byte 0x00000004
	.4byte 0x00000006
	.4byte 0x00000007
	.4byte 0x00000008
	.4byte 0x00000009
	.4byte 0x0000001C
	.4byte 0x0000001D
	.4byte 0x0000001E
	.4byte 0x0000001F
	.4byte 0x00000020
	.4byte 0x00000021
	.4byte 0x00000022
	.4byte 0x00000023
	.4byte 0x00000024
	.4byte 0x00000025
	.4byte 0x00000026
	.4byte 0x0000000A
	.4byte 0x00000027
	.4byte 0x00000028
	.4byte 0x00000000
.endobj "@828"

.obj newsfish_cb, local
	.4byte on_change_newsfish__FRC10tweak_info
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj newsfish_cb

.obj recenter_cb, local
	.4byte on_change_recenter__FRC10tweak_info
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj recenter_cb

.obj "@stringBase0", local
	.4byte 0x46414231
	.4byte 0x30333600
.L_802708A4:
	.4byte 0x46414231
	.4byte 0x30343200
.L_802708AC:
	.4byte 0x46414231
	.4byte 0x30343600
.L_802708B4:
	.4byte 0x46414231
	.4byte 0x30343700
.L_802708BC:
	.4byte 0x46414231
	.4byte 0x30343900
.L_802708C4:
	.4byte 0x46414231
	.4byte 0x30353000
.L_802708CC:
	.4byte 0x46414231
	.4byte 0x30333400
.L_802708D4:
	.4byte 0x46414231
	.4byte 0x30333500
.L_802708DC:
	.4byte 0x46414231
	.4byte 0x30343000
.L_802708E4:
	.4byte 0x46414231
	.4byte 0x30353300
.L_802708EC:
	.4byte 0x46414231
	.4byte 0x30353500
.L_802708F4:
	.4byte 0x46414231
	.4byte 0x30353600
.L_802708FC:
	.4byte 0x46414231
	.4byte 0x30333300
.L_80270904:
	.4byte 0x46414231
	.4byte 0x30333700
.L_8027090C:
	.4byte 0x46414231
	.4byte 0x30353200
.L_80270914:
	.4byte 0x46414231
	.4byte 0x3033395F
	.2byte 0x6100
.L_8027091E:
	.4byte 0x46414231
	.4byte 0x3033395F
	.2byte 0x6200
.L_80270928:
	.4byte 0x46414231
	.4byte 0x3033395F
	.2byte 0x6300
.L_80270932:
	.4byte 0x46414231
	.4byte 0x3034315F
	.2byte 0x6100
.L_8027093C:
	.4byte 0x46414231
	.4byte 0x3034315F
	.2byte 0x6200
.L_80270946:
	.4byte 0x46414231
	.4byte 0x30333800
.L_8027094E:
	.4byte 0x46414231
	.4byte 0x30353100
.L_80270956:
	.4byte 0x46414231
	.4byte 0x30353400
.L_8027095E:
	.4byte 0x46414231
	.4byte 0x30303600
.L_80270966:
	.4byte 0x46414231
	.4byte 0x30303700
.L_8027096E:
	.4byte 0x46414231
	.4byte 0x30303800
.L_80270976:
	.4byte 0x46414231
	.4byte 0x30303900
.L_8027097E:
	.4byte 0x46414231
	.4byte 0x30313200
.L_80270986:
	.4byte 0x46414231
	.4byte 0x30313300
.L_8027098E:
	.4byte 0x46414231
	.4byte 0x30313400
.L_80270996:
	.4byte 0x46414231
	.4byte 0x30313600
.L_8027099E:
	.4byte 0x46414231
	.4byte 0x30323800
.L_802709A6:
	.4byte 0x46414231
	.4byte 0x30363400
.L_802709AE:
	.4byte 0x46414231
	.4byte 0x30363500
.L_802709B6:
	.4byte 0x46414231
	.4byte 0x30363700
.L_802709BE:
	.4byte 0x46414231
	.4byte 0x3038315F
	.2byte 0x6100
.L_802709C8:
	.4byte 0x46414231
	.4byte 0x3038315F
	.4byte 0x62007A4E
	.4byte 0x50434250
	.4byte 0x61747269
	.4byte 0x636B0069
	.4byte 0x63655F77
	.4byte 0x61766500
	.4byte 0x46524545
	.4byte 0x5A455F42
	.4byte 0x52454154
	.4byte 0x485F454D
	.4byte 0x49540046
	.4byte 0x55444745
	.4byte 0x5F454D49
	.4byte 0x54005354
	.4byte 0x45414D20
	.4byte 0x50415220
	.4byte 0x454D4954
	.4byte 0x00474F4F
	.4byte 0x204F424A
	.4byte 0x00465544
	.4byte 0x47455F48
	.4byte 0x414E444C
	.4byte 0x45005357
	.4byte 0x494E4748
	.4byte 0x4F4F4B20
	.4byte 0x30300057
	.4byte 0x4F4F4445
	.4byte 0x4E5F504C
	.4byte 0x41545F30
	.4byte 0x305F3030
	.4byte 0x00574F4F
	.4byte 0x44454E5F
	.4byte 0x504C4154
	.4byte 0x5F424143
	.4byte 0x4B006232
	.4byte 0x5F626F78
	.4byte 0x5F736872
	.4byte 0x61706E65
	.4byte 0x6C006232
	.4byte 0x5F626F78
	.4byte 0x5F73706C
	.4byte 0x6173685F
	.4byte 0x73687261
	.4byte 0x706E656C
	.4byte 0x0066785F
	.4byte 0x626F7373
	.4byte 0x5F70615F
	.4byte 0x73706974
	.4byte 0x0066785F
	.4byte 0x626F7373
	.4byte 0x5F70615F
	.4byte 0x73706C61
	.4byte 0x74006232
	.4byte 0x5F696365
	.4byte 0x5F736861
	.4byte 0x72640073
	.4byte 0x625F6963
	.4byte 0x655F6272
	.4byte 0x65616B00
	.4byte 0x62325F53
	.4byte 0x425F6672
	.4byte 0x6F7A656E
	.4byte 0x0062325F
	.4byte 0x53425F66
	.4byte 0x726F7A65
	.4byte 0x6E5F6963
	.4byte 0x65004353
	.4byte 0x4E4D4752
	.4byte 0x5F524F55
	.4byte 0x4E443100
	.4byte 0x43534E4D
	.4byte 0x47525F52
	.4byte 0x4F554E44
	.4byte 0x32004353
	.4byte 0x4E4D4752
	.4byte 0x5F524F55
	.4byte 0x4E443300
	.4byte 0x53414645
	.4byte 0x47524F55
	.4byte 0x4E445F50
	.4byte 0x4F525441
	.4byte 0x4C004D4B
	.4byte 0x20415245
	.4byte 0x4E412045
	.4byte 0x5854454E
	.4byte 0x54004655
	.4byte 0x4447455F
	.4byte 0x504F5300
	.4byte 0x524F424F
	.4byte 0x545F4348
	.4byte 0x55434B5F
	.4byte 0x4E504330
	.4byte 0x31004D50
	.4byte 0x5F434855
	.4byte 0x434B5F41
	.4byte 0x52454E41
	.4byte 0x3031004E
	.4byte 0x45575346
	.4byte 0x49534800
	.4byte 0x4845414C
	.4byte 0x54485F30
	.4byte 0x3000434F
	.4byte 0x4E564559
	.4byte 0x4F522042
	.4byte 0x454C5420
	.4byte 0x30310043
	.4byte 0x4F4E5645
	.4byte 0x594F5220
	.4byte 0x42454C54
	.4byte 0x20303200
	.4byte 0x434F4E56
	.4byte 0x45594F52
	.4byte 0x2042454C
	.4byte 0x54203033
	.4byte 0x00434F4E
	.4byte 0x5645594F
	.4byte 0x52204245
	.4byte 0x4C542030
	.4byte 0x3400434F
	.4byte 0x4E564559
	.4byte 0x4F522042
	.4byte 0x454C5420
	.4byte 0x30380043
	.4byte 0x4F4E5645
	.4byte 0x594F5220
	.4byte 0x42454C54
	.4byte 0x20303900
	.4byte 0x434F4E56
	.4byte 0x45594F52
	.4byte 0x2042454C
	.4byte 0x54203130
	.4byte 0x004E5043
	.4byte 0x7C7A4E50
	.4byte 0x43425061
	.4byte 0x74726963
	.4byte 0x6B7C426F
	.4byte 0x73732043
	.4byte 0x616D7C00
	.4byte 0x4E50437C
	.4byte 0x7A4E5043
	.4byte 0x42506174
	.4byte 0x7269636B
	.4byte 0x7C426F73
	.4byte 0x73204361
	.4byte 0x6D7C5265
	.4byte 0x63656E74
	.4byte 0x6572002A
	.4byte 0x004E5043
	.4byte 0x7C7A4E50
	.4byte 0x43425061
	.4byte 0x74726963
	.4byte 0x6B7C676C
	.4byte 0x6F62737C
	.4byte 0x6D696E59
	.4byte 0x56656C00
	.4byte 0x4E50437C
	.4byte 0x7A4E5043
	.4byte 0x42506174
	.4byte 0x7269636B
	.4byte 0x7C676C6F
	.4byte 0x62737C76
	.4byte 0x61725956
	.4byte 0x656C004E
	.4byte 0x50437C7A
	.4byte 0x4E504342
	.4byte 0x50617472
	.4byte 0x69636B7C
	.4byte 0x676C6F62
	.4byte 0x737C6D69
	.4byte 0x6E484D75
	.4byte 0x6C004E50
	.4byte 0x437C7A4E
	.4byte 0x50434250
	.4byte 0x61747269
	.4byte 0x636B7C67
	.4byte 0x6C6F6273
	.4byte 0x7C766172
	.4byte 0x484D756C
	.4byte 0x004E5043
	.4byte 0x7C7A4E50
	.4byte 0x43425061
	.4byte 0x74726963
	.4byte 0x6B7C676C
	.4byte 0x6F62737C
	.4byte 0x6D696E54
	.4byte 0x004E5043
	.4byte 0x7C7A4E50
	.4byte 0x43425061
	.4byte 0x74726963
	.4byte 0x6B7C676C
	.4byte 0x6F62737C
	.4byte 0x76617254
	.4byte 0x004E5043
	.4byte 0x7C7A4E50
	.4byte 0x43425061
	.4byte 0x74726963
	.4byte 0x6B7C4E65
	.4byte 0x77736669
	.4byte 0x73680053
	.4byte 0x7065616B
	.4byte 0x004E5043
	.4byte 0x7C7A4E50
	.4byte 0x43425061
	.4byte 0x74726963
	.4byte 0x6B7C4E65
	.4byte 0x77736669
	.4byte 0x7368436F
	.4byte 0x6D6D656E
	.4byte 0x74006232
	.4byte 0x30315F6C
	.4byte 0x6173736F
	.4byte 0x5F616374
	.4byte 0x69766174
	.4byte 0x696F6E00
	.4byte 0x62323031
	.4byte 0x5F696365
	.4byte 0x5F736861
	.4byte 0x74746572
	.4byte 0x00623230
	.4byte 0x315F7270
	.4byte 0x5F667265
	.4byte 0x657A6500
	.4byte 0x62323031
	.4byte 0x5F72705F
	.4byte 0x7370696E
	.4byte 0x5F737075
	.4byte 0x72743100
	.4byte 0x62323031
	.4byte 0x5F72705F
	.4byte 0x7370696E
	.4byte 0x5F737075
	.4byte 0x72743200
	.4byte 0x62323031
	.4byte 0x5F72705F
	.4byte 0x7370696E
	.4byte 0x5F737075
	.4byte 0x72743300
	.4byte 0x62323031
	.4byte 0x5F72705F
	.4byte 0x7370696E
	.4byte 0x5F737075
	.4byte 0x72743400
	.4byte 0x62323031
	.4byte 0x5F72705F
	.4byte 0x7370696E
	.4byte 0x5F737075
	.4byte 0x72743500
	.4byte 0x62323031
	.4byte 0x5F72705F
	.4byte 0x7370696E
	.4byte 0x5F737075
	.4byte 0x72743600
	.4byte 0x62323031
	.4byte 0x5F626F78
	.4byte 0x5F73706C
	.4byte 0x61736800
	.4byte 0x62323031
	.4byte 0x5F626F78
	.4byte 0x5F6C616E
	.4byte 0x64696E67
	.4byte 0x00623230
	.4byte 0x315F7270
	.4byte 0x5F636865
	.4byte 0x73746261
	.4byte 0x6E673100
	.4byte 0x62323031
	.4byte 0x5F72705F
	.4byte 0x63686573
	.4byte 0x7462616E
	.4byte 0x67320062
	.4byte 0x3230315F
	.4byte 0x72705F63
	.4byte 0x68657374
	.4byte 0x62616E67
	.4byte 0x33006232
	.4byte 0x30315F72
	.4byte 0x705F6368
	.4byte 0x65737462
	.4byte 0x616E6734
	.4byte 0x00623230
	.4byte 0x315F7270
	.4byte 0x5F636865
	.4byte 0x73746261
	.4byte 0x6E673500
	.4byte 0x62323031
	.4byte 0x5F72705F
	.4byte 0x63686573
	.4byte 0x7462616E
	.4byte 0x67360062
	.4byte 0x3230315F
	.4byte 0x72705F68
	.4byte 0x7572745F
	.4byte 0x6A756D70
	.4byte 0x00623230
	.4byte 0x315F7270
	.4byte 0x5F687572
	.4byte 0x745F7461
	.4byte 0x6C6B0062
	.4byte 0x3230315F
	.4byte 0x72705F68
	.4byte 0x7572745F
	.4byte 0x74616C6B
	.4byte 0x5F616C74
	.4byte 0x00623230
	.4byte 0x315F7270
	.4byte 0x5F737069
	.4byte 0x74006232
	.4byte 0x30315F72
	.4byte 0x705F7370
	.4byte 0x6974616C
	.4byte 0x74006232
	.4byte 0x30315F72
	.4byte 0x705F7275
	.4byte 0x6E5F6C6F
	.4byte 0x6F700062
	.4byte 0x3230315F
	.4byte 0x72705F73
	.4byte 0x6D61636B
	.4byte 0x00623230
	.4byte 0x315F7270
	.4byte 0x5F696E68
	.4byte 0x616C6500
	.4byte 0x62323031
	.4byte 0x5F72705F
	.4byte 0x65786861
	.4byte 0x6C650062
	.4byte 0x3230315F
	.4byte 0x72705F73
	.4byte 0x70696E5F
	.4byte 0x73746172
	.4byte 0x74006232
	.4byte 0x30315F72
	.4byte 0x705F7370
	.4byte 0x696E5F6C
	.4byte 0x6F6F7000
	.4byte 0x62323031
	.4byte 0x5F72705F
	.4byte 0x7370696E
	.4byte 0x5F737075
	.4byte 0x72745F6C
	.4byte 0x6F6F7000
	.4byte 0x62323031
	.4byte 0x5F72705F
	.4byte 0x7370696E
	.4byte 0x5F64697A
	.4byte 0x7A790062
	.4byte 0x3230315F
	.4byte 0x72705F73
	.4byte 0x70696E5F
	.4byte 0x66616C6C
	.4byte 0x00623230
	.4byte 0x315F7270
	.4byte 0x5F667564
	.4byte 0x67655F66
	.4byte 0x696C6C69
	.4byte 0x6E670062
	.4byte 0x3230315F
	.4byte 0x72705F66
	.4byte 0x75646765
	.4byte 0x5F70756C
	.4byte 0x6C006232
	.4byte 0x30315F72
	.4byte 0x705F6675
	.4byte 0x6467655F
	.4byte 0x6469736D
	.4byte 0x6F756E74
	.4byte 0x00623230
	.4byte 0x315F7270
	.4byte 0x5F667564
	.4byte 0x67655F76
	.4byte 0x6F6D6974
	.4byte 0x5F6C6F6F
	.2byte 0x7000
.endobj "@stringBase0"
	.4byte 0x00000000
	.2byte 0x0000

# 0x8029AA68 - 0x8029AF30
.data
.balign 8

.obj sBone, local
.sym ...data.0, local
	.4byte 0x00000004
	.4byte 0x00000013
	.4byte 0x00000017
	.4byte 0x0000002A
	.4byte 0x00000020
	.4byte 0x00000022
	.4byte 0x00000027
	.4byte 0x00000028
	.4byte 0x0000002D
	.4byte 0x0000002E
.endobj sBone

.obj sBoundBone, local
	.4byte 0x00000006
	.4byte 0x00000007
	.4byte 0x00000008
	.4byte 0x00000009
.endobj sBoundBone

.obj sBoundRadius, local
	.4byte 0x3F800000
	.4byte 0x3F666666
	.4byte 0x3F800000
	.4byte 0x3F000000
.endobj sBoundRadius

.obj sBoneOffset, local
	.4byte 0xBE4CCCCD
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x3F000000
	.4byte 0x3E4CCCCD
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj sBoneOffset

.obj sNFComment, local
	.4byte "@stringBase0"
	.4byte 0x00000000
	.rel "@stringBase0", .L_802708A4
	.4byte 0x00000000
	.rel "@stringBase0", .L_802708AC
	.4byte 0x00000000
	.rel "@stringBase0", .L_802708B4
	.4byte 0x00000000
	.rel "@stringBase0", .L_802708BC
	.4byte 0x00000000
	.rel "@stringBase0", .L_802708C4
	.4byte 0x00000000
	.rel "@stringBase0", .L_802708CC
	.4byte 0x00000000
	.rel "@stringBase0", .L_802708D4
	.4byte 0x00000000
	.rel "@stringBase0", .L_802708DC
	.4byte 0x00000000
	.rel "@stringBase0", .L_802708E4
	.4byte 0x00000000
	.rel "@stringBase0", .L_802708EC
	.4byte 0x00000000
	.rel "@stringBase0", .L_802708F4
	.4byte 0x00000000
	.rel "@stringBase0", .L_802708FC
	.4byte 0x00000000
	.rel "@stringBase0", .L_80270904
	.4byte 0x00000000
	.rel "@stringBase0", .L_8027090C
	.4byte 0x00000000
	.rel "@stringBase0", .L_80270914
	.4byte 0x00000000
	.rel "@stringBase0", .L_8027091E
	.4byte 0x00000000
	.rel "@stringBase0", .L_80270928
	.4byte 0x00000000
	.rel "@stringBase0", .L_80270932
	.4byte 0x00000000
	.rel "@stringBase0", .L_8027093C
	.4byte 0x00000000
	.rel "@stringBase0", .L_80270946
	.4byte 0x00000000
	.rel "@stringBase0", .L_8027094E
	.4byte 0x00000000
	.rel "@stringBase0", .L_80270956
	.4byte 0x00000000
	.rel "@stringBase0", .L_8027095E
	.4byte 0x00000000
	.rel "@stringBase0", .L_80270966
	.4byte 0x00000000
	.rel "@stringBase0", .L_8027096E
	.4byte 0x00000000
	.rel "@stringBase0", .L_80270976
	.4byte 0x00000000
	.rel "@stringBase0", .L_8027097E
	.4byte 0x00000000
	.rel "@stringBase0", .L_80270986
	.4byte 0x00000000
	.rel "@stringBase0", .L_8027098E
	.4byte 0x00000000
	.rel "@stringBase0", .L_80270996
	.4byte 0x00000000
	.rel "@stringBase0", .L_8027099E
	.4byte 0x00000000
	.rel "@stringBase0", .L_802709A6
	.4byte 0x00000000
	.rel "@stringBase0", .L_802709AE
	.4byte 0x00000000
	.rel "@stringBase0", .L_802709B6
	.4byte 0x00000000
	.rel "@stringBase0", .L_802709BE
	.4byte 0x00000000
	.rel "@stringBase0", .L_802709C8
	.4byte 0x00000000
.endobj sNFComment

.obj "@1220", local
	.rel AnimPick__12zNPCBPatrickFi16en_NPC_GOAL_SPOTP5xGoal, .L_80161ACC
	.rel AnimPick__12zNPCBPatrickFi16en_NPC_GOAL_SPOTP5xGoal, .L_80161AD4
	.rel AnimPick__12zNPCBPatrickFi16en_NPC_GOAL_SPOTP5xGoal, .L_80161ADC
	.rel AnimPick__12zNPCBPatrickFi16en_NPC_GOAL_SPOTP5xGoal, .L_80161AE4
	.rel AnimPick__12zNPCBPatrickFi16en_NPC_GOAL_SPOTP5xGoal, .L_80161B18
	.rel AnimPick__12zNPCBPatrickFi16en_NPC_GOAL_SPOTP5xGoal, .L_80161B20
	.rel AnimPick__12zNPCBPatrickFi16en_NPC_GOAL_SPOTP5xGoal, .L_80161B28
	.rel AnimPick__12zNPCBPatrickFi16en_NPC_GOAL_SPOTP5xGoal, .L_80161B30
	.rel AnimPick__12zNPCBPatrickFi16en_NPC_GOAL_SPOTP5xGoal, .L_80161B38
	.rel AnimPick__12zNPCBPatrickFi16en_NPC_GOAL_SPOTP5xGoal, .L_80161BAC
.endobj "@1220"

.obj "@2886", local
	.rel Process__19zNPCGoalBossPatSpinFP11en_trantypefPvP6xScene, .L_80167104
	.rel Process__19zNPCGoalBossPatSpinFP11en_trantypefPvP6xScene, .L_8016723C
	.rel Process__19zNPCGoalBossPatSpinFP11en_trantypefPvP6xScene, .L_801678E0
	.rel Process__19zNPCGoalBossPatSpinFP11en_trantypefPvP6xScene, .L_8016797C
	.rel Process__19zNPCGoalBossPatSpinFP11en_trantypefPvP6xScene, .L_80167F48
	.rel Process__19zNPCGoalBossPatSpinFP11en_trantypefPvP6xScene, .L_80167F84
	.rel Process__19zNPCGoalBossPatSpinFP11en_trantypefPvP6xScene, .L_80168058
.endobj "@2886"

# zNPCGoalBossPatFudge::__vtable
.obj __vt__20zNPCGoalBossPatFudge, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__20zNPCGoalBossPatFudgeFfPv
	.4byte Exit__5xGoalFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__20zNPCGoalBossPatFudgeFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__20zNPCGoalBossPatFudge

# zNPCGoalBossPatSpin::__vtable
.obj __vt__19zNPCGoalBossPatSpin, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__19zNPCGoalBossPatSpinFfPv
	.4byte Exit__19zNPCGoalBossPatSpinFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__19zNPCGoalBossPatSpinFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__19zNPCGoalBossPatSpin

# zNPCGoalBossPatSpawn::__vtable
.obj __vt__20zNPCGoalBossPatSpawn, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__20zNPCGoalBossPatSpawnFfPv
	.4byte Exit__5xGoalFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__20zNPCGoalBossPatSpawnFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__20zNPCGoalBossPatSpawn

# zNPCGoalBossPatFreeze::__vtable
.obj __vt__21zNPCGoalBossPatFreeze, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__21zNPCGoalBossPatFreezeFfPv
	.4byte Exit__5xGoalFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__21zNPCGoalBossPatFreezeFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__21zNPCGoalBossPatFreeze

# zNPCGoalBossPatSmack::__vtable
.obj __vt__20zNPCGoalBossPatSmack, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__20zNPCGoalBossPatSmackFfPv
	.4byte Exit__5xGoalFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__20zNPCGoalBossPatSmackFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__20zNPCGoalBossPatSmack

# zNPCGoalBossPatRun::__vtable
.obj __vt__18zNPCGoalBossPatRun, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__18zNPCGoalBossPatRunFfPv
	.4byte Exit__18zNPCGoalBossPatRunFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__18zNPCGoalBossPatRunFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__18zNPCGoalBossPatRun

# zNPCGoalBossPatSpit::__vtable
.obj __vt__19zNPCGoalBossPatSpit, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__19zNPCGoalBossPatSpitFfPv
	.4byte Exit__5xGoalFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__19zNPCGoalBossPatSpitFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__19zNPCGoalBossPatSpit

# zNPCGoalBossPatHit::__vtable
.obj __vt__18zNPCGoalBossPatHit, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__18zNPCGoalBossPatHitFfPv
	.4byte Exit__18zNPCGoalBossPatHitFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__18zNPCGoalBossPatHitFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__18zNPCGoalBossPatHit

# zNPCGoalBossPatTaunt::__vtable
.obj __vt__20zNPCGoalBossPatTaunt, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__20zNPCGoalBossPatTauntFfPv
	.4byte Exit__5xGoalFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__20zNPCGoalBossPatTauntFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__20zNPCGoalBossPatTaunt

# zNPCGoalBossPatIdle::__vtable
.obj __vt__19zNPCGoalBossPatIdle, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Clear__14zNPCGoalCommonFv
	.4byte Enter__19zNPCGoalBossPatIdleFfPv
	.4byte Exit__5xGoalFfPv
	.4byte Suspend__5xGoalFfPv
	.4byte Resume__14zNPCGoalCommonFfPv
	.4byte PreCalc__14zNPCGoalCommonFfPv
	.4byte EvalRules__5xGoalFP11en_trantypefPv
	.4byte Process__19zNPCGoalBossPatIdleFP11en_trantypefPvP6xScene
	.4byte SysEvent__5xGoalFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte NPCMessage__14zNPCGoalCommonFP6NPCMsg
	.4byte CollReview__14zNPCGoalCommonFPv
.endobj __vt__19zNPCGoalBossPatIdle

# zNPCBPatrick::__vtable
.obj __vt__12zNPCBPatrick, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte Init__12zNPCBPatrickFP9xEntAsset
	.4byte PostInit__9xNPCBasicFv
	.4byte Setup__12zNPCBPatrickFv
	.4byte PostSetup__9xNPCBasicFv
	.4byte Reset__12zNPCBPatrickFv
	.4byte Process__12zNPCBPatrickFP6xScenef
	.4byte BUpdate__10zNPCCommonFP5xVec3
	.4byte NewTime__12zNPCBPatrickFP6xScenef
	.4byte Move__10zNPCCommonFP6xScenefP9xEntFrame
	.4byte SysEvent__10zNPCCommonFP5xBaseP5xBaseUiPCfP5xBasePi
	.4byte Render__9xNPCBasicFv
	.4byte Save__9xNPCBasicCFP7xSerial
	.4byte Load__9xNPCBasicFP7xSerial
	.4byte CollideReview__10zNPCCommonFv
	.4byte ColChkFlags__8zNPCBossCFv
	.4byte ColPenFlags__8zNPCBossCFv
	.4byte ColChkByFlags__8zNPCBossCFv
	.4byte ColPenByFlags__8zNPCBossCFv
	.4byte PhysicsFlags__8zNPCBossCFv
	.4byte Destroy__12zNPCBPatrickFv
	.4byte NPCMessage__10zNPCCommonFP6NPCMsg
	.4byte RenderExtra__12zNPCBPatrickFv
	.4byte RenderExtraPostParticles__10zNPCCommonFv
	.4byte ParseINI__10zNPCCommonFv
	.4byte ParseLinks__10zNPCCommonFv
	.4byte ParseProps__10zNPCCommonFv
	.4byte SelfSetup__12zNPCBPatrickFv
	.4byte SelfDestroy__10zNPCCommonFv
	.4byte IsHealthy__10zNPCCommonFv
	.4byte IsAlive__10zNPCCommonFv
	.4byte Damage__12zNPCBPatrickF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3
	.4byte Respawn__10zNPCCommonFPC5xVec3P10zMovePointP10zMovePoint
	.4byte DuploOwner__10zNPCCommonFP10zNPCCommon
	.4byte DuploNotice__12zNPCBPatrickF13en_SM_NOTICESPv
	.4byte CanRope__10zNPCCommonFv
	.4byte LassoNotify__10zNPCCommonF14en_LASSO_EVENT
	.4byte SetCarryState__10zNPCCommonF18en_NPC_CARRY_STATE
	.4byte Stun__10zNPCCommonFf
	.4byte SpeakBegin__10zNPCCommonFv
	.4byte SpeakEnd__10zNPCCommonFv
	.4byte SpeakStart__10zNPCCommonFUiUii
	.4byte SpeakStop__10zNPCCommonFv
	.4byte AnimPick__12zNPCBPatrickFi16en_NPC_GOAL_SPOTP5xGoal
	.4byte GetParm__10zNPCCommonF10en_npcparmPv
	.4byte GetParmDefault__10zNPCCommonF10en_npcparmPv
	.4byte GenShadCacheRad__10zNPCCommonFv
	.4byte PRIV_GetDriverData__10zNPCCommonFv
	.4byte PRIV_GetLassoData__10zNPCCommonFv
	.4byte LassoSetup__10zNPCCommonFv
	.4byte AttackTimeLeft__8zNPCBossFv
	.4byte HoldUpDude__8zNPCBossFv
	.4byte ThanksImDone__8zNPCBossFv
.endobj __vt__12zNPCBPatrick
	.4byte 0x00000000

# 0x803CADA8 - 0x803CADB0
.section .sdata, "wa"
.balign 8

.obj sUseBossCam, local
	.byte 0x01
.endobj sUseBossCam
	.4byte 0x00000000
	.byte 0x00, 0x00, 0x00

# 0x803CC000 - 0x803CC038
.section .sbss, "wa", @nobits
.balign 8

.obj sOthersHaventBeenAdded, local
	.skip 0x1
.endobj sOthersHaventBeenAdded
	.skip 0x3

.obj sPat_Ptr, local
	.skip 0x4
.endobj sPat_Ptr

.obj sCamSubTarget, local
	.skip 0x4
.endobj sCamSubTarget

.obj sCurrYaw, local
	.skip 0x4
.endobj sCurrYaw

.obj sCurrHeight, local
	.skip 0x4
.endobj sCurrHeight

.obj sCurrRadius, local
	.skip 0x4
.endobj sCurrRadius

.obj sCurrPitch, local
	.skip 0x4
.endobj sCurrPitch

.obj minYVel, local
	.skip 0x4
.endobj minYVel

.obj varYVel, local
	.skip 0x4
.endobj varYVel

.obj minHMul, local
	.skip 0x4
.endobj minHMul

.obj varHMul, local
	.skip 0x4
.endobj varHMul

.obj minT, local
	.skip 0x4
.endobj minT

.obj varT, local
	.skip 0x4
.endobj varT

.obj sCurrNFSound, local
	.skip 0x4
.endobj sCurrNFSound

# 0x803CF340 - 0x803CF480
.section .sdata2, "a"
.balign 8

.obj "@831", local
	.4byte 0x3F800000
.endobj "@831"

.obj "@832", local
	.4byte 0x00000000
.endobj "@832"

.obj "@833", local
	.4byte 0x3E4CCCCD
.endobj "@833"

.obj "@870", local
	.4byte 0xBF800000
.endobj "@870"

.obj "@875", local
	.4byte 0x43300000
	.4byte 0x80000000
.endobj "@875"

.obj "@891", local
	.4byte 0x40000000
.endobj "@891"

.obj "@892", local
	.4byte 0xBECCCCCD
.endobj "@892"

.obj "@1045", local
	.4byte 0x3E000000
.endobj "@1045"

.obj "@1046", local
	.4byte 0x3F000000
.endobj "@1046"

.obj "@1047", local
	.4byte 0x3F333333
.endobj "@1047"

.obj "@1048", local
	.4byte 0x41000000
.endobj "@1048"

.obj "@1049", local
	.4byte 0x40A00000
.endobj "@1049"

.obj "@1050", local
	.4byte 0x40200000
.endobj "@1050"

.obj "@1051", local
	.4byte 0x40400000
.endobj "@1051"

.obj "@1052", local
	.4byte 0x40866666
.endobj "@1052"

.obj "@1053", local
	.4byte 0x41400000
.endobj "@1053"

.obj "@1054", local
	.4byte 0x40C00000
.endobj "@1054"

.obj "@1055", local
	.4byte 0x41200000
.endobj "@1055"

.obj "@1056", local
	.4byte 0x42480000
.endobj "@1056"

.obj "@1137", local
	.4byte 0x40B00000
.endobj "@1137"

.obj "@1138", local
	.4byte 0x40D00000
.endobj "@1138"

.obj "@1139", local
	.4byte 0x3EBAE148
.endobj "@1139"

.obj "@1140", local
	.4byte 0x40490FDB
.endobj "@1140"

.obj "@1141", local
	.4byte 0x41A00000
.endobj "@1141"

.obj "@1142", local
	.4byte 0x41700000
.endobj "@1142"

.obj "@1143", local
	.4byte 0xCE6E6B28
.endobj "@1143"

.obj "@1144", local
	.4byte 0x4E6E6B28
.endobj "@1144"

.obj "@1656", local
	.4byte 0x38D1B717
.endobj "@1656"

.obj "@1657", local
	.4byte 0x43C80000
.endobj "@1657"

.obj "@1658", local
	.4byte 0x3F13D70A
.endobj "@1658"

.obj "@1659", local
	.4byte 0x42200000
.endobj "@1659"

.obj "@1660", local
	.4byte 0xC000A3D7
.endobj "@1660"

.obj "@1661", local
	.4byte 0x3E333333
.endobj "@1661"

.obj "@1662", local
	.4byte 0x3CCCCCCD
.endobj "@1662"

.obj "@1663", local
	.4byte 0x3FA00000
.endobj "@1663"

.obj "@1664", local
	.4byte 0x3E800000
.endobj "@1664"

.obj "@1665", local
	.4byte 0x42A00000
.endobj "@1665"

.obj "@1666", local
	.4byte 0x40C90FDB
.endobj "@1666"

.obj "@1667", local
	.4byte 0x4049999A
.endobj "@1667"

.obj "@1668", local
	.4byte 0x3727C5AC
.endobj "@1668"

.obj "@1669", local
	.4byte 0x3DCCCCCD
.endobj "@1669"

.obj "@1670", local
	.4byte 0x40800000
.endobj "@1670"

.obj "@1671", local
	.4byte 0x3F451EB8
.endobj "@1671"

.obj "@1672", local
	.4byte 0x3E99999A
.endobj "@1672"

.obj "@1673", local
	.4byte 0x3FC90FDB
.endobj "@1673"

.obj "@1674", local
	.4byte 0x3E19999A
.endobj "@1674"

.obj "@1675", local
	.4byte 0x3F266666
.endobj "@1675"

.obj "@1676", local
	.4byte 0x3F400000
.endobj "@1676"

.obj "@1677", local
	.4byte 0x3C23D70A
.endobj "@1677"

.obj "@1678", local
	.4byte 0x3EA8F5C3
.endobj "@1678"

.obj "@1679", local
	.4byte 0x41940000
.endobj "@1679"

.obj "@1680", local
	.4byte 0xC1940000
.endobj "@1680"

.obj "@1681", local
	.4byte 0xC1A00000
.endobj "@1681"

.obj "@1682", local
	.4byte 0x40E00000
.endobj "@1682"

.obj "@2006", local
	.4byte 0x42C80000
.endobj "@2006"

.obj "@2077", local
	.4byte 0x40BE6666
.endobj "@2077"

.obj "@2078", local
	.4byte 0x3F09FBE7
.endobj "@2078"

.obj "@2215", local
	.4byte 0x41080000
.endobj "@2215"

.obj "@2256", local
	.4byte 0x3F0020C4
.endobj "@2256"

.obj "@2257", local
	.4byte 0x3EE66666
.endobj "@2257"

.obj "@2280", local
	.4byte 0x3FD9999A
.endobj "@2280"

.obj "@2405", local
	.4byte 0xC0490FDB
.endobj "@2405"

.obj "@2423", local
	.4byte 0x3ECCCCCD
.endobj "@2423"

.obj "@2424", local
	.4byte 0x3F4CCCCD
.endobj "@2424"

.obj "@2425", local
	.4byte 0x3F99999A
.endobj "@2425"

.obj "@2426", local
	.4byte 0x3FC00000
.endobj "@2426"

.obj "@2427", local
	.4byte 0x3FE66666
.endobj "@2427"

.obj "@2428", local
	.4byte 0x40066666
.endobj "@2428"

.obj "@2512", local
	.4byte 0x3EB33333
.endobj "@2512"

.obj "@2596", local
	.4byte 0xBDA3D70A
.endobj "@2596"

.obj "@2597", local
	.4byte 0x41C80000
.endobj "@2597"

.obj "@2610", local
	.4byte 0x3F278D50
.endobj "@2610"

.obj "@2629", local
	.4byte 0x3F490FDB
.endobj "@2629"

.obj "@2630", local
	.4byte 0x3FE00000
.endobj "@2630"

.obj "@2696", local
	.4byte 0xC0800000
.endobj "@2696"

.obj "@2697", local
	.4byte 0x43960000
.endobj "@2697"

.obj "@2885", local
	.4byte 0x41480000
.endobj "@2885"

.obj "@2994", local
	.4byte 0x40F00000
.endobj "@2994"
	.4byte 0x00000000
