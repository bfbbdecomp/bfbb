#ifndef ZNPCTYPECOMMON_H
#define ZNPCTYPECOMMON_H

#include "../Core/x/xNPCBasic.h"
#include "../Core/x/xDynAsset.h"
#include "../Core/x/xListItem.h"
#include "../Core/x/xEntDrive.h"
#include "../Core/x/xBehaveMgr.h"
#include "../Core/x/xEnt.h"

#include "zNPCSndTable.h"
#include "zNPCSpawner.h"
#include "zMovePoint.h"
#include "zShrapnel.h"

typedef struct NPCMsg;

enum en_npcparm
{
    NPC_PARM_NONE,
    NPC_PARM_MOVERATE,
    NPC_PARM_TURNRATE,
    NPC_PARM_ACCEL,
    NPC_PARM_DRIFT,
    NPC_PARM_MASS,
    NPC_PARM_TOSSGRAV,
    NPC_PARM_TOSSELASTIC,
    NPC_PARM_BND_ISBOX,
    NPC_PARM_BND_CENTER,
    NPC_PARM_BND_EXTENT,
    NPC_PARM_HITPOINTS,
    NPC_PARM_MODELSCALE,
    NPC_PARM_DETECT_RAD,
    NPC_PARM_DETECT_HYT,
    NPC_PARM_DETECT_OFF,
    NPC_PARM_ATTACK_RAD,
    NPC_PARM_ATTACK_FOV,
    NPC_PARM_SND_RAD,
    NPC_PARM_TIMEFIDGET,
    NPC_PARM_TIMEATTACK,
    NPC_PARM_TIMESTUN,
    NPC_PARM_TIMEALERT,
    NPC_PARM_VTX_ATTACKBASE,
    NPC_PARM_VTX_ATTACK,
    NPC_PARM_VTX_ATTACK1,
    NPC_PARM_VTX_ATTACK2,
    NPC_PARM_VTX_ATTACK3,
    NPC_PARM_VTX_ATTACK4,
    NPC_PARM_VTX_EYEBALL,
    NPC_PARM_VTX_DMGSMOKEA,
    NPC_PARM_VTX_DMGSMOKEB,
    NPC_PARM_VTX_DMGSMOKEC,
    NPC_PARM_VTX_DMGFLAMEA,
    NPC_PARM_VTX_DMGFLAMEB,
    NPC_PARM_VTX_DMGFLAMEC,
    NPC_PARM_VTX_PROPEL,
    NPC_PARM_VTX_EXHAUST,
    NPC_PARM_VTX_GEN01,
    NPC_PARM_VTX_GEN02,
    NPC_PARM_VTX_GEN03,
    NPC_PARM_VTX_GEN04,
    NPC_PARM_VTX_GEN05,
    NPC_PARM_ATK_SIZE01,
    NPC_PARM_ATK_FRAMES01,
    NPC_PARM_ATK_FRAMES01A,
    NPC_PARM_ATK_FRAMES01B,
    NPC_PARM_ATK_FRAMES02,
    NPC_PARM_ATK_FRAMES02A,
    NPC_PARM_ATK_FRAMES02B,
    NPC_PARM_ATK_FRAMES03,
    NPC_PARM_ATK_FRAMES03A,
    NPC_PARM_ATK_FRAMES03B,
    NPC_PARM_ESTEEM_A,
    NPC_PARM_ESTEEM_B,
    NPC_PARM_ESTEEM_C,
    NPC_PARM_ESTEEM_D,
    NPC_PARM_ESTEEM_E,
    NPC_PARM_SHADOW_CASTDIST,
    NPC_PARM_SHADOW_RADCACHE,
    NPC_PARM_SHADOW_RADRASTER,
    NPC_PARAM_TEST_COUNT,
    NPC_PARM_ENDTAG_INI,
    NPC_PARM_FIRSTMVPT,
    NPC_PARM_ENDTAG_PROPS,
    NPC_PARM_BOGUSSHARE,
    NPC_PARM_ENDTAG_SHARE,
    NPC_PARM_NOMORE,
    NPC_PARM_FORCEINT = 0x7fffffff
};

enum en_NPC_GOAL_SPOT
{
    NPC_GSPOT_START = 0x20,
    NPC_GSPOT_RESUME,
    NPC_GSPOT_FINISH,
    NPC_GSPOT_STARTALT,
    NPC_GSPOT_ALTA,
    NPC_GSPOT_ALTB,
    NPC_GSPOT_PATROLPAUSE,
    NPC_GSPOT_NOMORE,
    NPC_GSPOT_FORCEINT = 0x7fffffff
};

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

