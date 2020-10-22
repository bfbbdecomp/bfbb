#include "xUpdateCull.h"

#include <types.h>

// xUpdateCull_Swap(xUpdateCullMgr*,unsigned int,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xUpdateCull.s", "xUpdateCull_Swap__FP14xUpdateCullMgrUiUi")

// xUpdateCull_MakeActive(xUpdateCullMgr*,xUpdateCullEnt*)
#pragma GLOBAL_ASM("asm/Core/x/xUpdateCull.s", "xUpdateCull_MakeActive__FP14xUpdateCullMgrP14xUpdateCullEnt")

// xUpdateCull_MakeInactive(xUpdateCullMgr*,xUpdateCullEnt*)
#pragma GLOBAL_ASM("asm/Core/x/xUpdateCull.s", "xUpdateCull_MakeInactive__FP14xUpdateCullMgrP14xUpdateCullEnt")

#pragma GLOBAL_ASM("asm/Core/x/xUpdateCull.s", "xUpdateCull_AlwaysTrueCB__FPvPv")

#pragma GLOBAL_ASM("asm/Core/x/xUpdateCull.s", "xUpdateCull_DistanceSquaredCB__FPvPv")

// xUpdateCull_Init(void**,unsigned int,xGroup**,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xUpdateCull.s", "xUpdateCull_Init__FPPvUiPP6xGroupUi")

// xUpdateCull_Update(xUpdateCullMgr*,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xUpdateCull.s", "xUpdateCull_Update__FP14xUpdateCullMgrUi")

// xUpdateCull_SetCB(xUpdateCullMgr*,void*,unsigned int (*)(void*, void*),void*)
#pragma GLOBAL_ASM("asm/Core/x/xUpdateCull.s", "xUpdateCull_SetCB__FP14xUpdateCullMgrPvPFPvPv_UiPv")

// xUpdateCull_Reset(xUpdateCullMgr*)
#pragma GLOBAL_ASM("asm/Core/x/xUpdateCull.s", "xUpdateCull_Reset__FP14xUpdateCullMgr")
