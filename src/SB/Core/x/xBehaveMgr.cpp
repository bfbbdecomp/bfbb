#include "xBehaveMgr.h"
#include "xBehaveGoalSimple.h"
#include "xutil.h"

static S32 g_modinit;
static xBehaveMgr* g_behavmgr;

void xBehaveMgr_Startup()
{
    if (g_modinit++ == 0)
    {
        g_behavmgr = new ('BMGR', NULL) xBehaveMgr();
        g_behavmgr->Startup(0xfa, 0xfa);
    }
}

void xBehaveMgr_Shutdown()
{
    g_modinit--;
    if (g_modinit == 0)
    {
        if (g_behavmgr != NULL)
        {
            delete g_behavmgr;
        }
        g_behavmgr = NULL;
    }
}

xBehaveMgr* xBehaveMgr_GetSelf()
{
    return g_behavmgr;
}

xFactory* xBehaveMgr_GoalFactory()
{
    return g_behavmgr->GetFactory();
}

void xBehaveMgr_ScenePrepare()
{
    g_behavmgr->ScenePrepare();
}

void xBehaveMgr_SceneFinish()
{
    g_behavmgr->SceneFinish();
}

void xBehaveMgr_SceneReset()
{
    g_behavmgr->SceneReset();
}

void xBehaveMgr::Startup(S32 size, S32 tmpAlloc)
{
    goalFactory = new ('BMGR', NULL) xFactory(tmpAlloc);

    g_behavmgr->RegBuiltIn();
    XOrdInit(&psylist, size, 0);
    psypool = (xPsyche*)xMemAlloc(gActiveHeap, size * sizeof(xPsyche), 0);
    memset(psypool, 0, size * sizeof(xPsyche));
}

void xBehaveMgr::RegBuiltIn()
{
    xGoalSimple_RegisterTypes(this->goalFactory);
}

xPsyche* xBehaveMgr::Subscribe(xBase* owner, S32 unk)
{
    xPsyche* psy = &this->psypool[this->psylist.cnt];
    XOrdAppend(&this->psylist, psy);
    psy->FreshWipe();
    psy->SetOwner(owner, NULL);
    return psy;
}

void xBehaveMgr::UnSubscribe(xPsyche* psy)
{
    psy->KillBrain(this->goalFactory);
    XOrdRemove(&this->psylist, psy, -1);
}

void xBehaveMgr::ScenePrepare()
{
}

void xBehaveMgr::SceneFinish()
{
    XOrdReset(&this->psylist);
}

void xBehaveMgr::SceneReset()
{
    for (S32 i = 0; i < this->psylist.cnt; i++)
    {
        xPsyche* psyche = (xPsyche*)this->psylist.list[i];
        psyche->Amnesia(0);
    }
}

void xPsyche::BrainBegin()
{
    xFactory* factory = xBehaveMgr_GoalFactory();
    this->psystat = PSY_STAT_GROW;
    factory->GrowDataEnable(&this->fakebase, false);
}

void xPsyche::BrainExtend()
{
    xFactory* factory = xBehaveMgr_GoalFactory();
    this->psystat = PSY_STAT_EXTEND;
    factory->GrowDataEnable(&this->fakebase, true);
}

void xPsyche::BrainEnd()
{
    xBehaveMgr_GoalFactory()->GrowDataDisable();
    this->psystat = PSY_STAT_THINK;
}

xGoal* xPsyche::AddGoal(S32 gid, void* createData)
{
    xGoal* goal = (xGoal*)xBehaveMgr_GoalFactory()->CreateItem(gid, createData, NULL);

    if (goal != NULL)
    {
        if (this->goallist != NULL)
        {
            goal->Insert(this->goallist);
        }
        else
        {
            this->goallist = goal;
        }
        goal->SetPsyche(this);
    }
    else
    {
        xUtil_idtag2string(gid, NULL);
    }
    return goal;
}

void xPsyche::FreshWipe()
{
    for (S32 i = 0; i < 5; ++i)
    {
        this->goalstak[i] = NULL;
    }
    this->staktop = -1;
    this->gid_safegoal = 0;
    this->pendgoal = 0;
    this->pendtype = PEND_TRAN_NONE;
    for (S32 i = 0; i < 5; ++i)
    {
        this->tmr_stack[0][i] = 0.0f;
    }
    this->clt_owner = NULL;
    this->userContext = NULL;
    this->fun_remap = NULL;
    this->cb_notice = NULL;
    this->psystat = PSY_STAT_BLANK;
    this->flg_psyche |= 1;
}

