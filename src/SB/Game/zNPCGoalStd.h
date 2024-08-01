#ifndef ZNPCGOALSTD_H
#define ZNPCGOALSTD_H

#include "zNPCGoalCommon.h"
#include "zNPCHazard.h"

enum en_alertbzzt
{
    FODBZZT_ALERT_NOTICE,
    FODBZZT_ALERT_ARENA,
    FODBZZT_ALERT_CHASE,
    FODBZZT_ALERT_NOMORE,
    FODBZZT_ALERT_FORCE = 0x7fffffff
};

enum en_alertslik
{
    SLICK_ALERT_NOTICE,
    SLICK_ALERT_BEGIN,
    SLICK_ALERT_ARENA,
    SLICK_ALERT_READY,
    SLICK_ALERT_NOMORE,
    SLICK_ALERT_FORCE = 0x7fffffff
};

enum en_hoppy
{
    HOPPY_PATTERN_START,
    HOPPY_PATTERN_SHOOT,
    HOPPY_PATTERN_HOPLEFT,
    HOPPY_PATTERN_HOPRIGHT,
    HOPPY_PATTERN_HOPSHOOT,
    HOPPY_PATTERN_NOMORE,
    HOPPY_PATTERN_FORCE = 0x7fffffff
};

enum en_alerttart
{
    TARTAR_ALERT_NOTICE,
    TARTAR_ALERT_BEGIN,
    TARTAR_ALERT_ARENA,
    TARTAR_ALERT_READY,
    TARTAR_ALERT_NOMORE,
    TARTAR_ALERT_FORCE = 0x7fffffff
};

enum en_alertchomp
{
    CHOMPER_ALERT_NOTICE,
    CHOMPER_ALERT_ARENA,
    CHOMPER_ALERT_CHASE,
    CHOMPER_ALERT_EVADE,
    CHOMPER_ALERT_NOMORE,
    CHOMPER_ALERT_FORCE = 0x7fffffff
};

enum en_alertfod
{
    FODDER_ALERT_NOTICE,
    FODDER_ALERT_ARENA,
    FODDER_ALERT_BEGIN,
    FODDER_ALERT_CHASE,
    FODDER_ALERT_STABDONE,
    FODDER_ALERT_EVADE,
    FODDER_ALERT_NOMORE,
    FODDER_ALERT_FORCE = 0x7fffffff
};

struct zNPCGoalLoopAnim : zNPCGoalCommon
{
    S32 flg_loopanim;
    U32 anid_stage[3];
    S32 cnt_loop;
    F32 lastAnimTime;
    U32 origAnimFlags;
    U32 animWeMolested;

    zNPCGoalLoopAnim(S32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags(1 << 1);
    }

    void TriggerExit()
    {
        cnt_loop = 0;
    }

    void MolestLoopAnim();
    void UnmolestAnim();
    void LoopCountSet(S32 num);
    void UseDefaultAnims();
    void ValidateStages();

    virtual S32 Enter(F32 dt, void* updCtxt);
    virtual S32 Exit(F32 dt, void* updCtxt);
    virtual S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene);
};

struct zNPCGoalIdle : zNPCGoalCommon
{
    S32 flg_idle;

    zNPCGoalIdle(S32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags((1 << 3) | (1 << 2));
        flg_npcgauto &= ~((1 << 2) | (1 << 1));
    }

    virtual S32 Enter(F32 dt, void* updCtxt);
    virtual S32 Exit(F32 dt, void* updCtxt);
    virtual S32 Suspend(F32 dt, void* updCtxt);
    virtual S32 Resume(F32 dt, void* updCtxt);
    virtual S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene);
    virtual S32 NPCMessage(NPCMsg* mail);
};

struct zNPCGoalWaiting : zNPCGoalLoopAnim
{
    S32 flg_waiting;
    F32 tmr_waiting;

    zNPCGoalWaiting(S32 goalID) : zNPCGoalLoopAnim(goalID)
    {
    }

    virtual S32 Enter(F32 dt, void* updCtxt);
    virtual S32 Exit(F32 dt, void* updCtxt);
    virtual S32 Resume(F32 dt, void* updCtxt);
    virtual S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene);
};

struct zNPCGoalWander : zNPCGoalCommon
{
    S32 flg_wand;
    F32 tmr_remain;
    F32 rad_wand;
    xVec3 pos_home;
    F32 tmr_minwalk;
    F32 tmr_newdir;
    xVec3 dir_cur;

    zNPCGoalWander(S32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags((1 << 2) | (1 << 1));
        flg_wand = 0xFFFF0000;
    }

    void VerticalWander(F32 spd_dt, const xVec3* vec_dest);
    void CalcNewDir();

    virtual S32 Enter(F32 dt, void* updCtxt);
    virtual S32 Resume(F32 dt, void* updCtxt);
    virtual S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene);
};

