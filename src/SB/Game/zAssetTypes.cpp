#include "zAssetTypes.h"

#include "xstransvc.h"
#include "xDebug.h"
#include "xEnv.h"
#include "xJSP.h"

#include <types.h>
#include <rwcore.h>
#include <rpworld.h>
#include <xAnim.h>

static void* Curve_Read(void* param_1, U32 param_2, void* indata, U32 insize, U32* outsize);
static void* ATBL_Read(void* param_1, U32 param_2, void* indata, U32 insize, U32* outsize);
static void ATBL_Init();
static void* RWTX_Read(void* param_1, U32 param_2, void* indata, U32 insize, U32* outsize);
static void* Model_Read(void* param_1, U32 param_2, void* indata, U32 insize, U32* outsize);
static void* BSP_Read(void* param_1, U32 param_2, void* indata, U32 insize, U32* outsize);
static void* JSP_Read(void* param_1, U32 param_2, void* indata, U32 insize, U32* outsize);
static void* SndInfoRead(void*, unsigned int, void*, unsigned int, unsigned int*);
static void Model_Unload(void*, U32);
static void BSP_Unload(void*, U32);
static void JSP_Unload(void*, U32);
static void Anim_Unload(void*, U32);
static void TextureRW3_Unload(void*, U32);
static void LightKit_Unload(void*, U32);
static void MovePoint_Unload(void*, U32);

static xJSPHeader sDummyEmptyJSP;

static u32 s_sbFootSoundA;
static u32 s_sbFootSoundB;
static u32 s_scFootSoundA;
static u32 s_scFootSoundB;
static u32 s_patFootSoundA;
static u32 s_patFootSoundB;

static st_PACKER_ASSETTYPE assetTypeHandlers[78] = {
    {'BSP ', 0, 0, BSP_Read, NULL, NULL, NULL, NULL, BSP_Unload, NULL},
    {'JSP ', 0, 0, JSP_Read, NULL, NULL, NULL, NULL, JSP_Unload, NULL},
    {'TXD '},
    {'MODL', 0, 0, Model_Read, NULL, NULL, NULL, NULL, Model_Unload, NULL},
    {'ANIM', 0, 0, NULL, NULL, NULL, NULL, NULL, Anim_Unload, NULL},
    {'RWTX', 0, 0, RWTX_Read, NULL, NULL, NULL, NULL, TextureRW3_Unload, NULL},
    {'LKIT', 0, 0, NULL, NULL, NULL, NULL, NULL, LightKit_Unload, NULL},
    {'CAM '},
    {'PLYR'},
    {'NPC '},
    {'ITEM'},
    {'PKUP'},
    {'TRIG'},
    {'SDF '},
    {'TEX '},
    {'TXT '},
    {'ENV '},
    {'ATBL', 0, 0, ATBL_Read, NULL, NULL, NULL, NULL, NULL, NULL},
    {'MINF'},
    {'PICK'},
    {'PLAT'},
    {'PEND'},
    {'MRKR'},
    {'MVPT', 0, 0, NULL, NULL, NULL, NULL, NULL, MovePoint_Unload, NULL},
    {'TIMR'},
    {'CNTR'},
    {'PORT'},
    {'SND '},
    {'SNDS'},
    {'GRUP'},
    {'MPHT'},
    {'SFX '},
    {'SNDI', 0, 0, SndInfoRead, NULL, NULL, NULL, NULL, NULL, NULL},
    {'HANG'},
    {'SIMP'},
    {'BUTN'},
    {'SURF'},
    {'DSTR'},
    {'BOUL'},
    {'MAPR'},
    {'GUST'},
    {'VOLU'},
    {'UI  '},
    {'UIFT'},
    {'TEXT'},
    {'COND'},
    {'DPAT'},
    {'PRJT'},
    {'LOBM'},
    {'FOG '},
    {'LITE'},
    {'PARE'},
    {'PARS'},
    {'CSN '},
    {'CTOC'},
    {'CSNM'},
    {'EGEN'},
    {'ALST'},
    {'RAW '},
    {'LODT'},
    {'SHDW'},
    {'DYNA'},
    {'VIL '},
    {'VILP'},
    {'COLL'},
    {'PARP'},
    {'PIPT'},
    {'DSCO'},
    {'JAW '},
    {'SHRP'},
    {'FLY '},
    {'TRCK'},
    {'CRV ', 0, 0, Curve_Read, NULL, NULL, NULL, NULL, NULL, NULL},
    {'ZLIN'},
    {'DUPC'},
    {'SLID'},
    {'CRDT'},
};

