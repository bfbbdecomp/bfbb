#include "zNPCGoalCommon.h"

#pragma push
#pragma force_active off
void hack_function_order(xGoal* g, xPSYNote* p, F32 f)
{
    p->Notice(PSY_NOTE_HASRESUMED, NULL, NULL);
    g->SysEvent(NULL, NULL, 0, NULL, NULL, NULL);
    g->Suspend(f, NULL);
    g->Exit(f, NULL);
    g->Resume(f, NULL);
    g->GetID();
    g->Enter(f, NULL);
}
#pragma pop

S32 zNPCGoalCommon::Enter(F32 dt, void* updCtxt)
{
    S32 gid = psyche->GIDOfPending();

    if (((flg_npcgauto & 0x2) && gid == 0) || gid == GetID())
    {
        DoAutoAnim(NPC_GSPOT_START, 0);
    }

    return xGoal::Enter(dt, updCtxt);
}

S32 zNPCGoalCommon::Resume(F32 dt, void* updCtxt)
{
    S32 gid = psyche->GIDOfPending();

    if (((flg_npcgauto & 0x2) && (flg_npcgauto & 0x4) && gid == 0) || gid == GetID())
    {
        DoAutoAnim(NPC_GSPOT_RESUME, 0);
    }

    return xGoal::Resume(dt, updCtxt);
}

S32 zNPCGoalCommon::PreCalc(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;

    if (flg_npcgauto & 0x8)
    {
        if ((flg_info |= 0x8) == 0)
        {
            U32 curid = npc->AnimCurStateID();

            if (curid != anid_played)
            {
                Name();

                flg_info |= 0x8;

                if (psyche->cb_notice && psyche->cb_notice)
                {
                    psyche->cb_notice->Notice(PSY_NOTE_ANIMCHANGED, this, NULL);
                }
            }
        }
    }

    return xGoal::PreCalc(dt, updCtxt);
}

U32 zNPCGoalCommon::DoAutoAnim(en_NPC_GOAL_SPOT gspot, S32 forceRestart)
{
    U32 anid = ((zNPCCommon*)psyche->clt_owner)->AnimPick(goalID, gspot, this);

    if (anid)
    {
        DoExplicitAnim(anid, forceRestart);
    }

    return anid_played;
}

U32 zNPCGoalCommon::DoExplicitAnim(U32 anid, S32 forceRestart)
{
    S32 rc = ((zNPCCommon*)psyche->clt_owner)->AnimStart(anid, forceRestart);

    if (rc)
    {
        anid_played = anid;
    }
    else
    {
        Name();

        anid_played = 0;
    }

    if (flg_npcgauto & 0x8)
    {
        flg_info &= ~0x8;
    }

    return anid_played;
}
