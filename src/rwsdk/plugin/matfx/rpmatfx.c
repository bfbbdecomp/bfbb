#include "rwplcore.h"
#include "rwcore.h"
#include "rpmatfx.h"
#include <plugin/matfx/matfx.h>

#define MATFXBUMPTEXTURENAMEEXTENSION "_B"

#ifndef _rpMatFXMaterialPlatformInitialize
#define _rpMatFXMaterialPlatformInitialize(material)
#endif
#ifndef _rpMatFXMaterialPlatformEnvMapSetBlend
#define _rpMatFXMaterialPlatformEnvMapSetBlend(material)
#endif
#ifndef _rpMatFXMaterialPlatformDualSetBlend
#define _rpMatFXMaterialPlatformDualSetBlend(material)
#endif

#define rpMATFXENTRIESPERBLOCK 128

#define rpMATFXALIGNMENT rwFRAMEALIGNMENT

#define RPMATFXALIGNMENT(_x) (!(((rpMATFXALIGNMENT)-1) & ((RwUInt32)(_x))))

#define MATFXMATERIALGETDATA(material)                                                             \
    ((rpMatFXMaterialData**)(((RwUInt8*)material) + MatFXMaterialDataOffset))

#define MATFXMATERIALGETCONSTDATA(material)                                                        \
    ((const rpMatFXMaterialData* const*)(((const RwUInt8*)material) + MatFXMaterialDataOffset))

#define MATFXATOMICGETDATA(atomic) ((MatFXAtomicData*)(((RwUInt8*)atomic) + MatFXAtomicDataOffset))

#define MATFXATOMICGETCONSTDATA(atomic)                                                            \
    ((const MatFXAtomicData*)(((const RwUInt8*)atomic) + MatFXAtomicDataOffset))

#define MATFXWORLDSECTORGETDATA(worldSector)                                                       \
    ((MatFXWorldSectorData*)(((RwUInt8*)worldSector) + MatFXWorldSectorDataOffset))

#define MATFXWORLDSECTORGETCONSTDATA(worldSector)                                                  \
    ((const MatFXWorldSectorData*)(((const RwUInt8*)worldSector) + MatFXWorldSectorDataOffset))

#define MATFXMATERIALGETDATA(material)                                                             \
    ((rpMatFXMaterialData**)(((RwUInt8*)material) + MatFXMaterialDataOffset))

#define MATFXMATERIALGETCONSTDATA(material)                                                        \
    ((const rpMatFXMaterialData* const*)(((const RwUInt8*)material) + MatFXMaterialDataOffset))

typedef struct MatFXWorldSectorData MatFXWorldSectorData;
struct MatFXWorldSectorData
{
    RwBool enabled;
};

typedef struct MatFXAtomicData MatFXAtomicData;
struct MatFXAtomicData
{
    RwBool enabled;
};

#if (defined(RWDEBUG))
long rpMatFXStackDepth = 0;
#endif /* (defined(RWDEBUG)) */

RwInt32 MatFXMaterialDataOffset = 0;

RwMatFXInfo MatFXInfo = { { 0, 0 }, (RwFreeList*)NULL };

static RwInt32 MatFXAtomicDataOffset = 0;
static RwInt32 MatFXWorldSectorDataOffset = 0;

RwTexture* _rpMatFXTextureMaskCreate();

static void* MatFXClose(void* instance, RwInt32 offset, RwInt32 size)
{
    MatFXInfo.Module.numInstances--;
    if (MatFXInfo.Module.numInstances == 0)
    {
        _rpMatFXPipelinesDestroy();
    }
    if (MatFXInfo.MaterialData)
    {
        RwFreeListDestroy(MatFXInfo.MaterialData);
        MatFXInfo.MaterialData = (RwFreeList*)NULL;
    }

    return instance;
}

static RwInt32 _rpMatFXMaterialDataFreeListBlockSize = rpMATFXENTRIESPERBLOCK,
               _rpMatFXMaterialDataFreeListPreallocBlocks = 1;
static RwFreeList _rpMatFXMaterialDataFreeList;

static void* MatFXOpen(void* instance, RwInt32 offset, RwInt32 size)
{
    if (MatFXInfo.Module.numInstances == 0)
    {
        // Instruction below this is kinda fucked.

        // MatFXInfo.MaterialData = RwFreeListCreateAndPreallocateSpace(
        //     sizeof(rpMatFXMaterialData), _rpMatFXMaterialDataFreeListBlockSize, rpMATFXALIGNMENT,
        //     _rpMatFXMaterialDataFreeListPreallocBlocks, &_rpMatFXMaterialDataFreeList,
        //     rwID_MATERIALEFFECTSPLUGIN | rwMEMHINTDUR_GLOBAL);

        if (MatFXInfo.MaterialData == NULL)
        {
            instance = NULL;
            return instance;
        }

        if (FALSE == _rpMatFXPipelinesCreate())
        {
            instance = NULL;
            return instance;
        }
    }
    MatFXInfo.Module.numInstances++;

    return instance;
}
typedef struct rpMatFXMaterialData rpMatFXMaterialData;
static void* MatFXMaterialConstructor(void* object, RwInt32 offset, RwInt32 size)
{
    *MATFXMATERIALGETDATA(object) = (rpMatFXMaterialData*)NULL;

    return object;
}

