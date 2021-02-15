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
extern float32 _599;
extern xSndGlobals gSnd;

#ifndef NON_MATCHING
// func_800480B0
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndInit__Fv")
#else
void xSndInit()
{
    iSndInit();
    xSndVoiceInfo* voice = gSnd.voice;
    for (int32 i = 0; i < 64; i++, voice++)
    {
        voice->flags = 0;
        voice->lock_owner = 0;
    }

    xSndSceneInit();

    //Need this to only use f0 instead of f1 for _585
    for (int i = 0; i < 5; i++)
    {
        gSnd.categoryVolFader[i] = _585;
    }

    gSnd.categoryVolFader[2] = _586;

    gSnd.stereo = 1;
    iSndSuspendCD(1);
    xSndDelayedInit();
    reset_faders();
}
#endif

// func_80048174
void xSndSceneInit()
{
    gSnd.listenerMode = SND_LISTENER_MODE_PLAYER;
    for (uint32 i = 0; i < 2; i++)
    {
        gSnd.listenerMat[i].at.assign(_585, _598, _598);
        gSnd.listenerMat[i].right.assign(_598, _585, _598);
        gSnd.listenerMat[i].up.assign(_598, _598, _585);
        gSnd.listenerMat[i].pos.assign(_599, _599, _599);
    }
    gSnd.at.assign(_585, _598, _598);
    gSnd.right.assign(_598, _585, _598);
    gSnd.up.assign(_598, _598, _585);
    gSnd.pos.assign(_599, _599, _599);
    iSndUpdate();
}

void xSndSetEnvironmentalEffect(sound_effect effectType)
{
    switch (effectType)
    {
    case SND_EFFECT_NONE:
        iSndSetEnvironmentalEffect(iSND_EFFECT_NONE);
        break;
    case SND_EFFECT_CAVE:
        iSndSetEnvironmentalEffect(iSND_EFFECT_CAVE);
        break;
    default:
        break;
    }
}

void xSndSuspend()
{
    xSndPauseAll(1, 1);
    sDelayedPaused = 1;
    xSndUpdate();
}

void xSndResume()
{
    xSndPauseAll(0, 0);
    sDelayedPaused = 0;
}

// func_80048334
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndPauseAll__FUiUi")

// func_800483D0
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndPauseCategory__FUiUi")

void xSndSetCategoryVol(sound_category category, float32 vol)
{
    gSnd.categoryVolFader[category] = vol;
}

// func_8004845C
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndStopAll__FUi")

#ifndef NON_MATCHING
// func_800484E4
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndDelayedInit__Fv")
#else
void xSndDelayedInit()
{
    for (int i = 0; i < 16; i++)
    {
        //Alternates between f1 and f0
        sDelayedSnd[i].delay = *(volatile float32*)&_598;
    }
    sDelayedPaused = 0;
}
#endif

// func_80048578
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndDelayedUpdate__Fv")

// func_80048634
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s",                                                            \
                   "xSndAddDelayed__FUiffUiUiUiP4xEntP5xVec3ff14sound_categoryf")

void xSndCalculateListenerPosition()
{
    xMat4x3* pMat;

    switch (gSnd.listenerMode)
    {
    case SND_LISTENER_MODE_PLAYER:
        pMat = &gSnd.listenerMat[0];
        gSnd.right = pMat->right;
        gSnd.up = pMat->up;
        gSnd.at = pMat->at;
        gSnd.pos = gSnd.listenerMat[1].pos;
        gSnd.pos.y += _585;
        break;
    case SND_LISTENER_MODE_CAMERA:
        pMat = &gSnd.listenerMat[0];
        gSnd.right = pMat->right;
        gSnd.up = pMat->up;
        gSnd.at = pMat->at;
        gSnd.pos = gSnd.listenerMat[0].pos;
        break;
    default:
        break;
    }
}

// func_80048794
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndProcessSoundPos__FPC5xVec3P5xVec3")

