#include "zNPCTypeCommon.h"

#include <types.h>
#include <string.h>

#include "zCombo.h"
#include "zEntButton.h"
#include "zEntCruiseBubble.h"
#include "zEntTeleportBox.h"
#include "zGlobals.h"
#include "zGrid.h"
#include "zNPCGoals.h"
#include "zNPCTypes.h"
#include "zNPCSndTable.h"
#include "zNPCSndLists.h"
#include "zNPCSupport.h"
#include "zNPCFXCinematic.h"

#include "iCollide.h"
#include "iModel.h"
#include "iSnd.h"

#include "xDebug.h"
#include "xDraw.h"
#include "xString.h"

// Finish porting code from bfbbpc repo

#define Unknown 0
#define LassoGuide_Grab01 1
#define LassoGuide_Hold01 2

extern char zNPCTypeCommon_strings[];
static char* g_strz_lassanim[3] = { "Unknown", "LassoGuide_Grab01", "LassoGuide_Hold01" };
extern S32 g_hash_lassanim[3];
extern volatile S32 g_skipDescent;
extern NPCConfig* g_ncfghead;
static zNPCSettings* g_dflt_npcsettings;
extern F32 lbl_803CE4C0;
extern S32 g_flg_wonder;
extern S32 g_isConversation;
extern xBase* g_ownerConversation;
extern F32 g_tmr_talkless;

static char* g_strz_params[NPC_PARM_NOMORE] = {
    "Empty",
    "MoveSpeed",
    "TurnSpeed",
    "FactorAccel",
    "FactorDrift",
    "FactorMass",
    "FactorGravKnock",
    "FactorElasticity",
    "BoundMainIsBox",
    "BoundMainCenter",
    "BoundMainExtent",
    "HitPoints",
    "ScaleModel",
    "DetectRadius",
    "DetectHeight",
    "DetectOffset",
    "AttackRadius",
    "AttackFOV",
    "SoundRadius",
    "DelayFidget",
    "AttackPeriod",
    "StunTime",
    "AlertTime",
    "VtxAttackBase",
    "VtxAttack",
    "VtxAttack1",
    "VtxAttack2",
    "VtxAttack3",
    "VtxAttack4",
    "VtxEyeball",
    "VtxDmgSmokeA",
    "VtxDmgSmokeB",
    "VtxDmgSmokeC",
    "VtxDmgFlameA",
    "VtxDmgFlameB",
    "VtxDmgFlameC",
    "VtxPropel",
    "VtxExhaust",
    "VtxGen01",
    "VtxGen02",
    "VtxGen03",
    "VtxGen04",
    "VtxGen05",
    "AttackSize01",
    "AttackFrames01",
    "AttackFrames01a",
    "AttackFrames01b",
    "AttackFrames02",
    "AttackFrames02a",
    "AttackFrames02b",
    "AttackFrames03",
    "AttackFrames03a",
    "AttackFrames03b",
    "EsteemSlotA",
    "EsteemSlotB",
    "EsteemSlotC",
    "EsteemSlotD",
    "EsteemSlotE",
    "DistShadowCast",
    "ShadowCacheRadius",
    "ShadowRasterRadius",
    "TestCount",
    "EndTag_INIOnly",
    "FirstMovepoint",
    "EndTag_PropsOnly",
    "Bogus_Share",
    "EndTag_Shared",
};

static en_npcparm mdlVertToParm[NPC_MDLVERT_NOMORE] = {
    NPC_PARM_VTX_ATTACKBASE, NPC_PARM_VTX_ATTACK,    NPC_PARM_VTX_ATTACK1,   NPC_PARM_VTX_ATTACK2,
    NPC_PARM_VTX_ATTACK3,    NPC_PARM_VTX_ATTACK4,   NPC_PARM_VTX_EYEBALL,   NPC_PARM_VTX_DMGSMOKEA,
    NPC_PARM_VTX_DMGSMOKEB,  NPC_PARM_VTX_DMGSMOKEC, NPC_PARM_VTX_DMGFLAMEA, NPC_PARM_VTX_DMGFLAMEB,
    NPC_PARM_VTX_DMGFLAMEC,  NPC_PARM_VTX_PROPEL,    NPC_PARM_VTX_EXHAUST,   NPC_PARM_VTX_GEN01,
    NPC_PARM_VTX_GEN02,      NPC_PARM_VTX_GEN03,     NPC_PARM_VTX_GEN04,     NPC_PARM_VTX_GEN05,
};

xFactoryInst* ZNPC_Create_Common(S32 who, RyzMemGrow* grow, void*)
{
    zNPCCommon* com = NULL;

    switch (who)
    {
    case NPC_TYPE_COMMON:
    {
        com = new (who, grow) zNPCCommon(who);
        break;
    }
    }

    return com;
}

void ZNPC_Destroy_Common(xFactoryInst* inst)
{
    delete inst;
}

void ZNPC_Common_Startup()
{
    S32 i;

    for (i = 0; i < 3; i++)
    {
        g_hash_lassanim[i] = xStrHash(g_strz_lassanim[i]);
    }

    NPCSupport_Startup();
    NPCS_Startup();
    zNPCSettings_MakeDummy();
    zNPCFXStartup();
}

void ZNPC_Common_Shutdown()
{
    NPCS_Shutdown();
    NPCSupport_Shutdown();
    zNPCFXShutdown();
}

void zNPCCommon_ScenePrepare()
{
    NPCS_SndTimersReset();
    NPCS_SndTablePrepare(g_sndTrax_General);
    NPCSupport_ScenePrepare();
    zNPCCommon_WonderReset();
    g_skipDescent = 5;
}

void zNPCCommon_SceneFinish()
{
    zNPCCommon::ConfigSceneDone();
    NPCSupport_SceneFinish();
    xDebugRemoveTweak("NPC"); //(zNPCTypeCommon_strings + 0x42b);
}

void zNPCCommon_SceneReset()
{
    NPCSupport_SceneReset();
    zNPCPlyrSnd_Reset();
    g_skipDescent = 5;
}

void zNPCCommon_ScenePostInit()
{
    NPCSupport_ScenePostInit();
}

void zNPCCommon_Timestep(xScene* scene, F32 dt)
{
    NPCSupport_Timestep(dt);
    NPCS_SndTimersUpdate(dt);
    zNPCPlyrSnd_Update(dt);
    g_skipDescent -= 1;
    if (g_skipDescent < 0)
    {
        g_skipDescent = 0;
    }
}

void zNPCCommon::Init(xEntAsset* entass)
{
    xSceneID2Name(globals.sceneCur, entass->id);
    xNPCBasic::Init(entass);

    this->entass = entass;
    this->npcass = (xEntNPCAsset*)(entass + 1);

    xLinkAsset* npclinx = (xLinkAsset*)(this->npcass + 1);
    if (linkCount)
    {
        this->link = npclinx;
    }
    else
    {
        this->link = NULL;
    }

    this->parmdata = zEntGetModelParams(this->entass->modelInfoID, &this->pdatsize);

    this->cfg_npc = this->ConfigFind(this->entass->modelInfoID);
    if (!this->cfg_npc)
    {
        this->cfg_npc = this->ConfigCreate(this->entass->modelInfoID);
        this->ParseINI();
    }

    if (this->cfg_npc && xVec3Length2(&this->cfg_npc->scl_model) > 0.0f)
    {
        this->flg_misc |= 0x4;
    }

    this->InitBounds();
}

void zNPCCommon::InitBounds()
{
    NPCConfig* cfg = this->cfg_npc;
    xVec3 half = {};
    xSphere* sph = &this->bound.sph;
    xBBox* box = &this->bound.box;

    if (cfg->useBoxBound)
    {
        this->bound.type = XBOUND_TYPE_BOX;
    }
    else
    {
        this->bound.type = XBOUND_TYPE_SPHERE;
    }

    S32 r28;
    if (xVec3Length2(&cfg->off_bound) > 0.0f)
    {
        r28 = 1;
    }
    else
    {
        r28 = 0;
    }

    if (xVec3Length2(&cfg->dim_bound) > 0.0f)
    {
        xSceneID2Name(globals.sceneCur, this->id);
        this->DBG_Name();

        if (this->bound.type == XBOUND_TYPE_SPHERE)
        {
            sph->r = cfg->dim_bound.x;
            xVec3Copy(&sph->center, xEntGetPos(this));
            xVec3AddTo(&sph->center, &cfg->off_bound);
        }
        else
        {
            xVec3SMul(&half, &cfg->dim_bound, 0.5f);
            xVec3Copy(&box->center, xEntGetPos(this));
            xVec3AddTo(&box->center, &cfg->off_bound);
            xVec3Add(&box->box.upper, &box->center, &half);
            xVec3Sub(&box->box.lower, &box->center, &half);
        }
    }
    else
    {
        xSceneID2Name(globals.sceneCur, this->id);
        this->DBG_Name();

        switch (this->bound.type)
        {
        case XBOUND_TYPE_SPHERE:
            iSphereForModel(sph, this->model);
            cfg->dim_bound.x = sph->r;
            cfg->dim_bound.y = 0.0f;
            cfg->dim_bound.z = 0.0f;
            if (!r28)
            {
                xVec3Copy(&cfg->off_bound, &sph->center);
                cfg->off_bound.y = MAX(cfg->off_bound.y, sph->r);
            }
            sph->r = cfg->dim_bound.x;
            xVec3Copy(&sph->center, xEntGetPos(this));
            xVec3AddTo(&sph->center, &cfg->off_bound);
            break;
        case XBOUND_TYPE_BOX:
        case XBOUND_TYPE_OBB:
            iBoxForModel(&box->box, this->model);
            xVec3Sub(&cfg->dim_bound, &box->box.upper, &box->box.lower);
            if (!r28)
            {
                xVec3SMul(&cfg->off_bound, &cfg->dim_bound, 0.5f);
            }
            xVec3SMul(&half, &cfg->dim_bound, 0.5f);
            xVec3Copy(&box->center, xEntGetPos(this));
            xVec3AddTo(&box->center, &cfg->off_bound);
            xVec3Add(&box->box.upper, &box->center, &half);
            xVec3Sub(&box->box.lower, &box->center, &half);
            break;
        }
    }
}

