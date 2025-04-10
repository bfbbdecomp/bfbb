#include "xMath3.h"
#include "iMath3.h"

#include <types.h>
#include <intrin.h>

#include "iMath.h"
#include "xMath.h" // icos and isin
#include "xClimate.h" // xMat3x3Identity
#include "xMathInlines.h" // xasin, xatan2
//#include "xVec3Inlines.h" // xVec3Init, imported, realized xClimate has a declaration as well though.

const xVec3 g_O3 = { 0, 0, 0 };
const xQuat g_IQ = { 0.0f, 0.0f, 0.0f, 1.0f };

S32 xPointInBox(const xBox* b, const xVec3* p)
{
    S32 ret = 0;
    if ((p->x >=b->lower.x) && (p->x <= b->upper.x))
    {
        if ((p->y>= b->lower.y) && (p->y <= b->upper.y))
        {
            if ((p->z >= b->lower.z) && (p->z <= b->upper.z))
            {
                ret = 1;
            }
        }
    }
    return (char)ret;
}

void xMat4x3Copy(xMat4x3* o, const xMat4x3* m)
{
}

void xMat4x3Rot(xMat4x3* m, const xVec3* a, F32 t, const xVec3* p)
{
    xMat4x3 temp;

    xMat3x3RotC(m, a->x, a->y, a->z, t);
    xVec3Copy(&m->pos, p);
    xMat3x3Identity(&temp);
    xVec3Inv(&temp.pos, p);
    xMat4x3Mul(m, &temp, m);

}

/* xMat4x3Mul (xMat4x3 *, xMat4x3 const *, xMat4x3 const *) */
void xMat4x3Mul(xMat4x3* o, const xMat4x3* a, const xMat4x3* b)
{
    xVec3 sp8;

    xMat4x3Toworld(&sp8, b, &a->pos);
    xMat3x3Mul((xMat3x3*)o, (xMat3x3*)a, (xMat3x3*)b);
    xVec3Copy(&o->pos, &sp8);
}

/* xMat3x3Euler (xMat3x3 *, float, float, float) */
void xMat3x3Euler(xMat3x3* m, F32 yaw, F32 pitch, F32 roll)
{
    F32 temp_f0;
    F32 temp_f1;
    F32 temp_f27;
    F32 temp_f28;
    F32 temp_f29;
    F32 temp_f30;
    F32 temp_f31;
    F32 temp_f7;

    temp_f27 = isin(yaw);
    temp_f28 = icos(yaw);
    temp_f29 = isin(pitch);
    temp_f30 = icos(pitch);
    temp_f31 = isin(roll);
    temp_f1 = icos(roll);
    temp_f7 = temp_f27 * temp_f29;
    temp_f0 = temp_f28 * temp_f29;
    m->right.x = (temp_f28 * temp_f1) + (temp_f31 * temp_f7);
    m->right.y = temp_f30 * temp_f31;
    m->right.z = (-temp_f27 * temp_f1) + (temp_f31 * temp_f0);
    m->up.x = (-temp_f28 * temp_f31) + (temp_f1 * temp_f7);
    m->up.y = temp_f30 * temp_f1;
    m->up.z = (temp_f27 * temp_f31) + (temp_f1 * temp_f0);
    m->at.x = temp_f27 * temp_f30;
    m->at.y = -temp_f29;
    m->at.z = temp_f28 * temp_f30;
    m->flags = 0;
}

void xMat4x3Toworld(xVec3* o, const xMat4x3* m, const xVec3* v)
{
}

