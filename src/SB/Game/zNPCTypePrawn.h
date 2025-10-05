#ifndef ZNPCTYPEPRAWN_H
#define ZNPCTYPEPRAWN_H

#include "zNPCTypeSubBoss.h"
#include "zNPCGoalCommon.h"
#include "zNPCGoals.h"
#include "zDiscoFloor.h"
#include "zNPCSpawner.h"
#include "containers.h"
#include "xBehaviour.h"

struct sound_data_type
{
    union
    {
        U32 id;
        U32 handle;
        xVec3* loc;
        F32 volume;
    };
};

struct range_type
{
    S32 min;
    S32 max;
};

struct _class_5
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
};

struct config_0
{
    F32 duration;
    S32 sound_interval;
    _class_5 ring;
};

struct _class_8
{
    S32 first;
    S32 range;
    S32 offset;
    S32 size;
};

struct _class_7
{
    F32 duration;
    F32 state_delay;
    F32 transition_delay;
    _class_8 pattern;
};

struct _class_18
{
    S32 first;
    S32 range;
    S32 offset;
    S32 size;
};

struct _class_25
{
    F32 state_delay;
    F32 transition_delay;
    F32 cycle_delay; // 0x100
    S32 pattern_offset;
    S32 pattern_size;
    range_type pattern[20];
};

struct sound_property
{
    U32 asset;
    F32 volume;
    F32 range_inner;
    F32 range_outer;
    F32 delay;
    F32 fade_time;
};

struct _class_14
{
    F32 duration[3];
    F32 state_delay;
    F32 transition_delay;
    _class_18 pattern;
};

struct fire_type : config_0
{
    S32 emit_bone;
    xVec3 offset;
    F32 yaw;
    F32 pitch;
};

namespace auto_tweak
{
    template <class T1, class T2>
    void load_param(T1&, T2, T2, T2, xModelAssetParam*, U32, const char*);
};

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
            F32 grow; //0x1c
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
    U8 firing; //0x3c
    xVec3 loc;
    xVec3 dir;
    xMat4x3 mat;
    F32 time; //0x98
    struct
    {
        RpAtomic* model_data;
        F32 emit_time; //0xa0
        fixed_queue<ring_segment, 31> queue; //0xa4
    } ring;
    struct
    {
        squiggle_segment set[8];
        F32 alpha;
        F32 scale;
    } squiggle;

    S32 ring_sounds; //0xf54
    void reset();
    void start();
    void stop();
    void update(F32);
    void update_rings(F32);
    void kill_ring();
    void render();
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
        S32 min; //0x304
        S32 max; //0x308
    };

    struct
    {
    } flag;
    S32 life; //0x2b8
    S32 round; //0x2bc
    U8 face_player;
    xVec2 look_dir;
    z_disco_floor* disco;
    zNPCSpawner* spawner[3];
    U32 danger_mask; //0x2dc
    floor_state_enum floor_state;
    S32 floor_state_index; //0x2e4
    U32 floor_state_counter;
    F32 floor_time;
    F32 delay; //0x2f0
    U8 first_update;
    U8 fighting;
    struct
    {
        U8 change; //0x2f8
        floor_state_enum floor_state;
        U32 counter; //0x300
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
    void render_debug();
    void Render();
    void update_particles(float);
    void NewTime(xScene*, float);
    void SelfSetup();
    void apply_pending();
    void vanish();
    void reappear();
    void render_closeup();
    void turning() const;
    void update_round();
    void decompose();
    void set_floor_state(zNPCPrawn::floor_state_enum, bool, bool);
    void Damage(en_NPC_DAMAGE_TYPE, xBase*, const xVec3*);

    U8 PhysicsFlags() const;
    U8 ColPenByFlags() const;
    U8 ColChkByFlags() const;
    U8 ColPenFlags() const;
};

struct zNPCGoalPrawnIdle : zNPCGoalCommon
{
    zNPCGoalPrawnIdle(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }

    S32 Enter(float, void*);
    S32 Exit(float, void*);
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

    void update_aim(float);
    zNPCGoalPrawnBeam(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalPrawnBowl : zNPCGoalCommon
{
    U8 aiming;
    S32 Enter(float, void*);
    S32 Exit(float, void*);

    zNPCGoalPrawnBowl(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalPrawnDamage : zNPCGoalCommon
{
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    S32 Exit(float dt, void* updCtxt);
    S32 Enter(F32 dt, void* updCtxt);
    zNPCGoalPrawnDamage(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

struct zNPCGoalPrawnDeath : zNPCGoalCommon
{
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    S32 Exit(float dt, void* updCtxt);
    S32 Enter(F32 dt, void* updCtxt);
    zNPCGoalPrawnDeath(S32 goalID) : zNPCGoalCommon(goalID)
    {
    }
};

xAnimTable* ZNPC_AnimTable_Prawn();

#endif
