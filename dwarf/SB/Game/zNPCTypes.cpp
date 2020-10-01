typedef struct RyzMemGrow;
typedef struct xFactoryInst;
typedef struct XGOFTypeInfo;
typedef struct st_XORDEREDARRAY;
typedef struct xFactory;
typedef struct xLinkAsset;
typedef struct xBase;
typedef struct RyzMemData;

typedef xFactoryInst*(*type_0)(s32, RyzMemGrow*, void*);
typedef void(*type_1)(xFactoryInst*);
typedef s32(*type_5)(xBase*, xBase*, u32, f32*, xBase*);

typedef XGOFTypeInfo type_2[71];
typedef f32 type_3[4];
typedef s8 type_4[16];
typedef s8 type_6[16];

struct RyzMemGrow
{
	s32 flg_grow;
	s32 amt;
	s8* ptr;
	xBase* user;
	s32 amt_last;
	s8* ptr_last;
	xBase* user_last;
};

struct xFactoryInst : RyzMemData
{
	s32 itemType;
	xFactoryInst* nextprod;
	xFactoryInst* prevprod;
};

struct XGOFTypeInfo
{
	s32 tid;
	type_0 creator;
	type_1 destroyer;
};

struct st_XORDEREDARRAY
{
	void** list;
	s32 cnt;
	s32 max;
	s32 warnlvl;
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
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_3 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
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

