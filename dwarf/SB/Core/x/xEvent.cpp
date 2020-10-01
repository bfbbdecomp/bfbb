typedef struct xBase;
typedef struct xLinkAsset;

typedef s32(*type_3)(xBase*, xBase*, u32, f32*, xBase*);

typedef f32 type_0[4];
typedef f32 type_1[4];
typedef f32 type_2[4];
typedef s8 type_4[16];
typedef s8 type_5[256];
typedef s8 type_6[16];
typedef type_5 type_7[20];

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_3 eventFunc;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_2 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

type_4 buffer;
type_6 buffer;
type_7 zEventLogBuf;
s32 zEventLogBufInit;

void zEntEvent(xBase* from, xBase* to, u32 toEvent, f32* toParam, xBase* toParamWidget, s32 forceEvent);
void zEntEvent(xBase* from, xBase* to, u32 toEvent, f32* toParam);
void zEntEvent(xBase* from, xBase* to, u32 toEvent);
void zEntEvent(xBase* to, u32 toEvent, f32* toParam, xBase* toParamWidget);
void zEntEvent(xBase* to, u32 toEvent, f32* toParam);
void zEntEvent(xBase* to, u32 toEvent, f32 toParam0, f32 toParam1, f32 toParam2, f32 toParam3);
void zEntEvent(xBase* to, u32 toEvent);
void zEntEvent(u32 toID, u32 toEvent, f32 toParam0, f32 toParam1, f32 toParam2, f32 toParam3);
void zEntEvent(u32 toID, u32 toEvent);
void zEntEvent(s8* to, u32 toEvent);

// zEntEvent__FP5xBaseUiP5xBaseUiPCfP5xBasei
// Start address: 0x2832c0
void zEntEvent(xBase* from, xBase* to, u32 toEvent, f32* toParam, xBase* toParamWidget, s32 forceEvent)
{
	xLinkAsset* idx;
	s32 i;
	xBase* sendTo;
	xBase* b;
}

// zEntEvent__FP5xBaseP5xBaseUiPCf
// Start address: 0x283460
void zEntEvent(xBase* from, xBase* to, u32 toEvent, f32* toParam)
{
}

// zEntEvent__FP5xBaseP5xBaseUi
// Start address: 0x283480
void zEntEvent(xBase* from, xBase* to, u32 toEvent)
{
}

// zEntEvent__FP5xBaseUiPCfP5xBase
// Start address: 0x2834a0
void zEntEvent(xBase* to, u32 toEvent, f32* toParam, xBase* toParamWidget)
{
}

// zEntEvent__FP5xBaseUiPCf
// Start address: 0x2834c0
void zEntEvent(xBase* to, u32 toEvent, f32* toParam)
{
}

// zEntEvent__FP5xBaseUiffff
// Start address: 0x2834e0
void zEntEvent(xBase* to, u32 toEvent, f32 toParam0, f32 toParam1, f32 toParam2, f32 toParam3)
{
	type_0 toParam;
}

// zEntEvent__FP5xBaseUi
// Start address: 0x283530
void zEntEvent(xBase* to, u32 toEvent)
{
}

// zEntEvent__FUiUiffff
// Start address: 0x283550
void zEntEvent(u32 toID, u32 toEvent, f32 toParam0, f32 toParam1, f32 toParam2, f32 toParam3)
{
	xBase* sendTo;
	type_1 toParam;
}

// zEntEvent__FUiUi
// Start address: 0x2835b0
void zEntEvent(u32 toID, u32 toEvent)
{
	xBase* sendTo;
}

// zEntEvent__FPcUi
// Start address: 0x283600
void zEntEvent(s8* to, u32 toEvent)
{
	u32 id;
	xBase* sendTo;
}

