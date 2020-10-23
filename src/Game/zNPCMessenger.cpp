#include "zNPCMessenger.h"

#include <types.h>

// func_800ED1E0
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "zNPCMsg_Startup__Fv")

// func_800ED220
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "zNPCMsg_Shutdown__Fv")

// func_800ED224
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "zNPCMsg_ScenePrepare__Fv")

// func_800ED228
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "zNPCMsg_SceneFinish__Fv")

// func_800ED248
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "zNPCMsg_SceneReset__Fv")

// func_800ED280
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "zNPCMsg_Timestep__FP6xScenef")

// func_800ED358
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "zNPCMsg_SendMsg__F13en_NPC_MSG_IDUi")

// func_800ED3BC
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "zNPCMsg_SendMsg__F13en_NPC_MSG_IDP10zNPCCommon")

// func_800ED424
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "zNPCMsg_SendMsg__FP6NPCMsgP10zNPCCommon")

// func_800ED448
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "zNPCMsg_SendMsg__FP6NPCMsgfP10zNPCCommon")

// func_800ED57C
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "NPCPS_copyMsgInfo__FP6NPCMsgP6NPCMsgf")

// func_800ED5C4
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "NPCPS_queMessage__FP6NPCMsg")

// func_800ED5FC
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "NPCPS_flagForMID__F13en_NPC_MSG_ID")

// func_800ED604
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "NPCPS_MsgPoolInit__FP9NPCPSDatai")

// func_800ED674
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "NPCPS_MsgPoolReset__FP9NPCPSData")

// func_800ED7EC
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "NPCPS_CltPoolInit__FP9NPCPSDatai")

// func_800ED85C
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "NPCPS_CltPoolReset__FP9NPCPSData")

// func_800ED9D4
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "NPCPS_postOffice__Fv")

// func_800ED9E0
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "NPCPS_grabMsg__Fv")

// func_800EDA28
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "NPCPS_freeMsg__FP6NPCMsg")

// func_800EDA60
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "zNPCMsg_AreaNotify__FP10zNPCCommon13en_NPC_MSG_IDfi11en_NPCTYPES")

// func_800EDB38
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "zNPCMsg_AreaNotify__FP10zNPCCommon13en_NPC_MSG_IDfiP11en_NPCTYPES")

// func_800EDC08
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "zNPCMsg_AreaNotify__FP10zNPCCommonP6NPCMsgfiP11en_NPCTYPES")

// func_800EDEB0
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "zNPCMsg_AreaPlayerStun__FffP5xVec3")

// func_800EE070
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "zNPCMsg_AreaNPCExplodeNoRobo__FP10zNPCCommonfPC5xVec3")

// func_800EE2C0
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "IsAlive__10zNPCCommonFv")

// func_800EE2C8
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "Stun__10zNPCCommonFf")
