#include "iModel.h"
#include "zLasso.h"
#include "xEnt.h"
#include "xSnd.h"
#include "xstransvc.h"
#include "xString.h"
#include "xVec3.h"

#include <types.h>

#if 0
// lbl_803CDAE0-_SDA2_BASE_(r2), -0x6ea0(r2)
extern float32 zLasso_f_0_0;
// lbl_803CDAE4-_SDA2_BASE_(r2), -0x6e9c(r2)
extern float32 zLasso_f_1_0;
// lbl_803CDAF0-_SDA2_BASE_(r2),
extern float32 zLasso_f_30_0;
// lbl_803CDAF4-_SDA2_BASE_(r2),
extern float32 zLasso_2pi_6_28318548203;
// lbl_803CDAF8-_SDA2_BASE_(r2),
extern float32 zLasso_f_2_0;
// lbl_803CDAFC-_SDA2_BASE_(r2),
extern float32 zLasso_pi_3_14159274101;
// lbl_803CDB00-_SDA2_BASE_(r2),
extern float32 zLasso_f_3_0;
// lbl_803CDB04-_SDA2_BASE_(r2),
extern float32 zLasso_f_2_09439516068;
// lbl_803CDB08-_SDA2_BASE_(r2),
extern float32 zLasso_f_4_18879032135;
// lbl_803CDB0C-_SDA2_BASE_(r2),
extern float32 zLasso_f_0_0250000003725;
// lbl_803CDB10-_SDA2_BASE_(r2),
extern float32 zLasso_f_43_0;
// lbl_803CDB14-_SDA2_BASE_(r2),
extern float32 zLasso_f_0_2000000298;
// lbl_803CDB18-_SDA2_BASE_(r2),
extern float32 zLasso_f_0_75;           // 1/4
// lbl_803CDB1C-_SDA2_BASE_(r2),
extern float32 zLasso_f_0_666666686535; // 2/3
// lbl_803CDB20-_SDA2_BASE_(r2),
extern float32 zLasso_f_0_333333343267; // 1/3
// lbl_803CDB24-_SDA2_BASE_(r2),
extern float32 zLasso_f_0_418879032135;
// lbl_803CDB28-_SDA2_BASE_(r2),
extern float32 zLasso_f_15_0;
// lbl_803CDB2C-_SDA2_BASE_(r2),
extern float32 zLasso_f_9_99999974736en6; // 9.99999974738e-06


typedef void* HANDLE;
HANDLE gLastAsset = 0; // lbl_803CB8D8-_SDA_BASE_(r13), -0x7028(r13)
// 00 00 00 01 00 00 00 00
volatile int gNumStructs = 0; // lbl_803CB8DC-_SDA_BASE_(r13), -0x7024(r13)
char *gRenderPtr; // lbl_803CB8E4-_SDA_BASE_(r13), -0x701c(r13) 
extern char gRenderArr[];

extern const char rope_labels[0x18]; // lbl_8025CD18

// lbl_803CB8DC-_SDA_BASE_(r13), -0x7024(r13)
extern const uint32 zLasso_i_4294967296; // 4294967296 (number of int32 values)

typedef struct _x {
    xEnt *pEnt;
    int ctr;
    xModelInstance *pModel;
    xAnimState *pState;
    void *ptrs[14];
} STRUCT_A;
extern void initVertMap(xModelInstance **a); // parameter should be zLassoGuide *
extern void bakeMorphAnim(RpGeometry *a, void *b);

typedef struct _y {
    STRUCT_A Four[3];
    int pad[2];
} STRUCT_B;

STRUCT_B gEntities[0xd00]; // lbl_802E5788, -0x7fd2
#endif

// func_8009C000
#if 1
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "zLasso_Init__FP6zLassoP14xModelInstancefff")
#else
void zLasso_Init(zLasso *a, xModelInstance *b, float c, float d, float e)
{
    if (gLastAsset == 0)
    {
        HANDLE asset = (HANDLE)xSTFindAsset(xStrHash("baserom.dol"), 0);
        if (asset)
        {
            gLastAsset = asset;
        }
        else
        {
            gLastAsset = 0;
        }
    }
    iModelTagSetup(&a->tag, b->Data, c, d, e);
    a->model = b;
    gRenderPtr = &gRenderArr[1920];
    
}
#endif

// func_8009C0C0
#if 1
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "zLasso_AddGuide__FP4xEntP10xAnimStateP14xModelInstance")
#else
void zLasso_AddGuide(xEnt *a, xAnimState *b, xModelInstance *c)
{
    int found = -1;
    int index = 0;
    STRUCT_B *p = gEntities;
    for (int one = gNumStructs; one > 0; --one)
    {
        if (p->Four[0].pEnt == a)
        {
            found = index;
            break;
        }
        ++p;
        ++index;
    }

    if (found == -1)
    {
        found = gNumStructs;
        gEntities[found].Four[0].pEnt = a;
        gEntities[found].Four[0].ctr = 0;
        gNumStructs = found + 1;
    }

    STRUCT_A *q = &(gEntities[found].Four[0]);
    for (int j = gEntities[found].Four[0].ctr; j > 0; --j)
    {
        if (q->pState == b)
        {
            return;
        }
        ++q;
    }

    int ctr = gEntities[found].Four[0].ctr;
    ++gEntities[found].Four[0].ctr;
    gEntities[found].Four[ctr].pState = b;
    gEntities[found].Four[ctr].pModel = c;
    xModelInstance **inst = &gEntities[found].Four[ctr].pModel;
    initVertMap(inst);
    bakeMorphAnim(c->Data->geometry, *b->Data->RawData);
}
#endif

