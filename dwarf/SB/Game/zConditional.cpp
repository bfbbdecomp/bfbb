typedef struct xBaseAsset;
typedef struct _zConditional;
typedef struct zVarEntry;
typedef struct xBase;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct xLinkAsset;
typedef struct xSerial;
typedef struct zCondAsset;

typedef u32(*type_0)(void*);
typedef s32(*type_1)(xBase*, xBase*, u32, f32*, xBase*);
typedef s32(*type_4)(xBase*, xBase*, u32, f32*, xBase*);

typedef zVarEntry type_2[0];
typedef f32 type_3[4];

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct _zConditional : xBase
{
	zCondAsset* asset;
};

struct zVarEntry
{
	u32 entry;
	u32 varNameID;
	s8* varName;
	type_0 varCB;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_4 eventFunc;
};

struct st_SERIAL_CLIENTINFO
{
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

struct xSerial
{
	u32 idtag;
	s32 baseoff;
	st_SERIAL_CLIENTINFO* ctxtdata;
	s32 warned;
	s32 curele;
	s32 bitidx;
	s32 bittally;
};

struct zCondAsset : xBaseAsset
{
	u32 constNum;
	u32 expr1;
	u32 op;
	u32 value_asset;
};

type_2 zVarEntryTable;
type_1 zConditionalEventCB;

s32 zConditionalEventCB(xBase* to, u32 toEvent);
u32 zConditional_Evaluate(_zConditional* c);
void zConditionalLoad(_zConditional* ent, xSerial* s);
void zConditionalSave(_zConditional* ent, xSerial* s);
void zConditionalInit(void* b, void* asset);

// zConditionalEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x12f910
s32 zConditionalEventCB(xBase* to, u32 toEvent)
{
	_zConditional* t;
}

// zConditional_Evaluate__FP13_zConditional
// Start address: 0x12f9c0
u32 zConditional_Evaluate(_zConditional* c)
{
	u32 temp;
	zVarEntry* v;
	void* context;
	s32 i;
	u32 id;
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

