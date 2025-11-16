#include "zCamera.h"
#include "zCombo.h"
#include "zCutsceneMgr.h"
#include "zEntPlayer.h"
#include "zFX.h"
#include "zGame.h"
#include "zGameExtras.h"
#include "zGameState.h"
#include "zGlobals.h"
#include "zHud.h"
#include "zLOD.h"
#include "zMenu.h"
#include "zMusic.h"
#include "zParPTank.h"
#include "zSaveLoad.h"

#include "iDraw.h"
#include "iSystem.h"
#include "iTRC.h"

#include "xDebug.h"
#include "xFont.h"
#include "xMarkerAsset.h"
#include "xMath.h"
#include "xMemMgr.h"
#include "xModel.h"
#include "xScrFx.h"
#include "xSkyDome.h"
#include "xTRC.h"
#include "xUtil.h"

#include <types.h>

#include <stdio.h>

const static basic_rect<F32> screen_bounds =
{
    0.0f, 0.0f, 1.0f, 1.0f
};

static U32 sPlayerMarkerStartID;
static U32 sPlayerMarkerStartCamID;
static F32 sPlayerStartAngle;
static S32 sPortalling;
extern eGameMode gGameMode;
static F32 sGameOverTimer;
F32 sTimeElapsed;
iTime sTimeLast;
iTime sTimeCurrent;
extern RpLight* DirectionalLight;
extern RpWorld* World;
extern RwCamera* sGameScreenTransCam;
extern _tagTRCPadInfo gTrcPad[4];
extern S32 g_hiphopReloadHIP;
extern S32 g_hiphopForcePortal;
xPortalAsset dummyPortalAsset;
_zPortal dummyPortal;
U32 gSoak;
static U32 loadMeter;

void xMemDebug_SoakLog(const char*);
void zCutsceneMgrFinishExit(xBase* to);

char* soaklevels_gameorder[] =
{
	"HB02",
    "HB01",
    "HB03",
    "HB04",
    "JF01",
    "JF02",
    "JF03",
    "JF04",
    "JF01",
    "BB01",
    "BB02",
    "BB03",
    "BB04",
    "GL01",
    "GL02",
    "GL03",
    "B101",
    "HB01",
    "HB05",
    "HB06",
    "HB09",
    "BC01",
    "BC02",
    "BC03",
    "BC04",
    "BC05",
    "HB09",
    "RB01",
    "RB02",
    "RB03",
    "HB09",
    "SM01",
    "SM02",
    "SM03",
    "SM04",
    "B201",
    "HB01",
    "DB01",
    "DB02",
    "DB03",
    "DB04",
    "DB06",
    "KF01",
    "KF02",
    "KF04",
    "KF05",
    "GY01",
    "GY02",
    "GY03",
    "GY04",
    "HB07",
    "HB08",
    "B302",
    "B303",
    "HB10",
    "PG12",
	NULL
};

char** soaklevels = soaklevels_gameorder;

F32 soaktime = 4.0f;

// Taken from zGame.s
// Defining these here makes the stringBase0 offsets match in the later functions.
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

static U32 PickNextSoak()
{
    U32 nextsoak;
    U32 tag;

    static S32 soakidx = 0;
    static S32 soakcnt = 0;

    static enum en_SOAK_DIR
    {
        SOAK_FOR,
        SOAK_BACK,
        SOAK_RAND,
        SOAK_NOMORE,
        SOAK_FORCE = 2147483647,
    } soakdir = SOAK_FOR;

    static S32 justwrap = 0;
    char* name = NULL;

    if (soakcnt <= 0)
    {
        while (soaklevels[soakcnt] != NULL)
        {
            soakcnt++;
        }
    }

    if (soakcnt == 0)
    {
        return 0;
    }

    switch (soakdir)
    {
        case SOAK_FOR:
            // Phantom branch here.
            name = soaklevels[soakidx];
            soakidx++;
            if (*(volatile S32*)(&soakidx) < soakcnt)
            {
                break;
            }
            if (justwrap != 0)
            {
                soakidx = 0;
            }
            else
            {
                soakidx = soakcnt - 2;
                soakdir = SOAK_BACK;
            }
            break;
        case SOAK_BACK:
            name = soaklevels[soakidx];
            soakidx--;
            if (*(volatile S32*)(&soakidx) >= 0)
            {
                break;
            }
            if (justwrap != 0)
            {
                soakidx = soakcnt - 1;
            }
            else
            {
                soakidx = 0;
                soakdir = SOAK_RAND;
            }
            break;
        default:
            if (globals.sceneCur != NULL)
            {
                tag = globals.sceneCur->sceneID;
            }
            else
            {
                tag = 0;
            }

            S32 scoobydoobydoo = tag;

            while (scoobydoobydoo == globals.sceneCur->sceneID)
            {
                name = (char *)xUtil_select(soaklevels, soakcnt, 0);
                scoobydoobydoo = name[0] << 24 | name[1] << 16 | name[2] << 8 | name[3];
            }

            break;
    }

    char useme[5] = {};
    if (useme[0] != '\0')
    {
        name = &useme[0];
    }

    nextsoak = (name[0] << 24) | (name[1] << 16) | (name[2] << 8) | name[3];

    static S32 sumtotal = 0;
    sumtotal++;

    return nextsoak;
}

