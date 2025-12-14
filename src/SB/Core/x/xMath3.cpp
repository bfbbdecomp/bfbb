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
const xVec3 g_X3 = { 1, 0, 0 };
const xVec3 g_Y3 = { 0, 1, 0 };
const xVec3 g_Z3 = { 0, 0, 1 };
const xVec3 g_NX3 = { -1, 0, 0 };
const xVec3 g_NY3 = { 0, -1, 0 };
const xVec3 g_NZ3 = { 0, 0, -1 };
const xVec3 g_Onez = { 1, 1, 1 };
const xQuat g_IQ = { 0.0f, 0.0f, 0.0f, 1.0f };
xMat4x3 g_I3;

void xMath3Init()
{
    iMath3Init();

    g_I3.right.x = g_X3.x;
    g_I3.right.y = g_X3.y;
    g_I3.right.z = g_X3.z;
    g_I3.up.x = g_Y3.x;
    g_I3.up.y = g_Y3.y;
    g_I3.up.z = g_Y3.z;
    g_I3.at.x = g_Z3.x;
    g_I3.at.y = g_Z3.y;
    g_I3.at.z = g_Z3.z;
    g_I3.pos.x = g_O3.x;
    g_I3.pos.y = g_O3.y;
    g_I3.pos.z = g_O3.z;
}

void xLine3VecDist2(const xVec3* p1, const xVec3* p2, const xVec3* v, xIsect* isx)
{
    xVec3 ldir;
    xVec3Sub(&ldir, p2, p1);
    xVec3Sub(&isx->norm, v, p1);

    F32 ldirdotlv = xVec3Dot(&ldir, &isx->norm);
    if (ldirdotlv <= 0.0f)
    {
        isx->dist = xVec3Length2(&isx->norm);
        return;
    }

    F32 ldirlen2 = xVec3Length2(&ldir);
    if (ldirdotlv >= ldirlen2)
    {
        xVec3Sub(&isx->norm, v, p2);
        isx->dist = xVec3Length2(&isx->norm);
        return;
    }

    F32 lvlen2 = xVec3Length2(&isx->norm);
    isx->dist = lvlen2 - SQ(ldirdotlv) / ldirlen2;
}

S32 xPointInBox(const xBox* b, const xVec3* p)
{
    S32 ret = 0;
    if ((p->x >= b->lower.x) && (p->x <= b->upper.x))
    {
        if ((p->y >= b->lower.y) && (p->y <= b->upper.y))
        {
            if ((p->z >= b->lower.z) && (p->z <= b->upper.z))
            {
                ret = 1;
            }
        }
    }
    return (char)ret;
}

void xBoxInitBoundOBB(xBox* o, const xBox* b, const xMat4x3* m)
{
    xVec3 boxcent;
    boxcent.x = 0.5f * (b->lower.x + b->upper.x);
    boxcent.y = 0.5f * (b->lower.y + b->upper.y);
    boxcent.z = 0.5f * (b->lower.z + b->upper.z);

    F32 xmax = xabs(m->right.x * (b->upper.x - boxcent.x));
    F32 ymax = xabs(m->right.y * (b->upper.x - boxcent.x));
    F32 zmax = xabs(m->right.z * (b->upper.x - boxcent.x));

    xmax += xabs(m->up.x * (b->upper.y - boxcent.y));
    ymax += xabs(m->up.y * (b->upper.y - boxcent.y));
    zmax += xabs(m->up.z * (b->upper.y - boxcent.y));

    xmax += xabs(m->at.x * (b->upper.z - boxcent.z));
    ymax += xabs(m->at.y * (b->upper.z - boxcent.z));
    zmax += xabs(m->at.z * (b->upper.z - boxcent.z));

    xMat4x3Toworld(&boxcent, m, &boxcent);

    o->lower.x = boxcent.x - xmax;
    o->lower.y = boxcent.y - ymax;
    o->lower.z = boxcent.z - zmax;
    o->upper.x = boxcent.x + xmax;
    o->upper.y = boxcent.y + ymax;
    o->upper.z = boxcent.z + zmax;
}

void xBoxInitBoundCapsule(xBox* b, const xCapsule* c)
{
    if (c->start.x < c->end.x)
    {
        b->lower.x = c->start.x - c->r;
        b->upper.x = c->end.x + c->r;
    }
    else
    {
        b->lower.x = c->end.x - c->r;
        b->upper.x = c->start.x + c->r;
    }

    if (c->start.y < c->end.y)
    {
        b->lower.y = c->start.y - c->r;
        b->upper.y = c->end.y + c->r;
    }
    else
    {
        b->lower.y = c->end.y - c->r;
        b->upper.y = c->start.y + c->r;
    }

    if (c->start.z < c->end.z)
    {
        b->lower.z = c->start.z - c->r;
        b->upper.z = c->end.z + c->r;
    }
    else
    {
        b->lower.z = c->end.z - c->r;
        b->upper.z = c->start.z + c->r;
    }
}

