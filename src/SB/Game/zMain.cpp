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
#include "zEntPlayerOOBState.h"
#include "zMenu.h"
#include "iTime.h"
#include "xstransvc.h"

zGlobals globals;
xGlobals* xglobals;

S32 percentageDone;
_tagxPad* gDebugPad;
static S32 sShowMenuOnBoot;
S32 gGameSfxReport;
static st_SERIAL_PERCID_SIZE* g_xser_sizeinfo;

void zLedgeAdjust(zLedgeGrabParams* params);
void zMainMemCardRenderText(const char*, bool);
void RenderText(const char*, bool);

void main(S32 argc, char** argv)
{
    U32 options;
    S32 i;
    char* tmpStr;

    memset(&globals, 0, 0x1fc8);
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
    iFuncProfileParse(tmpStr = "scooby.elf", globals.profile);
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
    globals.option_vibration = 1; // 0x6c0
    globals.pad0 = xPadEnable(globals.currentActivePad); // 0x6d1
    globals.pad1 = 0;
    gDebugPad = 0;
    xPadRumbleEnable(globals.currentActivePad, globals.option_vibration); //  0x6d1, 0x6c0
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
    F32 fVar1;
    U32 use_degrees;
    double dVar7;

    globals.player.g.AnalogMin = xIniGetInt(ini, "g.AnalogMin", 0x20);
    globals.player.g.AnalogMax = xIniGetInt(ini, "g.AnalogMax", 0x6e);
    xScrFxLetterBoxSetSize(xIniGetFloat(ini, "ScrFxLetterBoxSize", 0.0f));
    xScrFxLetterBoxSetAlpha(xIniGetInt(ini, "ScrFxLetterBoxAlpha", 0xff));
    globals.player.g.InitialShinyCount = xIniGetInt(ini, "g.InitialShinyCount", 0);
    globals.player.g.InitialSpatulaCount = xIniGetInt(ini, "g.InitialSpatulaCount", 0);
    globals.player.g.ShinyValuePurple = xIniGetInt(ini, "g.ShinyValuePurple", 100);
    globals.player.g.ShinyValueBlue = xIniGetInt(ini, "g.ShinyValueBlue", 0x19);
    globals.player.g.ShinyValueGreen = xIniGetInt(ini, "g.ShinyValueGreen", 10);
    globals.player.g.ShinyValueYellow = xIniGetInt(ini, "g.ShinyValueYellow", 5);
    globals.player.g.ShinyValueRed = xIniGetInt(ini, "g.ShinyValueRed", 1);
    globals.player.g.ShinyValueCombo0 = xIniGetInt(ini, "g.ShinyValueCombo0", 0);
    globals.player.g.ShinyValueCombo1 = xIniGetInt(ini, "g.ShinyValueCombo1", 0);
    globals.player.g.ShinyValueCombo2 = xIniGetInt(ini, "g.ShinyValueCombo2", 2);
    globals.player.g.ShinyValueCombo3 = xIniGetInt(ini, "g.ShinyValueCombo3", 3);
    globals.player.g.ShinyValueCombo4 = xIniGetInt(ini, "g.ShinyValueCombo4", 3);
    globals.player.g.ShinyValueCombo5 = xIniGetInt(ini, "g.ShinyValueCombo5", 5);
    globals.player.g.ShinyValueCombo6 = xIniGetInt(ini, "g.ShinyValueCombo6", 10);
    globals.player.g.ShinyValueCombo7 = xIniGetInt(ini, "g.ShinyValueCombo7", 0xf);
    globals.player.g.ShinyValueCombo8 = xIniGetInt(ini, "g.ShinyValueCombo8", 0x14);
    globals.player.g.ShinyValueCombo9 = xIniGetInt(ini, "g.ShinyValueCombo9", 0x19);
    globals.player.g.ShinyValueCombo10 = xIniGetInt(ini, "g.ShinyValueCombo10", 0x1e);
    globals.player.g.ShinyValueCombo11 = xIniGetInt(ini, "g.ShinyValueCombo11", 0x28);
    globals.player.g.ShinyValueCombo12 = xIniGetInt(ini, "g.ShinyValueCombo12", 0x32);
    globals.player.g.ShinyValueCombo13 = xIniGetInt(ini, "g.ShinyValueCombo13", 0x3c);
    globals.player.g.ShinyValueCombo14 = xIniGetInt(ini, "g.ShinyValueCombo14", 0x4b);
    globals.player.g.ShinyValueCombo15 = xIniGetInt(ini, "g.ShinyValueCombo15", 100);

    globals.player.g.ComboTimer = xIniGetFloat(ini, "g.ComboTimer", 1.0f); // @1002;
    globals.player.g.SundaeTime = xIniGetFloat(ini, "g.SundaeTime", 6.0f); // @1003;
    globals.player.g.SundaeMult = xIniGetFloat(ini, "g.SundaeMult", 1.5f); // @1004;
    globals.player.g.BBashTime = xIniGetFloat(ini, "g.BBashTime", 0.3f); // @1005;
    globals.player.g.BBashDelay = xIniGetFloat(ini, "g.BBashDelay", 0.15f); // @1006;
    globals.player.g.BBashCVTime = xIniGetFloat(ini, "g.BBashCVTime", 0.15f); // @1006;
    globals.player.g.BBashHeight = xIniGetFloat(ini, "g.BBashHeight", 3.0f); // @1007;
    globals.player.g.BBounceSpeed = xIniGetFloat(ini, "g.BBounceSpeed", 10.0f); // @1008;
    globals.player.g.BSpinMinFrame = xIniGetFloat(ini, "g.BSpinMinFrame", 2.0f); // @1009;
    globals.player.g.BSpinMaxFrame = xIniGetFloat(ini, "g.BSpinMaxFrame", 20.0f); // @1010;
    globals.player.g.BSpinRadius = xIniGetFloat(ini, "g.BSpinRadius", 0.3f); // @1005;
    globals.player.g.BSpinMinFrame *= 0.033333335f; // @909
    globals.player.g.BSpinMaxFrame *= 0.033333335f; // @909
    globals.player.g.SandyMeleeMinFrame = xIniGetFloat(ini, "g.SandyMeleeMinFrame", 1.0f); // @1002;
    globals.player.g.SandyMeleeMaxFrame = xIniGetFloat(ini, "g.SandyMeleeMaxFrame", 9.0f); // @1011;
    globals.player.g.SandyMeleeRadius = xIniGetFloat(ini, "g.SandyMeleeRadius", 0.3f); // @1005;
    globals.player.g.SandyMeleeMinFrame *= 0.033333335f; // @909
    globals.player.g.SandyMeleeMaxFrame *= 0.033333335f; // @909
    globals.player.g.DamageTimeHit = xIniGetFloat(ini, "g.DamageTimeHit", 0.5f); // @1012;
    globals.player.g.DamageTimeSurface = xIniGetFloat(ini, "g.DamageTimeSurface", 1.0f); // @1002;
    globals.player.g.DamageTimeEGen = xIniGetFloat(ini, "g.DamageTimeEGen", 1.0f); // @1002;
    globals.player.g.DamageSurfKnock = xIniGetFloat(ini, "g.DamageSurfKnock", 1.75f); // @1013;
    globals.player.g.DamageGiveHealthKnock =
        xIniGetFloat(ini, "g.DamageGiveHealthKnock", 1.75f); // @1013;
    globals.player.g.BubbleBowlTimeDelay =
        xIniGetFloat(ini, "g.BubbleBowlTimeDelay", 1.0f); // @1002;
    globals.player.g.BubbleBowlLaunchPosLeft =
        xIniGetFloat(ini, "g.BubbleBowlLaunchPosLeft", 0.0f); // @ 1001;
    globals.player.g.BubbleBowlLaunchPosUp =
        xIniGetFloat(ini, "g.BubbleBowlLaunchPosUp", 1.0f); // @ 1002;
    globals.player.g.BubbleBowlLaunchPosAt =
        xIniGetFloat(ini, "g.BubbleBowlLaunchPosAt", 1.5f); // @ 1004;
    globals.player.g.BubbleBowlLaunchVelLeft =
        xIniGetFloat(ini, "g.BubbleBowlLaunchVelLeft", 0.0f); // @ 1001;
    globals.player.g.BubbleBowlLaunchVelUp =
        xIniGetFloat(ini, "g.BubbleBowlLaunchVelUp", 0.0f); // @ 1001;
    globals.player.g.BubbleBowlLaunchVelAt =
        xIniGetFloat(ini, "g.BubbleBowlLaunchVelAt", 10.0f); // @ 1008;
    globals.player.g.BubbleBowlPercentIncrease =
        xIniGetFloat(ini, "g.BubbleBowlPercentIncrease", 0.85f); // @ 1014;
    globals.player.g.BubbleBowlMinSpeed =
        xIniGetFloat(ini, "g.BubbleBowlMinSpeed", 0.1f); // @ 1015;
    globals.player.g.BubbleBowlMinRecoverTime =
        xIniGetFloat(ini, "g.BubbleBowlMinRecoverTime", 0.15f); // @ 1006;
    globals.player.g.SlideAccelVelMin = xIniGetFloat(ini, "g.SlideAccelVelMin", 6.0f); // @ 1003;
    globals.player.g.SlideAccelVelMax = xIniGetFloat(ini, "g.SlideAccelVelMax", 9.0f); // @ 1011;
    globals.player.g.SlideAccelStart = xIniGetFloat(ini, "g.SlideAccelStart", 9.0f); // @ 1011;
    globals.player.g.SlideAccelEnd = xIniGetFloat(ini, "g.SlideAccelEnd", 4.5f); // @ 1016;
    globals.player.g.SlideAccelPlayerFwd =
        xIniGetFloat(ini, "g.SlideAccelPlayerFwd", 5.0f); // @ 1017;
    globals.player.g.SlideAccelPlayerBack =
        xIniGetFloat(ini, "g.SlideAccelPlayerBack", 5.0f); // @ 1017;
    globals.player.g.SlideAccelPlayerSide =
        xIniGetFloat(ini, "g.SlideAccelPlayerSide", 15.0f); // @ 1018;
    globals.player.g.SlideVelMaxStart = xIniGetFloat(ini, "g.SlideVelMaxStart", 12.0f); // @ 1019;
    globals.player.g.SlideVelMaxEnd = xIniGetFloat(ini, "g.SlideVelMaxEnd", 17.0f); // @ 1020;
    globals.player.g.SlideVelMaxIncTime =
        xIniGetFloat(ini, "g.SlideVelMaxIncTime", 6.0f); // @ 1003;
    globals.player.g.SlideVelMaxIncAccel =
        xIniGetFloat(ini, "g.SlideVelMaxIncAccel", 1.0f); // @ 1002;
    globals.player.g.SlideAirHoldTime = xIniGetFloat(ini, "g.SlideAirHoldTime", 1.0f); // @ 1002;
    globals.player.g.SlideAirSlowTime = xIniGetFloat(ini, "g.SlideAirSlowTime", 1.5f); // @ 1004;
    globals.player.g.SlideAirDblHoldTime =
        xIniGetFloat(ini, "g.SlideAirDblHoldTime", 1.0f); // @ 1002;
    globals.player.g.SlideAirDblSlowTime =
        xIniGetFloat(ini, "g.SlideAirDblSlowTime", 1.5f); // @ 1004;
    globals.player.g.SlideVelDblBoost = xIniGetFloat(ini, "g.SlideVelDblBoost", 6.0f); // @ 1003;

    globals.player.g.TakeDamage = xIniGetInt(ini, "g.TakeDamage", 1);
    globals.player.g.CheatSpongeball = xIniGetInt(ini, "g.CheatSpongeball", 0);
    globals.player.g.CheatPlayerSwitch = xIniGetInt(ini, "g.CheatPlayerSwitch", 0);
    globals.player.g.CheatAlwaysPortal = xIniGetInt(ini, "g.CheatAlwaysPortal", 0);
    globals.player.g.CheatFlyToggle = xIniGetInt(ini, "g.CheatFlyToggle", 0);
    globals.player.g.DisableForceConversation = xIniGetInt(ini, "g.DisableForceConversation", 0);

    globals.player.g.CheatFlyToggle = 0;
    globals.player.g.CheatAlwaysPortal = 0;

    globals.player.g.StartSlideAngle = xIniGetFloat(ini, "g.StartSlideAngle", 30.0f); // @ 1021;
    globals.player.g.StopSlideAngle = xIniGetFloat(ini, "g.StopSlideAngle", 10.0f); // @ 1008;
    globals.player.g.RotMatchMaxAngle = xIniGetFloat(ini, "g.RotMatchMaxAngle", 30.0f); // @ 1021;
    globals.player.g.RotMatchMatchTime = xIniGetFloat(ini, "g.RotMatchMatchTime", 0.1f); // @ 1015;
    globals.player.g.RotMatchRelaxTime = xIniGetFloat(ini, "g.RotMatchRelaxTime", 0.3f); // @ 1005
    globals.player.g.Gravity = xIniGetFloat(ini, "g.Gravity", 30.0f); // @ 1021

    globals.player.g.StartSlideAngle = DEG2RAD(globals.player.g.StartSlideAngle);
    globals.player.g.StopSlideAngle = DEG2RAD(globals.player.g.StopSlideAngle);
    globals.player.g.RotMatchMaxAngle = DEG2RAD(globals.player.g.RotMatchMaxAngle);

    use_degrees = xIniGetFloat(ini, "zcam_highbounce_pitch", 180.0f) != 180.0f;
    xcam_collis_radius = xIniGetFloat(ini, "xcam_collis_radius", xcam_collis_radius);
    xcam_collis_stiffness = xIniGetFloat(ini, "xcam_collis_stiffness", xcam_collis_stiffness);
    zcam_pad_pyaw_scale = xIniGetFloat(ini, "zcam_pad_pyaw_scale", zcam_pad_pyaw_scale);
    zcam_pad_pitch_scale = xIniGetFloat(ini, "zcam_pad_pitch_scale", zcam_pad_pitch_scale);
    zcam_near_d = xIniGetFloat(ini, "zcam_near_d", zcam_near_d);
    zcam_near_h = xIniGetFloat(ini, "zcam_near_h", zcam_near_h);
    zcam_pad_pyaw_scale = xIniGetFloat(ini, "zcam_pad_pyaw_scale", zcam_pad_pyaw_scale);
    zcam_near_pitch = xIniGetFloat(ini, "zcam_near_pitch",
                                   use_degrees ? RAD2DEG(zcam_near_pitch) : zcam_near_pitch);

    zcam_far_d = xIniGetFloat(ini, "zcam_far_d", zcam_far_d);
    zcam_far_h = xIniGetFloat(ini, "zcam_far_h", zcam_far_h);
    zcam_far_pitch =
        xIniGetFloat(ini, "zcam_far_pitch", use_degrees ? RAD2DEG(zcam_far_pitch) : zcam_far_pitch);

    zcam_above_d = xIniGetFloat(ini, "zcam_above_d", zcam_above_d);
    zcam_above_h = xIniGetFloat(ini, "zcam_above_h", zcam_above_h);
    zcam_above_pitch = xIniGetFloat(ini, "zcam_above_pitch",
                                    use_degrees ? RAD2DEG(zcam_above_pitch) : zcam_above_pitch);

    zcam_below_d = xIniGetFloat(ini, "zcam_below_d", zcam_below_d);
    zcam_below_h = xIniGetFloat(ini, "zcam_below_h", zcam_below_h);
    zcam_below_pitch = xIniGetFloat(ini, "zcam_below_pitch",
                                    use_degrees ? RAD2DEG(zcam_below_pitch) : zcam_below_pitch);

    zcam_highbounce_d = xIniGetFloat(ini, "zcam_highbounce_d", zcam_highbounce_d);
    zcam_highbounce_h = xIniGetFloat(ini, "zcam_highbounce_h", zcam_highbounce_h);
    zcam_highbounce_pitch =
        xIniGetFloat(ini, "zcam_highbounce_pitch",
                     use_degrees ? RAD2DEG(zcam_highbounce_pitch) : zcam_highbounce_pitch);

    zcam_wall_d = xIniGetFloat(ini, "zcam_wall_d", zcam_wall_d);
    zcam_wall_h = xIniGetFloat(ini, "zcam_wall_h", zcam_wall_h);
    zcam_wall_pitch = xIniGetFloat(ini, "zcam_wall_pitch",
                                   use_degrees ? RAD2DEG(zcam_wall_pitch) : zcam_wall_pitch);

    zcam_overrot_min = xIniGetFloat(ini, "zcam_overrot_min", DEG2RAD(zcam_overrot_min));
    zcam_overrot_mid = xIniGetFloat(ini, "zcam_overrot_mid", DEG2RAD(zcam_overrot_mid));
    zcam_overrot_max = xIniGetFloat(ini, "zcam_overrot_max", DEG2RAD(zcam_overrot_max));

    zcam_overrot_rate = xIniGetFloat(ini, "zcam_overrot_rate", zcam_overrot_rate);
    zcam_overrot_tstart = xIniGetFloat(ini, "zcam_overrot_tstart", zcam_overrot_tstart);
    zcam_overrot_tend = xIniGetFloat(ini, "zcam_overrot_tend", zcam_overrot_tend);
    zcam_overrot_velmin = xIniGetFloat(ini, "zcam_overrot_velmin", zcam_overrot_velmin);
    zcam_overrot_velmax = xIniGetFloat(ini, "zcam_overrot_velmax", zcam_overrot_velmax);
    zcam_overrot_tmanual = xIniGetFloat(ini, "zcam_overrot_tmanual", zcam_overrot_tmanual);

    if (use_degrees)
    {
        zcam_near_pitch = DEG2RAD(zcam_near_pitch);
        zcam_far_pitch = DEG2RAD(zcam_far_pitch);
        zcam_above_pitch = DEG2RAD(zcam_above_pitch);
        zcam_below_pitch = DEG2RAD(zcam_below_pitch);
        zcam_highbounce_pitch = DEG2RAD(zcam_highbounce_pitch);
        zcam_wall_pitch = DEG2RAD(zcam_wall_pitch);
    }

    zcam_overrot_min = DEG2RAD(zcam_overrot_min);
    zcam_overrot_mid = DEG2RAD(zcam_overrot_mid);
    zcam_overrot_max = DEG2RAD(zcam_overrot_max);

    // tgsm: this seems fucky
    gSkipTimeCutscene = xIniGetFloat(ini, "gSkipTimeCutscene", gSkipTimeCutscene);
    dVar7 = xIniGetFloat(ini, "gSkipTimeFlythrough", gSkipTimeFlythrough);
    fVar1 = 1.0f; // @ 1002
    if (1.0f < gSkipTimeCutscene)
    {
        fVar1 = gSkipTimeCutscene;
    }
    gSkipTimeFlythrough = 0.0f;
    if (0.0f < dVar7)
    {
        gSkipTimeFlythrough = dVar7;
    }
    gSkipTimeCutscene = fVar1;

    globals.player.carry.minDist = xIniGetFloat(ini, "carry.minDist", 0.675f); // @1024;
    globals.player.carry.maxDist = xIniGetFloat(ini, "carry.maxDist", 1.9f); // @1025;
    globals.player.carry.minHeight = xIniGetFloat(ini, "carry.minHeight", -0.2f); // @1026;
    globals.player.carry.maxHeight = xIniGetFloat(ini, "carry.maxHeight", 0.4f); // @1027;
    globals.player.carry.maxCosAngle = xIniGetFloat(ini, "carry.maxCosAngle", 45.0f); // @1028;
    globals.player.carry.throwMinDist = xIniGetFloat(ini, "carry.throwMinDist", 1.5f); // @1004;
    globals.player.carry.throwMaxDist = xIniGetFloat(ini, "carry.throwMaxDist", 12.0f); // @1019;
    globals.player.carry.throwMinHeight =
        xIniGetFloat(ini, "carry.throwMinHeight", -3.0f); // @1029;
    globals.player.carry.throwMaxHeight = xIniGetFloat(ini, "carry.throwMaxHeight", 5.0f); // @1017;
    globals.player.carry.throwMaxStack = xIniGetFloat(ini, "carry.throwMaxStack", 2.75f); // @1030;
    globals.player.carry.throwMaxCosAngle =
        xIniGetFloat(ini, "carry.throwMaxCosAngle", 25.0f); // @1031;
    globals.player.carry.grabLerpMin = xIniGetFloat(ini, "carry.grabLerpMin", 0.0f); // @1001;
    globals.player.carry.grabLerpMax = xIniGetFloat(ini, "carry.grabLerpMax", 0.2f); // @1032;
    globals.player.carry.throwGravity = xIniGetFloat(ini, "carry.throwGravity", 30.0f); // @1021;
    globals.player.carry.throwHeight = xIniGetFloat(ini, "carry.throwHeight", 3.75f); // @1033;
    globals.player.carry.throwDistance = xIniGetFloat(ini, "carry.throwDistance", 10.0f); // @1008;
    globals.player.carry.fruitFloorDecayMin =
        xIniGetFloat(ini, "carry.fruitFloorDecayMin", 0.3f); // @1005;
    globals.player.carry.fruitFloorDecayMax =
        xIniGetFloat(ini, "carry.fruitFloorDecayMax", 6.0f); // @1003;
    globals.player.carry.fruitFloorBounce =
        xIniGetFloat(ini, "carry.fruitFloorBounce", 0.15f); // @1006;
    globals.player.carry.fruitFloorFriction =
        xIniGetFloat(ini, "carry.fruitFloorFriction", 0.4f); // @1027;
    globals.player.carry.fruitCeilingBounce =
        xIniGetFloat(ini, "carry.fruitCeilingBounce", 0.1f); // @1015;
    globals.player.carry.fruitWallBounce =
        xIniGetFloat(ini, "carry.fruitWallBounce", 0.5f); // @1012;
    globals.player.carry.fruitLifetime = xIniGetFloat(ini, "carry.fruitLifetime", 15.0f); // @1018;

    globals.player.carry.maxCosAngle = icos(DEG2RAD(globals.player.carry.maxCosAngle));
    globals.player.carry.throwMaxCosAngle = icos(DEG2RAD(globals.player.carry.throwMaxCosAngle));

    globals.player.g.PowerUp[0] = xIniGetInt(ini, "g.BubbleBowl", 0); // Not sure about this
    globals.player.g.PowerUp[1] = xIniGetInt(ini, "g.CruiseBubble", 0); // Not sure about this

    memcpy(globals.player.g.InitialPowerUp, globals.player.g.PowerUp, 2);

    {
        static F32 fbuf[] = { 0.6f, 3.0f, 7.0f, 0.1f, 0.5f, 1.0f };
        ParseFloatList((F32*)memcpy(&globals.player.sb.MoveSpeed, fbuf, sizeof(fbuf)),
                       xIniGetString(ini, "sb.MoveSpeed", 0), 6);
    }
    {
        static F32 fbuf[] = { 1.5f, 0.5f, 1.5f };
        ParseFloatList((F32*)memcpy(&globals.player.sb.AnimSneak, fbuf, sizeof(fbuf)),
                       xIniGetString(ini, "sb.AnimSneak", 0), 3);
    }
    {
        static F32 fbuf[] = { 3.0f, 0.5f, 2.5f };
        ParseFloatList((F32*)memcpy(&globals.player.sb.AnimWalk, fbuf, sizeof(fbuf)),
                       xIniGetString(ini, "sb.AnimWalk", 0), 3);
    }
    {
        static F32 fbuf[] = { 3.0f, 0.5f, 2.5f };
        ParseFloatList((F32*)memcpy(&globals.player.sb.AnimRun, fbuf, sizeof(fbuf)),
                       xIniGetString(ini, "sb.AnimRun", 0), 3);
    }

    globals.player.sb.JumpGravity = xIniGetFloat(ini, "sb.JumpGravity", 7.0f); // @1034;
    globals.player.sb.GravSmooth = xIniGetFloat(ini, "sb.GravSmooth", 0.25f); // @1035;
    globals.player.sb.FloatSpeed = xIniGetFloat(ini, "sb.FloatSpeed", 1.0f); // @1002;
    globals.player.sb.ButtsmashSpeed = xIniGetFloat(ini, "sb.ButtsmashSpeed", 5.0f); // @1017;
    globals.player.sb.ledge.animGrab = xIniGetFloat(ini, "sb.ledge.animGrab", 3.0f); // @1007;

    zLedgeAdjust(&globals.player.sb.ledge);
    bungee_state::load_settings(*ini);
    oob_state::load_settings(*ini);
    ztalkbox::load_settings(*ini);

    {
        static F32 fbuf[] = { 2.0f, 0.7f, 0.35f, 0.0f };
        ParseFloatList((F32*)memcpy(&globals.player.sb.Jump, fbuf, sizeof(fbuf)),
                       xIniGetString(ini, "sb.Jump", 0), 4);
    }
    {
        static F32 fbuf[] = { 1.0f, 0.7f, 0.35f, 0.0f };
        ParseFloatList((F32*)memcpy(&globals.player.sb.Double, fbuf, sizeof(fbuf)),
                       xIniGetString(ini, "sb.Double", 0), 4);
    }
    {
        static F32 fbuf[] = { 1.5f, 0.2f, 0.2f, 0.0f };
        ParseFloatList((F32*)memcpy(&globals.player.sb.Bounce, fbuf, sizeof(fbuf)),
                       xIniGetString(ini, "sb.Bounce", 0), 4);
    }
    {
        static F32 fbuf[] = { 3.0f, 0.2f, 0.2f, 0.0f };
        ParseFloatList((F32*)memcpy(&globals.player.sb.Spring, fbuf, sizeof(fbuf)),
                       xIniGetString(ini, "sb.Spring", 0), 4);
    }
    {
        static F32 fbuf[] = { 0.0f, 0.0f, 0.0f, 0.0f };
        ParseFloatList((F32*)memcpy(&globals.player.sb.Wall, fbuf, sizeof(fbuf)),
                       xIniGetString(ini, "sb.Wall", 0), 4);
    }

    globals.player.sb.WallJumpVelocity = xIniGetFloat(ini, "sb.WallJumpVelocity", 0.0f); // @1001;
    globals.player.sb.spin_damp_xz = xIniGetFloat(ini, "sb.spin_damp_xz", 15.0f); // @1018;
    globals.player.sb.spin_damp_y = xIniGetFloat(ini, "sb.spin_damp_y", 15.0f); // @1018;

    globals.player.s = &globals.player.sb;

    CalcJumpImpulse(&globals.player.sb.Jump, NULL);
    CalcJumpImpulse(&globals.player.sb.Double, NULL);
    CalcJumpImpulse(&globals.player.sb.Bounce, NULL);
    CalcJumpImpulse(&globals.player.sb.Spring, NULL);
    CalcJumpImpulse(&globals.player.sb.Wall, NULL);

    globals.player.sb_model_indices[0] =
        xIniGetInt(ini, "SB.model_index.body",
                   0); // These next 13 are either "sb_models" or "sb_model_indices"
    globals.player.sb_model_indices[1] = xIniGetInt(ini, "SB.model_index.arm_l", 1);
    globals.player.sb_model_indices[2] = xIniGetInt(ini, "SB.model_index.arm_r", 2);
    globals.player.sb_model_indices[3] = xIniGetInt(ini, "SB.model_index.ass", 3);
    globals.player.sb_model_indices[4] = xIniGetInt(ini, "SB.model_index.underwear", 4);
    globals.player.sb_model_indices[5] = xIniGetInt(ini, "SB.model_index.wand", 5);
    globals.player.sb_model_indices[6] = xIniGetInt(ini, "SB.model_index.tongue", 6);
    globals.player.sb_model_indices[7] = xIniGetInt(ini, "SB.model_index.bubble_helmet", 7);
    globals.player.sb_model_indices[8] = xIniGetInt(ini, "SB.model_index.bubble_shoe_l", 8);
    globals.player.sb_model_indices[9] = xIniGetInt(ini, "SB.model_index.bubble_shoe_r", 9);
    globals.player.sb_model_indices[13] = xIniGetInt(ini, "SB.model_index.shadow_wand", 10);
    globals.player.sb_model_indices[11] = xIniGetInt(ini, "SB.model_index.shadow_arm_l", 11);
    globals.player.sb_model_indices[12] = xIniGetInt(ini, "SB.model_index.shadow_arm_r", 12);
    globals.player.sb_model_indices[10] = xIniGetInt(ini, "SB.model_index.shadow_body", 13);

    {
        static F32 fbuf[] = { 0.6f, 3.0f, 7.0f, 0.1f, 0.5f, 1.0f };
        ParseFloatList((F32*)memcpy(&globals.player.patrick.MoveSpeed, fbuf, sizeof(fbuf)),
                       xIniGetString(ini, "patrick.MoveSpeed", 0), 6);
    }
    {
        static F32 fbuf[] = { 1.5f, 0.5f, 1.5f };
        ParseFloatList((F32*)memcpy(&globals.player.patrick.AnimSneak, fbuf, sizeof(fbuf)),
                       xIniGetString(ini, "patrick.AnimSneak", 0), 3);
    }
    {
        static F32 fbuf[] = { 3.0f, 0.5f, 2.5f };
        ParseFloatList((F32*)memcpy(&globals.player.patrick.AnimWalk, fbuf, sizeof(fbuf)),
                       xIniGetString(ini, "patrick.AnimWalk", 0), 3);
    }
    {
        static F32 fbuf[] = { 3.0f, 0.5f, 2.5f };
        ParseFloatList((F32*)memcpy(&globals.player.patrick.AnimRun, fbuf, sizeof(fbuf)),
                       xIniGetString(ini, "patrick.AnimRun", 0), 3);
    }

    globals.player.patrick.JumpGravity = xIniGetFloat(ini, "patrick.JumpGravity", 7.0f); // @1034;
    globals.player.patrick.GravSmooth = xIniGetFloat(ini, "patrick.GravSmooth", 0.25f); // @1035;
    globals.player.patrick.FloatSpeed = xIniGetFloat(ini, "patrick.FloatSpeed", 1.0f); // @1002;
    globals.player.patrick.ButtsmashSpeed =
        xIniGetFloat(ini, "patrick.ButtsmashSpeed", 5.0f); // @1017;
    globals.player.patrick.ledge.animGrab =
        xIniGetFloat(ini, "patrick.ledge.animGrab", 3.0f); // @1007;

    zLedgeAdjust(&globals.player.patrick.ledge);

    {
        static F32 fbuf[] = { 2.0f, 0.7f, 0.35f, 0.0f };
        ParseFloatList((F32*)memcpy(&globals.player.patrick.Jump, fbuf, sizeof(fbuf)),
                       xIniGetString(ini, "patrick.Jump", 0), 4);
    }
    {
        static F32 fbuf[] = { 1.0f, 0.7f, 0.35f, 0.0f };
        ParseFloatList((F32*)memcpy(&globals.player.patrick.Double, fbuf, sizeof(fbuf)),
                       xIniGetString(ini, "patrick.Double", 0), 4);
    }
    {
        static F32 fbuf[] = { 1.5f, 0.2f, 0.2f, 0.0f };
        ParseFloatList((F32*)memcpy(&globals.player.patrick.Bounce, fbuf, sizeof(fbuf)),
                       xIniGetString(ini, "patrick.Bounce", 0), 4);
    }
    {
        static F32 fbuf[] = { 3.0f, 0.2f, 0.2f, 0.0f };
        ParseFloatList((F32*)memcpy(&globals.player.patrick.Spring, fbuf, sizeof(fbuf)),
                       xIniGetString(ini, "patrick.Spring", 0), 4);
    }
    {
        static F32 fbuf[] = { 0.0f, 0.0f, 0.0f, 0.0f };
        ParseFloatList((F32*)memcpy(&globals.player.patrick.Wall, fbuf, sizeof(fbuf)),
                       xIniGetString(ini, "patrick.Wall", 0), 4);
    }

    globals.player.s = &globals.player.sb;

    CalcJumpImpulse(&globals.player.patrick.Jump, NULL);
    CalcJumpImpulse(&globals.player.patrick.Double, NULL);
    CalcJumpImpulse(&globals.player.patrick.Bounce, NULL);
    CalcJumpImpulse(&globals.player.patrick.Spring, NULL);
    CalcJumpImpulse(&globals.player.patrick.Wall, NULL);

    globals.player.patrick.WallJumpVelocity =
        xIniGetFloat(ini, "patrick.WallJumpVelocity", 0.0f); // @1001;

    {
        static F32 fbuf[] = { 0.6f, 3.0f, 7.0f, 0.1f, 0.5f, 1.0f };
        ParseFloatList((F32*)memcpy(&globals.player.sandy.MoveSpeed, fbuf, sizeof(fbuf)),
                       xIniGetString(ini, "sandy.MoveSpeed", 0), 6);
    }
    {
        static F32 fbuf[] = { 1.5f, 0.5f, 1.5f };
        ParseFloatList((F32*)memcpy(&globals.player.sandy.AnimSneak, fbuf, sizeof(fbuf)),
                       xIniGetString(ini, "sandy.AnimSneak", 0), 3);
    }
    {
        static F32 fbuf[] = { 3.0f, 0.5f, 2.5f };
        ParseFloatList((F32*)memcpy(&globals.player.sandy.AnimWalk, fbuf, sizeof(fbuf)),
                       xIniGetString(ini, "sandy.AnimWalk", 0), 3);
    }
    {
        static F32 fbuf[] = { 3.0f, 0.5f, 2.5f };
        ParseFloatList((F32*)memcpy(&globals.player.sandy.AnimRun, fbuf, sizeof(fbuf)),
                       xIniGetString(ini, "sandy.AnimRun", 0), 3);
    }

    globals.player.sandy.JumpGravity = xIniGetFloat(ini, "sandy.JumpGravity", 7.0f); // @1034;
    globals.player.sandy.GravSmooth = xIniGetFloat(ini, "sandy.GravSmooth", 0.25f); // @1035;
    globals.player.sandy.FloatSpeed = xIniGetFloat(ini, "sandy.FloatSpeed", 1.0f); // @1002;
    globals.player.sandy.ButtsmashSpeed = xIniGetFloat(ini, "sandy.ButtsmashSpeed", 5.0f); // @1017;
    globals.player.sandy.ledge.animGrab = xIniGetFloat(ini, "sandy.ledge.animGrab", 3.0f); // @1007;

    zLedgeAdjust(&globals.player.sandy.ledge);

    {
        static F32 fbuf[] = { 2.0f, 0.7f, 0.35f, 0.0f };
        ParseFloatList((F32*)memcpy(&globals.player.sandy.Jump, fbuf, sizeof(fbuf)),
                       xIniGetString(ini, "sandy.Jump", 0), 4);
    }
    {
        static F32 fbuf[] = { 1.0f, 0.7f, 0.35f, 0.0f };
        ParseFloatList((F32*)memcpy(&globals.player.sandy.Double, fbuf, sizeof(fbuf)),
                       xIniGetString(ini, "sandy.Double", 0), 4);
    }
    {
        static F32 fbuf[] = { 1.5f, 0.2f, 0.2f, 0.0f };
        ParseFloatList((F32*)memcpy(&globals.player.sandy.Bounce, fbuf, sizeof(fbuf)),
                       xIniGetString(ini, "sandy.Bounce", 0), 4);
    }
    {
        static F32 fbuf[] = { 3.0f, 0.2f, 0.2f, 0.0f };
        ParseFloatList((F32*)memcpy(&globals.player.sandy.Spring, fbuf, sizeof(fbuf)),
                       xIniGetString(ini, "sandy.Spring", 0), 4);
    }
    {
        static F32 fbuf[] = { 0.0f, 0.0f, 0.0f, 0.0f };
        ParseFloatList((F32*)memcpy(&globals.player.sandy.Wall, fbuf, sizeof(fbuf)),
                       xIniGetString(ini, "sandy.Wall", 0), 4);
    }

    globals.player.s = &globals.player.sb;

    CalcJumpImpulse(&globals.player.sandy.Jump, NULL);
    CalcJumpImpulse(&globals.player.sandy.Double, NULL);
    CalcJumpImpulse(&globals.player.sandy.Bounce, NULL);
    CalcJumpImpulse(&globals.player.sandy.Spring, NULL);
    CalcJumpImpulse(&globals.player.sandy.Wall, NULL);

    globals.player.sandy.WallJumpVelocity =
        xIniGetFloat(ini, "sandy.WallJumpVelocity", 0.0f); // @1001;

    sShowMenuOnBoot = xIniGetInt(ini, "ShowMenuOnBoot", 1);
    gGameSfxReport = xIniGetInt(ini, "SFXReport", 0);

    globals.player.s = &globals.player.sb;
    globals.player.sb.pcType = ePlayer_SB;
    globals.player.patrick.pcType = ePlayer_Patrick;
    globals.player.sandy.pcType = ePlayer_Sandy;
}

