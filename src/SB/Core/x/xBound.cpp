#include "xBound.h"

#include "xMath.h"
#include "xMathInlines.h"
#include "xDraw.h"

#include "iMath.h"

extern float32 _571;
extern float32 _640;
extern float32 _641;
extern float32 _642;
extern float32 _643;
extern float32 _644;

void xBoundUpdate(xBound* b)
{
    if (b->type == XBOUND_TYPE_BOX)
    {
        xVec3Add(&b->box.center, &b->box.box.lower, &b->box.box.upper);
        xVec3SMul(&b->box.center, &b->box.center, _571);
    }
    else if (b->type == XBOUND_TYPE_OBB)
    {
        xVec3Add(&b->box.center, &b->box.box.lower, &b->box.box.upper);
        xVec3SMul(&b->box.center, &b->box.center, _571);
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

xBox& xBox::operator=(const xBox& other) // temp
{
    *(uint32*)&this->upper.x = *(uint32*)&other.upper.x;
    *(uint32*)&this->upper.y = *(uint32*)&other.upper.y;
    *(uint32*)&this->upper.z = *(uint32*)&other.upper.z;
    *(uint32*)&this->lower.x = *(uint32*)&other.lower.x;
    *(uint32*)&this->lower.y = *(uint32*)&other.lower.y;
    *(uint32*)&this->lower.z = *(uint32*)&other.lower.z;

    return *this;
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
        xVec3 v = (bound.box.box.upper - bound.box.box.lower) * _571;

        o.r = xsqrt(SQR(v.x) * mat.right.length2() + SQR(v.y) * mat.up.length2() +
                    SQR(v.z) * mat.at.length2());
        o.center = bound.box.center;

        break;
    }
    }
}

#ifdef NON_MATCHING
float32 xsqrt(float32 x)
{
    const float32 half = _571;
    const float32 three = _640;

    if (x <= _641 || isinf(x))
    {
        return x;
    }

    // non-matching: frsp instruction

    float32 guess = __frsqrte(x);
    guess = half * guess * (three - guess * guess * x);

    if (guess > _644)
    {
        return _642 / guess;
    }

    return _643;
}
#endif

uint32 xBoundSphereHitsOBB(const xSphere* s, const xBox* b, const xMat4x3* m, xCollis* coll)
{
    return xSphereHitsOBB_nu(s, b, m, coll);
}

#ifndef NON_MATCHING
void xBoundHitsBound(const xBound* a, const xBound* b, xCollis* c);
#else
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
#endif

#ifndef NON_MATCHING
static void xBoundOBBIsectRay(const xBox* b, const xMat4x3* m, const xRay3* r, xIsect* isect);
#else
static void xBoundOBBIsectRay(const xBox* b, const xMat4x3* m, const xRay3* r, xIsect* isect)
{
    xRay3 xfr;
    xBox sbox;
    xVec3 scale;
    xMat4x3 mnormal;

    {
        float32 len2 = SQR(m->right.x) + SQR(m->right.y) + SQR(m->right.z);

        if ((float32)iabs(len2 - _642) <= _644)
        {
            // non-matching: incorrect instruction + order

            scale.x = *(const float32*)&_642;

            mnormal.right.x = m->right.x;
            mnormal.right.y = m->right.y;
            mnormal.right.z = m->right.z;
        }
        else if ((float32)iabs(len2) <= _644)
        {
            // non-matching: incorrect order

            scale.x = _641;

            mnormal.right.x = _641;
            mnormal.right.y = _642;
            mnormal.right.z = _641;
        }
        else
        {
            scale.x = xsqrt(len2);

            float32 len_inv = _642 / scale.x;

            mnormal.right.x = m->right.x * len_inv;
            mnormal.right.y = m->right.y * len_inv;
            mnormal.right.z = m->right.z * len_inv;
        }
    }

    {
        float32 len2 = SQR(m->up.x) + SQR(m->up.y) + SQR(m->up.z);

        if ((float32)iabs(len2 - _642) <= _644)
        {
            // non-matching: incorrect instruction + order

            scale.y = *(const float32*)&_642;

            mnormal.up.x = m->up.x;
            mnormal.up.y = m->up.y;
            mnormal.up.z = m->up.z;
        }
        else if ((float32)iabs(len2) <= _644)
        {
            // non-matching: incorrect order

            scale.y = _641;

            mnormal.up.x = _641;
            mnormal.up.y = _642;
            mnormal.up.z = _641;
        }
        else
        {
            scale.y = xsqrt(len2);

            float32 len_inv = _642 / scale.y;

            mnormal.up.x = m->up.x * len_inv;
            mnormal.up.y = m->up.y * len_inv;
            mnormal.up.z = m->up.z * len_inv;
        }
    }

    {
        float32 len2 = SQR(m->at.x) + SQR(m->at.y) + SQR(m->at.z);

        if ((float32)iabs(len2 - _642) <= _644)
        {
            // non-matching: incorrect instruction + order

            scale.z = *(const float32*)&_642;

            mnormal.at.x = m->at.x;
            mnormal.at.y = m->at.y;
            mnormal.at.z = m->at.z;
        }
        else if ((float32)iabs(len2) <= _644)
        {
            // non-matching: incorrect order

            scale.z = _641;

            mnormal.at.x = _641;
            mnormal.at.y = _642;
            mnormal.at.z = _641;
        }
        else
        {
            scale.z = xsqrt(len2);

            float32 len_inv = _642 / scale.z;

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
#endif

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

    if (isect.penned <= _641)
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

    if (isect.penned <= _641)
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

void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    float32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    float32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    float32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}

void xMat4x3Tolocal(xVec3* o, const xMat4x3* m, const xVec3* v)
{
    o->x = v->x - m->pos.x;
    o->y = v->y - m->pos.y;
    o->z = v->z - m->pos.z;

    xMat3x3Tolocal(o, m, o);
}

void xVec3SMul(xVec3* o, const xVec3* v, float32 s)
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

xVec3& xVec3::assign(float32 x, float32 y, float32 z)
{
    this->x = x;
    this->y = y;
    this->z = z;

    return *this;
}

float32 xVec3::length2() const
{
    return this->x * this->x + this->y * this->y + this->z * this->z;
}

xVec3 xVec3::operator*(float32 f) const
{
    xVec3 temp = *this;
    temp *= f;

    return temp;
}

xVec3& xVec3::operator*=(float32 f)
{
    this->x *= f;
    this->y *= f;
    this->z *= f;

    return *this;
}

float32 xVec3::length() const
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

xVec3& xVec3::operator=(const xVec3& other) // temp
{
    this->x = other.x;
    this->y = other.y;
    this->z = other.z;

    return *this;
}

xSphere& xSphere::operator=(const xSphere& other) // temp
{
    *(uint32*)&this->center.x = *(uint32*)&other.center.x;
    *(uint32*)&this->center.y = *(uint32*)&other.center.y;
    *(uint32*)&this->center.z = *(uint32*)&other.center.z;
    this->r = other.r;

    return *this;
}

void xDrawBox(const xBox*)
{
}

void xDrawOBB(const xBox*, const xMat4x3*)
{
}

void xDrawSphere2(const xSphere*, uint32)
{
}
