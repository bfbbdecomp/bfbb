#include "zTalkBox.h"

#include <types.h>

// func_801305FC
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "speak_stop__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_Fv")

// func_80130674
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "trigger__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FUi")

// func_801306F8
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "trigger_pads__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FUi")

// func_80130800
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "flush_triggered__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_Fv")

// func_80130878
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "read_bool__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FRC6substrb")

// func_80130934
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "reset_auto_wait__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_Fv")

// func_801309E8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "load_wait_context__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FRQ222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_12wait_contextRCQ28xtextbox14tag_entry_list")

// func_80130C90
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "reset_type__Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_12wait_contextFv")

// func_80130C9C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "parse_tag_auto_wait__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80130D7C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "__as__Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_12wait_contextFRCQ222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_12wait_context")

// func_80130DA8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "reset_tag_auto_wait__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80130E18
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "trigger_auto_wait__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FRCQ28xtextbox3jot")

// func_80130E50
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "parse_tag_signal__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80130F98
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "trigger_signal__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FRCQ28xtextbox3jot")

// func_80131058
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "load_sound_type__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FRQ222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_13sound_contextRCQ28xtextbox14tag_entry_list")

// func_80131108
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "parse_tag_sound__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80131440
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "reset_tag_sound__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80131480
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "trigger_sound__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FRCQ28xtextbox3jot")

// func_80131704
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "parse_tag_pause__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80131708
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "reset_tag_pause__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_8013170C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "trigger_pause__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FRCQ28xtextbox3jot")

// func_80131714
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "parse_tag_allow_quit__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80131780
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "reset_tag_allow_quit__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_801317C0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "trigger_allow_quit__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FRCQ28xtextbox3jot")

// func_801317E8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "parse_tag_teleport__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80131918
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "move_player__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FRC5xVec3")

// func_8013196C
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "turn_player__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_Ff")

// func_801319C8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "trigger_teleport__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FRCQ28xtextbox3jot")

// func_80131A30
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "parse_tag_trap__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80131A9C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "reset_tag_trap__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80131ADC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "trigger_trap__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FRCQ28xtextbox3jot")

// func_80131B1C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "parse_tag_wait__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80131BBC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "trigger_wait__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FRCQ28xtextbox3jot")

// func_80131C2C
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "start_audio_effect__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FR8ztalkbox")

// func_80131D0C
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "stop_audio_effect__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_Fv")

// func_80131D60
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "deactivate__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_Fv")

// func_80131DCC
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "activate__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FR8ztalkbox")

// func_80131E50
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "is_wait_jot__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FRCQ28xtextbox3jot")

// func_80131E7C
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "layout_contains_streams__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_Fv")

// func_80131F40
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "lock_stream__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_Fv")

// func_80131FAC
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "unlock_stream__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_Fv")

// func_80132014
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "refresh_prompts__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_Fv")

// func_80132174
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "update_prompt_status__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_Ff")

// func_80132210
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "update_quit_status__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_Ff")

// func_8013226C
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "hide_prompts__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_Fv")

// func_801322BC
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "stop_wait__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FR8ztalkboxPCfUl")

// func_80132358
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "cb_dispatch__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FP5xBaseP5xBaseUiPCfP5xBase")

// func_80132500
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "load_text__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FUi")

// func_80132548
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s", "load__8ztalkboxFRCQ28ztalkbox10asset_type")

// func_80132640
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s", "reset__8ztalkboxFv")

// func_80132684
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s", "set_text__8ztalkboxFPCc")

// func_80132764
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "start__Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_10state_typeFv")

// func_80132768
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "stop__Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_10state_typeFv")

// func_8013276C
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s", "set_text__8ztalkboxFUi")

// func_801327C8
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s", "add_text__8ztalkboxFPCc")

// func_8013281C
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s", "add_text__8ztalkboxFUi")

// func_8013286C
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s", "clear_text__8ztalkboxFv")

// func_80132890
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "start_talk__8ztalkboxFPCcPQ28ztalkbox8callbackP10zNPCCommon")

// func_80132A14
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "start_talk__8ztalkboxFUiPQ28ztalkbox8callbackP10zNPCCommon")

// func_80132A90
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s", "stop_talk__8ztalkboxFv")

// func_801305FC
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s", "stop__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_Fv")

// func_80132B84
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s", "stop_wait__8ztalkboxFUi")

// func_80132BAC
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s", "show__8ztalkboxFv")

// func_80132C3C
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s", "hide__8ztalkboxFv")

// func_80132C94
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s", "MasterTellSlaves__8ztalkboxFi")

// func_80132D30
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s", "MasterLoveSlave__8ztalkboxFP5xBasei")

// func_80132DF4
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s", "load_settings__8ztalkboxFR8xIniFile")

// func_80132E58
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s", "init__8ztalkboxFv")

