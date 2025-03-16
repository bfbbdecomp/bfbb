#include "zNPCHazard.h"

#include <types.h>
#include <string.h>

#include "zGlobals.h"
#include "zNPCTypeCommon.h"
#include "zNPCTypes.h"

extern U32 g_hash_hazanim[3];
extern char* g_strz_hazanim[3];
extern NPCHazard g_hazards[64];
extern UVAModelInfo g_haz_uvAnimInfo[30];
extern S32 g_cnt_activehaz;
extern NPCHazard* g_haz_uvAnimQue[27];
extern RpAtomic* g_hazard_rawModel[30];
extern xAnimTable* g_haz_animTable[30];
extern xVec3 g_O3;
extern F32 _958_Hazard; // 0.0f
extern F32 _959_Hazard; // 1.0f
extern F32 _1041_Hazard; // -1.0f

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
    return (-(S32)coords->u | (U32)coords->u) >> 0x1f;
}

RwV3d* NPCHazard::At() const
{
    return &this->mdl_hazard->Mat->at;
}

RwV3d* NPCHazard::Right() const
{
    return &this->mdl_hazard->Mat->right;
}

RwV3d* NPCHazard::Up() const
{
    return &this->mdl_hazard->Mat->up;
}

NPCHazard::NPCHazard()
{
}

NPCHazard::NPCHazard(en_npchaz haztype)
{
    this->typ_hazard = haztype;
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
