#include "zNPCHazard.h"

#include <types.h>
#include <string.h>

#include "zGlobals.h"
#include "zNPCTypeCommon.h"
#include "zNPCTypes.h"
#include "zNPCSupplement.h"
#include "zNPCSupport.h"
#include "xMath.h"
#include "xMathInlines.h"
#include "zGameExtras.h"

extern U32 g_hash_hazanim[3];
extern char* g_strz_hazanim[3];
extern UVAModelInfo g_haz_uvAnimInfo[30];
extern NPCHazard* g_haz_uvAnimQue[27];
extern RpAtomic* g_hazard_rawModel[30];
extern xAnimTable* g_haz_animTable[30];
extern const xVec3 g_O3;
extern F32 _958_Hazard; // 0.0f
extern F32 _959_Hazard; // 1.0f
extern F32 _1041_Hazard; // -1.0f

static S32 g_cnt_activehaz;
static xParEmitterCustomSettings g_parf_default;
static xParEmitterCustomSettings g_parf_zapwarn;
static xParEmitterCustomSettings g_parf_zapwave;
static xParEmitterCustomSettings g_parf_zaprain;
static RwRaster* g_rast_hazshad[30];
static zParEmitter* g_pemit_default;
static zParEmitter* g_pemit_zapwarn;
static zParEmitter* g_pemit_zapwave;
static zParEmitter* g_pemit_zaprain;

static en_hazmodel g_funfrag_choices[8] = {
    NPC_HAZMDL_FUNFRAG_WRENCH,    NPC_HAZMDL_FUNFRAG_JOYSTICK, NPC_HAZMDL_FUNFRAG_SINK,
    NPC_HAZMDL_FUNFRAG_DUCK,      NPC_HAZMDL_FUNFRAG_BRA,      NPC_HAZMDL_FUNFRAG_HEADPHONES,
    NPC_HAZMDL_FUNFRAG_CELLPHONE, NPC_HAZMDL_FUNFRAG_SHOE,
};

static char* g_strz_hazModel[30];
static NPCHazard g_hazards[64];

void zNPCHazard_Startup()
{
    for (S32 i = 0; i < 3; i++)
    {
        g_hash_hazanim[i] = xStrHash(g_strz_hazanim[i]);
    }
}

void zNPCHazard_Shutdown()
{
}

// WIP.
void zNPCHazard_ScenePrepare()
{
    memset(g_hazards, 0, sizeof(g_hazards));
    g_cnt_activehaz = 0;
    for (S32 i = 0; i < 27; i++)
    {
        g_haz_uvAnimQue[i] = NULL;
    }
    for (S32 i = 0; i < 30; i++)
    {
        g_haz_uvAnimInfo[i].Clear();
    }
    for (S32 i = 0; i < 30; i++)
    {
        g_haz_animTable[i] = NULL;
    }
    for (S32 i = 0; i < 30; i++)
    {
        g_hazard_rawModel[i] = NULL;
    }
}

void zNPCHazard_SceneReset()
{
    for (S32 i = 0; i < 64; i++)
    {
        if (g_hazards[i].flg_hazard)
        {
            g_hazards[i].Kill();
        }
    }
    g_cnt_activehaz = 0;
}

void zNPCHazard_ScenePostInit()
{
    zNPCHazard_InitEffects();
}

void zNPCHazard_InitEffects()
{
    g_pemit_default = zParEmitterFind("PAREMIT_CLOUD");
    g_pemit_zapwarn = zParEmitterFind("PAREMIT_ROMON_ZAPWARN");
    g_pemit_zapwave = zParEmitterFind("PAREMIT_ROMON_ZAPWAVE");
    g_pemit_zaprain = zParEmitterFind("PAREMIT_DUPLO_STEAM");

    g_parf_default.custom_flags = 0x100;

    // TODO...
}

void zNPCHazard_KillEffects()
{
}

S32 HAZ_ord_sorttest(void* vkey, void* vitem)
{
    NPCHazard* key = (NPCHazard*)vkey;
    NPCHazard* item = (NPCHazard*)vitem;
    if (key->typ_hazard < item->typ_hazard)
    {
        return -1;
    }
    else if (key->typ_hazard > item->typ_hazard)
    {
        return 1;
    }
    else if ((S32)vkey < (S32)vitem)
    {
        return -1;
    }
    else
    {
        return 1;
    }
}

// Close, kind of.
NPCHazard* HAZ_Acquire()
{
    NPCHazard* da_haz = g_hazards;
    for (S32 i = 0; i < 64; i++)
    {
        if (!(da_haz->flg_hazard & 1))
        {
            da_haz->WipeIt();
            da_haz->flg_hazard = 1;
            g_cnt_activehaz++;
            return da_haz;
        }
        da_haz++;
    }
    return NULL;
}

S32 HAZ_AvailablePool()
{
    return 64 - g_cnt_activehaz;
}

void NPCHazard::WipeIt()
{
    this->typ_hazard = NPC_HAZ_UNKNOWN;
    this->flg_hazard = 0;
    xVec3Copy(&this->pos_hazard, &g_O3);
    this->tym_lifespan = _959_Hazard;
    this->tmr_remain = _1041_Hazard;
    this->pam_interp = _958_Hazard;
    this->cb_notify = NULL;
    this->npc_owner = NULL;
    memset(&this->custdata, 0, sizeof(this->custdata));
}

