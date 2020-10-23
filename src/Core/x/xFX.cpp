#include "xFX.h"

#include <types.h>

// func_800266C8
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXInit__Fv")

// func_80026744
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "DrawRingSetup__Fv")

// func_80026774
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "DrawRingSceneExit__Fv")

// func_80026780
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "DrawRing__FP7xFXRing")

// func_80026D4C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXRingCreate__FPC5xVec3PC7xFXRing")

// func_80026E34
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXRingUpdate__Ff")

// func_80026F44
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXRingRender__Fv")

// func_80026FA8
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFX_SceneEnter__FP7RpWorld")

// func_800272E8
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFX_SceneExit__FP7RpWorld")

// func_800272EC
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXUpdate__Ff")

// func_80027328
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "LightResetFrame__FP7RpLight")

// func_800273B8
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "MaterialDisableMatFX__FP10RpMaterialPv")

// func_800273EC
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "AtomicDisableMatFX__FP8RpAtomic")

// func_80027438
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "PreAllocMatFX_cb__FP8RpAtomicPv")

// func_80027468
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXPreAllocMatFX__FP7RpClump")

// func_80027494
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "MaterialSetShininess__FP10RpMaterialPv")

// func_800274E0
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "AtomicSetShininess__FP8RpAtomicPv")

// func_8002752C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "MaterialSetEnvMap__FP10RpMaterialPv")

// func_800275F8
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "MaterialSetEnvMap2__FP10RpMaterialPv")

// func_800276AC
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXBubbleRender__FP8RpAtomic")

// func_800277EC
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXShinyRender__FP8RpAtomic")

// func_8002792C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "AtomicSetEnvMap__FP8RpAtomicPv")

// func_80027984
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXAtomicEnvMapSetup__FP8RpAtomicUif")

// func_80027A30
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "MaterialSetBumpMap__FP10RpMaterialPv")

// func_80027AC0
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "MaterialSetBumpEnvMap__FP10RpMaterialP9RwTexturefP9RwTexturef")

// func_80027B8C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXanimUVSetTranslation__FPC5xVec3")

// func_80027BA4
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXanimUVSetScale__FPC5xVec3")

// func_80027BBC
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXanimUVSetAngle__Ff")

// func_80027C18
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXanimUV2PSetTranslation__FPC5xVec3")

// func_80027C30
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXanimUV2PSetScale__FPC5xVec3")

// func_80027C48
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXanimUV2PSetAngle__Ff")

// func_80027CA4
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXanimUV2PSetTexture__FP9RwTexture")

// func_80027CAC
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXanimUVAtomicSetup__FP8RpAtomic")

// func_80027CC8
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXanimUVCreate__Fv")

// func_80027D08
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "depth_sort__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FPUsPCQ217_esc__2_unnamed_esc__2_xFX_cpp_esc__2_8tri_dataUl")

// func_80027D84
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXRenderProximityFade__FRC14xModelInstanceff")

// func_800283D0
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "__as__Q217_esc__2_unnamed_esc__2_xFX_cpp_esc__2_8tri_dataFRCQ217_esc__2_unnamed_esc__2_xFX_cpp_esc__2_8tri_data")

// func_800283F8
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "push_triangle__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FRP18RxObjSpace3DVertexRCQ217_esc__2_unnamed_esc__2_xFX_cpp_esc__2_8tri_data")

// func_80028460
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "set_vert__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FR18RxObjSpace3DVertexRCQ217_esc__2_unnamed_esc__2_xFX_cpp_esc__2_9vert_data")

// func_80028508
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "clip_triangle__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FPQ217_esc__2_unnamed_esc__2_xFX_cpp_esc__2_8tri_dataRCQ217_esc__2_unnamed_esc__2_xFX_cpp_esc__2_8tri_dataf")

// func_8002875C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "lerp__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FRQ217_esc__2_unnamed_esc__2_xFX_cpp_esc__2_9vert_datafRCQ217_esc__2_unnamed_esc__2_xFX_cpp_esc__2_9vert_dataRCQ217_esc__2_unnamed_esc__2_xFX_cpp_esc__2_9vert_data")

// func_800287F8
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "lerp__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FR11RwTexCoordsfRC11RwTexCoordsRC11RwTexCoords")

// func_8002886C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "lerp__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FRffff")

// func_8002887C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "lerp__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FR6RwRGBAf6RwRGBA6RwRGBA")

