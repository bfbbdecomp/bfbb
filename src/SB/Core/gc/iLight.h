#ifndef ILIGHT_H
#define ILIGHT_H

#include "xFColor.h"
#include "xMath3.h"

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
    U32 type;
    RpLight* hw;

    //0x8
    xSphere sph;
    F32 radius_sq;

    //0x1C
    _xFColor color;

    //0x2C
    xVec3 dir;
    F32 coneangle;
};

extern RpWorld* gLightWorld;

void iLightInit(RpWorld* world);
iLight* iLightCreate(iLight* light, U32 type);
void iLightModify(iLight* light, U32 flags);
void iLightSetColor(iLight* light, _xFColor* col);
void iLightSetPos(iLight* light, xVec3* pos);
void iLightDestroy(iLight* light);
void iLightEnv(iLight* light, S32 env);

#endif