enum MatFXPass
{
    rpSECONDPASS = 0,
    rpTHIRDPASS = 1,
    rpMAXPASS = 2
};

typedef enum MatFXPass MatFXPass;
// typedef struct MatFXUVAnimData RWALIGN(MatFXUVAnimData, rpMATFXALIGNMENT);
// typedef struct MatFXBumpMapData RWALIGN(MatFXBumpMapData, rpMATFXALIGNMENT);
// typedef struct MatFXDualData RWALIGN(MatFXDualData, rpMATFXALIGNMENT);
// typedef union MatFXEffectUnion RWALIGN(MatFXEffectUnion, rpMATFXALIGNMENT);

typedef struct MatFXBumpMapData MatFXBumpMapData;

struct MatFXBumpMapData
{
    RwFrame* frame;
    RwTexture* texture;
    RwTexture* bumpTexture;
    RwReal coef;
    RwReal invBumpWidth;
};
typedef struct MatFXDualData MatFXDualData;

struct MatFXDualData
{
    RwTexture* texture;
    RwBlendFunction srcBlendMode;
    RwBlendFunction dstBlendMode;

    // device specific
};
typedef struct MatFXEnvMapData RWALIGN(MatFXEnvMapData, rpMATFXALIGNMENT);
struct MatFXEnvMapData
{
    RwFrame* frame;
    RwTexture* texture;
    RwReal coef;
    RwBool useFrameBufferAlpha;
};

typedef struct MatFXUVAnimData MatFXUVAnimData;

struct MatFXUVAnimData
{
    RwMatrix* baseTransform;
    RwMatrix* dualTransform;
};

typedef union MatFXEffectUnion MatFXEffectUnion;

union MatFXEffectUnion
{
    MatFXBumpMapData bumpMap;
    MatFXEnvMapData envMap;
    MatFXDualData dual;
    MatFXUVAnimData uvAnim;

#if (defined(MULTITEXD3D8_H))
    MatFXD3D8Material d3d8Mat;
#endif
};

typedef struct MatFXEffectData RWALIGN(MatFXEffectData, rpMATFXALIGNMENT);
struct MatFXEffectData
{
    MatFXEffectUnion data;
    RpMatFXMaterialFlags flag;

#if (defined(SKY2_DRVMODEL_H))
    MatFXSkyMaterial skyMat;
#endif
};
struct rpMatFXMaterialData
{
    MatFXEffectData data[rpMAXPASS];
    RpMatFXMaterialFlags flags;
};

static void* MatFXMaterialCopy(void* dstObject, const void* srcObject, RwInt32 offset, RwInt32 size)
{
    const RpMaterial* srcMaterial;
    const rpMatFXMaterialData* srcMaterialData;

    RpMaterial* dstMaterial;
    rpMatFXMaterialData* dstMaterialData;

    RpMaterial* ret;

    RwUInt8 pass;

    srcMaterial = (const RpMaterial*)srcObject;
    dstMaterial = (RpMaterial*)dstObject;

    srcMaterialData = (const rpMatFXMaterialData*)*MATFXMATERIALGETCONSTDATA(srcMaterial);

    if ((rpMatFXMaterialData*)NULL == srcMaterialData)
    {
        return NULL;
    }

    dstMaterialData = (rpMatFXMaterialData*)MatFXMaterialGetData(dstMaterial);

    if (NULL == dstMaterialData)
    {
        return NULL;
    }
    ret = RpMatFXMaterialSetEffects(dstMaterial, srcMaterialData->flags);
    for (pass = 0; pass < rpMAXPASS; pass++)
    {
        RpMatFXMaterialFlags effect;
        effect = srcMaterialData->data[pass].flag;

        switch (effect)
        {
        case rpMATFXEFFECTNULL:
        {
            break;
        }
        case rpMATFXEFFECTBUMPMAP:
        {
            const MatFXBumpMapData* srcBumpMapData;
            MatFXBumpMapData* dstBumpMapData;

            RwFrame* frame;
            RwReal coef;

            srcBumpMapData = &(srcMaterialData->data[pass].data.bumpMap);
            dstBumpMapData = &(dstMaterialData->data[pass].data.bumpMap);

            frame = RpMatFXMaterialGetBumpMapFrame(srcMaterial);
            coef = RpMatFXMaterialGetBumpMapCoefficient(srcMaterial);
            ret = RpMatFXMaterialSetBumpMapFrame(dstMaterial, frame);
            ret = RpMatFXMaterialSetBumpMapCoefficient(dstMaterial, coef);

            dstBumpMapData->texture = srcBumpMapData->texture;
            dstBumpMapData->bumpTexture = srcBumpMapData->bumpTexture;

            if (NULL != dstBumpMapData->texture)
            {
                (void)RwTextureAddRef(dstBumpMapData->texture);
            }

            if (NULL != dstBumpMapData->bumpTexture)
            {
                (void)RwTextureAddRef(dstBumpMapData->bumpTexture);
            }

            break;
        }
        case rpMATFXEFFECTENVMAP:
        {
            RwTexture* texture;
            RwFrame* frame;
            RwReal coef;
            RwBool useFrameBufferAlpha;

            texture = RpMatFXMaterialGetEnvMapTexture(srcMaterial);
            frame = RpMatFXMaterialGetEnvMapFrame(srcMaterial);
            coef = RpMatFXMaterialGetEnvMapCoefficient(srcMaterial);
            useFrameBufferAlpha = RpMatFXMaterialGetEnvMapFrameBufferAlpha(srcMaterial);

            if (NULL != texture)
            {
                ret = RpMatFXMaterialSetEnvMapTexture(dstMaterial, texture);
            }
            ret = RpMatFXMaterialSetEnvMapFrame(dstMaterial, frame);
            ret = RpMatFXMaterialSetEnvMapFrameBufferAlpha(dstMaterial, useFrameBufferAlpha);
            ret = RpMatFXMaterialSetEnvMapCoefficient(dstMaterial, coef);

            break;
        }
        case rpMATFXEFFECTDUAL:
        {
            RwTexture* texture;
            RwBlendFunction srcBlendMode;
            RwBlendFunction dstBlendMode;

            texture = RpMatFXMaterialGetDualTexture(srcMaterial);
            RpMatFXMaterialGetDualBlendModes(srcMaterial, &srcBlendMode, &dstBlendMode);

            if (NULL != texture)
            {
                ret = RpMatFXMaterialSetDualTexture(dstMaterial, texture);
            }
            ret = RpMatFXMaterialSetDualBlendModes(dstMaterial, srcBlendMode, dstBlendMode);

            break;
        }
        case rpMATFXEFFECTUVTRANSFORM:
        {
            RwMatrix* baseTransform;
            RwMatrix* dualTransform;

            srcMaterial =
                RpMatFXMaterialGetUVTransformMatrices(srcMaterial, &baseTransform, &dualTransform);

            dstMaterial =
                RpMatFXMaterialSetUVTransformMatrices(dstMaterial, baseTransform, dualTransform);

            break;
        }
        default:
        {
            /* We shouldn't get here. */

            break;
        }
        }
    }

    return dstObject;
}

