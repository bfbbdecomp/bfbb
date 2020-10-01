typedef struct xBase;
typedef struct xLinkAsset;

typedef int32(*type_3)(xBase*, xBase*, uint32, float32*, xBase*);

typedef float32 type_0[4];
typedef float32 type_1[4];
typedef float32 type_2[4];
typedef int8 type_4[16];
typedef int8 type_5[256];
typedef int8 type_6[16];
typedef type_5 type_7[20];

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_3 eventFunc;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_2 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

type_4 buffer;
type_6 buffer;
type_7 zEventLogBuf;
int32 zEventLogBufInit;

void zEntEvent(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget, int32 forceEvent);
void zEntEvent(xBase* from, xBase* to, uint32 toEvent, float32* toParam);
void zEntEvent(xBase* from, xBase* to, uint32 toEvent);
void zEntEvent(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget);
void zEntEvent(xBase* to, uint32 toEvent, float32* toParam);
void zEntEvent(xBase* to, uint32 toEvent, float32 toParam0, float32 toParam1, float32 toParam2, float32 toParam3);
void zEntEvent(xBase* to, uint32 toEvent);
void zEntEvent(uint32 toID, uint32 toEvent, float32 toParam0, float32 toParam1, float32 toParam2, float32 toParam3);
void zEntEvent(uint32 toID, uint32 toEvent);
void zEntEvent(int8* to, uint32 toEvent);

// zEntEvent__FP5xBaseUiP5xBaseUiPCfP5xBasei
// Start address: 0x2832c0
void zEntEvent(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget, int32 forceEvent)
{
	xLinkAsset* idx;
	int32 i;
	xBase* sendTo;
	xBase* b;
}

// zEntEvent__FP5xBaseP5xBaseUiPCf
// Start address: 0x283460
void zEntEvent(xBase* from, xBase* to, uint32 toEvent, float32* toParam)
{
}

// zEntEvent__FP5xBaseP5xBaseUi
// Start address: 0x283480
void zEntEvent(xBase* from, xBase* to, uint32 toEvent)
{
}

// zEntEvent__FP5xBaseUiPCfP5xBase
// Start address: 0x2834a0
void zEntEvent(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
}

// zEntEvent__FP5xBaseUiPCf
// Start address: 0x2834c0
void zEntEvent(xBase* to, uint32 toEvent, float32* toParam)
{
}

// zEntEvent__FP5xBaseUiffff
// Start address: 0x2834e0
void zEntEvent(xBase* to, uint32 toEvent, float32 toParam0, float32 toParam1, float32 toParam2, float32 toParam3)
{
	type_0 toParam;
}

// zEntEvent__FP5xBaseUi
// Start address: 0x283530
void zEntEvent(xBase* to, uint32 toEvent)
{
}

// zEntEvent__FUiUiffff
// Start address: 0x283550
void zEntEvent(uint32 toID, uint32 toEvent, float32 toParam0, float32 toParam1, float32 toParam2, float32 toParam3)
{
	xBase* sendTo;
	type_1 toParam;
}

// zEntEvent__FUiUi
// Start address: 0x2835b0
void zEntEvent(uint32 toID, uint32 toEvent)
{
	xBase* sendTo;
}

// zEntEvent__FPcUi
// Start address: 0x283600
void zEntEvent(int8* to, uint32 toEvent)
{
	uint32 id;
	xBase* sendTo;
}

