#ifndef ZNPCTYPECOMMON_H
#define ZNPCTYPECOMMON_H

#include "xNPCBasic.h"
#include "xDynAsset.h"
#include "xListItem.h"
#include "xEntDrive.h"
#include "xBehaveMgr.h"
#include "xEnt.h"
#include "xSFX.h"

#include "zNPCSndTable.h"
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
    S32 npcFlags;
    S32 npcModel;
    S32 npcProps;
    U32 movepoint;
    U32 taskWidgetPrime;
    U32 taskWidgetSecond;
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
    S8 allowDetect;
    U8 allowPatrol;
    U8 allowWander;
    U8 reduceCollide;
    S8 useNavSplines;
    S8 pad[3];
    S8 allowChase;
    S8 allowAttack;
    S8 assumeLOS;
    S8 assumeFOV;
    en_dupowavmod duploWaveMode;
    F32 duploSpawnDelay;
    S32 duploSpawnLifeMax;
};

struct NPCConfig : xListItem<NPCConfig>
{
    U32 modelID;
    S32 flg_config;
    F32 spd_turnMax;
    F32 spd_moveMax;
    F32 fac_accelMax;
    F32 fac_driftMax;
    F32 fac_gravKnock;
    F32 fac_elastic;
    S32 pts_damage;
    S32 useBoxBound;
    xVec3 off_bound;
    xVec3 dim_bound;
    F32 npcMass;
    F32 npcMassInv;
    F32 rad_detect;
    F32 hyt_detect;
    F32 off_detect;
    F32 rad_attack;
    F32 fov_attack;
    xVec3 scl_model;
    F32 tym_attack;
    F32 tym_fidget;
    F32 tym_stun;
    F32 tym_alert;
    F32 dst_castShadow;
    F32 rad_shadowCache;
    F32 rad_shadowRaster;
    F32 rad_dmgSize;
    S32 flg_vert;
    xModelTag tag_vert[20];
    xVec3 animFrameRange[9];
    S32 cnt_esteem[5];
    F32 rad_sound;
    NPCSndTrax* snd_trax; // 0x39C
    NPCSndTrax* snd_traxShare; // 0x3A0
    S32 test_count;
    U8 talk_filter[4];
    U8 talk_filter_size;
};

enum en_LASSO_STATUS
{
    LASS_STAT_DONE,
    LASS_STAT_PENDING,
    LASS_STAT_GRABBING,
    LASS_STAT_TOSSING,
    LASS_STAT_NOMORE,
    LASS_STAT_UNK_5, // needed to match switch in zNPCCommon::LassoNotify, checks value of 5
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

enum en_SM_NOTICES
{
    SM_NOTE_NPCDIED,
    SM_NOTE_NPCSTANDBY,
    SM_NOTE_NPCALIVE,
    SM_NOTE_DUPPAUSE,
    SM_NOTE_DUPRESUME,
    SM_NOTE_DUPSETDELAY,
    SM_NOTE_DUPDEAD,
    SM_NOTE_KILLKIDS,
    SM_NOTE_NOMORE,
    SM_NOTE_FORCE = 0x7fffffff
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
    xEntNPCAsset* npcass; // 0x1C0
    zNPCSettings* npcsetass; // 0x1C4
    S32 flg_vuln; // 0x1C8
    S32 flg_move; // 0x1CC
    S32 flg_misc; // 0x1D0
    S32 flg_able; // 0x1D4
    NPCConfig* cfg_npc; // 0x1D8
    zNPCSettings npcset; // 0x1DC
    zMovePoint* nav_past; // 0x208
    zMovePoint* nav_curr; // 0x20C
    zMovePoint* nav_dest; // 0x210
    zMovePoint* nav_lead;
    xSpline3* spl_mvptspline;
    F32 len_mvptspline;
    F32 dst_curspline;
    xEntDrive* drv_data;
    xPsyche* psy_instinct; // 0x228
    zNPCCommon* npc_duplodude;
    F32 spd_throttle;
    S32 flg_xtrarend;
    F32 tmr_fidget;
    F32 tmr_invuln; // 0x23C
    zShrapnelAsset* explosion;
    xModelAssetParam* parmdata;
    U32 pdatsize;
    zNPCLassoInfo* lassdata;
    NPCSndQueue snd_queue[4];

