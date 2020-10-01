typedef struct st_XSAVEGAME_CLIENT;
typedef struct XSGAutoData;
typedef struct st_XSAVEGAME_DATA;
typedef enum en_SAVEGAME_MODE;
typedef struct st_XSAVEGAME_READCONTEXT;
typedef enum en_XSGASYNC_STATUS;
typedef enum en_ASYNC_OPSTAT;
typedef struct st_XSAVEGAME_WRITECONTEXT;
typedef struct st_ISGSESSION;
typedef enum en_ASYNC_OPERR;
typedef enum en_XSG_TGT_NAME_FORMAT;
typedef struct st_XSAVEGAME_LEADER;
typedef enum en_XSG_WHYFAIL;
typedef enum en_CHGCODE;
typedef struct st_XSG_SHORTLABEL;

typedef int32(*type_2)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
typedef int32(*type_4)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
typedef int32(*type_7)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
typedef int32(*type_10)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
typedef int32(*type_11)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
typedef int32(*type_12)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
typedef void(*type_17)(void*, en_CHGCODE);
typedef void(*type_20)(void*, en_CHGCODE);

typedef int8 type_0[64];
typedef int8 type_1[32];
typedef int8 type_3[64];
typedef st_XSG_SHORTLABEL type_5[32];
typedef int8 type_6[116];
typedef int8 type_8[256];
typedef st_XSAVEGAME_CLIENT type_9[128];
typedef int8 type_13[64];
typedef int8 type_14[2];
typedef int8 type_15[32];
typedef st_XSAVEGAME_LEADER type_16[3];
typedef int8 type_18[64];
typedef int8 type_19[32];
typedef int8 type_21[256];
typedef int8 type_22[23];