eGameWhereAmI gGameWhereAmI;

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
	RpWorld* world = globals.sceneCur->env->geom->world;
    xModel_SceneEnter(world);
    zFX_SceneEnter(world);
    gGameWhereAmI = eGameWhere_SetupPlayer;
    zGameSetupPlayer();
    gGameWhereAmI = eGameWhere_SetupCamera;
    zEnvStartingCamera(gCurEnv);
    gGameWhereAmI = eGameWhere_SetupScrFX;
    xScrFxReset();
    gGameWhereAmI = eGameWhere_SetupSceneLoad;
    zSceneLoad(globals.sceneCur, NULL);
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

static iTime t1;

static S32 zGameLoopContinue()
{
    if (gGameMode == eGameMode_Game)
    {
        return gGameState == eGameState_Play || gGameState == eGameState_GameOver || gGameState == eGameState_GameStats;
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

static S32 zGameOkToPause()
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
        zEntEvent("techbutton6_click", eEventPlay);
    }
}

static void zGame_HackDrawCard(F32 x, F32 y, F32 w, F32 h, RwRaster* rast);

// Equivalent; scheduling.
static void zGame_HackPostPortalAutoSaveDraw()
{
    U32 i;
    RwCamera* ccam;
	RwCamera* cam;
    RwRaster* rast;
    char str[2048];
    RwTexture* tex; 
    RwRGBA bg = {};
	
    cam = (RwCamera*)RwEngineInstance->curCamera;
    if (cam != NULL)
    {
        RwCameraEndUpdate(cam);
    }
	
    sprintf(str, "{font=0}{i:MNU4 AUTO SAVE TXT}");
	
    ccam = (RwCamera *)iCameraCreate(640, 480, 0);
	
    xtextbox tb = xtextbox::create
	(
	    xfont::create
		(
		    1, NSCREENX(19.0f), NSCREENY(22.0f), 0.0f,
			xColorFromRGBA(0xFF, 0xE6, 0x00, 0xFF), 
			screen_bounds
		),
		screen_bounds, 0, 0.0f, 0.0f, 0.0f, 0.0f
	);
	
    tb.flags |= 2;
    tb.bounds.assign(0.0f, 0.4125f, 1.0f, 0.25f);
    tb.bounds.contract(0.025f);
    tb.set_text(str);
    tb.bounds.h  = tb.yextent(true);
    tb.bounds.y = -((tb.bounds.h * 0.5f) - 0.5f);
	tb.font.clip = tb.bounds;
    tb.font.clip.expand(0.025f);
    F32 yextent = tb.yextent(true);
	
    for (i = 0; i < 2; i++)
    {
        RwCameraClear(ccam, &bg, rwCAMERACLEARZ | rwCAMERACLEARIMAGE);
        RwCameraBeginUpdate(ccam);
        tex = (RwTexture*)xSTFindAsset(xStrHash("fx_boomball_smoke.RW3"), NULL);
        if (tex != NULL)
        {
            rast = tex->raster;
        }
        else
        {
            rast = NULL;
        }
		
        zGame_HackDrawCard(0.0f,   0.0f,   320.0f, 240.0f, rast);
        zGame_HackDrawCard(320.0f, 0.0f,   320.0f, 240.0f, rast);
        zGame_HackDrawCard(0.0f,   240.0f, 320.0f, 240.0f, rast);
        zGame_HackDrawCard(320.0f, 240.0f, 320.0f, 240.0f, rast);
		
        tex = (RwTexture*)xSTFindAsset(xStrHash("ui_savinggame"), NULL);
        if (tex == NULL)
        {
            tex = (RwTexture*)xSTFindAsset(xStrHash("ui_savinggame.RW3"), NULL);
        }
        if (tex != NULL)
        {
            rast = tex->raster;
        }
        else
        {
            rast = NULL;
        }

        zGame_HackDrawCard(275.0f, 350.0f, 90.0f, 90.0f, rast);

        if (yextent > 0.0f)
        {
            render_fill_rect(tb.font.clip, xColorFromRGBA(0x00, 0x00, 0x00, 0xFF));
            tb.render(true);
        }
		
        RwCameraEndUpdate(ccam);
        RwCameraShowRaster(ccam, NULL, 1);
    }

    iCameraDestroy(ccam);

    if (cam != NULL)
    {
        RwCameraBeginUpdate(cam);
    }
}

