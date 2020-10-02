typedef struct st_STRAN_SCENE;
typedef struct st_PACKER_READ_DATA;
typedef struct st_PACKER_ASSETTYPE;
typedef struct st_STRAN_DATA;
typedef struct st_PKR_ASSET_TOCINFO;
typedef struct st_PACKER_READ_FUNCS;
typedef enum en_LAYER_TYPE;

typedef uint32(*type_0)(st_PACKER_READ_DATA*, uint32);
typedef void(*type_1)(void*, uint32, void*);
typedef void*(*type_2)(st_PACKER_READ_DATA*, uint32, int8*, void*);
typedef void*(*type_4)(st_PACKER_READ_DATA*, uint32, int32, uint32*);
typedef void*(*type_5)(void*, uint32, void*, uint32, uint32*);
typedef void*(*type_6)(void*, uint32, void*, void*, uint32, uint32*);
typedef int32(*type_7)(st_PACKER_READ_DATA*, uint32);
typedef int32(*type_8)(void*, uint32, void*, int32);
typedef void*(*type_9)(void*, uint32, void*, int32*, int32*);
typedef int32(*type_11)(st_PACKER_READ_DATA*, uint32);
typedef void(*type_12)(void*, uint32);
typedef void(*type_13)(void*, uint32, void*, int8*);
typedef int32(*type_14)(st_PACKER_READ_DATA*, en_LAYER_TYPE);
typedef int8*(*type_15)(st_PACKER_READ_DATA*, uint32);
typedef uint32(*type_16)(st_PACKER_READ_DATA*);
typedef int32(*type_18)(st_PACKER_READ_DATA*, uint32, st_PKR_ASSET_TOCINFO*);
typedef int32(*type_19)(st_PACKER_READ_DATA*, uint32, int32, st_PKR_ASSET_TOCINFO*);
typedef int32(*type_21)(st_PACKER_READ_DATA*, uint32);
typedef uint32(*type_22)(st_PACKER_READ_DATA*);
typedef void(*type_23)(st_PACKER_READ_DATA*);
typedef int32(*type_24)(void*, float32);
typedef st_PACKER_READ_DATA*(*type_26)(void*, int8*, uint32, int32*, st_PACKER_ASSETTYPE*);
typedef void(*type_27)(st_PACKER_READ_DATA*);
typedef int32(*type_29)(st_PACKER_READ_DATA*, en_LAYER_TYPE);

typedef int8 type_3[256];
typedef st_STRAN_SCENE type_10[16];
typedef int8 type_17[2];
typedef int8 type_20[64];
typedef int8 type_25[64];
typedef int8 type_28[16];
typedef int8 type_30[16];

struct st_STRAN_SCENE
{
	uint32 scnid;
	int32 lockid;
	st_PACKER_READ_DATA* spkg;
	int32 isHOP;
	void* userdata;
	type_3 fnam;
};

struct st_PACKER_READ_DATA
{
};

