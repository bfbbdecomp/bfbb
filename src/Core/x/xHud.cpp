#include "xHud.h"

#include <types.h>

// func_8002D98C
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "flush_all__Q24xhud15block_allocatorFv")

// func_8002D9CC
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "__ct__Q24xhud15block_allocatorFUiUi")

// func_8002DA24
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "set_increment__Q24xhud15block_allocatorFUi")

// func_8002DA34
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "size_reserve__Q24xhud15block_allocatorFUi")

// func_8002DA98
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "alloc__Q24xhud15block_allocatorFv")

// func_8002DAE4
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "free__Q24xhud15block_allocatorFPv")

// func_8002DAF4
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "flush__Q24xhud15block_allocatorFv")

// func_8002DB00
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "motive_allocator__Q24xhud6widgetFv")

// func_8002DB4C
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "init__4xhudFv")

// func_8002DB88
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "setup__4xhudFv")

// func_8002DBA8
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "destroy__4xhudFv")

// func_8002DBDC
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "update__4xhudFf")

// func_8002DBFC
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "render__4xhudFv")

// func_8002DC28
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "__ct__Q24xhud6widgetFRCQ24xhud5asset")

// func_8002DCC4
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "__as__Q24xhud14render_contextFRCQ24xhud14render_context")

// func_8002DD30
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "init_base__Q24xhud6widgetFR5xBaseRC10xBaseAssetUl")

// func_8002DD94
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "destruct__Q24xhud6widgetFv")

// func_8002DDB4
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "presetup__Q24xhud6widgetFv")

// func_8002DDDC
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "updater__Q24xhud6widgetFf")

// func_8002DEB4
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "dispatcher__Q24xhud6widgetFP5xBaseUiPCfP5xBase")

// func_8002DF5C
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "type__Q24xhud6widgetCFv")

// func_8002DF9C
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "is__Q24xhud6widgetCFUi")

// func_8002DFD4
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "show__Q24xhud6widgetFv")

// func_8002E168
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "hide__Q24xhud6widgetFv")

// func_8002E358
#pragma GLOBAL_ASM("asm/Core/x/xHud.s",                                                            \
                   "fp_setup__Q24xhud18_esc__2_unnamed_esc__2_xHud_cpp_esc__2_FRQ24xhud6widget")

// func_8002E384
#pragma GLOBAL_ASM("asm/Core/x/xHud.s",                                                            \
                   "fp_render__Q24xhud18_esc__2_unnamed_esc__2_xHud_cpp_esc__2_FRQ24xhud6widget")

// func_8002E3CC
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "disable_all__Q24xhud6widgetFb")

// func_8002E438
#pragma GLOBAL_ASM("asm/Core/x/xHud.s",                                                            \
                   "__ct__Q34xhud18_esc__2_unnamed_esc__2_xHud_cpp_esc__2_15functor_disableFb")

// func_8002E440
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "setup_all__Q24xhud6widgetFv")

// func_8002E4A8
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "update_all__Q24xhud6widgetFf")

// func_8002E510
#pragma GLOBAL_ASM("asm/Core/x/xHud.s",                                                            \
                   "__ct__Q34xhud18_esc__2_unnamed_esc__2_xHud_cpp_esc__2_14functor_updateFf")

// func_8002E518
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "render_all__Q24xhud6widgetFv")

// func_8002E584
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "add_motive__Q24xhud6widgetFRCQ24xhud6motive")

// func_8002E628
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "clear_motives__Q24xhud6widgetFv")

// func_8002E690
#pragma GLOBAL_ASM("asm/Core/x/xHud.s",                                                            \
                   "clear_motives__Q24xhud6widgetFPFRQ24xhud6widgetRQ24xhud6motivef_bPv")

// func_8002E720
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "cb_dispatch__Q24xhud6widgetFP5xBaseP5xBaseUiPCfP5xBase")

// func_8002E75C
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "load_model__4xhudFUi")

// func_8002E804
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xHud.s",                                                                           \
    "render_one_model__Q24xhud18_esc__2_unnamed_esc__2_xHud_cpp_esc__2_FR14xModelInstancefRC13basic_rect_esc__0_f_esc__1_RC5xVec3RC5xVec3RC7xMat4x3")

