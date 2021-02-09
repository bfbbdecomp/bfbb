#ifndef ZNPCGOALSCRIPT_H
#define ZNPCGOALSCRIPT_H

#include "zNPCGoalCommon.h"

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