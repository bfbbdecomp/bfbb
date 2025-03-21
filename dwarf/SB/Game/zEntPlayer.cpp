/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
static class basic_rect screen_bounds; // size: 0x10, address: 0x0
static class basic_rect default_adjust; // size: 0x10, address: 0x0
static float sHackStuckTimer; // size: 0x4, address: 0x50F32C
static class xVec3 sHackStuckDir; // size: 0xC, address: 0x519260
static class xVec3 sHackStuckVel; // size: 0xC, address: 0x519270
static unsigned int sHackStuckSetDir; // size: 0x4, address: 0x50F330
static float CATCH_CAPSULE_RAD; // size: 0x4, address: 0x50E654
static float CATCH_CAPSULE_BIAS; // size: 0x4, address: 0x50E658
static float sCatchCapsuleTimer; // size: 0x4, address: 0x50F334
static float stuck_timer; // size: 0x4, address: 0x50F338
static float not_stuck_timer; // size: 0x4, address: 0x50F33C
static class xVec3 stuck_start_loc; // size: 0xC, address: 0x519280
signed int sPlayerSurfaceType; // size: 0x4, address: 0x0
class xEnt * sDebugPlayerPtr; // size: 0x4, address: 0x0
signed int gSpongeBall; // size: 0x4, address: 0x50F340
static unsigned int sPlayerSnd[3][47]; // size: 0x234, address: 0x519290
static unsigned int sPlayerSndRand[3][47]; // size: 0x234, address: 0x5194D0
static unsigned int sPlayerSndID[3][47]; // size: 0x234, address: 0x519710
static enum _tagRumbleType sPlayerRumbleType[47]; // size: 0xBC, address: 0x519950
static float sPlayerRumbleTime[47]; // size: 0xBC, address: 0x519A10
static float sPlayerSndFxVolume[47]; // size: 0xBC, address: 0x519AD0
static unsigned int sPlayerStreamSnd[3][118]; // size: 0x588, address: 0x519B90
static unsigned int sPlayerStreamSndRand[3][118]; // size: 0x588, address: 0x51A120
static unsigned int sCurrentStreamSndID; // size: 0x4, address: 0x50F344
static float sPlayerSndStreamVolume[118]; // size: 0x1D8, address: 0x51A6B0
static float sPlayerSndSneakDelay; // size: 0x4, address: 0x50F348
static signed int sPlayerDiedLastTime; // size: 0x4, address: 0x50F34C
static signed int sPlayerIgnoreSound; // size: 0x4, address: 0x50F350
static signed int sPlayerAttackInAir; // size: 0x4, address: 0x50F354
static class zDelayedStreamSound sDelayedSound[8]; // size: 0x60, address: 0x51A890
static class zPlayerSndTimer sPlayerStreamSndTimer[118]; // size: 0x3B0, address: 0x51A8F0
float startJump; // size: 0x4, address: 0x50F358
float startDouble; // size: 0x4, address: 0x50F35C
float startBounce; // size: 0x4, address: 0x50F360
static float minVelmag; // size: 0x4, address: 0x50E65C
static float maxVelmag; // size: 0x4, address: 0x50E660
static float curVelmag; // size: 0x4, address: 0x50F364
static float curVelangle; // size: 0x4, address: 0x50F368
static signed int surfSlickness; // size: 0x4, address: 0x50E664
static float surfFriction; // size: 0x4, address: 0x50E668
static float surfDamping; // size: 0x4, address: 0x50F36C
static signed int lastSlickness; // size: 0x4, address: 0x50E66C
static class xVec3 lastDeltaPos; // size: 0xC, address: 0x51ACA0
static class xVec3 lastFloorNorm; // size: 0xC, address: 0x51ACB0
static class xEnt * lastFloorEnt; // size: 0x4, address: 0x50F370
static unsigned int surfSticky; // size: 0x4, address: 0x50F374
static float surfSlideStart; // size: 0x4, address: 0x50E670
static float surfSlideStop; // size: 0x4, address: 0x50E674
float surfSlickRatio; // size: 0x4, address: 0x50F378
static float surfSlickTimer; // size: 0x4, address: 0x50F37C
static float surfPeakRatio; // size: 0x4, address: 0x50E678
static float surfAccelWalk; // size: 0x4, address: 0x50E67C
static float surfAccelRun; // size: 0x4, address: 0x50E680
static float surfDecelIdle; // size: 0x4, address: 0x50E684
static float surfDecelSkid; // size: 0x4, address: 0x50E688
static float surfMaxSpeed; // size: 0x4, address: 0x50F380
static float surfSlipTimer; // size: 0x4, address: 0x50F384
static class xEnt * sGrabFound; // size: 0x4, address: 0x50F388
static signed int sGrabFailed; // size: 0x4, address: 0x50F38C
static float sPlayerCollAdjust; // size: 0x4, address: 0x50F390
static class zPlayerLassoInfo * sLassoInfo; // size: 0x4, address: 0x50F394
static class zLasso * sLasso; // size: 0x4, address: 0x50F398
static class xEnt * sHitch[32]; // size: 0x80, address: 0x51ACC0
static signed int sNumHitches; // size: 0x4, address: 0x50F39C
static float sHitchAngle; // size: 0x4, address: 0x50F3A0
static float sSwingTimeElapsed; // size: 0x4, address: 0x50F3A4
static signed int sLassoCamLinger; // size: 0x4, address: 0x50F3A8
static signed int sGooKnockedToSafety; // size: 0x4, address: 0x50F3AC
static float sGooKnockedTimer; // size: 0x4, address: 0x50F3B0
class xEntBoulder * boulderVehicle; // size: 0x4, address: 0x50F3B4
static float bvTimeToIdle; // size: 0x4, address: 0x50F3B8
static signed int boulderRollShouldEnd; // size: 0x4, address: 0x50F3BC
static signed int boulderRollShouldStart; // size: 0x4, address: 0x50F3C0
static class zParEmitter * sEmitSpinBubbles; // size: 0x4, address: 0x50F3C4
static class zParEmitter * sEmitSundae; // size: 0x4, address: 0x50F3C8
static class zParEmitter * sEmitStankBreath; // size: 0x4, address: 0x50F3CC
static class xModelTag sStankTag[3]; // size: 0x60, address: 0x51AD40
static class RpAtomic * sReticleModel; // size: 0x4, address: 0x50F3D0
static class RpAtomic * sReticleHandModel; // size: 0x4, address: 0x0
static class RpAtomic * sReticleDuhModel; // size: 0x4, address: 0x0
static class RpAtomic * sReticleYeeModel; // size: 0x4, address: 0x0
static class RpAtomic * sReticleHawModel; // size: 0x4, address: 0x0
static float sReticleRot; // size: 0x4, address: 0x50F3D4
static float sReticleAlpha; // size: 0x4, address: 0x50F3D8
static class xMat4x3 sReticleMat; // size: 0x40, address: 0x51ADA0
static signed int sTypeOfTarget; // size: 0x4, address: 0x50F3DC
static float sTimeToRetarget; // size: 0x4, address: 0x50F3E0
class xEnt * gReticleTarget; // size: 0x4, address: 0x50F3E4
static class RwRaster * sBowlingLaneRast; // size: 0x4, address: 0x50F3E8
char * sBowlBlendLabels[11]; // size: 0x2C, address: 0x0
static unsigned int sBowlBlendValues[11]; // size: 0x2C, address: 0x0
static unsigned int sBowlNumBlendModes; // size: 0x4, address: 0x0
static class /* @class */ {
    // total size: 0x8
public:
    unsigned int level; // offset 0x0, size 0x4
    unsigned int total; // offset 0x4, size 0x4
} patsock_totals[11]; // size: 0x58, address: 0x4ED970
static float update_dt; // size: 0x4, address: 0x50E68C
static float last_update_dt; // size: 0x4, address: 0x50E690
static class xVec3 update_motion; // size: 0xC, address: 0x51ADE0
static class xVec3 req_motion; // size: 0xC, address: 0x51ADF0
static class xVec3 precollide_motion; // size: 0xC, address: 0x51AE00
class zGustData gust_data; // size: 0x24, address: 0x51AE10
class xMat4x3 gPlayerAbsMat; // size: 0x40, address: 0x51AE40
class xMat4x3 rendermat; // size: 0x40, address: 0x51AE80
class xMat4x3 sCameraLastMat; // size: 0x40, address: 0x51AEC0
class xVec3 sDriveVel; // size: 0xC, address: 0x51AF00
float default_player_radius; // size: 0x4, address: 0x50E694
enum _CurrentPlayer gCurrentPlayer; // size: 0x4, address: 0x50F3EC
enum _CurrentPlayer lastgCurrentPlayer; // size: 0x4, address: 0x50E698
class xVec3 floor_supp[4]; // size: 0x30, address: 0x51AF10
float floor_dist[4]; // size: 0x10, address: 0x51AF40
float floor_tmr[4]; // size: 0x10, address: 0x51AF50
class xVec3 floor_safe_vec; // size: 0xC, address: 0x51AF60
float floor_safe_tmr; // size: 0x4, address: 0x50F3F0
static float bbash_start_ht; // size: 0x4, address: 0x50F3F4
static float bbash_end_tmr; // size: 0x4, address: 0x50F3F8
static float bbash_tmr; // size: 0x4, address: 0x50F3FC
static float bbash_vel; // size: 0x4, address: 0x50F400
static signed int bbash_hit; // size: 0x4, address: 0x50F404
static signed int bbounce_hit; // size: 0x4, address: 0x50F408
static float bbounce_tmr; // size: 0x4, address: 0x0
static float idle_tmr; // size: 0x4, address: 0x50F40C
static float inact_tmr; // size: 0x4, address: 0x50F410
static float stun_power_tmr; // size: 0x4, address: 0x50F414
static float tslide_maxspd; // size: 0x4, address: 0x50F418
static float tslide_maxspd_tmr; // size: 0x4, address: 0x50F41C
static float tslide_inair_tmr; // size: 0x4, address: 0x50F420
static float tslide_dbl_tmr; // size: 0x4, address: 0x50F424
static unsigned int tslide_ground; // size: 0x4, address: 0x50F428
static class xVec3 tslide_lastrealvel; // size: 0xC, address: 0x51AF70
static signed int in_goo; // size: 0x4, address: 0x50F42C
static signed int lin_goo; // size: 0x4, address: 0x50F430
static float in_goo_tmr; // size: 0x4, address: 0x50F434
static unsigned int player_hitlist_anim; // size: 0x4, address: 0x50F438
signed int player_hit; // size: 0x4, address: 0x50F43C
static signed int player_hit_anim; // size: 0x4, address: 0x50E69C
static unsigned int player_dead_anim; // size: 0x4, address: 0x50E6A0
static unsigned int player_idle_anim; // size: 0x4, address: 0x50F440
static unsigned int mount_type; // size: 0x4, address: 0x50F444
static class xEnt * mount_object; // size: 0x4, address: 0x50F448
static float mount_tmr; // size: 0x4, address: 0x50F44C
static class xVec3 velbase; // size: 0xC, address: 0x0
static class xVec3 velvar; // size: 0xC, address: 0x0
static class xVec3 last_center; // size: 0xC, address: 0x51AF80
static unsigned int last_frame; // size: 0x4, address: 0x50F450
unsigned char default_PowerUp[2]; // size: 0x2, address: 0x0
static unsigned int sShouldBubbleBowl; // size: 0x4, address: 0x50F454
static float sBubbleBowlTimer; // size: 0x4, address: 0x50F458
static float sBubbleBowlLastWindupTime; // size: 0x4, address: 0x50E6A4
static float sBubbleBowlMultiplier; // size: 0x4, address: 0x50E6A8
static unsigned int sSpatulaGrabbed; // size: 0x4, address: 0x50F45C
signed int gWaitingToAutoSave; // size: 0x4, address: 0x50F460
static enum /* @enum */ {
    WallJumpResult_NoJump = 0,
    WallJumpResult_Jump = 1,
} sWallJumpResult; // size: 0x4, address: 0x50F464
static class xVec3 sWallNormal; // size: 0xC, address: 0x51AF90
static class zSurfaceProps * sWallCollisionSurface; // size: 0x4, address: 0x50F468
static float sTongueDblSpeedMult; // size: 0x4, address: 0x50F46C
static class /* @class */ {
    // total size: 0x10
public:
    signed int anim; // offset 0x0, size 0x4
    unsigned int sndid; // offset 0x4, size 0x4
    void * data; // offset 0x8, size 0x4
    float time; // offset 0xC, size 0x4
} player_talk; // size: 0x10, address: 0x51AFA0
static class zNPCLassoInfo * sCurrentNPCInfo; // size: 0x4, address: 0x50F470
static unsigned int sShouldMelee; // size: 0x4, address: 0x50F474
unsigned int sandyHitMax; // size: 0x4, address: 0x50F478
unsigned int patrickHitMax; // size: 0x4, address: 0x50F47C
unsigned int sbHitMax; // size: 0x4, address: 0x0
class xAnimTransition sandyHitTran[8]; // size: 0x160, address: 0x51AFB0
class xAnimTransition patrickHitTran[8]; // size: 0x160, address: 0x51B110
class xAnimTransition sbHitTran[8]; // size: 0x160, address: 0x0
class zParEmitter * gEmitBFX; // size: 0x4, address: 0x50F480
static float sLastBubbleEmit; // size: 0x4, address: 0x50F484
static float sLastInvulnEmit; // size: 0x4, address: 0x50F488
static class xModelTag sSandyLFoot; // size: 0x20, address: 0x51B270
static class xModelTag sSandyRFoot; // size: 0x20, address: 0x51B290
static class xModelTag sSandyLHand; // size: 0x20, address: 0x51B2B0
static class xModelTag sSandyRHand; // size: 0x20, address: 0x51B2D0
static class xModelTag sSandyLKnee; // size: 0x20, address: 0x51B2F0
static class xModelTag sSandyRKnee; // size: 0x20, address: 0x51B310
static class xModelTag sSandyLElbow; // size: 0x20, address: 0x51B330
static class xModelTag sSandyRElbow; // size: 0x20, address: 0x51B350
static class xModelTag sSpongeBobLKnee; // size: 0x20, address: 0x51B370
static class xModelTag sSpongeBobRKnee; // size: 0x20, address: 0x51B390
static class xModelTag sSpongeBobLElbow; // size: 0x20, address: 0x51B3B0
static class xModelTag sSpongeBobRElbow; // size: 0x20, address: 0x51B3D0
static class xModelTag sSpongeBobLFoot; // size: 0x20, address: 0x51B3F0
static class xModelTag sSpongeBobRFoot; // size: 0x20, address: 0x51B410
static class xModelTag sSpongeBobLHand; // size: 0x20, address: 0x51B430
static class xModelTag sSpongeBobRHand; // size: 0x20, address: 0x51B450
static class xModelTag sPatrickLFoot; // size: 0x20, address: 0x51B470
static class xModelTag sPatrickRFoot; // size: 0x20, address: 0x51B490
static class xModelTag sPatrickLHand; // size: 0x20, address: 0x51B4B0
static class xModelTag sPatrickRHand; // size: 0x20, address: 0x51B4D0
static class xModelTag sPatrickLKnee; // size: 0x20, address: 0x51B4F0
static class xModelTag sPatrickRKnee; // size: 0x20, address: 0x51B510
static class xModelTag sPatrickLElbow; // size: 0x20, address: 0x51B530
static class xModelTag sPatrickRElbow; // size: 0x20, address: 0x51B550
static class xModelTag sPatrickMelee; // size: 0x20, address: 0x51B570
static class PlayerStreakInfo sStreakInfo[3][4]; // size: 0x2A0, address: 0x4072B0
float sRingDelay; // size: 0x4, address: 0x50F494
static unsigned char SBBBashBones[8]; // size: 0x8, address: 0x4EDB60
static unsigned char SBBBounceBones[8]; // size: 0x8, address: 0x4EDB68
float scaleChuck; // size: 0x4, address: 0x0
class xVec3 offsetChuck; // size: 0xC, address: 0x4EDB70
static float sPlayerNPC_KnockBackTime; // size: 0x4, address: 0x50E6D0
static float sPlayerNPC_KnockBackVel; // size: 0x4, address: 0x50E6D4
static unsigned int sTrackHash[20]; // size: 0x50, address: 0x4075C0
static unsigned int cchkButtbounce; // size: 0x4, address: 0x50F4B0
static unsigned int cchkSquish; // size: 0x4, address: 0x50F4B4
static signed int g_flg_loaded; // size: 0x4, address: 0x50F4B8
class zGlobals globals; // size: 0x2050, address: 0x52C8F0
void dont_move(class xEnt *, class xScene *, float, class xEntFrame *); // size: 0x0, address: 0x13DFB0
class xEnt * PlayerCollCheckOneEnt(class xEnt *, class xScene *, void *); // size: 0x0, address: 0x1473B0
class xEnt * PlayerCollCheckOneVillain(class xEnt *, class xScene *, void *); // size: 0x0, address: 0x1469D0
class xVec3 g_O3; // size: 0xC, address: 0x4F8D70
void zEntPlayer_BoulderVehicleUpdate(class xEnt *, class xScene *, float); // size: 0x0, address: 0x157340
class xVec3 g_Y3; // size: 0xC, address: 0x4F8D90
signed int xent_entent; // size: 0x4, address: 0x50F96C
class xMat4x3 g_I3; // size: 0x40, address: 0x5688C0
class _tagxPad mPad[4]; // size: 0x520, address: 0x568E70
void PlayerBoundUpdate(class xEnt *, class xVec3 *); // size: 0x0, address: 0x1494A0
unsigned int PlayerDepenQuery(class xEnt *, class xEnt *, class xScene *, float, class xCollis *); // size: 0x0, address: 0x149540
void zEntPlayer_Render(class zEnt *); // size: 0x0, address: 0x14E360
void zEntPlayer_Move(class xEnt *, class xScene *, float, class xEntFrame *); // size: 0x0, address: 0x14DE60
void zEntPlayer_Update(class xEnt *, class xScene *, float); // size: 0x0, address: 0x150740
unsigned char xClumpColl_FilterFlags; // size: 0x1, address: 0x50F070
class RpCollisionTriangle * nearestTrackCB(class RpIntersection *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x14B440
class xQCControl xqc_def_ctrl; // size: 0x3C, address: 0x5A1710
unsigned int gEnableRewardsQueue; // size: 0x4, address: 0x50E648
unsigned int gPTankDisable; // size: 0x4, address: 0x505BB8
class RpAtomic * AtomicDefaultRenderCallBack(class RpAtomic *); // size: 0x0, address: 0x21F4C0
class RpAtomic * xFXBubbleRender(class RpAtomic *); // size: 0x0, address: 0x1EA900
float dutchman_reticle_radius; // size: 0x4, address: 0x510264
class xVec3 dutchman_reticle_center; // size: 0xC, address: 0x5E64D0
class xEnt * dutchman_reticle_ent; // size: 0x4, address: 0x510260
float gShadowObjectRadius; // size: 0x4, address: 0x50FB30
class xVec3 g_NY3; // size: 0xC, address: 0x4F8DC0
signed int zcam_bbounce; // size: 0x4, address: 0x50F23C
void zGustUpdateEnt(class xEnt *, class xScene *, float, void *); // size: 0x0, address: 0x17F550
void zEntPlayer_BoulderVehicleMove(class xEnt *, class xScene *, float, class xEntFrame *); // size: 0x0, address: 0x157CD0
signed int BoulderVEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *); // size: 0x0, address: 0x157CF0
void PlayerRotMatchUpdateEnt(class xEnt *, class xScene *, float, void *); // size: 0x0, address: 0x143020
signed int zEntPlayerEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *); // size: 0x0, address: 0x143EA0
void xAnimDefaultBeforeEnter(class xAnimPlay *, class xAnimState *); // size: 0x0, address: 0x213A90
unsigned int BoulderRollIdleCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16C4E0
unsigned int BoulderRollMoveCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16C520
unsigned int TalkDoneCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16AE50
unsigned int TalkCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16AE70
unsigned int IdleCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16FE20
unsigned int SlipRunCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16FF90
unsigned int BbowlRecoverRunSlipCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16E380
unsigned int BbowlRecoverRunOutOfWorldCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16E410
unsigned int BbowlRecoverRunVictoryCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16E500
unsigned int BbowlRecoverRunScaredCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16E620
unsigned int BbowlRecoverRunCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16E780
unsigned int BbowlRecoverWalkCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16E8F0
unsigned int BbowlTossEndCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16E9F0
unsigned int BbowlWindupEndCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16EB80
unsigned int BbowlCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16EBC0
unsigned int BbowlCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16EE00
unsigned int LedgeFinishCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16B580
unsigned int LedgeGrabCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16B5C0
unsigned int LedgeGrabCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16B730
unsigned int RunSlipCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x170910
unsigned int RunOutOfWorldCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x170850
unsigned int RunVictoryCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x170980
unsigned int RunScaredCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x170A80
unsigned int RunStoicCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x170BB0
unsigned int WalkCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x170780
unsigned int IdleCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x170390
unsigned int IdleSlipCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1700A0
unsigned int BBounceToJumpCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16EE90
unsigned int BBounceToJumpCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16F0D0
unsigned int BBounceStrikeCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16F0E0
unsigned int BBounceStrikeCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16F2A0
unsigned int BBounceAttackCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16F2C0
unsigned int BBashToJumpCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16F390
unsigned int BBashStrikeCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16F3C0
unsigned int BBashStrikeCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16F3E0
unsigned int BubbleBounceCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16F2E0
unsigned int BubbleBounceCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16F340
unsigned int BubbleSpinCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16F660
unsigned int BubbleSpinCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16F7F0
unsigned int LandCallback(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16F990
unsigned int LandSlipIdleCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16FB70
unsigned int LandSlipRunCallback(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16F890
unsigned int LandSlipRunCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16FB20
unsigned int LandRunCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16FC80
unsigned int LandHighCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16FCB0
unsigned int LandCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16FD60
unsigned int WallJumpLandFlightCallback(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16CFE0
unsigned int WallJumpLandFlightCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16D000
unsigned int WallJumpFlightLandCallback(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16D010
unsigned int WallJumpFlightLandCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16D030
unsigned int WallJumpCallback(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16D040
unsigned int WallJumpLaunchCallback(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16D390
unsigned int WallJumpLaunchCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16D3D0
unsigned int DblJumpCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16C710
unsigned int DblJumpCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16C960
unsigned int JumpApexCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16CC20
unsigned int FallCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16C560
unsigned int BoulderRollCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16BE70
unsigned int BoulderRollWindupCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16C330
unsigned int BoulderRollCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16C4C0
unsigned int TongueDblSpinCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16C680
unsigned int TongueDblJumpCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16C6A0
unsigned int LandNoTrackSlipIdleCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16F9C0
unsigned int LandNoTrackSlipRunCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16FA40
unsigned int LandNoTrackWalkCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16FBC0
unsigned int LandNoTrackFastCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16FAC0
unsigned int NoslideTrackCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16B880
unsigned int LandNoTrackCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16FCE0
unsigned int SlideTrackCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16B890
unsigned int LandTrackCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16FD20
unsigned int JumpCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16CD10
unsigned int TrackPrefallJumpCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16B760
unsigned int JumpCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16CF90
unsigned int TrackFallCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16B800
unsigned int TrackFallCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16B820
unsigned int NoslideTrackCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16B850
unsigned int SlideTrackCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16BB10
unsigned int GooDeathCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16E2F0
unsigned int GooCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16E330
unsigned int DefeatedCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16DE40
unsigned int Defeated05Check(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16DF40
unsigned int Defeated04Check(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16DFB0
unsigned int Defeated03Check(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16E020
unsigned int Defeated02Check(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16E090
unsigned int Defeated01Check(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16E100
unsigned int Hit05CB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16E160
unsigned int Hit05Check(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16E180
unsigned int Hit04CB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16E1B0
unsigned int Hit04Check(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16E1D0
unsigned int Hit03CB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16E200
unsigned int Hit03Check(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16E220
unsigned int Hit02CB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16E250
unsigned int Hit02Check(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16E270
unsigned int Hit01CB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16E2A0
unsigned int Hit01Check(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16E2C0
unsigned int BounceCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16CBB0
unsigned int BounceCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16CC00
unsigned int BubbleBashCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16F3F0
unsigned int BubbleBashCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16F5C0
unsigned int NoSlipCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16FEE0
unsigned int InactiveCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16FDB0
unsigned int InactiveCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16FDD0
unsigned int IdleScaredCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x170110
unsigned int IdleStoicCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1702A0
unsigned int IdleVictoryCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1701F0
unsigned int InactiveFinishedCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16FD80
unsigned int SpatulaGrabStopCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16D8F0
unsigned int SpatulaGrabCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16DAA0
unsigned int SpatulaGrabCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16DE30
unsigned int StunRadiusCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x168300
unsigned int StunStartFallCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1684E0
unsigned int PatrickStunCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16B440
unsigned int WalkScaredCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x170410
unsigned int WalkVictoryCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x170540
unsigned int WalkStoicCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x170640
unsigned int PatrickMeleeCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16B350
unsigned int PatrickAttackCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16B480
unsigned int PatrickGrabKill(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16B540
unsigned int PatrickGrabFailed(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16B560
unsigned int PatrickGrabCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16AE90
unsigned int PatrickGrabCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16B570
unsigned int PatrickGrabThrowCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16A470
unsigned int PatrickGrabThrow(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16B4F0
unsigned int AnyStopCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x170070
unsigned int AnyMoveCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x170090
unsigned int LCopterCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16D6D0
unsigned int LCopterCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16D890
unsigned int SandyLandCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16F870
unsigned int LandWalkCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16FC50
unsigned int LandFastCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16FC20
unsigned int StopLCopterCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16D600
unsigned int RunAnyCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x170CF0
unsigned int LassoStopCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x169020
unsigned int LassoFailRunSlipCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x169E20
unsigned int LassoFailRunOutOfWorldCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x169EB0
unsigned int LassoFailRunCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x169FA0
unsigned int LassoFailWalkCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16A090
unsigned int LassoFailIdleCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16A180
unsigned int LassoFailIdleSlipCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16A220
unsigned int LassoYankCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x169170
unsigned int LassoDestroyCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16A2C0
unsigned int LassoDestroyCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1692A0
unsigned int LassoAboutToDestroyCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16A2D0
unsigned int LassoReyankCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16A2B0
unsigned int LassoStraightToDestroyCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16A2E0
unsigned int LassoLostTargetCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16A2F0
unsigned int MeleeCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x169BC0
unsigned int MeleeCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16A390
unsigned int JumpMeleeCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x169CE0
unsigned int LassoStartCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x169990
unsigned int LassoStartCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16A310
unsigned int BounceStopLCopterCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x16CAB0
unsigned int SpatulaMeleeStopCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1690C0
unsigned int MeleeStopCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x169120
unsigned int LassoFlyCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x169480
unsigned int LassoThrowCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x169760
unsigned int LassoSwingReleaseCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x168750
unsigned int LassoSwingReleaseCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x168EF0
unsigned int LassoSwingGroundedCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x168870
unsigned int LassoSwingCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x168950
unsigned int LassoSwingTossCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x1689B0
unsigned int LassoSwingBeginCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x168CD0
unsigned int LassoSwingBeginCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x168F90
unsigned int LassoSwingGroundedBeginCB(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x168C60
unsigned int LassoSwingGroundedBeginCheck(class xAnimTransition *, class xAnimSingle *, void *); // size: 0x0, address: 0x168FC0
signed int CheckObjectAgainstMeleeBound(class xEnt *, void *); // size: 0x0, address: 0x167BF0
class xGrid npcs_grid; // size: 0x34, address: 0x5CEC50
class xGrid colls_oso_grid; // size: 0x34, address: 0x5CEC10
class xGrid colls_grid; // size: 0x34, address: 0x5CEBD0
void zEntPlayer_BoulderVehicleRender(class zEnt *); // size: 0x0, address: 0x157CE0
class xGlobals * xglobals; // size: 0x4, address: 0x50E790
class _tagTRCPadInfo gTrcPad[4]; // size: 0x30, address: 0x5BA970
unsigned int gFrameCount; // size: 0x4, address: 0x50F94C
class xVec3 {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class xAnimState {
    // total size: 0x4C
public:
    class xAnimState * Next; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int Flags; // offset 0xC, size 0x4
    unsigned int UserFlags; // offset 0x10, size 0x4
    float Speed; // offset 0x14, size 0x4
    class xAnimFile * Data; // offset 0x18, size 0x4
    class xAnimEffect * Effects; // offset 0x1C, size 0x4
    class xAnimTransitionList * Default; // offset 0x20, size 0x4
    class xAnimTransitionList * List; // offset 0x24, size 0x4
    float * BoneBlend; // offset 0x28, size 0x4
    float * TimeSnap; // offset 0x2C, size 0x4
    float FadeRecip; // offset 0x30, size 0x4
    unsigned short * FadeOffset; // offset 0x34, size 0x4
    void * CallbackData; // offset 0x38, size 0x4
    class xAnimMultiFile * MultiFile; // offset 0x3C, size 0x4
    void (* BeforeEnter)(class xAnimPlay *, class xAnimState *); // offset 0x40, size 0x4
    void (* StateCallback)(class xAnimState *, class xAnimSingle *, void *); // offset 0x44, size 0x4
    void (* BeforeAnimMatrices)(class xAnimPlay *, class xQuat *, class xVec3 *, signed int); // offset 0x48, size 0x4
};
class xModelInstance {
    // total size: 0x6C
public:
    class xModelInstance * Next; // offset 0x0, size 0x4
    class xModelInstance * Parent; // offset 0x4, size 0x4
    class xModelPool * Pool; // offset 0x8, size 0x4
    class xAnimPlay * Anim; // offset 0xC, size 0x4
    class RpAtomic * Data; // offset 0x10, size 0x4
    unsigned int PipeFlags; // offset 0x14, size 0x4
    float RedMultiplier; // offset 0x18, size 0x4
    float GreenMultiplier; // offset 0x1C, size 0x4
    float BlueMultiplier; // offset 0x20, size 0x4
    float Alpha; // offset 0x24, size 0x4
    float FadeStart; // offset 0x28, size 0x4
    float FadeEnd; // offset 0x2C, size 0x4
    class xSurface * Surf; // offset 0x30, size 0x4
    class xModelBucket * * Bucket; // offset 0x34, size 0x4
    class xModelInstance * BucketNext; // offset 0x38, size 0x4
    class xLightKit * LightKit; // offset 0x3C, size 0x4
    void * Object; // offset 0x40, size 0x4
    unsigned short Flags; // offset 0x44, size 0x2
    unsigned char BoneCount; // offset 0x46, size 0x1
    unsigned char BoneIndex; // offset 0x47, size 0x1
    unsigned char * BoneRemap; // offset 0x48, size 0x4
    class RwMatrixTag * Mat; // offset 0x4C, size 0x4
    class xVec3 Scale; // offset 0x50, size 0xC
    unsigned int modelID; // offset 0x5C, size 0x4
    unsigned int shadowID; // offset 0x60, size 0x4
    class RpAtomic * shadowmapAtomic; // offset 0x64, size 0x4
    class /* @class */ {
        // total size: 0x4
    public:
        class xVec3 * verts; // offset 0x0, size 0x4
    } anim_coll; // offset 0x68, size 0x4
};
class xCollis {
    // total size: 0x50
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int oid; // offset 0x4, size 0x4
    void * optr; // offset 0x8, size 0x4
    class xModelInstance * mptr; // offset 0xC, size 0x4
    float dist; // offset 0x10, size 0x4
    class xVec3 norm; // offset 0x14, size 0xC
    class xVec3 tohit; // offset 0x20, size 0xC
    class xVec3 depen; // offset 0x2C, size 0xC
    class xVec3 hdng; // offset 0x38, size 0xC
    union { // inferred
        class /* @class */ {
            // total size: 0xC
        public:
            float t; // offset 0x0, size 0x4
            float u; // offset 0x4, size 0x4
            float v; // offset 0x8, size 0x4
        } tuv; // offset 0x44, size 0xC
        class tri_data tri; // offset 0x44, size 0xC
    };
};
class zEntTrigger : public zEnt {
    // total size: 0x140
public:
    class xMat4x3 triggerMatrix; // offset 0xE0, size 0x40
    class xBox triggerBox; // offset 0x120, size 0x18
    unsigned int entered; // offset 0x138, size 0x4
};
class xEnt : public xBase {
    // total size: 0xD0
public:
    class xEntAsset * asset; // offset 0x10, size 0x4
    unsigned short idx; // offset 0x14, size 0x2
    unsigned short num_updates; // offset 0x16, size 0x2
    unsigned char flags; // offset 0x18, size 0x1
    unsigned char miscflags; // offset 0x19, size 0x1
    unsigned char subType; // offset 0x1A, size 0x1
    unsigned char pflags; // offset 0x1B, size 0x1
    unsigned char moreFlags; // offset 0x1C, size 0x1
    unsigned char isCulled; // offset 0x1D, size 0x1
    unsigned char driving_count; // offset 0x1E, size 0x1
    unsigned char num_ffx; // offset 0x1F, size 0x1
    unsigned char collType; // offset 0x20, size 0x1
    unsigned char collLev; // offset 0x21, size 0x1
    unsigned char chkby; // offset 0x22, size 0x1
    unsigned char penby; // offset 0x23, size 0x1
    class xModelInstance * model; // offset 0x24, size 0x4
    class xModelInstance * collModel; // offset 0x28, size 0x4
    class xModelInstance * camcollModel; // offset 0x2C, size 0x4
    class xLightKit * lightKit; // offset 0x30, size 0x4
    void (* update)(class xEnt *, class xScene *, float); // offset 0x34, size 0x4
    void (* endUpdate)(class xEnt *, class xScene *, float); // offset 0x38, size 0x4
    void (* bupdate)(class xEnt *, class xVec3 *); // offset 0x3C, size 0x4
    void (* move)(class xEnt *, class xScene *, float, class xEntFrame *); // offset 0x40, size 0x4
    void (* render)(class xEnt *); // offset 0x44, size 0x4
    class xEntFrame * frame; // offset 0x48, size 0x4
    class xEntCollis * collis; // offset 0x4C, size 0x4
    class xGridBound gridb; // offset 0x50, size 0x14
    class xBound bound; // offset 0x64, size 0x4C
    void (* transl)(class xEnt *, class xVec3 *, class xMat4x3 *); // offset 0xB0, size 0x4
    class xFFX * ffx; // offset 0xB4, size 0x4
    class xEnt * driver; // offset 0xB8, size 0x4
    signed int driveMode; // offset 0xBC, size 0x4
    class xShadowSimpleCache * simpShadow; // offset 0xC0, size 0x4
    class xEntShadow * entShadow; // offset 0xC4, size 0x4
    class anim_coll_data * anim_coll; // offset 0xC8, size 0x4
    void * user_data; // offset 0xCC, size 0x4
};
class xAnimTransition {
    // total size: 0x2C
public:
    class xAnimTransition * Next; // offset 0x0, size 0x4
    class xAnimState * Dest; // offset 0x4, size 0x4
    unsigned int (* Conditional)(class xAnimTransition *, class xAnimSingle *, void *); // offset 0x8, size 0x4
    unsigned int (* Callback)(class xAnimTransition *, class xAnimSingle *, void *); // offset 0xC, size 0x4
    unsigned int Flags; // offset 0x10, size 0x4
    unsigned int UserFlags; // offset 0x14, size 0x4
    float SrcTime; // offset 0x18, size 0x4
    float DestTime; // offset 0x1C, size 0x4
    unsigned short Priority; // offset 0x20, size 0x2
    unsigned short QueuePriority; // offset 0x22, size 0x2
    float BlendRecip; // offset 0x24, size 0x4
    unsigned short * BlendOffset; // offset 0x28, size 0x4
};
class xBound {
    // total size: 0x4C
public:
    class xQCData qcd; // offset 0x0, size 0x20
    unsigned char type; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    union { // inferred
        class xSphere sph; // offset 0x24, size 0x10
        class xBBox box; // offset 0x24, size 0x24
        class xCylinder cyl; // offset 0x24, size 0x14
    };
    class xMat4x3 * mat; // offset 0x48, size 0x4
};
class xBase {
    // total size: 0x10
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class xLinkAsset * link; // offset 0x8, size 0x4
    signed int (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *); // offset 0xC, size 0x4
};
class zNPCLassoInfo {
    // total size: 0x18
public:
    enum en_LASSO_STATUS stage; // offset 0x0, size 0x4
    class xEnt * lassoee; // offset 0x4, size 0x4
    class xAnimState * holdGuideAnim; // offset 0x8, size 0x4
    class xModelInstance * holdGuideModel; // offset 0xC, size 0x4
    class xAnimState * grabGuideAnim; // offset 0x10, size 0x4
    class xModelInstance * grabGuideModel; // offset 0x14, size 0x4
};
class RpWorld {
    // total size: 0x70
public:
    class RwObject object; // offset 0x0, size 0x8
    unsigned int flags; // offset 0x8, size 0x4
    enum RpWorldRenderOrder renderOrder; // offset 0xC, size 0x4
    class RpMaterialList matList; // offset 0x10, size 0xC
    class RpSector * rootSector; // offset 0x1C, size 0x4
    signed int numTexCoordSets; // offset 0x20, size 0x4
    signed int numClumpsInWorld; // offset 0x24, size 0x4
    class RwLLLink * currentClumpLink; // offset 0x28, size 0x4
    class RwLinkList clumpList; // offset 0x2C, size 0x8
    class RwLinkList lightList; // offset 0x34, size 0x8
    class RwLinkList directionalLightList; // offset 0x3C, size 0x8
    class RwV3d worldOrigin; // offset 0x44, size 0xC
    class RwBBox boundingBox; // offset 0x50, size 0x18
    class RpWorldSector * (* renderCallBack)(class RpWorldSector *); // offset 0x68, size 0x4
    class RxPipeline * pipeline; // offset 0x6C, size 0x4
};
class xLightKit {
    // total size: 0x10
public:
    unsigned int tagID; // offset 0x0, size 0x4
    unsigned int groupID; // offset 0x4, size 0x4
    unsigned int lightCount; // offset 0x8, size 0x4
    class xLightKitLight * lightList; // offset 0xC, size 0x4
};
class xScene {
    // total size: 0x70
public:
    unsigned int sceneID; // offset 0x0, size 0x4
    unsigned short flags; // offset 0x4, size 0x2
    unsigned short num_ents; // offset 0x6, size 0x2
    unsigned short num_trigs; // offset 0x8, size 0x2
    unsigned short num_stats; // offset 0xA, size 0x2
    unsigned short num_dyns; // offset 0xC, size 0x2
    unsigned short num_npcs; // offset 0xE, size 0x2
    unsigned short num_act_ents; // offset 0x10, size 0x2
    unsigned short num_nact_ents; // offset 0x12, size 0x2
    float gravity; // offset 0x14, size 0x4
    float drag; // offset 0x18, size 0x4
    float friction; // offset 0x1C, size 0x4
    unsigned short num_ents_allocd; // offset 0x20, size 0x2
    unsigned short num_trigs_allocd; // offset 0x22, size 0x2
    unsigned short num_stats_allocd; // offset 0x24, size 0x2
    unsigned short num_dyns_allocd; // offset 0x26, size 0x2
    unsigned short num_npcs_allocd; // offset 0x28, size 0x2
    class xEnt * * trigs; // offset 0x2C, size 0x4
    class xEnt * * stats; // offset 0x30, size 0x4
    class xEnt * * dyns; // offset 0x34, size 0x4
    class xEnt * * npcs; // offset 0x38, size 0x4
    class xEnt * * act_ents; // offset 0x3C, size 0x4
    class xEnt * * nact_ents; // offset 0x40, size 0x4
    class xEnv * env; // offset 0x44, size 0x4
    class xMemPool mempool; // offset 0x48, size 0x1C
    class xBase * (* resolvID)(unsigned int); // offset 0x64, size 0x4
    char * (* base2Name)(class xBase *); // offset 0x68, size 0x4
    char * (* id2Name)(unsigned int); // offset 0x6C, size 0x4
};
class RwFrustumPlane {
    // total size: 0x14
public:
    class RwPlane plane; // offset 0x0, size 0x10
    unsigned char closestX; // offset 0x10, size 0x1
    unsigned char closestY; // offset 0x11, size 0x1
    unsigned char closestZ; // offset 0x12, size 0x1
    unsigned char pad; // offset 0x13, size 0x1
};
class RwTexDictionary {
    // total size: 0x18
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
class RayBundle {
    // total size: 0x9C
public:
    class RwV3d delta; // offset 0x0, size 0xC
    float rayup; // offset 0xC, size 0x4
    class RwV3d locdelta; // offset 0x10, size 0xC
    class RwV3d raystart[4]; // offset 0x1C, size 0x30
    class RwV3d raylocal[4]; // offset 0x4C, size 0x30
    float raydist[4]; // offset 0x7C, size 0x10
    unsigned int rayhit[4]; // offset 0x8C, size 0x10
};
class xPar {
    // total size: 0x60
public:
    class xPar * m_next; // offset 0x0, size 0x4
    class xPar * m_prev; // offset 0x4, size 0x4
    float m_lifetime; // offset 0x8, size 0x4
    unsigned char m_c[4]; // offset 0xC, size 0x4
    class xVec3 m_pos; // offset 0x10, size 0xC
    float m_size; // offset 0x1C, size 0x4
    class xVec3 m_vel; // offset 0x20, size 0xC
    float m_sizeVel; // offset 0x2C, size 0x4
    unsigned char m_flag; // offset 0x30, size 0x1
    unsigned char m_mode; // offset 0x31, size 0x1
    unsigned char m_texIdx[2]; // offset 0x32, size 0x2
    unsigned char m_rotdeg[3]; // offset 0x34, size 0x3
    unsigned char pad8; // offset 0x37, size 0x1
    float totalLifespan; // offset 0x38, size 0x4
    class xParEmitterAsset * m_asset; // offset 0x3C, size 0x4
    float m_cvel[4]; // offset 0x40, size 0x10
    float m_cfl[4]; // offset 0x50, size 0x10
};
class RxNodeDefinition {
    // total size: 0x40
public:
    char * name; // offset 0x0, size 0x4
    class RxNodeMethods nodeMethods; // offset 0x4, size 0x1C
    class RxIoSpec io; // offset 0x20, size 0x14
    unsigned int pipelineNodePrivateDataSize; // offset 0x34, size 0x4
    enum RxNodeDefEditable editable; // offset 0x38, size 0x4
    signed int InputPipesCnt; // offset 0x3C, size 0x4
};
class zScene : public xScene {
    // total size: 0x2C8
public:
    class _zPortal * pendingPortal; // offset 0x70, size 0x4
    union { // inferred
        unsigned int num_ents; // offset 0x74, size 0x4
        unsigned int num_base; // offset 0x74, size 0x4
    };
    union { // inferred
        class xBase * * base; // offset 0x78, size 0x4
        class zEnt * * ents; // offset 0x78, size 0x4
    };
    unsigned int num_update_base; // offset 0x7C, size 0x4
    class xBase * * update_base; // offset 0x80, size 0x4
    unsigned int baseCount[72]; // offset 0x84, size 0x120
    class xBase * baseList[72]; // offset 0x1A4, size 0x120
    class _zEnv * zen; // offset 0x2C4, size 0x4
};
class xAnimSingle {
    // total size: 0x40
public:
    unsigned int SingleFlags; // offset 0x0, size 0x4
    class xAnimState * State; // offset 0x4, size 0x4
    float Time; // offset 0x8, size 0x4
    float CurrentSpeed; // offset 0xC, size 0x4
    float BilinearLerp[2]; // offset 0x10, size 0x8
    class xAnimEffect * Effect; // offset 0x18, size 0x4
    unsigned int ActiveCount; // offset 0x1C, size 0x4
    float LastTime; // offset 0x20, size 0x4
    class xAnimActiveEffect * ActiveList; // offset 0x24, size 0x4
    class xAnimPlay * Play; // offset 0x28, size 0x4
    class xAnimTransition * Sync; // offset 0x2C, size 0x4
    class xAnimTransition * Tran; // offset 0x30, size 0x4
    class xAnimSingle * Blend; // offset 0x34, size 0x4
    float BlendFactor; // offset 0x38, size 0x4
    unsigned int pad; // offset 0x3C, size 0x4
};
class zFragParticleAsset : public zFragAsset {
    // total size: 0x1D4
public:
    class zFragLocation source; // offset 0x18, size 0x24
    class zFragLocation vel; // offset 0x3C, size 0x24
    class xParEmitterCustomSettings emit; // offset 0x60, size 0x16C
    unsigned int parEmitterID; // offset 0x1CC, size 0x4
    class zParEmitter * parEmitter; // offset 0x1D0, size 0x4
};
class RwResEntry {
    // total size: 0x18
public:
    class RwLLLink link; // offset 0x0, size 0x8
    signed int size; // offset 0x8, size 0x4
    void * owner; // offset 0xC, size 0x4
    class RwResEntry * * ownerRef; // offset 0x10, size 0x4
    void (* destroyNotify)(class RwResEntry *); // offset 0x14, size 0x4
};
class zSurfAssetBase : public xBaseAsset {
    // total size: 0x12C
public:
    unsigned char game_damage_type; // offset 0x8, size 0x1
    unsigned char game_sticky; // offset 0x9, size 0x1
    unsigned char game_damage_flags; // offset 0xA, size 0x1
    unsigned char surf_type; // offset 0xB, size 0x1
    unsigned char phys_pad; // offset 0xC, size 0x1
    unsigned char sld_start; // offset 0xD, size 0x1
    unsigned char sld_stop; // offset 0xE, size 0x1
    unsigned char phys_flags; // offset 0xF, size 0x1
    float friction; // offset 0x10, size 0x4
    class zSurfMatFX matfx; // offset 0x14, size 0x18
    class zSurfColorFX colorfx; // offset 0x2C, size 0x8
    unsigned int texture_anim_flags; // offset 0x34, size 0x4
    class zSurfTextureAnim texture_anim[2]; // offset 0x38, size 0x18
    unsigned int uvfx_flags; // offset 0x50, size 0x4
    class zSurfUVFX uvfx[2]; // offset 0x54, size 0xC0
    unsigned char on; // offset 0x114, size 0x1
    unsigned char surf_pad[3]; // offset 0x115, size 0x3
    float oob_delay; // offset 0x118, size 0x4
    float walljump_scale_xz; // offset 0x11C, size 0x4
    float walljump_scale_y; // offset 0x120, size 0x4
    float damage_timer; // offset 0x124, size 0x4
    float damage_bounce; // offset 0x128, size 0x4
};
class xModelAssetParam {
    // total size: 0x0
};
class zParEmitter : public xParEmitter {
    // total size: 0x78
};
class xEntFrame {
    // total size: 0xF0
public:
    class xMat4x3 mat; // offset 0x0, size 0x40
    class xMat4x3 oldmat; // offset 0x40, size 0x40
    class xVec3 oldvel; // offset 0x80, size 0xC
    class xRot oldrot; // offset 0x8C, size 0x10
    class xRot drot; // offset 0x9C, size 0x10
    class xRot rot; // offset 0xAC, size 0x10
    class xVec3 dpos; // offset 0xBC, size 0xC
    class xVec3 dvel; // offset 0xC8, size 0xC
    class xVec3 vel; // offset 0xD4, size 0xC
    unsigned int mode; // offset 0xE0, size 0x4
};
class zPlatform : public zEnt {
    // total size: 0x210
public:
    class xPlatformAsset * passet; // offset 0xD4, size 0x4
    class xEntMotion motion; // offset 0xE0, size 0x80
    unsigned short state; // offset 0x160, size 0x2
    unsigned short plat_flags; // offset 0x162, size 0x2
    float tmr; // offset 0x164, size 0x4
    signed int ctr; // offset 0x168, size 0x4
    class xMovePoint * src; // offset 0x16C, size 0x4
    class xModelInstance * am; // offset 0x170, size 0x4
    class xModelInstance * bm; // offset 0x174, size 0x4
    signed int moving; // offset 0x178, size 0x4
    class xEntDrive drv; // offset 0x17C, size 0x7C
    class zPlatFMRunTime * fmrt; // offset 0x1F8, size 0x4
    float pauseMult; // offset 0x1FC, size 0x4
    float pauseDelta; // offset 0x200, size 0x4
};
class xCutsceneInfo {
    // total size: 0x50
public:
    unsigned int Magic; // offset 0x0, size 0x4
    unsigned int AssetID; // offset 0x4, size 0x4
    unsigned int NumData; // offset 0x8, size 0x4
    unsigned int NumTime; // offset 0xC, size 0x4
    unsigned int MaxModel; // offset 0x10, size 0x4
    unsigned int MaxBufEven; // offset 0x14, size 0x4
    unsigned int MaxBufOdd; // offset 0x18, size 0x4
    unsigned int HeaderSize; // offset 0x1C, size 0x4
    unsigned int VisCount; // offset 0x20, size 0x4
    unsigned int VisSize; // offset 0x24, size 0x4
    unsigned int BreakCount; // offset 0x28, size 0x4
    unsigned int pad; // offset 0x2C, size 0x4
    char SoundLeft[16]; // offset 0x30, size 0x10
    char SoundRight[16]; // offset 0x40, size 0x10
};
class xEntBoulder : public xEnt {
    // total size: 0x1E8
public:
    class xEntBoulderAsset * basset; // offset 0xD0, size 0x4
    class xShadowSimpleCache simpShadow_embedded; // offset 0xD4, size 0x98
    class xEntShadow entShadow_embedded; // offset 0x16C, size 0x28
    class xVec3 localCenter; // offset 0x194, size 0xC
    class xVec3 vel; // offset 0x1A0, size 0xC
    class xVec3 rotVec; // offset 0x1AC, size 0xC
    class xVec3 force; // offset 0x1B8, size 0xC
    class xVec3 instForce; // offset 0x1C4, size 0xC
    float angVel; // offset 0x1D0, size 0x4
    float timeToLive; // offset 0x1D4, size 0x4
    signed int hitpoints; // offset 0x1D8, size 0x4
    float lastRolling; // offset 0x1DC, size 0x4
    unsigned int rollingID; // offset 0x1E0, size 0x4
    unsigned char collis_chk; // offset 0x1E4, size 0x1
    unsigned char collis_pen; // offset 0x1E5, size 0x1
    unsigned char pad1[2]; // offset 0x1E6, size 0x2
};
class RwPlane {
    // total size: 0x10
public:
    class RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
};
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
};
class xAnimTransitionList {
    // total size: 0x8
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
};
class RxPipelineNode {
    // total size: 0x28
public:
    class RxNodeDefinition * nodeDef; // offset 0x0, size 0x4
    unsigned int numOutputs; // offset 0x4, size 0x4
    unsigned int * outputs; // offset 0x8, size 0x4
    class RxPipelineCluster * * slotClusterRefs; // offset 0xC, size 0x4
    unsigned int * slotsContinue; // offset 0x10, size 0x4
    void * privateData; // offset 0x14, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x18, size 0x4
    class RxPipelineNodeTopSortData * topSortData; // offset 0x1C, size 0x4
    void * initializationData; // offset 0x20, size 0x4
    unsigned int initializationDataSize; // offset 0x24, size 0x4
};
class xTriggerAsset {
    // total size: 0x40
public:
    class xVec3 p[4]; // offset 0x0, size 0x30
    class xVec3 direction; // offset 0x30, size 0xC
    unsigned int flags; // offset 0x3C, size 0x4
};
class _tagEmitRect {
    // total size: 0x8
public:
    float x_len; // offset 0x0, size 0x4
    float z_len; // offset 0x4, size 0x4
};
class xCutsceneData {
    // total size: 0x10
public:
    unsigned int DataType; // offset 0x0, size 0x4
    unsigned int AssetID; // offset 0x4, size 0x4
    unsigned int ChunkSize; // offset 0x8, size 0x4
    union { // inferred
        unsigned int FileOffset; // offset 0xC, size 0x4
        void * DataPtr; // offset 0xC, size 0x4
    };
};
class zPlatFMRunTime {
    // total size: 0x124
public:
    unsigned int flags; // offset 0x0, size 0x4
    float tmrs[12]; // offset 0x4, size 0x30
    float ttms[12]; // offset 0x34, size 0x30
    float atms[12]; // offset 0x64, size 0x30
    float dtms[12]; // offset 0x94, size 0x30
    float vms[12]; // offset 0xC4, size 0x30
    float dss[12]; // offset 0xF4, size 0x30
};
class RwRGBA {
    // total size: 0x4
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
class xClumpCollBSPBranchNode {
    // total size: 0x10
public:
    unsigned int leftInfo; // offset 0x0, size 0x4
    unsigned int rightInfo; // offset 0x4, size 0x4
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
class xMovePointAsset : public xBaseAsset {
    // total size: 0x28
public:
    class xVec3 pos; // offset 0x8, size 0xC
    unsigned short wt; // offset 0x14, size 0x2
    unsigned char on; // offset 0x16, size 0x1
    unsigned char bezIndex; // offset 0x17, size 0x1
    unsigned char flg_props; // offset 0x18, size 0x1
    unsigned char pad; // offset 0x19, size 0x1
    unsigned short numPoints; // offset 0x1A, size 0x2
    float delay; // offset 0x1C, size 0x4
    float zoneRadius; // offset 0x20, size 0x4
    float arenaRadius; // offset 0x24, size 0x4
};
class xParCmd {
    // total size: 0x8
public:
    unsigned int flag; // offset 0x0, size 0x4
    class xParCmdAsset * tasset; // offset 0x4, size 0x4
};
class xAnimTable {
    // total size: 0x1C
public:
    class xAnimTable * Next; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
    class xAnimTransition * TransitionList; // offset 0x8, size 0x4
    class xAnimState * StateList; // offset 0xC, size 0x4
    unsigned int AnimIndex; // offset 0x10, size 0x4
    unsigned int MorphIndex; // offset 0x14, size 0x4
    unsigned int UserFlags; // offset 0x18, size 0x4
};
enum en_dupowavmod {
    NPCP_DUPOWAVE_CONTINUOUS = 0,
    NPCP_DUPOWAVE_DISCREET = 1,
    NPCP_DUPOWAVE_NOMORE = 2,
    NPCP_DUPOWAVE_FORCE = 2147483647,
};
class iFogParams {
    // total size: 0x1C
public:
    enum RwFogType type; // offset 0x0, size 0x4
    float start; // offset 0x4, size 0x4
    float stop; // offset 0x8, size 0x4
    float density; // offset 0xC, size 0x4
    class RwRGBA fogcolor; // offset 0x10, size 0x4
    class RwRGBA bgcolor; // offset 0x14, size 0x4
    unsigned char * table; // offset 0x18, size 0x4
};
class xParGroup {
    // total size: 0x24
public:
    class xPar * m_root; // offset 0x0, size 0x4
    class xPar * m_dead; // offset 0x4, size 0x4
    signed int m_num_of_particles; // offset 0x8, size 0x4
    unsigned char m_alive; // offset 0xC, size 0x1
    unsigned char m_killWhenDead; // offset 0xD, size 0x1
    unsigned char m_active; // offset 0xE, size 0x1
    unsigned char m_visible; // offset 0xF, size 0x1
    unsigned char m_culled; // offset 0x10, size 0x1
    unsigned char m_priority; // offset 0x11, size 0x1
    unsigned char m_flags; // offset 0x12, size 0x1
    unsigned char m_regidx; // offset 0x13, size 0x1
    class xParGroup * m_next; // offset 0x14, size 0x4
    class xParGroup * m_prev; // offset 0x18, size 0x4
    void (* draw)(void *, class xParGroup *); // offset 0x1C, size 0x4
    class xParCmdTex * m_cmdTex; // offset 0x20, size 0x4
};
class NPCConfig : public xListItem {
    // total size: 0x3B0
public:
    unsigned int modelID; // offset 0xC, size 0x4
    signed int flg_config; // offset 0x10, size 0x4
    float spd_turnMax; // offset 0x14, size 0x4
    float spd_moveMax; // offset 0x18, size 0x4
    float fac_accelMax; // offset 0x1C, size 0x4
    float fac_driftMax; // offset 0x20, size 0x4
    float fac_gravKnock; // offset 0x24, size 0x4
    float fac_elastic; // offset 0x28, size 0x4
    signed int pts_damage; // offset 0x2C, size 0x4
    signed int useBoxBound; // offset 0x30, size 0x4
    class xVec3 off_bound; // offset 0x34, size 0xC
    class xVec3 dim_bound; // offset 0x40, size 0xC
    float npcMass; // offset 0x4C, size 0x4
    float npcMassInv; // offset 0x50, size 0x4
    float rad_detect; // offset 0x54, size 0x4
    float hyt_detect; // offset 0x58, size 0x4
    float off_detect; // offset 0x5C, size 0x4
    float rad_attack; // offset 0x60, size 0x4
    float fov_attack; // offset 0x64, size 0x4
    class xVec3 scl_model; // offset 0x68, size 0xC
    float tym_attack; // offset 0x74, size 0x4
    float tym_fidget; // offset 0x78, size 0x4
    float tym_stun; // offset 0x7C, size 0x4
    float tym_alert; // offset 0x80, size 0x4
    float dst_castShadow; // offset 0x84, size 0x4
    float rad_shadowCache; // offset 0x88, size 0x4
    float rad_shadowRaster; // offset 0x8C, size 0x4
    float rad_dmgSize; // offset 0x90, size 0x4
    signed int flg_vert; // offset 0x94, size 0x4
    class xModelTag tag_vert[20]; // offset 0x98, size 0x280
    class xVec3 animFrameRange[9]; // offset 0x318, size 0x6C
    signed int cnt_esteem[5]; // offset 0x384, size 0x14
    float rad_sound; // offset 0x398, size 0x4
    class NPCSndTrax * snd_trax; // offset 0x39C, size 0x4
    class NPCSndTrax * snd_traxShare; // offset 0x3A0, size 0x4
    signed int test_count; // offset 0x3A4, size 0x4
    unsigned char talk_filter[4]; // offset 0x3A8, size 0x4
    unsigned char talk_filter_size; // offset 0x3AC, size 0x1
};
class RyzMemData {
    // total size: 0x1
};
class RxCluster {
    // total size: 0x1C
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short stride; // offset 0x2, size 0x2
    void * data; // offset 0x4, size 0x4
    void * currentData; // offset 0x8, size 0x4
    unsigned int numAlloced; // offset 0xC, size 0x4
    unsigned int numUsed; // offset 0x10, size 0x4
    class RxPipelineCluster * clusterRef; // offset 0x14, size 0x4
    unsigned int attributes; // offset 0x18, size 0x4
};
class xPSYNote {
    // total size: 0x4
};
class zNPCSettings : public xDynAsset {
    // total size: 0x2C
public:
    enum en_npcbtyp basisType; // offset 0x10, size 0x4
    char allowDetect; // offset 0x14, size 0x1
    char allowPatrol; // offset 0x15, size 0x1
    char allowWander; // offset 0x16, size 0x1
    char reduceCollide; // offset 0x17, size 0x1
    char useNavSplines; // offset 0x18, size 0x1
    char pad[3]; // offset 0x19, size 0x3
    char allowChase; // offset 0x1C, size 0x1
    char allowAttack; // offset 0x1D, size 0x1
    char assumeLOS; // offset 0x1E, size 0x1
    char assumeFOV; // offset 0x1F, size 0x1
    enum en_dupowavmod duploWaveMode; // offset 0x20, size 0x4
    float duploSpawnDelay; // offset 0x24, size 0x4
    signed int duploSpawnLifeMax; // offset 0x28, size 0x4
};
class xFFX {
    // total size: 0x10
public:
    unsigned int flags; // offset 0x0, size 0x4
    void (* doEffect)(class xEnt *, class xScene *, float, void *); // offset 0x4, size 0x4
    void * fdata; // offset 0x8, size 0x4
    class xFFX * next; // offset 0xC, size 0x4
};
class xGlobals {
    // total size: 0x700
public:
    class xCamera camera; // offset 0x0, size 0x330
    class _tagxPad * pad0; // offset 0x330, size 0x4
    class _tagxPad * pad1; // offset 0x334, size 0x4
    class _tagxPad * pad2; // offset 0x338, size 0x4
    class _tagxPad * pad3; // offset 0x33C, size 0x4
    signed int profile; // offset 0x340, size 0x4
    char profFunc[6][128]; // offset 0x344, size 0x300
    class xUpdateCullMgr * updateMgr; // offset 0x644, size 0x4
    signed int sceneFirst; // offset 0x648, size 0x4
    char sceneStart[32]; // offset 0x64C, size 0x20
    class RpWorld * currWorld; // offset 0x66C, size 0x4
    class iFogParams fog; // offset 0x670, size 0x1C
    class iFogParams fogA; // offset 0x68C, size 0x1C
    class iFogParams fogB; // offset 0x6A8, size 0x1C
    signed long fog_t0; // offset 0x6C8, size 0x4
    signed long fog_t1; // offset 0x6D0, size 0x4
    signed int option_vibration; // offset 0x6D8, size 0x4
    unsigned int QuarterSpeed; // offset 0x6DC, size 0x4
    float update_dt; // offset 0x6E0, size 0x4
    signed int useHIPHOP; // offset 0x6E4, size 0x4
    unsigned char NoMusic; // offset 0x6E8, size 0x1
    char currentActivePad; // offset 0x6E9, size 0x1
    unsigned char firstStartPressed; // offset 0x6EA, size 0x1
    unsigned int minVSyncCnt; // offset 0x6EC, size 0x4
    unsigned char dontShowPadMessageDuringLoadingOrCutScene; // offset 0x6F0, size 0x1
    unsigned char autoSaveFeature; // offset 0x6F1, size 0x1
};
class xMat4x3 : public xMat3x3 {
    // total size: 0x40
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
class zEntHangable : public zEnt {
    // total size: 0x12C
public:
    class xEntHangableAsset * hangInfo; // offset 0xD4, size 0x4
    class xVec3 pivot; // offset 0xD8, size 0xC
    class xVec3 endpos; // offset 0xE4, size 0xC
    class xVec3 vel; // offset 0xF0, size 0xC
    class xVec3 swingplane; // offset 0xFC, size 0xC
    float grabTimer; // offset 0x108, size 0x4
    float spin; // offset 0x10C, size 0x4
    unsigned int state; // offset 0x110, size 0x4
    class zEnt * shaggy; // offset 0x114, size 0x4
    signed int enabled; // offset 0x118, size 0x4
    class zEnt * follow; // offset 0x11C, size 0x4
    signed int moving; // offset 0x120, size 0x4
    float candle_timer; // offset 0x124, size 0x4
    signed int candle_state; // offset 0x128, size 0x4
};
class RpAtomic {
    // total size: 0x70
public:
    class RwObjectHasFrame object; // offset 0x0, size 0x14
    class RwResEntry * repEntry; // offset 0x14, size 0x4
    class RpGeometry * geometry; // offset 0x18, size 0x4
    class RwSphere boundingSphere; // offset 0x1C, size 0x10
    class RwSphere worldBoundingSphere; // offset 0x2C, size 0x10
    class RpClump * clump; // offset 0x3C, size 0x4
    class RwLLLink inClumpLink; // offset 0x40, size 0x8
    class RpAtomic * (* renderCallBack)(class RpAtomic *); // offset 0x48, size 0x4
    class RpInterpolator interpolator; // offset 0x4C, size 0x14
    unsigned short renderFrame; // offset 0x60, size 0x2
    unsigned short pad; // offset 0x62, size 0x2
    class RwLinkList llWorldSectorsInAtomic; // offset 0x64, size 0x8
    class RxPipeline * pipeline; // offset 0x6C, size 0x4
};
class RwV3d {
    // total size: 0xC
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
class RxPipelineNodeParam {
    // total size: 0x8
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
};
class zLightning {
    // total size: 0x234
public:
    unsigned int type; // offset 0x0, size 0x4
    unsigned int flags; // offset 0x4, size 0x4
    union { // inferred
        class /* @class */ {
            // total size: 0x220
        public:
            class xVec3 base_point[16]; // offset 0x0, size 0xC0
            class xVec3 point[16]; // offset 0xC0, size 0xC0
            signed short total_points; // offset 0x180, size 0x2
            signed short end_points; // offset 0x182, size 0x2
            float arc_height; // offset 0x184, size 0x4
            class xVec3 arc_normal; // offset 0x188, size 0xC
            float thickness[16]; // offset 0x194, size 0x40
            union { // inferred
                class _tagLightningLine line; // offset 0x1D4, size 0x4
                class _tagLightningRot rot; // offset 0x1D4, size 0x48
                class _tagLightningZeus zeus; // offset 0x1D4, size 0xC
            };
            float rand_radius; // offset 0x21C, size 0x4
        } legacy; // offset 0x8, size 0x220
        class /* @class */ {
            // total size: 0x58
        public:
            class xVec3 endPoint[2]; // offset 0x0, size 0x18
            class xVec3 direction; // offset 0x18, size 0xC
            float length; // offset 0x24, size 0x4
            float scale; // offset 0x28, size 0x4
            float width; // offset 0x2C, size 0x4
            float endParam[2]; // offset 0x30, size 0x8
            float endVel[2]; // offset 0x38, size 0x8
            float paramSpan[2]; // offset 0x40, size 0x8
            float arc_height; // offset 0x48, size 0x4
            class xVec3 arc_normal; // offset 0x4C, size 0xC
        } func; // offset 0x8, size 0x58
    };
    class iColor_tag color; // offset 0x228, size 0x4
    float time_left; // offset 0x22C, size 0x4
    float time_total; // offset 0x230, size 0x4
};
class RwFrame {
    // total size: 0xB0
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink inDirtyListLink; // offset 0x8, size 0x8
    class RwMatrixTag modelling; // offset 0x10, size 0x40
    class RwMatrixTag ltm; // offset 0x50, size 0x40
    class RwLinkList objectList; // offset 0x90, size 0x8
    class RwFrame * child; // offset 0x98, size 0x4
    class RwFrame * next; // offset 0x9C, size 0x4
    class RwFrame * root; // offset 0xA0, size 0x4
};
class xParEmitterCustomSettings : public xParEmitterPropsAsset {
    // total size: 0x16C
public:
    unsigned int custom_flags; // offset 0x138, size 0x4
    unsigned int attachToID; // offset 0x13C, size 0x4
    class xVec3 pos; // offset 0x140, size 0xC
    class xVec3 vel; // offset 0x14C, size 0xC
    float vel_angle_variation; // offset 0x158, size 0x4
    unsigned char rot[3]; // offset 0x15C, size 0x3
    unsigned char padding; // offset 0x15F, size 0x1
    float radius; // offset 0x160, size 0x4
    float emit_interval_current; // offset 0x164, size 0x4
    void * emit_volume; // offset 0x168, size 0x4
};
class xEnv {
    // total size: 0x50
public:
    class iEnv * geom; // offset 0x0, size 0x4
    class iEnv ienv; // offset 0x10, size 0x30
    class xLightKit * lightKit; // offset 0x40, size 0x4
};
class xCamera : public xBase {
    // total size: 0x330
public:
    class RwCamera * lo_cam; // offset 0x10, size 0x4
    class xMat4x3 mat; // offset 0x20, size 0x40
    class xMat4x3 omat; // offset 0x60, size 0x40
    class xMat3x3 mbasis; // offset 0xA0, size 0x30
    class xBound bound; // offset 0xD0, size 0x4C
    class xMat4x3 * tgt_mat; // offset 0x11C, size 0x4
    class xMat4x3 * tgt_omat; // offset 0x120, size 0x4
    class xBound * tgt_bound; // offset 0x124, size 0x4
    class xVec3 focus; // offset 0x128, size 0xC
    class xScene * sc; // offset 0x134, size 0x4
    class xVec3 tran_accum; // offset 0x138, size 0xC
    float fov; // offset 0x144, size 0x4
    unsigned int flags; // offset 0x148, size 0x4
    float tmr; // offset 0x14C, size 0x4
    float tm_acc; // offset 0x150, size 0x4
    float tm_dec; // offset 0x154, size 0x4
    float ltmr; // offset 0x158, size 0x4
    float ltm_acc; // offset 0x15C, size 0x4
    float ltm_dec; // offset 0x160, size 0x4
    float dmin; // offset 0x164, size 0x4
    float dmax; // offset 0x168, size 0x4
    float dcur; // offset 0x16C, size 0x4
    float dgoal; // offset 0x170, size 0x4
    float hmin; // offset 0x174, size 0x4
    float hmax; // offset 0x178, size 0x4
    float hcur; // offset 0x17C, size 0x4
    float hgoal; // offset 0x180, size 0x4
    float pmin; // offset 0x184, size 0x4
    float pmax; // offset 0x188, size 0x4
    float pcur; // offset 0x18C, size 0x4
    float pgoal; // offset 0x190, size 0x4
    float depv; // offset 0x194, size 0x4
    float hepv; // offset 0x198, size 0x4
    float pepv; // offset 0x19C, size 0x4
    float orn_epv; // offset 0x1A0, size 0x4
    float yaw_epv; // offset 0x1A4, size 0x4
    float pitch_epv; // offset 0x1A8, size 0x4
    float roll_epv; // offset 0x1AC, size 0x4
    class xQuat orn_cur; // offset 0x1B0, size 0x10
    class xQuat orn_goal; // offset 0x1C0, size 0x10
    class xQuat orn_diff; // offset 0x1D0, size 0x10
    float yaw_cur; // offset 0x1E0, size 0x4
    float yaw_goal; // offset 0x1E4, size 0x4
    float pitch_cur; // offset 0x1E8, size 0x4
    float pitch_goal; // offset 0x1EC, size 0x4
    float roll_cur; // offset 0x1F0, size 0x4
    float roll_goal; // offset 0x1F4, size 0x4
    float dct; // offset 0x1F8, size 0x4
    float dcd; // offset 0x1FC, size 0x4
    float dccv; // offset 0x200, size 0x4
    float dcsv; // offset 0x204, size 0x4
    float hct; // offset 0x208, size 0x4
    float hcd; // offset 0x20C, size 0x4
    float hccv; // offset 0x210, size 0x4
    float hcsv; // offset 0x214, size 0x4
    float pct; // offset 0x218, size 0x4
    float pcd; // offset 0x21C, size 0x4
    float pccv; // offset 0x220, size 0x4
    float pcsv; // offset 0x224, size 0x4
    float orn_ct; // offset 0x228, size 0x4
    float orn_cd; // offset 0x22C, size 0x4
    float orn_ccv; // offset 0x230, size 0x4
    float orn_csv; // offset 0x234, size 0x4
    float yaw_ct; // offset 0x238, size 0x4
    float yaw_cd; // offset 0x23C, size 0x4
    float yaw_ccv; // offset 0x240, size 0x4
    float yaw_csv; // offset 0x244, size 0x4
    float pitch_ct; // offset 0x248, size 0x4
    float pitch_cd; // offset 0x24C, size 0x4
    float pitch_ccv; // offset 0x250, size 0x4
    float pitch_csv; // offset 0x254, size 0x4
    float roll_ct; // offset 0x258, size 0x4
    float roll_cd; // offset 0x25C, size 0x4
    float roll_ccv; // offset 0x260, size 0x4
    float roll_csv; // offset 0x264, size 0x4
    class xVec4 frustplane[12]; // offset 0x270, size 0xC0
};
class RpSector {
    // total size: 0x4
public:
    signed int type; // offset 0x0, size 0x4
};
class zNPCCommon : public xNPCBasic {
    // total size: 0x2A0
public:
    class xEntAsset * entass; // offset 0x1BC, size 0x4
    class xEntNPCAsset * npcass; // offset 0x1C0, size 0x4
    class zNPCSettings * npcsetass; // offset 0x1C4, size 0x4
    signed int flg_vuln; // offset 0x1C8, size 0x4
    signed int flg_move; // offset 0x1CC, size 0x4
    signed int flg_misc; // offset 0x1D0, size 0x4
    signed int flg_able; // offset 0x1D4, size 0x4
    class NPCConfig * cfg_npc; // offset 0x1D8, size 0x4
    class zNPCSettings npcset; // offset 0x1DC, size 0x2C
    class zMovePoint * nav_past; // offset 0x208, size 0x4
    class zMovePoint * nav_curr; // offset 0x20C, size 0x4
    class zMovePoint * nav_dest; // offset 0x210, size 0x4
    class zMovePoint * nav_lead; // offset 0x214, size 0x4
    class xSpline3 * spl_mvptspline; // offset 0x218, size 0x4
    float len_mvptspline; // offset 0x21C, size 0x4
    float dst_curspline; // offset 0x220, size 0x4
    class xEntDrive * drv_data; // offset 0x224, size 0x4
    class xPsyche * psy_instinct; // offset 0x228, size 0x4
    class zNPCCommon * npc_duplodude; // offset 0x22C, size 0x4
    float spd_throttle; // offset 0x230, size 0x4
    signed int flg_xtrarend; // offset 0x234, size 0x4
    float tmr_fidget; // offset 0x238, size 0x4
    float tmr_invuln; // offset 0x23C, size 0x4
    class zShrapnelAsset * explosion; // offset 0x240, size 0x4
    class xModelAssetParam * parmdata; // offset 0x244, size 0x4
    unsigned int pdatsize; // offset 0x248, size 0x4
    class zNPCLassoInfo * lassdata; // offset 0x24C, size 0x4
    class NPCSndQueue snd_queue[4]; // offset 0x250, size 0x50
};
class xJSPHeader {
    // total size: 0x18
public:
    char idtag[4]; // offset 0x0, size 0x4
    unsigned int version; // offset 0x4, size 0x4
    unsigned int jspNodeCount; // offset 0x8, size 0x4
    class RpClump * clump; // offset 0xC, size 0x4
    class xClumpCollBSPTree * colltree; // offset 0x10, size 0x4
    class xJSPNodeInfo * jspNodeList; // offset 0x14, size 0x4
};
class xSurface : public xBase {
    // total size: 0x28
public:
    unsigned int idx; // offset 0x10, size 0x4
    unsigned int type; // offset 0x14, size 0x4
    union { // inferred
        unsigned int mat_idx; // offset 0x18, size 0x4
        class xEnt * ent; // offset 0x18, size 0x4
        void * obj; // offset 0x18, size 0x4
    };
    float friction; // offset 0x1C, size 0x4
    unsigned char state; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    void * moprops; // offset 0x24, size 0x4
};
class zSurfaceProps {
    // total size: 0x10C
public:
    class zSurfAssetBase * asset; // offset 0x0, size 0x4
    unsigned int texanim_flags; // offset 0x4, size 0x4
    class zSurfacePropTexAnim texanim[2]; // offset 0x8, size 0x30
    unsigned int uvfx_flags; // offset 0x38, size 0x4
    class zSurfacePropUVFX uvfx[2]; // offset 0x3C, size 0xD0
};
class RxPipeline {
    // total size: 0x34
public:
    signed int locked; // offset 0x0, size 0x4
    unsigned int numNodes; // offset 0x4, size 0x4
    class RxPipelineNode * nodes; // offset 0x8, size 0x4
    unsigned int packetNumClusterSlots; // offset 0xC, size 0x4
    enum rxEmbeddedPacketState embeddedPacketState; // offset 0x10, size 0x4
    class RxPacket * embeddedPacket; // offset 0x14, size 0x4
    unsigned int numInputRequirements; // offset 0x18, size 0x4
    class RxPipelineRequiresCluster * inputRequirements; // offset 0x1C, size 0x4
    void * superBlock; // offset 0x20, size 0x4
    unsigned int superBlockSize; // offset 0x24, size 0x4
    unsigned int entryPoint; // offset 0x28, size 0x4
    unsigned int pluginId; // offset 0x2C, size 0x4
    unsigned int pluginData; // offset 0x30, size 0x4
};
class xGoal : public xListItem, public xFactoryInst {
    // total size: 0x3C
public:
    class xPsyche * psyche; // offset 0x18, size 0x4
    signed int goalID; // offset 0x1C, size 0x4
    enum en_GOALSTATE stat; // offset 0x20, size 0x4
    signed int flg_able; // offset 0x24, size 0x4
    signed int (* fun_process)(class xGoal *, void *, enum en_trantype *, float, void *); // offset 0x28, size 0x4
    signed int (* fun_precalc)(class xGoal *, void *, float, void *); // offset 0x2C, size 0x4
    signed int (* fun_chkRule)(class xGoal *, void *, enum en_trantype *, float, void *); // offset 0x30, size 0x4
    void * cbdata; // offset 0x34, size 0x4
};
class RwMatrixTag {
    // total size: 0x40
public:
    class RwV3d right; // offset 0x0, size 0xC
    unsigned int flags; // offset 0xC, size 0x4
    class RwV3d up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class RwV3d at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
    class RwV3d pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
class RxPacket {
    // total size: 0x30
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short numClusters; // offset 0x2, size 0x2
    class RxPipeline * pipeline; // offset 0x4, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x8, size 0x4
    unsigned int * slotsContinue; // offset 0xC, size 0x4
    class RxPipelineCluster * * slotClusterRefs; // offset 0x10, size 0x4
    class RxCluster clusters[1]; // offset 0x14, size 0x1C
};
class _tagxPad {
    // total size: 0x148
public:
    unsigned char value[22]; // offset 0x0, size 0x16
    unsigned char last_value[22]; // offset 0x16, size 0x16
    unsigned int on; // offset 0x2C, size 0x4
    unsigned int pressed; // offset 0x30, size 0x4
    unsigned int released; // offset 0x34, size 0x4
    class _tagPadAnalog analog1; // offset 0x38, size 0x2
    class _tagPadAnalog analog2; // offset 0x3A, size 0x2
    enum _tagPadState state; // offset 0x3C, size 0x4
    unsigned int flags; // offset 0x40, size 0x4
    class _tagxRumble rumble_head; // offset 0x44, size 0x10
    signed short port; // offset 0x54, size 0x2
    signed short slot; // offset 0x56, size 0x2
    class _tagiPad context; // offset 0x58, size 0x4
    float al2d_timer; // offset 0x5C, size 0x4
    float ar2d_timer; // offset 0x60, size 0x4
    float d_timer; // offset 0x64, size 0x4
    float up_tmr[22]; // offset 0x68, size 0x58
    float down_tmr[22]; // offset 0xC0, size 0x58
    class analog_data analog[2]; // offset 0x118, size 0x30
};
class xParCmdTex : public xParCmdAsset {
    // total size: 0x24
public:
    float x1; // offset 0x8, size 0x4
    float y1; // offset 0xC, size 0x4
    float x2; // offset 0x10, size 0x4
    float y2; // offset 0x14, size 0x4
    unsigned char birthMode; // offset 0x18, size 0x1
    unsigned char rows; // offset 0x19, size 0x1
    unsigned char cols; // offset 0x1A, size 0x1
    unsigned char unit_count; // offset 0x1B, size 0x1
    float unit_width; // offset 0x1C, size 0x4
    float unit_height; // offset 0x20, size 0x4
};
class xPortalAsset : public xBaseAsset {
    // total size: 0x18
public:
    unsigned int assetCameraID; // offset 0x8, size 0x4
    unsigned int assetMarkerID; // offset 0xC, size 0x4
    float ang; // offset 0x10, size 0x4
    unsigned int sceneID; // offset 0x14, size 0x4
};
enum zControlOwner {
    CONTROL_OWNER_GLOBAL = 1,
    CONTROL_OWNER_EVENT = 2,
    CONTROL_OWNER_OOB = 4,
    CONTROL_OWNER_BOSS = 8,
    CONTROL_OWNER_TALK_BOX = 16,
    CONTROL_OWNER_TAXI = 32,
    CONTROL_OWNER_BUS_STOP = 64,
    CONTROL_OWNER_TELEPORT_BOX = 128,
    CONTROL_OWNER_CRUISE_BUBBLE = 256,
    CONTROL_OWNER_FLY_CAM = 512,
    CONTROL_OWNER_FROZEN = 1024,
    CONTROL_OWNER_TURRET = 2048,
    CONTROL_OWNER_REWARDANIM = 4096,
    CONTROL_OWNER_BUNGEE = 8192,
    CONTROL_OWNER_SPRINGBOARD = 16384,
    CONTROL_OWNER_CUTSCENE = 32768,
};
class xCutsceneBreak {
    // total size: 0x8
public:
    float Time; // offset 0x0, size 0x4
    signed int Index; // offset 0x4, size 0x4
};
class RxPipelineCluster {
    // total size: 0x8
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
class xPlatformFRData {
    // total size: 0x10
public:
    float fspeed; // offset 0x0, size 0x4
    float rspeed; // offset 0x4, size 0x4
    float ret_delay; // offset 0x8, size 0x4
    float post_ret_delay; // offset 0xC, size 0x4
};
class RpIntersection {
    // total size: 0x1C
public:
    class RpIntersectData t; // offset 0x0, size 0x18
    enum RpIntersectType type; // offset 0x18, size 0x4
};
class xCutsceneTime {
    // total size: 0x10
public:
    float StartTime; // offset 0x0, size 0x4
    float EndTime; // offset 0x4, size 0x4
    unsigned int NumData; // offset 0x8, size 0x4
    unsigned int ChunkIndex; // offset 0xC, size 0x4
};
enum _tagePlayerSnd {
    ePlayerSnd_Invalid = 0,
    ePlayerSnd_Land = 1,
    ePlayerSnd_Jump = 2,
    ePlayerSnd_DoubleJump = 3,
    ePlayerSnd_BowlWindup = 4,
    ePlayerSnd_BowlRelease = 5,
    ePlayerSnd_BubbleBashStart = 6,
    ePlayerSnd_BubbleBashHit1 = 7,
    ePlayerSnd_BubbleBashHitStart = 7,
    ePlayerSnd_BubbleBashHit2 = 8,
    ePlayerSnd_BubbleBashHitEnd = 8,
    ePlayerSnd_BubbleWand = 9,
    ePlayerSnd_CruiseStart = 10,
    ePlayerSnd_CruiseNavigate = 11,
    ePlayerSnd_CruiseHit = 12,
    ePlayerSnd_BounceStrike = 13,
    ePlayerSnd_BoulderStart = 14,
    ePlayerSnd_BoulderRoll = 15,
    ePlayerSnd_BoulderEnd = 16,
    ePlayerSnd_BellyMelee = 17,
    ePlayerSnd_BellySmash = 18,
    ePlayerSnd_Lift1 = 19,
    ePlayerSnd_Throw = 20,
    ePlayerSnd_Chop = 21,
    ePlayerSnd_Kick = 22,
    ePlayerSnd_Heli = 23,
    ePlayerSnd_LassoThrow = 24,
    ePlayerSnd_LassoYank = 25,
    ePlayerSnd_LassoStretch = 26,
    ePlayerSnd_Ouch1 = 27,
    ePlayerSnd_OuchStart = 27,
    ePlayerSnd_Ouch2 = 28,
    ePlayerSnd_Ouch3 = 29,
    ePlayerSnd_Ouch4 = 30,
    ePlayerSnd_OuchEnd = 30,
    ePlayerSnd_Death = 31,
    ePlayerSnd_FruitCrackle = 32,
    ePlayerSnd_CheckPoint = 33,
    ePlayerSnd_PickupSpatula = 34,
    ePlayerSnd_PickupUnderwear = 35,
    ePlayerSnd_Bus = 36,
    ePlayerSnd_Taxi = 37,
    ePlayerSnd_SlideLoop = 38,
    ePlayerSnd_BeginBungee = 39,
    ePlayerSnd_BungeeWind = 39,
    ePlayerSnd_BungeeAttach = 40,
    ePlayerSnd_BungeeRelease = 41,
    ePlayerSnd_EndBungee = 41,
    ePlayerSnd_PickupSpatulaComment = 42,
    ePlayerSnd_BungeeDive1 = 43,
    ePlayerSnd_BungeeDive2 = 44,
    ePlayerSnd_Sneak = 45,
    ePlayerSnd_SlipLoop = 46,
    ePlayerSnd_Total = 47,
};
class zSurfMatFX {
    // total size: 0x18
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int bumpmapID; // offset 0x4, size 0x4
    unsigned int envmapID; // offset 0x8, size 0x4
    float shininess; // offset 0xC, size 0x4
    float bumpiness; // offset 0x10, size 0x4
    unsigned int dualmapID; // offset 0x14, size 0x4
};
enum PSY_BRAIN_STATUS {
    PSY_STAT_BLANK = 0,
    PSY_STAT_GROW = 1,
    PSY_STAT_EXTEND = 2,
    PSY_STAT_THINK = 3,
    PSY_STAT_NOMORE = 4,
    PSY_STAT_FORCE = 2147483647,
};
class zFragLightning {
    // total size: 0x10
public:
    class zFragLightningAsset * fasset; // offset 0x0, size 0x4
    class xModelInstance * startParent; // offset 0x4, size 0x4
    class xModelInstance * endParent; // offset 0x8, size 0x4
    class zLightning * lightning; // offset 0xC, size 0x4
};
class RwLLLink {
    // total size: 0x8
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
class xFFXRotMatchState {
    // total size: 0x44
public:
    signed int lgrounded; // offset 0x0, size 0x4
    class xVec3 lfup; // offset 0x4, size 0xC
    class xVec3 lfat; // offset 0x10, size 0xC
    class xVec3 plfat; // offset 0x1C, size 0xC
    float tmr; // offset 0x28, size 0x4
    float mrate; // offset 0x2C, size 0x4
    float tmatch; // offset 0x30, size 0x4
    float rrate; // offset 0x34, size 0x4
    float trelax; // offset 0x38, size 0x4
    float max_decl; // offset 0x3C, size 0x4
    class xFFXRotMatchState * next; // offset 0x40, size 0x4
};
class RxPipelineRequiresCluster {
    // total size: 0xC
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
};
class xShadowSimplePoly {
    // total size: 0x30
public:
    class xVec3 vert[3]; // offset 0x0, size 0x24
    class xVec3 norm; // offset 0x24, size 0xC
};
class zEnt : public xEnt {
    // total size: 0xD4
public:
    class xAnimTable * atbl; // offset 0xD0, size 0x4
};
class xEntDrive {
    // total size: 0x7C
public:
    unsigned int flags; // offset 0x0, size 0x4
    float otm; // offset 0x4, size 0x4
    float otmr; // offset 0x8, size 0x4
    float os; // offset 0xC, size 0x4
    float tm; // offset 0x10, size 0x4
    float tmr; // offset 0x14, size 0x4
    float s; // offset 0x18, size 0x4
    class xEnt * odriver; // offset 0x1C, size 0x4
    class xEnt * driver; // offset 0x20, size 0x4
    class xEnt * driven; // offset 0x24, size 0x4
    class xVec3 op; // offset 0x28, size 0xC
    class xVec3 p; // offset 0x34, size 0xC
    class xVec3 q; // offset 0x40, size 0xC
    float yaw; // offset 0x4C, size 0x4
    class xVec3 dloc; // offset 0x50, size 0xC
    class tri_data tri; // offset 0x5C, size 0x20
};
class zCheckPoint {
    // total size: 0x14
public:
    class xVec3 pos; // offset 0x0, size 0xC
    float rot; // offset 0xC, size 0x4
    unsigned int initCamID; // offset 0x10, size 0x4
};
class zFragBone {
    // total size: 0x10
public:
    signed int index; // offset 0x0, size 0x4
    class xVec3 offset; // offset 0x4, size 0xC
};
class xEntMotionOrbitData {
    // total size: 0x18
public:
    class xVec3 center; // offset 0x0, size 0xC
    float w; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
    float period; // offset 0x14, size 0x4
};
class iColor_tag {
    // total size: 0x4
public:
    unsigned char r; // offset 0x0, size 0x1
    unsigned char g; // offset 0x1, size 0x1
    unsigned char b; // offset 0x2, size 0x1
    unsigned char a; // offset 0x3, size 0x1
};
enum en_GOALSTATE {
    GOAL_STAT_UNKNOWN = 0,
    GOAL_STAT_PROCESS = 1,
    GOAL_STAT_ENTER = 2,
    GOAL_STAT_EXIT = 3,
    GOAL_STAT_SUSPEND = 4,
    GOAL_STAT_RESUME = 5,
    GOAL_STAT_PAUSED = 6,
    GOAL_STAT_DONE = 7,
    GOAL_STAT_NOMORE = 8,
    GOAL_STAT_FORCE = 2147483647,
};
class zFragLightningAsset : public zFragAsset {
    // total size: 0x68
public:
    class zFragLocation start; // offset 0x18, size 0x24
    class zFragLocation end; // offset 0x3C, size 0x24
    unsigned int startParentID; // offset 0x60, size 0x4
    unsigned int endParentID; // offset 0x64, size 0x4
};
class xAnimFile {
    // total size: 0x20
public:
    class xAnimFile * Next; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int FileFlags; // offset 0xC, size 0x4
    float Duration; // offset 0x10, size 0x4
    float TimeOffset; // offset 0x14, size 0x4
    unsigned short BoneCount; // offset 0x18, size 0x2
    unsigned char NumAnims[2]; // offset 0x1A, size 0x2
    void * * RawData; // offset 0x1C, size 0x4
};
class _zEnv : public xBase {
    // total size: 0x14
public:
    class xEnvAsset * easset; // offset 0x10, size 0x4
};
enum _CurrentPlayer {
    eCurrentPlayerSpongeBob = 0,
    eCurrentPlayerPatrick = 1,
    eCurrentPlayerSandy = 2,
    eCurrentPlayerCount = 3,
};
class RwRGBAReal {
    // total size: 0x10
public:
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
};
class RpClump {
    // total size: 0x2C
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList atomicList; // offset 0x8, size 0x8
    class RwLinkList lightList; // offset 0x10, size 0x8
    class RwLinkList cameraList; // offset 0x18, size 0x8
    class RwLLLink inWorldLink; // offset 0x20, size 0x8
    class RpClump * (* callback)(class RpClump *, void *); // offset 0x28, size 0x4
};
class xPEEntBound {
    // total size: 0xC
public:
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char type; // offset 0x1, size 0x1
    unsigned char pad1; // offset 0x2, size 0x1
    unsigned char pad2; // offset 0x3, size 0x1
    float expand; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
};
class XCSNNosey {
    // total size: 0xC
public:
    void * userdata; // offset 0x4, size 0x4
    signed int flg_nosey; // offset 0x8, size 0x4
};
class xNPCBasic : public xEnt, public xFactoryInst {
    // total size: 0x1BC
public:
    void (* f_setup)(class xEnt *); // offset 0xDC, size 0x4
    void (* f_reset)(class xEnt *); // offset 0xE0, size 0x4
    signed int flg_basenpc : 16; // offset 0xE4, size 0x4
    signed int inUpdate : 8; // offset 0xE4, size 0x4
    signed int flg_upward : 8; // offset 0xE4, size 0x4
    signed int colFreq; // offset 0xE8, size 0x4
    signed int colFreqReset; // offset 0xEC, size 0x4
    unsigned int flg_colCheck : 8; // offset 0xF0, size 0x4
    unsigned int flg_penCheck : 8; // offset 0xF0, size 0x4
    unsigned int flg_unused : 16; // offset 0xF0, size 0x4
    signed int myNPCType; // offset 0xF4, size 0x4
    class xEntShadow entShadow_embedded; // offset 0xF8, size 0x28
    class xShadowSimpleCache simpShadow_embedded; // offset 0x120, size 0x98
};
class RwObjectHasFrame {
    // total size: 0x14
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
};
class xAnimMultiFileEntry {
    // total size: 0x8
public:
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
};
class xAnimActiveEffect {
    // total size: 0x8
public:
    class xAnimEffect * Effect; // offset 0x0, size 0x4
    unsigned int Handle; // offset 0x4, size 0x4
};
class xModelTag {
    // total size: 0x20
public:
    class xVec3 v; // offset 0x0, size 0xC
    unsigned int matidx; // offset 0xC, size 0x4
    float wt[4]; // offset 0x10, size 0x10
};
class zGustAsset {
    // total size: 0x0
};
class NPCSndTrax {
    // total size: 0xC
public:
    enum en_NPC_SOUND typ_sound; // offset 0x0, size 0x4
    char * nam_sound; // offset 0x4, size 0x4
    unsigned int aid_sound; // offset 0x8, size 0x4
};
class _tagPadAnalog {
    // total size: 0x2
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
};
class xClumpCollBSPTree {
    // total size: 0x10
public:
    unsigned int numBranchNodes; // offset 0x0, size 0x4
    class xClumpCollBSPBranchNode * branchNodes; // offset 0x4, size 0x4
    unsigned int numTriangles; // offset 0x8, size 0x4
    class xClumpCollBSPTriangle * triangles; // offset 0xC, size 0x4
};
class zFrag {
    // total size: 0x84
public:
    enum zFragType type; // offset 0x0, size 0x4
    class zFragInfo info; // offset 0x4, size 0x60
    float delay; // offset 0x64, size 0x4
    float alivetime; // offset 0x68, size 0x4
    float lifetime; // offset 0x6C, size 0x4
    void (* update)(class zFrag *, float); // offset 0x70, size 0x4
    class xModelInstance * parent[2]; // offset 0x74, size 0x8
    class zFrag * prev; // offset 0x7C, size 0x4
    class zFrag * next; // offset 0x80, size 0x4
};
class _tagEmitLine {
    // total size: 0x1C
public:
    class xVec3 pos1; // offset 0x0, size 0xC
    class xVec3 pos2; // offset 0xC, size 0xC
    float radius; // offset 0x18, size 0x4
};
class xVec2 {
    // total size: 0x8
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
class tri_data {
    // total size: 0xC
public:
    unsigned int index; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float d; // offset 0x8, size 0x4
};
class /* @class */ {
    // total size: 0x4
public:
    class xVec3 * verts; // offset 0x0, size 0x4
};
class RwLinkList {
    // total size: 0x8
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
class zFragAsset {
    // total size: 0x18
public:
    enum zFragType type; // offset 0x0, size 0x4
    unsigned int id; // offset 0x4, size 0x4
    unsigned int parentID[2]; // offset 0x8, size 0x8
    float lifetime; // offset 0x10, size 0x4
    float delay; // offset 0x14, size 0x4
};
class xSphere {
    // total size: 0x10
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
class xUpdateCullMgr {
    // total size: 0x2C
public:
    unsigned int entCount; // offset 0x0, size 0x4
    unsigned int entActive; // offset 0x4, size 0x4
    void * * ent; // offset 0x8, size 0x4
    class xUpdateCullEnt * * mgr; // offset 0xC, size 0x4
    unsigned int mgrCount; // offset 0x10, size 0x4
    unsigned int mgrCurr; // offset 0x14, size 0x4
    class xUpdateCullEnt * mgrList; // offset 0x18, size 0x4
    unsigned int grpCount; // offset 0x1C, size 0x4
    class xUpdateCullGroup * grpList; // offset 0x20, size 0x4
    void (* activateCB)(void *); // offset 0x24, size 0x4
    void (* deactivateCB)(void *); // offset 0x28, size 0x4
};
class xJSPNodeInfo {
    // total size: 0x8
public:
    signed int originalMatIndex; // offset 0x0, size 0x4
    signed int nodeFlags; // offset 0x4, size 0x4
};
class xEnvAsset : public xBaseAsset {
    // total size: 0x44
public:
    unsigned int bspAssetID; // offset 0x8, size 0x4
    unsigned int startCameraAssetID; // offset 0xC, size 0x4
    unsigned int climateFlags; // offset 0x10, size 0x4
    float climateStrengthMin; // offset 0x14, size 0x4
    float climateStrengthMax; // offset 0x18, size 0x4
    unsigned int bspLightKit; // offset 0x1C, size 0x4
    unsigned int objectLightKit; // offset 0x20, size 0x4
    float padF1; // offset 0x24, size 0x4
    unsigned int bspCollisionAssetID; // offset 0x28, size 0x4
    unsigned int bspFXAssetID; // offset 0x2C, size 0x4
    unsigned int bspCameraAssetID; // offset 0x30, size 0x4
    unsigned int bspMapperID; // offset 0x34, size 0x4
    unsigned int bspMapperCollisionID; // offset 0x38, size 0x4
    unsigned int bspMapperFXID; // offset 0x3C, size 0x4
    float loldHeight; // offset 0x40, size 0x4
};
class RpVertexNormal {
    // total size: 0x4
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
};
class zPlayerGlobals {
    // total size: 0x1940
public:
    class zEnt ent; // offset 0x0, size 0xD4
    class xEntShadow entShadow_embedded; // offset 0xD4, size 0x28
    class xShadowSimpleCache simpShadow_embedded; // offset 0xFC, size 0x98
    class zGlobalSettings g; // offset 0x194, size 0x150
    class zPlayerSettings * s; // offset 0x2E4, size 0x4
    class zPlayerSettings sb; // offset 0x2F0, size 0x460
    class zPlayerSettings patrick; // offset 0x750, size 0x460
    class zPlayerSettings sandy; // offset 0xBB0, size 0x460
    class xModelInstance * model_spongebob; // offset 0x1010, size 0x4
    class xModelInstance * model_patrick; // offset 0x1014, size 0x4
    class xModelInstance * model_sandy; // offset 0x1018, size 0x4
    unsigned int Visible; // offset 0x101C, size 0x4
    unsigned int Health; // offset 0x1020, size 0x4
    signed int Speed; // offset 0x1024, size 0x4
    float SpeedMult; // offset 0x1028, size 0x4
    signed int Sneak; // offset 0x102C, size 0x4
    signed int Teeter; // offset 0x1030, size 0x4
    float SlipFadeTimer; // offset 0x1034, size 0x4
    signed int Slide; // offset 0x1038, size 0x4
    float SlideTimer; // offset 0x103C, size 0x4
    signed int Stepping; // offset 0x1040, size 0x4
    signed int JumpState; // offset 0x1044, size 0x4
    signed int LastJumpState; // offset 0x1048, size 0x4
    float JumpTimer; // offset 0x104C, size 0x4
    float LookAroundTimer; // offset 0x1050, size 0x4
    unsigned int LookAroundRand; // offset 0x1054, size 0x4
    unsigned int LastProjectile; // offset 0x1058, size 0x4
    float DecelRun; // offset 0x105C, size 0x4
    float DecelRunSpeed; // offset 0x1060, size 0x4
    float HotsauceTimer; // offset 0x1064, size 0x4
    float LeanLerp; // offset 0x1068, size 0x4
    float ScareTimer; // offset 0x106C, size 0x4
    class xBase * ScareSource; // offset 0x1070, size 0x4
    float CowerTimer; // offset 0x1074, size 0x4
    float DamageTimer; // offset 0x1078, size 0x4
    float SundaeTimer; // offset 0x107C, size 0x4
    float ControlOffTimer; // offset 0x1080, size 0x4
    float HelmetTimer; // offset 0x1084, size 0x4
    unsigned int WorldDisguise; // offset 0x1088, size 0x4
    unsigned int Bounced; // offset 0x108C, size 0x4
    float FallDeathTimer; // offset 0x1090, size 0x4
    float HeadbuttVel; // offset 0x1094, size 0x4
    float HeadbuttTimer; // offset 0x1098, size 0x4
    unsigned int SpecialReceived; // offset 0x109C, size 0x4
    class xEnt * MountChimney; // offset 0x10A0, size 0x4
    float MountChimOldY; // offset 0x10A4, size 0x4
    unsigned int MaxHealth; // offset 0x10A8, size 0x4
    unsigned int DoMeleeCheck; // offset 0x10AC, size 0x4
    float VictoryTimer; // offset 0x10B0, size 0x4
    float BadGuyNearTimer; // offset 0x10B4, size 0x4
    float ForceSlipperyTimer; // offset 0x10B8, size 0x4
    float ForceSlipperyFriction; // offset 0x10BC, size 0x4
    float ShockRadius; // offset 0x10C0, size 0x4
    float ShockRadiusOld; // offset 0x10C4, size 0x4
    float Face_ScareTimer; // offset 0x10C8, size 0x4
    unsigned int Face_ScareRandom; // offset 0x10CC, size 0x4
    unsigned int Face_Event; // offset 0x10D0, size 0x4
    float Face_EventTimer; // offset 0x10D4, size 0x4
    float Face_PantTimer; // offset 0x10D8, size 0x4
    unsigned int Face_AnimSpecific; // offset 0x10DC, size 0x4
    unsigned int IdleRand; // offset 0x10E0, size 0x4
    float IdleMinorTimer; // offset 0x10E4, size 0x4
    float IdleMajorTimer; // offset 0x10E8, size 0x4
    float IdleSitTimer; // offset 0x10EC, size 0x4
    signed int Transparent; // offset 0x10F0, size 0x4
    class zEnt * FireTarget; // offset 0x10F4, size 0x4
    unsigned int ControlOff; // offset 0x10F8, size 0x4
    unsigned int ControlOnEvent; // offset 0x10FC, size 0x4
    unsigned int AutoMoveSpeed; // offset 0x1100, size 0x4
    float AutoMoveDist; // offset 0x1104, size 0x4
    class xVec3 AutoMoveTarget; // offset 0x1108, size 0xC
    class xBase * AutoMoveObject; // offset 0x1114, size 0x4
    class zEnt * Diggable; // offset 0x1118, size 0x4
    float DigTimer; // offset 0x111C, size 0x4
    class zPlayerCarryInfo carry; // offset 0x1120, size 0xE0
    class zPlayerLassoInfo lassoInfo; // offset 0x1200, size 0x120
    class xModelTag BubbleWandTag[2]; // offset 0x1320, size 0x40
    class xModelInstance * model_wand; // offset 0x1360, size 0x4
    class xEntBoulder * bubblebowl; // offset 0x1364, size 0x4
    float bbowlInitVel; // offset 0x1368, size 0x4
    class zEntHangable * HangFound; // offset 0x136C, size 0x4
    class zEntHangable * HangEnt; // offset 0x1370, size 0x4
    class zEntHangable * HangEntLast; // offset 0x1374, size 0x4
    class xVec3 HangPivot; // offset 0x1378, size 0xC
    class xVec3 HangVel; // offset 0x1384, size 0xC
    float HangLength; // offset 0x1390, size 0x4
    class xVec3 HangStartPos; // offset 0x1394, size 0xC
    float HangStartLerp; // offset 0x13A0, size 0x4
    class xModelTag HangPawTag[4]; // offset 0x13A4, size 0x80
    float HangPawOffset; // offset 0x1424, size 0x4
    float HangElapsed; // offset 0x1428, size 0x4
    float Jump_CurrGravity; // offset 0x142C, size 0x4
    float Jump_HoldTimer; // offset 0x1430, size 0x4
    float Jump_ChangeTimer; // offset 0x1434, size 0x4
    signed int Jump_CanDouble; // offset 0x1438, size 0x4
    signed int Jump_CanFloat; // offset 0x143C, size 0x4
    signed int Jump_SpringboardStart; // offset 0x1440, size 0x4
    class zPlatform * Jump_Springboard; // offset 0x1444, size 0x4
    signed int CanJump; // offset 0x1448, size 0x4
    signed int CanBubbleSpin; // offset 0x144C, size 0x4
    signed int CanBubbleBounce; // offset 0x1450, size 0x4
    signed int CanBubbleBash; // offset 0x1454, size 0x4
    signed int IsJumping; // offset 0x1458, size 0x4
    signed int IsDJumping; // offset 0x145C, size 0x4
    signed int IsBubbleSpinning; // offset 0x1460, size 0x4
    signed int IsBubbleBouncing; // offset 0x1464, size 0x4
    signed int IsBubbleBashing; // offset 0x1468, size 0x4
    signed int IsBubbleBowling; // offset 0x146C, size 0x4
    signed int WasDJumping; // offset 0x1470, size 0x4
    signed int IsCoptering; // offset 0x1474, size 0x4
    enum _zPlayerWallJumpState WallJumpState; // offset 0x1478, size 0x4
    signed int cheat_mode; // offset 0x147C, size 0x4
    unsigned int Inv_Shiny; // offset 0x1480, size 0x4
    unsigned int Inv_Spatula; // offset 0x1484, size 0x4
    unsigned int Inv_PatsSock[15]; // offset 0x1488, size 0x3C
    unsigned int Inv_PatsSock_Max[15]; // offset 0x14C4, size 0x3C
    unsigned int Inv_PatsSock_CurrentLevel; // offset 0x1500, size 0x4
    unsigned int Inv_LevelPickups[15]; // offset 0x1504, size 0x3C
    unsigned int Inv_LevelPickups_CurrentLevel; // offset 0x1540, size 0x4
    unsigned int Inv_PatsSock_Total; // offset 0x1544, size 0x4
    class xModelTag BubbleTag; // offset 0x1548, size 0x20
    class xEntDrive drv; // offset 0x1568, size 0x7C
    class xSurface * floor_surf; // offset 0x15E4, size 0x4
    class xVec3 floor_norm; // offset 0x15E8, size 0xC
    signed int slope; // offset 0x15F4, size 0x4
    class xCollis earc_coll; // offset 0x15F8, size 0x50
    class xSphere head_sph; // offset 0x1648, size 0x10
    class xModelTag center_tag; // offset 0x1658, size 0x20
    class xModelTag head_tag; // offset 0x1678, size 0x20
    unsigned int TongueFlags[2]; // offset 0x1698, size 0x8
    class xVec3 RootUp; // offset 0x16A0, size 0xC
    class xVec3 RootUpTarget; // offset 0x16AC, size 0xC
    class zCheckPoint cp; // offset 0x16B8, size 0x14
    unsigned int SlideTrackSliding; // offset 0x16CC, size 0x4
    unsigned int SlideTrackCount; // offset 0x16D0, size 0x4
    class xEnt * SlideTrackEnt[111]; // offset 0x16D4, size 0x1BC
    unsigned int SlideNotGroundedSinceSlide; // offset 0x1890, size 0x4
    class xVec3 SlideTrackDir; // offset 0x1894, size 0xC
    class xVec3 SlideTrackVel; // offset 0x18A0, size 0xC
    float SlideTrackDecay; // offset 0x18AC, size 0x4
    float SlideTrackLean; // offset 0x18B0, size 0x4
    float SlideTrackLand; // offset 0x18B4, size 0x4
    unsigned char sb_model_indices[14]; // offset 0x18B8, size 0xE
    class xModelInstance * sb_models[14]; // offset 0x18C8, size 0x38
    unsigned int currentPlayer; // offset 0x1900, size 0x4
    class xVec3 PredictRotate; // offset 0x1904, size 0xC
    class xVec3 PredictTranslate; // offset 0x1910, size 0xC
    float PredictAngV; // offset 0x191C, size 0x4
    class xVec3 PredictCurrDir; // offset 0x1920, size 0xC
    float PredictCurrVel; // offset 0x192C, size 0x4
    float KnockBackTimer; // offset 0x1930, size 0x4
    float KnockIntoAirTimer; // offset 0x1934, size 0x4
};
class zVolume : public xVolume {
    // total size: 0x14
};
class xSweptSphere {
    // total size: 0x150
public:
    class xVec3 start; // offset 0x0, size 0xC
    class xVec3 end; // offset 0xC, size 0xC
    float radius; // offset 0x18, size 0x4
    float dist; // offset 0x1C, size 0x4
    class xiMat4x3Union basis; // offset 0x20, size 0x40
    class xiMat4x3Union invbasis; // offset 0x60, size 0x40
    class xBox box; // offset 0xA0, size 0x18
    class xQCData qcd; // offset 0xB8, size 0x20
    float boxsize; // offset 0xD8, size 0x4
    float curdist; // offset 0xDC, size 0x4
    class xVec3 contact; // offset 0xE0, size 0xC
    class xVec3 polynorm; // offset 0xEC, size 0xC
    unsigned int oid; // offset 0xF8, size 0x4
    void * optr; // offset 0xFC, size 0x4
    class xModelInstance * mptr; // offset 0x100, size 0x4
    signed int hitIt; // offset 0x104, size 0x4
    class xVec3 worldPos; // offset 0x108, size 0xC
    class xVec3 worldContact; // offset 0x114, size 0xC
    class xVec3 worldNormal; // offset 0x120, size 0xC
    class xVec3 worldTangent; // offset 0x12C, size 0xC
    class xVec3 worldPolynorm; // offset 0x138, size 0xC
};
class xBBox {
    // total size: 0x24
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
};
class xLightKitLight {
    // total size: 0x60
public:
    unsigned int type; // offset 0x0, size 0x4
    class RwRGBAReal color; // offset 0x4, size 0x10
    float matrix[16]; // offset 0x14, size 0x40
    float radius; // offset 0x54, size 0x4
    float angle; // offset 0x58, size 0x4
    class RpLight * platLight; // offset 0x5C, size 0x4
};
class RpCollisionTriangle {
    // total size: 0x28
public:
    class RwV3d normal; // offset 0x0, size 0xC
    class RwV3d point; // offset 0xC, size 0xC
    signed int index; // offset 0x18, size 0x4
    class RwV3d * vertices[3]; // offset 0x1C, size 0xC
};
class zShrapnelAsset {
    // total size: 0xC
public:
    signed int fassetCount; // offset 0x0, size 0x4
    unsigned int shrapnelID; // offset 0x4, size 0x4
    void (* initCB)(class zShrapnelAsset *, class xModelInstance *, class xVec3 *, void (*)(class zFrag *, class zFragAsset *)); // offset 0x8, size 0x4
};
class rxHeapFreeBlock {
    // total size: 0x8
public:
    unsigned int size; // offset 0x0, size 0x4
    class rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
class xGroupAsset : public xBaseAsset {
    // total size: 0xC
public:
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
};
class RwRaster {
    // total size: 0x34
public:
    class RwRaster * parent; // offset 0x0, size 0x4
    unsigned char * cpPixels; // offset 0x4, size 0x4
    unsigned char * palette; // offset 0x8, size 0x4
    signed int width; // offset 0xC, size 0x4
    signed int height; // offset 0x10, size 0x4
    signed int depth; // offset 0x14, size 0x4
    signed int stride; // offset 0x18, size 0x4
    signed short nOffsetX; // offset 0x1C, size 0x2
    signed short nOffsetY; // offset 0x1E, size 0x2
    unsigned char cType; // offset 0x20, size 0x1
    unsigned char cFlags; // offset 0x21, size 0x1
    unsigned char privateFlags; // offset 0x22, size 0x1
    unsigned char cFormat; // offset 0x23, size 0x1
    unsigned char * originalPixels; // offset 0x24, size 0x4
    signed int originalWidth; // offset 0x28, size 0x4
    signed int originalHeight; // offset 0x2C, size 0x4
    signed int originalStride; // offset 0x30, size 0x4
};
class xParEmitterAsset : public xBaseAsset {
    // total size: 0x54
public:
    unsigned char emit_flags; // offset 0x8, size 0x1
    unsigned char emit_type; // offset 0x9, size 0x1
    unsigned short pad; // offset 0xA, size 0x2
    unsigned int propID; // offset 0xC, size 0x4
    union { // inferred
        class xPECircle e_circle; // offset 0x10, size 0x14
        class _tagEmitSphere e_sphere; // offset 0x10, size 0x4
        class _tagEmitRect e_rect; // offset 0x10, size 0x8
        class _tagEmitLine e_line; // offset 0x10, size 0x1C
        class _tagEmitVolume e_volume; // offset 0x10, size 0x4
        class _tagEmitOffsetPoint e_offsetp; // offset 0x10, size 0xC
        class xPEVCyl e_vcyl; // offset 0x10, size 0xC
        class xPEEntBone e_entbone; // offset 0x10, size 0x18
        class xPEEntBound e_entbound; // offset 0x10, size 0xC
    };
    unsigned int attachToID; // offset 0x2C, size 0x4
    class xVec3 pos; // offset 0x30, size 0xC
    class xVec3 vel; // offset 0x3C, size 0xC
    float vel_angle_variation; // offset 0x48, size 0x4
    unsigned int cull_mode; // offset 0x4C, size 0x4
    float cull_dist_sqr; // offset 0x50, size 0x4
};
class RxPipelineNodeTopSortData {
    // total size: 0xC
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
};
class RwV2d {
    // total size: 0x8
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
class xEntCollis {
    // total size: 0x5B4
public:
    unsigned char chk; // offset 0x0, size 0x1
    unsigned char pen; // offset 0x1, size 0x1
    unsigned char env_sidx; // offset 0x2, size 0x1
    unsigned char env_eidx; // offset 0x3, size 0x1
    unsigned char npc_sidx; // offset 0x4, size 0x1
    unsigned char npc_eidx; // offset 0x5, size 0x1
    unsigned char dyn_sidx; // offset 0x6, size 0x1
    unsigned char dyn_eidx; // offset 0x7, size 0x1
    unsigned char stat_sidx; // offset 0x8, size 0x1
    unsigned char stat_eidx; // offset 0x9, size 0x1
    unsigned char idx; // offset 0xA, size 0x1
    class xCollis colls[18]; // offset 0xC, size 0x5A0
    void (* post)(class xEnt *, class xScene *, float, class xEntCollis *); // offset 0x5AC, size 0x4
    unsigned int (* depenq)(class xEnt *, class xEnt *, class xScene *, float, class xCollis *); // offset 0x5B0, size 0x4
};
class _tagiPad {
    // total size: 0x4
public:
    signed int port; // offset 0x0, size 0x4
};
class xPlatformBreakawayData {
    // total size: 0x10
public:
    float ba_delay; // offset 0x0, size 0x4
    unsigned int bustModelID; // offset 0x4, size 0x4
    float reset_delay; // offset 0x8, size 0x4
    unsigned int breakflags; // offset 0xC, size 0x4
};
class zFragLocInfo {
    // total size: 0x20
public:
    union { // inferred
        class zFragBone bone; // offset 0x0, size 0x10
        class xModelTag tag; // offset 0x0, size 0x20
    };
};
class xShadowSimpleCache {
    // total size: 0x98
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned char alpha; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
    unsigned int collPriority; // offset 0x4, size 0x4
    class xVec3 pos; // offset 0x8, size 0xC
    class xVec3 at; // offset 0x14, size 0xC
    class xEnt * castOnEnt; // offset 0x20, size 0x4
    class xShadowSimplePoly poly; // offset 0x24, size 0x30
    float envHeight; // offset 0x54, size 0x4
    float shadowHeight; // offset 0x58, size 0x4
    unsigned int raster; // offset 0x5C, size 0x4
    float dydx; // offset 0x60, size 0x4
    float dydz; // offset 0x64, size 0x4
    class xVec3 corner[4]; // offset 0x68, size 0x30
};
class RpInterpolator {
    // total size: 0x14
public:
    signed int flags; // offset 0x0, size 0x4
    signed short startMorphTarget; // offset 0x4, size 0x2
    signed short endMorphTarget; // offset 0x6, size 0x2
    float time; // offset 0x8, size 0x4
    float recipTime; // offset 0xC, size 0x4
    float position; // offset 0x10, size 0x4
};
class xEntMechData {
    // total size: 0x4C
public:
    class xVec3 apos; // offset 0x0, size 0xC
    class xVec3 bpos; // offset 0xC, size 0xC
    class xVec3 dir; // offset 0x18, size 0xC
    float arot; // offset 0x24, size 0x4
    float brot; // offset 0x28, size 0x4
    float ss; // offset 0x2C, size 0x4
    float sr; // offset 0x30, size 0x4
    signed int state; // offset 0x34, size 0x4
    float tsfd; // offset 0x38, size 0x4
    float trfd; // offset 0x3C, size 0x4
    float tsbd; // offset 0x40, size 0x4
    float trbd; // offset 0x44, size 0x4
    float * rotptr; // offset 0x48, size 0x4
};
class zNPCTiki : public zNPCCommon {
    // total size: 0x378
public:
    unsigned int tikiFlag; // offset 0x2A0, size 0x4
    class xVec3 lastAt; // offset 0x2A4, size 0xC
    class xBound origLocalBound; // offset 0x2B0, size 0x4C
    class xVec3 deltaPos; // offset 0x2FC, size 0xC
    float timeToLive; // offset 0x308, size 0x4
    float t1; // offset 0x30C, size 0x4
    float t2; // offset 0x310, size 0x4
    float t3; // offset 0x314, size 0x4
    class xVec3 v1; // offset 0x318, size 0xC
    float vel; // offset 0x324, size 0x4
    float landHt; // offset 0x328, size 0x4
    class xEnt * nonTikiParent; // offset 0x32C, size 0x4
    class xVec3 nonTikiParentDisp; // offset 0x330, size 0xC
    unsigned char numParents; // offset 0x33C, size 0x1
    class zNPCTiki * parents[4]; // offset 0x340, size 0x10
    unsigned char numChildren; // offset 0x350, size 0x1
    class zNPCTiki * children[4]; // offset 0x354, size 0x10
    class zNPCTiki * nextOrphan; // offset 0x364, size 0x4
    unsigned int updatedParents; // offset 0x368, size 0x4
    signed int contactParent; // offset 0x36C, size 0x4
    void * tikiAnim; // offset 0x370, size 0x4
    float tikiAnimTime; // offset 0x374, size 0x4
};
class zEGenAsset : public xEntAsset {
    // total size: 0x6C
public:
    class xVec3 src_dpos; // offset 0x54, size 0xC
    unsigned char damage_type; // offset 0x60, size 0x1
    unsigned char flags; // offset 0x61, size 0x1
    float ontime; // offset 0x64, size 0x4
    unsigned int onAnimID; // offset 0x68, size 0x4
};
class xPlatformERData {
    // total size: 0x4
public:
    signed int nodata; // offset 0x0, size 0x4
};
enum _tagePlayerStreamSnd {
    ePlayerStreamSnd_Invalid = 0,
    ePlayerStreamSnd_PickupSock1 = 1,
    ePlayerStreamSnd_PickupSock2 = 2,
    ePlayerStreamSnd_PickupSock3 = 3,
    ePlayerStreamSnd_UnderwearComment1 = 4,
    ePlayerStreamSnd_UnderwearComment2 = 5,
    ePlayerStreamSnd_UnderwearComment3 = 6,
    ePlayerStreamSnd_EnterScene1 = 7,
    ePlayerStreamSnd_EnterScene2 = 8,
    ePlayerStreamSnd_EnterScene3 = 9,
    ePlayerStreamSnd_EnterScene4 = 10,
    ePlayerStreamSnd_EnterScene5 = 11,
    ePlayerStreamSnd_EnterScene6 = 12,
    ePlayerStreamSnd_EnterScene7 = 13,
    ePlayerStreamSnd_SpatulaComment1 = 14,
    ePlayerStreamSnd_ShinyComment1 = 15,
    ePlayerStreamSnd_ShinyComment2 = 16,
    ePlayerStreamSnd_ShinyComment3 = 17,
    ePlayerStreamSnd_ShinyComment4 = 18,
    ePlayerStreamSnd_ShinyComment5 = 19,
    ePlayerStreamSnd_SpongeBallComment1 = 20,
    ePlayerStreamSnd_SpongeBallComment2 = 21,
    ePlayerStreamSnd_SpongeBallComment3 = 22,
    ePlayerStreamSnd_CruiseComment1 = 23,
    ePlayerStreamSnd_CruiseComment2 = 24,
    ePlayerStreamSnd_CruiseComment3 = 25,
    ePlayerStreamSnd_BowlComment1 = 26,
    ePlayerStreamSnd_BowlComment2 = 27,
    ePlayerStreamSnd_BowlComment3 = 28,
    ePlayerStreamSnd_BowlComment4 = 29,
    ePlayerStreamSnd_BowlComment5 = 30,
    ePlayerStreamSnd_PushButton1 = 31,
    ePlayerStreamSnd_PushButton2 = 32,
    ePlayerStreamSnd_PushButton3 = 33,
    ePlayerStreamSnd_BellySmashComment1 = 34,
    ePlayerStreamSnd_BellySmashComment2 = 35,
    ePlayerStreamSnd_BellySmashComment3 = 36,
    ePlayerStreamSnd_ChopComment1 = 37,
    ePlayerStreamSnd_ChopComment2 = 38,
    ePlayerStreamSnd_ChopComment3 = 39,
    ePlayerStreamSnd_KickComment1 = 40,
    ePlayerStreamSnd_KickComment2 = 41,
    ePlayerStreamSnd_KickComment3 = 42,
    ePlayerStreamSnd_RopingComment1 = 43,
    ePlayerStreamSnd_RopingComment2 = 44,
    ePlayerStreamSnd_RopingComment3 = 45,
    ePlayerStreamSnd_HeliComment1 = 46,
    ePlayerStreamSnd_HeliComment2 = 47,
    ePlayerStreamSnd_HeliComment3 = 48,
    ePlayerStreamSnd_DestroyTiki1 = 49,
    ePlayerStreamSnd_DestroyTiki2 = 50,
    ePlayerStreamSnd_DestroyTiki3 = 51,
    ePlayerStreamSnd_DestroyRobot1 = 52,
    ePlayerStreamSnd_DestroyRobot2 = 53,
    ePlayerStreamSnd_DestroyRobot3 = 54,
    ePlayerStreamSnd_SeeWoodTiki = 55,
    ePlayerStreamSnd_SeeLoveyTiki = 56,
    ePlayerStreamSnd_SeeShhhTiki = 57,
    ePlayerStreamSnd_SeeThunderTiki = 58,
    ePlayerStreamSnd_SeeStoneTiki = 59,
    ePlayerStreamSnd_SeeFodder = 60,
    ePlayerStreamSnd_SeeHammer = 61,
    ePlayerStreamSnd_SeeTarTar = 62,
    ePlayerStreamSnd_SeeGLove = 63,
    ePlayerStreamSnd_SeeMonsoon = 64,
    ePlayerStreamSnd_SeeSleepyTime = 65,
    ePlayerStreamSnd_SeeArf = 66,
    ePlayerStreamSnd_SeeTubelets = 67,
    ePlayerStreamSnd_SeeSlick = 68,
    ePlayerStreamSnd_SeeKingJellyfish = 69,
    ePlayerStreamSnd_SeePrawn = 70,
    ePlayerStreamSnd_SeeDutchman = 71,
    ePlayerStreamSnd_SeeSandyBoss = 72,
    ePlayerStreamSnd_SeePatrickBoss1 = 73,
    ePlayerStreamSnd_SeePatrickBoss2 = 74,
    ePlayerStreamSnd_SeeSpongeBobBoss = 75,
    ePlayerStreamSnd_SeeRobotPlankton = 76,
    ePlayerStreamSnd_PickupSpecialGeneric1 = 77,
    ePlayerStreamSnd_PickupSpecialGeneric2 = 78,
    ePlayerStreamSnd_GoldenUnderwear4 = 79,
    ePlayerStreamSnd_GoldenUnderwear5 = 80,
    ePlayerStreamSnd_GoldenUnderwear6 = 81,
    ePlayerStreamSnd_Combo1 = 82,
    ePlayerStreamSnd_Combo2 = 83,
    ePlayerStreamSnd_Combo3 = 84,
    ePlayerStreamSnd_Combo4 = 85,
    ePlayerStreamSnd_Combo5 = 86,
    ePlayerStreamSnd_BigCombo1 = 87,
    ePlayerStreamSnd_BigCombo2 = 88,
    ePlayerStreamSnd_BigCombo3 = 89,
    ePlayerStreamSnd_BigCombo4 = 90,
    ePlayerStreamSnd_BigCombo5 = 91,
    ePlayerStreamSnd_Lift1 = 92,
    ePlayerStreamSnd_Exclaim1 = 93,
    ePlayerStreamSnd_Exclaim2 = 94,
    ePlayerStreamSnd_Exclaim3 = 95,
    ePlayerStreamSnd_Exclaim4 = 96,
    ePlayerStreamSnd_BeginBungee = 97,
    ePlayerStreamSnd_BungeeAttachComment = 97,
    ePlayerStreamSnd_BungeeBeginDive = 98,
    ePlayerStreamSnd_BungeeDive1 = 98,
    ePlayerStreamSnd_BungeeDive2 = 99,
    ePlayerStreamSnd_BungeeEndDive = 99,
    ePlayerStreamSnd_BungeeBeginDeath = 100,
    ePlayerStreamSnd_BungeeDeath1 = 100,
    ePlayerStreamSnd_BungeeDeath2 = 101,
    ePlayerStreamSnd_BungeeDeath3 = 102,
    ePlayerStreamSnd_BungeeDeath4 = 103,
    ePlayerStreamSnd_BungeeDeath5 = 104,
    ePlayerStreamSnd_BungeeDeath6 = 105,
    ePlayerStreamSnd_BungeeDeath7 = 106,
    ePlayerStreamSnd_BungeeDeath8 = 107,
    ePlayerStreamSnd_BungeeDeath9 = 108,
    ePlayerStreamSnd_BungeeDeath10 = 109,
    ePlayerStreamSnd_BungeeDeath11 = 110,
    ePlayerStreamSnd_BungeeDeath12 = 111,
    ePlayerStreamSnd_BungeeDeath13 = 112,
    ePlayerStreamSnd_BungeeDeath14 = 113,
    ePlayerStreamSnd_BungeeDeath15 = 114,
    ePlayerStreamSnd_BungeeDeath16 = 115,
    ePlayerStreamSnd_BungeeDeath17 = 116,
    ePlayerStreamSnd_BungeeDeath18 = 117,
    ePlayerStreamSnd_BungeeEndDeath = 117,
    ePlayerStreamSnd_EndBungee = 117,
    ePlayerStreamSnd_Total = 118,
};
class xCutsceneZbuffer {
    // total size: 0x10
public:
    float start; // offset 0x0, size 0x4
    float end; // offset 0x4, size 0x4
    float nearPlane; // offset 0x8, size 0x4
    float farPlane; // offset 0xC, size 0x4
};
class xEntMotionSplineData {
    // total size: 0x4
public:
    signed int unknown; // offset 0x0, size 0x4
};
class xParCmdAsset {
    // total size: 0x8
public:
    unsigned int type; // offset 0x0, size 0x4
    unsigned char enabled; // offset 0x4, size 0x1
    unsigned char mode; // offset 0x5, size 0x1
    unsigned char pad[2]; // offset 0x6, size 0x2
};
class rxHeapSuperBlockDescriptor {
    // total size: 0xC
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
class xAnimMultiFileBase {
    // total size: 0x4
public:
    unsigned int Count; // offset 0x0, size 0x4
};
class /* @class */ {
    // total size: 0x8
public:
    unsigned int level; // offset 0x0, size 0x4
    unsigned int total; // offset 0x4, size 0x4
};
class zFragSound {
    // total size: 0x14
public:
    class zFragSoundAsset * fasset; // offset 0x0, size 0x4
    class xVec3 location; // offset 0x4, size 0xC
    unsigned int soundID; // offset 0x10, size 0x4
};
class zPlayerLassoInfo {
    // total size: 0x120
public:
    class xEnt * target; // offset 0x0, size 0x4
    float dist; // offset 0x4, size 0x4
    unsigned char destroy; // offset 0x8, size 0x1
    unsigned char targetGuide; // offset 0x9, size 0x1
    float lassoRot; // offset 0xC, size 0x4
    class xEnt * swingTarget; // offset 0x10, size 0x4
    class xEnt * releasedSwing; // offset 0x14, size 0x4
    float copterTime; // offset 0x18, size 0x4
    signed int canCopter; // offset 0x1C, size 0x4
    class zLasso lasso; // offset 0x20, size 0xFC
    class xAnimState * zeroAnim; // offset 0x11C, size 0x4
};
class xAnimEffect {
    // total size: 0x14
public:
    class xAnimEffect * Next; // offset 0x0, size 0x4
    unsigned int Flags; // offset 0x4, size 0x4
    float StartTime; // offset 0x8, size 0x4
    float EndTime; // offset 0xC, size 0x4
    unsigned int (* Callback)(unsigned int, class xAnimActiveEffect *, class xAnimSingle *, void *); // offset 0x10, size 0x4
};
class iEnv {
    // total size: 0x30
public:
    class RpWorld * world; // offset 0x0, size 0x4
    class RpWorld * collision; // offset 0x4, size 0x4
    class RpWorld * fx; // offset 0x8, size 0x4
    class RpWorld * camera; // offset 0xC, size 0x4
    class xJSPHeader * jsp; // offset 0x10, size 0x4
    class RpLight * light[2]; // offset 0x14, size 0x8
    class RwFrame * light_frame[2]; // offset 0x1C, size 0x8
    signed int memlvl; // offset 0x24, size 0x4
};
class zJumpParam {
    // total size: 0x10
public:
    float PeakHeight; // offset 0x0, size 0x4
    float TimeGravChange; // offset 0x4, size 0x4
    float TimeHold; // offset 0x8, size 0x4
    float ImpulseVel; // offset 0xC, size 0x4
};
enum /* @enum */ {
    WallJumpResult_NoJump = 0,
    WallJumpResult_Jump = 1,
};
class RpLight {
    // total size: 0x40
public:
    class RwObjectHasFrame object; // offset 0x0, size 0x14
    float radius; // offset 0x14, size 0x4
    class RwRGBAReal color; // offset 0x18, size 0x10
    float minusCosAngle; // offset 0x28, size 0x4
    class RwLinkList WorldSectorsInLight; // offset 0x2C, size 0x8
    class RwLLLink inWorld; // offset 0x34, size 0x8
    unsigned short lightFrame; // offset 0x3C, size 0x2
    unsigned short pad; // offset 0x3E, size 0x2
};
class RpGeometry {
    // total size: 0x60
public:
    class RwObject object; // offset 0x0, size 0x8
    unsigned int flags; // offset 0x8, size 0x4
    unsigned short lockedSinceLastInst; // offset 0xC, size 0x2
    signed short refCount; // offset 0xE, size 0x2
    signed int numTriangles; // offset 0x10, size 0x4
    signed int numVertices; // offset 0x14, size 0x4
    signed int numMorphTargets; // offset 0x18, size 0x4
    signed int numTexCoordSets; // offset 0x1C, size 0x4
    class RpMaterialList matList; // offset 0x20, size 0xC
    class RpTriangle * triangles; // offset 0x2C, size 0x4
    class RwRGBA * preLitLum; // offset 0x30, size 0x4
    class RwTexCoords * texCoords[8]; // offset 0x34, size 0x20
    class RpMeshHeader * mesh; // offset 0x54, size 0x4
    class RwResEntry * repEntry; // offset 0x58, size 0x4
    class RpMorphTarget * morphTarget; // offset 0x5C, size 0x4
};
class zFragProjectileAsset : public zFragAsset {
    // total size: 0x90
public:
    unsigned int modelInfoID; // offset 0x18, size 0x4
    class RpAtomic * modelFile; // offset 0x1C, size 0x4
    class zFragLocation launch; // offset 0x20, size 0x24
    class zFragLocation vel; // offset 0x44, size 0x24
    float bounce; // offset 0x68, size 0x4
    signed int maxBounces; // offset 0x6C, size 0x4
    unsigned int flags; // offset 0x70, size 0x4
    unsigned int childID; // offset 0x74, size 0x4
    class zShrapnelAsset * child; // offset 0x78, size 0x4
    float minScale; // offset 0x7C, size 0x4
    float maxScale; // offset 0x80, size 0x4
    unsigned int scaleCurveID; // offset 0x84, size 0x4
    class xCurveAsset * scaleCurve; // offset 0x88, size 0x4
    float gravity; // offset 0x8C, size 0x4
};
class _tagTRCPadInfo : public _tagiTRCPadInfo {
    // total size: 0xC
public:
    signed int id; // offset 0x4, size 0x4
    enum _tagTRCState state; // offset 0x8, size 0x4
};
class zFragSoundAsset : public zFragAsset {
    // total size: 0x4C
public:
    unsigned int assetID; // offset 0x18, size 0x4
    class zFragLocation source; // offset 0x1C, size 0x24
    float volume; // offset 0x40, size 0x4
    float innerRadius; // offset 0x44, size 0x4
    float outerRadius; // offset 0x48, size 0x4
};
class basic_rect {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
class zGust : public xBase {
    // total size: 0x24
public:
    unsigned int flags; // offset 0x10, size 0x4
    class zGustAsset * asset; // offset 0x14, size 0x4
    class zVolume * volume; // offset 0x18, size 0x4
    class zVolume * fx_volume; // offset 0x1C, size 0x4
    float debris_timer; // offset 0x20, size 0x4
};
class _tagEmitVolume {
    // total size: 0x4
public:
    unsigned int emit_volumeID; // offset 0x0, size 0x4
};
class xParEmitter : public xBase {
    // total size: 0x78
public:
    class xParEmitterAsset * tasset; // offset 0x10, size 0x4
    class xParGroup * group; // offset 0x14, size 0x4
    class xParEmitterPropsAsset * prop; // offset 0x18, size 0x4
    unsigned char rate_mode; // offset 0x1C, size 0x1
    float rate; // offset 0x20, size 0x4
    float rate_time; // offset 0x24, size 0x4
    float rate_fraction; // offset 0x28, size 0x4
    float rate_fraction_cull; // offset 0x2C, size 0x4
    unsigned char emit_flags; // offset 0x30, size 0x1
    unsigned char emit_pad[3]; // offset 0x31, size 0x3
    unsigned char rot[3]; // offset 0x34, size 0x3
    class xModelTag tag; // offset 0x38, size 0x20
    float oocull_distance_sqr; // offset 0x58, size 0x4
    float distance_to_cull_sqr; // offset 0x5C, size 0x4
    void * attachTo; // offset 0x60, size 0x4
    class xParSys * parSys; // offset 0x64, size 0x4
    void * emit_volume; // offset 0x68, size 0x4
    class xVec3 last_attach_loc; // offset 0x6C, size 0xC
};
class RxHeap {
    // total size: 0x1C
public:
    unsigned int superBlockSize; // offset 0x0, size 0x4
    class rxHeapSuperBlockDescriptor * head; // offset 0x4, size 0x4
    class rxHeapBlockHeader * headBlock; // offset 0x8, size 0x4
    class rxHeapFreeBlock * freeBlocks; // offset 0xC, size 0x4
    unsigned int entriesAlloced; // offset 0x10, size 0x4
    unsigned int entriesUsed; // offset 0x14, size 0x4
    signed int dirty; // offset 0x18, size 0x4
};
class xGrid {
    // total size: 0x34
public:
    unsigned char ingrid_id; // offset 0x0, size 0x1
    unsigned char pad[3]; // offset 0x1, size 0x3
    unsigned short nx; // offset 0x4, size 0x2
    unsigned short nz; // offset 0x6, size 0x2
    float minx; // offset 0x8, size 0x4
    float minz; // offset 0xC, size 0x4
    float maxx; // offset 0x10, size 0x4
    float maxz; // offset 0x14, size 0x4
    float csizex; // offset 0x18, size 0x4
    float csizez; // offset 0x1C, size 0x4
    float inv_csizex; // offset 0x20, size 0x4
    float inv_csizez; // offset 0x24, size 0x4
    float maxr; // offset 0x28, size 0x4
    class xGridBound * * cells; // offset 0x2C, size 0x4
    class xGridBound * other; // offset 0x30, size 0x4
};
class /* @class */ {
    // total size: 0xC
public:
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
};
class zPlayerSndTimer {
    // total size: 0x8
public:
    float timer; // offset 0x0, size 0x4
    float time; // offset 0x4, size 0x4
};
class RwBBox {
    // total size: 0x18
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
};
class xFactoryInst : public RyzMemData {
    // total size: 0xC
public:
    signed int itemType; // offset 0x0, size 0x4
    class xFactoryInst * nextprod; // offset 0x4, size 0x4
    class xFactoryInst * prevprod; // offset 0x8, size 0x4
};
class _zPortal : public xBase {
    // total size: 0x14
public:
    class xPortalAsset * passet; // offset 0x10, size 0x4
};
class RpPolygon {
    // total size: 0x8
public:
    unsigned short matIndex; // offset 0x0, size 0x2
    unsigned short vertIndex[3]; // offset 0x2, size 0x6
};
class xQuat {
    // total size: 0x10
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
class xGridBound {
    // total size: 0x14
public:
    void * data; // offset 0x0, size 0x4
    unsigned short gx; // offset 0x4, size 0x2
    unsigned short gz; // offset 0x6, size 0x2
    unsigned char ingrid; // offset 0x8, size 0x1
    unsigned char oversize; // offset 0x9, size 0x1
    unsigned char deleted; // offset 0xA, size 0x1
    unsigned char gpad; // offset 0xB, size 0x1
    class xGridBound * * head; // offset 0xC, size 0x4
    class xGridBound * next; // offset 0x10, size 0x4
};
class RpTriangle {
    // total size: 0x8
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    signed short matIndex; // offset 0x6, size 0x2
};
class xEntHangableAsset {
    // total size: 0x20
public:
    unsigned int flags; // offset 0x0, size 0x4
    float pivotOffset; // offset 0x4, size 0x4
    float leverArm; // offset 0x8, size 0x4
    float gravity; // offset 0xC, size 0x4
    float accel; // offset 0x10, size 0x4
    float decay; // offset 0x14, size 0x4
    float grabDelay; // offset 0x18, size 0x4
    float stopDecel; // offset 0x1C, size 0x4
};
class xAnimPlay {
    // total size: 0x20
public:
    class xAnimPlay * Next; // offset 0x0, size 0x4
    unsigned short NumSingle; // offset 0x4, size 0x2
    unsigned short BoneCount; // offset 0x6, size 0x2
    class xAnimSingle * Single; // offset 0x8, size 0x4
    void * Object; // offset 0xC, size 0x4
    class xAnimTable * Table; // offset 0x10, size 0x4
    class xMemPool * Pool; // offset 0x14, size 0x4
    class xModelInstance * ModelInst; // offset 0x18, size 0x4
    void (* BeforeAnimMatrices)(class xAnimPlay *, class xQuat *, class xVec3 *, signed int); // offset 0x1C, size 0x4
};
class zMovePoint : public xMovePoint {
    // total size: 0x30
};
class RwTexCoords {
    // total size: 0x8
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
class xQCData {
    // total size: 0x20
public:
    signed char xmin; // offset 0x0, size 0x1
    signed char ymin; // offset 0x1, size 0x1
    signed char zmin; // offset 0x2, size 0x1
    signed char zmin_dup; // offset 0x3, size 0x1
    signed char xmax; // offset 0x4, size 0x1
    signed char ymax; // offset 0x5, size 0x1
    signed char zmax; // offset 0x6, size 0x1
    signed char zmax_dup; // offset 0x7, size 0x1
    class xVec3 min; // offset 0x8, size 0xC
    class xVec3 max; // offset 0x14, size 0xC
};
class RpMaterialList {
    // total size: 0xC
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
};
class xCoef3 {
    // total size: 0x30
public:
    class xCoef x; // offset 0x0, size 0x10
    class xCoef y; // offset 0x10, size 0x10
    class xCoef z; // offset 0x20, size 0x10
};
class rxHeapBlockHeader {
    // total size: 0x20
public:
    class rxHeapBlockHeader * prev; // offset 0x0, size 0x4
    class rxHeapBlockHeader * next; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    class rxHeapFreeBlock * freeEntry; // offset 0xC, size 0x4
    unsigned int pad[4]; // offset 0x10, size 0x10
};
enum en_trantype {
    GOAL_TRAN_NONE = 0,
    GOAL_TRAN_SET = 1,
    GOAL_TRAN_PUSH = 2,
    GOAL_TRAN_POP = 3,
    GOAL_TRAN_POPTO = 4,
    GOAL_TRAN_POPALL = 5,
    GOAL_TRAN_POPBASE = 6,
    GOAL_TRAN_POPSAFE = 7,
    GOAL_TRAN_SWAP = 8,
    GOAL_TRAN_NOMORE = 9,
    GOAL_TRAN_FORCE = 2147483647,
};
class zFragLocation {
    // total size: 0x24
public:
    enum zFragLocType type; // offset 0x0, size 0x4
    class zFragLocInfo info; // offset 0x4, size 0x20
};
class xModelPool {
    // total size: 0xC
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
};
class xEntMotionMPData {
    // total size: 0xC
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int mp_id; // offset 0x4, size 0x4
    float speed; // offset 0x8, size 0x4
};
class xPlatformOrbitData {
    // total size: 0x4
public:
    signed int nodata; // offset 0x0, size 0x4
};
class xDynAsset : public xBaseAsset {
    // total size: 0x10
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
class xEntERData {
    // total size: 0x44
public:
    class xVec3 a; // offset 0x0, size 0xC
    class xVec3 b; // offset 0xC, size 0xC
    class xVec3 dir; // offset 0x18, size 0xC
    float et; // offset 0x24, size 0x4
    float wet; // offset 0x28, size 0x4
    float rt; // offset 0x2C, size 0x4
    float wrt; // offset 0x30, size 0x4
    float p; // offset 0x34, size 0x4
    float brt; // offset 0x38, size 0x4
    float ert; // offset 0x3C, size 0x4
    signed int state; // offset 0x40, size 0x4
};
class zGlobals : public xGlobals {
    // total size: 0x2050
public:
    class zPlayerGlobals player; // offset 0x700, size 0x1940
    class zAssetPickupTable * pickupTable; // offset 0x2040, size 0x4
    class zCutsceneMgr * cmgr; // offset 0x2044, size 0x4
    class zScene * sceneCur; // offset 0x2048, size 0x4
    class zScene * scenePreload; // offset 0x204C, size 0x4
};
class _tagxRumble {
    // total size: 0x10
public:
    enum _tagRumbleType type; // offset 0x0, size 0x4
    float seconds; // offset 0x4, size 0x4
    class _tagxRumble * next; // offset 0x8, size 0x4
    signed short active; // offset 0xC, size 0x2
    unsigned short fxflags; // offset 0xE, size 0x2
};
class xParEmitterPropsAsset : public xBaseAsset {
    // total size: 0x138
public:
    unsigned int parSysID; // offset 0x8, size 0x4
    union { // inferred
        class xParInterp rate; // offset 0xC, size 0x14
        class xParInterp value[1]; // offset 0xC, size 0x14
    };
    class xParInterp life; // offset 0x20, size 0x14
    class xParInterp size_birth; // offset 0x34, size 0x14
    class xParInterp size_death; // offset 0x48, size 0x14
    class xParInterp color_birth[4]; // offset 0x5C, size 0x50
    class xParInterp color_death[4]; // offset 0xAC, size 0x50
    class xParInterp vel_scale; // offset 0xFC, size 0x14
    class xParInterp vel_angle; // offset 0x110, size 0x14
    class xVec3 vel; // offset 0x124, size 0xC
    unsigned int emit_limit; // offset 0x130, size 0x4
    float emit_limit_reset_time; // offset 0x134, size 0x4
};
class RpMaterial {
    // total size: 0x1C
public:
    class RwTexture * texture; // offset 0x0, size 0x4
    class RwRGBA color; // offset 0x4, size 0x4
    class RxPipeline * pipeline; // offset 0x8, size 0x4
    class RwSurfaceProperties surfaceProps; // offset 0xC, size 0xC
    signed short refCount; // offset 0x18, size 0x2
    signed short pad; // offset 0x1A, size 0x2
};
class xAnimMultiFile : public xAnimMultiFileBase {
    // total size: 0xC
public:
    class xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
class xPlatformSpringboardData {
    // total size: 0x2C
public:
    float jmph[3]; // offset 0x0, size 0xC
    float jmpbounce; // offset 0xC, size 0x4
    unsigned int animID[3]; // offset 0x10, size 0xC
    class xVec3 jmpdir; // offset 0x1C, size 0xC
    unsigned int springflags; // offset 0x28, size 0x4
};
class tag_iFile {
    // total size: 0x90
public:
    unsigned int flags; // offset 0x0, size 0x4
    char path[128]; // offset 0x4, size 0x80
    signed int fd; // offset 0x84, size 0x4
    signed int offset; // offset 0x88, size 0x4
    signed int length; // offset 0x8C, size 0x4
};
class xCutsceneZbufferHack {
    // total size: 0x44
public:
    char * name; // offset 0x0, size 0x4
    class xCutsceneZbuffer times[4]; // offset 0x4, size 0x40
};
class zPlayerSettings {
    // total size: 0x460
public:
    enum _zPlayerType pcType; // offset 0x0, size 0x4
    float MoveSpeed[6]; // offset 0x4, size 0x18
    float AnimSneak[3]; // offset 0x1C, size 0xC
    float AnimWalk[3]; // offset 0x28, size 0xC
    float AnimRun[3]; // offset 0x34, size 0xC
    float JumpGravity; // offset 0x40, size 0x4
    float GravSmooth; // offset 0x44, size 0x4
    float FloatSpeed; // offset 0x48, size 0x4
    float ButtsmashSpeed; // offset 0x4C, size 0x4
    class zJumpParam Jump; // offset 0x50, size 0x10
    class zJumpParam Bounce; // offset 0x60, size 0x10
    class zJumpParam Spring; // offset 0x70, size 0x10
    class zJumpParam Wall; // offset 0x80, size 0x10
    class zJumpParam Double; // offset 0x90, size 0x10
    class zJumpParam SlideDouble; // offset 0xA0, size 0x10
    class zJumpParam SlideJump; // offset 0xB0, size 0x10
    float WallJumpVelocity; // offset 0xC0, size 0x4
    class zLedgeGrabParams ledge; // offset 0xD0, size 0x380
    float spin_damp_xz; // offset 0x450, size 0x4
    float spin_damp_y; // offset 0x454, size 0x4
    unsigned char talk_anims; // offset 0x458, size 0x1
    unsigned char talk_filter_size; // offset 0x459, size 0x1
    unsigned char talk_filter[4]; // offset 0x45A, size 0x4
};
class zGlobalSettings {
    // total size: 0x150
public:
    unsigned short AnalogMin; // offset 0x0, size 0x2
    unsigned short AnalogMax; // offset 0x2, size 0x2
    float SundaeTime; // offset 0x4, size 0x4
    float SundaeMult; // offset 0x8, size 0x4
    unsigned int InitialShinyCount; // offset 0xC, size 0x4
    unsigned int InitialSpatulaCount; // offset 0x10, size 0x4
    signed int ShinyValuePurple; // offset 0x14, size 0x4
    signed int ShinyValueBlue; // offset 0x18, size 0x4
    signed int ShinyValueGreen; // offset 0x1C, size 0x4
    signed int ShinyValueYellow; // offset 0x20, size 0x4
    signed int ShinyValueRed; // offset 0x24, size 0x4
    signed int ShinyValueCombo0; // offset 0x28, size 0x4
    signed int ShinyValueCombo1; // offset 0x2C, size 0x4
    signed int ShinyValueCombo2; // offset 0x30, size 0x4
    signed int ShinyValueCombo3; // offset 0x34, size 0x4
    signed int ShinyValueCombo4; // offset 0x38, size 0x4
    signed int ShinyValueCombo5; // offset 0x3C, size 0x4
    signed int ShinyValueCombo6; // offset 0x40, size 0x4
    signed int ShinyValueCombo7; // offset 0x44, size 0x4
    signed int ShinyValueCombo8; // offset 0x48, size 0x4
    signed int ShinyValueCombo9; // offset 0x4C, size 0x4
    signed int ShinyValueCombo10; // offset 0x50, size 0x4
    signed int ShinyValueCombo11; // offset 0x54, size 0x4
    signed int ShinyValueCombo12; // offset 0x58, size 0x4
    signed int ShinyValueCombo13; // offset 0x5C, size 0x4
    signed int ShinyValueCombo14; // offset 0x60, size 0x4
    signed int ShinyValueCombo15; // offset 0x64, size 0x4
    float ComboTimer; // offset 0x68, size 0x4
    unsigned int Initial_Specials; // offset 0x6C, size 0x4
    unsigned int TakeDamage; // offset 0x70, size 0x4
    float DamageTimeHit; // offset 0x74, size 0x4
    float DamageTimeSurface; // offset 0x78, size 0x4
    float DamageTimeEGen; // offset 0x7C, size 0x4
    float DamageSurfKnock; // offset 0x80, size 0x4
    float DamageGiveHealthKnock; // offset 0x84, size 0x4
    unsigned int CheatSpongeball; // offset 0x88, size 0x4
    unsigned int CheatPlayerSwitch; // offset 0x8C, size 0x4
    unsigned int CheatAlwaysPortal; // offset 0x90, size 0x4
    unsigned int CheatFlyToggle; // offset 0x94, size 0x4
    unsigned int DisableForceConversation; // offset 0x98, size 0x4
    float StartSlideAngle; // offset 0x9C, size 0x4
    float StopSlideAngle; // offset 0xA0, size 0x4
    float RotMatchMaxAngle; // offset 0xA4, size 0x4
    float RotMatchMatchTime; // offset 0xA8, size 0x4
    float RotMatchRelaxTime; // offset 0xAC, size 0x4
    float Gravity; // offset 0xB0, size 0x4
    float BBashTime; // offset 0xB4, size 0x4
    float BBashHeight; // offset 0xB8, size 0x4
    float BBashDelay; // offset 0xBC, size 0x4
    float BBashCVTime; // offset 0xC0, size 0x4
    float BBounceSpeed; // offset 0xC4, size 0x4
    float BSpinMinFrame; // offset 0xC8, size 0x4
    float BSpinMaxFrame; // offset 0xCC, size 0x4
    float BSpinRadius; // offset 0xD0, size 0x4
    float SandyMeleeMinFrame; // offset 0xD4, size 0x4
    float SandyMeleeMaxFrame; // offset 0xD8, size 0x4
    float SandyMeleeRadius; // offset 0xDC, size 0x4
    float BubbleBowlTimeDelay; // offset 0xE0, size 0x4
    float BubbleBowlLaunchPosLeft; // offset 0xE4, size 0x4
    float BubbleBowlLaunchPosUp; // offset 0xE8, size 0x4
    float BubbleBowlLaunchPosAt; // offset 0xEC, size 0x4
    float BubbleBowlLaunchVelLeft; // offset 0xF0, size 0x4
    float BubbleBowlLaunchVelUp; // offset 0xF4, size 0x4
    float BubbleBowlLaunchVelAt; // offset 0xF8, size 0x4
    float BubbleBowlPercentIncrease; // offset 0xFC, size 0x4
    float BubbleBowlMinSpeed; // offset 0x100, size 0x4
    float BubbleBowlMinRecoverTime; // offset 0x104, size 0x4
    float SlideAccelVelMin; // offset 0x108, size 0x4
    float SlideAccelVelMax; // offset 0x10C, size 0x4
    float SlideAccelStart; // offset 0x110, size 0x4
    float SlideAccelEnd; // offset 0x114, size 0x4
    float SlideAccelPlayerFwd; // offset 0x118, size 0x4
    float SlideAccelPlayerBack; // offset 0x11C, size 0x4
    float SlideAccelPlayerSide; // offset 0x120, size 0x4
    float SlideVelMaxStart; // offset 0x124, size 0x4
    float SlideVelMaxEnd; // offset 0x128, size 0x4
    float SlideVelMaxIncTime; // offset 0x12C, size 0x4
    float SlideVelMaxIncAccel; // offset 0x130, size 0x4
    float SlideAirHoldTime; // offset 0x134, size 0x4
    float SlideAirSlowTime; // offset 0x138, size 0x4
    float SlideAirDblHoldTime; // offset 0x13C, size 0x4
    float SlideAirDblSlowTime; // offset 0x140, size 0x4
    float SlideVelDblBoost; // offset 0x144, size 0x4
    unsigned char SlideApplyPhysics; // offset 0x148, size 0x1
    unsigned char PowerUp[2]; // offset 0x149, size 0x2
    unsigned char InitialPowerUp[2]; // offset 0x14B, size 0x2
};
class iAnimSKBHeader {
    // total size: 0x1C
public:
    unsigned int Magic; // offset 0x0, size 0x4
    unsigned int Flags; // offset 0x4, size 0x4
    unsigned short BoneCount; // offset 0x8, size 0x2
    unsigned short TimeCount; // offset 0xA, size 0x2
    unsigned int KeyCount; // offset 0xC, size 0x4
    float Scale[3]; // offset 0x10, size 0xC
};
class xLinkAsset {
    // total size: 0x20
public:
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
class xQCControl {
    // total size: 0x3C
public:
    float world_xmin; // offset 0x0, size 0x4
    float world_ymin; // offset 0x4, size 0x4
    float world_zmin; // offset 0x8, size 0x4
    float world_xmax; // offset 0xC, size 0x4
    float world_ymax; // offset 0x10, size 0x4
    float world_zmax; // offset 0x14, size 0x4
    float world_xsz; // offset 0x18, size 0x4
    float world_ysz; // offset 0x1C, size 0x4
    float world_zsz; // offset 0x20, size 0x4
    float scale_x; // offset 0x24, size 0x4
    float scale_y; // offset 0x28, size 0x4
    float scale_z; // offset 0x2C, size 0x4
    float center_x; // offset 0x30, size 0x4
    float center_y; // offset 0x34, size 0x4
    float center_z; // offset 0x38, size 0x4
};
class zAssetPickupTable {
    // total size: 0x8
public:
    unsigned int Magic; // offset 0x0, size 0x4
    unsigned int Count; // offset 0x4, size 0x4
};
class xEntAsset : public xBaseAsset {
    // total size: 0x54
public:
    unsigned char flags; // offset 0x8, size 0x1
    unsigned char subtype; // offset 0x9, size 0x1
    unsigned char pflags; // offset 0xA, size 0x1
    unsigned char moreFlags; // offset 0xB, size 0x1
    unsigned char pad; // offset 0xC, size 0x1
    unsigned int surfaceID; // offset 0x10, size 0x4
    class xVec3 ang; // offset 0x14, size 0xC
    class xVec3 pos; // offset 0x20, size 0xC
    class xVec3 scale; // offset 0x2C, size 0xC
    float redMult; // offset 0x38, size 0x4
    float greenMult; // offset 0x3C, size 0x4
    float blueMult; // offset 0x40, size 0x4
    float seeThru; // offset 0x44, size 0x4
    float seeThruSpeed; // offset 0x48, size 0x4
    unsigned int modelInfoID; // offset 0x4C, size 0x4
    unsigned int animListID; // offset 0x50, size 0x4
};
class zFragShockwave {
    // total size: 0x38
public:
    class zFragShockwaveAsset * fasset; // offset 0x0, size 0x4
    float currSize; // offset 0x4, size 0x4
    float currVelocity; // offset 0x8, size 0x4
    float deltVelocity; // offset 0xC, size 0x4
    float currSpin; // offset 0x10, size 0x4
    float deltSpin; // offset 0x14, size 0x4
    float currColor[4]; // offset 0x18, size 0x10
    float deltColor[4]; // offset 0x28, size 0x10
};
class zCutsceneMgr : public xCutsceneMgr {
    // total size: 0x24
};
class _tagEmitOffsetPoint {
    // total size: 0xC
public:
    class xVec3 offset; // offset 0x0, size 0xC
};
class zFragShockwaveAsset : public zFragAsset {
    // total size: 0x54
public:
    unsigned int modelInfoID; // offset 0x18, size 0x4
    float birthRadius; // offset 0x1C, size 0x4
    float deathRadius; // offset 0x20, size 0x4
    float birthVelocity; // offset 0x24, size 0x4
    float deathVelocity; // offset 0x28, size 0x4
    float birthSpin; // offset 0x2C, size 0x4
    float deathSpin; // offset 0x30, size 0x4
    float birthColor[4]; // offset 0x34, size 0x10
    float deathColor[4]; // offset 0x44, size 0x10
};
class RpWorldSector {
    // total size: 0x90
public:
    signed int type; // offset 0x0, size 0x4
    class RpPolygon * polygons; // offset 0x4, size 0x4
    class RwV3d * vertices; // offset 0x8, size 0x4
    class RpVertexNormal * normals; // offset 0xC, size 0x4
    class RwTexCoords * texCoords[8]; // offset 0x10, size 0x20
    class RwRGBA * preLitLum; // offset 0x30, size 0x4
    class RwResEntry * repEntry; // offset 0x34, size 0x4
    class RwLinkList collAtomicsInWorldSector; // offset 0x38, size 0x8
    class RwLinkList noCollAtomicsInWorldSector; // offset 0x40, size 0x8
    class RwLinkList lightsInWorldSector; // offset 0x48, size 0x8
    class RwBBox boundingBox; // offset 0x50, size 0x18
    class RwBBox tightBoundingBox; // offset 0x68, size 0x18
    class RpMeshHeader * mesh; // offset 0x80, size 0x4
    class RxPipeline * pipeline; // offset 0x84, size 0x4
    unsigned short matListWindowBase; // offset 0x88, size 0x2
    unsigned short numVertices; // offset 0x8A, size 0x2
    unsigned short numPolygons; // offset 0x8C, size 0x2
    unsigned short pad; // offset 0x8E, size 0x2
};
class xEntNPCAsset {
    // total size: 0x18
public:
    signed int npcFlags; // offset 0x0, size 0x4
    signed int npcModel; // offset 0x4, size 0x4
    signed int npcProps; // offset 0x8, size 0x4
    unsigned int movepoint; // offset 0xC, size 0x4
    unsigned int taskWidgetPrime; // offset 0x10, size 0x4
    unsigned int taskWidgetSecond; // offset 0x14, size 0x4
};
class tag_xFile {
    // total size: 0xB4
public:
    char relname[32]; // offset 0x0, size 0x20
    class tag_iFile ps; // offset 0x20, size 0x90
    void * user_data; // offset 0xB0, size 0x4
};
class /* @class */ {
    // total size: 0x220
public:
    class xVec3 base_point[16]; // offset 0x0, size 0xC0
    class xVec3 point[16]; // offset 0xC0, size 0xC0
    signed short total_points; // offset 0x180, size 0x2
    signed short end_points; // offset 0x182, size 0x2
    float arc_height; // offset 0x184, size 0x4
    class xVec3 arc_normal; // offset 0x188, size 0xC
    float thickness[16]; // offset 0x194, size 0x40
    union { // inferred
        class _tagLightningLine line; // offset 0x1D4, size 0x4
        class _tagLightningRot rot; // offset 0x1D4, size 0x48
        class _tagLightningZeus zeus; // offset 0x1D4, size 0xC
    };
    float rand_radius; // offset 0x21C, size 0x4
};
class xVec4 {
    // total size: 0x10
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
enum zFragType {
    eFragInactive = 0,
    eFragGroup = 1,
    eFragShrapnel = 2,
    eFragParticle = 3,
    eFragProjectile = 4,
    eFragLightning = 5,
    eFragSound = 6,
    eFragShockwave = 7,
    eFragCount = 8,
    eFragForceSize = 2147483647,
};
class xNearFloorPoly {
    // total size: 0x80
public:
    class xBox box; // offset 0x0, size 0x18
    class xVec3 center; // offset 0x18, size 0xC
    class xVec3 facingVec; // offset 0x24, size 0xC
    float facingDot; // offset 0x30, size 0x4
    float floorDot; // offset 0x34, size 0x4
    class xVec3 vert[3]; // offset 0x38, size 0x24
    float neardist; // offset 0x5C, size 0x4
    class xVec3 nearpt; // offset 0x60, size 0xC
    signed int nearvert; // offset 0x6C, size 0x4
    signed int nearedge; // offset 0x70, size 0x4
    unsigned int oid; // offset 0x74, size 0x4
    void * optr; // offset 0x78, size 0x4
    class xModelInstance * mptr; // offset 0x7C, size 0x4
};
class xPlatformSplineData {
    // total size: 0x4
public:
    signed int nodata; // offset 0x0, size 0x4
};
class tri_data : public tri_data {
    // total size: 0x20
public:
    class xVec3 loc; // offset 0xC, size 0xC
    float yaw; // offset 0x18, size 0x4
    class xCollis * coll; // offset 0x1C, size 0x4
};
class xEntShadow {
    // total size: 0x28
public:
    class xVec3 pos; // offset 0x0, size 0xC
    class xVec3 vec; // offset 0xC, size 0xC
    class RpAtomic * shadowModel; // offset 0x18, size 0x4
    float dst_cast; // offset 0x1C, size 0x4
    float radius[2]; // offset 0x20, size 0x8
};
class RwSurfaceProperties {
    // total size: 0xC
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
class zLedgeGrabParams {
    // total size: 0x380
public:
    float animGrab; // offset 0x0, size 0x4
    float zdist; // offset 0x4, size 0x4
    class xVec3 tranTable[60]; // offset 0x8, size 0x2D0
    signed int tranCount; // offset 0x2D8, size 0x4
    class xEnt * optr; // offset 0x2DC, size 0x4
    class xMat4x3 omat; // offset 0x2E0, size 0x40
    float y0det; // offset 0x320, size 0x4
    float dydet; // offset 0x324, size 0x4
    float r0det; // offset 0x328, size 0x4
    float drdet; // offset 0x32C, size 0x4
    float thdet; // offset 0x330, size 0x4
    float rtime; // offset 0x334, size 0x4
    float ttime; // offset 0x338, size 0x4
    float tmr; // offset 0x33C, size 0x4
    class xVec3 spos; // offset 0x340, size 0xC
    class xVec3 epos; // offset 0x34C, size 0xC
    class xVec3 tpos; // offset 0x358, size 0xC
    signed int nrays; // offset 0x364, size 0x4
    signed int rrand; // offset 0x368, size 0x4
    float startrot; // offset 0x36C, size 0x4
    float endrot; // offset 0x370, size 0x4
};
class RpMorphTarget {
    // total size: 0x1C
public:
    class RpGeometry * parentGeom; // offset 0x0, size 0x4
    class RwSphere boundingSphere; // offset 0x4, size 0x10
    class RwV3d * verts; // offset 0x14, size 0x4
    class RwV3d * normals; // offset 0x18, size 0x4
};
class xGroup : public xBase {
    // total size: 0x20
public:
    class xGroupAsset * asset; // offset 0x10, size 0x4
    class xBase * * item; // offset 0x14, size 0x4
    unsigned int last_index; // offset 0x18, size 0x4
    signed int flg_group; // offset 0x1C, size 0x4
};
class xUpdateCullEnt {
    // total size: 0x10
public:
    unsigned short index; // offset 0x0, size 0x2
    signed short groupIndex; // offset 0x2, size 0x2
    unsigned int (* cb)(void *, void *); // offset 0x4, size 0x4
    void * cbdata; // offset 0x8, size 0x4
    class xUpdateCullEnt * nextInGroup; // offset 0xC, size 0x4
};
class xEntMotionMechData {
    // total size: 0x2C
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char flags; // offset 0x1, size 0x1
    unsigned char sld_axis; // offset 0x2, size 0x1
    unsigned char rot_axis; // offset 0x3, size 0x1
    float sld_dist; // offset 0x4, size 0x4
    float sld_tm; // offset 0x8, size 0x4
    float sld_acc_tm; // offset 0xC, size 0x4
    float sld_dec_tm; // offset 0x10, size 0x4
    float rot_dist; // offset 0x14, size 0x4
    float rot_tm; // offset 0x18, size 0x4
    float rot_acc_tm; // offset 0x1C, size 0x4
    float rot_dec_tm; // offset 0x20, size 0x4
    float ret_delay; // offset 0x24, size 0x4
    float post_ret_delay; // offset 0x28, size 0x4
};
class zSurfTextureAnim {
    // total size: 0xC
public:
    unsigned short pad; // offset 0x0, size 0x2
    unsigned short mode; // offset 0x2, size 0x2
    unsigned int group; // offset 0x4, size 0x4
    float speed; // offset 0x8, size 0x4
};
class xMovePoint : public xBase {
    // total size: 0x30
public:
    class xMovePointAsset * asset; // offset 0x10, size 0x4
    class xVec3 * pos; // offset 0x14, size 0x4
    class xMovePoint * * nodes; // offset 0x18, size 0x4
    class xMovePoint * prev; // offset 0x1C, size 0x4
    unsigned int node_wt_sum; // offset 0x20, size 0x4
    unsigned char on; // offset 0x24, size 0x1
    unsigned char pad[2]; // offset 0x25, size 0x2
    float delay; // offset 0x28, size 0x4
    class xSpline3 * spl; // offset 0x2C, size 0x4
};
class zGustData {
    // total size: 0x24
public:
    unsigned int gust_on; // offset 0x0, size 0x4
    class zGust * g[4]; // offset 0x4, size 0x10
    float lerp[4]; // offset 0x14, size 0x10
};
class rxReq {
    // total size: 0x0
};
class anim_coll_data {
    // total size: 0x0
};
class xCurveAsset {
    // total size: 0x0
};
class xEntPenData {
    // total size: 0x50
public:
    class xVec3 top; // offset 0x0, size 0xC
    float w; // offset 0xC, size 0x4
    class xMat4x3 omat; // offset 0x10, size 0x40
};
enum _zPlayerWallJumpState {
    k_WALLJUMP_NOT = 0,
    k_WALLJUMP_LAUNCH = 1,
    k_WALLJUMP_FLIGHT = 2,
    k_WALLJUMP_LAND = 3,
};
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
class TrackPolyData {
    // total size: 0x58
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xMat4x3 * mat; // offset 0xC, size 0x4
    class xEnt * testEnt; // offset 0x10, size 0x4
    signed int triIndex; // offset 0x14, size 0x4
    class xVec3 vert[3]; // offset 0x18, size 0x24
    float neardist; // offset 0x3C, size 0x4
    class xVec3 nearpt; // offset 0x40, size 0xC
    signed int nearvert; // offset 0x4C, size 0x4
    signed int nearedge; // offset 0x50, size 0x4
    class xEnt * foundEnt; // offset 0x54, size 0x4
};
class xCutsceneMgr : public xBase {
    // total size: 0x24
public:
    class xCutsceneMgrAsset * tasset; // offset 0x10, size 0x4
    class xCutscene * csn; // offset 0x14, size 0x4
    unsigned int stop; // offset 0x18, size 0x4
    class xCutsceneZbufferHack * zhack; // offset 0x1C, size 0x4
    float oldfov; // offset 0x20, size 0x4
};
class xRay3 {
    // total size: 0x24
public:
    class xVec3 origin; // offset 0x0, size 0xC
    class xVec3 dir; // offset 0xC, size 0xC
    float min_t; // offset 0x18, size 0x4
    float max_t; // offset 0x1C, size 0x4
    signed int flags; // offset 0x20, size 0x4
};
class xPEVCyl {
    // total size: 0xC
public:
    float height; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
};
class xPlatformTeeterData {
    // total size: 0xC
public:
    float itilt; // offset 0x0, size 0x4
    float maxtilt; // offset 0x4, size 0x4
    float invmass; // offset 0x8, size 0x4
};
class xPlatformMPData {
    // total size: 0x4
public:
    signed int nodata; // offset 0x0, size 0x4
};
class xCutsceneMgrAsset : public xBaseAsset {
    // total size: 0xC8
public:
    unsigned int cutsceneAssetID; // offset 0x8, size 0x4
    unsigned int flags; // offset 0xC, size 0x4
    float interpSpeed; // offset 0x10, size 0x4
    float startTime[15]; // offset 0x14, size 0x3C
    float endTime[15]; // offset 0x50, size 0x3C
    unsigned int emitID[15]; // offset 0x8C, size 0x3C
};
class RpMeshHeader {
    // total size: 0x10
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned short numMeshes; // offset 0x4, size 0x2
    unsigned short serialNum; // offset 0x6, size 0x2
    unsigned int totalIndicesInMesh; // offset 0x8, size 0x4
    unsigned int firstMeshOffset; // offset 0xC, size 0x4
};
class xParSys : public xBase {
    // total size: 0x2C
public:
    class xParSysAsset * tasset; // offset 0x10, size 0x4
    unsigned int cmdCount; // offset 0x14, size 0x4
    class xParCmd * cmd; // offset 0x18, size 0x4
    class xParSys * parent; // offset 0x1C, size 0x4
    class xParGroup * group; // offset 0x20, size 0x4
    unsigned char visible; // offset 0x24, size 0x1
    class RwTexture * txtr_particle; // offset 0x28, size 0x4
};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
class /* @class */ {
    // total size: 0x10
public:
    signed int anim; // offset 0x0, size 0x4
    unsigned int sndid; // offset 0x4, size 0x4
    void * data; // offset 0x8, size 0x4
    float time; // offset 0xC, size 0x4
};
class xParInterp {
    // total size: 0x14
public:
    float val[2]; // offset 0x0, size 0x8
    unsigned int interp; // offset 0x8, size 0x4
    float freq; // offset 0xC, size 0x4
    float oofreq; // offset 0x10, size 0x4
};
enum _tagRumbleType {
    eRumble_Off = 0,
    eRumble_Hi = 1,
    eRumble_VeryLightHi = 2,
    eRumble_VeryLight = 3,
    eRumble_LightHi = 4,
    eRumble_Light = 5,
    eRumble_MediumHi = 6,
    eRumble_Medium = 7,
    eRumble_HeavyHi = 8,
    eRumble_Heavy = 9,
    eRumble_VeryHeavyHi = 10,
    eRumble_VeryHeavy = 11,
    eRumble_Total = 12,
    eRumbleForceU32 = 2147483647,
};
class xCutscene {
    // total size: 0x138
public:
    class xCutsceneInfo * Info; // offset 0x0, size 0x4
    class xCutsceneData * Data; // offset 0x4, size 0x4
    unsigned int * TimeChunkOffs; // offset 0x8, size 0x4
    unsigned int * Visibility; // offset 0xC, size 0x4
    class xCutsceneBreak * BreakList; // offset 0x10, size 0x4
    class xCutsceneTime * Play; // offset 0x14, size 0x4
    class xCutsceneTime * Stream; // offset 0x18, size 0x4
    unsigned int Waiting; // offset 0x1C, size 0x4
    unsigned int BadReadPause; // offset 0x20, size 0x4
    float BadReadSpeed; // offset 0x24, size 0x4
    void * RawBuf; // offset 0x28, size 0x4
    void * AlignBuf; // offset 0x2C, size 0x4
    float Time; // offset 0x30, size 0x4
    float CamTime; // offset 0x34, size 0x4
    unsigned int PlayIndex; // offset 0x38, size 0x4
    unsigned int Ready; // offset 0x3C, size 0x4
    signed int DataLoading; // offset 0x40, size 0x4
    unsigned int GotData; // offset 0x44, size 0x4
    unsigned int ShutDownWait; // offset 0x48, size 0x4
    float PlaybackSpeed; // offset 0x4C, size 0x4
    unsigned int Opened; // offset 0x50, size 0x4
    class tag_xFile File; // offset 0x54, size 0xB4
    signed int AsyncID; // offset 0x108, size 0x4
    void * MemBuf; // offset 0x10C, size 0x4
    void * MemCurr; // offset 0x110, size 0x4
    unsigned int SndStarted; // offset 0x114, size 0x4
    unsigned int SndNumChannel; // offset 0x118, size 0x4
    unsigned int SndChannelReq[2]; // offset 0x11C, size 0x8
    unsigned int SndAssetID[2]; // offset 0x124, size 0x8
    unsigned int SndHandle[2]; // offset 0x12C, size 0x8
    class XCSNNosey * cb_nosey; // offset 0x134, size 0x4
};
enum _zPlayerType {
    ePlayer_SB = 0,
    ePlayer_Patrick = 1,
    ePlayer_Sandy = 2,
    ePlayer_MAXTYPES = 3,
};
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
class xEntOrbitData {
    // total size: 0x28
public:
    class xVec3 orig; // offset 0x0, size 0xC
    class xVec3 c; // offset 0xC, size 0xC
    float a; // offset 0x18, size 0x4
    float b; // offset 0x1C, size 0x4
    float p; // offset 0x20, size 0x4
    float w; // offset 0x24, size 0x4
};
class xPsyche : public RyzMemData {
    // total size: 0x68
public:
    class xBase * clt_owner; // offset 0x0, size 0x4
    class xPSYNote * cb_notice; // offset 0x4, size 0x4
    signed int flg_psyche; // offset 0x8, size 0x4
    class xGoal * goallist; // offset 0xC, size 0x4
    class xGoal * goalstak[5]; // offset 0x10, size 0x14
    float tmr_stack[5][1]; // offset 0x24, size 0x14
    signed int staktop; // offset 0x38, size 0x4
    class xGoal * pendgoal; // offset 0x3C, size 0x4
    enum en_pendtype pendtype; // offset 0x40, size 0x4
    signed int gid_safegoal; // offset 0x44, size 0x4
    void (* fun_remap)(signed int *, enum en_trantype *); // offset 0x48, size 0x4
    void * userContext; // offset 0x4C, size 0x4
    signed int cnt_transLastTimestep; // offset 0x50, size 0x4
    enum PSY_BRAIN_STATUS psystat; // offset 0x54, size 0x4
    class xBase fakebase; // offset 0x58, size 0x10
};
class xMemPool {
    // total size: 0x1C
public:
    void * FreeList; // offset 0x0, size 0x4
    unsigned short NextOffset; // offset 0x4, size 0x2
    unsigned short Flags; // offset 0x6, size 0x2
    void * UsedList; // offset 0x8, size 0x4
    void (* InitCB)(class xMemPool *, void *); // offset 0xC, size 0x4
    void * Buffer; // offset 0x10, size 0x4
    unsigned short Size; // offset 0x14, size 0x2
    unsigned short NumRealloc; // offset 0x16, size 0x2
    unsigned int Total; // offset 0x18, size 0x4
};
class _tagLightningLine {
    // total size: 0x4
public:
    float unused; // offset 0x0, size 0x4
};
class zSurfacePropTexAnim {
    // total size: 0x18
public:
    unsigned short mode; // offset 0x0, size 0x2
    float speed; // offset 0x4, size 0x4
    float frame; // offset 0x8, size 0x4
    unsigned int group; // offset 0xC, size 0x4
    signed int group_idx; // offset 0x10, size 0x4
    class xBase * group_ptr; // offset 0x14, size 0x4
};
class Melee_cbData {
    // total size: 0x10
public:
    class xEnt * ent; // offset 0x0, size 0x4
    class zScene * zsc; // offset 0x4, size 0x4
    class xBound * meleeB; // offset 0x8, size 0x4
    signed int hitsomething; // offset 0xC, size 0x4
};
class xRot {
    // total size: 0x10
public:
    class xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
};
class xIsect {
    // total size: 0x2C
public:
    unsigned int flags; // offset 0x0, size 0x4
    float penned; // offset 0x4, size 0x4
    float contained; // offset 0x8, size 0x4
    float lapped; // offset 0xC, size 0x4
    class xVec3 point; // offset 0x10, size 0xC
    class xVec3 norm; // offset 0x1C, size 0xC
    float dist; // offset 0x28, size 0x4
};
class zFragGroup {
    // total size: 0x54
public:
    class zFrag * list[21]; // offset 0x0, size 0x54
};
class analog_data {
    // total size: 0x18
public:
    class xVec2 offset; // offset 0x0, size 0x8
    class xVec2 dir; // offset 0x8, size 0x8
    float mag; // offset 0x10, size 0x4
    float ang; // offset 0x14, size 0x4
};
class xSpline3 {
    // total size: 0x2C
public:
    unsigned short type; // offset 0x0, size 0x2
    unsigned short flags; // offset 0x2, size 0x2
    unsigned int N; // offset 0x4, size 0x4
    unsigned int allocN; // offset 0x8, size 0x4
    class xVec3 * points; // offset 0xC, size 0x4
    float * time; // offset 0x10, size 0x4
    class xVec3 * p12; // offset 0x14, size 0x4
    class xVec3 * bctrl; // offset 0x18, size 0x4
    float * knot; // offset 0x1C, size 0x4
    class xCoef3 * coef; // offset 0x20, size 0x4
    unsigned int arcSample; // offset 0x24, size 0x4
    float * arcLength; // offset 0x28, size 0x4
};
class xClumpCollBSPVertInfo {
    // total size: 0x4
public:
    unsigned short atomIndex; // offset 0x0, size 0x2
    unsigned short meshVertIndex; // offset 0x2, size 0x2
};
class xBox {
    // total size: 0x18
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};
class xEntMotion {
    // total size: 0x80
public:
    class xEntMotionAsset * asset; // offset 0x0, size 0x4
    unsigned char type; // offset 0x4, size 0x1
    unsigned char pad; // offset 0x5, size 0x1
    unsigned short flags; // offset 0x6, size 0x2
    float t; // offset 0x8, size 0x4
    float tmr; // offset 0xC, size 0x4
    float d; // offset 0x10, size 0x4
    union { // inferred
        class xEntERData er; // offset 0x20, size 0x44
        class xEntOrbitData orb; // offset 0x20, size 0x28
        class xEntSplineData spl; // offset 0x20, size 0x4
        class xEntMPData mp; // offset 0x20, size 0x40
        class xEntMechData mech; // offset 0x20, size 0x4C
        class xEntPenData pen; // offset 0x20, size 0x50
    };
    class xEnt * owner; // offset 0x70, size 0x4
    class xEnt * target; // offset 0x74, size 0x4
};
class xListItem {
    // total size: 0xC
public:
    signed int flg_travFilter; // offset 0x0, size 0x4
    class NPCConfig * next; // offset 0x4, size 0x4
    class NPCConfig * prev; // offset 0x8, size 0x4
};
class xUpdateCullGroup {
    // total size: 0xC
public:
    unsigned int active; // offset 0x0, size 0x4
    unsigned short startIndex; // offset 0x4, size 0x2
    unsigned short endIndex; // offset 0x6, size 0x2
    class xGroup * groupObject; // offset 0x8, size 0x4
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
class zFragInfo {
    // total size: 0x60
public:
    union { // inferred
        class zFragGroup group; // offset 0x0, size 0x54
        class zFragParticle particle; // offset 0x0, size 0x4
        class zFragProjectile projectile; // offset 0x0, size 0x60
        class zFragLightning lightning; // offset 0x0, size 0x10
        class zFragSound sound; // offset 0x0, size 0x14
        class zFragShockwave shockwave; // offset 0x0, size 0x38
    };
};
class xPlatformAsset {
    // total size: 0x3C
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char pad; // offset 0x1, size 0x1
    unsigned short flags; // offset 0x2, size 0x2
    union { // inferred
        class xPlatformERData er; // offset 0x4, size 0x4
        class xPlatformOrbitData orb; // offset 0x4, size 0x4
        class xPlatformSplineData spl; // offset 0x4, size 0x4
        class xPlatformMPData mp; // offset 0x4, size 0x4
        class xPlatformMechData mech; // offset 0x4, size 0x4
        class xPlatformPenData pen; // offset 0x4, size 0x4
        class xPlatformConvBeltData cb; // offset 0x4, size 0x4
        class xPlatformFallingData fall; // offset 0x4, size 0x8
        class xPlatformFRData fr; // offset 0x4, size 0x10
        class xPlatformBreakawayData ba; // offset 0x4, size 0x10
        class xPlatformSpringboardData sb; // offset 0x4, size 0x2C
        class xPlatformTeeterData teet; // offset 0x4, size 0xC
        class xPlatformPaddleData paddle; // offset 0x4, size 0x38
        class xPlatformFMData fm; // offset 0x4, size 0x4
    };
};
class xPEEntBone {
    // total size: 0x18
public:
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char type; // offset 0x1, size 0x1
    unsigned char bone; // offset 0x2, size 0x1
    unsigned char pad1; // offset 0x3, size 0x1
    class xVec3 offset; // offset 0x4, size 0xC
    float radius; // offset 0x10, size 0x4
    float deflection; // offset 0x14, size 0x4
};
enum en_LASSO_EVENT {
    LASS_EVNT_BEGIN = 0,
    LASS_EVNT_ENDED = 1,
    LASS_EVNT_GRABSTART = 2,
    LASS_EVNT_GRABEND = 3,
    LASS_EVNT_YANK = 4,
    LASS_EVNT_ABORT = 5,
    LASS_EVNT_NOMORE = 6,
    LASS_EVNT_FORCEINT = 2147483647,
};
class xEntMotionAsset {
    // total size: 0x30
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char use_banking; // offset 0x1, size 0x1
    unsigned short flags; // offset 0x2, size 0x2
    union { // inferred
        class xEntMotionERData er; // offset 0x4, size 0x28
        class xEntMotionOrbitData orb; // offset 0x4, size 0x18
        class xEntMotionSplineData spl; // offset 0x4, size 0x4
        class xEntMotionMPData mp; // offset 0x4, size 0xC
        class xEntMotionMechData mech; // offset 0x4, size 0x2C
        class xEntMotionPenData pen; // offset 0x4, size 0x14
    };
};
class xPlatformMechData {
    // total size: 0x4
public:
    signed int nodata; // offset 0x0, size 0x4
};
class xClumpCollBSPTriangle {
    // total size: 0x8
public:
    class /* @class */ {
        // total size: 0x4
    public:
        union { // inferred
            class xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
            class RwV3d * p; // offset 0x0, size 0x4
        };
    } v; // offset 0x0, size 0x4
    unsigned char flags; // offset 0x4, size 0x1
    unsigned char platData; // offset 0x5, size 0x1
    unsigned short matIndex; // offset 0x6, size 0x2
};
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
};
class PlayerStreakInfo {
    // total size: 0x38
public:
    unsigned int activated; // offset 0x0, size 0x4
    unsigned int streakID; // offset 0x4, size 0x4
    class xModelTag * tagA; // offset 0x8, size 0x4
    class xModelTag * tagB; // offset 0xC, size 0x4
    float alphaStart; // offset 0x10, size 0x4
    signed int streakTaper; // offset 0x14, size 0x4
    class iColor_tag colA; // offset 0x18, size 0x4
    class iColor_tag colB; // offset 0x1C, size 0x4
    class xVec3 a; // offset 0x20, size 0xC
    class xVec3 b; // offset 0x2C, size 0xC
};
class xEntBoulderAsset {
    // total size: 0x48
public:
    float gravity; // offset 0x0, size 0x4
    float mass; // offset 0x4, size 0x4
    float bounce; // offset 0x8, size 0x4
    float friction; // offset 0xC, size 0x4
    float statFric; // offset 0x10, size 0x4
    float maxVel; // offset 0x14, size 0x4
    float maxAngVel; // offset 0x18, size 0x4
    float stickiness; // offset 0x1C, size 0x4
    float bounceDamp; // offset 0x20, size 0x4
    unsigned int flags; // offset 0x24, size 0x4
    float killtimer; // offset 0x28, size 0x4
    unsigned int hitpoints; // offset 0x2C, size 0x4
    unsigned int soundID; // offset 0x30, size 0x4
    float volume; // offset 0x34, size 0x4
    float minSoundVel; // offset 0x38, size 0x4
    float maxSoundVel; // offset 0x3C, size 0x4
    float innerRadius; // offset 0x40, size 0x4
    float outerRadius; // offset 0x44, size 0x4
};
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
class NPCSndQueue {
    // total size: 0x14
public:
    unsigned int sndDirect; // offset 0x0, size 0x4
    enum en_NPC_SOUND sndtype; // offset 0x4, size 0x4
    signed int flg_snd; // offset 0x8, size 0x4
    float tmr_delay; // offset 0xC, size 0x4
    float radius; // offset 0x10, size 0x4
};
class zLasso {
    // total size: 0xFC
public:
    unsigned int flags; // offset 0x0, size 0x4
    float secsTotal; // offset 0x4, size 0x4
    float secsLeft; // offset 0x8, size 0x4
    float stRadius; // offset 0xC, size 0x4
    float tgRadius; // offset 0x10, size 0x4
    float crRadius; // offset 0x14, size 0x4
    class xVec3 stCenter; // offset 0x18, size 0xC
    class xVec3 tgCenter; // offset 0x24, size 0xC
    class xVec3 crCenter; // offset 0x30, size 0xC
    class xVec3 stNormal; // offset 0x3C, size 0xC
    class xVec3 tgNormal; // offset 0x48, size 0xC
    class xVec3 crNormal; // offset 0x54, size 0xC
    class xVec3 honda; // offset 0x60, size 0xC
    float stSlack; // offset 0x6C, size 0x4
    float stSlackDist; // offset 0x70, size 0x4
    float tgSlack; // offset 0x74, size 0x4
    float tgSlackDist; // offset 0x78, size 0x4
    float crSlack; // offset 0x7C, size 0x4
    float currDist; // offset 0x80, size 0x4
    float lastDist; // offset 0x84, size 0x4
    class xVec3 lastRefs[5]; // offset 0x88, size 0x3C
    unsigned char reindex[5]; // offset 0xC4, size 0x5
    class xVec3 anchor; // offset 0xCC, size 0xC
    class xModelTag tag; // offset 0xD8, size 0x20
    class xModelInstance * model; // offset 0xF8, size 0x4
};
class xCylinder {
    // total size: 0x14
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
class RwTexture {
    // total size: 0x58
public:
    class RwRaster * raster; // offset 0x0, size 0x4
    class RwTexDictionary * dict; // offset 0x4, size 0x4
    class RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    unsigned int filterAddressing; // offset 0x50, size 0x4
    signed int refCount; // offset 0x54, size 0x4
};
class RxColorUnion {
    // total size: 0x4
public:
    union { // inferred
        class RwRGBA preLitColor; // offset 0x0, size 0x4
        class RwRGBA color; // offset 0x0, size 0x4
    };
};
class _tagLightningRot {
    // total size: 0x48
public:
    float deg[16]; // offset 0x0, size 0x40
    float degrees; // offset 0x40, size 0x4
    float height; // offset 0x44, size 0x4
};
class xPlatformPaddleData {
    // total size: 0x38
public:
    signed int startOrient; // offset 0x0, size 0x4
    signed int countOrient; // offset 0x4, size 0x4
    float orientLoop; // offset 0x8, size 0x4
    float orient[6]; // offset 0xC, size 0x18
    unsigned int paddleFlags; // offset 0x24, size 0x4
    float rotateSpeed; // offset 0x28, size 0x4
    float accelTime; // offset 0x2C, size 0x4
    float decelTime; // offset 0x30, size 0x4
    float hubRadius; // offset 0x34, size 0x4
};
class RxClusterDefinition {
    // total size: 0x10
public:
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    char * attributeSet; // offset 0xC, size 0x4
};
class zEGenerator : public zEnt {
    // total size: 0x114
public:
    class zEGenAsset * zasset; // offset 0xD4, size 0x4
    unsigned short flags; // offset 0xD8, size 0x2
    unsigned short num_dsts; // offset 0xDA, size 0x2
    float tmr; // offset 0xDC, size 0x4
    class xAnimFile * afile; // offset 0xE0, size 0x4
    class xVec3 src_pos; // offset 0xE4, size 0xC
    class xVec3 dst_pos; // offset 0xF0, size 0xC
    class xVec3 dst_off; // offset 0xFC, size 0xC
    class xBase * dst; // offset 0x108, size 0x4
    class zLightning * lfx[2]; // offset 0x10C, size 0x8
};
class xVolumeAsset {
    // total size: 0x0
};
class zFragParticle {
    // total size: 0x4
public:
    class zFragParticleAsset * fasset; // offset 0x0, size 0x4
};
class xEntSplineData {
    // total size: 0x4
public:
    signed int unknown; // offset 0x0, size 0x4
};
class zPlayerCarryInfo {
    // total size: 0xE0
public:
    class xEnt * grabbed; // offset 0x0, size 0x4
    unsigned int grabbedModelID; // offset 0x4, size 0x4
    class xMat4x3 spin; // offset 0x10, size 0x40
    class xEnt * throwTarget; // offset 0x50, size 0x4
    class xEnt * flyingToTarget; // offset 0x54, size 0x4
    float minDist; // offset 0x58, size 0x4
    float maxDist; // offset 0x5C, size 0x4
    float minHeight; // offset 0x60, size 0x4
    float maxHeight; // offset 0x64, size 0x4
    float maxCosAngle; // offset 0x68, size 0x4
    float throwMinDist; // offset 0x6C, size 0x4
    float throwMaxDist; // offset 0x70, size 0x4
    float throwMinHeight; // offset 0x74, size 0x4
    float throwMaxHeight; // offset 0x78, size 0x4
    float throwMaxStack; // offset 0x7C, size 0x4
    float throwMaxCosAngle; // offset 0x80, size 0x4
    float throwTargetRotRate; // offset 0x84, size 0x4
    float targetRot; // offset 0x88, size 0x4
    unsigned int grabTarget; // offset 0x8C, size 0x4
    class xVec3 grabOffset; // offset 0x90, size 0xC
    float grabLerpMin; // offset 0x9C, size 0x4
    float grabLerpMax; // offset 0xA0, size 0x4
    float grabLerpLast; // offset 0xA4, size 0x4
    unsigned int grabYclear; // offset 0xA8, size 0x4
    float throwGravity; // offset 0xAC, size 0x4
    float throwHeight; // offset 0xB0, size 0x4
    float throwDistance; // offset 0xB4, size 0x4
    float fruitFloorDecayMin; // offset 0xB8, size 0x4
    float fruitFloorDecayMax; // offset 0xBC, size 0x4
    float fruitFloorBounce; // offset 0xC0, size 0x4
    float fruitFloorFriction; // offset 0xC4, size 0x4
    float fruitCeilingBounce; // offset 0xC8, size 0x4
    float fruitWallBounce; // offset 0xCC, size 0x4
    float fruitLifetime; // offset 0xD0, size 0x4
    class xEnt * patLauncher; // offset 0xD4, size 0x4
};
class xMat3x3 {
    // total size: 0x30
public:
    class xVec3 right; // offset 0x0, size 0xC
    signed int flags; // offset 0xC, size 0x4
    class xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
};
class xPlatformPenData {
    // total size: 0x4
public:
    signed int nodata; // offset 0x0, size 0x4
};
enum RpIntersectType {
    rpINTERSECTNONE = 0,
    rpINTERSECTLINE = 1,
    rpINTERSECTPOINT = 2,
    rpINTERSECTSPHERE = 3,
    rpINTERSECTBOX = 4,
    rpINTERSECTATOMIC = 5,
    rpINTERSECTTYPEFORCEENUMSIZEINT = 2147483647,
};
class zSurfacePropUVFX {
    // total size: 0x68
public:
    signed int mode; // offset 0x0, size 0x4
    float rot; // offset 0x4, size 0x4
    float rot_spd; // offset 0x8, size 0x4
    float minmax_timer[2]; // offset 0xC, size 0x8
    class xVec3 trans; // offset 0x14, size 0xC
    class xVec3 trans_spd; // offset 0x20, size 0xC
    class xVec3 scale; // offset 0x2C, size 0xC
    class xVec3 scale_spd; // offset 0x38, size 0xC
    class xVec3 min; // offset 0x44, size 0xC
    class xVec3 max; // offset 0x50, size 0xC
    class xVec3 minmax_spd; // offset 0x5C, size 0xC
};
class xVolume : public xBase {
    // total size: 0x14
public:
    class xVolumeAsset * asset; // offset 0x10, size 0x4
};
class zSurfColorFX {
    // total size: 0x8
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short mode; // offset 0x2, size 0x2
    float speed; // offset 0x4, size 0x4
};
class _tagiTRCPadInfo {
    // total size: 0x4
public:
    enum _tagPadInit pad_init; // offset 0x0, size 0x4
};
class RwSphere {
    // total size: 0x10
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
class xCoef {
    // total size: 0x10
public:
    float a[4]; // offset 0x0, size 0x10
};
class xPECircle {
    // total size: 0x14
public:
    float radius; // offset 0x0, size 0x4
    float deflection; // offset 0x4, size 0x4
    class xVec3 dir; // offset 0x8, size 0xC
};
class xEntMotionPenData {
    // total size: 0x14
public:
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char plane; // offset 0x1, size 0x1
    unsigned char pad[2]; // offset 0x2, size 0x2
    float len; // offset 0x4, size 0x4
    float range; // offset 0x8, size 0x4
    float period; // offset 0xC, size 0x4
    float phase; // offset 0x10, size 0x4
};
class zDelayedStreamSound {
    // total size: 0xC
public:
    enum _tagePlayerStreamSnd start; // offset 0x0, size 0x4
    enum _tagePlayerStreamSnd end; // offset 0x4, size 0x4
    float delay; // offset 0x8, size 0x4
};
enum en_NPC_SOUND {
    NPC_STYP_BOGUS = -2,
    NPC_STYP_LISTEND = 0,
    NPC_STYP_ENCOUNTER = 1,
    NPC_STYP_CLANKING = 2,
    NPC_STYP_EXCLAIM = 3,
    NPC_STYP_OUCH = 4,
    NPC_STYP_CHEERING = 5,
    NPC_STYP_RESPAWN = 6,
    NPC_STYP_ALERT = 7,
    NPC_STYP_DIZZY = 8,
    NPC_STYP_DANCE = 9,
    NPC_STYP_LAUGH = 10,
    NPC_STYP_ATTACK = 11,
    NPC_STYP_PUNCH = 12,
    NPC_STYP_WEPLAUNCH = 13,
    NPC_STYP_LIGHTNING = 14,
    NPC_STYP_WARNBANG = 15,
    NPC_STYP_DEATH = 16,
    NPC_STYP_DEATHJELLY = 17,
    NPC_STYP_BONKED = 18,
    NPC_STYP_UNBONKED = 19,
    NPC_STYP_TIKISTACK = 20,
    NPC_STYP_TIKIEXPLODE = 21,
    NPC_STYP_TIKITHUNDER = 22,
    NPC_STYP_XSFXTALK = 23,
    NPC_STYP_ONELINER = 24,
    NPC_STYP_ONELINERTOO = 25,
    NPC_STYP_NOMORE = 26,
    NPC_STYP_FORCE = 2147483647,
};
class /* @class */ {
    // total size: 0x58
public:
    class xVec3 endPoint[2]; // offset 0x0, size 0x18
    class xVec3 direction; // offset 0x18, size 0xC
    float length; // offset 0x24, size 0x4
    float scale; // offset 0x28, size 0x4
    float width; // offset 0x2C, size 0x4
    float endParam[2]; // offset 0x30, size 0x8
    float endVel[2]; // offset 0x38, size 0x8
    float paramSpan[2]; // offset 0x40, size 0x8
    float arc_height; // offset 0x48, size 0x4
    class xVec3 arc_normal; // offset 0x4C, size 0xC
};
class xiMat4x3Union {
    // total size: 0x40
public:
    union { // inferred
        class xMat4x3 xm; // offset 0x0, size 0x40
        class RwMatrixTag im; // offset 0x0, size 0x40
    };
};
class /* @class */ {
    // total size: 0x4
public:
    union { // inferred
        class xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
        class RwV3d * p; // offset 0x0, size 0x4
    };
};
class xShadowPoly {
    // total size: 0x30
public:
    class xVec3 vert[3]; // offset 0x0, size 0x24
    class xVec3 norm; // offset 0x24, size 0xC
};
class xParabola {
    // total size: 0x24
public:
    class xVec3 initPos; // offset 0x0, size 0xC
    class xVec3 initVel; // offset 0xC, size 0xC
    float gravity; // offset 0x18, size 0x4
    float minTime; // offset 0x1C, size 0x4
    float maxTime; // offset 0x20, size 0x4
};
class RxOutputSpec {
    // total size: 0xC
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
class RxObjSpace3DVertex {
    // total size: 0x24
public:
    class RwV3d objVertex; // offset 0x0, size 0xC
    class RxColorUnion c; // offset 0xC, size 0x4
    class RwV3d objNormal; // offset 0x10, size 0xC
    float u; // offset 0x1C, size 0x4
    float v; // offset 0x20, size 0x4
};
class xParSysAsset : public xBaseAsset {
    // total size: 0x20
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned int parentParSysID; // offset 0xC, size 0x4
    unsigned int textureID; // offset 0x10, size 0x4
    unsigned char parFlags; // offset 0x14, size 0x1
    unsigned char priority; // offset 0x15, size 0x1
    unsigned short maxPar; // offset 0x16, size 0x2
    unsigned char renderFunc; // offset 0x18, size 0x1
    unsigned char renderSrcBlendMode; // offset 0x19, size 0x1
    unsigned char renderDstBlendMode; // offset 0x1A, size 0x1
    unsigned char cmdCount; // offset 0x1B, size 0x1
    unsigned int cmdSize; // offset 0x1C, size 0x4
};
class xEntMPData {
    // total size: 0x40
public:
    float curdist; // offset 0x0, size 0x4
    float speed; // offset 0x4, size 0x4
    class xMovePoint * dest; // offset 0x8, size 0x4
    class xMovePoint * src; // offset 0xC, size 0x4
    class xSpline3 * spl; // offset 0x10, size 0x4
    float dist; // offset 0x14, size 0x4
    unsigned int padalign; // offset 0x18, size 0x4
    class xQuat aquat; // offset 0x20, size 0x10
    class xQuat bquat; // offset 0x30, size 0x10
};
enum en_LASSO_STATUS {
    LASS_STAT_DONE = 0,
    LASS_STAT_PENDING = 1,
    LASS_STAT_GRABBING = 2,
    LASS_STAT_TOSSING = 3,
    LASS_STAT_NOMORE = 4,
    LASS_STAT_FORCEINT = 2147483647,
};
enum en_pendtype {
    PEND_TRAN_NONE = 0,
    PEND_TRAN_SET = 1,
    PEND_TRAN_PUSH = 2,
    PEND_TRAN_POP = 3,
    PEND_TRAN_POPTO = 4,
    PEND_TRAN_POPALL = 5,
    PEND_TRAN_SWAP = 6,
    PEND_TRAN_INPROG = 7,
    PEND_TRAN_NOMORE = 8,
};
class zFragProjectile {
    // total size: 0x60
public:
    class zFragProjectileAsset * fasset; // offset 0x0, size 0x4
    class xModelInstance * model; // offset 0x4, size 0x4
    class xParabola path; // offset 0x8, size 0x24
    float angVel; // offset 0x2C, size 0x4
    float t; // offset 0x30, size 0x4
    float tColl; // offset 0x34, size 0x4
    signed int numBounces; // offset 0x38, size 0x4
    float scale; // offset 0x3C, size 0x4
    float parentScale; // offset 0x40, size 0x4
    float alpha; // offset 0x44, size 0x4
    class xVec3 N; // offset 0x48, size 0xC
    class xVec3 axis; // offset 0x54, size 0xC
};
class _tagLightningZeus {
    // total size: 0xC
public:
    float normal_offset; // offset 0x0, size 0x4
    float back_offset; // offset 0x4, size 0x4
    float side_offset; // offset 0x8, size 0x4
};
class RxClusterRef {
    // total size: 0xC
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
enum en_npcbtyp {
    NPCP_BASIS_NONE = 0,
    NPCP_BASIS_EVILROBOT = 1,
    NPCP_BASIS_FRIENDLYROBOT = 2,
    NPCP_BASIS_LOVINGCITIZEN = 3,
    NPCP_BASIS_GRUMPYCITIZEN = 4,
    NPCP_BASIS_NOMORE = 5,
    NPCP_BASIS_FORCE = 2147483647,
};
class xPlatformConvBeltData {
    // total size: 0x4
public:
    float speed; // offset 0x0, size 0x4
};
class xModelBucket {
    // total size: 0x14
public:
    class RpAtomic * Data; // offset 0x0, size 0x4
    class RpAtomic * OriginalData; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
    signed int ClipFlags; // offset 0xC, size 0x4
    unsigned int PipeFlags; // offset 0x10, size 0x4
};
class RwCamera {
    // total size: 0x190
public:
    class RwObjectHasFrame object; // offset 0x0, size 0x14
    enum RwCameraProjection projectionType; // offset 0x14, size 0x4
    class RwCamera * (* beginUpdate)(class RwCamera *); // offset 0x18, size 0x4
    class RwCamera * (* endUpdate)(class RwCamera *); // offset 0x1C, size 0x4
    class RwMatrixTag viewMatrix; // offset 0x20, size 0x40
    class RwRaster * frameBuffer; // offset 0x60, size 0x4
    class RwRaster * zBuffer; // offset 0x64, size 0x4
    class RwV2d viewWindow; // offset 0x68, size 0x8
    class RwV2d recipViewWindow; // offset 0x70, size 0x8
    class RwV2d viewOffset; // offset 0x78, size 0x8
    float nearPlane; // offset 0x80, size 0x4
    float farPlane; // offset 0x84, size 0x4
    float fogPlane; // offset 0x88, size 0x4
    float zScale; // offset 0x8C, size 0x4
    float zShift; // offset 0x90, size 0x4
    class RwFrustumPlane frustumPlanes[6]; // offset 0x94, size 0x78
    class RwBBox frustumBoundBox; // offset 0x10C, size 0x18
    class RwV3d frustumCorners[8]; // offset 0x124, size 0x60
};
class xListItem {
    // total size: 0xC
public:
    signed int flg_travFilter; // offset 0x0, size 0x4
    class xGoal * next; // offset 0x4, size 0x4
    class xGoal * prev; // offset 0x8, size 0x4
};
class RwObject {
    // total size: 0x8
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
class RxIoSpec {
    // total size: 0x14
public:
    unsigned int numClustersOfInterest; // offset 0x0, size 0x4
    class RxClusterRef * clustersOfInterest; // offset 0x4, size 0x4
    enum RxClusterValidityReq * inputRequirements; // offset 0x8, size 0x4
    unsigned int numOutputs; // offset 0xC, size 0x4
    class RxOutputSpec * outputs; // offset 0x10, size 0x4
};
class _tagEmitSphere {
    // total size: 0x4
public:
    float radius; // offset 0x0, size 0x4
};
class xBaseAsset {
    // total size: 0x8
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
class zSurfUVFX {
    // total size: 0x60
public:
    signed int mode; // offset 0x0, size 0x4
    float rot; // offset 0x4, size 0x4
    float rot_spd; // offset 0x8, size 0x4
    class xVec3 trans; // offset 0xC, size 0xC
    class xVec3 trans_spd; // offset 0x18, size 0xC
    class xVec3 scale; // offset 0x24, size 0xC
    class xVec3 scale_spd; // offset 0x30, size 0xC
    class xVec3 min; // offset 0x3C, size 0xC
    class xVec3 max; // offset 0x48, size 0xC
    class xVec3 minmax_spd; // offset 0x54, size 0xC
};
enum zFragLocType {
    eFragLocBone = 0,
    eFragLocBoneUpdated = 1,
    eFragLocBoneLocal = 2,
    eFragLocBoneLocalUpdated = 3,
    eFragLocTag = 4,
    eFragLocTagUpdated = 5,
    eFragLocCount = 6,
    eFragLocForceSize = 2147483647,
};
class xEntMotionERData {
    // total size: 0x28
public:
    class xVec3 ret_pos; // offset 0x0, size 0xC
    class xVec3 ext_dpos; // offset 0xC, size 0xC
    float ext_tm; // offset 0x18, size 0x4
    float ext_wait_tm; // offset 0x1C, size 0x4
    float ret_tm; // offset 0x20, size 0x4
    float ret_wait_tm; // offset 0x24, size 0x4
};
class RwLine {
    // total size: 0x18
public:
    class RwV3d start; // offset 0x0, size 0xC
    class RwV3d end; // offset 0xC, size 0xC
};
class xShadowCache {
    // total size: 0x3070
public:
    class xVec3 pos; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
    unsigned int entCount; // offset 0x10, size 0x4
    unsigned int polyCount; // offset 0x14, size 0x4
    float polyRayDepth[5]; // offset 0x18, size 0x14
    unsigned short castOnEnt; // offset 0x2C, size 0x2
    unsigned short castOnPoly; // offset 0x2E, size 0x2
    class xEnt * ent[16]; // offset 0x30, size 0x40
    class xShadowPoly poly[256]; // offset 0x70, size 0x3000
};
class RpIntersectData {
    // total size: 0x18
public:
    union { // inferred
        class RwLine line; // offset 0x0, size 0x18
        class RwV3d point; // offset 0x0, size 0xC
        class RwSphere sphere; // offset 0x0, size 0x10
        class RwBBox box; // offset 0x0, size 0x18
        void * object; // offset 0x0, size 0x4
    };
};
class xPlatformFMData {
    // total size: 0x4
public:
    signed int nothingyet; // offset 0x0, size 0x4
};
class RxNodeMethods {
    // total size: 0x1C
public:
    signed int (* nodeBody)(class RxPipelineNode *, class RxPipelineNodeParam *); // offset 0x0, size 0x4
    signed int (* nodeInit)(class RxNodeDefinition *); // offset 0x4, size 0x4
    void (* nodeTerm)(class RxNodeDefinition *); // offset 0x8, size 0x4
    signed int (* pipelineNodeInit)(class RxPipelineNode *); // offset 0xC, size 0x4
    void (* pipelineNodeTerm)(class RxPipelineNode *); // offset 0x10, size 0x4
    signed int (* pipelineNodeConfig)(class RxPipelineNode *, class RxPipeline *); // offset 0x14, size 0x4
    unsigned int (* configMsgHandler)(class RxPipelineNode *, unsigned int, unsigned int, void *); // offset 0x18, size 0x4
};
enum _tagPadInit {
    ePadInit_Open1 = 0,
    ePadInit_WaitStable2 = 1,
    ePadInit_EnableAnalog3 = 2,
    ePadInit_EnableAnalog3LetsAllPissOffChris = 3,
    ePadInit_EnableRumble4 = 4,
    ePadInit_EnableRumbleTest5 = 5,
    ePadInit_PressureS6 = 6,
    ePadInit_PressureSTest7 = 7,
    ePadInit_Complete8a = 8,
    ePadInit_Complete8b = 9,
    ePadInit_Finished9 = 10,
};
class xPlatformFallingData {
    // total size: 0x8
public:
    float speed; // offset 0x0, size 0x4
    unsigned int bustModelID; // offset 0x4, size 0x4
};
enum _tagTRCState {
    TRC_Unknown = 0,
    TRC_PadMissing = 1,
    TRC_PadInserted = 2,
    TRC_PadInvalidNoAnalog = 3,
    TRC_PadInvalidType = 4,
    TRC_DiskNotIdentified = 5,
    TRC_DiskIdentified = 6,
    TRC_DiskTrayOpen = 7,
    TRC_DiskTrayClosed = 8,
    TRC_DiskNoDisk = 9,
    TRC_DiskInvalid = 10,
    TRC_DiskRetry = 11,
    TRC_DiskFatal = 12,
    TRC_Total = 13,
};

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013DA50 -> 0x0013DA5C
*/
// Range: 0x13DA50 -> 0x13DA5C
unsigned char zEntPlayerDyingInGoo() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13DA50 -> 0x13DA5C
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013DA60 -> 0x0013DBCC
*/
// Range: 0x13DA60 -> 0x13DBCC
void zEntPlayer_MinimalRender(class zEnt * ent /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13DA60 -> 0x13DBCC
        float reticle_order; // r20
        class xVec3 & loc; // r2
        class xVec3 cam_offset; // r29+0x60
        class xVec3 reticle_offset; // r29+0x50
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013DBD0 -> 0x0013DFA4
*/
// Range: 0x13DBD0 -> 0x13DFA4
unsigned char zEntPlayer_MinimalUpdate(class xEnt * ent /* r17 */, class xScene * sc /* r16 */, float dt /* r20 */, class xVec3 & drive_motion /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13DBD0 -> 0x13DFA4
        unsigned char stop_the_madness; // r19
        class xVec3 suboldpos; // r29+0xB0
        void (* old_move)(class xEnt *, class xScene *, float, class xEntFrame *); // r18
        class xVec3 req_motion; // r29+0xA0
        class xVec3 predrive_loc; // r29+0x90
        class xVec3 & floor_norm; // r2
        float ndotm; // r1
        class xCollis * fcoll; // r18
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013DFB0 -> 0x0013DFC4
*/
// Range: 0x13DFB0 -> 0x13DFC4
static void dont_move(class xEnt * ent /* r2 */, float dt /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13DFB0 -> 0x13DFC4
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013DFD0 -> 0x0013E0B4
*/
// Range: 0x13DFD0 -> 0x13E0B4
void zEntPlayer_UnloadSounds() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13DFD0 -> 0x13E0B4
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013E0C0 -> 0x0013E164
*/
// Range: 0x13E0C0 -> 0x13E164
void zEntPlayer_LoadSounds() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13E0C0 -> 0x13E164
        unsigned int bufsize; // r29+0x1C
        void * info; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013E170 -> 0x0013E270
*/
// Range: 0x13E170 -> 0x13E270
static void player_sound_hop_load(unsigned int hopid /* r18 */, signed int hip_or_hop /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13E170 -> 0x13E270
        signed long t; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013E270 -> 0x0013E31C
*/
// Range: 0x13E270 -> 0x13E31C
static void zEntPlayer_UpdateVelocityBlur() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13E270 -> 0x13E31C
        class xVec3 & vel; // r2
        float start_vel2; // r4
        float peak_vel2; // r3
        float blur; // r29+0x10
        float max_blur; // @ 0x0050E6E4
        float peak_vel; // @ 0x0050E6E0
        float start_vel; // @ 0x0050E6DC
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013E320 -> 0x0013F260
*/
// Range: 0x13E320 -> 0x13F260
static void PlayerLedgeUpdate(class xEnt * ent /* r17 */, class xScene * sc /* r30 */, float dt /* r23 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13E320 -> 0x13F260
        class zLedgeGrabParams * ledge; // r16
        float tnext; // r25
        float s; // r24
        class xMat4x3 tmpmat; // r29+0x780
        float animTime; // r6
        float timelerp; // r23
        float animDiffZ; // r22
        signed int sidx; // r3
        float sfactor; // r9
        float sscale; // r24
        class xNearFloorPoly nfpoly; // r29+0x700
        signed int chknum; // r21
        class xSurface * surface; // r3
        float neardx; // r22
        float neardz; // r21
        class xRay3 groundray; // r29+0x6D0
        class xCollis groundcoll; // r29+0x680
        class xVec3 bpos; // r29+0x7C0
        class xEntCollis collis; // r29+0xC0
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013F260 -> 0x0013F4A0
*/
// Range: 0x13F260 -> 0x13F4A0
static void PlayerLedgeInit(class zLedgeGrabParams * ledge /* r18 */, class xModelInstance * model /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13F260 -> 0x13F4A0
        signed int i; // r7
        class xAnimState * idle; // r16
        class xAnimState * grab; // r17
        class xVec3 tran[64]; // r29+0x440
        class xQuat quat[64]; // r29+0x40
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013F4A0 -> 0x0013F658
*/
// Range: 0x13F4A0 -> 0x13F658
static void PlayerHackFixBbashMiss(class xModelInstance * model /* r29+0xAC */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13F4A0 -> 0x13F658
        signed int i; // r21
        class xAnimState * astate; // r20
        class xVec3 tran[2]; // r29+0x6B0
        class iAnimSKBHeader * skb; // r19
        class xVec3 tranList[128]; // r29+0xB0
        signed int tranCount; // r2
        float bbspeed[4]; // @ 0x00407640
        float bbadjust[4][2]; // @ 0x00407620
        char * bbstate[4]; // @ 0x00407610
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013F660 -> 0x0013F76C
*/
// Range: 0x13F660 -> 0x13F76C
static void PlayerBeginCollideNoBupdate(class xEnt * ent /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13F660 -> 0x13F76C
        unsigned char idx; // r9
        class xCollis * coll; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013F770 -> 0x0013F778
*/
// Range: 0x13F770 -> 0x13F778
void zEntPlayer_SNDNotifyPlaying(unsigned int id /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13F770 -> 0x13F778
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013F780 -> 0x0013F7AC
*/
// Range: 0x13F780 -> 0x13F7AC
void zEntPlayer_SNDStopStream() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13F780 -> 0x13F7AC
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013F7B0 -> 0x0013F878
*/
// Range: 0x13F7B0 -> 0x13F878
void zEntPlayer_SNDStop(enum _tagePlayerSnd player_snd /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13F7B0 -> 0x13F878
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013F880 -> 0x0013F8E4
*/
// Range: 0x13F880 -> 0x13F8E4
void zEntPlayer_SNDSetPitch(enum _tagePlayerSnd player_snd /* r2 */, float new_pitch /* r29+0x10 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13F880 -> 0x13F8E4
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013F8F0 -> 0x0013F954
*/
// Range: 0x13F8F0 -> 0x13F954
void zEntPlayer_SNDSetVol(enum _tagePlayerSnd player_snd /* r2 */, float new_vol /* r29+0x10 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13F8F0 -> 0x13F954
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013F960 -> 0x0013FC84
*/
// Range: 0x13F960 -> 0x13FC84
void zEntPlayer_SNDPlayRandom(enum _tagePlayerSnd player_snd_start /* r18 */, enum _tagePlayerSnd player_snd_end /* r17 */, float delay /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13F960 -> 0x13FC84
        signed int diff; // r16
        signed int rand_array[32]; // r29+0x70
        signed int i; // r5
        signed int i; // r20
        unsigned int j; // r4
        signed int swap; // r6
        signed int pick_sound; // r9
        signed int i; // r4
        signed int possible; // r8
        unsigned int returned_snd_id; // r19
        signed int i; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013FC90 -> 0x001401B0
*/
// Range: 0x13FC90 -> 0x1401B0
void zEntPlayer_SNDPlayStreamRandom(enum _tagePlayerStreamSnd player_snd_start /* r19 */, enum _tagePlayerStreamSnd player_snd_end /* r18 */, float delay /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x13FC90 -> 0x1401B0
        signed int i; // r6
        signed int diff; // r17
        signed int i; // r6
        signed int i; // r9
        signed int rand_array[32]; // r29+0x80
        signed int i; // r5
        signed int i; // r16
        unsigned int j; // r4
        signed int swap; // r6
        signed int pick_sound; // r9
        signed int first_valid; // r21
        signed int num_valid; // r5
        signed int i; // r4
        signed int possible; // r10
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001401B0 -> 0x001401EC
*/
// Range: 0x1401B0 -> 0x1401EC
void zEntPlayer_SNDPlayStreamRandom(unsigned int lower /* r2 */, unsigned int upper /* r2 */, enum _tagePlayerStreamSnd player_snd_start /* r2 */, enum _tagePlayerStreamSnd player_snd_end /* r2 */, float delay /* r29+0x10 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1401B0 -> 0x1401EC
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001401F0 -> 0x0014030C
*/
// Range: 0x1401F0 -> 0x14030C
void zEntPlayer_SNDPlayStream(unsigned int lower /* r2 */, unsigned int upper /* r2 */, enum _tagePlayerStreamSnd player_snd /* r19 */, unsigned int flags /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1401F0 -> 0x14030C
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00140310 -> 0x001403B0
*/
// Range: 0x140310 -> 0x1403B0
void zEntPlayer_SNDPlayDelayed(float seconds /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x140310 -> 0x1403B0
        signed int i; // r17
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001403B0 -> 0x001404A0
*/
// Range: 0x1403B0 -> 0x1404A0
void zEntPlayer_SNDPlayStream(enum _tagePlayerStreamSnd player_snd /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1403B0 -> 0x1404A0
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001404A0 -> 0x001405A8
*/
// Range: 0x1404A0 -> 0x1405A8
void zEntPlayer_SNDPlay(enum _tagePlayerSnd player_snd /* r2 */, float delay /* r29+0x20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1404A0 -> 0x1405A8
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001405B0 -> 0x00142D30
*/
// Range: 0x1405B0 -> 0x142D30
static void zEntPlayer_SNDInit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1405B0 -> 0x142D30
        signed int player; // r9
        signed int snd; // r5
        signed int i; // r4
        signed int snd; // r6
        signed int snd; // r5
        signed int snd; // r6
        float minutes; // r1
        signed int i; // r5
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00142D30 -> 0x00142FD0
*/
// Range: 0x142D30 -> 0x142FD0
void zEntPlayer_LoadCheckPoint() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x142D30 -> 0x142FD0
        class xEnt & p; // r2
        class xModelInstance & m; // r17
        class xEntFrame & f; // r16
        class zCheckPoint & cp; // r4
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00142FD0 -> 0x00143018
*/
// Range: 0x142FD0 -> 0x143018
void zEntPlayer_StoreCheckPoint(class xVec3 * pos /* r2 */, float rot /* r29 */, unsigned int initCamID /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x142FD0 -> 0x143018
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00143020 -> 0x00143504
*/
// Range: 0x143020 -> 0x143504
static void PlayerRotMatchUpdateEnt(class xEnt * ent /* r18 */, float dt /* r22 */, void * fdata /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x143020 -> 0x143504
        class xFFXRotMatchState * rms; // r17
        class xCollis * coll; // r2
        signed int hit_it; // r19
        class xSurface * surf; // r2
        signed int grounded; // r16
        class xVec3 * fup; // r20
        class xVec3 * eup; // r19
        class xVec3 nfup; // r29+0x130
        class xVec3 neup; // r29+0x120
        float fup_len; // r29+0x140
        float eup_len; // r29+0x140
        float fdecl; // r21
        float edecl; // r20
        class xVec3 raxis; // r29+0x110
        float rang; // r29+0x140
        float dang; // r29+0x140
        class xMat4x3 rot; // r29+0xB0
        float s; // r1
        class xVec3 * eup; // r2
        class xVec3 neup; // r29+0x100
        float eup_len; // r29+0x140
        class xVec3 raxis; // r29+0xF0
        float rang; // r29+0x140
        float dang; // r29+0x140
        class xMat4x3 rot; // r29+0x70
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00143510 -> 0x00143608
*/
// Range: 0x143510 -> 0x143608
static void PlayerTeeterCheck(float dt /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x143510 -> 0x143608
        signed int i; // r7
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00143610 -> 0x00143EA0
*/
// Range: 0x143610 -> 0x143EA0
static void PlayerSwingUpdate(class xEnt * ent /* r20 */, float mag /* r25 */, float angle /* r23 */, float dt /* r24 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x143610 -> 0x143EA0
        float hangDist; // r23
        class xVec3 unitHang; // r29+0x100
        class xVec3 accel; // r29+0xF0
        class xVec3 unitDefl; // r29+0xE0
        class xVec3 unitVel; // r29+0xD0
        signed int i; // r5
        class xVec3 unitAccel; // r29+0xC0
        float lerpDiff; // r2
        float newLerp; // r1
        float curFactor; // r29+0x110
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00143EA0 -> 0x00145040
*/
// Range: 0x143EA0 -> 0x145040
signed int zEntPlayerEventCB(class xBase * from /* r16 */, class xBase * to /* r20 */, unsigned int toEvent /* r19 */, float * toParam /* r18 */, class xBase * toParamWidget /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x143EA0 -> 0x145040
        signed int iParam; // r17
        signed int num; // r4
        signed int s; // r3
        unsigned int p; // r4
        class zEnt * z; // r2
        char * astatename; // r16
        class zShrapnelAsset * shrap; // r2
        class xVec3 currVel; // r29+0x60
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00145040 -> 0x001455E0
*/
// Range: 0x145040 -> 0x1455E0
void zEntPlayerCollTrigger(class xEnt * ent /* r20 */, class xScene * sc /* r22 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x145040 -> 0x1455E0
        unsigned int i; // r19
        unsigned int inside; // r18
        class zEntTrigger * trig; // r17
        class xTriggerAsset * tasset; // r16
        class xIsect isect; // r29+0x170
        class xVec3 xformVec; // r29+0x1A0
        class xSphere sphere; // r29+0x160
        class xIsect isect; // r29+0x130
        class xCylinder cylinder; // r29+0x110
        class xIsect isect; // r29+0xE0
        class xSphere sphere; // r29+0xD0
        class xIsect isect; // r29+0xA0
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001455E0 -> 0x00145878
*/
// Range: 0x1455E0 -> 0x145878
void zEntPlayerCollide(class xEnt * ent /* r17 */, class xScene * sc /* r16 */, float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1455E0 -> 0x145878
        class xCollis * colls; // r5
        class xCollis * cend; // r5
        class xCollis * c; // r4
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00145880 -> 0x001466BC
*/
// Range: 0x145880 -> 0x1466BC
static void PlayerCollsSelectDepen(class xEnt * p /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x145880 -> 0x1466BC
        class xCollis * colls; // r20
        class xMat4x3 * mat; // r19
        class xCollis * c; // r18
        class xCollis * cend; // r17
        class xVec3 motion_delta; // r29+0xD0
        unsigned char idx; // r16
        class xSurface * surface; // r2
        class zSurfaceProps * surfaceProperties; // r2
        class xVec3 vec; // r29+0xC0
        class xCollis * curr; // r3
        class xCollis * coll; // r16
        float h_dot_n; // r20
        float depen_len; // r2
        class xEnt * cent; // r16
        class xSurface * surf; // r22
        class xCollis * cfloor; // r2
        class xCollis * cceil; // r16
        class xSurface * sfloor; // r2
        float floordot; // r29+0x100
        signed int i; // r6
        float w[4]; // r29+0x90
        signed int num_walls; // r5
        class xCollis * first_wall; // r4
        class xCollis * inside_wall; // r3
        class xCollis * cfront; // r7
        class xCollis * crear; // r6
        float dx; // r29+0xFC
        float dz; // r29+0xF8
        float dx; // r29+0xF4
        float dz; // r29+0xF0
        class xCollis * cleft; // r7
        class xCollis * cright; // r6
        float dx; // r29+0xEC
        float dz; // r29+0xE8
        float dx; // r29+0xE4
        float dz; // r29+0xE0
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001466C0 -> 0x001468E8
*/
// Range: 0x1466C0 -> 0x1468E8
static void CalcCombinedDepen(float & dx /* r2 */, float & dz /* r2 */, float ax /* r29 */, float az /* r29 */, float bx /* r29 */, float bz /* r29 */, float fudge /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1466C0 -> 0x1468E8
        float normX; // r7
        float normZ; // r6
        float nddot; // r4
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001468F0 -> 0x001469C8
*/
// Range: 0x1468F0 -> 0x1469C8
static void PlayerCollisTranslate(class xCollis * c /* r2 */, float x /* r29 */, float y /* r29 */, float z /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1468F0 -> 0x1469C8
        float dx; // r7
        float dy; // r6
        float dz; // r5
        float dist2; // r3
        float s; // r4
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001469D0 -> 0x00146E64
*/
// Range: 0x1469D0 -> 0x146E64
static class xEnt * PlayerCollCheckOneVillain(class xEnt * ent /* r18 */, void * data /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1469D0 -> 0x146E64
        class xEnt * p; // r17
        class xCollis * coll; // r16
        float playerOldRad; // r20
        class xSphere tmpsph; // r29+0x50
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00146E80 -> 0x001473B0
*/
// Range: 0x146E80 -> 0x1473B0
static unsigned int CollidePyramidBoxTop(class xCollis * coll /* r18 */, class xBox * box /* r17 */, float height /* r29+0x200 */, class xSphere * sph /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x146E80 -> 0x1473B0
        float dx; // r6
        float dz; // r4
        class xVec3 point; // r29+0x1F0
        class xVec3 corner[2]; // r29+0x1A0
        class xVec3 quaddir; // r29+0x1E0
        class xSweptSphere sws; // r29+0x50
        class xVec3 start; // r29+0x1D0
        class xVec3 end; // r29+0x1C0
        float normX; // r21
        float normZ; // r20
        float normMag; // r1
        float boxMaxSize; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001473B0 -> 0x0014795C
*/
// Range: 0x1473B0 -> 0x14795C
static class xEnt * PlayerCollCheckOneEnt(class xEnt * ent /* r18 */, void * data /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1473B0 -> 0x14795C
        class xEnt * p; // r17
        class xCollis * coll; // r16
        unsigned int modl_coll; // r19
        class xSphere tmpsph; // r29+0x50
        unsigned char ncolls; // r2
        unsigned char idx; // r5
        float rsum; // r7
        float dx; // r5
        float dy; // r3
        float dz; // r29+0x60
        float hsqr; // r29+0x60
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00147960 -> 0x001485E0
*/
// Range: 0x147960 -> 0x1485E0
void zEntPlayerReset(class xEnt * ent /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x147960 -> 0x1485E0
        class xAnimState * curr; // r7
        class xModelInstance * minst; // r4
        unsigned int index; // r3
        class iColor_tag black; // r29+0x2C
        class iColor_tag clear; // r29+0x28
        unsigned int i; // r4
        class xEnt * trackEnt; // r3
        class RwTexture * tex; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001485E0 -> 0x00148724
*/
// Range: 0x1485E0 -> 0x148724
void zEntPlayerPreReset() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1485E0 -> 0x148724
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00148730 -> 0x00148738
*/
// Range: 0x148730 -> 0x148738
void zEntPlayerExit() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x148730 -> 0x148738
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00148740 -> 0x001491BC
*/
// Range: 0x148740 -> 0x1491BC
static void zEntPlayerDriveUpdate(class xEnt * p /* r16 */, float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x148740 -> 0x1491BC
        class xCollis * coll; // r17
        class zPlatform * plat; // r19
        class xEntDrive * drv; // r18
        class zPlatform * oplat; // r17
        class xSurface * surf; // r2
        float jmph; // r29+0x70
        unsigned int superbounce; // r18
        float * jmphs; // r3
        class xVec3 * jmpdir; // r17
        class xAnimPlay * aplay; // r16
        class xAnimState * spring_state; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001491C0 -> 0x0014949C
*/
// Range: 0x1491C0 -> 0x14949C
static void zEntPlayerSurfDamageUpdate(class xEnt * p /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1491C0 -> 0x14949C
        class xCollis * coll; // r18
        class xCollis * cend; // r17
        class xSurface * surf; // r2
        signed int damaged; // r7
        class zSurfaceProps * prop; // r16
        float dx; // r4
        float dz; // r2
        float mag; // r1
        class xEnt * cent; // r6
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001494A0 -> 0x00149538
*/
// Range: 0x1494A0 -> 0x149538
static void PlayerBoundUpdate(class xEnt * ent /* r16 */, class xVec3 * pos /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1494A0 -> 0x149538
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00149540 -> 0x001495F4
*/
// Range: 0x149540 -> 0x1495F4
static unsigned int PlayerDepenQuery(class xCollis * coll /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x149540 -> 0x1495F4
        class xSurface * surf; // r2
        class zSurfaceProps * prop; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00149600 -> 0x0014A498
*/
// Range: 0x149600 -> 0x14A498
static void zEntPlayerFloorUpdate(class xEnt * p /* r23 */, float dt /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x149600 -> 0x14A498
        class xCollis * fcoll; // r29+0xB0
        class xSurface * fsurf; // r21
        class xVec3 * vel; // r16
        float velmag; // r20
        float decelmag; // r4
        float slickLerp; // r1
        class xVec3 * fnorm; // r30
        class xRay3 ray; // r29+0x140
        class xCollis rcoll; // r29+0xF0
        class xEnt * fent; // r20
        signed int i; // r19
        float dave; // r20
        signed int safecount; // r18
        float dmin; // r3
        float dmax; // r2
        class xVec3 * vel; // r16
        class xVec3 X; // r29+0x180
        class xVec3 D; // r29+0x170
        class xMat3x3 N_to_Up; // r29+0xC0
        float ddotm; // r2
        float s; // r2
        float s; // r2
        class xVec3 lorigins[4]; // @ 0x00407590
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0014A4A0 -> 0x0014A7E4
*/
// Range: 0x14A4A0 -> 0x14A7E4
static void zEntPlayerTSlideUpdate(class xEnt * p /* r16 */, float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14A4A0 -> 0x14A7E4
        float t; // r2
        float s; // r1
        float t; // r2
        float s; // r1
        float tmax; // @ 0x0050F4A8
        signed char @11329; // @ 0x0050F4AC
        float tmax; // @ 0x0050F4A0
        signed char @11317; // @ 0x0050F4A4
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0014A7F0 -> 0x0014B438
*/
// Range: 0x14A7F0 -> 0x14B438
static void SlideTrackUpdate(class xEnt * p /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14A7F0 -> 0x14B438
        class xCollis colltmp; // r29+0x1B0
        class xSphere collsph; // r29+0x1A0
        class xQCData qcd; // r29+0x180
        class RpIntersection isect; // r29+0x160
        class xVec3 * center; // r16
        class TrackPolyData tpoly; // r29+0x100
        signed int triIndex; // r19
        unsigned int i; // r18
        class xEnt * trackEnt; // r17
        class RwFrame * frame; // r4
        class RpGeometry * geom; // r3
        class RpTriangle * tri; // r15
        class RwTexCoords * tex; // r14
        class RwV3d * vert; // r13
        unsigned short * triidx; // r2
        float denom; // r20
        float vcenter; // r17
        float dvdx; // r29+0x200
        float dvdz; // r3
        float mag; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0014B440 -> 0x0014B9CC
*/
// Range: 0x14B440 -> 0x14B9CC
static class RpCollisionTriangle * nearestTrackCB(class RpCollisionTriangle * collTriangle /* r2 */, void * data /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14B440 -> 0x14B9CC
        class TrackPolyData * tpoly; // r2
        float currnear; // r3
        signed int currvert; // r4
        signed int curredge; // r3
        class xVec3 xformVert[4]; // r29+0x30
        signed int i; // r10
        float pdx[3]; // r29+0x70
        float pdz[3]; // r29+0x60
        float numer; // r20
        float denom; // r4
        float t; // r5
        float testdist2; // r4
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0014B9D0 -> 0x0014C058
*/
// Range: 0x14B9D0 -> 0x14C058
static void zEntPlayerVelUpdate(class xEnt * ent /* r17 */, float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14B9D0 -> 0x14C058
        class xVec3 * v; // r16
        float min; // r1
        float interp; // r4
        float speedMult; // r1
        float gft; // r29+0x50
        float s; // r1
        class xCollis * coll; // r4
        class xEnt * flent; // r5
        float mft; // r2
        float rft; // r1
        float gft; // r2
        float s; // r1
        float aft; // r2
        float s; // r1
        float velen2; // r29+0x50
        class xCollis * colls; // r6
        class xCollis * coll; // r2
        signed int i; // r5
        float dh; // r1
        float sft; // r4
        float s; // r2
        float h_dot_v; // r1
        float v_dot_n; // r1
        float s; // r2
        class xVec3 boost; // r29+0x40
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0014C060 -> 0x0014C1DC
*/
// Range: 0x14C060 -> 0x14C1DC
static void zEntPlayerEGenUpdate(class xEnt * p /* r21 */, class xScene * sc /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14C060 -> 0x14C1DC
        class xCollis * earc_coll; // r20
        unsigned int i; // r19
        class zEGenerator * eg; // r18
        class xIsect isx; // r29+0x90
        float ra; // r4
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0014C1E0 -> 0x0014C83C
*/
// Range: 0x14C1E0 -> 0x14C83C
static void zEntPlayerJumpUpdate(class xEnt * ent /* r16 */, float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14C1E0 -> 0x14C83C
        float lerp; // r3
        class xCollis * cfloor; // r4
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0014C840 -> 0x0014CAA0
*/
// Range: 0x14C840 -> 0x14CAA0
static void zEntPlayerJumpLand(class xEnt * ent /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14C840 -> 0x14CAA0
        float diff; // r21
        float vol; // r20
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0014CAA0 -> 0x0014CB28
*/
// Range: 0x14CAA0 -> 0x14CB28
void zEntPlayerJumpStart(class xEnt * ent /* r2 */, class zJumpParam * jump /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14CAA0 -> 0x14CB28
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0014CB30 -> 0x0014CB80
*/
// Range: 0x14CB30 -> 0x14CB80
void CalcJumpImpulse(class zJumpParam * param /* r16 */, class zPlayerSettings * settings /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14CB30 -> 0x14CB80
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0014CB80 -> 0x0014CE14
*/
// Range: 0x14CB80 -> 0x14CE14
static float CalcJumpImpulse_Smooth(float g /* r29+0x50 */, float j /* r29+0x50 */, float h /* r29+0x50 */, float Tgc /* r29 */, float Tgs /* r29+0x50 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14CB80 -> 0x14CE14
        unsigned int i; // r5
        unsigned int solcnt; // r2
        float A; // r1
        float B; // r29+0x50
        float Kc; // r28
        float D; // r6
        float AF; // r27
        float Kbf; // r26
        float Tm[3]; // r29+0x40
        float Tmfound; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0014CE20 -> 0x0014CF08
*/
// Range: 0x14CE20 -> 0x14CF08
void zEntPlayer_GivePatsSocksCurrentLevel(signed int quantity /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14CE20 -> 0x14CF08
        unsigned int level; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0014CF10 -> 0x0014CF8C
*/
// Range: 0x14CF10 -> 0x14CF8C
void zEntPlayer_GiveSpatula() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14CF10 -> 0x14CF8C
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0014CF90 -> 0x0014CFF8
*/
// Range: 0x14CF90 -> 0x14CFF8
void zEntPlayer_GiveHealth(signed int quantity /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14CF90 -> 0x14CFF8
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0014D000 -> 0x0014D17C
*/
// Range: 0x14D000 -> 0x14D17C
unsigned int zEntPlayer_MoveInfo() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14D000 -> 0x14D17C
        unsigned int animflags; // r3
        unsigned int infoflags; // r18
        char * nam_ast; // r17
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0014D180 -> 0x0014DB9C
*/
// Range: 0x14D180 -> 0x14DB9C
signed int zEntPlayer_Damage(class xBase * src /* r17 */, unsigned int damage /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14D180 -> 0x14DB9C
        class iColor_tag c_inside; // r29+0x3C
        class iColor_tag c_outside; // r29+0x38
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0014DBA0 -> 0x0014DCBC
*/
// Range: 0x14DBA0 -> 0x14DCBC
void zEntPlayer_DamageKnockIntoAir(float height /* r29+0x10 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14DBA0 -> 0x14DCBC
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0014DCC0 -> 0x0014DDB0
*/
// Range: 0x14DCC0 -> 0x14DDB0
signed int zEntPlayer_DamageNPCKnockBack(class xBase * src /* r2 */, unsigned int damage /* r2 */, class xVec3 * npcPos /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14DCC0 -> 0x14DDB0
        float dx; // r4
        float dz; // r3
        float mag; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0014DDB0 -> 0x0014DE28
*/
// Range: 0x14DDB0 -> 0x14DE28
signed int zEntPlayer_Damage(class xBase * src /* r2 */, unsigned int damage /* r2 */, class xVec3 * knockback /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14DDB0 -> 0x14DE28
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0014DE30 -> 0x0014DE60
*/
// Range: 0x14DE30 -> 0x14DE60
void zEntPlayer_setBoulderMode(unsigned int mode /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14DE30 -> 0x14DE60
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0014DE60 -> 0x0014E360
*/
// Range: 0x14DE60 -> 0x14E360
static void zEntPlayer_Move(class xEnt * ent /* r17 */, float dt /* r20 */, class xEntFrame * frame /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14DE60 -> 0x14E360
        signed int px; // r7
        signed int pz; // r6
        class xVec3 inverseNormal; // r29+0x70
        class zPlayerGlobals & p; // r6
        class xVec3 damp; // r29+0x60
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0014E360 -> 0x0014EE8C
*/
// Range: 0x14E360 -> 0x14EE8C
void zEntPlayer_Render(class zEnt * ent /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14E360 -> 0x14EE8C
        float rootZadjust; // r20
        class RwMatrixTag rootOldMat; // r29+0x50
        class xAnimSingle * ablend; // r18
        class xVec3 rootZvec; // r29+0x100
        class xModelInstance * minst; // r5
        class xAnimSingle * asingle; // r18
        class xVec3 a; // r29+0xF0
        class xVec3 b; // r29+0xE0
        class xVec3 wand_center; // r29+0xD0
        unsigned int showShell; // r9
        class xModelInstance * minst; // r2
        unsigned int index; // r8
        float orderDot; // r20
        class xModelInstance * minst; // r17
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0014EE90 -> 0x0014EF98
*/
// Range: 0x14EE90 -> 0x14EF98
static void zEntPlayerCheckShoePop() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14EE90 -> 0x14EF98
        class xEnt & ent; // r20
        class xModelInstance * * mlist; // r7
        signed int bone_index[2]; // r29+0x68
        class xModelInstance * model_index[2]; // r29+0x60
        signed int i; // r19
        signed int bone; // r4
        class xModelInstance * m; // r18
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0014EFA0 -> 0x0014EFD4
*/
// Range: 0x14EFA0 -> 0x14EFD4
void zEntPlayerUpdateModel() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14EFA0 -> 0x14EFD4
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0014EFE0 -> 0x0014F65C
*/
// Range: 0x14EFE0 -> 0x14F65C
static void zEntPlayerUpdateModelSB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14EFE0 -> 0x14F65C
        class xEnt & ent; // r18
        class xModelInstance * * mlist; // r17
        class xModelInstance * m; // r4
        class xAnimSingle * asingle; // r16
        class xAnimState * tonguestate; // r2
        signed int bone_index[2]; // r29+0x98
        class xModelInstance * model_index[2]; // r29+0x90
        signed int i; // r21
        signed int bone; // r22
        float on_time; // r21
        float off_time; // r20
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0014F660 -> 0x0014FB7C
*/
// Range: 0x14F660 -> 0x14FB7C
static void zEntPlayer_ReticleRender() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14F660 -> 0x14FB7C
        float size; // r21
        float bounce; // r20
        float bound_radius; // r22
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0014FCA0 -> 0x0014FFAC
*/
// Range: 0x14FCA0 -> 0x14FFAC
static void zEntPlayer_BubbleBowlLaneRender(class zEnt * ent /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14FCA0 -> 0x14FFAC
        class xShadowCache cache; // r29+0xA0
        class xVec3 center; // r29+0x3110
        float factor; // r21
        class xMat4x3 matrix; // r29+0x60
        unsigned int i; // r16
        class xEnt * ep; // r19
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0014FFB0 -> 0x001500A8
*/
// Range: 0x14FFB0 -> 0x1500A8
void zEntPlayer_ShadowModelDisable() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x14FFB0 -> 0x1500A8
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001500B0 -> 0x001501A8
*/
// Range: 0x1500B0 -> 0x1501A8
void zEntPlayer_ShadowModelEnable() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1500B0 -> 0x1501A8
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001501B0 -> 0x001501BC
*/
// Range: 0x1501B0 -> 0x1501BC
void zEntPlayer_PatrickLaunch(class xEnt * patLauncher /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1501B0 -> 0x1501BC
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001501C0 -> 0x00150734
*/
// Range: 0x1501C0 -> 0x150734
void zEntPlayer_CheckCritterContact(class xEnt * player /* r20 */, float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1501C0 -> 0x150734
        signed int i; // r19
        class xEntCollis * plyrcol; // r22
        class xCollis * colrec; // r3
        class zNPCCommon * npc; // r18
        class xPsyche * psy; // r17
        float tym_inGoal; // r29+0x100
        unsigned int anid_player; // r7
        signed int found; // r3
        signed int k; // r6
        signed int k; // r6
        unsigned int mvinf; // r2
        class xVec3 dir_push; // r29+0xF0
        class xVec3 vel_push; // r29+0xE0
        unsigned int hashes_pa[3]; // @ 0x0051BF58
        unsigned int hashes_ss[3]; // @ 0x0051BF48
        signed char @10192; // @ 0x0050F49C
        signed char @10189; // @ 0x0050F498
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00150740 -> 0x001567E0
*/
// Range: 0x150740 -> 0x1567E0
void zEntPlayer_Update(class xEnt * ent /* r20 */, class xScene * sc /* r19 */, float dt /* r23 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x150740 -> 0x1567E0
        signed int j; // r4
        class xAnimState * astate; // r3
        float mvelx; // r29+0x11D0
        float mvelz; // r29+0x11D0
        float s; // r29+0x11D0
        unsigned int total; // r2
        class xEnt * oldTarget; // r16
        class xEnt * oldTarget; // r16
        class xVec3 pos; // r29+0x11B0
        class xAnimSingle * single; // r2
        class xAnimState * astate; // r16
        class xParEmitterCustomSettings info; // r29+0xE40
        signed int j; // r16
        float ang; // r20
        class zScene * zsc; // r2
        class xParEmitterCustomSettings info; // r29+0xCD0
        class xVec3 vel; // r29+0x11A0
        class xVec3 tmp; // r29+0x1190
        float rate; // r29+0x11D0
        class xBound slideB; // r29+0xC80
        class xVec3 normvel; // r29+0x1180
        unsigned char * bonelist; // r16
        class xAnimSingle * single; // r17
        unsigned int num; // r17
        unsigned char * bp; // r18
        class xVec3 * posbuf; // r23
        class xVec3 * velbuf; // r29+0xB0
        class xVec3 * pp; // r16
        class xVec3 * vp; // r22
        unsigned int j; // r30
        class xMat4x3 mat; // r29+0xC40
        class xAnimSingle * single; // r16
        class xAnimState * astate; // r18
        class iColor_tag black; // r29+0x11CC
        class iColor_tag clear; // r29+0x11C8
        signed int anim_done; // r2
        unsigned int i; // r6
        float rad2; // r9
        float radold2; // r8
        float sdist2; // r5
        float sdistold2; // r29+0x11D0
        float ydist; // r1
        class xEnt * vill; // r4
        unsigned int stuckforce; // r16
        float playerVel; // r20
        float actualVel; // r1
        class xRay3 testRay; // r29+0xC10
        class xCollis testColl; // r29+0xBC0
        float old_yvel; // r20
        signed int num_updates; // r17
        signed int updidx; // r22
        class xVec3 suboldpos; // r29+0x1170
        class xVec3 predrive_pos; // r29+0x1160
        class xFFX * gust_fkt; // r16
        class xVec3 motion; // r29+0x1150
        float sett; // r1
        float ndotm; // r1
        float sett2; // r1
        float sft; // r2
        float fg; // r2
        float m; // r5
        float fg; // r29+0x11D0
        float s; // r2
        float m; // r2
        unsigned char hitting_floor; // r3
        unsigned char hitting_wall; // r4
        class xVec3 & player_loc; // r2
        float dist2; // r21
        class xVec3 driveDist; // r29+0x1140
        class xCollis bbc; // r29+0xB70
        class xBox bbox; // r29+0xB50
        float dist; // r29+0x11D0
        unsigned int redo_catchtunnel; // r16
        class xVec3 vstart; // r29+0x1130
        class xVec3 vend; // r29+0x1120
        class xSweptSphere sws; // r29+0xA00
        unsigned int iter; // r17
        class xSweptSphere swsredo[3]; // r29+0x610
        class xSweptSphere * swscurr; // r16
        class xVec3 totalTan; // r29+0x1110
        float tandot; // r1
        float catchdot; // r7
        float distremain; // r9
        class xVec3 deltaremain; // r29+0x1100
        class xCollis * wcoll; // r16
        class xCollis * gcoll; // r17
        float hdotm; // r21
        class xSurface * wsurf; // r2
        class xCollis * fcoll; // r16
        class xBase * b; // r2
        float dummy; // r29+0x11C4
        class xVec3 pos_rnd; // r29+0x10F0
        class xVec3 vel_rnd; // r29+0x10E0
        float dposx; // r29+0x11D0
        float dposy; // r29+0x11D0
        float dposz; // r29+0x11D0
        class xCollis * ceil; // r17
        class xEnt * destructent; // r16
        unsigned char destroyed; // r22
        class xVec3 bashRay; // r29+0x10D0
        class xEntBoulder * boul; // r2
        class xVec3 f; // r29+0x10C0
        class zNPCCommon * npc; // r2
        class xCollis * floor; // r17
        class xEnt * destructent; // r16
        unsigned char destroyed; // r22
        class xVec3 bounceRay; // r29+0x10B0
        class zNPCCommon * npc; // r2
        float stunlerp; // r3
        float mag; // r7
        float lerpspeed; // r8
        class xVec3 delta; // r29+0x10A0
        class xVec3 a; // r29+0x1090
        class xVec3 b; // r29+0x1080
        class xBound wandB; // r29+0x5C0
        class xSphere * wand; // r16
        class iColor_tag streakWandCol; // r29+0x11C0
        class iColor_tag streakWandCol2; // r29+0x11BC
        class xParEmitterCustomSettings info; // r29+0x450
        float size; // r1
        class xEntBoulder * boul; // r2
        char tmpStateName[256]; // r29+0x350
        class xAnimSingle * playerAnim; // r17
        class xAnimState * itemAnim; // r2
        class xVec3 tmptran; // r29+0x1070
        class xQuat tmpquat; // r29+0x340
        class xMat4x3 objMat; // r29+0x300
        class xVec3 rotatedLC; // r29+0x1060
        class xEntBoulder * boul; // r21
        class xMat4x3 targetMat; // r29+0x2C0
        float lerp; // r1
        float bottom; // r1
        class zNPCCommon * npc; // r2
        class zNPCCommon * npc; // r2
        class zNPCTiki * tiki; // r2
        class xVec3 tgtpos; // r29+0x1050
        class xVec3 tempPos; // r29+0x1040
        class xMat4x3 * tgtmat; // r4
        float throwHeightOffset; // r1
        class RwMatrixTag rootOldMat; // r29+0x280
        class xMat4x3 tmpMat; // r29+0x240
        class xVec3 ax; // r29+0x1030
        float rads; // r29+0x11D0
        float crs; // r29+0x11D0
        float dot; // r20
        class xMat3x3 rotMat; // r29+0x210
        class xMat3x3 hitchMat; // r29+0x1E0
        signed int hitch; // r16
        signed int wasCoptering; // r17
        float speed; // r2
        unsigned int heliSnd; // r2
        class xModelTag * meleeTag; // r18
        class xBound meleeB; // r29+0x190
        class zNPCCommon * npc; // r2
        float dist_sqr; // r1
        class xVec3 disp; // r29+0x1020
        unsigned int sliding; // r4
        class xEnt * oldTarget; // r22
        float currDist_sqr; // r22
        float maxDist_sqr; // r21
        float closestDist_sqr; // r20
        class xVec3 toTarget; // r29+0x1010
        class xEnt * closest; // r17
        unsigned int i; // r21
        class xEnt * targent; // r16
        class xNPCBasic * npc; // r2
        class xRay3 ray; // r29+0x160
        class xCollis rayCollis; // r29+0x110
        signed int canSwing; // r3
        signed int i; // r2
        class xEnt * targent; // r9
        float dist; // r29+0x11D0
        class xVec3 disp; // r29+0x1000
        class xModelTag * meleeTag; // r2
        class xBound meleeB; // r29+0xC0
        unsigned int streakBubbleSpinID; // @ 0x0050E6BC
        class xEntCollis old_collis; // @ 0x0051B990
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00156A50 -> 0x00156CFC
*/
// Range: 0x156A50 -> 0x156CFC
static class xEnt * zEntPlayer_FindGrabEnt(class xEnt * ent /* r21 */, class zScene * zsc /* r20 */, signed int * failed /* r19 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x156A50 -> 0x156CFC
        unsigned int i; // r18
        class xEnt * grabent; // r17
        float dx; // r6
        float dy; // r5
        float dz; // r4
        class xEntBoulder * boul; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00156D00 -> 0x00156E88
*/
// Range: 0x156D00 -> 0x156E88
static signed int zEntPlayerKnockToSafety(class xEnt * ent /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x156D00 -> 0x156E88
        float diffX; // r8
        float diffY; // r1
        float diffZ; // r7
        float popheight; // r29
        float ttot; // r2
        float velXZ; // r1
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00156E90 -> 0x0015702C
*/
// Range: 0x156E90 -> 0x15702C
void zEntPlayer_PredictPos(class xVec3 * pos /* r17 */, float timeIntoFuture /* r29+0x60 */, float leadFactor /* r29+0x60 */, signed int useTurn /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x156E90 -> 0x15702C
        class zPlayerGlobals * g; // r16
        float useVel; // r2
        float useAngV; // r1
        class xMat3x3 rotMat; // r29+0x30
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00157030 -> 0x00157334
*/
// Range: 0x157030 -> 0x157334
static void zEntPlayer_PredictionUpdate(class xEnt * ent /* r17 */, float dt /* r23 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x157030 -> 0x157334
        class zPlayerGlobals * g; // r16
        float lastVel; // r29+0x40
        float newAngV; // r29+0x40
        float r; // r1
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00157340 -> 0x00157CCC
*/
// Range: 0x157340 -> 0x157CCC
static void zEntPlayer_BoulderVehicleUpdate(class xEnt * ent /* r20 */, class xScene * sc /* r19 */, float dt /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x157340 -> 0x157CCC
        class xEntBoulder * shouldDamagePlayer; // r18
        unsigned char chkBackup; // r17
        unsigned char penBackup; // r16
        class xVec2 inputDefl; // r29+0x690
        class xEntCollis collis; // r29+0xB0
        signed int i; // r2
        class xEnt * dyn; // r7
        class xEntBoulder * boul; // r2
        float padDefl; // r20
        class xVec3 rotFudge; // r29+0x680
        float ang; // r29+0x6A0
        class xMat3x3 rotM; // r29+0x80
        class xVec3 heading; // r29+0x670
        float angle; // r29+0x69C
        float mag; // r29+0x698
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00157CD0 -> 0x00157CDC
*/
// Range: 0x157CD0 -> 0x157CDC
static void zEntPlayer_BoulderVehicleMove(class xEntFrame * frame /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x157CD0 -> 0x157CDC
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00157CE0 -> 0x00157CE8
*/
// Range: 0x157CE0 -> 0x157CE8
static void zEntPlayer_BoulderVehicleRender() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x157CE0 -> 0x157CE8
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00157CF0 -> 0x00157D18
*/
// Range: 0x157CF0 -> 0x157D18
static signed int BoulderVEventCB(class xBase * from /* r2 */, class xBase * to /* r2 */, unsigned int toEvent /* r2 */, float * toParam /* r2 */, class xBase * toParamWidget /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x157CF0 -> 0x157D18
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00157D20 -> 0x00157FB8
*/
// Range: 0x157D20 -> 0x157FB8
static void getPadDefl(class _tagPadAnalog * stick /* r2 */, class xVec2 * v /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x157D20 -> 0x157FB8
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00157FC0 -> 0x00158178
*/
// Range: 0x157FC0 -> 0x158178
static void zEntPlayer_SpringboardFX(class xEnt * ent /* r2 */, float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x157FC0 -> 0x158178
        class xParEmitterCustomSettings info; // r29+0x20
        float size; // r1
        float sLastSpringboardBubbleEmit; // @ 0x0050F490
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00158180 -> 0x00158758
*/
// Range: 0x158180 -> 0x158758
static void zEntPlayer_StreakFX(class xEnt * ent /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x158180 -> 0x158758
        signed int i; // r19
        signed int p; // r5
        signed int cp; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00158760 -> 0x00158768
*/
// Range: 0x158760 -> 0x158768
void zEntPlayer_Load() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x158760 -> 0x158768
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00158770 -> 0x00159A98
*/
// Range: 0x158770 -> 0x159A98
void zEntPlayer_Init(class xEnt * ent /* r19 */, class xEntAsset * asset /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x158770 -> 0x159A98
        unsigned char index; // r8
        class xModelInstance * m; // r7
        signed int i; // r6
        float bbncvtm; // r3
        unsigned int bufsize; // r29+0x6C
        void * info; // r2
        signed int i; // r8
        class xAnimTable * wettbl; // r17
        class xAnimTable * drytbl; // r2
        class xAnimState * wetstate; // r2
        class xAnimState * drystate; // r16
        class xAnimFile * wetfile; // r12
        class xAnimFile * dryfile; // r11
        signed int aa; // r10
        signed int numa; // r9
        class xFFXRotMatchState * rms; // r2
        unsigned int trailerHash; // r2
        unsigned int i; // r3
        class xEnt * hitch; // r12
        signed int drybob_anim_count; // @ 0x0050F48C
        float drybob_oldTime[64]; // @ 0x0051B890
        float * drybob_chgTime[64]; // @ 0x0051B790
        void * drybob_oldData[64]; // @ 0x0051B690
        void * * drybob_chgData[64]; // @ 0x0051B590
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00159AA0 -> 0x00159D90
*/
// Range: 0x159AA0 -> 0x159D90
static void load_player_ini() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x159AA0 -> 0x159D90
        unsigned int params_size; // r29+0x9C
        class xModelAssetParam * params; // r18
        unsigned int params_size; // r29+0x98
        class xModelAssetParam * params; // r18
        unsigned int params_size; // r29+0x94
        class xModelAssetParam * params; // r18
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00159D90 -> 0x00159EA4
*/
// Range: 0x159D90 -> 0x159EA4
static signed int load_talk_filter(unsigned char * filter /* r19 */, class xModelAssetParam * params /* r20 */, unsigned int params_size /* r16 */, signed int max_size /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x159D90 -> 0x159EA4
        signed int size; // r17
        float * non_choices; // r16
        signed int found; // r2
        signed int i; // r7
        unsigned char skip; // r6
        signed int j; // r5
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00159EB0 -> 0x00159F20
*/
// Range: 0x159EB0 -> 0x159F20
signed int zEntPlayer_IsSneaking() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x159EB0 -> 0x159F20
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00167BF0 -> 0x00168238
*/
// Range: 0x167BF0 -> 0x168238
static signed int CheckObjectAgainstMeleeBound(class xEnt * cbent /* r19 */, void * cbdata /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x167BF0 -> 0x168238
        class Melee_cbData * data; // r22
        signed int hitsomething; // r18
        class xEnt * ent; // r17
        class xBound * meleeB; // r16
        class xCollis meleeColl; // r29+0xB0
        class zNPCCommon * npc; // r2
        class iColor_tag c_inside; // r29+0x11C
        class iColor_tag c_outside; // r29+0x118
        class xEntBoulder * boul; // r2
        class xVec3 f; // r29+0x108
        unsigned int paddleFlags; // r4
        unsigned int worldSpaceNorm; // r21
        class xRay3 tempray; // r29+0x80
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00168240 -> 0x001682F4
*/
// Range: 0x168240 -> 0x1682F4
static signed int MeleeAttackBoundCollide(class xEnt * ent /* r2 */, class zScene * zsc /* r2 */, class xBound * meleeB /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x168240 -> 0x1682F4
        class Melee_cbData cbdata; // r29+0x30
        class xVec3 pos; // r29+0x40
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00168300 -> 0x001684E0
*/
// Range: 0x168300 -> 0x1684E0
static unsigned int StunRadiusCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x168300 -> 0x1684E0
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001684E0 -> 0x001684EC
*/
// Range: 0x1684E0 -> 0x1684EC
static unsigned int StunStartFallCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1684E0 -> 0x1684EC
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001684F0 -> 0x00168584
*/
// Range: 0x1684F0 -> 0x168584
static unsigned int BubbleBounceContrails(class xAnimSingle * single /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1684F0 -> 0x168584
        class xAnimState * astate; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00168590 -> 0x0016866C
*/
// Range: 0x168590 -> 0x16866C
static unsigned int BubbleBashContrails(class xAnimSingle * single /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x168590 -> 0x16866C
        class xAnimState * astate; // r17
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00168670 -> 0x0016874C
*/
// Range: 0x168670 -> 0x16874C
static unsigned int StunBubbleTrail(class xAnimSingle * single /* r18 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x168670 -> 0x16874C
        class xAnimState * astate; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00168750 -> 0x00168870
*/
// Range: 0x168750 -> 0x168870
static unsigned int LassoSwingReleaseCB(class xAnimTransition * tran /* r18 */, class xAnimSingle * anim /* r17 */, void * object /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x168750 -> 0x168870
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00168870 -> 0x00168944
*/
// Range: 0x168870 -> 0x168944
static unsigned int LassoSwingGroundedCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x168870 -> 0x168944
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00168950 -> 0x001689B0
*/
// Range: 0x168950 -> 0x1689B0
static unsigned int LassoSwingCB(class xAnimSingle * anim /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x168950 -> 0x1689B0
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001689B0 -> 0x00168C60
*/
// Range: 0x1689B0 -> 0x168C60
static unsigned int LassoSwingTossCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1689B0 -> 0x168C60
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00168C60 -> 0x00168CC8
*/
// Range: 0x168C60 -> 0x168CC8
static unsigned int LassoSwingGroundedBeginCB(class xAnimTransition * tran /* r18 */, class xAnimSingle * anim /* r17 */, void * object /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x168C60 -> 0x168CC8
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00168CD0 -> 0x00168EE4
*/
// Range: 0x168CD0 -> 0x168EE4
static unsigned int LassoSwingBeginCB(void * object /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x168CD0 -> 0x168EE4
        class xEnt * ent; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00168EF0 -> 0x00168F84
*/
// Range: 0x168EF0 -> 0x168F84
static unsigned int LassoSwingReleaseCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x168EF0 -> 0x168F84
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00168F90 -> 0x00168FB4
*/
// Range: 0x168F90 -> 0x168FB4
static unsigned int LassoSwingBeginCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x168F90 -> 0x168FB4
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00168FC0 -> 0x00169020
*/
// Range: 0x168FC0 -> 0x169020
static unsigned int LassoSwingGroundedBeginCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x168FC0 -> 0x169020
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00169020 -> 0x001690BC
*/
// Range: 0x169020 -> 0x1690BC
static unsigned int LassoStopCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x169020 -> 0x1690BC
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001690C0 -> 0x00169118
*/
// Range: 0x1690C0 -> 0x169118
static unsigned int SpatulaMeleeStopCB(class xAnimTransition * tran /* r2 */, class xAnimSingle * anim /* r2 */, void * object /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1690C0 -> 0x169118
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00169120 -> 0x0016916C
*/
// Range: 0x169120 -> 0x16916C
static unsigned int MeleeStopCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x169120 -> 0x16916C
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00169170 -> 0x001692A0
*/
// Range: 0x169170 -> 0x1692A0
static unsigned int LassoYankCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x169170 -> 0x1692A0
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001692A0 -> 0x0016947C
*/
// Range: 0x1692A0 -> 0x16947C
static unsigned int LassoDestroyCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1692A0 -> 0x16947C
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00169480 -> 0x00169758
*/
// Range: 0x169480 -> 0x169758
static unsigned int LassoFlyCB(void * object /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x169480 -> 0x169758
        class xEnt * ent; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00169760 -> 0x00169984
*/
// Range: 0x169760 -> 0x169984
static unsigned int LassoThrowCB(void * object /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x169760 -> 0x169984
        class xEnt * ent; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00169990 -> 0x00169BBC
*/
// Range: 0x169990 -> 0x169BBC
static unsigned int LassoStartCB(void * object /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x169990 -> 0x169BBC
        class xEnt * ent; // r2
        class zNPCCommon * npc; // r16
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00169BC0 -> 0x00169CE0
*/
// Range: 0x169BC0 -> 0x169CE0
static unsigned int MeleeCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x169BC0 -> 0x169CE0
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00169CE0 -> 0x00169E18
*/
// Range: 0x169CE0 -> 0x169E18
static unsigned int JumpMeleeCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x169CE0 -> 0x169E18
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00169E20 -> 0x00169EA8
*/
// Range: 0x169E20 -> 0x169EA8
static unsigned int LassoFailRunSlipCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x169E20 -> 0x169EA8
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00169EB0 -> 0x00169F98
*/
// Range: 0x169EB0 -> 0x169F98
static unsigned int LassoFailRunOutOfWorldCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x169EB0 -> 0x169F98
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00169FA0 -> 0x0016A090
*/
// Range: 0x169FA0 -> 0x16A090
static unsigned int LassoFailRunCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x169FA0 -> 0x16A090
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016A090 -> 0x0016A180
*/
// Range: 0x16A090 -> 0x16A180
static unsigned int LassoFailWalkCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16A090 -> 0x16A180
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016A180 -> 0x0016A218
*/
// Range: 0x16A180 -> 0x16A218
static unsigned int LassoFailIdleCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16A180 -> 0x16A218
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016A220 -> 0x0016A2A8
*/
// Range: 0x16A220 -> 0x16A2A8
static unsigned int LassoFailIdleSlipCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16A220 -> 0x16A2A8
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016A2B0 -> 0x0016A2B8
*/
// Range: 0x16A2B0 -> 0x16A2B8
static unsigned int LassoReyankCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16A2B0 -> 0x16A2B8
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016A2C0 -> 0x0016A2D0
*/
// Range: 0x16A2C0 -> 0x16A2D0
static unsigned int LassoDestroyCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16A2C0 -> 0x16A2D0
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016A2D0 -> 0x0016A2D8
*/
// Range: 0x16A2D0 -> 0x16A2D8
static unsigned int LassoAboutToDestroyCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16A2D0 -> 0x16A2D8
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016A2E0 -> 0x0016A2F0
*/
// Range: 0x16A2E0 -> 0x16A2F0
static unsigned int LassoStraightToDestroyCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16A2E0 -> 0x16A2F0
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016A2F0 -> 0x0016A308
*/
// Range: 0x16A2F0 -> 0x16A308
static unsigned int LassoLostTargetCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16A2F0 -> 0x16A308
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016A310 -> 0x0016A384
*/
// Range: 0x16A310 -> 0x16A384
static unsigned int LassoStartCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16A310 -> 0x16A384
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016A390 -> 0x0016A410
*/
// Range: 0x16A390 -> 0x16A410
static unsigned int MeleeCheck(class xAnimSingle * anim /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16A390 -> 0x16A410
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016A410 -> 0x0016A46C
*/
// Range: 0x16A410 -> 0x16A46C
void zEntPlayer_LassoNotify(enum en_LASSO_EVENT event /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16A410 -> 0x16A46C
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016A470 -> 0x0016A5C4
*/
// Range: 0x16A470 -> 0x16A5C4
static unsigned int PatrickGrabThrowCB(void * object /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16A470 -> 0x16A5C4
        class zEnt * ent; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016A5D0 -> 0x0016AC64
*/
// Range: 0x16A5D0 -> 0x16AC64
static class xEnt * GetPatrickTarget(class xEnt * ent /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16A5D0 -> 0x16AC64
        class xEnt * result; // r19
        class xCollis * coll; // r3
        class zPlatform * plat; // r2
        class xVec3 relpos; // r29+0xA0
        unsigned int i; // r22
        float bestTargetDot; // r21
        class xVec3 * bestTargetPos; // r21
        class zScene * zsc; // r20
        signed int grabbedIsFruit; // r23
        float maxHeight; // r20
        class xEnt * tgtent; // r19
        float dx; // r8
        float dy; // r2
        float dz; // r7
        float ddot; // r20
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016AC70 -> 0x0016AC94
*/
// Range: 0x16AC70 -> 0x16AC94
void zEntPlayerSpeakStop() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16AC70 -> 0x16AC94
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016ACA0 -> 0x0016AD74
*/
// Range: 0x16ACA0 -> 0x16AD74
void zEntPlayerSpeakStart(unsigned int sndid /* r17 */, signed int anim /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16ACA0 -> 0x16AD74
        unsigned char filter_size; // r17
        unsigned int which; // r3
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016AD80 -> 0x0016AE48
*/
// Range: 0x16AD80 -> 0x16AE48
static void speak_update(float dt /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16AD80 -> 0x16AE48
        float jawval; // r29+0x20
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016AE50 -> 0x0016AE68
*/
// Range: 0x16AE50 -> 0x16AE68
static unsigned int TalkDoneCheck(class xAnimTransition * tran /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16AE50 -> 0x16AE68
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016AE70 -> 0x0016AE88
*/
// Range: 0x16AE70 -> 0x16AE88
static unsigned int TalkCheck(class xAnimTransition * tran /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16AE70 -> 0x16AE88
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016AE90 -> 0x0016B344
*/
// Range: 0x16AE90 -> 0x16B344
static unsigned int PatrickGrabCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16AE90 -> 0x16B344
        class xAnimState * stat; // r2
        class xVec3 tmptran; // r29+0xD0
        class xQuat tmpquat; // r29+0xC0
        class xMat4x3 objMat; // r29+0x80
        class xMat4x3 targetMat; // r29+0x40
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016B350 -> 0x0016B438
*/
// Range: 0x16B350 -> 0x16B438
static unsigned int PatrickMeleeCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16B350 -> 0x16B438
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016B440 -> 0x0016B474
*/
// Range: 0x16B440 -> 0x16B474
static unsigned int PatrickStunCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16B440 -> 0x16B474
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016B480 -> 0x0016B4EC
*/
// Range: 0x16B480 -> 0x16B4EC
static unsigned int PatrickAttackCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16B480 -> 0x16B4EC
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016B4F0 -> 0x0016B540
*/
// Range: 0x16B4F0 -> 0x16B540
static unsigned int PatrickGrabThrow() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16B4F0 -> 0x16B540
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016B540 -> 0x0016B554
*/
// Range: 0x16B540 -> 0x16B554
static unsigned int PatrickGrabKill() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16B540 -> 0x16B554
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016B560 -> 0x0016B56C
*/
// Range: 0x16B560 -> 0x16B56C
static unsigned int PatrickGrabFailed() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16B560 -> 0x16B56C
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016B570 -> 0x0016B57C
*/
// Range: 0x16B570 -> 0x16B57C
static unsigned int PatrickGrabCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16B570 -> 0x16B57C
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016B580 -> 0x0016B5B8
*/
// Range: 0x16B580 -> 0x16B5B8
static unsigned int LedgeFinishCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16B580 -> 0x16B5B8
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016B5C0 -> 0x0016B728
*/
// Range: 0x16B5C0 -> 0x16B728
static unsigned int LedgeGrabCB(void * object /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16B5C0 -> 0x16B728
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016B730 -> 0x0016B75C
*/
// Range: 0x16B730 -> 0x16B75C
static unsigned int LedgeGrabCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16B730 -> 0x16B75C
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016B760 -> 0x0016B7F4
*/
// Range: 0x16B760 -> 0x16B7F4
static unsigned int TrackPrefallJumpCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16B760 -> 0x16B7F4
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016B800 -> 0x0016B820
*/
// Range: 0x16B800 -> 0x16B820
static unsigned int TrackFallCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16B800 -> 0x16B820
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016B820 -> 0x0016B84C
*/
// Range: 0x16B820 -> 0x16B84C
static unsigned int TrackFallCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16B820 -> 0x16B84C
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016B850 -> 0x0016B880
*/
// Range: 0x16B850 -> 0x16B880
static unsigned int NoslideTrackCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16B850 -> 0x16B880
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016B880 -> 0x0016B88C
*/
// Range: 0x16B880 -> 0x16B88C
static unsigned int NoslideTrackCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16B880 -> 0x16B88C
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016B890 -> 0x0016BB08
*/
// Range: 0x16B890 -> 0x16BB08
static unsigned int SlideTrackCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16B890 -> 0x16BB08
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016BB10 -> 0x0016BB20
*/
// Range: 0x16BB10 -> 0x16BB20
static unsigned int SlideTrackCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16BB10 -> 0x16BB20
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016BB20 -> 0x0016BE68
*/
// Range: 0x16BB20 -> 0x16BE68
static unsigned int BoulderRollDoneCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16BB20 -> 0x16BE68
        class xParEmitterCustomSettings info; // r29+0x70
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016BE70 -> 0x0016C328
*/
// Range: 0x16BE70 -> 0x16C328
static unsigned int BoulderRollCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16BE70 -> 0x16C328
        class xParEmitterCustomSettings info; // r29+0x70
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016C330 -> 0x0016C4C0
*/
// Range: 0x16C330 -> 0x16C4C0
static unsigned int BoulderRollWindupCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16C330 -> 0x16C4C0
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016C4C0 -> 0x0016C4E0
*/
// Range: 0x16C4C0 -> 0x16C4E0
static unsigned int BoulderRollCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16C4C0 -> 0x16C4E0
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016C4E0 -> 0x0016C514
*/
// Range: 0x16C4E0 -> 0x16C514
static unsigned int BoulderRollIdleCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16C4E0 -> 0x16C514
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016C520 -> 0x0016C554
*/
// Range: 0x16C520 -> 0x16C554
static unsigned int BoulderRollMoveCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16C520 -> 0x16C554
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016C560 -> 0x0016C678
*/
// Range: 0x16C560 -> 0x16C678
static unsigned int FallCheck(class xAnimSingle * anim /* r17 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16C560 -> 0x16C678
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016C680 -> 0x0016C698
*/
// Range: 0x16C680 -> 0x16C698
static unsigned int TongueDblSpinCB(class xAnimSingle * anim /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16C680 -> 0x16C698
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016C6A0 -> 0x0016C710
*/
// Range: 0x16C6A0 -> 0x16C710
static unsigned int TongueDblJumpCB(class xAnimTransition * tran /* r2 */, class xAnimSingle * anim /* r16 */, void * object /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16C6A0 -> 0x16C710
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016C710 -> 0x0016C958
*/
// Range: 0x16C710 -> 0x16C958
static unsigned int DblJumpCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16C710 -> 0x16C958
        float dirx; // r6
        float dirz; // r5
        float dbldirx; // r29
        float dbldirz; // r29
        float speed; // r4
        float dblspeed; // r29
        float len2; // r3
        float len_inv; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016C960 -> 0x0016CAAC
*/
// Range: 0x16C960 -> 0x16CAAC
static unsigned int DblJumpCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16C960 -> 0x16CAAC
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016CAB0 -> 0x0016CBAC
*/
// Range: 0x16CAB0 -> 0x16CBAC
static unsigned int BounceStopLCopterCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16CAB0 -> 0x16CBAC
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016CBB0 -> 0x0016CBF4
*/
// Range: 0x16CBB0 -> 0x16CBF4
static unsigned int BounceCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16CBB0 -> 0x16CBF4
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016CC00 -> 0x0016CC14
*/
// Range: 0x16CC00 -> 0x16CC14
static unsigned int BounceCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16CC00 -> 0x16CC14
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016CC20 -> 0x0016CD0C
*/
// Range: 0x16CC20 -> 0x16CD0C
static unsigned int JumpApexCheck(class xAnimSingle * anim /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16CC20 -> 0x16CD0C
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016CD10 -> 0x0016CF8C
*/
// Range: 0x16CD10 -> 0x16CF8C
static unsigned int JumpCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16CD10 -> 0x16CF8C
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016CF90 -> 0x0016CFD8
*/
// Range: 0x16CF90 -> 0x16CFD8
static unsigned int JumpCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16CF90 -> 0x16CFD8
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016CFE0 -> 0x0016CFF4
*/
// Range: 0x16CFE0 -> 0x16CFF4
static unsigned int WallJumpLandFlightCallback() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16CFE0 -> 0x16CFF4
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016D000 -> 0x0016D010
*/
// Range: 0x16D000 -> 0x16D010
static unsigned int WallJumpLandFlightCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16D000 -> 0x16D010
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016D010 -> 0x0016D024
*/
// Range: 0x16D010 -> 0x16D024
static unsigned int WallJumpFlightLandCallback() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16D010 -> 0x16D024
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016D030 -> 0x0016D040
*/
// Range: 0x16D030 -> 0x16D040
static unsigned int WallJumpFlightLandCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16D030 -> 0x16D040
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016D040 -> 0x0016D390
*/
// Range: 0x16D040 -> 0x16D390
static unsigned int WallJumpCallback() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16D040 -> 0x16D390
        class zJumpParam wallParam; // r29+0x30
        class xEntFrame * frame; // r16
        class xVec3 * velocity; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016D390 -> 0x0016D3CC
*/
// Range: 0x16D390 -> 0x16D3CC
static unsigned int WallJumpLaunchCallback() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16D390 -> 0x16D3CC
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016D3D0 -> 0x0016D440
*/
// Range: 0x16D3D0 -> 0x16D440
static unsigned int WallJumpLaunchCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16D3D0 -> 0x16D440
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016D440 -> 0x0016D5F8
*/
// Range: 0x16D440 -> 0x16D5F8
static void DoWallJumpCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16D440 -> 0x16D5F8
        class xEnt * ent; // r16
        class xVec3 start; // r29+0x180
        class xVec3 end; // r29+0x170
        class xSweptSphere sws; // r29+0x20
        class xSurface * surf; // r3
        class zSurfaceProps * surfaceProperties; // r4
        float sVerticalCos; // @ 0x0050E6B4
        float sSweptrad; // @ 0x0050E6B0
        float sAtdist; // @ 0x0050E6AC
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016D600 -> 0x0016D6D0
*/
// Range: 0x16D600 -> 0x16D6D0
static unsigned int StopLCopterCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16D600 -> 0x16D6D0
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016D6D0 -> 0x0016D88C
*/
// Range: 0x16D6D0 -> 0x16D88C
static unsigned int LCopterCB(void * object /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16D6D0 -> 0x16D88C
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016D890 -> 0x0016D8EC
*/
// Range: 0x16D890 -> 0x16D8EC
static unsigned int LCopterCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16D890 -> 0x16D8EC
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016D8F0 -> 0x0016DA98
*/
// Range: 0x16D8F0 -> 0x16DA98
static unsigned int SpatulaGrabStopCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16D8F0 -> 0x16DA98
        signed int result; // r2
        class xBase * sendTo; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016DAA0 -> 0x0016DDB8
*/
// Range: 0x16DAA0 -> 0x16DDB8
static unsigned int SpatulaGrabCB(void * object /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16DAA0 -> 0x16DDB8
        class xEnt * ent; // r2
        class xCollis rcoll; // r29+0x40
        class xRay3 r; // r29+0x10
        float one_len; // r1
        float delay; // r29+0x90
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016DDC0 -> 0x0016DE30
*/
// Range: 0x16DDC0 -> 0x16DE30
signed int zEntPlayer_InBossBattle() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16DDC0 -> 0x16DE30
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016DE30 -> 0x0016DE38
*/
// Range: 0x16DE30 -> 0x16DE38
static unsigned int SpatulaGrabCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16DE30 -> 0x16DE38
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016DE40 -> 0x0016DF38
*/
// Range: 0x16DE40 -> 0x16DF38
static unsigned int DefeatedCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16DE40 -> 0x16DF38
        signed int cheats; // r2
        class zShrapnelAsset * deathShrap; // r2
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016DF40 -> 0x0016DFA4
*/
// Range: 0x16DF40 -> 0x16DFA4
static unsigned int Defeated05Check(class xAnimTransition * tran /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16DF40 -> 0x16DFA4
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016DFB0 -> 0x0016E014
*/
// Range: 0x16DFB0 -> 0x16E014
static unsigned int Defeated04Check(class xAnimTransition * tran /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16DFB0 -> 0x16E014
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016E020 -> 0x0016E084
*/
// Range: 0x16E020 -> 0x16E084
static unsigned int Defeated03Check(class xAnimTransition * tran /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16E020 -> 0x16E084
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016E090 -> 0x0016E0F4
*/
// Range: 0x16E090 -> 0x16E0F4
static unsigned int Defeated02Check(class xAnimTransition * tran /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16E090 -> 0x16E0F4
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016E100 -> 0x0016E160
*/
// Range: 0x16E100 -> 0x16E160
static unsigned int Defeated01Check(class xAnimTransition * tran /* r16 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16E100 -> 0x16E160
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016E160 -> 0x0016E174
*/
// Range: 0x16E160 -> 0x16E174
static unsigned int Hit05CB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16E160 -> 0x16E174
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016E180 -> 0x0016E1A4
*/
// Range: 0x16E180 -> 0x16E1A4
static unsigned int Hit05Check() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16E180 -> 0x16E1A4
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016E1B0 -> 0x0016E1C4
*/
// Range: 0x16E1B0 -> 0x16E1C4
static unsigned int Hit04CB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16E1B0 -> 0x16E1C4
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016E1D0 -> 0x0016E1F4
*/
// Range: 0x16E1D0 -> 0x16E1F4
static unsigned int Hit04Check() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16E1D0 -> 0x16E1F4
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016E200 -> 0x0016E214
*/
// Range: 0x16E200 -> 0x16E214
static unsigned int Hit03CB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16E200 -> 0x16E214
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016E220 -> 0x0016E244
*/
// Range: 0x16E220 -> 0x16E244
static unsigned int Hit03Check() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16E220 -> 0x16E244
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016E250 -> 0x0016E264
*/
// Range: 0x16E250 -> 0x16E264
static unsigned int Hit02CB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16E250 -> 0x16E264
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016E270 -> 0x0016E294
*/
// Range: 0x16E270 -> 0x16E294
static unsigned int Hit02Check() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16E270 -> 0x16E294
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016E2A0 -> 0x0016E2B4
*/
// Range: 0x16E2A0 -> 0x16E2B4
static unsigned int Hit01CB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16E2A0 -> 0x16E2B4
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016E2C0 -> 0x0016E2E4
*/
// Range: 0x16E2C0 -> 0x16E2E4
static unsigned int Hit01Check() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16E2C0 -> 0x16E2E4
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016E2F0 -> 0x0016E328
*/
// Range: 0x16E2F0 -> 0x16E328
static unsigned int GooDeathCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16E2F0 -> 0x16E328
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016E330 -> 0x0016E378
*/
// Range: 0x16E330 -> 0x16E378
static unsigned int GooCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16E330 -> 0x16E378
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016E380 -> 0x0016E410
*/
// Range: 0x16E380 -> 0x16E410
static unsigned int BbowlRecoverRunSlipCheck(class xAnimSingle * anim /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16E380 -> 0x16E410
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016E410 -> 0x0016E500
*/
// Range: 0x16E410 -> 0x16E500
static unsigned int BbowlRecoverRunOutOfWorldCheck(class xAnimSingle * anim /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16E410 -> 0x16E500
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016E500 -> 0x0016E620
*/
// Range: 0x16E500 -> 0x16E620
static unsigned int BbowlRecoverRunVictoryCheck(class xAnimSingle * anim /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16E500 -> 0x16E620
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016E620 -> 0x0016E780
*/
// Range: 0x16E620 -> 0x16E780
static unsigned int BbowlRecoverRunScaredCheck(class xAnimSingle * anim /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16E620 -> 0x16E780
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016E780 -> 0x0016E8F0
*/
// Range: 0x16E780 -> 0x16E8F0
static unsigned int BbowlRecoverRunCheck(class xAnimSingle * anim /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16E780 -> 0x16E8F0
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016E8F0 -> 0x0016E9E8
*/
// Range: 0x16E8F0 -> 0x16E9E8
static unsigned int BbowlRecoverWalkCheck(class xAnimSingle * anim /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16E8F0 -> 0x16E9E8
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016E9F0 -> 0x0016EB78
*/
// Range: 0x16E9F0 -> 0x16EB78
static unsigned int BbowlTossEndCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16E9F0 -> 0x16EB78
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016EB80 -> 0x0016EBB8
*/
// Range: 0x16EB80 -> 0x16EBB8
static unsigned int BbowlWindupEndCheck(class xAnimSingle * anim /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16EB80 -> 0x16EBB8
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016EBC0 -> 0x0016EDFC
*/
// Range: 0x16EBC0 -> 0x16EDFC
static unsigned int BbowlCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16EBC0 -> 0x16EDFC
        class xEntFrame * frame; // r6
        float x; // r2
        float z; // r1
        float speed2; // r1
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016EE00 -> 0x0016EE84
*/
// Range: 0x16EE00 -> 0x16EE84
static unsigned int BbowlCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16EE00 -> 0x16EE84
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016EE90 -> 0x0016F0D0
*/
// Range: 0x16EE90 -> 0x16F0D0
static unsigned int BBounceToJumpCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16EE90 -> 0x16F0D0
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016F0D0 -> 0x0016F0D8
*/
// Range: 0x16F0D0 -> 0x16F0D8
static unsigned int BBounceToJumpCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16F0D0 -> 0x16F0D8
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016F0E0 -> 0x0016F29C
*/
// Range: 0x16F0E0 -> 0x16F29C
static unsigned int BBounceStrikeCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16F0E0 -> 0x16F29C
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016F2A0 -> 0x0016F2C0
*/
// Range: 0x16F2A0 -> 0x16F2C0
static unsigned int BBounceStrikeCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16F2A0 -> 0x16F2C0
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016F2C0 -> 0x0016F2E0
*/
// Range: 0x16F2C0 -> 0x16F2E0
static unsigned int BBounceAttackCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16F2C0 -> 0x16F2E0
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016F2E0 -> 0x0016F33C
*/
// Range: 0x16F2E0 -> 0x16F33C
static unsigned int BubbleBounceCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16F2E0 -> 0x16F33C
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016F340 -> 0x0016F390
*/
// Range: 0x16F340 -> 0x16F390
static unsigned int BubbleBounceCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16F340 -> 0x16F390
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016F390 -> 0x0016F3B4
*/
// Range: 0x16F390 -> 0x16F3B4
static unsigned int BBashToJumpCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16F390 -> 0x16F3B4
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016F3C0 -> 0x0016F3D4
*/
// Range: 0x16F3C0 -> 0x16F3D4
static unsigned int BBashStrikeCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16F3C0 -> 0x16F3D4
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016F3E0 -> 0x0016F3E8
*/
// Range: 0x16F3E0 -> 0x16F3E8
static unsigned int BBashStrikeCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16F3E0 -> 0x16F3E8
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016F3F0 -> 0x0016F5BC
*/
// Range: 0x16F3F0 -> 0x16F5BC
static unsigned int BubbleBashCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16F3F0 -> 0x16F5BC
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016F5C0 -> 0x0016F65C
*/
// Range: 0x16F5C0 -> 0x16F65C
static unsigned int BubbleBashCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16F5C0 -> 0x16F65C
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016F660 -> 0x0016F7E8
*/
// Range: 0x16F660 -> 0x16F7E8
static unsigned int BubbleSpinCB(class xAnimSingle * anim /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16F660 -> 0x16F7E8
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016F7F0 -> 0x0016F864
*/
// Range: 0x16F7F0 -> 0x16F864
static unsigned int BubbleSpinCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16F7F0 -> 0x16F864
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016F870 -> 0x0016F884
*/
// Range: 0x16F870 -> 0x16F884
static unsigned int SandyLandCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16F870 -> 0x16F884
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016F890 -> 0x0016F984
*/
// Range: 0x16F890 -> 0x16F984
static unsigned int LandSlipRunCallback() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16F890 -> 0x16F984
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016F990 -> 0x0016F9BC
*/
// Range: 0x16F990 -> 0x16F9BC
static unsigned int LandCallback() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16F990 -> 0x16F9BC
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016F9C0 -> 0x0016FA3C
*/
// Range: 0x16F9C0 -> 0x16FA3C
static unsigned int LandNoTrackSlipIdleCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16F9C0 -> 0x16FA3C
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016FA40 -> 0x0016FABC
*/
// Range: 0x16FA40 -> 0x16FABC
static unsigned int LandNoTrackSlipRunCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16FA40 -> 0x16FABC
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016FAC0 -> 0x0016FB18
*/
// Range: 0x16FAC0 -> 0x16FB18
static unsigned int LandNoTrackFastCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16FAC0 -> 0x16FB18
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016FB20 -> 0x0016FB70
*/
// Range: 0x16FB20 -> 0x16FB70
static unsigned int LandSlipRunCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16FB20 -> 0x16FB70
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016FB70 -> 0x0016FBC0
*/
// Range: 0x16FB70 -> 0x16FBC0
static unsigned int LandSlipIdleCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16FB70 -> 0x16FBC0
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016FBC0 -> 0x0016FC18
*/
// Range: 0x16FBC0 -> 0x16FC18
static unsigned int LandNoTrackWalkCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16FBC0 -> 0x16FC18
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016FC20 -> 0x0016FC4C
*/
// Range: 0x16FC20 -> 0x16FC4C
static unsigned int LandFastCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16FC20 -> 0x16FC4C
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016FC50 -> 0x0016FC7C
*/
// Range: 0x16FC50 -> 0x16FC7C
static unsigned int LandWalkCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16FC50 -> 0x16FC7C
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016FC80 -> 0x0016FCAC
*/
// Range: 0x16FC80 -> 0x16FCAC
static unsigned int LandRunCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16FC80 -> 0x16FCAC
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016FCB0 -> 0x0016FCD8
*/
// Range: 0x16FCB0 -> 0x16FCD8
static unsigned int LandHighCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16FCB0 -> 0x16FCD8
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016FCE0 -> 0x0016FD20
*/
// Range: 0x16FCE0 -> 0x16FD20
static unsigned int LandNoTrackCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16FCE0 -> 0x16FD20
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016FD20 -> 0x0016FD5C
*/
// Range: 0x16FD20 -> 0x16FD5C
static unsigned int LandTrackCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16FD20 -> 0x16FD5C
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016FD60 -> 0x0016FD74
*/
// Range: 0x16FD60 -> 0x16FD74
static unsigned int LandCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16FD60 -> 0x16FD74
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016FD80 -> 0x0016FDA8
*/
// Range: 0x16FD80 -> 0x16FDA8
static unsigned int InactiveFinishedCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16FD80 -> 0x16FDA8
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016FDB0 -> 0x0016FDC8
*/
// Range: 0x16FDB0 -> 0x16FDC8
static unsigned int InactiveCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16FDB0 -> 0x16FDC8
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016FDD0 -> 0x0016FE20
*/
// Range: 0x16FDD0 -> 0x16FE20
static unsigned int InactiveCheck(class xAnimTransition * tran /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16FDD0 -> 0x16FE20
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016FE20 -> 0x0016FED4
*/
// Range: 0x16FE20 -> 0x16FED4
static unsigned int IdleCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16FE20 -> 0x16FED4
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016FEE0 -> 0x0016FF90
*/
// Range: 0x16FEE0 -> 0x16FF90
static unsigned int NoSlipCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16FEE0 -> 0x16FF90
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0016FF90 -> 0x00170070
*/
// Range: 0x16FF90 -> 0x170070
static unsigned int SlipRunCB() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x16FF90 -> 0x170070
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170070 -> 0x00170084
*/
// Range: 0x170070 -> 0x170084
static unsigned int AnyStopCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x170070 -> 0x170084
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170090 -> 0x001700A0
*/
// Range: 0x170090 -> 0x1700A0
static unsigned int AnyMoveCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x170090 -> 0x1700A0
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001700A0 -> 0x00170108
*/
// Range: 0x1700A0 -> 0x170108
static unsigned int IdleSlipCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1700A0 -> 0x170108
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170110 -> 0x001701F0
*/
// Range: 0x170110 -> 0x1701F0
static unsigned int IdleScaredCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x170110 -> 0x1701F0
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001701F0 -> 0x00170298
*/
// Range: 0x1701F0 -> 0x170298
static unsigned int IdleVictoryCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1701F0 -> 0x170298
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001702A0 -> 0x00170390
*/
// Range: 0x1702A0 -> 0x170390
static unsigned int IdleStoicCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1702A0 -> 0x170390
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170390 -> 0x00170408
*/
// Range: 0x170390 -> 0x170408
static unsigned int IdleCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x170390 -> 0x170408
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170410 -> 0x0017053C
*/
// Range: 0x170410 -> 0x17053C
static unsigned int WalkScaredCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x170410 -> 0x17053C
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170540 -> 0x00170634
*/
// Range: 0x170540 -> 0x170634
static unsigned int WalkVictoryCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x170540 -> 0x170634
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170640 -> 0x0017077C
*/
// Range: 0x170640 -> 0x17077C
static unsigned int WalkStoicCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x170640 -> 0x17077C
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170780 -> 0x00170844
*/
// Range: 0x170780 -> 0x170844
static unsigned int WalkCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x170780 -> 0x170844
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170850 -> 0x0017090C
*/
// Range: 0x170850 -> 0x17090C
static unsigned int RunOutOfWorldCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x170850 -> 0x17090C
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170910 -> 0x00170978
*/
// Range: 0x170910 -> 0x170978
static unsigned int RunSlipCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x170910 -> 0x170978
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170980 -> 0x00170A74
*/
// Range: 0x170980 -> 0x170A74
static unsigned int RunVictoryCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x170980 -> 0x170A74
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170A80 -> 0x00170BAC
*/
// Range: 0x170A80 -> 0x170BAC
static unsigned int RunScaredCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x170A80 -> 0x170BAC
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170BB0 -> 0x00170CEC
*/
// Range: 0x170BB0 -> 0x170CEC
static unsigned int RunStoicCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x170BB0 -> 0x170CEC
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170CF0 -> 0x00170DB4
*/
// Range: 0x170CF0 -> 0x170DB4
static unsigned int RunAnyCheck() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x170CF0 -> 0x170DB4
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170DC0 -> 0x00170F00
*/
// Range: 0x170DC0 -> 0x170F00
static void InvReset() {
    // Blocks
    /* anonymous block */ {
        // Range: 0x170DC0 -> 0x170F00
        unsigned int i; // r18
        unsigned int & maxsocks; // r17
        char * level_prefix; // r2
        unsigned int level_mask; // r4
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00170F00 -> 0x00172CF4
*/
// Range: 0x170F00 -> 0x172CF4
static void PlayerAbsControl(class xEnt * ent /* r19 */, float x /* r27 */, float z /* r26 */, float dt /* r25 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x170F00 -> 0x172CF4
        unsigned int animUserFlag; // r18
        unsigned int blendUserFlag; // r17
        float angle; // r29+0xBC
        float mag; // r29+0xB8
        float scalemag; // r24
        float dir_dp; // r23
        float turnfactor; // r22
        float diffAngle; // r21
        float autodist2d; // r20
        float camAngle; // r29+0xC0
        class xMat4x3 * m; // r2
        class xVec3 euler; // r29+0xA8
        float rot; // r29+0xC0
        float dx; // r4
        float dz; // r2
        float ddot; // r29+0xC0
        float atime; // r4
        float lerp; // r1
        float rot; // r29+0xC0
        class xMat3x3 rotY; // r29+0x70
        float m; // r4
        float curFactor; // r29+0xC0
        class zPlayerGlobals * pg; // r16
        float slideVelMag; // r29+0xC0
        float slideAccel; // r2
        float accelX; // r20
        float accelZ; // r29+0xC0
        float fwdComponent; // r1
        float sideComponent; // r29+0xC0
        float veldown; // r4
        float fwdlerp; // r2
        float targetAngle; // r29+0xC0
        float targetLean; // r2
        unsigned int moveFlag; // r16
        class xVec3 * vel; // r2
        float accelMag; // r20
        float peakLerp; // r3
        float slickLerp; // r3
        float s; // r1
        float s; // r1
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00172D00 -> 0x00172E68
*/
// Range: 0x172D00 -> 0x172E68
static void TurnToFace(class xEnt * ent /* r17 */, class xVec3 * target /* r16 */, float speedLimit /* r22 */, float dt /* r21 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x172D00 -> 0x172E68
        class xVec3 currentFacing; // r29+0x40
        float angle; // r29+0x50
        float maxAngle; // r1
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00172E70 -> 0x00173084
*/
// Range: 0x172E70 -> 0x173084
static void DampenControls(float * angle /* r17 */, float * mag /* r16 */, float x /* r21 */, float y /* r20 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x172E70 -> 0x173084
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00173090 -> 0x0017309C
*/
// Range: 0x173090 -> 0x17309C
void SetPlayerKillsVillainTimer(float time /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x173090 -> 0x17309C
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001730A0 -> 0x001730AC
*/
// Range: 0x1730A0 -> 0x1730AC
void TellPlayerVillainIsNear(float visnear /* r29 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1730A0 -> 0x1730AC
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001730B0 -> 0x001731D4
*/
// Range: 0x1730B0 -> 0x1731D4
void zEntPlayerControlOff(enum zControlOwner owner /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1730B0 -> 0x1731D4
        unsigned int originalValue; // r5
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001731E0 -> 0x00173244
*/
// Range: 0x1731E0 -> 0x173244
void zEntPlayerControlOn(enum zControlOwner owner /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x1731E0 -> 0x173244
        unsigned int originalValue; // r4
    }
}

/*
    Compile unit: C:\SB\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00173250 -> 0x001735F8
*/
// Range: 0x173250 -> 0x1735F8
static void zEntPlayer_SpawnWandBubbles(class xVec3 * center /* r21 */, unsigned int count /* r2 */) {
    // Blocks
    /* anonymous block */ {
        // Range: 0x173250 -> 0x1735F8
        unsigned int num; // r20
        class xVec3 * posbuf; // r19
        class xVec3 * velbuf; // r22
        class xVec3 * pp; // r18
        class xVec3 * vp; // r17
        unsigned int j; // r16
        float f; // r2
    }
}