void xBoxFromCone(xBox& box, const xVec3& center, const xVec3& dir, F32 dist, F32 r1, F32 r2)
{
    xBoxFromCircle(box, center, dir, r1);

    xBox temp;
    xBoxFromCircle(temp, center + dir * dist, dir, r2);

    xBoxUnion(box, box, temp);
}

void xMat3x3Normalize(xMat3x3* o, const xMat3x3* m)
{
    xVec3Normalize(&o->right, &m->right);
    xVec3Normalize(&o->up, &m->up);
    xVec3Normalize(&o->at, &m->at);
}

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

void xMat4x3MoveLocalRight(xMat4x3* m, F32 mag)
{
    m->pos.x += m->right.x * mag;
    m->pos.y += m->right.y * mag;
    m->pos.z += m->right.z * mag;
}

void xMat4x3MoveLocalUp(xMat4x3* m, F32 mag)
{
    m->pos.x += m->up.x * mag;
    m->pos.y += m->up.y * mag;
    m->pos.z += m->up.z * mag;
}

void xMat4x3MoveLocalAt(xMat4x3* m, F32 mag)
{
    m->pos.x += m->at.x * mag;
    m->pos.y += m->at.y * mag;
    m->pos.z += m->at.z * mag;
}

F32 xMat3x3LookVec(xMat3x3* m, const xVec3* at)
{
    F32 vec_len = xVec3Normalize(&m->at, at);
    xVec3Inv(&m->at, &m->at);

    if (FABS(1.0f - m->at.y) < 0.00001f)
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
        return vec_len;
    }
    if (FABS(1.0f + m->at.y) < 0.00001f)
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
        return vec_len;
    }
    if ((FABS(at->z) < 0.00001f) && (FABS(at->x) < 0.00001f))
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
    return vec_len;
}

void xMat3x3Euler(xMat3x3* m, const xVec3* ypr)
{
    xMat3x3Euler(m, ypr->x, ypr->y, ypr->z);
}

void xMat3x3Euler(xMat3x3* m, F32 yaw, F32 pitch, F32 roll)
{
    F32 isy = isin(yaw);
    F32 icy = icos(yaw);
    F32 isp = isin(pitch);
    F32 icp = icos(pitch);
    F32 isr = isin(roll);
    F32 icr = icos(roll);
    F32 is_prod = icy * isp;
    F32 ic_prod = isy * isp;

    m->right.x = (icy * icr) + (isr * ic_prod);
    m->right.y = icp * isr;
    m->right.z = (-isy * icr) + (isr * is_prod);
    m->up.x = (-icy * isr) + (icr * ic_prod);
    m->up.y = icp * icr;
    m->up.z = (isy * isr) + (icr * is_prod);
    m->at.x = isy * icp;
    m->at.y = -isp;
    m->at.z = icy * icp;
    m->flags = 0;
}

