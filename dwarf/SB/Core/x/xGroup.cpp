typedef struct xBaseAsset;
typedef struct xGroup;
typedef struct xGroupAsset;
typedef struct xBase;
typedef struct xSerial;
typedef struct xLinkAsset;

typedef s32(*type_1)(xBase*, xBase*, u32, f32*, xBase*);
typedef s32(*type_2)(xBase*, xBase*, u32, f32*, xBase*);

typedef f32 type_0[4];

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	u32 last_index;
	s32 flg_group;
};

struct xGroupAsset : xBaseAsset
{
	u16 itemCount;
	u16 groupFlags;
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

struct xSerial
{
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

u32 gActiveHeap;
type_2 xGroupEventCB;

u32 get_any(xGroup* this);
u32 xGroupGetItem(xGroup* g, u32 index);
xBase* xGroupGetItemPtr(xGroup* g, u32 index);
u32 xGroupGetCount(xGroup* g);
s32 xGroupEventCB(xBase* to, u32 toEvent, f32* toParam, xBase* toParamWidget);
void xGroupLoad(xGroup* ent, xSerial* s);
void xGroupSave(xGroup* ent, xSerial* s);
void xGroupSetup(xGroup* g);
void xGroupInit(void* b, void* asset);

// get_any__6xGroupFv
// Start address: 0x29faf0
u32 get_any(xGroup* this)
{
	u32 id;
}

// xGroupGetItem__FP6xGroupUi
// Start address: 0x29fb30
u32 xGroupGetItem(xGroup* g, u32 index)
{
}

// xGroupGetItemPtr__FP6xGroupUi
// Start address: 0x29fb50
xBase* xGroupGetItemPtr(xGroup* g, u32 index)
{
}

// xGroupGetCount__FP6xGroup
// Start address: 0x29fc20
u32 xGroupGetCount(xGroup* g)
{
}

// xGroupEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x29fc30
s32 xGroupEventCB(xBase* to, u32 toEvent, f32* toParam, xBase* toParamWidget)
{
	xGroup* g;
	s32 rand;
	s32 i;
	xBase* b;
	s32 i;
	xBase* b;
	s32 i;
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
	u32 count;
	u32 i;
}

// xGroupInit__FPvPv
// Start address: 0x29ffc0
void xGroupInit(void* b, void* asset)
{
}

