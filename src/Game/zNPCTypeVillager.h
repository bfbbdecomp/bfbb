#ifndef ZNPCTYPEVILLAGER_H
#define ZNPCTYPEVILLAGER_H

#include "zNPCTypeCommon.h"
#include "zNPCSupport.h"
#include "zTaskBox.h"
#include "zPlatform.h"
#include "../Core/x/xShadow.h"

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
    int32 current_talk_anim;

    zNPCVillager(int32 myType);
};

struct zNPCFish : zNPCVillager
{
    NPCTarget tgt_robonear;
    float32 tmr_robonear;
    float32 tmr_checkagain;
    xEntDrive raw_drvdata;

    zNPCFish(int32 myType);
};

struct zNPCBubbleBuddy : zNPCFish
{
    zNPCBubbleBuddy(int32 myType);
};

struct zNPCBalloonBoy : zNPCFish
{
    int32 specialBalloon;
    zPlatform* plat_balloons;
    xShadowCache* shadCache;

    zNPCBalloonBoy(int32 myType);
};

struct zNPCSandyBikini : zNPCVillager
{
    float32 tmr_leakCycle;

    zNPCSandyBikini(int32 myType);
};

struct zNPCMerManChair : zNPCVillager
{
    int32 flg_mermanchair;

    zNPCMerManChair(int32 myType);
};

struct zNPCNewsFish : zNPCVillager
{
    struct say_data
    {
        int32 total;
        int32 prev_total;
    };

    say_data said[71];
    uint8 was_reset;
    uint32 soundHandle;
    uint32 currSoundID;
    uint32 nextSoundID;
    float32 jawTime;
    void* jawData;
    uint32 newsfishFlags;
    xVec2 onScreenCoords;
    xVec2 offScreenCoords;
    xVec2 screenCoords;
    float32 screenSize;
    float32 screenRot;
    float32 appearSpeed;
    float32 disappearSpeed;
    float32 screenLerp;

    zNPCNewsFish(int32 myType);
};

struct zNPCNewsFishTV : zNPCVillager
{
    zNPCNewsFishTV(int32 myType);
};

void ZNPC_Villager_Startup();
void ZNPC_Villager_Shutdown();
xFactoryInst* ZNPC_Create_Villager(int32 who, RyzMemGrow* growCtxt, void*);
void ZNPC_Destroy_Villager(xFactoryInst* inst);

#endif