iColor_tag clear = { 0x00, 0x00, 0x00, 0x00 };
iColor_tag black = { 0x00, 0x00, 0x00, 0xFF };

static void zGameUpdateMode()
{
    xPortalAsset* passet;
    char* id;
    U32 nextSceneID;
    xBase* sendTo;
    xMarkerAsset* m;
    U32 size;

    if (gGameMode != 0x0C)
    {
        return;
    }

    if ((gSoak != 0) && (gGameState == eGameState_Play) && (globals.cmgr == NULL))
    {
        soaktime -= (1.0f / 30.0f);
        if (soaktime < 0.0f)
        {
            id = xUtil_idtag2string(globals.sceneCur->sceneID, 0);
            xMemDebug_SoakLog(id);
            gGameState = eGameState_SceneSwitch;
            dummyPortalAsset.assetCameraID = 0;
            dummyPortalAsset.assetMarkerID = 0;
            dummyPortalAsset.ang = 0.0f;
            dummyPortalAsset.sceneID = PickNextSoak();
            dummyPortal.passet = &dummyPortalAsset;
            globals.sceneCur->pendingPortal = &dummyPortal;
            soaktime = (xurand() * 4.0f) + 0.2f;
        }
    }

    if (gGameState == eGameState_Play)
    {
        iTimeGameAdvance(sTimeElapsed);
        if (globals.pad0->pressed & 1)
        {
            switch (zGameOkToPause())
            {
                case 0:
                    xTRCReset();
                    startPressed = 1;
                    break;
                case 1:
                    zGamePause();
                    break;
                case 2:
                    zGameStall();
                    break;
            }
        }
        else
        {
            startPressed = 0;
        }
    }
    else if (gGameState == eGameState_GameStats)
    {
        return;
    }
    else if (gGameState == eGameState_SceneSwitch)
    {
        gGameWhereAmI = eGameWhere_ModeSceneSwitch;

        passet = globals.sceneCur->pendingPortal->passet;

        U32 d = *(char *)((int)&passet->sceneID + 3);
        U32 c = *(char *)((int)&passet->sceneID + 0);
        U32 b = *(char *)((int)&passet->sceneID + 2);
        U32 a = *(char *)((int)&passet->sceneID + 1);

        U32 x = (((b << 8) & 0xff00) | (((d << 24) & 0xff000000) | ((a << 16) & 0x00ffffff)) & 0xffff00ff);
        U32 y = (((a << 8) & 0xff00) | (((c << 24) & 0xff000000) | ((b << 16) & 0x00ffffff)) & 0xffff00ff);

        nextSceneID = x | c;
        x = d | y;

        if ((g_hiphopReloadHIP != 0) || ((g_hiphopForcePortal != 0) || (x != globals.sceneCur->sceneID)))
        {
            sPlayerMarkerStartID = passet->assetMarkerID;
            sPlayerMarkerStartCamID = passet->assetCameraID;
            sPlayerStartAngle = passet->ang;
            sPortalling = 1;

            gGameWhereAmI = eGameWhere_ModeCutsceneFinish;
            if (globals.cmgr != NULL)
            {
                zCutsceneMgrFinishExit(globals.cmgr);
            }

            gGameWhereAmI = eGameWhere_ModeGameExit;
            zGameExit();

            gGameWhereAmI = eGameWhere_ModeGameInit;
            zGameInit(nextSceneID);

            gGameWhereAmI = eGameWhere_ModeGameSetup;
            zGameSetup();

            gGameWhereAmI = eGameWhere_ModeSwitchAutoSave;
            if (gWaitingToAutoSave != 0)
            {
                zGame_HackPostPortalAutoSaveDraw();
				
                zSaveLoadPreAutoSave(1);
                if (zSaveLoad_DoAutoSave() < 0)
                {
                    sendTo = (xBase *)zSceneFindObject(xStrHash("MNU4 AUTO SAVE FAILED"));
                    if (sendTo != NULL)
                    {
                        zEntEvent(sendTo, eEventVisible);
                    }
                }
				
                sendTo = (xBase *)zSceneFindObject(xStrHash("SAVING GAME ICON UI"));
                if (sendTo != NULL)
                {
                    zEntEvent(sendTo, eEventInvisible);
                }
				
                zSaveLoadPreAutoSave(0);
                gWaitingToAutoSave = 0;
            }
            gGameWhereAmI = eGameWhere_ModeSwitchCutsceneFinish;
            if (globals.cmgr != NULL)
            {
                zCutsceneMgrFinishLoad(globals.cmgr);
            }
        }
        else
        {
            if (sPlayerMarkerStartID != 0)
            {
                m = (xMarkerAsset*)xSTFindAsset(sPlayerMarkerStartID, &size);
                if (m != NULL)
                {
                    xVec3Copy(&globals.player.ent.frame->mat.pos, &m->pos);
                }
                sPlayerMarkerStartID = 0;
            }
        }
		
        if (gSoak != 0)
        {
            sendTo = (xBase *)zSceneGetObject(eBaseTypeCamera, 0);
            sPlayerMarkerStartCamID = sendTo->id;
        }
        else
        {
            sendTo = (xBase *)zSceneFindObject(sPlayerMarkerStartCamID);
            if (sendTo == NULL)
            {
                xSTAssetName(sPlayerMarkerStartCamID);
                sendTo = (xBase *)zSceneGetObject(eBaseTypeCamera, 0);
                sPlayerMarkerStartCamID = sendTo->id;
                xSTAssetName(sendTo->id);
            }
        }
		
        gGameWhereAmI = eGameWhere_ModeStoreCheckpoint;
        if (sendTo != NULL)
        {
            zEntPlayer_StoreCheckPoint(&globals.player.ent.frame->mat.pos, globals.player.ent.frame->rot.angle, sPlayerMarkerStartCamID);
        }
		
        sPlayerMarkerStartCamID = 0;
		
        if (gPendingPlayer != eCurrentPlayerCount)
        {
            gCurrentPlayer = gPendingPlayer;
            gPendingPlayer = eCurrentPlayerCount;
        }

        iTime bus = (iTime)((GET_BUS_FREQUENCY() / 4) / 60.0f);
        sTimeLast = iTimeGet() - bus;

        zGameStateSwitch(eGameState_Play);
    }
    else if (gGameState == eGameState_LoseChance)
    {
        gGameWhereAmI = eGameWhere_LoseChanceReset;
        zSceneReset();
        gGameWhereAmI = eGameWhere_LoseChanceResetDone;
        zGameStateSwitch(eGameState_Play);
    }
    else if (gGameState == eGameState_GameOver)
    {
        if (sGameOverTimer == 0.0f)
        {
            xScrFxFade(&clear, &black, 4.5f, NULL, 1);
            sGameOverTimer = 5.0f;
        }
        else
        {
            sGameOverTimer = sGameOverTimer - sTimeElapsed;
            xprintf("GAME OVER (%f secs)\n", *(volatile F32*)(&sGameOverTimer));
            if (sGameOverTimer <= 0.0f)
            {
                sGameOverTimer = 0.0f;
                zGameStateSwitch(eGameState_Exit);
            }
        }
    }
    else if (gGameState == eGameState_Exit)
    {
        sGameOverTimer = 0.0f;
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
	F32 diff = iTimeDiffSec(sTimeLast, sTimeCurrent);
    sTimeElapsed = diff;
    sTimeLast = sTimeCurrent;
	if (sTimeElapsed > 0.5f)
	{
		zParPTankUpdate(sTimeElapsed);
	}
	else
	{
		zParPTankUpdate(0.5f);
	}
    zParPTankRender();
}

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
            RwRGBAReal col;
			col.red = col.green = col.blue = 1.0f;
			col.alpha = 0.0f;
            RpLightSetColor(DirectionalLight, &col);
            RwFrame* frame = RwFrameCreate();
            _rwObjectHasFrameSetFrame(DirectionalLight, frame);
            RwBBox box;
			box.sup.z = box.sup.y = box.sup.x =  10000.0f;
			box.inf.z = box.inf.y = box.inf.x = -10000.0f;
            World = RpWorldCreate(&box);
            RpWorldAddCamera(World, sGameScreenTransCam);
            gGameWhereAmI = eGameWhere_TransitionSnapShot;
            zGameTakeSnapShot(sGameScreenTransCam);
        }
    }
}

