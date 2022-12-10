.include "macros.inc"
.file "zVar.cpp"

# 0x800BD1B0 - 0x800BE470
.text
.balign 4

# @unnamed@zVar_cpp@::var_text_ActivePad()
.fn "var_text_ActivePad__18@unnamed@zVar_cpp@Fv", local
/* 800BD1B0 000BA290  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BD1B4 000BA294  7C 08 02 A6 */	mflr r0
/* 800BD1B8 000BA298  3C 60 80 3C */	lis r3, globals@ha
/* 800BD1BC 000BA29C  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BD1C0 000BA2A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BD1C4 000BA2A4  38 63 05 58 */	addi r3, r3, globals@l
/* 800BD1C8 000BA2A8  3C C0 80 30 */	lis r6, buffer$775@ha
/* 800BD1CC 000BA2AC  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BD1D0 000BA2B0  88 A3 06 D1 */	lbz r5, 0x6d1(r3)
/* 800BD1D4 000BA2B4  38 66 86 40 */	addi r3, r6, buffer$775@l
/* 800BD1D8 000BA2B8  38 A5 00 01 */	addi r5, r5, 0x1
/* 800BD1DC 000BA2BC  4C C6 31 82 */	crclr 4*cr1+eq
/* 800BD1E0 000BA2C0  48 12 6D 55 */	bl sprintf
/* 800BD1E4 000BA2C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BD1E8 000BA2C8  3C 60 80 30 */	lis r3, buffer$775@ha
/* 800BD1EC 000BA2CC  38 63 86 40 */	addi r3, r3, buffer$775@l
/* 800BD1F0 000BA2D0  7C 08 03 A6 */	mtlr r0
/* 800BD1F4 000BA2D4  38 21 00 10 */	addi r1, r1, 0x10
/* 800BD1F8 000BA2D8  4E 80 00 20 */	blr
.endfn "var_text_ActivePad__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_BadCard()
.fn "var_text_BadCard__18@unnamed@zVar_cpp@Fv", local
/* 800BD1FC 000BA2DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BD200 000BA2E0  7C 08 02 A6 */	mflr r0
/* 800BD204 000BA2E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BD208 000BA2E8  4B FE 99 91 */	bl zMenuGetBadCard__Fv
/* 800BD20C 000BA2EC  2C 03 00 00 */	cmpwi r3, 0x0
/* 800BD210 000BA2F0  40 81 00 2C */	ble .L_800BD23C
/* 800BD214 000BA2F4  3C A0 80 30 */	lis r5, buffer$780@ha
/* 800BD218 000BA2F8  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BD21C 000BA2FC  38 05 86 4C */	addi r0, r5, buffer$780@l
/* 800BD220 000BA300  38 A3 00 40 */	addi r5, r3, 0x40
/* 800BD224 000BA304  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BD228 000BA308  7C 03 03 78 */	mr r3, r0
/* 800BD22C 000BA30C  38 84 00 03 */	addi r4, r4, 0x3
/* 800BD230 000BA310  4C C6 31 82 */	crclr 4*cr1+eq
/* 800BD234 000BA314  48 12 6D 01 */	bl sprintf
/* 800BD238 000BA318  48 00 00 1C */	b .L_800BD254
.L_800BD23C:
/* 800BD23C 000BA31C  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BD240 000BA320  3C 60 80 30 */	lis r3, buffer$780@ha
/* 800BD244 000BA324  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BD248 000BA328  38 63 86 4C */	addi r3, r3, buffer$780@l
/* 800BD24C 000BA32C  38 84 00 06 */	addi r4, r4, 0x6
/* 800BD250 000BA330  48 12 A4 B1 */	bl strcpy
.L_800BD254:
/* 800BD254 000BA334  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BD258 000BA338  3C 60 80 30 */	lis r3, buffer$780@ha
/* 800BD25C 000BA33C  38 63 86 4C */	addi r3, r3, buffer$780@l
/* 800BD260 000BA340  7C 08 03 A6 */	mtlr r0
/* 800BD264 000BA344  38 21 00 10 */	addi r1, r1, 0x10
/* 800BD268 000BA348  4E 80 00 20 */	blr
.endfn "var_text_BadCard__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_BadCardAvailable()
.fn "var_text_BadCardAvailable__18@unnamed@zVar_cpp@Fv", local
/* 800BD26C 000BA34C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BD270 000BA350  7C 08 02 A6 */	mflr r0
/* 800BD274 000BA354  3C 60 80 30 */	lis r3, buffer$788@ha
/* 800BD278 000BA358  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BD27C 000BA35C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BD280 000BA360  38 63 86 58 */	addi r3, r3, buffer$788@l
/* 800BD284 000BA364  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BD288 000BA368  80 AD 91 60 */	lwz r5, bad_card_available@sda21(r13)
/* 800BD28C 000BA36C  4C C6 31 82 */	crclr 4*cr1+eq
/* 800BD290 000BA370  48 12 6C A5 */	bl sprintf
/* 800BD294 000BA374  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BD298 000BA378  3C 60 80 30 */	lis r3, buffer$788@ha
/* 800BD29C 000BA37C  38 63 86 58 */	addi r3, r3, buffer$788@l
/* 800BD2A0 000BA380  7C 08 03 A6 */	mtlr r0
/* 800BD2A4 000BA384  38 21 00 10 */	addi r1, r1, 0x10
/* 800BD2A8 000BA388  4E 80 00 20 */	blr
.endfn "var_text_BadCardAvailable__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_BadCardNeeded()
.fn "var_text_BadCardNeeded__18@unnamed@zVar_cpp@Fv", local
/* 800BD2AC 000BA38C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BD2B0 000BA390  7C 08 02 A6 */	mflr r0
/* 800BD2B4 000BA394  3C 60 80 30 */	lis r3, buffer$793@ha
/* 800BD2B8 000BA398  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BD2BC 000BA39C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BD2C0 000BA3A0  38 63 86 64 */	addi r3, r3, buffer$793@l
/* 800BD2C4 000BA3A4  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BD2C8 000BA3A8  80 AD 91 64 */	lwz r5, bad_card_needed@sda21(r13)
/* 800BD2CC 000BA3AC  4C C6 31 82 */	crclr 4*cr1+eq
/* 800BD2D0 000BA3B0  48 12 6C 65 */	bl sprintf
/* 800BD2D4 000BA3B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BD2D8 000BA3B8  3C 60 80 30 */	lis r3, buffer$793@ha
/* 800BD2DC 000BA3BC  38 63 86 64 */	addi r3, r3, buffer$793@l
/* 800BD2E0 000BA3C0  7C 08 03 A6 */	mtlr r0
/* 800BD2E4 000BA3C4  38 21 00 10 */	addi r1, r1, 0x10
/* 800BD2E8 000BA3C8  4E 80 00 20 */	blr
.endfn "var_text_BadCardNeeded__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_CorruptFileName()
.fn "var_text_CorruptFileName__18@unnamed@zVar_cpp@Fv", local
/* 800BD2EC 000BA3CC  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 800BD2F0 000BA3D0  7C 08 02 A6 */	mflr r0
/* 800BD2F4 000BA3D4  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 800BD2F8 000BA3D8  38 61 00 08 */	addi r3, r1, 0x8
/* 800BD2FC 000BA3DC  BF 61 00 CC */	stmw r27, 0xcc(r1)
/* 800BD300 000BA3E0  4B FE 95 29 */	bl zMenuGetCorruptFiles__FPA64_c
/* 800BD304 000BA3E4  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BD308 000BA3E8  3C A0 80 30 */	lis r5, buffer$798@ha
/* 800BD30C 000BA3EC  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BD310 000BA3F0  7C 7D 1B 78 */	mr r29, r3
/* 800BD314 000BA3F4  38 65 86 70 */	addi r3, r5, buffer$798@l
/* 800BD318 000BA3F8  38 84 00 0D */	addi r4, r4, 0xd
/* 800BD31C 000BA3FC  48 12 A3 E5 */	bl strcpy
/* 800BD320 000BA400  3C 80 80 30 */	lis r4, buffer$798@ha
/* 800BD324 000BA404  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800BD328 000BA408  3B C4 86 70 */	addi r30, r4, buffer$798@l
/* 800BD32C 000BA40C  3B 81 00 08 */	addi r28, r1, 0x8
/* 800BD330 000BA410  3B E3 FC B0 */	addi r31, r3, "@stringBase0"@l
/* 800BD334 000BA414  3B 60 00 00 */	li r27, 0x0
/* 800BD338 000BA418  48 00 00 24 */	b .L_800BD35C
.L_800BD33C:
/* 800BD33C 000BA41C  7F C3 F3 78 */	mr r3, r30
/* 800BD340 000BA420  7F 84 E3 78 */	mr r4, r28
/* 800BD344 000BA424  48 12 A3 4D */	bl strcat
/* 800BD348 000BA428  7F C3 F3 78 */	mr r3, r30
/* 800BD34C 000BA42C  38 9F 00 0E */	addi r4, r31, 0xe
/* 800BD350 000BA430  48 12 A3 41 */	bl strcat
/* 800BD354 000BA434  3B 9C 00 40 */	addi r28, r28, 0x40
/* 800BD358 000BA438  3B 7B 00 01 */	addi r27, r27, 0x1
.L_800BD35C:
/* 800BD35C 000BA43C  7C 1B E8 00 */	cmpw r27, r29
/* 800BD360 000BA440  41 80 FF DC */	blt .L_800BD33C
/* 800BD364 000BA444  BB 61 00 CC */	lmw r27, 0xcc(r1)
/* 800BD368 000BA448  3C 60 80 30 */	lis r3, buffer$798@ha
/* 800BD36C 000BA44C  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 800BD370 000BA450  38 63 86 70 */	addi r3, r3, buffer$798@l
/* 800BD374 000BA454  7C 08 03 A6 */	mtlr r0
/* 800BD378 000BA458  38 21 00 E0 */	addi r1, r1, 0xe0
/* 800BD37C 000BA45C  4E 80 00 20 */	blr
.endfn "var_text_CorruptFileName__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_CurrentArea()
.fn "var_text_CurrentArea__18@unnamed@zVar_cpp@Fv", local
/* 800BD380 000BA460  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BD384 000BA464  7C 08 02 A6 */	mflr r0
/* 800BD388 000BA468  3C 60 80 3C */	lis r3, globals@ha
/* 800BD38C 000BA46C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BD390 000BA470  38 63 05 58 */	addi r3, r3, globals@l
/* 800BD394 000BA474  80 63 1F C0 */	lwz r3, 0x1fc0(r3)
/* 800BD398 000BA478  80 63 00 00 */	lwz r3, 0x0(r3)
/* 800BD39C 000BA47C  4B FF 7B 59 */	bl zSceneGetAreaname__FUi
/* 800BD3A0 000BA480  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BD3A4 000BA484  7C 08 03 A6 */	mtlr r0
/* 800BD3A8 000BA488  38 21 00 10 */	addi r1, r1, 0x10
/* 800BD3AC 000BA48C  4E 80 00 20 */	blr
.endfn "var_text_CurrentArea__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_CurrentDate()
.fn "var_text_CurrentDate__18@unnamed@zVar_cpp@Fv", local
/* 800BD3B0 000BA490  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BD3B4 000BA494  7C 08 02 A6 */	mflr r0
/* 800BD3B8 000BA498  3C 60 80 30 */	lis r3, buffer$813@ha
/* 800BD3BC 000BA49C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BD3C0 000BA4A0  38 63 86 F0 */	addi r3, r3, buffer$813@l
/* 800BD3C4 000BA4A4  48 01 71 E1 */	bl iGetCurrFormattedDate__FPc
/* 800BD3C8 000BA4A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BD3CC 000BA4AC  3C 60 80 30 */	lis r3, buffer$813@ha
/* 800BD3D0 000BA4B0  38 63 86 F0 */	addi r3, r3, buffer$813@l
/* 800BD3D4 000BA4B4  7C 08 03 A6 */	mtlr r0
/* 800BD3D8 000BA4B8  38 21 00 10 */	addi r1, r1, 0x10
/* 800BD3DC 000BA4BC  4E 80 00 20 */	blr
.endfn "var_text_CurrentDate__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_CurrentLevelCollectable()
.fn "var_text_CurrentLevelCollectable__18@unnamed@zVar_cpp@Fv", local
/* 800BD3E0 000BA4C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BD3E4 000BA4C4  7C 08 02 A6 */	mflr r0
/* 800BD3E8 000BA4C8  3C 60 80 3C */	lis r3, globals@ha
/* 800BD3EC 000BA4CC  3C A0 80 30 */	lis r5, buffer$818@ha
/* 800BD3F0 000BA4D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BD3F4 000BA4D4  38 83 05 58 */	addi r4, r3, globals@l
/* 800BD3F8 000BA4D8  38 65 87 10 */	addi r3, r5, buffer$818@l
/* 800BD3FC 000BA4DC  3C C0 80 26 */	lis r6, "@stringBase0"@ha
/* 800BD400 000BA4E0  80 A4 1B C0 */	lwz r5, 0x1bc0(r4)
/* 800BD404 000BA4E4  38 86 FC B0 */	addi r4, r6, "@stringBase0"@l
/* 800BD408 000BA4E8  4C C6 31 82 */	crclr 4*cr1+eq
/* 800BD40C 000BA4EC  48 12 6B 29 */	bl sprintf
/* 800BD410 000BA4F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BD414 000BA4F4  3C 60 80 30 */	lis r3, buffer$818@ha
/* 800BD418 000BA4F8  38 63 87 10 */	addi r3, r3, buffer$818@l
/* 800BD41C 000BA4FC  7C 08 03 A6 */	mtlr r0
/* 800BD420 000BA500  38 21 00 10 */	addi r1, r1, 0x10
/* 800BD424 000BA504  4E 80 00 20 */	blr
.endfn "var_text_CurrentLevelCollectable__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_CurrentLevelPatsSocks()
.fn "var_text_CurrentLevelPatsSocks__18@unnamed@zVar_cpp@Fv", local
/* 800BD428 000BA508  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BD42C 000BA50C  7C 08 02 A6 */	mflr r0
/* 800BD430 000BA510  3C 60 80 3C */	lis r3, globals@ha
/* 800BD434 000BA514  3C A0 80 30 */	lis r5, buffer$823@ha
/* 800BD438 000BA518  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BD43C 000BA51C  38 83 05 58 */	addi r4, r3, globals@l
/* 800BD440 000BA520  38 65 87 1C */	addi r3, r5, buffer$823@l
/* 800BD444 000BA524  3C C0 80 26 */	lis r6, "@stringBase0"@ha
/* 800BD448 000BA528  80 A4 1B 80 */	lwz r5, 0x1b80(r4)
/* 800BD44C 000BA52C  38 86 FC B0 */	addi r4, r6, "@stringBase0"@l
/* 800BD450 000BA530  4C C6 31 82 */	crclr 4*cr1+eq
/* 800BD454 000BA534  48 12 6A E1 */	bl sprintf
/* 800BD458 000BA538  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BD45C 000BA53C  3C 60 80 30 */	lis r3, buffer$823@ha
/* 800BD460 000BA540  38 63 87 1C */	addi r3, r3, buffer$823@l
/* 800BD464 000BA544  7C 08 03 A6 */	mtlr r0
/* 800BD468 000BA548  38 21 00 10 */	addi r1, r1, 0x10
/* 800BD46C 000BA54C  4E 80 00 20 */	blr
.endfn "var_text_CurrentLevelPatsSocks__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_CurrentScene()
.fn "var_text_CurrentScene__18@unnamed@zVar_cpp@Fv", local
/* 800BD470 000BA550  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BD474 000BA554  7C 08 02 A6 */	mflr r0
/* 800BD478 000BA558  3C 60 80 3C */	lis r3, globals@ha
/* 800BD47C 000BA55C  38 80 00 00 */	li r4, 0x0
/* 800BD480 000BA560  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BD484 000BA564  38 63 05 58 */	addi r3, r3, globals@l
/* 800BD488 000BA568  80 63 1F C0 */	lwz r3, 0x1fc0(r3)
/* 800BD48C 000BA56C  80 63 00 00 */	lwz r3, 0x0(r3)
/* 800BD490 000BA570  4B F9 08 05 */	bl xUtil_idtag2string__FUii
/* 800BD494 000BA574  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BD498 000BA578  3C C0 80 30 */	lis r6, buffer$828@ha
/* 800BD49C 000BA57C  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BD4A0 000BA580  7C 65 1B 78 */	mr r5, r3
/* 800BD4A4 000BA584  38 66 87 28 */	addi r3, r6, buffer$828@l
/* 800BD4A8 000BA588  38 84 00 10 */	addi r4, r4, 0x10
/* 800BD4AC 000BA58C  4C C6 31 82 */	crclr 4*cr1+eq
/* 800BD4B0 000BA590  48 12 6A 85 */	bl sprintf
/* 800BD4B4 000BA594  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BD4B8 000BA598  3C 60 80 30 */	lis r3, buffer$828@ha
/* 800BD4BC 000BA59C  38 63 87 28 */	addi r3, r3, buffer$828@l
/* 800BD4C0 000BA5A0  7C 08 03 A6 */	mtlr r0
/* 800BD4C4 000BA5A4  38 21 00 10 */	addi r1, r1, 0x10
/* 800BD4C8 000BA5A8  4E 80 00 20 */	blr
.endfn "var_text_CurrentScene__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_CurrentTime()
.fn "var_text_CurrentTime__18@unnamed@zVar_cpp@Fv", local
/* 800BD4CC 000BA5AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BD4D0 000BA5B0  7C 08 02 A6 */	mflr r0
/* 800BD4D4 000BA5B4  3C 60 80 30 */	lis r3, buffer$833@ha
/* 800BD4D8 000BA5B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BD4DC 000BA5BC  38 63 87 48 */	addi r3, r3, buffer$833@l
/* 800BD4E0 000BA5C0  48 01 72 7D */	bl iGetCurrFormattedTime__FPc
/* 800BD4E4 000BA5C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BD4E8 000BA5C8  3C 60 80 30 */	lis r3, buffer$833@ha
/* 800BD4EC 000BA5CC  38 63 87 48 */	addi r3, r3, buffer$833@l
/* 800BD4F0 000BA5D0  7C 08 03 A6 */	mtlr r0
/* 800BD4F4 000BA5D4  38 21 00 10 */	addi r1, r1, 0x10
/* 800BD4F8 000BA5D8  4E 80 00 20 */	blr
.endfn "var_text_CurrentTime__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::zVarGameSlotInfo(int, char*, unsigned long)
.fn "zVarGameSlotInfo__18@unnamed@zVar_cpp@FiPcUl", local
/* 800BD4FC 000BA5DC  94 21 FE 50 */	stwu r1, -0x1b0(r1)
/* 800BD500 000BA5E0  7C 08 02 A6 */	mflr r0
/* 800BD504 000BA5E4  3C A0 80 26 */	lis r5, ...rodata.0@ha
/* 800BD508 000BA5E8  90 01 01 B4 */	stw r0, 0x1b4(r1)
/* 800BD50C 000BA5EC  38 A5 F9 E8 */	addi r5, r5, ...rodata.0@l
/* 800BD510 000BA5F0  BD C1 01 68 */	stmw r14, 0x168(r1)
/* 800BD514 000BA5F4  7C 7E 1B 78 */	mr r30, r3
/* 800BD518 000BA5F8  7C 9F 23 78 */	mr r31, r4
/* 800BD51C 000BA5FC  38 65 01 C4 */	addi r3, r5, 0x1c4
/* 800BD520 000BA600  39 C0 00 20 */	li r14, 0x20
/* 800BD524 000BA604  38 81 00 64 */	addi r4, r1, 0x64
/* 800BD528 000BA608  80 05 01 68 */	lwz r0, 0x168(r5)
/* 800BD52C 000BA60C  81 E5 01 6C */	lwz r15, 0x16c(r5)
/* 800BD530 000BA610  82 05 01 70 */	lwz r16, 0x170(r5)
/* 800BD534 000BA614  82 25 01 74 */	lwz r17, 0x174(r5)
/* 800BD538 000BA618  82 45 01 78 */	lwz r18, 0x178(r5)
/* 800BD53C 000BA61C  82 65 01 7C */	lwz r19, 0x17c(r5)
/* 800BD540 000BA620  82 85 01 80 */	lwz r20, 0x180(r5)
/* 800BD544 000BA624  82 A5 01 84 */	lwz r21, 0x184(r5)
/* 800BD548 000BA628  82 C5 01 88 */	lwz r22, 0x188(r5)
/* 800BD54C 000BA62C  82 E5 01 8C */	lwz r23, 0x18c(r5)
/* 800BD550 000BA630  83 05 01 90 */	lwz r24, 0x190(r5)
/* 800BD554 000BA634  83 25 01 94 */	lwz r25, 0x194(r5)
/* 800BD558 000BA638  83 45 01 98 */	lwz r26, 0x198(r5)
/* 800BD55C 000BA63C  83 65 01 9C */	lwz r27, 0x19c(r5)
/* 800BD560 000BA640  83 85 01 A0 */	lwz r28, 0x1a0(r5)
/* 800BD564 000BA644  83 A5 01 A4 */	lwz r29, 0x1a4(r5)
/* 800BD568 000BA648  81 85 01 A8 */	lwz r12, 0x1a8(r5)
/* 800BD56C 000BA64C  81 65 01 AC */	lwz r11, 0x1ac(r5)
/* 800BD570 000BA650  81 45 01 B0 */	lwz r10, 0x1b0(r5)
/* 800BD574 000BA654  81 25 01 B4 */	lwz r9, 0x1b4(r5)
/* 800BD578 000BA658  81 05 01 B8 */	lwz r8, 0x1b8(r5)
/* 800BD57C 000BA65C  80 E5 01 BC */	lwz r7, 0x1bc(r5)
/* 800BD580 000BA660  80 C5 01 C0 */	lwz r6, 0x1c0(r5)
/* 800BD584 000BA664  80 A5 01 C4 */	lwz r5, 0x1c4(r5)
/* 800BD588 000BA668  90 01 00 48 */	stw r0, 0x48(r1)
/* 800BD58C 000BA66C  91 E1 00 4C */	stw r15, 0x4c(r1)
/* 800BD590 000BA670  92 01 00 50 */	stw r16, 0x50(r1)
/* 800BD594 000BA674  92 21 00 54 */	stw r17, 0x54(r1)
/* 800BD598 000BA678  92 41 00 58 */	stw r18, 0x58(r1)
/* 800BD59C 000BA67C  92 61 00 5C */	stw r19, 0x5c(r1)
/* 800BD5A0 000BA680  92 81 00 60 */	stw r20, 0x60(r1)
/* 800BD5A4 000BA684  92 A1 00 64 */	stw r21, 0x64(r1)
/* 800BD5A8 000BA688  92 C1 00 28 */	stw r22, 0x28(r1)
/* 800BD5AC 000BA68C  92 E1 00 2C */	stw r23, 0x2c(r1)
/* 800BD5B0 000BA690  93 01 00 30 */	stw r24, 0x30(r1)
/* 800BD5B4 000BA694  93 21 00 34 */	stw r25, 0x34(r1)
/* 800BD5B8 000BA698  93 41 00 38 */	stw r26, 0x38(r1)
/* 800BD5BC 000BA69C  93 61 00 3C */	stw r27, 0x3c(r1)
/* 800BD5C0 000BA6A0  93 81 00 40 */	stw r28, 0x40(r1)
/* 800BD5C4 000BA6A4  93 A1 00 44 */	stw r29, 0x44(r1)
/* 800BD5C8 000BA6A8  91 81 00 08 */	stw r12, 0x8(r1)
/* 800BD5CC 000BA6AC  91 61 00 0C */	stw r11, 0xc(r1)
/* 800BD5D0 000BA6B0  91 41 00 10 */	stw r10, 0x10(r1)
/* 800BD5D4 000BA6B4  91 21 00 14 */	stw r9, 0x14(r1)
/* 800BD5D8 000BA6B8  91 01 00 18 */	stw r8, 0x18(r1)
/* 800BD5DC 000BA6BC  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 800BD5E0 000BA6C0  90 C1 00 20 */	stw r6, 0x20(r1)
/* 800BD5E4 000BA6C4  90 A1 00 24 */	stw r5, 0x24(r1)
/* 800BD5E8 000BA6C8  7D C9 03 A6 */	mtctr r14
.L_800BD5EC:
/* 800BD5EC 000BA6CC  80 A3 00 04 */	lwz r5, 0x4(r3)
/* 800BD5F0 000BA6D0  84 03 00 08 */	lwzu r0, 0x8(r3)
/* 800BD5F4 000BA6D4  90 A4 00 04 */	stw r5, 0x4(r4)
/* 800BD5F8 000BA6D8  94 04 00 08 */	stwu r0, 0x8(r4)
/* 800BD5FC 000BA6DC  42 00 FF F0 */	bdnz .L_800BD5EC
/* 800BD600 000BA6E0  1D DE 00 6C */	mulli r14, r30, 0x6c
/* 800BD604 000BA6E4  3C 80 80 3C */	lis r4, zSaveLoadGameTable@ha
/* 800BD608 000BA6E8  38 61 00 48 */	addi r3, r1, 0x48
/* 800BD60C 000BA6EC  38 04 25 20 */	addi r0, r4, zSaveLoadGameTable@l
/* 800BD610 000BA6F0  7D E0 72 14 */	add r15, r0, r14
/* 800BD614 000BA6F4  38 A0 00 05 */	li r5, 0x5
/* 800BD618 000BA6F8  38 8F 00 40 */	addi r4, r15, 0x40
/* 800BD61C 000BA6FC  48 12 A0 A1 */	bl strncpy
/* 800BD620 000BA700  3C 60 80 3C */	lis r3, zSaveLoadGameTable@ha
/* 800BD624 000BA704  38 A0 00 2F */	li r5, 0x2f
/* 800BD628 000BA708  38 03 25 20 */	addi r0, r3, zSaveLoadGameTable@l
/* 800BD62C 000BA70C  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BD630 000BA710  7C 60 72 14 */	add r3, r0, r14
/* 800BD634 000BA714  98 A1 00 4A */	stb r5, 0x4a(r1)
/* 800BD638 000BA718  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BD63C 000BA71C  88 C3 00 48 */	lbz r6, 0x48(r3)
/* 800BD640 000BA720  88 E3 00 49 */	lbz r7, 0x49(r3)
/* 800BD644 000BA724  38 61 00 68 */	addi r3, r1, 0x68
/* 800BD648 000BA728  38 84 00 13 */	addi r4, r4, 0x13
/* 800BD64C 000BA72C  38 A1 00 48 */	addi r5, r1, 0x48
/* 800BD650 000BA730  4C C6 31 82 */	crclr 4*cr1+eq
/* 800BD654 000BA734  48 12 68 E1 */	bl sprintf
/* 800BD658 000BA738  38 61 00 48 */	addi r3, r1, 0x48
/* 800BD65C 000BA73C  38 81 00 68 */	addi r4, r1, 0x68
/* 800BD660 000BA740  38 A0 00 20 */	li r5, 0x20
/* 800BD664 000BA744  48 12 A0 59 */	bl strncpy
/* 800BD668 000BA748  3C 60 80 3C */	lis r3, zSaveLoadGameTable@ha
/* 800BD66C 000BA74C  38 A0 00 00 */	li r5, 0x0
/* 800BD670 000BA750  38 03 25 20 */	addi r0, r3, zSaveLoadGameTable@l
/* 800BD674 000BA754  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BD678 000BA758  7C 60 72 14 */	add r3, r0, r14
/* 800BD67C 000BA75C  98 A1 00 67 */	stb r5, 0x67(r1)
/* 800BD680 000BA760  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BD684 000BA764  88 A3 00 4B */	lbz r5, 0x4b(r3)
/* 800BD688 000BA768  88 C3 00 4C */	lbz r6, 0x4c(r3)
/* 800BD68C 000BA76C  38 61 00 28 */	addi r3, r1, 0x28
/* 800BD690 000BA770  38 84 00 1B */	addi r4, r4, 0x1b
/* 800BD694 000BA774  4C C6 31 82 */	crclr 4*cr1+eq
/* 800BD698 000BA778  48 12 68 9D */	bl sprintf
/* 800BD69C 000BA77C  38 61 00 28 */	addi r3, r1, 0x28
/* 800BD6A0 000BA780  48 12 B1 CD */	bl atoi
/* 800BD6A4 000BA784  7C 70 1B 78 */	mr r16, r3
/* 800BD6A8 000BA788  2C 10 00 0C */	cmpwi r16, 0xc
/* 800BD6AC 000BA78C  41 80 00 2C */	blt .L_800BD6D8
/* 800BD6B0 000BA790  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BD6B4 000BA794  38 61 00 08 */	addi r3, r1, 0x8
/* 800BD6B8 000BA798  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BD6BC 000BA79C  38 A0 00 03 */	li r5, 0x3
/* 800BD6C0 000BA7A0  38 84 00 20 */	addi r4, r4, 0x20
/* 800BD6C4 000BA7A4  48 12 9F F9 */	bl strncpy
/* 800BD6C8 000BA7A8  2C 10 00 0C */	cmpwi r16, 0xc
/* 800BD6CC 000BA7AC  41 82 00 30 */	beq .L_800BD6FC
/* 800BD6D0 000BA7B0  3A 10 FF F4 */	addi r16, r16, -0xc
/* 800BD6D4 000BA7B4  48 00 00 28 */	b .L_800BD6FC
.L_800BD6D8:
/* 800BD6D8 000BA7B8  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BD6DC 000BA7BC  38 61 00 08 */	addi r3, r1, 0x8
/* 800BD6E0 000BA7C0  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BD6E4 000BA7C4  38 A0 00 03 */	li r5, 0x3
/* 800BD6E8 000BA7C8  38 84 00 23 */	addi r4, r4, 0x23
/* 800BD6EC 000BA7CC  48 12 9F D1 */	bl strncpy
/* 800BD6F0 000BA7D0  2C 10 00 00 */	cmpwi r16, 0x0
/* 800BD6F4 000BA7D4  40 82 00 08 */	bne .L_800BD6FC
/* 800BD6F8 000BA7D8  3A 00 00 0C */	li r16, 0xc
.L_800BD6FC:
/* 800BD6FC 000BA7DC  3C 60 80 3C */	lis r3, zSaveLoadGameTable@ha
/* 800BD700 000BA7E0  3C C0 80 26 */	lis r6, "@stringBase0"@ha
/* 800BD704 000BA7E4  38 03 25 20 */	addi r0, r3, zSaveLoadGameTable@l
/* 800BD708 000BA7E8  7E 05 83 78 */	mr r5, r16
/* 800BD70C 000BA7EC  7C 80 72 14 */	add r4, r0, r14
/* 800BD710 000BA7F0  39 06 FC B0 */	addi r8, r6, "@stringBase0"@l
/* 800BD714 000BA7F4  88 C4 00 4E */	lbz r6, 0x4e(r4)
/* 800BD718 000BA7F8  38 61 00 28 */	addi r3, r1, 0x28
/* 800BD71C 000BA7FC  88 E4 00 4F */	lbz r7, 0x4f(r4)
/* 800BD720 000BA800  38 88 00 26 */	addi r4, r8, 0x26
/* 800BD724 000BA804  39 01 00 08 */	addi r8, r1, 0x8
/* 800BD728 000BA808  4C C6 31 82 */	crclr 4*cr1+eq
/* 800BD72C 000BA80C  48 12 68 09 */	bl sprintf
/* 800BD730 000BA810  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BD734 000BA814  38 61 00 48 */	addi r3, r1, 0x48
/* 800BD738 000BA818  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BD73C 000BA81C  38 C1 00 28 */	addi r6, r1, 0x28
/* 800BD740 000BA820  7C 65 1B 78 */	mr r5, r3
/* 800BD744 000BA824  38 84 00 31 */	addi r4, r4, 0x31
/* 800BD748 000BA828  4C C6 31 82 */	crclr 4*cr1+eq
/* 800BD74C 000BA82C  48 12 67 E9 */	bl sprintf
/* 800BD750 000BA830  38 00 00 00 */	li r0, 0x0
/* 800BD754 000BA834  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800BD758 000BA838  38 83 FC B0 */	addi r4, r3, "@stringBase0"@l
/* 800BD75C 000BA83C  98 01 00 47 */	stb r0, 0x47(r1)
/* 800BD760 000BA840  7D E3 7B 78 */	mr r3, r15
/* 800BD764 000BA844  98 01 00 67 */	stb r0, 0x67(r1)
/* 800BD768 000BA848  38 84 00 37 */	addi r4, r4, 0x37
/* 800BD76C 000BA84C  4B F8 EE 41 */	bl xStricmp__FPCcPCc
/* 800BD770 000BA850  2C 03 00 00 */	cmpwi r3, 0x0
/* 800BD774 000BA854  40 82 00 20 */	bne .L_800BD794
/* 800BD778 000BA858  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BD77C 000BA85C  7F E3 FB 78 */	mr r3, r31
/* 800BD780 000BA860  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BD784 000BA864  38 84 00 37 */	addi r4, r4, 0x37
/* 800BD788 000BA868  4C C6 31 82 */	crclr 4*cr1+eq
/* 800BD78C 000BA86C  48 12 67 A9 */	bl sprintf
/* 800BD790 000BA870  48 00 00 10 */	b .L_800BD7A0
.L_800BD794:
/* 800BD794 000BA874  7F E3 FB 78 */	mr r3, r31
/* 800BD798 000BA878  7F C4 F3 78 */	mr r4, r30
/* 800BD79C 000BA87C  4B FF 1A 91 */	bl zSaveLoad_BuildName__FPci
.L_800BD7A0:
/* 800BD7A0 000BA880  7F E3 FB 78 */	mr r3, r31
/* 800BD7A4 000BA884  B9 C1 01 68 */	lmw r14, 0x168(r1)
/* 800BD7A8 000BA888  80 01 01 B4 */	lwz r0, 0x1b4(r1)
/* 800BD7AC 000BA88C  7C 08 03 A6 */	mtlr r0
/* 800BD7B0 000BA890  38 21 01 B0 */	addi r1, r1, 0x1b0
/* 800BD7B4 000BA894  4E 80 00 20 */	blr
.endfn "zVarGameSlotInfo__18@unnamed@zVar_cpp@FiPcUl"

