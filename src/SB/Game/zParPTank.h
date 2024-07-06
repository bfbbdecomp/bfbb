#ifndef ZPARPTANK_H
#define ZPARPTANK_H

#include <types.h>

struct xVec3;

struct RpAtomic;
struct zParPTank;
typedef void (*zParPTankUpdateCallback)(zParPTank*, float);

// total size: 0x14
struct zParPTank
{
    // 0x2 == Update when paused
    uint32 flags; // offset 0x0, size 0x4
    zParPTankUpdateCallback update; // offset 0x4, size 0x4
    RpAtomic* ptank; // offset 0x8, size 0x4
    uint32 num_particles; // offset 0xC, size 0x4
    uint32 max_particles; // offset 0x10, size 0x4
};

void zParPTankInit();
void zParPTankSceneEnter();
void zParPTankSceneExit();
void zParPTankSpawnBubbles(xVec3* pos, xVec3* vel, uint32 count, float scale);
void zParPTankSpawnSnow(xVec3* pos, xVec3* vel, uint32 count);
void zParPTankExit();
void zParPTankRender();
void zParPTankUpdate(float32 dt);

extern const uint32 gPTankDisable;

#endif
