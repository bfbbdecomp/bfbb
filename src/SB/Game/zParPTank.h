#ifndef ZPARPTANK_H
#define ZPARPTANK_H

#include <types.h>

struct xVec3;

void zParPTankInit();
void zParPTankSceneEnter();
void zParPTankSceneExit();
void zParPTankSpawnSnow(xVec3* pos, xVec3* vel, uint32 count);
void zParPTankExit();
void zParPTankRender();
void zParPTankUpdate(float32 dt);

extern uint32 gPTankDisable;

#endif