// func_80132F48
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "__ct__Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_15stop_state_typeFv")

// func_80132F88
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "__ct__Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_10state_typeFQ222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_10state_enum")

// func_80132F9C
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "__ct__Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_15wait_state_typeFv")

// func_80132FDC
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "__ct__Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_15next_state_typeFv")

// func_8013301C
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "__ct__Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_16start_state_typeFv")

// func_8013305C
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s", "load__8ztalkboxFR5xBaseR9xDynAssetUl")

// func_8013307C
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s", "update_all__8ztalkboxFR6xScenef")

// func_801331F0
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "pad_pressed__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_Fv")

// func_80133228
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s", "render_all__8ztalkboxFv")

// func_801332C8
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s", "reset_all__8ztalkboxFv")

// func_80133348
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s", "get_active__8ztalkboxFv")

// func_80133358
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s", "permit__8ztalkboxFUiUi")

// func_80133378
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "start__Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_16start_state_typeFv")

// func_80133404
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "stop__Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_16start_state_typeFv")

// func_80133408
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "update__Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_16start_state_typeFR6xScenef")

// func_80133410
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "start__Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_15next_state_typeFv")

// func_80133590
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "trigger_jot__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_Fi")

// func_801335D4
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "trigger_jot__22_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_FRCQ28xtextbox3jot")

// func_80133620
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "stop__Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_15next_state_typeFv")

// func_80133624
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "update__Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_15next_state_typeFR6xScenef")

// func_8013364C
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "start__Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_15wait_state_typeFv")

// func_80133674
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "stop__Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_15wait_state_typeFv")

// func_80133794
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "update__Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_15wait_state_typeFR6xScenef")

// func_801339C0
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "start__Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_15stop_state_typeFv")

// func_801339C4
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "stop__Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_15stop_state_typeFv")

// func_801339C8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "update__Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_15stop_state_typeFR6xScenef")

// func_801339D0
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s", "__sinit_zTalkBox_cpp")

// func_801339F8
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s",                                                          \
                   "__ct__Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_11shared_typeFv")

// func_80133A30
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "back__56fixed_queue_esc__0_Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_12trigger_pair_esc__4_32_esc__1_Fv")

// func_80133A74
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "__ml__Q256fixed_queue_esc__0_Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_12trigger_pair_esc__4_32_esc__1_8iteratorCFv")

// func_80133A8C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "__mi__Q256fixed_queue_esc__0_Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_12trigger_pair_esc__4_32_esc__1_8iteratorCFi")

// func_80133AC8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "__ami__Q256fixed_queue_esc__0_Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_12trigger_pair_esc__4_32_esc__1_8iteratorFi")

// func_80133AF8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "__apl__Q256fixed_queue_esc__0_Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_12trigger_pair_esc__4_32_esc__1_8iteratorFi")

// func_80133B24
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "end__56fixed_queue_esc__0_Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_12trigger_pair_esc__4_32_esc__1_CFv")

// func_80133B48
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "create_iterator__56fixed_queue_esc__0_Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_12trigger_pair_esc__4_32_esc__1_CFUl")

// func_80133B68
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "push_back__56fixed_queue_esc__0_Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_12trigger_pair_esc__4_32_esc__1_Fv")

// func_80133B90
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "empty__56fixed_queue_esc__0_Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_12trigger_pair_esc__4_32_esc__1_CFv")

// func_80133BA8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "pop_front__56fixed_queue_esc__0_Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_12trigger_pair_esc__4_32_esc__1_Fv")

// func_80133BA8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "front__56fixed_queue_esc__0_Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_12trigger_pair_esc__4_32_esc__1_Fv")

// func_80133C00
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "begin__56fixed_queue_esc__0_Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_12trigger_pair_esc__4_32_esc__1_CFv")

// func_80133C24
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "reset__56fixed_queue_esc__0_Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_12trigger_pair_esc__4_32_esc__1_Fv")

// func_80133C44
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zTalkBox.s",                                                                         \
    "clear__56fixed_queue_esc__0_Q222_esc__2_unnamed_esc__2_zTalkBox_cpp_esc__2_12trigger_pair_esc__4_32_esc__1_Fv")

// func_80133C54
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s", "pop__14sound_queue_esc__0_4_esc__1_Fv")

// func_80133CB8
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s", "size__14sound_queue_esc__0_4_esc__1_CFv")

// func_80133CD8
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s", "clear__14sound_queue_esc__0_4_esc__1_Fv")

// func_80133D1C
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s", "playing__14sound_queue_esc__0_4_esc__1_CFib")

// func_80133DF0
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s", "recent__14sound_queue_esc__0_4_esc__1_CFi")

// func_80133E10
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s", "type_name__13pointer_assetFv")

// func_80133E20
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s", "type_name__14location_assetFv")

// func_80133E30
#pragma GLOBAL_ASM("asm/Game/zTalkBox.s", "jots__Q28xtextbox6layoutCFv")
