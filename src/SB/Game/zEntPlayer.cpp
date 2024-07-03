#include <types.h>
#include <stdio.h>
#include <string.h>

#include "iSnd.h"

#include "xEnt.h"
#include "xEntBoulder.h"
#include "xEvent.h"
#include "xSnd.h"
#include "xVec3.h"
#include "xMemMgr.h"

#include "zBase.h"
#include "zCamera.h"
#include "zEntPlayer.h"
#include "zEntTeleportBox.h"
#include "zGame.h"
#include "zGameExtras.h"
#include "zNPCTypeTiki.h"
#include "zGlobals.h"
#include "zGoo.h"
#include "zLasso.h"
#include "zNPCTypeTiki.h"
#include "zNPCMessenger.h"
#include "zMusic.h"
#include "zThrown.h"

extern zGlobals globals;
extern uint32 sCurrentStreamSndID;

extern zPlayerLassoInfo* sLassoInfo;

extern uint32 sSpatulaGrabbed;
extern uint32 sShouldBubbleBowl;
extern float32 sBubbleBowlLastWindupTime;
extern float32 sBubbleBowlMultiplier;

extern zPlayerLassoInfo* sLassoInfo;
extern zLasso* sLasso;

extern int32 in_goo;
extern int32 sPlayerDiedLastTime;
extern int32 player_hit;
extern int32 player_hit_anim;
extern uint32 player_dead_anim;

extern float32 lbl_803CD5A0; // 0.0
extern float32 lbl_803CD5F0; // 0.1
extern float32 lbl_803CD62C; // 0.2
extern float32 lbl_803CD588; // 0.5
extern float32 lbl_803CD830; // 30.0
extern float32 lbl_803CD638; // 10.0

// This needs to be const
// because the address is used in the context of a const char pointer
// when being passed to certain functions.
extern const int8 zEntPlayer_Strings[];

// Multidimensional sound arrays for each player type
extern uint32 sPlayerSnd[ePlayer_MAXTYPES][ePlayerSnd_Total];
extern uint32 sPlayerSndID[ePlayer_MAXTYPES][ePlayerSnd_Total];

void zEntPlayerKillCarry()
{
    if (!globals.player.carry.grabbed)
    {
        return;
    }

    if (!zThrown_KillFruit(globals.player.carry.grabbed))
    {
        if (globals.player.carry.grabbed->baseType == eBaseTypeDestructObj)
        {
            zEntEvent(globals.player.carry.grabbed, eEventDestroy);
        }
        else if (globals.player.carry.grabbed->baseType == eBaseTypeNPC &&
                 (((xNPCBasic*)globals.player.carry.grabbed)->SelfType() & 0xffffff00) == 'NTT\0')
        {
            zNPCTiki* tiki = (zNPCTiki*)globals.player.carry.grabbed;
            tiki->Damage(DMGTYP_THUNDER_TIKI_EXPLOSION, NULL, NULL);
        }
        else if (globals.player.carry.grabbed->baseType == eBaseTypeNPC)
        {
            zThrown_LaunchDir(globals.player.carry.grabbed,
                              (xVec3*)&globals.player.ent.model->Mat->at);
        }
    }
    globals.player.carry.grabbed = NULL;
}

void test(int32 a)
{
}

void zEntPlayerControlOn(zControlOwner owner)
{
    uint32 originalValue = globals.player.ControlOff;
    globals.player.ControlOff &= ~owner;

    if (originalValue != globals.player.ControlOff)
    {
        if (globals.player.ControlOff & 0x202)
        {
            xSndSelectListenerMode(SND_LISTENER_MODE_CAMERA);
        }
        else
        {
            xSndSelectListenerMode(SND_LISTENER_MODE_PLAYER);
        }
    }
}

// 83%, but floating point scheduling preventing match
void zEntPlayerControlOff(zControlOwner owner)
{
    uint32 originalValue = globals.player.ControlOff;

    globals.player.ControlOff |= owner;
    globals.player.ControlOffTimer = 1.0f;

    if (originalValue != globals.player.ControlOff)
    {
        if (globals.player.ControlOff & 0x202)
        {
            xSndSelectListenerMode(SND_LISTENER_MODE_CAMERA);
        }
        else
        {
            xSndSelectListenerMode(SND_LISTENER_MODE_PLAYER);
        }
    }

    zEntPlayerKillCarry();
}

