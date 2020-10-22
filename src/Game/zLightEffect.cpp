#include "zLightEffect.h"

#include <types.h>

// zLightEffectSet(_zLight*,int)
#pragma GLOBAL_ASM("asm/Game/zLightEffect.s", "zLightEffectSet__FP7_zLighti")

// zLightOn(_zLight*,int)
#pragma GLOBAL_ASM("asm/Game/zLightEffect.s", "zLightOn__FP7_zLighti")

// leGetRandom()
#pragma GLOBAL_ASM("asm/Game/zLightEffect.s", "leGetRandom__Fv")

// EffectFlicker(_zLight*,float,float,float)
#pragma GLOBAL_ASM("asm/Game/zLightEffect.s", "EffectFlicker__FP7_zLightfff")

// leBlendToCol(float,float,float)
#pragma GLOBAL_ASM("asm/Game/zLightEffect.s", "leBlendToCol__Ffff")
