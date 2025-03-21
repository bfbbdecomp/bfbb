/*
    Compile unit: C:\SB\Core\x\xBehaveGoalSimple.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
struct /* @anon2 */ {
    // total size: 0x30
} __vt__12xGoalGeneric; // size: 0x30, address: 0x50BE90
struct /* @anon1 */ {
    // total size: 0x30
} __vt__10xGoalEmpty; // size: 0x30, address: 0x50BEC0
struct /* @anon0 */ {
    // total size: 0x2C
} __vt__5xGoal; // size: 0x2C, address: 0x50BE00
void GOALDestroy_Generic(class xFactoryInst *); // size: 0x0, address: 0x2F3130
class xFactoryInst * GOALCreate_Generic(signed int, class RyzMemGrow *, void *); // size: 0x0, address: 0x2F3160
class xFactory : public RyzMemData {
    // total size: 0x34
public:
    class XGOFTypeInfo * infopool; // offset 0x0, size 0x4
    class st_XORDEREDARRAY infolist; // offset 0x4, size 0x10
    class xFactoryInst * products; // offset 0x14, size 0x4
    class RyzMemGrow growContextData; // offset 0x18, size 0x1C
};
class XGOFTypeInfo {
    // total size: 0xC
public:
    signed int tid; // offset 0x0, size 0x4
    class xFactoryInst * (* creator)(signed int, class RyzMemGrow *, void *); // offset 0x4, size 0x4
    void (* destroyer)(class xFactoryInst *); // offset 0x8, size 0x4
};
class xFactoryInst : public RyzMemData {
    // total size: 0xC
public:
    signed int itemType; // offset 0x0, size 0x4
    class xFactoryInst * nextprod; // offset 0x4, size 0x4
    class xFactoryInst * prevprod; // offset 0x8, size 0x4
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
class xListItem {
    // total size: 0xC
public:
    signed int flg_travFilter; // offset 0x0, size 0x4
    class xGoal * next; // offset 0x4, size 0x4
    class xGoal * prev; // offset 0x8, size 0x4
};
class xGoalGeneric : public xGoal {
    // total size: 0x54
public:
    signed int (* fun_enter)(class xGoal *, void *, float, void *); // offset 0x3C, size 0x4
    signed int (* fun_exit)(class xGoal *, void *, float, void *); // offset 0x40, size 0x4
    signed int (* fun_suspend)(class xGoal *, void *, float, void *); // offset 0x44, size 0x4
    signed int (* fun_resume)(class xGoal *, void *, float, void *); // offset 0x48, size 0x4
    signed int (* fun_sysevent)(class xGoal *, void *, class xBase *, class xBase *, unsigned int, float *, class xBase *, signed int *); // offset 0x4C, size 0x4
    void * usrData; // offset 0x50, size 0x4
};
class st_XORDEREDARRAY {
    // total size: 0x10
public:
    void * * list; // offset 0x0, size 0x4
    signed int cnt; // offset 0x4, size 0x4
    signed int max; // offset 0x8, size 0x4
    signed int warnlvl; // offset 0xC, size 0x4
};
class xPsyche {
    // total size: 0x0
};
struct /* @anon0 */ {
    // total size: 0x2C
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
class xBase {
    // total size: 0x0
};
struct /* @anon1 */ {
    // total size: 0x30
};
class RyzMemData {
    // total size: 0x1
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
struct /* @anon2 */ {
    // total size: 0x30
};

/*
    Compile unit: C:\SB\Core\x\xBehaveGoalSimple.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F2FD0 -> 0x002F3028
*/
// Range: 0x2F2FD0 -> 0x2F3028
signed int SysEvent(class xGoalGeneric * this /* r2 */, class xBase * from /* r5 */, class xBase * to /* r14 */, unsigned int toEvent /* r13 */, float * toParam /* r12 */, class xBase * toParamWidget /* r3 */, signed int * handled /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F2FD0 -> 0x2F3028
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveGoalSimple.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F3030 -> 0x002F3064
*/
// Range: 0x2F3030 -> 0x2F3064
signed int Resume(class xGoalGeneric * this /* r2 */, float dt /* r29+0x10 */, void * updCtxt /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F3030 -> 0x2F3064
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveGoalSimple.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F3070 -> 0x002F30A4
*/
// Range: 0x2F3070 -> 0x2F30A4
signed int Suspend(class xGoalGeneric * this /* r2 */, float dt /* r29+0x10 */, void * updCtxt /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F3070 -> 0x2F30A4
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveGoalSimple.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F30B0 -> 0x002F30E4
*/
// Range: 0x2F30B0 -> 0x2F30E4
signed int Exit(class xGoalGeneric * this /* r2 */, float dt /* r29+0x10 */, void * updCtxt /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F30B0 -> 0x2F30E4
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveGoalSimple.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F30F0 -> 0x002F3124
*/
// Range: 0x2F30F0 -> 0x2F3124
signed int Enter(class xGoalGeneric * this /* r2 */, float dt /* r29+0x10 */, void * updCtxt /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F30F0 -> 0x2F3124
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveGoalSimple.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F3130 -> 0x002F3154
*/
// Range: 0x2F3130 -> 0x2F3154
static void GOALDestroy_Generic(class xFactoryInst * item /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F3130 -> 0x2F3154
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveGoalSimple.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F3160 -> 0x002F3260
*/
// Range: 0x2F3160 -> 0x2F3260
static class xFactoryInst * GOALCreate_Generic(signed int who /* r16 */, class RyzMemGrow * growCtxt /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F3160 -> 0x2F3260
        class xGoal * goal; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveGoalSimple.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F3260 -> 0x002F32BC
*/
// Range: 0x2F3260 -> 0x2F32BC
void xGoalSimple_RegisterTypes(class xFactory * fac /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F3260 -> 0x2F32BC
    }
}

