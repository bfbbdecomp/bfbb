#include "zEntPlayer.h"

#include <types.h>

#include "../Core/p2/iSnd.h"

#include "../Core/x/xSnd.h"
#include "../Core/x/xEnt.h"
#include "../Core/x/xVec3.h"
#include "../Core/x/xEntBoulder.h"

#include "zGame.h"
#include "zGameExtras.h"
#include "zGlobals.h"
#include "zGoo.h"
#include "zEntTeleportBox.h"

extern zGlobals globals;
extern int32 gCurrentPlayer;
extern uint32 sCurrentStreamSndID;

extern uint32 sShouldBubbleBowl;
extern float32 sBubbleBowlLastWindupTime;
extern float32 sBubbleBowlMultiplier;

extern int32 in_goo;
extern int32 sPlayerDiedLastTime;
extern int32 player_hit;
extern int32 player_hit_anim;

extern float32 lbl_803CD5A0; // 0.0
extern float32 lbl_803CD638; // 10.0

// Multidimensional sound arrays for each player type
extern uint32 sPlayerSnd[ePlayer_MAXTYPES][ePlayerSnd_Total];
extern uint32 sPlayerSndID[ePlayer_MAXTYPES][ePlayerSnd_Total];

// func_80066210
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_SpawnWandBubbles__FP5xVec3Ui")

// func_80066430
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerKillCarry__Fv")

// func_80066500
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerControlOn__F13zControlOwner")

// func_80066558
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerControlOff__F13zControlOwner")

// func_800665B8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "TellPlayerVillainIsNear__Ff")

// func_800665C8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "SetPlayerKillsVillainTimer__Ff")

// func_800665D8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "DampenControls__FPfPfff")

// func_800667A0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "CalcAnimSpeed__FP4xEntfPf")

// func_800667EC
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "LeanUpdate__Fff")

// func_80066864
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "TurnToFace__FP4xEntPC5xVec3ff")

// func_8006697C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerArrive__FP4xEntP5xBase")

// func_800669EC
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerAbsControl__FP4xEntfff")

// func_80067F40
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "InvReset__Fv")

void HealthReset()
{
    globals.player.Health = globals.player.MaxHealth;
}

// func_80068068
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "RunAnyCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_800680E8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "RunCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068180
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "RunStoicCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068218
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "RunScaredCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_800682B0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "RunVictoryCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006833C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "RunSlipCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006838C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "RunOutOfWorldCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068410
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "WalkCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068490
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "WalkStoicCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068528
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "WalkVictoryCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_800685B4
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "WalkScaredCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006864C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "IdleCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006869C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "IdleStoicCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068704
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "IdleVictoryCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068760
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "IdleScaredCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_800687C8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "IdleSlipCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068818
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "AnyMoveCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068834
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "AnyStopCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006884C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "SlipRunCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068878
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "NoSlipCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_800688A0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "IdleCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_800688D0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "InactiveCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068918
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "InactiveCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068934
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "InactiveFinishedCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068950
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "LandCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068968
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "LandTrackCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006899C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "LandNoTrackCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_800689D0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "LandHighCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068A00
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "LandRunCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068A30
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "LandWalkCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068A60
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "LandFastCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068A90
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "LandNoTrackWalkCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068AD0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "LandSlipIdleCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068B10
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "LandSlipRunCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068B50
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "LandNoTrackFastCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068B90
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "LandNoTrackSlipRunCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068BDC
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "LandNoTrackSlipIdleCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068C28
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "LandCallback__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068C5C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "LandSlipRunCallback__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068C9C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "SandyLandCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068CB4
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "BubbleSpinCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068D30
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "BubbleSpinCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068D78
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "BubbleBashCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068E0C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "BubbleBashCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068E94
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "BBashStrikeCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068E9C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "BBashStrikeCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068EB8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "BBashToJumpCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068EDC
// #pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
//                    "BubbleBounceCheck__FP15xAnimTransitionP11xAnimSinglePv")
uint32 BubbleBounceCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    if (globals.player.cheat_mode)
    {
        return false;
    }

    bool canBounce = false;

    if (!globals.player.ControlOff && (globals.pad0->pressed & 0x20000) != 0)
    {
        canBounce = true;
    }

    return canBounce;
}

