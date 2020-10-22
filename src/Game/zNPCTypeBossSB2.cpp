#include "zNPCTypeBossSB2.h"

#include <types.h>

#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "init_sound__29_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_Fv")

#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "reset_sound__29_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_Fv")

#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "play_sound__29_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_FiPC5xVec3f")

#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "kill_sound__29_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_FiUi")

#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "set_yaw_matrix__29_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_FR7xMat3x3f")

#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "set_alpha_blend__29_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_FP14xModelInstance")

#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "init_bound_entity__29_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_FR4xEntUiP14xModelInstanceP7xMat4x3")

#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "parallelepiped_to_obb__29_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_FR6xBoundP5xVec3")

#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "max__29_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_Fff")

#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "init__Q229_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_14response_curveFUlPCvUlPCcPPCcPC14tweak_callbackPv")

#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "load__Q229_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_11tweak_groupFP16xModelAssetParamUi")

#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "register_tweaks__Q229_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_11tweak_groupFbP16xModelAssetParamUiPCc")

// zNPCB_SB2::reset_speed()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "reset_speed__9zNPCB_SB2Fv")

// zNPCB_SB2::player_platform()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "player_platform__9zNPCB_SB2Fv")

// zNPCB_SB2::activate_hand(zNPCB_SB2::hand_enum,bool)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "activate_hand__9zNPCB_SB2FQ29zNPCB_SB29hand_enumb")

// zNPCB_SB2::deactivate_hand(zNPCB_SB2::hand_enum)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "deactivate_hand__9zNPCB_SB2FQ29zNPCB_SB29hand_enum")

// zNPCB_SB2::player_on_ground() const
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "player_on_ground__9zNPCB_SB2CFv")

// zNPCB_SB2::emit_slug(zNPCB_SB2::slug_enum)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "emit_slug__9zNPCB_SB2FQ29zNPCB_SB29slug_enum")

// zNPCB_SB2::slugs_ready() const
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "slugs_ready__9zNPCB_SB2CFv")

// zNPCB_SB2::slugs_inactive() const
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "slugs_inactive__9zNPCB_SB2CFv")

// zNPCB_SB2::fire_slug(zNPCB_SB2::slug_enum,zNPCB_SB2::platform_data&)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "fire_slug__9zNPCB_SB2FQ29zNPCB_SB29slug_enumRQ29zNPCB_SB213platform_data")

// zNPCB_SB2::abandon_slugs()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "abandon_slugs__9zNPCB_SB2Fv")

// zNPCB_SB2::next_goal()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "next_goal__9zNPCB_SB2Fv")

// zNPCB_SB2::reset_stage()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "reset_stage__9zNPCB_SB2Fv")

// zNPCB_SB2::set_vulnerable(bool)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "set_vulnerable__9zNPCB_SB2Fb")

// zNPCB_SB2::decompose()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "decompose__9zNPCB_SB2Fv")

// zNPCB_SB2::update_turn(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "update_turn__9zNPCB_SB2Ff")

// zNPCB_SB2::update_halt(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "update_halt__9zNPCB_SB2Ff")

// zNPCB_SB2::update_follow(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "update_follow__9zNPCB_SB2Ff")

// zNPCB_SB2::update_ymove(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "update_ymove__9zNPCB_SB2Ff")

// zNPCB_SB2::update_move(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "update_move__9zNPCB_SB2Ff")

// zNPCB_SB2::update_camera(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "update_camera__9zNPCB_SB2Ff")

// zNPCB_SB2::update_nodes(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "update_nodes__9zNPCB_SB2Ff")

// zNPCB_SB2::init_nodes()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "init_nodes__9zNPCB_SB2Fv")

// zNPCB_SB2::show_nodes()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "show_nodes__9zNPCB_SB2Fv")

// zNPCB_SB2::move_nodes()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "move_nodes__9zNPCB_SB2Fv")

// zNPCB_SB2::render_nodes()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "render_nodes__9zNPCB_SB2Fv")

// zNPCB_SB2::bind_nodes()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "bind_nodes__9zNPCB_SB2Fv")

// zNPCB_SB2::rebind_nodes(RpAtomic*,RwMatrixTag*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "rebind_nodes__9zNPCB_SB2FP8RpAtomicP11RwMatrixTag")

