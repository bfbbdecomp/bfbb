typedef struct st_STRAN_SCENE;
typedef struct st_PACKER_READ_DATA;
typedef struct st_PACKER_ASSETTYPE;
typedef struct st_STRAN_DATA;
typedef struct st_PKR_ASSET_TOCINFO;
typedef struct st_PACKER_READ_FUNCS;
typedef enum en_LAYER_TYPE;

typedef u32(*type_0)(st_PACKER_READ_DATA*, u32);
typedef void(*type_1)(void*, u32, void*);
typedef void*(*type_2)(st_PACKER_READ_DATA*, u32, s8*, void*);
typedef void*(*type_4)(st_PACKER_READ_DATA*, u32, s32, u32*);
typedef void*(*type_5)(void*, u32, void*, u32, u32*);
typedef void*(*type_6)(void*, u32, void*, void*, u32, u32*);
typedef s32(*type_7)(st_PACKER_READ_DATA*, u32);
typedef s32(*type_8)(void*, u32, void*, s32);
typedef void*(*type_9)(void*, u32, void*, s32*, s32*);
typedef s32(*type_11)(st_PACKER_READ_DATA*, u32);
typedef void(*type_12)(void*, u32);
typedef void(*type_13)(void*, u32, void*, s8*);
typedef s32(*type_14)(st_PACKER_READ_DATA*, en_LAYER_TYPE);
typedef s8*(*type_15)(st_PACKER_READ_DATA*, u32);
typedef u32(*type_16)(st_PACKER_READ_DATA*);
typedef s32(*type_18)(st_PACKER_READ_DATA*, u32, st_PKR_ASSET_TOCINFO*);
typedef s32(*type_19)(st_PACKER_READ_DATA*, u32, s32, st_PKR_ASSET_TOCINFO*);
typedef s32(*type_21)(st_PACKER_READ_DATA*, u32);
typedef u32(*type_22)(st_PACKER_READ_DATA*);
typedef void(*type_23)(st_PACKER_READ_DATA*);
typedef s32(*type_24)(void*, f32);
typedef st_PACKER_READ_DATA*(*type_26)(void*, s8*, u32, s32*, st_PACKER_ASSETTYPE*);
typedef void(*type_27)(st_PACKER_READ_DATA*);
typedef s32(*type_29)(st_PACKER_READ_DATA*, en_LAYER_TYPE);

typedef s8 type_3[256];
typedef st_STRAN_SCENE type_10[16];
typedef s8 type_17[2];
typedef s8 type_20[64];
typedef s8 type_25[64];
typedef s8 type_28[16];
typedef s8 type_30[16];

struct st_STRAN_SCENE
{
	u32 scnid;
	s32 lockid;
	st_PACKER_READ_DATA* spkg;
	s32 isHOP;
	void* userdata;
	type_3 fnam;
};

struct st_PACKER_READ_DATA
{
};

struct st_PACKER_ASSETTYPE
{
	u32 typetag;
	u32 tflags;
	s32 typalign;
	type_5 readXForm;
	type_6 writeXForm;
	type_8 assetLoaded;
	type_9 makeData;
	type_1 cleanup;
	type_12 assetUnloaded;
	type_13 writePeek;
};