void zAssetStartup()
{
    xSTStartup(assetTypeHandlers);
    ATBL_Init();
}

void zAssetShutdown()
{
    xSTShutdown();
}

static HackModelRadius hackRadiusTable[3] = { { 0xFA77E6FAU, 20.0f },
                                       { 0x5BD0EDACU, 1000.0f },
                                       { 0xED21A1C6U, 50.0f } };

static char* jsp_shadow_hack_textures[5] = {
    "beach_towel",  "wood_board_Nails_singleV2", "wood_board_Nails_singleV3",
    "glass_broken", "ground_path_alpha",
};

struct AnimTableList animTable[33] = {
    { "ZNPC_AnimTable_Test", ZNPC_AnimTable_Test, 0 },
    { "ZNPC_AnimTable_Dutchman", ZNPC_AnimTable_Dutchman, 0 },
    { "ZNPC_AnimTable_Duplotron", ZNPC_AnimTable_Duplotron, 0 },
    { "ZNPC_AnimTable_Common", ZNPC_AnimTable_Common, 0 },
    { "ZNPC_AnimTable_BossPlankton", ZNPC_AnimTable_BossPlankton, 0 },
    { "ZNPC_AnimTable_BossSandy", ZNPC_AnimTable_BossSandy, 0 },
    { "ZNPC_AnimTable_SleepyTime", ZNPC_AnimTable_SleepyTime, 0 },
    { "ZNPC_AnimTable_BossSandyHead", ZNPC_AnimTable_BossSandyHead, 0 },
    { "ZNPC_AnimTable_Hammer", ZNPC_AnimTable_Hammer, 0 },
    { "ZNPC_AnimTable_TTSauce", ZNPC_AnimTable_TTSauce, 0 },
    { "ZNPC_AnimTable_KingJelly", ZNPC_AnimTable_KingJelly, 0 },
    { "ZNPC_AnimTable_Slick", ZNPC_AnimTable_Slick, 0 },
    { "ZNPC_AnimTable_TarTar", ZNPC_AnimTable_TarTar, 0 },
    { "ZNPC_AnimTable_Villager", ZNPC_AnimTable_Villager, 0 },
    { "ZNPC_AnimTable_BalloonBoy", ZNPC_AnimTable_BalloonBoy, 0 },
    { "ZNPC_AnimTable_Fodder", ZNPC_AnimTable_Fodder, 0 },
    { "ZNPC_AnimTable_Prawn", ZNPC_AnimTable_Prawn, 0 },
    { "ZNPC_AnimTable_Neptune", ZNPC_AnimTable_Neptune, 0 },
    { "ZNPC_AnimTable_BossSB1", ZNPC_AnimTable_BossSB1, 0 },
    { "ZNPC_AnimTable_BossSBobbyArm", ZNPC_AnimTable_BossSBobbyArm, 0 },
    { "ZNPC_AnimTable_Monsoon", ZNPC_AnimTable_Monsoon, 0 },
    { "ZNPC_AnimTable_ArfDog", ZNPC_AnimTable_ArfDog, 0 },
    { "ZNPC_AnimTable_ArfArf", ZNPC_AnimTable_ArfArf, 0 },
    { "ZNPC_AnimTable_BossSB2", ZNPC_AnimTable_BossSB2, 0 },
    { "ZNPC_AnimTable_Tiki", ZNPC_AnimTable_Tiki, 0 },
    { "ZNPC_AnimTable_Tubelet", ZNPC_AnimTable_Tubelet, 0 },
    { "ZNPC_AnimTable_Ambient", ZNPC_AnimTable_Ambient, 0 },
    { "ZNPC_AnimTable_GLove", ZNPC_AnimTable_GLove, 0 },
    { "ZNPC_AnimTable_LassoGuide", ZNPC_AnimTable_LassoGuide, 0 },
    { "ZNPC_AnimTable_Chuck", ZNPC_AnimTable_Chuck, 0 },
    { "ZNPC_AnimTable_Jelly", ZNPC_AnimTable_Jelly, 0 },
    { "ZNPC_AnimTable_SuperFriend", ZNPC_AnimTable_SuperFriend, 0 },
    { "ZNPC_AnimTable_BossPatrick", ZNPC_AnimTable_BossPatrick, 0, }
};

