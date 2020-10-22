typedef struct xSerial;
typedef struct RwRGBA;
typedef struct xBase;
typedef struct xFogAsset;
typedef struct _xFog;
typedef struct xLinkAsset;
typedef struct xBaseAsset;
typedef struct iFogParams;
typedef enum RwFogType;

typedef int32(*type_1)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_5)(xBase*, xBase*, uint32, float32*, xBase*);

typedef float32 type_0[4];
typedef uint8 type_2[4];
typedef uint8 type_3[4];
typedef uint8 type_4[3];

struct xSerial
{
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct xFogAsset : xBaseAsset
{
	uint8 bkgndColor[4];
	uint8 fogColor[4];
	float32 fogDensity;
	float32 fogStart;
	float32 fogStop;
	float32 transitionTime;
	uint8 fogType;
	uint8 padFog[3];
};

struct _xFog : xBase
{
	xFogAsset* tasset;
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct iFogParams
{
	RwFogType type;
	float32 start;
	float32 stop;
	float32 density;
	RwRGBA fogcolor;
	RwRGBA bgcolor;
	uint8* table;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

int32(*xFogEventCB)(xBase*, xBase*, uint32, float32*, xBase*);

void xFogUpdate();
int32 xFogEventCB(xBase* to, uint32 toEvent);
void xFogLoad(_xFog* ent, xSerial* s);
void xFogSave(_xFog* ent, xSerial* s);
void xFogInit(void* b, void* tasset);
void xFogClearFog();

// xFogUpdate__FP5xBaseP6xScenef
// Start address: 0x29ee00
void xFogUpdate()
{
	// Line 175, Address: 0x29ee00, Func Offset: 0
	// Func End, Address: 0x29ee08, Func Offset: 0x8
}

// xFogEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x29ee10
int32 xFogEventCB(xBase* to, uint32 toEvent)
{
	_xFog* t;
	iFogParams fog;
	// Line 115, Address: 0x29ee10, Func Offset: 0
	// Line 122, Address: 0x29ee14, Func Offset: 0x4
	// Line 124, Address: 0x29ee3c, Func Offset: 0x2c
	// Line 127, Address: 0x29ee40, Func Offset: 0x30
	// Line 128, Address: 0x29ee48, Func Offset: 0x38
	// Line 129, Address: 0x29ee54, Func Offset: 0x44
	// Line 130, Address: 0x29ee60, Func Offset: 0x50
	// Line 131, Address: 0x29ee6c, Func Offset: 0x5c
	// Line 132, Address: 0x29ee78, Func Offset: 0x68
	// Line 133, Address: 0x29ee84, Func Offset: 0x74
	// Line 134, Address: 0x29ee90, Func Offset: 0x80
	// Line 135, Address: 0x29ee9c, Func Offset: 0x8c
	// Line 136, Address: 0x29eea8, Func Offset: 0x98
	// Line 137, Address: 0x29eeb4, Func Offset: 0xa4
	// Line 138, Address: 0x29eec0, Func Offset: 0xb0
	// Line 139, Address: 0x29eecc, Func Offset: 0xbc
	// Line 140, Address: 0x29eed0, Func Offset: 0xc0
	// Line 141, Address: 0x29eee0, Func Offset: 0xd0
	// Line 145, Address: 0x29eee8, Func Offset: 0xd8
	// Line 146, Address: 0x29eef4, Func Offset: 0xe4
	// Line 148, Address: 0x29eefc, Func Offset: 0xec
	// Line 149, Address: 0x29ef00, Func Offset: 0xf0
	// Line 153, Address: 0x29ef0c, Func Offset: 0xfc
	// Line 156, Address: 0x29ef10, Func Offset: 0x100
	// Line 155, Address: 0x29ef14, Func Offset: 0x104
	// Line 156, Address: 0x29ef18, Func Offset: 0x108
	// Func End, Address: 0x29ef20, Func Offset: 0x110
}

// xFogLoad__FP5_xFogP7xSerial
// Start address: 0x29ef20
void xFogLoad(_xFog* ent, xSerial* s)
{
	// Line 96, Address: 0x29ef20, Func Offset: 0
	// Func End, Address: 0x29ef28, Func Offset: 0x8
}

// xFogSave__FP5_xFogP7xSerial
// Start address: 0x29ef30
void xFogSave(_xFog* ent, xSerial* s)
{
	// Line 77, Address: 0x29ef30, Func Offset: 0
	// Func End, Address: 0x29ef38, Func Offset: 0x8
}

// xFogInit__FPvPv
// Start address: 0x29ef40
void xFogInit(void* b, void* tasset)
{
	// Line 32, Address: 0x29ef40, Func Offset: 0
	// Line 33, Address: 0x29ef54, Func Offset: 0x14
	// Line 34, Address: 0x29ef90, Func Offset: 0x50
	// Func End, Address: 0x29efa4, Func Offset: 0x64
}

// xFogClearFog__Fv
// Start address: 0x29efb0
void xFogClearFog()
{
	// Line 28, Address: 0x29efb0, Func Offset: 0
	// Func End, Address: 0x29efc0, Func Offset: 0x10
}

