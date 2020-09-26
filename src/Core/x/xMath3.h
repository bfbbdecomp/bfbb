#ifndef XMATH3_H
#define XMATH3_H

#include "xVec3.h"

struct xMat3x3
{
    xVec3 right;
    int flags;
    xVec3 up;
    unsigned int pad1;
    xVec3 at;
    unsigned int pad2;
};

struct xMat4x3 : xMat3x3
{
    xVec3 pos;
    unsigned int pad3;
};

struct xSphere
{
    xVec3 center;
    float r;
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
    float r;
    float h;
};

struct xQuat
{
    xVec3 v;
    float s;
};

struct xVec4
{
    float x;
    float y;
    float z;
    float w;
};

#endif