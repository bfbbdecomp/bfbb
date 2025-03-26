/*
    Compile unit: C:\SB\Game\zNPCGoalSubBoss.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
struct /* @anon1 */ {
    // total size: 0x34
} __vt__18zNPCGoalPrawnDeath; // size: 0x34, address: 0x50D530
struct /* @anon0 */ {
    // total size: 0x34
} __vt__14zNPCGoalCommon; // size: 0x34, address: 0x50A340
struct /* @anon6 */ {
    // total size: 0x2C
} __vt__5xGoal; // size: 0x2C, address: 0x50BE00
struct /* @anon12 */ {
    // total size: 0x34
} __vt__19zNPCGoalPrawnDamage; // size: 0x34, address: 0x50D570
struct /* @anon7 */ {
    // total size: 0x34
} __vt__17zNPCGoalPrawnBowl; // size: 0x34, address: 0x50D5B0
struct /* @anon2 */ {
    // total size: 0x34
} __vt__17zNPCGoalPrawnBeam; // size: 0x34, address: 0x50D5F0
struct /* @anon5 */ {
    // total size: 0x34
} __vt__17zNPCGoalPrawnIdle; // size: 0x34, address: 0x50D630
struct /* @anon14 */ {
    // total size: 0x34
} __vt__15zNPCGoalKJDeath; // size: 0x34, address: 0x50CD20
struct /* @anon10 */ {
    // total size: 0x34
} __vt__16zNPCGoalKJDamage; // size: 0x34, address: 0x50CD60
struct /* @anon3 */ {
    // total size: 0x34
} __vt__21zNPCGoalKJShockGround; // size: 0x34, address: 0x50CDA0
struct /* @anon11 */ {
    // total size: 0x34
} __vt__15zNPCGoalKJTaunt; // size: 0x34, address: 0x50CDE0
struct /* @anon4 */ {
    // total size: 0x34
} __vt__19zNPCGoalKJSpawnKids; // size: 0x34, address: 0x50CE20
struct /* @anon13 */ {
    // total size: 0x34
} __vt__15zNPCGoalKJBored; // size: 0x34, address: 0x50CE60
struct /* @anon8 */ {
    // total size: 0x34
} __vt__14zNPCGoalKJIdle; // size: 0x34, address: 0x50CEA0
struct /* @anon9 */ {
    // total size: 0x34
} __vt__12zNPCGoalHere; // size: 0x34, address: 0x50C490
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
class xListItem {
    // total size: 0xC
public:
    signed int flg_travFilter; // offset 0x0, size 0x4
    class xGoal * next; // offset 0x4, size 0x4
    class xGoal * prev; // offset 0x8, size 0x4
};
class xFactoryInst : public RyzMemData {
    // total size: 0xC
public:
    signed int itemType; // offset 0x0, size 0x4
    class xFactoryInst * nextprod; // offset 0x4, size 0x4
    class xFactoryInst * prevprod; // offset 0x8, size 0x4
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
struct /* @anon0 */ {
    // total size: 0x34
};
struct /* @anon1 */ {
    // total size: 0x34
};
class xPSYNote {
    // total size: 0x4
};
struct /* @anon2 */ {
    // total size: 0x34
};
struct /* @anon3 */ {
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
struct /* @anon4 */ {
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
struct /* @anon5 */ {
    // total size: 0x34
};
struct /* @anon6 */ {
    // total size: 0x2C
};
struct /* @anon7 */ {
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
struct /* @anon8 */ {
    // total size: 0x34
};
struct /* @anon9 */ {
    // total size: 0x34
};
struct /* @anon10 */ {
    // total size: 0x34
};
struct /* @anon11 */ {
    // total size: 0x34
};
class RyzMemData {
    // total size: 0x1
};
struct /* @anon12 */ {
    // total size: 0x34
};
enum PSY_BRAIN_STATUS {
    PSY_STAT_BLANK = 0,
    PSY_STAT_GROW = 1,
    PSY_STAT_EXTEND = 2,
    PSY_STAT_THINK = 3,
    PSY_STAT_NOMORE = 4,
    PSY_STAT_FORCE = 2147483647,
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
struct /* @anon13 */ {
    // total size: 0x34
};
struct /* @anon14 */ {
    // total size: 0x34
};

/*
    Compile unit: C:\SB\Game\zNPCGoalSubBoss.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00324650 -> 0x00324CC8
*/
// Range: 0x324650 -> 0x324CC8
class xFactoryInst * GOALCreate_SubBoss(signed int who /* r16 */, class RyzMemGrow * grow /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x324650 -> 0x324CC8
        class xGoal * goal; // r2
    }
}

