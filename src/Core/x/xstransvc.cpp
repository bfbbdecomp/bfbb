#include "xstransvc.h"

#include <types.h>

// xSTStartup(st_PACKER_ASSETTYPE*)
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xSTStartup__FP19st_PACKER_ASSETTYPE")

// xSTShutdown()
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xSTShutdown__Fv")

// xSTPreLoadScene(unsigned int,void*,int)
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xSTPreLoadScene__FUiPvi")

// xSTQueueSceneAssets(unsigned int,int)
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xSTQueueSceneAssets__FUii")

// xSTUnLoadScene(unsigned int,int)
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xSTUnLoadScene__FUii")

// xSTLoadStep(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xSTLoadStep__FUi")

// xSTDisconnect(unsigned int,int)
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xSTDisconnect__FUii")

// xSTSwitchScene(unsigned int,void*,int (*)(void*, float))
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xSTSwitchScene__FUiPvPFPvf_i")

// xSTAssetName(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xSTAssetName__FUi")

// xSTAssetName(void*)
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xSTAssetName__FPv")

// xSTFindAsset(unsigned int,unsigned int*)
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xSTFindAsset__FUiPUi")

// xSTAssetCountByType(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xSTAssetCountByType__FUi")

// xSTFindAssetByType(unsigned int,int,unsigned int*)
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xSTFindAssetByType__FUiiPUi")

// xSTGetAssetInfo(unsigned int,st_PKR_ASSET_TOCINFO*)
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xSTGetAssetInfo__FUiP20st_PKR_ASSET_TOCINFO")

// xSTGetAssetInfoByType(unsigned int,int,st_PKR_ASSET_TOCINFO*)
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xSTGetAssetInfoByType__FUiiP20st_PKR_ASSET_TOCINFO")

// xSTGetAssetInfoInHxP(unsigned int,st_PKR_ASSET_TOCINFO*,unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xSTGetAssetInfoInHxP__FUiP20st_PKR_ASSET_TOCINFOUi")

// xST_xAssetID_HIPFullPath(unsigned int)
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xST_xAssetID_HIPFullPath__FUi")

// xST_xAssetID_HIPFullPath(unsigned int,unsigned int*)
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xST_xAssetID_HIPFullPath__FUiPUi")

// XST_PreLoadScene(st_STRAN_SCENE*,const char*)
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "XST_PreLoadScene__FP14st_STRAN_SCENEPCc")

// XST_translate_sid(unsigned int,char*)
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "XST_translate_sid__FUiPc")

// XST_translate_sid_path(unsigned int,char*)
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "XST_translate_sid_path__FUiPc")

// XST_reset_raw()
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "XST_reset_raw__Fv")

// XST_lock_next()
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "XST_lock_next__Fv")

// XST_unlock(st_STRAN_SCENE*)
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "XST_unlock__FP14st_STRAN_SCENE")

// XST_unlock_all()
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "XST_unlock_all__Fv")

// XST_get_rawinst(int)
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "XST_get_rawinst__Fi")

// XST_cnt_locked()
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "XST_cnt_locked__Fv")

// XST_nth_locked(int)
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "XST_nth_locked__Fi")

// XST_find_bySID(unsigned int,int)
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "XST_find_bySID__FUii")

// iFileAsyncService()
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "iFileAsyncService__Fv")
