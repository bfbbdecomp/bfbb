#include "xstransvc.h"

#include <types.h>
#include <string.h>

void XST_unlock_all();
int32 PKRShutdown();
int8* xST_xAssetID_HIPFullPath(uint32 aid, uint32* sceneID);
int32 XST_cnt_locked();
int32 XST_nth_locked(int32 param1);
extern int32 g_straninit;
extern st_PACKER_ASSETTYPE* g_typeHandlers;
extern st_STRAN_DATA g_xstdata;
extern st_PACKER_READ_FUNCS* g_pkrf;

// func_8004B108
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xSTStartup__FP19st_PACKER_ASSETTYPE")

// func_8004B154
int32 xSTShutdown(void)
{       
    g_straninit = g_straninit - 1; 

    if (g_straninit == 0)
    {
        g_typeHandlers = 0;
        XST_unlock_all();
        PKRShutdown();
    }

    return g_straninit;
}

// func_8004B194
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xSTPreLoadScene__FUiPvi")

// func_8004B344
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xSTQueueSceneAssets__FUii")

// func_8004B3B4
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xSTUnLoadScene__FUii")

// func_8004B494
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xSTLoadStep__FUi")

// func_8004B4E8
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xSTDisconnect__FUii")

// func_8004B534
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xSTSwitchScene__FUiPvPFPvf_i")

// func_8004B5E0
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xSTAssetName__FUi")

// func_8004B674
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xSTAssetName__FPv")

// func_8004B70C
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xSTFindAsset__FUiPUi")

// func_8004B818
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xSTAssetCountByType__FUi")

// func_8004B8A0
#if 1
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xSTFindAssetByType__FUiiPUi")

#else
void* xSTFindAssetByType(uint32 type, int32 idx, uint32* size)
{

    void* memptr;

	int32 scncnt;
	int32 i;
	int32 sum;
	int32 cnt;
    int32 temp;

    sum = 0;

    temp = XST_cnt_locked();

    for(i = 0; i < temp; i++)
    {
        scncnt = XST_nth_locked(i);
        //cnt = (**(code**)(g_pkrf + 0x1c))(*(undefined*)(scncnt + 8),type); (Ghidra)
        //int32(*AssetCount)(st_PACKER_READ_DATA*, uint32);
        //cnt = 0;
        cnt = g_pkrf->AssetCount((st_PACKER_READ_DATA*)(scncnt + 8), type);  

        memptr = g_pkrf->AssetByType((st_PACKER_READ_DATA*)(scncnt + 8), type, idx - sum, size);      

        if (sum <= idx)// && (idx < sum + cnt))
        {
            if(idx < sum + cnt)
            {
                break;
            }
        }      
        sum = sum + cnt;  
           
    }

    //memptr = (void *)(**(code **)(g_pkrf + 0x18))(*(undefined*)(scncnt + 8),type,idx - sum,size); (Ghidra)
    //void*(*AssetByType)(st_PACKER_READ_DATA*, uint32, int32, uint32*);
    memptr = g_pkrf->AssetByType((st_PACKER_READ_DATA*)(scncnt + 8), type, idx - sum, size);
    return memptr;
}

#endif

// func_8004B95C
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xSTGetAssetInfo__FUiP20st_PKR_ASSET_TOCINFO")

// func_8004BA18
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xSTGetAssetInfoByType__FUiiP20st_PKR_ASSET_TOCINFO")

// func_8004BB64
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xSTGetAssetInfoInHxP__FUiP20st_PKR_ASSET_TOCINFOUi")

// func_8004BC34
int8* xST_xAssetID_HIPFullPath(uint32 aid)
{
    return xST_xAssetID_HIPFullPath(aid,0);
}

// func_8004BC58
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "xST_xAssetID_HIPFullPath__FUiPUi")

// func_8004BCEC
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "XST_PreLoadScene__FP14st_STRAN_SCENEPCc")

// func_8004BD58
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "XST_translate_sid__FUiPc")

// func_8004BDB4
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "XST_translate_sid_path__FUiPc")

// func_8004BE60
void XST_reset_raw()
{
    memset(&g_xstdata,0,0x1144);
}

// func_8004BE90
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "XST_lock_next__Fv")

// func_8004BF38
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "XST_unlock__FP14st_STRAN_SCENE")

// func_8004BF90
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "XST_unlock_all__Fv")

// func_8004C008
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "XST_get_rawinst__Fi")

// func_8004C01C
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "XST_cnt_locked__Fv")

// func_8004C0E4
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "XST_nth_locked__Fi")

// func_8004C144
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "XST_find_bySID__FUii")

// func_8004C210
#pragma GLOBAL_ASM("asm/Core/x/xstransvc.s", "iFileAsyncService__Fv")
