#include "zDispatcher.h"

#include <types.h>

#include "zGlobals.h"
#include "zRumble.h"
#include "zVar.h"
#include "zGameState.h"
#include "zMusic.h"
#include "zHud.h"
#include "zFMV.h"
#include "zSaveLoad.h"
#include "xMemMgr.h"
#include "xScrFx.h"
#include "xCM.h"
#include "xFX.h"
#include "xMath.h"
#include "string.h"

static void ZDSP_instInit(st_ZDISPATCH_DATA* dspdata, xBaseAsset* bass);
static void ZDSP_instInitDep(st_ZDISPATCH_DATA* dspdata, zScene* scene);
static void ZDSP_readAsset(st_ZDISPATCH_DATA* dspdata);
static S32 ZDSP_doCommand(st_ZDISPATCH_DATA* dspdata, st_ZDISPATCH_CONTEXT* cmdCtxt);
static S32 ZDSP_elcb_event(xBase*, xBase* xb, U32 toEvent, const F32* toParam, xBase* toParamWidget);
static void WRAP_xsnd_setMusicVolume(S32 i);
static void WRAP_xsnd_setSFXVolume(S32 i);

S32 g_zdsp_init;
S32 oldVibrationOption;
U32 oldSoundMode;
U32 oldMusicVolume;
U32 oldSFXVolume;

st_ZDISPATCH_DEPOT g_zdsp_depot = { 0 };

extern U8 menu_fmv_played;
extern char zEventLogBuf[256][20];

void zDispatcher_Startup()
{
}

void zDispatcher_Shutdown()
{
}

void zDispatcher_scenePrepare()
{
    st_ZDISPATCH_DEPOT* depot = &g_zdsp_depot;
    if (g_zdsp_init++ == 0)
    {
        memset(depot, 0, sizeof(st_ZDISPATCH_DEPOT));
    }
}

void zDispatcher_sceneFinish()
{
    st_ZDISPATCH_DEPOT* depot = &g_zdsp_depot;

    g_zdsp_init--;
    if (g_zdsp_init == 0)
    {
        memset(depot, 0, sizeof(st_ZDISPATCH_DEPOT));
    }
}

st_ZDISPATCH_DATA* zDispatcher_memPool(S32 cnt)
{
    st_ZDISPATCH_DATA* pool;
    st_ZDISPATCH_DEPOT* depot = &g_zdsp_depot;
    if (cnt < 1)
    {
        return NULL;
    }
    else
    {
        pool = (st_ZDISPATCH_DATA*)xMemAlloc(gActiveHeap, cnt * sizeof(st_ZDISPATCH_DATA), 0);
        memset(pool, 0, cnt * sizeof(st_ZDISPATCH_DATA));
        depot->raw_pool = pool;
        depot->raw_cnt = cnt;
        return pool;
    }
}

st_ZDISPATCH_DATA* zDispatcher_getInst(st_ZDISPATCH_DATA* pool, S32 idx)
{
    return &pool[idx];
}

void zDispatcher_Init(st_ZDISPATCH_DATA* dspdata, xBaseAsset* bass)
{
    ZDSP_instInit(dspdata, bass);
}

void zDispatcher_InitDep(st_ZDISPATCH_DATA* dspdata, zScene* scene)
{
    ZDSP_instInitDep(dspdata, scene);
}

void zDispatcher_Save(st_ZDISPATCH_DATA* dspdata, xSerial* s)
{
    xBaseSave(dspdata, s);
}

void zDispatcher_Load(st_ZDISPATCH_DATA* dspdata, xSerial* s)
{
    xBaseLoad(dspdata, s);
}

static void ZDSP_instInit(st_ZDISPATCH_DATA* dspdata, xBaseAsset* bass)
{
    xBaseInit(dspdata, bass);
    dspdata->rawass = bass;
    dspdata->eventFunc = ZDSP_elcb_event;
    if (dspdata->linkCount != 0)
    {
        dspdata->link = (xLinkAsset*)(dspdata->rawass + 1);
    }
    else
    {
        dspdata->link = NULL;
    }
    ZDSP_readAsset(dspdata);
    xSceneID2Name(globals.sceneCur, dspdata->id);
}

static void ZDSP_instInitDep(st_ZDISPATCH_DATA* dspdata, zScene* scene)
{
    xSceneID2Name(globals.sceneCur, dspdata->id);
}

static void ZDSP_instReset(st_ZDISPATCH_DATA* dspdata, zScene* scene)
{
    xBaseAsset* ass = dspdata->rawass;
    xBaseReset(dspdata, ass);
    memset(&dspdata->rawass, 0, sizeof(xBaseAsset));
    ZDSP_instInit(dspdata, ass);
    ZDSP_instInitDep(dspdata, scene);
}

