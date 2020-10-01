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
	type_55 packfile;
	int32 asscnt;
	int32 laycnt;
	st_XORDEREDARRAY asstoc;
	st_XORDEREDARRAY laytoc;
	st_PACKER_ATOC_NODE* pool_anode;
	int32 pool_nextaidx;
	type_8 typelist;
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
	type_12 basename;
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
	type_30 readXForm;
	type_34 writeXForm;
	type_41 assetLoaded;
	type_47 makeData;
	type_49 cleanup;
	type_0 assetUnloaded;
	type_2 writePeek;
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
	type_37 packfile;
	int32 sectalign;
	int32 dassalign;
	st_XORDEREDARRAY asslist;
	st_XORDEREDARRAY laylist;
	int32 off_lg_asset;
	int32 off_lg_layer;
	int32 off_lg_xform;
	type_44 hdrfile;
	type_24 hdrfunc;
	type_18 generrf;
};

struct st_PACKER_READ_FUNCS
{
	uint32 api_ver;
	type_40 Init;
	type_43 Done;
	type_45 LoadLayer;
	type_48 GetAssetSize;
	type_50 LoadAsset;
	type_52 AssetByType;
	type_57 AssetCount;
	type_1 IsAssetReady;
	type_5 SetActive;
	type_10 AssetName;
	type_14 GetBaseSector;
	type_16 GetAssetInfo;
	type_20 GetAssetInfoByType;
	type_23 PkgHasAsset;
	type_25 PkgTimeStamp;
	type_28 PkgDisconnect;
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
	type_19 destroyNotify;
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
	type_3 create;
	type_7 destroy;
	type_9 basesector;
	type_13 enter;
	type_15 exit;
	type_17 readBytes;
	type_21 readShorts;
	type_22 readLongs;
	type_26 readFloats;
	type_29 readString;
	type_31 setBypass;
	type_33 setSpot;
	type_36 pollRead;
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
type_27 g_readdatainst;
uint32 g_loadlock;
int32 pkr_sector_size;
int32 g_packinit;
int32 g_memalloc_pair;
int32 g_memalloc_runtot;
int32 g_memalloc_runfree;
type_54 g_strz_layername;
RwResEntry* g_RWarena_resEntry;
RwResEntry* g_RWarena_resOwner;
int32 g_RWarena_bufsize;
RwModuleInfo resourcesModule;
type_4 ourGlobals;
type_38 PKR_special_loadbuf_killed;
uint32 gActiveHeap;
type_11 OrdTest_R_AssetID;
type_6 OrdComp_R_Asset;

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
}

// PKR_special_loadbuf_killed__FP10RwResEntry
// Start address: 0x1f70b0
void PKR_special_loadbuf_killed()
{
}

// PKR_relmem__FUiiPvUii
// Start address: 0x1f70c0
void PKR_relmem(uint32 id, int32 blksize, void* memptr, int32 isTemp)
{
}

// PKR_getmem__FUiiUiiiPPc
// Start address: 0x1f7180
void* PKR_getmem(uint32 id, int32 amount, int32 align, int32 isTemp, int8** memtru)
{
	void* memptr;
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
	type_53 typcnt;
	st_XORDEREDARRAY* tmplist;
	uint32 lasttype;
	int32 lasttidx;
}

// PKR_type2typeref__FUiP19st_PACKER_ASSETTYPE
// Start address: 0x1f7580
st_PACKER_ASSETTYPE* PKR_type2typeref(uint32 type, st_PACKER_ASSETTYPE* typelist)
{
	st_PACKER_ASSETTYPE* da_type;
	st_PACKER_ASSETTYPE* tmptype;
}

// LOD_r_STRM__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f75f0
int32 LOD_r_STRM(st_HIPLOADDATA* pkg)
{
	uint32 cid;
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
}

// LOD_r_LTOC__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f78f0
int32 LOD_r_LTOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	uint32 cid;
}

// LOD_r_ADBG__FP14st_HIPLOADDATAP19st_PACKER_READ_DATAP19st_PACKER_ATOC_NODE
// Start address: 0x1f79c0
int32 LOD_r_ADBG(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr, st_PACKER_ATOC_NODE* assnode)
{
	int32 ival;
	type_46 tmpbuf;
}

// LOD_r_AHDR__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f7ac0
int32 LOD_r_AHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	uint32 cid;
	int32 ival;
	int32 isdup;
}

