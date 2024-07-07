#ifndef XSTRANSVC_H
#define XSTRANSVC_H

#include "xpkrsvc.h"

struct st_STRAN_SCENE
{
    U32 scnid;
    S32 lockid;
    st_PACKER_READ_DATA* spkg;
    S32 isHOP;
    void* userdata;
    char fnam[256];
};


struct st_STRAN_DATA
{
    st_STRAN_SCENE hipscn[16];
    U32 loadlock;
};

S32 xSTPreLoadScene(U32 sid, void* userdata, S32 flg_hiphop);
S32 xSTQueueSceneAssets(U32 sid, S32 flg_hiphop);
void xSTUnLoadScene(U32 sid, S32 flg_hiphop);
F32 xSTLoadStep(U32);
void xSTDisconnect(U32 sid, S32 flg_hiphop);
S32 xSTSwitchScene(U32 sid, void* userdata, S32 (*progmon)(void*, F32));
void* xSTFindAsset(U32 aid, U32* size);
S32 xSTAssetCountByType(U32 type);
void* xSTFindAssetByType(U32 type, S32 idx, U32* size);
char* xSTAssetName(U32 aid);
char* xSTAssetName(void* raw_HIP_asset);
S32 xSTGetAssetInfo(U32 aid, st_PKR_ASSET_TOCINFO* tocainfo);
S32 xSTGetAssetInfoByType(U32 type, S32 idx, st_PKR_ASSET_TOCINFO* ainfo);
char* xST_xAssetID_HIPFullPath(U32 aid);
S32 PKRShutdown();
char* xST_xAssetID_HIPFullPath(U32 aid, U32* sceneID);
S32 xSTShutdown();

#endif
