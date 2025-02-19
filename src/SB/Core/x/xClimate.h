#ifndef XCLIMATE_H
#define XCLIMATE_H

#include <types.h>
#include "xVec3.h"

struct xEnvAsset;
struct zParEmitter;

extern const float snow_life;

struct _tagRain
{
    S32 rain;
    F32 strength;
    zParEmitter* rain_emitter;
    zParEmitter* snow_emitter;
};

struct _tagWind
{
    F32 strength;
    F32 angle;
    xVec3 dir;
};

struct _tagClimate
{
    _tagRain rain;
    _tagWind wind;
};

void xClimateUpdate(_tagClimate* climate, F32 seconds);
void UpdateRain(_tagClimate* climate, F32 seconds);
void UpdateWind(_tagClimate* climate, F32 seconds);
void xClimateSetRain(F32 stre);
void xClimateSetSnow(F32 stre);
void xClimateInitAsset(_tagClimate* climate, xEnvAsset* easset);
void xClimateInit(_tagClimate* climate);

void xMat3x3Identity(xMat3x3* matrix);
void xMat3x3Copy(xMat3x3* m1, const xMat3x3* m2);

#endif
