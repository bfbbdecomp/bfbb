.include "macros.inc"
.file "zMain.cpp"

# 0x800A26A0 - 0x800A5FFC
.text
.balign 4

.fn main, global
/* 800A26A0 0009F780  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A26A4 0009F784  7C 08 02 A6 */	mflr r0
/* 800A26A8 0009F788  3C 60 80 3C */	lis r3, globals@ha
/* 800A26AC 0009F78C  38 80 00 00 */	li r4, 0x0
/* 800A26B0 0009F790  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A26B4 0009F794  38 63 05 58 */	addi r3, r3, globals@l
/* 800A26B8 0009F798  38 A0 1F C8 */	li r5, 0x1fc8
/* 800A26BC 0009F79C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800A26C0 0009F7A0  4B F6 0D 99 */	bl memset
/* 800A26C4 0009F7A4  3C 60 80 3C */	lis r3, globals@ha
/* 800A26C8 0009F7A8  38 00 00 01 */	li r0, 0x1
/* 800A26CC 0009F7AC  38 83 05 58 */	addi r4, r3, globals@l
/* 800A26D0 0009F7B0  38 60 00 00 */	li r3, 0x0
/* 800A26D4 0009F7B4  98 04 06 D2 */	stb r0, 0x6d2(r4)
/* 800A26D8 0009F7B8  48 03 0C 8D */	bl iSystemInit__FUi
/* 800A26DC 0009F7BC  48 00 01 19 */	bl zMainOutputMgrSetup__Fv
/* 800A26E0 0009F7C0  3C 60 80 0A */	lis r3, zMainMemLvlChkCB__Fv@ha
/* 800A26E4 0009F7C4  38 63 4B B0 */	addi r3, r3, zMainMemLvlChkCB__Fv@l
/* 800A26E8 0009F7C8  4B F9 15 2D */	bl xMemRegisterBaseNotifyFunc__FPFv_v
/* 800A26EC 0009F7CC  48 00 01 31 */	bl zMainInitGlobals__Fv
/* 800A26F0 0009F7D0  48 01 B9 31 */	bl var_init__Fv
/* 800A26F4 0009F7D4  4B FA C4 F9 */	bl zAssetStartup__Fv
/* 800A26F8 0009F7D8  48 00 37 E5 */	bl zMainLoadFontHIP__Fv
/* 800A26FC 0009F7DC  4B F7 E8 D1 */	bl init__5xfontFv
/* 800A2700 0009F7E0  38 60 00 01 */	li r3, 0x1
/* 800A2704 0009F7E4  48 00 2E 49 */	bl zMainFirstScreen__Fi
/* 800A2708 0009F7E8  48 00 24 C9 */	bl zMainShowProgressBar__Fv
/* 800A270C 0009F7EC  4B FA AF A1 */	bl xTRCInit__Fv
/* 800A2710 0009F7F0  48 00 2A F1 */	bl zMainReadINI__Fv
/* 800A2714 0009F7F4  3C 60 80 3C */	lis r3, globals@ha
/* 800A2718 0009F7F8  3C A0 80 26 */	lis r5, "@stringBase0"@ha
/* 800A271C 0009F7FC  38 83 05 58 */	addi r4, r3, globals@l
/* 800A2720 0009F800  80 84 03 2C */	lwz r4, 0x32c(r4)
/* 800A2724 0009F804  38 65 D4 94 */	addi r3, r5, "@stringBase0"@l
/* 800A2728 0009F808  48 03 22 E9 */	bl iFuncProfileParse__FPci
/* 800A272C 0009F80C  4B FA B5 1D */	bl xUtilStartup__Fv
/* 800A2730 0009F810  3C 80 80 29 */	lis r4, g_xser_sizeinfo@ha
/* 800A2734 0009F814  38 60 00 80 */	li r3, 0x80
/* 800A2738 0009F818  38 84 FB 70 */	addi r4, r4, g_xser_sizeinfo@l
/* 800A273C 0009F81C  4B FA 06 31 */	bl xSerialStartup__FiP21st_SERIAL_PERCID_SIZE
/* 800A2740 0009F820  4B FB 0D A5 */	bl zDispatcher_Startup__Fv
/* 800A2744 0009F824  4B F9 F1 DD */	bl xScrFxInit__Fv
/* 800A2748 0009F828  4B F8 97 31 */	bl xFXStartup__Fv
/* 800A274C 0009F82C  48 00 24 85 */	bl zMainShowProgressBar__Fv
/* 800A2750 0009F830  4B F9 63 85 */	bl xParMgrInit__Fv
/* 800A2754 0009F834  48 00 55 71 */	bl zParCmdInit__Fv
/* 800A2758 0009F838  48 00 38 A5 */	bl iEnvStartup__Fv
/* 800A275C 0009F83C  4B FC 02 AD */	bl zEntPickup_Startup__Fv
/* 800A2760 0009F840  48 0D C7 D1 */	bl zCameraTweakGlobal_Init__Fv
/* 800A2764 0009F844  3C 60 80 3C */	lis r3, globals@ha
/* 800A2768 0009F848  38 00 00 01 */	li r0, 0x1
/* 800A276C 0009F84C  3B E3 05 58 */	addi r31, r3, globals@l
/* 800A2770 0009F850  90 1F 06 C0 */	stw r0, 0x6c0(r31)
/* 800A2774 0009F854  88 7F 06 D1 */	lbz r3, 0x6d1(r31)
/* 800A2778 0009F858  4B F9 37 61 */	bl xPadEnable__Fi
/* 800A277C 0009F85C  3C 80 80 3C */	lis r4, globals@ha
/* 800A2780 0009F860  38 00 00 00 */	li r0, 0x0
/* 800A2784 0009F864  38 84 05 58 */	addi r4, r4, globals@l
/* 800A2788 0009F868  90 64 03 1C */	stw r3, 0x31c(r4)
/* 800A278C 0009F86C  90 04 03 20 */	stw r0, 0x320(r4)
/* 800A2790 0009F870  90 0D 8A 08 */	stw r0, gDebugPad@sda21(r13)
/* 800A2794 0009F874  88 7F 06 D1 */	lbz r3, 0x6d1(r31)
/* 800A2798 0009F878  80 9F 06 C0 */	lwz r4, 0x6c0(r31)
/* 800A279C 0009F87C  4B F9 37 B5 */	bl xPadRumbleEnable__Fii
/* 800A27A0 0009F880  4B F9 A4 AD */	bl xSGStartup__Fv
/* 800A27A4 0009F884  4B F7 55 FD */	bl xDebugTimestampScreen__Fv
/* 800A27A8 0009F888  48 08 4C 75 */	bl zShrapnel_GameInit__Fv
/* 800A27AC 0009F88C  48 00 24 25 */	bl zMainShowProgressBar__Fv
/* 800A27B0 0009F890  48 06 A6 75 */	bl xBehaveMgr_Startup__Fv
/* 800A27B4 0009F894  48 04 BB 41 */	bl zNPCMgr_Startup__Fv
/* 800A27B8 0009F898  48 00 25 19 */	bl zMainLoop__Fv
/* 800A27BC 0009F89C  48 04 BB 9D */	bl zNPCMgr_Shutdown__Fv
/* 800A27C0 0009F8A0  48 06 A6 CD */	bl xBehaveMgr_Shutdown__Fv
/* 800A27C4 0009F8A4  4B FA C4 55 */	bl zAssetShutdown__Fv
/* 800A27C8 0009F8A8  4B F8 96 B5 */	bl xFXShutdown__Fv
/* 800A27CC 0009F8AC  4B FB 0D 1D */	bl zDispatcher_Shutdown__Fv
/* 800A27D0 0009F8B0  4B F9 A4 D1 */	bl xSGShutdown__Fv
/* 800A27D4 0009F8B4  4B FA 06 09 */	bl xSerialShutdown__Fv
/* 800A27D8 0009F8B8  4B FA B4 A9 */	bl xUtilShutdown__Fv
/* 800A27DC 0009F8BC  48 03 0C 71 */	bl iSystemExit__Fv
/* 800A27E0 0009F8C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A27E4 0009F8C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800A27E8 0009F8C8  7C 08 03 A6 */	mtlr r0
/* 800A27EC 0009F8CC  38 21 00 10 */	addi r1, r1, 0x10
/* 800A27F0 0009F8D0  4E 80 00 20 */	blr
.endfn main

# zMainOutputMgrSetup()
.fn zMainOutputMgrSetup__Fv, local
/* 800A27F4 0009F8D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A27F8 0009F8D8  7C 08 02 A6 */	mflr r0
/* 800A27FC 0009F8DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A2800 0009F8E0  48 03 21 51 */	bl iTimeGet__Fv
/* 800A2804 0009F8E4  48 03 21 7D */	bl iTimeDiffSec__Fx
/* 800A2808 0009F8E8  48 03 21 49 */	bl iTimeGet__Fv
/* 800A280C 0009F8EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A2810 0009F8F0  7C 08 03 A6 */	mtlr r0
/* 800A2814 0009F8F4  38 21 00 10 */	addi r1, r1, 0x10
/* 800A2818 0009F8F8  4E 80 00 20 */	blr
.endfn zMainOutputMgrSetup__Fv

# zMainInitGlobals()
.fn zMainInitGlobals__Fv, local
/* 800A281C 0009F8FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A2820 0009F900  7C 08 02 A6 */	mflr r0
/* 800A2824 0009F904  3C 60 80 3C */	lis r3, globals@ha
/* 800A2828 0009F908  38 80 00 00 */	li r4, 0x0
/* 800A282C 0009F90C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A2830 0009F910  38 63 05 58 */	addi r3, r3, globals@l
/* 800A2834 0009F914  38 A0 1F C8 */	li r5, 0x1fc8
/* 800A2838 0009F918  4B F6 0C 21 */	bl memset
/* 800A283C 0009F91C  3C 60 80 3C */	lis r3, globals@ha
/* 800A2840 0009F920  38 00 00 01 */	li r0, 0x1
/* 800A2844 0009F924  38 63 05 58 */	addi r3, r3, globals@l
/* 800A2848 0009F928  90 03 06 34 */	stw r0, 0x634(r3)
/* 800A284C 0009F92C  48 03 21 05 */	bl iTimeGet__Fv
/* 800A2850 0009F930  48 03 21 31 */	bl iTimeDiffSec__Fx
/* 800A2854 0009F934  48 03 20 FD */	bl iTimeGet__Fv
/* 800A2858 0009F938  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A285C 0009F93C  7C 08 03 A6 */	mtlr r0
/* 800A2860 0009F940  38 21 00 10 */	addi r1, r1, 0x10
/* 800A2864 0009F944  4E 80 00 20 */	blr
.endfn zMainInitGlobals__Fv

# ParseFloatList(float*, char*, int)
.fn ParseFloatList__FPfPci, local
/* 800A2868 0009F948  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A286C 0009F94C  7C 08 02 A6 */	mflr r0
/* 800A2870 0009F950  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A2874 0009F954  4B FA 9E 75 */	bl xStrParseFloatList__FPfPCci
/* 800A2878 0009F958  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A287C 0009F95C  7C 08 03 A6 */	mtlr r0
/* 800A2880 0009F960  38 21 00 10 */	addi r1, r1, 0x10
/* 800A2884 0009F964  4E 80 00 20 */	blr
.endfn ParseFloatList__FPfPci

# zLedgeAdjust(zLedgeGrabParams*)
.fn zLedgeAdjust__FP16zLedgeGrabParams, local
/* 800A2888 0009F968  C0 23 00 00 */	lfs f1, 0x0(r3)
/* 800A288C 0009F96C  C0 02 92 D8 */	lfs f0, "@909"@sda21(r2)
/* 800A2890 0009F970  EC 01 00 32 */	fmuls f0, f1, f0
/* 800A2894 0009F974  D0 03 00 00 */	stfs f0, 0x0(r3)
/* 800A2898 0009F978  4E 80 00 20 */	blr
.endfn zLedgeAdjust__FP16zLedgeGrabParams

# zMainParseINIGlobals(xIniFile*)
.fn zMainParseINIGlobals__FP8xIniFile, local
/* 800A289C 0009F97C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 800A28A0 0009F980  7C 08 02 A6 */	mflr r0
/* 800A28A4 0009F984  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A28A8 0009F988  3C A0 80 29 */	lis r5, ...data.0@ha
/* 800A28AC 0009F98C  90 01 00 34 */	stw r0, 0x34(r1)
/* 800A28B0 0009F990  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A28B4 0009F994  38 84 00 0B */	addi r4, r4, 0xb
/* 800A28B8 0009F998  BE C1 00 08 */	stmw r22, 0x8(r1)
/* 800A28BC 0009F99C  3B 65 FB 70 */	addi r27, r5, ...data.0@l
/* 800A28C0 0009F9A0  7C 7F 1B 78 */	mr r31, r3
/* 800A28C4 0009F9A4  38 A0 00 20 */	li r5, 0x20
/* 800A28C8 0009F9A8  4B F8 E2 21 */	bl xIniGetInt__FP8xIniFilePci
/* 800A28CC 0009F9AC  3C A0 80 3C */	lis r5, globals@ha
/* 800A28D0 0009F9B0  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A28D4 0009F9B4  38 A5 05 58 */	addi r5, r5, globals@l
/* 800A28D8 0009F9B8  B0 65 08 74 */	sth r3, 0x874(r5)
/* 800A28DC 0009F9BC  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A28E0 0009F9C0  7F E3 FB 78 */	mr r3, r31
/* 800A28E4 0009F9C4  38 A0 00 6E */	li r5, 0x6e
/* 800A28E8 0009F9C8  38 84 00 17 */	addi r4, r4, 0x17
/* 800A28EC 0009F9CC  4B F8 E1 FD */	bl xIniGetInt__FP8xIniFilePci
/* 800A28F0 0009F9D0  3C A0 80 3C */	lis r5, globals@ha
/* 800A28F4 0009F9D4  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A28F8 0009F9D8  38 A5 05 58 */	addi r5, r5, globals@l
/* 800A28FC 0009F9DC  B0 65 08 76 */	sth r3, 0x876(r5)
/* 800A2900 0009F9E0  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2904 0009F9E4  7F E3 FB 78 */	mr r3, r31
/* 800A2908 0009F9E8  C0 22 92 DC */	lfs f1, "@1001"@sda21(r2)
/* 800A290C 0009F9EC  38 84 00 23 */	addi r4, r4, 0x23
/* 800A2910 0009F9F0  4B F8 E2 35 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A2914 0009F9F4  4B F9 F5 05 */	bl xScrFxLetterBoxSetSize__Ff
/* 800A2918 0009F9F8  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A291C 0009F9FC  7F E3 FB 78 */	mr r3, r31
/* 800A2920 0009FA00  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2924 0009FA04  38 A0 00 FF */	li r5, 0xff
/* 800A2928 0009FA08  38 84 00 36 */	addi r4, r4, 0x36
/* 800A292C 0009FA0C  4B F8 E1 BD */	bl xIniGetInt__FP8xIniFilePci
/* 800A2930 0009FA10  54 63 06 3E */	clrlwi r3, r3, 24
/* 800A2934 0009FA14  4B F9 F4 ED */	bl xScrFxLetterBoxSetAlpha__FUc
/* 800A2938 0009FA18  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A293C 0009FA1C  7F E3 FB 78 */	mr r3, r31
/* 800A2940 0009FA20  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2944 0009FA24  38 A0 00 00 */	li r5, 0x0
/* 800A2948 0009FA28  38 84 00 4A */	addi r4, r4, 0x4a
/* 800A294C 0009FA2C  4B F8 E1 9D */	bl xIniGetInt__FP8xIniFilePci
/* 800A2950 0009FA30  3C A0 80 3C */	lis r5, globals@ha
/* 800A2954 0009FA34  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2958 0009FA38  38 C5 05 58 */	addi r6, r5, globals@l
/* 800A295C 0009FA3C  38 A0 00 00 */	li r5, 0x0
/* 800A2960 0009FA40  90 66 08 80 */	stw r3, 0x880(r6)
/* 800A2964 0009FA44  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2968 0009FA48  7F E3 FB 78 */	mr r3, r31
/* 800A296C 0009FA4C  38 84 00 5E */	addi r4, r4, 0x5e
/* 800A2970 0009FA50  4B F8 E1 79 */	bl xIniGetInt__FP8xIniFilePci
/* 800A2974 0009FA54  3C A0 80 3C */	lis r5, globals@ha
/* 800A2978 0009FA58  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A297C 0009FA5C  38 C5 05 58 */	addi r6, r5, globals@l
/* 800A2980 0009FA60  38 A0 00 64 */	li r5, 0x64
/* 800A2984 0009FA64  90 66 08 84 */	stw r3, 0x884(r6)
/* 800A2988 0009FA68  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A298C 0009FA6C  7F E3 FB 78 */	mr r3, r31
/* 800A2990 0009FA70  38 84 00 74 */	addi r4, r4, 0x74
/* 800A2994 0009FA74  4B F8 E1 55 */	bl xIniGetInt__FP8xIniFilePci
/* 800A2998 0009FA78  3C A0 80 3C */	lis r5, globals@ha
/* 800A299C 0009FA7C  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A29A0 0009FA80  38 C5 05 58 */	addi r6, r5, globals@l
/* 800A29A4 0009FA84  38 A0 00 19 */	li r5, 0x19
/* 800A29A8 0009FA88  90 66 08 88 */	stw r3, 0x888(r6)
/* 800A29AC 0009FA8C  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A29B0 0009FA90  7F E3 FB 78 */	mr r3, r31
/* 800A29B4 0009FA94  38 84 00 87 */	addi r4, r4, 0x87
/* 800A29B8 0009FA98  4B F8 E1 31 */	bl xIniGetInt__FP8xIniFilePci
/* 800A29BC 0009FA9C  3C A0 80 3C */	lis r5, globals@ha
/* 800A29C0 0009FAA0  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A29C4 0009FAA4  38 C5 05 58 */	addi r6, r5, globals@l
/* 800A29C8 0009FAA8  38 A0 00 0A */	li r5, 0xa
/* 800A29CC 0009FAAC  90 66 08 8C */	stw r3, 0x88c(r6)
/* 800A29D0 0009FAB0  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A29D4 0009FAB4  7F E3 FB 78 */	mr r3, r31
/* 800A29D8 0009FAB8  38 84 00 98 */	addi r4, r4, 0x98
/* 800A29DC 0009FABC  4B F8 E1 0D */	bl xIniGetInt__FP8xIniFilePci
/* 800A29E0 0009FAC0  3C A0 80 3C */	lis r5, globals@ha
/* 800A29E4 0009FAC4  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A29E8 0009FAC8  38 C5 05 58 */	addi r6, r5, globals@l
/* 800A29EC 0009FACC  38 A0 00 05 */	li r5, 0x5
/* 800A29F0 0009FAD0  90 66 08 90 */	stw r3, 0x890(r6)
/* 800A29F4 0009FAD4  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A29F8 0009FAD8  7F E3 FB 78 */	mr r3, r31
/* 800A29FC 0009FADC  38 84 00 AA */	addi r4, r4, 0xaa
/* 800A2A00 0009FAE0  4B F8 E0 E9 */	bl xIniGetInt__FP8xIniFilePci
/* 800A2A04 0009FAE4  3C A0 80 3C */	lis r5, globals@ha
/* 800A2A08 0009FAE8  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2A0C 0009FAEC  38 C5 05 58 */	addi r6, r5, globals@l
/* 800A2A10 0009FAF0  38 A0 00 01 */	li r5, 0x1
/* 800A2A14 0009FAF4  90 66 08 94 */	stw r3, 0x894(r6)
/* 800A2A18 0009FAF8  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2A1C 0009FAFC  7F E3 FB 78 */	mr r3, r31
/* 800A2A20 0009FB00  38 84 00 BD */	addi r4, r4, 0xbd
/* 800A2A24 0009FB04  4B F8 E0 C5 */	bl xIniGetInt__FP8xIniFilePci
/* 800A2A28 0009FB08  3C A0 80 3C */	lis r5, globals@ha
/* 800A2A2C 0009FB0C  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2A30 0009FB10  38 C5 05 58 */	addi r6, r5, globals@l
/* 800A2A34 0009FB14  38 A0 00 00 */	li r5, 0x0
/* 800A2A38 0009FB18  90 66 08 98 */	stw r3, 0x898(r6)
/* 800A2A3C 0009FB1C  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2A40 0009FB20  7F E3 FB 78 */	mr r3, r31
/* 800A2A44 0009FB24  38 84 00 CD */	addi r4, r4, 0xcd
/* 800A2A48 0009FB28  4B F8 E0 A1 */	bl xIniGetInt__FP8xIniFilePci
/* 800A2A4C 0009FB2C  3C A0 80 3C */	lis r5, globals@ha
/* 800A2A50 0009FB30  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2A54 0009FB34  38 C5 05 58 */	addi r6, r5, globals@l
/* 800A2A58 0009FB38  38 A0 00 00 */	li r5, 0x0
/* 800A2A5C 0009FB3C  90 66 08 9C */	stw r3, 0x89c(r6)
/* 800A2A60 0009FB40  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2A64 0009FB44  7F E3 FB 78 */	mr r3, r31
/* 800A2A68 0009FB48  38 84 00 E0 */	addi r4, r4, 0xe0
/* 800A2A6C 0009FB4C  4B F8 E0 7D */	bl xIniGetInt__FP8xIniFilePci
/* 800A2A70 0009FB50  3C A0 80 3C */	lis r5, globals@ha
/* 800A2A74 0009FB54  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2A78 0009FB58  38 C5 05 58 */	addi r6, r5, globals@l
/* 800A2A7C 0009FB5C  38 A0 00 02 */	li r5, 0x2
/* 800A2A80 0009FB60  90 66 08 A0 */	stw r3, 0x8a0(r6)
/* 800A2A84 0009FB64  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2A88 0009FB68  7F E3 FB 78 */	mr r3, r31
/* 800A2A8C 0009FB6C  38 84 00 F3 */	addi r4, r4, 0xf3
/* 800A2A90 0009FB70  4B F8 E0 59 */	bl xIniGetInt__FP8xIniFilePci
/* 800A2A94 0009FB74  3C A0 80 3C */	lis r5, globals@ha
/* 800A2A98 0009FB78  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2A9C 0009FB7C  38 C5 05 58 */	addi r6, r5, globals@l
/* 800A2AA0 0009FB80  38 A0 00 03 */	li r5, 0x3
/* 800A2AA4 0009FB84  90 66 08 A4 */	stw r3, 0x8a4(r6)
/* 800A2AA8 0009FB88  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2AAC 0009FB8C  7F E3 FB 78 */	mr r3, r31
/* 800A2AB0 0009FB90  38 84 01 06 */	addi r4, r4, 0x106
/* 800A2AB4 0009FB94  4B F8 E0 35 */	bl xIniGetInt__FP8xIniFilePci
/* 800A2AB8 0009FB98  3C A0 80 3C */	lis r5, globals@ha
/* 800A2ABC 0009FB9C  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2AC0 0009FBA0  38 C5 05 58 */	addi r6, r5, globals@l
/* 800A2AC4 0009FBA4  38 A0 00 03 */	li r5, 0x3
/* 800A2AC8 0009FBA8  90 66 08 A8 */	stw r3, 0x8a8(r6)
/* 800A2ACC 0009FBAC  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2AD0 0009FBB0  7F E3 FB 78 */	mr r3, r31
/* 800A2AD4 0009FBB4  38 84 01 19 */	addi r4, r4, 0x119
/* 800A2AD8 0009FBB8  4B F8 E0 11 */	bl xIniGetInt__FP8xIniFilePci
/* 800A2ADC 0009FBBC  3C A0 80 3C */	lis r5, globals@ha
/* 800A2AE0 0009FBC0  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2AE4 0009FBC4  38 C5 05 58 */	addi r6, r5, globals@l
/* 800A2AE8 0009FBC8  38 A0 00 05 */	li r5, 0x5
/* 800A2AEC 0009FBCC  90 66 08 AC */	stw r3, 0x8ac(r6)
/* 800A2AF0 0009FBD0  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2AF4 0009FBD4  7F E3 FB 78 */	mr r3, r31
/* 800A2AF8 0009FBD8  38 84 01 2C */	addi r4, r4, 0x12c
/* 800A2AFC 0009FBDC  4B F8 DF ED */	bl xIniGetInt__FP8xIniFilePci
/* 800A2B00 0009FBE0  3C A0 80 3C */	lis r5, globals@ha
/* 800A2B04 0009FBE4  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2B08 0009FBE8  38 C5 05 58 */	addi r6, r5, globals@l
/* 800A2B0C 0009FBEC  38 A0 00 0A */	li r5, 0xa
/* 800A2B10 0009FBF0  90 66 08 B0 */	stw r3, 0x8b0(r6)
/* 800A2B14 0009FBF4  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2B18 0009FBF8  7F E3 FB 78 */	mr r3, r31
/* 800A2B1C 0009FBFC  38 84 01 3F */	addi r4, r4, 0x13f
/* 800A2B20 0009FC00  4B F8 DF C9 */	bl xIniGetInt__FP8xIniFilePci
/* 800A2B24 0009FC04  3C A0 80 3C */	lis r5, globals@ha
/* 800A2B28 0009FC08  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2B2C 0009FC0C  38 C5 05 58 */	addi r6, r5, globals@l
/* 800A2B30 0009FC10  38 A0 00 0F */	li r5, 0xf
/* 800A2B34 0009FC14  90 66 08 B4 */	stw r3, 0x8b4(r6)
/* 800A2B38 0009FC18  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2B3C 0009FC1C  7F E3 FB 78 */	mr r3, r31
/* 800A2B40 0009FC20  38 84 01 52 */	addi r4, r4, 0x152
/* 800A2B44 0009FC24  4B F8 DF A5 */	bl xIniGetInt__FP8xIniFilePci
/* 800A2B48 0009FC28  3C A0 80 3C */	lis r5, globals@ha
/* 800A2B4C 0009FC2C  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2B50 0009FC30  38 C5 05 58 */	addi r6, r5, globals@l
/* 800A2B54 0009FC34  38 A0 00 14 */	li r5, 0x14
/* 800A2B58 0009FC38  90 66 08 B8 */	stw r3, 0x8b8(r6)
/* 800A2B5C 0009FC3C  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2B60 0009FC40  7F E3 FB 78 */	mr r3, r31
/* 800A2B64 0009FC44  38 84 01 65 */	addi r4, r4, 0x165
/* 800A2B68 0009FC48  4B F8 DF 81 */	bl xIniGetInt__FP8xIniFilePci
/* 800A2B6C 0009FC4C  3C A0 80 3C */	lis r5, globals@ha
/* 800A2B70 0009FC50  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2B74 0009FC54  38 C5 05 58 */	addi r6, r5, globals@l
/* 800A2B78 0009FC58  38 A0 00 19 */	li r5, 0x19
/* 800A2B7C 0009FC5C  90 66 08 BC */	stw r3, 0x8bc(r6)
/* 800A2B80 0009FC60  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2B84 0009FC64  7F E3 FB 78 */	mr r3, r31
/* 800A2B88 0009FC68  38 84 01 78 */	addi r4, r4, 0x178
/* 800A2B8C 0009FC6C  4B F8 DF 5D */	bl xIniGetInt__FP8xIniFilePci
/* 800A2B90 0009FC70  3C A0 80 3C */	lis r5, globals@ha
/* 800A2B94 0009FC74  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2B98 0009FC78  38 C5 05 58 */	addi r6, r5, globals@l
/* 800A2B9C 0009FC7C  38 A0 00 1E */	li r5, 0x1e
/* 800A2BA0 0009FC80  90 66 08 C0 */	stw r3, 0x8c0(r6)
/* 800A2BA4 0009FC84  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2BA8 0009FC88  7F E3 FB 78 */	mr r3, r31
/* 800A2BAC 0009FC8C  38 84 01 8B */	addi r4, r4, 0x18b
/* 800A2BB0 0009FC90  4B F8 DF 39 */	bl xIniGetInt__FP8xIniFilePci
/* 800A2BB4 0009FC94  3C A0 80 3C */	lis r5, globals@ha
/* 800A2BB8 0009FC98  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2BBC 0009FC9C  38 C5 05 58 */	addi r6, r5, globals@l
/* 800A2BC0 0009FCA0  38 A0 00 28 */	li r5, 0x28
/* 800A2BC4 0009FCA4  90 66 08 C4 */	stw r3, 0x8c4(r6)
/* 800A2BC8 0009FCA8  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2BCC 0009FCAC  7F E3 FB 78 */	mr r3, r31
/* 800A2BD0 0009FCB0  38 84 01 9F */	addi r4, r4, 0x19f
/* 800A2BD4 0009FCB4  4B F8 DF 15 */	bl xIniGetInt__FP8xIniFilePci
/* 800A2BD8 0009FCB8  3C A0 80 3C */	lis r5, globals@ha
/* 800A2BDC 0009FCBC  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2BE0 0009FCC0  38 C5 05 58 */	addi r6, r5, globals@l
/* 800A2BE4 0009FCC4  38 A0 00 32 */	li r5, 0x32
/* 800A2BE8 0009FCC8  90 66 08 C8 */	stw r3, 0x8c8(r6)
/* 800A2BEC 0009FCCC  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2BF0 0009FCD0  7F E3 FB 78 */	mr r3, r31
/* 800A2BF4 0009FCD4  38 84 01 B3 */	addi r4, r4, 0x1b3
/* 800A2BF8 0009FCD8  4B F8 DE F1 */	bl xIniGetInt__FP8xIniFilePci
/* 800A2BFC 0009FCDC  3C A0 80 3C */	lis r5, globals@ha
/* 800A2C00 0009FCE0  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2C04 0009FCE4  38 C5 05 58 */	addi r6, r5, globals@l
/* 800A2C08 0009FCE8  38 A0 00 3C */	li r5, 0x3c
/* 800A2C0C 0009FCEC  90 66 08 CC */	stw r3, 0x8cc(r6)
/* 800A2C10 0009FCF0  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2C14 0009FCF4  7F E3 FB 78 */	mr r3, r31
/* 800A2C18 0009FCF8  38 84 01 C7 */	addi r4, r4, 0x1c7
/* 800A2C1C 0009FCFC  4B F8 DE CD */	bl xIniGetInt__FP8xIniFilePci
/* 800A2C20 0009FD00  3C A0 80 3C */	lis r5, globals@ha
/* 800A2C24 0009FD04  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2C28 0009FD08  38 C5 05 58 */	addi r6, r5, globals@l
/* 800A2C2C 0009FD0C  38 A0 00 4B */	li r5, 0x4b
/* 800A2C30 0009FD10  90 66 08 D0 */	stw r3, 0x8d0(r6)
/* 800A2C34 0009FD14  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2C38 0009FD18  7F E3 FB 78 */	mr r3, r31
/* 800A2C3C 0009FD1C  38 84 01 DB */	addi r4, r4, 0x1db
/* 800A2C40 0009FD20  4B F8 DE A9 */	bl xIniGetInt__FP8xIniFilePci
/* 800A2C44 0009FD24  3C A0 80 3C */	lis r5, globals@ha
/* 800A2C48 0009FD28  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2C4C 0009FD2C  38 C5 05 58 */	addi r6, r5, globals@l
/* 800A2C50 0009FD30  38 A0 00 64 */	li r5, 0x64
/* 800A2C54 0009FD34  90 66 08 D4 */	stw r3, 0x8d4(r6)
/* 800A2C58 0009FD38  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2C5C 0009FD3C  7F E3 FB 78 */	mr r3, r31
/* 800A2C60 0009FD40  38 84 01 EF */	addi r4, r4, 0x1ef
/* 800A2C64 0009FD44  4B F8 DE 85 */	bl xIniGetInt__FP8xIniFilePci
/* 800A2C68 0009FD48  3C A0 80 3C */	lis r5, globals@ha
/* 800A2C6C 0009FD4C  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2C70 0009FD50  38 A5 05 58 */	addi r5, r5, globals@l
/* 800A2C74 0009FD54  90 65 08 D8 */	stw r3, 0x8d8(r5)
/* 800A2C78 0009FD58  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2C7C 0009FD5C  7F E3 FB 78 */	mr r3, r31
/* 800A2C80 0009FD60  C0 22 92 E0 */	lfs f1, "@1002"@sda21(r2)
/* 800A2C84 0009FD64  38 84 02 03 */	addi r4, r4, 0x203
/* 800A2C88 0009FD68  4B F8 DE BD */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A2C8C 0009FD6C  3C 60 80 3C */	lis r3, globals@ha
/* 800A2C90 0009FD70  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2C94 0009FD74  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A2C98 0009FD78  7F E3 FB 78 */	mr r3, r31
/* 800A2C9C 0009FD7C  D0 25 08 DC */	stfs f1, 0x8dc(r5)
/* 800A2CA0 0009FD80  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2CA4 0009FD84  38 84 02 10 */	addi r4, r4, 0x210
/* 800A2CA8 0009FD88  C0 22 92 E4 */	lfs f1, "@1003"@sda21(r2)
/* 800A2CAC 0009FD8C  4B F8 DE 99 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A2CB0 0009FD90  3C 60 80 3C */	lis r3, globals@ha
/* 800A2CB4 0009FD94  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2CB8 0009FD98  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A2CBC 0009FD9C  7F E3 FB 78 */	mr r3, r31
/* 800A2CC0 0009FDA0  D0 25 08 78 */	stfs f1, 0x878(r5)
/* 800A2CC4 0009FDA4  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2CC8 0009FDA8  38 84 02 1D */	addi r4, r4, 0x21d
/* 800A2CCC 0009FDAC  C0 22 92 E8 */	lfs f1, "@1004"@sda21(r2)
/* 800A2CD0 0009FDB0  4B F8 DE 75 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A2CD4 0009FDB4  3C 60 80 3C */	lis r3, globals@ha
/* 800A2CD8 0009FDB8  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2CDC 0009FDBC  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A2CE0 0009FDC0  7F E3 FB 78 */	mr r3, r31
/* 800A2CE4 0009FDC4  D0 25 08 7C */	stfs f1, 0x87c(r5)
/* 800A2CE8 0009FDC8  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2CEC 0009FDCC  38 84 02 2A */	addi r4, r4, 0x22a
/* 800A2CF0 0009FDD0  C0 22 92 EC */	lfs f1, "@1005"@sda21(r2)
/* 800A2CF4 0009FDD4  4B F8 DE 51 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A2CF8 0009FDD8  3C 60 80 3C */	lis r3, globals@ha
/* 800A2CFC 0009FDDC  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2D00 0009FDE0  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A2D04 0009FDE4  7F E3 FB 78 */	mr r3, r31
/* 800A2D08 0009FDE8  D0 25 09 28 */	stfs f1, 0x928(r5)
/* 800A2D0C 0009FDEC  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2D10 0009FDF0  38 84 02 36 */	addi r4, r4, 0x236
/* 800A2D14 0009FDF4  C0 22 92 F0 */	lfs f1, "@1006"@sda21(r2)
/* 800A2D18 0009FDF8  4B F8 DE 2D */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A2D1C 0009FDFC  3C 60 80 3C */	lis r3, globals@ha
/* 800A2D20 0009FE00  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2D24 0009FE04  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A2D28 0009FE08  7F E3 FB 78 */	mr r3, r31
/* 800A2D2C 0009FE0C  D0 25 09 30 */	stfs f1, 0x930(r5)
/* 800A2D30 0009FE10  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2D34 0009FE14  38 84 02 43 */	addi r4, r4, 0x243
/* 800A2D38 0009FE18  C0 22 92 F0 */	lfs f1, "@1006"@sda21(r2)
/* 800A2D3C 0009FE1C  4B F8 DE 09 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A2D40 0009FE20  3C 60 80 3C */	lis r3, globals@ha
/* 800A2D44 0009FE24  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2D48 0009FE28  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A2D4C 0009FE2C  7F E3 FB 78 */	mr r3, r31
/* 800A2D50 0009FE30  D0 25 09 34 */	stfs f1, 0x934(r5)
/* 800A2D54 0009FE34  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2D58 0009FE38  38 84 02 51 */	addi r4, r4, 0x251
/* 800A2D5C 0009FE3C  C0 22 92 F4 */	lfs f1, "@1007"@sda21(r2)
/* 800A2D60 0009FE40  4B F8 DD E5 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A2D64 0009FE44  3C 60 80 3C */	lis r3, globals@ha
/* 800A2D68 0009FE48  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2D6C 0009FE4C  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A2D70 0009FE50  7F E3 FB 78 */	mr r3, r31
/* 800A2D74 0009FE54  D0 25 09 2C */	stfs f1, 0x92c(r5)
/* 800A2D78 0009FE58  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2D7C 0009FE5C  38 84 02 5F */	addi r4, r4, 0x25f
/* 800A2D80 0009FE60  C0 22 92 F8 */	lfs f1, "@1008"@sda21(r2)
/* 800A2D84 0009FE64  4B F8 DD C1 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A2D88 0009FE68  3C 60 80 3C */	lis r3, globals@ha
/* 800A2D8C 0009FE6C  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2D90 0009FE70  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A2D94 0009FE74  7F E3 FB 78 */	mr r3, r31
/* 800A2D98 0009FE78  D0 25 09 38 */	stfs f1, 0x938(r5)
/* 800A2D9C 0009FE7C  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2DA0 0009FE80  38 84 02 6E */	addi r4, r4, 0x26e
/* 800A2DA4 0009FE84  C0 22 92 FC */	lfs f1, "@1009"@sda21(r2)
/* 800A2DA8 0009FE88  4B F8 DD 9D */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A2DAC 0009FE8C  3C 60 80 3C */	lis r3, globals@ha
/* 800A2DB0 0009FE90  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2DB4 0009FE94  3B 23 05 58 */	addi r25, r3, globals@l
/* 800A2DB8 0009FE98  7F E3 FB 78 */	mr r3, r31
/* 800A2DBC 0009FE9C  D0 39 09 3C */	stfs f1, 0x93c(r25)
/* 800A2DC0 0009FEA0  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2DC4 0009FEA4  38 84 02 7E */	addi r4, r4, 0x27e
/* 800A2DC8 0009FEA8  C0 22 93 00 */	lfs f1, "@1010"@sda21(r2)
/* 800A2DCC 0009FEAC  4B F8 DD 79 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A2DD0 0009FEB0  3C 60 80 3C */	lis r3, globals@ha
/* 800A2DD4 0009FEB4  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2DD8 0009FEB8  3B 03 05 58 */	addi r24, r3, globals@l
/* 800A2DDC 0009FEBC  7F E3 FB 78 */	mr r3, r31
/* 800A2DE0 0009FEC0  D0 38 09 40 */	stfs f1, 0x940(r24)
/* 800A2DE4 0009FEC4  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2DE8 0009FEC8  38 84 02 8E */	addi r4, r4, 0x28e
/* 800A2DEC 0009FECC  C0 22 92 EC */	lfs f1, "@1005"@sda21(r2)
/* 800A2DF0 0009FED0  4B F8 DD 55 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A2DF4 0009FED4  3C 80 80 3C */	lis r4, globals@ha
/* 800A2DF8 0009FED8  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A2DFC 0009FEDC  38 84 05 58 */	addi r4, r4, globals@l
/* 800A2E00 0009FEE0  C0 79 09 3C */	lfs f3, 0x93c(r25)
/* 800A2E04 0009FEE4  D0 24 09 44 */	stfs f1, 0x944(r4)
/* 800A2E08 0009FEE8  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A2E0C 0009FEEC  C0 18 09 40 */	lfs f0, 0x940(r24)
/* 800A2E10 0009FEF0  7F E3 FB 78 */	mr r3, r31
/* 800A2E14 0009FEF4  C0 42 92 D8 */	lfs f2, "@909"@sda21(r2)
/* 800A2E18 0009FEF8  38 84 02 9C */	addi r4, r4, 0x29c
/* 800A2E1C 0009FEFC  EC 23 00 B2 */	fmuls f1, f3, f2
/* 800A2E20 0009FF00  EC 00 00 B2 */	fmuls f0, f0, f2
/* 800A2E24 0009FF04  D0 39 09 3C */	stfs f1, 0x93c(r25)
/* 800A2E28 0009FF08  D0 18 09 40 */	stfs f0, 0x940(r24)
/* 800A2E2C 0009FF0C  C0 22 92 E0 */	lfs f1, "@1002"@sda21(r2)
/* 800A2E30 0009FF10  4B F8 DD 15 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A2E34 0009FF14  3C 60 80 3C */	lis r3, globals@ha
/* 800A2E38 0009FF18  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2E3C 0009FF1C  3B 23 05 58 */	addi r25, r3, globals@l
/* 800A2E40 0009FF20  7F E3 FB 78 */	mr r3, r31
/* 800A2E44 0009FF24  D0 39 09 48 */	stfs f1, 0x948(r25)
/* 800A2E48 0009FF28  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2E4C 0009FF2C  38 84 02 B1 */	addi r4, r4, 0x2b1
/* 800A2E50 0009FF30  C0 22 93 04 */	lfs f1, "@1011"@sda21(r2)
/* 800A2E54 0009FF34  4B F8 DC F1 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A2E58 0009FF38  3C 60 80 3C */	lis r3, globals@ha
/* 800A2E5C 0009FF3C  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2E60 0009FF40  3B 03 05 58 */	addi r24, r3, globals@l
/* 800A2E64 0009FF44  7F E3 FB 78 */	mr r3, r31
/* 800A2E68 0009FF48  D0 38 09 4C */	stfs f1, 0x94c(r24)
/* 800A2E6C 0009FF4C  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2E70 0009FF50  38 84 02 C6 */	addi r4, r4, 0x2c6
/* 800A2E74 0009FF54  C0 22 92 EC */	lfs f1, "@1005"@sda21(r2)
/* 800A2E78 0009FF58  4B F8 DC CD */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A2E7C 0009FF5C  3C 80 80 3C */	lis r4, globals@ha
/* 800A2E80 0009FF60  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A2E84 0009FF64  38 84 05 58 */	addi r4, r4, globals@l
/* 800A2E88 0009FF68  C0 79 09 48 */	lfs f3, 0x948(r25)
/* 800A2E8C 0009FF6C  D0 24 09 50 */	stfs f1, 0x950(r4)
/* 800A2E90 0009FF70  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A2E94 0009FF74  C0 18 09 4C */	lfs f0, 0x94c(r24)
/* 800A2E98 0009FF78  7F E3 FB 78 */	mr r3, r31
/* 800A2E9C 0009FF7C  C0 42 92 D8 */	lfs f2, "@909"@sda21(r2)
/* 800A2EA0 0009FF80  38 84 02 D9 */	addi r4, r4, 0x2d9
/* 800A2EA4 0009FF84  EC 23 00 B2 */	fmuls f1, f3, f2
/* 800A2EA8 0009FF88  EC 00 00 B2 */	fmuls f0, f0, f2
/* 800A2EAC 0009FF8C  D0 39 09 48 */	stfs f1, 0x948(r25)
/* 800A2EB0 0009FF90  D0 18 09 4C */	stfs f0, 0x94c(r24)
/* 800A2EB4 0009FF94  C0 22 93 08 */	lfs f1, "@1012"@sda21(r2)
/* 800A2EB8 0009FF98  4B F8 DC 8D */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A2EBC 0009FF9C  3C 60 80 3C */	lis r3, globals@ha
/* 800A2EC0 0009FFA0  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2EC4 0009FFA4  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A2EC8 0009FFA8  7F E3 FB 78 */	mr r3, r31
/* 800A2ECC 0009FFAC  D0 25 08 E8 */	stfs f1, 0x8e8(r5)
/* 800A2ED0 0009FFB0  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2ED4 0009FFB4  38 84 02 E9 */	addi r4, r4, 0x2e9
/* 800A2ED8 0009FFB8  C0 22 92 E0 */	lfs f1, "@1002"@sda21(r2)
/* 800A2EDC 0009FFBC  4B F8 DC 69 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A2EE0 0009FFC0  3C 60 80 3C */	lis r3, globals@ha
/* 800A2EE4 0009FFC4  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2EE8 0009FFC8  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A2EEC 0009FFCC  7F E3 FB 78 */	mr r3, r31
/* 800A2EF0 0009FFD0  D0 25 08 EC */	stfs f1, 0x8ec(r5)
/* 800A2EF4 0009FFD4  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2EF8 0009FFD8  38 84 02 FD */	addi r4, r4, 0x2fd
/* 800A2EFC 0009FFDC  C0 22 92 E0 */	lfs f1, "@1002"@sda21(r2)
/* 800A2F00 0009FFE0  4B F8 DC 45 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A2F04 0009FFE4  3C 60 80 3C */	lis r3, globals@ha
/* 800A2F08 0009FFE8  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2F0C 0009FFEC  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A2F10 0009FFF0  7F E3 FB 78 */	mr r3, r31
/* 800A2F14 0009FFF4  D0 25 08 F0 */	stfs f1, 0x8f0(r5)
/* 800A2F18 0009FFF8  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2F1C 0009FFFC  38 84 03 0E */	addi r4, r4, 0x30e
/* 800A2F20 000A0000  C0 22 93 0C */	lfs f1, "@1013"@sda21(r2)
/* 800A2F24 000A0004  4B F8 DC 21 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A2F28 000A0008  3C 60 80 3C */	lis r3, globals@ha
/* 800A2F2C 000A000C  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2F30 000A0010  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A2F34 000A0014  7F E3 FB 78 */	mr r3, r31
/* 800A2F38 000A0018  D0 25 08 F4 */	stfs f1, 0x8f4(r5)
/* 800A2F3C 000A001C  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2F40 000A0020  38 84 03 20 */	addi r4, r4, 0x320
/* 800A2F44 000A0024  C0 22 93 0C */	lfs f1, "@1013"@sda21(r2)
/* 800A2F48 000A0028  4B F8 DB FD */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A2F4C 000A002C  3C 60 80 3C */	lis r3, globals@ha
/* 800A2F50 000A0030  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2F54 000A0034  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A2F58 000A0038  7F E3 FB 78 */	mr r3, r31
/* 800A2F5C 000A003C  D0 25 08 F8 */	stfs f1, 0x8f8(r5)
/* 800A2F60 000A0040  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2F64 000A0044  38 84 03 38 */	addi r4, r4, 0x338
/* 800A2F68 000A0048  C0 22 92 E0 */	lfs f1, "@1002"@sda21(r2)
/* 800A2F6C 000A004C  4B F8 DB D9 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A2F70 000A0050  3C 60 80 3C */	lis r3, globals@ha
/* 800A2F74 000A0054  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2F78 000A0058  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A2F7C 000A005C  7F E3 FB 78 */	mr r3, r31
/* 800A2F80 000A0060  D0 25 09 54 */	stfs f1, 0x954(r5)
/* 800A2F84 000A0064  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2F88 000A0068  38 84 03 4E */	addi r4, r4, 0x34e
/* 800A2F8C 000A006C  C0 22 92 DC */	lfs f1, "@1001"@sda21(r2)
/* 800A2F90 000A0070  4B F8 DB B5 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A2F94 000A0074  3C 60 80 3C */	lis r3, globals@ha
/* 800A2F98 000A0078  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2F9C 000A007C  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A2FA0 000A0080  7F E3 FB 78 */	mr r3, r31
/* 800A2FA4 000A0084  D0 25 09 58 */	stfs f1, 0x958(r5)
/* 800A2FA8 000A0088  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2FAC 000A008C  38 84 03 68 */	addi r4, r4, 0x368
/* 800A2FB0 000A0090  C0 22 92 E0 */	lfs f1, "@1002"@sda21(r2)
/* 800A2FB4 000A0094  4B F8 DB 91 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A2FB8 000A0098  3C 60 80 3C */	lis r3, globals@ha
/* 800A2FBC 000A009C  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2FC0 000A00A0  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A2FC4 000A00A4  7F E3 FB 78 */	mr r3, r31
/* 800A2FC8 000A00A8  D0 25 09 5C */	stfs f1, 0x95c(r5)
/* 800A2FCC 000A00AC  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2FD0 000A00B0  38 84 03 80 */	addi r4, r4, 0x380
/* 800A2FD4 000A00B4  C0 22 92 E8 */	lfs f1, "@1004"@sda21(r2)
/* 800A2FD8 000A00B8  4B F8 DB 6D */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A2FDC 000A00BC  3C 60 80 3C */	lis r3, globals@ha
/* 800A2FE0 000A00C0  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A2FE4 000A00C4  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A2FE8 000A00C8  7F E3 FB 78 */	mr r3, r31
/* 800A2FEC 000A00CC  D0 25 09 60 */	stfs f1, 0x960(r5)
/* 800A2FF0 000A00D0  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A2FF4 000A00D4  38 84 03 98 */	addi r4, r4, 0x398
/* 800A2FF8 000A00D8  C0 22 92 DC */	lfs f1, "@1001"@sda21(r2)
/* 800A2FFC 000A00DC  4B F8 DB 49 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3000 000A00E0  3C 60 80 3C */	lis r3, globals@ha
/* 800A3004 000A00E4  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3008 000A00E8  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A300C 000A00EC  7F E3 FB 78 */	mr r3, r31
/* 800A3010 000A00F0  D0 25 09 64 */	stfs f1, 0x964(r5)
/* 800A3014 000A00F4  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3018 000A00F8  38 84 03 B2 */	addi r4, r4, 0x3b2
/* 800A301C 000A00FC  C0 22 92 DC */	lfs f1, "@1001"@sda21(r2)
/* 800A3020 000A0100  4B F8 DB 25 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3024 000A0104  3C 60 80 3C */	lis r3, globals@ha
/* 800A3028 000A0108  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A302C 000A010C  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3030 000A0110  7F E3 FB 78 */	mr r3, r31
/* 800A3034 000A0114  D0 25 09 68 */	stfs f1, 0x968(r5)
/* 800A3038 000A0118  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A303C 000A011C  38 84 03 CA */	addi r4, r4, 0x3ca
/* 800A3040 000A0120  C0 22 92 F8 */	lfs f1, "@1008"@sda21(r2)
/* 800A3044 000A0124  4B F8 DB 01 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3048 000A0128  3C 60 80 3C */	lis r3, globals@ha
/* 800A304C 000A012C  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3050 000A0130  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3054 000A0134  7F E3 FB 78 */	mr r3, r31
/* 800A3058 000A0138  D0 25 09 6C */	stfs f1, 0x96c(r5)
/* 800A305C 000A013C  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3060 000A0140  38 84 03 E2 */	addi r4, r4, 0x3e2
/* 800A3064 000A0144  C0 22 93 10 */	lfs f1, "@1014"@sda21(r2)
/* 800A3068 000A0148  4B F8 DA DD */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A306C 000A014C  3C 60 80 3C */	lis r3, globals@ha
/* 800A3070 000A0150  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3074 000A0154  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3078 000A0158  7F E3 FB 78 */	mr r3, r31
/* 800A307C 000A015C  D0 25 09 70 */	stfs f1, 0x970(r5)
/* 800A3080 000A0160  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3084 000A0164  38 84 03 FE */	addi r4, r4, 0x3fe
/* 800A3088 000A0168  C0 22 93 14 */	lfs f1, "@1015"@sda21(r2)
/* 800A308C 000A016C  4B F8 DA B9 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3090 000A0170  3C 60 80 3C */	lis r3, globals@ha
/* 800A3094 000A0174  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3098 000A0178  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A309C 000A017C  7F E3 FB 78 */	mr r3, r31
/* 800A30A0 000A0180  D0 25 09 74 */	stfs f1, 0x974(r5)
/* 800A30A4 000A0184  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A30A8 000A0188  38 84 04 13 */	addi r4, r4, 0x413
/* 800A30AC 000A018C  C0 22 92 F0 */	lfs f1, "@1006"@sda21(r2)
/* 800A30B0 000A0190  4B F8 DA 95 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A30B4 000A0194  3C 60 80 3C */	lis r3, globals@ha
/* 800A30B8 000A0198  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A30BC 000A019C  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A30C0 000A01A0  7F E3 FB 78 */	mr r3, r31
/* 800A30C4 000A01A4  D0 25 09 78 */	stfs f1, 0x978(r5)
/* 800A30C8 000A01A8  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A30CC 000A01AC  38 84 04 2E */	addi r4, r4, 0x42e
/* 800A30D0 000A01B0  C0 22 92 E4 */	lfs f1, "@1003"@sda21(r2)
/* 800A30D4 000A01B4  4B F8 DA 71 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A30D8 000A01B8  3C 60 80 3C */	lis r3, globals@ha
/* 800A30DC 000A01BC  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A30E0 000A01C0  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A30E4 000A01C4  7F E3 FB 78 */	mr r3, r31
/* 800A30E8 000A01C8  D0 25 09 7C */	stfs f1, 0x97c(r5)
/* 800A30EC 000A01CC  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A30F0 000A01D0  38 84 04 41 */	addi r4, r4, 0x441
/* 800A30F4 000A01D4  C0 22 93 04 */	lfs f1, "@1011"@sda21(r2)
/* 800A30F8 000A01D8  4B F8 DA 4D */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A30FC 000A01DC  3C 60 80 3C */	lis r3, globals@ha
/* 800A3100 000A01E0  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3104 000A01E4  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3108 000A01E8  7F E3 FB 78 */	mr r3, r31
/* 800A310C 000A01EC  D0 25 09 80 */	stfs f1, 0x980(r5)
/* 800A3110 000A01F0  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3114 000A01F4  38 84 04 54 */	addi r4, r4, 0x454
/* 800A3118 000A01F8  C0 22 93 04 */	lfs f1, "@1011"@sda21(r2)
/* 800A311C 000A01FC  4B F8 DA 29 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3120 000A0200  3C 60 80 3C */	lis r3, globals@ha
/* 800A3124 000A0204  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3128 000A0208  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A312C 000A020C  7F E3 FB 78 */	mr r3, r31
/* 800A3130 000A0210  D0 25 09 84 */	stfs f1, 0x984(r5)
/* 800A3134 000A0214  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3138 000A0218  38 84 04 66 */	addi r4, r4, 0x466
/* 800A313C 000A021C  C0 22 93 18 */	lfs f1, "@1016"@sda21(r2)
/* 800A3140 000A0220  4B F8 DA 05 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3144 000A0224  3C 60 80 3C */	lis r3, globals@ha
/* 800A3148 000A0228  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A314C 000A022C  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3150 000A0230  7F E3 FB 78 */	mr r3, r31
/* 800A3154 000A0234  D0 25 09 88 */	stfs f1, 0x988(r5)
/* 800A3158 000A0238  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A315C 000A023C  38 84 04 76 */	addi r4, r4, 0x476
/* 800A3160 000A0240  C0 22 93 1C */	lfs f1, "@1017"@sda21(r2)
/* 800A3164 000A0244  4B F8 D9 E1 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3168 000A0248  3C 60 80 3C */	lis r3, globals@ha
/* 800A316C 000A024C  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3170 000A0250  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3174 000A0254  7F E3 FB 78 */	mr r3, r31
/* 800A3178 000A0258  D0 25 09 8C */	stfs f1, 0x98c(r5)
/* 800A317C 000A025C  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3180 000A0260  38 84 04 8C */	addi r4, r4, 0x48c
/* 800A3184 000A0264  C0 22 93 1C */	lfs f1, "@1017"@sda21(r2)
/* 800A3188 000A0268  4B F8 D9 BD */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A318C 000A026C  3C 60 80 3C */	lis r3, globals@ha
/* 800A3190 000A0270  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3194 000A0274  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3198 000A0278  7F E3 FB 78 */	mr r3, r31
/* 800A319C 000A027C  D0 25 09 90 */	stfs f1, 0x990(r5)
/* 800A31A0 000A0280  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A31A4 000A0284  38 84 04 A3 */	addi r4, r4, 0x4a3
/* 800A31A8 000A0288  C0 22 93 20 */	lfs f1, "@1018"@sda21(r2)
/* 800A31AC 000A028C  4B F8 D9 99 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A31B0 000A0290  3C 60 80 3C */	lis r3, globals@ha
/* 800A31B4 000A0294  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A31B8 000A0298  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A31BC 000A029C  7F E3 FB 78 */	mr r3, r31
/* 800A31C0 000A02A0  D0 25 09 94 */	stfs f1, 0x994(r5)
/* 800A31C4 000A02A4  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A31C8 000A02A8  38 84 04 BA */	addi r4, r4, 0x4ba
/* 800A31CC 000A02AC  C0 22 93 24 */	lfs f1, "@1019"@sda21(r2)
/* 800A31D0 000A02B0  4B F8 D9 75 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A31D4 000A02B4  3C 60 80 3C */	lis r3, globals@ha
/* 800A31D8 000A02B8  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A31DC 000A02BC  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A31E0 000A02C0  7F E3 FB 78 */	mr r3, r31
/* 800A31E4 000A02C4  D0 25 09 98 */	stfs f1, 0x998(r5)
/* 800A31E8 000A02C8  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A31EC 000A02CC  38 84 04 CD */	addi r4, r4, 0x4cd
/* 800A31F0 000A02D0  C0 22 93 28 */	lfs f1, "@1020"@sda21(r2)
/* 800A31F4 000A02D4  4B F8 D9 51 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A31F8 000A02D8  3C 60 80 3C */	lis r3, globals@ha
/* 800A31FC 000A02DC  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3200 000A02E0  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3204 000A02E4  7F E3 FB 78 */	mr r3, r31
/* 800A3208 000A02E8  D0 25 09 9C */	stfs f1, 0x99c(r5)
/* 800A320C 000A02EC  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3210 000A02F0  38 84 04 DE */	addi r4, r4, 0x4de
/* 800A3214 000A02F4  C0 22 92 E4 */	lfs f1, "@1003"@sda21(r2)
/* 800A3218 000A02F8  4B F8 D9 2D */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A321C 000A02FC  3C 60 80 3C */	lis r3, globals@ha
/* 800A3220 000A0300  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3224 000A0304  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3228 000A0308  7F E3 FB 78 */	mr r3, r31
/* 800A322C 000A030C  D0 25 09 A0 */	stfs f1, 0x9a0(r5)
/* 800A3230 000A0310  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3234 000A0314  38 84 04 F3 */	addi r4, r4, 0x4f3
/* 800A3238 000A0318  C0 22 92 E0 */	lfs f1, "@1002"@sda21(r2)
/* 800A323C 000A031C  4B F8 D9 09 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3240 000A0320  3C 60 80 3C */	lis r3, globals@ha
/* 800A3244 000A0324  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3248 000A0328  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A324C 000A032C  7F E3 FB 78 */	mr r3, r31
/* 800A3250 000A0330  D0 25 09 A4 */	stfs f1, 0x9a4(r5)
/* 800A3254 000A0334  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3258 000A0338  38 84 05 09 */	addi r4, r4, 0x509
/* 800A325C 000A033C  C0 22 92 E0 */	lfs f1, "@1002"@sda21(r2)
/* 800A3260 000A0340  4B F8 D8 E5 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3264 000A0344  3C 60 80 3C */	lis r3, globals@ha
/* 800A3268 000A0348  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A326C 000A034C  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3270 000A0350  7F E3 FB 78 */	mr r3, r31
/* 800A3274 000A0354  D0 25 09 A8 */	stfs f1, 0x9a8(r5)
/* 800A3278 000A0358  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A327C 000A035C  38 84 05 1C */	addi r4, r4, 0x51c
/* 800A3280 000A0360  C0 22 92 E8 */	lfs f1, "@1004"@sda21(r2)
/* 800A3284 000A0364  4B F8 D8 C1 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3288 000A0368  3C 60 80 3C */	lis r3, globals@ha
/* 800A328C 000A036C  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3290 000A0370  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3294 000A0374  7F E3 FB 78 */	mr r3, r31
/* 800A3298 000A0378  D0 25 09 AC */	stfs f1, 0x9ac(r5)
/* 800A329C 000A037C  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A32A0 000A0380  38 84 05 2F */	addi r4, r4, 0x52f
/* 800A32A4 000A0384  C0 22 92 E0 */	lfs f1, "@1002"@sda21(r2)
/* 800A32A8 000A0388  4B F8 D8 9D */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A32AC 000A038C  3C 60 80 3C */	lis r3, globals@ha
/* 800A32B0 000A0390  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A32B4 000A0394  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A32B8 000A0398  7F E3 FB 78 */	mr r3, r31
/* 800A32BC 000A039C  D0 25 09 B0 */	stfs f1, 0x9b0(r5)
/* 800A32C0 000A03A0  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A32C4 000A03A4  38 84 05 45 */	addi r4, r4, 0x545
/* 800A32C8 000A03A8  C0 22 92 E8 */	lfs f1, "@1004"@sda21(r2)
/* 800A32CC 000A03AC  4B F8 D8 79 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A32D0 000A03B0  3C 60 80 3C */	lis r3, globals@ha
/* 800A32D4 000A03B4  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A32D8 000A03B8  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A32DC 000A03BC  7F E3 FB 78 */	mr r3, r31
/* 800A32E0 000A03C0  D0 25 09 B4 */	stfs f1, 0x9b4(r5)
/* 800A32E4 000A03C4  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A32E8 000A03C8  38 84 05 5B */	addi r4, r4, 0x55b
/* 800A32EC 000A03CC  C0 22 92 E4 */	lfs f1, "@1003"@sda21(r2)
/* 800A32F0 000A03D0  4B F8 D8 55 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A32F4 000A03D4  3C 60 80 3C */	lis r3, globals@ha
/* 800A32F8 000A03D8  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A32FC 000A03DC  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3300 000A03E0  7F E3 FB 78 */	mr r3, r31
/* 800A3304 000A03E4  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3308 000A03E8  D0 25 09 B8 */	stfs f1, 0x9b8(r5)
/* 800A330C 000A03EC  38 84 05 6E */	addi r4, r4, 0x56e
/* 800A3310 000A03F0  38 A0 00 01 */	li r5, 0x1
/* 800A3314 000A03F4  4B F8 D7 D5 */	bl xIniGetInt__FP8xIniFilePci
/* 800A3318 000A03F8  3C A0 80 3C */	lis r5, globals@ha
/* 800A331C 000A03FC  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3320 000A0400  38 C5 05 58 */	addi r6, r5, globals@l
/* 800A3324 000A0404  38 A0 00 00 */	li r5, 0x0
/* 800A3328 000A0408  90 66 08 E4 */	stw r3, 0x8e4(r6)
/* 800A332C 000A040C  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3330 000A0410  7F E3 FB 78 */	mr r3, r31
/* 800A3334 000A0414  38 84 05 7B */	addi r4, r4, 0x57b
/* 800A3338 000A0418  4B F8 D7 B1 */	bl xIniGetInt__FP8xIniFilePci
/* 800A333C 000A041C  3C A0 80 3C */	lis r5, globals@ha
/* 800A3340 000A0420  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3344 000A0424  38 C5 05 58 */	addi r6, r5, globals@l
/* 800A3348 000A0428  38 A0 00 00 */	li r5, 0x0
/* 800A334C 000A042C  90 66 08 FC */	stw r3, 0x8fc(r6)
/* 800A3350 000A0430  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3354 000A0434  7F E3 FB 78 */	mr r3, r31
/* 800A3358 000A0438  38 84 05 8D */	addi r4, r4, 0x58d
/* 800A335C 000A043C  4B F8 D7 8D */	bl xIniGetInt__FP8xIniFilePci
/* 800A3360 000A0440  3C A0 80 3C */	lis r5, globals@ha
/* 800A3364 000A0444  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3368 000A0448  38 C5 05 58 */	addi r6, r5, globals@l
/* 800A336C 000A044C  38 A0 00 00 */	li r5, 0x0
/* 800A3370 000A0450  90 66 09 00 */	stw r3, 0x900(r6)
/* 800A3374 000A0454  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3378 000A0458  7F E3 FB 78 */	mr r3, r31
/* 800A337C 000A045C  38 84 05 A1 */	addi r4, r4, 0x5a1
/* 800A3380 000A0460  4B F8 D7 69 */	bl xIniGetInt__FP8xIniFilePci
/* 800A3384 000A0464  3C A0 80 3C */	lis r5, globals@ha
/* 800A3388 000A0468  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A338C 000A046C  3B 25 05 58 */	addi r25, r5, globals@l
/* 800A3390 000A0470  38 A0 00 00 */	li r5, 0x0
/* 800A3394 000A0474  90 79 09 04 */	stw r3, 0x904(r25)
/* 800A3398 000A0478  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A339C 000A047C  7F E3 FB 78 */	mr r3, r31
/* 800A33A0 000A0480  38 84 05 B5 */	addi r4, r4, 0x5b5
/* 800A33A4 000A0484  4B F8 D7 45 */	bl xIniGetInt__FP8xIniFilePci
/* 800A33A8 000A0488  3C A0 80 3C */	lis r5, globals@ha
/* 800A33AC 000A048C  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A33B0 000A0490  3B 05 05 58 */	addi r24, r5, globals@l
/* 800A33B4 000A0494  38 A0 00 00 */	li r5, 0x0
/* 800A33B8 000A0498  90 78 09 08 */	stw r3, 0x908(r24)
/* 800A33BC 000A049C  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A33C0 000A04A0  7F E3 FB 78 */	mr r3, r31
/* 800A33C4 000A04A4  38 84 05 C6 */	addi r4, r4, 0x5c6
/* 800A33C8 000A04A8  4B F8 D7 21 */	bl xIniGetInt__FP8xIniFilePci
/* 800A33CC 000A04AC  3C 80 80 3C */	lis r4, globals@ha
/* 800A33D0 000A04B0  38 00 00 00 */	li r0, 0x0
/* 800A33D4 000A04B4  38 A4 05 58 */	addi r5, r4, globals@l
/* 800A33D8 000A04B8  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A33DC 000A04BC  90 65 09 0C */	stw r3, 0x90c(r5)
/* 800A33E0 000A04C0  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A33E4 000A04C4  7F E3 FB 78 */	mr r3, r31
/* 800A33E8 000A04C8  90 18 09 08 */	stw r0, 0x908(r24)
/* 800A33EC 000A04CC  38 84 05 E1 */	addi r4, r4, 0x5e1
/* 800A33F0 000A04D0  90 19 09 04 */	stw r0, 0x904(r25)
/* 800A33F4 000A04D4  C0 22 93 2C */	lfs f1, "@1021"@sda21(r2)
/* 800A33F8 000A04D8  4B F8 D7 4D */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A33FC 000A04DC  3C 60 80 3C */	lis r3, globals@ha
/* 800A3400 000A04E0  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3404 000A04E4  3B 83 05 58 */	addi r28, r3, globals@l
/* 800A3408 000A04E8  7F E3 FB 78 */	mr r3, r31
/* 800A340C 000A04EC  D0 3C 09 10 */	stfs f1, 0x910(r28)
/* 800A3410 000A04F0  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3414 000A04F4  38 84 05 F3 */	addi r4, r4, 0x5f3
/* 800A3418 000A04F8  C0 22 92 F8 */	lfs f1, "@1008"@sda21(r2)
/* 800A341C 000A04FC  4B F8 D7 29 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3420 000A0500  3C 60 80 3C */	lis r3, globals@ha
/* 800A3424 000A0504  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3428 000A0508  3B C3 05 58 */	addi r30, r3, globals@l
/* 800A342C 000A050C  7F E3 FB 78 */	mr r3, r31
/* 800A3430 000A0510  D0 3E 09 14 */	stfs f1, 0x914(r30)
/* 800A3434 000A0514  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3438 000A0518  38 84 06 04 */	addi r4, r4, 0x604
/* 800A343C 000A051C  C0 22 93 2C */	lfs f1, "@1021"@sda21(r2)
/* 800A3440 000A0520  4B F8 D7 05 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3444 000A0524  3C 60 80 3C */	lis r3, globals@ha
/* 800A3448 000A0528  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A344C 000A052C  3B A3 05 58 */	addi r29, r3, globals@l
/* 800A3450 000A0530  7F E3 FB 78 */	mr r3, r31
/* 800A3454 000A0534  D0 3D 09 18 */	stfs f1, 0x918(r29)
/* 800A3458 000A0538  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A345C 000A053C  38 84 06 17 */	addi r4, r4, 0x617
/* 800A3460 000A0540  C0 22 93 14 */	lfs f1, "@1015"@sda21(r2)
/* 800A3464 000A0544  4B F8 D6 E1 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3468 000A0548  3C 60 80 3C */	lis r3, globals@ha
/* 800A346C 000A054C  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3470 000A0550  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3474 000A0554  7F E3 FB 78 */	mr r3, r31
/* 800A3478 000A0558  D0 25 09 1C */	stfs f1, 0x91c(r5)
/* 800A347C 000A055C  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3480 000A0560  38 84 06 2B */	addi r4, r4, 0x62b
/* 800A3484 000A0564  C0 22 92 EC */	lfs f1, "@1005"@sda21(r2)
/* 800A3488 000A0568  4B F8 D6 BD */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A348C 000A056C  3C 60 80 3C */	lis r3, globals@ha
/* 800A3490 000A0570  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3494 000A0574  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3498 000A0578  7F E3 FB 78 */	mr r3, r31
/* 800A349C 000A057C  D0 25 09 20 */	stfs f1, 0x920(r5)
/* 800A34A0 000A0580  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A34A4 000A0584  38 84 06 3F */	addi r4, r4, 0x63f
/* 800A34A8 000A0588  C0 22 93 2C */	lfs f1, "@1021"@sda21(r2)
/* 800A34AC 000A058C  4B F8 D6 99 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A34B0 000A0590  3C 80 80 3C */	lis r4, globals@ha
/* 800A34B4 000A0594  C0 7C 09 10 */	lfs f3, 0x910(r28)
/* 800A34B8 000A0598  38 84 05 58 */	addi r4, r4, globals@l
/* 800A34BC 000A059C  C0 5E 09 14 */	lfs f2, 0x914(r30)
/* 800A34C0 000A05A0  D0 24 09 24 */	stfs f1, 0x924(r4)
/* 800A34C4 000A05A4  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A34C8 000A05A8  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A34CC 000A05AC  C0 1D 09 18 */	lfs f0, 0x918(r29)
/* 800A34D0 000A05B0  C0 82 93 30 */	lfs f4, "@1022"@sda21(r2)
/* 800A34D4 000A05B4  7F E3 FB 78 */	mr r3, r31
/* 800A34D8 000A05B8  C0 22 93 34 */	lfs f1, "@1023"@sda21(r2)
/* 800A34DC 000A05BC  38 84 06 49 */	addi r4, r4, 0x649
/* 800A34E0 000A05C0  EC 64 00 F2 */	fmuls f3, f4, f3
/* 800A34E4 000A05C4  EC 44 00 B2 */	fmuls f2, f4, f2
/* 800A34E8 000A05C8  EC 04 00 32 */	fmuls f0, f4, f0
/* 800A34EC 000A05CC  EC 63 08 24 */	fdivs f3, f3, f1
/* 800A34F0 000A05D0  EC 42 08 24 */	fdivs f2, f2, f1
/* 800A34F4 000A05D4  D0 7C 09 10 */	stfs f3, 0x910(r28)
/* 800A34F8 000A05D8  EC 00 08 24 */	fdivs f0, f0, f1
/* 800A34FC 000A05DC  D0 5E 09 14 */	stfs f2, 0x914(r30)
/* 800A3500 000A05E0  D0 1D 09 18 */	stfs f0, 0x918(r29)
/* 800A3504 000A05E4  4B F8 D6 41 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3508 000A05E8  C0 02 93 34 */	lfs f0, "@1023"@sda21(r2)
/* 800A350C 000A05EC  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 800A3510 000A05F0  7C 00 00 26 */	mfcr r0
/* 800A3514 000A05F4  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A3518 000A05F8  54 00 1F FE */	extrwi r0, r0, 1, 2
/* 800A351C 000A05FC  C0 2D 80 0C */	lfs f1, xcam_collis_radius@sda21(r13)
/* 800A3520 000A0600  68 00 00 01 */	xori r0, r0, 0x1
/* 800A3524 000A0604  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A3528 000A0608  7F E3 FB 78 */	mr r3, r31
/* 800A352C 000A060C  54 18 06 3E */	clrlwi r24, r0, 24
/* 800A3530 000A0610  38 84 06 5F */	addi r4, r4, 0x65f
/* 800A3534 000A0614  4B F8 D6 11 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3538 000A0618  D0 2D 80 0C */	stfs f1, xcam_collis_radius@sda21(r13)
/* 800A353C 000A061C  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A3540 000A0620  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A3544 000A0624  7F E3 FB 78 */	mr r3, r31
/* 800A3548 000A0628  C0 2D 80 10 */	lfs f1, xcam_collis_stiffness@sda21(r13)
/* 800A354C 000A062C  38 84 06 72 */	addi r4, r4, 0x672
/* 800A3550 000A0630  4B F8 D5 F5 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3554 000A0634  D0 2D 80 10 */	stfs f1, xcam_collis_stiffness@sda21(r13)
/* 800A3558 000A0638  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A355C 000A063C  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A3560 000A0640  7F E3 FB 78 */	mr r3, r31
/* 800A3564 000A0644  C0 2D 80 C8 */	lfs f1, zcam_pad_pyaw_scale@sda21(r13)
/* 800A3568 000A0648  38 84 06 88 */	addi r4, r4, 0x688
/* 800A356C 000A064C  4B F8 D5 D9 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3570 000A0650  D0 2D 80 C8 */	stfs f1, zcam_pad_pyaw_scale@sda21(r13)
/* 800A3574 000A0654  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A3578 000A0658  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A357C 000A065C  7F E3 FB 78 */	mr r3, r31
/* 800A3580 000A0660  C0 2D 80 CC */	lfs f1, zcam_pad_pitch_scale@sda21(r13)
/* 800A3584 000A0664  38 84 06 9C */	addi r4, r4, 0x69c
/* 800A3588 000A0668  4B F8 D5 BD */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A358C 000A066C  D0 2D 80 CC */	stfs f1, zcam_pad_pitch_scale@sda21(r13)
/* 800A3590 000A0670  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A3594 000A0674  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A3598 000A0678  7F E3 FB 78 */	mr r3, r31
/* 800A359C 000A067C  C0 2D 80 D0 */	lfs f1, zcam_near_d@sda21(r13)
/* 800A35A0 000A0680  38 84 06 B1 */	addi r4, r4, 0x6b1
/* 800A35A4 000A0684  4B F8 D5 A1 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A35A8 000A0688  D0 2D 80 D0 */	stfs f1, zcam_near_d@sda21(r13)
/* 800A35AC 000A068C  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A35B0 000A0690  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A35B4 000A0694  7F E3 FB 78 */	mr r3, r31
/* 800A35B8 000A0698  C0 2D 80 D4 */	lfs f1, zcam_near_h@sda21(r13)
/* 800A35BC 000A069C  38 84 06 BD */	addi r4, r4, 0x6bd
/* 800A35C0 000A06A0  4B F8 D5 85 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A35C4 000A06A4  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A35C8 000A06A8  28 18 00 00 */	cmplwi r24, 0x0
/* 800A35CC 000A06AC  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A35D0 000A06B0  D0 2D 80 D4 */	stfs f1, zcam_near_h@sda21(r13)
/* 800A35D4 000A06B4  7F E3 FB 78 */	mr r3, r31
/* 800A35D8 000A06B8  38 84 06 C9 */	addi r4, r4, 0x6c9
/* 800A35DC 000A06BC  41 82 00 1C */	beq .L_800A35F8
/* 800A35E0 000A06C0  C0 42 93 34 */	lfs f2, "@1023"@sda21(r2)
/* 800A35E4 000A06C4  C0 2D 80 D8 */	lfs f1, zcam_near_pitch@sda21(r13)
/* 800A35E8 000A06C8  C0 02 93 30 */	lfs f0, "@1022"@sda21(r2)
/* 800A35EC 000A06CC  EC 22 00 72 */	fmuls f1, f2, f1
/* 800A35F0 000A06D0  EC 21 00 24 */	fdivs f1, f1, f0
/* 800A35F4 000A06D4  48 00 00 08 */	b .L_800A35FC
.L_800A35F8:
/* 800A35F8 000A06D8  C0 2D 80 D8 */	lfs f1, zcam_near_pitch@sda21(r13)
.L_800A35FC:
/* 800A35FC 000A06DC  4B F8 D5 49 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3600 000A06E0  D0 2D 80 D8 */	stfs f1, zcam_near_pitch@sda21(r13)
/* 800A3604 000A06E4  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A3608 000A06E8  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A360C 000A06EC  7F E3 FB 78 */	mr r3, r31
/* 800A3610 000A06F0  C0 2D 80 DC */	lfs f1, zcam_far_d@sda21(r13)
/* 800A3614 000A06F4  38 84 06 D9 */	addi r4, r4, 0x6d9
/* 800A3618 000A06F8  4B F8 D5 2D */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A361C 000A06FC  D0 2D 80 DC */	stfs f1, zcam_far_d@sda21(r13)
/* 800A3620 000A0700  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A3624 000A0704  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A3628 000A0708  7F E3 FB 78 */	mr r3, r31
/* 800A362C 000A070C  C0 2D 80 E0 */	lfs f1, zcam_far_h@sda21(r13)
/* 800A3630 000A0710  38 84 06 E4 */	addi r4, r4, 0x6e4
/* 800A3634 000A0714  4B F8 D5 11 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3638 000A0718  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A363C 000A071C  28 18 00 00 */	cmplwi r24, 0x0
/* 800A3640 000A0720  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A3644 000A0724  D0 2D 80 E0 */	stfs f1, zcam_far_h@sda21(r13)
/* 800A3648 000A0728  7F E3 FB 78 */	mr r3, r31
/* 800A364C 000A072C  38 84 06 EF */	addi r4, r4, 0x6ef
/* 800A3650 000A0730  41 82 00 1C */	beq .L_800A366C
/* 800A3654 000A0734  C0 42 93 34 */	lfs f2, "@1023"@sda21(r2)
/* 800A3658 000A0738  C0 2D 80 E4 */	lfs f1, zcam_far_pitch@sda21(r13)
/* 800A365C 000A073C  C0 02 93 30 */	lfs f0, "@1022"@sda21(r2)
/* 800A3660 000A0740  EC 22 00 72 */	fmuls f1, f2, f1
/* 800A3664 000A0744  EC 21 00 24 */	fdivs f1, f1, f0
/* 800A3668 000A0748  48 00 00 08 */	b .L_800A3670
.L_800A366C:
/* 800A366C 000A074C  C0 2D 80 E4 */	lfs f1, zcam_far_pitch@sda21(r13)
.L_800A3670:
/* 800A3670 000A0750  4B F8 D4 D5 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3674 000A0754  D0 2D 80 E4 */	stfs f1, zcam_far_pitch@sda21(r13)
/* 800A3678 000A0758  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A367C 000A075C  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A3680 000A0760  7F E3 FB 78 */	mr r3, r31
/* 800A3684 000A0764  C0 2D 80 F4 */	lfs f1, zcam_above_d@sda21(r13)
/* 800A3688 000A0768  38 84 06 FE */	addi r4, r4, 0x6fe
/* 800A368C 000A076C  4B F8 D4 B9 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3690 000A0770  D0 2D 80 F4 */	stfs f1, zcam_above_d@sda21(r13)
/* 800A3694 000A0774  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A3698 000A0778  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A369C 000A077C  7F E3 FB 78 */	mr r3, r31
/* 800A36A0 000A0780  C0 2D 80 F8 */	lfs f1, zcam_above_h@sda21(r13)
/* 800A36A4 000A0784  38 84 07 0B */	addi r4, r4, 0x70b
/* 800A36A8 000A0788  4B F8 D4 9D */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A36AC 000A078C  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A36B0 000A0790  28 18 00 00 */	cmplwi r24, 0x0
/* 800A36B4 000A0794  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A36B8 000A0798  D0 2D 80 F8 */	stfs f1, zcam_above_h@sda21(r13)
/* 800A36BC 000A079C  7F E3 FB 78 */	mr r3, r31
/* 800A36C0 000A07A0  38 84 07 18 */	addi r4, r4, 0x718
/* 800A36C4 000A07A4  41 82 00 1C */	beq .L_800A36E0
/* 800A36C8 000A07A8  C0 42 93 34 */	lfs f2, "@1023"@sda21(r2)
/* 800A36CC 000A07AC  C0 2D 80 FC */	lfs f1, zcam_above_pitch@sda21(r13)
/* 800A36D0 000A07B0  C0 02 93 30 */	lfs f0, "@1022"@sda21(r2)
/* 800A36D4 000A07B4  EC 22 00 72 */	fmuls f1, f2, f1
/* 800A36D8 000A07B8  EC 21 00 24 */	fdivs f1, f1, f0
/* 800A36DC 000A07BC  48 00 00 08 */	b .L_800A36E4
.L_800A36E0:
/* 800A36E0 000A07C0  C0 2D 80 FC */	lfs f1, zcam_above_pitch@sda21(r13)
.L_800A36E4:
/* 800A36E4 000A07C4  4B F8 D4 61 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A36E8 000A07C8  D0 2D 80 FC */	stfs f1, zcam_above_pitch@sda21(r13)
/* 800A36EC 000A07CC  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A36F0 000A07D0  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A36F4 000A07D4  7F E3 FB 78 */	mr r3, r31
/* 800A36F8 000A07D8  C0 2D 81 00 */	lfs f1, zcam_below_d@sda21(r13)
/* 800A36FC 000A07DC  38 84 07 29 */	addi r4, r4, 0x729
/* 800A3700 000A07E0  4B F8 D4 45 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3704 000A07E4  D0 2D 81 00 */	stfs f1, zcam_below_d@sda21(r13)
/* 800A3708 000A07E8  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A370C 000A07EC  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A3710 000A07F0  7F E3 FB 78 */	mr r3, r31
/* 800A3714 000A07F4  C0 2D 81 04 */	lfs f1, zcam_below_h@sda21(r13)
/* 800A3718 000A07F8  38 84 07 36 */	addi r4, r4, 0x736
/* 800A371C 000A07FC  4B F8 D4 29 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3720 000A0800  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A3724 000A0804  28 18 00 00 */	cmplwi r24, 0x0
/* 800A3728 000A0808  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A372C 000A080C  D0 2D 81 04 */	stfs f1, zcam_below_h@sda21(r13)
/* 800A3730 000A0810  7F E3 FB 78 */	mr r3, r31
/* 800A3734 000A0814  38 84 07 43 */	addi r4, r4, 0x743
/* 800A3738 000A0818  41 82 00 1C */	beq .L_800A3754
/* 800A373C 000A081C  C0 42 93 34 */	lfs f2, "@1023"@sda21(r2)
/* 800A3740 000A0820  C0 2D 81 08 */	lfs f1, zcam_below_pitch@sda21(r13)
/* 800A3744 000A0824  C0 02 93 30 */	lfs f0, "@1022"@sda21(r2)
/* 800A3748 000A0828  EC 22 00 72 */	fmuls f1, f2, f1
/* 800A374C 000A082C  EC 21 00 24 */	fdivs f1, f1, f0
/* 800A3750 000A0830  48 00 00 08 */	b .L_800A3758
.L_800A3754:
/* 800A3754 000A0834  C0 2D 81 08 */	lfs f1, zcam_below_pitch@sda21(r13)
.L_800A3758:
/* 800A3758 000A0838  4B F8 D3 ED */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A375C 000A083C  D0 2D 81 08 */	stfs f1, zcam_below_pitch@sda21(r13)
/* 800A3760 000A0840  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A3764 000A0844  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A3768 000A0848  7F E3 FB 78 */	mr r3, r31
/* 800A376C 000A084C  C0 2D 81 0C */	lfs f1, zcam_highbounce_d@sda21(r13)
/* 800A3770 000A0850  38 84 07 54 */	addi r4, r4, 0x754
/* 800A3774 000A0854  4B F8 D3 D1 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3778 000A0858  D0 2D 81 0C */	stfs f1, zcam_highbounce_d@sda21(r13)
/* 800A377C 000A085C  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A3780 000A0860  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A3784 000A0864  7F E3 FB 78 */	mr r3, r31
/* 800A3788 000A0868  C0 2D 81 10 */	lfs f1, zcam_highbounce_h@sda21(r13)
/* 800A378C 000A086C  38 84 07 66 */	addi r4, r4, 0x766
/* 800A3790 000A0870  4B F8 D3 B5 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3794 000A0874  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A3798 000A0878  28 18 00 00 */	cmplwi r24, 0x0
/* 800A379C 000A087C  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A37A0 000A0880  D0 2D 81 10 */	stfs f1, zcam_highbounce_h@sda21(r13)
/* 800A37A4 000A0884  7F E3 FB 78 */	mr r3, r31
/* 800A37A8 000A0888  38 84 06 49 */	addi r4, r4, 0x649
/* 800A37AC 000A088C  41 82 00 1C */	beq .L_800A37C8
/* 800A37B0 000A0890  C0 42 93 34 */	lfs f2, "@1023"@sda21(r2)
/* 800A37B4 000A0894  C0 2D 81 14 */	lfs f1, zcam_highbounce_pitch@sda21(r13)
/* 800A37B8 000A0898  C0 02 93 30 */	lfs f0, "@1022"@sda21(r2)
/* 800A37BC 000A089C  EC 22 00 72 */	fmuls f1, f2, f1
/* 800A37C0 000A08A0  EC 21 00 24 */	fdivs f1, f1, f0
/* 800A37C4 000A08A4  48 00 00 08 */	b .L_800A37CC
.L_800A37C8:
/* 800A37C8 000A08A8  C0 2D 81 14 */	lfs f1, zcam_highbounce_pitch@sda21(r13)
.L_800A37CC:
/* 800A37CC 000A08AC  4B F8 D3 79 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A37D0 000A08B0  D0 2D 81 14 */	stfs f1, zcam_highbounce_pitch@sda21(r13)
/* 800A37D4 000A08B4  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A37D8 000A08B8  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A37DC 000A08BC  7F E3 FB 78 */	mr r3, r31
/* 800A37E0 000A08C0  C0 2D 80 E8 */	lfs f1, zcam_wall_d@sda21(r13)
/* 800A37E4 000A08C4  38 84 07 78 */	addi r4, r4, 0x778
/* 800A37E8 000A08C8  4B F8 D3 5D */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A37EC 000A08CC  D0 2D 80 E8 */	stfs f1, zcam_wall_d@sda21(r13)
/* 800A37F0 000A08D0  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A37F4 000A08D4  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A37F8 000A08D8  7F E3 FB 78 */	mr r3, r31
/* 800A37FC 000A08DC  C0 2D 80 EC */	lfs f1, zcam_wall_h@sda21(r13)
/* 800A3800 000A08E0  38 84 07 84 */	addi r4, r4, 0x784
/* 800A3804 000A08E4  4B F8 D3 41 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3808 000A08E8  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A380C 000A08EC  28 18 00 00 */	cmplwi r24, 0x0
/* 800A3810 000A08F0  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A3814 000A08F4  D0 2D 80 EC */	stfs f1, zcam_wall_h@sda21(r13)
/* 800A3818 000A08F8  7F E3 FB 78 */	mr r3, r31
/* 800A381C 000A08FC  38 84 07 90 */	addi r4, r4, 0x790
/* 800A3820 000A0900  41 82 00 1C */	beq .L_800A383C
/* 800A3824 000A0904  C0 42 93 34 */	lfs f2, "@1023"@sda21(r2)
/* 800A3828 000A0908  C0 2D 80 F0 */	lfs f1, zcam_wall_pitch@sda21(r13)
/* 800A382C 000A090C  C0 02 93 30 */	lfs f0, "@1022"@sda21(r2)
/* 800A3830 000A0910  EC 22 00 72 */	fmuls f1, f2, f1
/* 800A3834 000A0914  EC 21 00 24 */	fdivs f1, f1, f0
/* 800A3838 000A0918  48 00 00 08 */	b .L_800A3840
.L_800A383C:
/* 800A383C 000A091C  C0 2D 80 F0 */	lfs f1, zcam_wall_pitch@sda21(r13)
.L_800A3840:
/* 800A3840 000A0920  4B F8 D3 05 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3844 000A0924  D0 2D 80 F0 */	stfs f1, zcam_wall_pitch@sda21(r13)
/* 800A3848 000A0928  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A384C 000A092C  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A3850 000A0930  7F E3 FB 78 */	mr r3, r31
/* 800A3854 000A0934  C0 42 93 34 */	lfs f2, "@1023"@sda21(r2)
/* 800A3858 000A0938  38 84 07 A0 */	addi r4, r4, 0x7a0
/* 800A385C 000A093C  C0 2D 81 18 */	lfs f1, zcam_overrot_min@sda21(r13)
/* 800A3860 000A0940  C0 02 93 30 */	lfs f0, "@1022"@sda21(r2)
/* 800A3864 000A0944  EC 22 00 72 */	fmuls f1, f2, f1
/* 800A3868 000A0948  EC 21 00 24 */	fdivs f1, f1, f0
/* 800A386C 000A094C  4B F8 D2 D9 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3870 000A0950  D0 2D 81 18 */	stfs f1, zcam_overrot_min@sda21(r13)
/* 800A3874 000A0954  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A3878 000A0958  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A387C 000A095C  7F E3 FB 78 */	mr r3, r31
/* 800A3880 000A0960  C0 42 93 34 */	lfs f2, "@1023"@sda21(r2)
/* 800A3884 000A0964  38 84 07 B1 */	addi r4, r4, 0x7b1
/* 800A3888 000A0968  C0 2D 81 1C */	lfs f1, zcam_overrot_mid@sda21(r13)
/* 800A388C 000A096C  C0 02 93 30 */	lfs f0, "@1022"@sda21(r2)
/* 800A3890 000A0970  EC 22 00 72 */	fmuls f1, f2, f1
/* 800A3894 000A0974  EC 21 00 24 */	fdivs f1, f1, f0
/* 800A3898 000A0978  4B F8 D2 AD */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A389C 000A097C  D0 2D 81 1C */	stfs f1, zcam_overrot_mid@sda21(r13)
/* 800A38A0 000A0980  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A38A4 000A0984  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A38A8 000A0988  7F E3 FB 78 */	mr r3, r31
/* 800A38AC 000A098C  C0 42 93 34 */	lfs f2, "@1023"@sda21(r2)
/* 800A38B0 000A0990  38 84 07 C2 */	addi r4, r4, 0x7c2
/* 800A38B4 000A0994  C0 2D 81 20 */	lfs f1, zcam_overrot_max@sda21(r13)
/* 800A38B8 000A0998  C0 02 93 30 */	lfs f0, "@1022"@sda21(r2)
/* 800A38BC 000A099C  EC 22 00 72 */	fmuls f1, f2, f1
/* 800A38C0 000A09A0  EC 21 00 24 */	fdivs f1, f1, f0
/* 800A38C4 000A09A4  4B F8 D2 81 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A38C8 000A09A8  D0 2D 81 20 */	stfs f1, zcam_overrot_max@sda21(r13)
/* 800A38CC 000A09AC  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A38D0 000A09B0  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A38D4 000A09B4  7F E3 FB 78 */	mr r3, r31
/* 800A38D8 000A09B8  C0 2D 81 24 */	lfs f1, zcam_overrot_rate@sda21(r13)
/* 800A38DC 000A09BC  38 84 07 D3 */	addi r4, r4, 0x7d3
/* 800A38E0 000A09C0  4B F8 D2 65 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A38E4 000A09C4  D0 2D 81 24 */	stfs f1, zcam_overrot_rate@sda21(r13)
/* 800A38E8 000A09C8  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A38EC 000A09CC  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A38F0 000A09D0  7F E3 FB 78 */	mr r3, r31
/* 800A38F4 000A09D4  C0 2D 81 28 */	lfs f1, zcam_overrot_tstart@sda21(r13)
/* 800A38F8 000A09D8  38 84 07 E5 */	addi r4, r4, 0x7e5
/* 800A38FC 000A09DC  4B F8 D2 49 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3900 000A09E0  D0 2D 81 28 */	stfs f1, zcam_overrot_tstart@sda21(r13)
/* 800A3904 000A09E4  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A3908 000A09E8  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A390C 000A09EC  7F E3 FB 78 */	mr r3, r31
/* 800A3910 000A09F0  C0 2D 81 2C */	lfs f1, zcam_overrot_tend@sda21(r13)
/* 800A3914 000A09F4  38 84 07 F9 */	addi r4, r4, 0x7f9
/* 800A3918 000A09F8  4B F8 D2 2D */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A391C 000A09FC  D0 2D 81 2C */	stfs f1, zcam_overrot_tend@sda21(r13)
/* 800A3920 000A0A00  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A3924 000A0A04  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A3928 000A0A08  7F E3 FB 78 */	mr r3, r31
/* 800A392C 000A0A0C  C0 2D 81 30 */	lfs f1, zcam_overrot_velmin@sda21(r13)
/* 800A3930 000A0A10  38 84 08 0B */	addi r4, r4, 0x80b
/* 800A3934 000A0A14  4B F8 D2 11 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3938 000A0A18  D0 2D 81 30 */	stfs f1, zcam_overrot_velmin@sda21(r13)
/* 800A393C 000A0A1C  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A3940 000A0A20  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A3944 000A0A24  7F E3 FB 78 */	mr r3, r31
/* 800A3948 000A0A28  C0 2D 81 34 */	lfs f1, zcam_overrot_velmax@sda21(r13)
/* 800A394C 000A0A2C  38 84 08 1F */	addi r4, r4, 0x81f
/* 800A3950 000A0A30  4B F8 D1 F5 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3954 000A0A34  D0 2D 81 34 */	stfs f1, zcam_overrot_velmax@sda21(r13)
/* 800A3958 000A0A38  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A395C 000A0A3C  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A3960 000A0A40  7F E3 FB 78 */	mr r3, r31
/* 800A3964 000A0A44  C0 2D 81 38 */	lfs f1, zcam_overrot_tmanual@sda21(r13)
/* 800A3968 000A0A48  38 84 08 33 */	addi r4, r4, 0x833
/* 800A396C 000A0A4C  4B F8 D1 D9 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3970 000A0A50  28 18 00 00 */	cmplwi r24, 0x0
/* 800A3974 000A0A54  D0 2D 81 38 */	stfs f1, zcam_overrot_tmanual@sda21(r13)
/* 800A3978 000A0A58  41 82 00 94 */	beq .L_800A3A0C
/* 800A397C 000A0A5C  C0 42 93 30 */	lfs f2, "@1022"@sda21(r2)
/* 800A3980 000A0A60  C0 2D 80 D8 */	lfs f1, zcam_near_pitch@sda21(r13)
/* 800A3984 000A0A64  C0 02 93 34 */	lfs f0, "@1023"@sda21(r2)
/* 800A3988 000A0A68  EC 22 00 72 */	fmuls f1, f2, f1
/* 800A398C 000A0A6C  EC 01 00 24 */	fdivs f0, f1, f0
/* 800A3990 000A0A70  D0 0D 80 D8 */	stfs f0, zcam_near_pitch@sda21(r13)
/* 800A3994 000A0A74  C0 42 93 30 */	lfs f2, "@1022"@sda21(r2)
/* 800A3998 000A0A78  C0 2D 80 E4 */	lfs f1, zcam_far_pitch@sda21(r13)
/* 800A399C 000A0A7C  C0 02 93 34 */	lfs f0, "@1023"@sda21(r2)
/* 800A39A0 000A0A80  EC 22 00 72 */	fmuls f1, f2, f1
/* 800A39A4 000A0A84  EC 01 00 24 */	fdivs f0, f1, f0
/* 800A39A8 000A0A88  D0 0D 80 E4 */	stfs f0, zcam_far_pitch@sda21(r13)
/* 800A39AC 000A0A8C  C0 42 93 30 */	lfs f2, "@1022"@sda21(r2)
/* 800A39B0 000A0A90  C0 2D 80 FC */	lfs f1, zcam_above_pitch@sda21(r13)
/* 800A39B4 000A0A94  C0 02 93 34 */	lfs f0, "@1023"@sda21(r2)
/* 800A39B8 000A0A98  EC 22 00 72 */	fmuls f1, f2, f1
/* 800A39BC 000A0A9C  EC 01 00 24 */	fdivs f0, f1, f0
/* 800A39C0 000A0AA0  D0 0D 80 FC */	stfs f0, zcam_above_pitch@sda21(r13)
/* 800A39C4 000A0AA4  C0 42 93 30 */	lfs f2, "@1022"@sda21(r2)
/* 800A39C8 000A0AA8  C0 2D 81 08 */	lfs f1, zcam_below_pitch@sda21(r13)
/* 800A39CC 000A0AAC  C0 02 93 34 */	lfs f0, "@1023"@sda21(r2)
/* 800A39D0 000A0AB0  EC 22 00 72 */	fmuls f1, f2, f1
/* 800A39D4 000A0AB4  EC 01 00 24 */	fdivs f0, f1, f0
/* 800A39D8 000A0AB8  D0 0D 81 08 */	stfs f0, zcam_below_pitch@sda21(r13)
/* 800A39DC 000A0ABC  C0 42 93 30 */	lfs f2, "@1022"@sda21(r2)
/* 800A39E0 000A0AC0  C0 2D 81 14 */	lfs f1, zcam_highbounce_pitch@sda21(r13)
/* 800A39E4 000A0AC4  C0 02 93 34 */	lfs f0, "@1023"@sda21(r2)
/* 800A39E8 000A0AC8  EC 22 00 72 */	fmuls f1, f2, f1
/* 800A39EC 000A0ACC  EC 01 00 24 */	fdivs f0, f1, f0
/* 800A39F0 000A0AD0  D0 0D 81 14 */	stfs f0, zcam_highbounce_pitch@sda21(r13)
/* 800A39F4 000A0AD4  C0 42 93 30 */	lfs f2, "@1022"@sda21(r2)
/* 800A39F8 000A0AD8  C0 2D 80 F0 */	lfs f1, zcam_wall_pitch@sda21(r13)
/* 800A39FC 000A0ADC  C0 02 93 34 */	lfs f0, "@1023"@sda21(r2)
/* 800A3A00 000A0AE0  EC 22 00 72 */	fmuls f1, f2, f1
/* 800A3A04 000A0AE4  EC 01 00 24 */	fdivs f0, f1, f0
/* 800A3A08 000A0AE8  D0 0D 80 F0 */	stfs f0, zcam_wall_pitch@sda21(r13)
.L_800A3A0C:
/* 800A3A0C 000A0AEC  C0 42 93 30 */	lfs f2, "@1022"@sda21(r2)
/* 800A3A10 000A0AF0  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A3A14 000A0AF4  C0 2D 81 18 */	lfs f1, zcam_overrot_min@sda21(r13)
/* 800A3A18 000A0AF8  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A3A1C 000A0AFC  C0 02 93 34 */	lfs f0, "@1023"@sda21(r2)
/* 800A3A20 000A0B00  7F E3 FB 78 */	mr r3, r31
/* 800A3A24 000A0B04  EC 22 00 72 */	fmuls f1, f2, f1
/* 800A3A28 000A0B08  38 84 08 48 */	addi r4, r4, 0x848
/* 800A3A2C 000A0B0C  EC 01 00 24 */	fdivs f0, f1, f0
/* 800A3A30 000A0B10  D0 0D 81 18 */	stfs f0, zcam_overrot_min@sda21(r13)
/* 800A3A34 000A0B14  C0 42 93 30 */	lfs f2, "@1022"@sda21(r2)
/* 800A3A38 000A0B18  C0 2D 81 1C */	lfs f1, zcam_overrot_mid@sda21(r13)
/* 800A3A3C 000A0B1C  C0 02 93 34 */	lfs f0, "@1023"@sda21(r2)
/* 800A3A40 000A0B20  EC 22 00 72 */	fmuls f1, f2, f1
/* 800A3A44 000A0B24  EC 01 00 24 */	fdivs f0, f1, f0
/* 800A3A48 000A0B28  D0 0D 81 1C */	stfs f0, zcam_overrot_mid@sda21(r13)
/* 800A3A4C 000A0B2C  C0 42 93 30 */	lfs f2, "@1022"@sda21(r2)
/* 800A3A50 000A0B30  C0 2D 81 20 */	lfs f1, zcam_overrot_max@sda21(r13)
/* 800A3A54 000A0B34  C0 02 93 34 */	lfs f0, "@1023"@sda21(r2)
/* 800A3A58 000A0B38  EC 22 00 72 */	fmuls f1, f2, f1
/* 800A3A5C 000A0B3C  EC 01 00 24 */	fdivs f0, f1, f0
/* 800A3A60 000A0B40  D0 0D 81 20 */	stfs f0, zcam_overrot_max@sda21(r13)
/* 800A3A64 000A0B44  C0 2D 82 B8 */	lfs f1, gSkipTimeCutscene@sda21(r13)
/* 800A3A68 000A0B48  4B F8 D0 DD */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3A6C 000A0B4C  D0 2D 82 B8 */	stfs f1, gSkipTimeCutscene@sda21(r13)
/* 800A3A70 000A0B50  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A3A74 000A0B54  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A3A78 000A0B58  7F E3 FB 78 */	mr r3, r31
/* 800A3A7C 000A0B5C  C0 2D 82 BC */	lfs f1, gSkipTimeFlythrough@sda21(r13)
/* 800A3A80 000A0B60  38 84 08 5A */	addi r4, r4, 0x85a
/* 800A3A84 000A0B64  4B F8 D0 C1 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3A88 000A0B68  D0 2D 82 BC */	stfs f1, gSkipTimeFlythrough@sda21(r13)
/* 800A3A8C 000A0B6C  C0 2D 82 B8 */	lfs f1, gSkipTimeCutscene@sda21(r13)
/* 800A3A90 000A0B70  C0 02 92 E0 */	lfs f0, "@1002"@sda21(r2)
/* 800A3A94 000A0B74  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A3A98 000A0B78  40 81 00 08 */	ble .L_800A3AA0
/* 800A3A9C 000A0B7C  48 00 00 08 */	b .L_800A3AA4
.L_800A3AA0:
/* 800A3AA0 000A0B80  FC 20 00 90 */	fmr f1, f0
.L_800A3AA4:
/* 800A3AA4 000A0B84  D0 2D 82 B8 */	stfs f1, gSkipTimeCutscene@sda21(r13)
/* 800A3AA8 000A0B88  C0 2D 82 BC */	lfs f1, gSkipTimeFlythrough@sda21(r13)
/* 800A3AAC 000A0B8C  C0 02 92 DC */	lfs f0, "@1001"@sda21(r2)
/* 800A3AB0 000A0B90  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A3AB4 000A0B94  40 81 00 08 */	ble .L_800A3ABC
/* 800A3AB8 000A0B98  48 00 00 08 */	b .L_800A3AC0
.L_800A3ABC:
/* 800A3ABC 000A0B9C  FC 20 00 90 */	fmr f1, f0
.L_800A3AC0:
/* 800A3AC0 000A0BA0  D0 2D 82 BC */	stfs f1, gSkipTimeFlythrough@sda21(r13)
/* 800A3AC4 000A0BA4  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A3AC8 000A0BA8  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A3ACC 000A0BAC  7F E3 FB 78 */	mr r3, r31
/* 800A3AD0 000A0BB0  C0 22 93 38 */	lfs f1, "@1024"@sda21(r2)
/* 800A3AD4 000A0BB4  38 84 08 6E */	addi r4, r4, 0x86e
/* 800A3AD8 000A0BB8  4B F8 D0 6D */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3ADC 000A0BBC  3C 60 80 3C */	lis r3, globals@ha
/* 800A3AE0 000A0BC0  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3AE4 000A0BC4  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3AE8 000A0BC8  7F E3 FB 78 */	mr r3, r31
/* 800A3AEC 000A0BCC  D0 25 18 00 */	stfs f1, 0x1800(r5)
/* 800A3AF0 000A0BD0  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3AF4 000A0BD4  38 84 08 7C */	addi r4, r4, 0x87c
/* 800A3AF8 000A0BD8  C0 22 93 3C */	lfs f1, "@1025"@sda21(r2)
/* 800A3AFC 000A0BDC  4B F8 D0 49 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3B00 000A0BE0  3C 60 80 3C */	lis r3, globals@ha
/* 800A3B04 000A0BE4  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3B08 000A0BE8  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3B0C 000A0BEC  7F E3 FB 78 */	mr r3, r31
/* 800A3B10 000A0BF0  D0 25 18 04 */	stfs f1, 0x1804(r5)
/* 800A3B14 000A0BF4  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3B18 000A0BF8  38 84 08 8A */	addi r4, r4, 0x88a
/* 800A3B1C 000A0BFC  C0 22 93 40 */	lfs f1, "@1026"@sda21(r2)
/* 800A3B20 000A0C00  4B F8 D0 25 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3B24 000A0C04  3C 60 80 3C */	lis r3, globals@ha
/* 800A3B28 000A0C08  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3B2C 000A0C0C  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3B30 000A0C10  7F E3 FB 78 */	mr r3, r31
/* 800A3B34 000A0C14  D0 25 18 08 */	stfs f1, 0x1808(r5)
/* 800A3B38 000A0C18  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3B3C 000A0C1C  38 84 08 9A */	addi r4, r4, 0x89a
/* 800A3B40 000A0C20  C0 22 93 44 */	lfs f1, "@1027"@sda21(r2)
/* 800A3B44 000A0C24  4B F8 D0 01 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3B48 000A0C28  3C 60 80 3C */	lis r3, globals@ha
/* 800A3B4C 000A0C2C  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3B50 000A0C30  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3B54 000A0C34  7F E3 FB 78 */	mr r3, r31
/* 800A3B58 000A0C38  D0 25 18 0C */	stfs f1, 0x180c(r5)
/* 800A3B5C 000A0C3C  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3B60 000A0C40  38 84 08 AA */	addi r4, r4, 0x8aa
/* 800A3B64 000A0C44  C0 22 93 48 */	lfs f1, "@1028"@sda21(r2)
/* 800A3B68 000A0C48  4B F8 CF DD */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3B6C 000A0C4C  3C 60 80 3C */	lis r3, globals@ha
/* 800A3B70 000A0C50  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3B74 000A0C54  3B A3 05 58 */	addi r29, r3, globals@l
/* 800A3B78 000A0C58  7F E3 FB 78 */	mr r3, r31
/* 800A3B7C 000A0C5C  D0 3D 18 10 */	stfs f1, 0x1810(r29)
/* 800A3B80 000A0C60  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3B84 000A0C64  38 84 08 BC */	addi r4, r4, 0x8bc
/* 800A3B88 000A0C68  C0 22 92 E8 */	lfs f1, "@1004"@sda21(r2)
/* 800A3B8C 000A0C6C  4B F8 CF B9 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3B90 000A0C70  3C 60 80 3C */	lis r3, globals@ha
/* 800A3B94 000A0C74  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3B98 000A0C78  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3B9C 000A0C7C  7F E3 FB 78 */	mr r3, r31
/* 800A3BA0 000A0C80  D0 25 18 14 */	stfs f1, 0x1814(r5)
/* 800A3BA4 000A0C84  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3BA8 000A0C88  38 84 08 CF */	addi r4, r4, 0x8cf
/* 800A3BAC 000A0C8C  C0 22 93 24 */	lfs f1, "@1019"@sda21(r2)
/* 800A3BB0 000A0C90  4B F8 CF 95 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3BB4 000A0C94  3C 60 80 3C */	lis r3, globals@ha
/* 800A3BB8 000A0C98  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3BBC 000A0C9C  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3BC0 000A0CA0  7F E3 FB 78 */	mr r3, r31
/* 800A3BC4 000A0CA4  D0 25 18 18 */	stfs f1, 0x1818(r5)
/* 800A3BC8 000A0CA8  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3BCC 000A0CAC  38 84 08 E2 */	addi r4, r4, 0x8e2
/* 800A3BD0 000A0CB0  C0 22 93 4C */	lfs f1, "@1029"@sda21(r2)
/* 800A3BD4 000A0CB4  4B F8 CF 71 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3BD8 000A0CB8  3C 60 80 3C */	lis r3, globals@ha
/* 800A3BDC 000A0CBC  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3BE0 000A0CC0  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3BE4 000A0CC4  7F E3 FB 78 */	mr r3, r31
/* 800A3BE8 000A0CC8  D0 25 18 1C */	stfs f1, 0x181c(r5)
/* 800A3BEC 000A0CCC  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3BF0 000A0CD0  38 84 08 F7 */	addi r4, r4, 0x8f7
/* 800A3BF4 000A0CD4  C0 22 93 1C */	lfs f1, "@1017"@sda21(r2)
/* 800A3BF8 000A0CD8  4B F8 CF 4D */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3BFC 000A0CDC  3C 60 80 3C */	lis r3, globals@ha
/* 800A3C00 000A0CE0  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3C04 000A0CE4  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3C08 000A0CE8  7F E3 FB 78 */	mr r3, r31
/* 800A3C0C 000A0CEC  D0 25 18 20 */	stfs f1, 0x1820(r5)
/* 800A3C10 000A0CF0  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3C14 000A0CF4  38 84 09 0C */	addi r4, r4, 0x90c
/* 800A3C18 000A0CF8  C0 22 93 50 */	lfs f1, "@1030"@sda21(r2)
/* 800A3C1C 000A0CFC  4B F8 CF 29 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3C20 000A0D00  3C 60 80 3C */	lis r3, globals@ha
/* 800A3C24 000A0D04  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3C28 000A0D08  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3C2C 000A0D0C  7F E3 FB 78 */	mr r3, r31
/* 800A3C30 000A0D10  D0 25 18 24 */	stfs f1, 0x1824(r5)
/* 800A3C34 000A0D14  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3C38 000A0D18  38 84 09 20 */	addi r4, r4, 0x920
/* 800A3C3C 000A0D1C  C0 22 93 54 */	lfs f1, "@1031"@sda21(r2)
/* 800A3C40 000A0D20  4B F8 CF 05 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3C44 000A0D24  3C 60 80 3C */	lis r3, globals@ha
/* 800A3C48 000A0D28  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3C4C 000A0D2C  3B C3 05 58 */	addi r30, r3, globals@l
/* 800A3C50 000A0D30  7F E3 FB 78 */	mr r3, r31
/* 800A3C54 000A0D34  D0 3E 18 28 */	stfs f1, 0x1828(r30)
/* 800A3C58 000A0D38  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3C5C 000A0D3C  38 84 09 37 */	addi r4, r4, 0x937
/* 800A3C60 000A0D40  C0 22 92 DC */	lfs f1, "@1001"@sda21(r2)
/* 800A3C64 000A0D44  4B F8 CE E1 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3C68 000A0D48  3C 60 80 3C */	lis r3, globals@ha
/* 800A3C6C 000A0D4C  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3C70 000A0D50  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3C74 000A0D54  7F E3 FB 78 */	mr r3, r31
/* 800A3C78 000A0D58  D0 25 18 44 */	stfs f1, 0x1844(r5)
/* 800A3C7C 000A0D5C  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3C80 000A0D60  38 84 09 49 */	addi r4, r4, 0x949
/* 800A3C84 000A0D64  C0 22 93 58 */	lfs f1, "@1032"@sda21(r2)
/* 800A3C88 000A0D68  4B F8 CE BD */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3C8C 000A0D6C  3C 60 80 3C */	lis r3, globals@ha
/* 800A3C90 000A0D70  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3C94 000A0D74  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3C98 000A0D78  7F E3 FB 78 */	mr r3, r31
/* 800A3C9C 000A0D7C  D0 25 18 48 */	stfs f1, 0x1848(r5)
/* 800A3CA0 000A0D80  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3CA4 000A0D84  38 84 09 5B */	addi r4, r4, 0x95b
/* 800A3CA8 000A0D88  C0 22 93 2C */	lfs f1, "@1021"@sda21(r2)
/* 800A3CAC 000A0D8C  4B F8 CE 99 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3CB0 000A0D90  3C 60 80 3C */	lis r3, globals@ha
/* 800A3CB4 000A0D94  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3CB8 000A0D98  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3CBC 000A0D9C  7F E3 FB 78 */	mr r3, r31
/* 800A3CC0 000A0DA0  D0 25 18 54 */	stfs f1, 0x1854(r5)
/* 800A3CC4 000A0DA4  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3CC8 000A0DA8  38 84 09 6E */	addi r4, r4, 0x96e
/* 800A3CCC 000A0DAC  C0 22 93 5C */	lfs f1, "@1033"@sda21(r2)
/* 800A3CD0 000A0DB0  4B F8 CE 75 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3CD4 000A0DB4  3C 60 80 3C */	lis r3, globals@ha
/* 800A3CD8 000A0DB8  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3CDC 000A0DBC  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3CE0 000A0DC0  7F E3 FB 78 */	mr r3, r31
/* 800A3CE4 000A0DC4  D0 25 18 58 */	stfs f1, 0x1858(r5)
/* 800A3CE8 000A0DC8  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3CEC 000A0DCC  38 84 09 80 */	addi r4, r4, 0x980
/* 800A3CF0 000A0DD0  C0 22 92 F8 */	lfs f1, "@1008"@sda21(r2)
/* 800A3CF4 000A0DD4  4B F8 CE 51 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3CF8 000A0DD8  3C 60 80 3C */	lis r3, globals@ha
/* 800A3CFC 000A0DDC  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3D00 000A0DE0  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3D04 000A0DE4  7F E3 FB 78 */	mr r3, r31
/* 800A3D08 000A0DE8  D0 25 18 5C */	stfs f1, 0x185c(r5)
/* 800A3D0C 000A0DEC  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3D10 000A0DF0  38 84 09 94 */	addi r4, r4, 0x994
/* 800A3D14 000A0DF4  C0 22 92 EC */	lfs f1, "@1005"@sda21(r2)
/* 800A3D18 000A0DF8  4B F8 CE 2D */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3D1C 000A0DFC  3C 60 80 3C */	lis r3, globals@ha
/* 800A3D20 000A0E00  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3D24 000A0E04  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3D28 000A0E08  7F E3 FB 78 */	mr r3, r31
/* 800A3D2C 000A0E0C  D0 25 18 60 */	stfs f1, 0x1860(r5)
/* 800A3D30 000A0E10  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3D34 000A0E14  38 84 09 AD */	addi r4, r4, 0x9ad
/* 800A3D38 000A0E18  C0 22 92 E4 */	lfs f1, "@1003"@sda21(r2)
/* 800A3D3C 000A0E1C  4B F8 CE 09 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3D40 000A0E20  3C 60 80 3C */	lis r3, globals@ha
/* 800A3D44 000A0E24  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3D48 000A0E28  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3D4C 000A0E2C  7F E3 FB 78 */	mr r3, r31
/* 800A3D50 000A0E30  D0 25 18 64 */	stfs f1, 0x1864(r5)
/* 800A3D54 000A0E34  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3D58 000A0E38  38 84 09 C6 */	addi r4, r4, 0x9c6
/* 800A3D5C 000A0E3C  C0 22 92 F0 */	lfs f1, "@1006"@sda21(r2)
/* 800A3D60 000A0E40  4B F8 CD E5 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3D64 000A0E44  3C 60 80 3C */	lis r3, globals@ha
/* 800A3D68 000A0E48  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3D6C 000A0E4C  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3D70 000A0E50  7F E3 FB 78 */	mr r3, r31
/* 800A3D74 000A0E54  D0 25 18 68 */	stfs f1, 0x1868(r5)
/* 800A3D78 000A0E58  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3D7C 000A0E5C  38 84 09 DD */	addi r4, r4, 0x9dd
/* 800A3D80 000A0E60  C0 22 93 44 */	lfs f1, "@1027"@sda21(r2)
/* 800A3D84 000A0E64  4B F8 CD C1 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3D88 000A0E68  3C 60 80 3C */	lis r3, globals@ha
/* 800A3D8C 000A0E6C  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3D90 000A0E70  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3D94 000A0E74  7F E3 FB 78 */	mr r3, r31
/* 800A3D98 000A0E78  D0 25 18 6C */	stfs f1, 0x186c(r5)
/* 800A3D9C 000A0E7C  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3DA0 000A0E80  38 84 09 F6 */	addi r4, r4, 0x9f6
/* 800A3DA4 000A0E84  C0 22 93 14 */	lfs f1, "@1015"@sda21(r2)
/* 800A3DA8 000A0E88  4B F8 CD 9D */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3DAC 000A0E8C  3C 60 80 3C */	lis r3, globals@ha
/* 800A3DB0 000A0E90  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3DB4 000A0E94  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3DB8 000A0E98  7F E3 FB 78 */	mr r3, r31
/* 800A3DBC 000A0E9C  D0 25 18 70 */	stfs f1, 0x1870(r5)
/* 800A3DC0 000A0EA0  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3DC4 000A0EA4  38 84 0A 0F */	addi r4, r4, 0xa0f
/* 800A3DC8 000A0EA8  C0 22 93 08 */	lfs f1, "@1012"@sda21(r2)
/* 800A3DCC 000A0EAC  4B F8 CD 79 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3DD0 000A0EB0  3C 60 80 3C */	lis r3, globals@ha
/* 800A3DD4 000A0EB4  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3DD8 000A0EB8  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3DDC 000A0EBC  7F E3 FB 78 */	mr r3, r31
/* 800A3DE0 000A0EC0  D0 25 18 74 */	stfs f1, 0x1874(r5)
/* 800A3DE4 000A0EC4  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3DE8 000A0EC8  38 84 0A 25 */	addi r4, r4, 0xa25
/* 800A3DEC 000A0ECC  C0 22 93 20 */	lfs f1, "@1018"@sda21(r2)
/* 800A3DF0 000A0ED0  4B F8 CD 55 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3DF4 000A0ED4  3C 60 80 3C */	lis r3, globals@ha
/* 800A3DF8 000A0ED8  C0 5D 18 10 */	lfs f2, 0x1810(r29)
/* 800A3DFC 000A0EDC  38 63 05 58 */	addi r3, r3, globals@l
/* 800A3E00 000A0EE0  D0 23 18 78 */	stfs f1, 0x1878(r3)
/* 800A3E04 000A0EE4  C0 22 93 30 */	lfs f1, "@1022"@sda21(r2)
/* 800A3E08 000A0EE8  C0 02 93 34 */	lfs f0, "@1023"@sda21(r2)
/* 800A3E0C 000A0EEC  EC 21 00 B2 */	fmuls f1, f1, f2
/* 800A3E10 000A0EF0  EC 21 00 24 */	fdivs f1, f1, f0
/* 800A3E14 000A0EF4  48 02 10 7D */	bl icos__Ff
/* 800A3E18 000A0EF8  D0 3D 18 10 */	stfs f1, 0x1810(r29)
/* 800A3E1C 000A0EFC  C0 3E 18 28 */	lfs f1, 0x1828(r30)
/* 800A3E20 000A0F00  C0 42 93 30 */	lfs f2, "@1022"@sda21(r2)
/* 800A3E24 000A0F04  C0 02 93 34 */	lfs f0, "@1023"@sda21(r2)
/* 800A3E28 000A0F08  EC 22 00 72 */	fmuls f1, f2, f1
/* 800A3E2C 000A0F0C  EC 21 00 24 */	fdivs f1, f1, f0
/* 800A3E30 000A0F10  48 02 10 61 */	bl icos__Ff
/* 800A3E34 000A0F14  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A3E38 000A0F18  D0 3E 18 28 */	stfs f1, 0x1828(r30)
/* 800A3E3C 000A0F1C  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A3E40 000A0F20  7F E3 FB 78 */	mr r3, r31
/* 800A3E44 000A0F24  38 84 0A 39 */	addi r4, r4, 0xa39
/* 800A3E48 000A0F28  38 A0 00 00 */	li r5, 0x0
/* 800A3E4C 000A0F2C  4B F8 CC 9D */	bl xIniGetInt__FP8xIniFilePci
/* 800A3E50 000A0F30  3C A0 80 3C */	lis r5, globals@ha
/* 800A3E54 000A0F34  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3E58 000A0F38  38 A5 05 58 */	addi r5, r5, globals@l
/* 800A3E5C 000A0F3C  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3E60 000A0F40  98 65 09 BD */	stb r3, 0x9bd(r5)
/* 800A3E64 000A0F44  3B 05 09 BD */	addi r24, r5, 0x9bd
/* 800A3E68 000A0F48  7F E3 FB 78 */	mr r3, r31
/* 800A3E6C 000A0F4C  38 84 0A 46 */	addi r4, r4, 0xa46
/* 800A3E70 000A0F50  38 A0 00 00 */	li r5, 0x0
/* 800A3E74 000A0F54  4B F8 CC 75 */	bl xIniGetInt__FP8xIniFilePci
/* 800A3E78 000A0F58  3C A0 80 3C */	lis r5, globals@ha
/* 800A3E7C 000A0F5C  7F 04 C3 78 */	mr r4, r24
/* 800A3E80 000A0F60  38 A5 05 58 */	addi r5, r5, globals@l
/* 800A3E84 000A0F64  98 65 09 BE */	stb r3, 0x9be(r5)
/* 800A3E88 000A0F68  38 65 09 BF */	addi r3, r5, 0x9bf
/* 800A3E8C 000A0F6C  38 A0 00 02 */	li r5, 0x2
/* 800A3E90 000A0F70  4B F5 F6 B1 */	bl memcpy
/* 800A3E94 000A0F74  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3E98 000A0F78  7F E3 FB 78 */	mr r3, r31
/* 800A3E9C 000A0F7C  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3EA0 000A0F80  38 A0 00 00 */	li r5, 0x0
/* 800A3EA4 000A0F84  38 84 0A 55 */	addi r4, r4, 0xa55
/* 800A3EA8 000A0F88  4B F8 CD 05 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A3EAC 000A0F8C  3C 80 80 3C */	lis r4, globals@ha
/* 800A3EB0 000A0F90  7C 78 1B 78 */	mr r24, r3
/* 800A3EB4 000A0F94  38 64 05 58 */	addi r3, r4, globals@l
/* 800A3EB8 000A0F98  38 9B 00 40 */	addi r4, r27, 0x40
/* 800A3EBC 000A0F9C  38 63 09 CC */	addi r3, r3, 0x9cc
/* 800A3EC0 000A0FA0  38 A0 00 18 */	li r5, 0x18
/* 800A3EC4 000A0FA4  4B F5 F6 7D */	bl memcpy
/* 800A3EC8 000A0FA8  7F 04 C3 78 */	mr r4, r24
/* 800A3ECC 000A0FAC  38 A0 00 06 */	li r5, 0x6
/* 800A3ED0 000A0FB0  4B FF E9 99 */	bl ParseFloatList__FPfPci
/* 800A3ED4 000A0FB4  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3ED8 000A0FB8  7F E3 FB 78 */	mr r3, r31
/* 800A3EDC 000A0FBC  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3EE0 000A0FC0  38 A0 00 00 */	li r5, 0x0
/* 800A3EE4 000A0FC4  38 84 0A 62 */	addi r4, r4, 0xa62
/* 800A3EE8 000A0FC8  4B F8 CC C5 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A3EEC 000A0FCC  3C 80 80 3C */	lis r4, globals@ha
/* 800A3EF0 000A0FD0  7C 78 1B 78 */	mr r24, r3
/* 800A3EF4 000A0FD4  38 64 05 58 */	addi r3, r4, globals@l
/* 800A3EF8 000A0FD8  38 9B 00 58 */	addi r4, r27, 0x58
/* 800A3EFC 000A0FDC  38 63 09 E4 */	addi r3, r3, 0x9e4
/* 800A3F00 000A0FE0  38 A0 00 0C */	li r5, 0xc
/* 800A3F04 000A0FE4  4B F5 F6 3D */	bl memcpy
/* 800A3F08 000A0FE8  7F 04 C3 78 */	mr r4, r24
/* 800A3F0C 000A0FEC  38 A0 00 03 */	li r5, 0x3
/* 800A3F10 000A0FF0  4B FF E9 59 */	bl ParseFloatList__FPfPci
/* 800A3F14 000A0FF4  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3F18 000A0FF8  7F E3 FB 78 */	mr r3, r31
/* 800A3F1C 000A0FFC  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3F20 000A1000  38 A0 00 00 */	li r5, 0x0
/* 800A3F24 000A1004  38 84 0A 6F */	addi r4, r4, 0xa6f
/* 800A3F28 000A1008  4B F8 CC 85 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A3F2C 000A100C  3C 80 80 3C */	lis r4, globals@ha
/* 800A3F30 000A1010  7C 78 1B 78 */	mr r24, r3
/* 800A3F34 000A1014  38 64 05 58 */	addi r3, r4, globals@l
/* 800A3F38 000A1018  38 9B 00 64 */	addi r4, r27, 0x64
/* 800A3F3C 000A101C  38 63 09 F0 */	addi r3, r3, 0x9f0
/* 800A3F40 000A1020  38 A0 00 0C */	li r5, 0xc
/* 800A3F44 000A1024  4B F5 F5 FD */	bl memcpy
/* 800A3F48 000A1028  7F 04 C3 78 */	mr r4, r24
/* 800A3F4C 000A102C  38 A0 00 03 */	li r5, 0x3
/* 800A3F50 000A1030  4B FF E9 19 */	bl ParseFloatList__FPfPci
/* 800A3F54 000A1034  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3F58 000A1038  7F E3 FB 78 */	mr r3, r31
/* 800A3F5C 000A103C  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3F60 000A1040  38 A0 00 00 */	li r5, 0x0
/* 800A3F64 000A1044  38 84 0A 7B */	addi r4, r4, 0xa7b
/* 800A3F68 000A1048  4B F8 CC 45 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A3F6C 000A104C  3C 80 80 3C */	lis r4, globals@ha
/* 800A3F70 000A1050  7C 78 1B 78 */	mr r24, r3
/* 800A3F74 000A1054  38 64 05 58 */	addi r3, r4, globals@l
/* 800A3F78 000A1058  38 9B 00 70 */	addi r4, r27, 0x70
/* 800A3F7C 000A105C  38 63 09 FC */	addi r3, r3, 0x9fc
/* 800A3F80 000A1060  38 A0 00 0C */	li r5, 0xc
/* 800A3F84 000A1064  4B F5 F5 BD */	bl memcpy
/* 800A3F88 000A1068  7F 04 C3 78 */	mr r4, r24
/* 800A3F8C 000A106C  38 A0 00 03 */	li r5, 0x3
/* 800A3F90 000A1070  4B FF E8 D9 */	bl ParseFloatList__FPfPci
/* 800A3F94 000A1074  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A3F98 000A1078  C0 22 93 60 */	lfs f1, "@1034"@sda21(r2)
/* 800A3F9C 000A107C  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A3FA0 000A1080  7F E3 FB 78 */	mr r3, r31
/* 800A3FA4 000A1084  38 84 0A 86 */	addi r4, r4, 0xa86
/* 800A3FA8 000A1088  4B F8 CB 9D */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3FAC 000A108C  3C 60 80 3C */	lis r3, globals@ha
/* 800A3FB0 000A1090  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3FB4 000A1094  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3FB8 000A1098  7F E3 FB 78 */	mr r3, r31
/* 800A3FBC 000A109C  D0 25 0A 08 */	stfs f1, 0xa08(r5)
/* 800A3FC0 000A10A0  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3FC4 000A10A4  38 84 0A 95 */	addi r4, r4, 0xa95
/* 800A3FC8 000A10A8  C0 22 93 64 */	lfs f1, "@1035"@sda21(r2)
/* 800A3FCC 000A10AC  4B F8 CB 79 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3FD0 000A10B0  3C 60 80 3C */	lis r3, globals@ha
/* 800A3FD4 000A10B4  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3FD8 000A10B8  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A3FDC 000A10BC  7F E3 FB 78 */	mr r3, r31
/* 800A3FE0 000A10C0  D0 25 0A 0C */	stfs f1, 0xa0c(r5)
/* 800A3FE4 000A10C4  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A3FE8 000A10C8  38 84 0A A3 */	addi r4, r4, 0xaa3
/* 800A3FEC 000A10CC  C0 22 92 E0 */	lfs f1, "@1002"@sda21(r2)
/* 800A3FF0 000A10D0  4B F8 CB 55 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A3FF4 000A10D4  3C 60 80 3C */	lis r3, globals@ha
/* 800A3FF8 000A10D8  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A3FFC 000A10DC  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A4000 000A10E0  7F E3 FB 78 */	mr r3, r31
/* 800A4004 000A10E4  D0 25 0A 10 */	stfs f1, 0xa10(r5)
/* 800A4008 000A10E8  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A400C 000A10EC  38 84 0A B1 */	addi r4, r4, 0xab1
/* 800A4010 000A10F0  C0 22 93 1C */	lfs f1, "@1017"@sda21(r2)
/* 800A4014 000A10F4  4B F8 CB 31 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A4018 000A10F8  3C 60 80 3C */	lis r3, globals@ha
/* 800A401C 000A10FC  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A4020 000A1100  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A4024 000A1104  7F E3 FB 78 */	mr r3, r31
/* 800A4028 000A1108  D0 25 0A 14 */	stfs f1, 0xa14(r5)
/* 800A402C 000A110C  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A4030 000A1110  38 84 0A C3 */	addi r4, r4, 0xac3
/* 800A4034 000A1114  C0 22 92 F4 */	lfs f1, "@1007"@sda21(r2)
/* 800A4038 000A1118  4B F8 CB 0D */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A403C 000A111C  3C 60 80 3C */	lis r3, globals@ha
/* 800A4040 000A1120  38 63 05 58 */	addi r3, r3, globals@l
/* 800A4044 000A1124  D4 23 0A 8C */	stfsu f1, 0xa8c(r3)
/* 800A4048 000A1128  4B FF E8 41 */	bl zLedgeAdjust__FP16zLedgeGrabParams
/* 800A404C 000A112C  7F E3 FB 78 */	mr r3, r31
/* 800A4050 000A1130  48 06 D8 0D */	bl load_settings__12bungee_stateFR8xIniFile
/* 800A4054 000A1134  7F E3 FB 78 */	mr r3, r31
/* 800A4058 000A1138  48 07 73 F9 */	bl load_settings__9oob_stateFR8xIniFile
/* 800A405C 000A113C  7F E3 FB 78 */	mr r3, r31
/* 800A4060 000A1140  48 08 ED 95 */	bl load_settings__8ztalkboxFR8xIniFile
/* 800A4064 000A1144  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A4068 000A1148  7F E3 FB 78 */	mr r3, r31
/* 800A406C 000A114C  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A4070 000A1150  38 A0 00 00 */	li r5, 0x0
/* 800A4074 000A1154  38 84 0A D5 */	addi r4, r4, 0xad5
/* 800A4078 000A1158  4B F8 CB 35 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A407C 000A115C  3C 80 80 3C */	lis r4, globals@ha
/* 800A4080 000A1160  7C 78 1B 78 */	mr r24, r3
/* 800A4084 000A1164  38 64 05 58 */	addi r3, r4, globals@l
/* 800A4088 000A1168  38 9B 00 7C */	addi r4, r27, 0x7c
/* 800A408C 000A116C  3B 83 0A 18 */	addi r28, r3, 0xa18
/* 800A4090 000A1170  38 A0 00 10 */	li r5, 0x10
/* 800A4094 000A1174  7F 83 E3 78 */	mr r3, r28
/* 800A4098 000A1178  4B F5 F4 A9 */	bl memcpy
/* 800A409C 000A117C  7F 04 C3 78 */	mr r4, r24
/* 800A40A0 000A1180  38 A0 00 04 */	li r5, 0x4
/* 800A40A4 000A1184  4B FF E7 C5 */	bl ParseFloatList__FPfPci
/* 800A40A8 000A1188  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A40AC 000A118C  7F E3 FB 78 */	mr r3, r31
/* 800A40B0 000A1190  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A40B4 000A1194  38 A0 00 00 */	li r5, 0x0
/* 800A40B8 000A1198  38 84 0A DD */	addi r4, r4, 0xadd
/* 800A40BC 000A119C  4B F8 CA F1 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A40C0 000A11A0  3C 80 80 3C */	lis r4, globals@ha
/* 800A40C4 000A11A4  7C 78 1B 78 */	mr r24, r3
/* 800A40C8 000A11A8  38 64 05 58 */	addi r3, r4, globals@l
/* 800A40CC 000A11AC  38 9B 00 8C */	addi r4, r27, 0x8c
/* 800A40D0 000A11B0  3B A3 0A 58 */	addi r29, r3, 0xa58
/* 800A40D4 000A11B4  38 A0 00 10 */	li r5, 0x10
/* 800A40D8 000A11B8  7F A3 EB 78 */	mr r3, r29
/* 800A40DC 000A11BC  4B F5 F4 65 */	bl memcpy
/* 800A40E0 000A11C0  7F 04 C3 78 */	mr r4, r24
/* 800A40E4 000A11C4  38 A0 00 04 */	li r5, 0x4
/* 800A40E8 000A11C8  4B FF E7 81 */	bl ParseFloatList__FPfPci
/* 800A40EC 000A11CC  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A40F0 000A11D0  7F E3 FB 78 */	mr r3, r31
/* 800A40F4 000A11D4  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A40F8 000A11D8  38 A0 00 00 */	li r5, 0x0
/* 800A40FC 000A11DC  38 84 0A E7 */	addi r4, r4, 0xae7
/* 800A4100 000A11E0  4B F8 CA AD */	bl xIniGetString__FP8xIniFilePcPc
/* 800A4104 000A11E4  3C 80 80 3C */	lis r4, globals@ha
/* 800A4108 000A11E8  7C 78 1B 78 */	mr r24, r3
/* 800A410C 000A11EC  38 64 05 58 */	addi r3, r4, globals@l
/* 800A4110 000A11F0  38 9B 00 9C */	addi r4, r27, 0x9c
/* 800A4114 000A11F4  3B 43 0A 28 */	addi r26, r3, 0xa28
/* 800A4118 000A11F8  38 A0 00 10 */	li r5, 0x10
/* 800A411C 000A11FC  7F 43 D3 78 */	mr r3, r26
/* 800A4120 000A1200  4B F5 F4 21 */	bl memcpy
/* 800A4124 000A1204  7F 04 C3 78 */	mr r4, r24
/* 800A4128 000A1208  38 A0 00 04 */	li r5, 0x4
/* 800A412C 000A120C  4B FF E7 3D */	bl ParseFloatList__FPfPci
/* 800A4130 000A1210  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A4134 000A1214  7F E3 FB 78 */	mr r3, r31
/* 800A4138 000A1218  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A413C 000A121C  38 A0 00 00 */	li r5, 0x0
/* 800A4140 000A1220  38 84 0A F1 */	addi r4, r4, 0xaf1
/* 800A4144 000A1224  4B F8 CA 69 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A4148 000A1228  3C 80 80 3C */	lis r4, globals@ha
/* 800A414C 000A122C  7C 78 1B 78 */	mr r24, r3
/* 800A4150 000A1230  38 64 05 58 */	addi r3, r4, globals@l
/* 800A4154 000A1234  38 9B 00 AC */	addi r4, r27, 0xac
/* 800A4158 000A1238  3B 23 0A 38 */	addi r25, r3, 0xa38
/* 800A415C 000A123C  38 A0 00 10 */	li r5, 0x10
/* 800A4160 000A1240  7F 23 CB 78 */	mr r3, r25
/* 800A4164 000A1244  4B F5 F3 DD */	bl memcpy
/* 800A4168 000A1248  7F 04 C3 78 */	mr r4, r24
/* 800A416C 000A124C  38 A0 00 04 */	li r5, 0x4
/* 800A4170 000A1250  4B FF E6 F9 */	bl ParseFloatList__FPfPci
/* 800A4174 000A1254  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A4178 000A1258  7F E3 FB 78 */	mr r3, r31
/* 800A417C 000A125C  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A4180 000A1260  38 A0 00 00 */	li r5, 0x0
/* 800A4184 000A1264  38 84 0A FB */	addi r4, r4, 0xafb
/* 800A4188 000A1268  4B F8 CA 25 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A418C 000A126C  3C 80 80 3C */	lis r4, globals@ha
/* 800A4190 000A1270  7C 7E 1B 78 */	mr r30, r3
/* 800A4194 000A1274  38 64 05 58 */	addi r3, r4, globals@l
/* 800A4198 000A1278  38 9B 00 BC */	addi r4, r27, 0xbc
/* 800A419C 000A127C  3B 03 0A 48 */	addi r24, r3, 0xa48
/* 800A41A0 000A1280  38 A0 00 10 */	li r5, 0x10
/* 800A41A4 000A1284  7F 03 C3 78 */	mr r3, r24
/* 800A41A8 000A1288  4B F5 F3 99 */	bl memcpy
/* 800A41AC 000A128C  7F C4 F3 78 */	mr r4, r30
/* 800A41B0 000A1290  38 A0 00 04 */	li r5, 0x4
/* 800A41B4 000A1294  4B FF E6 B5 */	bl ParseFloatList__FPfPci
/* 800A41B8 000A1298  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A41BC 000A129C  C0 22 92 DC */	lfs f1, "@1001"@sda21(r2)
/* 800A41C0 000A12A0  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A41C4 000A12A4  7F E3 FB 78 */	mr r3, r31
/* 800A41C8 000A12A8  38 84 0B 03 */	addi r4, r4, 0xb03
/* 800A41CC 000A12AC  4B F8 C9 79 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A41D0 000A12B0  3C 60 80 3C */	lis r3, globals@ha
/* 800A41D4 000A12B4  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A41D8 000A12B8  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A41DC 000A12BC  7F E3 FB 78 */	mr r3, r31
/* 800A41E0 000A12C0  D0 25 0A 88 */	stfs f1, 0xa88(r5)
/* 800A41E4 000A12C4  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A41E8 000A12C8  38 84 0B 17 */	addi r4, r4, 0xb17
/* 800A41EC 000A12CC  C0 22 93 20 */	lfs f1, "@1018"@sda21(r2)
/* 800A41F0 000A12D0  4B F8 C9 55 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A41F4 000A12D4  3C 60 80 3C */	lis r3, globals@ha
/* 800A41F8 000A12D8  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A41FC 000A12DC  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A4200 000A12E0  7F E3 FB 78 */	mr r3, r31
/* 800A4204 000A12E4  D0 25 0E 00 */	stfs f1, 0xe00(r5)
/* 800A4208 000A12E8  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A420C 000A12EC  38 84 0B 27 */	addi r4, r4, 0xb27
/* 800A4210 000A12F0  C0 22 93 20 */	lfs f1, "@1018"@sda21(r2)
/* 800A4214 000A12F4  4B F8 C9 31 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A4218 000A12F8  3C 80 80 3C */	lis r4, globals@ha
/* 800A421C 000A12FC  7F 83 E3 78 */	mr r3, r28
/* 800A4220 000A1300  3B C4 05 58 */	addi r30, r4, globals@l
/* 800A4224 000A1304  38 80 00 00 */	li r4, 0x0
/* 800A4228 000A1308  3B 9E 09 C8 */	addi r28, r30, 0x9c8
/* 800A422C 000A130C  D0 3E 0E 04 */	stfs f1, 0xe04(r30)
/* 800A4230 000A1310  93 9E 09 C4 */	stw r28, 0x9c4(r30)
/* 800A4234 000A1314  4B FD 2C F9 */	bl CalcJumpImpulse__FP10zJumpParamPC15zPlayerSettings
/* 800A4238 000A1318  7F A3 EB 78 */	mr r3, r29
/* 800A423C 000A131C  38 80 00 00 */	li r4, 0x0
/* 800A4240 000A1320  4B FD 2C ED */	bl CalcJumpImpulse__FP10zJumpParamPC15zPlayerSettings
/* 800A4244 000A1324  7F 43 D3 78 */	mr r3, r26
/* 800A4248 000A1328  38 80 00 00 */	li r4, 0x0
/* 800A424C 000A132C  4B FD 2C E1 */	bl CalcJumpImpulse__FP10zJumpParamPC15zPlayerSettings
/* 800A4250 000A1330  7F 23 CB 78 */	mr r3, r25
/* 800A4254 000A1334  38 80 00 00 */	li r4, 0x0
/* 800A4258 000A1338  4B FD 2C D5 */	bl CalcJumpImpulse__FP10zJumpParamPC15zPlayerSettings
/* 800A425C 000A133C  7F 03 C3 78 */	mr r3, r24
/* 800A4260 000A1340  38 80 00 00 */	li r4, 0x0
/* 800A4264 000A1344  4B FD 2C C9 */	bl CalcJumpImpulse__FP10zJumpParamPC15zPlayerSettings
/* 800A4268 000A1348  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A426C 000A134C  7F E3 FB 78 */	mr r3, r31
/* 800A4270 000A1350  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A4274 000A1354  38 A0 00 00 */	li r5, 0x0
/* 800A4278 000A1358  38 84 0B 36 */	addi r4, r4, 0xb36
/* 800A427C 000A135C  4B F8 C8 6D */	bl xIniGetInt__FP8xIniFilePci
/* 800A4280 000A1360  3C A0 80 3C */	lis r5, globals@ha
/* 800A4284 000A1364  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A4288 000A1368  38 A5 05 58 */	addi r5, r5, globals@l
/* 800A428C 000A136C  98 65 1F 38 */	stb r3, 0x1f38(r5)
/* 800A4290 000A1370  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A4294 000A1374  7F E3 FB 78 */	mr r3, r31
/* 800A4298 000A1378  38 A0 00 01 */	li r5, 0x1
/* 800A429C 000A137C  38 84 0B 4A */	addi r4, r4, 0xb4a
/* 800A42A0 000A1380  4B F8 C8 49 */	bl xIniGetInt__FP8xIniFilePci
/* 800A42A4 000A1384  3C A0 80 3C */	lis r5, globals@ha
/* 800A42A8 000A1388  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A42AC 000A138C  38 A5 05 58 */	addi r5, r5, globals@l
/* 800A42B0 000A1390  98 65 1F 39 */	stb r3, 0x1f39(r5)
/* 800A42B4 000A1394  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A42B8 000A1398  7F E3 FB 78 */	mr r3, r31
/* 800A42BC 000A139C  38 A0 00 02 */	li r5, 0x2
/* 800A42C0 000A13A0  38 84 0B 5F */	addi r4, r4, 0xb5f
/* 800A42C4 000A13A4  4B F8 C8 25 */	bl xIniGetInt__FP8xIniFilePci
/* 800A42C8 000A13A8  3C A0 80 3C */	lis r5, globals@ha
/* 800A42CC 000A13AC  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A42D0 000A13B0  38 A5 05 58 */	addi r5, r5, globals@l
/* 800A42D4 000A13B4  98 65 1F 3A */	stb r3, 0x1f3a(r5)
/* 800A42D8 000A13B8  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A42DC 000A13BC  7F E3 FB 78 */	mr r3, r31
/* 800A42E0 000A13C0  38 A0 00 03 */	li r5, 0x3
/* 800A42E4 000A13C4  38 84 0B 74 */	addi r4, r4, 0xb74
/* 800A42E8 000A13C8  4B F8 C8 01 */	bl xIniGetInt__FP8xIniFilePci
/* 800A42EC 000A13CC  3C A0 80 3C */	lis r5, globals@ha
/* 800A42F0 000A13D0  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A42F4 000A13D4  38 A5 05 58 */	addi r5, r5, globals@l
/* 800A42F8 000A13D8  98 65 1F 3B */	stb r3, 0x1f3b(r5)
/* 800A42FC 000A13DC  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A4300 000A13E0  7F E3 FB 78 */	mr r3, r31
/* 800A4304 000A13E4  38 A0 00 04 */	li r5, 0x4
/* 800A4308 000A13E8  38 84 0B 87 */	addi r4, r4, 0xb87
/* 800A430C 000A13EC  4B F8 C7 DD */	bl xIniGetInt__FP8xIniFilePci
/* 800A4310 000A13F0  3C A0 80 3C */	lis r5, globals@ha
/* 800A4314 000A13F4  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A4318 000A13F8  38 A5 05 58 */	addi r5, r5, globals@l
/* 800A431C 000A13FC  98 65 1F 3C */	stb r3, 0x1f3c(r5)
/* 800A4320 000A1400  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A4324 000A1404  7F E3 FB 78 */	mr r3, r31
/* 800A4328 000A1408  38 A0 00 05 */	li r5, 0x5
/* 800A432C 000A140C  38 84 0B A0 */	addi r4, r4, 0xba0
/* 800A4330 000A1410  4B F8 C7 B9 */	bl xIniGetInt__FP8xIniFilePci
/* 800A4334 000A1414  3C A0 80 3C */	lis r5, globals@ha
/* 800A4338 000A1418  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A433C 000A141C  38 A5 05 58 */	addi r5, r5, globals@l
/* 800A4340 000A1420  98 65 1F 3D */	stb r3, 0x1f3d(r5)
/* 800A4344 000A1424  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A4348 000A1428  7F E3 FB 78 */	mr r3, r31
/* 800A434C 000A142C  38 A0 00 06 */	li r5, 0x6
/* 800A4350 000A1430  38 84 0B B4 */	addi r4, r4, 0xbb4
/* 800A4354 000A1434  4B F8 C7 95 */	bl xIniGetInt__FP8xIniFilePci
/* 800A4358 000A1438  3C A0 80 3C */	lis r5, globals@ha
/* 800A435C 000A143C  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A4360 000A1440  38 A5 05 58 */	addi r5, r5, globals@l
/* 800A4364 000A1444  98 65 1F 3E */	stb r3, 0x1f3e(r5)
/* 800A4368 000A1448  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A436C 000A144C  7F E3 FB 78 */	mr r3, r31
/* 800A4370 000A1450  38 A0 00 07 */	li r5, 0x7
/* 800A4374 000A1454  38 84 0B CA */	addi r4, r4, 0xbca
/* 800A4378 000A1458  4B F8 C7 71 */	bl xIniGetInt__FP8xIniFilePci
/* 800A437C 000A145C  3C A0 80 3C */	lis r5, globals@ha
/* 800A4380 000A1460  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A4384 000A1464  38 A5 05 58 */	addi r5, r5, globals@l
/* 800A4388 000A1468  98 65 1F 3F */	stb r3, 0x1f3f(r5)
/* 800A438C 000A146C  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A4390 000A1470  7F E3 FB 78 */	mr r3, r31
/* 800A4394 000A1474  38 A0 00 08 */	li r5, 0x8
/* 800A4398 000A1478  38 84 0B E7 */	addi r4, r4, 0xbe7
/* 800A439C 000A147C  4B F8 C7 4D */	bl xIniGetInt__FP8xIniFilePci
/* 800A43A0 000A1480  3C A0 80 3C */	lis r5, globals@ha
/* 800A43A4 000A1484  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A43A8 000A1488  38 A5 05 58 */	addi r5, r5, globals@l
/* 800A43AC 000A148C  98 65 1F 40 */	stb r3, 0x1f40(r5)
/* 800A43B0 000A1490  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A43B4 000A1494  7F E3 FB 78 */	mr r3, r31
/* 800A43B8 000A1498  38 A0 00 09 */	li r5, 0x9
/* 800A43BC 000A149C  38 84 0C 04 */	addi r4, r4, 0xc04
/* 800A43C0 000A14A0  4B F8 C7 29 */	bl xIniGetInt__FP8xIniFilePci
/* 800A43C4 000A14A4  3C A0 80 3C */	lis r5, globals@ha
/* 800A43C8 000A14A8  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A43CC 000A14AC  38 A5 05 58 */	addi r5, r5, globals@l
/* 800A43D0 000A14B0  98 65 1F 41 */	stb r3, 0x1f41(r5)
/* 800A43D4 000A14B4  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A43D8 000A14B8  7F E3 FB 78 */	mr r3, r31
/* 800A43DC 000A14BC  38 A0 00 0A */	li r5, 0xa
/* 800A43E0 000A14C0  38 84 0C 21 */	addi r4, r4, 0xc21
/* 800A43E4 000A14C4  4B F8 C7 05 */	bl xIniGetInt__FP8xIniFilePci
/* 800A43E8 000A14C8  3C A0 80 3C */	lis r5, globals@ha
/* 800A43EC 000A14CC  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A43F0 000A14D0  38 A5 05 58 */	addi r5, r5, globals@l
/* 800A43F4 000A14D4  98 65 1F 45 */	stb r3, 0x1f45(r5)
/* 800A43F8 000A14D8  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A43FC 000A14DC  7F E3 FB 78 */	mr r3, r31
/* 800A4400 000A14E0  38 A0 00 0B */	li r5, 0xb
/* 800A4404 000A14E4  38 84 0C 3C */	addi r4, r4, 0xc3c
/* 800A4408 000A14E8  4B F8 C6 E1 */	bl xIniGetInt__FP8xIniFilePci
/* 800A440C 000A14EC  3C A0 80 3C */	lis r5, globals@ha
/* 800A4410 000A14F0  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A4414 000A14F4  38 A5 05 58 */	addi r5, r5, globals@l
/* 800A4418 000A14F8  98 65 1F 43 */	stb r3, 0x1f43(r5)
/* 800A441C 000A14FC  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A4420 000A1500  7F E3 FB 78 */	mr r3, r31
/* 800A4424 000A1504  38 A0 00 0C */	li r5, 0xc
/* 800A4428 000A1508  38 84 0C 58 */	addi r4, r4, 0xc58
/* 800A442C 000A150C  4B F8 C6 BD */	bl xIniGetInt__FP8xIniFilePci
/* 800A4430 000A1510  3C A0 80 3C */	lis r5, globals@ha
/* 800A4434 000A1514  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A4438 000A1518  38 A5 05 58 */	addi r5, r5, globals@l
/* 800A443C 000A151C  98 65 1F 44 */	stb r3, 0x1f44(r5)
/* 800A4440 000A1520  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A4444 000A1524  7F E3 FB 78 */	mr r3, r31
/* 800A4448 000A1528  38 A0 00 0D */	li r5, 0xd
/* 800A444C 000A152C  38 84 0C 74 */	addi r4, r4, 0xc74
/* 800A4450 000A1530  4B F8 C6 99 */	bl xIniGetInt__FP8xIniFilePci
/* 800A4454 000A1534  3C A0 80 3C */	lis r5, globals@ha
/* 800A4458 000A1538  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A445C 000A153C  38 A5 05 58 */	addi r5, r5, globals@l
/* 800A4460 000A1540  98 65 1F 42 */	stb r3, 0x1f42(r5)
/* 800A4464 000A1544  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A4468 000A1548  7F E3 FB 78 */	mr r3, r31
/* 800A446C 000A154C  38 A0 00 00 */	li r5, 0x0
/* 800A4470 000A1550  38 84 0C 8F */	addi r4, r4, 0xc8f
/* 800A4474 000A1554  4B F8 C7 39 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A4478 000A1558  3C 80 80 3C */	lis r4, globals@ha
/* 800A447C 000A155C  7C 78 1B 78 */	mr r24, r3
/* 800A4480 000A1560  38 64 05 58 */	addi r3, r4, globals@l
/* 800A4484 000A1564  38 9B 00 CC */	addi r4, r27, 0xcc
/* 800A4488 000A1568  38 63 0E 14 */	addi r3, r3, 0xe14
/* 800A448C 000A156C  38 A0 00 18 */	li r5, 0x18
/* 800A4490 000A1570  4B F5 F0 B1 */	bl memcpy
/* 800A4494 000A1574  7F 04 C3 78 */	mr r4, r24
/* 800A4498 000A1578  38 A0 00 06 */	li r5, 0x6
/* 800A449C 000A157C  4B FF E3 CD */	bl ParseFloatList__FPfPci
/* 800A44A0 000A1580  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A44A4 000A1584  7F E3 FB 78 */	mr r3, r31
/* 800A44A8 000A1588  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A44AC 000A158C  38 A0 00 00 */	li r5, 0x0
/* 800A44B0 000A1590  38 84 0C A1 */	addi r4, r4, 0xca1
/* 800A44B4 000A1594  4B F8 C6 F9 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A44B8 000A1598  3C 80 80 3C */	lis r4, globals@ha
/* 800A44BC 000A159C  7C 78 1B 78 */	mr r24, r3
/* 800A44C0 000A15A0  38 64 05 58 */	addi r3, r4, globals@l
/* 800A44C4 000A15A4  38 9B 00 E4 */	addi r4, r27, 0xe4
/* 800A44C8 000A15A8  38 63 0E 2C */	addi r3, r3, 0xe2c
/* 800A44CC 000A15AC  38 A0 00 0C */	li r5, 0xc
/* 800A44D0 000A15B0  4B F5 F0 71 */	bl memcpy
/* 800A44D4 000A15B4  7F 04 C3 78 */	mr r4, r24
/* 800A44D8 000A15B8  38 A0 00 03 */	li r5, 0x3
/* 800A44DC 000A15BC  4B FF E3 8D */	bl ParseFloatList__FPfPci
/* 800A44E0 000A15C0  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A44E4 000A15C4  7F E3 FB 78 */	mr r3, r31
/* 800A44E8 000A15C8  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A44EC 000A15CC  38 A0 00 00 */	li r5, 0x0
/* 800A44F0 000A15D0  38 84 0C B3 */	addi r4, r4, 0xcb3
/* 800A44F4 000A15D4  4B F8 C6 B9 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A44F8 000A15D8  3C 80 80 3C */	lis r4, globals@ha
/* 800A44FC 000A15DC  7C 78 1B 78 */	mr r24, r3
/* 800A4500 000A15E0  38 64 05 58 */	addi r3, r4, globals@l
/* 800A4504 000A15E4  38 9B 00 F0 */	addi r4, r27, 0xf0
/* 800A4508 000A15E8  38 63 0E 38 */	addi r3, r3, 0xe38
/* 800A450C 000A15EC  38 A0 00 0C */	li r5, 0xc
/* 800A4510 000A15F0  4B F5 F0 31 */	bl memcpy
/* 800A4514 000A15F4  7F 04 C3 78 */	mr r4, r24
/* 800A4518 000A15F8  38 A0 00 03 */	li r5, 0x3
/* 800A451C 000A15FC  4B FF E3 4D */	bl ParseFloatList__FPfPci
/* 800A4520 000A1600  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A4524 000A1604  7F E3 FB 78 */	mr r3, r31
/* 800A4528 000A1608  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A452C 000A160C  38 A0 00 00 */	li r5, 0x0
/* 800A4530 000A1610  38 84 0C C4 */	addi r4, r4, 0xcc4
/* 800A4534 000A1614  4B F8 C6 79 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A4538 000A1618  3C 80 80 3C */	lis r4, globals@ha
/* 800A453C 000A161C  7C 78 1B 78 */	mr r24, r3
/* 800A4540 000A1620  38 64 05 58 */	addi r3, r4, globals@l
/* 800A4544 000A1624  38 9B 00 FC */	addi r4, r27, 0xfc
/* 800A4548 000A1628  38 63 0E 44 */	addi r3, r3, 0xe44
/* 800A454C 000A162C  38 A0 00 0C */	li r5, 0xc
/* 800A4550 000A1630  4B F5 EF F1 */	bl memcpy
/* 800A4554 000A1634  7F 04 C3 78 */	mr r4, r24
/* 800A4558 000A1638  38 A0 00 03 */	li r5, 0x3
/* 800A455C 000A163C  4B FF E3 0D */	bl ParseFloatList__FPfPci
/* 800A4560 000A1640  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A4564 000A1644  C0 22 93 60 */	lfs f1, "@1034"@sda21(r2)
/* 800A4568 000A1648  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A456C 000A164C  7F E3 FB 78 */	mr r3, r31
/* 800A4570 000A1650  38 84 0C D4 */	addi r4, r4, 0xcd4
/* 800A4574 000A1654  4B F8 C5 D1 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A4578 000A1658  3C 60 80 3C */	lis r3, globals@ha
/* 800A457C 000A165C  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A4580 000A1660  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A4584 000A1664  7F E3 FB 78 */	mr r3, r31
/* 800A4588 000A1668  D0 25 0E 50 */	stfs f1, 0xe50(r5)
/* 800A458C 000A166C  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A4590 000A1670  38 84 0C E8 */	addi r4, r4, 0xce8
/* 800A4594 000A1674  C0 22 93 64 */	lfs f1, "@1035"@sda21(r2)
/* 800A4598 000A1678  4B F8 C5 AD */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A459C 000A167C  3C 60 80 3C */	lis r3, globals@ha
/* 800A45A0 000A1680  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A45A4 000A1684  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A45A8 000A1688  7F E3 FB 78 */	mr r3, r31
/* 800A45AC 000A168C  D0 25 0E 54 */	stfs f1, 0xe54(r5)
/* 800A45B0 000A1690  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A45B4 000A1694  38 84 0C FB */	addi r4, r4, 0xcfb
/* 800A45B8 000A1698  C0 22 92 E0 */	lfs f1, "@1002"@sda21(r2)
/* 800A45BC 000A169C  4B F8 C5 89 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A45C0 000A16A0  3C 60 80 3C */	lis r3, globals@ha
/* 800A45C4 000A16A4  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A45C8 000A16A8  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A45CC 000A16AC  7F E3 FB 78 */	mr r3, r31
/* 800A45D0 000A16B0  D0 25 0E 58 */	stfs f1, 0xe58(r5)
/* 800A45D4 000A16B4  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A45D8 000A16B8  38 84 0D 0E */	addi r4, r4, 0xd0e
/* 800A45DC 000A16BC  C0 22 93 1C */	lfs f1, "@1017"@sda21(r2)
/* 800A45E0 000A16C0  4B F8 C5 65 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A45E4 000A16C4  3C 60 80 3C */	lis r3, globals@ha
/* 800A45E8 000A16C8  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A45EC 000A16CC  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A45F0 000A16D0  7F E3 FB 78 */	mr r3, r31
/* 800A45F4 000A16D4  D0 25 0E 5C */	stfs f1, 0xe5c(r5)
/* 800A45F8 000A16D8  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A45FC 000A16DC  38 84 0D 25 */	addi r4, r4, 0xd25
/* 800A4600 000A16E0  C0 22 92 F4 */	lfs f1, "@1007"@sda21(r2)
/* 800A4604 000A16E4  4B F8 C5 41 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A4608 000A16E8  3C 60 80 3C */	lis r3, globals@ha
/* 800A460C 000A16EC  38 63 05 58 */	addi r3, r3, globals@l
/* 800A4610 000A16F0  D4 23 0E D4 */	stfsu f1, 0xed4(r3)
/* 800A4614 000A16F4  4B FF E2 75 */	bl zLedgeAdjust__FP16zLedgeGrabParams
/* 800A4618 000A16F8  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A461C 000A16FC  7F E3 FB 78 */	mr r3, r31
/* 800A4620 000A1700  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A4624 000A1704  38 A0 00 00 */	li r5, 0x0
/* 800A4628 000A1708  38 84 0D 3C */	addi r4, r4, 0xd3c
/* 800A462C 000A170C  4B F8 C5 81 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A4630 000A1710  3C 80 80 3C */	lis r4, globals@ha
/* 800A4634 000A1714  7C 79 1B 78 */	mr r25, r3
/* 800A4638 000A1718  38 64 05 58 */	addi r3, r4, globals@l
/* 800A463C 000A171C  38 9B 01 08 */	addi r4, r27, 0x108
/* 800A4640 000A1720  3B 03 0E 60 */	addi r24, r3, 0xe60
/* 800A4644 000A1724  38 A0 00 10 */	li r5, 0x10
/* 800A4648 000A1728  7F 03 C3 78 */	mr r3, r24
/* 800A464C 000A172C  4B F5 EE F5 */	bl memcpy
/* 800A4650 000A1730  7F 24 CB 78 */	mr r4, r25
/* 800A4654 000A1734  38 A0 00 04 */	li r5, 0x4
/* 800A4658 000A1738  4B FF E2 11 */	bl ParseFloatList__FPfPci
/* 800A465C 000A173C  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A4660 000A1740  7F E3 FB 78 */	mr r3, r31
/* 800A4664 000A1744  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A4668 000A1748  38 A0 00 00 */	li r5, 0x0
/* 800A466C 000A174C  38 84 0D 49 */	addi r4, r4, 0xd49
/* 800A4670 000A1750  4B F8 C5 3D */	bl xIniGetString__FP8xIniFilePcPc
/* 800A4674 000A1754  3C 80 80 3C */	lis r4, globals@ha
/* 800A4678 000A1758  7C 7A 1B 78 */	mr r26, r3
/* 800A467C 000A175C  38 64 05 58 */	addi r3, r4, globals@l
/* 800A4680 000A1760  38 9B 01 18 */	addi r4, r27, 0x118
/* 800A4684 000A1764  3B 23 0E A0 */	addi r25, r3, 0xea0
/* 800A4688 000A1768  38 A0 00 10 */	li r5, 0x10
/* 800A468C 000A176C  7F 23 CB 78 */	mr r3, r25
/* 800A4690 000A1770  4B F5 EE B1 */	bl memcpy
/* 800A4694 000A1774  7F 44 D3 78 */	mr r4, r26
/* 800A4698 000A1778  38 A0 00 04 */	li r5, 0x4
/* 800A469C 000A177C  4B FF E1 CD */	bl ParseFloatList__FPfPci
/* 800A46A0 000A1780  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A46A4 000A1784  7F E3 FB 78 */	mr r3, r31
/* 800A46A8 000A1788  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A46AC 000A178C  38 A0 00 00 */	li r5, 0x0
/* 800A46B0 000A1790  38 84 0D 58 */	addi r4, r4, 0xd58
/* 800A46B4 000A1794  4B F8 C4 F9 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A46B8 000A1798  3C 80 80 3C */	lis r4, globals@ha
/* 800A46BC 000A179C  7C 7A 1B 78 */	mr r26, r3
/* 800A46C0 000A17A0  38 64 05 58 */	addi r3, r4, globals@l
/* 800A46C4 000A17A4  38 9B 01 28 */	addi r4, r27, 0x128
/* 800A46C8 000A17A8  3B A3 0E 70 */	addi r29, r3, 0xe70
/* 800A46CC 000A17AC  38 A0 00 10 */	li r5, 0x10
/* 800A46D0 000A17B0  7F A3 EB 78 */	mr r3, r29
/* 800A46D4 000A17B4  4B F5 EE 6D */	bl memcpy
/* 800A46D8 000A17B8  7F 44 D3 78 */	mr r4, r26
/* 800A46DC 000A17BC  38 A0 00 04 */	li r5, 0x4
/* 800A46E0 000A17C0  4B FF E1 89 */	bl ParseFloatList__FPfPci
/* 800A46E4 000A17C4  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A46E8 000A17C8  7F E3 FB 78 */	mr r3, r31
/* 800A46EC 000A17CC  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A46F0 000A17D0  38 A0 00 00 */	li r5, 0x0
/* 800A46F4 000A17D4  38 84 0D 67 */	addi r4, r4, 0xd67
/* 800A46F8 000A17D8  4B F8 C4 B5 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A46FC 000A17DC  3C 80 80 3C */	lis r4, globals@ha
/* 800A4700 000A17E0  7C 7A 1B 78 */	mr r26, r3
/* 800A4704 000A17E4  38 64 05 58 */	addi r3, r4, globals@l
/* 800A4708 000A17E8  38 9B 01 38 */	addi r4, r27, 0x138
/* 800A470C 000A17EC  3A E3 0E 80 */	addi r23, r3, 0xe80
/* 800A4710 000A17F0  38 A0 00 10 */	li r5, 0x10
/* 800A4714 000A17F4  7E E3 BB 78 */	mr r3, r23
/* 800A4718 000A17F8  4B F5 EE 29 */	bl memcpy
/* 800A471C 000A17FC  7F 44 D3 78 */	mr r4, r26
/* 800A4720 000A1800  38 A0 00 04 */	li r5, 0x4
/* 800A4724 000A1804  4B FF E1 45 */	bl ParseFloatList__FPfPci
/* 800A4728 000A1808  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A472C 000A180C  7F E3 FB 78 */	mr r3, r31
/* 800A4730 000A1810  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A4734 000A1814  38 A0 00 00 */	li r5, 0x0
/* 800A4738 000A1818  38 84 0D 76 */	addi r4, r4, 0xd76
/* 800A473C 000A181C  4B F8 C4 71 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A4740 000A1820  3C 80 80 3C */	lis r4, globals@ha
/* 800A4744 000A1824  7C 7A 1B 78 */	mr r26, r3
/* 800A4748 000A1828  38 64 05 58 */	addi r3, r4, globals@l
/* 800A474C 000A182C  38 9B 01 48 */	addi r4, r27, 0x148
/* 800A4750 000A1830  3A C3 0E 90 */	addi r22, r3, 0xe90
/* 800A4754 000A1834  38 A0 00 10 */	li r5, 0x10
/* 800A4758 000A1838  7E C3 B3 78 */	mr r3, r22
/* 800A475C 000A183C  4B F5 ED E5 */	bl memcpy
/* 800A4760 000A1840  7F 44 D3 78 */	mr r4, r26
/* 800A4764 000A1844  38 A0 00 04 */	li r5, 0x4
/* 800A4768 000A1848  4B FF E1 01 */	bl ParseFloatList__FPfPci
/* 800A476C 000A184C  93 9E 09 C4 */	stw r28, 0x9c4(r30)
/* 800A4770 000A1850  7F 03 C3 78 */	mr r3, r24
/* 800A4774 000A1854  38 80 00 00 */	li r4, 0x0
/* 800A4778 000A1858  4B FD 27 B5 */	bl CalcJumpImpulse__FP10zJumpParamPC15zPlayerSettings
/* 800A477C 000A185C  7F 23 CB 78 */	mr r3, r25
/* 800A4780 000A1860  38 80 00 00 */	li r4, 0x0
/* 800A4784 000A1864  4B FD 27 A9 */	bl CalcJumpImpulse__FP10zJumpParamPC15zPlayerSettings
/* 800A4788 000A1868  7F A3 EB 78 */	mr r3, r29
/* 800A478C 000A186C  38 80 00 00 */	li r4, 0x0
/* 800A4790 000A1870  4B FD 27 9D */	bl CalcJumpImpulse__FP10zJumpParamPC15zPlayerSettings
/* 800A4794 000A1874  7E E3 BB 78 */	mr r3, r23
/* 800A4798 000A1878  38 80 00 00 */	li r4, 0x0
/* 800A479C 000A187C  4B FD 27 91 */	bl CalcJumpImpulse__FP10zJumpParamPC15zPlayerSettings
/* 800A47A0 000A1880  7E C3 B3 78 */	mr r3, r22
/* 800A47A4 000A1884  38 80 00 00 */	li r4, 0x0
/* 800A47A8 000A1888  4B FD 27 85 */	bl CalcJumpImpulse__FP10zJumpParamPC15zPlayerSettings
/* 800A47AC 000A188C  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A47B0 000A1890  C0 22 92 DC */	lfs f1, "@1001"@sda21(r2)
/* 800A47B4 000A1894  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A47B8 000A1898  7F E3 FB 78 */	mr r3, r31
/* 800A47BC 000A189C  38 84 0D 83 */	addi r4, r4, 0xd83
/* 800A47C0 000A18A0  4B F8 C3 85 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A47C4 000A18A4  3C 60 80 3C */	lis r3, globals@ha
/* 800A47C8 000A18A8  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A47CC 000A18AC  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A47D0 000A18B0  7F E3 FB 78 */	mr r3, r31
/* 800A47D4 000A18B4  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A47D8 000A18B8  D0 25 0E D0 */	stfs f1, 0xed0(r5)
/* 800A47DC 000A18BC  38 84 0D 9C */	addi r4, r4, 0xd9c
/* 800A47E0 000A18C0  38 A0 00 00 */	li r5, 0x0
/* 800A47E4 000A18C4  4B F8 C3 C9 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A47E8 000A18C8  3C 80 80 3C */	lis r4, globals@ha
/* 800A47EC 000A18CC  7C 78 1B 78 */	mr r24, r3
/* 800A47F0 000A18D0  38 64 05 58 */	addi r3, r4, globals@l
/* 800A47F4 000A18D4  38 9B 01 58 */	addi r4, r27, 0x158
/* 800A47F8 000A18D8  38 63 12 5C */	addi r3, r3, 0x125c
/* 800A47FC 000A18DC  38 A0 00 18 */	li r5, 0x18
/* 800A4800 000A18E0  4B F5 ED 41 */	bl memcpy
/* 800A4804 000A18E4  7F 04 C3 78 */	mr r4, r24
/* 800A4808 000A18E8  38 A0 00 06 */	li r5, 0x6
/* 800A480C 000A18EC  4B FF E0 5D */	bl ParseFloatList__FPfPci
/* 800A4810 000A18F0  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A4814 000A18F4  7F E3 FB 78 */	mr r3, r31
/* 800A4818 000A18F8  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A481C 000A18FC  38 A0 00 00 */	li r5, 0x0
/* 800A4820 000A1900  38 84 0D AC */	addi r4, r4, 0xdac
/* 800A4824 000A1904  4B F8 C3 89 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A4828 000A1908  3C 80 80 3C */	lis r4, globals@ha
/* 800A482C 000A190C  7C 78 1B 78 */	mr r24, r3
/* 800A4830 000A1910  38 64 05 58 */	addi r3, r4, globals@l
/* 800A4834 000A1914  38 9B 01 70 */	addi r4, r27, 0x170
/* 800A4838 000A1918  38 63 12 74 */	addi r3, r3, 0x1274
/* 800A483C 000A191C  38 A0 00 0C */	li r5, 0xc
/* 800A4840 000A1920  4B F5 ED 01 */	bl memcpy
/* 800A4844 000A1924  7F 04 C3 78 */	mr r4, r24
/* 800A4848 000A1928  38 A0 00 03 */	li r5, 0x3
/* 800A484C 000A192C  4B FF E0 1D */	bl ParseFloatList__FPfPci
/* 800A4850 000A1930  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A4854 000A1934  7F E3 FB 78 */	mr r3, r31
/* 800A4858 000A1938  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A485C 000A193C  38 A0 00 00 */	li r5, 0x0
/* 800A4860 000A1940  38 84 0D BC */	addi r4, r4, 0xdbc
/* 800A4864 000A1944  4B F8 C3 49 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A4868 000A1948  3C 80 80 3C */	lis r4, globals@ha
/* 800A486C 000A194C  7C 78 1B 78 */	mr r24, r3
/* 800A4870 000A1950  38 64 05 58 */	addi r3, r4, globals@l
/* 800A4874 000A1954  38 9B 01 7C */	addi r4, r27, 0x17c
/* 800A4878 000A1958  38 63 12 80 */	addi r3, r3, 0x1280
/* 800A487C 000A195C  38 A0 00 0C */	li r5, 0xc
/* 800A4880 000A1960  4B F5 EC C1 */	bl memcpy
/* 800A4884 000A1964  7F 04 C3 78 */	mr r4, r24
/* 800A4888 000A1968  38 A0 00 03 */	li r5, 0x3
/* 800A488C 000A196C  4B FF DF DD */	bl ParseFloatList__FPfPci
/* 800A4890 000A1970  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A4894 000A1974  7F E3 FB 78 */	mr r3, r31
/* 800A4898 000A1978  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A489C 000A197C  38 A0 00 00 */	li r5, 0x0
/* 800A48A0 000A1980  38 84 0D CB */	addi r4, r4, 0xdcb
/* 800A48A4 000A1984  4B F8 C3 09 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A48A8 000A1988  3C 80 80 3C */	lis r4, globals@ha
/* 800A48AC 000A198C  7C 78 1B 78 */	mr r24, r3
/* 800A48B0 000A1990  38 64 05 58 */	addi r3, r4, globals@l
/* 800A48B4 000A1994  38 9B 01 88 */	addi r4, r27, 0x188
/* 800A48B8 000A1998  38 63 12 8C */	addi r3, r3, 0x128c
/* 800A48BC 000A199C  38 A0 00 0C */	li r5, 0xc
/* 800A48C0 000A19A0  4B F5 EC 81 */	bl memcpy
/* 800A48C4 000A19A4  7F 04 C3 78 */	mr r4, r24
/* 800A48C8 000A19A8  38 A0 00 03 */	li r5, 0x3
/* 800A48CC 000A19AC  4B FF DF 9D */	bl ParseFloatList__FPfPci
/* 800A48D0 000A19B0  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A48D4 000A19B4  C0 22 93 60 */	lfs f1, "@1034"@sda21(r2)
/* 800A48D8 000A19B8  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A48DC 000A19BC  7F E3 FB 78 */	mr r3, r31
/* 800A48E0 000A19C0  38 84 0D D9 */	addi r4, r4, 0xdd9
/* 800A48E4 000A19C4  4B F8 C2 61 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A48E8 000A19C8  3C 60 80 3C */	lis r3, globals@ha
/* 800A48EC 000A19CC  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A48F0 000A19D0  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A48F4 000A19D4  7F E3 FB 78 */	mr r3, r31
/* 800A48F8 000A19D8  D0 25 12 98 */	stfs f1, 0x1298(r5)
/* 800A48FC 000A19DC  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A4900 000A19E0  38 84 0D EB */	addi r4, r4, 0xdeb
/* 800A4904 000A19E4  C0 22 93 64 */	lfs f1, "@1035"@sda21(r2)
/* 800A4908 000A19E8  4B F8 C2 3D */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A490C 000A19EC  3C 60 80 3C */	lis r3, globals@ha
/* 800A4910 000A19F0  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A4914 000A19F4  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A4918 000A19F8  7F E3 FB 78 */	mr r3, r31
/* 800A491C 000A19FC  D0 25 12 9C */	stfs f1, 0x129c(r5)
/* 800A4920 000A1A00  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A4924 000A1A04  38 84 0D FC */	addi r4, r4, 0xdfc
/* 800A4928 000A1A08  C0 22 92 E0 */	lfs f1, "@1002"@sda21(r2)
/* 800A492C 000A1A0C  4B F8 C2 19 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A4930 000A1A10  3C 60 80 3C */	lis r3, globals@ha
/* 800A4934 000A1A14  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A4938 000A1A18  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A493C 000A1A1C  7F E3 FB 78 */	mr r3, r31
/* 800A4940 000A1A20  D0 25 12 A0 */	stfs f1, 0x12a0(r5)
/* 800A4944 000A1A24  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A4948 000A1A28  38 84 0E 0D */	addi r4, r4, 0xe0d
/* 800A494C 000A1A2C  C0 22 93 1C */	lfs f1, "@1017"@sda21(r2)
/* 800A4950 000A1A30  4B F8 C1 F5 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A4954 000A1A34  3C 60 80 3C */	lis r3, globals@ha
/* 800A4958 000A1A38  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A495C 000A1A3C  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A4960 000A1A40  7F E3 FB 78 */	mr r3, r31
/* 800A4964 000A1A44  D0 25 12 A4 */	stfs f1, 0x12a4(r5)
/* 800A4968 000A1A48  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A496C 000A1A4C  38 84 0E 22 */	addi r4, r4, 0xe22
/* 800A4970 000A1A50  C0 22 92 F4 */	lfs f1, "@1007"@sda21(r2)
/* 800A4974 000A1A54  4B F8 C1 D1 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A4978 000A1A58  3C 60 80 3C */	lis r3, globals@ha
/* 800A497C 000A1A5C  38 63 05 58 */	addi r3, r3, globals@l
/* 800A4980 000A1A60  D4 23 13 1C */	stfsu f1, 0x131c(r3)
/* 800A4984 000A1A64  4B FF DF 05 */	bl zLedgeAdjust__FP16zLedgeGrabParams
/* 800A4988 000A1A68  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A498C 000A1A6C  7F E3 FB 78 */	mr r3, r31
/* 800A4990 000A1A70  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A4994 000A1A74  38 A0 00 00 */	li r5, 0x0
/* 800A4998 000A1A78  38 84 0E 37 */	addi r4, r4, 0xe37
/* 800A499C 000A1A7C  4B F8 C2 11 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A49A0 000A1A80  3C 80 80 3C */	lis r4, globals@ha
/* 800A49A4 000A1A84  7C 79 1B 78 */	mr r25, r3
/* 800A49A8 000A1A88  38 64 05 58 */	addi r3, r4, globals@l
/* 800A49AC 000A1A8C  38 9B 01 94 */	addi r4, r27, 0x194
/* 800A49B0 000A1A90  3B 03 12 A8 */	addi r24, r3, 0x12a8
/* 800A49B4 000A1A94  38 A0 00 10 */	li r5, 0x10
/* 800A49B8 000A1A98  7F 03 C3 78 */	mr r3, r24
/* 800A49BC 000A1A9C  4B F5 EB 85 */	bl memcpy
/* 800A49C0 000A1AA0  7F 24 CB 78 */	mr r4, r25
/* 800A49C4 000A1AA4  38 A0 00 04 */	li r5, 0x4
/* 800A49C8 000A1AA8  4B FF DE A1 */	bl ParseFloatList__FPfPci
/* 800A49CC 000A1AAC  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A49D0 000A1AB0  7F E3 FB 78 */	mr r3, r31
/* 800A49D4 000A1AB4  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A49D8 000A1AB8  38 A0 00 00 */	li r5, 0x0
/* 800A49DC 000A1ABC  38 84 0E 42 */	addi r4, r4, 0xe42
/* 800A49E0 000A1AC0  4B F8 C1 CD */	bl xIniGetString__FP8xIniFilePcPc
/* 800A49E4 000A1AC4  3C 80 80 3C */	lis r4, globals@ha
/* 800A49E8 000A1AC8  7C 7A 1B 78 */	mr r26, r3
/* 800A49EC 000A1ACC  38 64 05 58 */	addi r3, r4, globals@l
/* 800A49F0 000A1AD0  38 9B 01 A4 */	addi r4, r27, 0x1a4
/* 800A49F4 000A1AD4  3B 23 12 E8 */	addi r25, r3, 0x12e8
/* 800A49F8 000A1AD8  38 A0 00 10 */	li r5, 0x10
/* 800A49FC 000A1ADC  7F 23 CB 78 */	mr r3, r25
/* 800A4A00 000A1AE0  4B F5 EB 41 */	bl memcpy
/* 800A4A04 000A1AE4  7F 44 D3 78 */	mr r4, r26
/* 800A4A08 000A1AE8  38 A0 00 04 */	li r5, 0x4
/* 800A4A0C 000A1AEC  4B FF DE 5D */	bl ParseFloatList__FPfPci
/* 800A4A10 000A1AF0  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A4A14 000A1AF4  7F E3 FB 78 */	mr r3, r31
/* 800A4A18 000A1AF8  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A4A1C 000A1AFC  38 A0 00 00 */	li r5, 0x0
/* 800A4A20 000A1B00  38 84 0E 4F */	addi r4, r4, 0xe4f
/* 800A4A24 000A1B04  4B F8 C1 89 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A4A28 000A1B08  3C 80 80 3C */	lis r4, globals@ha
/* 800A4A2C 000A1B0C  7C 7A 1B 78 */	mr r26, r3
/* 800A4A30 000A1B10  38 64 05 58 */	addi r3, r4, globals@l
/* 800A4A34 000A1B14  38 9B 01 B4 */	addi r4, r27, 0x1b4
/* 800A4A38 000A1B18  3A C3 12 B8 */	addi r22, r3, 0x12b8
/* 800A4A3C 000A1B1C  38 A0 00 10 */	li r5, 0x10
/* 800A4A40 000A1B20  7E C3 B3 78 */	mr r3, r22
/* 800A4A44 000A1B24  4B F5 EA FD */	bl memcpy
/* 800A4A48 000A1B28  7F 44 D3 78 */	mr r4, r26
/* 800A4A4C 000A1B2C  38 A0 00 04 */	li r5, 0x4
/* 800A4A50 000A1B30  4B FF DE 19 */	bl ParseFloatList__FPfPci
/* 800A4A54 000A1B34  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A4A58 000A1B38  7F E3 FB 78 */	mr r3, r31
/* 800A4A5C 000A1B3C  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A4A60 000A1B40  38 A0 00 00 */	li r5, 0x0
/* 800A4A64 000A1B44  38 84 0E 5C */	addi r4, r4, 0xe5c
/* 800A4A68 000A1B48  4B F8 C1 45 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A4A6C 000A1B4C  3C 80 80 3C */	lis r4, globals@ha
/* 800A4A70 000A1B50  7C 7A 1B 78 */	mr r26, r3
/* 800A4A74 000A1B54  38 64 05 58 */	addi r3, r4, globals@l
/* 800A4A78 000A1B58  38 9B 01 C4 */	addi r4, r27, 0x1c4
/* 800A4A7C 000A1B5C  3A E3 12 C8 */	addi r23, r3, 0x12c8
/* 800A4A80 000A1B60  38 A0 00 10 */	li r5, 0x10
/* 800A4A84 000A1B64  7E E3 BB 78 */	mr r3, r23
/* 800A4A88 000A1B68  4B F5 EA B9 */	bl memcpy
/* 800A4A8C 000A1B6C  7F 44 D3 78 */	mr r4, r26
/* 800A4A90 000A1B70  38 A0 00 04 */	li r5, 0x4
/* 800A4A94 000A1B74  4B FF DD D5 */	bl ParseFloatList__FPfPci
/* 800A4A98 000A1B78  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A4A9C 000A1B7C  7F E3 FB 78 */	mr r3, r31
/* 800A4AA0 000A1B80  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A4AA4 000A1B84  38 A0 00 00 */	li r5, 0x0
/* 800A4AA8 000A1B88  38 84 0E 69 */	addi r4, r4, 0xe69
/* 800A4AAC 000A1B8C  4B F8 C1 01 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A4AB0 000A1B90  3C 80 80 3C */	lis r4, globals@ha
/* 800A4AB4 000A1B94  7C 7A 1B 78 */	mr r26, r3
/* 800A4AB8 000A1B98  38 64 05 58 */	addi r3, r4, globals@l
/* 800A4ABC 000A1B9C  38 9B 01 D4 */	addi r4, r27, 0x1d4
/* 800A4AC0 000A1BA0  3B 63 12 D8 */	addi r27, r3, 0x12d8
/* 800A4AC4 000A1BA4  38 A0 00 10 */	li r5, 0x10
/* 800A4AC8 000A1BA8  7F 63 DB 78 */	mr r3, r27
/* 800A4ACC 000A1BAC  4B F5 EA 75 */	bl memcpy
/* 800A4AD0 000A1BB0  7F 44 D3 78 */	mr r4, r26
/* 800A4AD4 000A1BB4  38 A0 00 04 */	li r5, 0x4
/* 800A4AD8 000A1BB8  4B FF DD 91 */	bl ParseFloatList__FPfPci
/* 800A4ADC 000A1BBC  93 9E 09 C4 */	stw r28, 0x9c4(r30)
/* 800A4AE0 000A1BC0  7F 03 C3 78 */	mr r3, r24
/* 800A4AE4 000A1BC4  38 80 00 00 */	li r4, 0x0
/* 800A4AE8 000A1BC8  4B FD 24 45 */	bl CalcJumpImpulse__FP10zJumpParamPC15zPlayerSettings
/* 800A4AEC 000A1BCC  7F 23 CB 78 */	mr r3, r25
/* 800A4AF0 000A1BD0  38 80 00 00 */	li r4, 0x0
/* 800A4AF4 000A1BD4  4B FD 24 39 */	bl CalcJumpImpulse__FP10zJumpParamPC15zPlayerSettings
/* 800A4AF8 000A1BD8  7E C3 B3 78 */	mr r3, r22
/* 800A4AFC 000A1BDC  38 80 00 00 */	li r4, 0x0
/* 800A4B00 000A1BE0  4B FD 24 2D */	bl CalcJumpImpulse__FP10zJumpParamPC15zPlayerSettings
/* 800A4B04 000A1BE4  7E E3 BB 78 */	mr r3, r23
/* 800A4B08 000A1BE8  38 80 00 00 */	li r4, 0x0
/* 800A4B0C 000A1BEC  4B FD 24 21 */	bl CalcJumpImpulse__FP10zJumpParamPC15zPlayerSettings
/* 800A4B10 000A1BF0  7F 63 DB 78 */	mr r3, r27
/* 800A4B14 000A1BF4  38 80 00 00 */	li r4, 0x0
/* 800A4B18 000A1BF8  4B FD 24 15 */	bl CalcJumpImpulse__FP10zJumpParamPC15zPlayerSettings
/* 800A4B1C 000A1BFC  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A4B20 000A1C00  C0 22 92 DC */	lfs f1, "@1001"@sda21(r2)
/* 800A4B24 000A1C04  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A4B28 000A1C08  7F E3 FB 78 */	mr r3, r31
/* 800A4B2C 000A1C0C  38 84 0E 74 */	addi r4, r4, 0xe74
/* 800A4B30 000A1C10  4B F8 C0 15 */	bl xIniGetFloat__FP8xIniFilePcf
/* 800A4B34 000A1C14  3C 60 80 3C */	lis r3, globals@ha
/* 800A4B38 000A1C18  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A4B3C 000A1C1C  38 A3 05 58 */	addi r5, r3, globals@l
/* 800A4B40 000A1C20  7F E3 FB 78 */	mr r3, r31
/* 800A4B44 000A1C24  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A4B48 000A1C28  D0 25 13 18 */	stfs f1, 0x1318(r5)
/* 800A4B4C 000A1C2C  38 84 0E 8B */	addi r4, r4, 0xe8b
/* 800A4B50 000A1C30  38 A0 00 01 */	li r5, 0x1
/* 800A4B54 000A1C34  4B F8 BF 95 */	bl xIniGetInt__FP8xIniFilePci
/* 800A4B58 000A1C38  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A4B5C 000A1C3C  90 6D 82 B4 */	stw r3, sShowMenuOnBoot@sda21(r13)
/* 800A4B60 000A1C40  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A4B64 000A1C44  7F E3 FB 78 */	mr r3, r31
/* 800A4B68 000A1C48  38 84 0E 9A */	addi r4, r4, 0xe9a
/* 800A4B6C 000A1C4C  38 A0 00 00 */	li r5, 0x0
/* 800A4B70 000A1C50  4B F8 BF 79 */	bl xIniGetInt__FP8xIniFilePci
/* 800A4B74 000A1C54  90 6D 8E A0 */	stw r3, gGameSfxReport@sda21(r13)
/* 800A4B78 000A1C58  3C 60 80 3C */	lis r3, globals@ha
/* 800A4B7C 000A1C5C  38 A0 00 00 */	li r5, 0x0
/* 800A4B80 000A1C60  38 80 00 01 */	li r4, 0x1
/* 800A4B84 000A1C64  38 63 05 58 */	addi r3, r3, globals@l
/* 800A4B88 000A1C68  38 00 00 02 */	li r0, 0x2
/* 800A4B8C 000A1C6C  93 9E 09 C4 */	stw r28, 0x9c4(r30)
/* 800A4B90 000A1C70  90 BC 00 00 */	stw r5, 0x0(r28)
/* 800A4B94 000A1C74  90 83 0E 10 */	stw r4, 0xe10(r3)
/* 800A4B98 000A1C78  90 03 12 58 */	stw r0, 0x1258(r3)
/* 800A4B9C 000A1C7C  BA C1 00 08 */	lmw r22, 0x8(r1)
/* 800A4BA0 000A1C80  80 01 00 34 */	lwz r0, 0x34(r1)
/* 800A4BA4 000A1C84  7C 08 03 A6 */	mtlr r0
/* 800A4BA8 000A1C88  38 21 00 30 */	addi r1, r1, 0x30
/* 800A4BAC 000A1C8C  4E 80 00 20 */	blr
.endfn zMainParseINIGlobals__FP8xIniFile

# zMainMemLvlChkCB()
.fn zMainMemLvlChkCB__Fv, local
/* 800A4BB0 000A1C90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A4BB4 000A1C94  7C 08 02 A6 */	mflr r0
/* 800A4BB8 000A1C98  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A4BBC 000A1C9C  48 01 00 F5 */	bl zSceneMemLvlChkCB__Fv
/* 800A4BC0 000A1CA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A4BC4 000A1CA4  7C 08 03 A6 */	mtlr r0
/* 800A4BC8 000A1CA8  38 21 00 10 */	addi r1, r1, 0x10
/* 800A4BCC 000A1CAC  4E 80 00 20 */	blr
.endfn zMainMemLvlChkCB__Fv

# zMainShowProgressBar()
.fn zMainShowProgressBar__Fv, global
/* 800A4BD0 000A1CB0  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 800A4BD4 000A1CB4  7C 08 02 A6 */	mflr r0
/* 800A4BD8 000A1CB8  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 800A4BDC 000A1CBC  93 E1 00 DC */	stw r31, 0xdc(r1)
/* 800A4BE0 000A1CC0  48 00 20 09 */	bl zMenuIsFirstBoot__Fv
/* 800A4BE4 000A1CC4  2C 03 00 00 */	cmpwi r3, 0x0
/* 800A4BE8 000A1CC8  41 82 00 D4 */	beq .L_800A4CBC
/* 800A4BEC 000A1CCC  80 0D 90 18 */	lwz r0, percentageDone@sda21(r13)
/* 800A4BF0 000A1CD0  2C 00 00 64 */	cmpwi r0, 0x64
/* 800A4BF4 000A1CD4  40 81 00 0C */	ble .L_800A4C00
/* 800A4BF8 000A1CD8  38 00 00 64 */	li r0, 0x64
/* 800A4BFC 000A1CDC  90 0D 90 18 */	stw r0, percentageDone@sda21(r13)
.L_800A4C00:
/* 800A4C00 000A1CE0  3C 60 66 66 */	lis r3, 0x6666
/* 800A4C04 000A1CE4  80 0D 90 18 */	lwz r0, percentageDone@sda21(r13)
/* 800A4C08 000A1CE8  38 63 66 67 */	addi r3, r3, 0x6667
/* 800A4C0C 000A1CEC  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A4C10 000A1CF0  7C 03 00 96 */	mulhw r0, r3, r0
/* 800A4C14 000A1CF4  38 61 00 08 */	addi r3, r1, 0x8
/* 800A4C18 000A1CF8  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A4C1C 000A1CFC  38 84 0E A4 */	addi r4, r4, 0xea4
/* 800A4C20 000A1D00  7C 00 16 70 */	srawi r0, r0, 2
/* 800A4C24 000A1D04  54 05 0F FE */	srwi r5, r0, 31
/* 800A4C28 000A1D08  7F E0 2A 14 */	add r31, r0, r5
/* 800A4C2C 000A1D0C  48 14 2A D5 */	bl strcpy
/* 800A4C30 000A1D10  38 61 00 94 */	addi r3, r1, 0x94
/* 800A4C34 000A1D14  38 80 00 00 */	li r4, 0x0
/* 800A4C38 000A1D18  38 A0 00 40 */	li r5, 0x40
/* 800A4C3C 000A1D1C  4B F5 E8 1D */	bl memset
/* 800A4C40 000A1D20  38 61 00 14 */	addi r3, r1, 0x14
/* 800A4C44 000A1D24  38 80 00 00 */	li r4, 0x0
/* 800A4C48 000A1D28  38 A0 00 40 */	li r5, 0x40
/* 800A4C4C 000A1D2C  4B F5 E8 0D */	bl memset
/* 800A4C50 000A1D30  38 61 00 54 */	addi r3, r1, 0x54
/* 800A4C54 000A1D34  38 81 00 08 */	addi r4, r1, 0x8
/* 800A4C58 000A1D38  48 14 2A A9 */	bl strcpy
/* 800A4C5C 000A1D3C  38 61 00 54 */	addi r3, r1, 0x54
/* 800A4C60 000A1D40  38 00 00 00 */	li r0, 0x0
/* 800A4C64 000A1D44  7C 03 F9 AE */	stbx r0, r3, r31
/* 800A4C68 000A1D48  38 61 00 08 */	addi r3, r1, 0x8
/* 800A4C6C 000A1D4C  48 14 2B 4D */	bl strlen
/* 800A4C70 000A1D50  38 81 00 08 */	addi r4, r1, 0x8
/* 800A4C74 000A1D54  7C BF 18 50 */	subf r5, r31, r3
/* 800A4C78 000A1D58  38 61 00 14 */	addi r3, r1, 0x14
/* 800A4C7C 000A1D5C  7C 84 FA 14 */	add r4, r4, r31
/* 800A4C80 000A1D60  4B F5 E8 C1 */	bl memcpy
/* 800A4C84 000A1D64  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A4C88 000A1D68  38 61 00 94 */	addi r3, r1, 0x94
/* 800A4C8C 000A1D6C  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A4C90 000A1D70  38 A1 00 54 */	addi r5, r1, 0x54
/* 800A4C94 000A1D74  38 84 0E AF */	addi r4, r4, 0xeaf
/* 800A4C98 000A1D78  38 C1 00 14 */	addi r6, r1, 0x14
/* 800A4C9C 000A1D7C  4C C6 31 82 */	crclr 4*cr1+eq
/* 800A4CA0 000A1D80  48 13 F2 95 */	bl sprintf
/* 800A4CA4 000A1D84  38 61 00 94 */	addi r3, r1, 0x94
/* 800A4CA8 000A1D88  38 80 00 01 */	li r4, 0x1
/* 800A4CAC 000A1D8C  48 00 11 99 */	bl zMainMemCardRenderText__FPCcb
/* 800A4CB0 000A1D90  80 6D 90 18 */	lwz r3, percentageDone@sda21(r13)
/* 800A4CB4 000A1D94  38 03 00 0A */	addi r0, r3, 0xa
/* 800A4CB8 000A1D98  90 0D 90 18 */	stw r0, percentageDone@sda21(r13)
.L_800A4CBC:
/* 800A4CBC 000A1D9C  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 800A4CC0 000A1DA0  83 E1 00 DC */	lwz r31, 0xdc(r1)
/* 800A4CC4 000A1DA4  7C 08 03 A6 */	mtlr r0
/* 800A4CC8 000A1DA8  38 21 00 E0 */	addi r1, r1, 0xe0
/* 800A4CCC 000A1DAC  4E 80 00 20 */	blr
.endfn zMainShowProgressBar__Fv

# zMainLoop()
.fn zMainLoop__Fv, local
/* 800A4CD0 000A1DB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A4CD4 000A1DB4  7C 08 02 A6 */	mflr r0
/* 800A4CD8 000A1DB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A4CDC 000A1DBC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800A4CE0 000A1DC0  93 C1 00 08 */	stw r30, 0x8(r1)
/* 800A4CE4 000A1DC4  4B FF FE ED */	bl zMainShowProgressBar__Fv
/* 800A4CE8 000A1DC8  4B F8 EE 69 */	bl xMemPushBase__Fv
/* 800A4CEC 000A1DCC  48 02 FC 65 */	bl iTimeGet__Fv
/* 800A4CF0 000A1DD0  7C 80 23 78 */	mr r0, r4
/* 800A4CF4 000A1DD4  3C A0 42 4F */	lis r5, 0x424f
/* 800A4CF8 000A1DD8  7C 7E 1B 78 */	mr r30, r3
/* 800A4CFC 000A1DDC  38 80 00 00 */	li r4, 0x0
/* 800A4D00 000A1DE0  7C 1F 03 78 */	mr r31, r0
/* 800A4D04 000A1DE4  38 65 4F 54 */	addi r3, r5, 0x4f54
/* 800A4D08 000A1DE8  4B FA 8F 8D */	bl xUtil_idtag2string__FUii
/* 800A4D0C 000A1DEC  7F E4 FB 78 */	mr r4, r31
/* 800A4D10 000A1DF0  7F C3 F3 78 */	mr r3, r30
/* 800A4D14 000A1DF4  48 02 FC 6D */	bl iTimeDiffSec__Fx
/* 800A4D18 000A1DF8  3C 60 42 4F */	lis r3, 0x424f
/* 800A4D1C 000A1DFC  38 80 00 00 */	li r4, 0x0
/* 800A4D20 000A1E00  38 63 4F 54 */	addi r3, r3, 0x4f54
/* 800A4D24 000A1E04  38 A0 00 01 */	li r5, 0x1
/* 800A4D28 000A1E08  4B FA 64 6D */	bl xSTPreLoadScene__FUiPvi
/* 800A4D2C 000A1E0C  48 02 FC 25 */	bl iTimeGet__Fv
/* 800A4D30 000A1E10  3C A0 42 4F */	lis r5, 0x424f
/* 800A4D34 000A1E14  7C 9F 23 78 */	mr r31, r4
/* 800A4D38 000A1E18  7C 7E 1B 78 */	mr r30, r3
/* 800A4D3C 000A1E1C  38 80 00 00 */	li r4, 0x0
/* 800A4D40 000A1E20  38 65 4F 54 */	addi r3, r5, 0x4f54
/* 800A4D44 000A1E24  4B FA 8F 51 */	bl xUtil_idtag2string__FUii
/* 800A4D48 000A1E28  7F E4 FB 78 */	mr r4, r31
/* 800A4D4C 000A1E2C  7F C3 F3 78 */	mr r3, r30
/* 800A4D50 000A1E30  48 02 FC 31 */	bl iTimeDiffSec__Fx
/* 800A4D54 000A1E34  3C 60 42 4F */	lis r3, 0x424f
/* 800A4D58 000A1E38  38 80 00 01 */	li r4, 0x1
/* 800A4D5C 000A1E3C  38 63 4F 54 */	addi r3, r3, 0x4f54
/* 800A4D60 000A1E40  4B FA 65 E5 */	bl xSTQueueSceneAssets__FUii
/* 800A4D64 000A1E44  48 02 FB ED */	bl iTimeGet__Fv
/* 800A4D68 000A1E48  3C A0 42 4F */	lis r5, 0x424f
/* 800A4D6C 000A1E4C  7C 9F 23 78 */	mr r31, r4
/* 800A4D70 000A1E50  7C 7E 1B 78 */	mr r30, r3
/* 800A4D74 000A1E54  38 80 00 00 */	li r4, 0x0
/* 800A4D78 000A1E58  38 65 4F 54 */	addi r3, r5, 0x4f54
/* 800A4D7C 000A1E5C  4B FA 8F 19 */	bl xUtil_idtag2string__FUii
/* 800A4D80 000A1E60  7F E4 FB 78 */	mr r4, r31
/* 800A4D84 000A1E64  7F C3 F3 78 */	mr r3, r30
/* 800A4D88 000A1E68  48 02 FB F9 */	bl iTimeDiffSec__Fx
/* 800A4D8C 000A1E6C  3F E0 42 4F */	lis r31, 0x424f
.L_800A4D90:
/* 800A4D90 000A1E70  38 7F 4F 54 */	addi r3, r31, 0x4f54
/* 800A4D94 000A1E74  4B FA 67 01 */	bl xSTLoadStep__FUi
/* 800A4D98 000A1E78  C0 02 92 E0 */	lfs f0, "@1002"@sda21(r2)
/* 800A4D9C 000A1E7C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A4DA0 000A1E80  41 80 FF F0 */	blt .L_800A4D90
/* 800A4DA4 000A1E84  3C 60 42 4F */	lis r3, 0x424f
/* 800A4DA8 000A1E88  38 80 00 01 */	li r4, 0x1
/* 800A4DAC 000A1E8C  38 63 4F 54 */	addi r3, r3, 0x4f54
/* 800A4DB0 000A1E90  4B FA 67 39 */	bl xSTDisconnect__FUii
/* 800A4DB4 000A1E94  48 02 FB 9D */	bl iTimeGet__Fv
/* 800A4DB8 000A1E98  3C A0 42 4F */	lis r5, 0x424f
/* 800A4DBC 000A1E9C  7C 9F 23 78 */	mr r31, r4
/* 800A4DC0 000A1EA0  7C 7E 1B 78 */	mr r30, r3
/* 800A4DC4 000A1EA4  38 80 00 00 */	li r4, 0x0
/* 800A4DC8 000A1EA8  38 65 4F 54 */	addi r3, r5, 0x4f54
/* 800A4DCC 000A1EAC  4B FA 8E C9 */	bl xUtil_idtag2string__FUii
/* 800A4DD0 000A1EB0  7F E4 FB 78 */	mr r4, r31
/* 800A4DD4 000A1EB4  7F C3 F3 78 */	mr r3, r30
/* 800A4DD8 000A1EB8  48 02 FB A9 */	bl iTimeDiffSec__Fx
/* 800A4DDC 000A1EBC  4B FF FD F5 */	bl zMainShowProgressBar__Fv
/* 800A4DE0 000A1EC0  3C 60 50 4C */	lis r3, 0x504c
/* 800A4DE4 000A1EC4  38 80 00 00 */	li r4, 0x0
/* 800A4DE8 000A1EC8  38 63 41 54 */	addi r3, r3, 0x4154
/* 800A4DEC 000A1ECC  38 A0 00 01 */	li r5, 0x1
/* 800A4DF0 000A1ED0  4B FA 63 A5 */	bl xSTPreLoadScene__FUiPvi
/* 800A4DF4 000A1ED4  3C 60 50 4C */	lis r3, 0x504c
/* 800A4DF8 000A1ED8  38 80 00 01 */	li r4, 0x1
/* 800A4DFC 000A1EDC  38 63 41 54 */	addi r3, r3, 0x4154
/* 800A4E00 000A1EE0  4B FA 65 45 */	bl xSTQueueSceneAssets__FUii
/* 800A4E04 000A1EE4  3F E0 50 4C */	lis r31, 0x504c
.L_800A4E08:
/* 800A4E08 000A1EE8  38 7F 41 54 */	addi r3, r31, 0x4154
/* 800A4E0C 000A1EEC  4B FA 66 89 */	bl xSTLoadStep__FUi
/* 800A4E10 000A1EF0  C0 02 92 E0 */	lfs f0, "@1002"@sda21(r2)
/* 800A4E14 000A1EF4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A4E18 000A1EF8  41 80 FF F0 */	blt .L_800A4E08
/* 800A4E1C 000A1EFC  3C 60 50 4C */	lis r3, 0x504c
/* 800A4E20 000A1F00  38 80 00 01 */	li r4, 0x1
/* 800A4E24 000A1F04  38 63 41 54 */	addi r3, r3, 0x4154
/* 800A4E28 000A1F08  4B FA 66 C1 */	bl xSTDisconnect__FUii
/* 800A4E2C 000A1F0C  4B FF FD A5 */	bl zMainShowProgressBar__Fv
/* 800A4E30 000A1F10  48 02 FB 21 */	bl iTimeGet__Fv
/* 800A4E34 000A1F14  48 09 4D 81 */	bl xShadowSimple_Init__Fv
/* 800A4E38 000A1F18  3C 60 50 49 */	lis r3, 0x5049
/* 800A4E3C 000A1F1C  38 80 00 00 */	li r4, 0x0
/* 800A4E40 000A1F20  38 63 43 4B */	addi r3, r3, 0x434b
/* 800A4E44 000A1F24  38 A0 00 00 */	li r5, 0x0
/* 800A4E48 000A1F28  4B FA 6A 59 */	bl xSTFindAssetByType__FUiiPUi
/* 800A4E4C 000A1F2C  3C 80 80 3C */	lis r4, globals@ha
/* 800A4E50 000A1F30  38 84 05 58 */	addi r4, r4, globals@l
/* 800A4E54 000A1F34  90 64 1F B8 */	stw r3, 0x1fb8(r4)
/* 800A4E58 000A1F38  48 00 3F 99 */	bl zPickupTableInit__Fv
/* 800A4E5C 000A1F3C  4B F8 EC F5 */	bl xMemPushBase__Fv
/* 800A4E60 000A1F40  48 02 FA F1 */	bl iTimeGet__Fv
/* 800A4E64 000A1F44  3C A0 4D 4E */	lis r5, 0x4d4e
/* 800A4E68 000A1F48  7C 9F 23 78 */	mr r31, r4
/* 800A4E6C 000A1F4C  7C 7E 1B 78 */	mr r30, r3
/* 800A4E70 000A1F50  38 80 00 00 */	li r4, 0x0
/* 800A4E74 000A1F54  38 65 55 34 */	addi r3, r5, 0x5534
/* 800A4E78 000A1F58  4B FA 8E 1D */	bl xUtil_idtag2string__FUii
/* 800A4E7C 000A1F5C  7F E4 FB 78 */	mr r4, r31
/* 800A4E80 000A1F60  7F C3 F3 78 */	mr r3, r30
/* 800A4E84 000A1F64  48 02 FA FD */	bl iTimeDiffSec__Fx
/* 800A4E88 000A1F68  3C 60 4D 4E */	lis r3, 0x4d4e
/* 800A4E8C 000A1F6C  38 80 00 00 */	li r4, 0x0
/* 800A4E90 000A1F70  38 63 55 34 */	addi r3, r3, 0x5534
/* 800A4E94 000A1F74  38 A0 00 01 */	li r5, 0x1
/* 800A4E98 000A1F78  4B FA 62 FD */	bl xSTPreLoadScene__FUiPvi
/* 800A4E9C 000A1F7C  48 02 FA B5 */	bl iTimeGet__Fv
/* 800A4EA0 000A1F80  3C A0 4D 4E */	lis r5, 0x4d4e
/* 800A4EA4 000A1F84  7C 9F 23 78 */	mr r31, r4
/* 800A4EA8 000A1F88  7C 7E 1B 78 */	mr r30, r3
/* 800A4EAC 000A1F8C  38 80 00 00 */	li r4, 0x0
/* 800A4EB0 000A1F90  38 65 55 34 */	addi r3, r5, 0x5534
/* 800A4EB4 000A1F94  4B FA 8D E1 */	bl xUtil_idtag2string__FUii
/* 800A4EB8 000A1F98  7F E4 FB 78 */	mr r4, r31
/* 800A4EBC 000A1F9C  7F C3 F3 78 */	mr r3, r30
/* 800A4EC0 000A1FA0  48 02 FA C1 */	bl iTimeDiffSec__Fx
/* 800A4EC4 000A1FA4  3C 60 4D 4E */	lis r3, 0x4d4e
/* 800A4EC8 000A1FA8  38 80 00 01 */	li r4, 0x1
/* 800A4ECC 000A1FAC  38 63 55 34 */	addi r3, r3, 0x5534
/* 800A4ED0 000A1FB0  4B FA 64 75 */	bl xSTQueueSceneAssets__FUii
/* 800A4ED4 000A1FB4  48 02 FA 7D */	bl iTimeGet__Fv
/* 800A4ED8 000A1FB8  3C A0 4D 4E */	lis r5, 0x4d4e
/* 800A4EDC 000A1FBC  7C 9F 23 78 */	mr r31, r4
/* 800A4EE0 000A1FC0  7C 7E 1B 78 */	mr r30, r3
/* 800A4EE4 000A1FC4  38 80 00 00 */	li r4, 0x0
/* 800A4EE8 000A1FC8  38 65 55 34 */	addi r3, r5, 0x5534
/* 800A4EEC 000A1FCC  4B FA 8D A9 */	bl xUtil_idtag2string__FUii
/* 800A4EF0 000A1FD0  7F E4 FB 78 */	mr r4, r31
/* 800A4EF4 000A1FD4  7F C3 F3 78 */	mr r3, r30
/* 800A4EF8 000A1FD8  48 02 FA 89 */	bl iTimeDiffSec__Fx
/* 800A4EFC 000A1FDC  3F E0 4D 4E */	lis r31, 0x4d4e
.L_800A4F00:
/* 800A4F00 000A1FE0  38 7F 55 34 */	addi r3, r31, 0x5534
/* 800A4F04 000A1FE4  4B FA 65 91 */	bl xSTLoadStep__FUi
/* 800A4F08 000A1FE8  C0 02 92 E0 */	lfs f0, "@1002"@sda21(r2)
/* 800A4F0C 000A1FEC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A4F10 000A1FF0  41 80 FF F0 */	blt .L_800A4F00
/* 800A4F14 000A1FF4  3C 60 4D 4E */	lis r3, 0x4d4e
/* 800A4F18 000A1FF8  38 80 00 01 */	li r4, 0x1
/* 800A4F1C 000A1FFC  38 63 55 34 */	addi r3, r3, 0x5534
/* 800A4F20 000A2000  4B FA 65 C9 */	bl xSTDisconnect__FUii
/* 800A4F24 000A2004  4B FF FC AD */	bl zMainShowProgressBar__Fv
/* 800A4F28 000A2008  48 02 FA 29 */	bl iTimeGet__Fv
/* 800A4F2C 000A200C  3C A0 4D 4E */	lis r5, 0x4d4e
/* 800A4F30 000A2010  7C 9F 23 78 */	mr r31, r4
/* 800A4F34 000A2014  7C 7E 1B 78 */	mr r30, r3
/* 800A4F38 000A2018  38 80 00 00 */	li r4, 0x0
/* 800A4F3C 000A201C  38 65 55 34 */	addi r3, r5, 0x5534
/* 800A4F40 000A2020  4B FA 8D 55 */	bl xUtil_idtag2string__FUii
/* 800A4F44 000A2024  7F E4 FB 78 */	mr r4, r31
/* 800A4F48 000A2028  7F C3 F3 78 */	mr r3, r30
/* 800A4F4C 000A202C  48 02 FA 35 */	bl iTimeDiffSec__Fx
/* 800A4F50 000A2030  4B F8 EC 01 */	bl xMemPushBase__Fv
/* 800A4F54 000A2034  48 02 F9 FD */	bl iTimeGet__Fv
/* 800A4F58 000A2038  3C A0 4D 4E */	lis r5, 0x4d4e
/* 800A4F5C 000A203C  7C 9F 23 78 */	mr r31, r4
/* 800A4F60 000A2040  7C 7E 1B 78 */	mr r30, r3
/* 800A4F64 000A2044  38 80 00 00 */	li r4, 0x0
/* 800A4F68 000A2048  38 65 55 35 */	addi r3, r5, 0x5535
/* 800A4F6C 000A204C  4B FA 8D 29 */	bl xUtil_idtag2string__FUii
/* 800A4F70 000A2050  7F E4 FB 78 */	mr r4, r31
/* 800A4F74 000A2054  7F C3 F3 78 */	mr r3, r30
/* 800A4F78 000A2058  48 02 FA 09 */	bl iTimeDiffSec__Fx
/* 800A4F7C 000A205C  3C 60 4D 4E */	lis r3, 0x4d4e
/* 800A4F80 000A2060  38 80 00 00 */	li r4, 0x0
/* 800A4F84 000A2064  38 63 55 35 */	addi r3, r3, 0x5535
/* 800A4F88 000A2068  38 A0 00 01 */	li r5, 0x1
/* 800A4F8C 000A206C  4B FA 62 09 */	bl xSTPreLoadScene__FUiPvi
/* 800A4F90 000A2070  48 02 F9 C1 */	bl iTimeGet__Fv
/* 800A4F94 000A2074  3C A0 4D 4E */	lis r5, 0x4d4e
/* 800A4F98 000A2078  7C 9F 23 78 */	mr r31, r4
/* 800A4F9C 000A207C  7C 7E 1B 78 */	mr r30, r3
/* 800A4FA0 000A2080  38 80 00 00 */	li r4, 0x0
/* 800A4FA4 000A2084  38 65 55 35 */	addi r3, r5, 0x5535
/* 800A4FA8 000A2088  4B FA 8C ED */	bl xUtil_idtag2string__FUii
/* 800A4FAC 000A208C  7F E4 FB 78 */	mr r4, r31
/* 800A4FB0 000A2090  7F C3 F3 78 */	mr r3, r30
/* 800A4FB4 000A2094  48 02 F9 CD */	bl iTimeDiffSec__Fx
/* 800A4FB8 000A2098  3C 60 4D 4E */	lis r3, 0x4d4e
/* 800A4FBC 000A209C  38 80 00 01 */	li r4, 0x1
/* 800A4FC0 000A20A0  38 63 55 35 */	addi r3, r3, 0x5535
/* 800A4FC4 000A20A4  4B FA 63 81 */	bl xSTQueueSceneAssets__FUii
/* 800A4FC8 000A20A8  48 02 F9 89 */	bl iTimeGet__Fv
/* 800A4FCC 000A20AC  3C A0 4D 4E */	lis r5, 0x4d4e
/* 800A4FD0 000A20B0  7C 9F 23 78 */	mr r31, r4
/* 800A4FD4 000A20B4  7C 7E 1B 78 */	mr r30, r3
/* 800A4FD8 000A20B8  38 80 00 00 */	li r4, 0x0
/* 800A4FDC 000A20BC  38 65 55 35 */	addi r3, r5, 0x5535
/* 800A4FE0 000A20C0  4B FA 8C B5 */	bl xUtil_idtag2string__FUii
/* 800A4FE4 000A20C4  7F E4 FB 78 */	mr r4, r31
/* 800A4FE8 000A20C8  7F C3 F3 78 */	mr r3, r30
/* 800A4FEC 000A20CC  48 02 F9 95 */	bl iTimeDiffSec__Fx
/* 800A4FF0 000A20D0  3F E0 4D 4E */	lis r31, 0x4d4e
.L_800A4FF4:
/* 800A4FF4 000A20D4  38 7F 55 35 */	addi r3, r31, 0x5535
/* 800A4FF8 000A20D8  4B FA 64 9D */	bl xSTLoadStep__FUi
/* 800A4FFC 000A20DC  C0 02 92 E0 */	lfs f0, "@1002"@sda21(r2)
/* 800A5000 000A20E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A5004 000A20E4  41 80 FF F0 */	blt .L_800A4FF4
/* 800A5008 000A20E8  3C 60 4D 4E */	lis r3, 0x4d4e
/* 800A500C 000A20EC  38 80 00 01 */	li r4, 0x1
/* 800A5010 000A20F0  38 63 55 35 */	addi r3, r3, 0x5535
/* 800A5014 000A20F4  4B FA 64 D5 */	bl xSTDisconnect__FUii
/* 800A5018 000A20F8  4B FF FB B9 */	bl zMainShowProgressBar__Fv
/* 800A501C 000A20FC  48 02 F9 35 */	bl iTimeGet__Fv
/* 800A5020 000A2100  3C A0 4D 4E */	lis r5, 0x4d4e
/* 800A5024 000A2104  7C 9E 23 78 */	mr r30, r4
/* 800A5028 000A2108  7C 7F 1B 78 */	mr r31, r3
/* 800A502C 000A210C  38 80 00 00 */	li r4, 0x0
/* 800A5030 000A2110  38 65 55 35 */	addi r3, r5, 0x5535
/* 800A5034 000A2114  4B FA 8C 61 */	bl xUtil_idtag2string__FUii
/* 800A5038 000A2118  7F C4 F3 78 */	mr r4, r30
/* 800A503C 000A211C  7F E3 FB 78 */	mr r3, r31
/* 800A5040 000A2120  48 02 F9 41 */	bl iTimeDiffSec__Fx
/* 800A5044 000A2124  4B F8 EE 35 */	bl xModelInit__Fv
/* 800A5048 000A2128  38 60 00 20 */	li r3, 0x20
/* 800A504C 000A212C  38 80 00 40 */	li r4, 0x40
/* 800A5050 000A2130  4B F8 EE 79 */	bl xModelPoolInit__FUiUi
/* 800A5054 000A2134  38 60 00 28 */	li r3, 0x28
/* 800A5058 000A2138  38 80 00 08 */	li r4, 0x8
/* 800A505C 000A213C  4B F8 EE 6D */	bl xModelPoolInit__FUiUi
/* 800A5060 000A2140  38 60 00 38 */	li r3, 0x38
/* 800A5064 000A2144  38 80 00 01 */	li r4, 0x1
/* 800A5068 000A2148  4B F8 EE 61 */	bl xModelPoolInit__FUiUi
/* 800A506C 000A214C  3C 60 80 29 */	lis r3, preinit_bubble_matfx$1073@ha
/* 800A5070 000A2150  38 03 FD 54 */	addi r0, r3, preinit_bubble_matfx$1073@l
/* 800A5074 000A2154  7C 1E 03 78 */	mr r30, r0
/* 800A5078 000A2158  48 00 00 20 */	b .L_800A5098
.L_800A507C:
/* 800A507C 000A215C  38 80 00 00 */	li r4, 0x0
/* 800A5080 000A2160  4B FA 66 8D */	bl xSTFindAsset__FUiPUi
/* 800A5084 000A2164  28 03 00 00 */	cmplwi r3, 0x0
/* 800A5088 000A2168  41 82 00 0C */	beq .L_800A5094
/* 800A508C 000A216C  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 800A5090 000A2170  4B F8 23 D9 */	bl xFXPreAllocMatFX__FP7RpClump
.L_800A5094:
/* 800A5094 000A2174  3B DE 00 04 */	addi r30, r30, 0x4
.L_800A5098:
/* 800A5098 000A2178  80 7E 00 00 */	lwz r3, 0x0(r30)
/* 800A509C 000A217C  28 03 00 00 */	cmplwi r3, 0x0
/* 800A50A0 000A2180  40 82 FF DC */	bne .L_800A507C
/* 800A50A4 000A2184  88 0D 90 20 */	lbz r0, init$1081@sda21(r13)
/* 800A50A8 000A2188  7C 00 07 75 */	extsb. r0, r0
/* 800A50AC 000A218C  40 82 00 18 */	bne .L_800A50C4
/* 800A50B0 000A2190  3C 60 4D 4E */	lis r3, 0x4d4e
/* 800A50B4 000A2194  38 00 00 01 */	li r0, 0x1
/* 800A50B8 000A2198  38 63 55 33 */	addi r3, r3, 0x5533
/* 800A50BC 000A219C  90 6D 90 1C */	stw r3, menuModeID$1080@sda21(r13)
/* 800A50C0 000A21A0  98 0D 90 20 */	stb r0, init$1081@sda21(r13)
.L_800A50C4:
/* 800A50C4 000A21A4  88 0D 90 28 */	lbz r0, init$1084@sda21(r13)
/* 800A50C8 000A21A8  7C 00 07 75 */	extsb. r0, r0
/* 800A50CC 000A21AC  40 82 00 38 */	bne .L_800A5104
/* 800A50D0 000A21B0  3C 60 80 3C */	lis r3, globals@ha
/* 800A50D4 000A21B4  38 00 00 01 */	li r0, 0x1
/* 800A50D8 000A21B8  38 C3 05 58 */	addi r6, r3, globals@l
/* 800A50DC 000A21BC  88 66 06 39 */	lbz r3, 0x639(r6)
/* 800A50E0 000A21C0  88 86 06 38 */	lbz r4, 0x638(r6)
/* 800A50E4 000A21C4  88 A6 06 3A */	lbz r5, 0x63a(r6)
/* 800A50E8 000A21C8  54 63 80 1E */	slwi r3, r3, 16
/* 800A50EC 000A21CC  50 83 C0 0E */	rlwimi r3, r4, 24, 0, 7
/* 800A50F0 000A21D0  88 C6 06 3B */	lbz r6, 0x63b(r6)
/* 800A50F4 000A21D4  50 A3 44 2E */	rlwimi r3, r5, 8, 16, 23
/* 800A50F8 000A21D8  7C C3 1B 78 */	or r3, r6, r3
/* 800A50FC 000A21DC  90 6D 90 24 */	stw r3, gameSceneID$1083@sda21(r13)
/* 800A5100 000A21E0  98 0D 90 28 */	stb r0, init$1084@sda21(r13)
.L_800A5104:
/* 800A5104 000A21E4  80 6D 90 24 */	lwz r3, gameSceneID$1083@sda21(r13)
/* 800A5108 000A21E8  38 80 00 00 */	li r4, 0x0
/* 800A510C 000A21EC  7C 7E 1B 78 */	mr r30, r3
/* 800A5110 000A21F0  4B FA 8B 85 */	bl xUtil_idtag2string__FUii
/* 800A5114 000A21F4  4B F8 EA 3D */	bl xMemPushBase__Fv
/* 800A5118 000A21F8  4B FF FA B9 */	bl zMainShowProgressBar__Fv
/* 800A511C 000A21FC  48 00 06 19 */	bl zMainMemCardSpaceQuery__Fv
/* 800A5120 000A2200  3C 60 80 3C */	lis r3, globals@ha
/* 800A5124 000A2204  3B E3 05 58 */	addi r31, r3, globals@l
.L_800A5128:
/* 800A5128 000A2208  4B FF FA A9 */	bl zMainShowProgressBar__Fv
/* 800A512C 000A220C  4B F9 E4 51 */	bl xSerialWipeMainBuffer__Fv
/* 800A5130 000A2210  4B FA DA 0D */	bl zCutSceneNamesTable_clearAll__Fv
/* 800A5134 000A2214  4B FF FA 9D */	bl zMainShowProgressBar__Fv
/* 800A5138 000A2218  80 0D 82 B4 */	lwz r0, sShowMenuOnBoot@sda21(r13)
/* 800A513C 000A221C  2C 00 00 00 */	cmpwi r0, 0x0
/* 800A5140 000A2220  41 82 00 3C */	beq .L_800A517C
/* 800A5144 000A2224  80 6D 90 1C */	lwz r3, menuModeID$1080@sda21(r13)
/* 800A5148 000A2228  48 00 0E C1 */	bl zMenuInit__FUi
/* 800A514C 000A222C  4B FF FA 85 */	bl zMainShowProgressBar__Fv
/* 800A5150 000A2230  4B FF FA 81 */	bl zMainShowProgressBar__Fv
/* 800A5154 000A2234  48 00 0F 7D */	bl zMenuSetup__Fv
/* 800A5158 000A2238  80 7F 1F C0 */	lwz r3, 0x1fc0(r31)
/* 800A515C 000A223C  80 63 00 44 */	lwz r3, 0x44(r3)
/* 800A5160 000A2240  80 63 00 00 */	lwz r3, 0x0(r3)
/* 800A5164 000A2244  80 63 00 00 */	lwz r3, 0x0(r3)
/* 800A5168 000A2248  4B F8 1E 41 */	bl xFX_SceneEnter__FP7RpWorld
/* 800A516C 000A224C  48 00 10 15 */	bl zMenuLoop__Fv
/* 800A5170 000A2250  7C 7E 1B 78 */	mr r30, r3
/* 800A5174 000A2254  48 00 0F 19 */	bl zMenuExit__Fv
/* 800A5178 000A2258  48 00 00 20 */	b .L_800A5198
.L_800A517C:
/* 800A517C 000A225C  38 00 00 01 */	li r0, 0x1
/* 800A5180 000A2260  38 60 00 0C */	li r3, 0xc
/* 800A5184 000A2264  90 0D 82 B4 */	stw r0, sShowMenuOnBoot@sda21(r13)
/* 800A5188 000A2268  98 1F 06 D2 */	stb r0, 0x6d2(r31)
/* 800A518C 000A226C  4B FF 5A 8D */	bl zGameModeSwitch__F9eGameMode
/* 800A5190 000A2270  38 60 00 00 */	li r3, 0x0
/* 800A5194 000A2274  4B FF 59 99 */	bl zGameStateSwitch__Fi
.L_800A5198:
/* 800A5198 000A2278  28 1E 00 00 */	cmplwi r30, 0x0
/* 800A519C 000A227C  40 82 00 38 */	bne .L_800A51D4
/* 800A51A0 000A2280  48 01 8F 39 */	bl zVarNewGame__Fv
/* 800A51A4 000A2284  C0 22 92 DC */	lfs f1, "@1001"@sda21(r2)
/* 800A51A8 000A2288  48 02 F8 59 */	bl iTimeSetGame__Ff
/* 800A51AC 000A228C  88 1F 06 39 */	lbz r0, 0x639(r31)
/* 800A51B0 000A2290  88 7F 06 38 */	lbz r3, 0x638(r31)
/* 800A51B4 000A2294  54 00 80 1E */	slwi r0, r0, 16
/* 800A51B8 000A2298  88 9F 06 3A */	lbz r4, 0x63a(r31)
/* 800A51BC 000A229C  50 60 C0 0E */	rlwimi r0, r3, 24, 0, 7
/* 800A51C0 000A22A0  88 BF 06 3B */	lbz r5, 0x63b(r31)
/* 800A51C4 000A22A4  50 80 44 2E */	rlwimi r0, r4, 8, 16, 23
/* 800A51C8 000A22A8  7C A0 03 78 */	or r0, r5, r0
/* 800A51CC 000A22AC  90 0D 90 24 */	stw r0, gameSceneID$1083@sda21(r13)
/* 800A51D0 000A22B0  48 00 00 10 */	b .L_800A51E0
.L_800A51D4:
/* 800A51D4 000A22B4  93 CD 90 24 */	stw r30, gameSceneID$1083@sda21(r13)
/* 800A51D8 000A22B8  C0 22 92 DC */	lfs f1, "@1001"@sda21(r2)
/* 800A51DC 000A22BC  48 02 F8 25 */	bl iTimeSetGame__Ff
.L_800A51E0:
/* 800A51E0 000A22C0  80 6D 90 24 */	lwz r3, gameSceneID$1083@sda21(r13)
/* 800A51E4 000A22C4  4B FF 25 39 */	bl zGameInit__FUi
/* 800A51E8 000A22C8  4B FF 26 BD */	bl zGameSetup__Fv
/* 800A51EC 000A22CC  80 6D 90 24 */	lwz r3, gameSceneID$1083@sda21(r13)
/* 800A51F0 000A22D0  48 02 F8 19 */	bl iProfileClear__FUi
/* 800A51F4 000A22D4  4B FF 28 2D */	bl zGameLoop__Fv
/* 800A51F8 000A22D8  4B FF 26 05 */	bl zGameExit__Fv
/* 800A51FC 000A22DC  4B FF FF 2C */	b .L_800A5128
.endfn zMainLoop__Fv

# zMainReadINI()
.fn zMainReadINI__Fv, local
/* 800A5200 000A22E0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800A5204 000A22E4  7C 08 02 A6 */	mflr r0
/* 800A5208 000A22E8  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A520C 000A22EC  38 80 00 00 */	li r4, 0x0
/* 800A5210 000A22F0  90 01 00 24 */	stw r0, 0x24(r1)
/* 800A5214 000A22F4  38 63 D4 94 */	addi r3, r3, "@stringBase0"@l
/* 800A5218 000A22F8  38 A1 00 08 */	addi r5, r1, 0x8
/* 800A521C 000A22FC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800A5220 000A2300  38 63 0E DB */	addi r3, r3, 0xedb
/* 800A5224 000A2304  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800A5228 000A2308  93 A1 00 14 */	stw r29, 0x14(r1)
/* 800A522C 000A230C  93 81 00 10 */	stw r28, 0x10(r1)
/* 800A5230 000A2310  48 01 E0 ED */	bl iFileLoad__FPcPUiPUi
/* 800A5234 000A2314  7C 7F 1B 79 */	mr. r31, r3
/* 800A5238 000A2318  41 82 02 D4 */	beq .L_800A550C
/* 800A523C 000A231C  80 81 00 08 */	lwz r4, 0x8(r1)
/* 800A5240 000A2320  4B F8 B4 8D */	bl xIniParse__FPci
/* 800A5244 000A2324  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A5248 000A2328  38 A0 00 00 */	li r5, 0x0
/* 800A524C 000A232C  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A5250 000A2330  7C 7E 1B 78 */	mr r30, r3
/* 800A5254 000A2334  38 84 0E E2 */	addi r4, r4, 0xee2
/* 800A5258 000A2338  4B F8 B9 55 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A525C 000A233C  28 03 00 00 */	cmplwi r3, 0x0
/* 800A5260 000A2340  41 82 00 08 */	beq .L_800A5268
/* 800A5264 000A2344  48 01 E6 E5 */	bl iFileSetPath__FPc
.L_800A5268:
/* 800A5268 000A2348  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A526C 000A234C  7F C3 F3 78 */	mr r3, r30
/* 800A5270 000A2350  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A5274 000A2354  38 A0 00 00 */	li r5, 0x0
/* 800A5278 000A2358  38 84 0E E7 */	addi r4, r4, 0xee7
/* 800A527C 000A235C  4B F8 B9 31 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A5280 000A2360  7C 7C 1B 79 */	mr. r28, r3
/* 800A5284 000A2364  41 82 00 78 */	beq .L_800A52FC
/* 800A5288 000A2368  3C 80 80 3C */	lis r4, globals@ha
/* 800A528C 000A236C  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A5290 000A2370  38 84 05 58 */	addi r4, r4, globals@l
/* 800A5294 000A2374  3B A4 06 38 */	addi r29, r4, 0x638
/* 800A5298 000A2378  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A529C 000A237C  7F A3 EB 78 */	mr r3, r29
/* 800A52A0 000A2380  38 84 0E E7 */	addi r4, r4, 0xee7
/* 800A52A4 000A2384  48 14 24 5D */	bl strcpy
/* 800A52A8 000A2388  7F 83 E3 78 */	mr r3, r28
/* 800A52AC 000A238C  48 14 25 0D */	bl strlen
/* 800A52B0 000A2390  28 03 00 04 */	cmplwi r3, 0x4
/* 800A52B4 000A2394  40 82 00 48 */	bne .L_800A52FC
/* 800A52B8 000A2398  7F A3 EB 78 */	mr r3, r29
/* 800A52BC 000A239C  7F 84 E3 78 */	mr r4, r28
/* 800A52C0 000A23A0  48 14 24 41 */	bl strcpy
/* 800A52C4 000A23A4  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A52C8 000A23A8  7F 83 E3 78 */	mr r3, r28
/* 800A52CC 000A23AC  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A52D0 000A23B0  38 84 0E EC */	addi r4, r4, 0xeec
/* 800A52D4 000A23B4  4B FA 72 D9 */	bl xStricmp__FPCcPCc
/* 800A52D8 000A23B8  2C 03 00 00 */	cmpwi r3, 0x0
/* 800A52DC 000A23BC  40 82 00 20 */	bne .L_800A52FC
/* 800A52E0 000A23C0  38 00 00 01 */	li r0, 0x1
/* 800A52E4 000A23C4  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A52E8 000A23C8  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A52EC 000A23CC  90 0D 8E DC */	stw r0, gSoak@sda21(r13)
/* 800A52F0 000A23D0  7F A3 EB 78 */	mr r3, r29
/* 800A52F4 000A23D4  38 84 0E F1 */	addi r4, r4, 0xef1
/* 800A52F8 000A23D8  48 14 24 09 */	bl strcpy
.L_800A52FC:
/* 800A52FC 000A23DC  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A5300 000A23E0  7F C3 F3 78 */	mr r3, r30
/* 800A5304 000A23E4  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A5308 000A23E8  38 A0 00 00 */	li r5, 0x0
/* 800A530C 000A23EC  38 84 0E F6 */	addi r4, r4, 0xef6
/* 800A5310 000A23F0  4B F8 B7 D9 */	bl xIniGetInt__FP8xIniFilePci
/* 800A5314 000A23F4  3C A0 80 3C */	lis r5, globals@ha
/* 800A5318 000A23F8  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A531C 000A23FC  38 C5 05 58 */	addi r6, r5, globals@l
/* 800A5320 000A2400  38 A4 D4 94 */	addi r5, r4, "@stringBase0"@l
/* 800A5324 000A2404  90 66 03 2C */	stw r3, 0x32c(r6)
/* 800A5328 000A2408  7F C3 F3 78 */	mr r3, r30
/* 800A532C 000A240C  38 85 0E FE */	addi r4, r5, 0xefe
/* 800A5330 000A2410  38 A5 0F 0F */	addi r5, r5, 0xf0f
/* 800A5334 000A2414  4B F8 B8 79 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A5338 000A2418  3C 80 80 3C */	lis r4, globals@ha
/* 800A533C 000A241C  38 A0 00 80 */	li r5, 0x80
/* 800A5340 000A2420  38 C4 05 58 */	addi r6, r4, globals@l
/* 800A5344 000A2424  7C 64 1B 78 */	mr r4, r3
/* 800A5348 000A2428  38 66 03 30 */	addi r3, r6, 0x330
/* 800A534C 000A242C  48 14 23 71 */	bl strncpy
/* 800A5350 000A2430  3C 80 80 3C */	lis r4, globals@ha
/* 800A5354 000A2434  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A5358 000A2438  38 84 05 58 */	addi r4, r4, globals@l
/* 800A535C 000A243C  38 00 00 00 */	li r0, 0x0
/* 800A5360 000A2440  38 A3 D4 94 */	addi r5, r3, "@stringBase0"@l
/* 800A5364 000A2444  98 04 03 AF */	stb r0, 0x3af(r4)
/* 800A5368 000A2448  7F C3 F3 78 */	mr r3, r30
/* 800A536C 000A244C  38 85 0F 10 */	addi r4, r5, 0xf10
/* 800A5370 000A2450  38 A5 0F 0F */	addi r5, r5, 0xf0f
/* 800A5374 000A2454  4B F8 B8 39 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A5378 000A2458  3C 80 80 3C */	lis r4, globals@ha
/* 800A537C 000A245C  38 A0 00 80 */	li r5, 0x80
/* 800A5380 000A2460  38 C4 05 58 */	addi r6, r4, globals@l
/* 800A5384 000A2464  7C 64 1B 78 */	mr r4, r3
/* 800A5388 000A2468  38 66 03 B0 */	addi r3, r6, 0x3b0
/* 800A538C 000A246C  48 14 23 31 */	bl strncpy
/* 800A5390 000A2470  3C 80 80 3C */	lis r4, globals@ha
/* 800A5394 000A2474  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A5398 000A2478  38 84 05 58 */	addi r4, r4, globals@l
/* 800A539C 000A247C  38 00 00 00 */	li r0, 0x0
/* 800A53A0 000A2480  38 A3 D4 94 */	addi r5, r3, "@stringBase0"@l
/* 800A53A4 000A2484  98 04 04 2F */	stb r0, 0x42f(r4)
/* 800A53A8 000A2488  7F C3 F3 78 */	mr r3, r30
/* 800A53AC 000A248C  38 85 0F 1F */	addi r4, r5, 0xf1f
/* 800A53B0 000A2490  38 A5 0F 0F */	addi r5, r5, 0xf0f
/* 800A53B4 000A2494  4B F8 B7 F9 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A53B8 000A2498  3C 80 80 3C */	lis r4, globals@ha
/* 800A53BC 000A249C  38 A0 00 80 */	li r5, 0x80
/* 800A53C0 000A24A0  38 C4 05 58 */	addi r6, r4, globals@l
/* 800A53C4 000A24A4  7C 64 1B 78 */	mr r4, r3
/* 800A53C8 000A24A8  38 66 04 30 */	addi r3, r6, 0x430
/* 800A53CC 000A24AC  48 14 22 F1 */	bl strncpy
/* 800A53D0 000A24B0  3C 80 80 3C */	lis r4, globals@ha
/* 800A53D4 000A24B4  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A53D8 000A24B8  38 84 05 58 */	addi r4, r4, globals@l
/* 800A53DC 000A24BC  38 00 00 00 */	li r0, 0x0
/* 800A53E0 000A24C0  38 A3 D4 94 */	addi r5, r3, "@stringBase0"@l
/* 800A53E4 000A24C4  98 04 04 AF */	stb r0, 0x4af(r4)
/* 800A53E8 000A24C8  7F C3 F3 78 */	mr r3, r30
/* 800A53EC 000A24CC  38 85 0F 2C */	addi r4, r5, 0xf2c
/* 800A53F0 000A24D0  38 A5 0F 0F */	addi r5, r5, 0xf0f
/* 800A53F4 000A24D4  4B F8 B7 B9 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A53F8 000A24D8  3C 80 80 3C */	lis r4, globals@ha
/* 800A53FC 000A24DC  38 A0 00 80 */	li r5, 0x80
/* 800A5400 000A24E0  38 C4 05 58 */	addi r6, r4, globals@l
/* 800A5404 000A24E4  7C 64 1B 78 */	mr r4, r3
/* 800A5408 000A24E8  38 66 04 B0 */	addi r3, r6, 0x4b0
/* 800A540C 000A24EC  48 14 22 B1 */	bl strncpy
/* 800A5410 000A24F0  3C 80 80 3C */	lis r4, globals@ha
/* 800A5414 000A24F4  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A5418 000A24F8  38 84 05 58 */	addi r4, r4, globals@l
/* 800A541C 000A24FC  38 00 00 00 */	li r0, 0x0
/* 800A5420 000A2500  38 A3 D4 94 */	addi r5, r3, "@stringBase0"@l
/* 800A5424 000A2504  98 04 05 2F */	stb r0, 0x52f(r4)
/* 800A5428 000A2508  7F C3 F3 78 */	mr r3, r30
/* 800A542C 000A250C  38 85 0F 3A */	addi r4, r5, 0xf3a
/* 800A5430 000A2510  38 A5 0F 0F */	addi r5, r5, 0xf0f
/* 800A5434 000A2514  4B F8 B7 79 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A5438 000A2518  3C 80 80 3C */	lis r4, globals@ha
/* 800A543C 000A251C  38 A0 00 80 */	li r5, 0x80
/* 800A5440 000A2520  38 C4 05 58 */	addi r6, r4, globals@l
/* 800A5444 000A2524  7C 64 1B 78 */	mr r4, r3
/* 800A5448 000A2528  38 66 05 30 */	addi r3, r6, 0x530
/* 800A544C 000A252C  48 14 22 71 */	bl strncpy
/* 800A5450 000A2530  3C 80 80 3C */	lis r4, globals@ha
/* 800A5454 000A2534  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A5458 000A2538  38 84 05 58 */	addi r4, r4, globals@l
/* 800A545C 000A253C  38 00 00 00 */	li r0, 0x0
/* 800A5460 000A2540  38 A3 D4 94 */	addi r5, r3, "@stringBase0"@l
/* 800A5464 000A2544  98 04 05 AF */	stb r0, 0x5af(r4)
/* 800A5468 000A2548  7F C3 F3 78 */	mr r3, r30
/* 800A546C 000A254C  38 85 0F 45 */	addi r4, r5, 0xf45
/* 800A5470 000A2550  38 A5 0F 0F */	addi r5, r5, 0xf0f
/* 800A5474 000A2554  4B F8 B7 39 */	bl xIniGetString__FP8xIniFilePcPc
/* 800A5478 000A2558  3C 80 80 3C */	lis r4, globals@ha
/* 800A547C 000A255C  38 A0 00 80 */	li r5, 0x80
/* 800A5480 000A2560  38 C4 05 58 */	addi r6, r4, globals@l
/* 800A5484 000A2564  7C 64 1B 78 */	mr r4, r3
/* 800A5488 000A2568  38 66 05 B0 */	addi r3, r6, 0x5b0
/* 800A548C 000A256C  48 14 22 31 */	bl strncpy
/* 800A5490 000A2570  3C 80 80 3C */	lis r4, globals@ha
/* 800A5494 000A2574  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A5498 000A2578  38 A4 05 58 */	addi r5, r4, globals@l
/* 800A549C 000A257C  38 00 00 00 */	li r0, 0x0
/* 800A54A0 000A2580  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A54A4 000A2584  98 05 06 2F */	stb r0, 0x62f(r5)
/* 800A54A8 000A2588  7F C3 F3 78 */	mr r3, r30
/* 800A54AC 000A258C  38 A0 00 00 */	li r5, 0x0
/* 800A54B0 000A2590  38 84 0F 52 */	addi r4, r4, 0xf52
/* 800A54B4 000A2594  4B F8 B6 35 */	bl xIniGetInt__FP8xIniFilePci
/* 800A54B8 000A2598  3C A0 80 3C */	lis r5, globals@ha
/* 800A54BC 000A259C  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A54C0 000A25A0  38 C5 05 58 */	addi r6, r5, globals@l
/* 800A54C4 000A25A4  38 A0 00 00 */	li r5, 0x0
/* 800A54C8 000A25A8  90 66 06 CC */	stw r3, 0x6cc(r6)
/* 800A54CC 000A25AC  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A54D0 000A25B0  7F C3 F3 78 */	mr r3, r30
/* 800A54D4 000A25B4  38 84 0F 66 */	addi r4, r4, 0xf66
/* 800A54D8 000A25B8  4B F8 B6 11 */	bl xIniGetInt__FP8xIniFilePci
/* 800A54DC 000A25BC  7C 03 00 D0 */	neg r0, r3
/* 800A54E0 000A25C0  3C 80 80 3C */	lis r4, globals@ha
/* 800A54E4 000A25C4  7C 00 1B 78 */	or r0, r0, r3
/* 800A54E8 000A25C8  7F C3 F3 78 */	mr r3, r30
/* 800A54EC 000A25CC  54 00 0F FE */	srwi r0, r0, 31
/* 800A54F0 000A25D0  38 84 05 58 */	addi r4, r4, globals@l
/* 800A54F4 000A25D4  98 04 06 D0 */	stb r0, 0x6d0(r4)
/* 800A54F8 000A25D8  4B FF D3 A5 */	bl zMainParseINIGlobals__FP8xIniFile
/* 800A54FC 000A25DC  7F C3 F3 78 */	mr r3, r30
/* 800A5500 000A25E0  48 01 5B 01 */	bl zUI_ParseINI__FP8xIniFile
/* 800A5504 000A25E4  7F C3 F3 78 */	mr r3, r30
/* 800A5508 000A25E8  4B F8 B5 09 */	bl xIniDestroy__FP8xIniFile
.L_800A550C:
/* 800A550C 000A25EC  48 02 F4 45 */	bl iTimeGet__Fv
/* 800A5510 000A25F0  48 02 F4 71 */	bl iTimeDiffSec__Fx
/* 800A5514 000A25F4  48 02 F4 3D */	bl iTimeGet__Fv
/* 800A5518 000A25F8  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 800A551C 000A25FC  7F E3 FB 78 */	mr r3, r31
/* 800A5520 000A2600  81 84 01 38 */	lwz r12, 0x138(r4)
/* 800A5524 000A2604  7D 89 03 A6 */	mtctr r12
/* 800A5528 000A2608  4E 80 04 21 */	bctrl
/* 800A552C 000A260C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800A5530 000A2610  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800A5534 000A2614  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800A5538 000A2618  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 800A553C 000A261C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 800A5540 000A2620  7C 08 03 A6 */	mtlr r0
/* 800A5544 000A2624  38 21 00 20 */	addi r1, r1, 0x20
/* 800A5548 000A2628  4E 80 00 20 */	blr
.endfn zMainReadINI__Fv

# zMainFirstScreen(int)
.fn zMainFirstScreen__Fi, global
/* 800A554C 000A262C  94 21 FC 70 */	stwu r1, -0x390(r1)
/* 800A5550 000A2630  7C 08 02 A6 */	mflr r0
/* 800A5554 000A2634  90 01 03 94 */	stw r0, 0x394(r1)
/* 800A5558 000A2638  DB E1 03 80 */	stfd f31, 0x380(r1)
/* 800A555C 000A263C  F3 E1 03 88 */	psq_st f31, 0x388(r1), 0, qr0
/* 800A5560 000A2640  93 E1 03 7C */	stw r31, 0x37c(r1)
/* 800A5564 000A2644  93 C1 03 78 */	stw r30, 0x378(r1)
/* 800A5568 000A2648  93 A1 03 74 */	stw r29, 0x374(r1)
/* 800A556C 000A264C  93 81 03 70 */	stw r28, 0x370(r1)
/* 800A5570 000A2650  7C 7C 1B 78 */	mr r28, r3
/* 800A5574 000A2654  38 60 02 80 */	li r3, 0x280
/* 800A5578 000A2658  38 80 01 E0 */	li r4, 0x1e0
/* 800A557C 000A265C  38 A0 00 00 */	li r5, 0x0
/* 800A5580 000A2660  48 01 AB B9 */	bl iCameraCreate__Fiii
/* 800A5584 000A2664  80 02 BE E8 */	lwz r0, "@1163"@sda21(r2)
/* 800A5588 000A2668  7C 7E 1B 78 */	mr r30, r3
/* 800A558C 000A266C  3B E1 00 C0 */	addi r31, r1, 0xc0
/* 800A5590 000A2670  3B A0 00 00 */	li r29, 0x0
/* 800A5594 000A2674  90 01 00 0C */	stw r0, 0xc(r1)
.L_800A5598:
/* 800A5598 000A2678  7F C3 F3 78 */	mr r3, r30
/* 800A559C 000A267C  38 81 00 0C */	addi r4, r1, 0xc
/* 800A55A0 000A2680  38 A0 00 03 */	li r5, 0x3
/* 800A55A4 000A2684  48 19 23 0D */	bl RwCameraClear
/* 800A55A8 000A2688  7F C3 F3 78 */	mr r3, r30
/* 800A55AC 000A268C  48 19 20 05 */	bl RwCameraBeginUpdate
/* 800A55B0 000A2690  2C 1C 00 00 */	cmpwi r28, 0x0
/* 800A55B4 000A2694  41 82 01 14 */	beq .L_800A56C8
/* 800A55B8 000A2698  3C 60 80 26 */	lis r3, "@1170"@ha
/* 800A55BC 000A269C  38 00 00 4D */	li r0, 0x4d
/* 800A55C0 000A26A0  38 63 D2 28 */	addi r3, r3, "@1170"@l
/* 800A55C4 000A26A4  38 A1 01 00 */	addi r5, r1, 0x100
/* 800A55C8 000A26A8  38 83 FF FC */	addi r4, r3, -0x4
/* 800A55CC 000A26AC  7C 09 03 A6 */	mtctr r0
.L_800A55D0:
/* 800A55D0 000A26B0  80 64 00 04 */	lwz r3, 0x4(r4)
/* 800A55D4 000A26B4  84 04 00 08 */	lwzu r0, 0x8(r4)
/* 800A55D8 000A26B8  90 65 00 04 */	stw r3, 0x4(r5)
/* 800A55DC 000A26BC  94 05 00 08 */	stwu r0, 0x8(r5)
/* 800A55E0 000A26C0  42 00 FF F0 */	bdnz .L_800A55D0
/* 800A55E4 000A26C4  80 02 93 68 */	lwz r0, "@1171"@sda21(r2)
/* 800A55E8 000A26C8  88 64 00 04 */	lbz r3, 0x4(r4)
/* 800A55EC 000A26CC  90 01 00 08 */	stw r0, 0x8(r1)
/* 800A55F0 000A26D0  98 65 00 04 */	stb r3, 0x4(r5)
/* 800A55F4 000A26D4  C0 22 93 70 */	lfs f1, "@1199"@sda21(r2)
/* 800A55F8 000A26D8  4B F7 29 C5 */	bl NSCREENY__Ff
/* 800A55FC 000A26DC  FF E0 08 90 */	fmr f31, f1
/* 800A5600 000A26E0  C0 22 93 6C */	lfs f1, "@1198"@sda21(r2)
/* 800A5604 000A26E4  4B F7 29 C5 */	bl NSCREENX__Ff
/* 800A5608 000A26E8  FC 40 F8 90 */	fmr f2, f31
/* 800A560C 000A26EC  3C 60 80 26 */	lis r3, screen_bounds@ha
/* 800A5610 000A26F0  C0 62 92 DC */	lfs f3, "@1001"@sda21(r2)
/* 800A5614 000A26F4  38 C3 D2 18 */	addi r6, r3, screen_bounds@l
/* 800A5618 000A26F8  38 61 00 10 */	addi r3, r1, 0x10
/* 800A561C 000A26FC  38 A1 00 08 */	addi r5, r1, 0x8
/* 800A5620 000A2700  38 80 00 01 */	li r4, 0x1
/* 800A5624 000A2704  4B F7 28 D1 */	bl "create__5xfontFUifff10iColor_tagRC13basic_rect<f>"
/* 800A5628 000A2708  C0 22 92 DC */	lfs f1, "@1001"@sda21(r2)
/* 800A562C 000A270C  3C 60 80 26 */	lis r3, screen_bounds@ha
/* 800A5630 000A2710  38 A3 D2 18 */	addi r5, r3, screen_bounds@l
/* 800A5634 000A2714  38 81 00 10 */	addi r4, r1, 0x10
/* 800A5638 000A2718  FC 40 08 90 */	fmr f2, f1
/* 800A563C 000A271C  38 61 00 34 */	addi r3, r1, 0x34
/* 800A5640 000A2720  FC 60 08 90 */	fmr f3, f1
/* 800A5644 000A2724  38 C0 00 02 */	li r6, 0x2
/* 800A5648 000A2728  FC 80 08 90 */	fmr f4, f1
/* 800A564C 000A272C  4B F7 27 99 */	bl "create__8xtextboxFRC5xfontRC13basic_rect<f>Uiffff"
/* 800A5650 000A2730  38 00 00 0D */	li r0, 0xd
/* 800A5654 000A2734  38 A1 00 98 */	addi r5, r1, 0x98
/* 800A5658 000A2738  38 81 00 30 */	addi r4, r1, 0x30
/* 800A565C 000A273C  7C 09 03 A6 */	mtctr r0
.L_800A5660:
/* 800A5660 000A2740  80 64 00 04 */	lwz r3, 0x4(r4)
/* 800A5664 000A2744  84 04 00 08 */	lwzu r0, 0x8(r4)
/* 800A5668 000A2748  90 65 00 04 */	stw r3, 0x4(r5)
/* 800A566C 000A274C  94 05 00 08 */	stwu r0, 0x8(r5)
/* 800A5670 000A2750  42 00 FF F0 */	bdnz .L_800A5660
/* 800A5674 000A2754  38 61 00 9C */	addi r3, r1, 0x9c
/* 800A5678 000A2758  38 81 01 04 */	addi r4, r1, 0x104
/* 800A567C 000A275C  4B F7 CE 4D */	bl set_text__8xtextboxFPCc
/* 800A5680 000A2760  3C 80 80 26 */	lis r4, screen_bounds@ha
/* 800A5684 000A2764  7F E3 FB 78 */	mr r3, r31
/* 800A5688 000A2768  38 84 D2 18 */	addi r4, r4, screen_bounds@l
/* 800A568C 000A276C  4B F7 29 B5 */	bl "__as__13basic_rect<f>FRC13basic_rect<f>"
/* 800A5690 000A2770  C0 22 93 14 */	lfs f1, "@1015"@sda21(r2)
/* 800A5694 000A2774  7F E3 FB 78 */	mr r3, r31
/* 800A5698 000A2778  4B FA 85 61 */	bl "contract__13basic_rect<f>Ff"
/* 800A569C 000A277C  38 61 00 9C */	addi r3, r1, 0x9c
/* 800A56A0 000A2780  38 80 00 01 */	li r4, 0x1
/* 800A56A4 000A2784  4B FA 84 DD */	bl yextent__8xtextboxCFb
/* 800A56A8 000A2788  D0 21 00 CC */	stfs f1, 0xcc(r1)
/* 800A56AC 000A278C  FC 00 08 18 */	frsp f0, f1
/* 800A56B0 000A2790  38 61 00 9C */	addi r3, r1, 0x9c
/* 800A56B4 000A2794  38 80 00 01 */	li r4, 0x1
/* 800A56B8 000A2798  C0 22 93 08 */	lfs f1, "@1012"@sda21(r2)
/* 800A56BC 000A279C  EC 01 08 3C */	fnmsubs f0, f1, f0, f1
/* 800A56C0 000A27A0  D0 01 00 C4 */	stfs f0, 0xc4(r1)
/* 800A56C4 000A27A4  4B F7 26 E1 */	bl render__8xtextboxCFb
.L_800A56C8:
/* 800A56C8 000A27A8  7F C3 F3 78 */	mr r3, r30
/* 800A56CC 000A27AC  48 19 1E BD */	bl RwCameraEndUpdate
/* 800A56D0 000A27B0  7F C3 F3 78 */	mr r3, r30
/* 800A56D4 000A27B4  38 80 00 00 */	li r4, 0x0
/* 800A56D8 000A27B8  38 A0 00 01 */	li r5, 0x1
/* 800A56DC 000A27BC  48 19 22 21 */	bl RwCameraShowRaster
/* 800A56E0 000A27C0  3B BD 00 01 */	addi r29, r29, 0x1
/* 800A56E4 000A27C4  2C 1D 00 02 */	cmpwi r29, 0x2
/* 800A56E8 000A27C8  41 80 FE B0 */	blt .L_800A5598
/* 800A56EC 000A27CC  3B 80 00 B4 */	li r28, 0xb4
/* 800A56F0 000A27D0  48 00 00 0C */	b .L_800A56FC
.L_800A56F4:
/* 800A56F4 000A27D4  48 0D B5 99 */	bl CheckDVDAndResetState__8iTRCDiskFv
/* 800A56F8 000A27D8  48 02 D9 C9 */	bl iVSync__Fv
.L_800A56FC:
/* 800A56FC 000A27DC  37 9C FF FF */	addic. r28, r28, -0x1
/* 800A5700 000A27E0  40 82 FF F4 */	bne .L_800A56F4
/* 800A5704 000A27E4  7F C3 F3 78 */	mr r3, r30
/* 800A5708 000A27E8  48 01 AB 09 */	bl iCameraDestroy__FP8RwCamera
/* 800A570C 000A27EC  E3 E1 03 88 */	psq_l f31, 0x388(r1), 0, qr0
/* 800A5710 000A27F0  80 01 03 94 */	lwz r0, 0x394(r1)
/* 800A5714 000A27F4  CB E1 03 80 */	lfd f31, 0x380(r1)
/* 800A5718 000A27F8  83 E1 03 7C */	lwz r31, 0x37c(r1)
/* 800A571C 000A27FC  83 C1 03 78 */	lwz r30, 0x378(r1)
/* 800A5720 000A2800  83 A1 03 74 */	lwz r29, 0x374(r1)
/* 800A5724 000A2804  83 81 03 70 */	lwz r28, 0x370(r1)
/* 800A5728 000A2808  7C 08 03 A6 */	mtlr r0
/* 800A572C 000A280C  38 21 03 90 */	addi r1, r1, 0x390
/* 800A5730 000A2810  4E 80 00 20 */	blr
.endfn zMainFirstScreen__Fi

# zMainMemCardSpaceQuery()
.fn zMainMemCardSpaceQuery__Fv, global
/* 800A5734 000A2814  94 21 FD C0 */	stwu r1, -0x240(r1)
/* 800A5738 000A2818  7C 08 02 A6 */	mflr r0
/* 800A573C 000A281C  90 01 02 44 */	stw r0, 0x244(r1)
/* 800A5740 000A2820  DB E1 02 30 */	stfd f31, 0x230(r1)
/* 800A5744 000A2824  F3 E1 02 38 */	psq_st f31, 0x238(r1), 0, qr0
/* 800A5748 000A2828  BE 81 02 00 */	stmw r20, 0x200(r1)
/* 800A574C 000A282C  38 00 00 00 */	li r0, 0x0
/* 800A5750 000A2830  3C 60 00 01 */	lis r3, 0x1
/* 800A5754 000A2834  90 01 00 10 */	stw r0, 0x10(r1)
/* 800A5758 000A2838  38 63 A0 00 */	addi r3, r3, -0x6000
/* 800A575C 000A283C  3B 00 00 01 */	li r24, 0x1
/* 800A5760 000A2840  3A E0 00 01 */	li r23, 0x1
/* 800A5764 000A2844  90 01 00 0C */	stw r0, 0xc(r1)
/* 800A5768 000A2848  3B 40 00 00 */	li r26, 0x0
/* 800A576C 000A284C  3B 60 00 00 */	li r27, 0x0
/* 800A5770 000A2850  3A C0 00 00 */	li r22, 0x0
/* 800A5774 000A2854  90 01 00 08 */	stw r0, 0x8(r1)
/* 800A5778 000A2858  3B 20 FF FF */	li r25, -0x1
/* 800A577C 000A285C  3B C0 00 00 */	li r30, 0x0
/* 800A5780 000A2860  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 800A5784 000A2864  81 84 01 34 */	lwz r12, 0x134(r4)
/* 800A5788 000A2868  7D 89 03 A6 */	mtctr r12
/* 800A578C 000A286C  4E 80 04 21 */	bctrl
/* 800A5790 000A2870  3C 80 80 3C */	lis r4, globals@ha
/* 800A5794 000A2874  7C 7F 1B 78 */	mr r31, r3
/* 800A5798 000A2878  3B 84 05 58 */	addi r28, r4, globals@l
.L_800A579C:
/* 800A579C 000A287C  48 0D B4 F1 */	bl CheckDVDAndResetState__8iTRCDiskFv
/* 800A57A0 000A2880  2C 18 00 00 */	cmpwi r24, 0x0
/* 800A57A4 000A2884  41 82 00 18 */	beq .L_800A57BC
/* 800A57A8 000A2888  38 61 00 10 */	addi r3, r1, 0x10
/* 800A57AC 000A288C  38 81 00 0C */	addi r4, r1, 0xc
/* 800A57B0 000A2890  38 A1 00 08 */	addi r5, r1, 0x8
/* 800A57B4 000A2894  48 00 10 E1 */	bl zMenuCardCheckStartup__FPiPiPi
/* 800A57B8 000A2898  7C 77 1B 78 */	mr r23, r3
.L_800A57BC:
/* 800A57BC 000A289C  80 01 00 10 */	lwz r0, 0x10(r1)
/* 800A57C0 000A28A0  2C 00 FF FF */	cmpwi r0, -0x1
/* 800A57C4 000A28A4  40 82 00 28 */	bne .L_800A57EC
/* 800A57C8 000A28A8  80 01 00 0C */	lwz r0, 0xc(r1)
/* 800A57CC 000A28AC  2C 00 FF FF */	cmpwi r0, -0x1
/* 800A57D0 000A28B0  40 82 00 1C */	bne .L_800A57EC
/* 800A57D4 000A28B4  80 01 00 08 */	lwz r0, 0x8(r1)
/* 800A57D8 000A28B8  2C 00 FF FF */	cmpwi r0, -0x1
/* 800A57DC 000A28BC  40 82 00 10 */	bne .L_800A57EC
/* 800A57E0 000A28C0  3A C0 00 01 */	li r22, 0x1
/* 800A57E4 000A28C4  48 00 13 B5 */	bl zMenuGetBadCard__Fv
/* 800A57E8 000A28C8  3B 23 FF FF */	addi r25, r3, -0x1
.L_800A57EC:
/* 800A57EC 000A28CC  80 01 00 10 */	lwz r0, 0x10(r1)
/* 800A57F0 000A28D0  2C 00 FF FB */	cmpwi r0, -0x5
/* 800A57F4 000A28D4  40 82 00 28 */	bne .L_800A581C
/* 800A57F8 000A28D8  80 01 00 0C */	lwz r0, 0xc(r1)
/* 800A57FC 000A28DC  2C 00 FF FB */	cmpwi r0, -0x5
/* 800A5800 000A28E0  40 82 00 1C */	bne .L_800A581C
/* 800A5804 000A28E4  80 01 00 08 */	lwz r0, 0x8(r1)
/* 800A5808 000A28E8  2C 00 FF FB */	cmpwi r0, -0x5
/* 800A580C 000A28EC  40 82 00 10 */	bne .L_800A581C
/* 800A5810 000A28F0  3A C0 00 02 */	li r22, 0x2
/* 800A5814 000A28F4  48 00 13 85 */	bl zMenuGetBadCard__Fv
/* 800A5818 000A28F8  3B 23 FF FF */	addi r25, r3, -0x1
.L_800A581C:
/* 800A581C 000A28FC  80 01 00 10 */	lwz r0, 0x10(r1)
/* 800A5820 000A2900  2C 00 FF FE */	cmpwi r0, -0x2
/* 800A5824 000A2904  40 82 00 28 */	bne .L_800A584C
/* 800A5828 000A2908  80 01 00 0C */	lwz r0, 0xc(r1)
/* 800A582C 000A290C  2C 00 FF FE */	cmpwi r0, -0x2
/* 800A5830 000A2910  40 82 00 1C */	bne .L_800A584C
/* 800A5834 000A2914  80 01 00 08 */	lwz r0, 0x8(r1)
/* 800A5838 000A2918  2C 00 FF FE */	cmpwi r0, -0x2
/* 800A583C 000A291C  40 82 00 10 */	bne .L_800A584C
/* 800A5840 000A2920  3A C0 00 03 */	li r22, 0x3
/* 800A5844 000A2924  48 00 13 55 */	bl zMenuGetBadCard__Fv
/* 800A5848 000A2928  3B 23 FF FF */	addi r25, r3, -0x1
.L_800A584C:
/* 800A584C 000A292C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 800A5850 000A2930  2C 03 FF FD */	cmpwi r3, -0x3
/* 800A5854 000A2934  40 82 00 24 */	bne .L_800A5878
/* 800A5858 000A2938  80 01 00 0C */	lwz r0, 0xc(r1)
/* 800A585C 000A293C  2C 00 FF FD */	cmpwi r0, -0x3
/* 800A5860 000A2940  40 82 00 18 */	bne .L_800A5878
/* 800A5864 000A2944  80 01 00 08 */	lwz r0, 0x8(r1)
/* 800A5868 000A2948  2C 00 FF FD */	cmpwi r0, -0x3
/* 800A586C 000A294C  40 82 00 0C */	bne .L_800A5878
/* 800A5870 000A2950  3A C0 00 04 */	li r22, 0x4
/* 800A5874 000A2954  3B 20 FF FF */	li r25, -0x1
.L_800A5878:
/* 800A5878 000A2958  2C 03 FF FC */	cmpwi r3, -0x4
/* 800A587C 000A295C  40 82 00 28 */	bne .L_800A58A4
/* 800A5880 000A2960  80 01 00 0C */	lwz r0, 0xc(r1)
/* 800A5884 000A2964  2C 00 FF FC */	cmpwi r0, -0x4
/* 800A5888 000A2968  40 82 00 1C */	bne .L_800A58A4
/* 800A588C 000A296C  80 01 00 08 */	lwz r0, 0x8(r1)
/* 800A5890 000A2970  2C 00 FF FC */	cmpwi r0, -0x4
/* 800A5894 000A2974  40 82 00 10 */	bne .L_800A58A4
/* 800A5898 000A2978  3A C0 00 05 */	li r22, 0x5
/* 800A589C 000A297C  48 00 12 FD */	bl zMenuGetBadCard__Fv
/* 800A58A0 000A2980  3B 23 FF FF */	addi r25, r3, -0x1
.L_800A58A4:
/* 800A58A4 000A2984  2C 19 00 00 */	cmpwi r25, 0x0
/* 800A58A8 000A2988  41 80 01 60 */	blt .L_800A5A08
/* 800A58AC 000A298C  57 40 06 3F */	clrlwi. r0, r26, 24
/* 800A58B0 000A2990  41 82 01 58 */	beq .L_800A5A08
/* 800A58B4 000A2994  7F 23 CB 78 */	mr r3, r25
/* 800A58B8 000A2998  48 11 65 49 */	bl CARDGetResultCode
/* 800A58BC 000A299C  7C 7D 1B 78 */	mr r29, r3
/* 800A58C0 000A29A0  38 61 00 14 */	addi r3, r1, 0x14
/* 800A58C4 000A29A4  38 80 00 00 */	li r4, 0x0
/* 800A58C8 000A29A8  38 A0 00 10 */	li r5, 0x10
/* 800A58CC 000A29AC  4B F5 DB 8D */	bl memset
/* 800A58D0 000A29B0  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A58D4 000A29B4  38 61 00 14 */	addi r3, r1, 0x14
/* 800A58D8 000A29B8  38 84 D4 94 */	addi r4, r4, "@stringBase0"@l
/* 800A58DC 000A29BC  38 84 0F 6E */	addi r4, r4, 0xf6e
/* 800A58E0 000A29C0  48 14 1E 21 */	bl strcpy
/* 800A58E4 000A29C4  7F 23 CB 78 */	mr r3, r25
/* 800A58E8 000A29C8  48 11 7D 6D */	bl CARDGetXferredBytes
/* 800A58EC 000A29CC  7C 7E 18 50 */	subf r3, r30, r3
/* 800A58F0 000A29D0  3C 00 43 30 */	lis r0, 0x4330
/* 800A58F4 000A29D4  6C 64 80 00 */	xoris r4, r3, 0x8000
/* 800A58F8 000A29D8  90 01 01 E8 */	stw r0, 0x1e8(r1)
/* 800A58FC 000A29DC  C8 42 93 80 */	lfd f2, "@1347"@sda21(r2)
/* 800A5900 000A29E0  38 61 00 14 */	addi r3, r1, 0x14
/* 800A5904 000A29E4  90 81 01 EC */	stw r4, 0x1ec(r1)
/* 800A5908 000A29E8  C0 02 93 74 */	lfs f0, "@1344"@sda21(r2)
/* 800A590C 000A29EC  C8 21 01 E8 */	lfd f1, 0x1e8(r1)
/* 800A5910 000A29F0  EC 21 10 28 */	fsubs f1, f1, f2
/* 800A5914 000A29F4  EF E1 00 24 */	fdivs f31, f1, f0
/* 800A5918 000A29F8  48 14 1E A1 */	bl strlen
/* 800A591C 000A29FC  3C 00 43 30 */	lis r0, 0x4330
/* 800A5920 000A2A00  90 61 01 F4 */	stw r3, 0x1f4(r1)
/* 800A5924 000A2A04  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A5928 000A2A08  C8 22 93 88 */	lfd f1, "@1349"@sda21(r2)
/* 800A592C 000A2A0C  90 01 01 F0 */	stw r0, 0x1f0(r1)
/* 800A5930 000A2A10  38 83 D4 94 */	addi r4, r3, "@stringBase0"@l
/* 800A5934 000A2A14  38 A1 00 14 */	addi r5, r1, 0x14
/* 800A5938 000A2A18  38 00 00 4F */	li r0, 0x4f
/* 800A593C 000A2A1C  C8 01 01 F0 */	lfd f0, 0x1f0(r1)
/* 800A5940 000A2A20  38 61 00 E4 */	addi r3, r1, 0xe4
/* 800A5944 000A2A24  38 84 0F 77 */	addi r4, r4, 0xf77
/* 800A5948 000A2A28  EC 00 08 28 */	fsubs f0, f0, f1
/* 800A594C 000A2A2C  EC 1F 00 32 */	fmuls f0, f31, f0
/* 800A5950 000A2A30  FC 00 00 1E */	fctiwz f0, f0
/* 800A5954 000A2A34  D8 01 01 F8 */	stfd f0, 0x1f8(r1)
/* 800A5958 000A2A38  80 C1 01 FC */	lwz r6, 0x1fc(r1)
/* 800A595C 000A2A3C  7C 05 31 AE */	stbx r0, r5, r6
/* 800A5960 000A2A40  4C C6 31 82 */	crclr 4*cr1+eq
/* 800A5964 000A2A44  48 13 E5 D1 */	bl sprintf
/* 800A5968 000A2A48  38 61 00 E4 */	addi r3, r1, 0xe4
/* 800A596C 000A2A4C  38 80 00 01 */	li r4, 0x1
/* 800A5970 000A2A50  48 00 04 D5 */	bl zMainMemCardRenderText__FPCcb
/* 800A5974 000A2A54  2C 1D FF FF */	cmpwi r29, -0x1
/* 800A5978 000A2A58  41 82 00 90 */	beq .L_800A5A08
/* 800A597C 000A2A5C  40 80 00 10 */	bge .L_800A598C
/* 800A5980 000A2A60  2C 1D FF FD */	cmpwi r29, -0x3
/* 800A5984 000A2A64  41 82 00 30 */	beq .L_800A59B4
/* 800A5988 000A2A68  48 00 00 58 */	b .L_800A59E0
.L_800A598C:
/* 800A598C 000A2A6C  2C 1D 00 01 */	cmpwi r29, 0x1
/* 800A5990 000A2A70  40 80 00 50 */	bge .L_800A59E0
/* 800A5994 000A2A74  7F 23 CB 78 */	mr r3, r25
/* 800A5998 000A2A78  48 11 9D 15 */	bl CARDUnmount
/* 800A599C 000A2A7C  3B 00 00 01 */	li r24, 0x1
/* 800A59A0 000A2A80  3B 40 00 00 */	li r26, 0x0
/* 800A59A4 000A2A84  3B 60 00 00 */	li r27, 0x0
/* 800A59A8 000A2A88  3A C0 00 00 */	li r22, 0x0
/* 800A59AC 000A2A8C  3B 20 FF FF */	li r25, -0x1
/* 800A59B0 000A2A90  4B FF FD EC */	b .L_800A579C
.L_800A59B4:
/* 800A59B4 000A2A94  7F 23 CB 78 */	mr r3, r25
/* 800A59B8 000A2A98  48 11 9C F5 */	bl CARDUnmount
/* 800A59BC 000A2A9C  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A59C0 000A2AA0  3B 40 00 00 */	li r26, 0x0
/* 800A59C4 000A2AA4  38 63 D4 94 */	addi r3, r3, "@stringBase0"@l
/* 800A59C8 000A2AA8  3B 60 00 01 */	li r27, 0x1
/* 800A59CC 000A2AAC  38 63 0F 9B */	addi r3, r3, 0xf9b
/* 800A59D0 000A2AB0  3B 20 FF FF */	li r25, -0x1
/* 800A59D4 000A2AB4  38 80 00 01 */	li r4, 0x1
/* 800A59D8 000A2AB8  48 00 04 6D */	bl zMainMemCardRenderText__FPCcb
/* 800A59DC 000A2ABC  48 00 00 2C */	b .L_800A5A08
.L_800A59E0:
/* 800A59E0 000A2AC0  7F 23 CB 78 */	mr r3, r25
/* 800A59E4 000A2AC4  48 11 9C C9 */	bl CARDUnmount
/* 800A59E8 000A2AC8  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A59EC 000A2ACC  3B 40 00 00 */	li r26, 0x0
/* 800A59F0 000A2AD0  38 63 D4 94 */	addi r3, r3, "@stringBase0"@l
/* 800A59F4 000A2AD4  3B 60 00 01 */	li r27, 0x1
/* 800A59F8 000A2AD8  38 63 0F C2 */	addi r3, r3, 0xfc2
/* 800A59FC 000A2ADC  3B 20 FF FF */	li r25, -0x1
/* 800A5A00 000A2AE0  38 80 00 01 */	li r4, 0x1
/* 800A5A04 000A2AE4  48 00 04 41 */	bl zMainMemCardRenderText__FPCcb
.L_800A5A08:
/* 800A5A08 000A2AE8  2C 17 00 00 */	cmpwi r23, 0x0
/* 800A5A0C 000A2AEC  40 82 00 0C */	bne .L_800A5A18
/* 800A5A10 000A2AF0  2C 16 00 00 */	cmpwi r22, 0x0
/* 800A5A14 000A2AF4  41 82 03 44 */	beq .L_800A5D58
.L_800A5A18:
/* 800A5A18 000A2AF8  57 40 06 3F */	clrlwi. r0, r26, 24
/* 800A5A1C 000A2AFC  3B 00 00 00 */	li r24, 0x0
/* 800A5A20 000A2B00  40 82 00 3C */	bne .L_800A5A5C
/* 800A5A24 000A2B04  57 60 06 3F */	clrlwi. r0, r27, 24
/* 800A5A28 000A2B08  40 82 00 34 */	bne .L_800A5A5C
/* 800A5A2C 000A2B0C  2C 16 00 00 */	cmpwi r22, 0x0
/* 800A5A30 000A2B10  40 82 00 2C */	bne .L_800A5A5C
/* 800A5A34 000A2B14  80 61 00 10 */	lwz r3, 0x10(r1)
/* 800A5A38 000A2B18  80 81 00 0C */	lwz r4, 0xc(r1)
/* 800A5A3C 000A2B1C  80 A1 00 08 */	lwz r5, 0x8(r1)
/* 800A5A40 000A2B20  48 00 F5 09 */	bl zSceneCardCheckStartup_set__Fiii
/* 800A5A44 000A2B24  80 61 00 10 */	lwz r3, 0x10(r1)
/* 800A5A48 000A2B28  38 C0 00 01 */	li r6, 0x1
/* 800A5A4C 000A2B2C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 800A5A50 000A2B30  80 A1 00 08 */	lwz r5, 0x8(r1)
/* 800A5A54 000A2B34  48 00 03 51 */	bl zMainMemCardQueryPost__Fiiii
/* 800A5A58 000A2B38  48 00 00 BC */	b .L_800A5B14
.L_800A5A5C:
/* 800A5A5C 000A2B3C  57 40 06 3F */	clrlwi. r0, r26, 24
/* 800A5A60 000A2B40  40 82 00 B4 */	bne .L_800A5B14
/* 800A5A64 000A2B44  2C 16 00 04 */	cmpwi r22, 0x4
/* 800A5A68 000A2B48  41 82 00 80 */	beq .L_800A5AE8
/* 800A5A6C 000A2B4C  40 80 00 1C */	bge .L_800A5A88
/* 800A5A70 000A2B50  2C 16 00 02 */	cmpwi r22, 0x2
/* 800A5A74 000A2B54  41 82 00 44 */	beq .L_800A5AB8
/* 800A5A78 000A2B58  40 80 00 58 */	bge .L_800A5AD0
/* 800A5A7C 000A2B5C  2C 16 00 01 */	cmpwi r22, 0x1
/* 800A5A80 000A2B60  40 80 00 18 */	bge .L_800A5A98
/* 800A5A84 000A2B64  48 00 00 90 */	b .L_800A5B14
.L_800A5A88:
/* 800A5A88 000A2B68  2C 16 00 06 */	cmpwi r22, 0x6
/* 800A5A8C 000A2B6C  41 82 00 88 */	beq .L_800A5B14
/* 800A5A90 000A2B70  40 80 00 84 */	bge .L_800A5B14
/* 800A5A94 000A2B74  48 00 00 6C */	b .L_800A5B00
.L_800A5A98:
/* 800A5A98 000A2B78  57 60 06 3F */	clrlwi. r0, r27, 24
/* 800A5A9C 000A2B7C  40 82 00 78 */	bne .L_800A5B14
/* 800A5AA0 000A2B80  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A5AA4 000A2B84  38 80 00 01 */	li r4, 0x1
/* 800A5AA8 000A2B88  38 63 D4 94 */	addi r3, r3, "@stringBase0"@l
/* 800A5AAC 000A2B8C  38 63 0F E2 */	addi r3, r3, 0xfe2
/* 800A5AB0 000A2B90  48 00 03 95 */	bl zMainMemCardRenderText__FPCcb
/* 800A5AB4 000A2B94  48 00 00 60 */	b .L_800A5B14
.L_800A5AB8:
/* 800A5AB8 000A2B98  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A5ABC 000A2B9C  38 80 00 01 */	li r4, 0x1
/* 800A5AC0 000A2BA0  38 63 D4 94 */	addi r3, r3, "@stringBase0"@l
/* 800A5AC4 000A2BA4  38 63 0F FE */	addi r3, r3, 0xffe
/* 800A5AC8 000A2BA8  48 00 03 7D */	bl zMainMemCardRenderText__FPCcb
/* 800A5ACC 000A2BAC  48 00 00 48 */	b .L_800A5B14
.L_800A5AD0:
/* 800A5AD0 000A2BB0  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A5AD4 000A2BB4  38 80 00 01 */	li r4, 0x1
/* 800A5AD8 000A2BB8  38 63 D4 94 */	addi r3, r3, "@stringBase0"@l
/* 800A5ADC 000A2BBC  38 63 10 1D */	addi r3, r3, 0x101d
/* 800A5AE0 000A2BC0  48 00 03 65 */	bl zMainMemCardRenderText__FPCcb
/* 800A5AE4 000A2BC4  48 00 00 30 */	b .L_800A5B14
.L_800A5AE8:
/* 800A5AE8 000A2BC8  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A5AEC 000A2BCC  38 80 00 01 */	li r4, 0x1
/* 800A5AF0 000A2BD0  38 63 D4 94 */	addi r3, r3, "@stringBase0"@l
/* 800A5AF4 000A2BD4  38 63 10 3C */	addi r3, r3, 0x103c
/* 800A5AF8 000A2BD8  48 00 03 4D */	bl zMainMemCardRenderText__FPCcb
/* 800A5AFC 000A2BDC  48 00 00 18 */	b .L_800A5B14
.L_800A5B00:
/* 800A5B00 000A2BE0  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A5B04 000A2BE4  38 80 00 01 */	li r4, 0x1
/* 800A5B08 000A2BE8  38 63 D4 94 */	addi r3, r3, "@stringBase0"@l
/* 800A5B0C 000A2BEC  38 63 10 56 */	addi r3, r3, 0x1056
/* 800A5B10 000A2BF0  48 00 03 35 */	bl zMainMemCardRenderText__FPCcb
.L_800A5B14:
/* 800A5B14 000A2BF4  80 1C 03 1C */	lwz r0, 0x31c(r28)
/* 800A5B18 000A2BF8  28 00 00 00 */	cmplwi r0, 0x0
/* 800A5B1C 000A2BFC  41 82 00 10 */	beq .L_800A5B2C
/* 800A5B20 000A2C00  88 7C 06 D1 */	lbz r3, 0x6d1(r28)
/* 800A5B24 000A2C04  C0 22 93 78 */	lfs f1, "@1345"@sda21(r2)
/* 800A5B28 000A2C08  4B F9 04 9D */	bl xPadUpdate__Fif
.L_800A5B2C:
/* 800A5B2C 000A2C0C  80 7C 03 1C */	lwz r3, 0x31c(r28)
/* 800A5B30 000A2C10  28 03 00 00 */	cmplwi r3, 0x0
/* 800A5B34 000A2C14  41 82 00 3C */	beq .L_800A5B70
/* 800A5B38 000A2C18  80 03 00 30 */	lwz r0, 0x30(r3)
/* 800A5B3C 000A2C1C  54 00 03 19 */	rlwinm. r0, r0, 0, 12, 12
/* 800A5B40 000A2C20  41 82 00 30 */	beq .L_800A5B70
/* 800A5B44 000A2C24  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A5B48 000A2C28  3B 00 00 01 */	li r24, 0x1
/* 800A5B4C 000A2C2C  38 63 D4 94 */	addi r3, r3, "@stringBase0"@l
/* 800A5B50 000A2C30  3A C0 00 00 */	li r22, 0x0
/* 800A5B54 000A2C34  38 63 10 75 */	addi r3, r3, 0x1075
/* 800A5B58 000A2C38  3B 40 00 00 */	li r26, 0x0
/* 800A5B5C 000A2C3C  3B 60 00 00 */	li r27, 0x0
/* 800A5B60 000A2C40  3B 20 FF FF */	li r25, -0x1
/* 800A5B64 000A2C44  38 80 00 01 */	li r4, 0x1
/* 800A5B68 000A2C48  48 00 02 DD */	bl zMainMemCardRenderText__FPCcb
/* 800A5B6C 000A2C4C  4B FF FC 30 */	b .L_800A579C
.L_800A5B70:
/* 800A5B70 000A2C50  28 03 00 00 */	cmplwi r3, 0x0
/* 800A5B74 000A2C54  41 82 00 24 */	beq .L_800A5B98
/* 800A5B78 000A2C58  80 03 00 30 */	lwz r0, 0x30(r3)
/* 800A5B7C 000A2C5C  54 00 03 DF */	rlwinm. r0, r0, 0, 15, 15
/* 800A5B80 000A2C60  41 82 00 18 */	beq .L_800A5B98
/* 800A5B84 000A2C64  2C 16 00 06 */	cmpwi r22, 0x6
/* 800A5B88 000A2C68  40 82 01 D0 */	bne .L_800A5D58
/* 800A5B8C 000A2C6C  3B 00 00 01 */	li r24, 0x1
/* 800A5B90 000A2C70  3A C0 00 00 */	li r22, 0x0
/* 800A5B94 000A2C74  4B FF FC 08 */	b .L_800A579C
.L_800A5B98:
/* 800A5B98 000A2C78  28 03 00 00 */	cmplwi r3, 0x0
/* 800A5B9C 000A2C7C  41 82 FC 00 */	beq .L_800A579C
/* 800A5BA0 000A2C80  80 03 00 30 */	lwz r0, 0x30(r3)
/* 800A5BA4 000A2C84  54 00 03 9D */	rlwinm. r0, r0, 0, 14, 14
/* 800A5BA8 000A2C88  41 82 FB F4 */	beq .L_800A579C
/* 800A5BAC 000A2C8C  2C 16 00 05 */	cmpwi r22, 0x5
/* 800A5BB0 000A2C90  41 82 00 80 */	beq .L_800A5C30
/* 800A5BB4 000A2C94  40 80 01 60 */	bge .L_800A5D14
/* 800A5BB8 000A2C98  2C 16 00 01 */	cmpwi r22, 0x1
/* 800A5BBC 000A2C9C  41 82 00 0C */	beq .L_800A5BC8
/* 800A5BC0 000A2CA0  40 80 FB DC */	bge .L_800A579C
/* 800A5BC4 000A2CA4  48 00 01 50 */	b .L_800A5D14
.L_800A5BC8:
/* 800A5BC8 000A2CA8  57 40 06 3F */	clrlwi. r0, r26, 24
/* 800A5BCC 000A2CAC  40 82 00 44 */	bne .L_800A5C10
/* 800A5BD0 000A2CB0  2C 19 00 00 */	cmpwi r25, 0x0
/* 800A5BD4 000A2CB4  41 80 FB C8 */	blt .L_800A579C
/* 800A5BD8 000A2CB8  7F 23 CB 78 */	mr r3, r25
/* 800A5BDC 000A2CBC  7F E4 FB 78 */	mr r4, r31
/* 800A5BE0 000A2CC0  38 A0 00 00 */	li r5, 0x0
/* 800A5BE4 000A2CC4  48 11 99 E5 */	bl CARDMount
/* 800A5BE8 000A2CC8  7F 23 CB 78 */	mr r3, r25
/* 800A5BEC 000A2CCC  48 11 90 59 */	bl CARDCheck
/* 800A5BF0 000A2CD0  7F 23 CB 78 */	mr r3, r25
/* 800A5BF4 000A2CD4  38 80 00 00 */	li r4, 0x0
/* 800A5BF8 000A2CD8  48 11 A2 FD */	bl CARDFormatAsync
/* 800A5BFC 000A2CDC  7F 23 CB 78 */	mr r3, r25
/* 800A5C00 000A2CE0  48 11 7A 55 */	bl CARDGetXferredBytes
/* 800A5C04 000A2CE4  3B 40 00 01 */	li r26, 0x1
/* 800A5C08 000A2CE8  7C 7E 1B 78 */	mr r30, r3
/* 800A5C0C 000A2CEC  4B FF FB 90 */	b .L_800A579C
.L_800A5C10:
/* 800A5C10 000A2CF0  57 60 06 3F */	clrlwi. r0, r27, 24
/* 800A5C14 000A2CF4  41 82 FB 88 */	beq .L_800A579C
/* 800A5C18 000A2CF8  3B 00 00 01 */	li r24, 0x1
/* 800A5C1C 000A2CFC  3A C0 00 00 */	li r22, 0x0
/* 800A5C20 000A2D00  3B 40 00 00 */	li r26, 0x0
/* 800A5C24 000A2D04  3B 60 00 00 */	li r27, 0x0
/* 800A5C28 000A2D08  3B 20 FF FF */	li r25, -0x1
/* 800A5C2C 000A2D0C  4B FF FB 70 */	b .L_800A579C
.L_800A5C30:
/* 800A5C30 000A2D10  7F 38 CB 78 */	mr r24, r25
/* 800A5C34 000A2D14  7F 23 CB 78 */	mr r3, r25
/* 800A5C38 000A2D18  7F E4 FB 78 */	mr r4, r31
/* 800A5C3C 000A2D1C  38 A0 00 00 */	li r5, 0x0
/* 800A5C40 000A2D20  48 11 99 89 */	bl CARDMount
/* 800A5C44 000A2D24  7F 23 CB 78 */	mr r3, r25
/* 800A5C48 000A2D28  48 11 8F FD */	bl CARDCheck
/* 800A5C4C 000A2D2C  38 61 00 24 */	addi r3, r1, 0x24
/* 800A5C50 000A2D30  48 00 0B D9 */	bl zMenuGetCorruptFiles__FPA64_c
/* 800A5C54 000A2D34  3C 80 80 26 */	lis r4, "@stringBase0"@ha
/* 800A5C58 000A2D38  7C 7D 1B 78 */	mr r29, r3
/* 800A5C5C 000A2D3C  7F 3B CB 78 */	mr r27, r25
/* 800A5C60 000A2D40  3B 41 00 24 */	addi r26, r1, 0x24
/* 800A5C64 000A2D44  3A A4 D4 94 */	addi r21, r4, "@stringBase0"@l
/* 800A5C68 000A2D48  3A C0 00 00 */	li r22, 0x0
/* 800A5C6C 000A2D4C  48 00 00 80 */	b .L_800A5CEC
.L_800A5C70:
/* 800A5C70 000A2D50  38 75 10 84 */	addi r3, r21, 0x1084
/* 800A5C74 000A2D54  38 80 00 01 */	li r4, 0x1
/* 800A5C78 000A2D58  48 00 01 CD */	bl zMainMemCardRenderText__FPCcb
/* 800A5C7C 000A2D5C  7F 23 CB 78 */	mr r3, r25
/* 800A5C80 000A2D60  7F 44 D3 78 */	mr r4, r26
/* 800A5C84 000A2D64  48 11 B6 F1 */	bl CARDDelete
/* 800A5C88 000A2D68  7C 74 1B 79 */	mr. r20, r3
/* 800A5C8C 000A2D6C  41 82 00 34 */	beq .L_800A5CC0
/* 800A5C90 000A2D70  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A5C94 000A2D74  38 80 00 01 */	li r4, 0x1
/* 800A5C98 000A2D78  38 63 D4 94 */	addi r3, r3, "@stringBase0"@l
/* 800A5C9C 000A2D7C  38 63 10 A4 */	addi r3, r3, 0x10a4
/* 800A5CA0 000A2D80  48 00 01 A5 */	bl zMainMemCardRenderText__FPCcb
/* 800A5CA4 000A2D84  48 00 00 1C */	b .L_800A5CC0
.L_800A5CA8:
/* 800A5CA8 000A2D88  7F 63 DB 78 */	mr r3, r27
/* 800A5CAC 000A2D8C  48 11 61 55 */	bl CARDGetResultCode
/* 800A5CB0 000A2D90  7C 74 1B 78 */	mr r20, r3
/* 800A5CB4 000A2D94  38 75 10 84 */	addi r3, r21, 0x1084
/* 800A5CB8 000A2D98  38 80 00 01 */	li r4, 0x1
/* 800A5CBC 000A2D9C  48 00 01 89 */	bl zMainMemCardRenderText__FPCcb
.L_800A5CC0:
/* 800A5CC0 000A2DA0  2C 14 FF FF */	cmpwi r20, -0x1
/* 800A5CC4 000A2DA4  41 82 FF E4 */	beq .L_800A5CA8
/* 800A5CC8 000A2DA8  2C 14 00 00 */	cmpwi r20, 0x0
/* 800A5CCC 000A2DAC  41 82 00 18 */	beq .L_800A5CE4
/* 800A5CD0 000A2DB0  3C 60 80 26 */	lis r3, "@stringBase0"@ha
/* 800A5CD4 000A2DB4  38 80 00 01 */	li r4, 0x1
/* 800A5CD8 000A2DB8  38 63 D4 94 */	addi r3, r3, "@stringBase0"@l
/* 800A5CDC 000A2DBC  38 63 10 A4 */	addi r3, r3, 0x10a4
/* 800A5CE0 000A2DC0  48 00 01 65 */	bl zMainMemCardRenderText__FPCcb
.L_800A5CE4:
/* 800A5CE4 000A2DC4  3B 5A 00 40 */	addi r26, r26, 0x40
/* 800A5CE8 000A2DC8  3A D6 00 01 */	addi r22, r22, 0x1
.L_800A5CEC:
/* 800A5CEC 000A2DCC  7C 16 E8 00 */	cmpw r22, r29
/* 800A5CF0 000A2DD0  41 80 FF 80 */	blt .L_800A5C70
/* 800A5CF4 000A2DD4  7F 03 C3 78 */	mr r3, r24
/* 800A5CF8 000A2DD8  48 11 99 B5 */	bl CARDUnmount
/* 800A5CFC 000A2DDC  3B 00 00 01 */	li r24, 0x1
/* 800A5D00 000A2DE0  3A C0 00 00 */	li r22, 0x0
/* 800A5D04 000A2DE4  3B 40 00 00 */	li r26, 0x0
/* 800A5D08 000A2DE8  3B 60 00 00 */	li r27, 0x0
/* 800A5D0C 000A2DEC  3B 20 FF FF */	li r25, -0x1
/* 800A5D10 000A2DF0  4B FF FA 8C */	b .L_800A579C
.L_800A5D14:
/* 800A5D14 000A2DF4  2C 16 00 03 */	cmpwi r22, 0x3
/* 800A5D18 000A2DF8  41 82 00 2C */	beq .L_800A5D44
/* 800A5D1C 000A2DFC  2C 17 00 00 */	cmpwi r23, 0x0
/* 800A5D20 000A2E00  40 82 00 24 */	bne .L_800A5D44
/* 800A5D24 000A2E04  28 1F 00 00 */	cmplwi r31, 0x0
/* 800A5D28 000A2E08  41 82 00 1C */	beq .L_800A5D44
/* 800A5D2C 000A2E0C  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 800A5D30 000A2E10  7F E3 FB 78 */	mr r3, r31
/* 800A5D34 000A2E14  81 84 01 38 */	lwz r12, 0x138(r4)
/* 800A5D38 000A2E18  7D 89 03 A6 */	mtctr r12
/* 800A5D3C 000A2E1C  4E 80 04 21 */	bctrl
/* 800A5D40 000A2E20  3B E0 00 00 */	li r31, 0x0
.L_800A5D44:
/* 800A5D44 000A2E24  38 60 00 01 */	li r3, 0x1
/* 800A5D48 000A2E28  38 80 00 00 */	li r4, 0x0
/* 800A5D4C 000A2E2C  38 A0 00 01 */	li r5, 0x1
/* 800A5D50 000A2E30  48 12 F6 25 */	bl OSResetSystem
/* 800A5D54 000A2E34  4B FF FA 48 */	b .L_800A579C
.L_800A5D58:
/* 800A5D58 000A2E38  38 60 00 00 */	li r3, 0x0
/* 800A5D5C 000A2E3C  38 80 00 00 */	li r4, 0x0
/* 800A5D60 000A2E40  38 A0 00 00 */	li r5, 0x0
/* 800A5D64 000A2E44  38 C0 00 00 */	li r6, 0x0
/* 800A5D68 000A2E48  48 00 00 3D */	bl zMainMemCardQueryPost__Fiiii
/* 800A5D6C 000A2E4C  28 1F 00 00 */	cmplwi r31, 0x0
/* 800A5D70 000A2E50  41 82 00 18 */	beq .L_800A5D88
/* 800A5D74 000A2E54  80 8D 9F 7C */	lwz r4, RwEngineInstance@sda21(r13)
/* 800A5D78 000A2E58  7F E3 FB 78 */	mr r3, r31
/* 800A5D7C 000A2E5C  81 84 01 38 */	lwz r12, 0x138(r4)
/* 800A5D80 000A2E60  7D 89 03 A6 */	mtctr r12
/* 800A5D84 000A2E64  4E 80 04 21 */	bctrl
.L_800A5D88:
/* 800A5D88 000A2E68  E3 E1 02 38 */	psq_l f31, 0x238(r1), 0, qr0
/* 800A5D8C 000A2E6C  CB E1 02 30 */	lfd f31, 0x230(r1)
/* 800A5D90 000A2E70  BA 81 02 00 */	lmw r20, 0x200(r1)
/* 800A5D94 000A2E74  80 01 02 44 */	lwz r0, 0x244(r1)
/* 800A5D98 000A2E78  7C 08 03 A6 */	mtlr r0
/* 800A5D9C 000A2E7C  38 21 02 40 */	addi r1, r1, 0x240
/* 800A5DA0 000A2E80  4E 80 00 20 */	blr
.endfn zMainMemCardSpaceQuery__Fv

# zMainMemCardQueryPost(int, int, int, int)
.fn zMainMemCardQueryPost__Fiiii, local
/* 800A5DA4 000A2E84  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 800A5DA8 000A2E88  7C 08 02 A6 */	mflr r0
/* 800A5DAC 000A2E8C  90 01 00 34 */	stw r0, 0x34(r1)
/* 800A5DB0 000A2E90  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 800A5DB4 000A2E94  7C 7B 1B 78 */	mr r27, r3
/* 800A5DB8 000A2E98  7C 9C 23 78 */	mr r28, r4
/* 800A5DBC 000A2E9C  7C BD 2B 78 */	mr r29, r5
/* 800A5DC0 000A2EA0  7C DE 33 78 */	mr r30, r6
/* 800A5DC4 000A2EA4  38 60 02 80 */	li r3, 0x280
/* 800A5DC8 000A2EA8  38 80 01 E0 */	li r4, 0x1e0
/* 800A5DCC 000A2EAC  38 A0 00 00 */	li r5, 0x0
/* 800A5DD0 000A2EB0  80 02 BE EC */	lwz r0, "@1354"@sda21(r2)
/* 800A5DD4 000A2EB4  90 01 00 08 */	stw r0, 0x8(r1)
/* 800A5DD8 000A2EB8  48 01 A3 61 */	bl iCameraCreate__Fiii
/* 800A5DDC 000A2EBC  38 81 00 08 */	addi r4, r1, 0x8
/* 800A5DE0 000A2EC0  7C 7F 1B 78 */	mr r31, r3
/* 800A5DE4 000A2EC4  38 A0 00 03 */	li r5, 0x3
/* 800A5DE8 000A2EC8  48 19 1A C9 */	bl RwCameraClear
/* 800A5DEC 000A2ECC  7F E3 FB 78 */	mr r3, r31
/* 800A5DF0 000A2ED0  48 19 17 C1 */	bl RwCameraBeginUpdate
/* 800A5DF4 000A2ED4  7C 1E 00 D0 */	neg r0, r30
/* 800A5DF8 000A2ED8  7F 63 DB 78 */	mr r3, r27
/* 800A5DFC 000A2EDC  7C 00 F3 78 */	or r0, r0, r30
/* 800A5E00 000A2EE0  7F 84 E3 78 */	mr r4, r28
/* 800A5E04 000A2EE4  7F A5 EB 78 */	mr r5, r29
/* 800A5E08 000A2EE8  54 06 0F FE */	srwi r6, r0, 31
/* 800A5E0C 000A2EEC  4B FA 7B 29 */	bl render_mem_card_no_space__Fiiib
/* 800A5E10 000A2EF0  7F E3 FB 78 */	mr r3, r31
/* 800A5E14 000A2EF4  48 19 17 75 */	bl RwCameraEndUpdate
/* 800A5E18 000A2EF8  7F E3 FB 78 */	mr r3, r31
/* 800A5E1C 000A2EFC  38 80 00 00 */	li r4, 0x0
/* 800A5E20 000A2F00  38 A0 00 01 */	li r5, 0x1
/* 800A5E24 000A2F04  48 19 1A D9 */	bl RwCameraShowRaster
/* 800A5E28 000A2F08  7F E3 FB 78 */	mr r3, r31
/* 800A5E2C 000A2F0C  48 01 A3 E5 */	bl iCameraDestroy__FP8RwCamera
/* 800A5E30 000A2F10  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 800A5E34 000A2F14  80 01 00 34 */	lwz r0, 0x34(r1)
/* 800A5E38 000A2F18  7C 08 03 A6 */	mtlr r0
/* 800A5E3C 000A2F1C  38 21 00 30 */	addi r1, r1, 0x30
/* 800A5E40 000A2F20  4E 80 00 20 */	blr
.endfn zMainMemCardQueryPost__Fiiii

# zMainMemCardRenderText(const char*, bool)
.fn zMainMemCardRenderText__FPCcb, global
/* 800A5E44 000A2F24  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800A5E48 000A2F28  7C 08 02 A6 */	mflr r0
/* 800A5E4C 000A2F2C  38 A0 00 00 */	li r5, 0x0
/* 800A5E50 000A2F30  90 01 00 24 */	stw r0, 0x24(r1)
/* 800A5E54 000A2F34  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800A5E58 000A2F38  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800A5E5C 000A2F3C  7C 9E 23 78 */	mr r30, r4
/* 800A5E60 000A2F40  38 80 01 E0 */	li r4, 0x1e0
/* 800A5E64 000A2F44  93 A1 00 14 */	stw r29, 0x14(r1)
/* 800A5E68 000A2F48  7C 7D 1B 78 */	mr r29, r3
/* 800A5E6C 000A2F4C  38 60 02 80 */	li r3, 0x280
/* 800A5E70 000A2F50  80 02 BE F0 */	lwz r0, "@1359"@sda21(r2)
/* 800A5E74 000A2F54  90 01 00 08 */	stw r0, 0x8(r1)
/* 800A5E78 000A2F58  48 01 A2 C1 */	bl iCameraCreate__Fiii
/* 800A5E7C 000A2F5C  38 81 00 08 */	addi r4, r1, 0x8
/* 800A5E80 000A2F60  7C 7F 1B 78 */	mr r31, r3
/* 800A5E84 000A2F64  38 A0 00 03 */	li r5, 0x3
/* 800A5E88 000A2F68  48 19 1A 29 */	bl RwCameraClear
/* 800A5E8C 000A2F6C  7F E3 FB 78 */	mr r3, r31
/* 800A5E90 000A2F70  48 19 17 21 */	bl RwCameraBeginUpdate
/* 800A5E94 000A2F74  7F A3 EB 78 */	mr r3, r29
/* 800A5E98 000A2F78  7F C4 F3 78 */	mr r4, r30
/* 800A5E9C 000A2F7C  4B FA 7B 35 */	bl RenderText__FPCcb
/* 800A5EA0 000A2F80  7F E3 FB 78 */	mr r3, r31
/* 800A5EA4 000A2F84  48 19 16 E5 */	bl RwCameraEndUpdate
/* 800A5EA8 000A2F88  7F E3 FB 78 */	mr r3, r31
/* 800A5EAC 000A2F8C  38 80 00 00 */	li r4, 0x0
/* 800A5EB0 000A2F90  38 A0 00 01 */	li r5, 0x1
/* 800A5EB4 000A2F94  48 19 1A 49 */	bl RwCameraShowRaster
/* 800A5EB8 000A2F98  7F E3 FB 78 */	mr r3, r31
/* 800A5EBC 000A2F9C  48 01 A3 55 */	bl iCameraDestroy__FP8RwCamera
/* 800A5EC0 000A2FA0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800A5EC4 000A2FA4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800A5EC8 000A2FA8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800A5ECC 000A2FAC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 800A5ED0 000A2FB0  7C 08 03 A6 */	mtlr r0
/* 800A5ED4 000A2FB4  38 21 00 20 */	addi r1, r1, 0x20
/* 800A5ED8 000A2FB8  4E 80 00 20 */	blr
.endfn zMainMemCardRenderText__FPCcb

# zMainLoadFontHIP()
.fn zMainLoadFontHIP__Fv, local
/* 800A5EDC 000A2FBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800A5EE0 000A2FC0  7C 08 02 A6 */	mflr r0
/* 800A5EE4 000A2FC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800A5EE8 000A2FC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800A5EEC 000A2FCC  93 C1 00 08 */	stw r30, 0x8(r1)
/* 800A5EF0 000A2FD0  4B F8 DC 61 */	bl xMemPushBase__Fv
/* 800A5EF4 000A2FD4  48 02 EA 5D */	bl iTimeGet__Fv
/* 800A5EF8 000A2FD8  7C 80 23 78 */	mr r0, r4
/* 800A5EFC 000A2FDC  3C A0 46 4F */	lis r5, 0x464f
/* 800A5F00 000A2FE0  7C 7E 1B 78 */	mr r30, r3
/* 800A5F04 000A2FE4  38 80 00 00 */	li r4, 0x0
/* 800A5F08 000A2FE8  7C 1F 03 78 */	mr r31, r0
/* 800A5F0C 000A2FEC  38 65 4E 54 */	addi r3, r5, 0x4e54
/* 800A5F10 000A2FF0  4B FA 7D 85 */	bl xUtil_idtag2string__FUii
/* 800A5F14 000A2FF4  7F E4 FB 78 */	mr r4, r31
/* 800A5F18 000A2FF8  7F C3 F3 78 */	mr r3, r30
/* 800A5F1C 000A2FFC  48 02 EA 65 */	bl iTimeDiffSec__Fx
/* 800A5F20 000A3000  3C 60 46 4F */	lis r3, 0x464f
/* 800A5F24 000A3004  38 80 00 00 */	li r4, 0x0
/* 800A5F28 000A3008  38 63 4E 54 */	addi r3, r3, 0x4e54
/* 800A5F2C 000A300C  38 A0 00 01 */	li r5, 0x1
/* 800A5F30 000A3010  4B FA 52 65 */	bl xSTPreLoadScene__FUiPvi
/* 800A5F34 000A3014  48 02 EA 1D */	bl iTimeGet__Fv
/* 800A5F38 000A3018  3C A0 46 4F */	lis r5, 0x464f
/* 800A5F3C 000A301C  7C 9F 23 78 */	mr r31, r4
/* 800A5F40 000A3020  7C 7E 1B 78 */	mr r30, r3
/* 800A5F44 000A3024  38 80 00 00 */	li r4, 0x0
/* 800A5F48 000A3028  38 65 4E 54 */	addi r3, r5, 0x4e54
/* 800A5F4C 000A302C  4B FA 7D 49 */	bl xUtil_idtag2string__FUii
/* 800A5F50 000A3030  7F E4 FB 78 */	mr r4, r31
/* 800A5F54 000A3034  7F C3 F3 78 */	mr r3, r30
/* 800A5F58 000A3038  48 02 EA 29 */	bl iTimeDiffSec__Fx
/* 800A5F5C 000A303C  3C 60 46 4F */	lis r3, 0x464f
/* 800A5F60 000A3040  38 80 00 01 */	li r4, 0x1
/* 800A5F64 000A3044  38 63 4E 54 */	addi r3, r3, 0x4e54
/* 800A5F68 000A3048  4B FA 53 DD */	bl xSTQueueSceneAssets__FUii
/* 800A5F6C 000A304C  48 02 E9 E5 */	bl iTimeGet__Fv
/* 800A5F70 000A3050  3C A0 46 4F */	lis r5, 0x464f
/* 800A5F74 000A3054  7C 9F 23 78 */	mr r31, r4
/* 800A5F78 000A3058  7C 7E 1B 78 */	mr r30, r3
/* 800A5F7C 000A305C  38 80 00 00 */	li r4, 0x0
/* 800A5F80 000A3060  38 65 4E 54 */	addi r3, r5, 0x4e54
/* 800A5F84 000A3064  4B FA 7D 11 */	bl xUtil_idtag2string__FUii
/* 800A5F88 000A3068  7F E4 FB 78 */	mr r4, r31
/* 800A5F8C 000A306C  7F C3 F3 78 */	mr r3, r30
/* 800A5F90 000A3070  48 02 E9 F1 */	bl iTimeDiffSec__Fx
/* 800A5F94 000A3074  3F E0 46 4F */	lis r31, 0x464f
.L_800A5F98:
/* 800A5F98 000A3078  38 7F 4E 54 */	addi r3, r31, 0x4e54
/* 800A5F9C 000A307C  4B FA 54 F9 */	bl xSTLoadStep__FUi
/* 800A5FA0 000A3080  C0 02 92 E0 */	lfs f0, "@1002"@sda21(r2)
/* 800A5FA4 000A3084  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800A5FA8 000A3088  41 80 FF F0 */	blt .L_800A5F98
/* 800A5FAC 000A308C  3C 60 46 4F */	lis r3, 0x464f
/* 800A5FB0 000A3090  38 80 00 01 */	li r4, 0x1
/* 800A5FB4 000A3094  38 63 4E 54 */	addi r3, r3, 0x4e54
/* 800A5FB8 000A3098  4B FA 55 31 */	bl xSTDisconnect__FUii
/* 800A5FBC 000A309C  48 02 E9 95 */	bl iTimeGet__Fv
/* 800A5FC0 000A30A0  3C A0 46 4F */	lis r5, 0x464f
/* 800A5FC4 000A30A4  7C 9E 23 78 */	mr r30, r4
/* 800A5FC8 000A30A8  7C 7F 1B 78 */	mr r31, r3
/* 800A5FCC 000A30AC  38 80 00 00 */	li r4, 0x0
/* 800A5FD0 000A30B0  38 65 4E 54 */	addi r3, r5, 0x4e54
/* 800A5FD4 000A30B4  4B FA 7C C1 */	bl xUtil_idtag2string__FUii
/* 800A5FD8 000A30B8  7F C4 F3 78 */	mr r4, r30
/* 800A5FDC 000A30BC  7F E3 FB 78 */	mr r3, r31
/* 800A5FE0 000A30C0  48 02 E9 A1 */	bl iTimeDiffSec__Fx
/* 800A5FE4 000A30C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800A5FE8 000A30C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800A5FEC 000A30CC  83 C1 00 08 */	lwz r30, 0x8(r1)
/* 800A5FF0 000A30D0  7C 08 03 A6 */	mtlr r0
/* 800A5FF4 000A30D4  38 21 00 10 */	addi r1, r1, 0x10
/* 800A5FF8 000A30D8  4E 80 00 20 */	blr
.endfn zMainLoadFontHIP__Fv

# 0x800A5FFC - 0x800A6000
.section .text, "ax", unique, 1
.balign 4

# iEnvStartup()
.fn iEnvStartup__Fv, weak
/* 800A5FFC 000A30DC  4E 80 00 20 */	blr
.endfn iEnvStartup__Fv

# 0x8025D218 - 0x8025E558
.rodata
.balign 8

.obj screen_bounds, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x3F800000
	.4byte 0x3F800000
.endobj screen_bounds

.obj "@1170", local
	.4byte 0x47616D65
	.4byte 0x20616E64
	.4byte 0x20536F66
	.4byte 0x74776172
	.4byte 0x6520A920
	.4byte 0x32303033
	.4byte 0x20544851
	.4byte 0x20496E63
	.4byte 0x2E20A920
	.4byte 0x32303033
	.4byte 0x20566961
	.4byte 0x636F6D20
	.4byte 0x496E7465
	.4byte 0x726E6174
	.4byte 0x696F6E61
	.4byte 0x6C20496E
	.4byte 0x632E2041
	.4byte 0x6C6C2072
	.4byte 0x69676874
	.4byte 0x73207265
	.4byte 0x73657276
	.4byte 0x65642E0A
	.4byte 0x0A4E6963
	.4byte 0x6B656C6F
	.4byte 0x64656F6E
	.4byte 0x2C205370
	.4byte 0x6F6E6765
	.4byte 0x426F6220
	.4byte 0x53717561
	.4byte 0x72655061
	.4byte 0x6E747320
	.4byte 0x616E6420
	.4byte 0x616C6C20
	.4byte 0x72656C61
	.4byte 0x74656420
	.4byte 0x7469746C
	.4byte 0x65732C20
	.4byte 0x6C6F676F
	.4byte 0x732C2061
	.4byte 0x6E642063
	.4byte 0x68617261
	.4byte 0x63746572
	.4byte 0x73206172
	.4byte 0x65207472
	.4byte 0x6164656D
	.4byte 0x61726B73
	.4byte 0x206F6620
	.4byte 0x56696163
	.4byte 0x6F6D2049
	.4byte 0x6E746572
	.4byte 0x6E617469
	.4byte 0x6F6E616C
	.4byte 0x20496E63
	.4byte 0x2E204372
	.4byte 0x65617465
	.4byte 0x64206279
	.4byte 0x20537465
	.4byte 0x7068656E
	.4byte 0x2048696C
	.4byte 0x6C656E62
	.4byte 0x7572672E
	.4byte 0x0A0A4578
	.4byte 0x636C7573
	.4byte 0x6976656C
	.4byte 0x79207075
	.4byte 0x626C6973
	.4byte 0x68656420
	.4byte 0x62792054
	.4byte 0x48512049
	.4byte 0x6E632E20
	.4byte 0x44657665
	.4byte 0x6C6F7065
	.4byte 0x64206279
	.4byte 0x20486561
	.4byte 0x76792049
	.4byte 0x726F6E2E
	.4byte 0x20506F72
	.4byte 0x74696F6E
	.4byte 0x73206F66
	.4byte 0x20746869
	.4byte 0x7320736F
	.4byte 0x66747761
	.4byte 0x72652061
	.4byte 0x72652043
	.4byte 0x6F707972
	.4byte 0x69676874
	.4byte 0x20313939
	.4byte 0x38202D20
	.4byte 0x32303033
	.4byte 0x20437269
	.4byte 0x74657269
	.4byte 0x6F6E2053
	.4byte 0x6F667477
	.4byte 0x61726520
	.4byte 0x4C74642E
	.4byte 0x20616E64
	.4byte 0x20697473
	.4byte 0x204C6963
	.4byte 0x656E736F
	.4byte 0x72732E20
	.4byte 0x5448512C
	.4byte 0x20486561
	.4byte 0x76792049
	.4byte 0x726F6E20
	.4byte 0x616E6420
	.4byte 0x74686520
	.4byte 0x54485120
	.4byte 0x6C6F676F
	.4byte 0x20617265
	.4byte 0x20747261
	.4byte 0x64656D61
	.4byte 0x726B7320
	.4byte 0x616E642F
	.4byte 0x6F722072
	.4byte 0x65676973
	.4byte 0x74657265
	.4byte 0x64207472
	.4byte 0x6164656D
	.4byte 0x61726B73
	.4byte 0x206F6620
	.4byte 0x54485120
	.4byte 0x496E632E
	.4byte 0x20416C6C
	.4byte 0x20726967
	.4byte 0x68747320
	.4byte 0x72657365
	.4byte 0x72766564
	.4byte 0x2E0A0A41
	.4byte 0x6C6C206F
	.4byte 0x74686572
	.4byte 0x20747261
	.4byte 0x64656D61
	.4byte 0x726B732C
	.4byte 0x206C6F67
	.4byte 0x6F732061
	.4byte 0x6E642063
	.4byte 0x6F707972
	.4byte 0x69676874
	.4byte 0x73206172
	.4byte 0x65207072
	.4byte 0x6F706572
	.4byte 0x7479206F
	.4byte 0x66207468
	.4byte 0x65697220
	.4byte 0x72657370
	.4byte 0x65637469
	.4byte 0x7665206F
	.4byte 0x776E6572
	.4byte 0x732E0A0A
	.4byte 0x4C696365
	.4byte 0x6E736564
	.4byte 0x20627920
	.4byte 0x4E696E74
	.4byte 0x656E646F
	.byte 0x00
.endobj "@1170"
	.byte 0x00, 0x00, 0x00

.obj "@stringBase0", local
	.4byte 0x73636F6F
	.4byte 0x62792E65
	.4byte 0x6C660067
	.4byte 0x2E416E61
	.4byte 0x6C6F674D
	.4byte 0x696E0067
	.4byte 0x2E416E61
	.4byte 0x6C6F674D
	.4byte 0x61780053
	.4byte 0x63724678
	.4byte 0x4C657474
	.4byte 0x6572426F
	.4byte 0x7853697A
	.4byte 0x65005363
	.4byte 0x7246784C
	.4byte 0x65747465
	.4byte 0x72426F78
	.4byte 0x416C7068
	.4byte 0x6100672E
	.4byte 0x496E6974
	.4byte 0x69616C53
	.4byte 0x68696E79
	.4byte 0x436F756E
	.4byte 0x7400672E
	.4byte 0x496E6974
	.4byte 0x69616C53
	.4byte 0x70617475
	.4byte 0x6C61436F
	.4byte 0x756E7400
	.4byte 0x672E5368
	.4byte 0x696E7956
	.4byte 0x616C7565
	.4byte 0x50757270
	.4byte 0x6C650067
	.4byte 0x2E536869
	.4byte 0x6E795661
	.4byte 0x6C756542
	.4byte 0x6C756500
	.4byte 0x672E5368
	.4byte 0x696E7956
	.4byte 0x616C7565
	.4byte 0x47726565
	.4byte 0x6E00672E
	.4byte 0x5368696E
	.4byte 0x7956616C
	.4byte 0x75655965
	.4byte 0x6C6C6F77
	.4byte 0x00672E53
	.4byte 0x68696E79
	.4byte 0x56616C75
	.4byte 0x65526564
	.4byte 0x00672E53
	.4byte 0x68696E79
	.4byte 0x56616C75
	.4byte 0x65436F6D
	.4byte 0x626F3000
	.4byte 0x672E5368
	.4byte 0x696E7956
	.4byte 0x616C7565
	.4byte 0x436F6D62
	.4byte 0x6F310067
	.4byte 0x2E536869
	.4byte 0x6E795661
	.4byte 0x6C756543
	.4byte 0x6F6D626F
	.4byte 0x3200672E
	.4byte 0x5368696E
	.4byte 0x7956616C
	.4byte 0x7565436F
	.4byte 0x6D626F33
	.4byte 0x00672E53
	.4byte 0x68696E79
	.4byte 0x56616C75
	.4byte 0x65436F6D
	.4byte 0x626F3400
	.4byte 0x672E5368
	.4byte 0x696E7956
	.4byte 0x616C7565
	.4byte 0x436F6D62
	.4byte 0x6F350067
	.4byte 0x2E536869
	.4byte 0x6E795661
	.4byte 0x6C756543
	.4byte 0x6F6D626F
	.4byte 0x3600672E
	.4byte 0x5368696E
	.4byte 0x7956616C
	.4byte 0x7565436F
	.4byte 0x6D626F37
	.4byte 0x00672E53
	.4byte 0x68696E79
	.4byte 0x56616C75
	.4byte 0x65436F6D
	.4byte 0x626F3800
	.4byte 0x672E5368
	.4byte 0x696E7956
	.4byte 0x616C7565
	.4byte 0x436F6D62
	.4byte 0x6F390067
	.4byte 0x2E536869
	.4byte 0x6E795661
	.4byte 0x6C756543
	.4byte 0x6F6D626F
	.4byte 0x31300067
	.4byte 0x2E536869
	.4byte 0x6E795661
	.4byte 0x6C756543
	.4byte 0x6F6D626F
	.4byte 0x31310067
	.4byte 0x2E536869
	.4byte 0x6E795661
	.4byte 0x6C756543
	.4byte 0x6F6D626F
	.4byte 0x31320067
	.4byte 0x2E536869
	.4byte 0x6E795661
	.4byte 0x6C756543
	.4byte 0x6F6D626F
	.4byte 0x31330067
	.4byte 0x2E536869
	.4byte 0x6E795661
	.4byte 0x6C756543
	.4byte 0x6F6D626F
	.4byte 0x31340067
	.4byte 0x2E536869
	.4byte 0x6E795661
	.4byte 0x6C756543
	.4byte 0x6F6D626F
	.4byte 0x31350067
	.4byte 0x2E436F6D
	.4byte 0x626F5469
	.4byte 0x6D657200
	.4byte 0x672E5375
	.4byte 0x6E646165
	.4byte 0x54696D65
	.4byte 0x00672E53
	.4byte 0x756E6461
	.4byte 0x654D756C
	.4byte 0x7400672E
	.4byte 0x42426173
	.4byte 0x6854696D
	.4byte 0x6500672E
	.4byte 0x42426173
	.4byte 0x6844656C
	.4byte 0x61790067
	.4byte 0x2E424261
	.4byte 0x73684356
	.4byte 0x54696D65
	.4byte 0x00672E42
	.4byte 0x42617368
	.4byte 0x48656967
	.4byte 0x68740067
	.4byte 0x2E42426F
	.4byte 0x756E6365
	.4byte 0x53706565
	.4byte 0x6400672E
	.4byte 0x42537069
	.4byte 0x6E4D696E
	.4byte 0x4672616D
	.4byte 0x6500672E
	.4byte 0x42537069
	.4byte 0x6E4D6178
	.4byte 0x4672616D
	.4byte 0x6500672E
	.4byte 0x42537069
	.4byte 0x6E526164
	.4byte 0x69757300
	.4byte 0x672E5361
	.4byte 0x6E64794D
	.4byte 0x656C6565
	.4byte 0x4D696E46
	.4byte 0x72616D65
	.4byte 0x00672E53
	.4byte 0x616E6479
	.4byte 0x4D656C65
	.4byte 0x654D6178
	.4byte 0x4672616D
	.4byte 0x6500672E
	.4byte 0x53616E64
	.4byte 0x794D656C
	.4byte 0x65655261
	.4byte 0x64697573
	.4byte 0x00672E44
	.4byte 0x616D6167
	.4byte 0x6554696D
	.4byte 0x65486974
	.4byte 0x00672E44
	.4byte 0x616D6167
	.4byte 0x6554696D
	.4byte 0x65537572
	.4byte 0x66616365
	.4byte 0x00672E44
	.4byte 0x616D6167
	.4byte 0x6554696D
	.4byte 0x65454765
	.4byte 0x6E00672E
	.4byte 0x44616D61
	.4byte 0x67655375
	.4byte 0x72664B6E
	.4byte 0x6F636B00
	.4byte 0x672E4461
	.4byte 0x6D616765
	.4byte 0x47697665
	.4byte 0x4865616C
	.4byte 0x74684B6E
	.4byte 0x6F636B00
	.4byte 0x672E4275
	.4byte 0x62626C65
	.4byte 0x426F776C
	.4byte 0x54696D65
	.4byte 0x44656C61
	.4byte 0x7900672E
	.4byte 0x42756262
	.4byte 0x6C65426F
	.4byte 0x776C4C61
	.4byte 0x756E6368
	.4byte 0x506F734C
	.4byte 0x65667400
	.4byte 0x672E4275
	.4byte 0x62626C65
	.4byte 0x426F776C
	.4byte 0x4C61756E
	.4byte 0x6368506F
	.4byte 0x73557000
	.4byte 0x672E4275
	.4byte 0x62626C65
	.4byte 0x426F776C
	.4byte 0x4C61756E
	.4byte 0x6368506F
	.4byte 0x73417400
	.4byte 0x672E4275
	.4byte 0x62626C65
	.4byte 0x426F776C
	.4byte 0x4C61756E
	.4byte 0x63685665
	.4byte 0x6C4C6566
	.4byte 0x7400672E
	.4byte 0x42756262
	.4byte 0x6C65426F
	.4byte 0x776C4C61
	.4byte 0x756E6368
	.4byte 0x56656C55
	.4byte 0x7000672E
	.4byte 0x42756262
	.4byte 0x6C65426F
	.4byte 0x776C4C61
	.4byte 0x756E6368
	.4byte 0x56656C41
	.4byte 0x7400672E
	.4byte 0x42756262
	.4byte 0x6C65426F
	.4byte 0x776C5065
	.4byte 0x7263656E
	.4byte 0x74496E63
	.4byte 0x72656173
	.4byte 0x6500672E
	.4byte 0x42756262
	.4byte 0x6C65426F
	.4byte 0x776C4D69
	.4byte 0x6E537065
	.4byte 0x65640067
	.4byte 0x2E427562
	.4byte 0x626C6542
	.4byte 0x6F776C4D
	.4byte 0x696E5265
	.4byte 0x636F7665
	.4byte 0x7254696D
	.4byte 0x6500672E
	.4byte 0x536C6964
	.4byte 0x65416363
	.4byte 0x656C5665
	.4byte 0x6C4D696E
	.4byte 0x00672E53
	.4byte 0x6C696465
	.4byte 0x41636365
	.4byte 0x6C56656C
	.4byte 0x4D617800
	.4byte 0x672E536C
	.4byte 0x69646541
	.4byte 0x6363656C
	.4byte 0x53746172
	.4byte 0x7400672E
	.4byte 0x536C6964
	.4byte 0x65416363
	.4byte 0x656C456E
	.4byte 0x6400672E
	.4byte 0x536C6964
	.4byte 0x65416363
	.4byte 0x656C506C
	.4byte 0x61796572
	.4byte 0x46776400
	.4byte 0x672E536C
	.4byte 0x69646541
	.4byte 0x6363656C
	.4byte 0x506C6179
	.4byte 0x65724261
	.4byte 0x636B0067
	.4byte 0x2E536C69
	.4byte 0x64654163
	.4byte 0x63656C50
	.4byte 0x6C617965
	.4byte 0x72536964
	.4byte 0x6500672E
	.4byte 0x536C6964
	.4byte 0x6556656C
	.4byte 0x4D617853
	.4byte 0x74617274
	.4byte 0x00672E53
	.4byte 0x6C696465
	.4byte 0x56656C4D
	.4byte 0x6178456E
	.4byte 0x6400672E
	.4byte 0x536C6964
	.4byte 0x6556656C
	.4byte 0x4D617849
	.4byte 0x6E635469
	.4byte 0x6D650067
	.4byte 0x2E536C69
	.4byte 0x64655665
	.4byte 0x6C4D6178
	.4byte 0x496E6341
	.4byte 0x6363656C
	.4byte 0x00672E53
	.4byte 0x6C696465
	.4byte 0x41697248
	.4byte 0x6F6C6454
	.4byte 0x696D6500
	.4byte 0x672E536C
	.4byte 0x69646541
	.4byte 0x6972536C
	.4byte 0x6F775469
	.4byte 0x6D650067
	.4byte 0x2E536C69
	.4byte 0x64654169
	.4byte 0x7244626C
	.4byte 0x486F6C64
	.4byte 0x54696D65
	.4byte 0x00672E53
	.4byte 0x6C696465
	.4byte 0x41697244
	.4byte 0x626C536C
	.4byte 0x6F775469
	.4byte 0x6D650067
	.4byte 0x2E536C69
	.4byte 0x64655665
	.4byte 0x6C44626C
	.4byte 0x426F6F73
	.4byte 0x7400672E
	.4byte 0x54616B65
	.4byte 0x44616D61
	.4byte 0x67650067
	.4byte 0x2E436865
	.4byte 0x61745370
	.4byte 0x6F6E6765
	.4byte 0x62616C6C
	.4byte 0x00672E43
	.4byte 0x68656174
	.4byte 0x506C6179
	.4byte 0x65725377
	.4byte 0x69746368
	.4byte 0x00672E43
	.4byte 0x68656174
	.4byte 0x416C7761
	.4byte 0x7973506F
	.4byte 0x7274616C
	.4byte 0x00672E43
	.4byte 0x68656174
	.4byte 0x466C7954
	.4byte 0x6F67676C
	.4byte 0x6500672E
	.4byte 0x44697361
	.4byte 0x626C6546
	.4byte 0x6F726365
	.4byte 0x436F6E76
	.4byte 0x65727361
	.4byte 0x74696F6E
	.4byte 0x00672E53
	.4byte 0x74617274
	.4byte 0x536C6964
	.4byte 0x65416E67
	.4byte 0x6C650067
	.4byte 0x2E53746F
	.4byte 0x70536C69
	.4byte 0x6465416E
	.4byte 0x676C6500
	.4byte 0x672E526F
	.4byte 0x744D6174
	.4byte 0x63684D61
	.4byte 0x78416E67
	.4byte 0x6C650067
	.4byte 0x2E526F74
	.4byte 0x4D617463
	.4byte 0x684D6174
	.4byte 0x63685469
	.4byte 0x6D650067
	.4byte 0x2E526F74
	.4byte 0x4D617463
	.4byte 0x6852656C
	.4byte 0x61785469
	.4byte 0x6D650067
	.4byte 0x2E477261
	.4byte 0x76697479
	.4byte 0x007A6361
	.4byte 0x6D5F6869
	.4byte 0x6768626F
	.4byte 0x756E6365
	.4byte 0x5F706974
	.4byte 0x63680078
	.4byte 0x63616D5F
	.4byte 0x636F6C6C
	.4byte 0x69735F72
	.4byte 0x61646975
	.4byte 0x73007863
	.4byte 0x616D5F63
	.4byte 0x6F6C6C69
	.4byte 0x735F7374
	.4byte 0x6966666E
	.4byte 0x65737300
	.4byte 0x7A63616D
	.4byte 0x5F706164
	.4byte 0x5F707961
	.4byte 0x775F7363
	.4byte 0x616C6500
	.4byte 0x7A63616D
	.4byte 0x5F706164
	.4byte 0x5F706974
	.4byte 0x63685F73
	.4byte 0x63616C65
	.4byte 0x007A6361
	.4byte 0x6D5F6E65
	.4byte 0x61725F64
	.4byte 0x007A6361
	.4byte 0x6D5F6E65
	.4byte 0x61725F68
	.4byte 0x007A6361
	.4byte 0x6D5F6E65
	.4byte 0x61725F70
	.4byte 0x69746368
	.4byte 0x007A6361
	.4byte 0x6D5F6661
	.4byte 0x725F6400
	.4byte 0x7A63616D
	.4byte 0x5F666172
	.4byte 0x5F68007A
	.4byte 0x63616D5F
	.4byte 0x6661725F
	.4byte 0x70697463
	.4byte 0x68007A63
	.4byte 0x616D5F61
	.4byte 0x626F7665
	.4byte 0x5F64007A
	.4byte 0x63616D5F
	.4byte 0x61626F76
	.4byte 0x655F6800
	.4byte 0x7A63616D
	.4byte 0x5F61626F
	.4byte 0x76655F70
	.4byte 0x69746368
	.4byte 0x007A6361
	.4byte 0x6D5F6265
	.4byte 0x6C6F775F
	.4byte 0x64007A63
	.4byte 0x616D5F62
	.4byte 0x656C6F77
	.4byte 0x5F68007A
	.4byte 0x63616D5F
	.4byte 0x62656C6F
	.4byte 0x775F7069
	.4byte 0x74636800
	.4byte 0x7A63616D
	.4byte 0x5F686967
	.4byte 0x68626F75
	.4byte 0x6E63655F
	.4byte 0x64007A63
	.4byte 0x616D5F68
	.4byte 0x69676862
	.4byte 0x6F756E63
	.4byte 0x655F6800
	.4byte 0x7A63616D
	.4byte 0x5F77616C
	.4byte 0x6C5F6400
	.4byte 0x7A63616D
	.4byte 0x5F77616C
	.4byte 0x6C5F6800
	.4byte 0x7A63616D
	.4byte 0x5F77616C
	.4byte 0x6C5F7069
	.4byte 0x74636800
	.4byte 0x7A63616D
	.4byte 0x5F6F7665
	.4byte 0x72726F74
	.4byte 0x5F6D696E
	.4byte 0x007A6361
	.4byte 0x6D5F6F76
	.4byte 0x6572726F
	.4byte 0x745F6D69
	.4byte 0x64007A63
	.4byte 0x616D5F6F
	.4byte 0x76657272
	.4byte 0x6F745F6D
	.4byte 0x6178007A
	.4byte 0x63616D5F
	.4byte 0x6F766572
	.4byte 0x726F745F
	.4byte 0x72617465
	.4byte 0x007A6361
	.4byte 0x6D5F6F76
	.4byte 0x6572726F
	.4byte 0x745F7473
	.4byte 0x74617274
	.4byte 0x007A6361
	.4byte 0x6D5F6F76
	.4byte 0x6572726F
	.4byte 0x745F7465
	.4byte 0x6E64007A
	.4byte 0x63616D5F
	.4byte 0x6F766572
	.4byte 0x726F745F
	.4byte 0x76656C6D
	.4byte 0x696E007A
	.4byte 0x63616D5F
	.4byte 0x6F766572
	.4byte 0x726F745F
	.4byte 0x76656C6D
	.4byte 0x6178007A
	.4byte 0x63616D5F
	.4byte 0x6F766572
	.4byte 0x726F745F
	.4byte 0x746D616E
	.4byte 0x75616C00
	.4byte 0x67536B69
	.4byte 0x7054696D
	.4byte 0x65437574
	.4byte 0x7363656E
	.4byte 0x65006753
	.4byte 0x6B697054
	.4byte 0x696D6546
	.4byte 0x6C797468
	.4byte 0x726F7567
	.4byte 0x68006361
	.4byte 0x7272792E
	.4byte 0x6D696E44
	.4byte 0x69737400
	.4byte 0x63617272
	.4byte 0x792E6D61
	.4byte 0x78446973
	.4byte 0x74006361
	.4byte 0x7272792E
	.4byte 0x6D696E48
	.4byte 0x65696768
	.4byte 0x74006361
	.4byte 0x7272792E
	.4byte 0x6D617848
	.4byte 0x65696768
	.4byte 0x74006361
	.4byte 0x7272792E
	.4byte 0x6D617843
	.4byte 0x6F73416E
	.4byte 0x676C6500
	.4byte 0x63617272
	.4byte 0x792E7468
	.4byte 0x726F774D
	.4byte 0x696E4469
	.4byte 0x73740063
	.4byte 0x61727279
	.4byte 0x2E746872
	.4byte 0x6F774D61
	.4byte 0x78446973
	.4byte 0x74006361
	.4byte 0x7272792E
	.4byte 0x7468726F
	.4byte 0x774D696E
	.4byte 0x48656967
	.4byte 0x68740063
	.4byte 0x61727279
	.4byte 0x2E746872
	.4byte 0x6F774D61
	.4byte 0x78486569
	.4byte 0x67687400
	.4byte 0x63617272
	.4byte 0x792E7468
	.4byte 0x726F774D
	.4byte 0x61785374
	.4byte 0x61636B00
	.4byte 0x63617272
	.4byte 0x792E7468
	.4byte 0x726F774D
	.4byte 0x6178436F
	.4byte 0x73416E67
	.4byte 0x6C650063
	.4byte 0x61727279
	.4byte 0x2E677261
	.4byte 0x624C6572
	.4byte 0x704D696E
	.4byte 0x00636172
	.4byte 0x72792E67
	.4byte 0x7261624C
	.4byte 0x6572704D
	.4byte 0x61780063
	.4byte 0x61727279
	.4byte 0x2E746872
	.4byte 0x6F774772
	.4byte 0x61766974
	.4byte 0x79006361
	.4byte 0x7272792E
	.4byte 0x7468726F
	.4byte 0x77486569
	.4byte 0x67687400
	.4byte 0x63617272
	.4byte 0x792E7468
	.4byte 0x726F7744
	.4byte 0x69737461
	.4byte 0x6E636500
	.4byte 0x63617272
	.4byte 0x792E6672
	.4byte 0x75697446
	.4byte 0x6C6F6F72
	.4byte 0x44656361
	.4byte 0x794D696E
	.4byte 0x00636172
	.4byte 0x72792E66
	.4byte 0x72756974
	.4byte 0x466C6F6F
	.4byte 0x72446563
	.4byte 0x61794D61
	.4byte 0x78006361
	.4byte 0x7272792E
	.4byte 0x66727569
	.4byte 0x74466C6F
	.4byte 0x6F72426F
	.4byte 0x756E6365
	.4byte 0x00636172
	.4byte 0x72792E66
	.4byte 0x72756974
	.4byte 0x466C6F6F
	.4byte 0x72467269
	.4byte 0x6374696F
	.4byte 0x6E006361
	.4byte 0x7272792E
	.4byte 0x66727569
	.4byte 0x74436569
	.4byte 0x6C696E67
	.4byte 0x426F756E
	.4byte 0x63650063
	.4byte 0x61727279
	.4byte 0x2E667275
	.4byte 0x69745761
	.4byte 0x6C6C426F
	.4byte 0x756E6365
	.4byte 0x00636172
	.4byte 0x72792E66
	.4byte 0x72756974
	.4byte 0x4C696665
	.4byte 0x74696D65
	.4byte 0x00672E42
	.4byte 0x7562626C
	.4byte 0x65426F77
	.4byte 0x6C00672E
	.4byte 0x43727569
	.4byte 0x73654275
	.4byte 0x62626C65
	.4byte 0x0073622E
	.4byte 0x4D6F7665
	.4byte 0x53706565
	.4byte 0x64007362
	.4byte 0x2E416E69
	.4byte 0x6D536E65
	.4byte 0x616B0073
	.4byte 0x622E416E
	.4byte 0x696D5761
	.4byte 0x6C6B0073
	.4byte 0x622E416E
	.4byte 0x696D5275
	.4byte 0x6E007362
	.4byte 0x2E4A756D
	.4byte 0x70477261
	.4byte 0x76697479
	.4byte 0x0073622E
	.4byte 0x47726176
	.4byte 0x536D6F6F
	.4byte 0x74680073
	.4byte 0x622E466C
	.4byte 0x6F617453
	.4byte 0x70656564
	.4byte 0x0073622E
	.4byte 0x42757474
	.4byte 0x736D6173
	.4byte 0x68537065
	.4byte 0x65640073
	.4byte 0x622E6C65
	.4byte 0x6467652E
	.4byte 0x616E696D
	.4byte 0x47726162
	.4byte 0x0073622E
	.4byte 0x4A756D70
	.4byte 0x0073622E
	.4byte 0x446F7562
	.4byte 0x6C650073
	.4byte 0x622E426F
	.4byte 0x756E6365
	.4byte 0x0073622E
	.4byte 0x53707269
	.4byte 0x6E670073
	.4byte 0x622E5761
	.4byte 0x6C6C0073
	.4byte 0x622E5761
	.4byte 0x6C6C4A75
	.4byte 0x6D705665
	.4byte 0x6C6F6369
	.4byte 0x74790073
	.4byte 0x622E7370
	.4byte 0x696E5F64
	.4byte 0x616D705F
	.4byte 0x787A0073
	.4byte 0x622E7370
	.4byte 0x696E5F64
	.4byte 0x616D705F
	.4byte 0x79005342
	.4byte 0x2E6D6F64
	.4byte 0x656C5F69
	.4byte 0x6E646578
	.4byte 0x2E626F64
	.4byte 0x79005342
	.4byte 0x2E6D6F64
	.4byte 0x656C5F69
	.4byte 0x6E646578
	.4byte 0x2E61726D
	.4byte 0x5F6C0053
	.4byte 0x422E6D6F
	.4byte 0x64656C5F
	.4byte 0x696E6465
	.4byte 0x782E6172
	.4byte 0x6D5F7200
	.4byte 0x53422E6D
	.4byte 0x6F64656C
	.4byte 0x5F696E64
	.4byte 0x65782E61
	.4byte 0x73730053
	.4byte 0x422E6D6F
	.4byte 0x64656C5F
	.4byte 0x696E6465
	.4byte 0x782E756E
	.4byte 0x64657277
	.4byte 0x65617200
	.4byte 0x53422E6D
	.4byte 0x6F64656C
	.4byte 0x5F696E64
	.4byte 0x65782E77
	.4byte 0x616E6400
	.4byte 0x53422E6D
	.4byte 0x6F64656C
	.4byte 0x5F696E64
	.4byte 0x65782E74
	.4byte 0x6F6E6775
	.4byte 0x65005342
	.4byte 0x2E6D6F64
	.4byte 0x656C5F69
	.4byte 0x6E646578
	.4byte 0x2E627562
	.4byte 0x626C655F
	.4byte 0x68656C6D
	.4byte 0x65740053
	.4byte 0x422E6D6F
	.4byte 0x64656C5F
	.4byte 0x696E6465
	.4byte 0x782E6275
	.4byte 0x62626C65
	.4byte 0x5F73686F
	.4byte 0x655F6C00
	.4byte 0x53422E6D
	.4byte 0x6F64656C
	.4byte 0x5F696E64
	.4byte 0x65782E62
	.4byte 0x7562626C
	.4byte 0x655F7368
	.4byte 0x6F655F72
	.4byte 0x0053422E
	.4byte 0x6D6F6465
	.4byte 0x6C5F696E
	.4byte 0x6465782E
	.4byte 0x73686164
	.4byte 0x6F775F77
	.4byte 0x616E6400
	.4byte 0x53422E6D
	.4byte 0x6F64656C
	.4byte 0x5F696E64
	.4byte 0x65782E73
	.4byte 0x6861646F
	.4byte 0x775F6172
	.4byte 0x6D5F6C00
	.4byte 0x53422E6D
	.4byte 0x6F64656C
	.4byte 0x5F696E64
	.4byte 0x65782E73
	.4byte 0x6861646F
	.4byte 0x775F6172
	.4byte 0x6D5F7200
	.4byte 0x53422E6D
	.4byte 0x6F64656C
	.4byte 0x5F696E64
	.4byte 0x65782E73
	.4byte 0x6861646F
	.4byte 0x775F626F
	.4byte 0x64790070
	.4byte 0x61747269
	.4byte 0x636B2E4D
	.4byte 0x6F766553
	.4byte 0x70656564
	.4byte 0x00706174
	.4byte 0x7269636B
	.4byte 0x2E416E69
	.4byte 0x6D536E65
	.4byte 0x616B0070
	.4byte 0x61747269
	.4byte 0x636B2E41
	.4byte 0x6E696D57
	.4byte 0x616C6B00
	.4byte 0x70617472
	.4byte 0x69636B2E
	.4byte 0x416E696D
	.4byte 0x52756E00
	.4byte 0x70617472
	.4byte 0x69636B2E
	.4byte 0x4A756D70
	.4byte 0x47726176
	.4byte 0x69747900
	.4byte 0x70617472
	.4byte 0x69636B2E
	.4byte 0x47726176
	.4byte 0x536D6F6F
	.4byte 0x74680070
	.4byte 0x61747269
	.4byte 0x636B2E46
	.4byte 0x6C6F6174
	.4byte 0x53706565
	.4byte 0x64007061
	.4byte 0x74726963
	.4byte 0x6B2E4275
	.4byte 0x7474736D
	.4byte 0x61736853
	.4byte 0x70656564
	.4byte 0x00706174
	.4byte 0x7269636B
	.4byte 0x2E6C6564
	.4byte 0x67652E61
	.4byte 0x6E696D47
	.4byte 0x72616200
	.4byte 0x70617472
	.4byte 0x69636B2E
	.4byte 0x4A756D70
	.4byte 0x00706174
	.4byte 0x7269636B
	.4byte 0x2E446F75
	.4byte 0x626C6500
	.4byte 0x70617472
	.4byte 0x69636B2E
	.4byte 0x426F756E
	.4byte 0x63650070
	.4byte 0x61747269
	.4byte 0x636B2E53
	.4byte 0x7072696E
	.4byte 0x67007061
	.4byte 0x74726963
	.4byte 0x6B2E5761
	.4byte 0x6C6C0070
	.4byte 0x61747269
	.4byte 0x636B2E57
	.4byte 0x616C6C4A
	.4byte 0x756D7056
	.4byte 0x656C6F63
	.4byte 0x69747900
	.4byte 0x73616E64
	.4byte 0x792E4D6F
	.4byte 0x76655370
	.4byte 0x65656400
	.4byte 0x73616E64
	.4byte 0x792E416E
	.4byte 0x696D536E
	.4byte 0x65616B00
	.4byte 0x73616E64
	.4byte 0x792E416E
	.4byte 0x696D5761
	.4byte 0x6C6B0073
	.4byte 0x616E6479
	.4byte 0x2E416E69
	.4byte 0x6D52756E
	.4byte 0x0073616E
	.4byte 0x64792E4A
	.4byte 0x756D7047
	.4byte 0x72617669
	.4byte 0x74790073
	.4byte 0x616E6479
	.4byte 0x2E477261
	.4byte 0x76536D6F
	.4byte 0x6F746800
	.4byte 0x73616E64
	.4byte 0x792E466C
	.4byte 0x6F617453
	.4byte 0x70656564
	.4byte 0x0073616E
	.4byte 0x64792E42
	.4byte 0x75747473
	.4byte 0x6D617368
	.4byte 0x53706565
	.4byte 0x64007361
	.4byte 0x6E64792E
	.4byte 0x6C656467
	.4byte 0x652E616E
	.4byte 0x696D4772
	.4byte 0x61620073
	.4byte 0x616E6479
	.4byte 0x2E4A756D
	.4byte 0x70007361
	.4byte 0x6E64792E
	.4byte 0x446F7562
	.4byte 0x6C650073
	.4byte 0x616E6479
	.4byte 0x2E426F75
	.4byte 0x6E636500
	.4byte 0x73616E64
	.4byte 0x792E5370
	.4byte 0x72696E67
	.4byte 0x0073616E
	.4byte 0x64792E57
	.4byte 0x616C6C00
	.4byte 0x73616E64
	.4byte 0x792E5761
	.4byte 0x6C6C4A75
	.4byte 0x6D705665
	.4byte 0x6C6F6369
	.4byte 0x74790053
	.4byte 0x686F774D
	.4byte 0x656E754F
	.4byte 0x6E426F6F
	.4byte 0x74005346
	.4byte 0x58526570
	.4byte 0x6F727400
	.4byte 0x4C6F6164
	.4byte 0x696E672E
	.4byte 0x2E2E007B
	.4byte 0x666F6E74
	.4byte 0x3D307D7B
	.4byte 0x682A327D
	.4byte 0x7B772A32
	.4byte 0x7D25737B
	.4byte 0x636F6C6F
	.4byte 0x723D4646
	.4byte 0x46464646
	.4byte 0x46467D25
	.4byte 0x737B7E3A
	.4byte 0x637D0053
	.4byte 0x422E494E
	.4byte 0x49005041
	.4byte 0x54480042
	.4byte 0x4F4F5400
	.4byte 0x736F616B
	.4byte 0x006D6E75
	.4byte 0x33005072
	.4byte 0x6F66696C
	.4byte 0x65005072
	.4byte 0x6F664675
	.4byte 0x6E635472
	.4byte 0x69616E67
	.4byte 0x6C650000
	.4byte 0x50726F66
	.4byte 0x46756E63
	.4byte 0x53717561
	.4byte 0x72650050
	.4byte 0x726F6646
	.4byte 0x756E634C
	.4byte 0x65667400
	.4byte 0x50726F66
	.4byte 0x46756E63
	.4byte 0x52696768
	.4byte 0x74005072
	.4byte 0x6F664675
	.4byte 0x6E635570
	.4byte 0x0050726F
	.4byte 0x6646756E
	.4byte 0x63446F77
	.4byte 0x6E00456E
	.4byte 0x61626C65
	.4byte 0x48697048
	.4byte 0x6F704C6F
	.4byte 0x6164696E
	.4byte 0x67004E6F
	.4byte 0x4D757369
	.4byte 0x63006F6F
	.4byte 0x6F6F6F6F
	.4byte 0x6F6F007B
	.4byte 0x693A7465
	.4byte 0x78745F6D
	.4byte 0x656D5F63
	.4byte 0x6172645F
	.4byte 0x666F726D
	.4byte 0x61747469
	.4byte 0x6E677D7B
	.4byte 0x6E7D5B25
	.4byte 0x735D007B
	.4byte 0x693A7465
	.4byte 0x78745F6D
	.4byte 0x656D5F63
	.4byte 0x6172645F
	.4byte 0x666F726D
	.4byte 0x61745F66
	.4byte 0x61696C65
	.4byte 0x645F7961
	.4byte 0x6E6B6564
	.4byte 0x7D007B69
	.4byte 0x3A746578
	.4byte 0x745F6D65
	.4byte 0x6D5F6361
	.4byte 0x72645F66
	.4byte 0x6F726D61
	.4byte 0x745F6661
	.4byte 0x696C6564
	.4byte 0x7D007B69
	.4byte 0x3A746578
	.4byte 0x745F6D65
	.4byte 0x6D5F6361
	.4byte 0x72645F6E
	.4byte 0x6F5F666F
	.4byte 0x726D6174
	.4byte 0x7D007B69
	.4byte 0x3A746578
	.4byte 0x745F6D65
	.4byte 0x6D5F6361
	.4byte 0x72645F64
	.4byte 0x616D6167
	.4byte 0x65645F63
	.4byte 0x6172647D
	.4byte 0x007B693A
	.4byte 0x74657874
	.4byte 0x5F6D656D
	.4byte 0x5F636172
	.4byte 0x645F7772
	.4byte 0x6F6E675F
	.4byte 0x64657669
	.4byte 0x63657D00
	.4byte 0x7B693A74
	.4byte 0x6578745F
	.4byte 0x6D656D5F
	.4byte 0x63617264
	.4byte 0x5F6E6F5F
	.4byte 0x63617264
	.4byte 0x7D007B69
	.4byte 0x3A746578
	.4byte 0x745F6D65
	.4byte 0x6D5F6361
	.4byte 0x72645F63
	.4byte 0x6F727275
	.4byte 0x70745F66
	.4byte 0x696C657D
	.4byte 0x007B693A
	.4byte 0x74657874
	.4byte 0x5F726574
	.4byte 0x72797D00
	.4byte 0x7B693A74
	.4byte 0x6578745F
	.4byte 0x6D656D5F
	.4byte 0x63617264
	.4byte 0x5F64656C
	.4byte 0x6574696E
	.4byte 0x675F6669
	.4byte 0x6C657D00
	.4byte 0x7B693A74
	.4byte 0x6578745F
	.4byte 0x6D656D5F
	.4byte 0x63617264
	.4byte 0x5F64656C
	.4byte 0x6574655F
	.4byte 0x6661696C
	.4byte 0x65647D00
.endobj "@stringBase0"

# 0x8028FB70 - 0x8028FD80
.data
.balign 8

.obj g_xser_sizeinfo, local
.sym ...data.0, local
	.4byte 0x504C5952
	.4byte 0x00000148
	.4byte 0x434E5452
	.4byte 0x000001E0
	.4byte 0x00000000
	.4byte 0x00000000
.endobj g_xser_sizeinfo

.obj __FUNCTION__$854, local
	.4byte 0x7A4D6169
	.4byte 0x6E4F7574
	.4byte 0x7075744D
	.4byte 0x67725365
	.4byte 0x74757000
.endobj __FUNCTION__$854

.obj __FUNCTION__$897, local
	.4byte 0x7A4D6169
	.4byte 0x6E496E69
	.4byte 0x74476C6F
	.4byte 0x62616C73
	.byte 0x00
.endobj __FUNCTION__$897
	.byte 0x00, 0x00, 0x00

.obj fbuf$915, local
	.4byte 0x3F19999A
	.4byte 0x40400000
	.4byte 0x40E00000
	.4byte 0x3DCCCCCD
	.4byte 0x3F000000
	.4byte 0x3F800000
.endobj fbuf$915

.obj fbuf$916, local
	.4byte 0x3FC00000
	.4byte 0x3F000000
	.4byte 0x3FC00000
.endobj fbuf$916

.obj fbuf$917, local
	.4byte 0x40400000
	.4byte 0x3F000000
	.4byte 0x40200000
.endobj fbuf$917

.obj fbuf$918, local
	.4byte 0x40400000
	.4byte 0x3F000000
	.4byte 0x40200000
.endobj fbuf$918

.obj fbuf$919, local
	.4byte 0x40000000
	.4byte 0x3F333333
	.4byte 0x3EB33333
	.4byte 0x00000000
.endobj fbuf$919

.obj fbuf$920, local
	.4byte 0x3F800000
	.4byte 0x3F333333
	.4byte 0x3EB33333
	.4byte 0x00000000
.endobj fbuf$920

.obj fbuf$921, local
	.4byte 0x3FC00000
	.4byte 0x3E4CCCCD
	.4byte 0x3E4CCCCD
	.4byte 0x00000000
.endobj fbuf$921

.obj fbuf$922, local
	.4byte 0x40400000
	.4byte 0x3E4CCCCD
	.4byte 0x3E4CCCCD
	.4byte 0x00000000
.endobj fbuf$922

.obj fbuf$923, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj fbuf$923

.obj fbuf$924, local
	.4byte 0x3F19999A
	.4byte 0x40400000
	.4byte 0x40E00000
	.4byte 0x3DCCCCCD
	.4byte 0x3F000000
	.4byte 0x3F800000
.endobj fbuf$924

.obj fbuf$925, local
	.4byte 0x3FC00000
	.4byte 0x3F000000
	.4byte 0x3FC00000
.endobj fbuf$925

.obj fbuf$926, local
	.4byte 0x40400000
	.4byte 0x3F000000
	.4byte 0x40200000
.endobj fbuf$926

.obj fbuf$927, local
	.4byte 0x40400000
	.4byte 0x3F000000
	.4byte 0x40200000
.endobj fbuf$927

.obj fbuf$928, local
	.4byte 0x40000000
	.4byte 0x3F333333
	.4byte 0x3EB33333
	.4byte 0x00000000
.endobj fbuf$928

.obj fbuf$929, local
	.4byte 0x3F800000
	.4byte 0x3F333333
	.4byte 0x3EB33333
	.4byte 0x00000000
.endobj fbuf$929

.obj fbuf$930, local
	.4byte 0x3FC00000
	.4byte 0x3E4CCCCD
	.4byte 0x3E4CCCCD
	.4byte 0x00000000
.endobj fbuf$930

.obj fbuf$931, local
	.4byte 0x40400000
	.4byte 0x3E4CCCCD
	.4byte 0x3E4CCCCD
	.4byte 0x00000000
.endobj fbuf$931

.obj fbuf$932, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj fbuf$932

.obj fbuf$933, local
	.4byte 0x3F19999A
	.4byte 0x40400000
	.4byte 0x40E00000
	.4byte 0x3DCCCCCD
	.4byte 0x3F000000
	.4byte 0x3F800000
.endobj fbuf$933

.obj fbuf$934, local
	.4byte 0x3FC00000
	.4byte 0x3F000000
	.4byte 0x3FC00000
.endobj fbuf$934

.obj fbuf$935, local
	.4byte 0x40400000
	.4byte 0x3F000000
	.4byte 0x40200000
.endobj fbuf$935

.obj fbuf$936, local
	.4byte 0x40400000
	.4byte 0x3F000000
	.4byte 0x40200000
.endobj fbuf$936

.obj fbuf$937, local
	.4byte 0x40000000
	.4byte 0x3F333333
	.4byte 0x3EB33333
	.4byte 0x00000000
.endobj fbuf$937

.obj fbuf$938, local
	.4byte 0x3F800000
	.4byte 0x3F333333
	.4byte 0x3EB33333
	.4byte 0x00000000
.endobj fbuf$938

.obj fbuf$939, local
	.4byte 0x3FC00000
	.4byte 0x3E4CCCCD
	.4byte 0x3E4CCCCD
	.4byte 0x00000000
.endobj fbuf$939

.obj fbuf$940, local
	.4byte 0x40400000
	.4byte 0x3E4CCCCD
	.4byte 0x3E4CCCCD
	.4byte 0x00000000
.endobj fbuf$940

.obj fbuf$941, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj fbuf$941

.obj preinit_bubble_matfx$1073, local
	.4byte 0xDBD033BC
	.4byte 0x452279A2
	.4byte 0xC17F4BCC
	.4byte 0x0CF9267A
	.4byte 0x5C009D14
	.4byte 0x00000000
.endobj preinit_bubble_matfx$1073

.obj __FUNCTION__$1143, local
	.4byte 0x7A4D6169
	.4byte 0x6E526561
	.4byte 0x64494E49
	.byte 0x00
.endobj __FUNCTION__$1143
	.4byte 0x00000000
	.byte 0x00, 0x00, 0x00

# 0x803CABB0 - 0x803CABC0
.section .sdata, "wa"
.balign 8

.obj xglobals, global
	.4byte globals
.endobj xglobals

.obj sShowMenuOnBoot, local
	.4byte 0x00000001
.endobj sShowMenuOnBoot

.obj gSkipTimeCutscene, global
	.4byte 0x3F800000
.endobj gSkipTimeCutscene

.obj gSkipTimeFlythrough, global
	.4byte 0x3F800000
.endobj gSkipTimeFlythrough

# 0x803CB918 - 0x803CB930
.section .sbss, "wa", @nobits
.balign 8

.obj percentageDone, local
	.skip 0x4
.endobj percentageDone

.obj menuModeID$1080, local
	.skip 0x4
.endobj menuModeID$1080

.obj init$1081, local
	.skip 0x1
.endobj init$1081
	.skip 0x3

.obj gameSceneID$1083, local
	.skip 0x4
.endobj gameSceneID$1083

.obj init$1084, local
	.skip 0x1
.endobj init$1084
	.skip 0x7

# 0x803CDC58 - 0x803CDD10
.section .sdata2, "a"
.balign 8

.obj "@909", local
	.4byte 0x3D088889
.endobj "@909"

.obj "@1001", local
	.4byte 0x00000000
.endobj "@1001"

.obj "@1002", local
	.4byte 0x3F800000
.endobj "@1002"

.obj "@1003", local
	.4byte 0x40C00000
.endobj "@1003"

.obj "@1004", local
	.4byte 0x3FC00000
.endobj "@1004"

.obj "@1005", local
	.4byte 0x3E99999A
.endobj "@1005"

.obj "@1006", local
	.4byte 0x3E19999A
.endobj "@1006"

.obj "@1007", local
	.4byte 0x40400000
.endobj "@1007"

.obj "@1008", local
	.4byte 0x41200000
.endobj "@1008"

.obj "@1009", local
	.4byte 0x40000000
.endobj "@1009"

.obj "@1010", local
	.4byte 0x41A00000
.endobj "@1010"

.obj "@1011", local
	.4byte 0x41100000
.endobj "@1011"

.obj "@1012", local
	.4byte 0x3F000000
.endobj "@1012"

.obj "@1013", local
	.4byte 0x3FE00000
.endobj "@1013"

.obj "@1014", local
	.4byte 0x3F59999A
.endobj "@1014"

.obj "@1015", local
	.4byte 0x3DCCCCCD
.endobj "@1015"

.obj "@1016", local
	.4byte 0x40900000
.endobj "@1016"

.obj "@1017", local
	.4byte 0x40A00000
.endobj "@1017"

.obj "@1018", local
	.4byte 0x41700000
.endobj "@1018"

.obj "@1019", local
	.4byte 0x41400000
.endobj "@1019"

.obj "@1020", local
	.4byte 0x41880000
.endobj "@1020"

.obj "@1021", local
	.4byte 0x41F00000
.endobj "@1021"

.obj "@1022", local
	.4byte 0x40490FDB
.endobj "@1022"

.obj "@1023", local
	.4byte 0x43340000
.endobj "@1023"

.obj "@1024", local
	.4byte 0x3F2CCCCD
.endobj "@1024"

.obj "@1025", local
	.4byte 0x3FF33333
.endobj "@1025"

.obj "@1026", local
	.4byte 0xBE4CCCCD
.endobj "@1026"

.obj "@1027", local
	.4byte 0x3ECCCCCD
.endobj "@1027"

.obj "@1028", local
	.4byte 0x42340000
.endobj "@1028"

.obj "@1029", local
	.4byte 0xC0400000
.endobj "@1029"

.obj "@1030", local
	.4byte 0x40300000
.endobj "@1030"

.obj "@1031", local
	.4byte 0x41C80000
.endobj "@1031"

.obj "@1032", local
	.4byte 0x3E4CCCCD
.endobj "@1032"

.obj "@1033", local
	.4byte 0x40700000
.endobj "@1033"

.obj "@1034", local
	.4byte 0x40E00000
.endobj "@1034"

.obj "@1035", local
	.4byte 0x3E800000
.endobj "@1035"

.obj "@1171", local
	.4byte 0xFFE600C8
.endobj "@1171"

.obj "@1198", local
	.4byte 0x41980000
.endobj "@1198"

.obj "@1199", local
	.4byte 0x41B00000
.endobj "@1199"

.obj "@1344", local
	.4byte 0x47200000
.endobj "@1344"

.obj "@1345", local
	.4byte 0x3C888889
.endobj "@1345"
	.4byte 0x00000000

.obj "@1347", local
	.4byte 0x43300000
	.4byte 0x80000000
.endobj "@1347"

.obj "@1349", local
	.4byte 0x43300000
	.4byte 0x00000000
.endobj "@1349"

# 0x803D0868 - 0x803D0878
.section .sbss2, "a", @nobits
.balign 8

.obj "@1163", local
	.skip 0x4
.endobj "@1163"

.obj "@1354", local
	.skip 0x4
.endobj "@1354"

.obj "@1359", local
	.skip 0x4
.endobj "@1359"
	.skip 0x4
