#ifndef XPKRSVC_H
#define XPKRSVC_H

#include <types.h>
#include <time.h>

#include "xhipio.h"
#include "xordarray.h"

struct st_PACKER_ASSETTYPE
{
    U32 typetag;
    U32 tflags;
    S32 typalign;
    void* (*readXForm)(void*, U32, void*, U32, U32*);
    void* (*writeXForm)(void*, U32, void*, void*, U32, U32*);
    S32 (*assetLoaded)(void*, U32, void*, S32);
    void* (*makeData)(void*, U32, void*, S32*, S32*);
    void (*cleanup)(void*, U32, void*);
    void (*assetUnloaded)(void*, U32);
    void (*writePeek)(void*, U32, void*, char*);
};

struct st_PKR_ASSET_TOCINFO
{
    U32 aid;
    st_PACKER_ASSETTYPE* typeref;
    U32 sector;
    U32 plus_offset;
    U32 size;
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
    U32 aid;
    U32 asstype;
    S32 d_off;
    S32 d_size;
    S32 d_pad;
    U32 d_chksum;
    S32 assalign;
    S32 infoflag;
    S32 loadflag;
    char* memloc;
    S32 x_size;
    S32 readcnt;
    S32 readrem;
    st_PACKER_ASSETTYPE* typeref;
    st_HIPLOADDATA* ownpkg;
    st_PACKER_READ_DATA* ownpr;

    // looks like this was removed in the GC version
    // Evidence: memory allocation; Name function returns a constant
    // char basename[32];

    char* Name() const;
};

struct st_PACKER_LTOC_NODE
{
    en_LAYER_TYPE laytyp;
    st_XORDEREDARRAY assref;
    S32 flg_ldstat;
    S32 danglecnt;
    U32 chksum;
    S32 laysize;
    char* laymem;
    char* laytru;
};

struct st_PACKER_READ_DATA
{
    st_PACKER_ASSETTYPE* types;
    void* userdata;
    U32 opts;
    U32 pkgver;
    S32 cltver;
    S32 subver;
    S32 compatver;
    st_HIPLOADDATA* pkg;
    U32 base_sector;
    S32 lockid;
    char packfile[128];
    S32 asscnt;
    S32 laycnt;
    st_XORDEREDARRAY asstoc;
    st_XORDEREDARRAY laytoc;
    st_PACKER_ATOC_NODE* pool_anode;
    S32 pool_nextaidx;
    st_XORDEREDARRAY typelist[129];
    time_t time_made;
    time_t time_mod;
};

struct st_PACKER_READ_FUNCS
{
    U32 api_ver;
    st_PACKER_READ_DATA* (*Init)(void*, char*, U32, S32*, st_PACKER_ASSETTYPE*);
    void (*Done)(st_PACKER_READ_DATA*);
    S32 (*LoadLayer)(st_PACKER_READ_DATA*, en_LAYER_TYPE);
    U32 (*GetAssetSize)(st_PACKER_READ_DATA*, U32);
    void* (*LoadAsset)(st_PACKER_READ_DATA*, U32, char*, void*);
    void* (*AssetByType)(st_PACKER_READ_DATA*, U32, S32, U32*);
    S32 (*AssetCount)(st_PACKER_READ_DATA*, U32);
    S32 (*IsAssetReady)(st_PACKER_READ_DATA*, U32);
    S32 (*SetActive)(st_PACKER_READ_DATA*, en_LAYER_TYPE);
    char* (*AssetName)(st_PACKER_READ_DATA*, U32);
    U32 (*GetBaseSector)(st_PACKER_READ_DATA*);
    S32 (*GetAssetInfo)(st_PACKER_READ_DATA*, U32, st_PKR_ASSET_TOCINFO*);
    S32 (*GetAssetInfoByType)(st_PACKER_READ_DATA*, U32, S32, st_PKR_ASSET_TOCINFO*);
    S32 (*PkgHasAsset)(st_PACKER_READ_DATA*, U32);
    U32 (*PkgTimeStamp)(st_PACKER_READ_DATA*);
    void (*PkgDisconnect)(st_PACKER_READ_DATA*);
};

st_PACKER_READ_FUNCS* PKRGetReadFuncs(S32 apiver);
S32 PKRStartup();
S32 PKRShutdown();
S32 PKRLoadStep(S32);
st_PACKER_READ_DATA* PKR_ReadInit(void* userdata, char* pkgfile, U32 opts, S32* cltver,
                                  st_PACKER_ASSETTYPE* typelist);
