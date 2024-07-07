#include "xMovePoint.h"

#include <types.h>

#include "xMath.h"
#include "xScene.h"
#include "xMemMgr.h"

F32 xVec3Hdng(xVec3* a, const xVec3* b, const xVec3* c);

void xMovePointInit(xMovePoint* ent, xMovePointAsset* asset)
{
    xBaseInit(ent, asset);
    ent->asset = asset;

    // They didn't use `&asset->pos` here as that doesn't generate a 100% match.
    ent->pos = &ent->asset->pos;
    ent->on = asset->on;
    ent->delay = asset->delay;
    ent->spl = NULL;

    if (asset->numPoints != 0)
    {
        ent->nodes = (xMovePoint**)xMemAllocSize(asset->numPoints * sizeof(xMovePoint*));
    }
    else
    {
        ent->nodes = NULL;
    }
}

void xMovePointSave(xMovePoint* ent, xSerial* s)
{
    xBaseSave(ent, s);
}

void xMovePointLoad(xMovePoint* ent, xSerial* s)
{
    xBaseLoad(ent, s);
}

void xMovePointReset(xMovePoint* m)
{
    xBaseReset(m, m->asset);

    m->on = m->asset->on;
    m->delay = m->asset->delay;
}

void xMovePointSetup(xMovePoint* m, xScene* sc)
{
    m->node_wt_sum = 0;
    U32* pointIds = (U32*)(m->asset + 1);
    for (U16 idx = 0; idx < m->asset->numPoints; ++idx)
    {
        U32 id = pointIds[idx];
        m->nodes[idx] = (xMovePoint*)xSceneResolvID(sc, id);
        m->node_wt_sum += m->nodes[idx]->asset->wt;
        m->nodes[idx]->prev = m;
    }
}

void xMovePointSplineDestroy(xMovePoint* m)
{
    if (m->spl != NULL)
    {
        m->spl = NULL;
    }
}

#if 0
// If you uncomment the numPoints variable then this function is a perfect match
// minus ordering. In the original assembly some variable fetches are lifted to
// places earlier in the assembly listing than what this comiles to for some
// reason.
// The r27-30 registers used to hold the main varibles of the function are all
// perfect matches with this code.
extern float xMovePoint_float_0;
F32 xMovePointGetNext(xMovePoint* m, xMovePoint* prev, xMovePoint** next, xVec3* hdng)
{
    if (m->asset->numPoints < 1)
    {
        *next = NULL;
        return xMovePoint_float_0;
    }

    xMovePoint* previousOption = NULL;

    S32 rnd = xrand() % m->node_wt_sum;

    // The debug symbols don't show a dedicated numPoints var, but if it isn't
    // present, then getting numPoints isn't lifted outside of the loop, which
    // it is in the original assembly.
    //U16 numPoints = m->asset->numPoints;

    for (U16 idx = 0; idx < m->asset->numPoints; ++idx)
    {
        *next = m->nodes[idx];
        rnd -= (*next)->asset->wt;
        if ((*next)->on == 0)
        {
            *next = NULL;
        }
        else
        {
            previousOption = *next;
            if (*next == prev)
            {
                *next = NULL;
            }
            else if (rnd < 0)
            {
                break;
            }
        }
    }

    if (*next == NULL)
    {
        if (previousOption != NULL)
        {
            *next = previousOption;
        }
        else
        {
            return xMovePoint_float_0;
        }
    }

    if (hdng)
    {
        return xVec3Hdng(hdng, m->pos, (*next)->pos);
    }
    else
    {
        return xMovePoint_float_0;
    }
}
#endif

xVec3* xMovePointGetPos(xMovePoint* m)
{
    return m->pos;
}