// WIP.
S32 NPCHazard::ConfigHelper(en_npchaz haztype)
{
    S32 result = 1;
    this->typ_hazard = haztype;
    switch (haztype)
    {
    case NPC_HAZ_UNKNOWN:
        result = 0;
        break;
    case NPC_HAZ_EXPLODE:
        // TODO!!!
        break;
    default:
        result = 0;
        break;
    }
    if (!result)
    {
        this->MarkForRecycle();
    }
    return result;
}

void NPCHazard::Reconfigure(en_npchaz haztype)
{
    HAZNotify* noter = this->cb_notify;
    zNPCCommon* npc_old = this->npc_owner;
    xVec3 old_pos;
    xVec3Copy(&old_pos, &this->pos_hazard);
    this->Cleanup();
    this->WipeIt();
    this->flg_hazard = 0x21;
    this->ConfigHelper(haztype);
    this->PosSet(&old_pos);
    this->NotifyCBSet(noter);
    this->SetNPCOwner(npc_old);
    if (this->cb_notify != NULL)
    {
        this->cb_notify->Notify(HAZ_NOTE_RECONFIG, this);
    }
}

void NPCHazard::FreeModel()
{
    if (mdl_hazard != NULL)
    {
        xModelInstanceFree(mdl_hazard);
    }
    mdl_hazard = NULL;
}

void NPCHazard::Discard()
{
    if ((flg_hazard & 1) != 0)
    {
        if (cb_notify != NULL)
        {
            cb_notify->Notify((en_haznote)0, this);
        }

        Cleanup();

        g_cnt_activehaz &= ~((g_cnt_activehaz - 1) >> 31);
    }
}

void NPCHazard::Kill()
{
    if ((flg_hazard & 1) != 0)
    {
        if (cb_notify != NULL)
        {
            cb_notify->Notify(HAZ_NOTE_ABORT, this);
        }
        Discard();
    }
}

void NPCHazard::Start(const xVec3* pos, F32 tym)
{
    if (tym > 0.0f)
    {
        tmr_remain = tym;
    }
    tym_lifespan = tmr_remain;
    if (pos != NULL)
    {
        PosSet(pos);
    }
    flg_hazard |= 0x1a;
}

void NPCHazard::PosSet(const xVec3* pos)
{
    if (pos != NULL)
    {
        xVec3Copy(&this->pos_hazard, pos);
    }
    if (this->mdl_hazard != NULL)
    {
        xVec3Copy((xVec3*)&this->mdl_hazard->Mat->pos, &this->pos_hazard);
    }
}

void NPCHazard::SetAlpha(F32 alpha)
{
    if (this->mdl_hazard == NULL)
    {
        return;
    }
    this->mdl_hazard->Flags |= 0x4000;
    this->mdl_hazard->Alpha = alpha;
}

S32 NPCHazard::ColPlyrSphere(F32 rad)
{
    return this->ColTestSphere(&globals.player.ent.bound, rad);
}

S32 NPCHazard::ColPlyrCyl(F32 rad, F32 hyt)
{
    return this->ColTestCyl(&globals.player.ent.bound, rad, hyt);
}

void NPCHazard::HurtThePlayer()
{
    if (this->npc_owner == NULL)
    {
        zEntPlayer_Damage(NULL, 1);
    }
    else if (zEntPlayer_DamageNPCKnockBack((xBase*)this->npc_owner, 1, &this->pos_hazard))
    {
        this->npc_owner->Vibrate(NPC_VIBE_NORM, _1041_Hazard);
    }
}

void NPCHazard::TypData_RotMatSet(xMat3x3* mat)
{
    xMat3x3* frame = (xMat3x3*)xModelGetFrame(this->mdl_hazard);
    xMat3x3Copy(frame, mat);
    xModelSetFrame(this->mdl_hazard, (xMat4x3*)frame);
}

void NPCHazard::TypData_RotMatApply(xMat3x3* mat)
{
    xMat3x3* frame = (xMat3x3*)xModelGetFrame(this->mdl_hazard);
    xMat3x3Mul(frame, mat, frame);
    xModelSetFrame(this->mdl_hazard, (xMat4x3*)frame);
}

en_hazmodel NPCHazard::PickFunFrag()
{
    S32 choices[8] = {};
    S32 cnt_choice = 0;

    for (S32 i = 0; i < 8; i++)
    {
        S32 idx = g_funfrag_choices[i];
        if (g_hazard_rawModel[idx] != NULL)
        {
            choices[cnt_choice++] = idx;
        }
    }

    return (en_hazmodel)xUtil_choose<S32>(choices, cnt_choice, NULL);
}

void NPCHazard::StagColStat()
{
    this->StagColGeneral(1);
}

void NPCHazard::StagColDyn()
{
    this->StagColGeneral(2);
}

void NPCHazard::StagColNPC()
{
    this->StagColGeneral(4);
}

void NPCHazard::CollideResponse(xSweptSphere* swdata, F32 tym_inFuture)
{
    this->ColResp_Default(swdata, tym_inFuture);
}

