#include "xGroup.h"

#include <types.h>

#pragma GLOBAL_ASM("asm/Core/x/xGroup.s", "xgroup_rename_me")

// xGroupInit(xBase*,xGroupAsset*)
#pragma GLOBAL_ASM("asm/Core/x/xGroup.s", "xGroupInit__FP5xBaseP11xGroupAsset")

// xGroupSetup(xGroup*)
#pragma GLOBAL_ASM("asm/Core/x/xGroup.s", "xGroupSetup__FP6xGroup")

// xGroupSave(xGroup*,xSerial*)
#pragma GLOBAL_ASM("asm/Core/x/xGroup.s", "xGroupSave__FP6xGroupP7xSerial")

// xGroupLoad(xGroup*,xSerial*)
#pragma GLOBAL_ASM("asm/Core/x/xGroup.s", "xGroupLoad__FP6xGroupP7xSerial")

// xGroupReset(xGroup*)
#pragma GLOBAL_ASM("asm/Core/x/xGroup.s", "xGroupReset__FP6xGroup")

// xGroupGetCount(xGroup*)
#pragma GLOBAL_ASM("asm/Core/x/xGroup.s", "xGroupGetCount__FP6xGroup")

// xGroupGetItemPtr(xGroup*,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xGroup.s", "xGroupGetItemPtr__FP6xGroupUi")

// xGroupFindItemPtr(xGroup*,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xGroup.s", "xGroupFindItemPtr__FP6xGroupUi")

// xGroupGetItem(xGroup*,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xGroup.s", "xGroupGetItem__FP6xGroupUi")

// xGroup::get_any()
#pragma GLOBAL_ASM("asm/Core/x/xGroup.s", "get_any__6xGroupFv")
