#ifndef ZMOVEPOINT_H
#define ZMOVEPOINT_H

#include "../Core/x/xMovePoint.h"

#include "zScene.h"

#include <types.h>

struct zMovePoint : xMovePoint
{
    uint32 NumNodes();
};

zMovePoint* zMovePoint_GetMemPool(int32 cnt);
void zMovePointInit(zMovePoint* m, xMovePointAsset* asset);
zMovePoint* zMovePoint_GetInst(int32 n);
void zMovePointSetup(zMovePoint* mvpt, zScene* scn);
zMovePoint* zMovePoint_From_xAssetID(uint32 aid);
void zMovePointSave(zMovePoint* ent, xSerial* s);
void zMovePointLoad(zMovePoint* ent, xSerial* s);
void zMovePointReset(zMovePoint* m);
int32 zMovePointEventCB(xBase* from, xBase* to, uint32 toEvent, const float32* toParam, xBase* b3);
float32 zMovePointGetNext(const zMovePoint* current, const zMovePoint* prev, zMovePoint** next,
                          xVec3* hdng);
xVec3* zMovePointGetPos(const zMovePoint* m);
float32 zMovePointGetDelay(const zMovePoint* m);
float32 xMovePointGetDelay(const xMovePoint* m);

#endif