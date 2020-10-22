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

int8 buffer[16];
int8 buffer[16];
int32(*xCounterEventCB)(xBase*, xBase*, uint32, float32*, xBase*);

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
	// Line 205, Address: 0x29e5e0, Func Offset: 0
	// Line 212, Address: 0x29e5e4, Func Offset: 0x4
	// Line 215, Address: 0x29e618, Func Offset: 0x38
	// Line 217, Address: 0x29e628, Func Offset: 0x48
	// Line 218, Address: 0x29e648, Func Offset: 0x68
	// Line 219, Address: 0x29e658, Func Offset: 0x78
	// Line 221, Address: 0x29e660, Func Offset: 0x80
	// Line 222, Address: 0x29e668, Func Offset: 0x88
	// Line 223, Address: 0x29e670, Func Offset: 0x90
	// Line 225, Address: 0x29e680, Func Offset: 0xa0
	// Line 233, Address: 0x29e690, Func Offset: 0xb0
	// Line 236, Address: 0x29e698, Func Offset: 0xb8
	// Line 238, Address: 0x29e6a8, Func Offset: 0xc8
	// Line 239, Address: 0x29e6b8, Func Offset: 0xd8
	// Line 241, Address: 0x29e6c0, Func Offset: 0xe0
	// Line 242, Address: 0x29e6c8, Func Offset: 0xe8
	// Line 243, Address: 0x29e6d0, Func Offset: 0xf0
	// Line 245, Address: 0x29e6e0, Func Offset: 0x100
	// Line 252, Address: 0x29e6f0, Func Offset: 0x110
	// Line 262, Address: 0x29e6f8, Func Offset: 0x118
	// Line 265, Address: 0x29e6fc, Func Offset: 0x11c
	// Line 266, Address: 0x29e704, Func Offset: 0x124
	// Line 268, Address: 0x29e70c, Func Offset: 0x12c
	// Line 269, Address: 0x29e710, Func Offset: 0x130
	// Line 270, Address: 0x29e730, Func Offset: 0x150
	// Line 271, Address: 0x29e734, Func Offset: 0x154
	// Line 273, Address: 0x29e738, Func Offset: 0x158
	// Line 276, Address: 0x29e740, Func Offset: 0x160
	// Line 278, Address: 0x29e750, Func Offset: 0x170
	// Line 280, Address: 0x29e760, Func Offset: 0x180
	// Line 279, Address: 0x29e764, Func Offset: 0x184
	// Line 280, Address: 0x29e76c, Func Offset: 0x18c
	// Line 282, Address: 0x29e788, Func Offset: 0x1a8
	// Line 287, Address: 0x29e78c, Func Offset: 0x1ac
	// Line 290, Address: 0x29e790, Func Offset: 0x1b0
	// Line 289, Address: 0x29e794, Func Offset: 0x1b4
	// Line 290, Address: 0x29e798, Func Offset: 0x1b8
	// Func End, Address: 0x29e7a0, Func Offset: 0x1c0
}

// xCounterLoad__FP9_xCounterP7xSerial
// Start address: 0x29e7a0
void xCounterLoad(_xCounter* ent, xSerial* s)
{
	// Line 182, Address: 0x29e7a0, Func Offset: 0
	// Line 183, Address: 0x29e7b4, Func Offset: 0x14
	// Line 188, Address: 0x29e7bc, Func Offset: 0x1c
	// Line 189, Address: 0x29e7c8, Func Offset: 0x28
	// Line 190, Address: 0x29e7d4, Func Offset: 0x34
	// Func End, Address: 0x29e7e8, Func Offset: 0x48
}

// xCounterSave__FP9_xCounterP7xSerial
// Start address: 0x29e7f0
void xCounterSave(_xCounter* ent, xSerial* s)
{
	// Line 160, Address: 0x29e7f0, Func Offset: 0
	// Line 161, Address: 0x29e804, Func Offset: 0x14
	// Line 166, Address: 0x29e80c, Func Offset: 0x1c
	// Line 167, Address: 0x29e818, Func Offset: 0x28
	// Line 169, Address: 0x29e824, Func Offset: 0x34
	// Func End, Address: 0x29e838, Func Offset: 0x48
}

// xCounterReset__FP5xBase
// Start address: 0x29e840
void xCounterReset(xBase* b)
{
	_xCounter* t;
	// Line 129, Address: 0x29e840, Func Offset: 0
	// Line 135, Address: 0x29e84c, Func Offset: 0xc
	// Line 138, Address: 0x29e858, Func Offset: 0x18
	// Line 139, Address: 0x29e864, Func Offset: 0x24
	// Line 140, Address: 0x29e86c, Func Offset: 0x2c
	// Line 141, Address: 0x29e878, Func Offset: 0x38
	// Line 144, Address: 0x29e880, Func Offset: 0x40
	// Line 145, Address: 0x29e88c, Func Offset: 0x4c
	// Line 148, Address: 0x29e890, Func Offset: 0x50
	// Func End, Address: 0x29e8a0, Func Offset: 0x60
}

// xCounterInit__FPvPv
// Start address: 0x29e8a0
void xCounterInit(void* b, void* asset)
{
	// Line 87, Address: 0x29e8a0, Func Offset: 0
	// Line 88, Address: 0x29e8b4, Func Offset: 0x14
	// Line 89, Address: 0x29e900, Func Offset: 0x60
	// Func End, Address: 0x29e914, Func Offset: 0x74
}

// xCounterInit__Fv
// Start address: 0x29e920
void xCounterInit()
{
	// Line 74, Address: 0x29e920, Func Offset: 0
	// Func End, Address: 0x29e928, Func Offset: 0x8
}