RwStream* _rpMatFXStreamWriteTexture(RwStream* stream, const RwTexture* texture)
{
    RwBool present;

    present = (NULL != texture);

    if (!RwStreamWriteInt32(stream, (RwInt32*)&present, sizeof(RwBool)))
    {
        return ((RwStream*)NULL);
    }
    if (present)
    {
        if (!RwTextureStreamWrite(texture, stream))
        {
            return ((RwStream*)NULL);
        }
    }

    return stream;
}

RwUInt32 _rpMatFXStreamSizeTexture(const RwTexture* texture)
{
    RwUInt32 size;

    size = sizeof(RwBool);

    if (texture)
    {
        size += RwTextureStreamGetSize(texture);
    }

    return (size);
}

static RwStream* MatFXMaterialStreamWrite(RwStream* stream, RwInt32 binaryLength,
                                          const void* object, RwInt32 offsetInObject,
                                          RwInt32 sizeInObject)
{
    const RpMaterial* material = (const RpMaterial*)object;
    const rpMatFXMaterialData* materialData;
    RwUInt8 pass;
    RwInt32 temp;

    materialData = (const rpMatFXMaterialData*)*MATFXMATERIALGETCONSTDATA(material);

    temp = materialData->flags;
    if (!RwStreamWriteInt32(stream, &temp, sizeof(RwInt32)))
    {
        return NULL;
    }

    for (pass = 0; pass < rpMAXPASS; pass++)
    {
        RpMatFXMaterialFlags effect;

        effect = materialData->data[pass].flag;
        if (!RwStreamWriteInt32(stream, (RwInt32*)&effect, sizeof(RwInt32)))
        {
            return NULL;
        }

        switch (effect)
        {
        case rpMATFXEFFECTNULL:
        case rpMATFXEFFECTUVTRANSFORM:
        {
            break;
        }
        case rpMATFXEFFECTBUMPMAP:
        {
            const MatFXBumpMapData* bumpData;
            RwReal coef;

            bumpData = &(materialData->data[pass].data.bumpMap);
            coef = -bumpData->coef;

            if (!RwStreamWriteReal(stream, &coef, sizeof(RwReal)))
            {
                return NULL;
            }
            if (!_rpMatFXStreamWriteTexture(stream, bumpData->texture))
            {
                return NULL;
            }
            if (!_rpMatFXStreamWriteTexture(stream, bumpData->bumpTexture))
            {
                return NULL;
            }

            break;
        }
        case rpMATFXEFFECTENVMAP:
        {
            const MatFXEnvMapData* envData;
            envData = &(materialData->data[pass].data.envMap);
            if (!RwStreamWriteReal(stream, &(envData->coef), sizeof(RwReal)))
            {
                return NULL;
            }
            temp = envData->useFrameBufferAlpha;
            if (!RwStreamWriteInt32(stream, &temp, sizeof(RwInt32)))
            {
                return NULL;
            }
            if (!_rpMatFXStreamWriteTexture(stream, envData->texture))
            {
                return NULL;
            }

            break;
        }
        case rpMATFXEFFECTDUAL:
        {
            const MatFXDualData* dualData;
            dualData = &(materialData->data[pass].data.dual);

            temp = dualData->srcBlendMode;
            if (!RwStreamWriteInt32(stream, &temp, sizeof(RwInt32)))
            {
                return NULL;
            }

            temp = dualData->dstBlendMode;
            if (!RwStreamWriteInt32(stream, &temp, sizeof(RwInt32)))
            {
                return NULL;
            }

            if (!_rpMatFXStreamWriteTexture(stream, dualData->texture))
            {
                return NULL;
            }

            break;
        }
        default:
        {
            break;
        }
        }
    }
    return stream;
}

