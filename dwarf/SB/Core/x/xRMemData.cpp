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

	void Done();
	RyzMemGrow* Resume();
	RyzMemGrow* Init(xBase* growuser);
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

uint32 g_total_alloc;
uint32 gActiveHeap;

void Done();
RyzMemGrow* Resume();
RyzMemGrow* Init(xBase* growuser);
void __dl();
void* __nw(uint32 amt, RyzMemGrow* growCtxt);

// Done__10RyzMemGrowFv
// Start address: 0x2f2e30
void RyzMemGrow::Done()
{
	// Line 257, Address: 0x2f2e30, Func Offset: 0
	// Line 258, Address: 0x2f2e38, Func Offset: 0x8
	// Line 259, Address: 0x2f2e40, Func Offset: 0x10
	// Line 262, Address: 0x2f2e48, Func Offset: 0x18
	// Line 263, Address: 0x2f2e4c, Func Offset: 0x1c
	// Line 264, Address: 0x2f2e50, Func Offset: 0x20
	// Line 270, Address: 0x2f2e54, Func Offset: 0x24
	// Func End, Address: 0x2f2e5c, Func Offset: 0x2c
}

// Resume__10RyzMemGrowFP5xBase
// Start address: 0x2f2e60
RyzMemGrow* RyzMemGrow::Resume()
{
	// Line 224, Address: 0x2f2e60, Func Offset: 0
	// Line 228, Address: 0x2f2e64, Func Offset: 0x4
	// Line 234, Address: 0x2f2e68, Func Offset: 0x8
	// Line 224, Address: 0x2f2e6c, Func Offset: 0xc
	// Line 225, Address: 0x2f2e70, Func Offset: 0x10
	// Line 226, Address: 0x2f2e78, Func Offset: 0x18
	// Line 235, Address: 0x2f2e80, Func Offset: 0x20
	// Func End, Address: 0x2f2e88, Func Offset: 0x28
}

// Init__10RyzMemGrowFP5xBase
// Start address: 0x2f2e90
RyzMemGrow* RyzMemGrow::Init(xBase* growuser)
{
	// Line 184, Address: 0x2f2e90, Func Offset: 0
	// Line 189, Address: 0x2f2ea4, Func Offset: 0x14
	// Line 192, Address: 0x2f2eb8, Func Offset: 0x28
	// Line 193, Address: 0x2f2ebc, Func Offset: 0x2c
	// Line 201, Address: 0x2f2ec0, Func Offset: 0x30
	// Line 194, Address: 0x2f2ec4, Func Offset: 0x34
	// Line 201, Address: 0x2f2ec8, Func Offset: 0x38
	// Line 202, Address: 0x2f2ecc, Func Offset: 0x3c
	// Line 206, Address: 0x2f2ee0, Func Offset: 0x50
	// Line 203, Address: 0x2f2ee4, Func Offset: 0x54
	// Line 212, Address: 0x2f2ee8, Func Offset: 0x58
	// Line 206, Address: 0x2f2eec, Func Offset: 0x5c
	// Line 213, Address: 0x2f2ef0, Func Offset: 0x60
	// Func End, Address: 0x2f2f04, Func Offset: 0x74
}

// __dl__10RyzMemDataFPv
// Start address: 0x2f2f10
void RyzMemData::__dl()
{
	// Line 169, Address: 0x2f2f10, Func Offset: 0
	// Func End, Address: 0x2f2f18, Func Offset: 0x8
}

// __nw__10RyzMemDataFUiiP10RyzMemGrow
// Start address: 0x2f2f20
void* RyzMemData::__nw(uint32 amt, RyzMemGrow* growCtxt)
{
	void* mem;
	int32 dogrow;
	// Line 80, Address: 0x2f2f20, Func Offset: 0
	// Line 89, Address: 0x2f2f2c, Func Offset: 0xc
	// Line 90, Address: 0x2f2f30, Func Offset: 0x10
	// Line 91, Address: 0x2f2f40, Func Offset: 0x20
	// Line 109, Address: 0x2f2f54, Func Offset: 0x34
	// Line 108, Address: 0x2f2f58, Func Offset: 0x38
	// Line 111, Address: 0x2f2f80, Func Offset: 0x60
	// Line 117, Address: 0x2f2f90, Func Offset: 0x70
	// Line 118, Address: 0x2f2f94, Func Offset: 0x74
	// Func End, Address: 0x2f2fa4, Func Offset: 0x84
}