/* xMat3x3RotC (xMat3x3 *, float, float, float, float) */
void xMat3x3RotC(xMat3x3* m, F32 _x, F32 _y, F32 _z, F32 t)
{
    F32 temp_f0;
    F32 temp_f0_2;
    F32 temp_f1;
    F32 temp_f28;
    F32 temp_f2;
    F32 temp_f3;
    F32 temp_f4;
    F32 temp_f5;
    F32 temp_f6;
    F32 temp_f7;
    F32 temp_f8;

    if (t == 0.0f)
    {
        xMat3x3Identity(m);
        return;
    }
    temp_f28 = icos(t);
    temp_f1 = isin(t);
    temp_f5 = -temp_f1;
    temp_f2 = 1.0f - temp_f28;
    temp_f0 = temp_f2 * _x;
    temp_f8 = temp_f2 * _z;
    temp_f4 = temp_f2 * _y;
    temp_f3 = _y * temp_f0;
    temp_f6 = _x * temp_f8;
    temp_f0_2 = (temp_f1 * _z) + temp_f3;
    m->right.x = (_x * temp_f0) + temp_f28;
    temp_f7 = _z * temp_f4;
    m->right.y = temp_f0_2;
    m->right.z = (temp_f5 * _y) + temp_f6;
    m->up.x = (temp_f5 * _z) + temp_f3;
    m->up.y = (_y * temp_f4) + temp_f28;
    m->up.z = (temp_f1 * _x) + temp_f7;
    m->at.x = (temp_f1 * _y) + temp_f6;
    m->at.y = (temp_f5 * _x) + temp_f7;
    m->at.z = (_z * temp_f8) + temp_f28;
    m->flags = 0;
}

void xMat3x3RotX(xMat3x3* m, F32 t)
{
    F32 cos = icos(t);
    F32 sin = isin(t);

    xVec3Copy(&m->right, &g_X3);
    xVec3Init(&m->up, 0.0f, cos, sin);
    xVec3Init(&m->at, 0.0f, -sin, cos);
    m->flags = 0;
}

void xMat3x3RotY(xMat3x3* m, F32 t)
{
    F32 temp_f31;
    F32 temp_f1;

    temp_f31 = icos(t);
    temp_f1 = isin(t);
    xVec3Init((xVec3*)m, temp_f31, 0.0f, -temp_f1);
    xVec3Copy(&m->up, &g_Y3);
    xVec3Init(&m->at, temp_f1, 0.0f, temp_f31);
    m->flags = 0;
}

void xMat3x3RotZ(xMat3x3* m, F32 t)
{
    F32 cos = icos(t);
    F32 sin = isin(t);

    xVec3Init(&m->right, cos, sin, 0.0f);
    xVec3Init(&m->up, -sin, cos, 0.0f);
    xVec3Copy(&m->at, &g_Z3);
    m->flags = 0;
}

void xMat3x3MulRotC(xMat3x3* o, xMat3x3* m, F32 _x, F32 _y, F32 _z, F32 t)
{
}

void xMat4x3Identity(xMat4x3* m)
{
}

/* xMat3x3Normalize (xMat3x3 *, xMat3x3 const *) */
void xMat3x3Normalize(xMat3x3* o, const xMat3x3* m)
{
    xVec3Normalize((xVec3*)o, (xVec3*)m);
    xVec3Normalize(&o->up, &m->up);
    xVec3Normalize(&o->at, &m->at);
}

void xMat4x3Tolocal(xVec3* o, const xMat4x3* m, const xVec3* v)
{
}

/* xMat3x3Tolocal (xVec3 *, xMat3x3 const *, xVec3 const *) */
void xMat3x3Tolocal(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    F32 temp_f0;
    F32 temp_f0_2;
    F32 temp_f1;
    F32 temp_f1_2;
    F32 temp_f29;
    F32 temp_f2;
    F32 temp_f30;
    F32 temp_f31;
    F32 temp_f6;
    F32 temp_f7;
    F32 temp_f8;
    F32 temp_f8_2;

    temp_f1 = m->right.x;
    temp_f0 = m->right.y;
    temp_f2 = m->up.x;
    temp_f1_2 = m->up.y;
    temp_f8 = m->at.x;
    temp_f0_2 = m->at.y;
    temp_f6 = m->right.z;
    temp_f7 = m->up.z;
    temp_f8_2 = m->at.z;
    temp_f31 = (temp_f6 * temp_f6) + ((temp_f1 * temp_f1) + (temp_f0 * temp_f0));
    temp_f30 = (temp_f7 * temp_f7) + ((temp_f2 * temp_f2) + (temp_f1_2 * temp_f1_2));
    temp_f29 = (temp_f8_2 * temp_f8_2) + ((temp_f8 * temp_f8) + (temp_f0_2 * temp_f0_2));
    xMat3x3LMulVec(o, m, v);
    o->x /= temp_f31;
    o->y /= temp_f30;
    o->z /= temp_f29;
}