void NPCHazard::Upd_Patriot(F32)
{
}

S32 NPCHazard::KickSteamyStinky()
{
    S32 ok;
    NPCHazard* haz = (NPCHazard*)HAZ_Acquire();

    F32 tym_lifeOfChild = 0.25f;

    if (haz == NULL)
    {
        ok = 0;
    }
    else
    {
        if (haz->ConfigHelper(NPC_HAZ_TARTARSTINK) == 0)
        {
            haz->Discard();
            ok = 1;
        }
        else
        {
            haz->Start(&pos_hazard, tmr_remain - tym_lifeOfChild);
            ok = 2;
        }
    }
    return ok;
}

void NPCHazard::TarTarFalumpf()
{
    g_parf_default.custom_flags = 0x100;
    xVec3 pos_emit;

    for (S32 i = 0; i < 16; i++)
    {
        pos_emit.x =
            this->custdata.tartar.rad_cur * (2.0f * (xurand() - 0.5f)) + this->pos_hazard.x;
        pos_emit.y =
            this->custdata.tartar.rad_cur * (2.0f * (xurand() - 0.5f)) + this->pos_hazard.y;
        pos_emit.z =
            this->custdata.tartar.rad_cur * (2.0f * (xurand() - 0.5f)) + this->pos_hazard.z;
        NPAR_EmitTarTarNozzle(&pos_emit, &g_Y3);
    }
}

void NPCHazard::TarTarGunkTrail()
{
    xVec3 pos = pos_hazard;
    NPAR_EmitTarTarTrail(&pos, &g_Y3);
}

void NPCHazard::TarTarSplash(const xVec3* dir_norm)
{
    xVec3 up;
    xVec3 at;
    xVec3 right;

    if (dir_norm != NULL)
    {
        up = *dir_norm;
        NPCC_MakeArbPlane(dir_norm, &at, &right);
    }
    else
    {
        up = *(xVec3*)Up();
        at = *(xVec3*)At();
        right = *(xVec3*)Right();
    }

    xVec3 pos_emit = pos_hazard;
    for (S32 i = 0; i < 16; i++)
    {
        // Using initialization prevents generation of the operator= for the xVec3,
        // So it's on the next line to generate the right instructions.

        // Scheduling meme here but matches otherwise.
        xVec3 vel_emit;
        vel_emit = up;

        F32 direction;
        if (xrand() & 0x800000)
        {
            direction = 1.0f;
        }
        else
        {
            direction = -1.0f;
        }

        vel_emit += at * direction * (0.4f * (2.0f * (xurand() - 0.5f)) + 0.25f);

        if (xrand() & 0x800000)
        {
            direction = 1.0f;
        }
        else
        {
            direction = -1.0f;
        }

        vel_emit += at * direction * (0.4f * (2.0f * (xurand() - 0.5f)) + 0.25f);
        vel_emit.normalize();
        vel_emit *= 15.0f;

        NPAR_EmitTarTarSplash(&pos_emit, &vel_emit);
    }
}

void NPCHazard::TarTarLinger()
{
    HAZBall* ball = &this->custdata.ball;
    xVec3 vel_emit = g_Y3;
    if (--this->cnt_nextemit >= 0)
    {
        return;
    }

    this->cnt_nextemit = 10;

    F32 rad_use = 0.75f * ball->rad_cur;
    xVec3 pos_emit = this->pos_hazard;

    pos_emit += *(xVec3*)At() * (rad_use * (2.0f * (xurand() - 0.5f)));
    pos_emit += *(xVec3*)Right() * (rad_use * (2.0f * (xurand() - 0.5f)));
    pos_emit += *(xVec3*)Up() * 0.1f;

    NPAR_EmitTarTarSpoil(&pos_emit, &vel_emit);
}

void NPCHazard::Upd_ChuckBomb(F32 dt)
{
    HAZTarTar* tartar = &this->custdata.tartar;
    const xParabola* parab = &tartar->parabinfo;

    if (this->tmr_remain < dt)
    {
        if (this->flg_hazard & 0x20000)
        {
            xParabolaEvalPos(parab, &this->pos_hazard, parab->maxTime);
            ReconChuck();
            return;
        }
        else
        {
            ReconChuck();
            return;
        }
    }

    if (this->flg_hazard & 0x8)
    {
        xVec3Sub(&tartar->vel, &tartar->pos_tgt, &this->pos_hazard);
        xVec3SMulBy(&tartar->vel, 1.0f / this->tmr_remain);

        tartar->vel.y = 5.0f * (0.5f * this->tmr_remain) + tartar->vel.y;
    }

    if (this->flg_hazard & 0x8)
    {
        PreCollide();
    }

    F32 tym = this->tym_lifespan - this->tmr_remain;
    xParabolaEvalPos(parab, &this->pos_hazard, tym);
    xParabolaEvalVel(parab, &tartar->vel, tym);

    F32 vel_mag = xVec3Length(&tartar->vel);
    if (vel_mag > 0.0001f)
    {
        xMat3x3 mat_rot;
        xVec3 dir;
        xVec3SMul(&dir, &tartar->vel, -1.0f / vel_mag);
        xMat3x3LookVec(&mat_rot, &dir);

        xMat3x3 mat_spiral;
        xMat3x3Rot(&mat_spiral, &mat_rot.at, 2.0f * PI * (parab->minTime - parab->maxTime));
        xMat3x3Mul(&mat_rot, &mat_rot, &mat_spiral);

        TypData_RotMatSet(&mat_rot);
        TypData_RotMatSet(&mat_rot);
    }

    static S32 moreorless = 0;

    if (--moreorless < 0)
    {
        moreorless = 3;
        DisperseBubWake(tartar->rad_cur, &tartar->vel);
    }

    if (this->flg_hazard & 0x2000)
    {
        if (!(globals.player.DamageTimer > 0.0f) && ColPlyrSphere(tartar->rad_cur))
        {
            HurtThePlayer();
            ReconChuck();
            return;
        }
    }

    StaggeredCollide();
}

