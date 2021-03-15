#include "xpkrsvc.h"

#include <types.h>
#include <string.h>

#include "xhipio.h"
#include "xutil.h"

extern int8 xpkrsvc_strings[];

extern st_PACKER_READ_FUNCS g_pkr_read_funcmap_original;
extern st_PACKER_READ_FUNCS g_pkr_read_funcmap; // = g_pkr_read_funcmap_original;
st_PACKER_READ_DATA g_readdatainst[16] = {};

extern st_HIPLOADFUNCS* g_hiprf;
extern uint32 g_loadlock;
extern int32 pkr_sector_size;
extern volatile int32 g_packinit;

// func_800392A0
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

// func_800392C0
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKRStartup__Fv")
#else
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

// func_80039318
void st_PACKER_READ_FUNCS::operator=(const st_PACKER_READ_FUNCS& other)
{
    this->api_ver = other.api_ver;
    this->Init = other.Init;
    this->Done = other.Done;
    this->LoadLayer = other.LoadLayer;
    this->GetAssetSize = other.GetAssetSize;
    this->LoadAsset = other.LoadAsset;
    this->AssetByType = other.AssetByType;
    this->AssetCount = other.AssetCount;
    this->IsAssetReady = other.IsAssetReady;
    this->SetActive = other.SetActive;
    this->AssetName = other.AssetName;
    this->GetBaseSector = other.GetBaseSector;
    this->GetAssetInfo = other.GetAssetInfo;
    this->GetAssetInfoByType = other.GetAssetInfoByType;
    this->PkgHasAsset = other.PkgHasAsset;
    this->PkgTimeStamp = other.PkgTimeStamp;
    this->PkgDisconnect = other.PkgDisconnect;
}

// func_800393A4
int32 PKRShutdown()
{
    g_packinit--;
    return g_packinit;
}

// func_800393B8
int32 PKRLoadStep(int32)
{
    return PKR_LoadStep_Async();
}

// func_800393D8
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

// func_800395CC
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

// func_8003978C
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_SetActive__FP19st_PACKER_READ_DATA13en_LAYER_TYPE")
#else
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

// func_800398AC
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

