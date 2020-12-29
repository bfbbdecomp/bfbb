#ifndef XMATH3_H
#define XMATH3_H

#include "xVec3.h"
#include "xVec3Inlines.h"

// Size: 0x30
struct xMat3x3
{
    xVec3 right;
    int32 flags;
    xVec3 up;
    uint32 pad1;
    xVec3 at;
    uint32 pad2;
};

// Size: 0x40
struct xMat4x3 : xMat3x3
{
    xVec3 pos;
    uint32 pad3;
};

struct xSphere
{
    xVec3 center;
    float32 r;
};

struct xBox
{
    xVec3 upper;
    xVec3 lower;
};

struct xBBox
{
    xVec3 center;
    xBox box;
};

struct xCylinder
{
    xVec3 center;
    float32 r;
    float32 h;
};

struct xQuat
{
    xVec3 v;
    float32 s;
};

struct xVec4
{
    float32 x;
    float32 y;
    float32 z;
    float32 w;
};

struct xRot
{
    xVec3 axis;
    float32 angle;
};

extern xVec3 g_O3;
extern xVec3 g_X3;
extern xVec3 g_Y3;
extern xVec3 g_Z3;
extern xMat4x3 g_I3;

void xMat3x3Copy(xMat3x3* o, const xMat3x3* m);
void xMat4x3Copy(xMat4x3* o, const xMat4x3* m);
void xMat4x3Mul(xMat4x3* o, const xMat4x3* a, const xMat4x3* b);
void xMat3x3Euler(xMat3x3* m, float32 yaw, float32 pitch, float32 roll);
void xRotCopy(xRot* o, const xRot* r);
void xMat4x3Toworld(xVec3* o, const xMat4x3* m, const xVec3* v);
void xMat3x3Rot(xMat3x3* m, const xVec3* a, float32 t);
void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v);
void xMat3x3RotC(xMat3x3* m, float32 _x, float32 _y, float32 _z, float32 t);

#endif