void NPCHazard::DisperseBubWake(F32 radius, const xVec3* velocity)
{
    F32 dst_disperse = 0.5f * radius;

    xVec3 pos_disperse;
    pos_disperse = *(xVec3*)Up() * (dst_disperse * (2.0f * (xurand() - 0.5f)));
    pos_disperse += *(xVec3*)Right() * (dst_disperse * (2.0f * (xurand() - 0.5f)));

    xVec3 vel_disperse;
    vel_disperse = *(xVec3*)Up() * (8.0f * (2.0f * (xurand() - 0.5f)));
    vel_disperse += *(xVec3*)Right() * (8.0f * (2.0f * (xurand() - 0.5f)));

    xVec3 dir_backward = *velocity;
    dir_backward.inverse();
    dir_backward.normalize();

    xVec3 pos_emit = this->pos_hazard;
    pos_emit -= dir_backward * (1.5f * radius);

    zFX_SpawnBubbleTrail(&pos_emit, 0x10, &pos_disperse, &vel_disperse);
}

void NPCHazard::ReconChuck()
{
    HAZBall* ball = &this->custdata.ball;

    xVec3 dir_norm = this->custdata.collide.dir_normal;
    xVec3 vel_flight = this->custdata.tartar.vel;

    Reconfigure(NPC_HAZ_CHUCKBLAST);

    if (xVec3Length2(&dir_norm) > 0.0f)
    {
        xVec3Copy((xVec3*)&this->mdl_hazard->Mat->up, &dir_norm);
        NPCC_MakePerp((xVec3*)&this->mdl_hazard->Mat->at, &dir_norm);
        xVec3Cross((xVec3*)&this->mdl_hazard->Mat->right, (xVec3*)&this->mdl_hazard->Mat->up,
                   (xVec3*)&this->mdl_hazard->Mat->at);

        xMat3x3 mat;
        xMat3x3Rot(&mat, &dir_norm, 2 * PI * xurand());
        xMat3x3Mul(xModelGetFrame(this->mdl_hazard), xModelGetFrame(this->mdl_hazard), &mat);

        F32 dot = xVec3Dot(&dir_norm, &g_Y3);

        if (FABS(dot) < 0.86f)
        {
            ball->rad_max *= 0.5f;
            ball->rad_min *= 0.5f;
            ball->rad_cur *= 0.5f;
        }
    }

    Start(NULL, -1.0f);

    if (this->flg_hazard & 0x8 && HAZ_AvailablePool() > 5)
    {
        for (S32 i = 0; i < 7; i++)
        {
            if (KickBlooshBlob(&vel_flight))
            {
                this->flg_hazard |= 0x40;
            }
        }
    }
}

void NPCHazard::Upd_ChuckBlast(F32 dt)
{
    HAZBall* ball = &this->custdata.ball;

    ball->rad_cur = LERP(this->pam_interp, ball->rad_min, ball->rad_max);

    if (this->flg_hazard & 0x2000 && !(globals.player.DamageTimer > 0.75f) &&
        this->pam_interp < 0.25f)
    {
        if (ColPlyrCyl(ball->rad_cur, 0.5f * ball->rad_cur))
        {
            HurtThePlayer();
        }
    }

    if (this->flg_hazard & 0x8)
    {
        xSndPlay3D(xStrHash("Chu_splash"), 0.77f, 0.0f, 0x80, 0x0, &this->pos_hazard, 5.0f, 15.0f,
                   SND_CAT_GAME, 0.0f);
    }

    if (this->flg_hazard & 0x8)
    {
        WaterSplash(NULL);
    }

    WavesOfEvil();
}

