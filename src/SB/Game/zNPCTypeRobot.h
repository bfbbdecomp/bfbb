#ifndef ZNPCTYPEROBOT_H
#define ZNPCTYPEROBOT_H

#include "xPad.h"
#include "xModel.h"

#include "zNPCTypeCommon.h"
#include "zNPCSupport.h"
#include "zNPCGlyph.h"
#include "zNPCHazard.h"

typedef struct zNPCRobot;

struct NPCArena
{
    int32 flg_arena;
    xVec3 pos_arena;
    float32 rad_arena;
    zMovePoint* nav_arena;
    zMovePoint* nav_refer_dest;
    zMovePoint* nav_refer_curr;

    void SetHome(zNPCCommon* npc, xVec3* pos, float32 rad);
    void SetHome(zNPCCommon* npc, zMovePoint* nav);
    int32 Cycle(zNPCCommon* npc, int32 peek);
    int32 NeedToCycle(zNPCCommon* npc);
    float32 DstSqFromHome(xVec3* pos, xVec3* delt);
    float32 PctFromHome(xVec3* pos);
    int32 IncludesPos(xVec3* pos, float32 rad_thresh, xVec3* vec);
    float32 Radius(float32 unk);
    xVec3* Pos();
    int32 IncludesPlayer(float32 rad_thresh, xVec3* vec);
    int32 IsReady();
    void DBG_Draw(zNPCCommon*);
};

struct NPCLaser
{
    RwRaster* rast_laser;
    float32 radius[2];
    float32 uv_scroll[2];
    RwRGBA rgba[2];
    float32 uv_base[2];

    void ColorSet(const RwRGBA*, const RwRGBA*);
};

struct NPCBattle
{
    zNPCRobot* members[5];
    void JoinBattle(zNPCRobot*);
    void LeaveBattle(zNPCRobot*);
};

struct zNPCRobot : zNPCCommon
{
    int32 hitpoints;
    float32 tmr_safetime;
    NPCArena arena;
    NPCBattle* inf_battle;
    int32 idx_neckBone;
    float32 tmr_stunned;
    NPCGlyph* glyf_stun;
    int32 cnt_nextemit;
    xVec3 vel_bunnyhop;
    zNPCLassoInfo raw_lassoinfo;
    xEntDrive raw_drvdata;

    zNPCRobot(int32);

    int32 LaunchProjectile(en_npchaz haztyp, float32 spd_proj, float32 dst_minRange,
                           en_mdlvert idx_mvtx, float32 tym_predictMax, float32 hyt_offset);
    void ShowerConfetti(xVec3* pos);
    float32 MoveTowardsArena(float32 dt, float32 speed);
    void CornerOfArena(xVec3* pos_corner, float32 dst);
    float32 FaceAntiPlayer(float32 dt, float32 spd_turn);
    float32 FacePos(xVec3* pos, float32 dt, float32 spd_turn);
    void TurnThemHeads();
    void InflictPain(int32 numHitPoints, int32 giveCreditToPlayer);
    void LassoNotify(en_LASSO_EVENT event);
    void SyncStunGlyph(float32 tmr_remain, float32 height);
    void AddStunThrow(xPsyche* psy,
                      int32 (*eval_evilpat)(xGoal*, void*, en_trantype*, float32, void*),
                      int32 (*eval_stunned)(xGoal*, void*, en_trantype*, float32, void*),
                      int32 (*eval_patcarry)(xGoal*, void*, en_trantype*, float32, void*),
                      int32 (*eval_patthrow)(xGoal*, void*, en_trantype*, float32, void*));
    void AddLassoing(xPsyche*, int (*)(xGoal*, void*, en_trantype*, float, void*),
                     int (*)(xGoal*, void*, en_trantype*, float, void*),
                     int (*)(xGoal*, void*, en_trantype*, float, void*),
                     int (*)(xGoal*, void*, en_trantype*, float, void*),
                     int (*)(xGoal*, void*, en_trantype*, float, void*));
    void AddDamage(xPsyche*, int (*)(xGoal*, void*, en_trantype*, float, void*),
                   int (*)(xGoal*, void*, en_trantype*, float, void*),
                   int (*)(xGoal*, void*, en_trantype*, float, void*),
                   int (*)(xGoal*, void*, en_trantype*, float, void*),
                   int (*)(xGoal*, void*, en_trantype*, float, void*));
    void AddSpawning(xPsyche*, int (*)(xGoal*, void*, en_trantype*, float, void*),
                     int (*)(xGoal*, void*, en_trantype*, float, void*));
    void AddMiscTypical(xPsyche*, int (*)(xGoal*, void*, en_trantype*, float, void*),
                        int (*)(xGoal*, void*, en_trantype*, float, void*),
                        int (*)(xGoal*, void*, en_trantype*, float, void*));
    void CheckFalling();
    void DoAliveStuff(float32 dt);
    int32 IsWounded();
    int32 IsDead();

