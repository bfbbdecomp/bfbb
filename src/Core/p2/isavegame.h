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

struct st_XSAVEGAME_READCONTEXT
{
};

struct st_XSAVEGAME_WRITECONTEXT
{
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

int32 iSGCheckForWrongDevice();

#endif