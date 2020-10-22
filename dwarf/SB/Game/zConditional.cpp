typedef struct xBaseAsset;
typedef struct _zConditional;
typedef struct zVarEntry;
typedef struct xBase;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct xLinkAsset;
typedef struct xSerial;
typedef struct zCondAsset;

typedef uint32(*type_0)(void*);
typedef int32(*type_1)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_4)(xBase*, xBase*, uint32, float32*, xBase*);

typedef zVarEntry type_2[0];
typedef float32 type_3[4];

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct _zConditional : xBase
{
	zCondAsset* asset;
};

struct zVarEntry
{
	uint32 entry;
	uint32 varNameID;
	int8* varName;
	uint32(*varCB)(void*);
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

struct st_SERIAL_CLIENTINFO
{
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

struct xSerial
{
	uint32 idtag;
	int32 baseoff;
	st_SERIAL_CLIENTINFO* ctxtdata;
	int32 warned;
	int32 curele;
	int32 bitidx;
	int32 bittally;
};

struct zCondAsset : xBaseAsset
{
	uint32 constNum;
	uint32 expr1;
	uint32 op;
	uint32 value_asset;
};

zVarEntry zVarEntryTable[0];
int32(*zConditionalEventCB)(xBase*, xBase*, uint32, float32*, xBase*);

int32 zConditionalEventCB(xBase* to, uint32 toEvent);
uint32 zConditional_Evaluate(_zConditional* c);
void zConditionalLoad(_zConditional* ent, xSerial* s);
void zConditionalSave(_zConditional* ent, xSerial* s);
void zConditionalInit(void* b, void* asset);

// zConditionalEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x12f910
int32 zConditionalEventCB(xBase* to, uint32 toEvent)
{
	_zConditional* t;
	// Line 197, Address: 0x12f910, Func Offset: 0
	// Line 207, Address: 0x12f914, Func Offset: 0x4
	// Line 197, Address: 0x12f918, Func Offset: 0x8
	// Line 207, Address: 0x12f920, Func Offset: 0x10
	// Line 211, Address: 0x12f950, Func Offset: 0x40
	// Line 212, Address: 0x12f960, Func Offset: 0x50
	// Line 214, Address: 0x12f978, Func Offset: 0x68
	// Line 215, Address: 0x12f988, Func Offset: 0x78
	// Line 224, Address: 0x12f990, Func Offset: 0x80
	// Line 227, Address: 0x12f99c, Func Offset: 0x8c
	// Line 230, Address: 0x12f9a0, Func Offset: 0x90
	// Line 229, Address: 0x12f9a8, Func Offset: 0x98
	// Line 230, Address: 0x12f9ac, Func Offset: 0x9c
	// Func End, Address: 0x12f9b4, Func Offset: 0xa4
}

// zConditional_Evaluate__FP13_zConditional
// Start address: 0x12f9c0
uint32 zConditional_Evaluate(_zConditional* c)
{
	uint32 temp;
	zVarEntry* v;
	void* context;
	int32 i;
	uint32 id;
	// Line 111, Address: 0x12f9c0, Func Offset: 0
	// Line 116, Address: 0x12f9c4, Func Offset: 0x4
	// Line 111, Address: 0x12f9c8, Func Offset: 0x8
	// Line 114, Address: 0x12f9dc, Func Offset: 0x1c
	// Line 111, Address: 0x12f9e0, Func Offset: 0x20
	// Line 119, Address: 0x12f9e4, Func Offset: 0x24
	// Line 122, Address: 0x12f9f4, Func Offset: 0x34
	// Line 125, Address: 0x12fa04, Func Offset: 0x44
	// Line 127, Address: 0x12fa20, Func Offset: 0x60
	// Line 128, Address: 0x12fa24, Func Offset: 0x64
	// Line 131, Address: 0x12fa34, Func Offset: 0x74
	// Line 133, Address: 0x12fa48, Func Offset: 0x88
	// Line 134, Address: 0x12fa50, Func Offset: 0x90
	// Line 138, Address: 0x12fa58, Func Offset: 0x98
	// Line 139, Address: 0x12fa68, Func Offset: 0xa8
	// Line 143, Address: 0x12fa90, Func Offset: 0xd0
	// Line 149, Address: 0x12faa0, Func Offset: 0xe0
	// Line 153, Address: 0x12faac, Func Offset: 0xec
	// Line 155, Address: 0x12fab0, Func Offset: 0xf0
	// Line 159, Address: 0x12fabc, Func Offset: 0xfc
	// Line 161, Address: 0x12fac0, Func Offset: 0x100
	// Line 167, Address: 0x12fad0, Func Offset: 0x110
	// Line 173, Address: 0x12fae0, Func Offset: 0x120
	// Line 179, Address: 0x12faf0, Func Offset: 0x130
	// Line 183, Address: 0x12faf8, Func Offset: 0x138
	// Func End, Address: 0x12fb14, Func Offset: 0x154
}

// zConditionalLoad__FP13_zConditionalP7xSerial
// Start address: 0x12fb20
void zConditionalLoad(_zConditional* ent, xSerial* s)
{
	// Line 103, Address: 0x12fb20, Func Offset: 0
	// Func End, Address: 0x12fb28, Func Offset: 0x8
}

// zConditionalSave__FP13_zConditionalP7xSerial
// Start address: 0x12fb30
void zConditionalSave(_zConditional* ent, xSerial* s)
{
	// Line 84, Address: 0x12fb30, Func Offset: 0
	// Func End, Address: 0x12fb38, Func Offset: 0x8
}

// zConditionalInit__FPvPv
// Start address: 0x12fb40
void zConditionalInit(void* b, void* asset)
{
	// Line 40, Address: 0x12fb40, Func Offset: 0
	// Line 41, Address: 0x12fb54, Func Offset: 0x14
	// Line 43, Address: 0x12fb90, Func Offset: 0x50
	// Line 45, Address: 0x12fb9c, Func Offset: 0x5c
	// Func End, Address: 0x12fbb0, Func Offset: 0x70
}

