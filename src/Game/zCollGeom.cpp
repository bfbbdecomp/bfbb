#include "zCollGeom.h"

#include <types.h>

// zCollGeom_EntSetup(xEnt*)
#pragma GLOBAL_ASM("asm/Game/zCollGeom.s", "zCollGeom_EntSetup__FP4xEnt")

// zCollGeom_Init()
#pragma GLOBAL_ASM("asm/Game/zCollGeom.s", "zCollGeom_Init__Fv")

// zCollGeom_CamEnable(xEnt*)
#pragma GLOBAL_ASM("asm/Game/zCollGeom.s", "zCollGeom_CamEnable__FP4xEnt")

// zCollGeom_CamDisable(xEnt*)
#pragma GLOBAL_ASM("asm/Game/zCollGeom.s", "zCollGeom_CamDisable__FP4xEnt")
