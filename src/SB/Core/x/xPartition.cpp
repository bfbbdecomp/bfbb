#include "xPartition.h"
#include "xMemMgr.h"
#include <string.h>

void xPartitionReset()
{
}

static _tagPartLink* PartitionGetFreeLink()
{
    return (_tagPartLink*)xMemAllocSize(sizeof(_tagPartLink));
}

static void PartitionSpaceReset(_tagPartSpace* space)
{
    memset(space, 0, sizeof(_tagPartSpace));
}

static void PartitionSpaceInsert(_tagPartSpace* space, void* data)
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

S32 xPartitionGetTrueIdx(_tagPartition* part, S32 x_spaces, S32 y_spaces, S32 z_spaces)
{
    S32 idx = (y_spaces * (part->total_x * part->total_z));
    idx += part->total_x * z_spaces;
    idx += x_spaces;
    return idx;
}

void xPartitionVolume(_tagPartition* part, xVolume* volume, S32 x_spaces, S32 y_spaces,
                      S32 z_spaces)
{
    memset(part, 0, sizeof(_tagPartition));
    xBound* xb = volume->GetBound();
    xBox* bb = &xb->box.box;
    part->min = bb->lower;
    part->max = bb->upper;

    F32 dx = part->max.x - part->min.x;
    F32 dy = part->max.y - part->min.y;
    F32 dz = part->max.z - part->min.z;

    part->total_x = x_spaces;
    part->total_y = y_spaces;
    part->total_z = z_spaces;

    part->space_dim.x = dx / part->total_x;
    part->space_dim.y = dy / part->total_y;
    part->space_dim.z = dz / part->total_z;

    part->space = (_tagPartSpace*)xMemAlloc(
        gActiveHeap, sizeof(_tagPartSpace) * part->total_x * part->total_y * part->total_z, 0);

    for (S32 z = 0; z < z_spaces; z++)
    {
        for (S32 y = 0; y < y_spaces; y++)
        {
            for (S32 x = 0; x < x_spaces; x++)
            {
                S32 idx = xPartitionGetTrueIdx(part, x, y, z);
                PartitionSpaceReset(&part->space[idx]);
            }
        }
    }

    PartitionSpaceReset(&part->global);
}

void xPartitionWorld(_tagPartition* part, xEnv* env, S32 x_spaces, S32 y_spaces, S32 z_spaces)
{
    memset(part, 0, sizeof(_tagPartition));
    xBox* bb = (xBox*)xEnvGetBBox(env);
    part->min = bb->lower;
    part->max = bb->upper;

    F32 dx = part->max.x - part->min.x;
    F32 dy = part->max.y - part->min.y;
    F32 dz = part->max.z - part->min.z;

    part->total_x = x_spaces;
    part->total_y = y_spaces;
    part->total_z = z_spaces;

    part->space_dim.x = dx / part->total_x;
    part->space_dim.y = dy / part->total_y;
    part->space_dim.z = dz / part->total_z;

    part->space = (_tagPartSpace*)xMemAlloc(
        gActiveHeap, sizeof(_tagPartSpace) * part->total_x * part->total_y * part->total_z, 0);

    for (S32 z = 0; z < z_spaces; z++)
    {
        for (S32 y = 0; y < y_spaces; y++)
        {
            for (S32 x = 0; x < x_spaces; x++)
            {
                S32 idx = xPartitionGetTrueIdx(part, x, y, z);
                PartitionSpaceReset(&part->space[idx]);
            }
        }
    }

    PartitionSpaceReset(&part->global);
}

S32 xPartitionInsert(_tagPartition* part, void* insert_data, xVec3* insert_pos)
{
    if (insert_pos->x < part->min.x || insert_pos->x > part->max.x || insert_pos->y < part->min.y ||
        insert_pos->y > part->max.y || insert_pos->z < part->min.z || insert_pos->z > part->max.z)
    {
        PartitionSpaceInsert(&part->global, insert_data);
        return -1;
    }

    S32 idx = xPartitionGetTrueIdx(part, (insert_pos->x - part->min.x) / part->space_dim.x,
                                   (insert_pos->y - part->min.y) / part->space_dim.y,
                                   (insert_pos->z - part->min.z) / part->space_dim.z);
    PartitionSpaceInsert(&part->space[idx], insert_data);

    return idx;
}

S32 xPartitionUpdate(_tagPartition* part, void* data, S32 old_idx, xVec3* current_pos)
{
    S32 cur_idx;

    if (current_pos->x < part->min.x || current_pos->x > part->max.x ||
        current_pos->y < part->min.y || current_pos->y > part->max.y ||
        current_pos->z < part->min.z || current_pos->z > part->max.z)
    {
        cur_idx = -1;
    }
    else
    {
        cur_idx = xPartitionGetTrueIdx(part, (current_pos->x - part->min.x) / part->space_dim.x,
                                       (current_pos->y - part->min.y) / part->space_dim.y,
                                       (current_pos->z - part->min.z) / part->space_dim.z);
    }

    if (old_idx == cur_idx)
        return cur_idx;

    _tagPartSpace* src = old_idx == -1 ? &part->global : &part->space[old_idx];
    xPartitionSpaceMove(src, cur_idx == -1 ? &part->global : &part->space[cur_idx], (U32)data);
    return cur_idx;
}

void xPartitionSpaceMove(_tagPartSpace* src, _tagPartSpace* dest, U32 data)
{
    _tagPartLink* dest_lnk = &dest->head;
    _tagPartLink* src_lnk;
    _tagPartLink* src_pre;

    while (dest_lnk->next != NULL)
    {
        dest_lnk = dest_lnk->next;
    }

    src_lnk = &src->head;
    src_pre = &src->head;

    while (src_lnk->data != (void*)data)
    {
        src_pre = src_lnk;
        src_lnk = src_lnk->next;
    }

    src_pre->next = src_lnk->next;
    
    dest_lnk->next = src_lnk;
    dest_lnk->next->next = NULL;

    src->total--;
    dest->total++;
}

void xPartitionDump(_tagPartition*, char*)
{
}
