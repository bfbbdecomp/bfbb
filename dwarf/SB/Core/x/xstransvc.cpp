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
	int8 fnam[256];
};

struct st_PACKER_READ_DATA
{
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

struct st_STRAN_DATA
{
	st_STRAN_SCENE hipscn[16];
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

int8 buffer[16];
int8 buffer[16];
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
int32 xSTSwitchScene(uint32 sid, void* userdata, int32(*progmon)(void*, float32));
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
	// Line 1098, Address: 0x20c750, Func Offset: 0
	// Line 1092, Address: 0x20c75c, Func Offset: 0xc
	// Line 1098, Address: 0x20c760, Func Offset: 0x10
	// Line 1099, Address: 0x20c768, Func Offset: 0x18
	// Line 1098, Address: 0x20c76c, Func Offset: 0x1c
	// Line 1099, Address: 0x20c770, Func Offset: 0x20
	// Line 1102, Address: 0x20c780, Func Offset: 0x30
	// Line 1103, Address: 0x20c78c, Func Offset: 0x3c
	// Line 1104, Address: 0x20c7a0, Func Offset: 0x50
	// Line 1108, Address: 0x20c7b8, Func Offset: 0x68
	// Line 1109, Address: 0x20c7c0, Func Offset: 0x70
	// Line 1113, Address: 0x20c7d0, Func Offset: 0x80
	// Func End, Address: 0x20c7d8, Func Offset: 0x88
}

// XST_lock_next__Fv
// Start address: 0x20c7e0
st_STRAN_SCENE* XST_lock_next()
{
	st_STRAN_SCENE* sdata;
	int32 i;
	int32 uselock;
	// Line 983, Address: 0x20c7e0, Func Offset: 0
	// Line 989, Address: 0x20c7e4, Func Offset: 0x4
	// Line 983, Address: 0x20c7e8, Func Offset: 0x8
	// Line 986, Address: 0x20c7ec, Func Offset: 0xc
	// Line 983, Address: 0x20c7f0, Func Offset: 0x10
	// Line 984, Address: 0x20c7f8, Func Offset: 0x18
	// Line 989, Address: 0x20c7fc, Func Offset: 0x1c
	// Line 990, Address: 0x20c80c, Func Offset: 0x2c
	// Line 992, Address: 0x20c818, Func Offset: 0x38
	// Line 991, Address: 0x20c81c, Func Offset: 0x3c
	// Line 992, Address: 0x20c820, Func Offset: 0x40
	// Line 994, Address: 0x20c838, Func Offset: 0x58
	// Line 992, Address: 0x20c83c, Func Offset: 0x5c
	// Line 994, Address: 0x20c840, Func Offset: 0x60
	// Line 991, Address: 0x20c844, Func Offset: 0x64
	// Line 994, Address: 0x20c84c, Func Offset: 0x6c
	// Line 996, Address: 0x20c858, Func Offset: 0x78
	// Line 998, Address: 0x20c860, Func Offset: 0x80
	// Line 1004, Address: 0x20c870, Func Offset: 0x90
	// Line 1006, Address: 0x20c880, Func Offset: 0xa0
	// Line 1007, Address: 0x20c884, Func Offset: 0xa4
	// Func End, Address: 0x20c898, Func Offset: 0xb8
}

// xST_xAssetID_HIPFullPath__FUiPUi
// Start address: 0x20c8a0
int8* xST_xAssetID_HIPFullPath(uint32 aid, uint32* sceneID)
{
	int8* da_hipname;
	int32 rc;
	int32 i;
	// Line 786, Address: 0x20c8a0, Func Offset: 0
	// Line 793, Address: 0x20c8a4, Func Offset: 0x4
	// Line 786, Address: 0x20c8a8, Func Offset: 0x8
	// Line 787, Address: 0x20c8c4, Func Offset: 0x24
	// Line 786, Address: 0x20c8c8, Func Offset: 0x28
	// Line 793, Address: 0x20c8cc, Func Offset: 0x2c
	// Line 786, Address: 0x20c8d0, Func Offset: 0x30
	// Line 793, Address: 0x20c8d4, Func Offset: 0x34
	// Line 794, Address: 0x20c908, Func Offset: 0x68
	// Line 795, Address: 0x20c910, Func Offset: 0x70
	// Line 799, Address: 0x20c980, Func Offset: 0xe0
	// Line 800, Address: 0x20c994, Func Offset: 0xf4
	// Line 802, Address: 0x20c99c, Func Offset: 0xfc
	// Line 803, Address: 0x20c9a8, Func Offset: 0x108
	// Line 806, Address: 0x20c9b0, Func Offset: 0x110
	// Line 808, Address: 0x20c9c0, Func Offset: 0x120
	// Line 809, Address: 0x20c9c4, Func Offset: 0x124
	// Func End, Address: 0x20c9e8, Func Offset: 0x148
}

// xST_xAssetID_HIPFullPath__FUi
// Start address: 0x20c9f0
int8* xST_xAssetID_HIPFullPath(uint32 aid)
{
	// Line 782, Address: 0x20c9f0, Func Offset: 0
	// Func End, Address: 0x20c9f8, Func Offset: 0x8
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
	// Line 678, Address: 0x20ca00, Func Offset: 0
	// Line 681, Address: 0x20ca04, Func Offset: 0x4
	// Line 678, Address: 0x20ca08, Func Offset: 0x8
	// Line 681, Address: 0x20ca0c, Func Offset: 0xc
	// Line 678, Address: 0x20ca10, Func Offset: 0x10
	// Line 679, Address: 0x20ca20, Func Offset: 0x20
	// Line 678, Address: 0x20ca24, Func Offset: 0x24
	// Line 681, Address: 0x20ca40, Func Offset: 0x40
	// Line 691, Address: 0x20ca60, Func Offset: 0x60
	// Line 694, Address: 0x20ca74, Func Offset: 0x74
	// Line 695, Address: 0x20cab0, Func Offset: 0xb0
	// Line 696, Address: 0x20cab8, Func Offset: 0xb8
	// Line 700, Address: 0x20cb28, Func Offset: 0x128
	// Line 703, Address: 0x20cb40, Func Offset: 0x140
	// Line 705, Address: 0x20cb5c, Func Offset: 0x15c
	// Line 707, Address: 0x20cb6c, Func Offset: 0x16c
	// Line 709, Address: 0x20cb88, Func Offset: 0x188
	// Line 711, Address: 0x20cb90, Func Offset: 0x190
	// Line 720, Address: 0x20cb94, Func Offset: 0x194
	// Line 711, Address: 0x20cb98, Func Offset: 0x198
	// Line 712, Address: 0x20cb9c, Func Offset: 0x19c
	// Line 713, Address: 0x20cba4, Func Offset: 0x1a4
	// Line 714, Address: 0x20cbac, Func Offset: 0x1ac
	// Line 715, Address: 0x20cbb4, Func Offset: 0x1b4
	// Line 721, Address: 0x20cbb8, Func Offset: 0x1b8
	// Line 728, Address: 0x20cbc0, Func Offset: 0x1c0
	// Line 730, Address: 0x20cbd0, Func Offset: 0x1d0
	// Line 731, Address: 0x20cbd4, Func Offset: 0x1d4
	// Func End, Address: 0x20cc04, Func Offset: 0x204
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
	// Line 638, Address: 0x20cc10, Func Offset: 0
	// Line 641, Address: 0x20cc14, Func Offset: 0x4
	// Line 638, Address: 0x20cc18, Func Offset: 0x8
	// Line 641, Address: 0x20cc1c, Func Offset: 0xc
	// Line 638, Address: 0x20cc20, Func Offset: 0x10
	// Line 639, Address: 0x20cc28, Func Offset: 0x18
	// Line 638, Address: 0x20cc2c, Func Offset: 0x1c
	// Line 641, Address: 0x20cc40, Func Offset: 0x30
	// Line 652, Address: 0x20cc60, Func Offset: 0x50
	// Line 653, Address: 0x20cca0, Func Offset: 0x90
	// Line 654, Address: 0x20cca8, Func Offset: 0x98
	// Line 658, Address: 0x20cd18, Func Offset: 0x108
	// Line 659, Address: 0x20cd2c, Func Offset: 0x11c
	// Line 662, Address: 0x20cd34, Func Offset: 0x124
	// Line 664, Address: 0x20cd44, Func Offset: 0x134
	// Line 665, Address: 0x20cd5c, Func Offset: 0x14c
	// Line 668, Address: 0x20cd64, Func Offset: 0x154
	// Line 670, Address: 0x20cd6c, Func Offset: 0x15c
	// Line 672, Address: 0x20cd80, Func Offset: 0x170
	// Line 673, Address: 0x20cd84, Func Offset: 0x174
	// Func End, Address: 0x20cda8, Func Offset: 0x198
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
	// Line 607, Address: 0x20cdb0, Func Offset: 0
	// Line 615, Address: 0x20cdb4, Func Offset: 0x4
	// Line 607, Address: 0x20cdb8, Func Offset: 0x8
	// Line 609, Address: 0x20cdcc, Func Offset: 0x1c
	// Line 607, Address: 0x20cdd0, Func Offset: 0x20
	// Line 615, Address: 0x20cdd4, Func Offset: 0x24
	// Line 607, Address: 0x20cdd8, Func Offset: 0x28
	// Line 612, Address: 0x20cde0, Func Offset: 0x30
	// Line 607, Address: 0x20cde4, Func Offset: 0x34
	// Line 615, Address: 0x20cdf0, Func Offset: 0x40
	// Line 616, Address: 0x20ce28, Func Offset: 0x78
	// Line 617, Address: 0x20ce30, Func Offset: 0x80
	// Line 620, Address: 0x20cea0, Func Offset: 0xf0
	// Line 621, Address: 0x20ceb4, Func Offset: 0x104
	// Line 624, Address: 0x20cecc, Func Offset: 0x11c
	// Line 626, Address: 0x20cee8, Func Offset: 0x138
	// Line 628, Address: 0x20cef0, Func Offset: 0x140
	// Line 629, Address: 0x20cef4, Func Offset: 0x144
	// Line 631, Address: 0x20cf08, Func Offset: 0x158
	// Line 632, Address: 0x20cf0c, Func Offset: 0x15c
	// Func End, Address: 0x20cf38, Func Offset: 0x188
}

// xSTAssetCountByType__FUi
// Start address: 0x20cf40
int32 xSTAssetCountByType(uint32 type)
{
	int32 sum;
	int32 cnt;
	int32 scncnt;
	int32 i;
	// Line 571, Address: 0x20cf40, Func Offset: 0
	// Line 578, Address: 0x20cf44, Func Offset: 0x4
	// Line 571, Address: 0x20cf48, Func Offset: 0x8
	// Line 578, Address: 0x20cf4c, Func Offset: 0xc
	// Line 571, Address: 0x20cf50, Func Offset: 0x10
	// Line 572, Address: 0x20cf60, Func Offset: 0x20
	// Line 571, Address: 0x20cf64, Func Offset: 0x24
	// Line 578, Address: 0x20cf68, Func Offset: 0x28
	// Line 579, Address: 0x20cfa0, Func Offset: 0x60
	// Line 580, Address: 0x20cfa8, Func Offset: 0x68
	// Line 583, Address: 0x20d018, Func Offset: 0xd8
	// Line 584, Address: 0x20d02c, Func Offset: 0xec
	// Line 585, Address: 0x20d030, Func Offset: 0xf0
	// Line 587, Address: 0x20d040, Func Offset: 0x100
	// Line 588, Address: 0x20d044, Func Offset: 0x104
	// Func End, Address: 0x20d060, Func Offset: 0x120
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
	// Line 505, Address: 0x20d060, Func Offset: 0
	// Line 509, Address: 0x20d080, Func Offset: 0x20
	// Line 505, Address: 0x20d084, Func Offset: 0x24
	// Line 517, Address: 0x20d088, Func Offset: 0x28
	// Line 534, Address: 0x20d098, Func Offset: 0x38
	// Line 535, Address: 0x20d0d8, Func Offset: 0x78
	// Line 536, Address: 0x20d0e0, Func Offset: 0x80
	// Line 539, Address: 0x20d150, Func Offset: 0xf0
	// Line 540, Address: 0x20d164, Func Offset: 0x104
	// Line 543, Address: 0x20d16c, Func Offset: 0x10c
	// Line 546, Address: 0x20d18c, Func Offset: 0x12c
	// Line 547, Address: 0x20d1a0, Func Offset: 0x140
	// Line 550, Address: 0x20d1a8, Func Offset: 0x148
	// Line 552, Address: 0x20d1b0, Func Offset: 0x150
	// Line 555, Address: 0x20d1b8, Func Offset: 0x158
	// Line 556, Address: 0x20d1c0, Func Offset: 0x160
	// Line 560, Address: 0x20d1d4, Func Offset: 0x174
	// Line 562, Address: 0x20d1dc, Func Offset: 0x17c
	// Line 564, Address: 0x20d1f0, Func Offset: 0x190
	// Line 565, Address: 0x20d1f8, Func Offset: 0x198
	// Func End, Address: 0x20d21c, Func Offset: 0x1bc
}

// xSTAssetName__FPv
// Start address: 0x20d220
int8* xSTAssetName(void* raw_HIP_asset)
{
	int8* aname;
	uint32 aid;
	int32 i;
	// Line 472, Address: 0x20d220, Func Offset: 0
	// Line 479, Address: 0x20d224, Func Offset: 0x4
	// Line 472, Address: 0x20d228, Func Offset: 0x8
	// Line 473, Address: 0x20d22c, Func Offset: 0xc
	// Line 472, Address: 0x20d230, Func Offset: 0x10
	// Line 479, Address: 0x20d234, Func Offset: 0x14
	// Line 472, Address: 0x20d238, Func Offset: 0x18
	// Line 479, Address: 0x20d248, Func Offset: 0x28
	// Line 480, Address: 0x20d280, Func Offset: 0x60
	// Line 481, Address: 0x20d288, Func Offset: 0x68
	// Line 484, Address: 0x20d2f8, Func Offset: 0xd8
	// Line 485, Address: 0x20d300, Func Offset: 0xe0
	// Line 486, Address: 0x20d314, Func Offset: 0xf4
	// Line 487, Address: 0x20d31c, Func Offset: 0xfc
	// Line 490, Address: 0x20d330, Func Offset: 0x110
	// Func End, Address: 0x20d34c, Func Offset: 0x12c
}

// xSTAssetName__FUi
// Start address: 0x20d350
int8* xSTAssetName(uint32 aid)
{
	int8* aname;
	int32 i;
	// Line 450, Address: 0x20d350, Func Offset: 0
	// Line 456, Address: 0x20d354, Func Offset: 0x4
	// Line 450, Address: 0x20d358, Func Offset: 0x8
	// Line 451, Address: 0x20d35c, Func Offset: 0xc
	// Line 450, Address: 0x20d360, Func Offset: 0x10
	// Line 456, Address: 0x20d364, Func Offset: 0x14
	// Line 450, Address: 0x20d368, Func Offset: 0x18
	// Line 456, Address: 0x20d374, Func Offset: 0x24
	// Line 457, Address: 0x20d3a8, Func Offset: 0x58
	// Line 458, Address: 0x20d3b0, Func Offset: 0x60
	// Line 460, Address: 0x20d424, Func Offset: 0xd4
	// Line 461, Address: 0x20d42c, Func Offset: 0xdc
	// Line 462, Address: 0x20d43c, Func Offset: 0xec
	// Line 465, Address: 0x20d444, Func Offset: 0xf4
	// Line 468, Address: 0x20d458, Func Offset: 0x108
	// Func End, Address: 0x20d470, Func Offset: 0x120
}

// xSTSwitchScene__FUiPvPFPvf_i
// Start address: 0x20d470
int32 xSTSwitchScene(uint32 sid, void* userdata, int32(*progmon)(void*, float32))
{
	st_STRAN_SCENE* sdata;
	int32 rc;
	int32 i;
	// Line 419, Address: 0x20d470, Func Offset: 0
	// Line 421, Address: 0x20d484, Func Offset: 0x14
	// Line 419, Address: 0x20d488, Func Offset: 0x18
	// Line 428, Address: 0x20d4a0, Func Offset: 0x30
	// Line 429, Address: 0x20d4a8, Func Offset: 0x38
	// Line 430, Address: 0x20d4b8, Func Offset: 0x48
	// Line 432, Address: 0x20d4c0, Func Offset: 0x50
	// Line 435, Address: 0x20d4d8, Func Offset: 0x68
	// Line 439, Address: 0x20d4ec, Func Offset: 0x7c
	// Line 440, Address: 0x20d504, Func Offset: 0x94
	// Line 445, Address: 0x20d514, Func Offset: 0xa4
	// Func End, Address: 0x20d538, Func Offset: 0xc8
}

// xSTDisconnect__FUii
// Start address: 0x20d540
void xSTDisconnect(uint32 sid, int32 flg_hiphop)
{
	st_STRAN_SCENE* sdata;
	// Line 388, Address: 0x20d540, Func Offset: 0
	// Line 381, Address: 0x20d544, Func Offset: 0x4
	// Line 388, Address: 0x20d548, Func Offset: 0x8
	// Line 381, Address: 0x20d54c, Func Offset: 0xc
	// Line 388, Address: 0x20d550, Func Offset: 0x10
	// Line 392, Address: 0x20d558, Func Offset: 0x18
	// Line 393, Address: 0x20d560, Func Offset: 0x20
	// Line 394, Address: 0x20d574, Func Offset: 0x34
	// Line 397, Address: 0x20d578, Func Offset: 0x38
	// Func End, Address: 0x20d584, Func Offset: 0x44
}

// xSTLoadStep__FUi
// Start address: 0x20d590
float32 xSTLoadStep()
{
	float32 pct;
	int32 rc;
	// Line 352, Address: 0x20d590, Func Offset: 0
	// Line 360, Address: 0x20d594, Func Offset: 0x4
	// Line 352, Address: 0x20d598, Func Offset: 0x8
	// Line 360, Address: 0x20d59c, Func Offset: 0xc
	// Line 362, Address: 0x20d5a4, Func Offset: 0x14
	// Line 373, Address: 0x20d5c4, Func Offset: 0x34
	// Line 376, Address: 0x20d5cc, Func Offset: 0x3c
	// Line 377, Address: 0x20d5d0, Func Offset: 0x40
	// Func End, Address: 0x20d5e0, Func Offset: 0x50
}

// xSTUnLoadScene__FUii
// Start address: 0x20d5e0
void xSTUnLoadScene(uint32 sid, int32 flg_hiphop)
{
	st_STRAN_SCENE* sdata;
	int32 cnt;
	int32 i;
	// Line 299, Address: 0x20d5e0, Func Offset: 0
	// Line 305, Address: 0x20d5f0, Func Offset: 0x10
	// Line 308, Address: 0x20d5f8, Func Offset: 0x18
	// Line 311, Address: 0x20d638, Func Offset: 0x58
	// Line 312, Address: 0x20d640, Func Offset: 0x60
	// Line 315, Address: 0x20d6b4, Func Offset: 0xd4
	// Line 317, Address: 0x20d6d0, Func Offset: 0xf0
	// Line 320, Address: 0x20d6e0, Func Offset: 0x100
	// Line 321, Address: 0x20d760, Func Offset: 0x180
	// Line 328, Address: 0x20d768, Func Offset: 0x188
	// Line 330, Address: 0x20d77c, Func Offset: 0x19c
	// Line 331, Address: 0x20d788, Func Offset: 0x1a8
	// Line 332, Address: 0x20d7a0, Func Offset: 0x1c0
	// Line 333, Address: 0x20d7a4, Func Offset: 0x1c4
	// Line 334, Address: 0x20d7a8, Func Offset: 0x1c8
	// Line 335, Address: 0x20d7ec, Func Offset: 0x20c
	// Line 338, Address: 0x20d7f0, Func Offset: 0x210
	// Func End, Address: 0x20d808, Func Offset: 0x228
}

// xSTQueueSceneAssets__FUii
// Start address: 0x20d810
int32 xSTQueueSceneAssets(uint32 sid, int32 flg_hiphop)
{
	int32 result;
	st_STRAN_SCENE* sdata;
	// Line 271, Address: 0x20d810, Func Offset: 0
	// Line 282, Address: 0x20d814, Func Offset: 0x4
	// Line 271, Address: 0x20d818, Func Offset: 0x8
	// Line 282, Address: 0x20d81c, Func Offset: 0xc
	// Line 271, Address: 0x20d820, Func Offset: 0x10
	// Line 282, Address: 0x20d824, Func Offset: 0x14
	// Line 284, Address: 0x20d830, Func Offset: 0x20
	// Line 287, Address: 0x20d844, Func Offset: 0x34
	// Line 289, Address: 0x20d84c, Func Offset: 0x3c
	// Line 291, Address: 0x20d85c, Func Offset: 0x4c
	// Line 293, Address: 0x20d860, Func Offset: 0x50
	// Line 294, Address: 0x20d864, Func Offset: 0x54
	// Func End, Address: 0x20d874, Func Offset: 0x64
}

// xSTPreLoadScene__FUiPvi
// Start address: 0x20d880
int32 xSTPreLoadScene(uint32 sid, void* userdata, int32 flg_hiphop)
{
	int32 result;
	st_STRAN_SCENE* sdata;
	int32 cltver;
	// Line 138, Address: 0x20d880, Func Offset: 0
	// Line 149, Address: 0x20d884, Func Offset: 0x4
	// Line 138, Address: 0x20d888, Func Offset: 0x8
	// Line 149, Address: 0x20d88c, Func Offset: 0xc
	// Line 138, Address: 0x20d890, Func Offset: 0x10
	// Line 143, Address: 0x20d8a8, Func Offset: 0x28
	// Line 138, Address: 0x20d8ac, Func Offset: 0x2c
	// Line 149, Address: 0x20d8b0, Func Offset: 0x30
	// Line 158, Address: 0x20d8b8, Func Offset: 0x38
	// Line 161, Address: 0x20d8c0, Func Offset: 0x40
	// Line 163, Address: 0x20d8c4, Func Offset: 0x44
	// Line 162, Address: 0x20d8c8, Func Offset: 0x48
	// Line 158, Address: 0x20d8cc, Func Offset: 0x4c
	// Line 163, Address: 0x20d8d0, Func Offset: 0x50
	// Line 167, Address: 0x20d8d4, Func Offset: 0x54
	// Line 168, Address: 0x20d940, Func Offset: 0xc0
	// Line 169, Address: 0x20d948, Func Offset: 0xc8
	// Line 171, Address: 0x20d950, Func Offset: 0xd0
	// Line 172, Address: 0x20d98c, Func Offset: 0x10c
	// Line 174, Address: 0x20d990, Func Offset: 0x110
	// Line 176, Address: 0x20d998, Func Offset: 0x118
	// Line 177, Address: 0x20d9c8, Func Offset: 0x148
	// Line 178, Address: 0x20d9d0, Func Offset: 0x150
	// Line 179, Address: 0x20d9d8, Func Offset: 0x158
	// Line 181, Address: 0x20da14, Func Offset: 0x194
	// Line 184, Address: 0x20da18, Func Offset: 0x198
	// Line 187, Address: 0x20da20, Func Offset: 0x1a0
	// Line 194, Address: 0x20da60, Func Offset: 0x1e0
	// Line 197, Address: 0x20da68, Func Offset: 0x1e8
	// Line 208, Address: 0x20da70, Func Offset: 0x1f0
	// Line 211, Address: 0x20da78, Func Offset: 0x1f8
	// Line 208, Address: 0x20da7c, Func Offset: 0x1fc
	// Line 212, Address: 0x20da80, Func Offset: 0x200
	// Line 216, Address: 0x20da84, Func Offset: 0x204
	// Line 213, Address: 0x20da88, Func Offset: 0x208
	// Line 216, Address: 0x20da8c, Func Offset: 0x20c
	// Line 223, Address: 0x20daa8, Func Offset: 0x228
	// Line 224, Address: 0x20db14, Func Offset: 0x294
	// Line 225, Address: 0x20db1c, Func Offset: 0x29c
	// Line 227, Address: 0x20db24, Func Offset: 0x2a4
	// Line 231, Address: 0x20db60, Func Offset: 0x2e0
	// Line 233, Address: 0x20db68, Func Offset: 0x2e8
	// Line 234, Address: 0x20db98, Func Offset: 0x318
	// Line 235, Address: 0x20dba0, Func Offset: 0x320
	// Line 236, Address: 0x20dba8, Func Offset: 0x328
	// Line 238, Address: 0x20dbe4, Func Offset: 0x364
	// Line 245, Address: 0x20dbe8, Func Offset: 0x368
	// Line 248, Address: 0x20dbf0, Func Offset: 0x370
	// Line 259, Address: 0x20dc30, Func Offset: 0x3b0
	// Line 260, Address: 0x20dc38, Func Offset: 0x3b8
	// Line 262, Address: 0x20dc3c, Func Offset: 0x3bc
	// Line 267, Address: 0x20dc48, Func Offset: 0x3c8
	// Func End, Address: 0x20dc6c, Func Offset: 0x3ec
}

// xSTShutdown__Fv
// Start address: 0x20dc70
int32 xSTShutdown()
{
	// Line 102, Address: 0x20dc70, Func Offset: 0
	// Line 105, Address: 0x20dc80, Func Offset: 0x10
	// Line 112, Address: 0x20dc90, Func Offset: 0x20
	// Line 115, Address: 0x20dd18, Func Offset: 0xa8
	// Line 121, Address: 0x20dd20, Func Offset: 0xb0
	// Line 120, Address: 0x20dd2c, Func Offset: 0xbc
	// Line 121, Address: 0x20dd30, Func Offset: 0xc0
	// Func End, Address: 0x20dd38, Func Offset: 0xc8
}

// xSTStartup__FP19st_PACKER_ASSETTYPE
// Start address: 0x20dd40
int32 xSTStartup(st_PACKER_ASSETTYPE* handlers)
{
	// Line 64, Address: 0x20dd40, Func Offset: 0
	// Line 66, Address: 0x20dd48, Func Offset: 0x8
	// Line 72, Address: 0x20dd58, Func Offset: 0x18
	// Line 78, Address: 0x20dd5c, Func Offset: 0x1c
	// Line 81, Address: 0x20dd70, Func Offset: 0x30
	// Line 84, Address: 0x20dd78, Func Offset: 0x38
	// Line 91, Address: 0x20dd84, Func Offset: 0x44
	// Line 94, Address: 0x20dd88, Func Offset: 0x48
	// Line 93, Address: 0x20dd8c, Func Offset: 0x4c
	// Line 94, Address: 0x20dd90, Func Offset: 0x50
	// Func End, Address: 0x20dd98, Func Offset: 0x58
}

