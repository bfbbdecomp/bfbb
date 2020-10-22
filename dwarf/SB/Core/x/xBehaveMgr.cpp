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

typedef xFactoryInst*(*type_1)(int32, RyzMemGrow*, void*);
typedef void(*type_2)(xFactoryInst*);
typedef int32(*type_3)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_4)(xGoal*, void*, float32, void*);
typedef int32(*type_5)(xGoal*, void*, en_trantype*, float32, void*);
typedef int32(*type_9)(xGoal*, void*, en_trantype*, float32, void*);
typedef void(*type_10)(int32*, en_trantype*);

typedef float32 type_0[4];
typedef xGoal* type_6[5];
typedef float32 type_7[1];
typedef float32 type_8[1][5];

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

	float32 TimerGet(en_xpsytime tymr);
	int32 TranGoal(float32 dt, void* updCtxt);
	int32 ParseTranRequest(en_trantype trantyp, int32 trangid);
	int32 Timestep(float32 dt, void* updCtxt);
	xGoal* FindGoal(int32 gid);
	int32 GoalNone(int32 denyExplicit);
	int32 GoalSwap(int32 gid);
	int32 GoalPop(int32 gid_popto);
	int32 GoalPopRecover(int32 overpend);
	int32 GoalPopToBase(int32 overpend);
	int32 GoalPush(int32 gid);
	int32 GoalSet(int32 gid);
	xGoal* GetPrevRecovery(int32 gid);
	int32 GIDOfPending();
	int32 GIDOfActive();
	xGoal* GIDInStack(int32 gid);
	xGoal* GetCurGoal();
	int32 IndexInStack(int32 gid);
	void FreshWipe();
	xGoal* AddGoal(int32 gid, void* createData);
	void BrainEnd();
	void BrainExtend();
	void BrainBegin();
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
	int32 flg_travFilter;
	xGoal* next;
	xGoal* prev;

	void Insert(xGoal* list);
	xGoal* Head();
};

struct xFactoryInst : RyzMemData
{
	int32 itemType;
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

	void UnSubscribe(xPsyche* psy);
	xPsyche* Subscribe(xBase* owner);
};

