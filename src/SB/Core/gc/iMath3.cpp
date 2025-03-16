#include "iMath3.h"

#include "xMath.h"
#include "xMath2.h"
#include "xMathInlines.h"

#include <string.h>

extern F32 _555_1; // 0.5f
extern F32 _557_1; // 0.0f
extern F32 _558_3; // 1.0f
extern F32 _560_2; // 0.00001f
extern F32 _607; // 2.0f
extern F32 _608_0; // -1.0f
extern F32 _1060; // -9.9999997e37f
extern F32 _1061; // 9.9999997e37f
extern F32 _1062; // -0.5f

void iMath3Init()
{
}

void iSphereIsectVec(const xSphere* s, const xVec3* v, xIsect* isx)
{
    xVec3Sub(&isx->norm, v, &s->center);

    isx->dist = xVec3Length(&isx->norm);
    isx->penned = isx->dist - s->r;
}

void iSphereIsectRay(const xSphere* s, const xRay3* r, xIsect* isx)
{
    F32 t_in, t_out;
    U32 num;

    if (!(r->flags & 0x400))
    {
        ((xRay3*)r)->min_t = _557_1; // wait, that's illegal
    }

    if (!(r->flags & 0x800))
    {
        ((xRay3*)r)->max_t = _558_3;
    }

    xVec3Sub(&isx->norm, &r->origin, &s->center);

    num = xMathSolveQuadratic(xVec3Dot(&r->dir, &r->dir), _607 * xVec3Dot(&isx->norm, &r->dir),
                              xVec3Dot(&isx->norm, &isx->norm) - s->r * s->r, &t_in, &t_out);

    if (num == 0)
    {
        isx->penned = _558_3;
        isx->contained = _558_3;
    }
    else if (num == 1)
    {
        if (t_in < r->min_t || t_in > r->max_t)
        {
            isx->dist = t_in;
            isx->penned = _558_3;
            isx->contained = _558_3;
        }
        else
        {
            isx->dist = t_in;
            isx->penned = _608_0;
            isx->contained = _558_3;
        }
    }
    else if (t_in < r->min_t)
    {
        if (t_out < r->min_t)
        {
            isx->dist = t_out;
            isx->penned = _558_3;
            isx->contained = _558_3;
        }
        else
        {
            isx->dist = t_out;
            isx->penned = _608_0;
            isx->contained = _608_0;
        }
    }
    else
    {
        if (t_in <= r->max_t)
        {
            isx->dist = t_in;
            isx->penned = _608_0;
            isx->contained = _558_3;
        }
        else
        {
            isx->dist = t_in;
            isx->penned = _558_3;
            isx->contained = _558_3;
        }
    }
}

void iSphereIsectSphere(const xSphere* s, const xSphere* p, xIsect* isx)
{
    xVec3Sub(&isx->norm, &p->center, &s->center);

    isx->dist = xVec3Length(&isx->norm);
    isx->penned = isx->dist - p->r - s->r;
    isx->contained = isx->dist - s->r;
}

void iSphereInitBoundVec(xSphere* s, const xVec3* v)
{
    xVec3Copy(&s->center, v);

    s->r = _560_2;
}

void iSphereBoundVec(xSphere* o, const xSphere* s, const xVec3* v)
{
    F32 scale;
    xSphere temp;
    xSphere* tp;
    U32 usetemp;
    xIsect isx;

    usetemp = (o == s);

    iSphereIsectVec(s, v, &isx);

    if (isx.penned <= _557_1)
    {
        if (!usetemp)
        {
            memcpy(o, s, sizeof(xSphere));
        }
    }
    else
    {
        if (usetemp)
        {
            tp = &temp;
        }
        else
        {
            tp = o;
        }

        xVec3Copy(&tp->center, &isx.norm);

        scale = (isx.dist - s->r) / (_607 * isx.dist);

        xVec3SMul(&tp->center, &tp->center, scale);
        xVec3Add(&tp->center, &tp->center, &s->center);

        tp->r = _555_1 * (isx.dist + s->r);

        if (usetemp)
        {
            memcpy(o, tp, sizeof(xSphere));
        }
    }
}

