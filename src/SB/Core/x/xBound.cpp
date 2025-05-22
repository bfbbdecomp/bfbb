#include "xBound.h"

#include "xMath.h"
#include "xMathInlines.h"
#include "xDraw.h"

#include "iMath.h"

void xBoundUpdate(xBound* b)
{
    if (b->type == XBOUND_TYPE_BOX)
    {
        xVec3Add(&b->box.center, &b->box.box.lower, &b->box.box.upper);
        xVec3SMul(&b->box.center, &b->box.center, 0.5f);
    }
    else if (b->type == XBOUND_TYPE_OBB)
    {
        xVec3Add(&b->box.center, &b->box.box.lower, &b->box.box.upper);
        xVec3SMul(&b->box.center, &b->box.center, 0.5f);
        xMat4x3Toworld(&b->box.center, b->mat, &b->box.center);
    }

    if (b->type != XBOUND_TYPE_NA)
    {
        xQuickCullForBound(&b->qcd, b);
    }
}

void xBoundGetBox(xBox& box, const xBound& bound)
{
    switch (bound.type)
    {
    case XBOUND_TYPE_SPHERE:
    {
        const xSphere& o = bound.sph;

        box.upper.assign(o.center.x + o.r, o.center.y + o.r, o.center.z + o.r);
        box.lower.assign(o.center.x - o.r, o.center.y - o.r, o.center.z - o.r);

        break;
    }
    case XBOUND_TYPE_BOX:
    {
        box = bound.box.box;

        break;
    }
    case XBOUND_TYPE_OBB:
    {
        xBoxInitBoundOBB(&box, &bound.box.box, bound.mat);

        break;
    }
    }
}

void xBoundGetSphere(xSphere& o, const xBound& bound)
{
    switch (bound.type)
    {
    case XBOUND_TYPE_SPHERE:
    {
        o = bound.sph;

        break;
    }
    case XBOUND_TYPE_BOX:
    {
        o.center = bound.box.center;
        o.r = (bound.box.box.upper - bound.box.center).length();

        break;
    }
    case XBOUND_TYPE_OBB:
    {
        const xMat4x3& mat = *bound.mat;
        xVec3 v = (bound.box.box.upper - bound.box.box.lower) * 0.5f;

        o.r = xsqrt(SQR(v.x) * mat.right.length2() + SQR(v.y) * mat.up.length2() +
                    SQR(v.z) * mat.at.length2());
        o.center = bound.box.center;

        break;
    }
    }
}

F32 xsqrt(F32 x)
{
    const F32 half = 0.5f;
    const F32 three = 3.0f;

    if (x <= 0.0f || isinf(x))
    {
        return x;
    }

    // non-matching: frsp instruction

    F32 guess = __frsqrte(x);
    guess = half * guess * (three - guess * guess * x);

    if (guess > 0.0000099999997f)
    {
        return 1.0f / guess;
    }

    return 100000.0f;
}

U32 xBoundSphereHitsOBB(const xSphere* s, const xBox* b, const xMat4x3* m, xCollis* coll)
{
    return xSphereHitsOBB_nu(s, b, m, coll);
}

void xBoundHitsBound(const xBound* a, const xBound* b, xCollis* c)
{
    if (!xQuickCullIsects(&a->qcd, &b->qcd))
    {
        c->flags &= ~0x1;
    }
    else
    {
        // non-matching: jumptable

        switch (a->type | (b->type << 3))
        {
        case (XBOUND_TYPE_SPHERE | (XBOUND_TYPE_SPHERE << 3)):
        {
            xSphereHitsSphere(&a->sph, &b->sph, c);
            break;
        }
        case (XBOUND_TYPE_SPHERE | (XBOUND_TYPE_OBB << 3)):
        {
            xBoundSphereHitsOBB(&a->sph, &b->box.box, b->mat, c);
            break;
        }
        case (XBOUND_TYPE_SPHERE | (XBOUND_TYPE_BOX << 3)):
        {
            xSphereHitsBox(&a->sph, &b->box.box, c);
            break;
        }
        case (XBOUND_TYPE_BOX | (XBOUND_TYPE_SPHERE << 3)):
        {
            xBoxHitsSphere(&a->box.box, &b->sph, c);
            break;
        }
        case (XBOUND_TYPE_BOX | (XBOUND_TYPE_OBB << 3)):
        {
            xBoxHitsObb(&a->box.box, &b->box.box, b->mat, c);
            break;
        }
        case (XBOUND_TYPE_OBB | (XBOUND_TYPE_OBB << 3)):
        {
            break;
        }
        }
    }
}

