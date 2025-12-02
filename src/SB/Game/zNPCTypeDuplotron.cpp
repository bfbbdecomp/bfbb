#include "xGroup.h"
#include "xMathInlines.h"
#include "zGlobals.h"
#include "zNPCGoalCommon.h"
#include "zNPCGoals.h"
#include "zNPCSupport.h"
#include "zNPCTypeDuplotron.h"

#define ANIM_Unknown 0
#define ANIM_Idle01 1
#define ANIM_Spawn01 2
#define ANIM_Shiver01 3
#define ANIM_Hurt01 4

extern U32 g_hash_dupoanim[5] = {};
extern char* g_strz_dupoanim[5] = { "Unknown", "Idle01", "Spawn01", "Shiver01", "Hurt01" };
static zParEmitter* g_pemit_smoky;
static zParEmitter* g_pemit_steam;
static zParEmitter* g_pemit_overheat;
RwRaster* zNPCDuplotron::rast_blinky = NULL;
static xParEmitterCustomSettings g_parf_smoky;
static xParEmitterCustomSettings g_parf_steam;
static xParEmitterCustomSettings g_parf_overheat;

void __deadstripped_zNPCTypeDuplotron()
{
    // Also exists in NPCBlinker::Render
    static RxObjSpace3DVertex blink_vtxbuf[2][14];
}

void ZNPC_Duplotron_Startup()
{
    for (S32 i = 0; i < 5; i++)
    {
        g_hash_dupoanim[i] = xStrHash(g_strz_dupoanim[i]);
    }
}

void ZNPC_Duplotron_Shutdown()
{
}

void zNPCDuplotron_SceneFinish()
{
    DUPO_KillEffects();
}

void zNPCDuplotron_ScenePostInit()
{
    DUPO_InitEffects();
}

void zNPCDuplotron_ScenePrepare()
{
}

xFactoryInst* ZNPC_Create_Duplotron(S32 who, RyzMemGrow* grow, void*)
{
    zNPCDuplotron* npc;

    switch (who)
    {
    case NPC_TYPE_DUPLOTRON:
    {
        npc = new (who, grow) zNPCDuplotron(who);
        break;
    }
    default:
    {
        npc = new (who, grow) zNPCDuplotron(who);
        break;
    }
    }

    return npc;
}

void ZNPC_Destroy_Duplotron(xFactoryInst* inst)
{
    delete inst;
}

