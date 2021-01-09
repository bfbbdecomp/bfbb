#include "../Core/x/xFX.h"
#include "../Core/x/xMath.h"
#include "../Core/x/xMath3.h"

#include "zFX.h"
#include "zScene.h"
#include "zTextBox.h"

#include <types.h>
#include <string.h>
#include <stdlib.h>
#include <cmath>

extern xFXRing sPatrickStunRing[3];
extern xFXRing sPorterRing[2];
extern xFXRing sHammerRing[1];
extern xFXRing sMuscleArmRing[1];
extern xFXRing sPorterRing[2];
extern xFXRing sPatrickStunRing[3];

extern zFXGooInstance zFXGooInstances[24];

// extern int8 zGameExtras_strings[];
extern int8 zFX_strings[];
extern ztextbox* goo_timer_textbox;

extern float32 lbl_803CD968; // 0.15f
extern float32 lbl_803CD96C; // 12.0f
extern float32 lbl_803CD970; // 2.0f

void on_spawn_bubble_wall(const tweak_info& tweak)
{
    zFX_SpawnBubbleWall();
}

// func_80092D3C
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SceneEnter__FP7RpWorld")

void zFX_SceneExit(RpWorld* world)
{
    xFX_SceneExit(world);
    zFXGoo_SceneExit();
}

void zFX_SceneReset()
{
    zFXGoo_SceneReset();
    reset_poppers();
    reset_entrails();
}

void zFXPatrickStun(xVec3* pos)
{
    xFXRingCreate(pos, &sPatrickStunRing[0]);
    xFXRingCreate(pos, &sPatrickStunRing[1]);
    xFXRingCreate(pos, &sPatrickStunRing[2]);
}

void zFXHammer(xVec3* pos)
{
    xFXRingCreate(pos, &sHammerRing[0]);
    // weird xrand arithmetic might have something to do with signed integers
    zFX_SpawnBubbleSlam(pos, (xrand() & 31) + 32, lbl_803CD968, lbl_803CD96C, lbl_803CD970);
}

void zFXPorterWave(xVec3* pos)
{
    xFXRingCreate(pos, &sPorterRing[0]);
    xFXRingCreate(pos, &sPorterRing[1]);
}

// PS2 dwarf data says this returns an xFXRing*, but gamecube symbols say it's void
void zFXMuscleArmWave(xVec3* pos)
{
    xFXRingCreate(pos, &sMuscleArmRing[0]);
}

// func_80092F94
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGooEnable__FP8RpAtomici")

void zFXGoo_SceneEnter()
{
    int32 i;
    zFXGooInstance* goo = zFXGooInstances;
    for (i = 0; i < 24; i++)
    {
        memset(goo, 0, 4);
        goo->state = zFXGooStateInactive;
        goo++;
    }
    uint32 gameID = xStrHash(zFX_strings + 0x19); // "FREEZY_TIMER_TEXTBOX"
    goo_timer_textbox = (ztextbox*)zSceneFindObject(gameID);
}

#if 1
// func_80093404
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGoo_SceneReset__Fv")
#else

void zFXGoo_SceneReset()
{
    // This almost matches, only two instructions are flipped.
    // otherwise, its perfect.
    int32 i;
    zFXGooInstance* curr = zFXGooInstances;

    for (i = 0; i < 24; i++)
    {
        if (curr->state != zFXGooStateInactive)
        {
            curr->state = zFXGooStateNormal;
        }
        curr++;
    }
}

#endif

void zFXGoo_SceneExit()
{
    int32 i;
    zFXGooInstance* goo = zFXGooInstances;
    for (i = 0; i < 0x18; i++)
    {
        memset(goo, 0, 4);
        goo->state = zFXGooStateInactive;
        goo++;
    }
}

// func_8009355C
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGooUpdateInstance__FP14zFXGooInstancef")

// func_80093980
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGooUpdate__Ff")

// func_800939F4
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGooRenderAtomic__FP8RpAtomic")

