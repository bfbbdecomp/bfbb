typedef struct xBaseAsset;
typedef struct xGroup;
typedef struct xGroupAsset;
typedef struct xBase;
typedef struct xSerial;
typedef struct xLinkAsset;

typedef int32(*type_1)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_2)(xBase*, xBase*, uint32, float32*, xBase*);

typedef float32 type_0[4];

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;

	uint32 get_any();
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
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

uint32 gActiveHeap;
int32(*xGroupEventCB)(xBase*, xBase*, uint32, float32*, xBase*);

uint32 get_any();
uint32 xGroupGetItem(xGroup* g, uint32 index);
xBase* xGroupGetItemPtr(xGroup* g, uint32 index);
uint32 xGroupGetCount(xGroup* g);
int32 xGroupEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget);
void xGroupLoad(xGroup* ent, xSerial* s);
void xGroupSave(xGroup* ent, xSerial* s);
void xGroupSetup(xGroup* g);
void xGroupInit(void* b, void* asset);

// get_any__6xGroupFv
// Start address: 0x29faf0
uint32 xGroup::get_any()
{
	uint32 id;
	// Line 338, Address: 0x29faf0, Func Offset: 0
	// Line 340, Address: 0x29faf8, Func Offset: 0x8
	// Line 344, Address: 0x29fb0c, Func Offset: 0x1c
	// Line 347, Address: 0x29fb10, Func Offset: 0x20
	// Line 344, Address: 0x29fb18, Func Offset: 0x28
	// Line 347, Address: 0x29fb20, Func Offset: 0x30
	// Line 350, Address: 0x29fb28, Func Offset: 0x38
	// Func End, Address: 0x29fb30, Func Offset: 0x40
}

// xGroupGetItem__FP6xGroupUi
// Start address: 0x29fb30
uint32 xGroupGetItem(xGroup* g, uint32 index)
{
	// Line 312, Address: 0x29fb30, Func Offset: 0
	// Line 313, Address: 0x29fb3c, Func Offset: 0xc
	// Func End, Address: 0x29fb44, Func Offset: 0x14
}

// xGroupGetItemPtr__FP6xGroupUi
// Start address: 0x29fb50
xBase* xGroupGetItemPtr(xGroup* g, uint32 index)
{
	// Line 272, Address: 0x29fb50, Func Offset: 0
	// Line 275, Address: 0x29fb78, Func Offset: 0x28
	// Line 277, Address: 0x29fb80, Func Offset: 0x30
	// Line 278, Address: 0x29fbdc, Func Offset: 0x8c
	// Line 277, Address: 0x29fbe0, Func Offset: 0x90
	// Line 282, Address: 0x29fbe4, Func Offset: 0x94
	// Line 283, Address: 0x29fbf8, Func Offset: 0xa8
	// Func End, Address: 0x29fc18, Func Offset: 0xc8
}

// xGroupGetCount__FP6xGroup
// Start address: 0x29fc20
uint32 xGroupGetCount(xGroup* g)
{
	// Line 254, Address: 0x29fc20, Func Offset: 0
	// Line 255, Address: 0x29fc24, Func Offset: 0x4
	// Func End, Address: 0x29fc2c, Func Offset: 0xc
}

// xGroupEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x29fc30
int32 xGroupEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
	xGroup* g;
	int32 rand;
	int32 i;
	xBase* b;
	int32 i;
	xBase* b;
	int32 i;
	xBase* b;
	// Line 147, Address: 0x29fc30, Func Offset: 0
	// Line 154, Address: 0x29fc34, Func Offset: 0x4
	// Line 147, Address: 0x29fc38, Func Offset: 0x8
	// Line 154, Address: 0x29fc64, Func Offset: 0x34
	// Line 157, Address: 0x29fc80, Func Offset: 0x50
	// Line 158, Address: 0x29fc8c, Func Offset: 0x5c
	// Line 159, Address: 0x29fc94, Func Offset: 0x64
	// Line 160, Address: 0x29fc98, Func Offset: 0x68
	// Line 162, Address: 0x29fc9c, Func Offset: 0x6c
	// Line 165, Address: 0x29fca0, Func Offset: 0x70
	// Line 166, Address: 0x29fca8, Func Offset: 0x78
	// Line 168, Address: 0x29fcb4, Func Offset: 0x84
	// Line 169, Address: 0x29fcd4, Func Offset: 0xa4
	// Line 170, Address: 0x29fce0, Func Offset: 0xb0
	// Line 173, Address: 0x29fcf0, Func Offset: 0xc0
	// Line 174, Address: 0x29fd0c, Func Offset: 0xdc
	// Line 182, Address: 0x29fd10, Func Offset: 0xe0
	// Line 184, Address: 0x29fd2c, Func Offset: 0xfc
	// Line 187, Address: 0x29fd30, Func Offset: 0x100
	// Line 188, Address: 0x29fd48, Func Offset: 0x118
	// Line 191, Address: 0x29fd60, Func Offset: 0x130
	// Line 192, Address: 0x29fd6c, Func Offset: 0x13c
	// Line 193, Address: 0x29fd74, Func Offset: 0x144
	// Line 194, Address: 0x29fd84, Func Offset: 0x154
	// Line 196, Address: 0x29fd98, Func Offset: 0x168
	// Line 199, Address: 0x29fda8, Func Offset: 0x178
	// Line 201, Address: 0x29fdc0, Func Offset: 0x190
	// Line 206, Address: 0x29fdc8, Func Offset: 0x198
	// Line 207, Address: 0x29fde0, Func Offset: 0x1b0
	// Line 210, Address: 0x29fdf8, Func Offset: 0x1c8
	// Line 211, Address: 0x29fe04, Func Offset: 0x1d4
	// Line 212, Address: 0x29fe0c, Func Offset: 0x1dc
	// Line 213, Address: 0x29fe1c, Func Offset: 0x1ec
	// Line 215, Address: 0x29fe30, Func Offset: 0x200
	// Line 218, Address: 0x29fe40, Func Offset: 0x210
	// Line 220, Address: 0x29fe58, Func Offset: 0x228
	// Line 224, Address: 0x29fe60, Func Offset: 0x230
	// Line 227, Address: 0x29fe78, Func Offset: 0x248
	// Line 230, Address: 0x29fe90, Func Offset: 0x260
	// Line 231, Address: 0x29fe9c, Func Offset: 0x26c
	// Line 234, Address: 0x29fea4, Func Offset: 0x274
	// Line 244, Address: 0x29feb0, Func Offset: 0x280
	// Line 246, Address: 0x29fec8, Func Offset: 0x298
	// Line 247, Address: 0x29fed0, Func Offset: 0x2a0
	// Func End, Address: 0x29fef8, Func Offset: 0x2c8
}

// xGroupLoad__FP6xGroupP7xSerial
// Start address: 0x29ff00
void xGroupLoad(xGroup* ent, xSerial* s)
{
	// Line 119, Address: 0x29ff00, Func Offset: 0
	// Func End, Address: 0x29ff08, Func Offset: 0x8
}

// xGroupSave__FP6xGroupP7xSerial
// Start address: 0x29ff10
void xGroupSave(xGroup* ent, xSerial* s)
{
	// Line 100, Address: 0x29ff10, Func Offset: 0
	// Func End, Address: 0x29ff18, Func Offset: 0x8
}

// xGroupSetup__FP6xGroup
// Start address: 0x29ff20
void xGroupSetup(xGroup* g)
{
	uint32 count;
	uint32 i;
	// Line 63, Address: 0x29ff20, Func Offset: 0
	// Line 70, Address: 0x29ff38, Func Offset: 0x18
	// Line 72, Address: 0x29ff48, Func Offset: 0x28
	// Line 76, Address: 0x29ff50, Func Offset: 0x30
	// Line 78, Address: 0x29ff60, Func Offset: 0x40
	// Line 80, Address: 0x29ff74, Func Offset: 0x54
	// Line 78, Address: 0x29ff7c, Func Offset: 0x5c
	// Line 80, Address: 0x29ff84, Func Offset: 0x64
	// Line 82, Address: 0x29ff90, Func Offset: 0x70
	// Line 83, Address: 0x29ff9c, Func Offset: 0x7c
	// Line 86, Address: 0x29ffa0, Func Offset: 0x80
	// Func End, Address: 0x29ffbc, Func Offset: 0x9c
}

// xGroupInit__FPvPv
// Start address: 0x29ffc0
void xGroupInit(void* b, void* asset)
{
	// Line 29, Address: 0x29ffc0, Func Offset: 0
	// Line 30, Address: 0x29ffd4, Func Offset: 0x14
	// Line 31, Address: 0x2a0058, Func Offset: 0x98
	// Func End, Address: 0x2a006c, Func Offset: 0xac
}

