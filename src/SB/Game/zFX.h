#ifndef ZFX_H
#define ZFX_H

#include "xString.h"
#include "xEnt.h"
#include "xFX.h"

#include <rwcore.h>
#include <rpworld.h>

struct tweak_info;
struct tweak_callback;

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

void zFXGooEventSetWarb(xEnt* obj, const F32* param);
void zFXGooEventSetFreezeDuration(xEnt* obj, const F32 param);
void zFXGooEventMelt(xEnt* obj);

void zFXGooUpdate(F32 dt);

void zFXUpdate(F32 dt);

S32 zFXGooIs(xEnt* obj, F32& depth, U32 playerCheck);

void zFX_SpawnBubbleHit(const xVec3* pos, U32 num);
void zFX_SpawnBubbleWall();
void zFX_SpawnBubbleSlam(const xVec3* pos, U32 num, F32 rang, F32 bvel, F32 rvel);

void reset_poppers();

void reset_entrails();

static void init_poppers();

void update_poppers(F32 dt);

void update_entrails(F32 dt);

void xDebugAddTweak(const char* unk1, const char* unk2, const tweak_callback* unk3, void* unk4,
                    U32 unk5);

xFXRing* zFXMuscleArmWave(const xVec3* pos);

void zFX_SpawnBubbleTrail(const xVec3*, unsigned int);
void zFX_SpawnBubbleTrail(const xVec3* pos, unsigned int num, const xVec3* pos_rnd,
                          const xVec3* vel_rnd);
void zFX_SpawnBubbleTrail(const xVec3*, const xVec3*, const xVec3*, const xVec3*, unsigned int,
                          const xVec3*, const xVec3*, float);
void zFX_SpawnBubbleMenuTrail(const xVec3* pos, U32 num, const xVec3* pos_rnd,
                              const xVec3* vel_rnd);

void zFXPopOn(xEnt& ent, F32 rate, F32 time);
void zFXPopOff(xEnt& ent, F32 rate, F32 time);

#endif
