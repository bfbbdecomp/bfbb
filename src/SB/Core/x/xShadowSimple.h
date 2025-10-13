#ifndef XSHADOWSIMPLE_H
#define XSHADOWSIMPLE_H

#include "types.h"
#include "xEnt.h"

struct xShadowSimpleQueue
{
    // total size: 0x14
    xShadowSimpleCache* cache; // offset 0x0, size 0x4
    u32 priority; // offset 0x4, size 0x4
    xEnt* ent; // offset 0x8, size 0x4
    F32 radius; // offset 0xC, size 0x4
    F32 ecc; // offset 0x10, size 0x4
};

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

struct zSimpleShadowTableHeader {
    // total size: 0x4
    U32 num;
};

void xShadowSimple_Render();
void xShadowSimple_Add(xShadowSimpleCache* cache, xEnt* ent, F32 radius, F32 ecc);
void xShadowSimple_CacheInit(xShadowSimpleCache* cache, xEnt* ent, U8 alpha);
void xShadowSimple_Init();
void xShadowSimple_AddVerts(xShadowSimpleCache* cache);
void xShadowSimple_CalcCorners(xShadowSimpleCache* cache, xEnt* ent, F32 radius, F32 ecc);
void xShadowSimple_SceneCollide(xShadowSimpleCache* cache, xVec3* pos, F32 depth);

#endif
