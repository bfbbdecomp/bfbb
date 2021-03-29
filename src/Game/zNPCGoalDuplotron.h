#ifndef ZNPCGOALDUPLOTRON_H
#define ZNPCGOALDUPLOTRON_H

#include "zNPCGoalCommon.h"
#include "zNPCGoalStd.h"

enum en_dupolive
{
    LIVESTAT_NORMAL,
    LIVESTAT_COUNTDOWN
};

struct zNPCGoalDuploLive : zNPCGoalCommon
{
    float32 tmr_chkPlyrDist;
    int32 cnt_destruct;
    en_dupolive livestat;

    zNPCGoalDuploLive(int32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags(0xC);
    }

    void CheckPlayer();
    void SDS_BigRedButton();
    int32 SDS_Countdown(float32 dt);
    void SDS_StartExplode();

    virtual int32 Enter(float32 dt, void* updCtxt);
    virtual int32 Process(en_trantype* trantype, float dt, void* ctxt, xScene* xscn);
    virtual int32 NPCMessage(NPCMsg* mail);
};

struct zNPCGoalDuploDead : zNPCGoalDead
{
    zNPCGoalDuploDead(int32 goalID) : zNPCGoalDead(goalID)
    {
        SetFlags(0x8);
    }
};

xFactoryInst* GOALCreate_Duplotron(int32 who, RyzMemGrow* grow, void*);

#endif