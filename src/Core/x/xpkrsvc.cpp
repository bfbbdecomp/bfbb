#include "xpkrsvc.h"

#include <types.h>

// PKRGetReadFuncs(int)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKRGetReadFuncs__Fi")

// PKRStartup()
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKRStartup__Fv")

// st_PACKER_READ_FUNCS::operator =(const st_PACKER_READ_FUNCS&)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "__as__20st_PACKER_READ_FUNCSFRC20st_PACKER_READ_FUNCS")

// PKRShutdown()
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKRShutdown__Fv")

// PKRLoadStep(int)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKRLoadStep__Fi")

// PKR_ReadDone(st_PACKER_READ_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_ReadDone__FP19st_PACKER_READ_DATA")

// PKR_parse_TOC(st_HIPLOADDATA*,st_PACKER_READ_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_parse_TOC__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// PKR_LoadStep_Async()
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_LoadStep_Async__Fv")

// PKR_LayerMemReserve(st_PACKER_READ_DATA*,st_PACKER_LTOC_NODE*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_LayerMemReserve__FP19st_PACKER_READ_DATAP19st_PACKER_LTOC_NODE")

// PKR_LayerMemRelease(st_PACKER_READ_DATA*,st_PACKER_LTOC_NODE*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_LayerMemRelease__FP19st_PACKER_READ_DATAP19st_PACKER_LTOC_NODE")

// PKR_drv_guardLayer(st_PACKER_LTOC_NODE*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_drv_guardLayer__FP19st_PACKER_LTOC_NODE")

// PKR_drv_guardVerify(st_PACKER_LTOC_NODE*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_drv_guardVerify__FP19st_PACKER_LTOC_NODE")

// PKR_layerLoadDest(en_LAYER_TYPE)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_layerLoadDest__F13en_LAYER_TYPE")

// PKR_layerTypeNeedsXForm(en_LAYER_TYPE)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_layerTypeNeedsXForm__F13en_LAYER_TYPE")

// PKR_findNextLayerToLoad(st_PACKER_READ_DATA**,st_PACKER_LTOC_NODE**)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_findNextLayerToLoad__FPP19st_PACKER_READ_DATAPP19st_PACKER_LTOC_NODE")

// PKR_updateLayerAssets(st_PACKER_LTOC_NODE*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_updateLayerAssets__FP19st_PACKER_LTOC_NODE")

// PKR_xformLayerAssets(st_PACKER_LTOC_NODE*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_xformLayerAssets__FP19st_PACKER_LTOC_NODE")

// PKR_xform_asset(st_PACKER_ATOC_NODE*,int)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_xform_asset__FP19st_PACKER_ATOC_NODEi")

// PKR_FindAsset(st_PACKER_READ_DATA*,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_FindAsset__FP19st_PACKER_READ_DATAUi")

// PKRAssetIDFromInst(void*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKRAssetIDFromInst__FPv")

// PKR_FRIEND_assetIsGameDup(unsigned int,const st_PACKER_READ_DATA*,int,unsigned int,unsigned int,char*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_FRIEND_assetIsGameDup__FUiPC19st_PACKER_READ_DATAiUiUiPc")

// PKR_makepool_anode(st_PACKER_READ_DATA*,int)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_makepool_anode__FP19st_PACKER_READ_DATAi")

// PKR_kiilpool_anode(st_PACKER_READ_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_kiilpool_anode__FP19st_PACKER_READ_DATA")

// PKR_newassnode(st_PACKER_READ_DATA*,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_newassnode__FP19st_PACKER_READ_DATAUi")

// PKR_newlaynode(en_LAYER_TYPE,int)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_newlaynode__F13en_LAYER_TYPEi")

// PKR_oldlaynode(st_PACKER_LTOC_NODE*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_oldlaynode__FP19st_PACKER_LTOC_NODE")

