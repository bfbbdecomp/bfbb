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
	int32(*cltinfo)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
	int32(*cltproc)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
	int32(*cltload)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
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

	void Discard();
	int32 SetCache(int32 targ, int32 game, int32 physicalSlot);
	int32 IsValid();
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
	int8 gameLabel[64];
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
st_XSAVEGAME_LEADER g_leaders[3];
st_XSG_SHORTLABEL g_msglabels[32];
XSGAutoData g_autodata;
void(*ASG_ISG_changed)(void*, en_CHGCODE);
int32(*xSG_cb_leader_svproc)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
int32(*xSG_cb_leader_svinfo)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
int32(*xSG_cb_leader_load)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
void(*xSG_cb_ISGChange)(void*, en_CHGCODE);

void ASG_ISG_changed(en_CHGCODE what);
void Discard();
int32 SetCache(int32 targ, int32 game, int32 physicalSlot);
int32 IsValid();
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
int32 xSGAddLoadClient(st_XSAVEGAME_DATA* xsgdata, uint32 clttag, void* cltdata, int32(*loadfunc)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32));
int32 xSGAddSaveClient(st_XSAVEGAME_DATA* xsgdata, uint32 clttag, void* cltdata, int32(*infofunc)(void*, st_XSAVEGAME_DATA*, int32*, int32*), int32(*procfunc)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*));
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
	// Line 2701, Address: 0x1fac30, Func Offset: 0
	// Line 2706, Address: 0x1fac34, Func Offset: 0x4
	// Line 2710, Address: 0x1fac58, Func Offset: 0x28
	// Line 2711, Address: 0x1fac64, Func Offset: 0x34
	// Line 2712, Address: 0x1fac6c, Func Offset: 0x3c
	// Line 2715, Address: 0x1fac70, Func Offset: 0x40
	// Line 2727, Address: 0x1fac80, Func Offset: 0x50
	// Func End, Address: 0x1fac88, Func Offset: 0x58
}

// Discard__11XSGAutoDataFv
// Start address: 0x1fac90
void XSGAutoData::Discard()
{
	// Line 2667, Address: 0x1fac90, Func Offset: 0
	// Line 2670, Address: 0x1fac94, Func Offset: 0x4
	// Line 2667, Address: 0x1fac98, Func Offset: 0x8
	// Line 2668, Address: 0x1faca0, Func Offset: 0x10
	// Line 2670, Address: 0x1faca8, Func Offset: 0x18
	// Line 2671, Address: 0x1facac, Func Offset: 0x1c
	// Line 2672, Address: 0x1facb0, Func Offset: 0x20
	// Line 2673, Address: 0x1facb8, Func Offset: 0x28
	// Line 2674, Address: 0x1facc8, Func Offset: 0x38
	// Line 2677, Address: 0x1faccc, Func Offset: 0x3c
	// Func End, Address: 0x1facdc, Func Offset: 0x4c
}

// SetCache__11XSGAutoDataFiii
// Start address: 0x1face0
int32 XSGAutoData::SetCache(int32 targ, int32 game, int32 physicalSlot)
{
	// Line 2650, Address: 0x1face0, Func Offset: 0
	// Line 2652, Address: 0x1face4, Func Offset: 0x4
	// Line 2650, Address: 0x1face8, Func Offset: 0x8
	// Line 2652, Address: 0x1fad04, Func Offset: 0x24
	// Line 2655, Address: 0x1fad30, Func Offset: 0x50
	// Line 2656, Address: 0x1fad50, Func Offset: 0x70
	// Line 2658, Address: 0x1fad68, Func Offset: 0x88
	// Line 2659, Address: 0x1fad6c, Func Offset: 0x8c
	// Line 2663, Address: 0x1fad70, Func Offset: 0x90
	// Line 2660, Address: 0x1fad74, Func Offset: 0x94
	// Line 2661, Address: 0x1fad78, Func Offset: 0x98
	// Line 2663, Address: 0x1fad84, Func Offset: 0xa4
	// Line 2664, Address: 0x1fad88, Func Offset: 0xa8
	// Func End, Address: 0x1fada4, Func Offset: 0xc4
}

// IsValid__11XSGAutoDataFv
// Start address: 0x1fadb0
int32 XSGAutoData::IsValid()
{
	// Line 2633, Address: 0x1fadb0, Func Offset: 0
	// Line 2634, Address: 0x1fadbc, Func Offset: 0xc
	// Line 2636, Address: 0x1fadcc, Func Offset: 0x1c
	// Line 2637, Address: 0x1fade0, Func Offset: 0x30
	// Line 2640, Address: 0x1fadf0, Func Offset: 0x40
	// Line 2641, Address: 0x1fadf4, Func Offset: 0x44
	// Line 2640, Address: 0x1fadfc, Func Offset: 0x4c
	// Line 2641, Address: 0x1fae00, Func Offset: 0x50
	// Func End, Address: 0x1fae08, Func Offset: 0x58
}

// xSGAutoSave_GetCache__Fv
// Start address: 0x1fae10
XSGAutoData* xSGAutoSave_GetCache()
{
	// Line 2603, Address: 0x1fae10, Func Offset: 0
	// Func End, Address: 0x1fae1c, Func Offset: 0xc
}

// xSG_ld_flipload__FP17st_XSAVEGAME_DATA
// Start address: 0x1fae20
int32 xSG_ld_flipload(st_XSAVEGAME_DATA* xsgdata)
{
	int32 result;
	int32 rc;
	int32 i;
	st_XSAVEGAME_CLIENT* clt;
	// Line 2555, Address: 0x1fae20, Func Offset: 0
	// Line 2556, Address: 0x1fae38, Func Offset: 0x18
	// Line 2555, Address: 0x1fae3c, Func Offset: 0x1c
	// Line 2563, Address: 0x1fae44, Func Offset: 0x24
	// Line 2566, Address: 0x1fae58, Func Offset: 0x38
	// Line 2567, Address: 0x1fae7c, Func Offset: 0x5c
	// Line 2568, Address: 0x1fae88, Func Offset: 0x68
	// Line 2572, Address: 0x1faea4, Func Offset: 0x84
	// Line 2573, Address: 0x1faeac, Func Offset: 0x8c
	// Line 2578, Address: 0x1faeb8, Func Offset: 0x98
	// Line 2580, Address: 0x1faec0, Func Offset: 0xa0
	// Line 2582, Address: 0x1faecc, Func Offset: 0xac
	// Line 2584, Address: 0x1faed0, Func Offset: 0xb0
	// Line 2585, Address: 0x1faed8, Func Offset: 0xb8
	// Line 2587, Address: 0x1faef0, Func Offset: 0xd0
	// Line 2588, Address: 0x1faef4, Func Offset: 0xd4
	// Func End, Address: 0x1faf14, Func Offset: 0xf4
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
	// Line 2388, Address: 0x1faf20, Func Offset: 0
	// Line 2411, Address: 0x1faf24, Func Offset: 0x4
	// Line 2388, Address: 0x1faf28, Func Offset: 0x8
	// Line 2411, Address: 0x1faf2c, Func Offset: 0xc
	// Line 2388, Address: 0x1faf30, Func Offset: 0x10
	// Line 2411, Address: 0x1faf34, Func Offset: 0x14
	// Line 2388, Address: 0x1faf38, Func Offset: 0x18
	// Line 2411, Address: 0x1faf44, Func Offset: 0x24
	// Line 2391, Address: 0x1faf48, Func Offset: 0x28
	// Line 2404, Address: 0x1faf4c, Func Offset: 0x2c
	// Line 2392, Address: 0x1faf50, Func Offset: 0x30
	// Line 2393, Address: 0x1faf54, Func Offset: 0x34
	// Line 2394, Address: 0x1faf58, Func Offset: 0x38
	// Line 2407, Address: 0x1faf5c, Func Offset: 0x3c
	// Line 2408, Address: 0x1faf64, Func Offset: 0x44
	// Line 2411, Address: 0x1faf68, Func Offset: 0x48
	// Line 2412, Address: 0x1faf70, Func Offset: 0x50
	// Line 2413, Address: 0x1faf88, Func Offset: 0x68
	// Line 2414, Address: 0x1fafa0, Func Offset: 0x80
	// Line 2418, Address: 0x1fafb8, Func Offset: 0x98
	// Line 2428, Address: 0x1fafc8, Func Offset: 0xa8
	// Line 2421, Address: 0x1fafdc, Func Offset: 0xbc
	// Line 2425, Address: 0x1fafe0, Func Offset: 0xc0
	// Line 2422, Address: 0x1fafe4, Func Offset: 0xc4
	// Line 2428, Address: 0x1fafe8, Func Offset: 0xc8
	// Line 2429, Address: 0x1faff0, Func Offset: 0xd0
	// Line 2430, Address: 0x1fb008, Func Offset: 0xe8
	// Line 2432, Address: 0x1fb020, Func Offset: 0x100
	// Line 2437, Address: 0x1fb02c, Func Offset: 0x10c
	// Line 2442, Address: 0x1fb048, Func Offset: 0x128
	// Line 2450, Address: 0x1fb054, Func Offset: 0x134
	// Line 2444, Address: 0x1fb058, Func Offset: 0x138
	// Line 2450, Address: 0x1fb05c, Func Offset: 0x13c
	// Line 2451, Address: 0x1fb060, Func Offset: 0x140
	// Line 2452, Address: 0x1fb068, Func Offset: 0x148
	// Line 2455, Address: 0x1fb070, Func Offset: 0x150
	// Line 2456, Address: 0x1fb078, Func Offset: 0x158
	// Line 2457, Address: 0x1fb07c, Func Offset: 0x15c
	// Line 2459, Address: 0x1fb080, Func Offset: 0x160
	// Line 2462, Address: 0x1fb088, Func Offset: 0x168
	// Line 2466, Address: 0x1fb098, Func Offset: 0x178
	// Line 2467, Address: 0x1fb0a0, Func Offset: 0x180
	// Line 2470, Address: 0x1fb0ac, Func Offset: 0x18c
	// Line 2476, Address: 0x1fb0b8, Func Offset: 0x198
	// Line 2487, Address: 0x1fb0bc, Func Offset: 0x19c
	// Line 2476, Address: 0x1fb0c0, Func Offset: 0x1a0
	// Line 2477, Address: 0x1fb0c4, Func Offset: 0x1a4
	// Line 2478, Address: 0x1fb0cc, Func Offset: 0x1ac
	// Line 2481, Address: 0x1fb0d4, Func Offset: 0x1b4
	// Line 2482, Address: 0x1fb0dc, Func Offset: 0x1bc
	// Line 2483, Address: 0x1fb0e0, Func Offset: 0x1c0
	// Line 2487, Address: 0x1fb0e8, Func Offset: 0x1c8
	// Line 2490, Address: 0x1fb100, Func Offset: 0x1e0
	// Line 2491, Address: 0x1fb108, Func Offset: 0x1e8
	// Line 2494, Address: 0x1fb114, Func Offset: 0x1f4
	// Line 2491, Address: 0x1fb118, Func Offset: 0x1f8
	// Line 2502, Address: 0x1fb11c, Func Offset: 0x1fc
	// Line 2503, Address: 0x1fb124, Func Offset: 0x204
	// Line 2504, Address: 0x1fb140, Func Offset: 0x220
	// Line 2507, Address: 0x1fb15c, Func Offset: 0x23c
	// Line 2509, Address: 0x1fb168, Func Offset: 0x248
	// Line 2515, Address: 0x1fb174, Func Offset: 0x254
	// Line 2516, Address: 0x1fb184, Func Offset: 0x264
	// Line 2518, Address: 0x1fb190, Func Offset: 0x270
	// Line 2525, Address: 0x1fb198, Func Offset: 0x278
	// Line 2526, Address: 0x1fb1a8, Func Offset: 0x288
	// Line 2536, Address: 0x1fb1b8, Func Offset: 0x298
	// Line 2550, Address: 0x1fb1c8, Func Offset: 0x2a8
	// Line 2549, Address: 0x1fb1d0, Func Offset: 0x2b0
	// Line 2550, Address: 0x1fb1d4, Func Offset: 0x2b4
	// Func End, Address: 0x1fb1e4, Func Offset: 0x2c4
}