void NPCHazard::WaterSplash(const xVec3* dir_norm)
{
    xVec3 pos_emit = this->pos_hazard;

    xVec3 up, at, rt;
    if (dir_norm)
    {
        up = *dir_norm;
        NPCC_MakePerp(&at, dir_norm);
        xVec3Cross(&rt, &up, &at);
    }
    else
    {
        up = *(xVec3*)Up();
        at = *(xVec3*)At();
        rt = *(xVec3*)Right();
    }

    for (S32 i = 0; i < 8; i++)
    {
        xVec3 vel_emit;
        vel_emit = up * (0.5f * xurand() + 1.5f);

        F32 direction;
        if (xrand() & 0x800000)
        {
            direction = 1.0f;
        }
        else
        {
            direction = -1.0f;
        }

        vel_emit += at * direction * (0.5f * (2.0f * (xurand() - 0.5f)) + 1.0f);

        if (xrand() & 0x800000)
        {
            direction = 1.0f;
        }
        else
        {
            direction = -1.0f;
        }

        vel_emit += rt * direction * (0.5f * (2.0f * (xurand() - 0.5f)) + 1.0f);
        vel_emit.normalize();
        vel_emit *= 10.0f;

        NPAR_EmitH2ODrips(&pos_emit, &vel_emit);
    }

    for (S32 i = 0; i < 8; i++)
    {
        xVec3 vel_emit;
        xurand();
        vel_emit = up * 1.0f;

        F32 direction;
        if (xrand() & 0x800000)
        {
            direction = 1.0f;
        }
        else
        {
            direction = -1.0f;
        }

        vel_emit += at * direction * (0.75f * (2.0f * (xurand() - 0.5f)) + 0.75f);

        if (xrand() & 0x800000)
        {
            direction = 1.0f;
        }
        else
        {
            direction = -1.0f;
        }

        vel_emit += rt * direction * (0.75f * (2.0f * (xurand() - 0.5f)) + 0.75f);
        vel_emit.normalize();
        vel_emit *= 7.0f;

        NPAR_EmitH2ODrops(&pos_emit, &vel_emit);
    }
}

void NPCHazard::WavesOfEvil()
{
    F32 rad = this->custdata.collide.rad_cur;

    for (S32 i = 0; i < 8; i++)
    {
        xVec3 pos_emit;
        xVec3 vel_emit;

        pos_emit = *(xVec3*)At() * (2.0f * (xurand() - 0.5f));
        pos_emit += *(xVec3*)Right() * (2.0f * (xurand() - 0.5f));
        pos_emit.normalize();
        pos_emit *= rad;

        pos_emit += *(xVec3*)Up() * 0.2f;
        pos_emit += this->pos_hazard;

        vel_emit = *(xVec3*)Up();
        vel_emit *= 5.5f;

        NPAR_EmitH2OSpray(&pos_emit, &vel_emit);
    }
}

S32 NPCHazard::KickBlooshBlob(const xVec3* vel_flight)
{
    NPCHazard* haz = HAZ_Acquire();
    if (!haz)
    {
        return 0;
    }

    if (!haz->ConfigHelper(NPC_HAZ_CHUCKBLOOSH))
    {
        haz->Discard();
        return 1;
    }

    haz->SetNPCOwner(this->npc_owner);

    HAZTarTar* tartar = &haz->custdata.tartar;
    tartar->vel = *(xVec3*)this->Up() * (5.0f * xurand() + 5.0f);

    F32 spd_factor = 3.5f * xurand() + 2.5f;
    tartar->vel += *(xVec3*)this->At() * ((2.0f * (xurand() - 0.5f)) * spd_factor);

    spd_factor = 3.5f * xurand() + 2.5f;
    tartar->vel += *(xVec3*)this->Right() * ((2.0f * (xurand() - 0.5f)) * spd_factor);

    if (xVec3Dot(&g_Y3, (xVec3*)this->Up()) > 0.86f)
    {
        xVec3 vel_drift = { 0.0f, 0.0f, 0.0f };
        vel_drift.x = vel_flight->x;
        vel_drift.z = vel_flight->z;

        F32 drift_mag = xVec3Length(&vel_drift);
        if (drift_mag > 0.5f)
        {
            F32 mag_factor = (2.5f < 0.25f * drift_mag ? 2.5f : 0.25f * drift_mag) / drift_mag;
            xVec3 vel_push = vel_drift * mag_factor;
            tartar->vel += vel_push;
        }
    }

    xVec3 pos_emit = this->pos_hazard;
    pos_emit += *(xVec3*)this->Up() * 0.35f;

    haz->Start(&pos_emit, -1.0f);

    return 2;
}

void NPCHazard::Upd_ChuckBloosh(F32 dt)
{
    HAZTarTar* tartar = &this->custdata.tartar;
    xParabola* parab = &tartar->parabinfo;

    F32 rat_quad = SQ(this->pam_interp) / SQ(0.15f);
    if (rat_quad <= 0.15f)
    {
        tartar->rad_cur = LERP(rat_quad, tartar->rad_min, tartar->rad_max);
    }

    if (this->flg_hazard & 0x8)
    {
        PreCollide();
    }

    F32 dst_behind =
        tym_lifespan < tym_lifespan - tmr_remain ? tym_lifespan : tym_lifespan - tmr_remain;
    xParabolaEvalPos(parab, &this->pos_hazard, dst_behind);
    xParabolaEvalVel(parab, &tartar->vel, dst_behind);

    OrientToDir(&tartar->vel, 0x0);

    if (--this->cnt_nextemit >= 0)
    {
        return;
    }

    this->cnt_nextemit = 5;

    xVec3 pos_emit = this->pos_hazard;
    pos_emit -= tartar->vel * (0.5f * tartar->rad_cur);
    NPAR_EmitH2OTrail(&pos_emit);
}

