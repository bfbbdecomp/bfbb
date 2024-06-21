#include <types.h>
#include <rwcore.h>
#include <CodeWarrior/string.h>
#include "../Core/x/xBase.h"
#include "../Core/x/xString.h"
#include "../Core/x/xstransvc.h"
#include "zFeet.h"
#include "zScene.h"
#include "zSurface.h"

// TODO: replace hardcoded constant
uint32 sSurfaceSoundIDStep[23];
xBase* paremit_sd_pawprint;
xBase* paremit_vil_footprint;
RwRaster* sSkidMarkRaster;

void zFeetGetIDs()
{
    int8 type_name[128];
    int8 name[128];

    for (int32 i = 0; i < 23; i++)
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