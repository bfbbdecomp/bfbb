typedef struct st_PACKER_READ_DATA;
typedef struct st_HIPLOADDATA;
typedef struct st_PACKER_ATOC_NODE;
typedef struct st_PACKER_LTOC_NODE;
typedef struct st_PACKER_ASSETTYPE;
typedef struct RwLLLink;
typedef struct st_PACKER_WRITE_DATA;
typedef struct st_PACKER_READ_FUNCS;
typedef struct st_XORDEREDARRAY;
typedef struct RwResEntry;
typedef struct st_PKR_ASSET_TOCINFO;
typedef enum en_LAYER_TYPE;
typedef enum en_READ_ASYNC_STATUS;
typedef struct st_HIPLOADFUNCS;
typedef enum en_GENERATE_ERROR;
typedef enum en_PKR_LAYER_LOAD_DEST;
typedef struct RwModuleInfo;

typedef void(*type_0)(void*, uint32);
typedef int32(*type_1)(st_PACKER_READ_DATA*, uint32);
typedef void(*type_2)(void*, uint32, void*, int8*);
typedef st_HIPLOADDATA*(*type_3)(int8*, int8*, int32);
typedef int32(*type_5)(st_PACKER_READ_DATA*, en_LAYER_TYPE);
typedef int32(*type_6)(void*, void*);
typedef void(*type_7)(st_HIPLOADDATA*);
typedef uint32(*type_9)(st_HIPLOADDATA*);
typedef int8*(*type_10)(st_PACKER_READ_DATA*, uint32);
typedef int32(*type_11)(void*, void*);
typedef uint32(*type_13)(st_HIPLOADDATA*);
typedef uint32(*type_14)(st_PACKER_READ_DATA*);
typedef void(*type_15)(st_HIPLOADDATA*);
typedef int32(*type_16)(st_PACKER_READ_DATA*, uint32, st_PKR_ASSET_TOCINFO*);
typedef int32(*type_17)(st_HIPLOADDATA*, int8*, int32);
typedef int32(*type_18)(uint32, en_GENERATE_ERROR, int8*, int8*);
typedef void(*type_19)(RwResEntry*);
typedef int32(*type_20)(st_PACKER_READ_DATA*, uint32, int32, st_PKR_ASSET_TOCINFO*);
typedef int32(*type_21)(st_HIPLOADDATA*, int16*, int32);
typedef int32(*type_22)(st_HIPLOADDATA*, int32*, int32);
typedef int32(*type_23)(st_PACKER_READ_DATA*, uint32);
typedef int32(*type_24)(void*, uint32, int8*, int8*);
typedef uint32(*type_25)(st_PACKER_READ_DATA*);
typedef int32(*type_26)(st_HIPLOADDATA*, float32*, int32);
typedef void(*type_28)(st_PACKER_READ_DATA*);
typedef int32(*type_29)(st_HIPLOADDATA*, int8*);
typedef void*(*type_30)(void*, uint32, void*, uint32, uint32*);
typedef int32(*type_31)(st_HIPLOADDATA*, int32, int32);
typedef void(*type_33)(st_HIPLOADDATA*, int32);
typedef void*(*type_34)(void*, uint32, void*, void*, uint32, uint32*);
typedef en_READ_ASYNC_STATUS(*type_36)(st_HIPLOADDATA*);
typedef void(*type_38)(RwResEntry*);
typedef st_PACKER_READ_DATA*(*type_40)(void*, int8*, uint32, int32*, st_PACKER_ASSETTYPE*);
typedef int32(*type_41)(void*, uint32, void*, int32);
typedef void(*type_43)(st_PACKER_READ_DATA*);
typedef int32(*type_45)(st_PACKER_READ_DATA*, en_LAYER_TYPE);
typedef void*(*type_47)(void*, uint32, void*, int32*, int32*);
typedef uint32(*type_48)(st_PACKER_READ_DATA*, uint32);
typedef void(*type_49)(void*, uint32, void*);
typedef void*(*type_50)(st_PACKER_READ_DATA*, uint32, int8*, void*);
typedef void*(*type_52)(st_PACKER_READ_DATA*, uint32, int32, uint32*);
typedef int32(*type_57)(st_PACKER_READ_DATA*, uint32);

typedef uint32 type_4[4096];
typedef st_XORDEREDARRAY type_8[129];
typedef int8 type_12[32];
typedef st_PACKER_READ_DATA type_27[16];
typedef int8 type_32[32];
typedef int8 type_35[32];
typedef int8 type_37[256];
typedef int8 type_39[32];
typedef int8 type_42[32];
typedef int8 type_44[256];
typedef int8 type_46[256];
typedef int8 type_51[256];
typedef int32 type_53[129];
typedef int8* type_54[11];
typedef int8 type_55[128];
typedef int8 type_56[128];

struct st_PACKER_READ_DATA
{
	st_PACKER_ASSETTYPE* types;
	void* userdata;
	uint32 opts;
	uint32 pkgver;
	int32 cltver;
	int32 subver;
	int32 compatver;
	st_HIPLOADDATA* pkg;
	uint32 base_sector;
	int32 lockid;
	int8 packfile[128];
	int32 asscnt;
	int32 laycnt;
	st_XORDEREDARRAY asstoc;
	st_XORDEREDARRAY laytoc;
	st_PACKER_ATOC_NODE* pool_anode;
	int32 pool_nextaidx;
	st_XORDEREDARRAY typelist[129];
	long32 time_made;
	long32 time_mod;
};

struct st_HIPLOADDATA
{
};

struct st_PACKER_ATOC_NODE
{
	uint32 aid;
	uint32 asstype;
	int32 d_off;
	int32 d_size;
	int32 d_pad;
	uint32 d_chksum;
	int32 assalign;
	int32 infoflag;
	int32 loadflag;
	int8* memloc;
	int32 x_size;
	int32 readcnt;
	int32 readrem;
	st_PACKER_ASSETTYPE* typeref;
	st_HIPLOADDATA* ownpkg;
	st_PACKER_READ_DATA* ownpr;
	int8 basename[32];
};

struct st_PACKER_LTOC_NODE
{
	en_LAYER_TYPE laytyp;
	st_XORDEREDARRAY assref;
	int32 flg_ldstat;
	int32 danglecnt;
	uint32 chksum;
	int32 laysize;
	int8* laymem;
	int8* laytru;
};