/* xMat4x3MoveLocalRight (xMat4x3 *, float) */
void xMat4x3MoveLocalRight(xMat4x3* m, F32 mag)
{
    m->pos.x += m->right.x * mag;
    m->pos.y += m->right.y * mag;
    m->pos.z += m->right.z * mag;
}

/* xMat4x3MoveLocalAt (xMat4x3 *, float) */
void xMat4x3MoveLocalAt(xMat4x3* m, F32 mag)
{
    m->pos.x += m->at.x * mag;
    m->pos.y += m->at.y * mag;
    m->pos.z += m->at.z * mag;
}

/* xMat4x3MoveLocalUp (xMat4x3 *, float) */
void xMat4x3MoveLocalUp(xMat4x3* m, F32 mag)
{
    m->pos.x += m->up.x * mag;
    m->pos.y += m->up.y * mag;
    m->pos.z += m->up.z * mag;
}

/* xMat3x3GetEuler (xMat3x3 const *, xVec3 *) */
void xMat3x3GetEuler(const xMat3x3* m, xVec3* a)
{
    F32 yaw = -xasin(m->at.y);

    F32 roll;
    F32 pitch;

    if (yaw < (PI / 2))
    {
        if (yaw > -(PI / 2))
        {
            pitch = xatan2(m->at.x, m->at.z);
            roll = xatan2(m->right.y, m->up.y);
        }
        else
        {
            pitch = -xatan2(-m->up.x, m->right.x);
            roll = 0.0f;
        }
    }
    else
    {
        pitch = xatan2(-m->up.x, m->right.x);
        roll = 0.0f;
    }

    a->x = pitch;
    a->y = yaw;
    a->z = roll;
}

/* xMat3x3Euler (xMat3x3 *, xVec3 const *) */
void xMat3x3Euler(xMat3x3* m, const xVec3* ypr)
{
    xMat3x3Euler(m, ypr->x, ypr->y, ypr->z);
}

/* xQuatToMat (xQuat const *, xMat3x3 *) */
void xQuatToMat(const xQuat* q, xMat3x3* m)
{
    F32 tx = (2.0f * q->v.x);
    F32 ty = (2.0f * q->v.y);
    F32 tz = (2.0f * q->v.z);
    F32 tsx = tx * q->s;
    F32 tsy = ty * q->s;
    F32 tsz = tz * q->s;
    F32 txx = tx * q->v.x;
    F32 txy = ty * q->v.x;
    F32 txz = tz * q->v.x;
    F32 tyy = ty * q->v.y;
    F32 tyz = tz * q->v.y;
    F32 tzz = tz * q->v.z;

    m->right.x = (1.0f - tyy) - tzz;
    m->right.y = txy - tsz;
    m->right.z = txz + tsy;

    m->up.x = txy + tsz;
    m->up.y = (1.0f - tzz) - txx;
    m->up.z = tyz - tsx;

    m->at.x = txz - tsy;
    m->at.y = tyz + tsx;
    m->at.z = (1.0f - txx) - tyy;

    m->flags = 0;
}

/* xQuatDiff (xQuat *, xQuat const *, xQuat const *) */
void xQuatDiff(xQuat* o, const xQuat* a, const xQuat* b)
{
    xQuatConj(o, a);
    xQuatMul(o, o, b);
    if (o->s < 0.0f)
    {
        xQuatFlip(o, o);
    }
}

F32 xQuatGetAngle(const xQuat* q)
{
    F32 angle;
    angle = 5.0;
    return angle;
}