void zMainMemLvlChkCB()
{
    zSceneMemLvlChkCB();
}

void zLedgeAdjust(zLedgeGrabParams* params)
{
    params->animGrab *= (1.0f / 30);
    params->animGrab *= (1.0f / 30);
}

void zMainShowProgressBar()
{
    S32 progBar;
    size_t str;
    char loadingText[12];
    char auStack_cc[64];
    char acStack_8c[64];
    char formattedStr[72];

    if (zMenuIsFirstBoot() != 0)
    {
        if (100 < percentageDone)
        {
            percentageDone = 100;
        }
        progBar = percentageDone / 10;
        strcpy(loadingText, "Loading...");
        memset(formattedStr, 0, 0x40);
        memset(acStack_8c, 0, 0x40);
        strcpy(auStack_cc, loadingText);
        auStack_cc[progBar] = '\0';
        str = strlen(loadingText);
        memcpy(auStack_cc, acStack_8c + progBar, progBar); // 3rd arg should have progBar - sVar2
        sprintf(formattedStr, "{font=0}{h*2}{w*2}%s{color=FFFFFFFF}%s{~:c}", auStack_cc,
                acStack_8c);
        zMainMemCardRenderText(formattedStr, '\x01');
        percentageDone = percentageDone + 10;
    }
}

