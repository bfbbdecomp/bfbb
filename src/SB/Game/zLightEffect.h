#ifndef ZLIGHTEFFECT_H
#define ZLIGHTEFFECT_H

#include "iLight.h"
#include "xBase.h"
#include "zLight.h"

#include <types.h>

typedef void (*lightInitFunc)(_zLight*);

void zLightEffectSet(_zLight* zlight, int32 idx);
void zLightOn(_zLight* zl, int32 on);
float32 leGetRandom();
void zLightEffectInitStrobe(_zLight* zlight);
void zLightEffectInitDim(_zLight* zlight);
void zLightEffectInitHalfDim(_zLight* zlight);
void zLightEffectInitRandomCol(_zLight* zlight);
void zLightEffectInitFlicker(_zLight* zlight);
void EffectFlicker(_zLight* zlight, float32 seconds, float32 min, float32 rnd);
void zLightEffectFlicker(_zLight* zlight, float32 seconds);
void zLightEffectFlickerSlow(_zLight* zlight, float32 seconds);
void zLightEffectFlickerErratic(_zLight* zlight, float32 seconds);
void zLightEffectStrobeSlow();
void zLightEffectStrobe();
void zLightEffectStrobeFast();
void zLightEffectDimSlow();
void zLightEffectDim();
void zLightEffectDimFast();
void zLightEffectHalfDimSlow();
void zLightEffectHalfDim();
void zLightEffectHalfDimFast();
void zLightEffectRandomColSlow();
void zLightEffectRandomCol();
void zLightEffectRandomColFast();
void zLightEffectInitCauldron(_zLight* zlight);
float32 leBlendToCol(float32 f1, float32 f2, float32 f3);
void zLightEffectCauldron(_zLight* zlight, float32 seconds);

#endif
