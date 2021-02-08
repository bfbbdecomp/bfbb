#ifndef ZNPCGOALSCRIPT_H
#define ZNPCGOALSCRIPT_H

#include "zNPCGoalCommon.h"

#define NPC_GOAL_ID_SCRIPT NPC_GOAL_ID('S', 0)
#define NPC_GOAL_ID_SCRIPTANIM NPC_GOAL_ID('S', 1)
#define NPC_GOAL_ID_SCRIPTATTACK NPC_GOAL_ID('S', 2)
#define NPC_GOAL_ID_SCRIPTMOVE NPC_GOAL_ID('S', 3)
#define NPC_GOAL_ID_SCRIPTTALK NPC_GOAL_ID('S', 4)
#define NPC_GOAL_ID_SCRIPTFOLLOW NPC_GOAL_ID('S', 5)
#define NPC_GOAL_ID_SCRIPTLEAD NPC_GOAL_ID('S', 6)
#define NPC_GOAL_ID_SCRIPTWAIT NPC_GOAL_ID('S', 7)

struct zNPCGoalScript : zNPCGoalCommon
{
    int32 flg_script;

    zNPCGoalScript(int32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags(0x1C);
    }

    virtual int32 Enter(float32 dt, void* updCtxt);
    virtual int32 Exit(float32 dt, void* updCtxt);
    virtual int32 SysEvent(xBase* from, xBase* to, uint32 toEvent, const float32* toParam,
                           xBase* toParamWidget, int32* handled);
    virtual int32 NPCMessage(NPCMsg* mail);
};

struct zNPCGoalScriptAnim : zNPCGoalCommon
{
    zNPCGoalScriptAnim(int32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags(0x6);
    }
};

struct zNPCGoalScriptAttack : zNPCGoalCommon
{
    zNPCGoalScriptAttack(int32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags(0x6);
    }
};

struct zNPCGoalScriptMove : zNPCGoalCommon
{
    zNPCGoalScriptMove(int32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags(0x6);
    }
};

struct zNPCGoalScriptTalk : zNPCGoalCommon
{
    zNPCGoalScriptTalk(int32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags(0x6);
    }
};

struct zNPCGoalScriptFollow : zNPCGoalCommon
{
    zNPCGoalScriptFollow(int32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags(0x6);
    }
};

struct zNPCGoalScriptLead : zNPCGoalCommon
{
    zNPCGoalScriptLead(int32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags(0x6);
    }
};

struct zNPCGoalScriptWait : zNPCGoalCommon
{
    zNPCGoalScriptWait(int32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags(0x6);
    }
};

xFactoryInst* GOALCreate_Script(int32 who, RyzMemGrow* grow, void*);

#endif