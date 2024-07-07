#include "xSnd.h"

#include <types.h>

#include "iSnd.h"
#include "xVec3.h"

extern _xSndDelayed sDelayedSnd[16];
extern U32 sDelayedPaused;

extern F32 sTimeElapsed;
extern F32 _585;
extern F32 _586;
extern F32 _598;
extern F32 _599;
extern xSndGlobals gSnd;

#ifdef NON_MATCHING
void xSndInit()
{
    iSndInit();
    xSndVoiceInfo* voice = gSnd.voice;
    for (S32 i = 0; i < 64; i++, voice++)
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

void xSndSceneInit()
{
    gSnd.listenerMode = SND_LISTENER_MODE_PLAYER;
    for (U32 i = 0; i < 2; i++)
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

void xSndSetCategoryVol(sound_category category, F32 vol)
{
    gSnd.categoryVolFader[category] = vol;
}

#ifdef NON_MATCHING
void xSndDelayedInit()
{
    for (int i = 0; i < 16; i++)
    {
        //Alternates between f1 and f0
        sDelayedSnd[i].delay = *(volatile F32*)&_598;
    }
    sDelayedPaused = 0;
}
#endif

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

#ifdef NON_MATCHING
void xSndInternalUpdateVoicePos(xSndVoiceInfo* pVoice)
{
    U32 flags = pVoice->flags;
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

void xSndUpdate()
{
    xSndCalculateListenerPosition();
    xSndDelayedUpdate();
    update_faders(sTimeElapsed);
    iSndUpdate();
}

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

void xSndSelectListenerMode(sound_listener_game_mode listenerGameMode)
{
    gSnd.listenerMode = listenerGameMode;
}

void xSndExit()
{
    iSndExit();
    reset_faders();
}

U32 xSndPlay(U32 id, F32 vol, F32 pitch, U32 priority, U32 flags,
                U32 parentID, sound_category category, F32 delay)
{
    return xSndPlayInternal(id, vol, pitch, priority, flags, parentID, NULL, NULL, _598, _598,
                            category, delay);
}

U32 xSndPlay3D(U32 id, F32 vol, F32 pitch, U32 priority, U32 flags,
                  xEnt* parent, F32 innerRadius, F32 outerRadius, sound_category category,
                  F32 delay)
{
    return xSndPlayInternal(id, vol, pitch, priority, flags, NULL, parent, NULL, innerRadius,
                            outerRadius, category, delay);
}

U32 xSndPlay3D(U32 id, F32 vol, F32 pitch, U32 priority, U32 flags,
                  const xVec3* pos, F32 innerRadius, F32 outerRadius,
                  sound_category category, F32 delay)
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

void xSndStartStereo(U32 id1, U32 id2, F32 pitch)
{
    iSndStartStereo(id1, id2, pitch);
}

U32 xSndIDIsPlaying(U32 sndID)
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

void xSndStop(U32 snd)
{
    iSndStop(snd);
}

void xSndParentDied(U32 pid)
{
    xSndVoiceInfo* voice = gSnd.voice;
    for (S32 i = 0; i < 64; i++, voice++)
    {
        if (voice->parentID == pid)
        {
            voice->flags = voice->flags & 0xffffffef;
        }
    }
}

void xSndStopChildren(U32 pid)
{
    U32 i = 0;
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

void xSndSetVol(U32 snd, F32 vol)
{
    iSndSetVol(snd, vol);
}

void xSndSetPitch(U32 snd, F32 pitch)
{
    iSndSetPitch(snd, pitch);
}

void xSndSetExternalCallback(void (*callback)(U32))
{
    iSndSetExternalCallback(callback);
}

#if 0
// Subtle issue with the register use in the setup of the loop
U8 xSndStreamReady(U32 owner)
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

#if 0
// Same issue as xSndStreamReady
void xSndStreamUnlock(U32 owner)
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

#if 0
U32 xSndCategoryGetsEffects(sound_category category)
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

F32 xSndGetVol(U32 snd)
{
    return iSndGetVol(snd);
}