struct XGOFTypeInfo
{
	int32 tid;
	xFactoryInst*(*creator)(int32, RyzMemGrow*, void*);
	void(*destroyer)(xFactoryInst*);
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
	int32 cnt;
	int32 max;
	int32 warnlvl;
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

int32 g_modinit;
xBehaveMgr* g_behavmgr;
uint32 gActiveHeap;

float32 TimerGet(en_xpsytime tymr);
int32 TranGoal(float32 dt, void* updCtxt);
int32 ParseTranRequest(en_trantype trantyp, int32 trangid);
int32 Timestep(float32 dt, void* updCtxt);
xGoal* FindGoal(int32 gid);
int32 GoalNone(int32 denyExplicit);
int32 GoalSwap(int32 gid);
int32 GoalPop(int32 gid_popto);
int32 GoalPopRecover(int32 overpend);
int32 GoalPopToBase(int32 overpend);
int32 GoalPush(int32 gid);
int32 GoalSet(int32 gid);
xGoal* GetPrevRecovery(int32 gid);
int32 GIDOfPending();
int32 GIDOfActive();
xGoal* GIDInStack(int32 gid);
xGoal* GetCurGoal();
int32 IndexInStack(int32 gid);
void FreshWipe();
xGoal* AddGoal(int32 gid, void* createData);
void BrainEnd();
void BrainExtend();
void BrainBegin();
void UnSubscribe(xPsyche* psy);
xPsyche* Subscribe(xBase* owner);
void xBehaveMgr_SceneReset();
void xBehaveMgr_SceneFinish();
void xBehaveMgr_ScenePrepare();
xBehaveMgr* xBehaveMgr_GetSelf();
void xBehaveMgr_Shutdown();
void xBehaveMgr_Startup();

// TimerGet__7xPsycheF11en_xpsytime
// Start address: 0x2f02e0
float32 xPsyche::TimerGet(en_xpsytime tymr)
{
	// Line 1767, Address: 0x2f02e0, Func Offset: 0
	// Line 1768, Address: 0x2f02e4, Func Offset: 0x4
	// Line 1771, Address: 0x2f030c, Func Offset: 0x2c
	// Func End, Address: 0x2f0314, Func Offset: 0x34
}

// TranGoal__7xPsycheFfPv
// Start address: 0x2f0320
int32 xPsyche::TranGoal(float32 dt, void* updCtxt)
{
	int32 halfway;
	int32 just_switched;
	xGoal* topgoal;
	int32 moretodo;
	int32 moretodo;
	// Line 1424, Address: 0x2f0320, Func Offset: 0
	// Line 1425, Address: 0x2f0324, Func Offset: 0x4
	// Line 1424, Address: 0x2f0328, Func Offset: 0x8
	// Line 1426, Address: 0x2f0344, Func Offset: 0x24
	// Line 1424, Address: 0x2f0348, Func Offset: 0x28
	// Line 1444, Address: 0x2f0350, Func Offset: 0x30
	// Line 1447, Address: 0x2f0368, Func Offset: 0x48
	// Line 1450, Address: 0x2f036c, Func Offset: 0x4c
	// Line 1449, Address: 0x2f0370, Func Offset: 0x50
	// Line 1454, Address: 0x2f0374, Func Offset: 0x54
	// Line 1449, Address: 0x2f0378, Func Offset: 0x58
	// Line 1450, Address: 0x2f0388, Func Offset: 0x68
	// Line 1453, Address: 0x2f0390, Func Offset: 0x70
	// Line 1454, Address: 0x2f0394, Func Offset: 0x74
	// Line 1458, Address: 0x2f039c, Func Offset: 0x7c
	// Line 1472, Address: 0x2f03b4, Func Offset: 0x94
	// Line 1476, Address: 0x2f03c4, Func Offset: 0xa4
	// Line 1485, Address: 0x2f03d0, Func Offset: 0xb0
	// Line 1486, Address: 0x2f03f4, Func Offset: 0xd4
	// Line 1487, Address: 0x2f03f8, Func Offset: 0xd8
	// Line 1488, Address: 0x2f0410, Func Offset: 0xf0
	// Line 1489, Address: 0x2f0418, Func Offset: 0xf8
	// Line 1491, Address: 0x2f0420, Func Offset: 0x100
	// Line 1492, Address: 0x2f0438, Func Offset: 0x118
	// Line 1499, Address: 0x2f0444, Func Offset: 0x124
	// Line 1508, Address: 0x2f0448, Func Offset: 0x128
	// Line 1510, Address: 0x2f0450, Func Offset: 0x130
	// Line 1513, Address: 0x2f0458, Func Offset: 0x138
	// Line 1516, Address: 0x2f045c, Func Offset: 0x13c
	// Line 1532, Address: 0x2f0460, Func Offset: 0x140
	// Line 1535, Address: 0x2f0468, Func Offset: 0x148
	// Line 1541, Address: 0x2f0494, Func Offset: 0x174
	// Line 1542, Address: 0x2f049c, Func Offset: 0x17c
	// Line 1545, Address: 0x2f04a8, Func Offset: 0x188
	// Line 1547, Address: 0x2f04b8, Func Offset: 0x198
	// Line 1550, Address: 0x2f04c0, Func Offset: 0x1a0
	// Line 1552, Address: 0x2f04d0, Func Offset: 0x1b0
	// Line 1560, Address: 0x2f04d8, Func Offset: 0x1b8
	// Line 1562, Address: 0x2f04e4, Func Offset: 0x1c4
	// Line 1567, Address: 0x2f04e8, Func Offset: 0x1c8
	// Line 1570, Address: 0x2f04f0, Func Offset: 0x1d0
	// Line 1575, Address: 0x2f04f4, Func Offset: 0x1d4
	// Line 1567, Address: 0x2f04f8, Func Offset: 0x1d8
	// Line 1570, Address: 0x2f0504, Func Offset: 0x1e4
	// Line 1574, Address: 0x2f0518, Func Offset: 0x1f8
	// Line 1576, Address: 0x2f051c, Func Offset: 0x1fc
	// Line 1578, Address: 0x2f0524, Func Offset: 0x204
	// Line 1581, Address: 0x2f0528, Func Offset: 0x208
	// Line 1588, Address: 0x2f052c, Func Offset: 0x20c
	// Line 1592, Address: 0x2f0530, Func Offset: 0x210
	// Line 1581, Address: 0x2f0534, Func Offset: 0x214
	// Line 1582, Address: 0x2f0540, Func Offset: 0x220
	// Line 1588, Address: 0x2f054c, Func Offset: 0x22c
	// Line 1593, Address: 0x2f0560, Func Offset: 0x240
	// Line 1597, Address: 0x2f0568, Func Offset: 0x248
	// Line 1598, Address: 0x2f0578, Func Offset: 0x258
	// Line 1601, Address: 0x2f0584, Func Offset: 0x264
	// Line 1605, Address: 0x2f0588, Func Offset: 0x268
	// Line 1601, Address: 0x2f058c, Func Offset: 0x26c
	// Line 1605, Address: 0x2f0598, Func Offset: 0x278
	// Line 1611, Address: 0x2f05a0, Func Offset: 0x280
	// Line 1607, Address: 0x2f05a4, Func Offset: 0x284
	// Line 1610, Address: 0x2f05a8, Func Offset: 0x288
	// Line 1612, Address: 0x2f05ac, Func Offset: 0x28c
	// Line 1615, Address: 0x2f05b8, Func Offset: 0x298
	// Line 1619, Address: 0x2f05bc, Func Offset: 0x29c
	// Line 1621, Address: 0x2f05c4, Func Offset: 0x2a4
	// Line 1623, Address: 0x2f05c8, Func Offset: 0x2a8
	// Line 1624, Address: 0x2f05d8, Func Offset: 0x2b8
	// Line 1626, Address: 0x2f05e8, Func Offset: 0x2c8
	// Line 1632, Address: 0x2f05f0, Func Offset: 0x2d0
	// Line 1636, Address: 0x2f0600, Func Offset: 0x2e0
	// Line 1639, Address: 0x2f0608, Func Offset: 0x2e8
	// Line 1640, Address: 0x2f060c, Func Offset: 0x2ec
	// Line 1647, Address: 0x2f0614, Func Offset: 0x2f4
	// Line 1660, Address: 0x2f0618, Func Offset: 0x2f8
	// Line 1662, Address: 0x2f0628, Func Offset: 0x308
	// Line 1675, Address: 0x2f0630, Func Offset: 0x310
	// Line 1691, Address: 0x2f0634, Func Offset: 0x314
	// Line 1675, Address: 0x2f0638, Func Offset: 0x318
	// Line 1695, Address: 0x2f063c, Func Offset: 0x31c
	// Line 1698, Address: 0x2f0644, Func Offset: 0x324
	// Line 1706, Address: 0x2f064c, Func Offset: 0x32c
	// Line 1708, Address: 0x2f0670, Func Offset: 0x350
	// Line 1709, Address: 0x2f068c, Func Offset: 0x36c
	// Line 1710, Address: 0x2f0694, Func Offset: 0x374
	// Line 1711, Address: 0x2f06a0, Func Offset: 0x380
	// Line 1712, Address: 0x2f06a8, Func Offset: 0x388
	// Line 1715, Address: 0x2f06c0, Func Offset: 0x3a0
	// Line 1717, Address: 0x2f06c8, Func Offset: 0x3a8
	// Line 1718, Address: 0x2f06e0, Func Offset: 0x3c0
	// Line 1719, Address: 0x2f06fc, Func Offset: 0x3dc
	// Line 1720, Address: 0x2f0704, Func Offset: 0x3e4
	// Line 1721, Address: 0x2f070c, Func Offset: 0x3ec
	// Line 1722, Address: 0x2f0714, Func Offset: 0x3f4
	// Line 1736, Address: 0x2f0728, Func Offset: 0x408
	// Line 1737, Address: 0x2f0734, Func Offset: 0x414
	// Line 1739, Address: 0x2f0738, Func Offset: 0x418
	// Line 1747, Address: 0x2f0744, Func Offset: 0x424
	// Line 1748, Address: 0x2f074c, Func Offset: 0x42c
	// Line 1759, Address: 0x2f0750, Func Offset: 0x430
	// Line 1760, Address: 0x2f0758, Func Offset: 0x438
	// Func End, Address: 0x2f077c, Func Offset: 0x45c
}

// ParseTranRequest__7xPsycheF11en_trantypei
// Start address: 0x2f07a0
int32 xPsyche::ParseTranRequest(en_trantype trantyp, int32 trangid)
{
	int32 rc;
	// Line 1337, Address: 0x2f07a0, Func Offset: 0
	// Line 1338, Address: 0x2f07a4, Func Offset: 0x4
	// Line 1341, Address: 0x2f07a8, Func Offset: 0x8
	// Line 1344, Address: 0x2f07b8, Func Offset: 0x18
	// Line 1345, Address: 0x2f07c0, Func Offset: 0x20
	// Line 1346, Address: 0x2f07e0, Func Offset: 0x40
	// Line 1347, Address: 0x2f0800, Func Offset: 0x60
	// Line 1348, Address: 0x2f0820, Func Offset: 0x80
	// Line 1349, Address: 0x2f0840, Func Offset: 0xa0
	// Line 1350, Address: 0x2f0848, Func Offset: 0xa8
	// Line 1351, Address: 0x2f0868, Func Offset: 0xc8
	// Line 1352, Address: 0x2f0888, Func Offset: 0xe8
	// Line 1353, Address: 0x2f08a8, Func Offset: 0x108
	// Line 1374, Address: 0x2f08c0, Func Offset: 0x120
	// Func End, Address: 0x2f08cc, Func Offset: 0x12c
}

// Timestep__7xPsycheFfPv
// Start address: 0x2f08d0
int32 xPsyche::Timestep(float32 dt, void* updCtxt)
{
	xGoal* curgoal;
	int32 moretodo;
	int32 trangid;
	en_trantype trantyp;
	int32 old_psyflags;
	// Line 1189, Address: 0x2f08d0, Func Offset: 0
	// Line 1206, Address: 0x2f08d4, Func Offset: 0x4
	// Line 1189, Address: 0x2f08d8, Func Offset: 0x8
	// Line 1197, Address: 0x2f08f8, Func Offset: 0x28
	// Line 1205, Address: 0x2f08fc, Func Offset: 0x2c
	// Line 1206, Address: 0x2f0900, Func Offset: 0x30
	// Line 1209, Address: 0x2f0908, Func Offset: 0x38
	// Line 1219, Address: 0x2f0928, Func Offset: 0x58
	// Line 1220, Address: 0x2f092c, Func Offset: 0x5c
	// Line 1219, Address: 0x2f0930, Func Offset: 0x60
	// Line 1223, Address: 0x2f0934, Func Offset: 0x64
	// Line 1252, Address: 0x2f0950, Func Offset: 0x80
	// Line 1259, Address: 0x2f0954, Func Offset: 0x84
	// Line 1260, Address: 0x2f0960, Func Offset: 0x90
	// Line 1266, Address: 0x2f0970, Func Offset: 0xa0
	// Line 1270, Address: 0x2f0988, Func Offset: 0xb8
	// Line 1271, Address: 0x2f0990, Func Offset: 0xc0
	// Line 1278, Address: 0x2f09a0, Func Offset: 0xd0
	// Line 1280, Address: 0x2f09a8, Func Offset: 0xd8
	// Line 1285, Address: 0x2f09ac, Func Offset: 0xdc
	// Line 1280, Address: 0x2f09b0, Func Offset: 0xe0
	// Line 1285, Address: 0x2f09b4, Func Offset: 0xe4
	// Line 1286, Address: 0x2f09c4, Func Offset: 0xf4
	// Line 1288, Address: 0x2f09dc, Func Offset: 0x10c
	// Line 1292, Address: 0x2f09e8, Func Offset: 0x118
	// Line 1293, Address: 0x2f09fc, Func Offset: 0x12c
	// Line 1294, Address: 0x2f0a18, Func Offset: 0x148
	// Line 1298, Address: 0x2f0a2c, Func Offset: 0x15c
	// Line 1301, Address: 0x2f0a30, Func Offset: 0x160
	// Line 1305, Address: 0x2f0a40, Func Offset: 0x170
	// Line 1306, Address: 0x2f0a4c, Func Offset: 0x17c
	// Line 1310, Address: 0x2f0a50, Func Offset: 0x180
	// Line 1317, Address: 0x2f0a54, Func Offset: 0x184
	// Line 1318, Address: 0x2f0a74, Func Offset: 0x1a4
	// Line 1321, Address: 0x2f0a88, Func Offset: 0x1b8
	// Line 1324, Address: 0x2f0a98, Func Offset: 0x1c8
	// Line 1330, Address: 0x2f0aa8, Func Offset: 0x1d8
	// Line 1332, Address: 0x2f0ab0, Func Offset: 0x1e0
	// Line 1330, Address: 0x2f0ab4, Func Offset: 0x1e4
	// Line 1333, Address: 0x2f0abc, Func Offset: 0x1ec
	// Func End, Address: 0x2f0adc, Func Offset: 0x20c
}

// FindGoal__7xPsycheFi
// Start address: 0x2f0ae0
xGoal* xPsyche::FindGoal(int32 gid)
{
	xGoal* goal;
	xGoal* safe;
	// Line 1140, Address: 0x2f0ae0, Func Offset: 0
	// Line 1146, Address: 0x2f0af8, Func Offset: 0x18
	// Line 1147, Address: 0x2f0afc, Func Offset: 0x1c
	// Line 1148, Address: 0x2f0b0c, Func Offset: 0x2c
	// Line 1149, Address: 0x2f0b18, Func Offset: 0x38
	// Line 1150, Address: 0x2f0b20, Func Offset: 0x40
	// Line 1151, Address: 0x2f0b24, Func Offset: 0x44
	// Line 1153, Address: 0x2f0b30, Func Offset: 0x50
	// Line 1154, Address: 0x2f0b38, Func Offset: 0x58
	// Line 1157, Address: 0x2f0b54, Func Offset: 0x74
	// Line 1165, Address: 0x2f0b58, Func Offset: 0x78
	// Line 1169, Address: 0x2f0b60, Func Offset: 0x80
	// Line 1170, Address: 0x2f0b64, Func Offset: 0x84
	// Line 1172, Address: 0x2f0b68, Func Offset: 0x88
	// Line 1173, Address: 0x2f0b6c, Func Offset: 0x8c
	// Func End, Address: 0x2f0b84, Func Offset: 0xa4
}

// GoalNone__7xPsycheFii
// Start address: 0x2f0b90
int32 xPsyche::GoalNone(int32 denyExplicit)
{
	// Line 1063, Address: 0x2f0b90, Func Offset: 0
	// Line 1066, Address: 0x2f0ba0, Func Offset: 0x10
	// Line 1071, Address: 0x2f0bb0, Func Offset: 0x20
	// Line 1086, Address: 0x2f0bb8, Func Offset: 0x28
	// Line 1089, Address: 0x2f0bbc, Func Offset: 0x2c
	// Line 1091, Address: 0x2f0bd0, Func Offset: 0x40
	// Line 1093, Address: 0x2f0bdc, Func Offset: 0x4c
	// Line 1110, Address: 0x2f0bf8, Func Offset: 0x68
	// Line 1112, Address: 0x2f0c14, Func Offset: 0x84
	// Line 1113, Address: 0x2f0c1c, Func Offset: 0x8c
	// Line 1114, Address: 0x2f0c20, Func Offset: 0x90
	// Line 1113, Address: 0x2f0c24, Func Offset: 0x94
	// Line 1115, Address: 0x2f0c2c, Func Offset: 0x9c
	// Line 1113, Address: 0x2f0c30, Func Offset: 0xa0
	// Line 1115, Address: 0x2f0c34, Func Offset: 0xa4
	// Line 1116, Address: 0x2f0c6c, Func Offset: 0xdc
	// Line 1117, Address: 0x2f0c80, Func Offset: 0xf0
	// Line 1118, Address: 0x2f0c88, Func Offset: 0xf8
	// Line 1119, Address: 0x2f0ccc, Func Offset: 0x13c
	// Line 1121, Address: 0x2f0cd0, Func Offset: 0x140
	// Line 1122, Address: 0x2f0cd8, Func Offset: 0x148
	// Func End, Address: 0x2f0cec, Func Offset: 0x15c
}

// GoalSwap__7xPsycheFii
// Start address: 0x2f0cf0
int32 xPsyche::GoalSwap(int32 gid)
{
	int32 result;
	xGoal* goal;
	en_trantype trantype;
	// Line 987, Address: 0x2f0cf0, Func Offset: 0
	// Line 992, Address: 0x2f0d08, Func Offset: 0x18
	// Line 997, Address: 0x2f0d18, Func Offset: 0x28
	// Line 1002, Address: 0x2f0d20, Func Offset: 0x30
	// Line 1004, Address: 0x2f0d2c, Func Offset: 0x3c
	// Line 1003, Address: 0x2f0d30, Func Offset: 0x40
	// Line 1004, Address: 0x2f0d34, Func Offset: 0x44
	// Line 1006, Address: 0x2f0d40, Func Offset: 0x50
	// Line 1030, Address: 0x2f0d58, Func Offset: 0x68
	// Line 1031, Address: 0x2f0d64, Func Offset: 0x74
	// Line 1035, Address: 0x2f0d6c, Func Offset: 0x7c
	// Line 1036, Address: 0x2f0d70, Func Offset: 0x80
	// Line 1038, Address: 0x2f0d7c, Func Offset: 0x8c
	// Line 1054, Address: 0x2f0d98, Func Offset: 0xa8
	// Line 1056, Address: 0x2f0dbc, Func Offset: 0xcc
	// Line 1057, Address: 0x2f0df4, Func Offset: 0x104
	// Line 1059, Address: 0x2f0df8, Func Offset: 0x108
	// Line 1060, Address: 0x2f0e00, Func Offset: 0x110
	// Func End, Address: 0x2f0e14, Func Offset: 0x124
}

// GoalPop__7xPsycheFii
// Start address: 0x2f0e20
int32 xPsyche::GoalPop(int32 gid_popto)
{
	int32 result;
	xGoal* destgoal;
	xGoal* tmpgoal;
	int32 i;
	en_trantype trantype;
	// Line 845, Address: 0x2f0e20, Func Offset: 0
	// Line 846, Address: 0x2f0e38, Func Offset: 0x18
	// Line 845, Address: 0x2f0e3c, Func Offset: 0x1c
	// Line 851, Address: 0x2f0e40, Func Offset: 0x20
	// Line 856, Address: 0x2f0e50, Func Offset: 0x30
	// Line 878, Address: 0x2f0e58, Func Offset: 0x38
	// Line 880, Address: 0x2f0e70, Func Offset: 0x50
	// Line 879, Address: 0x2f0e74, Func Offset: 0x54
	// Line 880, Address: 0x2f0e78, Func Offset: 0x58
	// Line 882, Address: 0x2f0e84, Func Offset: 0x64
	// Line 883, Address: 0x2f0e9c, Func Offset: 0x7c
	// Line 882, Address: 0x2f0ea0, Func Offset: 0x80
	// Line 887, Address: 0x2f0ea4, Func Offset: 0x84
	// Line 889, Address: 0x2f0eac, Func Offset: 0x8c
	// Line 890, Address: 0x2f0eb4, Func Offset: 0x94
	// Line 896, Address: 0x2f0eb8, Func Offset: 0x98
	// Line 907, Address: 0x2f0ec0, Func Offset: 0xa0
	// Line 908, Address: 0x2f0ecc, Func Offset: 0xac
	// Line 910, Address: 0x2f0ed4, Func Offset: 0xb4
	// Line 911, Address: 0x2f0ed8, Func Offset: 0xb8
	// Line 912, Address: 0x2f0ee4, Func Offset: 0xc4
	// Line 914, Address: 0x2f0f00, Func Offset: 0xe0
	// Line 922, Address: 0x2f0f08, Func Offset: 0xe8
	// Line 925, Address: 0x2f0f20, Func Offset: 0x100
	// Line 929, Address: 0x2f0f28, Func Offset: 0x108
	// Line 930, Address: 0x2f0f38, Func Offset: 0x118
	// Line 931, Address: 0x2f0f3c, Func Offset: 0x11c
	// Line 934, Address: 0x2f0f48, Func Offset: 0x128
	// Line 935, Address: 0x2f0f50, Func Offset: 0x130
	// Line 945, Address: 0x2f0f60, Func Offset: 0x140
	// Line 948, Address: 0x2f0f68, Func Offset: 0x148
	// Line 949, Address: 0x2f0f6c, Func Offset: 0x14c
	// Line 950, Address: 0x2f0f78, Func Offset: 0x158
	// Line 951, Address: 0x2f0f98, Func Offset: 0x178
	// Line 953, Address: 0x2f0f9c, Func Offset: 0x17c
	// Line 977, Address: 0x2f0fa0, Func Offset: 0x180
	// Line 979, Address: 0x2f0fc4, Func Offset: 0x1a4
	// Line 980, Address: 0x2f0ffc, Func Offset: 0x1dc
	// Line 982, Address: 0x2f1000, Func Offset: 0x1e0
	// Line 983, Address: 0x2f1008, Func Offset: 0x1e8
	// Func End, Address: 0x2f1020, Func Offset: 0x200
}

// GoalPopRecover__7xPsycheFi
// Start address: 0x2f1020
int32 xPsyche::GoalPopRecover(int32 overpend)
{
	int32 result;
	int32 i;
	xGoal* tmpgoal;
	xGoal* destgoal;
	// Line 785, Address: 0x2f1020, Func Offset: 0
	// Line 791, Address: 0x2f1038, Func Offset: 0x18
	// Line 786, Address: 0x2f103c, Func Offset: 0x1c
	// Line 791, Address: 0x2f1040, Func Offset: 0x20
	// Line 796, Address: 0x2f104c, Func Offset: 0x2c
	// Line 797, Address: 0x2f1054, Func Offset: 0x34
	// Line 796, Address: 0x2f1058, Func Offset: 0x38
	// Line 802, Address: 0x2f105c, Func Offset: 0x3c
	// Line 805, Address: 0x2f1070, Func Offset: 0x50
	// Line 806, Address: 0x2f1088, Func Offset: 0x68
	// Line 807, Address: 0x2f108c, Func Offset: 0x6c
	// Line 809, Address: 0x2f10a4, Func Offset: 0x84
	// Line 810, Address: 0x2f10ac, Func Offset: 0x8c
	// Line 812, Address: 0x2f10c0, Func Offset: 0xa0
	// Line 813, Address: 0x2f10c8, Func Offset: 0xa8
	// Line 814, Address: 0x2f10d4, Func Offset: 0xb4
	// Line 821, Address: 0x2f10d8, Func Offset: 0xb8
	// Line 823, Address: 0x2f10fc, Func Offset: 0xdc
	// Line 824, Address: 0x2f1134, Func Offset: 0x114
	// Line 826, Address: 0x2f1138, Func Offset: 0x118
	// Line 827, Address: 0x2f1140, Func Offset: 0x120
	// Func End, Address: 0x2f1154, Func Offset: 0x134
}

// GoalPopToBase__7xPsycheFi
// Start address: 0x2f1160
int32 xPsyche::GoalPopToBase(int32 overpend)
{
	// Line 751, Address: 0x2f1160, Func Offset: 0
	// Line 755, Address: 0x2f1170, Func Offset: 0x10
	// Line 760, Address: 0x2f1180, Func Offset: 0x20
	// Line 767, Address: 0x2f1188, Func Offset: 0x28
	// Line 771, Address: 0x2f11a0, Func Offset: 0x40
	// Line 775, Address: 0x2f11ac, Func Offset: 0x4c
	// Line 777, Address: 0x2f11c8, Func Offset: 0x68
	// Line 780, Address: 0x2f1200, Func Offset: 0xa0
	// Line 781, Address: 0x2f1208, Func Offset: 0xa8
	// Func End, Address: 0x2f1218, Func Offset: 0xb8
}

// GoalPush__7xPsycheFii
// Start address: 0x2f1220
int32 xPsyche::GoalPush(int32 gid)
{
	int32 result;
	xGoal* goal;
	en_trantype trantype;
	// Line 657, Address: 0x2f1220, Func Offset: 0
	// Line 661, Address: 0x2f1238, Func Offset: 0x18
	// Line 666, Address: 0x2f1248, Func Offset: 0x28
	// Line 671, Address: 0x2f1250, Func Offset: 0x30
	// Line 673, Address: 0x2f125c, Func Offset: 0x3c
	// Line 672, Address: 0x2f1260, Func Offset: 0x40
	// Line 673, Address: 0x2f1264, Func Offset: 0x44
	// Line 675, Address: 0x2f1270, Func Offset: 0x50
	// Line 695, Address: 0x2f128c, Func Offset: 0x6c
	// Line 698, Address: 0x2f12a0, Func Offset: 0x80
	// Line 708, Address: 0x2f12a8, Func Offset: 0x88
	// Line 712, Address: 0x2f12c8, Func Offset: 0xa8
	// Line 713, Address: 0x2f12d4, Func Offset: 0xb4
	// Line 720, Address: 0x2f12dc, Func Offset: 0xbc
	// Line 722, Address: 0x2f12ec, Func Offset: 0xcc
	// Line 723, Address: 0x2f12f0, Func Offset: 0xd0
	// Line 724, Address: 0x2f12fc, Func Offset: 0xdc
	// Line 741, Address: 0x2f1318, Func Offset: 0xf8
	// Line 743, Address: 0x2f133c, Func Offset: 0x11c
	// Line 744, Address: 0x2f1374, Func Offset: 0x154
	// Line 746, Address: 0x2f1378, Func Offset: 0x158
	// Line 747, Address: 0x2f1380, Func Offset: 0x160
	// Func End, Address: 0x2f1394, Func Offset: 0x174
}

// GoalSet__7xPsycheFii
// Start address: 0x2f13a0
int32 xPsyche::GoalSet(int32 gid)
{
	int32 result;
	xGoal* goal;
	en_trantype trantype;
	// Line 582, Address: 0x2f13a0, Func Offset: 0
	// Line 586, Address: 0x2f13b8, Func Offset: 0x18
	// Line 591, Address: 0x2f13c8, Func Offset: 0x28
	// Line 596, Address: 0x2f13d0, Func Offset: 0x30
	// Line 598, Address: 0x2f13dc, Func Offset: 0x3c
	// Line 597, Address: 0x2f13e0, Func Offset: 0x40
	// Line 598, Address: 0x2f13e4, Func Offset: 0x44
	// Line 600, Address: 0x2f13f0, Func Offset: 0x50
	// Line 606, Address: 0x2f1408, Func Offset: 0x68
	// Line 625, Address: 0x2f1420, Func Offset: 0x80
	// Line 626, Address: 0x2f142c, Func Offset: 0x8c
	// Line 628, Address: 0x2f1434, Func Offset: 0x94
	// Line 627, Address: 0x2f1438, Func Offset: 0x98
	// Line 629, Address: 0x2f143c, Func Offset: 0x9c
	// Line 630, Address: 0x2f1444, Func Offset: 0xa4
	// Line 647, Address: 0x2f1460, Func Offset: 0xc0
	// Line 649, Address: 0x2f1484, Func Offset: 0xe4
	// Line 650, Address: 0x2f14bc, Func Offset: 0x11c
	// Line 652, Address: 0x2f14c0, Func Offset: 0x120
	// Line 653, Address: 0x2f14c8, Func Offset: 0x128
	// Func End, Address: 0x2f14dc, Func Offset: 0x13c
}

// GetPrevRecovery__7xPsycheCFi
// Start address: 0x2f14e0
xGoal* xPsyche::GetPrevRecovery(int32 gid)
{
	int32 i;
	int32 idx_start;
	xGoal* tmpgoal;
	xGoal* recgoal;
	// Line 523, Address: 0x2f14e0, Func Offset: 0
	// Line 528, Address: 0x2f14e4, Func Offset: 0x4
	// Line 529, Address: 0x2f14ec, Func Offset: 0xc
	// Line 530, Address: 0x2f1500, Func Offset: 0x20
	// Line 532, Address: 0x2f1504, Func Offset: 0x24
	// Line 534, Address: 0x2f151c, Func Offset: 0x3c
	// Line 535, Address: 0x2f1524, Func Offset: 0x44
	// Line 536, Address: 0x2f1534, Func Offset: 0x54
	// Line 539, Address: 0x2f1540, Func Offset: 0x60
	// Line 542, Address: 0x2f1550, Func Offset: 0x70
	// Line 544, Address: 0x2f1560, Func Offset: 0x80
	// Line 545, Address: 0x2f1568, Func Offset: 0x88
	// Line 547, Address: 0x2f1578, Func Offset: 0x98
	// Line 548, Address: 0x2f1580, Func Offset: 0xa0
	// Line 549, Address: 0x2f1590, Func Offset: 0xb0
	// Line 551, Address: 0x2f1594, Func Offset: 0xb4
	// Line 553, Address: 0x2f15ac, Func Offset: 0xcc
	// Line 554, Address: 0x2f15b4, Func Offset: 0xd4
	// Line 556, Address: 0x2f15c4, Func Offset: 0xe4
	// Line 559, Address: 0x2f15c8, Func Offset: 0xe8
	// Func End, Address: 0x2f15d0, Func Offset: 0xf0
}

// GIDOfPending__7xPsycheCFv
// Start address: 0x2f15d0
int32 xPsyche::GIDOfPending()
{
	// Line 515, Address: 0x2f15d0, Func Offset: 0
	// Line 516, Address: 0x2f15d4, Func Offset: 0x4
	// Line 518, Address: 0x2f15e8, Func Offset: 0x18
	// Func End, Address: 0x2f15f0, Func Offset: 0x20
}

// GIDOfActive__7xPsycheCFv
// Start address: 0x2f15f0
int32 xPsyche::GIDOfActive()
{
	// Line 509, Address: 0x2f15f0, Func Offset: 0
	// Line 510, Address: 0x2f15f4, Func Offset: 0x4
	// Line 512, Address: 0x2f1614, Func Offset: 0x24
	// Func End, Address: 0x2f161c, Func Offset: 0x2c
}

// GIDInStack__7xPsycheCFi
// Start address: 0x2f1620
xGoal* xPsyche::GIDInStack(int32 gid)
{
	xGoal* da_goal;
	xGoal* tmpgoal;
	int32 i;
	// Line 497, Address: 0x2f1620, Func Offset: 0
	// Line 492, Address: 0x2f1624, Func Offset: 0x4
	// Line 497, Address: 0x2f1628, Func Offset: 0x8
	// Line 498, Address: 0x2f1638, Func Offset: 0x18
	// Line 500, Address: 0x2f163c, Func Offset: 0x1c
	// Line 502, Address: 0x2f1648, Func Offset: 0x28
	// Line 503, Address: 0x2f1650, Func Offset: 0x30
	// Line 506, Address: 0x2f1668, Func Offset: 0x48
	// Func End, Address: 0x2f1670, Func Offset: 0x50
}

// GetCurGoal__7xPsycheCFv
// Start address: 0x2f1670
xGoal* xPsyche::GetCurGoal()
{
	// Line 486, Address: 0x2f1670, Func Offset: 0
	// Line 487, Address: 0x2f1674, Func Offset: 0x4
	// Line 488, Address: 0x2f1690, Func Offset: 0x20
	// Func End, Address: 0x2f1698, Func Offset: 0x28
}

// IndexInStack__7xPsycheCFi
// Start address: 0x2f16a0
int32 xPsyche::IndexInStack(int32 gid)
{
	int32 da_idx;
	int32 i;
	// Line 474, Address: 0x2f16a0, Func Offset: 0
	// Line 471, Address: 0x2f16a4, Func Offset: 0x4
	// Line 474, Address: 0x2f16a8, Func Offset: 0x8
	// Line 477, Address: 0x2f16b8, Func Offset: 0x18
	// Line 479, Address: 0x2f16c8, Func Offset: 0x28
	// Line 480, Address: 0x2f16d0, Func Offset: 0x30
	// Line 483, Address: 0x2f16e8, Func Offset: 0x48
	// Func End, Address: 0x2f16f0, Func Offset: 0x50
}

// FreshWipe__7xPsycheFv
// Start address: 0x2f16f0
void xPsyche::FreshWipe()
{
	int32 i;
	// Line 383, Address: 0x2f16f0, Func Offset: 0
	// Line 384, Address: 0x2f16f4, Func Offset: 0x4
	// Line 383, Address: 0x2f16f8, Func Offset: 0x8
	// Line 390, Address: 0x2f16fc, Func Offset: 0xc
	// Line 383, Address: 0x2f1700, Func Offset: 0x10
	// Line 384, Address: 0x2f1710, Func Offset: 0x20
	// Line 386, Address: 0x2f1714, Func Offset: 0x24
	// Line 387, Address: 0x2f1718, Func Offset: 0x28
	// Line 388, Address: 0x2f171c, Func Offset: 0x2c
	// Line 392, Address: 0x2f1720, Func Offset: 0x30
	// Line 391, Address: 0x2f1724, Func Offset: 0x34
	// Line 392, Address: 0x2f1728, Func Offset: 0x38
	// Line 391, Address: 0x2f172c, Func Offset: 0x3c
	// Line 392, Address: 0x2f1730, Func Offset: 0x40
	// Line 394, Address: 0x2f1738, Func Offset: 0x48
	// Line 395, Address: 0x2f173c, Func Offset: 0x4c
	// Line 396, Address: 0x2f1740, Func Offset: 0x50
	// Line 397, Address: 0x2f1744, Func Offset: 0x54
	// Line 398, Address: 0x2f1748, Func Offset: 0x58
	// Line 399, Address: 0x2f174c, Func Offset: 0x5c
	// Line 402, Address: 0x2f1754, Func Offset: 0x64
	// Func End, Address: 0x2f175c, Func Offset: 0x6c
}

// AddGoal__7xPsycheFiPv
// Start address: 0x2f1760
xGoal* xPsyche::AddGoal(int32 gid, void* createData)
{
	xGoal* goal;
	// Line 326, Address: 0x2f1760, Func Offset: 0
	// Line 351, Address: 0x2f1764, Func Offset: 0x4
	// Line 326, Address: 0x2f1768, Func Offset: 0x8
	// Line 351, Address: 0x2f177c, Func Offset: 0x1c
	// Line 361, Address: 0x2f179c, Func Offset: 0x3c
	// Line 362, Address: 0x2f17a8, Func Offset: 0x48
	// Line 363, Address: 0x2f17c0, Func Offset: 0x60
	// Line 367, Address: 0x2f17c8, Func Offset: 0x68
	// Line 369, Address: 0x2f17d0, Func Offset: 0x70
	// Line 371, Address: 0x2f17dc, Func Offset: 0x7c
	// Line 373, Address: 0x2f17e0, Func Offset: 0x80
	// Line 374, Address: 0x2f17e4, Func Offset: 0x84
	// Func End, Address: 0x2f17fc, Func Offset: 0x9c
}

// BrainEnd__7xPsycheFv
// Start address: 0x2f1800
void xPsyche::BrainEnd()
{
	// Line 294, Address: 0x2f1800, Func Offset: 0
	// Line 301, Address: 0x2f180c, Func Offset: 0xc
	// Line 302, Address: 0x2f181c, Func Offset: 0x1c
	// Line 310, Address: 0x2f1824, Func Offset: 0x24
	// Func End, Address: 0x2f1834, Func Offset: 0x34
}

// BrainExtend__7xPsycheFv
// Start address: 0x2f1840
void xPsyche::BrainExtend()
{
	// Line 275, Address: 0x2f1840, Func Offset: 0
	// Line 280, Address: 0x2f1848, Func Offset: 0x8
	// Line 283, Address: 0x2f184c, Func Offset: 0xc
	// Line 275, Address: 0x2f1854, Func Offset: 0x14
	// Line 283, Address: 0x2f1858, Func Offset: 0x18
	// Func End, Address: 0x2f1860, Func Offset: 0x20
}

// BrainBegin__7xPsycheFv
// Start address: 0x2f1860
void xPsyche::BrainBegin()
{
	// Line 253, Address: 0x2f1860, Func Offset: 0
	// Line 257, Address: 0x2f1868, Func Offset: 0x8
	// Line 263, Address: 0x2f186c, Func Offset: 0xc
	// Line 253, Address: 0x2f1874, Func Offset: 0x14
	// Line 263, Address: 0x2f1878, Func Offset: 0x18
	// Func End, Address: 0x2f1880, Func Offset: 0x20
}

// UnSubscribe__10xBehaveMgrFP7xPsyche
// Start address: 0x2f1880
void xBehaveMgr::UnSubscribe(xPsyche* psy)
{
	// Line 193, Address: 0x2f1880, Func Offset: 0
	// Line 199, Address: 0x2f1898, Func Offset: 0x18
	// Line 200, Address: 0x2f18d8, Func Offset: 0x58
	// Line 203, Address: 0x2f18ec, Func Offset: 0x6c
	// Func End, Address: 0x2f1904, Func Offset: 0x84
}

// Subscribe__10xBehaveMgrFP5xBasei
// Start address: 0x2f1910
xPsyche* xBehaveMgr::Subscribe(xBase* owner)
{
	xPsyche* psy;
	// Line 174, Address: 0x2f1910, Func Offset: 0
	// Line 181, Address: 0x2f1924, Func Offset: 0x14
	// Line 183, Address: 0x2f1930, Func Offset: 0x20
	// Line 181, Address: 0x2f1934, Func Offset: 0x24
	// Line 183, Address: 0x2f1948, Func Offset: 0x38
	// Line 186, Address: 0x2f1950, Func Offset: 0x40
	// Line 187, Address: 0x2f1958, Func Offset: 0x48
	// Line 189, Address: 0x2f1988, Func Offset: 0x78
	// Line 190, Address: 0x2f198c, Func Offset: 0x7c
	// Func End, Address: 0x2f19a0, Func Offset: 0x90
}

// xBehaveMgr_SceneReset__Fv
// Start address: 0x2f19a0
void xBehaveMgr_SceneReset()
{
	// Line 117, Address: 0x2f19a0, Func Offset: 0
	// Line 118, Address: 0x2f19c0, Func Offset: 0x20
	// Line 120, Address: 0x2f1a78, Func Offset: 0xd8
	// Func End, Address: 0x2f1a98, Func Offset: 0xf8
}

// xBehaveMgr_SceneFinish__Fv
// Start address: 0x2f1aa0
void xBehaveMgr_SceneFinish()
{
	// Line 112, Address: 0x2f1aa0, Func Offset: 0
	// Func End, Address: 0x2f1aac, Func Offset: 0xc
}

// xBehaveMgr_ScenePrepare__Fv
// Start address: 0x2f1ab0
void xBehaveMgr_ScenePrepare()
{
	// Line 108, Address: 0x2f1ab0, Func Offset: 0
	// Func End, Address: 0x2f1ab8, Func Offset: 0x8
}

// xBehaveMgr_GetSelf__Fv
// Start address: 0x2f1ac0
xBehaveMgr* xBehaveMgr_GetSelf()
{
	// Line 97, Address: 0x2f1ac0, Func Offset: 0
	// Func End, Address: 0x2f1ac8, Func Offset: 0x8
}

// xBehaveMgr_Shutdown__Fv
// Start address: 0x2f1ad0
void xBehaveMgr_Shutdown()
{
	// Line 84, Address: 0x2f1ad0, Func Offset: 0
	// Line 86, Address: 0x2f1ad8, Func Offset: 0x8
	// Line 88, Address: 0x2f1aec, Func Offset: 0x1c
	// Line 89, Address: 0x2f1b08, Func Offset: 0x38
	// Line 91, Address: 0x2f1b0c, Func Offset: 0x3c
	// Line 92, Address: 0x2f1b10, Func Offset: 0x40
	// Func End, Address: 0x2f1b1c, Func Offset: 0x4c
}

// xBehaveMgr_Startup__Fv
// Start address: 0x2f1b20
void xBehaveMgr_Startup()
{
	// Line 72, Address: 0x2f1b20, Func Offset: 0
	// Line 73, Address: 0x2f1b2c, Func Offset: 0xc
	// Line 75, Address: 0x2f1b3c, Func Offset: 0x1c
	// Line 78, Address: 0x2f1b54, Func Offset: 0x34
	// Line 80, Address: 0x2f1bc4, Func Offset: 0xa4
	// Line 81, Address: 0x2f1bc8, Func Offset: 0xa8
	// Func End, Address: 0x2f1bd8, Func Offset: 0xb8
}

