#include "zLightEffect.h"

#include "xMath.h"

#include <types.h>
#include <stdlib.h>

static F32 leGetRandom()
{
    F32 ret = (U16)rand() / (F32)0xffff;
    return ret;
}

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
    *zlight->reg = 0.0f;
    zLightOn(zlight, true);
}

void EffectFlicker(_zLight* zlight, F32 seconds, F32 min, F32 rnd)
{
    iLight* l = &zlight->light;
    F32* reg = zlight->reg;

    *reg -= seconds;

    if (*reg <= 0.0f)
    {
        *reg = (rnd * leGetRandom());
        *reg += min;

        l->color.r = zlight->tasset->lightColor[0] - (leGetRandom() * 0.2f + 0.1f);
        l->color.g = zlight->tasset->lightColor[1] - (leGetRandom() * 0.2f + 0.1f);
        l->color.b = zlight->tasset->lightColor[2] - (leGetRandom() * 0.2f + 0.1f);

        // Clamp light color RGB between 0.0 and 1.0

        if (l->color.r > 1.0f)
        {
            l->color.r = 1.0f;
        }
        else if (l->color.r < 0.0f)
        {
            l->color.r = 0.0f;
        }

        if (l->color.g > 1.0f)
        {
            l->color.g = 1.0f;
        }
        else if (l->color.g < 0.0f)
        {
            l->color.g = 0.0f;
        }

        if (l->color.b > 1.0f)
        {
            l->color.b = 1.0f;
        }
        else if (l->color.b < 0.0f)
        {
            l->color.b = 0.0f;
        }

        iLightSetColor(l, &l->color);
    }
}

void zLightEffectFlicker(_zLight* zlight, F32 seconds)
{
    EffectFlicker(zlight, seconds, 0.05f, 0.2f);
}

void zLightEffectFlickerSlow(_zLight* zlight, F32 seconds)
{
    EffectFlicker(zlight, seconds, 0.2f, 0.3f);
}

void zLightEffectFlickerErratic(_zLight* zlight, F32 seconds)
{
    EffectFlicker(zlight, seconds, 0.0f, 0.1f);
}

void zLightEffectStrobeSlow(_zLight*, F32)
{
}

void zLightEffectStrobe(_zLight*, F32)
{
}

void zLightEffectStrobeFast(_zLight*, F32)
{
}

void zLightEffectDimSlow(_zLight*, F32)
{
}

void zLightEffectDim(_zLight*, F32)
{
}

void zLightEffectDimFast(_zLight*, F32)
{
}

void zLightEffectHalfDimSlow(_zLight*, F32)
{
}

void zLightEffectHalfDim(_zLight*, F32)
{
}

void zLightEffectHalfDimFast(_zLight*, F32)
{
}

void zLightEffectRandomColSlow(_zLight*, F32)
{
}

void zLightEffectRandomCol(_zLight*, F32)
{
}

void zLightEffectRandomColFast(_zLight*, F32)
{
}

void zLightEffectInitCauldron(_zLight* zlight)
{
    *zlight->reg = 0.0f;
    zLightOn(zlight, true);
}

F32 leBlendToCol(F32 f1, F32 f2, F32 f3)
{
    if (f1 > f2)
    {
        f1 -= f3;
        return (f1 < f2) ? f2 : f1;
    }
    else if (f1 < f2)
    {
        f1 += f3;
        return (f1 > f2) ? f2 : f1;
    }
    else
    {
        return f1;
    }
}

void zLightEffectCauldron(_zLight* zlight, F32 seconds)
{
    iLight* l = &zlight->light;

    F32* reg = zlight->reg;
    *reg -= seconds;

    if (*reg <= 0.0f)
    {
        reg[0] = 0.25f;
        reg[1] = (leGetRandom() * 0.5f);
        reg[2] = (leGetRandom() * 0.4f + 0.6f);
        reg[3] = (leGetRandom() * 0.5f);
    }

    F32 amount = (seconds * 3.0f);
    l->color.r = leBlendToCol(l->color.r, reg[1], amount);
    l->color.g = leBlendToCol(l->color.g, reg[2], amount);
    l->color.b = leBlendToCol(l->color.b, reg[3], amount);

    iLightSetColor(l,  &l->color);
}
