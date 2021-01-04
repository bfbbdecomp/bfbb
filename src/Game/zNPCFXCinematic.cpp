#include "../Core/x/xVec3.h"
#include "../Core/x/xMath3.h"

#include "zNPCFXCinematic.h"

#include <types.h>

// func_80190F80
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_Par_BPLANK_JET_1_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_80191060
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_Par_BPLANK_JET_2_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_80191144
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_Par_BPLANK_SBB_FLAMES_1_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_80191228
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_Par_BPLANK_SBB_FLAMES_2_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_8019130C
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_Par_BPLANK_SBB_JET_1_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_801913F0
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_Par_BPLANK_SBB_JET_2_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_801914D4
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_Par_BPLANK_SBB_SMOKE_1_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_801915B8
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_Par_BPLANK_SBB_SMOKE_2_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_8019169C
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_Par_CIN_BIGDUP_SMOKE_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_80191780
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_Par_CIN_BIGDUP_SPAWN_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_80191864
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_Par_CIN_PLATFORM_JETS_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_80191948
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "CanRenderNow__11NCINBeNoseyFv")

// func_801919CC
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "UpdatedAnimated__11NCINBeNoseyFP8RpAtomicP11RwMatrixTagUiUi")

// func_80191A68
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "zNPCFXStartup__Fv")

// func_80191AB0
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "__ct__11NCINBeNoseyFv")

// func_80191AEC
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "__ct__9XCSNNoseyFv")

// func_80191AFC
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "zNPCFXShutdown__Fv")

// func_80191B00
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "zNPCFXCutscenePickTable__FPC12zCutsceneMgr")

// func_80191BD0
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "zNPCFXCutscenePrep__FPC6xScenefPC12zCutsceneMgr")

// func_80191DE0
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "Init__11NCINBeNoseyFPC12zCutsceneMgrP9NCINEntryi")

// func_80191DF0
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "zNPCFXCutsceneDone__FPC6xScenefPC12zCutsceneMgr")

// func_80191EA8
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "Done__11NCINBeNoseyFv")

// func_80191EBC
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "zNPCFXCutscene__FPC6xScenefPC12zCutsceneMgr")

// func_8019203C
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "NCIN_Generic_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_80192054
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "NCIN_BubSlam__FPC12zCutsceneMgrP9NCINEntryi")

// func_801920E4
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "NCIN_BubWipe__FPC12zCutsceneMgrP9NCINEntryi")

// func_8019233C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCFXCinematic.s",                                                                  \
    "NCIN_BubTrailBone_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi")

// func_801923C0
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "NCIN_BubHit__FPC12zCutsceneMgrP9NCINEntryi")

// func_80192424
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "NCIN_Zapper__FPC12zCutsceneMgrP9NCINEntryi")

// func_80192538
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "NCIN_HammerShock__FPC12zCutsceneMgrP9NCINEntryi")

// func_80192598
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_HammerStreak_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_8019261C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCFXCinematic.s",                                                                  \
    "NCIN_HammerStreak_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi")

// func_80192778
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "NCIN_WaterSplash__FPC12zCutsceneMgrP9NCINEntryi")

// func_801927DC
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "NCIN_HazProjShoot__FPC12zCutsceneMgrP9NCINEntryi")

// func_80192998
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_HazTTSteam_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_80192A6C
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_HazTTSteam_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi")

// func_80192BD4
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_TTGunSmoke_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi")

// func_80192E20
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "NCIN_ArfDogBoom__FPC12zCutsceneMgrP9NCINEntryi")

// func_80192EE4
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_SleepyLamp_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_80192F44
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_SleepyLamp_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi")

// func_801931B8
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_SleepyDRay_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_80193230
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_SleepyDRay_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi")

// func_801933E4
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "NCIN_MaryBoom__FPC12zCutsceneMgrP9NCINEntryi")

// func_801934A0
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "NCIN_PeteBonk__FPC12zCutsceneMgrP9NCINEntryi")

// func_80193500
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_FireSpiral_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_8019353C
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_FireSpiral_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi")

// func_8019364C
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "NCIN_ShieldPop__FPC12zCutsceneMgrP9NCINEntryi")

// func_801936B0
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "NCIN_OilHazard__FPC12zCutsceneMgrP9NCINEntryi")

// func_801938EC
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "NCIN_FodProd_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_801939D8
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_FodProd_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi")

// func_80193AC0
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_FodProdBone_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_80193BAC
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCFXCinematic.s",                                                                  \
    "NCIN_FodProdBone_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi")

// func_80193D10
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "NCIN_MidFish_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_80193D28
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_MidFish_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi")

// func_80193E20
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_BombTrail_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_80193E38
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_BombTrail_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi")

// func_80193E68
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_BoneTrail_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_80193E80
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_BoneTrail_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi")

// func_80193EB0
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_HookRecoil_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_80193EC8
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_HookRecoil_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi")

// func_80193FA0
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_Lightnin2Bones_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_8019405C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCFXCinematic.s",                                                                  \
    "NCIN_Lightnin2Bones_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi")

// func_80194178
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_LightninBone_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_80194304
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCFXCinematic.s",                                                                  \
    "NCIN_LightninBone_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi")

// func_801943D4
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_B101Shockwave_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_801944F8
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_FreezeBreath_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_8019454C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCFXCinematic.s",                                                                  \
    "NCIN_FreezeBreath_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi")

// func_8019461C
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_B201HideBelt_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_80194718
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "NCIN_GooLever_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_801947B4
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_GooLever_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi")

// func_80194824
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_PatBossShrapnel_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_801948B0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCFXCinematic.s",                                                                  \
    "NCIN_PatBossShrapnel_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi")

// func_801948FC
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "NCIN_SpatGlow_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_80194914
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_SpatGlow_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi")

// func_801949FC
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_GloveShrapnel_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_80194A88
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCFXCinematic.s",                                                                  \
    "NCIN_GloveShrapnel_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi")

// func_80194B28
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCFXCinematic.s",                                                                  \
    "NCIN_EntityBonePar_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi")

// func_80194EFC
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "get_bone_matrix__FR7xMat4x3PC9NCINEntryPC11RwMatrixTag")

// func_80194F68
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "clamp_bone_index__FP9NCINEntryP8RpAtomic")

// func_80194F6C
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_BubbleTrail_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_80194FA4
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zNPCFXCinematic.s",                                                                  \
    "NCIN_BubbleTrail_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi")

// func_80195188
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "NCIN_SBBNode_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// func_801951FC
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s",                                                   \
                   "NCIN_SBBNode_AR__FPC12zCutsceneMgrP9NCINEntryP8RpAtomicP11RwMatrixTagUiUi")

// func_80195314
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "NoseyClear__9xCutsceneFv")

// func_80195338
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "NoseySet__9xCutsceneFP9XCSNNosey")

void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    float32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    float32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    float32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}

// func_801953A4
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "TextureSet__7NPCConeFP8RwRaster")

// func_801953AC
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "UVSliceSet__7NPCConeFff")

// func_801953B8
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "UVBaseSet__7NPCConeFff")

// func_801953C4
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "ColorSet__7NPCConeF6RwRGBA6RwRGBA")

// func_8019540C
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "RadiusSet__7NPCConeFf")

// func_80195414
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "KillAll__8NPARMgmtFv")

// func_80195420
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "singleton__9zNPCB_SB2Fv")