// func_80028910
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "lerp__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FRUcfUcUc")

// func_8002897C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "lerp__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FR5xVec3fRC5xVec3RC5xVec3")

// func_80028A04
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "__as__Q217_esc__2_unnamed_esc__2_xFX_cpp_esc__2_9vert_dataFRCQ217_esc__2_unnamed_esc__2_xFX_cpp_esc__2_9vert_data")

// func_80028A58
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "init__Q217_esc__2_unnamed_esc__2_xFX_cpp_esc__2_8tri_dataFPC5xVec3PC5xVec3PC11RwTexCoordsPCfPCUs")

// func_80028AFC
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "__as__11RwTexCoordsFRC11RwTexCoords")

// func_80028B10
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "set_vert__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FR18RxObjSpace3DVertexRC5xVec3RC5xVec3RC11RwTexCoordsUc")

// func_80028B68
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "refresh_vert_buffer__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FRP18RxObjSpace3DVertexb")

// func_80028BF0
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "count_alpha_triangles__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FPC10RpTrianglePCfUl")

// func_80028CC8
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXFireworksInit__FPCcPCcPCcPCcPCc")

// func_80028D90
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXFireworksLaunch__FfPC5xVec3f")

// func_80028E04
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXFireworksUpdate__Ff")

// func_80029238
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXStreakInit__Fv")

// func_800292A4
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXStreakUpdate__Ff")

// func_800294F4
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXStreakRender__Fv")

// func_80029710
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXStreakStart__FfffUiPC10iColor_tagPC10iColor_tagi")

// func_80029950
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXStreakStop__FUi")

// func_80029994
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXStreakUpdate__FUiPC5xVec3PC5xVec3")

// func_80029A68
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXShineInit__Fv")

// func_80029AD0
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXShineUpdate__Ff")

// func_80029E30
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXShineRender__Fv")

// func_8002A20C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXShineStart__FPC5xVec3ffffUiPC10iColor_tagPC10iColor_tagfi")

// func_8002A214
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "compare_ribbons__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FPCvPCv")

// func_8002A26C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "sort_ribbons__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_Fv")

// func_8002A2C4
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "activate_ribbon__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FP9xFXRibbon")

// func_8002A2F8
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "deactivate_ribbon__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FP9xFXRibbon")

// func_8002A378
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "init__9xFXRibbonFPCcPCc")

// func_8002A404
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "set_default_config__9xFXRibbonFv")

// func_8002A444
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "refresh_config__9xFXRibbonFv")

// func_8002A4A4
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "set_curve__9xFXRibbonFPCQ29xFXRibbon10curve_nodeUl")

// func_8002A4E0
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "insert__9xFXRibbonFRC5xVec3RC5xVec3ffUi")

// func_8002A5B4
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "insert__9xFXRibbonFRC5xVec3fffUi")

// func_8002A69C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "activate__9xFXRibbonFv")

// func_8002A6DC
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "deactivate__9xFXRibbonFv")

// func_8002A71C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "update__9xFXRibbonFf")

// func_8002A830
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "start_render__9xFXRibbonFv")

// func_8002A830
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "render__9xFXRibbonFv")

// func_8002A96C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "set_raster__9xFXRibbonFP8RwRaster")

// func_8002A988
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "set_texture__9xFXRibbonFP9RwTexture")

// func_8002A9BC
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "set_texture__9xFXRibbonFUi")

// func_8002AA0C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "set_texture__9xFXRibbonFPCc")

// func_8002AA48
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "get_normal__9xFXRibbonFR5xVec3RC5xVec3f")

// func_8002ABF8
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "refresh_joint__9xFXRibbonFRQ29xFXRibbon10joint_dataRCQ236tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_8iterator")

// func_8002ADB4
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "eval_joint__9xFXRibbonFRCQ29xFXRibbon10joint_dataR10iColor_tagRf")

// func_8002AF54
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "render_strip__9xFXRibbonFP18RxObjSpace3DVertexQ236tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_8iteratorUl")

// func_8002B15C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "set_vert__17_esc__2_unnamed_esc__2_xFX_cpp_esc__2_FR18RxObjSpace3DVertexRC5xVec3ff10iColor_tag")

// func_8002B1A0
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "render_compare__9xFXRibbonCFRC9xFXRibbon")

// func_8002B214
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXRibbonSceneEnter__Fv")

// func_8002B260
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXRibbonUpdate__Ff")

