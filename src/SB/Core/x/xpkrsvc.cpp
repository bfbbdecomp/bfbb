#include "xpkrsvc.h"

#include <types.h>
#include <string.h>
#include <stdio.h>

#include "xhipio.h"
#include "xutil.h"
#include "xMath.h"
#include "xMemMgr.h"

extern int8 xpkrsvc_strings[];

extern st_PACKER_READ_FUNCS g_pkr_read_funcmap_original;
extern st_PACKER_READ_FUNCS g_pkr_read_funcmap; // = g_pkr_read_funcmap_original;
st_PACKER_READ_DATA g_readdatainst[16] = {};

st_HIPLOADFUNCS* g_hiprf;
uint32 g_loadlock;
int32 pkr_sector_size;
volatile int32 g_packinit;
volatile int32 g_memalloc_pair;
volatile int32 g_memalloc_runtot;
volatile int32 g_memalloc_runfree;

st_PACKER_READ_FUNCS* PKRGetReadFuncs(int32 apiver)
{
    switch (apiver)
    {
    case 1:
        return &g_pkr_read_funcmap;
    default:
        return NULL;
    }
}

#ifdef NON_MATCHING
// Small reordering
int32 PKRStartup()
{
    if (g_packinit++ == 0)
    {
        g_pkr_read_funcmap = g_pkr_read_funcmap_original;
        g_hiprf = get_HIPLFuncs();
        pkr_sector_size = 32;
    }
    return g_packinit;
}
#endif

int32 PKRShutdown()
{
    g_packinit--;
    return g_packinit;
}

int32 PKRLoadStep(int32)
{
    return PKR_LoadStep_Async();
}

st_PACKER_READ_DATA* PKR_ReadInit(void* userdata, int8* pkgfile, uint32 opts, int32* cltver,
                                  st_PACKER_ASSETTYPE* typelist)
{
    // I'm pretty sure this is just a pointer to an array on the heap
    // But it needs to be an array of pointers to generate correct code ???
    int8* tocbuf_RAW[1];
    tocbuf_RAW[0] = NULL;
    st_PACKER_READ_DATA* pr = NULL;
    int32 uselock = -1;

    PKR_alloc_chkidx();
    int8* tocbuf_aligned = (int8*)PKR_getmem('PTOC', 0x8000, 'PTOC', 0x40, 1, tocbuf_RAW);

    for (int32 i = 0; i < 16; i++)
    {
        if (!(g_loadlock & 1 << i))
        {
            g_loadlock |= 1 << i;
            pr = &g_readdatainst[i];
            uselock = i;
            break;
        }
    }

    if (pr != NULL)
    {
        memset(pr, 0, sizeof(st_PACKER_READ_DATA));
        pr->lockid = uselock;
        pr->userdata = userdata;
        pr->opts = opts;
        pr->types = typelist;
        pr->cltver = -1;
        strncpy(pr->packfile, pkgfile, 0x80);

        if (tocbuf_aligned == NULL)
        {
            pr->pkg = g_hiprf->create(pkgfile, NULL, 0);
        }
        else
        {
            pr->pkg = g_hiprf->create(pkgfile, tocbuf_aligned, 0x8000);
        }

        if (pr->pkg != NULL)
        {
            pr->base_sector = g_hiprf->basesector(pr->pkg);
            PKR_parse_TOC(pr->pkg, pr);
            *cltver = pr->cltver;
            g_hiprf->setBypass(pr->pkg, 1, 1);
        }
        else
        {
            PKR_ReadDone(pr);
            pr = NULL;
            *cltver = -1;
        }
    }
    else
    {
        *cltver = -1;
        pr = NULL;
    }

    PKR_relmem('PTOC', 0x8000, (void*)tocbuf_RAW[0], 'PTOC', 1);
    tocbuf_RAW[0] = NULL;
    return pr;
}

void PKR_ReadDone(st_PACKER_READ_DATA* pr)
{
    int32 i;
    int32 j;
    int32 lockid;
    st_PACKER_ATOC_NODE* assnode;
    st_PACKER_LTOC_NODE* laynode;
    st_XORDEREDARRAY* tmplist;

    if (pr == NULL)
    {
        return;
    }
    for (i = pr->laytoc.cnt - 1; i >= 0; i--)
    {
        st_PACKER_LTOC_NODE* laynode = (st_PACKER_LTOC_NODE*)pr->laytoc.list[i];
        for (j = laynode->assref.cnt - 1; j >= 0; j--)
        {
            assnode = (st_PACKER_ATOC_NODE*)laynode->assref.list[j];
            if (assnode->typeref != NULL && assnode->typeref->assetUnloaded != NULL &&
                !(assnode->loadflag & 0x100000))
            {
                assnode->typeref->assetUnloaded(assnode->memloc, assnode->aid);
            }
        }
    }

    for (i = 0; i < pr->laytoc.cnt; i++)
    {
        laynode = (st_PACKER_LTOC_NODE*)pr->laytoc.list[i];
        if (laynode->laymem != NULL)
        {
            PKR_LayerMemRelease(pr, laynode);
            laynode->laymem = NULL;
        }
    }

    PKR_kiilpool_anode(pr);

    for (i = 0; i < pr->laytoc.cnt; i++)
    {
        laynode = (st_PACKER_LTOC_NODE*)pr->laytoc.list[i];
        PKR_oldlaynode(laynode);
    }

    XOrdDone(&pr->asstoc, false);
    XOrdDone(&pr->laytoc, false);

    for (i = 0; i < 129; i++)
    {
        tmplist = &pr->typelist[i];
        if (tmplist->max != 0)
        {
            XOrdDone(tmplist, false);
        }
    }

    if (pr->pkg != NULL)
    {
        g_hiprf->destroy(pr->pkg);
        pr->pkg = NULL;
    }

    lockid = pr->lockid;
    memset(pr, 0, sizeof(st_PACKER_READ_DATA));
    g_loadlock &= ~(1 << lockid);
}

