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

typedef s32(*type_2)(void*, st_XSAVEGAME_DATA*, s32*, s32*);
typedef s32(*type_4)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
typedef s32(*type_7)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, u32, s32);
typedef s32(*type_10)(void*, st_XSAVEGAME_DATA*, s32*, s32*);
typedef s32(*type_11)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
typedef s32(*type_12)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, u32, s32);
typedef void(*type_17)(void*, en_CHGCODE);
typedef void(*type_20)(void*, en_CHGCODE);

typedef s8 type_0[64];
typedef s8 type_1[32];
typedef s8 type_3[64];
typedef st_XSG_SHORTLABEL type_5[32];
typedef s8 type_6[116];
typedef s8 type_8[256];
typedef st_XSAVEGAME_CLIENT type_9[128];
typedef s8 type_13[64];
typedef s8 type_14[2];
typedef s8 type_15[32];
typedef st_XSAVEGAME_LEADER type_16[3];
typedef s8 type_18[64];
typedef s8 type_19[32];
typedef s8 type_21[256];
typedef s8 type_22[23];

struct st_XSAVEGAME_CLIENT
{
	u32 idtag;
	type_10 cltinfo;
	type_11 cltproc;
	type_12 cltload;
	void* cltdata;
	s32 needamt;
	s32 maxamt;
	s32 realamt;
	s8* buf_sizepos;
	s8* buf_maxpos;
	s32 blokact;
	s32 blokmax;
	s8* blokpos;
	s8* readpos;
	s32 readamt;
	s32 readremain;
};

struct XSGAutoData
{
	s32 flg_autodata;
	s32 lastTarg;
	s32 lastGame;
	s32 lastPhysicalSlot;
	st_ISGSESSION* isg_monitor;
};

struct st_XSAVEGAME_DATA
{
	s32 gfile_idx;
	en_SAVEGAME_MODE mode;
	u32 stage;
	s32 gslot;
	type_3 label;
	s32 progress;
	s32 thumbIconIdx;
	s32 playtime;
	s8* membuf;
	s32 memsize;
	s8* buf_curpos;
	s8* buf_sizespot;
	s8* buf_cksmspot;
	s32 totamt;
	u32 chksum;
	u32 upd_tally;
	s32 cltneed;
	s32 cltmax;
	s32 chdrneed;
	s32 stkcnt;
	type_9 cltstk;
	st_XSAVEGAME_CLIENT dfltloadclt;
	u32 file_chksum;
	u32 read_chksum;
	s32 readsize;
	s8* loadbuf;
	s32 loadsize;
	s8* walkpos;
	s32 walkremain;
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
	s32 progress;
	s32 gametime;
	s8 thumbIconIdx;
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
	s8* msglong;
	s8* msgshort;
};

