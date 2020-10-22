#include "xLightKit.h"

#include <types.h>

// xLightKit_Prepare(void*)
#pragma GLOBAL_ASM("asm/Core/x/xLightKit.s", "xLightKit_Prepare__FPv")

// xLightKit_Enable(xLightKit*,RpWorld*)
#pragma GLOBAL_ASM("asm/Core/x/xLightKit.s", "xLightKit_Enable__FP9xLightKitP7RpWorld")

// xLightKit_GetCurrent(RpWorld*)
#pragma GLOBAL_ASM("asm/Core/x/xLightKit.s", "xLightKit_GetCurrent__FP7RpWorld")

// xLightKit_Destroy(xLightKit*)
#pragma GLOBAL_ASM("asm/Core/x/xLightKit.s", "xLightKit_Destroy__FP9xLightKit")