#ifdef NON_MATCHING
// Incorrect (but equivalent) logic for comparing the loadflag
int32 PKR_SetActive(st_PACKER_READ_DATA* pr, en_LAYER_TYPE layer)
{
    int32 result;
    int32 rc = 1;
    int32 i;
    int32 j;
    st_PACKER_ATOC_NODE* assnode;
    st_PACKER_LTOC_NODE* laynode;

    if (pr == NULL)
    {
        return 0;
    }

    for (i = 0; i < pr->laytoc.cnt; i++)
    {
        laynode = (st_PACKER_LTOC_NODE*)pr->laytoc.list[i];
        if (layer > PKR_LTYPE_DEFAULT && laynode->laytyp != layer)
        {
            continue;
        }

        for (j = 0; j < laynode->assref.cnt; j++)
        {
            assnode = (st_PACKER_ATOC_NODE*)laynode->assref.list[j];
            if (assnode->loadflag & 0x10000 || (assnode->loadflag & 0x80000) == 0)
            {
                continue;
            }

            if (assnode->typeref == NULL)
            {
                assnode->Name();
                xUtil_idtag2string(assnode->asstype, 0);
            }
            else if (assnode->typeref->assetLoaded != NULL)
            {
                if (!(assnode->typeref->assetLoaded(pr->userdata, assnode->aid, assnode->memloc,
                                                    assnode->d_size)))
                {
                    rc = 0;
                }
                else
                {
                    assnode->loadflag |= 0x10000;
                }
            }
        }
    }

    return rc;
}
#endif

int32 PKR_parse_TOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
    int32 done = 0;
    int32 is_ok = 0;
    uint32 cid = g_hiprf->enter(pkg);
    while (cid != false)
    {
        switch (cid)
        {
        case 'HIPA':
            done = LOD_r_HIPA(pkg, pr);
            break;
        case 'PACK':
            LOD_r_PACK(pkg, pr);
            if (done)
            {
                if (pr->asscnt > 0)
                {
                    XOrdInit(&pr->asstoc, pr->asscnt, 0);
                    PKR_makepool_anode(pr, pr->asscnt);
                }
                if (pr->laycnt > 0)
                {
                    XOrdInit(&pr->laytoc, pr->laycnt, 0);
                }
            }
            break;
        case 'DICT':
            LOD_r_DICT(pkg, pr);
            PKR_bld_typecnt(pr);
            is_ok = true;
            break;
        case 'STRM':
            LOD_r_STRM(pkg, pr);
            break;
        }

        if (!done)
        {
            break;
        }

        g_hiprf->exit(pkg);

        if (is_ok)
        {
            break;
        }

        cid = g_hiprf->enter(pkg);
    }
    return done;
}

int32 PKR_LoadStep_Async()
{
    int32 rc;
    static st_PACKER_READ_DATA* curpr = NULL;
    static st_PACKER_LTOC_NODE* asynlay = NULL;

    if (asynlay == NULL)
    {
        PKR_findNextLayerToLoad(&curpr, &asynlay);

        if (asynlay != NULL)
        {
            if (PKR_layerLoadDest(asynlay->laytyp) != PKR_LDDEST_SKIP && asynlay->laysize > 1 &&
                asynlay->assref.cnt > 0)
            {
                asynlay->laymem = PKR_LayerMemReserve(curpr, asynlay);
                PKR_drv_guardLayer(asynlay);
                st_PACKER_ATOC_NODE* tmpass = (st_PACKER_ATOC_NODE*)asynlay->assref.list[0];
                g_hiprf->setSpot(tmpass->ownpkg, tmpass->d_off);

                if (g_hiprf->readBytes(tmpass->ownpkg, asynlay->laymem, asynlay->laysize))
                {
                    asynlay->flg_ldstat |= 0x1000000;
                }
                else
                {
                    PKR_LayerMemRelease(curpr, asynlay);
                    asynlay->flg_ldstat &= 0xfcffffff;
                    curpr = NULL;
                    asynlay = NULL;
                }

                rc = 1;
            }
            else
            {
                rc = 1;
                asynlay->flg_ldstat |= 0x2000000;
                asynlay = NULL;
            }
        }
        else
        {
            rc = 0;
            curpr = NULL;
            asynlay = NULL;
        }
    }
    else
    {
        int32 moretodo = g_hiprf->pollRead(curpr->pkg);
        if (moretodo == 1)
        {
            moretodo = PKR_drv_guardVerify(asynlay);
        }

        if (!moretodo)
        {
            rc = 1;
        }
        else if (moretodo == 1)
        {
            PKR_updateLayerAssets(asynlay);

            if (PKR_layerTypeNeedsXForm(asynlay->laytyp))
            {
                PKR_xformLayerAssets(asynlay);
            }

            if (PKR_layerLoadDest(asynlay->laytyp) == PKR_LDDEST_RWHANDOFF)
            {
                PKR_LayerMemRelease(curpr, asynlay);
            }

            rc = 1;
            asynlay->flg_ldstat |= 0x2000000;
            asynlay = NULL;
        }
        else
        {
            en_PKR_LAYER_LOAD_DEST loaddest = PKR_layerLoadDest(asynlay->laytyp);
            if (asynlay->laymem != NULL && loaddest == PKR_LDDEST_RWHANDOFF)
            {
                PKR_LayerMemRelease(curpr, asynlay);
            }

            rc = 1;
            asynlay->flg_ldstat &= 0xfcffffff;
            asynlay = NULL;
            curpr = NULL;
        }
    }

    return rc;
}

int8* PKR_LayerMemReserve(st_PACKER_READ_DATA* pr, st_PACKER_LTOC_NODE* layer)
{
    int8* mem = NULL;
    if (layer->laymem != NULL)
    {
        return layer->laymem;
    }

    switch (PKR_layerLoadDest(layer->laytyp))
    {
    case PKR_LDDEST_SKIP:
        break;
    case PKR_LDDEST_KEEPSTATIC:
        mem = (int8*)PKR_getmem('LYR\0', layer->laysize, layer->laytyp + 0x8000, 0x40);
        break;
    case PKR_LDDEST_KEEPMALLOC:
        mem = (int8*)PKR_getmem('LYR\0', layer->laysize, layer->laytyp + 0x8000, 0x40, 1,
                                &layer->laytru);
        break;
    case PKR_LDDEST_RWHANDOFF:
        PKR_push_memmark();
        mem = (int8*)PKR_getmem('LYR\0', layer->laysize, layer->laytyp + 0x8000, 0x40);
        break;
    }

    return mem;
}