void xPsyche::SetOwner(xBase* clt_owner, void* userContext)
{
    this->clt_owner = clt_owner;
    this->userContext = userContext;
    if (clt_owner == NULL)
    {
        return;
    }

    this->fakebase.id = clt_owner->id;
    this->fakebase.baseType = clt_owner->baseType + 0x80;
    this->fakebase.linkCount = 0;
    this->fakebase.baseFlags = 0;
    this->fakebase.link = NULL;
    this->fakebase.eventFunc = NULL;
}

void xPsyche::KillBrain(xFactory* factory)
{
    this->Lobotomy(factory);
    this->fun_remap = NULL;
}

void xPsyche::Lobotomy(xFactory* factory)
{
    while (this->goallist != NULL)
    {
        xGoal* goal = this->goallist->RemHead(&this->goallist);
        factory->DestroyItem(goal);
    }
}

void xPsyche::Amnesia(S32 i)
{
    xGoal* g = this->goallist;
    while (g != NULL)
    {
        xGoal* thisg = g;
        g = thisg->Next();

        if ((i != 0) || (this->GIDInStack(thisg->GetID()) == 0))
        {
            thisg->Clear();
        }
    }
}

// Non-matching: Loop/alloc issue
S32 xPsyche::IndexInStack(S32 gid) const
{
    S32 da_idx = -1;

    for (S32 i = 0; i <= this->staktop; i++)
    {
        xGoal* tmpgoal = this->goalstak[i];

        if (gid == tmpgoal->GetID())
        {
            da_idx = i;
            break;
        }
    }
    return da_idx;
}

xGoal* xPsyche::GetCurGoal() const
{
    if (this->staktop < 0)
    {
        return NULL;
    }
    else
    {
        return this->goalstak[this->staktop];
    }
}

// Non-matching: Loop/alloc issue
xGoal* xPsyche::GIDInStack(S32 gid) const
{
    xGoal* da_goal = NULL;

    for (S32 i = 0; i <= this->staktop; i++)
    {
        xGoal* tmpgoal = this->goalstak[i];

        if (gid == tmpgoal->GetID())
        {
            da_goal = tmpgoal;
            break;
        }
    }

    return da_goal;
}

S32 xPsyche::GIDOfActive() const
{
    if (this->staktop < 0)
    {
        return 0;
    }
    else
    {
        return this->goalstak[this->staktop]->GetID();
    }
}

S32 xPsyche::GIDOfPending() const
{
    if (this->pendgoal != 0)
    {
        return this->pendgoal->GetID();
    }
    else
    {
        return 0;
    }
}

xGoal* xPsyche::GetPrevRecovery(S32 gid) const
{
    S32 idx_start = -1;
    S32 i;
    xGoal* recgoal = NULL;

    if (gid == 0)
    {
        for (i = this->staktop; i >= 0; i--)
        {
            xGoal* tmpgoal = this->goalstak[i];
            if (tmpgoal->GetFlags() & 8)
            {
                recgoal = tmpgoal;
                break;
            }
        }
    }
    else
    {
        for (i = this->staktop; i >= 0; i--)
        {
            if (gid == this->goalstak[i]->GetID())
            {
                idx_start = i - 1;
                break;
            }
        }
        if (idx_start > 0)
        {
            for (i = idx_start; i >= 0; i--)
            {
                xGoal* tmpgoal = this->goalstak[i];
                if (tmpgoal->GetFlags() & 8)
                {
                    recgoal = tmpgoal;
                    break;
                }
            }
        }
    }
    return recgoal;
}

S32 xPsyche::GoalSet(S32 gid, S32 unk)
{
    S32 result = FALSE;

    if ((this->flg_psyche & 4U))
    {
        return result;
    }
    else
    {
        if (this->fun_remap != NULL)
        {
            en_trantype trantype = GOAL_TRAN_SET;
            this->fun_remap(&gid, &trantype);
            if (trantype != GOAL_TRAN_SET)
            {
                return FALSE;
            }
        }
        if (this->gid_safegoal == 0)
        {
            this->SetSafety(gid);
        }
        if (this->pendgoal && !unk)
        {
            this->pendgoal->Name();
        }
        xGoal* goal = this->FindGoal(gid);
        if (goal != NULL)
        {
            this->pendgoal = goal;
            result = TRUE;
            this->pendtype = PEND_TRAN_SET;
            this->SetTopState(GOAL_STAT_EXIT);
        }
        if ((result != 0 && this->pendtype != PEND_TRAN_NONE) && (this->flg_psyche & 1U))
        {
            this->ForceTran(0.01f, 0);
        }
    }
    return result;
}

