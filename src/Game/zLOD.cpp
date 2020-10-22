#include "zLOD.h"

#include <types.h>

// AddToLODList(xModelInstance*)
#pragma GLOBAL_ASM("asm/Game/zLOD.s", "AddToLODList__FP14xModelInstance")

// zLOD_Setup()
#pragma GLOBAL_ASM("asm/Game/zLOD.s", "zLOD_Setup__Fv")

// zLOD_Update(unsigned int)
#pragma GLOBAL_ASM("asm/Game/zLOD.s", "zLOD_Update__FUi")

// zLOD_Get(xEnt*)
#pragma GLOBAL_ASM("asm/Game/zLOD.s", "zLOD_Get__FP4xEnt")

// zLOD_UseCustomTable(xEnt*,zLODTable*)
#pragma GLOBAL_ASM("asm/Game/zLOD.s", "zLOD_UseCustomTable__FP4xEntP9zLODTable")