// xSG_ld_readhead__FP17st_XSAVEGAME_DATA
// Start address: 0x1fb1f0
int32 xSG_ld_readhead(st_XSAVEGAME_DATA* xsgdata)
{
	int32 result;
	int32 ival;
	// Line 2286, Address: 0x1fb1f0, Func Offset: 0
	// Line 2299, Address: 0x1fb1f4, Func Offset: 0x4
	// Line 2286, Address: 0x1fb1f8, Func Offset: 0x8
	// Line 2299, Address: 0x1fb1fc, Func Offset: 0xc
	// Line 2286, Address: 0x1fb200, Func Offset: 0x10
	// Line 2299, Address: 0x1fb204, Func Offset: 0x14
	// Line 2286, Address: 0x1fb208, Func Offset: 0x18
	// Line 2288, Address: 0x1fb210, Func Offset: 0x20
	// Line 2287, Address: 0x1fb214, Func Offset: 0x24
	// Line 2295, Address: 0x1fb218, Func Offset: 0x28
	// Line 2299, Address: 0x1fb21c, Func Offset: 0x2c
	// Line 2295, Address: 0x1fb220, Func Offset: 0x30
	// Line 2296, Address: 0x1fb224, Func Offset: 0x34
	// Line 2299, Address: 0x1fb228, Func Offset: 0x38
	// Line 2301, Address: 0x1fb230, Func Offset: 0x40
	// Line 2303, Address: 0x1fb244, Func Offset: 0x54
	// Line 2310, Address: 0x1fb248, Func Offset: 0x58
	// Line 2312, Address: 0x1fb260, Func Offset: 0x70
	// Line 2314, Address: 0x1fb270, Func Offset: 0x80
	// Line 2318, Address: 0x1fb274, Func Offset: 0x84
	// Line 2321, Address: 0x1fb278, Func Offset: 0x88
	// Line 2322, Address: 0x1fb290, Func Offset: 0xa0
	// Line 2326, Address: 0x1fb294, Func Offset: 0xa4
	// Line 2327, Address: 0x1fb2b0, Func Offset: 0xc0
	// Line 2338, Address: 0x1fb2b4, Func Offset: 0xc4
	// Line 2327, Address: 0x1fb2b8, Func Offset: 0xc8
	// Line 2339, Address: 0x1fb2bc, Func Offset: 0xcc
	// Func End, Address: 0x1fb2d0, Func Offset: 0xe0
}

// xSG_cb_ISGChange__FPv10en_CHGCODE
// Start address: 0x1fb2d0
void xSG_cb_ISGChange(en_CHGCODE what)
{
	XSGAutoData* asg;
	// Line 2195, Address: 0x1fb2d0, Func Offset: 0
	// Line 2198, Address: 0x1fb2d4, Func Offset: 0x4
	// Line 2202, Address: 0x1fb2f8, Func Offset: 0x28
	// Line 2203, Address: 0x1fb304, Func Offset: 0x34
	// Line 2204, Address: 0x1fb30c, Func Offset: 0x3c
	// Line 2207, Address: 0x1fb310, Func Offset: 0x40
	// Line 2219, Address: 0x1fb320, Func Offset: 0x50
	// Func End, Address: 0x1fb328, Func Offset: 0x58
}

// xSG_sv_commit__FP17st_XSAVEGAME_DATA
// Start address: 0x1fb330
int32 xSG_sv_commit(st_XSAVEGAME_DATA* xsgdata)
{
	int32 result;
	int32 rc;
	int8* name;
	int8 browselabel[64];
	// Line 2147, Address: 0x1fb330, Func Offset: 0
	// Line 2152, Address: 0x1fb334, Func Offset: 0x4
	// Line 2147, Address: 0x1fb338, Func Offset: 0x8
	// Line 2152, Address: 0x1fb33c, Func Offset: 0xc
	// Line 2147, Address: 0x1fb340, Func Offset: 0x10
	// Line 2152, Address: 0x1fb34c, Func Offset: 0x1c
	// Line 2162, Address: 0x1fb36c, Func Offset: 0x3c
	// Line 2163, Address: 0x1fb37c, Func Offset: 0x4c
	// Line 2165, Address: 0x1fb38c, Func Offset: 0x5c
	// Line 2171, Address: 0x1fb3a0, Func Offset: 0x70
	// Line 2175, Address: 0x1fb3e0, Func Offset: 0xb0
	// Line 2176, Address: 0x1fb3f0, Func Offset: 0xc0
	// Line 2180, Address: 0x1fb40c, Func Offset: 0xdc
	// Line 2183, Address: 0x1fb418, Func Offset: 0xe8
	// Line 2184, Address: 0x1fb41c, Func Offset: 0xec
	// Func End, Address: 0x1fb430, Func Offset: 0x100
}

// xSG_smem_cltclose__FP17st_XSAVEGAME_DATAP19st_XSAVEGAME_CLIENT
// Start address: 0x1fb430
int32 xSG_smem_cltclose(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_CLIENT* clt)
{
	int8* last_bufpos;
	// Line 2102, Address: 0x1fb430, Func Offset: 0
	// Line 2111, Address: 0x1fb448, Func Offset: 0x18
	// Line 2114, Address: 0x1fb458, Func Offset: 0x28
	// Line 2118, Address: 0x1fb45c, Func Offset: 0x2c
	// Line 2119, Address: 0x1fb470, Func Offset: 0x40
	// Line 2122, Address: 0x1fb47c, Func Offset: 0x4c
	// Line 2124, Address: 0x1fb480, Func Offset: 0x50
	// Line 2127, Address: 0x1fb484, Func Offset: 0x54
	// Line 2128, Address: 0x1fb488, Func Offset: 0x58
	// Line 2129, Address: 0x1fb4a4, Func Offset: 0x74
	// Line 2132, Address: 0x1fb4a8, Func Offset: 0x78
	// Line 2131, Address: 0x1fb4ac, Func Offset: 0x7c
	// Line 2132, Address: 0x1fb4b0, Func Offset: 0x80
	// Line 2133, Address: 0x1fb4c8, Func Offset: 0x98
	// Line 2135, Address: 0x1fb4cc, Func Offset: 0x9c
	// Line 2137, Address: 0x1fb4d4, Func Offset: 0xa4
	// Line 2141, Address: 0x1fb4e0, Func Offset: 0xb0
	// Line 2140, Address: 0x1fb4e4, Func Offset: 0xb4
	// Line 2141, Address: 0x1fb4e8, Func Offset: 0xb8
	// Func End, Address: 0x1fb4fc, Func Offset: 0xcc
}

