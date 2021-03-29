#ifndef ZNPCTYPEBOSSPLANKTON_H
#define ZNPCTYPEBOSSPLANKTON_H

#include "zNPCTypeBoss.h"
#include "zNPCGoalCommon.h"
#include "zEntDestructObj.h"

#include "../Core/x/xDecal.h"
#include "../Core/x/xLaserBolt.h"
#include "../Core/x/xTimer.h"

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
        int32 crony_size;
        uint8 fuse_detected;
        uint8 fuse_destroyed;
        float32 fuse_detect_time;
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
    float32 delay;
    xQuat gun_tilt;
    float32 ambush_delay;
    float32 beam_duration;
    float32 stun_duration;
    xDecalEmitter beam_ring;
    xDecalEmitter beam_glow;
    xLaserBoltEmitter beam;
    xParEmitter* beam_charge;
    struct
    {
        xVec3 center;
        float32 radius;
    } orbit;
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
        float32 delay;
        float32 max_delay;
    } follow;
    struct
    {
        uint8 moreFlags;
    } old;
    zNPCBoss* crony;
    territory_data territory[8];
    int32 territory_size;
    int32 active_territory;
    zNPCNewsFish* newsfish;
    uint32 old_player_health;
    uint8 played_intro;

    zNPCBPlankton(int32 myType);
};

struct zNPCGoalBPlanktonIdle : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBPlanktonAttack : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBPlanktonAmbush : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBPlanktonFlank : zNPCGoalCommon
{
    float32 accel;
    zNPCBPlankton& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBPlanktonEvade : zNPCGoalCommon
{
    float32 evade_delay;
    zNPCBPlankton& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBPlanktonHunt : zNPCGoalCommon
{
    xVec3 player_loc;
    zNPCBPlankton& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBPlanktonTaunt : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBPlanktonMove : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBPlanktonStun : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBPlanktonFall : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBPlanktonDizzy : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
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

    float32 emitted;
    substate_enum substate;
    zNPCBPlankton& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBPlanktonWall : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBPlanktonMissle : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

struct zNPCGoalBPlanktonBomb : zNPCGoalCommon
{
    zNPCBPlankton& owner;

    static xFactoryInst* create(int32 who, RyzMemGrow* grow, void* info);
};

#endif