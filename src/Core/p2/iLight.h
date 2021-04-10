#ifndef ILIGHT_H
#define ILIGHT_H

#include "../x/xFColor.h"
#include "../x/xMath3.h"

#include <rwcore.h>
#include <rpworld.h>

#define ILIGHT_TYPE_NONE 0
#define ILIGHT_TYPE_POINT 1
#define ILIGHT_TYPE_SPOT 2
#define ILIGHT_TYPE_SPOTSOFT 3

#define ILIGHT_ENV_NONE 0
#define ILIGHT_ENV_ATOMIC 1
#define ILIGHT_ENV_WORLD 2
#define ILIGHT_ENV_ATOMICWORLD 3

// Size: 0x3C
struct iLight
{
    // 0x0
    uint32 type;
    RpLight* hw;

    //0x8
    xSphere sph;
    float32 radius_sq;

    //0x1C
    _xFColor color;

    //0x2C
    xVec3 dir;
    float32 coneangle;
};

extern RpWorld* gLightWorld;

void iLightInit(RpWorld* world);
iLight* iLightCreate(iLight* light, uint32 type);
void iLightModify(iLight* light, uint32 flags);
void iLightSetColor(iLight* light, _xFColor* col);
void iLightSetPos(iLight* light, xVec3* pos);
void iLightDestroy(iLight* light);
void iLightEnv(iLight* light, int32 env);

#endif