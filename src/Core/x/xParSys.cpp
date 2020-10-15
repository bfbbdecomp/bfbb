#include "xParSys.h"

#include <types.h>

// par_sprite_begin()
#pragma GLOBAL_ASM("asm/Core/x/xParSys.s", "par_sprite_begin__Fv")

// par_sprite_update(xParSys&,xParGroup&)
#pragma GLOBAL_ASM("asm/Core/x/xParSys.s", "par_sprite_update__FR7xParSysR9xParGroup")

// using_ptank_render(const xParSysAsset&)
#pragma GLOBAL_ASM("asm/Core/x/xParSys.s", "using_ptank_render__FRC12xParSysAsset")

// xParCmdTexInit(xParCmdTex*)
#pragma GLOBAL_ASM("asm/Core/x/xParSys.s", "xParCmdTexInit__FP10xParCmdTex")

// xParSysInit(xBase*,xParSysAsset*)
#pragma GLOBAL_ASM("asm/Core/x/xParSys.s", "xParSysInit__FP5xBaseP12xParSysAsset")

// xParSysSetup(xParSys*)
#pragma GLOBAL_ASM("asm/Core/x/xParSys.s", "xParSysSetup__FP7xParSys")

// xParSysReset(xParSys*)
#pragma GLOBAL_ASM("asm/Core/x/xParSys.s", "xParSysReset__FP7xParSys")

// xParSysExit(xParSys*)
#pragma GLOBAL_ASM("asm/Core/x/xParSys.s", "xParSysExit__FP7xParSys")

// xParSysUpdate(xBase*,xScene*,float)
#pragma GLOBAL_ASM("asm/Core/x/xParSys.s", "xParSysUpdate__FP5xBaseP6xScenef")

// xParGroupUpdateR(xParSys*,xParGroup*,float)
#pragma GLOBAL_ASM("asm/Core/x/xParSys.s", "xParGroupUpdateR__FP7xParSysP9xParGroupf")

// xParGroupUpdate(xParSys*,xParGroup*,float)
#pragma GLOBAL_ASM("asm/Core/x/xParSys.s", "xParGroupUpdate__FP7xParSysP9xParGroupf")

// xParSysRender(xBase*)
#pragma GLOBAL_ASM("asm/Core/x/xParSys.s", "xParSysRender__FP5xBase")

// ptank_pool__pos_color_size_uv2::flush()
#pragma GLOBAL_ASM("asm/Core/x/xParSys.s", "flush__30ptank_pool__pos_color_size_uv2Fv")

// ptank_pool::valid() const
#pragma GLOBAL_ASM("asm/Core/x/xParSys.s", "valid__10ptank_poolCFv")

// ptank_pool__pos_color_size_uv2::next()
#pragma GLOBAL_ASM("asm/Core/x/xParSys.s", "next__30ptank_pool__pos_color_size_uv2Fv")

// ptank_pool__pos_color_size_uv2::lock_block()
#pragma GLOBAL_ASM("asm/Core/x/xParSys.s", "lock_block__30ptank_pool__pos_color_size_uv2Fv")

// ptank_pool::unlock_block()
#pragma GLOBAL_ASM("asm/Core/x/xParSys.s", "unlock_block__10ptank_poolFv")

// ptank_pool::at_block_end() const
#pragma GLOBAL_ASM("asm/Core/x/xParSys.s", "at_block_end__10ptank_poolCFv")

// ptank_pool::reset()
#pragma GLOBAL_ASM("asm/Core/x/xParSys.s", "reset__10ptank_poolFv")