void iCylinderIsectVec(const xCylinder* c, const xVec3* v, xIsect* isx)
{
    F32 b = c->center.y + c->h;

    if (v->y >= c->center.y - c->h && v->y <= b &&
        xVec2Dist(c->center.x, c->center.z, v->x, v->z) <= c->r)
    {
        isx->penned = _608_0;
    }
    else
    {
        isx->penned = _558_3;
    }
}

void iBoxVecDist(const xBox* box, const xVec3* v, xIsect* isx)
{
    if (v->x < box->lower.x)
    {
        if (v->y < box->lower.y)
        {
            if (v->z < box->lower.z)
            {
                isx->norm.x = box->lower.x - v->x;
                isx->norm.y = box->lower.y - v->y;
                isx->norm.z = box->lower.z - v->z;
                isx->flags = isx->flags & ~0x1F000000 | 0x00000000;
                isx->flags |= 0x80000000;
            }
            else if (v->z <= box->upper.z)
            {
                isx->norm.x = box->lower.x - v->x;
                isx->norm.y = box->lower.y - v->y;
                isx->norm.z = _557_1;
                isx->flags = isx->flags & ~0x1F000000 | 0x01000000;
                isx->flags |= 0x40000000;
            }
            else
            {
                isx->norm.x = box->lower.x - v->x;
                isx->norm.y = box->lower.y - v->y;
                isx->norm.z = box->upper.z - v->z;
                isx->flags = isx->flags & ~0x1F000000 | 0x02000000;
                isx->flags |= 0x80000000;
            }
        }
        else if (v->y <= box->upper.y)
        {
            if (v->z < box->lower.z)
            {
                isx->norm.x = box->lower.x - v->x;
                isx->norm.y = _557_1;
                isx->norm.z = box->lower.z - v->z;
                isx->flags = isx->flags & ~0x1F000000 | 0x03000000;
                isx->flags |= 0x40000000;
            }
            else if (v->z <= box->upper.z)
            {
                isx->norm.x = box->lower.x - v->x;
                isx->norm.y = _557_1;
                isx->norm.z = _557_1;
                isx->flags = isx->flags & ~0x1F000000 | 0x04000000;
                isx->flags |= 0x20000000;
            }
            else
            {
                isx->norm.x = box->lower.x - v->x;
                isx->norm.y = _557_1;
                isx->norm.z = box->upper.z - v->z;
                isx->flags = isx->flags & ~0x1F000000 | 0x05000000;
                isx->flags |= 0x40000000;
            }
        }
        else
        {
            if (v->z < box->lower.z)
            {
                isx->norm.x = box->lower.x - v->x;
                isx->norm.y = box->upper.y - v->y;
                isx->norm.z = box->lower.z - v->z;
                isx->flags = isx->flags & ~0x1F000000 | 0x06000000;
                isx->flags |= 0x80000000;
            }
            else if (v->z <= box->upper.z)
            {
                isx->norm.x = box->lower.x - v->x;
                isx->norm.y = box->upper.y - v->y;
                isx->norm.z = _557_1;
                isx->flags = isx->flags & ~0x1F000000 | 0x07000000;
                isx->flags |= 0x40000000;
            }
            else
            {
                isx->norm.x = box->lower.x - v->x;
                isx->norm.y = box->upper.y - v->y;
                isx->norm.z = box->upper.z - v->z;
                isx->flags = isx->flags & ~0x1F000000 | 0x08000000;
                isx->flags |= 0x80000000;
            }
        }
    }
    else if (v->x <= box->upper.x)
    {
        if (v->y < box->lower.y)
        {
            if (v->z < box->lower.z)
            {
                isx->norm.x = _557_1;
                isx->norm.y = box->lower.y - v->y;
                isx->norm.z = box->lower.z - v->z;
                isx->flags = isx->flags & ~0x1F000000 | 0x09000000;
                isx->flags |= 0x40000000;
            }
            else if (v->z <= box->upper.z)
            {
                isx->norm.x = _557_1;
                isx->norm.y = box->lower.y - v->y;
                isx->norm.z = _557_1;
                isx->flags = isx->flags & ~0x1F000000 | 0x0A000000;
                isx->flags |= 0x20000000;
            }
            else
            {
                isx->norm.x = _557_1;
                isx->norm.y = box->lower.y - v->y;
                isx->norm.z = box->upper.z - v->z;
                isx->flags = isx->flags & ~0x1F000000 | 0x0B000000;
                isx->flags |= 0x40000000;
            }
        }
        else if (v->y <= box->upper.y)
        {
            if (v->z < box->lower.z)
            {
                isx->norm.x = _557_1;
                isx->norm.y = _557_1;
                isx->norm.z = box->lower.z - v->z;
                isx->flags = isx->flags & ~0x1F000000 | 0x0C000000;
                isx->flags |= 0x20000000;
            }
            else if (v->z <= box->upper.z)
            {
            }
            else
            {
                isx->norm.x = _557_1;
                isx->norm.y = _557_1;
                isx->norm.z = box->upper.z - v->z;
                isx->flags = isx->flags & ~0x1F000000 | 0x0E000000;
                isx->flags |= 0x20000000;
            }
        }
        else
        {
            if (v->z < box->lower.z)
            {
                isx->norm.x = _557_1;
                isx->norm.y = box->upper.y - v->y;
                isx->norm.z = box->lower.z - v->z;
                isx->flags = isx->flags & ~0x1F000000 | 0x0F000000;
                isx->flags |= 0x40000000;
            }
            else if (v->z <= box->upper.z)
            {
                isx->norm.x = _557_1;
                isx->norm.y = box->upper.y - v->y;
                isx->norm.z = _557_1;
                isx->flags = isx->flags & ~0x1F000000 | 0x10000000;
                isx->flags |= 0x20000000;
            }
            else
            {
                isx->norm.x = _557_1;
                isx->norm.y = box->upper.y - v->y;
                isx->norm.z = box->upper.z - v->z;
                isx->flags = isx->flags & ~0x1F000000 | 0x11000000;
                isx->flags |= 0x40000000;
            }
        }
    }
    else
    {
        if (v->y < box->lower.y)
        {
            if (v->z < box->lower.z)
            {
                isx->norm.x = box->upper.x - v->x;
                isx->norm.y = box->lower.y - v->y;
                isx->norm.z = box->lower.z - v->z;
                isx->flags = isx->flags & ~0x1F000000 | 0x12000000;
                isx->flags |= 0x80000000;
            }
            else if (v->z <= box->upper.z)
            {
                isx->norm.x = box->upper.x - v->x;
                isx->norm.y = box->lower.y - v->y;
                isx->norm.z = _557_1;
                isx->flags = isx->flags & ~0x1F000000 | 0x13000000;
                isx->flags |= 0x40000000;
            }
            else
            {
                isx->norm.x = box->upper.x - v->x;
                isx->norm.y = box->lower.y - v->y;
                isx->norm.z = box->upper.z - v->z;
                isx->flags = isx->flags & ~0x1F000000 | 0x14000000;
                isx->flags |= 0x80000000;
            }
        }
        else if (v->y <= box->upper.y)
        {
            if (v->z < box->lower.z)
            {
                isx->norm.x = box->upper.x - v->x;
                isx->norm.y = _557_1;
                isx->norm.z = box->lower.z - v->z;
                isx->flags = isx->flags & ~0x1F000000 | 0x15000000;
                isx->flags |= 0x40000000;
            }
            else if (v->z <= box->upper.z)
            {
                isx->norm.x = box->upper.x - v->x;
                isx->norm.y = _557_1;
                isx->norm.z = _557_1;
                isx->flags = isx->flags & ~0x1F000000 | 0x16000000;
                isx->flags |= 0x20000000;
            }
            else
            {
                isx->norm.x = box->upper.x - v->x;
                isx->norm.y = _557_1;
                isx->norm.z = box->upper.z - v->z;
                isx->flags = isx->flags & ~0x1F000000 | 0x17000000;
                isx->flags |= 0x40000000;
            }
        }
        else
        {
            if (v->z < box->lower.z)
            {
                isx->norm.x = box->upper.x - v->x;
                isx->norm.y = box->upper.y - v->y;
                isx->norm.z = box->lower.z - v->z;
                isx->flags = isx->flags & ~0x1F000000 | 0x18000000;
                isx->flags |= 0x80000000;
            }
            else if (v->z <= box->upper.z)
            {
                isx->norm.x = box->upper.x - v->x;
                isx->norm.y = box->upper.y - v->y;
                isx->norm.z = _557_1;
                isx->flags = isx->flags & ~0x1F000000 | 0x19000000;
                isx->flags |= 0x40000000;
            }
            else
            {
                isx->norm.x = box->upper.x - v->x;
                isx->norm.y = box->upper.y - v->y;
                isx->norm.z = box->upper.z - v->z;
                isx->flags = isx->flags & ~0x1F000000 | 0x1A000000;
                isx->flags |= 0x80000000;
            }
        }
    }

    isx->dist = xVec3Length(&isx->norm);
}

