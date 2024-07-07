#ifndef ZFX_H
#define ZFX_H

#include "xString.h"
#include "xEnt.h"

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
    S32 freezeGroup;
    xVec3* orig_verts;
    RwRGBA* orig_colors;
    F32 time;
    F32 timer;
    F32 w0;
    F32 w2;
    F32 warbc[4];
    F32 state_time[4];
    xVec3 center;
    S32 padding; // Padding used for zFXGoo_SceneExit().
    zFXGooState state;
    F32 warb_time;
    F32 alpha;
    F32 min;
    F32 max;
    xVec3* ref_parentPos;
    xVec3 pos_parentOnFreeze;
};

struct tweak_callback;

struct uint_data
{
    U32 value_def;
    U32 value_min;
    U32 value_max;
};

struct float_data
{
    F32 value_def;
    F32 value_min;
    F32 value_max;
};

struct bool_data
{
    U8 value_def;
};

struct select_data
{
    U32 value_def;
    U32 labels_size;
    char** labels;
    void* values;
};

struct flag_data
{
    U32 value_def;
    U32 mask;
};

struct raw_data
{
    U8 pad[16];
};

struct int_data
{
    S32 value_def;
    S32 value_min;
    S32 value_max;
};

struct tweak_info
{
    substr name;
    void* value;
    tweak_callback* cb;
    void* context;
    U8 type;
    U8 value_size;
    U16 flags;
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

extern U32 gFXSurfaceFlags;

void on_spawn_bubble_wall(const tweak_info& tweak);
void zFX_SceneEnter(RpWorld* world);
void zFX_SceneExit(RpWorld* world);
void zFX_SceneReset();
void zFXHammer(xVec3* pos);
void zFXPorterWave(const xVec3* pos);

void zFXGooEnable(RpAtomic* atomic, S32 freezeGroup);

void zFXGoo_SceneEnter();
void zFXGoo_SceneReset();
void zFXGoo_SceneExit();

void zFXGooUpdate(F32 dt);

void zFXUpdate(F32 dt);

S32 zFXGooIs(xEnt* obj, F32& depth, U32 playerCheck);

void zFX_SpawnBubbleHit(const xVec3* pos, U32 num);
void zFX_SpawnBubbleWall();
void zFX_SpawnBubbleSlam(const xVec3* pos, U32 num, F32 rang, F32 bvel, F32 rvel);

void reset_poppers();

void reset_entrails();

void init_poppers();

void update_poppers(F32 dt);

void update_entrails(F32 dt);

void xDebugAddTweak(const char* unk1, const char* unk2, const tweak_callback* unk3, void* unk4,
                    U32 unk5);

void xMat3x3RMulVec(xVec3* result, const xMat3x3* mat, const xVec3* vec);

void zFXMuscleArmWave(xVec3* pos);

void zFX_SpawnBubbleMenuTrail(const xVec3* pos, U32 num, const xVec3* pos_rnd,
                              const xVec3* vel_rnd);

void zFXPopOn(xEnt& ent, F32 rate, F32 time);
void zFXPopOff(xEnt& ent, F32 rate, F32 time);

#endif
