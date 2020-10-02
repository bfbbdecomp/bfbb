typedef struct xBase;
typedef struct xGoal;
typedef struct xListItem;
typedef struct xFactoryInst;
typedef enum en_trantype;
typedef struct _anon0;
typedef struct _anon1;
typedef struct xPSYNote;
typedef struct _anon2;
typedef struct _anon3;
typedef struct zNPCGoalCommon;
typedef struct _anon4;
typedef struct xLinkAsset;
typedef struct xPsyche;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef enum en_pendtype;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef struct RyzMemData;
typedef struct _anon12;
typedef enum PSY_BRAIN_STATUS;
typedef struct RyzMemGrow;
typedef enum en_GOALSTATE;
typedef struct _anon13;
typedef struct _anon14;

typedef void(*type_0)(int32*, en_trantype*);
typedef int32(*type_3)(xGoal*, void*, float32, void*);
typedef int32(*type_5)(xGoal*, void*, en_trantype*, float32, void*);
typedef int32(*type_6)(xGoal*, void*, en_trantype*, float32, void*);
typedef int32(*type_7)(xBase*, xBase*, uint32, float32*, xBase*);

typedef int8 type_1[16];
typedef int8 type_2[16];
typedef float32 type_4[4];
typedef xGoal* type_8[5];
typedef float32 type_9[1];
typedef type_9 type_10[5];

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_7 eventFunc;
};

struct xGoal : xListItem, xFactoryInst
{
	xPsyche* psyche;
	int32 goalID;
	en_GOALSTATE stat;
	int32 flg_able;
	type_6 fun_process;
	type_3 fun_precalc;
	type_5 fun_chkRule;
	void* cbdata;
};

struct xListItem
{
	int32 flg_travFilter;
	xGoal* next;
	xGoal* prev;
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

struct _anon0
{
};

struct _anon1
{
};

struct xPSYNote
{
};

struct _anon2
{
};

struct _anon3
{
};

struct zNPCGoalCommon : xGoal
{
	int32 flg_npcgauto;
	int32 flg_npcgable;
	uint32 anid_played;
	union
	{
		int32 flg_info;
		int32 flg_user;
	};
};

struct _anon4
{
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_4 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xPsyche : RyzMemData
{
	xBase* clt_owner;
	xPSYNote* cb_notice;
	int32 flg_psyche;
	xGoal* goallist;
	type_8 goalstak;
	type_10 tmr_stack;
	int32 staktop;
	xGoal* pendgoal;
	en_pendtype pendtype;
	int32 gid_safegoal;
	type_0 fun_remap;
	void* userContext;
	int32 cnt_transLastTimestep;
	PSY_BRAIN_STATUS psystat;
	xBase fakebase;
};

struct _anon5
{
};

struct _anon6
{
};

struct _anon7
{
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

struct _anon8
{
};

struct _anon9
{
};

struct _anon10
{
};

struct _anon11
{
};

struct RyzMemData
{
};

struct _anon12
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

struct _anon13
{
};

struct _anon14
{
};

type_1 buffer;
type_2 buffer;
_anon1 __vt__18zNPCGoalPrawnDeath;
_anon0 __vt__14zNPCGoalCommon;
_anon6 __vt__5xGoal;
_anon12 __vt__19zNPCGoalPrawnDamage;
_anon7 __vt__17zNPCGoalPrawnBowl;
_anon2 __vt__17zNPCGoalPrawnBeam;
_anon5 __vt__17zNPCGoalPrawnIdle;
_anon14 __vt__15zNPCGoalKJDeath;
_anon10 __vt__16zNPCGoalKJDamage;
_anon3 __vt__21zNPCGoalKJShockGround;
_anon11 __vt__15zNPCGoalKJTaunt;
_anon4 __vt__19zNPCGoalKJSpawnKids;
_anon13 __vt__15zNPCGoalKJBored;
_anon8 __vt__14zNPCGoalKJIdle;
_anon9 __vt__12zNPCGoalHere;

xFactoryInst* GOALCreate_SubBoss(int32 who, RyzMemGrow* grow);

// GOALCreate_SubBoss__FiP10RyzMemGrowPv
// Start address: 0x324650
xFactoryInst* GOALCreate_SubBoss(int32 who, RyzMemGrow* grow)
{
	xGoal* goal;
}

