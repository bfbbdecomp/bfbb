#include "iEnv.h"

#include "iModel.h"

#include "iCamera.h"
#include "xMemMgr.h"

static int32 sBeginDrawFX;
static RpWorld* sPipeWorld;
static RwCamera* sPipeCamera;
static iEnv* lastEnv;

const static RwBBox lbl_80260130 = { 1000.0f, 1000.0f, 1000.0f, -1000.0f, -1000.0f, -1000.0f };

static RpAtomic* SetPipelineCB(RpAtomic* atomic, void* data)
{
    if (RwCameraBeginUpdate(sPipeCamera))
    {
        RpAtomicInstance(atomic);
        RwCameraEndUpdate(sPipeCamera);
    }

    if (data)
    {
        RpAtomicSetPipeline(atomic, (RxPipeline*)data);
    }

    return atomic;
}

static void iEnvSetBSP(iEnv* env, int32 envDataType, RpWorld* bsp)
{
    if (envDataType == 0)
    {
        env->world = bsp;
    }
    else if (envDataType == 1)
    {
        env->collision = bsp;
    }
    else if (envDataType == 2)
    {
        env->fx = bsp;
    }
    else if (envDataType == 3)
    {
        env->camera = bsp;
    }
}

#ifdef NON_MATCHING
void iEnvLoad(iEnv* env, const void* data, uint32, int32 dataType)
{
    RpWorld* bsp = (RpWorld*)data;
    xJSPHeader* jsp = (xJSPHeader*)data;

    if (jsp->idtag[0] == 'J' && jsp->idtag[1] == 'S' && jsp->idtag[2] == 'P' &&
        jsp->idtag[3] == '\0')
    {
        if (dataType == 0)
        {
            RwBBox tmpbbox = { 1000.0f, 1000.0f, 1000.0f, -1000.0f, -1000.0f, -1000.0f };

            env->world = RpWorldCreate(&tmpbbox);

            sPipeCamera = iCameraCreate(640, 480, 0);
            sPipeWorld = env->world;

            // non-matching: sPipeCamera and sPipeWorld loads are skipped

            RpWorldAddCamera(sPipeWorld, sPipeCamera);

            env->jsp = jsp;

            RpClumpForAllAtomics(env->jsp->clump, SetPipelineCB, NULL);
            xClumpColl_InstancePointers(env->jsp->colltree, env->jsp->clump);

            RpWorldRemoveCamera(sPipeWorld, sPipeCamera);

            iCameraDestroy(sPipeCamera);

            sPipeWorld = NULL;
            sPipeCamera = NULL;
        }
    }
    else
    {
        if (dataType == 0)
        {
            env->jsp = NULL;
        }

        iEnvSetBSP(env, dataType, bsp);
    }

    if (dataType == 0)
    {
        env->memlvl = xMemGetBase();
    }
}
#endif

void iEnvFree(iEnv* env)
{
    _rwFrameSyncDirty();

    RpWorldDestroy(env->world);
    env->world = NULL;

    if (env->fx)
    {
        RpWorldDestroy(env->fx);
        env->fx = NULL;
    }

    if (env->collision)
    {
        RpWorldDestroy(env->collision);
        env->collision = NULL;
    }
}

void iEnvDefaultLighting(iEnv*)
{
}

void iEnvLightingBasics(iEnv*, xEnvAsset*)
{
}

// This is named JspPS2_ClumpRender on PS2
static void Jsp_ClumpRender(RpClump* clump, xJSPNodeInfo* nodeInfo)
{
    int32 backcullon = 1;
    int32 zbufferon = 1;
    RwLLLink* cur = rwLinkListGetFirstLLLink(&clump->atomicList);
    RwLLLink* end = rwLinkListGetTerminator(&clump->atomicList);

    while (cur != end)
    {
        RpAtomic* apAtom = rwLLLinkGetData(cur, RpAtomic, inClumpLink);

        if (RpAtomicGetFlags(apAtom) & rpATOMICRENDER)
        {
            RwFrame* frame = RpAtomicGetFrame(apAtom);

            if (!iModelCull(apAtom, &frame->ltm))
            {
                if (backcullon)
                {
                    if (nodeInfo->nodeFlags & 0x4)
                    {
                        backcullon = 0;
                        RwRenderStateSet(rwRENDERSTATECULLMODE, (void*)rwCULLMODECULLNONE);
                    }
                }
                else
                {
                    if (!(nodeInfo->nodeFlags & 0x4))
                    {
                        backcullon = 1;
                        RwRenderStateSet(rwRENDERSTATECULLMODE, (void*)rwCULLMODECULLBACK);
                    }
                }

                if (zbufferon)
                {
                    if (nodeInfo->nodeFlags & 0x2)
                    {
                        zbufferon = 0;
                        RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, (void*)FALSE);
                    }
                }
                else
                {
                    if (!(nodeInfo->nodeFlags & 0x2))
                    {
                        zbufferon = 1;
                        RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, (void*)TRUE);
                    }
                }

                RpAtomicRender(apAtom);
            }
        }

        cur = rwLLLinkGetNext(cur);
        nodeInfo++;
    }
}

void iEnvRender(iEnv* env)
{
    RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)rwBLENDSRCALPHA);
    RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)rwBLENDINVSRCALPHA);

    if (env->jsp)
    {
        Jsp_ClumpRender(env->jsp->clump, env->jsp->jspNodeList);
    }
    else
    {
        RpWorldRender(env->world);
    }

    lastEnv = env;
}

void iEnvEndRenderFX(iEnv*)
{
    iEnv* env = lastEnv;

    if (env->fx && globalCamera && sBeginDrawFX)
    {
        RpWorldRemoveCamera(env->fx, globalCamera);
        RpWorldAddCamera(env->world, globalCamera);

        sBeginDrawFX = 0;
    }
}