void zFXUpdate(float32 dt)
{
    zFXGooUpdate(dt);
    update_poppers(dt);
    update_entrails(dt);
    xFXUpdate(dt);
}

// func_80093FCC
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGooFreeze__FP8RpAtomicPC5xVec3P5xVec3")

// func_80094240
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGooIs__FP4xEntRfUi")

// func_80094430
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGooEventSetWarb__FP4xEntPCf")

// func_8009459C
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGooEventSetFreezeDuration__FP4xEntf")

// func_800947A8
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGooEventMelt__FP4xEnt")

// func_800949BC
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXGooFreezeTimeLeft__Fv")

// func_80094A38
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SpawnBubbleHit__FPC5xVec3Ui")

// func_80094A6C
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SpawnBubbleHit__FPC5xVec3UiPC5xVec3PC5xVec3f")

// func_80094C44
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SpawnBubbleTrail__FPC5xVec3Ui")

// func_80094C74
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SpawnBubbleTrail__FPC5xVec3UiPC5xVec3PC5xVec3")

// func_80094DDC
#pragma GLOBAL_ASM("asm/Game/zFX.s",                                                               \
                   "zFX_SpawnBubbleTrailNoNegRandVel__FPC5xVec3UiPC5xVec3PC5xVec3")

// func_80094F20
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SpawnBubbleTrail__FPC5xVec3PC5xVec3UiPC5xVec3PC5xVec3")

// func_800950C8
#pragma GLOBAL_ASM("asm/Game/zFX.s",                                                               \
                   "zFX_SpawnBubbleTrail__FPC5xVec3PC5xVec3PC5xVec3PC5xVec3UiPC5xVec3PC5xVec3f")

// func_80095300
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SpawnBubbleMenuTrail__FPC5xVec3UiPC5xVec3PC5xVec3")

// func_80095458
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SpawnBubbleWall__Fv")

// func_80095648
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SpawnBubbleSlam__FPC5xVec3Uifff")

// func_80095804
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFX_SpawnBubbleBlast__FPC5xVec3Uifff")

// func_800959F4
#pragma GLOBAL_ASM("asm/Game/zFX.s",                                                               \
                   "model_is_preinstanced__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FP8RpAtomic")

// func_80095A2C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zFX.s",                                                                              \
    "setup_popper_emitter__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FRQ217_esc__2_unnamed_esc__2_zFX_cpp_esc__2_11popper_data")

// func_80095B64
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zFX.s",                                                                              \
    "get_triangle_area__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FRC5xVec3RC5xVec3RC5xVec3")

// func_80095C58
#pragma GLOBAL_ASM("asm/Game/zFX.s",                                                               \
                   "count_faces__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FP14xModelInstance")

// func_80095C84
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zFX.s",                                                                              \
    "eval_tri__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FP5xVec3P5xVec3PC7xMat4x3PC10RpGeometryPC10RpTriangle")

// func_80095DDC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zFX.s",                                                                              \
    "SkinXformVertAndNormal__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FP5xVec3P5xVec3PC5xVec3PC5xVec3PC7xMat4x3PC7xMat4x3PCfPCUiPCUsUi")

// func_80095FF0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zFX.s",                                                                              \
    "random_point_on_triangle__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FR5xVec3R5xVec3PC5xVec3PC5xVec3")

// func_80096158
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zFX.s",                                                                              \
    "random_surface_point__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FR5xVec3R5xVec3RCQ217_esc__2_unnamed_esc__2_zFX_cpp_esc__2_11popper_data")

// func_80096214
#pragma GLOBAL_ASM("asm/Game/zFX.s",                                                               \
                   "find_weight__Q217_esc__2_unnamed_esc__2_zFX_cpp_esc__2_11popper_dataCFf")

// func_8009627C
#pragma GLOBAL_ASM("asm/Game/zFX.s", "find_popper__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FP4xEnt")

// func_800962B4
#pragma GLOBAL_ASM("asm/Game/zFX.s", "find_free_popper__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_Fv")

