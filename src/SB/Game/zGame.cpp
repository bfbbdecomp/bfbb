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

static S32 sGameOverTimer;
float sTimeElapsed;
S64 sTimeLast;
S64 sTimeCurrent;

extern F32 lbl_803CDA28;

extern F32 lbl_803CDA10; // R, G, B
extern F32 lbl_803CF5AC; // A

extern F32 lbl_803CDA54;
extern F32 lbl_803CDA58;

// Taken from zGame.s
// Defining these here makes the stringBase0 offsets match in the later functions.
static char* str1 = "HB02";
static char* str2 = "HB01";
static char* str3 = "HB03";
static char* str4 = "HB04";
static char* str5 = "JF01";
static char* str6 = "JF02";
static char* str7 = "JF03";
static char* str8 = "JF04";
static char* str9 = "BB01";
static char* str10 = "BB02";
static char* str11 = "BB03";
static char* str12 = "BB04";
static char* str13 = "GL01";
static char* str14 = "GL02";
static char* str15 = "GL03";
static char* str16 = "B101";
static char* str17 = "HB05";
static char* str18 = "HB06";
static char* str19 = "HB09";
static char* str20 = "BC01";
static char* str21 = "BC02";
static char* str22 = "BC03";
static char* str23 = "BC04";
static char* str24 = "BC05";
static char* str25 = "RB01";
static char* str26 = "RB02";
static char* str27 = "RB03";
static char* str28 = "SM01";
static char* str29 = "SM02";
static char* str30 = "SM03";
static char* str31 = "SM04";
static char* str32 = "B201";
static char* str33 = "DB01";
static char* str34 = "DB02";
static char* str35 = "DB03";
static char* str36 = "DB04";
static char* str37 = "DB06";
static char* str38 = "KF01";
static char* str39 = "KF02";
static char* str40 = "KF04";
static char* str41 = "KF05";
static char* str42 = "GY01";
static char* str43 = "GY02";
static char* str44 = "GY03";
static char* str45 = "GY04";
static char* str46 = "HB07";
static char* str47 = "HB08";
static char* str48 = "B302";
static char* str49 = "B303";
static char* str50 = "HB10";
static char* str51 = "PG12";
static char* str52 = "techbutton6_click";
static char* str53 = "SAVING GAME ICON UI";
static char* str54 = "MNU4 AUTO SAVE FAILED";
static char* str55 = "MNU4 SAVE COMPLETED";
static char* str56 = "{font=0}{i:MNU4 AUTO SAVE TXT}";
static char* str57 = "fx_boomball_smoke.RW3";
static char* str58 = "ui_savinggame";
static char* str59 = "ui_savinggame.RW3";
static char* str60 = "GAME OVER (%f secs)\n";
static char* str61 = "Loading... %3.2f\n";
static char* str62 = "   ";
static char* str63 = ".  ";
static char* str64 = ".. ";
static char* str65 = "...";
static char* str66 = "loading screen bg";
static char* str67 = "eGameWhere_NA";
static char* str68 = "eGameWhere_InitStart";
static char* str69 = "eGameWhere_InitScene";
static char* str70 = "eGameWhere_InitCamera";
static char* str71 = "eGameWhere_InitMusic";
static char* str72 = "eGameWhere_InitOther";
static char* str73 = "eGameWhere_InitEnd";
static char* str74 = "eGameWhere_ExitStart";
static char* str75 = "eGameWhere_ExitRumble";
static char* str76 = "eGameWhere_ExitHUD";
static char* str77 = "eGameWhere_ExitSound";
static char* str78 = "eGameWhere_ExitCamera";
static char* str79 = "eGameWhere_ExitScene";
static char* str80 = "eGameWhere_ExitEnd";
static char* str81 = "eGameWhere_SetupScene";
static char* str82 = "eGameWhere_SetupZFX";
static char* str83 = "eGameWhere_SetupPlayer";
static char* str84 = "eGameWhere_SetupCamera";
static char* str85 = "eGameWhere_SetupScrFX";
static char* str86 = "eGameWhere_SetupSceneLoad";
static char* str87 = "eGameWhere_SetupMusicNotify";
static char* str88 = "eGameWhere_SetupHudSetup";
static char* str89 = "eGameWhere_SetupSkydome";
static char* str90 = "eGameWhere_SetupSceneEvents";
static char* str91 = "eGameWhere_SetupUpdateCull";
static char* str92 = "eGameWhere_SetupLOD";
static char* str93 = "eGameWhere_SetupExtras";
static char* str94 = "eGameWhere_SetupEnd";
static char* str95 = "eGameWhere_LoopStart";
static char* str96 = "eGameWhere_CutsceneFinish";
static char* str97 = "eGameWhere_LoopDo";
static char* str98 = "eGameWhere_LoopCalcTime";
static char* str99 = "eGameWhere_LoopPadUpdate";
static char* str100 = "eGameWhere_LoopTRCCheck";
static char* str101 = "eGameWhere_LoopCheats";
static char* str102 = "eGameWhere_LoopSceneUpdate";
static char* str103 = "eGameWhere_LoopPlayerUpdate";
static char* str104 = "eGameWhere_LoopSoundUpdate";
static char* str105 = "eGameWhere_LoopSFXWidgets";
static char* str106 = "eGameWhere_LoopHUDUpdate";
static char* str107 = "eGameWhere_LoopCameraUpdate";
static char* str108 = "eGameWhere_LoopCameraFXUpdate";
static char* str109 = "eGameWhere_LoopFlyToInterface";
static char* str110 = "eGameWhere_LoopCameraBegin";
static char* str111 = "eGameWhere_LoopSceneRender";
static char* str112 = "eGameWhere_LoopCameraEnd";
static char* str113 = "eGameWhere_LoopCameraShowRaster";
static char* str114 = "eGameWhere_LoopCameraFXEnd";
static char* str115 = "eGameWhere_LoopMusicUpdate";
static char* str116 = "eGameWhere_LoopUpdateMode";
static char* str117 = "eGameWhere_LoopContinue";
static char* str118 = "eGameWhere_LoopEndGameLoop";
static char* str119 = "eGameWhere_SaveLoop";
static char* str120 = "eGameWhere_ModeSceneSwitch";
static char* str121 = "eGameWhere_ModeCutsceneFinish";
static char* str122 = "eGameWhere_ModeGameExit";
static char* str123 = "eGameWhere_ModeGameInit";
static char* str124 = "eGameWhere_ModeGameSetup";
static char* str125 = "eGameWhere_ModeSwitchAutoSave";
static char* str126 = "eGameWhere_ModeSwitchCutsceneFinish";
static char* str127 = "eGameWhere_ModeStoreCheckpoint";
static char* str128 = "eGameWhere_LoseChanceReset";
static char* str129 = "eGameWhere_LoseChanceResetDone";
static char* str130 = "eGameWhere_TransitionBubbles";
static char* str131 = "eGameWhere_TransitionBegin";
static char* str132 = "eGameWhere_TransitionSnapShot";
static char* str133 = "eGameWhere_TransitionUpdate";
static char* str134 = "eGameWhere_TransitionPadUpdate";
static char* str135 = "eGameWhere_TransitionTRCCheck";
static char* str136 = "eGameWhere_TransitionCameraClear";
static char* str137 = "eGameWhere_TransitionCameraBegin";
static char* str138 = "eGameWhere_TransitionRenderBackground";
static char* str139 = "eGameWhere_TransitionSpawnBubbles";
static char* str140 = "eGameWhere_TransitionDrawEnd";
static char* str141 = "eGameWhere_TransitionUpdateBubbles";
static char* str142 = "eGameWhere_TransitionCameraEnd";
static char* str143 = "eGameWhere_TransitionCameraShowRaster";
static char* str144 = "eGameWhere_TransitionUpdateEnd";
static char* str145 = "eGameWhere_TransitionUIRender";
static char* str146 = "eGameWhere_TransitionUIRenderEnd";
static char* str147 = "eGameWhere_TransitionEnd";
static char* str148 = "eGameWhere_TransitionEnded";
static char* str149 = "eGameWhere_SetupPlayerInit";
static char* str150 = "eGameWhere_SetupPlayerCamera";
static char* str151 = "eGameWhere_SetupPlayerEnd";

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
