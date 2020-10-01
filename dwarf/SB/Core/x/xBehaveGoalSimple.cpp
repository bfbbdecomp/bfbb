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
	type_0 creator;
	type_1 destroyer;
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
	type_11 fun_process;
	type_5 fun_precalc;
	type_10 fun_chkRule;
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
	type_3 fun_enter;
	type_6 fun_exit;
	type_7 fun_suspend;
	type_8 fun_resume;
	type_9 fun_sysevent;
	void* usrData;
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
type_4 GOALDestroy_Generic;
type_2 GOALCreate_Generic;

int32 SysEvent(xGoalGeneric* this, xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget, int32* handled);
int32 Resume(xGoalGeneric* this, float32 dt, void* updCtxt);
int32 Suspend(xGoalGeneric* this, float32 dt, void* updCtxt);
int32 Exit(xGoalGeneric* this, float32 dt, void* updCtxt);
int32 Enter(xGoalGeneric* this, float32 dt, void* updCtxt);
void GOALDestroy_Generic(xFactoryInst* item);
xFactoryInst* GOALCreate_Generic(int32 who, RyzMemGrow* growCtxt);
void xGoalSimple_RegisterTypes(xFactory* fac);

// SysEvent__12xGoalGenericFP5xBaseP5xBaseUiPCfP5xBasePi
// Start address: 0x2f2fd0
int32 SysEvent(xGoalGeneric* this, xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget, int32* handled)
{
}

// Resume__12xGoalGenericFfPv
// Start address: 0x2f3030
int32 Resume(xGoalGeneric* this, float32 dt, void* updCtxt)
{
}

// Suspend__12xGoalGenericFfPv
// Start address: 0x2f3070
int32 Suspend(xGoalGeneric* this, float32 dt, void* updCtxt)
{
}

// Exit__12xGoalGenericFfPv
// Start address: 0x2f30b0
int32 Exit(xGoalGeneric* this, float32 dt, void* updCtxt)
{
}

// Enter__12xGoalGenericFfPv
// Start address: 0x2f30f0
int32 Enter(xGoalGeneric* this, float32 dt, void* updCtxt)
{
}

// GOALDestroy_Generic__FP12xFactoryInst
// Start address: 0x2f3130
void GOALDestroy_Generic(xFactoryInst* item)
{
}

// GOALCreate_Generic__FiP10RyzMemGrowPv
// Start address: 0x2f3160
xFactoryInst* GOALCreate_Generic(int32 who, RyzMemGrow* growCtxt)
{
	xGoal* goal;
}

// xGoalSimple_RegisterTypes__FP8xFactory
// Start address: 0x2f3260
void xGoalSimple_RegisterTypes(xFactory* fac)
{
}

