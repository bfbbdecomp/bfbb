#include "xHud.h"

#include <types.h>

// xhud::block_allocator::flush_all()
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "flush_all__Q24xhud15block_allocatorFv")

// xhud::block_allocator::block_allocator(unsigned int,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "__ct__Q24xhud15block_allocatorFUiUi")

// xhud::block_allocator::set_increment(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "set_increment__Q24xhud15block_allocatorFUi")

// xhud::block_allocator::size_reserve(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "size_reserve__Q24xhud15block_allocatorFUi")

// xhud::block_allocator::alloc()
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "alloc__Q24xhud15block_allocatorFv")

// xhud::block_allocator::free(void*)
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "free__Q24xhud15block_allocatorFPv")

// xhud::block_allocator::flush()
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "flush__Q24xhud15block_allocatorFv")

// xhud::widget::motive_allocator()
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "motive_allocator__Q24xhud6widgetFv")

// xhud::init()
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "init__4xhudFv")

// xhud::setup()
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "setup__4xhudFv")

// xhud::destroy()
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "destroy__4xhudFv")

// xhud::update(float)
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "update__4xhudFf")

// xhud::render()
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "render__4xhudFv")

// xhud::widget::widget(const xhud::asset&)
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "__ct__Q24xhud6widgetFRCQ24xhud5asset")

// xhud::render_context::operator =(const xhud::render_context&)
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "__as__Q24xhud14render_contextFRCQ24xhud14render_context")

// xhud::widget::init_base(xBase&,const xBaseAsset&,unsigned long)
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "init_base__Q24xhud6widgetFR5xBaseRC10xBaseAssetUl")

// xhud::widget::destruct()
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "destruct__Q24xhud6widgetFv")

// xhud::widget::presetup()
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "presetup__Q24xhud6widgetFv")

// xhud::widget::updater(float)
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "updater__Q24xhud6widgetFf")

// xhud::widget::dispatcher(xBase*,unsigned int,const float*,xBase*)
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "dispatcher__Q24xhud6widgetFP5xBaseUiPCfP5xBase")

// xhud::widget::type() const
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "type__Q24xhud6widgetCFv")

// xhud::widget::is(unsigned int) const
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "is__Q24xhud6widgetCFUi")

// xhud::widget::show()
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "show__Q24xhud6widgetFv")

// xhud::widget::hide()
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "hide__Q24xhud6widgetFv")

// xhud::widget::disable_all(bool)
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "disable_all__Q24xhud6widgetFb")

#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "__ct__Q34xhud18_esc__2_unnamed_esc__2_xHud_cpp_esc__2_15functor_disableFb")

// xhud::widget::setup_all()
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "setup_all__Q24xhud6widgetFv")

// xhud::widget::update_all(float)
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "update_all__Q24xhud6widgetFf")

#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "__ct__Q34xhud18_esc__2_unnamed_esc__2_xHud_cpp_esc__2_14functor_updateFf")

// xhud::widget::render_all()
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "render_all__Q24xhud6widgetFv")

// xhud::widget::add_motive(const xhud::motive&)
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "add_motive__Q24xhud6widgetFRCQ24xhud6motive")

// xhud::widget::clear_motives()
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "clear_motives__Q24xhud6widgetFv")

// xhud::widget::clear_motives(bool (*)(xhud::widget&, xhud::motive&, float),void*)
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "clear_motives__Q24xhud6widgetFPFRQ24xhud6widgetRQ24xhud6motivef_bPv")

// xhud::load_model(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "load_model__4xhudFUi")

#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "render_one_model__Q24xhud18_esc__2_unnamed_esc__2_xHud_cpp_esc__2_FR14xModelInstancefRC13basic_rect_esc__0_f_esc__1_RC5xVec3RC5xVec3RC7xMat4x3")

// xhud::render_model(xModelInstance&,const xhud::render_context&)
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "render_model__4xhudFR14xModelInstanceRCQ24xhud14render_context")

#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "xhud_rename_me_2")

#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "xhud_rename_me")

#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "for_each_esc__0_Q34xhud18_esc__2_unnamed_esc__2_xHud_cpp_esc__2_14functor_update_esc__1___Q24xhud18_esc__2_unnamed_esc__2_xHud_cpp_esc__2_FUcUiQ34xhud18_esc__2_unnamed_esc__2_xHud_cpp_esc__2_14functor_update")

#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "for_each_esc__0_PFRQ24xhud6widget_v_esc__1___Q24xhud18_esc__2_unnamed_esc__2_xHud_cpp_esc__2_FUcUiPFRQ24xhud6widget_v")

#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "for_each_esc__0_Q34xhud18_esc__2_unnamed_esc__2_xHud_cpp_esc__2_15functor_disable_esc__1___Q24xhud18_esc__2_unnamed_esc__2_xHud_cpp_esc__2_FUcUiQ34xhud18_esc__2_unnamed_esc__2_xHud_cpp_esc__2_15functor_disable")

#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "__cl__Q34xhud18_esc__2_unnamed_esc__2_xHud_cpp_esc__2_15functor_disableFRQ24xhud6widget")

#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "__cl__Q34xhud18_esc__2_unnamed_esc__2_xHud_cpp_esc__2_14functor_updateFRQ24xhud6widget")

// xhud::widget::disable()
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "disable__Q24xhud6widgetFv")

// xhud::widget::add_tweaks()
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "add_tweaks__Q24xhud6widgetFv")

// xhud::motive::update(xhud::widget&,float)
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "update__Q24xhud6motiveFRQ24xhud6widgetf")

// xhud::widget::enable()
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "enable__Q24xhud6widgetFv")

// xhud::motive::motive(float*,float,float,float,bool (*)(xhud::widget&, xhud::motive&, float),void*)
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "__ct__Q24xhud6motiveFPffffPFRQ24xhud6widgetRQ24xhud6motivef_bPv")

// xhud::widget::visible() const
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "visible__Q24xhud6widgetCFv")

// xhud::widget::enabled() const
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "enabled__Q24xhud6widgetCFv")

// xhud::widget::debug_render()
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "debug_render__Q24xhud6widgetFv")

// xhud::motive::motive(const xhud::motive&)
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "__ct__Q24xhud6motiveFRCQ24xhud6motive")

// xhud::motive::finish()
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "finish__Q24xhud6motiveFv")

// xhud::asset::type_name()
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "type_name__Q24xhud5assetFv")

// operator new(unsigned long,void*)
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "__nw__FUlPv")

// xColorFromRGBA(unsigned char,unsigned char,unsigned char,unsigned char)
#pragma GLOBAL_ASM("asm/Core/x/xHud.s", "xColorFromRGBA__FUcUcUcUc")
