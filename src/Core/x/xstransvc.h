#ifndef XSTRANSVC_H
#define XSTRANSVC_H

#include <types.h>

void* xSTFindAsset(uint32 aid, uint32* size);
int32 xSTAssetCountByType(uint32 type);
void* xSTFindAssetByType(uint32 type, int32 idx, uint32* size);
char* xSTAssetName(uint32 aid);

#endif