s32 g_xsginit;
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
s32 SetCache(XSGAutoData* this, s32 targ, s32 game, s32 physicalSlot);
s32 IsValid(XSGAutoData* this);
XSGAutoData* xSGAutoSave_GetCache();
s32 xSG_ld_flipload(st_XSAVEGAME_DATA* xsgdata);
s32 xSG_ld_findcltblk(st_XSAVEGAME_DATA* xsgdata);
s32 xSG_ld_readhead(st_XSAVEGAME_DATA* xsgdata);
void xSG_cb_ISGChange(en_CHGCODE what);
s32 xSG_sv_commit(st_XSAVEGAME_DATA* xsgdata);
s32 xSG_smem_cltclose(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_CLIENT* clt);
s32 xSG_smem_blkclose(st_XSAVEGAME_DATA* xsgdata);
s32 xSG_sv_flipproc(st_XSAVEGAME_DATA* xsgdata);
s32 xSG_sv_prepdest(st_XSAVEGAME_DATA* xsgdata);
s32 xSG_sv_flipinfo(st_XSAVEGAME_DATA* xsgdata);
s32 xSG_grab_leaders(st_XSAVEGAME_DATA* xsgdata);
s32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, f32* buff, s32 n);
s32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, u32* buff, s32 n);
s32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, s32* buff, s32 n);
s32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, s8* buff, s32 n);
s32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, s8* buff, s32 elesiz, s32 n);
s32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, f32* data, s32 n);
s32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, u32* data, s32 n);
s32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, s32* data, s32 n);
s32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, s8* data, s32 n);
s32 xSGWriteStrLen(s8* str);
s32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, s8* data, s32 elesiz, s32 n);
s32 xSG_cb_leader_load(st_XSAVEGAME_DATA* original_xsgdata, st_XSAVEGAME_READCONTEXT* rctxt);
s32 xSG_cb_leader_svproc(void* cltdata, st_XSAVEGAME_DATA* original_xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt);
s32 xSG_cb_leader_svinfo(s32* cur_space, s32* max_fullgame);
en_XSGASYNC_STATUS xSGAsyncStatus(st_XSAVEGAME_DATA* xsgdata, s32 block, en_XSG_WHYFAIL* whyFail, s8* errmsg);
s32 xSGWrapup(st_XSAVEGAME_DATA* xsgdata);
s32 xSGProcess(st_XSAVEGAME_DATA* xsgdata);
s32 xSGSetup(st_XSAVEGAME_DATA* xsgdata, s32 gidx, s8* label, s32 progress, s32 playtime, s32 thumbIconIdx);
s32 xSGSetup(st_XSAVEGAME_DATA* xsgdata);
s32 xSGAddLoadClient(st_XSAVEGAME_DATA* xsgdata, u32 clttag, void* cltdata, type_12 loadfunc);
s32 xSGAddSaveClient(st_XSAVEGAME_DATA* xsgdata, u32 clttag, void* cltdata, type_10 infofunc, type_11 procfunc);
s32 xSGGameProgress(st_XSAVEGAME_DATA* xsgdata, s32 gidx);
s32 xSGGameThumbIndex(st_XSAVEGAME_DATA* xsgdata, s32 gidx);
s8* xSGGameLabel(st_XSAVEGAME_DATA* xsgdata, s32 gidx);
s8* xSGGameModDate(st_XSAVEGAME_DATA* xsgdata, s32 gidx);
s32 xSGGameSize(st_XSAVEGAME_DATA* xsgdata, s32 gidx);
s32 xSGGameIsEmpty(st_XSAVEGAME_DATA* xsgdata, s32 gidx);
void xSGGameSet(st_XSAVEGAME_DATA* xsgdata, s32 gidx);
u8 xSGCheckMemoryCard(st_XSAVEGAME_DATA* xsgdata, s32 index);
s32 xSGTgtHaveRoomStartup(st_XSAVEGAME_DATA* xsgdata, s32 tidx, s32 fsize, s32 slotidx, s32* bytesNeeded, s32* availOnDisk, s32* needFile);
s32 xSGTgtHaveRoom(st_XSAVEGAME_DATA* xsgdata, s32 tidx, s32 fsize, s32 slotidx, s32* bytesNeeded, s32* availOnDisk, s32* needFile);
s32 xSGTgtHasGameDir(st_XSAVEGAME_DATA* xsgdata, s32 tidx);
s32 xSGTgtSelect(st_XSAVEGAME_DATA* xsgdata, s32 tidx);
s32 xSGTgtFormatTgt(st_XSAVEGAME_DATA* xsgdata, s32 tidx, s32* canRecover);
s32 xSGTgtIsFormat(st_XSAVEGAME_DATA* xsgdata, s32 tidx, s32* badEncode);
s32 xSGTgtPhysSlotIdx(st_XSAVEGAME_DATA* xsgdata, s32 tidx);
s32 xSGTgtCount(st_XSAVEGAME_DATA* xsgdata, s32* max);
s32 xSGDone(st_XSAVEGAME_DATA* xsgdata);
st_XSAVEGAME_DATA* xSGInit(en_SAVEGAME_MODE mode);
s32 xSGShutdown();
s32 xSGStartup();

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
s32 SetCache(XSGAutoData* this, s32 targ, s32 game, s32 physicalSlot)
{
}

// IsValid__11XSGAutoDataFv
// Start address: 0x1fadb0
s32 IsValid(XSGAutoData* this)
{
}

// xSGAutoSave_GetCache__Fv
// Start address: 0x1fae10
XSGAutoData* xSGAutoSave_GetCache()
{
}