# @unnamed@zVar_cpp@::var_text_GameSlot0()
.fn "var_text_GameSlot0__18@unnamed@zVar_cpp@Fv", local
/* 800BD7B8 000BA898  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BD7BC 000BA89C  7C 08 02 A6 */	mflr r0
/* 800BD7C0 000BA8A0  3C 80 80 30 */	lis r4, buffer$868@ha
/* 800BD7C4 000BA8A4  38 60 00 00 */	li r3, 0x0
/* 800BD7C8 000BA8A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BD7CC 000BA8AC  38 84 87 68 */	addi r4, r4, buffer$868@l
/* 800BD7D0 000BA8B0  38 A0 00 3F */	li r5, 0x3f
/* 800BD7D4 000BA8B4  4B FF FD 29 */	bl "zVarGameSlotInfo__18@unnamed@zVar_cpp@FiPcUl"
/* 800BD7D8 000BA8B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BD7DC 000BA8BC  7C 08 03 A6 */	mtlr r0
/* 800BD7E0 000BA8C0  38 21 00 10 */	addi r1, r1, 0x10
/* 800BD7E4 000BA8C4  4E 80 00 20 */	blr
.endfn "var_text_GameSlot0__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_GameSlot1()
.fn "var_text_GameSlot1__18@unnamed@zVar_cpp@Fv", local
/* 800BD7E8 000BA8C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BD7EC 000BA8CC  7C 08 02 A6 */	mflr r0
/* 800BD7F0 000BA8D0  3C 80 80 30 */	lis r4, buffer$873@ha
/* 800BD7F4 000BA8D4  38 60 00 01 */	li r3, 0x1
/* 800BD7F8 000BA8D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BD7FC 000BA8DC  38 84 87 A8 */	addi r4, r4, buffer$873@l
/* 800BD800 000BA8E0  38 A0 00 3F */	li r5, 0x3f
/* 800BD804 000BA8E4  4B FF FC F9 */	bl "zVarGameSlotInfo__18@unnamed@zVar_cpp@FiPcUl"
/* 800BD808 000BA8E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BD80C 000BA8EC  7C 08 03 A6 */	mtlr r0
/* 800BD810 000BA8F0  38 21 00 10 */	addi r1, r1, 0x10
/* 800BD814 000BA8F4  4E 80 00 20 */	blr
.endfn "var_text_GameSlot1__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_GameSlot2()
.fn "var_text_GameSlot2__18@unnamed@zVar_cpp@Fv", local
/* 800BD818 000BA8F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BD81C 000BA8FC  7C 08 02 A6 */	mflr r0
/* 800BD820 000BA900  3C 80 80 30 */	lis r4, buffer$878@ha
/* 800BD824 000BA904  38 60 00 02 */	li r3, 0x2
/* 800BD828 000BA908  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BD82C 000BA90C  38 84 87 E8 */	addi r4, r4, buffer$878@l
/* 800BD830 000BA910  38 A0 00 3F */	li r5, 0x3f
/* 800BD834 000BA914  4B FF FC C9 */	bl "zVarGameSlotInfo__18@unnamed@zVar_cpp@FiPcUl"
/* 800BD838 000BA918  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BD83C 000BA91C  7C 08 03 A6 */	mtlr r0
/* 800BD840 000BA920  38 21 00 10 */	addi r1, r1, 0x10
/* 800BD844 000BA924  4E 80 00 20 */	blr
.endfn "var_text_GameSlot2__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_GameSlot3()
.fn "var_text_GameSlot3__18@unnamed@zVar_cpp@Fv", local
/* 800BD848 000BA928  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BD84C 000BA92C  7C 08 02 A6 */	mflr r0
/* 800BD850 000BA930  3C 80 80 30 */	lis r4, buffer$883@ha
/* 800BD854 000BA934  38 60 00 03 */	li r3, 0x3
/* 800BD858 000BA938  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BD85C 000BA93C  38 84 88 28 */	addi r4, r4, buffer$883@l
/* 800BD860 000BA940  38 A0 00 3F */	li r5, 0x3f
/* 800BD864 000BA944  4B FF FC 99 */	bl "zVarGameSlotInfo__18@unnamed@zVar_cpp@FiPcUl"
/* 800BD868 000BA948  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BD86C 000BA94C  7C 08 03 A6 */	mtlr r0
/* 800BD870 000BA950  38 21 00 10 */	addi r1, r1, 0x10
/* 800BD874 000BA954  4E 80 00 20 */	blr
.endfn "var_text_GameSlot3__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_GameSlot4()
.fn "var_text_GameSlot4__18@unnamed@zVar_cpp@Fv", local
/* 800BD878 000BA958  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BD87C 000BA95C  7C 08 02 A6 */	mflr r0
/* 800BD880 000BA960  3C 80 80 30 */	lis r4, buffer$888@ha
/* 800BD884 000BA964  38 60 00 04 */	li r3, 0x4
/* 800BD888 000BA968  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BD88C 000BA96C  38 84 88 68 */	addi r4, r4, buffer$888@l
/* 800BD890 000BA970  38 A0 00 3F */	li r5, 0x3f
/* 800BD894 000BA974  4B FF FC 69 */	bl "zVarGameSlotInfo__18@unnamed@zVar_cpp@FiPcUl"
/* 800BD898 000BA978  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BD89C 000BA97C  7C 08 03 A6 */	mtlr r0
/* 800BD8A0 000BA980  38 21 00 10 */	addi r1, r1, 0x10
/* 800BD8A4 000BA984  4E 80 00 20 */	blr
.endfn "var_text_GameSlot4__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_GameSlot5()
.fn "var_text_GameSlot5__18@unnamed@zVar_cpp@Fv", local
/* 800BD8A8 000BA988  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BD8AC 000BA98C  7C 08 02 A6 */	mflr r0
/* 800BD8B0 000BA990  3C 80 80 30 */	lis r4, buffer$893@ha
/* 800BD8B4 000BA994  38 60 00 05 */	li r3, 0x5
/* 800BD8B8 000BA998  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BD8BC 000BA99C  38 84 88 A8 */	addi r4, r4, buffer$893@l
/* 800BD8C0 000BA9A0  38 A0 00 3F */	li r5, 0x3f
/* 800BD8C4 000BA9A4  4B FF FC 39 */	bl "zVarGameSlotInfo__18@unnamed@zVar_cpp@FiPcUl"
/* 800BD8C8 000BA9A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BD8CC 000BA9AC  7C 08 03 A6 */	mtlr r0
/* 800BD8D0 000BA9B0  38 21 00 10 */	addi r1, r1, 0x10
/* 800BD8D4 000BA9B4  4E 80 00 20 */	blr
.endfn "var_text_GameSlot5__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_GameSlot6()
.fn "var_text_GameSlot6__18@unnamed@zVar_cpp@Fv", local
/* 800BD8D8 000BA9B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BD8DC 000BA9BC  7C 08 02 A6 */	mflr r0
/* 800BD8E0 000BA9C0  3C 80 80 30 */	lis r4, buffer$898@ha
/* 800BD8E4 000BA9C4  38 60 00 06 */	li r3, 0x6
/* 800BD8E8 000BA9C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BD8EC 000BA9CC  38 84 88 E8 */	addi r4, r4, buffer$898@l
/* 800BD8F0 000BA9D0  38 A0 00 3F */	li r5, 0x3f
/* 800BD8F4 000BA9D4  4B FF FC 09 */	bl "zVarGameSlotInfo__18@unnamed@zVar_cpp@FiPcUl"
/* 800BD8F8 000BA9D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BD8FC 000BA9DC  7C 08 03 A6 */	mtlr r0
/* 800BD900 000BA9E0  38 21 00 10 */	addi r1, r1, 0x10
/* 800BD904 000BA9E4  4E 80 00 20 */	blr
.endfn "var_text_GameSlot6__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_GameSlot7()
.fn "var_text_GameSlot7__18@unnamed@zVar_cpp@Fv", local
/* 800BD908 000BA9E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BD90C 000BA9EC  7C 08 02 A6 */	mflr r0
/* 800BD910 000BA9F0  3C 80 80 30 */	lis r4, buffer$903@ha
/* 800BD914 000BA9F4  38 60 00 07 */	li r3, 0x7
/* 800BD918 000BA9F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BD91C 000BA9FC  38 84 89 28 */	addi r4, r4, buffer$903@l
/* 800BD920 000BAA00  38 A0 00 3F */	li r5, 0x3f
/* 800BD924 000BAA04  4B FF FB D9 */	bl "zVarGameSlotInfo__18@unnamed@zVar_cpp@FiPcUl"
/* 800BD928 000BAA08  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BD92C 000BAA0C  7C 08 03 A6 */	mtlr r0
/* 800BD930 000BAA10  38 21 00 10 */	addi r1, r1, 0x10
/* 800BD934 000BAA14  4E 80 00 20 */	blr
.endfn "var_text_GameSlot7__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_MCAccessType()
.fn "var_text_MCAccessType__18@unnamed@zVar_cpp@Fv", local
/* 800BD938 000BAA18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BD93C 000BAA1C  7C 08 02 A6 */	mflr r0
/* 800BD940 000BAA20  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BD944 000BAA24  4B FE FF A9 */	bl zSaveLoad_getMCAccessType__Fv
/* 800BD948 000BAA28  3C 80 80 29 */	lis r4, state_text$908@ha
/* 800BD94C 000BAA2C  54 60 10 3A */	slwi r0, r3, 2
/* 800BD950 000BAA30  38 64 16 E0 */	addi r3, r4, state_text$908@l
/* 800BD954 000BAA34  7C 63 00 2E */	lwzx r3, r3, r0
/* 800BD958 000BAA38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BD95C 000BAA3C  7C 08 03 A6 */	mtlr r0
/* 800BD960 000BAA40  38 21 00 10 */	addi r1, r1, 0x10
/* 800BD964 000BAA44  4E 80 00 20 */	blr
.endfn "var_text_MCAccessType__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_MCAutoSaveCard()
.fn "var_text_MCAutoSaveCard__18@unnamed@zVar_cpp@Fv", local
/* 800BD968 000BAA48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BD96C 000BAA4C  7C 08 02 A6 */	mflr r0
/* 800BD970 000BAA50  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BD974 000BAA54  4B FE FF 81 */	bl zSaveLoadGetAutoSaveCard__Fv
/* 800BD978 000BAA58  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BD97C 000BAA5C  3C A0 80 30 */	lis r5, buffer$913@ha
/* 800BD980 000BAA60  7C 66 1B 78 */	mr r6, r3
/* 800BD984 000BAA64  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BD988 000BAA68  38 65 89 68 */	addi r3, r5, buffer$913@l
/* 800BD98C 000BAA6C  38 A6 00 41 */	addi r5, r6, 0x41
/* 800BD990 000BAA70  38 84 00 03 */	addi r4, r4, 0x3
/* 800BD994 000BAA74  4C C6 31 82 */	crclr 4*cr1+eq
/* 800BD998 000BAA78  48 12 65 9D */	bl sprintf
/* 800BD99C 000BAA7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BD9A0 000BAA80  3C 60 80 30 */	lis r3, buffer$913@ha
/* 800BD9A4 000BAA84  38 63 89 68 */	addi r3, r3, buffer$913@l
/* 800BD9A8 000BAA88  7C 08 03 A6 */	mtlr r0
/* 800BD9AC 000BAA8C  38 21 00 10 */	addi r1, r1, 0x10
/* 800BD9B0 000BAA90  4E 80 00 20 */	blr
.endfn "var_text_MCAutoSaveCard__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_MCPS2MaxSpace()
.fn "var_text_MCPS2MaxSpace__18@unnamed@zVar_cpp@Fv", local
/* 800BD9B4 000BAA94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BD9B8 000BAA98  7C 08 02 A6 */	mflr r0
/* 800BD9BC 000BAA9C  3C 60 80 30 */	lis r3, buffer$918@ha
/* 800BD9C0 000BAAA0  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BD9C4 000BAAA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BD9C8 000BAAA8  38 63 89 74 */	addi r3, r3, buffer$918@l
/* 800BD9CC 000BAAAC  38 A0 00 00 */	li r5, 0x0
/* 800BD9D0 000BAAB0  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BD9D4 000BAAB4  4C C6 31 82 */	crclr 4*cr1+eq
/* 800BD9D8 000BAAB8  48 12 65 5D */	bl sprintf
/* 800BD9DC 000BAABC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BD9E0 000BAAC0  3C 60 80 30 */	lis r3, buffer$918@ha
/* 800BD9E4 000BAAC4  38 63 89 74 */	addi r3, r3, buffer$918@l
/* 800BD9E8 000BAAC8  7C 08 03 A6 */	mtlr r0
/* 800BD9EC 000BAACC  38 21 00 10 */	addi r1, r1, 0x10
/* 800BD9F0 000BAAD0  4E 80 00 20 */	blr
.endfn "var_text_MCPS2MaxSpace__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_MCPS2MinSpace()
.fn "var_text_MCPS2MinSpace__18@unnamed@zVar_cpp@Fv", local
/* 800BD9F4 000BAAD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BD9F8 000BAAD8  7C 08 02 A6 */	mflr r0
/* 800BD9FC 000BAADC  3C 60 80 30 */	lis r3, buffer$923@ha
/* 800BDA00 000BAAE0  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BDA04 000BAAE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BDA08 000BAAE8  38 63 89 80 */	addi r3, r3, buffer$923@l
/* 800BDA0C 000BAAEC  38 A0 00 00 */	li r5, 0x0
/* 800BDA10 000BAAF0  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BDA14 000BAAF4  4C C6 31 82 */	crclr 4*cr1+eq
/* 800BDA18 000BAAF8  48 12 65 1D */	bl sprintf
/* 800BDA1C 000BAAFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BDA20 000BAB00  3C 60 80 30 */	lis r3, buffer$923@ha
/* 800BDA24 000BAB04  38 63 89 80 */	addi r3, r3, buffer$923@l
/* 800BDA28 000BAB08  7C 08 03 A6 */	mtlr r0
/* 800BDA2C 000BAB0C  38 21 00 10 */	addi r1, r1, 0x10
/* 800BDA30 000BAB10  4E 80 00 20 */	blr
.endfn "var_text_MCPS2MinSpace__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_MCSelectedCard()
.fn "var_text_MCSelectedCard__18@unnamed@zVar_cpp@Fv", local
/* 800BDA34 000BAB14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BDA38 000BAB18  7C 08 02 A6 */	mflr r0
/* 800BDA3C 000BAB1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BDA40 000BAB20  4B FE FE 95 */	bl zSaveLoad_getcard__Fv
/* 800BDA44 000BAB24  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BDA48 000BAB28  3C A0 80 30 */	lis r5, buffer$928@ha
/* 800BDA4C 000BAB2C  7C 66 1B 78 */	mr r6, r3
/* 800BDA50 000BAB30  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BDA54 000BAB34  38 65 89 8C */	addi r3, r5, buffer$928@l
/* 800BDA58 000BAB38  38 A6 00 41 */	addi r5, r6, 0x41
/* 800BDA5C 000BAB3C  38 84 00 03 */	addi r4, r4, 0x3
/* 800BDA60 000BAB40  4C C6 31 82 */	crclr 4*cr1+eq
/* 800BDA64 000BAB44  48 12 64 D1 */	bl sprintf
/* 800BDA68 000BAB48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BDA6C 000BAB4C  3C 60 80 30 */	lis r3, buffer$928@ha
/* 800BDA70 000BAB50  38 63 89 8C */	addi r3, r3, buffer$928@l
/* 800BDA74 000BAB54  7C 08 03 A6 */	mtlr r0
/* 800BDA78 000BAB58  38 21 00 10 */	addi r1, r1, 0x10
/* 800BDA7C 000BAB5C  4E 80 00 20 */	blr
.endfn "var_text_MCSelectedCard__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_MCSelectedGame()
.fn "var_text_MCSelectedGame__18@unnamed@zVar_cpp@Fv", local
/* 800BDA80 000BAB60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BDA84 000BAB64  7C 08 02 A6 */	mflr r0
/* 800BDA88 000BAB68  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BDA8C 000BAB6C  4B FE FE 41 */	bl zSaveLoad_getgame__Fv
/* 800BDA90 000BAB70  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BDA94 000BAB74  3C A0 80 30 */	lis r5, buffer$933@ha
/* 800BDA98 000BAB78  7C 66 1B 78 */	mr r6, r3
/* 800BDA9C 000BAB7C  38 65 89 98 */	addi r3, r5, buffer$933@l
/* 800BDAA0 000BAB80  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BDAA4 000BAB84  38 A6 00 01 */	addi r5, r6, 0x1
/* 800BDAA8 000BAB88  4C C6 31 82 */	crclr 4*cr1+eq
/* 800BDAAC 000BAB8C  48 12 64 89 */	bl sprintf
/* 800BDAB0 000BAB90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BDAB4 000BAB94  3C 60 80 30 */	lis r3, buffer$933@ha
/* 800BDAB8 000BAB98  38 63 89 98 */	addi r3, r3, buffer$933@l
/* 800BDABC 000BAB9C  7C 08 03 A6 */	mtlr r0
/* 800BDAC0 000BABA0  38 21 00 10 */	addi r1, r1, 0x10
/* 800BDAC4 000BABA4  4E 80 00 20 */	blr
.endfn "var_text_MCSelectedGame__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_PlayerHeShe()
.fn "var_text_PlayerHeShe__18@unnamed@zVar_cpp@Fv", local
/* 800BDAC8 000BABA8  80 0D 8D 60 */	lwz r0, gCurrentPlayer@sda21(r13)
/* 800BDACC 000BABAC  3C 60 80 29 */	lis r3, text$938@ha
/* 800BDAD0 000BABB0  38 63 16 F0 */	addi r3, r3, text$938@l
/* 800BDAD4 000BABB4  54 00 10 3A */	slwi r0, r0, 2
/* 800BDAD8 000BABB8  7C 63 00 2E */	lwzx r3, r3, r0
/* 800BDADC 000BABBC  4E 80 00 20 */	blr
.endfn "var_text_PlayerHeShe__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_PlayerName()
.fn "var_text_PlayerName__18@unnamed@zVar_cpp@Fv", local
/* 800BDAE0 000BABC0  80 0D 8D 60 */	lwz r0, gCurrentPlayer@sda21(r13)
/* 800BDAE4 000BABC4  3C 60 80 29 */	lis r3, text$943@ha
/* 800BDAE8 000BABC8  38 63 16 FC */	addi r3, r3, text$943@l
/* 800BDAEC 000BABCC  54 00 10 3A */	slwi r0, r0, 2
/* 800BDAF0 000BABD0  7C 63 00 2E */	lwzx r3, r3, r0
/* 800BDAF4 000BABD4  4E 80 00 20 */	blr
.endfn "var_text_PlayerName__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_PlayerPosition()
.fn "var_text_PlayerPosition__18@unnamed@zVar_cpp@Fv", local
/* 800BDAF8 000BABD8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800BDAFC 000BABDC  7C 08 02 A6 */	mflr r0
/* 800BDB00 000BABE0  3C 80 80 3C */	lis r4, globals@ha
/* 800BDB04 000BABE4  3C 60 80 30 */	lis r3, buffer$948@ha
/* 800BDB08 000BABE8  90 01 00 24 */	stw r0, 0x24(r1)
/* 800BDB0C 000BABEC  38 A4 05 58 */	addi r5, r4, globals@l
/* 800BDB10 000BABF0  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BDB14 000BABF4  38 63 89 A4 */	addi r3, r3, buffer$948@l
/* 800BDB18 000BABF8  80 A5 07 28 */	lwz r5, 0x728(r5)
/* 800BDB1C 000BABFC  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BDB20 000BAC00  38 84 00 E0 */	addi r4, r4, 0xe0
/* 800BDB24 000BAC04  C0 45 00 30 */	lfs f2, 0x30(r5)
/* 800BDB28 000BAC08  C0 25 00 34 */	lfs f1, 0x34(r5)
/* 800BDB2C 000BAC0C  C0 05 00 38 */	lfs f0, 0x38(r5)
/* 800BDB30 000BAC10  FC 40 10 1E */	fctiwz f2, f2
/* 800BDB34 000BAC14  FC 20 08 1E */	fctiwz f1, f1
/* 800BDB38 000BAC18  FC 00 00 1E */	fctiwz f0, f0
/* 800BDB3C 000BAC1C  D8 41 00 08 */	stfd f2, 0x8(r1)
/* 800BDB40 000BAC20  D8 21 00 10 */	stfd f1, 0x10(r1)
/* 800BDB44 000BAC24  80 A1 00 0C */	lwz r5, 0xc(r1)
/* 800BDB48 000BAC28  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 800BDB4C 000BAC2C  80 C1 00 14 */	lwz r6, 0x14(r1)
/* 800BDB50 000BAC30  80 E1 00 1C */	lwz r7, 0x1c(r1)
/* 800BDB54 000BAC34  4C C6 31 82 */	crclr 4*cr1+eq
/* 800BDB58 000BAC38  48 12 63 DD */	bl sprintf
/* 800BDB5C 000BAC3C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800BDB60 000BAC40  3C 60 80 30 */	lis r3, buffer$948@ha
/* 800BDB64 000BAC44  38 63 89 A4 */	addi r3, r3, buffer$948@l
/* 800BDB68 000BAC48  7C 08 03 A6 */	mtlr r0
/* 800BDB6C 000BAC4C  38 21 00 20 */	addi r1, r1, 0x20
/* 800BDB70 000BAC50  4E 80 00 20 */	blr
.endfn "var_text_PlayerPosition__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_SelectedArea()
.fn "var_text_SelectedArea__18@unnamed@zVar_cpp@Fv", local
/* 800BDB74 000BAC54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BDB78 000BAC58  7C 08 02 A6 */	mflr r0
/* 800BDB7C 000BAC5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BDB80 000BAC60  80 6D 91 68 */	lwz r3, "selSceneID__18@unnamed@zVar_cpp@"@sda21(r13)
/* 800BDB84 000BAC64  4B FF 73 71 */	bl zSceneGetAreaname__FUi
/* 800BDB88 000BAC68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BDB8C 000BAC6C  7C 08 03 A6 */	mtlr r0
/* 800BDB90 000BAC70  38 21 00 10 */	addi r1, r1, 0x10
/* 800BDB94 000BAC74  4E 80 00 20 */	blr
.endfn "var_text_SelectedArea__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_ShinyCount()
.fn "var_text_ShinyCount__18@unnamed@zVar_cpp@Fv", local
/* 800BDB98 000BAC78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BDB9C 000BAC7C  7C 08 02 A6 */	mflr r0
/* 800BDBA0 000BAC80  3C 60 80 3C */	lis r3, globals@ha
/* 800BDBA4 000BAC84  3C A0 80 30 */	lis r5, buffer$960@ha
/* 800BDBA8 000BAC88  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BDBAC 000BAC8C  38 83 05 58 */	addi r4, r3, globals@l
/* 800BDBB0 000BAC90  38 65 89 D4 */	addi r3, r5, buffer$960@l
/* 800BDBB4 000BAC94  3C C0 80 26 */	lis r6, "@stringBase0"@ha
/* 800BDBB8 000BAC98  80 A4 1B 00 */	lwz r5, 0x1b00(r4)
/* 800BDBBC 000BAC9C  38 86 FC B0 */	addi r4, r6, "@stringBase0"@l
/* 800BDBC0 000BACA0  4C C6 31 82 */	crclr 4*cr1+eq
/* 800BDBC4 000BACA4  48 12 63 71 */	bl sprintf
/* 800BDBC8 000BACA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BDBCC 000BACAC  3C 60 80 30 */	lis r3, buffer$960@ha
/* 800BDBD0 000BACB0  38 63 89 D4 */	addi r3, r3, buffer$960@l
/* 800BDBD4 000BACB4  7C 08 03 A6 */	mtlr r0
/* 800BDBD8 000BACB8  38 21 00 10 */	addi r1, r1, 0x10
/* 800BDBDC 000BACBC  4E 80 00 20 */	blr
.endfn "var_text_ShinyCount__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_ShinyCountText()
.fn "var_text_ShinyCountText__18@unnamed@zVar_cpp@Fv", local
/* 800BDBE0 000BACC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BDBE4 000BACC4  7C 08 02 A6 */	mflr r0
/* 800BDBE8 000BACC8  3C 60 80 3C */	lis r3, globals@ha
/* 800BDBEC 000BACCC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BDBF0 000BACD0  38 63 05 58 */	addi r3, r3, globals@l
/* 800BDBF4 000BACD4  80 A3 1B 00 */	lwz r5, 0x1b00(r3)
/* 800BDBF8 000BACD8  28 05 00 00 */	cmplwi r5, 0x0
/* 800BDBFC 000BACDC  40 82 00 20 */	bne .L_800BDC1C
/* 800BDC00 000BACE0  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BDC04 000BACE4  3C 60 80 29 */	lis r3, buffer$965@ha
/* 800BDC08 000BACE8  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BDC0C 000BACEC  38 63 17 08 */	addi r3, r3, buffer$965@l
/* 800BDC10 000BACF0  38 84 00 E9 */	addi r4, r4, 0xe9
/* 800BDC14 000BACF4  48 12 9A ED */	bl strcpy
/* 800BDC18 000BACF8  48 00 00 44 */	b .L_800BDC5C
.L_800BDC1C:
/* 800BDC1C 000BACFC  28 05 00 01 */	cmplwi r5, 0x1
/* 800BDC20 000BAD00  40 82 00 20 */	bne .L_800BDC40
/* 800BDC24 000BAD04  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BDC28 000BAD08  3C 60 80 29 */	lis r3, buffer$965@ha
/* 800BDC2C 000BAD0C  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BDC30 000BAD10  38 63 17 08 */	addi r3, r3, buffer$965@l
/* 800BDC34 000BAD14  38 84 00 FC */	addi r4, r4, 0xfc
/* 800BDC38 000BAD18  48 12 9A C9 */	bl strcpy
/* 800BDC3C 000BAD1C  48 00 00 20 */	b .L_800BDC5C
.L_800BDC40:
/* 800BDC40 000BAD20  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BDC44 000BAD24  3C 60 80 29 */	lis r3, buffer$965@ha
/* 800BDC48 000BAD28  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BDC4C 000BAD2C  38 63 17 08 */	addi r3, r3, buffer$965@l
/* 800BDC50 000BAD30  38 84 01 0D */	addi r4, r4, 0x10d
/* 800BDC54 000BAD34  4C C6 31 82 */	crclr 4*cr1+eq
/* 800BDC58 000BAD38  48 12 62 DD */	bl sprintf
.L_800BDC5C:
/* 800BDC5C 000BAD3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BDC60 000BAD40  3C 60 80 29 */	lis r3, buffer$965@ha
/* 800BDC64 000BAD44  38 63 17 08 */	addi r3, r3, buffer$965@l
/* 800BDC68 000BAD48  7C 08 03 A6 */	mtlr r0
/* 800BDC6C 000BAD4C  38 21 00 10 */	addi r1, r1, 0x10
/* 800BDC70 000BAD50  4E 80 00 20 */	blr
.endfn "var_text_ShinyCountText__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_SoundFXVolume()
.fn "var_text_SoundFXVolume__18@unnamed@zVar_cpp@Fv", local
/* 800BDC74 000BAD54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BDC78 000BAD58  7C 08 02 A6 */	mflr r0
/* 800BDC7C 000BAD5C  38 60 00 00 */	li r3, 0x0
/* 800BDC80 000BAD60  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BDC84 000BAD64  48 00 04 A5 */	bl zVarEntryCB_SndFXVol__FPv
/* 800BDC88 000BAD68  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BDC8C 000BAD6C  3C C0 80 30 */	lis r6, buffer$977@ha
/* 800BDC90 000BAD70  7C 65 1B 78 */	mr r5, r3
/* 800BDC94 000BAD74  38 66 89 E0 */	addi r3, r6, buffer$977@l
/* 800BDC98 000BAD78  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BDC9C 000BAD7C  4C C6 31 82 */	crclr 4*cr1+eq
/* 800BDCA0 000BAD80  48 12 62 95 */	bl sprintf
/* 800BDCA4 000BAD84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BDCA8 000BAD88  3C 60 80 30 */	lis r3, buffer$977@ha
/* 800BDCAC 000BAD8C  38 63 89 E0 */	addi r3, r3, buffer$977@l
/* 800BDCB0 000BAD90  7C 08 03 A6 */	mtlr r0
/* 800BDCB4 000BAD94  38 21 00 10 */	addi r1, r1, 0x10
/* 800BDCB8 000BAD98  4E 80 00 20 */	blr
.endfn "var_text_SoundFXVolume__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_SoundMusicVolume()
.fn "var_text_SoundMusicVolume__18@unnamed@zVar_cpp@Fv", local
/* 800BDCBC 000BAD9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BDCC0 000BADA0  7C 08 02 A6 */	mflr r0
/* 800BDCC4 000BADA4  38 60 00 00 */	li r3, 0x0
/* 800BDCC8 000BADA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BDCCC 000BADAC  48 00 04 21 */	bl zVarEntryCB_SndMusicVol__FPv
/* 800BDCD0 000BADB0  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BDCD4 000BADB4  3C C0 80 30 */	lis r6, buffer$982@ha
/* 800BDCD8 000BADB8  7C 65 1B 78 */	mr r5, r3
/* 800BDCDC 000BADBC  38 66 89 EC */	addi r3, r6, buffer$982@l
/* 800BDCE0 000BADC0  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BDCE4 000BADC4  4C C6 31 82 */	crclr 4*cr1+eq
/* 800BDCE8 000BADC8  48 12 62 4D */	bl sprintf
/* 800BDCEC 000BADCC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BDCF0 000BADD0  3C 60 80 30 */	lis r3, buffer$982@ha
/* 800BDCF4 000BADD4  38 63 89 EC */	addi r3, r3, buffer$982@l
/* 800BDCF8 000BADD8  7C 08 03 A6 */	mtlr r0
/* 800BDCFC 000BADDC  38 21 00 10 */	addi r1, r1, 0x10
/* 800BDD00 000BADE0  4E 80 00 20 */	blr
.endfn "var_text_SoundMusicVolume__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_SpaceAvailable()
.fn "var_text_SpaceAvailable__18@unnamed@zVar_cpp@Fv", local
/* 800BDD04 000BADE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BDD08 000BADE8  7C 08 02 A6 */	mflr r0
/* 800BDD0C 000BADEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BDD10 000BADF0  4B FE FB CD */	bl zSaveLoad_getMCavailable__Fv
/* 800BDD14 000BADF4  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BDD18 000BADF8  3C C0 80 30 */	lis r6, buffer$987@ha
/* 800BDD1C 000BADFC  7C 65 1B 78 */	mr r5, r3
/* 800BDD20 000BAE00  38 66 89 F8 */	addi r3, r6, buffer$987@l
/* 800BDD24 000BAE04  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BDD28 000BAE08  4C C6 31 82 */	crclr 4*cr1+eq
/* 800BDD2C 000BAE0C  48 12 62 09 */	bl sprintf
/* 800BDD30 000BAE10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BDD34 000BAE14  3C 60 80 30 */	lis r3, buffer$987@ha
/* 800BDD38 000BAE18  38 63 89 F8 */	addi r3, r3, buffer$987@l
/* 800BDD3C 000BAE1C  7C 08 03 A6 */	mtlr r0
/* 800BDD40 000BAE20  38 21 00 10 */	addi r1, r1, 0x10
/* 800BDD44 000BAE24  4E 80 00 20 */	blr
.endfn "var_text_SpaceAvailable__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_SpaceAvailableString()
.fn "var_text_SpaceAvailableString__18@unnamed@zVar_cpp@Fv", local
/* 800BDD48 000BAE28  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 800BDD4C 000BAE2C  7C 08 02 A6 */	mflr r0
/* 800BDD50 000BAE30  90 01 00 34 */	stw r0, 0x34(r1)
/* 800BDD54 000BAE34  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 800BDD58 000BAE38  4B FE FB 85 */	bl zSaveLoad_getMCavailable__Fv
/* 800BDD5C 000BAE3C  7C 60 1B 78 */	mr r0, r3
/* 800BDD60 000BAE40  38 61 00 08 */	addi r3, r1, 0x8
/* 800BDD64 000BAE44  7C 1F 03 78 */	mr r31, r0
/* 800BDD68 000BAE48  38 80 00 00 */	li r4, 0x0
/* 800BDD6C 000BAE4C  38 A0 00 20 */	li r5, 0x20
/* 800BDD70 000BAE50  4B F4 56 E9 */	bl memset
/* 800BDD74 000BAE54  3C 60 80 30 */	lis r3, buffer$992@ha
/* 800BDD78 000BAE58  38 80 00 00 */	li r4, 0x0
/* 800BDD7C 000BAE5C  38 63 8A 04 */	addi r3, r3, buffer$992@l
/* 800BDD80 000BAE60  38 A0 00 40 */	li r5, 0x40
/* 800BDD84 000BAE64  4B F4 56 D5 */	bl memset
/* 800BDD88 000BAE68  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800BDD8C 000BAE6C  7F E5 FB 78 */	mr r5, r31
/* 800BDD90 000BAE70  38 83 FC B0 */	addi r4, r3, "@stringBase0"@l
/* 800BDD94 000BAE74  38 61 00 08 */	addi r3, r1, 0x8
/* 800BDD98 000BAE78  4C C6 31 82 */	crclr 4*cr1+eq
/* 800BDD9C 000BAE7C  48 12 61 99 */	bl sprintf
/* 800BDDA0 000BAE80  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BDDA4 000BAE84  3C 60 80 30 */	lis r3, buffer$992@ha
/* 800BDDA8 000BAE88  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BDDAC 000BAE8C  38 A1 00 08 */	addi r5, r1, 0x8
/* 800BDDB0 000BAE90  38 63 8A 04 */	addi r3, r3, buffer$992@l
/* 800BDDB4 000BAE94  38 84 00 10 */	addi r4, r4, 0x10
/* 800BDDB8 000BAE98  4C C6 31 82 */	crclr 4*cr1+eq
/* 800BDDBC 000BAE9C  48 12 61 79 */	bl sprintf
/* 800BDDC0 000BAEA0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 800BDDC4 000BAEA4  3C 60 80 30 */	lis r3, buffer$992@ha
/* 800BDDC8 000BAEA8  38 63 8A 04 */	addi r3, r3, buffer$992@l
/* 800BDDCC 000BAEAC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 800BDDD0 000BAEB0  7C 08 03 A6 */	mtlr r0
/* 800BDDD4 000BAEB4  38 21 00 30 */	addi r1, r1, 0x30
/* 800BDDD8 000BAEB8  4E 80 00 20 */	blr
.endfn "var_text_SpaceAvailableString__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_SpaceNeeded()
.fn "var_text_SpaceNeeded__18@unnamed@zVar_cpp@Fv", local
/* 800BDDDC 000BAEBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BDDE0 000BAEC0  7C 08 02 A6 */	mflr r0
/* 800BDDE4 000BAEC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BDDE8 000BAEC8  4B FE FA FD */	bl zSaveLoad_getMCneeded__Fv
/* 800BDDEC 000BAECC  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BDDF0 000BAED0  3C C0 80 30 */	lis r6, buffer$997@ha
/* 800BDDF4 000BAED4  7C 65 1B 78 */	mr r5, r3
/* 800BDDF8 000BAED8  38 66 8A 44 */	addi r3, r6, buffer$997@l
/* 800BDDFC 000BAEDC  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BDE00 000BAEE0  4C C6 31 82 */	crclr 4*cr1+eq
/* 800BDE04 000BAEE4  48 12 61 31 */	bl sprintf
/* 800BDE08 000BAEE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BDE0C 000BAEEC  3C 60 80 30 */	lis r3, buffer$997@ha
/* 800BDE10 000BAEF0  38 63 8A 44 */	addi r3, r3, buffer$997@l
/* 800BDE14 000BAEF4  7C 08 03 A6 */	mtlr r0
/* 800BDE18 000BAEF8  38 21 00 10 */	addi r1, r1, 0x10
/* 800BDE1C 000BAEFC  4E 80 00 20 */	blr
.endfn "var_text_SpaceNeeded__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_TotalPatsSocks()
.fn "var_text_TotalPatsSocks__18@unnamed@zVar_cpp@Fv", local
/* 800BDE20 000BAF00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BDE24 000BAF04  7C 08 02 A6 */	mflr r0
/* 800BDE28 000BAF08  3C 60 80 3C */	lis r3, globals@ha
/* 800BDE2C 000BAF0C  3C A0 80 30 */	lis r5, buffer$1002@ha
/* 800BDE30 000BAF10  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BDE34 000BAF14  38 83 05 58 */	addi r4, r3, globals@l
/* 800BDE38 000BAF18  38 65 8A 50 */	addi r3, r5, buffer$1002@l
/* 800BDE3C 000BAF1C  3C C0 80 26 */	lis r6, "@stringBase0"@ha
/* 800BDE40 000BAF20  80 A4 1B C4 */	lwz r5, 0x1bc4(r4)
/* 800BDE44 000BAF24  38 86 FC B0 */	addi r4, r6, "@stringBase0"@l
/* 800BDE48 000BAF28  4C C6 31 82 */	crclr 4*cr1+eq
/* 800BDE4C 000BAF2C  48 12 60 E9 */	bl sprintf
/* 800BDE50 000BAF30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BDE54 000BAF34  3C 60 80 30 */	lis r3, buffer$1002@ha
/* 800BDE58 000BAF38  38 63 8A 50 */	addi r3, r3, buffer$1002@l
/* 800BDE5C 000BAF3C  7C 08 03 A6 */	mtlr r0
/* 800BDE60 000BAF40  38 21 00 10 */	addi r1, r1, 0x10
/* 800BDE64 000BAF44  4E 80 00 20 */	blr
.endfn "var_text_TotalPatsSocks__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::var_text_MCName()
.fn "var_text_MCName__18@unnamed@zVar_cpp@Fv", local
/* 800BDE68 000BAF48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BDE6C 000BAF4C  7C 08 02 A6 */	mflr r0
/* 800BDE70 000BAF50  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BDE74 000BAF54  4B FE FA 61 */	bl zSaveLoad_getcard__Fv
/* 800BDE78 000BAF58  2C 03 00 01 */	cmpwi r3, 0x1
/* 800BDE7C 000BAF5C  41 82 00 30 */	beq .L_800BDEAC
/* 800BDE80 000BAF60  40 80 00 48 */	bge .L_800BDEC8
/* 800BDE84 000BAF64  2C 03 00 00 */	cmpwi r3, 0x0
/* 800BDE88 000BAF68  40 80 00 08 */	bge .L_800BDE90
/* 800BDE8C 000BAF6C  48 00 00 3C */	b .L_800BDEC8
.L_800BDE90:
/* 800BDE90 000BAF70  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BDE94 000BAF74  3C 60 80 30 */	lis r3, buffer$1007@ha
/* 800BDE98 000BAF78  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BDE9C 000BAF7C  38 63 8A 5C */	addi r3, r3, buffer$1007@l
/* 800BDEA0 000BAF80  38 84 01 21 */	addi r4, r4, 0x121
/* 800BDEA4 000BAF84  48 12 98 5D */	bl strcpy
/* 800BDEA8 000BAF88  48 00 00 38 */	b .L_800BDEE0
.L_800BDEAC:
/* 800BDEAC 000BAF8C  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BDEB0 000BAF90  3C 60 80 30 */	lis r3, buffer$1007@ha
/* 800BDEB4 000BAF94  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BDEB8 000BAF98  38 63 8A 5C */	addi r3, r3, buffer$1007@l
/* 800BDEBC 000BAF9C  38 84 01 30 */	addi r4, r4, 0x130
/* 800BDEC0 000BAFA0  48 12 98 41 */	bl strcpy
/* 800BDEC4 000BAFA4  48 00 00 1C */	b .L_800BDEE0
.L_800BDEC8:
/* 800BDEC8 000BAFA8  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BDECC 000BAFAC  3C 60 80 30 */	lis r3, buffer$1007@ha
/* 800BDED0 000BAFB0  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BDED4 000BAFB4  38 63 8A 5C */	addi r3, r3, buffer$1007@l
/* 800BDED8 000BAFB8  38 84 00 0D */	addi r4, r4, 0xd
/* 800BDEDC 000BAFBC  48 12 98 25 */	bl strcpy
.L_800BDEE0:
/* 800BDEE0 000BAFC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BDEE4 000BAFC4  3C 60 80 30 */	lis r3, buffer$1007@ha
/* 800BDEE8 000BAFC8  38 63 8A 5C */	addi r3, r3, buffer$1007@l
/* 800BDEEC 000BAFCC  7C 08 03 A6 */	mtlr r0
/* 800BDEF0 000BAFD0  38 21 00 10 */	addi r1, r1, 0x10
/* 800BDEF4 000BAFD4  4E 80 00 20 */	blr
.endfn "var_text_MCName__18@unnamed@zVar_cpp@Fv"

