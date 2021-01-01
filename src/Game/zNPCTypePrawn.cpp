#include "zNPCTypePrawn.h"

#include <types.h>

// func_8014F76C
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s",                                                     \
                   "init_sound__27_esc__2_unnamed_esc__2_zNPCTypePrawn_cpp_esc__2_Fv")

// func_8014F87C
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s",                                                     \
                   "reset_sound__27_esc__2_unnamed_esc__2_zNPCTypePrawn_cpp_esc__2_Fv")

// func_8014F89C
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s",                                                     \
                   "play_sound__27_esc__2_unnamed_esc__2_zNPCTypePrawn_cpp_esc__2_FiPC5xVec3f")

// func_8014F9B8
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s",                                                     \
                   "kill_sound__27_esc__2_unnamed_esc__2_zNPCTypePrawn_cpp_esc__2_FiUi")

// func_8014FA40
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s",                                                     \
                   "kill_sound__27_esc__2_unnamed_esc__2_zNPCTypePrawn_cpp_esc__2_Fi")

// func_8014FAD0
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "load__9aqua_beamFRCQ29aqua_beam6configUi")

// func_8014FB24
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "load__9aqua_beamFRCQ29aqua_beam6configR8RpAtomic")

// func_8014FB5C
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "reset__9aqua_beamFv")

// func_8014FBB0
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "start__9aqua_beamFv")

// func_8014FBCC
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "stop__9aqua_beamFv")

// func_8014FBD8
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "update__9aqua_beamFf")

// func_8014FC30
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "render__9aqua_beamFv")

// func_8014FCAC
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "hits_sphere__9aqua_beamCFRC7xSphere")

// func_8014FE18
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "update_rings__9aqua_beamFf")

// func_8014FF64
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "emit_ring__9aqua_beamFv")

// func_80150094
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "kill_ring__9aqua_beamFv")

// func_801500F4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypePrawn.s",                                                                    \
    "update_ring__9aqua_beamFQ242fixed_queue_esc__0_Q29aqua_beam12ring_segment_esc__4_31_esc__1_8iteratorf")

// func_801501A8
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s",                                                     \
                   "render_ring__9aqua_beamFRQ29aqua_beam12ring_segment")

// func_801502A4
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "ZNPC_AnimTable_Prawn__Fv")

// func_801506B8
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "__ct__9zNPCPrawnFi")

// func_801506FC
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "Init__9zNPCPrawnFP9xEntAsset")

// func_801507B8
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s",                                                     \
                   "create__Q227_esc__2_unnamed_esc__2_zNPCTypePrawn_cpp_esc__2_10televisionFii")

// func_801509D0
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s",                                                     \
                   "destroy__Q227_esc__2_unnamed_esc__2_zNPCTypePrawn_cpp_esc__2_10televisionFv")

// func_80150A80
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "Setup__9zNPCPrawnFv")

// func_80150C08
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypePrawn.s",                                                                    \
    "set_background__Q227_esc__2_unnamed_esc__2_zNPCTypePrawn_cpp_esc__2_10televisionF10iColor_tag")

// func_80150C34
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "Reset__9zNPCPrawnFv")

// func_80150D78
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "Destroy__9zNPCPrawnFv")

// func_80150DA4
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "Process__9zNPCPrawnFP6xScenef")

// func_80150F54
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "NewTime__9zNPCPrawnFP6xScenef")

// func_80150F88
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "SysEvent__9zNPCPrawnFP5xBaseP5xBaseUiPCfP5xBasePi")

// func_80151004
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypePrawn.s",                                                                    \
    "load_patterns__27_esc__2_unnamed_esc__2_zNPCTypePrawn_cpp_esc__2_FP16xModelAssetParamUiPCcPQ29zNPCPrawn10range_typei")

// func_801510E8
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "ParseINI__9zNPCPrawnFv")

// func_80151B6C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypePrawn.s",                                                                    \
    "load__Q227_esc__2_unnamed_esc__2_zNPCTypePrawn_cpp_esc__2_11tweak_groupFP16xModelAssetParamUi")