void PKR_LayerMemRelease(st_PACKER_READ_DATA* pr, st_PACKER_LTOC_NODE* layer)
{
    switch (PKR_layerLoadDest(layer->laytyp))
    {
    case PKR_LDDEST_SKIP:
        break;
    case PKR_LDDEST_RWHANDOFF:
        PKR_relmem('LYR\0', layer->laysize, layer->laymem, layer->laytyp + 0x8000, 0);
        PKR_pop_memmark();
        layer->laymem = NULL;
        break;
    case PKR_LDDEST_KEEPSTATIC:
        PKR_relmem('LYR\0', layer->laysize, layer->laymem, layer->laytyp + 0x8000, 0);
        break;
    case PKR_LDDEST_KEEPMALLOC:
        PKR_relmem('LYR\0', layer->laysize, layer->laytru, layer->laytyp + 0x8000, 1);
        layer->laymem = NULL;
        layer->laytru = NULL;
        break;
    }
}

void PKR_drv_guardLayer(st_PACKER_LTOC_NODE*)
{
}

int32 PKR_drv_guardVerify(st_PACKER_LTOC_NODE*)
{
    return 1;
}

en_PKR_LAYER_LOAD_DEST PKR_layerLoadDest(en_LAYER_TYPE layer)
{
    switch (layer)
    {
    case PKR_LTYPE_SRAM:
    case PKR_LTYPE_CUTSCENE:
        return PKR_LDDEST_SKIP;
    case PKR_LTYPE_TEXTURE:
    case PKR_LTYPE_BSP:
    case PKR_LTYPE_MODEL:
        return PKR_LDDEST_RWHANDOFF;
    case PKR_LTYPE_ANIMATION:
    case PKR_LTYPE_JSPINFO:
        return PKR_LDDEST_KEEPMALLOC;
    case PKR_LTYPE_DEFAULT:
    case PKR_LTYPE_VRAM:
    case PKR_LTYPE_SNDTOC:
    case PKR_LTYPE_CUTSCENETOC:
        return PKR_LDDEST_KEEPSTATIC;
    default:
        return PKR_LDDEST_KEEPSTATIC;
    }
}

int32 PKR_layerTypeNeedsXForm(en_LAYER_TYPE layer)
{
    switch (layer)
    {
    case PKR_LTYPE_TEXTURE:
    case PKR_LTYPE_BSP:
    case PKR_LTYPE_MODEL:
        return true;
    case PKR_LTYPE_DEFAULT:
    case PKR_LTYPE_ANIMATION:
    case PKR_LTYPE_VRAM:
    case PKR_LTYPE_SNDTOC:
    case PKR_LTYPE_CUTSCENETOC:
    case PKR_LTYPE_JSPINFO:
        return true;
    case PKR_LTYPE_SRAM:
    case PKR_LTYPE_CUTSCENE:
        return false;
    default:
        return false;
    }
}

#ifdef NON_MATCHING
//Regalloc
int32 PKR_findNextLayerToLoad(st_PACKER_READ_DATA** work_on_pkg, st_PACKER_LTOC_NODE** next_layer)
{
    st_PACKER_READ_DATA* tmppr;
    st_PACKER_LTOC_NODE* tmplay;

    *next_layer = NULL;
    if (*work_on_pkg != NULL)
    {
        tmppr = *work_on_pkg;
        for (int32 i = 0; i < tmppr->laytoc.cnt; i++)
        {
            tmplay = (st_PACKER_LTOC_NODE*)tmppr->laytoc.list[i];
            if (!(tmplay->flg_ldstat & 0x2000000))
            {
                *next_layer = tmplay;
                *work_on_pkg = tmppr;
                break;
            }
        }
    }

    if (*next_layer == NULL)
    {
        tmppr = g_readdatainst;
        for (int32 i = 0; i < 16; i++, tmppr++)
        {
            if ((g_loadlock & 1 << i) == 0 || tmppr == *work_on_pkg)
            {
                continue;
            }

            for (int32 j = 0; j < tmppr->laytoc.cnt; j++)
            {
                tmplay = (st_PACKER_LTOC_NODE*)tmppr->laytoc.list[j];
                if (!(tmplay->flg_ldstat & 0x2000000))
                {
                    *next_layer = tmplay;
                    *work_on_pkg = tmppr;
                    break;
                }
            }

            if (*next_layer != NULL)
            {
                break;
            }
        }
    }

    return *next_layer != NULL;
}
#endif

#ifdef NON_MATCHING
//Regalloc
void PKR_updateLayerAssets(st_PACKER_LTOC_NODE* laynode)
{
    st_PACKER_ATOC_NODE* tmpass = NULL;
    for (int32 i = 0; i < laynode->assref.cnt; i++)
    {
        tmpass = (st_PACKER_ATOC_NODE*)laynode->assref.list[i];
        if (tmpass->d_off > 0 && tmpass->d_size > 0)
        {
            break;
        }
        tmpass = NULL;
    }

    if (tmpass != NULL)
    {
        int32 lay_hip_pos = tmpass->d_off;
        for (int32 i = 0; i < laynode->assref.cnt; i++)
        {
            st_PACKER_ATOC_NODE* tmpass = (st_PACKER_ATOC_NODE*)laynode->assref.list[i];
            if (!(tmpass->loadflag & 0x100000))
            {
                if (tmpass->loadflag & 0x200000)
                {
                    tmpass->Name();
                    tmpass->memloc = NULL;
                }
                else
                {
                    tmpass->memloc = laynode->laymem + (tmpass->d_off - lay_hip_pos);
                    tmpass->loadflag |= 0x80000;
                    tmpass->Name();
                }
            }
        }
    }
}
#endif

void PKR_xformLayerAssets(st_PACKER_LTOC_NODE* laynode)
{
    int32 i;
    int32 will_be_dumped = false;
    en_PKR_LAYER_LOAD_DEST loaddest = PKR_layerLoadDest(laynode->laytyp);

    if (loaddest == PKR_LDDEST_RWHANDOFF)
    {
        will_be_dumped = true;
    }

    for (i = 0; i < laynode->assref.cnt; i++)
    {
        st_PACKER_ATOC_NODE* tmpass = (st_PACKER_ATOC_NODE*)laynode->assref.list[i];
        if ((tmpass->loadflag & 0x100000) == 0)
        {
            PKR_xform_asset(tmpass, will_be_dumped);
            if (will_be_dumped && tmpass->x_size < 1)
            {
                tmpass->Name();
                tmpass->memloc = NULL;
            }
        }
    }
}

