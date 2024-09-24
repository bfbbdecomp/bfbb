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

#include "iDraw.h"
#include "xTRC.h"
#include "xFont.h"
#include "xMath.h"
#include "xModel.h"
#include "xScrFx.h"
#include "xSkyDome.h"

#include <types.h>

extern eGameMode gGameMode;
extern eGameWhereAmI gGameWhereAmI;
extern RpLight* DirectionalLight;
extern RpWorld* World;
extern RwCamera* sGameScreenTransCam;
extern _tagTRCPadInfo gTrcPad[4];
extern S32 g_hiphopReloadHIP;
extern S32 g_hiphopForcePortal;

extern F32 lbl_803CDA28;

extern F32 lbl_803CDA10; // R, G, B
extern F32 lbl_803CF5AC; // A

extern F32 lbl_803CDA54;
extern F32 lbl_803CDA58;

extern char stringBase0[];

#ifdef NON_MATCHING
// Scheduling, I guess
void zGameInit(U32 theSceneID)
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

#ifdef NON_MATCHING
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

#ifdef NON_MATCHING
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

S32 zGameIsPaused()
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

iTime t1;

static S32 zGameLoopContinue()
{
    if (gGameMode == eGameMode_Game)
    {
        return gGameState == 1 || gGameState == 3 || gGameState == 4;
    }
    else
    {
        if (gGameMode == eGameMode_Save)
        {
            gGameWhereAmI = eGameWhere_SaveLoop;
            zSaveLoad_SaveLoop();
            sTimeLast = iTimeGet();
            t1 = iTimeGet();
        }
    }
    return 1;
}

S32 zGameOkToPause()
{
    S32 uVar1 = 0;

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

void zGamePause()
{
    if (!zGameIsPaused())
    {
        if ((globals.sceneCur)->sceneID == 'PG12')
        {
            zGameStall();
        }
        else
        {
            zEntEvent(stringBase0 + 0xff, 24); // "techbutton6_click"
            zEntEvent(stringBase0 + 0x111, 4); // "SAVING GAME ICON UI"
            zEntEvent(stringBase0 + 0x125, 4); // "MNU4 AUTO SAVE FAILED"
            zEntEvent(stringBase0 + 0x13b, 4); // "MNU4 SAVE COMPLETED"
            iPadStopRumble(globals.pad0);
            zGameModeSwitch(eGameMode_Pause);
            zGameStateSwitch(0);
        }
    }
}

void zGameStall()
{
    if (!zGameIsPaused())
    {
        zGameModeSwitch(eGameMode_Stall);
        xSndPauseAll(1, 1);
        iPadStopRumble(globals.pad0);
        zEntEvent(stringBase0 + 0xff, 24); // "techbutton6_click"
    }
}

void zGameTakeSnapShot(RwCamera*)
{
}

#ifdef NON_MATCHING
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

#ifdef NON_MATCHING
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

//
void zGameScreenTransitionUpdate(F32 percentComplete, char* msg)
{
    if (!zMenuIsFirstBoot())
    {
        zGameScreenTransitionUpdate(percentComplete, msg, 0);
    }
}

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

void zGameStats_Init()
{
}

void xDrawEnd()
{
    iDrawEnd();
}

void xDrawBegin()
{
    iDrawBegin();
}