static xAnimTable* (*tableFuncList[48])() = {
    zEntPlayer_AnimTable,
    ZNPC_AnimTable_Common,
    zPatrick_AnimTable,
    zSandy_AnimTable,
    ZNPC_AnimTable_Villager,
    zSpongeBobTongue_AnimTable,
    ZNPC_AnimTable_LassoGuide,
    ZNPC_AnimTable_Hammer,
    ZNPC_AnimTable_TarTar,
    ZNPC_AnimTable_GLove,
    ZNPC_AnimTable_Monsoon,
    ZNPC_AnimTable_SleepyTime,
    ZNPC_AnimTable_ArfDog,
    ZNPC_AnimTable_ArfArf,
    ZNPC_AnimTable_Chuck,
    ZNPC_AnimTable_Tubelet,
    ZNPC_AnimTable_Slick,
    ZNPC_AnimTable_Ambient,
    ZNPC_AnimTable_Tiki,
    ZNPC_AnimTable_Fodder,
    ZNPC_AnimTable_Duplotron,
    ZNPC_AnimTable_Jelly,
    ZNPC_AnimTable_Test,
    ZNPC_AnimTable_Neptune,
    ZNPC_AnimTable_KingJelly,
    ZNPC_AnimTable_Dutchman,
    ZNPC_AnimTable_Prawn,
    ZNPC_AnimTable_BossSandy,
    ZNPC_AnimTable_BossPatrick,
    ZNPC_AnimTable_BossSB1,
    ZNPC_AnimTable_BossSB2,
    ZNPC_AnimTable_BossSBobbyArm,
    ZNPC_AnimTable_BossPlankton,
    zEntPlayer_BoulderVehicleAnimTable,
    ZNPC_AnimTable_BossSandyHead,
    ZNPC_AnimTable_BalloonBoy,
    xEnt_AnimTable_AutoEventSmall,
    ZNPC_AnimTable_SlickShield,
    ZNPC_AnimTable_SuperFriend,
    ZNPC_AnimTable_ThunderCloud,
    XHUD_AnimTable_Idle,
    ZNPC_AnimTable_NightLight,
    ZNPC_AnimTable_HazardStd,
    ZNPC_AnimTable_FloatDevice,
    anim_table, // Cruise Bubble anim table based on PS2 DWARF data
    ZNPC_AnimTable_BossSandyScoreboard,
    zEntPlayer_TreeDomeSBAnimTable,
    NULL,
};

extern xJSPHeader* sTempJSP;
extern xJSPHeader sDummyEmptyJSP;

static void* Model_Read(void* param_1, U32 param_2, void* indata, U32 insize, U32* outsize)
{
    RpAtomic* model = (RpAtomic *)iModelFileNew(indata, insize);

    *outsize = 0x70;

    for (int i = 0; i < 3; i++)
    {
        if (param_2 != hackRadiusTable[i].assetid)
        {
            continue;
        }
        for (RpAtomic* tmpModel = model; tmpModel != NULL; tmpModel = (RpAtomic *)iModelFile_RWMultiAtomic(tmpModel))
        {
            tmpModel->boundingSphere.radius = hackRadiusTable[i].radius;

            tmpModel->boundingSphere.center.x = 0.0f;
            tmpModel->boundingSphere.center.y = 0.0f;
            tmpModel->boundingSphere.center.z = 0.0f;

            tmpModel->interpolator.flags &= ~2;
        }
        break;
    }

    return model;
}

static void* Curve_Read(void* param_1, U32 param_2, void* indata, U32 insize, U32* outsize)
{
    *outsize = insize;

    void* __dest = RWSRCGLOBAL(memoryFuncs.rwmalloc(insize));
    memcpy(__dest, indata, insize);

    *(int *)((int)__dest + 0x10) = (int)__dest + 0x14;

    return __dest;
}

static void Model_Unload(void* userdata, U32)
{
    if (userdata != NULL)
    {
        iModelUnload((RpAtomic*)userdata);
    }
}

