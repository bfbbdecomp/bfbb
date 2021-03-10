#include "zGame.h"
#include "zGlobals.h"
#include "zParPTank.h"

#include "../Core/p2/iDraw.h"

#include <types.h>

extern eGameMode gGameMode;
extern eGameWhereAmI gGameWhereAmI;
extern RpLight* DirectionalLight;
extern RpWorld* World;
extern RwCamera* sGameScreenTransCam;
extern iTime sTimeLast;
extern iTime sTimeCurrent;
extern float32 sTimeElapsed;

extern float32 lbl_803CDA28;

// func_800974A8
#pragma GLOBAL_ASM("asm/Game/zGame.s", "PickNextSoak__Fv")

// func_8009771C
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameInit__FUi")

// func_800977FC
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameExit__Fv")

// func_800978A4
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameSetup__Fv")

// func_80097A20
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameLoop__Fv")

// func_8009817C
int32 zGameIsPaused()
{
    if (gGameMode == 8)
    {
        return 1;
    }
    if (gGameMode == 7)
    {
        return 1;
    }
    if (gGameMode == 6)
    {
        return 1;
    }
    return 0;
}

// func_800981B0
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameLoopContinue__Fv")

// func_80098234
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameOkToPause__Fv")

// func_800982D8
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGamePause__Fv")

// func_80098394
#if 1
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameStall__Fv")
#else
void zGameStall()
{
    if (!zGameIsPaused())
    {
        zGameModeSwitch(eGameMode_Stall);
        xSndPauseAll(1, 1);
        iPadStopRumble(globals.pad0);
        zEntEvent("techbutton6_click", 24);
    }
}
#endif

// func_800983F4
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGame_HackDrawCard__FffffP8RwRaster")

// func_80098560
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGame_HackPostPortalAutoSaveDraw__Fv")

// func_80098880
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameUpdateMode__Fv")

// func_80098D78
void zGameTakeSnapShot(RwCamera*)
{
}

// func_80098D7C
#if 1
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameUpdateTransitionBubbles__Fv")
#else
void zGameUpdateTransitionBubbles()
{
    gGameWhereAmI = eGameWhere_TransitionBubbles;
    sTimeCurrent = iTimeGet();
    sTimeElapsed = iTimeDiffSec(sTimeLast, sTimeCurrent);
    sTimeLast = sTimeCurrent;
    if (lbl_803CDA28 > sTimeElapsed) // if (sTimeElapsed <= lbl_803CDA28)
    {
        zParPTankUpdate(sTimeElapsed);
    }
    else
    {
        zParPTankUpdate(NULL);
    }
    zParPTankRender();
}
#endif

// func_80098DF8
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameScreenTransitionBegin__Fv")

// func_80098EE8
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameScreenTransitionUpdate__FfPc")

// func_80098F38
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameScreenTransitionUpdate__FfPcPUc")

// func_80099310
void zGameScreenTransitionEnd()
{
    RwFrame* frame;
    gGameWhereAmI = eGameWhere_TransitionEnd;
    _rwFrameSyncDirty();
    if (DirectionalLight != NULL)
    {
        frame = (RwFrame*)(DirectionalLight->object).object.parent;
        if (frame != NULL)
        {
            RwFrameDestroy(frame);
        }
        RpLightDestroy(DirectionalLight);
        DirectionalLight = 0;
    }
    if (World != NULL)
    {
        if (sGameScreenTransCam != NULL)
        {
            RpWorldRemoveCamera(World, sGameScreenTransCam);
            iCameraDestroy(sGameScreenTransCam);
            sGameScreenTransCam = 0;
        }
        RpWorldDestroy(World);
        World = 0;
    }
    gGameWhereAmI = eGameWhere_TransitionEnded;
}

// func_800993A8
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameSetupPlayer__Fv")

// func_80099528
// #pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameStats_Init__Fv")
void zGameStats_Init()
{
}

// func_8009952C
#pragma GLOBAL_ASM("asm/Game/zGame.s", "xUtil_select_esc__0_c_esc__1___FPPciPCf")

// func_80099640
//#pragma GLOBAL_ASM("asm/Game/zGame.s", "xDrawEnd__Fv")
void xDrawEnd()
{
    iDrawEnd();
}

// func_80099660
//#pragma GLOBAL_ASM("asm/Game/zGame.s", "xDrawBegin__Fv"
void xDrawBegin()
{
    iDrawBegin();
}