void TellPlayerVillainIsNear(float32 visnear)
{
    globals.player.BadGuyNearTimer = visnear;
}

void SetPlayerKillsVillainTimer(float32 time)
{
    globals.player.VictoryTimer = time;
}

void PlayerArrive(xEnt* ent, xBase* base)
{
    globals.player.AutoMoveSpeed = 0;

    zEntEvent(base, ent, 0x1f);

    if (base->baseType == 0xd)
    {
        zEntEvent(ent, base, 0x1f);
    }
}

void HealthReset()
{
    globals.player.Health = globals.player.MaxHealth;
}

uint32 BubbleBounceCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    if (globals.player.cheat_mode)
    {
        return false;
    }

    return (!globals.player.ControlOff && (globals.pad0->pressed & 0x20000));
}

uint32 BBounceAttackCB(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    globals.player.ent.frame->vel.y = -globals.player.g.BBounceSpeed;
    return 0;
}

uint32 BBounceStrikeCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    return (globals.player.JumpState == 0 || globals.player.JumpState == 1);
}

uint32 BbowlCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    if (globals.player.cheat_mode)
    {
        return false;
    }

    if (zEntTeleportBox_playerIn())
    {
        return false;
    }

    return (!globals.player.ControlOff && ((globals.pad0->pressed & 0x20000)) &&
            globals.player.g.PowerUp[0]);
}

uint32 BbowlWindupEndCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    if (anim->Time < sBubbleBowlLastWindupTime && sShouldBubbleBowl)
    {
        return true;
    }
    sBubbleBowlLastWindupTime = anim->Time;
    return false;
}

uint32 BbowlTossEndCB(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    xEntBoulder_BubbleBowl(sBubbleBowlMultiplier);
    globals.player.IsBubbleBowling = false;
    zEntPlayer_SNDStop(ePlayerSnd_BowlWindup);
    zEntPlayer_SNDPlay(ePlayerSnd_BowlRelease, lbl_803CD5A0);
    return false;
}

uint32 BbowlRecoverWalkCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    return (anim->Time > globals.player.g.BubbleBowlMinRecoverTime &&
            WalkCheck(tran, anim, param_3));
}

uint32 BbowlRecoverRunCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    return (anim->Time > globals.player.g.BubbleBowlMinRecoverTime &&
            RunCheck(tran, anim, param_3));
}

uint32 BbowlRecoverRunScaredCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    return (anim->Time > globals.player.g.BubbleBowlMinRecoverTime &&
            RunScaredCheck(tran, anim, param_3));
}

uint32 BbowlRecoverRunVictoryCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    return (anim->Time > globals.player.g.BubbleBowlMinRecoverTime &&
            RunVictoryCheck(tran, anim, param_3));
}

uint32 BbowlRecoverRunOutOfWorldCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    return (anim->Time > globals.player.g.BubbleBowlMinRecoverTime &&
            RunOutOfWorldCheck(tran, anim, param_3));
}

uint32 BbowlRecoverRunSlipCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    return (anim->Time > globals.player.g.BubbleBowlMinRecoverTime &&
            RunSlipCheck(tran, anim, param_3));
}

uint32 GooCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    if (globals.player.ControlOff & 0x8000)
    {
        return false;
    }

    if (globals.player.cheat_mode)
    {
        return false;
    }

    return in_goo;
}

uint32 GooDeathCB(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    // Decompiled, but instructions are out of order?
    globals.player.Health = 0;
    globals.player.DamageTimer = lbl_803CD638; // 10.0
    zGooStopTide();
    sPlayerDiedLastTime = 1;
    zEntPlayerControlOff(CONTROL_OWNER_GLOBAL);
    return false;
}

uint32 Hit01Check(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    return (player_hit && player_hit_anim == 1);
}

uint32 Hit01CB(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    player_hit = 0;
    player_hit_anim = 2;
    return false;
}

uint32 Hit02Check(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    return (player_hit && player_hit_anim == 2);
}

uint32 Hit02CB(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    player_hit = 0;
    player_hit_anim = 3;
    return false;
}

uint32 Hit03Check(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    return (player_hit && player_hit_anim == 3);
}

uint32 Hit03CB(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    player_hit = 0;
    player_hit_anim = 4;
    return false;
}

uint32 Hit04Check(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    return (player_hit && player_hit_anim == 4);
}

uint32 Hit04CB(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    player_hit = 0;
    player_hit_anim = 5;
    return false;
}

