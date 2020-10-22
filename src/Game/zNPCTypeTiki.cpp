#include "zNPCTypeTiki.h"

#include <types.h>

// ZNPC_Tiki_Startup()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "ZNPC_Tiki_Startup__Fv")

// ZNPC_Tiki_Shutdown()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "ZNPC_Tiki_Shutdown__Fv")

// zNPCTiki_InitStacking(zScene*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "zNPCTiki_InitStacking__FP6zScene")

// zNPCTiki_InitFX(zScene*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "zNPCTiki_InitFX__FP6zScene")

// zNPCTiki_ExplodeFX(zNPCTiki*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "zNPCTiki_ExplodeFX__FP8zNPCTiki")

// zNPCTiki_PickTikisToAnimate()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "zNPCTiki_PickTikisToAnimate__Fv")

// zNPCTiki_Timestep(xScene*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "zNPCTiki_Timestep__FP6xScenef")

// zNPCTiki_ReparentOrphans()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "zNPCTiki_ReparentOrphans__Fv")

// zNPCTiki::AddChild(zNPCTiki*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "AddChild__8zNPCTikiFP8zNPCTiki")

// zNPCTiki::RemoveChild(zNPCTiki*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "RemoveChild__8zNPCTikiFP8zNPCTiki")

// zNPCTiki::RemoveParent(zNPCTiki*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "RemoveParent__8zNPCTikiFP8zNPCTiki")

// zNPCTiki::FindParents(zScene*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "FindParents__8zNPCTikiFP6zScene")

// zNPCTiki::ParentUpdated(zNPCTiki*)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "ParentUpdated__8zNPCTikiFP8zNPCTiki")

// zNPCTiki::RemoveFromFamily()
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "RemoveFromFamily__8zNPCTikiFv")

// loveyFloat(zNPCTiki*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "loveyFloat__FP8zNPCTikif")

// zNPCTiki::zNPCTiki(int)
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "__ct__8zNPCTikiFi")