// func_80151B9C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypePrawn.s",                                                                    \
    "register_tweaks__Q227_esc__2_unnamed_esc__2_zNPCTypePrawn_cpp_esc__2_11tweak_groupFbP16xModelAssetParamUiPCc")

// func_8015210C
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "ParseLinks__9zNPCPrawnFv")

// func_80152198
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "SelfSetup__9zNPCPrawnFv")

// func_80152270
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s",                                                     \
                   "Damage__9zNPCPrawnF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3")

// func_801522DC
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "DuploNotice__9zNPCPrawnF13en_SM_NOTICESPv")

// func_80152360
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "AnimPick__9zNPCPrawnFi16en_NPC_GOAL_SPOTP5xGoal")

// func_801523E0
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "Render__9zNPCPrawnFv")

// func_80152424
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "update_round__9zNPCPrawnFv")

// func_801524D0
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "decompose__9zNPCPrawnFv")

// func_80152584
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "make_spawner__9zNPCPrawnFi")

// func_80152600
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "add_child__9zNPCPrawnFR5xBasei")

// func_801526C0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypePrawn.s",                                                                    \
    "set_yaw_matrix__27_esc__2_unnamed_esc__2_zNPCTypePrawn_cpp_esc__2_FR7xMat3x3f")

// func_8015275C
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "update_turn__9zNPCPrawnFf")

// func_80152A6C
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "update_animation__9zNPCPrawnFf")

// func_80152B7C
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "update_floor__9zNPCPrawnFf")

// func_80152C24
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "update_beam__9zNPCPrawnFf")

// func_80152DD0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypePrawn.s",                                                                    \
    "mulat__27_esc__2_unnamed_esc__2_zNPCTypePrawn_cpp_esc__2_FR5xVec3RC7xMat3x3RC7xMat3x3")

// func_80152E34
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "update_particles__9zNPCPrawnFf")

// func_80152E38
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "update_camera__9zNPCPrawnFf")

// func_80152E84
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "start_fight__9zNPCPrawnFv")

// func_80152F14
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypePrawn.s",                                                                    \
    "get_floor_info__9zNPCPrawnFQ29zNPCPrawn16floor_state_enumRQ29zNPCPrawn10range_typeRfRf")

// func_80153134
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s",                                                     \
                   "__as__Q29zNPCPrawn10range_typeFRCQ29zNPCPrawn10range_type")

// func_80153148
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "apply_pending__9zNPCPrawnFv")

// func_801531A4
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s",                                                     \
                   "set_floor_state__9zNPCPrawnFQ29zNPCPrawn16floor_state_enumbb")

// func_8015325C
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "vanish__9zNPCPrawnFv")

// func_801532A4
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "reappear__9zNPCPrawnFv")

// func_801532F0
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "render_closeup__9zNPCPrawnFv")

// func_8015345C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypePrawn.s",                                                                    \
    "set_model_texture__Q227_esc__2_unnamed_esc__2_zNPCTypePrawn_cpp_esc__2_10televisionFR14xModelInstance")

// func_801534EC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypePrawn.s",                                                                    \
    "update__Q227_esc__2_unnamed_esc__2_zNPCTypePrawn_cpp_esc__2_10televisionFR14xModelInstanceP9xLightKit")

// func_80153618
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypePrawn.s",                                                                    \
    "render_static__Q227_esc__2_unnamed_esc__2_zNPCTypePrawn_cpp_esc__2_10televisionFv")

// func_8015361C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypePrawn.s",                                                                    \
    "render_background__Q227_esc__2_unnamed_esc__2_zNPCTypePrawn_cpp_esc__2_10televisionFv")

// func_8015370C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypePrawn.s",                                                                    \
    "set_vert__Q227_esc__2_unnamed_esc__2_zNPCTypePrawn_cpp_esc__2_10televisionFR18rwGameCube2DVertexffff")