// xSG_smem_blkclose__FP17st_XSAVEGAME_DATA
// Start address: 0x1fb500
int32 xSG_smem_blkclose(st_XSAVEGAME_DATA* xsgdata)
{
	int8* last_bufpos;
	// Line 2018, Address: 0x1fb500, Func Offset: 0
	// Line 2043, Address: 0x1fb504, Func Offset: 0x4
	// Line 2018, Address: 0x1fb508, Func Offset: 0x8
	// Line 2043, Address: 0x1fb50c, Func Offset: 0xc
	// Line 2018, Address: 0x1fb510, Func Offset: 0x10
	// Line 2043, Address: 0x1fb514, Func Offset: 0x14
	// Line 2018, Address: 0x1fb518, Func Offset: 0x18
	// Line 2028, Address: 0x1fb520, Func Offset: 0x20
	// Line 2043, Address: 0x1fb524, Func Offset: 0x24
	// Line 2041, Address: 0x1fb528, Func Offset: 0x28
	// Line 2042, Address: 0x1fb52c, Func Offset: 0x2c
	// Line 2043, Address: 0x1fb530, Func Offset: 0x30
	// Line 2044, Address: 0x1fb538, Func Offset: 0x38
	// Line 2049, Address: 0x1fb53c, Func Offset: 0x3c
	// Line 2047, Address: 0x1fb540, Func Offset: 0x40
	// Line 2049, Address: 0x1fb544, Func Offset: 0x44
	// Line 2048, Address: 0x1fb548, Func Offset: 0x48
	// Line 2049, Address: 0x1fb54c, Func Offset: 0x4c
	// Line 2050, Address: 0x1fb560, Func Offset: 0x60
	// Line 2052, Address: 0x1fb564, Func Offset: 0x64
	// Line 2057, Address: 0x1fb56c, Func Offset: 0x6c
	// Func End, Address: 0x1fb580, Func Offset: 0x80
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
	// Line 1900, Address: 0x1fb580, Func Offset: 0
	// Line 1905, Address: 0x1fb584, Func Offset: 0x4
	// Line 1900, Address: 0x1fb588, Func Offset: 0x8
	// Line 1901, Address: 0x1fb5a0, Func Offset: 0x20
	// Line 1900, Address: 0x1fb5a4, Func Offset: 0x24
	// Line 1905, Address: 0x1fb5b0, Func Offset: 0x30
	// Line 1909, Address: 0x1fb5b4, Func Offset: 0x34
	// Line 1914, Address: 0x1fb5c8, Func Offset: 0x48
	// Line 1919, Address: 0x1fb654, Func Offset: 0xd4
	// Line 1921, Address: 0x1fb66c, Func Offset: 0xec
	// Line 1922, Address: 0x1fb674, Func Offset: 0xf4
	// Line 1924, Address: 0x1fb680, Func Offset: 0x100
	// Line 1925, Address: 0x1fb684, Func Offset: 0x104
	// Line 1928, Address: 0x1fb688, Func Offset: 0x108
	// Line 1929, Address: 0x1fb690, Func Offset: 0x110
	// Line 1933, Address: 0x1fb6a0, Func Offset: 0x120
	// Line 1938, Address: 0x1fb6d8, Func Offset: 0x158
	// Line 1939, Address: 0x1fb6e0, Func Offset: 0x160
	// Line 1941, Address: 0x1fb6e8, Func Offset: 0x168
	// Line 1943, Address: 0x1fb6f0, Func Offset: 0x170
	// Line 1948, Address: 0x1fb700, Func Offset: 0x180
	// Line 1953, Address: 0x1fb708, Func Offset: 0x188
	// Line 1955, Address: 0x1fb720, Func Offset: 0x1a0
	// Line 1956, Address: 0x1fb724, Func Offset: 0x1a4
	// Func End, Address: 0x1fb74c, Func Offset: 0x1cc
}

// xSG_sv_prepdest__FP17st_XSAVEGAME_DATA
// Start address: 0x1fb750
int32 xSG_sv_prepdest(st_XSAVEGAME_DATA* xsgdata)
{
	int32 result;
	// Line 1859, Address: 0x1fb750, Func Offset: 0
	// Line 1865, Address: 0x1fb764, Func Offset: 0x14
	// Line 1868, Address: 0x1fb770, Func Offset: 0x20
	// Line 1872, Address: 0x1fb778, Func Offset: 0x28
	// Line 1877, Address: 0x1fb78c, Func Offset: 0x3c
	// Line 1880, Address: 0x1fb798, Func Offset: 0x48
	// Line 1883, Address: 0x1fb7a4, Func Offset: 0x54
	// Line 1885, Address: 0x1fb7b0, Func Offset: 0x60
	// Line 1888, Address: 0x1fb7c0, Func Offset: 0x70
	// Line 1890, Address: 0x1fb7d0, Func Offset: 0x80
	// Line 1895, Address: 0x1fb7d8, Func Offset: 0x88
	// Line 1896, Address: 0x1fb7dc, Func Offset: 0x8c
	// Func End, Address: 0x1fb7f0, Func Offset: 0xa0
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
	// Line 1800, Address: 0x1fb7f0, Func Offset: 0
	// Line 1802, Address: 0x1fb808, Func Offset: 0x18
	// Line 1800, Address: 0x1fb80c, Func Offset: 0x1c
	// Line 1806, Address: 0x1fb814, Func Offset: 0x24
	// Line 1807, Address: 0x1fb818, Func Offset: 0x28
	// Line 1812, Address: 0x1fb81c, Func Offset: 0x2c
	// Line 1814, Address: 0x1fb830, Func Offset: 0x40
	// Line 1815, Address: 0x1fb834, Func Offset: 0x44
	// Line 1828, Address: 0x1fb838, Func Offset: 0x48
	// Line 1829, Address: 0x1fb854, Func Offset: 0x64
	// Line 1830, Address: 0x1fb85c, Func Offset: 0x6c
	// Line 1833, Address: 0x1fb868, Func Offset: 0x78
	// Line 1837, Address: 0x1fb870, Func Offset: 0x80
	// Line 1838, Address: 0x1fb878, Func Offset: 0x88
	// Line 1839, Address: 0x1fb880, Func Offset: 0x90
	// Line 1840, Address: 0x1fb890, Func Offset: 0xa0
	// Line 1841, Address: 0x1fb8a0, Func Offset: 0xb0
	// Line 1842, Address: 0x1fb8ac, Func Offset: 0xbc
	// Line 1844, Address: 0x1fb8b0, Func Offset: 0xc0
	// Line 1845, Address: 0x1fb8b8, Func Offset: 0xc8
	// Line 1846, Address: 0x1fb8c4, Func Offset: 0xd4
	// Line 1849, Address: 0x1fb8cc, Func Offset: 0xdc
	// Line 1853, Address: 0x1fb8e8, Func Offset: 0xf8
	// Line 1854, Address: 0x1fb8ec, Func Offset: 0xfc
	// Func End, Address: 0x1fb90c, Func Offset: 0x11c
}

// xSG_grab_leaders__FP17st_XSAVEGAME_DATA
// Start address: 0x1fb910
int32 xSG_grab_leaders(st_XSAVEGAME_DATA* xsgdata)
{
	int32 num_found;
	int32 i;
	int8 readbuf[116];
	int32 rc;
	// Line 1665, Address: 0x1fb910, Func Offset: 0
	// Line 1668, Address: 0x1fb914, Func Offset: 0x4
	// Line 1665, Address: 0x1fb918, Func Offset: 0x8
	// Line 1668, Address: 0x1fb91c, Func Offset: 0xc
	// Line 1665, Address: 0x1fb920, Func Offset: 0x10
	// Line 1666, Address: 0x1fb934, Func Offset: 0x24
	// Line 1665, Address: 0x1fb938, Func Offset: 0x28
	// Line 1668, Address: 0x1fb940, Func Offset: 0x30
	// Line 1675, Address: 0x1fb960, Func Offset: 0x50
	// Line 1680, Address: 0x1fb974, Func Offset: 0x64
	// Line 1681, Address: 0x1fb9a0, Func Offset: 0x90
	// Line 1683, Address: 0x1fb9b0, Func Offset: 0xa0
	// Line 1684, Address: 0x1fb9c0, Func Offset: 0xb0
	// Line 1698, Address: 0x1fba64, Func Offset: 0x154
	// Line 1700, Address: 0x1fbaa8, Func Offset: 0x198
	// Line 1702, Address: 0x1fbac4, Func Offset: 0x1b4
	// Line 1707, Address: 0x1fbacc, Func Offset: 0x1bc
	// Line 1709, Address: 0x1fbadc, Func Offset: 0x1cc
	// Line 1711, Address: 0x1fbaf0, Func Offset: 0x1e0
	// Line 1712, Address: 0x1fbaf8, Func Offset: 0x1e8
	// Func End, Address: 0x1fbb20, Func Offset: 0x210
}

// xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPfi
// Start address: 0x1fbb20
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, float32* buff, int32 n)
{
	int32 cnt;
	// Line 1655, Address: 0x1fbb24, Func Offset: 0x4
	// Func End, Address: 0x1fbb2c, Func Offset: 0xc
}

// xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPUii
// Start address: 0x1fbb30
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, uint32* buff, int32 n)
{
	int32 cnt;
	// Line 1647, Address: 0x1fbb34, Func Offset: 0x4
	// Func End, Address: 0x1fbb3c, Func Offset: 0xc
}

// xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPii
// Start address: 0x1fbb40
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, int32* buff, int32 n)
{
	int32 cnt;
	// Line 1639, Address: 0x1fbb44, Func Offset: 0x4
	// Func End, Address: 0x1fbb4c, Func Offset: 0xc
}

// xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPci
// Start address: 0x1fbb50
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, int8* buff, int32 n)
{
	int32 cnt;
	// Line 1599, Address: 0x1fbb54, Func Offset: 0x4
	// Func End, Address: 0x1fbb5c, Func Offset: 0xc
}

// xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPcii
// Start address: 0x1fbb60
int32 xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, int8* buff, int32 elesiz, int32 n)
{
	int32 cnt;
	st_XSAVEGAME_CLIENT* clt;
	// Line 1485, Address: 0x1fbb60, Func Offset: 0
	// Line 1492, Address: 0x1fbb80, Func Offset: 0x20
	// Line 1495, Address: 0x1fbb90, Func Offset: 0x30
	// Line 1497, Address: 0x1fbb94, Func Offset: 0x34
	// Line 1501, Address: 0x1fbba8, Func Offset: 0x48
	// Line 1502, Address: 0x1fbbb0, Func Offset: 0x50
	// Line 1503, Address: 0x1fbbc0, Func Offset: 0x60
	// Line 1505, Address: 0x1fbbcc, Func Offset: 0x6c
	// Line 1510, Address: 0x1fbbd4, Func Offset: 0x74
	// Line 1513, Address: 0x1fbbd8, Func Offset: 0x78
	// Line 1514, Address: 0x1fbbf8, Func Offset: 0x98
	// Line 1517, Address: 0x1fbc08, Func Offset: 0xa8
	// Line 1518, Address: 0x1fbc14, Func Offset: 0xb4
	// Line 1520, Address: 0x1fbc1c, Func Offset: 0xbc
	// Line 1521, Address: 0x1fbc24, Func Offset: 0xc4
	// Line 1522, Address: 0x1fbc30, Func Offset: 0xd0
	// Line 1523, Address: 0x1fbc3c, Func Offset: 0xdc
	// Line 1530, Address: 0x1fbc48, Func Offset: 0xe8
	// Line 1531, Address: 0x1fbc58, Func Offset: 0xf8
	// Func End, Address: 0x1fbc74, Func Offset: 0x114
}

// xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPfi
// Start address: 0x1fbc80
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, float32* data, int32 n)
{
	int32 cnt;
	// Line 1471, Address: 0x1fbc84, Func Offset: 0x4
	// Func End, Address: 0x1fbc8c, Func Offset: 0xc
}

// xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPUii
// Start address: 0x1fbc90
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, uint32* data, int32 n)
{
	int32 cnt;
	// Line 1458, Address: 0x1fbc94, Func Offset: 0x4
	// Func End, Address: 0x1fbc9c, Func Offset: 0xc
}

// xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPii
// Start address: 0x1fbca0
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, int32* data, int32 n)
{
	int32 cnt;
	// Line 1447, Address: 0x1fbca4, Func Offset: 0x4
	// Func End, Address: 0x1fbcac, Func Offset: 0xc
}

// xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPci
// Start address: 0x1fbcb0
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, int8* data, int32 n)
{
	int32 cnt;
	// Line 1399, Address: 0x1fbcb4, Func Offset: 0x4
	// Func End, Address: 0x1fbcbc, Func Offset: 0xc
}

// xSGWriteStrLen__FPCc
// Start address: 0x1fbcc0
int32 xSGWriteStrLen(int8* str)
{
	int32 len;
	// Line 1383, Address: 0x1fbcc0, Func Offset: 0
	// Line 1387, Address: 0x1fbcc8, Func Offset: 0x8
	// Line 1390, Address: 0x1fbcd0, Func Offset: 0x10
	// Line 1388, Address: 0x1fbcd4, Func Offset: 0x14
	// Line 1390, Address: 0x1fbce4, Func Offset: 0x24
	// Func End, Address: 0x1fbcec, Func Offset: 0x2c
}

// xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPcii
// Start address: 0x1fbcf0
int32 xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, int8* data, int32 elesiz, int32 n)
{
	int32 cnt;
	st_XSAVEGAME_CLIENT* clt;
	int32 is_ok;
	void* mcprc;
	// Line 1292, Address: 0x1fbcf0, Func Offset: 0
	// Line 1295, Address: 0x1fbd14, Func Offset: 0x24
	// Line 1301, Address: 0x1fbd18, Func Offset: 0x28
	// Line 1304, Address: 0x1fbd38, Func Offset: 0x48
	// Line 1307, Address: 0x1fbd48, Func Offset: 0x58
	// Line 1309, Address: 0x1fbd4c, Func Offset: 0x5c
	// Line 1313, Address: 0x1fbd60, Func Offset: 0x70
	// Line 1316, Address: 0x1fbd6c, Func Offset: 0x7c
	// Line 1319, Address: 0x1fbd84, Func Offset: 0x94
	// Line 1330, Address: 0x1fbd90, Func Offset: 0xa0
	// Line 1332, Address: 0x1fbda0, Func Offset: 0xb0
	// Line 1335, Address: 0x1fbda8, Func Offset: 0xb8
	// Line 1339, Address: 0x1fbdb0, Func Offset: 0xc0
	// Line 1340, Address: 0x1fbdbc, Func Offset: 0xcc
	// Line 1343, Address: 0x1fbdc0, Func Offset: 0xd0
	// Line 1344, Address: 0x1fbdd0, Func Offset: 0xe0
	// Line 1345, Address: 0x1fbdd8, Func Offset: 0xe8
	// Line 1349, Address: 0x1fbdec, Func Offset: 0xfc
	// Line 1351, Address: 0x1fbdf0, Func Offset: 0x100
	// Line 1352, Address: 0x1fbdf8, Func Offset: 0x108
	// Line 1353, Address: 0x1fbe00, Func Offset: 0x110
	// Line 1352, Address: 0x1fbe04, Func Offset: 0x114
	// Line 1353, Address: 0x1fbe08, Func Offset: 0x118
	// Line 1355, Address: 0x1fbe10, Func Offset: 0x120
	// Line 1356, Address: 0x1fbe20, Func Offset: 0x130
	// Func End, Address: 0x1fbe40, Func Offset: 0x150
}

// xSG_cb_leader_load__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x1fbe40
int32 xSG_cb_leader_load(st_XSAVEGAME_DATA* original_xsgdata, st_XSAVEGAME_READCONTEXT* rctxt)
{
	int8 fundata[32];
	st_XSAVEGAME_LEADER discard;
	// Line 1253, Address: 0x1fbe40, Func Offset: 0
	// Line 1258, Address: 0x1fbe44, Func Offset: 0x4
	// Line 1253, Address: 0x1fbe48, Func Offset: 0x8
	// Line 1258, Address: 0x1fbe4c, Func Offset: 0xc
	// Line 1253, Address: 0x1fbe50, Func Offset: 0x10
	// Line 1258, Address: 0x1fbe5c, Func Offset: 0x1c
	// Line 1259, Address: 0x1fbe7c, Func Offset: 0x3c
	// Line 1264, Address: 0x1fbea0, Func Offset: 0x60
	// Line 1265, Address: 0x1fbeb8, Func Offset: 0x78
	// Line 1270, Address: 0x1fbed0, Func Offset: 0x90
	// Line 1269, Address: 0x1fbed4, Func Offset: 0x94
	// Line 1270, Address: 0x1fbed8, Func Offset: 0x98
	// Func End, Address: 0x1fbee8, Func Offset: 0xa8
}

// xSG_cb_leader_svproc__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x1fbef0
int32 xSG_cb_leader_svproc(void* cltdata, st_XSAVEGAME_DATA* original_xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	st_XSAVEGAME_DATA* xsg;
	st_XSAVEGAME_LEADER leader;
	int8 fundata[23];
	// Line 1221, Address: 0x1fbef0, Func Offset: 0
	// Line 1227, Address: 0x1fbef4, Func Offset: 0x4
	// Line 1221, Address: 0x1fbef8, Func Offset: 0x8
	// Line 1227, Address: 0x1fbefc, Func Offset: 0xc
	// Line 1221, Address: 0x1fbf00, Func Offset: 0x10
	// Line 1227, Address: 0x1fbf14, Func Offset: 0x24
	// Line 1228, Address: 0x1fbf34, Func Offset: 0x44
	// Line 1238, Address: 0x1fbf40, Func Offset: 0x50
	// Line 1228, Address: 0x1fbf44, Func Offset: 0x54
	// Line 1238, Address: 0x1fbf50, Func Offset: 0x60
	// Line 1228, Address: 0x1fbf58, Func Offset: 0x68
	// Line 1238, Address: 0x1fbf68, Func Offset: 0x78
	// Line 1239, Address: 0x1fbf70, Func Offset: 0x80
	// Line 1245, Address: 0x1fbf74, Func Offset: 0x84
	// Line 1240, Address: 0x1fbf78, Func Offset: 0x88
	// Line 1245, Address: 0x1fbf7c, Func Offset: 0x8c
	// Line 1240, Address: 0x1fbf8c, Func Offset: 0x9c
	// Line 1241, Address: 0x1fbf90, Func Offset: 0xa0
	// Line 1242, Address: 0x1fbf98, Func Offset: 0xa8
	// Line 1245, Address: 0x1fbf9c, Func Offset: 0xac
	// Line 1246, Address: 0x1fbfa4, Func Offset: 0xb4
	// Line 1249, Address: 0x1fbfbc, Func Offset: 0xcc
	// Line 1248, Address: 0x1fbfc0, Func Offset: 0xd0
	// Line 1249, Address: 0x1fbfc4, Func Offset: 0xd4
	// Func End, Address: 0x1fbfd8, Func Offset: 0xe8
}

