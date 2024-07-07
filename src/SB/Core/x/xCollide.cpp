#include "xCollide.h"
#include "zSurface.h"
#include "iCollide.h"
#include "iMath3.h"

#include <types.h>

// extern F32 lbl_803CCAA8; // 0.0

#ifdef NON_MATCHING
// Will match once we can use float literals for this
_xCollsIdx xCollideGetCollsIdx(const xCollis* coll, const xVec3* tohit, const xMat3x3* mat)
{
    if (tohit->y * tohit->y > tohit->x * tohit->x + tohit->z * tohit->z)
    {
        if (tohit->y < 0.0f)
        {
            if ((coll->flags & 0x20000) == 0)
            {
                if (coll->optr != NULL && coll->mptr->Surf != NULL ?
                        zSurfaceGetStandOn(coll->mptr->Surf) :
                        1)
                {
                    return k_XCOLLS_IDX_FLOOR;
                }
            }
        }
        else
        {
            return k_XCOLLS_IDX_CEIL;
        }
    }
    F32 local_x = mat->right.x * tohit->x + mat->right.z * tohit->z;
    F32 local_z = mat->at.x * tohit->x + mat->at.z * tohit->z;
    if (local_x > 0.0f)
    {
        if (local_z > 0.0f)
        {
            if (local_x > local_z)
            {
                return k_XCOLLS_IDX_LEFT;
            }
            else
            {
                return k_XCOLLS_IDX_FRONT;
            }
        }
        else
        {
            if (local_x > -local_z)
            {
                return k_XCOLLS_IDX_LEFT;
            }
            else
            {
                return k_XCOLLS_IDX_REAR;
            }
        }
    }
    else
    {
        if (local_z > 0.0f)
        {
            if (local_x < -local_z)
            {
                return k_XCOLLS_IDX_RIGHT;
            }
            else
            {
                return k_XCOLLS_IDX_FRONT;
            }
        }
        else
        {
            if (local_x < local_z)
            {
                return k_XCOLLS_IDX_RIGHT;
            }
            else
            {
                return k_XCOLLS_IDX_REAR;
            }
        }
    }
}
#endif

void xCollideInit(xScene* sc)
{
    iCollideInit(sc);
}

#if 0
//WIP, very wrong but it compiles at least
// Need to figure out why it defines scale twice and why ghidra passes in wrong values to xVec3SMul
U32 xSphereHitsSphere(const xSphere* a, const xSphere* b, xCollis* coll)
{
    xIsect isx;
    F32 scale;
    // F32 scale;

    iSphereIsectSphere(b, a, &isx);
    if (scale <= 0.0f)
    {
        if (scale <= 0.0f)
        {
            coll->flags = coll->flags | 0x10;
        }
        coll->dist = (F32)((float)a->r + scale);
        if ((coll->flags & 0x1600) != 0)
        {
            if (0.0f == scale)
            {
                xVec3Copy(&coll->tohit, &g_O3);
            }
            else
            {
                xVec3SMul(&coll->norm, &coll->tohit, scale);
            }
        }
        if ((coll->flags & 0x800) != 0)
        {
            if (0.0f == scale)
            {
                xVec3Copy(&coll->depen, &g_O3);
            }
            else
            {
                xVec3SMul((xVec3*)&a->center, &coll->depen, scale);
            }
        }
        if ((coll->flags & 0x1200) != 0)
        {
            xVec3Normalize(&coll->hdng, &coll->tohit);
        }
        if ((coll->flags & 0x200) != 0)
        {
            xVec3Inv(&coll->norm, &coll->hdng);
        }
        coll->flags |= 1;
        return 1;
    }
    else
    {
        coll->flags &= 0xfffffffe;
        return 0;
    }
}
#endif

void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    F32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    F32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    F32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}