// func_8009C1EC
#if 1
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "zLasso_SetGuide__FP4xEntP10xAnimState")
#else
void zLasso_SetGuide(xEnt *ent, xAnimState *anim)
{
    if (ent)
    {
        if (!anim)
        {
            return;
        }
    }

    for (int i; i != 0; --i)
    {
        
    }
}
#endif

// func_8009C2CC
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "zLasso_InterpToGuide__FP6zLasso")

// func_8009C42C
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "zLasso_Render__FP6zLasso")

// func_8009D3FC
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "zLasso_Update__FP6zLassoP4xEntf")

// func_8009D794
#if 1
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "zLasso_InitTimer__FP6zLassof")
#else
void zLasso_InitTimer(zLasso *lasso, float f)
{
    lasso->secsTotal = f;
    lasso->secsLeft = f;
    lasso->crRadius = zLasso_f_0_0;
    lasso->tgRadius = zLasso_f_0_0;
    lasso->stRadius = zLasso_f_0_0;
    lasso->crSlack = zLasso_f_0_0;
    lasso->tgSlack = zLasso_f_0_0;
    lasso->stSlack = zLasso_f_0_0;
    // iModelTagEval(RpAtomic *, xModelTag *, RwMatrixTag *, xVec3 *);
    iModelTagEval(
        lasso->model->Data, &lasso->tag, lasso->model->Mat, &lasso->crCenter);
    xVec3Copy(&lasso->anchor, &lasso->model->Scale);
    xVec3SubFrom(&lasso->crCenter, &lasso->anchor);
    xVec3Copy(&lasso->honda, &lasso->crCenter);
    lasso->lastDist = zLasso_f_0_0;
    lasso->currDist = zLasso_f_0_0;
    xVec3Init(&lasso->stNormal, zLasso_f_0_0, zLasso_f_1_0, zLasso_f_0_0);
    xVec3Init(&lasso->tgNormal, zLasso_f_0_0, zLasso_f_1_0, zLasso_f_0_0);
    xVec3Init(&lasso->crNormal, zLasso_f_0_0, zLasso_f_1_0, zLasso_f_0_0);
    xVec3Copy(&lasso->lastRefs[0], &lasso->crCenter);
    xVec3Copy(&lasso->lastRefs[1], &lasso->crCenter);
    xVec3Copy(&lasso->lastRefs[2], &lasso->crCenter);
    xVec3Copy(&lasso->lastRefs[3], &lasso->crCenter);
    xVec3Copy(&lasso->lastRefs[4], &lasso->crCenter);
    lasso->reindex[0] = 0;
    lasso->reindex[1] = 1;
    lasso->reindex[2] = 2;
    lasso->reindex[3] = 3;
    lasso->reindex[4] = 4;
}
#endif

// func_8009D8D4
#if 1
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "zLasso_ResetTimer__FP6zLassof")
#else
void zLasso_ResetTimer(zLasso *lasso, float seconds)
{
    lasso->secsTotal = seconds;
    lasso->secsLeft = seconds;
    lasso->stRadius = lasso->crRadius;
    lasso->tgRadius = lasso->crRadius;
    lasso->stSlack = lasso->crSlack;
    lasso->tgSlack = lasso->crSlack;
    xVec3Copy(&lasso->stNormal, &lasso->crNormal);
    xVec3Copy(&lasso->tgNormal, &lasso->crNormal);
    xVec3Add(&lasso->stCenter, &lasso->crCenter, &lasso->anchor);
}
#endif

// func_8009D944
#if 1
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "fizzicalRadius__FP6zLassofP5xVec3")
#else
extern const float zLasso_zero_0_0; // lbl_803CDAE0-_SDA2_BASE_(r2)
extern const float zLasso_pt75_0_75; // lbl_803CDB18-_SDA2_BASE_(r2)
extern const float zLasso_two_2_0; // lbl_803CDAF8-_SDA2_BASE_(r2)
void fizzicalRadius(zLasso *lasso, float f, xVec3 * /* not used */)
{
    lasso->crRadius -= zLasso_two_2_0 * (zLasso_pt75_0_75 - lasso->crSlack) * f;
    if (lasso->crRadius < zLasso_zero_0_0)
    {
        lasso->crRadius = zLasso_zero_0_0;
    }
}
#endif

