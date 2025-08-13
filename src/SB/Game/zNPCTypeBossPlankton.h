#ifndef ZNPCTYPEBOSSPLANKTON_H
#define ZNPCTYPEBOSSPLANKTON_H

#include "zNPCTypeBoss.h"
#include "zNPCTypeVillager.h"
#include "zNPCGoalCommon.h"
#include "zEntDestructObj.h"

#include "xDecal.h"
#include "xLaserBolt.h"
#include "xTimer.h"
#include "zNPCGoals.h"
#include "xParEmitter.h"
#include "xLaserBolt.h"

namespace auto_tweak
{
    template <class T1, class T2>
    void load_param(T1&, T2, T2, T2, xModelAssetParam*, U32, const char*);
};

struct zNPCBPlankton : zNPCBoss
{
    enum move_enum
    {
        MOVE_NONE,
        MOVE_ACCEL,
        MOVE_STOP,
        MOVE_ORBIT
    };

    enum follow_enum
    {
        FOLLOW_NONE,
        FOLLOW_PLAYER,
        FOLLOW_CAMERA
    };

    enum mode_enum
    {
        MODE_BUDDY,
        MODE_HARASS
    };

    struct move_info
    {
        xVec3 dest;
        xVec3 vel;
        xVec3 accel;
        xVec3 max_vel;
    };

    struct territory_data
    {
        zMovePoint* origin;
        xEnt* platform;
        zEntDestructObj* fuse;
        xTimer* timer;
        zNPCCommon* crony[8];
        S32 crony_size;
        U8 fuse_detected;
        U8 fuse_destroyed;
        F32 fuse_detect_time;
    };

    struct
    {
        bool updated; //0x2b4
        bool face_player; //0x2b5
        bool attacking; //0x2b6
        bool hunt; //0x2b7
        bool aim_gun;
        move_enum move;
        follow_enum follow;
    } flag;
    mode_enum mode;
    F32 delay; //0x2c8
    xQuat gun_tilt;
    F32 ambush_delay;
    F32 beam_duration; // 0x2e0
    F32 stun_duration; // 0x2e4
    xDecalEmitter beam_ring;
    xDecalEmitter beam_glow;
    xLaserBoltEmitter beam;
    xParEmitter* beam_charge;
    struct
    {
        xVec3 center;
        F32 radius;
    } orbit;
    struct
    {
        xVec2 dir;
        F32 vel;
        F32 accel;
        F32 max_vel;
    } turn;
    move_info move;
    struct
    {
        F32 delay;
        F32 max_delay;
    } follow;
    struct
    {
        U8 moreFlags; //0x4ac
    } old;
    zNPCBoss* crony;
    territory_data territory[8];
    S32 territory_size; //0x694
    S32 active_territory;
    zNPCNewsFish* newsfish;
    U32 old_player_health; //0x6a0
    U8 played_intro; //0x6a4

    zNPCBPlankton(S32 myType);
    void Init(xEntAsset*);
    void Setup();
    void PostSetup();
    void Reset();
    void Destroy();
    void Process(xScene*, float);
    S32 SysEvent(xBase*, xBase*, unsigned int, const float*, xBase*, int*);
    void Render();
    void RenderExtraPostParticles();
    void ParseINI();
    void SelfSetup();
    U32 AnimPick(int, en_NPC_GOAL_SPOT, xGoal*);
    S32 next_goal();
    void render_debug();
    void update_turn(F32);
    void update_move(F32);
    void check_player_damage();
    void reset_territories();
    void update_animation(F32);
    void update_follow(F32);
    void update_follow_player(F32);
    void update_follow_camera(F32);
    void update_aim_gun(F32);
    void update_dialog(F32);
    void init_beam();
    void setup_beam();
    void reset_beam();
    void vanish();
    void reappear();
    U32 crony_attacking() const;
    void next_territory();
    S32 have_cronies() const;
    S32 player_left_territory();
    void say(int, int, bool);
    void sickum();
    void aim_gun(xAnimPlay*, xQuat*, xVec3*, int);
    void here_boy();
    void follow_player();
    void follow_camera();
    void reset_speed();
    void refresh_orbit();
    S32 IsAlive();
    void give_control();
    U8 ColPenFlags() const;
    U8 ColChkFlags() const;
    U8 ColChkByFlags() const;

    // Not yet organized / WEAK
    void enable_emitter(xParEmitter&) const;
    void disable_emitter(xParEmitter&) const;
    void face_player();
};

struct zNPCGoalBPlanktonIdle : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    zNPCGoalBPlanktonIdle(S32 goalID, zNPCBPlankton& npc) : zNPCGoalCommon(goalID), owner(npc)
    {
    }

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
    S32 Enter(F32, void*);
    S32 Exit(F32, void*);

    S32 get_yaw(F32&, F32&) const;
    S32 apply_yaw(F32);
};

