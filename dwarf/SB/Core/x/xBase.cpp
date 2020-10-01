typedef struct xBaseAsset;
typedef struct xBase;
typedef struct xSerial;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct xLinkAsset;

typedef s32(*type_1)(xBase*, xBase*, u32, f32*, xBase*);

typedef f32 type_0[4];

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_1 eventFunc;
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

struct st_SERIAL_CLIENTINFO
{
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_0 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
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
	s32 b;
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

