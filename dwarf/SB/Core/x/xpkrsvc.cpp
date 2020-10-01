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

typedef void(*type_0)(void*, u32);
typedef s32(*type_1)(st_PACKER_READ_DATA*, u32);
typedef void(*type_2)(void*, u32, void*, s8*);
typedef st_HIPLOADDATA*(*type_3)(s8*, s8*, s32);
typedef s32(*type_5)(st_PACKER_READ_DATA*, en_LAYER_TYPE);
typedef s32(*type_6)(void*, void*);
typedef void(*type_7)(st_HIPLOADDATA*);
typedef u32(*type_9)(st_HIPLOADDATA*);
typedef s8*(*type_10)(st_PACKER_READ_DATA*, u32);
typedef s32(*type_11)(void*, void*);
typedef u32(*type_13)(st_HIPLOADDATA*);
typedef u32(*type_14)(st_PACKER_READ_DATA*);
typedef void(*type_15)(st_HIPLOADDATA*);
typedef s32(*type_16)(st_PACKER_READ_DATA*, u32, st_PKR_ASSET_TOCINFO*);
typedef s32(*type_17)(st_HIPLOADDATA*, s8*, s32);
typedef s32(*type_18)(u32, en_GENERATE_ERROR, s8*, s8*);
typedef void(*type_19)(RwResEntry*);
typedef s32(*type_20)(st_PACKER_READ_DATA*, u32, s32, st_PKR_ASSET_TOCINFO*);
typedef s32(*type_21)(st_HIPLOADDATA*, s16*, s32);
typedef s32(*type_22)(st_HIPLOADDATA*, s32*, s32);
typedef s32(*type_23)(st_PACKER_READ_DATA*, u32);
typedef s32(*type_24)(void*, u32, s8*, s8*);
typedef u32(*type_25)(st_PACKER_READ_DATA*);
typedef s32(*type_26)(st_HIPLOADDATA*, f32*, s32);
typedef void(*type_28)(st_PACKER_READ_DATA*);
typedef s32(*type_29)(st_HIPLOADDATA*, s8*);
typedef void*(*type_30)(void*, u32, void*, u32, u32*);
typedef s32(*type_31)(st_HIPLOADDATA*, s32, s32);
typedef void(*type_33)(st_HIPLOADDATA*, s32);
typedef void*(*type_34)(void*, u32, void*, void*, u32, u32*);
typedef en_READ_ASYNC_STATUS(*type_36)(st_HIPLOADDATA*);
typedef void(*type_38)(RwResEntry*);
typedef st_PACKER_READ_DATA*(*type_40)(void*, s8*, u32, s32*, st_PACKER_ASSETTYPE*);
typedef s32(*type_41)(void*, u32, void*, s32);
typedef void(*type_43)(st_PACKER_READ_DATA*);
typedef s32(*type_45)(st_PACKER_READ_DATA*, en_LAYER_TYPE);
typedef void*(*type_47)(void*, u32, void*, s32*, s32*);
typedef u32(*type_48)(st_PACKER_READ_DATA*, u32);
typedef void(*type_49)(void*, u32, void*);
typedef void*(*type_50)(st_PACKER_READ_DATA*, u32, s8*, void*);
typedef void*(*type_52)(st_PACKER_READ_DATA*, u32, s32, u32*);
typedef s32(*type_57)(st_PACKER_READ_DATA*, u32);

typedef u32 type_4[4096];
typedef st_XORDEREDARRAY type_8[129];
typedef s8 type_12[32];
typedef st_PACKER_READ_DATA type_27[16];
typedef s8 type_32[32];
typedef s8 type_35[32];
typedef s8 type_37[256];
typedef s8 type_39[32];
typedef s8 type_42[32];
typedef s8 type_44[256];
typedef s8 type_46[256];
typedef s8 type_51[256];
typedef s32 type_53[129];
typedef s8* type_54[11];
typedef s8 type_55[128];
typedef s8 type_56[128];

