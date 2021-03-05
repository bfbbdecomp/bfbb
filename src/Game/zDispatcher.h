#ifndef ZDISPATCHER_H
#define ZDISPATCHER_H

#include "../Core/x/xBase.h"

struct st_ZDISPATCH_DATA : xBase
{
    xBaseAsset* rawass;
    int32 placeholder;
};

struct st_ZDISPATCH_DEPOT
{
    st_ZDISPATCH_DATA* raw_pool;
    int32 raw_cnt;
};

enum en_DISPATCH_COMMAND
{
    ZDSP_CMD_INITDFLT = 0xffffffff,
    ZDSP_CMD_CTRL_CFGGET = 0,
    ZDSP_CMD_CTRL_CFGSET,
    ZDSP_CMD_CTRL_VIBEGET,
    ZDSP_CMD_CTRL_VIBESET,
    ZDSP_CMD_SNDMOD_GET,
    ZDSP_CMD_SNDMOD_SET,
    ZDSP_CMD_SNDVOL_GET,
    ZDSP_CMD_SNDVOL_SET,
    ZDSP_CMD_SNDVOL_INCR,
    ZDSP_CMD_SNDVOL_DECR,
    ZDSP_CMD_MUSVOL_GET,
    ZDSP_CMD_MUSVOL_SET,
    ZDSP_CMD_MUSVOL_INCR,
    ZDSP_CMD_MUSVOL_DECR,
    ZDSP_CMD_SFXVOL_GET,
    ZDSP_CMD_SFXVOL_SET,
    ZDSP_CMD_SFXVOL_INCR,
    ZDSP_CMD_SFXVOL_DECR,
    ZDSP_CMD_GSTATE_GET,
    ZDSP_CMD_GSTATE_SET,
    ZDSP_CMD_GMODE_GET,
    ZDSP_CMD_GMODE_SET,
    ZDSP_CHECKPNT_SET,
    ZDSP_CMD_NOMORE
};

struct st_ZDISPATCH_CONTEXT
{
    en_DISPATCH_COMMAND cmd;
    void* indata;
    void* inxtra;
    void* result;
};

struct zScene;

void zDispatcher_Startup();
void zDispatcher_Shutdown();
void zDispatcher_scenePrepare();
void zDispatcher_sceneFinish();
st_ZDISPATCH_DATA* zDispatcher_memPool(int32 cnt);
st_ZDISPATCH_DATA* zDispatcher_getInst(st_ZDISPATCH_DATA* pool, int32 idx);
void zDispatcher_Init(st_ZDISPATCH_DATA* dspdata, xBaseAsset* bass);
void zDispatcher_InitDep(st_ZDISPATCH_DATA* dspdata, zScene*);
void zDispatcher_Save(st_ZDISPATCH_DATA* dspdata, xSerial* s);
void zDispatcher_Load(st_ZDISPATCH_DATA* dspdata, xSerial* s);
void ZDSP_instInit(st_ZDISPATCH_DATA* dspdata, xBaseAsset* bass);
void ZDSP_instInitDep(st_ZDISPATCH_DATA* dspdata, zScene* scene);
void ZDSP_instReset(st_ZDISPATCH_DATA* dspdata, zScene* scene);
void ZDSP_readAsset(st_ZDISPATCH_DATA* dspdata);
void ZDSP_injectCmd(st_ZDISPATCH_DATA* dspdata, en_DISPATCH_COMMAND cmd);
void ZDSP_injectCmd(st_ZDISPATCH_DATA* dspdata, en_DISPATCH_COMMAND cmd, int32);
void ZDSP_injectCmd(st_ZDISPATCH_DATA* dspdata, en_DISPATCH_COMMAND cmd, void* indata, void* inxtra,
                    void* result);
int32 ZDSP_doCommand(st_ZDISPATCH_DATA* dspdata, st_ZDISPATCH_CONTEXT* cmdCtxt);
void zDispatcherStoreOptions();
void zDispatcherRestoreOptions();
int32 ZDSP_elcb_event(xBase*, xBase* xb, uint32 toEvent, const float32* toParam,
                      xBase* toParamWidget);
void WRAP_xsnd_setMusicVolume(int32 i);
void WRAP_xsnd_setSFXVolume(int32 i);

#endif