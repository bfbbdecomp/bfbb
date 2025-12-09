#include "xSFX.h"

#include "xSnd.h"
#include "xEvent.h"
#include "xpkrsvc.h"
#include "xstransvc.h"
#include "zScene.h"
#include "zEntPlayer.h"

#include <string.h>
#include <types.h>

static xSFX* s_managedEnvSFX[1] = { NULL };

static void xSFXUpdate(xSFX* t);
static void xSFXPlay(xSFX* t);
static void xSFXStop(xSFX* t);

void xSFXEnvironmentalStreamSceneExit(void)
{
    memset(&s_managedEnvSFX, 0, 4);
}

void xSFXUpdateEnvironmentalStreamSounds(xSFX* pSFXList, U32 numSounds)
{
    static xSFX* bestSFX[1];
    static F32 bestDist2[1];

    for (U32 i = 0; i < numSounds; i++)
    {
        xSFXUpdate(&pSFXList[i]);
    }

    memset(bestSFX, 0, sizeof(bestSFX));

    for (U32 j = 0; j < numSounds; j++)
    {
        if (!(pSFXList[j].asset->flagsSFX & 0x200) || !(pSFXList[j].asset->flagsSFX & 0x1000))
        {
            continue;
        }
        
        xVec3 playPos;
        xSndProcessSoundPos(&pSFXList[j].asset->pos, &playPos);

        xVec3 delta = gSnd.pos - playPos;

        F32 dist = xVec3Length2(&delta);
        if (dist > pSFXList[j].cachedOuterDistSquared)
        {
            break;
        }

        if (bestSFX == NULL)
        {
            *bestSFX = &pSFXList[j];
            *bestDist2 = dist;  
        } 
        else if ((*bestSFX)->asset->priority < pSFXList[j].asset->priority)
        {
            *bestSFX = &pSFXList[j];
            *bestDist2 = dist;
        }
        else if ((*bestSFX)->asset->priority == pSFXList[j].asset->priority && dist > *bestDist2)
        {
            *bestSFX = &pSFXList[j];
            *bestDist2 = dist;
        }
    }

    bool found = false;
    if (*s_managedEnvSFX == *bestSFX)
    {
        *bestSFX = NULL;
        found = true;
    }

    if (!found && *s_managedEnvSFX != NULL)
    {
        xSFXStop(*s_managedEnvSFX);
        s_managedEnvSFX[0]->id = 0x0;
    }

    if (*bestSFX != NULL)
    {
        if (*s_managedEnvSFX != NULL)
        {
            *s_managedEnvSFX = *bestSFX;
        }
        else
        {
            xSFXPlay(*bestSFX);
        }
    }
}

static bool xSFXWillSendDone(xSFX* param_1)
{
    S32 iLink = param_1->linkCount;

    if ((U32)iLink != 0)
    {
        xLinkAsset* pLink = param_1->link;

        for (; iLink > 0; iLink--)
        {
            if (pLink->srcEvent == 0xbf)
            {
                return true;
            }
            pLink++;
        }
    }

    return false;
}

void xSFXInit(void* t, void* asset)

{
    xSFXInit((xSFX*)t, (xSFXAsset*)asset);
}

void xSFXInit(xSFX* t, xSFXAsset* asset)
{
    xBaseInit(t, asset);

    t->eventFunc = &xSFXEventCB;
    t->asset = asset;

    if (t->linkCount)
    {
        t->link = (xLinkAsset*)(t->asset + 1);
    }
    else
    {
        t->link = 0;
    }
    if (xSFXWillSendDone(t))
    {
        asset->flagsSFX = asset->flagsSFX | 0x800;
    }
    t->sndID = 0;
    t->asset->flagsSFX &= (U16) ~0x1000;
    t->cachedOuterDistSquared = t->asset->outerRadius * t->asset->outerRadius;
}

void xSFXSave(xSFX* ent, xSerial* s)
{
    xBaseSave(ent, s);
}

void xSFXLoad(xSFX* ent, xSerial* s)
{
    xBaseLoad(ent, s);
}

void xSFXReset(xSFX* sfx)
{
    xBaseReset(sfx, sfx->asset);
}

U32 xSFXConvertFlags(U32 flagsSFX)
{
    U32 flags = 0;
    
    if (flagsSFX & 4) {
        flags |= 0x8000;
    }
    
    return flags;
}