struct zNPCGoalBPlanktonAttack : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    zNPCGoalBPlanktonAttack(S32 goalID, zNPCBPlankton& npc) : zNPCGoalCommon(goalID), owner(npc)
    {
    }

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
    S32 Enter(F32, void*);
    S32 Exit(F32, void*);
};

struct zNPCGoalBPlanktonAmbush : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    zNPCGoalBPlanktonAmbush(S32 goalID, zNPCBPlankton& npc) : zNPCGoalCommon(goalID), owner(npc)
    {
    }

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
    S32 Enter(F32, void*);
    S32 Exit(F32, void*);
};

struct zNPCGoalBPlanktonFlank : zNPCGoalCommon
{
    F32 accel;
    zNPCBPlankton& owner;

    zNPCGoalBPlanktonFlank(S32 goalID, zNPCBPlankton& npc) : zNPCGoalCommon(goalID), owner(npc)
    {
    }

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBPlanktonEvade : zNPCGoalCommon
{
    F32 evade_delay;
    zNPCBPlankton& owner;

    zNPCGoalBPlanktonEvade(S32 goalID, zNPCBPlankton& npc) : zNPCGoalCommon(goalID), owner(npc)
    {
    }

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBPlanktonHunt : zNPCGoalCommon
{
    xVec3 player_loc;
    zNPCBPlankton& owner;

    zNPCGoalBPlanktonHunt(S32 goalID, zNPCBPlankton& npc) : zNPCGoalCommon(goalID), owner(npc)
    {
    }

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);

    S32 Enter(F32, void*);
    S32 Exit(F32, void*);
};

struct zNPCGoalBPlanktonTaunt : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    zNPCGoalBPlanktonTaunt(S32 goalID, zNPCBPlankton& npc) : zNPCGoalCommon(goalID), owner(npc)
    {
    }

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
    S32 Process(en_trantype*, F32, void*, xScene*);
};

struct zNPCGoalBPlanktonMove : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    zNPCGoalBPlanktonMove(S32 goalID, zNPCBPlankton& npc) : zNPCGoalCommon(goalID), owner(npc)
    {
    }

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
    S32 Process(en_trantype*, F32, void*, xScene*);
};

struct zNPCGoalBPlanktonStun : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    zNPCGoalBPlanktonStun(S32 goalID, zNPCBPlankton& npc) : zNPCGoalCommon(goalID), owner(npc)
    {
    }

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
    S32 Enter(F32, void*);
    S32 Exit(F32, void*);
    S32 Process(en_trantype*, F32, void*, xScene*);
};

struct zNPCGoalBPlanktonFall : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    zNPCGoalBPlanktonFall(S32 goalID, zNPCBPlankton& npc) : zNPCGoalCommon(goalID), owner(npc)
    {
    }

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBPlanktonDizzy : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    zNPCGoalBPlanktonDizzy(S32 goalID, zNPCBPlankton& npc) : zNPCGoalCommon(goalID), owner(npc)
    {
    }

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
    S32 Enter(float, void*);
    S32 Exit(float, void*);
};

struct zNPCGoalBPlanktonBeam : zNPCGoalCommon
{
    enum substate_enum
    {
        SS_WARM_UP,
        SS_FIRE,
        SS_COOL_DOWN,
        SS_DONE
    };

    F32 emitted;
    substate_enum substate;
    zNPCBPlankton& owner;

    zNPCGoalBPlanktonBeam(S32 goalID, zNPCBPlankton& npc) : zNPCGoalCommon(goalID), owner(npc)
    {
    }

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
    S32 Enter(float, void*);
    S32 Exit(float, void*);
    S32 Process(en_trantype*, float, void*, xScene*);
    S32 update_cool_down(float);
    S32 update_warm_up(float);
    S32 update_fire(float);
};

struct zNPCGoalBPlanktonWall : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    zNPCGoalBPlanktonWall(S32 goalID, zNPCBPlankton& npc) : zNPCGoalCommon(goalID), owner(npc)
    {
    }

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
    S32 Process(en_trantype*, float, void*, xScene*);
};

struct zNPCGoalBPlanktonMissle : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    zNPCGoalBPlanktonMissle(S32 goalID, zNPCBPlankton& npc) : zNPCGoalCommon(goalID), owner(npc)
    {
    }

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
    S32 Process(en_trantype*, float, void*, xScene*);
};

struct zNPCGoalBPlanktonBomb : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    zNPCGoalBPlanktonBomb(S32 goalID, zNPCBPlankton& npc) : zNPCGoalCommon(goalID), owner(npc)
    {
    }

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
    S32 Enter(float, void*);
    S32 Exit(float, void*);
    S32 Process(en_trantype*, float, void*, xScene*);
};

xAnimTable* ZNPC_AnimTable_BossPlankton();

#endif
