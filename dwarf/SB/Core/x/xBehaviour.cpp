typedef struct xLinkAsset;
typedef struct xPsyche;
typedef struct xBase;
typedef struct xGoal;
typedef struct _anon0;
typedef struct xFactoryInst;
typedef enum en_trantype;
typedef enum en_pendtype;
typedef struct xListItem;
typedef struct xPSYNote;
typedef struct RyzMemData;
typedef enum PSY_BRAIN_STATUS;
typedef enum en_GOALSTATE;

typedef int32(*type_0)(xGoal*, void*, float32, void*);
typedef int32(*type_2)(xGoal*, void*, en_trantype*, float32, void*);
typedef int32(*type_3)(xGoal*, void*, en_trantype*, float32, void*);
typedef int32(*type_4)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_8)(int32*, en_trantype*);

typedef float32 type_1[4];
typedef xGoal* type_5[5];
typedef float32 type_6[1];
typedef type_6 type_7[5];

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_1 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xPsyche : RyzMemData
{
	xBase* clt_owner;
	xPSYNote* cb_notice;
	int32 flg_psyche;
	xGoal* goallist;
	type_5 goalstak;
	type_7 tmr_stack;
	int32 staktop;
	xGoal* pendgoal;
	en_pendtype pendtype;
	int32 gid_safegoal;
	type_8 fun_remap;
	void* userContext;
	int32 cnt_transLastTimestep;
	PSY_BRAIN_STATUS psystat;
	xBase fakebase;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_4 eventFunc;
};

struct xGoal : xListItem, xFactoryInst
{
	xPsyche* psyche;
	int32 goalID;
	en_GOALSTATE stat;
	int32 flg_able;
	type_3 fun_process;
	type_0 fun_precalc;
	type_2 fun_chkRule;
	void* cbdata;
};

struct _anon0
{
};

struct xFactoryInst : RyzMemData
{
	int32 itemType;
	xFactoryInst* nextprod;
	xFactoryInst* prevprod;
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

enum en_pendtype
{
	PEND_TRAN_NONE,
	PEND_TRAN_SET,
	PEND_TRAN_PUSH,
	PEND_TRAN_POP,
	PEND_TRAN_POPTO,
	PEND_TRAN_POPALL,
	PEND_TRAN_SWAP,
	PEND_TRAN_INPROG,
	PEND_TRAN_NOMORE
};

struct xListItem
{
	int32 flg_travFilter;
	xGoal* next;
	xGoal* prev;
};

struct xPSYNote
{
};

struct RyzMemData
{
};

enum PSY_BRAIN_STATUS
{
	PSY_STAT_BLANK,
	PSY_STAT_GROW,
	PSY_STAT_EXTEND,
	PSY_STAT_THINK,
	PSY_STAT_NOMORE,
	PSY_STAT_FORCE = 0x7fffffff
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

_anon0 __vt__5xGoal;

int32 Process(xGoal* this, en_trantype* trantype, float32 dt, void* ctxt);
int32 EvalRules(xGoal* this, en_trantype* trantype, float32 dt, void* updCtxt);
int32 PreCalc(xGoal* this, float32 dt, void* updCtxt);
void Clear(xGoal* this);
xBase* GetOwner(xGoal* this);

// Process__5xGoalFP11en_trantypefPvP6xScene
// Start address: 0x2f1cd0
int32 Process(xGoal* this, en_trantype* trantype, float32 dt, void* ctxt)
{
}

// EvalRules__5xGoalFP11en_trantypefPv
// Start address: 0x2f1d10
int32 EvalRules(xGoal* this, en_trantype* trantype, float32 dt, void* updCtxt)
{
}

// PreCalc__5xGoalFfPv
// Start address: 0x2f1d50
int32 PreCalc(xGoal* this, float32 dt, void* updCtxt)
{
}

// Clear__5xGoalFv
// Start address: 0x2f1d90
void Clear(xGoal* this)
{
}

// GetOwner__5xGoalCFv
// Start address: 0x2f1da0
xBase* GetOwner(xGoal* this)
{
}

