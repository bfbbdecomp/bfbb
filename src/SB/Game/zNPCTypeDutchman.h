#ifndef ZNPCTYPEDUTCHMAN_H
#define ZNPCTYPEDUTCHMAN_H

#include "zNPCTypeSubBoss.h"
#include "zNPCGoalCommon.h"
#include "containers.h"
#include "xBehaviour.h"
#include "zNPCTypeCommon.h"
#include "zNPCGoals.h"

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
        xVec3 dest; //0x2ec
        xVec3 vel; //0x2f8
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
        bool flaming; //0x2b9
        bool eye_glow;
        bool hand_trail; //0x2bb
        move_enum move;
        fade_enum fade;
    } flag;
    S32 life; //0x2C4
    S32 round; //0x2C8
    S32 stage; //0x2CC
    F32 delay; //0x2d0
    F32 alpha; //0x2d4
    struct
    {
        xVec2 dir; //0x2d4
        F32 vel; //0x2dc
        F32 accel; //0x2e0
        F32 max_vel; //0x2e4
    } turn;
    move_info move; //0x2e8
    struct
    {
        U8 moreFlags; //0x31c
    } old;
    beam_info beam[2]; //Needed for start_beam func
    static_queue<wave_data> waves; //Needed for start_beam func
    struct
    {
        F32 size; //0x56c
        F32 time; //0x570
        S32 emitted; //0x574
        U8 splash_break;
        xVec3 splash_loc;
        U8 blob_break; //0x588
        xVec3 blob_loc;
        F32 imax_dist; //0x598
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
        U32 sound_handle; //0x5fc
    } fade;
    struct
    {
        static_queue<slime_slice> slices;
        xVec3 origin;
        xVec3 dir;
    } slime;
    struct
    {
        F32 size; //0x62C
    } eye_glow;
    zNPCLassoInfo lasso_info;
    RwRaster* laser_raster;

    zNPCDutchman(S32 myType);
    void Setup();
    void Destroy();
    void Render();
    void SelfSetup();
    void render_debug();
    void update_animation(float);
    void kill_wave(zNPCDutchman::wave_data&);
    void add_splash(const xVec3&, float);
    void vanish();
    void reappear();
    void turn_to_face(const xVec3&);
    void face_player();
    void start_beam();
    void stop_beam();
    void start_flames();
    void stop_flames();
    void get_hand_loc(S32) const;
    void start_hand_trail();
    void stop_hand_trail();
    void reset_lasso_anim();
    void reset_speed();
    void Damage(en_NPC_DAMAGE_TYPE, xBase*, const xVec3*);
    U32 AnimPick(S32 rawgoal, en_NPC_GOAL_SPOT gspot, xGoal* goal);
    void LassoNotify(en_LASSO_EVENT);
    S32 LassoSetup();
    void update_round();
    void decompose();
    void next_goal();
    void goal_delay();
    void start_eye_glow();
    void stop_eye_glow();
    void get_orbit() const; //Weak
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
    S32 Exit(float, void*);

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalDutchmanIdle : zNPCGoalCommon
{
    zNPCDutchman& owner;
    S32 Enter(float, void*);
    S32 Exit(float, void*);
    S32 Process(en_trantype*, float, void*, xScene*);

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalDutchmanDisappear : zNPCGoalCommon
{
    zNPCDutchman& owner;

    zNPCGoalDutchmanDisappear(S32 goalID, zNPCDutchman& npc) : zNPCGoalCommon(goalID), owner(npc)
    {
    }

    S32 Exit(float, void*);
    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalDutchmanTeleport : zNPCGoalCommon
{
    zNPCDutchman& owner;
    S32 Exit(float, void*);

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalDutchmanReappear : zNPCGoalCommon
{
    zNPCDutchman& owner;
    S32 Exit(float, void*);
    void reset_speed();

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
    S32 Exit(float, void*);
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
    S32 Enter(float, void*);
    S32 Exit(float, void*);

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
    S32 Exit(float, void*);

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalDutchmanDamage : zNPCGoalCommon
{
    U8 moving;
    zNPCDutchman& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
    S32 Exit(F32 dt, void* updCtxt);
};

struct delay_goal
{
    U32 goal;
    F32 delay;
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
    S32 Enter(F32 dt, void* updCtxt);
    S32 Exit(F32 dt, void* updCtxt);
    S32 Process(en_trantype* trantype, F32 dt, void* updCtxt, xScene* xscn);
    zNPCDutchman& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

xAnimTable* ZNPC_AnimTable_Dutchman();
U32 dutchman_count;
void Exit();

#endif
