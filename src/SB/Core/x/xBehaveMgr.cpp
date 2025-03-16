#include "xBehaveMgr.h"

#include <types.h>

#include "xBehaveGoalSimple.h"
#include "xutil.h"

extern S32 g_modinit_xBehaveMgr;
extern xBehaveMgr* g_behavmgr;

void xBehaveMgr_Startup()
{
    if (g_modinit_xBehaveMgr++ == 0)
    {
        g_behavmgr = new ('BMGR', NULL) xBehaveMgr();
        g_behavmgr->Startup(0xfa, 0xfa);
    }
}

void xBehaveMgr_Shutdown()
{
    g_modinit_xBehaveMgr--;
    if (g_modinit_xBehaveMgr == 0)
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

void xBehaveMgr::RegBuiltIn()
{
    xGoalSimple_RegisterTypes(this->goalFactory);
}

xPsyche* xBehaveMgr::Subscribe(xBase* owner, S32 i)
{
    xPsyche* psyche = &this->psypool[this->psylist.cnt];
    XOrdAppend(&this->psylist, psyche);
    psyche->FreshWipe();
    psyche->SetOwner(owner, NULL);
    return psyche;
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
            this->goallist->Insert(goal);
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

extern F32 _750;
void xPsyche::FreshWipe()
{
    this->goalstak[0] = NULL;
    this->goalstak[1] = NULL;
    this->goalstak[2] = NULL;
    this->goalstak[3] = NULL;
    this->goalstak[4] = NULL;
    this->staktop = -1;
    this->gid_safegoal = 0;
    this->pendgoal = 0;
    this->pendtype = PEND_TRAN_NONE;
    this->tmr_stack[0][0] = _750;
    this->tmr_stack[0][1] = _750;
    this->tmr_stack[0][2] = _750;
    this->tmr_stack[0][3] = _750;
    this->tmr_stack[0][4] = _750;
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
        g = g->Next();
        // this->goallist = this->goallist->Next();

        if (i == 0 && this->GIDInStack(thisg->GetID()) != NULL)
        {
            continue;
        }
    }
}
