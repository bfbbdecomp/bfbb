#include "zNPCGoalScript.h"

#include "zNPCGoalStd.h"

#include "../Core/x/xEvent.h"

xFactoryInst* GOALCreate_Script(int32 who, RyzMemGrow* grow, void*)
{
    xGoal* goal = NULL;

    switch (who)
    {
    case NPC_GOAL_ID_SCRIPT:
    {
        goal = new (who, grow) zNPCGoalScript(who);
        break;
    }
    case NPC_GOAL_ID_SCRIPTANIM:
    {
        goal = new (who, grow) zNPCGoalScriptAnim(who);
        break;
    }
    case NPC_GOAL_ID_SCRIPTATTACK:
    {
        goal = new (who, grow) zNPCGoalScriptAttack(who);
        break;
    }
    case NPC_GOAL_ID_SCRIPTMOVE:
    {
        goal = new (who, grow) zNPCGoalScriptMove(who);
        break;
    }
    case NPC_GOAL_ID_SCRIPTTALK:
    {
        goal = new (who, grow) zNPCGoalScriptTalk(who);
        break;
    }
    case NPC_GOAL_ID_SCRIPTFOLLOW:
    {
        goal = new (who, grow) zNPCGoalScriptFollow(who);
        break;
    }
    case NPC_GOAL_ID_SCRIPTLEAD:
    {
        goal = new (who, grow) zNPCGoalScriptLead(who);
        break;
    }
    case NPC_GOAL_ID_SCRIPTWAIT:
    {
        goal = new (who, grow) zNPCGoalScriptWait(who);
        break;
    }
    }

    return goal;
}

int32 zNPCGoalScript::Enter(float32 dt, void* updCtxt)
{
    zNPCCommon* npc = (zNPCCommon*)psyche->clt_owner;

    zEntEvent(npc, npc, eEventNPCScript_ScriptReady);

    return zNPCGoalCommon::Enter(dt, updCtxt);
}

int32 zNPCGoalScript::Exit(float32 dt, void* updCtxt)
{
    return xGoal::Exit(dt, updCtxt);
}

int32 zNPCGoalScript::SysEvent(xBase* from, xBase* to, uint32 toEvent, const float32* toParam,
                               xBase* toParamWidget, int32* handled)
{
    return xGoal::SysEvent(from, to, toEvent, toParam, toParamWidget, handled);
}

int32 zNPCGoalScript::NPCMessage(NPCMsg* mail)
{
    xPsyche* psyche = GetPsyche();
    int32 handled = 1;

    switch (mail->msgid)
    {
    case NPC_MID_SCRIPTBEGIN:
    {
        break;
    }
    case NPC_MID_SCRIPTEND:
    {
        psyche->GoalSet(NPC_GOAL_ID_IDLE, 0);
        break;
    }
    case NPC_MID_SCRIPTHALT:
    {
        psyche->GoalPop(NPC_GOAL_ID_SCRIPT, 0);
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