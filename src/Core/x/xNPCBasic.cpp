#include "xNPCBasic.h"

#include <types.h>

// xNPCBasic::Init(xEntAsset*)
#pragma GLOBAL_ASM("asm/Core/x/xNPCBasic.s", "Init__9xNPCBasicFP9xEntAsset")

// xNPCBasic::Reset()
#pragma GLOBAL_ASM("asm/Core/x/xNPCBasic.s", "Reset__9xNPCBasicFv")

// NPC_spdBasedColFreq(xNPCBasic*,float)
#pragma GLOBAL_ASM("asm/Core/x/xNPCBasic.s", "NPC_spdBasedColFreq__FP9xNPCBasicf")

// xNPCBasic::Process(xScene*,float)
#pragma GLOBAL_ASM("asm/Core/x/xNPCBasic.s", "Process__9xNPCBasicFP6xScenef")

// xNPCBasic::NewTime(xScene*,float)
#pragma GLOBAL_ASM("asm/Core/x/xNPCBasic.s", "NewTime__9xNPCBasicFP6xScenef")

// xNPCBasic::DBG_PStatClear()
#pragma GLOBAL_ASM("asm/Core/x/xNPCBasic.s", "DBG_PStatClear__9xNPCBasicFv")

// xNPCBasic::DBG_HaltOnMe(unsigned int,char*)
#pragma GLOBAL_ASM("asm/Core/x/xNPCBasic.s", "DBG_HaltOnMe__9xNPCBasicFUiPc")