void PKR_ReadDone(st_PACKER_READ_DATA* pr);
S32 PKR_SetActive(st_PACKER_READ_DATA* pr, en_LAYER_TYPE layer);
S32 PKR_parse_TOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
S32 PKR_LoadStep_Async();
char* PKR_LayerMemReserve(st_PACKER_READ_DATA* pr, st_PACKER_LTOC_NODE* layer);
void PKR_LayerMemRelease(st_PACKER_READ_DATA* pr, st_PACKER_LTOC_NODE* layer);
void PKR_drv_guardLayer(st_PACKER_LTOC_NODE*);
S32 PKR_drv_guardVerify(st_PACKER_LTOC_NODE*);
en_PKR_LAYER_LOAD_DEST PKR_layerLoadDest(en_LAYER_TYPE layer);
S32 PKR_layerTypeNeedsXForm(en_LAYER_TYPE layer);
S32 PKR_findNextLayerToLoad(st_PACKER_READ_DATA** work_on_pkg, st_PACKER_LTOC_NODE** next_layer);
void PKR_updateLayerAssets(st_PACKER_LTOC_NODE* laynode);
void PKR_xformLayerAssets(st_PACKER_LTOC_NODE* laynode);
void PKR_xform_asset(st_PACKER_ATOC_NODE* assnode, S32 dumpable_layer);
void* PKR_FindAsset(st_PACKER_READ_DATA* pr, U32 aid);
S32 PKR_LoadLayer(st_PACKER_READ_DATA* pr, en_LAYER_TYPE layer);
void* PKR_LoadAsset(st_PACKER_READ_DATA* pr, U32 aid, char*, void*);
U32 PKR_GetAssetSize(st_PACKER_READ_DATA* pr, U32 aid);
S32 PKR_AssetCount(st_PACKER_READ_DATA* pr, U32 type);
void* PKR_AssetByType(st_PACKER_READ_DATA* pr, U32 type, S32 idx, U32* size);
S32 PKR_IsAssetReady(st_PACKER_READ_DATA* pr, U32 aid);
U32 PKR_getPackTimestamp(st_PACKER_READ_DATA* pr);
void PKR_Disconnect(st_PACKER_READ_DATA* pr);
U32 PKRAssetIDFromInst(void* asset_inst);
char* PKR_AssetName(st_PACKER_READ_DATA* pr, U32 aid);
U32 PKR_GetBaseSector(st_PACKER_READ_DATA* pr);
S32 PKR_GetAssetInfo(st_PACKER_READ_DATA* pr, U32 aid, st_PKR_ASSET_TOCINFO* tocainfo);
S32 PKR_GetAssetInfoByType(st_PACKER_READ_DATA* pr, U32 type, S32 idx,
                           st_PKR_ASSET_TOCINFO* tocainfo);
S32 PKR_PkgHasAsset(st_PACKER_READ_DATA* pr, U32 aid);
S32 PKR_FRIEND_assetIsGameDup(U32 aid, const st_PACKER_READ_DATA* skippr, S32 oursize, U32 ourtype,
                              U32 chksum, char*);
S32 PKR_makepool_anode(st_PACKER_READ_DATA* pr, S32 cnt);
void PKR_kiilpool_anode(st_PACKER_READ_DATA* pr);
st_PACKER_ATOC_NODE* PKR_newassnode(st_PACKER_READ_DATA* pr, U32 aid);
st_PACKER_LTOC_NODE* PKR_newlaynode(en_LAYER_TYPE layer, S32 refcnt);
void PKR_oldlaynode(st_PACKER_LTOC_NODE* laytoc);
S32 OrdComp_R_Asset(void* vkey, void* vitem);
S32 OrdTest_R_AssetID(const void* vkey, void* vitem);
S32 LOD_r_HIPA(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
S32 LOD_r_PACK(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
S32 LOD_r_PVER(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
S32 LOD_r_PFLG(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
S32 LOD_r_PCNT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
S32 LOD_r_PCRT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
S32 LOD_r_PMOD(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
S32 ValidatePlatform(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr, S32 plattag, char* plat,
                     char* vid, char* lang, char* title);
S32 LOD_r_PLAT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
S32 LOD_r_DICT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
S32 LOD_r_ATOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
S32 LOD_r_AINF(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
S32 LOD_r_AHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
S32 LOD_r_ADBG(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr, st_PACKER_ATOC_NODE* assnode);
S32 LOD_r_LTOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
S32 LOD_r_LINF(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
S32 LOD_r_LHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
S32 LOD_r_LHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
S32 LOD_r_LDBG(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr, st_PACKER_LTOC_NODE* laynode);
S32 LOD_r_STRM(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
S32 LOD_r_DHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
S32 LOD_r_DPAK(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
void PKR_spew_verhist();
st_PACKER_ASSETTYPE* PKR_type2typeref(U32 asstype, st_PACKER_ASSETTYPE* types);
void PKR_bld_typecnt(st_PACKER_READ_DATA* pr);
S32 PKR_typeHdlr_idx(st_PACKER_READ_DATA* pr, U32 type);
void PKR_alloc_chkidx();
void* PKR_getmem(U32 id, S32 amount, U32, S32 align);
void* PKR_getmem(U32 id, S32 amount, U32, S32 align, S32 isTemp, char** memtrue);
void PKR_relmem(U32 id, S32 blksize, void* memptr, U32, S32 isTemp);
void PKR_push_memmark();
void PKR_pop_memmark();

#endif