/* xQuatFromMat (xQuat *, xMat3x3 const *) */
void xQuatFromMat(xQuat* q, const xMat3x3* m)
{
    static S32 nxt[3] = { 1, 2, 0 };

    F32 temp_f1;
    F32 temp_f1_2;
    F32 temp_f1_3;
    F32 temp_f5;
    F32 temp_f6;
    S32 temp_r25;
    F32 temp_r28;
    F32 temp_r30;
    F32 temp_r31;
    F32 temp_r8;
    S32 var_r29;

    temp_f1 = m->at.z + (m->right.x + m->up.y);
    if (temp_f1 > 0.0f)
    {
        temp_f1_2 = xsqrt(1.0f + temp_f1);
        q->s = 0.5f * temp_f1_2;
        temp_f5 = 0.5f / temp_f1_2;
        q->v.x = temp_f5 * (m->at.y - m->up.z);
        q->v.y = temp_f5 * (m->right.z - m->at.x);
        q->v.z = temp_f5 * (m->up.x - m->right.y);
        return;
    }
    var_r29 = 0;
    if (m->up.y > m->right.x)
    {
        var_r29 = 1;
    }
    // if (m->at.z > F32 (*(m + (var_r29 * 0x14)))) {
    //     var_r29 = 2;
    // }
    // temp_r31 = var_r29 * 4;
    // temp_r25 = nxt[var_r29];
    // temp_r30 = temp_r25 * 4;
    // temp_r28 = nxt[temp_r25];
    // temp_f1_3 = xsqrt(1.0f + ((*(m + (var_r29 * 0x14)) - *(m + (temp_r25 * 0x14))) - *(m + (temp_r28 * 0x14))));
    // if ((F32) fabs(temp_f1_3) < 0.00001f) {
    //     xQuatCopy(q, &g_IQ);
    //     return;
    // }
    // temp_r8 = temp_r28 * 4;
    // *(q + temp_r31) = 0.5f * temp_f1_3;
    // temp_f6 = 0.5f / temp_f1_3;
    // q->unkC = temp_f6 * (*(m + ((temp_r25 + temp_r8) * 4)) - *(m + ((temp_r28 + temp_r30) * 4)));
    // *(q + temp_r30) = temp_f6 * (*(m + ((var_r29 + temp_r30) * 4)) + *(m + ((temp_r25 + temp_r31) * 4)));
    // *(q + temp_r8) = temp_f6 * (*(m + ((var_r29 + temp_r8) * 4)) + *(m + ((temp_r28 + temp_r31) * 4)));
    // if (q->unkC < 0.0f) {
    //     xQuatFlip(q, q);
    // }
}

void xQuatFromAxisAngle(xQuat* q, const xVec3* a, F32 t)
{
    F32 t_2;

    if (t == 0.0f)
    {
        xQuatCopy(q, &g_IQ);
    }
    else
    {
        t_2 = isin(t * 0.5f);
        q->s = icos((t * 0.5f));
        xVec3SMul(&q->v, a, t_2);
    }
}

void xQuatToAxisAngle(const xQuat* q, xVec3* a, F32* t)
{
    *t = 2.0f * xacos(q->s);
    xVec3Normalize(a, &q->v);
}

/* xQuatSlerp (xQuat *, xQuat const *, xQuat const *, float) */
void xQuatSlerp(xQuat* q, const xQuat* a, const xQuat* b, F32 t)
{
    xQuat sp28;
    xQuat sp18;
    F32 sp14;
    F32 sp10;
    F32 spC;
    F32 sp8;
    F32 temp_f0;
    F32 temp_f1;
    F32 temp_f28;
    F32 temp_f2;
    F32 temp_f3;
    F32 temp_f4;
    F32 var_f1;
    F32 var_f29;
    F32 var_f30;
    const xQuat* var_r31;

    var_r31 = b;
    var_f1 = xQuatDot(a, var_r31);
    if (var_f1 < 0.0f)
    {
        var_f1 = -var_f1;
        temp_f4 = -var_r31->v.x;
        temp_f0 = var_r31->s;
        temp_f3 = -var_r31->v.y;
        temp_f2 = -var_r31->v.z;
        var_r31 = (xQuat*)&sp8;
        sp8 = temp_f4;
        spC = temp_f3;
        sp10 = temp_f2;
        sp14 = -temp_f0;
    }
    //M2C_ERROR(/* unknown instruction: cror eq, gt, eq */);
    if (var_f1 == 0.999f)
    {
        var_f30 = t;
        var_f29 = 1.0f - t;
    }
    else
    {
        temp_f1 = xacos(var_f1);
        temp_f28 = 1.0f / isin(temp_f1);
        var_f29 = temp_f28 * isin((1.0f - t) * temp_f1);
        var_f30 = temp_f28 * isin(t * temp_f1);
    }
    xQuatSMul(&sp28, a, var_f29);
    xQuatSMul(&sp18, var_r31, var_f30);
    xQuatAdd(q, &sp28, &sp18);
    xQuatNormalize(q, q);
}

