#include <types.h>
#include <rwcore.h>
#include <string.h>
#include "xBase.h"
#include "xString.h"
#include "xstransvc.h"
#include "zFeet.h"
#include "zScene.h"
#include "zSurface.h"

// TODO: replace hardcoded constant
static U32 sSurfaceSoundIDStep[23];
xBase* paremit_sd_pawprint;
xBase* paremit_vil_footprint;
RwRaster* sSkidMarkRaster;

void zFeetGetIDs()
{
    S8 type_name[128];
    S8 name[128];

    for (S32 i = 0; i < 23; i++)
    {
        zSurfaceGetName(i, type_name);
        strcpy(name, "SNDFX_STEP_");
        strcat(name, type_name);
        sSurfaceSoundIDStep[i] = xStrHash(name);
    }

    paremit_sd_pawprint = zSceneFindObject(xStrHash("PAREMIT_SD_PAWPRINT"));
    paremit_vil_footprint = zSceneFindObject(xStrHash("PAREMIT_VIL_FOOTPRINT"));

    RwTexture* tex = (RwTexture*)xSTFindAsset(xStrHash("SKIDMARKTEX"), NULL);

    if (tex != NULL)
    {
        sSkidMarkRaster = tex->raster;
    }
}
