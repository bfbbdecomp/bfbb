#include "zSurface.h"

#include <types.h>

// zSurfaceInit()
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceInit__Fv")

// zSurfaceInitDefaultSurface()
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceInitDefaultSurface__Fv")

// zSurfaceRegisterMapper(unsigned int)
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceRegisterMapper__FUi")

// zSurfaceExit()
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceExit__Fv")

// zSurfaceResetSurface(xSurface*)
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceResetSurface__FP8xSurface")

// zSurfaceGetSurface(unsigned int)
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetSurface__FUi")

// zSurfaceGetSurface(const xCollis*)
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetSurface__FPC7xCollis")

// zSurfaceGetSlide(const xSurface*)
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetSlide__FPC8xSurface")

// zSurfaceGetStep(const xSurface*)
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetStep__FPC8xSurface")

// zSurfaceOutOfBounds(const xSurface&)
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceOutOfBounds__FRC8xSurface")

// zSurfaceGetSlideStartAngle(const xSurface*)
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetSlideStartAngle__FPC8xSurface")

// zSurfaceGetSlideStopAngle(const xSurface*)
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetSlideStopAngle__FPC8xSurface")

// zSurfaceGetMatchOrient(const xSurface*)
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetMatchOrient__FPC8xSurface")

// zSurfaceGetDamageType(const xSurface*)
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetDamageType__FPC8xSurface")

// zSurfaceGetDamagePassthrough(const xSurface*)
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetDamagePassthrough__FPC8xSurface")

// zSurfaceGetSticky(const xSurface*)
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetSticky__FPC8xSurface")

// zSurfaceGetStandOn(const xSurface*)
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetStandOn__FPC8xSurface")

// zSurfaceGetFriction(const xSurface*)
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetFriction__FPC8xSurface")

// zSurfaceGetOutOfBoundsDelay(const xSurface&)
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetOutOfBoundsDelay__FRC8xSurface")

// zSurfaceGetSlickness(const xSurface*)
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetSlickness__FPC8xSurface")

// zSurfaceGetDamping(const xSurface*,float)
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetDamping__FPC8xSurfacef")

// zSurfaceSave(xSurface*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceSave__FP8xSurfaceP7xSerial")

// zSurfaceLoad(xSurface*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceLoad__FP8xSurfaceP7xSerial")

// zSurfaceSetup(xSurface*)
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceSetup__FP8xSurface")

// zSurfaceUpdate(xBase*,xScene*,float)
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceUpdate__FP5xBaseP6xScenef")

// zSurfaceGetName(int,char*)
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetName__FiPc")

// zSurfaceGetDefault()
#pragma GLOBAL_ASM("asm/Game/zSurface.s", "zSurfaceGetDefault__Fv")
