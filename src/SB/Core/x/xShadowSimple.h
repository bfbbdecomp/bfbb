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

// Size: 0x98
struct xShadowSimpleCache
{
    U16 flags;
    U8 alpha;
    U8 pad;

    U32 collPriority; // offset 0x4
    xVec3 pos; // offset 0x8
    xVec3 at; // offset 0x14

    xEnt* castOnEnt; // offset 0x20, size 0x4
    xShadowSimplePoly poly; // offset 0x24, size 0x30
    F32 envHeight; // offset 0x54
    F32 shadowHeight; // offset 0x58
    U32 raster; // offset 0x5C

    F32 dydx; // offset 0x60
    F32 dydz; // offset 0x64
    xVec3 corner[4]; // offsets 0x68, 0x74, 0x80, 0x8C
};

struct zSimpleShadowTableHeader
{
    // total size: 0x4
    U32 num;
};

struct shadowRayEntData
{
    xShadowSimpleCache* cache;
    const RwLine* line;
};

void xShadowSimple_Render();
void xShadowSimple_Add(xShadowSimpleCache* cache, xEnt* ent, F32 radius, F32 ecc);
void xShadowSimple_CacheInit(xShadowSimpleCache* cache, xEnt* ent, U8 alpha);
void xShadowSimple_Init();
void xShadowSimple_AddVerts(xShadowSimpleCache* cache);
static void xShadowSimple_SceneCollide(xShadowSimpleCache* cache, xVec3* pos, F32 depth);
static void xShadowSimple_CalcCorners(xShadowSimpleCache* cache, xEnt* ent, F32 radius, F32 ecc);

#endif
