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
	type_0 varCB;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_4 eventFunc;
};

struct st_SERIAL_CLIENTINFO
{
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

type_2 zVarEntryTable;
type_1 zConditionalEventCB;

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
}

// zConditionalLoad__FP13_zConditionalP7xSerial
// Start address: 0x12fb20
void zConditionalLoad(_zConditional* ent, xSerial* s)
{
}

// zConditionalSave__FP13_zConditionalP7xSerial
// Start address: 0x12fb30
void zConditionalSave(_zConditional* ent, xSerial* s)
{
}

// zConditionalInit__FPvPv
// Start address: 0x12fb40
void zConditionalInit(void* b, void* asset)
{
}

