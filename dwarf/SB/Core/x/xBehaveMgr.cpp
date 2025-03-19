/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int g_modinit; // size: 0x4, address: 0x50FFAC
static class xBehaveMgr * g_behavmgr; // size: 0x4, address: 0x50FFB0
unsigned int gActiveHeap; // size: 0x4, address: 0x50FA44
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
class xFactory : public RyzMemData {
    // total size: 0x34
public:
    class XGOFTypeInfo * infopool; // offset 0x0, size 0x4
    class st_XORDEREDARRAY infolist; // offset 0x4, size 0x10
    class xFactoryInst * products; // offset 0x14, size 0x4
    class RyzMemGrow growContextData; // offset 0x18, size 0x1C
};
class xBehaveMgr : public RyzMemData {
    // total size: 0x18
public:
    class xFactory * goalFactory; // offset 0x0, size 0x4
    class xPsyche * psypool; // offset 0x4, size 0x4
    class st_XORDEREDARRAY psylist; // offset 0x8, size 0x10
};
class XGOFTypeInfo {
    // total size: 0xC
public:
    signed int tid; // offset 0x0, size 0x4
    class xFactoryInst * (* creator)(signed int, class RyzMemGrow *, void *); // offset 0x4, size 0x4
    void (* destroyer)(class xFactoryInst *); // offset 0x8, size 0x4
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
class st_XORDEREDARRAY {
    // total size: 0x10
public:
    void * * list; // offset 0x0, size 0x4
    signed int cnt; // offset 0x4, size 0x4
    signed int max; // offset 0x8, size 0x4
    signed int warnlvl; // offset 0xC, size 0x4
};
class xPSYNote {
    // total size: 0x4
};
enum en_xpsytime {
    XPSY_TYMR_CURGOAL = 0,
    XPSY_TYMR_NOMORE = 1,
};
enum PSY_BRAIN_STATUS {
    PSY_STAT_BLANK = 0,
    PSY_STAT_GROW = 1,
    PSY_STAT_EXTEND = 2,
    PSY_STAT_THINK = 3,
    PSY_STAT_NOMORE = 4,
    PSY_STAT_FORCE = 2147483647,
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

/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F02E0 -> 0x002F0314
*/
// Range: 0x2F02E0 -> 0x2F0314
float TimerGet(class xPsyche * this /* r2 */, enum en_xpsytime tymr /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F02E0 -> 0x2F0314
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F0320 -> 0x002F077C
*/
// Range: 0x2F0320 -> 0x2F077C
signed int TranGoal(class xPsyche * this /* r20 */, float dt /* r20 */, void * updCtxt /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F0320 -> 0x2F077C
        signed int halfway; // r6
        signed int just_switched; // r18
        class xGoal * topgoal; // r16
        signed int moretodo; // r2
        signed int moretodo; // r17
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F07A0 -> 0x002F08CC
*/
// Range: 0x2F07A0 -> 0x2F08CC
signed int ParseTranRequest(class xPsyche * this /* r2 */, enum en_trantype trantyp /* r2 */, signed int trangid /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F07A0 -> 0x2F08CC
        signed int rc; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F08D0 -> 0x002F0ADC
*/
// Range: 0x2F08D0 -> 0x2F0ADC
signed int Timestep(class xPsyche * this /* r19 */, float dt /* r20 */, void * updCtxt /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F08D0 -> 0x2F0ADC
        class xGoal * curgoal; // r17
        signed int moretodo; // r2
        signed int trangid; // r2
        enum en_trantype trantyp; // r29+0x6C
        signed int old_psyflags; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F0AE0 -> 0x002F0B84
*/
// Range: 0x2F0AE0 -> 0x2F0B84
class xGoal * FindGoal(class xPsyche * this /* r18 */, signed int gid /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F0AE0 -> 0x2F0B84
        class xGoal * goal; // r17
        class xGoal * safe; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F0B90 -> 0x002F0CEC
*/
// Range: 0x2F0B90 -> 0x2F0CEC
signed int GoalNone(class xPsyche * this /* r17 */, signed int denyExplicit /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F0B90 -> 0x2F0CEC
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F0CF0 -> 0x002F0E14
*/
// Range: 0x2F0CF0 -> 0x2F0E14
signed int GoalSwap(class xPsyche * this /* r17 */, signed int gid /* r29+0x38 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F0CF0 -> 0x2F0E14
        signed int result; // r16
        class xGoal * goal; // r2
        enum en_trantype trantype; // r29+0x3C
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F0E20 -> 0x002F1020
*/
// Range: 0x2F0E20 -> 0x2F1020
signed int GoalPop(class xPsyche * this /* r18 */, signed int gid_popto /* r29+0x48 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F0E20 -> 0x2F1020
        signed int result; // r17
        class xGoal * destgoal; // r16
        class xGoal * tmpgoal; // r7
        signed int i; // r6
        enum en_trantype trantype; // r29+0x4C
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1020 -> 0x002F1154
*/
// Range: 0x2F1020 -> 0x2F1154
signed int GoalPopRecover(class xPsyche * this /* r17 */, signed int overpend /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F1020 -> 0x2F1154
        signed int result; // r16
        signed int i; // r7
        class xGoal * tmpgoal; // r5
        class xGoal * destgoal; // r4
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1160 -> 0x002F1218
*/
// Range: 0x2F1160 -> 0x2F1218
signed int GoalPopToBase(class xPsyche * this /* r16 */, signed int overpend /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F1160 -> 0x2F1218
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1220 -> 0x002F1394
*/
// Range: 0x2F1220 -> 0x2F1394
signed int GoalPush(class xPsyche * this /* r17 */, signed int gid /* r29+0x38 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F1220 -> 0x2F1394
        signed int result; // r16
        class xGoal * goal; // r2
        enum en_trantype trantype; // r29+0x3C
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F13A0 -> 0x002F14DC
*/
// Range: 0x2F13A0 -> 0x2F14DC
signed int GoalSet(class xPsyche * this /* r17 */, signed int gid /* r29+0x38 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F13A0 -> 0x2F14DC
        signed int result; // r16
        class xGoal * goal; // r2
        enum en_trantype trantype; // r29+0x3C
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F14E0 -> 0x002F15D0
*/
// Range: 0x2F14E0 -> 0x2F15D0
class xGoal * GetPrevRecovery(class xPsyche * this /* r2 */, signed int gid /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F14E0 -> 0x2F15D0
        signed int i; // r6
        signed int idx_start; // r8
        class xGoal * tmpgoal; // r5
        class xGoal * recgoal; // r2
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F15D0 -> 0x002F15F0
*/
// Range: 0x2F15D0 -> 0x2F15F0
signed int GIDOfPending(class xPsyche * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F15D0 -> 0x2F15F0
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F15F0 -> 0x002F161C
*/
// Range: 0x2F15F0 -> 0x2F161C
signed int GIDOfActive(class xPsyche * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F15F0 -> 0x2F161C
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1620 -> 0x002F1670
*/
// Range: 0x2F1620 -> 0x2F1670
class xGoal * GIDInStack(class xPsyche * this /* r2 */, signed int gid /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F1620 -> 0x2F1670
        class xGoal * da_goal; // r2
        class xGoal * tmpgoal; // r8
        signed int i; // r7
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1670 -> 0x002F1698
*/
// Range: 0x2F1670 -> 0x2F1698
class xGoal * GetCurGoal(class xPsyche * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F1670 -> 0x2F1698
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F16A0 -> 0x002F16F0
*/
// Range: 0x2F16A0 -> 0x2F16F0
signed int IndexInStack(class xPsyche * this /* r2 */, signed int gid /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F16A0 -> 0x2F16F0
        signed int da_idx; // r2
        signed int i; // r7
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F16F0 -> 0x002F175C
*/
// Range: 0x2F16F0 -> 0x2F175C
void FreshWipe(class xPsyche * this /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F16F0 -> 0x2F175C
        signed int i; // r6
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1760 -> 0x002F17FC
*/
// Range: 0x2F1760 -> 0x2F17FC
class xGoal * AddGoal(class xPsyche * this /* r18 */, signed int gid /* r17 */, void * createData /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F1760 -> 0x2F17FC
        class xGoal * goal; // r16
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1800 -> 0x002F1834
*/
// Range: 0x2F1800 -> 0x2F1834
void BrainEnd(class xPsyche * this /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F1800 -> 0x2F1834
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1840 -> 0x002F1860
*/
// Range: 0x2F1840 -> 0x2F1860
void BrainExtend(class xPsyche * this /* r7 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F1840 -> 0x2F1860
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1860 -> 0x002F1880
*/
// Range: 0x2F1860 -> 0x2F1880
void BrainBegin(class xPsyche * this /* r7 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F1860 -> 0x2F1880
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1880 -> 0x002F1904
*/
// Range: 0x2F1880 -> 0x2F1904
void UnSubscribe(class xBehaveMgr * this /* r18 */, class xPsyche * psy /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F1880 -> 0x2F1904
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1910 -> 0x002F19A0
*/
// Range: 0x2F1910 -> 0x2F19A0
class xPsyche * Subscribe(class xBehaveMgr * this /* r2 */, class xBase * owner /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F1910 -> 0x2F19A0
        class xPsyche * psy; // r17
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F19A0 -> 0x002F1A98
*/
// Range: 0x2F19A0 -> 0x2F1A98
void xBehaveMgr_SceneReset() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F19A0 -> 0x2F1A98
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1AA0 -> 0x002F1AAC
*/
// Range: 0x2F1AA0 -> 0x2F1AAC
void xBehaveMgr_SceneFinish() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F1AA0 -> 0x2F1AAC
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1AB0 -> 0x002F1AB8
*/
// Range: 0x2F1AB0 -> 0x2F1AB8
void xBehaveMgr_ScenePrepare() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F1AB0 -> 0x2F1AB8
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1AC0 -> 0x002F1AC8
*/
// Range: 0x2F1AC0 -> 0x2F1AC8
class xBehaveMgr * xBehaveMgr_GetSelf() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F1AC0 -> 0x2F1AC8
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1AD0 -> 0x002F1B1C
*/
// Range: 0x2F1AD0 -> 0x2F1B1C
void xBehaveMgr_Shutdown() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F1AD0 -> 0x2F1B1C
    }
}

/*
    Compile unit: C:\SB\Core\x\xBehaveMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F1B20 -> 0x002F1BD8
*/
// Range: 0x2F1B20 -> 0x2F1BD8
void xBehaveMgr_Startup() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x2F1B20 -> 0x2F1BD8
    }
}

