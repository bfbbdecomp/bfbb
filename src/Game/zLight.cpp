#include "zLight.h"
#include "zLightEffect.h"
#include "zGlobals.h"
#include "../rwsdk/rwplcore.h"
#include "../Core/x/xShadow.h"
#include "../Core/x/xPartition.h"
#include "../Core/x/xString.h"
#include "../Core/x/xPartition.h"

#include <types.h>
#include <string.h>

extern _zLight* sLight[32];
extern int32 sLightTotal;
extern _tagPartition sLightPart;
extern zVolume* sPartitionVolume;
extern char zLight_strings[];
extern int32 gNumTemporaryLights;
extern _zLight* gTemporaryLights[32];
extern float32 zLight_float;
extern xVec3 sDefaultShadowVec;
extern void (*sEffectFuncs[18])(_zLight*, float32);

// func_8009E02C
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightResetAll__FP4xEnv")
#else
// Functionally matching but in wrong order
void zLightResetAll(xEnv* env)
{
    memset(sLight, 0, sizeof(sLight));
    sLightTotal = 0;

    if (sPartitionVolume)
    {
        xPartitionVolume(&sLightPart, sPartitionVolume, 10, 1, 10);
    }
    else
    {
        xPartitionWorld(&sLightPart, env, 10, 1, 10);
    }
    xPartitionDump(&sLightPart, zLight_strings);
}
#endif

// func_8009E0C8
void zLightInit(void* b, void* tasset)
{
    zLightInit((xBase*)b, (zLightAsset*)tasset);
}

// func_8009E0E8
void zLightInit(xBase* b, zLightAsset* tasset)
{
    _zLight* t = (_zLight*)b;

    xBaseInit(b, tasset);
    t->eventFunc = zLightEventCB;
    t->tasset = tasset;
    if (b->linkCount != 0)
    {
        b->link = (xLinkAsset*)(t->tasset + 1);
    }
    else
    {
        b->link = 0;
    }
    uint32 itype = 1;
    switch (tasset->lightType)
    {
    case 0:
        itype = 1;
        break;
    case 1:
        itype = 2;
        break;
    case 2:
        itype = 1;
        break;
    case 3:
        itype = 1;
        break;
    default:
        break;
    }
    b = (_zLight*)iLightCreate(&t->light, itype);
    if (b != NULL)
    {
        sLight[sLightTotal++] = t;
        t->light.sph.center.x = tasset->lightSphere.center.x;
        t->light.sph.center.y = tasset->lightSphere.center.y;
        t->light.sph.center.z = tasset->lightSphere.center.z;
        t->light.sph.r = tasset->lightSphere.r;
        t->light.color.r = tasset->lightColor[0];
        t->light.color.g = tasset->lightColor[1];
        t->light.color.b = tasset->lightColor[2];
        t->light.color.a = tasset->lightColor[3];
        t->light.coneangle = tasset->lightConeAngle;
        t->light.radius_sq = t->light.sph.r * t->light.sph.r;
        iLightModify(&t->light, 31);
        t->flags = 0;
        if ((t->tasset->lightFlags & 32) != NULL)
        {
            t->flags = t->flags | 1;
        }
        if (t->tasset->lightEffect != NULL)
        {
            t->reg = (float32*)xMemAlloc(gActiveHeap, 32, 0);
            zLightEffectSet(t, t->tasset->lightEffect);
        }
        else
        {
            t->reg = 0;
        }
        t->true_idx = xPartitionInsert(&sLightPart, t, &(t->light).sph.center);
    }
}

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
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightUpdate__FP5xBaseP6xScenef")
#else
// Float issue
void zLightUpdate(xBase* to, xScene* param_2, float32 dt)
{
    _zLight* t = (_zLight*)to;

    if (t->flags & 1 && t->attached_to)
    {
        xVec3 pos = *xEntGetPos((xEnt*)t->attached_to);
        pos.y += zLight_float;
        iLightSetPos(&t->light, &pos);
        t->light.sph.center = pos;
        t->true_idx = xPartitionUpdate(&sLightPart, t, t->true_idx, &pos);
    }
    if (sEffectFuncs[t->effect_idx])
    {
        sEffectFuncs[t->effect_idx](t, dt);
    }
}
#endif

// func_8009E5B8
#if 1
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightAddLocalEnv__Fv")
#else
// Something is wrong with gNumTemporaryLights
void zLightAddLocalEnv()
{
    for (int i = 0; i < sLightTotal; i++)
    {
        _zLight* zlight = sLight[i];
        if ((zlight->flags & 1 != 0) && (zlight->tasset->lightFlags & 8))
        {
            iLight* light = &zlight->light;
            iLightEnv(light, 1);
            light->hw->inWorld.prev = gLightWorld->directionalLightList.link.prev;
            light->hw->inWorld.next = gLightWorld->directionalLightList.link.next;
            gLightWorld->directionalLightList.link.prev->next = &light->hw->inWorld;
            gLightWorld->directionalLightList.link.prev = &light->hw->inWorld;

            gTemporaryLights[gNumTemporaryLights] = zlight;
            gNumTemporaryLights++;
        }
    }
}
#endif

// func_8009E6AC
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightAddLocal__FP4xEnt")
#else
// Float issue
void zLightAddLocal(xEnt* ent)
{
    xVec3 default_light_pos = *xEntGetPos(ent);
    default_light_pos.y += zLight_float;
    if (!ent->entShadow)
    {
        ent->entShadow = (xEntShadow*)xMemAlloc(gActiveHeap, 40, 0);
        xEntInitShadow(*ent, *ent->entShadow);
        ent->entShadow->pos = default_light_pos;
        ent->entShadow->vec = sDefaultShadowVec;
    }
    xShadowSetLight(&ent->entShadow->pos, &ent->entShadow->vec, zLight_float);
}
#endif

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
    if (!vol)
    {
        sPartitionVolume = 0;
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
