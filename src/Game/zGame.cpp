#include "zGame.h"
#include "zGameExtras.h"
#include "zGlobals.h"
#include "zParPTank.h"
#include "zSaveLoad.h"
#include "zGameState.h"
#include "zMenu.h"
#include "zCamera.h"
#include "zMusic.h"
#include "zHud.h"
#include "zFX.h"
#include "zCombo.h"
#include "zLOD.h"

#include "../Core/p2/iDraw.h"
#include "../Core/x/xTRC.h"
#include "../Core/x/xFont.h"
#include "../Core/x/xMath.h"
#include "../Core/x/xModel.h"
#include "../Core/x/xScrFx.h"
#include "../Core/x/xSkyDome.h"

#include <types.h>

extern eGameMode gGameMode;
extern eGameWhereAmI gGameWhereAmI;
extern RpLight* DirectionalLight;
extern RpWorld* World;
extern RwCamera* sGameScreenTransCam;
extern _tagTRCPadInfo gTrcPad[4];
extern int32 g_hiphopReloadHIP;
extern int32 g_hiphopForcePortal;

extern float32 lbl_803CDA28;

extern float32 lbl_803CDA10; // R, G, B
extern float32 lbl_803CF5AC; // A

extern float32 lbl_803CDA54;
extern float32 lbl_803CDA58;

// func_800974A8
#pragma GLOBAL_ASM("asm/Game/zGame.s", "PickNextSoak__Fv")

// func_8009771C
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameInit__FUi")
#else
// Scheduling, I guess
void zGameInit(uint32 theSceneID)
{
    gGameWhereAmI = eGameWhere_InitStart;
    xtextbox::clear_layout_cache();
    xsrand(iTimeGet());
    iTimeGet();
    xrand();
    gGameWhereAmI = eGameWhere_InitScene;
    if (g_hiphopReloadHIP != 0)
    {
        zSceneInit(theSceneID, 1);
    }
    else
    {
        zSceneInit(theSceneID, 0);
    }
    g_hiphopReloadHIP = 0;
    g_hiphopForcePortal = 0;
    gGameWhereAmI = eGameWhere_InitCamera;
    xCameraInit(&globals.camera, 640, 480);
    zCameraReset(&globals.camera);
    xCameraSetScene(&globals.camera, globals.sceneCur);
    gGameWhereAmI = eGameWhere_InitMusic;
    zMusicInit();
    gGameWhereAmI = eGameWhere_InitOther;
    zGameStats_Init();
    zhud::init();
    gGameWhereAmI = eGameWhere_InitEnd;
}
#endif

// func_800977FC
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameExit__Fv")
#else
// Scheduling, I guess
void zGameExit()
{
    gGameWhereAmI = eGameWhere_ExitStart;
    zGameExtras_SceneExit();
    gGameWhereAmI = eGameWhere_ExitRumble;
    xPadDestroyRumbleChain(globals.currentActivePad);
    gGameWhereAmI = eGameWhere_ExitHUD;
    zhud::destroy();
    gGameWhereAmI = eGameWhere_ExitSound;
    zMusicKill();
    xSndStopAll(0xfffffffb);
    xSndUpdate();
    gGameWhereAmI = eGameWhere_ExitCamera;
    xCameraExit(&globals.camera);
    gGameWhereAmI = eGameWhere_ExitScene;
    if (g_hiphopReloadHIP != 0)
    {
        zSceneExit(1);
    }
    else
    {
        zSceneExit(0);
    }
    gGameWhereAmI = eGameWhere_ExitEnd;
}
#endif

// func_800978A4
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameSetup__Fv")
#else
void zGameSetup()
{
    gGameWhereAmI = eGameWhere_SetupScene;
    zSceneSetup();
    gGameWhereAmI = eGameWhere_SetupZFX;
    xModel_SceneEnter(((globals.sceneCur)->env)->geom->world);
    zFX_SceneEnter(((globals.sceneCur)->env)->geom->world);
    gGameWhereAmI = eGameWhere_SetupPlayer;
    zGameSetupPlayer();
    gGameWhereAmI = eGameWhere_SetupCamera;
    zEnvStartingCamera(gCurEnv);
    gGameWhereAmI = eGameWhere_SetupScrFX;
    xScrFxReset();
    gGameWhereAmI = eGameWhere_SetupSceneLoad;
    zSceneLoad(globals.sceneCur, 0);
    gGameWhereAmI = eGameWhere_SetupMusicNotify;
    zMusicNotify(0);
    gGameWhereAmI = eGameWhere_SetupHudSetup;
    zhud::setup();
    zCombo_Setup();
    gGameWhereAmI = eGameWhere_SetupSkydome;
    xSkyDome_Setup();
    gGameWhereAmI = eGameWhere_SetupSceneEvents;
    zEntEventAll(0, 0, 0x57, 0);
    zEntEventAll(0, 0, 0x59, 0);
    zEntEventAll(0, 0, 0x1dd, 0);
    if (gLevelChanged != 0)
    {
        zEntEventAll(0, 0, 0x1db, 0);
    }
    gGameWhereAmI = eGameWhere_SetupUpdateCull;
    if (globals.updateMgr != NULL)
    {
        xUpdateCull_Update(globals.updateMgr, 100);
    }
    gGameWhereAmI = eGameWhere_SetupLOD;
    zLOD_Update(100);
    gGameWhereAmI = eGameWhere_SetupExtras;
    zGameExtras_SceneInit();
    gGameWhereAmI = eGameWhere_SetupEnd;
}
#endif

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
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameLoopContinue__Fv")
#else
int32 zGameLoopContinue()
{
    if (gGameMode == eGameMode_Game)
    {
        if (((gGameState == 1) || (gGameState == 3)) || (gGameState == 4))
        {
            return 1;
        }
    }
    else
    {
        if (gGameMode == eGameMode_Save)
        {
            gGameWhereAmI = eGameWhere_SaveLoop;
            zSaveLoad_SaveLoop();
            sTimeLast = iTimeGet();
        }
        return 1;
    }
    return 0;
}
#endif

