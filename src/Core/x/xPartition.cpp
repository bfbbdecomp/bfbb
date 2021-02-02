#include "xPartition.h"
#include "xMemMgr.h"

void xPartitionReset()
{
}

void PartitionGetFreeLink()
{
	xMemAlloc(8);
}

// func_80038BC8
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "PartitionSpaceReset__FP13_tagPartSpace")

// func_80038BF0
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "PartitionSpaceInsert__FP13_tagPartSpacePv")

// func_80038C60
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "xPartitionGetTrueIdx__FP13_tagPartitioniii")

// func_80038C80
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "xPartitionVolume__FP13_tagPartitionP7xVolumeiii")

// func_80038E18
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "xPartitionWorld__FP13_tagPartitionP4xEnviii")

// func_80038FB4
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "xPartitionInsert__FP13_tagPartitionPvP5xVec3")

// func_800390B8
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "xPartitionUpdate__FP13_tagPartitionPviP5xVec3")

// func_80039200
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "xPartitionSpaceMove__FP13_tagPartSpaceP13_tagPartSpaceUi")

// func_8003926C
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "xPartitionDump__FP13_tagPartitionPc")

// func_80039270
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "xEnvGetBBox__FP4xEnv")

// func_80039294
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "iEnvGetBBox__FP4iEnv")