struct st_XSAVEGAME_CLIENT
{
	uint32 idtag;
	type_10 cltinfo;
	type_11 cltproc;
	type_12 cltload;
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

struct XSGAutoData
{
	int32 flg_autodata;
	int32 lastTarg;
	int32 lastGame;
	int32 lastPhysicalSlot;
	st_ISGSESSION* isg_monitor;
};

struct st_XSAVEGAME_DATA
{
	int32 gfile_idx;
	en_SAVEGAME_MODE mode;
	uint32 stage;
	int32 gslot;
	type_3 label;
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
	type_9 cltstk;
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

enum en_SAVEGAME_MODE
{
	XSG_MODE_LOAD = 0xa,
	XSG_MODE_SAVE
};

struct st_XSAVEGAME_READCONTEXT
{
};

enum en_XSGASYNC_STATUS
{
	XSG_ASTAT_NOOP,
	XSG_ASTAT_INPROG,
	XSG_ASTAT_SUCCESS,
	XSG_ASTAT_FAILED
};

enum en_ASYNC_OPSTAT
{
	ISG_OPSTAT_FAILURE = 0xffffffff,
	ISG_OPSTAT_INPROG,
	ISG_OPSTAT_SUCCESS
};

struct st_XSAVEGAME_WRITECONTEXT
{
};

struct st_ISGSESSION
{
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

enum en_XSG_TGT_NAME_FORMAT
{
	XSG_NAMFMT_BASIC,
	XSG_NAMFMT_SYMBOLS,
	XSG_NAMFMT_PROPER,
	XSG_NAMFMT_PHYSSLOT,
	XSG_NAMFMT_PHYSICAL
};

struct st_XSAVEGAME_LEADER
{
	type_18 gameLabel;
	int32 progress;
	long32 gametime;
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

enum en_CHGCODE
{
	ISG_CHG_NONE,
	ISG_CHG_TARGET,
	ISG_CHG_GAMELIST
};

struct st_XSG_SHORTLABEL
{
	int8* msglong;
	int8* msgshort;
};

int32 g_xsginit;
st_XSAVEGAME_DATA g_xsgdata;
type_16 g_leaders;
type_5 g_msglabels;
XSGAutoData g_autodata;
type_17 ASG_ISG_changed;
type_4 xSG_cb_leader_svproc;
type_2 xSG_cb_leader_svinfo;
type_7 xSG_cb_leader_load;
type_20 xSG_cb_ISGChange;

void ASG_ISG_changed(en_CHGCODE what);
void Discard(XSGAutoData* this);
int32 SetCache(XSGAutoData* this, int32 targ, int32 game, int32 physicalSlot);
int32 IsValid(XSGAutoData* this);
XSGAutoData* xSGAutoSave_GetCache();
int32 xSG_ld_flipload(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_ld_findcltblk(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_ld_readhead(st_XSAVEGAME_DATA* xsgdata);
void xSG_cb_ISGChange(en_CHGCODE what);
int32 xSG_sv_commit(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_smem_cltclose(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_CLIENT* clt);
int32 xSG_smem_blkclose(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_sv_flipproc(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_sv_prepdest(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_sv_flipinfo(st_XSAVEGAME_DATA* xsgdata);
int32 xSG_grab_leaders(st_XSAVEGAME_DATA* xsgdata);
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, float32* buff, int32 n);
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, uint32* buff, int32 n);
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, int32* buff, int32 n);
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, int8* buff, int32 n);
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, int8* buff, int32 elesiz, int32 n);
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, float32* data, int32 n);
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, uint32* data, int32 n);
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, int32* data, int32 n);
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, int8* data, int32 n);
int32 xSGWriteStrLen(int8* str);
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, int8* data, int32 elesiz, int32 n);
int32 xSG_cb_leader_load(st_XSAVEGAME_DATA* original_xsgdata, st_XSAVEGAME_READCONTEXT* rctxt);
int32 xSG_cb_leader_svproc(void* cltdata, st_XSAVEGAME_DATA* original_xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt);
int32 xSG_cb_leader_svinfo(int32* cur_space, int32* max_fullgame);
en_XSGASYNC_STATUS xSGAsyncStatus(st_XSAVEGAME_DATA* xsgdata, int32 block, en_XSG_WHYFAIL* whyFail, int8* errmsg);
int32 xSGWrapup(st_XSAVEGAME_DATA* xsgdata);
int32 xSGProcess(st_XSAVEGAME_DATA* xsgdata);
int32 xSGSetup(st_XSAVEGAME_DATA* xsgdata, int32 gidx, int8* label, int32 progress, long32 playtime, int32 thumbIconIdx);
int32 xSGSetup(st_XSAVEGAME_DATA* xsgdata);
int32 xSGAddLoadClient(st_XSAVEGAME_DATA* xsgdata, uint32 clttag, void* cltdata, type_12 loadfunc);
int32 xSGAddSaveClient(st_XSAVEGAME_DATA* xsgdata, uint32 clttag, void* cltdata, type_10 infofunc, type_11 procfunc);
int32 xSGGameProgress(st_XSAVEGAME_DATA* xsgdata, int32 gidx);
int32 xSGGameThumbIndex(st_XSAVEGAME_DATA* xsgdata, int32 gidx);
int8* xSGGameLabel(st_XSAVEGAME_DATA* xsgdata, int32 gidx);
int8* xSGGameModDate(st_XSAVEGAME_DATA* xsgdata, int32 gidx);
int32 xSGGameSize(st_XSAVEGAME_DATA* xsgdata, int32 gidx);
int32 xSGGameIsEmpty(st_XSAVEGAME_DATA* xsgdata, int32 gidx);
void xSGGameSet(st_XSAVEGAME_DATA* xsgdata, int32 gidx);
uint8 xSGCheckMemoryCard(st_XSAVEGAME_DATA* xsgdata, int32 index);
int32 xSGTgtHaveRoomStartup(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32 fsize, int32 slotidx, int32* bytesNeeded, int32* availOnDisk, int32* needFile);
int32 xSGTgtHaveRoom(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32 fsize, int32 slotidx, int32* bytesNeeded, int32* availOnDisk, int32* needFile);
int32 xSGTgtHasGameDir(st_XSAVEGAME_DATA* xsgdata, int32 tidx);
int32 xSGTgtSelect(st_XSAVEGAME_DATA* xsgdata, int32 tidx);
int32 xSGTgtFormatTgt(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32* canRecover);
int32 xSGTgtIsFormat(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32* badEncode);
int32 xSGTgtPhysSlotIdx(st_XSAVEGAME_DATA* xsgdata, int32 tidx);
int32 xSGTgtCount(st_XSAVEGAME_DATA* xsgdata, int32* max);
int32 xSGDone(st_XSAVEGAME_DATA* xsgdata);
st_XSAVEGAME_DATA* xSGInit(en_SAVEGAME_MODE mode);
int32 xSGShutdown();
int32 xSGStartup();