uint32 Hit05Check(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    return (player_hit && player_hit_anim == 5);
}

uint32 Hit05CB(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    player_hit = 0;
    player_hit_anim = 1;
    return false;
}

uint32 Defeated01Check(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    // it seems like this is a useless but necessary function call
    zGameExtras_CheatFlags();
    return globals.player.Health == 0 && player_dead_anim % tran->UserFlags == 0;
}

uint32 Defeated02Check(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    zGameExtras_CheatFlags();
    return globals.player.Health == 0 && player_dead_anim % tran->UserFlags + 1 == 2;
}

uint32 Defeated03Check(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    zGameExtras_CheatFlags();
    return globals.player.Health == 0 && player_dead_anim % tran->UserFlags + 1 == 3;
}

uint32 Defeated04Check(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    zGameExtras_CheatFlags();
    return globals.player.Health == 0 && player_dead_anim % tran->UserFlags + 1 == 4;
}

uint32 Defeated05Check(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    zGameExtras_CheatFlags();
    return globals.player.Health == 0 && player_dead_anim % tran->UserFlags + 1 == 5;
}

uint32 SpatulaGrabCheck(xAnimTransition*, xAnimSingle*, void*)
{
    // much different than PS2 version of this function
    return sSpatulaGrabbed;
}

int32 zEntPlayer_InBossBattle()
{
    return (globals.sceneCur->sceneID == 'B101' || // Robo Sandy
            globals.sceneCur->sceneID == 'B201' || // Robo Patrick
            globals.sceneCur->sceneID == 'B302' || // Robo Spongebob
            globals.sceneCur->sceneID == 'B303' // Brain Fight
    );
}

uint32 LCopterCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return (globals.player.JumpState && sLassoInfo->canCopter && !globals.player.ControlOff &&
            (globals.pad0->pressed & 0x10000));
}

uint32 WallJumpFlightLandCallback(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    globals.player.WallJumpState = k_WALLJUMP_LAND;
    return 0;
}

uint32 WallJumpLandFlightCallback(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    globals.player.WallJumpState = k_WALLJUMP_FLIGHT;
    return 0;
}

uint32 JumpCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    return (globals.player.CanJump && !globals.player.ControlOff &&
            (globals.pad0->pressed & 0x10000));
}

uint32 BounceStopLCopterCB(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    StopLCopterCB(tran, anim, param_3);
    BounceCB(tran, anim, param_3);
    return 0;
}

uint32 LassoStartCheck(xAnimTransition*, xAnimSingle*, void*)
{
    xNPCBasic* npc = (xNPCBasic*)sLassoInfo->target;

    if (npc != NULL)
    {
        if (npc->baseType == 0x2b)
        {
            if ((npc->SelfType() & 0xffffff00) != 0x4e545400)
            {
                return ((zNPCCommon*)sLassoInfo->target)->GimmeLassInfo() != NULL;
            }
        }

        return 1;
    }

    return 0;
}

uint32 LassoLostTargetCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return !sLassoInfo->target;
}

uint32 LassoStraightToDestroyCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return sLasso->flags & (1 << 11);
}

uint32 LassoAboutToDestroyCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return 0;
}

uint32 LassoDestroyCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return sLasso->flags & (1 << 11);
}

uint32 LassoReyankCheck(xAnimTransition*, xAnimSingle*, void*)
{
    return 0;
}

bool zEntPlayer_IsSneaking()
{
    if (gCurrentPlayer != eCurrentPlayerSpongeBob)
    {
        return false;
    }

    uint32 flags = globals.player.ent.model->Anim->Single->State->UserFlags;
    if ((flags & 1) != 0 || (flags & 0x1e) == 2 || (flags & 0x1e) == 4)
    {
        return true;
    }
    else
    {
        return false;
    }
}

#if 0
// The cmpw instruction used in `if ((int32)non_choices[j] - 1 == i)` has its
// operands in the wrong order.
int32 load_talk_filter(uint8* filter, xModelAssetParam* params, uint32 params_size, int32 max_size)
{
    int32 found = 0;
    float32* non_choices = (float32*)xMemPushTemp(max_size * 4);
    int32 size = zParamGetFloatList(params, params_size, zEntPlayer_Strings + 0x29ec, max_size,
                                    non_choices, non_choices);

    for (int32 i = 0; i < max_size; i++)
    {
        bool skip = false;
        for (int32 j = 0; j < size; j++)
        {
            if ((int32)non_choices[j] - 1 == i)
            {
                skip = true;
                break;
            }
        }

        if (!skip)
        {
            filter[found++] = i;
        }
    }

    if (found <= 0)
    {
        found = 1;
        filter[0] = 0;
    }
    xMemPopTemp(non_choices);
    return found;
}
#endif

