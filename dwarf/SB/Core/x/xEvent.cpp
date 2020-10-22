typedef struct xBase;
typedef struct xLinkAsset;

typedef int32(*type_3)(xBase*, xBase*, uint32, float32*, xBase*);

typedef float32 type_0[4];
typedef float32 type_1[4];
typedef float32 type_2[4];
typedef int8 type_4[16];
typedef int8 type_5[256];
typedef int8 type_6[16];
typedef int8 type_7[256][20];

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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

int8 buffer[16];
int8 buffer[16];
int8 zEventLogBuf[256][20];
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
	// Line 194, Address: 0x2832c0, Func Offset: 0
	// Line 220, Address: 0x2832c4, Func Offset: 0x4
	// Line 194, Address: 0x2832c8, Func Offset: 0x8
	// Line 220, Address: 0x2832ec, Func Offset: 0x2c
	// Line 221, Address: 0x2832f4, Func Offset: 0x34
	// Line 222, Address: 0x283308, Func Offset: 0x48
	// Line 223, Address: 0x283314, Func Offset: 0x54
	// Line 226, Address: 0x283324, Func Offset: 0x64
	// Line 228, Address: 0x28332c, Func Offset: 0x6c
	// Line 229, Address: 0x283348, Func Offset: 0x88
	// Line 238, Address: 0x283360, Func Offset: 0xa0
	// Line 241, Address: 0x283374, Func Offset: 0xb4
	// Line 253, Address: 0x28337c, Func Offset: 0xbc
	// Line 255, Address: 0x283380, Func Offset: 0xc0
	// Line 261, Address: 0x283390, Func Offset: 0xd0
	// Line 265, Address: 0x2833a0, Func Offset: 0xe0
	// Line 268, Address: 0x2833a8, Func Offset: 0xe8
	// Line 272, Address: 0x2833b0, Func Offset: 0xf0
	// Line 277, Address: 0x2833bc, Func Offset: 0xfc
	// Line 282, Address: 0x2833c0, Func Offset: 0x100
	// Line 286, Address: 0x2833cc, Func Offset: 0x10c
	// Line 288, Address: 0x2833d4, Func Offset: 0x114
	// Line 289, Address: 0x2833d8, Func Offset: 0x118
	// Line 291, Address: 0x2833e0, Func Offset: 0x120
	// Line 292, Address: 0x2833e8, Func Offset: 0x128
	// Line 293, Address: 0x2833fc, Func Offset: 0x13c
	// Line 294, Address: 0x283400, Func Offset: 0x140
	// Line 297, Address: 0x283420, Func Offset: 0x160
	// Line 299, Address: 0x283434, Func Offset: 0x174
	// Line 300, Address: 0x283438, Func Offset: 0x178
	// Func End, Address: 0x28345c, Func Offset: 0x19c
}

// zEntEvent__FP5xBaseP5xBaseUiPCf
// Start address: 0x283460
void zEntEvent(xBase* from, xBase* to, uint32 toEvent, float32* toParam)
{
	// Line 170, Address: 0x283468, Func Offset: 0x8
	// Func End, Address: 0x283480, Func Offset: 0x20
}

// zEntEvent__FP5xBaseP5xBaseUi
// Start address: 0x283480
void zEntEvent(xBase* from, xBase* to, uint32 toEvent)
{
	// Line 165, Address: 0x283488, Func Offset: 0x8
	// Func End, Address: 0x2834a0, Func Offset: 0x20
}

// zEntEvent__FP5xBaseUiPCfP5xBase
// Start address: 0x2834a0
void zEntEvent(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
	// Line 159, Address: 0x2834a8, Func Offset: 0x8
	// Func End, Address: 0x2834c0, Func Offset: 0x20
}

// zEntEvent__FP5xBaseUiPCf
// Start address: 0x2834c0
void zEntEvent(xBase* to, uint32 toEvent, float32* toParam)
{
	// Line 154, Address: 0x2834c8, Func Offset: 0x8
	// Func End, Address: 0x2834e0, Func Offset: 0x20
}

// zEntEvent__FP5xBaseUiffff
// Start address: 0x2834e0
void zEntEvent(xBase* to, uint32 toEvent, float32 toParam0, float32 toParam1, float32 toParam2, float32 toParam3)
{
	float32 toParam[4];
	// Line 132, Address: 0x2834e0, Func Offset: 0
	// Line 134, Address: 0x2834f0, Func Offset: 0x10
	// Line 138, Address: 0x2834f4, Func Offset: 0x14
	// Line 135, Address: 0x2834f8, Func Offset: 0x18
	// Line 138, Address: 0x2834fc, Func Offset: 0x1c
	// Line 136, Address: 0x283500, Func Offset: 0x20
	// Line 138, Address: 0x283504, Func Offset: 0x24
	// Line 137, Address: 0x283508, Func Offset: 0x28
	// Line 138, Address: 0x28350c, Func Offset: 0x2c
	// Line 139, Address: 0x283518, Func Offset: 0x38
	// Func End, Address: 0x283524, Func Offset: 0x44
}

// zEntEvent__FP5xBaseUi
// Start address: 0x283530
void zEntEvent(xBase* to, uint32 toEvent)
{
	// Line 114, Address: 0x283538, Func Offset: 0x8
	// Func End, Address: 0x283550, Func Offset: 0x20
}

// zEntEvent__FUiUiffff
// Start address: 0x283550
void zEntEvent(uint32 toID, uint32 toEvent, float32 toParam0, float32 toParam1, float32 toParam2, float32 toParam3)
{
	xBase* sendTo;
	float32 toParam[4];
	// Line 83, Address: 0x283550, Func Offset: 0
	// Line 87, Address: 0x28355c, Func Offset: 0xc
	// Line 88, Address: 0x283564, Func Offset: 0x14
	// Line 89, Address: 0x283568, Func Offset: 0x18
	// Line 92, Address: 0x28356c, Func Offset: 0x1c
	// Line 93, Address: 0x283578, Func Offset: 0x28
	// Line 94, Address: 0x283580, Func Offset: 0x30
	// Line 99, Address: 0x283598, Func Offset: 0x48
	// Func End, Address: 0x2835a8, Func Offset: 0x58
}

// zEntEvent__FUiUi
// Start address: 0x2835b0
void zEntEvent(uint32 toID, uint32 toEvent)
{
	xBase* sendTo;
	// Line 70, Address: 0x2835b0, Func Offset: 0
	// Line 74, Address: 0x2835bc, Func Offset: 0xc
	// Line 75, Address: 0x2835c8, Func Offset: 0x18
	// Line 76, Address: 0x2835d0, Func Offset: 0x20
	// Line 81, Address: 0x2835e8, Func Offset: 0x38
	// Func End, Address: 0x2835f8, Func Offset: 0x48
}

// zEntEvent__FPcUi
// Start address: 0x283600
void zEntEvent(int8* to, uint32 toEvent)
{
	uint32 id;
	xBase* sendTo;
	// Line 45, Address: 0x283600, Func Offset: 0
	// Line 47, Address: 0x28360c, Func Offset: 0xc
	// Line 50, Address: 0x283614, Func Offset: 0x14
	// Line 51, Address: 0x283620, Func Offset: 0x20
	// Line 52, Address: 0x283628, Func Offset: 0x28
	// Line 57, Address: 0x283640, Func Offset: 0x40
	// Func End, Address: 0x283650, Func Offset: 0x50
}