// func_80068F24
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "BubbleBounceCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068F9C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "BBounceAttackCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068FBC
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "BBounceStrikeCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068FE8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "BBounceStrikeCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_80069054
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "BBounceToJumpCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006905C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "BBounceToJumpCB__FP15xAnimTransitionP11xAnimSinglePv")

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

    bool canBowl = false;

    // TODO: replace hardcoded pad number with button constant
    if (!globals.player.ControlOff && ((globals.pad0->pressed & 0x20000) != 0) &&
        globals.player.g.PowerUp[0] != 0)
    {
        canBowl = true;
    }

    return canBowl;
}

// func_80069168
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "BbowlCB__FP15xAnimTransitionP11xAnimSinglePv")

uint32 BbowlWindupEndCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    if (anim->Time < sBubbleBowlLastWindupTime && sShouldBubbleBowl != false)
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
    bool result = false;
    if (anim->Time > globals.player.g.BubbleBowlMinRecoverTime && WalkCheck(tran, anim, param_3))
    {
        result = true;
    }
    return result;
}

uint32 BbowlRecoverRunCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    bool result = false;
    if (anim->Time > globals.player.g.BubbleBowlMinRecoverTime && RunCheck(tran, anim, param_3))
    {
        result = true;
    }
    return result;
}

uint32 BbowlRecoverRunScaredCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    bool result = false;
    if (anim->Time > globals.player.g.BubbleBowlMinRecoverTime &&
        RunScaredCheck(tran, anim, param_3))
    {
        result = true;
    }
    return result;
}

uint32 BbowlRecoverRunVictoryCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    bool result = false;
    if (anim->Time > globals.player.g.BubbleBowlMinRecoverTime &&
        RunVictoryCheck(tran, anim, param_3))
    {
        result = true;
    }
    return result;
}

uint32 BbowlRecoverRunOutOfWorldCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    bool result = false;
    if (anim->Time > globals.player.g.BubbleBowlMinRecoverTime &&
        RunOutOfWorldCheck(tran, anim, param_3))
    {
        result = true;
    }
    return result;
}

uint32 BbowlRecoverRunSlipCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    bool result = false;
    if (anim->Time > globals.player.g.BubbleBowlMinRecoverTime && RunSlipCheck(tran, anim, param_3))
    {
        result = true;
    }
    return result;
}

#if 0
uint32 GooCheck(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    if (globals.player.ControlOff & 0x8000)
    {
        return false;
    }
    // not sure what this is doing, but it's almost matching.
    // it's only using the wrong registers right now.
    // the function is apparently 11 lines of code?
    return in_goo & ~((-globals.player.cheat_mode | globals.player.cheat_mode) >> 0x1f);
}
#else
// func_800694D0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "GooCheck__FP15xAnimTransitionP11xAnimSinglePv")
#endif

#if 0
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
#else
// func_80069508
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "GooDeathCB__FP15xAnimTransitionP11xAnimSinglePv")
#endif

uint32 Hit01Check(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    bool result = false;
    // TODO: replace hardcoded anim constant
    if (player_hit && player_hit_anim == 1)
    {
        result = true;
    }
    return result;
}

uint32 Hit01CB(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    player_hit = 0;
    player_hit_anim = 2;
    return false;
}

uint32 Hit02Check(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    bool result = false;
    // TODO: replace hardcoded anim constant
    if (player_hit && player_hit_anim == 2)
    {
        result = true;
    }
    return result;
}

uint32 Hit02CB(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    player_hit = 0;
    player_hit_anim = 3;
    return false;
}

uint32 Hit03Check(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    bool result = false;
    // TODO: replace hardcoded anim constant
    if (player_hit && player_hit_anim == 3)
    {
        result = true;
    }
    return result;
}

uint32 Hit03CB(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    player_hit = 0;
    player_hit_anim = 4;
    return false;
}

uint32 Hit04Check(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    bool result = false;
    // TODO: replace hardcoded anim constant
    if (player_hit && player_hit_anim == 4)
    {
        result = true;
    }
    return result;
}

uint32 Hit04CB(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    player_hit = 0;
    player_hit_anim = 5;
    return false;
}

uint32 Hit05Check(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    bool result = false;
    // TODO: replace hardcoded anim constant
    if (player_hit && player_hit_anim == 5)
    {
        result = true;
    }
    return result;
}

uint32 Hit05CB(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    player_hit = 0;
    player_hit_anim = 1;
    return false;
}

