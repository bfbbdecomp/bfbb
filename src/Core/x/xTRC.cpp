#include "xTRC.h"

#include <types.h>

// xTRCInit()
#pragma GLOBAL_ASM("asm/Core/x/xTRC.s", "xTRCInit__Fv")

// render_message(const char*)
#pragma GLOBAL_ASM("asm/Core/x/xTRC.s", "render_message__FPCc")

// xTRCRender()
#pragma GLOBAL_ASM("asm/Core/x/xTRC.s", "xTRCRender__Fv")

// xTRCReset()
#pragma GLOBAL_ASM("asm/Core/x/xTRC.s", "xTRCReset__Fv")

// xTRCPad(int,_tagTRCState)
#pragma GLOBAL_ASM("asm/Core/x/xTRC.s", "xTRCPad__Fi12_tagTRCState")

// xTRCDisk(_tagTRCState)
#pragma GLOBAL_ASM("asm/Core/x/xTRC.s", "xTRCDisk__F12_tagTRCState")

// render_mem_card_no_space(int,int,int,bool)
#pragma GLOBAL_ASM("asm/Core/x/xTRC.s", "render_mem_card_no_space__Fiiib")

// RenderText(const char*,bool)
#pragma GLOBAL_ASM("asm/Core/x/xTRC.s", "RenderText__FPCcb")

// xtextbox::yextent(bool) const
#pragma GLOBAL_ASM("asm/Core/x/xTRC.s", "yextent__8xtextboxCFb")

// xtextbox::yextent(const xtextbox::layout&,int,int) const
#pragma GLOBAL_ASM("asm/Core/x/xTRC.s", "yextent__8xtextboxCFRCQ28xtextbox6layoutii")

#pragma GLOBAL_ASM("asm/Core/x/xTRC.s", "contract__13basic_rect_esc__0_f_esc__1_Ff")

#pragma GLOBAL_ASM("asm/Core/x/xTRC.s", "expand__13basic_rect_esc__0_f_esc__1_Ff")