//
void PKR_xform_asset(st_PACKER_ATOC_NODE* assnode, int32 dumpable_layer)
{
    if (!(assnode->infoflag & 4))
    {
        if (assnode->typeref == NULL)
        {
            return;
        }

        if (assnode->typeref->readXForm != NULL)
        {
            assnode->Name();
            xUtil_idtag2string(assnode->asstype, 0);
        }
        else
        {
            return;
        }
    }

    st_PACKER_ASSETTYPE* atype = assnode->typeref;
    if (atype == NULL)
    {
        assnode->Name();
    }
    else if (atype->readXForm == NULL)
    {
        assnode->Name();
    }
    else
    {
        if (assnode->d_size == 0)
        {
            assnode->Name();
            xUtil_idtag2string(assnode->asstype, 0);
            assnode->memloc = NULL;
        }

        int8* xformloc =
            (int8*)atype->readXForm(assnode->ownpr->userdata, assnode->aid, assnode->memloc,
                                    assnode->d_size, (uint32*)&assnode->x_size);
        if (!dumpable_layer && assnode->memloc == xformloc && assnode->x_size != 0)
        {
            assnode->Name();
        }
        else if (assnode->d_size == 0 || assnode->x_size == 0)
        {
            assnode->memloc = NULL;
            assnode->loadflag |= 0x200000;
        }
        else
        {
            assnode->memloc = xformloc;
        }
    }
}

void* PKR_FindAsset(st_PACKER_READ_DATA* pr, uint32 aid)
{
    st_PACKER_ATOC_NODE* assnode = NULL;
    int32 idx = XOrdLookup(&pr->asstoc, (void*)aid, OrdTest_R_AssetID);

    if (idx >= 0)
    {
        assnode = (st_PACKER_ATOC_NODE*)pr->asstoc.list[idx];
    }

    if (assnode != NULL)
    {
        if (assnode->memloc == NULL)
        {
            assnode->Name();
        }

        return assnode->memloc;
    }
    return NULL;
}

int32 PKR_LoadLayer(st_PACKER_READ_DATA* pr, en_LAYER_TYPE layer)
{
    return 0;
}

void* PKR_LoadAsset(st_PACKER_READ_DATA* pr, uint32 aid, const int8*, void*)
{
    return PKR_FindAsset(pr, aid);
}

uint32 PKR_GetAssetSize(st_PACKER_READ_DATA* pr, uint32 aid)
{
    st_PACKER_ATOC_NODE* assnode = NULL;
    int32 idx = XOrdLookup(&pr->asstoc, (void*)aid, OrdTest_R_AssetID);

    if (idx > -1)
    {
        assnode = (st_PACKER_ATOC_NODE*)pr->asstoc.list[idx];
    }

    if (assnode != NULL)
    {
        if (assnode->x_size > 0)
        {
            return assnode->x_size;
        }
        return assnode->d_size;
    }
    return 0;
}

int32 PKR_AssetCount(st_PACKER_READ_DATA* pr, uint32 type)
{
    int32 count = 0;
    if (type == 0)
    {
        return pr->asstoc.cnt;
    }
    else
    {
        int32 idx = PKR_typeHdlr_idx(pr, type);
        if (idx >= 0)
        {
            st_XORDEREDARRAY* tmplist = &pr->typelist[idx];
            count = tmplist->cnt;
        }
    }
    return count;
}

void* PKR_AssetByType(st_PACKER_READ_DATA* pr, uint32 type, int32 idx, uint32* size)
{
    if (size != NULL)
    {
        *size = 0;
    }

    if (idx < 0)
    {
        idx = 0;
    }

    int32 typeidx = PKR_typeHdlr_idx(pr, type);
    if (typeidx < 0)
    {
        return 0;
    }

    st_XORDEREDARRAY* tmplist = &pr->typelist[typeidx];
    if (idx >= tmplist->cnt)
    {
        return 0;
    }

    st_PACKER_ATOC_NODE* assnode = (st_PACKER_ATOC_NODE*)tmplist->list[idx];
    if (size != NULL)
    {
        *size = assnode->d_size;
    }
    return assnode->memloc;
}

//
int32 PKR_IsAssetReady(st_PACKER_READ_DATA* pr, uint32 aid)
{
    int32 ready = false;
    int32 idx = XOrdLookup(&pr->asstoc, (void*)aid, OrdTest_R_AssetID);
    if (idx >= 0)
    {
        st_PACKER_ATOC_NODE* assnode = (st_PACKER_ATOC_NODE*)pr->asstoc.list[idx];
        if (assnode->loadflag & 0x80000)
        {
            ready = true;
        }
        else
        {
            ready = false;
        }
    }

    return ready;
}

uint32 PKR_getPackTimestamp(st_PACKER_READ_DATA* pr)
{
    return pr->time_made;
}

void PKR_Disconnect(st_PACKER_READ_DATA* pr)
{
    if (pr->pkg != NULL)
    {
        g_hiprf->destroy(pr->pkg);
        pr->pkg = NULL;
    }
}

uint32 PKRAssetIDFromInst(void* inst)
{
    return ((st_PACKER_ATOC_NODE*)inst)->aid;
}

int8* PKR_AssetName(st_PACKER_READ_DATA* pr, uint32 aid)
{
    int8* name = NULL;

    if (aid == 0)
    {
        return NULL;
    }
    else
    {
        int32 idx = XOrdLookup(&pr->asstoc, (void*)aid, OrdTest_R_AssetID);
        if (idx >= 0)
        {
            name = ((st_PACKER_ATOC_NODE*)pr->asstoc.list[idx])->Name();
        }
    }

    return name;
}

uint32 PKR_GetBaseSector(st_PACKER_READ_DATA* pr)
{
    return pr->base_sector;
}

