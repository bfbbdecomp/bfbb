#include "iEnv.h"

#include <types.h>

static void* lbl_803CBAB0;
static void* lbl_803CBAB4;
static RwCamera* sPipeCamera;
static iEnv* lastEnv;

const static float lbl_80260130[6] = { 1000.0f, 1000.0f, 1000.0f, -1000.0f, -1000.0f, -1000.0f };

RpAtomic* SetPipelineCB(RpAtomic* param_1, void* param_2)
{
    if (RwCameraBeginUpdate(sPipeCamera) != NULL)
    {
        RpAtomicInstance(param_1);
        RwCameraEndUpdate(sPipeCamera);
    }
    if (param_2 != NULL)
    {
        param_1->pipeline = (RxPipeline*)param_2;
    }
    return param_1;
}

void iEnvSetBSP(iEnv* env, int32 envDataType, RpWorld* bsp)
{
    if (envDataType == 0)
    {
        env->world = bsp;
        return;
    }
    if (envDataType == 1)
    {
        env->collision = bsp;
        return;
    }
    if (envDataType == 2)
    {
        env->fx = bsp;
        return;
    }
    if (envDataType == 3)
    {
        env->camera = bsp;
        return;
    }
}

// func_800C2F50
#pragma GLOBAL_ASM("asm/Core/p2/iEnv.s", "iEnvLoad__FP4iEnvPCvUii")

void iEnvFree(iEnv* param_1)
{
    _rwFrameSyncDirty();
    RpWorldDestroy(param_1->world);
    param_1->world = NULL;
    if (param_1->fx != NULL)
    {
        RpWorldDestroy(param_1->fx);
        param_1->fx = NULL;
    }
    if (param_1->collision != NULL)
    {
        RpWorldDestroy(param_1->collision);
        param_1->collision = NULL;
    }
    return;
}

void iEnvDefaultLighting(iEnv* param)
{
}

void iEnvLightingBasics(iEnv* param_1, xEnvAsset* param_2)
{
}

// func_800C3128
#pragma GLOBAL_ASM("asm/Core/p2/iEnv.s", "Jsp_ClumpRender__FP7RpClumpP12xJSPNodeInfo")

#ifdef NON_MATCHING
// this cant cant possibly match until we add the type for xJSPHeader
void iEnvRender(iEnv* param_1)
{
    RwRenderStateSet(rwRENDERSTATESRCBLEND, 5);
    RwRenderStateSet(rwRENDERSTATEDESTBLEND, 6);
    if (param_1->jsp == NULL)
    {
        RpWorldRender(param_1->world);
    }
    else
    {
        Jsp_ClumpRender(param_1->jsp->field_0xc, param_1->jsp->field_0x14);
    }
    lastEnv = param_1;
    return;
}
#else
#pragma GLOBAL_ASM("asm/Core/p2/iEnv.s", "iEnvRender__FP4iEnv")
#endif

// func_800C329C
#pragma GLOBAL_ASM("asm/Core/p2/iEnv.s", "iEnvEndRenderFX__FP4iEnv")
