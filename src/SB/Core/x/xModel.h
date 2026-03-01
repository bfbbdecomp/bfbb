#ifndef XMODEL_H
#define XMODEL_H

#include <rwcore.h>
#include <rpworld.h>

#include "xAnim.h"
#include "xLightKit.h"
#include "xSurface.h"
#include "xMath3.h"
#include "xMath2.h"
#include "xModelBucket.h"

struct xModelBucket;

struct xModelPool
{
    xModelPool* Next;
    U32 NumMatrices;
    xModelInstance* List;
};

struct xModelInstance
{
    xModelInstance* Next;
    xModelInstance* Parent;
    xModelPool* Pool;
    xAnimPlay* Anim; // 0xC

    // Offset: 0x10
    RpAtomic* Data;
    U32 PipeFlags;
    F32 RedMultiplier;
    F32 GreenMultiplier;

    // Offset: 0x20
    F32 BlueMultiplier;
    F32 Alpha;
    F32 FadeStart;
    F32 FadeEnd;

    // Offset: 0x30
    xSurface* Surf;
    xModelBucket** Bucket;
    xModelInstance* BucketNext;
    xLightKit* LightKit;

    // Offset: 0x40
    void* Object;
    U16 Flags; // 0x44
    U8 BoneCount; // 0x46
    U8 BoneIndex; // 0x47
    U8* BoneRemap; // 0x48
    RwMatrix* Mat; // 0x4C

    // Offset: 0x50
    xVec3 Scale;
    U32 modelID;
    U32 shadowID;
    RpAtomic* shadowmapAtomic;
    struct
    {
        xVec3* verts;
    } anim_coll;
};

// NOTE (Square): Theses are based on the access pattern found in zUI_Render.
// I doubt they wrote this out by hand every time, but I'm just guessing on the macro here.
#define XMODELINSTANCE_GET_SRCBLEND(inst) (((inst)->PipeFlags >> 0x8) & 0xf)
#define XMODELINSTANCE_GET_DSTBLEND(inst) (((inst)->PipeFlags >> 0xc) & 0xf)

struct xModelTag
{
    xVec3 v;
    U32 matidx;
    F32 wt[4];
};

struct xModelTagWithNormal : xModelTag
{
    xVec3 normal;
};

struct xModelAssetParam
{
    U32 HashID;
    U8 WordLength;
    U8 String[3];
};

struct xModelAssetInfo
{
    U32 Magic;
    U32 NumModelInst;
    U32 AnimTableID;
    U32 CombatID;
    U32 BrainID;
};

struct xModelAssetInst
{
    U32 ModelID;
    U16 Flags;
    U8 Parent;
    U8 Bone;
    F32 MatRight[3];
    F32 MatUp[3];
    F32 MatAt[3];
    F32 MatPos[3];
};

struct xModelPipeLookup
{
    RpAtomic* model;
    U32 PipeFlags;
};

struct xModelPipeInfo
{
    U32 ModelHashID;
    U32 SubObjectBits;
    U32 PipeFlags;
};

extern S32 xModelPipeNumTables;
extern S32 xModelPipeCount[16];
extern xModelPipeInfo* xModelPipeData[16];
extern S32 xModelLookupCount;
extern xModelPipeLookup* xModelLookupList;
extern S32 xModelInstStaticAlloc;
extern S32 xModelBucketEnabled;

U32 xModelGetPipeFlags(RpAtomic* model);
void xModelInit();
void xModelPoolInit(U32 count, U32 numMatrices);
void xModelAnimCollStart(xModelInstance& m);
void xModelSetFrame(xModelInstance* modelInst, const xMat4x3* frame);
xModelInstance* xModelInstanceAlloc(RpAtomic* data, void* object, U16 flags, U8 boneIndex,
                                    U8* boneRemap);
void xModelInstanceFree(xModelInstance* modelInst);
void xModelInstanceAttach(xModelInstance* inst, xModelInstance* parent);
void xModelRender(xModelInstance* modelInst);
void xModelRenderSingle(xModelInstance* modelInst);
void xModelRender2D(const xModelInstance& model, const basic_rect<F32>& r, const xVec3& from,
                    const xVec3& to);
void xModelSetMaterialAlpha(xModelInstance* modelInst, U8 alpha);
void xModelUpdate(xModelInstance* modelInst, F32 timeDelta);
xMat4x3* xModelGetFrame(xModelInstance* modelInst);
void xModelEval(xModelInstance* modelInst);
void xModelMaterialMul(xModelInstance* model, F32 rm, F32 gm, F32 bm);
void xModelResetMaterial(xModelInstance* model);
void xModel_SceneEnter(RpWorld* world);
void xModel_SceneExit(RpWorld* world);
xSphere* xModelGetLocalSBound(xModelInstance* model);
void xModelGetBoneMat(xMat4x3& mat, const xModelInstance& model, size_t index);
void xModelInstanceUpgradeBrotherShared(xModelInstance* inst, U32 flags);
xVec3 xModelGetBoneLocation(const xModelInstance& model, u32 index);

inline void xModelSetFrame(xModelInstance* modelInst, const xMat4x3* frame)
{
    xMat4x3Copy((xMat4x3*)modelInst->Mat, frame);
}

inline xMat4x3* xModelGetFrame(xModelInstance* modelInst)
{
    return (xMat4x3*)modelInst->Mat;
}

#endif
