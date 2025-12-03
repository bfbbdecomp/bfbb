#ifndef XMATH3_H
#define XMATH3_H

#include "xMath.h"

#include "xVec3.h"
#include "xVec3Inlines.h"
#include "xIsect.h"

// Size: 0x30
struct xMat3x3
{
    xVec3 right;
    S32 flags;
    xVec3 up;
    U32 pad1;
    xVec3 at;
    U32 pad2;
};

// Size: 0x40
struct xMat4x3 : xMat3x3
{
    xVec3 pos;
    U32 pad3;
};

struct xSphere
{
    xVec3 center;
    F32 r;

    xSphere& operator=(const xSphere& rhs)
    {
        *(S32*)(&this->center.x) = *(S32*)(&rhs.center.x);
        *(S32*)(&this->center.y) = *(S32*)(&rhs.center.y);
        *(S32*)(&this->center.z) = *(S32*)(&rhs.center.z);
        this->r = rhs.r;

        return *this;
    }
};

// Size: 0x18
struct xBox
{
    xVec3 upper;
    xVec3 lower;

    xBox& operator=(const xBox& rhs)
    {
        *(S32*)(&this->upper.x) = *(S32*)(&rhs.upper.x);
        *(S32*)(&this->upper.y) = *(S32*)(&rhs.upper.y);
        *(S32*)(&this->upper.z) = *(S32*)(&rhs.upper.z);

        *(S32*)(&this->lower.x) = *(S32*)(&rhs.lower.x);
        *(S32*)(&this->lower.y) = *(S32*)(&rhs.lower.y);
        *(S32*)(&this->lower.z) = *(S32*)(&rhs.lower.z);

        return *this;
    }
};

struct xBBox
{
    xVec3 center;
    xBox box;
};

struct xCylinder
{
    xVec3 center;
    F32 r;
    F32 h;
};

struct xCapsule
{
    xVec3 start;
    xVec3 end;
    F32 r;
};

struct xQuat
{
    xVec3 v;
    F32 s;

    xQuat& operator=(const xQuat& rhs)
    {
        *(S32*)(&this->v.x) = *(S32*)(&rhs.v.x);
        *(S32*)(&this->v.y) = *(S32*)(&rhs.v.y);
        *(S32*)(&this->v.z) = *(S32*)(&rhs.v.z);
        this->s = rhs.s;

        return *this;
    }
};

struct xVec4
{
    F32 x;
    F32 y;
    F32 z;
    F32 w;
};

struct xRot
{
    xVec3 axis;
    F32 angle;
};

struct xLine3
{
    xVec3 p1;
    xVec3 p2;
};

struct xRay3;

extern const xQuat g_IQ;
extern const xVec3 g_O3;
extern const xVec3 g_X3;
extern const xVec3 g_Y3;
extern const xVec3 g_Z3;
extern const xVec3 g_NX3;
extern const xVec3 g_NY3;
extern const xVec3 g_NZ3;
extern const xVec3 g_Onez;
extern xMat4x3 g_I3;