struct st_PACKER_READ_DATA
{
	st_PACKER_ASSETTYPE* types;
	void* userdata;
	u32 opts;
	u32 pkgver;
	s32 cltver;
	s32 subver;
	s32 compatver;
	st_HIPLOADDATA* pkg;
	u32 base_sector;
	s32 lockid;
	type_55 packfile;
	s32 asscnt;
	s32 laycnt;
	st_XORDEREDARRAY asstoc;
	st_XORDEREDARRAY laytoc;
	st_PACKER_ATOC_NODE* pool_anode;
	s32 pool_nextaidx;
	type_8 typelist;
	s32 time_made;
	s32 time_mod;
};

struct st_HIPLOADDATA
{
};

struct st_PACKER_ATOC_NODE
{
	u32 aid;
	u32 asstype;
	s32 d_off;
	s32 d_size;
	s32 d_pad;
	u32 d_chksum;
	s32 assalign;
	s32 infoflag;
	s32 loadflag;
	s8* memloc;
	s32 x_size;
	s32 readcnt;
	s32 readrem;
	st_PACKER_ASSETTYPE* typeref;
	st_HIPLOADDATA* ownpkg;
	st_PACKER_READ_DATA* ownpr;
	type_12 basename;
};

struct st_PACKER_LTOC_NODE
{
	en_LAYER_TYPE laytyp;
	st_XORDEREDARRAY assref;
	s32 flg_ldstat;
	s32 danglecnt;
	u32 chksum;
	s32 laysize;
	s8* laymem;
	s8* laytru;
};

struct st_PACKER_ASSETTYPE
{
	u32 typetag;
	u32 tflags;
	s32 typalign;
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
	s32 lockid;
	u32 pkropt;
	s32 cltver;
	type_37 packfile;
	s32 sectalign;
	s32 dassalign;
	st_XORDEREDARRAY asslist;
	st_XORDEREDARRAY laylist;
	s32 off_lg_asset;
	s32 off_lg_layer;
	s32 off_lg_xform;
	type_44 hdrfile;
	type_24 hdrfunc;
	type_18 generrf;
};

struct st_PACKER_READ_FUNCS
{
	u32 api_ver;
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
	s32 cnt;
	s32 max;
	s32 warnlvl;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_19 destroyNotify;
};

struct st_PKR_ASSET_TOCINFO
{
	u32 aid;
	st_PACKER_ASSETTYPE* typeref;
	u32 sector;
	u32 plus_offset;
	u32 size;
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
	s32 globalsOffset;
	s32 numInstances;
};

st_PACKER_READ_FUNCS g_pkr_read_funcmap_original;
st_PACKER_READ_FUNCS g_pkr_read_funcmap;
st_HIPLOADFUNCS* g_hiprf;
type_27 g_readdatainst;
u32 g_loadlock;
s32 pkr_sector_size;
s32 g_packinit;
s32 g_memalloc_pair;
s32 g_memalloc_runtot;
s32 g_memalloc_runfree;
type_54 g_strz_layername;
RwResEntry* g_RWarena_resEntry;
RwResEntry* g_RWarena_resOwner;
s32 g_RWarena_bufsize;
RwModuleInfo resourcesModule;
type_4 ourGlobals;
type_38 PKR_special_loadbuf_killed;
u32 gActiveHeap;
type_11 OrdTest_R_AssetID;
type_6 OrdComp_R_Asset;

