#ifndef RPMATFX_MULTITEX_H
#define RPMATFX_MULTITEX_H

#include "rwcore.h"
#include "rpworld.h"

#include <plugin/matfx/multiTexEffect.h>

#define rpMAXMULTITEXTURES 8

struct rpMultiTextureRegEntry
{
    RwPlatformID platformID;
    RwUInt32 pluginID;
    RwUInt32 materialOffset;
    RwUInt32 extensionSize;
};
typedef struct rpMultiTextureRegEntry rpMultiTextureRegEntry;

struct RpMultiTexture
{
    rpMultiTextureRegEntry* regEntry;

    RwUInt32 numTextures;
    RwTexture* textures[rpMAXMULTITEXTURES];
    RwUInt8 coordMap[rpMAXMULTITEXTURES];

    RpMTEffect* effect;

    void* extension;
};

typedef struct RpMultiTexture RpMultiTexture;

typedef struct _rpMultiTextureGlobals
{
    rpMTEffectGlobals effect;

} rpMultiTextureGlobals;

extern RwModuleInfo _rpMultiTextureModule;

#define RPMULTITEXTUREGLOBAL(var)                                                                  \
    (RWPLUGINOFFSET(rpMultiTextureGlobals, RwEngineInstance, _rpMultiTextureModule.globalsOffset)  \
         ->var)

#ifdef __cplusplus
extern "C" {
#endif

extern RwUInt32 RpMultiTextureGetNumTextures(const RpMultiTexture* multiTexture);

extern RpMultiTexture* RpMultiTextureSetTexture(RpMultiTexture* multiTexture, RwUInt32 index,
                                                RwTexture* texture);

extern RwTexture* RpMultiTextureGetTexture(const RpMultiTexture* multiTexture, RwUInt32 index);

extern RpMultiTexture* RpMultiTextureSetCoords(RpMultiTexture* multiTexture, RwUInt32 index,
                                               RwUInt32 texCoordIndex);

extern RwUInt32 RpMultiTextureGetCoords(const RpMultiTexture* multiTexture, RwUInt32 index);

extern RpMultiTexture* RpMultiTextureSetEffect(RpMultiTexture* multiTexture, RpMTEffect* effect);

extern RpMTEffect* RpMultiTextureGetEffect(const RpMultiTexture* multiTexture);

extern RpMaterial* RpMaterialCreateMultiTexture(RpMaterial* material, RwPlatformID platformID,
                                                RwUInt32 numTextures);

extern RpMaterial* RpMaterialDestroyMultiTexture(RpMaterial* material, RwPlatformID platformID);

extern RpMultiTexture* RpMaterialGetMultiTexture(const RpMaterial* material,
                                                 RwPlatformID platformID);

extern RwBool RpMaterialQueryMultiTexturePlatform(RwPlatformID platformID);

extern RwBool _rpMultiTexturePluginAttach(void);

extern RwBool _rpMaterialRegisterMultiTexturePlugin(RwPlatformID platformID, RwUInt32 pluginID,
                                                    RwUInt32 extensionSize);

extern RwBool _rpMultiTexturePlatformPluginsAttach(void);

#ifdef __cplusplus
}
#endif

#endif
