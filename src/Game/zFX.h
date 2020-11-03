#ifndef ZFX_H
#define ZFX_H

#include <types.h>
#include "../Core/x/xString.h"

enum zFXGooState
{
    zFXGooStateNormal,
    zFXGooStateFreezing,
    zFXGooStateFrozen,
    zFXGooStateMelting,
    zFXGooStateInactive = 0xDEADBEEF,
    zFXGooStateForce32Bit = 0xFFFFFFFF
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
    zFXGooState state;
    float32 warb_time;
    float32 alpha;
    float32 min;
    float32 max;
    xVec3* ref_parentPos;
    xVec3 pos_parentOnFreeze;
};

// TODO: figure out the best place for this struct
typedef struct tweak_info;

struct _class_13
{
    int32 value_def;
    int32 value_min;
    int32 value_max;
};

struct _class_0
{
    uint32 value_def;
    uint32 value_min;
    uint32 value_max;
};

struct _class_3
{
    float32 value_def;
    float32 value_min;
    float32 value_max;
};

struct _class_5
{
    uint8 value_def;
};

struct _class_6
{
    uint32 value_def;
    uint32 labels_size;
    int8** labels;
    void* values;
};

struct _class_9
{
    uint32 value_def;
    uint32 mask;
};

struct _class_11
{
    uint8 pad[16];
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
        _class_13 int_context;
        _class_0 uint_context;
        _class_3 float_context;
        _class_5 bool_context;
        _class_6 select_context;
        _class_9 flag_context;
        _class_11 all_context;
    };
};

void reset_poppers();
void reset_entrails();
void zFX_SpawnBubbleWall();
void zFX_SceneReset();
void zFXGoo_SceneExit();
void zFXGoo_SceneReset();
void zFX_SpawnBubbleSlam(xVec3 const* pos, uint32 num, float32 rang, float32 bvel, float32 rvel);

#endif