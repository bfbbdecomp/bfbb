#include <types.h>

#include "../Core/x/xAnim.h"

#include "zAnimList.h"

uint32 AlwaysConditional(xAnimTransition*, xAnimSingle*, void*)
{
    return 1;
}

// func_8004E7E8
#pragma GLOBAL_ASM("asm/Game/zAnimList.s", "zAnimListInit__Fv")

// func_8004EB44
#pragma GLOBAL_ASM("asm/Game/zAnimList.s", "zAnimListExit__Fv")

// func_8004EB5C
#pragma GLOBAL_ASM("asm/Game/zAnimList.s", "zAnimListGetTable__FUi")

// func_8004EBA4
#pragma GLOBAL_ASM("asm/Game/zAnimList.s", "zAnimListGetNumUsed__FUi")