// LOD_r_ATOC__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f7ce0
int32 LOD_r_ATOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	uint32 cid;
}

// LOD_r_DICT__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f7db0
int32 LOD_r_DICT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	uint32 cid;
}

// LOD_r_PLAT__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f7e80
int32 LOD_r_PLAT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	int32 result;
	int32 plattag;
	type_32 platname;
	type_35 vidname;
	type_39 langname;
	type_42 titlename;
	int32 n;
	int32 rc;
}

// ValidatePlatform__FP14st_HIPLOADDATAP19st_PACKER_READ_DATAiPcPcPcPc
// Start address: 0x1f8000
int32 ValidatePlatform(int8* plat, int8* vid, int8* lang, int8* title)
{
	type_56 fullname;
	int32 rc;
}

// LOD_r_PVER__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f82c0
int32 LOD_r_PVER(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	int32 ver;
	int32 amt;
}

// LOD_r_PACK__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f8380
int32 LOD_r_PACK(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	uint32 cid;
}

// OrdTest_R_AssetID__FPCvPv
// Start address: 0x1f85e0
int32 OrdTest_R_AssetID(void* vkey, void* vitem)
{
	int32 rc;
	uint32 key;
}

// OrdComp_R_Asset__FPvPv
// Start address: 0x1f8620
int32 OrdComp_R_Asset(void* vkey, void* vitem)
{
	int32 rc;
}

// PKR_FRIEND_assetIsGameDup__FUiPC19st_PACKER_READ_DATAiUiUiPc
// Start address: 0x1f8670
int32 PKR_FRIEND_assetIsGameDup(uint32 aid, st_PACKER_READ_DATA* skippr, int32 oursize, uint32 ourtype, uint32 chksum)
{
	int32 is_dup;
	st_PACKER_ATOC_NODE* tmp_ass;
	int32 i;
	int32 idx;
}

// PKR_PkgHasAsset__FP19st_PACKER_READ_DATAUi
// Start address: 0x1f8840
int32 PKR_PkgHasAsset(st_PACKER_READ_DATA* pr, uint32 aid)
{
	int32 rc;
	int32 idx;
}

// PKR_GetAssetInfoByType__FP19st_PACKER_READ_DATAUiiP20st_PKR_ASSET_TOCINFO
// Start address: 0x1f88d0
int32 PKR_GetAssetInfoByType(st_PACKER_READ_DATA* pr, uint32 type, int32 idx, st_PKR_ASSET_TOCINFO* tocinfo)
{
	st_PACKER_ATOC_NODE* assnode;
	st_XORDEREDARRAY* typlist;
}

// PKR_GetAssetInfo__FP19st_PACKER_READ_DATAUiP20st_PKR_ASSET_TOCINFO
// Start address: 0x1f8a20
int32 PKR_GetAssetInfo(st_PACKER_READ_DATA* pr, uint32 aid, st_PKR_ASSET_TOCINFO* tocinfo)
{
	int32 idx;
	st_PACKER_ATOC_NODE* assnode;
}

// PKR_GetBaseSector__FP19st_PACKER_READ_DATA
// Start address: 0x1f8b00
uint32 PKR_GetBaseSector(st_PACKER_READ_DATA* pr)
{
}

// PKR_AssetName__FP19st_PACKER_READ_DATAUi
// Start address: 0x1f8b10
int8* PKR_AssetName(st_PACKER_READ_DATA* pr, uint32 aid)
{
	int8* da_name;
	int32 idx;
}

// PKRAssetIDFromInst__FPv
// Start address: 0x1f8b80
uint32 PKRAssetIDFromInst(void* asset_inst)
{
}

// PKR_Disconnect__FP19st_PACKER_READ_DATA
// Start address: 0x1f8b90
void PKR_Disconnect(st_PACKER_READ_DATA* pr)
{
}

// PKR_getPackTimestamp__FP19st_PACKER_READ_DATA
// Start address: 0x1f8bd0
uint32 PKR_getPackTimestamp(st_PACKER_READ_DATA* pr)
{
}

// PKR_IsAssetReady__FP19st_PACKER_READ_DATAUi
// Start address: 0x1f8be0
int32 PKR_IsAssetReady(st_PACKER_READ_DATA* pr, uint32 aid)
{
	int32 is_ok;
	int32 idx;
}

