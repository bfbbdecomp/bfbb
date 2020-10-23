#include "zDiscoFloor.h"

#include <types.h>

// func_8013AF64
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "create_glow_light__25_esc__2_unnamed_esc__2_zDiscoFloor_cpp_esc__2_Fv")

// func_8013AFD4
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "destroy_glow_light__25_esc__2_unnamed_esc__2_zDiscoFloor_cpp_esc__2_Fv")

// func_8013AFFC
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "object_prefix__25_esc__2_unnamed_esc__2_zDiscoFloor_cpp_esc__2_FPCcRUlRUl")

// func_8013B0B0
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "find_object__25_esc__2_unnamed_esc__2_zDiscoFloor_cpp_esc__2_FPCc")

// func_8013B0E0
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "find_tiles__25_esc__2_unnamed_esc__2_zDiscoFloor_cpp_esc__2_FPCcPQ213z_disco_floor9tile_dataUl")

// func_8013B1C4
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "get_tile__25_esc__2_unnamed_esc__2_zDiscoFloor_cpp_esc__2_FPCUcUl")

// func_8013B260
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "set_tile__25_esc__2_unnamed_esc__2_zDiscoFloor_cpp_esc__2_FPUcUlUi")

// func_8013B288
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "translate_mask__25_esc__2_unnamed_esc__2_zDiscoFloor_cpp_esc__2_FPUcPCUcUl")

// func_8013B304
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "refresh_state__25_esc__2_unnamed_esc__2_zDiscoFloor_cpp_esc__2_FR13z_disco_floor")

// func_8013B424
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "set_object_state__25_esc__2_unnamed_esc__2_zDiscoFloor_cpp_esc__2_FRC13z_disco_floorUli")

// func_8013B564
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "play_sound__25_esc__2_unnamed_esc__2_zDiscoFloor_cpp_esc__2_FR13z_disco_floor")

// func_8013B718
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "update_transition__25_esc__2_unnamed_esc__2_zDiscoFloor_cpp_esc__2_FR13z_disco_floorf")

// func_8013B7E0
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "state_byte_size__25_esc__2_unnamed_esc__2_zDiscoFloor_cpp_esc__2_FUl")

// func_8013B7F0
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "update_state__25_esc__2_unnamed_esc__2_zDiscoFloor_cpp_esc__2_FR13z_disco_floorf")

// func_8013B958
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "get_damage_surface__25_esc__2_unnamed_esc__2_zDiscoFloor_cpp_esc__2_Fv")

// func_8013BA08
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "__as__14zSurfAssetBaseFRC14zSurfAssetBase")

// func_8013BB70
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "__as__13zSurfacePropsFRC13zSurfaceProps")

// func_8013BC10
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "render_model__25_esc__2_unnamed_esc__2_zDiscoFloor_cpp_esc__2_FP14xModelInstanceRC7xSphere")

// func_8013BCC0
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "render_model__25_esc__2_unnamed_esc__2_zDiscoFloor_cpp_esc__2_FP14xModelInstanceR7xSpheref")

// func_8013BD90
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "init__13z_disco_floorFv")

// func_8013BDCC
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "init__Q225_esc__2_unnamed_esc__2_zDiscoFloor_cpp_esc__2_15clone_pipe_dataFv")

// func_8013BDD0
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "add_global_tweaks__25_esc__2_unnamed_esc__2_zDiscoFloor_cpp_esc__2_Fv")

// func_8013BDD4
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "post_setup__13z_disco_floorFv")

// func_8013BDF8
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "post_setup__Q225_esc__2_unnamed_esc__2_zDiscoFloor_cpp_esc__2_15clone_pipe_dataFv")

// func_8013BDFC
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "destroy__13z_disco_floorFv")

// func_8013BE24
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "destroy__Q225_esc__2_unnamed_esc__2_zDiscoFloor_cpp_esc__2_15clone_pipe_dataFv")

// func_8013BE28
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "render_all__13z_disco_floorFv")

// func_8013BF10
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "effects_render_all__13z_disco_floorFv")

// func_8013C00C
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "init__13z_disco_floorFPvPv")

// func_8013C02C
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "load__13z_disco_floorFR19z_disco_floor_asset")

// func_8013BDD4
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "setup__13z_disco_floorFv")

// func_8013C390
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "add_tweaks__25_esc__2_unnamed_esc__2_zDiscoFloor_cpp_esc__2_FR13z_disco_floor")

// func_8013C394
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "reset__13z_disco_floorFv")

// func_8013C448
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "update__13z_disco_floorFR6xScenef")

// func_8013C4FC
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "set_state__13z_disco_floorFUlb")

// func_8013C5D4
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "enable__13z_disco_floorFv")

// func_8013C5EC
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "disable__13z_disco_floorFv")

// func_8013C5F8
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "set_state_range__13z_disco_floorFiib")

// func_8013C6E0
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "set_transition_delay__13z_disco_floorFf")

// func_8013C6E8
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "set_state_delay__13z_disco_floorFf")

// func_8013C6F0
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "refresh_spheres__13z_disco_floorFv")

// func_8013C814
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "update_pulse__13z_disco_floorFf")

// func_8013C8C0
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "refresh_bound__13z_disco_floorFv")

// func_8013CB80
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "refresh_cull_dist__13z_disco_floorFv")

// func_8013CC0C
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "distance_cull__13z_disco_floorFv")

// func_8013CCF4
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "render__13z_disco_floorFi")

// func_8013CDA0
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "effects_render__13z_disco_floorFi")

// func_8013CF08
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "event_handler__13z_disco_floorFP5xBaseP5xBaseUiPCfP5xBase")

// func_8013D014
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "range_limit_esc__0_Ul_esc__1___FUlUlUl")

// func_8013D034
#pragma GLOBAL_ASM("asm/Game/zDiscoFloor.s", "range_limit_esc__0_i_esc__1___Fiii")
