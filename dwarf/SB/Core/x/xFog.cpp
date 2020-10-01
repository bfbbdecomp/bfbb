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
	type_1 eventFunc;
};

struct xFogAsset : xBaseAsset
{
	type_2 bkgndColor;
	type_3 fogColor;
	float32 fogDensity;
	float32 fogStart;
	float32 fogStop;
	float32 transitionTime;
	uint8 fogType;
	type_4 padFog;
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
	type_0 param;
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

type_5 xFogEventCB;

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
}

// xFogEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x29ee10
int32 xFogEventCB(xBase* to, uint32 toEvent)
{
	_xFog* t;
	iFogParams fog;
}

// xFogLoad__FP5_xFogP7xSerial
// Start address: 0x29ef20
void xFogLoad(_xFog* ent, xSerial* s)
{
}

// xFogSave__FP5_xFogP7xSerial
// Start address: 0x29ef30
void xFogSave(_xFog* ent, xSerial* s)
{
}

// xFogInit__FPvPv
// Start address: 0x29ef40
void xFogInit(void* b, void* tasset)
{
}

// xFogClearFog__Fv
// Start address: 0x29efb0
void xFogClearFog()
{
}