// PKR_AssetByType__FP19st_PACKER_READ_DATAUiiPUi
// Start address: 0x1f8c60
void* PKR_AssetByType(st_PACKER_READ_DATA* pr, uint32 type, int32 idx, uint32* size)
{
	st_XORDEREDARRAY* typlist;
	st_PACKER_ATOC_NODE* assnode;
}

// PKR_AssetCount__FP19st_PACKER_READ_DATAUi
// Start address: 0x1f8d20
int32 PKR_AssetCount(st_PACKER_READ_DATA* pr, uint32 type)
{
	int32 cnt;
}

// PKR_GetAssetSize__FP19st_PACKER_READ_DATAUi
// Start address: 0x1f8d90
uint32 PKR_GetAssetSize(st_PACKER_READ_DATA* pr, uint32 aid)
{
	int32 idx;
	st_PACKER_ATOC_NODE* assnode;
}

// PKR_LoadAsset__FP19st_PACKER_READ_DATAUiPCcPv
// Start address: 0x1f8e20
void* PKR_LoadAsset(st_PACKER_READ_DATA* pr, uint32 aid)
{
}

// PKR_LoadLayer__FP19st_PACKER_READ_DATA13en_LAYER_TYPE
// Start address: 0x1f8e30
int32 PKR_LoadLayer()
{
}

// PKR_FindAsset__FP19st_PACKER_READ_DATAUi
// Start address: 0x1f8e40
void* PKR_FindAsset(st_PACKER_READ_DATA* pr, uint32 aid)
{
	int32 idx;
	st_PACKER_ATOC_NODE* assnode;
}

// PKR_xform_asset__FP19st_PACKER_ATOC_NODEi
// Start address: 0x1f8eb0
void PKR_xform_asset(st_PACKER_ATOC_NODE* assnode, int32 dumpable_layer)
{
	int8* xformloc;
	st_PACKER_ASSETTYPE* atype;
}

// PKR_xformLayerAssets__FP19st_PACKER_LTOC_NODE
// Start address: 0x1f8fe0
void PKR_xformLayerAssets(st_PACKER_LTOC_NODE* laynode)
{
	int32 i;
	int32 will_be_dumped;
	st_PACKER_ATOC_NODE* tmpass;
	en_PKR_LAYER_LOAD_DEST loaddest;
}

// PKR_updateLayerAssets__FP19st_PACKER_LTOC_NODE
// Start address: 0x1f9100
void PKR_updateLayerAssets(st_PACKER_LTOC_NODE* laynode)
{
	int32 i;
	st_PACKER_ATOC_NODE* tmpass;
	int32 lay_hip_pos;
}

// PKR_findNextLayerToLoad__FPP19st_PACKER_READ_DATAPP19st_PACKER_LTOC_NODE
// Start address: 0x1f91f0
int32 PKR_findNextLayerToLoad(st_PACKER_READ_DATA** work_on_pkg, st_PACKER_LTOC_NODE** next_layer)
{
	st_PACKER_READ_DATA* tmppr;
	st_PACKER_LTOC_NODE* tmplay;
	int32 i;
	int32 j;
}

// PKR_LayerMemRelease__FP19st_PACKER_READ_DATAP19st_PACKER_LTOC_NODE
// Start address: 0x1f9300
void PKR_LayerMemRelease(st_PACKER_LTOC_NODE* layer)
{
	en_PKR_LAYER_LOAD_DEST loaddest;
}

// PKR_LayerMemReserve__FP19st_PACKER_READ_DATAP19st_PACKER_LTOC_NODE
// Start address: 0x1f9420
int8* PKR_LayerMemReserve(st_PACKER_READ_DATA* pr, st_PACKER_LTOC_NODE* layer)
{
	int8* mem;
	en_PKR_LAYER_LOAD_DEST loaddest;
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
}

// PKR_parse_TOC__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f9990
int32 PKR_parse_TOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	int32 is_ok;
	uint32 cid;
	int32 done;
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
}

// PKRLoadStep__Fi
// Start address: 0x1fa170
int32 PKRLoadStep()
{
	int32 more_todo;
}

// PKRShutdown__Fv
// Start address: 0x1fa180
int32 PKRShutdown()
{
}

// PKRStartup__Fv
// Start address: 0x1fa1a0
int32 PKRStartup()
{
}

// PKRGetReadFuncs__Fi
// Start address: 0x1fa2f0
st_PACKER_READ_FUNCS* PKRGetReadFuncs(int32 apiver)
{
}

