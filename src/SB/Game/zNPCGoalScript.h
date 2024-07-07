#ifndef ZNPCGOALSCRIPT_H
#define ZNPCGOALSCRIPT_H

#include "zNPCGoalCommon.h"

struct zNPCGoalScript : zNPCGoalCommon
{
    S32 flg_script;

    zNPCGoalScript(S32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags(0x1C);
    }

    virtual S32 Enter(F32 dt, void* updCtxt);
    virtual S32 Exit(F32 dt, void* updCtxt);
    virtual S32 SysEvent(xBase* from, xBase* to, U32 toEvent, const F32* toParam,
                           xBase* toParamWidget, S32* handled);
    virtual S32 NPCMessage(NPCMsg* mail);
};

struct zNPCGoalScriptAnim : zNPCGoalCommon
{
    zNPCGoalScriptAnim(S32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags(0x6);
    }
};

struct zNPCGoalScriptAttack : zNPCGoalCommon
{
    zNPCGoalScriptAttack(S32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags(0x6);
    }
};

struct zNPCGoalScriptMove : zNPCGoalCommon
{
    zNPCGoalScriptMove(S32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags(0x6);
    }
};

struct zNPCGoalScriptTalk : zNPCGoalCommon
{
    zNPCGoalScriptTalk(S32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags(0x6);
    }
};

struct zNPCGoalScriptFollow : zNPCGoalCommon
{
    zNPCGoalScriptFollow(S32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags(0x6);
    }
};

struct zNPCGoalScriptLead : zNPCGoalCommon
{
    zNPCGoalScriptLead(S32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags(0x6);
    }
};

struct zNPCGoalScriptWait : zNPCGoalCommon
{
    zNPCGoalScriptWait(S32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags(0x6);
    }
};

xFactoryInst* GOALCreate_Script(S32 who, RyzMemGrow* grow, void*);

#endif