/* xQuatMul (xQuat *, xQuat const *, xQuat const *) */
void xQuatMul(xQuat* o, const xQuat* a, const xQuat* b)
{
    F32 temp_f10;
    F32 temp_f11;
    F32 temp_f4;
    F32 temp_f5;
    F32 temp_f6;
    F32 temp_f7;
    F32 temp_f8;
    F32 temp_f9;

    temp_f4 = b->s;
    temp_f11 = a->v.x;
    temp_f5 = a->v.y;
    temp_f8 = b->v.x;
    temp_f7 = a->s;
    temp_f9 = a->v.z;
    temp_f6 = b->v.y;
    temp_f10 = b->v.z;
    o->v.x = -((temp_f9 * temp_f6) -
               ((temp_f5 * temp_f10) + ((temp_f7 * temp_f8) + (temp_f11 * temp_f4))));
    o->v.y = -((temp_f11 * temp_f10) -
               ((temp_f9 * temp_f8) + ((temp_f7 * temp_f6) + (temp_f5 * temp_f4))));
    o->v.z = -((temp_f5 * temp_f8) -
               ((temp_f11 * temp_f6) + ((temp_f7 * temp_f10) + (temp_f9 * temp_f4))));
    o->s = -((temp_f9 * temp_f10) -
             -((temp_f5 * temp_f6) - ((temp_f7 * temp_f4) - (temp_f11 * temp_f8))));
    xQuatNormalize(o, o);
}

void xQuatConj(xQuat* o, const xQuat* q)
{
}

/* xQuatSMul (xQuat *, xQuat const *, float) */
void xQuatSMul(xQuat* q, const xQuat* a, F32 t)
{
    q->s = a->s * t;
    xVec3SMul((xVec3*)q, (xVec3*)a, t);
}

/* xQuatAdd (xQuat *, xQuat const *, xQuat const *) */
void xQuatAdd(xQuat* q, const xQuat* a, const xQuat* b)
{
    q->s = a->s + b->s;
    xVec3Add((xVec3*)q, (xVec3*)a, (xVec3*)b);
}

void xMat3x3LookAt(xMat3x3* m, const xVec3* pos, const xVec3* at)
{
}

/* xMat3x3LookVec (xMat3x3 *, xVec3 const *) */
F32 xMat3x3LookVec(xMat3x3* m, const xVec3* at)
{
    F32 temp_f2;
    F32 temp_f31;
    xVec3* temp_r3;

    temp_f31 = xVec3Normalize(&m->at, at);
    temp_r3 = &m->at;
    xVec3Inv(temp_r3, temp_r3);
    if ((F32)__fabs(1.0f -  m->at.y) < 0.00001f)
    {
        m->right.x = 1.0f;
        m->right.y = 0.0f;
        m->right.z = 0.0f;
        m->up.x = 0.0f;
        m->up.y = 0.0f;
        m->up.z = 1.0f;
        m->at.x = 0.0f;
        m->at.y = -1.0f;
        m->at.z = 0.0f;
        return temp_f31;
    }
    if ((F32)__fabs(1.0f +  m->at.y) < 0.00001f)
    {
        m->right.x = -1.0f;
        m->right.y = 0.0f;
        m->right.z = 0.0f;
        m->up.x = 0.0f;
        m->up.y = 0.0f;
        m->up.z = -1.0f;
        m->at.x = 0.0f;
        m->at.y = 1.0f;
        m->at.z = 0.0f;
        return temp_f31;
    }
    if (((F32)__fabs(at->z) < 0.00001f) && ((F32)__fabs(at->x) < 0.00001f))
    {
        m->right.x = 1.0f;
        m->right.y = 0.0f;
        m->right.z = 0.0f;
        m->up.x = 0.0f;
        m->up.y = 1.0f;
        m->up.z = 0.0f;
        m->at.x = 0.0f;
        m->at.y = 0.0f;
        m->at.z = 1.0f;
        return 0.0f;
    }
    m->right.x = m->at.z;
    m->right.y = 0.0f;
    m->right.z = -m->at.x;
    xVec3Normalize((xVec3*)m, (xVec3*)m);
    xVec3Cross(&m->up, &m->at, (xVec3*)m);
    xVec3Cross((xVec3*)m, &m->up, &m->at);
    m->flags = 0;
    return temp_f31;
}

