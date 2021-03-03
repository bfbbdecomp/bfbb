#include "zLight.h"
#include "zLightEffect.h"
#include "zGlobals.h"
#include "../rwsdk/rwplcore.h"
#include "../Core/x/xString.h"

#include <types.h>

extern _zLight* sLight[32];
extern int32 sLightTotal;
extern zVolume* sPartitionVolume;
extern char zLight_strings[];
extern int32 gNumTemporaryLights;
extern _zLight* gTemporaryLights[32];

// func_8009E02C
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightResetAll__FP4xEnv")

// func_8009E0C8
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightInit__FPvPv")

// func_8009E0E8
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightInit__FP5xBaseP11zLightAsset")

// func_8009E2A8
void zLightResolveLinks()
{
    int32 i;
    _zLight* zl;

    for (i = 0; i < sLightTotal; i++)
    {
        zl = sLight[i];
        if (zl->tasset->attachID)
        {
            zl->attached_to = zSceneFindObject(zl->tasset->attachID);
        }
        else
        {
            zl->attached_to = 0;
        }
    }
}

// func_8009E330
void zLightDestroyAll()
{
    int32 total = sLightTotal;

    for (int i = 0; i < total; i++, sLightTotal--)
    {
        zLightDestroy(sLight[i]);
    }
    sLightTotal = 0;
}

// func_8009E3A4
void zLightDestroy(_zLight* param_1)
{
    iLightDestroy(&param_1->light);
}

// func_8009E3C8
void zLightReset(_zLight* param_1)
{
    xBaseReset(param_1, param_1->tasset);
    param_1->flags = 0;
    if (param_1->tasset->lightFlags & 0x20)
    {
        param_1->flags = param_1->flags | 1;
    }
    zLightEffectSet(param_1, param_1->tasset->lightEffect);
}

// func_8009E42C
void zLightSave(_zLight* ent, xSerial* s)
{
    xBaseSave(ent, s);
}

// func_8009E44C
void zLightLoad(_zLight* ent, xSerial* s)
{
    xBaseLoad(ent, s);
}

// func_8009E46C
int32 zLightEventCB(xBase* param_1, xBase* to, uint32 toEvent, const float* param_4, xBase* param_5)
{
    _zLight* t = (_zLight*)to;
    switch (toEvent)
    {
    case 38:
    {
        t->flags |= 1;
        break;
    }
    case 39:
    {
        t->flags &= 0xfffffffe;
        break;
    }
    case 10:
    {
        zLightReset(t);
        break;
    }
    default:
    {
        break;
    }
    }
    return 1;
}

// func_8009E4D8
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightUpdate__FP5xBaseP6xScenef")

// func_8009E5B8
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightAddLocalEnv__Fv")

// func_8009E6AC
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightAddLocal__FP4xEnt")

// func_8009E75C
void zLightRemoveLocalEnv()
{
    int i;
    const RwLLLink* link;

    for (i = 0; i < gNumTemporaryLights; i++)
    {
        link = gLightWorld->directionalLightList.link.prev;
        link->prev->next = link->next;
        link->next->prev = link->prev;
    }
    gNumTemporaryLights = 0;
}

// func_8009E7A0
void zLightSetVolume(zVolume* vol)
{
    if (vol == (zVolume*)0)
    {
        sPartitionVolume = (zVolume*)0;
    }
    else
    {
        uint32 lp_id = xStrHash(zLight_strings + 9);
        if (vol->id == lp_id)
        {
            sPartitionVolume = vol;
        }
    }
}