void NPCHazard::Upd_BoneFlight(F32 dt)
{
    HAZTarTar* tartar = &this->custdata.tartar;
    xParabola* parab = &tartar->parabinfo;

    if (this->tmr_remain < dt)
    {
        if (this->flg_hazard & 0x20000)
        {
            xParabolaEvalPos(parab, &this->pos_hazard, parab->maxTime);
            if (!(this->flg_hazard & 0x40000))
            {
                ReconArfBone();
                return;
            }
            else
            {
                MarkForRecycle();
                return;
            }
        }
        else
        {
            MarkForRecycle();
            return;
        }
    }

    if (this->flg_hazard & 0x8)
    {
        xVec3Sub(&tartar->vel, &tartar->pos_tgt, &this->pos_hazard);
        xVec3SMulBy(&tartar->vel, 1.0f / this->tmr_remain);

        tartar->vel.y += 0.5f * this->tmr_remain * 0.5f;
    }

    if (this->flg_hazard & 0x8)
    {
        PreCollide();
    }

    F32 tym = tym_lifespan - tmr_remain;
    xParabolaEvalPos(parab, &this->pos_hazard, tym);
    xParabolaEvalVel(parab, &tartar->vel, tym);

    static S32 moreorless = 0;
    if (--moreorless < 0)
    {
        moreorless = 3;
        zFX_SpawnBubbleTrail(&this->pos_hazard, 0x1);
    }

    if (this->flg_hazard & 0x2000)
    {
        if (!(globals.player.DamageTimer > 0.0f) && ColPlyrSphere(tartar->rad_cur))
        {
            HurtThePlayer();
            MarkForRecycle();
            return;
        }
    }

    StaggeredCollide();
}

void NPCHazard::ReconArfBone()
{
    Reconfigure(NPC_HAZ_ARFBONEBLAST);
    Start(NULL, -1.0f);
}

void NPCHazard::Upd_BoneBlast(F32 dt)
{
    xVec3 pos_emit = { 0.0f, 0.0f, 0.0f };
    HAZBall* ball = &this->custdata.ball;

    ball->rad_cur = LERP(this->pam_interp, ball->rad_min, ball->rad_max);

    if (this->flg_hazard & 0x2000 && !(globals.player.DamageTimer > 0.0f) &&
        ColPlyrSphere(ball->rad_cur))
    {
        HurtThePlayer();
    }

    g_parf_default.custom_flags = 0x100;
    xVec3Copy(&pos_emit, &this->pos_hazard);
    xVec3Copy(&g_parf_default.pos, &pos_emit);

    xParEmitterEmitCustom(g_pemit_default, dt, &g_parf_default);
}

void NPCHazard::Upd_OilBubble(F32 dt)
{
    HAZTarTar* tartar = &this->custdata.tartar;
    xParabola* parab = &tartar->parabinfo;

    if (this->tmr_remain < 0.0f)
    {
        if (this->flg_hazard & 0x20000)
        {
            xParabolaEvalPos(parab, &this->pos_hazard, parab->maxTime);
            if (xVec3Length2(&tartar->dir_normal) > 0.1f)
            {
                OilSplash(&tartar->dir_normal);
            }

            if (!(flg_hazard & 0x40000))
            {
                ReconSlickOil();
                return;
            }
            else
            {
                MarkForRecycle();
                return;
            }
        }
        else
        {
            xVec3 whence;
            xParabolaEvalVel(parab, &whence, parab->maxTime);
            xVec3Inv(&whence, &whence);

            F32 mag = xVec3Length(&whence);
            if (mag > 0.00001f)
            {
                whence /= mag;
                OilSplash(&whence);
            }
            else
            {
                OilSplash((xVec3*)Up());
            }

            MarkForRecycle();
            return;
        }
    }
    else
    {
        if (this->flg_hazard & 0x8)
        {
            xVec3Sub(&tartar->vel, &tartar->pos_tgt, &this->pos_hazard);
            xVec3SMulBy(&tartar->vel, 1.0f / this->tmr_remain);

            tartar->vel.y += 0.2f * (0.5f * this->tmr_remain);
        }

        if (this->flg_hazard & 0x8)
        {
            PreCollide();
        }

        F32 tym = this->tym_lifespan - this->tmr_remain;
        xParabolaEvalPos(parab, &this->pos_hazard, tym);
        xParabolaEvalVel(parab, &tartar->vel, tym);

        F32 mag = xVec3Length(&tartar->vel);
        if (mag > 0.00001f)
        {
            xMat3x3 mat_rot;
            xVec3 dir;

            xVec3SMul(&dir, &tartar->vel, -1.0f / mag);
            xMat3x3LookVec(&mat_rot, &dir);
            TypData_RotMatSet(&mat_rot);
        }

        if (this->flg_hazard & 0x8)
        {
            tartar->streakID = NPCC_StreakCreate(NPC_STRK_OILBUBBLE);
        }

        if (tartar->streakID != 0xDEAD)
        {
            StreakUpdate(tartar->streakID, 0.35f);
        }

        static S32 moreorless = 0;
        if (--moreorless < 0)
        {
            moreorless = 3;

            F32 rad = tartar->rad_cur;
            xVec3 pos = this->pos_hazard;

            xVec3AddScaled(&pos, (xVec3*)Up(), rad * (2.0f * (xurand() - 0.5f)));
            xVec3AddScaled(&pos, (xVec3*)Right(), rad * (2.0f * (xurand() - 0.5f)));

            NPAR_EmitOilTrailz(&pos);
        }

        if (this->flg_hazard & 0x2000 && !(globals.player.DamageTimer > 0.0f) &&
            ColPlyrSphere(0.75f * tartar->rad_cur))
        {
            HurtThePlayer();
            NPCC_Slick_MakePlayerSlip(this->npc_owner);

            xVec3 whence;
            xParabolaEvalVel(parab, &whence, parab->maxTime);
            xVec3Inv(&whence, &whence);
            OilSplash(&whence);

            MarkForRecycle();
            return;
        }

        StaggeredCollide();
    }
}