// func_800962F8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zFX.s",                                                                              \
    "emit_popper_bubbles__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FRQ217_esc__2_unnamed_esc__2_zFX_cpp_esc__2_11popper_dataiff")

// func_80096538
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zFX.s",                                                                              \
    "emit_popper_bubbles_immediate__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FRQ217_esc__2_unnamed_esc__2_zFX_cpp_esc__2_11popper_data")

// func_800965A4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zFX.s",                                                                              \
    "update_popper__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FRQ217_esc__2_unnamed_esc__2_zFX_cpp_esc__2_11popper_dataf")

// func_8009676C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zFX.s",                                                                              \
    "set_popper_alpha__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FRQ217_esc__2_unnamed_esc__2_zFX_cpp_esc__2_11popper_dataf")

// func_800967D0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zFX.s",                                                                              \
    "destroy_popper__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FRQ217_esc__2_unnamed_esc__2_zFX_cpp_esc__2_11popper_data")

// func_80096868
#pragma GLOBAL_ASM("asm/Game/zFX.s", "grab_popper__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FR4xEnt")

#if 1

// func_800968FC
#pragma GLOBAL_ASM("asm/Game/zFX.s", "init_poppers__Fv")

#else

// Idk what the name of the other function is.
void init_poppers()
{
    reset_poppers();
    add_popper_tweaks__17 @unnamed @zFX_cpp @Fv();
}

#endif

// func_80096920
#pragma GLOBAL_ASM("asm/Game/zFX.s",                                                               \
                   "add_popper_tweaks__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_Fv")

// func_80096924
#pragma GLOBAL_ASM("asm/Game/zFX.s", "reset_poppers__Fv")

// func_80096950
#pragma GLOBAL_ASM("asm/Game/zFX.s", "update_poppers__Ff")

// func_800969E4
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXPopOn__FR4xEntff")

// func_80096B48
#pragma GLOBAL_ASM("asm/Game/zFX.s",                                                               \
                   "validate_popper__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_FRC4xEnt")

// func_80096C44
#pragma GLOBAL_ASM("asm/Game/zFX.s", "zFXPopOff__FR4xEntff")

// func_80096D84
#pragma GLOBAL_ASM("asm/Game/zFX.s",                                                               \
                   "add_entrail_tweaks__17_esc__2_unnamed_esc__2_zFX_cpp_esc__2_Fv")

// func_80096D88
#pragma GLOBAL_ASM("asm/Game/zFX.s", "reset_entrails__Fv")

// func_80096DE0
#pragma GLOBAL_ASM("asm/Game/zFX.s",                                                               \
                   "reset__Q217_esc__2_unnamed_esc__2_zFX_cpp_esc__2_12entrail_dataFv")

// func_80096DF4
#pragma GLOBAL_ASM("asm/Game/zFX.s", "update_entrails__Ff")

// func_80096E5C
#pragma GLOBAL_ASM("asm/Game/zFX.s",                                                               \
                   "update__Q217_esc__2_unnamed_esc__2_zFX_cpp_esc__2_12entrail_dataFf")

// func_80097094
#pragma GLOBAL_ASM("asm/Game/zFX.s", "setup_entrails__FR6zScene")

void xDebugAddTweak(const char* unk1, const char* unk2, const tweak_callback* unk3, void* unk4,
                    uint32 unk5)
{
}

// func_800972B4
#pragma GLOBAL_ASM("asm/Game/zFX.s", "create_change__14tweak_callbackFPFRC10tweak_info_v")

// func_80097354
#pragma GLOBAL_ASM("asm/Game/zFX.s", "xDrawSphere2__FPC5xVec3fUi")

xVec3& xVec3::up_normalize()
{
    return safe_normalize(xVec3::m_UnitAxisY);
}

void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    float32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    float32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    float32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}

// func_800973E4
#pragma GLOBAL_ASM("asm/Game/zFX.s", "xModelSetScale__FP14xModelInstanceRC5xVec3")

// func_80097434
#pragma GLOBAL_ASM("asm/Game/zFX.s", "xSCurve__FRfRfRff")