int32 PKR_GetAssetInfo(st_PACKER_READ_DATA* pr, uint32 aid, st_PKR_ASSET_TOCINFO* tocainfo)
{
    memset(tocainfo, 0, sizeof(st_PKR_ASSET_TOCINFO));
    int32 idx = XOrdLookup(&pr->asstoc, (void*)aid, OrdTest_R_AssetID);
    if (idx >= 0)
    {
        st_PACKER_ATOC_NODE* assnode = (st_PACKER_ATOC_NODE*)pr->asstoc.list[idx];
        tocainfo->aid = aid;
        tocainfo->typeref = assnode->typeref;
        tocainfo->sector = pr->base_sector + assnode->d_off / pkr_sector_size;
        tocainfo->plus_offset = assnode->d_off % pkr_sector_size;
        tocainfo->size = assnode->d_size;
        tocainfo->mempos = assnode->memloc;
    }
    return idx >= 0 ? 1 : 0;
}

int32 PKR_GetAssetInfoByType(st_PACKER_READ_DATA* pr, uint32 type, int32 idx,
                             st_PKR_ASSET_TOCINFO* tocainfo)
{
    memset(tocainfo, 0, sizeof(st_PKR_ASSET_TOCINFO));
    if (idx < 0)
    {
        idx = 0;
    }

    int32 typeidx = PKR_typeHdlr_idx(pr, type);
    if (typeidx < 0)
    {
        return 0;
    }

    st_XORDEREDARRAY* tmplist = &pr->typelist[typeidx];
    if (idx >= tmplist->cnt)
    {
        return 0;
    }

    st_PACKER_ATOC_NODE* assnode = (st_PACKER_ATOC_NODE*)tmplist->list[idx];
    tocainfo->aid = assnode->aid;
    tocainfo->typeref = assnode->typeref;
    tocainfo->sector = pr->base_sector + assnode->d_off / pkr_sector_size;
    tocainfo->plus_offset = assnode->d_off % pkr_sector_size;
    tocainfo->size = assnode->d_size;
    tocainfo->mempos = assnode->memloc;

    return 1;
}

int32 PKR_PkgHasAsset(st_PACKER_READ_DATA* pr, uint32 aid)
{
    int32 idx = XOrdLookup(&pr->asstoc, (void*)aid, OrdTest_R_AssetID);
    if (idx < 0)
    {
        return 0;
    }

    int32 rc = 1;
    st_PACKER_ATOC_NODE* assnode = (st_PACKER_ATOC_NODE*)pr->asstoc.list[idx];
    if (assnode->loadflag & 0x100000)
    {
        rc = 0;
    }
    else if (assnode->loadflag & 0x200000)
    {
        rc = 0;
    }
    return rc;
}

int32 PKR_FRIEND_assetIsGameDup(uint32 aid, const st_PACKER_READ_DATA* skippr, int32 oursize,
                                uint32 ourtype, uint32 chksum, int8*)
{
    int32 is_dup = 0;
    if (aid == 0x7ab6743a)
    {
        return 0;
    }
    if (aid == 0x98a3f56c)
    {
        return 0;
    }

    for (int i = 0; i < 16; i++)
    {
        if ((g_loadlock & 1 << i) == 0 || &g_readdatainst[i] == skippr)
        {
            continue;
        }

        int32 idx = XOrdLookup(&g_readdatainst[i].asstoc, (void*)aid, OrdTest_R_AssetID);
        if (idx < 0)
        {
            continue;
        }

        st_PACKER_ATOC_NODE* tmp_ass = (st_PACKER_ATOC_NODE*)g_readdatainst[i].asstoc.list[idx];
        if ((tmp_ass->loadflag & 0x80000) == 0 && tmp_ass->asstype != 0x534e4420 &&
            tmp_ass->asstype != 0x534e4453)
        {
            continue;
        }

        tmp_ass->Name();
        xUtil_idtag2string(tmp_ass->asstype, 0);

        if (ourtype != 0 && ourtype != tmp_ass->asstype)
        {
            tmp_ass->Name();
            xUtil_idtag2string(tmp_ass->asstype, 0);
            xUtil_idtag2string(ourtype, 1);
        }
        if (oursize >= 0 && oursize != tmp_ass->d_size)
        {
            tmp_ass->Name();
            xUtil_idtag2string(tmp_ass->asstype, 0);
        }
        if (chksum != 0 && chksum != tmp_ass->d_chksum)
        {
            tmp_ass->Name();
            xUtil_idtag2string(tmp_ass->asstype, 0);
        }
        is_dup = 1;
        break;
    }

    return is_dup;
}

int32 PKR_makepool_anode(st_PACKER_READ_DATA* pr, int32 cnt)
{
    if (cnt == 0)
    {
        return 0;
    }

    st_PACKER_ATOC_NODE* assnode =
        (st_PACKER_ATOC_NODE*)PKR_getmem('ANOD', cnt * sizeof(st_PACKER_ATOC_NODE), 'FAKE', 0x40);
    if (assnode != NULL)
    {
        pr->pool_anode = assnode;
        pr->pool_nextaidx = 0;
    }
    return assnode != NULL ? cnt * sizeof(st_PACKER_ATOC_NODE) : 0;
}

void PKR_kiilpool_anode(st_PACKER_READ_DATA* pr)
{
    if (pr->asscnt == 0)
    {
        return;
    }

    PKR_relmem('ANOD', pr->asscnt * sizeof(st_PACKER_ATOC_NODE), pr->pool_anode, 'FAKE', 0);
    pr->pool_anode = NULL;
    pr->pool_nextaidx = 0;
}

//
st_PACKER_ATOC_NODE* PKR_newassnode(st_PACKER_READ_DATA* pr, uint32 aid)
{
    int32 idx = pr->pool_nextaidx;
    st_PACKER_ATOC_NODE* newnode = (st_PACKER_ATOC_NODE*)&pr->pool_anode[idx];
    pr->pool_nextaidx++;

    memset(newnode, 0, sizeof(st_PACKER_ATOC_NODE));
    newnode->aid = aid;
    return newnode;
}

st_PACKER_LTOC_NODE* PKR_newlaynode(en_LAYER_TYPE layer, int32 refcnt)
{
    st_PACKER_LTOC_NODE* newnode =
        (st_PACKER_LTOC_NODE*)PKR_getmem('LNOD', sizeof(st_PACKER_LTOC_NODE), layer + 0x8000, 0x40);
    memset(newnode, 0, sizeof(st_PACKER_LTOC_NODE));

    newnode->laytyp = layer;
    XOrdInit(&newnode->assref, refcnt <= 1 ? 2 : refcnt, 0);
    return newnode;
}

