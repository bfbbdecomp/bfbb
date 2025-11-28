#ifndef ZNPCGOALSTD_H
#define ZNPCGOALSTD_H

#include "zNPCGoalCommon.h"
#include "zNPCHazard.h"

enum en_alertmony
{
    MONSOON_ALERT_NOTICE = 0,
    MONSOON_ALERT_BEGIN = 1,
    MONSOON_ALERT_ARENA = 2,
    MONSOON_ALERT_READY = 3,
    MONSOON_ALERT_SPITCLOUD = 4,
    MONSOON_ALERT_NOMORE = 5,
    MONSOON_ALERT_FORCE = 2147483647,
};

enum en_alertham
{
    HAMMER_ALERT_NOTICE = 0,
    HAMMER_ALERT_BEGIN = 1,
    HAMMER_ALERT_CHASE = 2,
    HAMMER_ALERT_WHAM = 3,
    HAMMER_ALERT_EVADE = 4,
    HAMMER_ALERT_NOMORE = 5,
    HAMMER_ALERT_FORCE = 2147483647,
};

enum en_alertbomb
{
    FODBOMB_ALERT_NOTICE = 0,
    FODBOMB_ALERT_SONAR = 1,
    FODBOMB_ALERT_TERMINAL = 2,
    FODBOMB_ALERT_NOMORE = 3,
    FODBOMB_ALERT_FORCE = 2147483647,
};

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

