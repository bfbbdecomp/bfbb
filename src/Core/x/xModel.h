#ifndef XMODEL_H
#define XMODEL_H

#include <rwcore.h>
#include <rpworld.h>

#include "xAnim.h"
#include "xLightKit.h"
#include "xSurface.h"
#include "xMath3.h"

struct xModelInstance;

struct xModelBucket
{
    RpAtomic* Data;
    RpAtomic* OriginalData;
    xModelInstance* List;
    int32 ClipFlags;
    uint32 PipeFlags;
};

struct xModelPool
{
    xModelPool* Next;
    uint32 NumMatrices;
    xModelInstance* List;
};

struct xModelInstance
{
    xModelInstance* Next;
    xModelInstance* Parent;
    xModelPool* Pool;
    xAnimPlay* Anim;
    RpAtomic* Data;
    uint32 PipeFlags;
    float32 RedMultiplier;
    float32 GreenMultiplier;
    float32 BlueMultiplier;
    float32 Alpha;
    float32 FadeStart;
    float32 FadeEnd;
    xSurface* Surf;
    xModelBucket** Bucket;
    xModelInstance* BucketNext;
    xLightKit* LightKit;
    void* Object;
    uint16 Flags;
    uint8 BoneCount;
    uint8 BoneIndex;
    uint8* BoneRemap;
    RwMatrixTag* Mat;
    xVec3 Scale;
    uint32 modelID;
    uint32 shadowID;
    RpAtomic* shadowmapAtomic;
    struct
    {
        xVec3* verts;
    } anim_coll;
};

struct xModelTag
{
    xVec3 v;
    uint32 matidx;
    float32 wt[4];
};

struct xModelAssetParam
{
    uint32 HashID;
    uint8 WordLength;
    uint8 String[3];
};

#endif