#ifndef ZNPCTYPEVILLAGER_H
#define ZNPCTYPEVILLAGER_H

#include "zNPCSndLists.h"
#include "zNPCSupport.h"
#include "zNPCTypeCommon.h"
#include "zTaskBox.h"
#include "zPlatform.h"
#include "xShadow.h"

struct HiThere : ztaskbox::callback
{
    HiThere() : ztaskbox::callback()
    {
    }

    zNPCCommon* npc;

    virtual void on_talk_start();
    virtual void on_talk_stop();
};

struct zNPCVillager : zNPCCommon
{
    HiThere hithere;
    ztaskbox* converse; //0x2a8
    S32 current_talk_anim;

    zNPCVillager(S32 myType) : zNPCCommon(myType)
    {
    }

    void FindMyConverse();
    U8 ColPenByFlags() const;
    U8 ColChkByFlags() const;
    U8 ColPenFlags() const;
    U8 PhysicsFlags() const;
    void Init(xEntAsset*);
    void Reset();
    void ParseINI();
    void ParseNonRandTalk();
    void Process(xScene* xscn, F32 dt);
    void SelfSetup();
    void SpeakBegin();
    void SpeakEnd();
    void TossMyConverse();
    S32 PlayerIsStaring();
    void ChkCheatSize();
    F32 GenShadCacheRad();
};

struct zNPCFish : zNPCVillager
{
    NPCTarget tgt_robonear;
    F32 tmr_robonear;
    F32 tmr_checkagain;
    xEntDrive raw_drvdata;

    zNPCFish(S32 myType) : zNPCVillager(myType)
    {
    }

    void Init(xEntAsset*);
    void ParseINI();
    void FishSoundTables();
    void CheckDoChat();
    void Reset();
    void SelfSetup();
    xEntDrive* PRIV_GetDriverData();
};

struct zNPCBubbleBuddy : zNPCFish
{
    zNPCBubbleBuddy(S32 myType) : zNPCFish(myType)
    {
    }

    void Init(xEntAsset*);
    void Setup();
    void Reset();
    void RenderExtra();
    void Render();

    static RwRaster* rast_fresnel;
    static RwRaster* rast_enviro;
    static U32 aid_fresnelTxtr;
    static RwTexture* txtr_fresnel;
    static U32 aid_enviroTxtr;
    static RwTexture* txtr_enviro;
};

enum en_BBOY_PLATANIM
{
    BBOY_PLATANIM_MOVE,
    BBOY_PLATANIM_HIT,
    BBOY_PLATANIM_NOMORE,
    BBOY_PLATANIM_FORCE = 0x7FFFFFFF,
};

struct zNPCBalloonBoy : zNPCFish
{
    S32 specialBalloon;
    zPlatform* plat_balloons;
    xShadowCache* shadCache;
    static RwRaster* rast_shadBalloon;

    zNPCBalloonBoy(S32 myType) : zNPCFish(myType)
    {
    }

    void Init(xEntAsset* asset);
    void Reset();
    void SelfSetup();
    void Render();
    void PlatShadRend();
    void AddBallooning(xPsyche* psy);
    void PlatAnimSet(en_BBOY_PLATANIM anim);
    void PlatAnimSync();
};

struct zNPCSandyBikini : zNPCVillager
{
    F32 tmr_leakCycle; //0x2b0

    zNPCSandyBikini(S32 myType) : zNPCVillager(myType)
    {
    }

    void Reset();
    void Process(xScene* xscn, F32 dt);
    void VFXLeakyFaucet(F32 dt);
};

struct zNPCMerManChair : zNPCVillager
{
    S32 flg_mermanchair;

    zNPCMerManChair(S32 myType) : zNPCVillager(myType)
    {
    }

    void Init(xEntAsset*);
    U8 PhysicsFlags() const;
    U8 ColPenFlags() const;
    U8 ColChkFlags() const;
};

struct zNPCNewsFish : zNPCVillager
{
    struct say_data
    {
        S32 total;
        S32 prev_total;
    };

