#ifndef ZLIGHTEFFECT_H
#define ZLIGHTEFFECT_H

#include "../Core/p2/iLight.h"
#include "../Core/x/xBase.h"

#include <types.h>

// Size: 0x38
struct zLightAsset : xBaseAsset
{
    // 0x8
    uint8 lightType;
    uint8 lightEffect;
    uint8 lightPad[2];
    uint32 lightFlags;

    // 0x10
    float32 lightColor[4];
    xVec3 lightDir;

    // 0x20
    float32 lightConeAngle;
    xSphere lightSphere;
    uint32 attachID;
};

// Size: 0x64
struct _zLight : xBase
{
    // 0x10
    uint32 flags;
    zLightAsset* tasset;

    // 0x18
    iLight light;
    xBase* attached_to;
    int32 true_idx;
    float32* reg;

    // 0x60
    int32 effect_idx;
};

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