#include "xDecal.h"

#include <types.h>

//Doesn't OK if you use it from header, so assuming it's global.
extern uint32 active_emitters_size;

// func_8017C420
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xDecal.s",                                                                         \
    "register_emitter__20_esc__2_unnamed_esc__2_xDecal_cpp_esc__2_FP13xDecalEmitter")

// func_8017C44C
void xDecalInit()
{
    active_emitters_size = 0;
}

// func_8017C458
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s", "xDecalUpdate__Ff")

// func_8017C4D0
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s", "init__13xDecalEmitterFiPCc")

// func_8017C52C
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s", "set_default_config__13xDecalEmitterFv")

// func_8017C5B0
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s", "set_texture__13xDecalEmitterFPCc")

// func_8017C5EC
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s", "set_texture__13xDecalEmitterFUi")

// func_8017C63C
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s", "set_texture__13xDecalEmitterFP9RwTexture")

// func_8017C64C
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s", "refresh_config__13xDecalEmitterFv")

// func_8017C7A8
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s",                                                          \
                   "set_curve__13xDecalEmitterFPCQ213xDecalEmitter10curve_nodeUl")

// func_8017C7D0
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s", "emit__13xDecalEmitterFRC7xMat4x3i")

// func_8017C928
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s",                                                          \
                   "choose_greatest__20_esc__2_unnamed_esc__2_xDecal_cpp_esc__2_Ffff")

// func_8017C944
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s", "emit__13xDecalEmitterFRC7xMat4x3RC5xVec3i")

// func_8017CAB8
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s", "update__13xDecalEmitterFf")

// func_8017CC54
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s", "lerp__20_esc__2_unnamed_esc__2_xDecal_cpp_esc__2_FRffff")

// func_8017CC64
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s",                                                          \
                   "update_frac__13xDecalEmitterFRQ213xDecalEmitter9unit_data")

// func_8017CCF8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xDecal.s",                                                                         \
    "get_render_data__13xDecalEmitterFRCQ213xDecalEmitter9unit_datafR10iColor_tagR7xMat4x3R5xVec2R5xVec2")

// func_8017CE88
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xDecal.s",                                                                         \
    "lerp__20_esc__2_unnamed_esc__2_xDecal_cpp_esc__2_FR10iColor_tagf10iColor_tag10iColor_tag")

// func_8017CF1C
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s",                                                          \
                   "lerp__20_esc__2_unnamed_esc__2_xDecal_cpp_esc__2_FRUcfUcUc")

// func_8017CF88
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s", "select_texture_unit__13xDecalEmitterFv")

// func_8017D010
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s", "need_update__13xDecalEmitterCFv")

// func_8017D06C
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s", "debug_need_update__13xDecalEmitterCFv")

// func_8017D074
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s", "debug_init__13xDecalEmitterFPCc")

// func_8017D078
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s", "debug_update_curve__13xDecalEmitterFv")

// func_8017D07C
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s", "debug_update__13xDecalEmitterFf")

// func_8017D080
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s",                                                          \
                   "empty__41static_queue_esc__0_Q213xDecalEmitter9unit_data_esc__1_CFv")

// func_8017D0A8
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s",                                                          \
                   "size__41static_queue_esc__0_Q213xDecalEmitter9unit_data_esc__1_CFv")

// func_8017D0B0
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s",                                                          \
                   "init__41static_queue_esc__0_Q213xDecalEmitter9unit_data_esc__1_FUl")

// func_8017D12C
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s",                                                          \
                   "clear__41static_queue_esc__0_Q213xDecalEmitter9unit_data_esc__1_Fv")

// func_8017D13C
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s",                                                          \
                   "front__41static_queue_esc__0_Q213xDecalEmitter9unit_data_esc__1_Fv")

// func_8017D16C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xDecal.s",                                                                         \
    "__ml__Q241static_queue_esc__0_Q213xDecalEmitter9unit_data_esc__1_8iteratorCFv")

// func_8017D184
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s",                                                          \
                   "begin__41static_queue_esc__0_Q213xDecalEmitter9unit_data_esc__1_CFv")

// func_8017D1A8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xDecal.s",                                                                         \
    "create_iterator__41static_queue_esc__0_Q213xDecalEmitter9unit_data_esc__1_CFUl")

// func_8017D1C8
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s",                                                          \
                   "push_front__41static_queue_esc__0_Q213xDecalEmitter9unit_data_esc__1_Fv")

// func_8017D214
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s",                                                          \
                   "mod_max_size__41static_queue_esc__0_Q213xDecalEmitter9unit_data_esc__1_CFUl")

// func_8017D220
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s",                                                          \
                   "pop_back__41static_queue_esc__0_Q213xDecalEmitter9unit_data_esc__1_Fv")

// func_8017D230
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s",                                                          \
                   "full__41static_queue_esc__0_Q213xDecalEmitter9unit_data_esc__1_CFv")

// func_8017D27C
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s",                                                          \
                   "max_size__41static_queue_esc__0_Q213xDecalEmitter9unit_data_esc__1_CFv")

// func_8017D288
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xDecal.s",                                                                         \
    "erase__41static_queue_esc__0_Q213xDecalEmitter9unit_data_esc__1_FRCQ241static_queue_esc__0_Q213xDecalEmitter9unit_data_esc__1_8iteratorRCQ241static_queue_esc__0_Q213xDecalEmitter9unit_data_esc__1_8iterator")

// func_8017D2FC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xDecal.s",                                                                         \
    "__ne__Q241static_queue_esc__0_Q213xDecalEmitter9unit_data_esc__1_8iteratorCFRCQ241static_queue_esc__0_Q213xDecalEmitter9unit_data_esc__1_8iterator")

// func_8017D318
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s",                                                          \
                   "end__41static_queue_esc__0_Q213xDecalEmitter9unit_data_esc__1_CFv")

// func_8017D35C
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s",                                                          \
                   "__pp__Q241static_queue_esc__0_Q213xDecalEmitter9unit_data_esc__1_8iteratorFv")

// func_8017D390
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xDecal.s",                                                                         \
    "__apl__Q241static_queue_esc__0_Q213xDecalEmitter9unit_data_esc__1_8iteratorFi")

// func_8017D3D0
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s", "flush__25ptank_pool__color_mat_uv2Fv")

// func_8017D410
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s", "next__25ptank_pool__color_mat_uv2Fv")

// func_8017D4C0
#pragma GLOBAL_ASM("asm/Core/x/xDecal.s", "lock_block__25ptank_pool__color_mat_uv2Fv")
