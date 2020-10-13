#include "zEntPlayer.h"

#include <types.h>

#include "../Core/p2/iSnd.h"

#include "../Core/x/xSnd.h"
#include "../Core/x/xEnt.h"
#include "../Core/x/xVec3.h"

#include "zGame.h"
#include "zGlobals.h"

extern zGlobals globals;
extern int32 gCurrentPlayer;
extern uint32 sCurrentStreamSndID;

// Multidimensional sound arrays for each player type
extern uint32 sPlayerSnd[ePlayer_MAXTYPES][ePlayerSnd_Total];
extern uint32 sPlayerSndID[ePlayer_MAXTYPES][ePlayerSnd_Total];

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_SpawnWandBubbles__FP5xVec3Ui")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerKillCarry__Fv")

// void zEntPlayerControlOn(zControlOwner owner)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerControlOn__F13zControlOwner")

// void zEntPlayerControlOff(zControlOwner owner)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerControlOff__F13zControlOwner")

// void TellPlayerVillainIsNear(float visnear)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "TellPlayerVillainIsNear__Ff")

// void SetPlayerKillsVillainTimer(float time)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "SetPlayerKillsVillainTimer__Ff")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "DampenControls__FPfPfff")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "CalcAnimSpeed__FP4xEntfPf")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "LeanUpdate__Fff")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "TurnToFace__FP4xEntPC5xVec3ff")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerArrive__FP4xEntP5xBase")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerAbsControl__FP4xEntfff")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "InvReset__Fv")

void HealthReset()
{
    globals.player.Health = globals.player.MaxHealth;
}

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "RunAnyCheck__FP15xAnimTransitionP11xAnimSinglePv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "RunCheck__FP15xAnimTransitionP11xAnimSinglePv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "RunScaredCheck__FP15xAnimTransitionP11xAnimSinglePv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "RunVictoryCheck__FP15xAnimTransitionP11xAnimSinglePv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "RunSlipCheck__FP15xAnimTransitionP11xAnimSinglePv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "RunOutOfWorldCheck__FP15xAnimTransitionP11xAnimSinglePv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "WalkCheck__FP15xAnimTransitionP11xAnimSinglePv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "IdleCheck__FP15xAnimTransitionP11xAnimSinglePv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "IdleSlipCheck__FP15xAnimTransitionP11xAnimSinglePv")

// int zEntPlayer_InBossBattle()
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_InBossBattle__Fv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "SpatulaGrabCB__FP15xAnimTransitionP11xAnimSinglePv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "StopLCopterCB__FP15xAnimTransitionP11xAnimSinglePv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "DoWallJumpCheck__Fv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "JumpCB__FP15xAnimTransitionP11xAnimSinglePv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "BounceCB__FP15xAnimTransitionP11xAnimSinglePv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "DblJumpCB__FP15xAnimTransitionP11xAnimSinglePv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "BoulderRollDoneCheck__Fv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "BoulderRollDoneCB__Fv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "speak_update__24_esc__2_unnamed_esc__2_zEntPlayer_cpp_esc__2_Ff")

// void zEntPlayerSpeakStart(unsigned int sndid, int anim)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerSpeakStart__FUiUii")

// void zEntPlayerSpeakStop()
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerSpeakStop__Fv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "GetPatrickTarget__FP4xEnt")

// void zEntPlayer_LassoNotify(en_LASSO_EVENT event)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_LassoNotify__F14en_LASSO_EVENT")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "MeleeStopCB__FP15xAnimTransitionP11xAnimSinglePv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "LassoSwingBeginCB__FP15xAnimTransitionP11xAnimSinglePv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "StunBubbleTrail__FP11xAnimSingle")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "BubbleBashContrails__FP11xAnimSingle")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "BubbleBounceContrails__FP11xAnimSingle")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "MeleeAttackBoundCollide__FP4xEntP6zSceneP6xBound")