    // vTable (xNPCBasic)

    void Init(xEntAsset* asset);
    void Reset();
    void Process(xScene* xscn, float32 dt);
    void NewTime(xScene* xscn, float32 dt);
    int32 SysEvent(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget,
                   int32* handled);
    void CollideReview();
    uint8 PhysicsFlags() const;
    uint8 ColPenFlags() const;
    uint8 ColChkFlags() const;

    // vTable (zNPCCommon)

    int32 NPCMessage(NPCMsg* mail);
    void RenderExtra();
    void RenderExtraPostParticles();
    void ParseINI();
    void ParseLinks();
    void ParseProps();
    void SelfSetup();
    void SelfDestroy();
    int32 IsHealthy();
    int32 IsAlive();
    void Damage(en_NPC_DAMAGE_TYPE damtype, xBase* who, xVec3* vec_hit);
    int32 Respawn(xVec3* pos, zMovePoint* mvptFirst, zMovePoint* mvptSpawnRef);
    void DuploOwner(zNPCCommon* duper);
    int32 SetCarryState(en_NPC_CARRY_STATE stat);
    void Stun(float32 stuntime);
    float32 GenShadCacheRad();
    xEntDrive* PRIV_GetDriverData();
    zNPCLassoInfo* PRIV_GetLassoData();
    int32 LassoSetup();

    float32 FacePlayer(float32 dt, float32 spd_turn);

    // vTable (zNPCRobot)
    virtual int32 RoboHandleMail(NPCMsg* mail);
    virtual int32 IsDying();
    virtual void LassoModelIndex(int32* idxgrab, int32* idxhold);
};

struct zNPCFodder : zNPCRobot
{
    zNPCFodder(int32 myType);
    void Stun(float32 stuntime);
    uint32 AnimPick(int32 gid, en_NPC_GOAL_SPOT gspot, xGoal* rawgoal);
    void SelfSetup();
    void ParseINI();
    void Init(xEntAsset* asset);
    zNPCLassoInfo* PRIV_GetLassoData();
    void LassoModelIndex(int32* idxgrab, int32* idxhold);
};

struct zNPCFodBomb : zNPCRobot
{
    NPCBlinker blinker;

    zNPCFodBomb(int32 myType);
};

struct zNPCFodBzzt : zNPCRobot
{
    RwRGBA rgba_discoLight;
    float32 tmr_discoLight;
    xVec3 pos_discoLight;
    float32 uv_discoLight[2];

    zNPCFodBzzt(int32 myType);
};

struct zNPCChomper : zNPCRobot
{
    int32 cnt_spurt;
    int32 cnt_skipEmit;

    zNPCChomper(int32 myType);
};

struct zNPCCritter : zNPCRobot
{
    zNPCCritter(int32 myType);
};

struct zNPCHammer : zNPCRobot
{
    zNPCHammer(int32 myType);
};

struct zNPCTarTar : zNPCRobot
{
    zNPCTarTar(int32 myType);
};

struct zNPCGlove : zNPCRobot
{
    zNPCGlove(int32 myType);
};