struct st_STRAN_DATA
{
	type_10 hipscn;
	u32 loadlock;
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

struct st_PACKER_READ_FUNCS
{
	u32 api_ver;
	type_26 Init;
	type_27 Done;
	type_29 LoadLayer;
	type_0 GetAssetSize;
	type_2 LoadAsset;
	type_4 AssetByType;
	type_7 AssetCount;
	type_11 IsAssetReady;
	type_14 SetActive;
	type_15 AssetName;
	type_16 GetBaseSector;
	type_18 GetAssetInfo;
	type_19 GetAssetInfoByType;
	type_21 PkgHasAsset;
	type_22 PkgTimeStamp;
	type_23 PkgDisconnect;
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

type_28 buffer;
type_30 buffer;
s32 g_straninit;
st_STRAN_DATA g_xstdata;
st_PACKER_READ_FUNCS* g_pkrf;
st_PACKER_ASSETTYPE* g_typeHandlers;

st_STRAN_SCENE* XST_find_bySID(u32 sid, s32 findTheHOP);
st_STRAN_SCENE* XST_lock_next();
s8* xST_xAssetID_HIPFullPath(u32 aid, u32* sceneID);
s8* xST_xAssetID_HIPFullPath(u32 aid);
s32 xSTGetAssetInfoByType(u32 type, s32 idx, st_PKR_ASSET_TOCINFO* ainfo);
s32 xSTGetAssetInfo(u32 aid, st_PKR_ASSET_TOCINFO* tocainfo);
void* xSTFindAssetByType(u32 type, s32 idx, u32* size);
s32 xSTAssetCountByType(u32 type);
void* xSTFindAsset(u32 aid, u32* size);
s8* xSTAssetName(void* raw_HIP_asset);
s8* xSTAssetName(u32 aid);
s32 xSTSwitchScene(u32 sid, void* userdata, type_24 progmon);
void xSTDisconnect(u32 sid, s32 flg_hiphop);
f32 xSTLoadStep();
void xSTUnLoadScene(u32 sid, s32 flg_hiphop);
s32 xSTQueueSceneAssets(u32 sid, s32 flg_hiphop);
s32 xSTPreLoadScene(u32 sid, void* userdata, s32 flg_hiphop);
s32 xSTShutdown();
s32 xSTStartup(st_PACKER_ASSETTYPE* handlers);

// XST_find_bySID__FUii
// Start address: 0x20c750
st_STRAN_SCENE* XST_find_bySID(u32 sid, s32 findTheHOP)
{
	st_STRAN_SCENE* da_sdata;
	s32 i;
}

// XST_lock_next__Fv
// Start address: 0x20c7e0
st_STRAN_SCENE* XST_lock_next()
{
	st_STRAN_SCENE* sdata;
	s32 i;
	s32 uselock;
}

// xST_xAssetID_HIPFullPath__FUiPUi
// Start address: 0x20c8a0
s8* xST_xAssetID_HIPFullPath(u32 aid, u32* sceneID)
{
	s8* da_hipname;
	s32 rc;
	s32 i;
}

// xST_xAssetID_HIPFullPath__FUi
// Start address: 0x20c9f0
s8* xST_xAssetID_HIPFullPath(u32 aid)
{
}

// xSTGetAssetInfoByType__FUiiP20st_PKR_ASSET_TOCINFO
// Start address: 0x20ca00
s32 xSTGetAssetInfoByType(u32 type, s32 idx, st_PKR_ASSET_TOCINFO* ainfo)
{
	s32 found;
	st_PKR_ASSET_TOCINFO tocinfo;
	s32 rc;
	s32 i;
	s32 sum;
	s32 cnt;
}

// xSTGetAssetInfo__FUiP20st_PKR_ASSET_TOCINFO
// Start address: 0x20cc10
s32 xSTGetAssetInfo(u32 aid, st_PKR_ASSET_TOCINFO* tocainfo)
{
	s32 found;
	st_PKR_ASSET_TOCINFO tocinfo;
	s32 rc;
	s32 scncnt;
	s32 i;
}

// xSTFindAssetByType__FUiiPUi
// Start address: 0x20cdb0
void* xSTFindAssetByType(u32 type, s32 idx, u32* size)
{
	void* memptr;
	s32 scncnt;
	s32 i;
	s32 sum;
	s32 cnt;
}

// xSTAssetCountByType__FUi
// Start address: 0x20cf40
s32 xSTAssetCountByType(u32 type)
{
	s32 sum;
	s32 cnt;
	s32 scncnt;
	s32 i;
}

// xSTFindAsset__FUiPUi
// Start address: 0x20d060
void* xSTFindAsset(u32 aid, u32* size)
{
	void* memloc;
	s32 ready;
	s32 scncnt;
	s32 i;
	s32 rc;
}

// xSTAssetName__FPv
// Start address: 0x20d220
s8* xSTAssetName(void* raw_HIP_asset)
{
	s8* aname;
	u32 aid;
	s32 i;
}

// xSTAssetName__FUi
// Start address: 0x20d350
s8* xSTAssetName(u32 aid)
{
	s8* aname;
	s32 i;
}

// xSTSwitchScene__FUiPvPFPvf_i
// Start address: 0x20d470
s32 xSTSwitchScene(u32 sid, void* userdata, type_24 progmon)
{
	st_STRAN_SCENE* sdata;
	s32 rc;
	s32 i;
}

// xSTDisconnect__FUii
// Start address: 0x20d540
void xSTDisconnect(u32 sid, s32 flg_hiphop)
{
	st_STRAN_SCENE* sdata;
}

// xSTLoadStep__FUi
// Start address: 0x20d590
f32 xSTLoadStep()
{
	f32 pct;
	s32 rc;
}

// xSTUnLoadScene__FUii
// Start address: 0x20d5e0
void xSTUnLoadScene(u32 sid, s32 flg_hiphop)
{
	st_STRAN_SCENE* sdata;
	s32 cnt;
	s32 i;
}

// xSTQueueSceneAssets__FUii
// Start address: 0x20d810
s32 xSTQueueSceneAssets(u32 sid, s32 flg_hiphop)
{
	s32 result;
	st_STRAN_SCENE* sdata;
}

// xSTPreLoadScene__FUiPvi
// Start address: 0x20d880
s32 xSTPreLoadScene(u32 sid, void* userdata, s32 flg_hiphop)
{
	s32 result;
	st_STRAN_SCENE* sdata;
	s32 cltver;
}

// xSTShutdown__Fv
// Start address: 0x20dc70
s32 xSTShutdown()
{
}

// xSTStartup__FP19st_PACKER_ASSETTYPE
// Start address: 0x20dd40
s32 xSTStartup(st_PACKER_ASSETTYPE* handlers)
{
}

