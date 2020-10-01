typedef struct xFactory;
typedef struct XGOFTypeInfo;
typedef struct st_XORDEREDARRAY;
typedef struct xFactoryInst;
typedef struct xBase;
typedef struct RyzMemData;
typedef struct RyzMemGrow;

typedef s32(*type_1)(void*, void*);
typedef xFactoryInst*(*type_2)(s32, RyzMemGrow*, void*);
typedef void(*type_3)(xFactoryInst*);
typedef s32(*type_4)(void*, void*);

typedef XGOFTypeInfo type_0[2];

struct xFactory : RyzMemData
{
	XGOFTypeInfo* infopool;
	st_XORDEREDARRAY infolist;
	xFactoryInst* products;
	RyzMemGrow growContextData;
};

struct XGOFTypeInfo
{
	s32 tid;
	type_2 creator;
	type_3 destroyer;
};

struct st_XORDEREDARRAY
{
	void** list;
	s32 cnt;
	s32 max;
	s32 warnlvl;
};

struct xFactoryInst : RyzMemData
{
	s32 itemType;
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
	s32 flg_grow;
	s32 amt;
	s8* ptr;
	xBase* user;
	s32 amt_last;
	s8* ptr_last;
	xBase* user_last;
};

type_1 OrdTest_infotype;
type_4 OrdComp_infotype;
u32 gActiveHeap;

s32 OrdComp_infotype(void* vkey, void* vitem);
s32 OrdTest_infotype(void* vkey, void* vitem);
void DestroyItem(xFactory* this, xFactoryInst* item);
void DestroyAll(xFactory* this);
xFactoryInst* CreateItem(xFactory* this, s32 typeID, void* userdata, RyzMemGrow* callerzgrow);
void GrowDataDisable(xFactory* this);
void GrowDataEnable(xFactory* this, xBase* user, s32 isResume);
s32 RegItemType(xFactory* this, s32 tid, type_2 create, type_3 destroy);
s32 RegItemType(xFactory* this, XGOFTypeInfo* info);
void* __dt(xFactory* this);
void* __ct(xFactory* this, s32 maxTypes);

// OrdComp_infotype__FPvPv
// Start address: 0x2f1db0
s32 OrdComp_infotype(void* vkey, void* vitem)
{
	s32 rc;
}

// OrdTest_infotype__FPCvPv
// Start address: 0x2f1e00
s32 OrdTest_infotype(void* vkey, void* vitem)
{
	s32 rc;
}

// DestroyItem__8xFactoryFP12xFactoryInst
// Start address: 0x2f1e50
void DestroyItem(xFactory* this, xFactoryInst* item)
{
	s32 idx;
	XGOFTypeInfo pattern;
}

// DestroyAll__8xFactoryFv
// Start address: 0x2f1f40
void DestroyAll(xFactory* this)
{
}

// CreateItem__8xFactoryFiPvP10RyzMemGrow
// Start address: 0x2f1f80
xFactoryInst* CreateItem(xFactory* this, s32 typeID, void* userdata, RyzMemGrow* callerzgrow)
{
	s32 idx;
	xFactoryInst* item;
	XGOFTypeInfo pattern;
	XGOFTypeInfo* darec;
	RyzMemGrow* grow;
}

// GrowDataDisable__8xFactoryFv
// Start address: 0x2f20d0
void GrowDataDisable(xFactory* this)
{
}

// GrowDataEnable__8xFactoryFP5xBasei
// Start address: 0x2f20e0
void GrowDataEnable(xFactory* this, xBase* user, s32 isResume)
{
}

// RegItemType__8xFactoryFiPFiP10RyzMemGrowPv_P12xFactoryInstPFP12xFactoryInst_v
// Start address: 0x2f2120
s32 RegItemType(xFactory* this, s32 tid, type_2 create, type_3 destroy)
{
	type_0 typerec;
}

// RegItemType__8xFactoryFP12XGOFTypeInfo
// Start address: 0x2f2170
s32 RegItemType(xFactory* this, XGOFTypeInfo* info)
{
	s32 rc;
	XGOFTypeInfo* tptr;
	XGOFTypeInfo* nextrec;
	s32 idx;
}

// __dt__8xFactoryFv
// Start address: 0x2f2280
void* __dt(xFactory* this)
{
}

// __ct__8xFactoryFi
// Start address: 0x2f22e0
void* __ct(xFactory* this, s32 maxTypes)
{
	u32 amt;
}

