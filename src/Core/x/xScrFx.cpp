#include "xScrFx.h"

#include <types.h>

// xScrFxInit()
#pragma GLOBAL_ASM("asm/Core/x/xScrFx.s", "xScrFxInit__Fv")

// xScrFxReset()
#pragma GLOBAL_ASM("asm/Core/x/xScrFx.s", "xScrFxReset__Fv")

// xScrFxUpdate(RwCamera*,float)
#pragma GLOBAL_ASM("asm/Core/x/xScrFx.s", "xScrFxUpdate__FP8RwCameraf")

// xScrFxRender(RwCamera*)
#pragma GLOBAL_ASM("asm/Core/x/xScrFx.s", "xScrFxRender__FP8RwCamera")

// xScrFxDrawScreenSizeRectangle()
#pragma GLOBAL_ASM("asm/Core/x/xScrFx.s", "xScrFxDrawScreenSizeRectangle__Fv")

// xScrFxFadeInit()
#pragma GLOBAL_ASM("asm/Core/x/xScrFx.s", "xScrFxFadeInit__Fv")

// InterpCol(float,unsigned char,unsigned char)
#pragma GLOBAL_ASM("asm/Core/x/xScrFx.s", "InterpCol__FfUcUc")

// xScrFxFade(iColor_tag*,iColor_tag*,float,void (*)(void),int)
#pragma GLOBAL_ASM("asm/Core/x/xScrFx.s", "xScrFxFade__FP10iColor_tagP10iColor_tagfPFv_vi")

// xScrFxStopFade()
#pragma GLOBAL_ASM("asm/Core/x/xScrFx.s", "xScrFxStopFade__Fv")

// xScrFxIsFading()
#pragma GLOBAL_ASM("asm/Core/x/xScrFx.s", "xScrFxIsFading__Fv")

// xScrFxUpdateFade(RwCamera*,float)
#pragma GLOBAL_ASM("asm/Core/x/xScrFx.s", "xScrFxUpdateFade__FP8RwCameraf")

// xScrFxLetterBoxInit()
#pragma GLOBAL_ASM("asm/Core/x/xScrFx.s", "xScrFxLetterBoxInit__Fv")

// xScrFxLetterboxReset()
#pragma GLOBAL_ASM("asm/Core/x/xScrFx.s", "xScrFxLetterboxReset__Fv")

// xScrFxLetterBoxSetSize(float)
#pragma GLOBAL_ASM("asm/Core/x/xScrFx.s", "xScrFxLetterBoxSetSize__Ff")

// xScrFxLetterBoxSetAlpha(unsigned char)
#pragma GLOBAL_ASM("asm/Core/x/xScrFx.s", "xScrFxLetterBoxSetAlpha__FUc")

// xScrFxLetterbox(int)
#pragma GLOBAL_ASM("asm/Core/x/xScrFx.s", "xScrFxLetterbox__Fi")

// xScrFxUpdateLetterBox(RwCamera*,float)
#pragma GLOBAL_ASM("asm/Core/x/xScrFx.s", "xScrFxUpdateLetterBox__FP8RwCameraf")

// xScrFxIsLetterbox()
#pragma GLOBAL_ASM("asm/Core/x/xScrFx.s", "xScrFxIsLetterbox__Fv")

// xScrFxDrawSafeArea()
#pragma GLOBAL_ASM("asm/Core/x/xScrFx.s", "xScrFxDrawSafeArea__Fv")

// xScrFxDistortionAdd(xVec3*,xVec3*,int)
#pragma GLOBAL_ASM("asm/Core/x/xScrFx.s", "xScrFxDistortionAdd__FP5xVec3P5xVec3i")

// xScrFxDistortionUpdate(float)
#pragma GLOBAL_ASM("asm/Core/x/xScrFx.s", "xScrFxDistortionUpdate__Ff")

// xScrFxDistortionRender(RwCamera*)
#pragma GLOBAL_ASM("asm/Core/x/xScrFx.s", "xScrFxDistortionRender__FP8RwCamera")

// xScrFXGlareInit()
#pragma GLOBAL_ASM("asm/Core/x/xScrFx.s", "xScrFXGlareInit__Fv")

// xScrFXGlareReset()
#pragma GLOBAL_ASM("asm/Core/x/xScrFx.s", "xScrFXGlareReset__Fv")

// xScrFXGlareAdd(xVec3*,float,float,float,float,float,float,float,RwRaster*)
#pragma GLOBAL_ASM("asm/Core/x/xScrFx.s", "xScrFXGlareAdd__FP5xVec3fffffffP8RwRaster")

// xScrFXGlareUpdate(float)
#pragma GLOBAL_ASM("asm/Core/x/xScrFx.s", "xScrFXGlareUpdate__Ff")

// xScrFXFullScreenGlareRender()
#pragma GLOBAL_ASM("asm/Core/x/xScrFx.s", "xScrFXFullScreenGlareRender__Fv")

// xScrFXGlareRender(xCamera*)
#pragma GLOBAL_ASM("asm/Core/x/xScrFx.s", "xScrFXGlareRender__FP7xCamera")

// xScrFxDrawBox(float,float,float,float,unsigned char,unsigned char,unsigned char,unsigned char,float,float)
#pragma GLOBAL_ASM("asm/Core/x/xScrFx.s", "xScrFxDrawBox__FffffUcUcUcUcff")

// DistortionParticle::operator =(const DistortionParticle&)
#pragma GLOBAL_ASM("asm/Core/x/xScrFx.s", "__as__18DistortionParticleFRC18DistortionParticle")