// func_8009D97C
#if 1
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "fizzicalCenter__FP6zLassofP5xVec3")
#else
extern const float zLasso_pt2_0_2; // lbl_803CDB14-_SDA2_BASE_(r2)
extern const float zLasso_mpt2_n0_2; // lbl_803CDB30-_SDA2_BASE_(r2)
extern void xVec3AddScaled(xVec3 *a, const xVec3 *b, float f);
void fizzicalCenter(zLasso *lasso, float /* not used */, xVec3 *v)
{
    xVec3AddScaled(&lasso->crCenter, &lasso->lastRefs[lasso->reindex[4]], zLasso_mpt2_n0_2);
    xVec3AddScaled(&lasso->crCenter, v, zLasso_pt2_0_2);
}
#endif

// func_8009D9DC
#if 1
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "fizzicalNormal__FP6zLassofP5xVec3")
#else
extern float zLasso_1pt1_1_1; // lbl_803CDB34-_SDA2_BASE_(r2)
void fizzicalNormal(zLasso *lasso, float f, xVec3 *v)
{
    xVec3 tmpVec;
    xVec3Sub(&tmpVec,
            &lasso->lastRefs[lasso->reindex[0]],
            &lasso->lastRefs[lasso->reindex[1]]);
    float dot = xVec3Dot(&lasso->crNormal, &tmpVec);
    float len = xVec3Length(&tmpVec);
    xVec3AddScaled(&lasso->crNormal, &tmpVec, zLasso_1pt1_1_1 * ( -dot / len));
    xVec3Normalize(&lasso->crNormal, &lasso->crNormal);
}
#endif

// func_8009DA7C
#if 1
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "fizzicalHonda__FP6zLassofP5xVec3")
#else
extern const float zLasso_m1_n1_0; // lbl_803CDB38-_SDA2_BASE_(r2)
extern const float zLasso_4o7_0_571429014206; // lbl_803CDB3C-_SDA2_BASE_(r2) == 0.571429014206
extern const float zLasso_2o7_0_285714000463; // lbl_803CDB40-_SDA2_BASE_(r2) == 0.285714000463
extern const float zLasso_1o7_0_142857000232; // lbl_803CDB44-_SDA2_BASE_(r2) == 0.142857000232
extern int zLasso_guess; // lbl_803CAB78-_SDA_BASE_(r13)
extern const float zLasso_zero_0_0; // lbl_803CDAE0-_SDA2_BASE_(r2)
extern const float zLasso_pt77_0_77; // lbl_803CDB48-_SDA2_BASE_(r2)
extern const float zLasso_hundred_100_0; // lbl_803CDB4C-_SDA2_BASE_(r2)

extern uint32 xSndPlay3D(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags,
                  const xVec3* pos, float32 maybe_radius,
                  sound_category category, float32 delay);

void fizzicalHonda(zLasso *lasso, float /* not used */, xVec3 *v)
{
    xVec3SMul(&lasso->honda, v, zLasso_m1_n1_0);
    xVec3AddScaled(&lasso->honda, &lasso->lastRefs[lasso->reindex[0]], zLasso_4o7_0_571429014206);
    xVec3AddScaled(&lasso->honda, &lasso->lastRefs[lasso->reindex[1]], zLasso_2o7_0_285714000463);
    xVec3AddScaled(&lasso->honda, &lasso->lastRefs[lasso->reindex[2]], zLasso_1o7_0_142857000232);
    float dot = xVec3Dot(&lasso->crNormal, &lasso->honda);
    xVec3AddScaled(&lasso->honda, &lasso->crNormal, -dot);
    xVec3Normalize(&lasso->honda, &lasso->honda);
    xVec3SMulBy(&lasso->honda, lasso->crRadius);
    if (zLasso_guess && (lasso->honda.x > zLasso_zero_0_0))
    {
        xSndPlay3D(xStrHash(&rope_labels[5]), // id
                zLasso_pt77_0_77, // vol
                zLasso_zero_0_0, // pitch
                0, // priority
                1 << 16, // flags
                &lasso->anchor, // pos
                zLasso_hundred_100_0, // maybe_radius
                SND_CAT_GAME, // category
                zLasso_zero_0_0// delay
        );
        zLasso_guess = 0;
    }
    if (lasso->honda.x < zLasso_zero_0_0)
    {
        zLasso_guess = 1;
    }
    xVec3AddTo(&lasso->honda, &lasso->crCenter);
}
#endif

// func_8009DBB4
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "nonfizzicalHonda__FP6zLassofP5xVec3")

// func_8009DC80
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "fizzicalSlack__FP6zLassofP5xVec3")

// func_8009DCD4
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "zLasso_scenePrepare__Fv")

// func_8009DCE4
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "initVertMap__FP11zLassoGuide")

// func_8009DEB0
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "vec2vecMat__FP7xMat4x3P5xVec3P5xVec3")

// func_8009DEFC
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "bakeMorphAnim__FP10RpGeometryPv")

// func_8009DFC0
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "xMat4x3Rot__FP7xMat4x3PC5xVec3f")

// func_8009DFF0
#pragma GLOBAL_ASM("asm/Game/zLasso.s", "xMat4x3RotC__FP7xMat4x3ffff")