void xBoxInitBoundOBB(xBox* o, const xBox* b, const xMat4x3* m)
{
}

void xMat3x3Scale(xMat3x3* m, const xVec3* s)
{
}

/* xMat3x3ScaleC (xMat3x3 *, float, float, float) */
void xMat3x3ScaleC(xMat3x3* m, F32 x, F32 y, F32 z)
{
    xVec3Init((xVec3*)m, x, 0.0f, 0.0f);
    xVec3Init(&m->up, 0.0f, y, 0.0f);
    xVec3Init(&m->at, 0.0f, 0.0f, z);
    m->flags = 0;
}

void xMat3x3RMulRotY(xMat3x3* o, const xMat3x3* m, F32 t)
{
    F32 cos = icos(t);
    F32 sin = isin(t);
    if (o == m)
    {
        F32 temp = o->right.z;
        o->right.z = ((cos * o->right.z) - (sin * o->right.x));
        o->right.x = ((cos * o->right.x) + (sin * temp));

        temp = o->up.z;
        o->up.z = ((cos * temp) - (sin * o->up.x));
        o->up.x = ((cos * o->up.x) + (sin * temp));

        temp = o->at.z;
        o->at.z = ((cos * temp) - (sin * o->at.x));
        o->at.x = ((cos * o->at.x) + (sin * temp));
    }
    else
    {
        o->right.x = (cos * m->right.x + (sin * m->right.z));
        o->right.y = m->right.y;
        o->right.z = (cos * m->right.z - (sin * m->right.x));

        o->up.x = (cos * m->up.x + (sin * m->up.z));
        o->up.y = m->up.y;
        o->up.z = (cos * m->up.z - (sin * m->up.x));

        o->at.x = (cos * m->at.x + (sin * m->at.z));
        o->at.y = m->at.y;
        o->at.z = (cos * m->at.z - (sin * m->at.x));

        o->flags = 0;
    }
}

void xMat3x3Transpose(xMat3x3* o, const xMat3x3* m)
{
    F32 temp;

    if (o == m)
    {
        temp = o->right.y;
        o->right.y = o->up.x;
        o->up.x = temp;

        temp = o->right.z;
        o->right.z = o->at.x;
        o->at.x = temp;

        temp = o->up.z;
        o->up.z = o->at.y;
        o->at.y = temp;

        return;
    }

    o->right.x = m->right.x;
    o->right.y = m->up.x;
    o->right.z = m->at.x;

    o->up.x = m->right.y;
    o->up.y = m->up.y;
    o->up.z = m->at.y;

    o->at.x = m->right.z;
    o->at.y = m->up.z;
    o->at.z = m->at.z;

    o->flags = 0;
}

