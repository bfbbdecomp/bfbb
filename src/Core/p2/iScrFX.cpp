#include "iScrFX.h"

#include <types.h>

// iScrFxInit()
#pragma GLOBAL_ASM("asm/Core/p2/iScrFX.s", "iScrFxInit__Fv")

// iScrFxBegin()
#pragma GLOBAL_ASM("asm/Core/p2/iScrFX.s", "iScrFxBegin__Fv")

// iScrFxEnd()
#pragma GLOBAL_ASM("asm/Core/p2/iScrFX.s", "iScrFxEnd__Fv")

// iScrFxDrawBox(float,float,float,float,unsigned char,unsigned char,unsigned char,unsigned char)
#pragma GLOBAL_ASM("asm/Core/p2/iScrFX.s", "iScrFxDrawBox__FffffUcUcUcUc")

// iCameraMotionBlurActivate(unsigned int)
#pragma GLOBAL_ASM("asm/Core/p2/iScrFX.s", "iCameraMotionBlurActivate__FUi")

// iCameraSetBlurriness(float)
#pragma GLOBAL_ASM("asm/Core/p2/iScrFX.s", "iCameraSetBlurriness__Ff")

// iScrFxCameraCreated(RwCamera*)
#pragma GLOBAL_ASM("asm/Core/p2/iScrFX.s", "iScrFxCameraCreated__FP8RwCamera")

// iScrFxCameraEndScene(RwCamera*)
#pragma GLOBAL_ASM("asm/Core/p2/iScrFX.s", "iScrFxCameraEndScene__FP8RwCamera")

// iScrFxPostCameraEnd(RwCamera*)
#pragma GLOBAL_ASM("asm/Core/p2/iScrFX.s", "iScrFxPostCameraEnd__FP8RwCamera")

// iCameraOverlayRender(RwCamera*,RwRaster*,RwRGBA)
#pragma GLOBAL_ASM("asm/Core/p2/iScrFX.s", "iCameraOverlayRender__FP8RwCameraP8RwRaster6RwRGBA")

// FBMBlur_DebugIntervention(RwCamera*,RwRaster*)
#pragma GLOBAL_ASM("asm/Core/p2/iScrFX.s", "FBMBlur_DebugIntervention__FP8RwCameraP8RwRaster")

// iScrFxMotionBlurOpen(RwCamera*)
#pragma GLOBAL_ASM("asm/Core/p2/iScrFX.s", "iScrFxMotionBlurOpen__FP8RwCamera")

// iScrFxCameraDestroyed(RwCamera*)
#pragma GLOBAL_ASM("asm/Core/p2/iScrFX.s", "iScrFxCameraDestroyed__FP8RwCamera")

// iScrFxMotionBlurRender(RwCamera*,unsigned int)
#pragma GLOBAL_ASM("asm/Core/p2/iScrFX.s", "iScrFxMotionBlurRender__FP8RwCameraUi")

// GCMB_MakeFrameBufferCopy(const RwCamera*)
#pragma GLOBAL_ASM("asm/Core/p2/iScrFX.s", "GCMB_MakeFrameBufferCopy__FPC8RwCamera")

// GCMB_KillFrameBufferCopy()
#pragma GLOBAL_ASM("asm/Core/p2/iScrFX.s", "GCMB_KillFrameBufferCopy__Fv")

// GCMB_SiphonFrameBuffer(const RwCamera*)
#pragma GLOBAL_ASM("asm/Core/p2/iScrFX.s", "GCMB_SiphonFrameBuffer__FPC8RwCamera")