void zGameScreenTransitionUpdate(F32 percentComplete, char* msg)
{
    if (!zMenuIsFirstBoot())
    {
        zGameScreenTransitionUpdate(percentComplete, msg, 0);
    }
}

U32 bgID = 0x1d33b0bb;
F32 bgu2 = 1.333f;
F32 bgv2 = 1.0f;
U8 bgr = 0x60;
U8 bgg = 0x60;
U8 bgb = 0x60;
U8 bga = 0x80;
F32 bgu1;
F32 bgv1;

void zGameScreenTransitionUpdate(F32 percentComplete, char* msg, U8* rgba)
{
    RwTexture* tex;
    RwRaster* ras;
    rwGameCube2DVertex vx[4];

    gGameWhereAmI = eGameWhere_TransitionUpdate;

    if (zMenuIsFirstBoot())
    {
        return;
    }

    RwRGBA back_col = { 0xFF, 0x00, 0x00, 0x00 };
    if (rgba != NULL)
    {
        back_col.red   = rgba[0];
        back_col.green = rgba[1];
        back_col.blue  = rgba[2];
        back_col.alpha = rgba[3];
    }

    gGameWhereAmI = eGameWhere_TransitionPadUpdate;
    xPadUpdate(globals.currentActivePad, sTimeElapsed);
    xDrawBegin();

    if (sGameScreenTransCam != NULL)
    {
        gGameWhereAmI = eGameWhere_TransitionTRCCheck;
        iTRCDisk::CheckDVDAndResetState();

        gGameWhereAmI = eGameWhere_TransitionCameraClear;
        RwCameraClear(sGameScreenTransCam, &back_col, 3);

        gGameWhereAmI = eGameWhere_TransitionCameraBegin;
        RwCameraBeginUpdate(sGameScreenTransCam);

        gGameWhereAmI = eGameWhere_TransitionRenderBackground;
        tex = (RwTexture*)xSTFindAsset(bgID, NULL);
        if ((tex != NULL) && (ras = (RwRaster*)tex->raster, ras != NULL))
        {
            RwRenderStateSet(rwRENDERSTATETEXTURERASTER, (void*)0);
            RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)2);
            RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)1);
            RwRenderStateSet(rwRENDERSTATEZTESTENABLE, (void*)0);
            RwRenderStateSet(rwRENDERSTATETEXTUREFILTER, (void*)2);
            RwRenderStateSet(rwRENDERSTATETEXTURERASTER, ras);

            F32 z = RwIm2DGetFarScreenZ();

            vx[0].x = 0.0f;
            vx[0].y = 0.0f;
            vx[0].z = z;
            vx[0].emissiveColor.red   = bgr;
            vx[0].emissiveColor.green = bgb;
            vx[0].emissiveColor.blue  = bgg;
            vx[0].emissiveColor.alpha = bga;
            vx[0].u = bgu1;
            vx[0].v = bgv1;

            vx[1].x = 0.0f;
            vx[1].y = 480.0f;
            vx[1].z = z;
            vx[1].emissiveColor.red   = bgr;
            vx[1].emissiveColor.green = bgb;
            vx[1].emissiveColor.blue  = bgg;
            vx[1].emissiveColor.alpha = bga;
            vx[1].u = bgu1;
            vx[1].v = bgv2;

            vx[2].x = 640.0f;
            vx[2].y = 0.0f;
            vx[2].z = z;
            vx[2].emissiveColor.red   = bgr;
            vx[2].emissiveColor.green = bgb;
            vx[2].emissiveColor.blue  = bgg;
            vx[2].emissiveColor.alpha = bga;
            vx[2].u = bgu2;
            vx[2].v = bgv1;

            vx[3].x = 640.0f;
            vx[3].y = 480.0f;
            vx[3].z = z;
            vx[3].emissiveColor.red   = bgr;
            vx[3].emissiveColor.green = bgb;
            vx[3].emissiveColor.blue  = bgg;
            vx[3].emissiveColor.alpha = bga;
            vx[3].u = bgu2;
            vx[3].v = bgv2;

            RwIm2DRenderPrimitive(rwPRIMTYPETRISTRIP, &vx[0], 4);
            RwRenderStateSet(rwRENDERSTATEZTESTENABLE, (void*)1);
            RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)5);
            RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)6);
        }
    }

    xprintf("Loading... %3.2f\n", percentComplete);

    if (msg != NULL)
    {
        xprintf(msg);
    }

    char meter[256] = "...";

    switch ((loadMeter / 0x19) % 5)
    {
        case 0:
            strcpy(meter, "   ");
            break;
        case 1:
            strcpy(meter, ".  ");
            break;
        case 2:
            strcpy(meter, ".. ");
            break;
        case 3:
            strcpy(meter, "...");
            break;
        case 4:
            loadMeter = 0;
            break;
    }

    loadMeter++;

    xDebugUpdate();

    gGameWhereAmI = eGameWhere_TransitionSpawnBubbles;
    zFX_SpawnBubbleWall();

    gGameWhereAmI = eGameWhere_TransitionDrawEnd;
    xDrawEnd();

    if (sGameScreenTransCam != NULL)
    {
        gGameWhereAmI = eGameWhere_TransitionUpdateBubbles;
        zGameUpdateTransitionBubbles();
        gGameWhereAmI = eGameWhere_TransitionCameraEnd;
        RwCameraEndUpdate(sGameScreenTransCam);
        gGameWhereAmI = eGameWhere_TransitionCameraShowRaster;
        RwCameraShowRaster(sGameScreenTransCam, NULL, 1);
    }

    gGameWhereAmI = eGameWhere_TransitionUpdateEnd;
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