static void xBoundOBBIsectRay(const xBox* b, const xMat4x3* m, const xRay3* r, xIsect* isect)
{
    xRay3 xfr;
    xBox sbox;
    xVec3 scale;
    xMat4x3 mnormal;

    {
        F32 len2 = SQR(m->right.x) + SQR(m->right.y) + SQR(m->right.z);

        if ((F32)iabs(len2 - 1.0f) <= 0.0000099999997f)
        {
            // non-matching: incorrect instruction + order

            scale.x = 1.0f;

            mnormal.right.x = m->right.x;
            mnormal.right.y = m->right.y;
            mnormal.right.z = m->right.z;
        }
        else if ((F32)iabs(len2) <= 0.0000099999997f)
        {
            // non-matching: incorrect order

            scale.x = 0.0f;

            mnormal.right.x = 0.0f;
            mnormal.right.y = 1.0f;
            mnormal.right.z = 0.0f;
        }
        else
        {
            scale.x = xsqrt(len2);

            F32 len_inv = 1.0f / scale.x;

            mnormal.right.x = m->right.x * len_inv;
            mnormal.right.y = m->right.y * len_inv;
            mnormal.right.z = m->right.z * len_inv;
        }
    }

    {
        F32 len2 = SQR(m->up.x) + SQR(m->up.y) + SQR(m->up.z);

        if ((F32)iabs(len2 - 1.0f) <= 0.0000099999997f)
        {
            // non-matching: incorrect instruction + order

            scale.y = 1.0f;

            mnormal.up.x = m->up.x;
            mnormal.up.y = m->up.y;
            mnormal.up.z = m->up.z;
        }
        else if ((F32)iabs(len2) <= 0.0000099999997f)
        {
            // non-matching: incorrect order

            scale.y = 0.0f;

            mnormal.up.x = 0.0f;
            mnormal.up.y = 1.0f;
            mnormal.up.z = 0.0f;
        }
        else
        {
            scale.y = xsqrt(len2);

            F32 len_inv = 1.0f / scale.y;

            mnormal.up.x = m->up.x * len_inv;
            mnormal.up.y = m->up.y * len_inv;
            mnormal.up.z = m->up.z * len_inv;
        }
    }

    {
        F32 len2 = SQR(m->at.x) + SQR(m->at.y) + SQR(m->at.z);

        if ((F32)iabs(len2 - 1.0f) <= 0.0000099999997f)
        {
            // non-matching: incorrect instruction + order

            scale.z = 1.0f;

            mnormal.at.x = m->at.x;
            mnormal.at.y = m->at.y;
            mnormal.at.z = m->at.z;
        }
        else if ((F32)iabs(len2) <= 0.0000099999997f)
        {
            // non-matching: incorrect order

            scale.z = 0.0f;

            mnormal.at.x = 0.0f;
            mnormal.at.y = 1.0f;
            mnormal.at.z = 0.0f;
        }
        else
        {
            scale.z = xsqrt(len2);

            F32 len_inv = 1.0f / scale.z;

            mnormal.at.x = m->at.x * len_inv;
            mnormal.at.y = m->at.y * len_inv;
            mnormal.at.z = m->at.z * len_inv;
        }
    }

    mnormal.pos = m->pos;

    sbox.upper.x = b->upper.x * scale.x;
    sbox.upper.y = b->upper.y * scale.y;
    sbox.upper.z = b->upper.z * scale.z;
    sbox.lower.x = b->lower.x * scale.x;
    sbox.lower.y = b->lower.y * scale.y;
    sbox.lower.z = b->lower.z * scale.z;

    xMat4x3Tolocal(&xfr.origin, &mnormal, &r->origin);
    xMat3x3Tolocal(&xfr.dir, &mnormal, &r->dir);

    xfr.min_t = r->min_t;
    xfr.max_t = r->max_t;
    xfr.flags = r->flags;

    iBoxIsectRay(&sbox, &xfr, isect);
}

void xRayHitsBound(const xRay3* r, const xBound* b, xCollis* c)
{
    xIsect isect;

    if (b->type == XBOUND_TYPE_SPHERE)
    {
        iSphereIsectRay(&b->sph, r, &isect);
    }
    else if (b->type == XBOUND_TYPE_OBB)
    {
        xBoundOBBIsectRay(&b->box.box, b->mat, r, &isect);
    }
    else if (b->type == XBOUND_TYPE_BOX)
    {
        iBoxIsectRay(&b->box.box, r, &isect);
    }

    if (isect.penned <= 0.0f)
    {
        c->flags |= 0x1;
        c->dist = isect.dist;
    }
    else
    {
        c->flags &= ~0x1;
    }
}

