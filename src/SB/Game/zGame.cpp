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

// Taken from zGame.s
// Defining these here makes the stringBase0 offsets match in the later functions.
char* str1 = "HB02";
char* str2 = "HB01";
char* str3 = "HB03";
char* str4 = "HB04";
char* str5 = "JF01";
char* str6 = "JF02";
char* str7 = "JF03";
char* str8 = "JF04";
char* str9 = "BB01";
char* str10 = "BB02";
char* str11 = "BB03";
char* str12 = "BB04";
char* str13 = "GL01";
char* str14 = "GL02";
char* str15 = "GL03";
char* str16 = "B101";
char* str17 = "HB05";
char* str18 = "HB06";
char* str19 = "HB09";
char* str20 = "BC01";
char* str21 = "BC02";
char* str22 = "BC03";
char* str23 = "BC04";
char* str24 = "BC05";
char* str25 = "RB01";
char* str26 = "RB02";
char* str27 = "RB03";
char* str28 = "SM01";
char* str29 = "SM02";
char* str30 = "SM03";
char* str31 = "SM04";
char* str32 = "B201";
char* str33 = "DB01";
char* str34 = "DB02";
char* str35 = "DB03";
char* str36 = "DB04";
char* str37 = "DB06";
char* str38 = "KF01";
char* str39 = "KF02";
char* str40 = "KF04";
char* str41 = "KF05";
char* str42 = "GY01";
char* str43 = "GY02";
char* str44 = "GY03";
char* str45 = "GY04";
char* str46 = "HB07";
char* str47 = "HB08";
char* str48 = "B302";
char* str49 = "B303";
char* str50 = "HB10";
char* str51 = "PG12";
char* str52 = "techbutton6_click";
char* str53 = "SAVING GAME ICON UI";
char* str54 = "MNU4 AUTO SAVE FAILED";
char* str55 = "MNU4 SAVE COMPLETED";
char* str56 = "{font=0}{i:MNU4 AUTO SAVE TXT}";
char* str57 = "fx_boomball_smoke.RW3";
char* str58 = "ui_savinggame";
char* str59 = "ui_savinggame.RW3";
char* str60 = "GAME OVER (%f secs)\n";
char* str61 = "Loading... %3.2f\n";
char* str62 = "   ";
char* str63 = ".  ";
char* str64 = ".. ";
char* str65 = "...";
char* str66 = "loading screen bg";
char* str67 = "eGameWhere_NA";
char* str68 = "eGameWhere_InitStart";
char* str69 = "eGameWhere_InitScene";
char* str70 = "eGameWhere_InitCamera";
char* str71 = "eGameWhere_InitMusic";
char* str72 = "eGameWhere_InitOther";
char* str73 = "eGameWhere_InitEnd";
char* str74 = "eGameWhere_ExitStart";
char* str75 = "eGameWhere_ExitRumble";
char* str76 = "eGameWhere_ExitHUD";
char* str77 = "eGameWhere_ExitSound";
char* str78 = "eGameWhere_ExitCamera";
char* str79 = "eGameWhere_ExitScene";
char* str80 = "eGameWhere_ExitEnd";
char* str81 = "eGameWhere_SetupScene";
char* str82 = "eGameWhere_SetupZFX";
char* str83 = "eGameWhere_SetupPlayer";
char* str84 = "eGameWhere_SetupCamera";
char* str85 = "eGameWhere_SetupScrFX";
char* str86 = "eGameWhere_SetupSceneLoad";
char* str87 = "eGameWhere_SetupMusicNotify";
char* str88 = "eGameWhere_SetupHudSetup";
char* str89 = "eGameWhere_SetupSkydome";
char* str90 = "eGameWhere_SetupSceneEvents";
char* str91 = "eGameWhere_SetupUpdateCull";
char* str92 = "eGameWhere_SetupLOD";
char* str93 = "eGameWhere_SetupExtras";
char* str94 = "eGameWhere_SetupEnd";
char* str95 = "eGameWhere_LoopStart";
char* str96 = "eGameWhere_CutsceneFinish";
char* str97 = "eGameWhere_LoopDo";
char* str98 = "eGameWhere_LoopCalcTime";
char* str99 = "eGameWhere_LoopPadUpdate";
char* str100 = "eGameWhere_LoopTRCCheck";
char* str101 = "eGameWhere_LoopCheats";
char* str102 = "eGameWhere_LoopSceneUpdate";
char* str103 = "eGameWhere_LoopPlayerUpdate";
char* str104 = "eGameWhere_LoopSoundUpdate";
char* str105 = "eGameWhere_LoopSFXWidgets";
char* str106 = "eGameWhere_LoopHUDUpdate";
char* str107 = "eGameWhere_LoopCameraUpdate";
char* str108 = "eGameWhere_LoopCameraFXUpdate";
char* str109 = "eGameWhere_LoopFlyToInterface";
char* str110 = "eGameWhere_LoopCameraBegin";
char* str111 = "eGameWhere_LoopSceneRender";
char* str112 = "eGameWhere_LoopCameraEnd";
char* str113 = "eGameWhere_LoopCameraShowRaster";
char* str114 = "eGameWhere_LoopCameraFXEnd";
char* str115 = "eGameWhere_LoopMusicUpdate";
char* str116 = "eGameWhere_LoopUpdateMode";
char* str117 = "eGameWhere_LoopContinue";
char* str118 = "eGameWhere_LoopEndGameLoop";
char* str119 = "eGameWhere_SaveLoop";
char* str120 = "eGameWhere_ModeSceneSwitch";
char* str121 = "eGameWhere_ModeCutsceneFinish";
char* str122 = "eGameWhere_ModeGameExit";
char* str123 = "eGameWhere_ModeGameInit";
char* str124 = "eGameWhere_ModeGameSetup";
char* str125 = "eGameWhere_ModeSwitchAutoSave";
char* str126 = "eGameWhere_ModeSwitchCutsceneFinish";
char* str127 = "eGameWhere_ModeStoreCheckpoint";
char* str128 = "eGameWhere_LoseChanceReset";
char* str129 = "eGameWhere_LoseChanceResetDone";
char* str130 = "eGameWhere_TransitionBubbles";
char* str131 = "eGameWhere_TransitionBegin";
char* str132 = "eGameWhere_TransitionSnapShot";
char* str133 = "eGameWhere_TransitionUpdate";
char* str134 = "eGameWhere_TransitionPadUpdate";
char* str135 = "eGameWhere_TransitionTRCCheck";
char* str136 = "eGameWhere_TransitionCameraClear";
char* str137 = "eGameWhere_TransitionCameraBegin";
char* str138 = "eGameWhere_TransitionRenderBackground";
char* str139 = "eGameWhere_TransitionSpawnBubbles";
char* str140 = "eGameWhere_TransitionDrawEnd";
char* str141 = "eGameWhere_TransitionUpdateBubbles";
char* str142 = "eGameWhere_TransitionCameraEnd";
char* str143 = "eGameWhere_TransitionCameraShowRaster";
char* str144 = "eGameWhere_TransitionUpdateEnd";
char* str145 = "eGameWhere_TransitionUIRender";
char* str146 = "eGameWhere_TransitionUIRenderEnd";
char* str147 = "eGameWhere_TransitionEnd";
char* str148 = "eGameWhere_TransitionEnded";
char* str149 = "eGameWhere_SetupPlayerInit";
char* str150 = "eGameWhere_SetupPlayerCamera";
char* str151 = "eGameWhere_SetupPlayerEnd";

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
    if ((globals.sceneCur)->sceneID == 'PG12')
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
