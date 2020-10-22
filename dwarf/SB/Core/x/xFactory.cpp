typedef struct xFactory;
typedef struct XGOFTypeInfo;
typedef struct st_XORDEREDARRAY;
typedef struct xFactoryInst;
typedef struct xBase;
typedef struct RyzMemData;
typedef struct RyzMemGrow;

typedef int32(*type_1)(void*, void*);
typedef xFactoryInst*(*type_2)(int32, RyzMemGrow*, void*);
typedef void(*type_3)(xFactoryInst*);
typedef int32(*type_4)(void*, void*);

typedef XGOFTypeInfo type_0[2];

struct xFactory : RyzMemData
{
	XGOFTypeInfo* infopool;
	st_XORDEREDARRAY infolist;
	xFactoryInst* products;
	RyzMemGrow growContextData;

	void DestroyItem(xFactoryInst* item);
	void DestroyAll();
	xFactoryInst* CreateItem(int32 typeID, void* userdata, RyzMemGrow* callerzgrow);
	void GrowDataDisable();
	void GrowDataEnable(xBase* user, int32 isResume);
	int32 RegItemType(int32 tid, xFactoryInst*(*create)(int32, RyzMemGrow*, void*), void(*destroy)(xFactoryInst*));
	int32 RegItemType(XGOFTypeInfo* info);
	void* __dt();
	void* __ct(int32 maxTypes);
};

struct XGOFTypeInfo
{
	int32 tid;
	xFactoryInst*(*creator)(int32, RyzMemGrow*, void*);
	void(*destroyer)(xFactoryInst*);
};

struct st_XORDEREDARRAY
{
	void** list;
	int32 cnt;
	int32 max;
	int32 warnlvl;
};

struct xFactoryInst : RyzMemData
{
	int32 itemType;
	xFactoryInst* nextprod;
	xFactoryInst* prevprod;
};

struct xBase
{
};

struct RyzMemData
{
};

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

int32(*OrdTest_infotype)(void*, void*);
int32(*OrdComp_infotype)(void*, void*);
uint32 gActiveHeap;

int32 OrdComp_infotype(void* vkey, void* vitem);
int32 OrdTest_infotype(void* vkey, void* vitem);
void DestroyItem(xFactoryInst* item);
void DestroyAll();
xFactoryInst* CreateItem(int32 typeID, void* userdata, RyzMemGrow* callerzgrow);
void GrowDataDisable();
void GrowDataEnable(xBase* user, int32 isResume);
int32 RegItemType(int32 tid, xFactoryInst*(*create)(int32, RyzMemGrow*, void*), void(*destroy)(xFactoryInst*));
int32 RegItemType(XGOFTypeInfo* info);
void* __dt();
void* __ct(int32 maxTypes);

// OrdComp_infotype__FPvPv
// Start address: 0x2f1db0
int32 OrdComp_infotype(void* vkey, void* vitem)
{
	int32 rc;
	// Line 298, Address: 0x2f1db0, Func Offset: 0
	// Line 304, Address: 0x2f1db8, Func Offset: 0x8
	// Line 305, Address: 0x2f1dd0, Func Offset: 0x20
	// Line 306, Address: 0x2f1de8, Func Offset: 0x38
	// Line 309, Address: 0x2f1df0, Func Offset: 0x40
	// Func End, Address: 0x2f1df8, Func Offset: 0x48
}

// OrdTest_infotype__FPCvPv
// Start address: 0x2f1e00
int32 OrdTest_infotype(void* vkey, void* vitem)
{
	int32 rc;
	// Line 284, Address: 0x2f1e00, Func Offset: 0
	// Line 290, Address: 0x2f1e08, Func Offset: 0x8
	// Line 291, Address: 0x2f1e20, Func Offset: 0x20
	// Line 292, Address: 0x2f1e38, Func Offset: 0x38
	// Line 295, Address: 0x2f1e40, Func Offset: 0x40
	// Func End, Address: 0x2f1e48, Func Offset: 0x48
}

