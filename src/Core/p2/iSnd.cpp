#include "iSnd.h"

#include <types.h>

// func_800CF92C
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "dv_callback__FPv")

// func_800CFA40
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "arq_callback__FUl")

// func_800CFA58
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "dump_flags__FUi")

// func_800CFB9C
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "dvdcb__FlP11DVDFileInfo")

// func_800CFCAC
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "arqcb__FUl")

// func_800CFE54
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "fcb__Fv")

// func_800D047C
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndInit__Fv")

// func_800D07D8
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndExit__Fv")

// func_800D0800
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndSetEnvironmentalEffect__F13isound_effect")

// func_800D0804
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndInitSceneLoaded__Fv")

// func_800D0808
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndIsPlaying__FUi")

// func_800D08DC
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndIsPlaying__FUiUi")

// func_800D0978
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndIsPlayingByHandle__FUi")

// func_800D0A44
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndLookup__FUi")

// func_800D0D34
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndPause__FUiUi")

// func_800D0EFC
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndStop__FUi")

// func_800D1060
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iVolFromX__Ff")

// func_800D10C8
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndCalcVol__FP13xSndVoiceInfoP5vinfo")

// func_800D115C
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndCalcVol3d__FP13xSndVoiceInfoP5vinfo")

// func_800D12D8
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndVolUpdate__FP13xSndVoiceInfoP5vinfo")

// func_800D1344
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndUpdateStreams__Fv")

// func_800D14E8
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndUpdateSounds__Fv")

// func_800D1570
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndUpdate__Fv")

// func_800D16A4
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndFindFreeVoice__FUiUiUi")

// func_800D1938
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndPrepStream__FP13xSndVoiceInfo")

// func_800D1A68
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndPlayMemStream__FP13xSndVoiceInfo")

// func_800D1C6C
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndPlayStream__FP13xSndVoiceInfo")

// func_800D1EAC
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndPlaySound__FP13xSndVoiceInfo")

// func_800D21A0
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndPlay__FP13xSndVoiceInfo")

// func_800D2260
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndSetVol__FUif")

// func_800D23F0
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndSetPitch__FUif")

// func_800D2560
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndStartStereo__FUiUif")

// func_800D2564
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndStereo__FUi")

// func_800D25B4
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndWaitForDeadSounds__Fv")

// func_800D260C
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndSuspendCD__FUi")

// func_800D2610
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndSceneExit__Fv")

// func_800D27E4
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndMessWithEA__FP9sDSPADPCM")

// func_800D2820
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "SampleToNybbleAddress__FUi")

// func_800D2854
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "sndloadcb__FP9tag_xFile")

// func_800D2860
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndLoadSounds__FPv")

// func_800D2DF0
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndDIEDIEDIE__Fv")

// func_800D2EB8
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndSetExternalCallback__FPFUi_v")

// func_800D2EBC
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndMyAXFree__FPP6_AXVPB")

// func_800D2F00
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndSuspend__Fv")

// func_800D2F94
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndResume__Fv")

// func_800D3044
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndGetVol__FUi")