void xMat3x3RotC(xMat3x3* m, F32 _x, F32 _y, F32 _z, F32 t)
{
    F32 sin;
    F32 cos;
    F32 c;

    if (t == 0.0f)
    {
        xMat3x3Identity(m);
        return;
    }

    cos = icos(t);
    sin = isin(t);

    c = 1.0f - cos;

    m->right.x = (c * _x * _x) + cos;
    m->right.y = (sin * _z) + (c * _x * _y);
    m->right.z = (-sin * _y) + (c * _z * _x);

    m->up.x = (-sin * _z) + (c * _x * _y);
    m->up.y = (c * _y * _y) + cos;
    m->up.z = (sin * _x) + (c * _y * _z);

    m->at.x = (sin * _y) + (c * _z * _x);
    m->at.y = (-sin * _x) + (c * _y * _z);
    m->at.z = (c * _z * _z) + cos;

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
    F32 cos = icos(t);
    F32 sin = isin(t);

    xVec3Init((xVec3*)m, cos, 0.0f, -sin);
    xVec3Copy(&m->up, &g_Y3);
    xVec3Init(&m->at, sin, 0.0f, cos);
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
        F32 temp1 = o->right.x;
        F32 temp2 = o->right.z;
        o->right.z = ((cos * temp2) - (sin * temp1));
        o->right.x = ((cos * temp1) + (sin * temp2));

        temp1 = o->up.x;
        temp2 = o->up.z;
        o->up.z = ((cos * temp2) - (sin * temp1));
        o->up.x = ((cos * temp1) + (sin * temp2));

        temp1 = o->at.x;
        temp2 = o->at.z;
        o->at.z = ((cos * temp2) - (sin * temp1));
        o->at.x = ((cos * temp1) + (sin * temp2));
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

void xMat3x3Mul(xMat3x3* o, const xMat3x3* a, const xMat3x3* b)

{
    xMat3x3 temp;
    xMat3x3* tp;
    U32 usetemp;

    if (o == a || o == b)
    {
        usetemp = 1;
    }

    if (usetemp != 0)
    {
        tp = &temp;
    }
    else
    {
        tp = o;
    }

    F32 arx = a->right.x;
    F32 ary = a->right.y;
    F32 arz = a->right.z;
    F32 aux = a->up.x;
    F32 auy = a->up.y;
    F32 auz = a->up.z;
    F32 aax = a->at.x;
    F32 aay = a->at.y;
    F32 aaz = a->at.z;

    F32 brx = b->right.x;
    F32 bry = b->right.y;
    F32 brz = b->right.z;
    F32 bux = b->up.x;
    F32 buy = b->up.y;
    F32 buz = b->up.z;
    F32 bax = b->at.x;
    //F32 bay = b->at.y;
    F32 baz = b->at.z;

    // Right
    tp->right.x = arx * brx + ary * bux + arz * bax;
    tp->right.y = arx * bry + ary * buy + arz * b->at.y;
    tp->right.z = arx * brz + ary * buz + arz * baz;

    // Up
    tp->up.x = aux * brx + auy * bux + auz * bax;
    tp->up.y = aux * bry + auy * buy + auz * b->at.y;
    tp->up.z = aux * brz + auy * buz + auz * baz;

    // At
    tp->at.x = aax * brx + aay * bux + aaz * bax;
    tp->at.y = aax * bry + aay * buy + aaz * b->at.y;
    tp->at.z = aax * brz + aay * buz + aaz * baz;

    tp->flags = 0;
    if (usetemp != 0)
    {
        xMat3x3Copy(o, tp);
    }
    return;
}

void xMat3x3LMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    F32 y = (m->up.x * v->x) + (m->up.y * v->y) + (m->up.z * v->z);
    F32 z = (m->at.x * v->x) + (m->at.y * v->y) + (m->at.z * v->z);

    o->x = (m->right.x * v->x) + (m->right.y * v->y) + (m->right.z * v->z);
    o->y = y;
    o->z = z;
}