# @unnamed@zVar_cpp@::find_var(const substr&)
.fn "find_var__18@unnamed@zVar_cpp@FRC6substr", local
/* 800BDEF8 000BAFD8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800BDEFC 000BAFDC  7C 08 02 A6 */	mflr r0
/* 800BDF00 000BAFE0  90 01 00 24 */	stw r0, 0x24(r1)
/* 800BDF04 000BAFE4  BF 41 00 08 */	stmw r26, 0x8(r1)
/* 800BDF08 000BAFE8  7C 7A 1B 78 */	mr r26, r3
/* 800BDF0C 000BAFEC  3B C0 00 00 */	li r30, 0x0
/* 800BDF10 000BAFF0  3B A0 00 27 */	li r29, 0x27
/* 800BDF14 000BAFF4  48 00 00 44 */	b .L_800BDF58
.L_800BDF18:
/* 800BDF18 000BAFF8  7C 1E EA 14 */	add r0, r30, r29
/* 800BDF1C 000BAFFC  7F 43 D3 78 */	mr r3, r26
/* 800BDF20 000BB000  54 1C F8 7E */	srwi r28, r0, 1
/* 800BDF24 000BB004  1C 1C 00 0C */	mulli r0, r28, 0xc
/* 800BDF28 000BB008  7F 7F 02 14 */	add r27, r31, r0
/* 800BDF2C 000BB00C  7F 64 DB 78 */	mr r4, r27
/* 800BDF30 000BB010  4B F8 EA 05 */	bl icompare__FRC6substrRC6substr
/* 800BDF34 000BB014  2C 03 00 00 */	cmpwi r3, 0x0
/* 800BDF38 000BB018  40 80 00 0C */	bge .L_800BDF44
/* 800BDF3C 000BB01C  7F 9D E3 78 */	mr r29, r28
/* 800BDF40 000BB020  48 00 00 20 */	b .L_800BDF60
.L_800BDF44:
/* 800BDF44 000BB024  40 81 00 0C */	ble .L_800BDF50
/* 800BDF48 000BB028  3B DC 00 01 */	addi r30, r28, 0x1
/* 800BDF4C 000BB02C  48 00 00 14 */	b .L_800BDF60
.L_800BDF50:
/* 800BDF50 000BB030  7F 63 DB 78 */	mr r3, r27
/* 800BDF54 000BB034  48 00 00 18 */	b .L_800BDF6C
.L_800BDF58:
/* 800BDF58 000BB038  3C 60 80 29 */	lis r3, "vars__18@unnamed@zVar_cpp@"@ha
/* 800BDF5C 000BB03C  3B E3 17 48 */	addi r31, r3, "vars__18@unnamed@zVar_cpp@"@l
.L_800BDF60:
/* 800BDF60 000BB040  7C 1E E8 40 */	cmplw r30, r29
/* 800BDF64 000BB044  40 82 FF B4 */	bne .L_800BDF18
/* 800BDF68 000BB048  38 60 00 00 */	li r3, 0x0
.L_800BDF6C:
/* 800BDF6C 000BB04C  BB 41 00 08 */	lmw r26, 0x8(r1)
/* 800BDF70 000BB050  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800BDF74 000BB054  7C 08 03 A6 */	mtlr r0
/* 800BDF78 000BB058  38 21 00 20 */	addi r1, r1, 0x20
/* 800BDF7C 000BB05C  4E 80 00 20 */	blr
.endfn "find_var__18@unnamed@zVar_cpp@FRC6substr"