// func_80039A18
extern st_PACKER_READ_DATA* curpr_PKR_LoadStep_Async__Fv;
extern signed char init_PKR_LoadStep_Async__Fv;
extern st_PACKER_LTOC_NODE* asynlay_PKR_LoadStep_Async__Fv;
extern signed char init2_curpr_PKR_LoadStep_Async__Fv;
int32 PKR_LoadStep_Async()
{
    int32 rc;
    if (!init_PKR_LoadStep_Async__Fv)
    {
        curpr_PKR_LoadStep_Async__Fv = NULL;
        init_PKR_LoadStep_Async__Fv = true;
    }
    if (!init2_curpr_PKR_LoadStep_Async__Fv)
    {
        asynlay_PKR_LoadStep_Async__Fv = NULL;
        init2_curpr_PKR_LoadStep_Async__Fv = true;
    }

    if (asynlay_PKR_LoadStep_Async__Fv == NULL)
    {
        PKR_findNextLayerToLoad(&curpr_PKR_LoadStep_Async__Fv, &asynlay_PKR_LoadStep_Async__Fv);

        if (asynlay_PKR_LoadStep_Async__Fv != NULL)
        {
            if (PKR_layerLoadDest(asynlay_PKR_LoadStep_Async__Fv->laytyp) != PKR_LDDEST_SKIP &&
                asynlay_PKR_LoadStep_Async__Fv->laysize > 1 &&
                asynlay_PKR_LoadStep_Async__Fv->assref.cnt > 0)
            {
                asynlay_PKR_LoadStep_Async__Fv->laymem = PKR_LayerMemReserve(
                    curpr_PKR_LoadStep_Async__Fv, asynlay_PKR_LoadStep_Async__Fv);
                PKR_drv_guardLayer(asynlay_PKR_LoadStep_Async__Fv);
                st_PACKER_ATOC_NODE* tmpass =
                    (st_PACKER_ATOC_NODE*)asynlay_PKR_LoadStep_Async__Fv->assref.list[0];
                g_hiprf->setSpot(tmpass->ownpkg, tmpass->d_off);

                if (g_hiprf->readBytes(tmpass->ownpkg, asynlay_PKR_LoadStep_Async__Fv->laymem,
                                       asynlay_PKR_LoadStep_Async__Fv->laysize))
                {
                    asynlay_PKR_LoadStep_Async__Fv->flg_ldstat |= 0x1000000;
                }
                else
                {
                    PKR_LayerMemRelease(curpr_PKR_LoadStep_Async__Fv,
                                        asynlay_PKR_LoadStep_Async__Fv);
                    asynlay_PKR_LoadStep_Async__Fv->flg_ldstat &= 0xfcffffff;
                    curpr_PKR_LoadStep_Async__Fv = NULL;
                    asynlay_PKR_LoadStep_Async__Fv = NULL;
                }

                rc = 1;
            }
            else
            {
                rc = 1;
                asynlay_PKR_LoadStep_Async__Fv->flg_ldstat |= 0x2000000;
                asynlay_PKR_LoadStep_Async__Fv = NULL;
            }
        }
        else
        {
            rc = 0;
            curpr_PKR_LoadStep_Async__Fv = NULL;
            asynlay_PKR_LoadStep_Async__Fv = NULL;
        }
    }
    else
    {
        int32 moretodo = g_hiprf->pollRead(curpr_PKR_LoadStep_Async__Fv->pkg);
        if (moretodo == 1)
        {
            moretodo = PKR_drv_guardVerify(asynlay_PKR_LoadStep_Async__Fv);
        }

        if (!moretodo)
        {
            rc = 1;
        }
        else if (moretodo == 1)
        {
            PKR_updateLayerAssets(asynlay_PKR_LoadStep_Async__Fv);

            if (PKR_layerTypeNeedsXForm(asynlay_PKR_LoadStep_Async__Fv->laytyp))
            {
                PKR_xformLayerAssets(asynlay_PKR_LoadStep_Async__Fv);
            }

            if (PKR_layerLoadDest(asynlay_PKR_LoadStep_Async__Fv->laytyp) == PKR_LDDEST_RWHANDOFF)
            {
                PKR_LayerMemRelease(curpr_PKR_LoadStep_Async__Fv, asynlay_PKR_LoadStep_Async__Fv);
            }

            rc = 1;
            asynlay_PKR_LoadStep_Async__Fv->flg_ldstat |= 0x2000000;
            asynlay_PKR_LoadStep_Async__Fv = NULL;
        }
        else
        {
            en_PKR_LAYER_LOAD_DEST loaddest =
                PKR_layerLoadDest(asynlay_PKR_LoadStep_Async__Fv->laytyp);
            if (asynlay_PKR_LoadStep_Async__Fv->laymem != NULL && loaddest == PKR_LDDEST_RWHANDOFF)
            {
                PKR_LayerMemRelease(curpr_PKR_LoadStep_Async__Fv, asynlay_PKR_LoadStep_Async__Fv);
            }

            rc = 1;
            asynlay_PKR_LoadStep_Async__Fv->flg_ldstat &= 0xfcffffff;
            asynlay_PKR_LoadStep_Async__Fv = NULL;
            curpr_PKR_LoadStep_Async__Fv = NULL;
        }
    }

    return rc;
}

// func_80039C90
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

// func_80039D88
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

// func_80039E68
void PKR_drv_guardLayer(st_PACKER_LTOC_NODE*)
{
}

// func_80039E6C
int32 PKR_drv_guardVerify(st_PACKER_LTOC_NODE*)
{
    return 1;
}

// func_80039E74
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

// func_80039EBC
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

// func_80039EFC
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s",                                                         \
                   "PKR_findNextLayerToLoad__FPP19st_PACKER_READ_DATAPP19st_PACKER_LTOC_NODE")
#else
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

// func_80039FEC
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_updateLayerAssets__FP19st_PACKER_LTOC_NODE")
#else
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

// func_8003A0DC
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

// func_8003A180
// #pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_xform_asset__FP19st_PACKER_ATOC_NODEi")
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

// func_8003A2D4
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

// func_8003A354
int32 PKR_LoadLayer(st_PACKER_READ_DATA* pr, en_LAYER_TYPE layer)
{
    return 0;
}

// func_8003A35C
void* PKR_LoadAsset(st_PACKER_READ_DATA* pr, uint32 aid, const int8*, void*)
{
    return PKR_FindAsset(pr, aid);
}

// func_8003A37C
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

// func_8003A3F8
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

// func_8003A458
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

// func_8003A508
// #pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_IsAssetReady__FP19st_PACKER_READ_DATAUi")
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

