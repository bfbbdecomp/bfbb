#ifndef XPAREMITTERTYPE_H
#define XPAREMITTERTYPE_H

#include "xMath3.h"
#include "xVolume.h"
#include "xPar.h"
#include "xEnt.h"

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

void xParEmitterEmitPoint(xPar* p, xParEmitterAsset* a, F32 dt);
void xParEmitterAngleVariation(xPar* p, xParEmitterAsset* a);
void xParEmitterEmitCircleEdge(xPar* p, xParEmitterAsset* a, F32 dt);
void xParEmitterEmitCircle(xPar* p, xParEmitterAsset* a, F32 dt);
void xParEmitterEmitRect(xPar* p, xParEmitterAsset* a, F32 dt);
void xParEmitterEmitRectEdge(xPar* p, xParEmitterAsset* a, F32 dt);
void xParEmitterEmitLine(xPar* p, xParEmitterAsset* a, F32 dt);
void xParEmitterEmitSphere(xPar* p, xParEmitterAsset* a, F32 dt);
void xParEmitterEmitSphereEdge(xPar* p, xParEmitterAsset* a, F32 dt, S32 subtype);
void xParEmitterEmitVolume(xPar* p, xParEmitterAsset* a, F32 dt, xVolume* vol);
void xParEmitterEmitEntity(xPar* p, xParEmitterAsset* a, F32 dt, xEnt* ent);
void xParEmitterEmitOffsetPoint(xParEmitter* pe, xPar* p, xParEmitterAsset* a, xEnt* ent);
void xParEmitterEmitVCylEdge(xPar* p, xParEmitterAsset* a, F32 dt);
void xParEmitterEmitOCircleEdge(xPar* p, xParEmitterAsset* a, F32 dt);
void xParEmitterEmitOCircle(xPar* p, xParEmitterAsset* a, F32 dt);
xMat4x3* xParEmitterTransformEntBone(xVec3& loc, xVec3& vel, xParEmitterAsset& a, xEnt& ent);
void xParEmitterTransformEntBone(xVec3& loc, xVec3& vel, xParEmitterAsset& a, xMat4x3& mat);
void xParEmitterEmitEntBone(xPar* p, xParEmitterAsset* a, F32 dt, xMat4x3& mat);
void xParEmitterEmitEntBound(xPar* p, xParEmitterAsset* a, F32 dt, xEnt* ent);

#endif
