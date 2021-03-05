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
#include "../Core/x/xMemMgr.h"
#include "../Core/x/xScrFx.h"
#include "../Core/x/xCM.h"
#include "../Core/x/xFX.h"
#include "../Core/x/xMath.h"
#include "CodeWarrior/string.h"

extern st_ZDISPATCH_CONTEXT lbl_80254E00;
extern int8 lbl_80254E10[512];

extern int32 g_zdsp_init;
extern int32 warned_zDispatcher;
extern signed char init_zDispatcher;
extern int32 oldVibrationOption;
extern uint32 oldSoundMode;
extern uint32 oldMusicVolume;
extern uint32 oldSFXVolume;

extern st_ZDISPATCH_DEPOT g_zdsp_depot;

extern iColor_tag _1143;

extern iColor_tag _1142;
extern float32 _1179;
extern float32 _1180;
extern float32 _1181;
extern float32 _1197;
extern float64 _1199;

extern uint8 menu_fmv_played;
extern int8 zEventLogBuf[256][20];

// func_800534E4
void zDispatcher_Startup()
{
}

// func_800534E8
void zDispatcher_Shutdown()
{
}

// func_800534EC
void zDispatcher_scenePrepare()
{
    st_ZDISPATCH_DEPOT* depot = &g_zdsp_depot;
    if (g_zdsp_init++ == 0)
    {
        memset(depot, 0, sizeof(st_ZDISPATCH_DEPOT));
    }
}

// func_8005352C
void zDispatcher_sceneFinish()
{
    st_ZDISPATCH_DEPOT* depot = &g_zdsp_depot;

    g_zdsp_init--;
    if (g_zdsp_init == 0)
    {
        memset(depot, 0, sizeof(st_ZDISPATCH_DEPOT));
    }
}

// func_80053568
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "zDispatcher_memPool__Fi")
#else
// Compiler is optimizng the size calcuation and moving parameters for memset differently.
st_ZDISPATCH_DATA* zDispatcher_memPool(int32 cnt)
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
#endif

// func_800535E0
st_ZDISPATCH_DATA* zDispatcher_getInst(st_ZDISPATCH_DATA* pool, int32 idx)
{
    return &pool[idx];
}

// func_800535EC
void zDispatcher_Init(st_ZDISPATCH_DATA* dspdata, xBaseAsset* bass)
{
    ZDSP_instInit(dspdata, bass);
}

// func_8005360C
void zDispatcher_InitDep(st_ZDISPATCH_DATA* dspdata, zScene* scene)
{
    ZDSP_instInitDep(dspdata, scene);
}

// func_8005362C
void zDispatcher_Save(st_ZDISPATCH_DATA* dspdata, xSerial* s)
{
    xBaseSave(dspdata, s);
}

// func_8005364C
void zDispatcher_Load(st_ZDISPATCH_DATA* dspdata, xSerial* s)
{
    xBaseLoad(dspdata, s);
}

// func_8005366C
void ZDSP_instInit(st_ZDISPATCH_DATA* dspdata, xBaseAsset* bass)
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

// func_800536F4
void ZDSP_instInitDep(st_ZDISPATCH_DATA* dspdata, zScene* scene)
{
    xSceneID2Name(globals.sceneCur, dspdata->id);
}

// func_80053724
void ZDSP_instReset(st_ZDISPATCH_DATA* dspdata, zScene* scene)
{
    xBaseAsset* ass = dspdata->rawass;
    xBaseReset(dspdata, ass);
    memset(&dspdata->rawass, 0, sizeof(xBaseAsset));
    ZDSP_instInit(dspdata, ass);
    ZDSP_instInitDep(dspdata, scene);
}

// func_80053794
void ZDSP_readAsset(st_ZDISPATCH_DATA* dspdata)
{
}

// func_80053798
void ZDSP_injectCmd(st_ZDISPATCH_DATA* dspdata, en_DISPATCH_COMMAND cmd)
{
    ZDSP_injectCmd(dspdata, cmd, NULL, NULL, NULL);
}

// func_800537C4
void ZDSP_injectCmd(st_ZDISPATCH_DATA* dspdata, en_DISPATCH_COMMAND cmd, int32 i)
{
    int32 arr[2];
    arr[0] = i;
    ZDSP_injectCmd(dspdata, cmd, (void*)arr, NULL, NULL);
}