// func_80098234
int32 zGameOkToPause()
{
    int32 uVar1 = 0;

    if (globals.cmgr)
    {
        return 0;
    }
    if (zGameIsPaused())
    {
        return 0;
    }
    if ((globals.sceneCur)->sceneID == 0x50473132)
    {
        return 0;
    }
    if ((globals.player.ControlOff & 0xffff92ff))
    {
        return 0;
    }
    else
    {
        uVar1 = 1;
        if (gTrcPad[0].state == 1)
        {
            uVar1 = 2;
        }
    }
    return uVar1;
}

// func_800982D8
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGamePause__Fv")
#else
void zGamePause()
{
    if (!zGameIsPaused())
    {
        if ((globals.sceneCur)->sceneID == 0x50473132)
        {
            zGameStall();
        }
        else
        {
            zEntEvent("techbutton6_click", 24);
            zEntEvent("SAVING GAME ICON UI", 4);
            zEntEvent("MNU4 AUTO SAVE FAILED", 4);
            zEntEvent("MNU4 SAVE COMPLETED", 4);
            iPadStopRumble(globals.pad0);
            zGameModeSwitch(eGameMode_Pause);
            zGameStateSwitch(0);
        }
    }
}
#endif

// func_80098394
#ifndef NON_MATCHING
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
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameUpdateTransitionBubbles__Fv")
#else
// Float memes
void zGameUpdateTransitionBubbles()
{
    gGameWhereAmI = eGameWhere_TransitionBubbles;
    sTimeCurrent = iTimeGet();
    sTimeElapsed = iTimeDiffSec(sTimeLast, sTimeCurrent);
    sTimeLast = sTimeCurrent;
    zParPTankUpdate(lbl_803CDA28 > sTimeElapsed ? sTimeElapsed : NULL);
    zParPTankRender();
}
#endif

// func_80098DF8
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameScreenTransitionBegin__Fv")
#else
// Tons of extra instructions for some reason
void zGameScreenTransitionBegin()
{
    gGameWhereAmI = eGameWhere_TransitionBegin;
    zGameSetOstrich(eGameOstrich_Loading);
    globals.dontShowPadMessageDuringLoadingOrCutScene = '\0';
    sGameScreenTransCam = iCameraCreate(640, 480, 0);
    if (sGameScreenTransCam != NULL)
    {
        DirectionalLight = RpLightCreate(1);
        if (DirectionalLight != NULL)
        {
            RwRGBAReal col = { lbl_803CDA10, lbl_803CDA10, lbl_803CDA10, lbl_803CF5AC };
            RpLightSetColor(DirectionalLight, &col);
            RwFrame* frame = RwFrameCreate();
            _rwObjectHasFrameSetFrame(DirectionalLight, frame);
            RwBBox box = { lbl_803CDA54, lbl_803CDA54, lbl_803CDA54,
                           lbl_803CDA58, lbl_803CDA58, lbl_803CDA58 };
            World = RpWorldCreate(&box);
            RpWorldAddCamera(World, sGameScreenTransCam);
            gGameWhereAmI = eGameWhere_TransitionSnapShot;
            zGameTakeSnapShot(sGameScreenTransCam);
        }
    }
}
#endif

// func_80098EE8
//#pragma GLOBAL_ASM("asm/Game/zGame.s", "zGameScreenTransitionUpdate__FfPc")
void zGameScreenTransitionUpdate(float32 percentComplete, char* msg)
{
    if (!zMenuIsFirstBoot())
    {
        zGameScreenTransitionUpdate(percentComplete, msg, 0);
    }
}

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
void zGameStats_Init()
{
}

// func_8009952C
#pragma GLOBAL_ASM("asm/Game/zGame.s", "xUtil_select_esc__0_c_esc__1___FPPciPCf")

// func_80099640
void xDrawEnd()
{
    iDrawEnd();
}

// func_80099660
void xDrawBegin()
{
    iDrawBegin();
}
