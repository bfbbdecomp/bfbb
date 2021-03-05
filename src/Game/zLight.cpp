#include "zLight.h"
#include "zLightEffect.h"
#include "zGlobals.h"
#include "../rwsdk/rwplcore.h"
#include "../Core/x/xString.h"
#include "../Core/x/xShadow.h"
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

// func_8009E02C
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightResetAll__FP4xEnv")
// void zLightResetAll(xEnv* env)
// {
//   memset(sLight, 0, 0x80);
//   sLightTotal = 0;
//   if (&sPartitionVolume) {
//     xPartitionVolume(&sLightPart, sPartitionVolume, 10, 1, 10);
//   }
//   else {
//     xPartitionWorld(&sLightPart, env, 10, 1, 10);
//   }
//   xPartitionDump(&sLightPart, zLight_strings);
// }

// func_8009E0C8
// #pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightInit__FPvPv")
void zLightInit(void* b, void* tasset)

{
    zLightInit((xBase*)b, (zLightAsset*)tasset);
}

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
// void zLightUpdate(xBase* to, xScene* param_2, float32 dt)
// {
//     _zLight* t;
//     xVec3 pos;
// 
//     // uVar2 = CONCAT44(in_ps1_0, to);
//     // __psq_st0(auStack8, (int)((ulonglong)in_f31 >> 0x20), in_GQR0);
//     // __psq_st1(auStack8, (int)in_f31, in_GQR0);
//     if (t->flags & 1 && t->attached_to)
//     {
//         pos = *xEntGetPos((xEnt*)t->attached_to);
//         //float32 x = pos.x;
//         //float32 y = pos.z;
//         pos.y += zLight_float;
//         iLightSetPos(&t->light, &pos);
//         // __as__5xVec3FRC5xVec3((int)dt + 0x20, pos);
//         t->true_idx = xPartitionUpdate(&sLightPart, t, t->true_idx, &pos);
//     }
//     // if (*(code**)(sEffectFuncs + t->effect_idx * 4)
//     // {
//     //     (**(code**)(sEffectFuncs + t->effect_idx * 4))(uVar2, dt);
//     // }
//     // __psq_l0(auStack8, in_GQR0);
//     // __psq_l1(auStack8, in_GQR0);
// }

// func_8009E5B8
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightAddLocalEnv__Fv")
// void zLightAddLocalEnv()
// {
//   int32 i = 0;
// 	_zLight* zlight = sLight[0];
// 	iLight* light;

//   for (i = 0; i < sLightTotal; i++) {
//     zlight = sLight[i];
//     if ((zlight->flags & 1 != 0) && (zlight->tasset->lightFlags & 8)) {
//       light = &zlight->light;
//       iLightEnv(light, 1);
//       light->hw->inWorld.prev = gLightWorld->directionalLightList.link.prev;
//       light->hw->inWorld.next = gLightWorld->directionalLightList.link.next;
//       gLightWorld->directionalLightList.link.prev->next = &light->hw->inWorld;
//       gLightWorld->directionalLightList.link.prev = &light->hw->inWorld;

//       gTemporaryLights[gNumTemporaryLights] = zlight;
//       gNumTemporaryLights++;
//     }
//   }
// }

// func_8009E6AC
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightAddLocal__FP4xEnt")
// void zLightAddLocal(xEnt* ent)
// {
//   xVec3 default_light_pos = *xEntGetPos(ent);
//   default_light_pos.y += zLight_float;
//   if (!ent->entShadow) {
//     ent->entShadow = (xEntShadow*)xMemAlloc(gActiveHeap, 40, 0);
//     xEntInitShadow(*ent, *ent->entShadow);
//     ent->entShadow->pos = default_light_pos;
//     ent->entShadow->vec = sDefaultShadowVec;
//   }
//   xShadowSetLight(&ent->entShadow->pos, &ent->entShadow->vec, zLight_float);
// }

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
    if (vol == 0)
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
