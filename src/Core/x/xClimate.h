#ifndef XCLIMATE_H
#define XCLIMATE_H

#include <types.h>
#include "xVec3.h"
#include "xEnv.h"
#include "../../Game/zParEmitter.h"

struct _tagRain
{
	int32 rain;
	float32 strength;
	zParEmitter* rain_emitter;
	zParEmitter* snow_emitter;
};

struct _tagWind
{
	float32 strength;
	float32 angle;
	xVec3 dir;
};

struct _tagClimate
{
	_tagRain rain;
	_tagWind wind;
};

void xClimateUpdate(_tagClimate* climate, float32 seconds);
void UpdateRain(_tagClimate* climate, float32 seconds);
void UpdateWind(_tagClimate* climate, float32 seconds);
void xClimateSetRain(float32 stre);
void xClimateSetSnow(float32 stre);
void xClimateInitAsset(_tagClimate* climate, xEnvAsset* easset);
void xClimateInit(_tagClimate* climate);

#endif