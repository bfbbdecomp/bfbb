#ifndef ZNPCTYPEDUTCHMAN_H
#define ZNPCTYPEDUTCHMAN_H

#include "zNPCTypeSubBoss.h"
#include "zNPCGoalCommon.h"
#include "containers.h"

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
        U8 extend;
        xVec3 loc;
    };

    struct beam_info
    {
        U8 extend;
        xVec3 start_loc;
        beam_end end[16];
        U32 segments;
        F32 alpha;
        F32 thickness;
    };

    struct wave_data
    {
        U8 clipped;
        xVec3 loc;
        xVec3 dir;
        F32 dist;
        F32 clip_dist;
        F32 vel;
        xVec3 sound_loc;
        U32 sound_handle;
        S32 emitted[3];
    };

    struct slime_slice
    {
        F32 age;
        F32 dist;
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
    S32 life;
    S32 round;
    S32 stage;
    F32 delay;
    F32 alpha;
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
        U8 moreFlags;
    } old;
    beam_info beam[2];
    static_queue<wave_data> waves;
    struct
    {
        F32 size;
        F32 time;
        S32 emitted;
        U8 splash_break;
        xVec3 splash_loc;
        U8 blob_break;
        xVec3 blob_loc;
        F32 imax_dist;
        xMat3x3 blob_mat;
    } flames;
    struct
    {
        xVec3 loc[2];
    } hand_trail;
    struct
    {
        F32 time;
        F32 duration;
        F32 iduration;
        xVec3 sound_loc;
        U32 sound_handle;
    } fade;
    struct
    {
        static_queue<slime_slice> slices;
        xVec3 origin;
        xVec3 dir;
    } slime;
    struct
    {
        F32 size;
    } eye_glow;
    zNPCLassoInfo lasso_info;
    RwRaster* laser_raster;

    zNPCDutchman(S32 myType);
    void render_debug();
    void update_animation(float);
    void add_splash(const xVec3&, float);
    U8 PhysicsFlags() const;
    U8 ColPenByFlags() const;
    U8 ColChkByFlags() const;
    U8 ColPenFlags() const;
    U8 ColChkFlags() const;
};

struct zNPCGoalDutchmanNil : zNPCGoalCommon
{
    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalDutchmanInitiate : zNPCGoalCommon
{
    zNPCDutchman& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalDutchmanIdle : zNPCGoalCommon
{
    zNPCDutchman& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalDutchmanDisappear : zNPCGoalCommon
{
    zNPCDutchman& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalDutchmanTeleport : zNPCGoalCommon
{
    zNPCDutchman& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalDutchmanReappear : zNPCGoalCommon
{
    zNPCDutchman& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
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
        F32 dist;
        F32 vel;
        F32 wave_offset;
        U32 ribbon_flags;
        xVec3 loc;
        U32 impact_sound;
        U32 glow_sound;
    };

    substate_enum substate;
    S32 shots;
    beam_data beam[2];
    zNPCDutchman& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
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
    U8 stopped;
    zNPCDutchman& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalDutchmanPostFlame : zNPCGoalCommon
{
    zNPCDutchman& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalDutchmanCaught : zNPCGoalCommon
{
    U8 grabbed;
    zNPCDutchman& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalDutchmanDamage : zNPCGoalCommon
{
    U8 moving;
    zNPCDutchman& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
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
    F32 emit_frac;
    F32 min_y;
    F32 max_y;
    zNPCDutchman& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

xAnimTable* ZNPC_AnimTable_Dutchman();

#endif