void NPCHazard::ReconSlickOil()
{
    HAZBall* ball = &this->custdata.ball;
    xVec3 dir_norm = this->custdata.collide.dir_normal;

    Reconfigure(NPC_HAZ_OILSLICK);

    if (xVec3Length2(&dir_norm) > 0.0f)
    {
        xVec3Copy((xVec3*)&this->mdl_hazard->Mat->up, &dir_norm);
        NPCC_MakePerp((xVec3*)&this->mdl_hazard->Mat->at, &dir_norm);
        xVec3Cross((xVec3*)&this->mdl_hazard->Mat->right, (xVec3*)&this->mdl_hazard->Mat->up, (xVec3*)&this->mdl_hazard->Mat->at);
    }

    xMat3x3 mat;
    xMat3x3Rot(&mat, &dir_norm, 2 * PI * xurand());
    xMat3x3Mul(xModelGetFrame(this->mdl_hazard), xModelGetFrame(this->mdl_hazard), &mat);
    F32 dot = xVec3Dot(&dir_norm, &g_Y3);

    if (FABS(dot) < 0.86f)
    {
        ball->rad_max *= 0.5f;
        ball->rad_min *= 0.5f;
        ball->rad_cur *= 0.5f;
    }

    Start(NULL, -1.0f);
}

void NPCHazard::OilSplash(const xVec3* dir_norm)
{
    xVec3 up;
    xVec3 at;
    xVec3 rt;
    
    if (dir_norm)
    {
        up = *dir_norm;
        NPCC_MakeArbPlane(dir_norm, &at, &rt);
    }
    else
    {
        up = *(xVec3*)Up();
        at = *(xVec3*)At();
        rt = *(xVec3*)Right();
    }

    xVec3 pos_emit = this->pos_hazard;
    for (S32 i = 0; i < 16; i++)
    {
        xVec3 vel_emit;
        vel_emit = up;

        F32 direction;
        if (xrand() & 0x800000)
        {
            direction = 1.0f;
        }
        else
        {
            direction = -1.0f;
        }

        vel_emit += at * direction * (0.4f * (2.0f * (xurand() - 0.5f)) + 0.25f);

        if (xrand() & 0x800000)
        {
            direction = 1.0f;
        }
        else
        {
            direction = -1.0f;
        }

        vel_emit += rt * direction * (0.4f * (2.0f * (xurand() - 0.5f)) + 0.25f);
        vel_emit.normalize();
        vel_emit *= 15.0f;

        NPAR_EmitOilSplash(&pos_emit, &vel_emit);
    }
}

void NPCHazard::Upd_OilOoze(F32 dt)
{
    static F32 seg_pam[2] = { 0.15f, 0.75f };
    HAZBall* ball = &this->custdata.ball;
    
    if (this->pam_interp <= seg_pam[0])
    {
        ball->rad_cur = (ball->rad_max - ball->rad_min) * EASE(this->pam_interp / seg_pam[0]);
        ball->rad_cur += ball->rad_min;
    }
    else if (this->pam_interp >= seg_pam[1])
    {
        ball->rad_cur = (ball->rad_max - ball->rad_min) * EASE(1.0f - ((this->pam_interp - seg_pam[1]) / (1.0f - seg_pam[1])));
        ball->rad_cur += ball->rad_min;
    }
    else
    {
        ball->rad_cur = ball->rad_max;
    }

    if (this->flg_hazard & 0x8 && HAZ_AvailablePool() > 5)
    {
        if (KickOilBurst())
        {
            this->flg_hazard |= 0x40;
        }
    }

    if (this->flg_hazard & 0x8)
    {
        this->tmr_nextglob = 1.5f * (0.25f * (xurand() - 0.5f)) + 1.5f;
    }

    if (this->tmr_nextglob < 0.0f && this->tmr_remain > 1.0f)
    {
        if (KickOilGlobby())
        {
            this->flg_hazard |= 0x40;
        }

        this->tmr_nextglob = 1.5f * (0.25f * (xurand() - 0.5f)) + 1.5f;
    }

    this->tmr_nextglob = -1.0f > this->tmr_nextglob - dt ? -1.0f : this->tmr_nextglob - dt;

    if (this->flg_hazard & 0x2000 && !(globals.player.DamageTimer > 0.0f) && ColPlyrSphere(ball->rad_cur))
    {
        NPCC_Slick_MakePlayerSlip(this->npc_owner);
    }

    if (--this->cnt_nextemit < 0)
    {
        this->cnt_nextemit = 10;

        F32 rad_use = 0.75f * ball->rad_cur;
        xVec3 pos_emit = this->pos_hazard;
        pos_emit += *(xVec3*)this->At() * (2.0f * (xurand() - 0.5f) * rad_use);
        pos_emit += *(xVec3*)this->Right() * (2.0f * (xurand() - 0.5f) * rad_use);
        pos_emit += *(xVec3*)this->Up() * 0.1f;

        NPAR_EmitOilVapors(&pos_emit);
    }
}

