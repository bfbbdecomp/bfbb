#ifndef XSAVEGAME_H
#define XSAVEGAME_H

#include <types.h>

#include "../p2/iTime.h"
#include "../p2/isavegame.h"

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
    uint32 idtag;
    int32 (*cltinfo)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
    int32 (*cltproc)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
    int32 (*cltload)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
    void* cltdata;
    int32 needamt;
    int32 maxamt;
    int32 realamt;
    int8* buf_sizepos;
    int8* buf_maxpos;
    int32 blokact;
    int32 blokmax;
    int8* blokpos;
    int8* readpos;
    int32 readamt;
    int32 readremain;
};

struct st_XSAVEGAME_DATA
{
    int32 gfile_idx;
    en_SAVEGAME_MODE mode;
    uint32 stage;
    int32 gslot;
    int8 label[64];
    int32 progress;
    int32 thumbIconIdx;
    iTime playtime;
    int8* membuf;
    int32 memsize;
    int8* buf_curpos;
    int8* buf_sizespot;
    int8* buf_cksmspot;
    int32 totamt;
    uint32 chksum;
    uint32 upd_tally;
    int32 cltneed;
    int32 cltmax;
    int32 chdrneed;
    int32 stkcnt;
    st_XSAVEGAME_CLIENT cltstk[128];
    st_XSAVEGAME_CLIENT dfltloadclt;
    uint32 file_chksum;
    uint32 read_chksum;
    int32 readsize;
    int8* loadbuf;
    int32 loadsize;
    int8* walkpos;
    int32 walkremain;
    st_ISGSESSION* isgsess;
};

struct XSGAutoData
{
    int32 flg_autodata;
    int32 lastTarg;
    int32 lastGame;
    int32 lastPhysicalSlot;
    st_ISGSESSION* isg_monitor;

    int32 IsValid();
    void MarkInvalid();
    int32 SetCache(int32 targ, int32 game, int32 physicalSlot);
    void Discard();
    st_ISGSESSION* HWConnect(int32 targ);
    void HWDisconnect(st_ISGSESSION* isgsess);
    int32 HWCheckConnect(int32 targ);
    int32 LastPhysicalSlot();
    int32 LastGame();
    int32 LastTarget();
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
    int8 gameLabel[64];
    int32 progress;
    iTime gametime;
    int8 thumbIconIdx;
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

int32 xSGStartup();
int32 xSGShutdown();
st_XSAVEGAME_DATA* xSGInit(en_SAVEGAME_MODE mode);
int32 xSGDone(st_XSAVEGAME_DATA* xsgdata);
int32 xSGCheckForCorruptFiles(st_XSAVEGAME_DATA* xsgdata, int8 files[][64]);
int32 xSGTgtCount(st_XSAVEGAME_DATA* xsgdata, int32* max);
int32 xSGTgtPhysSlotIdx(st_XSAVEGAME_DATA* xsgdata, int32 tidx);
int32 xSGTgtIsFormat(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32* badEncode);
int32 xSGTgtFormatTgt(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32* canRecover);
int32 xSGTgtSelect(st_XSAVEGAME_DATA* xsgdata, int32 tidx);
int32 xSGTgtHasGameDir(st_XSAVEGAME_DATA* xsgdata, int32 tidx);
int32 xSGTgtHaveRoom(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32 fsize, int32 slotidx,
                     int32* bytesNeeded, int32* availOnDisk, int32* needFile);
int32 xSGTgtHaveRoomStartup(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32 fsize, int32 slotidx,
                            int32* bytesNeeded, int32* availOnDisk, int32* needFile);
uint8 xSGCheckMemoryCard(st_XSAVEGAME_DATA* xsgdata, int32 index);
void xSGGameSet(st_XSAVEGAME_DATA* xsgdata, int32 gidx);
int32 xSGGameIsEmpty(st_XSAVEGAME_DATA* xsgdata, int32 gidx);
int32 xSGGameSize(st_XSAVEGAME_DATA* xsgdata, int32 gidx);
int8* xSGGameModDate(st_XSAVEGAME_DATA* xsgdata, int32 gidx);
int8* xSGGameLabel(st_XSAVEGAME_DATA* xsgdata, int32 gidx);
int32 xSGGameThumbIndex(st_XSAVEGAME_DATA* xsgdata, int32 gidx);
int32 xSGGameProgress(st_XSAVEGAME_DATA* xsgdata, int32 gidx);
int32 xSGAddSaveClient(st_XSAVEGAME_DATA* xsgdata, uint32 clttag, void* cltdata,
                       int32 (*infofunc)(void*, st_XSAVEGAME_DATA*, int32*, int32*),
                       int32 (*procfunc)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*));
int32 xSGAddLoadClient(st_XSAVEGAME_DATA* xsgdata, uint32 clttag, void* cltdata,
                       int32 (*loadfunc)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*,
                                         uint32, int32));
int32 xSGSetup(st_XSAVEGAME_DATA* xsgdata);
int32 xSGSetup(st_XSAVEGAME_DATA* xsgdata, int32 gidx, int8* label, int32 progress, iTime playtime,
               int32 thumbIconIdx);
int32 xSGProcess(st_XSAVEGAME_DATA* xsgdata);
int32 xSGWrapup(st_XSAVEGAME_DATA* xsgdata);
en_XSGASYNC_STATUS xSGAsyncStatus(st_XSAVEGAME_DATA* xsgdata, int32 block, en_XSG_WHYFAIL* whyFail,
                                  int8* errmsg);
int32 xSG_cb_leader_svinfo(void*, st_XSAVEGAME_DATA*, int32* cur_space, int32* max_fullgame);
int32 xSG_cb_leader_svproc(void* cltdata, st_XSAVEGAME_DATA* original_xsgdata,
                           st_XSAVEGAME_WRITECONTEXT* wctxt);
int32 xSG_cb_leader_load(void*, st_XSAVEGAME_DATA* original_xsgdata,
                         st_XSAVEGAME_READCONTEXT* rctxt, uint32, int32);
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, int8* data,
                   int32 elesiz, int32 n);
int32 xSGWriteStrLen(const int8* str);
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, int8* data,
                   int32 n);
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, int32* data,
                   int32 n);
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, uint32* data,
                   int32 n);
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, float32* data,
                   int32 n);
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, int8* buff,
                  int32 elesiz, int32 n);
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, int8* buff, int32 n);
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, int32* buff,
                  int32 n);
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, uint32* buff,
                  int32 n);
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, float32* buff,
                  int32 n);
int32 xSG_grab_leaders(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_chdir_gamedir(st_XSAVEGAME_DATA* xsgdata);
int8* xSG_cm_slotname(st_XSAVEGAME_DATA* xsgdata, int32 gidx);
void xSG_areaComposeLabel(int8* label, int, int8*, int);
int32 xSG_sv_flipinfo(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_sv_prepdest(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_sv_flipproc(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_sv_bldchksum(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_smem_blkopen(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_smem_blkclose(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_smem_cltopen(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_CLIENT* clt);
int32 xSG_smem_cltclose(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_CLIENT* clt);
int32 xSG_sv_commit(st_XSAVEGAME_DATA* xsgdata);
void xSG_cb_ISGChange(void*, en_CHGCODE what);
int32 xSG_ld_prepload(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_ld_readgame(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_ld_readhead(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_ld_validate(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_ld_findcltblk(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_ld_flipload(st_XSAVEGAME_DATA* xsgdata);
XSGAutoData* xSGAutoSave_GetCache();
void xSGAutoSave_Startup();
void ASG_ISG_changed(void*, en_CHGCODE what);

#endif