static void ZDSP_readAsset(st_ZDISPATCH_DATA* dspdata)
{
}

void ZDSP_injectCmd(st_ZDISPATCH_DATA* dspdata, en_DISPATCH_COMMAND cmd)
{
    ZDSP_injectCmd(dspdata, cmd, NULL, NULL, NULL);
}

void ZDSP_injectCmd(st_ZDISPATCH_DATA* dspdata, en_DISPATCH_COMMAND cmd, S32 i)
{
    S32 arr[2];
    arr[0] = i;
    ZDSP_injectCmd(dspdata, cmd, (void*)arr, NULL, NULL);
}

void ZDSP_injectCmd(st_ZDISPATCH_DATA* dspdata, en_DISPATCH_COMMAND cmd, void* indata, void* inxtra,
                    void* result)
{
    st_ZDISPATCH_CONTEXT ctx = { ZDSP_CMD_INITDFLT, NULL, NULL, NULL };
    ctx.cmd = cmd;
    ctx.indata = indata;
    ctx.inxtra = inxtra;
    ctx.result = result;
    ZDSP_doCommand(dspdata, &ctx);
}

static S32 ZDSP_doCommand(st_ZDISPATCH_DATA* dspdata, st_ZDISPATCH_CONTEXT* cmdCtxt)
{
    S32 iv;
    en_DISPATCH_COMMAND cmd = cmdCtxt->cmd;
    void* indata = cmdCtxt->indata;
    void* result = cmdCtxt->result;
    static S32 warned;
    static S8 init;

    if ((S32)init == 0)
    {
        warned = 0;
        init = 1;
    }
    if (warned == 0)
    {
        warned = 1;
    }

    switch (cmd)
    {
    case ZDSP_CMD_CTRL_CFGGET:
        *(S32*)result = 0;
        break;
    case ZDSP_CMD_CTRL_CFGSET:
        if (result != NULL)
        {
            *(S32*)result = 0;
        }
        break;
    case ZDSP_CMD_CTRL_VIBEGET:
        *(S32*)result = zVarEntryCB_VibrationOn(NULL);
        break;
    case ZDSP_CMD_CTRL_VIBESET:
        if (globals.option_vibration != *(S32*)indata)
        {
            globals.option_vibration = *(S32*)indata;
            xPadRumbleEnable(globals.currentActivePad, globals.option_vibration);
            zRumbleStart(globals.currentActivePad, SDR_Test);
        }
        break;
    case ZDSP_CMD_SNDMOD_GET:
        *(S32*)result = zVarEntryCB_SndMode(NULL);
        break;
    case ZDSP_CMD_SNDMOD_SET:
        if (*(S32*)indata == 0)
        {
            iSndStereo(0);
        }
        else if (*(S32*)indata == 1)
        {
            iSndStereo(1);
        }

        if (result != NULL)
        {
            *(S32*)result = zVarEntryCB_SndMode(NULL);
        }
        break;
    case ZDSP_CMD_MUSVOL_GET:
        *(S32*)result = zVarEntryCB_SndMusicVol(NULL);
        break;
    case ZDSP_CMD_MUSVOL_SET:
        WRAP_xsnd_setMusicVolume(*(S32*)indata);
        if (result != NULL)
        {
            *(S32*)result = zVarEntryCB_SndMusicVol(NULL);
        }
        break;
    case ZDSP_CMD_MUSVOL_INCR:
        iv = zVarEntryCB_SndMusicVol(NULL);
        if (indata != NULL)
        {
            iv += *(S32*)indata;
        }
        else
        {
            iv += 1;
        }
        WRAP_xsnd_setMusicVolume(iv);
        if (result != NULL)
        {
            *(S32*)result = zVarEntryCB_SndMusicVol(NULL);
        }
        break;
    case ZDSP_CMD_MUSVOL_DECR:
        iv = zVarEntryCB_SndMusicVol(NULL);
        if (indata != NULL)
        {
            iv -= *(S32*)indata;
        }
        else
        {
            iv -= 1;
        }
        WRAP_xsnd_setMusicVolume(iv);
        if (result != NULL)
        {
            *(S32*)result = zVarEntryCB_SndMusicVol(NULL);
        }
        break;
    case ZDSP_CMD_SFXVOL_GET:
        *(S32*)result = zVarEntryCB_SndFXVol(NULL);
        break;
    case ZDSP_CMD_SFXVOL_SET:
        WRAP_xsnd_setSFXVolume(*(S32*)indata);
        if (result != NULL)
        {
            *(S32*)result = zVarEntryCB_SndFXVol(NULL);
        }
        break;
    case ZDSP_CMD_SFXVOL_INCR:
        iv = zVarEntryCB_SndFXVol(NULL);
        if (indata != NULL)
        {
            iv += *(S32*)indata;
        }
        else
        {
            iv += 1;
        }
        WRAP_xsnd_setSFXVolume(iv);
        if (result != NULL)
        {
            *(S32*)result = zVarEntryCB_SndFXVol(NULL);
        }
        break;
    case ZDSP_CMD_SFXVOL_DECR:
        iv = zVarEntryCB_SndFXVol(NULL);
        if (indata != NULL)
        {
            iv -= *(S32*)indata;
        }
        else
        {
            iv -= 1;
        }
        WRAP_xsnd_setSFXVolume(iv);
        if (result != NULL)
        {
            *(S32*)result = zVarEntryCB_SndFXVol(NULL);
        }
        break;
    case ZDSP_CMD_GSTATE_GET:
        *(S32*)result = zGameStateGet();
        break;
    case ZDSP_CMD_GSTATE_SET:
        zGameStateSwitch(*(S32*)indata);
        if (result != NULL)
        {
            *(S32*)result = zGameStateGet();
        }
        break;
    case ZDSP_CMD_GMODE_GET:
        *(S32*)result = zGameModeGet();
        break;
    case ZDSP_CMD_GMODE_SET:
        zGameModeSwitch(*(eGameMode*)indata);
        if (result != NULL)
        {
            *(S32*)result = zGameModeGet();
        }
        break;
    case ZDSP_CMD_SNDVOL_GET:
    case ZDSP_CMD_SNDVOL_SET:
    case ZDSP_CMD_SNDVOL_INCR:
    case ZDSP_CMD_SNDVOL_DECR:
    case ZDSP_CHECKPNT_SET:
        break;
    }
    return 1;
}

