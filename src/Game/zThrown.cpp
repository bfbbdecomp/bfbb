#include "zThrown.h"

#include <types.h>

// func_800B6928
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zThrown_Setup__FP6zScene")

// func_800B6AD8
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zThrown_AddTempFrame__FP13zThrownStruct")

// func_800B6B40
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zFruit_ColorFade__FP13zThrownStruct")

// func_800B6BD0
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zFruit_Update__FP4xEntP6xScenef")

// func_800B6ED4
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "Recurse_TranslateStack__FP4xEntP5xVec3")

// func_800B6FC0
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zThrown_Update__FP4xEntP6xScenef")

// func_800B7E88
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "__as__5xBBoxFRC5xBBox")

// func_800B7ED4
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zThrown_Reset__Fv")

// func_800B7F7C
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zThrown_LaunchVel__FP4xEntP5xVec3")

// func_800B8124
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zThrown_LaunchDir__FP4xEntP5xVec3")

// func_800B81D4
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zThrown_LaunchPos__FP4xEntP5xVec3P5xVec3")

// func_800B83C8
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zThrown_LaunchStack__FP4xEntP4xEnt")

// func_800B8530
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zThrown_PatrickLauncher__FP4xEntP4xEnt")

// func_800B8584
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zThrown_AddFruit__FP4xEnt")

// func_800B8734
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zThrown_Remove__FP4xEnt")

// func_800B88E4
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zThrown_KillFruit__FP4xEnt")

// func_800B895C
#pragma GLOBAL_ASM("asm/Game/zThrown.s",                                                           \
                   "zThrownCollide_CauseDamage__FP13zThrownStructP10xEntCollis")

// func_800B8B88
#pragma GLOBAL_ASM("asm/Game/zThrown.s",                                                           \
                   "zThrownCollide_ThrowFruit__FP13zThrownStructP10xEntCollisPfPf")

// func_800B8F54
#pragma GLOBAL_ASM("asm/Game/zThrown.s",                                                           \
                   "zThrownCollide_ThrowFreeze__FP13zThrownStructP10xEntCollisPfPf")

// func_800B8F84
#pragma GLOBAL_ASM("asm/Game/zThrown.s",                                                           \
                   "zThrownCollide_DestructObj__FP13zThrownStructP10xEntCollisPfPf")

// func_800B8FEC
#pragma GLOBAL_ASM("asm/Game/zThrown.s",                                                           \
                   "zThrownCollide_BSandyHead__FP13zThrownStructP10xEntCollisPfPf")

// func_800B903C
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zThrownCollide_Tiki__FP13zThrownStructP10xEntCollisPfPf")

// func_800B90A4
#pragma GLOBAL_ASM("asm/Game/zThrown.s",                                                           \
                   "zThrownCollide_StoneTiki__FP13zThrownStructP10xEntCollisPfPf")

// func_800B9204
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zThrown_IsFruit__FP4xEntPf")

// func_800B927C
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zThrown_IsStacked__FP4xEnt")

// func_800B92CC
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "checkAgainstButtons__FP4xEnt")

// func_800B9318
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "zThrown_ButtonIteratorCB__FP5xBaseP6zScenePv")

// func_800B9374
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "xDrawSphere__FPC7xSphereUi")

// func_800B9378
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "__as__13zThrownStructFRC13zThrownStruct")

// func_800B9450
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "__as__9xEntFrameFRC9xEntFrame")

// func_800B9560
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "__as__9xEntDriveFRC9xEntDrive")

// func_800B9654
#pragma GLOBAL_ASM("asm/Game/zThrown.s", "__as__Q29xEntDrive8tri_dataFRCQ29xEntDrive8tri_data")