static RwStream* MatFXMaterialStreamRead(RwStream* stream, RwInt32 binaryLength, void* object,
                                         RwInt32 offsetInObject, RwInt32 sizeInObject)
{
    RpMaterial* material;
    rpMatFXMaterialData* materialData;
    RpMatFXMaterialFlags flags;
    RwUInt8 pass;

    material = (RpMaterial*)object;
    materialData = (rpMatFXMaterialData*)MatFXMaterialGetData(material);
    if (NULL == materialData)
    {
        return NULL;
    }

    if (!RwStreamReadInt32(stream, (RwInt32*)&flags, sizeof(RwInt32)))
    {
        return NULL;
    }

    RpMatFXMaterialSetEffects(material, flags);

    for (pass = 0; pass < rpMAXPASS; pass++)
    {
        RpMatFXMaterialFlags effect;

        if (!RwStreamReadInt32(stream, (RwInt32*)&effect, sizeof(RwInt32)))
        {
            return NULL;
        }
        switch (effect)
        {
        case rpMATFXEFFECTNULL:
        case rpMATFXEFFECTUVTRANSFORM:
        {
            break;
        }
        case rpMATFXEFFECTBUMPMAP:
        {
            RwReal coef;
            RwTexture* texture = NULL;
            RwTexture* bumpTexture = NULL;
            MatFXBumpMapData* bumpMapData;

            bumpMapData = &(materialData->data[pass].data.bumpMap);
            if (!RwStreamReadReal(stream, &coef, sizeof(RwReal)))
            {
                return NULL;
            }
            if (!_rpMatFXStreamReadTexture(stream, &texture))
            {
                return NULL;
            }
            if (!_rpMatFXStreamReadTexture(stream, &bumpTexture))
            {
                if (texture)
                {
                    RwTextureDestroy(texture);
                }

                return NULL;
            }
            if (texture != NULL)
            {
                RwRaster* raster;
                RwInt32 nWidth;
                RwReal width;

                bumpMapData->texture = texture;
                bumpMapData->bumpTexture = bumpTexture;
                raster = RwTextureGetRaster(bumpMapData->texture);
                nWidth = RwRasterGetWidth(raster);
                width = (RwReal)nWidth;
                bumpMapData->invBumpWidth = 1.0f / width;
            }
            else if (bumpTexture != NULL)
            {
                RpMatFXMaterialSetBumpMapTexture(material, bumpTexture);
                RwTextureDestroy(bumpTexture);
            }
            else
            {
                bumpMapData->texture = (RwTexture*)NULL;
                bumpMapData->bumpTexture = (RwTexture*)NULL;
            }

            RpMatFXMaterialSetBumpMapCoefficient(material, coef);

            break;
        }
        case rpMATFXEFFECTENVMAP:
        {
            RwReal coef;
            RwBool useFrameBufferAlpha;
            RwTexture* texture = 0;

            if (!RwStreamReadReal(stream, &coef, sizeof(RwReal)))
            {
                return NULL;
            }
            if (!RwStreamReadInt32(stream, (RwInt32*)&useFrameBufferAlpha, sizeof(RwInt32)))
            {
                return NULL;
            }
            if (!_rpMatFXStreamReadTexture(stream, &texture))
            {
                return NULL;
            }
            if (texture != NULL)
            {
                RpMatFXMaterialSetEnvMapTexture(material, texture);
                RwTextureDestroy(texture);
            }

            RpMatFXMaterialSetEnvMapCoefficient(material, coef);
            RpMatFXMaterialSetEnvMapFrameBufferAlpha(material, useFrameBufferAlpha);

            break;
        }
        case rpMATFXEFFECTDUAL:
        {
            RwBlendFunction blendFuncs[2];
            RwTexture* texture = 0;

            if (!RwStreamReadInt32(stream, (RwInt32*)blendFuncs, sizeof(blendFuncs)))
            {
                return NULL;
            }
            if (!_rpMatFXStreamReadTexture(stream, &texture))
            {
                return NULL;
            }
            if (texture != NULL)
            {
                RpMatFXMaterialSetDualTexture(material, texture);
                RwTextureDestroy(texture);
            }

            RpMatFXMaterialSetDualBlendModes(material, blendFuncs[0], blendFuncs[1]);

            break;
        }
        default:
        {
            break;
        }
        }
    }
    return stream;
}