/*
int32 zEntPlayer_IsSneaking()
{
    if (gCurrentPlayer != eCurrentPlayerSpongeBob)
    {
        return false;
    }

    uint32 flags = globals.player.ent.model->Anim->Single->State->UserFlags;

    // only two instructions before this matches
    // it seems to be branching to the wrong result.
    // inverting this chain of logic should fix it?
    // flipping the return values below is the
    // correct logic, but non-matching
    if ((flags & 1) == 0)
    {
        flags &= 0x1e;

        if (flags != 2)
        {
            if (flags == 4)
            {
                return true;
            }
        }
    }

    return false;
}
*/
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_IsSneaking__Fv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "load_talk_filter__FPUcP16xModelAssetParamUii")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "count_talk_anims__FP10xAnimTable")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "load_player_ini__FR15zPlayerSettingsR14xModelInstanceP16xModelAssetParamUi")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "load_player_ini__Fv")

// void zEntPlayer_Init(xEnt* ent, xEntAsset* asset)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_Init__FP4xEntP9xEntAsset")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_RestoreSounds__Fv")

void zEntPlayer_Load(xEnt* ent, xSerial* serial)
{
    return;
}

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_StreakFX__FP4xEntf")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_SpringboardFX__FP4xEntf")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "getPadDefl__FP13_tagPadAnalogP5xVec2")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_PredictionUpdate__FP4xEntf")

// void zEntPlayer_PredictPos(xVec3* pos, float timeIntoFuture, float leadFactor, int useTurn)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_PredictPos__FP5xVec3ffi")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerKnockToSafety__FP4xEnt")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_FindGrabEnt__FP4xEntP6zScenePi")

// void zEntPlayer_Update(xEnt* ent, xScene* sc, float dt)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_Update__FP4xEntP6xScenef")

// void zEntPlayer_CheckCritterContact(xEnt* player, float dt)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_CheckCritterContact__FP4xEntf")

void zEntPlayer_PatrickLaunch(xEnt* patLauncher)
{
    globals.player.carry.patLauncher = patLauncher;
}

// void zEntPlayer_ShadowModelEnable()
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_ShadowModelEnable__Fv")

// void zEntPlayer_ShadowModelDisable()
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_ShadowModelDisable__Fv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_BubbleBowlLaneRender__FP4zEnt")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_ReticleRender__FP4zEnt")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "get_reticle_bound__FR5xVec3Rf")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerUpdateModelSB__Fv")

// void zEntPlayerUpdateModel()
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerUpdateModel__Fv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerEmitTongueBubbles__Fv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerEmitSlideBubbles__Fv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerCheckHelmetPop__Fv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerCheckShoePop__Fv")

// void zEntPlayer_setBoulderMode(unsigned int mode)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_setBoulderMode__FUi")

int32 zEntPlayer_Damage(xBase* src, uint32 damage, const xVec3* knockback)
{
    int32 newDamage = zEntPlayer_Damage(src, damage);

    if (newDamage == 0)
    {
        newDamage = 0; // galaxy brain
    }
    else
    {
        if (knockback != NULL)
        {
            globals.player.ent.frame->vel.x = knockback->x;
            globals.player.ent.frame->vel.y = knockback->y;
            globals.player.ent.frame->vel.z = knockback->z;
        }

        newDamage = 1;
    }

    return newDamage;
}

// int zEntPlayer_DamageNPCKnockBack(xBase* src, unsigned int damage, xVec3* npcPos)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_DamageNPCKnockBack__FP5xBaseUiP5xVec3")

// void zEntPlayer_DamageKnockIntoAir(float height)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_DamageKnockIntoAir__Ff")

// int zEntPlayer_Damage(xBase* src, unsigned int damage)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_Damage__FP5xBaseUi")

// unsigned int zEntPlayer_MoveInfo()
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_MoveInfo__Fv")

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

// void zEntPlayer_GiveSpatula(int quantity)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_GiveSpatula__Fi")

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

