#include "zLight.h"
#include "zLightEffect.h"
#include "../rwsdk/rwplcore.h"

#include <types.h>

extern _zLight* sLight[32];
extern int32 sLightTotal;

// func_8009E02C
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightResetAll__FP4xEnv")

// func_8009E0C8
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightInit__FPvPv")

// func_8009E0E8
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightInit__FP5xBaseP11zLightAsset")

// func_8009E2A8
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightResolveLinks__Fv")

// func_8009E330
// #pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightDestroyAll__Fv")
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
// #pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightDestroy__FP7_zLight")
void zLightDestroy(_zLight* param_1)
{
    iLightDestroy(&param_1->light);
}

// func_8009E3C8
// #pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightReset__FP7_zLight")
// in zLight.h
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
// #pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightSave__FP7_zLightP7xSerial")
void zLightSave(_zLight* ent, xSerial* s)
{
    xBaseSave(ent, s);
}

// func_8009E44C
// #pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightLoad__FP7_zLightP7xSerial")
void zLightLoad(_zLight* ent, xSerial* s)
{
    xBaseLoad(ent, s);
}

// func_8009E46C
// #pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightEventCB__FP5xBaseP5xBaseUiPCfP5xBase")
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
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightRemoveLocalEnv__Fv")

// func_8009E7A0
#pragma GLOBAL_ASM("asm/Game/zLight.s", "zLightSetVolume__FP7zVolume")