struct st_PACKER_ASSETTYPE
{
	uint32 typetag;
	uint32 tflags;
	int32 typalign;
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
	uint32 loadlock;
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

struct st_PACKER_READ_FUNCS
{
	uint32 api_ver;
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
int32 g_straninit;
st_STRAN_DATA g_xstdata;
st_PACKER_READ_FUNCS* g_pkrf;
st_PACKER_ASSETTYPE* g_typeHandlers;

st_STRAN_SCENE* XST_find_bySID(uint32 sid, int32 findTheHOP);
st_STRAN_SCENE* XST_lock_next();
int8* xST_xAssetID_HIPFullPath(uint32 aid, uint32* sceneID);
int8* xST_xAssetID_HIPFullPath(uint32 aid);
int32 xSTGetAssetInfoByType(uint32 type, int32 idx, st_PKR_ASSET_TOCINFO* ainfo);
int32 xSTGetAssetInfo(uint32 aid, st_PKR_ASSET_TOCINFO* tocainfo);
void* xSTFindAssetByType(uint32 type, int32 idx, uint32* size);
int32 xSTAssetCountByType(uint32 type);
void* xSTFindAsset(uint32 aid, uint32* size);
int8* xSTAssetName(void* raw_HIP_asset);
int8* xSTAssetName(uint32 aid);
int32 xSTSwitchScene(uint32 sid, void* userdata, type_24 progmon);
void xSTDisconnect(uint32 sid, int32 flg_hiphop);
float32 xSTLoadStep();
void xSTUnLoadScene(uint32 sid, int32 flg_hiphop);
int32 xSTQueueSceneAssets(uint32 sid, int32 flg_hiphop);
int32 xSTPreLoadScene(uint32 sid, void* userdata, int32 flg_hiphop);
int32 xSTShutdown();
int32 xSTStartup(st_PACKER_ASSETTYPE* handlers);

// XST_find_bySID__FUii
// Start address: 0x20c750
st_STRAN_SCENE* XST_find_bySID(uint32 sid, int32 findTheHOP)
{
	st_STRAN_SCENE* da_sdata;
	int32 i;
}

// XST_lock_next__Fv
// Start address: 0x20c7e0
st_STRAN_SCENE* XST_lock_next()
{
	st_STRAN_SCENE* sdata;
	int32 i;
	int32 uselock;
}

// xST_xAssetID_HIPFullPath__FUiPUi
// Start address: 0x20c8a0
int8* xST_xAssetID_HIPFullPath(uint32 aid, uint32* sceneID)
{
	int8* da_hipname;
	int32 rc;
	int32 i;
}

// xST_xAssetID_HIPFullPath__FUi
// Start address: 0x20c9f0
int8* xST_xAssetID_HIPFullPath(uint32 aid)
{
}

// xSTGetAssetInfoByType__FUiiP20st_PKR_ASSET_TOCINFO
// Start address: 0x20ca00
int32 xSTGetAssetInfoByType(uint32 type, int32 idx, st_PKR_ASSET_TOCINFO* ainfo)
{
	int32 found;
	st_PKR_ASSET_TOCINFO tocinfo;
	int32 rc;
	int32 i;
	int32 sum;
	int32 cnt;
}

// xSTGetAssetInfo__FUiP20st_PKR_ASSET_TOCINFO
// Start address: 0x20cc10
int32 xSTGetAssetInfo(uint32 aid, st_PKR_ASSET_TOCINFO* tocainfo)
{
	int32 found;
	st_PKR_ASSET_TOCINFO tocinfo;
	int32 rc;
	int32 scncnt;
	int32 i;
}

// xSTFindAssetByType__FUiiPUi
// Start address: 0x20cdb0
void* xSTFindAssetByType(uint32 type, int32 idx, uint32* size)
{
	void* memptr;
	int32 scncnt;
	int32 i;
	int32 sum;
	int32 cnt;
}

// xSTAssetCountByType__FUi
// Start address: 0x20cf40
int32 xSTAssetCountByType(uint32 type)
{
	int32 sum;
	int32 cnt;
	int32 scncnt;
	int32 i;
}

// xSTFindAsset__FUiPUi
// Start address: 0x20d060
void* xSTFindAsset(uint32 aid, uint32* size)
{
	void* memloc;
	int32 ready;
	int32 scncnt;
	int32 i;
	int32 rc;
}

// xSTAssetName__FPv
// Start address: 0x20d220
int8* xSTAssetName(void* raw_HIP_asset)
{
	int8* aname;
	uint32 aid;
	int32 i;
}

// xSTAssetName__FUi
// Start address: 0x20d350
int8* xSTAssetName(uint32 aid)
{
	int8* aname;
	int32 i;
}

// xSTSwitchScene__FUiPvPFPvf_i
// Start address: 0x20d470
int32 xSTSwitchScene(uint32 sid, void* userdata, type_24 progmon)
{
	st_STRAN_SCENE* sdata;
	int32 rc;
	int32 i;
}

// xSTDisconnect__FUii
// Start address: 0x20d540
void xSTDisconnect(uint32 sid, int32 flg_hiphop)
{
	st_STRAN_SCENE* sdata;
}

// xSTLoadStep__FUi
// Start address: 0x20d590
float32 xSTLoadStep()
{
	float32 pct;
	int32 rc;
}

// xSTUnLoadScene__FUii
// Start address: 0x20d5e0
void xSTUnLoadScene(uint32 sid, int32 flg_hiphop)
{
	st_STRAN_SCENE* sdata;
	int32 cnt;
	int32 i;
}

// xSTQueueSceneAssets__FUii
// Start address: 0x20d810
int32 xSTQueueSceneAssets(uint32 sid, int32 flg_hiphop)
{
	int32 result;
	st_STRAN_SCENE* sdata;
}

// xSTPreLoadScene__FUiPvi
// Start address: 0x20d880
int32 xSTPreLoadScene(uint32 sid, void* userdata, int32 flg_hiphop)
{
	int32 result;
	st_STRAN_SCENE* sdata;
	int32 cltver;
}

// xSTShutdown__Fv
// Start address: 0x20dc70
int32 xSTShutdown()
{
}

// xSTStartup__FP19st_PACKER_ASSETTYPE
// Start address: 0x20dd40
int32 xSTStartup(st_PACKER_ASSETTYPE* handlers)
{
}

