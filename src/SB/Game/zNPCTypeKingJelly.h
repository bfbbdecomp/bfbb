#ifndef ZNPCTYPEKINGJELLY_H
#define ZNPCTYPEKINGJELLY_H

#include "zNPCTypeSubBoss.h"
#include "zNPCGoalCommon.h"
#include "zNPCGoals.h"
#include "xEnt.h"
#include "containers.h"
#include "xBehaviour.h"
#include "zNPCTypeAmbient.h"

struct lightning_ring
{
    U8 active;
    xVec3 center;
    F32 segment_length;
    F32 min_height;
    F32 max_height;
    F32 min_radius;
    F32 max_radius; //0x20?
    F32 delay;
    F32 accel;
    F32 max_vel;
    F32 width;
    struct
    {
        F32 height;
        F32 radius;
        F32 vel;
        F32 accel;
        F32 time; //0x44??
    } current;
    struct
    {
        U8 line;
        F32 thickness;
        iColor_tag color;
        F32 rot_radius;
        F32 degrees; //0x58?
    } property;
    zLightning* arcs[8];
    U32 arcs_size; //0x7c
    void (*update_callback)(lightning_ring&, F32);

    void create();
};

struct zNPCKingJelly : zNPCSubBoss
{
    enum shockstate_enum
    {
        SS_START,
        SS_WARM_UP,
        SS_RELEASE,
        SS_COOL_DOWN,
        SS_STOP,
        MAX_SS
    };

    struct child_data
    {
        zNPCCommon* npc;
        U8 wave; //0x5
        U8 active;
        struct
        {
            xBaseEventCB eventFunc;
            void (*update)(xEnt*, xScene*, F32);
            void (*bupdate)(xEnt*, xVec3*);
            void (*move)(xEnt*, xScene*, F32, xEntFrame*);
            void (*render)(xEnt*);
            void (*updateTimerFunc)(xEnt*);
            void (*transl)(xEnt*, xVec3*, xMat4x3*);
        } callback;
        struct
        {
            U16 model;
            U8 pflags;
            U8 moreFlags;
            U8 flg_colCheck;
            U8 flg_penCheck;
            U8 chkby;
            U8 penby;
        } flags;
    };

    struct
    {
        U8 moreFlags; //0x2B4
    } old;
    struct
    {
        bool fighting;
        bool died;
        bool charging;
        bool stop_moving;
        bool updated;
    } flag;
    S32 round; //0x2BC
    S32 attack; //0x2C0
    S32 life; // 0x2C4
    U32 player_life; //
    S32 show_vertex; //
    U8 enabled; //
    shockstate_enum shockstate; //
    F32 spawn_particle_vel; //0x2D8
    xModelInstance* submodel[4];
    struct
    {
        U8 active; //0x2EC
        S32 count; //0x2f0
        F32 intensity;
        F32 delay;
    } blink;
    struct
    {
        F32 last_yaw;
        xVec3 last_target;
    } camera;
    child_data children[32];
    U32 children_size; //0x88C
    F32 last_tentacle_shock;
    zLightning* tentacle_lightning[7];
    xVec3 tentacle_points[13][7];
    lightning_ring ambient_rings[3];
    lightning_ring wave_rings[4];
    U8 disable_tentacle_damage; // 0x1090
    F32 next_pulse;
    F32 last_pulse;
    zEnt* curtain_ent;
    xModelInstance* curtain_model[5];
    U8 first_update; //0x10B4
    xAnimState* animState; // offset 0x157C, size 0x4           //copied from patrick comment not true
    xAnimTransitionList*
        animTranList; // offset 0x1580, size 0x4       //copied from patrick comment not true

    zNPCKingJelly(S32 myType);
    void Setup();
    void Destroy();
    U32 AnimPick(S32 rawgoal, en_NPC_GOAL_SPOT gspot, xGoal* goal);
    void BUpdate(xVec3*);
    void SelfSetup();
    void init_child(zNPCKingJelly::child_data&, zNPCCommon&, int);
    void disable_child(zNPCKingJelly::child_data&);
    void enable_child(zNPCKingJelly::child_data& child);
    S32 max_strikes();
    void load_model();
    void load_curtain_model();
    void reset_curtain();
    void decompose();
    void post_decompose();
    void vanish();
    void reappear();
    xVec3* get_bottom();
    void on_change_ambient_ring(const tweak_info&);
    void on_change_fade_obstructions(const tweak_info&);
    void render_debug();
    void create_tentacle_lightning();
    void refresh_tentacle_points();
    void refresh_tentacle_points(S32);
    void generate_spawn_particles();
    void update_round();
};

struct zNPCGoalKJIdle : zNPCGoalCommon
{
    F32 attack_delay;

    zNPCGoalKJIdle(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalKJBored : zNPCGoalCommon
{
    zNPCGoalKJBored(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalKJSpawnKids : zNPCGoalCommon
{
    F32 delay;
    S32 cycle;
    U8 spawned;
    U8 spewed;
    S32 child_count;
    S32 spawn_count;

    zNPCGoalKJSpawnKids(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalKJTaunt : zNPCGoalCommon
{
    zNPCGoalKJTaunt(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalKJShockGround : zNPCGoalCommon
{
    F32 delay;
    S32 strikes;

    zNPCGoalKJShockGround(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalKJDamage : zNPCGoalCommon
{
    zNPCGoalKJDamage(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    S32 Exit(F32 dt, void* updCtxt);
    S32 Enter(F32 dt, void* updCtxt);
};

struct zNPCGoalKJDeath : zNPCGoalCommon
{
    S32 Enter(float dt, void* updCtxt);
    S32 Exit(float dt, void* updCtxt);
    S32 Process(en_trantype* trantype, float dt, void* updCtxt, xScene* xscn);
    zNPCGoalKJDeath(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

xAnimTable* ZNPC_AnimTable_KingJelly();

#endif
