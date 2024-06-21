#ifndef ZNPCTYPEDUTCHMAN_H
#define ZNPCTYPEDUTCHMAN_H

#include "zNPCTypeSubBoss.h"
#include "zNPCGoalCommon.h"
#include "../Core/x/containers.h"

struct zNPCDutchman : zNPCSubBoss
{
    enum move_enum
    {
        MOVE_NONE,
        MOVE_FOLLOW,
        MOVE_ACCEL,
        MOVE_VEL,
        MOVE_STOP
    };

    enum fade_enum
    {
        FADE_NONE,
        FADE_DISSOLVE,
        FADE_TELEPORT,
        FADE_COALESCE
    };

    struct move_info
    {
        xVec3 dest;
        xVec3 vel;
        xVec3 accel;
        xVec3 max_vel;
    };

    struct beam_end
    {
        uint8 extend;
        xVec3 loc;
    };

    struct beam_info
    {
        uint8 extend;
        xVec3 start_loc;
        beam_end end[16];
        uint32 segments;
        float32 alpha;
        float32 thickness;
    };

    struct wave_data
    {
        uint8 clipped;
        xVec3 loc;
        xVec3 dir;
        float32 dist;
        float32 clip_dist;
        float32 vel;
        xVec3 sound_loc;
        uint32 sound_handle;
        int32 emitted[3];
    };

    struct slime_slice
    {
        float32 age;
        float32 dist;
    };

    struct
    {
        bool face_player;
        bool fighting;
        bool beaming;
        bool was_beaming;
        bool hurting;
        bool flaming;
        bool eye_glow;
        bool hand_trail;
        move_enum move;
        fade_enum fade;
    } flag;
    int32 life;
    int32 round;
    int32 stage;
    float32 delay;
    float32 alpha;
    struct
    {
        xVec2 dir;
        float32 vel;
        float32 accel;
        float32 max_vel;
    } turn;
    move_info move;
    struct
    {
        uint8 moreFlags;
    } old;
    beam_info beam[2];
    static_queue<wave_data> waves;
    struct
    {
        float32 size;
        float32 time;
        int32 emitted;
        uint8 splash_break;
        xVec3 splash_loc;
        uint8 blob_break;
        xVec3 blob_loc;
        float32 imax_dist;
        xMat3x3 blob_mat;
    } flames;
    struct
    {
        xVec3 loc[2];
    } hand_trail;
    struct
    {
        float32 time;
        float32 duration;
        float32 iduration;
        xVec3 sound_loc;
        uint32 sound_handle;
    } fade;
    struct
    {
        static_queue<slime_slice> slices;
        xVec3 origin;
        xVec3 dir;
    } slime;
    struct
    {
        float32 size;
    } eye_glow;
    zNPCLassoInfo lasso_info;
    RwRaster* laser_raster;

    zNPCDutchman(int32 myType);
};

struct zNPCGoalDutchmanNil : zNPCGoalCommon
{
    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalDutchmanInitiate : zNPCGoalCommon
{
    zNPCDutchman& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalDutchmanIdle : zNPCGoalCommon
{
    zNPCDutchman& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalDutchmanDisappear : zNPCGoalCommon
{
    zNPCDutchman& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalDutchmanTeleport : zNPCGoalCommon
{
    zNPCDutchman& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalDutchmanReappear : zNPCGoalCommon
{
    zNPCDutchman& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalDutchmanBeam : zNPCGoalCommon
{
    enum substate_enum
    {
        SS_STOP,
        SS_FOCUS,
        SS_FIRE,
        SS_UNFOCUS,
        SS_DONE
    };

    struct beam_data
    {
        xVec2 origin;
        xVec2 dir;
        float32 dist;
        float32 vel;
        float32 wave_offset;
        uint32 ribbon_flags;
        xVec3 loc;
        uint32 impact_sound;
        uint32 glow_sound;
    };

    substate_enum substate;
    int32 shots;
    beam_data beam[2];
    zNPCDutchman& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalDutchmanFlame : zNPCGoalCommon
{
    enum substate_enum
    {
        SS_WAIT,
        SS_MOVE,
        SS_STOP,
        SS_DONE
    };

    substate_enum substate;
    xVec2 move_dir;
    uint8 stopped;
    zNPCDutchman& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalDutchmanPostFlame : zNPCGoalCommon
{
    zNPCDutchman& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalDutchmanCaught : zNPCGoalCommon
{
    uint8 grabbed;
    zNPCDutchman& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalDutchmanDamage : zNPCGoalCommon
{
    uint8 moving;
    zNPCDutchman& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalDutchmanDeath : zNPCGoalCommon
{
    enum substate_enum
    {
        SS_DISSOLVE,
        SS_DISPERSE,
        SS_WINK,
        SS_DONE
    };

    substate_enum substate;
    float32 emit_frac;
    float32 min_y;
    float32 max_y;
    zNPCDutchman& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

#endif