// ASG_ISG_changed__FPv10en_CHGCODE
// Start address: 0x1fac30
void ASG_ISG_changed(en_CHGCODE what)
{
	XSGAutoData* asg;
}

// Discard__11XSGAutoDataFv
// Start address: 0x1fac90
void Discard(XSGAutoData* this)
{
}

// SetCache__11XSGAutoDataFiii
// Start address: 0x1face0
int32 SetCache(XSGAutoData* this, int32 targ, int32 game, int32 physicalSlot)
{
}

// IsValid__11XSGAutoDataFv
// Start address: 0x1fadb0
int32 IsValid(XSGAutoData* this)
{
}

// xSGAutoSave_GetCache__Fv
// Start address: 0x1fae10
XSGAutoData* xSGAutoSave_GetCache()
{
}

// xSG_ld_flipload__FP17st_XSAVEGAME_DATA
// Start address: 0x1fae20
int32 xSG_ld_flipload(st_XSAVEGAME_DATA* xsgdata)
{
	int32 result;
	int32 rc;
	int32 i;
	st_XSAVEGAME_CLIENT* clt;
}

// xSG_ld_findcltblk__FP17st_XSAVEGAME_DATA
// Start address: 0x1faf20
int32 xSG_ld_findcltblk(st_XSAVEGAME_DATA* xsgdata)
{
	int32 ival;
	uint32 tag;
	int32 maxamt;
	int32 actamt;
	st_XSAVEGAME_CLIENT* clt;
	int32 i;
	int32 found;
	int32 rc;
	st_XSAVEGAME_CLIENT* dfltclt;
}

// xSG_ld_readhead__FP17st_XSAVEGAME_DATA
// Start address: 0x1fb1f0
int32 xSG_ld_readhead(st_XSAVEGAME_DATA* xsgdata)
{
	int32 result;
	int32 ival;
}

// xSG_cb_ISGChange__FPv10en_CHGCODE
// Start address: 0x1fb2d0
void xSG_cb_ISGChange(en_CHGCODE what)
{
	XSGAutoData* asg;
}

// xSG_sv_commit__FP17st_XSAVEGAME_DATA
// Start address: 0x1fb330
int32 xSG_sv_commit(st_XSAVEGAME_DATA* xsgdata)
{
	int32 result;
	int32 rc;
	int8* name;
	type_13 browselabel;
}

// xSG_smem_cltclose__FP17st_XSAVEGAME_DATAP19st_XSAVEGAME_CLIENT
// Start address: 0x1fb430
int32 xSG_smem_cltclose(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_CLIENT* clt)
{
	int8* last_bufpos;
}

// xSG_smem_blkclose__FP17st_XSAVEGAME_DATA
// Start address: 0x1fb500
int32 xSG_smem_blkclose(st_XSAVEGAME_DATA* xsgdata)
{
	int8* last_bufpos;
}

// xSG_sv_flipproc__FP17st_XSAVEGAME_DATA
// Start address: 0x1fb580
int32 xSG_sv_flipproc(st_XSAVEGAME_DATA* xsgdata)
{
	int32 result;
	int32 rc;
	int32 i;
	st_XSAVEGAME_CLIENT* clt;
	int8 bfill;
	int32 needfill;
}

// xSG_sv_prepdest__FP17st_XSAVEGAME_DATA
// Start address: 0x1fb750
int32 xSG_sv_prepdest(st_XSAVEGAME_DATA* xsgdata)
{
	int32 result;
}

// xSG_sv_flipinfo__FP17st_XSAVEGAME_DATA
// Start address: 0x1fb7f0
int32 xSG_sv_flipinfo(st_XSAVEGAME_DATA* xsgdata)
{
	int32 result;
	int32 i;
	int32 rc;
	st_XSAVEGAME_CLIENT* clt;
	int32 cltamt;
	int32 cltmax;
}

// xSG_grab_leaders__FP17st_XSAVEGAME_DATA
// Start address: 0x1fb910
int32 xSG_grab_leaders(st_XSAVEGAME_DATA* xsgdata)
{
	int32 num_found;
	int32 i;
	type_6 readbuf;
	int32 rc;
}

// xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPfi
// Start address: 0x1fbb20
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, float32* buff, int32 n)
{
	int32 cnt;
}

// xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPUii
// Start address: 0x1fbb30
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, uint32* buff, int32 n)
{
	int32 cnt;
}

// xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPii
// Start address: 0x1fbb40
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, int32* buff, int32 n)
{
	int32 cnt;
}

// xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPci
// Start address: 0x1fbb50
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, int8* buff, int32 n)
{
	int32 cnt;
}

// xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPcii
// Start address: 0x1fbb60
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, int8* buff, int32 elesiz, int32 n)
{
	int32 cnt;
	st_XSAVEGAME_CLIENT* clt;
}

// xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPfi
// Start address: 0x1fbc80
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, float32* data, int32 n)
{
	int32 cnt;
}

// xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPUii
// Start address: 0x1fbc90
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, uint32* data, int32 n)
{
	int32 cnt;
}

// xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPii
// Start address: 0x1fbca0
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, int32* data, int32 n)
{
	int32 cnt;
}

// xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPci
// Start address: 0x1fbcb0
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, int8* data, int32 n)
{
	int32 cnt;
}

// xSGWriteStrLen__FPCc
// Start address: 0x1fbcc0
int32 xSGWriteStrLen(int8* str)
{
	int32 len;
}

// xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPcii
// Start address: 0x1fbcf0
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, int8* data, int32 elesiz, int32 n)
{
	int32 cnt;
	st_XSAVEGAME_CLIENT* clt;
	int32 is_ok;
	void* mcprc;
}

// xSG_cb_leader_load__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x1fbe40
int32 xSG_cb_leader_load(st_XSAVEGAME_DATA* original_xsgdata, st_XSAVEGAME_READCONTEXT* rctxt)
{
	type_15 fundata;
	st_XSAVEGAME_LEADER discard;
}

// xSG_cb_leader_svproc__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x1fbef0
int32 xSG_cb_leader_svproc(void* cltdata, st_XSAVEGAME_DATA* original_xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	st_XSAVEGAME_DATA* xsg;
	st_XSAVEGAME_LEADER leader;
	type_22 fundata;
}

// xSG_cb_leader_svinfo__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x1fbfe0
int32 xSG_cb_leader_svinfo(int32* cur_space, int32* max_fullgame)
{
}

// xSGAsyncStatus__FP17st_XSAVEGAME_DATAiP14en_XSG_WHYFAILPc
// Start address: 0x1fc000
en_XSGASYNC_STATUS xSGAsyncStatus(st_XSAVEGAME_DATA* xsgdata, int32 block, en_XSG_WHYFAIL* whyFail, int8* errmsg)
{
	en_XSGASYNC_STATUS xstat;
	en_ASYNC_OPSTAT istat;
	en_ASYNC_OPERR whyerr;
	en_XSG_WHYFAIL con;
}

// xSGWrapup__FP17st_XSAVEGAME_DATA
// Start address: 0x1fc160
int32 xSGWrapup(st_XSAVEGAME_DATA* xsgdata)
{
	int32 result;
	int32 rc;
}

// xSGProcess__FP17st_XSAVEGAME_DATA
// Start address: 0x1fc340
int32 xSGProcess(st_XSAVEGAME_DATA* xsgdata)
{
	int32 result;
	int32 rc;
}

// xSGSetup__FP17st_XSAVEGAME_DATAiPcili
// Start address: 0x1fc580
int32 xSGSetup(st_XSAVEGAME_DATA* xsgdata, int32 gidx, int8* label, int32 progress, long32 playtime, int32 thumbIconIdx)
{
	int32 result;
	int32 rc;
}

// xSGSetup__FP17st_XSAVEGAME_DATA
// Start address: 0x1fc700
int32 xSGSetup(st_XSAVEGAME_DATA* xsgdata)
{
}

// xSGAddLoadClient__FP17st_XSAVEGAME_DATAUiPvPFPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii_i
// Start address: 0x1fc720
int32 xSGAddLoadClient(st_XSAVEGAME_DATA* xsgdata, uint32 clttag, void* cltdata, type_12 loadfunc)
{
	int32 result;
	st_XSAVEGAME_CLIENT* clt;
}

