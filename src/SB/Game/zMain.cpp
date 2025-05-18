#include "zEntPlayer.h"
#include "zGlobals.h"
#include "zMain.h"

#include <string.h>
#include <types.h>

#include "iSystem.h"
#include "xMemMgr.h"
#include "zVar.h"
#include "zAssetTypes.h"
#include "xTRC.h"
#include "iTime.h"
#include "zDispatcher.h"
#include "xserializer.h"
#include "xScrFX.h"
#include "xFX.h"
#include "xParMgr.h"
#include "zParCmd.h"
#include "zCameraTweak.h"
#include "zShrapnel.h"
#include "zNPCMgr.h"
#include "xCamera.h"
#include "zCamera.h"
#include "zCutsceneMgr.h"
#include "zEntPlayerBungeeState.h"

S32 percentageDone;
_tagxPad* gDebugPad;
S32 sShowMenuOnBoot;
S32 gGameSfxreport;
char* strB ;

void main(S32 argc, char** argv)
{
	U32 options; 
	S32 i;
    char* temp;

    memset(&globals,0,0x1fc8);
    globals.firstStartPressed = TRUE;
    iSystemInit(FALSE); // 0x6d2
    zMainOutputMgrSetup();
    xMemRegisterBaseNotifyFunc(zMainMemLvlChkCB);
    zMainInitGlobals();
    var_init();
    zAssetStartup();
    zMainLoadFontHIP();
    xfont::init();
    zMainFirstScreen(1);
    zMainShowProgressBar();
    xTRCInit();
    zMainReadINI();
    iFuncProfileParse(temp = "scooby.elf", globals.profile);
    xUtilStartup();
    xSerialStartup(0x80, (st_SERIAL_PERCID_SIZE*)&g_xser_sizeinfo);
    zDispatcher_Startup();
    xScrFxInit();
    xFXStartup();
    zMainShowProgressBar();
    xParMgrInit();
    zParCmdInit();
    iEnvStartup();
    zEntPickup_Startup();
    zCameraTweakGlobal_Init();
    globals.option_vibration = 1;   // 0x6c0
    globals.pad0 = xPadEnable(globals.currentActivePad);   // 0x6d1
    globals.pad1 = 0;
    gDebugPad = 0;
    xPadRumbleEnable(globals.currentActivePad, globals.option_vibration);       //  0x6d1, 0x6c0
    xSGStartup();
    xDebugTimestampScreen();
    zShrapnel_GameInit();
    zMainShowProgressBar();
    xBehaveMgr_Startup();
    zNPCMgr_Startup();
    zMainLoop();
    zNPCMgr_Shutdown();
    xBehaveMgr_Shutdown();
    zAssetShutdown();
    xFXShutdown();
    zDispatcher_Shutdown();
    xSGShutdown();
    xSerialShutdown();
    xUtilShutdown();
    iSystemExit();
}

void zMainOutputMgrSetup()
{
    iTime tim = iTimeGet();
    iTimeDiffSec(tim);
    iTimeGet();
}

void zMainInitGlobals()
{
    memset(&globals, 0, sizeof(zGlobals));
    globals.sceneFirst = 1;
    iTime tim = iTimeGet();
    iTimeDiffSec(tim);
    iTimeGet();
}

void ParseFloatList(F32* dest, char* strbuf, S32 max)
{
    xStrParseFloatList(dest, strbuf, max);
}

