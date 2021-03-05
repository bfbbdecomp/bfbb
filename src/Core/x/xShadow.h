#ifndef XSHADOW_H
#define XSHADOW_H

#include "xEnt.h"

#include <rwcore.h>
#include <rpworld.h>

struct xShadowPoly
{
    xVec3 vert[3];
    xVec3 norm;
};

struct xShadowCache
{
    xVec3 pos;
    float32 radius;
    uint32 entCount;
    uint32 polyCount;
    float32 polyRayDepth[5];
    uint16 castOnEnt;
    uint16 castOnPoly;
    xEnt* ent[16];
    xShadowPoly poly[256];
};

void xShadow_ListAdd(xEnt* ent);
void xShadowSetWorld(RpWorld* world);
void xShadowSetLight(xVec3* param1, xVec3* param2, float32 param3);
void xShadowManager_Init(int32 numEnts);
void xShadowManager_Reset();
void xShadowManager_Render();

#endif