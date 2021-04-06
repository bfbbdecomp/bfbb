#include "zParCmd.h"
#include "../src/Core/x/xParCmd.h"

#include <types.h>

// func_800A7CC4
void zParCmdInit()
{
    xParCmdInit();
    xParCmdRegister(0x04, 0x2c, xParCmdJet_Update);
    xParCmdRegister(0x0e, 0x10, xParCmdPlayerCollision_Update);
    xParCmdRegister(0x10, 0x1c, xParCmdCustom_Update);
    xParCmdRegister(0x1a, 0x0c, xParCmdClipVolumes_Update);
    xParCmdRegister(0x1b, 0x0c, xParCmdAnimalMagentism_Update);
    xParCmdRegister(0x1c, 0x10, xParCmdDamagePlayer_Update);
    xParCmdRegister(0x16, 0x14, xParCmdApplyCamMat_Update);
    xParCmdRegister(0x11, 0x10, xParCmdKillDistance_Update);
}

// func_800A7D84
#pragma GLOBAL_ASM("asm/Game/zParCmd.s", "zParCmdFindClipVolumes__Fv")

// func_800A7E2C
#pragma GLOBAL_ASM("asm/Game/zParCmd.s", "xParCmdKillDistance_Update__FP7xParCmdP9xParGroupf")

// func_800A7EFC
#pragma GLOBAL_ASM("asm/Game/zParCmd.s", "xParCmdClipVolumes_Update__FP7xParCmdP9xParGroupf")

// func_800A7FA0
#pragma GLOBAL_ASM("asm/Game/zParCmd.s", "xParCmdPlayerCollision_Update__FP7xParCmdP9xParGroupf")

// func_800A7FA4
#pragma GLOBAL_ASM("asm/Game/zParCmd.s", "xParCmdAnimalMagentism_Update__FP7xParCmdP9xParGroupf")

// func_800A812C
#pragma GLOBAL_ASM("asm/Game/zParCmd.s", "xParCmdDamagePlayer_Update__FP7xParCmdP9xParGroupf")

// func_800A8298
#pragma GLOBAL_ASM("asm/Game/zParCmd.s", "xParCmdJet_Update__FP7xParCmdP9xParGroupf")

// func_800A8408
#pragma GLOBAL_ASM("asm/Game/zParCmd.s", "xParCmdCustom_Grass_Update__FP7xParCmdP9xParGroupf")

// func_800A8518
#pragma GLOBAL_ASM("asm/Game/zParCmd.s", "xParCmdApplyCamMat_Update__FP7xParCmdP9xParGroupf")

// func_800A8630
#pragma GLOBAL_ASM("asm/Game/zParCmd.s", "xParCmdCustom_Update__FP7xParCmdP9xParGroupf")
