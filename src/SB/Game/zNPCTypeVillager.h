#ifndef ZNPCTYPEVILLAGER_H
#define ZNPCTYPEVILLAGER_H

#include "zNPCTypeCommon.h"
#include "zNPCSupport.h"
#include "zTaskBox.h"
#include "zPlatform.h"
#include "xShadow.h"

struct HiThere : ztaskbox::callback
{
    zNPCCommon* npc;

    virtual void on_talk_start();
    virtual void on_talk_stop();
};

struct zNPCVillager : zNPCCommon
{
    HiThere hithere;
    ztaskbox* converse;
    S32 current_talk_anim;

    zNPCVillager(S32 myType);
};

struct zNPCFish : zNPCVillager
{
    NPCTarget tgt_robonear;
    F32 tmr_robonear;
    F32 tmr_checkagain;
    xEntDrive raw_drvdata;

    zNPCFish(S32 myType);
};

struct zNPCBubbleBuddy : zNPCFish
{
    zNPCBubbleBuddy(S32 myType);
};

struct zNPCBalloonBoy : zNPCFish
{
    S32 specialBalloon;
    zPlatform* plat_balloons;
    xShadowCache* shadCache;

    zNPCBalloonBoy(S32 myType);
};

struct zNPCSandyBikini : zNPCVillager
{
    F32 tmr_leakCycle;

    zNPCSandyBikini(S32 myType);
};

struct zNPCMerManChair : zNPCVillager
{
    S32 flg_mermanchair;

    zNPCMerManChair(S32 myType);
};

struct zNPCNewsFish : zNPCVillager
{
    struct say_data
    {
        S32 total;
        S32 prev_total;
    };

    say_data said[71];
    U8 was_reset;
    U32 soundHandle;
    U32 currSoundID;
    U32 nextSoundID;
    F32 jawTime;
    void* jawData;
    U32 newsfishFlags;
    xVec2 onScreenCoords;
    xVec2 offScreenCoords;
    xVec2 screenCoords;
    F32 screenSize;
    F32 screenRot;
    F32 appearSpeed;
    F32 disappearSpeed;
    F32 screenLerp;

    zNPCNewsFish(S32 myType);
};

struct zNPCNewsFishTV : zNPCVillager
{
    zNPCNewsFishTV(S32 myType);
};

xAnimTable* ZNPC_AnimTable_Villager(xAnimTable* callerTable);
void zNPCBubbleBuddy_AlphaUpdate(F32 dt);
xAnimTable* ZNPC_AnimTable_BalloonBoy(xAnimTable* callerTable);
xAnimTable* ZNPC_AnimTable_SuperFriend(xAnimTable* callerTable);
void FOLK_KillEffects();
void FOLK_InitEffects();
void ZNPC_Villager_Startup();
void ZNPC_Villager_Shutdown();
xFactoryInst* ZNPC_Create_Villager(S32 who, RyzMemGrow* growCtxt, void*);
void ZNPC_Destroy_Villager(xFactoryInst* inst);

#endif
