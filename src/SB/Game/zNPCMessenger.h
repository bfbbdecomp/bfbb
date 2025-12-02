#ifndef ZNPCMESSENGER_H
#define ZNPCMESSENGER_H

#include "zNPCTypeCommon.h"
#include "zNPCTypes.h"

struct NPCMsg;
struct zNPCCommon;

struct NPCPSClt
{
    void (*notify)(void*, NPCMsg*); // offset 0x0
    void* notedata; // offset 0x4
    signed int flg_filter; // offset 0x8
    NPCPSClt* next; // offset 0xC
};

struct NPCPSData
{
    NPCPSClt* cltblob; // offset 0x0
    NPCPSClt* cltfree; // offset 0x4
    st_XORDEREDARRAY cltlist; // offset 0x8
    NPCMsg* msgblob; // offset 0x18
    NPCMsg* msgfree; // offset 0x1C
    st_XORDEREDARRAY quelist; // offset 0x20
};

void zNPCMsg_Startup();
void zNPCMsg_Shutdown();
void zNPCMsg_ScenePrepare();
void zNPCMsg_SceneReset();
void zNPCMsg_Timestep(xScene* xscn, F32 dt);
/* TODO: en_NPC_MSG_ID definition in zNPCTypeCommon.h is causing issues here
void zNPCMsg_AreaNotify(zNPCCommon* sender, en_NPC_MSG_ID msgid, F32 rad, S32 filter,
                        en_NPCTYPES toNPCType);
void zNPCMsg_AreaNotify(zNPCCommon* sender, en_NPC_MSG_ID msgid, F32 rad, S32 filter,
                        en_NPCTYPES* toNPCType);
static S32 NPCPS_flagForMID(en_NPC_MSG_ID);
*/
void zNPCMsg_AreaNotify(zNPCCommon* sender, NPCMsg* msg, F32 radius, S32 filter,
                        en_NPCTYPES* npcTypeList);
void zNPCMsg_AreaPlayerStun(F32 stuntime, F32 radius, xVec3* pos);
void zNPCMsg_AreaNPCExplodeNoRobo(zNPCCommon* wh, F32 radius, const xVec3* pos_fromHere);

static void NPCPS_copyMsgInfo(NPCMsg*, NPCMsg*, F32);
static void NPCPS_queMessage(NPCMsg* msg);
static void NPCPS_MsgPoolInit(NPCPSData* npc, S32 unk);
static void NPCPS_MsgPoolReset(NPCPSData* npc);
static void NPCPS_CltPoolInit(NPCPSData* npc, S32 unk);
static void NPCPS_CltPoolReset(NPCPSData* npc);
static NPCPSData* NPCPS_postOffice();
static S32 NPCPS_grabMsg();
static void NPCPS_freeMsg(NPCMsg* inmsg);

#endif
