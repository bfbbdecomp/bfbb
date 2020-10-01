typedef struct RyzMemGrow;
typedef struct xFactoryInst;
typedef struct xBase;
typedef struct XGOFTypeInfo;
typedef struct st_XORDEREDARRAY;
typedef struct xLinkAsset;
typedef struct RyzMemData;
typedef struct xFactory;

typedef xFactoryInst*(*type_0)(s32, RyzMemGrow*, void*);
typedef void(*type_1)(xFactoryInst*);
typedef s32(*type_2)(xBase*, xBase*, u32, f32*, xBase*);

typedef s8 type_3[16];
typedef s8 type_4[16];
typedef f32 type_5[4];
typedef XGOFTypeInfo type_6[179];

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

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_2 eventFunc;
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

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_5 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
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