// void zEntPlayer_GivePatsSocksCurrentLevel(int quantity)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_GivePatsSocksCurrentLevel__Fi")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_GiveLevelPickupCurrentLevel__Fi")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "CalcJumpImpulse_Smooth__Ffffff")

// void CalcJumpImpulse(zJumpParam* param, zPlayerSettings* settings)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "CalcJumpImpulse__FP10zJumpParamPC15zPlayerSettings")

// void zEntPlayerJumpStart(xEnt* ent, zJumpParam* jump)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerJumpStart__FP4xEntP10zJumpParam")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerJumpAddDriver__FP4xEnt")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerJumpLand__FP4xEnt")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerJumpUpdate__FP4xEntP6xScenef")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerEGenUpdate__FP4xEntP6xScenef")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerVelUpdate__FP4xEntP6xScenef")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "det3x3top1__Fffffff")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "SlideTrackUpdate__FP4xEnt")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerTSlideUpdate__FP4xEntP6xScenef")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerFloorUpdate__FP4xEntP6xScenef")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerSurfDamageUpdate__FP4xEntP6xScenef")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerMountHackUpdate__Ff")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerMountHackTakeAction__FP4xEntUi")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerDriveUpdate__FP4xEntP6xScenef")

// void zEntPlayerExit()
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerExit__FP4xEnt")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "PlayerHitAnimInit__FP14xModelInstanceP15xAnimTransitionPUi")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_ObjIDIsTrack__FUi")

// void zEntPlayerPreReset()
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerPreReset__Fv")

// void zEntPlayerReset(xEnt* ent)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerReset__FP4xEnt")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerCollisBuildFromDepen__FP7xCollis")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "CollidePyramidBoxTop__FP7xCollisP4xBoxfP7xSphere")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerCollisTranslate__FP7xCollisfff")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerCollsAllTranslate__FP7xCollisfff")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerCollsWallsTranslate__FP7xCollisfff")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerCollsWallsTranslate__FP7xCollisPC5xVec3")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerCollsSidesTranslate__FP7xCollisfff")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerCollCheckEnv__FP4xEntP6xScene")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "ComputeFudge__Fff")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "CalcCombinedDepen__FRfRffffff")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerCollsSelectDepen__FP4xEntP6xScenef")

// void zEntPlayerCollide(xEnt* ent, xScene* sc, float dt)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerCollide__FP4xEntP6xScenef")

// void zEntPlayerCollTrigger(xEnt* ent, xScene* sc)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerCollTrigger__FP4xEntP6xScene")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "GetPosVec__FP5xBase")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerSwingUpdate__FP4xEntfff")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerTeeterCheck__FP4xEntP6xScenef")

// void zEntPlayer_StoreCheckPoint(xVec3* pos, float rot, unsigned int initCamID)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_StoreCheckPoint__FP5xVec3fUi")

// void zEntPlayer_LoadCheckPoint()
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_LoadCheckPoint__Fv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "_SetupRumble__F14_tagePlayerSnd14_tagRumbleTypef")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_SNDInit__Fv")

// void zEntPlayer_SNDPlay(_tagePlayerSnd player_snd, float delay)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_SNDPlay__F14_tagePlayerSndf")

// void zEntPlayer_SNDPlayStream(_tagePlayerStreamSnd player_snd)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_SNDPlayStream__F20_tagePlayerStreamSnd")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_SNDPlayStream__F20_tagePlayerStreamSndUi")

// void zEntPlayer_SNDPlayDelayed(float seconds)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_SNDPlayDelayed__Ff")

// void zEntPlayer_SNDPlayStream(unsigned int lower, unsigned int upper, _tagePlayerStreamSnd player_snd, unsigned int flags)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "zEntPlayer_SNDPlayStream__FUiUi20_tagePlayerStreamSndUi")

// void zEntPlayer_SNDPlayStreamRandom(unsigned int lower, unsigned int upper, _tagePlayerStreamSnd player_snd_start, _tagePlayerStreamSnd player_snd_end, float delay)
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayer.s",                                                                       \
    "zEntPlayer_SNDPlayStreamRandom__FUiUi20_tagePlayerStreamSnd20_tagePlayerStreamSndf")

