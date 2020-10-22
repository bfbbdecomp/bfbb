typedef struct _anon0;
typedef struct xBase;
typedef struct xGoal;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct xListItem;
typedef struct _anon4;
typedef enum en_trantype;
typedef struct RyzMemGrow;
typedef struct xFactoryInst;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct zNPCGoalCommon;
typedef struct _anon8;
typedef struct xPSYNote;
typedef struct _anon9;
typedef struct _anon10;
typedef struct xLinkAsset;
typedef struct _anon11;
typedef struct xPsyche;
typedef struct _anon12;
typedef struct _anon13;
typedef struct _anon14;
typedef struct _anon15;
typedef struct _anon16;
typedef struct _anon17;
typedef struct _anon18;
typedef enum en_pendtype;
typedef struct _anon19;
typedef struct _anon20;
typedef struct _anon21;
typedef struct _anon22;
typedef struct _anon23;
typedef struct _anon24;
typedef struct _anon25;
typedef struct RyzMemData;
typedef enum PSY_BRAIN_STATUS;
typedef struct _anon26;
typedef enum en_GOALSTATE;
typedef struct _anon27;
typedef struct _anon28;

typedef void(*type_2)(int32*, en_trantype*);
typedef int32(*type_3)(xGoal*, void*, float32, void*);
typedef int32(*type_5)(xGoal*, void*, en_trantype*, float32, void*);
typedef int32(*type_6)(xGoal*, void*, en_trantype*, float32, void*);
typedef int32(*type_7)(xBase*, xBase*, uint32, float32*, xBase*);

typedef int8 type_0[16];
typedef int8 type_1[16];
typedef float32 type_4[4];
typedef xGoal* type_8[5];
typedef float32 type_9[1];
typedef float32 type_10[1][5];