# @unnamed@zVar_cpp@::parse_tag_var(xtextbox::jot&, const xtextbox&, const xtextbox&, const xtextbox::split_tag&)
.fn "parse_tag_var__18@unnamed@zVar_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag", local
/* 800BDF80 000BB060  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BDF84 000BB064  7C 08 02 A6 */	mflr r0
/* 800BDF88 000BB068  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BDF8C 000BB06C  80 06 00 14 */	lwz r0, 0x14(r6)
/* 800BDF90 000BB070  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800BDF94 000BB074  7C 7F 1B 78 */	mr r31, r3
/* 800BDF98 000BB078  28 00 00 01 */	cmplwi r0, 0x1
/* 800BDF9C 000BB07C  40 82 00 70 */	bne .L_800BE00C
/* 800BDFA0 000BB080  80 66 00 10 */	lwz r3, 0x10(r6)
/* 800BDFA4 000BB084  88 03 00 00 */	lbz r0, 0x0(r3)
/* 800BDFA8 000BB088  28 00 00 3A */	cmplwi r0, 0x3a
/* 800BDFAC 000BB08C  40 82 00 60 */	bne .L_800BE00C
/* 800BDFB0 000BB090  80 06 00 1C */	lwz r0, 0x1c(r6)
/* 800BDFB4 000BB094  28 00 00 01 */	cmplwi r0, 0x1
/* 800BDFB8 000BB098  41 81 00 08 */	bgt .L_800BDFC0
/* 800BDFBC 000BB09C  48 00 00 50 */	b .L_800BE00C
.L_800BDFC0:
/* 800BDFC0 000BB0A0  38 66 00 18 */	addi r3, r6, 0x18
/* 800BDFC4 000BB0A4  48 00 00 89 */	bl var_text__FRC6substr
/* 800BDFC8 000BB0A8  90 7F 00 10 */	stw r3, 0x10(r31)
/* 800BDFCC 000BB0AC  38 00 00 00 */	li r0, 0x0
/* 800BDFD0 000BB0B0  B0 1F 00 0C */	sth r0, 0xc(r31)
/* 800BDFD4 000BB0B4  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 800BDFD8 000BB0B8  28 00 00 00 */	cmplwi r0, 0x0
/* 800BDFDC 000BB0BC  41 82 00 30 */	beq .L_800BE00C
/* 800BDFE0 000BB0C0  3C 80 00 01 */	lis r4, 0x1
/* 800BDFE4 000BB0C4  38 60 00 01 */	li r3, 0x1
/* 800BDFE8 000BB0C8  38 04 FC 00 */	addi r0, r4, -0x400
/* 800BDFEC 000BB0CC  B0 1F 00 0C */	sth r0, 0xc(r31)
/* 800BDFF0 000BB0D0  88 1F 00 09 */	lbz r0, 0x9(r31)
/* 800BDFF4 000BB0D4  50 60 36 72 */	rlwimi r0, r3, 6, 25, 25
/* 800BDFF8 000BB0D8  98 1F 00 09 */	stb r0, 0x9(r31)
/* 800BDFFC 000BB0DC  54 03 D7 FE */	extrwi r3, r0, 1, 25
/* 800BE000 000BB0E0  88 1F 00 09 */	lbz r0, 0x9(r31)
/* 800BE004 000BB0E4  50 60 3E 30 */	rlwimi r0, r3, 7, 24, 24
/* 800BE008 000BB0E8  98 1F 00 09 */	stb r0, 0x9(r31)
.L_800BE00C:
/* 800BE00C 000BB0EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BE010 000BB0F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800BE014 000BB0F4  7C 08 03 A6 */	mtlr r0
/* 800BE018 000BB0F8  38 21 00 10 */	addi r1, r1, 0x10
/* 800BE01C 000BB0FC  4E 80 00 20 */	blr
.endfn "parse_tag_var__18@unnamed@zVar_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"