/* xMat3x3Mul (xMat3x3 *, xMat3x3 const *, xMat3x3 const *) */
void xMat3x3Mul(xMat3x3* o, const xMat3x3* a, const xMat3x3* b)
{
    xMat3x3 sp8;
    F32 temp_f0;
    F32 temp_f0_2;
    F32 temp_f10;
    F32 temp_f10_2;
    F32 temp_f12;
    F32 temp_f13;
    F32 temp_f1;
    F32 temp_f25;
    F32 temp_f26;
    F32 temp_f27;
    F32 temp_f29;
    F32 temp_f2;
    F32 temp_f30;
    F32 temp_f3;
    F32 temp_f4;
    F32 temp_f4_2;
    F32 temp_f5;
    F32 temp_f9;
    U8 var_r0;
    xMat3x3* var_r6;

    var_r0 = 0;
    if ((o == a) || (o == b))
    {
        var_r0 = 1;
    }
    if (var_r0 != 0)
    {
        var_r6 = &sp8;
    }
    else
    {
        var_r6 = o;
    }
    temp_f4 = a->right.y;
    temp_f3 = b->up.x;
    temp_f2 = b->up.y;
    temp_f1 = a->up.y;
    temp_f10 = b->up.z;
    temp_f0 = a->at.y;
    temp_f26 = a->right.x;
    temp_f27 = b->right.x;
    temp_f30 = b->right.y;
    temp_f9 = a->up.x;
    temp_f12 = b->right.z;
    temp_f4_2 = a->at.x;
    temp_f25 = a->right.z;
    temp_f0_2 = b->at.x;
    temp_f29 = b->at.y;
    temp_f13 = b->at.z;
    temp_f10_2 = a->up.z;
    temp_f5 = a->at.z;
    var_r6->right.x = (temp_f25 * temp_f0_2) + ((temp_f26 * temp_f27) + (temp_f4 * temp_f3));
    var_r6->flags = 0;
    var_r6->right.y = (temp_f25 * temp_f29) + ((temp_f26 * temp_f30) + (temp_f4 * temp_f2));
    var_r6->right.z = (temp_f25 * temp_f13) + ((temp_f26 * temp_f12) + (temp_f4 * temp_f10));
    var_r6->up.x = (temp_f10_2 * temp_f0_2) + ((temp_f9 * temp_f27) + (temp_f1 * temp_f3));
    var_r6->up.y = (temp_f10_2 * temp_f29) + ((temp_f9 * temp_f30) + (temp_f1 * temp_f2));
    var_r6->up.z = (temp_f10_2 * temp_f13) + ((temp_f9 * temp_f12) + (temp_f1 * temp_f10));
    var_r6->at.x = (temp_f5 * temp_f0_2) + ((temp_f4_2 * temp_f27) + (temp_f0 * temp_f3));
    var_r6->at.y = (temp_f5 * temp_f29) + ((temp_f4_2 * temp_f30) + (temp_f0 * temp_f2));
    var_r6->at.z = (temp_f5 * temp_f13) + ((temp_f4_2 * temp_f12) + (temp_f0 * temp_f10));
    // if (var_r0 != 0) {
    //     xMat3x3Copy__FP7xMat3x3PC7xMat3x3(o, var_r6);
    // }
}

void xMat3x3SMul(xMat3x3*, const xMat3x3*, F32)
{
}

void xBoxFromLine(xBox& box, const xLine3& line)
{
}

void xBoxFromRay(xBox& box, const xRay3& ray)
{
}

void xBoxUnion(xBox& a, const xBox& b, const xBox& c)
{
    a.upper.x = MAX(b.upper.x, c.upper.x);
    a.upper.y = MAX(b.upper.y, c.upper.y);
    a.upper.z = MAX(b.upper.z, c.upper.z);

    a.lower.x = MIN(b.lower.x, c.lower.x);
    a.lower.y = MIN(b.lower.y, c.lower.y);
    a.lower.z = MIN(b.lower.z, c.lower.z);
}

// Equivalent: regalloc(?)
void xMat3x3LMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    o->x = (v->x * m->right.x) + (v->y * m->right.y) + (v->z * m->right.z);
    o->y = (m->up.x    * v->x) + (m->up.y    * v->y) + (m->up.z    * v->z);
    o->z = (m->at.x    * v->x) + (m->at.y    * v->y) + (m->at.z    * v->z);
}
