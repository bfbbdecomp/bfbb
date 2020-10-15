#include "zNPCTypes.h"

#include <types.h>

// zNPCTypes_StartupTypes()
#pragma GLOBAL_ASM("asm/Game/zNPCTypes.s", "zNPCTypes_StartupTypes__Fv")

// zNPCTypes_ShutdownTypes()
#pragma GLOBAL_ASM("asm/Game/zNPCTypes.s", "zNPCTypes_ShutdownTypes__Fv")

// zNPCTypes_RegisterTypes(xFactory*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypes.s", "zNPCTypes_RegisterTypes__FP8xFactory")
