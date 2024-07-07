#ifndef XPAREMITTERTYPE_H
#define XPAREMITTERTYPE_H

#include "xMath3.h"

struct xPECircle
{
    F32 radius;
    F32 deflection;
    xVec3 dir;
};

struct _tagEmitSphere
{
    F32 radius;
};

struct _tagEmitRect
{
    F32 x_len;
    F32 z_len;
};

struct _tagEmitLine
{
    xVec3 pos1;
    xVec3 pos2;
    F32 radius;
};

struct _tagEmitVolume
{
    U32 emit_volumeID;
};

struct _tagEmitOffsetPoint
{
    xVec3 offset;
};

struct xPEVCyl
{
    F32 height;
    F32 radius;
    F32 deflection;
};

struct xPEEntBone
{
    U8 flags;
    U8 type;
    U8 bone;
    U8 pad1;
    xVec3 offset;
    F32 radius;
    F32 deflection;
};

struct xPEEntBound
{
    U8 flags;
    U8 type;
    U8 pad1;
    U8 pad2;
    F32 expand;
    F32 deflection;
};

#endif
