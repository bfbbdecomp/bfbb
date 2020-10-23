#include "xFont.h"

#include <types.h>

// func_8001FFB0
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "find_bounds__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FPC10iColor_tagRC13basic_rect_esc__0_i_esc__1_i")

// func_80020120
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "reset_font_spacing__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ219_esc__2_unnamed_esc__2_xFont_cpp_esc__2_10font_asset")

// func_80020334
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "get_tex_bounds__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ219_esc__2_unnamed_esc__2_xFont_cpp_esc__2_9font_dataUc")

// func_80020500
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "get_bounds__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ219_esc__2_unnamed_esc__2_xFont_cpp_esc__2_9font_dataUc")

// func_800205D0
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "init_font_data__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ219_esc__2_unnamed_esc__2_xFont_cpp_esc__2_9font_data")

// func_80020930
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "start_tex_render__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FUi")

// func_80020990
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "tex_flush__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_Fv")

// func_800209D0
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "stop_tex_render__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_Fv")

// func_800209F4
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "tex_render__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRC13basic_rect_esc__0_f_esc__1_RC13basic_rect_esc__0_f_esc__1_RC13basic_rect_esc__0_f_esc__1_10iColor_tag")

// func_80020BC8
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "__as__18rwGameCube2DVertexFRC18rwGameCube2DVertex")

// func_80020C14
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "set_vert__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FR18rwGameCube2DVertexffff10iColor_tag")

// func_80020C50
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "init_model_cache__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_Fv")

// func_80020DD0
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "load_model__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FUi")

// func_80020FCC
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "init__5xfontFv")

// func_80021090
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "set_render_state__5xfontFP8RwRaster")

// func_800211D4
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "restore_render_state__5xfontFv")

// func_800212A4
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "bounds__5xfontCFc")

// func_80021378
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "bounds__5xfontCFPCc")

// func_800213B0
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "bounds__5xfontCFPCcUlfRUl")

// func_800214E4
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "start_render__5xfontCFv")

// func_80021508
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "stop_render__5xfontCFv")

// func_80021528
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "char_render__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FUcUiRC13basic_rect_esc__0_f_esc__1_RC13basic_rect_esc__0_f_esc__1_10iColor_tag")

// func_80021620
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "set_tex_raster__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FP8RwRaster")

// func_8002167C
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "irender__5xfontCFPCcff")

// func_800216A0
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "irender__5xfontCFPCcUlff")

// func_800217D8
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "parse_split_tag__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox9split_tag")

// func_80021954
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "parse_next_tag_jot__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxPCcUl")

// func_80021AFC
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "parse_next_text_jot__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxPCcUl")

// func_80021C10
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "parse_next_jot__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxPCcUl")

// func_80021CA4
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "reset_tex_args__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ219_esc__2_unnamed_esc__2_xFont_cpp_esc__2_8tex_args")

// func_80021D0C
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "load_tex_args__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ219_esc__2_unnamed_esc__2_xFont_cpp_esc__2_8tex_argsRC6substr")

// func_80022194
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "reset_model_args__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ219_esc__2_unnamed_esc__2_xFont_cpp_esc__2_10model_args")

// func_800221F8
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "load_model_args__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ219_esc__2_unnamed_esc__2_xFont_cpp_esc__2_10model_argsRC6substr")

// func_80022420
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "start_layout__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRC8xtextbox")

// func_80022454
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "stop_layout__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRC8xtextbox")

// func_80022458
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "start_render__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRC8xtextbox")

// func_80022478
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "stop_render__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRC8xtextbox")

// func_80022498
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "text_render__8xtextboxFRCQ28xtextbox3jotRC8xtextboxff")

// func_800224C8
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "set_text__8xtextboxFPCc")

// func_800224EC
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "set_text__8xtextboxFPCcUl")

// func_80022540
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "set_text__8xtextboxFPPCcUl")

// func_80022568
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "set_text__8xtextboxFPPCcPCUlUl")

// func_8002262C
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "log_cache__Q27tweaker19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_Fb")

// func_80022630
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "temp_layout__8xtextboxCFb")

// func_800227DC
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "__as__8xtextboxFRC8xtextbox")

// func_800228B0
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "render__8xtextboxCFRQ28xtextbox6layoutii")

// func_800228DC
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "yextent__8xtextboxCFfRiRCQ28xtextbox6layoutii")