struct st_PACKER_ASSETTYPE
{
	uint32 typetag;
	uint32 tflags;
	int32 typalign;
	void*(*readXForm)(void*, uint32, void*, uint32, uint32*);
	void*(*writeXForm)(void*, uint32, void*, void*, uint32, uint32*);
	int32(*assetLoaded)(void*, uint32, void*, int32);
	void*(*makeData)(void*, uint32, void*, int32*, int32*);
	void(*cleanup)(void*, uint32, void*);
	void(*assetUnloaded)(void*, uint32);
	void(*writePeek)(void*, uint32, void*, int8*);
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct st_PACKER_WRITE_DATA
{
	st_PACKER_ASSETTYPE* types;
	void* userdata;
	int32 lockid;
	uint32 pkropt;
	int32 cltver;
	int8 packfile[256];
	int32 sectalign;
	int32 dassalign;
	st_XORDEREDARRAY asslist;
	st_XORDEREDARRAY laylist;
	int32 off_lg_asset;
	int32 off_lg_layer;
	int32 off_lg_xform;
	int8 hdrfile[256];
	int32(*hdrfunc)(void*, uint32, int8*, int8*);
	int32(*generrf)(uint32, en_GENERATE_ERROR, int8*, int8*);
};

struct st_PACKER_READ_FUNCS
{
	uint32 api_ver;
	st_PACKER_READ_DATA*(*Init)(void*, int8*, uint32, int32*, st_PACKER_ASSETTYPE*);
	void(*Done)(st_PACKER_READ_DATA*);
	int32(*LoadLayer)(st_PACKER_READ_DATA*, en_LAYER_TYPE);
	uint32(*GetAssetSize)(st_PACKER_READ_DATA*, uint32);
	void*(*LoadAsset)(st_PACKER_READ_DATA*, uint32, int8*, void*);
	void*(*AssetByType)(st_PACKER_READ_DATA*, uint32, int32, uint32*);
	int32(*AssetCount)(st_PACKER_READ_DATA*, uint32);
	int32(*IsAssetReady)(st_PACKER_READ_DATA*, uint32);
	int32(*SetActive)(st_PACKER_READ_DATA*, en_LAYER_TYPE);
	int8*(*AssetName)(st_PACKER_READ_DATA*, uint32);
	uint32(*GetBaseSector)(st_PACKER_READ_DATA*);
	int32(*GetAssetInfo)(st_PACKER_READ_DATA*, uint32, st_PKR_ASSET_TOCINFO*);
	int32(*GetAssetInfoByType)(st_PACKER_READ_DATA*, uint32, int32, st_PKR_ASSET_TOCINFO*);
	int32(*PkgHasAsset)(st_PACKER_READ_DATA*, uint32);
	uint32(*PkgTimeStamp)(st_PACKER_READ_DATA*);
	void(*PkgDisconnect)(st_PACKER_READ_DATA*);
};

struct st_XORDEREDARRAY
{
	void** list;
	int32 cnt;
	int32 max;
	int32 warnlvl;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct st_PKR_ASSET_TOCINFO
{
	uint32 aid;
	st_PACKER_ASSETTYPE* typeref;
	uint32 sector;
	uint32 plus_offset;
	uint32 size;
	void* mempos;
};

enum en_LAYER_TYPE
{
	PKR_LTYPE_ALL = 0xffffffff,
	PKR_LTYPE_DEFAULT,
	PKR_LTYPE_TEXTURE,
	PKR_LTYPE_BSP,
	PKR_LTYPE_MODEL,
	PKR_LTYPE_ANIMATION,
	PKR_LTYPE_VRAM,
	PKR_LTYPE_SRAM,
	PKR_LTYPE_SNDTOC,
	PKR_LTYPE_CUTSCENE,
	PKR_LTYPE_CUTSCENETOC,
	PKR_LTYPE_JSPINFO,
	PKR_LTYPE_NOMORE
};

enum en_READ_ASYNC_STATUS
{
	HIP_RDSTAT_NONE = 0xffffffff,
	HIP_RDSTAT_INPROG,
	HIP_RDSTAT_SUCCESS,
	HIP_RDSTAT_FAILED,
	HIP_RDSTAT_NOBYPASS,
	HIP_RDSTAT_NOASYNC
};

struct st_HIPLOADFUNCS
{
	st_HIPLOADDATA*(*create)(int8*, int8*, int32);
	void(*destroy)(st_HIPLOADDATA*);
	uint32(*basesector)(st_HIPLOADDATA*);
	uint32(*enter)(st_HIPLOADDATA*);
	void(*exit)(st_HIPLOADDATA*);
	int32(*readBytes)(st_HIPLOADDATA*, int8*, int32);
	int32(*readShorts)(st_HIPLOADDATA*, int16*, int32);
	int32(*readLongs)(st_HIPLOADDATA*, int32*, int32);
	int32(*readFloats)(st_HIPLOADDATA*, float32*, int32);
	int32(*readString)(st_HIPLOADDATA*, int8*);
	int32(*setBypass)(st_HIPLOADDATA*, int32, int32);
	void(*setSpot)(st_HIPLOADDATA*, int32);
	en_READ_ASYNC_STATUS(*pollRead)(st_HIPLOADDATA*);
};

enum en_GENERATE_ERROR
{
	PKR_GENERR_NONE,
	PKR_GENERR_PACKOPEN,
	PKR_GENERR_ASSETOPEN,
	PKR_GENERR_EMPTYASSET,
	PKR_GENERR_WRITEFAIL,
	PKR_GENERR_VIRTUAL,
	PKR_GENERR_DUPEASSET,
	PKR_GENERR_UNKNOWN
};

enum en_PKR_LAYER_LOAD_DEST
{
	PKR_LDDEST_SKIP,
	PKR_LDDEST_KEEPSTATIC,
	PKR_LDDEST_KEEPMALLOC,
	PKR_LDDEST_RWHANDOFF,
	PKR_LDDEST_NOMORE,
	PKR_LDDEST_FORCE = 0x7fffffff
};

struct RwModuleInfo
{
	int32 globalsOffset;
	int32 numInstances;
};

st_PACKER_READ_FUNCS g_pkr_read_funcmap_original;
st_PACKER_READ_FUNCS g_pkr_read_funcmap;
st_HIPLOADFUNCS* g_hiprf;
st_PACKER_READ_DATA g_readdatainst[16];
uint32 g_loadlock;
int32 pkr_sector_size;
int32 g_packinit;
int32 g_memalloc_pair;
int32 g_memalloc_runtot;
int32 g_memalloc_runfree;
int8* g_strz_layername[11];
RwResEntry* g_RWarena_resEntry;
RwResEntry* g_RWarena_resOwner;
int32 g_RWarena_bufsize;
RwModuleInfo resourcesModule;
uint32 ourGlobals[4096];
void(*PKR_special_loadbuf_killed)(RwResEntry*);
uint32 gActiveHeap;
int32(*OrdTest_R_AssetID)(void*, void*);
int32(*OrdComp_R_Asset)(void*, void*);

void* PKR_specialGet_loadbuf(st_PACKER_READ_DATA* pr, int32 amount, int32 align);
void PKR_special_loadbuf_killed();
void PKR_relmem(uint32 id, int32 blksize, void* memptr, int32 isTemp);
void* PKR_getmem(uint32 id, int32 amount, int32 align, int32 isTemp, int8** memtru);
void PKR_bld_typecnt(st_PACKER_READ_DATA* pr);
st_PACKER_ASSETTYPE* PKR_type2typeref(uint32 type, st_PACKER_ASSETTYPE* typelist);
int32 LOD_r_STRM(st_HIPLOADDATA* pkg);
int32 LOD_r_LHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_LTOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_ADBG(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr, st_PACKER_ATOC_NODE* assnode);
int32 LOD_r_AHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_ATOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_DICT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_PLAT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 ValidatePlatform(int8* plat, int8* vid, int8* lang, int8* title);
int32 LOD_r_PVER(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_PACK(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 OrdTest_R_AssetID(void* vkey, void* vitem);
int32 OrdComp_R_Asset(void* vkey, void* vitem);
int32 PKR_FRIEND_assetIsGameDup(uint32 aid, st_PACKER_READ_DATA* skippr, int32 oursize, uint32 ourtype, uint32 chksum);
int32 PKR_PkgHasAsset(st_PACKER_READ_DATA* pr, uint32 aid);
int32 PKR_GetAssetInfoByType(st_PACKER_READ_DATA* pr, uint32 type, int32 idx, st_PKR_ASSET_TOCINFO* tocinfo);
int32 PKR_GetAssetInfo(st_PACKER_READ_DATA* pr, uint32 aid, st_PKR_ASSET_TOCINFO* tocinfo);
uint32 PKR_GetBaseSector(st_PACKER_READ_DATA* pr);
int8* PKR_AssetName(st_PACKER_READ_DATA* pr, uint32 aid);
uint32 PKRAssetIDFromInst(void* asset_inst);
void PKR_Disconnect(st_PACKER_READ_DATA* pr);
uint32 PKR_getPackTimestamp(st_PACKER_READ_DATA* pr);
int32 PKR_IsAssetReady(st_PACKER_READ_DATA* pr, uint32 aid);
void* PKR_AssetByType(st_PACKER_READ_DATA* pr, uint32 type, int32 idx, uint32* size);
int32 PKR_AssetCount(st_PACKER_READ_DATA* pr, uint32 type);
uint32 PKR_GetAssetSize(st_PACKER_READ_DATA* pr, uint32 aid);
void* PKR_LoadAsset(st_PACKER_READ_DATA* pr, uint32 aid);
int32 PKR_LoadLayer();
void* PKR_FindAsset(st_PACKER_READ_DATA* pr, uint32 aid);
void PKR_xform_asset(st_PACKER_ATOC_NODE* assnode, int32 dumpable_layer);
void PKR_xformLayerAssets(st_PACKER_LTOC_NODE* laynode);
void PKR_updateLayerAssets(st_PACKER_LTOC_NODE* laynode);
int32 PKR_findNextLayerToLoad(st_PACKER_READ_DATA** work_on_pkg, st_PACKER_LTOC_NODE** next_layer);
void PKR_LayerMemRelease(st_PACKER_LTOC_NODE* layer);
int8* PKR_LayerMemReserve(st_PACKER_READ_DATA* pr, st_PACKER_LTOC_NODE* layer);
int32 PKR_LoadStep_Async();
int32 PKR_parse_TOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 PKR_SetActive(st_PACKER_READ_DATA* pr, en_LAYER_TYPE layer);
void PKR_ReadDone(st_PACKER_READ_DATA* pr);
st_PACKER_READ_DATA* PKR_ReadInit(void* userdata, int8* pkgfile, uint32 opts, int32* cltver, st_PACKER_ASSETTYPE* typelist);
int32 PKRLoadStep();
int32 PKRShutdown();
int32 PKRStartup();
st_PACKER_READ_FUNCS* PKRGetReadFuncs(int32 apiver);

// PKR_specialGet_loadbuf__FP19st_PACKER_READ_DATAii
// Start address: 0x1f7010
void* PKR_specialGet_loadbuf(st_PACKER_READ_DATA* pr, int32 amount, int32 align)
{
	void* da_mem;
	// Line 8393, Address: 0x1f7010, Func Offset: 0
	// Line 8399, Address: 0x1f702c, Func Offset: 0x1c
	// Line 8402, Address: 0x1f7034, Func Offset: 0x24
	// Line 8415, Address: 0x1f703c, Func Offset: 0x2c
	// Line 8420, Address: 0x1f705c, Func Offset: 0x4c
	// Line 8431, Address: 0x1f7064, Func Offset: 0x54
	// Line 8432, Address: 0x1f706c, Func Offset: 0x5c
	// Line 8449, Address: 0x1f7070, Func Offset: 0x60
	// Line 8450, Address: 0x1f7074, Func Offset: 0x64
	// Line 8451, Address: 0x1f7078, Func Offset: 0x68
	// Line 8450, Address: 0x1f707c, Func Offset: 0x6c
	// Line 8451, Address: 0x1f7088, Func Offset: 0x78
	// Line 8461, Address: 0x1f7094, Func Offset: 0x84
	// Line 8462, Address: 0x1f7098, Func Offset: 0x88
	// Func End, Address: 0x1f70b0, Func Offset: 0xa0
}

// PKR_special_loadbuf_killed__FP10RwResEntry
// Start address: 0x1f70b0
void PKR_special_loadbuf_killed()
{
	// Line 8390, Address: 0x1f70b0, Func Offset: 0
	// Func End, Address: 0x1f70b8, Func Offset: 0x8
}

// PKR_relmem__FUiiPvUii
// Start address: 0x1f70c0
void PKR_relmem(uint32 id, int32 blksize, void* memptr, int32 isTemp)
{
	// Line 7171, Address: 0x1f70c0, Func Offset: 0
	// Line 7179, Address: 0x1f70e4, Func Offset: 0x24
	// Line 7178, Address: 0x1f70ec, Func Offset: 0x2c
	// Line 7179, Address: 0x1f70f0, Func Offset: 0x30
	// Line 7178, Address: 0x1f70f8, Func Offset: 0x38
	// Line 7180, Address: 0x1f70fc, Func Offset: 0x3c
	// Line 7181, Address: 0x1f7110, Func Offset: 0x50
	// Line 7185, Address: 0x1f711c, Func Offset: 0x5c
	// Line 7186, Address: 0x1f7124, Func Offset: 0x64
	// Line 7199, Address: 0x1f712c, Func Offset: 0x6c
	// Line 7201, Address: 0x1f7148, Func Offset: 0x88
	// Line 7204, Address: 0x1f7154, Func Offset: 0x94
	// Line 7208, Address: 0x1f7158, Func Offset: 0x98
	// Func End, Address: 0x1f7174, Func Offset: 0xb4
}

// PKR_getmem__FUiiUiiiPPc
// Start address: 0x1f7180
void* PKR_getmem(uint32 id, int32 amount, int32 align, int32 isTemp, int8** memtru)
{
	void* memptr;
	// Line 7084, Address: 0x1f7180, Func Offset: 0
	// Line 7091, Address: 0x1f71a8, Func Offset: 0x28
	// Line 7118, Address: 0x1f71b8, Func Offset: 0x38
	// Line 7119, Address: 0x1f71c0, Func Offset: 0x40
	// Line 7120, Address: 0x1f71c8, Func Offset: 0x48
	// Line 7121, Address: 0x1f71d8, Func Offset: 0x58
	// Line 7122, Address: 0x1f71e8, Func Offset: 0x68
	// Line 7123, Address: 0x1f71f0, Func Offset: 0x70
	// Line 7130, Address: 0x1f7200, Func Offset: 0x80
	// Line 7135, Address: 0x1f7218, Func Offset: 0x98
	// Line 7134, Address: 0x1f721c, Func Offset: 0x9c
	// Line 7135, Address: 0x1f7220, Func Offset: 0xa0
	// Line 7134, Address: 0x1f7228, Func Offset: 0xa8
	// Line 7136, Address: 0x1f722c, Func Offset: 0xac
	// Line 7152, Address: 0x1f7240, Func Offset: 0xc0
	// Line 7156, Address: 0x1f724c, Func Offset: 0xcc
	// Line 7157, Address: 0x1f7250, Func Offset: 0xd0
	// Func End, Address: 0x1f7270, Func Offset: 0xf0
}

// PKR_bld_typecnt__FP19st_PACKER_READ_DATA
// Start address: 0x1f7270
void PKR_bld_typecnt(st_PACKER_READ_DATA* pr)
{
	st_PACKER_LTOC_NODE* laynode;
	st_PACKER_ATOC_NODE* assnode;
	int32 i;
	int32 j;
	int32 idx;
	int32 typcnt[129];
	st_XORDEREDARRAY* tmplist;
	uint32 lasttype;
	int32 lasttidx;
	// Line 6865, Address: 0x1f7270, Func Offset: 0
	// Line 6873, Address: 0x1f7274, Func Offset: 0x4
	// Line 6865, Address: 0x1f7278, Func Offset: 0x8
	// Line 6873, Address: 0x1f7298, Func Offset: 0x28
	// Line 6865, Address: 0x1f729c, Func Offset: 0x2c
	// Line 6873, Address: 0x1f72a4, Func Offset: 0x34
	// Line 6897, Address: 0x1f72c4, Func Offset: 0x54
	// Line 6876, Address: 0x1f72c8, Func Offset: 0x58
	// Line 6877, Address: 0x1f72cc, Func Offset: 0x5c
	// Line 6897, Address: 0x1f72d0, Func Offset: 0x60
	// Line 6898, Address: 0x1f72e8, Func Offset: 0x78
	// Line 6901, Address: 0x1f72f4, Func Offset: 0x84
	// Line 6902, Address: 0x1f7308, Func Offset: 0x98
	// Line 6904, Address: 0x1f730c, Func Offset: 0x9c
	// Line 6902, Address: 0x1f7310, Func Offset: 0xa0
	// Line 6904, Address: 0x1f731c, Func Offset: 0xac
	// Line 6908, Address: 0x1f7328, Func Offset: 0xb8
	// Line 6915, Address: 0x1f7334, Func Offset: 0xc4
	// Line 6918, Address: 0x1f7348, Func Offset: 0xd8
	// Line 6920, Address: 0x1f7354, Func Offset: 0xe4
	// Line 6923, Address: 0x1f7388, Func Offset: 0x118
	// Line 6925, Address: 0x1f738c, Func Offset: 0x11c
	// Line 6929, Address: 0x1f7390, Func Offset: 0x120
	// Line 6930, Address: 0x1f7398, Func Offset: 0x128
	// Line 6933, Address: 0x1f73a0, Func Offset: 0x130
	// Line 6934, Address: 0x1f73a8, Func Offset: 0x138
	// Line 6935, Address: 0x1f73b0, Func Offset: 0x140
	// Line 6937, Address: 0x1f73c4, Func Offset: 0x154
	// Line 6938, Address: 0x1f73e0, Func Offset: 0x170
	// Line 6941, Address: 0x1f73f8, Func Offset: 0x188
	// Line 6944, Address: 0x1f740c, Func Offset: 0x19c
	// Line 6951, Address: 0x1f7414, Func Offset: 0x1a4
	// Line 6952, Address: 0x1f7434, Func Offset: 0x1c4
	// Line 6951, Address: 0x1f7440, Func Offset: 0x1d0
	// Line 6952, Address: 0x1f7444, Func Offset: 0x1d4
	// Line 6956, Address: 0x1f744c, Func Offset: 0x1dc
	// Line 6957, Address: 0x1f7460, Func Offset: 0x1f0
	// Line 6960, Address: 0x1f746c, Func Offset: 0x1fc
	// Line 6961, Address: 0x1f7480, Func Offset: 0x210
	// Line 6963, Address: 0x1f7484, Func Offset: 0x214
	// Line 6961, Address: 0x1f7488, Func Offset: 0x218
	// Line 6963, Address: 0x1f7494, Func Offset: 0x224
	// Line 6964, Address: 0x1f74a0, Func Offset: 0x230
	// Line 6968, Address: 0x1f74ac, Func Offset: 0x23c
	// Line 6971, Address: 0x1f74c0, Func Offset: 0x250
	// Line 6973, Address: 0x1f74c8, Func Offset: 0x258
	// Line 6971, Address: 0x1f74cc, Func Offset: 0x25c
	// Line 6973, Address: 0x1f74d0, Func Offset: 0x260
	// Line 6986, Address: 0x1f7500, Func Offset: 0x290
	// Line 6988, Address: 0x1f7520, Func Offset: 0x2b0
	// Line 6989, Address: 0x1f7538, Func Offset: 0x2c8
	// Line 6999, Address: 0x1f7550, Func Offset: 0x2e0
	// Func End, Address: 0x1f7580, Func Offset: 0x310
}

// PKR_type2typeref__FUiP19st_PACKER_ASSETTYPE
// Start address: 0x1f7580
st_PACKER_ASSETTYPE* PKR_type2typeref(uint32 type, st_PACKER_ASSETTYPE* typelist)
{
	st_PACKER_ASSETTYPE* da_type;
	st_PACKER_ASSETTYPE* tmptype;
	// Line 6817, Address: 0x1f7580, Func Offset: 0
	// Line 6825, Address: 0x1f758c, Func Offset: 0xc
	// Line 6826, Address: 0x1f7594, Func Offset: 0x14
	// Line 6827, Address: 0x1f75a0, Func Offset: 0x20
	// Line 6829, Address: 0x1f75ac, Func Offset: 0x2c
	// Line 6830, Address: 0x1f75b4, Func Offset: 0x34
	// Line 6833, Address: 0x1f75b8, Func Offset: 0x38
	// Line 6836, Address: 0x1f75bc, Func Offset: 0x3c
	// Line 6840, Address: 0x1f75c8, Func Offset: 0x48
	// Line 6841, Address: 0x1f75d0, Func Offset: 0x50
	// Line 6845, Address: 0x1f75d8, Func Offset: 0x58
	// Line 6846, Address: 0x1f75dc, Func Offset: 0x5c
	// Func End, Address: 0x1f75ec, Func Offset: 0x6c
}

// LOD_r_STRM__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f75f0
int32 LOD_r_STRM(st_HIPLOADDATA* pkg)
{
	uint32 cid;
	// Line 5118, Address: 0x1f75f0, Func Offset: 0
	// Line 5127, Address: 0x1f75fc, Func Offset: 0xc
	// Line 5128, Address: 0x1f760c, Func Offset: 0x1c
	// Line 5129, Address: 0x1f7618, Func Offset: 0x28
	// Line 5130, Address: 0x1f763c, Func Offset: 0x4c
	// Line 5132, Address: 0x1f7640, Func Offset: 0x50
	// Line 5143, Address: 0x1f765c, Func Offset: 0x6c
	// Line 5146, Address: 0x1f7660, Func Offset: 0x70
	// Line 5147, Address: 0x1f7670, Func Offset: 0x80
	// Line 5149, Address: 0x1f7680, Func Offset: 0x90
	// Line 5152, Address: 0x1f7688, Func Offset: 0x98
	// Line 5151, Address: 0x1f7690, Func Offset: 0xa0
	// Line 5152, Address: 0x1f7694, Func Offset: 0xa4
	// Func End, Address: 0x1f769c, Func Offset: 0xac
}

// LOD_r_LHDR__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f76a0
int32 LOD_r_LHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	uint32 cid;
	int32 ival;
	en_LAYER_TYPE laytyp;
	int32 refcnt;
	int32 idx;
	int32 i;
	st_PACKER_LTOC_NODE* laynode;
	st_PACKER_ATOC_NODE* assnode;
	// Line 4915, Address: 0x1f76a0, Func Offset: 0
	// Line 4932, Address: 0x1f76a4, Func Offset: 0x4
	// Line 4915, Address: 0x1f76a8, Func Offset: 0x8
	// Line 4932, Address: 0x1f76c4, Func Offset: 0x24
	// Line 4919, Address: 0x1f76cc, Func Offset: 0x2c
	// Line 4921, Address: 0x1f76d0, Func Offset: 0x30
	// Line 4932, Address: 0x1f76d4, Func Offset: 0x34
	// Line 4937, Address: 0x1f76e0, Func Offset: 0x40
	// Line 4933, Address: 0x1f76e8, Func Offset: 0x48
	// Line 4937, Address: 0x1f76ec, Func Offset: 0x4c
	// Line 4988, Address: 0x1f76fc, Func Offset: 0x5c
	// Line 4989, Address: 0x1f7760, Func Offset: 0xc0
	// Line 4997, Address: 0x1f776c, Func Offset: 0xcc
	// Line 4998, Address: 0x1f7780, Func Offset: 0xe0
	// Line 5012, Address: 0x1f7798, Func Offset: 0xf8
	// Line 5018, Address: 0x1f77ac, Func Offset: 0x10c
	// Line 5021, Address: 0x1f77b0, Func Offset: 0x110
	// Line 5018, Address: 0x1f77b4, Func Offset: 0x114
	// Line 5021, Address: 0x1f77c0, Func Offset: 0x120
	// Line 5030, Address: 0x1f77c8, Func Offset: 0x128
	// Line 5032, Address: 0x1f77d8, Func Offset: 0x138
	// Line 5033, Address: 0x1f77ec, Func Offset: 0x14c
	// Line 5036, Address: 0x1f77f8, Func Offset: 0x158
	// Line 5041, Address: 0x1f7808, Func Offset: 0x168
	// Line 5044, Address: 0x1f7824, Func Offset: 0x184
	// Line 5047, Address: 0x1f782c, Func Offset: 0x18c
	// Line 5052, Address: 0x1f7838, Func Offset: 0x198
	// Line 5053, Address: 0x1f7848, Func Offset: 0x1a8
	// Line 5054, Address: 0x1f7850, Func Offset: 0x1b0
	// Line 5057, Address: 0x1f7868, Func Offset: 0x1c8
	// Line 5064, Address: 0x1f789c, Func Offset: 0x1fc
	// Line 5067, Address: 0x1f78a0, Func Offset: 0x200
	// Line 5068, Address: 0x1f78b0, Func Offset: 0x210
	// Line 5069, Address: 0x1f78c0, Func Offset: 0x220
	// Line 5073, Address: 0x1f78c8, Func Offset: 0x228
	// Line 5072, Address: 0x1f78d0, Func Offset: 0x230
	// Line 5073, Address: 0x1f78d4, Func Offset: 0x234
	// Func End, Address: 0x1f78ec, Func Offset: 0x24c
}

// LOD_r_LTOC__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f78f0
int32 LOD_r_LTOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	uint32 cid;
	// Line 4843, Address: 0x1f78f0, Func Offset: 0
	// Line 4852, Address: 0x1f7904, Func Offset: 0x14
	// Line 4853, Address: 0x1f7914, Func Offset: 0x24
	// Line 4854, Address: 0x1f7920, Func Offset: 0x30
	// Line 4855, Address: 0x1f7944, Func Offset: 0x54
	// Line 4857, Address: 0x1f7948, Func Offset: 0x58
	// Line 4858, Address: 0x1f7964, Func Offset: 0x74
	// Line 4859, Address: 0x1f796c, Func Offset: 0x7c
	// Line 4861, Address: 0x1f7970, Func Offset: 0x80
	// Line 4868, Address: 0x1f797c, Func Offset: 0x8c
	// Line 4871, Address: 0x1f7980, Func Offset: 0x90
	// Line 4872, Address: 0x1f7990, Func Offset: 0xa0
	// Line 4874, Address: 0x1f79a0, Func Offset: 0xb0
	// Line 4877, Address: 0x1f79a8, Func Offset: 0xb8
	// Line 4876, Address: 0x1f79b0, Func Offset: 0xc0
	// Line 4877, Address: 0x1f79b4, Func Offset: 0xc4
	// Func End, Address: 0x1f79c0, Func Offset: 0xd0
}

// LOD_r_ADBG__FP14st_HIPLOADDATAP19st_PACKER_READ_DATAP19st_PACKER_ATOC_NODE
// Start address: 0x1f79c0
int32 LOD_r_ADBG(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr, st_PACKER_ATOC_NODE* assnode)
{
	int32 ival;
	int8 tmpbuf[256];
	// Line 4786, Address: 0x1f79c0, Func Offset: 0
	// Line 4790, Address: 0x1f79c4, Func Offset: 0x4
	// Line 4786, Address: 0x1f79c8, Func Offset: 0x8
	// Line 4790, Address: 0x1f79cc, Func Offset: 0xc
	// Line 4786, Address: 0x1f79d0, Func Offset: 0x10
	// Line 4790, Address: 0x1f79e8, Func Offset: 0x28
	// Line 4796, Address: 0x1f7a08, Func Offset: 0x48
	// Line 4797, Address: 0x1f7a20, Func Offset: 0x60
	// Line 4802, Address: 0x1f7a24, Func Offset: 0x64
	// Line 4797, Address: 0x1f7a28, Func Offset: 0x68
	// Line 4802, Address: 0x1f7a2c, Func Offset: 0x6c
	// Line 4804, Address: 0x1f7a3c, Func Offset: 0x7c
	// Line 4805, Address: 0x1f7a4c, Func Offset: 0x8c
	// Line 4812, Address: 0x1f7a50, Func Offset: 0x90
	// Line 4808, Address: 0x1f7a58, Func Offset: 0x98
	// Line 4812, Address: 0x1f7a5c, Func Offset: 0x9c
	// Line 4819, Address: 0x1f7a68, Func Offset: 0xa8
	// Line 4822, Address: 0x1f7a78, Func Offset: 0xb8
	// Line 4825, Address: 0x1f7a90, Func Offset: 0xd0
	// Line 4833, Address: 0x1f7a98, Func Offset: 0xd8
	// Line 4832, Address: 0x1f7aa0, Func Offset: 0xe0
	// Line 4833, Address: 0x1f7aa4, Func Offset: 0xe4
	// Func End, Address: 0x1f7ab4, Func Offset: 0xf4
}

// LOD_r_AHDR__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f7ac0
int32 LOD_r_AHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	uint32 cid;
	int32 ival;
	int32 isdup;
	// Line 4560, Address: 0x1f7ac0, Func Offset: 0
	// Line 4577, Address: 0x1f7ac4, Func Offset: 0x4
	// Line 4560, Address: 0x1f7ac8, Func Offset: 0x8
	// Line 4577, Address: 0x1f7ae4, Func Offset: 0x24
	// Line 4564, Address: 0x1f7ae8, Func Offset: 0x28
	// Line 4577, Address: 0x1f7aec, Func Offset: 0x2c
	// Line 4650, Address: 0x1f7af8, Func Offset: 0x38
	// Line 4653, Address: 0x1f7b30, Func Offset: 0x70
	// Line 4651, Address: 0x1f7b34, Func Offset: 0x74
	// Line 4653, Address: 0x1f7b38, Func Offset: 0x78
	// Line 4662, Address: 0x1f7b44, Func Offset: 0x84
	// Line 4664, Address: 0x1f7b5c, Func Offset: 0x9c
	// Line 4665, Address: 0x1f7b64, Func Offset: 0xa4
	// Line 4668, Address: 0x1f7b74, Func Offset: 0xb4
	// Line 4670, Address: 0x1f7b8c, Func Offset: 0xcc
	// Line 4674, Address: 0x1f7b90, Func Offset: 0xd0
	// Line 4670, Address: 0x1f7b98, Func Offset: 0xd8
	// Line 4674, Address: 0x1f7b9c, Func Offset: 0xdc
	// Line 4676, Address: 0x1f7bac, Func Offset: 0xec
	// Line 4677, Address: 0x1f7bb4, Func Offset: 0xf4
	// Line 4678, Address: 0x1f7bbc, Func Offset: 0xfc
	// Line 4680, Address: 0x1f7bc0, Func Offset: 0x100
	// Line 4683, Address: 0x1f7be0, Func Offset: 0x120
	// Line 4685, Address: 0x1f7bf8, Func Offset: 0x138
	// Line 4688, Address: 0x1f7bfc, Func Offset: 0x13c
	// Line 4685, Address: 0x1f7c04, Func Offset: 0x144
	// Line 4688, Address: 0x1f7c08, Func Offset: 0x148
	// Line 4689, Address: 0x1f7c18, Func Offset: 0x158
	// Line 4707, Address: 0x1f7c20, Func Offset: 0x160
	// Line 4708, Address: 0x1f7c30, Func Offset: 0x170
	// Line 4709, Address: 0x1f7c38, Func Offset: 0x178
	// Line 4712, Address: 0x1f7c50, Func Offset: 0x190
	// Line 4722, Address: 0x1f7c60, Func Offset: 0x1a0
	// Line 4723, Address: 0x1f7c70, Func Offset: 0x1b0
	// Line 4724, Address: 0x1f7c80, Func Offset: 0x1c0
	// Line 4740, Address: 0x1f7c88, Func Offset: 0x1c8
	// Line 4744, Address: 0x1f7ca4, Func Offset: 0x1e4
	// Line 4772, Address: 0x1f7cc0, Func Offset: 0x200
	// Line 4771, Address: 0x1f7cc8, Func Offset: 0x208
	// Line 4772, Address: 0x1f7ccc, Func Offset: 0x20c
	// Func End, Address: 0x1f7ce0, Func Offset: 0x220
}

// LOD_r_ATOC__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f7ce0
int32 LOD_r_ATOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	uint32 cid;
	// Line 4479, Address: 0x1f7ce0, Func Offset: 0
	// Line 4491, Address: 0x1f7cf4, Func Offset: 0x14
	// Line 4492, Address: 0x1f7d04, Func Offset: 0x24
	// Line 4493, Address: 0x1f7d10, Func Offset: 0x30
	// Line 4494, Address: 0x1f7d34, Func Offset: 0x54
	// Line 4496, Address: 0x1f7d38, Func Offset: 0x58
	// Line 4497, Address: 0x1f7d54, Func Offset: 0x74
	// Line 4498, Address: 0x1f7d5c, Func Offset: 0x7c
	// Line 4500, Address: 0x1f7d60, Func Offset: 0x80
	// Line 4507, Address: 0x1f7d6c, Func Offset: 0x8c
	// Line 4510, Address: 0x1f7d70, Func Offset: 0x90
	// Line 4511, Address: 0x1f7d80, Func Offset: 0xa0
	// Line 4513, Address: 0x1f7d90, Func Offset: 0xb0
	// Line 4519, Address: 0x1f7d98, Func Offset: 0xb8
	// Line 4518, Address: 0x1f7da0, Func Offset: 0xc0
	// Line 4519, Address: 0x1f7da4, Func Offset: 0xc4
	// Func End, Address: 0x1f7db0, Func Offset: 0xd0
}

