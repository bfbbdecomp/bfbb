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
S32 SetupShadow();
void xShadowSetWorld(RpWorld* world);
void xShadowSetLight(xVec3* target_pos, xVec3* in_vec, F32 value);
U32 xShadowCameraCreate();
void xShadowCameraUpdate(void* model, void(*renderCB)(void*), xVec3* center, F32 radius, S32 shadowMode);
void xShadowRenderWorld(xVec3* center, F32 radius, F32 max_dist);
void modelRenderCB(void* model);
U32 xShadowReceiveShadowSetup(xEnt* ent);

void ShadowCameraUpdate(RwCamera* camera, void* model, void(*renderCB)(void*), xVec3* center, F32 radius, S32 shadowMode);
RwCamera* ShadowCameraSetSpherePersp(RwCamera* camera, RwV3d* center, F32 radius);
RwCamera* ShadowCameraCreatePersp(S32 value); // TODO: better param name
RwRaster* ShadowRasterCreate(S32 value); // TODO: better param name
void xShadow_ListAdd(xEnt* ent);
void xShadowManager_Init(S32 numEnts);
void xShadowManager_Reset();
void xShadowManager_Render();

#endif
