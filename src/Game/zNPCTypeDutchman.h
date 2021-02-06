#ifndef ZNPCTYPEDUTCHMAN_H
#define ZNPCTYPEDUTCHMAN_H

#include "zNPCTypeSubBoss.h"
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

#endif