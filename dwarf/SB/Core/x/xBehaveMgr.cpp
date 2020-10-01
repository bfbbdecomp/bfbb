typedef struct xGoal;
typedef struct xLinkAsset;
typedef struct xPsyche;
typedef struct xBase;
typedef enum en_trantype;
typedef struct xListItem;
typedef struct xFactoryInst;
typedef struct xFactory;
typedef struct xBehaveMgr;
typedef struct XGOFTypeInfo;
typedef struct RyzMemGrow;
typedef enum en_pendtype;
typedef struct st_XORDEREDARRAY;
typedef struct xPSYNote;
typedef enum en_xpsytime;
typedef enum PSY_BRAIN_STATUS;
typedef struct RyzMemData;
typedef enum en_GOALSTATE;

typedef xFactoryInst*(*type_1)(s32, RyzMemGrow*, void*);
typedef void(*type_2)(xFactoryInst*);
typedef s32(*type_3)(xBase*, xBase*, u32, f32*, xBase*);
typedef s32(*type_4)(xGoal*, void*, f32, void*);
typedef s32(*type_5)(xGoal*, void*, en_trantype*, f32, void*);
typedef s32(*type_9)(xGoal*, void*, en_trantype*, f32, void*);
typedef void(*type_10)(s32*, en_trantype*);

typedef f32 type_0[4];
typedef xGoal* type_6[5];
typedef f32 type_7[1];
typedef type_7 type_8[5];

