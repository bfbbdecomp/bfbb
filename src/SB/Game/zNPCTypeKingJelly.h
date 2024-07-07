#ifndef ZNPCTYPEKINGJELLY_H
#define ZNPCTYPEKINGJELLY_H

#include "zNPCTypeSubBoss.h"
#include "zNPCGoalCommon.h"

struct lightning_ring
{
    U8 active;
    xVec3 center;
    F32 segment_length;
    F32 min_height;
    F32 max_height;
    F32 min_radius;
    F32 max_radius;
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
        F32 time;
    } current;
    struct
    {
        U8 line;
        F32 thickness;
        iColor_tag color;
        F32 rot_radius;
        F32 degrees;
    } property;
    zLightning* arcs[8];
    U32 arcs_size;
    void (*update_callback)(lightning_ring&, F32);
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
        U8 wave;
        U8 active;
        struct
        {
            S32 (*eventFunc)(xBase*, xBase*, U32, F32*, xBase*);
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
        U8 moreFlags;
    } old;
    struct
    {
        bool fighting;
        bool died;
        bool charging;
        bool stop_moving;
        bool updated;
    } flag;
    S32 round;
    S32 attack;
    S32 life;
    U32 player_life;
    S32 show_vertex;
    U8 enabled;
    shockstate_enum shockstate;
    F32 spawn_particle_vel;
    xModelInstance* submodel[4];
    struct
    {
        U8 active;
        S32 count;
        F32 intensity;
        F32 delay;
    } blink;
    struct
    {
        F32 last_yaw;
        xVec3 last_target;
    } camera;
    child_data children[32];
    U32 children_size;
    F32 last_tentacle_shock;
    zLightning* tentacle_lightning[7];
    xVec3 tentacle_points[13][7];
    lightning_ring ambient_rings[3];
    lightning_ring wave_rings[4];
    U8 disable_tentacle_damage;
    F32 next_pulse;
    F32 last_pulse;
    zEnt* curtain_ent;
    xModelInstance* curtain_model[5];
    U8 first_update;

    zNPCKingJelly(S32 myType);
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
};

struct zNPCGoalKJDeath : zNPCGoalCommon
{
    zNPCGoalKJDeath(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

#endif
