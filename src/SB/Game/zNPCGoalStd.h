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

    zNPCGoalLoopAnim(S32 myType) : zNPCGoalCommon(myType)
    {
        SetFlags(1 << 1);
    }

    void LoopCountSet(S32 unk); // return type might be wrong
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

struct zNPCGoalPushAnim : zNPCGoalCommon
{
    S32 flg_pushanim;
    F32 lastAnimTime;

    zNPCGoalPushAnim(S32 myType) : zNPCGoalCommon(myType)
    {
        SetFlags((1 << 2) | (1 << 1));
    }

    S32 Enter(F32 dt, void* updCtxt);
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

struct zNPCGoalDead : zNPCGoalCommon
{
    S32 flg_deadinfo;
    U8 old_moreFlags;

    zNPCGoalDead(S32 goalID);

    virtual S32 Enter(F32 dt, void* updCtxt);
    virtual S32 Exit(F32 dt, void* updCtxt);

    void DieQuietly();
    void DieWithAWhimper();
    void DieWithABang();

protected:
    ~zNPCGoalDead();
};

xFactoryInst* GOALCreate_Standard(S32 who, RyzMemGrow* grow, void*);
void GOALDestroy_Goal(xFactoryInst* inst);

#endif