// LOD_r_DICT__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f7db0
int32 LOD_r_DICT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	uint32 cid;
	// Line 4427, Address: 0x1f7db0, Func Offset: 0
	// Line 4436, Address: 0x1f7dc4, Func Offset: 0x14
	// Line 4437, Address: 0x1f7dd4, Func Offset: 0x24
	// Line 4438, Address: 0x1f7de0, Func Offset: 0x30
	// Line 4439, Address: 0x1f7e04, Func Offset: 0x54
	// Line 4441, Address: 0x1f7e08, Func Offset: 0x58
	// Line 4448, Address: 0x1f7e14, Func Offset: 0x64
	// Line 4451, Address: 0x1f7e24, Func Offset: 0x74
	// Line 4452, Address: 0x1f7e2c, Func Offset: 0x7c
	// Line 4454, Address: 0x1f7e30, Func Offset: 0x80
	// Line 4461, Address: 0x1f7e3c, Func Offset: 0x8c
	// Line 4464, Address: 0x1f7e40, Func Offset: 0x90
	// Line 4465, Address: 0x1f7e50, Func Offset: 0xa0
	// Line 4466, Address: 0x1f7e60, Func Offset: 0xb0
	// Line 4469, Address: 0x1f7e68, Func Offset: 0xb8
	// Line 4468, Address: 0x1f7e70, Func Offset: 0xc0
	// Line 4469, Address: 0x1f7e74, Func Offset: 0xc4
	// Func End, Address: 0x1f7e80, Func Offset: 0xd0
}