void* PKR_specialGet_loadbuf(st_PACKER_READ_DATA* pr, s32 amount, s32 align);
void PKR_special_loadbuf_killed();
void PKR_relmem(u32 id, s32 blksize, void* memptr, s32 isTemp);
void* PKR_getmem(u32 id, s32 amount, s32 align, s32 isTemp, s8** memtru);
void PKR_bld_typecnt(st_PACKER_READ_DATA* pr);
st_PACKER_ASSETTYPE* PKR_type2typeref(u32 type, st_PACKER_ASSETTYPE* typelist);
s32 LOD_r_STRM(st_HIPLOADDATA* pkg);
s32 LOD_r_LHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
s32 LOD_r_LTOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
s32 LOD_r_ADBG(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr, st_PACKER_ATOC_NODE* assnode);
s32 LOD_r_AHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
s32 LOD_r_ATOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
s32 LOD_r_DICT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
s32 LOD_r_PLAT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
s32 ValidatePlatform(s8* plat, s8* vid, s8* lang, s8* title);
s32 LOD_r_PVER(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
s32 LOD_r_PACK(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
s32 OrdTest_R_AssetID(void* vkey, void* vitem);
s32 OrdComp_R_Asset(void* vkey, void* vitem);
s32 PKR_FRIEND_assetIsGameDup(u32 aid, st_PACKER_READ_DATA* skippr, s32 oursize, u32 ourtype, u32 chksum);
s32 PKR_PkgHasAsset(st_PACKER_READ_DATA* pr, u32 aid);
s32 PKR_GetAssetInfoByType(st_PACKER_READ_DATA* pr, u32 type, s32 idx, st_PKR_ASSET_TOCINFO* tocinfo);
s32 PKR_GetAssetInfo(st_PACKER_READ_DATA* pr, u32 aid, st_PKR_ASSET_TOCINFO* tocinfo);
u32 PKR_GetBaseSector(st_PACKER_READ_DATA* pr);
s8* PKR_AssetName(st_PACKER_READ_DATA* pr, u32 aid);
u32 PKRAssetIDFromInst(void* asset_inst);
void PKR_Disconnect(st_PACKER_READ_DATA* pr);
u32 PKR_getPackTimestamp(st_PACKER_READ_DATA* pr);
s32 PKR_IsAssetReady(st_PACKER_READ_DATA* pr, u32 aid);
void* PKR_AssetByType(st_PACKER_READ_DATA* pr, u32 type, s32 idx, u32* size);
s32 PKR_AssetCount(st_PACKER_READ_DATA* pr, u32 type);
u32 PKR_GetAssetSize(st_PACKER_READ_DATA* pr, u32 aid);
void* PKR_LoadAsset(st_PACKER_READ_DATA* pr, u32 aid);
s32 PKR_LoadLayer();
void* PKR_FindAsset(st_PACKER_READ_DATA* pr, u32 aid);
void PKR_xform_asset(st_PACKER_ATOC_NODE* assnode, s32 dumpable_layer);
void PKR_xformLayerAssets(st_PACKER_LTOC_NODE* laynode);
void PKR_updateLayerAssets(st_PACKER_LTOC_NODE* laynode);
s32 PKR_findNextLayerToLoad(st_PACKER_READ_DATA** work_on_pkg, st_PACKER_LTOC_NODE** next_layer);
void PKR_LayerMemRelease(st_PACKER_LTOC_NODE* layer);
s8* PKR_LayerMemReserve(st_PACKER_READ_DATA* pr, st_PACKER_LTOC_NODE* layer);
s32 PKR_LoadStep_Async();
s32 PKR_parse_TOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
s32 PKR_SetActive(st_PACKER_READ_DATA* pr, en_LAYER_TYPE layer);
void PKR_ReadDone(st_PACKER_READ_DATA* pr);
st_PACKER_READ_DATA* PKR_ReadInit(void* userdata, s8* pkgfile, u32 opts, s32* cltver, st_PACKER_ASSETTYPE* typelist);
s32 PKRLoadStep();
s32 PKRShutdown();
s32 PKRStartup();
st_PACKER_READ_FUNCS* PKRGetReadFuncs(s32 apiver);

// PKR_specialGet_loadbuf__FP19st_PACKER_READ_DATAii
// Start address: 0x1f7010
void* PKR_specialGet_loadbuf(st_PACKER_READ_DATA* pr, s32 amount, s32 align)
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
void PKR_relmem(u32 id, s32 blksize, void* memptr, s32 isTemp)
{
}

// PKR_getmem__FUiiUiiiPPc
// Start address: 0x1f7180
void* PKR_getmem(u32 id, s32 amount, s32 align, s32 isTemp, s8** memtru)
{
	void* memptr;
}

// PKR_bld_typecnt__FP19st_PACKER_READ_DATA
// Start address: 0x1f7270
void PKR_bld_typecnt(st_PACKER_READ_DATA* pr)
{
	st_PACKER_LTOC_NODE* laynode;
	st_PACKER_ATOC_NODE* assnode;
	s32 i;
	s32 j;
	s32 idx;
	type_53 typcnt;
	st_XORDEREDARRAY* tmplist;
	u32 lasttype;
	s32 lasttidx;
}

// PKR_type2typeref__FUiP19st_PACKER_ASSETTYPE
// Start address: 0x1f7580
st_PACKER_ASSETTYPE* PKR_type2typeref(u32 type, st_PACKER_ASSETTYPE* typelist)
{
	st_PACKER_ASSETTYPE* da_type;
	st_PACKER_ASSETTYPE* tmptype;
}

// LOD_r_STRM__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f75f0
s32 LOD_r_STRM(st_HIPLOADDATA* pkg)
{
	u32 cid;
}

// LOD_r_LHDR__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f76a0
s32 LOD_r_LHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	u32 cid;
	s32 ival;
	en_LAYER_TYPE laytyp;
	s32 refcnt;
	s32 idx;
	s32 i;
	st_PACKER_LTOC_NODE* laynode;
	st_PACKER_ATOC_NODE* assnode;
}

// LOD_r_LTOC__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f78f0
s32 LOD_r_LTOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	u32 cid;
}

