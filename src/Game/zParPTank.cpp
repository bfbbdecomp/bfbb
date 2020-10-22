#include "zParPTank.h"

#include <types.h>

// zParPTankSparkleCreate(zParPTank*,unsigned int,void (*)(zParPTank*, float))
#pragma GLOBAL_ASM("asm/Game/zParPTank.s", "zParPTankSparkleCreate__FP9zParPTankUiPFP9zParPTankf_v")

// RwV2d::operator =(const RwV2d&)
#pragma GLOBAL_ASM("asm/Game/zParPTank.s", "__as__5RwV2dFRC5RwV2d")

// zParPTankSpawnSparkles(xVec3*,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zParPTank.s", "zParPTankSpawnSparkles__FP5xVec3Ui")

// zParPTankBubbleCreate(zParPTank*,unsigned int,void (*)(zParPTank*, float))
#pragma GLOBAL_ASM("asm/Game/zParPTank.s", "zParPTankBubbleCreate__FP9zParPTankUiPFP9zParPTankf_v")

// zParPTankMenuBubbleCreate(zParPTank*,unsigned int,void (*)(zParPTank*, float))
#pragma GLOBAL_ASM("asm/Game/zParPTank.s", "zParPTankMenuBubbleCreate__FP9zParPTankUiPFP9zParPTankf_v")

// zParPTankSpawnBubbles(xVec3*,xVec3*,unsigned int,float,zParPTank*)
#pragma GLOBAL_ASM("asm/Game/zParPTank.s", "zParPTankSpawnBubbles__FP5xVec3P5xVec3UifP9zParPTank")

// zParPTankSpawnBubbles(xVec3*,xVec3*,unsigned int,float)
#pragma GLOBAL_ASM("asm/Game/zParPTank.s", "zParPTankSpawnBubbles__FP5xVec3P5xVec3Uif")

// zParPTankBubblesAvailable()
#pragma GLOBAL_ASM("asm/Game/zParPTank.s", "zParPTankBubblesAvailable__Fv")

// zParPTankSpawnMenuBubbles(xVec3*,xVec3*,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zParPTank.s", "zParPTankSpawnMenuBubbles__FP5xVec3P5xVec3Ui")

// zParPTankSnowCreate(zParPTank*,unsigned int,void (*)(zParPTank*, float))
#pragma GLOBAL_ASM("asm/Game/zParPTank.s", "zParPTankSnowCreate__FP9zParPTankUiPFP9zParPTankf_v")

// zParPTankSpawnSnow(xVec3*,xVec3*,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zParPTank.s", "zParPTankSpawnSnow__FP5xVec3P5xVec3Ui")

// zParPTankSteamCreate(zParPTank*,unsigned int,void (*)(zParPTank*, float))
#pragma GLOBAL_ASM("asm/Game/zParPTank.s", "zParPTankSteamCreate__FP9zParPTankUiPFP9zParPTankf_v")

// zParPTankAdd()
#pragma GLOBAL_ASM("asm/Game/zParPTank.s", "zParPTankAdd__Fv")

// zParPTankInit()
#pragma GLOBAL_ASM("asm/Game/zParPTank.s", "zParPTankInit__Fv")

// zParPTankSceneEnter()
#pragma GLOBAL_ASM("asm/Game/zParPTank.s", "zParPTankSceneEnter__Fv")

// zParPTankSceneExit()
#pragma GLOBAL_ASM("asm/Game/zParPTank.s", "zParPTankSceneExit__Fv")

// zParPTankExit()
#pragma GLOBAL_ASM("asm/Game/zParPTank.s", "zParPTankExit__Fv")

// zParPTankUpdate(float)
#pragma GLOBAL_ASM("asm/Game/zParPTank.s", "zParPTankUpdate__Ff")

// zParPTankRender()
#pragma GLOBAL_ASM("asm/Game/zParPTank.s", "zParPTankRender__Fv")

// zParPTankConvertEmitRate(xParEmitter*,float)
#pragma GLOBAL_ASM("asm/Game/zParPTank.s", "zParPTankConvertEmitRate__FP11xParEmitterf")

// xVec2::assign(float)
#pragma GLOBAL_ASM("asm/Game/zParPTank.s", "assign__5xVec2Ff")

#pragma GLOBAL_ASM("asm/Game/zParPTank.s", "__as__Q223_esc__2_unnamed_esc__2_zParPTank_cpp_esc__2_18snow_particle_dataFRCQ223_esc__2_unnamed_esc__2_zParPTank_cpp_esc__2_18snow_particle_data")