enum en_npcvibe
{
    NPC_VIBE_SOFT,
    NPC_VIBE_NORM,
    NPC_VIBE_HARD,
    NPC_VIBE_BUILD_A,
    NPC_VIBE_BUILD_B,
    NPC_VIBE_BUILD_C,
    NPC_VIBE_NOMORE,
    NPC_VIBE_FORCE = 0x7fffffff
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

enum en_mdlvert
{
    NPC_MDLVERT_ATTACKBASE,
    NPC_MDLVERT_ATTACK,
    NPC_MDLVERT_ATTACK1,
    NPC_MDLVERT_ATTACK2,
    NPC_MDLVERT_ATTACK3,
    NPC_MDLVERT_ATTACK4,
    NPC_MDLVERT_LOSEYEBALL,
    NPC_MDLVERT_DMGSMOKE_A,
    NPC_MDLVERT_DMGSMOKE_B,
    NPC_MDLVERT_DMGSMOKE_C,
    NPC_MDLVERT_DMGFLAME_A,
    NPC_MDLVERT_DMGFLAME_B,
    NPC_MDLVERT_DMGFLAME_C,
    NPC_MDLVERT_PROPEL,
    NPC_MDLVERT_EXHAUST,
    NPC_MDLVERT_GEN01,
    NPC_MDLVERT_GEN02,
    NPC_MDLVERT_GEN03,
    NPC_MDLVERT_GEN04,
    NPC_MDLVERT_GEN05,
    NPC_MDLVERT_NOMORE,
    NPC_MDLVERT_FORCEINT = 0x7fffffff
};

enum en_LASSO_EVENT
{
    LASS_EVNT_BEGIN,
    LASS_EVNT_ENDED,
    LASS_EVNT_GRABSTART,
    LASS_EVNT_GRABEND,
    LASS_EVNT_YANK,
    LASS_EVNT_ABORT,
    LASS_EVNT_NOMORE,
    LASS_EVNT_FORCEINT = 0x7fffffff
};

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
    xEntAsset* entass; // 0x1BC
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

    zNPCCommon(int32 myType);

    void VelStop();
    static void ConfigSceneDone();
    uint32 LassoInit();
    zNPCLassoInfo* GimmeLassInfo();
    void AddDEVGoals();
    void DBG_AddTweakers();
    void DBG_RptDataSize();
    xAnimTable* AnimGetTable();
    float32 AnimTimeRemain(xAnimState* ast);
    bool IsMountableType(en_ZBASETYPE type);
    void MvptReset(zMovePoint* nav_goto);
    void ModelScaleSet(float32 x, float32 y, float32 z);
    void ModelScaleSet(const xVec3* vec);
    int32 AnimStart(uint32 animID, int32 forceRestart);
    uint32 AnimCurStateID();
    void GiveReward();
    int32 SndPlayRandom(en_NPC_SOUND sndtype);
    int32 SndChanIsBusy(int32 flg_chan);
    int32 LassoUseGuides(int32 idx_grabmdl, int32 idx_holdmdl);
    int32 GetVertPos(en_mdlvert vid, xVec3* pos);
    void Vibrate(en_npcvibe vibe, float32 duration);
    void AddScripting(xPsyche* psy,
                      int32 (*eval_script)(xGoal*, void*, en_trantype*, float32, void*),
                      int32 (*eval_playanim)(xGoal*, void*, en_trantype*, float32, void*),
                      int32 (*eval_attack)(xGoal*, void*, en_trantype*, float32, void*),
                      int32 (*eval_move)(xGoal*, void*, en_trantype*, float32, void*),
                      int32 (*eval_follow)(xGoal*, void*, en_trantype*, float32, void*),
                      int32 (*eval_lead)(xGoal*, void*, en_trantype*, float32, void*),
                      int32 (*eval_wait)(xGoal*, void*, en_trantype*, float32, void*));
    void AddBaseline(xPsyche*, int (*)(xGoal*, void*, en_trantype*, float, void*),
                     int (*)(xGoal*, void*, en_trantype*, float, void*),
                     int (*)(xGoal*, void*, en_trantype*, float, void*),
                     int (*)(xGoal*, void*, en_trantype*, float, void*),
                     int (*)(xGoal*, void*, en_trantype*, float, void*));

    // vTable (xNPCBasic)

    virtual void Init(xEntAsset* asset);
    virtual void Reset();
    virtual void Setup();
    virtual void Process(xScene* xscn, float32 dt);
    virtual void BUpdate(xVec3* pos);
    virtual void NewTime(xScene* xscn, float32 dt);
    virtual void Move(xScene* xscn, float32 dt, xEntFrame*);
    virtual int32 SysEvent(xBase* from, xBase* to, uint32 toEvent, const float32* toParam,
                           xBase* toParamWidget, int32* handled);
    virtual void CollideReview();
    virtual void Destroy();

