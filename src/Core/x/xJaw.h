#ifndef XJAW_H
#define XJAW_H

#include <types.h>

void* xJaw_FindData(uint32 soundID);
float32 xJaw_EvalData(void* data, float32 time);

#endif