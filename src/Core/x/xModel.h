#ifndef XMODEL_H
#define XMODEL_H

#include <rwcore.h>
#include <rpworld.h>

#include "xAnim.h"
#include "xLightKit.h"
#include "xSurface.h"
#include "xMath3.h"
#include "xMath2.h"

struct xModelBucket;

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

    // Offset: 0x10
    RpAtomic* Data;
    uint32 PipeFlags;
    float32 RedMultiplier;
    float32 GreenMultiplier;

    // Offset: 0x20
    float32 BlueMultiplier;
    float32 Alpha;
    float32 FadeStart;
    float32 FadeEnd;

    // Offset: 0x30
    xSurface* Surf;
    xModelBucket** Bucket;
    xModelInstance* BucketNext;
    xLightKit* LightKit;

    // Offset: 0x40
    void* Object;
    uint16 Flags;
    uint8 BoneCount;
    uint8 BoneIndex;
    uint8* BoneRemap;
    RwMatrix* Mat;

    // Offset: 0x50
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

struct xModelTagWithNormal : xModelTag
{
    xVec3 normal;
};

struct xModelAssetParam
{
    uint32 HashID;
    uint8 WordLength;
    uint8 String[3];
};

struct xModelPipeLookup
{
    RpAtomic* model;
    uint32 PipeFlags;
};

struct xModelPipeInfo
{
    uint32 ModelHashID;
    uint32 SubObjectBits;
    uint32 PipeFlags;
};

extern int32 xModelPipeNumTables;
extern int32 xModelPipeCount[16];
extern xModelPipeInfo* xModelPipeData[16];
extern int32 xModelLookupCount;
extern xModelPipeLookup* xModelLookupList;
extern int32 xModelInstStaticAlloc;

uint32 xModelGetPipeFlags(RpAtomic* model);
void xModelInit();
void xModelPoolInit(uint32 count, uint32 numMatrices);
void xModelAnimCollStart(xModelInstance& m);
void xModelSetFrame(xModelInstance* modelInst, const xMat4x3* frame);
xModelInstance* xModelInstanceAlloc(RpAtomic* data, void* object, uint16 flags, uint8 boneIndex,
                                    uint8* boneRemap);
void xModelInstanceAttach(xModelInstance* inst, xModelInstance* parent);
void xModelRender(xModelInstance* modelInst);
void xModelRender2D(const xModelInstance& model, const basic_rect<float32>& r, const xVec3& from,
                    const xVec3& to);
void xModelSetMaterialAlpha(xModelInstance* modelInst, uint8 alpha);
void xModelUpdate(xModelInstance* modelInst, float32 timeDelta);
xMat4x3* xModelGetFrame(xModelInstance* modelInst);
void xModelEval(xModelInstance* modelInst);
void xModel_SceneExit(RpWorld* world);
xSphere* xModelGetLocalSBound(xModelInstance* model);
void xModelGetBoneMat(xMat4x3& mat, const xModelInstance& model, uint32 index);

#endif