// LOD_r_ADBG__FP14st_HIPLOADDATAP19st_PACKER_READ_DATAP19st_PACKER_ATOC_NODE
// Start address: 0x1f79c0
s32 LOD_r_ADBG(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr, st_PACKER_ATOC_NODE* assnode)
{
	s32 ival;
	type_46 tmpbuf;
}

// LOD_r_AHDR__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f7ac0
s32 LOD_r_AHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	u32 cid;
	s32 ival;
	s32 isdup;
}

// LOD_r_ATOC__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f7ce0
s32 LOD_r_ATOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	u32 cid;
}

// LOD_r_DICT__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f7db0
s32 LOD_r_DICT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	u32 cid;
}

// LOD_r_PLAT__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f7e80
s32 LOD_r_PLAT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	s32 result;
	s32 plattag;
	type_32 platname;
	type_35 vidname;
	type_39 langname;
	type_42 titlename;
	s32 n;
	s32 rc;
}

// ValidatePlatform__FP14st_HIPLOADDATAP19st_PACKER_READ_DATAiPcPcPcPc
// Start address: 0x1f8000
s32 ValidatePlatform(s8* plat, s8* vid, s8* lang, s8* title)
{
	type_56 fullname;
	s32 rc;
}

// LOD_r_PVER__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f82c0
s32 LOD_r_PVER(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	s32 ver;
	s32 amt;
}

// LOD_r_PACK__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f8380
s32 LOD_r_PACK(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	u32 cid;
}

// OrdTest_R_AssetID__FPCvPv
// Start address: 0x1f85e0
s32 OrdTest_R_AssetID(void* vkey, void* vitem)
{
	s32 rc;
	u32 key;
}

// OrdComp_R_Asset__FPvPv
// Start address: 0x1f8620
s32 OrdComp_R_Asset(void* vkey, void* vitem)
{
	s32 rc;
}

// PKR_FRIEND_assetIsGameDup__FUiPC19st_PACKER_READ_DATAiUiUiPc
// Start address: 0x1f8670
s32 PKR_FRIEND_assetIsGameDup(u32 aid, st_PACKER_READ_DATA* skippr, s32 oursize, u32 ourtype, u32 chksum)
{
	s32 is_dup;
	st_PACKER_ATOC_NODE* tmp_ass;
	s32 i;
	s32 idx;
}

// PKR_PkgHasAsset__FP19st_PACKER_READ_DATAUi
// Start address: 0x1f8840
s32 PKR_PkgHasAsset(st_PACKER_READ_DATA* pr, u32 aid)
{
	s32 rc;
	s32 idx;
}

