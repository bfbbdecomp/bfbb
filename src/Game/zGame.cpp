#include "zGame.h"

#include <types.h>

// PickNextSoak()
#pragma GLOBAL_ASM("asm/Game/zGame.s", "PickNextSoak__Fv")

// zGameInit(unsigned int)
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameInit__FUi")

// zGameExit()
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameExit__Fv")

// zGameSetup()
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameSetup__Fv")

// zGameLoop()
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameLoop__Fv")

// zGameIsPaused()
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameIsPaused__Fv")

// zGameLoopContinue()
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameLoopContinue__Fv")

// zGameOkToPause()
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameOkToPause__Fv")

// zGamePause()
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGamePause__Fv")

// zGameStall()
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameStall__Fv")

// zGame_HackDrawCard(float,float,float,float,RwRaster*)
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGame_HackDrawCard__FffffP8RwRaster")

// zGame_HackPostPortalAutoSaveDraw()
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGame_HackPostPortalAutoSaveDraw__Fv")

// zGameUpdateMode()
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameUpdateMode__Fv")

// zGameTakeSnapShot(RwCamera*)
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameTakeSnapShot__FP8RwCamera")

// zGameUpdateTransitionBubbles()
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameUpdateTransitionBubbles__Fv")

// zGameScreenTransitionBegin()
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameScreenTransitionBegin__Fv")

// zGameScreenTransitionUpdate(float,char*)
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameScreenTransitionUpdate__FfPc")

// zGameScreenTransitionUpdate(float,char*,unsigned char*)
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameScreenTransitionUpdate__FfPcPUc")

// zGameScreenTransitionEnd()
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameScreenTransitionEnd__Fv")

// zGameSetupPlayer()
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameSetupPlayer__Fv")

// zGameStats_Init()
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameStats_Init__Fv")

#pragma GLOBAL_ASM("asm/Game/zGame.s", "xUtil_select_esc__0_c_esc__1___FPPciPCf")

// xDrawEnd()
#pragma GLOBAL_ASM("asm/Game/zGame.s", "xDrawEnd__Fv")

// xDrawBegin()
#pragma GLOBAL_ASM("asm/Game/zGame.s", "xDrawBegin__Fv")