// xSG_cb_leader_svinfo__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x1fbfe0
int32 xSG_cb_leader_svinfo(int32* cur_space, int32* max_fullgame)
{
	// Line 1213, Address: 0x1fbfe0, Func Offset: 0
	// Line 1216, Address: 0x1fbfe4, Func Offset: 0x4
	// Line 1213, Address: 0x1fbfe8, Func Offset: 0x8
	// Line 1217, Address: 0x1fbfec, Func Offset: 0xc
	// Func End, Address: 0x1fbff4, Func Offset: 0x14
}

// xSGAsyncStatus__FP17st_XSAVEGAME_DATAiP14en_XSG_WHYFAILPc
// Start address: 0x1fc000
en_XSGASYNC_STATUS xSGAsyncStatus(st_XSAVEGAME_DATA* xsgdata, int32 block, en_XSG_WHYFAIL* whyFail, int8* errmsg)
{
	en_XSGASYNC_STATUS xstat;
	en_ASYNC_OPSTAT istat;
	en_ASYNC_OPERR whyerr;
	en_XSG_WHYFAIL con;
	// Line 1134, Address: 0x1fc000, Func Offset: 0
	// Line 1135, Address: 0x1fc028, Func Offset: 0x28
	// Line 1140, Address: 0x1fc02c, Func Offset: 0x2c
	// Line 1143, Address: 0x1fc038, Func Offset: 0x38
	// Line 1145, Address: 0x1fc048, Func Offset: 0x48
	// Line 1150, Address: 0x1fc070, Func Offset: 0x70
	// Line 1151, Address: 0x1fc080, Func Offset: 0x80
	// Line 1154, Address: 0x1fc088, Func Offset: 0x88
	// Line 1156, Address: 0x1fc090, Func Offset: 0x90
	// Line 1161, Address: 0x1fc094, Func Offset: 0x94
	// Line 1164, Address: 0x1fc098, Func Offset: 0x98
	// Line 1167, Address: 0x1fc0a8, Func Offset: 0xa8
	// Line 1170, Address: 0x1fc0fc, Func Offset: 0xfc
	// Line 1172, Address: 0x1fc100, Func Offset: 0x100
	// Line 1176, Address: 0x1fc108, Func Offset: 0x108
	// Line 1179, Address: 0x1fc110, Func Offset: 0x110
	// Line 1183, Address: 0x1fc118, Func Offset: 0x118
	// Line 1189, Address: 0x1fc120, Func Offset: 0x120
	// Line 1190, Address: 0x1fc124, Func Offset: 0x124
	// Line 1193, Address: 0x1fc128, Func Offset: 0x128
	// Line 1194, Address: 0x1fc12c, Func Offset: 0x12c
	// Line 1196, Address: 0x1fc130, Func Offset: 0x130
	// Line 1197, Address: 0x1fc134, Func Offset: 0x134
	// Func End, Address: 0x1fc154, Func Offset: 0x154
}

// xSGWrapup__FP17st_XSAVEGAME_DATA
// Start address: 0x1fc160
int32 xSGWrapup(st_XSAVEGAME_DATA* xsgdata)
{
	int32 result;
	int32 rc;
	// Line 1053, Address: 0x1fc160, Func Offset: 0
	// Line 1055, Address: 0x1fc164, Func Offset: 0x4
	// Line 1053, Address: 0x1fc168, Func Offset: 0x8
	// Line 1055, Address: 0x1fc17c, Func Offset: 0x1c
	// Line 1057, Address: 0x1fc180, Func Offset: 0x20
	// Line 1058, Address: 0x1fc198, Func Offset: 0x38
	// Line 1061, Address: 0x1fc1a4, Func Offset: 0x44
	// Line 1062, Address: 0x1fc1b0, Func Offset: 0x50
	// Line 1065, Address: 0x1fc1bc, Func Offset: 0x5c
	// Line 1063, Address: 0x1fc1c0, Func Offset: 0x60
	// Line 1066, Address: 0x1fc1c4, Func Offset: 0x64
	// Line 1069, Address: 0x1fc1c8, Func Offset: 0x68
	// Line 1070, Address: 0x1fc1e0, Func Offset: 0x80
	// Line 1077, Address: 0x1fc1f0, Func Offset: 0x90
	// Line 1079, Address: 0x1fc1f8, Func Offset: 0x98
	// Line 1084, Address: 0x1fc200, Func Offset: 0xa0
	// Line 1087, Address: 0x1fc208, Func Offset: 0xa8
	// Line 1088, Address: 0x1fc210, Func Offset: 0xb0
	// Line 1087, Address: 0x1fc214, Func Offset: 0xb4
	// Line 1088, Address: 0x1fc218, Func Offset: 0xb8
	// Line 1092, Address: 0x1fc220, Func Offset: 0xc0
	// Line 1094, Address: 0x1fc228, Func Offset: 0xc8
	// Line 1096, Address: 0x1fc22c, Func Offset: 0xcc
	// Line 1099, Address: 0x1fc230, Func Offset: 0xd0
	// Line 1101, Address: 0x1fc238, Func Offset: 0xd8
	// Line 1102, Address: 0x1fc28c, Func Offset: 0x12c
	// Line 1104, Address: 0x1fc290, Func Offset: 0x130
	// Line 1107, Address: 0x1fc298, Func Offset: 0x138
	// Line 1108, Address: 0x1fc2a0, Func Offset: 0x140
	// Line 1107, Address: 0x1fc2a4, Func Offset: 0x144
	// Line 1108, Address: 0x1fc2a8, Func Offset: 0x148
	// Line 1112, Address: 0x1fc2b0, Func Offset: 0x150
	// Line 1114, Address: 0x1fc2b8, Func Offset: 0x158
	// Line 1116, Address: 0x1fc2bc, Func Offset: 0x15c
	// Line 1121, Address: 0x1fc2c0, Func Offset: 0x160
	// Line 1122, Address: 0x1fc2d0, Func Offset: 0x170
	// Line 1125, Address: 0x1fc2e0, Func Offset: 0x180
	// Line 1126, Address: 0x1fc2f0, Func Offset: 0x190
	// Line 1128, Address: 0x1fc300, Func Offset: 0x1a0
	// Line 1129, Address: 0x1fc318, Func Offset: 0x1b8
	// Line 1130, Address: 0x1fc320, Func Offset: 0x1c0
	// Func End, Address: 0x1fc338, Func Offset: 0x1d8
}

// xSGProcess__FP17st_XSAVEGAME_DATA
// Start address: 0x1fc340
int32 xSGProcess(st_XSAVEGAME_DATA* xsgdata)
{
	int32 result;
	int32 rc;
	// Line 976, Address: 0x1fc340, Func Offset: 0
	// Line 978, Address: 0x1fc35c, Func Offset: 0x1c
	// Line 984, Address: 0x1fc364, Func Offset: 0x24
	// Line 985, Address: 0x1fc378, Func Offset: 0x38
	// Line 988, Address: 0x1fc384, Func Offset: 0x44
	// Line 989, Address: 0x1fc390, Func Offset: 0x50
	// Line 991, Address: 0x1fc39c, Func Offset: 0x5c
	// Line 994, Address: 0x1fc3a0, Func Offset: 0x60
	// Line 1003, Address: 0x1fc3b8, Func Offset: 0x78
	// Line 1007, Address: 0x1fc440, Func Offset: 0x100
	// Line 1008, Address: 0x1fc448, Func Offset: 0x108
	// Line 1009, Address: 0x1fc450, Func Offset: 0x110
	// Line 1010, Address: 0x1fc45c, Func Offset: 0x11c
	// Line 1016, Address: 0x1fc460, Func Offset: 0x120
	// Line 1017, Address: 0x1fc468, Func Offset: 0x128
	// Line 1019, Address: 0x1fc484, Func Offset: 0x144
	// Line 1021, Address: 0x1fc488, Func Offset: 0x148
	// Line 1023, Address: 0x1fc490, Func Offset: 0x150
	// Line 1024, Address: 0x1fc498, Func Offset: 0x158
	// Line 1028, Address: 0x1fc4a4, Func Offset: 0x164
	// Line 1030, Address: 0x1fc4a8, Func Offset: 0x168
	// Line 1032, Address: 0x1fc4b0, Func Offset: 0x170
	// Line 1035, Address: 0x1fc4b8, Func Offset: 0x178
	// Line 1036, Address: 0x1fc4c0, Func Offset: 0x180
	// Line 1039, Address: 0x1fc4d8, Func Offset: 0x198
	// Line 1040, Address: 0x1fc530, Func Offset: 0x1f0
	// Line 1042, Address: 0x1fc53c, Func Offset: 0x1fc
	// Line 1046, Address: 0x1fc540, Func Offset: 0x200
	// Line 1047, Address: 0x1fc548, Func Offset: 0x208
	// Line 1049, Address: 0x1fc560, Func Offset: 0x220
	// Line 1050, Address: 0x1fc564, Func Offset: 0x224
	// Func End, Address: 0x1fc57c, Func Offset: 0x23c
}

