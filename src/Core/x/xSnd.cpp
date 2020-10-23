#include "xSnd.h"

#include <types.h>

// func_800480B0
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndInit__Fv")

// func_80048174
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndSceneInit__Fv")

// func_80048288
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndSetEnvironmentalEffect__F12sound_effect")

// func_800482D0
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndSuspend__Fv")

// func_80048304
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndResume__Fv")

// func_80048334
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndPauseAll__FUiUi")

// func_800483D0
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndPauseCategory__FUiUi")

// func_80048444
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndSetCategoryVol__F14sound_categoryf")

// func_8004845C
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndStopAll__FUi")

// func_800484E4
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndDelayedInit__Fv")

// func_80048578
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndDelayedUpdate__Fv")

// func_80048634
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndAddDelayed__FUiffUiUiUiP4xEntP5xVec3ff14sound_categoryf")

// func_80048698
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndCalculateListenerPosition__Fv")

// func_80048794
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndProcessSoundPos__FPC5xVec3P5xVec3")

// func_800488BC
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndInternalUpdateVoicePos__FP13xSndVoiceInfo")

// func_80048994
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndUpdate__Fv")

// func_800489C4
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndSetListenerData__F19sound_listener_typePC7xMat4x3")

// func_800489F8
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndSelectListenerMode__F24sound_listener_game_mode")

// func_80048A08
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndExit__Fv")

// func_80048A2C
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndPlay__FUiffUiUiUi14sound_categoryf")

// func_80048A64
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndPlay3D__FUiffUiUiP4xEntff14sound_categoryf")

// func_80048A94
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndPlay3D__FUiffUiUiPC5xVec3ff14sound_categoryf")

// func_80048AE0
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndPlayInternal__FUiffUiUiUiP4xEntPC5xVec3ff14sound_categoryf")

// func_80049128
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndStartStereo__FUiUif")

// func_80049148
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndIDIsPlaying__FUi")

// func_80049200
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndStop__FUi")

// func_80049220
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndParentDied__FUi")

// func_80049324
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndStopChildren__FUi")

// func_800493A8
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndSetVol__FUif")

// func_800493C8
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndSetPitch__FUif")

// func_800493E8
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndSetExternalCallback__FPFUi_v")

// func_80049408
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "reset_faders__Fv")

// func_80049414
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "update_faders__Ff")

// func_80049538
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "__as__Q218_esc__2_unnamed_esc__2_xSnd_cpp_esc__2_9fade_dataFRCQ218_esc__2_unnamed_esc__2_xSnd_cpp_esc__2_9fade_data")

// func_8004956C
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndPlay3DFade__FUiffUiUiPC5xVec3ff14sound_categoryff")

// func_80049644
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndStopFade__FUif")

// func_800497A4
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndStreamLock__FUi14sound_categoryb")

// func_80049910
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndStreamReady__FUi")

// func_8004995C
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndStreamUnlock__FUi")

// func_8004999C
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndCategoryGetsEffects__F14sound_category")

// func_800499C4
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndGetVol__FUi")