struct zNPCMonsoon : zNPCRobot
{
    zNPCMonsoon(int32 myType);
};

struct zNPCSleepy : zNPCRobot
{
    int32 flg_sleepy;
    NPCHazard* haz_patriot;
    float32 tmr_nextPatriot;
    RwRGBA rgba_coneColor;
    float32 tmr_angry;
    float32 tmr_emitzeez;
    float32 cnt_grpzeez;

    zNPCSleepy(int32 myType);
};

struct zNPCArfDog : zNPCRobot
{
    NPCBlinker blinkHead;
    NPCBlinker blinkTail;

    zNPCArfDog(int32 myType);
};

struct zNPCArfArf : zNPCRobot
{
    int32 flg_puppy[5];
    zNPCArfDog* pup_kennel[5];

    zNPCArfArf(int32 myType);
    zMovePoint* GetTelepoint(int32 unk);
};

struct zNPCChuck : zNPCRobot
{
    xVec3 dir_attack;

    zNPCChuck(int32 myType);
};

enum en_tubestat
{
    TUBE_STAT_UNKNOWN,
    TUBE_STAT_DUCKLING,
    TUBE_STAT_ATTACK,
    TUBE_STAT_LASSO,
    TUBE_STAT_DYING,
    TUBE_STAT_DEAD,
    TUBE_STAT_BORN,
    TUBE_STAT_NOMORE,
    TUBE_STAT_FORCE = 0x7fffffff
};

struct zNPCTubeSlave;

struct TubeNotice : xPSYNote
{
    zNPCCommon* npc;

    TubeNotice();

    virtual void Notice(en_psynote note, xGoal* goal, void*);
};

struct zNPCTubelet : zNPCRobot
{
    en_tubestat tubestat;
    zNPCTubeSlave* tub_paul;
    zNPCTubeSlave* tub_mary;
    float32 bonkSpinRate;
    float32 tmr_restoreHealth;
    int32 pete_attack_last;
    TubeNotice psynote;

    zNPCTubelet(int32 myType);
};

enum en_tubespot
{
    ROBO_TUBE_PETE,
    ROBO_TUBE_PAUL,
    ROBO_TUBE_MARY,
    ROBO_TUBE_NOMORE,
    ROBO_TUBE_FORCE = 0x7fffffff
};

struct zNPCTubeSlave : zNPCRobot
{
    en_tubespot tubespot;
    zNPCTubelet* tub_pete;

    zNPCTubeSlave(int32 myType);
};

struct zNPCSlick : zNPCRobot
{
    float32 rad_shield;
    float32 tmr_repairShield;
    float32 tmr_invuln;
    float32 alf_shieldCurrent;
    float32 alf_shieldDesired;

    zNPCSlick(int32 myType);

    void YouOwnSlipFX();
    void BUpdate(xVec3* pos);
    void RopePopsShield();
    void ShieldUpdate(float32 dt);
    void Damage(en_NPC_DAMAGE_TYPE dmg_type, xBase* who, xVec3* vec_hit);
    void Process(xScene* xscn, float32 dt);
    uint32 AnimPick(int32 gid, en_NPC_GOAL_SPOT gspot, xGoal* rawgoal);
    void SelfSetup();
    void ParseINI();
    void Reset();
    void Init(xEntAsset* asset);
    void LassoModelIndex(int32* idxgrab, int32* idxhold);
};

void ZNPC_Robot_Startup();
void ZNPC_Robot_Shutdown();
void zNPCRobot_ScenePrepare();
void zNPCRobot_SceneFinish();
void zNPCRobot_ScenePostInit();
xFactoryInst* ZNPC_Create_Robot(int32 who, RyzMemGrow* grow, void*);
void ZNPC_Destroy_Robot(xFactoryInst* inst);
void ROBO_KillEffects();
void zNPCFodBzzt_ResetDanceParty();
void ROBO_InitEffects();
int32 DUMY_grul_returnToIdle(xGoal*, void*, en_trantype*, float32, void*);
int32 xEntIsEnabled(xEnt* ent);

#endif