void iBoxIsectVec(const xBox* b, const xVec3* v, xIsect* isx)
{
    if (v->x >= b->lower.x && v->x <= b->upper.x && v->y >= b->lower.y && v->y <= b->upper.y &&
        v->z >= b->lower.z && v->z <= b->upper.z)
    {
        isx->penned = _608_0;
    }
    else
    {
        isx->penned = _558_3;
    }
}

static U32 ClipPlane(F32 denom, F32 numer, F32* t_in, F32* t_out)
{
    if (denom > _557_1)
    {
        if (numer > denom * (*t_out))
        {
            return 0;
        }

        if (numer > denom * (*t_in))
        {
            *t_in = numer / denom;
        }

        return 1;
    }
    else if (denom < _557_1)
    {
        if (numer > denom * (*t_in))
        {
            return 0;
        }

        if (numer > denom * (*t_out))
        {
            *t_out = numer / denom;
        }

        return 1;
    }

    return (numer <= _557_1);
}

static U32 ClipBox(const xVec3* r3, const xVec3* r4, const xVec3* r5, F32* t_in, F32* t_out)
{
    return (ClipPlane(r5->x, -r4->x - r3->x, t_in, t_out) &&
            ClipPlane(-r5->x, r4->x - r3->x, t_in, t_out) &&
            ClipPlane(r5->y, -r4->y - r3->y, t_in, t_out) &&
            ClipPlane(-r5->y, r4->y - r3->y, t_in, t_out) &&
            ClipPlane(r5->z, -r4->z - r3->z, t_in, t_out) &&
            ClipPlane(-r5->z, r4->z - r3->z, t_in, t_out));
}

