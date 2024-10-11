#ifndef ZLIGHTEFFECT_H
#define ZLIGHTEFFECT_H

#include "iLight.h"
#include "xBase.h"
#include "zLight.h"

#include <types.h>

typedef void (*lightInitFunc)(_zLight*);

void zLightEffectSet(_zLight* zlight, S32 idx);
void zLightOn(_zLight* zl, S32 on);
static F32 leGetRandom();
void zLightEffectInitStrobe(_zLight* zlight);
void zLightEffectInitDim(_zLight* zlight);
void zLightEffectInitHalfDim(_zLight* zlight);
void zLightEffectInitRandomCol(_zLight* zlight);
void zLightEffectInitFlicker(_zLight* zlight);
static void EffectFlicker(_zLight* zlight, F32 seconds, F32 min, F32 rnd);
void zLightEffectFlicker(_zLight* zlight, F32 seconds);
void zLightEffectFlickerSlow(_zLight* zlight, F32 seconds);
void zLightEffectFlickerErratic(_zLight* zlight, F32 seconds);

void zLightEffectInitCauldron(_zLight* zlight);
static F32 leBlendToCol(F32 f1, F32 f2, F32 f3);
void zLightEffectCauldron(_zLight* zlight, F32 seconds);

#endif
