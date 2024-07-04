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
    int32 flg_loopanim;
    uint32 anid_stage[3];
    int32 cnt_loop;
    float32 lastAnimTime;
    uint32 origAnimFlags;
    uint32 animWeMolested;

    // void* __ct(int32 myType);
    void LoopCountSet(int32 unk); // return type might be wrong
};

struct zNPCGoalTaunt : zNPCGoalLoopAnim
{
    int32 Process(en_trantype* trantype, float32 dt, void* updCtxt, xScene* xscn);
    int32 Enter(float32 dt, void* updCtxt);
};

struct zNPCGoalPatThrow : zNPCGoalCommon
{
    int32 Enter(float32 dt, void* updCtxt);
    uint8 CollReview(void*);
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
    int32 flg_alert;
    en_alertslik alertslik;
    float32 tmr_reload;
    xVec3 pos_corner;

    void MoveCorner(float32 dt);
    void GetInArena(float32 dt);
    int32 NPCMessage(NPCMsg* mail);
    int32 Process(en_trantype* trantype, float32 dt, void* updCtxt);
    int32 Resume(float32 dt, void* updCtxt);
    int32 Enter(float32 dt, void* updCtxt);
};

struct zNPCGoalAlertChuck : zNPCGoalCommon
{
    xVec3 dir_attack;
    int32 flg_attack;
    en_alertchuk alertchuk;
    float32 tmr_reload;
    float32 tmr_hover;
    xVec3 dir_zoom;
    float32 dst_zoom;

    int32 ZoomMove(float32 dt);
    void GetInArena(float32 dt);
    int32 Process(en_trantype* trantype, float32 dt, void* updCtxt);
    int32 Resume(float32 dt, void* updCtxt);
    int32 Enter(float32 dt, void* updCtxt);
};

struct zNPCGoalAlertTarTar : zNPCGoalCommon
{
    int32 flg_attack;
    en_alerttart alerttart;
    en_hoppy hoppy;
    float32 tmr_reload;

    void GetInArena(float32 dt);
    int32 HoppyUpdate(en_trantype* trantype, float32 dt);
    int32 NPCMessage(NPCMsg* mail);
    int32 Process(en_trantype* trantype, float32 dt, void* updCtxt);
    int32 Resume(float32 dt, void* updCtxt);
    int32 Enter(float32 dt, void* updCtxt);
};

struct zNPCGoalAlertChomper : zNPCGoalCommon
{
    en_alertchomp alertchomp;
    xVec3 pos_evade;
    float32 tmr_evade;

    int32 CheckSpot();
    int32 MoveEvadePos(xVec3* pos, float32 dt);
    int32 CalcEvadePos(xVec3* pos);
    void GetInArena(float32 dt);
    void CirclePlayer(float32 dt);
    int32 Process(en_trantype* trantype, float32 dt, void* updCtxt);
    int32 Enter(float32 dt, void* updCtxt);
};

struct zNPCGoalAlertFodBzzt : zNPCGoalCommon
{
    int32 flg_alert;
    en_alertbzzt alertbzzt;
    float32 tmr_warmup;
    int32 cnt_nextlos;
    float32 len_laser;
    xVec3 pos_laserSource;
    xVec3 pos_laserTarget;
    RwRGBA rgba_deathRay;
    int32 cnt_inContact;

    void DeathRayRender();
    void DeathRayUpdate(float32 dt);
    void OrbitPlayer(float32 dt);
    int32 Process(en_trantype* trantype, float32 dt, void* updCtxt);
    int32 Resume(float32 dt, void* updCtxt);
    int32 Suspend();
    int32 Exit();
    int32 Enter(float32 dt, void* updCtxt);
    void GetInArena(float32 dt);
};

struct zNPCGoalPushAnim : zNPCGoalCommon
{
    int32 flg_pushanim;
    float32 lastAnimTime;

    // void* __ct(int32 myType);
    int32 Enter(float32 dt, void* updCtxt);
};

struct zNPCGoalAttackFodder;

struct CattleNotify : HAZNotify
{
    zNPCGoalAttackFodder* goal;

    CattleNotify(int32 myType);
    int32 Notify(en_haznote note);
};

struct zNPCGoalAttackFodder : zNPCGoalPushAnim
{
    xVec3 dir_attack;
    int32 flg_attack;
    CattleNotify cbNotify;
    NPCHazard* haz_cattle; // 0x6C

    int32 Process(en_trantype* trantype, float32 dt, void* updCtxt, xScene* xscn);
    int32 Exit(float32 dt, void* updCtxt);
    int32 Enter(float32 dt, void* updCtxt);
    int32 SyncCattleProd();
};

class zNPCGoalAlertFodder : public zNPCGoalCommon
{
public:
    signed int flg_attack; // offset 0x4C, size 0x4
    enum en_alertfod alertfod; // offset 0x50, size 0x4
    float tmr_alertfod; // offset 0x54, size 0x4

    void MoveEvade(float32 dt);
    void GetInArena(float32 dt);
    void FlankPlayer(float32 dt);
    int32 CheckSpot(float32 dt);
    int32 Process(en_trantype* trantype, float32 dt, void* updCtxt, xScene* scene);
    int32 Enter(float32 dt, void* updCtxt);
};

struct zNPCGoalDogLaunch : zNPCGoalCommon
{
    int32 flg_launch;
    xVec3 pos_src;
    xVec3 pos_tgt;
    xParabola parabinfo;
    float32 tmr_remain;

    void BubTrailCone(xVec3* pos, int32 num, xVec3* pos_rand, xVec3* vel_rand, xMat3x3* mat);
    int32 BallisticUpdate(float32 dt);
    void PreCollide();
    int32 Process(en_trantype* trantype, float32 dt, void* updCtxt, xScene* xscn);
    int32 Enter(float32 dt, void* updCtxt);
    uint8 CollReview(void*);
    void SilentSwimout(xVec3* unk1, xVec3* unk2, zMovePoint* unk3);
    void ViciousAttack(xVec3* unk1, xVec3* unk2, zMovePoint* unk3, int32 unk4);
};

struct zNPCGoalDead : zNPCGoalCommon
{
    int32 flg_deadinfo;
    uint8 old_moreFlags;

    zNPCGoalDead(int32 goalID);

    virtual int32 Enter(float32 dt, void* updCtxt);
    virtual int32 Exit(float32 dt, void* updCtxt);

    void DieQuietly();
    void DieWithAWhimper();
    void DieWithABang();

protected:
    ~zNPCGoalDead();
};

xFactoryInst* GOALCreate_Standard(int32 who, RyzMemGrow* grow, void*);
void GOALDestroy_Goal(xFactoryInst* inst);

#endif