void PKR_oldlaynode(st_PACKER_LTOC_NODE* laynode)
{
    XOrdDone(&laynode->assref, 0);
    PKR_relmem('LNOD', sizeof(st_PACKER_LTOC_NODE), laynode, laynode->laytyp + 0x8000, 0);
}

int32 OrdComp_R_Asset(void* vkey, void* vitem)
{
    int32 rc;
    if (*(uint32*)vkey < *(uint32*)vitem)
    {
        rc = -1;
    }
    else if (*(uint32*)vkey > *(uint32*)vitem)
    {
        rc = 1;
    }
    else
    {
        rc = 0;
    }
    return rc;
}

int32 OrdTest_R_AssetID(const void* vkey, void* vitem)
{
    int32 rc;
    if ((uint32)vkey < *(uint32*)vitem)
    {
        rc = -1;
    }
    else if ((uint32)vkey > *(uint32*)vitem)
    {
        rc = 1;
    }
    else
    {
        rc = 0;
    }
    return rc;
}

int32 LOD_r_HIPA(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
    pr->pkgver = 'HIPA';
    return 1;
}

int32 LOD_r_PACK(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
    uint32 cid = g_hiprf->enter(pkg);
    while (cid != 0)
    {
        switch (cid)
        {
        case 'PVER':
            LOD_r_PVER(pkg, pr);
            break;
        case 'PFLG':
            LOD_r_PFLG(pkg, pr);
            break;
        case 'PCNT':
            LOD_r_PCNT(pkg, pr);
            break;
        case 'PCRT':
            LOD_r_PCRT(pkg, pr);
            break;
        case 'PMOD':
            LOD_r_PMOD(pkg, pr);
            break;
        case 'PLAT':
            LOD_r_PLAT(pkg, pr);
            break;
        }
        g_hiprf->exit(pkg);
        cid = g_hiprf->enter(pkg);
    }
    return 1;
}

#ifdef NON_MATCHING
// reordering
int32 LOD_r_PVER(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
    int32 ver = 0;
    g_hiprf->readLongs(pkg, &ver, 1);
    pr->subver = ver;

    if (ver < 2)
    {
        PKR_spew_verhist();
    }

    // int32 amt = -1;
    ver = -1;
    g_hiprf->readLongs(pkg, &ver, 1);
    pr->cltver = ver;

    ver = -1;
    int32 amt = g_hiprf->readLongs(pkg, &ver, 1);
    if (amt != 1)
    {
        pr->compatver = 1;
    }
    else
    {
        pr->compatver = ver;
    }
    return 1;
}
#endif

#ifdef NON_MATCHING
// reordering
int32 LOD_r_PFLG(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
    int32 flg = 0;
    g_hiprf->readLongs(pkg, &flg, 1);
    return 1;
}
#endif

int32 LOD_r_PCNT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
    int32 cnt = 0;
    g_hiprf->readLongs(pkg, &cnt, 1);
    pr->asscnt = cnt;
    g_hiprf->readLongs(pkg, &cnt, 1);
    pr->laycnt = cnt;
    g_hiprf->readLongs(pkg, &cnt, 1);
    g_hiprf->readLongs(pkg, &cnt, 1);
    g_hiprf->readLongs(pkg, &cnt, 1);
    return 1;
}

#ifdef NON_MATCHING
// need all of .rodata to generate for the OK
int32 LOD_r_PCRT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
    int32 time = 0;
    int8 arr[256] = {};

    g_hiprf->readLongs(pkg, &time, 1);
    pr->time_made = time;

    if (pr->subver > 1)
    {
        g_hiprf->readString(pkg, arr);
    }
    return 1;
}
#endif

int32 LOD_r_PMOD(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
    int32 time_mod = 0;
    g_hiprf->readLongs(pkg, &time_mod, 1);
    pr->time_mod = time_mod;
    return 1;
}

#ifdef NON_MATCHING
// String data
int32 ValidatePlatform(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr, int32 plattag, int8* plat,
                       int8* vid, int8* lang, int8* title)
{
    int8 fullname[128] = {};
    sprintf(fullname, "%s %s %s %s", plat, vid, lang, title);

    bool rc = false;
    if ((strcmp(plat, "Game Cube") == 0 || strcmp(plat, "Xbox") == 0 ||
         strcmp(plat, "PlayStation 2") == 0))
    {
        rc = true;
    }
    if (!rc)
    {
        return 0;
    }

    rc = false;
    if (strcmp(vid, "NTSC") == 0 || strcmp(vid, "PAL") == 0)
    {
        rc = true;
    }
    if (!rc)
    {
        return 0;
    }

    rc = false;
    if (strcmp(lang, "US Common") == 0 || strcmp(lang, "United Kingdom") == 0 ||
        strcmp(lang, "French") == 0 || strcmp(lang, "German") == 0)
    {
        rc = true;
    }
    if (!rc)
    {
        return 0;
    }

    rc = false;
    if (strcmp(title, "Sponge Bob") == 0 || strcmp(title, "Incredibles") == 0 ||
        strcmp(title, "Jimmy Newtron") == 0)
    {
        rc = true;
    }
    if (!rc)
    {
        return 0;
    }

    rc = !(bool)(strcmp(plat, "Game Cube"));
    if (!rc)
    {
        return 0;
    }

    rc = !(strcmp(vid, "NTSC"));
    if (!rc)
    {
        return 0;
    }

    rc = !(strcmp(lang, "US Common"));
    if (!rc)
    {
        return 0;
    }

    rc = !(strcmp(title, "Sponge Bob"));
    if (!rc)
    {
        return 0;
    }
    return 1;
}
#endif

#ifdef NON_MATCHING
// Orderings and Regalloc
int32 LOD_r_PLAT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
    int32 result = 1;
    int32 plattag = 0;
    int8 platname[32] = {};
    int8 vidname[32] = {};
    int8 langname[32] = {};
    int8 titlename[32] = {};

    g_hiprf->readLongs(pkg, &plattag, 1);
    g_hiprf->readString(pkg, platname);
    g_hiprf->readString(pkg, vidname);
    g_hiprf->readString(pkg, langname);
    if (g_hiprf->readString(pkg, titlename) == 0)
    {
        strcpy(titlename, "<Unknown>");
    }
    if (ValidatePlatform(pkg, pr, plattag, platname, vidname, langname, titlename) == 0)
    {
        result = 0;
    }
    return result;
}
#endif

