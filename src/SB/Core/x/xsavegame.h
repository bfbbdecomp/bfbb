#ifndef XSAVEGAME_H
#define XSAVEGAME_H

#include <types.h>

#include "iTime.h"
#include "isavegame.h"

struct st_XSAVEGAME_READCONTEXT
{
};

struct st_XSAVEGAME_WRITECONTEXT
{
};

enum en_SAVEGAME_MODE
{
    XSG_MODE_LOAD = 0xa,
    XSG_MODE_SAVE
};

struct st_XSAVEGAME_DATA;

struct st_XSAVEGAME_CLIENT
{
    U32 idtag;
    S32 (*cltinfo)(void*, st_XSAVEGAME_DATA*, S32*, S32*);
    S32 (*cltproc)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
    S32 (*cltload)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, U32, S32);
    void* cltdata;
    S32 needamt;
    S32 maxamt;
    S32 realamt;
    char* buf_sizepos;
    char* buf_maxpos;
    S32 blokact;
    S32 blokmax;
    char* blokpos;
    char* readpos;
    S32 readamt;
    S32 readremain;
};

struct st_XSAVEGAME_DATA
{
    S32 gfile_idx;
    en_SAVEGAME_MODE mode;
    U32 stage;
    S32 gslot;
    char label[64];
    S32 progress;
    S32 thumbIconIdx;
    iTime playtime;
    char* membuf;
    S32 memsize;
    char* buf_curpos;
    char* buf_sizespot;
    char* buf_cksmspot;
    S32 totamt;
    U32 chksum;
    U32 upd_tally;
    S32 cltneed;
    S32 cltmax;
    S32 chdrneed;
    S32 stkcnt;
    st_XSAVEGAME_CLIENT cltstk[128];
    st_XSAVEGAME_CLIENT dfltloadclt;
    U32 file_chksum;
    U32 read_chksum;
    S32 readsize;
    char* loadbuf;
    S32 loadsize;
    char* walkpos;
    S32 walkremain;
    st_ISGSESSION* isgsess;
};

struct XSGAutoData
{
    S32 flg_autodata;
    S32 lastTarg;
    S32 lastGame;
    S32 lastPhysicalSlot;
    st_ISGSESSION* isg_monitor;

    S32 IsValid();
    void MarkInvalid();
    S32 SetCache(S32 targ, S32 game, S32 physicalSlot);
    void Discard();
    st_ISGSESSION* HWConnect(S32 targ);
    void HWDisconnect(st_ISGSESSION* isgsess);
    S32 HWCheckConnect(S32 targ);
    S32 LastPhysicalSlot();
    S32 LastGame();
    S32 LastTarget();
};

enum en_XSGASYNC_STATUS
{
    XSG_ASTAT_NOOP,
    XSG_ASTAT_INPROG,
    XSG_ASTAT_SUCCESS,
    XSG_ASTAT_FAILED
};

struct st_XSAVEGAME_LEADER
{
    char gameLabel[64];
    S32 progress;
    iTime gametime;
    char thumbIconIdx;
};

enum en_XSG_WHYFAIL
{
    XSG_WHYERR_NONE,
    XSG_WHYERR_NOCARD,
    XSG_WHYERR_NOROOM,
    XSG_WHYERR_DAMAGE,
    XSG_WHYERR_CARDYANKED,
    XSG_WHYERR_OTHER,
    XSG_WHYERR_NOMORE
};

struct st_XSG_SHORTLABEL
{
    const char* msglong;
    const char* msgshort;
};

S32 xSGStartup();
S32 xSGShutdown();
st_XSAVEGAME_DATA* xSGInit(en_SAVEGAME_MODE mode);
S32 xSGDone(st_XSAVEGAME_DATA* xsgdata);
S32 xSGCheckForCorruptFiles(st_XSAVEGAME_DATA* xsgdata, char files[][64]);
S32 xSGTgtCount(st_XSAVEGAME_DATA* xsgdata, S32* max);
S32 xSGTgtPhysSlotIdx(st_XSAVEGAME_DATA* xsgdata, S32 tidx);
S32 xSGTgtIsFormat(st_XSAVEGAME_DATA* xsgdata, S32 tidx, S32* badEncode);
S32 xSGTgtFormatTgt(st_XSAVEGAME_DATA* xsgdata, S32 tidx, S32* canRecover);
S32 xSGTgtSelect(st_XSAVEGAME_DATA* xsgdata, S32 tidx);
S32 xSGTgtHasGameDir(st_XSAVEGAME_DATA* xsgdata, S32 tidx);
S32 xSGTgtHaveRoom(st_XSAVEGAME_DATA* xsgdata, S32 tidx, S32 fsize, S32 slotidx,
                     S32* bytesNeeded, S32* availOnDisk, S32* needFile);
S32 xSGTgtHaveRoomStartup(st_XSAVEGAME_DATA* xsgdata, S32 tidx, S32 fsize, S32 slotidx,
                            S32* bytesNeeded, S32* availOnDisk, S32* needFile);
