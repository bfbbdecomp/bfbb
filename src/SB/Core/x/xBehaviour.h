#ifndef XBEHAVIOUR_H
#define XBEHAVIOUR_H

#include "xBase.h"
#include "xListItem.h"
#include "xFactory.h"
#include "xScene.h"

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

enum en_psynote
{
    PSY_NOTE_HASRESUMED,
    PSY_NOTE_HASENTERED,
    PSY_NOTE_ANIMCHANGED,
    PSY_NOTE_NOMORE,
    PSY_NOTE_FORCE = 0x7fffffff
};

struct xGoal;

struct xPSYNote
{
    virtual void Notice(en_psynote note, xGoal* goal, void*)
    {
    }
};

typedef int32 (*xGoalProcessCallback)(xGoal*, void*, en_trantype*, float32, void*);
typedef int32 (*xGoalChkRuleCallback)(xGoal*, void*, en_trantype*, float32, void*);
typedef int32 (*xGoalPreCalcCallback)(xGoal*, void*, float32, void*);

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

    xGoal* GIDInStack(int32 gid) const;
    void ImmTranOn();
    void ImmTranOff();
    int32 ImmTranIsOn();
    int32 HasGoal(int32 goal);
    int32 GIDOfPending() const;
    int32 GIDOfActive() const;
    int32 Timestep(float32 dt, void* updCtxt);
    xGoal* FindGoal(int32 gid);
    int32 GoalSet(int32 gid, int32 r5);
    int32 GoalPop(int32 gid_popto, int32 r5);
    int32 GoalNone(int32 denyExplicit);
    int32 GoalSwap(int32 gid, int32 r5);
    int32 GoalPopRecover(int32 overpend);
    int32 GoalPopToBase(int32 overpend);
    int32 GoalPush(int32 gid, int32 r5);
    int32 GoalSet(int32 gid);

    void BrainBegin();
    void BrainExtend();
    void BrainEnd();
    xGoal* AddGoal(int32 gid, void* createData);
    void FreshWipe();
    void SetOwner(xBase*, void*);
    void KillBrain(xFactory*);
    void Lobotomy(xFactory*);
    void SetSafety(int32);
    void Amnesia(int32);

    xBase* GetClient()
    {
        return this->clt_owner;
    }
};

struct xGoal : xListItem<xGoal>, xFactoryInst
{
    xPsyche* psyche; // 0x18
    int32 goalID;
    en_GOALSTATE stat;
    int32 flg_able; // 0x24
    xGoalProcessCallback fun_process;
    xGoalPreCalcCallback fun_precalc;
    xGoalChkRuleCallback fun_chkRule;
    void* cbdata;

    xGoal(int32 goalID)
    {
        this->goalID = goalID;
        this->flg_able = 0;
        this->stat = GOAL_STAT_UNKNOWN;
    }

    int32 GetID() const
    {
        return this->goalID;
    }

    void SetFlags(int32 flags);
    void AddFlags(int32 flags);
    xPsyche* GetPsyche() const;
    void SetCallbacks(xGoalProcessCallback process, xGoalChkRuleCallback chkRule,
                      xGoalPreCalcCallback precalc, void* cbdata);
    int32 GetFlags() const;
    void SetPsyche(xPsyche* psyche);
    const char* Name();
    void SetState(en_GOALSTATE state);
    en_GOALSTATE GetState() const;
    xBase* GetOwner() const;

    // vtable
    virtual void Clear() = 0;

    virtual int32 Enter(float32 dt, void* updCtxt)
    {
        return 0;
    }

    virtual int32 Exit(float32 dt, void* updCtxt)
    {
        return 0;
    }

    virtual int32 Suspend(float32 dt, void* updCtxt)
    {
        return 0;
    }

    virtual int32 Resume(float32 dt, void* updCtxt)
    {
        return 0;
    }

    virtual int32 PreCalc(float32 dt, void* updCtxt);
    virtual int32 EvalRules(en_trantype* trantype, float32 dt, void* updCtxt);
    virtual int32 Process(en_trantype* trantype, float dt, void* ctxt, xScene* scene);

    virtual int32 SysEvent(xBase* from, xBase* to, uint32 toEvent, const float32* toParam,
                           xBase* toParamWidget, int32* handled)
    {
        return 1;
    }

protected:
    ~xGoal(); // prevents implicit destructors from being generated in subclasses of xGoal
};

#endif
