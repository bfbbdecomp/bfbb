#include "xVec3.h"
#include "xMath3.h"

#include "zNPCFXCinematic.h"

#include <types.h>
#include "xCutscene.h"

static S32 init = 0;

void zNPCFXShutdown()
{
}

void zNPCFXCinematic_Init()
{
    if (!init)
    {
        init = 1;
    }
}

void clamp_bone_index(NCINEntry*, RpAtomic*)
{
}

void NPCCone::TextureSet(RwRaster* raster)
{
    rast_cone = raster;
}

void NPCCone::UVSliceSet(F32 u, F32 v)
{
    this->uv_tip[2] = u;
    this->uv_slice[1] = v; 
}

void NPCCone::UVBaseSet(F32 u, F32 v)
{
    this->uv_tip[0] = u;
    this->uv_tip[1] = v;
}

void NPCCone::ColorSet(RwRGBA top, RwRGBA bot)
{
    this->rgba_top = top;
    this->rgba_bot = bot;
}

void NPCCone::RadiusSet(F32 conefloat)
{
    rad_cone = conefloat;
}

void NPARMgmt::KillAll()
{
    this->cnt_active = 0;
}

