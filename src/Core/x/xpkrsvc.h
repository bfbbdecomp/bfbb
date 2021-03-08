#ifndef XPKRSVC_H
#define XPKRSVC_H

#include <types.h>

struct st_PACKER_ASSETTYPE
{
    uint32 typetag;
    uint32 tflags;
    int32 typalign;
    void* (*readXForm)(void*, uint32, void*, uint32, uint32*);
    void* (*writeXForm)(void*, uint32, void*, void*, uint32, uint32*);
    int32 (*assetLoaded)(void*, uint32, void*, int32);
    void* (*makeData)(void*, uint32, void*, int32*, int32*);
    void (*cleanup)(void*, uint32, void*);
    void (*assetUnloaded)(void*, uint32);
    void (*writePeek)(void*, uint32, void*, int8*);
};

struct st_PKR_ASSET_TOCINFO
{
    uint32 aid;
    st_PACKER_ASSETTYPE* typeref;
    uint32 sector;
    uint32 plus_offset;
    uint32 size;
    void* mempos;
};

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
    st_PACKER_READ_DATA* (*Init)(void*, const int8*, uint32, int32*, st_PACKER_ASSETTYPE*);
    void (*Done)(st_PACKER_READ_DATA*);
    int32 (*LoadLayer)(st_PACKER_READ_DATA*, en_LAYER_TYPE);
    uint32 (*GetAssetSize)(st_PACKER_READ_DATA*, uint32);
    void* (*LoadAsset)(st_PACKER_READ_DATA*, uint32, int8*, void*);
    void* (*AssetByType)(st_PACKER_READ_DATA*, uint32, int32, uint32*);
    int32 (*AssetCount)(st_PACKER_READ_DATA*, uint32);
    int32 (*IsAssetReady)(st_PACKER_READ_DATA*, uint32);
    int32 (*SetActive)(st_PACKER_READ_DATA*, en_LAYER_TYPE);
    int8* (*AssetName)(st_PACKER_READ_DATA*, uint32);
    uint32 (*GetBaseSector)(st_PACKER_READ_DATA*);
    int32 (*GetAssetInfo)(st_PACKER_READ_DATA*, uint32, st_PKR_ASSET_TOCINFO*);
    int32 (*GetAssetInfoByType)(st_PACKER_READ_DATA*, uint32, int32, const st_PKR_ASSET_TOCINFO*);
    int32 (*PkgHasAsset)(st_PACKER_READ_DATA*, uint32);
    uint32 (*PkgTimeStamp)(st_PACKER_READ_DATA*);
    void (*PkgDisconnect)(st_PACKER_READ_DATA*);
};

st_PACKER_READ_FUNCS* PKRGetReadFuncs(int32 apiver);
int32 PKRStartup();
int32 PKRLoadStep(int32 i);
uint32 PKRAssetIDFromInst(void* asset_inst);

#endif