#include "zGrid.h"

#include <types.h>

// hack_flag_shadows(zScene*)
#pragma GLOBAL_ASM("asm/Game/zGrid.s", "hack_flag_shadows__FP6zScene")

// zGridReset(zScene*)
#pragma GLOBAL_ASM("asm/Game/zGrid.s", "zGridReset__FP6zScene")

// zGridInit(zScene*)
#pragma GLOBAL_ASM("asm/Game/zGrid.s", "zGridInit__FP6zScene")

// zGridExit(zScene*)
#pragma GLOBAL_ASM("asm/Game/zGrid.s", "zGridExit__FP6zScene")

// zGridUpdateEnt(xEnt*)
#pragma GLOBAL_ASM("asm/Game/zGrid.s", "zGridUpdateEnt__FP4xEnt")