// DestroyItem__8xFactoryFP12xFactoryInst
// Start address: 0x2f1e50
void xFactory::DestroyItem(xFactoryInst* item)
{
	int32 idx;
	XGOFTypeInfo pattern;
	// Line 241, Address: 0x2f1e50, Func Offset: 0
	// Line 243, Address: 0x2f1e54, Func Offset: 0x4
	// Line 241, Address: 0x2f1e58, Func Offset: 0x8
	// Line 243, Address: 0x2f1e68, Func Offset: 0x18
	// Line 247, Address: 0x2f1e90, Func Offset: 0x40
	// Line 252, Address: 0x2f1e98, Func Offset: 0x48
	// Line 253, Address: 0x2f1ea4, Func Offset: 0x54
	// Line 255, Address: 0x2f1eb0, Func Offset: 0x60
	// Line 256, Address: 0x2f1ebc, Func Offset: 0x6c
	// Line 255, Address: 0x2f1ec0, Func Offset: 0x70
	// Line 259, Address: 0x2f1ec4, Func Offset: 0x74
	// Line 260, Address: 0x2f1edc, Func Offset: 0x8c
	// Line 268, Address: 0x2f1ef0, Func Offset: 0xa0
	// Line 263, Address: 0x2f1ef4, Func Offset: 0xa4
	// Line 268, Address: 0x2f1ef8, Func Offset: 0xa8
	// Line 276, Address: 0x2f1f0c, Func Offset: 0xbc
	// Line 279, Address: 0x2f1f28, Func Offset: 0xd8
	// Func End, Address: 0x2f1f3c, Func Offset: 0xec
}

// DestroyAll__8xFactoryFv
// Start address: 0x2f1f40
void xFactory::DestroyAll()
{
	// Line 230, Address: 0x2f1f40, Func Offset: 0
	// Line 235, Address: 0x2f1f50, Func Offset: 0x10
	// Line 238, Address: 0x2f1f70, Func Offset: 0x30
	// Func End, Address: 0x2f1f80, Func Offset: 0x40
}

// CreateItem__8xFactoryFiPvP10RyzMemGrow
// Start address: 0x2f1f80
xFactoryInst* xFactory::CreateItem(int32 typeID, void* userdata, RyzMemGrow* callerzgrow)
{
	int32 idx;
	xFactoryInst* item;
	XGOFTypeInfo pattern;
	XGOFTypeInfo* darec;
	RyzMemGrow* grow;
	// Line 184, Address: 0x2f1f80, Func Offset: 0
	// Line 187, Address: 0x2f1f84, Func Offset: 0x4
	// Line 184, Address: 0x2f1f88, Func Offset: 0x8
	// Line 187, Address: 0x2f1f8c, Func Offset: 0xc
	// Line 184, Address: 0x2f1f90, Func Offset: 0x10
	// Line 187, Address: 0x2f1fa8, Func Offset: 0x28
	// Line 191, Address: 0x2f1fcc, Func Offset: 0x4c
	// Line 192, Address: 0x2f1fe4, Func Offset: 0x64
	// Line 195, Address: 0x2f1ff8, Func Offset: 0x78
	// Line 197, Address: 0x2f200c, Func Offset: 0x8c
	// Line 199, Address: 0x2f2020, Func Offset: 0xa0
	// Line 204, Address: 0x2f2038, Func Offset: 0xb8
	// Line 205, Address: 0x2f2050, Func Offset: 0xd0
	// Line 206, Address: 0x2f2054, Func Offset: 0xd4
	// Line 209, Address: 0x2f2058, Func Offset: 0xd8
	// Line 211, Address: 0x2f2068, Func Offset: 0xe8
	// Line 214, Address: 0x2f2078, Func Offset: 0xf8
	// Line 215, Address: 0x2f2080, Func Offset: 0x100
	// Line 216, Address: 0x2f2084, Func Offset: 0x104
	// Line 217, Address: 0x2f208c, Func Offset: 0x10c
	// Line 218, Address: 0x2f2094, Func Offset: 0x114
	// Line 219, Address: 0x2f2098, Func Offset: 0x118
	// Line 221, Address: 0x2f20a0, Func Offset: 0x120
	// Line 222, Address: 0x2f20a8, Func Offset: 0x128
	// Line 226, Address: 0x2f20b0, Func Offset: 0x130
	// Func End, Address: 0x2f20cc, Func Offset: 0x14c
}

// GrowDataDisable__8xFactoryFv
// Start address: 0x2f20d0
void xFactory::GrowDataDisable()
{
	// Line 177, Address: 0x2f20d0, Func Offset: 0
	// Func End, Address: 0x2f20d8, Func Offset: 0x8
}

// GrowDataEnable__8xFactoryFP5xBasei
// Start address: 0x2f20e0
void xFactory::GrowDataEnable(xBase* user, int32 isResume)
{
	// Line 169, Address: 0x2f20e0, Func Offset: 0
	// Line 170, Address: 0x2f20e4, Func Offset: 0x4
	// Line 171, Address: 0x2f2100, Func Offset: 0x20
	// Line 173, Address: 0x2f2108, Func Offset: 0x28
	// Func End, Address: 0x2f2114, Func Offset: 0x34
}

