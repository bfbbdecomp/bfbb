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
        float32 pulse;
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
        uint8 hurt_player;
        uint8 hit_platforms;
        xModelTag head_tag[4];
        xModelTag tail_tag[4];
        xEnt* ent;
        float32 radius;
    };

    struct bound_data
    {
        xEnt ent;
        xMat4x3 mat;
        xMat3x3 rot_mat;
    };

    struct platform_data
    {
        uint8 stopping;
        xEnt* ent;
        float32 radius;
        xMat3x3 mat;
        struct
        {
            xVec3 axis;
            float32 ang;
            float32 end_ang;
            float32 vel;
            float32 max_vel;
            float32 accel;
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
        uint8 spun;
        uint8 abandoned;
        float32 time;
        float32 stage_delay;
        xEnt* ent;
        platform_data* target;
        xMat4x3 mat;
        xMat4x3 dmat;
        xVec3 move_dir;
        float32 dist;
        float32 vel;
        float32 accel;
        float32 end_dist;
        float32 max_vel;
        float32 ydist;
        float32 yvel;
        float32 end_ydist;
        uint32 sound_handle;
    };

    struct move_config
    {
        float32 accel;
        float32 max_vel;
        float32 turn_accel;
        float32 turn_max_vel;
    };

    struct move_data : move_config
    {
        xVec2 dest;
        xVec2 dir;
        float32 vel;
        float32 yaw;
        float32 yaw_vel;
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
    int32 life;
    int32 round;
    int32 stage;
    float32 delay;
    float32 stage_delay;
    float32 player_damage_timer;
    uint32 old_player_health;
    hand_enum active_hand;
    zNPCBPlankton* plankton;
    zNPCNewsFish* newsfish;
    uint8 said_intro;
    xModelInstance* models[4];
    node_data nodes[9];
    hand_data hands[2];
    platform_data platforms[16];
    bound_data bounds[5];
    slug_data slugs[3];
    struct
    {
        xVec2 dir;
        float32 vel;
        float32 accel;
        float32 max_vel;
    } turn;
    move_data move;
    struct
    {
        float32 begin;
        float32 end;
        float32 time;
        float32 end_time;
    } ymove;
    struct
    {
        xVec3 body;
        xVec3 mouth;
        xVec3 hand[2];
    } sound_loc;
    float32 node_pulse;
    struct
    {
        xLightKit kit;
        xLightKitLight light[8];
    } glow_light;

    zNPCB_SB2(int32 myType);
};

struct zNPCGoalBossSB2Intro : zNPCGoalCommon
{
    zNPCB_SB2& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBossSB2Idle : zNPCGoalCommon
{
    uint8 transitioning;
    zNPCB_SB2& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBossSB2Taunt : zNPCGoalCommon
{
    zNPCB_SB2& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBossSB2Dizzy : zNPCGoalCommon
{
    uint8 sicked;
    zNPCB_SB2& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBossSB2Hit : zNPCGoalCommon
{
    zNPCB_SB2& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBossSB2Hunt : zNPCGoalCommon
{
    uint8 following;
    zNPCB_SB2& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBossSB2Swipe : zNPCGoalCommon
{
    uint8 started;
    uint8 holding;
    uint8 said;
    uint32 begin_anim;
    uint32 loop_anim;
    uint32 end_anim;
    zNPCB_SB2& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBossSB2Chop : zNPCGoalCommon
{
    uint8 started;
    uint8 targetted;
    uint32 begin_anim;
    uint32 loop_anim;
    uint32 end_anim;
    zNPCB_SB2& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBossSB2Karate : zNPCGoalCommon
{
    uint8 emitted[3];
    uint8 started;
    zNPCB_SB2& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBossSB2Death : zNPCGoalCommon
{
    zNPCB_SB2& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

#endif