S32 xPsyche::GoalPush(S32 gid, S32 unk)
{
    S32 result = 0;
    xGoal* goal;
    en_trantype trantype;

    if (this->flg_psyche & 4)
    {
        return 0;
    }

    if (this->fun_remap != NULL)
    {
        trantype = (en_trantype)2;
        this->fun_remap(&gid, &trantype);
        if (trantype != (en_trantype)2)
        {
            return 0;
        }
    }

    if (this->pendgoal && !unk)
    {
        this->pendgoal->Name();
    }

    if (this->staktop >= 4)
    {
        return 0;
    }

    if (this->staktop >= 0)
    {
        if (!(this->goalstak[this->staktop]->GetFlags() & 4))
        {
            return 0;
        }
    }

    goal = this->FindGoal(gid);
    if (goal != NULL && (goal->GetFlags() & 2))
    {
        this->pendgoal = goal;
        result = 1;
        this->pendtype = (en_pendtype)2;
        this->SetTopState((en_GOALSTATE)4);
    }

    if (result != 0 && this->pendtype != 0 && (this->flg_psyche & 1))
    {
        this->ForceTran(0.01f, NULL);
    }

    return result;
}

S32 xPsyche::GoalPopToBase(S32 overpend)
{
    if (this->flg_psyche & 4)
    {
        return 0;
    }
    else if (this->staktop < 1)
    {
        return 0;
    }
    else
    {
        xPsyche::GoalPop(this->goalstak[0]->GetID(), overpend);
        if ((this->pendtype != PEND_TRAN_NONE) && ((this->flg_psyche & 1)))
        {
            this->ForceTran(0.01f, NULL);
        }
        return 1;
    }
}

S32 xPsyche::GoalPopRecover(S32 overpend)
{
    S32 result = 0;
    S32 i;
    xGoal* tmpgoal;
    xGoal* destgoal = NULL;

    if (flg_psyche & 0x4)
    {
        return 0;
    }
    if (staktop < 1)
    {
        return 0;
    }
    for (i = staktop - 1; i >= 0; i--)
    {
        tmpgoal = goalstak[i];
        if (tmpgoal->GetFlags() & 0x8)
        {
            destgoal = tmpgoal;
            break;
        }
    }
    if (destgoal)
    {
        this->GoalPop(destgoal->GetID(), overpend);
        result = 1;
    }
    if (result != 0)
    {
        if (pendtype != PEND_TRAN_NONE && (flg_psyche & 0x1))
        {
            this->ForceTran(0.01f, NULL);
        }
    }
    return result;
}

S32 xPsyche::GoalPop(S32 gid_popto, S32 unk)
{
    S32 result = 0;
    xGoal* destgoal = NULL;
    xGoal* tmpgoal;

    if ((this->flg_psyche & 4U) != 0)
    {
        return 0;
    }

    if (this->pendgoal && !unk)
    {
        this->pendgoal->Name();
    }

    if (gid_popto != 0 && this->fun_remap != NULL)
    {
        en_trantype trantype = GOAL_TRAN_POPTO;
        this->fun_remap(&gid_popto, &trantype);
        if (trantype != GOAL_TRAN_POPTO)
        {
            return 0;
        }
    }

    if (this->staktop < 0)
    {
        return 0;
    }

    if (this->staktop < 1)
    {
        result = 0;
    }
    else if (gid_popto == 0)
    {
        this->pendgoal = NULL;
        this->pendtype = PEND_TRAN_POP;
        this->SetTopState(GOAL_STAT_EXIT);
        result = 1;
    }
    else
    {
        if (gid_popto == this->goalstak[this->staktop]->GetID())
        {
            destgoal = NULL;
        }
        else
        {
            for (S32 i = 0; i < this->staktop; i++)
            {
                tmpgoal = this->goalstak[i];
                if (gid_popto == tmpgoal->GetID())
                {
                    destgoal = tmpgoal;
                    break;
                }
            }
        }

        if (destgoal != NULL)
        {
            this->pendgoal = destgoal;
            this->pendtype = PEND_TRAN_POPTO;
            this->SetTopState(GOAL_STAT_EXIT);
            result = 1;
        }
    }

    if (result != 0 && this->pendtype != PEND_TRAN_NONE && (this->flg_psyche & 1U) != 0)
    {
        this->ForceTran(0.01f, NULL);
    }

    return result;
}