struct zNPCGoalPatrol : zNPCGoalCommon
{
    S32 flg_patrol;
    F32 tmr_wait;
    xVec3 pos_midpnt[4];
    S32 idx_midpnt;

    zNPCGoalPatrol(S32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags((1 << 2) | (1 << 1));
    }

    void DoOnArriveStuff();
    void PickTransition(S32* goal, en_trantype* trantype);
    void MoveNormal(F32 dt);
    void MoveSpline(F32 dt);
    void Chk_AutoSmooth();
    void MoveAutoSmooth(F32 dt);

    virtual S32 Enter(F32 dt, void* updCtxt);
    virtual S32 Exit(F32 dt, void* updCtxt);
    virtual S32 Resume(F32 dt, void* updCtxt);
    virtual S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene);
};

struct zNPCGoalPushAnim : zNPCGoalCommon
{
    S32 flg_pushanim;
    F32 lastAnimTime;

    zNPCGoalPushAnim(S32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags((1 << 2) | (1 << 1));
    }

    virtual S32 Enter(F32 dt, void* updCtxt);
    virtual S32 Exit(F32 dt, void* updCtxt);
    virtual S32 Resume(F32 dt, void* updCtxt);
    virtual S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene);
};

struct zNPCGoalFidget : zNPCGoalPushAnim
{
    zNPCGoalFidget(S32 goalID) : zNPCGoalPushAnim(goalID)
    {
    }

    virtual S32 Enter(F32 dt, void* updCtxt);
    virtual S32 Exit(F32 dt, void* updCtxt);
};

struct zNPCGoalNoManLand : zNPCGoalCommon
{
    zNPCGoalNoManLand(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalDead : zNPCGoalCommon
{
    S32 flg_deadinfo;
    U8 old_moreFlags;

    zNPCGoalDead(S32 goalID) : zNPCGoalCommon(goalID)
    {
        SetFlags((1 << 2) | (1 << 1));
    }

    void DieQuietly()
    {
        flg_deadinfo |= (1 << 0);
        flg_deadinfo &= ~(1 << 1);
    }
    void DieWithAWhimper();
    void DieWithABang();

    virtual S32 Enter(F32 dt, void* updCtxt);
    virtual S32 Exit(F32 dt, void* updCtxt);

protected:
    ~zNPCGoalDead();
};

struct zNPCGoalLimbo : zNPCGoalDead
{
    zNPCGoalLimbo(S32 goalID) : zNPCGoalDead(goalID)
    {
    }

    virtual S32 Enter(F32 dt, void* updCtxt);
    virtual S32 NPCMessage(NPCMsg* mail);
};

struct zNPCGoalDEVAnimCycle : zNPCGoalCommon
{
    zNPCGoalDEVAnimCycle(S32 goalID) : zNPCGoalCommon(goalID)
    {
        flg_npcgauto &= ~((1 << 2) | (1 << 1));
    }

    xAnimState* ASTGetNext(xAnimState* ast);

    virtual S32 Enter(F32 dt, void* updCtxt);
    virtual S32 Exit(F32 dt, void* updCtxt);
    virtual S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene);
    virtual S32 NPCMessage(NPCMsg* mail);
};

struct zNPCGoalDEVAnimSpin : zNPCGoalCommon
{
    U32 origAnimFlags;
    U32 animWeMolested;

    zNPCGoalDEVAnimSpin(S32 goalID) : zNPCGoalCommon(goalID)
    {
        flg_npcgauto &= ~((1 << 2) | (1 << 1));
    }

    void ASTMolestAnim(xAnimState* state);
    void ASTUnmolestAnim();

    virtual S32 Enter(F32 dt, void* updCtxt);
    virtual S32 Exit(F32 dt, void* updCtxt);
    virtual S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene);
    virtual S32 NPCMessage(NPCMsg* mail);
};

struct zNPCGoalDEVHero : zNPCGoalCommon
{
    zNPCGoalDEVHero(S32 goalID) : zNPCGoalCommon(goalID)
    {
        flg_npcgauto &= ~((1 << 2) | (1 << 1));
    }

    virtual S32 Enter(F32 dt, void* updCtxt);
    virtual S32 Exit(F32 dt, void* updCtxt);
    virtual S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene);
    virtual S32 NPCMessage(NPCMsg* mail);
};

struct zNPCGoalTaunt : zNPCGoalLoopAnim
{
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    S32 Enter(F32 dt, void* updCtxt);
};

struct zNPCGoalPatThrow : zNPCGoalCommon
{
    S32 Enter(F32 dt, void* updCtxt);
    U8 CollReview(void*);
};

enum en_alertchuk
{
    CHUCK_ALERT_NOTICE,
    CHUCK_ALERT_BEGIN,
    CHUCK_ALERT_ARENA,
    CHUCK_ALERT_READY,
    CHUCK_ALERT_BACKAWAY,
    CHUCK_ALERT_ZOOMPAST,
    CHUCK_ALERT_DIDTHROW,
    CHUCK_ALERT_NOMORE,
    CHUCK_ALERT_FORCE = 0x7fffffff
};

