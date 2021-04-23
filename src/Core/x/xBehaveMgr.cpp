#include "xBehaveMgr.h"

#include <types.h>

#include "xBehaveGoalSimple.h"
#include "xutil.h"

extern int32 g_modinit_xBehaveMgr;
extern xBehaveMgr* g_behavmgr;

// func_8010CE24
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "xBehaveMgr_Startup__Fv")
#else
void xBehaveMgr_Startup()
{
    if (g_modinit_xBehaveMgr++ == 0)
    {
        g_behavmgr = new ('BMGR', NULL) xBehaveMgr();
        g_behavmgr->Startup(0xfa, 0xfa);
    }
}
#endif

// func_8010CE8C
#if 1
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "xBehaveMgr_Shutdown__Fv")
#else
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
#endif

// func_8010CED4
xBehaveMgr* xBehaveMgr_GetSelf()
{
    return g_behavmgr;
}

// func_8010CEDC
xFactory* xBehaveMgr_GoalFactory()
{
    return g_behavmgr->GetFactory();
}

// func_8010CF00
void xBehaveMgr_ScenePrepare()
{
    g_behavmgr->ScenePrepare();
}

// func_8010CF24
void xBehaveMgr_SceneFinish()
{
    g_behavmgr->SceneFinish();
}

// func_8010CF48
void xBehaveMgr_SceneReset()
{
    g_behavmgr->SceneReset();
}

// func_8010CF6C
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "Startup__10xBehaveMgrFii")

// func_8010D018
void xBehaveMgr::RegBuiltIn()
{
    xGoalSimple_RegisterTypes(this->goalFactory);
}

// func_8010D03C
xPsyche* xBehaveMgr::Subscribe(xBase* owner, int32 i)
{
    xPsyche* psyche = &this->psypool[this->psylist.cnt];
    XOrdAppend(&this->psylist, psyche);
    psyche->FreshWipe();
    psyche->SetOwner(owner, NULL);
    return psyche;
}

// func_8010D0A8
void xBehaveMgr::UnSubscribe(xPsyche* psy)
{
    psy->KillBrain(this->goalFactory);
    XOrdRemove(&this->psylist, psy, -1);
}

// func_8010D0F8
void xBehaveMgr::ScenePrepare()
{
}

// func_8010D0FC
void xBehaveMgr::SceneFinish()
{
    XOrdReset(&this->psylist);
}

// func_8010D120
void xBehaveMgr::SceneReset()
{
    for (int32 i = 0; i < this->psylist.cnt; i++)
    {
        xPsyche* psyche = (xPsyche*)this->psylist.list[i];
        psyche->Amnesia(0);
    }
}

// func_8010D188
void xPsyche::BrainBegin()
{
    xFactory* factory = xBehaveMgr_GoalFactory();
    this->psystat = PSY_STAT_GROW;
    factory->GrowDataEnable(&this->fakebase, false);
}

// func_8010D1C8
void xPsyche::BrainExtend()
{
    xFactory* factory = xBehaveMgr_GoalFactory();
    this->psystat = PSY_STAT_EXTEND;
    factory->GrowDataEnable(&this->fakebase, true);
}

// func_8010D208
void xPsyche::BrainEnd()
{
    xBehaveMgr_GoalFactory()->GrowDataDisable();
    this->psystat = PSY_STAT_THINK;
}

// func_8010D240
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "AddGoal__7xPsycheFiPv")
#else
// Regalloc
xGoal* xPsyche::AddGoal(int32 gid, void* createData)
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
#endif

// func_8010D2E4
extern float32 _750;
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

// func_8010D35C
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

// func_8010D398
void xPsyche::KillBrain(xFactory* factory)
{
    this->Lobotomy(factory);
    this->fun_remap = NULL;
}

// func_8010D3CC
void xPsyche::Lobotomy(xFactory* factory)
{
    while (this->goallist != NULL)
    {
        xGoal* goal = this->goallist->RemHead(&this->goallist);
        factory->DestroyItem(goal);
    }
}

// func_8010D430
#if 1
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "Amnesia__7xPsycheFi")
#else
void xPsyche::Amnesia(int32 i)
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
#endif

// func_8010D4CC
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "IndexInStack__7xPsycheCFi")

// func_8010D534
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GetCurGoal__7xPsycheCFv")

// func_8010D558
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GIDInStack__7xPsycheCFi")

// func_8010D5C4
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GIDOfActive__7xPsycheCFv")

// func_8010D604
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GIDOfPending__7xPsycheCFv")

// func_8010D638
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GetPrevRecovery__7xPsycheCFi")

// func_8010D730
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GoalSet__7xPsycheFii")

// func_8010D858
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GoalPush__7xPsycheFii")

// func_8010D9B0
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GoalPopToBase__7xPsycheFi")

// func_8010DA50
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GoalPopRecover__7xPsycheFi")

// func_8010DB40
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GoalPop__7xPsycheFii")

// func_8010DCF8
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GoalSwap__7xPsycheFii")

// func_8010DE08
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "GoalNone__7xPsycheFii")

// func_8010DF04
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "SetTopState__7xPsycheF12en_GOALSTATE")

// func_8010DF3C
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "FindGoal__7xPsycheFi")

// func_8010E00C
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "ForceTran__7xPsycheFfPv")

// func_8010E060
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "Timestep__7xPsycheFfPv")

// func_8010E260
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "ParseTranRequest__7xPsycheF11en_trantypei")

// func_8010E378
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "TranGoal__7xPsycheFfPv")

// func_8010E8A8
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "TimerGet__7xPsycheF11en_xpsytime")

// func_8010E8D4
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "TimerClear__7xPsycheFv")

// func_8010E8F4
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "TimerUpdate__7xPsycheFf")

// func_8010E938
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "__ct__10xBehaveMgrFv")

// func_8010E93C
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "__dt__10xBehaveMgrFv")

// func_8010E978
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "ExpTranOn__7xPsycheFv")

// func_8010E988
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "ExpTranOff__7xPsycheFv")

// func_8010E998
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "ExpTranIsOn__7xPsycheFv")

// func_8010E9AC
#pragma GLOBAL_ASM("asm/Core/x/xBehaveMgr.s", "DBG_HistAdd__7xPsycheFi")
