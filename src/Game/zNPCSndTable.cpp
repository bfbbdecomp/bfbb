#include "zNPCSndTable.h"

#include <types.h>

// NPCS_Startup()
#pragma GLOBAL_ASM("asm/Game/zNPCSndTable.s", "NPCS_Startup__Fv")

// NPCS_Shutdown()
#pragma GLOBAL_ASM("asm/Game/zNPCSndTable.s", "NPCS_Shutdown__Fv")

// NPCS_SndTimersUpdate(float)
#pragma GLOBAL_ASM("asm/Game/zNPCSndTable.s", "NPCS_SndTimersUpdate__Ff")

// NPCS_SndTimersReset()
#pragma GLOBAL_ASM("asm/Game/zNPCSndTable.s", "NPCS_SndTimersReset__Fv")

// NPCS_SndTypePlayed(en_NPC_SOUND,float)
#pragma GLOBAL_ASM("asm/Game/zNPCSndTable.s", "NPCS_SndTypePlayed__F12en_NPC_SOUNDf")

// NPCS_SndOkToPlay(en_NPC_SOUND)
#pragma GLOBAL_ASM("asm/Game/zNPCSndTable.s", "NPCS_SndOkToPlay__F12en_NPC_SOUND")

// NPCS_SndTablePrepare(NPCSndTrax*)
#pragma GLOBAL_ASM("asm/Game/zNPCSndTable.s", "NPCS_SndTablePrepare__FP10NPCSndTrax")

// NPCS_SndFindProps(en_NPC_SOUND)
#pragma GLOBAL_ASM("asm/Game/zNPCSndTable.s", "NPCS_SndFindProps__F12en_NPC_SOUND")

// NPCS_SndTypeFromHash(unsigned int,NPCSndTrax*,NPCSndTrax*)
#pragma GLOBAL_ASM("asm/Game/zNPCSndTable.s", "NPCS_SndTypeFromHash__FUiP10NPCSndTraxP10NPCSndTrax")

// NPCS_SndPickSimilar(en_NPC_SOUND,NPCSndTrax*,NPCSndTrax*)
#pragma GLOBAL_ASM("asm/Game/zNPCSndTable.s", "NPCS_SndPickSimilar__F12en_NPC_SOUNDP10NPCSndTraxP10NPCSndTrax")

namespace {
#pragma GLOBAL_ASM("asm/Game/zNPCSndTable.s", "xUtil_choose_esc__0_i_esc__1___FPCiiPCf")
}