// xSGSetup__FP17st_XSAVEGAME_DATAiPcili
// Start address: 0x1fc580
int32 xSGSetup(st_XSAVEGAME_DATA* xsgdata, int32 gidx, int8* label, int32 progress, long32 playtime, int32 thumbIconIdx)
{
	int32 result;
	int32 rc;
	// Line 910, Address: 0x1fc580, Func Offset: 0
	// Line 917, Address: 0x1fc584, Func Offset: 0x4
	// Line 910, Address: 0x1fc588, Func Offset: 0x8
	// Line 912, Address: 0x1fc5b0, Func Offset: 0x30
	// Line 917, Address: 0x1fc5b4, Func Offset: 0x34
	// Line 918, Address: 0x1fc5c8, Func Offset: 0x48
	// Line 920, Address: 0x1fc5d4, Func Offset: 0x54
	// Line 926, Address: 0x1fc5d8, Func Offset: 0x58
	// Line 928, Address: 0x1fc5e8, Func Offset: 0x68
	// Line 934, Address: 0x1fc5ec, Func Offset: 0x6c
	// Line 935, Address: 0x1fc5fc, Func Offset: 0x7c
	// Line 936, Address: 0x1fc600, Func Offset: 0x80
	// Line 937, Address: 0x1fc604, Func Offset: 0x84
	// Line 940, Address: 0x1fc608, Func Offset: 0x88
	// Line 942, Address: 0x1fc610, Func Offset: 0x90
	// Line 943, Address: 0x1fc618, Func Offset: 0x98
	// Line 944, Address: 0x1fc624, Func Offset: 0xa4
	// Line 947, Address: 0x1fc628, Func Offset: 0xa8
	// Line 948, Address: 0x1fc630, Func Offset: 0xb0
	// Line 949, Address: 0x1fc638, Func Offset: 0xb8
	// Line 952, Address: 0x1fc640, Func Offset: 0xc0
	// Line 957, Address: 0x1fc648, Func Offset: 0xc8
	// Line 958, Address: 0x1fc6a0, Func Offset: 0x120
	// Line 960, Address: 0x1fc6ac, Func Offset: 0x12c
	// Line 963, Address: 0x1fc6b0, Func Offset: 0x130
	// Line 964, Address: 0x1fc6b8, Func Offset: 0x138
	// Line 966, Address: 0x1fc6d0, Func Offset: 0x150
	// Line 967, Address: 0x1fc6d4, Func Offset: 0x154
	// Func End, Address: 0x1fc6f4, Func Offset: 0x174
}

// xSGSetup__FP17st_XSAVEGAME_DATA
// Start address: 0x1fc700
int32 xSGSetup(st_XSAVEGAME_DATA* xsgdata)
{
	// Line 906, Address: 0x1fc700, Func Offset: 0
	// Func End, Address: 0x1fc71c, Func Offset: 0x1c
}

// xSGAddLoadClient__FP17st_XSAVEGAME_DATAUiPvPFPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii_i
// Start address: 0x1fc720
int32 xSGAddLoadClient(st_XSAVEGAME_DATA* xsgdata, uint32 clttag, void* cltdata, int32(*loadfunc)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32))
{
	int32 result;
	st_XSAVEGAME_CLIENT* clt;
	// Line 796, Address: 0x1fc720, Func Offset: 0
	// Line 803, Address: 0x1fc724, Func Offset: 0x4
	// Line 796, Address: 0x1fc728, Func Offset: 0x8
	// Line 797, Address: 0x1fc72c, Func Offset: 0xc
	// Line 796, Address: 0x1fc730, Func Offset: 0x10
	// Line 797, Address: 0x1fc74c, Func Offset: 0x2c
	// Line 803, Address: 0x1fc750, Func Offset: 0x30
	// Line 804, Address: 0x1fc768, Func Offset: 0x48
	// Line 807, Address: 0x1fc774, Func Offset: 0x54
	// Line 808, Address: 0x1fc780, Func Offset: 0x60
	// Line 809, Address: 0x1fc794, Func Offset: 0x74
	// Line 812, Address: 0x1fc79c, Func Offset: 0x7c
	// Line 842, Address: 0x1fc7a0, Func Offset: 0x80
	// Line 847, Address: 0x1fc7b4, Func Offset: 0x94
	// Line 848, Address: 0x1fc7b8, Func Offset: 0x98
	// Line 852, Address: 0x1fc7c0, Func Offset: 0xa0
	// Line 853, Address: 0x1fc7c4, Func Offset: 0xa4
	// Line 854, Address: 0x1fc7c8, Func Offset: 0xa8
	// Line 858, Address: 0x1fc7cc, Func Offset: 0xac
	// Line 859, Address: 0x1fc7d0, Func Offset: 0xb0
	// Line 860, Address: 0x1fc7d4, Func Offset: 0xb4
	// Line 861, Address: 0x1fc7d8, Func Offset: 0xb8
	// Line 862, Address: 0x1fc7dc, Func Offset: 0xbc
	// Line 865, Address: 0x1fc7e0, Func Offset: 0xc0
	// Line 868, Address: 0x1fc7e8, Func Offset: 0xc8
	// Line 870, Address: 0x1fc7fc, Func Offset: 0xdc
	// Line 871, Address: 0x1fc800, Func Offset: 0xe0
	// Line 872, Address: 0x1fc804, Func Offset: 0xe4
	// Line 873, Address: 0x1fc808, Func Offset: 0xe8
	// Line 874, Address: 0x1fc80c, Func Offset: 0xec
	// Line 875, Address: 0x1fc810, Func Offset: 0xf0
	// Line 876, Address: 0x1fc814, Func Offset: 0xf4
	// Line 877, Address: 0x1fc818, Func Offset: 0xf8
	// Line 878, Address: 0x1fc81c, Func Offset: 0xfc
	// Line 883, Address: 0x1fc820, Func Offset: 0x100
	// Line 884, Address: 0x1fc828, Func Offset: 0x108
	// Line 886, Address: 0x1fc840, Func Offset: 0x120
	// Func End, Address: 0x1fc85c, Func Offset: 0x13c
}

// xSGAddSaveClient__FP17st_XSAVEGAME_DATAUiPvPFPvP17st_XSAVEGAME_DATAPiPi_iPFPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT_i
// Start address: 0x1fc860
int32 xSGAddSaveClient(st_XSAVEGAME_DATA* xsgdata, uint32 clttag, void* cltdata, int32(*infofunc)(void*, st_XSAVEGAME_DATA*, int32*, int32*), int32(*procfunc)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*))
{
	int32 result;
	st_XSAVEGAME_CLIENT* clt;
	// Line 714, Address: 0x1fc860, Func Offset: 0
	// Line 722, Address: 0x1fc864, Func Offset: 0x4
	// Line 714, Address: 0x1fc868, Func Offset: 0x8
	// Line 715, Address: 0x1fc86c, Func Offset: 0xc
	// Line 714, Address: 0x1fc870, Func Offset: 0x10
	// Line 715, Address: 0x1fc894, Func Offset: 0x34
	// Line 722, Address: 0x1fc898, Func Offset: 0x38
	// Line 723, Address: 0x1fc8b0, Func Offset: 0x50
	// Line 725, Address: 0x1fc8bc, Func Offset: 0x5c
	// Line 736, Address: 0x1fc8c0, Func Offset: 0x60
	// Line 737, Address: 0x1fc8d4, Func Offset: 0x74
	// Line 740, Address: 0x1fc8dc, Func Offset: 0x7c
	// Line 764, Address: 0x1fc8e0, Func Offset: 0x80
	// Line 766, Address: 0x1fc8f4, Func Offset: 0x94
	// Line 767, Address: 0x1fc8f8, Func Offset: 0x98
	// Line 768, Address: 0x1fc8fc, Func Offset: 0x9c
	// Line 769, Address: 0x1fc900, Func Offset: 0xa0
	// Line 770, Address: 0x1fc904, Func Offset: 0xa4
	// Line 771, Address: 0x1fc908, Func Offset: 0xa8
	// Line 772, Address: 0x1fc90c, Func Offset: 0xac
	// Line 783, Address: 0x1fc910, Func Offset: 0xb0
	// Line 784, Address: 0x1fc918, Func Offset: 0xb8
	// Line 787, Address: 0x1fc930, Func Offset: 0xd0
	// Func End, Address: 0x1fc950, Func Offset: 0xf0
}

// xSGGameProgress__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fc950
int32 xSGGameProgress(st_XSAVEGAME_DATA* xsgdata, int32 gidx)
{
	int32 idx_thum;
	// Line 689, Address: 0x1fc950, Func Offset: 0
	// Line 694, Address: 0x1fc954, Func Offset: 0x4
	// Line 689, Address: 0x1fc958, Func Offset: 0x8
	// Line 694, Address: 0x1fc974, Func Offset: 0x24
	// Line 690, Address: 0x1fc97c, Func Offset: 0x2c
	// Line 694, Address: 0x1fc980, Func Offset: 0x30
	// Line 697, Address: 0x1fc9a8, Func Offset: 0x58
	// Line 700, Address: 0x1fc9c8, Func Offset: 0x78
	// Line 701, Address: 0x1fc9cc, Func Offset: 0x7c
	// Func End, Address: 0x1fc9e8, Func Offset: 0x98
}

