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
    F32 radius;
    U32 entCount;
    U32 polyCount;
    F32 polyRayDepth[5];
    U16 castOnEnt;
    U16 castOnPoly;
    xEnt* ent[16];
    xShadowPoly poly[256];
};

void xShadowInit();
void xShadowRender(xVec3* center, F32 radius, F32 max_dist);
void xShadowRenderWorld(xVec3* center, F32 radius, F32 max_dist);

void xShadowCameraCreate();
void xShadow_ListAdd(xEnt* ent);
void xShadowSetWorld(RpWorld* world);
void xShadowSetLight(xVec3* param1, xVec3* param2, F32 param3);
void xShadowManager_Init(S32 numEnts);
void xShadowManager_Reset();
void xShadowManager_Render();

#endif
