#include "zNPCGoalDuplotron.h"

#include "zNPCGoals.h"
#include "zNPCTypeDuplotron.h"
#include "zNPCHazard.h"
#include "zGlobals.h"

#include "../Core/x/xMath.h"
#include "../Core/x/xMathInlines.h"
#include "../Core/x/xEvent.h"
#include "../Core/x/xScrFx.h"

extern float32 _816_0; // 20.0f
extern float32 _840_3; // 0.0f

xFactoryInst* GOALCreate_Duplotron(int32 who, RyzMemGrow* grow, void*)
{
    xGoal* goal = NULL;

    switch (who)
    {
    case NPC_GOAL_DUPLOLIVE:
    {
        goal = new (who, grow) zNPCGoalDuploLive(who);
        break;
    }
    case NPC_GOAL_DUPLODEAD:
    {
        goal = new (who, grow) zNPCGoalDuploDead(who);
        break;
    }
    }

    return goal;
}

int32 zNPCGoalDuploLive::Enter(float32 dt, void* updCtxt)
{
    livestat = LIVESTAT_NORMAL;
    tmr_chkPlyrDist = _816_0;

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

int32 zNPCGoalDuploLive::Process(en_trantype* trantype, float32 dt, void* updCtxt, xScene* xscn)
{
    zNPCDuplotron* npc = (zNPCDuplotron*)psyche->clt_owner;
    int32 nextgoal = 0;

    npc->VelStop();

    switch (livestat)
    {
    case LIVESTAT_NORMAL:
    {
        if (tmr_chkPlyrDist < _840_3)
        {
            CheckPlayer();
        }

        tmr_chkPlyrDist = MAX(-1.0f, tmr_chkPlyrDist - dt);

        if (!npc->SndChanIsBusy(0))
        {
            npc->SndPlayRandom(NPC_STYP_CLANKING);
        }

        break;
    }
    case LIVESTAT_COUNTDOWN:
    {
        if (SDS_Countdown(dt))
        {
            *trantype = GOAL_TRAN_SET;
            nextgoal = NPC_GOAL_DUPLODEAD;
        }

        break;
    }
    }

    if (*trantype != GOAL_TRAN_NONE)
    {
        return nextgoal;
    }

    npc->flg_xtrarend |= 0x1;

    npc->VFXCycleLights(dt, 0);
    npc->VFXSmokeStack(dt);

    return xGoal::Process(trantype, dt, updCtxt, xscn);
}

void zNPCGoalDuploLive::CheckPlayer()
{
    zNPCDuplotron* npc = (zNPCDuplotron*)psyche->clt_owner;

    tmr_chkPlyrDist = 0.25f * (xurand() - 0.5f) + 1.0f;

    uint32 curid = npc->AnimCurStateID();

    if (curid == g_hash_dupoanim[2])
    {
        return;
    }

    xVec3 v;
    xVec3Sub(&v, xEntGetPos(&globals.player.ent), xEntGetPos(npc));

    float32 len = xVec3Length2(&v);

    if (len > SQ(npc->cfg_npc->rad_detect))
    {
        DoAutoAnim(NPC_GSPOT_RESUME, 0);
    }
    else
    {
        DoAutoAnim(NPC_GSPOT_STARTALT, 0);
    }
}

int32 zNPCGoalDuploLive::NPCMessage(NPCMsg* mail)
{
    int32 handled = 1;
    zNPCDuplotron* npc = (zNPCDuplotron*)psyche->clt_owner;

    switch (mail->msgid)
    {
    case NPC_MID_DAMAGE:
    {
        if (psyche->GIDOfPending() != NPC_GOAL_DUPLODEAD)
        {
            SDS_BigRedButton();
            handled = 1;
        }

        break;
    }
    case NPC_MID_SYSEVENT:
    {
        switch (mail->sysevent.toEvent)
        {
        case eEventDuploNPCBorn:
        {
            if (livestat == LIVESTAT_NORMAL && g_hash_dupoanim[2] != npc->AnimCurStateID())
            {
                DoAutoAnim(NPC_GSPOT_ALTA, 0);
            }
            break;
        }
        default:
        {
            handled = 0;
            break;
        }
        }

        break;
    }
    default:
    {
        handled = 0;
        break;
    }
    }

    return handled;
}

void zNPCGoalDuploLive::SDS_BigRedButton()
{
    zNPCDuplotron* npc = (zNPCDuplotron*)psyche->clt_owner;

    if (livestat != LIVESTAT_COUNTDOWN)
    {
        livestat = LIVESTAT_COUNTDOWN;
        cnt_destruct = 120; // 2 seconds

        DoAutoAnim(NPC_GSPOT_ALTB, 0);

        npc->DuploNotice(SM_NOTE_DUPDEAD, this);
    }
}

int32 zNPCGoalDuploLive::SDS_Countdown(float32 dt)
{
    zNPCDuplotron* npc = (zNPCDuplotron*)psyche->clt_owner;
    int32 done;

    switch (cnt_destruct)
    {
    case 15:
    case 30:
    case 60:
    case 120:
    case 180:
    {
        npc->SndPlayRandom(NPC_STYP_WARNBANG);
        done = 0;
        break;
    }
    case 0:
    {
        SDS_StartExplode();
        done = 1;
        break;
    }
    default:
    {
        done = 0;
        break;
    }
    }

    npc->VFXOverheat(dt, 1.0f - (float32)cnt_destruct / 180.0f);
    npc->VFXCycleLights(dt, 1);

    cnt_destruct--;

    return done;
}

void zNPCGoalDuploLive::SDS_StartExplode()
{
    zNPCDuplotron* npc = (zNPCDuplotron*)psyche->clt_owner;

    xScrFXGlareAdd(xEntGetCenter(npc), 1.5f, 0.4f, 10.0f, 1.0f, 1.0f, 0.75f, 1.0f, NULL);

    NPCHazard* haz;

    haz = HAZ_Acquire();

    if (!haz)
    {
        return;
    }

    haz->ConfigHelper(NPC_HAZ_DUPLOBOOM);
    haz->SetNPCOwner(npc);
    haz->Start(xEntGetCenter(npc), -1.0f);

    haz = HAZ_Acquire();

    if (!haz)
    {
        return;
    }

    haz->ConfigHelper(NPC_HAZ_DUPLOBOOM);
    haz->flg_hazard &= ~0x2000;
    haz->SetNPCOwner(npc);
    haz->custdata.typical.rad_max *= 0.5f;
    haz->Start(xEntGetCenter(npc), -1.0f);

    haz = HAZ_Acquire();

    if (!haz)
    {
        return;
    }

    haz->ConfigHelper(NPC_HAZ_DUPLO_SHROOM);
    haz->Start(xEntGetCenter(npc), -1.0f);

    if (npc->explosion && npc->explosion->initCB)
    {
        npc->explosion->initCB(npc->explosion, npc->model, NULL, NULL);
    }

    npc->GiveReward();
}