static RwInt32 MatFXMaterialStreamGetSize(const void* object, RwInt32 offsetInObject,
                                          RwInt32 sizeInObject)
{
    const RpMaterial* material;
    const rpMatFXMaterialData* materialData;

    RwInt32 size;
    RwUInt8 pass;

    material = (const RpMaterial*)object;
    materialData = (const rpMatFXMaterialData*)*MATFXMATERIALGETCONSTDATA(material);

    if (NULL == materialData || rpMATFXEFFECTNULL == materialData->flags)
    {
        return FALSE;
    }

    size = sizeof(RpMatFXMaterialFlags);

    for (pass = 0; pass < rpMAXPASS; pass++)
    {
        RpMatFXMaterialFlags effect;

        effect = materialData->data[pass].flag;
        size += sizeof(RpMatFXMaterialFlags);
        switch (effect)
        {
        case rpMATFXEFFECTNULL:
        case rpMATFXEFFECTUVTRANSFORM:
        {
            break;
        }
        case rpMATFXEFFECTBUMPMAP:
        {
            size += sizeof(RwReal);
            size += _rpMatFXStreamSizeTexture(materialData->data[pass].data.bumpMap.texture);
            size += _rpMatFXStreamSizeTexture(materialData->data[pass].data.bumpMap.bumpTexture);
            break;
        }
        case rpMATFXEFFECTENVMAP:
        {
            size += sizeof(RwReal);
            size += sizeof(RwBool);
            size += _rpMatFXStreamSizeTexture(materialData->data[pass].data.envMap.texture);
            break;
        }
        case rpMATFXEFFECTDUAL:
        {
            size += 2 * sizeof(RwBlendFunction);
            size += _rpMatFXStreamSizeTexture(materialData->data[pass].data.dual.texture);

            break;
        }
        default:
        {
            break;
        }
        }
    }

    return size;
}

static void* MatFXAtomicConstructor(void* object, RwInt32 offset, RwInt32 size)
{
    MatFXAtomicData* atomicData;

    atomicData = (MatFXAtomicData*)MATFXATOMICGETDATA((RpAtomic*)object);
    atomicData->enabled = FALSE;

    return object;
}

static void* MatFXAtomicDestructor(void* object, RwInt32 offset, RwInt32 size)
{
    MatFXAtomicData* atomicData;

    atomicData = (MatFXAtomicData*)MATFXATOMICGETDATA((RpAtomic*)object);
    atomicData->enabled = FALSE;

    return object;
}

static void* MatFXAtomicCopy(void* dstObject, const void* srcObject, RwInt32 offset, RwInt32 size)
{
    const RpAtomic* srcAtomic;
    const MatFXAtomicData* srcAtomicData;

    RpAtomic* dstAtomic;
    MatFXAtomicData* dstAtomicData;

    srcAtomic = (const RpAtomic*)srcObject;
    dstAtomic = (RpAtomic*)dstObject;

    srcAtomicData = (const MatFXAtomicData*)MATFXATOMICGETCONSTDATA(srcAtomic);
    dstAtomicData = (MatFXAtomicData*)MATFXATOMICGETDATA(dstAtomic);

    if (srcAtomicData->enabled)
    {
        dstAtomicData->enabled = TRUE;
    }

    return dstObject;
}

static RwStream* MatFXAtomicStreamWrite(RwStream* stream, RwInt32 binaryLength, const void* object,
                                        RwInt32 offsetInObject, RwInt32 sizeInObject)
{
    const MatFXAtomicData* atomicData = MATFXATOMICGETCONSTDATA(object);
    RwStream* streamOut;
    RwInt32 temp;

    temp = atomicData->enabled;
    streamOut = RwStreamWriteInt32(stream, &temp, sizeof(RwInt32));

    return streamOut;
}

static RwStream* MatFXAtomicStreamRead(RwStream* stream, RwInt32 binaryLength, void* object,
                                       RwInt32 offsetInObject, RwInt32 sizeInObject)
{
    RpAtomic* atomic = (RpAtomic*)object;
    RwBool enabled;

    if (!RwStreamReadInt32(stream, (RwInt32*)&enabled, sizeof(RwInt32)))
    {
        return NULL;
    }
    if (enabled)
    {
        RpMatFXAtomicEnableEffects(atomic);
    }

    return stream;
}

static RwInt32 MatFXAtomicStreamGetSize(const void* object, RwInt32 offsetInObject,
                                        RwInt32 sizeInObject)
{
    const MatFXAtomicData* atomicData = MATFXATOMICGETCONSTDATA(object);

    if (FALSE == atomicData->enabled)
    {
        return FALSE;
    }

    return (sizeof(RwBool));
}

static void* MatFXWorldSectorConstructor(void* object, RwInt32 offset, RwInt32 size)
{
    MatFXWorldSectorData* worldSectorData;

    worldSectorData = (MatFXWorldSectorData*)MATFXWORLDSECTORGETDATA((RpWorldSector*)object);
    worldSectorData->enabled = FALSE;

    return object;
}

static void* MatFXWorldSectorDestructor(void* object, RwInt32 offset, RwInt32 size)
{
    MatFXWorldSectorData* worldSectorData;

    worldSectorData = (MatFXWorldSectorData*)MATFXWORLDSECTORGETDATA((RpWorldSector*)object);
    worldSectorData->enabled = FALSE;

    return object;
}

