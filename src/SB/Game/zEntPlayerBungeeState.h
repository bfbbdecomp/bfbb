#ifndef ZENTPLAYERBUNGEESTATE_H
#define ZENTPLAYERBUNGEESTATE_H

#include "xDynAsset.h"
#include "xEnt.h"

namespace bungee_state
{
    struct hook_asset : xDynAsset
    {
        U32 entity;
        xVec3 center;
        struct
        {
            F32 dist;
            F32 travel_time;
        } attach;
        struct
        {
            F32 dist;
            F32 free_fall_time;
            F32 accel;
        } detach;
        struct
        {
            F32 unused1;
            F32 unused2;
        } turn;
        struct
        {
            F32 frequency;
            F32 gravity;
            F32 dive;
            F32 min_dist;
            F32 max_dist;
            F32 damp;
        } vertical;
        struct
        {
            F32 max_dist;
        } horizontal;
        struct
        {
            F32 rest_dist;
            F32 view_angle;
            F32 offset;
            F32 offset_dir;
            F32 turn_speed;
            F32 vel_scale;
            F32 roll_speed;
            xVec3 unused1;
        } camera;
        struct
        {
            F32 hit_loss;
            F32 damage_velocity;
            F32 hit_velocity;
        } collision;
    };

    struct hook_type : xBase
    {
        hook_asset* asset;
        xEnt* ent;
    };

    struct drop_asset : xDynAsset
    {
        U32 marker;
        U32 set_view_angle;
        F32 view_angle;

        static const char* type_name()
        {
            return "game_object:bungee_drop";
        }
    };

    void load(xBase& data, xDynAsset& asset, size_t);
    bool active();
    bool landed();
    bool destroy();
    void insert_animations(xAnimTable& table);
} // namespace bungee_state

#endif