S32 xPsyche::GoalSwap(S32 gid, S32 unk)
{
    xGoal* goal;
    en_trantype trantype;
    S32 result;

    result = 0;
    if ((this->flg_psyche & 4U) != 0)
    {
        return 0;
    }
    else
    {
        if (this->fun_remap != NULL)
        {
            trantype = GOAL_TRAN_SWAP;
            this->fun_remap(&gid, &trantype);
            if (trantype != GOAL_TRAN_SWAP)
            {
                return 0;
            }
        }
        if (this->pendgoal && !unk)
        {
            this->pendgoal->Name();
        }
        goal = this->FindGoal(gid);
        if (goal != NULL)
        {
            this->pendgoal = goal;
            this->pendtype = PEND_TRAN_SWAP;
            result = 1;
            this->SetTopState(GOAL_STAT_EXIT);
        }
        if (result != 0 && this->pendtype != PEND_TRAN_NONE && (this->flg_psyche & 1U) != 0)
        {
            this->ForceTran(0.01f, NULL);
        }
    }

    return result;
}

S32 xPsyche::GoalNone(S32 p1, S32 denyExplicit)
{
    if (this->flg_psyche & 4)
    {
        return 0;
    }
    else
    {
        if (p1 == 0 && this->pendgoal != NULL)
        {
            this->pendgoal->Name();
        }
        this->pendgoal = NULL;
        if (this->staktop < 0)
        {
            this->pendtype = PEND_TRAN_NONE;
        }
        else
        {
            this->pendtype = PEND_TRAN_POPALL;
            this->SetTopState(GOAL_STAT_EXIT);
        }
        if (this->pendtype != PEND_TRAN_NONE && this->flg_psyche & 1)
        {
            if (denyExplicit)
            {
                S32 isActive = this->ExpTranIsOn();
                this->ExpTranOff();
                this->ForceTran(0.01f, NULL);
                if (isActive)
                {
                    this->ExpTranOn();
                }
            }
            else
            {
                this->ForceTran(0.01f, NULL);
            }
        }
    }
    return 1;
}

void xPsyche::SetTopState(en_GOALSTATE state)
{
    if (this->staktop >= 0)
    {
        this->goalstak[this->staktop]->SetState(state);
    }
}

xGoal* xPsyche::FindGoal(S32 gid)
{
    xGoal* goal = this->goallist;
    xGoal* safe = NULL;
    while (goal != NULL)
    {
        if (this->gid_safegoal == goal->GetID())
        {
            safe = goal;
        }

        if (gid == goal->GetID())
        {
            break;
        }

        goal = goal->Next();
    }
    if (goal == NULL)
    {
        xUtil_idtag2string(gid, 0);

        if (safe != NULL)
        {
            safe->Name();
        }
        else
        {
            xUtil_idtag2string(this->gid_safegoal, 0);
        }
    }
    if (goal == NULL)
    {
        goal = safe;
    }
    return goal;
}

void xPsyche::ForceTran(F32 dt, void* ctx)
{
    this->flg_psyche |= 2;
    this->Timestep(dt, ctx != NULL ? ctx : this->userContext);
    this->flg_psyche &= ~0x2;
}

