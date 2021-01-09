#ifndef XBEHAVIOUR_H
#define XBEHAVIOUR_H

#include "xBase.h"
#include "xListItem.h"
#include "xFactory.h"
#include "xScene.h"

typedef struct xPsyche;

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

struct xGoal : xListItem<xGoal>, xFactoryInst
{
    xPsyche* psyche;
    int32 goalID;
    en_GOALSTATE stat;
    int32 flg_able;
    int32 (*fun_process)(xGoal*, void*, en_trantype*, float32, void*);
    int32 (*fun_precalc)(xGoal*, void*, float32, void*);
    int32 (*fun_chkRule)(xGoal*, void*, en_trantype*, float32, void*);
    void* cbdata;

    xGoal(int32 goalID);
    void SetCallbacks(int (*)(xGoal*, void*, en_trantype*, float, void*),
                      int (*)(xGoal*, void*, en_trantype*, float, void*),
                      int (*)(xGoal*, void*, float, void*), void*);

    void SetPsyche(xPsyche* psyche);
    char* Name();
    void SetState(en_GOALSTATE state);
    en_GOALSTATE GetState();

    xBase* GetOwner();
    void Clear();
    int32 PreCalc(float32 dt, void* updCtxt);
    int32 EvalRules(en_trantype* trantype, float32 dt, void* updCtxt);
    int32 Process(en_trantype* trantype, float dt, void* ctxt, xScene* scene);
};

struct xPSYNote
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
    void (*fun_remap)(int32*, en_trantype*);
    void* userContext;
    int32 cnt_transLastTimestep;
    PSY_BRAIN_STATUS psystat;
    xBase fakebase;

    int32 Timestep(float32 dt, void* updCtxt);
    xGoal* FindGoal(int32 gid);
    int32 GoalSet(int32 gid, int32 param_2);
    xGoal* AddGoal(int32 gid, void* createData);
    void BrainBegin();
    void BrainEnd();
    void SetSafety(int32);
    xPsyche* GetClient();
};

#endif