void zNPCCommon::Setup()
{
    xSceneID2Name(globals.sceneCur, this->id);

    xNPCBasic::Setup();

    this->DBG_InstName();
    this->DBG_RptDataSize();

    this->npcsetass = zNPCSettings_Find(this->npcass->npcProps);

    this->ParseLinks();

    if (this->LassoInit())
    {
        this->LassoSetup();
    }

    this->SelfSetup();
    this->DBG_AddTweakers();

    switch (this->SelfType())
    {
    case NPC_TYPE_HAMMER:
    case NPC_TYPE_HAMSPIN:
        this->explosion = (zShrapnelAsset*)xSTFindAsset(xStrHash("hammer_shrapnel"), NULL);
        break;
    case NPC_TYPE_TARTAR:
        this->explosion = (zShrapnelAsset*)xSTFindAsset(xStrHash("tartar_shrapnel"), NULL);
        break;
    case NPC_TYPE_FODDER:
        this->explosion = (zShrapnelAsset*)xSTFindAsset(xStrHash("fodder_shrapnel"), NULL);
        break;
    case NPC_TYPE_FODBZZT:
        this->explosion = (zShrapnelAsset*)xSTFindAsset(xStrHash("robot_0a_bzzt_shrapnel"), NULL);
        break;
    case NPC_TYPE_CHOMPER:
        this->explosion =
            (zShrapnelAsset*)xSTFindAsset(xStrHash("robot_0a_chomper_shrapnel"), NULL);
        break;
    case NPC_TYPE_GLOVE:
        this->explosion = (zShrapnelAsset*)xSTFindAsset(xStrHash("g-love_shrapnel"), NULL);
        break;
    case NPC_TYPE_MONSOON:
        this->explosion =
            (zShrapnelAsset*)xSTFindAsset(xStrHash("robot_4a_monsoon_shrapnel"), NULL);
        break;
    case NPC_TYPE_SLEEPY:
        this->explosion =
            (zShrapnelAsset*)xSTFindAsset(xStrHash("robot_sleepy-time_shrapnel"), NULL);
        break;
    case NPC_TYPE_ARFARF:
        this->explosion = (zShrapnelAsset*)xSTFindAsset(xStrHash("robot_arf_shrapnel"), NULL);
        break;
    case NPC_TYPE_CHUCK:
        this->explosion = (zShrapnelAsset*)xSTFindAsset(xStrHash("robot_chuck_shrapnel"), NULL);
        break;
    case NPC_TYPE_SLICK:
        this->explosion = (zShrapnelAsset*)xSTFindAsset(xStrHash("robot_9a_shrapnel"), NULL);
        break;
    case NPC_TYPE_DUPLOTRON:
        this->explosion =
            (zShrapnelAsset*)xSTFindAsset(xStrHash("duplicatotron1000_shrapnel"), NULL);
        break;
    case NPC_TYPE_TIKI_WOOD:
        this->explosion = (zShrapnelAsset*)xSTFindAsset(xStrHash("tiki_wooden_shrapnel"), NULL);
        break;
    case NPC_TYPE_TIKI_QUIET:
        this->explosion = (zShrapnelAsset*)xSTFindAsset(xStrHash("tiki_shhhh_shrapnel"), NULL);
        break;
    case NPC_TYPE_TIKI_THUNDER:
        this->explosion = (zShrapnelAsset*)xSTFindAsset(xStrHash("tiki_thunder_shrapnel"), NULL);
        break;
    case NPC_TYPE_TIKI_LOVEY:
        this->explosion =
            (zShrapnelAsset*)xSTFindAsset(xStrHash("tiki_lovey_dovey_shrapnel"), NULL);
        break;
    case NPC_TYPE_TIKI_STONE:
        this->explosion = (zShrapnelAsset*)xSTFindAsset(xStrHash("tiki_stone_shrapnel"), NULL);
        break;
    default:
        this->explosion = NULL;
        break;
    }

    S32 wason = 0;
    xPsyche* psy = this->psy_instinct;

    if (psy)
    {
        if (psy->ImmTranIsOn())
        {
            wason = 1;
        }
        psy->ImmTranOff();
    }

    this->Reset();

    if (psy && wason)
    {
        psy->ImmTranOn();
    }
}

void zNPCCommon::Reset()
{
    xSceneID2Name(globals.sceneCur, this->id);

    xNPCBasic::Reset();

    this->entShadow->dst_cast = this->cfg_npc->dst_castShadow;
    this->entShadow->radius[0] = this->cfg_npc->rad_shadowCache;
    this->entShadow->radius[1] = this->cfg_npc->rad_shadowRaster;

    this->ParseProps();

    this->npcset = *this->npcsetass;

    if (this->entass->flags & XENT_COLLTYPE_DYN)
    {
        xEntShow(this);
    }
    else
    {
        xEntHide(this);
    }

    if (this->flg_move & 0x2)
    {
        this->pflags |= XENT_COLLTYPE_DYN;
    }
    else if (this->flg_move & 0x4)
    {
        this->pflags &= (U8)~XENT_COLLTYPE_DYN;
    }
    else
    {
        this->pflags &= (U8)~XENT_COLLTYPE_DYN;
    }

    if (this->model->Anim)
    {
        xAnimPlaySetState(this->model->Anim->Single, &this->model->Anim->Table->StateList[0], 0.0f);
    }

    this->drv_data = this->PRIV_GetDriverData();
    if (this->drv_data)
    {
        xEntDriveInit(this->drv_data, this);
        this->drv_data->flags |= 0x1;
    }

    if (this->lassdata)
    {
        this->lassdata->stage = LASS_STAT_PENDING;
    }
}

void zNPCCommon::Destroy()
{
    SelfDestroy();
}

void zNPCCommon::Damage(en_NPC_DAMAGE_TYPE damtype, xBase* who, const xVec3* vec_hit)
{
    static NPCMsg msg;
    NPCDamageInfo* dmg = &msg.dmgdata;

    if (!(this->flg_vuln & 0x1))
        return;
    if (who && who->baseType == eBaseTypePlayer && !(this->flg_vuln & 0xFFFF0000))
        return;

    switch (damtype)
    {
    case DMGTYP_ABOVE:
        if (!(this->flg_vuln & 0x40000))
            return;
        break;
    case DMGTYP_BELOW:
        if (!(this->flg_vuln & 0x20000))
            return;
        break;
    case DMGTYP_SIDE:
        if (gCurrentPlayer == eCurrentPlayerSpongeBob)
        {
            if (!(this->flg_vuln & 0x10000))
                return;
        }
        else if (gCurrentPlayer == eCurrentPlayerPatrick)
        {
            if (!(this->flg_vuln & 0x80000000))
                return;
        }
        else if (gCurrentPlayer == eCurrentPlayerSandy)
        {
            if (!(this->flg_vuln & 0x2000000))
                return;
        }
        else
        {
            if (!(this->flg_vuln & 0x10000))
                return;
        }
        break;
    case DMGTYP_INSTAKILL:
        this->tmr_invuln = -1.0f;
        break;
    case DMGTYP_HITBYTOSS:
        if (!(this->flg_vuln & 0x4))
            return;
        break;
    case DMGTYP_NPCATTACK:
        if (!(this->flg_vuln & 0x8))
            return;
        break;
    case DMGTYP_ROPE:
        if (!(this->flg_vuln & 0x1000000))
            return;
        break;
    case DMGTYP_CRUISEBUBBLE:
        if (!(this->flg_vuln & 0x80000))
            return;
        break;
    case DMGTYP_PROJECTILE:
        if (!(this->flg_vuln & 0x8))
            return;
        break;
    case DMGTYP_BUBBOWL:
        if (!(this->flg_vuln & 0x100000))
            return;
        break;
    case DMGTYP_BOULDER:
        if (!(this->flg_vuln & 0x200000))
            return;
        break;
    case DMGTYP_THUNDER_TIKI_EXPLOSION:
        if (!(this->flg_vuln & 0x2))
            return;
        break;
    case DMGTYP_DAMAGE_SURFACE:
    case DMGTYP_SURFACE:
        if (!(this->flg_vuln & 0x10))
            return;
        break;
    case DMGTYP_BUNGEED:
        if (!(this->flg_vuln & 0x400000))
            return;
        break;
    }

    if (this->tmr_invuln < 0.0f)
    {
        this->tmr_invuln = 0.5f;

        memset(&msg, 0, sizeof(msg));

        msg.from = this->id;
        msg.sendto = this->id;
        msg.msgid = NPC_MID_DAMAGE;
        msg.infotype = NPC_MDAT_DAMAGE;

        dmg->dmg_type = damtype;
        dmg->dmg_from = who;

        if (vec_hit)
        {
            xVec3Copy(&dmg->vec_dmghit, vec_hit);
        }
        else
        {
            xVec3Copy(&dmg->vec_dmghit, &g_O3);
        }

        zNPCMsg_SendMsg(&msg, this);
    }
}

S32 zNPCCommon::Respawn(const xVec3* pos, zMovePoint* mvptFirst, zMovePoint* mvptSpawnRef)
{
    static NPCMsg msg;

    memset(&msg, 0, sizeof(msg));

    msg.msgid = NPC_MID_RESPAWN;
    msg.from = this->id;
    msg.sendto = this->id;
    msg.infotype = NPC_MDAT_SPAWN;

    if (pos)
    {
        xVec3Copy(&msg.spawning.pos_spawn, pos);
    }
    else
    {
        xVec3Copy(&msg.spawning.pos_spawn, &this->entass->pos);
    }

    if (mvptFirst)
    {
        msg.spawning.nav_firstMovepoint = mvptFirst;
    }
    else
    {
        msg.spawning.nav_firstMovepoint = NULL;
    }

    msg.spawning.nav_spawnReference = mvptSpawnRef;
    msg.spawning.spawnSuccess = 0;

    zNPCMsg_SendMsg(&msg, this);

    return msg.spawning.spawnSuccess;
}

S32 zNPCCommon::NPCMessage(NPCMsg* mail)
{
    S32 handled = 1;

    switch (mail->msgid)
    {
    case NPC_MID_SYSEVENT:
    {
        xPsyche* psy = this->psy_instinct;

        switch (mail->sysevent.toEvent)
        {
        case eEventNPCPatrolOn:
            this->npcset.allowPatrol = 1;
            break;
        case eEventNPCPatrolOff:
            this->npcset.allowPatrol = 0;
            break;
        case eEventNPCWanderOn:
            this->npcset.allowDetect = 1;
            break;
        case eEventNPCWanderOff:
            this->npcset.allowDetect = 0;
            break;
        case eEventNPCDetectOn:
            this->npcset.allowDetect = 1;
            break;
        case eEventNPCDetectOff:
            this->npcset.allowDetect = 0;
            break;
        case eEventNPCChaseOn:
            this->npcset.allowChase = 1;
            break;
        case eEventNPCChaseOff:
            this->npcset.allowChase = 0;
            break;
        case eEventNPCSplineOKOn:
            this->npcset.useNavSplines = 1;
            break;
        case eEventNPCSplineOKOff:
            this->npcset.useNavSplines = 0;
            break;
        case eEventNPCSetActiveOff:
            if (psy && psy->HasGoal(NPC_GOAL_LIMBO))
            {
                psy->GoalSet(NPC_GOAL_LIMBO, 1);
            }
            break;
        case eEventNPCSetActiveOn:
            if (psy)
            {
                psy->GIDOfPending();

                S32 r4 = psy->GIDOfSafety();
                if (r4)
                {
                    psy->GoalSet(r4, 1);
                }
            }
            break;
        default:
            handled = 0;
            break;
        }
        break;
    }
    case NPC_MID_RESPAWN:
    {
        xVec3Copy(xEntGetPos(this), &mail->spawning.pos_spawn);

        zMovePoint* mvpt = mail->spawning.nav_spawnReference;
        if (!mvpt)
            mvpt = mail->spawning.nav_firstMovepoint;

        this->nav_past = mvpt;
        this->nav_curr = mvpt;
        this->nav_dest = mvpt;
        this->nav_lead = mvpt;

        mail->spawning.spawnSuccess = 1;
        break;
    }
    case NPC_MID_DAMAGE:
        break;
    case NPC_MID_DEV_ANIMCYCLE:
        if (this->psy_instinct && this->psy_instinct->HasGoal(NPC_GOAL_DEVANIMSPIN))
        {
            this->psy_instinct->GoalSet(NPC_GOAL_DEVANIMSPIN, 0);
        }
        break;
    case NPC_MID_DEV_ANIMSPIN:
        if (this->psy_instinct && this->psy_instinct->HasGoal(NPC_GOAL_DEVANIMCYCLE))
        {
            this->psy_instinct->GoalSet(NPC_GOAL_DEVANIMCYCLE, 0);
        }
        break;
    case NPC_MID_DEV_HEROMODE:
        if (this->psy_instinct && this->psy_instinct->HasGoal(NPC_GOAL_DEVANIMHERO))
        {
            this->psy_instinct->GoalSet(NPC_GOAL_DEVANIMHERO, 0);
        }
        break;
    case NPC_MID_DEV_DONE:
        break;
    default:
        handled = 1;
        break;
    }

    return handled;
}

void zNPCCommon::Move(xScene* xscn, F32 dt, xEntFrame* frm)
{
    bool retval = false;
    if ((npcset.useNavSplines) && ((flg_move) & 8))
        if (this->drv_data && (this->drv_data->driver || this->drv_data->odriver))
        {
            retval = true;
            S32 backit = 0;
            xVec3 var_28;

            if (this->frame->mode & 0x2)
            {
                backit = 1;
                var_28 = this->frame->dpos;
            }

            xEntDriveUpdate(this->drv_data, xscn, dt, NULL);

            if (backit)
            {
                this->frame->mode |= 0x2;
                this->frame->dpos = var_28;
            }
        }

    xNPCBasic::Move(xscn, dt, frm);
}

