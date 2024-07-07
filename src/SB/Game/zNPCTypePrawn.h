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
        F32 duration;
        S32 sound_interval;
        struct
        {
            F32 size;
            F32 alpha;
            F32 vel;
            F32 accel;
            F32 emit_delay;
            F32 grow;
            F32 fade_dist;
            F32 kill_dist;
            F32 follow;
            F32 hit_radius;
            xVec3 hit_offset;
        } ring;
    };

    struct ring_segment
    {
        xModelInstance* model;
        xVec3 origin;
        F32 dist;
        F32 vel;
        U32 sound_handle;
        xMat4x3 mat;
    };

    struct squiggle_segment
    {
        xMat4x3 mat;
        struct
        {
            F32 freq;
            F32 offset;
            F32 move;
        } layer[3];
    };

    config cfg;
    U8 firing;
    xVec3 loc;
    xVec3 dir;
    xMat4x3 mat;
    F32 time;
    struct
    {
        RpAtomic* model_data;
        F32 emit_time;
        fixed_queue<ring_segment, 31> queue;
    } ring;
    struct
    {
        squiggle_segment set[8];
        F32 alpha;
        F32 scale;
    } squiggle;
    S32 ring_sounds;
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
        S32 min;
        S32 max;
    };

    struct
    {
    } flag;
    S32 life;
    S32 round;
    U8 face_player;
    xVec2 look_dir;
    z_disco_floor* disco;
    zNPCSpawner* spawner[3];
    U32 danger_mask;
    floor_state_enum floor_state;
    S32 floor_state_index;
    U32 floor_state_counter;
    F32 floor_time;
    F32 delay;
    U8 first_update;
    U8 fighting;
    struct
    {
        U8 change;
        floor_state_enum floor_state;
        U32 counter;
        range_type pattern;
        F32 transition_delay;
        F32 state_delay;
    } pending;
    struct
    {
        F32 sin_pitch;
        F32 cos_pitch;
    } precomp;
    struct
    {
        F32 vel;
        F32 accel;
        F32 max_vel;
    } turn;
    aqua_beam beam;
    xVec3 closeup_loc[4][8];
    xModelInstance* closeup_model[8];
    U32 closeups_used;

    zNPCPrawn(S32 myType);
};

struct zNPCGoalPrawnIdle : zNPCGoalCommon
{
    zNPCGoalPrawnIdle(S32 goalID) : zNPCGoalCommon(goalID)
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
    S32 sweeps;
    F32 sweep_dir;
    F32 delay;

    zNPCGoalPrawnBeam(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalPrawnBowl : zNPCGoalCommon
{
    U8 aiming;

    zNPCGoalPrawnBowl(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalPrawnDamage : zNPCGoalCommon
{
    zNPCGoalPrawnDamage(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalPrawnDeath : zNPCGoalCommon
{
    zNPCGoalPrawnDeath(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

#endif
