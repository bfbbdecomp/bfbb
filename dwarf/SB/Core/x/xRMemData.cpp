typedef struct RyzMemGrow;
typedef struct xBase;
typedef struct xLinkAsset;

typedef int32(*type_1)(xBase*, xBase*, uint32, float32*, xBase*);

typedef float32 type_0[4];

struct RyzMemGrow
{
	int32 flg_grow;
	int32 amt;
	int8* ptr;
	xBase* user;
	int32 amt_last;
	int8* ptr_last;
	xBase* user_last;
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_0 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

uint32 g_total_alloc;
uint32 gActiveHeap;

void Done(RyzMemGrow* this);
RyzMemGrow* Resume(RyzMemGrow* this);
RyzMemGrow* Init(RyzMemGrow* this, xBase* growuser);
void __dl();
void* __nw(uint32 amt, RyzMemGrow* growCtxt);

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
void* __nw(uint32 amt, RyzMemGrow* growCtxt)
{
	void* mem;
	int32 dogrow;
}