void zNPCCommon::Process(xScene* xscn, F32 dt)
{
    if ((flg_misc & 4) != 0)
    {
        ModelScaleSet(&cfg_npc->scl_model);
    }
    flags1.flg_upward = flags1.flg_upward & ~0x2;
    xNPCBasic::Process(xscn, dt);
}

void zNPCCommon::BUpdate(xVec3* pos)
{
    NPCConfig* cfg = this->cfg_npc;

    if (cfg->useBoxBound)
    {
        this->bound.type = XBOUND_TYPE_BOX;

        xBBox* box = &this->bound.box;
        xVec3 half = cfg->dim_bound * 0.5f;

        box->center = *pos + cfg->off_bound;
        box->box.upper = box->center + half;
        box->box.lower = box->center - half;
    }
    else
    {
        this->bound.type = XBOUND_TYPE_SPHERE;

        xSphere* sph = &this->bound.sph;

        sph->center = *pos + cfg->off_bound;
        sph->r = cfg->dim_bound.x;
    }

    if (this->bound.type != XBOUND_TYPE_NA)
    {
        xQuickCullForBound(&this->bound.qcd, &this->bound);
    }

    zGridUpdateEnt(this);
}

F32 zNPCCommon::BoundAsRadius(S32 useCfg) const
{
    F32 rad = 1.0f;

    if (useCfg)
    {
        NPCConfig* cfg = this->cfg_npc;

        if (cfg->useBoxBound)
        {
            xVec3 dim = cfg->dim_bound;
            rad = (dim.x + dim.y + dim.z) * (1 / 6.f);
        }
        else
        {
            rad = cfg->dim_bound.x;
        }
    }
    else
    {
        if (this->bound.type == XBOUND_TYPE_BOX)
        {
            const xBBox* box = &this->bound.box;
            const xVec3* le = &box->box.lower;
            const xVec3* ue = &box->box.upper;
            rad = ((ue->x + ue->y + ue->z) - (le->x + le->y - le->z)) * (1 / 6.f);
        }
        else if (this->bound.type == XBOUND_TYPE_SPHERE)
        {
            rad = this->bound.sph.r;
        }
    }

    return rad;
}

void zNPCCommon::NewTime(xScene* xscn, F32 dt)
{
    if (this->flg_misc & 0x2)
    {
        this->SndQueUpdate(dt);
    }

    this->tmr_invuln = MAX(-1.0f, this->tmr_invuln - dt);

    xNPCBasic::NewTime(xscn, dt);
}

S32 zNPCCommon::SysEvent(xBase* from, xBase* to, U32 toEvent, const F32* toParam,
                         xBase* toParamWidget, S32* handled)
{
    static NPCMsg npcmsg;

    S32 doOtherEvents = 1;
    zNPCCommon* npc = (zNPCCommon*)to;
    xVec3 pos = {};
    xVec3 dir = {};

    *handled = 1;

    switch (toEvent)
    {
    case eEventSceneEnd:
    {
        xPsyche* psy = this->psy_instinct;
        if (psy)
        {
            psy->GoalNone(1, 1);
        }
        break;
    }
    case eEventNPCSpecial_PlatformSnap:
    case eEventNPCSpecial_PlatformFall:
    {
        memset(&npcmsg, 0, sizeof(npcmsg));

        npcmsg.msgid = NPC_MID_SYSEVENT;
        npcmsg.infotype = NPC_MDAT_SYSEVENT;
        npcmsg.from = this->id;
        npcmsg.sendto = this->id;

        NPCSysEvent* se = &npcmsg.sysevent;
        se->doLinkEvents = 1;
        se->handled = 0;
        se->to = to;
        se->from = from;
        se->toEvent = toEvent;
        se->toParamWidget = toParamWidget;

        if (!toParam)
        {
            se->toParam[0] = 0.0f;
            se->toParam[1] = 0.0f;
            se->toParam[2] = 0.0f;
            se->toParam[3] = 0.0f;
        }
        else
        {
            se->toParam[0] = toParam[0];
            se->toParam[1] = toParam[1];
            se->toParam[2] = toParam[2];
            se->toParam[3] = toParam[3];
        }

        zNPCMsg_SendMsg(&npcmsg, -1.0f, NULL);

        *handled = npcmsg.sysevent.handled;
        doOtherEvents = se->doLinkEvents;
        break;
    }
    case eEventHit:
        this->ConvertHitEvent(from, to, toEvent, toParam, toParamWidget, handled);
        break;
    case eEventReset:
        this->Reset();
        break;
    case eEventVisible:
        xEntShow(npc);
        break;
    case eEventInvisible:
        xEntHide(npc);
        break;
    case eEventSetUpdateDistance:
        if (globals.updateMgr)
        {
            if (toParam[0] <= 0.0f)
            {
                xUpdateCull_SetCB(globals.updateMgr, npc, xUpdateCull_AlwaysTrueCB, NULL);
            }
            else
            {
                FloatAndVoid dist;
                dist.f = SQR(toParam[0]);
                xUpdateCull_SetCB(globals.updateMgr, npc, xUpdateCull_DistanceSquaredCB, dist.v);
            }
        }
        break;
    case eEventLaunchShrapnel:
    {
        zShrapnelAsset* shrap = (zShrapnelAsset*)toParamWidget;
        if (shrap && shrap->initCB)
        {
            xVec3 currVel;
            xVec3Sub(&currVel, &npc->frame->mat.pos, &npc->frame->oldmat.pos);
            xVec3SMulBy(&currVel, 1.0f / globals.update_dt);

            shrap->initCB(shrap, this->model, &currVel, NULL);
        }
        break;
    }
    case eEventNPCKillQuietly:
        this->Damage(DMGTYP_KILLEVENT, from, NULL);
        break;
    case eEventKill:
        this->Damage(DMGTYP_INSTAKILL, from, NULL);
        break;
    case eEventNPCRespawn:
        this->Respawn(NULL, NULL, NULL);
        break;
    case eEventNPCPatrolOn:
    case eEventNPCPatrolOff:
    case eEventNPCWanderOn:
    case eEventNPCWanderOff:
    case eEventNPCDetectOn:
    case eEventNPCDetectOff:
    case eEventNPCChaseOn:
    case eEventNPCChaseOff:
    case eEventNPCFightOn:
    case eEventNPCFightOff:
    {
        memset(&npcmsg, 0, sizeof(npcmsg));

        npcmsg.msgid = NPC_MID_SYSEVENT;
        npcmsg.infotype = NPC_MDAT_SYSEVENT;
        npcmsg.from = this->id;
        npcmsg.sendto = this->id;

        NPCSysEvent* se = &npcmsg.sysevent;
        se->doLinkEvents = 1;
        se->handled = 0;
        se->to = to;
        se->from = from;
        se->toEvent = toEvent;
        se->toParamWidget = toParamWidget;

        if (!toParam)
        {
            se->toParam[0] = 0.0f;
            se->toParam[1] = 0.0f;
            se->toParam[2] = 0.0f;
            se->toParam[3] = 0.0f;
        }
        else
        {
            se->toParam[0] = toParam[0];
            se->toParam[1] = toParam[1];
            se->toParam[2] = toParam[2];
            se->toParam[3] = toParam[3];
        }

        zNPCMsg_SendMsg(&npcmsg, -1.0f, NULL);

        *handled = npcmsg.sysevent.handled;
        doOtherEvents = se->doLinkEvents;
        break;
    }
    case eEventNPCForceConverseStart:
        if (NPCC_ForceTalkOk())
        {
            memset(&npcmsg, 0, sizeof(npcmsg));

            npcmsg.msgid = NPC_MID_SYSEVENT;
            npcmsg.infotype = NPC_MDAT_SYSEVENT;
            npcmsg.from = this->id;
            npcmsg.sendto = this->id;

            NPCSysEvent* se = &npcmsg.sysevent;
            se->doLinkEvents = 1;
            se->handled = 0;
            se->to = to;
            se->from = from;
            se->toEvent = toEvent;
            se->toParamWidget = toParamWidget;

            if (!toParam)
            {
                se->toParam[0] = 0.0f;
                se->toParam[1] = 0.0f;
                se->toParam[2] = 0.0f;
                se->toParam[3] = 0.0f;
            }
            else
            {
                se->toParam[0] = toParam[0];
                se->toParam[1] = toParam[1];
                se->toParam[2] = toParam[2];
                se->toParam[3] = toParam[3];
            }

            zNPCMsg_SendMsg(&npcmsg, -1.0f, NULL);

            *handled = npcmsg.sysevent.handled;
            doOtherEvents = se->doLinkEvents;
        }

        break;
    case eEventNPCCheerForMe:
        zNPCMsg_SendMsg(NPC_MID_CELEBRATE, this);
        break;
    case eEventNPCGoToSleep:
    case eEventNPCWakeUp:
    {
        memset(&npcmsg, 0, sizeof(npcmsg));

        npcmsg.msgid = NPC_MID_SYSEVENT;
        npcmsg.infotype = NPC_MDAT_SYSEVENT;
        npcmsg.from = this->id;
        npcmsg.sendto = this->id;

        NPCSysEvent* se = &npcmsg.sysevent;
        se->doLinkEvents = 1;
        se->handled = 0;
        se->to = to;
        se->from = from;
        se->toEvent = toEvent;
        se->toParamWidget = toParamWidget;

        if (!toParam)
        {
            se->toParam[0] = 0.0f;
            se->toParam[1] = 0.0f;
            se->toParam[2] = 0.0f;
            se->toParam[3] = 0.0f;
        }
        else
        {
            se->toParam[0] = toParam[0];
            se->toParam[1] = toParam[1];
            se->toParam[2] = toParam[2];
            se->toParam[3] = toParam[3];
        }

        zNPCMsg_SendMsg(&npcmsg, -1.0f, NULL);

        *handled = npcmsg.sysevent.handled;
        doOtherEvents = se->doLinkEvents;
        break;
    }
    case eEventNPCSetActiveOn:
    case eEventNPCSetActiveOff:
        this->SelfType();

        if (this->psy_instinct)
        {
            memset(&npcmsg, 0, sizeof(npcmsg));

            npcmsg.msgid = NPC_MID_SYSEVENT;
            npcmsg.infotype = NPC_MDAT_SYSEVENT;
            npcmsg.from = this->id;
            npcmsg.sendto = this->id;

            NPCSysEvent* se = &npcmsg.sysevent;
            se->doLinkEvents = 1;
            se->handled = 0;
            se->to = to;
            se->from = from;
            se->toEvent = toEvent;
            se->toParamWidget = toParamWidget;

            if (!toParam)
            {
                se->toParam[0] = 0.0f;
                se->toParam[1] = 0.0f;
                se->toParam[2] = 0.0f;
                se->toParam[3] = 0.0f;
            }
            else
            {
                se->toParam[0] = toParam[0];
                se->toParam[1] = toParam[1];
                se->toParam[2] = toParam[2];
                se->toParam[3] = toParam[3];
            }

            zNPCMsg_SendMsg(&npcmsg, -1.0f, NULL);

            *handled = npcmsg.sysevent.handled;
            doOtherEvents = se->doLinkEvents;
        }

        break;
    case eEventDuploWaveBegin:
    case eEventDuploWaveComplete:
    case eEventDuploNPCBorn:
    case eEventDuploNPCKilled:
    case eEventDuploExpiredMaxNPC:
    case eEventDuploPause:
    case eEventDuploResume:
    case eEventDuploKillKids:
    {
        memset(&npcmsg, 0, sizeof(npcmsg));

        npcmsg.msgid = NPC_MID_SYSEVENT;
        npcmsg.infotype = NPC_MDAT_SYSEVENT;
        npcmsg.from = this->id;
        npcmsg.sendto = this->id;

        NPCSysEvent* se = &npcmsg.sysevent;
        se->doLinkEvents = 1;
        se->handled = 0;
        se->to = to;
        se->from = from;
        se->toEvent = toEvent;
        se->toParamWidget = toParamWidget;

        if (!toParam)
        {
            se->toParam[0] = 0.0f;
            se->toParam[1] = 0.0f;
            se->toParam[2] = 0.0f;
            se->toParam[3] = 0.0f;
        }
        else
        {
            se->toParam[0] = toParam[0];
            se->toParam[1] = toParam[1];
            se->toParam[2] = toParam[2];
            se->toParam[3] = toParam[3];
        }

        zNPCMsg_SendMsg(&npcmsg, -1.0f, NULL);

        *handled = npcmsg.sysevent.handled;
        doOtherEvents = se->doLinkEvents;
        break;
    }
    case eEventNPCScript_ScriptBegin:
        zNPCMsg_SendMsg(NPC_MID_SCRIPTBEGIN, this);
        break;
    case eEventNPCScript_ScriptEnd:
        zNPCMsg_SendMsg(NPC_MID_SCRIPTEND, this);
        break;
    case eEventNPCScript_SetPos:
        if (toParamWidget)
        {
            NPCC_pos_ofBase(toParamWidget, &pos);
            this->MatPosSet(&pos);
        }
        break;
    case eEventNPCScript_SetDir:
        if (toParamWidget)
        {
            NPCC_pos_ofBase(toParamWidget, &dir);
            xVec3SubFrom(&dir, xEntGetPos(this));
            dir.y = 0.0f;

            if (xVec3Length2(&dir) > 0.001f)
            {
                xVec3Normalize(&dir, &dir);
                xVec3Copy((xVec3*)&this->model->Mat->at, &dir);
                xVec3Copy((xVec3*)&this->model->Mat->up, &g_Y3);
                xVec3Cross((xVec3*)&this->model->Mat->right, &dir, &g_Y3);
            }
        }
        break;
    case eEventNPCScript_LookNormal:
    case eEventNPCScript_LookAlert:
    case eEventNPCScript_FaceWidget:
    case eEventNPCScript_GotoWidget:
    case eEventNPCScript_AttackWidget:
    case eEventNPCScript_FollowWidget:
    case eEventNPCScript_PlayAnim:
    case eEventNPCScript_LeadPlayer:
        zEventName(toEvent);
        break;
    case eEventUnknown:
    case eEventMount:
    case eEventDismount:
    case eEventDeath:
    case eEventSceneBegin:
    case eEventRoomBegin:
    case eEventRoomEnd:
    case eEventNPCScript_ScriptReady:
    case eEventNPCScript_Halt:
    case eEventNPCScript_FaceWidgetDone:
    case eEventNPCScript_GotoWidgetDone:
    case eEventNPCScript_AttackWidgetDone:
    case eEventNPCScript_PlayAnimDone:
        break;
    default:
        *handled = 0;
        doOtherEvents = xNPCBasic::SysEvent(from, to, toEvent, toParam, toParamWidget, handled);
        break;
    }

    return doOtherEvents;
}