// Ghidra's output here is not helpful
static void* BSP_Read(void* param_1, U32 param_2, void* indata, U32 insize, U32* outsize)
{
    RwMemory rwmem;
    RwChunkHeaderInfo chunkHeaderInfo;
    RpWorld* bsp;

    RwStream* stream = RwStreamOpen((RwStreamType)3, (RwStreamAccessType)1, indata);
    if (stream == 0)
    {
        xprintf("BSP_Read RwStreamOpen failed\n");
    }
    if (RwStreamFindChunk(stream, 0xb, 0, 0) == 0)
    {
        // damn
        // chunk header info is austack in ghidra :/
        RwStreamReadChunkHeaderInfo(stream, &chunkHeaderInfo);
        *outsize = 0;
    }
    else
    {
        bsp = RpWorldStreamRead(stream);
        if (bsp == 0)
        {
            xprintf("BSP_Read RpWorldStreamRead failed\n");
        }
        RwStreamClose(stream, 0);
        *outsize = 4;
    }
    return bsp;
}


static void BSP_Unload(void*, U32)
{
    xEnvFree(globals.sceneCur->env);
}

static void* JSP_Read(void* param_1, U32 param_2, void* indata, U32 insize, U32* outsize)
{
    xJSPHeader* retjsp = &sDummyEmptyJSP;
    *outsize = 32;
    xJSP_MultiStreamRead(indata, insize, &sTempJSP);
    if (sTempJSP->jspNodeList != NULL)
    {
        retjsp = sTempJSP;
        sTempJSP = 0;
        *outsize = 4;
    }
    jsp_shadow_hack(retjsp);
    return retjsp;
}

static void JSP_Unload(void* userdata, U32 b)
{
    if ((xJSPHeader*)userdata != &sDummyEmptyJSP)
    {
        xJSP_Destroy((xJSPHeader*)userdata);
    }
}

static RwTexture* TexCB(RwTexture* texture, void* data)
{
    if (*(RwTexture**)data == NULL)
    {
        *(RwTexture**)(data) = texture;
    }
}

static void* RWTX_Read(void*, unsigned int, void*, unsigned int, unsigned int*) {

}

static void TextureRW3_Unload(void* a, U32 b)
{
    if (a != NULL)
    {
        ((RwTexture*)(a))->refCount = 1;
        RwTextureDestroy((RwTexture*)a);
    }
}

static void ATBL_Init()
{
    for (int i = 0; i < 0x21; i++)
    {
        animTable[i].id = xStrHash(animTable[i].name);
    }
}

void FootstepHackSceneEnter()
{
    s_sbFootSoundA  = xStrHash("SB_run1L");
    s_sbFootSoundB  = xStrHash("SB_run1R");
    s_scFootSoundA  = xStrHash("SC_run_kelpL");
    s_scFootSoundB  = xStrHash("SC_run_kelpL");
    s_patFootSoundA = xStrHash("Pat_run_rock_dryL");
    s_patFootSoundB = xStrHash("Pat_run_rock_dryR");
}

static U8 dummyEffectCB(U32, xAnimActiveEffect*, xAnimSingle*, void*)
{
    return 0;
}

static void* ATBL_Read(void*, unsigned int, void*, unsigned int, unsigned int*) {

}

static void Anim_Unload(void*, U32)
{
}

static void LightKit_Unload(void* userdata, U32 b)
{
    xLightKit_Destroy((xLightKit*)userdata);
}

static void Anim_ATBL_getTable(xAnimTable* (*param)(void))
{
    *param();
}

static void MovePoint_Unload(void* userdata, U32 b)
{
    xMovePointSplineDestroy((xMovePoint*)userdata);
}

static void* SndInfoRead(void* param_1, U32 param_2, void* indata, U32 insize, U32* outsize)
{
    void* __dest = RWSRCGLOBAL(memoryFuncs.rwmalloc(insize));

    if (__dest == NULL)
    {
        return __dest;
    }

    memcpy(__dest, indata, insize);

    if (iSndLoadSounds(__dest) == 0)
    {
        RWSRCGLOBAL(memoryFuncs.rwfree(__dest));
        return NULL;
    }
    else
    {
        *outsize = insize;
    }

    return __dest;
}

U32 xSndPlay3D(U32 id, F32 vol, F32 pitch, U32 priority, U32 flags, xEnt* ent, F32 radius,
               sound_category category, F32 delay)
{
    return xSndPlay3D(id, vol, pitch, priority, flags, ent, radius / 4.0f, radius, category, delay);
}
