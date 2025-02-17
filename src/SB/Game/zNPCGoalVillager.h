#ifndef ZNPCGOALVILLAGER_H
#define ZNPCGOALVILLAGER_H

#include "xSFX.h"
#include "zNPCGlyph.h"
#include "zNPCGoalCommon.h"
#include "zNPCGoalStd.h"

struct zNPCGoalCheer : zNPCGoalLoopAnim
{
    zNPCGoalCheer(S32 goalID) : zNPCGoalLoopAnim(goalID)
    {
        SetFlags(1 << 1);
    }

    virtual S32 Enter(F32 dt, void* updCtxt);
    virtual S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene);
};

struct zNPCGoalHurt : zNPCGoalPushAnim
{
    zNPCGoalHurt(S32 goalID) : zNPCGoalPushAnim(goalID)
    {
        SetFlags(1 << 1);
    }

    void ChkRewardCheat();

    virtual S32 Enter(F32 dt, void* updCtxt);
    virtual S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene);
};

// FIXME: Put this in somewhere.
struct NPCWidget;

struct zNPCGoalPlayerNear : zNPCGoalCommon
{
    S32 flg_plyrnear;
    NPCGlyph* talk_glyph;
    NPCWidget* talk_font;
    F32 tmr_actBored;

    zNPCGoalPlayerNear(S32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags((1 << 3) | (1 << 2));
    }

    void ChkCheatMedic();
    void DoCheatPanHandle();
    void ChkCheatDogTrix(S32* goal, en_trantype* trantype);

    virtual S32 NPCMessage(NPCMsg* mail);
};

struct zNPCGoalTalk : zNPCGoalCommon
{
    F32 tmr_cycleAnim;
    F32 tmr_minTalk;
    S32 stopTalking;
    S32 killAndExit;
    xSFX* sfx_curTalk;
    U32 aid_curSound;
    xVec3 pos_maintain;
    void* jawdata;
    F32 jawtime;

    zNPCGoalTalk(S32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags(1 << 1);
    }

    void StartSFX(xSFX* sfx);

    virtual S32 Enter(F32 dt, void* updCtxt);
    virtual S32 Exit(F32 dt, void* updCtxt);
    virtual S32 NPCMessage(NPCMsg* mail);
};

struct zNPCGoalChatter : zNPCGoalCommon
{
    U32 sid_played;
    U32 playThisSound;

    zNPCGoalChatter(S32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags(1 << 1);
    }
};

struct zNPCGoalSpeak : zNPCGoalCommon
{
    F32 tmr_cycleAnim;
    xVec3 pos_maintain;
    void* jawdata;
    F32 jawtime;

    zNPCGoalSpeak(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    virtual S32 Enter(F32 dt, void* updCtxt);
    virtual S32 Exit(F32 dt, void* updCtxt);
    virtual S32 NPCMessage(NPCMsg* mail);
};

struct zNPCGoalBalloon : zNPCGoalCommon
{
    zNPCGoalBalloon(S32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags((1 << 3) | (1 << 2));
        AddFlags(1 << 17);
    }

    virtual S32 Enter(F32 dt, void* updCtxt);
    virtual S32 Exit(F32 dt, void* updCtxt);
    virtual S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene);
    virtual S32 NPCMessage(NPCMsg* mail);
};

struct zNPCGoalBoyRide : zNPCGoalCommon
{
    zNPCGoalBoyRide(S32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags(1 << 1);
    }

    virtual S32 Enter(F32 dt, void* updCtxt);
    virtual S32 Exit(F32 dt, void* updCtxt);
    virtual S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene);
    virtual S32 NPCMessage(NPCMsg* mail);
};

struct zNPCGoalBoyFall : zNPCGoalCommon
{
    S32 hitGround;

    zNPCGoalBoyFall(S32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags(1 << 1);
        flg_npcgable |= (1 << 0);
    }

    virtual S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene);
    virtual U8 CollReview(void*);
};

struct zNPCGoalBoyWeep : zNPCGoalCommon
{
    F32 tmr_weep;
    F32 ang_spinrate;

    zNPCGoalBoyWeep(S32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags(1 << 1);
    }

    virtual S32 Enter(F32 dt, void* updCtxt);
    virtual S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene);
    virtual S32 NPCMessage(NPCMsg* mail);
};

struct zNPCGoalBoySwim : zNPCGoalCommon
{
    zNPCGoalBoySwim(S32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags(1 << 1);
    }
};

struct NPCSndProp
{
    en_NPC_SOUND sndtype;
    int flg_snd;
    float tym_delayNext;
};

xFactoryInst* GOALCreate_Villager(S32 who, RyzMemGrow* grow, void*);

#endif
