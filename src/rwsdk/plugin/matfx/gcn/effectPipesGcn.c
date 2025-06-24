#include "rwplcore.h"
#include "rwcore.h"
#include "rpmatfx.h"

RwTexture* _rpMatFXTextureMaskCreate();
RpWorldSector* _RpMatFXWorldSectorPipe;

typedef struct MatFXDualData MatFXDualData;

extern RpWorldSector* _rpMatFXPipelineWorldSectorSetup(RpWorldSector* worldSector)
{
    _RpMatFXWorldSectorPipe = worldSector;
}

extern RwBool _rpMatFXSetupDualRenderState(MatFXDualData* dualData, RwRenderState nState)
{
    return TRUE;
}

extern RwTexture* _rpMatFXSetupBumpMapTexture(const RwTexture* baseTexture,
                                              const RwTexture* effectTexture)
{
    _rpMatFXTextureMaskCreate();
}
