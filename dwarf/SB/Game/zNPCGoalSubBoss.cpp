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
typedef float32 type_10[1][5];

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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
	struct
	{
		int32 flg_info : 16;
		int32 flg_user : 16;
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
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xPsyche : RyzMemData
{
	xBase* clt_owner;
	xPSYNote* cb_notice;
	int32 flg_psyche;
	xGoal* goallist;
	xGoal* goalstak[5];
	float32 tmr_stack[1][5];
	int32 staktop;
	xGoal* pendgoal;
	en_pendtype pendtype;
	int32 gid_safegoal;
	void(*fun_remap)(int32*, en_trantype*);
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

int8 buffer[16];
int8 buffer[16];
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
	// Line 55, Address: 0x324650, Func Offset: 0
	// Line 59, Address: 0x324654, Func Offset: 0x4
	// Line 55, Address: 0x324658, Func Offset: 0x8
	// Line 59, Address: 0x32465c, Func Offset: 0xc
	// Line 55, Address: 0x324660, Func Offset: 0x10
	// Line 59, Address: 0x32466c, Func Offset: 0x1c
	// Line 61, Address: 0x324698, Func Offset: 0x48
	// Line 62, Address: 0x324708, Func Offset: 0xb8
	// Line 64, Address: 0x324710, Func Offset: 0xc0
	// Line 65, Address: 0x324780, Func Offset: 0x130
	// Line 67, Address: 0x324788, Func Offset: 0x138
	// Line 68, Address: 0x3247f8, Func Offset: 0x1a8
	// Line 70, Address: 0x324800, Func Offset: 0x1b0
	// Line 71, Address: 0x324870, Func Offset: 0x220
	// Line 73, Address: 0x324878, Func Offset: 0x228
	// Line 74, Address: 0x3248e8, Func Offset: 0x298
	// Line 76, Address: 0x3248f0, Func Offset: 0x2a0
	// Line 77, Address: 0x324960, Func Offset: 0x310
	// Line 79, Address: 0x324968, Func Offset: 0x318
	// Line 80, Address: 0x3249d8, Func Offset: 0x388
	// Line 82, Address: 0x3249e0, Func Offset: 0x390
	// Line 83, Address: 0x324a50, Func Offset: 0x400
	// Line 85, Address: 0x324a58, Func Offset: 0x408
	// Line 86, Address: 0x324ac8, Func Offset: 0x478
	// Line 88, Address: 0x324ad0, Func Offset: 0x480
	// Line 89, Address: 0x324b40, Func Offset: 0x4f0
	// Line 91, Address: 0x324b48, Func Offset: 0x4f8
	// Line 92, Address: 0x324bb8, Func Offset: 0x568
	// Line 94, Address: 0x324bc0, Func Offset: 0x570
	// Line 95, Address: 0x324c30, Func Offset: 0x5e0
	// Line 97, Address: 0x324c38, Func Offset: 0x5e8
	// Line 104, Address: 0x324ca8, Func Offset: 0x658
	// Line 105, Address: 0x324cb8, Func Offset: 0x668
	// Func End, Address: 0x324cc8, Func Offset: 0x678
}

