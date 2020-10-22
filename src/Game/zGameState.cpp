#include "zGameState.h"

#include <types.h>

// zGameStateGet()
#pragma GLOBAL_ASM("asm/Game/zGameState.s", "zGameStateGet__Fv")

// zGameModeGet()
#pragma GLOBAL_ASM("asm/Game/zGameState.s", "zGameModeGet__Fv")

// zGameGetOstrich()
#pragma GLOBAL_ASM("asm/Game/zGameState.s", "zGameGetOstrich__Fv")

// zGameSetOstrich(_GameOstrich)
#pragma GLOBAL_ASM("asm/Game/zGameState.s", "zGameSetOstrich__F12_GameOstrich")

// zGameStateFindEvent(unsigned int*,int,int,int,int*,int*)
#pragma GLOBAL_ASM("asm/Game/zGameState.s", "zGameStateFindEvent__FPUiiiiPiPi")

// zGameStateSwitchEvent(int)
#pragma GLOBAL_ASM("asm/Game/zGameState.s", "zGameStateSwitchEvent__Fi")

// zGameStateSwitch(int)
#pragma GLOBAL_ASM("asm/Game/zGameState.s", "zGameStateSwitch__Fi")

// zGameModeSwitch(eGameMode)
#pragma GLOBAL_ASM("asm/Game/zGameState.s", "zGameModeSwitch__F9eGameMode")
