#include "xSnd.h"

#include <types.h>

// xSndInit()
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndInit__Fv")

// xSndSceneInit()
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndSceneInit__Fv")

// xSndSetEnvironmentalEffect(sound_effect)
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndSetEnvironmentalEffect__F12sound_effect")

// xSndSuspend()
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndSuspend__Fv")

// xSndResume()
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndResume__Fv")

// xSndPauseAll(unsigned int,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndPauseAll__FUiUi")

// xSndPauseCategory(unsigned int,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndPauseCategory__FUiUi")

// xSndSetCategoryVol(sound_category,float)
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndSetCategoryVol__F14sound_categoryf")

// xSndStopAll(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndStopAll__FUi")

// xSndDelayedInit()
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndDelayedInit__Fv")

// xSndDelayedUpdate()
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndDelayedUpdate__Fv")

// xSndAddDelayed(unsigned int,float,float,unsigned int,unsigned int,unsigned int,xEnt*,xVec3*,float,float,sound_category,float)
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndAddDelayed__FUiffUiUiUiP4xEntP5xVec3ff14sound_categoryf")

// xSndCalculateListenerPosition()
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndCalculateListenerPosition__Fv")

// xSndProcessSoundPos(const xVec3*,xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndProcessSoundPos__FPC5xVec3P5xVec3")

// xSndInternalUpdateVoicePos(xSndVoiceInfo*)
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndInternalUpdateVoicePos__FP13xSndVoiceInfo")

// xSndUpdate()
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndUpdate__Fv")

// xSndSetListenerData(sound_listener_type,const xMat4x3*)
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndSetListenerData__F19sound_listener_typePC7xMat4x3")

// xSndSelectListenerMode(sound_listener_game_mode)
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndSelectListenerMode__F24sound_listener_game_mode")

// xSndExit()
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndExit__Fv")

// xSndPlay(unsigned int,float,float,unsigned int,unsigned int,unsigned int,sound_category,float)
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndPlay__FUiffUiUiUi14sound_categoryf")

// xSndPlay3D(unsigned int,float,float,unsigned int,unsigned int,xEnt*,float,float,sound_category,float)
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndPlay3D__FUiffUiUiP4xEntff14sound_categoryf")

// xSndPlay3D(unsigned int,float,float,unsigned int,unsigned int,const xVec3*,float,float,sound_category,float)
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndPlay3D__FUiffUiUiPC5xVec3ff14sound_categoryf")

// xSndPlayInternal(unsigned int,float,float,unsigned int,unsigned int,unsigned int,xEnt*,const xVec3*,float,float,sound_category,float)
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndPlayInternal__FUiffUiUiUiP4xEntPC5xVec3ff14sound_categoryf")

// xSndStartStereo(unsigned int,unsigned int,float)
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndStartStereo__FUiUif")

// xSndIDIsPlaying(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndIDIsPlaying__FUi")

// xSndStop(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndStop__FUi")

// xSndParentDied(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndParentDied__FUi")

// xSndStopChildren(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndStopChildren__FUi")

// xSndSetVol(unsigned int,float)
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndSetVol__FUif")

// xSndSetPitch(unsigned int,float)
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndSetPitch__FUif")

// xSndSetExternalCallback(void (*)(unsigned int))
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndSetExternalCallback__FPFUi_v")

// reset_faders()
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "reset_faders__Fv")

// update_faders(float)
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "update_faders__Ff")

#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "__as__Q218_esc__2_unnamed_esc__2_xSnd_cpp_esc__2_9fade_dataFRCQ218_esc__2_unnamed_esc__2_xSnd_cpp_esc__2_9fade_data")

// xSndPlay3DFade(unsigned int,float,float,unsigned int,unsigned int,const xVec3*,float,float,sound_category,float,float)
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndPlay3DFade__FUiffUiUiPC5xVec3ff14sound_categoryff")

// xSndStopFade(unsigned int,float)
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndStopFade__FUif")

// xSndStreamLock(unsigned int,sound_category,bool)
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndStreamLock__FUi14sound_categoryb")

// xSndStreamReady(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndStreamReady__FUi")

// xSndStreamUnlock(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndStreamUnlock__FUi")

// xSndCategoryGetsEffects(sound_category)
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndCategoryGetsEffects__F14sound_category")

// xSndGetVol(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndGetVol__FUi")
