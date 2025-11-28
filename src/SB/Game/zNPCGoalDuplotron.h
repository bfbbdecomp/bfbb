#ifndef ZNPCGOALDUPLOTRON_H
#define ZNPCGOALDUPLOTRON_H

#include "zNPCGoalStd.h"

enum en_dupolive
{
    LIVESTAT_NORMAL,
    LIVESTAT_COUNTDOWN
};

struct zNPCGoalDuploLive : zNPCGoalCommon
{
    F32 tmr_chkPlyrDist;
    S32 cnt_destruct;
    en_dupolive livestat;

    zNPCGoalDuploLive(S32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags(0xC);
    }

    void CheckPlayer();
    void SDS_BigRedButton();
    S32 SDS_Countdown(F32 dt);
    void SDS_StartExplode();

    virtual S32 Enter(F32 dt, void* updCtxt);
    virtual S32 Process(en_trantype* trantype, float dt, void* ctxt, xScene* xscn);
    virtual S32 NPCMessage(NPCMsg* mail);
};

struct zNPCGoalDuploDead : zNPCGoalDead
{
    zNPCGoalDuploDead(S32 goalID) : zNPCGoalDead(goalID)
    {
        SetFlags(0x8);
    }
};

xFactoryInst* GOALCreate_Duplotron(S32 who, RyzMemGrow* grow, void*);

#endif
