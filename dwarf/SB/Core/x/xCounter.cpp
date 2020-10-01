typedef struct xLinkAsset;
typedef struct xBase;
typedef struct xSerial;
typedef struct _xCounter;
typedef struct xCounterAsset;
typedef struct xBaseAsset;
typedef struct st_SERIAL_CLIENTINFO;

typedef int32(*type_0)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_2)(xBase*, xBase*, uint32, float32*, xBase*);

typedef float32 type_1[4];
typedef int8 type_3[16];
typedef int8 type_4[16];

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_1 param;
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
	type_2 eventFunc;
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

struct _xCounter : xBase
{
	xCounterAsset* asset;
	int16 count;
	uint8 state;
	uint8 counterFlags;
};

struct xCounterAsset : xBaseAsset
{
	int16 count;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct st_SERIAL_CLIENTINFO
{
};

type_3 buffer;
type_4 buffer;
type_0 xCounterEventCB;

int32 xCounterEventCB(xBase* to, uint32 toEvent);
void xCounterLoad(_xCounter* ent, xSerial* s);
void xCounterSave(_xCounter* ent, xSerial* s);
void xCounterReset(xBase* b);
void xCounterInit(void* b, void* asset);
void xCounterInit();

// xCounterEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x29e5e0
int32 xCounterEventCB(xBase* to, uint32 toEvent)
{
	_xCounter* t;
	int16 newCount;
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