// func_800537F4
void ZDSP_injectCmd(st_ZDISPATCH_DATA* dspdata, en_DISPATCH_COMMAND cmd, void* indata, void* inxtra,
                    void* result)
{
    st_ZDISPATCH_CONTEXT ctx = lbl_80254E00;
    ctx.cmd = cmd;
    ctx.indata = indata;
    ctx.inxtra = inxtra;
    ctx.result = result;
    ZDSP_doCommand(dspdata, &ctx);
}

// func_80053850
int32 ZDSP_doCommand(st_ZDISPATCH_DATA* dspdata, st_ZDISPATCH_CONTEXT* cmdCtxt)
{
    int32 iv;
    en_DISPATCH_COMMAND cmd = cmdCtxt->cmd;
    void* indata = cmdCtxt->indata;
    void* result = cmdCtxt->result;

    if (init_zDispatcher == 0)
    {
        warned_zDispatcher = 0;
        init_zDispatcher = 1;
    }
    if (warned_zDispatcher == 0)
    {
        warned_zDispatcher = 1;
    }

    switch (cmd)
    {
    case ZDSP_CMD_CTRL_CFGGET:
        *(int32*)result = 0;
        break;
    case ZDSP_CMD_CTRL_CFGSET:
        if (result != NULL)
        {
            *(int32*)result = 0;
        }
        break;
    case ZDSP_CMD_CTRL_VIBEGET:
        *(int32*)result = zVarEntryCB_VibrationOn(NULL);
        break;
    case ZDSP_CMD_CTRL_VIBESET:
        if (globals.option_vibration != *(int32*)indata)
        {
            globals.option_vibration = *(int32*)indata;
            xPadRumbleEnable(globals.currentActivePad, globals.option_vibration);
            zRumbleStart(globals.currentActivePad, SDR_Test);
        }
        break;
    case ZDSP_CMD_SNDMOD_GET:
        *(int32*)result = zVarEntryCB_SndMode(NULL);
        break;
    case ZDSP_CMD_SNDMOD_SET:
        if (*(int32*)indata == 0)
        {
            iSndStereo(0);
        }
        else if (*(int32*)indata == 1)
        {
            iSndStereo(1);
        }

        if (result != NULL)
        {
            *(int32*)result = zVarEntryCB_SndMode(NULL);
        }
        break;
    case ZDSP_CMD_MUSVOL_GET:
        *(int32*)result = zVarEntryCB_SndMusicVol(NULL);
        break;
    case ZDSP_CMD_MUSVOL_SET:
        WRAP_xsnd_setMusicVolume(*(int32*)indata);
        if (result != NULL)
        {
            *(int32*)result = zVarEntryCB_SndMusicVol(NULL);
        }
        break;
    case ZDSP_CMD_MUSVOL_INCR:
        iv = zVarEntryCB_SndMusicVol(NULL);
        if (indata != NULL)
        {
            iv += *(int32*)indata;
        }
        else
        {
            iv += 1;
        }
        WRAP_xsnd_setMusicVolume(iv);
        if (result != NULL)
        {
            *(int32*)result = zVarEntryCB_SndMusicVol(NULL);
        }
        break;
    case ZDSP_CMD_MUSVOL_DECR:
        iv = zVarEntryCB_SndMusicVol(NULL);
        if (indata != NULL)
        {
            iv -= *(int32*)indata;
        }
        else
        {
            iv -= 1;
        }
        WRAP_xsnd_setMusicVolume(iv);
        if (result != NULL)
        {
            *(int32*)result = zVarEntryCB_SndMusicVol(NULL);
        }
        break;
    case ZDSP_CMD_SFXVOL_GET:
        *(int32*)result = zVarEntryCB_SndFXVol(NULL);
        break;
    case ZDSP_CMD_SFXVOL_SET:
        WRAP_xsnd_setSFXVolume(*(int32*)indata);
        if (result != NULL)
        {
            *(int32*)result = zVarEntryCB_SndFXVol(NULL);
        }
        break;
    case ZDSP_CMD_SFXVOL_INCR:
        iv = zVarEntryCB_SndFXVol(NULL);
        if (indata != NULL)
        {
            iv += *(int32*)indata;
        }
        else
        {
            iv += 1;
        }
        WRAP_xsnd_setSFXVolume(iv);
        if (result != NULL)
        {
            *(int32*)result = zVarEntryCB_SndFXVol(NULL);
        }
        break;
    case ZDSP_CMD_SFXVOL_DECR:
        iv = zVarEntryCB_SndFXVol(NULL);
        if (indata != NULL)
        {
            iv -= *(int32*)indata;
        }
        else
        {
            iv -= 1;
        }
        WRAP_xsnd_setSFXVolume(iv);
        if (result != NULL)
        {
            *(int32*)result = zVarEntryCB_SndFXVol(NULL);
        }
        break;
    case ZDSP_CMD_GSTATE_GET:
        *(int32*)result = zGameStateGet();
        break;
    case ZDSP_CMD_GSTATE_SET:
        zGameStateSwitch(*(int32*)indata);
        if (result != NULL)
        {
            *(int32*)result = zGameStateGet();
        }
        break;
    case ZDSP_CMD_GMODE_GET:
        *(int32*)result = zGameModeGet();
        break;
    case ZDSP_CMD_GMODE_SET:
        zGameModeSwitch(*(eGameMode*)indata);
        if (result != NULL)
        {
            *(int32*)result = zGameModeGet();
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

// func_80053B2C
void zDispatcherStoreOptions()
{
    oldVibrationOption = globals.option_vibration;
    oldSoundMode = zVarEntryCB_SndMode(NULL);
    oldMusicVolume = zVarEntryCB_SndMusicVol(NULL);
    oldSFXVolume = zVarEntryCB_SndFXVol(NULL);
}

#ifndef NON_MATCHING
// func_80053B7C
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "zDispatcherRestoreOptions__Fv")
#else
// This is actually stupid. Loading parameter before assignment.
void zDispatcherRestoreOptions()
{
    xPadRumbleEnable(globals.currentActivePad, oldVibrationOption);
    globals.option_vibration = oldVibrationOption;
    iSndStereo(oldSoundMode);
    WRAP_xsnd_setMusicVolume(oldMusicVolume);
    WRAP_xsnd_setSFXVolume(oldSFXVolume);
}
#endif

// func_80053BD4
#if 1
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "ZDSP_elcb_event__FP5xBaseP5xBaseUiPCfP5xBase")
#else
// WIP
// This switch is a mess, good luck.
int32 ZDSP_elcb_event(xBase*, xBase* xb, uint32 toEvent, const float32* toParam,
                      xBase* toParamWidget)
{
    st_ZDISPATCH_DATA* dspdata = (st_ZDISPATCH_DATA*)xb;
    switch (toEvent)
    {
    case 10:
        ZDSP_instReset(dspdata, globals.sceneCur);
        break;
    case 0x129:
        zMusicNotifyEvent(toParam, toParamWidget);
        break;
    case 0x60:
        ZDSP_injectCmd(dspdata, ZDSP_CMD_CTRL_CFGSET, 0);
        break;
    case 0x61:
        ZDSP_injectCmd(dspdata, ZDSP_CMD_CTRL_CFGSET, 1);
        break;
    case 0x62:
        ZDSP_injectCmd(dspdata, ZDSP_CMD_CTRL_CFGSET, 2);
        break;
    case 0x63:
        ZDSP_injectCmd(dspdata, ZDSP_CMD_CTRL_CFGSET, 3);
        break;
    case 0x64:
        ZDSP_injectCmd(dspdata, ZDSP_CMD_CTRL_VIBESET, 1);
        break;
    case 0x65:
        ZDSP_injectCmd(dspdata, ZDSP_CMD_CTRL_VIBESET, 0);
        break;
    case 0x66:
        ZDSP_injectCmd(dspdata, ZDSP_CMD_SNDMOD_SET, 0);
        break;
    case 0x67:
        ZDSP_injectCmd(dspdata, ZDSP_CMD_SNDMOD_SET, 1);
        break;

    case 0x68:
        ZDSP_injectCmd(dspdata, ZDSP_CMD_SNDVOL_INCR);
        break;
    case 0x69:
        ZDSP_injectCmd(dspdata, ZDSP_CMD_SNDVOL_DECR);
        break;
    case 0x6a:
        ZDSP_injectCmd(dspdata, ZDSP_CMD_MUSVOL_INCR);
        break;
    case 0x6b:
        ZDSP_injectCmd(dspdata, ZDSP_CMD_MUSVOL_DECR);
        break;

    case 0x6c:
        ZDSP_injectCmd(dspdata, ZDSP_CMD_SFXVOL_INCR);
        break;
    case 0x6d:
        ZDSP_injectCmd(dspdata, ZDSP_CMD_SFXVOL_DECR);
        break;
    case 0xa9:
        zGameStateSwitchEvent(toEvent);
        break;
    case 0x9e:
        globals.currentActivePad = 0;
        zGameStateSwitchEvent(0x9e);
        break;
    case 0xa7:
        break;
    case 0xa8:
        zSaveLoad_DispatchCB(toEvent, toParam);
        break;

    case 0xc2:
        zEntPlayer_SNDPlay(ePlayerSnd_CheckPoint, _1179);
        float32 fVar2;
        if (*toParam != _1179)
        {
            fVar2 = _1180 * *toParam;
        }
        else
        {
            fVar2 = globals.player.ent.frame->rot.angle;
        }
        zEntPlayer_StoreCheckPoint((xVec3*)toParamWidget, fVar2, globals.camera.id);
        break;
    case 0x11e:
        zhud::show();
        break;
    case 0x11f:
        zhud::hide();
        break;
    case 0x120:
        iColor_tag black = _1142;
        iColor_tag clear = _1143;
        xScrFxFade(&clear, &black, *toParam, 0, 1);
        break;
    case 0x126:
        menu_fmv_played = 1;
        zFMVPlay(zFMVFileGetName((eFMVFile)(uint32)*toParam), 0x10001, _1181, 1, 0);
        break;
    case 0x130:
        zSceneEnableScreenAdj(1);
        zSceneSetOldScreenAdj();
        break;
    case 0x131:
        zSceneEnableScreenAdj(0);
        break;
    case 0x101:
        globals.player.g.PowerUp[(int)*toParam] = 1;
        break;

    case 0x1fd:
        xCameraFXShake(*toParam, toParam[1], toParam[2], toParam[3], _1179, NULL, NULL);
        break;
    case 0x210:
        xCMstart((xCreditsData*)toParamWidget, *toParam, xb);
        break;

    case 0x211:
        xCMstop();
        break;

    case 0x217:
        int8 events[512];
        uint32 c;
        uint32 len;
        uint32 i;
        int8 log[512];

        for (i = 0; i < 512; i++)
        {
            events[i] = lbl_80254E10[i];
        }

        c = 0;
        for (i = 0; i < 8; i += len)
        {
            c += 1;
            len = strlen((char*)&ringlist[i]);
        }

        strcpy(lbl_80254E10, zEventLogBuf[c + 1]);
        for (i = c + 2; i < 0x13; i++)
        {
            strcat(log, zEventLogBuf[i]);
        }
        strncpy(events, log, 0x200);
        break;
    case 0x21b:
        zDispatcherStoreOptions();
        break;

    case 0x21c:
        zDispatcherRestoreOptions();
        break;
    }
    return 1;
}
#endif

#if 1
// func_800540D4
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "WRAP_xsnd_setMusicVolume__Fi")
#else
void WRAP_xsnd_setMusicVolume(int32 i)
{
    float f1 = _1181 * i;
    float f2 = MIN(f1, _1197);

    if (f1 < _1179)
    {
        f2 = f1;
    }
    else
    {
        f2 = _1197;
    }
    xSndSetCategoryVol(SND_CAT_MUSIC, f2);
    zMusicRefreshVolume();
}
#endif

// func_80054158
#if 1
#pragma GLOBAL_ASM("asm/Game/zDispatcher.s", "WRAP_xsnd_setSFXVolume__Fi")
#else
void WRAP_xsnd_setSFXVolume(int32 i)
{
    float32 fcmp = _1181 * i; // - _1199;
    float32 f = MIN(fcmp, _1197); //_1197 < fcmp ? fcmp : _1197;

    if (f > _1179)
    {
        f = _1197;
    }
    else
    {
        f = fcmp < _1197 ? fcmp : _1197;
    }
    xSndSetCategoryVol(SND_CAT_GAME, f);
    xSndSetCategoryVol(SND_CAT_DIALOG, f);
    xSndSetCategoryVol(SND_CAT_UI, f);
}
#endif
