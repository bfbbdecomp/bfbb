#ifndef ZNPCTYPEBOSSPLANKTON_H
#define ZNPCTYPEBOSSPLANKTON_H

#include "zNPCTypeBoss.h"
#include "zNPCGoalCommon.h"
#include "zEntDestructObj.h"

#include "xDecal.h"
#include "xLaserBolt.h"
#include "xTimer.h"

struct zNPCNewsFish;

struct zNPCBPlankton : zNPCBoss
{
    enum move_enum
    {
        MOVE_NONE,
        MOVE_ACCEL,
        MOVE_STOP,
        MOVE_ORBIT
    };

    enum follow_enum
    {
        FOLLOW_NONE,
        FOLLOW_PLAYER,
        FOLLOW_CAMERA
    };

    enum mode_enum
    {
        MODE_BUDDY,
        MODE_HARASS
    };

    struct move_info
    {
        xVec3 dest;
        xVec3 vel;
        xVec3 accel;
        xVec3 max_vel;
    };

    struct territory_data
    {
        zMovePoint* origin;
        xEnt* platform;
        zEntDestructObj* fuse;
        xTimer* timer;
        zNPCCommon* crony[8];
        S32 crony_size;
        U8 fuse_detected;
        U8 fuse_destroyed;
        F32 fuse_detect_time;
    };

    struct
    {
        bool updated;
        bool face_player;
        bool attacking;
        bool hunt;
        bool aim_gun;
        move_enum move;
        follow_enum follow;
    } flag;
    mode_enum mode;
    F32 delay;
    xQuat gun_tilt;
    F32 ambush_delay;
    F32 beam_duration;
    F32 stun_duration;
    xDecalEmitter beam_ring;
    xDecalEmitter beam_glow;
    xLaserBoltEmitter beam;
    xParEmitter* beam_charge;
    struct
    {
        xVec3 center;
        F32 radius;
    } orbit;
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
        F32 delay;
        F32 max_delay;
    } follow;
    struct
    {
        U8 moreFlags;
    } old;
    zNPCBoss* crony;
    territory_data territory[8];
    S32 territory_size;
    S32 active_territory;
    zNPCNewsFish* newsfish;
    U32 old_player_health;
    U8 played_intro;

    zNPCBPlankton(S32 myType);
    void render_debug();
    void update_animation(float);
    S32 IsAlive();
    U8 ColPenFlags() const;
    U8 ColChkFlags() const;
    U8 ColChkByFlags() const;
};

struct zNPCGoalBPlanktonIdle : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBPlanktonAttack : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBPlanktonAmbush : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBPlanktonFlank : zNPCGoalCommon
{
    F32 accel;
    zNPCBPlankton& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBPlanktonEvade : zNPCGoalCommon
{
    F32 evade_delay;
    zNPCBPlankton& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBPlanktonHunt : zNPCGoalCommon
{
    xVec3 player_loc;
    zNPCBPlankton& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBPlanktonTaunt : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
    S32 Process(en_trantype*, float, void*, xScene*);
};

struct zNPCGoalBPlanktonMove : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
    S32 Process(en_trantype*, float, void*, xScene*);
};

struct zNPCGoalBPlanktonStun : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBPlanktonFall : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBPlanktonDizzy : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBPlanktonBeam : zNPCGoalCommon
{
    enum substate_enum
    {
        SS_WARM_UP,
        SS_FIRE,
        SS_COOL_DOWN,
        SS_DONE
    };

    F32 emitted;
    substate_enum substate;
    zNPCBPlankton& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBPlanktonWall : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
    S32 Process(en_trantype*, float, void*, xScene*);
};

struct zNPCGoalBPlanktonMissle : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
    S32 Process(en_trantype*, float, void*, xScene*);
};

struct zNPCGoalBPlanktonBomb : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    static xFactoryInst* create(S32 who, RyzMemGrow* grow, void* info);
    S32 Process(en_trantype*, float, void*, xScene*);
};

xAnimTable * ZNPC_AnimTable_BossPlankton();

#endif