uint32 count_talk_anims(xAnimTable* anims)
{
    xAnimFile* firstData = anims->StateList->Data;
    int8 talkAnimName[20];
    int32 talkAnimCount = 0;

    sprintf(talkAnimName, (zEntPlayer_Strings + 0x29ff), 1);

    // having this here is necessary for some reason
    // The beginning address of the strings are stored in a register
    // which is later added to in the loop itself
    // Don't know if this will break when we substitute strings
    const char* strings = zEntPlayer_Strings;

    for (xAnimState* state = anims->StateList; state != NULL; state = state->Next)
    {
        if (stricmp(state->Name, talkAnimName) == 0)
        {
            if (state->Data == firstData || ++talkAnimCount >= 4)
            {
                break;
            }
            sprintf(talkAnimName, (strings + 0x29ff), talkAnimCount + 1);
        }
    }

    return talkAnimCount;
}

void load_player_ini(zPlayerSettings& ps, xModelInstance& model, xModelAssetParam* modelass,
                     uint32 params_size)
{
    uint32 count;
    count = count_talk_anims(model.Anim->Table);
    ps.talk_anims = count;
    count = load_talk_filter(ps.talk_filter, modelass, params_size, ps.talk_anims);
    ps.talk_filter_size = count;
}

void load_player_ini()
{
    xModelAssetParam* modelass;
    uint32 size[3];

    if (globals.player.model_spongebob != NULL)
    {
        modelass = zEntGetModelParams(globals.player.ent.asset->modelInfoID, &size[2]);
        load_player_ini(globals.player.sb, *globals.player.model_spongebob, modelass, size[2]);
    }

    if (globals.player.model_patrick != NULL)
    {
        // TODO: figure out hardcoded int
        modelass = zEntGetModelParams(0x791025ac, &size[1]);
        load_player_ini(globals.player.patrick, *globals.player.model_patrick, modelass, size[1]);
    }

    if (globals.player.model_sandy != NULL)
    {
        // TODO: figure out hardcoded int
        modelass = zEntGetModelParams(0xc0e34b23, &size[0]);
        load_player_ini(globals.player.sandy, *globals.player.model_sandy, modelass, size[0]);
    }
}

void zEntPlayer_Load(xEnt* ent, xSerial* serial)
{
    return;
}

void zEntPlayer_PatrickLaunch(xEnt* patLauncher)
{
    globals.player.carry.patLauncher = patLauncher;
}

int32 zEntPlayer_Damage(xBase* src, uint32 damage, const xVec3* knockback)
{
    int32 newDamage = zEntPlayer_Damage(src, damage);

    if (!newDamage)
    {
        return false;
    }

    if (knockback)
    {
        globals.player.ent.frame->vel.x = knockback->x;
        globals.player.ent.frame->vel.y = knockback->y;
        globals.player.ent.frame->vel.z = knockback->z;
    }

    return true;
}

void zEntPlayer_GiveHealth(int32 quantity)
{
    if (quantity < 0 && -quantity > (int32)globals.player.Health)
    {
        globals.player.Health = 0;
        return;
    }

    uint32 sum = globals.player.Health + quantity;
    uint32 maxHealth = globals.player.MaxHealth;
    globals.player.Health = sum;

    if (sum > maxHealth)
    {
        globals.player.Health = maxHealth;
    }
}

#if 0

void zEntPlayer_GiveSpatula(int32)
{
    sSpatulaGrabbed = 1;

    if (globals.player.ControlOffTimer < lbl_803CD5F0)
    {
        globals.player.ControlOffTimer = lbl_803CD5F0;
    }

    zNPCMsg_AreaNotify(NULL, NPC_MID_PLYRSPATULA, lbl_803CD830, 0x104, NPC_TYPE_UNKNOWN);
    zMusicSetVolume(lbl_803CD588, lbl_803CD62C);
}
#endif

