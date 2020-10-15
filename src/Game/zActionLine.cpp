#include "zActionLine.h"

#include <types.h>

// zActionLineInit()
#pragma GLOBAL_ASM("asm/Game/zActionLine.s", "zActionLineInit__Fv")

// zActionLineUpdate(float)
#pragma GLOBAL_ASM("asm/Game/zActionLine.s", "zActionLineUpdate__Ff")

// RenderActionLine(_tagActionLine*)
#pragma GLOBAL_ASM("asm/Game/zActionLine.s", "RenderActionLine__FP14_tagActionLine")

// zActionLineRender()
#pragma GLOBAL_ASM("asm/Game/zActionLine.s", "zActionLineRender__Fv")