void zNPCCommon::ConvertHitEvent(xBase* from, xBase* to, U32 toEvent, const F32* toParam,
                                 xBase* toParamWidget, S32* handled)
{
    xVec3 pos_cruiser = {};
    xVec3* vec_hit = NULL;
    F32 mag;
    en_NPC_DAMAGE_TYPE what = DMGTYP_UNDECIDED;

    if (from)
    {
        switch (from->baseType)
        {
        case eBaseTypePlayer:
        {
            U32 mvinf = zEntPlayer_MoveInfo();
            if (mvinf & 0x8)
            {
                what = DMGTYP_BELOW;
            }
            else if (mvinf & 0x10)
            {
                what = DMGTYP_ABOVE;
            }
            else if (mvinf & 0x20)
            {
                what = DMGTYP_SIDE;
            }
            else
            {
                what = DMGTYP_SIDE;
            }

            xVec3Sub(&pos_cruiser, xEntGetPos(&globals.player.ent), xEntGetPos(this));
            vec_hit = &pos_cruiser;
            break;
        }
        case eBaseTypeCruiseBubble:
            what = DMGTYP_CRUISEBUBBLE;

            if (toParam)
            {
                pos_cruiser.x = toParam[0];
                pos_cruiser.y = toParam[1];
                pos_cruiser.z = toParam[2];

                mag = xVec3Length(&pos_cruiser);
                if (mag > 0.001f)
                {
                    xVec3SubFrom(&pos_cruiser, xEntGetPos(this));
                    xVec3SMulBy(&pos_cruiser, 2.0f / mag);

                    vec_hit = &pos_cruiser;
                }
            }

            break;
        case eBaseTypeProjectile:
            what = DMGTYP_PROJECTILE;
            break;
        case eBaseTypeBoulder:
            if (globals.player.bubblebowl && globals.player.bubblebowl == (xEntBoulder*)from)
            {
                what = DMGTYP_BUBBOWL;
            }
            else
            {
                what = DMGTYP_BOULDER;
            }
            break;
        }
    }

    this->Damage(what, from, vec_hit);
}

void zNPCCommon::VelStop()
{
    this->spd_throttle = 0.0f;
    this->frame->dvel.x = 0.0f;
    this->frame->dvel.y = 0.0f;
    this->frame->dvel.z = 0.0f;
    this->frame->vel.x = 0.0f;
    this->frame->vel.y = 0.0f;
    this->frame->vel.z = 0.0f;
    this->frame->mode |= 0xC;

    if (!this->drv_data)
    {
        this->frame->dpos.x = 0.0f;
        this->frame->dpos.y = 0.0f;
        this->frame->dpos.z = 0.0f;
        this->frame->mode |= 0x2;
    }
    else if (!this->drv_data->driver)
    {
        this->frame->dpos.x = 0.0f;
        this->frame->dpos.y = 0.0f;
        this->frame->dpos.z = 0.0f;
        this->frame->mode |= 0x2;
    }
}

F32 zNPCCommon::ThrottleAdjust(F32 dt, F32 spd_want, F32 accel)
{
    NPCConfig* cfg = this->cfg_npc;
    F32 acc;
    S32 speedup = (spd_want > this->spd_throttle);

    acc = (accel < 0.0f) ? (dt * cfg->fac_accelMax) : (dt * accel);

    if (xeq(spd_want, this->spd_throttle, acc))
    {
        this->spd_throttle = spd_want;
        return this->spd_throttle;
    }

    if (speedup)
    {
        this->spd_throttle += acc;
        this->spd_throttle = CLAMP(this->spd_throttle, 0.0f, spd_want);
    }
    else
    {
        this->spd_throttle -= acc;
        this->spd_throttle = MAX(spd_want, this->spd_throttle);
    }

    return this->spd_throttle;
}

F32 zNPCCommon::ThrottleAccel(F32 dt, S32 speedup, F32 pct_max)
{
    NPCConfig* cfg = this->cfg_npc;
    F32 acc = dt * cfg->fac_accelMax;
    F32 spd_top = pct_max * cfg->spd_moveMax;

    if (speedup)
    {
        this->spd_throttle += acc;
    }
    else
    {
        this->spd_throttle -= acc;
    }

    this->spd_throttle = CLAMP(this->spd_throttle, 0.0f, spd_top);

    return this->spd_throttle;
}

F32 zNPCCommon::ThrottleApply(F32 dt, const xVec3* dir, S32 force3D)
{
    xVec3 var_30;
    if (xVec3Length2(dir) < 0.00001f)
    {
        var_30 = *NPCC_faceDir(this) * this->spd_throttle;
    }
    else
    {
        var_30 = *dir * this->spd_throttle;
    }

    var_30 *= dt;

    if ((this->flg_move & 0x2) && !force3D)
    {
        this->frame->dpos.x = var_30.x;
        this->frame->dpos.z = var_30.z;
    }
    else
    {
        this->frame->dpos = var_30;
    }

    this->frame->mode |= 0x2;

    return this->spd_throttle;
}

F32 zNPCCommon::TurnToFace(F32 dt, const xVec3* dir_want, F32 useTurnRate)
{
    F32 f29 = (useTurnRate < 0.0f) ? (dt * this->cfg_npc->spd_turnMax) : (dt * useTurnRate);
    F32 f30 = NPCC_dir_toXZAng(dir_want);
    F32 f31 = NPCC_dir_toXZAng(NPCC_faceDir(this));

    F32 f28 = this->frame->rot.angle;
    if (this->frame->mode & 0x20)
    {
        f28 += this->frame->drot.angle;
    }

    F32 f1_ = xDangleClamp(f30 - f28);
    F32 f2_ = CLAMP(f1_, -f29, f29);
    F32 f2 = CLAMP(f28 + f2_, f31 - f29, f31 + f29);
    F32 f1 = f2 - f28;

    this->frame->drot.angle = f1;
    this->frame->mode |= 0x20;

    return f1;

    /*
    F32 ang_caller;
    F32 ang_wouldbe;
    F32 rot_lim;
    F32 ang_true;
    F32 ang_past;
    F32 ang_diff;
    */
}

void zNPCCommon::ParseLinks()
{
    for (S32 i = 0; i < this->linkCount; i++)
    {
        switch (this->link[i].srcEvent)
        {
        case eEventNPCScript_ScriptBegin:
        case eEventNPCScript_ScriptEnd:
        case eEventNPCScript_ScriptReady:
        case eEventNPCScript_Halt:
        case eEventNPCScript_SetPos:
        case eEventNPCScript_SetDir:
        case eEventNPCScript_LookNormal:
        case eEventNPCScript_LookAlert:
        case eEventNPCScript_FaceWidget:
        case eEventNPCScript_FaceWidgetDone:
        case eEventNPCScript_GotoWidget:
        case eEventNPCScript_GotoWidgetDone:
        case eEventNPCScript_AttackWidget:
        case eEventNPCScript_AttackWidgetDone:
        case eEventNPCScript_FollowWidget:
        case eEventNPCScript_PlayAnim:
        case eEventNPCScript_PlayAnimDone:
        case eEventNPCScript_LeadPlayer:
            xSceneID2Name(globals.sceneCur, this->id);
            this->flg_misc |= 0x1;
            break;
        }
    }
}