U8 xSGCheckMemoryCard(st_XSAVEGAME_DATA* xsgdata, S32 index);
void xSGGameSet(st_XSAVEGAME_DATA* xsgdata, S32 gidx);
S32 xSGGameIsEmpty(st_XSAVEGAME_DATA* xsgdata, S32 gidx);
S32 xSGGameSize(st_XSAVEGAME_DATA* xsgdata, S32 gidx);
char* xSGGameModDate(st_XSAVEGAME_DATA* xsgdata, S32 gidx);
char* xSGGameLabel(st_XSAVEGAME_DATA* xsgdata, S32 gidx);
S32 xSGGameThumbIndex(st_XSAVEGAME_DATA* xsgdata, S32 gidx);
S32 xSGGameProgress(st_XSAVEGAME_DATA* xsgdata, S32 gidx);
S32 xSGAddSaveClient(st_XSAVEGAME_DATA* xsgdata, U32 clttag, void* cltdata,
                       S32 (*infofunc)(void*, st_XSAVEGAME_DATA*, S32*, S32*),
                       S32 (*procfunc)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*));
S32 xSGAddLoadClient(st_XSAVEGAME_DATA* xsgdata, U32 clttag, void* cltdata,
                       S32 (*loadfunc)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*,
                                         U32, S32));
S32 xSGSetup(st_XSAVEGAME_DATA* xsgdata);
S32 xSGSetup(st_XSAVEGAME_DATA* xsgdata, S32 gidx, char* label, S32 progress, iTime playtime,
               S32 thumbIconIdx);
S32 xSGProcess(st_XSAVEGAME_DATA* xsgdata);
S32 xSGWrapup(st_XSAVEGAME_DATA* xsgdata);
en_XSGASYNC_STATUS xSGAsyncStatus(st_XSAVEGAME_DATA* xsgdata, S32 block, en_XSG_WHYFAIL* whyFail,
                                  char* errmsg);
S32 xSG_cb_leader_svinfo(void*, st_XSAVEGAME_DATA*, S32* cur_space, S32* max_fullgame);
S32 xSG_cb_leader_svproc(void* cltdata, st_XSAVEGAME_DATA* original_xsgdata,
                           st_XSAVEGAME_WRITECONTEXT* wctxt);
S32 xSG_cb_leader_load(void*, st_XSAVEGAME_DATA* original_xsgdata,
                         st_XSAVEGAME_READCONTEXT* rctxt, U32, S32);
S32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, char* data,
                   S32 elesiz, S32 n);
S32 xSGWriteStrLen(const char* str);
S32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, char* data,
                   S32 n);
S32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, S32* data,
                   S32 n);
S32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, U32* data,
                   S32 n);
S32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, F32* data,
                   S32 n);
S32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, char* buff,
                  S32 elesiz, S32 n);
S32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, char* buff, S32 n);
S32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, S32* buff,
                  S32 n);
S32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, U32* buff,
                  S32 n);
S32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, F32* buff,
                  S32 n);
S32 xSG_grab_leaders(st_XSAVEGAME_DATA* xsgdata);
S32 xSG_chdir_gamedir(st_XSAVEGAME_DATA* xsgdata);
char* xSG_cm_slotname(st_XSAVEGAME_DATA* xsgdata, S32 gidx);
void xSG_areaComposeLabel(char* label, int, char*, int);
S32 xSG_sv_flipinfo(st_XSAVEGAME_DATA* xsgdata);
S32 xSG_sv_prepdest(st_XSAVEGAME_DATA* xsgdata);
S32 xSG_sv_flipproc(st_XSAVEGAME_DATA* xsgdata);
S32 xSG_sv_bldchksum(st_XSAVEGAME_DATA* xsgdata);
S32 xSG_smem_blkopen(st_XSAVEGAME_DATA* xsgdata);
S32 xSG_smem_blkclose(st_XSAVEGAME_DATA* xsgdata);
S32 xSG_smem_cltopen(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_CLIENT* clt);
S32 xSG_smem_cltclose(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_CLIENT* clt);
S32 xSG_sv_commit(st_XSAVEGAME_DATA* xsgdata);
void xSG_cb_ISGChange(void*, en_CHGCODE what);
S32 xSG_ld_prepload(st_XSAVEGAME_DATA* xsgdata);
S32 xSG_ld_readgame(st_XSAVEGAME_DATA* xsgdata);
S32 xSG_ld_readhead(st_XSAVEGAME_DATA* xsgdata);
S32 xSG_ld_validate(st_XSAVEGAME_DATA* xsgdata);
S32 xSG_ld_findcltblk(st_XSAVEGAME_DATA* xsgdata);
S32 xSG_ld_flipload(st_XSAVEGAME_DATA* xsgdata);
XSGAutoData* xSGAutoSave_GetCache();
void xSGAutoSave_Startup();
void ASG_ISG_changed(void*, en_CHGCODE what);

#endif
