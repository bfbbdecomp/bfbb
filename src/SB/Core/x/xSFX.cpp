#include "xSFX.h"

#include "xSnd.h"
#include "xEvent.h"

#include <string.h>
#include <types.h>

extern xSFX* s_managedEnvSFX[1];

void xSFXEnvironmentalStreamSceneExit(void)
{
    memset(&s_managedEnvSFX, 0, 4);
}

S32 xSFXWillSendDone(xSFX* param_1)
{
    S32 iLink = param_1->linkCount;

    if ((U32)iLink != 0)
    {
        xLinkAsset* pLink = param_1->link;

        for (; iLink > 0; iLink--)
        {
            if (pLink->srcEvent == 0xbf)
            {
                return 1;
            }
            pLink++;
        }
    }

    return 0;
}

void xSFXInit(void* t, void* asset)

{
    xSFXInit((xSFX*)t, (xSFXAsset*)asset);
}

void xSFXInit(xSFX* t, xSFXAsset* asset)
{
    xBaseInit(t, asset);

    // S32 xSFXEventCB(xBase* to, xBase* from, U32 toEvent, const F32* toParam, xBase*)
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
    t->asset->flagsSFX = t->asset->flagsSFX & 0xefff;
    t->cachedOuterDistSquared = (t->asset->outerRadius * t->asset->outerRadius);
}

void xSFXSave(xSFX* ent, xSerial* s)
{
    xBaseSave(ent, s);
}

void xSFXLoad(xSFX* ent, xSerial* s)
{
    xBaseLoad(ent, s);
}

void xSFXReset(xSFX* param_1)
{
    xBaseReset(param_1, param_1->asset);
}

U32 xSFXConvertFlags(U32 param_1)
{
    return param_1 & 4 ? 0 : 0x800;
}

void xSFXUpdate(xSFX* param_1)
{
    if ((param_1->asset->flagsSFX & 0x800) && (param_1->sndID) &&
        (!xSndIDIsPlaying(param_1->sndID)))
    {
        param_1->sndID = 0;
        param_1->asset->flagsSFX = param_1->asset->flagsSFX & 0xefff;
        zEntEvent(param_1, param_1, 0xbf);
    }
}

void xSFXStop(xSFX* param_1)
{
    xSndStop(param_1->sndID);
    param_1->sndID = 0;
}