// zNPCB_SB2::setup_node_tags()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "setup_node_tags__9zNPCB_SB2Fv")

// zNPCB_SB2::check_life()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "check_life__9zNPCB_SB2Fv")

// zNPCB_SB2::ouchie()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "ouchie__9zNPCB_SB2Fv")

// zNPCB_SB2::update_round()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "update_round__9zNPCB_SB2Fv")

// zNPCB_SB2::create_surface()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "create_surface__9zNPCB_SB2Fv")

// zNPCB_SB2::init_hands()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "init_hands__9zNPCB_SB2Fv")

// zNPCB_SB2::move_hand(zNPCB_SB2::hand_data&,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "move_hand__9zNPCB_SB2FRQ29zNPCB_SB29hand_dataf")

// zNPCB_SB2::spin_platform(zNPCB_SB2::platform_data&,const xVec3&,float,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "spin_platform__9zNPCB_SB2FRQ29zNPCB_SB213platform_dataRC5xVec3ff")

// zNPCB_SB2::check_platform_smack(zNPCB_SB2::hand_data&)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "check_platform_smack__9zNPCB_SB2FRQ29zNPCB_SB29hand_data")

// zNPCB_SB2::update_platforms(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "update_platforms__9zNPCB_SB2Ff")

// zNPCB_SB2::init_bounds()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "init_bounds__9zNPCB_SB2Fv")

// zNPCB_SB2::reset_bounds()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "reset_bounds__9zNPCB_SB2Fv")

// zNPCB_SB2::update_bounds()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "update_bounds__9zNPCB_SB2Fv")

// zNPCB_SB2::init_slugs()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "init_slugs__9zNPCB_SB2Fv")

// zNPCB_SB2::update_aim_slug(zNPCB_SB2::slug_data&,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "update_aim_slug__9zNPCB_SB2FRQ29zNPCB_SB29slug_dataf")

// zNPCB_SB2::update_delay_slug(zNPCB_SB2::slug_data&,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "update_delay_slug__9zNPCB_SB2FRQ29zNPCB_SB29slug_dataf")

// zNPCB_SB2::update_dying_slug(zNPCB_SB2::slug_data&,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "update_dying_slug__9zNPCB_SB2FRQ29zNPCB_SB29slug_dataf")

// zNPCB_SB2::update_fire_slug(zNPCB_SB2::slug_data&,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "update_fire_slug__9zNPCB_SB2FRQ29zNPCB_SB29slug_dataf")

// zNPCB_SB2::slug_interp(float,float&)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "slug_interp__9zNPCB_SB2FfRf")

#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "eval_linear__Q229_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_14response_curveFfPf")

#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "find_active_node__Q229_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_14response_curveFf")

#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "eval_smooth__Q229_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_14response_curveFfPf")

#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "clamp_t__Q229_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_14response_curveCFf")

#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "end_t__Q229_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_14response_curveCFv")

#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "get_node__Q229_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_14response_curveCFUl")

#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "start_t__Q229_esc__2_unnamed_esc__2_zNPCTypeBossSB2_cpp_esc__2_14response_curveCFv")

// zNPCB_SB2::update_slugs(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "update_slugs__9zNPCB_SB2Ff")

// zNPCB_SB2::scan_cronies()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "scan_cronies__9zNPCB_SB2Fv")

// zNPCB_SB2::check_hit_fail()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "check_hit_fail__9zNPCB_SB2Fv")

// zNPCB_SB2::create_glow_light()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "create_glow_light__9zNPCB_SB2Fv")

// xLightKitLight::operator =(const xLightKitLight&)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "__as__14xLightKitLightFRC14xLightKitLight")

// zNPCB_SB2::destroy_glow_light()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "destroy_glow_light__9zNPCB_SB2Fv")

// zNPCB_SB2::set_glow_light_intensity(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "set_glow_light_intensity__9zNPCB_SB2Ff")

// zNPCB_SB2::say(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "say__9zNPCB_SB2Fi")

// xSCurveInverse(float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "xSCurveInverse__Ff")

// zNPCGoalBossSB2Swipe::can_start() const
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "can_start__20zNPCGoalBossSB2SwipeCFv")

// zNPCGoalBossSB2Chop::can_start() const
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "can_start__19zNPCGoalBossSB2ChopCFv")

