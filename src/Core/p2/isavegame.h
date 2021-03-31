#ifndef ISAVEGAME_H
#define ISAVEGAME_H

#include <types.h>

struct sceMcStDateTime
{
    uint8 Resv2;
    uint8 Sec;
    uint8 Min;
    uint8 Hour;
    uint8 Day;
    uint8 Month;
    uint16 Year;
};

struct sceMcTblGetDir
{
    sceMcStDateTime _Create;
    sceMcStDateTime _Modify;
    uint32 FileSizeByte;
    uint16 AttrFile;
    uint16 Reserve1;
    uint32 Reserve2;
    uint32 PdaAplNo;
    uint8 EntryName[32];
};

enum en_ISG_IOMODE
{
    ISG_IOMODE_READ = 0x1,
    ISG_IOMODE_WRITE,
    ISG_IOMODE_APPEND
};

enum en_ISGMC_ERRSTATUS
{
    ISGMC_ERR_NONE,
    ISGMC_ERR_NOMEMCARD,
    ISGMC_ERR_MKDIR,
    ISGMC_ERR_OPEN,
    ISGMC_ERR_CLOSE,
    ISGMC_ERR_READ,
    ISGMC_ERR_WRITE
};

enum en_ASYNC_OPCODE
{
    ISG_OPER_NOOP,
    ISG_OPER_INIT,
    ISG_OPER_SAVE,
    ISG_OPER_LOAD
};

// This enum might be incorrect. The tooling choked on the enum values
// being 0xFFFFFFFF
enum en_ASYNC_OPSTAT
{
    ISG_OPSTAT_FAILURE = 0xFFFFFFFF,
    ISG_OPSTAT_INPROG = 0,
    ISG_OPSTAT_SUCCESS
};

enum en_ASYNC_OPERR
{
    ISG_OPERR_NONE,
    ISG_OPERR_NOOPER,
    ISG_OPERR_MULTIOPER,
    ISG_OPERR_INITFAIL,
    ISG_OPERR_GAMEDIR,
    ISG_OPERR_NOCARD,
    ISG_OPERR_NOROOM,
    ISG_OPERR_DAMAGE,
    ISG_OPERR_CORRUPT,
    ISG_OPERR_OTHER,
    ISG_OPERR_SVNOSPACE,
    ISG_OPERR_SVINIT,
    ISG_OPERR_SVWRITE,
    ISG_OPERR_SVOPEN,
    ISG_OPERR_LDINIT,
    ISG_OPERR_LDREAD,
    ISG_OPERR_LDOPEN,
    ISG_OPERR_TGTERR,
    ISG_OPERR_TGTREM,
    ISG_OPERR_TGTPREP,
    ISG_OPERR_UNKNOWN,
    ISG_OPERR_NOMORE
};

enum en_CHGCODE
{
    ISG_CHG_NONE,
    ISG_CHG_TARGET,
    ISG_CHG_GAMELIST
};

struct st_ISG_MEMCARD_DATA
{
    int32 mcport;
    int32 mcslot;
    int32 mcfp;
    en_ISG_IOMODE fmode;
    int8 gamepath[64];
    sceMcTblGetDir finfo;
    int32 cur_mcop;
    en_ISGMC_ERRSTATUS mcerr;
    int32 allow_cache;
};

struct st_ISGSESSION
{
    st_ISG_MEMCARD_DATA* mcdata;
    int8 gameroot[64];
    int8 gamedir[64];
    en_ASYNC_OPCODE as_curop;
    en_ASYNC_OPSTAT as_opstat;
    en_ASYNC_OPERR as_operr;
    void* cltdata;
    en_CHGCODE chgcode;
    void (*chgfunc)(void*, en_CHGCODE);
};

enum en_NAMEGEN_TYPE
{
    ISG_NGTYP_GAMEDIR,
    ISG_NGTYP_GAMEFILE,
    ISG_NGTYP_CONFIG,
    ISG_NGTYP_ICONTHUM
};

int32 iSGStartup();
int32 iSGShutdown();
st_ISGSESSION* iSGSessionBegin(void* cltdata, void (*chgfunc)(void*, en_CHGCODE), int32 monitor);
void iSGSessionEnd(st_ISGSESSION* isgdata);
int32 iSGTgtCount(st_ISGSESSION* isgdata, int32* max);
int32 iSGTgtPhysSlotIdx(st_ISGSESSION* isgdata, int32 tidx);
uint32 iSGTgtState(st_ISGSESSION* isgdata, int32 tgtidx, const int8* dpath);
int32 iSGTgtFormat(st_ISGSESSION* isgdata, int32 tgtidx, int32 async, int32* canRecover);
int32 iSGTgtSetActive(st_ISGSESSION* isgdata, int32 tgtidx);
int32 iSGTgtHaveRoom(st_ISGSESSION* isgdata, int32 tidx, int32 fsize, const int8* dpath,
                     const int8* fname, int32* bytesNeeded, int32* availOnDisk, int32* needFile);
int32 iSGTgtHaveRoomStartup(st_ISGSESSION* isgdata, int32 tidx, int32 fsize, int8* dpath,
                            int8* fname, int32* bytesNeeded, int32* availOnDisk, int32* needFile);
uint8 iSGCheckMemoryCard(st_ISGSESSION* isgdata, int32 index);
int32 iSGFileSize(st_ISGSESSION* isgdata, const int8* fname);
int8* iSGFileModDate(st_ISGSESSION* isgdata, const int8* fname);
int8* iSGFileModDate(st_ISGSESSION* isgdata, const int8* fname, int32* sec, int32* min, int32* hr,
                     int32* mon, int32* day, int32* yr);
en_ASYNC_OPSTAT iSGPollStatus(st_ISGSESSION* isgdata, en_ASYNC_OPCODE* curop, int32 block);
en_ASYNC_OPERR iSGOpError(st_ISGSESSION* isgdata, int8* errmsg);
int32 iSGReadLeader(st_ISGSESSION* isgdata, const int8* fname, int8* databuf, int32 numbytes,
                    int32 async);
int32 iSGSelectGameDir(st_ISGSESSION* isgdata, const int8* dname);
void iSGMakeTimeStamp(int8* str);
int32 iSGSetupGameDir(st_ISGSESSION* isgdata, const int8* dname, int32 force_iconfix);
int32 iSGSaveFile(st_ISGSESSION* isgdata, const int8* fname, int8* data, int32 n, int32 async,
                  int8*);
int32 iSGLoadFile(st_ISGSESSION* isgdata, const int8* fname, int8* databuf, int32 async);
void iSGAutoSave_Startup();
int8* iSGMakeName(en_NAMEGEN_TYPE type, const int8* base, int32 idx);
st_ISGSESSION* iSGAutoSave_Connect(int32 idx_target, void* cltdata, void (*chg)(void*, en_CHGCODE));
void iSGAutoSave_Disconnect(st_ISGSESSION* isg);
int32 iSGAutoSave_Monitor(st_ISGSESSION* isg, int32 idx_target);
int32 iSGCheckForWrongDevice();
int32 iSGCheckForCorruptFiles(st_ISGSESSION*, int8 files[][64]);

#endif