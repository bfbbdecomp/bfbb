.include "macros.inc"

.if 0

.section .text  # 0x800A6000 - 0x800A6BF8

.global zMenuLoop__Fv
zMenuLoop__Fv:
/* 800A6180 000A2F80  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 800A6184 000A2F84  7C 08 02 A6 */	mflr r0
/* 800A6188 000A2F88  90 01 00 64 */	stw r0, 0x64(r1)
/* 800A618C 000A2F8C  38 00 00 00 */	li r0, 0
/* 800A6190 000A2F90  BE 81 00 30 */	stmw r20, 0x30(r1)
/* 800A6194 000A2F94  90 01 00 10 */	stw r0, 0x10(r1)
/* 800A6198 000A2F98  80 0D 82 C0 */	lwz r0, sFirstBoot-_SDA_BASE_(r13)
/* 800A619C 000A2F9C  2C 00 00 00 */	cmpwi r0, 0
/* 800A61A0 000A2FA0  41 82 00 20 */	beq lbl_800A61C0
/* 800A61A4 000A2FA4  38 60 00 01 */	li r3, 1
/* 800A61A8 000A2FA8  4B FF 4A 71 */	bl zGameModeSwitch__F9eGameMode
/* 800A61AC 000A2FAC  38 60 00 00 */	li r3, 0
/* 800A61B0 000A2FB0  4B FF 49 7D */	bl zGameStateSwitch__Fi
/* 800A61B4 000A2FB4  38 60 00 00 */	li r3, 0
/* 800A61B8 000A2FB8  48 00 14 89 */	bl zMusicNotify__Fi
/* 800A61BC 000A2FBC  48 00 00 1C */	b lbl_800A61D8
lbl_800A61C0:
/* 800A61C0 000A2FC0  38 60 00 02 */	li r3, 2
/* 800A61C4 000A2FC4  4B FF 4A 55 */	bl zGameModeSwitch__F9eGameMode
/* 800A61C8 000A2FC8  38 60 00 00 */	li r3, 0
/* 800A61CC 000A2FCC  4B FF 49 61 */	bl zGameStateSwitch__Fi
/* 800A61D0 000A2FD0  38 60 00 00 */	li r3, 0
/* 800A61D4 000A2FD4  48 00 14 6D */	bl zMusicNotify__Fi
lbl_800A61D8:
/* 800A61D8 000A2FD8  48 02 E7 79 */	bl iTimeGet__Fv
/* 800A61DC 000A2FDC  48 14 78 11 */	bl __cvt_sll_flt
/* 800A61E0 000A2FE0  3C 60 80 00 */	lis r3, 0x800000F8@ha
/* 800A61E4 000A2FE4  3C 00 43 30 */	lis r0, 0x4330
/* 800A61E8 000A2FE8  80 63 00 F8 */	lwz r3, 0x800000F8@l(r3)
/* 800A61EC 000A2FEC  90 01 00 18 */	stw r0, 0x18(r1)
/* 800A61F0 000A2FF0  54 60 F0 BE */	srwi r0, r3, 2
/* 800A61F4 000A2FF4  C8 62 93 B8 */	lfd f3, zMenu_float_itof_value-_SDA2_BASE_(r2)
/* 800A61F8 000A2FF8  90 01 00 1C */	stw r0, 0x1c(r1)
/* 800A61FC 000A2FFC  C0 82 93 9C */	lfs f4, zMenu_float_one-_SDA2_BASE_(r2)
/* 800A6200 000A3000  C8 41 00 18 */	lfd f2, 0x18(r1)
/* 800A6204 000A3004  C0 02 93 A0 */	lfs f0, zMenu_float_one_over_sixty-_SDA2_BASE_(r2)
/* 800A6208 000A3008  EC 42 18 28 */	fsubs f2, f2, f3
/* 800A620C 000A300C  EC 44 10 24 */	fdivs f2, f4, f2
/* 800A6210 000A3010  EC 02 00 78 */	fmsubs f0, f2, f1, f0
/* 800A6214 000A3014  D0 0D 90 34 */	stfs f0, time_last-_SDA_BASE_(r13)
/* 800A6218 000A3018  4B FF 38 F5 */	bl zGameExtras_NewGameReset__Fv
/* 800A621C 000A301C  80 02 93 98 */	lwz r0, BlackColorInitializer-_SDA2_BASE_(r2)
/* 800A6220 000A3020  38 61 00 0C */	addi r3, r1, 0xc
/* 800A6224 000A3024  38 81 00 08 */	addi r4, r1, 8
/* 800A6228 000A3028  38 A0 00 00 */	li r5, 0
/* 800A622C 000A302C  90 01 00 0C */	stw r0, 0xc(r1)
/* 800A6230 000A3030  38 C0 00 01 */	li r6, 1
/* 800A6234 000A3034  80 02 BE F8 */	lwz r0, ClearColorInitializer-_SDA2_BASE_(r2)
/* 800A6238 000A3038  90 01 00 08 */	stw r0, 8(r1)
/* 800A623C 000A303C  C0 22 93 A4 */	lfs f1, zMenu_float_zero-_SDA2_BASE_(r2)
/* 800A6240 000A3040  4B F9 B8 D9 */	bl xScrFxFade__FP10iColor_tagP10iColor_tagfPFv_vi
/* 800A6244 000A3044  3A E0 00 0A */	li r23, 0xa
/* 800A6248 000A3048  48 02 E7 09 */	bl iTimeGet__Fv
/* 800A624C 000A304C  48 14 77 A1 */	bl __cvt_sll_flt
/* 800A6250 000A3050  3F 20 80 00 */	lis r25, 0x800000F8@ha
/* 800A6254 000A3054  3F 40 43 30 */	lis r26, 0x4330
/* 800A6258 000A3058  80 19 00 F8 */	lwz r0, 0x800000F8@l(r25)
/* 800A625C 000A305C  3C 60 80 3C */	lis r3, globals@ha
/* 800A6260 000A3060  3B 63 05 58 */	addi r27, r3, globals@l
/* 800A6264 000A3064  93 41 00 20 */	stw r26, 0x20(r1)
/* 800A6268 000A3068  54 00 F0 BE */	srwi r0, r0, 2
/* 800A626C 000A306C  3C 60 80 3C */	lis r3, gTrcPad@ha
/* 800A6270 000A3070  90 01 00 24 */	stw r0, 0x24(r1)
/* 800A6274 000A3074  7F 7D DB 78 */	mr r29, r27
/* 800A6278 000A3078  C8 62 93 B8 */	lfd f3, zMenu_float_itof_value-_SDA2_BASE_(r2)
/* 800A627C 000A307C  7F 7E DB 78 */	mr r30, r27
/* 800A6280 000A3080  C8 41 00 20 */	lfd f2, 0x20(r1)
/* 800A6284 000A3084  7F 7F DB 78 */	mr r31, r27
/* 800A6288 000A3088  C0 82 93 9C */	lfs f4, zMenu_float_one-_SDA2_BASE_(r2)
/* 800A628C 000A308C  3B 1B 06 E0 */	addi r24, r27, 0x6e0
/* 800A6290 000A3090  EC 42 18 28 */	fsubs f2, f2, f3
/* 800A6294 000A3094  C0 02 93 A0 */	lfs f0, zMenu_float_one_over_sixty-_SDA2_BASE_(r2)
/* 800A6298 000A3098  3B 83 EF 88 */	addi r28, r3, gTrcPad@l
/* 800A629C 000A309C  EC 44 10 24 */	fdivs f2, f4, f2
/* 800A62A0 000A30A0  EC 02 00 78 */	fmsubs f0, f2, f1, f0
/* 800A62A4 000A30A4  D0 0D 90 34 */	stfs f0, time_last-_SDA_BASE_(r13)
lbl_800A62A8:
/* 800A62A8 000A30A8  3A C0 00 00 */	li r22, 0
/* 800A62AC 000A30AC  4B FF 46 81 */	bl zGameModeGet__Fv
/* 800A62B0 000A30B0  2C 03 00 01 */	cmpwi r3, 1
/* 800A62B4 000A30B4  40 82 01 10 */	bne lbl_800A63C4
/* 800A62B8 000A30B8  4B FF 46 6D */	bl zGameStateGet__Fv
/* 800A62BC 000A30BC  2C 03 00 03 */	cmpwi r3, 3
/* 800A62C0 000A30C0  41 82 00 3C */	beq lbl_800A62FC
/* 800A62C4 000A30C4  40 80 01 00 */	bge lbl_800A63C4
/* 800A62C8 000A30C8  2C 03 00 00 */	cmpwi r3, 0
/* 800A62CC 000A30CC  41 82 00 08 */	beq lbl_800A62D4
/* 800A62D0 000A30D0  48 00 00 F4 */	b lbl_800A63C4
lbl_800A62D4:
/* 800A62D4 000A30D4  3A C0 00 01 */	li r22, 1
/* 800A62D8 000A30D8  38 60 00 03 */	li r3, 3
/* 800A62DC 000A30DC  4B FF 48 51 */	bl zGameStateSwitch__Fi
/* 800A62E0 000A30E0  C0 22 93 A4 */	lfs f1, zMenu_float_zero-_SDA2_BASE_(r2)
/* 800A62E4 000A30E4  38 61 00 08 */	addi r3, r1, 8
/* 800A62E8 000A30E8  38 81 00 0C */	addi r4, r1, 0xc
/* 800A62EC 000A30EC  38 A0 00 00 */	li r5, 0
/* 800A62F0 000A30F0  38 C0 00 01 */	li r6, 1
/* 800A62F4 000A30F4  4B F9 B8 25 */	bl xScrFxFade__FP10iColor_tagP10iColor_tagfPFv_vi
/* 800A62F8 000A30F8  48 00 00 CC */	b lbl_800A63C4
lbl_800A62FC:
/* 800A62FC 000A30FC  3A C0 00 01 */	li r22, 1
/* 800A6300 000A3100  38 60 00 05 */	li r3, 5
/* 800A6304 000A3104  4B FE C9 CD */	bl zFMVFileGetName__F8eFMVFile
/* 800A6308 000A3108  C0 22 93 A8 */	lfs f1, zMenu_float_two-_SDA2_BASE_(r2)
/* 800A630C 000A310C  3C 80 00 01 */	lis r4, 1
/* 800A6310 000A3110  38 A0 00 01 */	li r5, 1
/* 800A6314 000A3114  38 C0 00 00 */	li r6, 0
/* 800A6318 000A3118  4B FE C8 D5 */	bl zFMVPlay__FPcUifbb
/* 800A631C 000A311C  38 60 00 07 */	li r3, 7
/* 800A6320 000A3120  4B FE C9 B1 */	bl zFMVFileGetName__F8eFMVFile
/* 800A6324 000A3124  C0 22 93 A8 */	lfs f1, zMenu_float_two-_SDA2_BASE_(r2)
/* 800A6328 000A3128  3C 80 00 01 */	lis r4, 1
/* 800A632C 000A312C  38 A0 00 01 */	li r5, 1
/* 800A6330 000A3130  38 C0 00 00 */	li r6, 0
/* 800A6334 000A3134  4B FE C8 B9 */	bl zFMVPlay__FPcUifbb
/* 800A6338 000A3138  38 60 00 06 */	li r3, 6
/* 800A633C 000A313C  4B FE C9 95 */	bl zFMVFileGetName__F8eFMVFile
/* 800A6340 000A3140  C0 22 93 A8 */	lfs f1, zMenu_float_two-_SDA2_BASE_(r2)
/* 800A6344 000A3144  3C 80 00 01 */	lis r4, 1
/* 800A6348 000A3148  38 A0 00 01 */	li r5, 1
/* 800A634C 000A314C  38 C0 00 00 */	li r6, 0
/* 800A6350 000A3150  4B FE C8 9D */	bl zFMVPlay__FPcUifbb
/* 800A6354 000A3154  C0 02 93 AC */	lfs f0, zMenu_float_ten-_SDA2_BASE_(r2)
/* 800A6358 000A3158  38 60 00 02 */	li r3, 2
/* 800A635C 000A315C  D0 0D 82 C8 */	stfs f0, holdTmr-_SDA_BASE_(r13)
/* 800A6360 000A3160  4B FF 48 B9 */	bl zGameModeSwitch__F9eGameMode
/* 800A6364 000A3164  38 60 00 01 */	li r3, 1
/* 800A6368 000A3168  4B FF 47 C5 */	bl zGameStateSwitch__Fi
/* 800A636C 000A316C  C0 22 93 B0 */	lfs f1, zMenu_float_0p1-_SDA2_BASE_(r2)
/* 800A6370 000A3170  38 61 00 0C */	addi r3, r1, 0xc
/* 800A6374 000A3174  38 81 00 08 */	addi r4, r1, 8
/* 800A6378 000A3178  38 A0 00 00 */	li r5, 0
/* 800A637C 000A317C  38 C0 00 01 */	li r6, 1
/* 800A6380 000A3180  4B F9 B7 99 */	bl xScrFxFade__FP10iColor_tagP10iColor_tagfPFv_vi
/* 800A6384 000A3184  48 02 E5 CD */	bl iTimeGet__Fv
/* 800A6388 000A3188  48 14 76 65 */	bl __cvt_sll_flt
/* 800A638C 000A318C  3C 60 80 00 */	lis r3, 0x800000F8@ha
/* 800A6390 000A3190  3C 00 43 30 */	lis r0, 0x4330
/* 800A6394 000A3194  80 63 00 F8 */	lwz r3, 0x800000F8@l(r3)
/* 800A6398 000A3198  90 01 00 20 */	stw r0, 0x20(r1)
/* 800A639C 000A319C  54 60 F0 BE */	srwi r0, r3, 2
/* 800A63A0 000A31A0  C8 62 93 B8 */	lfd f3, zMenu_float_itof_value-_SDA2_BASE_(r2)
/* 800A63A4 000A31A4  90 01 00 24 */	stw r0, 0x24(r1)
/* 800A63A8 000A31A8  C0 82 93 9C */	lfs f4, zMenu_float_one-_SDA2_BASE_(r2)
/* 800A63AC 000A31AC  C8 41 00 20 */	lfd f2, 0x20(r1)
/* 800A63B0 000A31B0  C0 02 93 A0 */	lfs f0, zMenu_float_one_over_sixty-_SDA2_BASE_(r2)
/* 800A63B4 000A31B4  EC 42 18 28 */	fsubs f2, f2, f3
/* 800A63B8 000A31B8  EC 44 10 24 */	fdivs f2, f4, f2
/* 800A63BC 000A31BC  EC 02 00 78 */	fmsubs f0, f2, f1, f0
/* 800A63C0 000A31C0  D0 0D 90 34 */	stfs f0, time_last-_SDA_BASE_(r13)
lbl_800A63C4:
/* 800A63C4 000A31C4  48 02 E5 8D */	bl iTimeGet__Fv
/* 800A63C8 000A31C8  48 14 76 25 */	bl __cvt_sll_flt
/* 800A63CC 000A31CC  80 19 00 F8 */	lwz r0, 0xf8(r25)
/* 800A63D0 000A31D0  93 41 00 20 */	stw r26, 0x20(r1)
/* 800A63D4 000A31D4  54 00 F0 BE */	srwi r0, r0, 2
/* 800A63D8 000A31D8  C8 42 93 B8 */	lfd f2, zMenu_float_itof_value-_SDA2_BASE_(r2)
/* 800A63DC 000A31DC  90 01 00 24 */	stw r0, 0x24(r1)
/* 800A63E0 000A31E0  C0 62 93 9C */	lfs f3, zMenu_float_one-_SDA2_BASE_(r2)
/* 800A63E4 000A31E4  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 800A63E8 000A31E8  EC 00 10 28 */	fsubs f0, f0, f2
/* 800A63EC 000A31EC  EC 03 00 24 */	fdivs f0, f3, f0
/* 800A63F0 000A31F0  EC 00 00 72 */	fmuls f0, f0, f1
/* 800A63F4 000A31F4  D0 0D 90 38 */	stfs f0, time_current-_SDA_BASE_(r13)
/* 800A63F8 000A31F8  C0 4D 90 38 */	lfs f2, time_current-_SDA_BASE_(r13)
/* 800A63FC 000A31FC  C0 0D 90 34 */	lfs f0, time_last-_SDA_BASE_(r13)
/* 800A6400 000A3200  EC 02 00 28 */	fsubs f0, f2, f0
/* 800A6404 000A3204  D0 0D 82 C4 */	stfs f0, time_elapsed-_SDA_BASE_(r13)
/* 800A6408 000A3208  88 0D 90 30 */	lbz r0, menu_fmv_played-_SDA_BASE_(r13)
/* 800A640C 000A320C  28 00 00 00 */	cmplwi r0, 0
/* 800A6410 000A3210  41 82 00 24 */	beq lbl_800A6434
/* 800A6414 000A3214  C0 2D 82 C4 */	lfs f1, time_elapsed-_SDA_BASE_(r13)
/* 800A6418 000A3218  C0 02 93 A0 */	lfs f0, zMenu_float_one_over_sixty-_SDA2_BASE_(r2)
/* 800A641C 000A321C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A6420 000A3220  40 81 00 14 */	ble lbl_800A6434
/* 800A6424 000A3224  EC 02 00 28 */	fsubs f0, f2, f0
/* 800A6428 000A3228  D0 0D 90 34 */	stfs f0, time_last-_SDA_BASE_(r13)
/* 800A642C 000A322C  C0 02 93 A0 */	lfs f0, zMenu_float_one_over_sixty-_SDA2_BASE_(r2)
/* 800A6430 000A3230  D0 0D 82 C4 */	stfs f0, time_elapsed-_SDA_BASE_(r13)
lbl_800A6434:
/* 800A6434 000A3234  38 00 00 00 */	li r0, 0
/* 800A6438 000A3238  98 0D 90 30 */	stb r0, menu_fmv_played-_SDA_BASE_(r13)
/* 800A643C 000A323C  C0 2D 82 C4 */	lfs f1, time_elapsed-_SDA_BASE_(r13)
/* 800A6440 000A3240  C0 02 93 A4 */	lfs f0, zMenu_float_zero-_SDA2_BASE_(r2)
/* 800A6444 000A3244  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A6448 000A3248  40 80 00 0C */	bge lbl_800A6454
/* 800A644C 000A324C  C0 02 93 A0 */	lfs f0, zMenu_float_one_over_sixty-_SDA2_BASE_(r2)
/* 800A6450 000A3250  D0 0D 82 C4 */	stfs f0, time_elapsed-_SDA_BASE_(r13)
lbl_800A6454:
/* 800A6454 000A3254  4B FF 44 D9 */	bl zGameModeGet__Fv
/* 800A6458 000A3258  2C 03 00 02 */	cmpwi r3, 2
/* 800A645C 000A325C  40 82 01 18 */	bne lbl_800A6574
/* 800A6460 000A3260  C0 2D 90 3C */	lfs f1, sAttractMode_timer-_SDA_BASE_(r13)
/* 800A6464 000A3264  C0 0D 82 C4 */	lfs f0, time_elapsed-_SDA_BASE_(r13)
/* 800A6468 000A3268  EC 01 00 28 */	fsubs f0, f1, f0
/* 800A646C 000A326C  D0 0D 90 3C */	stfs f0, sAttractMode_timer-_SDA_BASE_(r13)
/* 800A6470 000A3270  C0 2D 90 3C */	lfs f1, sAttractMode_timer-_SDA_BASE_(r13)
/* 800A6474 000A3274  C0 02 93 A4 */	lfs f0, zMenu_float_zero-_SDA2_BASE_(r2)
/* 800A6478 000A3278  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A647C 000A327C  40 80 00 74 */	bge lbl_800A64F0
/* 800A6480 000A3280  3C 60 80 26 */	lis r3, zMenu_strings@ha
/* 800A6484 000A3284  38 63 E5 58 */	addi r3, r3, zMenu_strings@l
/* 800A6488 000A3288  4B FA 5D 8D */	bl xStrHash__FPCc
/* 800A648C 000A328C  48 00 E5 B1 */	bl zSceneFindObject__FUi
/* 800A6490 000A3290  3C 80 80 26 */	lis r4, zMenu_strings@ha
/* 800A6494 000A3294  7C 75 1B 78 */	mr r21, r3
/* 800A6498 000A3298  38 84 E5 58 */	addi r4, r4, zMenu_strings@l
/* 800A649C 000A329C  38 64 00 18 */	addi r3, r4, 0x18
/* 800A64A0 000A32A0  4B FA 5D 75 */	bl xStrHash__FPCc
/* 800A64A4 000A32A4  48 00 E5 99 */	bl zSceneFindObject__FUi
/* 800A64A8 000A32A8  28 15 00 00 */	cmplwi r21, 0
/* 800A64AC 000A32AC  7C 74 1B 78 */	mr r20, r3
/* 800A64B0 000A32B0  41 82 00 14 */	beq lbl_800A64C4
/* 800A64B4 000A32B4  7E A3 AB 78 */	mr r3, r21
/* 800A64B8 000A32B8  4B F6 81 81 */	bl xEntIsVisible__FPC4xEnt
/* 800A64BC 000A32BC  28 03 00 00 */	cmplwi r3, 0
/* 800A64C0 000A32C0  40 82 00 1C */	bne lbl_800A64DC
lbl_800A64C4:
/* 800A64C4 000A32C4  28 14 00 00 */	cmplwi r20, 0
/* 800A64C8 000A32C8  41 82 00 20 */	beq lbl_800A64E8
/* 800A64CC 000A32CC  7E 83 A3 78 */	mr r3, r20
/* 800A64D0 000A32D0  4B F6 81 69 */	bl xEntIsVisible__FPC4xEnt
/* 800A64D4 000A32D4  28 03 00 00 */	cmplwi r3, 0
/* 800A64D8 000A32D8  41 82 00 10 */	beq lbl_800A64E8
lbl_800A64DC:
/* 800A64DC 000A32DC  38 60 00 01 */	li r3, 1
/* 800A64E0 000A32E0  4B FF 46 4D */	bl zGameStateSwitch__Fi
/* 800A64E4 000A32E4  48 00 00 0C */	b lbl_800A64F0
lbl_800A64E8:
/* 800A64E8 000A32E8  C0 02 93 90 */	lfs f0, zMenu_float_48p264-_SDA2_BASE_(r2)
/* 800A64EC 000A32EC  D0 0D 90 3C */	stfs f0, sAttractMode_timer-_SDA_BASE_(r13)
lbl_800A64F0:
/* 800A64F0 000A32F0  4B FF 44 35 */	bl zGameStateGet__Fv
/* 800A64F4 000A32F4  2C 03 00 01 */	cmpwi r3, 1
/* 800A64F8 000A32F8  40 82 00 4C */	bne lbl_800A6544
/* 800A64FC 000A32FC  80 0D 82 C0 */	lwz r0, sFirstBoot-_SDA_BASE_(r13)
/* 800A6500 000A3300  2C 00 00 00 */	cmpwi r0, 0
/* 800A6504 000A3304  41 82 00 10 */	beq lbl_800A6514
/* 800A6508 000A3308  38 60 00 00 */	li r3, 0
/* 800A650C 000A330C  48 00 06 E5 */	bl zMenuFirstBootSet__Fi
/* 800A6510 000A3310  48 00 00 20 */	b lbl_800A6530
lbl_800A6514:
/* 800A6514 000A3314  38 60 00 08 */	li r3, 8
/* 800A6518 000A3318  4B FE C7 B9 */	bl zFMVFileGetName__F8eFMVFile
/* 800A651C 000A331C  C0 22 93 B0 */	lfs f1, zMenu_float_0p1-_SDA2_BASE_(r2)
/* 800A6520 000A3320  38 80 FF FF */	li r4, -1
/* 800A6524 000A3324  88 DB 06 D2 */	lbz r6, 0x6d2(r27)
/* 800A6528 000A3328  38 A0 00 01 */	li r5, 1
/* 800A652C 000A332C  48 00 06 79 */	bl zMenuFMVPlay__FPcUifbb
lbl_800A6530:
/* 800A6530 000A3330  38 60 00 00 */	li r3, 0
/* 800A6534 000A3334  4B FF 45 F9 */	bl zGameStateSwitch__Fi
/* 800A6538 000A3338  C0 02 93 90 */	lfs f0, zMenu_float_48p264-_SDA2_BASE_(r2)
/* 800A653C 000A333C  D0 0D 90 3C */	stfs f0, sAttractMode_timer-_SDA_BASE_(r13)
/* 800A6540 000A3340  48 00 00 0C */	b lbl_800A654C
lbl_800A6544:
/* 800A6544 000A3344  C0 2D 82 C4 */	lfs f1, time_elapsed-_SDA_BASE_(r13)
/* 800A6548 000A3348  48 00 12 6D */	bl zMusicUpdate__Ff
lbl_800A654C:
/* 800A654C 000A334C  88 9B 06 D1 */	lbz r4, 0x6d1(r27)
/* 800A6550 000A3350  3C 60 80 39 */	lis r3, mPad@ha
/* 800A6554 000A3354  38 03 C9 94 */	addi r0, r3, mPad@l
/* 800A6558 000A3358  1C 64 01 48 */	mulli r3, r4, 0x148
/* 800A655C 000A335C  7C 60 1A 14 */	add r3, r0, r3
/* 800A6560 000A3360  80 03 00 30 */	lwz r0, 0x30(r3)
/* 800A6564 000A3364  28 00 00 00 */	cmplwi r0, 0
/* 800A6568 000A3368  41 82 00 0C */	beq lbl_800A6574
/* 800A656C 000A336C  C0 02 93 90 */	lfs f0, zMenu_float_48p264-_SDA2_BASE_(r2)
/* 800A6570 000A3370  D0 0D 90 3C */	stfs f0, sAttractMode_timer-_SDA_BASE_(r13)
lbl_800A6574:
/* 800A6574 000A3374  C0 0D 90 38 */	lfs f0, time_current-_SDA_BASE_(r13)
/* 800A6578 000A3378  D0 0D 90 34 */	stfs f0, time_last-_SDA_BASE_(r13)
/* 800A657C 000A337C  88 7B 06 D1 */	lbz r3, 0x6d1(r27)
/* 800A6580 000A3380  C0 2D 82 C4 */	lfs f1, time_elapsed-_SDA_BASE_(r13)
/* 800A6584 000A3384  4B F8 FA 41 */	bl xPadUpdate__Fif
/* 800A6588 000A3388  88 1B 06 D2 */	lbz r0, 0x6d2(r27)
/* 800A658C 000A338C  28 00 00 00 */	cmplwi r0, 0
/* 800A6590 000A3390  40 82 00 28 */	bne lbl_800A65B8
/* 800A6594 000A3394  C0 2D 82 C4 */	lfs f1, time_elapsed-_SDA_BASE_(r13)
/* 800A6598 000A3398  38 60 00 01 */	li r3, 1
/* 800A659C 000A339C  4B F8 FA 29 */	bl xPadUpdate__Fif
/* 800A65A0 000A33A0  C0 2D 82 C4 */	lfs f1, time_elapsed-_SDA_BASE_(r13)
/* 800A65A4 000A33A4  38 60 00 02 */	li r3, 2
/* 800A65A8 000A33A8  4B F8 FA 1D */	bl xPadUpdate__Fif
/* 800A65AC 000A33AC  C0 2D 82 C4 */	lfs f1, time_elapsed-_SDA_BASE_(r13)
/* 800A65B0 000A33B0  38 60 00 03 */	li r3, 3
/* 800A65B4 000A33B4  4B F8 FA 11 */	bl xPadUpdate__Fif
lbl_800A65B8:
/* 800A65B8 000A33B8  4B FF 30 A9 */	bl xDrawBegin__Fv
/* 800A65BC 000A33BC  48 00 01 8D */	bl zMenuIsPaused__Fv
/* 800A65C0 000A33C0  C0 2D 82 C4 */	lfs f1, time_elapsed-_SDA_BASE_(r13)
/* 800A65C4 000A33C4  7C 75 1B 78 */	mr r21, r3
/* 800A65C8 000A33C8  48 00 D9 6D */	bl zSceneUpdate__Ff
/* 800A65CC 000A33CC  2C 15 00 00 */	cmpwi r21, 0
/* 800A65D0 000A33D0  40 82 00 1C */	bne lbl_800A65EC
/* 800A65D4 000A33D4  81 9B 07 14 */	lwz r12, 0x714(r27)
/* 800A65D8 000A33D8  7F 03 C3 78 */	mr r3, r24
/* 800A65DC 000A33DC  80 9B 1F C0 */	lwz r4, 0x1fc0(r27)
/* 800A65E0 000A33E0  C0 2D 82 C4 */	lfs f1, time_elapsed-_SDA_BASE_(r13)
/* 800A65E4 000A33E4  7D 89 03 A6 */	mtctr r12
/* 800A65E8 000A33E8  4E 80 04 21 */	bctrl 
lbl_800A65EC:
/* 800A65EC 000A33EC  4B FA 23 A9 */	bl xSndUpdate__Fv
/* 800A65F0 000A33F0  48 0D A6 9D */	bl CheckDVDAndResetState__8iTRCDiskFv
/* 800A65F4 000A33F4  C0 2D 82 C4 */	lfs f1, time_elapsed-_SDA_BASE_(r13)
/* 800A65F8 000A33F8  7F 63 DB 78 */	mr r3, r27
/* 800A65FC 000A33FC  4B FA AB 61 */	bl zCameraUpdate__FP7xCameraf
/* 800A6600 000A3400  7F A3 EB 78 */	mr r3, r29
/* 800A6604 000A3404  38 80 00 01 */	li r4, 1
/* 800A6608 000A3408  4B F6 66 ED */	bl xCameraBegin__FP7xCamerai
/* 800A660C 000A340C  48 00 E2 C1 */	bl zSceneRender__Fv
/* 800A6610 000A3410  4B F7 17 89 */	bl xDebugUpdate__Fv
/* 800A6614 000A3414  2C 16 00 00 */	cmpwi r22, 0
/* 800A6618 000A3418  41 82 00 38 */	beq lbl_800A6650
/* 800A661C 000A341C  38 60 00 06 */	li r3, 6
/* 800A6620 000A3420  38 80 00 00 */	li r4, 0
/* 800A6624 000A3424  48 18 91 B9 */	bl RwRenderStateSet
/* 800A6628 000A3428  38 60 00 08 */	li r3, 8
/* 800A662C 000A342C  38 80 00 00 */	li r4, 0
/* 800A6630 000A3430  48 18 91 AD */	bl RwRenderStateSet
/* 800A6634 000A3434  38 60 00 0A */	li r3, 0xa
/* 800A6638 000A3438  38 80 00 01 */	li r4, 1
/* 800A663C 000A343C  48 18 91 A1 */	bl RwRenderStateSet
/* 800A6640 000A3440  38 60 00 0B */	li r3, 0xb
/* 800A6644 000A3444  38 80 00 01 */	li r4, 1
/* 800A6648 000A3448  48 18 91 95 */	bl RwRenderStateSet
/* 800A664C 000A344C  4B F9 B3 C1 */	bl xScrFxDrawScreenSizeRectangle__Fv
lbl_800A6650:
/* 800A6650 000A3450  4B FF 2F F1 */	bl xDrawEnd__Fv
/* 800A6654 000A3454  C0 2D 82 C4 */	lfs f1, time_elapsed-_SDA_BASE_(r13)
/* 800A6658 000A3458  7F C3 F3 78 */	mr r3, r30
/* 800A665C 000A345C  38 80 00 01 */	li r4, 1
/* 800A6660 000A3460  4B F6 6D AD */	bl xCameraEnd__FP7xCamerafi
/* 800A6664 000A3464  7F E3 FB 78 */	mr r3, r31
/* 800A6668 000A3468  4B F6 6D E5 */	bl xCameraShowRaster__FP7xCamera
/* 800A666C 000A346C  48 00 00 FD */	bl zMenuUpdateMode__Fv
/* 800A6670 000A3470  90 61 00 10 */	stw r3, 0x10(r1)
/* 800A6674 000A3474  80 7B 1F C0 */	lwz r3, 0x1fc0(r27)
/* 800A6678 000A3478  80 63 00 70 */	lwz r3, 0x70(r3)
/* 800A667C 000A347C  28 03 00 00 */	cmplwi r3, 0
/* 800A6680 000A3480  41 82 00 5C */	beq lbl_800A66DC
/* 800A6684 000A3484  80 83 00 10 */	lwz r4, 0x10(r3)
/* 800A6688 000A3488  38 61 00 10 */	addi r3, r1, 0x10
/* 800A668C 000A348C  38 84 00 14 */	addi r4, r4, 0x14
/* 800A6690 000A3490  88 04 00 03 */	lbz r0, 3(r4)
/* 800A6694 000A3494  98 01 00 10 */	stb r0, 0x10(r1)
/* 800A6698 000A3498  88 04 00 02 */	lbz r0, 2(r4)
/* 800A669C 000A349C  98 01 00 11 */	stb r0, 0x11(r1)
/* 800A66A0 000A34A0  88 04 00 01 */	lbz r0, 1(r4)
/* 800A66A4 000A34A4  98 01 00 12 */	stb r0, 0x12(r1)
/* 800A66A8 000A34A8  88 A4 00 00 */	lbz r5, 0(r4)
/* 800A66AC 000A34AC  54 A0 06 3E */	clrlwi r0, r5, 0x18
/* 800A66B0 000A34B0  98 A1 00 13 */	stb r5, 0x13(r1)
/* 800A66B4 000A34B4  28 00 00 30 */	cmplwi r0, 0x30
/* 800A66B8 000A34B8  41 80 00 0C */	blt lbl_800A66C4
/* 800A66BC 000A34BC  28 00 00 39 */	cmplwi r0, 0x39
/* 800A66C0 000A34C0  40 81 00 0C */	ble lbl_800A66CC
lbl_800A66C4:
/* 800A66C4 000A34C4  38 A0 00 04 */	li r5, 4
/* 800A66C8 000A34C8  4B F5 CE 79 */	bl memcpy
lbl_800A66CC:
/* 800A66CC 000A34CC  38 60 00 0C */	li r3, 0xc
/* 800A66D0 000A34D0  4B FF 45 49 */	bl zGameModeSwitch__F9eGameMode
/* 800A66D4 000A34D4  38 60 00 00 */	li r3, 0
/* 800A66D8 000A34D8  4B FF 44 55 */	bl zGameStateSwitch__Fi
lbl_800A66DC:
/* 800A66DC 000A34DC  80 6D 88 B0 */	lwz r3, gFrameCount-_SDA_BASE_(r13)
/* 800A66E0 000A34E0  2C 17 00 00 */	cmpwi r23, 0
/* 800A66E4 000A34E4  38 03 00 01 */	addi r0, r3, 1
/* 800A66E8 000A34E8  90 0D 88 B0 */	stw r0, gFrameCount-_SDA_BASE_(r13)
/* 800A66EC 000A34EC  40 81 00 0C */	ble lbl_800A66F8
/* 800A66F0 000A34F0  3A F7 FF FF */	addi r23, r23, -1
/* 800A66F4 000A34F4  48 00 00 2C */	b lbl_800A6720
lbl_800A66F8:
/* 800A66F8 000A34F8  38 60 00 02 */	li r3, 2
/* 800A66FC 000A34FC  4B FF 42 41 */	bl zGameSetOstrich__F12_GameOstrich
/* 800A6700 000A3500  80 1C 00 08 */	lwz r0, 8(r28)
/* 800A6704 000A3504  2C 00 00 02 */	cmpwi r0, 2
/* 800A6708 000A3508  41 82 00 18 */	beq lbl_800A6720
/* 800A670C 000A350C  38 00 00 01 */	li r0, 1
/* 800A6710 000A3510  80 7C 00 04 */	lwz r3, 4(r28)
/* 800A6714 000A3514  98 1B 06 D8 */	stb r0, 0x6d8(r27)
/* 800A6718 000A3518  38 80 00 01 */	li r4, 1
/* 800A671C 000A351C  4B FA 71 E9 */	bl xTRCPad__Fi12_tagTRCState
lbl_800A6720:
/* 800A6720 000A3520  48 00 00 31 */	bl zMenuLoopContinue__Fv
/* 800A6724 000A3524  2C 03 00 00 */	cmpwi r3, 0
/* 800A6728 000A3528  40 82 FB 80 */	bne lbl_800A62A8
/* 800A672C 000A352C  4B FF 33 E1 */	bl zGameExtras_NewGameReset__Fv
/* 800A6730 000A3530  BA 81 00 30 */	lmw r20, 0x30(r1)
/* 800A6734 000A3534  80 01 00 64 */	lwz r0, 0x64(r1)
/* 800A6738 000A3538  80 61 00 10 */	lwz r3, 0x10(r1)
/* 800A673C 000A353C  7C 08 03 A6 */	mtlr r0
/* 800A6740 000A3540  38 21 00 60 */	addi r1, r1, 0x60
/* 800A6744 000A3544  4E 80 00 20 */	blr 