static void* MatFXWorldSectorCopy(void* dstObject, const void* srcObject, RwInt32 offset,
                                  RwInt32 size)
{
    const RpWorldSector* srcWorldSector;
    const MatFXWorldSectorData* srcWorldSectorData;

    RpWorldSector* dstWorldSector;
    MatFXWorldSectorData* dstWorldSectorData;

    srcWorldSector = (const RpWorldSector*)srcObject;
    dstWorldSector = (RpWorldSector*)dstObject;

    srcWorldSectorData = (const MatFXWorldSectorData*)MATFXWORLDSECTORGETCONSTDATA(srcWorldSector);
    dstWorldSectorData = (MatFXWorldSectorData*)MATFXWORLDSECTORGETDATA(dstWorldSector);

    if (srcWorldSectorData->enabled)
    {
        dstWorldSectorData->enabled = TRUE;
    }

    return dstObject;
}

static RwStream* MatFXWorldSectorStreamWrite(RwStream* stream, RwInt32 binaryLength,
                                             const void* object, RwInt32 offsetInObject,
                                             RwInt32 sizeInObject)
{
    RwStream* streamOut;
    RwInt32 temp;
    const MatFXWorldSectorData* sectorData = MATFXWORLDSECTORGETCONSTDATA(object);

    temp = sectorData->enabled;
    streamOut = RwStreamWriteInt32(stream, &temp, sizeof(RwInt32));

    return streamOut;
}

static RwStream* MatFXWorldSectorStreamRead(RwStream* stream, RwInt32 binaryLength, void* object,
                                            RwInt32 offsetInObject, RwInt32 sizeInObject)
{
    RpWorldSector* worldSector = (RpWorldSector*)object;
    RwBool enabled;

    if (!RwStreamReadInt32(stream, (RwInt32*)&enabled, sizeof(RwInt32)))
    {
        return NULL;
    }

    if (enabled)
    {
        RpMatFXWorldSectorEnableEffects(worldSector);
    }

    return stream;
}

static RwInt32 MatFXWorldSectorStreamGetSize(const void* object, RwInt32 offsetInObject,
                                             RwInt32 sizeInObject)
{
    const MatFXWorldSectorData* sectorData = MATFXWORLDSECTORGETCONSTDATA(object);

    if (FALSE == sectorData->enabled)
    {
        return FALSE;
    }

    return (sizeof(RwBool));
}

RwTexture* _rpMatFXTextureMaskCreate(const RwTexture* baseTexture, const RwTexture* maskTexture)
{
    RwRaster* baseRaster = (RwRaster*)NULL;
    RwRaster* maskRaster;
    RwRaster* newRaster;

    RwInt32 maskX, maskY;
    RwInt32 baseX, baseY;

    RwImage* maskImage;
    RwImage* baseImage;

    RwTexture* result;

    RwTextureFilterMode filterMode;
    RwTextureAddressMode addrsMode;

    maskRaster = RwTextureGetRaster(maskTexture);
    maskX = RwRasterGetWidth(maskRaster);
    maskY = RwRasterGetHeight(maskRaster);
    maskImage = RwImageCreate(maskX, maskY, 32);

    RwImageAllocatePixels(maskImage);
    RwImageSetFromRaster(maskImage, maskRaster);

    if (baseTexture)
    {
        baseRaster = RwTextureGetRaster(baseTexture);
        baseX = RwRasterGetWidth(baseRaster);
        baseY = RwRasterGetHeight(baseRaster);
        baseImage = RwImageCreate(baseX, baseY, 32);

        RwImageAllocatePixels(baseImage);
        RwImageSetFromRaster(baseImage, baseRaster);
    }
    else
    {
        RwInt32 x, y;

        baseX = RwRasterGetWidth(maskRaster);
        baseY = RwRasterGetHeight(maskRaster);
        baseImage = RwImageCreate(baseX, baseY, 32);
        RwImageAllocatePixels(baseImage);

        for (y = 0; y < baseY; y++)
        {
            for (x = 0; x < baseX; x++)
            {
                *(RwUInt32*)(RwImageGetPixels(baseImage) + RwImageGetStride(baseImage) * y +
                             x * 4) = 0xFfFfFfFf;
            }
        }
    }

    if ((baseX != maskX) || (baseY != maskY))
    {
        RwImage* resampleImage;

        resampleImage = RwImageCreate(baseX, baseY, 32);

        RwImageAllocatePixels(resampleImage);
        RwImageResample(resampleImage, maskImage);
        RwImageDestroy(maskImage);

        maskImage = resampleImage;
    }

    RwImageMakeMask(maskImage);
    RwImageApplyMask(baseImage, maskImage);

    {
        RwInt32 rasterWidth, rasterHeight;
        RwInt32 rasterDepth, rasterFlags, rasterBaseFlags;

        RwImageFindRasterFormat(baseImage, rwRASTERTYPETEXTURE, &rasterWidth, &rasterHeight,
                                &rasterDepth, &rasterFlags);

        if (baseTexture)
        {
            rasterBaseFlags = RwRasterGetFormat(baseRaster);
        }
        else
        {
            rasterBaseFlags = RwRasterGetFormat(maskRaster);
        }

        if (rasterBaseFlags & rwRASTERFORMATMIPMAP)
        {
            rasterFlags |= (rwRASTERFORMATAUTOMIPMAP | rwRASTERFORMATMIPMAP);
        }

        newRaster = RwRasterCreate(rasterWidth, rasterHeight, rasterDepth, rasterFlags);
        RwRasterSetFromImage(newRaster, baseImage);
    }

    result = RwTextureCreate(newRaster);

    if (baseTexture)
    {
        filterMode = RwTextureGetFilterMode(baseTexture);
        addrsMode = RwTextureGetAddressing(baseTexture);
    }
    else
    {
        filterMode = RwTextureGetFilterMode(maskTexture);
        addrsMode = RwTextureGetAddressing(maskTexture);
    }

    RwTextureSetAddressing(result, addrsMode);
    RwTextureSetFilterMode(result, filterMode);

    RwImageDestroy(baseImage);
    RwImageDestroy(maskImage);

    {
        RwChar newName[rwTEXTUREBASENAMELENGTH] = { 0 };

        GenBumpedTextureName(newName, baseTexture, maskTexture);
        RwTextureSetName(result, newName);
    }

    return result;
}

