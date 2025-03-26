/*
    Compile unit: C:\SB\Core\x\xBehaviour.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
struct /* @anon0 */ {
    // total size: 0x2C
} __vt__5xGoal; // size: 0x2C, address: 0x50BE00
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
struct /* @anon0 */ {
    // total size: 0x2C
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
class xListItem {
    // total size: 0xC
public:
    signed int flg_travFilter; // offset 0x0, size 0x4
    class xGoal * next; // offset 0x4, size 0x4
    class xGoal * prev; // offset 0x8, size 0x4
};
class xPSYNote {
    // total size: 0x4
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

/*
    Compile unit: C:\SB\Core\x\xBehaviour.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1CD0 -> 0x002F1D08
*/
// Range: 0x2F1CD0 -> 0x2F1D08
signed int Process(class xGoal * this /* r2 */, enum en_trantype * trantype /* r5 */, float dt /* r29+0x10 */, void * ctxt /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F1CD0 -> 0x2F1D08
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaviour.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1D10 -> 0x002F1D48
*/
// Range: 0x2F1D10 -> 0x2F1D48
signed int EvalRules(class xGoal * this /* r2 */, enum en_trantype * trantype /* r5 */, float dt /* r29+0x10 */, void * updCtxt /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F1D10 -> 0x2F1D48
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaviour.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1D50 -> 0x002F1D84
*/
// Range: 0x2F1D50 -> 0x2F1D84
signed int PreCalc(class xGoal * this /* r2 */, float dt /* r29+0x10 */, void * updCtxt /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F1D50 -> 0x2F1D84
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaviour.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1D90 -> 0x002F1D98
*/
// Range: 0x2F1D90 -> 0x2F1D98
void Clear(class xGoal * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F1D90 -> 0x2F1D98
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaviour.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1DA0 -> 0x002F1DAC
*/
// Range: 0x2F1DA0 -> 0x2F1DAC
class xBase * GetOwner(class xGoal * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F1DA0 -> 0x2F1DAC
    }
}