int32 LOD_r_DICT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
    uint32 cid = g_hiprf->enter(pkg);
    while (cid != 0)
    {
        switch (cid)
        {
        case 'ATOC':
            LOD_r_ATOC(pkg, pr);
            XOrdSort(&pr->asstoc, OrdComp_R_Asset);
            break;
        case 'LTOC':
            LOD_r_LTOC(pkg, pr);
            break;
        }

        g_hiprf->exit(pkg);
        cid = g_hiprf->enter(pkg);
    }
    return 1;
}

int32 LOD_r_ATOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
    uint32 cid = g_hiprf->enter(pkg);
    while (cid != 0)
    {
        switch (cid)
        {
        case 'AINF':
            LOD_r_AINF(pkg, pr);
            break;
        case 'AHDR':
            LOD_r_AHDR(pkg, pr);
            break;
        }
        g_hiprf->exit(pkg);
        cid = g_hiprf->enter(pkg);
    }
    return 1;
}

#ifdef NON_MATCHING
// reordering
int32 LOD_r_AINF(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
    int32 ival = 0;
    g_hiprf->readLongs(pkg, &ival, 1);
    return 1;
}
#endif

int32 LOD_r_AHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
    int32 ival = 0;

    g_hiprf->readLongs(pkg, &ival, 1);
    st_PACKER_ATOC_NODE* assnode = PKR_newassnode(pr, ival);
    assnode->ownpr = pr;
    assnode->ownpkg = pkg;
    XOrdAppend(&pr->asstoc, assnode);

    g_hiprf->readLongs(pkg, &ival, 1);
    assnode->asstype = ival;
    assnode->typeref = PKR_type2typeref(assnode->asstype, pr->types);

    g_hiprf->readLongs(pkg, &ival, 1);
    assnode->d_off = ival;

    g_hiprf->readLongs(pkg, &ival, 1);
    assnode->d_size = ival;
    assnode->readrem = ival;
    assnode->readcnt = 0;
    if (assnode->d_size < 1)
    {
        assnode->loadflag |= 0x200000;
    }

    g_hiprf->readLongs(pkg, &ival, 1);
    assnode->d_pad = ival;

    g_hiprf->readLongs(pkg, &ival, 1);
    assnode->infoflag = ival;

    uint32 cid = g_hiprf->enter(pkg);
    while (cid != 0)
    {
        switch (cid)
        {
        case 'ADBG':
            LOD_r_ADBG(pkg, pr, assnode);
        }
        g_hiprf->exit(pkg);
        cid = g_hiprf->enter(pkg);
    }

    int32 isdup = PKR_FRIEND_assetIsGameDup(assnode->aid, pr, assnode->d_size, assnode->asstype,
                                            assnode->d_chksum, NULL);
    if (isdup)
    {
        assnode->loadflag |= 0x100000;
    }
    return 1;
}

#ifdef NON_MATCHING
// uses reordering and uses .rodata
int32 LOD_r_ADBG(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr, st_PACKER_ATOC_NODE* assnode)
{
    int32 ival = 0;
    int8 tmpbuf[256] = {};

    g_hiprf->readLongs(pkg, &ival, 1);
    assnode->assalign = ival;

    g_hiprf->readString(pkg, tmpbuf);
    tmpbuf[0] = 0;

    g_hiprf->readString(pkg, tmpbuf);

    if (pr->subver > 1)
    {
        g_hiprf->readLongs(pkg, &ival, 1);
        assnode->d_chksum = ival;
    }

    return 1;
}
#endif

int32 LOD_r_LTOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
    uint32 cid = g_hiprf->enter(pkg);
    while (cid != 0)
    {
        switch (cid)
        {
        case 'LINF':
            LOD_r_LINF(pkg, pr);
            break;
        case 'LHDR':
            LOD_r_LHDR(pkg, pr);
            break;
        }
        g_hiprf->exit(pkg);
        cid = g_hiprf->enter(pkg);
    }
    return 1;
}

#ifdef NON_MATCHING
// reordering
int32 LOD_r_LINF(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
    int32 ival = 0;
    g_hiprf->readLongs(pkg, &ival, 1);
    return 1;
}
#endif

#ifdef NON_MATCHING
// reordering
int32 LOD_r_LHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
    int32 i;
    int32 ival = 0;
    int32 refcnt = 0;

    g_hiprf->readLongs(pkg, &ival, 1);
    en_LAYER_TYPE laytyp = (en_LAYER_TYPE)ival;
    g_hiprf->readLongs(pkg, &refcnt, 1);
    st_PACKER_LTOC_NODE* laynode = PKR_newlaynode(laytyp, refcnt);
    XOrdAppend(&pr->laytoc, laynode);

    for (i = 0; i < refcnt; i++)
    {
        g_hiprf->readLongs(pkg, &ival, 1);
        int32 idx = XOrdLookup(&pr->asstoc, (void*)ival, OrdTest_R_AssetID);
        st_PACKER_ATOC_NODE* assnode = (st_PACKER_ATOC_NODE*)pr->asstoc.list[idx];
        XOrdAppend(&laynode->assref, assnode);

        if (i != refcnt - 1)
        {
            laynode->laysize += assnode->d_size + assnode->d_pad;
        }
        else
        {
            laynode->laysize += assnode->d_size;
        }
    }

    if (laynode->laysize > 0)
    {
        laynode->laysize = laynode->laysize + 0x7ff & 0xfffff800;
    }

    uint32 cid = g_hiprf->enter(pkg);
    while (cid != NULL)
    {
        switch (cid)
        {
        case 'LDBG':
            LOD_r_LDBG(pkg, pr, laynode);
            break;
        }
        g_hiprf->exit(pkg);
        cid = g_hiprf->enter(pkg);
    }
    return 1;
}
#endif

int32 LOD_r_LDBG(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr, st_PACKER_LTOC_NODE* laynode)
{
    int32 ivar = 0;
    if (pr->subver > 1)
    {
        g_hiprf->readLongs(pkg, &ivar, 1);
        laynode->chksum = ivar;
    }
    return 1;
}