// func_8002B2C8
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXRibbonRender__Fv")

// func_8002B3A4
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXAuraInit__Fv")

// func_8002B3F4
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXAuraSetup__Fv")

// func_8002B424
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXAuraAdd__FPvP5xVec3P10iColor_tagf")

// func_8002B510
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXAuraUpdate__Ff")

// func_8002B730
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "RenderRotatedBillboard__FP5xVec3P13_xFXAuraAngleUiff10iColor_tagUi")

// func_8002BCD0
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXAuraRender__Fv")

// func_8002BE78
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXStartup__Fv")

// func_8002BE7C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXShutdown__Fv")

// func_8002BE80
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXSceneInit__Fv")

// func_8002BE84
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXSceneSetup__Fv")

// func_8002BEA8
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXSceneReset__Fv")

// func_8002BEAC
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXScenePrepare__Fv")

// func_8002BEB0
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "xFXSceneFinish__Fv")

// func_8002BED8
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "set__10xParInterpFfffUi")

// func_8002BF0C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "debug_init__9xFXRibbonFPCcPCc")

// func_8002BF10
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "update_curve_tweaks__9xFXRibbonFv")

// func_8002BF14
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "debug_update_curve__9xFXRibbonFv")

// func_8002BF18
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "need_update__9xFXRibbonCFv")

// func_8002BF70
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "debug_need_update__9xFXRibbonCFv")

// func_8002BF78
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "visible__9xFXRibbonCFv")

// func_8002BFA8
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "debug_update__9xFXRibbonFf")

// func_8002BFAC
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "get_age__9xFXRibbonCFRCQ29xFXRibbon10joint_data")

// func_8002BFE4
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "init__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_FR20tier_queue_allocator")

// func_8002C03C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "block_size__20tier_queue_allocatorCFv")

// func_8002C044
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "front__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_Fv")

// func_8002C074
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "__ml__Q236tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_8iteratorCFv")

// func_8002C0A0
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "get_at__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_CFUl")

// func_8002C108
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "mod_block_size__20tier_queue_allocatorCFUl")

// func_8002C118
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "get_block__20tier_queue_allocatorCFUl")

// func_8002C12C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "get_block__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_CFUl")

// func_8002C160
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "block_size_shift__20tier_queue_allocatorCFv")

// func_8002C168
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "begin__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_CFv")

// func_8002C18C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "create_iterator__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_CFUl")

// func_8002C1AC
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "push_front__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_Fv")

// func_8002C230
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "alloc_block__20tier_queue_allocatorFv")

// func_8002C2B8
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "alloc_block_data__20tier_queue_allocatorCFv")

// func_8002C2F0
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "wrap_index__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_CFUl")

// func_8002C2FC
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "empty__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_CFv")

// func_8002C30C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "front_full__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_CFv")

// func_8002C360
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "full__20tier_queue_allocatorCFv")

// func_8002C384
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "pop_back__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_Fv")

// func_8002C41C
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "free_block__20tier_queue_allocatorFUc")

// func_8002C470
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "clear__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_Fv")

// func_8002C520
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "wrap_block__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_CFUl")

// func_8002C528
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "__mi__Q236tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_8iteratorCFi")

// func_8002C564
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "__ami__Q236tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_8iteratorFi")

// func_8002C594
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "__apl__Q236tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_8iteratorFi")

// func_8002C5D4
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "end__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_CFv")

// func_8002C618
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "size__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_CFv")

// func_8002C384
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "back__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_Fv")

// func_8002C664
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "__pl__Q236tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_8iteratorCFi")

// func_8002C6A0
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "__vc__36tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_Fi")

// func_8002C6E0
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "__rf__Q236tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_8iteratorCFv")

// func_8002C700
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "__eq__Q236tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_8iteratorCFRCQ236tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_8iterator")

// func_8002C718
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "__ne__Q236tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_8iteratorCFRCQ236tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_8iterator")

// func_8002C734
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "__mm__Q236tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_8iteratorFv")

// func_8002C768
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "global_index__Q236tier_queue_esc__0_Q29xFXRibbon10joint_data_esc__1_8iteratorCFv")

// func_8002C770
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "init__20tier_queue_allocatorFUlUlUl")

// func_8002C8DC
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "clear__20tier_queue_allocatorFv")

// func_8002CA84
#pragma GLOBAL_ASM("asm/Core/x/xFX.s", "log2_ceil__20tier_queue_allocatorCFUl")
