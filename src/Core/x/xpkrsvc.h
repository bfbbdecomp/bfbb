#ifndef XPKRSVC_H
#define XPKRSVC_H

#include <types.h>

#include "xhipio.h"
#include "xordarray.h"

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

struct st_PACKER_READ_DATA;
struct st_PACKER_ATOC_NODE
{
    uint32 aid;
    uint32 asstype;
    int32 d_off;
    int32 d_size;
    int32 d_pad;
    uint32 d_chksum;
    int32 assalign;
    int32 infoflag;
    int32 loadflag;
    int8* memloc;
    int32 x_size;
    int32 readcnt;
    int32 readrem;
    st_PACKER_ASSETTYPE* typeref;
    st_HIPLOADDATA* ownpkg;
    st_PACKER_READ_DATA* ownpr;
    int8 basename[32];
};

struct st_PACKER_READ_DATA
{
    st_PACKER_ASSETTYPE* types;
    void* userdata;
    uint32 opts;
    uint32 pkgver;
    int32 cltver;
    int32 subver;
    int32 compatver;
    st_HIPLOADDATA* pkg;
    uint32 base_sector;
    int32 lockid;
    int8 packfile[128];
    int32 asscnt;
    int32 laycnt;
    st_XORDEREDARRAY asstoc;
    st_XORDEREDARRAY laytoc;
    st_PACKER_ATOC_NODE* pool_anode;
    int32 pool_nextaidx;
    st_XORDEREDARRAY typelist[129];
    long32 time_made;
    long32 time_mod;
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

    void operator=(const st_PACKER_READ_FUNCS& other);
};

st_PACKER_READ_FUNCS* PKRGetReadFuncs(int32 apiver);
int32 PKRStartup();
int32 PKRLoadStep(int32);
int32 PKR_LoadStep_Async();
uint32 PKRAssetIDFromInst(void* asset_inst);

st_PACKER_READ_DATA* PKR_ReadInit(void* userdata, int8* pkgfile, uint32 opts, int32* cltver,
                                  st_PACKER_ASSETTYPE* typelist);
void PKR_ReadDone(st_PACKER_READ_DATA* pr);

int32 PKR_parse_TOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
void PKR_alloc_chkidx();

void* PKR_getmem(uint32 id, int32 amount, uint32, int32 align, int32 isTemp, int8** memtrue);
void PKR_relmem(uint32 id, int32 blksize, void* memptr, uint32, int32 isTemp);

#endif