typedef struct xBaseAsset;
typedef struct xBase;
typedef struct xSerial;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct xLinkAsset;

typedef int32(*type_1)(xBase*, xBase*, uint32, float32*, xBase*);

typedef float32 type_0[4];

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_1 eventFunc;
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

struct st_SERIAL_CLIENTINFO
{
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_0 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};


void xBaseReset(xBase* xb, xBaseAsset* asset);
void xBaseLoad(xBase* ent, xSerial* s);
void xBaseSave(xBase* ent, xSerial* s);
void xBaseSetup();
void xBaseInit(xBase* xb, xBaseAsset* asset);

// xBaseReset__FP5xBaseP10xBaseAsset
// Start address: 0x1bf690
void xBaseReset(xBase* xb, xBaseAsset* asset)
{
}

// xBaseLoad__FP5xBaseP7xSerial
// Start address: 0x1bf6c0
void xBaseLoad(xBase* ent, xSerial* s)
{
	int32 b;
}

// xBaseSave__FP5xBaseP7xSerial
// Start address: 0x1bf720
void xBaseSave(xBase* ent, xSerial* s)
{
}

// xBaseSetup__FP5xBase
// Start address: 0x1bf770
void xBaseSetup()
{
}

// xBaseInit__FP5xBaseP10xBaseAsset
// Start address: 0x1bf780
void xBaseInit(xBase* xb, xBaseAsset* asset)
{
}

