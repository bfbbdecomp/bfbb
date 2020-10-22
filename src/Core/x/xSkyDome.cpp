#include "xSkyDome.h"

#include <types.h>

#include "xEnt.h"

void xSkyDome_EmptyRender(xEnt* ent)
{
    return;
}

// xSkyDome_Setup()
#pragma GLOBAL_ASM("asm/Core/x/xSkyDome.s", "xSkyDome_Setup__Fv")

// xSkyDome_AddEntity(xEnt*,int,int)
#pragma GLOBAL_ASM("asm/Core/x/xSkyDome.s", "xSkyDome_AddEntity__FP4xEntii")

// SkyDomeInfo::operator =(const SkyDomeInfo&)
#pragma GLOBAL_ASM("asm/Core/x/xSkyDome.s", "__as__11SkyDomeInfoFRC11SkyDomeInfo")

// xSkyDome_Render()
#pragma GLOBAL_ASM("asm/Core/x/xSkyDome.s", "xSkyDome_Render__Fv")