int32 LOD_r_STRM(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
    uint32 cid = g_hiprf->enter(pkg);
    while (cid != 0)
    {
        switch (cid)
        {
        case 'DHDR':
            LOD_r_DHDR(pkg, pr);
            break;
        case 'DPAK':
            LOD_r_DPAK(pkg, pr);
            break;
        }
        g_hiprf->exit(pkg);
        cid = g_hiprf->enter(pkg);
    }
    return 1;
}

#ifdef NON_MATCHING
// reordering
int32 LOD_r_DHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
    int32 ivar = 0;
    g_hiprf->readLongs(pkg, &ivar, 1);
    return 1;
}
#endif

int32 LOD_r_DPAK(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
    return 1;
}

void PKR_spew_verhist()
{
}

st_PACKER_ASSETTYPE* PKR_type2typeref(uint32 asstype, st_PACKER_ASSETTYPE* types)
{
    st_PACKER_ASSETTYPE* da_type = NULL;
    if (types != NULL)
    {
        for (st_PACKER_ASSETTYPE* tmptype = types; tmptype->typetag != 0; tmptype++)
        {
            if (tmptype->typetag == asstype)
            {
                da_type = tmptype;
                break;
            }
        }
    }
    if (da_type == NULL)
    {
        xUtil_idtag2string(asstype, 0);
    }
    return da_type;
}

#if 0
// Probably func match, weird regalloc
void PKR_bld_typecnt(st_PACKER_READ_DATA* pr)
{
    st_PACKER_LTOC_NODE* laynode;
    st_PACKER_ATOC_NODE* assnode;
    int32 j;
    int32 i;
    int32 typcnt[129] = {};
    st_XORDEREDARRAY* tmplist;
    uint32 lasttype = 0;
    int32 lastidx = 0;

    for (i = 0; i < pr->laytoc.cnt; i++)
    {
        laynode = (st_PACKER_LTOC_NODE*)pr->laytoc.list[i];
        for (j = 0; j < laynode->assref.cnt; j++)
        {
            assnode = (st_PACKER_ATOC_NODE*)laynode->assref.list[j];
            if (!(assnode->loadflag & 0x100000) && !(assnode->loadflag & 0x200000))
            {
                int32 idx;
                if (lasttype != 0 && assnode->asstype == lasttype)
                {
                    idx = lastidx;
                }
                else
                {
                    idx = PKR_typeHdlr_idx(pr, assnode->asstype);
                    lastidx = idx;
                    lasttype = assnode->asstype;
                }

                if (idx < 0)
                {
                    xUtil_idtag2string(assnode->asstype, 0);
                    assnode->Name();
                    typcnt[128]++;
                }
                else
                {
                    typcnt[idx]++;
                }
            }
        }
    }

    for (i = 0; i < 129; i++)
    {
        if (typcnt[i] >= 1)
        {
            XOrdInit(&pr->typelist[i], typcnt[i] > 1 ? typcnt[i] : 2, false);
        }
    }

    for (i = 0; i < pr->laytoc.cnt; i++)
    {
        st_PACKER_LTOC_NODE* laynode = (st_PACKER_LTOC_NODE*)pr->laytoc.list[i];
        for (j = 0; j < laynode->assref.cnt; j++)
        {
            st_PACKER_ATOC_NODE* assnode = (st_PACKER_ATOC_NODE*)laynode->assref.list[j];
            if (!(assnode->loadflag & 0x100000) && !(assnode->loadflag & 0x200000))
            {
                int32 idx;
                if (lasttype != 0 && assnode->asstype == lasttype)
                {
                    idx = lastidx;
                }
                else
                {
                    idx = PKR_typeHdlr_idx(pr, assnode->asstype);
                    lastidx = idx;
                    lasttype = assnode->asstype;
                }

                st_XORDEREDARRAY* tmplist;
                if (idx < 0)
                {
                    tmplist = &pr->typelist[128];
                }
                else
                {
                    tmplist = &pr->typelist[idx];
                }
                XOrdAppend(tmplist, assnode);
            }
        }
    }
}
#endif

int32 PKR_typeHdlr_idx(st_PACKER_READ_DATA* pr, uint32 type)
{
    int32 idx = -1;
    int i = 0;
    st_PACKER_ASSETTYPE* tmptype = pr->types;
    while (tmptype->typetag != 0)
    {
        if (tmptype->typetag == type)
        {
            idx = i;
            break;
        }
        i++;
        tmptype++;
    }

    return idx;
}

void PKR_alloc_chkidx()
{
}

void* PKR_getmem(uint32 id, int32 amount, uint32 ui, int32 align)
{
    return PKR_getmem(id, amount, ui, align, false, NULL);
}

void* PKR_getmem(uint32 id, int32 amount, uint32, int32 align, int32 isTemp, int8** memtrue)
{
    if (amount == 0)
    {
        return NULL;
    }

    void* memptr;

    if (isTemp)
    {
        memptr = xMemPushTemp(amount + align);

        if (memtrue != NULL)
        {
            *memtrue = (int8*)memptr;
        }

        if (align != 0)
        {
            // TODO: wtf is this
            memptr = (void*)(-align & (uint32)((int32)memptr + align - 1));
        }
    }
    else
    {
        memptr = xMemAlloc(gActiveHeap, amount, align);
    }

    if (memptr != NULL)
    {
        memset(memptr, 0, amount);
    }

    g_memalloc_pair++;
    g_memalloc_runtot += amount;
    if (g_memalloc_runtot < 0)
    {
        g_memalloc_runtot = amount;
    }

    if (memptr != NULL)
    {
        xUtil_idtag2string(id, 0);
    }
    else
    {
        xUtil_idtag2string(id, 0);
    }

    return memptr;
}

void PKR_relmem(uint32 id, int32 blksize, void* memptr, uint32, int32 isTemp)
{
    g_memalloc_pair--;
    g_memalloc_runfree += blksize;
    if (g_memalloc_runfree < 0)
    {
        g_memalloc_runfree = blksize;
    }

    xUtil_idtag2string(id, 0);
    if (memptr != NULL && blksize > 0)
    {
        if (isTemp)
        {
            xMemPopTemp(memptr);
        }
        else
        {
            xUtil_idtag2string(id, 1);
        }
    }
}

void PKR_push_memmark()
{
    xMemPushBase();
}

void PKR_pop_memmark()
{
    xMemPopBase(xMemGetBase() - 1);
}

int8* st_PACKER_ATOC_NODE::Name() const
{
    return xpkrsvc_strings + 82;
}