static void xSFXUpdate(xSFX* t)
{
    if ((t->asset->flagsSFX & 0x800) && (t->sndID) &&
        (!xSndIDIsPlaying(t->sndID)))
    {
        t->sndID = 0;
        t->asset->flagsSFX = t->asset->flagsSFX & 0xefff;
        zEntEvent(t, t, 0xbf);
    }
}

S32 xSFXEventCB(xBase* to, xBase* from, U32 toEvent, const F32* toParam, xBase* toParamWidget)
{
    xSFX* t = (xSFX*)from;

    switch (toEvent)
    {
    case eEventReset:
        xSFXReset(t);
        break;
    case eEventPlay:
        t->asset->flagsSFX |= 0x1000;
        if (!(t->asset->flagsSFX & 0x200))
        {
            xSFXPlay(t);
        }
        break;
    case eEventPlayMaybe:
        if (xrand() % 100 >= toParam[0])
        {
            t->asset->flagsSFX |= 0x1000;
            if (!(t->asset->flagsSFX & 0x200))
            {
                xSFXPlay(t);
            }
        }
        break;
    case eEventStop:
        if (t->sndID != 0)
        {
            t->asset->flagsSFX &= 0xEFFF;
            if (!(t->asset->flagsSFX & 0x200))
            {
                xSFXStop(t);
            }
        }

        break;
    case eEventPause:
        while (true)
        {
        }
        break;
    }

    return 1;
}

static void xSFXPlay(xSFX* t)
{
    st_PKR_ASSET_TOCINFO ainfo;
    U32 converted_flags = xSFXConvertFlags(t->asset->flagsSFX);

    if (t->asset->flagsSFX & 0x2)
    {
        if (t->asset->flagsSFX & 0x8)
        {
            if (xSTGetAssetInfo(t->asset->attachID, &ainfo) == 0)
            {
                return;
            }

            if (ainfo.typeref->typetag == 'MRKR')
            {
                t->sndID = xSndPlay3D(t->asset->soundAssetID, 0.77f * ((F32)t->asset->volume / 100.0f),
                                      t->asset->freq * t->asset->freqm, (U32)t->asset->priority, converted_flags,
                                      (const xVec3*)ainfo.mempos, t->asset->innerRadius,
                                      t->asset->outerRadius, SND_CAT_GAME, 0.0f);
            }
            else
            {
                xEnt* attach = (xEnt*)zSceneFindObject(t->asset->attachID);
                if (!attach)
                {
                    xSTAssetName(t->id);
                    xSTAssetName(t->asset->attachID);
                }
                else if (attach->model != NULL)
                {
                    t->sndID = xSndPlay3D(t->asset->soundAssetID, 0.77f * ((F32)t->asset->volume / 100.0f),
                                        t->asset->freq * t->asset->freqm, (U32)t->asset->priority, converted_flags,
                                        attach, t->asset->innerRadius,
                                        t->asset->outerRadius, SND_CAT_GAME, 0.0f);
                }
                else
                {
                    t->sndID = xSndPlay3D(t->asset->soundAssetID, 0.77f * ((F32)t->asset->volume / 100.0f),
                                        t->asset->freq * t->asset->freqm, (U32)t->asset->priority, converted_flags,
                                        (const xVec3*)&t->asset->pos, t->asset->innerRadius,
                                        t->asset->outerRadius, SND_CAT_GAME, 0.0f);
                    return;
                }
            }
        }
        else
        {
            t->sndID = xSndPlay3D(t->asset->soundAssetID, 0.77f * ((F32)t->asset->volume / 100.0f),
                                  t->asset->freq * t->asset->freqm, (U32)t->asset->priority, converted_flags,
                                  (const xVec3*)&t->asset->pos, t->asset->innerRadius,
                                  t->asset->outerRadius, SND_CAT_GAME, 0.0f);
        }
    }
    else
    {
        t->sndID =
            xSndPlay(t->asset->soundAssetID, 0.77f * (t->asset->volume / 100.0f), t->asset->freq * t->asset->freqm,
                     (U32)t->asset->priority, converted_flags, 0x0, SND_CAT_GAME, 0.0f);

        if ((t->asset->flagsSFX & 0x400) && t->sndID != 0)
        {
            zEntPlayer_SNDNotifyPlaying(t->sndID);
        }
    }

    xEnt* ent;
}

static void xSFXStop(xSFX* t)
{
    xSndStop(t->sndID);
    t->sndID = 0;
}
