#ifndef XPARTITION_H
#define XPARTITION_H

#include <types.h>
#include "xMath3.h"
#include "xEnv.h"
#include "xVolume.h"

struct _tagPartLink
{
    void* data;
    _tagPartLink* next;
};

struct _tagPartSpace
{
    int32 total;
    _tagPartLink head;
};

struct _tagPartition
{
    xVec3 min;
    xVec3 max;
    xVec3 space_dim;
    int32 total_x;
    int32 total_y;
    int32 total_z;
    _tagPartSpace* space;
    _tagPartSpace global;
};

void xPartitionReset();
_tagPartLink* PartitionGetFreeLink();
void PartitionSpaceReset(_tagPartSpace* space);
void PartitionSpaceInsert(_tagPartSpace* space, void* data);
int32 xPartitionGetTrueIdx(_tagPartition* part, int32 x_spaces, int32 y_spaces, int32 z_spaces);
void xPartitionWorld(_tagPartition* part, xEnv* env, int32 x_spaces, int32 y_spaces,
                     int32 z_spaces);
void xPartitionVolume(_tagPartition* part, xVolume* volume, int32 x_spaces, int32 y_spaces,
                      int32 z_spaces);
void xPartitionDump(_tagPartition* part, char* string);
int32 xPartitionUpdate(_tagPartition* part, void* data, int32 old_idx, xVec3* current_pos);
int32 xPartitionInsert(_tagPartition* part, void* insert_data, xVec3* insert_pos);

#endif