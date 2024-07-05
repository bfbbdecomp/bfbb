#ifndef XSTRANSVC_H
#define XSTRANSVC_H

#include "xpkrsvc.h"

struct st_STRAN_SCENE
{
    uint32 scnid;
    int32 lockid;
    st_PACKER_READ_DATA* spkg;
    int32 isHOP;
    void* userdata;
    int8 fnam[256];
};


struct st_STRAN_DATA
{
    st_STRAN_SCENE hipscn[16];
    uint32 loadlock;
};

int32 xSTPreLoadScene(uint32 sid, void* userdata, int32 flg_hiphop);
int32 xSTQueueSceneAssets(uint32 sid, int32 flg_hiphop);
void xSTUnLoadScene(uint32 sid, int32 flg_hiphop);
float32 xSTLoadStep(uint32);
void xSTDisconnect(uint32 sid, int32 flg_hiphop);
int32 xSTSwitchScene(uint32 sid, void* userdata, int32 (*progmon)(void*, float32));
void* xSTFindAsset(uint32 aid, uint32* size);
int32 xSTAssetCountByType(uint32 type);
void* xSTFindAssetByType(uint32 type, int32 idx, uint32* size);
char* xSTAssetName(uint32 aid);
char* xSTAssetName(void* raw_HIP_asset);
int32 xSTGetAssetInfo(uint32 aid, st_PKR_ASSET_TOCINFO* tocainfo);
int32 xSTGetAssetInfoByType(uint32 type, int32 idx, st_PKR_ASSET_TOCINFO* ainfo);
char* xST_xAssetID_HIPFullPath(uint32 aid);
int32 PKRShutdown();
int8* xST_xAssetID_HIPFullPath(uint32 aid, uint32* sceneID);
int32 xSTShutdown();

#endif
