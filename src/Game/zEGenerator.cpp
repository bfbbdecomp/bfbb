#include "zEGenerator.h"

#include <types.h>

// zEGenerator_Init(void*,void*)
#pragma GLOBAL_ASM("asm/Game/zEGenerator.s", "zEGenerator_Init__FPvPv")

// zEGenerator_Init(zEGenerator*,xEntAsset*)
#pragma GLOBAL_ASM("asm/Game/zEGenerator.s", "zEGenerator_Init__FP11zEGeneratorP9xEntAsset")

// zEGenerator_Setup(zEGenerator*,xScene*)
#pragma GLOBAL_ASM("asm/Game/zEGenerator.s", "zEGenerator_Setup__FP11zEGeneratorP6xScene")

// zEGenerator_Save(zEGenerator*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zEGenerator.s", "zEGenerator_Save__FP11zEGeneratorP7xSerial")

// zEGenerator_Load(zEGenerator*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zEGenerator.s", "zEGenerator_Load__FP11zEGeneratorP7xSerial")

// zEGenerator_Reset(zEGenerator*,xScene*)
#pragma GLOBAL_ASM("asm/Game/zEGenerator.s", "zEGenerator_Reset__FP11zEGeneratorP6xScene")

// zEGenerator_TurnOn(zEGenerator*)
#pragma GLOBAL_ASM("asm/Game/zEGenerator.s", "zEGenerator_TurnOn__FP11zEGenerator")

// zEGenerator_TurnOff(zEGenerator*)
#pragma GLOBAL_ASM("asm/Game/zEGenerator.s", "zEGenerator_TurnOff__FP11zEGenerator")

// zEGenerator_ToggleOn(zEGenerator*)
#pragma GLOBAL_ASM("asm/Game/zEGenerator.s", "zEGenerator_ToggleOn__FP11zEGenerator")