    // vTable (zNPCCommon)
    virtual int32 NPCMessage(NPCMsg* mail);
    virtual void RenderExtra();
    virtual void RenderExtraPostParticles();
    virtual void ParseINI();
    virtual void ParseLinks();
    virtual void ParseProps();
    virtual void SelfSetup();
    virtual void SelfDestroy();
    virtual int32 IsHealthy();
    virtual int32 IsAlive();
    virtual void Damage(en_NPC_DAMAGE_TYPE damtype, xBase* who, const xVec3* vec_hit);
    virtual int32 Respawn(const xVec3* pos, zMovePoint* mvptFirst, zMovePoint* mvptSpawnRef);
    virtual void DuploOwner(zNPCCommon* duper);
    virtual void DuploNotice(en_SM_NOTICES, void*);
    virtual int32 CanRope();
    virtual void LassoNotify(en_LASSO_EVENT event);
    virtual int32 SetCarryState(en_NPC_CARRY_STATE);
    virtual void Stun(float32 stuntime);
    virtual void SpeakBegin();
    virtual void SpeakEnd();
    virtual void SpeakStart(uint32 sound, uint32 param_2, int32 param_3);
    virtual void SpeakStop();

    virtual uint32 AnimPick(int32 animID, en_NPC_GOAL_SPOT gspot, xGoal* goal)
    {
        return 0;
    }

    virtual void GetParm(en_npcparm pid, void* val);
    virtual void GetParmDefault(en_npcparm pid, void* val);
    virtual float32 GenShadCacheRad();
    virtual xEntDrive* PRIV_GetDriverData();
    virtual zNPCLassoInfo* PRIV_GetLassoData();
    virtual int32 LassoSetup();

protected:
    // This prevents implicit destructors from being generated in subclasses of zNPCCommon
    ~zNPCCommon();
};

struct NPCSysEvent
{
    int32 doLinkEvents;
    int32 handled;
    xBase* from;
    xBase* to;
    uint32 toEvent;
    float32 toParam[4];
    xBase* toParamWidget;
};

struct NPCBlastInfo
{
    xVec3 pos_blast;
    float32 rad_blast;
    float32 spd_expand;
};

struct NPCChatInfo
{
    xVec3 pos_chat;
    float32 tym_chat;
};

struct NPCSpawnInfo
{
    xVec3 pos_spawn;
    zMovePoint* nav_firstMovepoint;
    zMovePoint* nav_spawnReference;
    int32 spawnSuccess;
};

struct NPCTargetInfo
{
    xBase* bas_tgt;
    xVec3 pos_tgt;
};

struct NPCDamageInfo
{
    en_NPC_DAMAGE_TYPE dmg_type;
    xBase* dmg_from;
    xVec3 vec_dmghit;
};

struct NPCStunInfo
{
    float32 tym_stuntime;
    en_NPC_CARRY_STATE carrystate;
    int32 allowStun;
};

struct NPCScriptInfo
{
    uint32 aid_playanim;
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
    uint32 sendto;
    uint32 from;
    en_NPC_MSG_DATA infotype;
    union
    {
        NPCSysEvent sysevent;
        NPCBlastInfo blastarea;
        NPCChatInfo chatter;
        NPCSpawnInfo spawning;
        NPCTargetInfo target;
        NPCDamageInfo dmgdata;
        NPCStunInfo stundata;
        NPCScriptInfo scriptdata;
        NPCMountInfo mountdata;
        NPCAreaInfo areadata;
    };
    void* attached;
    NPCMsg* next;
    float32 tmr_delay;
};

xFactoryInst* ZNPC_Create_Common(int32 who, RyzMemGrow* grow, void*);
void ZNPC_Destroy_Common(xFactoryInst* inst);
void zNPCCommon_ScenePrepare();
void zNPCCommon_SceneFinish();
void zNPCPlyrSnd_Reset();
void zNPCPlyrSnd_Update(float32 dt);
void zNPCCommon_SceneReset();
void ZNPC_Destroy_Common(xFactoryInst* inst);
void zNPCSettings_MakeDummy();
void ZNPC_Common_Startup();
void zNPCCommon_WonderReset();
void ZNPC_Common_Shutdown();
void NPCC_BuildStandardAnimTran(xAnimTable* table, char** namelist, int32* ourAnims, int32 idx_dflt,
                                float32 blend);
void zNPCCommon_EjectPhlemOnPawz();

#endif