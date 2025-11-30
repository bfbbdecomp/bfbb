#include "zMovePoint.h"
#include "zNPCSupplement.h"

#include "xEvent.h"

#include <types.h>

zMovePoint* g_mvpt_list;
S32 g_mvpt_cnt;

// Random load word at the end of the function for some reason.
zMovePoint* zMovePoint_GetMemPool(S32 cnt)
{
    g_mvpt_list = cnt ? (zMovePoint*)xMemAllocSize(cnt * sizeof(zMovePoint)) : NULL;
    g_mvpt_cnt = cnt;
    return *(__typeof__(g_mvpt_list) volatile*)&g_mvpt_list;
}

void zMovePointInit(zMovePoint* m, xMovePointAsset* asset)
{
    xMovePointInit((xMovePoint*)m, asset);
    m->eventFunc = zMovePointEventCB;
    if (m->linkCount)
    {
        m->link =
            (xLinkAsset*)(((U32*)asset + sizeof(xMovePointAsset) / 4) + (U32)asset->numPoints);
    }
    else
    {
        m->link = NULL;
    }
}

zMovePoint* zMovePoint_GetInst(S32 n)
{
    return &g_mvpt_list[n];
}

void zMovePointSetup(zMovePoint* mvpt, zScene* scn)
{
    xMovePointSetup((xMovePoint*)mvpt, (xScene*)scn);
}

zMovePoint* zMovePoint_From_xAssetID(U32 aid)
{
    zMovePoint* pnt = g_mvpt_list;
    zMovePoint* ret = NULL;
    for (S32 i = g_mvpt_cnt; i > 0; i--)
    {
        if (pnt->asset->id == aid)
        {
            ret = pnt;
            break;
        }
        pnt++;
    }
    return ret;
}

void zMovePointSave(zMovePoint* ent, xSerial* s)
{
    xMovePointSave((xMovePoint*)ent, s);
}

void zMovePointLoad(zMovePoint* ent, xSerial* s)
{
    xMovePointLoad((xMovePoint*)ent, s);
}

void zMovePointReset(zMovePoint* m)
{
    xMovePointReset((xMovePoint*)m);
}

S32 zMovePointEventCB(xBase* from, xBase* to, U32 toEvent, const F32* toParam, xBase* b3)
{
    switch (toEvent)
    {
    case eEventOn:
        ((zMovePoint*)to)->on = true;
        break;
    case eEventOff:
        ((zMovePoint*)to)->on = false;
        break;
    case eEventArrive:
        break;
    case eEventReset:
        zMovePointReset((zMovePoint*)to);
        break;
    case eEventMakeASplash:
        xVec3* pos = ((zMovePoint*)to)->pos;
        if (pos != NULL)
        {
            if (*toParam < 1e-5f)
            {
                NPCC_MakeASplash(pos, -1.0f);
            }
            else
            {
                NPCC_MakeASplash(pos, *toParam);
            }
        }
        break;
    }
    return eEventEnable;
}

F32 zMovePointGetNext(const zMovePoint* current, const zMovePoint* prev, zMovePoint** next,
                      xVec3* hdng)
{
    return xMovePointGetNext((xMovePoint*)current, (xMovePoint*)prev, (xMovePoint**)next, hdng);
}

xVec3* zMovePointGetPos(const zMovePoint* m)
{
    return xMovePointGetPos((xMovePoint*)m);
}

F32 zMovePointGetDelay(const zMovePoint* m)
{
    return xMovePointGetDelay((xMovePoint*)m);
}
