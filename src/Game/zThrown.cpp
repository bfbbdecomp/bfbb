#include "zThrown.h"

#include <types.h>

// zThrown_Setup(zScene*)
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zThrown_Setup__FP6zScene")

// zThrown_AddTempFrame(zThrownStruct*)
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zThrown_AddTempFrame__FP13zThrownStruct")

// zFruit_ColorFade(zThrownStruct*)
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zFruit_ColorFade__FP13zThrownStruct")

// Recurse_TranslateStack(xEnt*,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "Recurse_TranslateStack__FP4xEntP5xVec3")

// xBBox::operator =(const xBBox&)
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "__as__5xBBoxFRC5xBBox")

// zThrown_Reset()
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zThrown_Reset__Fv")

// zThrown_LaunchVel(xEnt*,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zThrown_LaunchVel__FP4xEntP5xVec3")

// zThrown_LaunchDir(xEnt*,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zThrown_LaunchDir__FP4xEntP5xVec3")

// zThrown_LaunchPos(xEnt*,xVec3*,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zThrown_LaunchPos__FP4xEntP5xVec3P5xVec3")

// zThrown_LaunchStack(xEnt*,xEnt*)
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zThrown_LaunchStack__FP4xEntP4xEnt")

// zThrown_PatrickLauncher(xEnt*,xEnt*)
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zThrown_PatrickLauncher__FP4xEntP4xEnt")

// zThrown_AddFruit(xEnt*)
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zThrown_AddFruit__FP4xEnt")

// zThrown_Remove(xEnt*)
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zThrown_Remove__FP4xEnt")

// zThrown_KillFruit(xEnt*)
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zThrown_KillFruit__FP4xEnt")

// zThrownCollide_CauseDamage(zThrownStruct*,xEntCollis*)
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zThrownCollide_CauseDamage__FP13zThrownStructP10xEntCollis")

// zThrownCollide_ThrowFruit(zThrownStruct*,xEntCollis*,float*,float*)
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zThrownCollide_ThrowFruit__FP13zThrownStructP10xEntCollisPfPf")

// zThrown_IsFruit(xEnt*,float*)
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zThrown_IsFruit__FP4xEntPf")

// zThrown_IsStacked(xEnt*)
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zThrown_IsStacked__FP4xEnt")

// checkAgainstButtons(xEnt*)
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "checkAgainstButtons__FP4xEnt")

// xDrawSphere(const xSphere*,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "xDrawSphere__FPC7xSphereUi")

// zThrownStruct::operator =(const zThrownStruct&)
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "__as__13zThrownStructFRC13zThrownStruct")

// xEntFrame::operator =(const xEntFrame&)
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "__as__9xEntFrameFRC9xEntFrame")

// xEntDrive::operator =(const xEntDrive&)
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "__as__9xEntDriveFRC9xEntDrive")

// xEntDrive::tri_data::operator =(const xEntDrive::tri_data&)
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "__as__Q29xEntDrive8tri_dataFRCQ29xEntDrive8tri_data")
