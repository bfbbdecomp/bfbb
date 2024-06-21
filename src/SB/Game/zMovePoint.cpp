#include "zMovePoint.h"
#include "zNPCSupplement.h"

#include "xEvent.h"

#include <types.h>

extern zMovePoint* g_mvpt_list;
extern int32 g_mvpt_cnt;
extern float32 lbl_803CDD40;
extern float32 lbl_803CDD44;

#if 0
// Random load word at the end of the function for some reason.
zMovePoint* zMovePoint_GetMemPool(int32 cnt)
{
    /*if (cnt != 0)
	{
		g_mvpt_list = (zMovePoint*)xMemAllocSize(cnt * sizeof(zMovePoint));
	}
	else
	{
		g_mvpt_list = NULL;
	}
	g_mvpt_cnt = cnt;
	return g_mvpt_list;*/

    g_mvpt_list = cnt ? (zMovePoint*)xMemAllocSize(cnt * sizeof(zMovePoint)) : NULL;
    g_mvpt_cnt = cnt;
    return g_mvpt_list;
}

#endif

void zMovePointInit(zMovePoint* m, xMovePointAsset* asset)
{
    xMovePointInit((xMovePoint*)m, asset);
    m->eventFunc = zMovePointEventCB;
    if (m->linkCount)
    {
        m->link = (xLinkAsset*)(((uint32*)asset + sizeof(xMovePointAsset) / 4) +
                                (uint32)asset->numPoints);
    }
    else
    {
        m->link = NULL;
    }
}

zMovePoint* zMovePoint_GetInst(int32 n)
{
    return &g_mvpt_list[n];
}

void zMovePointSetup(zMovePoint* mvpt, zScene* scn)
{
    xMovePointSetup((xMovePoint*)mvpt, (xScene*)scn);
}

zMovePoint* zMovePoint_From_xAssetID(uint32 aid)
{
    zMovePoint* pnt = g_mvpt_list;
    zMovePoint* ret = NULL;
    for (int32 i = g_mvpt_cnt; i > 0; i--)
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

int32 zMovePointEventCB(xBase* from, xBase* to, uint32 toEvent, const float32* toParam, xBase* b3)
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
            if (*toParam < lbl_803CDD40)
            {
                NPCC_MakeASplash(pos, lbl_803CDD44);
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

float32 zMovePointGetNext(const zMovePoint* current, const zMovePoint* prev, zMovePoint** next,
                          xVec3* hdng)
{
    return xMovePointGetNext((xMovePoint*)current, (xMovePoint*)prev, (xMovePoint**)next, hdng);
}

xVec3* zMovePointGetPos(const zMovePoint* m)
{
    return xMovePointGetPos((xMovePoint*)m);
}

float32 zMovePointGetDelay(const zMovePoint* m)
{
    return xMovePointGetDelay((xMovePoint*)m);
}

float32 xMovePointGetDelay(const xMovePoint* m)
{
    return m->delay;
}
