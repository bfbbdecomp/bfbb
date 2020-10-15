#include "xPartition.h"

#include <types.h>

// xPartitionReset()
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "xPartitionReset__Fv")

// PartitionGetFreeLink()
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "PartitionGetFreeLink__Fv")

// PartitionSpaceReset(_tagPartSpace*)
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "PartitionSpaceReset__FP13_tagPartSpace")

// PartitionSpaceInsert(_tagPartSpace*,void*)
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "PartitionSpaceInsert__FP13_tagPartSpacePv")

// xPartitionGetTrueIdx(_tagPartition*,int,int,int)
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "xPartitionGetTrueIdx__FP13_tagPartitioniii")

// xPartitionVolume(_tagPartition*,xVolume*,int,int,int)
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "xPartitionVolume__FP13_tagPartitionP7xVolumeiii")

// xPartitionWorld(_tagPartition*,xEnv*,int,int,int)
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "xPartitionWorld__FP13_tagPartitionP4xEnviii")

// xPartitionInsert(_tagPartition*,void*,xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "xPartitionInsert__FP13_tagPartitionPvP5xVec3")

// xPartitionUpdate(_tagPartition*,void*,int,xVec3*)
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "xPartitionUpdate__FP13_tagPartitionPviP5xVec3")

// xPartitionSpaceMove(_tagPartSpace*,_tagPartSpace*,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "xPartitionSpaceMove__FP13_tagPartSpaceP13_tagPartSpaceUi")

// xPartitionDump(_tagPartition*,char*)
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "xPartitionDump__FP13_tagPartitionPc")

// xEnvGetBBox(xEnv*)
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "xEnvGetBBox__FP4xEnv")

// iEnvGetBBox(iEnv*)
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "iEnvGetBBox__FP4iEnv")
