#include "zMenu.h"

#include <types.h>

// zMenuRunning()
#pragma GLOBAL_ASM("asm/Game/zMenu.s", "zMenuRunning__Fv")

// zMenuInit(unsigned int)
#pragma GLOBAL_ASM("asm/Game/zMenu.s", "zMenuInit__FUi")

// zMenuExit()
#pragma GLOBAL_ASM("asm/Game/zMenu.s", "zMenuExit__Fv")

// zMenuSetup()
#pragma GLOBAL_ASM("asm/Game/zMenu.s", "zMenuSetup__Fv")

// zMenuLoop()
#pragma GLOBAL_ASM("asm/Game/zMenu.s", "zMenuLoop__Fv")

// zMenuIsPaused()
#pragma GLOBAL_ASM("asm/Game/zMenu.s", "zMenuIsPaused__Fv")

// zMenuLoopContinue()
#pragma GLOBAL_ASM("asm/Game/zMenu.s", "zMenuLoopContinue__Fv")

// zMenuUpdateMode()
#pragma GLOBAL_ASM("asm/Game/zMenu.s", "zMenuUpdateMode__Fv")

// zMenuGetCorruptFiles(char (*)[64])
#pragma GLOBAL_ASM("asm/Game/zMenu.s", "zMenuGetCorruptFiles__FPA64_c")

// zMenuCardCheckStartup(int*,int*,int*)
#pragma GLOBAL_ASM("asm/Game/zMenu.s", "zMenuCardCheckStartup__FPiPiPi")

// zMenuGetBadCard()
#pragma GLOBAL_ASM("asm/Game/zMenu.s", "zMenuGetBadCard__Fv")

// zMenuFMVPlay(char*,unsigned int,float,bool,bool)
#pragma GLOBAL_ASM("asm/Game/zMenu.s", "zMenuFMVPlay__FPcUifbb")

// zMenuIsFirstBoot()
#pragma GLOBAL_ASM("asm/Game/zMenu.s", "zMenuIsFirstBoot__Fv")

// zMenuFirstBootSet(int)
#pragma GLOBAL_ASM("asm/Game/zMenu.s", "zMenuFirstBootSet__Fi")
