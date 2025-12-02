#ifndef ZNPCMESSENGER_H
#define ZNPCMESSENGER_H

#include <types.h>
#include "xBase.h"
#include "xVec3.h"
#include "zMovePoint.h"
#include "zNPCTypes.h"

struct zNPCCommon;

enum en_NPC_MSG_ID
{
    NPC_MID_NONE,
    NPC_MID_SYSEVENT,
    NPC_MID_RESPAWN,
    NPC_MID_DAMAGE,
    NPC_MID_EXPLOSION,
    NPC_MID_BUNNYHOP,
    NPC_MID_DTRON_NPCEMIT,
    NPC_MID_DTRON_NPCAVAIL,
    NPC_MID_DTRON_ISDEAD,
    NPC_MID_CHAT_REQUEST,
    NPC_MID_CHAT_DECLINE,
    NPC_MID_CHAT_ACCEPT,
    NPC_MID_CHAT_DONE,
    NPC_MID_CHAT_ABORT,
    NPC_MID_TALKSTART,
    NPC_MID_TALKON,
    NPC_MID_TALKOFF,
    NPC_MID_SAWPLYR,
    NPC_MID_NEEDMEDIC,
    NPC_MID_UNDERATTACK,
    NPC_MID_NPCDIED,
    NPC_MID_PLYRSPATULA,
    NPC_MID_BECOMESCARED,
    NPC_MID_NOLONGERSCARED,
    NPC_MID_CELEBRATE,
    NPC_MID_STUN,
    NPC_MID_SCRIPTBEGIN,
    NPC_MID_SCRIPTEND,
    NPC_MID_SCRIPTHALT,
    NPC_MID_DEV_ANIMSPIN,
    NPC_MID_DEV_ANIMCYCLE,
    NPC_MID_DEV_HEROMODE,
    NPC_MID_DEV_DONE,
    NPC_MID_NOMORE,
    NPC_MID_FORCE = 0x7fffffff
};

enum en_NPC_MSG_DATA
{
    NPC_MDAT_BLANK,
    NPC_MDAT_SYSEVENT,
    NPC_MDAT_BLAST,
    NPC_MDAT_CHAT,
    NPC_MDAT_SPAWN,
    NPC_MDAT_TARGET,
    NPC_MDAT_DAMAGE,
    NPC_MDAT_STUN,
    NPC_MDAT_SCRIPT,
    NPC_MDAT_MOUNT,
    NPC_MDAT_AREANOTIFY,
    NPC_MDAT_NOMORE,
    NPC_MDAT_FORCE = 0x7fffffff
};

struct NPCSysEvent
{
    S32 doLinkEvents;
    S32 handled;
    xBase* from;
    xBase* to;
    U32 toEvent;
    F32 toParam[4];
    xBase* toParamWidget;
};

struct NPCBlastInfo
{
    xVec3 pos_blast;
    F32 rad_blast;
    F32 spd_expand;
};

struct NPCChatInfo
{
    xVec3 pos_chat;
    F32 tym_chat;
};

struct NPCSpawnInfo
{
    xVec3 pos_spawn;
    zMovePoint* nav_firstMovepoint;
    zMovePoint* nav_spawnReference;
    S32 spawnSuccess;
};

struct NPCTargetInfo
{
    xBase* bas_tgt;
    xVec3 pos_tgt;
};

enum en_NPC_DAMAGE_TYPE
{
    DMGTYP_UNDECIDED,
    DMGTYP_ABOVE,
    DMGTYP_BELOW,
    DMGTYP_SIDE,
    DMGTYP_INSTAKILL,
    DMGTYP_KILLEVENT,
    DMGTYP_HITBYTOSS,
    DMGTYP_NPCATTACK,
    DMGTYP_ROPE,
    DMGTYP_CRUISEBUBBLE,
    DMGTYP_PROJECTILE,
    DMGTYP_BOULDER,
    DMGTYP_BUBBOWL,
    DMGTYP_THUNDER_TIKI_EXPLOSION,
    DMGTYP_DAMAGE_SURFACE,
    DMGTYP_BUNGEED,
    DMGTYP_SURFACE,
    DMGTYP_NOMORE,
    DMGTYP_FORCEINT = 0x7fffffff
};

struct NPCDamageInfo
{
    en_NPC_DAMAGE_TYPE dmg_type;
    xBase* dmg_from;
    xVec3 vec_dmghit;
};

enum en_NPC_CARRY_STATE
{
    zNPCCARRY_NONE,
    zNPCCARRY_PICKUP,
    zNPCCARRY_THROW,
    zNPCCARRY_ATTEMPTPICKUP,
    zNPCCARRY_FORCEINT = 0x7fffffff
};

struct NPCStunInfo
{
    F32 tym_stuntime;
    en_NPC_CARRY_STATE carrystate;
    S32 allowStun;
};

struct NPCScriptInfo
{
    U32 aid_playanim;
};

struct NPCMountInfo
{
    xEnt* ent_toMount;
    xCollis* col_forMount;
};

struct NPCAreaInfo
{
    zNPCCommon* npc_origin;
    xVec3 pos_origin;
};



struct NPCMsg
{
    en_NPC_MSG_ID msgid;
    U32 sendto;
    U32 from;
    en_NPC_MSG_DATA infotype; // 0xC
    union
    {
        NPCSysEvent sysevent;
        NPCBlastInfo blastarea;
        NPCChatInfo chatter;
        NPCSpawnInfo spawning;
        NPCTargetInfo target;
        NPCDamageInfo dmgdata; // 0x10
        NPCStunInfo stundata;
        NPCScriptInfo scriptdata;
        NPCMountInfo mountdata;
        NPCAreaInfo areadata;
    };
    void* attached; // 0x38
    NPCMsg* next;
    F32 tmr_delay; // 0x40
};

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
/* TODO: en_NPC_MSG_ID definition in zNPCTypeCommon.h is causing issues here */
void zNPCMsg_AreaNotify(zNPCCommon* sender, en_NPC_MSG_ID msgid, F32 rad, S32 filter,
                        en_NPCTYPES toNPCType);
void zNPCMsg_AreaNotify(zNPCCommon* sender, en_NPC_MSG_ID msgid, F32 rad, S32 filter,
                        en_NPCTYPES* toNPCType);


void zNPCMsg_AreaNotify(zNPCCommon* sender, NPCMsg* msg, F32 radius, S32 filter,
                        en_NPCTYPES* npcTypeList);
void zNPCMsg_AreaPlayerStun(F32 stuntime, F32 radius, xVec3* pos);
void zNPCMsg_AreaNPCExplodeNoRobo(zNPCCommon* wh, F32 radius, const xVec3* pos_fromHere);
void zNPCMsg_SendMsg(en_NPC_MSG_ID msgevent, U32 npc_id);
void zNPCMsg_SendMsg(en_NPC_MSG_ID msgevent, zNPCCommon* npc_sendto);
void zNPCMsg_SendMsg(NPCMsg* inmsg, zNPCCommon* npc_sendto);
void zNPCMsg_SendMsg(NPCMsg* inmsg, F32 delay, zNPCCommon* npc_sendto);
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
