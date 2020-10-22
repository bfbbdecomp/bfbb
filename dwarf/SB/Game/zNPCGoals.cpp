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
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct XGOFTypeInfo
{
	int32 tid;
	xFactoryInst*(*creator)(int32, RyzMemGrow*, void*);
	void(*destroyer)(xFactoryInst*);
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
	float32 param[4];
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

int8 buffer[16];
int8 buffer[16];

void zNPCGoals_RegisterTypes(xFactory* fac);

// zNPCGoals_RegisterTypes__FP8xFactory
// Start address: 0x2c5ce0
void zNPCGoals_RegisterTypes(xFactory* fac)
{
	XGOFTypeInfo typelist[179];
	// Line 59, Address: 0x2c5ce0, Func Offset: 0
	// Line 64, Address: 0x2c5ce4, Func Offset: 0x4
	// Line 59, Address: 0x2c5ce8, Func Offset: 0x8
	// Line 64, Address: 0x2c5cec, Func Offset: 0xc
	// Line 314, Address: 0x2c5d1c, Func Offset: 0x3c
	// Line 317, Address: 0x2c5d28, Func Offset: 0x48
	// Func End, Address: 0x2c5d34, Func Offset: 0x54
}