// PKR_GetAssetInfoByType__FP19st_PACKER_READ_DATAUiiP20st_PKR_ASSET_TOCINFO
// Start address: 0x1f88d0
s32 PKR_GetAssetInfoByType(st_PACKER_READ_DATA* pr, u32 type, s32 idx, st_PKR_ASSET_TOCINFO* tocinfo)
{
	st_PACKER_ATOC_NODE* assnode;
	st_XORDEREDARRAY* typlist;
}

// PKR_GetAssetInfo__FP19st_PACKER_READ_DATAUiP20st_PKR_ASSET_TOCINFO
// Start address: 0x1f8a20
s32 PKR_GetAssetInfo(st_PACKER_READ_DATA* pr, u32 aid, st_PKR_ASSET_TOCINFO* tocinfo)
{
	s32 idx;
	st_PACKER_ATOC_NODE* assnode;
}

// PKR_GetBaseSector__FP19st_PACKER_READ_DATA
// Start address: 0x1f8b00
u32 PKR_GetBaseSector(st_PACKER_READ_DATA* pr)
{
}

// PKR_AssetName__FP19st_PACKER_READ_DATAUi
// Start address: 0x1f8b10
s8* PKR_AssetName(st_PACKER_READ_DATA* pr, u32 aid)
{
	s8* da_name;
	s32 idx;
}

// PKRAssetIDFromInst__FPv
// Start address: 0x1f8b80
u32 PKRAssetIDFromInst(void* asset_inst)
{
}

// PKR_Disconnect__FP19st_PACKER_READ_DATA
// Start address: 0x1f8b90
void PKR_Disconnect(st_PACKER_READ_DATA* pr)
{
}

// PKR_getPackTimestamp__FP19st_PACKER_READ_DATA
// Start address: 0x1f8bd0
u32 PKR_getPackTimestamp(st_PACKER_READ_DATA* pr)
{
}

// PKR_IsAssetReady__FP19st_PACKER_READ_DATAUi
// Start address: 0x1f8be0
s32 PKR_IsAssetReady(st_PACKER_READ_DATA* pr, u32 aid)
{
	s32 is_ok;
	s32 idx;
}

// PKR_AssetByType__FP19st_PACKER_READ_DATAUiiPUi
// Start address: 0x1f8c60
void* PKR_AssetByType(st_PACKER_READ_DATA* pr, u32 type, s32 idx, u32* size)
{
	st_XORDEREDARRAY* typlist;
	st_PACKER_ATOC_NODE* assnode;
}

// PKR_AssetCount__FP19st_PACKER_READ_DATAUi
// Start address: 0x1f8d20
s32 PKR_AssetCount(st_PACKER_READ_DATA* pr, u32 type)
{
	s32 cnt;
}

// PKR_GetAssetSize__FP19st_PACKER_READ_DATAUi
// Start address: 0x1f8d90
u32 PKR_GetAssetSize(st_PACKER_READ_DATA* pr, u32 aid)
{
	s32 idx;
	st_PACKER_ATOC_NODE* assnode;
}

// PKR_LoadAsset__FP19st_PACKER_READ_DATAUiPCcPv
// Start address: 0x1f8e20
void* PKR_LoadAsset(st_PACKER_READ_DATA* pr, u32 aid)
{
}

// PKR_LoadLayer__FP19st_PACKER_READ_DATA13en_LAYER_TYPE
// Start address: 0x1f8e30
s32 PKR_LoadLayer()
{
}

// PKR_FindAsset__FP19st_PACKER_READ_DATAUi
// Start address: 0x1f8e40
void* PKR_FindAsset(st_PACKER_READ_DATA* pr, u32 aid)
{
	s32 idx;
	st_PACKER_ATOC_NODE* assnode;
}

// PKR_xform_asset__FP19st_PACKER_ATOC_NODEi
// Start address: 0x1f8eb0
void PKR_xform_asset(st_PACKER_ATOC_NODE* assnode, s32 dumpable_layer)
{
	s8* xformloc;
	st_PACKER_ASSETTYPE* atype;
}

