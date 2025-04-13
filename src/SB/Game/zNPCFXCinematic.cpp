#include "xVec3.h"
#include "xMath3.h"

#include "zNPCFXCinematic.h"

#include <types.h>
#include "xCutscene.h"

void zNPCFXShutdown()
{
}

static S32 init = 0;
void zNPCFXCinematic_Init()
{
    if (!init)
    {
        init = 1;
    }
    //g_noz_ncin = &nozey_npc_cinematics;
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

void NPARMgmt::KillAll()
{
    this->cnt_active = 0;
}