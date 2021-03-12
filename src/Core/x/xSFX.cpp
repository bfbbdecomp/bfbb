#include "xSFX.h"

#include "../src/Core/x/xSnd.h"
#include "../src/Core/x/xEvent.h"

#include <string.h>
#include <types.h>

extern xSFX* s_managedEnvSFX[1];

// func_80043EB8
void xSFXEnvironmentalStreamSceneExit(void)
{
    memset(&s_managedEnvSFX, 0, 4);
}

// func_80043EE4
#pragma GLOBAL_ASM("asm/Core/x/xSFX.s", "xSFXUpdateEnvironmentalStreamSounds__FP4xSFXUi")

// func_800440E4
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Core/x/xSFX.s", "xSFXWillSendDone__FP4xSFX")
#else
int32 xSFXWillSendDone(xSFX* param_1)
{
    if (param_1->linkCount != 0)
    {
        for (int i = 0; i < param_1->linkCount; i++)
        {
            if ((&param_1->link[i])->srcEvent == 0xbf)
            {
                return 1;
            }
        }
    }

    return 0;
}
#endif

// func_80044124
void xSFXInit(void* t, void* asset)

{
    xSFXInit((xSFX*)t, (xSFXAsset*)asset);
}

// func_80044144
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Core/x/xSFX.s", "xSFXInit__FP4xSFXP9xSFXAsset")
#else
void xSFXInit(xSFX* t, xSFXAsset* asset)
{
    xBaseInit(t, asset);

    // int32 xSFXEventCB(xBase* to, xBase* from, uint32 toEvent, const float32* toParam, xBase*)
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
#endif

// func_800441F4
void xSFXSave(xSFX* ent, xSerial* s)
{
    xBaseSave(ent, s);
}

// func_80044214
void xSFXLoad(xSFX* ent, xSerial* s)
{
    xBaseLoad(ent, s);
}

// func_80044234
void xSFXReset(xSFX* param_1)
{
    xBaseReset(param_1, param_1->asset);
}

// func_80044258
#if 1
#pragma GLOBAL_ASM("asm/Core/x/xSFX.s", "xSFXConvertFlags__FUi")
#else
uint32 xSFXConvertFlags(uint32 param_1)
{
    return param_1 & 4 ? 0 : 0x800;
}
#endif

// func_8004426C
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

// func_800442E4
#pragma GLOBAL_ASM("asm/Core/x/xSFX.s", "xSFXEventCB__FP5xBaseP5xBaseUiPCfP5xBase")

// func_80044424
#pragma GLOBAL_ASM("asm/Core/x/xSFX.s", "xSFXPlay__FP4xSFX")

// func_80044740
void xSFXStop(xSFX* param_1)
{
    xSndStop(param_1->sndID);
    param_1->sndID = 0;
}
