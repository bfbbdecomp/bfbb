#ifndef XSHADOWSIMPLE_H
#define XSHADOWSIMPLE_H

#include "xEnt.h"

struct xShadowSimplePoly
{
    xVec3 vert[3];
    xVec3 norm;
};

// Size: 0x66
struct xShadowSimpleCache
{
    U16 flags;
    U8 alpha;
    U8 pad;

    // Offset: 0x4
    U32 collPriority;
    xVec3 pos;
    xVec3 at;

    // Offset: 0x20
    xEnt* castOnEnt;
    xShadowSimplePoly poly;
    F32 envHeight;
    F32 shadowHeight;
    U32 raster;

    // Offset: 0x40
    F32 dydx;
    F32 dydz;
    xVec3 corner[4];
};

void xShadowSimple_Render();
void xShadowSimple_Add(xShadowSimpleCache* cache, xEnt* ent, F32 radius, F32 ecc);
void xShadowSimple_CacheInit(xShadowSimpleCache* cache, xEnt* ent, U8 alpha);
void xShadowSimple_Init();
void xShadowSimple_AddVerts(xShadowSimpleCache* cache);
void xShadowSimple_CalcCorners(xShadowSimpleCache* cache, xEnt* ent, F32 radius, F32 ecc);
void xShadowSimple_SceneCollide(xShadowSimpleCache* cache, xVec3* pos, F32 depth);

#endif
