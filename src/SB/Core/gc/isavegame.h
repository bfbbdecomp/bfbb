#ifndef ISAVEGAME_H
#define ISAVEGAME_H

#include <types.h>

struct sceMcStDateTime
{
    U8 Resv2;
    U8 Sec;
    U8 Min;
    U8 Hour;
    U8 Day;
    U8 Month;
    U16 Year;
};

struct sceMcTblGetDir
{
    sceMcStDateTime _Create;
    sceMcStDateTime _Modify;
    U32 FileSizeByte;
    U16 AttrFile;
    U16 Reserve1;
    U32 Reserve2;
    U32 PdaAplNo;
    U8 EntryName[32];
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

/* DWARF Definitions (PS2)

class st_ISG_MEMCARD_DATA {
    // total size: 0x100
public:
    signed int mcport; // offset 0x0, size 0x4
    signed int mcslot; // offset 0x4, size 0x4
    signed int mcfp; // offset 0x8, size 0x4
    enum en_ISG_IOMODE fmode; // offset 0xC, size 0x4
    char gamepath[64]; // offset 0x10, size 0x40
    class sceMcTblGetDir finfo; // offset 0x80, size 0x40
    signed int cur_mcop; // offset 0xC0, size 0x4
    enum en_ISGMC_ERRSTATUS mcerr; // offset 0xC4, size 0x4
    signed int allow_cache; // offset 0xC8, size 0x4
};

class st_ISGSESSION {
    // total size: 0x9C
public:
    class st_ISG_MEMCARD_DATA * mcdata; // offset 0x0, size 0x4
    char gameroot[64]; // offset 0x4, size 0x40
    char gamedir[64]; // offset 0x44, size 0x40
    enum en_ASYNC_OPCODE as_curop; // offset 0x84, size 0x4
    enum en_ASYNC_OPSTAT as_opstat; // offset 0x88, size 0x4
    enum en_ASYNC_OPERR as_operr; // offset 0x8C, size 0x4
    void * cltdata; // offset 0x90, size 0x4
    enum en_CHGCODE chgcode; // offset 0x94, size 0x4
    void (* chgfunc)(void *, enum en_CHGCODE); // offset 0x98, size 0x4
};


*/

// Size should be 0x130
struct st_ISG_MEMCARD_DATA
{
    S32 unk_0;
    S32 unk_pad[75];
};

#define ISG_NUM_SLOTS 2
struct st_ISGSESSION
{
    st_ISG_MEMCARD_DATA mcdata[ISG_NUM_SLOTS];
    S32 unk_260;
    S32 unk_264[4];
    void (*chgfunc)(void*, en_CHGCODE); // 0x274
    void* cltdata; // 0x278
    S32 unk_27c;
};

enum en_NAMEGEN_TYPE
{
    ISG_NGTYP_GAMEDIR,
    ISG_NGTYP_GAMEFILE,
    ISG_NGTYP_CONFIG,
    ISG_NGTYP_ICONTHUM
};

S32 iSGStartup();
S32 iSGShutdown();
char* iSGMakeName(en_NAMEGEN_TYPE type, const char* base, S32 idx);
st_ISGSESSION* iSGSessionBegin(void* cltdata, void (*chgfunc)(void*, en_CHGCODE), S32 monitor);
void iSGSessionEnd(st_ISGSESSION* isgdata);
S32 iSGTgtCount(st_ISGSESSION* isgdata, S32* max);
S32 iSGTgtPhysSlotIdx(st_ISGSESSION* isgdata, S32 tidx);
U32 iSGTgtState(st_ISGSESSION* isgdata, S32 tgtidx, const char* dpath);
S32 iSGTgtFormat(st_ISGSESSION* isgdata, S32 tgtidx, S32 async, S32* canRecover);
S32 iSGTgtSetActive(st_ISGSESSION* isgdata, S32 tgtidx);
S32 iSGTgtHaveRoom(st_ISGSESSION* isgdata, S32 tidx, S32 fsize, const char* dpath,
                   const char* fname, S32* bytesNeeded, S32* availOnDisk, S32* needFile);
S32 iSGTgtHaveRoomStartup(st_ISGSESSION* isgdata, S32 tidx, S32 fsize, const char* dpath,
                          const char* fname, S32* bytesNeeded, S32* availOnDisk, S32* needFile);
U8 iSGCheckMemoryCard(st_ISGSESSION* isgdata, S32 index);
S32 iSGFileSize(st_ISGSESSION* isgdata, const char* fname);
char* iSGFileModDate(st_ISGSESSION* isgdata, const char* fname);
char* iSGFileModDate(st_ISGSESSION* isgdata, const char* fname, S32* sec, S32* min, S32* hr,
                     S32* mon, S32* day, S32* yr);
en_ASYNC_OPSTAT iSGPollStatus(st_ISGSESSION* isgdata, en_ASYNC_OPCODE* curop, S32 block);
en_ASYNC_OPERR iSGOpError(st_ISGSESSION* isgdata, char* errmsg);
S32 iSGReadLeader(st_ISGSESSION* isgdata, const char* fname, char* databuf, S32 numbytes,
                  S32 async);
S32 iSGSelectGameDir(st_ISGSESSION* isgdata, const char* dname);
void iSGMakeTimeStamp(char* str);
S32 iSGSetupGameDir(st_ISGSESSION* isgdata, const char* dname, S32 force_iconfix);
S32 iSGSaveFile(st_ISGSESSION* isgdata, const char* fname, char* data, S32 n, S32 async, char*);
S32 iSGLoadFile(st_ISGSESSION* isgdata, const char* fname, char* databuf, S32 async);
void iSGAutoSave_Startup();
st_ISGSESSION* iSGAutoSave_Connect(S32 idx_target, void* cltdata, void (*chg)(void*, en_CHGCODE));
void iSGAutoSave_Disconnect(st_ISGSESSION* isg);
S32 iSGAutoSave_Monitor(st_ISGSESSION* isg, S32 idx_target);
S32 iSGCheckForWrongDevice();
S32 iSGCheckForCorruptFiles(st_ISGSESSION*, char files[][64]);

#endif
