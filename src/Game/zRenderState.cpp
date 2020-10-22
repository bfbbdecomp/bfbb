#include "zRenderState.h"

#include <types.h>

// zRenderStateInit()
#pragma GLOBAL_ASM("asm/Game/zRenderState.s", "zRenderStateInit__Fv")

// zRenderStateCurrent()
#pragma GLOBAL_ASM("asm/Game/zRenderState.s", "zRenderStateCurrent__Fv")

// zRenderState(_SDRenderState)
#pragma GLOBAL_ASM("asm/Game/zRenderState.s", "zRenderState__F14_SDRenderState")
