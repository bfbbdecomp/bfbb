#ifndef ZFX_H
#define ZFX_H

#include "../Core/x/xString.h"
#include "../Core/x/xEnt.h"

#include <rwcore.h>
#include <rpworld.h>

enum zFXGooState
{
    zFXGooStateNormal,
    zFXGooStateFreezing,
    zFXGooStateFrozen,
    zFXGooStateMelting,
    zFXGooStateInactive = 0xdeadbeef,
    zFXGooStateForce32Bit = 0xffffffff
};

struct zFXGooInstance
{
    RpAtomic* atomic;
    int32 freezeGroup;
    xVec3* orig_verts;
    RwRGBA* orig_colors;
    float32 time;
    float32 timer;
    float32 w0;
    float32 w2;
    float32 warbc[4];
    float32 state_time[4];
    xVec3 center;
    int32 padding; // Padding used for zFXGoo_SceneExit().
    zFXGooState state;
    float32 warb_time;
    float32 alpha;
    float32 min;
    float32 max;
    xVec3* ref_parentPos;
    xVec3 pos_parentOnFreeze;
};

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

extern uint32 gFXSurfaceFlags;

void on_spawn_bubble_wall(const tweak_info& tweak);
void zFX_SceneEnter(RpWorld* world);
void zFX_SceneExit(RpWorld* world);
void zFX_SceneReset();
void zFXHammer(xVec3* pos);
void zFXPorterWave(const xVec3* pos);

void zFXGooEnable(RpAtomic* atomic, int32 freezeGroup);

void zFXGoo_SceneEnter();
void zFXGoo_SceneReset();
void zFXGoo_SceneExit();

void zFXGooUpdate(float32 dt);

void zFXUpdate(float32 dt);

int32 zFXGooIs(xEnt* obj, float32& depth, uint32 playerCheck);

void zFX_SpawnBubbleHit(const xVec3* pos, uint32 num);
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

void zFXMuscleArmWave(xVec3* pos);

void zFX_SpawnBubbleMenuTrail(const xVec3* pos, uint32 num, const xVec3* pos_rnd,
                              const xVec3* vel_rnd);

void zFXPopOn(xEnt& ent, float32 rate, float32 time);
void zFXPopOff(xEnt& ent, float32 rate, float32 time);

#endif