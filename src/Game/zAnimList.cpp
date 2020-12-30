#include <types.h>

#include "../Core/x/xAnim.h"

#include "zAnimList.h"

extern int32 nals;
extern uint32* aids;
extern xAnimTable** atbls;
extern int32* anused;

uint32 AlwaysConditional(xAnimTransition*, xAnimSingle*, void*)
{
    return 1;
}

// func_8004E7E8
#pragma GLOBAL_ASM("asm/Game/zAnimList.s", "zAnimListInit__Fv")

void zAnimListExit()
{
    nals = 0;
    aids = NULL;
    atbls = NULL;
    anused = NULL;
}

// func_8004EB5C
#pragma GLOBAL_ASM("asm/Game/zAnimList.s", "zAnimListGetTable__FUi")

// func_8004EBA4
#pragma GLOBAL_ASM("asm/Game/zAnimList.s", "zAnimListGetNumUsed__FUi")