// func_80022908
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "read_tag__8xtextboxFRC6substr")

// func_80022B24
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "find_entry__8xtextboxFRCQ28xtextbox14tag_entry_listRC6substr")

// func_80022B94
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "read_list__8xtextboxFRCQ28xtextbox9tag_entryPfUl")

// func_80022C14
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "read_list__8xtextboxFRCQ28xtextbox9tag_entryPiUl")

// func_80022C94
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "clear_layout_cache__8xtextboxFv")

// func_80022CC8
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "refresh__Q28xtextbox6layoutFRC8xtextboxb")

// func_80022D2C
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "refresh_end__Q28xtextbox6layoutFRC8xtextbox")

// func_80022D8C
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "clear__Q28xtextbox6layoutFv")

// func_80022DE0
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "trim_line__Q28xtextbox6layoutFRQ28xtextbox8jot_line")

// func_80022EC8
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "erase_jots__Q28xtextbox6layoutFUlUl")

// func_80022F64
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "__as__Q28xtextbox3jotFRCQ28xtextbox3jot")

// func_80022FE0
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "merge_line__Q28xtextbox6layoutFRQ28xtextbox8jot_line")

// func_800230E4
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "bound_line__Q28xtextbox6layoutFRQ28xtextbox8jot_line")

// func_800231DC
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "fit_line__Q28xtextbox6layoutFv")

// func_80023320
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "next_line__Q28xtextbox6layoutFv")

// func_80023394
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "calc__Q28xtextbox6layoutFRC8xtextboxUl")

// func_80023778
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "__as__6substrFRC6substr")

// func_8002378C
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "render__Q28xtextbox6layoutFRC8xtextboxii")

// func_800239E8
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "yextent__Q28xtextbox6layoutCFfRiii")

// func_80023AF8
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "changed__Q28xtextbox6layoutFRC8xtextbox")

// func_80023C34
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_alpha__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_80023C60
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_reset_alpha__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_80023C6C
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "parse_tag_alpha__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80023D9C
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "reset_tag_alpha__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80023DAC
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_red__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_80023DD8
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_reset_red__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_80023DE4
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "parse_tag_red__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80023F14
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "reset_tag_red__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80023F24
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_green__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_80023F50
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_reset_green__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_80023F5C
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "parse_tag_green__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_8002408C
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "reset_tag_green__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_8002409C
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_blue__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_800240C8
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_reset_blue__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_800240D4
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "parse_tag_blue__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80024204
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "reset_tag_blue__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80024214
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_width__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_80024220
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_reset_width__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_8002422C
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "parse_tag_width__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80024320
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "reset_tag_width__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80024330
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_height__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_8002433C
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_reset_height__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_80024348
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "parse_tag_height__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_8002443C
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "reset_tag_height__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_8002444C
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_left_indent__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_80024458
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_reset_left_indent__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_80024464
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "parse_tag_left_indent__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80024558
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "reset_tag_left_indent__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80024568
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_right_indent__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_80024574
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_reset_right_indent__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_80024580
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "parse_tag_right_indent__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80024674
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "reset_tag_right_indent__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80024684
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_tab_stop__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_80024690
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_reset_tab_stop__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_8002469C
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "parse_tag_tab_stop__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80024790
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "reset_tag_tab_stop__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_800247A0
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_xspace__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_800247AC
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_reset_xspace__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_800247B8
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "parse_tag_xspace__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_800248AC
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "reset_tag_xspace__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_800248BC
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_yspace__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_800248C8
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_reset_yspace__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_800248D4
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "parse_tag_yspace__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_800249C8
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "reset_tag_yspace__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_800249D8
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_reset_all__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_80024A00
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "reset_tag_all__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80024A10
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_color__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_80024A3C
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_reset_color__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_80024A64
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "parse_tag_color__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80024C30
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "reset_tag_color__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80024C40
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_font__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_80024C4C
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_reset_font__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_80024C58
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "parse_tag_font__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80024CD4
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "reset_tag_font__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80024CE4
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_wrap__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_80024CF8
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_reset_wrap__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_80024D0C
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "parse_tag_wrap__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80024E00
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "reset_tag_wrap__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80024E10
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_xjustify__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_80024E24
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_reset_xjustify__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_80024E38
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "parse_tag_xjustify__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80024F50
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "reset_tag_xjustify__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80024F60
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_yjustify__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_80024F74
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "update_tag_reset_yjustify__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotR8xtextboxRC8xtextbox")