void iBoxIsectRay(const xBox* b, const xRay3* r, xIsect* isx)
{
    xVec3 var_14, var_20;
    F32 t_in, t_out;

    if (!(r->flags & 0x400))
    {
        ((xRay3*)r)->min_t = _557_1; // wait, that's illegal
    }

    if (!(r->flags & 0x800))
    {
        ((xRay3*)r)->max_t = _558_3;
    }

    // non-matching: incorrect instruction order

    t_in = _1060;
    t_out = _1061;

    var_14.x = b->upper.x - b->lower.x;
    var_14.y = b->upper.y - b->lower.y;
    var_14.z = b->upper.z - b->lower.z;

    var_20.x = b->lower.x + b->upper.x;
    var_20.y = b->lower.y + b->upper.y;

    var_14.x *= _555_1;
    var_14.y *= _555_1;
    var_14.z *= _555_1;

    var_20.z = b->lower.z + b->upper.z;

    var_20.x *= _1062;
    var_20.y *= _1062;
    var_20.z *= _1062;

    var_20.x += r->origin.x;
    var_20.y += r->origin.y;
    var_20.z += r->origin.z;

    if (ClipBox(&var_14, &var_20, &r->dir, &t_in, &t_out))
    {
        if (t_in < r->min_t)
        {
            if (t_out < r->min_t)
            {
                isx->dist = t_out;
                isx->penned = _558_3;
                isx->contained = _558_3;
            }
            else
            {
                isx->dist = t_out;
                isx->penned = _608_0;
                isx->contained = _608_0;
            }
        }
        else
        {
            if (t_in <= r->max_t)
            {
                isx->dist = t_in;
                isx->penned = _608_0;
                isx->contained = _558_3;
            }
            else
            {
                isx->dist = t_in;
                isx->penned = _558_3;
                isx->contained = _558_3;
            }
        }
    }
    else
    {
        isx->penned = _558_3;
        isx->contained = _558_3;
    }
}