void xMath3Init();
void xLine3VecDist2(const xVec3* p1, const xVec3* p2, const xVec3* v, xIsect* isx);
S32 xPointInBox(const xBox* b, const xVec3* p);
void xBoxInitBoundOBB(xBox* o, const xBox* b, const xMat4x3* m);
void xBoxInitBoundCapsule(xBox* b, const xCapsule* c);
void xBoxFromCone(xBox& box, const xVec3& center, const xVec3& dir, F32 dist, F32 r1, F32 r2);
void xMat3x3Normalize(xMat3x3* o, const xMat3x3* m);
void xMat3x3GetEuler(const xMat3x3* m, xVec3* a);
void xMat4x3MoveLocalRight(xMat4x3* m, F32 mag);
void xMat4x3MoveLocalUp(xMat4x3* m, F32 mag);
void xMat4x3MoveLocalAt(xMat4x3* m, F32 mag);
F32 xMat3x3LookVec(xMat3x3* m, const xVec3* at);
void xMat3x3Euler(xMat3x3* m, const xVec3* ypr);
void xMat3x3Euler(xMat3x3* m, F32 yaw, F32 pitch, F32 roll);
void xMat3x3RotC(xMat3x3* m, F32 _x, F32 _y, F32 _z, F32 t);
void xMat3x3RotX(xMat3x3* m, F32 t);
void xMat3x3RotY(xMat3x3* m, F32 t);
void xMat3x3RotZ(xMat3x3* m, F32 t);
void xMat3x3ScaleC(xMat3x3* m, F32 x, F32 y, F32 z);
void xMat3x3RMulRotY(xMat3x3* o, const xMat3x3* m, F32 t);
void xMat3x3Transpose(xMat3x3* o, const xMat3x3* m);
void xMat3x3Mul(xMat3x3* o, const xMat3x3* a, const xMat3x3* b);
void xMat3x3LMulVec(xVec3* o, const xMat3x3* m, const xVec3* v);
void xMat3x3Tolocal(xVec3* o, const xMat3x3* m, const xVec3* v);
void xMat4x3Rot(xMat4x3* m, const xVec3* a, F32 t, const xVec3* p);
void xMat4x3Mul(xMat4x3* o, const xMat4x3* a, const xMat4x3* b);
void xQuatFromMat(xQuat* q, const xMat3x3* m);
void xQuatFromAxisAngle(xQuat* q, const xVec3* a, F32 t);
void xQuatToMat(const xQuat* q, xMat3x3* m);
void xQuatToAxisAngle(const xQuat* q, xVec3* a, F32* t);
F32 xQuatNormalize(xQuat* o, const xQuat* q);
void xQuatSlerp(xQuat* q, const xQuat* a, const xQuat* b, F32 t);
void xQuatMul(xQuat* o, const xQuat* a, const xQuat* b);
void xQuatDiff(xQuat* o, const xQuat* a, const xQuat* b);

void xBoxUnion(xBox& a, const xBox& b, const xBox& c);
void xBoxFromCircle(xBox& o, const xVec3& a, const xVec3& b, F32 r);
void xQuatSMul(xQuat* q, const xQuat* a, F32 t);
F32 xQuatLength2(const xQuat* q);
void xQuatAdd(xQuat* q, const xQuat* a, const xQuat* b);

void xQuatCopy(xQuat*, const xQuat*);
void xMat3x3SMul(xMat3x3*, const xMat3x3*, F32);
void xQuatFlip(xQuat* o1, xQuat* o2);

F32 xQuatDot(const xQuat* a, const xQuat* b);
void xMat3x3Copy(xMat3x3* o, const xMat3x3* m); // TODO: These functions should be inline
void xMat4x3Copy(xMat4x3* o, const xMat4x3* m);
void xMat4x3Toworld(xVec3* o, const xMat4x3* m, const xVec3* v);
void xMat3x3MulRotC(xMat3x3* o, xMat3x3* m, F32 _x, F32 _y, F32 _z, F32 t);
void xMat4x3Identity(xMat4x3* m);
void xMat4x3Tolocal(xVec3* o, const xMat4x3* m, const xVec3* v);
void xMat4x3OrthoInv(xMat4x3* o, const xMat4x3* m);
F32 xQuatGetAngle(const xQuat* q);
void xQuatConj(xQuat* o, const xQuat* q);
void xMat3x3LookAt(xMat3x3* m, const xVec3* pos, const xVec3* at);
F32 xMat3x3LookVec3(xMat3x3& m, const xVec3& at);
void xMat3x3Scale(xMat3x3* m, const xVec3* s);
void xBoxFromLine(xBox& box, const xLine3& line);
void xBoxFromRay(xBox& box, const xRay3& ray);
void xMat3x3Identity(xMat3x3* matrix); // TODO: These functions should be inline
void xBoxFromCircle(xBox& box, const xVec3& center, const xVec3& dir, F32 r);

F32 fabs(F32 x); // Unsure where this should come from.

inline void xRotCopy(xRot* o, const xRot* r)
{
    o->axis.x = r->axis.x;
    o->axis.y = r->axis.y;
    o->axis.z = r->axis.z;
    o->angle = r->angle;
}

static inline void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    F32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    F32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    F32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}

inline void xMat3x3Rot(xMat3x3* m, const xVec3* a, F32 t)
{
    xMat3x3RotC(m, a->x, a->y, a->z, t);
}

#endif
