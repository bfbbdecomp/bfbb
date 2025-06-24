#ifndef RPMATFX_H
#define RPMATFX_H

#include "rwcore.h"
#include "rpworld.h"

enum RpMatFXGameCubePipeline
{
    rpNAMATFXGAMECUBEPIPELINE = 0,
    rpMATFXGAMECUBEATOMICPIPELINE = 1,
    rpMATFXGAMECUBEWORLDSECTORPIPELINE = 2,
    rpMATFXGAMECUBEPIPELINEMAX,
    rpMATFXGAMECUBEPIPELINEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

enum RpMatFXMaterialFlags
{
    rpMATFXEFFECTNULL = 0,
    rpMATFXEFFECTBUMPMAP = 1,
    rpMATFXEFFECTENVMAP = 2,
    rpMATFXEFFECTBUMPENVMAP = 3,
    rpMATFXEFFECTDUAL = 4,
    rpMATFXEFFECTUVTRANSFORM = 5,
    rpMATFXEFFECTDUALUVTRANSFORM = 6,
    rpMATFXEFFECTMAX,
    rpMATFXNUMEFFECTS = rpMATFXEFFECTMAX - 1,
    rpMATFXFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RxPipeline RxPipeline;
typedef enum RpMatFXGameCubePipeline RpMatFXGameCubePipeline;

extern RxPipeline* RpMatFXGetGameCubePipeline(RpMatFXGameCubePipeline gamecubePipeline);
extern RwBool RpMatFXPluginAttach(void);
extern RpAtomic* RpMatFXAtomicEnableEffects(RpAtomic* atomic);
extern RpWorldSector* RpMatFXWorldSectorEnableEffects(RpWorldSector* worldSector);
typedef enum RpMatFXMaterialFlags RpMatFXMaterialFlags;

extern RpMaterial* RpMatFXMaterialSetEffects(RpMaterial* material, RpMatFXMaterialFlags flags);
extern RpMaterial* RpMatFXMaterialSetupBumpMap(RpMaterial* material, RwTexture* texture,
                                               RwFrame* frame, RwReal coef);
extern RpMaterial* RpMatFXMaterialSetupEnvMap(RpMaterial* material, RwTexture* texture,
                                              RwFrame* frame, RwBool useFrameBufferAlpha,
                                              RwReal coef);
extern RpMatFXMaterialFlags RpMatFXMaterialGetEffects(const RpMaterial* material);
extern RpMaterial* RpMatFXMaterialSetBumpMapTexture(RpMaterial* material, RwTexture* texture);
extern RpMaterial* RpMatFXMaterialSetBumpMapFrame(RpMaterial* material, RwFrame* frame);
extern RpMaterial* RpMatFXMaterialSetBumpMapCoefficient(RpMaterial* material, RwReal coef);
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

#endif
