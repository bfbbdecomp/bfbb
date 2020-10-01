typedef struct RyzMemGrow;
typedef struct xBase;
typedef struct xLinkAsset;

typedef s32(*type_1)(xBase*, xBase*, u32, f32*, xBase*);

typedef f32 type_0[4];

struct RyzMemGrow
{
	s32 flg_grow;
	s32 amt;
	s8* ptr;
	xBase* user;
	s32 amt_last;
	s8* ptr_last;
	xBase* user_last;
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

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_0 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

u32 g_total_alloc;
u32 gActiveHeap;

void Done(RyzMemGrow* this);
RyzMemGrow* Resume(RyzMemGrow* this);
RyzMemGrow* Init(RyzMemGrow* this, xBase* growuser);
void __dl();
void* __nw(u32 amt, RyzMemGrow* growCtxt);

// Done__10RyzMemGrowFv
// Start address: 0x2f2e30
void Done(RyzMemGrow* this)
{
}

// Resume__10RyzMemGrowFP5xBase
// Start address: 0x2f2e60
RyzMemGrow* Resume(RyzMemGrow* this)
{
}

// Init__10RyzMemGrowFP5xBase
// Start address: 0x2f2e90
RyzMemGrow* Init(RyzMemGrow* this, xBase* growuser)
{
}

// __dl__10RyzMemDataFPv
// Start address: 0x2f2f10
void __dl()
{
}

// __nw__10RyzMemDataFUiiP10RyzMemGrow
// Start address: 0x2f2f20
void* __nw(u32 amt, RyzMemGrow* growCtxt)
{
	void* mem;
	s32 dogrow;
}