#if 0
uint32 Defeated01Check(xAnimTransition* tran, xAnimSingle* anim, void* param_3)
{
    // if this can be decompiled, it can be copied and pasted 4 more times.
    bool result = false;

    int32 flags = zGameExtras_CheatFlags();

    if (globals.player.Health == 0)
    {
        result = true;
    }
    return result;
}
#else
// func_80069694
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "Defeated01Check__FP15xAnimTransitionP11xAnimSinglePv")
#endif

// func_800696F8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "Defeated02Check__FP15xAnimTransitionP11xAnimSinglePv")

// func_80069764
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "Defeated03Check__FP15xAnimTransitionP11xAnimSinglePv")

// func_800697D0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "Defeated04Check__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006983C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "Defeated05Check__FP15xAnimTransitionP11xAnimSinglePv")

// func_800698A8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "DefeatedCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006999C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "SpatulaGrabCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_800699A4
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_InBossBattle__Fv")

// func_800699F0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "SpatulaGrabCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_80069BBC
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "SpatulaGrabStopCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_80069CA0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "LCopterCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_80069CF0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "LCopterCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_80069DD8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "StopLCopterCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_80069E28
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "DoWallJumpCheck__Fv")

// func_80069FF0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "WallJumpLaunchCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006A054
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "WallJumpLaunchCallback__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006A098
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "WallJumpCallback__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006A20C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "WallJumpFlightLandCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006A220
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "WallJumpFlightLandCallback__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006A238
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "WallJumpLandFlightCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006A250
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "WallJumpLandFlightCallback__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068EB8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "JumpCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006905C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "JumpCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006A344
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "JumpApexCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068EDC
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "BounceCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_80068F24
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "BounceCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006A4A4
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "BounceStopLCopterCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006A4FC
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "DblJumpCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006A58C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "DblJumpCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006A708
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "TongueDblJumpCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006A770
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "TongueDblSpinCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006A788
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "FallCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006A864
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "BoulderRollMoveCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006A890
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "BoulderRollIdleCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006A8C0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "BoulderRollCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006A8E8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "BoulderRollWindupCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006A92C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "BoulderRollCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006ACA4
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "BoulderRollDoneCheck__Fv")

// func_8006AD00
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "BoulderRollDoneCB__Fv")

// func_8006AEE8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "SlideTrackCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006AEFC
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "SlideTrackCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006AF94
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "NoslideTrackCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006AFA4
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "NoslideTrackCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006AFD4
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "TrackFallCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006B004
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "TrackFallCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006B024
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "TrackPrefallJumpCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006B080
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "LedgeGrabCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006B0A4
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "LedgeGrabCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006B158
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "LedgeFinishCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006B1A4
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PatrickGrabCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006B1B8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "PatrickGrabFailed__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006B1CC
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PatrickGrabKill__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006B1E4
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PatrickGrabThrow__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006B22C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "PatrickAttackCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006B2A0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PatrickStunCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006B2D4
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PatrickMeleeCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006B310
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PatrickGrabCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006B5E8
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayer.s",                                                                       \
    "TalkCheck__24_esc__2_unnamed_esc__2_zEntPlayer_cpp_esc__2_FP15xAnimTransitionP11xAnimSinglePv")

// func_8006B604
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayer.s",                                                                       \
    "TalkDoneCheck__24_esc__2_unnamed_esc__2_zEntPlayer_cpp_esc__2_FP15xAnimTransitionP11xAnimSinglePv")

// func_8006B624
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "speak_update__24_esc__2_unnamed_esc__2_zEntPlayer_cpp_esc__2_Ff")

// func_8006B6CC
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerSpeakStart__FUiUii")

// func_8006B78C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerSpeakStop__Fv")

// func_8006B7B8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "GetPatrickTarget__FP4xEnt")

// func_8006BC90
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "PatrickGrabThrowCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006BD40
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_LassoNotify__F14en_LASSO_EVENT")

