#include "xLaserBolt.h"

#include <types.h>

// func_8017D544
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "init__17xLaserBoltEmitterFUlPCc")

// func_8017D5B4
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "set_texture__17xLaserBoltEmitterFPCc")

// func_8017D5F0
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "set_texture__17xLaserBoltEmitterFUi")

// func_8017D630
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "set_texture__17xLaserBoltEmitterFP9RwTexture")

// func_8017D668
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "set_texture__17xLaserBoltEmitterFP8RwRaster")

// func_8017D670
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "reset__17xLaserBoltEmitterFv")

// func_8017D764
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "refresh_config__17xLaserBoltEmitterFv")

// func_8017D794
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "emit__17xLaserBoltEmitterFRC5xVec3RC5xVec3")

// func_8017D8CC
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "update__17xLaserBoltEmitterFf")

// func_8017DB64
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "render__17xLaserBoltEmitterFv")

// func_8017DC94
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "attach_effects__17xLaserBoltEmitterFQ217xLaserBoltEmitter12fx_when_enumPQ217xLaserBoltEmitter11effect_dataUl")

// func_8017DCE8
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "pre_collide__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4bolt")

// func_8017DDB4
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "collide_update__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4bolt")

// func_8017DF20
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "render__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4boltP18RxObjSpace3DVertex")

// func_8017E164
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "get_vert_buffer__17xLaserBoltEmitterFRi")

// func_8017E17C
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "apply_damage__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4bolt")

// func_8017E1F8
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "reset_fx__17xLaserBoltEmitterFQ217xLaserBoltEmitter12fx_when_enum")

// func_8017E240
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "update_fx__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4boltff")

// func_8017E410
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "emit_particle__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff")

// func_8017E5F4
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "emit_decal__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff")

// func_8017E6AC
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "emit_decal_dist__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff")

// func_8017E838
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "debug_init__17xLaserBoltEmitterFPCc")

// func_8017E83C
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "emit_fx__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff")

// func_8017E8B0
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "perturb_dir__17xLaserBoltEmitterFR5xVec3f")

// func_8017E964
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "update__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4boltf")

// func_8017E980
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "debug_update__17xLaserBoltEmitterFf")

// func_8017E984
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "flush_verts__17xLaserBoltEmitterFP18RxObjSpace3DVertexi")

// func_8017E9C4
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "debug_render__17xLaserBoltEmitterFv")

// func_8017E9C8
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "debug_refresh_effects__17xLaserBoltEmitterFQ217xLaserBoltEmitter12fx_when_enum")

// func_8017E9CC
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "log_collide_statics__17xLaserBoltEmitterFb")

// func_8017E9D0
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "log_collide_dynamics__17xLaserBoltEmitterFb")

// func_8017E9D4
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "set_bolt_verts__17xLaserBoltEmitterFP18RxObjSpace3DVertexRC5xVec3RC5xVec3UcRC5xVec3")

// func_8017EB28
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "set_vert__17xLaserBoltEmitterFR18RxObjSpace3DVertexRC5xVec3ffUc")

// func_8017EB60
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "init__40static_queue_esc__0_Q217xLaserBoltEmitter4bolt_esc__1_FUl")

// func_8017EBDC
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "clear__40static_queue_esc__0_Q217xLaserBoltEmitter4bolt_esc__1_Fv")

// func_8017EBEC
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "__ne__Q240static_queue_esc__0_Q217xLaserBoltEmitter4bolt_esc__1_8iteratorCFRCQ240static_queue_esc__0_Q217xLaserBoltEmitter4bolt_esc__1_8iterator")

// func_8017EC08
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "end__40static_queue_esc__0_Q217xLaserBoltEmitter4bolt_esc__1_CFv")

// func_8017EC4C
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "create_iterator__40static_queue_esc__0_Q217xLaserBoltEmitter4bolt_esc__1_CFUl")

// func_8017EC6C
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "mod_max_size__40static_queue_esc__0_Q217xLaserBoltEmitter4bolt_esc__1_CFUl")

// func_8017EC78
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "__pp__Q240static_queue_esc__0_Q217xLaserBoltEmitter4bolt_esc__1_8iteratorFv")

// func_8017ECAC
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "__apl__Q240static_queue_esc__0_Q217xLaserBoltEmitter4bolt_esc__1_8iteratorFi")

// func_8017ECEC
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "__ml__Q240static_queue_esc__0_Q217xLaserBoltEmitter4bolt_esc__1_8iteratorCFv")

// func_8017ED04
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "begin__40static_queue_esc__0_Q217xLaserBoltEmitter4bolt_esc__1_CFv")

// func_8017ED28
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "push_front__40static_queue_esc__0_Q217xLaserBoltEmitter4bolt_esc__1_Fv")

// func_8017ED28
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "front__40static_queue_esc__0_Q217xLaserBoltEmitter4bolt_esc__1_Fv")

// func_8017EDA4
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "pop_back__40static_queue_esc__0_Q217xLaserBoltEmitter4bolt_esc__1_Fv")

// func_8017EDB4
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "full__40static_queue_esc__0_Q217xLaserBoltEmitter4bolt_esc__1_CFv")

// func_8017EE00
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "max_size__40static_queue_esc__0_Q217xLaserBoltEmitter4bolt_esc__1_CFv")

// func_8017EE0C
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "erase__40static_queue_esc__0_Q217xLaserBoltEmitter4bolt_esc__1_FRCQ240static_queue_esc__0_Q217xLaserBoltEmitter4bolt_esc__1_8iteratorRCQ240static_queue_esc__0_Q217xLaserBoltEmitter4bolt_esc__1_8iterator")

// func_8017EE80
#pragma GLOBAL_ASM("asm/Core/x/xLaserBolt.s", "full__13xDecalEmitterCFv")
