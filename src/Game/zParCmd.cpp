#include "zParCmd.h"

#include <types.h>

// zParCmdInit()
#pragma GLOBAL_ASM("asm/Game/zParCmd.s", "zParCmdInit__Fv")

// zParCmdFindClipVolumes()
#pragma GLOBAL_ASM("asm/Game/zParCmd.s", "zParCmdFindClipVolumes__Fv")

// xParCmdCustom_Grass_Update(xParCmd*,xParGroup*,float)
#pragma GLOBAL_ASM("asm/Game/zParCmd.s", "xParCmdCustom_Grass_Update__FP7xParCmdP9xParGroupf")
