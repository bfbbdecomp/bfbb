#ifndef XMATH3_H
#define XMATH3_H

#include "xVec3.h"
#include "xVec3Inlines.h"

struct xMat3x3
{
    xVec3 right;
    int32 flags;
    xVec3 up;
    uint32 pad1;
    xVec3 at;
    uint32 pad2;
};

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

void xMat4x3Copy(xMat4x3* o, const xMat4x3* m);

#endif