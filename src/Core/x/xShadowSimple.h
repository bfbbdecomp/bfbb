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
    uint16 flags;
    uint8 alpha;
    uint8 pad;

    // Offset: 0x4
    uint32 collPriority;
    xVec3 pos;
    xVec3 at;

    // Offset: 0x20
    xEnt* castOnEnt;
    xShadowSimplePoly poly;
    float32 envHeight;
    float32 shadowHeight;
    uint32 raster;

    // Offset: 0x40
    float32 dydx;
    float32 dydz;
    xVec3 corner[4];
};

void xShadowSimple_Render();
void xShadowSimple_Add(xShadowSimpleCache* cache, xEnt* ent, float32 radius, float32 ecc);
void xShadowSimple_CacheInit(xShadowSimpleCache* cache, xEnt* ent, uint8 alpha);
void xShadowSimple_Init();
void xShadowSimple_AddVerts(xShadowSimpleCache* cache);
void xShadowSimple_CalcCorners(xShadowSimpleCache* cache, xEnt* ent, float32 radius, float32 ecc);
void xShadowSimple_SceneCollide(xShadowSimpleCache* cache, xVec3* pos, float32 depth);

#endif