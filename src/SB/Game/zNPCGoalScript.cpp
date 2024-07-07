#include "zNPCGoalScript.h"

#include "zNPCGoals.h"
#include "zNPCGoalStd.h"

#include "xEvent.h"

xFactoryInst* GOALCreate_Script(S32 who, RyzMemGrow* grow, void*)
{
    xGoal* goal = NULL;

    switch (who)
    {
    case NPC_GOAL_SCRIPT:
    {
        goal = new (who, grow) zNPCGoalScript(who);
        break;
    }
    case NPC_GOAL_SCRIPTANIM:
    {
        goal = new (who, grow) zNPCGoalScriptAnim(who);
        break;
    }
    case NPC_GOAL_SCRIPTATTACK:
    {
        goal = new (who, grow) zNPCGoalScriptAttack(who);
        break;
    }
    case NPC_GOAL_SCRIPTMOVE:
    {
        goal = new (who, grow) zNPCGoalScriptMove(who);
        break;
    }
    case NPC_GOAL_SCRIPTTALK:
    {
        goal = new (who, grow) zNPCGoalScriptTalk(who);
        break;
    }
    case NPC_GOAL_SCRIPTFOLLOW:
    {
        goal = new (who, grow) zNPCGoalScriptFollow(who);
        break;
    }
    case NPC_GOAL_SCRIPTLEAD:
    {
        goal = new (who, grow) zNPCGoalScriptLead(who);
        break;
    }
    case NPC_GOAL_SCRIPTWAIT:
    {
        goal = new (who, grow) zNPCGoalScriptWait(who);
        break;
    }
    }

    return goal;
}

S32 zNPCGoalScript::Enter(F32 dt, void* updCtxt)
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;

    zEntEvent(npc, npc, eEventNPCScript_ScriptReady);

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

S32 zNPCGoalScript::Exit(F32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

S32 zNPCGoalScript::SysEvent(xBase* from, xBase* to, U32 toEvent, const F32* toParam,
                               xBase* toParamWidget, S32* handled)
{
    return xGoal::SysEvent(from, to, toEvent, toParam, toParamWidget, handled);
}

S32 zNPCGoalScript::NPCMessage(NPCMsg* mail)
{
    xPsyche* psyche = GetPsyche();
    S32 handled = 1;

    switch (mail->msgid)
    {
    case NPC_MID_SCRIPTBEGIN:
    {
        break;
    }
    case NPC_MID_SCRIPTEND:
    {
        psyche->GoalSet(NPC_GOAL_IDLE, 0);
        break;
    }
    case NPC_MID_SCRIPTHALT:
    {
        psyche->GoalPop(NPC_GOAL_SCRIPT, 0);
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