// RegItemType__8xFactoryFiPFiP10RyzMemGrowPv_P12xFactoryInstPFP12xFactoryInst_v
// Start address: 0x2f2120
int32 xFactory::RegItemType(int32 tid, xFactoryInst*(*create)(int32, RyzMemGrow*, void*), void(*destroy)(xFactoryInst*))
{
	XGOFTypeInfo typerec[2];
	// Line 157, Address: 0x2f2120, Func Offset: 0
	// Line 159, Address: 0x2f2124, Func Offset: 0x4
	// Line 163, Address: 0x2f2154, Func Offset: 0x34
	// Line 164, Address: 0x2f2160, Func Offset: 0x40
	// Func End, Address: 0x2f216c, Func Offset: 0x4c
}

// RegItemType__8xFactoryFP12XGOFTypeInfo
// Start address: 0x2f2170
int32 xFactory::RegItemType(XGOFTypeInfo* info)
{
	int32 rc;
	XGOFTypeInfo* tptr;
	XGOFTypeInfo* nextrec;
	int32 idx;
	// Line 86, Address: 0x2f2170, Func Offset: 0
	// Line 87, Address: 0x2f2188, Func Offset: 0x18
	// Line 98, Address: 0x2f218c, Func Offset: 0x1c
	// Line 104, Address: 0x2f2198, Func Offset: 0x28
	// Line 106, Address: 0x2f21a4, Func Offset: 0x34
	// Line 107, Address: 0x2f21ac, Func Offset: 0x3c
	// Line 108, Address: 0x2f21b0, Func Offset: 0x40
	// Line 110, Address: 0x2f21bc, Func Offset: 0x4c
	// Line 111, Address: 0x2f21c4, Func Offset: 0x54
	// Line 116, Address: 0x2f21c8, Func Offset: 0x58
	// Line 118, Address: 0x2f21dc, Func Offset: 0x6c
	// Line 119, Address: 0x2f21e4, Func Offset: 0x74
	// Line 122, Address: 0x2f21e8, Func Offset: 0x78
	// Line 124, Address: 0x2f21fc, Func Offset: 0x8c
	// Line 126, Address: 0x2f2204, Func Offset: 0x94
	// Line 127, Address: 0x2f220c, Func Offset: 0x9c
	// Line 134, Address: 0x2f2210, Func Offset: 0xa0
	// Line 143, Address: 0x2f2214, Func Offset: 0xa4
	// Line 134, Address: 0x2f2218, Func Offset: 0xa8
	// Line 136, Address: 0x2f221c, Func Offset: 0xac
	// Line 143, Address: 0x2f2220, Func Offset: 0xb0
	// Line 134, Address: 0x2f2228, Func Offset: 0xb8
	// Line 136, Address: 0x2f2238, Func Offset: 0xc8
	// Line 137, Address: 0x2f223c, Func Offset: 0xcc
	// Line 138, Address: 0x2f2244, Func Offset: 0xd4
	// Line 143, Address: 0x2f2248, Func Offset: 0xd8
	// Line 148, Address: 0x2f2250, Func Offset: 0xe0
	// Line 150, Address: 0x2f2254, Func Offset: 0xe4
	// Line 152, Address: 0x2f2260, Func Offset: 0xf0
	// Line 153, Address: 0x2f2264, Func Offset: 0xf4
	// Func End, Address: 0x2f227c, Func Offset: 0x10c
}

// __dt__8xFactoryFv
// Start address: 0x2f2280
void* xFactory::__dt()
{
	// Line 73, Address: 0x2f2280, Func Offset: 0
	// Line 77, Address: 0x2f229c, Func Offset: 0x1c
	// Line 79, Address: 0x2f22cc, Func Offset: 0x4c
	// Func End, Address: 0x2f22e0, Func Offset: 0x60
}

// __ct__8xFactoryFi
// Start address: 0x2f22e0
void* xFactory::__ct(int32 maxTypes)
{
	uint32 amt;
	// Line 50, Address: 0x2f22e0, Func Offset: 0
	// Line 54, Address: 0x2f22e4, Func Offset: 0x4
	// Line 50, Address: 0x2f22e8, Func Offset: 0x8
	// Line 54, Address: 0x2f22ec, Func Offset: 0xc
	// Line 50, Address: 0x2f22f0, Func Offset: 0x10
	// Line 55, Address: 0x2f22f4, Func Offset: 0x14
	// Line 50, Address: 0x2f22f8, Func Offset: 0x18
	// Line 55, Address: 0x2f2308, Func Offset: 0x28
	// Line 54, Address: 0x2f230c, Func Offset: 0x2c
	// Line 55, Address: 0x2f2310, Func Offset: 0x30
	// Line 57, Address: 0x2f231c, Func Offset: 0x3c
	// Line 67, Address: 0x2f232c, Func Offset: 0x4c
	// Line 69, Address: 0x2f233c, Func Offset: 0x5c
	// Line 70, Address: 0x2f2340, Func Offset: 0x60
	// Func End, Address: 0x2f2358, Func Offset: 0x78
}

