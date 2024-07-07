#ifndef ZMOVEPOINT_H
#define ZMOVEPOINT_H

#include "xMovePoint.h"

#include "zScene.h"

#include <types.h>

struct zMovePoint : xMovePoint
{
    U32 NumNodes();
    U8 IsOn();
};

zMovePoint* zMovePoint_GetMemPool(S32 cnt);
void zMovePointInit(zMovePoint* m, xMovePointAsset* asset);
zMovePoint* zMovePoint_GetInst(S32 n);
void zMovePointSetup(zMovePoint* mvpt, zScene* scn);
zMovePoint* zMovePoint_From_xAssetID(U32 aid);
void zMovePointSave(zMovePoint* ent, xSerial* s);
void zMovePointLoad(zMovePoint* ent, xSerial* s);
void zMovePointReset(zMovePoint* m);
S32 zMovePointEventCB(xBase* from, xBase* to, U32 toEvent, const F32* toParam, xBase* b3);
F32 zMovePointGetNext(const zMovePoint* current, const zMovePoint* prev, zMovePoint** next,
                          xVec3* hdng);
xVec3* zMovePointGetPos(const zMovePoint* m);
F32 zMovePointGetDelay(const zMovePoint* m);
F32 xMovePointGetDelay(const xMovePoint* m);

#endif
