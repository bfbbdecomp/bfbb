#include "xDebug.h"

#include <types.h>

// xprintf(const char*,...)
#pragma GLOBAL_ASM("asm/Core/x/xDebug.s", "xprintf__FPCce")

// xDebugModeAdd(const char*,void (*)(void))
#pragma GLOBAL_ASM("asm/Core/x/xDebug.s", "xDebugModeAdd__FPCcPFv_v")

// xDebugInit()
#pragma GLOBAL_ASM("asm/Core/x/xDebug.s", "xDebugInit__Fv")

// xDebugUpdate()
#pragma GLOBAL_ASM("asm/Core/x/xDebug.s", "xDebugUpdate__Fv")

// xDebugExit()
#pragma GLOBAL_ASM("asm/Core/x/xDebug.s", "xDebugExit__Fv")

// xDebugTimestampScreen()
#pragma GLOBAL_ASM("asm/Core/x/xDebug.s", "xDebugTimestampScreen__Fv")

// xtextbox::render(bool) const
#pragma GLOBAL_ASM("asm/Core/x/xDebug.s", "render__8xtextboxCFb")

#pragma GLOBAL_ASM("asm/Core/x/xDebug.s", "create__8xtextboxFRC5xfontRC13basic_rect_esc__0_f_esc__1_Uiffff")

// xfont::operator =(const xfont&)
#pragma GLOBAL_ASM("asm/Core/x/xDebug.s", "__as__5xfontFRC5xfont")

#pragma GLOBAL_ASM("asm/Core/x/xDebug.s", "create__5xfontFUifff10iColor_tagRC13basic_rect_esc__0_f_esc__1_")

// iColor_tag::operator =(const iColor_tag&)
#pragma GLOBAL_ASM("asm/Core/x/xDebug.s", "__as__10iColor_tagFRC10iColor_tag")

// NSCREENY(float)
#pragma GLOBAL_ASM("asm/Core/x/xDebug.s", "NSCREENY__Ff")

// NSCREENX(float)
#pragma GLOBAL_ASM("asm/Core/x/xDebug.s", "NSCREENX__Ff")

#pragma GLOBAL_ASM("asm/Core/x/xDebug.s", "contract__13basic_rect_esc__0_f_esc__1_Fffff")

#pragma GLOBAL_ASM("asm/Core/x/xDebug.s", "expand__13basic_rect_esc__0_f_esc__1_Fffff")

#pragma GLOBAL_ASM("asm/Core/x/xDebug.s", "__as__13basic_rect_esc__0_f_esc__1_FRC13basic_rect_esc__0_f_esc__1_")
