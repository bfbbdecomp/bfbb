#ifndef ZNPCTYPEPRAWN_H
#define ZNPCTYPEPRAWN_H

#include "zNPCTypeSubBoss.h"
#include "zNPCGoalCommon.h"
#include "zDiscoFloor.h"
#include "zNPCSpawner.h"
#include "containers.h"

struct aqua_beam
{
    struct config
    {
        float32 duration;
        int32 sound_interval;
        struct
        {
            float32 size;
            float32 alpha;
            float32 vel;
            float32 accel;
            float32 emit_delay;
            float32 grow;
            float32 fade_dist;
            float32 kill_dist;
            float32 follow;
            float32 hit_radius;
            xVec3 hit_offset;
        } ring;
    };

    struct ring_segment
    {
        xModelInstance* model;
        xVec3 origin;
        float32 dist;
        float32 vel;
        uint32 sound_handle;
        xMat4x3 mat;
    };

    struct squiggle_segment
    {
        xMat4x3 mat;
        struct
        {
            float32 freq;
            float32 offset;
            float32 move;
        } layer[3];
    };

    config cfg;
    uint8 firing;
    xVec3 loc;
    xVec3 dir;
    xMat4x3 mat;
    float32 time;
    struct
    {
        RpAtomic* model_data;
        float32 emit_time;
        fixed_queue<ring_segment, 31> queue;
    } ring;
    struct
    {
        squiggle_segment set[8];
        float32 alpha;
        float32 scale;
    } squiggle;
    int32 ring_sounds;
};

struct zNPCPrawn : zNPCSubBoss
{
    enum floor_state_enum
    {
        FS_SAFE,
        FS_BEGIN,
        FS_BEAM,
        FS_AIM_LANE,
        FS_LANE,
        FS_DANGER
    };

    struct range_type
    {
        int32 min;
        int32 max;
    };

    struct
    {
    } flag;
    int32 life;
    int32 round;
    uint8 face_player;
    xVec2 look_dir;
    z_disco_floor* disco;
    zNPCSpawner* spawner[3];
    uint32 danger_mask;
    floor_state_enum floor_state;
    int32 floor_state_index;
    uint32 floor_state_counter;
    float32 floor_time;
    float32 delay;
    uint8 first_update;
    uint8 fighting;
    struct
    {
        uint8 change;
        floor_state_enum floor_state;
        uint32 counter;
        range_type pattern;
        float32 transition_delay;
        float32 state_delay;
    } pending;
    struct
    {
        float32 sin_pitch;
        float32 cos_pitch;
    } precomp;
    struct
    {
        float32 vel;
        float32 accel;
        float32 max_vel;
    } turn;
    aqua_beam beam;
    xVec3 closeup_loc[4][8];
    xModelInstance* closeup_model[8];
    uint32 closeups_used;

    zNPCPrawn(int32 myType);
};

struct zNPCGoalPrawnIdle : zNPCGoalCommon
{
    zNPCGoalPrawnIdle(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalPrawnBeam : zNPCGoalCommon
{
    enum substate_enum
    {
        SS_AIM,
        SS_FIRE,
        SS_HOLD,
        SS_SWEEP,
        SS_STOP,
        MAX_SS
    };

    substate_enum substate;
    int32 sweeps;
    float32 sweep_dir;
    float32 delay;

    zNPCGoalPrawnBeam(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalPrawnBowl : zNPCGoalCommon
{
    uint8 aiming;

    zNPCGoalPrawnBowl(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalPrawnDamage : zNPCGoalCommon
{
    zNPCGoalPrawnDamage(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalPrawnDeath : zNPCGoalCommon
{
    zNPCGoalPrawnDeath(int32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

#endif
