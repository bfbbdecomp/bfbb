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
	float32 param[4];
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
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct RyzMemData
{
};

int8 buffer[16];
int8 buffer[16];

void zNPCTypes_RegisterTypes(xFactory* fac);
void zNPCTypes_ShutdownTypes();
void zNPCTypes_StartupTypes();

// zNPCTypes_RegisterTypes__FP8xFactory
// Start address: 0x2e6800
void zNPCTypes_RegisterTypes(xFactory* fac)
{
	XGOFTypeInfo typelist[71];
	// Line 104, Address: 0x2e6800, Func Offset: 0
	// Line 106, Address: 0x2e6804, Func Offset: 0x4
	// Line 104, Address: 0x2e6808, Func Offset: 0x8
	// Line 106, Address: 0x2e680c, Func Offset: 0xc
	// Line 219, Address: 0x2e6834, Func Offset: 0x34
	// Line 222, Address: 0x2e6840, Func Offset: 0x40
	// Func End, Address: 0x2e684c, Func Offset: 0x4c
}

// zNPCTypes_ShutdownTypes__Fv
// Start address: 0x2e6850
void zNPCTypes_ShutdownTypes()
{
	// Line 80, Address: 0x2e6850, Func Offset: 0
	// Line 82, Address: 0x2e6858, Func Offset: 0x8
	// Line 83, Address: 0x2e6860, Func Offset: 0x10
	// Line 84, Address: 0x2e6868, Func Offset: 0x18
	// Line 85, Address: 0x2e6870, Func Offset: 0x20
	// Line 86, Address: 0x2e6878, Func Offset: 0x28
	// Line 87, Address: 0x2e6880, Func Offset: 0x30
	// Line 88, Address: 0x2e6888, Func Offset: 0x38
	// Line 89, Address: 0x2e6890, Func Offset: 0x40
	// Line 93, Address: 0x2e6898, Func Offset: 0x48
	// Line 96, Address: 0x2e68a0, Func Offset: 0x50
	// Func End, Address: 0x2e68ac, Func Offset: 0x5c
}

// zNPCTypes_StartupTypes__Fv
// Start address: 0x2e68b0
void zNPCTypes_StartupTypes()
{
	// Line 61, Address: 0x2e68b0, Func Offset: 0
	// Line 62, Address: 0x2e68b8, Func Offset: 0x8
	// Line 63, Address: 0x2e68c0, Func Offset: 0x10
	// Line 64, Address: 0x2e68c8, Func Offset: 0x18
	// Line 65, Address: 0x2e68d0, Func Offset: 0x20
	// Line 66, Address: 0x2e68d8, Func Offset: 0x28
	// Line 67, Address: 0x2e68e0, Func Offset: 0x30
	// Line 68, Address: 0x2e68e8, Func Offset: 0x38
	// Line 69, Address: 0x2e68f0, Func Offset: 0x40
	// Line 73, Address: 0x2e68f8, Func Offset: 0x48
	// Line 76, Address: 0x2e6900, Func Offset: 0x50
	// Func End, Address: 0x2e690c, Func Offset: 0x5c
}