// func_8015373C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypePrawn.s",                                                                    \
    "move__Q227_esc__2_unnamed_esc__2_zNPCTypePrawn_cpp_esc__2_10televisionFRC5xVec3RC5xVec3")

// func_801537C4
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "set_life__9zNPCPrawnFi")

// func_801538B0
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "check_player_damage__9zNPCPrawnFv")

// func_80153960
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "get_away__9zNPCPrawnCFv")

// func_80153A2C
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "repel_player__9zNPCPrawnCFv")

// func_80153BB4
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "show_model__9zNPCPrawnFv")

// func_80153BD8
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "hide_model__9zNPCPrawnFv")

// func_80153BFC
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "Enter__17zNPCGoalPrawnIdleFfPv")

// func_80153C7C
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "Exit__17zNPCGoalPrawnIdleFfPv")

// func_80153C9C
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s",                                                     \
                   "Process__17zNPCGoalPrawnIdleFP11en_trantypefPvP6xScene")

// func_80153D00
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "Enter__17zNPCGoalPrawnBeamFfPv")

// func_80153E30
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "Exit__17zNPCGoalPrawnBeamFfPv")

// func_80153EC0
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s",                                                     \
                   "Process__17zNPCGoalPrawnBeamFP11en_trantypefPvP6xScene")

// func_80153FB8
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "update_aim__17zNPCGoalPrawnBeamFf")

// func_80153FEC
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "update_fire__17zNPCGoalPrawnBeamFf")

// func_80154044
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "update_hold__17zNPCGoalPrawnBeamFf")

// func_801540E0
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "update_sweep__17zNPCGoalPrawnBeamFf")

// func_80154244
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "update_stop__17zNPCGoalPrawnBeamFf")

// func_801542C8
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "init_look_dir__17zNPCGoalPrawnBeamFv")

// func_80154390
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "Enter__17zNPCGoalPrawnBowlFfPv")

// func_80154424
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "Exit__17zNPCGoalPrawnBowlFfPv")

// func_8015448C
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s",                                                     \
                   "Process__17zNPCGoalPrawnBowlFP11en_trantypefPvP6xScene")

// func_80154580
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "Enter__19zNPCGoalPrawnDamageFfPv")

// func_801545E8
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "Exit__19zNPCGoalPrawnDamageFfPv")

// func_80154644
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s",                                                     \
                   "Process__19zNPCGoalPrawnDamageFP11en_trantypefPvP6xScene")

// func_80154720
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "Enter__18zNPCGoalPrawnDeathFfPv")

// func_8015477C
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "Exit__18zNPCGoalPrawnDeathFfPv")

// func_8015479C
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s",                                                     \
                   "Process__18zNPCGoalPrawnDeathFP11en_trantypefPvP6xScene")

// func_801547BC
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s",                                                     \
                   "reset__42fixed_queue_esc__0_Q29aqua_beam12ring_segment_esc__4_31_esc__1_Fv")

// func_801547DC
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s",                                                     \
                   "clear__42fixed_queue_esc__0_Q29aqua_beam12ring_segment_esc__4_31_esc__1_Fv")

// func_801547EC
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "__as__Q29aqua_beam6configFRCQ29aqua_beam6config")

// func_80154868
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s",                                                     \
                   "empty__42fixed_queue_esc__0_Q29aqua_beam12ring_segment_esc__4_31_esc__1_CFv")

// func_80154880
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypePrawn.s",                                                                    \
    "__ne__Q242fixed_queue_esc__0_Q29aqua_beam12ring_segment_esc__4_31_esc__1_8iteratorCFRCQ242fixed_queue_esc__0_Q29aqua_beam12ring_segment_esc__4_31_esc__1_8iterator")

// func_8015489C
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s",                                                     \
                   "end__42fixed_queue_esc__0_Q29aqua_beam12ring_segment_esc__4_31_esc__1_CFv")

// func_801548C0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypePrawn.s",                                                                    \
    "create_iterator__42fixed_queue_esc__0_Q29aqua_beam12ring_segment_esc__4_31_esc__1_CFUl")

