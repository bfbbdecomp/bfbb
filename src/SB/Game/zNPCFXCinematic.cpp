#include "xVec3.h"
#include "xMath3.h"

#include "zNPCFXCinematic.h"

#include <types.h>
#include "xCutscene.h"

void zNPCFXShutdown()
{
}

void clamp_bone_index(NCINEntry*, RpAtomic*)
{
}

void NPCCone::TextureSet(RwRaster* raster)
{
    rast_cone = raster;
}

void NPCCone::RadiusSet(F32 conefloat)
{
    rad_cone = conefloat;
}