void zGameSetupPlayer()
{
    xEntAsset* asset = (xEntAsset*)xSTFindAssetByType('PLYR', xSTAssetCountByType('PLYR') - 1, 0);
    U32 size;
    xMarkerAsset* m;
	
    asset->baseType = eBaseTypePlayer;
	
    if (sPortalling != 0)
    {
        if (sPlayerStartAngle > -1e8f)
        {
            asset->ang.x = (PI * sPlayerStartAngle) / 180.0f;
        }
        sPortalling = 0;
    }
	
    asset->ang.y = 0.0f;
    asset->ang.z = 0.0f;
    gGameWhereAmI = eGameWhere_SetupPlayerInit;
    zEntPlayer_Init(&globals.player.ent, asset);
	
    if (sPlayerMarkerStartID != 0)
    {
        m = (xMarkerAsset *)xSTFindAsset(sPlayerMarkerStartID, &size);
        if (m != NULL)
        {
            xVec3Copy((xVec3 *)&globals.player.ent.frame->mat.pos,    &m->pos);
            xVec3Copy((xVec3 *)&globals.player.ent.frame->oldmat.pos, &m->pos);
            xVec3Copy((xVec3 *)&globals.player.ent.model->Mat->pos,   &m->pos);
            xCameraSetTargetMatrix(&globals.camera, xEntGetFrame(&globals.player.ent));
        }
        sPlayerMarkerStartID = 0;
    }
	
    gGameWhereAmI = eGameWhere_SetupPlayerCamera;
    zCameraReset(&globals.camera);
    zEntPlayer_StoreCheckPoint(&globals.player.ent.frame->mat.pos, globals.player.ent.frame->rot.angle, globals.camera.id);
    gGameWhereAmI = eGameWhere_SetupPlayerEnd;
	
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
