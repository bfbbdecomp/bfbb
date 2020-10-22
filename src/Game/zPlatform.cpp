#include "zPlatform.h"

#include <types.h>

#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "func_800A8EC8")

// zPlatform_Init(zPlatform*,xEntAsset*)
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zPlatform_Init__FP9zPlatformP9xEntAsset")

// zPlatform_Setup(zPlatform*,xScene*)
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zPlatform_Setup__FP9zPlatformP6xScene")

// zPlatform_Save(zPlatform*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zPlatform_Save__FP9zPlatformP7xSerial")

// zPlatform_Load(zPlatform*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zPlatform_Load__FP9zPlatformP7xSerial")

// zPlatform_Reset(zPlatform*,xScene*)
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zPlatform_Reset__FP9zPlatformP6xScene")

// zMechIsStartingForth(zPlatform*,unsigned short)
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zMechIsStartingForth__FP9zPlatformUs")

// zMechIsStartingBack(zPlatform*,unsigned short)
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zMechIsStartingBack__FP9zPlatformUs")

// SolvePaddleMotion(zPlatform*,float*,float)
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "SolvePaddleMotion__FP9zPlatformPff")

// zPlatform_PaddleStartRotate(xEnt*,int,int)
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zPlatform_PaddleStartRotate__FP4xEntii")

// zPlatform_PaddleCollide(xCollis*,const xVec3*,const xVec3*,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zPlatform_PaddleCollide__FP7xCollisPC5xVec3PC5xVec3Ui")

// zPlatFM_Update(zPlatform*,xScene*,float)
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zPlatFM_Update__FP9zPlatformP6xScenef")

// zPlatform_Shake(zPlatform*,float,float,float)
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zPlatform_Shake__FP9zPlatformfff")

// zPlatform_Tremble(zPlatform*,float,float,float)
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zPlatform_Tremble__FP9zPlatformfff")

// zPlatform_BreakawayFallFX(zPlatform*,float)
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zPlatform_BreakawayFallFX__FP9zPlatformf")

// zPlatform_Mount(zPlatform*)
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zPlatform_Mount__FP9zPlatform")

// zPlatform_Dismount(zPlatform*)
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zPlatform_Dismount__FP9zPlatform")

// zPlatFM_EventSetup(zPlatform*,const float*,int)
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "zPlatFM_EventSetup__FP9zPlatformPCfi")

// xEntMPAccelerate(xEntMotion*,float)
#pragma GLOBAL_ASM("asm/Game/zPlatform.s", "xEntMPAccelerate__FP10xEntMotionf")