// PKR_xformLayerAssets__FP19st_PACKER_LTOC_NODE
// Start address: 0x1f8fe0
void PKR_xformLayerAssets(st_PACKER_LTOC_NODE* laynode)
{
	s32 i;
	s32 will_be_dumped;
	st_PACKER_ATOC_NODE* tmpass;
	en_PKR_LAYER_LOAD_DEST loaddest;
}

// PKR_updateLayerAssets__FP19st_PACKER_LTOC_NODE
// Start address: 0x1f9100
void PKR_updateLayerAssets(st_PACKER_LTOC_NODE* laynode)
{
	s32 i;
	st_PACKER_ATOC_NODE* tmpass;
	s32 lay_hip_pos;
}

// PKR_findNextLayerToLoad__FPP19st_PACKER_READ_DATAPP19st_PACKER_LTOC_NODE
// Start address: 0x1f91f0
s32 PKR_findNextLayerToLoad(st_PACKER_READ_DATA** work_on_pkg, st_PACKER_LTOC_NODE** next_layer)
{
	st_PACKER_READ_DATA* tmppr;
	st_PACKER_LTOC_NODE* tmplay;
	s32 i;
	s32 j;
}

// PKR_LayerMemRelease__FP19st_PACKER_READ_DATAP19st_PACKER_LTOC_NODE
// Start address: 0x1f9300
void PKR_LayerMemRelease(st_PACKER_LTOC_NODE* layer)
{
	en_PKR_LAYER_LOAD_DEST loaddest;
}

// PKR_LayerMemReserve__FP19st_PACKER_READ_DATAP19st_PACKER_LTOC_NODE
// Start address: 0x1f9420
s8* PKR_LayerMemReserve(st_PACKER_READ_DATA* pr, st_PACKER_LTOC_NODE* layer)
{
	s8* mem;
	en_PKR_LAYER_LOAD_DEST loaddest;
}

// PKR_LoadStep_Async__Fv
// Start address: 0x1f9550
s32 PKR_LoadStep_Async()
{
	s32 moretodo;
	s32 rc;
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
s32 PKR_parse_TOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	s32 is_ok;
	u32 cid;
	s32 done;
}

// PKR_SetActive__FP19st_PACKER_READ_DATA13en_LAYER_TYPE
// Start address: 0x1f9b40
s32 PKR_SetActive(st_PACKER_READ_DATA* pr, en_LAYER_TYPE layer)
{
	s32 result;
	s32 rc;
	s32 i;
	s32 j;
	st_PACKER_ATOC_NODE* assnode;
	st_PACKER_LTOC_NODE* laynode;
}

// PKR_ReadDone__FP19st_PACKER_READ_DATA
// Start address: 0x1f9cc0
void PKR_ReadDone(st_PACKER_READ_DATA* pr)
{
	s32 i;
	s32 j;
	s32 lockid;
	st_PACKER_ATOC_NODE* assnode;
	st_PACKER_LTOC_NODE* laynode;
	st_XORDEREDARRAY* tmplist;
}

// PKR_ReadInit__FPvPcUiPiP19st_PACKER_ASSETTYPE
// Start address: 0x1f9f50
st_PACKER_READ_DATA* PKR_ReadInit(void* userdata, s8* pkgfile, u32 opts, s32* cltver, st_PACKER_ASSETTYPE* typelist)
{
	st_PACKER_READ_DATA* pr;
	s32 i;
	s32 uselock;
	s8* tocbuf_RAW;
	s8* tocbuf_aligned;
}

// PKRLoadStep__Fi
// Start address: 0x1fa170
s32 PKRLoadStep()
{
	s32 more_todo;
}

// PKRShutdown__Fv
// Start address: 0x1fa180
s32 PKRShutdown()
{
}

// PKRStartup__Fv
// Start address: 0x1fa1a0
s32 PKRStartup()
{
}

// PKRGetReadFuncs__Fi
// Start address: 0x1fa2f0
st_PACKER_READ_FUNCS* PKRGetReadFuncs(s32 apiver)
{
}

