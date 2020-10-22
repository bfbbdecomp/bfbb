#include "zPendulum.h"

#include <types.h>

// zPendulum_Init(void*,void*)
#pragma GLOBAL_ASM("asm/Game/zPendulum.s", "zPendulum_Init__FPvPv")

// zPendulum_Init(_zPendulum*,xEntAsset*)
#pragma GLOBAL_ASM("asm/Game/zPendulum.s", "zPendulum_Init__FP10_zPendulumP9xEntAsset")

// zPendulum_Save(_zPendulum*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zPendulum.s", "zPendulum_Save__FP10_zPendulumP7xSerial")

// zPendulum_Load(_zPendulum*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zPendulum.s", "zPendulum_Load__FP10_zPendulumP7xSerial")

// zPendulum_Setup(_zPendulum*,xScene*)
#pragma GLOBAL_ASM("asm/Game/zPendulum.s", "zPendulum_Setup__FP10_zPendulumP6xScene")

// zPendulum_Reset(_zPendulum*,xScene*)
#pragma GLOBAL_ASM("asm/Game/zPendulum.s", "zPendulum_Reset__FP10_zPendulumP6xScene")
