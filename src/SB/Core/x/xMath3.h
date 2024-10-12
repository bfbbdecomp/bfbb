#ifndef XMATH3_H
#define XMATH3_H

#include "xVec3.h"
#include "xVec3Inlines.h"

// Size: 0x30
struct xMat3x3
{
    xVec3 right;
    S32 flags;
    xVec3 up;
    U32 pad1;
    xVec3 at;
    U32 pad2;

    xMat3x3& operator=(const xMat3x3& rhs)
    {
        *(S32*)(&right.x) = *(S32*)(&rhs.right.x);
        *(S32*)(&right.y) = *(S32*)(&rhs.right.y);
        *(S32*)(&right.z) = *(S32*)(&rhs.right.z);

        flags = rhs.flags;

        *(S32*)(&up.x) = *(S32*)(&rhs.up.x);
        *(S32*)(&up.y) = *(S32*)(&rhs.up.y);
        *(S32*)(&up.z) = *(S32*)(&rhs.up.z);

        pad1 = rhs.pad1;

        *(S32*)(&at.x) = *(S32*)(&rhs.at.x);
        *(S32*)(&at.y) = *(S32*)(&rhs.at.y);
        *(S32*)(&at.z) = *(S32*)(&rhs.at.z);

        pad2 = rhs.pad2;

        return *this;
    }
};

// Size: 0x40
struct xMat4x3 : xMat3x3
{
    xVec3 pos;
    U32 pad3;

    xMat4x3& operator=(const xMat4x3& rhs)
    {
        *this = rhs;

        *(S32*)(&pos.x) = *(S32*)(&rhs.pos.x);
        *(S32*)(&pos.y) = *(S32*)(&rhs.pos.y);
        *(S32*)(&pos.z) = *(S32*)(&rhs.pos.z);

        pad3 = rhs.pad3;

        return *this;
    }
};

struct xSphere
{
    xVec3 center;
    F32 r;

    xSphere& operator=(const xSphere& rhs)
    {
        *(S32*)(&center.x) = *(S32*)(&rhs.center.x);
        *(S32*)(&center.y) = *(S32*)(&rhs.center.y);
        *(S32*)(&center.z) = *(S32*)(&rhs.center.z);
        r = rhs.r;

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
        *(S32*)(&upper.x) = *(S32*)(&rhs.upper.x);
        *(S32*)(&upper.y) = *(S32*)(&rhs.upper.y);
        *(S32*)(&upper.z) = *(S32*)(&rhs.upper.z);

        *(S32*)(&lower.x) = *(S32*)(&rhs.lower.x);
        *(S32*)(&lower.y) = *(S32*)(&rhs.lower.y);
        *(S32*)(&lower.z) = *(S32*)(&rhs.lower.z);

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

struct xQuat
{
    xVec3 v;
    F32 s;

    xQuat& operator=(const xQuat& rhs)
    {
        *(S32*)(&v.x) = *(S32*)(&rhs.v.x);
        *(S32*)(&v.y) = *(S32*)(&rhs.v.y);
        *(S32*)(&v.z) = *(S32*)(&rhs.v.z);

        s = rhs.s;

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

extern xVec3 g_O3;
extern xVec3 g_X3;
extern xVec3 g_Y3;
extern xVec3 g_Z3;
extern xMat4x3 g_I3;
extern xVec3 g_Onez;

// For some reason, this function is copied across 29 object files...
//   and each instance of this function has a LOCAL symbol (see symbols.txt)
// Declaring the function as 'static' here will both give it a LOCAL symbol
//   and allow it to be defined in multiple .cpp files without any link errors.
// We could also define it as static in each .cpp file, but it's not required.
static void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v);

void xMat3x3Copy(xMat3x3* o, const xMat3x3* m);
void xMat4x3Copy(xMat4x3* o, const xMat4x3* m);
void xMat4x3Mul(xMat4x3* o, const xMat4x3* a, const xMat4x3* b);
void xMat3x3Euler(xMat3x3* m, F32 yaw, F32 pitch, F32 roll);
void xRotCopy(xRot* o, const xRot* r);
void xMat4x3Toworld(xVec3* o, const xMat4x3* m, const xVec3* v);
void xMat3x3Rot(xMat3x3* m, const xVec3* a, F32 t);
void xMat3x3RotC(xMat3x3* m, F32 _x, F32 _y, F32 _z, F32 t);
void xMat3x3RotY(xMat3x3* m, F32 t);
void xMat3x3MulRotC(xMat3x3* o, xMat3x3* m, F32 _x, F32 _y, F32 _z, F32 t);
void xMat4x3Identity(xMat4x3* m);
void xMat3x3Normalize(xMat3x3* o, const xMat3x3* m);
void xMat4x3Tolocal(xVec3* o, const xMat4x3* m, const xVec3* v);
void xMat3x3Tolocal(xVec3* o, const xMat3x3* m, const xVec3* v);
void xMat4x3MoveLocalRight(xMat4x3* m, F32 mag);
void xMat4x3MoveLocalAt(xMat4x3* m, F32 mag);
void xMat4x3MoveLocalUp(xMat4x3* m, F32 mag);
void xMat3x3GetEuler(const xMat3x3* m, xVec3* a);
void xMat3x3Euler(xMat3x3* m, const xVec3* ypr);
void xQuatToMat(const xQuat* q, xMat3x3* m);
void xQuatDiff(xQuat* o, const xQuat* a, const xQuat* b);
F32 xQuatGetAngle(const xQuat* q);
void xQuatFromMat(xQuat* q, const xMat3x3* m);
void xQuatSlerp(xQuat* q, const xQuat* a, const xQuat* b, F32 t);
void xQuatConj(xQuat* o, const xQuat* q);
void xMat3x3LookAt(xMat3x3* m, const xVec3* pos, const xVec3* at);
F32 xMat3x3LookVec(xMat3x3* m, const xVec3* at);
void xBoxInitBoundOBB(xBox* o, const xBox* b, const xMat4x3* m);
void xMat3x3Scale(xMat3x3* m, const xVec3* s);
void xMat3x3ScaleC(xMat3x3* m, F32 x, F32 y, F32 z);
void xMat3x3RMulRotY(xMat3x3* o, const xMat3x3* m, F32 t);
void xMat3x3Mul(xMat3x3* o, const xMat3x3* a, const xMat3x3* b);
void xMat3x3SMul(xMat3x3*, const xMat3x3*, F32);
void xBoxFromLine(xBox& box, const xLine3& line);
void xBoxFromRay(xBox& box, const xRay3& ray);
void xMat3x3Identity(xMat3x3* matrix);
S32 xPointInBox(const xBox* b, const xVec3* p);
void xMat3x3LMulVec(xVec3* o, const xMat3x3* m, const xVec3* v);

#endif