void iBoxIsectSphere(const xBox* box, const xSphere* p, xIsect* isx)
{
    U32 xcode, ycode, zcode;

    // non-matching: (p->center.x + p->r) computed inside if statement

    if (p->center.x - p->r < box->lower.x)
    {
        if (p->center.x + p->r < box->lower.x)
        {
            xcode = 2;
        }
        else if (p->center.x + p->r > box->upper.x)
        {
            xcode = 0;
        }
        else
        {
            xcode = 1;
        }
    }
    else
    {
        if (p->center.x - p->r > box->upper.x)
        {
            xcode = 5;
        }
        else if (p->center.x + p->r > box->upper.x)
        {
            xcode = 4;
        }
        else
        {
            xcode = 3;
        }
    }

    // non-matching: missing division instructions

    if (xcode / 3 == 2)
    {
        isx->penned = _558_3;
        return;
    }

    // non-matching: (p->center.y + p->r) computed inside if statement

    if (p->center.y - p->r < box->lower.y)
    {
        if (p->center.y + p->r < box->lower.y)
        {
            ycode = 2;
        }
        else if (p->center.y + p->r > box->upper.y)
        {
            ycode = 0;
        }
        else
        {
            ycode = 1;
        }
    }
    else
    {
        if (p->center.y - p->r > box->upper.y)
        {
            ycode = 5;
        }
        else if (p->center.y + p->r > box->upper.y)
        {
            ycode = 4;
        }
        else
        {
            ycode = 3;
        }
    }

    // non-matching: missing division instructions

    if (ycode / 3 == 2)
    {
        isx->penned = _558_3;
        return;
    }

    // non-matching: (p->center.z + p->r) computed inside if statement

    if (p->center.z - p->r < box->lower.z)
    {
        if (p->center.z + p->r < box->lower.z)
        {
            zcode = 2;
        }
        else if (p->center.z + p->r > box->upper.z)
        {
            zcode = 0;
        }
        else
        {
            zcode = 1;
        }
    }
    else
    {
        if (p->center.z - p->r > box->upper.z)
        {
            zcode = 5;
        }
        else if (p->center.z + p->r > box->upper.z)
        {
            zcode = 4;
        }
        else
        {
            zcode = 3;
        }
    }

    // non-matching: missing division instructions

    if (zcode / 3 == 2)
    {
        isx->penned = _558_3;
        return;
    }

    iBoxIsectVec(box, &p->center, isx);

    if (isx->penned < _557_1)
    {
        xVec3 var_28;

        xVec3Add(&var_28, &box->lower, &box->upper);
        xVec3SMulBy(&var_28, _555_1);
        xVec3Sub(&isx->norm, &p->center, &var_28);

        isx->dist = xVec3Length(&isx->norm);
        isx->contained = _608_0;
    }
    else
    {
        isx->flags = xcode | (ycode << 4) | (zcode << 8);

        iBoxVecDist(box, &p->center, isx);

        isx->penned = isx->dist - p->r;
        isx->contained = _558_3;
    }
}

void iBoxInitBoundVec(xBox* b, const xVec3* v)
{
    xVec3Copy(&b->lower, v);
    xVec3Copy(&b->upper, v);
}

void iBoxBoundVec(xBox* o, const xBox* b, const xVec3* v)
{
    xVec3Init(&o->lower, MIN(v->x, b->lower.x), MIN(v->y, b->lower.y), MIN(v->z, b->lower.z));
    xVec3Init(&o->upper, MAX(v->x, b->upper.x), MAX(v->y, b->upper.y), MAX(v->z, b->upper.z));
}

F32 xVec2Dist(F32 x1, F32 y1, F32 x2, F32 y2)
{
    F32 x = x1 - x2;
    F32 y = y1 - y2;

    return xsqrt(SQR(x) + SQR(y));
}

F32 xVec2Dot(const xVec2* a, const xVec2* b)
{
    return a->x * b->x + a->y * b->y;
}

void xVec2Init(xVec2* v, F32 _x, F32 _y)
{
    v->x = _x;
    v->y = _y;
}
