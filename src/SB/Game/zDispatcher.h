#ifndef ZDISPATCHER_H
#define ZDISPATCHER_H

#include "xBase.h"
#include "zScene.h"

struct st_ZDISPATCH_DATA : xBase
{
    xBaseAsset* rawass;
    S32 placeholder;
};

struct st_ZDISPATCH_DEPOT
{
    st_ZDISPATCH_DATA* raw_pool;
    S32 raw_cnt;
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

void zDispatcher_Startup();
void zDispatcher_Shutdown();
void zDispatcher_scenePrepare();
void zDispatcher_sceneFinish();
st_ZDISPATCH_DATA* zDispatcher_memPool(S32 cnt);
st_ZDISPATCH_DATA* zDispatcher_getInst(st_ZDISPATCH_DATA* pool, S32 idx);
void zDispatcher_Init(st_ZDISPATCH_DATA* dspdata, xBaseAsset* bass);
void zDispatcher_InitDep(st_ZDISPATCH_DATA* dspdata, zScene*);
void zDispatcher_Save(st_ZDISPATCH_DATA* dspdata, xSerial* s);
void zDispatcher_Load(st_ZDISPATCH_DATA* dspdata, xSerial* s);
void ZDSP_injectCmd(st_ZDISPATCH_DATA* dspdata, en_DISPATCH_COMMAND cmd);
void ZDSP_injectCmd(st_ZDISPATCH_DATA* dspdata, en_DISPATCH_COMMAND cmd, S32);
void ZDSP_injectCmd(st_ZDISPATCH_DATA* dspdata, en_DISPATCH_COMMAND cmd, void* indata, void* inxtra,
                    void* result);
void zDispatcherStoreOptions();
void zDispatcherRestoreOptions();

#endif
