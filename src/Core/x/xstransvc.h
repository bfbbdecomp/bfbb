#ifndef XSTRANSVC_H
#define XSTRANSVC_H

#include "xpkrsvc.h"

int32 xSTPreLoadScene(uint32 sid, void* userdata, int32 flg_hiphop);
int32 xSTQueueSceneAssets(uint32 sid, int32 flg_hiphop);
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
void xSTUnLoadScene(uint32 sid, int32 flg_hiphop);
void XST_unlock_all();
int32 PKRShutdown();
int8* xST_xAssetID_HIPFullPath(uint32 aid, uint32* sceneID);
int32 XST_cnt_locked();
int32 XST_nth_locked(int32 param1);

enum en_LAYER_TYPE
{
	PKR_LTYPE_DEFAULT,
	PKR_LTYPE_TEXTURE,
	PKR_LTYPE_BSP,
	PKR_LTYPE_MODEL,
	PKR_LTYPE_ANIMATION,
	PKR_LTYPE_VRAM,
	PKR_LTYPE_SRAM,
	PKR_LTYPE_SNDTOC,
	PKR_LTYPE_CUTSCENE,
	PKR_LTYPE_CUTSCENETOC,
	PKR_LTYPE_JSPINFO,
	PKR_LTYPE_NOMORE,
	PKR_LTYPE_ALL = 0xffffffff
};

struct st_PACKER_READ_DATA
{
};

struct st_PACKER_READ_FUNCS
{
	uint32 api_ver;
	st_PACKER_READ_DATA*(*Init)(void*, int8*, uint32, int32*, st_PACKER_ASSETTYPE*);
	void(*Done)(st_PACKER_READ_DATA*);
	int32(*LoadLayer)(st_PACKER_READ_DATA*, en_LAYER_TYPE);
	uint32(*GetAssetSize)(st_PACKER_READ_DATA*, uint32);
	void*(*LoadAsset)(st_PACKER_READ_DATA*, uint32, int8*, void*);
	void*(*AssetByType)(st_PACKER_READ_DATA*, uint32, int32, uint32*);
	int32(*AssetCount)(st_PACKER_READ_DATA*, uint32);
	int32(*IsAssetReady)(st_PACKER_READ_DATA*, uint32);
	int32(*SetActive)(st_PACKER_READ_DATA*, en_LAYER_TYPE);
	int8*(*AssetName)(st_PACKER_READ_DATA*, uint32);
	uint32(*GetBaseSector)(st_PACKER_READ_DATA*);
	int32(*GetAssetInfo)(st_PACKER_READ_DATA*, uint32, st_PKR_ASSET_TOCINFO*);
	int32(*GetAssetInfoByType)(st_PACKER_READ_DATA*, uint32, int32, st_PKR_ASSET_TOCINFO*);
	int32(*PkgHasAsset)(st_PACKER_READ_DATA*, uint32);
	uint32(*PkgTimeStamp)(st_PACKER_READ_DATA*);
	void(*PkgDisconnect)(st_PACKER_READ_DATA*);
};


struct st_STRAN_SCENE
{
	uint32 scnid;
	int32 lockid;
	st_PACKER_READ_DATA* spkg;
	int32 isHOP;
	void* userdata;
	int8 fnam[256];
};

st_STRAN_SCENE* XST_find_bySID(uint32 sid, int32 findTheHOP);

struct st_STRAN_DATA
{
	st_STRAN_SCENE hipscn[16];
	uint32 loadlock;
};

#endif