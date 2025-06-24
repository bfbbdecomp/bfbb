#include "rwplcore.h"
#include "rwcore.h"
#include <plugin/skin2/skin.h>

#if (defined(RWDEBUG))
long _rpSkinStackDepth = 0;
#endif /* (defined(RWDEBUG)) */

#define rpSKINENTRIESPERBLOCK 20
#define rpSKINALIGNMENT sizeof(RwUInt32)

#define ROUNDUP16(x) (((RwUInt32)(x) + 16 - 1) & ~(16 - 1))

#define CHECKSTREAMANDRETURN(success)                                                              \
    MACRO_START                                                                                    \
    {                                                                                              \
        if (NULL == (success))                                                                     \
        {                                                                                          \
            RWRETURN((RwStream*)NULL);                                                             \
        }                                                                                          \
    }                                                                                              \
    MACRO_STOP

#define rwID_SKINPLUGIN MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x16)

static RwInt32 _rpSkinFreeListBlockSize = rpSKINENTRIESPERBLOCK, _rpSkinFreeListPreallocBlocks = 1;
static RwFreeList _rpSkinFreeList;

static RpSkin* SkinCreate(RwUInt32 numVertices, RwUInt32 numBones, RwUInt32 numBonesUsed,
                          RwUInt32 maxWeights, RwMatrixWeights* vertexWeights,
                          RwUInt32* vertexIndices, RwMatrix* inverseMatrices)
{
    RwUInt8 usedBoneList[256];
    RpSkin* skin;

    RWFUNCTION(RWSTRING("SkinCreate"));
    RWASSERT(0 < numVertices);
    RWASSERT(0 < numBones);

    /* Get a new skin */
    skin = (RpSkin*)RwFreeListAlloc(_rpSkinGlobals.freeList, rwID_SKINPLUGIN | rwMEMHINTDUR_EVENT);
    RWASSERT(NULL != skin);

    /* Clean the skin */
    memset(skin, 0, sizeof(RpSkin));

    /* Find the maximum number of weights used */
    if (0 == maxWeights)
    {
        SkinFindMaxWeights(skin, vertexWeights, numVertices);
    }

    /* Find the number of used bones */
    if (0 == numBonesUsed)
    {
        SkinFindNumUsedBones(skin, vertexIndices, vertexWeights, usedBoneList, &numBonesUsed,
                             numVertices);
    }

    /* Setup the skin's bones */
    if (!SkinCreateSkinData(skin, numBones, numBonesUsed, numVertices, usedBoneList, vertexWeights,
                            vertexIndices, inverseMatrices))
    {
        RwFreeListFree(_rpSkinGlobals.freeList, skin);
        RWRETURN((RpSkin*)NULL);
    }

    RWRETURN(skin);
}

static void* SkinOpen(void* instance, RwInt32 offset, RwInt32 size)
{
}

static void* SkinClose(void* instance, RwInt32 offset, RwInt32 size)
{
    _rpSkinGlobals.module.numInstances--;

    if (0 == _rpSkinGlobals.module.numInstances)
    {
        RwBool success;

        success = _rpSkinPipelinesDestroy();
        RwFreeListDestroy(_rpSkinGlobals.freeList);
        _rpSkinGlobals.freeList = (RwFreeList*)NULL;
        RwFree(_rpSkinGlobals.matrixCache.unaligned);
        _rpSkinGlobals.matrixCache.unaligned = NULL;
    }

    return instance;
}

static void* SkinGeometryConstructor(void* object, RwInt32 offset, RwInt32 size)
{
    *RPSKINGEOMETRYGETDATA(object) = (RpSkin*)NULL;

    return object;
}

static void* SkinGeometryDestructor(void* object, RwInt32 offset, RwInt32 size)
{
    RpGeometry* geometry;
    RpSkin* skin;

    geometry = (RpGeometry*)object;
    skin = *RPSKINGEOMETRYGETDATA(geometry);

    if (NULL != skin)
    {
        _rpSkinDeinitialize(geometry);
        *RPSKINGEOMETRYGETDATA(geometry) = RpSkinDestroy(skin);
    }

    return object;
}

static void* SkinGeometryCopy(void* dstObject, const void* srcObject, RwInt32 offset, RwInt32 size)
{
}

static void* SkinAtomicConstructor(void* object, RwInt32 offset, RwInt32 size)
{
    // use same var as the Destructor counterpart?
}

