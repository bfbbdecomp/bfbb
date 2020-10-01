typedef struct RyzMemGrow;
typedef struct xFactoryInst;
typedef struct xBase;
typedef struct XGOFTypeInfo;
typedef struct st_XORDEREDARRAY;
typedef struct xLinkAsset;
typedef struct RyzMemData;
typedef struct xFactory;

typedef xFactoryInst*(*type_0)(int32, RyzMemGrow*, void*);
typedef void(*type_1)(xFactoryInst*);
typedef int32(*type_2)(xBase*, xBase*, uint32, float32*, xBase*);

typedef int8 type_3[16];
typedef int8 type_4[16];
typedef float32 type_5[4];
typedef XGOFTypeInfo type_6[179];

struct RyzMemGrow
{
	int32 flg_grow;
	int32 amt;
	int8* ptr;
	xBase* user;
	int32 amt_last;
	int8* ptr_last;
	xBase* user_last;
};

struct xFactoryInst : RyzMemData
{
	int32 itemType;
	xFactoryInst* nextprod;
	xFactoryInst* prevprod;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_2 eventFunc;
};

struct XGOFTypeInfo
{
	int32 tid;
	type_0 creator;
	type_1 destroyer;
};

struct st_XORDEREDARRAY
{
	void** list;
	int32 cnt;
	int32 max;
	int32 warnlvl;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_5 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct RyzMemData
{
};

struct xFactory : RyzMemData
{
	XGOFTypeInfo* infopool;
	st_XORDEREDARRAY infolist;
	xFactoryInst* products;
	RyzMemGrow growContextData;
};

type_3 buffer;
type_4 buffer;

void zNPCGoals_RegisterTypes(xFactory* fac);

// zNPCGoals_RegisterTypes__FP8xFactory
// Start address: 0x2c5ce0
void zNPCGoals_RegisterTypes(xFactory* fac)
{
	type_6 typelist;
}

