#include "rwplcore.h"
#include "rwcore.h"
#include "rpmatfx.h"
#include <plugin/matfx/multiTex.h>

#define MAXPLATFORMID (rwID_PCD3D9)

#ifndef rwCHUNKHEADERSIZE
#define rwCHUNKHEADERSIZE (sizeof(RwUInt32) * 3)
#endif

#define rwMAXTEXTURECOORDS 8

#define rwID_MULTITEXPLUGIN MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x2c)
#define rwID_CHAINPLUGIN MAKECHUNKID(rwVENDORID_CRITERIONTK, 0x2d)

typedef struct _MultiTextureExt
{
    RpMultiTexture* multiTexture;

} MultiTextureExt;

typedef enum _MultiTextureStreamFlag
{
    MULTITEXTURESTREAMEFFECT = 0x01

} MultiTextureStreamFlag;

typedef struct _MultiTextureStreamHdr
{
    RwUInt8 platformID;
    RwUInt8 numTextures;
    RwUInt8 flags;
    RwUInt8 pad;

} MultiTextureStreamHdr;

rpMultiTextureRegEntry RegEntries[MAXPLATFORMID + 1];

RwModuleInfo _rpMultiTextureModule = { 0, 0 };

static void* MultiTextureOpen(void* object, RwInt32 offsetInObject, RwInt32 sizeInObject)
{
    _rpMultiTextureModule.numInstances++;
    _rpMTEffectOpen();
    return object;
}

static void* MultiTextureClose(void* object, RwInt32 offsetInObject, RwInt32 sizeInObject)
{
    _rpMTEffectClose();
    _rpMultiTextureModule.numInstances--;
    return object;
}

static void* MultiTextureConstructor(void* object, RwInt32 offset, RwInt32 size)
{
    *(RwInt32*)((RwInt32)object + offset) = 0;
}

static void* MultiTextureDestructor(void* object, RwInt32 offset, RwInt32 size)
{
    MultiTextureExt* ext = (MultiTextureExt*)GetMultiTextureExtMacro(object, offset);

    if (ext->multiTexture)
    {
        MultiTextureDestroy(ext->multiTexture);
        ext->multiTexture = (RpMultiTexture*)NULL;
    }

    return object;
}

static void* MultiTextureCopy(void* dstObject, const void* srcObject, RwInt32 offset, RwInt32 size)
{
    RpMultiTexture const* srcMT;
    RpMultiTexture* dstMT;
    RwUInt32 i;

    srcMT = 0;
    if (!srcMT)
    {
        RWRETURN(dstObject);
    }

    dstMT = (RpMultiTexture*)MultiTextureCreate(srcMT->regEntry, srcMT->numTextures);
    if (!dstMT)
    {
        return NULL;
    }

    for (i = 0; i < srcMT->numTextures; i++)
    {
        RpMultiTextureSetTexture(dstMT, i, RpMultiTextureGetTexture(srcMT, i));
        RpMultiTextureSetCoords(dstMT, i, RpMultiTextureGetCoords(srcMT, i));
    }

    RpMultiTextureSetEffect(dstMT, RpMultiTextureGetEffect(srcMT));

    return dstObject;
}

static RwInt32 MultiTextureStreamGetSize(const void* object, RwInt32 offset, RwInt32 sizeInObj)
{
}

static RwStream* MultiTextureStreamWrite(RwStream* stream, RwInt32 length, const void* object,
                                         RwInt32 offset, RwInt32 sizeInObj)
{
}

static RwStream* MultiTextureStreamRead(RwStream* stream, RwInt32 length, void* object,
                                        RwInt32 offset, RwInt32 sizeInObj)
{
}

RwBool _rpMultiTexturePluginAttach()
{
    if (!_rpMTEffectSystemInit())
    {
        return FALSE;
    }

    memset(RegEntries, 0, sizeof(RegEntries));

    _rpMultiTextureModule.globalsOffset = RwEngineRegisterPlugin(
        sizeof(rpMultiTextureGlobals), rwID_MULTITEXPLUGIN, MultiTextureOpen, MultiTextureClose);

    if (_rpMultiTextureModule.globalsOffset < 0)
    {
        return (FALSE);
    }

    return TRUE;
}

RwBool _rpMaterialRegisterMultiTexturePlugin(RwPlatformID platformID, RwUInt32 pluginID,
                                             RwUInt32 extensionSize)
{
    RwInt32 offset;
    rpMultiTextureRegEntry* regEntry;

    offset = RpMaterialRegisterPlugin(sizeof(MultiTextureExt), pluginID, MultiTextureConstructor,
                                      MultiTextureDestructor, MultiTextureCopy);
    if (offset < 0)
    {
        return FALSE;
    }
    regEntry = &RegEntries[platformID];
    regEntry->materialOffset = offset;
    offset = RpMaterialRegisterPluginStream(pluginID, MultiTextureStreamRead,
                                            MultiTextureStreamWrite, MultiTextureStreamGetSize);
    if (offset < 0)
    {
        return FALSE;
    }

    regEntry->platformID = platformID;
    regEntry->pluginID = pluginID;
    regEntry->extensionSize = extensionSize;

    return TRUE;
}

RpMultiTexture* RpMultiTextureSetEffect(RpMultiTexture* multiTexture, RpMTEffect* effect)
{
    if (multiTexture->effect)
    {
        RpMTEffectDestroy(multiTexture->effect);
    }
    multiTexture->effect = effect;
    if (effect)
    {
        RpMTEffectAddRef(multiTexture->effect);
    }
    return multiTexture;
}

RpMTEffect* RpMultiTextureGetEffect(const RpMultiTexture* multiTexture)
{
    return multiTexture->effect;
}

RpMultiTexture* RpMultiTextureSetTexture(RpMultiTexture* multiTexture, RwUInt32 index,
                                         RwTexture* texture)
{
    if (multiTexture->textures[index])
    {
        RwTextureDestroy(multiTexture->textures[index]);
    }

    multiTexture->textures[index] = texture;
    if (texture)
    {
        RwTextureAddRef(texture);
    }

    return multiTexture;
}

RwTexture* RpMultiTextureGetTexture(const RpMultiTexture* multiTexture, RwUInt32 index)
{
    return multiTexture->textures[index];
}

RpMultiTexture* RpMultiTextureSetCoords(RpMultiTexture* multiTexture, RwUInt32 index,
                                        RwUInt32 texCoordIndex)
{
    multiTexture->coordMap[index] = (RwUInt8)texCoordIndex;
    return multiTexture;
}

RwUInt32 RpMultiTextureGetCoords(const RpMultiTexture* multiTexture, RwUInt32 index)
{
    return multiTexture->coordMap[index];
}

RpMultiTexture* RpMaterialGetMultiTexture(const RpMaterial* material, RwPlatformID platformID)
{
    rpMultiTextureRegEntry* regEntry;

    regEntry = &RegEntries[platformID];
    if (regEntry->pluginID)
    {
        const MultiTextureExt* ext;
        ext = 0;
        return (ext->multiTexture);
    }
    return (RpMultiTexture*)NULL;
}
