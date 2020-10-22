#include "zAssetTypes.h"

#include <types.h>

// zAssetStartup()
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s", "zAssetStartup__Fv")

// zAssetShutdown()
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s", "zAssetShutdown__Fv")

// jsp_shadow_hack_match(RpAtomic*)
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s", "jsp_shadow_hack_match__FP8RpAtomic")

// jsp_shadow_hack(xJSPHeader*)
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s", "jsp_shadow_hack__FP10xJSPHeader")

// ATBL_Init()
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s", "ATBL_Init__Fv")

// FootstepHackSceneEnter()
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s", "FootstepHackSceneEnter__Fv")

// Anim_ATBL_getTable(xAnimTable* (*)(void))
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s", "Anim_ATBL_getTable__FPFv_P10xAnimTable")

// xSndPlay3D(unsigned int,float,float,unsigned int,unsigned int,xEnt*,float,sound_category,float)
#pragma GLOBAL_ASM("asm/Game/zAssetTypes.s", "xSndPlay3D__FUiffUiUiP4xEntf14sound_categoryf")