void zMainParseINIGlobals(xIniFile* ini)
{
    U32 use_degrees;
    F32 fVar1;
    S32 iVar2;
    U32 uVar3;
    char* pbVar4; // ghidra declared as a byte
    F32 *pfVar5 = 0;
    bool bVar6;
    double dVar7;
    

    iVar2 = xIniGetInt(ini,"g.AnalogMin", 0x20);
    globals.player.g.AnalogMin = iVar2;
    iVar2 = xIniGetInt(ini,"g.AnalogMax", 0x6e);
    globals.player.g.AnalogMax = iVar2;
    dVar7 = xIniGetFloat(ini,"ScrFxLetterBoxSize", 0.0f);
    xScrFxLetterBoxSetSize(dVar7);
    uVar3 = xIniGetInt(ini,"ScrFxLetterBoxAlpha", 0xff);
    xScrFxLetterBoxSetAlpha(uVar3 & 0xff);
    globals.player.g.InitialShinyCount = xIniGetInt(ini,"g.InitialShinyCount", 0);
    globals.player.g.InitialSpatulaCount = xIniGetInt(ini,"g.InitialSpatulaCount", 0);
    globals.player.g.ShinyValuePurple = xIniGetInt(ini,"g.ShinyValuePurple", 100);
    globals.player.g.ShinyValueBlue = xIniGetInt(ini,"g.ShinyValueBlue", 0x19);
    globals.player.g.ShinyValueGreen = xIniGetInt(ini,"g.ShinyValueGreen", 10);
    globals.player.g.ShinyValueYellow = xIniGetInt(ini,"g.ShinyValueYellow", 5);
    globals.player.g.ShinyValueRed = xIniGetInt(ini,"g.ShinyValueRed", 1);
    globals.player.g.ShinyValueCombo0 = xIniGetInt(ini,"g.ShinyValueCombo0", 0);
    globals.player.g.ShinyValueCombo1 = xIniGetInt(ini,"g.ShinyValueCombo1", 0);
    globals.player.g.ShinyValueCombo2 = xIniGetInt(ini,"g.ShinyValueCombo2", 2);
    globals.player.g.ShinyValueCombo3 = xIniGetInt(ini,"g.ShinyValueCombo3", 3);
    globals.player.g.ShinyValueCombo4 = xIniGetInt(ini,"g.ShinyValueCombo4", 3);
    globals.player.g.ShinyValueCombo5 = xIniGetInt(ini,"g.ShinyValueCombo5", 5);
    globals.player.g.ShinyValueCombo6 = xIniGetInt(ini,"g.ShinyValueCombo6", 10);
    globals.player.g.ShinyValueCombo7 = xIniGetInt(ini,"g.ShinyValueCombo7", 0xf);
    globals.player.g.ShinyValueCombo8 = xIniGetInt(ini,"g.ShinyValueCombo8", 0x14);
    globals.player.g.ShinyValueCombo9 = xIniGetInt(ini,"g.ShinyValueCombo9", 0x19);
    globals.player.g.ShinyValueCombo10 = xIniGetInt(ini,"g.ShinyValueCombo10", 0x1e);
    globals.player.g.ShinyValueCombo11 = xIniGetInt(ini,"g.ShinyValueCombo11", 0x28);
    globals.player.g.ShinyValueCombo12 = xIniGetInt(ini,"g.ShinyValueCombo12", 0x32);
    globals.player.g.ShinyValueCombo13 = xIniGetInt(ini,"g.ShinyValueCombo13", 0x3c);
    globals.player.g.ShinyValueCombo14 = xIniGetInt(ini,"g.ShinyValueCombo14", 0x4b);
    globals.player.g.ShinyValueCombo15 = xIniGetInt(ini,"g.ShinyValueCombo15", 100);

    dVar7 = xIniGetFloat(ini,"g.ComboTimer", 1.0f); // @1002
    globals.player.g.ComboTimer = dVar7;
    dVar7 = xIniGetFloat(ini,"g.SundaeTime", 6.0f); // @1003
    globals.player.g.SundaeTime = dVar7;
    dVar7 = xIniGetFloat(ini,"g.SundaeMult", 1.5f); // @1004
    globals.player.g.SundaeMult = dVar7;
    dVar7 = xIniGetFloat(ini,"g.BBashTime", 0.3f); // @1005
    globals.player.g.BBashTime = dVar7;
    dVar7 = xIniGetFloat(ini,"g.BBashDelay", 0.15f); // @1006
    globals.player.g.BBashDelay = dVar7;
    dVar7 = xIniGetFloat(ini,"g.BBashCVTime", 0.15f); // @1006
    globals.player.g.BBashCVTime = dVar7;
    dVar7 = xIniGetFloat(ini,"g.BBashHeight", 3.0f); // @1007
    globals.player.g.BBashHeight = dVar7;
    dVar7 = xIniGetFloat(ini,"g.BBounceSpeed", 10.0f); // @1008
    globals.player.g.BBounceSpeed = dVar7;
    dVar7 = xIniGetFloat(ini,"g.BSpinMinFrame", 2.0f); // @1009
    globals.player.g.BSpinMinFrame = dVar7;
    dVar7 = xIniGetFloat(ini,"g.BSpinMaxFrame", 20.0f); // @1010
    globals.player.g.BSpinMaxFrame = dVar7;
    dVar7 = xIniGetFloat(ini,"g.BSpinRadius", 0.3f); // @1005
    globals.player.g.BSpinRadius = dVar7;
    globals.player.g.BSpinMinFrame = globals.player.g.BSpinMinFrame * 0.033333335f; // @909
    globals.player.g.BSpinMaxFrame = globals.player.g.BSpinMaxFrame * 0.033333335f; // @909
    dVar7 = xIniGetFloat(ini,"g.SandyMeleeMinFrame", 1.0f); // @1002
    globals.player.g.SandyMeleeMinFrame = dVar7;
    dVar7 = xIniGetFloat(ini,"g.SandyMeleeMaxFrame", 9.0f); // @1011
    globals.player.g.SandyMeleeMaxFrame = dVar7;
    dVar7 = xIniGetFloat(ini,"g.SandyMeleeRadius", 0.3f); // @1005
    globals.player.g.SandyMeleeRadius = dVar7;
    globals.player.g.SandyMeleeMinFrame = globals.player.g.SandyMeleeMinFrame * 0.033333335f; // @909
    globals.player.g.SandyMeleeMaxFrame = globals.player.g.SandyMeleeMaxFrame * 0.033333335f; // @909
    dVar7 = xIniGetFloat(ini,"g.DamageTimeHit", 0.5f); // @1012
    globals.player.g.DamageTimeHit = dVar7;
    dVar7 = xIniGetFloat(ini,"g.DamageTimeSurface", 1.0f); // @1002
    globals.player.g.DamageTimeSurface = dVar7;
    dVar7 = xIniGetFloat(ini,"g.DamageTimeEGen", 1.0f); // @1002
    globals.player.g.DamageTimeEGen = dVar7;
    dVar7 = xIniGetFloat(ini,"g.DamageSurfKnock", 1.75f); // @1013
    globals.player.g.DamageSurfKnock = dVar7;
    dVar7 = xIniGetFloat(ini,"g.DamageGiveHealthKnock", 1.75f); // @1013
    globals.player.g.DamageGiveHealthKnock = dVar7;
    dVar7 = xIniGetFloat(ini,"g.BubbleBowlTimeDelay", 1.0f); // @1002
    globals.player.g.BubbleBowlTimeDelay = dVar7;
    dVar7 = xIniGetFloat(ini,"g.BubbleBowlLaunchPosLeft", 0.0f); // @ 1001
    globals.player.g.BubbleBowlLaunchPosLeft = dVar7;
    dVar7 = xIniGetFloat(ini,"g.BubbleBowlLaunchPosUp", 1.0f); // @ 1002
    globals.player.g.BubbleBowlLaunchPosUp = dVar7;
    dVar7 = xIniGetFloat(ini,"g.BubbleBowlLaunchPosAt", 1.5f); // @ 1004
    globals.player.g.BubbleBowlLaunchPosAt = dVar7;
    dVar7 = xIniGetFloat(ini,"g.BubbleBowlLaunchVelLeft", 0.0f); // @ 1001
    globals.player.g.BubbleBowlLaunchVelLeft = dVar7;
    dVar7 = xIniGetFloat(ini,"g.BubbleBowlLaunchVelUp", 0.0f); // @ 1001
    globals.player.g.BubbleBowlLaunchVelUp = dVar7;
    dVar7 = xIniGetFloat(ini,"g.BubbleBowlLaunchVelAt", 10.0f); // @ 1008
    globals.player.g.BubbleBowlLaunchVelAt = dVar7;
    dVar7 = xIniGetFloat(ini,"g.BubbleBowlPercentIncrease", 0.85f); // @ 1014
    globals.player.g.BubbleBowlPercentIncrease = dVar7;
    dVar7 = xIniGetFloat(ini,"g.BubbleBowlMinSpeed", 0.1f); // @ 1015
    globals.player.g.BubbleBowlMinSpeed = dVar7;
    dVar7 = xIniGetFloat(ini,"g.BubbleBowlMinRecoverTime", 0.15f); // @ 1006
    globals.player.g.BubbleBowlMinRecoverTime = dVar7;
    dVar7 = xIniGetFloat(ini,"g.SlideAccelVelMin", 6.0f); // @ 1003
    globals.player.g.SlideAccelVelMin = dVar7;
    dVar7 = xIniGetFloat(ini,"g.SlideAccelVelMax", 9.0f); // @ 1011
    globals.player.g.SlideAccelVelMax = dVar7;
    dVar7 = xIniGetFloat(ini,"g.SlideAccelStart", 9.0f); // @ 1011
    globals.player.g.SlideAccelStart = dVar7;
    dVar7 = xIniGetFloat(ini,"g.SlideAccelEnd", 4.5f); // @ 1016
    globals.player.g.SlideAccelEnd = dVar7;
    dVar7 = xIniGetFloat(ini,"g.SlideAccelPlayerFwd", 5.0f); // @ 1017
    globals.player.g.SlideAccelPlayerFwd = dVar7;
    dVar7 = xIniGetFloat(ini,"g.SlideAccelPlayerBack", 5.0f); // @ 1017
    globals.player.g.SlideAccelPlayerBack = dVar7;
    dVar7 = xIniGetFloat(ini,"g.SlideAccelPlayerSide", 15.0f); // @ 1018
    globals.player.g.SlideAccelPlayerSide = dVar7;
    dVar7 = xIniGetFloat(ini,"g.SlideVelMaxStart", 12.0f);  // @ 1019
    globals.player.g.SlideVelMaxStart = dVar7;
    dVar7 = xIniGetFloat(ini,"g.SlideVelMaxEnd", 17.0f); // @ 1020
    globals.player.g.SlideVelMaxEnd = dVar7;
    dVar7 = xIniGetFloat(ini,"g.SlideVelMaxIncTime", 6.0f); // @ 1003
    globals.player.g.SlideVelMaxIncTime = dVar7;
    dVar7 = xIniGetFloat(ini,"g.SlideVelMaxIncAccel", 1.0f); // @ 1002
    globals.player.g.SlideVelMaxIncAccel = dVar7;
    dVar7 = xIniGetFloat(ini,"g.SlideAirHoldTime", 1.0f); // @ 1002
    globals.player.g.SlideAirHoldTime = dVar7;
    dVar7 = xIniGetFloat(ini,"g.SlideAirSlowTime", 1.5f); // @ 1004
    globals.player.g.SlideAirSlowTime = dVar7;
    dVar7 = xIniGetFloat(ini,"g.SlideAirDblHoldTime", 1.0f); // @ 1002
    globals.player.g.SlideAirDblHoldTime = dVar7;
    dVar7 = xIniGetFloat(ini,"g.SlideAirDblSlowTime", 1.5f); // @ 1004
    globals.player.g.SlideAirDblSlowTime = dVar7;
    dVar7 = xIniGetFloat(ini,"g.SlideVelDblBoost", 6.0f); // @ 1003
    globals.player.g.SlideVelDblBoost = dVar7;

    globals.player.g.TakeDamage = xIniGetInt(ini,"g.TakeDamage", 1);
    globals.player.g.CheatSpongeball = xIniGetInt(ini,"g.CheatSpongeball", 0);
    globals.player.g.CheatPlayerSwitch = xIniGetInt(ini,"g.CheatPlayerSwitch", 0);
    globals.player.g.CheatAlwaysPortal = xIniGetInt(ini,"g.CheatAlwaysPortal", 0);
    globals.player.g.CheatFlyToggle = xIniGetInt(ini,"g.CheatFlyToggle", 0);
    globals.player.g.DisableForceConversation = xIniGetInt(ini,"g.DisableForceConversation", 0);

    globals.player.g.CheatFlyToggle = 0;
    globals.player.g.CheatAlwaysPortal = 0;

    dVar7 = xIniGetFloat(ini,"g.StartSlideAngle", 30.0f); // @ 1021
    globals.player.g.StartSlideAngle = dVar7;
    dVar7 = xIniGetFloat(ini,"g.StopSlideAngle", 10.0f); // @ 1008
    globals.player.g.StopSlideAngle = dVar7;
    dVar7 = xIniGetFloat(ini,"g.RotMatchMaxAngle", 30.0f); // @ 1021
    globals.player.g.RotMatchMaxAngle = dVar7;
    dVar7 = xIniGetFloat(ini,"g.RotMatchMatchTime", 0.1f); // @ 1015
    globals.player.g.RotMatchMatchTime = dVar7;
    dVar7 = xIniGetFloat(ini,"g.RotMatchRelaxTime", 0.3f); // @ 1005
    globals.player.g.RotMatchRelaxTime = dVar7;
    dVar7 = xIniGetFloat(ini,"g.Gravity", 30.0f); // @ 1021
    globals.player.g.Gravity = dVar7;
    dVar7 = 180.0f; // @ 1023

    globals.player.g.StartSlideAngle = (3.1415927f * globals.player.g.StartSlideAngle) / dVar7; // @ 1022
    globals.player.g.StopSlideAngle = (3.1415927f * globals.player.g.StopSlideAngle) / dVar7; // @ 1022
    globals.player.g.RotMatchMaxAngle = (3.1415927f * globals.player.g.RotMatchMaxAngle) / dVar7; // @ 1022

    dVar7 = xIniGetFloat(ini,"zcam_highbounce_pitch", dVar7);
    bVar6 = 180.0f != dVar7;
    dVar7 = xIniGetFloat(ini,"xcam_collis_radius", xcam_collis_radius);
    xcam_collis_radius = dVar7;
    dVar7 = xIniGetFloat(ini,"xcam_collis_stiffness", xcam_collis_stiffness);
    xcam_collis_stiffness = dVar7;
    dVar7 = xIniGetFloat(ini,"zcam_pad_pyaw_scale", zcam_pad_pyaw_scale);
    zcam_pad_pyaw_scale = dVar7;
    dVar7 = xIniGetFloat(ini,"zcam_pad_pitch_scale", zcam_pad_pitch_scale);
    zcam_pad_pitch_scale = dVar7;
    dVar7 = xIniGetFloat(ini,"zcam_near_d", zcam_near_d);
    zcam_near_d = dVar7;
    dVar7 = xIniGetFloat(ini,"zcam_near_h", zcam_near_h);
    zcam_near_h = dVar7;
    dVar7 = xIniGetFloat(ini,"zcam_pad_pyaw_scale", zcam_pad_pyaw_scale);
    zcam_pad_pyaw_scale = dVar7;

    fVar1 = zcam_near_pitch;
    if (bVar6)
    {
        fVar1 = (180.0f * zcam_near_pitch) / 3.1415927f; // @1022
    }

    dVar7 = xIniGetFloat(ini,"zcam_near_pitch", fVar1);
    zcam_near_pitch = dVar7;
    dVar7 = xIniGetFloat(ini,"zcam_far_d", zcam_far_d);
    zcam_far_d = dVar7;
    dVar7 = xIniGetFloat(ini,"zcam_far_h", zcam_far_h);
    zcam_far_h = dVar7;
    
    fVar1 = zcam_far_pitch;
    if (bVar6)
    {
        fVar1 = (180.0f * zcam_far_pitch) / 3.1415927f; // @1022
    }

    dVar7 = xIniGetFloat(ini,"zcam_far_pitch", fVar1);
    zcam_far_pitch = dVar7;
    dVar7 = xIniGetFloat(ini,"zcam_above_d", zcam_above_d);
    zcam_above_d = dVar7;
    dVar7 = xIniGetFloat(ini,"zcam_above_h", zcam_above_h);
    zcam_above_h = dVar7;

    fVar1 = zcam_above_pitch;
    if (bVar6)
    {
        fVar1 = (180.0f * zcam_above_pitch) / 3.1415927f; // @1022
    }

    dVar7 = xIniGetFloat(ini,"zcam_above_pitch", fVar1);
    zcam_above_pitch = dVar7;
    dVar7 = xIniGetFloat(ini,"zcam_below_d", zcam_below_d);
    zcam_below_d = dVar7;
    dVar7 = xIniGetFloat(ini,"zcam_below_h", zcam_below_h);
    zcam_below_h = dVar7;

    fVar1 = zcam_below_pitch;
    if (bVar6)
    {
        fVar1 = (180.0f * zcam_below_pitch) / 3.1415927f; // @1022
    }

    dVar7 = xIniGetFloat(ini,"zcam_below_pitch", fVar1);
    zcam_below_pitch = dVar7;
    dVar7 = xIniGetFloat(ini,"zcam_highbounce_d", zcam_highbounce_d);
    zcam_highbounce_d = dVar7;
    dVar7 = xIniGetFloat(ini,"zcam_highbounce_h", zcam_highbounce_h);
    zcam_highbounce_h = dVar7;

    fVar1 = zcam_highbounce_pitch;
    if (bVar6)
    {
        fVar1 = (180.0f * zcam_highbounce_pitch) / 3.1415927f; // @1022
    }

    dVar7 = xIniGetFloat(ini,"zcam_highbounce_pitch", fVar1);
    zcam_highbounce_pitch = dVar7;
    dVar7 = xIniGetFloat(ini,"zcam_wall_d", zcam_wall_d);
    zcam_wall_d = dVar7;
    dVar7 = xIniGetFloat(ini,"zcam_wall_h", zcam_wall_h);
    zcam_wall_h = dVar7;

    fVar1 = zcam_wall_pitch;
    if (bVar6)
    {
        fVar1 = (180.0f * zcam_wall_pitch) / 3.1415927f; // @1022
    }

    dVar7 = xIniGetFloat(ini,"zcam_wall_pitch", fVar1);
    zcam_wall_pitch = dVar7;
    dVar7 = xIniGetFloat(ini,"zcam_overrot_min", (180.0f * zcam_overrot_min) / 3.1415927f);
    zcam_overrot_min = dVar7;
    dVar7 = xIniGetFloat(ini,"zcam_overrot_mid", (180.0f * zcam_overrot_mid) / 3.1415927f);
    zcam_overrot_mid = dVar7;
    dVar7 = xIniGetFloat(ini,"zcam_overrot_max", (180.0f * zcam_overrot_max) / 3.1415927f);
    zcam_overrot_max = dVar7;

    dVar7 = xIniGetFloat(ini,"zcam_overrot_rate", zcam_overrot_rate);
    zcam_overrot_rate = dVar7;        //Higher match% when these are commented out
    dVar7 = xIniGetFloat(ini,"zcam_overrot_tstart", zcam_overrot_tstart);
    zcam_overrot_tstart = dVar7;
    dVar7 = xIniGetFloat(ini,"zcam_overrot_tend", zcam_overrot_tend);
    zcam_overrot_tend = dVar7;
    dVar7 = xIniGetFloat(ini,"zcam_overrot_velmin", zcam_overrot_velmin);
    zcam_overrot_velmin = dVar7;
    dVar7 = xIniGetFloat(ini,"zcam_overrot_velmax", zcam_overrot_velmax);
    zcam_overrot_velmax = dVar7;
    dVar7 = xIniGetFloat(ini,"zcam_overrot_tmanual", zcam_overrot_tmanual);
    zcam_overrot_tmanual = dVar7;

    if (bVar6) 
    {
        zcam_near_pitch = (180.0f * zcam_near_pitch) / 3.1415927f;
        zcam_far_pitch = (180.0f * zcam_far_pitch) / 3.1415927f;
        zcam_above_pitch = (180.0f * zcam_above_pitch) / 3.1415927f;
        zcam_below_pitch = (180.0f * zcam_below_pitch) / 3.1415927f;
        zcam_highbounce_pitch = (180.0f * zcam_highbounce_pitch) / 3.1415927f;
        zcam_wall_pitch = (180.0f * zcam_wall_pitch) / 3.1415927f;
    }

    zcam_overrot_min = (180.0f * zcam_overrot_min) / 3.1415927f;
    zcam_overrot_mid = (180.0f * zcam_overrot_mid) / 3.1415927f;
    zcam_overrot_max = (180.0f * zcam_overrot_max) / 3.1415927f;

    dVar7 = xIniGetFloat(ini,"gSkipTimeCutscene", gSkipTimeCutscene);
    gSkipTimeCutscene = dVar7;
    dVar7 = xIniGetFloat(ini,"gSkipTimeFlythrough", gSkipTimeFlythrough);
    fVar1 = 1.0f; // @ 1002
    if (1.0f < gSkipTimeCutscene) {
        fVar1 = gSkipTimeCutscene;
    }
    gSkipTimeFlythrough = 0.0f;
    if (1.0f < dVar7) {
     gSkipTimeFlythrough = dVar7;
    }
    gSkipTimeCutscene = fVar1;

    dVar7 = xIniGetFloat(ini,"carry.minDist", 0.675f); // @1024
    globals.player.carry.minDist = dVar7;
    dVar7 = xIniGetFloat(ini,"carry.maxDist", 1.9f); // @1025
    globals.player.carry.maxDist = dVar7;
    dVar7 = xIniGetFloat(ini,"carry.minHeight", -0.2f); // @1026
    globals.player.carry.minHeight = dVar7;
    dVar7 = xIniGetFloat(ini,"carry.maxHeight", 0.4f); // @1027
    globals.player.carry.maxHeight = dVar7;
    dVar7 = xIniGetFloat(ini,"carry.maxCosAngle", 45.0f); // @1028
    globals.player.carry.maxCosAngle = dVar7;
    dVar7 = xIniGetFloat(ini,"carry.throwMinDist", 1.5f); // @1004
    globals.player.carry.throwMinDist = dVar7;
    dVar7 = xIniGetFloat(ini,"carry.throwMaxDist", 12.0f); // @1019
    globals.player.carry.throwMaxDist = dVar7;
    dVar7 = xIniGetFloat(ini,"carry.throwMinHeight", -3.0f); // @1029
    globals.player.carry.throwMinHeight = dVar7;
    dVar7 = xIniGetFloat(ini,"carry.throwMaxHeight", 5.0f); // @1017
    globals.player.carry.throwMaxHeight = dVar7;
    dVar7 = xIniGetFloat(ini,"carry.throwMaxStack", 2.75f); // @1030
    globals.player.carry.throwMaxStack = dVar7;
    dVar7 = xIniGetFloat(ini,"carry.throwMaxCosAngle", 25.0f); // @1031
    globals.player.carry.throwMaxCosAngle = dVar7;
    dVar7 = xIniGetFloat(ini,"carry.grabLerpMin", 0.0f); // @1001
    globals.player.carry.grabLerpMin = dVar7;
    dVar7 = xIniGetFloat(ini,"carry.grabLerpMax", 0.2f); // @1032
    globals.player.carry.grabLerpMax = dVar7;
    dVar7 = xIniGetFloat(ini,"carry.throwGravity", 30.0f); // @1021
    globals.player.carry.throwGravity = dVar7;
    dVar7 = xIniGetFloat(ini,"carry.throwHeight", 3.75f); // @1033
    globals.player.carry.throwHeight = dVar7;
    dVar7 = xIniGetFloat(ini,"carry.throwDistance", 10.0f); // @1008
    globals.player.carry.throwDistance = dVar7;
    dVar7 = xIniGetFloat(ini,"carry.fruitFloorDecayMin", 0.3f); // @1005
    globals.player.carry.fruitFloorDecayMin = dVar7;
    dVar7 = xIniGetFloat(ini,"carry.fruitFloorDecayMax", 6.0f); // @1003
    globals.player.carry.fruitFloorDecayMax = dVar7;
    dVar7 = xIniGetFloat(ini,"carry.fruitFloorBounce", 0.15f); // @1006
    globals.player.carry.fruitFloorBounce = dVar7;
    dVar7 = xIniGetFloat(ini,"carry.fruitFloorFriction", 0.4f); // @1027
    globals.player.carry.fruitFloorFriction = dVar7;
    dVar7 = xIniGetFloat(ini,"carry.fruitCeilingBounce", 0.1f); // @1015
    globals.player.carry.fruitCeilingBounce = dVar7;
    dVar7 = xIniGetFloat(ini,"carry.fruitWallBounce", 0.5f); // @1012
    globals.player.carry.fruitWallBounce = dVar7;
    dVar7 = xIniGetFloat(ini,"carry.fruitLifetime", 15.0f); // @1018
    globals.player.carry.fruitLifetime = dVar7;

    dVar7 = icos((3.1415927f * globals.player.carry.maxCosAngle) / 180.0f);
    globals.player.carry.maxCosAngle = dVar7;
    dVar7 = icos((3.1415927f * globals.player.carry.throwMaxCosAngle) / 180.0f);
    globals.player.carry.throwMaxCosAngle = dVar7;

    iVar2 = xIniGetInt(ini,"g.BubbleBowl", 0);
    globals.player.g.PowerUp[0] = iVar2; // Not sure about this
    iVar2 = xIniGetInt(ini,"g.CruiseBubble", 0);
    globals.player.g.PowerUp[1] = iVar2; // Not sure about this

    memcpy(&globals.player.g.PowerUp[2], &globals.player.g.PowerUp[0], 2);
   
   
    pbVar4 = xIniGetString(ini,"sb.MoveSpeed", NULL);
    //pfVar5 = memcpy (&globals.player.AutoMoveSpeed, fbuf$915, 0x18);
    ParseFloatList(pfVar5,pbVar4,6);
    pbVar4 = xIniGetString(ini,"sb.AnimSneak",0);
    //pfVar5 = (float *)memcpy(&DAT_803c0f3c,fbuf$916,0xc);
    ParseFloatList(pfVar5,pbVar4,3);
    pbVar4 = xIniGetString(ini,"sb.AnimWalk",0);
    //pfVar5 = (float *)memcpy(&DAT_803c0f48,fbuf$917,0xc);
    ParseFloatList(pfVar5,pbVar4,3);
    pbVar4 = xIniGetString(ini,"sb.AnimRun",0);
    //pfVar5 = (float *)memcpy(&DAT_803c0f54,fbuf$918,0xc);
    ParseFloatList(pfVar5,pbVar4,3);
    dVar7 = xIniGetFloat(ini,"sb.JumpGravity", 7.0f); // @1034
    globals.player.sb.JumpGravity = dVar7;
    dVar7 = xIniGetFloat(ini,"sb.GravSmooth", 0.25f); // @1035
    globals.player.sb.GravSmooth = dVar7;
    dVar7 = xIniGetFloat(ini,"sb.FloatSpeed", 1.0f); // @1002
    globals.player.sb.FloatSpeed = dVar7;
    dVar7 = xIniGetFloat(ini,"sb.ButtsmashSpeed", 5.0f); // @1017
    globals.player.sb.ButtsmashSpeed = dVar7;
    dVar7 = xIniGetFloat(ini,"sb.ledge.animGrab", 3.0f); // @1007
    globals.player.sb.ledge.animGrab = dVar7;

    //zLedgeAdjust(&globals.player.sb.ledge);
    //bungee_state::load_settings(xIniFile& ini);
    //oob_state::load_settings(xIniFile&)
    //ztalkbox::load_settings(xIniFile&)

    pbVar4 = xIniGetString(ini,"sb.Jump",0); // DAT_8025df69
    //pfVar5 = (float *)memcpy(&DAT_803c0f70,fbuf$919,0x10);
    ParseFloatList(pfVar5,pbVar4,4);
    pbVar4 = xIniGetString(ini,"sb.Double",0);
    //pfVar5 = (float *)memcpy(&DAT_803c0fb0,fbuf$920,0x10);
    ParseFloatList(pfVar5,pbVar4,4);
    pbVar4 = xIniGetString(ini,"sb.Bounce",0);
    //pfVar5 = (float *)memcpy(&DAT_803c0f80,fbuf$921,0x10);
    ParseFloatList(pfVar5,pbVar4,4);
    pbVar4 = xIniGetString(ini,"sb.Spring",0);
    //pfVar5 = (float *)memcpy(&DAT_803c0f90,fbuf$922,0x10);
    ParseFloatList(pfVar5,pbVar4,4);
    pbVar4 = xIniGetString(ini,"sb.Wall",0); // DAT_8025df8f
    //pfVar5 = (float *)memcpy(&DAT_803c0fa0,fbuf$923,0x10);
    ParseFloatList(pfVar5,pbVar4,4);

    dVar7 = xIniGetFloat(ini,"sb.WallJumpVelocity", 0.0f); // @1001
    globals.player.sb.WallJumpVelocity = dVar7;
    dVar7 = xIniGetFloat(ini,"sb.spin_damp_xz", 15.0f); // @1018
    globals.player.sb.spin_damp_xz = dVar7;
    dVar7 = xIniGetFloat(ini,"sb.spin_damp_y", 15.0f); // @1018
    globals.player.sb.spin_damp_y = dVar7;
    // DAT_803c0f1c = &DAT_803c0f20;

    CalcJumpImpulse(&globals.player.sb.Jump, NULL);
    CalcJumpImpulse(&globals.player.sb.Double, NULL);
    CalcJumpImpulse(&globals.player.sb.Bounce, NULL);
    CalcJumpImpulse(&globals.player.sb.Spring, NULL);
    CalcJumpImpulse(&globals.player.sb.Wall, NULL);

    iVar2 = xIniGetInt(ini,"SB.model_index.body", 0);
    globals.player.sb_model_indices[0] = iVar2; // These next 13 are either "sb_models" or "sb_model_indices"
    iVar2 = xIniGetInt(ini,"SB.model_index.arm_l", 1);
    globals.player.sb_model_indices[1] = iVar2;
    iVar2 = xIniGetInt(ini,"SB.model_index.arm_r", 2);
    globals.player.sb_model_indices[2] = iVar2;
    iVar2 = xIniGetInt(ini,"SB.model_index.ass", 3);
    globals.player.sb_model_indices[3] = iVar2;
    iVar2 = xIniGetInt(ini,"SB.model_index.underwear", 4);
    globals.player.sb_model_indices[4] = iVar2;
    iVar2 = xIniGetInt(ini,"SB.model_index.wand", 5);
    globals.player.sb_model_indices[5] = iVar2;
    iVar2 = xIniGetInt(ini,"SB.model_index.tongue", 6);
    globals.player.sb_model_indices[6] = iVar2;
    iVar2 = xIniGetInt(ini,"SB.model_index.bubble_helmet", 7);
    globals.player.sb_model_indices[7] = iVar2;
    iVar2 = xIniGetInt(ini,"SB.model_index.bubble_shoe_l", 8);
    globals.player.sb_model_indices[8] = iVar2;
    iVar2 = xIniGetInt(ini,"SB.model_index.bubble_shoe_r", 9);
    globals.player.sb_model_indices[9] = iVar2;
    iVar2 = xIniGetInt(ini,"SB.model_index.shadow_wand", 10);
    globals.player.sb_model_indices[13] = iVar2;
    iVar2 = xIniGetInt(ini,"SB.model_index.shadow_arm_l", 11);
    globals.player.sb_model_indices[11] = iVar2;
    iVar2 = xIniGetInt(ini,"SB.model_index.shadow_arm_r", 12);
    globals.player.sb_model_indices[12] = iVar2;
    iVar2 = xIniGetInt(ini,"SB.model_index.shadow_body", 13);
    globals.player.sb_model_indices[10] = iVar2;

    pbVar4 = xIniGetString(ini,"patrick.MoveSpeed",0);
    //pfVar5 = memcpy(&DAT_803c136c,fbuf$924,0x18);
    ParseFloatList(pfVar5,pbVar4,6);
    pbVar4 = xIniGetString(ini,"patrick.AnimSneak",0);
    //pfVar5 = (float *)memcpy(&DAT_803c1384,fbuf$925,0xc);
    ParseFloatList(pfVar5,pbVar4,3);
    pbVar4 = xIniGetString(ini,"patrick.AnimWalk",0);
    //pfVar5 = (float *)memcpy(&DAT_803c1390,fbuf$926,0xc);
    ParseFloatList(pfVar5,pbVar4,3);
    pbVar4 = xIniGetString(ini,"patrick.AnimRun",0);
    //pfVar5 = (float *)memcpy(&DAT_803c139c,fbuf$927,0xc);
    ParseFloatList(pfVar5,pbVar4,3);

    dVar7 = xIniGetFloat(ini,"patrick.JumpGravity", 7.0f); // @1034
    globals.player.patrick.JumpGravity = dVar7;
    dVar7 = xIniGetFloat(ini,"patrick.GravSmooth", 0.25f); // @1035
    globals.player.patrick.GravSmooth = dVar7;
    dVar7 = xIniGetFloat(ini,"patrick.FloatSpeed", 1.0f); // @1002
    globals.player.patrick.FloatSpeed = dVar7;
    dVar7 = xIniGetFloat(ini,"patrick.ButtsmashSpeed", 5.0f); // @1017
    globals.player.patrick.ButtsmashSpeed = dVar7;
    dVar7 = xIniGetFloat(ini,"patrick.ledge.animGrab", 3.0f); // @1007
    globals.player.patrick.ledge.animGrab = dVar7;

    //zLedgeAdjust(&globals.player.patrick.ledge);

    pbVar4 = xIniGetString(ini,"patrick.Jump",0); // DAT_8025df69
    //pfVar5 = (float *)memcpy(&DAT_803c0f70,fbuf$919,0x10);
    ParseFloatList(pfVar5,pbVar4,4);
    pbVar4 = xIniGetString(ini,"patrick.Double",0);
    //pfVar5 = (float *)memcpy(&DAT_803c0fb0,fbuf$920,0x10);
    ParseFloatList(pfVar5,pbVar4,4);
    pbVar4 = xIniGetString(ini,"patrick.Bounce",0);
    //pfVar5 = (float *)memcpy(&DAT_803c0f80,fbuf$921,0x10);
    ParseFloatList(pfVar5,pbVar4,4);
    pbVar4 = xIniGetString(ini,"patrick.Spring",0);
    //pfVar5 = (float *)memcpy(&DAT_803c0f90,fbuf$922,0x10);
    ParseFloatList(pfVar5,pbVar4,4);
    pbVar4 = xIniGetString(ini,"patrick.Wall",0); // DAT_8025df8f
    //pfVar5 = (float *)memcpy(&DAT_803c0fa0,fbuf$923,0x10);
    ParseFloatList(pfVar5,pbVar4,4);

    //DAT_803c0f1c = &DAT_803c0f20;

    CalcJumpImpulse(&globals.player.patrick.Jump, NULL);
    CalcJumpImpulse(&globals.player.patrick.Double, NULL);
    CalcJumpImpulse(&globals.player.patrick.Bounce, NULL);
    CalcJumpImpulse(&globals.player.patrick.Spring, NULL);
    CalcJumpImpulse(&globals.player.patrick.Wall, NULL);

    dVar7 = xIniGetFloat(ini,"patrick.WallJumpVelocity", 0.0f); // @1001
    globals.player.patrick.WallJumpVelocity = dVar7;

    pbVar4 = xIniGetString(ini,"sandy.MoveSpeed",0);
    //pfVar5 = (float *)memcpy(&DAT_803c17b4,fbuf$933,0x18);
    ParseFloatList(pfVar5,pbVar4,6);
    pbVar4 = xIniGetString(ini,"sandy.AnimSneak",0);
    //pfVar5 = (float *)memcpy(&DAT_803c17cc,fbuf$934,0xc);
    ParseFloatList(pfVar5,pbVar4,3);
    pbVar4 = xIniGetString(ini,"sandy.AnimWalk",0);
    //pfVar5 = (float *)memcpy(&DAT_803c17d8,fbuf$935,0xc);
    ParseFloatList(pfVar5,pbVar4,3);
    pbVar4 = xIniGetString(ini,"sandy.AnimRun",0);
    //pfVar5 = (float *)memcpy(&DAT_803c17e4,fbuf$936,0xc);
    ParseFloatList(pfVar5,pbVar4,3);

    dVar7 = xIniGetFloat(ini,"sandy.JumpGravity", 7.0f); // @1034
    globals.player.sandy.JumpGravity = dVar7;
    dVar7 = xIniGetFloat(ini,"sandy.GravSmooth", 0.25f); // @1035
    globals.player.sandy.GravSmooth = dVar7;
    dVar7 = xIniGetFloat(ini,"sandy.FloatSpeed", 1.0f); // @1002
    globals.player.sandy.FloatSpeed = dVar7;
    dVar7 = xIniGetFloat(ini,"sandy.ButtsmashSpeed", 5.0f); // @1017
    globals.player.sandy.ButtsmashSpeed = dVar7;
    dVar7 = xIniGetFloat(ini,"sandy.ledge.animGrab", 3.0f); // @1007
    globals.player.sandy.ledge.animGrab = dVar7;

    //zLedgeAdjust(&globals.player.sandy.ledge);

    pbVar4 = xIniGetString(ini,"sandy.Jump",0); // DAT_8025df69
    //pfVar5 = (float *)memcpy(&DAT_803c1800,fbuf$937,0x10);
    ParseFloatList(pfVar5,pbVar4,4);
    pbVar4 = xIniGetString(ini,"sandy.Double",0);
    //pfVar5 = (float *)memcpy(&DAT_803c1840,fbuf$938,0x10);
    ParseFloatList(pfVar5,pbVar4,4);
    pbVar4 = xIniGetString(ini,"sandy.Bounce",0);
    //pfVar5 = (float *)memcpy(&DAT_803c1810,fbuf$939,0x10);
    ParseFloatList(pfVar5,pbVar4,4);
    pbVar4 = xIniGetString(ini,"sandy.Spring",0);
    //pfVar5 = (float *)memcpy(&DAT_803c1820,fbuf$940,0x10);
    ParseFloatList(pfVar5,pbVar4,4);
    pbVar4 = xIniGetString(ini,"sandy.Wall",0); // DAT_8025df8f
    //pfVar5 = (float *)memcpy(&DAT_803c1830,fbuf$941,0x10);
    ParseFloatList(pfVar5,pbVar4,4);
    //DAT_803c0f1c = &DAT_803c0f20;

    CalcJumpImpulse(&globals.player.sandy.Jump, NULL);
    CalcJumpImpulse(&globals.player.sandy.Double, NULL);
    CalcJumpImpulse(&globals.player.sandy.Bounce, NULL);
    CalcJumpImpulse(&globals.player.sandy.Spring, NULL);
    CalcJumpImpulse(&globals.player.sandy.Wall, NULL);

    dVar7 = xIniGetFloat(ini,"sandy.WallJumpVelocity", 0.0f); // @1001
    globals.player.sandy.WallJumpVelocity = dVar7;

    sShowMenuOnBoot = xIniGetInt(ini,"ShowMenuOnBoot", 1);
    gGameSfxreport = xIniGetInt(ini,"SFXReport", 0);

    //  DAT_803c0f1c = &DAT_803c0f20;
    //  DAT_803c0f20 = 0;
    //  DAT_803c1368 = 1;
    //  DAT_803c17b0 = 2;
    globals.player.s->pcType = globals.player.sb.pcType;
    //globals.player.sb.pcType = ePlayer_SB;
    globals.player.patrick.pcType = ePlayer_Patrick;
    globals.player.sandy.pcType = ePlayer_Sandy;


}

void zMainMemLvlChkCB()
{
    zSceneMemLvlChkCB();
}

void zLedgeAdjust(zLedgeGrabParams* params)
{
    params->animGrab *= (1.0f/30);
}

void zMainShowProgressBar()
{
}

void zMainLoop()
{
    S64 t;
	U32* preinit;
	RpAtomic* modl;
	//RpAtomic* modl;
	//RpAtomic* modl;
	U32 newGameSceneID;
	U32 iconDataSize;
	void* iconData;
	U32 gameSceneID;
	U32 menuModeID;
	//int8 @5697;
	U32 preinit_bubble_matfx[6];
	U32 preinit_shiny_models[8];
	U32 preinit_ADC_models[10];
}

void zMainReadINI()
{
    char* str;
	void* buf;
	U32 size;
	xIniFile* ini;
}

void zMainFirstScreen(int)
{
}

void zMainMemCardSpaceQuery()
{
	S32 bytesNeeded;
	S32 availOnDisk;
	S32 neededFiles;
	S32 do_chk;
	S32 fullCard;
	U8 formatInProgress;
	U8 formatFailed;
	eStartupErrors startupError;
	S32 status;
}

void zMainLoadFontHIP()
{

}

void iEnvStartup()
{
}
