#ifndef ZNPCTYPEVILLAGER_H
#define ZNPCTYPEVILLAGER_H

#include "zNPCTypeCommon.h"
#include "zNPCSupport.h"
#include "zTaskBox.h"
#include "zPlatform.h"
#include "../Core/x/xShadow.h"

#define NPC_TYPE_ID_VILLAGER NPC_TYPE_ID('S', 1)
#define NPC_TYPE_ID_FISH0 NPC_TYPE_ID('F', 0)
#define NPC_TYPE_ID_FISH1 NPC_TYPE_ID('F', 1)
#define NPC_TYPE_ID_FISH2 NPC_TYPE_ID('F', 2)
#define NPC_TYPE_ID_FISH3 NPC_TYPE_ID('F', 3)
#define NPC_TYPE_ID_FISH4 NPC_TYPE_ID('F', 4)
#define NPC_TYPE_ID_FISH5 NPC_TYPE_ID('F', 5)
#define NPC_TYPE_ID_FISH6 NPC_TYPE_ID('F', 6)
#define NPC_TYPE_ID_BALLOONBOY NPC_TYPE_ID('F', 7)
#define NPC_TYPE_ID_FISH8 NPC_TYPE_ID('F', 8)
#define NPC_TYPE_ID_FISH9 NPC_TYPE_ID('F', 9)
#define NPC_TYPE_ID_FISH10 NPC_TYPE_ID('F', 10)
#define NPC_TYPE_ID_FISH11 NPC_TYPE_ID('F', 11)
#define NPC_TYPE_ID_FISH12 NPC_TYPE_ID('F', 12)
#define NPC_TYPE_ID_SANDYBIKINI NPC_TYPE_ID('F', 13)
#define NPC_TYPE_ID_FISH14 NPC_TYPE_ID('F', 14)
#define NPC_TYPE_ID_FISH15 NPC_TYPE_ID('F', 15)
#define NPC_TYPE_ID_FISH16 NPC_TYPE_ID('F', 16)
#define NPC_TYPE_ID_FISH17 NPC_TYPE_ID('F', 17)
#define NPC_TYPE_ID_FISH18 NPC_TYPE_ID('F', 18)
#define NPC_TYPE_ID_FISH19 NPC_TYPE_ID('F', 19)
#define NPC_TYPE_ID_FISH20 NPC_TYPE_ID('F', 20)
#define NPC_TYPE_ID_BUBBLEBUDDY NPC_TYPE_ID('F', 21)
#define NPC_TYPE_ID_NEWSFISH NPC_TYPE_ID('F', 22)
#define NPC_TYPE_ID_NEWSFISHTV NPC_TYPE_ID('F', 23)
#define NPC_TYPE_ID_FISH24 NPC_TYPE_ID('F', 24)
#define NPC_TYPE_ID_MERMANCHAIR NPC_TYPE_ID('F', 25)
#define NPC_TYPE_ID_FISH26 NPC_TYPE_ID('F', 26)
#define NPC_TYPE_ID_FISH27 NPC_TYPE_ID('F', 27)
#define NPC_TYPE_ID_FISH28 NPC_TYPE_ID('F', 28)

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