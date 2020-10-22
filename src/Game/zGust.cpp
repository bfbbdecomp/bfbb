#include "zGust.h"

#include <types.h>

// zGustInit(zGust*,zGustAsset*)
#pragma GLOBAL_ASM("asm/Game/zGust.s", "zGustInit__FP5zGustP10zGustAsset")

// zGustSetup(zGust*)
#pragma GLOBAL_ASM("asm/Game/zGust.s", "zGustSetup__FP5zGust")

// zGustInit()
#pragma GLOBAL_ASM("asm/Game/zGust.s", "zGustInit__Fv")

// zGustSetup()
#pragma GLOBAL_ASM("asm/Game/zGust.s", "zGustSetup__Fv")

// zGustTurnOn(zGust*)
#pragma GLOBAL_ASM("asm/Game/zGust.s", "zGustTurnOn__FP5zGust")

// zGustTurnOff(zGust*)
#pragma GLOBAL_ASM("asm/Game/zGust.s", "zGustTurnOff__FP5zGust")

// zGustToggleOn(zGust*)
#pragma GLOBAL_ASM("asm/Game/zGust.s", "zGustToggleOn__FP5zGust")

// zGustGetGust(unsigned short)
#pragma GLOBAL_ASM("asm/Game/zGust.s", "zGustGetGust__FUs")

#pragma GLOBAL_ASM("asm/Game/zGust.s", "func_8009AFB4")

// zGustSave(zGust*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zGust.s", "zGustSave__FP5zGustP7xSerial")

// zGustLoad(zGust*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zGust.s", "zGustLoad__FP5zGustP7xSerial")

// zGustReset(zGust*)
#pragma GLOBAL_ASM("asm/Game/zGust.s", "zGustReset__FP5zGust")

// UpdateGustFX(zGust*,float)
#pragma GLOBAL_ASM("asm/Game/zGust.s", "UpdateGustFX__FP5zGustf")

// zGustUpdateFX(float)
#pragma GLOBAL_ASM("asm/Game/zGust.s", "zGustUpdateFX__Ff")
