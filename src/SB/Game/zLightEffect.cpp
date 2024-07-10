#include "zLightEffect.h"

#include <types.h>
#include <stdlib.h>

extern lightInitFunc sEffectInitFuncs[18];
extern F32 lbl_803CDB60; // 65535f
extern F32 lbl_803CDB68; // 176f
extern F32 lbl_803CDB70; // 0.0f
extern F32 lbl_803CDB74; // 0.1f
extern F32 lbl_803CDB78; // 0.2f
extern F32 lbl_803CDB80; // 0.05f
extern F32 lbl_803CDB84; // 0.3f

void zLightEffectSet(_zLight* zlight, S32 idx)
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

void zLightOn(_zLight* zl, S32 on)
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

#if 0
// WIP.
F32 leGetRandom()
{
    U32 rnd = rand();
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

#if 0
// WIP.
void EffectFlicker(_zLight* zlight, F32 seconds, F32 min, F32 rnd)
{
}

#endif

void zLightEffectFlicker(_zLight* zlight, F32 seconds)
{
    EffectFlicker(zlight, seconds, lbl_803CDB80, lbl_803CDB78);
}

void zLightEffectFlickerSlow(_zLight* zlight, F32 seconds)
{
    EffectFlicker(zlight, seconds, lbl_803CDB78, lbl_803CDB84);
}

void zLightEffectFlickerErratic(_zLight* zlight, F32 seconds)
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

void zLightEffectRandomColFast(_zLight*, F32)
{
}

void zLightEffectRandomCol(_zLight*, F32)
{
}

void zLightEffectRandomColSlow(_zLight*, F32)
{
}

void zLightEffectHalfDimFast(_zLight*, F32)
{
}

void zLightEffectHalfDim(_zLight*, F32)
{
}

void zLightEffectHalfDimSlow(_zLight*, F32)
{
}

void zLightEffectDimFast(_zLight*, F32)
{
}

void zLightEffectDim(_zLight*, F32)
{
}

void zLightEffectDimSlow(_zLight*, F32)
{
}

void zLightEffectStrobeFast(_zLight*, F32)
{
}

void zLightEffectStrobe(_zLight*, F32)
{
}

void zLightEffectStrobeSlow(_zLight*, F32)
{
}

void zLightEffectInitCauldron(_zLight* zlight)
{
    *zlight->reg = lbl_803CDB70;
    zLightOn(zlight, true);
}

#if 0
// Need to figure out proper conditional checks.
F32 leBlendToCol(F32 f1, F32 f2, F32 f3)
{
    if (f1 > f2)
    {
        f1 -= f3;
        return f1 >= f2 ? f1 : f2;
    }
    if (f1 >= f2)
    {
        return f1;
    }
    f1 += f3;
    return f1 <= f2 ? f1 : f2;
}

#endif

#if 0
// WIP.
void zLightEffectCauldron(_zLight* zlight, F32 seconds)
{
}

#endif
