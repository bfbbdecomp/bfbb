#ifndef XPARTITION_H
#define XPARTITION_H

#include <types.h>
#include "xEnv.h"
#include "xVolume.h"

struct _tagPartLink
{
    void* data;
    _tagPartLink* next;
};

struct _tagPartSpace
{
    S32 total;
    _tagPartLink head;
};

struct _tagPartition
{
    xVec3 min;
    xVec3 max;
    xVec3 space_dim;
    S32 total_x;
    S32 total_y;
    S32 total_z;
    _tagPartSpace* space;
    _tagPartSpace global;
};

void xPartitionReset();
S32 xPartitionGetTrueIdx(_tagPartition* part, S32 x_spaces, S32 y_spaces, S32 z_spaces);
void xPartitionVolume(_tagPartition* part, xVolume* volume, S32 x_spaces, S32 y_spaces,
                      S32 z_spaces);
void xPartitionWorld(_tagPartition* part, xEnv* env, S32 x_spaces, S32 y_spaces,
                     S32 z_spaces);
S32 xPartitionInsert(_tagPartition* part, void* insert_data, xVec3* insert_pos);
S32 xPartitionUpdate(_tagPartition* part, void* data, S32 old_idx, xVec3* current_pos);
void xPartitionSpaceMove(_tagPartSpace* src, _tagPartSpace* dest, U32 data);
void xPartitionDump(_tagPartition*, char*);


#endif