// func_8006BDA8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "MeleeCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006BE20
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "LassoStartCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006BE94
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "LassoLostTargetCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006BEA8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "LassoStraightToDestroyCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006BEB8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "LassoAboutToDestroyCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006BEC0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "LassoDestroyCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006BED0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "LassoReyankCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006BED8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "LassoFailIdleSlipCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006BF24
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "LassoFailIdleCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006BF70
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "LassoFailWalkCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006BFBC
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "LassoFailRunCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006C008
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "LassoFailRunOutOfWorldCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006C054
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "LassoFailRunSlipCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006C0A0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "JumpMeleeCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006B2D4
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "MeleeCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006C184
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "LassoStartCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006C2CC
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "LassoThrowCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006C3E4
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "LassoFlyCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006C570
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "LassoDestroyCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006C684
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "LassoYankCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006C6F0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "MeleeStopCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006C734
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "SpatulaMeleeStopCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006C78C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "LassoStopCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006C83C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "LassoSwingGroundedBeginCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006C8AC
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "LassoSwingBeginCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006C8E0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "LassoSwingReleaseCheck__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006C940
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "LassoSwingBeginCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006CA5C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "LassoSwingGroundedBeginCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006CAC8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "LassoSwingTossCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006CBB0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "LassoSwingCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006CC14
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "LassoSwingGroundedCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006CC68
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "LassoSwingReleaseCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006CD08
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "StunBubbleTrail__FP11xAnimSingle")

// func_8006CDAC
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "BubbleBashContrails__FP11xAnimSingle")

// func_8006CE70
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "BubbleBounceContrails__FP11xAnimSingle")

// func_8006CF04
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "StunStartFallCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006CF14
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "StunRadiusCB__FP15xAnimTransitionP11xAnimSinglePv")

// func_8006CFF0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "MeleeAttackBoundCollide__FP4xEntP6zSceneP6xBound")

// func_8006D0A4
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "CheckObjectAgainstMeleeBound__FP4xEntPv")

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

// func_8006D5CC
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_IsSneaking__Fv")

// func_8006D628
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "load_talk_filter__FPUcP16xModelAssetParamUii")

// func_8006D71C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "count_talk_anims__FP10xAnimTable")

// func_8006D7E4
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "load_player_ini__FR15zPlayerSettingsR14xModelInstanceP16xModelAssetParamUi")

// func_8006D84C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "load_player_ini__Fv")

// func_8006D930
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_Init__FP4xEntP9xEntAsset")

// func_8006E670
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_RestoreSounds__Fv")

void zEntPlayer_Load(xEnt* ent, xSerial* serial)
{
    return;
}

// func_8006E698
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_StreakFX__FP4xEntf")

// func_8006EBBC
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_SpringboardFX__FP4xEntf")

// func_8006EDA4
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "getPadDefl__FP13_tagPadAnalogP5xVec2")

// func_8006F080
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "BoulderVEventCB__FP5xBaseP5xBaseUiPCfP5xBase")

// func_8006F0B8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_BoulderVehicleRender__FP4zEnt")

// func_8006F0DC
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "zEntPlayer_BoulderVehicleMove__FP4xEntP6xScenefP9xEntFrame")

// func_8006F0E8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_BoulderVehicleUpdate__FP4xEntP6xScenef")

// func_8006F7A4
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_PredictionUpdate__FP4xEntf")

// func_8006F97C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_PredictPos__FP5xVec3ffi")

// func_8006FA64
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerKnockToSafety__FP4xEnt")

// func_8006FC50
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_FindGrabEnt__FP4xEntP6zScenePi")

// func_8006FEAC
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_Update__FP4xEntP6xScenef")

// func_800745B8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_CheckCritterContact__FP4xEntf")

void zEntPlayer_PatrickLaunch(xEnt* patLauncher)
{
    globals.player.carry.patLauncher = patLauncher;
}

// func_80074954
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_ShadowModelEnable__Fv")

// func_80074A24
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_ShadowModelDisable__Fv")

// func_80074AF4
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_BubbleBowlLaneRender__FP4zEnt")

// func_80074CB4
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_ReticleRender__FP4zEnt")

// func_80074EF0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "get_reticle_bound__FR5xVec3Rf")

// func_80075120
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerUpdateModelSB__Fv")

// func_800755E8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerUpdateModel__Fv")

// func_80075620
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerEmitTongueBubbles__Fv")

// func_80075698
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerEmitSlideBubbles__Fv")

// func_80075710
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerCheckHelmetPop__Fv")

// func_800757AC
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerCheckShoePop__Fv")

// func_80075878
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_Render__FP4zEnt")

// func_80075EC8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_Move__FP4xEntP6xScenefP9xEntFrame")

// func_80076204
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

