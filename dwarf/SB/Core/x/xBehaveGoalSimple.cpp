typedef struct xFactory;
typedef struct XGOFTypeInfo;
typedef struct xFactoryInst;
typedef struct xGoal;
typedef struct RyzMemGrow;
typedef struct xListItem;
typedef struct xGoalGeneric;
typedef struct st_XORDEREDARRAY;
typedef struct xPsyche;
typedef struct _anon0;
typedef enum en_trantype;
typedef struct xBase;
typedef struct _anon1;
typedef struct RyzMemData;
typedef enum en_GOALSTATE;
typedef struct _anon2;

typedef xFactoryInst*(*type_0)(int32, RyzMemGrow*, void*);
typedef void(*type_1)(xFactoryInst*);
typedef xFactoryInst*(*type_2)(int32, RyzMemGrow*, void*);
typedef int32(*type_3)(xGoal*, void*, float32, void*);
typedef void(*type_4)(xFactoryInst*);
typedef int32(*type_5)(xGoal*, void*, float32, void*);
typedef int32(*type_6)(xGoal*, void*, float32, void*);
typedef int32(*type_7)(xGoal*, void*, float32, void*);
typedef int32(*type_8)(xGoal*, void*, float32, void*);
typedef int32(*type_9)(xGoal*, void*, xBase*, xBase*, uint32, float32*, xBase*, int32*);
typedef int32(*type_10)(xGoal*, void*, en_trantype*, float32, void*);
typedef int32(*type_11)(xGoal*, void*, en_trantype*, float32, void*);


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
	xFactoryInst*(*creator)(int32, RyzMemGrow*, void*);
	void(*destroyer)(xFactoryInst*);
};

struct xFactoryInst : RyzMemData
{
	int32 itemType;
	xFactoryInst* nextprod;
	xFactoryInst* prevprod;
};

struct xGoal : xListItem, xFactoryInst
{
	xPsyche* psyche;
	int32 goalID;
	en_GOALSTATE stat;
	int32 flg_able;
	int32(*fun_process)(xGoal*, void*, en_trantype*, float32, void*);
	int32(*fun_precalc)(xGoal*, void*, float32, void*);
	int32(*fun_chkRule)(xGoal*, void*, en_trantype*, float32, void*);
	void* cbdata;
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

struct xListItem
{
	int32 flg_travFilter;
	xGoal* next;
	xGoal* prev;
};

struct xGoalGeneric : xGoal
{
	int32(*fun_enter)(xGoal*, void*, float32, void*);
	int32(*fun_exit)(xGoal*, void*, float32, void*);
	int32(*fun_suspend)(xGoal*, void*, float32, void*);
	int32(*fun_resume)(xGoal*, void*, float32, void*);
	int32(*fun_sysevent)(xGoal*, void*, xBase*, xBase*, uint32, float32*, xBase*, int32*);
	void* usrData;