struct zNPCGoalAlertSlick : zNPCGoalCommon
{
    S32 flg_alert;
    en_alertslik alertslik;
    F32 tmr_reload;
    xVec3 pos_corner;

    void MoveCorner(F32 dt);
    void GetInArena(F32 dt);
    S32 NPCMessage(NPCMsg* mail);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt);
    S32 Resume(F32 dt, void* updCtxt);
    S32 Enter(F32 dt, void* updCtxt);
};

struct zNPCGoalAlertChuck : zNPCGoalCommon
{
    xVec3 dir_attack;
    S32 flg_attack;
    en_alertchuk alertchuk;
    F32 tmr_reload;
    F32 tmr_hover;
    xVec3 dir_zoom;
    F32 dst_zoom;

    S32 ZoomMove(F32 dt);
    void GetInArena(F32 dt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt);
    S32 Resume(F32 dt, void* updCtxt);
    S32 Enter(F32 dt, void* updCtxt);
};

struct zNPCGoalAlertTarTar : zNPCGoalCommon
{
    S32 flg_attack;
    en_alerttart alerttart;
    en_hoppy hoppy;
    F32 tmr_reload;

    void GetInArena(F32 dt);
    S32 HoppyUpdate(en_trantype* trantype, F32 dt);
    S32 NPCMessage(NPCMsg* mail);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt);
    S32 Resume(F32 dt, void* updCtxt);
    S32 Enter(F32 dt, void* updCtxt);
};

struct zNPCGoalAlertChomper : zNPCGoalCommon
{
    en_alertchomp alertchomp;
    xVec3 pos_evade;
    F32 tmr_evade;

    S32 CheckSpot();
    S32 MoveEvadePos(xVec3* pos, F32 dt);
    S32 CalcEvadePos(xVec3* pos);
    void GetInArena(F32 dt);
    void CirclePlayer(F32 dt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt);
    S32 Enter(F32 dt, void* updCtxt);
};

struct zNPCGoalAlertFodBzzt : zNPCGoalCommon
{
    S32 flg_alert;
    en_alertbzzt alertbzzt;
    F32 tmr_warmup;
    S32 cnt_nextlos;
    F32 len_laser;
    xVec3 pos_laserSource;
    xVec3 pos_laserTarget;
    RwRGBA rgba_deathRay;
    S32 cnt_inContact;

    void DeathRayRender();
    void DeathRayUpdate(F32 dt);
    void OrbitPlayer(F32 dt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt);
    S32 Resume(F32 dt, void* updCtxt);
    S32 Suspend();
    S32 Exit();
    S32 Enter(F32 dt, void* updCtxt);
    void GetInArena(F32 dt);
};

struct zNPCGoalAttackFodder;

struct CattleNotify : HAZNotify
{
    zNPCGoalAttackFodder* goal;

    CattleNotify(S32 myType);
    S32 Notify(en_haznote note);
};

struct zNPCGoalAttackFodder : zNPCGoalPushAnim
{
    xVec3 dir_attack;
    S32 flg_attack;
    CattleNotify cbNotify;
    NPCHazard* haz_cattle; // 0x6C

    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    S32 Exit(F32 dt, void* updCtxt);
    S32 Enter(F32 dt, void* updCtxt);
    S32 SyncCattleProd();
};

class zNPCGoalAlertFodder : public zNPCGoalCommon
{
public:
    signed int flg_attack; // offset 0x4C, size 0x4
    enum en_alertfod alertfod; // offset 0x50, size 0x4
    float tmr_alertfod; // offset 0x54, size 0x4

    void MoveEvade(F32 dt);
    void GetInArena(F32 dt);
    void FlankPlayer(F32 dt);
    S32 CheckSpot(F32 dt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene);
    S32 Enter(F32 dt, void* updCtxt);
};

struct zNPCGoalDogLaunch : zNPCGoalCommon
{
    S32 flg_launch;
    xVec3 pos_src;
    xVec3 pos_tgt;
    xParabola parabinfo;
    F32 tmr_remain;

    void BubTrailCone(xVec3* pos, S32 num, xVec3* pos_rand, xVec3* vel_rand, xMat3x3* mat);
    S32 BallisticUpdate(F32 dt);
    void PreCollide();
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    S32 Enter(F32 dt, void* updCtxt);
    U8 CollReview(void*);
    void SilentSwimout(xVec3* unk1, xVec3* unk2, zMovePoint* unk3);
    void ViciousAttack(xVec3* unk1, xVec3* unk2, zMovePoint* unk3, S32 unk4);
};

xFactoryInst* GOALCreate_Standard(S32 who, RyzMemGrow* grow, void*);
void GOALDestroy_Goal(xFactoryInst* inst);

#endif