void zNPCCommon::ParseINI()
{
    NPCConfig* cfg = this->cfg_npc;

    this->TagVerts();

    for (S32 i = NPC_PARM_MOVERATE; i < NPC_PARM_ENDTAG_INI; i++)
    {
        en_npcparm pid = (en_npcparm)i;

        switch (pid)
        {
        case NPC_PARM_ACCEL:
            this->GetParm(pid, &cfg->fac_accelMax);
            break;
        case NPC_PARM_DRIFT:
            this->GetParm(pid, &cfg->fac_driftMax);
            break;
        case NPC_PARM_MASS:
            this->GetParm(pid, &cfg->npcMass);
            if (cfg->npcMass < 0.5f)
            {
                cfg->npcMass = 0.5f;
            }
            cfg->npcMassInv = 1.0f / cfg->npcMass;
            break;
        case NPC_PARM_TOSSELASTIC:
            this->GetParm(pid, &cfg->fac_elastic);
            break;
        case NPC_PARM_TOSSGRAV:
            this->GetParm(pid, &cfg->fac_gravKnock);
            break;
        case NPC_PARM_HITPOINTS:
            this->GetParm(pid, &cfg->pts_damage);
            break;
        case NPC_PARM_BND_ISBOX:
            this->GetParm(pid, &cfg->useBoxBound);
            break;
        case NPC_PARM_BND_CENTER:
            this->GetParm(pid, &cfg->off_bound);
            break;
        case NPC_PARM_BND_EXTENT:
            this->GetParm(pid, &cfg->dim_bound);
            break;
        case NPC_PARM_MOVERATE:
            this->GetParm(pid, &cfg->spd_moveMax);
            break;
        case NPC_PARM_TURNRATE:
        {
            F32 fv = RAD2DEG(cfg->spd_turnMax);
            this->GetParm(pid, &fv);
            cfg->spd_turnMax = DEG2RAD(fv);
            break;
        }
        case NPC_PARM_MODELSCALE:
            this->GetParm(pid, &cfg->scl_model);
            break;
        case NPC_PARM_DETECT_RAD:
            this->GetParm(pid, &cfg->rad_detect);
            break;
        case NPC_PARM_DETECT_HYT:
            this->GetParm(pid, &cfg->hyt_detect);
            break;
        case NPC_PARM_DETECT_OFF:
            this->GetParm(pid, &cfg->off_detect);
            break;
        case NPC_PARM_TIMEFIDGET:
            this->GetParm(pid, &cfg->tym_fidget);
            break;
        case NPC_PARM_TIMEATTACK:
            this->GetParm(pid, &cfg->tym_attack);
            break;
        case NPC_PARM_TIMESTUN:
            this->GetParm(pid, &cfg->tym_stun);
            break;
        case NPC_PARM_TIMEALERT:
            this->GetParm(pid, &cfg->tym_alert);
            break;
        case NPC_PARM_ATTACK_RAD:
            this->GetParm(pid, &cfg->rad_attack);
            break;
        case NPC_PARM_ATTACK_FOV:
        {
            F32 fv = RAD2DEG(cfg->fov_attack);
            this->GetParm(pid, &fv);
            cfg->fov_attack = DEG2RAD(fv);
            break;
        }
        case NPC_PARM_SND_RAD:
            this->GetParm(pid, &cfg->rad_sound);
            break;
        case NPC_PARM_ATK_SIZE01:
            this->GetParm(pid, &cfg->rad_dmgSize);
            break;
        case NPC_PARM_ATK_FRAMES01:
        case NPC_PARM_ATK_FRAMES01A:
        case NPC_PARM_ATK_FRAMES01B:
        case NPC_PARM_ATK_FRAMES02:
        case NPC_PARM_ATK_FRAMES02A:
        case NPC_PARM_ATK_FRAMES02B:
        case NPC_PARM_ATK_FRAMES03:
        case NPC_PARM_ATK_FRAMES03A:
        case NPC_PARM_ATK_FRAMES03B:
            this->GetParm(pid, &cfg->animFrameRange[pid - NPC_PARM_ATK_FRAMES01]);
            break;
        case NPC_PARM_ESTEEM_A:
        case NPC_PARM_ESTEEM_B:
        case NPC_PARM_ESTEEM_C:
        case NPC_PARM_ESTEEM_D:
        case NPC_PARM_ESTEEM_E:
            this->GetParm(pid, &cfg->cnt_esteem[pid - NPC_PARM_ESTEEM_A]);
            break;
        case NPC_PARM_SHADOW_CASTDIST:
            this->GetParm(pid, &cfg->dst_castShadow);
            break;
        case NPC_PARM_SHADOW_RADCACHE:
            this->GetParm(pid, &cfg->rad_shadowCache);
            break;
        case NPC_PARM_SHADOW_RADRASTER:
            this->GetParm(pid, &cfg->rad_shadowRaster);
            break;
        case NPC_PARAM_TEST_COUNT:
            this->GetParm(pid, &cfg->test_count);
            break;
        }
    }
}

void zNPCCommon::ParseProps()
{
    for (S32 i = 0x3f; i < 0x42; i++)
    {
        switch (i)
        {
        case 0x3f:
            MvptReset(NULL);
            break;
        default:
            break;
        }
    }
}

void zNPCCommon::CollideReview()
{
    xEntCollis* npccol = this->collis;
    xCollis* colrec = &npccol->colls[0];
    S32 i;
    S32 hitthings = 0;

    if (!(colrec->flags & k_HIT_IT) && (this->flg_move & 0x2))
    {
        this->colFreq = 0;
    }

    if (this->drv_data)
    {
        if ((colrec->flags & k_HIT_IT) && colrec->optr)
        {
            xEnt* flent = (xEnt*)colrec->optr;
            if (this->IsMountableType((en_ZBASETYPE)flent->baseType))
            {
                if (!this->drv_data->driver)
                {
                    xEntDriveMount(this->drv_data, flent, 1.0f, colrec);
                }
                else if (flent != this->drv_data->driver)
                {
                    xEntDriveDismount(this->drv_data, 0.3f);
                    xEntDriveMount(this->drv_data, flent, 1.0f, colrec);
                }
            }
        }
        else if (this->drv_data->driver)
        {
            xEntDriveDismount(this->drv_data, 0.3f);
        }
    }

    for (i = npccol->env_sidx; i < npccol->env_eidx; i++)
    {
        if (!(npccol->colls[i].flags & k_HIT_0x4))
        {
            hitthings++;
        }
    }

    for (i = npccol->stat_sidx; i < npccol->stat_eidx; i++)
    {
        if (!(npccol->colls[i].flags & k_HIT_0x4))
        {
            hitthings++;
        }
    }

    for (i = npccol->dyn_sidx; i < npccol->dyn_eidx; i++)
    {
        if (npccol->colls[i].flags & k_HIT_0x4)
        {
            xBase* base = (xBase*)npccol->colls[i].optr;
            if (base->baseType == eBaseTypeButton)
            {
                zEntButton_Hold((_zEntButton*)base, 0x800);
            }
        }
        hitthings++;
    }

    for (i = npccol->npc_sidx; i < npccol->npc_eidx; i++)
    {
        if (!(npccol->colls[i].flags & k_HIT_0x4))
        {
            hitthings++;
        }
    }

    if (hitthings)
    {
        S32 cf = (S32)(8.0f * xurand() + 2.0);
        colFreq = MIN(colFreq, cf);
    }
}

bool zNPCCommon::IsMountableType(en_ZBASETYPE type)
{
    switch (type)
    {
    case eBaseTypePlatform:
        return true;
        break;
    default:
        return false;
        break;
    }
}

void zNPCCommon::SelfDestroy()
{
    xBehaveMgr* bmgr = xBehaveMgr_GetSelf();
    if (psy_instinct != NULL)
    {
        bmgr->UnSubscribe(psy_instinct);
    }
    psy_instinct = NULL;
}

void zNPCCommon::TagVerts()
{
    NPCConfig* cfg = this->cfg_npc;
    S32 i;
    xVec3 tmp_pos = {};
    F32 vertinfo[4] = {};

    for (i = 0; i < 20; i++)
    {
        if (mdlVertToParm[i] != NPC_PARM_NONE)
        {
            this->GetParm(mdlVertToParm[i], vertinfo);

            tmp_pos.x = vertinfo[0];
            tmp_pos.y = vertinfo[1];
            tmp_pos.z = vertinfo[2];

            if (xVec3Dot(&tmp_pos, &tmp_pos) > 0.001f)
            {
                xModelInstance* mdl;
                S32 idx_atmoic = (S32)vertinfo[3];

                if (idx_atmoic < 1)
                {
                    mdl = this->model;
                }
                else
                {
                    mdl = this->ModelAtomicFind(idx_atmoic, -1, NULL);
                }

                if (mdl)
                {
                    iModelTagSetup(&cfg->tag_vert[i], mdl->Data, tmp_pos.x, tmp_pos.y, tmp_pos.z);

                    if (xVec3Length2(&tmp_pos))
                    {
                        cfg->flg_vert |= (1 << i);
                    }

                    xSceneID2Name(globals.sceneCur, this->id);
                }
            }
        }
    }
}

S32 zNPCCommon::GetVertPos(en_mdlvert vid, xVec3* pos)
{
    NPCConfig* cfg = cfg_npc;
    if (!(cfg->flg_vert & 1 << vid))
    {
        return 0;
    }
    iModelTagEval(model->Data, &cfg->tag_vert[vid], model->Mat, pos);
    return 1;
}

S32 zNPCCommon::IsAttackFrame(F32 tym_anim, S32 series)
{
    S32 result = 0;
    NPCConfig* cfg = this->cfg_npc;

    if (!cfg)
        return 0;

    xVec3 var_30, var_3C, var_48;

    switch (series)
    {
    case 0:
    case 1:
        var_30 = cfg->animFrameRange[0];
        var_3C = cfg->animFrameRange[1];
        var_48 = cfg->animFrameRange[2];
        break;
    case 2:
        var_30 = cfg->animFrameRange[3];
        var_3C = cfg->animFrameRange[4];
        var_48 = cfg->animFrameRange[5];
        break;
    default:
        var_30 = cfg->animFrameRange[6];
        var_3C = cfg->animFrameRange[7];
        var_48 = cfg->animFrameRange[8];
        break;
    }

    F32 tym = (tym_anim < 0.0f) ? this->AnimTimeCurrent() : tym_anim;

    if (tym >= var_30.x && tym <= var_30.y)
    {
        result = 1;
    }
    else if (tym >= var_3C.x && tym <= var_3C.y)
    {
        result = 2;
    }
    else if (tym >= var_48.x && tym <= var_48.y)
    {
        result = 3;
    }

    return result;
}

void zNPCCommon::GiveReward()
{
    S32 i;
    U32 s;
    NPCConfig* cfg = this->cfg_npc;
    U32 shinies[5];
    S32 esteem;

    if (this->SelfType() != NPC_TYPE_ARFDOG)
    {
        if ((this->SelfType() & 0xFFFFFF00) == 'NTT\0')
        {
            zCombo_Add(1);
        }
        else
        {
            zCombo_Add(3);
        }
    }

    for (i = 0, s = 0; i < 5; i++)
    {
        esteem = cfg->cnt_esteem[i];
        if (esteem >= 1)
        {
            if (esteem == globals.player.g.ShinyValuePurple)
            {
                shinies[s] = 0;
                s++;
            }
            else if (esteem == globals.player.g.ShinyValueBlue)
            {
                shinies[s] = 1;
                s++;
            }
            else if (esteem == globals.player.g.ShinyValueGreen)
            {
                shinies[s] = 2;
                s++;
            }
            else if (esteem == globals.player.g.ShinyValueYellow)
            {
                shinies[s] = 3;
                s++;
            }
            else if (esteem == globals.player.g.ShinyValueRed)
            {
                shinies[s] = 4;
                s++;
            }
            else
            {
                shinies[i] = 4;
                s++;
                break;
            }
        }
    }

    if (s)
    {
        zEntPickup_SpawnNRewards(shinies, s, *this->Pos());
    }

    this->PlayerKiltMe();
}

void zNPCPlyrSnd_Reset()
{
    g_tmr_talkless = 10.0f;
}

void zNPCPlyrSnd_Update(F32 dt)
{
    g_tmr_talkless = MAX(-1.0f, g_tmr_talkless - dt);
}

void zNPCCommon::PlayerKiltMe()
{
    en_xEventTags r30 = eEventUnknown;
    S32 r31 = this->SelfType();

    if (!SomethingWonderful() && g_tmr_talkless < 0.0f)
    {
        g_tmr_talkless = 3.0f + (xurand() - 0.5f) * 0.25f * 3.0f;

        if ((r31 & 0xFFFFFF00) == 'NTR\0')
        {
            r30 = eEventSituationDestroyedRobot;
        }
        else if ((r31 & 0xFFFFFF00) == 'NTT\0')
        {
            r30 = eEventSituationDestroyedTiki;
        }

        if (r30 != eEventUnknown)
        {
            zEntEvent(this, &globals.player.ent, r30);
        }
    }
}