// func_8002E878
#pragma GLOBAL_ASM("asm/Core/x/xHud.s",                                                            \
                   "render_model__4xhudFR14xModelInstanceRCQ24xhud14render_context")

// func_8002E9BC
#pragma GLOBAL_ASM("asm/Core/x/xHud.s",                                                            \
                   "linear_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef")

// func_8002EA48
#pragma GLOBAL_ASM("asm/Core/x/xHud.s",                                                            \
                   "accelerate_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef")

// func_8002EAF0
#pragma GLOBAL_ASM("asm/Core/x/xHud.s",                                                            \
                   "shake_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef")

// func_8002EB84
#pragma GLOBAL_ASM("asm/Core/x/xHud.s",                                                            \
                   "delay_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef")

// func_8002EBDC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xHud.s",                                                                           \
    "for_each_esc__0_Q34xhud18_esc__2_unnamed_esc__2_xHud_cpp_esc__2_14functor_update_esc__1___Q24xhud18_esc__2_unnamed_esc__2_xHud_cpp_esc__2_FUcUiQ34xhud18_esc__2_unnamed_esc__2_xHud_cpp_esc__2_14functor_update")

// func_8002EC60
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xHud.s",                                                                           \
    "for_each_esc__0_PFRQ24xhud6widget_v_esc__1___Q24xhud18_esc__2_unnamed_esc__2_xHud_cpp_esc__2_FUcUiPFRQ24xhud6widget_v")

// func_8002ECE8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xHud.s",                                                                           \
    "for_each_esc__0_Q34xhud18_esc__2_unnamed_esc__2_xHud_cpp_esc__2_15functor_disable_esc__1___Q24xhud18_esc__2_unnamed_esc__2_xHud_cpp_esc__2_FUcUiQ34xhud18_esc__2_unnamed_esc__2_xHud_cpp_esc__2_15functor_disable")

// func_8002ED6C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xHud.s",                                                                           \
    "__cl__Q34xhud18_esc__2_unnamed_esc__2_xHud_cpp_esc__2_15functor_disableFRQ24xhud6widget")

// func_8002EDC8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Core/x/xHud.s",                                                                           \
    "__cl__Q34xhud18_esc__2_unnamed_esc__2_xHud_cpp_esc__2_14functor_updateFRQ24xhud6widget")

// func_8002EE24
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "disable__Q24xhud6widgetFv")

// func_8002EE30
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "add_tweaks__Q24xhud6widgetFv")

// func_8002EE34
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "update__Q24xhud6motiveFRQ24xhud6widgetf")

// func_8002EE68
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "enable__Q24xhud6widgetFv")

// func_8002EE74
#pragma GLOBAL_ASM("asm/Core/x/xHud.s",                                                            \
                   "__ct__Q24xhud6motiveFPffffPFRQ24xhud6widgetRQ24xhud6motivef_bPv")

// func_8002DDB4
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "setup__Q24xhud6widgetFv")

// func_8002EEBC
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "render__Q24xhud6widgetFv")

// func_8002EEC0
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "visible__Q24xhud6widgetCFv")

// func_8002EF08
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "enabled__Q24xhud6widgetCFv")

// func_8002EF10
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "debug_render__Q24xhud6widgetFv")

// func_8002EF14
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "__ct__Q24xhud6motiveFRCQ24xhud6motive")

// func_8002EF58
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "finish__Q24xhud6motiveFv")

// func_8002EF88
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "dispatch__Q24xhud6widgetFP5xBaseUiPCfP5xBase")

// func_8002EFA8
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "destroy__Q24xhud6widgetFv")

// func_8002EFAC
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "init__Q24xhud6widgetFv")

// func_8002EFB0
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "update__Q24xhud6widgetFf")

// func_8002EFD0
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "type_name__Q24xhud5assetFv")

// func_8002EFE0
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "__nw__FUlPv")

// func_8002EFE8
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "xColorFromRGBA__FUcUcUcUc")
