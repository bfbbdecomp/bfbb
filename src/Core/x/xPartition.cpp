#include "xPartition.h"
#include "xMemMgr.h"
#include <string.h>

void xPartitionReset()
{
}

_tagPartLink* PartitionGetFreeLink()
{
    return (_tagPartLink*)xMemAlloc(sizeof(_tagPartLink));
}

void PartitionSpaceReset(_tagPartSpace* space)
{
    memset(space, 0, sizeof(_tagPartSpace));
}

void PartitionSpaceInsert(_tagPartSpace* space, void* data)
{
    space->total++;
    _tagPartLink* head = &space->head;
    _tagPartLink* tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    head = PartitionGetFreeLink();
    tmp->next = head;
    tmp->next->data = data;
    tmp->next->next = NULL;
}

#if 1

// func_80038C60
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "xPartitionGetTrueIdx__FP13_tagPartitioniii")

#else

// Need to figure out the correct order.
int32 xPartitionGetTrueIdx(_tagPartition* part, int32 x_spaces, int32 y_spaces, int32 z_spaces)
{
    return part->total_x * z_spaces + part->total_x * y_spaces * part->total_z + x_spaces;
}

#endif

// func_80038C80
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "xPartitionVolume__FP13_tagPartitionP7xVolumeiii")

// func_80038E18
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "xPartitionWorld__FP13_tagPartitionP4xEnviii")

// func_80038FB4
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "xPartitionInsert__FP13_tagPartitionPvP5xVec3")

// func_800390B8
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "xPartitionUpdate__FP13_tagPartitionPviP5xVec3")

// func_80039200
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s",                                                      \
                   "xPartitionSpaceMove__FP13_tagPartSpaceP13_tagPartSpaceUi")

// func_8003926C
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "xPartitionDump__FP13_tagPartitionPc")

// func_80039270
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "xEnvGetBBox__FP4xEnv")

// func_80039294
#pragma GLOBAL_ASM("asm/Core/x/xPartition.s", "iEnvGetBBox__FP4iEnv")