// LOD_r_PLAT__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f7e80
int32 LOD_r_PLAT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	int32 result;
	int32 plattag;
	int8 platname[32];
	int8 vidname[32];
	int8 langname[32];
	int8 titlename[32];
	int32 n;
	int32 rc;
	// Line 4382, Address: 0x1f7e80, Func Offset: 0
	// Line 4386, Address: 0x1f7e84, Func Offset: 0x4
	// Line 4382, Address: 0x1f7e88, Func Offset: 0x8
	// Line 4386, Address: 0x1f7e8c, Func Offset: 0xc
	// Line 4382, Address: 0x1f7e90, Func Offset: 0x10
	// Line 4385, Address: 0x1f7ea4, Func Offset: 0x24
	// Line 4386, Address: 0x1f7ea8, Func Offset: 0x28
	// Line 4387, Address: 0x1f7ec8, Func Offset: 0x48
	// Line 4388, Address: 0x1f7eec, Func Offset: 0x6c
	// Line 4389, Address: 0x1f7f10, Func Offset: 0x90
	// Line 4393, Address: 0x1f7f34, Func Offset: 0xb4
	// Line 4395, Address: 0x1f7f4c, Func Offset: 0xcc
	// Line 4398, Address: 0x1f7f60, Func Offset: 0xe0
	// Line 4401, Address: 0x1f7f74, Func Offset: 0xf4
	// Line 4404, Address: 0x1f7f88, Func Offset: 0x108
	// Line 4406, Address: 0x1f7f9c, Func Offset: 0x11c
	// Line 4409, Address: 0x1f7fb0, Func Offset: 0x130
	// Line 4411, Address: 0x1f7fd0, Func Offset: 0x150
	// Line 4416, Address: 0x1f7fe0, Func Offset: 0x160
	// Line 4417, Address: 0x1f7fe4, Func Offset: 0x164
	// Func End, Address: 0x1f7ffc, Func Offset: 0x17c
}

// ValidatePlatform__FP14st_HIPLOADDATAP19st_PACKER_READ_DATAiPcPcPcPc
// Start address: 0x1f8000
int32 ValidatePlatform(int8* plat, int8* vid, int8* lang, int8* title)
{
	int8 fullname[128];
	int32 rc;
	// Line 4250, Address: 0x1f8000, Func Offset: 0
	// Line 4254, Address: 0x1f8004, Func Offset: 0x4
	// Line 4250, Address: 0x1f8008, Func Offset: 0x8
	// Line 4254, Address: 0x1f800c, Func Offset: 0xc
	// Line 4250, Address: 0x1f8010, Func Offset: 0x10
	// Line 4254, Address: 0x1f802c, Func Offset: 0x2c
	// Line 4255, Address: 0x1f804c, Func Offset: 0x4c
	// Line 4272, Address: 0x1f806c, Func Offset: 0x6c
	// Line 4277, Address: 0x1f80c8, Func Offset: 0xc8
	// Line 4284, Address: 0x1f8110, Func Offset: 0x110
	// Line 4290, Address: 0x1f8188, Func Offset: 0x188
	// Line 4301, Address: 0x1f81e8, Func Offset: 0x1e8
	// Line 4308, Address: 0x1f8204, Func Offset: 0x204
	// Line 4316, Address: 0x1f8218, Func Offset: 0x218
	// Line 4323, Address: 0x1f8234, Func Offset: 0x234
	// Line 4329, Address: 0x1f8248, Func Offset: 0x248
	// Line 4338, Address: 0x1f8264, Func Offset: 0x264
	// Line 4373, Address: 0x1f8278, Func Offset: 0x278
	// Line 4376, Address: 0x1f8294, Func Offset: 0x294
	// Line 4379, Address: 0x1f8298, Func Offset: 0x298
	// Func End, Address: 0x1f82b4, Func Offset: 0x2b4
}

// LOD_r_PVER__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f82c0
int32 LOD_r_PVER(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	int32 ver;
	int32 amt;
	// Line 4048, Address: 0x1f82c0, Func Offset: 0
	// Line 4057, Address: 0x1f82c4, Func Offset: 0x4
	// Line 4048, Address: 0x1f82c8, Func Offset: 0x8
	// Line 4057, Address: 0x1f82d8, Func Offset: 0x18
	// Line 4051, Address: 0x1f82e0, Func Offset: 0x20
	// Line 4057, Address: 0x1f82e4, Func Offset: 0x24
	// Line 4058, Address: 0x1f82f0, Func Offset: 0x30
	// Line 4066, Address: 0x1f82f4, Func Offset: 0x34
	// Line 4067, Address: 0x1f82f8, Func Offset: 0x38
	// Line 4058, Address: 0x1f8300, Func Offset: 0x40
	// Line 4066, Address: 0x1f8304, Func Offset: 0x44
	// Line 4067, Address: 0x1f8308, Func Offset: 0x48
	// Line 4071, Address: 0x1f8318, Func Offset: 0x58
	// Line 4074, Address: 0x1f831c, Func Offset: 0x5c
	// Line 4075, Address: 0x1f8320, Func Offset: 0x60
	// Line 4071, Address: 0x1f8328, Func Offset: 0x68
	// Line 4074, Address: 0x1f832c, Func Offset: 0x6c
	// Line 4075, Address: 0x1f8330, Func Offset: 0x70
	// Line 4076, Address: 0x1f8340, Func Offset: 0x80
	// Line 4079, Address: 0x1f834c, Func Offset: 0x8c
	// Line 4080, Address: 0x1f8358, Func Offset: 0x98
	// Line 4089, Address: 0x1f8360, Func Offset: 0xa0
	// Line 4088, Address: 0x1f8368, Func Offset: 0xa8
	// Line 4089, Address: 0x1f836c, Func Offset: 0xac
	// Func End, Address: 0x1f8378, Func Offset: 0xb8
}

// LOD_r_PACK__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f8380
int32 LOD_r_PACK(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	uint32 cid;
	// Line 3986, Address: 0x1f8380, Func Offset: 0
	// Line 3995, Address: 0x1f8394, Func Offset: 0x14
	// Line 3996, Address: 0x1f83a4, Func Offset: 0x24
	// Line 3997, Address: 0x1f83b0, Func Offset: 0x30
	// Line 3998, Address: 0x1f840c, Func Offset: 0x8c
	// Line 4000, Address: 0x1f8410, Func Offset: 0x90
	// Line 4001, Address: 0x1f841c, Func Offset: 0x9c
	// Line 4002, Address: 0x1f8424, Func Offset: 0xa4
	// Line 4004, Address: 0x1f8428, Func Offset: 0xa8
	// Line 4005, Address: 0x1f8444, Func Offset: 0xc4
	// Line 4006, Address: 0x1f844c, Func Offset: 0xcc
	// Line 4008, Address: 0x1f8450, Func Offset: 0xd0
	// Line 4009, Address: 0x1f84dc, Func Offset: 0x15c
	// Line 4010, Address: 0x1f84e4, Func Offset: 0x164
	// Line 4012, Address: 0x1f84e8, Func Offset: 0x168
	// Line 4013, Address: 0x1f8554, Func Offset: 0x1d4
	// Line 4014, Address: 0x1f855c, Func Offset: 0x1dc
	// Line 4016, Address: 0x1f8560, Func Offset: 0x1e0
	// Line 4017, Address: 0x1f8580, Func Offset: 0x200
	// Line 4020, Address: 0x1f8588, Func Offset: 0x208
	// Line 4027, Address: 0x1f8594, Func Offset: 0x214
	// Line 4030, Address: 0x1f8598, Func Offset: 0x218
	// Line 4031, Address: 0x1f85a8, Func Offset: 0x228
	// Line 4032, Address: 0x1f85b8, Func Offset: 0x238
	// Line 4035, Address: 0x1f85c0, Func Offset: 0x240
	// Line 4034, Address: 0x1f85c8, Func Offset: 0x248
	// Line 4035, Address: 0x1f85cc, Func Offset: 0x24c
	// Func End, Address: 0x1f85d8, Func Offset: 0x258
}

