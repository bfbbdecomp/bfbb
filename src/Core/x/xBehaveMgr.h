#ifndef XBEHAVEMGR_H
#define XBEHAVEMGR_H

#include "xBase.h"
#include "xBehaviour.h"

struct xPSYNote
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

enum PSY_BRAIN_STATUS
{
    PSY_STAT_BLANK,
    PSY_STAT_GROW,
    PSY_STAT_EXTEND,
    PSY_STAT_THINK,
    PSY_STAT_NOMORE,
    PSY_STAT_FORCE = 0x7fffffff
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
    void (*fun_remap)(int32*, en_trantype*);
    void* userContext;
    int32 cnt_transLastTimestep;
    PSY_BRAIN_STATUS psystat;
    xBase fakebase;
};

#endif