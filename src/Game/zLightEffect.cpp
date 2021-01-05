#include "zLightEffect.h"

#include <types.h>
#include <stdlib.h>

extern lightInitFunc sEffectInitFuncs[18];
extern float32 lbl_803CDB60; // 65535f
extern float32 lbl_803CDB68; // 176f
extern float32 lbl_803CDB70; // 0.0f
extern float32 lbl_803CDB74; // 0.1f
extern float32 lbl_803CDB78; // 0.2f
extern float32 lbl_803CDB80; // 0.05f
extern float32 lbl_803CDB84; // 0.3f

void zLightEffectSet(_zLight* zlight, int32 idx)
{
    if (zlight->reg)
    {
        zlight->effect_idx = idx;
        if (sEffectInitFuncs[zlight->effect_idx] != NULL)
        {
            sEffectInitFuncs[zlight->effect_idx](zlight);
        }
    }
}

void zLightOn(_zLight* zl, int32 on)
{
    if (on)
    {
        zl->flags |= 1;
    }
    else
    {
        zl->flags &= 0xfffffffe;
    }
}

#if 1

// func_8009E870
#pragma GLOBAL_ASM("asm/Game/zLightEffect.s", "leGetRandom__Fv")

#else

// WIP.
float32 leGetRandom()
{
    uint32 rnd = rand();
    return ((float)(rnd & 0xffff) - lbl_803CDB68) / lbl_803CDB60;
}

#endif

void zLightEffectInitStrobe(_zLight* zlight)
{
}

void zLightEffectInitDim(_zLight* zlight)
{
}

void zLightEffectInitHalfDim(_zLight* zlight)
{
}

void zLightEffectInitRandomCol(_zLight* zlight)
{
}

void zLightEffectInitFlicker(_zLight* zlight)
{
    *zlight->reg = lbl_803CDB70;
    zLightOn(zlight, true);
}

#if 1

// func_8009E8F4
#pragma GLOBAL_ASM("asm/Game/zLightEffect.s", "EffectFlicker__FP7_zLightfff")

#else

// WIP.
void EffectFlicker(_zLight* zlight, float32 seconds, float32 min, float32 rnd)
{
}

#endif

void zLightEffectFlicker(_zLight* zlight, float32 seconds)
{
    EffectFlicker(zlight, seconds, lbl_803CDB80, lbl_803CDB78);
}

void zLightEffectFlickerSlow(_zLight* zlight, float32 seconds)
{
    EffectFlicker(zlight, seconds, lbl_803CDB78, lbl_803CDB84);
}

void zLightEffectFlickerErratic(_zLight* zlight, float32 seconds)
{
    EffectFlicker(zlight, seconds, lbl_803CDB70, lbl_803CDB74);
}

void zLightEffectStrobeSlow()
{
}

void zLightEffectStrobe()
{
}

void zLightEffectStrobeFast()
{
}

void zLightEffectDimSlow()
{
}

void zLightEffectDim()
{
}

void zLightEffectDimFast()
{
}

void zLightEffectHalfDimSlow()
{
}

void zLightEffectHalfDim()
{
}

void zLightEffectHalfDimFast()
{
}

void zLightEffectRandomColSlow()
{
}

void zLightEffectRandomCol()
{
}

void zLightEffectRandomColFast()
{
}

void zLightEffectInitCauldron(_zLight* zlight)
{
    *zlight->reg = lbl_803CDB70;
    zLightOn(zlight, true);
}

#if 1

// func_8009EB50
#pragma GLOBAL_ASM("asm/Game/zLightEffect.s", "leBlendToCol__Ffff")

#else

// WIP.
float32 leBlendToCol(float32 f1, float32 f2, float32 f3)
{
}

#endif

#if 1

// func_8009EB84
#pragma GLOBAL_ASM("asm/Game/zLightEffect.s", "zLightEffectCauldron__FP7_zLightf")

#else

// WIP.
void zLightEffectCauldron(_zLight* zlight, float32 seconds)
{
}

#endif