static void* SkinAtomicDestructor(void* object, RwInt32 offset, RwInt32 size)
{
    RpAtomic* atomic;
    SkinAtomicData* atomicData;

    atomic = (RpAtomic*)object;
    atomicData = RPSKINATOMICGETDATA(atomic);

    if (NULL != atomicData->hierarchy)
    {
        atomicData->hierarchy = (RpHAnimHierarchy*)NULL;
    }

    return object;
}

static void* SkinAtomicCopy(void* dstObject, const void* srcObject, RwInt32 offset, RwInt32 size)
{
    // odd way to write it but ok
    const RpAtomic* srcAtomic;
    const SkinAtomicData* srcAtomicData;

    RpAtomic* dstAtomic;
    SkinAtomicData* dstAtomicData;

    srcAtomic = (const RpAtomic*)srcObject;
    dstAtomic = (RpAtomic*)dstObject;

    srcAtomicData = RPSKINATOMICGETCONSTDATA(srcAtomic);
    dstAtomicData = RPSKINATOMICGETDATA(dstAtomic);

    dstAtomicData->hierarchy = srcAtomicData->hierarchy;

    return dstObject;
}

static RwBool SkinAtomicAlways(void* object, RwInt32 offset, RwInt32 size)
{
}

static RwBool SkinAtomicRights(void* object, RwInt32 offset, RwInt32 size, RwUInt32 extraData)
{
}

static RwInt32 SkinGeometrySize(const void* object, RwInt32 offset, RwInt32 bytes)
{
}

static RwStream* SkinGeometryWrite(RwStream* stream, RwInt32 binaryLength, const void* object,
                                   RwInt32 offsetInObject, RwInt32 sizeInObject)
{
}

static RwStream* SkinGeometryRead(RwStream* stream, RwInt32 binaryLength, void* object,
                                  RwInt32 offsetInObject, RwInt32 sizeInObject)
{
}

static RwStream* SkinAtomicRead(RwStream* stream, RwInt32 binaryLength, void* object,
                                RwInt32 offsetInObject, RwInt32 sizeInObject)
{
}

static RwStream* SkinAtomicWrite(RwStream* stream, RwInt32 binaryLength, const void* object,
                                 RwInt32 offsetInObject, RwInt32 sizeInObject)
{
    return;
}

static RwInt32 SkinAtomicGetSize(const void* object, RwInt32 offsetInObject, RwInt32 sizeInObject)
{
    return 0;
}

RwBool RpSkinPluginAttach(void)
{
}

RpAtomic* RpSkinAtomicSetHAnimHierarchy(RpAtomic* atomic, RpHAnimHierarchy* hierarchy)
{
    SkinAtomicData* atomicData;

    atomicData = RPSKINATOMICGETDATA(atomic);
    atomicData->hierarchy = hierarchy;

    return atomic;
}

RpSkin* RpSkinGeometryGetSkin(RpGeometry* geometry)
{
    RpSkin* skin;

    skin = *RPSKINGEOMETRYGETDATA(geometry);

    return skin;
}

RpGeometry* RpSkinGeometrySetSkin(RpGeometry* geometry, RpSkin* skin)
{
    RpSkin* oldSkin;

    oldSkin = *RPSKINGEOMETRYGETDATA(geometry);
    if (skin != oldSkin)
    {
        if (NULL != oldSkin)
        {
            _rpSkinDeinitialize(geometry);
        }

        *RPSKINGEOMETRYGETDATA(geometry) = skin;

        if (NULL != skin)
        {
            if (!_rpSkinInitialize(geometry))
            {
                return NULL;
            }
        }
    }

    return geometry;
}

RpSkin* RpSkinDestroy(RpSkin* skin)
{
    if (skin->unaligned)
    {
        RwFree(skin->unaligned);
    }

    _rpSkinSplitDataDestroy(skin);
    skin = (RpSkin*)NULL;

    return skin;
}

RwUInt32 RpSkinGetNumBones(RpSkin* skin)
{
    return (skin->boneData.numBones);
}

const RwMatrixWeights* RpSkinGetVertexBoneWeights(RpSkin* skin)
{
    return (skin->vertexMaps.matrixWeights);
}

const RwUInt32* RpSkinGetVertexBoneIndices(RpSkin* skin)
{
    return (skin->vertexMaps.matrixIndices);
}

const RwMatrix* RpSkinGetSkinToBoneMatrices(RpSkin* skin)
{
    return (skin->boneData.invBoneToSkinMat);
}

RpAtomic* RpSkinAtomicSetType(RpAtomic* atomic, RpSkinType type)
{
}