class zNPCGoalAttackChuck : public zNPCGoalPushAnim
{
    // total size: 0x58
public:
    zNPCGoalAttackChuck(S32 id) : zNPCGoalPushAnim(id)
    {
        xGoal::SetFlags(2);
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Exit(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    S32 BombzAway(F32);
    S32 idx_launch; // offset 0x54, size 0x4
};

class zNPCGoalLassoBase : public zNPCGoalCommon
{
    // total size: 0x4C
public:
    zNPCGoalLassoBase(S32 id) : zNPCGoalCommon(id)
    {
        xGoal::SetFlags(12);
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Exit(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
};

class zNPCGoalLassoGrab : public zNPCGoalCommon
{
    // total size: 0x4C
public:
    zNPCGoalLassoGrab(S32 id) : zNPCGoalCommon(id)
    {
        xGoal::SetFlags(2);
    }

    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    void DoTurnAway(F32 dt);
};

class zNPCGoalLassoThrow : public zNPCGoalCommon
{
    // total size: 0x58
public:
    zNPCGoalLassoThrow(S32 id) : zNPCGoalCommon(id)
    {
        xGoal::SetFlags(2);
        flg_npcgable |= 1;
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Exit(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    U8 CollReview(void*);
    void ApplyYank(S32 left);
    S32 flg_throw; // offset 0x4C, size 0x4
    S32 floorBounce; // offset 0x50, size 0x4
    F32 tmr_colDelay; // offset 0x54, size 0x4
};

class zNPCGoalAttackSlick : public zNPCGoalLoopAnim
{
    // total size: 0x70
public:
    zNPCGoalAttackSlick(S32 id) : zNPCGoalLoopAnim(id)
    {
        xGoal::SetFlags(6);
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    S32 FireOne(S32);
    S32 idx_launch; // offset 0x6C, size 0x4
};

class zNPCGoalAttackArfMelee : public zNPCGoalPushAnim
{
    // total size: 0x64
public:
    zNPCGoalAttackArfMelee(S32 id) : zNPCGoalPushAnim(id)
    {
        xGoal::SetFlags(6);
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Exit(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    void PlayerTests();
    void FXStreakPrep();
    void FXStreakDone();
    void FXStreakUpdate();

    U32 streakID[4]; // offset 0x54, size 0x10
};

class zNPCGoalAttackArf : public zNPCGoalPushAnim
{
    // total size: 0x58
public:
    zNPCGoalAttackArf(S32 id) : zNPCGoalPushAnim(id)
    {
        xGoal::SetFlags(6);
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Exit(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    void SetAttackMode(S32 a, S32 b);
    S32 LaunchBone(F32 dt, S32 param_2);
    S32 LaunchDoggie();
    S32 flg_attack; // offset 0x54, size 0x4
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

class zNPCGoalEvilPat : public zNPCGoalCommon
{
    // total size: 0x4C
public:
    zNPCGoalEvilPat(S32 id) : zNPCGoalCommon(id)
    {
        xGoal::SetFlags(12);
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Exit(F32 dt, void* updCtxt);
    void GlyphStart();
    void GlyphStop();
    S32 NPCMessage(NPCMsg* mail);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene);
    S32 InputStun(NPCStunInfo* info);
};

class zNPCGoalPatCarry : public zNPCGoalCommon
{
    // total size: 0x4C
public:
    zNPCGoalPatCarry(S32 id) : zNPCGoalCommon(id)
    {
        xGoal::SetFlags(2);
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
};

class zNPCGoalStunned : public zNPCGoalCommon
{
    // total size: 0x4C
public:
    zNPCGoalStunned(S32 id) : zNPCGoalCommon(id)
    {
        xGoal::SetFlags(2);
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    S32 InputInfo(NPCStunInfo* info);
};

class zNPCGoalEvade : public zNPCGoalCommon
{
public:
    zNPCGoalEvade(S32 id) : zNPCGoalCommon(id)
    {
        SetFlags(2);
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    S32 flg_evade; // offset 0x4C, size 0x4
};

class zNPCGoalGoHome : public zNPCGoalCommon
{
public:
    zNPCGoalGoHome(S32 id) : zNPCGoalCommon(id)
    {
        SetFlags(2);
    }

    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
};

enum en_slepatak
{
    SLEEP_ATAK_REACT = 0,
    SLEEP_ATAK_ZAP = 1,
    SLEEP_ATAK_LAUGH = 2,
    SLEEP_ATAK_NOMORE = 3,
    SLEEP_ATAK_FORCE = 2147483647,
};

enum en_alertarf
{
    ARF_ALERT_REACT = 0,
    ARF_ALERT_READY = 1,
    ARF_ALERT_TELEPORT = 2,
    ARF_ALERT_NOMORE = 3,
    ARF_ALERT_FORCE = 2147483647,
};

enum en_arfdoes
{
    ARF_DOES_NOT = 0,
    ARF_DOES_LOB = 1,
    ARF_DOES_MELEE = 2,
    ARF_DOES_NOMORE = 3,
    ARF_DOES_FORCE = 2147483647,
};

class zNPCGoalAlertArf : public zNPCGoalCommon
{
    // total size: 0x54
public:
    zNPCGoalAlertArf(S32 id) : zNPCGoalCommon(id)
    {
        xGoal::SetFlags(6);
        xGoal::AddFlags(8);
        flg_npcgauto &= 0xfffffff9;
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Exit(F32 dt, void* updCtxt);
    S32 Resume(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    S32 NPCMessage(NPCMsg* mail);
    en_arfdoes DecideAttack();
    en_alertarf alertarf; // offset 0x4C, size 0x4
    F32 tmr_reload; // offset 0x50, size 0x4
};

enum en_alertpuppy
{
    PUPPY_ALERT_YAPPY = 0,
    PUPPY_ALERT_CHASE = 1,
    PUPPY_ALERT_ATTAAAAACK = 2,
    PUPPY_ALERT_DISAPPEAR = 3,
    PUPPY_ALERT_NOMORE = 4,
    PUPPY_ALERT_FORCE = 2147483647,
};

class zNPCGoalAlertPuppy : public zNPCGoalCommon
{
    // total size: 0x50
public:
    zNPCGoalAlertPuppy(S32 id) : zNPCGoalCommon(id)
    {
        xGoal::SetFlags(6);
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Resume(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    enum en_alertpuppy alertpup; // offset 0x4C, size 0x4
};

class zNPCGoalAlertSleepy : public zNPCGoalCommon
{
    // total size: 0x64
public:
    zNPCGoalAlertSleepy(S32 id) : zNPCGoalCommon(id)
    {
        xGoal::SetFlags(6);
    }

    xVec3 dir_attack; // offset 0x4C, size 0xC
    S32 flg_attack; // offset 0x58, size 0x4
    en_slepatak sleepattack; // offset 0x5C, size 0x4
    F32 tmr_minAttack; // offset 0x60, size 0x4

    S32 Enter(F32 dt, void* updCtxt);
    S32 Exit(F32, void*);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    S32 NPCMessage(NPCMsg* mail);
};

class zNPCGoalChase : public zNPCGoalCommon
{
    // total size: 0x50
public:
    zNPCGoalChase(S32 id) : zNPCGoalCommon(id)
    {
        SetFlags(2);
    }

    S32 flg_chase; // offset 0x4C, size 0x4

    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
};

struct zNPCGoalTaunt : zNPCGoalLoopAnim
{
    zNPCGoalTaunt(S32 id) : zNPCGoalLoopAnim(id)
    {
        SetFlags(2);
    }

    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    S32 Enter(F32 dt, void* updCtxt);
};

struct zNPCGoalPatThrow : zNPCGoalCommon
{
    zNPCGoalPatThrow(S32 id) : zNPCGoalCommon(id)
    {
        flg_npcgable = 1;
    }

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

class zNPCGoalAttackCQC : public zNPCGoalPushAnim
{
    // total size: 0x64
public:
    zNPCGoalAttackCQC(S32 id) : zNPCGoalPushAnim(id)
    {
        xGoal::SetFlags(2);
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    xVec3 dir_attack; // offset 0x54, size 0xC
    S32 flg_attack; // offset 0x60, size 0x4
};

struct zNPCGoalAlertSlick : zNPCGoalCommon
{
    S32 flg_alert;
    en_alertslik alertslik;
    F32 tmr_reload;
    xVec3 pos_corner;

    zNPCGoalAlertSlick(S32 id) : zNPCGoalCommon(id)
    {
        xGoal::SetFlags(6);
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Resume(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    S32 NPCMessage(NPCMsg* mail);
    void GetInArena(F32 dt);
    void MoveCorner(F32 dt);
};

class zNPCGoalAlertTubelet : public zNPCGoalCommon
{
    // total size: 0x5C
public:
    zNPCGoalAlertTubelet(S32 id) : zNPCGoalCommon(id)
    {
        xGoal::SetFlags(6);
    }

    S32 Exit(F32 dt, void* updCtxt);
    S32 Enter(F32 dt, void* updCtxt);
    S32 Resume(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    void PeteAttackBegin();
    void PeteAttackParSys(F32 dt, S32 param_2);
    void EmitSteam(F32 dt);
    void ChkPrelimTran(en_trantype* trantype, S32* nextgoal);
    S32 MoveToHome(F32 dt);
    S32 flg_attack; // offset 0x4C, size 0x4
    S32 cnt_nextlos; // offset 0x50, size 0x4
    F32 len_laser; // offset 0x54, size 0x4
    S32 pete_attack_last; // offset 0x58, size 0x4
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

    zNPCGoalAlertChuck(S32 id) : zNPCGoalCommon(id)
    {
        xGoal::SetFlags(6);
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Resume(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    void GetInArena(F32 dt);
    S32 ZoomMove(F32 dt);
};

class zNPCGoalAlertMonsoon : public zNPCGoalCommon
{
    // total size: 0x70
public:
    zNPCGoalAlertMonsoon(S32 id) : zNPCGoalCommon(id)
    {
        xGoal::SetFlags(6);
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Exit(F32 dt, void* updCtxt);
    S32 Resume(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    void MoveCorner(F32 dt);
    xVec3 dir_attack; // offset 0x4C, size 0xC
    S32 flg_attack; // offset 0x58, size 0x4
    en_alertmony alertmony; // offset 0x5C, size 0x4
    F32 tmr_reload; // offset 0x60, size 0x4
    xVec3 pos_corner; // offset 0x64, size 0xC
};

class zNPCGoalAlertGlove : public zNPCGoalCommon
{
    // total size: 0x84
public:
    zNPCGoalAlertGlove(S32 id) : zNPCGoalCommon(id)
    {
        xGoal::SetFlags(6);
        flg_npcgable |= 1;
    }
    S32 Enter(F32 dt, void* updCtxt);
    S32 Exit(F32 dt, void* updCtxt);
    S32 Suspend(F32 dt, void* updCtxt);
    S32 Resume(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    void FXTurbulence();
    void FXWhirlwind();
    void CalcAttackVector();
    void CheckHandBones();
    U8 CollReview(void*);
    F32 tmr_attack; // offset 0x4C, size 0x4
    F32 tmr_minAttack; // offset 0x50, size 0x4
    xVec3 pos_began; // offset 0x54, size 0xC
    xVec3 pos_end; // offset 0x60, size 0xC
    xVec3 dir_axis; // offset 0x6C, size 0xC
    F32 dst_extend; // offset 0x78, size 0x4
    S32 goback; // offset 0x7C, size 0x4
    S32 cnt_nextemit; // offset 0x80, size 0x4
};

struct zNPCGoalAlertTarTar : zNPCGoalCommon
{
    S32 flg_attack;
    en_alerttart alerttart;
    en_hoppy hoppy;
    F32 tmr_reload;

    zNPCGoalAlertTarTar(S32 id) : zNPCGoalCommon(id)
    {
        xGoal::SetFlags(6);
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Resume(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    S32 NPCMessage(NPCMsg* mail);
    S32 HoppyUpdate(en_trantype* trantype, F32 dt);
    void GetInArena(F32 dt);
};

struct zNPCGoalAlertChomper : zNPCGoalCommon
{
    en_alertchomp alertchomp;
    xVec3 pos_evade;
    F32 tmr_evade;

    zNPCGoalAlertChomper(S32 id) : zNPCGoalCommon(id)
    {
        xGoal::SetFlags(6);
    }

    S32 CheckSpot(F32);
    S32 MoveEvadePos(const xVec3* pos, F32 dt);
    S32 CalcEvadePos(xVec3* pos);
    void GetInArena(F32 dt);
    void CirclePlayer(F32 dt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    S32 Enter(F32 dt, void* updCtxt);
};

class zNPCGoalAlertHammer : public zNPCGoalCommon
{
    // total size: 0x58
public:
    zNPCGoalAlertHammer(S32 id) : zNPCGoalCommon(id)
    {
        xGoal::SetFlags(6);
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Exit(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    S32 PlayerInSpot(F32 dt);
    void MoveChase(F32 dt);
    void MoveEvade(F32 dt);
    S32 flg_attack; // offset 0x4C, size 0x4
    en_alertham alertham; // offset 0x50, size 0x4
    F32 tmr_alertham; // offset 0x54, size 0x4
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

    zNPCGoalAlertFodBzzt(S32 id) : zNPCGoalCommon(id)
    {
        xGoal::SetFlags(6);
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Exit(F32 dt, void* updCtxt);
    S32 Suspend(F32 dt, void* updCtxt);
    S32 Resume(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    void ToggleOrbit();
    void OrbitPlayer(F32 dt);
    void GetInArena(F32 dt);
    void DeathRayUpdate(F32 dt);
    void DeathRayRender();
};

struct zNPCGoalAttackFodder;

class zNPCGoalAttackMonsoon : public zNPCGoalPushAnim
{
    // total size: 0x58
public:
    zNPCGoalAttackMonsoon(S32 id) : zNPCGoalPushAnim(id)
    {
        xGoal::SetFlags(2);
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    S32 SpitCloud();
    S32 idx_launch; // offset 0x54, size 0x4
};

class zNPCGoalAttackTarTar : public zNPCGoalPushAnim
{
    // total size: 0x68
public:
    zNPCGoalAttackTarTar(S32 id) : zNPCGoalPushAnim(id)
    {
        xGoal::SetFlags(2);
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    S32 NPCMessage(NPCMsg* mail);
    void CacheAimPoint();
    S32 ShootBlob(S32 zapidx);
    S32 ShootBlob(F32, S32 zapidx);
    S32 flg_attack; // offset 0x54, size 0x4
    S32 idx_launch; // offset 0x58, size 0x4
    xVec3 pos_aimbase; // offset 0x5C, size 0xC
};

class zNPCGoalAttackHammer : public zNPCGoalPushAnim
{
    // total size: 0x78
public:
    zNPCGoalAttackHammer(S32 id) : zNPCGoalPushAnim(id)
    {
        xGoal::SetFlags(2);
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Exit(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    void TellBunnies();
    void ModifyAnimSpeed();
    void FXStreakPrep();
    void FXStreakDone();
    S32 PlayerTests(xVec3* pos_vert, F32 dt);
    void ChkPrelimTran(en_trantype* trantype, S32* nextgoal);
    S32 flg_attack; // offset 0x54, size 0x4
    xVec3 pos_lastVert; // offset 0x58, size 0xC
    xVec3 pos_oldVert; // offset 0x64, size 0xC
    U32 streakID[2]; // offset 0x70, size 0x8
};

class zNPCGoalAttackChomper : public zNPCGoalPushAnim
{
    // total size: 0x54
public:
    zNPCGoalAttackChomper(S32 id) : zNPCGoalPushAnim(id)
    {
        xGoal::SetFlags(2);
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    void BreathAttack();
};

struct zNPCGoalAttackFodder : zNPCGoalPushAnim
{
    struct CattleNotify : HAZNotify
    {
        zNPCGoalAttackFodder* goal;

        CattleNotify()
        {
        }

        S32 Notify(en_haznote note, NPCHazard*);
    };

    xVec3 dir_attack;
    S32 flg_attack;
    CattleNotify cbNotify;
    NPCHazard* haz_cattle; // 0x6C

    zNPCGoalAttackFodder(S32 id) : zNPCGoalPushAnim(id), cbNotify()
    {
        xGoal::SetFlags(2);
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Exit(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    S32 SyncCattleProd();
};

class zNPCGoalAlert : public zNPCGoalCommon
{
    // total size: 0x50
public:
    zNPCGoalAlert(S32 id) : zNPCGoalCommon(id)
    {
        xGoal::SetFlags(0x0000C);
        xGoal::AddFlags(0x20000);
        flg_npcgauto &= 0xfffffff9;
    }
    S32 Enter(F32 dt, void* updCtxt);
    S32 Exit(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    S32 flg_alert; // offset 0x4C, size 0x4
};

class zNPCGoalAlertFodBomb : public zNPCGoalCommon
{
    // total size: 0x5C
public:
    zNPCGoalAlertFodBomb(S32 id) : zNPCGoalCommon(id)
    {
        xGoal::SetFlags(6);
    }

    S32 Resume(F32 dt, void* updCtxt);
    S32 Enter(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    void Detonate();
    void SonarHoming(F32);
    S32 flg_attack; // offset 0x4C, size 0x4
    en_alertbomb alertbomb; // offset 0x50, size 0x4
    F32 tmr_nextping; // offset 0x54, size 0x4
    F32 tmr_countdown; // offset 0x58, size 0x4
};

class zNPCGoalAlertFodder : public zNPCGoalCommon
{
public:
    zNPCGoalAlertFodder(S32 id) : zNPCGoalCommon(id)
    {
        xGoal::SetFlags(6);
    }

    S32 flg_attack; // offset 0x4C, size 0x4
    en_alertfod alertfod; // offset 0x50, size 0x4
    F32 tmr_alertfod; // offset 0x54, size 0x4

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

    zNPCGoalDogLaunch(S32 id) : zNPCGoalCommon(id)
    {
        xGoal::SetFlags(2);
        flg_npcgable = 1;
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    void ViciousAttack(xVec3* unk1, xVec3* unk2, zMovePoint* unk3, S32 unk4);
    void PreCollide();
    S32 BallisticUpdate(F32 dt);
    void BubTrailCone(const xVec3* pos, S32 num, const xVec3* pos_rand, const xVec3* vel_rand, const xMat3x3* mat);
    void FurryFlurry();

    void SilentSwimout(xVec3* unk1, xVec3* unk2, zMovePoint* unk3);
    U8 CollReview(void*);
};

class zNPCGoalDogBark : public zNPCGoalLoopAnim
{
    // total size: 0x6C
public:
    zNPCGoalDogBark(S32 id) : zNPCGoalLoopAnim(id)
    {
        xGoal::SetFlags(2);
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
};

class zNPCGoalDamage : public zNPCGoalCommon
{
    // total size: 0x50
public:
    zNPCGoalDamage(S32 id) : zNPCGoalCommon(id)
    {
        xGoal::SetFlags(12);
    }
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    S32 NPCMessage(NPCMsg*);
    S32 InputInfo(NPCDamageInfo* info);
    S32 flg_howtodie; // offset 0x4C, size 0x4
};

class zNPCGoalBashed : public zNPCGoalLoopAnim
{
    // total size: 0x6C
public:
    zNPCGoalBashed(S32 id) : zNPCGoalLoopAnim(id)
    {
        xGoal::SetFlags(2);
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene);
};

class zNPCGoalAfterlife : public zNPCGoalDead
{
    // total size: 0x54
public:
    zNPCGoalAfterlife(S32 id) : zNPCGoalDead(id)
    {
        SetFlags(12);
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 NPCMessage(NPCMsg* mail);
    void DieTheGoodDeath();
};

class NPCBullseye
{
    // total size: 0x10
public:
    xVec3 pos; // offset 0x0, size 0xC
    F32 spd; // offset 0xC, size 0x4
};

enum en_marystat
{
    TUBE_MARY_WAIT = 0,
    TUBE_MARY_ANGRY = 1,
    TUBE_MARY_COOLOFF = 2,
    TUBE_MARY_NOMORE = 3,
    TUBE_MARY_FORCE = 2147483647,
};

class zNPCGoalTubeLasso : public zNPCGoalCommon
{
    // total size: 0x4C
public:
    zNPCGoalTubeLasso(S32 id) : zNPCGoalCommon(id)
    {
        xGoal::SetFlags(4);
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Exit(F32 dt, void* updCtxt);
    void ChkPrelimTran(en_trantype* trantype, int* nextgoal);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* scene);
    void MoveTryToEscape(F32 dt);
};

class zNPCGoalTubeDead : public zNPCGoalDead
{
    // total size: 0x54
public:
    zNPCGoalTubeDead(S32 id) : zNPCGoalDead(id)
    {
    }

    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    void ChkPrelimTran(en_trantype*, int*);
};

class zNPCGoalTubeDying : public zNPCGoalCommon
{
    // total size: 0x6C
public:
    zNPCGoalTubeDying(S32 id) : zNPCGoalCommon(id)
    {
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Exit(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    void DeathByLasso(const xVec3*);
    S32 flg_tubedying; // offset 0x4C, size 0x4
    F32 spd_gothatway; // offset 0x50, size 0x4
    S32 cnt_loop; // offset 0x54, size 0x4
    F32 hyt_was; // offset 0x58, size 0x4
    F32 scl_shrink; // offset 0x5C, size 0x4
    xVec3 pos_lassoDeath; // offset 0x60, size 0xC
};

class zNPCGoalTubeBonked : public zNPCGoalCommon
{
    // total size: 0x60
public:
    zNPCGoalTubeBonked(S32 id) : zNPCGoalCommon(id)
    {
        xGoal::SetFlags(2);
    }

    F32 tmr_recover; // offset 0x4C, size 0x4
    F32 ang_spinrate; // offset 0x50, size 0x4
    xVec3 vec_offsetPete; // offset 0x54, size 0xC

    S32 Enter(F32 dt, void* updCtxt);
    S32 Exit(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    void CheckForTran(en_trantype*, int*);
};

class zNPCGoalTubeBirth : public zNPCGoalCommon
{
public:
    zNPCGoalTubeBirth(S32 id) : zNPCGoalCommon(id)
    {
        xGoal::SetFlags(4);
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    void ChkPrelimTran(en_trantype* trantype, int* nextgoal);
    // total size: 0x4C
};

class zNPCGoalTubeAttack : public zNPCGoalCommon
{
    // total size: 0x84
public:
    zNPCGoalTubeAttack(S32 id) : zNPCGoalCommon(id)
    {
        xGoal::SetFlags(4);
    }

    void AttackDataReset();
    S32 Enter(F32 dt, void* updCtxt);
    S32 Resume(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    void MaryAttack(F32 dt, xScene* xscn);
    S32 MarySpinUp(F32 dt);
    void LaserRender();
    void MaryzBlessing();
    void MaryzFury();
    S32 MarySpinDown(F32 dt);
    void ChkPrelimTran(en_trantype* trantype, int* nextgoal);
    S32 flg_attack; // offset 0x4C, size 0x4
    union
    {
        class
        {
            // total size: 0x8
        public:
            en_marystat marystat; // offset 0x0, size 0x4
            F32 ang_spinrate; // offset 0x4, size 0x4
        } mary; // offset 0x50, size 0x8
        class
        {
            // total size: 0x34
        public:
            S32 flg_paul; // offset 0x0, size 0x4
            S32 cnt_nextlos; // offset 0x4, size 0x4
            F32 len_laser; // offset 0x8, size 0x4
            xVec3 pos_laserSource; // offset 0xC, size 0xC
            xVec3 pos_laserTarget; // offset 0x18, size 0xC
            NPCBullseye bullseye; // offset 0x24, size 0x10
        } paul; // offset 0x50, size 0x34
    };
};

class zNPCGoalTubeDuckling : public zNPCGoalCommon
{
    // total size: 0x70
public:
    zNPCGoalTubeDuckling(S32 id) : zNPCGoalCommon(id)
    {
        xGoal::SetFlags(4);
    }

    S32 Enter(F32 dt, void* updCtxt);
    int Resume(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    void ChkPrelimTran(en_trantype* trantype, int* nextgoal);
    void MoveFrolic(F32 dt);
    void DuckStackInterpInit();
    S32 DuckStackInterp(F32 dt);

    S32 flg_duckling; // offset 0x4C, size 0x4
    F32 tmr_running; // offset 0x50, size 0x4
    F32 tmr_hoverCycle; // offset 0x54, size 0x4
    F32 dst_visacard; // offset 0x58, size 0x4
    xVec3 dir_visacard; // offset 0x5C, size 0xC
    F32 tmr_outward; // offset 0x68, size 0x4
    F32 dst_preOrbit; // offset 0x6C, size 0x4
};

class zNPCGoalTubePal : public zNPCGoalCommon
{
    // total size: 0x4C
public:
    zNPCGoalTubePal(S32 id) : zNPCGoalCommon(id)
    {
        xGoal::SetFlags(0x0000C);
        xGoal::AddFlags(0x20000);
        flg_npcgauto &= 0xfffffff9;
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 EvalRules(en_trantype* trantype, float dt, void* updCtxt);
    void ChkPrelimTran(en_trantype* trantype, int* nextgoal);
};

class zNPCGoalDeflate : public zNPCGoalCommon
{
    // total size: 0x58
public:
    zNPCGoalDeflate(S32 id) : zNPCGoalCommon(id)
    {
        SetFlags(2);
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Exit(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);

    F32 spd_gothatway; // offset 0x4C, size 0x4
    S32 cnt_loop; // offset 0x50, size 0x4
    F32 scl_shrink; // offset 0x54, size 0x4
};

class zNPCGoalRespawn : public zNPCGoalCommon
{
    // total size: 0x64
public:
    zNPCGoalRespawn(S32 id) : zNPCGoalCommon(id)
    {
        SetFlags(2);
    }

    S32 Enter(F32, void*);
    S32 Exit(F32, void*);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    F32 LaunchRoboBits();
    void DoAppearFX(F32 dt);
    void KickFromTheNest();
    S32 InputInfo(NPCSpawnInfo* info);
    F32 tmr_respawn; // offset 0x4C, size 0x4
    F32 tmr_robobits; // offset 0x50, size 0x4
    S32 cnt_ring; // offset 0x54, size 0x4
    xVec3 pos_poofHere; // offset 0x58, size 0xC
};

class zNPCGoalKnock : public zNPCGoalCommon
{
    // total size: 0x64
public:
    zNPCGoalKnock(S32 id) : zNPCGoalCommon(id)
    {
        SetFlags(2);
        flg_npcgable |= 1;
    }

    S32 Enter(F32, void*);
    S32 Exit(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    S32 InputInfo(NPCDamageInfo* info);
    U8 CollReview(void*);
    void StreakPrep();
    void StreakDone();
    void StreakUpdate();
    S32 flg_knock; // offset 0x4C, size 0x4
    xVec3 pos_bumper; // offset 0x50, size 0xC
    S32 floorBounce; // offset 0x5C, size 0x4
    U32 streakID; // offset 0x60, size 0x4
};

class zNPCGoalWound : public zNPCGoalPushAnim
{
    // total size: 0x64
public:
    zNPCGoalWound(S32 id) : zNPCGoalPushAnim(id)
    {
        xGoal::SetFlags(2);
        flg_npcgable |= 1;
    }

    S32 Enter(F32, void*);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    U8 CollReview(void*);
    S32 NPCMessage(NPCMsg*);
    xVec3 dir_fling; // offset 0x54, size 0xC
    S32 flg_knock; // offset 0x60, size 0x4
};

class zNPCGoalHokeyPokey : public zNPCGoalLoopAnim
{
    // total size: 0x74
public:
    zNPCGoalHokeyPokey(S32 id) : zNPCGoalLoopAnim(id)
    {
        xGoal::SetFlags(2);
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    S32 flg_hokey; // offset 0x6C, size 0x4
    F32 ang_spinrate; // offset 0x70, size 0x4
};

class zNPCGoalTeleport : public zNPCGoalCommon
{
    // total size: 0x50
public:
    zNPCGoalTeleport(S32 id) : zNPCGoalCommon(id)
    {
        xGoal::SetFlags(2);
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Exit(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    S32 NPCMessage(NPCMsg* msg);
    F32 tmr_countdown; // offset 0x4C, size 0x4
};

class zNPCGoalDogPounce : public zNPCGoalPushAnim
{
    // total size: 0x54
public:
    zNPCGoalDogPounce(S32 id) : zNPCGoalPushAnim(id)
    {
        xGoal::SetFlags(2);
    }

    S32 NPCMessage(NPCMsg* mail);
    S32 Enter(F32 dt, void* updCtxt);
    S32 Exit(F32 dt, void* updCtxt);
    void Detonate();
};

class zNPCGoalDogDash : public zNPCGoalLoopAnim
{
    // total size: 0x6C
public:
    zNPCGoalDogDash(S32 id) : zNPCGoalLoopAnim(id)
    {
        xGoal::SetFlags(2);
    }

    S32 Enter(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    void HoundPlayer(F32 dt);
};

xFactoryInst* GOALCreate_Standard(S32 who, RyzMemGrow* grow, void*);
void GOALDestroy_Goal(xFactoryInst* inst);

#endif
