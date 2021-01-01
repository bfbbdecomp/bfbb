#ifndef XSAVEGAME_H
#define XSAVEGAME_H

#include <types.h>

#include "../p2/isavegame.h"

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
    long32 playtime;
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

int32 xSGGameIsEmpty(st_XSAVEGAME_DATA* xsgdata, int32 gidx);
st_XSAVEGAME_DATA* xSGInit(en_SAVEGAME_MODE mode);
int32 xSGTgtCount(st_XSAVEGAME_DATA* xsgdata, int32* max);
int32 xSGTgtPhysSlotIdx(st_XSAVEGAME_DATA* xsgdata, int32 tidx);
int32 xSGTgtSelect(st_XSAVEGAME_DATA* xsgdata, int32 tidx);
int32 xSGTgtIsFormat(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32* badEncode);
int32 xSGCheckForCorruptFiles(st_XSAVEGAME_DATA* xsgdata, int8 files[][64]);
int32 xSGTgtHaveRoomStartup(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32 fsize, int32 slotidx, int32* bytesNeeded, int32* availOnDisk, int32* needFile);
int32 xSGDone(st_XSAVEGAME_DATA* xsgdata);

#endif