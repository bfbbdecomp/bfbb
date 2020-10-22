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
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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
	float32 param[4];
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
	// Line 126, Address: 0x1bf690, Func Offset: 0
	// Line 128, Address: 0x1bf6ac, Func Offset: 0x1c
	// Line 130, Address: 0x1bf6b4, Func Offset: 0x24
	// Func End, Address: 0x1bf6bc, Func Offset: 0x2c
}

// xBaseLoad__FP5xBaseP7xSerial
// Start address: 0x1bf6c0
void xBaseLoad(xBase* ent, xSerial* s)
{
	int32 b;
	// Line 103, Address: 0x1bf6c0, Func Offset: 0
	// Line 108, Address: 0x1bf6d0, Func Offset: 0x10
	// Line 109, Address: 0x1bf6d4, Func Offset: 0x14
	// Line 110, Address: 0x1bf6e0, Func Offset: 0x20
	// Line 111, Address: 0x1bf6ec, Func Offset: 0x2c
	// Line 113, Address: 0x1bf700, Func Offset: 0x40
	// Line 116, Address: 0x1bf710, Func Offset: 0x50
	// Func End, Address: 0x1bf720, Func Offset: 0x60
}

// xBaseSave__FP5xBaseP7xSerial
// Start address: 0x1bf720
void xBaseSave(xBase* ent, xSerial* s)
{
	// Line 80, Address: 0x1bf720, Func Offset: 0
	// Line 85, Address: 0x1bf728, Func Offset: 0x8
	// Line 86, Address: 0x1bf738, Func Offset: 0x18
	// Line 88, Address: 0x1bf750, Func Offset: 0x30
	// Line 90, Address: 0x1bf760, Func Offset: 0x40
	// Func End, Address: 0x1bf76c, Func Offset: 0x4c
}

// xBaseSetup__FP5xBase
// Start address: 0x1bf770
void xBaseSetup()
{
	// Line 67, Address: 0x1bf770, Func Offset: 0
	// Func End, Address: 0x1bf778, Func Offset: 0x8
}

// xBaseInit__FP5xBaseP10xBaseAsset
// Start address: 0x1bf780
void xBaseInit(xBase* xb, xBaseAsset* asset)
{
	// Line 26, Address: 0x1bf780, Func Offset: 0
	// Line 27, Address: 0x1bf788, Func Offset: 0x8
	// Line 28, Address: 0x1bf790, Func Offset: 0x10
	// Line 29, Address: 0x1bf798, Func Offset: 0x18
	// Line 30, Address: 0x1bf7a0, Func Offset: 0x20
	// Line 33, Address: 0x1bf7a4, Func Offset: 0x24
	// Line 37, Address: 0x1bf7ac, Func Offset: 0x2c
	// Func End, Address: 0x1bf7b4, Func Offset: 0x34
}