S32 xPsyche::Timestep(F32 dt, void* updCtxt)
{
    S32 trangid = 0;
    en_trantype trantyp = GOAL_TRAN_NONE;
    S32 old_psyflags = this->flg_psyche;
    this->flg_psyche &= ~0x1;

    if (this->flg_psyche & 0x2)
    {
        this->cnt_transLastTimestep++;
    }
    else
    {
        this->cnt_transLastTimestep = trangid;
    }

    this->TimerUpdate(dt);

    do
    {
        trantyp = GOAL_TRAN_NONE;
        S32 moretodo = 0;

        if (this->pendtype != PEND_TRAN_NONE)
        {
            moretodo = this->TranGoal(dt, updCtxt);
        }

        if (moretodo != 0)
        {
            if (this->pendtype == PEND_TRAN_POPALL)
            {
                break;
            }
        }
        if (moretodo != 0)
        {
            break;
        }

        if (this->pendtype == PEND_TRAN_NONE)
        {
            if (this->staktop < 0)
            {
                break;
            }
            xGoal* curgoal = this->goalstak[this->staktop];

            if (!(curgoal->GetFlags() & 0x10000) ||
                (curgoal->PreCalc(dt, updCtxt), this->pendtype == PEND_TRAN_NONE))
            {
                if (curgoal->GetFlags() & 0x20000)
                {
                    trangid = curgoal->EvalRules(&trantyp, dt, updCtxt);
                    if (trantyp != GOAL_TRAN_NONE || trangid != 0)
                    {
                        this->ParseTranRequest(trantyp, trangid);
                    }

                    if (this->pendtype != PEND_TRAN_NONE)
                        continue;
                }

                trantyp = GOAL_TRAN_NONE;
                trangid = curgoal->Process(&trantyp, dt, updCtxt, NULL);
                if (trantyp != GOAL_TRAN_NONE || trangid != 0)
                {
                    this->ParseTranRequest(trantyp, trangid);
                }
            }
        }
    } while (this->pendtype != PEND_TRAN_NONE);

    this->flg_psyche |= (old_psyflags & 1);

    return 0;
}

S32 xPsyche::ParseTranRequest(en_trantype trantyp, S32 trangid)

{
    S32 rc = 0;
    if (trantyp == GOAL_TRAN_NONE && trangid == 0)
    {
        rc = 1;
    }
    else if (trantyp == GOAL_TRAN_POP)
    {
        rc = this->GoalPop(0, 0);
    }
    else if (trantyp == GOAL_TRAN_POPALL)
    {
        rc = this->GoalNone(0, 0);
    }
    else if (trantyp == GOAL_TRAN_POPBASE)
    {
        rc = this->GoalPopToBase(0);
    }
    else if (trantyp == GOAL_TRAN_POPSAFE)
    {
        rc = this->GoalPopRecover(0);
    }
    else if (trangid != 0)
    {
        if (trantyp == GOAL_TRAN_PUSH)
        {
            rc = this->GoalPush(trangid, 1);
        }
        else if (trantyp == GOAL_TRAN_POPTO)
        {
            rc = this->GoalPop(trangid, 1);
        }
        else if (trantyp == GOAL_TRAN_SWAP)
        {
            rc = this->GoalSwap(trangid, 1);
        }
        else if (trantyp == GOAL_TRAN_SET)
        {
            rc = this->GoalSet(trangid, 1);
        }
    }
    return rc;
}