void zNPCCommon::ISeePlayer()
{
    en_xEventTags ven = eEventUnknown;

    if (!SomethingWonderful() && g_tmr_talkless < 0.0f)
    {
        g_tmr_talkless = 3.0f + (xurand() - 0.5f) * 0.25f * 3.0f;

        switch (this->SelfType())
        {
        //case NPC_TYPE_UNKNOWN:
        //case NPC_TYPE_BASIC:
        //case NPC_TYPE_COMMON:
        case NPC_TYPE_AMBIENT:
        case NPC_TYPE_VILLAGER:
        case NPC_TYPE_ROBOT:
        case NPC_TYPE_BOSS:
        case NPC_TYPE_TEST:
        case NPC_TYPE_BADGUY:
        case NPC_TYPE_JELLYPINK:
        case NPC_TYPE_JELLYBLUE:
        case NPC_TYPE_KINGNEPTUNE:
        case NPC_TYPE_MIMEFISH:
            //case NPC_TYPE_COW:
            break;
        case NPC_TYPE_TIKI_WOOD:
            ven = eEventSituationSeeWoodTiki;
            break;
        case NPC_TYPE_TIKI_LOVEY:
            ven = eEventSituationSeeLoveyTiki;
            break;
        case NPC_TYPE_TIKI_QUIET:
            ven = eEventSituationSeeShhhTiki;
            break;
        case NPC_TYPE_TIKI_THUNDER:
            ven = eEventSituationSeeThunderTiki;
            break;
        case NPC_TYPE_TIKI_STONE:
            ven = eEventSituationSeeStoneTiki;
            break;
        case NPC_TYPE_FISH:
        //case NPC_TYPE_FISH_MALE:
        //case NPC_TYPE_FISH_FEMALE:
        //case NPC_TYPE_FISH_ELDER:
        //case NPC_TYPE_FISH_ELDESS:
        //case NPC_TYPE_FISH_BOY:
        //case NPC_TYPE_FISH_GIRL:
        //case NPC_TYPE_BALLOONBOY:
        //case NPC_TYPE_GARY:
        //case NPC_TYPE_SQUIDWARD:
        case NPC_TYPE_SQUIDWARD_MUSIC:
        case NPC_TYPE_SQUIDWARD_BANDAID:
        //case NPC_TYPE_DUTCHMAN_NSB:
        //case NPC_TYPE_SANDYBIKINI:
        //case NPC_TYPE_SANDYNPC:
        //case NPC_TYPE_PATNPC:
        //case NPC_TYPE_BOBNPC:
        //case NPC_TYPE_PLANKNPC:
        //case NPC_TYPE_MRKRABS:
        //case NPC_TYPE_MSPUFFS:
        //case NPC_TYPE_LARRY:
        //case NPC_TYPE_BUBBUDDY:
        //case NPC_TYPE_NEWSFISH:
        case NPC_TYPE_NEWSFISHTV:
        //case NPC_TYPE_MOTORIST:
        //case NPC_TYPE_MERMANCHAIR:
        //case NPC_TYPE_MERMAN:
        case NPC_TYPE_BARNACLEBOY:
            //case NPC_TYPE_WORM:
            break;
        case NPC_TYPE_HAMMER:
        case NPC_TYPE_HAMSPIN:
            ven = eEventSituationSeeHammer;
            break;
        case NPC_TYPE_TARTAR:
            ven = eEventSituationSeeTarTar;
            break;
        case NPC_TYPE_GLOVE:
            ven = eEventSituationSeeGLove;
            break;
        case NPC_TYPE_MONSOON:
            ven = eEventSituationSeeMonsoon;
            break;
        case NPC_TYPE_SLEEPY:
            ven = eEventSituationSeeSleepyTime;
            break;
        case NPC_TYPE_ARFDOG:
            break;
        case NPC_TYPE_ARFARF:
            ven = eEventSituationSeeArf;
            break;
        case NPC_TYPE_CHUCK:
            break;
        case NPC_TYPE_TUBELET:
        case NPC_TYPE_TUBESLAVE:
            ven = eEventSituationSeeTubelets;
            break;
        case NPC_TYPE_SLICK:
            ven = eEventSituationSeeSlick;
            break;
        case NPC_TYPE_FODDER:
        case NPC_TYPE_FODBOMB:
        case NPC_TYPE_FODBZZT:
        case NPC_TYPE_CHOMPER:
        case NPC_TYPE_CRITTER:
            ven = eEventSituationSeeFodder;
            break;
        case NPC_TYPE_DUPLOTRON:
            break;
        case NPC_TYPE_KINGJELLY:
            ven = eEventSituationSeeKingJellyfish;
            break;
        case NPC_TYPE_DUTCHMAN:
            ven = eEventSituationSeeDutchman;
            break;
        case NPC_TYPE_PRAWN:
            ven = eEventSituationSeePrawn;
            break;
        case NPC_TYPE_BOSSSANDY:
            ven = eEventSituationSeeSandyBoss;
            break;
        case NPC_TYPE_BOSSPAT:
            ven = eEventSituationSeePatrickBoss;
            break;
        case NPC_TYPE_BOSS_SB1:
        case NPC_TYPE_BOSSBOBBY:
            ven = eEventSituationSeeSpongeBobBoss;
            break;
        case NPC_TYPE_BOSSPLANKTON:
            ven = eEventSituationSeeRobotPlankton;
            break;
            //case NPC_TYPE_BADGUYMEDIUM:
            //    break;
        }

        if (ven != eEventUnknown)
        {
            zEntEvent(this, &globals.player.ent, ven);
        }
    }
}

void zNPCCommon::ConfigSceneDone()
{
    g_ncfghead = 0;
}

NPCConfig* zNPCCommon::ConfigCreate(U32 modelID)
{
    NPCConfig* cfg = (NPCConfig*)xMemAllocSize(sizeof(NPCConfig));
    memset(cfg, 0, sizeof(NPCConfig));

    cfg->modelID = modelID;

    if (!g_ncfghead)
    {
        g_ncfghead = cfg;
    }
    else
    {
        cfg->Insert(g_ncfghead);
    }

    return cfg;
}

NPCConfig* zNPCCommon::ConfigFind(U32 modelID)
{
    NPCConfig* cfg = NULL;

    for (NPCConfig* r3 = g_ncfghead; r3 != NULL; r3 = r3->Next())
    {
        if (r3->modelID == modelID)
        {
            cfg = r3;
            break;
        }
    }

    return cfg;
}

void zNPCCommon::GetParm(en_npcparm pid, S32* val)
{
    this->GetParm(pid, (void*)val);
}

void zNPCCommon::GetParm(en_npcparm pid, F32* val)
{
    this->GetParm(pid, (void*)val);
}

void zNPCCommon::GetParm(en_npcparm pid, xVec3* val)
{
    this->GetParm(pid, (void*)val);
}

void zNPCCommon::GetParm(en_npcparm pid, zMovePoint** val)
{
    this->GetParm(pid, (void*)val);
}

void zNPCCommon::GetParm(en_npcparm pid, void* val)
{
    char** names = g_strz_params;
    xModelAssetParam* pmdata = this->parmdata;
    U32 pmsize = this->pdatsize;

    this->GetParmDefault(pid, val);

    switch (pid)
    {
    case NPC_PARM_BND_ISBOX:
    case NPC_PARM_HITPOINTS:
    case NPC_PARM_ESTEEM_A:
    case NPC_PARM_ESTEEM_B:
    case NPC_PARM_ESTEEM_C:
    case NPC_PARM_ESTEEM_D:
    case NPC_PARM_ESTEEM_E:
    case NPC_PARAM_TEST_COUNT:
        if (pmdata && pmsize)
        {
            *(S32*)val = zParamGetInt(pmdata, pmsize, names[pid], *(S32*)val);
        }
        break;
    case NPC_PARM_MOVERATE:
    case NPC_PARM_TURNRATE:
    case NPC_PARM_ACCEL:
    case NPC_PARM_DRIFT:
    case NPC_PARM_MASS:
    case NPC_PARM_TOSSGRAV:
    case NPC_PARM_TOSSELASTIC:
    case NPC_PARM_DETECT_RAD:
    case NPC_PARM_DETECT_HYT:
    case NPC_PARM_DETECT_OFF:
    case NPC_PARM_ATTACK_RAD:
    case NPC_PARM_ATTACK_FOV:
    case NPC_PARM_SND_RAD:
    case NPC_PARM_TIMEFIDGET:
    case NPC_PARM_TIMEATTACK:
    case NPC_PARM_TIMESTUN:
    case NPC_PARM_TIMEALERT:
    case NPC_PARM_ATK_SIZE01:
    case NPC_PARM_SHADOW_CASTDIST:
    case NPC_PARM_SHADOW_RADCACHE:
    case NPC_PARM_SHADOW_RADRASTER:
        if (pmdata && pmsize)
        {
            *(F32*)val = zParamGetFloat(pmdata, pmsize, names[pid], *(F32*)val);
        }
        break;
    case NPC_PARM_BND_CENTER:
    case NPC_PARM_BND_EXTENT:
    case NPC_PARM_MODELSCALE:
    case NPC_PARM_ATK_FRAMES01:
    case NPC_PARM_ATK_FRAMES01A:
    case NPC_PARM_ATK_FRAMES01B:
    case NPC_PARM_ATK_FRAMES02:
    case NPC_PARM_ATK_FRAMES02A:
    case NPC_PARM_ATK_FRAMES02B:
    case NPC_PARM_ATK_FRAMES03:
    case NPC_PARM_ATK_FRAMES03A:
    case NPC_PARM_ATK_FRAMES03B:
        if (pmdata && pmsize)
        {
            zParamGetVector(pmdata, pmsize, names[pid], *(xVec3*)val, (xVec3*)val);
        }
        break;
    case NPC_PARM_VTX_ATTACKBASE:
    case NPC_PARM_VTX_ATTACK:
    case NPC_PARM_VTX_ATTACK1:
    case NPC_PARM_VTX_ATTACK2:
    case NPC_PARM_VTX_ATTACK3:
    case NPC_PARM_VTX_ATTACK4:
    case NPC_PARM_VTX_EYEBALL:
    case NPC_PARM_VTX_DMGSMOKEA:
    case NPC_PARM_VTX_DMGSMOKEB:
    case NPC_PARM_VTX_DMGSMOKEC:
    case NPC_PARM_VTX_DMGFLAMEA:
    case NPC_PARM_VTX_DMGFLAMEB:
    case NPC_PARM_VTX_DMGFLAMEC:
    case NPC_PARM_VTX_PROPEL:
    case NPC_PARM_VTX_EXHAUST:
    case NPC_PARM_VTX_GEN01:
    case NPC_PARM_VTX_GEN02:
    case NPC_PARM_VTX_GEN03:
    case NPC_PARM_VTX_GEN04:
    case NPC_PARM_VTX_GEN05:
        zParamGetFloatList(pmdata, pmsize, names[pid], 4, NULL, (F32*)val);
        break;
    case NPC_PARM_FIRSTMVPT:
        if (this->npcass->movepoint)
        {
            zMovePoint* mvpt = zMovePoint_From_xAssetID(this->npcass->movepoint);
            if (mvpt)
            {
                *(zMovePoint**)val = mvpt;
            }
        }
        break;
    case NPC_PARM_BOGUSSHARE:
        if (pmdata && pmsize)
        {
            *(S32*)val = zParamGetInt(pmdata, pmsize, names[pid], *(S32*)val);
        }
        break;
    case NPC_PARM_NONE:
    case NPC_PARM_ENDTAG_INI:
    case NPC_PARM_ENDTAG_PROPS:
    case NPC_PARM_ENDTAG_SHARE:
        break;
    }
}

