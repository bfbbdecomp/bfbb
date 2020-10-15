#include "iLight.h"

#include <types.h>

// iLightInit(RpWorld*)
#pragma GLOBAL_ASM("asm/Core/p2/iLight.s", "iLightInit__FP7RpWorld")

// iLightCreate(iLight*,unsigned int)
#pragma GLOBAL_ASM("asm/Core/p2/iLight.s", "iLightCreate__FP6iLightUi")

// iLightModify(iLight*,unsigned int)
#pragma GLOBAL_ASM("asm/Core/p2/iLight.s", "iLightModify__FP6iLightUi")

// iLightSetColor(iLight*,_xFColor*)
#pragma GLOBAL_ASM("asm/Core/p2/iLight.s", "iLightSetColor__FP6iLightP8_xFColor")

// iLightSetPos(iLight*,xVec3*)
#pragma GLOBAL_ASM("asm/Core/p2/iLight.s", "iLightSetPos__FP6iLightP5xVec3")

// iLightDestroy(iLight*)
#pragma GLOBAL_ASM("asm/Core/p2/iLight.s", "iLightDestroy__FP6iLight")

// iLightEnv(iLight*,int)
#pragma GLOBAL_ASM("asm/Core/p2/iLight.s", "iLightEnv__FP6iLighti")
