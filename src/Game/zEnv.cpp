#include "zEnv.h"

#include <types.h>

// zEnvInit(void*,void*)
#pragma GLOBAL_ASM("asm/Game/zEnv.s", "zEnvInit__FPvPv")

// zEnvInit(_zEnv*,xEnvAsset*)
#pragma GLOBAL_ASM("asm/Game/zEnv.s", "zEnvInit__FP5_zEnvP9xEnvAsset")

// zEnvSetup(_zEnv*)
#pragma GLOBAL_ASM("asm/Game/zEnv.s", "zEnvSetup__FP5_zEnv")

// zEnvStartingCamera(_zEnv*)
#pragma GLOBAL_ASM("asm/Game/zEnv.s", "zEnvStartingCamera__FP5_zEnv")

// zEnvRender(xEnv*)
#pragma GLOBAL_ASM("asm/Game/zEnv.s", "zEnvRender__FP4xEnv")

// zEnvSave(_zEnv*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zEnv.s", "zEnvSave__FP5_zEnvP7xSerial")

// zEnvLoad(_zEnv*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zEnv.s", "zEnvLoad__FP5_zEnvP7xSerial")

// zEnvReset(_zEnv*)
#pragma GLOBAL_ASM("asm/Game/zEnv.s", "zEnvReset__FP5_zEnv")
