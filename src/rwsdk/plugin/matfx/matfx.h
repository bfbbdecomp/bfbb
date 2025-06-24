#ifndef RPMATFX_MATFX_H
#define RPMATFX_MATFX_H

#include "rwcore.h"
#include "rpworld.h"

typedef enum RpMatFXMaterialFlags RpMatFXMaterialFlags;
typedef struct RwMatFXInfo RwMatFXInfo;
typedef struct RwModuleInfo RwModuleInfo;

struct RwMatFXInfo
{
    RwModuleInfo Module;
    RwFreeList* MaterialData;
};

extern RwMatFXInfo MatFXInfo;

#ifdef __cplusplus
extern "C" {
#endif

extern void RpMatFXMaterialDataSetFreeListCreateParams(RwInt32 blockSize,
                                                       RwInt32 numBlocksToPrealloc);

extern RwBool RpMatFXPluginAttach(void);
extern RpAtomic* RpMatFXAtomicEnableEffects(RpAtomic* atomic);
extern RwBool RpMatFXAtomicQueryEffects(RpAtomic* atomic);
extern RpWorldSector* RpMatFXWorldSectorEnableEffects(RpWorldSector* worldSector);
extern RwBool RpMatFXWorldSectorQueryEffects(RpWorldSector* worldSector);
extern RpMaterial* RpMatFXMaterialSetEffects(RpMaterial* material, RpMatFXMaterialFlags flags);

extern RpMaterial* RpMatFXMaterialSetupBumpMap(RpMaterial* material, RwTexture* texture,
                                               RwFrame* frame, RwReal coef);

extern RpMaterial* RpMatFXMaterialSetupEnvMap(RpMaterial* material, RwTexture* texture,
                                              RwFrame* frame, RwBool useFrameBufferAlpha,
                                              RwReal coef);

extern RpMaterial* RpMatFXMaterialSetupDualTexture(RpMaterial* material, RwTexture* texture,
                                                   RwBlendFunction srcBlendMode,
                                                   RwBlendFunction dstBlendMode);

extern RpMatFXMaterialFlags RpMatFXMaterialGetEffects(const RpMaterial* material);

extern RpMaterial* RpMatFXMaterialSetBumpMapTexture(RpMaterial* material, RwTexture* texture);

extern RpMaterial* RpMatFXMaterialSetBumpMapFrame(RpMaterial* material, RwFrame* frame);

extern RpMaterial* RpMatFXMaterialSetBumpMapCoefficient(RpMaterial* material, RwReal coef);
extern RwTexture* RpMatFXMaterialGetBumpMapTexture(const RpMaterial* material);

extern RwTexture* RpMatFXMaterialGetBumpMapBumpedTexture(const RpMaterial* material);

extern RwFrame* RpMatFXMaterialGetBumpMapFrame(const RpMaterial* material);

extern RwReal RpMatFXMaterialGetBumpMapCoefficient(const RpMaterial* material);

extern RpMaterial* RpMatFXMaterialSetEnvMapTexture(RpMaterial* material, RwTexture* texture);

extern RpMaterial* RpMatFXMaterialSetEnvMapFrame(RpMaterial* material, RwFrame* frame);

extern RpMaterial* RpMatFXMaterialSetEnvMapFrameBufferAlpha(RpMaterial* material,
                                                            RwBool useFrameBufferAlpha);

extern RpMaterial* RpMatFXMaterialSetEnvMapCoefficient(RpMaterial* material, RwReal coef);

extern RwTexture* RpMatFXMaterialGetEnvMapTexture(const RpMaterial* material);

extern RwFrame* RpMatFXMaterialGetEnvMapFrame(const RpMaterial* material);

extern RwBool RpMatFXMaterialGetEnvMapFrameBufferAlpha(const RpMaterial* material);

extern RwReal RpMatFXMaterialGetEnvMapCoefficient(const RpMaterial* material);

extern RpMaterial* RpMatFXMaterialSetDualTexture(RpMaterial* material, RwTexture* texture);

extern RpMaterial* RpMatFXMaterialSetDualBlendModes(RpMaterial* material,
                                                    RwBlendFunction srcBlendMode,
                                                    RwBlendFunction dstBlendMode);

extern RwTexture* RpMatFXMaterialGetDualTexture(const RpMaterial* material);

extern const RpMaterial* RpMatFXMaterialGetDualBlendModes(const RpMaterial* material,
                                                          RwBlendFunction* srcBlendMode,
                                                          RwBlendFunction* dstBlendMode);

extern RpMaterial* RpMatFXMaterialSetUVTransformMatrices(RpMaterial* material,
                                                         RwMatrix* baseTransform,
                                                         RwMatrix* dualTransform);

extern const RpMaterial* RpMatFXMaterialGetUVTransformMatrices(const RpMaterial* material,
                                                               RwMatrix** baseTransform,
                                                               RwMatrix** dualTransform);

#ifdef __cplusplus
}
#endif

extern RwStream* _rpMatFXStreamWriteTexture(RwStream* stream, const RwTexture* texture);

extern RwStream* _rpMatFXStreamReadTexture(RwStream* stream, RwTexture** texture);

extern RwUInt32 _rpMatFXStreamSizeTexture(const RwTexture* texture);

#endif
