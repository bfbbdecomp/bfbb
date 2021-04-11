#ifndef ZENTPLAYERBUNGEESTATE_H
#define ZENTPLAYERBUNGEESTATE_H

#include "../Core/x/xDynAsset.h"
#include "../Core/x/xEnt.h"

namespace bungee_state
{
    struct hook_asset : xDynAsset
    {
        uint32 entity;
        xVec3 center;
        struct
        {
            float32 dist;
            float32 travel_time;
        } attach;
        struct
        {
            float32 dist;
            float32 free_fall_time;
            float32 accel;
        } detach;
        struct
        {
            float32 unused1;
            float32 unused2;
        } turn;
        struct
        {
            float32 frequency;
            float32 gravity;
            float32 dive;
            float32 min_dist;
            float32 max_dist;
            float32 damp;
        } vertical;
        struct
        {
            float32 max_dist;
        } horizontal;
        struct
        {
            float32 rest_dist;
            float32 view_angle;
            float32 offset;
            float32 offset_dir;
            float32 turn_speed;
            float32 vel_scale;
            float32 roll_speed;
            xVec3 unused1;
        } camera;
        struct
        {
            float32 hit_loss;
            float32 damage_velocity;
            float32 hit_velocity;
        } collision;
    };

    struct hook_type : xBase
    {
        hook_asset* asset;
        xEnt* ent;
    };

    void load(xBase& data, xDynAsset& asset, ulong32);
} // namespace bungee_state

#endif