# var_init()
.fn var_init__Fv, global
/* 800BE020 000BB100  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BE024 000BB104  7C 08 02 A6 */	mflr r0
/* 800BE028 000BB108  3C 60 80 29 */	lis r3, var_tag$1042@ha
/* 800BE02C 000BB10C  38 80 00 01 */	li r4, 0x1
/* 800BE030 000BB110  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BE034 000BB114  38 63 19 1C */	addi r3, r3, var_tag$1042@l
/* 800BE038 000BB118  4B F6 7B 5D */	bl register_tags__8xtextboxFPCQ28xtextbox8tag_typeUl
/* 800BE03C 000BB11C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BE040 000BB120  7C 08 03 A6 */	mtlr r0
/* 800BE044 000BB124  38 21 00 10 */	addi r1, r1, 0x10
/* 800BE048 000BB128  4E 80 00 20 */	blr
.endfn var_init__Fv

# var_text(const substr&)
.fn var_text__FRC6substr, global
/* 800BE04C 000BB12C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BE050 000BB130  7C 08 02 A6 */	mflr r0
/* 800BE054 000BB134  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BE058 000BB138  4B FF FE A1 */	bl "find_var__18@unnamed@zVar_cpp@FRC6substr"
/* 800BE05C 000BB13C  28 03 00 00 */	cmplwi r3, 0x0
/* 800BE060 000BB140  40 82 00 0C */	bne .L_800BE06C
/* 800BE064 000BB144  38 60 00 00 */	li r3, 0x0
/* 800BE068 000BB148  48 00 00 10 */	b .L_800BE078
.L_800BE06C:
/* 800BE06C 000BB14C  81 83 00 08 */	lwz r12, 0x8(r3)
/* 800BE070 000BB150  7D 89 03 A6 */	mtctr r12
/* 800BE074 000BB154  4E 80 04 21 */	bctrl
.L_800BE078:
/* 800BE078 000BB158  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BE07C 000BB15C  7C 08 03 A6 */	mtlr r0
/* 800BE080 000BB160  38 21 00 10 */	addi r1, r1, 0x10
/* 800BE084 000BB164  4E 80 00 20 */	blr
.endfn var_text__FRC6substr