// OrdTest_R_AssetID__FPCvPv
// Start address: 0x1f85e0
int32 OrdTest_R_AssetID(void* vkey, void* vitem)
{
	int32 rc;
	uint32 key;
	// Line 3208, Address: 0x1f85e0, Func Offset: 0
	// Line 3215, Address: 0x1f85e4, Func Offset: 0x4
	// Line 3216, Address: 0x1f85f8, Func Offset: 0x18
	// Line 3217, Address: 0x1f8610, Func Offset: 0x30
	// Line 3220, Address: 0x1f8618, Func Offset: 0x38
	// Func End, Address: 0x1f8620, Func Offset: 0x40
}

// OrdComp_R_Asset__FPvPv
// Start address: 0x1f8620
int32 OrdComp_R_Asset(void* vkey, void* vitem)
{
	int32 rc;
	// Line 3191, Address: 0x1f8620, Func Offset: 0
	// Line 3197, Address: 0x1f8628, Func Offset: 0x8
	// Line 3198, Address: 0x1f8640, Func Offset: 0x20
	// Line 3199, Address: 0x1f8658, Func Offset: 0x38
	// Line 3202, Address: 0x1f8660, Func Offset: 0x40
	// Func End, Address: 0x1f8668, Func Offset: 0x48
}

// PKR_FRIEND_assetIsGameDup__FUiPC19st_PACKER_READ_DATAiUiUiPc
// Start address: 0x1f8670
int32 PKR_FRIEND_assetIsGameDup(uint32 aid, st_PACKER_READ_DATA* skippr, int32 oursize, uint32 ourtype, uint32 chksum)
{
	int32 is_dup;
	st_PACKER_ATOC_NODE* tmp_ass;
	int32 i;
	int32 idx;
	// Line 2896, Address: 0x1f8670, Func Offset: 0
	// Line 2915, Address: 0x1f8674, Func Offset: 0x4
	// Line 2896, Address: 0x1f8678, Func Offset: 0x8
	// Line 2915, Address: 0x1f867c, Func Offset: 0xc
	// Line 2896, Address: 0x1f8680, Func Offset: 0x10
	// Line 2897, Address: 0x1f8698, Func Offset: 0x28
	// Line 2896, Address: 0x1f869c, Func Offset: 0x2c
	// Line 2915, Address: 0x1f86b8, Func Offset: 0x48
	// Line 2916, Address: 0x1f86c8, Func Offset: 0x58
	// Line 2925, Address: 0x1f86e0, Func Offset: 0x70
	// Line 2926, Address: 0x1f86f0, Func Offset: 0x80
	// Line 2929, Address: 0x1f8708, Func Offset: 0x98
	// Line 2932, Address: 0x1f8710, Func Offset: 0xa0
	// Line 2933, Address: 0x1f8720, Func Offset: 0xb0
	// Line 2936, Address: 0x1f8728, Func Offset: 0xb8
	// Line 2952, Address: 0x1f8730, Func Offset: 0xc0
	// Line 2936, Address: 0x1f8734, Func Offset: 0xc4
	// Line 2952, Address: 0x1f873c, Func Offset: 0xcc
	// Line 2957, Address: 0x1f8750, Func Offset: 0xe0
	// Line 2964, Address: 0x1f876c, Func Offset: 0xfc
	// Line 2982, Address: 0x1f877c, Func Offset: 0x10c
	// Line 2983, Address: 0x1f8790, Func Offset: 0x120
	// Line 2988, Address: 0x1f87a4, Func Offset: 0x134
	// Line 2991, Address: 0x1f87a8, Func Offset: 0x138
	// Line 2992, Address: 0x1f87bc, Func Offset: 0x14c
	// Line 3001, Address: 0x1f87c8, Func Offset: 0x158
	// Line 3002, Address: 0x1f87dc, Func Offset: 0x16c
	// Line 3036, Address: 0x1f87e8, Func Offset: 0x178
	// Line 3037, Address: 0x1f87f0, Func Offset: 0x180
	// Line 3039, Address: 0x1f8800, Func Offset: 0x190
	// Line 3040, Address: 0x1f8808, Func Offset: 0x198
	// Func End, Address: 0x1f8838, Func Offset: 0x1c8
}

// PKR_PkgHasAsset__FP19st_PACKER_READ_DATAUi
// Start address: 0x1f8840
int32 PKR_PkgHasAsset(st_PACKER_READ_DATA* pr, uint32 aid)
{
	int32 rc;
	int32 idx;
	// Line 2844, Address: 0x1f8840, Func Offset: 0
	// Line 2850, Address: 0x1f8844, Func Offset: 0x4
	// Line 2844, Address: 0x1f8848, Func Offset: 0x8
	// Line 2850, Address: 0x1f884c, Func Offset: 0xc
	// Line 2844, Address: 0x1f8850, Func Offset: 0x10
	// Line 2850, Address: 0x1f8858, Func Offset: 0x18
	// Line 2852, Address: 0x1f8860, Func Offset: 0x20
	// Line 2856, Address: 0x1f8870, Func Offset: 0x30
	// Line 2858, Address: 0x1f8878, Func Offset: 0x38
	// Line 2856, Address: 0x1f887c, Func Offset: 0x3c
	// Line 2858, Address: 0x1f8888, Func Offset: 0x48
	// Line 2859, Address: 0x1f88a0, Func Offset: 0x60
	// Line 2860, Address: 0x1f88b4, Func Offset: 0x74
	// Line 2864, Address: 0x1f88b8, Func Offset: 0x78
	// Func End, Address: 0x1f88c8, Func Offset: 0x88
}

// PKR_GetAssetInfoByType__FP19st_PACKER_READ_DATAUiiP20st_PKR_ASSET_TOCINFO
// Start address: 0x1f88d0
int32 PKR_GetAssetInfoByType(st_PACKER_READ_DATA* pr, uint32 type, int32 idx, st_PKR_ASSET_TOCINFO* tocinfo)
{
	st_PACKER_ATOC_NODE* assnode;
	st_XORDEREDARRAY* typlist;
	// Line 2759, Address: 0x1f88d0, Func Offset: 0
	// Line 2766, Address: 0x1f88f8, Func Offset: 0x28
	// Line 2769, Address: 0x1f8908, Func Offset: 0x38
	// Line 2772, Address: 0x1f8918, Func Offset: 0x48
	// Line 2774, Address: 0x1f8950, Func Offset: 0x80
	// Line 2777, Address: 0x1f8960, Func Offset: 0x90
	// Line 2781, Address: 0x1f896c, Func Offset: 0x9c
	// Line 2784, Address: 0x1f8988, Func Offset: 0xb8
	// Line 2807, Address: 0x1f8990, Func Offset: 0xc0
	// Line 2784, Address: 0x1f8994, Func Offset: 0xc4
	// Line 2789, Address: 0x1f899c, Func Offset: 0xcc
	// Line 2790, Address: 0x1f89a4, Func Offset: 0xd4
	// Line 2791, Address: 0x1f89ac, Func Offset: 0xdc
	// Line 2793, Address: 0x1f89d0, Func Offset: 0x100
	// Line 2794, Address: 0x1f89ec, Func Offset: 0x11c
	// Line 2795, Address: 0x1f89f4, Func Offset: 0x124
	// Line 2807, Address: 0x1f89fc, Func Offset: 0x12c
	// Line 2840, Address: 0x1f8a00, Func Offset: 0x130
	// Func End, Address: 0x1f8a1c, Func Offset: 0x14c
}

// PKR_GetAssetInfo__FP19st_PACKER_READ_DATAUiP20st_PKR_ASSET_TOCINFO
// Start address: 0x1f8a20
int32 PKR_GetAssetInfo(st_PACKER_READ_DATA* pr, uint32 aid, st_PKR_ASSET_TOCINFO* tocinfo)
{
	int32 idx;
	st_PACKER_ATOC_NODE* assnode;
	// Line 2725, Address: 0x1f8a20, Func Offset: 0
	// Line 2729, Address: 0x1f8a40, Func Offset: 0x20
	// Line 2732, Address: 0x1f8a50, Func Offset: 0x30
	// Line 2733, Address: 0x1f8a64, Func Offset: 0x44
	// Line 2734, Address: 0x1f8a6c, Func Offset: 0x4c
	// Line 2736, Address: 0x1f8a7c, Func Offset: 0x5c
	// Line 2738, Address: 0x1f8a80, Func Offset: 0x60
	// Line 2739, Address: 0x1f8a88, Func Offset: 0x68
	// Line 2741, Address: 0x1f8aac, Func Offset: 0x8c
	// Line 2742, Address: 0x1f8ac8, Func Offset: 0xa8
	// Line 2743, Address: 0x1f8ad0, Func Offset: 0xb0
	// Line 2755, Address: 0x1f8ad8, Func Offset: 0xb8
	// Line 2754, Address: 0x1f8ae0, Func Offset: 0xc0
	// Line 2755, Address: 0x1f8ae4, Func Offset: 0xc4
	// Line 2754, Address: 0x1f8ae8, Func Offset: 0xc8
	// Line 2755, Address: 0x1f8aec, Func Offset: 0xcc
	// Func End, Address: 0x1f8af8, Func Offset: 0xd8
}

// PKR_GetBaseSector__FP19st_PACKER_READ_DATA
// Start address: 0x1f8b00
uint32 PKR_GetBaseSector(st_PACKER_READ_DATA* pr)
{
	// Line 2722, Address: 0x1f8b00, Func Offset: 0
	// Func End, Address: 0x1f8b08, Func Offset: 0x8
}

// PKR_AssetName__FP19st_PACKER_READ_DATAUi
// Start address: 0x1f8b10
int8* PKR_AssetName(st_PACKER_READ_DATA* pr, uint32 aid)
{
	int8* da_name;
	int32 idx;
	// Line 2701, Address: 0x1f8b10, Func Offset: 0
	// Line 2707, Address: 0x1f8b24, Func Offset: 0x14
	// Line 2709, Address: 0x1f8b38, Func Offset: 0x28
	// Line 2710, Address: 0x1f8b48, Func Offset: 0x38
	// Line 2712, Address: 0x1f8b50, Func Offset: 0x40
	// Line 2715, Address: 0x1f8b60, Func Offset: 0x50
	// Line 2716, Address: 0x1f8b68, Func Offset: 0x58
	// Func End, Address: 0x1f8b7c, Func Offset: 0x6c
}

// PKRAssetIDFromInst__FPv
// Start address: 0x1f8b80
uint32 PKRAssetIDFromInst(void* asset_inst)
{
	// Line 2697, Address: 0x1f8b80, Func Offset: 0
	// Func End, Address: 0x1f8b88, Func Offset: 0x8
}

// PKR_Disconnect__FP19st_PACKER_READ_DATA
// Start address: 0x1f8b90
void PKR_Disconnect(st_PACKER_READ_DATA* pr)
{
	// Line 2680, Address: 0x1f8b90, Func Offset: 0
	// Line 2685, Address: 0x1f8ba4, Func Offset: 0x14
	// Line 2688, Address: 0x1f8bac, Func Offset: 0x1c
	// Line 2689, Address: 0x1f8bbc, Func Offset: 0x2c
	// Line 2692, Address: 0x1f8bc0, Func Offset: 0x30
	// Func End, Address: 0x1f8bd0, Func Offset: 0x40
}

// PKR_getPackTimestamp__FP19st_PACKER_READ_DATA
// Start address: 0x1f8bd0
uint32 PKR_getPackTimestamp(st_PACKER_READ_DATA* pr)
{
	// Line 2665, Address: 0x1f8bd0, Func Offset: 0
	// Func End, Address: 0x1f8bd8, Func Offset: 0x8
}

// PKR_IsAssetReady__FP19st_PACKER_READ_DATAUi
// Start address: 0x1f8be0
int32 PKR_IsAssetReady(st_PACKER_READ_DATA* pr, uint32 aid)
{
	int32 is_ok;
	int32 idx;
	// Line 2635, Address: 0x1f8be0, Func Offset: 0
	// Line 2644, Address: 0x1f8be4, Func Offset: 0x4
	// Line 2635, Address: 0x1f8be8, Func Offset: 0x8
	// Line 2644, Address: 0x1f8bec, Func Offset: 0xc
	// Line 2635, Address: 0x1f8bf0, Func Offset: 0x10
	// Line 2644, Address: 0x1f8bfc, Func Offset: 0x1c
	// Line 2645, Address: 0x1f8c08, Func Offset: 0x28
	// Line 2654, Address: 0x1f8c10, Func Offset: 0x30
	// Line 2658, Address: 0x1f8c40, Func Offset: 0x60
	// Line 2659, Address: 0x1f8c44, Func Offset: 0x64
	// Func End, Address: 0x1f8c58, Func Offset: 0x78
}

