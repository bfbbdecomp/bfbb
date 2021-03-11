#include "xpkrsvc.h"

#include <types.h>
#include <string.h>

#include "xhipio.h"

extern st_PACKER_READ_FUNCS g_pkr_read_funcmap_original;
extern st_PACKER_READ_FUNCS g_pkr_read_funcmap;
extern st_PACKER_READ_DATA g_readdatainst[16];

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
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_ReadDone__FP19st_PACKER_READ_DATA")

// func_8003978C
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_SetActive__FP19st_PACKER_READ_DATA13en_LAYER_TYPE")

// func_800398AC
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s",                                                         \
                   "PKR_parse_TOC__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// func_80039A18
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_LoadStep_Async__Fv")

// func_80039C90
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s",                                                         \
                   "PKR_LayerMemReserve__FP19st_PACKER_READ_DATAP19st_PACKER_LTOC_NODE")

// func_80039D88
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s",                                                         \
                   "PKR_LayerMemRelease__FP19st_PACKER_READ_DATAP19st_PACKER_LTOC_NODE")

// func_80039E68
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_drv_guardLayer__FP19st_PACKER_LTOC_NODE")

// func_80039E6C
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_drv_guardVerify__FP19st_PACKER_LTOC_NODE")

// func_80039E74
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_layerLoadDest__F13en_LAYER_TYPE")

// func_80039EBC
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_layerTypeNeedsXForm__F13en_LAYER_TYPE")

// func_80039EFC
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s",                                                         \
                   "PKR_findNextLayerToLoad__FPP19st_PACKER_READ_DATAPP19st_PACKER_LTOC_NODE")

// func_80039FEC
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_updateLayerAssets__FP19st_PACKER_LTOC_NODE")

// func_8003A0DC
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_xformLayerAssets__FP19st_PACKER_LTOC_NODE")

// func_8003A180
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_xform_asset__FP19st_PACKER_ATOC_NODEi")

// func_8003A2D4
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_FindAsset__FP19st_PACKER_READ_DATAUi")

// func_8003A354
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_LoadLayer__FP19st_PACKER_READ_DATA13en_LAYER_TYPE")

// func_8003A35C
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_LoadAsset__FP19st_PACKER_READ_DATAUiPCcPv")

// func_8003A37C
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_GetAssetSize__FP19st_PACKER_READ_DATAUi")

// func_8003A3F8
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_AssetCount__FP19st_PACKER_READ_DATAUi")

// func_8003A458
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_AssetByType__FP19st_PACKER_READ_DATAUiiPUi")

// func_8003A508
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_IsAssetReady__FP19st_PACKER_READ_DATAUi")

// func_8003A57C
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_getPackTimestamp__FP19st_PACKER_READ_DATA")

// func_8003A584
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_Disconnect__FP19st_PACKER_READ_DATA")

// func_8003A5D0
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKRAssetIDFromInst__FPv")

// func_8003A5D8
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_AssetName__FP19st_PACKER_READ_DATAUi")

// func_8003A64C
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_GetBaseSector__FP19st_PACKER_READ_DATA")

// func_8003A654
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s",                                                         \
                   "PKR_GetAssetInfo__FP19st_PACKER_READ_DATAUiP20st_PKR_ASSET_TOCINFO")

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
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "Name__19st_PACKER_ATOC_NODECFv")