	int8* Name();
	void Clear();
	int32 SysEvent(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget, int32* handled);
	int32 Resume(float32 dt, void* updCtxt);
	int32 Suspend(float32 dt, void* updCtxt);
	int32 Exit(float32 dt, void* updCtxt);
	int32 Enter(float32 dt, void* updCtxt);
};

struct st_XORDEREDARRAY
{
	void** list;
	int32 cnt;
	int32 max;
	int32 warnlvl;
};

struct xPsyche
{
};

struct _anon0
{
};

enum en_trantype
{
	GOAL_TRAN_NONE,
	GOAL_TRAN_SET,
	GOAL_TRAN_PUSH,
	GOAL_TRAN_POP,
	GOAL_TRAN_POPTO,
	GOAL_TRAN_POPALL,
	GOAL_TRAN_POPBASE,
	GOAL_TRAN_POPSAFE,
	GOAL_TRAN_SWAP,
	GOAL_TRAN_NOMORE,
	GOAL_TRAN_FORCE = 0x7fffffff
};

struct xBase
{
};

struct _anon1
{
};

struct RyzMemData
{
};

enum en_GOALSTATE
{
	GOAL_STAT_UNKNOWN,
	GOAL_STAT_PROCESS,
	GOAL_STAT_ENTER,
	GOAL_STAT_EXIT,
	GOAL_STAT_SUSPEND,
	GOAL_STAT_RESUME,
	GOAL_STAT_PAUSED,
	GOAL_STAT_DONE,
	GOAL_STAT_NOMORE,
	GOAL_STAT_FORCE = 0x7fffffff
};

struct _anon2
{
};

_anon2 __vt__12xGoalGeneric;
_anon1 __vt__10xGoalEmpty;
_anon0 __vt__5xGoal;
void(*GOALDestroy_Generic)(xFactoryInst*);
xFactoryInst*(*GOALCreate_Generic)(int32, RyzMemGrow*, void*);

int32 SysEvent(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget, int32* handled);
int32 Resume(float32 dt, void* updCtxt);
int32 Suspend(float32 dt, void* updCtxt);
int32 Exit(float32 dt, void* updCtxt);
int32 Enter(float32 dt, void* updCtxt);
void GOALDestroy_Generic(xFactoryInst* item);
xFactoryInst* GOALCreate_Generic(int32 who, RyzMemGrow* growCtxt);
void xGoalSimple_RegisterTypes(xFactory* fac);

// SysEvent__12xGoalGenericFP5xBaseP5xBaseUiPCfP5xBasePi
// Start address: 0x2f2fd0
int32 xGoalGeneric::SysEvent(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget, int32* handled)
{
	// Line 145, Address: 0x2f2fd0, Func Offset: 0
	// Line 148, Address: 0x2f2fec, Func Offset: 0x1c
	// Line 155, Address: 0x2f301c, Func Offset: 0x4c
	// Func End, Address: 0x2f3028, Func Offset: 0x58
}

// Resume__12xGoalGenericFfPv
// Start address: 0x2f3030
int32 xGoalGeneric::Resume(float32 dt, void* updCtxt)
{
	// Line 137, Address: 0x2f3030, Func Offset: 0
	// Line 139, Address: 0x2f303c, Func Offset: 0xc
	// Line 141, Address: 0x2f3058, Func Offset: 0x28
	// Func End, Address: 0x2f3064, Func Offset: 0x34
}

// Suspend__12xGoalGenericFfPv
// Start address: 0x2f3070
int32 xGoalGeneric::Suspend(float32 dt, void* updCtxt)
{
	// Line 130, Address: 0x2f3070, Func Offset: 0
	// Line 132, Address: 0x2f307c, Func Offset: 0xc
	// Line 134, Address: 0x2f3098, Func Offset: 0x28
	// Func End, Address: 0x2f30a4, Func Offset: 0x34
}

// Exit__12xGoalGenericFfPv
// Start address: 0x2f30b0
int32 xGoalGeneric::Exit(float32 dt, void* updCtxt)
{
	// Line 123, Address: 0x2f30b0, Func Offset: 0
	// Line 125, Address: 0x2f30bc, Func Offset: 0xc
	// Line 127, Address: 0x2f30d8, Func Offset: 0x28
	// Func End, Address: 0x2f30e4, Func Offset: 0x34
}

// Enter__12xGoalGenericFfPv
// Start address: 0x2f30f0
int32 xGoalGeneric::Enter(float32 dt, void* updCtxt)
{
	// Line 116, Address: 0x2f30f0, Func Offset: 0
	// Line 118, Address: 0x2f30fc, Func Offset: 0xc
	// Line 120, Address: 0x2f3118, Func Offset: 0x28
	// Func End, Address: 0x2f3124, Func Offset: 0x34
}

// GOALDestroy_Generic__FP12xFactoryInst
// Start address: 0x2f3130
void GOALDestroy_Generic(xFactoryInst* item)
{
	// Line 82, Address: 0x2f3130, Func Offset: 0
	// Line 83, Address: 0x2f3134, Func Offset: 0x4
	// Line 85, Address: 0x2f3148, Func Offset: 0x18
	// Func End, Address: 0x2f3154, Func Offset: 0x24
}

// GOALCreate_Generic__FiP10RyzMemGrowPv
// Start address: 0x2f3160
xFactoryInst* GOALCreate_Generic(int32 who, RyzMemGrow* growCtxt)
{
	xGoal* goal;
	// Line 62, Address: 0x2f3160, Func Offset: 0
	// Line 65, Address: 0x2f3164, Func Offset: 0x4
	// Line 62, Address: 0x2f3168, Func Offset: 0x8
	// Line 65, Address: 0x2f3178, Func Offset: 0x18
	// Line 67, Address: 0x2f3198, Func Offset: 0x38
	// Line 68, Address: 0x2f31e8, Func Offset: 0x88
	// Line 70, Address: 0x2f31f0, Func Offset: 0x90
	// Line 78, Address: 0x2f3240, Func Offset: 0xe0
	// Line 79, Address: 0x2f3250, Func Offset: 0xf0
	// Func End, Address: 0x2f3260, Func Offset: 0x100
}

// xGoalSimple_RegisterTypes__FP8xFactory
// Start address: 0x2f3260
void xGoalSimple_RegisterTypes(xFactory* fac)
{
	// Line 47, Address: 0x2f3260, Func Offset: 0
	// Line 51, Address: 0x2f3264, Func Offset: 0x4
	// Line 47, Address: 0x2f3268, Func Offset: 0x8
	// Line 51, Address: 0x2f326c, Func Offset: 0xc
	// Line 47, Address: 0x2f3270, Func Offset: 0x10
	// Line 51, Address: 0x2f3274, Func Offset: 0x14
	// Line 53, Address: 0x2f328c, Func Offset: 0x2c
	// Line 57, Address: 0x2f32ac, Func Offset: 0x4c
	// Func End, Address: 0x2f32bc, Func Offset: 0x5c
}