// xSG_ld_flipload__FP17st_XSAVEGAME_DATA
// Start address: 0x1fae20
s32 xSG_ld_flipload(st_XSAVEGAME_DATA* xsgdata)
{
	s32 result;
	s32 rc;
	s32 i;
	st_XSAVEGAME_CLIENT* clt;
}

// xSG_ld_findcltblk__FP17st_XSAVEGAME_DATA
// Start address: 0x1faf20
s32 xSG_ld_findcltblk(st_XSAVEGAME_DATA* xsgdata)
{
	s32 ival;
	u32 tag;
	s32 maxamt;
	s32 actamt;
	st_XSAVEGAME_CLIENT* clt;
	s32 i;
	s32 found;
	s32 rc;
	st_XSAVEGAME_CLIENT* dfltclt;
}

// xSG_ld_readhead__FP17st_XSAVEGAME_DATA
// Start address: 0x1fb1f0
s32 xSG_ld_readhead(st_XSAVEGAME_DATA* xsgdata)
{
	s32 result;
	s32 ival;
}

// xSG_cb_ISGChange__FPv10en_CHGCODE
// Start address: 0x1fb2d0
void xSG_cb_ISGChange(en_CHGCODE what)
{
	XSGAutoData* asg;
}

// xSG_sv_commit__FP17st_XSAVEGAME_DATA
// Start address: 0x1fb330
s32 xSG_sv_commit(st_XSAVEGAME_DATA* xsgdata)
{
	s32 result;
	s32 rc;
	s8* name;
	type_13 browselabel;
}

// xSG_smem_cltclose__FP17st_XSAVEGAME_DATAP19st_XSAVEGAME_CLIENT
// Start address: 0x1fb430
s32 xSG_smem_cltclose(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_CLIENT* clt)
{
	s8* last_bufpos;
}

// xSG_smem_blkclose__FP17st_XSAVEGAME_DATA
// Start address: 0x1fb500
s32 xSG_smem_blkclose(st_XSAVEGAME_DATA* xsgdata)
{
	s8* last_bufpos;
}

// xSG_sv_flipproc__FP17st_XSAVEGAME_DATA
// Start address: 0x1fb580
s32 xSG_sv_flipproc(st_XSAVEGAME_DATA* xsgdata)
{
	s32 result;
	s32 rc;
	s32 i;
	st_XSAVEGAME_CLIENT* clt;
	s8 bfill;
	s32 needfill;
}

// xSG_sv_prepdest__FP17st_XSAVEGAME_DATA
// Start address: 0x1fb750
s32 xSG_sv_prepdest(st_XSAVEGAME_DATA* xsgdata)
{
	s32 result;
}

// xSG_sv_flipinfo__FP17st_XSAVEGAME_DATA
// Start address: 0x1fb7f0
s32 xSG_sv_flipinfo(st_XSAVEGAME_DATA* xsgdata)
{
	s32 result;
	s32 i;
	s32 rc;
	st_XSAVEGAME_CLIENT* clt;
	s32 cltamt;
	s32 cltmax;
}

// xSG_grab_leaders__FP17st_XSAVEGAME_DATA
// Start address: 0x1fb910
s32 xSG_grab_leaders(st_XSAVEGAME_DATA* xsgdata)
{
	s32 num_found;
	s32 i;
	type_6 readbuf;
	s32 rc;
}

// xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPfi
// Start address: 0x1fbb20
s32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, f32* buff, s32 n)
{
	s32 cnt;
}

// xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPUii
// Start address: 0x1fbb30
s32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, u32* buff, s32 n)
{
	s32 cnt;
}

// xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPii
// Start address: 0x1fbb40
s32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, s32* buff, s32 n)
{
	s32 cnt;
}

// xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPci
// Start address: 0x1fbb50
s32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, s8* buff, s32 n)
{
	s32 cnt;
}

// xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPcii
// Start address: 0x1fbb60
s32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, s8* buff, s32 elesiz, s32 n)
{
	s32 cnt;
	st_XSAVEGAME_CLIENT* clt;
}

// xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPfi
// Start address: 0x1fbc80
s32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, f32* data, s32 n)
{
	s32 cnt;
}

// xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPUii
// Start address: 0x1fbc90
s32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, u32* data, s32 n)
{
	s32 cnt;
}

// xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPii
// Start address: 0x1fbca0
s32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, s32* data, s32 n)
{
	s32 cnt;
}

// xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPci
// Start address: 0x1fbcb0
s32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, s8* data, s32 n)
{
	s32 cnt;
}

// xSGWriteStrLen__FPCc
// Start address: 0x1fbcc0
s32 xSGWriteStrLen(s8* str)
{
	s32 len;
}

// xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPcii
// Start address: 0x1fbcf0
s32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, s8* data, s32 elesiz, s32 n)
{
	s32 cnt;
	st_XSAVEGAME_CLIENT* clt;
	s32 is_ok;
	void* mcprc;
}

// xSG_cb_leader_load__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x1fbe40
s32 xSG_cb_leader_load(st_XSAVEGAME_DATA* original_xsgdata, st_XSAVEGAME_READCONTEXT* rctxt)
{
	type_15 fundata;
	st_XSAVEGAME_LEADER discard;
}

// xSG_cb_leader_svproc__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x1fbef0
s32 xSG_cb_leader_svproc(void* cltdata, st_XSAVEGAME_DATA* original_xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	st_XSAVEGAME_DATA* xsg;
	st_XSAVEGAME_LEADER leader;
	type_22 fundata;
}

// xSG_cb_leader_svinfo__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x1fbfe0
s32 xSG_cb_leader_svinfo(s32* cur_space, s32* max_fullgame)
{
}

// xSGAsyncStatus__FP17st_XSAVEGAME_DATAiP14en_XSG_WHYFAILPc
// Start address: 0x1fc000
en_XSGASYNC_STATUS xSGAsyncStatus(st_XSAVEGAME_DATA* xsgdata, s32 block, en_XSG_WHYFAIL* whyFail, s8* errmsg)
{
	en_XSGASYNC_STATUS xstat;
	en_ASYNC_OPSTAT istat;
	en_ASYNC_OPERR whyerr;
	en_XSG_WHYFAIL con;
}

// xSGWrapup__FP17st_XSAVEGAME_DATA
// Start address: 0x1fc160
s32 xSGWrapup(st_XSAVEGAME_DATA* xsgdata)
{
	s32 result;
	s32 rc;
}

// xSGProcess__FP17st_XSAVEGAME_DATA
// Start address: 0x1fc340
s32 xSGProcess(st_XSAVEGAME_DATA* xsgdata)
{
	s32 result;
	s32 rc;
}

// xSGSetup__FP17st_XSAVEGAME_DATAiPcili
// Start address: 0x1fc580
s32 xSGSetup(st_XSAVEGAME_DATA* xsgdata, s32 gidx, s8* label, s32 progress, s32 playtime, s32 thumbIconIdx)
{
	s32 result;
	s32 rc;
}

// xSGSetup__FP17st_XSAVEGAME_DATA
// Start address: 0x1fc700
s32 xSGSetup(st_XSAVEGAME_DATA* xsgdata)
{
}

// xSGAddLoadClient__FP17st_XSAVEGAME_DATAUiPvPFPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii_i
// Start address: 0x1fc720
s32 xSGAddLoadClient(st_XSAVEGAME_DATA* xsgdata, u32 clttag, void* cltdata, type_12 loadfunc)
{
	s32 result;
	st_XSAVEGAME_CLIENT* clt;
}

// xSGAddSaveClient__FP17st_XSAVEGAME_DATAUiPvPFPvP17st_XSAVEGAME_DATAPiPi_iPFPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT_i
// Start address: 0x1fc860
s32 xSGAddSaveClient(st_XSAVEGAME_DATA* xsgdata, u32 clttag, void* cltdata, type_10 infofunc, type_11 procfunc)
{
	s32 result;
	st_XSAVEGAME_CLIENT* clt;
}

// xSGGameProgress__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fc950
s32 xSGGameProgress(st_XSAVEGAME_DATA* xsgdata, s32 gidx)
{
	s32 idx_thum;
}