xAnimTable* ZNPC_AnimTable_Duplotron()
{
    xAnimTable* table = xAnimTableNew("zNPCDupltron", NULL, 0);

    S32 ourAnims[5] = { ANIM_Idle01, ANIM_Spawn01, ANIM_Shiver01, ANIM_Hurt01, ANIM_Unknown };

    // clang-format off
    xAnimTableNewState(table, g_strz_dupoanim[ANIM_Idle01], 0x10, 0, 1, NULL, NULL, 0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_dupoanim[ANIM_Spawn01], 0x20, 0, 1, NULL, NULL, 0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_dupoanim[ANIM_Shiver01], 0x10, 0, 1, NULL, NULL, 0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    xAnimTableNewState(table, g_strz_dupoanim[ANIM_Hurt01], 0, 0, 1, NULL, NULL, 0, NULL, NULL, xAnimDefaultBeforeEnter, NULL, NULL);
    // clang-format on

    NPCC_BuildStandardAnimTran(table, g_strz_dupoanim, ourAnims, 1, 0.2f);
    return table;
}

void zNPCDuplotron::Init(xEntAsset* asset)
{
    zNPCCommon::Init(asset);
    this->flg_move = 1;
    this->flg_vuln = -0xfff9;
    this->flg_vuln &= ~0x60000000;
    this->flg_vuln &= ~0x1000000;
    this->rast_blinky = NULL;
    return;
}

void zNPCDuplotron::Setup()
{
    RwTexture* tmp_txtr;
    en_SM_WAVE_MODE wm;

    this->spawner = zNPCSpawner_GetInstance();
    if (this->spawner != NULL)
    {
        this->spawner->Subscribe(this);
    }
    zNPCCommon::Setup();
    if (this->spawner != NULL)
    {
        switch (this->npcset.duploWaveMode)
        {
        case NPCP_DUPOWAVE_DISCREET:
            wm = SM_WAVE_DISCREET;
            break;

        case NPCP_DUPOWAVE_CONTINUOUS:
        default:
            wm = SM_WAVE_CONTINUOUS;
            break;
        }

        this->spawner->SetWaveMode(wm, this->npcset.duploSpawnDelay,
                                   this->npcset.duploSpawnLifeMax);
    }
    this->cfg_npc->snd_trax = g_sndTrax_Duplotron;
    NPCS_SndTablePrepare(g_sndTrax_Duplotron);
    if ((this->rast_blinky == NULL) &&
        (tmp_txtr = NPCC_FindRWTexture("fx_duplotron_lamp"), tmp_txtr != NULL))
    {
        this->rast_blinky = tmp_txtr->raster;
    }
    return;
}

void zNPCDuplotron::ParseINI()
{
    zNPCCommon::ParseINI();
}

void zNPCDuplotron::Reset()
{
    zNPCCommon::Reset();
    if (this->spawner != NULL)
    {
        this->spawner->Reset();
    }
    this->flags |= 0x40;
    this->psy_instinct->GoalSet(NPC_GOAL_DUPLOLIVE, 1);
    return;
}

void zNPCDuplotron::ParseLinks()
{
    zNPCCommon::ParseLinks();

    if (this->spawner != NULL)
    {
        for (S32 i = 0; i < this->linkCount; i++)
        {
            xLinkAsset* link = &this->link[i];

            if (link->dstEvent == eEventConnectToChild)
            {
                xSceneID2Name(globals.sceneCur, this->id);
                xSceneID2Name(globals.sceneCur, link->dstAssetID);

                xBase* mychild = zSceneFindObject(link->dstAssetID);
                if (mychild != NULL)
                {
                    this->ParseChild(mychild);
                }
            }
        }
    }

    return;
}

void zNPCDuplotron::BUpdate(xVec3* pos)
{
    zNPCCommon::BUpdate(pos);
}

void zNPCDuplotron::ParseChild(xBase* child)
{
    S32 i;

    switch (child->baseType)
    {
    case eBaseTypeMovePoint:
        this->spawner->AddSpawnPoint((zMovePoint*)child);
        break;
    case eBaseTypeNPC:
        this->spawner->AddSpawnNPC((zNPCCommon*)child);
        break;
    case eBaseTypeGroup:
    {
        xGroup* grp = (xGroup*)child;
        S32 cnt = xGroupGetCount(grp);
        for (i = 0; i < cnt; i++)
        {
            xBase* grpitem = xGroupGetItemPtr(grp, i);
            if (grpitem != NULL)
            {
                U8 grpitemType = grpitem->baseType;
                if (grpitemType == eBaseTypeMovePoint)
                {
                    this->spawner->AddSpawnPoint((zMovePoint*)grpitem);
                }
                else if (grpitemType == eBaseTypeNPC)
                {
                    this->spawner->AddSpawnNPC((zNPCCommon*)grpitem);
                }
                else if (grpitemType == eBaseTypeGroup)
                {
                    this->ParseChild(grpitem);
                }
            }
        }
        break;
    }

    default:
        xSceneID2Name(globals.sceneCur, child->id);
        break;
    }

    return;
}

void zNPCDuplotron::Process(xScene* xscn, F32 dt)
{
    xPsyche* psy;

    if (this->spawner != NULL)
    {
        this->spawner->Timestep(dt);
    }
    psy = this->psy_instinct;
    if (psy != NULL)
    {
        psy->Timestep(dt, NULL);
    }
    zNPCCommon::Process(xscn, dt);
    return;
}

void zNPCDuplotron::SelfSetup()
{
    psy_instinct = xBehaveMgr_GetSelf()->Subscribe(this, 0);
    xPsyche* psy = psy_instinct;
    psy->BrainBegin();
    psy->AddGoal(NPC_GOAL_DUPLOLIVE, NULL);
    psy->AddGoal(NPC_GOAL_DUPLODEAD, NULL);
    psy->AddGoal(NPC_GOAL_LIMBO, NULL);
    psy->BrainEnd();
    psy->SetSafety(NPC_GOAL_DUPLOLIVE);
}

U32 zNPCDuplotron::AnimPick(S32 gid, en_NPC_GOAL_SPOT gspot, xGoal*)
{
    S32 idx = -1;
    U32 animId = ANIM_Unknown;

    switch (gid)
    {
    case NPC_GOAL_DUPLOLIVE:
        if (gspot == NPC_GSPOT_START)
        {
            idx = ANIM_Idle01;
        }
        else if (gspot == NPC_GSPOT_RESUME)
        {
            idx = ANIM_Idle01;
        }
        else if (gspot == NPC_GSPOT_STARTALT)
        {
            idx = ANIM_Shiver01;
        }
        else if (gspot == NPC_GSPOT_ALTA)
        {
            idx = ANIM_Spawn01;
        }
        else if (gspot == NPC_GSPOT_ALTB)
        {
            idx = ANIM_Hurt01;
        }
        else
        {
            idx = ANIM_Idle01;
        }
        break;
    case NPC_GOAL_DUPLODEAD:
        idx = ANIM_Hurt01;
        break;
    case NPC_GOAL_LIMBO:
        idx = ANIM_Idle01;
        break;
    default:
        idx = ANIM_Idle01;
        break;
    }
    if (idx >= 0)
    {
        animId = g_hash_dupoanim[idx];
    }

    return animId;
}

void zNPCDuplotron::DuploNotice(en_SM_NOTICES note, void* data)
{
    if (this->spawner != NULL)
    {
        this->spawner->Notify(note, data);
    }
}

S32 zNPCDuplotron::IsAlive()
{
    xPsyche* psy = this->psy_instinct;
    return psy->GIDOfActive() != NPC_GOAL_DUPLODEAD;
}

S32 zNPCDuplotron::NPCMessage(NPCMsg* mail)
{
    S32 handled;

    // From the dwarf but I can't find a way to use it that also matches:
    //xPsyche* psy = this->psy_instinct;

    if (this->psy_instinct != NULL)
    {
        zNPCGoalCommon* curgoal = (zNPCGoalCommon*)(psy_instinct->GetCurGoal());
        if (curgoal != NULL)
        {
            handled = curgoal->NPCMessage(mail);
        }

        if (!handled)
        {
            zNPCGoalCommon* recgoal = (zNPCGoalCommon*)(psy_instinct->GetPrevRecovery(0));
            if (recgoal && recgoal != curgoal)
            {
                handled = recgoal->NPCMessage(mail);
            }
        }
    }

    if (!handled)
    {
        handled = this->DupoHandleMail(mail);
    }

    if (!handled)
    {
        handled = zNPCCommon::NPCMessage(mail);
    }

    return handled;
}

S32 zNPCDuplotron::DupoHandleMail(NPCMsg* mail)
{
    S32 handled = 1;

    switch (mail->msgid)
    {
    case NPC_MID_SYSEVENT:
        switch (mail->sysevent.toEvent)
        {
        case eEventDuploKillKids:
            this->DuploNotice(SM_NOTE_KILLKIDS, NULL);
            break;
        case eEventDuploPause:
            this->DuploNotice(SM_NOTE_DUPPAUSE, NULL);
            break;
        case eEventDuploResume:
            this->DuploNotice(SM_NOTE_DUPRESUME, NULL);
            break;
        case eEventNPCSetActiveOff:
            this->DuploNotice(SM_NOTE_DUPPAUSE, NULL);
            handled = 0;
            break;
        case eEventDuploWaveBegin:
        case eEventDuploWaveComplete:
        case eEventDuploNPCBorn:
        case eEventDuploNPCKilled:
        case eEventDuploExpiredMaxNPC:
            break;
        case eEventNPCSetActiveOn:
            handled = 0;
            break;
        default:
            handled = 0;
            break;
        }
        break;
    case NPC_MID_DAMAGE:
        break;
    default:
        handled = 0;
        break;
    }

    return handled;
}

// non-matching: scheduling?
void DUPO_InitEffects()
{
    g_pemit_smoky = zParEmitterFind("PAREMIT_DUPLO_SMOKE");
    g_pemit_steam = zParEmitterFind("PAREMIT_DUPLO_STEAM");
    g_pemit_overheat = zParEmitterFind("PAREMIT_DUPLO_OVERHEAT");

    g_parf_smoky.custom_flags = 0x100;
    xVec3Copy(&g_parf_smoky.pos, &g_O3);

    g_parf_steam.custom_flags = 0x300;
    xVec3Copy(&g_parf_steam.pos, &g_O3);
    xVec3Copy(&g_parf_steam.vel, &g_Y3);

    g_parf_overheat.custom_flags = 0x300;
    xVec3Copy(&g_parf_overheat.pos, &g_O3);
    xVec3Copy(&g_parf_overheat.vel, &g_Y3);
}

void DUPO_KillEffects()
{
}

void zNPCDuplotron::VFXSmokeStack(F32 dt)
{
    static const xVec3 vec_emitOffset = {};

    NPCC_TmrCycle(&dt, 1.0f, this->tmr_smokeCycle);

    if (this->IsAttackFrame(-1.0f, 0) != 0)
    {
        F32 ds2_cam = NPCC_ds2_toCam(this->Pos(), 0x0);
        if (!(ds2_cam > SQ(25.0f)))
        {
            // temp var needed for .sdata2 match
            F32 s = isin(this->tmr_smokeCycle * 2.0f * PI);
            S32 npar = 5.0f * s;
            if (0 < npar)
            {
                xVec3* pos_emit = NULL;
                *pos_emit = vec_emitOffset;
                xMat3x3RMulVec(pos_emit, (xMat3x3*)this->BoneMat(0xb), pos_emit);
                *pos_emit += *(xVec3*)this->BonePos(0xb);
                xMat3x3RMulVec(pos_emit, (xMat3x3*)this->BoneMat(0), pos_emit);
                *pos_emit += *(xVec3*)this->BonePos(0);
                for (S32 i = 0; i < npar; i++)
                {
                    xVec3Copy(&g_parf_smoky.pos, pos_emit);
                    F32 rand = xurand();
                    g_parf_smoky.pos.y += 0.1f;
                    g_parf_smoky.pos.x += 0.1f * (2.0f * (rand - 0.5f));
                    rand = xurand();
                    g_parf_smoky.pos.z += 0.1f * (2.0f * (rand - 0.5f));
                    xParEmitterEmitCustom(g_pemit_smoky, dt, &g_parf_smoky);
                }
            }
        }
    }
    return;
}

void zNPCDuplotron::VFXOverheat(F32 dt, F32)
{
    static S32 idx_steam[2] = { 12, -1 };
    static S32 idx_smoke[4] = { 7, 8, 9, -1 };

    S32 rc;
    xVec3 dir_emit;
    xVec3 pos_emit;

    if (xEntIsVisible(this))
    {
        if (((this->model)->Flags & 0x400) == 0)
        {
            static S32 skip = 0;

            if (++skip >= 5)
            {
                skip = 0;

                for (rc = *idx_smoke; -1 < rc; rc++)
                {
                    if (this->GetVertPos(*(en_mdlvert*)rc, &pos_emit))
                    {
                        xVec3Copy(&g_parf_overheat.pos, &pos_emit);
                        xVec3Sub(&dir_emit, &pos_emit, xEntGetCenter(this));
                        xVec3Normalize(&dir_emit, &dir_emit);
                        xVec3SMul(&g_parf_overheat.vel, &dir_emit,
                                  xVec3Length(&(g_pemit_overheat->tasset)->vel));
                    }
                }

                for (rc = *idx_steam; -1 < rc; rc++)
                {
                    if (this->GetVertPos(*(en_mdlvert*)rc, &pos_emit))
                    {
                        xVec3Copy(&g_parf_steam.pos, &pos_emit);
                        xVec3Sub(&dir_emit, &pos_emit, xEntGetCenter(this));
                        xVec3Normalize(&dir_emit, &dir_emit);
                        xVec3SMul(&g_parf_steam.vel, &dir_emit,
                                  xVec3Length(&(g_pemit_steam->tasset)->vel));
                        xParEmitterEmitCustom(g_pemit_steam, dt, &g_parf_steam);
                    }
                }
            }
        }
    }
    return;
}

void zNPCDuplotron::VFXCycleLights(F32 dt, S32 fastpace)
{
    S32 amPaused;

    if (this->tmr_blink < 0.0f)
    {
        this->idx_blink = this->idx_blink + 1;
        if (this->idx_blink >= 5)
        {
            this->idx_blink = 0;
        }
        this->tmr_blink = 0.5f;
    }

    this->tmr_blink = MAX(-1.0f, this->tmr_blink - dt);

    if (fastpace != 0)
    {
        this->tmr_blink = MAX(-1.0f, this->tmr_blink - dt);
    }

    if (1 < fastpace)
    {
        this->tmr_blink = MAX(-1.0f, this->tmr_blink - dt);
    }

    if ((this->spawner != NULL) && ((this->spawner->flg_spawner & 4) != 0))
    {
        amPaused = true;
    }
    else
    {
        if (this->spawner == NULL)
        {
            amPaused = true;
        }
        else
        {
            amPaused = false;
        }
    }

    for (S32 i = 1; i <= 5; i++)

    {
        if (amPaused)
        {
            this->ModelAtomicHide(i, NULL);
        }
        else if (fastpace > 0)
        {
            if ((xrand() & 0x800000) != 0)
            {
                this->ModelAtomicShow(i, NULL);
            }
            else
            {
                this->ModelAtomicHide(i, NULL);
            }
        }
        else
        {
            if (i == this->idx_blink + 1)
            {
                this->ModelAtomicShow(i, NULL);
            }
            else
            {
                this->ModelAtomicHide(i, NULL);
            }
        }
    }

    return;
}

zNPCDuplotron::zNPCDuplotron(S32 myType) : zNPCCommon(myType)
{
}

void zNPCDuplotron::Move(xScene*, F32, xEntFrame*)
{
}

U8 zNPCDuplotron::ColChkFlags() const
{
    return 0;
}

U8 zNPCDuplotron::ColPenFlags() const
{
    return 0;
}

U8 zNPCDuplotron::ColChkByFlags() const
{
    return XENT_COLLTYPE_PLYR | XENT_COLLTYPE_NPC;
}

U8 zNPCDuplotron::ColPenByFlags() const
{
    return XENT_COLLTYPE_PLYR | XENT_COLLTYPE_NPC;
}

U8 zNPCDuplotron::PhysicsFlags() const
{
    return 0;
}
