#include "xMovePoint.h"

#include "xMathInlines.h"
#include <types.h>

#include "xMath.h"
#include "xScene.h"
#include "xMemMgr.h"

inline F32 xVec3Hdng(xVec3* a, const xVec3* b, const xVec3* c);

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

void xMovePointSplineSetup(xMovePoint* m)
{
    xMovePoint *w0, *w1, *w2, *w3;
    xVec3 points[2];
    xVec3 p1, p2;

    if (m->asset->bezIndex != 1)
        return;
    if (m->spl)
        return;

    w0 = m->prev;
    w1 = m;
    w2 = m->nodes[0];

    points[0] = *w0->pos;
    if (w2->asset->bezIndex > 0)
    {
        w3 = w2->nodes[0];
        p1 = *w1->pos;
        p2 = *w2->pos;
        points[1] = *w3->pos;
    }
    else
    {
        p1.x = (1 / 3.f) * w0->pos->x + (2 / 3.f) * w1->pos->x;
        p1.y = (1 / 3.f) * w0->pos->y + (2 / 3.f) * w1->pos->y;
        p1.z = (1 / 3.f) * w0->pos->z + (2 / 3.f) * w1->pos->z;
        p2.x = (2 / 3.f) * w1->pos->x + (1 / 3.f) * w2->pos->x;
        p2.y = (2 / 3.f) * w1->pos->y + (1 / 3.f) * w2->pos->y;
        p2.z = (2 / 3.f) * w1->pos->z + (1 / 3.f) * w2->pos->z;
        points[1] = *w2->pos;
    }

    m->spl = xSpline3_Bezier(points, NULL, 2, 0, &p1, &p2);
    xSpline3_ArcInit(m->spl, 20);
}

F32 xMovePointGetNext(const xMovePoint* m, const xMovePoint* prev, xMovePoint** next, xVec3* hdng)
{
    if (m->asset->numPoints < 1)
    {
        *next = NULL;
        return 0.0f;
    }

    xMovePoint* previousOption = NULL;

    xMovePoint** n;
    xMovePointAsset* a;
    S32 rnd;

    rnd = xrand() % m->node_wt_sum;

    n = m->nodes;
    a = m->asset;

    for (U16 idx = 0; idx < a->numPoints; idx++)
    {
        *next = n[idx];
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
            return 0.0f;
        }
    }

    if (hdng)
    {
        return xVec3Hdng(hdng, m->pos, (*next)->pos);
    }
    else
    {
        return 0.0f;
    }
}

xVec3* xMovePointGetPos(const xMovePoint* m)
{
    return m->pos;
}

inline F32 xVec3Hdng(xVec3* a, const xVec3* b, const xVec3* c)
{
    F32 dx = c->x - b->x;
    F32 dy = c->y - b->y;
    F32 dz = c->z - b->z;
    F32 len2 = dx * dx + dy * dy + dz * dz;
    F32 len, invLen, ret;

    if (xeq(len2, 1.0f, 0.00001f))
    {
        a->x = dx;
        a->y = dy;
        a->z = dz;
        ret = 1.0f;
    }
    else if (xeq(len2, 0.0f, 0.00001f))
    {
        a->x = 0.0f;
        a->y = 1.0f;
        a->z = 0.0f;
        ret = 0.0f;
    }
    else
    {
        len = xsqrt(len2);
        invLen = 1.0f / len;
        a->x = dx * invLen;
        a->y = dy * invLen;
        a->z = dz * invLen;
        ret = len;
    }

    return ret;
}