# zVarInit(zVarEntry*)
.fn zVarInit__FP9zVarEntry, global
/* 800BE088 000BB168  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BE08C 000BB16C  7C 08 02 A6 */	mflr r0
/* 800BE090 000BB170  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BE094 000BB174  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800BE098 000BB178  7C 7F 1B 78 */	mr r31, r3
/* 800BE09C 000BB17C  93 C1 00 08 */	stw r30, 0x8(r1)
/* 800BE0A0 000BB180  3B C0 00 00 */	li r30, 0x0
.L_800BE0A4:
/* 800BE0A4 000BB184  80 7F 00 08 */	lwz r3, 0x8(r31)
/* 800BE0A8 000BB188  4B F8 E1 6D */	bl xStrHash__FPCc
/* 800BE0AC 000BB18C  3B DE 00 01 */	addi r30, r30, 0x1
/* 800BE0B0 000BB190  90 7F 00 04 */	stw r3, 0x4(r31)
/* 800BE0B4 000BB194  2C 1E 00 12 */	cmpwi r30, 0x12
/* 800BE0B8 000BB198  3B FF 00 10 */	addi r31, r31, 0x10
/* 800BE0BC 000BB19C  41 80 FF E8 */	blt .L_800BE0A4
/* 800BE0C0 000BB1A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BE0C4 000BB1A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800BE0C8 000BB1A8  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 800BE0CC 000BB1AC  7C 08 03 A6 */	mtlr r0
/* 800BE0D0 000BB1B0  38 21 00 10 */	addi r1, r1, 0x10
/* 800BE0D4 000BB1B4  4E 80 00 20 */	blr
.endfn zVarInit__FP9zVarEntry

# zVarNewGame()
.fn zVarNewGame__Fv, global
/* 800BE0D8 000BB1B8  4E 80 00 20 */	blr
.endfn zVarNewGame__Fv

# zVarEntryCB_SndMode(void*)
.fn zVarEntryCB_SndMode__FPv, global
/* 800BE0DC 000BB1BC  3C 60 80 3C */	lis r3, gSnd@ha
/* 800BE0E0 000BB1C0  38 63 D5 B4 */	addi r3, r3, gSnd@l
/* 800BE0E4 000BB1C4  80 63 00 00 */	lwz r3, 0x0(r3)
/* 800BE0E8 000BB1C8  4E 80 00 20 */	blr
.endfn zVarEntryCB_SndMode__FPv

# zVarEntryCB_SndMusicVol(void*)
.fn zVarEntryCB_SndMusicVol__FPv, global
/* 800BE0EC 000BB1CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BE0F0 000BB1D0  7C 08 02 A6 */	mflr r0
/* 800BE0F4 000BB1D4  3C 60 80 3C */	lis r3, gSnd@ha
/* 800BE0F8 000BB1D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BE0FC 000BB1DC  38 63 D5 B4 */	addi r3, r3, gSnd@l
/* 800BE100 000BB1E0  C8 22 96 28 */	lfd f1, "@1136"@sda21(r2)
/* 800BE104 000BB1E4  C0 43 00 10 */	lfs f2, 0x10(r3)
/* 800BE108 000BB1E8  C8 02 96 30 */	lfd f0, "@1137"@sda21(r2)
/* 800BE10C 000BB1EC  FC 42 00 72 */	fmul f2, f2, f1
/* 800BE110 000BB1F0  FC 20 10 2A */	fadd f1, f0, f2
/* 800BE114 000BB1F4  48 12 F2 C9 */	bl __cvt_fp2unsigned
/* 800BE118 000BB1F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BE11C 000BB1FC  7C 08 03 A6 */	mtlr r0
/* 800BE120 000BB200  38 21 00 10 */	addi r1, r1, 0x10
/* 800BE124 000BB204  4E 80 00 20 */	blr
.endfn zVarEntryCB_SndMusicVol__FPv

# zVarEntryCB_SndFXVol(void*)
.fn zVarEntryCB_SndFXVol__FPv, global
/* 800BE128 000BB208  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BE12C 000BB20C  7C 08 02 A6 */	mflr r0
/* 800BE130 000BB210  3C 60 80 3C */	lis r3, gSnd@ha
/* 800BE134 000BB214  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BE138 000BB218  38 63 D5 B4 */	addi r3, r3, gSnd@l
/* 800BE13C 000BB21C  C8 22 96 28 */	lfd f1, "@1136"@sda21(r2)
/* 800BE140 000BB220  C0 43 00 08 */	lfs f2, 0x8(r3)
/* 800BE144 000BB224  C8 02 96 30 */	lfd f0, "@1137"@sda21(r2)
/* 800BE148 000BB228  FC 42 00 72 */	fmul f2, f2, f1
/* 800BE14C 000BB22C  FC 20 10 2A */	fadd f1, f0, f2
/* 800BE150 000BB230  48 12 F2 8D */	bl __cvt_fp2unsigned
/* 800BE154 000BB234  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BE158 000BB238  7C 08 03 A6 */	mtlr r0
/* 800BE15C 000BB23C  38 21 00 10 */	addi r1, r1, 0x10
/* 800BE160 000BB240  4E 80 00 20 */	blr
.endfn zVarEntryCB_SndFXVol__FPv

# zVarEntryCB_MCAvailable(void*)
.fn zVarEntryCB_MCAvailable__FPv, global
/* 800BE164 000BB244  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BE168 000BB248  7C 08 02 A6 */	mflr r0
/* 800BE16C 000BB24C  38 60 00 00 */	li r3, 0x0
/* 800BE170 000BB250  38 80 00 00 */	li r4, 0x0
/* 800BE174 000BB254  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BE178 000BB258  4B F7 F1 09 */	bl xSGGameIsEmpty__FP17st_XSAVEGAME_DATAi
/* 800BE17C 000BB25C  2C 03 00 01 */	cmpwi r3, 0x1
/* 800BE180 000BB260  40 82 00 3C */	bne .L_800BE1BC
/* 800BE184 000BB264  38 60 00 00 */	li r3, 0x0
/* 800BE188 000BB268  38 80 00 01 */	li r4, 0x1
/* 800BE18C 000BB26C  4B F7 F0 F5 */	bl xSGGameIsEmpty__FP17st_XSAVEGAME_DATAi
/* 800BE190 000BB270  2C 03 00 01 */	cmpwi r3, 0x1
/* 800BE194 000BB274  40 82 00 0C */	bne .L_800BE1A0
/* 800BE198 000BB278  38 60 00 00 */	li r3, 0x0
/* 800BE19C 000BB27C  48 00 00 70 */	b .L_800BE20C
.L_800BE1A0:
/* 800BE1A0 000BB280  38 60 00 00 */	li r3, 0x0
/* 800BE1A4 000BB284  38 80 00 01 */	li r4, 0x1
/* 800BE1A8 000BB288  4B F7 F0 D9 */	bl xSGGameIsEmpty__FP17st_XSAVEGAME_DATAi
/* 800BE1AC 000BB28C  2C 03 00 00 */	cmpwi r3, 0x0
/* 800BE1B0 000BB290  40 82 00 58 */	bne .L_800BE208
/* 800BE1B4 000BB294  38 60 00 02 */	li r3, 0x2
/* 800BE1B8 000BB298  48 00 00 54 */	b .L_800BE20C
.L_800BE1BC:
/* 800BE1BC 000BB29C  38 60 00 00 */	li r3, 0x0
/* 800BE1C0 000BB2A0  38 80 00 00 */	li r4, 0x0
/* 800BE1C4 000BB2A4  4B F7 F0 BD */	bl xSGGameIsEmpty__FP17st_XSAVEGAME_DATAi
/* 800BE1C8 000BB2A8  2C 03 00 00 */	cmpwi r3, 0x0
/* 800BE1CC 000BB2AC  40 82 00 3C */	bne .L_800BE208
/* 800BE1D0 000BB2B0  38 60 00 00 */	li r3, 0x0
/* 800BE1D4 000BB2B4  38 80 00 01 */	li r4, 0x1
/* 800BE1D8 000BB2B8  4B F7 F0 A9 */	bl xSGGameIsEmpty__FP17st_XSAVEGAME_DATAi
/* 800BE1DC 000BB2BC  2C 03 00 01 */	cmpwi r3, 0x1
/* 800BE1E0 000BB2C0  40 82 00 0C */	bne .L_800BE1EC
/* 800BE1E4 000BB2C4  38 60 00 01 */	li r3, 0x1
/* 800BE1E8 000BB2C8  48 00 00 24 */	b .L_800BE20C
.L_800BE1EC:
/* 800BE1EC 000BB2CC  38 60 00 00 */	li r3, 0x0
/* 800BE1F0 000BB2D0  38 80 00 01 */	li r4, 0x1
/* 800BE1F4 000BB2D4  4B F7 F0 8D */	bl xSGGameIsEmpty__FP17st_XSAVEGAME_DATAi
/* 800BE1F8 000BB2D8  2C 03 00 00 */	cmpwi r3, 0x0
/* 800BE1FC 000BB2DC  40 82 00 0C */	bne .L_800BE208
/* 800BE200 000BB2E0  38 60 00 03 */	li r3, 0x3
/* 800BE204 000BB2E4  48 00 00 08 */	b .L_800BE20C
.L_800BE208:
/* 800BE208 000BB2E8  38 60 00 00 */	li r3, 0x0
.L_800BE20C:
/* 800BE20C 000BB2EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BE210 000BB2F0  7C 08 03 A6 */	mtlr r0
/* 800BE214 000BB2F4  38 21 00 10 */	addi r1, r1, 0x10
/* 800BE218 000BB2F8  4E 80 00 20 */	blr
.endfn zVarEntryCB_MCAvailable__FPv

# zVarEntryCB_VibrationOn(void*)
.fn zVarEntryCB_VibrationOn__FPv, global
/* 800BE21C 000BB2FC  3C 60 80 3C */	lis r3, globals@ha
/* 800BE220 000BB300  38 63 05 58 */	addi r3, r3, globals@l
/* 800BE224 000BB304  80 03 06 C0 */	lwz r0, 0x6c0(r3)
/* 800BE228 000BB308  54 03 07 FE */	clrlwi r3, r0, 31
/* 800BE22C 000BB30C  4E 80 00 20 */	blr
.endfn zVarEntryCB_VibrationOn__FPv

# zVarEntryCB_CurrentSceneLetter(void*)
.fn zVarEntryCB_CurrentSceneLetter__FPv, global
/* 800BE230 000BB310  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800BE234 000BB314  7C 08 02 A6 */	mflr r0
/* 800BE238 000BB318  3C 60 80 3C */	lis r3, globals@ha
/* 800BE23C 000BB31C  38 80 00 00 */	li r4, 0x0
/* 800BE240 000BB320  90 01 00 24 */	stw r0, 0x24(r1)
/* 800BE244 000BB324  38 63 05 58 */	addi r3, r3, globals@l
/* 800BE248 000BB328  80 63 1F C0 */	lwz r3, 0x1fc0(r3)
/* 800BE24C 000BB32C  80 63 00 00 */	lwz r3, 0x0(r3)
/* 800BE250 000BB330  4B F8 FA 45 */	bl xUtil_idtag2string__FUii
/* 800BE254 000BB334  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BE258 000BB338  7C 65 1B 78 */	mr r5, r3
/* 800BE25C 000BB33C  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BE260 000BB340  38 61 00 08 */	addi r3, r1, 0x8
/* 800BE264 000BB344  38 84 00 10 */	addi r4, r4, 0x10
/* 800BE268 000BB348  4C C6 31 82 */	crclr 4*cr1+eq
/* 800BE26C 000BB34C  48 12 5C C9 */	bl sprintf
/* 800BE270 000BB350  88 61 00 08 */	lbz r3, 0x8(r1)
/* 800BE274 000BB354  38 00 00 00 */	li r0, 0x0
/* 800BE278 000BB358  28 03 00 61 */	cmplwi r3, 0x61
/* 800BE27C 000BB35C  41 80 00 10 */	blt .L_800BE28C
/* 800BE280 000BB360  28 03 00 7A */	cmplwi r3, 0x7a
/* 800BE284 000BB364  41 81 00 08 */	bgt .L_800BE28C
/* 800BE288 000BB368  38 00 00 01 */	li r0, 0x1
.L_800BE28C:
/* 800BE28C 000BB36C  54 00 06 3F */	clrlwi. r0, r0, 24
/* 800BE290 000BB370  41 82 00 08 */	beq .L_800BE298
/* 800BE294 000BB374  38 63 FF E0 */	addi r3, r3, -0x20
.L_800BE298:
/* 800BE298 000BB378  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800BE29C 000BB37C  38 63 FF C0 */	addi r3, r3, -0x40
/* 800BE2A0 000BB380  7C 08 03 A6 */	mtlr r0
/* 800BE2A4 000BB384  38 21 00 20 */	addi r1, r1, 0x20
/* 800BE2A8 000BB388  4E 80 00 20 */	blr
.endfn zVarEntryCB_CurrentSceneLetter__FPv

