#include "zLightning.h"

#include <types.h>

// lightningTweakChangeType(const tweak_info&)
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "lightningTweakChangeType__FRC10tweak_info")

// zLightningInit()
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "zLightningInit__Fv")

// FindFreeLightning()
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "FindFreeLightning__Fv")

// zLightningAdd(_tagLightningAdd*)
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "zLightningAdd__FP16_tagLightningAdd")

// UpdateLightning(zLightning*,float)
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "UpdateLightning__FP10zLightningf")

// zLightningUpdate(float)
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "zLightningUpdate__Ff")

// zLightningFunc_Render(zLightning*)
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "zLightningFunc_Render__FP10zLightning")

// RenderLightning(zLightning*)
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "RenderLightning__FP10zLightning")

// zLightningRender()
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "zLightningRender__Fv")

// zLightningShow(zLightning*,int)
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "zLightningShow__FP10zLightningi")

// zLightningKill(zLightning*)
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "zLightningKill__FP10zLightning")

// zLightningModifyEndpoints(zLightning*,xVec3*,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "zLightningModifyEndpoints__FP10zLightningP5xVec3P5xVec3")

// xDebugAddTweak(const char*,unsigned char*,unsigned char,unsigned char,const tweak_callback*,void*,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "xDebugAddTweak__FPCcPUcUcUcPC14tweak_callbackPvUi")

// xDebugAddFlagTweak(const char*,unsigned int*,unsigned int,const tweak_callback*,void*,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "xDebugAddFlagTweak__FPCcPUiUiPC14tweak_callbackPvUi")

// xDebugAddSelectTweak(const char*,unsigned int*,const char**,const unsigned int*,unsigned int,const tweak_callback*,void*,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "xDebugAddSelectTweak__FPCcPUiPPCcPCUiUiPC14tweak_callbackPvUi")

// xDebugAddTweak(const char*,short*,short,short,const tweak_callback*,void*,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zLightning.s", "xDebugAddTweak__FPCcPsssPC14tweak_callbackPvUi")
