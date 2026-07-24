#ifndef XSHADOWSIMPLE_H
#define XSHADOWSIMPLE_H

#include "types.h"
#include "xEnt.h"

struct xShadowSimpleQueue
{
    // total size: 0x14
    xShadowSimpleCache* cache;
    u32 priority;
    xEnt* ent;
    F32 radius;
    F32 ecc;

    xShadowSimpleQueue& operator=(const xShadowSimpleQueue& other)
    {
        cache = other.cache;
        priority = other.priority;
        ent = other.ent;
        radius = other.radius;
        ecc = other.ecc;
        return *this;
    }
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

struct zSimpleShadowTableEntry {
    U32 modelID;
    U32 assetID;
    U32 flags;
};

struct zSimpleShadowTableHeader {
    U32 num;
};

void xShadowSimple_Render();
void xShadowSimple_Add(xShadowSimpleCache* cache, xEnt* ent, F32 radius, F32 ecc);
void xShadowSimple_CacheInit(xShadowSimpleCache* cache, xEnt* ent, U8 alpha);
void xShadowSimple_Init();

#endif
