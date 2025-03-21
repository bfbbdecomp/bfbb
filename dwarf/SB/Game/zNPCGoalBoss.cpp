/*
    Compile unit: C:\SB\Game\zNPCGoalBoss.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
struct /* @anon28 */ {
    // total size: 0x34
} __vt__20zNPCGoalBossPatFudge; // size: 0x34, address: 0x50DBE0
struct /* @anon0 */ {
    // total size: 0x34
} __vt__14zNPCGoalCommon; // size: 0x34, address: 0x50A340
struct /* @anon12 */ {
    // total size: 0x2C
} __vt__5xGoal; // size: 0x2C, address: 0x50BE00
struct /* @anon17 */ {
    // total size: 0x34
} __vt__19zNPCGoalBossPatSpin; // size: 0x34, address: 0x50DC20
struct /* @anon1 */ {
    // total size: 0x34
} __vt__20zNPCGoalBossPatSpawn; // size: 0x34, address: 0x50DC60
struct /* @anon21 */ {
    // total size: 0x34
} __vt__21zNPCGoalBossPatFreeze; // size: 0x34, address: 0x50DCA0
struct /* @anon15 */ {
    // total size: 0x34
} __vt__20zNPCGoalBossPatSmack; // size: 0x34, address: 0x50DCE0
struct /* @anon6 */ {
    // total size: 0x34
} __vt__18zNPCGoalBossPatRun; // size: 0x34, address: 0x50DD20
struct /* @anon24 */ {
    // total size: 0x34
} __vt__19zNPCGoalBossPatSpit; // size: 0x34, address: 0x50DD60
struct /* @anon16 */ {
    // total size: 0x34
} __vt__18zNPCGoalBossPatHit; // size: 0x34, address: 0x50DDA0
struct /* @anon7 */ {
    // total size: 0x34
} __vt__20zNPCGoalBossPatTaunt; // size: 0x34, address: 0x50DDE0
struct /* @anon27 */ {
    // total size: 0x34
} __vt__19zNPCGoalBossPatIdle; // size: 0x34, address: 0x50DE20
struct /* @anon4 */ {
    // total size: 0x34
} __vt__22zNPCGoalBossSB1Deflate; // size: 0x34, address: 0x50D310
struct /* @anon20 */ {
    // total size: 0x34
} __vt__20zNPCGoalBossSB1Smash; // size: 0x34, address: 0x50D350
struct /* @anon11 */ {
    // total size: 0x34
} __vt__20zNPCGoalBossSB1Stomp; // size: 0x34, address: 0x50D390
struct /* @anon3 */ {
    // total size: 0x34
} __vt__20zNPCGoalBossSB1Taunt; // size: 0x34, address: 0x50D3D0
struct /* @anon25 */ {
    // total size: 0x34
} __vt__19zNPCGoalBossSB1Idle; // size: 0x34, address: 0x50D410
struct /* @anon18 */ {
    // total size: 0x34
} __vt__28zNPCGoalBossSandyClothesline; // size: 0x34, address: 0x50C980
struct /* @anon8 */ {
    // total size: 0x34
} __vt__26zNPCGoalBossSandyRunToRope; // size: 0x34, address: 0x50C9C0
struct /* @anon26 */ {
    // total size: 0x34
} __vt__22zNPCGoalBossSandyGetUp; // size: 0x34, address: 0x50CA00
struct /* @anon19 */ {
    // total size: 0x34
} __vt__20zNPCGoalBossSandySit; // size: 0x34, address: 0x50CA40
struct /* @anon9 */ {
    // total size: 0x34
} __vt__21zNPCGoalBossSandyLeap; // size: 0x34, address: 0x50CA80
struct /* @anon23 */ {
    // total size: 0x34
} __vt__26zNPCGoalBossSandyElbowDrop; // size: 0x34, address: 0x50CAC0
struct /* @anon14 */ {
    // total size: 0x34
} __vt__23zNPCGoalBossSandyNoHead; // size: 0x34, address: 0x50CB00
struct /* @anon2 */ {
    // total size: 0x34
} __vt__22zNPCGoalBossSandyMelee; // size: 0x34, address: 0x50CB40
struct /* @anon22 */ {
    // total size: 0x34
} __vt__22zNPCGoalBossSandyChase; // size: 0x34, address: 0x50CB80
struct /* @anon13 */ {
    // total size: 0x34
} __vt__22zNPCGoalBossSandyTaunt; // size: 0x34, address: 0x50CBC0
struct /* @anon5 */ {
    // total size: 0x34
} __vt__21zNPCGoalBossSandyIdle; // size: 0x34, address: 0x50CC00
struct /* @anon10 */ {
    // total size: 0x34
} __vt__13zNPCGoalExist; // size: 0x34, address: 0x50C5B0
struct /* @anon0 */ {
    // total size: 0x34
};
class xBase {
    // total size: 0x10
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class xLinkAsset * link; // offset 0x8, size 0x4
    signed int (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *); // offset 0xC, size 0x4
};
class xGoal : public xListItem, public xFactoryInst {
    // total size: 0x3C
public:
    class xPsyche * psyche; // offset 0x18, size 0x4
    signed int goalID; // offset 0x1C, size 0x4
    enum en_GOALSTATE stat; // offset 0x20, size 0x4
    signed int flg_able; // offset 0x24, size 0x4
    signed int (* fun_process)(class xGoal *, void *, enum en_trantype *, float, void *); // offset 0x28, size 0x4
    signed int (* fun_precalc)(class xGoal *, void *, float, void *); // offset 0x2C, size 0x4
    signed int (* fun_chkRule)(class xGoal *, void *, enum en_trantype *, float, void *); // offset 0x30, size 0x4
    void * cbdata; // offset 0x34, size 0x4
};
struct /* @anon1 */ {
    // total size: 0x34
};
struct /* @anon2 */ {
    // total size: 0x34
};
struct /* @anon3 */ {
    // total size: 0x34
};
class xListItem {
    // total size: 0xC
public:
    signed int flg_travFilter; // offset 0x0, size 0x4
    class xGoal * next; // offset 0x4, size 0x4
    class xGoal * prev; // offset 0x8, size 0x4
};
struct /* @anon4 */ {
    // total size: 0x34
};
enum en_trantype {
    GOAL_TRAN_NONE = 0,
    GOAL_TRAN_SET = 1,
    GOAL_TRAN_PUSH = 2,
    GOAL_TRAN_POP = 3,
    GOAL_TRAN_POPTO = 4,
    GOAL_TRAN_POPALL = 5,
    GOAL_TRAN_POPBASE = 6,
    GOAL_TRAN_POPSAFE = 7,
    GOAL_TRAN_SWAP = 8,
    GOAL_TRAN_NOMORE = 9,
    GOAL_TRAN_FORCE = 2147483647,
};
class RyzMemGrow {
    // total size: 0x1C
public:
    signed int flg_grow; // offset 0x0, size 0x4
    signed int amt; // offset 0x4, size 0x4
    char * ptr; // offset 0x8, size 0x4
    class xBase * user; // offset 0xC, size 0x4
    signed int amt_last; // offset 0x10, size 0x4
    char * ptr_last; // offset 0x14, size 0x4
    class xBase * user_last; // offset 0x18, size 0x4
};
class xFactoryInst : public RyzMemData {
    // total size: 0xC
public:
    signed int itemType; // offset 0x0, size 0x4
    class xFactoryInst * nextprod; // offset 0x4, size 0x4
    class xFactoryInst * prevprod; // offset 0x8, size 0x4
};
struct /* @anon5 */ {
    // total size: 0x34
};
struct /* @anon6 */ {
    // total size: 0x34
};
struct /* @anon7 */ {
    // total size: 0x34
};
class zNPCGoalCommon : public xGoal {
    // total size: 0x4C
public:
    signed int flg_npcgauto; // offset 0x3C, size 0x4
    signed int flg_npcgable; // offset 0x40, size 0x4
    unsigned int anid_played; // offset 0x44, size 0x4
    signed int flg_info : 16; // offset 0x48, size 0x4
    signed int flg_user : 16; // offset 0x48, size 0x4
};
struct /* @anon8 */ {
    // total size: 0x34
};
class xPSYNote {
    // total size: 0x4
};
struct /* @anon9 */ {
    // total size: 0x34
};
struct /* @anon10 */ {
    // total size: 0x34
};
class xLinkAsset {
    // total size: 0x20
public:
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
struct /* @anon11 */ {
    // total size: 0x34
};
class xPsyche : public RyzMemData {
    // total size: 0x68
public:
    class xBase * clt_owner; // offset 0x0, size 0x4
    class xPSYNote * cb_notice; // offset 0x4, size 0x4
    signed int flg_psyche; // offset 0x8, size 0x4
    class xGoal * goallist; // offset 0xC, size 0x4
    class xGoal * goalstak[5]; // offset 0x10, size 0x14
    float tmr_stack[5][1]; // offset 0x24, size 0x14
    signed int staktop; // offset 0x38, size 0x4
    class xGoal * pendgoal; // offset 0x3C, size 0x4
    enum en_pendtype pendtype; // offset 0x40, size 0x4
    signed int gid_safegoal; // offset 0x44, size 0x4
    void (* fun_remap)(signed int *, enum en_trantype *); // offset 0x48, size 0x4
    void * userContext; // offset 0x4C, size 0x4
    signed int cnt_transLastTimestep; // offset 0x50, size 0x4
    enum PSY_BRAIN_STATUS psystat; // offset 0x54, size 0x4
    class xBase fakebase; // offset 0x58, size 0x10
};
struct /* @anon12 */ {
    // total size: 0x2C
};
struct /* @anon13 */ {
    // total size: 0x34
};
struct /* @anon14 */ {
    // total size: 0x34
};
struct /* @anon15 */ {
    // total size: 0x34
};
struct /* @anon16 */ {
    // total size: 0x34
};
struct /* @anon17 */ {
    // total size: 0x34
};
struct /* @anon18 */ {
    // total size: 0x34
};
enum en_pendtype {
    PEND_TRAN_NONE = 0,
    PEND_TRAN_SET = 1,
    PEND_TRAN_PUSH = 2,
    PEND_TRAN_POP = 3,
    PEND_TRAN_POPTO = 4,
    PEND_TRAN_POPALL = 5,
    PEND_TRAN_SWAP = 6,
    PEND_TRAN_INPROG = 7,
    PEND_TRAN_NOMORE = 8,
};
struct /* @anon19 */ {
    // total size: 0x34
};
struct /* @anon20 */ {
    // total size: 0x34
};
struct /* @anon21 */ {
    // total size: 0x34
};
struct /* @anon22 */ {
    // total size: 0x34
};
struct /* @anon23 */ {
    // total size: 0x34
};
struct /* @anon24 */ {
    // total size: 0x34
};
struct /* @anon25 */ {
    // total size: 0x34
};
class RyzMemData {
    // total size: 0x1
};
enum PSY_BRAIN_STATUS {
    PSY_STAT_BLANK = 0,
    PSY_STAT_GROW = 1,
    PSY_STAT_EXTEND = 2,
    PSY_STAT_THINK = 3,
    PSY_STAT_NOMORE = 4,
    PSY_STAT_FORCE = 2147483647,
};
struct /* @anon26 */ {
    // total size: 0x34
};
enum en_GOALSTATE {
    GOAL_STAT_UNKNOWN = 0,
    GOAL_STAT_PROCESS = 1,
    GOAL_STAT_ENTER = 2,
    GOAL_STAT_EXIT = 3,
    GOAL_STAT_SUSPEND = 4,
    GOAL_STAT_RESUME = 5,
    GOAL_STAT_PAUSED = 6,
    GOAL_STAT_DONE = 7,
    GOAL_STAT_NOMORE = 8,
    GOAL_STAT_FORCE = 2147483647,
};
struct /* @anon27 */ {
    // total size: 0x34
};
struct /* @anon28 */ {
    // total size: 0x34
};

/*
    Compile unit: C:\SB\Game\zNPCGoalBoss.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00325180 -> 0x00325F78
*/
// Range: 0x325180 -> 0x325F78
class xFactoryInst * GOALCreate_Boss(signed int who /* r16 */, class RyzMemGrow * grow /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x325180 -> 0x325F78
        class xGoal * goal; // r2
    }
}