void xMat3x3Tolocal(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    F32 sumRt = (m->right.x * m->right.x) + (m->right.y * m->right.y) + (m->right.z * m->right.z);
    F32 sumUp = (m->up.x * m->up.x) + (m->up.y * m->up.y) + (m->up.z * m->up.z);
    F32 sumAt = (m->at.x * m->at.x) + (m->at.y * m->at.y) + (m->at.z * m->at.z);
    xMat3x3LMulVec(o, m, v);
    o->x /= sumRt;
    o->y /= sumUp;
    o->z /= sumAt;
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

void xMat4x3Mul(xMat4x3* o, const xMat4x3* a, const xMat4x3* b)
{
    xVec3 v;

    xMat4x3Toworld(&v, b, &a->pos);
    xMat3x3Mul((xMat3x3*)o, (xMat3x3*)a, (xMat3x3*)b);
    xVec3Copy(&o->pos, &v);
}

// Matching in Ratatouille, minus debug stuff: https://decomp.me/scratch/VthMZ
void xQuatFromMat(xQuat* q, const xMat3x3* m)
{
    F32* mp = (F32*)m;
    F32* qvp = (F32*)q;
    F32 tr = m->right.x + m->up.y + m->at.z;
    F32 root;

    if (tr > 0.0f)
    {
        root = xsqrt(1.0f + tr);
        q->s = 0.5f * root;
        root = 0.5f / root;
        q->v.x = root * (m->at.y - m->up.z);
        q->v.y = root * (m->right.z - m->at.x);
        q->v.z = root * (m->up.x - m->right.y);
    }
    else
    {
        static S32 nxt[3] = { 1, 2, 0 };

        S32 i = 0;
        if (mp[5] > mp[0])
            i = 1;
        if (mp[10] > mp[i * 5])
            i = 2;

        S32 j = nxt[i];
        S32 k = nxt[j];

        root = xsqrt(mp[i * 5] - mp[j * 5] - mp[k * 5] + 1.0f);
        if (xabs(root) < 1e-5f)
        {
            xQuatCopy(q, &g_IQ);
            return;
        }

        qvp[i] = 0.5f * root;
        root = 0.5f / root;
        q->s = root * (mp[j + k * 4] - mp[k + j * 4]);
        qvp[j] = root * (mp[i + j * 4] + mp[j + i * 4]);
        qvp[k] = root * (mp[i + k * 4] + mp[k + i * 4]);

        if (q->s < 0.0f)
        {
            xQuatFlip(q, q);
        }
    }
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

void xQuatToAxisAngle(const xQuat* q, xVec3* a, F32* t)
{
    *t = 2.0f * xacos(q->s);
    xVec3Normalize(a, &q->v);
}

F32 xQuatNormalize(xQuat* o, const xQuat* q)
{
    F32 one_len, len, len2;
    len2 = xQuatLength2(q);
    if (len2 == 1.0f)
    {
        if (o != q)
        {
            xQuatCopy(o, q);
        }
        return 1.0f;
    }

    if (len2 == 0.0f)
    {
        if (o != q)
        {
            xQuatCopy(o, &g_IQ);
        }
        return 0.0f;
    }

    len = xsqrt(len2);
    one_len = 1.0f / len;
    xQuatSMul(o, q, one_len);
    return len;
}

void xQuatSlerp(xQuat* q, const xQuat* a, const xQuat* b, F32 t)
{
    F32 one_sintheta;
    F32 temp_t;
    F32 abdot;
    xQuat b2;

    xQuat* qp1 = 0;
    xQuat* qp2 = 0;

    abdot = xQuatDot(a, b);
    if (abdot < 0.0)
    {
        abdot = -abdot;
        b2.v.x = -b->v.x;
        b2.v.y = -b->v.y;
        b2.v.z = -b->v.z;
        b2.s = -b->s;
        b = &b2;
    }
    if (0.999 <= abdot)
    {
        temp_t = 1.0 - t;
    }
    else
    {
        abdot = xacos(abdot);
        one_sintheta = 1.0 / isin(abdot);
        temp_t = isin(t);
        temp_t = one_sintheta * temp_t;
        abdot = isin(t * abdot);
        t = one_sintheta * abdot;
    }

    xQuatSMul(qp1, a, temp_t);
    xQuatSMul(qp2, b, t);
    xQuatAdd(q, qp1, qp2);
    xQuatNormalize(q, q);
    return;
}

void xQuatMul(xQuat* o, const xQuat* a, const xQuat* b)

{
    o->v.z = (a->v.x * b->v.y + a->v.z * b->s + a->s * b->v.z) - a->v.y * b->v.x;
    o->v.y = (a->v.z * b->v.x + a->v.y * b->s + a->s * b->v.y) - a->v.x * b->v.z;
    o->v.x = (a->v.y * b->v.z + a->v.x * b->s + a->s * b->v.x) - a->v.z * b->v.y;
    o->s = ((a->s * b->s - a->v.x * b->v.x) - a->v.y * b->v.y) - a->v.z * b->v.z;
    xQuatNormalize(o, o);
    return;
}

void xQuatDiff(xQuat* o, const xQuat* a, const xQuat* b)
{
    xQuatConj(o, a);
    xQuatMul(o, o, b);
    if (o->s < 0.0f)
    {
        xQuatFlip(o, o);
    }
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

void xBoxFromCircle(xBox& box, const xVec3& center, const xVec3& dir, F32 r)
{
    xVec3 temp_vec1;
    xVec3 temp_vec2;

    static xVec3 stat_vec;
    static F32 stat_f;

    stat_vec.x = r * xsqrt(stat_f - (dir.x * dir.x));
    stat_vec.y = r * xsqrt(stat_f - (dir.y * dir.y));
    stat_vec.z = r * xsqrt(stat_f - (dir.z * dir.z));
    temp_vec1 += center;
    box.upper = temp_vec1;
    temp_vec2 -= center;
    box.lower = temp_vec2;
}

void xQuatSMul(xQuat* q, const xQuat* a, F32 t)
{
    q->s = a->s * t;
    xVec3SMul((xVec3*)q, (xVec3*)a, t);
}

F32 xQuatLength2(const xQuat* q)
{
    return xQuatDot(q, q);
}

void xQuatAdd(xQuat* q, const xQuat* a, const xQuat* b)
{
    q->s = a->s + b->s;
    xVec3Add((xVec3*)q, (xVec3*)a, (xVec3*)b);
}
