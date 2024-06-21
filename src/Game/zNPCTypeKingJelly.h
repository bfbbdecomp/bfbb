#ifndef ZNPCTYPEKINGJELLY_H
#define ZNPCTYPEKINGJELLY_H

#include "zNPCTypeSubBoss.h"
#include "zNPCGoalCommon.h"

struct lightning_ring
{
    uint8 active;
    xVec3 center;
    float32 segment_length;
    float32 min_height;
    float32 max_height;
    float32 min_radius;
    float32 max_radius;
    float32 delay;
    float32 accel;
    float32 max_vel;
    float32 width;
    struct
    {
        float32 height;
        float32 radius;
        float32 vel;
        float32 accel;
        float32 time;
    } current;
    struct
    {
        uint8 line;
        float32 thickness;
        iColor_tag color;
        float32 rot_radius;
        float32 degrees;
    } property;
    zLightning* arcs[8];
    uint32 arcs_size;
    void (*update_callback)(lightning_ring&, float32);
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
        uint8 wave;
        uint8 active;
        struct
        {
            int32 (*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
            void (*update)(xEnt*, xScene*, float32);
            void (*bupdate)(xEnt*, xVec3*);
            void (*move)(xEnt*, xScene*, float32, xEntFrame*);
            void (*render)(xEnt*);
            void (*updateTimerFunc)(xEnt*);
            void (*transl)(xEnt*, xVec3*, xMat4x3*);
        } callback;
        struct
        {
            uint16 model;
            uint8 pflags;
            uint8 moreFlags;
            uint8 flg_colCheck;
            uint8 flg_penCheck;
            uint8 chkby;
            uint8 penby;
        } flags;
    };

    struct
    {
        uint8 moreFlags;
    } old;
    struct
    {
        bool fighting;
        bool died;
        bool charging;
        bool stop_moving;
        bool updated;
    } flag;
    int32 round;
    int32 attack;
    int32 life;
    uint32 player_life;
    int32 show_vertex;
    uint8 enabled;
    shockstate_enum shockstate;
    float32 spawn_particle_vel;
    xModelInstance* submodel[4];
    struct
    {
        uint8 active;
        int32 count;
        float32 intensity;
        float32 delay;
    } blink;
    struct
    {
        float32 last_yaw;
        xVec3 last_target;
    } camera;
    child_data children[32];
    uint32 children_size;
    float32 last_tentacle_shock;
    zLightning* tentacle_lightning[7];
    xVec3 tentacle_points[13][7];
    lightning_ring ambient_rings[3];
    lightning_ring wave_rings[4];
    uint8 disable_tentacle_damage;
    float32 next_pulse;
    float32 last_pulse;
    zEnt* curtain_ent;
    xModelInstance* curtain_model[5];
    uint8 first_update;

    zNPCKingJelly(int32 myType);
};

struct zNPCGoalKJIdle : zNPCGoalCommon
{
    float32 attack_delay;

    zNPCGoalKJIdle(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalKJBored : zNPCGoalCommon
{
    zNPCGoalKJBored(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalKJSpawnKids : zNPCGoalCommon
{
    float32 delay;
    int32 cycle;
    uint8 spawned;
    uint8 spewed;
    int32 child_count;
    int32 spawn_count;

    zNPCGoalKJSpawnKids(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalKJTaunt : zNPCGoalCommon
{
    zNPCGoalKJTaunt(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalKJShockGround : zNPCGoalCommon
{
    float32 delay;
    int32 strikes;

    zNPCGoalKJShockGround(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalKJDamage : zNPCGoalCommon
{
    zNPCGoalKJDamage(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalKJDeath : zNPCGoalCommon
{
    zNPCGoalKJDeath(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

#endif