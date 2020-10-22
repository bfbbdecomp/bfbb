#include "zLasso.h"

#include <types.h>

// zLasso_Init(zLasso*,xModelInstance*,float,float,float)
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "zLasso_Init__FP6zLassoP14xModelInstancefff")

// zLasso_AddGuide(xEnt*,xAnimState*,xModelInstance*)
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "zLasso_AddGuide__FP4xEntP10xAnimStateP14xModelInstance")

// zLasso_SetGuide(xEnt*,xAnimState*)
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "zLasso_SetGuide__FP4xEntP10xAnimState")

// zLasso_InterpToGuide(zLasso*)
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "zLasso_InterpToGuide__FP6zLasso")

// zLasso_Render(zLasso*)
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "zLasso_Render__FP6zLasso")

// zLasso_Update(zLasso*,xEnt*,float)
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "zLasso_Update__FP6zLassoP4xEntf")

// zLasso_InitTimer(zLasso*,float)
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "zLasso_InitTimer__FP6zLassof")

// zLasso_ResetTimer(zLasso*,float)
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "zLasso_ResetTimer__FP6zLassof")

// fizzicalRadius(zLasso*,float,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "fizzicalRadius__FP6zLassofP5xVec3")

// fizzicalCenter(zLasso*,float,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "fizzicalCenter__FP6zLassofP5xVec3")

// fizzicalNormal(zLasso*,float,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "fizzicalNormal__FP6zLassofP5xVec3")

// fizzicalHonda(zLasso*,float,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "fizzicalHonda__FP6zLassofP5xVec3")

// nonfizzicalHonda(zLasso*,float,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "nonfizzicalHonda__FP6zLassofP5xVec3")

// fizzicalSlack(zLasso*,float,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "fizzicalSlack__FP6zLassofP5xVec3")

// zLasso_scenePrepare()
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "zLasso_scenePrepare__Fv")

// initVertMap(zLassoGuide*)
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "initVertMap__FP11zLassoGuide")

// vec2vecMat(xMat4x3*,xVec3*,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "vec2vecMat__FP7xMat4x3P5xVec3P5xVec3")

// bakeMorphAnim(RpGeometry*,void*)
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "bakeMorphAnim__FP10RpGeometryPv")

// xMat4x3Rot(xMat4x3*,const xVec3*,float)
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "xMat4x3Rot__FP7xMat4x3PC5xVec3f")

// xMat4x3RotC(xMat4x3*,float,float,float,float)
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "xMat4x3RotC__FP7xMat4x3ffff")