.global zMenuFMVPlay__FPcUifbb
zMenuFMVPlay__FPcUifbb:
/* 800A6BA4 000A39A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A6BA8 000A39A8  7C 08 02 A6 */	mflr r0
/* 800A6BAC 000A39AC  28 03 00 00 */	cmplwi r3, 0
/* 800A6BB0 000A39B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A6BB4 000A39B4  41 82 00 24 */	beq lbl_800A6BD8
/* 800A6BB8 000A39B8  4B FE C0 35 */	bl zFMVPlay__FPcUifbb
/* 800A6BBC 000A39BC  48 02 DD 95 */	bl iTimeGet__Fv
/* 800A6BC0 000A39C0  48 14 6E 2D */	bl __cvt_sll_flt
/* 800A6BC4 000A39C4  D0 2D 90 34 */	stfs f1, time_last-_SDA_BASE_(r13)
/* 800A6BC8 000A39C8  C0 0D 90 34 */	lfs f0, time_last-_SDA_BASE_(r13)
/* 800A6BCC 000A39CC  D0 0D 90 38 */	stfs f0, time_current-_SDA_BASE_(r13)
/* 800A6BD0 000A39D0  C0 02 93 90 */	lfs f0, zMenu_float_48p264-_SDA2_BASE_(r2)
/* 800A6BD4 000A39D4  D0 0D 90 3C */	stfs f0, sAttractMode_timer-_SDA_BASE_(r13)
lbl_800A6BD8:
/* 800A6BD8 000A39D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A6BDC 000A39DC  7C 08 03 A6 */	mtlr r0
/* 800A6BE0 000A39E0  38 21 00 10 */	addi r1, r1, 0x10
/* 800A6BE4 000A39E4  4E 80 00 20 */	blr 

