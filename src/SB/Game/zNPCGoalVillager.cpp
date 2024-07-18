#include <types.h>

#include "zGlobals.h"
#include "zNPCGoalVillager.h"
#include "zNPCTypeVillager.h"

void zNPCGoalPlayerNear::DoCheatPanHandle()
{
    if (globals.player.Inv_Shiny > 75000)
    {
        globals.player.Inv_Shiny -= 500;
    }
}

S32 zNPCGoalBalloon::Enter(F32 dt, void* updCtxt)
{
    zNPCBalloonBoy* bboy = (zNPCBalloonBoy*)psyche->clt_owner;
    bboy->specialBalloon = 1;

    zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBalloon::Exit(F32 dt, void* updCtxt)
{
    zNPCBalloonBoy* bboy = (zNPCBalloonBoy*)psyche->clt_owner;
    bboy->specialBalloon = 0;

    xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalBalloon::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene)
{
    zNPCBalloonBoy* bboy = (zNPCBalloonBoy*)psyche->clt_owner;

    S32 type;
    if (bboy->plat_balloons != NULL)
    {
        *trantype = GOAL_TRAN_PUSH;
        type = 'NGS?';
    }
    else
    {
        *trantype = GOAL_TRAN_SET;
        type = 'NGS@';
    }

    // This is always true
    if (*trantype != GOAL_TRAN_NONE)
    {
        return type;
    }

    if (type != 0)
    {
        return type;
    }

    return xGoal::Process(trantype, dt, updCtxt, NULL);
}

S32 zNPCGoalBalloon::NPCMessage(NPCMsg* mail)
{
    S32 handled = 1;

    switch (mail->msgid)
    {
    case NPC_MID_SYSEVENT:
        if (mail->sysevent.toEvent != eEventNPCSpecial_PlatformFall &&
            mail->sysevent.toEvent != eEventNPCSpecial_PlatformSnap)
        {
            handled = 0;
        }
        break;
    case NPC_MID_DAMAGE:
        handled = 1;
        break;
    default:
        handled = 0;
        break;
    }

    return handled;
}

S32 zNPCGoalBoyRide::Enter(F32 dt, void* updCtxt)
{
    zNPCBalloonBoy* bboy = (zNPCBalloonBoy*)psyche->clt_owner;
    bboy->flags2.flg_colCheck = 0;
    bboy->flags2.flg_penCheck = 0;

    zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalBoyRide::Exit(F32 dt, void* updCtxt)
{
    zNPCBalloonBoy* bboy = (zNPCBalloonBoy*)psyche->clt_owner;
    bboy->RestoreColFlags();

    xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalBoyRide::Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene)
{
    S32 type = 0;
    zNPCBalloonBoy* bboy = (zNPCBalloonBoy*)psyche->clt_owner;
    if (bboy->plat_balloons == NULL)
    {
        *trantype = GOAL_TRAN_SWAP;
        type = 'NGS@';
    }

    if (type != 0)
    {
        return type;
    }

    xVec3* pos = xEntGetPos(bboy->plat_balloons);
    xVec3Copy(&bboy->frame->mat.pos, pos);
    xMat3x3Copy((xMat3x3*)&bboy->frame->mat, (xMat3x3*)bboy->plat_balloons->model->Mat);

    bboy->frame->mode |= 0x41;    

    bboy->PlatAnimSync();

    return xGoal::Process(trantype, dt, updCtxt, NULL);
}

S32 zNPCGoalBoyRide::NPCMessage(NPCMsg* mail)
{
    zNPCBalloonBoy* bboy = (zNPCBalloonBoy*)psyche->clt_owner;
    S32 handled = 1;

    switch (mail->msgid)
    {
        case NPC_MID_SYSEVENT:
            if (mail->sysevent.toEvent == eEventNPCSpecial_PlatformFall)
            {
                bboy->plat_balloons = NULL;
            }
            else
            {
                handled = 0;
            }
            break;
        case NPC_MID_DAMAGE:
            DoAutoAnim(NPC_GSPOT_ALTA, 0);
            bboy->PlatAnimSet(BBOY_PLATANIM_HIT);
            break;
        default:
            handled = 0;
            break;
    }

    return handled;
}
