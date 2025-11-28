#ifndef XMOVEPOINT_H
#define XMOVEPOINT_H

#include "xBase.h"
#include "xMath3.h"
#include "xSpline.h"

struct xScene;

struct xMovePointAsset : xBaseAsset
{
    xVec3 pos;
    U16 wt;

    U8 on;
    U8 bezIndex;
    U8 flg_props;
    U8 pad;
    U16 numPoints;

    F32 delay;
    F32 zoneRadius;
    F32 arenaRadius;
};

struct xMovePoint : xBase
{
    xMovePointAsset* asset;

    // Offset: 0x14
    xVec3* pos;
    xMovePoint** nodes;
    xMovePoint* prev;
    U32 node_wt_sum;

    // Offset: 0x24
    U8 on;
    U8 pad[3];

    // Offset: 0x28
    F32 delay;
    xSpline3* spl;
};

xVec3* xMovePointGetPos(const xMovePoint* m);
F32 xMovePointGetNext(const xMovePoint* m, const xMovePoint* prev, xMovePoint** next, xVec3* hdng);
void xMovePointSplineDestroy(xMovePoint* m);
void xMovePointSplineSetup(xMovePoint* m);
void xMovePointSetup(xMovePoint* m, xScene* sc);
void xMovePointReset(xMovePoint* m);
void xMovePointLoad(xMovePoint* ent, xSerial* s);
void xMovePointSave(xMovePoint* ent, xSerial* s);
void xMovePointInit(xMovePoint* m, xMovePointAsset* asset);

#endif
