#ifndef ZNPCTYPECOMMON_H
#define ZNPCTYPECOMMON_H

#include "../Core/x/xNPCBasic.h"
#include "../Core/x/xDynAsset.h"
#include "../Core/x/xListItem.h"
#include "../Core/x/xEntDrive.h"
#include "../Core/x/xBehaveMgr.h"

#include "zNPCSndTable.h"
#include "zMovePoint.h"
#include "zShrapnel.h"

enum en_NPC_CARRY_STATE
{
    zNPCCARRY_NONE,
    zNPCCARRY_PICKUP,
    zNPCCARRY_THROW,
    zNPCCARRY_ATTEMPTPICKUP,
    zNPCCARRY_FORCEINT = 0x7fffffff
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

struct xEntNPCAsset
{
    int32 npcFlags;
    int32 npcModel;
    int32 npcProps;
    uint32 movepoint;
    uint32 taskWidgetPrime;
    uint32 taskWidgetSecond;
};

enum en_npcbtyp
{
    NPCP_BASIS_NONE,
    NPCP_BASIS_EVILROBOT,
    NPCP_BASIS_FRIENDLYROBOT,
    NPCP_BASIS_LOVINGCITIZEN,
    NPCP_BASIS_GRUMPYCITIZEN,
    NPCP_BASIS_NOMORE,
    NPCP_BASIS_FORCE = 0x7fffffff
};

enum en_dupowavmod
{
    NPCP_DUPOWAVE_CONTINUOUS,
    NPCP_DUPOWAVE_DISCREET,
    NPCP_DUPOWAVE_NOMORE,
    NPCP_DUPOWAVE_FORCE = 0x7fffffff
};

struct zNPCSettings : xDynAsset
{
    en_npcbtyp basisType;
    int8 allowDetect;
    int8 allowPatrol;
    int8 allowWander;
    int8 reduceCollide;
    int8 useNavSplines;
    int8 pad[3];
    int8 allowChase;
    int8 allowAttack;
    int8 assumeLOS;
    int8 assumeFOV;
    en_dupowavmod duploWaveMode;
    float32 duploSpawnDelay;
    int32 duploSpawnLifeMax;
};

struct NPCConfig : xListItem<NPCConfig>
{
    uint32 modelID;
    int32 flg_config;
    float32 spd_turnMax;
    float32 spd_moveMax;
    float32 fac_accelMax;
    float32 fac_driftMax;
    float32 fac_gravKnock;
    float32 fac_elastic;
    int32 pts_damage;
    int32 useBoxBound;
    xVec3 off_bound;
    xVec3 dim_bound;
    float32 npcMass;
    float32 npcMassInv;
    float32 rad_detect;
    float32 hyt_detect;
    float32 off_detect;
    float32 rad_attack;
    float32 fov_attack;
    xVec3 scl_model;
    float32 tym_attack;
    float32 tym_fidget;
    float32 tym_stun;
    float32 tym_alert;
    float32 dst_castShadow;
    float32 rad_shadowCache;
    float32 rad_shadowRaster;
    float32 rad_dmgSize;
    int32 flg_vert;
    xModelTag tag_vert[20];
    xVec3 animFrameRange[9];
    int32 cnt_esteem[5];
    float32 rad_sound;
    NPCSndTrax* snd_trax;
    NPCSndTrax* snd_traxShare;
    int32 test_count;
    uint8 talk_filter[4];
    uint8 talk_filter_size;
};

enum en_LASSO_STATUS
{
    LASS_STAT_DONE,
    LASS_STAT_PENDING,
    LASS_STAT_GRABBING,
    LASS_STAT_TOSSING,
    LASS_STAT_NOMORE,
    LASS_STAT_FORCEINT = 0x7fffffff
};

struct zNPCLassoInfo
{
    en_LASSO_STATUS stage;
    xEnt* lassoee;
    xAnimState* holdGuideAnim;
    xModelInstance* holdGuideModel;
    xAnimState* grabGuideAnim;
    xModelInstance* grabGuideModel;
};

struct zNPCCommon : xNPCBasic
{
    xEntAsset* entass;
    xEntNPCAsset* npcass;
    zNPCSettings* npcsetass;
    int32 flg_vuln;
    int32 flg_move;
    int32 flg_misc;
    int32 flg_able;
    NPCConfig* cfg_npc;
    zNPCSettings npcset;
    zMovePoint* nav_past;
    zMovePoint* nav_curr;
    zMovePoint* nav_dest;
    zMovePoint* nav_lead;
    xSpline3* spl_mvptspline;
    float32 len_mvptspline;
    float32 dst_curspline;
    xEntDrive* drv_data;
    xPsyche* psy_instinct;
    zNPCCommon* npc_duplodude;
    float32 spd_throttle;
    int32 flg_xtrarend;
    float32 tmr_fidget;
    float32 tmr_invuln;
    zShrapnelAsset* explosion;
    xModelAssetParam* parmdata;
    uint32 pdatsize;
    zNPCLassoInfo* lassdata;
    NPCSndQueue snd_queue[4];
};

void ZNPC_Common_Startup();
void ZNPC_Common_Shutdown();

#endif