    enum say_enum
    {
        INVALID_SAY = -1,
        SAY_B101_01 = 0,
        SAY_B101_02 = 1,
        SAY_B101_03 = 2,
        SAY_B101_04 = 3,
        SAY_B101_05 = 4,
        SAY_B101_06 = 5,
        SAY_B101_07 = 6,
        SAY_B101_08 = 7,
        SAY_B101_09 = 8,
        SAY_B101_10 = 9,
        SAY_B101_11 = 10,
        SAY_B101_12 = 11,
        SAY_B101_13 = 12,
        SAY_B101_14 = 13,
        SAY_B101_15 = 14,
        SAY_B101_16 = 15,
        SAY_B201_01 = 16,
        SAY_B201_02 = 17,
        SAY_B201_03 = 18,
        SAY_B201_04 = 19,
        SAY_B201_05 = 20,
        SAY_B201_06 = 21,
        SAY_B201_07 = 22,
        SAY_B303_INTRO_1 = 23,
        SAY_B303_INTRO_2 = 24,
        SAY_B303_FUSE_NEAR = 25,
        SAY_B303_FUSE_HIT = 26,
        SAY_B303_BRAIN_HELP_1 = 27,
        SAY_B303_BRAIN_HELP_2 = 28,
        SAY_B303_BRAIN_HELP_3 = 29,
        SAY_HIT_PLAYER_1 = 30,
        SAY_HIT_PLAYER_2 = 31,
        SAY_HIT_PLAYER_3 = 32,
        SAY_HIT_PLAYER_4 = 33,
        SAY_HIT_PLAYER_5 = 34,
        SAY_HIT_PLAYER_6 = 35,
        SAY_BOWL_HIT_1 = 36,
        SAY_BOWL_HIT_2 = 37,
        SAY_BOWL_HIT_3 = 38,
        SAY_BOWL_HIT_4 = 39,
        SAY_BOWL_HIT_5 = 40,
        SAY_BOWL_HELP = 41,
        SAY_HIT_BOSS_1 = 42,
        SAY_HIT_BOSS_2 = 43,
        SAY_SANDY_SPLIT = 44,
        SAY_SANDY_FLY = 45,
        SAY_SB_VICTORY = 46,
        SAY_SB_ROUGH_RIDE = 47,
        SAY_SB_BACK = 48,
        SAY_SB_HIT_FAIL_1 = 49,
        SAY_SB_HIT_FAIL_2 = 50,
        SAY_SB_HIT_BOSS_1 = 51,
        SAY_SB_HIT_BOSS_2 = 52,
        SAY_SB_HIT_BOSS_3 = 53,
        SAY_SB_VULN_1 = 54,
        SAY_SB_VULN_2 = 55,
        SAY_SB_VULN_3 = 56,
        SAY_SB_VULN_4 = 57,
        SAY_SB_VULN_5 = 58,
        SAY_ROBOT_TACTICS = 59,
        SAY_ROBOT_HIT_FAIL = 60,
        SAY_ROBOT_DIZZY = 61,
        SAY_ROBOT_STUN_1 = 62,
        SAY_ROBOT_STUN_2 = 63,
        SAY_ROBOT_STUN_3 = 64,
        SAY_ROBOT_HIT = 65,
        SAY_ROBOT_VULN_1 = 66,
        SAY_ROBOT_VULN_2 = 67,
        SAY_SPIN = 68,
        SAY_B302_INTRO = 69,
        SAY_HIT_LAST = 70,
        MAX_SAY = 71,
    };

    say_data said[71];
    U8 was_reset;
    U32 soundHandle; //0x4ec
    U32 currSoundID; //0x4f0
    U32 nextSoundID; //0x4f4
    F32 jawTime; //0x4f8
    void* jawData;
    U32 newsfishFlags; //0x500
    xVec2 onScreenCoords;
    xVec2 offScreenCoords;
    xVec2 screenCoords;
    F32 screenSize;
    F32 screenRot;
    F32 appearSpeed;
    F32 disappearSpeed;
    F32 screenLerp;
    S32 IsTalking();
    void reset_said();

    zNPCNewsFish(S32 myType) : zNPCVillager(myType)
    {
    }