void zMainLoop()
{
    iTime time;
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

    zMainShowProgressBar();
    xMemPushBase();
    time = iTimeGet();
    xUtil_idtag2string('BOOT', 0);
    iTimeDiffSec(time);
    xSTPreLoadScene('BOOT', NULL, 0x1);
    time = iTimeGet();
    xUtil_idtag2string('BOOT', 0);
    iTimeDiffSec(time);
    xSTQueueSceneAssets('BOOT', 1);
    time = iTimeGet();
    xUtil_idtag2string('BOOT', 0);
    iTimeDiffSec(time);

    do
    {
        xSTLoadStep(time);
    } while (time < 1.0f);

    xSTDisconnect('BOOT', 1);
    time = iTimeGet();
    xUtil_idtag2string('BOOT', 0);
    iTimeDiffSec(time);
    zMainShowProgressBar();
    xSTPreLoadScene('PLAT', 0, 1);
    xSTQueueSceneAssets('PLAT', 1);

    do
    {
        xSTLoadStep(time);
    } while (time < 1.0f);

    xSTDisconnect(0x504c4154, 1);
    zMainShowProgressBar();
    iTimeGet();
    xShadowSimple_Init();
    globals.pickupTable = (zAssetPickupTable*)xSTFindAssetByType('PLAT', 0, 0);
    // globals.pickupTable = zPickupTableInit();
    // zPickupTableInit hasnt been implemented yet
    xMemPushBase();
    time = iTimeGet();
    xUtil_idtag2string('MNU4', 0);
    iTimeDiffSec(time);
    xSTPreLoadScene('MNU4', 0, 1);
    time = iTimeGet();
    xUtil_idtag2string('MNU4', 0);
    iTimeDiffSec(time);
    xSTQueueSceneAssets('MNU4', 1);
    time = iTimeGet();
    xUtil_idtag2string('MNU4', 0);
    iTimeDiffSec(time);
    do
    {
        xSTLoadStep(time);
    } while (time < 1.0f);
    xSTDisconnect('MNU4', 1);
    zMainShowProgressBar();
    time = iTimeGet();
    xUtil_idtag2string('MNU4', 0);
    iTimeDiffSec(time);
    xMemPushBase();
    time = iTimeGet();
    xUtil_idtag2string('MNU5', 0);
    iTimeDiffSec(time);
    xSTPreLoadScene('MNU5', 0, 1);
    time = iTimeGet();
    xUtil_idtag2string('MNU5', 0);
    iTimeDiffSec(time);
    xSTQueueSceneAssets('MNU5', 1);
    time = iTimeGet();
    xUtil_idtag2string('MNU5', 0);
    iTimeDiffSec(time);
    do
    {
        xSTLoadStep(time);
    } while (time < 1.0f);
    xSTDisconnect('MNU5', 1);
    zMainShowProgressBar();
    time = iTimeGet();
    xUtil_idtag2string('MNU5', 0);
    iTimeDiffSec(time);
    xModelInit();
    xModelPoolInit(0x20, 0x40);
    xModelPoolInit(0x28, 8);
    xModelPoolInit(0x38, 1);
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

void zMainMemCardQueryPost(S32 needed, S32 available, S32 neededFiles, S32 unk0)
{
    RwCamera* cam = 0;
    RwRGBA* colour = 0;
    RwInt32 clearMode = 3;

    cam = iCameraCreate(640, 480, 0);
    RwCameraClear(cam, colour, clearMode);
    RwCameraBeginUpdate(cam);
    render_mem_card_no_space(needed, available, neededFiles, unk0);
    RwCameraEndUpdate(cam);
    RwCameraShowRaster(cam, NULL, 1);
    iCameraDestroy(cam);
}

void zMainMemCardRenderText(const char* a, bool enabled)
{
    RwCamera* cam = 0;
    RwRGBA* colour = 0;
    RwInt32 clearMode = 3;

    cam = iCameraCreate(640, 480, 0);
    RwCameraClear(cam, colour, clearMode);
    RwCameraBeginUpdate(cam);
    RenderText(a, enabled);
    RwCameraEndUpdate(cam);
    RwCameraShowRaster(cam, NULL, 1);
    iCameraDestroy(cam);
}

void zMainLoadFontHIP()
{
    iTime time;

    xMemPushBase();
    time = iTimeGet();
    xUtil_idtag2string('FONT', 0);
    iTimeDiffSec(time);
    xSTPreLoadScene('FONT', NULL, 0x1);
    time = iTimeGet();
    xUtil_idtag2string('FONT', 0);
    iTimeDiffSec(time);
    xSTQueueSceneAssets('FONT', 1);
    time = iTimeGet();
    xUtil_idtag2string('FONT', 0);
    iTimeDiffSec(time);

    do
    {
        xSTLoadStep(time);
    } while (time < 1.0f);

    xSTDisconnect('FONT', 1);
    time = iTimeGet();
    xUtil_idtag2string('FONT', 0);
    iTimeDiffSec(time);
}

void iEnvStartup()
{
}
