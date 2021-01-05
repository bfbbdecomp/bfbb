#ifndef XMOVEPOINT_H
#define XMOVEPOINT_H

#include "xBase.h"
#include "xMath3.h"
#include "xSpline.h"

struct xScene;

struct xMovePointAsset : xBaseAsset
{
    xVec3 pos;
    uint16 wt;

    uint8 on;
    uint8 bezIndex;
    uint8 flg_props;
    uint8 pad;
    uint16 numPoints;

    float32 delay;
    float32 zoneRadius;
    float32 arenaRadius;
    xLinkAsset* link;
};

struct xMovePoint : xBase
{
    xMovePointAsset* asset;

    // Offset: 0x14
    xVec3* pos;
    xMovePoint** nodes;
    xMovePoint* prev;
    uint32 node_wt_sum;

    // Offset: 0x24
    uint8 on;
    uint8 pad[3];

    // Offset: 0x28
    float32 delay;
    xSpline3* spl;
};

xVec3* xMovePointGetPos(xMovePoint* m);
float32 xMovePointGetNext(const xMovePoint* m, const xMovePoint* prev, xMovePoint** next,
                          xVec3* hdng);
void xMovePointSplineDestroy(xMovePoint* m);
void xMovePointSplineSetup(xMovePoint* m);
void xMovePointSetup(xMovePoint* m, xScene* sc);
void xMovePointReset(xMovePoint* m);
void xMovePointLoad(xMovePoint* ent, xSerial* s);
void xMovePointSave(xMovePoint* ent, xSerial* s);
void xMovePointInit(xMovePoint* m, xMovePointAsset* asset);

#endif