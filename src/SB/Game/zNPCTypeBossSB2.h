#ifndef ZNPCTYPEBOSSSB2_H
#define ZNPCTYPEBOSSSB2_H

#include "zNPCTypeBoss.h"
#include "zNPCTypeBossPlankton.h"
#include "zNPCGoalCommon.h"

struct zNPCNewsFish;

struct zNPCB_SB2 : zNPCBoss
{
    enum move_enum
    {
        MOVE_NONE,
        MOVE_HALT,
        MOVE_FOLLOW,
        MOVE_Y
    };

    enum hand_enum
    {
        LEFT_HAND,
        RIGHT_HAND
    };

    struct node_data
    {
        zEntDestructObj* ent;
        F32 pulse;
        xLightKit* old_light_kit;
        RpAtomic* skin_model;
        RwMatrixTag* skin_mat;
        union
        {
            struct
            {
                xModelTagWithNormal tag;
                xModelTag uptag;
            } v2n1;
            struct
            {
                xModelTag tag[3];
            } v3;
        };
    };

    struct hand_data
    {
        U8 hurt_player;
        U8 hit_platforms;
        xModelTag head_tag[4];
        xModelTag tail_tag[4];
        xEnt* ent;
        F32 radius;
    };

    struct bound_data
    {
        xEnt ent;
        xMat4x3 mat;
        xMat3x3 rot_mat;
    };

    struct platform_data
    {
        U8 stopping;
        xEnt* ent;
        F32 radius;
        xMat3x3 mat;
        struct
        {
            xVec3 axis;
            F32 ang;
            F32 end_ang;
            F32 vel;
            F32 max_vel;
            F32 accel;
        } spin;
    };

    enum slug_stage
    {
        SLUG_INACTIVE,
        SLUG_AIM,
        SLUG_DELAY,
        SLUG_DYING,
        SLUG_FIRE
    };

    struct slug_data
    {
        slug_stage stage;
        U8 spun;
        U8 abandoned;
        F32 time;
        F32 stage_delay;
        xEnt* ent;
        platform_data* target;
        xMat4x3 mat;
        xMat4x3 dmat;
        xVec3 move_dir;
        F32 dist;
        F32 vel;
        F32 accel;
        F32 end_dist;
        F32 max_vel;
        F32 ydist;
        F32 yvel;
        F32 end_ydist;
        U32 sound_handle;
    };

    struct move_config
    {
        F32 accel;
        F32 max_vel;
        F32 turn_accel;
        F32 turn_max_vel;
    };

    struct move_data : move_config
    {
        xVec2 dest;
        xVec2 dir;
        F32 vel;
        F32 yaw;
        F32 yaw_vel;
    };

    struct
    {
        bool face_player;
        bool face_follow;
        bool dizzy;
        move_enum move;
        bool vulnerable;
        bool cruise_exploding;
        bool cruise_hit_body;
        bool cruise_hit_target;
        bool nodes_taken;
        bool updated;
    } flag;
    S32 life;
    S32 round;
    S32 stage;
    F32 delay;
    F32 stage_delay;
    F32 player_damage_timer;
    U32 old_player_health;
    hand_enum active_hand;
    zNPCBPlankton* plankton;
    zNPCNewsFish* newsfish;
    U8 said_intro;
    xModelInstance* models[4];
    node_data nodes[9];
    hand_data hands[2];
    platform_data platforms[16];
    bound_data bounds[5];
    slug_data slugs[3];
    struct
    {
        xVec2 dir;
        F32 vel;
        F32 accel;
        F32 max_vel;
    } turn;
    move_data move;
    struct
    {
        F32 begin;
        F32 end;
        F32 time;
        F32 end_time;
    } ymove;
    struct
    {
        xVec3 body;
        xVec3 mouth;
        xVec3 hand[2];
    } sound_loc;
    F32 node_pulse;
    struct
    {
        xLightKit kit;
        xLightKitLight light[8];
    } glow_light;

    zNPCB_SB2(S32 myType);
    void render_debug();
    void decompose();
    void HoldUpDude();
};

struct zNPCGoalBossSB2Intro : zNPCGoalCommon
{
    zNPCB_SB2& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBossSB2Idle : zNPCGoalCommon
{
    U8 transitioning;
    zNPCB_SB2& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBossSB2Taunt : zNPCGoalCommon
{
    zNPCB_SB2& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBossSB2Dizzy : zNPCGoalCommon
{
    U8 sicked;
    zNPCB_SB2& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBossSB2Hit : zNPCGoalCommon
{
    zNPCB_SB2& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBossSB2Hunt : zNPCGoalCommon
{
    U8 following;
    zNPCB_SB2& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBossSB2Swipe : zNPCGoalCommon
{
    U8 started;
    U8 holding;
    U8 said;
    U32 begin_anim;
    U32 loop_anim;
    U32 end_anim;
    zNPCB_SB2& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBossSB2Chop : zNPCGoalCommon
{
    U8 started;
    U8 targetted;
    U32 begin_anim;
    U32 loop_anim;
    U32 end_anim;
    zNPCB_SB2& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBossSB2Karate : zNPCGoalCommon
{
    U8 emitted[3];
    U8 started;
    zNPCB_SB2& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBossSB2Death : zNPCGoalCommon
{
    zNPCB_SB2& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
    S32 Process(en_trantype*, float, void*, xScene*);
};

#endif