RpAtomic* RpMatFXAtomicEnableEffects(RpAtomic* atomic)
{
    MatFXAtomicData* atomicData;

    atomicData = (MatFXAtomicData*)MATFXATOMICGETDATA(atomic);

    if (atomicData->enabled == FALSE)
    {
        if (NULL == _rpMatFXPipelineAtomicSetup(atomic))
        {
            return NULL;
        }

        atomicData->enabled = TRUE;
    }

    return atomic;
}

RpWorldSector* RpMatFXWorldSectorEnableEffects(RpWorldSector* worldSector)
{
    MatFXWorldSectorData* worldSectorData;

    worldSectorData = (MatFXWorldSectorData*)MATFXWORLDSECTORGETDATA(worldSector);

    if (worldSectorData->enabled == FALSE)
    {
        if (NULL == _rpMatFXPipelineWorldSectorSetup(worldSector))
        {
            return NULL;
        }

        worldSectorData->enabled = TRUE;
    }

    return worldSector;
}

RpMaterial* RpMatFXMaterialSetEffects(RpMaterial* material, RpMatFXMaterialFlags flags)
{
    rpMatFXMaterialData* materialData;

    materialData = (rpMatFXMaterialData*)MatFXMaterialGetData(material);
    if (NULL == materialData)
    {
        return NULL;
    }

    if ((flags == rpMATFXEFFECTNULL) ||
        ((materialData->flags != rpMATFXEFFECTNULL) && (materialData->flags != flags)))
    {
        MatFXMaterialDataClean(materialData);
    }

    materialData->flags = flags;

    switch (materialData->flags)
    {
    case rpMATFXEFFECTBUMPMAP:
    {
        materialData->data[rpSECONDPASS].flag = rpMATFXEFFECTBUMPMAP;

        break;
    }
    case rpMATFXEFFECTENVMAP:
    {
        materialData->data[rpSECONDPASS].flag = rpMATFXEFFECTENVMAP;

        break;
    }
    case rpMATFXEFFECTBUMPENVMAP:
    {
        materialData->data[rpSECONDPASS].flag = rpMATFXEFFECTBUMPMAP;
        materialData->data[rpTHIRDPASS].flag = rpMATFXEFFECTENVMAP;

        break;
    }
    case rpMATFXEFFECTDUAL:
    {
        materialData->data[rpSECONDPASS].flag = rpMATFXEFFECTDUAL;

        RpMatFXMaterialSetDualBlendModes(material, rwBLENDSRCALPHA, rwBLENDINVSRCALPHA);

        break;
    }
    case rpMATFXEFFECTUVTRANSFORM:
    {
        materialData->data[rpSECONDPASS].flag = rpMATFXEFFECTUVTRANSFORM;

        break;
    }
    case rpMATFXEFFECTDUALUVTRANSFORM:
    {
        materialData->data[rpSECONDPASS].flag = rpMATFXEFFECTUVTRANSFORM;
        materialData->data[rpTHIRDPASS].flag = rpMATFXEFFECTDUAL;

        RpMatFXMaterialSetDualBlendModes(material, rwBLENDSRCALPHA, rwBLENDINVSRCALPHA);

        break;
    }
    case rpMATFXEFFECTNULL:
    {
        break;
    }
    default:
    {
        break;
    }
    }

    _rpMatFXMaterialPlatformInitialize(material);

    return material;
}

RpMaterial* RpMatFXMaterialSetupBumpMap(RpMaterial* material, RwTexture* texture, RwFrame* frame,
                                        RwReal coef)
{
    if (NULL == RpMatFXMaterialSetBumpMapTexture(material, texture))
    {
        return NULL;
    }

    if (NULL == RpMatFXMaterialSetBumpMapFrame(material, frame))
    {
        return NULL;
    }

    if (NULL == RpMatFXMaterialSetBumpMapCoefficient(material, coef))
    {
        return NULL;
    }

    return material;
}