    // Vtable Information
    // 0x00000000; // 0x0
    // 0x00000000; // 0x4
    void Init(xEntAsset*); // 0x8 zNPCNewsFish
    void PostInit(); // 0xC xNPCBasic
    void Setup(); // 0x10 zNPCCommon
    void PostSetup(); // 0x14 zNPCNewsFish
    void Reset(); // 0x18 zNPCNewsFish
    void Process(xScene*, F32); // 0x1C zNPCNewsFish
    void BUpdate(xVec3*); // 0x20 zNPCCommon
    void NewTime(xScene*, F32); // 0x24 zNPCCommon
    void Move(xScene*, F32, xEntFrame*); // 0x28 zNPCCommon
    S32 SysEvent(xBase*, xBase*, U32, const F32*, xBase*, S32*); // 0x2C zNPCCommon
    void Render(); // 0x30 zNPCNewsFish
    void Save(xSerial*) const; // 0x34 xNPCBasic
    void Load(xSerial*); // 0x38 xNPCBasic
    void CollideReview(); // 0x3C zNPCVillager
    U8 ColChkFlags() const; // 0x40 zNPCVillager
    U8 ColPenFlags() const; // 0x44 zNPCVillager
    U8 ColChkByFlags() const; // 0x48 zNPCVillager
    U8 ColPenByFlags() const; // 0x4C zNPCVillager
    U8 PhysicsFlags() const; // 0x50 zNPCVillager
    void Destroy(); // 0x54 zNPCCommon
    S32 NPCMessage(NPCMsg*); // 0x58 zNPCVillager
    void RenderExtra(); // 0x5C zNPCCommon
    void RenderExtraPostParticles(); // 0x60 zNPCCommon
    void ParseINI(); // 0x64 zNPCVillager
    void ParseLinks(); // 0x68 zNPCCommon
    void ParseProps(); // 0x6C zNPCCommon
    void SelfSetup(); // 0x70 zNPCNewsFish
    void SelfDestroy(); // 0x74 zNPCCommon
    S32 IsHealthy(); // 0x78 zNPCCommon
    S32 IsAlive(); // 0x7C zNPCCommon
    void Damage(en_NPC_DAMAGE_TYPE, xBase*, const xVec3*); // 0x80 zNPCCommon
    S32 Respawn(const xVec3*, zMovePoint*, zMovePoint*); // 0x84 zNPCCommon
    void DuploOwner(zNPCCommon*); // 0x88 zNPCCommon
    void DuploNotice(en_SM_NOTICES, void*); // 0x8C zNPCCommon
    S32 CanRope(); // 0x90 zNPCCommon
    void LassoNotify(en_LASSO_EVENT); // 0x94 zNPCCommon
    S32 SetCarryState(en_NPC_CARRY_STATE); // 0x98 zNPCCommon
    void Stun(F32); // 0x9C zNPCCommon
    void SpeakBegin(); // 0xA0 zNPCVillager
    void SpeakEnd(); // 0xA4 zNPCVillager
    void SpeakStart(U32 sndid, U32 sndhandle, S32 anim); // 0xA8 zNPCNewsFish
    void SpeakStop(); // 0xAC zNPCNewsFish
    U32 AnimPick(S32, en_NPC_GOAL_SPOT, xGoal*); // 0xB0 zNPCVillager
    void GetParm(en_npcparm, void*); // 0xB4 zNPCCommon
    S32 GetParmDefault(en_npcparm, void*); // 0xB8 zNPCCommon
    F32 GenShadCacheRad(); // 0xBC zNPCVillager
    xEntDrive* PRIV_GetDriverData(); // 0xC0 zNPCCommon
    zNPCLassoInfo* PRIV_GetLassoData(); // 0xC4 zNPCCommon
    S32 LassoSetup(); // 0xC8 zNPCCommon
    void FolkHandleMail(NPCMsg*); // 0xCC zNPCVillager

    void TalkOnScreen(S32 talkOnScreen);
    zNPCNewsFish* get_said(zNPCNewsFish::say_enum);
};

struct zNPCNewsFishTV : zNPCVillager
{
    zNPCNewsFishTV(S32 myType) : zNPCVillager(myType)
    {
    }

    U8 PhysicsFlags() const;
    U8 ColPenByFlags() const;
    U8 ColChkByFlags() const;
    U8 ColPenFlags() const;
    U8 ColChkFlags() const;
};

xAnimTable* ZNPC_AnimTable_Villager();
xAnimTable* ZNPC_AnimTable_Villager(xAnimTable* callerTable);
void zNPCBubbleBuddy_AlphaUpdate(F32 dt);
xAnimTable* ZNPC_AnimTable_BalloonBoy();
xAnimTable* ZNPC_AnimTable_BalloonBoy(xAnimTable* callerTable);
xAnimTable* ZNPC_AnimTable_SuperFriend();
xAnimTable* ZNPC_AnimTable_SuperFriend(xAnimTable* callerTable);
S32 FOLK_grul_goAlert(xGoal*, void*, en_trantype*, F32, void*);
void FOLK_KillEffects();
void FOLK_InitEffects();
void zNPCVillager_ScenePostInit();
void zNPCVillager_ScenePrepare();
void zNPCVillager_SceneReset();
void ZNPC_Villager_Startup();
void ZNPC_Villager_Shutdown();
xFactoryInst* ZNPC_Create_Villager(S32 who, RyzMemGrow* growCtxt, void*);
void ZNPC_Destroy_Villager(xFactoryInst* inst);
S32 zParamGetF32List(xModelAssetParam* parmdata, U32 pdatsize, const char* str32, S32 found,
                     F32* non_choices, F32 len_mvptspline);
void zNPCVillager_SceneFinish();
void zNPCVillager_SceneTimestep(xScene* xscn, F32 dt);

#endif
