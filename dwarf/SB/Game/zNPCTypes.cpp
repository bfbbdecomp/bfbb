typedef struct RyzMemGrow;
typedef struct xFactoryInst;
typedef struct XGOFTypeInfo;
typedef struct st_XORDEREDARRAY;
typedef struct xFactory;
typedef struct xLinkAsset;
typedef struct xBase;
typedef struct RyzMemData;

typedef xFactoryInst*(*type_0)(int32, RyzMemGrow*, void*);
typedef void(*type_1)(xFactoryInst*);
typedef int32(*type_5)(xBase*, xBase*, uint32, float32*, xBase*);

typedef XGOFTypeInfo type_2[71];
typedef float32 type_3[4];
typedef int8 type_4[16];
typedef int8 type_6[16];

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

struct xFactory : RyzMemData
{
	XGOFTypeInfo* infopool;
	st_XORDEREDARRAY infolist;
	xFactoryInst* products;
	RyzMemGrow growContextData;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_3 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_5 eventFunc;
};

struct RyzMemData
{
};

type_4 buffer;
type_6 buffer;

void zNPCTypes_RegisterTypes(xFactory* fac);
void zNPCTypes_ShutdownTypes();
void zNPCTypes_StartupTypes();

// zNPCTypes_RegisterTypes__FP8xFactory
// Start address: 0x2e6800
void zNPCTypes_RegisterTypes(xFactory* fac)
{
	type_2 typelist;
}

// zNPCTypes_ShutdownTypes__Fv
// Start address: 0x2e6850
void zNPCTypes_ShutdownTypes()
{
}

// zNPCTypes_StartupTypes__Fv
// Start address: 0x2e68b0
void zNPCTypes_StartupTypes()
{
}