# zVarEntryCB_CurrentRoom(void*)
.fn zVarEntryCB_CurrentRoom__FPv, global
/* 800BE2AC 000BB38C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800BE2B0 000BB390  7C 08 02 A6 */	mflr r0
/* 800BE2B4 000BB394  3C 60 80 3C */	lis r3, globals@ha
/* 800BE2B8 000BB398  38 80 00 00 */	li r4, 0x0
/* 800BE2BC 000BB39C  90 01 00 24 */	stw r0, 0x24(r1)
/* 800BE2C0 000BB3A0  38 63 05 58 */	addi r3, r3, globals@l
/* 800BE2C4 000BB3A4  80 63 1F C0 */	lwz r3, 0x1fc0(r3)
/* 800BE2C8 000BB3A8  80 63 00 00 */	lwz r3, 0x0(r3)
/* 800BE2CC 000BB3AC  4B F8 F9 C9 */	bl xUtil_idtag2string__FUii
/* 800BE2D0 000BB3B0  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800BE2D4 000BB3B4  7C 65 1B 78 */	mr r5, r3
/* 800BE2D8 000BB3B8  38 84 FC B0 */	addi r4, r4, "@stringBase0"@l
/* 800BE2DC 000BB3BC  38 61 00 08 */	addi r3, r1, 0x8
/* 800BE2E0 000BB3C0  38 84 00 10 */	addi r4, r4, 0x10
/* 800BE2E4 000BB3C4  4C C6 31 82 */	crclr 4*cr1+eq
/* 800BE2E8 000BB3C8  48 12 5C 4D */	bl sprintf
/* 800BE2EC 000BB3CC  88 61 00 0A */	lbz r3, 0xa(r1)
/* 800BE2F0 000BB3D0  38 00 00 00 */	li r0, 0x0
/* 800BE2F4 000BB3D4  88 A1 00 08 */	lbz r5, 0x8(r1)
/* 800BE2F8 000BB3D8  38 63 FF D0 */	addi r3, r3, -0x30
/* 800BE2FC 000BB3DC  88 81 00 0B */	lbz r4, 0xb(r1)
/* 800BE300 000BB3E0  1C 63 00 0A */	mulli r3, r3, 0xa
/* 800BE304 000BB3E4  28 05 00 61 */	cmplwi r5, 0x61
/* 800BE308 000BB3E8  7C 64 1A 14 */	add r3, r4, r3
/* 800BE30C 000BB3EC  38 63 FF D0 */	addi r3, r3, -0x30
/* 800BE310 000BB3F0  41 80 00 10 */	blt .L_800BE320
/* 800BE314 000BB3F4  28 05 00 7A */	cmplwi r5, 0x7a
/* 800BE318 000BB3F8  41 81 00 08 */	bgt .L_800BE320
/* 800BE31C 000BB3FC  38 00 00 01 */	li r0, 0x1
.L_800BE320:
/* 800BE320 000BB400  54 00 06 3F */	clrlwi. r0, r0, 24
/* 800BE324 000BB404  41 82 00 08 */	beq .L_800BE32C
/* 800BE328 000BB408  38 A5 FF E0 */	addi r5, r5, -0x20
.L_800BE32C:
/* 800BE32C 000BB40C  38 05 FF C0 */	addi r0, r5, -0x40
/* 800BE330 000BB410  1C 00 00 64 */	mulli r0, r0, 0x64
/* 800BE334 000BB414  7C 63 02 14 */	add r3, r3, r0
/* 800BE338 000BB418  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800BE33C 000BB41C  7C 08 03 A6 */	mtlr r0
/* 800BE340 000BB420  38 21 00 20 */	addi r1, r1, 0x20
/* 800BE344 000BB424  4E 80 00 20 */	blr
.endfn zVarEntryCB_CurrentRoom__FPv

# zVarEntryCB_CurrentLevelPickup(void*)
.fn zVarEntryCB_CurrentLevelPickup__FPv, global
/* 800BE348 000BB428  3C 60 80 3C */	lis r3, globals@ha
/* 800BE34C 000BB42C  38 63 05 58 */	addi r3, r3, globals@l
/* 800BE350 000BB430  80 63 1B C0 */	lwz r3, 0x1bc0(r3)
/* 800BE354 000BB434  4E 80 00 20 */	blr
.endfn zVarEntryCB_CurrentLevelPickup__FPv

# zVarEntryCB_CurrentLevelPSocks(void*)
.fn zVarEntryCB_CurrentLevelPSocks__FPv, global
/* 800BE358 000BB438  3C 60 80 3C */	lis r3, globals@ha
/* 800BE35C 000BB43C  38 63 05 58 */	addi r3, r3, globals@l
/* 800BE360 000BB440  80 63 1B 80 */	lwz r3, 0x1b80(r3)
/* 800BE364 000BB444  4E 80 00 20 */	blr
.endfn zVarEntryCB_CurrentLevelPSocks__FPv

# zVarEntryCB_TotalPSocks(void*)
.fn zVarEntryCB_TotalPSocks__FPv, global
/* 800BE368 000BB448  3C 60 80 3C */	lis r3, globals@ha
/* 800BE36C 000BB44C  38 63 05 58 */	addi r3, r3, globals@l
/* 800BE370 000BB450  80 63 1B C4 */	lwz r3, 0x1bc4(r3)
/* 800BE374 000BB454  4E 80 00 20 */	blr
.endfn zVarEntryCB_TotalPSocks__FPv

# zVarEntryCB_Shinies(void*)
.fn zVarEntryCB_Shinies__FPv, global
/* 800BE378 000BB458  3C 60 80 3C */	lis r3, globals@ha
/* 800BE37C 000BB45C  38 63 05 58 */	addi r3, r3, globals@l
/* 800BE380 000BB460  80 63 1B 00 */	lwz r3, 0x1b00(r3)
/* 800BE384 000BB464  4E 80 00 20 */	blr
.endfn zVarEntryCB_Shinies__FPv

# zVarEntryCB_Spatulas(void*)
.fn zVarEntryCB_Spatulas__FPv, global
/* 800BE388 000BB468  3C 60 80 3C */	lis r3, globals@ha
/* 800BE38C 000BB46C  38 63 05 58 */	addi r3, r3, globals@l
/* 800BE390 000BB470  80 63 1B 04 */	lwz r3, 0x1b04(r3)
/* 800BE394 000BB474  4E 80 00 20 */	blr
.endfn zVarEntryCB_Spatulas__FPv

# zVarEntryCB_Date(void*)
.fn zVarEntryCB_Date__FPv, global
/* 800BE398 000BB478  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BE39C 000BB47C  7C 08 02 A6 */	mflr r0
/* 800BE3A0 000BB480  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BE3A4 000BB484  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800BE3A8 000BB488  48 01 61 CD */	bl iGetMonth__Fv
/* 800BE3AC 000BB48C  1F E3 00 64 */	mulli r31, r3, 0x64
/* 800BE3B0 000BB490  48 01 61 99 */	bl iGetDay__Fv
/* 800BE3B4 000BB494  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BE3B8 000BB498  7C 63 FA 14 */	add r3, r3, r31
/* 800BE3BC 000BB49C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800BE3C0 000BB4A0  7C 08 03 A6 */	mtlr r0
/* 800BE3C4 000BB4A4  38 21 00 10 */	addi r1, r1, 0x10
/* 800BE3C8 000BB4A8  4E 80 00 20 */	blr
.endfn zVarEntryCB_Date__FPv

# zVarEntryCB_Hour(void*)
.fn zVarEntryCB_Hour__FPv, global
/* 800BE3CC 000BB4AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BE3D0 000BB4B0  7C 08 02 A6 */	mflr r0
/* 800BE3D4 000BB4B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BE3D8 000BB4B8  48 01 61 45 */	bl iGetHour__Fv
/* 800BE3DC 000BB4BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BE3E0 000BB4C0  7C 08 03 A6 */	mtlr r0
/* 800BE3E4 000BB4C4  38 21 00 10 */	addi r1, r1, 0x10
/* 800BE3E8 000BB4C8  4E 80 00 20 */	blr
.endfn zVarEntryCB_Hour__FPv

# zVarEntryCB_Minute(void*)
.fn zVarEntryCB_Minute__FPv, global
/* 800BE3EC 000BB4CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BE3F0 000BB4D0  7C 08 02 A6 */	mflr r0
/* 800BE3F4 000BB4D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BE3F8 000BB4D8  48 01 60 F9 */	bl iGetMinute__Fv
/* 800BE3FC 000BB4DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BE400 000BB4E0  7C 08 03 A6 */	mtlr r0
/* 800BE404 000BB4E4  38 21 00 10 */	addi r1, r1, 0x10
/* 800BE408 000BB4E8  4E 80 00 20 */	blr
.endfn zVarEntryCB_Minute__FPv

# zVarEntryCB_CounterValue(void*)
.fn zVarEntryCB_CounterValue__FPv, global
/* 800BE40C 000BB4EC  A8 63 00 14 */	lha r3, 0x14(r3)
/* 800BE410 000BB4F0  4E 80 00 20 */	blr
.endfn zVarEntryCB_CounterValue__FPv

# zVarEntryCB_IsEnabled(void*)
.fn zVarEntryCB_IsEnabled__FPv, global
/* 800BE414 000BB4F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BE418 000BB4F8  7C 08 02 A6 */	mflr r0
/* 800BE41C 000BB4FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BE420 000BB500  4B F4 B1 19 */	bl xBaseIsEnabled__FPC5xBase
/* 800BE424 000BB504  54 63 06 3E */	clrlwi r3, r3, 24
/* 800BE428 000BB508  7C 03 00 D0 */	neg r0, r3
/* 800BE42C 000BB50C  7C 00 1B 78 */	or r0, r0, r3
/* 800BE430 000BB510  54 03 0F FE */	srwi r3, r0, 31
/* 800BE434 000BB514  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BE438 000BB518  7C 08 03 A6 */	mtlr r0
/* 800BE43C 000BB51C  38 21 00 10 */	addi r1, r1, 0x10
/* 800BE440 000BB520  4E 80 00 20 */	blr
.endfn zVarEntryCB_IsEnabled__FPv

# zVarEntryCB_IsVisible(void*)
.fn zVarEntryCB_IsVisible__FPv, global
/* 800BE444 000BB524  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BE448 000BB528  7C 08 02 A6 */	mflr r0
/* 800BE44C 000BB52C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BE450 000BB530  4B F5 01 E9 */	bl xEntIsVisible__FPC4xEnt
/* 800BE454 000BB534  7C 03 00 D0 */	neg r0, r3
/* 800BE458 000BB538  7C 00 1B 78 */	or r0, r0, r3
/* 800BE45C 000BB53C  54 03 0F FE */	srwi r3, r0, 31
/* 800BE460 000BB540  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BE464 000BB544  7C 08 03 A6 */	mtlr r0
/* 800BE468 000BB548  38 21 00 10 */	addi r1, r1, 0x10
/* 800BE46C 000BB54C  4E 80 00 20 */	blr
.endfn zVarEntryCB_IsVisible__FPv

# 0x8025F9E8 - 0x80260108
.rodata
.balign 8

.obj "@449", local
.sym ...rodata.0, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@449"

.obj "@450", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@450"

.obj "@454", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@454"

.obj "@485", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@485"

.obj "@617", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@617"

.obj "@618", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@618"

.obj "@619", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@619"

.obj "@620", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.L_8025FA9C:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@620"

.obj "@621", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@621"

.obj "@622", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.L_8025FAF0:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.L_8025FB04:
	.4byte 0x00000000
.endobj "@622"

.obj "@623", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@623"

.obj screen_bounds, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x3F800000
.L_8025FB3C:
	.4byte 0x3F800000
.endobj screen_bounds

.obj default_adjust, local
	.4byte 0x00000000
.L_8025FB44:
	.4byte 0x00000000
	.4byte 0x3F800000
	.4byte 0x3F800000
.endobj default_adjust

.obj "@838", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@838"

.obj "@839", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@839"

.obj "@840", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@840"

.obj "@841", local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj "@841"

.obj "@stringBase0", local
	.4byte 0x25640025
	.4byte 0x63004120
	.4byte 0x6F722042
	.4byte 0x00000A00
	.4byte 0x25730025
	.4byte 0x732F2563
	.4byte 0x25630025
	.4byte 0x63256300
	.4byte 0x504D0041
	.4byte 0x4D002564
	.4byte 0x3A256325
	.4byte 0x63202573
	.4byte 0x00257320
	.4byte 0x25730045
	.4byte 0x6D707479
	.4byte 0x00416363
	.4byte 0x65737369
	.4byte 0x6E67004C
	.4byte 0x6F616469
	.4byte 0x6E672064
	.4byte 0x61746100
	.4byte 0x53617669
	.4byte 0x6E672064
	.4byte 0x61746100
	.4byte 0x466F726D
	.4byte 0x61747469
	.4byte 0x6E67206D
	.4byte 0x656D6F72
	.4byte 0x79206361
	.4byte 0x7264007B
	.4byte 0x693A7465
	.4byte 0x78745F70
	.4byte 0x6C617965
	.4byte 0x725F6865
	.4byte 0x7D007B69
	.4byte 0x3A746578
	.4byte 0x745F706C
	.4byte 0x61796572
	.4byte 0x5F736865
	.4byte 0x7D007B69
	.4byte 0x3A746578
	.4byte 0x745F7370
	.4byte 0x6F6E6765
	.4byte 0x626F625F
	.4byte 0x6E616D65
	.4byte 0x7D007B69
	.4byte 0x3A746578
	.4byte 0x745F7061
	.4byte 0x74726963
	.4byte 0x6B5F6E61
	.4byte 0x6D657D00
	.4byte 0x7B693A74
	.4byte 0x6578745F
	.4byte 0x73616E64
	.4byte 0x795F6E61
	.4byte 0x6D657D00
	.4byte 0x25642C25
	.4byte 0x642C2564
	.4byte 0x007B693A
	.4byte 0x74657874
	.4byte 0x5F6E6F73
	.4byte 0x68696E69
	.4byte 0x65737D00
	.4byte 0x31207B69
	.4byte 0x3A746578
	.4byte 0x745F7368
	.4byte 0x696E797D
	.4byte 0x00256420
	.4byte 0x7B693A74
	.4byte 0x6578745F
	.4byte 0x7368696E
	.4byte 0x6965737D
	.4byte 0x007B693A
	.4byte 0x4C44204D
	.4byte 0x43312054
	.4byte 0x58547D00
	.4byte 0x7B693A4C
	.4byte 0x44204D43
	.4byte 0x32205458
	.4byte 0x547D0041
	.4byte 0x63746976
	.4byte 0x65506164
	.4byte 0x00426164
	.4byte 0x43617264
	.4byte 0x00426164
	.4byte 0x43617264
	.4byte 0x41766169
	.4byte 0x6C61626C
	.4byte 0x65004261
	.4byte 0x64436172
	.4byte 0x644E6565
	.4byte 0x64656400
	.4byte 0x436F7272
	.4byte 0x75707446
	.4byte 0x696C654E
	.4byte 0x616D6500
	.4byte 0x43757272
	.4byte 0x656E7441
	.4byte 0x72656100
	.4byte 0x43757272
	.4byte 0x656E7444
	.4byte 0x61746500
	.4byte 0x43757272
	.4byte 0x656E744C
	.4byte 0x6576656C
	.4byte 0x436F6C6C
	.4byte 0x65637461
	.4byte 0x626C6500
	.4byte 0x43757272
	.4byte 0x656E744C
	.4byte 0x6576656C
	.4byte 0x50617473
	.4byte 0x536F636B
	.4byte 0x73004375
	.4byte 0x7272656E
	.4byte 0x74536365
	.4byte 0x6E650043
	.4byte 0x75727265
	.4byte 0x6E745469
	.4byte 0x6D650047
	.4byte 0x616D6553
	.4byte 0x6C6F7430
	.4byte 0x0047616D
	.4byte 0x65536C6F
	.4byte 0x74310047
	.4byte 0x616D6553
	.4byte 0x6C6F7432
	.4byte 0x0047616D
	.4byte 0x65536C6F
	.4byte 0x74330047
	.4byte 0x616D6553
	.4byte 0x6C6F7434
	.4byte 0x0047616D
	.4byte 0x65536C6F
	.4byte 0x74350047
	.4byte 0x616D6553
	.4byte 0x6C6F7436
	.4byte 0x0047616D
	.4byte 0x65536C6F
	.4byte 0x7437004D
	.4byte 0x43416363
	.4byte 0x65737354
	.4byte 0x79706500
	.4byte 0x4D434175
	.4byte 0x746F5361
	.4byte 0x76654361
	.4byte 0x7264004D
	.4byte 0x434E616D
	.4byte 0x65004D43
	.4byte 0x5053324D
	.4byte 0x61785370
	.4byte 0x61636500
	.4byte 0x4D435053
	.4byte 0x324D696E
	.4byte 0x53706163
	.4byte 0x65004D43
	.4byte 0x53656C65
	.4byte 0x63746564
	.4byte 0x43617264
	.4byte 0x004D4353
	.4byte 0x656C6563
	.4byte 0x74656447
	.4byte 0x616D6500
	.4byte 0x506C6179
	.4byte 0x65724865
	.4byte 0x53686500
	.4byte 0x506C6179
	.4byte 0x65724E61
	.4byte 0x6D650050
	.4byte 0x6C617965
	.4byte 0x72506F73
	.4byte 0x6974696F
	.4byte 0x6E005365
	.4byte 0x6C656374
	.4byte 0x65644172
	.4byte 0x65610053
	.4byte 0x68696E79
	.4byte 0x436F756E
	.4byte 0x74005368
	.4byte 0x696E7943
	.4byte 0x6F756E74