// void zEntPlayer_SNDPlayStreamRandom(_tagePlayerStreamSnd player_snd_start, _tagePlayerStreamSnd player_snd_end, float delay)
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayer.s",                                                                       \
    "zEntPlayer_SNDPlayStreamRandom__F20_tagePlayerStreamSnd20_tagePlayerStreamSndf")

// void zEntPlayer_SNDPlayRandom(_tagePlayerSnd player_snd_start, _tagePlayerSnd player_snd_end, float delay)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "zEntPlayer_SNDPlayRandom__F14_tagePlayerSnd14_tagePlayerSndf")

/*
void zEntPlayer_SNDSetVol(_tagePlayerSnd player_snd, float32 new_vol)
{
    // only 1 slightly incorrect instruction preventing match
    if (sPlayerSnd[gCurrentPlayer][player_snd] != 0)
    {
        xSndSetVol(sPlayerSndID[gCurrentPlayer][player_snd], new_vol);
    }
}*/
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_SNDSetVol__F14_tagePlayerSndf")

/*
void zEntPlayer_SNDSetPitch(_tagePlayerSnd player_snd, float32 new_pitch)
{
    // only 1 slightly incorrect instruction preventing match
    if (sPlayerSnd[gCurrentPlayer][player_snd] != 0)
    {
        xSndSetPitch(sPlayerSndID[gCurrentPlayer][player_snd], new_pitch);
    }
}
*/
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_SNDSetPitch__F14_tagePlayerSndf")

// void zEntPlayer_SNDStop(_tagePlayerSnd player_snd)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_SNDStop__F14_tagePlayerSnd")

// void zEntPlayer_SNDStopStream()
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_SNDStopStream__Fv")

void zEntPlayer_SNDNotifyPlaying(uint32 id)
{
    sCurrentStreamSndID = id;
}

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerBeginCollideNoBupdate__FP4xEntP6xScenef")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerCollsDetect__FP4xEntP6xScenef")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerHackFixBbashMiss__FP14xModelInstance")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "PlayerLedgeInit__FP16zLedgeGrabParamsP14xModelInstance")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerLedgeUpdate__FP4xEntP6xScenef")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "__as__10xEntCollisFRC10xEntCollis")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_UpdateVelocityBlur__Fv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "dampen_velocity__FR5xVec3RC5xVec3f")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "player_sound_hop_load__FUii")

// void zEntPlayer_LoadSounds()
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_LoadSounds__Fv")

// void zEntPlayer_UnloadSounds()
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_UnloadSounds__Fv")

// unsigned char zEntPlayer_MinimalUpdate(xEnt* ent, xScene* sc, float dt, xVec3& drive_motion)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_MinimalUpdate__FP4xEntP6xScenefR5xVec3")

// void zEntPlayer_MinimalRender(zEnt* ent)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_MinimalRender__FP4zEnt")

// unsigned char zEntPlayerDyingInGoo()
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerDyingInGoo__Fv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "xVec3ScaleC__FP5xVec3PC5xVec3fff")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "xMat3x3SMul__FP7xMat3x3PC7xMat3x3f")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "XZDstSqToPlayer__10zNPCCommonFP5xVec3Pf")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "XZDstSqToPos__10zNPCCommonFPC5xVec3P5xVec3Pf")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "XZVecToPos__10zNPCCommonFP5xVec3PC5xVec3Pf")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "Pos__10zNPCCommonFv")

uint8 xSndIsPlaying(uint32 assetID)
{
    return (uint8)iSndIsPlaying(assetID);
}

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "xSndIsPlayingByHandle__FUi")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "__as__12xSweptSphereFRC12xSweptSphere")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "__as__13xiMat4x3UnionFRC13xiMat4x3Union")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zCameraTranslate__FP7xCameraP5xVec3")

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

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zGooIs__FP4xEnt")