// xSGAddSaveClient__FP17st_XSAVEGAME_DATAUiPvPFPvP17st_XSAVEGAME_DATAPiPi_iPFPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT_i
// Start address: 0x1fc860
int32 xSGAddSaveClient(st_XSAVEGAME_DATA* xsgdata, uint32 clttag, void* cltdata, type_10 infofunc, type_11 procfunc)
{
	int32 result;
	st_XSAVEGAME_CLIENT* clt;
}

// xSGGameProgress__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fc950
int32 xSGGameProgress(st_XSAVEGAME_DATA* xsgdata, int32 gidx)
{
	int32 idx_thum;
}

// xSGGameThumbIndex__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fc9f0
int32 xSGGameThumbIndex(st_XSAVEGAME_DATA* xsgdata, int32 gidx)
{
	int32 idx_thum;
}

// xSGGameLabel__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fca90
int8* xSGGameLabel(st_XSAVEGAME_DATA* xsgdata, int32 gidx)
{
	int8* da_name;
	st_XSAVEGAME_LEADER* lead;
}

// xSGGameModDate__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fcb30
int8* xSGGameModDate(st_XSAVEGAME_DATA* xsgdata, int32 gidx)
{
	int8* date;
	type_1 da_date;
}

// xSGGameSize__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fcc30
int32 xSGGameSize(st_XSAVEGAME_DATA* xsgdata, int32 gidx)
{
	int32 size;
}

// xSGGameIsEmpty__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fcd00
int32 xSGGameIsEmpty(st_XSAVEGAME_DATA* xsgdata, int32 gidx)
{
}

// xSGGameSet__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fcde0
void xSGGameSet(st_XSAVEGAME_DATA* xsgdata, int32 gidx)
{
}

// xSGCheckMemoryCard__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fcdf0
uint8 xSGCheckMemoryCard(st_XSAVEGAME_DATA* xsgdata, int32 index)
{
}

// xSGTgtHaveRoomStartup__FP17st_XSAVEGAME_DATAiiiPiPiPi
// Start address: 0x1fce00
int32 xSGTgtHaveRoomStartup(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32 fsize, int32 slotidx, int32* bytesNeeded, int32* availOnDisk, int32* needFile)
{
	int32 isroom;
	type_21 fname;
}

// xSGTgtHaveRoom__FP17st_XSAVEGAME_DATAiiiPiPiPi
// Start address: 0x1fcf00
int32 xSGTgtHaveRoom(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32 fsize, int32 slotidx, int32* bytesNeeded, int32* availOnDisk, int32* needFile)
{
	int32 isroom;
	type_8 fname;
}

// xSGTgtHasGameDir__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fd000
int32 xSGTgtHasGameDir(st_XSAVEGAME_DATA* xsgdata, int32 tidx)
{
	int32 rc;
}

// xSGTgtSelect__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fd070
int32 xSGTgtSelect(st_XSAVEGAME_DATA* xsgdata, int32 tidx)
{
	int32 result;
}

// xSGTgtFormatTgt__FP17st_XSAVEGAME_DATAiPi
// Start address: 0x1fd100
int32 xSGTgtFormatTgt(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32* canRecover)
{
	int32 result;
}

// xSGTgtIsFormat__FP17st_XSAVEGAME_DATAiPi
// Start address: 0x1fd110
int32 xSGTgtIsFormat(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32* badEncode)
{
	int32 result;
	int32 rc;
}

// xSGTgtPhysSlotIdx__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fd1a0
int32 xSGTgtPhysSlotIdx(st_XSAVEGAME_DATA* xsgdata, int32 tidx)
{
}

// xSGTgtCount__FP17st_XSAVEGAME_DATAPi
// Start address: 0x1fd1b0
int32 xSGTgtCount(st_XSAVEGAME_DATA* xsgdata, int32* max)
{
	int32 cnt;
}

// xSGDone__FP17st_XSAVEGAME_DATA
// Start address: 0x1fd1c0
int32 xSGDone(st_XSAVEGAME_DATA* xsgdata)
{
	int32 result;
}

// xSGInit__F16en_SAVEGAME_MODE
// Start address: 0x1fd2e0
st_XSAVEGAME_DATA* xSGInit(en_SAVEGAME_MODE mode)
{
	st_XSAVEGAME_DATA* xsgdata;
}

// xSGShutdown__Fv
// Start address: 0x1fd3e0
int32 xSGShutdown()
{
}

// xSGStartup__Fv
// Start address: 0x1fd420
int32 xSGStartup()
{
}

