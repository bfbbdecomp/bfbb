#include "zEnt.h"

#include <types.h>

// zEntInit(zEnt*,xEntAsset*,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zEnt.s", "zEntInit__FP4zEntP9xEntAssetUi")

// zEntSetup(zEnt*)
#pragma GLOBAL_ASM("asm/Game/zEnt.s", "zEntSetup__FP4zEnt")

// checkpoint_collision_hack(zEnt*)
#pragma GLOBAL_ASM("asm/Game/zEnt.s", "checkpoint_collision_hack__FP4zEnt")

// zEntSave(zEnt*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zEnt.s", "zEntSave__FP4zEntP7xSerial")

// zEntLoad(zEnt*,xSerial*)
#pragma GLOBAL_ASM("asm/Game/zEnt.s", "zEntLoad__FP4zEntP7xSerial")

// zEntReset(zEnt*)
#pragma GLOBAL_ASM("asm/Game/zEnt.s", "zEntReset__FP4zEnt")

// zEntEventAll(xBase*,unsigned int,unsigned int,float*)
#pragma GLOBAL_ASM("asm/Game/zEnt.s", "zEntEventAll__FP5xBaseUiUiPf")

// zEntEventAllOfType(xBase*,unsigned int,unsigned int,float*,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zEnt.s", "zEntEventAllOfType__FP5xBaseUiUiPfUi")

// zEntEventAllOfType(unsigned int,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zEnt.s", "zEntEventAllOfType__FUiUi")

// zEntRecurseModelInfo(void*,xEnt*)
#pragma GLOBAL_ASM("asm/Game/zEnt.s", "zEntRecurseModelInfo__FPvP4xEnt")

// zEntParseModelInfo(xEnt*,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zEnt.s", "zEntParseModelInfo__FP4xEntUi")

// zEntAnimEvent(zEnt*,unsigned int,const float*)
#pragma GLOBAL_ASM("asm/Game/zEnt.s", "zEntAnimEvent__FP4zEntUiPCf")

// zEntAnimEvent_AutoAnim(zEnt*,unsigned int,const float*)
#pragma GLOBAL_ASM("asm/Game/zEnt.s", "zEntAnimEvent_AutoAnim__FP4zEntUiPCf")

// zEntGetModelParams(unsigned int,unsigned int*)
#pragma GLOBAL_ASM("asm/Game/zEnt.s", "zEntGetModelParams__FUiPUi")

// zParamGetString(xModelAssetParam*,unsigned int,char*,char*)
#pragma GLOBAL_ASM("asm/Game/zEnt.s", "zParamGetString__FP16xModelAssetParamUiPcPc")

// zParamGetInt(xModelAssetParam*,unsigned int,const char*,int)
#pragma GLOBAL_ASM("asm/Game/zEnt.s", "zParamGetInt__FP16xModelAssetParamUiPCci")

// zParamGetInt(xModelAssetParam*,unsigned int,char*,int)
#pragma GLOBAL_ASM("asm/Game/zEnt.s", "zParamGetInt__FP16xModelAssetParamUiPci")

// zParamGetFloat(xModelAssetParam*,unsigned int,const char*,float)
#pragma GLOBAL_ASM("asm/Game/zEnt.s", "zParamGetFloat__FP16xModelAssetParamUiPCcf")

// zParamGetFloat(xModelAssetParam*,unsigned int,char*,float)
#pragma GLOBAL_ASM("asm/Game/zEnt.s", "zParamGetFloat__FP16xModelAssetParamUiPcf")

// zParamGetFloatList(xModelAssetParam*,unsigned int,const char*,int,float*,float*)
#pragma GLOBAL_ASM("asm/Game/zEnt.s", "zParamGetFloatList__FP16xModelAssetParamUiPCciPfPf")

// zParamGetFloatList(xModelAssetParam*,unsigned int,char*,int,float*,float*)
#pragma GLOBAL_ASM("asm/Game/zEnt.s", "zParamGetFloatList__FP16xModelAssetParamUiPciPfPf")

// zParamGetVector(xModelAssetParam*,unsigned int,const char*,xVec3,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zEnt.s", "zParamGetVector__FP16xModelAssetParamUiPCc5xVec3P5xVec3")

// zParamGetVector(xModelAssetParam*,unsigned int,char*,xVec3,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zEnt.s", "zParamGetVector__FP16xModelAssetParamUiPc5xVec3P5xVec3")

// zEntGetShadowParams(xEnt*,xVec3*,float*,xEntShadow::radius_enum)
#pragma GLOBAL_ASM("asm/Game/zEnt.s", "zEntGetShadowParams__FP4xEntP5xVec3PfQ210xEntShadow11radius_enum")

// xModelAnimCollStop(xModelInstance&)
#pragma GLOBAL_ASM("asm/Game/zEnt.s", "xModelAnimCollStop__FR14xModelInstance")

// xEntGetFrame(const xEnt*)
#pragma GLOBAL_ASM("asm/Game/zEnt.s", "xEntGetFrame__FPC4xEnt")

// xSndPlay3D(unsigned int,float,float,unsigned int,unsigned int,const xVec3*,float,sound_category,float)
#pragma GLOBAL_ASM("asm/Game/zEnt.s", "xSndPlay3D__FUiffUiUiPC5xVec3f14sound_categoryf")

// xNPCBasic::SelfType() const
#pragma GLOBAL_ASM("asm/Game/zEnt.s", "SelfType__9xNPCBasicCFv")
