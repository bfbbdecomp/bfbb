#include "zNPCGoalCommon.h"

#pragma push
#pragma force_active off
void hack_function_order(xGoal* g, xPSYNote* p, float32 f)
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

int32 zNPCGoalCommon::Enter(float32 dt, void* updCtxt)
{
    int32 gid = psyche->GIDOfPending();

    if (((flg_npcgauto & 0x2) && gid == 0) || gid == GetID())
    {
        DoAutoAnim(NPC_GSPOT_START, 0);
    }

    return xGoal::Enter(dt, updCtxt);
}

int32 zNPCGoalCommon::Resume(float32 dt, void* updCtxt)
{
    int32 gid = psyche->GIDOfPending();

    if (((flg_npcgauto & 0x2) && (flg_npcgauto & 0x4) && gid == 0) || gid == GetID())
    {
        DoAutoAnim(NPC_GSPOT_RESUME, 0);
    }

    return xGoal::Resume(dt, updCtxt);
}

int32 zNPCGoalCommon::PreCalc(float32 dt, void* updCtxt)
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;

    if (flg_npcgauto & 0x8)
    {
        if ((flg_info |= 0x8) == 0)
        {
            uint32 curid = npc->AnimCurStateID();

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

uint32 zNPCGoalCommon::DoAutoAnim(en_NPC_GOAL_SPOT gspot, int32 forceRestart)
{
    uint32 anid = ((zNPCCommon*)psyche->clt_owner)->AnimPick(goalID, gspot, this);

    if (anid)
    {
        DoExplicitAnim(anid, forceRestart);
    }

    return anid_played;
}

uint32 zNPCGoalCommon::DoExplicitAnim(uint32 anid, int32 forceRestart)
{
    int32 rc = ((zNPCCommon*)psyche->clt_owner)->AnimStart(anid, forceRestart);

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