// zNPCGoalBossSB2Karate::can_start() const
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "can_start__21zNPCGoalBossSB2KarateCFv")

namespace {
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "load_param_esc__0_i_esc__4_i_esc__1___10auto_tweakFRiiiiP16xModelAssetParamUiPCc")

#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "load_param_esc__0_b_esc__4_i_esc__1___10auto_tweakFRbiiiP16xModelAssetParamUiPCc")

#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "load_param_esc__0_5xVec3_esc__4_i_esc__1___10auto_tweakFR5xVec3iiiP16xModelAssetParamUiPCc")

#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "load_param_esc__0_f_esc__4_f_esc__1___10auto_tweakFRffffP16xModelAssetParamUiPCc")
}

// zNPCB_SB2::choose_hand()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "choose_hand__9zNPCB_SB2Fv")

// zNPCB_SB2::location() const
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "location__9zNPCB_SB2CFv")

// zNPCB_SB2::render_debug()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "render_debug__9zNPCB_SB2Fv")

// zNPCB_SB2::get_home() const
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "get_home__9zNPCB_SB2CFv")

// zNPCB_SB2::set_location(const xVec2&)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "set_location__9zNPCB_SB2FRC5xVec2")

// zNPCB_SB2::player_damaged() const
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "player_damaged__9zNPCB_SB2CFv")

// zNPCB_SB2::turning() const
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "turning__9zNPCB_SB2CFv")

// zNPCB_SB2::set_location(const xVec3&)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "set_location__9zNPCB_SB2FRC5xVec3")

// zNPCGoalBossSB2Intro::zNPCGoalBossSB2Intro(int,zNPCB_SB2&)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "__ct__20zNPCGoalBossSB2IntroFiR9zNPCB_SB2")

// zNPCGoalBossSB2Idle::zNPCGoalBossSB2Idle(int,zNPCB_SB2&)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "__ct__19zNPCGoalBossSB2IdleFiR9zNPCB_SB2")

// zNPCGoalBossSB2Taunt::zNPCGoalBossSB2Taunt(int,zNPCB_SB2&)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "__ct__20zNPCGoalBossSB2TauntFiR9zNPCB_SB2")

// zNPCGoalBossSB2Dizzy::zNPCGoalBossSB2Dizzy(int,zNPCB_SB2&)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "__ct__20zNPCGoalBossSB2DizzyFiR9zNPCB_SB2")

// zNPCGoalBossSB2Hit::zNPCGoalBossSB2Hit(int,zNPCB_SB2&)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "__ct__18zNPCGoalBossSB2HitFiR9zNPCB_SB2")

// zNPCGoalBossSB2Hunt::zNPCGoalBossSB2Hunt(int,zNPCB_SB2&)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "__ct__19zNPCGoalBossSB2HuntFiR9zNPCB_SB2")

// zNPCB_SB2::start_location() const
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "start_location__9zNPCB_SB2CFv")

// zNPCGoalBossSB2Swipe::zNPCGoalBossSB2Swipe(int,zNPCB_SB2&)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "__ct__20zNPCGoalBossSB2SwipeFiR9zNPCB_SB2")

// zNPCGoalBossSB2Chop::zNPCGoalBossSB2Chop(int,zNPCB_SB2&)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "__ct__19zNPCGoalBossSB2ChopFiR9zNPCB_SB2")

// zNPCB_SB2::facing() const
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "facing__9zNPCB_SB2CFv")

// zNPCGoalBossSB2Karate::zNPCGoalBossSB2Karate(int,zNPCB_SB2&)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "__ct__21zNPCGoalBossSB2KarateFiR9zNPCB_SB2")

// zNPCB_SB2::platform_index(const zNPCB_SB2::platform_data&) const
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "platform_index__9zNPCB_SB2CFRCQ29zNPCB_SB213platform_data")

// zNPCGoalBossSB2Death::zNPCGoalBossSB2Death(int,zNPCB_SB2&)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "__ct__20zNPCGoalBossSB2DeathFiR9zNPCB_SB2")

// xVec2::operator +(const xVec2&) const
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "__pl__5xVec2CFRC5xVec2")

// xMat3x3RMulVec(xVec3*,const xMat3x3*,const xVec3*)
namespace {
#pragma GLOBAL_ASM("asm/Game/zNPCTypeBossSB2.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")
}