// PKR_AssetByType__FP19st_PACKER_READ_DATAUiiPUi
// Start address: 0x1f8c60
void* PKR_AssetByType(st_PACKER_READ_DATA* pr, uint32 type, int32 idx, uint32* size)
{
	st_XORDEREDARRAY* typlist;
	st_PACKER_ATOC_NODE* assnode;
	// Line 2551, Address: 0x1f8c60, Func Offset: 0
	// Line 2554, Address: 0x1f8c70, Func Offset: 0x10
	// Line 2557, Address: 0x1f8c80, Func Offset: 0x20
	// Line 2559, Address: 0x1f8cb8, Func Offset: 0x58
	// Line 2562, Address: 0x1f8cc8, Func Offset: 0x68
	// Line 2566, Address: 0x1f8cd4, Func Offset: 0x74
	// Line 2569, Address: 0x1f8cf0, Func Offset: 0x90
	// Line 2574, Address: 0x1f8cfc, Func Offset: 0x9c
	// Line 2581, Address: 0x1f8d10, Func Offset: 0xb0
	// Line 2630, Address: 0x1f8d18, Func Offset: 0xb8
	// Func End, Address: 0x1f8d20, Func Offset: 0xc0
}

// PKR_AssetCount__FP19st_PACKER_READ_DATAUi
// Start address: 0x1f8d20
int32 PKR_AssetCount(st_PACKER_READ_DATA* pr, uint32 type)
{
	int32 cnt;
	// Line 2524, Address: 0x1f8d20, Func Offset: 0
	// Line 2527, Address: 0x1f8d30, Func Offset: 0x10
	// Line 2530, Address: 0x1f8d68, Func Offset: 0x48
	// Line 2532, Address: 0x1f8d70, Func Offset: 0x50
	// Line 2533, Address: 0x1f8d7c, Func Offset: 0x5c
	// Line 2536, Address: 0x1f8d80, Func Offset: 0x60
	// Func End, Address: 0x1f8d88, Func Offset: 0x68
}

// PKR_GetAssetSize__FP19st_PACKER_READ_DATAUi
// Start address: 0x1f8d90
uint32 PKR_GetAssetSize(st_PACKER_READ_DATA* pr, uint32 aid)
{
	int32 idx;
	st_PACKER_ATOC_NODE* assnode;
	// Line 2487, Address: 0x1f8d90, Func Offset: 0
	// Line 2497, Address: 0x1f8d94, Func Offset: 0x4
	// Line 2487, Address: 0x1f8d98, Func Offset: 0x8
	// Line 2497, Address: 0x1f8d9c, Func Offset: 0xc
	// Line 2487, Address: 0x1f8da0, Func Offset: 0x10
	// Line 2497, Address: 0x1f8dac, Func Offset: 0x1c
	// Line 2499, Address: 0x1f8db8, Func Offset: 0x28
	// Line 2501, Address: 0x1f8dc4, Func Offset: 0x34
	// Line 2508, Address: 0x1f8dd0, Func Offset: 0x40
	// Line 2509, Address: 0x1f8ddc, Func Offset: 0x4c
	// Line 2512, Address: 0x1f8df8, Func Offset: 0x68
	// Line 2513, Address: 0x1f8e00, Func Offset: 0x70
	// Func End, Address: 0x1f8e14, Func Offset: 0x84
}

// PKR_LoadAsset__FP19st_PACKER_READ_DATAUiPCcPv
// Start address: 0x1f8e20
void* PKR_LoadAsset(st_PACKER_READ_DATA* pr, uint32 aid)
{
	// Line 2476, Address: 0x1f8e20, Func Offset: 0
	// Func End, Address: 0x1f8e28, Func Offset: 0x8
}

// PKR_LoadLayer__FP19st_PACKER_READ_DATA13en_LAYER_TYPE
// Start address: 0x1f8e30
int32 PKR_LoadLayer()
{
	// Line 2471, Address: 0x1f8e30, Func Offset: 0
	// Func End, Address: 0x1f8e38, Func Offset: 0x8
}

// PKR_FindAsset__FP19st_PACKER_READ_DATAUi
// Start address: 0x1f8e40
void* PKR_FindAsset(st_PACKER_READ_DATA* pr, uint32 aid)
{
	int32 idx;
	st_PACKER_ATOC_NODE* assnode;
	// Line 2441, Address: 0x1f8e40, Func Offset: 0
	// Line 2445, Address: 0x1f8e44, Func Offset: 0x4
	// Line 2441, Address: 0x1f8e48, Func Offset: 0x8
	// Line 2445, Address: 0x1f8e4c, Func Offset: 0xc
	// Line 2441, Address: 0x1f8e50, Func Offset: 0x10
	// Line 2445, Address: 0x1f8e5c, Func Offset: 0x1c
	// Line 2446, Address: 0x1f8e68, Func Offset: 0x28
	// Line 2449, Address: 0x1f8e70, Func Offset: 0x30
	// Line 2451, Address: 0x1f8e80, Func Offset: 0x40
	// Line 2460, Address: 0x1f8e88, Func Offset: 0x48
	// Line 2462, Address: 0x1f8e90, Func Offset: 0x50
	// Line 2463, Address: 0x1f8e98, Func Offset: 0x58
	// Func End, Address: 0x1f8eac, Func Offset: 0x6c
}

// PKR_xform_asset__FP19st_PACKER_ATOC_NODEi
// Start address: 0x1f8eb0
void PKR_xform_asset(st_PACKER_ATOC_NODE* assnode, int32 dumpable_layer)
{
	int8* xformloc;
	st_PACKER_ASSETTYPE* atype;
	// Line 2332, Address: 0x1f8eb0, Func Offset: 0
	// Line 2338, Address: 0x1f8ec8, Func Offset: 0x18
	// Line 2341, Address: 0x1f8edc, Func Offset: 0x2c
	// Line 2342, Address: 0x1f8ef0, Func Offset: 0x40
	// Line 2347, Address: 0x1f8efc, Func Offset: 0x4c
	// Line 2348, Address: 0x1f8f08, Func Offset: 0x58
	// Line 2352, Address: 0x1f8f10, Func Offset: 0x60
	// Line 2354, Address: 0x1f8f14, Func Offset: 0x64
	// Line 2363, Address: 0x1f8f1c, Func Offset: 0x6c
	// Line 2377, Address: 0x1f8f28, Func Offset: 0x78
	// Line 2378, Address: 0x1f8f34, Func Offset: 0x84
	// Line 2381, Address: 0x1f8f40, Func Offset: 0x90
	// Line 2382, Address: 0x1f8f44, Func Offset: 0x94
	// Line 2389, Address: 0x1f8f48, Func Offset: 0x98
	// Line 2414, Address: 0x1f8f68, Func Offset: 0xb8
	// Line 2422, Address: 0x1f8f88, Func Offset: 0xd8
	// Line 2423, Address: 0x1f8fa0, Func Offset: 0xf0
	// Line 2429, Address: 0x1f8fa4, Func Offset: 0xf4
	// Line 2430, Address: 0x1f8fb0, Func Offset: 0x100
	// Line 2431, Address: 0x1f8fb8, Func Offset: 0x108
	// Line 2438, Address: 0x1f8fc0, Func Offset: 0x110
	// Func End, Address: 0x1f8fd8, Func Offset: 0x128
}

// PKR_xformLayerAssets__FP19st_PACKER_LTOC_NODE
// Start address: 0x1f8fe0
void PKR_xformLayerAssets(st_PACKER_LTOC_NODE* laynode)
{
	int32 i;
	int32 will_be_dumped;
	st_PACKER_ATOC_NODE* tmpass;
	en_PKR_LAYER_LOAD_DEST loaddest;
	// Line 2286, Address: 0x1f8fe0, Func Offset: 0
	// Line 2295, Address: 0x1f9000, Func Offset: 0x20
	// Line 2296, Address: 0x1f9058, Func Offset: 0x78
	// Line 2299, Address: 0x1f9068, Func Offset: 0x88
	// Line 2300, Address: 0x1f9080, Func Offset: 0xa0
	// Line 2301, Address: 0x1f9084, Func Offset: 0xa4
	// Line 2300, Address: 0x1f9088, Func Offset: 0xa8
	// Line 2301, Address: 0x1f9090, Func Offset: 0xb0
	// Line 2312, Address: 0x1f90a0, Func Offset: 0xc0
	// Line 2318, Address: 0x1f90a8, Func Offset: 0xc8
	// Line 2324, Address: 0x1f90bc, Func Offset: 0xdc
	// Line 2326, Address: 0x1f90c0, Func Offset: 0xe0
	// Line 2329, Address: 0x1f90d8, Func Offset: 0xf8
	// Func End, Address: 0x1f90f8, Func Offset: 0x118
}

// PKR_updateLayerAssets__FP19st_PACKER_LTOC_NODE
// Start address: 0x1f9100
void PKR_updateLayerAssets(st_PACKER_LTOC_NODE* laynode)
{
	int32 i;
	st_PACKER_ATOC_NODE* tmpass;
	int32 lay_hip_pos;
	// Line 2177, Address: 0x1f9100, Func Offset: 0
	// Line 2169, Address: 0x1f9104, Func Offset: 0x4
	// Line 2177, Address: 0x1f9108, Func Offset: 0x8
	// Line 2178, Address: 0x1f9118, Func Offset: 0x18
	// Line 2180, Address: 0x1f911c, Func Offset: 0x1c
	// Line 2182, Address: 0x1f9138, Func Offset: 0x38
	// Line 2181, Address: 0x1f9140, Func Offset: 0x40
	// Line 2182, Address: 0x1f9144, Func Offset: 0x44
	// Line 2185, Address: 0x1f9150, Func Offset: 0x50
	// Line 2193, Address: 0x1f9158, Func Offset: 0x58
	// Line 2208, Address: 0x1f915c, Func Offset: 0x5c
	// Line 2220, Address: 0x1f916c, Func Offset: 0x6c
	// Line 2237, Address: 0x1f9170, Func Offset: 0x70
	// Line 2216, Address: 0x1f9174, Func Offset: 0x74
	// Line 2209, Address: 0x1f9178, Func Offset: 0x78
	// Line 2216, Address: 0x1f9188, Func Offset: 0x88
	// Line 2220, Address: 0x1f9194, Func Offset: 0x94
	// Line 2225, Address: 0x1f919c, Func Offset: 0x9c
	// Line 2226, Address: 0x1f91a4, Func Offset: 0xa4
	// Line 2234, Address: 0x1f91a8, Func Offset: 0xa8
	// Line 2237, Address: 0x1f91bc, Func Offset: 0xbc
	// Line 2268, Address: 0x1f91c8, Func Offset: 0xc8
	// Line 2283, Address: 0x1f91e0, Func Offset: 0xe0
	// Func End, Address: 0x1f91e8, Func Offset: 0xe8
}

// PKR_findNextLayerToLoad__FPP19st_PACKER_READ_DATAPP19st_PACKER_LTOC_NODE
// Start address: 0x1f91f0
int32 PKR_findNextLayerToLoad(st_PACKER_READ_DATA** work_on_pkg, st_PACKER_LTOC_NODE** next_layer)
{
	st_PACKER_READ_DATA* tmppr;
	st_PACKER_LTOC_NODE* tmplay;
	int32 i;
	int32 j;
	// Line 2123, Address: 0x1f91f0, Func Offset: 0
	// Line 2126, Address: 0x1f91f4, Func Offset: 0x4
	// Line 2127, Address: 0x1f91f8, Func Offset: 0x8
	// Line 2128, Address: 0x1f9200, Func Offset: 0x10
	// Line 2130, Address: 0x1f9214, Func Offset: 0x24
	// Line 2129, Address: 0x1f9218, Func Offset: 0x28
	// Line 2130, Address: 0x1f921c, Func Offset: 0x2c
	// Line 2131, Address: 0x1f922c, Func Offset: 0x3c
	// Line 2133, Address: 0x1f9230, Func Offset: 0x40
	// Line 2134, Address: 0x1f9238, Func Offset: 0x48
	// Line 2140, Address: 0x1f924c, Func Offset: 0x5c
	// Line 2143, Address: 0x1f9254, Func Offset: 0x64
	// Line 2152, Address: 0x1f925c, Func Offset: 0x6c
	// Line 2145, Address: 0x1f9260, Func Offset: 0x70
	// Line 2143, Address: 0x1f9264, Func Offset: 0x74
	// Line 2145, Address: 0x1f9268, Func Offset: 0x78
	// Line 2148, Address: 0x1f927c, Func Offset: 0x8c
	// Line 2150, Address: 0x1f9288, Func Offset: 0x98
	// Line 2151, Address: 0x1f92a0, Func Offset: 0xb0
	// Line 2152, Address: 0x1f92a4, Func Offset: 0xb4
	// Line 2153, Address: 0x1f92b4, Func Offset: 0xc4
	// Line 2155, Address: 0x1f92b8, Func Offset: 0xc8
	// Line 2156, Address: 0x1f92c0, Func Offset: 0xd0
	// Line 2158, Address: 0x1f92dc, Func Offset: 0xec
	// Line 2159, Address: 0x1f92e4, Func Offset: 0xf4
	// Line 2164, Address: 0x1f92f8, Func Offset: 0x108
	// Func End, Address: 0x1f9300, Func Offset: 0x110
}