.endif

.section .rodata
.global zMenu_strings
zMenu_strings:
	.4byte 0x4D4E5533
	.4byte 0x20505245
	.4byte 0x53532053
	.4byte 0x54415254
	.4byte 0x20303220
	.4byte 0x55494600
	.4byte 0x4D4E5533
	.4byte 0x20535441
	.4byte 0x5254204E
	.4byte 0x45574741
	.4byte 0x4D452055
	.4byte 0x49460000

.section .bss
.global corruptFiles
corruptFiles:
	.skip 0xC0

.section .sbss
.global time_last
time_last:
	.skip 0x4
.global time_current
time_current:
	.skip 0x4
.global sAttractMode_timer
sAttractMode_timer:
	.skip 0x4
.global card
card:
	.skip 0x4
.global sInMenu
sInMenu:
	.skip 0x4
.global corruptFileCount
corruptFileCount:
	.skip 0x8

.section .sbss2
.global ClearColorInitializer
ClearColorInitializer:
	.skip 0x8

.section .sdata
.global sFirstBoot
sFirstBoot:
	.4byte 0x00000001
.global time_elapsed
time_elapsed:
	.4byte 0x3C23D70A
.global holdTmr
holdTmr:
	.4byte 0x41200000
	.4byte 0x00000000

.section .sdata2
.global zMenu_float_48p264
zMenu_float_48p264:
	.4byte 0x42410E56
.global zMenu_float_minus_one
zMenu_float_minus_one:
	.4byte 0xBF800000
.global BlackColorInitializer
BlackColorInitializer:
	.4byte 0x000000FF
.global zMenu_float_one
zMenu_float_one:
	.4byte 0x3F800000
.global zMenu_float_one_over_sixty
zMenu_float_one_over_sixty:
	.4byte 0x3C888889
.global zMenu_float_zero
zMenu_float_zero:
	.4byte 0x00000000
.global zMenu_float_two
zMenu_float_two:
	.4byte 0x40000000
.global zMenu_float_ten
zMenu_float_ten:
	.4byte 0x41200000
.global zMenu_float_0p1
zMenu_float_0p1:
	.4byte 0x3DCCCCCD
	.4byte 0x00000000
.global zMenu_float_itof_value
zMenu_float_itof_value:
	.4byte 0x43300000
	.4byte 0x00000000