#ifndef NON_MATCHING
// func_800488BC
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndInternalUpdateVoicePos__FP13xSndVoiceInfo")
#else
void xSndInternalUpdateVoicePos(xSndVoiceInfo* pVoice)
{
    uint32 flags = pVoice->flags;
    xVec3* ent;

    if ((flags & 1) != 0)
    {
        if ((flags & 8) != 0)
        {
            if ((flags & 0x10) != 0)
            {
                if (pVoice->parentPos == (xVec3*)0x0)
                {
                    if (pVoice->parentID == 0)
                    {
                        if ((flags & 8) == 0)
                        {
                            pVoice->actualPos = gSnd.pos;
                        }
                    }
                    else
                    {
                        ent = pVoice->parentID & 0xfffffffc);
                        if ((flags & 0x800) == 0)
                        {
                            if ((? & 1) == 0)
                            {
                                pVoice->flags = flags & 0xffffffef;
                            }
                            else
                            {
                                pxVar2 = (xVec3*)xEntGetPos((xEnt*)ent);
                                xVec3Copy(pVoice->actualPos, ent);
                            }
                        }
                        else
                        {
                            pVoice->actualPos = ent;
                        }
                    }
                }
                else
                {
                    pVoice->actualPos = pVoice->parentPos;
                }
            }
            xSndProcessSoundPos(pVoice->actualPos, pVoice->playPos);
        }
    }
}
#endif

// func_80048994
void xSndUpdate()
{
    xSndCalculateListenerPosition();
    xSndDelayedUpdate();
    update_faders(sTimeElapsed);
    iSndUpdate();
}

// func_800489C4
void xSndSetListenerData(sound_listener_type listenerType, const xMat4x3* matrix)
{
    /*
    * This code appears to be correct but there appears to be a possibility
    * of accessing this array out of bounds.
    * It may be possible the dwarf data for sound_listener_type is incorrect
    * Otherwise it could be a potential bug 
    * (Gamecube audio bug source????)
    */
    int i = (int)listenerType;
    gSnd.listenerMat[i] = *matrix;
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
    for (int i = 0; i < 64; i++, voice++)
    {
        if (voice->flags & 1 && voice->sndID == sndID)
        {
            return 1;
        }
    }
    return 0;
}

// func_80049200
void xSndStop(uint32 snd)
{
    iSndStop(snd);
}

// func_80049220
void xSndParentDied(uint32 pid)
{
    xSndVoiceInfo* voice = gSnd.voice;
    for (int32 i = 0; i < 64; i++, voice++)
    {
        if (voice->parentID == pid)
        {
            voice->flags = voice->flags & 0xffffffef;
        }
    }
}

// func_80049324
void xSndStopChildren(uint32 pid)
{
    uint32 i = 0;
    xSndVoiceInfo* voice = gSnd.voice;
    for (; i < 64; i++, voice++)
    {
        if ((voice->flags & 1) != 0 && voice->parentID == pid)
        {
            iSndStop(voice->sndID);
            voice->flags = voice->flags & 0xffffffef;
        }
    }
}

// func_800493A8
void xSndSetVol(uint32 snd, float32 vol)
{
    iSndSetVol(snd, vol);
}

// func_800493C8
void xSndSetPitch(uint32 snd, float32 pitch)
{
    iSndSetPitch(snd, pitch);
}

// func_800493E8
void xSndSetExternalCallback(void (*callback)(uint32))
{
    iSndSetExternalCallback(callback);
}

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

#if 1
// func_80049910
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndStreamReady__FUi")
#else
// Subtle issue with the register use in the setup of the loop
uint8 xSndStreamReady(uint32 owner)
{
    for (xSndVoiceInfo* voice = gSnd.voice; voice != gSnd.voice + 6; voice++)
    {
        if (voice->lock_owner == owner)
        {
            return !(voice->flags & 1);
        }
    }
    return 0;
}
#endif

#if 1
// func_8004995C
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndStreamUnlock__FUi")
#else
// Same issue as xSndStreamReady
void xSndStreamUnlock(uint32 owner)
{
    xSndVoiceInfo* voice = gSnd.voice;
    for (; voice != gSnd.voice + 6; voice++)
    {
        if (voice->lock_owner == owner)
        {
            voice->lock_owner = 0;
            return;
        }
    }
}
#endif

#if 1
// func_8004999C
#pragma GLOBAL_ASM("asm/Core/x/xSnd.s", "xSndCategoryGetsEffects__F14sound_category")
#else
uint32 xSndCategoryGetsEffects(sound_category category)
{
    if (-(1 - category >> 1) + (~category | 1))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
#endif

// func_800499C4
float32 xSndGetVol(uint32 snd)
{
    return iSndGetVol(snd);
}
