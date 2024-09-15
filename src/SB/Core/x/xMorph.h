#ifndef XMORPH_H
#define XMORPH_H

#include "iMorph.h"
#include "xMath3.h"

#include <rwcore.h>
#include <rpworld.h>

struct xMorphSeqFile
{
    U32 Magic;
    U32 Flags;
    U32 TimeCount;
    U32 ModelCount;
};

struct xMorphFrame
{
    RpAtomic* Model;
    F32 RecipTime;
    F32 Scale;
    U16 Flags;
    U16 NumVerts;
    S16* Targets[4];
    S16 WeightStart[4];
    S16 WeightEnd[4];
};

struct xMorphTargetFile
{
    U32 Magic;
    U16 NumTargets;
    U16 NumVerts;
    U32 Flags;
    F32 Scale;
    xVec3 Center;
    F32 Radius;
};

typedef void*(*xMorphFindAssetCallback)(U32, char*);

xMorphSeqFile* xMorphSeqSetup(void* data, xMorphFindAssetCallback FindAssetCB);
void xMorphRender(xMorphSeqFile* seq, RwMatrix* mat, F32 time);
F32 xMorphSeqDuration(xMorphSeqFile* seq);

#endif