// xSGGameThumbIndex__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fc9f0
int32 xSGGameThumbIndex(st_XSAVEGAME_DATA* xsgdata, int32 gidx)
{
	int32 idx_thum;
	// Line 673, Address: 0x1fc9f0, Func Offset: 0
	// Line 678, Address: 0x1fc9f4, Func Offset: 0x4
	// Line 673, Address: 0x1fc9f8, Func Offset: 0x8
	// Line 678, Address: 0x1fca14, Func Offset: 0x24
	// Line 674, Address: 0x1fca1c, Func Offset: 0x2c
	// Line 678, Address: 0x1fca20, Func Offset: 0x30
	// Line 681, Address: 0x1fca48, Func Offset: 0x58
	// Line 684, Address: 0x1fca68, Func Offset: 0x78
	// Line 685, Address: 0x1fca6c, Func Offset: 0x7c
	// Func End, Address: 0x1fca88, Func Offset: 0x98
}

// xSGGameLabel__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fca90
int8* xSGGameLabel(st_XSAVEGAME_DATA* xsgdata, int32 gidx)
{
	int8* da_name;
	st_XSAVEGAME_LEADER* lead;
	// Line 637, Address: 0x1fca90, Func Offset: 0
	// Line 642, Address: 0x1fca94, Func Offset: 0x4
	// Line 637, Address: 0x1fca98, Func Offset: 0x8
	// Line 642, Address: 0x1fcab4, Func Offset: 0x24
	// Line 638, Address: 0x1fcabc, Func Offset: 0x2c
	// Line 642, Address: 0x1fcac0, Func Offset: 0x30
	// Line 644, Address: 0x1fcae8, Func Offset: 0x58
	// Line 645, Address: 0x1fcb04, Func Offset: 0x74
	// Line 647, Address: 0x1fcb10, Func Offset: 0x80
	// Line 648, Address: 0x1fcb14, Func Offset: 0x84
	// Func End, Address: 0x1fcb30, Func Offset: 0xa0
}

// xSGGameModDate__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fcb30
int8* xSGGameModDate(st_XSAVEGAME_DATA* xsgdata, int32 gidx)
{
	int8* date;
	int8 da_date[32];
	// Line 612, Address: 0x1fcb30, Func Offset: 0
	// Line 616, Address: 0x1fcb34, Func Offset: 0x4
	// Line 612, Address: 0x1fcb38, Func Offset: 0x8
	// Line 618, Address: 0x1fcb3c, Func Offset: 0xc
	// Line 612, Address: 0x1fcb40, Func Offset: 0x10
	// Line 618, Address: 0x1fcb54, Func Offset: 0x24
	// Line 616, Address: 0x1fcb5c, Func Offset: 0x2c
	// Line 618, Address: 0x1fcb60, Func Offset: 0x30
	// Line 619, Address: 0x1fcb88, Func Offset: 0x58
	// Line 620, Address: 0x1fcbcc, Func Offset: 0x9c
	// Line 622, Address: 0x1fcbdc, Func Offset: 0xac
	// Line 625, Address: 0x1fcbe4, Func Offset: 0xb4
	// Line 626, Address: 0x1fcbf0, Func Offset: 0xc0
	// Line 629, Address: 0x1fcbf8, Func Offset: 0xc8
	// Line 631, Address: 0x1fcc0c, Func Offset: 0xdc
	// Line 634, Address: 0x1fcc10, Func Offset: 0xe0
	// Line 633, Address: 0x1fcc18, Func Offset: 0xe8
	// Line 634, Address: 0x1fcc1c, Func Offset: 0xec
	// Line 633, Address: 0x1fcc20, Func Offset: 0xf0
	// Line 634, Address: 0x1fcc24, Func Offset: 0xf4
	// Func End, Address: 0x1fcc30, Func Offset: 0x100
}

// xSGGameSize__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fcc30
int32 xSGGameSize(st_XSAVEGAME_DATA* xsgdata, int32 gidx)
{
	int32 size;
	// Line 593, Address: 0x1fcc30, Func Offset: 0
	// Line 597, Address: 0x1fcc34, Func Offset: 0x4
	// Line 593, Address: 0x1fcc38, Func Offset: 0x8
	// Line 597, Address: 0x1fcc54, Func Offset: 0x24
	// Line 594, Address: 0x1fcc5c, Func Offset: 0x2c
	// Line 597, Address: 0x1fcc60, Func Offset: 0x30
	// Line 598, Address: 0x1fcc88, Func Offset: 0x58
	// Line 599, Address: 0x1fcccc, Func Offset: 0x9c
	// Line 602, Address: 0x1fcce0, Func Offset: 0xb0
	// Line 603, Address: 0x1fcce4, Func Offset: 0xb4
	// Func End, Address: 0x1fcd00, Func Offset: 0xd0
}

// xSGGameIsEmpty__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fcd00
int32 xSGGameIsEmpty(st_XSAVEGAME_DATA* xsgdata, int32 gidx)
{
	// Line 560, Address: 0x1fcd00, Func Offset: 0
	// Line 562, Address: 0x1fcd04, Func Offset: 0x4
	// Line 560, Address: 0x1fcd08, Func Offset: 0x8
	// Line 562, Address: 0x1fcd24, Func Offset: 0x24
	// Line 574, Address: 0x1fcdb0, Func Offset: 0xb0
	// Line 588, Address: 0x1fcdb4, Func Offset: 0xb4
	// Line 574, Address: 0x1fcdb8, Func Offset: 0xb8
	// Line 588, Address: 0x1fcdbc, Func Offset: 0xbc
	// Line 574, Address: 0x1fcdc0, Func Offset: 0xc0
	// Line 588, Address: 0x1fcdc4, Func Offset: 0xc4
	// Func End, Address: 0x1fcdd8, Func Offset: 0xd8
}

// xSGGameSet__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fcde0
void xSGGameSet(st_XSAVEGAME_DATA* xsgdata, int32 gidx)
{
	// Line 553, Address: 0x1fcde0, Func Offset: 0
	// Func End, Address: 0x1fcde8, Func Offset: 0x8
}

// xSGCheckMemoryCard__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fcdf0
uint8 xSGCheckMemoryCard(st_XSAVEGAME_DATA* xsgdata, int32 index)
{
	// Line 531, Address: 0x1fcdf0, Func Offset: 0
	// Func End, Address: 0x1fcdf8, Func Offset: 0x8
}

// xSGTgtHaveRoomStartup__FP17st_XSAVEGAME_DATAiiiPiPiPi
// Start address: 0x1fce00
int32 xSGTgtHaveRoomStartup(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32 fsize, int32 slotidx, int32* bytesNeeded, int32* availOnDisk, int32* needFile)
{
	int32 isroom;
	int8 fname[256];
	// Line 507, Address: 0x1fce00, Func Offset: 0
	// Line 509, Address: 0x1fce04, Func Offset: 0x4
	// Line 507, Address: 0x1fce08, Func Offset: 0x8
	// Line 509, Address: 0x1fce0c, Func Offset: 0xc
	// Line 507, Address: 0x1fce10, Func Offset: 0x10
	// Line 509, Address: 0x1fce3c, Func Offset: 0x3c
	// Line 515, Address: 0x1fce5c, Func Offset: 0x5c
	// Line 516, Address: 0x1fce64, Func Offset: 0x64
	// Line 518, Address: 0x1fce88, Func Offset: 0x88
	// Line 521, Address: 0x1fce90, Func Offset: 0x90
	// Line 522, Address: 0x1fceac, Func Offset: 0xac
	// Line 527, Address: 0x1fced0, Func Offset: 0xd0
	// Func End, Address: 0x1fcef4, Func Offset: 0xf4
}

// xSGTgtHaveRoom__FP17st_XSAVEGAME_DATAiiiPiPiPi
// Start address: 0x1fcf00
int32 xSGTgtHaveRoom(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32 fsize, int32 slotidx, int32* bytesNeeded, int32* availOnDisk, int32* needFile)
{
	int32 isroom;
	int8 fname[256];
	// Line 482, Address: 0x1fcf00, Func Offset: 0
	// Line 484, Address: 0x1fcf04, Func Offset: 0x4
	// Line 482, Address: 0x1fcf08, Func Offset: 0x8
	// Line 484, Address: 0x1fcf0c, Func Offset: 0xc
	// Line 482, Address: 0x1fcf10, Func Offset: 0x10
	// Line 484, Address: 0x1fcf3c, Func Offset: 0x3c
	// Line 490, Address: 0x1fcf5c, Func Offset: 0x5c
	// Line 491, Address: 0x1fcf64, Func Offset: 0x64
	// Line 493, Address: 0x1fcf88, Func Offset: 0x88
	// Line 496, Address: 0x1fcf90, Func Offset: 0x90
	// Line 497, Address: 0x1fcfac, Func Offset: 0xac
	// Line 502, Address: 0x1fcfd0, Func Offset: 0xd0
	// Func End, Address: 0x1fcff4, Func Offset: 0xf4
}

// xSGTgtHasGameDir__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fd000
int32 xSGTgtHasGameDir(st_XSAVEGAME_DATA* xsgdata, int32 tidx)
{
	int32 rc;
	// Line 470, Address: 0x1fd000, Func Offset: 0
	// Line 472, Address: 0x1fd014, Func Offset: 0x14
	// Line 473, Address: 0x1fd01c, Func Offset: 0x1c
	// Line 474, Address: 0x1fd024, Func Offset: 0x24
	// Line 475, Address: 0x1fd054, Func Offset: 0x54
	// Line 477, Address: 0x1fd058, Func Offset: 0x58
	// Func End, Address: 0x1fd06c, Func Offset: 0x6c
}