// func_800762A8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_DamageNPCKnockBack__FP5xBaseUiP5xVec3")

// func_800763B0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_DamageKnockIntoAir__Ff")

// func_80076430
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_Damage__FP5xBaseUi")

// func_8007685C
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

// func_80076A20
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

// func_80076ADC
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_GivePatsSocksCurrentLevel__Fi")

// func_80076BD0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_GiveLevelPickupCurrentLevel__Fi")

// func_80076C84
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "CalcJumpImpulse_Smooth__Ffffff")

// func_80076F2C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "CalcJumpImpulse__FP10zJumpParamPC15zPlayerSettings")

// func_80076F8C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerJumpStart__FP4xEntP10zJumpParam")

// func_80077030
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerJumpAddDriver__FP4xEnt")

// func_8007705C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerJumpLand__FP4xEnt")

// func_80077168
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerJumpUpdate__FP4xEntP6xScenef")

// func_8007771C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerEGenUpdate__FP4xEntP6xScenef")

// func_80077810
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerVelUpdate__FP4xEntP6xScenef")

// func_80077D54
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "nearestTrackCB__FP14RpIntersectionP19RpCollisionTrianglefPv")

// func_80078084
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "det3x3top1__Fffffff")

// func_800780A0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "SlideTrackUpdate__FP4xEnt")

// func_8007860C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerTSlideUpdate__FP4xEntP6xScenef")

// func_800788C0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerFloorUpdate__FP4xEntP6xScenef")

// func_80079404
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerDepenQuery__FP4xEntP4xEntP6xScenefP7xCollis")

// func_800794A8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerBoundUpdate__FP4xEntP5xVec3")

// func_8007950C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerSurfDamageUpdate__FP4xEntP6xScenef")

// func_8007977C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerMountHackUpdate__Ff")

// func_800797D4
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerMountHackTakeAction__FP4xEntUi")

// func_80079818
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerDriveUpdate__FP4xEntP6xScenef")

// func_80079E84
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerExit__FP4xEnt")

// func_80079EA4
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "PlayerHitAnimInit__FP14xModelInstanceP15xAnimTransitionPUi")

// func_80079FB4
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_ObjIDIsTrack__FUi")

// func_8007A0D0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerPreReset__Fv")

// func_8007A120
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerReset__FP4xEnt")

// func_8007A8EC
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerCollisBuildFromDepen__FP7xCollis")

// func_8007A960
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerCollCheckOneEnt__FP4xEntP6xScenePv")

// func_8007AE04
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "CollidePyramidBoxTop__FP7xCollisP4xBoxfP7xSphere")

// func_8007B24C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerCollCheckOneVillain__FP4xEntP6xScenePv")

// func_8007B5E0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerCollisTranslate__FP7xCollisfff")

// func_8007B6F0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerCollsAllTranslate__FP7xCollisfff")

// func_8007B794
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerCollsWallsTranslate__FP7xCollisfff")

// func_8007B838
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerCollsWallsTranslate__FP7xCollisPC5xVec3")

// func_8007B864
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerCollsSidesTranslate__FP7xCollisfff")

// func_8007B904
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerCollCheckEnv__FP4xEntP6xScene")

// func_8007B984
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "ComputeFudge__Fff")

// func_8007B9DC
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "CalcCombinedDepen__FRfRffffff")

// func_8007BC3C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerCollsSelectDepen__FP4xEntP6xScenef")

// func_8007C388
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerCollide__FP4xEntP6xScenef")

// func_8007C55C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerCollTrigger__FP4xEntP6xScene")

// func_8007C96C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "GetPosVec__FP5xBase")

// func_8007C9B8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerEventCB__FP5xBaseP5xBaseUiPCfP5xBase")

// func_8007D3F8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerSwingUpdate__FP4xEntfff")

// func_8007D8EC
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerTeeterCheck__FP4xEntP6xScenef")

// func_8007DAA8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerRotMatchUpdateEnt__FP4xEntP6xScenefPv")

// func_8007DDE8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_StoreCheckPoint__FP5xVec3fUi")

// func_8007DE48
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_LoadCheckPoint__Fv")

// func_8007DFC0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "_SetupRumble__F14_tagePlayerSnd14_tagRumbleTypef")

// func_8007DFE0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_SNDInit__Fv")

// func_80080790
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_SNDPlay__F14_tagePlayerSndf")