void zDispatcherStoreOptions()
{
    oldVibrationOption = globals.option_vibration;
    oldSoundMode = zVarEntryCB_SndMode(NULL);
    oldMusicVolume = zVarEntryCB_SndMusicVol(NULL);
    oldSFXVolume = zVarEntryCB_SndFXVol(NULL);
}

// This is actually stupid. Loading parameter before assignment.
void zDispatcherRestoreOptions()
{
    xPadRumbleEnable(globals.currentActivePad, oldVibrationOption);
    globals.option_vibration = oldVibrationOption;
    iSndStereo(oldSoundMode);
    WRAP_xsnd_setMusicVolume(oldMusicVolume);
    WRAP_xsnd_setSFXVolume(oldSFXVolume);
}

// FIXME: Code segments are all in the right order, just need to figure out
//        correct cases. Lots of Dispatcher events that are not referenced here that
//        are likely candidates for fallthroughs
static S32 ZDSP_elcb_event(xBase*, xBase* xb, U32 toEvent, const F32* toParam, xBase* toParamWidget)
{
    st_ZDISPATCH_DATA* dspdata = (st_ZDISPATCH_DATA*)xb;
    switch (toEvent)
    {
    case eEventReset:
        ZDSP_instReset(dspdata, globals.sceneCur);
        break;
    case eEventPlayMusic:
        zMusicNotifyEvent(toParam, toParamWidget);
        break;
    case eEventDispatcher_PadCfg_PresetA:
        ZDSP_injectCmd(dspdata, ZDSP_CMD_CTRL_CFGSET, 0);
        break;
    case eEventDispatcher_PadCfg_PresetB:
        ZDSP_injectCmd(dspdata, ZDSP_CMD_CTRL_CFGSET, 1);
        break;
    case eEventDispatcher_PadCfg_PresetC:
        ZDSP_injectCmd(dspdata, ZDSP_CMD_CTRL_CFGSET, 2);
        break;
    case eEventDispatcher_PadCfg_PresetD:
        ZDSP_injectCmd(dspdata, ZDSP_CMD_CTRL_CFGSET, 3);
        break;
    case eEventDispatcher_PadVibrateOn:
        ZDSP_injectCmd(dspdata, ZDSP_CMD_CTRL_VIBESET, 1);
        break;
    case eEventDispatcher_PadVibrateOff:
        ZDSP_injectCmd(dspdata, ZDSP_CMD_CTRL_VIBESET, 0);
        break;
    case eEventDispatcher_SoundMono:
        ZDSP_injectCmd(dspdata, ZDSP_CMD_SNDMOD_SET, 0);
        break;
    case eEventDispatcher_SoundStereo:
        ZDSP_injectCmd(dspdata, ZDSP_CMD_SNDMOD_SET, 1);
        break;

    case eEventDispatcher_SoundMasterIncrease:
        ZDSP_injectCmd(dspdata, ZDSP_CMD_SNDVOL_INCR);
        break;
    case eEventDispatcher_SoundMasterDecrease:
        ZDSP_injectCmd(dspdata, ZDSP_CMD_SNDVOL_DECR);
        break;
    case eEventDispatcher_SoundMusicIncrease:
        ZDSP_injectCmd(dspdata, ZDSP_CMD_MUSVOL_INCR);
        break;
    case eEventDispatcher_SoundMusicDecrease:
        ZDSP_injectCmd(dspdata, ZDSP_CMD_MUSVOL_DECR);
        break;
    case eEventDispatcher_SoundSFXIncrease:
        ZDSP_injectCmd(dspdata, ZDSP_CMD_SFXVOL_INCR);
        break;
    case eEventDispatcher_SoundSFXDecrease:
        ZDSP_injectCmd(dspdata, ZDSP_CMD_SFXVOL_DECR);
        break;
    case eEventDispatcher_GameState_SceneSwitch:
        zGameStateSwitchEvent(toEvent);
        break;
    case eEventDispatcher_SetGameState_FirstTime:
        globals.autoSaveFeature = FALSE;
        zGameStateSwitchEvent(toEvent);
        break;
    case eEventLobMasterShootFromWidget:
        break;
    case eEventDispatcher_SLBack:
    case eEventDispatcher_SLCancel:
    case eEventDispatcher_SLRetry:
    case eEventDispatcher_SLSelectCard:
    case eEventDispatcher_SLSelectSlot:
    case eEventDispatcher_SLOkay:
        zSaveLoad_DispatchCB(toEvent, toParam);
        break;

    case eEventDispatcher_StoreCheckPoint:
        zEntPlayer_SNDPlay(ePlayerSnd_CheckPoint, 0.0f);
        F32 rotAngle;
        if (*toParam)
        {
            rotAngle = 0.017453292f * *toParam;
        }
        else
        {
            rotAngle = globals.player.ent.frame->rot.angle;
        }
        zEntPlayer_StoreCheckPoint((xVec3*)toParamWidget, rotAngle, globals.camera.id);
        break;
    case eEventDispatcher_ShowHud:
        zhud::show();
        break;
    case eEventDispatcher_HideHud:
        zhud::hide();
        break;
    case eEventDispatcher_FadeOut:
        iColor_tag black = { 0x00, 0x00, 0x00, 0xFF };
        iColor_tag clear = { 0x00, 0x00, 0x00, 0x00 };
        xScrFxFade(&clear, &black, *toParam, NULL, 1);
        break;
    case eEventPlayMovie:
        menu_fmv_played = 1;
        zFMVPlay(zFMVFileGetName((eFMVFile)(U32)*toParam), 0x10001, 0.1f, 1, 0);
        break;
    case eEventDispatcherScreenAdjustON:
        zSceneEnableScreenAdj(1);
        zSceneSetOldScreenAdj();
        break;
    case eEventDispatcherScreenAdjustOFF:
        zSceneEnableScreenAdj(0);
        break;
    case eEventGivePowerUp:
        globals.player.g.PowerUp[(int)*toParam] = 1;
        break;

    case eEventCameraFXShake:
        xCameraFXShake(*toParam, toParam[1], toParam[2], toParam[3], 0.0f, NULL, NULL);
        break;
    case eEventCreditsStart:
        xCMstart((xCreditsData*)toParamWidget, *toParam, xb);
        break;

    case eEventCreditsStop:
        xCMstop();
        break;

    case eEventDispatcherAssert:
        char events[512] = { };
        char log[512];
        U32 c;
        U32 len;
        U32 i;

        c = 0;
        for (i = 0; i < 8; i += len)
        {
            c += 1;
            len = strlen((char*)&zEventLogBuf[i]);
        }

        strcpy((char*) events, (char*) zEventLogBuf[c + 1]);
        for (i = c + 2; i < 0x13; i++)
        {
            strcat(log, zEventLogBuf[i]);
        }
        strncpy(events, log, 0x200);
        break;
    case eEventStoreOptions:
        zDispatcherStoreOptions();
        break;

    case eEventRestoreOptions:
        zDispatcherRestoreOptions();
        break;
    }
    return 1;
}

static void WRAP_xsnd_setMusicVolume(S32 i)
{
    F32 musicVol = 0.1f * i;
    F32 clampedVolume = CLAMP(musicVol, 0.00f, 1.0f);

    xSndSetCategoryVol(SND_CAT_MUSIC, clampedVolume);
    zMusicRefreshVolume();
}

static void WRAP_xsnd_setSFXVolume(S32 i)
{
    F32 sfxVol = 0.1f * i;
    F32 clampedVolume = CLAMP(sfxVol, 0.0f, 1.0f);

    xSndSetCategoryVol(SND_CAT_GAME, clampedVolume);
    xSndSetCategoryVol(SND_CAT_DIALOG, clampedVolume);
    xSndSetCategoryVol(SND_CAT_UI, clampedVolume);
}