struct _anon0
{
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

struct _anon1
{
};

struct _anon2
{
};

struct _anon3
{
};

struct xListItem
{
	int32 flg_travFilter;
	xGoal* next;
	xGoal* prev;
};

struct _anon4
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

struct xFactoryInst : RyzMemData
{
	int32 itemType;
	xFactoryInst* nextprod;
	xFactoryInst* prevprod;
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

struct _anon8
{
};

struct xPSYNote
{
};

struct _anon9
{
};

struct _anon10
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

struct _anon11
{
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

struct _anon12
{
};

struct _anon13
{
};

struct _anon14
{
};

struct _anon15
{
};

struct _anon16
{
};

struct _anon17
{
};

struct _anon18
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

struct _anon19
{
};

struct _anon20
{
};

struct _anon21
{
};

struct _anon22
{
};

struct _anon23
{
};

struct _anon24
{
};

struct _anon25
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

struct _anon26
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

struct _anon27
{
};

struct _anon28
{
};

int8 buffer[16];
int8 buffer[16];
_anon28 __vt__20zNPCGoalBossPatFudge;
_anon0 __vt__14zNPCGoalCommon;
_anon12 __vt__5xGoal;
_anon17 __vt__19zNPCGoalBossPatSpin;
_anon1 __vt__20zNPCGoalBossPatSpawn;
_anon21 __vt__21zNPCGoalBossPatFreeze;
_anon15 __vt__20zNPCGoalBossPatSmack;
_anon6 __vt__18zNPCGoalBossPatRun;
_anon24 __vt__19zNPCGoalBossPatSpit;
_anon16 __vt__18zNPCGoalBossPatHit;
_anon7 __vt__20zNPCGoalBossPatTaunt;
_anon27 __vt__19zNPCGoalBossPatIdle;
_anon4 __vt__22zNPCGoalBossSB1Deflate;
_anon20 __vt__20zNPCGoalBossSB1Smash;
_anon11 __vt__20zNPCGoalBossSB1Stomp;
_anon3 __vt__20zNPCGoalBossSB1Taunt;
_anon25 __vt__19zNPCGoalBossSB1Idle;
_anon18 __vt__28zNPCGoalBossSandyClothesline;
_anon8 __vt__26zNPCGoalBossSandyRunToRope;
_anon26 __vt__22zNPCGoalBossSandyGetUp;
_anon19 __vt__20zNPCGoalBossSandySit;
_anon9 __vt__21zNPCGoalBossSandyLeap;
_anon23 __vt__26zNPCGoalBossSandyElbowDrop;
_anon14 __vt__23zNPCGoalBossSandyNoHead;
_anon2 __vt__22zNPCGoalBossSandyMelee;
_anon22 __vt__22zNPCGoalBossSandyChase;
_anon13 __vt__22zNPCGoalBossSandyTaunt;
_anon5 __vt__21zNPCGoalBossSandyIdle;
_anon10 __vt__13zNPCGoalExist;

xFactoryInst* GOALCreate_Boss(int32 who, RyzMemGrow* grow);

// GOALCreate_Boss__FiP10RyzMemGrowPv
// Start address: 0x325180
xFactoryInst* GOALCreate_Boss(int32 who, RyzMemGrow* grow)
{
	xGoal* goal;
	// Line 53, Address: 0x325180, Func Offset: 0
	// Line 57, Address: 0x325184, Func Offset: 0x4
	// Line 53, Address: 0x325188, Func Offset: 0x8
	// Line 57, Address: 0x325198, Func Offset: 0x18
	// Line 58, Address: 0x3252b4, Func Offset: 0x134
	// Line 59, Address: 0x3252b8, Func Offset: 0x138
	// Line 60, Address: 0x325328, Func Offset: 0x1a8
	// Line 65, Address: 0x325330, Func Offset: 0x1b0
	// Line 66, Address: 0x3253a0, Func Offset: 0x220
	// Line 68, Address: 0x3253a8, Func Offset: 0x228
	// Line 69, Address: 0x325418, Func Offset: 0x298
	// Line 71, Address: 0x325420, Func Offset: 0x2a0
	// Line 72, Address: 0x325490, Func Offset: 0x310
	// Line 74, Address: 0x325498, Func Offset: 0x318
	// Line 75, Address: 0x325508, Func Offset: 0x388
	// Line 77, Address: 0x325510, Func Offset: 0x390
	// Line 78, Address: 0x325580, Func Offset: 0x400
	// Line 80, Address: 0x325588, Func Offset: 0x408
	// Line 81, Address: 0x3255f8, Func Offset: 0x478
	// Line 83, Address: 0x325600, Func Offset: 0x480
	// Line 84, Address: 0x325670, Func Offset: 0x4f0
	// Line 86, Address: 0x325678, Func Offset: 0x4f8
	// Line 87, Address: 0x3256e8, Func Offset: 0x568
	// Line 89, Address: 0x3256f0, Func Offset: 0x570
	// Line 90, Address: 0x325760, Func Offset: 0x5e0
	// Line 92, Address: 0x325768, Func Offset: 0x5e8
	// Line 93, Address: 0x3257d8, Func Offset: 0x658
	// Line 95, Address: 0x3257e0, Func Offset: 0x660
	// Line 96, Address: 0x325850, Func Offset: 0x6d0
	// Line 100, Address: 0x325858, Func Offset: 0x6d8
	// Line 101, Address: 0x3258c8, Func Offset: 0x748
	// Line 103, Address: 0x3258d0, Func Offset: 0x750
	// Line 104, Address: 0x325940, Func Offset: 0x7c0
	// Line 106, Address: 0x325948, Func Offset: 0x7c8
	// Line 107, Address: 0x3259b8, Func Offset: 0x838
	// Line 109, Address: 0x3259c0, Func Offset: 0x840
	// Line 110, Address: 0x325a30, Func Offset: 0x8b0
	// Line 112, Address: 0x325a38, Func Offset: 0x8b8
	// Line 113, Address: 0x325aa8, Func Offset: 0x928
	// Line 117, Address: 0x325ab0, Func Offset: 0x930
	// Line 118, Address: 0x325b20, Func Offset: 0x9a0
	// Line 120, Address: 0x325b28, Func Offset: 0x9a8
	// Line 121, Address: 0x325b98, Func Offset: 0xa18
	// Line 123, Address: 0x325ba0, Func Offset: 0xa20
	// Line 124, Address: 0x325c10, Func Offset: 0xa90
	// Line 126, Address: 0x325c18, Func Offset: 0xa98
	// Line 127, Address: 0x325c88, Func Offset: 0xb08
	// Line 129, Address: 0x325c90, Func Offset: 0xb10
	// Line 130, Address: 0x325d00, Func Offset: 0xb80
	// Line 132, Address: 0x325d08, Func Offset: 0xb88
	// Line 133, Address: 0x325d78, Func Offset: 0xbf8
	// Line 135, Address: 0x325d80, Func Offset: 0xc00
	// Line 136, Address: 0x325df0, Func Offset: 0xc70
	// Line 138, Address: 0x325df8, Func Offset: 0xc78
	// Line 139, Address: 0x325e68, Func Offset: 0xce8
	// Line 141, Address: 0x325e70, Func Offset: 0xcf0
	// Line 142, Address: 0x325ee0, Func Offset: 0xd60
	// Line 144, Address: 0x325ee8, Func Offset: 0xd68
	// Line 151, Address: 0x325f58, Func Offset: 0xdd8
	// Line 152, Address: 0x325f68, Func Offset: 0xde8
	// Func End, Address: 0x325f78, Func Offset: 0xdf8
}