// func_801548E0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypePrawn.s",                                                                    \
    "__pp__Q242fixed_queue_esc__0_Q29aqua_beam12ring_segment_esc__4_31_esc__1_8iteratorFv")

// func_80154914
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypePrawn.s",                                                                    \
    "__apl__Q242fixed_queue_esc__0_Q29aqua_beam12ring_segment_esc__4_31_esc__1_8iteratorFi")

// func_8015492C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypePrawn.s",                                                                    \
    "__ml__Q242fixed_queue_esc__0_Q29aqua_beam12ring_segment_esc__4_31_esc__1_8iteratorCFv")

// func_80154944
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s",                                                     \
                   "begin__42fixed_queue_esc__0_Q29aqua_beam12ring_segment_esc__4_31_esc__1_CFv")

// func_80154968
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s",                                                     \
                   "back__42fixed_queue_esc__0_Q29aqua_beam12ring_segment_esc__4_31_esc__1_Fv")

// func_801549AC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypePrawn.s",                                                                    \
    "__mi__Q242fixed_queue_esc__0_Q29aqua_beam12ring_segment_esc__4_31_esc__1_8iteratorCFi")

// func_801549E8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypePrawn.s",                                                                    \
    "__ami__Q242fixed_queue_esc__0_Q29aqua_beam12ring_segment_esc__4_31_esc__1_8iteratorFi")

// func_80154A18
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s",                                                     \
                   "front__42fixed_queue_esc__0_Q29aqua_beam12ring_segment_esc__4_31_esc__1_Fv")

// func_80154A48
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypePrawn.s",                                                                    \
    "push_front__42fixed_queue_esc__0_Q29aqua_beam12ring_segment_esc__4_31_esc__1_Fv")

// func_80154A5C
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s",                                                     \
                   "full__42fixed_queue_esc__0_Q29aqua_beam12ring_segment_esc__4_31_esc__1_CFv")

// func_80154AA8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypePrawn.s",                                                                    \
    "max_size__42fixed_queue_esc__0_Q29aqua_beam12ring_segment_esc__4_31_esc__1_CFv")

// func_80154AA8
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s",                                                     \
                   "size__42fixed_queue_esc__0_Q29aqua_beam12ring_segment_esc__4_31_esc__1_CFv")

// func_80154AC8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypePrawn.s",                                                                    \
    "pop_back__42fixed_queue_esc__0_Q29aqua_beam12ring_segment_esc__4_31_esc__1_Fv")

// func_80154ADC
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "get_center__9zNPCPrawnCFv")

// func_80154AEC
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "render_debug__9zNPCPrawnFv")

// func_80154AF0
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "turning__9zNPCPrawnCFv")

// func_80154BC8
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "active__9aqua_beamCFv")

// func_80154C14
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "move__9aqua_beamFRC5xVec3RC5xVec3")

// func_80154C5C
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "get_facing__9zNPCPrawnCFv")

// func_80154C6C
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "ColChkFlags__9zNPCPrawnCFv")

// func_80154C74
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "ColPenFlags__9zNPCPrawnCFv")

// func_80154C7C
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "ColChkByFlags__9zNPCPrawnCFv")

// func_80154C84
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "ColPenByFlags__9zNPCPrawnCFv")

// func_80154C8C
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "PhysicsFlags__9zNPCPrawnCFv")

// func_80154C94
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "IsAlive__9zNPCPrawnFv")

// func_80154CA8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypePrawn.s",                                                                    \
    "load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc")

// func_80154D50
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCTypePrawn.s",                                                                    \
    "load_param_esc__0_i_esc__4_i_esc__1___10auto_tweakFRiiiiP16xModelAssetParamUiPCc")

// func_80154DD4
#pragma GLOBAL_ASM("asm/Game/zNPCTypePrawn.s", "xDebugAddTweak__FPCcP5xVec3PC14tweak_callbackPvUi")
