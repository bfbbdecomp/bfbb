#include "iTime.h"

#include <types.h>

// iGetMinute()
#pragma GLOBAL_ASM("asm/Core/p2/iTime.s", "iGetMinute__Fv")

// iGetHour()
#pragma GLOBAL_ASM("asm/Core/p2/iTime.s", "iGetHour__Fv")

// iGetDay()
#pragma GLOBAL_ASM("asm/Core/p2/iTime.s", "iGetDay__Fv")

// iGetMonth()
#pragma GLOBAL_ASM("asm/Core/p2/iTime.s", "iGetMonth__Fv")

// iGetCurrFormattedDate(char*)
#pragma GLOBAL_ASM("asm/Core/p2/iTime.s", "iGetCurrFormattedDate__FPc")

// iGetCurrFormattedTime(char*)
#pragma GLOBAL_ASM("asm/Core/p2/iTime.s", "iGetCurrFormattedTime__FPc")

// iTimeInit()
#pragma GLOBAL_ASM("asm/Core/p2/iTime.s", "iTimeInit__Fv")

// iTimeExit()
#pragma GLOBAL_ASM("asm/Core/p2/iTime.s", "iTimeExit__Fv")

// iTimeGet()
#pragma GLOBAL_ASM("asm/Core/p2/iTime.s", "iTimeGet__Fv")

// iTimeDiffSec(long long)
#pragma GLOBAL_ASM("asm/Core/p2/iTime.s", "iTimeDiffSec__Fx")

// iTimeDiffSec(long long,long long)
#pragma GLOBAL_ASM("asm/Core/p2/iTime.s", "iTimeDiffSec__Fxx")

// iTimeGameAdvance(float)
#pragma GLOBAL_ASM("asm/Core/p2/iTime.s", "iTimeGameAdvance__Ff")

// iTimeSetGame(float)
#pragma GLOBAL_ASM("asm/Core/p2/iTime.s", "iTimeSetGame__Ff")

// iProfileClear(unsigned int)
#pragma GLOBAL_ASM("asm/Core/p2/iTime.s", "iProfileClear__FUi")

// iFuncProfileDump()
#pragma GLOBAL_ASM("asm/Core/p2/iTime.s", "iFuncProfileDump__Fv")

// iFuncProfileParse(char*,int)
#pragma GLOBAL_ASM("asm/Core/p2/iTime.s", "iFuncProfileParse__FPci")
