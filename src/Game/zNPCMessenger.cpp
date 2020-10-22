#include "zNPCMessenger.h"

#include <types.h>

// zNPCMsg_Startup()
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "zNPCMsg_Startup__Fv")

// zNPCMsg_Shutdown()
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "zNPCMsg_Shutdown__Fv")

// zNPCMsg_ScenePrepare()
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "zNPCMsg_ScenePrepare__Fv")

// zNPCMsg_SceneFinish()
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "zNPCMsg_SceneFinish__Fv")

// zNPCMsg_SceneReset()
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "zNPCMsg_SceneReset__Fv")

// zNPCMsg_Timestep(xScene*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "zNPCMsg_Timestep__FP6xScenef")

// zNPCMsg_SendMsg(en_NPC_MSG_ID,unsigned int)
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "zNPCMsg_SendMsg__F13en_NPC_MSG_IDUi")

// zNPCMsg_SendMsg(en_NPC_MSG_ID,zNPCCommon*)
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "zNPCMsg_SendMsg__F13en_NPC_MSG_IDP10zNPCCommon")

// zNPCMsg_SendMsg(NPCMsg*,zNPCCommon*)
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "zNPCMsg_SendMsg__FP6NPCMsgP10zNPCCommon")

// zNPCMsg_SendMsg(NPCMsg*,float,zNPCCommon*)
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "zNPCMsg_SendMsg__FP6NPCMsgfP10zNPCCommon")

// NPCPS_copyMsgInfo(NPCMsg*,NPCMsg*,float)
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "NPCPS_copyMsgInfo__FP6NPCMsgP6NPCMsgf")

// NPCPS_queMessage(NPCMsg*)
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "NPCPS_queMessage__FP6NPCMsg")

// NPCPS_flagForMID(en_NPC_MSG_ID)
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "NPCPS_flagForMID__F13en_NPC_MSG_ID")

// NPCPS_MsgPoolInit(NPCPSData*,int)
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "NPCPS_MsgPoolInit__FP9NPCPSDatai")

// NPCPS_MsgPoolReset(NPCPSData*)
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "NPCPS_MsgPoolReset__FP9NPCPSData")

// NPCPS_CltPoolInit(NPCPSData*,int)
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "NPCPS_CltPoolInit__FP9NPCPSDatai")

// NPCPS_CltPoolReset(NPCPSData*)
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "NPCPS_CltPoolReset__FP9NPCPSData")

// NPCPS_postOffice()
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "NPCPS_postOffice__Fv")

// NPCPS_grabMsg()
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "NPCPS_grabMsg__Fv")

// NPCPS_freeMsg(NPCMsg*)
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "NPCPS_freeMsg__FP6NPCMsg")

// zNPCMsg_AreaNotify(zNPCCommon*,en_NPC_MSG_ID,float,int,en_NPCTYPES)
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "zNPCMsg_AreaNotify__FP10zNPCCommon13en_NPC_MSG_IDfi11en_NPCTYPES")

// zNPCMsg_AreaNotify(zNPCCommon*,en_NPC_MSG_ID,float,int,en_NPCTYPES*)
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "zNPCMsg_AreaNotify__FP10zNPCCommon13en_NPC_MSG_IDfiP11en_NPCTYPES")

// zNPCMsg_AreaNotify(zNPCCommon*,NPCMsg*,float,int,en_NPCTYPES*)
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "zNPCMsg_AreaNotify__FP10zNPCCommonP6NPCMsgfiP11en_NPCTYPES")

// zNPCMsg_AreaPlayerStun(float,float,xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "zNPCMsg_AreaPlayerStun__FffP5xVec3")

// zNPCMsg_AreaNPCExplodeNoRobo(zNPCCommon*,float,const xVec3*)
#pragma GLOBAL_ASM("asm/Game/zNPCMessenger.s", "zNPCMsg_AreaNPCExplodeNoRobo__FP10zNPCCommonfPC5xVec3")