RpMaterial* RpMatFXMaterialSetupEnvMap(RpMaterial* material, RwTexture* texture, RwFrame* frame,
                                       RwBool useFrameBufferAlpha, RwReal coef)
{
    if (NULL == RpMatFXMaterialSetEnvMapTexture(material, texture))
    {
        return NULL;
    }

    if (NULL == RpMatFXMaterialSetEnvMapFrame(material, frame))
    {
        return NULL;
    }

    if (NULL == RpMatFXMaterialSetEnvMapFrameBufferAlpha(material, useFrameBufferAlpha))
    {
        return NULL;
    }

    if (NULL == RpMatFXMaterialSetEnvMapCoefficient(material, coef))
    {
        return NULL;
    }

    return material;
}

RpMatFXMaterialFlags RpMatFXMaterialGetEffects(const RpMaterial* material)
{
    const rpMatFXMaterialData* materialData;

    materialData = (const rpMatFXMaterialData*)*MATFXMATERIALGETCONSTDATA(material);

    if (NULL == materialData)
    {
        return (rpMATFXEFFECTNULL);
    }

    return (materialData->flags);
}

RpMaterial* RpMatFXMaterialSetBumpMapTexture(RpMaterial* material, RwTexture* bumpTexture)
{
    MatFXBumpMapData* bumpMapData;

    bumpMapData = (MatFXBumpMapData*)MATFXBUMPMAPGETDATA(material);

    if (NULL != bumpMapData->bumpTexture)
    {
        RwTextureDestroy(bumpMapData->bumpTexture);
        bumpMapData->bumpTexture = (RwTexture*)NULL;
    }

    if (NULL != bumpMapData->texture)
    {
        RwTextureDestroy(bumpMapData->texture);

        bumpMapData->texture = (RwTexture*)NULL;
        bumpMapData->invBumpWidth = 0;
    }

    if (bumpTexture)
    {
        RwBool dummyTextures;
        RwRaster* bumpRaster;
        RwTexture* baseTexture;

        bumpMapData->bumpTexture = bumpTexture;
        (void)RwTextureAddRef(bumpMapData->bumpTexture);
        bumpRaster = RwTextureGetRaster(bumpTexture);
        dummyTextures = (0 == RwRasterGetWidth(bumpRaster));

        baseTexture = RpMaterialGetTexture(material);
        if (!dummyTextures && baseTexture)
        {
            RwRaster* baseRaster;
            baseRaster = RwTextureGetRaster(baseTexture);
            dummyTextures = (0 == RwRasterGetWidth(baseRaster));
        }

        if (!dummyTextures)
        {
            RwChar bumpedName[rwTEXTUREBASENAMELENGTH] = { 0 };
            RwTexDictionary* dict;
            RwRaster* bumpedRaster;

            GenBumpedTextureName(bumpedName, baseTexture, bumpTexture);

            dict = RwTexDictionaryGetCurrent();
            bumpMapData->texture = (RwTexture*)NULL;
            if (dict)
            {
                bumpMapData->texture = RwTexDictionaryFindNamedTexture(dict, bumpedName);
            }

            if (!bumpMapData->texture)
            {
                bumpMapData->texture =
                    (RwTexture*)_rpMatFXSetupBumpMapTexture(baseTexture, bumpTexture);
                if (!bumpMapData->texture)
                {
                    return NULL;
                }

                if (dict)
                {
                    RwTexDictionaryAddTexture(dict, bumpMapData->texture);
                }
            }
            else
            {
                (void)RwTextureAddRef(bumpMapData->texture);
            }

            bumpedRaster = RwTextureGetRaster(bumpMapData->texture);
            bumpMapData->invBumpWidth = 1.0f / ((RwReal)RwRasterGetWidth(bumpedRaster));
        }
    }
    else
    {
        RwTexture* baseTexture;
        RwRaster* raster;

        baseTexture = RpMaterialGetTexture(material);
        raster = RwTextureGetRaster(baseTexture);

        bumpMapData->invBumpWidth = 1.0f / ((RwReal)RwRasterGetWidth(raster));
    }

    return material;
}

RpMaterial* RpMatFXMaterialSetBumpMapFrame(RpMaterial* material, RwFrame* frame)
{
}

RpMaterial* RpMatFXMaterialSetBumpMapCoefficient(RpMaterial* material, RwReal coef)
{
}

RwFrame* RpMatFXMaterialGetBumpMapFrame(const RpMaterial* material)
{
}

RwReal RpMatFXMaterialGetBumpMapCoefficient(const RpMaterial* material)
{
}

RpMaterial* RpMatFXMaterialSetEnvMapTexture(RpMaterial* material, RwTexture* texture)
{
    MatFXEnvMapData* envMapData;

    envMapData = (MatFXEnvMapData*)MATFXENVMAPGETDATA(material);
    RwTextureAddRef(texture);

    if (NULL != envMapData->texture)
    {
        RwTextureDestroy(envMapData->texture);
        envMapData->texture = (RwTexture*)NULL;
    }

    envMapData->texture = texture;

    return material;
}

RpMaterial* RpMatFXMaterialSetEnvMapFrame(RpMaterial* material, RwFrame* frame)
{
}
