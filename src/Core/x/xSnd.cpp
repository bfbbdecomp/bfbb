#include "xSnd.h"

#include <types.h>

#include "../src/Core/p2/iSnd.h"
#include "../src/Core/x/xVec3.h"

extern _xSndDelayed sDelayedSnd[16];
extern uint32 sDelayedPaused;

extern float32 sTimeElapsed;
extern float32 _585;
extern float32 _586;
extern float32 _598;

#ifndef NON_MATCHING
// func_800480B0
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndInit__Fv")
#else
void xSndInit()
{
    iSndInit();
    xSndVoiceInfo* voices = gSnd.voice;
    for (int32 i = 64; i > 0; i--)
    {
        voices->flags = 0;
        voices->lock_owner = 0;
        voices = voices + 1;
    }

    xSndSceneInit();

    //Need this to only use f0 instead of f1 for _585
    gSnd.categoryVolFader[0] = _585;
    gSnd.categoryVolFader[1] = _585;
    gSnd.categoryVolFader[3] = _585;
    gSnd.categoryVolFader[4] = _585;
    gSnd.categoryVolFader[2] = _586;

    gSnd.stereo = 1;
    iSndSuspendCD(1);
    xSndDelayedInit();
    reset_faders();
}
#endif

#if 1
// func_80048174
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndSceneInit__Fv")
#else
void xSndSceneInit()
{
}
#endif

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

#if 1
// func_800484E4
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndDelayedInit__Fv")
#else
void xSndDelayedInit()
{
    for (int i = 0; i < 16; i++)
    {
        sDelayedSnd[i].delay = _598;
    }
    sDelayedPaused = 0;
}
#endif

// func_80048578
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndDelayedUpdate__Fv")

// func_80048634
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s",                                                            \
                   "xSndAddDelayed__FUiffUiUiUiP4xEntP5xVec3ff14sound_categoryf")

// func_80048698
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndCalculateListenerPosition__Fv")

// func_80048794
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndProcessSoundPos__FPC5xVec3P5xVec3")

// func_800488BC
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndInternalUpdateVoicePos__FP13xSndVoiceInfo")

// func_80048994
void xSndUpdate()
{
    xSndCalculateListenerPosition();
    xSndDelayedUpdate();
    update_faders(sTimeElapsed);
    iSndUpdate();
}

// func_800489C4
void xSndSetListenerData(sound_listener_type listenerType, const xMat4x3 matrix)
{
    /*
    * This code appears to be correct but there appears to be a possibility
    * of accessing this array out of bounds.
    * It may be possible the dwarf data for sound_listener_type is incorrect
    * Otherwise it could be a potential bug 
    * (Gamecube audio bug source????)
    */
    int i = (int)listenerType;
    gSnd.listenerMat[i] = matrix;
}

// func_800489F8
void xSndSelectListenerMode(sound_listener_game_mode listenerGameMode)
{
    gSnd.listenerMode = listenerGameMode;
}

// func_80048A08
void xSndExit()
{
    iSndExit();
    reset_faders();
}

// func_80048A2C
uint32 xSndPlay(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags,
                uint32 parentID, sound_category category, float32 delay)
{
    return xSndPlayInternal(id, vol, pitch, priority, flags, parentID, NULL, NULL, _598, _598,
                            category, delay);
}

// func_80048A64
uint32 xSndPlay3D(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags,
                  xEnt* parent, float32 innerRadius, float32 outerRadius, sound_category category,
                  float32 delay)
{
    return xSndPlayInternal(id, vol, pitch, priority, flags, NULL, parent, NULL, innerRadius,
                            outerRadius, category, delay);
}

// func_80048A94
uint32 xSndPlay3D(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags, xVec3* pos,
                  float32 innerRadius, float32 outerRadius, sound_category category, float32 delay)
{
    if (flags & 0x800)
    {
        return xSndPlayInternal(id, vol, pitch, priority, flags, NULL, (xEnt*)pos, NULL,
                                innerRadius, outerRadius, category, delay);
    }
    else
    {
        return xSndPlayInternal(id, vol, pitch, priority, flags, NULL, NULL, pos, innerRadius,
                                outerRadius, category, delay);
    }
}

// func_80048AE0
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s",                                                            \
                   "xSndPlayInternal__FUiffUiUiUiP4xEntPC5xVec3ff14sound_categoryf")

// func_80049128
void xSndStartStereo(uint32 id1, uint32 id2, float32 pitch)
{
    iSndStartStereo(id1, id2, pitch);
}

// func_80049148
uint32 xSndIDIsPlaying(uint32 sndID)
{
    xSndVoiceInfo* voice = gSnd.voice;
    for (int i = 0; i != 64; i++, voice++)
    {
        if (voice->flags & 1 && voice->sndID == sndID)
        {
            return 1;
        }
    }
    return 0;
}

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
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xSnd.s",                                                                           \
    "__as__Q218_esc__2_unnamed_esc__2_xSnd_cpp_esc__2_9fade_dataFRCQ218_esc__2_unnamed_esc__2_xSnd_cpp_esc__2_9fade_data")

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
