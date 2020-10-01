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
};

struct XGOFTypeInfo
{
	int32 tid;
	type_2 creator;
	type_3 destroyer;
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

type_1 OrdTest_infotype;
type_4 OrdComp_infotype;
uint32 gActiveHeap;

int32 OrdComp_infotype(void* vkey, void* vitem);
int32 OrdTest_infotype(void* vkey, void* vitem);
void DestroyItem(xFactory* this, xFactoryInst* item);
void DestroyAll(xFactory* this);
xFactoryInst* CreateItem(xFactory* this, int32 typeID, void* userdata, RyzMemGrow* callerzgrow);
void GrowDataDisable(xFactory* this);
void GrowDataEnable(xFactory* this, xBase* user, int32 isResume);
int32 RegItemType(xFactory* this, int32 tid, type_2 create, type_3 destroy);
int32 RegItemType(xFactory* this, XGOFTypeInfo* info);
void* __dt(xFactory* this);
void* __ct(xFactory* this, int32 maxTypes);

// OrdComp_infotype__FPvPv
// Start address: 0x2f1db0
int32 OrdComp_infotype(void* vkey, void* vitem)
{
	int32 rc;
}

// OrdTest_infotype__FPCvPv
// Start address: 0x2f1e00
int32 OrdTest_infotype(void* vkey, void* vitem)
{
	int32 rc;
}

// DestroyItem__8xFactoryFP12xFactoryInst
// Start address: 0x2f1e50
void DestroyItem(xFactory* this, xFactoryInst* item)
{
	int32 idx;
	XGOFTypeInfo pattern;
}

// DestroyAll__8xFactoryFv
// Start address: 0x2f1f40
void DestroyAll(xFactory* this)
{
}

// CreateItem__8xFactoryFiPvP10RyzMemGrow
// Start address: 0x2f1f80
xFactoryInst* CreateItem(xFactory* this, int32 typeID, void* userdata, RyzMemGrow* callerzgrow)
{
	int32 idx;
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
void GrowDataEnable(xFactory* this, xBase* user, int32 isResume)
{
}

// RegItemType__8xFactoryFiPFiP10RyzMemGrowPv_P12xFactoryInstPFP12xFactoryInst_v
// Start address: 0x2f2120
int32 RegItemType(xFactory* this, int32 tid, type_2 create, type_3 destroy)
{
	type_0 typerec;
}

// RegItemType__8xFactoryFP12XGOFTypeInfo
// Start address: 0x2f2170
int32 RegItemType(xFactory* this, XGOFTypeInfo* info)
{
	int32 rc;
	XGOFTypeInfo* tptr;
	XGOFTypeInfo* nextrec;
	int32 idx;
}

// __dt__8xFactoryFv
// Start address: 0x2f2280
void* __dt(xFactory* this)
{
}

// __ct__8xFactoryFi
// Start address: 0x2f22e0
void* __ct(xFactory* this, int32 maxTypes)
{
	uint32 amt;
}

