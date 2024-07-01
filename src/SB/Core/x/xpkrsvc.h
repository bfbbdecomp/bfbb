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

enum en_PKR_LAYER_LOAD_DEST
{
    PKR_LDDEST_SKIP,
    PKR_LDDEST_KEEPSTATIC,
    PKR_LDDEST_KEEPMALLOC,
    PKR_LDDEST_RWHANDOFF,
    PKR_LDDEST_NOMORE,
    PKR_LDDEST_FORCE = 0x7fffffff
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

    // looks like this was removed in the GC version
    // Evidence: memory allocation; Name function returns a constant
    // int8 basename[32];

    int8* Name() const;
};

struct st_PACKER_LTOC_NODE
{
    en_LAYER_TYPE laytyp;
    st_XORDEREDARRAY assref;
    int32 flg_ldstat;
    int32 danglecnt;
    uint32 chksum;
    int32 laysize;
    int8* laymem;
    int8* laytru;
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
};

st_PACKER_READ_FUNCS* PKRGetReadFuncs(int32 apiver);
int32 PKRStartup();
int32 PKRShutdown();
int32 PKRLoadStep(int32);
st_PACKER_READ_DATA* PKR_ReadInit(void* userdata, int8* pkgfile, uint32 opts, int32* cltver,
                                  st_PACKER_ASSETTYPE* typelist);
void PKR_ReadDone(st_PACKER_READ_DATA* pr);
int32 PKR_SetActive(st_PACKER_READ_DATA* pr, en_LAYER_TYPE layer);
int32 PKR_parse_TOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 PKR_LoadStep_Async();
int8* PKR_LayerMemReserve(st_PACKER_READ_DATA* pr, st_PACKER_LTOC_NODE* layer);
void PKR_LayerMemRelease(st_PACKER_READ_DATA* pr, st_PACKER_LTOC_NODE* layer);
void PKR_drv_guardLayer(st_PACKER_LTOC_NODE*);
int32 PKR_drv_guardVerify(st_PACKER_LTOC_NODE*);
en_PKR_LAYER_LOAD_DEST PKR_layerLoadDest(en_LAYER_TYPE layer);
int32 PKR_layerTypeNeedsXForm(en_LAYER_TYPE layer);
int32 PKR_findNextLayerToLoad(st_PACKER_READ_DATA** work_on_pkg, st_PACKER_LTOC_NODE** next_layer);
void PKR_updateLayerAssets(st_PACKER_LTOC_NODE* laynode);
void PKR_xformLayerAssets(st_PACKER_LTOC_NODE* laynode);
void PKR_xform_asset(st_PACKER_ATOC_NODE* assnode, int32 dumpable_layer);
void* PKR_FindAsset(st_PACKER_READ_DATA* pr, uint32 aid);
int32 PKR_LoadLayer(st_PACKER_READ_DATA* pr, en_LAYER_TYPE layer);
void* PKR_LoadAsset(st_PACKER_READ_DATA* pr, uint32 aid, const int8*, void*);
uint32 PKR_GetAssetSize(st_PACKER_READ_DATA* pr, uint32 aid);
int32 PKR_AssetCount(st_PACKER_READ_DATA* pr, uint32 type);
void* PKR_AssetByType(st_PACKER_READ_DATA* pr, uint32 type, int32 idx, uint32* size);
int32 PKR_IsAssetReady(st_PACKER_READ_DATA* pr, uint32 aid);
uint32 PKR_getPackTimestamp(st_PACKER_READ_DATA* pr);
void PKR_Disconnect(st_PACKER_READ_DATA* pr);
uint32 PKRAssetIDFromInst(void* asset_inst);
int8* PKR_AssetName(st_PACKER_READ_DATA* pr, uint32 aid);
uint32 PKR_GetBaseSector(st_PACKER_READ_DATA* pr);
int32 PKR_GetAssetInfo(st_PACKER_READ_DATA* pr, uint32 aid, st_PKR_ASSET_TOCINFO* tocainfo);
int32 PKR_GetAssetInfoByType(st_PACKER_READ_DATA* pr, uint32 type, int32 idx,
                             st_PKR_ASSET_TOCINFO* tocainfo);
int32 PKR_PkgHasAsset(st_PACKER_READ_DATA* pr, uint32 aid);
int32 PKR_FRIEND_assetIsGameDup(uint32 aid, const st_PACKER_READ_DATA* skippr, int32 oursize,
                                uint32 ourtype, uint32 chksum, int8*);
int32 PKR_makepool_anode(st_PACKER_READ_DATA* pr, int32 cnt);
void PKR_kiilpool_anode(st_PACKER_READ_DATA* pr);
st_PACKER_ATOC_NODE* PKR_newassnode(st_PACKER_READ_DATA* pr, uint32 aid);
st_PACKER_LTOC_NODE* PKR_newlaynode(en_LAYER_TYPE layer, int32 refcnt);
void PKR_oldlaynode(st_PACKER_LTOC_NODE* laytoc);
int32 OrdComp_R_Asset(void* vkey, void* vitem);
int32 OrdTest_R_AssetID(const void* vkey, void* vitem);
int32 LOD_r_HIPA(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_PACK(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_PVER(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_PFLG(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_PCNT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_PCRT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_PMOD(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 ValidatePlatform(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr, int32 plattag, int8* plat,
                       int8* vid, int8* lang, int8* title);
int32 LOD_r_PLAT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_DICT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_ATOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_AINF(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_AHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_ADBG(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr, st_PACKER_ATOC_NODE* assnode);
int32 LOD_r_LTOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_LINF(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_LHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_LHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_LDBG(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr, st_PACKER_LTOC_NODE* laynode);
int32 LOD_r_STRM(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_DHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int32 LOD_r_DPAK(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
void PKR_spew_verhist();
st_PACKER_ASSETTYPE* PKR_type2typeref(uint32 asstype, st_PACKER_ASSETTYPE* types);
void PKR_bld_typecnt(st_PACKER_READ_DATA* pr);
int32 PKR_typeHdlr_idx(st_PACKER_READ_DATA* pr, uint32 type);
void PKR_alloc_chkidx();
void* PKR_getmem(uint32 id, int32 amount, uint32, int32 align);
void* PKR_getmem(uint32 id, int32 amount, uint32, int32 align, int32 isTemp, int8** memtrue);
void PKR_relmem(uint32 id, int32 blksize, void* memptr, uint32, int32 isTemp);
void PKR_push_memmark();
void PKR_pop_memmark();

#endif