// PKR_LayerMemRelease__FP19st_PACKER_READ_DATAP19st_PACKER_LTOC_NODE
// Start address: 0x1f9300
void PKR_LayerMemRelease(st_PACKER_LTOC_NODE* layer)
{
	en_PKR_LAYER_LOAD_DEST loaddest;
	// Line 1887, Address: 0x1f9300, Func Offset: 0
	// Line 1894, Address: 0x1f930c, Func Offset: 0xc
	// Line 1895, Address: 0x1f9360, Func Offset: 0x60
	// Line 1897, Address: 0x1f938c, Func Offset: 0x8c
	// Line 1900, Address: 0x1f9390, Func Offset: 0x90
	// Line 1901, Address: 0x1f93a0, Func Offset: 0xa0
	// Line 1918, Address: 0x1f93a4, Func Offset: 0xa4
	// Line 1920, Address: 0x1f93ac, Func Offset: 0xac
	// Line 1929, Address: 0x1f93b0, Func Offset: 0xb0
	// Line 1931, Address: 0x1f93d4, Func Offset: 0xd4
	// Line 1933, Address: 0x1f93dc, Func Offset: 0xdc
	// Line 1937, Address: 0x1f93e0, Func Offset: 0xe0
	// Line 1939, Address: 0x1f9404, Func Offset: 0x104
	// Line 1940, Address: 0x1f9408, Func Offset: 0x108
	// Line 1950, Address: 0x1f940c, Func Offset: 0x10c
	// Line 1953, Address: 0x1f9410, Func Offset: 0x110
	// Func End, Address: 0x1f9420, Func Offset: 0x120
}

// PKR_LayerMemReserve__FP19st_PACKER_READ_DATAP19st_PACKER_LTOC_NODE
// Start address: 0x1f9420
int8* PKR_LayerMemReserve(st_PACKER_READ_DATA* pr, st_PACKER_LTOC_NODE* layer)
{
	int8* mem;
	en_PKR_LAYER_LOAD_DEST loaddest;
	// Line 1804, Address: 0x1f9420, Func Offset: 0
	// Line 1805, Address: 0x1f942c, Func Offset: 0xc
	// Line 1815, Address: 0x1f9430, Func Offset: 0x10
	// Line 1827, Address: 0x1f9440, Func Offset: 0x20
	// Line 1828, Address: 0x1f9490, Func Offset: 0x70
	// Line 1835, Address: 0x1f94c0, Func Offset: 0xa0
	// Line 1838, Address: 0x1f94e8, Func Offset: 0xc8
	// Line 1844, Address: 0x1f94f0, Func Offset: 0xd0
	// Line 1848, Address: 0x1f9518, Func Offset: 0xf8
	// Line 1858, Address: 0x1f9520, Func Offset: 0x100
	// Line 1883, Address: 0x1f9530, Func Offset: 0x110
	// Line 1884, Address: 0x1f9538, Func Offset: 0x118
	// Func End, Address: 0x1f9544, Func Offset: 0x124
}

// PKR_LoadStep_Async__Fv
// Start address: 0x1f9550
int32 PKR_LoadStep_Async()
{
	int32 moretodo;
	int32 rc;
	en_READ_ASYNC_STATUS readstat;
	st_PACKER_ATOC_NODE* tmpass;
	en_PKR_LAYER_LOAD_DEST loaddest;
	en_PKR_LAYER_LOAD_DEST loaddest;
	en_PKR_LAYER_LOAD_DEST loaddest;
	en_PKR_LAYER_LOAD_DEST loaddest;
	st_PACKER_READ_DATA* curpr;
	st_PACKER_LTOC_NODE* asynlay;
	// Line 1427, Address: 0x1f9550, Func Offset: 0
	// Line 1440, Address: 0x1f955c, Func Offset: 0xc
	// Line 1446, Address: 0x1f9568, Func Offset: 0x18
	// Line 1447, Address: 0x1f9574, Func Offset: 0x24
	// Line 1462, Address: 0x1f957c, Func Offset: 0x2c
	// Line 1463, Address: 0x1f95d0, Func Offset: 0x80
	// Line 1477, Address: 0x1f95f4, Func Offset: 0xa4
	// Line 1496, Address: 0x1f9604, Func Offset: 0xb4
	// Line 1501, Address: 0x1f9608, Func Offset: 0xb8
	// Line 1496, Address: 0x1f960c, Func Offset: 0xbc
	// Line 1501, Address: 0x1f9610, Func Offset: 0xc0
	// Line 1496, Address: 0x1f9614, Func Offset: 0xc4
	// Line 1501, Address: 0x1f9618, Func Offset: 0xc8
	// Line 1533, Address: 0x1f9628, Func Offset: 0xd8
	// Line 1540, Address: 0x1f9640, Func Offset: 0xf0
	// Line 1545, Address: 0x1f9648, Func Offset: 0xf8
	// Line 1546, Address: 0x1f9658, Func Offset: 0x108
	// Line 1564, Address: 0x1f9660, Func Offset: 0x110
	// Line 1568, Address: 0x1f966c, Func Offset: 0x11c
	// Line 1569, Address: 0x1f9684, Func Offset: 0x134
	// Line 1570, Address: 0x1f9688, Func Offset: 0x138
	// Line 1571, Address: 0x1f968c, Func Offset: 0x13c
	// Line 1575, Address: 0x1f9690, Func Offset: 0x140
	// Line 1586, Address: 0x1f9698, Func Offset: 0x148
	// Line 1588, Address: 0x1f96a0, Func Offset: 0x150
	// Line 1586, Address: 0x1f96a4, Func Offset: 0x154
	// Line 1591, Address: 0x1f96ac, Func Offset: 0x15c
	// Line 1594, Address: 0x1f96b8, Func Offset: 0x168
	// Line 1595, Address: 0x1f96bc, Func Offset: 0x16c
	// Line 1599, Address: 0x1f96c0, Func Offset: 0x170
	// Line 1611, Address: 0x1f96c8, Func Offset: 0x178
	// Line 1614, Address: 0x1f96dc, Func Offset: 0x18c
	// Line 1615, Address: 0x1f96e8, Func Offset: 0x198
	// Line 1619, Address: 0x1f96ec, Func Offset: 0x19c
	// Line 1670, Address: 0x1f96f0, Func Offset: 0x1a0
	// Line 1682, Address: 0x1f96f8, Func Offset: 0x1a8
	// Line 1683, Address: 0x1f9750, Func Offset: 0x200
	// Line 1684, Address: 0x1f9764, Func Offset: 0x214
	// Line 1689, Address: 0x1f97cc, Func Offset: 0x27c
	// Line 1690, Address: 0x1f97d8, Func Offset: 0x288
	// Line 1711, Address: 0x1f97e4, Func Offset: 0x294
	// Line 1714, Address: 0x1f97f0, Func Offset: 0x2a0
	// Line 1722, Address: 0x1f9840, Func Offset: 0x2f0
	// Line 1727, Address: 0x1f984c, Func Offset: 0x2fc
	// Line 1728, Address: 0x1f98a0, Func Offset: 0x350
	// Line 1731, Address: 0x1f98ac, Func Offset: 0x35c
	// Line 1733, Address: 0x1f98b4, Func Offset: 0x364
	// Line 1736, Address: 0x1f98b8, Func Offset: 0x368
	// Line 1740, Address: 0x1f98c0, Func Offset: 0x370
	// Line 1736, Address: 0x1f98c4, Func Offset: 0x374
	// Line 1742, Address: 0x1f98d0, Func Offset: 0x380
	// Line 1774, Address: 0x1f98dc, Func Offset: 0x38c
	// Line 1775, Address: 0x1f9930, Func Offset: 0x3e0
	// Line 1777, Address: 0x1f9944, Func Offset: 0x3f4
	// Line 1779, Address: 0x1f994c, Func Offset: 0x3fc
	// Line 1782, Address: 0x1f9950, Func Offset: 0x400
	// Line 1788, Address: 0x1f9958, Func Offset: 0x408
	// Line 1782, Address: 0x1f995c, Func Offset: 0x40c
	// Line 1786, Address: 0x1f996c, Func Offset: 0x41c
	// Line 1787, Address: 0x1f9970, Func Offset: 0x420
	// Line 1790, Address: 0x1f9974, Func Offset: 0x424
	// Line 1793, Address: 0x1f9978, Func Offset: 0x428
	// Func End, Address: 0x1f9988, Func Offset: 0x438
}

// PKR_parse_TOC__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f9990
int32 PKR_parse_TOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	int32 is_ok;
	uint32 cid;
	int32 done;
	// Line 910, Address: 0x1f9990, Func Offset: 0
	// Line 912, Address: 0x1f99b0, Func Offset: 0x20
	// Line 916, Address: 0x1f99b4, Func Offset: 0x24
	// Line 918, Address: 0x1f99c4, Func Offset: 0x34
	// Line 919, Address: 0x1f99d0, Func Offset: 0x40
	// Line 921, Address: 0x1f9a10, Func Offset: 0x80
	// Line 922, Address: 0x1f9a14, Func Offset: 0x84
	// Line 923, Address: 0x1f9a1c, Func Offset: 0x8c
	// Line 924, Address: 0x1f9a20, Func Offset: 0x90
	// Line 939, Address: 0x1f9a2c, Func Offset: 0x9c
	// Line 940, Address: 0x1f9a38, Func Offset: 0xa8
	// Line 941, Address: 0x1f9a40, Func Offset: 0xb0
	// Line 942, Address: 0x1f9a48, Func Offset: 0xb8
	// Line 943, Address: 0x1f9a8c, Func Offset: 0xfc
	// Line 942, Address: 0x1f9a90, Func Offset: 0x100
	// Line 944, Address: 0x1f9a94, Func Offset: 0x104
	// Line 947, Address: 0x1f9aa4, Func Offset: 0x114
	// Line 948, Address: 0x1f9aac, Func Offset: 0x11c
	// Line 949, Address: 0x1f9ab0, Func Offset: 0x120
	// Line 952, Address: 0x1f9abc, Func Offset: 0x12c
	// Line 954, Address: 0x1f9ac4, Func Offset: 0x134
	// Line 955, Address: 0x1f9acc, Func Offset: 0x13c
	// Line 958, Address: 0x1f9ad0, Func Offset: 0x140
	// Line 962, Address: 0x1f9adc, Func Offset: 0x14c
	// Line 965, Address: 0x1f9ae0, Func Offset: 0x150
	// Line 971, Address: 0x1f9ae8, Func Offset: 0x158
	// Line 972, Address: 0x1f9af8, Func Offset: 0x168
	// Line 974, Address: 0x1f9b10, Func Offset: 0x180
	// Line 976, Address: 0x1f9b18, Func Offset: 0x188
	// Line 977, Address: 0x1f9b1c, Func Offset: 0x18c
	// Func End, Address: 0x1f9b38, Func Offset: 0x1a8
}

