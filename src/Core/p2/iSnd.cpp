#include "iSnd.h"

#include <types.h>

#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "dv_callback__FPv")

// dump_flags(unsigned int)
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "dump_flags__FUi")

// iSndInit()
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndInit__Fv")

// iSndExit()
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndExit__Fv")

// iSndSetEnvironmentalEffect(isound_effect)
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndSetEnvironmentalEffect__F13isound_effect")

// iSndInitSceneLoaded()
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndInitSceneLoaded__Fv")

// iSndIsPlaying(unsigned int)
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndIsPlaying__FUi")

// iSndIsPlaying(unsigned int,unsigned int)
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndIsPlaying__FUiUi")

// iSndIsPlayingByHandle(unsigned int)
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndIsPlayingByHandle__FUi")

// iSndLookup(unsigned int)
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndLookup__FUi")

// iSndPause(unsigned int,unsigned int)
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndPause__FUiUi")

// iSndStop(unsigned int)
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndStop__FUi")

// iVolFromX(float)
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iVolFromX__Ff")

// iSndCalcVol(xSndVoiceInfo*,vinfo*)
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndCalcVol__FP13xSndVoiceInfoP5vinfo")

// iSndCalcVol3d(xSndVoiceInfo*,vinfo*)
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndCalcVol3d__FP13xSndVoiceInfoP5vinfo")

// iSndVolUpdate(xSndVoiceInfo*,vinfo*)
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndVolUpdate__FP13xSndVoiceInfoP5vinfo")

// iSndUpdateStreams()
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndUpdateStreams__Fv")

// iSndUpdateSounds()
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndUpdateSounds__Fv")

// iSndUpdate()
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndUpdate__Fv")

// iSndFindFreeVoice(unsigned int,unsigned int,unsigned int)
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndFindFreeVoice__FUiUiUi")

// iSndPrepStream(xSndVoiceInfo*)
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndPrepStream__FP13xSndVoiceInfo")

// iSndPlayMemStream(xSndVoiceInfo*)
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndPlayMemStream__FP13xSndVoiceInfo")

// iSndPlayStream(xSndVoiceInfo*)
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndPlayStream__FP13xSndVoiceInfo")

// iSndPlaySound(xSndVoiceInfo*)
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndPlaySound__FP13xSndVoiceInfo")

// iSndPlay(xSndVoiceInfo*)
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndPlay__FP13xSndVoiceInfo")

// iSndSetVol(unsigned int,float)
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndSetVol__FUif")

// iSndSetPitch(unsigned int,float)
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndSetPitch__FUif")

// iSndStartStereo(unsigned int,unsigned int,float)
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndStartStereo__FUiUif")

// iSndStereo(unsigned int)
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndStereo__FUi")

// iSndWaitForDeadSounds()
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndWaitForDeadSounds__Fv")

// iSndSuspendCD(unsigned int)
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndSuspendCD__FUi")

// iSndSceneExit()
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndSceneExit__Fv")

// iSndMessWithEA(sDSPADPCM*)
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndMessWithEA__FP9sDSPADPCM")

// SampleToNybbleAddress(unsigned int)
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "SampleToNybbleAddress__FUi")

// iSndLoadSounds(void*)
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndLoadSounds__FPv")

#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSnd_rename_3")

// iSndSetExternalCallback(void (*)(unsigned int))
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndSetExternalCallback__FPFUi_v")

// iSndMyAXFree(_AXVPB**)
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndMyAXFree__FPP6_AXVPB")

#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSnd_rename_1")

#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSnd_rename_2")

// iSndGetVol(unsigned int)
#pragma GLOBAL_ASM("asm/Core/p2/iSnd.s", "iSndGetVol__FUi")