// func_8003A57C
uint32 PKR_getPackTimestamp(st_PACKER_READ_DATA* pr)
{
    return pr->time_made;
}

// func_8003A584
void PKR_Disconnect(st_PACKER_READ_DATA* pr)
{
    if (pr->pkg != NULL)
    {
        g_hiprf->destroy(pr->pkg);
        pr->pkg = NULL;
    }
}

// func_8003A5D0
uint32 PKRAssetIDFromInst(void* inst)
{
    return ((st_PACKER_ATOC_NODE*)inst)->aid;
}

// func_8003A5D8
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

// func_8003A64C
uint32 PKR_GetBaseSector(st_PACKER_READ_DATA* pr)
{
    return pr->base_sector;
}

// func_8003A654
#ifndef NON_MATCHING
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s",                                                         \
                   "PKR_GetAssetInfo__FP19st_PACKER_READ_DATAUiP20st_PKR_ASSET_TOCINFO")
#else
// Unnecessary clrlwi instruction
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
    return idx >= 0;
}
#endif

// func_8003A720
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s",                                                         \
                   "PKR_GetAssetInfoByType__FP19st_PACKER_READ_DATAUiiP20st_PKR_ASSET_TOCINFO")

// func_8003A824
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_PkgHasAsset__FP19st_PACKER_READ_DATAUi")

// func_8003A89C
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s",                                                         \
                   "PKR_FRIEND_assetIsGameDup__FUiPC19st_PACKER_READ_DATAiUiUiPc")

// func_8003AA28
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_makepool_anode__FP19st_PACKER_READ_DATAi")

// func_8003AAAC
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_kiilpool_anode__FP19st_PACKER_READ_DATA")

// func_8003AB0C
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_newassnode__FP19st_PACKER_READ_DATAUi")

// func_8003AB6C
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_newlaynode__F13en_LAYER_TYPEi")

// func_8003ABF8
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_oldlaynode__FP19st_PACKER_LTOC_NODE")

// func_8003AC50
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "OrdComp_R_Asset__FPvPv")

// func_8003AC7C
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "OrdTest_R_AssetID__FPCvPv")

// func_8003ACA4
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_HIPA__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// func_8003ACB8
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_PACK__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// func_8003AE0C
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_PVER__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// func_8003AEE8
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_PFLG__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// func_8003AF28
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_PCNT__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// func_8003B000
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_PCRT__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// func_8003B0B4
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_PMOD__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// func_8003B108
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s",                                                         \
                   "ValidatePlatform__FP14st_HIPLOADDATAP19st_PACKER_READ_DATAiPcPcPcPc")

// func_8003B3E0
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_PLAT__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// func_8003B62C
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_DICT__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// func_8003B704
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_ATOC__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// func_8003B7CC
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_AINF__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// func_8003B80C
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_AHDR__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// func_8003BA24
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s",                                                         \
                   "LOD_r_ADBG__FP14st_HIPLOADDATAP19st_PACKER_READ_DATAP19st_PACKER_ATOC_NODE")

// func_8003BB28
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_LTOC__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// func_8003BBF0
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_LINF__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// func_8003BC30
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_LHDR__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// func_8003BDE8
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s",                                                         \
                   "LOD_r_LDBG__FP14st_HIPLOADDATAP19st_PACKER_READ_DATAP19st_PACKER_LTOC_NODE")

// func_8003BE48
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_STRM__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// func_8003BF10
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_DHDR__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// func_8003BF50
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_DPAK__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// func_8003BF58
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_spew_verhist__Fv")

// func_8003BF5C
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_type2typeref__FUiP19st_PACKER_ASSETTYPE")

// func_8003BFC4
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_bld_typecnt__FP19st_PACKER_READ_DATA")

// func_8003C1F8
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_typeHdlr_idx__FP19st_PACKER_READ_DATAUi")

// func_8003C230
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_alloc_chkidx__Fv")

// func_8003C234
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_getmem__FUiiUii")

// func_8003C25C
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_getmem__FUiiUiiiPPc")

// func_8003C350
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_relmem__FUiiPvUii")

// func_8003C400
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_push_memmark__Fv")

// func_8003C420
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_pop_memmark__Fv")

// func_8003C448
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "__sinit_xpkrsvc_cpp")

// func_8003C488
int8* st_PACKER_ATOC_NODE::Name() const
{
    return xpkrsvc_strings + 82;
}