S32 NPCHazard::KickOilBurst()
{
    NPCHazard* haz = HAZ_Acquire();
    
    S32 ok;
    if (haz == NULL)
    {
        ok = 0;
    }
    else if (haz->ConfigHelper(NPC_HAZ_OILBURST) == 0)
    {
        haz->Discard();
        ok = 1;
    }
    else
    {
        haz->SetNPCOwner(this->npc_owner);

        xVec3 pos = this->pos_hazard;
        pos += *(xVec3*)Up() * 0.4f;

        haz->Start(&pos, -1.0f);

        ok = 2;
    }

    return ok;
}

S32 NPCHazard::KickOilGlobby()
{
    HAZBall* ball = &this->custdata.ball;
    NPCHazard* haz = HAZ_Acquire();
    
    S32 ok;
    if (haz == NULL)
    {
        ok = 0;
    }
    else if (haz->ConfigHelper(NPC_HAZ_OILGLOB) == 0)
    {
        haz->Discard();
        ok = 1;
    }
    else
    {
        haz->SetNPCOwner(this->npc_owner);

        xVec3 pos = this->pos_hazard;
        F32 rad = 0.5f * ball->rad_cur;

        pos += *(xVec3*)At() * (2.0f * (xurand() - 0.5f) * rad);
        pos += *(xVec3*)Right() * (2.0f * (xurand() - 0.5f) * rad);

        haz->Start(&pos, 2.0f < this->tmr_remain ? 2.0f : this->tmr_remain);

        ok = 2;
    }

    return ok;
}

void NPCHazard::Upd_OilBurst(F32 dt)
{
    HAZBall* ball = &this->custdata.ball;

    ball->rad_cur = LERP(this->pam_interp, ball->rad_min, ball->rad_max);

    if (this->flg_hazard & 0x2000 && !(globals.player.DamageTimer > 0.0f))
    {
        if (ColPlyrSphere(0.75f * ball->rad_cur))
        {
            HurtThePlayer();
        }
    }

    if (this->flg_hazard & 0x8)
    {
        xSndPlay3D(xStrHash("Tar_saucehit"), 0.77f, 0.0f, 0x80, 0x0, &this->pos_hazard, 3.0f, 15.0f,
                   SND_CAT_GAME, 0.0f);
    }
}

void NPCHazard::Upd_OilGlob(F32 dt)
{
    HAZShroom* shroom = &this->custdata.shroom;

    F32 rat_quad = SQ(this->pam_interp) / SQ(0.25f);
    if (rat_quad <= 0.25f)
    {
        shroom->rad_cur = LERP(rat_quad, shroom->rad_min, shroom->rad_max);
    }

    this->pos_hazard += shroom->vel_rise * dt;
    shroom->vel_rise += shroom->acc_rise * dt;

    if (this->flg_hazard & 0x2000 && !(globals.player.DamageTimer > 0.0f) &&
            ColPlyrSphere(shroom->rad_cur))
    {
        NPCC_Slick_MakePlayerSlip(this->npc_owner);
    }

    if (--this->cnt_nextemit < 0)
    {
        this->cnt_nextemit = 10;

        F32 rad_use = 0.75f * shroom->rad_cur;
        xVec3 pos_emit = this->pos_hazard;
        pos_emit += *(xVec3*)this->At() * (2.0f * (xurand() - 0.5f) * rad_use);
        pos_emit += *(xVec3*)this->Right() * (2.0f * (xurand() - 0.5f) * rad_use);
        pos_emit += *(xVec3*)this->Up() * 0.1f;

        NPAR_EmitOilVapors(&pos_emit);
    }
}

void UVAModelInfo::Hemorrage()
{
    model = 0;
    uv = 0;
}

// Need to figure out what is wrong with the final return statement, and the b and blr swaps.
S32 UVAModelInfo::GetUV(RwTexCoords*& coords, S32& numVertices, RpAtomic* model)
{
    coords = NULL;
    numVertices = 0;
    RpGeometry* geom = model->geometry;
    if (geom == NULL)
    {
        return 0;
    }
    numVertices = geom->numVertices;
    if (numVertices <= 0)
    {
        return 0;
    }

    coords = geom->texCoords[0];

    return coords != NULL;
}

F32 xVec2Length2(const xVec2* v)
{
    return xVec2Dot(v, v);
}

void UVAModelInfo::SetColor(iColor_tag color)
{
    RpGeometry* geo = model->geometry;

    RwRGBA col;
    col.red = color.r;
    col.green = color.g;
    col.blue = color.b;
    col.alpha = color.a;

    int numMats = model->geometry->matList.numMaterials;

    for (int i = 0; i < numMats; i++)
    {
        geo->matList.materials[i]->color = col;
    }
}
