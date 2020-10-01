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
	type_1 eventFunc;
};

struct xSerial
{
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

uint32 gActiveHeap;
type_2 xGroupEventCB;

uint32 get_any(xGroup* this);
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
uint32 get_any(xGroup* this)
{
	uint32 id;
}

// xGroupGetItem__FP6xGroupUi
// Start address: 0x29fb30
uint32 xGroupGetItem(xGroup* g, uint32 index)
{
}

// xGroupGetItemPtr__FP6xGroupUi
// Start address: 0x29fb50
xBase* xGroupGetItemPtr(xGroup* g, uint32 index)
{
}

// xGroupGetCount__FP6xGroup
// Start address: 0x29fc20
uint32 xGroupGetCount(xGroup* g)
{
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
}

// xGroupLoad__FP6xGroupP7xSerial
// Start address: 0x29ff00
void xGroupLoad(xGroup* ent, xSerial* s)
{
}

// xGroupSave__FP6xGroupP7xSerial
// Start address: 0x29ff10
void xGroupSave(xGroup* ent, xSerial* s)
{
}

// xGroupSetup__FP6xGroup
// Start address: 0x29ff20
void xGroupSetup(xGroup* g)
{
	uint32 count;
	uint32 i;
}

// xGroupInit__FPvPv
// Start address: 0x29ffc0
void xGroupInit(void* b, void* asset)
{
}