.L_8025FF84:
	.4byte 0x54657874
	.4byte 0x00536F75
	.4byte 0x6E644658
	.4byte 0x566F6C75
	.4byte 0x6D650053
	.4byte 0x6F756E64
	.4byte 0x4D757369
	.4byte 0x63566F6C
	.4byte 0x756D6500
	.4byte 0x53706163
	.4byte 0x65417661
	.4byte 0x696C6162
	.4byte 0x6C650053
	.4byte 0x70616365
	.4byte 0x41766169
	.4byte 0x6C61626C
	.4byte 0x65537472
	.4byte 0x696E6700
	.4byte 0x53706163
	.4byte 0x654E6565
	.4byte 0x64656400
	.4byte 0x546F7461
	.4byte 0x6C506174
	.4byte 0x73536F63
	.4byte 0x6B730076
	.4byte 0x61720053
	.4byte 0x6F756E64
	.4byte 0x206D6F64
	.4byte 0x65004D75
	.4byte 0x73696320
	.4byte 0x566F6C75
	.4byte 0x6D650053
	.4byte 0x46582056
	.4byte 0x6F6C756D
	.4byte 0x65004D65
	.4byte 0x6D6F7279
	.4byte 0x20436172
	.4byte 0x64204176
	.4byte 0x61696C61
	.4byte 0x626C6500
	.4byte 0x56696272
	.4byte 0x6174696F
	.4byte 0x6E206973
	.4byte 0x206F6E00
	.4byte 0x4C657474
	.4byte 0x6572206F
	.4byte 0x66207363
	.4byte 0x656E6500
	.4byte 0x526F6F6D
	.4byte 0x00437572
	.4byte 0x72656E74
	.4byte 0x204C6576
	.4byte 0x656C2043
	.4byte 0x6F6C6C65
	.4byte 0x63746162
	.4byte 0x6C650050
	.4byte 0x61742773
	.4byte 0x20536F63
	.4byte 0x6B730054
	.4byte 0x6F74616C
	.4byte 0x20506174
	.4byte 0x27732053
	.4byte 0x6F636B73
	.4byte 0x00536869
	.4byte 0x6E79204F
	.4byte 0x626A6563
	.4byte 0x74730047
	.4byte 0x6F6C6465
	.4byte 0x6E205370
	.4byte 0x6174756C
	.4byte 0x61730043
	.4byte 0x75727265
.L_802600A4:
	.4byte 0x6E742044
	.4byte 0x61746500
	.4byte 0x43757272
	.4byte 0x656E7420
	.4byte 0x486F7572
	.4byte 0x00437572
	.4byte 0x72656E74
	.4byte 0x204D696E
	.4byte 0x75746500
	.4byte 0x436F756E
	.4byte 0x74657220
	.4byte 0x56616C75
	.4byte 0x65004973
	.4byte 0x20456E61
	.4byte 0x626C6564
	.4byte 0x2028303D
	.4byte 0x4E6F2C20
	.4byte 0x313D5965
	.4byte 0x73290049
	.4byte 0x73205669
	.4byte 0x7369626C
	.4byte 0x65202830
	.4byte 0x3D4E6F2C
	.4byte 0x20313D59
	.4byte 0x65732900
.endobj "@stringBase0"

# 0x802916E0 - 0x80291A60
.data
.balign 8

.obj state_text$908, local
	.4byte "@stringBase0"+0x3D
	.4byte "@stringBase0"+0x47
	.4byte "@stringBase0"+0x54
	.4byte "@stringBase0"+0x60
.endobj state_text$908

.obj text$938, local
	.4byte "@stringBase0"+0x77
	.4byte "@stringBase0"+0x77
	.4byte "@stringBase0"+0x8A
.endobj text$938

.obj text$943, local
	.4byte "@stringBase0"+0x9E
	.4byte "@stringBase0"+0xB6
	.4byte "@stringBase0"+0xCC
.endobj text$943

.obj buffer$965, local
	.4byte 0x34303030
	.4byte 0x30303030
	.4byte 0x3030207B
	.4byte 0x693A7465
	.4byte 0x78745F73
	.4byte 0x68696E69
	.4byte 0x65737D00
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj buffer$965

# @unnamed@zVar_cpp@::vars
.obj "vars__18@unnamed@zVar_cpp@", local
	.4byte "@stringBase0"+0x13F
	.4byte 0x00000009
	.4byte "var_text_ActivePad__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x149
	.4byte 0x00000007
	.4byte "var_text_BadCard__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x151
	.4byte 0x00000010
	.4byte "var_text_BadCardAvailable__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x162
	.4byte 0x0000000D
	.4byte "var_text_BadCardNeeded__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x170
	.4byte 0x0000000F
	.4byte "var_text_CorruptFileName__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x180
	.4byte 0x0000000B
	.4byte "var_text_CurrentArea__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x18C
	.4byte 0x0000000B
	.4byte "var_text_CurrentDate__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x198
	.4byte 0x00000017
	.4byte "var_text_CurrentLevelCollectable__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x1B0
	.4byte 0x00000015
	.4byte "var_text_CurrentLevelPatsSocks__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x1C6
	.4byte 0x0000000C
	.4byte "var_text_CurrentScene__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x1D3
	.4byte 0x0000000B
	.4byte "var_text_CurrentTime__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x1DF
	.4byte 0x00000009
	.4byte "var_text_GameSlot0__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x1E9
	.4byte 0x00000009
	.4byte "var_text_GameSlot1__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x1F3
	.4byte 0x00000009
	.4byte "var_text_GameSlot2__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x1FD
	.4byte 0x00000009
	.4byte "var_text_GameSlot3__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x207
	.4byte 0x00000009
	.4byte "var_text_GameSlot4__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x211
	.4byte 0x00000009
	.4byte "var_text_GameSlot5__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x21B
	.4byte 0x00000009
	.4byte "var_text_GameSlot6__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x225
	.4byte 0x00000009
	.4byte "var_text_GameSlot7__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x22F
	.4byte 0x0000000C
	.4byte "var_text_MCAccessType__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x23C
	.4byte 0x0000000E
	.4byte "var_text_MCAutoSaveCard__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x24B
	.4byte 0x00000006
	.4byte "var_text_MCName__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x252
	.4byte 0x0000000D
	.4byte "var_text_MCPS2MaxSpace__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x260
	.4byte 0x0000000D
	.4byte "var_text_MCPS2MinSpace__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x26E
	.4byte 0x0000000E
	.4byte "var_text_MCSelectedCard__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x27D
	.4byte 0x0000000E
	.4byte "var_text_MCSelectedGame__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x28C
	.4byte 0x0000000B
	.4byte "var_text_PlayerHeShe__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x298
	.4byte 0x0000000A
	.4byte "var_text_PlayerName__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x2A3
	.4byte 0x0000000E
	.4byte "var_text_PlayerPosition__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x2B2
	.4byte 0x0000000C
	.4byte "var_text_SelectedArea__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x2BF
	.4byte 0x0000000A
	.4byte "var_text_ShinyCount__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x2CA
	.4byte 0x0000000E
	.4byte "var_text_ShinyCountText__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x2D9
	.4byte 0x0000000D
	.4byte "var_text_SoundFXVolume__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x2E7
	.4byte 0x00000010
	.4byte "var_text_SoundMusicVolume__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x2F8
	.4byte 0x0000000E
	.4byte "var_text_SpaceAvailable__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x307
	.4byte 0x00000014
	.4byte "var_text_SpaceAvailableString__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x31C
	.4byte 0x0000000B
	.4byte "var_text_SpaceNeeded__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x31C
	.4byte 0x0000000B
	.4byte "var_text_SpaceNeeded__18@unnamed@zVar_cpp@Fv"
	.4byte "@stringBase0"+0x328
	.4byte 0x0000000E
	.4byte "var_text_TotalPatsSocks__18@unnamed@zVar_cpp@Fv"
.endobj "vars__18@unnamed@zVar_cpp@"

.obj var_tag$1042, local
	.4byte "@stringBase0"+0x337
	.4byte 0x00000003
	.4byte "parse_tag_var__18@unnamed@zVar_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag"
	.4byte 0x00000000
	.4byte 0x00000000
.endobj var_tag$1042

.obj zVarEntryTable, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte "@stringBase0"+0x33B
	.4byte zVarEntryCB_SndMode__FPv
	.4byte 0x00000001
	.4byte 0x00000000
	.4byte "@stringBase0"+0x346
	.4byte zVarEntryCB_SndMusicVol__FPv
	.4byte 0x00000002
	.4byte 0x00000000
	.4byte "@stringBase0"+0x353
	.4byte zVarEntryCB_SndFXVol__FPv
	.4byte 0x00000003
	.4byte 0x00000000
	.4byte "@stringBase0"+0x35E
	.4byte zVarEntryCB_MCAvailable__FPv
	.4byte 0x00000004
	.4byte 0x00000000
	.4byte "@stringBase0"+0x374
	.4byte zVarEntryCB_VibrationOn__FPv
	.4byte 0x00000005
	.4byte 0x00000000
	.4byte "@stringBase0"+0x384
	.4byte zVarEntryCB_CurrentSceneLetter__FPv
	.4byte 0x00000006
	.4byte 0x00000000
	.4byte "@stringBase0"+0x394
	.4byte zVarEntryCB_CurrentRoom__FPv
	.4byte 0x00000007
	.4byte 0x00000000
	.4byte "@stringBase0"+0x399
	.4byte zVarEntryCB_CurrentLevelPickup__FPv
	.4byte 0x00000008
	.4byte 0x00000000
	.4byte "@stringBase0"+0x3B3
	.4byte zVarEntryCB_CurrentLevelPSocks__FPv
	.4byte 0x00000009
	.4byte 0x00000000
	.4byte "@stringBase0"+0x3BF
	.4byte zVarEntryCB_TotalPSocks__FPv
	.4byte 0x0000000A
	.4byte 0x00000000
	.4byte "@stringBase0"+0x3D1
	.4byte zVarEntryCB_Shinies__FPv
	.4byte 0x0000000B
	.4byte 0x00000000
	.4byte "@stringBase0"+0x3DF
	.4byte zVarEntryCB_Spatulas__FPv
	.4byte 0x0000000C
	.4byte 0x00000000
	.4byte "@stringBase0"+0x3EF
	.4byte zVarEntryCB_Date__FPv
	.4byte 0x0000000D
	.4byte 0x00000000
	.4byte "@stringBase0"+0x3FC
	.4byte zVarEntryCB_Hour__FPv
	.4byte 0x0000000E
	.4byte 0x00000000
	.4byte "@stringBase0"+0x409
	.4byte zVarEntryCB_Minute__FPv
	.4byte 0x0000000F
	.4byte 0x00000000
	.4byte "@stringBase0"+0x418
	.4byte zVarEntryCB_CounterValue__FPv
	.4byte 0x00000010
	.4byte 0x00000000
	.4byte "@stringBase0"+0x426
	.4byte zVarEntryCB_IsEnabled__FPv
	.4byte 0x00000011
	.4byte 0x00000000
	.4byte "@stringBase0"+0x43F
	.4byte zVarEntryCB_IsVisible__FPv
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj zVarEntryTable

# 0x802F8640 - 0x802F8A80
.bss
.balign 8

.obj buffer$775, local
	.skip 0xC
.endobj buffer$775

.obj buffer$780, local
	.skip 0xC
.endobj buffer$780

.obj buffer$788, local
	.skip 0xC
.endobj buffer$788

.obj buffer$793, local
	.skip 0xC
.endobj buffer$793

.obj buffer$798, local
	.skip 0x80
.endobj buffer$798

.obj buffer$813, local
	.skip 0x20
.endobj buffer$813

.obj buffer$818, local
	.skip 0xC
.endobj buffer$818

.obj buffer$823, local
	.skip 0xC
.endobj buffer$823

.obj buffer$828, local
	.skip 0x20
.endobj buffer$828

.obj buffer$833, local
	.skip 0x20
.endobj buffer$833

.obj buffer$868, local
	.skip 0x40
.endobj buffer$868

.obj buffer$873, local
	.skip 0x40
.endobj buffer$873

.obj buffer$878, local
	.skip 0x40
.endobj buffer$878

.obj buffer$883, local
	.skip 0x40
.endobj buffer$883

.obj buffer$888, local
	.skip 0x40
.endobj buffer$888

.obj buffer$893, local
	.skip 0x40
.endobj buffer$893

.obj buffer$898, local
	.skip 0x40
.endobj buffer$898

.obj buffer$903, local
	.skip 0x40
.endobj buffer$903

.obj buffer$913, local
	.skip 0xC
.endobj buffer$913

.obj buffer$918, local
	.skip 0xC
.endobj buffer$918

.obj buffer$923, local
	.skip 0xC
.endobj buffer$923

.obj buffer$928, local
	.skip 0xC
.endobj buffer$928

.obj buffer$933, local
	.skip 0xC
.endobj buffer$933

.obj buffer$948, local
	.skip 0x30
.endobj buffer$948

.obj buffer$960, local
	.skip 0xC
.endobj buffer$960

.obj buffer$977, local
	.skip 0xC
.endobj buffer$977

.obj buffer$982, local
	.skip 0xC
.endobj buffer$982

.obj buffer$987, local
	.skip 0xC
.endobj buffer$987

.obj buffer$992, local
	.skip 0x40
.endobj buffer$992

.obj buffer$997, local
	.skip 0xC
.endobj buffer$997

.obj buffer$1002, local
	.skip 0xC
.endobj buffer$1002

.obj buffer$1007, local
	.skip 0x20
.endobj buffer$1007
	.skip 0x4

# 0x803CBA60 - 0x803CBA70
.section .sbss, "wa", @nobits
.balign 8

.obj bad_card_available, global
	.skip 0x4
.endobj bad_card_available

.obj bad_card_needed, global
	.skip 0x4
.endobj bad_card_needed

# @unnamed@zVar_cpp@::selSceneID
.obj "selSceneID__18@unnamed@zVar_cpp@", local
	.skip 0x4
.endobj "selSceneID__18@unnamed@zVar_cpp@"
	.skip 0x4

# 0x803CDFA8 - 0x803CDFB8
.section .sdata2, "a"
.balign 8

.obj "@1136", local
	.4byte 0x40240000
	.4byte 0x00000000
.endobj "@1136"

.obj "@1137", local
	.4byte 0x3FE00000
	.4byte 0x00000000
.endobj "@1137"