// LOD_r_HIPA(st_HIPLOADDATA*,st_PACKER_READ_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_HIPA__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// LOD_r_PACK(st_HIPLOADDATA*,st_PACKER_READ_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_PACK__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// LOD_r_PVER(st_HIPLOADDATA*,st_PACKER_READ_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_PVER__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// LOD_r_PFLG(st_HIPLOADDATA*,st_PACKER_READ_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_PFLG__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// LOD_r_PCNT(st_HIPLOADDATA*,st_PACKER_READ_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_PCNT__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// LOD_r_PCRT(st_HIPLOADDATA*,st_PACKER_READ_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_PCRT__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// LOD_r_PMOD(st_HIPLOADDATA*,st_PACKER_READ_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_PMOD__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// ValidatePlatform(st_HIPLOADDATA*,st_PACKER_READ_DATA*,int,char*,char*,char *,char*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "ValidatePlatform__FP14st_HIPLOADDATAP19st_PACKER_READ_DATAiPcPcPcPc")

// LOD_r_PLAT(st_HIPLOADDATA*,st_PACKER_READ_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_PLAT__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// LOD_r_DICT(st_HIPLOADDATA*,st_PACKER_READ_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_DICT__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// LOD_r_ATOC(st_HIPLOADDATA*,st_PACKER_READ_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_ATOC__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// LOD_r_AINF(st_HIPLOADDATA*,st_PACKER_READ_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_AINF__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// LOD_r_AHDR(st_HIPLOADDATA*,st_PACKER_READ_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_AHDR__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// LOD_r_ADBG(st_HIPLOADDATA*,st_PACKER_READ_DATA*,st_PACKER_ATOC_NODE*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_ADBG__FP14st_HIPLOADDATAP19st_PACKER_READ_DATAP19st_PACKER_ATOC_NODE")

// LOD_r_LTOC(st_HIPLOADDATA*,st_PACKER_READ_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_LTOC__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// LOD_r_LINF(st_HIPLOADDATA*,st_PACKER_READ_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_LINF__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// LOD_r_LHDR(st_HIPLOADDATA*,st_PACKER_READ_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_LHDR__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// LOD_r_LDBG(st_HIPLOADDATA*,st_PACKER_READ_DATA*,st_PACKER_LTOC_NODE*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_LDBG__FP14st_HIPLOADDATAP19st_PACKER_READ_DATAP19st_PACKER_LTOC_NODE")

// LOD_r_STRM(st_HIPLOADDATA*,st_PACKER_READ_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_STRM__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// LOD_r_DHDR(st_HIPLOADDATA*,st_PACKER_READ_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_DHDR__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// LOD_r_DPAK(st_HIPLOADDATA*,st_PACKER_READ_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "LOD_r_DPAK__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA")

// PKR_spew_verhist()
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_spew_verhist__Fv")

// PKR_type2typeref(unsigned int,st_PACKER_ASSETTYPE*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_type2typeref__FUiP19st_PACKER_ASSETTYPE")

// PKR_bld_typecnt(st_PACKER_READ_DATA*)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_bld_typecnt__FP19st_PACKER_READ_DATA")

// PKR_typeHdlr_idx(st_PACKER_READ_DATA*,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_typeHdlr_idx__FP19st_PACKER_READ_DATAUi")

// PKR_alloc_chkidx()
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_alloc_chkidx__Fv")

// PKR_getmem(unsigned int,int,unsigned int,int)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_getmem__FUiiUii")

// PKR_getmem(unsigned int,int,unsigned int,int,int,char**)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_getmem__FUiiUiiiPPc")

// PKR_relmem(unsigned int,int,void*,unsigned int,int)
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_relmem__FUiiPvUii")

// PKR_push_memmark()
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_push_memmark__Fv")

// PKR_pop_memmark()
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "PKR_pop_memmark__Fv")

// st_PACKER_ATOC_NODE::Name() const
#pragma GLOBAL_ASM("asm/Core/x/xpkrsvc.s", "Name__19st_PACKER_ATOC_NODECFv")