// xSGTgtSelect__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fd070
int32 xSGTgtSelect(st_XSAVEGAME_DATA* xsgdata, int32 tidx)
{
	int32 result;
	// Line 455, Address: 0x1fd070, Func Offset: 0
	// Line 459, Address: 0x1fd088, Func Offset: 0x18
	// Line 460, Address: 0x1fd094, Func Offset: 0x24
	// Line 463, Address: 0x1fd09c, Func Offset: 0x2c
	// Line 464, Address: 0x1fd0c8, Func Offset: 0x58
	// Line 467, Address: 0x1fd0d8, Func Offset: 0x68
	// Line 468, Address: 0x1fd0dc, Func Offset: 0x6c
	// Func End, Address: 0x1fd0f4, Func Offset: 0x84
}

// xSGTgtFormatTgt__FP17st_XSAVEGAME_DATAiPi
// Start address: 0x1fd100
int32 xSGTgtFormatTgt(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32* canRecover)
{
	int32 result;
	// Line 435, Address: 0x1fd100, Func Offset: 0
	// Func End, Address: 0x1fd110, Func Offset: 0x10
}

// xSGTgtIsFormat__FP17st_XSAVEGAME_DATAiPi
// Start address: 0x1fd110
int32 xSGTgtIsFormat(st_XSAVEGAME_DATA* xsgdata, int32 tidx, int32* badEncode)
{
	int32 result;
	int32 rc;
	// Line 402, Address: 0x1fd110, Func Offset: 0
	// Line 409, Address: 0x1fd124, Func Offset: 0x14
	// Line 410, Address: 0x1fd134, Func Offset: 0x24
	// Line 412, Address: 0x1fd144, Func Offset: 0x34
	// Line 414, Address: 0x1fd14c, Func Offset: 0x3c
	// Line 417, Address: 0x1fd158, Func Offset: 0x48
	// Line 418, Address: 0x1fd164, Func Offset: 0x54
	// Line 425, Address: 0x1fd168, Func Offset: 0x58
	// Line 428, Address: 0x1fd180, Func Offset: 0x70
	// Func End, Address: 0x1fd194, Func Offset: 0x84
}

// xSGTgtPhysSlotIdx__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fd1a0
int32 xSGTgtPhysSlotIdx(st_XSAVEGAME_DATA* xsgdata, int32 tidx)
{
	// Line 364, Address: 0x1fd1a0, Func Offset: 0
	// Func End, Address: 0x1fd1a8, Func Offset: 0x8
}

// xSGTgtCount__FP17st_XSAVEGAME_DATAPi
// Start address: 0x1fd1b0
int32 xSGTgtCount(st_XSAVEGAME_DATA* xsgdata, int32* max)
{
	int32 cnt;
	// Line 357, Address: 0x1fd1b0, Func Offset: 0
	// Func End, Address: 0x1fd1b8, Func Offset: 0x8
}

// xSGDone__FP17st_XSAVEGAME_DATA
// Start address: 0x1fd1c0
int32 xSGDone(st_XSAVEGAME_DATA* xsgdata)
{
	int32 result;
	// Line 264, Address: 0x1fd1c0, Func Offset: 0
	// Line 269, Address: 0x1fd1d4, Func Offset: 0x14
	// Line 271, Address: 0x1fd1e4, Func Offset: 0x24
	// Line 286, Address: 0x1fd1ec, Func Offset: 0x2c
	// Line 287, Address: 0x1fd1f4, Func Offset: 0x34
	// Line 290, Address: 0x1fd204, Func Offset: 0x44
	// Line 293, Address: 0x1fd210, Func Offset: 0x50
	// Line 294, Address: 0x1fd21c, Func Offset: 0x5c
	// Line 296, Address: 0x1fd228, Func Offset: 0x68
	// Line 297, Address: 0x1fd230, Func Offset: 0x70
	// Line 298, Address: 0x1fd234, Func Offset: 0x74
	// Line 302, Address: 0x1fd238, Func Offset: 0x78
	// Line 303, Address: 0x1fd240, Func Offset: 0x80
	// Line 305, Address: 0x1fd24c, Func Offset: 0x8c
	// Line 306, Address: 0x1fd258, Func Offset: 0x98
	// Line 308, Address: 0x1fd264, Func Offset: 0xa4
	// Line 309, Address: 0x1fd26c, Func Offset: 0xac
	// Line 310, Address: 0x1fd270, Func Offset: 0xb0
	// Line 311, Address: 0x1fd274, Func Offset: 0xb4
	// Line 312, Address: 0x1fd278, Func Offset: 0xb8
	// Line 313, Address: 0x1fd27c, Func Offset: 0xbc
	// Line 312, Address: 0x1fd280, Func Offset: 0xc0
	// Line 315, Address: 0x1fd284, Func Offset: 0xc4
	// Line 317, Address: 0x1fd28c, Func Offset: 0xcc
	// Line 318, Address: 0x1fd294, Func Offset: 0xd4
	// Line 319, Address: 0x1fd298, Func Offset: 0xd8
	// Line 320, Address: 0x1fd29c, Func Offset: 0xdc
	// Line 330, Address: 0x1fd2a0, Func Offset: 0xe0
	// Line 333, Address: 0x1fd2b4, Func Offset: 0xf4
	// Line 335, Address: 0x1fd2c8, Func Offset: 0x108
	// Line 336, Address: 0x1fd2cc, Func Offset: 0x10c
	// Func End, Address: 0x1fd2e0, Func Offset: 0x120
}

// xSGInit__F16en_SAVEGAME_MODE
// Start address: 0x1fd2e0
st_XSAVEGAME_DATA* xSGInit(en_SAVEGAME_MODE mode)
{
	st_XSAVEGAME_DATA* xsgdata;
	// Line 205, Address: 0x1fd2e0, Func Offset: 0
	// Line 215, Address: 0x1fd2e4, Func Offset: 0x4
	// Line 205, Address: 0x1fd2e8, Func Offset: 0x8
	// Line 215, Address: 0x1fd2f8, Func Offset: 0x18
	// Line 207, Address: 0x1fd2fc, Func Offset: 0x1c
	// Line 215, Address: 0x1fd300, Func Offset: 0x20
	// Line 218, Address: 0x1fd308, Func Offset: 0x28
	// Line 229, Address: 0x1fd310, Func Offset: 0x30
	// Line 230, Address: 0x1fd31c, Func Offset: 0x3c
	// Line 235, Address: 0x1fd324, Func Offset: 0x44
	// Line 242, Address: 0x1fd330, Func Offset: 0x50
	// Line 238, Address: 0x1fd334, Func Offset: 0x54
	// Line 242, Address: 0x1fd338, Func Offset: 0x58
	// Line 238, Address: 0x1fd344, Func Offset: 0x64
	// Line 242, Address: 0x1fd348, Func Offset: 0x68
	// Line 246, Address: 0x1fd354, Func Offset: 0x74
	// Line 247, Address: 0x1fd360, Func Offset: 0x80
	// Line 249, Address: 0x1fd37c, Func Offset: 0x9c
	// Line 252, Address: 0x1fd388, Func Offset: 0xa8
	// Line 254, Address: 0x1fd3ac, Func Offset: 0xcc
	// Line 257, Address: 0x1fd3b0, Func Offset: 0xd0
	// Line 259, Address: 0x1fd3c4, Func Offset: 0xe4
	// Line 260, Address: 0x1fd3c8, Func Offset: 0xe8
	// Func End, Address: 0x1fd3dc, Func Offset: 0xfc
}

// xSGShutdown__Fv
// Start address: 0x1fd3e0
int32 xSGShutdown()
{
	// Line 182, Address: 0x1fd3e0, Func Offset: 0
	// Line 184, Address: 0x1fd3e8, Func Offset: 0x8
	// Line 187, Address: 0x1fd3f8, Func Offset: 0x18
	// Line 188, Address: 0x1fd400, Func Offset: 0x20
	// Line 195, Address: 0x1fd408, Func Offset: 0x28
	// Line 194, Address: 0x1fd40c, Func Offset: 0x2c
	// Line 195, Address: 0x1fd410, Func Offset: 0x30
	// Func End, Address: 0x1fd418, Func Offset: 0x38
}

// xSGStartup__Fv
// Start address: 0x1fd420
int32 xSGStartup()
{
	// Line 148, Address: 0x1fd420, Func Offset: 0
	// Line 150, Address: 0x1fd428, Func Offset: 0x8
	// Line 156, Address: 0x1fd438, Func Offset: 0x18
	// Line 159, Address: 0x1fd440, Func Offset: 0x20
	// Line 162, Address: 0x1fd448, Func Offset: 0x28
	// Line 174, Address: 0x1fd45c, Func Offset: 0x3c
	// Line 176, Address: 0x1fd460, Func Offset: 0x40
	// Line 179, Address: 0x1fd488, Func Offset: 0x68
	// Line 178, Address: 0x1fd48c, Func Offset: 0x6c
	// Line 179, Address: 0x1fd490, Func Offset: 0x70
	// Func End, Address: 0x1fd498, Func Offset: 0x78
}