// func_80024F88
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "parse_tag_yjustify__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_800250A0
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "reset_tag_yjustify__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_800250B0
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "parse_tag_open_curly__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80025134
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "parse_tag_newline__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80025194
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "parse_tag_tab__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_800251A8
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "parse_tag_word_break__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_800251BC
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "parse_tag_page_break__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_800251D0
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "render_tag_model__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotRC8xtextboxff")

// func_80025364
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "parse_tag_model__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_800254BC
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "reset_tag_model__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_800254E4
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "render_tag_tex__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRCQ28xtextbox3jotRC8xtextboxff")

// func_80025584
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "parse_tag_tex__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_800257F8
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "__as__5xVec2FRC5xVec2")

// func_8002580C
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "get_texture_size__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FR8RwRaster")

// func_80025880
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "reset_tag_tex__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_800258A8
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "parse_tag_insert__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80025968
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "parse_tag_insert_hash__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80025A28
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "parse_tag_pop__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80025A50
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "parse_tag_timer__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag")

// func_80025B94
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "register_tags__8xtextboxFPCQ28xtextbox8tag_typeUl")

// func_80025CC0
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "__as__Q28xtextbox8tag_typeFRCQ28xtextbox8tag_type")

// func_80025CEC
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "find_format_tag__8xtextboxFRC6substrRi")

// func_80025D90
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "render_fill_rect__FRC13basic_rect_esc__0_f_esc__1_10iColor_tag")

// func_80025E84
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "set_rect_verts__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FP18rwGameCube2DVertexffff10iColor_tagff")

// func_80025FCC
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "set_rect_vert__19_esc__2_unnamed_esc__2_xFont_cpp_esc__2_FR18rwGameCube2DVertexfff10iColor_tagf")

// func_80025FFC
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "scale__13basic_rect_esc__0_f_esc__1_Fff")

// func_80026024
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "scale__13basic_rect_esc__0_f_esc__1_Fffff")

// func_80026058
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "assign__13basic_rect_esc__0_f_esc__1_Fffff")

// func_8002606C
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "empty__13basic_rect_esc__0_f_esc__1_CFv")

// func_800260A0
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "clip__13basic_rect_esc__0_f_esc__1_CFR13basic_rect_esc__0_f_esc__1_R13basic_rect_esc__0_f_esc__1_")

// func_800261BC
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "__aor__13basic_rect_esc__0_f_esc__1_FRC13basic_rect_esc__0_f_esc__1_")

// func_80026288
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "set_bounds__13basic_rect_esc__0_f_esc__1_Fffff")

// func_800262A4
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "get_bounds__13basic_rect_esc__0_f_esc__1_CFRfRfRfRf")

// func_800262D0
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "move__13basic_rect_esc__0_f_esc__1_Fff")

// func_800262EC
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "scale__13basic_rect_esc__0_f_esc__1_Ff")

// func_80026318
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "assign__5xVec2Fff")

// func_80026324
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "create__6substrFPCcUl")

// func_80026348
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "rskip_ws__FR6substr")

// func_8002636C
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "rskip_ws__FRPCcRUl")

// func_800263D8
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "is_ws__Fc")

// func_80026400
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "find_char__FRC6substrc")

// func_80026348
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "skip_ws__FR6substr")

// func_8002636C
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "skip_ws__FRPCcRUl")

// func_80026504
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "atox__FRC6substr")

// func_80026528
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "trim_ws__FR6substr")

// func_8002654C
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "trim_ws__FRPCcRUl")

// func_80026590
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "find_format_tag__8xtextboxFRC6substr")

// func_800265B4
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "jots_size__Q28xtextbox6layoutCFv")

// func_800265BC
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "create__8xtextboxFv")

// func_80026614
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "create__5xfontFv")

// func_80026664
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "intersect_flags__Q28xtextbox3jotFRCQ28xtextbox3jot")

// func_80026678
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "reset_flags__Q28xtextbox3jotFv")

// func_80026684
#pragma GLOBAL_ASM("asm/Core/x/xFont.s", "xModelGetLocalSBound__FP14xModelInstance")
