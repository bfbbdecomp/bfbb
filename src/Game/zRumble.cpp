#include "zRumble.h"

#include <types.h>

// zRumbleStart(int,_tagSDRumbleType,xEnt*)
#pragma GLOBAL_ASM("asm/Game/zRumble.s", "zRumbleStart__Fi16_tagSDRumbleTypeP4xEnt")

// zRumbleStart(int,_tagSDRumbleType)
#pragma GLOBAL_ASM("asm/Game/zRumble.s", "zRumbleStart__Fi16_tagSDRumbleType")

// zRumbleStart(_tagSDRumbleType)
#pragma GLOBAL_ASM("asm/Game/zRumble.s", "zRumbleStart__F16_tagSDRumbleType")

// zRumbleStart(_tagSDRumbleType,xEnt*)
#pragma GLOBAL_ASM("asm/Game/zRumble.s", "zRumbleStart__F16_tagSDRumbleTypeP4xEnt")

// zRumbleStartDistance(int,float,float,_tagRumbleType,float)
#pragma GLOBAL_ASM("asm/Game/zRumble.s", "zRumbleStartDistance__Fiff14_tagRumbleTypef")

// zRumbleStartEntDistance(xEnt*,float,_tagRumbleType,float)
#pragma GLOBAL_ASM("asm/Game/zRumble.s", "zRumbleStartEntDistance__FP4xEntf14_tagRumbleTypef")

// zPadAddRumble(_tagRumbleType,float,int,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zRumble.s", "zPadAddRumble__F14_tagRumbleTypefiUi")
