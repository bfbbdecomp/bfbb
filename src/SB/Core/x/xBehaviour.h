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

typedef S32 (*xGoalProcessCallback)(xGoal*, void*, en_trantype*, F32, void*);
typedef S32 (*xGoalChkRuleCallback)(xGoal*, void*, en_trantype*, F32, void*);
typedef S32 (*xGoalPreCalcCallback)(xGoal*, void*, F32, void*);

struct xPsyche : RyzMemData
{
    xBase* clt_owner;
    xPSYNote* cb_notice;
    S32 flg_psyche;
    xGoal* goallist;
    xGoal* goalstak[5];
    F32 tmr_stack[1][5];
    S32 staktop;
    xGoal* pendgoal;
    en_pendtype pendtype;
    S32 gid_safegoal;
    void (*fun_remap)(S32*, en_trantype*);
    void* userContext;
    S32 cnt_transLastTimestep;
    PSY_BRAIN_STATUS psystat;
    xBase fakebase;

    xGoal* GIDInStack(S32 gid) const;
    void ImmTranOn();
    void ImmTranOff();
    S32 ImmTranIsOn();
    S32 HasGoal(S32 goal);
    xGoal* GetCurGoal() const;
    S32 GIDOfActive() const;
    S32 GIDOfPending() const;
    S32 Timestep(F32 dt, void* updCtxt);
    xGoal* FindGoal(S32 gid);
    S32 GoalSet(S32 gid, S32 r5);
    S32 GoalPop(S32 gid_popto, S32 r5);
    S32 GoalNone(S32 denyExplicit);
    S32 GoalSwap(S32 gid, S32 r5);
    S32 GoalPopRecover(S32 overpend);
    S32 GoalPopToBase(S32 overpend);
    S32 GoalPush(S32 gid, S32 r5);
    S32 GoalSet(S32 gid);

    void BrainBegin();
    void BrainExtend();
    void BrainEnd();
    xGoal* AddGoal(S32 gid, void* createData);
    void FreshWipe();
    void SetOwner(xBase*, void*);
    void KillBrain(xFactory*);
    void Lobotomy(xFactory*);
    void SetSafety(S32);
    void Amnesia(S32);

    xBase* GetClient()
    {
        return this->clt_owner;
    }
};

struct xGoal : xListItem<xGoal>, xFactoryInst
{
    xPsyche* psyche; // 0x18
    S32 goalID;
    en_GOALSTATE stat;
    S32 flg_able; // 0x24
    xGoalProcessCallback fun_process;
    xGoalPreCalcCallback fun_precalc;
    xGoalChkRuleCallback fun_chkRule;
    void* cbdata;

    xGoal(S32 goalID)
    {
        this->goalID = goalID;
        this->flg_able = 0;
        this->stat = GOAL_STAT_UNKNOWN;
    }

    S32 GetID() const
    {
        return this->goalID;
    }

    void SetFlags(S32 flags);
    void AddFlags(S32 flags);
    xPsyche* GetPsyche() const;
    void SetCallbacks(xGoalProcessCallback process, xGoalChkRuleCallback chkRule,
                      xGoalPreCalcCallback precalc, void* cbdata);
    S32 GetFlags() const;
    void SetPsyche(xPsyche* psyche);
    const char* Name();
    void SetState(en_GOALSTATE state);
    en_GOALSTATE GetState() const;
    xBase* GetOwner() const;

    // vtable
    virtual void Clear() = 0;

    virtual S32 Enter(F32 dt, void* updCtxt)
    {
        return 0;
    }

    virtual S32 Exit(F32 dt, void* updCtxt)
    {
        return 0;
    }

    virtual S32 Suspend(F32 dt, void* updCtxt)
    {
        return 0;
    }

    virtual S32 Resume(F32 dt, void* updCtxt)
    {
        return 0;
    }

    virtual S32 PreCalc(F32 dt, void* updCtxt);
    virtual S32 EvalRules(en_trantype* trantype, F32 dt, void* updCtxt);
    virtual S32 Process(en_trantype* trantype, float dt, void* ctxt, xScene* scene);

    virtual S32 SysEvent(xBase* from, xBase* to, U32 toEvent, const F32* toParam,
                           xBase* toParamWidget, S32* handled)
    {
        return 1;
    }

protected:
    ~xGoal(); // prevents implicit destructors from being generated in subclasses of xGoal
};

#endif
