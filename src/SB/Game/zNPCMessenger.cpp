#include "zNPCMessenger.h"

#include "xordarray.h"
#include <types.h>

static NPCPSData g_postoffice;
static NPCMsg g_msgdata;
static S32 g_lockarea;

NPCPSData* NPCPS_postOffice()
{
    return &g_postoffice;
}

void zNPCCommon::Stun(F32)
{
}

void zNPCMsg_ScenePrepare()
{
}

void zNPCMsg_SceneFinish()
{
    return zNPCMsg_SceneReset();
}

void zNPCMsg_SendMsg(en_NPC_MSG_ID msgevent, U32 unk0)
{
    static NPCMsg msg;
    memset(&msg, 0, sizeof(NPCMsg));
    msg.msgid = msgevent;
    msg.sendto = unk0;
    zNPCMsg_SendMsg(&msg, -1.0f, 0);
}

void zNPCMsg_SendMsg(en_NPC_MSG_ID msgevent, zNPCCommon* npc)
{
    static NPCMsg msg;

    memset(&msg, 0, sizeof(NPCMsg));
    msg.msgid = msgevent;
    msg.sendto = npc->id;
    zNPCMsg_SendMsg(&msg, -1.0f, npc);
}

void zNPCMsg_SendMsg(NPCMsg*, zNPCCommon*)
{
}

void zNPCMsg_SendMsg(NPCMsg*, float, zNPCCommon*)
{
}

void NPCPS_copyMsgInfo(NPCMsg*, NPCMsg*, float)
{
}

void NPCPS_queMessage(NPCMsg* msg)
{
    NPCPSData* npc;

    npc = NPCPS_postOffice();

    XOrdAppend(&npc->quelist, msg);
}

S32 NPCPS_flagForMID(en_NPC_MSG_ID)
{
    return NPC_MID_DTRON_NPCAVAIL;
}

void NPCPS_MsgPoolInit(NPCPSData* npc, S32 unk)
{
    XOrdInit(&npc->quelist, unk, 0);
    npc->msgblob = (NPCMsg*)xMemAlloc(gActiveHeap, unk * sizeof(NPCMsg), 0);
    memset(npc->msgblob, 0, unk * sizeof(NPCMsg));
    NPCPS_MsgPoolReset(npc);
}

void NPCPS_MsgPoolReset(NPCPSData* npc)
{
    S32 iVar11 = npc->quelist.max;
    npc->quelist.cnt = 0;
    memset(npc->msgblob, 0, npc->quelist.max * sizeof(NPCMsg));
    if (0 < iVar11)
    {
    }
}

void NPCPS_CltPoolInit(NPCPSData* npc, S32 unk)
{
    XOrdInit(&npc->cltlist, unk, 0);
    npc->cltblob = (NPCPSClt*)xMemAlloc(gActiveHeap, unk * 16, 0);
    memset(npc->cltblob, 0, unk * 16);
    NPCPS_CltPoolReset(npc);
}

void NPCPS_CltPoolReset(NPCPSData*)
{
}

void NPCPS_grabMsg()
{
    NPCPSData* npc = NPCPS_postOffice();

    if (npc->msgfree == 0)
    {
        npc->msgfree = 0;
    }
}

void NPCPS_freeMsg(NPCMsg*)
{
}

void zNPCMsg_AreaNotify(zNPCCommon* sender, en_NPC_MSG_ID msgid, F32 rad, S32 filter,
                        en_NPCTYPES* toNPCType)
{
    // TODO: Honestly, I dont know how to finish this.

    if (g_lockarea == 0)
    {
        g_lockarea = 1;

        memset(&g_msgdata, 0, sizeof(NPCMsg));

        if (sender != NULL)
        {
            g_msgdata.from = NPC_MID_NONE;
        }
        else
        {
            msgid = (en_NPC_MSG_ID)'FAKE';
        }

        g_msgdata.from = 0;
        g_msgdata.msgid = msgid;
        g_msgdata.sendto = 0;
        g_msgdata.infotype = NPC_MDAT_BLANK;

        zNPCMsg_AreaNotify(sender, &g_msgdata, rad, filter, toNPCType);
        g_lockarea = 0;
    }
}

void zNPCMsg_AreaNotify(zNPCCommon* sender, en_NPC_MSG_ID msgid, F32 rad, S32 filter,
                        en_NPCTYPES toNPCType)
{
    // TODO: Honestly, I dont know how to finish this.

    if (g_lockarea == 0)
    {
        g_lockarea = 1;

        memset(&g_msgdata, 0, sizeof(NPCMsg));

        if (sender != NULL)
        {
            g_msgdata.from = NPC_MID_NONE;
        }
        else
        {
            msgid = (en_NPC_MSG_ID)'FAKE';
        }

        g_msgdata.from = 0;
        g_msgdata.msgid = msgid;
        g_msgdata.sendto = 0;
        g_msgdata.infotype = NPC_MDAT_BLANK;

        zNPCMsg_AreaNotify(sender, &g_msgdata, rad, filter, &toNPCType);
        g_lockarea = 0;
    }
}

void zNPCMsg_Startup()
{
    NPCPSData* tempStartup;

    tempStartup = NPCPS_postOffice();
    NPCPS_CltPoolInit(tempStartup, 0x20);
    NPCPS_MsgPoolInit(tempStartup, 0x40);
}

void zNPCMsg_SceneReset()
{
    NPCPSData* tempReset;

    tempReset = NPCPS_postOffice();
    NPCPS_CltPoolReset(tempReset);
    NPCPS_MsgPoolReset(tempReset);
}

void zNPCMsg_Timestep(xScene*, float)
{
}

void zNPCMsg_Shutdown()
{
}

S32 zNPCCommon::IsAlive()
{
    return 1;
}
