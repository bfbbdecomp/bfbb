typedef struct xSerial;
typedef struct RwRGBA;
typedef struct xBase;
typedef struct xFogAsset;
typedef struct _xFog;
typedef struct xLinkAsset;
typedef struct xBaseAsset;
typedef struct iFogParams;
typedef enum RwFogType;

typedef s32(*type_1)(xBase*, xBase*, u32, f32*, xBase*);
typedef s32(*type_5)(xBase*, xBase*, u32, f32*, xBase*);

typedef f32 type_0[4];
typedef u8 type_2[4];
typedef u8 type_3[4];
typedef u8 type_4[3];

struct xSerial
{
};

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
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

struct xFogAsset : xBaseAsset
{
	type_2 bkgndColor;
	type_3 fogColor;
	f32 fogDensity;
	f32 fogStart;
	f32 fogStop;
	f32 transitionTime;
	u8 fogType;
	type_4 padFog;
};

struct _xFog : xBase
{
	xFogAsset* tasset;
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

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct iFogParams
{
	RwFogType type;
	f32 start;
	f32 stop;
	f32 density;
	RwRGBA fogcolor;
	RwRGBA bgcolor;
	u8* table;
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
s32 xFogEventCB(xBase* to, u32 toEvent);
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
s32 xFogEventCB(xBase* to, u32 toEvent)
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

