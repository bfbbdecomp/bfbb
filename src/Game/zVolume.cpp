#include "zVolume.h"

#include <types.h>

// zVolumeInit(zVolume*,xVolumeAsset*)
#pragma GLOBAL_ASM("asm/Game/zVolume.s", "zVolumeInit__FP7zVolumeP12xVolumeAsset")

// zVolumeInit()
#pragma GLOBAL_ASM("asm/Game/zVolume.s", "zVolumeInit__Fv")

// zVolumeSetup()
#pragma GLOBAL_ASM("asm/Game/zVolume.s", "zVolumeSetup__Fv")

// zVolumeGetVolume(unsigned short)
#pragma GLOBAL_ASM("asm/Game/zVolume.s", "zVolumeGetVolume__FUs")

// zVolume_OccludePrecalc(xVec3*)
#pragma GLOBAL_ASM("asm/Game/zVolume.s", "zVolume_OccludePrecalc__FP5xVec3")