    zNPCCommon(S32 myType);

    F32 TurnToFace(F32 dt, const xVec3* dir_want, F32 useTurnRate);
    F32 ThrottleApply(F32 dt, const xVec3* dir, S32 force3D);
    F32 ThrottleAccel(F32 dt, S32 speedup, F32 pct_max);
    F32 ThrottleAdjust(F32 dt, F32 spd_want, F32 accel);

    F32 BoundAsRadius(int useCfg);
    void VelStop();
    static void ConfigSceneDone();
    U32 LassoInit();
    zNPCLassoInfo* GimmeLassInfo();
    void AddDEVGoals(xPsyche*);
    U32 DBG_Name(); // return type might be wrong
    void DBG_AddTweakers();
    void DBG_RptDataSize();
    U32 DBG_InstName(); // return type might be wrong
    xAnimTable* AnimGetTable();
    F32 AnimTimeRemain(xAnimState* ast);
    F32 AnimTimeCurrent();
    F32 AnimDuration(xAnimState* ast);
    bool IsMountableType(en_ZBASETYPE type);
    void MvptReset(zMovePoint* nav_goto);
    S32 MvptCycle();
    void ModelScaleSet(F32 x, F32 y, F32 z);
    void ModelScaleSet(F32 unk);
    void ModelScaleSet(const xVec3* vec);
    xModelInstance* ModelAtomicFind(int index, int idx_prev, xModelInstance* mdl_prev);
    xModelInstance* ModelAtomicHide(int index, xModelInstance* mdl);
    xModelInstance* ModelAtomicShow(int index, xModelInstance* mdl);
    S32 AnimStart(U32 animID, S32 forceRestart);
    xAnimState* AnimFindState(U32 animID);
    xAnimState* AnimCurState();
    xAnimSingle* AnimCurSingle();
    U32 AnimCurStateID();
    void GiveReward();
    S32 SndPlayFromSFX(xSFX* sfx, U32* sid_played);
    S32 SndPlayRandom(en_NPC_SOUND sndtype);
    S32 SndChanIsBusy(S32 flg_chan);
    S32 LassoUseGuides(S32 idx_grabmdl, S32 idx_holdmdl);
    S32 GetVertPos(en_mdlvert vid, xVec3* pos);
    void Vibrate(en_npcvibe vibe, F32 duration);
    void AddScripting(xPsyche* psy,
                      S32 (*eval_script)(xGoal*, void*, en_trantype*, F32, void*),
                      S32 (*eval_playanim)(xGoal*, void*, en_trantype*, F32, void*),
                      S32 (*eval_attack)(xGoal*, void*, en_trantype*, F32, void*),
                      S32 (*eval_move)(xGoal*, void*, en_trantype*, F32, void*),
                      S32 (*eval_follow)(xGoal*, void*, en_trantype*, F32, void*),
                      S32 (*eval_lead)(xGoal*, void*, en_trantype*, F32, void*),
                      S32 (*eval_wait)(xGoal*, void*, en_trantype*, F32, void*));
    void AddBaseline(xPsyche*, int (*)(xGoal*, void*, en_trantype*, float, void*),
                     int (*)(xGoal*, void*, en_trantype*, float, void*),
                     int (*)(xGoal*, void*, en_trantype*, float, void*),
                     int (*)(xGoal*, void*, en_trantype*, float, void*),
                     int (*)(xGoal*, void*, en_trantype*, float, void*));

    // defined from zNPCGoalRobo.cpp
    xVec3* Center();
    xVec3* Pos();
    RwMatrix* BoneMat(S32 unk) const;
    RwV3d* BonePos(S32 unk) const;
    void XZVecToPlayer(xVec3* unk1, F32* unk2);
    F32 XZDstSqToPos(const xVec3* unk1, xVec3* unk2, F32* unk3);
    void XZVecToPos(xVec3* unk1, const xVec3* unk2, F32* unk3);
    void XYZVecToPos(xVec3* dest, xVec3* unk2)
    {
        xVec3Sub(dest, unk2, Pos());
    }
    F32 XYZDstSqToPlayer(xVec3* unk);
    F32 XYZDstSqToPos(xVec3* unk1, xVec3* dest)
    {
        xVec3 dest_vec;
        if (dest == NULL)
        {
            dest = &dest_vec;
        }
        XYZVecToPos(dest, unk1);
        return xVec3Length2(dest);
    }
    void WonderOfTalking(S32 inprogress, xBase* owner);
    // return type is probably wrong
    S32 SomethingWonderful();
    S32 SndIsAnyPlaying();

