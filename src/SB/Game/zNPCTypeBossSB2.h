#ifndef ZNPCTYPEBOSSSB2_H
#define ZNPCTYPEBOSSSB2_H

#include "zNPCTypeBoss.h"
#include "zNPCTypeBossPlankton.h"
#include "zNPCGoalCommon.h"
#include "zNPCGoals.h"

struct zNPCNewsFish;

namespace auto_tweak
{
    template <class T1, class T2>
    void load_param(T1&, T2, T2, T2, xModelAssetParam*, U32, const char*);
};

struct inode;

struct response_curve
{
    U32 values; // offset 0x0,
    inode* curve; // offset 0x4,
    U32 nodes; // offset 0x8,
    U32 active_node; // offset 0xC,

    void end_t() const;
};
struct node
{
    F32 t;
};

struct inode : node
{
    F32 value[1];
};

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
        U8 hurt_player; //0x714 if [0]
        U8 hit_platforms; //0x715 if [0]
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
        SLUG_INACTIVE, //0x152c if is used slugs[0].stage
        SLUG_AIM,
        SLUG_DELAY,
        SLUG_DYING,
        SLUG_FIRE
    };

    struct slug_data
    {
        slug_stage stage;
        U8 spun;
        U8 abandoned; //0x1531 if [0]
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
        F32 vel; //0x17b8??
        F32 yaw;
        F32 yaw_vel;
    };

    struct
    {
        bool face_player;
        bool face_follow;
        bool dizzy; //0x2b6
        move_enum move;
        bool vulnerable;
        bool cruise_exploding; //0x2bd
        bool cruise_hit_body;
        bool cruise_hit_target; //0x2bf
        bool nodes_taken;
        bool updated; //0x2c1
    } flag;
    S32 life;
    S32 round; //0x2c8
    S32 stage; //0x2cc
    F32 delay; //0x2d0
    F32 stage_delay; //0x2d4
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
        F32 accel; //0x1790
        F32 max_vel; //0x1794
    } turn;
    move_data move;
    struct
    {
        F32 begin; //0x17c4
        F32 end;
        F32 time;
        F32 end_time; //0x17d0
    } ymove;
    struct
    {
        xVec3 body;
        xVec3 mouth; //0x17e0
        xVec3 hand[2];
    } sound_loc;
    F32 node_pulse; //0x1804
    struct
    {
        xLightKit kit;
        xLightKitLight light[8];
    } glow_light;

    zNPCB_SB2(S32 myType);
    void SelfSetup();
    void Destroy();
    void NewTime(xScene*, float);
    void move_nodes();
    void move_hand(zNPCB_SB2::hand_data&, float);
    void update_bounds();
    void update_platforms(float);
    void update_slugs(float);
    void render_debug();
    void decompose();
    void show_nodes();
    void ouchie();
    void destroy_glow_light();
    void Render();
    F32 AttackTimeLeft();
    void HoldUpDude();
    void ThanksImDone();
    void reset_speed();
    S32 player_platform();
    void activate_hand(zNPCB_SB2::hand_enum, bool);
    void deactivate_hand(zNPCB_SB2::hand_enum);
    S32 player_on_ground() const;
    S32 slugs_ready() const;
    void reset_stage();
    void abandon_slugs();
    void set_vulnerable(bool);
    void say(int);
    void choose_hand();
};

struct zNPCGoalBossSB2Intro : zNPCGoalCommon
{
    zNPCB_SB2& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
    S32 Enter(float, void*);
    S32 Exit(float, void*);
};

struct zNPCGoalBossSB2Idle : zNPCGoalCommon
{
    U8 transitioning;
    zNPCB_SB2& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
    S32 Enter(float, void*);
    S32 Exit(float, void*);
};

struct zNPCGoalBossSB2Taunt : zNPCGoalCommon
{
    zNPCB_SB2& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
    S32 Enter(float, void*);
    S32 Exit(float, void*);
};

struct zNPCGoalBossSB2Dizzy : zNPCGoalCommon
{
    U8 sicked;
    zNPCB_SB2& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
    S32 Enter(float, void*);
    S32 Exit(float, void*);
};

struct zNPCGoalBossSB2Hit : zNPCGoalCommon
{
    zNPCB_SB2& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
    S32 Enter(float, void*);
    S32 Exit(float, void*);
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
    S32 Exit(float, void*);
    S32 can_start() const;
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
    S32 Exit(float, void*);
};

struct zNPCGoalBossSB2Karate : zNPCGoalCommon
{
    U8 emitted[3];
    U8 started;
    zNPCB_SB2& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
    S32 Exit(float, void*);
    S32 can_start() const;
};

struct zNPCGoalBossSB2Death : zNPCGoalCommon
{
    zNPCB_SB2& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
    S32 Process(en_trantype*, F32, void*, xScene*);
    S32 Enter(float, void*);
    S32 Exit(float, void*);
};

xAnimTable* ZNPC_AnimTable_BossSB2();

#endif
