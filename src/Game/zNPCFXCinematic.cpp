#include "zNPCFXCinematic.h"

#include <types.h>

// NCIN_Par_BPLANK_JET_1_Upd(const zCutsceneMgr*,NCINEntry*,int)
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "NCIN_Par_BPLANK_JET_1_Upd__FPC12zCutsceneMgrP9NCINEntryi")

// zNPCFXStartup()
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "zNPCFXStartup__Fv")

// NCINBeNosey::NCINBeNosey()
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "__ct__11NCINBeNoseyFv")

// XCSNNosey::XCSNNosey()
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "__ct__9XCSNNoseyFv")

// zNPCFXShutdown()
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "zNPCFXShutdown__Fv")

// zNPCFXCutscenePickTable(const zCutsceneMgr*)
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "zNPCFXCutscenePickTable__FPC12zCutsceneMgr")

// zNPCFXCutscenePrep(const xScene*,float,const zCutsceneMgr*)
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "zNPCFXCutscenePrep__FPC6xScenefPC12zCutsceneMgr")

// NCINBeNosey::Init(const zCutsceneMgr*,NCINEntry*,int)
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "Init__11NCINBeNoseyFPC12zCutsceneMgrP9NCINEntryi")

// zNPCFXCutsceneDone(const xScene*,float,const zCutsceneMgr*)
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "zNPCFXCutsceneDone__FPC6xScenefPC12zCutsceneMgr")

// NCINBeNosey::Done()
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "Done__11NCINBeNoseyFv")

// zNPCFXCutscene(const xScene*,float,const zCutsceneMgr*)
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "zNPCFXCutscene__FPC6xScenefPC12zCutsceneMgr")

// get_bone_matrix(xMat4x3&,const NCINEntry*,const RwMatrixTag*)
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "get_bone_matrix__FR7xMat4x3PC9NCINEntryPC11RwMatrixTag")

// clamp_bone_index(NCINEntry*,RpAtomic*)
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "clamp_bone_index__FP9NCINEntryP8RpAtomic")

// xCutscene::NoseyClear()
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "NoseyClear__9xCutsceneFv")

// xCutscene::NoseySet(XCSNNosey*)
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "NoseySet__9xCutsceneFP9XCSNNosey")

// xMat3x3RMulVec(xVec3*,const xMat3x3*,const xVec3*)
namespace {
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")
}

// NPCCone::TextureSet(RwRaster*)
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "TextureSet__7NPCConeFP8RwRaster")

// NPCCone::UVSliceSet(float,float)
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "UVSliceSet__7NPCConeFff")

// NPCCone::UVBaseSet(float,float)
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "UVBaseSet__7NPCConeFff")

// NPCCone::ColorSet(RwRGBA,RwRGBA)
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "ColorSet__7NPCConeF6RwRGBA6RwRGBA")

// NPCCone::RadiusSet(float)
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "RadiusSet__7NPCConeFf")

// NPARMgmt::KillAll()
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "KillAll__8NPARMgmtFv")

// zNPCB_SB2::singleton()
#pragma GLOBAL_ASM("asm/Game/zNPCFXCinematic.s", "singleton__9zNPCB_SB2Fv")
