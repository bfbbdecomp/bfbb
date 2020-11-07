#ifndef ZFX_H
#define ZFX_H

#include "../Core/x/xString.h"
#include "../Core/x/xMath3.h"
#include "../Core/x/xVec3.h"

#include "zGoo.h"

#include <types.h>
#include <rpworld.h>

struct tweak_callback;

struct uint_data
{
    uint32 value_def;
    uint32 value_min;
    uint32 value_max;
};

struct float_data
{
    float32 value_def;
    float32 value_min;
    float32 value_max;
};

struct bool_data
{
    uint8 value_def;
};

struct select_data
{
    uint32 value_def;
    uint32 labels_size;
    int8** labels;
    void* values;
};

struct flag_data
{
    uint32 value_def;
    uint32 mask;
};

struct raw_data
{
    uint8 pad[16];
};

struct int_data
{
    int32 value_def;
    int32 value_min;
    int32 value_max;
};

struct tweak_info
{
    substr name;
    void* value;
    tweak_callback* cb;
    void* context;
    uint8 type;
    uint8 value_size;
    uint16 flags;
    union
    {
        int_data int_context;
        uint_data uint_context;
        float_data float_context;
        bool_data bool_context;
        select_data select_context;
        flag_data flag_context;
        raw_data all_context;
    };

    //void create_change(function func)
};

struct tweak_callback
{
    void (*on_change)(tweak_info&);
    void (*on_select)(tweak_info&);
    void (*on_unselect)(tweak_info&);
    void (*on_start_edit)(tweak_info&);
    void (*on_stop_edit)(tweak_info&);
    void (*on_expand)(tweak_info&);
    void (*on_collapse)(tweak_info&);
    void (*on_update)(tweak_info&);
    void (*convert_mem_to_tweak)(tweak_info&, void*);
    void (*convert_tweak_to_mem)(tweak_info&, void*);
};

void on_spawn_bubble_wall(const tweak_info& tweak);
void zFX_SceneEnter(RpWorld* world);
void zFX_SceneExit(RpWorld* world);
void zFX_SceneReset();
void zFXHammer(xVec3* pos);
void zFXPorterWave(const xVec3* pos);
xFXRing* zFXMuscleArmWave(xVec3* pos);

void zFXGoo_SceneEnter();
void zFXGoo_SceneReset();
void zFXGoo_SceneExit();

void zFXGooUpdate(float32 dt);

void zFXUpdate(float32 dt);

void zFX_SpawnBubbleWall();
void zFX_SpawnBubbleSlam(const xVec3* pos, uint32 num, float32 rang, float32 bvel, float32 rvel);

void reset_poppers();

void reset_entrails();

void init_poppers();

void update_poppers(float32 dt);

void update_entrails(float32 dt);

void xDebugAddTweak(const char* unk1, const char* unk2, const tweak_callback* unk3, void* unk4,
                    uint32 unk5);

void xMat3x3RMulVec(xVec3* result, const xMat3x3* mat, const xVec3* vec);

#endif