void zNPCCommon::GetParmDefault(en_npcparm pid, void* val)
{
    // Should be a S32?
    S32 result = 1;
    S32* ivp = (S32*)val;
    F32* fvp = (F32*)val;
    F32* fvlist = (F32*)val;
    xVec3* vec = (xVec3*)val;
    zMovePoint** mvpt = (zMovePoint**)val;

    switch (pid)
    {
    case NPC_PARM_HITPOINTS:
        *ivp = 1;
        break;
    case NPC_PARM_MOVERATE:
        *fvp = 2.0f;
        break;
    case NPC_PARM_TURNRATE:
        *fvp = 90.0f;
        break;
    case NPC_PARM_ACCEL:
        *fvp = 1.0f;
        break;
    case NPC_PARM_DRIFT:
        *fvp = 0.0f;
        break;
    case NPC_PARM_MASS:
        *fvp = 1.0f;
        break;
    case NPC_PARM_TOSSGRAV:
        *fvp = 25.0f;
        break;
    case NPC_PARM_TOSSELASTIC:
        *fvp = 0.5f;
        break;
    case NPC_PARM_BND_ISBOX:
        *ivp = 0;
        break;
    case NPC_PARM_BND_CENTER:
        xVec3Copy(vec, &g_O3);
        break;
    case NPC_PARM_BND_EXTENT:
        xVec3Copy(vec, &g_O3);
        break;
    case NPC_PARM_DETECT_RAD:
        *fvp = 3.0f;
        break;
    case NPC_PARM_DETECT_HYT:
        *fvp = 6.0f;
        break;
    case NPC_PARM_DETECT_OFF:
        *fvp = -2.0f;
        break;
    case NPC_PARM_ATTACK_RAD:
        *fvp = 5.0f;
        break;
    case NPC_PARM_ATTACK_FOV:
        *fvp = 60.0f;
        break;
    case NPC_PARM_SND_RAD:
        *fvp = 30.0f;
        break;
    case NPC_PARM_ESTEEM_A:
    case NPC_PARM_ESTEEM_B:
    case NPC_PARM_ESTEEM_C:
    case NPC_PARM_ESTEEM_D:
    case NPC_PARM_ESTEEM_E:
        *ivp = 0;
        break;
    case NPC_PARM_SHADOW_CASTDIST:
    case NPC_PARM_SHADOW_RADCACHE:
    case NPC_PARM_SHADOW_RADRASTER:
        *fvp = -1.0f;
        break;
    case NPC_PARM_ATK_SIZE01:
        *fvp = 0.5f;
        break;
    case NPC_PARM_ATK_FRAMES01:
        vec->x = -1.0f;
        vec->y = 100.0f;
        vec->z = 0.0f;
        break;
    case NPC_PARM_ATK_FRAMES01A:
    case NPC_PARM_ATK_FRAMES01B:
    case NPC_PARM_ATK_FRAMES02:
    case NPC_PARM_ATK_FRAMES02A:
    case NPC_PARM_ATK_FRAMES02B:
    case NPC_PARM_ATK_FRAMES03:
    case NPC_PARM_ATK_FRAMES03A:
    case NPC_PARM_ATK_FRAMES03B:
        vec->x = -1.0f;
        vec->y = -2.0f;
        vec->z = 0.0f;
        break;
    case NPC_PARM_MODELSCALE:
        xVec3Copy(vec, &g_O3);
        break;
    case NPC_PARM_TIMEFIDGET:
        *fvp = 15.0f;
        break;
    case NPC_PARM_TIMEATTACK:
        *fvp = 15.0f;
        break;
    case NPC_PARM_TIMESTUN:
        *fvp = 5.0f;
        break;
    case NPC_PARM_TIMEALERT:
        *fvp = 5.0f;
        break;
    case NPC_PARAM_TEST_COUNT:
        *ivp = 1;
        break;
    case NPC_PARM_VTX_ATTACKBASE:
    case NPC_PARM_VTX_ATTACK:
    case NPC_PARM_VTX_ATTACK1:
    case NPC_PARM_VTX_ATTACK2:
    case NPC_PARM_VTX_ATTACK3:
    case NPC_PARM_VTX_ATTACK4:
    case NPC_PARM_VTX_EYEBALL:
    case NPC_PARM_VTX_DMGSMOKEA:
    case NPC_PARM_VTX_DMGSMOKEB:
    case NPC_PARM_VTX_DMGSMOKEC:
    case NPC_PARM_VTX_DMGFLAMEA:
    case NPC_PARM_VTX_DMGFLAMEB:
    case NPC_PARM_VTX_DMGFLAMEC:
    case NPC_PARM_VTX_PROPEL:
    case NPC_PARM_VTX_EXHAUST:
    case NPC_PARM_VTX_GEN01:
    case NPC_PARM_VTX_GEN02:
    case NPC_PARM_VTX_GEN03:
    case NPC_PARM_VTX_GEN04:
    case NPC_PARM_VTX_GEN05:
        fvlist[0] = 0.0f;
        fvlist[1] = 0.0f;
        fvlist[2] = 0.0f;
        fvlist[3] = 0.0f;
        break;
    case NPC_PARM_FIRSTMVPT:
        *mvpt = NULL;
        break;
    case NPC_PARM_ENDTAG_INI:
    case NPC_PARM_ENDTAG_PROPS:
    case NPC_PARM_ENDTAG_SHARE:
        result = 0;
        break;
    default:
        result = 0;
        break;
    }

    //return result;
}

void zNPCCommon_WonderReset()
{
    g_isConversation = 0;
    g_flg_wonder = 0;
}

U32 zNPCCommon::CanDoSplines()
{
    bool retval = false;
    if ((npcset.useNavSplines) && ((flg_move) & 8))
    {
        retval = true;
    }
    return retval;
}

zMovePoint* zNPCCommon::FirstAssigned()
{
    zMovePoint* nav_first = NULL;
    zNPCCommon::GetParm(NPC_PARM_FIRSTMVPT, &nav_first);
    return nav_first;
}

void zNPCCommon::MvptReset(zMovePoint* nav_goto)
{
    if (nav_goto)
    {
        this->nav_dest = nav_goto;
    }
    else
    {
        this->GetParm(NPC_PARM_FIRSTMVPT, &this->nav_dest);
    }

    this->nav_past = this->nav_dest;
    this->nav_curr = this->nav_dest;
    this->nav_lead = this->nav_dest;
    this->spl_mvptspline = NULL;
    this->len_mvptspline = 0.0f;
    this->dst_curspline = 0.0f;
}

S32 zNPCCommon::MvptCycle()
{
    zMovePoint* nav_tmp = NULL;

    this->spl_mvptspline = NULL;
    this->len_mvptspline = 0.0f;
    this->dst_curspline = 0.0f;

    if (!this->nav_curr)
    {
        this->GetParm(NPC_PARM_FIRSTMVPT, &this->nav_curr);
        nav_tmp = this->nav_curr;
    }
    else if (this->nav_curr && this->nav_dest)
    {
        zMovePointGetNext(this->nav_dest, this->nav_curr, &nav_tmp, NULL);
    }
    else if (this->nav_curr)
    {
        zMovePointGetNext(this->nav_curr, NULL, &nav_tmp, NULL);
    }

    if (this->nav_curr)
    {
        this->nav_past = this->nav_curr;
    }

    if (this->nav_dest)
    {
        this->nav_curr = this->nav_dest;
    }

    this->nav_dest = nav_tmp;

    if (this->CanDoSplines() && this->nav_dest && this->nav_dest->HasSpline())
    {
        this->spl_mvptspline = this->nav_dest->spl;

        while (this->nav_dest->asset->bezIndex != 0)
        {
            this->nav_dest = (zMovePoint*)this->nav_dest->nodes[0];
        }

        this->len_mvptspline = xSpline3_ArcTotal(this->spl_mvptspline);
    }

    if (this->nav_dest)
    {
        zMovePointGetNext(this->nav_dest, this->nav_curr, &this->nav_lead, NULL);
    }

    return (this->nav_dest != NULL);
}

S32 zNPCCommon::HaveLOSToPos(xVec3* pos, F32 dist, xScene* xscn, xBase* tgt, xCollis* colCallers)
{
    S32 result;
    xRay3 ray = {};
    xVec3 mypos = {};

    xCollis* colrec;
    if (colCallers)
    {
        colrec = colCallers;
    }
    else
    {
        static xCollis localCollis = { k_HIT_0xF00 | k_HIT_CALC_HDNG };
        memset(&localCollis, 0, sizeof(localCollis));
        localCollis.flags = k_HIT_0xF00 | k_HIT_CALC_HDNG;

        colrec = &localCollis;
    }

    this->DBG_PStatCont((en_npcperf)1);
    this->DBG_PStatOn((en_npcperf)2);

    if (!this->GetVertPos(NPC_MDLVERT_LOSEYEBALL, &mypos))
    {
        xVec3Copy(&mypos, xEntGetCenter(this));
    }

    NPCC_xBoundAway(&this->bound);

    ray.min_t = 0.0f;
    ray.max_t = dist;
    xVec3Sub(&ray.dir, pos, &mypos);
    xVec3Normalize(&ray.dir, &ray.dir);
    xVec3Copy(&ray.origin, &mypos);
    ray.flags = XRAY3_USE_MIN | XRAY3_USE_MAX;
    xRayHitsScene(xscn, &ray, colrec);

    NPCC_xBoundBack(&this->bound);

    if (!(colrec->flags & k_HIT_IT))
    {
        result = 1;
    }
    else if (colrec->dist > dist)
    {
        result = 1;
    }
    else if (tgt && colrec->oid)
    {
        if (tgt->id == colrec->oid)
        {
            result = 1;
        }
        else
        {
            result = 0;
        }
    }
    else
    {
        result = 0;
    }

    if (this->DBG_IsNormLog((en_npcdcat)13, 2))
    {
        if (result)
        {
            xDrawSetColor(g_GREEN);
        }
        else
        {
            xDrawSetColor(g_NEON_BLUE);
        }

        xDrawLine(&mypos, pos);
    }

    this->DBG_PStatCont((en_npcperf)2);
    this->DBG_PStatOn((en_npcperf)1);

    return result;
}

xModelInstance* zNPCCommon::ModelAtomicHide(S32 index, xModelInstance* mdl)
{
    xModelInstance* minst = mdl ? mdl : this->ModelAtomicFind(index, -1, NULL);
    if (!minst)
        return minst;

    minst->Flags &= ~0x1;

    return minst;
}

xModelInstance* zNPCCommon::ModelAtomicShow(S32 index, xModelInstance* mdl)
{
    xModelInstance* minst = mdl ? mdl : this->ModelAtomicFind(index, -1, NULL);
    if (!minst)
        return minst;

    minst->Flags |= 0x2;
    minst->Flags |= 0x1;

    return minst;
}

xModelInstance* zNPCCommon::ModelAtomicFind(S32 index, S32 idx_prev, xModelInstance* mdl_prev)
{
    xModelInstance* da_atomic = NULL;
    xModelInstance* minst = mdl_prev;
    S32 midx = 0;

    if (minst && idx_prev >= 0)
    {
        midx = idx_prev;
    }
    else
    {
        minst = this->model;
    }

    while (minst)
    {
        if (midx == index)
        {
            da_atomic = minst;
            break;
        }
        minst = minst->Next;
        midx++;
    }

    return da_atomic;
}

void zNPCCommon::ModelScaleSet(F32 x, F32 y, F32 z)
{
    xModelInstance* minst = this->model;

    while (minst)
    {
        minst->Scale.x = x;
        minst->Scale.y = y;
        minst->Scale.z = z;
        minst = minst->Next;
    }
}

S32 zNPCCommon::AnimStart(U32 animID, S32 forceRestart)
{
    static S32 dumptable = 0;
    if (dumptable)
    {
        dumptable = 0;
        this->AnimGetTable();
    }

    xAnimState* r3_ = this->AnimCurState();
    if (r3_ && r3_->ID == animID && !forceRestart)
    {
        return r3_->ID;
    }

    xAnimTable* r3 = this->AnimGetTable();
    xAnimTransition* da_tran = r3->TransitionList;

    while (da_tran)
    {
        if (da_tran->Dest->ID == animID)
        {
            break;
        }
        da_tran = da_tran->Next;
    }

    if (da_tran)
    {
        xAnimPlayStartTransition(this->model->Anim, da_tran);
    }
    else
    {
        xSceneID2Name(globals.sceneCur, this->id);
    }

    if (da_tran)
    {
        return da_tran->Dest->ID;
    }

    return 0;
}

void zNPCCommon::AnimSetState(U32 animID, F32 time)
{
    xAnimTable* r3 = this->AnimGetTable();
    xAnimState* state = xAnimTableGetStateID(r3, animID);

    xAnimPlaySetState(this->model->Anim->Single, state, time);
}

xAnimState* zNPCCommon::AnimFindState(U32 animID)
{
    xAnimTable* r3 = this->AnimGetTable();
    return xAnimTableGetStateID(r3, animID);
}