// func_80080878
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_SNDPlayStream__F20_tagePlayerStreamSnd")

// func_8008089C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_SNDPlayStream__F20_tagePlayerStreamSndUi")

// func_80080968
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_SNDPlayDelayed__Ff")

// func_80080A38
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "zEntPlayer_SNDPlayStream__FUiUi20_tagePlayerStreamSndUi")

// func_80080A7C
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayer.s",                                                                       \
    "zEntPlayer_SNDPlayStreamRandom__FUiUi20_tagePlayerStreamSnd20_tagePlayerStreamSndf")

// func_80080AC0
#pragma GLOBAL_ASM(                                                                                \
    "asm/Game/zEntPlayer.s",                                                                       \
    "zEntPlayer_SNDPlayStreamRandom__F20_tagePlayerStreamSnd20_tagePlayerStreamSndf")

// func_80080EF4
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "zEntPlayer_SNDPlayRandom__F14_tagePlayerSnd14_tagePlayerSndf")

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

// func_80081240
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_SNDStop__F14_tagePlayerSnd")

// func_800812E4
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_SNDStopStream__Fv")

void zEntPlayer_SNDNotifyPlaying(uint32 id)
{
    sCurrentStreamSndID = id;
}

// func_80081320
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerBeginCollideNoBupdate__FP4xEntP6xScenef")

// func_80081468
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerCollsDetect__FP4xEntP6xScenef")

// func_80081528
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerHackFixBbashMiss__FP14xModelInstance")

// func_80081668
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "PlayerLedgeInit__FP16zLedgeGrabParamsP14xModelInstance")

// func_80081880
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerLedgeUpdate__FP4xEntP6xScenef")

// func_800820E4
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "__as__10xEntCollisFRC10xEntCollis")

// func_80082174
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_UpdateVelocityBlur__Fv")

// func_8008226C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "dampen_velocity__FR5xVec3RC5xVec3f")

// func_800823A4
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "player_sound_hop_load__FUii")

// func_800824C4
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_LoadSounds__Fv")

// func_80082568
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_UnloadSounds__Fv")

// func_80082648
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "dont_move__FP4xEntP6xScenefP9xEntFrame")

// func_80082674
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_MinimalUpdate__FP4xEntP6xScenefR5xVec3")

// func_800829A4
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_MinimalRender__FP4zEnt")

// func_80082AB8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerDyingInGoo__Fv")

// func_80082ACC
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "__sinit_zEntPlayer_cpp")

// func_80082AD8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "xVec3ScaleC__FP5xVec3PC5xVec3fff")

// func_80082B00
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "xMat3x3RMulVec__FP5xVec3PC7xMat3x3PC5xVec3")

// func_80082B64
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "xMat3x3SMul__FP7xMat3x3PC7xMat3x3f")

// func_80082BD0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "SetCarryState__10zNPCCommonF18en_NPC_CARRY_STATE")

// func_80082BD8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "CanRope__10zNPCCommonFv")

// func_80082BE4
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "XZDstSqToPlayer__10zNPCCommonFP5xVec3Pf")

// func_80082C48
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "XZDstSqToPos__10zNPCCommonFPC5xVec3P5xVec3Pf")

// func_80082C8C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "XZVecToPos__10zNPCCommonFP5xVec3PC5xVec3Pf")

// func_80082CF8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "Pos__10zNPCCommonFv")

uint8 xSndIsPlaying(uint32 assetID)
{
    return (uint8)iSndIsPlaying(assetID);
}

// func_80082D2C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "xSndIsPlayingByHandle__FUi")

// func_80082D4C
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zSandy_AnimTable__Fv")

// func_800864B8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zPatrick_AnimTable__Fv")

// func_80088FD8
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_AnimTable__Fv")

// func_8008ECE4
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zSpongeBobTongue_AnimTable__Fv")

// func_8008EF38
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_BoulderVehicleAnimTable__Fv")

// func_8008F0A0
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_TreeDomeSBAnimTable__Fv")

// func_80090B98
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "__as__12xSweptSphereFRC12xSweptSphere")

// func_80090D70
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "__as__13xiMat4x3UnionFRC13xiMat4x3Union")

// func_80090DF4
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "IsHealthy__8zNPCTikiFv")

// func_80090E08
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

// func_80090E60
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zGooIs__FP4xEnt")