struct xGoal : xListItem, xFactoryInst
{
	xPsyche* psyche;
	s32 goalID;
	en_GOALSTATE stat;
	s32 flg_able;
	type_9 fun_process;
	type_4 fun_precalc;
	type_5 fun_chkRule;
	void* cbdata;
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

struct xPsyche : RyzMemData
{
	xBase* clt_owner;
	xPSYNote* cb_notice;
	s32 flg_psyche;
	xGoal* goallist;
	type_6 goalstak;
	type_8 tmr_stack;
	s32 staktop;
	xGoal* pendgoal;
	en_pendtype pendtype;
	s32 gid_safegoal;
	type_10 fun_remap;
	void* userContext;
	s32 cnt_transLastTimestep;
	PSY_BRAIN_STATUS psystat;
	xBase fakebase;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_3 eventFunc;
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

struct xListItem
{
	s32 flg_travFilter;
	xGoal* next;
	xGoal* prev;
};

struct xFactoryInst : RyzMemData
{
	s32 itemType;
	xFactoryInst* nextprod;
	xFactoryInst* prevprod;
};

struct xFactory : RyzMemData
{
	XGOFTypeInfo* infopool;
	st_XORDEREDARRAY infolist;
	xFactoryInst* products;
	RyzMemGrow growContextData;
};

struct xBehaveMgr : RyzMemData
{
	xFactory* goalFactory;
	xPsyche* psypool;
	st_XORDEREDARRAY psylist;
};

struct XGOFTypeInfo
{
	s32 tid;
	type_1 creator;
	type_2 destroyer;
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

struct st_XORDEREDARRAY
{
	void** list;
	s32 cnt;
	s32 max;
	s32 warnlvl;
};

struct xPSYNote
{
};

enum en_xpsytime
{
	XPSY_TYMR_CURGOAL,
	XPSY_TYMR_NOMORE
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

s32 g_modinit;
xBehaveMgr* g_behavmgr;
u32 gActiveHeap;

f32 TimerGet(xPsyche* this, en_xpsytime tymr);
s32 TranGoal(xPsyche* this, f32 dt, void* updCtxt);
s32 ParseTranRequest(xPsyche* this, en_trantype trantyp, s32 trangid);
s32 Timestep(xPsyche* this, f32 dt, void* updCtxt);
xGoal* FindGoal(xPsyche* this, s32 gid);
s32 GoalNone(xPsyche* this, s32 denyExplicit);
s32 GoalSwap(xPsyche* this, s32 gid);
s32 GoalPop(xPsyche* this, s32 gid_popto);
s32 GoalPopRecover(xPsyche* this, s32 overpend);
s32 GoalPopToBase(xPsyche* this, s32 overpend);
s32 GoalPush(xPsyche* this, s32 gid);
s32 GoalSet(xPsyche* this, s32 gid);
xGoal* GetPrevRecovery(xPsyche* this, s32 gid);
s32 GIDOfPending(xPsyche* this);
s32 GIDOfActive(xPsyche* this);
xGoal* GIDInStack(xPsyche* this, s32 gid);
xGoal* GetCurGoal(xPsyche* this);
s32 IndexInStack(xPsyche* this, s32 gid);
void FreshWipe(xPsyche* this);
xGoal* AddGoal(xPsyche* this, s32 gid, void* createData);
void BrainEnd(xPsyche* this);
void BrainExtend(xPsyche* this);
void BrainBegin(xPsyche* this);
void UnSubscribe(xBehaveMgr* this, xPsyche* psy);
xPsyche* Subscribe(xBehaveMgr* this, xBase* owner);
void xBehaveMgr_SceneReset();
void xBehaveMgr_SceneFinish();
void xBehaveMgr_ScenePrepare();
xBehaveMgr* xBehaveMgr_GetSelf();
void xBehaveMgr_Shutdown();
void xBehaveMgr_Startup();

// TimerGet__7xPsycheF11en_xpsytime
// Start address: 0x2f02e0
f32 TimerGet(xPsyche* this, en_xpsytime tymr)
{
}

// TranGoal__7xPsycheFfPv
// Start address: 0x2f0320
s32 TranGoal(xPsyche* this, f32 dt, void* updCtxt)
{
	s32 halfway;
	s32 just_switched;
	xGoal* topgoal;
	s32 moretodo;
	s32 moretodo;
}

// ParseTranRequest__7xPsycheF11en_trantypei
// Start address: 0x2f07a0
s32 ParseTranRequest(xPsyche* this, en_trantype trantyp, s32 trangid)
{
	s32 rc;
}

// Timestep__7xPsycheFfPv
// Start address: 0x2f08d0
s32 Timestep(xPsyche* this, f32 dt, void* updCtxt)
{
	xGoal* curgoal;
	s32 moretodo;
	s32 trangid;
	en_trantype trantyp;
	s32 old_psyflags;
}

// FindGoal__7xPsycheFi
// Start address: 0x2f0ae0
xGoal* FindGoal(xPsyche* this, s32 gid)
{
	xGoal* goal;
	xGoal* safe;
}

// GoalNone__7xPsycheFii
// Start address: 0x2f0b90
s32 GoalNone(xPsyche* this, s32 denyExplicit)
{
}

// GoalSwap__7xPsycheFii
// Start address: 0x2f0cf0
s32 GoalSwap(xPsyche* this, s32 gid)
{
	s32 result;
	xGoal* goal;
	en_trantype trantype;
}

// GoalPop__7xPsycheFii
// Start address: 0x2f0e20
s32 GoalPop(xPsyche* this, s32 gid_popto)
{
	s32 result;
	xGoal* destgoal;
	xGoal* tmpgoal;
	s32 i;
	en_trantype trantype;
}

// GoalPopRecover__7xPsycheFi
// Start address: 0x2f1020
s32 GoalPopRecover(xPsyche* this, s32 overpend)
{
	s32 result;
	s32 i;
	xGoal* tmpgoal;
	xGoal* destgoal;
}

// GoalPopToBase__7xPsycheFi
// Start address: 0x2f1160
s32 GoalPopToBase(xPsyche* this, s32 overpend)
{
}

// GoalPush__7xPsycheFii
// Start address: 0x2f1220
s32 GoalPush(xPsyche* this, s32 gid)
{
	s32 result;
	xGoal* goal;
	en_trantype trantype;
}

// GoalSet__7xPsycheFii
// Start address: 0x2f13a0
s32 GoalSet(xPsyche* this, s32 gid)
{
	s32 result;
	xGoal* goal;
	en_trantype trantype;
}

// GetPrevRecovery__7xPsycheCFi
// Start address: 0x2f14e0
xGoal* GetPrevRecovery(xPsyche* this, s32 gid)
{
	s32 i;
	s32 idx_start;
	xGoal* tmpgoal;
	xGoal* recgoal;
}

// GIDOfPending__7xPsycheCFv
// Start address: 0x2f15d0
s32 GIDOfPending(xPsyche* this)
{
}

// GIDOfActive__7xPsycheCFv
// Start address: 0x2f15f0
s32 GIDOfActive(xPsyche* this)
{
}

// GIDInStack__7xPsycheCFi
// Start address: 0x2f1620
xGoal* GIDInStack(xPsyche* this, s32 gid)
{
	xGoal* da_goal;
	xGoal* tmpgoal;
	s32 i;
}

// GetCurGoal__7xPsycheCFv
// Start address: 0x2f1670
xGoal* GetCurGoal(xPsyche* this)
{
}

// IndexInStack__7xPsycheCFi
// Start address: 0x2f16a0
s32 IndexInStack(xPsyche* this, s32 gid)
{
	s32 da_idx;
	s32 i;
}

// FreshWipe__7xPsycheFv
// Start address: 0x2f16f0
void FreshWipe(xPsyche* this)
{
	s32 i;
}

// AddGoal__7xPsycheFiPv
// Start address: 0x2f1760
xGoal* AddGoal(xPsyche* this, s32 gid, void* createData)
{
	xGoal* goal;
}

// BrainEnd__7xPsycheFv
// Start address: 0x2f1800
void BrainEnd(xPsyche* this)
{
}

// BrainExtend__7xPsycheFv
// Start address: 0x2f1840
void BrainExtend(xPsyche* this)
{
}

// BrainBegin__7xPsycheFv
// Start address: 0x2f1860
void BrainBegin(xPsyche* this)
{
}

// UnSubscribe__10xBehaveMgrFP7xPsyche
// Start address: 0x2f1880
void UnSubscribe(xBehaveMgr* this, xPsyche* psy)
{
}

// Subscribe__10xBehaveMgrFP5xBasei
// Start address: 0x2f1910
xPsyche* Subscribe(xBehaveMgr* this, xBase* owner)
{
	xPsyche* psy;
}

// xBehaveMgr_SceneReset__Fv
// Start address: 0x2f19a0
void xBehaveMgr_SceneReset()
{
}

// xBehaveMgr_SceneFinish__Fv
// Start address: 0x2f1aa0
void xBehaveMgr_SceneFinish()
{
}

// xBehaveMgr_ScenePrepare__Fv
// Start address: 0x2f1ab0
void xBehaveMgr_ScenePrepare()
{
}

// xBehaveMgr_GetSelf__Fv
// Start address: 0x2f1ac0
xBehaveMgr* xBehaveMgr_GetSelf()
{
}

// xBehaveMgr_Shutdown__Fv
// Start address: 0x2f1ad0
void xBehaveMgr_Shutdown()
{
}

// xBehaveMgr_Startup__Fv
// Start address: 0x2f1b20
void xBehaveMgr_Startup()
{
}