xAnimSingle* zNPCCommon::AnimCurSingle()
{
    if (!this->model->Anim && (this->SelfType() & 0xFFFFFF00) == 'NTT\0')
    {
        return NULL;
    }

    return this->model->Anim->Single;
}

xAnimState* zNPCCommon::AnimCurState()
{
    if (!this->model->Anim && (this->SelfType() & 0xFFFFFF00) == 'NTT\0')
    {
        return NULL;
    }

    return this->model->Anim->Single->State;
}

zNPCSettings* zNPCSettings_Find(U32 id)
{
    zNPCSettings* set = NULL;
    U32 size = 0;

    if (id)
    {
        set = (zNPCSettings*)xSTFindAsset(id, &size);
    }

    if (!set)
    {
        set = g_dflt_npcsettings;
    }

    return set;
}

void zNPCCommon::Vibrate(F32 ds2_cur, F32 ds2_max)
{
    F32 rat = ds2_cur / MAX(ds2_max, 1.0f);

    if (rat < 0.4f)
    {
        this->Vibrate(NPC_VIBE_HARD, -1.0f);
    }
    else if (rat < 0.7f)
    {
        this->Vibrate(NPC_VIBE_NORM, -1.0f);
    }
    else if (rat < 1.0f)
    {
        this->Vibrate(NPC_VIBE_SOFT, -1.0f);
    }
}

void zNPCCommon::Vibrate(en_npcvibe vibe, F32 duration)
{
    _tagRumbleType typ_rum;
    F32 tym_rum;

    switch (vibe)
    {
    case NPC_VIBE_BUILD_A:
        tym_rum = 0.05f;
        typ_rum = eRumble_Light;
        break;
    case NPC_VIBE_BUILD_B:
        tym_rum = 0.05f;
        typ_rum = eRumble_Medium;
        break;
    case NPC_VIBE_BUILD_C:
        tym_rum = 0.05f;
        typ_rum = eRumble_Heavy;
        break;
    case NPC_VIBE_SOFT:
        tym_rum = 0.1f;
        typ_rum = eRumble_Light;
        break;
    case NPC_VIBE_NORM:
        tym_rum = 0.25f;
        typ_rum = eRumble_Medium;
        break;
    case NPC_VIBE_HARD:
        tym_rum = 0.45f;
        typ_rum = eRumble_Heavy;
        break;
    default:
        tym_rum = 0.0f;
        typ_rum = eRumble_Medium;
        zPadAddRumble(eRumble_Medium, 0.4f, 0, 0);
        break;
    }

    if (duration > 0.0f)
    {
        tym_rum = duration;
    }
    //return retval;
}

U32 zNPCCommon::AnimCurStateID()
{
    xAnimState* state = AnimCurState();
    if (state != NULL)
    {
        return state->ID;
    }
    else
    {
        return 0;
    }
}

F32 zNPCCommon::AnimDuration(xAnimState* ast)
{
    if (ast == 0)
    {
        ast = AnimCurState();
    }
    return (ast == 0) ? 0.0f : ast->Data->Duration;
}

F32 zNPCCommon::AnimTimeRemain(xAnimState* ast)
{
    return (AnimDuration(ast) - AnimTimeCurrent());
}

F32 zNPCCommon::AnimTimeCurrent()
{
    return model->Anim->Single->Time;
}

void zNPCSettings_MakeDummy()
{
    static zNPCSettings dum;
    dum.id = 0xFEEDCAFE;
    dum.baseType = eBaseTypeNPCSettings;
    dum.linkCount = 0;
    dum.baseFlags = ((U16)(1 << 0));
    dum.type = 0xBAD0CACA;
    dum.version = 2;
    dum.handle = 0;
    dum.basisType = NPCP_BASIS_NONE;
    dum.allowDetect = 1;
    dum.allowWander = 1;
    dum.allowPatrol = 1;
    dum.reduceCollide = 0;
    dum.useNavSplines = 1;
    dum.allowChase = 1;
    dum.allowAttack = 1;
    dum.assumeLOS = 0;
    dum.assumeFOV = 0;
    dum.duploWaveMode = NPCP_DUPOWAVE_CONTINUOUS;
    dum.duploSpawnLifeMax = -1;
    dum.duploSpawnDelay = 5.0f;

    g_dflt_npcsettings = &dum;
}

xVec3* zNPCCommon::MatPosSet(xVec3* pos)
{
    if (pos != NULL)
    {
        xVec3Copy((xVec3*)&model->Mat->pos, pos);
    }
    return (xVec3*)&model->Mat->pos;
}

S32 NPCC_NPCIsConversing()
{
    return g_isConversation;
}

void zNPCCommon::WonderOfTalking(S32 inprogress, xBase* owner)
{
    if (inprogress)
    {
        g_isConversation = 1;
        if (owner)
        {
            g_ownerConversation = owner;
            return;
        }
        else
        {
            g_ownerConversation = this;
            return;
        }
    }

    g_isConversation = 0;
    g_ownerConversation = NULL;
}

S32 zNPCCommon::SomethingWonderful()
{
    S32 flg_wonder = g_flg_wonder;

    if (globals.player.Health < 1)
    {
        // Idk why they wouldn't do flg_wonder |= x here, but this is needed to match
        flg_wonder = g_flg_wonder | 0b00000010;
    }

    if (globals.player.ControlOff & 0xffffbeff)
    {
        flg_wonder |= 0b00000100;
    }

    if (cruise_bubble::active() && (this->SelfType() & 0xffffff00) == 'NTF\0')
    {
        flg_wonder |= 0b01000000;
    }

    if (globals.cmgr && globals.cmgr->csn)
    {
        flg_wonder |= 0b00000001;
    }

    if (g_isConversation)
    {
        flg_wonder |= 0b00001000;
    }

    if (!NPCC_LampStatus())
    {
        flg_wonder |= 0b00100000;
    }

    if (zEntTeleportBox_playerIn())
    {
        flg_wonder |= 0b10000000;
    }

    return flg_wonder;
}

S32 zNPCCommon::SndIsAnyPlaying()
{
    S32 iVar1 = 0;

    for (S32 i = 0; i < 4; i++)
    {
        iVar1 = xSndIsPlaying(0, (U32)this + i);
        if (iVar1)
        {
            break;
        }
    }

    return iVar1;
}

U32 zNPCCommon::LassoInit()
{
    lassdata = PRIV_GetLassoData();
    if (lassdata != NULL)
    {
        memset(lassdata, 0, 0x18);
        lassdata->stage = LASS_STAT_PENDING;
        lassdata->lassoee = this;
    }
    if (lassdata)
    {
        return 1;
    }
    return 0;
}

zNPCLassoInfo* zNPCCommon::GimmeLassInfo()
{
    return flg_vuln & 0x1000000 ? lassdata : NULL;
}

void zNPCCommon::LassoNotify(en_LASSO_EVENT event)
{
    zNPCLassoInfo* lass = this->lassdata;

    if (!lass->stage && event)
    {
        return;
    }

    switch (event)
    {
    case LASS_STAT_DONE:
    {
        lass->stage = LASS_STAT_PENDING;
        break;
    }
    case LASS_STAT_PENDING:
    {
        lass->stage = LASS_STAT_DONE;
        break;
    }
    case LASS_STAT_GRABBING:
    {
        lass->stage = LASS_STAT_GRABBING;
        break;
    }
    case LASS_STAT_NOMORE:
    {
        lass->stage = LASS_STAT_TOSSING;
        return;
    }
    case LASS_STAT_UNK_5:
    {
        lass->stage = LASS_STAT_DONE;
        break;
    }
    }
}

void zNPCCommon::AddDEVGoals(xPsyche*)
{
}

xAnimTable* ZNPC_AnimTable_Common()
{
    xAnimTable* table = xAnimTableNew("zNPCCommon", NULL, 0x0);

    xAnimTableNewState(table, "Idle01", 0x110, 0x1, 1.0f, NULL, NULL, 0.0f, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);

    return table;
}

xAnimTable* ZNPC_AnimTable_LassoGuide()
{
    xAnimTable* table = xAnimTableNew("LassoGuides", NULL, 0x0);

    xAnimTableNewState(table, g_strz_lassanim[LassoGuide_Grab01], 0x0, 0x1, 1.0f, NULL, NULL, 0.0f,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_lassanim[LassoGuide_Hold01], 0x0, 0x1, 1.0f, NULL, NULL, 0.0f,
                       NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);

    xAnimTableNewTransition(table, g_strz_lassanim[LassoGuide_Grab01],
                            g_strz_lassanim[LassoGuide_Hold01], NULL, NULL, 0x10, 0x0, 0.0f, 0.0f,
                            0, 0, 0.0f, NULL);

    return table;
}

U32 zNPCCommon::DBG_Name()
{
    return 0;
}

void zNPCCommon::DBG_AddTweakers()
{
}

void zNPCCommon::SelfSetup()
{
}

void zNPCCommon::DBG_RptDataSize()
{
}

U32 zNPCCommon::DBG_InstName()
{
    return this->DBG_Name();
}

xEntDrive* zNPCCommon::PRIV_GetDriverData()
{
    return NULL;
}
void zNPCCommon::ModelScaleSet(const xVec3* vec)
{
    ModelScaleSet(vec->x, vec->y, vec->z);
}

xAnimTable* zNPCCommon::AnimGetTable()
{
    return model->Anim->Table;
}

zNPCLassoInfo* zNPCCommon::PRIV_GetLassoData()
{
    return NULL;
}

void zNPCCommon::DuploOwner(zNPCCommon* duper)
{
    npc_duplodude = duper;
}

void zNPCCommon::SpeakBegin()
{
}

void zNPCCommon::SpeakEnd()
{
}

void zNPCCommon::SpeakStart(U32 param_1, U32 param_2, S32 param_3)
{
}

void zNPCCommon::SpeakStop()
{
}

F32 zNPCCommon::GenShadCacheRad()
{
    return lbl_803CE4C0;
}

// xNPCBasic vtable at: 0x2949F4
// vtable reference is stored immidately _after_ object fields in an xNPCBasic
// instance. That is, sizeof(xNPCBasic) = sizeof(visible fields) + an extra 4
// bytes for the vtable pointer after those fields.
// vtable[0] = NULL (I think these first two are for RTTI which is disabled)
// vtable[1] = NULL
// vtable[2] = Init(FP9xEntAsset)
// vtable[3] = PostInit(Fv)
// vtable[4] = Setup(Fv)
// vtable[5] = PostSetup(Fv)
// vtable[6] = Reset(Fv)
// vtable[7] = Process(FP6xScenef)
// vtable[8] = BUpdate(FP5xVec3)
// vtable[9] = NewTime(FP6xScenef)
// vtable[10] = Move(FP6xScenefP9xEntFrame)
// vtable[11] = SysEvent(FP5xBaseP5xBaseUiPCfP5xBasePi)
// vtable[12] = Render(Fv)
// vtable[13] = Save(CFP7xSerial)
// vtable[14] = Load(FP7xSerial)
// vtable[15] = CollideReview(Fv)
// vtable[16] = ColChkFlags(CFv)
// vtable[17] = ColPenFlags(CFv)
// vtable[18] = ColChkByFlags(CFv)
// vtable[19] = ColPenByFlags(CFv)
// vtable[20] = PhysicsFlags(CFv)
xNPCBasic::xNPCBasic(S32 value)
{
    myNPCType = value;
}

void xNPCBasic::Setup()
{
}

void xNPCBasic::Move(xScene* xscn, F32 dt, xEntFrame* frm)
{
}

S32 xNPCBasic::SysEvent(xBase* from, xBase* to, U32 toEvent, const F32* toParam,
                        xBase* toParamWidget, S32* handled)
{
    return 1;
}

void xNPCBasic::DBG_PStatOn(en_npcperf stat)
{
}

void xNPCBasic::DBG_PStatCont(en_npcperf stat)
{
}

void xNPCBasic::PostInit()
{
}

void xNPCBasic::Render()
{
    xEntRender(this);
}

U32 xSndIsPlaying(U32 assetID, U32 parid)
{
    return iSndIsPlaying(assetID, parid);
}
