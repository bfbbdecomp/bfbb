typedef struct xLinkAsset;
typedef struct xBase;
typedef struct xSerial;
typedef struct _xCounter;
typedef struct xCounterAsset;
typedef struct xBaseAsset;
typedef struct st_SERIAL_CLIENTINFO;

typedef s32(*type_0)(xBase*, xBase*, u32, f32*, xBase*);
typedef s32(*type_2)(xBase*, xBase*, u32, f32*, xBase*);

typedef f32 type_1[4];
typedef s8 type_3[16];
typedef s8 type_4[16];

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_1 param;
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
	type_2 eventFunc;
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

struct _xCounter : xBase
{
	xCounterAsset* asset;
	s16 count;
	u8 state;
	u8 counterFlags;
};

struct xCounterAsset : xBaseAsset
{
	s16 count;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct st_SERIAL_CLIENTINFO
{
};

type_3 buffer;
type_4 buffer;
type_0 xCounterEventCB;

s32 xCounterEventCB(xBase* to, u32 toEvent);
void xCounterLoad(_xCounter* ent, xSerial* s);
void xCounterSave(_xCounter* ent, xSerial* s);
void xCounterReset(xBase* b);
void xCounterInit(void* b, void* asset);
void xCounterInit();

// xCounterEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x29e5e0
s32 xCounterEventCB(xBase* to, u32 toEvent)
{
	_xCounter* t;
	s16 newCount;
}

// xCounterLoad__FP9_xCounterP7xSerial
// Start address: 0x29e7a0
void xCounterLoad(_xCounter* ent, xSerial* s)
{
}

// xCounterSave__FP9_xCounterP7xSerial
// Start address: 0x29e7f0
void xCounterSave(_xCounter* ent, xSerial* s)
{
}

// xCounterReset__FP5xBase
// Start address: 0x29e840
void xCounterReset(xBase* b)
{
	_xCounter* t;
}

// xCounterInit__FPvPv
// Start address: 0x29e8a0
void xCounterInit(void* b, void* asset)
{
}

// xCounterInit__Fv
// Start address: 0x29e920
void xCounterInit()
{
}