    // vTable (xNPCBasic)

    virtual void Init(xEntAsset* asset);
    virtual void Reset();
    virtual void Setup();
    virtual void Process(xScene* xscn, F32 dt);
    virtual void BUpdate(xVec3* pos);
    virtual void NewTime(xScene* xscn, F32 dt);
    virtual void Move(xScene* xscn, F32 dt, xEntFrame*);
    virtual S32 SysEvent(xBase* from, xBase* to, U32 toEvent, const F32* toParam,
                           xBase* toParamWidget, S32* handled);
    virtual void CollideReview();
    virtual void Destroy();

    // vTable (zNPCCommon)
    virtual S32 NPCMessage(NPCMsg* mail);
    virtual void RenderExtra();
    virtual void RenderExtraPostParticles();
    virtual void ParseINI();
    virtual void ParseLinks();
    virtual void ParseProps();
    virtual void SelfSetup();
    virtual void SelfDestroy();
    virtual S32 IsHealthy();
    virtual S32 IsAlive();
    virtual void Damage(en_NPC_DAMAGE_TYPE damtype, xBase* who, const xVec3* vec_hit);
    virtual S32 Respawn(const xVec3* pos, zMovePoint* mvptFirst, zMovePoint* mvptSpawnRef);
    virtual void DuploOwner(zNPCCommon* duper);
    virtual void DuploNotice(en_SM_NOTICES, void*);
    virtual S32 CanRope();
    virtual void LassoNotify(en_LASSO_EVENT event);
    virtual S32 SetCarryState(en_NPC_CARRY_STATE);
    virtual void Stun(F32 stuntime);
    virtual void SpeakBegin();
    virtual void SpeakEnd();
    virtual void SpeakStart(U32 sound, U32 param_2, S32 param_3);
    virtual void SpeakStop();

    virtual U32 AnimPick(S32 animID, en_NPC_GOAL_SPOT gspot, xGoal* goal)
    {
        return 0;
    }

    virtual void GetParm(en_npcparm pid, void* val);
    virtual void GetParmDefault(en_npcparm pid, void* val);
    virtual F32 GenShadCacheRad();
    virtual xEntDrive* PRIV_GetDriverData();
    virtual zNPCLassoInfo* PRIV_GetLassoData();
    virtual S32 LassoSetup();

protected:
    // This prevents implicit destructors from being generated in subclasses of zNPCCommon
    ~zNPCCommon();
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

struct NPCDamageInfo
{
    en_NPC_DAMAGE_TYPE dmg_type;
    xBase* dmg_from;
    xVec3 vec_dmghit;
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

xFactoryInst* ZNPC_Create_Common(S32 who, RyzMemGrow* grow, void*);
void ZNPC_Destroy_Common(xFactoryInst* inst);
void zNPCCommon_ScenePrepare();
void zNPCCommon_ScenePostInit();
void zNPCCommon_SceneFinish();
void zNPCPlyrSnd_Reset();
void zNPCPlyrSnd_Update(F32 dt);
void zNPCCommon_SceneReset();
void ZNPC_Destroy_Common(xFactoryInst* inst);
void zNPCSettings_MakeDummy();
void ZNPC_Common_Startup();
void zNPCCommon_WonderReset();
void ZNPC_Common_Shutdown();
void NPCC_BuildStandardAnimTran(xAnimTable* table, char** namelist, S32* ourAnims, S32 idx_dflt,
                                F32 blend);
S32 NPCC_NPCIsConversing();
void zNPCCommon_EjectPhlemOnPawz();
U32 xSndIsPlaying(U32 assetID, U32 parid);

#endif