// PKR_SetActive__FP19st_PACKER_READ_DATA13en_LAYER_TYPE
// Start address: 0x1f9b40
int32 PKR_SetActive(st_PACKER_READ_DATA* pr, en_LAYER_TYPE layer)
{
	int32 result;
	int32 rc;
	int32 i;
	int32 j;
	st_PACKER_ATOC_NODE* assnode;
	st_PACKER_LTOC_NODE* laynode;
	// Line 824, Address: 0x1f9b40, Func Offset: 0
	// Line 825, Address: 0x1f9b50, Func Offset: 0x10
	// Line 824, Address: 0x1f9b54, Func Offset: 0x14
	// Line 834, Address: 0x1f9b70, Func Offset: 0x30
	// Line 839, Address: 0x1f9b80, Func Offset: 0x40
	// Line 840, Address: 0x1f9b98, Func Offset: 0x58
	// Line 844, Address: 0x1f9ba0, Func Offset: 0x60
	// Line 847, Address: 0x1f9bb8, Func Offset: 0x78
	// Line 848, Address: 0x1f9bc0, Func Offset: 0x80
	// Line 859, Address: 0x1f9bc8, Func Offset: 0x88
	// Line 848, Address: 0x1f9bcc, Func Offset: 0x8c
	// Line 859, Address: 0x1f9bd8, Func Offset: 0x98
	// Line 860, Address: 0x1f9be4, Func Offset: 0xa4
	// Line 869, Address: 0x1f9bf4, Func Offset: 0xb4
	// Line 870, Address: 0x1f9bfc, Func Offset: 0xbc
	// Line 873, Address: 0x1f9c08, Func Offset: 0xc8
	// Line 876, Address: 0x1f9c14, Func Offset: 0xd4
	// Line 880, Address: 0x1f9c1c, Func Offset: 0xdc
	// Line 885, Address: 0x1f9c30, Func Offset: 0xf0
	// Line 890, Address: 0x1f9c38, Func Offset: 0xf8
	// Line 891, Address: 0x1f9c40, Func Offset: 0x100
	// Line 893, Address: 0x1f9c50, Func Offset: 0x110
	// Line 894, Address: 0x1f9c68, Func Offset: 0x128
	// Line 898, Address: 0x1f9c80, Func Offset: 0x140
	// Line 899, Address: 0x1f9c88, Func Offset: 0x148
	// Func End, Address: 0x1f9cb4, Func Offset: 0x174
}

// PKR_ReadDone__FP19st_PACKER_READ_DATA
// Start address: 0x1f9cc0
void PKR_ReadDone(st_PACKER_READ_DATA* pr)
{
	int32 i;
	int32 j;
	int32 lockid;
	st_PACKER_ATOC_NODE* assnode;
	st_PACKER_LTOC_NODE* laynode;
	st_XORDEREDARRAY* tmplist;
	// Line 667, Address: 0x1f9cc0, Func Offset: 0
	// Line 677, Address: 0x1f9ce4, Func Offset: 0x24
	// Line 684, Address: 0x1f9cec, Func Offset: 0x2c
	// Line 685, Address: 0x1f9d00, Func Offset: 0x40
	// Line 687, Address: 0x1f9d0c, Func Offset: 0x4c
	// Line 688, Address: 0x1f9d20, Func Offset: 0x60
	// Line 691, Address: 0x1f9d30, Func Offset: 0x70
	// Line 692, Address: 0x1f9d3c, Func Offset: 0x7c
	// Line 693, Address: 0x1f9d44, Func Offset: 0x84
	// Line 696, Address: 0x1f9d58, Func Offset: 0x98
	// Line 697, Address: 0x1f9d64, Func Offset: 0xa4
	// Line 698, Address: 0x1f9d78, Func Offset: 0xb8
	// Line 751, Address: 0x1f9d88, Func Offset: 0xc8
	// Line 752, Address: 0x1f9da0, Func Offset: 0xe0
	// Line 754, Address: 0x1f9dac, Func Offset: 0xec
	// Line 762, Address: 0x1f9db8, Func Offset: 0xf8
	// Line 768, Address: 0x1f9dc0, Func Offset: 0x100
	// Line 769, Address: 0x1f9dc4, Func Offset: 0x104
	// Line 775, Address: 0x1f9de4, Func Offset: 0x124
	// Line 778, Address: 0x1f9e20, Func Offset: 0x160
	// Line 779, Address: 0x1f9e38, Func Offset: 0x178
	// Line 781, Address: 0x1f9e3c, Func Offset: 0x17c
	// Line 779, Address: 0x1f9e40, Func Offset: 0x180
	// Line 781, Address: 0x1f9e48, Func Offset: 0x188
	// Line 782, Address: 0x1f9e74, Func Offset: 0x1b4
	// Line 785, Address: 0x1f9e88, Func Offset: 0x1c8
	// Line 786, Address: 0x1f9e94, Func Offset: 0x1d4
	// Line 789, Address: 0x1f9ea0, Func Offset: 0x1e0
	// Line 794, Address: 0x1f9ea8, Func Offset: 0x1e8
	// Line 795, Address: 0x1f9eb4, Func Offset: 0x1f4
	// Line 796, Address: 0x1f9ebc, Func Offset: 0x1fc
	// Line 804, Address: 0x1f9ed4, Func Offset: 0x214
	// Line 805, Address: 0x1f9edc, Func Offset: 0x21c
	// Line 806, Address: 0x1f9eec, Func Offset: 0x22c
	// Line 811, Address: 0x1f9ef0, Func Offset: 0x230
	// Line 812, Address: 0x1f9ef4, Func Offset: 0x234
	// Line 813, Address: 0x1f9f04, Func Offset: 0x244
	// Line 815, Address: 0x1f9f1c, Func Offset: 0x25c
	// Line 816, Address: 0x1f9f20, Func Offset: 0x260
	// Func End, Address: 0x1f9f44, Func Offset: 0x284
}

// PKR_ReadInit__FPvPcUiPiP19st_PACKER_ASSETTYPE
// Start address: 0x1f9f50
st_PACKER_READ_DATA* PKR_ReadInit(void* userdata, int8* pkgfile, uint32 opts, int32* cltver, st_PACKER_ASSETTYPE* typelist)
{
	st_PACKER_READ_DATA* pr;
	int32 i;
	int32 uselock;
	int8* tocbuf_RAW;
	int8* tocbuf_aligned;
	// Line 475, Address: 0x1f9f50, Func Offset: 0
	// Line 490, Address: 0x1f9f54, Func Offset: 0x4
	// Line 475, Address: 0x1f9f58, Func Offset: 0x8
	// Line 490, Address: 0x1f9f5c, Func Offset: 0xc
	// Line 475, Address: 0x1f9f60, Func Offset: 0x10
	// Line 490, Address: 0x1f9f90, Func Offset: 0x40
	// Line 475, Address: 0x1f9f94, Func Offset: 0x44
	// Line 490, Address: 0x1f9f98, Func Offset: 0x48
	// Line 480, Address: 0x1f9fa8, Func Offset: 0x58
	// Line 476, Address: 0x1f9fac, Func Offset: 0x5c
	// Line 490, Address: 0x1f9fb0, Func Offset: 0x60
	// Line 497, Address: 0x1f9fb8, Func Offset: 0x68
	// Line 490, Address: 0x1f9fbc, Func Offset: 0x6c
	// Line 497, Address: 0x1f9fc0, Func Offset: 0x70
	// Line 498, Address: 0x1f9fcc, Func Offset: 0x7c
	// Line 499, Address: 0x1f9fd8, Func Offset: 0x88
	// Line 500, Address: 0x1f9fdc, Func Offset: 0x8c
	// Line 501, Address: 0x1f9fe0, Func Offset: 0x90
	// Line 500, Address: 0x1f9fe4, Func Offset: 0x94
	// Line 499, Address: 0x1f9ffc, Func Offset: 0xac
	// Line 502, Address: 0x1fa000, Func Offset: 0xb0
	// Line 504, Address: 0x1fa008, Func Offset: 0xb8
	// Line 507, Address: 0x1fa018, Func Offset: 0xc8
	// Line 509, Address: 0x1fa020, Func Offset: 0xd0
	// Line 511, Address: 0x1fa02c, Func Offset: 0xdc
	// Line 516, Address: 0x1fa030, Func Offset: 0xe0
	// Line 513, Address: 0x1fa034, Func Offset: 0xe4
	// Line 519, Address: 0x1fa038, Func Offset: 0xe8
	// Line 514, Address: 0x1fa03c, Func Offset: 0xec
	// Line 519, Address: 0x1fa040, Func Offset: 0xf0
	// Line 515, Address: 0x1fa044, Func Offset: 0xf4
	// Line 519, Address: 0x1fa048, Func Offset: 0xf8
	// Line 522, Address: 0x1fa054, Func Offset: 0x104
	// Line 523, Address: 0x1fa05c, Func Offset: 0x10c
	// Line 524, Address: 0x1fa074, Func Offset: 0x124
	// Line 526, Address: 0x1fa080, Func Offset: 0x130
	// Line 528, Address: 0x1fa09c, Func Offset: 0x14c
	// Line 526, Address: 0x1fa0a0, Func Offset: 0x150
	// Line 532, Address: 0x1fa0a4, Func Offset: 0x154
	// Line 554, Address: 0x1fa0ac, Func Offset: 0x15c
	// Line 556, Address: 0x1fa0c0, Func Offset: 0x170
	// Line 562, Address: 0x1fa0cc, Func Offset: 0x17c
	// Line 579, Address: 0x1fa0d0, Func Offset: 0x180
	// Line 562, Address: 0x1fa0d4, Func Offset: 0x184
	// Line 579, Address: 0x1fa0d8, Func Offset: 0x188
	// Line 604, Address: 0x1fa0ec, Func Offset: 0x19c
	// Line 609, Address: 0x1fa0f8, Func Offset: 0x1a8
	// Line 611, Address: 0x1fa100, Func Offset: 0x1b0
	// Line 610, Address: 0x1fa104, Func Offset: 0x1b4
	// Line 614, Address: 0x1fa108, Func Offset: 0x1b8
	// Line 618, Address: 0x1fa110, Func Offset: 0x1c0
	// Line 617, Address: 0x1fa114, Func Offset: 0x1c4
	// Line 618, Address: 0x1fa118, Func Offset: 0x1c8
	// Line 619, Address: 0x1fa11c, Func Offset: 0x1cc
	// Line 623, Address: 0x1fa120, Func Offset: 0x1d0
	// Line 626, Address: 0x1fa13c, Func Offset: 0x1ec
	// Line 662, Address: 0x1fa140, Func Offset: 0x1f0
	// Line 663, Address: 0x1fa144, Func Offset: 0x1f4
	// Func End, Address: 0x1fa170, Func Offset: 0x220
}

// PKRLoadStep__Fi
// Start address: 0x1fa170
int32 PKRLoadStep()
{
	int32 more_todo;
	// Line 412, Address: 0x1fa170, Func Offset: 0
	// Func End, Address: 0x1fa178, Func Offset: 0x8
}

// PKRShutdown__Fv
// Start address: 0x1fa180
int32 PKRShutdown()
{
	// Line 334, Address: 0x1fa180, Func Offset: 0
	// Line 347, Address: 0x1fa18c, Func Offset: 0xc
	// Func End, Address: 0x1fa194, Func Offset: 0x14
}

// PKRStartup__Fv
// Start address: 0x1fa1a0
int32 PKRStartup()
{
	// Line 264, Address: 0x1fa1a0, Func Offset: 0
	// Line 265, Address: 0x1fa1a8, Func Offset: 0x8
	// Line 272, Address: 0x1fa1b8, Func Offset: 0x18
	// Line 275, Address: 0x1fa2c4, Func Offset: 0x124
	// Line 287, Address: 0x1fa2d0, Func Offset: 0x130
	// Line 323, Address: 0x1fa2d8, Func Offset: 0x138
	// Line 322, Address: 0x1fa2dc, Func Offset: 0x13c
	// Line 323, Address: 0x1fa2e0, Func Offset: 0x140
	// Func End, Address: 0x1fa2e8, Func Offset: 0x148
}

// PKRGetReadFuncs__Fi
// Start address: 0x1fa2f0
st_PACKER_READ_FUNCS* PKRGetReadFuncs(int32 apiver)
{
	// Line 247, Address: 0x1fa2f0, Func Offset: 0
	// Line 248, Address: 0x1fa304, Func Offset: 0x14
	// Line 249, Address: 0x1fa308, Func Offset: 0x18
	// Line 250, Address: 0x1fa314, Func Offset: 0x24
	// Line 251, Address: 0x1fa318, Func Offset: 0x28
	// Line 255, Address: 0x1fa320, Func Offset: 0x30
	// Func End, Address: 0x1fa328, Func Offset: 0x38
}

