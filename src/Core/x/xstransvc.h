#ifndef XSTRANSVC_H
#define XSTRANSVC_H

#include "xpkrsvc.h"

void* xSTFindAsset(uint32 aid, uint32* size);
int32 xSTAssetCountByType(uint32 type);
void* xSTFindAssetByType(uint32 type, int32 idx, uint32* size);
char* xSTAssetName(uint32 aid);
int32 xSTGetAssetInfo(uint32 aid, st_PKR_ASSET_TOCINFO* tocainfo);
char* xST_xAssetID_HIPFullPath(uint32 aid);

#endif