// xSGGameThumbIndex__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fc9f0
s32 xSGGameThumbIndex(st_XSAVEGAME_DATA* xsgdata, s32 gidx)
{
	s32 idx_thum;
}

// xSGGameLabel__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fca90
s8* xSGGameLabel(st_XSAVEGAME_DATA* xsgdata, s32 gidx)
{
	s8* da_name;
	st_XSAVEGAME_LEADER* lead;
}

// xSGGameModDate__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fcb30
s8* xSGGameModDate(st_XSAVEGAME_DATA* xsgdata, s32 gidx)
{
	s8* date;
	type_1 da_date;
}

// xSGGameSize__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fcc30
s32 xSGGameSize(st_XSAVEGAME_DATA* xsgdata, s32 gidx)
{
	s32 size;
}

// xSGGameIsEmpty__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fcd00
s32 xSGGameIsEmpty(st_XSAVEGAME_DATA* xsgdata, s32 gidx)
{
}

// xSGGameSet__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fcde0
void xSGGameSet(st_XSAVEGAME_DATA* xsgdata, s32 gidx)
{
}

// xSGCheckMemoryCard__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fcdf0
u8 xSGCheckMemoryCard(st_XSAVEGAME_DATA* xsgdata, s32 index)
{
}

// xSGTgtHaveRoomStartup__FP17st_XSAVEGAME_DATAiiiPiPiPi
// Start address: 0x1fce00
s32 xSGTgtHaveRoomStartup(st_XSAVEGAME_DATA* xsgdata, s32 tidx, s32 fsize, s32 slotidx, s32* bytesNeeded, s32* availOnDisk, s32* needFile)
{
	s32 isroom;
	type_21 fname;
}

// xSGTgtHaveRoom__FP17st_XSAVEGAME_DATAiiiPiPiPi
// Start address: 0x1fcf00
s32 xSGTgtHaveRoom(st_XSAVEGAME_DATA* xsgdata, s32 tidx, s32 fsize, s32 slotidx, s32* bytesNeeded, s32* availOnDisk, s32* needFile)
{
	s32 isroom;
	type_8 fname;
}

// xSGTgtHasGameDir__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fd000
s32 xSGTgtHasGameDir(st_XSAVEGAME_DATA* xsgdata, s32 tidx)
{
	s32 rc;
}

// xSGTgtSelect__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fd070
s32 xSGTgtSelect(st_XSAVEGAME_DATA* xsgdata, s32 tidx)
{
	s32 result;
}

// xSGTgtFormatTgt__FP17st_XSAVEGAME_DATAiPi
// Start address: 0x1fd100
s32 xSGTgtFormatTgt(st_XSAVEGAME_DATA* xsgdata, s32 tidx, s32* canRecover)
{
	s32 result;
}

// xSGTgtIsFormat__FP17st_XSAVEGAME_DATAiPi
// Start address: 0x1fd110
s32 xSGTgtIsFormat(st_XSAVEGAME_DATA* xsgdata, s32 tidx, s32* badEncode)
{
	s32 result;
	s32 rc;
}

// xSGTgtPhysSlotIdx__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fd1a0
s32 xSGTgtPhysSlotIdx(st_XSAVEGAME_DATA* xsgdata, s32 tidx)
{
}

// xSGTgtCount__FP17st_XSAVEGAME_DATAPi
// Start address: 0x1fd1b0
s32 xSGTgtCount(st_XSAVEGAME_DATA* xsgdata, s32* max)
{
	s32 cnt;
}

// xSGDone__FP17st_XSAVEGAME_DATA
// Start address: 0x1fd1c0
s32 xSGDone(st_XSAVEGAME_DATA* xsgdata)
{
	s32 result;
}

// xSGInit__F16en_SAVEGAME_MODE
// Start address: 0x1fd2e0
st_XSAVEGAME_DATA* xSGInit(en_SAVEGAME_MODE mode)
{
	st_XSAVEGAME_DATA* xsgdata;
}

// xSGShutdown__Fv
// Start address: 0x1fd3e0
s32 xSGShutdown()
{
}

// xSGStartup__Fv
// Start address: 0x1fd420
s32 xSGStartup()
{
}