S32 xPsyche::TranGoal(F32 dt, void* updCtxt)
{
    S32 halfway = 0;
    S32 just_switched = 0;
    xGoal* topgoal;

    if (this->staktop < 0 && this->pendgoal != NULL)
    {
        this->staktop = 0;
        this->goalstak[this->staktop] = this->pendgoal;
        this->pendgoal->SetState(GOAL_STAT_ENTER);
        this->DBG_HistAdd(this->pendgoal->GetID());
        this->pendgoal = NULL;
        this->pendtype = PEND_TRAN_INPROG;
    }

    if (this->staktop < 0)
    {
        return 0;
    }

    if ((this->pendtype != 0) && (this->pendtype != 7))
    {
        S32 moretodo = 0;
        topgoal = this->goalstak[this->staktop];
        switch (topgoal->GetState())
        {
        case GOAL_STAT_SUSPEND:
            moretodo = topgoal->Suspend(dt, updCtxt);
            if (moretodo == 0)
            {
                topgoal->SetState(GOAL_STAT_PAUSED);
            }
            break;
        case GOAL_STAT_EXIT:
            moretodo = topgoal->Exit(dt, updCtxt);
            if (moretodo == 0)
            {
                topgoal->SetState(GOAL_STAT_DONE);
            }
            break;
        default:
            topgoal->GetState();
            break;
        }

        if (moretodo != 0)
        {
            return moretodo;
        }
        halfway = 1;
    }

    if (halfway != 0)
    {
        // FIXME: Unhandled enum values 'PEND_TRAN_NONE', 'PEND_TRAN_INPROG', and 'PEND_TRAN_NOMORE'
        switch (this->pendtype)
        {
        case PEND_TRAN_SET:
            if (this->staktop >= 0)
            {
                this->goalstak[this->staktop] = 0;
            }
            this->staktop -= 1;
            if (this->staktop >= 0)
            {
                this->goalstak[this->staktop]->SetState(GOAL_STAT_EXIT);
                break;
            }
        case PEND_TRAN_PUSH:
            this->staktop += 1;
        case PEND_TRAN_SWAP:
            this->goalstak[this->staktop] = this->pendgoal;
            topgoal = this->goalstak[this->staktop];
            topgoal->SetState(GOAL_STAT_ENTER);
            this->DBG_HistAdd(topgoal->GetID());
            this->pendgoal = NULL;
            this->pendtype = PEND_TRAN_INPROG;
            break;
        case PEND_TRAN_POP:
            this->goalstak[this->staktop] = 0;
            this->staktop -= 1;
            topgoal = this->goalstak[this->staktop];
            topgoal->SetState(GOAL_STAT_RESUME);
            this->DBG_HistAdd(topgoal->GetID());
            this->pendtype = PEND_TRAN_INPROG;
            break;
        case PEND_TRAN_POPTO:
            this->goalstak[this->staktop] = 0;
            this->staktop -= 1;
            topgoal = this->goalstak[this->staktop];
            if (topgoal == this->pendgoal)
            {
                topgoal->SetState(GOAL_STAT_RESUME);
                this->DBG_HistAdd(topgoal->GetID());
                this->pendgoal = NULL;
                this->pendtype = PEND_TRAN_INPROG;
            }
            else
            {
                topgoal->SetState(GOAL_STAT_EXIT);
                this->DBG_HistAdd(topgoal->GetID());
            }
            break;
        case PEND_TRAN_POPALL:
            this->goalstak[this->staktop] = 0;
            this->staktop -= 1;
            if (this->staktop >= 0)
            {
                topgoal = this->goalstak[this->staktop];
                topgoal->SetState(GOAL_STAT_EXIT);
                this->DBG_HistAdd(topgoal->GetID());
            }
            else
            {
                this->pendgoal = NULL;
                this->pendtype = PEND_TRAN_INPROG;
            }
            break;
        }

        if (this->pendtype != PEND_TRAN_INPROG)
        {
            return 0;
        }
        just_switched = 1;
    }

    if (this->staktop >= 0)
    {
        S32 moretodo = 0;
        topgoal = this->goalstak[this->staktop];
        switch (topgoal->GetState())
        {
        case GOAL_STAT_RESUME:
            moretodo = topgoal->Resume(dt, updCtxt);
            if (moretodo == 0)
            {
                topgoal->SetState(GOAL_STAT_PROCESS);
                if (this->cb_notice != NULL)
                {
                    this->cb_notice->Notice(PSY_NOTE_HASRESUMED, topgoal, NULL);
                }
            }
            break;
        case GOAL_STAT_ENTER:
            if (just_switched != 0)
            {
                this->TimerClear();
            }
            moretodo = topgoal->Enter(dt, updCtxt);
            if (moretodo == 0)
            {
                topgoal->SetState(GOAL_STAT_PROCESS);
                if (this->cb_notice != NULL)
                {
                    this->cb_notice->Notice(PSY_NOTE_HASENTERED, topgoal, NULL);
                }
            }
            break;
        default:
            topgoal->GetState();
            break;
        }

        if (moretodo == 0)
        {
            this->pendtype = PEND_TRAN_NONE;
        }
    }

    if (this->pendtype != PEND_TRAN_NONE)
    {
        return 2;
    }

    if (this->staktop >= 0)
    {
        this->goalstak[this->staktop]->Name();
    }

    return 0;
}

F32 xPsyche::TimerGet(en_xpsytime tymr)
{
    if (this->staktop < 0)
    {
        return -1.0f;
    }
    return (&this->tmr_stack[0][this->staktop])[tymr];
}

void xPsyche::TimerClear()
{
    if (this->staktop < 0)
    {
        return;
    }
    this->tmr_stack[0][this->staktop] = 0.0f;
}

// Non-matching: Needs an extra branch that does the same `+= dt`
void xPsyche::TimerUpdate(F32 dt)
{
    F32* p;
    if (this->staktop < 0)
    {
        return;
    }

    p = &this->tmr_stack[0][this->staktop];
    *p += dt;
}