void xSphereHitsBound(const xSphere* o, const xBound* b, xCollis* c)
{
    switch (b->type)
    {
    case XBOUND_TYPE_SPHERE:
    {
        xSphereHitsSphere(o, &b->sph, c);
        break;
    }
    case XBOUND_TYPE_OBB:
    {
        xBoundSphereHitsOBB(o, &b->box.box, b->mat, c);
        break;
    }
    case XBOUND_TYPE_BOX:
    {
        xSphereHitsBox(o, &b->box.box, c);
        break;
    }
    }
}

void xVecHitsBound(const xVec3* v, const xBound* b, xCollis* c)
{
    xIsect isect;

    if (b->type == XBOUND_TYPE_SPHERE)
    {
        iSphereIsectVec(&b->sph, v, &isect);
    }
    else if (b->type == XBOUND_TYPE_OBB)
    {
        xVec3 lv;

        xMat4x3Tolocal(&lv, b->mat, v);
        iBoxIsectVec(&b->box.box, &lv, &isect);
    }
    else if (b->type == XBOUND_TYPE_BOX)
    {
        iBoxIsectVec(&b->box.box, v, &isect);
    }

    if (isect.penned <= 0.0f)
    {
        c->flags |= 0x1;
    }
    else
    {
        c->flags &= ~0x1;
    }
}

void xBoundDraw(const xBound* b)
{
    if (b->type == XBOUND_TYPE_SPHERE)
    {
        xDrawSphere2(&b->sph, 12);
    }
    else if (b->type == XBOUND_TYPE_OBB)
    {
        xDrawOBB(&b->box.box, b->mat);
    }
    else if (b->type == XBOUND_TYPE_BOX)
    {
        xDrawBox(&b->box.box);
    }
}

void xQuickCullForBound(xQCData* q, const xBound* b)
{
    xQuickCullForBound(&xqc_def_ctrl, q, b);
}

void xMat4x3Toworld(xVec3* o, const xMat4x3* m, const xVec3* v)
{
    xMat3x3RMulVec(o, m, v);

    o->x += m->pos.x;
    o->y += m->pos.y;
    o->z += m->pos.z;
}

void xMat4x3Tolocal(xVec3* o, const xMat4x3* m, const xVec3* v)
{
    o->x = v->x - m->pos.x;
    o->y = v->y - m->pos.y;
    o->z = v->z - m->pos.z;

    xMat3x3Tolocal(o, m, o);
}

void xVec3SMul(xVec3* o, const xVec3* v, F32 s)
{
    o->x = v->x * s;
    o->y = v->y * s;
    o->z = v->z * s;
}

void xVec3Add(xVec3* o, const xVec3* a, const xVec3* b)
{
    o->x = a->x + b->x;
    o->y = a->y + b->y;
    o->z = a->z + b->z;
}

xVec3& xVec3::assign(F32 x, F32 y, F32 z)
{
    this->x = x;
    this->y = y;
    this->z = z;

    return *this;
}

F32 xVec3::length2() const
{
    return this->x * this->x + this->y * this->y + this->z * this->z;
}

xVec3 xVec3::operator*(F32 f) const
{
    xVec3 temp = *this;
    temp *= f;

    return temp;
}

xVec3& xVec3::operator*=(F32 f)
{
    this->x *= f;
    this->y *= f;
    this->z *= f;

    return *this;
}

F32 xVec3::length() const
{
    return xsqrt(this->length2());
}

xVec3 xVec3::operator-(const xVec3& v) const
{
    xVec3 temp = *this;
    temp -= v;

    return temp;
}

xVec3& xVec3::operator-=(const xVec3& v)
{
    this->x -= v.x;
    this->y -= v.y;
    this->z -= v.z;

    return *this;
}

xVec3& xVec3::operator=(const xVec3& v)
{
    this->x = v.x;
    this->y = v.y;
    this->z = v.z;

    return *this;
}

void xDrawBox(const xBox*)
{
}

void xDrawOBB(const xBox*, const xMat4x3*)
{
}

void xDrawSphere2(const xSphere*, U32)
{
}