void zEntPlayer_GiveShinyObject(int32 quantity)
{
    if (quantity < 0 && -quantity > (int32)globals.player.Inv_Shiny)
    {
        globals.player.Inv_Shiny = 0;
        return;
    }

    uint32 sum = globals.player.Inv_Shiny + quantity;
    uint32 maxShinies = 99999; // TODO: make this defined somewhere globally
    globals.player.Inv_Shiny = sum;

    if (sum > maxShinies)
    {
        globals.player.Inv_Shiny = maxShinies;
    }
}

void zEntPlayer_GivePatsSocksCurrentLevel(int32 quantity)
{
    uint32 level = zSceneGetLevelIndex();

    if (quantity < 0 && -quantity > (int32)globals.player.Inv_PatsSock_Total)
    {
        globals.player.Inv_PatsSock_Total = 0;
    }
    else
    {
        globals.player.Inv_PatsSock_Total += quantity;
    }

    if (quantity < 0 && -quantity > (int32)globals.player.Inv_PatsSock[level])
    {
        globals.player.Inv_PatsSock[level] = 0;
    }
    else
    {
        globals.player.Inv_PatsSock[level] += quantity;
    }

    globals.player.Inv_PatsSock_CurrentLevel = globals.player.Inv_PatsSock[level];

    if (quantity > 0)
    {
        zNPCMsg_AreaNotify(NULL, NPC_MID_PLYRSPATULA, lbl_803CD830, 0x104, NPC_TYPE_UNKNOWN);
    }
}

void zEntPlayer_GiveLevelPickupCurrentLevel(int32 quantity)
{
    uint32 level = zSceneGetLevelIndex();

    if (quantity < 0 && -quantity > (int32)globals.player.Inv_LevelPickups[level])
    {
        globals.player.Inv_LevelPickups[level] = 0;
    }
    else
    {
        globals.player.Inv_LevelPickups[level] += quantity;
    }

    globals.player.Inv_LevelPickups_CurrentLevel = globals.player.Inv_LevelPickups[level];

    if (quantity > 0)
    {
        zNPCMsg_AreaNotify(NULL, NPC_MID_PLYRSPATULA, lbl_803CD830, 0x104, NPC_TYPE_UNKNOWN);
    }
}

void zEntPlayer_SNDSetVol(_tagePlayerSnd player_snd, float32 new_vol)
{
    if (sPlayerSnd[gCurrentPlayer][player_snd])
    {
        xSndSetVol(sPlayerSndID[gCurrentPlayer][player_snd], new_vol);
    }
}

void zEntPlayer_SNDSetPitch(_tagePlayerSnd player_snd, float32 new_pitch)
{
    if (sPlayerSnd[gCurrentPlayer][player_snd])
    {
        xSndSetPitch(sPlayerSndID[gCurrentPlayer][player_snd], new_pitch);
    }
}

void zEntPlayer_SNDNotifyPlaying(uint32 id)
{
    sCurrentStreamSndID = id;
}

void xMat3x3RMulVec(xVec3* o, const xMat3x3* m, const xVec3* v)
{
    float32 x = m->right.x * v->x + m->up.x * v->y + m->at.x * v->z;
    float32 y = m->right.y * v->x + m->up.y * v->y + m->at.y * v->z;
    float32 z = m->right.z * v->x + m->up.z * v->y + m->at.z * v->z;

    o->x = x;
    o->y = y;
    o->z = z;
}

uint8 xSndIsPlaying(uint32 assetID)
{
    return iSndIsPlaying(assetID);
}

int32 zNPCTiki::IsHealthy()
{
    return flg_vuln != 0;
}

void zCameraTranslate(xCamera* cam, xVec3* pos)
{
    zCameraTranslate(cam, pos->x, pos->y, pos->z);
}

// TODO: This belongs in zNPCSupport.h
// but the compiler put it here for some reason?
xVec3* NPCC_rightDir(xEnt* ent)
{
    // So this is actually a reference to a struct RwV3D
    // which is the exact same as xVec3, but typed differently.
    // TODO: figure out what to do with these duplicate types
    return (xVec3*)&ent->model->Mat->right;
}

xVec3* NPCC_faceDir(xEnt* ent)
{
    // TODO: see note in previous function
    return (xVec3*)&ent->model->Mat->at;
}

xVec3* NPCC_upDir(xEnt* ent)
{
    // TODO: see note in previous function
    return (xVec3*)&ent->model->Mat->up;
}

int32 zGooIs(xEnt* ent)
{
    float32 temp;
    return zGooIs(ent, temp, 0);
}
