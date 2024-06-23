#include "xPartition.h"
#include "xMemMgr.h"
#include <string.h>

void xPartitionReset()
{
}

_tagPartLink* PartitionGetFreeLink()
{
    return (_tagPartLink*)xMemAllocSize(sizeof(_tagPartLink));
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

#if 0
// Need to figure out the correct order.
int32 xPartitionGetTrueIdx(_tagPartition* part, int32 x_spaces, int32 y_spaces, int32 z_spaces)
{
    return part->total_x * z_spaces + part->total_x * y_spaces * part->total_z + x_spaces;
}

#endif
